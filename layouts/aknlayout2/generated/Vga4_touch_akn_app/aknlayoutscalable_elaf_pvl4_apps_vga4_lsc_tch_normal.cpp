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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000fa4a };

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
0xfab1,	// (0x0000f4fb) Screen

0xfabd,	// (0x0000f507) application_window

0xfaf9,	// (0x0000f543) area_bottom_pane_ParamLimits

0xfaf9,	// (0x0000f543) area_bottom_pane

0xfb32,	// (0x0000f57c) area_top_pane_ParamLimits

0xfb32,	// (0x0000f57c) area_top_pane

0x9645,	// (0x0001908f) call_video_uplink_pane_ParamLimits

0x9645,	// (0x0001908f) call_video_uplink_pane

0xfbc0,	// (0x0000f60a) main_pane_ParamLimits

0xfbc0,	// (0x0000f60a) main_pane

0xc036,	// (0x0001ba80) context_pane

0x3426,	// (0x00012e70) navi_pane

0x345a,	// (0x00012ea4) popup_cale_events_window_ParamLimits

0x345a,	// (0x00012ea4) popup_cale_events_window

0xc049,	// (0x0001ba93) popup_mup_playback_window

0x3472,	// (0x00012ebc) signal_pane

0x9dfb,	// (0x00019845) main_browser_pane

0xa018,	// (0x00019a62) main_burst_pane

0x313e,	// (0x00012b88) main_calc_pane

0xbfc4,	// (0x0001ba0e) main_cale_day_pane

0x01ed,	// (0x0000fc37) main_cale_month_pane

0xbfc4,	// (0x0001ba0e) main_cale_week_pane

0xa018,	// (0x00019a62) main_call_pane

0x9ab9,	// (0x00019503) main_call_poc_pane

0xa018,	// (0x00019a62) main_camera_pane

0xa018,	// (0x00019a62) main_chi_dic_pane

0xa8bb,	// (0x0001a305) main_clock_pane

0x9ab9,	// (0x00019503) main_fmradio_pane

0xa018,	// (0x00019a62) main_graph_messa_pane

0x9ab9,	// (0x00019503) main_help_pane

0x9dfb,	// (0x00019845) main_im_pane

0x9d14,	// (0x0001975e) main_image_pane_ParamLimits

0x9d14,	// (0x0001975e) main_image_pane

0x9ab9,	// (0x00019503) main_location2_pane

0xa018,	// (0x00019a62) main_location_pane

0x9d14,	// (0x0001975e) main_messa_pane

0x9ab9,	// (0x00019503) main_mp2_pane

0xa018,	// (0x00019a62) main_mp_pane

0x9ab9,	// (0x00019503) main_msg_pane

0x9ab9,	// (0x00019503) main_mup_eq_pane

0x9ab9,	// (0x00019503) main_mup_pane

0x9dfb,	// (0x00019845) main_notes_pane

0x9ab9,	// (0x00019503) main_pec_pane

0x9ab9,	// (0x00019503) main_phob_pane

0x9ab9,	// (0x00019503) main_pinb_pane

0x9ab9,	// (0x00019503) main_postcard_pane

0x9ab9,	// (0x00019503) main_qdial_pane

0xa018,	// (0x00019a62) main_skin_pane

0x9ab9,	// (0x00019503) main_smil2_pane

0xa018,	// (0x00019a62) main_smil_pane

0xa018,	// (0x00019a62) main_video_pane

0xa018,	// (0x00019a62) main_video_tele_pane

0x9d14,	// (0x0001975e) main_viewer_pane_ParamLimits

0x9d14,	// (0x0001975e) main_viewer_pane

0xa018,	// (0x00019a62) main_vorec_pane

0x3194,	// (0x00012bde) popup_blid_sat_info_window_ParamLimits

0x3194,	// (0x00012bde) popup_blid_sat_info_window

0x31f8,	// (0x00012c42) popup_dyc_status_message_window_ParamLimits

0x31f8,	// (0x00012c42) popup_dyc_status_message_window

0x3212,	// (0x00012c5c) popup_grid_large_graphic_window_ParamLimits

0x3212,	// (0x00012c5c) popup_grid_large_graphic_window

0x32d4,	// (0x00012d1e) popup_loc_request_window_ParamLimits

0x32d4,	// (0x00012d1e) popup_loc_request_window

0x33fa,	// (0x00012e44) popup_wml_address_window_ParamLimits

0x33fa,	// (0x00012e44) popup_wml_address_window

0x2f7c,	// (0x000129c6) call_muted_g1

0x2c0d,	// (0x00012657) popup_call_audio_conf_window_ParamLimits

0x2c0d,	// (0x00012657) popup_call_audio_conf_window

0x2f8c,	// (0x000129d6) popup_call_audio_first_window_ParamLimits

0x2f8c,	// (0x000129d6) popup_call_audio_first_window

0x3002,	// (0x00012a4c) popup_call_audio_in_window_ParamLimits

0x3002,	// (0x00012a4c) popup_call_audio_in_window

0x303e,	// (0x00012a88) popup_call_audio_out_window_ParamLimits

0x303e,	// (0x00012a88) popup_call_audio_out_window

0x3078,	// (0x00012ac2) popup_call_audio_second_window_ParamLimits

0x3078,	// (0x00012ac2) popup_call_audio_second_window

0x30ce,	// (0x00012b18) popup_call_audio_wait_window_ParamLimits

0x30ce,	// (0x00012b18) popup_call_audio_wait_window

0x3103,	// (0x00012b4d) popup_number_entry_window_ParamLimits

0x3103,	// (0x00012b4d) popup_number_entry_window

0x9671,	// (0x000190bb) bg_popup_call_pane_cp05_ParamLimits

0x9671,	// (0x000190bb) bg_popup_call_pane_cp05

0x9691,	// (0x000190db) popup_number_entry_window_t1

0x96a4,	// (0x000190ee) popup_number_entry_window_t2

0x96b6,	// (0x00019100) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0001eaf9) popup_number_entry_window_t

0x96fd,	// (0x00019147) text_title_cp2

0x9710,	// (0x0001915a) bg_popup_call_pane_cp_ParamLimits

0x9710,	// (0x0001915a) bg_popup_call_pane_cp

0x971e,	// (0x00019168) call_thumbnail_pane

0x9726,	// (0x00019170) popup_call_audio_in_window_g1_ParamLimits

0x9726,	// (0x00019170) popup_call_audio_in_window_g1

0x9732,	// (0x0001917c) popup_call_audio_in_window_g2_ParamLimits

0x9732,	// (0x0001917c) popup_call_audio_in_window_g2

0x973e,	// (0x00019188) popup_call_audio_in_window_g3_ParamLimits

0x973e,	// (0x00019188) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0001eb02) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0001eb02) popup_call_audio_in_window_g

0x974a,	// (0x00019194) popup_call_audio_in_window_t1_ParamLimits

0x974a,	// (0x00019194) popup_call_audio_in_window_t1

0x9766,	// (0x000191b0) popup_call_audio_in_window_t2_ParamLimits

0x9766,	// (0x000191b0) popup_call_audio_in_window_t2

0x9782,	// (0x000191cc) popup_call_audio_in_window_t3_ParamLimits

0x9782,	// (0x000191cc) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0001eb09) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0001eb09) popup_call_audio_in_window_t

0x9710,	// (0x0001915a) bg_popup_call_pane_cp01_ParamLimits

0x9710,	// (0x0001915a) bg_popup_call_pane_cp01

0x971e,	// (0x00019168) call_thumbnail_pane_cp02

0x9795,	// (0x000191df) call_type_pane_cp022

0x979d,	// (0x000191e7) popup_call_audio_out_window_g1_ParamLimits

0x979d,	// (0x000191e7) popup_call_audio_out_window_g1

0x97af,	// (0x000191f9) popup_call_audio_out_window_g2_ParamLimits

0x97af,	// (0x000191f9) popup_call_audio_out_window_g2

0x97bb,	// (0x00019205) popup_call_audio_out_window_g3_ParamLimits

0x97bb,	// (0x00019205) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0001eb10) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0001eb10) popup_call_audio_out_window_g

0x97cd,	// (0x00019217) popup_call_audio_out_window_t1_ParamLimits

0x97cd,	// (0x00019217) popup_call_audio_out_window_t1

0x97e5,	// (0x0001922f) popup_call_audio_out_window_t2_ParamLimits

0x97e5,	// (0x0001922f) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0001eb17) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0001eb17) popup_call_audio_out_window_t

0x97fa,	// (0x00019244) bg_popup_call_pane_ParamLimits

0x97fa,	// (0x00019244) bg_popup_call_pane

0xfd49,	// (0x0000f793) call_thumbnail_pane_cp_ParamLimits

0xfd49,	// (0x0000f793) call_thumbnail_pane_cp

0x987e,	// (0x000192c8) call_type_pane_cp01_ParamLimits

0x987e,	// (0x000192c8) call_type_pane_cp01

0x98c2,	// (0x0001930c) popup_call_audio_first_window_g1_ParamLimits

0x98c2,	// (0x0001930c) popup_call_audio_first_window_g1

0x990e,	// (0x00019358) popup_call_audio_first_window_g2_ParamLimits

0x990e,	// (0x00019358) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0001eb1c) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0001eb1c) popup_call_audio_first_window_g

0x9952,	// (0x0001939c) popup_call_audio_first_window_t1_ParamLimits

0x9952,	// (0x0001939c) popup_call_audio_first_window_t1

0x99fe,	// (0x00019448) popup_call_audio_first_window_t4_ParamLimits

0x99fe,	// (0x00019448) popup_call_audio_first_window_t4

0x9a8a,	// (0x000194d4) popup_call_audio_first_window_t5_ParamLimits

0x9a8a,	// (0x000194d4) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0001eb21) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0001eb21) popup_call_audio_first_window_t

0x9ab9,	// (0x00019503) bg_popup_call_pane_cp02

0x9ac3,	// (0x0001950d) call_type_pane_cp023

0x9acb,	// (0x00019515) popup_call_audio_wait_window_g1

0x9ad3,	// (0x0001951d) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0001eb28) popup_call_audio_wait_window_g

0x9adb,	// (0x00019525) popup_call_audio_wait_window_t3

0x9ae9,	// (0x00019533) bg_popup_call_pane_cp03_ParamLimits

0x9ae9,	// (0x00019533) bg_popup_call_pane_cp03

0x9b49,	// (0x00019593) call_thumbnail_pane_cp011_ParamLimits

0x9b49,	// (0x00019593) call_thumbnail_pane_cp011

0x9b55,	// (0x0001959f) call_type_pane_cp034_ParamLimits

0x9b55,	// (0x0001959f) call_type_pane_cp034

0x9b91,	// (0x000195db) popup_call_audio_second_window_g1_ParamLimits

0x9b91,	// (0x000195db) popup_call_audio_second_window_g1

0x9bcd,	// (0x00019617) popup_call_audio_second_window_g2_ParamLimits

0x9bcd,	// (0x00019617) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0001eb2d) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0001eb2d) popup_call_audio_second_window_g

0x9c09,	// (0x00019653) popup_call_audio_second_window_t1_ParamLimits

0x9c09,	// (0x00019653) popup_call_audio_second_window_t1

0x9c8a,	// (0x000196d4) popup_call_audio_second_window_t2_ParamLimits

0x9c8a,	// (0x000196d4) popup_call_audio_second_window_t2

0x9cc0,	// (0x0001970a) popup_call_audio_second_window_t3_ParamLimits

0x9cc0,	// (0x0001970a) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0001eb32) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0001eb32) popup_call_audio_second_window_t

0x9ab9,	// (0x00019503) bg_popup_call_pane_cp04

0x9cf6,	// (0x00019740) list_conf_pane

0x9cfe,	// (0x00019748) popup_call_audio_conf_window_t1

0x9d0c,	// (0x00019756) call_thumbnail_pane_g1

0x9d14,	// (0x0001975e) bg_pinb_pane_ParamLimits

0x9d14,	// (0x0001975e) bg_pinb_pane

0x9d22,	// (0x0001976c) find_pinb_pane

0x9d2b,	// (0x00019775) listscroll_pinb_pane_ParamLimits

0x9d2b,	// (0x00019775) listscroll_pinb_pane

0x9d3a,	// (0x00019784) pinb_bg_pane_g1

0xfd6d,	// (0x0000f7b7) pinb_bg_pane_g2

0xfd79,	// (0x0000f7c3) pinb_bg_pane_g3

0xfd85,	// (0x0000f7cf) pinb_bg_pane_g4

0xfd91,	// (0x0000f7db) pinb_bg_pane_g5

0xfd9d,	// (0x0000f7e7) pinb_bg_pane_g6

0xfda8,	// (0x0000f7f2) pinb_bg_pane_g7

0xfdb3,	// (0x0000f7fd) pinb_bg_pane_g8

0xfdbe,	// (0x0000f808) pinb_bg_pane_g9

0xfdc8,	// (0x0000f812) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0001eb39) pinb_bg_pane_g

0xfde5,	// (0x0000f82f) grid_pinb_pane

0xfdf0,	// (0x0000f83a) list_pinb_pane

0xfdfb,	// (0x0000f845) scroll_pane_cp01_ParamLimits

0xfdfb,	// (0x0000f845) scroll_pane_cp01

0x9d44,	// (0x0001978e) find_pinb_pane_g1_ParamLimits

0x9d44,	// (0x0001978e) find_pinb_pane_g1

0x9d5c,	// (0x000197a6) find_pinb_pane_t1

0x9d6e,	// (0x000197b8) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0001eb53) find_pinb_pane_t

0x9d83,	// (0x000197cd) input_focus_pane_cp01_ParamLimits

0x9d83,	// (0x000197cd) input_focus_pane_cp01

0xfe0d,	// (0x0000f857) cell_pinb_pane_ParamLimits

0xfe0d,	// (0x0000f857) cell_pinb_pane

0xfe2f,	// (0x0000f879) cell_pinb_pane_g1_ParamLimits

0xfe2f,	// (0x0000f879) cell_pinb_pane_g1

0xfe43,	// (0x0000f88d) cell_pinb_pane_g2_ParamLimits

0xfe43,	// (0x0000f88d) cell_pinb_pane_g2

0x9d8f,	// (0x000197d9) cell_pinb_pane_g3_ParamLimits

0x9d8f,	// (0x000197d9) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0001eb58) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0001eb58) cell_pinb_pane_g

0x9ab9,	// (0x00019503) grid_highlight_pane_cp01

0xfe4f,	// (0x0000f899) list_pinb_item_pane_ParamLimits

0xfe4f,	// (0x0000f899) list_pinb_item_pane

0x9ab9,	// (0x00019503) list_highlight_pane_cp02

0xfe62,	// (0x0000f8ac) list_pinb_item_pane_g1_ParamLimits

0xfe62,	// (0x0000f8ac) list_pinb_item_pane_g1

0xfe6f,	// (0x0000f8b9) list_pinb_item_pane_g2_ParamLimits

0xfe6f,	// (0x0000f8b9) list_pinb_item_pane_g2

0xfe7b,	// (0x0000f8c5) list_pinb_item_pane_g3_ParamLimits

0xfe7b,	// (0x0000f8c5) list_pinb_item_pane_g3

0xfe8c,	// (0x0000f8d6) list_pinb_item_pane_g4_ParamLimits

0xfe8c,	// (0x0000f8d6) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0001eb5f) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0001eb5f) list_pinb_item_pane_g

0xfe98,	// (0x0000f8e2) list_pinb_item_pane_t1_ParamLimits

0xfe98,	// (0x0000f8e2) list_pinb_item_pane_t1

0xfecf,	// (0x0000f919) calc_display_pane

0xfef4,	// (0x0000f93e) calc_paper_pane

0xff17,	// (0x0000f961) grid_calc_pane

0x9ab9,	// (0x00019503) bg_list_pane_cp01

0xff45,	// (0x0000f98f) clock_g1

0xff4d,	// (0x0000f997) clock_g2

0x0001,

0xf11e,	// (0x0001eb68) clock_g

0xff55,	// (0x0000f99f) clock_t1_ParamLimits

0xff55,	// (0x0000f99f) clock_t1

0xff6a,	// (0x0000f9b4) clock_t2_ParamLimits

0xff6a,	// (0x0000f9b4) clock_t2

0xff7c,	// (0x0000f9c6) clock_t3_ParamLimits

0xff7c,	// (0x0000f9c6) clock_t3

0xff8e,	// (0x0000f9d8) clock_t4_ParamLimits

0xff8e,	// (0x0000f9d8) clock_t4

0xffa0,	// (0x0000f9ea) clock_t5_ParamLimits

0xffa0,	// (0x0000f9ea) clock_t5

0xffb5,	// (0x0000f9ff) clock_t6_ParamLimits

0xffb5,	// (0x0000f9ff) clock_t6

0xffc7,	// (0x0000fa11) clock_t7_ParamLimits

0xffc7,	// (0x0000fa11) clock_t7

0xffd9,	// (0x0000fa23) clock_t8_ParamLimits

0xffd9,	// (0x0000fa23) clock_t8

0xffed,	// (0x0000fa37) clock_t9_ParamLimits

0xffed,	// (0x0000fa37) clock_t9

0x0008,

0xf123,	// (0x0001eb6d) clock_t_ParamLimits

0xf123,	// (0x0001eb6d) clock_t

0x9da3,	// (0x000197ed) popup_clock_analogue_window_cp02

0x9da3,	// (0x000197ed) popup_clock_digital_window_cp01

0x9dab,	// (0x000197f5) listscroll_help_pane

0x9ab9,	// (0x00019503) phob_pre_status_pane

0x9db5,	// (0x000197ff) grid_qdial_pane

0x9d14,	// (0x0001975e) listscroll_mce_pane

0x9d14,	// (0x0001975e) bg_notes_pane

0x9dbf,	// (0x00019809) list_notes_pane

0x0003,	// (0x0000fa4d) scroll_pane_cp06

0x9dcd,	// (0x00019817) bg_calc_paper_pane

0x9de1,	// (0x0001982b) list_calc_pane

0x9dfb,	// (0x00019845) bg_calc_display_pane

0x0017,	// (0x0000fa61) calc_display_pane_t1

0x0029,	// (0x0000fa73) calc_display_pane_t2

0x9e07,	// (0x00019851) calc_display_pane_t3

0x0002,

0xf136,	// (0x0001eb80) calc_display_pane_t

0x003b,	// (0x0000fa85) cell_calc_pane_ParamLimits

0x003b,	// (0x0000fa85) cell_calc_pane

0x9e19,	// (0x00019863) bg_calc_paper_pane_g1

0x9e25,	// (0x0001986f) bg_calc_paper_pane_g2

0x9e31,	// (0x0001987b) bg_calc_paper_pane_g3

0x9e3d,	// (0x00019887) bg_calc_paper_pane_g4

0x9e49,	// (0x00019893) bg_calc_paper_pane_g5

0x0076,	// (0x0000fac0) bg_calc_paper_pane_g6

0x0084,	// (0x0000face) bg_calc_paper_pane_g7

0x0092,	// (0x0000fadc) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0001eb87) bg_calc_paper_pane_g

0x00a5,	// (0x0000faef) calc_bg_paper_pane_g9

0x00b8,	// (0x0000fb02) list_calc_item_pane_ParamLimits

0x00b8,	// (0x0000fb02) list_calc_item_pane

0x9e55,	// (0x0001989f) list_calc_item_pane_g1

0x9e62,	// (0x000198ac) list_calc_item_pane_t1_ParamLimits

0x9e62,	// (0x000198ac) list_calc_item_pane_t1

0x00d0,	// (0x0000fb1a) list_calc_item_pane_t2_ParamLimits

0x00d0,	// (0x0000fb1a) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0001eb98) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0001eb98) list_calc_item_pane_t

0x9e74,	// (0x000198be) cell_calc_pane_g1

0x9e7e,	// (0x000198c8) grid_highlight_pane_cp02

0x9ea0,	// (0x000198ea) bg_calc_display_pane_g1

0x0102,	// (0x0000fb4c) bg_calc_display_pane_g2

0x010c,	// (0x0000fb56) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0001eba2) bg_calc_display_pane_g

0x0115,	// (0x0000fb5f) cell_qdial_pane_ParamLimits

0x0115,	// (0x0000fb5f) cell_qdial_pane

0x0129,	// (0x0000fb73) cell_qdial_pane_g1_ParamLimits

0x0129,	// (0x0000fb73) cell_qdial_pane_g1

0x013f,	// (0x0000fb89) cell_qdial_pane_g2_ParamLimits

0x013f,	// (0x0000fb89) cell_qdial_pane_g2

0x9ea9,	// (0x000198f3) cell_qdial_pane_g3_ParamLimits

0x9ea9,	// (0x000198f3) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0001eba9) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0001eba9) cell_qdial_pane_g

0x0166,	// (0x0000fbb0) cell_qdial_pane_t1_ParamLimits

0x0166,	// (0x0000fbb0) cell_qdial_pane_t1

0x017e,	// (0x0000fbc8) cell_qdial_pane_t2_ParamLimits

0x017e,	// (0x0000fbc8) cell_qdial_pane_t2

0x0191,	// (0x0000fbdb) cell_qdial_pane_t3_ParamLimits

0x0191,	// (0x0000fbdb) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0001ebb2) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0001ebb2) cell_qdial_pane_t

0x9ab9,	// (0x00019503) grid_highlight_pane_cp04

0x9eb5,	// (0x000198ff) thumbnail_qdial_pane_ParamLimits

0x9eb5,	// (0x000198ff) thumbnail_qdial_pane

0x9f11,	// (0x0001995b) list_help_pane

0x9f1a,	// (0x00019964) scroll_pane_cp02

0x01a4,	// (0x0000fbee) help_list_pane_t1_ParamLimits

0x01a4,	// (0x0000fbee) help_list_pane_t1

0x9f23,	// (0x0001996d) bg_notes_pane_g2

0x9f2b,	// (0x00019975) bg_notes_pane_g3

0x9f33,	// (0x0001997d) notes_bg_pane_g1

0x9f3b,	// (0x00019985) notes_bg_pane_g4

0x9f43,	// (0x0001998d) notes_bg_pane_g5

0x9f4b,	// (0x00019995) notes_bg_pane_g6

0x9f53,	// (0x0001999d) notes_bg_pane_g7

0x9f5b,	// (0x000199a5) notes_bg_pane_g8

0x9f63,	// (0x000199ad) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0001ebd0) notes_bg_pane_g

0x01c8,	// (0x0000fc12) list_notes_text_pane_ParamLimits

0x01c8,	// (0x0000fc12) list_notes_text_pane

0x9f6b,	// (0x000199b5) list_notes_text_pane_g1

0x01df,	// (0x0000fc29) list_notes_text_pane_t1

0x01ed,	// (0x0000fc37) listscroll_cale_week_pane

0x0217,	// (0x0000fc61) bg_cale_heading_pane

0x023b,	// (0x0000fc85) bg_cale_pane_cp01

0x0258,	// (0x0000fca2) cale_week_corner_pane

0x0277,	// (0x0000fcc1) cale_week_day_heading_pane

0x02a0,	// (0x0000fcea) cale_week_scroll_pane_g1

0x02bf,	// (0x0000fd09) cale_week_scroll_pane_g2

0x02d7,	// (0x0000fd21) cale_week_scroll_pane_g3

0x02ef,	// (0x0000fd39) cale_week_scroll_pane_g4

0x0307,	// (0x0000fd51) cale_week_scroll_pane_g5

0x0327,	// (0x0000fd71) cale_week_scroll_pane_g6

0x0347,	// (0x0000fd91) cale_week_scroll_pane_g7

0x036b,	// (0x0000fdb5) cale_week_scroll_pane_g8

0x038f,	// (0x0000fdd9) cale_week_scroll_pane_g9

0x03a7,	// (0x0000fdf1) cale_week_scroll_pane_g10

0x03bf,	// (0x0000fe09) cale_week_scroll_pane_g11

0x03d7,	// (0x0000fe21) cale_week_scroll_pane_g12

0x03fb,	// (0x0000fe45) cale_week_scroll_pane_g13

0x03fb,	// (0x0000fe45) cale_week_scroll_pane_g14

0x03fb,	// (0x0000fe45) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0001ebdf) cale_week_scroll_pane_g

0x0443,	// (0x0000fe8d) cale_week_time_pane

0x0467,	// (0x0000feb1) grid_cale_week_pane

0x9fa0,	// (0x000199ea) scroll_pane_cp08

0x0499,	// (0x0000fee3) cell_cale_week_pane_ParamLimits

0x0499,	// (0x0000fee3) cell_cale_week_pane

0x0535,	// (0x0000ff7f) cale_week_day_heading_pane_t1

0x055f,	// (0x0000ffa9) cale_week_day_heading_pane_t2

0x058e,	// (0x0000ffd8) cale_week_day_heading_pane_t3

0x05bd,	// (0x00010007) cale_week_day_heading_pane_t4

0x05ec,	// (0x00010036) cale_week_day_heading_pane_t5

0x061f,	// (0x00010069) cale_week_day_heading_pane_t6

0x0656,	// (0x000100a0) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0001ec00) cale_week_day_heading_pane_t

0x9fbd,	// (0x00019a07) bg_cale_side_pane

0x0680,	// (0x000100ca) cale_week_time_pane_t1

0x069a,	// (0x000100e4) cale_week_time_pane_t2

0x06b4,	// (0x000100fe) cale_week_time_pane_t3

0x06ce,	// (0x00010118) cale_week_time_pane_t4

0x06e8,	// (0x00010132) cale_week_time_pane_t5

0x0702,	// (0x0001014c) cale_week_time_pane_t6

0x0722,	// (0x0001016c) cale_week_time_pane_t7

0x0748,	// (0x00010192) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0001ec0f) cale_week_time_pane_t

0x076e,	// (0x000101b8) cell_cale_week_pane_g2

0x0792,	// (0x000101dc) cell_cale_week_pane_g3_ParamLimits

0x0792,	// (0x000101dc) cell_cale_week_pane_g3

0x9fcb,	// (0x00019a15) grid_highlight_pane_cp07

0x9fd3,	// (0x00019a1d) listscroll_gms_pane

0x9fdd,	// (0x00019a27) grid_gms_pane

0x9fe6,	// (0x00019a30) listscroll_gms_pane_g1

0x9fee,	// (0x00019a38) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0001ec20) listscroll_gms_pane_g

0x07aa,	// (0x000101f4) scroll_pane_cp010

0x07b5,	// (0x000101ff) cell_gms_pane_ParamLimits

0x07b5,	// (0x000101ff) cell_gms_pane

0x07cc,	// (0x00010216) cell_gms_pane_g1

0x9ff6,	// (0x00019a40) cell_gms_pane_g2

0x9ffe,	// (0x00019a48) cell_gms_pane_g3

0xa007,	// (0x00019a51) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0001ec25) cell_gms_pane_g

0xa010,	// (0x00019a5a) grid_highlight_pane_cp09

0x2f24,	// (0x0001296e) phob_pre_status_pane_g1

0x2f2c,	// (0x00012976) phob_pre_status_pane_g2

0x2f34,	// (0x0001297e) phob_pre_status_pane_g3

0x2f3c,	// (0x00012986) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0001f010) phob_pre_status_pane_g

0x2f4c,	// (0x00012996) phob_pre_status_pane_t1

0x2f5c,	// (0x000129a6) phob_pre_status_pane_t2

0x2f6c,	// (0x000129b6) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0001f01b) phob_pre_status_pane_t

0xa018,	// (0x00019a62) bg_list_pane_cp05

0x07dc,	// (0x00010226) grid_vorec_pane

0x07e6,	// (0x00010230) vorec_t1

0x07f4,	// (0x0001023e) vorec_t2

0x0802,	// (0x0001024c) vorec_t3

0x0810,	// (0x0001025a) vorec_t4

0x95a5,	// (0x00018fef) vorec_t5

0x95b3,	// (0x00018ffd) vorec_t6

0x0004,

0xf1e4,	// (0x0001ec2e) vorec_t

0x95c1,	// (0x0001900b) wait_bar_pane_cp01

0xa020,	// (0x00019a6a) cell_vorec_pane_ParamLimits

0xa020,	// (0x00019a6a) cell_vorec_pane

0xa035,	// (0x00019a7f) cell_vorec_pane_g1

0x9ab9,	// (0x00019503) grid_highlight_pane_cp05

0x0842,	// (0x0001028c) cams_zoom_pane

0x0851,	// (0x0001029b) image_vga_pane

0x086b,	// (0x000102b5) main_camera_pane_g1

0x087d,	// (0x000102c7) main_camera_pane_g2

0x088d,	// (0x000102d7) main_camera_pane_g3

0x08a1,	// (0x000102eb) main_camera_pane_g4

0x08b5,	// (0x000102ff) main_camera_pane_g5

0x08c9,	// (0x00010313) main_camera_pane_g6

0x08dd,	// (0x00010327) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0001ec39) main_camera_pane_g

0x08f1,	// (0x0001033b) main_camera_pane_t1

0x0907,	// (0x00010351) main_camera_pane_t2

0x0001,

0xf200,	// (0x0001ec4a) main_camera_pane_t

0x0945,	// (0x0001038f) cams_zoom_pane_cp_ParamLimits

0x0945,	// (0x0001038f) cams_zoom_pane_cp

0x096d,	// (0x000103b7) image_cif_pane_ParamLimits

0x096d,	// (0x000103b7) image_cif_pane

0x09a8,	// (0x000103f2) image_subqcif_pane

0x09b2,	// (0x000103fc) main_video_pane_g1_ParamLimits

0x09b2,	// (0x000103fc) main_video_pane_g1

0x09d6,	// (0x00010420) main_video_pane_g2_ParamLimits

0x09d6,	// (0x00010420) main_video_pane_g2

0x0a0c,	// (0x00010456) main_video_pane_g3_ParamLimits

0x0a0c,	// (0x00010456) main_video_pane_g3

0x0a3a,	// (0x00010484) main_video_pane_g4_ParamLimits

0x0a3a,	// (0x00010484) main_video_pane_g4

0x0a68,	// (0x000104b2) main_video_pane_g5_ParamLimits

0x0a68,	// (0x000104b2) main_video_pane_g5

0xa04b,	// (0x00019a95) main_video_pane_g6_ParamLimits

0xa04b,	// (0x00019a95) main_video_pane_g6

0x0006,

0xf205,	// (0x0001ec4f) main_video_pane_g_ParamLimits

0xf205,	// (0x0001ec4f) main_video_pane_g

0x0a91,	// (0x000104db) main_video_pane_t1_ParamLimits

0x0a91,	// (0x000104db) main_video_pane_t1

0xa065,	// (0x00019aaf) cams_zoom_pane_g1

0xa06e,	// (0x00019ab8) cams_zoom_pane_g2

0xa077,	// (0x00019ac1) cams_zoom_pane_g3

0xa080,	// (0x00019aca) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0001ec5e) cams_zoom_pane_g

0x0aee,	// (0x00010538) grid_cams_pane

0x0b08,	// (0x00010552) linegrid_cams_pane

0x0b1a,	// (0x00010564) cell_cams_pane_ParamLimits

0x0b1a,	// (0x00010564) cell_cams_pane

0xa089,	// (0x00019ad3) cams_burst_image_pane

0xa091,	// (0x00019adb) cell_cams_pane_g1

0x9ab9,	// (0x00019503) grid_highlight_pane_cp03

0x9e74,	// (0x000198be) mp_bg_pane_g1

0x9ab9,	// (0x00019503) bg_list_pane_cp03

0xbee7,	// (0x0001b931) bg_mp_pane

0xbeef,	// (0x0001b939) grid_mp_pane

0xbef7,	// (0x0001b941) media_player_g1

0xbf01,	// (0x0001b94b) media_player_t1

0xbf0f,	// (0x0001b959) media_player_t2

0xbf1d,	// (0x0001b967) media_player_t3

0xbf2b,	// (0x0001b975) media_player_t4

0xbf39,	// (0x0001b983) media_player_t5

0xbf47,	// (0x0001b991) media_player_t6

0xbf55,	// (0x0001b99f) media_player_t7

0x0006,

0xf5b0,	// (0x0001effa) media_player_t

0xbf63,	// (0x0001b9ad) wait_bar_pane_cp02

0xf595,	// (0x0001efdf) main_usb_pane_t

0x2f1b,	// (0x00012965) cell_mp_pane

0x9e74,	// (0x000198be) cell_mp_pane_g1

0x9ab9,	// (0x00019503) grid_highlight_pane_cp06

0xa099,	// (0x00019ae3) grid_skin_colour_pane

0xa0a1,	// (0x00019aeb) list_highlight_pane_cp03

0x0c53,	// (0x0001069d) skin_g1

0xa0a9,	// (0x00019af3) skin_t1

0xa0b8,	// (0x00019b02) skin_t2

0x0001,

0xf249,	// (0x0001ec93) skin_t

0x0c5d,	// (0x000106a7) cell_skin_colour_pane_ParamLimits

0x0c5d,	// (0x000106a7) cell_skin_colour_pane

0xa0c6,	// (0x00019b10) cell_skin_colour_pane_g1

0x0cd0,	// (0x0001071a) call_video_g1_ParamLimits

0x0cd0,	// (0x0001071a) call_video_g1

0x0cec,	// (0x00010736) call_video_g2_ParamLimits

0x0cec,	// (0x00010736) call_video_g2

0x0001,

0xf24e,	// (0x0001ec98) call_video_g_ParamLimits

0xf24e,	// (0x0001ec98) call_video_g

0x0d31,	// (0x0001077b) call_video_uplink_pane_cp1_ParamLimits

0x0d31,	// (0x0001077b) call_video_uplink_pane_cp1

0xa0d8,	// (0x00019b22) call_video_uplink_pane_cp2

0x0dd2,	// (0x0001081c) video_down_crop_pane_ParamLimits

0x0dd2,	// (0x0001081c) video_down_crop_pane

0x0ebb,	// (0x00010905) video_down_pane_ParamLimits

0x0ebb,	// (0x00010905) video_down_pane

0xa0e0,	// (0x00019b2a) video_down_subqcif_pane_ParamLimits

0xa0e0,	// (0x00019b2a) video_down_subqcif_pane

0xa0fa,	// (0x00019b44) video_down_subqcif_pane_cp_ParamLimits

0xa0fa,	// (0x00019b44) video_down_subqcif_pane_cp

0xa122,	// (0x00019b6c) im_reading_pane_ParamLimits

0xa122,	// (0x00019b6c) im_reading_pane

0x0fc6,	// (0x00010a10) im_writing_pane_ParamLimits

0x0fc6,	// (0x00010a10) im_writing_pane

0x0fe4,	// (0x00010a2e) im_reading_pane_t1

0xa13c,	// (0x00019b86) list_im_pane

0xa14d,	// (0x00019b97) scroll_pane_cp07

0x1023,	// (0x00010a6d) im_writing_pane_t1_ParamLimits

0x1023,	// (0x00010a6d) im_writing_pane_t1

0xa166,	// (0x00019bb0) im_writing_pane_t2_ParamLimits

0xa166,	// (0x00019bb0) im_writing_pane_t2

0x0001,

0xf258,	// (0x0001eca2) im_writing_pane_t_ParamLimits

0xf258,	// (0x0001eca2) im_writing_pane_t

0x9ab9,	// (0x00019503) input_focus_pane_cp04

0x9ab9,	// (0x00019503) input_focus_pane_cp05

0x1038,	// (0x00010a82) list_im_single_pane_ParamLimits

0x1038,	// (0x00010a82) list_im_single_pane

0x1051,	// (0x00010a9b) list_single_im_pane_t1

0x2edb,	// (0x00012925) blid_accuracy_pane

0x2ee3,	// (0x0001292d) blid_compass_pane

0x2eed,	// (0x00012937) main_location_t1

0x2efd,	// (0x00012947) main_location_t2

0x2f0d,	// (0x00012957) main_location_t3

0x0002,

0xf5bf,	// (0x0001f009) main_location_t

0x9ab9,	// (0x00019503) aid_levels_location

0x9e74,	// (0x000198be) blid_accuracy_pane_g1

0x9e74,	// (0x000198be) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0001ed04) blid_accuracy_pane_g

0xa1ae,	// (0x00019bf8) wml_content_pane

0xa1ec,	// (0x00019c36) wml_button_pane_ParamLimits

0xa1ec,	// (0x00019c36) wml_button_pane

0x1060,	// (0x00010aaa) wml_list_single_large_pane_ParamLimits

0x1060,	// (0x00010aaa) wml_list_single_large_pane

0x1079,	// (0x00010ac3) wml_list_single_medium_pane_ParamLimits

0x1079,	// (0x00010ac3) wml_list_single_medium_pane

0x1093,	// (0x00010add) wml_list_single_small_pane_ParamLimits

0x1093,	// (0x00010add) wml_list_single_small_pane

0xa200,	// (0x00019c4a) wml_selection_box_pane_ParamLimits

0xa200,	// (0x00019c4a) wml_selection_box_pane

0xa213,	// (0x00019c5d) wml_list_single_pane_t1

0xa222,	// (0x00019c6c) wml_list_single_medium_pane_t1

0xa231,	// (0x00019c7b) wml_list_single_large_pane_t1

0xa240,	// (0x00019c8a) input_focus_pane_cp02_ParamLimits

0xa240,	// (0x00019c8a) input_focus_pane_cp02

0xa253,	// (0x00019c9d) wml_selection_box_pane_g1

0xa25c,	// (0x00019ca6) wml_selection_box_pane_t1_ParamLimits

0xa25c,	// (0x00019ca6) wml_selection_box_pane_t1

0x9d14,	// (0x0001975e) bg_wml_button_pane_ParamLimits

0x9d14,	// (0x0001975e) bg_wml_button_pane

0xa274,	// (0x00019cbe) wml_button_pane_g1

0xa27c,	// (0x00019cc6) wml_button_pane_t1

0xa274,	// (0x00019cbe) wml_button_bg_pane_g1

0xa28c,	// (0x00019cd6) wml_button_bg_pane_g2

0xa294,	// (0x00019cde) wml_button_bg_pane_g3

0xa29c,	// (0x00019ce6) wml_button_bg_pane_g4

0xa2a4,	// (0x00019cee) wml_button_bg_pane_g5

0xa2ac,	// (0x00019cf6) wml_button_bg_pane_g6

0xa2b4,	// (0x00019cfe) wml_button_bg_pane_g7

0xa2bc,	// (0x00019d06) wml_button_bg_pane_g8

0xa2c4,	// (0x00019d0e) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0001eca7) wml_button_bg_pane_g

0x10b2,	// (0x00010afc) bg_list_pane_cp02

0xa2cc,	// (0x00019d16) mce_header_pane_ParamLimits

0xa2cc,	// (0x00019d16) mce_header_pane

0xa2e2,	// (0x00019d2c) mce_icon_pane

0xa2e2,	// (0x00019d2c) mce_image_pane

0xa2eb,	// (0x00019d35) mce_text_pane_ParamLimits

0xa2eb,	// (0x00019d35) mce_text_pane

0x10bc,	// (0x00010b06) scroll_pane_cp03

0xa1e4,	// (0x00019c2e) scroll_pane_cp04

0xa2fe,	// (0x00019d48) scroll_pane_cp05_ParamLimits

0xa2fe,	// (0x00019d48) scroll_pane_cp05

0x10c6,	// (0x00010b10) mce_header_field_pane_ParamLimits

0x10c6,	// (0x00010b10) mce_header_field_pane

0x10df,	// (0x00010b29) mce_header_field_pane_2_ParamLimits

0x10df,	// (0x00010b29) mce_header_field_pane_2

0x10f5,	// (0x00010b3f) mce_header_field_pane_3

0x10fd,	// (0x00010b47) list_single_mce_message_pane_ParamLimits

0x10fd,	// (0x00010b47) list_single_mce_message_pane

0x1119,	// (0x00010b63) list_single_mce_smart_pane_ParamLimits

0x1119,	// (0x00010b63) list_single_mce_smart_pane

0xa30a,	// (0x00019d54) input_focus_pane_cp03

0xa313,	// (0x00019d5d) list_header_data_pane

0x1140,	// (0x00010b8a) mce_header_field_pane_t1

0x1150,	// (0x00010b9a) list_single_mce_header_pane_ParamLimits

0x1150,	// (0x00010b9a) list_single_mce_header_pane

0xa31b,	// (0x00019d65) list_single_mce_header_pane_t1

0xa32a,	// (0x00019d74) list_single_mce_message_pane_g1

0xa332,	// (0x00019d7c) list_single_mce_message_pane_t1

0x118a,	// (0x00010bd4) bg_cale_heading_pane_cp01_ParamLimits

0x118a,	// (0x00010bd4) bg_cale_heading_pane_cp01

0xa340,	// (0x00019d8a) bg_cale_pane_cp02_ParamLimits

0xa340,	// (0x00019d8a) bg_cale_pane_cp02

0x11dc,	// (0x00010c26) cale_month_corner_pane

0x11fb,	// (0x00010c45) cale_month_day_heading_pane_ParamLimits

0x11fb,	// (0x00010c45) cale_month_day_heading_pane

0x1265,	// (0x00010caf) cale_month_pane_g1_ParamLimits

0x1265,	// (0x00010caf) cale_month_pane_g1

0x12ac,	// (0x00010cf6) cale_month_pane_g2_ParamLimits

0x12ac,	// (0x00010cf6) cale_month_pane_g2

0x12e8,	// (0x00010d32) cale_month_pane_g3_ParamLimits

0x12e8,	// (0x00010d32) cale_month_pane_g3

0x133c,	// (0x00010d86) cale_month_pane_g4_ParamLimits

0x133c,	// (0x00010d86) cale_month_pane_g4

0x1390,	// (0x00010dda) cale_month_pane_g5_ParamLimits

0x1390,	// (0x00010dda) cale_month_pane_g5

0x13ec,	// (0x00010e36) cale_month_pane_g6_ParamLimits

0x13ec,	// (0x00010e36) cale_month_pane_g6

0x1454,	// (0x00010e9e) cale_month_pane_g7_ParamLimits

0x1454,	// (0x00010e9e) cale_month_pane_g7

0x14c0,	// (0x00010f0a) cale_month_pane_g8_ParamLimits

0x14c0,	// (0x00010f0a) cale_month_pane_g8

0x152c,	// (0x00010f76) cale_month_pane_g9_ParamLimits

0x152c,	// (0x00010f76) cale_month_pane_g9

0x1590,	// (0x00010fda) cale_month_pane_g10_ParamLimits

0x1590,	// (0x00010fda) cale_month_pane_g10

0x15e2,	// (0x0001102c) cale_month_pane_g11_ParamLimits

0x15e2,	// (0x0001102c) cale_month_pane_g11

0x1634,	// (0x0001107e) cale_month_pane_g12_ParamLimits

0x1634,	// (0x0001107e) cale_month_pane_g12

0x168c,	// (0x000110d6) cale_month_pane_g13_ParamLimits

0x168c,	// (0x000110d6) cale_month_pane_g13

0x000c,

0xf270,	// (0x0001ecba) cale_month_pane_g_ParamLimits

0xf270,	// (0x0001ecba) cale_month_pane_g

0x16e4,	// (0x0001112e) cale_month_week_pane

0x1708,	// (0x00011152) grid_cale_month_pane_ParamLimits

0x1708,	// (0x00011152) grid_cale_month_pane

0x1769,	// (0x000111b3) cale_month_day_heading_pane_t1

0x17ef,	// (0x00011239) cale_month_day_heading_pane_t2

0x1868,	// (0x000112b2) cale_month_day_heading_pane_t3

0x18e1,	// (0x0001132b) cale_month_day_heading_pane_t4

0x1962,	// (0x000113ac) cale_month_day_heading_pane_t5

0x19eb,	// (0x00011435) cale_month_day_heading_pane_t6

0x1a7c,	// (0x000114c6) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0001ecd5) cale_month_day_heading_pane_t

0x9fbd,	// (0x00019a07) bg_cale_side_pane_cp01

0x1b0d,	// (0x00011557) cale_month_week_pane_t1

0x1b26,	// (0x00011570) cale_month_week_pane_t2

0x1b3f,	// (0x00011589) cale_month_week_pane_t3

0x1b58,	// (0x000115a2) cale_month_week_pane_t4

0x1b71,	// (0x000115bb) cale_month_week_pane_t5

0x1b8a,	// (0x000115d4) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0001ece4) cale_month_week_pane_t

0x1baf,	// (0x000115f9) cell_cale_month_pane_ParamLimits

0x1baf,	// (0x000115f9) cell_cale_month_pane

0xa37f,	// (0x00019dc9) cell_cale_month_pane_g1

0x1d23,	// (0x0001176d) cell_cale_month_pane_t1_ParamLimits

0x1d23,	// (0x0001176d) cell_cale_month_pane_t1

0x9fcb,	// (0x00019a15) grid_highlight_pane_cp08

0x9e74,	// (0x000198be) main_smil_g1

0x1d4f,	// (0x00011799) smil_status_pane

0xa38b,	// (0x00019dd5) smil_text_pane

0xbe05,	// (0x0001b84f) bg_popup_call3_rect_pane_g8

0xbe0d,	// (0x0001b857) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0001ef9d) bg_popup_call3_rect_pane_g

0xc0c3,	// (0x0001bb0d) smil_status_volume_pane_g1

0xa395,	// (0x00019ddf) smil_status_pane_t1

0xc0f6,	// (0x0001bb40) volume_smil_pane

0xa3ac,	// (0x00019df6) list_smil_text_pane

0x1d64,	// (0x000117ae) scroll_pane_cp011

0x1d6f,	// (0x000117b9) smil_text_list_pane_t1_ParamLimits

0x1d6f,	// (0x000117b9) smil_text_list_pane_t1

0xa3b6,	// (0x00019e00) aid_volume_smil_ParamLimits

0xa3b6,	// (0x00019e00) aid_volume_smil

0x9e74,	// (0x000198be) smil_volume_pane_g1

0x9e74,	// (0x000198be) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0001ed04) smil_volume_pane_g

0x01ed,	// (0x0000fc37) listscroll_cale_day_pane

0xa3d8,	// (0x00019e22) bg_cale_pane

0xa3f0,	// (0x00019e3a) list_cale_pane

0xa413,	// (0x00019e5d) scroll_pane_cp09

0xa424,	// (0x00019e6e) cale_bg_pane_g1

0xa42c,	// (0x00019e76) cale_bg_pane_g2

0xa434,	// (0x00019e7e) cale_bg_pane_g3

0xa43c,	// (0x00019e86) cale_bg_pane_g4

0xa444,	// (0x00019e8e) cale_bg_pane_g5

0xa44c,	// (0x00019e96) cale_bg_pane_g6

0xa454,	// (0x00019e9e) cale_bg_pane_g7

0xa45c,	// (0x00019ea6) cale_bg_pane_g8

0xa464,	// (0x00019eae) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0001ed09) cale_bg_pane_g

0x1dc2,	// (0x0001180c) list_cale_time_pane_ParamLimits

0x1dc2,	// (0x0001180c) list_cale_time_pane

0xa46c,	// (0x00019eb6) list_cale_time_pane_g1_ParamLimits

0xa46c,	// (0x00019eb6) list_cale_time_pane_g1

0xa478,	// (0x00019ec2) list_cale_time_pane_g2_ParamLimits

0xa478,	// (0x00019ec2) list_cale_time_pane_g2

0x1ddc,	// (0x00011826) list_cale_time_pane_g3_ParamLimits

0x1ddc,	// (0x00011826) list_cale_time_pane_g3

0x1dea,	// (0x00011834) list_cale_time_pane_g4_ParamLimits

0x1dea,	// (0x00011834) list_cale_time_pane_g4

0x1df8,	// (0x00011842) list_cale_time_pane_g5_ParamLimits

0x1df8,	// (0x00011842) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0001ed1c) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0001ed1c) list_cale_time_pane_g

0xa492,	// (0x00019edc) list_cale_time_pane_t1_ParamLimits

0xa492,	// (0x00019edc) list_cale_time_pane_t1

0xa4ba,	// (0x00019f04) list_cale_time_pane_t2_ParamLimits

0xa4ba,	// (0x00019f04) list_cale_time_pane_t2

0x219f,	// (0x00011be9) aid_blid_cardinal_pane

0x21e1,	// (0x00011c2b) compass_pane_t4

0xa4e2,	// (0x00019f2c) list_cale_time_pane_t4_ParamLimits

0xa4e2,	// (0x00019f2c) list_cale_time_pane_t4

0x21ef,	// (0x00011c39) compass_pane_t5

0x21ff,	// (0x00011c49) compass_pane_t6

0x220d,	// (0x00011c57) compass_pane_t7

0xa9d5,	// (0x0001a41f) navi_pane_cc_t1

0xabc6,	// (0x0001a610) aid_phob_thumbnail_center_pane

0x289e,	// (0x000122e8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0001ed29) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0001ed29) list_cale_time_pane_t

0x9710,	// (0x0001915a) bg_popup_window_pane_cp02_ParamLimits

0x9710,	// (0x0001915a) bg_popup_window_pane_cp02

0xa50a,	// (0x00019f54) heading_pane_cp01_ParamLimits

0xa50a,	// (0x00019f54) heading_pane_cp01

0xa516,	// (0x00019f60) loc_req_pane_ParamLimits

0xa516,	// (0x00019f60) loc_req_pane

0xa526,	// (0x00019f70) loc_type_pane_ParamLimits

0xa526,	// (0x00019f70) loc_type_pane

0xa538,	// (0x00019f82) loc_type_pane_t1_ParamLimits

0xa538,	// (0x00019f82) loc_type_pane_t1

0xa54a,	// (0x00019f94) loc_type_pane_t2_ParamLimits

0xa54a,	// (0x00019f94) loc_type_pane_t2

0xa55c,	// (0x00019fa6) loc_type_pane_t3_ParamLimits

0xa55c,	// (0x00019fa6) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0001ed30) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0001ed30) loc_type_pane_t

0xa56e,	// (0x00019fb8) list_loc_req_pane

0xa578,	// (0x00019fc2) scroll_pane_cp012

0x1e06,	// (0x00011850) list_single_loc_request_popup_menu_pane_ParamLimits

0x1e06,	// (0x00011850) list_single_loc_request_popup_menu_pane

0xa583,	// (0x00019fcd) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa583,	// (0x00019fcd) list_single_loc_request_popup_menu_pane_g1

0xa58f,	// (0x00019fd9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa58f,	// (0x00019fd9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0001ed37) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0001ed37) list_single_loc_request_popup_menu_pane_g

0xa59b,	// (0x00019fe5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa59b,	// (0x00019fe5) list_single_loc_request_popup_menu_pane_t1

0x9d14,	// (0x0001975e) bg_popup_window_pane_cp03_ParamLimits

0x9d14,	// (0x0001975e) bg_popup_window_pane_cp03

0xa5b1,	// (0x00019ffb) heading_loc_req_pane_ParamLimits

0xa5b1,	// (0x00019ffb) heading_loc_req_pane

0x1e13,	// (0x0001185d) popup_dyc_status_message_window_g1_ParamLimits

0x1e13,	// (0x0001185d) popup_dyc_status_message_window_g1

0x1e27,	// (0x00011871) popup_dyc_status_message_window_t1_ParamLimits

0x1e27,	// (0x00011871) popup_dyc_status_message_window_t1

0x1e3c,	// (0x00011886) popup_dyc_status_message_window_t2_ParamLimits

0x1e3c,	// (0x00011886) popup_dyc_status_message_window_t2

0x1e51,	// (0x0001189b) popup_dyc_status_message_window_t3_ParamLimits

0x1e51,	// (0x0001189b) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0001ed3c) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0001ed3c) popup_dyc_status_message_window_t

0x9ab9,	// (0x00019503) bg_heading_pane_cp01

0xa5bd,	// (0x0001a007) heading_loc_req_pane_g1

0xa5c5,	// (0x0001a00f) heading_loc_req_pane_g2

0xa5cd,	// (0x0001a017) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0001ed43) heading_loc_req_pane_g

0xa5d5,	// (0x0001a01f) heading_loc_req_pane_t1

0xa5e5,	// (0x0001a02f) bg_popup_sub_pane_cp01_ParamLimits

0xa5e5,	// (0x0001a02f) bg_popup_sub_pane_cp01

0xa5f3,	// (0x0001a03d) popup_cale_events_window_g1_ParamLimits

0xa5f3,	// (0x0001a03d) popup_cale_events_window_g1

0xa613,	// (0x0001a05d) popup_cale_events_window_g2_ParamLimits

0xa613,	// (0x0001a05d) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0001ed77) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0001ed77) popup_cale_events_window_g

0xa633,	// (0x0001a07d) popup_cale_events_window_t1_ParamLimits

0xa633,	// (0x0001a07d) popup_cale_events_window_t1

0xa645,	// (0x0001a08f) popup_cale_events_window_t2_ParamLimits

0xa645,	// (0x0001a08f) popup_cale_events_window_t2

0xa683,	// (0x0001a0cd) popup_cale_events_window_t3_ParamLimits

0xa683,	// (0x0001a0cd) popup_cale_events_window_t3

0xa6bd,	// (0x0001a107) popup_cale_events_window_t4_ParamLimits

0xa6bd,	// (0x0001a107) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0001ed7c) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0001ed7c) popup_cale_events_window_t

0x1f4a,	// (0x00011994) call_type_pane

0x1f5a,	// (0x000119a4) popup_call_status_window_g1

0x1f6e,	// (0x000119b8) popup_call_status_window_g2

0x1f82,	// (0x000119cc) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0001ed85) popup_call_status_window_g

0xa6f3,	// (0x0001a13d) call_type_pane_g1

0xa6fc,	// (0x0001a146) call_type_pane_g2

0x0001,

0xf342,	// (0x0001ed8c) call_type_pane_g

0x9ab9,	// (0x00019503) bg_popup_sub_pane_cp02

0xa705,	// (0x0001a14f) listscroll_popup_wml_pane

0xa70d,	// (0x0001a157) list_wml_pane

0xa717,	// (0x0001a161) scroll_pane_cp013

0xa722,	// (0x0001a16c) list_single_graphic_popup_wml_pane_ParamLimits

0xa722,	// (0x0001a16c) list_single_graphic_popup_wml_pane

0x9e74,	// (0x000198be) list_single_graphic_popup_wml_pane_g1

0xa736,	// (0x0001a180) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0001ed91) list_single_graphic_popup_wml_pane_g

0xa73e,	// (0x0001a188) list_single_graphic_popup_wml_pane_t1

0xa754,	// (0x0001a19e) aid_call_pane

0x9d0c,	// (0x00019756) popup_clock_analogue_window_g1

0x9d0c,	// (0x00019756) popup_clock_analogue_window_g2

0xa75c,	// (0x0001a1a6) popup_clock_analogue_window_g3

0xa75c,	// (0x0001a1a6) popup_clock_analogue_window_g4

0x9e74,	// (0x000198be) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0001ed96) popup_clock_analogue_window_g

0xa764,	// (0x0001a1ae) popup_clock_analogue_window_t1

0xa772,	// (0x0001a1bc) clock_digital_number_pane_ParamLimits

0xa772,	// (0x0001a1bc) clock_digital_number_pane

0xa77e,	// (0x0001a1c8) clock_digital_number_pane_cp02_ParamLimits

0xa77e,	// (0x0001a1c8) clock_digital_number_pane_cp02

0xa78a,	// (0x0001a1d4) clock_digital_number_pane_cp03_ParamLimits

0xa78a,	// (0x0001a1d4) clock_digital_number_pane_cp03

0xa796,	// (0x0001a1e0) clock_digital_number_pane_cp04_ParamLimits

0xa796,	// (0x0001a1e0) clock_digital_number_pane_cp04

0xa7a2,	// (0x0001a1ec) clock_digital_separator_pane_ParamLimits

0xa7a2,	// (0x0001a1ec) clock_digital_separator_pane

0xa7ae,	// (0x0001a1f8) popup_clock_digital_window_t1

0x9e74,	// (0x000198be) clock_digital_number_pane_g1

0x9e74,	// (0x000198be) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0001ed04) clock_digital_number_pane_g

0x9e74,	// (0x000198be) clock_digital_separator_pane_g1

0x9e74,	// (0x000198be) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0001ed04) clock_digital_separator_pane_g

0x9ab9,	// (0x00019503) bg_popup_window_pane_cp04

0xa7cb,	// (0x0001a215) heading_pane_cp03

0xa7d3,	// (0x0001a21d) listscroll_popup_gms_pane

0xa7db,	// (0x0001a225) grid_large_graphic_popup_pane

0xa7e5,	// (0x0001a22f) listscroll_popup_gms_pane_g1

0xa7ed,	// (0x0001a237) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0001eda1) listscroll_popup_gms_pane_g

0xa1e4,	// (0x00019c2e) scroll_pane_cp014

0x1f92,	// (0x000119dc) cell_large_graphic_popup_pane_ParamLimits

0x1f92,	// (0x000119dc) cell_large_graphic_popup_pane

0x1faa,	// (0x000119f4) cell_large_graphic_popup_pane_g1_ParamLimits

0x1faa,	// (0x000119f4) cell_large_graphic_popup_pane_g1

0xa7f5,	// (0x0001a23f) cell_large_graphic_popup_pane_g2_ParamLimits

0xa7f5,	// (0x0001a23f) cell_large_graphic_popup_pane_g2

0xa801,	// (0x0001a24b) cell_large_graphic_popup_pane_g3_ParamLimits

0xa801,	// (0x0001a24b) cell_large_graphic_popup_pane_g3

0xa80e,	// (0x0001a258) cell_large_graphic_popup_pane_g4_ParamLimits

0xa80e,	// (0x0001a258) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0001eda6) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0001eda6) cell_large_graphic_popup_pane_g

0xa81e,	// (0x0001a268) grid_highlight_pane_cp010

0x9e74,	// (0x000198be) bg_popup_call_pane_g1

0xa828,	// (0x0001a272) list_single_graphic_popup_conf_pane_ParamLimits

0xa828,	// (0x0001a272) list_single_graphic_popup_conf_pane

0xa83a,	// (0x0001a284) list_highlight_pane_cp01

0xa843,	// (0x0001a28d) list_single_graphic_popup_conf_pane_g1

0xa84b,	// (0x0001a295) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0001edaf) list_single_graphic_popup_conf_pane_g

0xa853,	// (0x0001a29d) list_single_graphic_popup_conf_pane_t1

0xa861,	// (0x0001a2ab) linegrid_cams_pane_g1

0x1fb6,	// (0x00011a00) linegrid_cams_pane_g2

0x9ffe,	// (0x00019a48) linegrid_cams_pane_g3

0xa86a,	// (0x0001a2b4) linegrid_cams_pane_g4

0x1fbf,	// (0x00011a09) linegrid_cams_pane_g5

0x1fc8,	// (0x00011a12) linegrid_cams_pane_g6

0xa007,	// (0x00019a51) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0001edb4) linegrid_cams_pane_g

0xa873,	// (0x0001a2bd) popup_clock_analogue_window

0xa873,	// (0x0001a2bd) popup_clock_digital_window

0x9ab9,	// (0x00019503) popup_phob_thumbnail_window

0x9e74,	// (0x000198be) call_video_uplink_pane_g1

0xa87c,	// (0x0001a2c6) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0001edc3) call_video_uplink_pane_g

0xa884,	// (0x0001a2ce) video_uplink_pane

0xa88c,	// (0x0001a2d6) mce_image_pane_g1

0x1fd3,	// (0x00011a1d) mce_image_pane_g2

0x1fdd,	// (0x00011a27) mce_image_pane_g3

0x1fe7,	// (0x00011a31) mce_image_pane_g4

0x1fef,	// (0x00011a39) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0001edc8) mce_image_pane_g

0xa896,	// (0x0001a2e0) control_top_pane_stacon_cp01_ParamLimits

0xa896,	// (0x0001a2e0) control_top_pane_stacon_cp01

0xa8aa,	// (0x0001a2f4) uni_indicator_pane_stacon_cp01_ParamLimits

0xa8aa,	// (0x0001a2f4) uni_indicator_pane_stacon_cp01

0xa8bb,	// (0x0001a305) bg_popup_sub_pane_cp03

0x1ff7,	// (0x00011a41) chi_dic_find_pane

0x1fff,	// (0x00011a49) listscroll_chi_dic_pane

0x2008,	// (0x00011a52) main_pane_chidic_g1

0x201b,	// (0x00011a65) chi_dic_find_pane_t1

0xa8c5,	// (0x0001a30f) find_chidic_pane

0xa8ce,	// (0x0001a318) chi_dic_list_pane_ParamLimits

0xa8ce,	// (0x0001a318) chi_dic_list_pane

0xa8df,	// (0x0001a329) scroll_pane_cp020

0x2029,	// (0x00011a73) find_chidic_pane_t1

0x9ab9,	// (0x00019503) input_focus_pane_cp06

0x2038,	// (0x00011a82) list_chi_dic_pane_ParamLimits

0x2038,	// (0x00011a82) list_chi_dic_pane

0x204a,	// (0x00011a94) list_chi_dic_pane_t1_ParamLimits

0x204a,	// (0x00011a94) list_chi_dic_pane_t1

0x9ab9,	// (0x00019503) list_highlight_pane_cp020

0xa8e7,	// (0x0001a331) bg_cale_heading_pane_g1

0x205d,	// (0x00011aa7) bg_cale_heading_pane_g2

0x2065,	// (0x00011aaf) bg_cale_heading_pane_g3

0x206d,	// (0x00011ab7) bg_cale_heading_pane_g4

0x2077,	// (0x00011ac1) bg_cale_heading_pane_g5

0x2081,	// (0x00011acb) bg_cale_heading_pane_g6

0x2089,	// (0x00011ad3) bg_cale_heading_pane_g7

0x2091,	// (0x00011adb) bg_cale_heading_pane_g8

0x209b,	// (0x00011ae5) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0001edd3) bg_cale_heading_pane_g

0xa8e7,	// (0x0001a331) bg_cale_side_pane_g1

0x20a5,	// (0x00011aef) bg_cale_side_pane_g2

0x20af,	// (0x00011af9) bg_cale_side_pane_g3

0x20b9,	// (0x00011b03) bg_cale_side_pane_g4

0x20c3,	// (0x00011b0d) bg_cale_side_pane_g5

0x20cd,	// (0x00011b17) bg_cale_side_pane_g6

0x20d7,	// (0x00011b21) bg_cale_side_pane_g7

0x20e1,	// (0x00011b2b) bg_cale_side_pane_g8

0x20e9,	// (0x00011b33) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0001ede6) bg_cale_side_pane_g

0x20f1,	// (0x00011b3b) popup_call_status_window_ParamLimits

0x20f1,	// (0x00011b3b) popup_call_status_window

0xa8ef,	// (0x0001a339) stacon_top_pane

0xa8f7,	// (0x0001a341) status_pane_ParamLimits

0xa8f7,	// (0x0001a341) status_pane

0xa90c,	// (0x0001a356) status_small_pane

0xa914,	// (0x0001a35e) control_pane

0x9ab9,	// (0x00019503) stacon_bottom_pane

0xa91c,	// (0x0001a366) list_single_mce_smart_pane_t1_ParamLimits

0xa91c,	// (0x0001a366) list_single_mce_smart_pane_t1

0xa92f,	// (0x0001a379) list_single_mce_smart_pane_t2_ParamLimits

0xa92f,	// (0x0001a379) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0001edf9) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0001edf9) list_single_mce_smart_pane_t

0x213e,	// (0x00011b88) compass_pane

0x2149,	// (0x00011b93) main_location2_pane_t1

0x215f,	// (0x00011ba9) main_location2_pane_t2

0x2175,	// (0x00011bbf) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0001edfe) main_location2_pane_t

0xa94e,	// (0x0001a398) compass_pane_g1_ParamLimits

0xa94e,	// (0x0001a398) compass_pane_g1

0x21c3,	// (0x00011c0d) compass_pane_t1

0x21d2,	// (0x00011c1c) compass_pane_t2

0x0005,

0xf3bd,	// (0x0001ee07) compass_pane_t

0x221d,	// (0x00011c67) text_secondary_cp61

0xa9cc,	// (0x0001a416) navi_pane_cams_g5

0xaa48,	// (0x0001a492) navi_pane_im_t1

0xaa56,	// (0x0001a4a0) navi_pane_mp_g1_ParamLimits

0xaa56,	// (0x0001a4a0) navi_pane_mp_g1

0xaa6a,	// (0x0001a4b4) navi_pane_mp_g2_ParamLimits

0xaa6a,	// (0x0001a4b4) navi_pane_mp_g2

0xaa76,	// (0x0001a4c0) navi_pane_mp_g3_ParamLimits

0xaa76,	// (0x0001a4c0) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0001ee1b) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0001ee1b) navi_pane_mp_g

0xaa82,	// (0x0001a4cc) navi_pane_mp_t1

0xaa90,	// (0x0001a4da) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0001ee22) navi_pane_mp_t

0xaafd,	// (0x0001a547) navi_pane_vt_g1

0xaa82,	// (0x0001a4cc) navi_pane_vt_t1

0xab05,	// (0x0001a54f) navi_slider_pane

0xa018,	// (0x00019a62) zooming_pane

0xab15,	// (0x0001a55f) navi_slider_pane_g1

0xab1e,	// (0x0001a568) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0001ee29) navi_slider_pane_g

0xab4b,	// (0x0001a595) aid_levels_zoom

0xab53,	// (0x0001a59d) zooming_pane_g1

0xab5b,	// (0x0001a5a5) zooming_pane_g2

0xab5b,	// (0x0001a5a5) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0001ee38) zooming_pane_g

0xab63,	// (0x0001a5ad) level_10_zoom

0xab6c,	// (0x0001a5b6) level_11_zoom

0xab75,	// (0x0001a5bf) level_1_zoom

0xab7e,	// (0x0001a5c8) level_2_zoom

0xab87,	// (0x0001a5d1) level_3_zoom

0xab90,	// (0x0001a5da) level_4_zoom

0xab99,	// (0x0001a5e3) level_5_zoom

0xaba2,	// (0x0001a5ec) level_6_zoom

0xabab,	// (0x0001a5f5) level_7_zoom

0xabb4,	// (0x0001a5fe) level_8_zoom

0xabbd,	// (0x0001a607) level_9_zoom

0xabce,	// (0x0001a618) popup_phob_thumbnail_window_g1

0xabd6,	// (0x0001a620) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0001ee3f) popup_phob_thumbnail_window_g

0xbf6b,	// (0x0001b9b5) level_1_location

0xbf73,	// (0x0001b9bd) level_2_location

0xbf7b,	// (0x0001b9c5) level_3_location

0xbf83,	// (0x0001b9cd) level_4_location

0xa018,	// (0x00019a62) level_5_location

0x226e,	// (0x00011cb8) mce_icon_pane_g1

0x2278,	// (0x00011cc2) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0001ee44) mce_icon_pane_g

0x2280,	// (0x00011cca) main_mup_pane_g1_ParamLimits

0x2280,	// (0x00011cca) main_mup_pane_g1

0x2296,	// (0x00011ce0) main_mup_pane_g2_ParamLimits

0x2296,	// (0x00011ce0) main_mup_pane_g2

0x22ae,	// (0x00011cf8) main_mup_pane_g3_ParamLimits

0x22ae,	// (0x00011cf8) main_mup_pane_g3

0x22c6,	// (0x00011d10) main_mup_pane_g4_ParamLimits

0x22c6,	// (0x00011d10) main_mup_pane_g4

0x22d8,	// (0x00011d22) main_mup_pane_g5_ParamLimits

0x22d8,	// (0x00011d22) main_mup_pane_g5

0x22f4,	// (0x00011d3e) main_mup_pane_g6_ParamLimits

0x22f4,	// (0x00011d3e) main_mup_pane_g6

0x230e,	// (0x00011d58) main_mup_pane_g7_ParamLimits

0x230e,	// (0x00011d58) main_mup_pane_g7

0x232c,	// (0x00011d76) main_mup_pane_g8_ParamLimits

0x232c,	// (0x00011d76) main_mup_pane_g8

0x234a,	// (0x00011d94) main_mup_pane_g9_ParamLimits

0x234a,	// (0x00011d94) main_mup_pane_g9

0x2366,	// (0x00011db0) main_mup_pane_g10_ParamLimits

0x2366,	// (0x00011db0) main_mup_pane_g10

0x2384,	// (0x00011dce) main_mup_pane_g11_ParamLimits

0x2384,	// (0x00011dce) main_mup_pane_g11

0x239e,	// (0x00011de8) main_mup_pane_g12_ParamLimits

0x239e,	// (0x00011de8) main_mup_pane_g12

0x23b4,	// (0x00011dfe) main_mup_pane_g13_ParamLimits

0x23b4,	// (0x00011dfe) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0001ee49) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0001ee49) main_mup_pane_g

0x23c8,	// (0x00011e12) main_mup_pane_t1_ParamLimits

0x23c8,	// (0x00011e12) main_mup_pane_t1

0x23e4,	// (0x00011e2e) main_mup_pane_t2_ParamLimits

0x23e4,	// (0x00011e2e) main_mup_pane_t2

0x23fc,	// (0x00011e46) main_mup_pane_t3_ParamLimits

0x23fc,	// (0x00011e46) main_mup_pane_t3

0x2414,	// (0x00011e5e) main_mup_pane_t4_ParamLimits

0x2414,	// (0x00011e5e) main_mup_pane_t4

0x2432,	// (0x00011e7c) main_mup_pane_t5_ParamLimits

0x2432,	// (0x00011e7c) main_mup_pane_t5

0x2447,	// (0x00011e91) main_mup_pane_t6_ParamLimits

0x2447,	// (0x00011e91) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0001ee64) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0001ee64) main_mup_pane_t

0x2459,	// (0x00011ea3) mup_progress_pane_ParamLimits

0x2459,	// (0x00011ea3) mup_progress_pane

0x2465,	// (0x00011eaf) mup_visualizer_pane_ParamLimits

0x2465,	// (0x00011eaf) mup_visualizer_pane

0x2499,	// (0x00011ee3) mup_volume_pane_ParamLimits

0x2499,	// (0x00011ee3) mup_volume_pane

0xabde,	// (0x0001a628) mup_visualizer_pane_g1_ParamLimits

0xabde,	// (0x0001a628) mup_visualizer_pane_g1

0xabde,	// (0x0001a628) mup_visualizer_pane_g2_ParamLimits

0xabde,	// (0x0001a628) mup_visualizer_pane_g2

0xa94e,	// (0x0001a398) mup_visualizer_pane_g3_ParamLimits

0xa94e,	// (0x0001a398) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0001ee71) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0001ee71) mup_visualizer_pane_g

0x9e74,	// (0x000198be) mup_volume_pane_g1

0xabf4,	// (0x0001a63e) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0001ee78) mup_volume_pane_g

0x9e74,	// (0x000198be) mup_progress_pane_g1

0xabfd,	// (0x0001a647) mup_progress_pane_g2

0xac06,	// (0x0001a650) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0001ee7d) mup_progress_pane_g

0x9ab9,	// (0x00019503) bg_popup_window_pane_cp05

0xac0f,	// (0x0001a659) heading_pane_cp02_ParamLimits

0xac0f,	// (0x0001a659) heading_pane_cp02

0xac2b,	// (0x0001a675) list_popup_blid_pane

0xac33,	// (0x0001a67d) list_blid_sat_info_pane_ParamLimits

0xac33,	// (0x0001a67d) list_blid_sat_info_pane

0xac46,	// (0x0001a690) list_blid_sat_info_pane_g1

0xac4e,	// (0x0001a698) list_blid_sat_info_pane_t1

0x25c3,	// (0x0001200d) mup_equalizer_pane_ParamLimits

0x25c3,	// (0x0001200d) mup_equalizer_pane

0x25e4,	// (0x0001202e) mup_equalizer_pane_cp1_ParamLimits

0x25e4,	// (0x0001202e) mup_equalizer_pane_cp1

0x2605,	// (0x0001204f) mup_equalizer_pane_cp2_ParamLimits

0x2605,	// (0x0001204f) mup_equalizer_pane_cp2

0x262a,	// (0x00012074) mup_equalizer_pane_cp3_ParamLimits

0x262a,	// (0x00012074) mup_equalizer_pane_cp3

0x2653,	// (0x0001209d) mup_equalizer_pane_cp4_ParamLimits

0x2653,	// (0x0001209d) mup_equalizer_pane_cp4

0x267c,	// (0x000120c6) mup_equalizer_pane_cp5

0x2694,	// (0x000120de) mup_equalizer_pane_cp6

0x26ac,	// (0x000120f6) mup_equalizer_pane_cp7

0xbe85,	// (0x0001b8cf) bg_popup_call_poc_act_pane_g9

0xbe8d,	// (0x0001b8d7) bg_popup_call_poc_act_pane_g10

0xbe95,	// (0x0001b8df) bg_popup_call_poc_act_pane_g11

0x000a,

0x9d14,	// (0x0001975e) mup_scale_pane

0x9e74,	// (0x000198be) mup_scale_pane_g1

0xac5c,	// (0x0001a6a6) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0001ee99) mup_scale_pane_g

0xac80,	// (0x0001a6ca) msg_data_pane

0xac88,	// (0x0001a6d2) scroll_pane_cp017

0x26d6,	// (0x00012120) bg_list_pane_cp04_ParamLimits

0x26d6,	// (0x00012120) bg_list_pane_cp04

0xac98,	// (0x0001a6e2) msg_data_pane_g1

0x26f6,	// (0x00012140) msg_data_pane_g2

0x2700,	// (0x0001214a) msg_data_pane_g3

0x270a,	// (0x00012154) msg_data_pane_g4

0x2712,	// (0x0001215c) msg_data_pane_g5

0x271a,	// (0x00012164) msg_data_pane_g6

0x2722,	// (0x0001216c) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0001eea8) msg_data_pane_g

0x272a,	// (0x00012174) msg_text_pane_ParamLimits

0x272a,	// (0x00012174) msg_text_pane

0x2763,	// (0x000121ad) qrid_highlight_pane_cp011_ParamLimits

0x2763,	// (0x000121ad) qrid_highlight_pane_cp011

0x9ab9,	// (0x00019503) msg_body_pane

0x9ab9,	// (0x00019503) msg_header_pane

0xaca9,	// (0x0001a6f3) input_focus_pane_cp07

0xacbe,	// (0x0001a708) msg_header_pane_t1_ParamLimits

0xacbe,	// (0x0001a708) msg_header_pane_t1

0xacd0,	// (0x0001a71a) msg_header_pane_t2_ParamLimits

0xacd0,	// (0x0001a71a) msg_header_pane_t2

0x0001,

0xf472,	// (0x0001eebc) msg_header_pane_t_ParamLimits

0xf472,	// (0x0001eebc) msg_header_pane_t

0xace2,	// (0x0001a72c) msg_body_pane_g1

0x2787,	// (0x000121d1) msg_body_pane_t1_ParamLimits

0x2787,	// (0x000121d1) msg_body_pane_t1

0xacea,	// (0x0001a734) msg_body_pane_t2_ParamLimits

0xacea,	// (0x0001a734) msg_body_pane_t2

0xacfc,	// (0x0001a746) msg_body_pane_t3_ParamLimits

0xacfc,	// (0x0001a746) msg_body_pane_t3

0x0002,

0xf477,	// (0x0001eec1) msg_body_pane_t_ParamLimits

0xf477,	// (0x0001eec1) msg_body_pane_t

0x27f2,	// (0x0001223c) main_viewer_pane_g1_ParamLimits

0x27f2,	// (0x0001223c) main_viewer_pane_g1

0x2800,	// (0x0001224a) main_viewer_pane_g2_ParamLimits

0x2800,	// (0x0001224a) main_viewer_pane_g2

0x280e,	// (0x00012258) main_viewer_pane_g3_ParamLimits

0x280e,	// (0x00012258) main_viewer_pane_g3

0x281d,	// (0x00012267) main_viewer_pane_g4_ParamLimits

0x281d,	// (0x00012267) main_viewer_pane_g4

0xad26,	// (0x0001a770) main_viewer_pane_g5_ParamLimits

0xad26,	// (0x0001a770) main_viewer_pane_g5

0xad26,	// (0x0001a770) main_viewer_pane_g7_ParamLimits

0xad26,	// (0x0001a770) main_viewer_pane_g7

0xad38,	// (0x0001a782) main_viewer_pane_g8_ParamLimits

0xad38,	// (0x0001a782) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0001eed1) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0001eed1) main_viewer_pane_g

0xad50,	// (0x0001a79a) viewer_content_pane_ParamLimits

0xad50,	// (0x0001a79a) viewer_content_pane

0x285b,	// (0x000122a5) main_postcard_pane_g1_ParamLimits

0x285b,	// (0x000122a5) main_postcard_pane_g1

0x2871,	// (0x000122bb) main_postcard_pane_g2_ParamLimits

0x2871,	// (0x000122bb) main_postcard_pane_g2

0x2887,	// (0x000122d1) main_postcard_pane_g3_ParamLimits

0x2887,	// (0x000122d1) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0001eee2) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0001eee2) main_postcard_pane_g

0x289e,	// (0x000122e8) main_postcard_pane_g4

0xc0d6,	// (0x0001bb20) smil_status_volume_pane_g2

0x28e1,	// (0x0001232b) postcard_pane_ParamLimits

0x28e1,	// (0x0001232b) postcard_pane

0xad5e,	// (0x0001a7a8) postcard_pane_g1_ParamLimits

0xad5e,	// (0x0001a7a8) postcard_pane_g1

0x2931,	// (0x0001237b) postcard_pane_g2_ParamLimits

0x2931,	// (0x0001237b) postcard_pane_g2

0x293d,	// (0x00012387) postcard_pane_g3_ParamLimits

0x293d,	// (0x00012387) postcard_pane_g3

0xad6c,	// (0x0001a7b6) postcard_pane_g4_ParamLimits

0xad6c,	// (0x0001a7b6) postcard_pane_g4

0x2949,	// (0x00012393) postcard_pane_g5_ParamLimits

0x2949,	// (0x00012393) postcard_pane_g5

0x295e,	// (0x000123a8) postcard_pane_g6_ParamLimits

0x295e,	// (0x000123a8) postcard_pane_g6

0xad5e,	// (0x0001a7a8) postcard_pane_g7_ParamLimits

0xad5e,	// (0x0001a7a8) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0001eeef) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0001eeef) postcard_pane_g

0x2976,	// (0x000123c0) main_mp2_pane_g1_ParamLimits

0x2976,	// (0x000123c0) main_mp2_pane_g1

0x2984,	// (0x000123ce) main_mp2_pane_g2_ParamLimits

0x2984,	// (0x000123ce) main_mp2_pane_g2

0x2990,	// (0x000123da) main_mp2_pane_g3_ParamLimits

0x2990,	// (0x000123da) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0001eefe) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0001eefe) main_mp2_pane_g

0x299c,	// (0x000123e6) main_mp2_pane_t1_ParamLimits

0x299c,	// (0x000123e6) main_mp2_pane_t1

0x29b3,	// (0x000123fd) main_mp2_pane_t2_ParamLimits

0x29b3,	// (0x000123fd) main_mp2_pane_t2

0x29c7,	// (0x00012411) main_mp2_pane_t3_ParamLimits

0x29c7,	// (0x00012411) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0001ef05) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0001ef05) main_mp2_pane_t

0xad7a,	// (0x0001a7c4) pec_content_pane_ParamLimits

0xad7a,	// (0x0001a7c4) pec_content_pane

0xa1e4,	// (0x00019c2e) scroll_pane_cp015

0xad8c,	// (0x0001a7d6) pec_attribute_pane_ParamLimits

0xad8c,	// (0x0001a7d6) pec_attribute_pane

0x29d9,	// (0x00012423) pec_content_pane_g1_ParamLimits

0x29d9,	// (0x00012423) pec_content_pane_g1

0xad9c,	// (0x0001a7e6) pec_content_pane_t1_ParamLimits

0xad9c,	// (0x0001a7e6) pec_content_pane_t1

0xadae,	// (0x0001a7f8) pec_content_pane_t2_ParamLimits

0xadae,	// (0x0001a7f8) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0001ef0c) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0001ef0c) pec_content_pane_t

0x29e5,	// (0x0001242f) list_single_graphic_pane_cp01_ParamLimits

0x29e5,	// (0x0001242f) list_single_graphic_pane_cp01

0x9d14,	// (0x0001975e) bg_popup_sub_pane_cp04

0xadc0,	// (0x0001a80a) popup_mup_playback_window_g1

0xadcc,	// (0x0001a816) popup_mup_playback_window_t1

0xade1,	// (0x0001a82b) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0001ef11) popup_mup_playback_window_t

0xae18,	// (0x0001a862) main_image_pane_g1_ParamLimits

0xae18,	// (0x0001a862) main_image_pane_g1

0xae5b,	// (0x0001a8a5) scroll_pane_cp018_ParamLimits

0xae5b,	// (0x0001a8a5) scroll_pane_cp018

0xae73,	// (0x0001a8bd) scroll_pane_cp016_ParamLimits

0xae73,	// (0x0001a8bd) scroll_pane_cp016

0x2ab7,	// (0x00012501) smil2_image_pane_ParamLimits

0x2ab7,	// (0x00012501) smil2_image_pane

0x2aed,	// (0x00012537) smil2_root_pane_ParamLimits

0x2aed,	// (0x00012537) smil2_root_pane

0x2b25,	// (0x0001256f) smil2_text_pane_ParamLimits

0x2b25,	// (0x0001256f) smil2_text_pane

0x9ab9,	// (0x00019503) bg_list_pane_cp06

0xaeaf,	// (0x0001a8f9) grid_radio_pane

0x9ab9,	// (0x00019503) bg_popup_window_pane_cp06

0xaeb9,	// (0x0001a903) main_fmradio_pane_t1

0xa7cb,	// (0x0001a215) heading_pane_cp04

0xaec7,	// (0x0001a911) main_fmradio_pane_t2

0xbe9d,	// (0x0001b8e7) popup_cale_lunar_info_window_g1

0xaed5,	// (0x0001a91f) main_fmradio_pane_t3

0xbea5,	// (0x0001b8ef) popup_cale_lunar_info_window_g2

0xaee5,	// (0x0001a92f) main_fmradio_pane_t4

0x0001,

0xaef3,	// (0x0001a93d) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0001efec) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0001ef26) main_fmradio_pane_t

0xaf01,	// (0x0001a94b) wait_bar_pane_cp03

0xaf09,	// (0x0001a953) cell_fmradio_pane_ParamLimits

0xaf09,	// (0x0001a953) cell_fmradio_pane

0xad5e,	// (0x0001a7a8) cell_fmradio_pane_g1_ParamLimits

0xad5e,	// (0x0001a7a8) cell_fmradio_pane_g1

0x9ab9,	// (0x00019503) grid_highlight_pane_cp011

0xaf1e,	// (0x0001a968) poc_content_pane_ParamLimits

0xaf1e,	// (0x0001a968) poc_content_pane

0xaf30,	// (0x0001a97a) scroll_pane_cp019

0x2bb5,	// (0x000125ff) popup_call_poc_act_window_ParamLimits

0x2bb5,	// (0x000125ff) popup_call_poc_act_window

0x2bd9,	// (0x00012623) popup_call_poc_inact_window_ParamLimits

0x2bd9,	// (0x00012623) popup_call_poc_inact_window

0xf579,	// (0x0001efc3) bg_popup_call_poc_act_pane_g

0xbe15,	// (0x0001b85f) bg_popup_call_poc_inact_pane_g1

0xbe1d,	// (0x0001b867) bg_popup_call_poc_inact_pane_g2

0xaf38,	// (0x0001a982) popup_call_poc_act_window_g2

0xbe25,	// (0x0001b86f) bg_popup_call_poc_inact_pane_g3

0xbe2d,	// (0x0001b877) bg_popup_call_poc_inact_pane_g4

0xbe35,	// (0x0001b87f) bg_popup_call_poc_inact_pane_g5

0xaf40,	// (0x0001a98a) popup_call_poc_act_window_t1_ParamLimits

0xaf40,	// (0x0001a98a) popup_call_poc_act_window_t1

0xaf68,	// (0x0001a9b2) popup_call_poc_act_window_t2_ParamLimits

0xaf68,	// (0x0001a9b2) popup_call_poc_act_window_t2

0xaf90,	// (0x0001a9da) popup_call_poc_act_window_t3_ParamLimits

0xaf90,	// (0x0001a9da) popup_call_poc_act_window_t3

0xafb8,	// (0x0001aa02) popup_call_poc_act_window_t4_ParamLimits

0xafb8,	// (0x0001aa02) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0001ef31) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0001ef31) popup_call_poc_act_window_t

0xbe3d,	// (0x0001b887) bg_popup_call_poc_inact_pane_g6

0xbe45,	// (0x0001b88f) bg_popup_call_poc_inact_pane_g7

0xbe4d,	// (0x0001b897) bg_popup_call_poc_inact_pane_g8

0xafca,	// (0x0001aa14) popup_call_poc_inact_window_g2

0xbe55,	// (0x0001b89f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0001efb0) bg_popup_call_poc_inact_pane_g

0xafd2,	// (0x0001aa1c) popup_call_poc_inact_window_t1_ParamLimits

0xafd2,	// (0x0001aa1c) popup_call_poc_inact_window_t1

0xafe7,	// (0x0001aa31) popup_call_poc_inact_window_t2_ParamLimits

0xafe7,	// (0x0001aa31) popup_call_poc_inact_window_t2

0xaffc,	// (0x0001aa46) popup_call_poc_inact_window_t3_ParamLimits

0xaffc,	// (0x0001aa46) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0001ef3a) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0001ef3a) popup_call_poc_inact_window_t

0xc036,	// (0x0001ba80) context_pane_ParamLimits

0x3472,	// (0x00012ebc) signal_pane_ParamLimits

0xa018,	// (0x00019a62) main_call2_pane

0xc00f,	// (0x0001ba59) popup_phob_thumbnail2_window_ParamLimits

0xc00f,	// (0x0001ba59) popup_phob_thumbnail2_window

0xad0e,	// (0x0001a758) aid_hotspot_pointer_arrow_pane

0xad16,	// (0x0001a760) aid_hotspot_pointer_hand_pane

0x2f44,	// (0x0001298e) phob_pre_status_pane_g5

0x0842,	// (0x0001028c) cams_zoom_pane_ParamLimits

0x0851,	// (0x0001029b) image_vga_pane_ParamLimits

0x086b,	// (0x000102b5) main_camera_pane_g1_ParamLimits

0x087d,	// (0x000102c7) main_camera_pane_g2_ParamLimits

0x088d,	// (0x000102d7) main_camera_pane_g3_ParamLimits

0x08a1,	// (0x000102eb) main_camera_pane_g4_ParamLimits

0x08b5,	// (0x000102ff) main_camera_pane_g5_ParamLimits

0x08c9,	// (0x00010313) main_camera_pane_g6_ParamLimits

0x08dd,	// (0x00010327) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0001ec39) main_camera_pane_g_ParamLimits

0x08f1,	// (0x0001033b) main_camera_pane_t1_ParamLimits

0x0907,	// (0x00010351) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0001ec4a) main_camera_pane_t_ParamLimits

0x9d14,	// (0x0001975e) bg_popup_preview_window_pane_cp01_ParamLimits

0x9d14,	// (0x0001975e) bg_popup_preview_window_pane_cp01

0xb011,	// (0x0001aa5b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb011,	// (0x0001aa5b) popup_phob_thumbnail2_window_g1

0x9ab9,	// (0x00019503) call2_cli_visual_pane

0x2c0d,	// (0x00012657) popup_call2_audio_conf_window_ParamLimits

0x2c0d,	// (0x00012657) popup_call2_audio_conf_window

0x2c35,	// (0x0001267f) popup_call2_audio_first_window_ParamLimits

0x2c35,	// (0x0001267f) popup_call2_audio_first_window

0x2ccb,	// (0x00012715) popup_call2_audio_in_window_ParamLimits

0x2ccb,	// (0x00012715) popup_call2_audio_in_window

0x2d17,	// (0x00012761) popup_call2_audio_out_window_ParamLimits

0x2d17,	// (0x00012761) popup_call2_audio_out_window

0x2d89,	// (0x000127d3) popup_call2_audio_second_window_ParamLimits

0x2d89,	// (0x000127d3) popup_call2_audio_second_window

0x2def,	// (0x00012839) popup_call2_audio_wait_window_ParamLimits

0x2def,	// (0x00012839) popup_call2_audio_wait_window

0x9ab9,	// (0x00019503) bg_popup_call2_act_pane_cp03

0x9cf6,	// (0x00019740) list_conf_pane_cp

0xb01d,	// (0x0001aa67) popup_call2_audio_conf_window_t1

0xb02b,	// (0x0001aa75) list_single_graphic_popup_conf2_pane_ParamLimits

0xb02b,	// (0x0001aa75) list_single_graphic_popup_conf2_pane

0xa83a,	// (0x0001a284) list_highlight_pane_cp04

0xb03e,	// (0x0001aa88) list_single_graphic_popup_conf2_pane_g1

0xa84b,	// (0x0001a295) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0001ef41) list_single_graphic_popup_conf2_pane_g

0xb048,	// (0x0001aa92) list_single_graphic_popup_conf2_pane_t1

0xb056,	// (0x0001aaa0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb056,	// (0x0001aaa0) bg_popup_call2_act_pane_cp01

0xb0e0,	// (0x0001ab2a) call_type_pane_cp05_ParamLimits

0xb0e0,	// (0x0001ab2a) call_type_pane_cp05

0xb134,	// (0x0001ab7e) popup_call2_audio_second_window_g1_ParamLimits

0xb134,	// (0x0001ab7e) popup_call2_audio_second_window_g1

0xb188,	// (0x0001abd2) popup_call2_audio_second_window_g2_ParamLimits

0xb188,	// (0x0001abd2) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0001ef46) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0001ef46) popup_call2_audio_second_window_g

0xb1ed,	// (0x0001ac37) popup_call2_audio_second_window_t1_ParamLimits

0xb1ed,	// (0x0001ac37) popup_call2_audio_second_window_t1

0xb2a8,	// (0x0001acf2) popup_call2_audio_second_window_t2_ParamLimits

0xb2a8,	// (0x0001acf2) popup_call2_audio_second_window_t2

0xb2fb,	// (0x0001ad45) popup_call2_audio_second_window_t3_ParamLimits

0xb2fb,	// (0x0001ad45) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0001ef4d) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0001ef4d) popup_call2_audio_second_window_t

0x9ab9,	// (0x00019503) bg_popup_call2_in_pane_cp02

0x9ac3,	// (0x0001950d) call_type_pane_cp04

0x9acb,	// (0x00019515) popup_call2_audio_wait_window_g1

0x9ad3,	// (0x0001951d) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0001eb28) popup_call2_audio_wait_window_g

0x9adb,	// (0x00019525) popup_call2_audio_wait_window_t3

0xb3ee,	// (0x0001ae38) bg_popup_call2_act_pane_ParamLimits

0xb3ee,	// (0x0001ae38) bg_popup_call2_act_pane

0xb4ae,	// (0x0001aef8) call_type_pane_cp03_ParamLimits

0xb4ae,	// (0x0001aef8) call_type_pane_cp03

0xb512,	// (0x0001af5c) popup_call2_audio_first_window_g1_ParamLimits

0xb512,	// (0x0001af5c) popup_call2_audio_first_window_g1

0xb582,	// (0x0001afcc) popup_call2_audio_first_window_g2_ParamLimits

0xb582,	// (0x0001afcc) popup_call2_audio_first_window_g2

0xabde,	// (0x0001a628) popup_call2_audio_first_window_g3_ParamLimits

0xabde,	// (0x0001a628) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0001ef56) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0001ef56) popup_call2_audio_first_window_g

0xb660,	// (0x0001b0aa) popup_call2_audio_first_window_t1_ParamLimits

0xb660,	// (0x0001b0aa) popup_call2_audio_first_window_t1

0xb763,	// (0x0001b1ad) popup_call2_audio_first_window_t4_ParamLimits

0xb763,	// (0x0001b1ad) popup_call2_audio_first_window_t4

0xb846,	// (0x0001b290) popup_call2_audio_first_window_t5_ParamLimits

0xb846,	// (0x0001b290) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0001ef61) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0001ef61) popup_call2_audio_first_window_t

0x9d0c,	// (0x00019756) bg_popup_call2_act_pane_g1

0xbeaf,	// (0x0001b8f9) popup_cale_lunar_info_window_t1

0xbebd,	// (0x0001b907) popup_cale_lunar_info_window_t2

0xbecb,	// (0x0001b915) popup_cale_lunar_info_window_t3

0x9ab9,	// (0x00019503) bg_popup_call2_bubble_pane

0xb947,	// (0x0001b391) bg_popup_call2_in_pane_cp01_ParamLimits

0xb947,	// (0x0001b391) bg_popup_call2_in_pane_cp01

0x9795,	// (0x000191df) call_type_pane_cp02

0xb98f,	// (0x0001b3d9) popup_call2_audio_out_window_g1_ParamLimits

0xb98f,	// (0x0001b3d9) popup_call2_audio_out_window_g1

0xb9bb,	// (0x0001b405) popup_call2_audio_out_window_g2_ParamLimits

0xb9bb,	// (0x0001b405) popup_call2_audio_out_window_g2

0xb9e3,	// (0x0001b42d) popup_call2_audio_out_window_g3_ParamLimits

0xb9e3,	// (0x0001b42d) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0001ef6a) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0001ef6a) popup_call2_audio_out_window_g

0xba1e,	// (0x0001b468) popup_call2_audio_out_window_t1_ParamLimits

0xba1e,	// (0x0001b468) popup_call2_audio_out_window_t1

0xba7d,	// (0x0001b4c7) popup_call2_audio_out_window_t2_ParamLimits

0xba7d,	// (0x0001b4c7) popup_call2_audio_out_window_t2

0xbad1,	// (0x0001b51b) popup_call2_audio_out_window_t3_ParamLimits

0xbad1,	// (0x0001b51b) popup_call2_audio_out_window_t3

0xbae7,	// (0x0001b531) popup_call2_audio_out_window_t4_ParamLimits

0xbae7,	// (0x0001b531) popup_call2_audio_out_window_t4

0xbafd,	// (0x0001b547) popup_call2_audio_out_window_t5_ParamLimits

0xbafd,	// (0x0001b547) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0001ef73) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0001ef73) popup_call2_audio_out_window_t

0xbb61,	// (0x0001b5ab) bg_popup_call2_in_pane_ParamLimits

0xbb61,	// (0x0001b5ab) bg_popup_call2_in_pane

0xbbbd,	// (0x0001b607) popup_call2_audio_in_window_g1_ParamLimits

0xbbbd,	// (0x0001b607) popup_call2_audio_in_window_g1

0xbbf5,	// (0x0001b63f) popup_call2_audio_in_window_g2_ParamLimits

0xbbf5,	// (0x0001b63f) popup_call2_audio_in_window_g2

0xbc2d,	// (0x0001b677) popup_call2_audio_in_window_g3_ParamLimits

0xbc2d,	// (0x0001b677) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0001ef80) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0001ef80) popup_call2_audio_in_window_g

0xbc85,	// (0x0001b6cf) popup_call2_audio_in_window_t1_ParamLimits

0xbc85,	// (0x0001b6cf) popup_call2_audio_in_window_t1

0xbd05,	// (0x0001b74f) popup_call2_audio_in_window_t2_ParamLimits

0xbd05,	// (0x0001b74f) popup_call2_audio_in_window_t2

0xbd85,	// (0x0001b7cf) popup_call2_audio_in_window_t3_ParamLimits

0xbd85,	// (0x0001b7cf) popup_call2_audio_in_window_t3

0xbd9f,	// (0x0001b7e9) popup_call2_audio_in_window_t4_ParamLimits

0xbd9f,	// (0x0001b7e9) popup_call2_audio_in_window_t4

0xbdb1,	// (0x0001b7fb) popup_call2_audio_in_window_t5_ParamLimits

0xbdb1,	// (0x0001b7fb) popup_call2_audio_in_window_t5

0xbdc3,	// (0x0001b80d) popup_call2_audio_in_window_t6_ParamLimits

0xbdc3,	// (0x0001b80d) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0001ef89) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0001ef89) popup_call2_audio_in_window_t

0x9d0c,	// (0x00019756) bg_popup_call2_in_pane_g1

0xbed9,	// (0x0001b923) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0001eff1) popup_cale_lunar_info_window_t

0x9d14,	// (0x0001975e) bg_popup_call2_rect_pane_ParamLimits

0x9d14,	// (0x0001975e) bg_popup_call2_rect_pane

0x9ab9,	// (0x00019503) call2_cli_visual_graphic_pane

0x9ab9,	// (0x00019503) call2_cli_visual_text_pane

0xc0e9,	// (0x0001bb33) smil_status_volume_pane_g3

0x0002,

0x9e74,	// (0x000198be) call2_cli_visual_graphic_pane_g1

0x9e74,	// (0x000198be) call2_cli_visual_graphic_pane_g2

0x9e74,	// (0x000198be) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0001ef96) call2_cli_visual_graphic_pane_g

0xbdd5,	// (0x0001b81f) bg_popup_call2_rect_pane_g1

0x9f09,	// (0x00019953) bg_popup_call2_rect_pane_g2

0xbddd,	// (0x0001b827) bg_popup_call2_rect_pane_g3

0xbde5,	// (0x0001b82f) bg_popup_call2_rect_pane_g4

0xbded,	// (0x0001b837) bg_popup_call2_rect_pane_g5

0xbdf5,	// (0x0001b83f) bg_popup_call2_rect_pane_g6

0xbdfd,	// (0x0001b847) bg_popup_call2_rect_pane_g7

0xbe05,	// (0x0001b84f) bg_popup_call2_rect_pane_g8

0xbe0d,	// (0x0001b857) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0001ef9d) bg_popup_call2_rect_pane_g

0xbe15,	// (0x0001b85f) bg_popup_call2_bubble_pane_g1

0xbe1d,	// (0x0001b867) bg_popup_call2_bubble_pane_g2

0xbe25,	// (0x0001b86f) bg_popup_call2_bubble_pane_g3

0xbe2d,	// (0x0001b877) bg_popup_call2_bubble_pane_g4

0xbe35,	// (0x0001b87f) bg_popup_call2_bubble_pane_g5

0xbe3d,	// (0x0001b887) bg_popup_call2_bubble_pane_g6

0xbe45,	// (0x0001b88f) bg_popup_call2_bubble_pane_g7

0xbe4d,	// (0x0001b897) bg_popup_call2_bubble_pane_g8

0xbe55,	// (0x0001b89f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0001efb0) bg_popup_call2_bubble_pane_g

0x01fd,	// (0x0000fc47) aid_cale_week_size_cell_pane

0x0921,	// (0x0001036b) aid_cams_cif_uncrop_pane_ParamLimits

0x0921,	// (0x0001036b) aid_cams_cif_uncrop_pane

0x0ada,	// (0x00010524) aid_cams_size_cell_ParamLimits

0x0ada,	// (0x00010524) aid_cams_size_cell

0x0aee,	// (0x00010538) grid_cams_pane_ParamLimits

0x0b08,	// (0x00010552) linegrid_cams_pane_ParamLimits

0x0cfd,	// (0x00010747) call_video_pane_t1

0x0d17,	// (0x00010761) call_video_pane_t2

0x0001,

0xf253,	// (0x0001ec9d) call_video_pane_t

0x1164,	// (0x00010bae) aid_cale_month_size_cell_pane_ParamLimits

0x1164,	// (0x00010bae) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0001f03a) smil_status_volume_pane_g

0xc0f6,	// (0x0001bb40) volume_smil_pane_ParamLimits

0x9600,	// (0x0001904a) aid_popup2_width_pane

0x0150,	// (0x0000fb9a) cell_qdial_pane_g4_ParamLimits

0x0150,	// (0x0000fb9a) cell_qdial_pane_g4

0x219f,	// (0x00011be9) aid_blid_cardinal_pane_ParamLimits

0x21af,	// (0x00011bf9) aid_blid_destination_pane_ParamLimits

0x21af,	// (0x00011bf9) aid_blid_destination_pane

0x9d14,	// (0x0001975e) bg_popup_call_poc_act_pane_ParamLimits

0x9d14,	// (0x0001975e) bg_popup_call_poc_act_pane

0x9d14,	// (0x0001975e) bg_popup_call_poc_inact_pane_ParamLimits

0x9d14,	// (0x0001975e) bg_popup_call_poc_inact_pane

0xbe5d,	// (0x0001b8a7) bg_popup_call_poc_act_pane_g1

0xbe65,	// (0x0001b8af) bg_popup_call_poc_act_pane_g2

0xbe6d,	// (0x0001b8b7) bg_popup_call_poc_act_pane_g3

0xbe2d,	// (0x0001b877) bg_popup_call_poc_act_pane_g4

0xbe35,	// (0x0001b87f) bg_popup_call_poc_act_pane_g5

0xbe75,	// (0x0001b8bf) bg_popup_call_poc_act_pane_g6

0xbe45,	// (0x0001b88f) bg_popup_call_poc_act_pane_g7

0xbe7d,	// (0x0001b8c7) bg_popup_call_poc_act_pane_g8

0x9ab9,	// (0x00019503) main_usb_pane

0xbfe6,	// (0x0001ba30) popup_cale_lunar_info_window

0x0fe4,	// (0x00010a2e) im_reading_pane_t1_ParamLimits

0xa13c,	// (0x00019b86) list_im_pane_ParamLimits

0xa14d,	// (0x00019b97) scroll_pane_cp07_ParamLimits

0x9ab9,	// (0x00019503) grid_highlight_pane_cp012

0x9d14,	// (0x0001975e) mup_scale_pane_ParamLimits

0xad5e,	// (0x0001a7a8) main_usb_pane_g1_ParamLimits

0xad5e,	// (0x0001a7a8) main_usb_pane_g1

0x2e50,	// (0x0001289a) main_usb_pane_g2_ParamLimits

0x2e50,	// (0x0001289a) main_usb_pane_g2

0x0001,

0xf590,	// (0x0001efda) main_usb_pane_g_ParamLimits

0xf590,	// (0x0001efda) main_usb_pane_g

0x2e66,	// (0x000128b0) main_usb_pane_t1_ParamLimits

0x2e66,	// (0x000128b0) main_usb_pane_t1

0x2e78,	// (0x000128c2) main_usb_pane_t2_ParamLimits

0x2e78,	// (0x000128c2) main_usb_pane_t2

0x2e8a,	// (0x000128d4) main_usb_pane_t3_ParamLimits

0x2e8a,	// (0x000128d4) main_usb_pane_t3

0x2e9c,	// (0x000128e6) main_usb_pane_t4_ParamLimits

0x2e9c,	// (0x000128e6) main_usb_pane_t4

0x2eb1,	// (0x000128fb) main_usb_pane_t5_ParamLimits

0x2eb1,	// (0x000128fb) main_usb_pane_t5

0x2ec6,	// (0x00012910) main_usb_pane_t6_ParamLimits

0x2ec6,	// (0x00012910) main_usb_pane_t6

0x0005,

0xf595,	// (0x0001efdf) main_usb_pane_t_ParamLimits

0x213e,	// (0x00011b88) aid_text_placing

0x2149,	// (0x00011b93) main_location2_pane_t1_ParamLimits

0x215f,	// (0x00011ba9) main_location2_pane_t2_ParamLimits

0x2175,	// (0x00011bbf) main_location2_pane_t3_ParamLimits

0x218b,	// (0x00011bd5) main_location2_pane_t4_ParamLimits

0x218b,	// (0x00011bd5) main_location2_pane_t4

0xf3b4,	// (0x0001edfe) main_location2_pane_t_ParamLimits

0x9d50,	// (0x0001979a) find_pinb_pane_g2_ParamLimits

0x9d50,	// (0x0001979a) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0001eb4e) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0001eb4e) find_pinb_pane_g

0x9d5c,	// (0x000197a6) find_pinb_pane_t1_ParamLimits

0x9d6e,	// (0x000197b8) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0001eb53) find_pinb_pane_t_ParamLimits

0x9ab9,	// (0x00019503) main_call3_pane

0x1769,	// (0x000111b3) cale_month_day_heading_pane_t1_ParamLimits

0x17ef,	// (0x00011239) cale_month_day_heading_pane_t2_ParamLimits

0x1868,	// (0x000112b2) cale_month_day_heading_pane_t3_ParamLimits

0x18e1,	// (0x0001132b) cale_month_day_heading_pane_t4_ParamLimits

0x1962,	// (0x000113ac) cale_month_day_heading_pane_t5_ParamLimits

0x19eb,	// (0x00011435) cale_month_day_heading_pane_t6_ParamLimits

0x1a7c,	// (0x000114c6) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0001ecd5) cale_month_day_heading_pane_t_ParamLimits

0xa3a3,	// (0x00019ded) smil_status_volume_pane

0x2905,	// (0x0001234f) postcard_address_pane_ParamLimits

0x2905,	// (0x0001234f) postcard_address_pane

0x291b,	// (0x00012365) postcard_message_pane_ParamLimits

0x291b,	// (0x00012365) postcard_message_pane

0x2e29,	// (0x00012873) call2_cli_visual_pane_t1_ParamLimits

0x2e29,	// (0x00012873) call2_cli_visual_pane_t1

0x3683,	// (0x000130cd) postcard_message_pane_t1_ParamLimits

0x3683,	// (0x000130cd) postcard_message_pane_t1

0xc10b,	// (0x0001bb55) postcard_address_pane_t1_ParamLimits

0xc10b,	// (0x0001bb55) postcard_address_pane_t1

0x366f,	// (0x000130b9) popup_call3_audio_in_window_ParamLimits

0x366f,	// (0x000130b9) popup_call3_audio_in_window

0x34f4,	// (0x00012f3e) bg_popup_call3_in_pane_ParamLimits

0x34f4,	// (0x00012f3e) bg_popup_call3_in_pane

0x3570,	// (0x00012fba) popup_call3_audio_in_window_g1_ParamLimits

0x3570,	// (0x00012fba) popup_call3_audio_in_window_g1

0x3590,	// (0x00012fda) popup_call3_audio_in_window_g2_ParamLimits

0x3590,	// (0x00012fda) popup_call3_audio_in_window_g2

0x35b0,	// (0x00012ffa) popup_call3_audio_in_window_g3_ParamLimits

0x35b0,	// (0x00012ffa) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0001f041) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0001f041) popup_call3_audio_in_window_g

0x35e1,	// (0x0001302b) popup_call3_audio_in_window_t1_ParamLimits

0x35e1,	// (0x0001302b) popup_call3_audio_in_window_t1

0x361f,	// (0x00013069) popup_call3_audio_in_window_t2_ParamLimits

0x361f,	// (0x00013069) popup_call3_audio_in_window_t2

0x365d,	// (0x000130a7) popup_call3_audio_in_window_t3_ParamLimits

0x365d,	// (0x000130a7) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0001f04a) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0001f04a) popup_call3_audio_in_window_t

0xa018,	// (0x00019a62) bg_popup_call3_rect_pane

0xbdd5,	// (0x0001b81f) bg_popup_call3_rect_pane_g1

0x9f09,	// (0x00019953) bg_popup_call3_rect_pane_g2

0xbddd,	// (0x0001b827) bg_popup_call3_rect_pane_g3

0xbde5,	// (0x0001b82f) bg_popup_call3_rect_pane_g4

0xbded,	// (0x0001b837) bg_popup_call3_rect_pane_g5

0xbdf5,	// (0x0001b83f) bg_popup_call3_rect_pane_g6

0xbdfd,	// (0x0001b847) bg_popup_call3_rect_pane_g7

0x24af,	// (0x00011ef9) mup_visualizer_osc_pane

0xabec,	// (0x0001a636) mup_visualizer_spec_pane

0x3524,	// (0x00012f6e) call3_video_qcif_pane_ParamLimits

0x3524,	// (0x00012f6e) call3_video_qcif_pane

0x3537,	// (0x00012f81) call3_video_qcif_uncrop_pane_ParamLimits

0x3537,	// (0x00012f81) call3_video_qcif_uncrop_pane

0x3547,	// (0x00012f91) call3_video_subqcif_pane_ParamLimits

0x3547,	// (0x00012f91) call3_video_subqcif_pane

0x355d,	// (0x00012fa7) call3_video_subqcif_uncrop_pane_ParamLimits

0x355d,	// (0x00012fa7) call3_video_subqcif_uncrop_pane

0x35d0,	// (0x0001301a) popup_call3_audio_in_window_g4_ParamLimits

0x35d0,	// (0x0001301a) popup_call3_audio_in_window_g4

0x34e3,	// (0x00012f2d) mup_spec_half_pane

0x34ec,	// (0x00012f36) mup_spec_half_pane_cp

0xc0a9,	// (0x0001baf3) mup_osc_middle_pane

0xc0b2,	// (0x0001bafc) mup_visualizer_osc_pane_g1

0x34c3,	// (0x00012f0d) mup_spec_bar_pane_ParamLimits

0x34c3,	// (0x00012f0d) mup_spec_bar_pane

0xc096,	// (0x0001bae0) mup_spec_bar_pane_g1

0xc0a0,	// (0x0001baea) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0001f035) mup_spec_bar_pane_g

0x01fd,	// (0x0000fc47) aid_cale_week_size_cell_pane_ParamLimits

0x0217,	// (0x0000fc61) bg_cale_heading_pane_ParamLimits

0x023b,	// (0x0000fc85) bg_cale_pane_cp01_ParamLimits

0x0258,	// (0x0000fca2) cale_week_corner_pane_ParamLimits

0x0277,	// (0x0000fcc1) cale_week_day_heading_pane_ParamLimits

0x02a0,	// (0x0000fcea) cale_week_scroll_pane_g1_ParamLimits

0x02bf,	// (0x0000fd09) cale_week_scroll_pane_g2_ParamLimits

0x02d7,	// (0x0000fd21) cale_week_scroll_pane_g3_ParamLimits

0x02ef,	// (0x0000fd39) cale_week_scroll_pane_g4_ParamLimits

0x0307,	// (0x0000fd51) cale_week_scroll_pane_g5_ParamLimits

0x0327,	// (0x0000fd71) cale_week_scroll_pane_g6_ParamLimits

0x0347,	// (0x0000fd91) cale_week_scroll_pane_g7_ParamLimits

0x036b,	// (0x0000fdb5) cale_week_scroll_pane_g8_ParamLimits

0x038f,	// (0x0000fdd9) cale_week_scroll_pane_g9_ParamLimits

0x03a7,	// (0x0000fdf1) cale_week_scroll_pane_g10_ParamLimits

0x03bf,	// (0x0000fe09) cale_week_scroll_pane_g11_ParamLimits

0x03d7,	// (0x0000fe21) cale_week_scroll_pane_g12_ParamLimits

0x03fb,	// (0x0000fe45) cale_week_scroll_pane_g13_ParamLimits

0x03fb,	// (0x0000fe45) cale_week_scroll_pane_g14_ParamLimits

0x03fb,	// (0x0000fe45) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0001ebdf) cale_week_scroll_pane_g_ParamLimits

0x0443,	// (0x0000fe8d) cale_week_time_pane_ParamLimits

0x0467,	// (0x0000feb1) grid_cale_week_pane_ParamLimits

0x9f8e,	// (0x000199d8) listscroll_cale_week_pane_t1

0x9fa0,	// (0x000199ea) scroll_pane_cp08_ParamLimits

0x11dc,	// (0x00010c26) cale_month_corner_pane_ParamLimits

0xa36d,	// (0x00019db7) cale_month_pane_t1

0x16e4,	// (0x0001112e) cale_month_week_pane_ParamLimits

0x1f5a,	// (0x000119a4) popup_call_status_window_g1_ParamLimits

0x1f6e,	// (0x000119b8) popup_call_status_window_g2_ParamLimits

0x1f82,	// (0x000119cc) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0001ed85) popup_call_status_window_g_ParamLimits

0xa74c,	// (0x0001a196) aid_call2_pane

0x2779,	// (0x000121c3) msg_header_pane_g1

0x2905,	// (0x0001234f) postcard_address2_pane_ParamLimits

0x2905,	// (0x0001234f) postcard_address2_pane

0x291b,	// (0x00012365) postcard_message2_pane_ParamLimits

0x291b,	// (0x00012365) postcard_message2_pane

0x3480,	// (0x00012eca) message2_row_pane_ParamLimits

0x3480,	// (0x00012eca) message2_row_pane

0xc051,	// (0x0001ba9b) address2_row_pane_ParamLimits

0xc051,	// (0x0001ba9b) address2_row_pane

0xc064,	// (0x0001baae) postcard_message2_row_pane_g1

0xc06c,	// (0x0001bab6) postcard_message2_row_pane_t1

0xc064,	// (0x0001baae) address2_row_pane_g1

0xc06c,	// (0x0001bab6) address2_row_pane_t1

0x07d4,	// (0x0001021e) aid_size_cell_vorec

0x9ab9,	// (0x00019503) main_rss_pane

0x34a3,	// (0x00012eed) rss_list_single_pane_ParamLimits

0x34a3,	// (0x00012eed) rss_list_single_pane

0xc07a,	// (0x0001bac4) rss_list_single_pane_t1

0xc088,	// (0x0001bad2) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0001f030) rss_list_single_pane_t

0x9ab9,	// (0x00019503) main_camera2_pane

0x9ab9,	// (0x00019503) main_video2_pane

0x36f2,	// (0x0001313c) cams_zoom_pane_cp2_ParamLimits

0x36f2,	// (0x0001313c) cams_zoom_pane_cp2

0x3709,	// (0x00013153) image2_vga_pane_ParamLimits

0x3709,	// (0x00013153) image2_vga_pane

0x3751,	// (0x0001319b) main_camera2_pane_g1_ParamLimits

0x3751,	// (0x0001319b) main_camera2_pane_g1

0x3771,	// (0x000131bb) main_camera2_pane_g2_ParamLimits

0x3771,	// (0x000131bb) main_camera2_pane_g2

0x3788,	// (0x000131d2) main_camera2_pane_g3_ParamLimits

0x3788,	// (0x000131d2) main_camera2_pane_g3

0x379f,	// (0x000131e9) main_camera2_pane_g4_ParamLimits

0x379f,	// (0x000131e9) main_camera2_pane_g4

0x37b6,	// (0x00013200) main_camera2_pane_g5_ParamLimits

0x37b6,	// (0x00013200) main_camera2_pane_g5

0x37cd,	// (0x00013217) main_camera2_pane_g6_ParamLimits

0x37cd,	// (0x00013217) main_camera2_pane_g6

0x37e4,	// (0x0001322e) main_camera2_pane_g7_ParamLimits

0x37e4,	// (0x0001322e) main_camera2_pane_g7

0x37fb,	// (0x00013245) main_camera2_pane_g8_ParamLimits

0x37fb,	// (0x00013245) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0001f051) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0001f051) main_camera2_pane_g

0x3829,	// (0x00013273) main_camera2_pane_t1_ParamLimits

0x3829,	// (0x00013273) main_camera2_pane_t1

0x385e,	// (0x000132a8) main_camera2_pane_t2_ParamLimits

0x385e,	// (0x000132a8) main_camera2_pane_t2

0x387b,	// (0x000132c5) main_camera2_pane_t3_ParamLimits

0x387b,	// (0x000132c5) main_camera2_pane_t3

0x38d9,	// (0x00013323) main_camera2_pane_t4_ParamLimits

0x38d9,	// (0x00013323) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0001f064) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0001f064) main_camera2_pane_t

0x3962,	// (0x000133ac) cams_zoom_pane_cp4_ParamLimits

0x3962,	// (0x000133ac) cams_zoom_pane_cp4

0x3978,	// (0x000133c2) image2_cif_pane_ParamLimits

0x3978,	// (0x000133c2) image2_cif_pane

0x39a3,	// (0x000133ed) image2_subqcif_pane_ParamLimits

0x39a3,	// (0x000133ed) image2_subqcif_pane

0x39be,	// (0x00013408) main_video2_pane_g1_ParamLimits

0x39be,	// (0x00013408) main_video2_pane_g1

0x39d8,	// (0x00013422) main_video2_pane_g2_ParamLimits

0x39d8,	// (0x00013422) main_video2_pane_g2

0x39ee,	// (0x00013438) main_video2_pane_g3_ParamLimits

0x39ee,	// (0x00013438) main_video2_pane_g3

0x3a04,	// (0x0001344e) main_video2_pane_g4_ParamLimits

0x3a04,	// (0x0001344e) main_video2_pane_g4

0x3a1a,	// (0x00013464) main_video2_pane_g5_ParamLimits

0x3a1a,	// (0x00013464) main_video2_pane_g5

0x3a30,	// (0x0001347a) main_video2_pane_g6_ParamLimits

0x3a30,	// (0x0001347a) main_video2_pane_g6

0x0005,

0xf629,	// (0x0001f073) main_video2_pane_g_ParamLimits

0xf629,	// (0x0001f073) main_video2_pane_g

0x3a4a,	// (0x00013494) main_video2_pane_t1_ParamLimits

0x3a4a,	// (0x00013494) main_video2_pane_t1

0x3a6e,	// (0x000134b8) main_video2_pane_t2_ParamLimits

0x3a6e,	// (0x000134b8) main_video2_pane_t2

0x3abe,	// (0x00013508) main_video2_pane_t3_ParamLimits

0x3abe,	// (0x00013508) main_video2_pane_t3

0x0002,

0xf636,	// (0x0001f080) main_video2_pane_t_ParamLimits

0xf636,	// (0x0001f080) main_video2_pane_t

0x2f84,	// (0x000129ce) call_muted_g2

0x0001,

0xf5d8,	// (0x0001f022) call_muted_g

0x9ab9,	// (0x00019503) main_mup2_pane

0x3b06,	// (0x00013550) main_mup2_pane_g1_ParamLimits

0x3b06,	// (0x00013550) main_mup2_pane_g1

0x3b12,	// (0x0001355c) main_mup2_pane_g2_ParamLimits

0x3b12,	// (0x0001355c) main_mup2_pane_g2

0xc22c,	// (0x0001bc76) main_mup_pane_g13_cp1

0xc234,	// (0x0001bc7e) mup_volume_pane_cp1

0x3b30,	// (0x0001357a) main_mup2_pane_g4_ParamLimits

0x3b30,	// (0x0001357a) main_mup2_pane_g4

0x3b42,	// (0x0001358c) main_mup2_pane_g5_ParamLimits

0x3b42,	// (0x0001358c) main_mup2_pane_g5

0x3b54,	// (0x0001359e) main_mup2_pane_g6_ParamLimits

0x3b54,	// (0x0001359e) main_mup2_pane_g6

0x3b66,	// (0x000135b0) main_mup2_pane_g7_ParamLimits

0x3b66,	// (0x000135b0) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0001f087) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0001f087) main_mup2_pane_g

0x3b7e,	// (0x000135c8) main_mup2_pane_t1_ParamLimits

0x3b7e,	// (0x000135c8) main_mup2_pane_t1

0x3b94,	// (0x000135de) main_mup2_pane_t2_ParamLimits

0x3b94,	// (0x000135de) main_mup2_pane_t2

0x3baa,	// (0x000135f4) main_mup2_pane_t3_ParamLimits

0x3baa,	// (0x000135f4) main_mup2_pane_t3

0x3bc0,	// (0x0001360a) main_mup2_pane_t4_ParamLimits

0x3bc0,	// (0x0001360a) main_mup2_pane_t4

0x3bd8,	// (0x00013622) main_mup2_pane_t5_ParamLimits

0x3bd8,	// (0x00013622) main_mup2_pane_t5

0x3bf0,	// (0x0001363a) main_mup2_pane_t6_ParamLimits

0x3bf0,	// (0x0001363a) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0001f096) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0001f096) main_mup2_pane_t

0x3c20,	// (0x0001366a) mup2_visualizer_pane_ParamLimits

0x3c20,	// (0x0001366a) mup2_visualizer_pane

0x3c4e,	// (0x00013698) mup_progress_pane_cp_ParamLimits

0x3c4e,	// (0x00013698) mup_progress_pane_cp

0xc20e,	// (0x0001bc58) mup_volume_pane_cp_ParamLimits

0xc20e,	// (0x0001bc58) mup_volume_pane_cp

0x3c64,	// (0x000136ae) mup2_visualizer_pane_g1_ParamLimits

0x3c64,	// (0x000136ae) mup2_visualizer_pane_g1

0xc14d,	// (0x0001bb97) mup2_visualizer_pane_g2_ParamLimits

0xc14d,	// (0x0001bb97) mup2_visualizer_pane_g2

0x3c79,	// (0x000136c3) mup2_visualizer_pane_g3_ParamLimits

0x3c79,	// (0x000136c3) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0001f0a3) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0001f0a3) mup2_visualizer_pane_g

0xaea7,	// (0x0001a8f1) aid_size_cell_fmradio

0x3134,	// (0x00012b7e) aid_height_parent_landcape

0xa1cb,	// (0x00019c15) wml_content_pane_cp

0xa1d3,	// (0x00019c1d) wml_tabs_pane

0xa1dc,	// (0x00019c26) popup_wml_miniature_window

0xa1e4,	// (0x00019c2e) scroll_pane_cp021

0xa1f8,	// (0x00019c42) wml_content_pane_comp8

0x9ab9,	// (0x00019503) bg_popup_sub_pane_cp05

0xc16b,	// (0x0001bbb5) popup_wml_miniature_window_g1

0xc173,	// (0x0001bbbd) wml_miniature_view_pane

0x3c85,	// (0x000136cf) aid_size_wml_view

0x3c8d,	// (0x000136d7) wml_miniature_view_pane_g1

0x3c96,	// (0x000136e0) wml_miniature_view_pane_g2

0x3c9f,	// (0x000136e9) wml_miniature_view_pane_g3

0x3ca7,	// (0x000136f1) wml_miniature_view_pane_g4

0x3caf,	// (0x000136f9) wml_miniature_view_pane_g5

0x3cb7,	// (0x00013701) wml_miniature_view_pane_g6

0x3cbf,	// (0x00013709) wml_miniature_view_pane_g7

0x3cc7,	// (0x00013711) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0001f0aa) wml_miniature_view_pane_g

0xc17b,	// (0x0001bbc5) background_graphic_ParamLimits

0xc17b,	// (0x0001bbc5) background_graphic

0xc187,	// (0x0001bbd1) wml_tabs_2_pane

0xc190,	// (0x0001bbda) wml_tabs_3_pane_ParamLimits

0xc190,	// (0x0001bbda) wml_tabs_3_pane

0xc1a2,	// (0x0001bbec) wml_tabs_4_pane_ParamLimits

0xc1a2,	// (0x0001bbec) wml_tabs_4_pane

0xc1b8,	// (0x0001bc02) wml_tabs_5_pane_ParamLimits

0xc1b8,	// (0x0001bc02) wml_tabs_5_pane

0xc1d2,	// (0x0001bc1c) wml_tabs_pane_g2_ParamLimits

0xc1d2,	// (0x0001bc1c) wml_tabs_pane_g2

0xc1e6,	// (0x0001bc30) wml_tabs_pane_g3_ParamLimits

0xc1e6,	// (0x0001bc30) wml_tabs_pane_g3

0x3ccf,	// (0x00013719) wml_tabs_2_active_pane_ParamLimits

0x3ccf,	// (0x00013719) wml_tabs_2_active_pane

0x3ce3,	// (0x0001372d) wml_tabs_2_passive_pane_ParamLimits

0x3ce3,	// (0x0001372d) wml_tabs_2_passive_pane

0x3cf7,	// (0x00013741) wml_tabs_3_active_pane_cp_ParamLimits

0x3cf7,	// (0x00013741) wml_tabs_3_active_pane_cp

0x3d0c,	// (0x00013756) wml_tabs_3_passive_pane_ParamLimits

0x3d0c,	// (0x00013756) wml_tabs_3_passive_pane

0x3d1f,	// (0x00013769) wml_tabs_3_passive_pane_cp_ParamLimits

0x3d1f,	// (0x00013769) wml_tabs_3_passive_pane_cp

0x3d36,	// (0x00013780) tabs_4_active_pane

0x3d3e,	// (0x00013788) tabs_4_passive_pane

0x3d48,	// (0x00013792) tabs_4_passive_pane_cp

0x3d50,	// (0x0001379a) tabs_4_passive_pane_cp2

0x2e48,	// (0x00012892) aid_height_text

0x2481,	// (0x00011ecb) mup_volume_cont_pane_ParamLimits

0x2481,	// (0x00011ecb) mup_volume_cont_pane

0xfdd3,	// (0x0000f81d) aid_size_cell_pinb

0xfddd,	// (0x0000f827) aid_size_list_pinb

0x3c3a,	// (0x00013684) mup2_volume_cont_pane_ParamLimits

0x3c3a,	// (0x00013684) mup2_volume_cont_pane

0xc1fa,	// (0x0001bc44) mup2_volume_cont_pane_g1_ParamLimits

0xc1fa,	// (0x0001bc44) mup2_volume_cont_pane_g1

0xfac9,	// (0x0000f513) aid_size_cell_touch_ParamLimits

0xfac9,	// (0x0000f513) aid_size_cell_touch

0xfcf7,	// (0x0000f741) touch_pane_ParamLimits

0xfcf7,	// (0x0000f741) touch_pane

0x95ee,	// (0x00019038) main_rss2_pane

0xc23c,	// (0x0001bc86) listscroll_rss2_pane

0xc245,	// (0x0001bc8f) rss2_navigation_pane

0xc24d,	// (0x0001bc97) list_rss2_pane

0xa8df,	// (0x0001a329) scroll_pane_cp22

0xc255,	// (0x0001bc9f) rss2_navigation_pane_g1

0xc25e,	// (0x0001bca8) rss2_navigation_pane_g2

0xc266,	// (0x0001bcb0) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0001f0bb) rss2_navigation_pane_g

0xc26e,	// (0x0001bcb8) rss2_navigation_pane_t1

0x3d5a,	// (0x000137a4) rss2_list_single_pane_ParamLimits

0x3d5a,	// (0x000137a4) rss2_list_single_pane

0xc27c,	// (0x0001bcc6) rss2_list_single_pane_t2

0xc28a,	// (0x0001bcd4) rss2_list_single_pane_t3_ParamLimits

0xc28a,	// (0x0001bcd4) rss2_list_single_pane_t3

0xc2a7,	// (0x0001bcf1) rss2_list_single_pane_t4

0x1d5a,	// (0x000117a4) smil_status_pane_g1

0x9663,	// (0x000190ad) main_image2_pane_ParamLimits

0x9663,	// (0x000190ad) main_image2_pane

0x3812,	// (0x0001325c) main_camera2_pane_g9_ParamLimits

0x3812,	// (0x0001325c) main_camera2_pane_g9

0x392e,	// (0x00013378) main_camera2_pane_t5_ParamLimits

0x392e,	// (0x00013378) main_camera2_pane_t5

0xc122,	// (0x0001bb6c) main_camera2_pane_t6_ParamLimits

0xc122,	// (0x0001bb6c) main_camera2_pane_t6

0x3d74,	// (0x000137be) main_image2_pane_g1_ParamLimits

0x3d74,	// (0x000137be) main_image2_pane_g1

0x2b5f,	// (0x000125a9) smil2_video_pane_ParamLimits

0x2b5f,	// (0x000125a9) smil2_video_pane

0x960c,	// (0x00019056) aid_zoom_text_primary_cp

0x9659,	// (0x000190a3) popup_preview_fixed_window

0xa134,	// (0x00019b7e) im_reading_pane_g1

0x36e4,	// (0x0001312e) cams2_bc_adjust_pane_cp_ParamLimits

0x36e4,	// (0x0001312e) cams2_bc_adjust_pane_cp

0x3954,	// (0x0001339e) cams2_bc_adjust_pane_ParamLimits

0x3954,	// (0x0001339e) cams2_bc_adjust_pane

0xc2b5,	// (0x0001bcff) cams2_bc_adjust_pane_g1

0xc2bd,	// (0x0001bd07) cams2_slider_pane

0xc2c6,	// (0x0001bd10) cams2_slider_pane_g1

0xc2cf,	// (0x0001bd19) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0001f0c2) cams2_slider_pane_g

0xfecf,	// (0x0000f919) calc_display_pane_ParamLimits

0xfef4,	// (0x0000f93e) calc_paper_pane_ParamLimits

0xff17,	// (0x0000f961) grid_calc_pane_ParamLimits

0xa7ae,	// (0x0001a1f8) popup_clock_digital_window_t1_ParamLimits

0xae44,	// (0x0001a88e) main_image_pane_t1

0xfeaf,	// (0x0000f8f9) aid_size_cell_calc_ParamLimits

0xfeaf,	// (0x0000f8f9) aid_size_cell_calc

0x317a,	// (0x00012bc4) popup_blid_sat_info2_window_ParamLimits

0x317a,	// (0x00012bc4) popup_blid_sat_info2_window

0xc2f1,	// (0x0001bd3b) aid_size_cell_blid

0xc2f9,	// (0x0001bd43) bg_popup_window_pane_cp07

0xc31c,	// (0x0001bd66) grid_popup_blid_pane

0xc326,	// (0x0001bd70) heading_pane_cp05_ParamLimits

0xc326,	// (0x0001bd70) heading_pane_cp05

0xc3f0,	// (0x0001be3a) cell_popup_blid_pane_ParamLimits

0xc3f0,	// (0x0001be3a) cell_popup_blid_pane

0xc41a,	// (0x0001be64) cell_popup_blid_pane_g1

0xc422,	// (0x0001be6c) cell_popup_blid_pane_t1

0x3c0a,	// (0x00013654) mup2_indicator_pane_ParamLimits

0x3c0a,	// (0x00013654) mup2_indicator_pane

0xa018,	// (0x00019a62) mup2_visualizer_osc_pane

0xc159,	// (0x0001bba3) mup2_visualizer_spec_pane_ParamLimits

0xc159,	// (0x0001bba3) mup2_visualizer_spec_pane

0x3d8a,	// (0x000137d4) mup2_spec_half_pane

0x3d93,	// (0x000137dd) mup2_spec_half_pane_cp

0x3d9b,	// (0x000137e5) mup2_spec_bar_pane_ParamLimits

0x3d9b,	// (0x000137e5) mup2_spec_bar_pane

0xc096,	// (0x0001bae0) mup2_spec_bar_pane_g1

0xc0a0,	// (0x0001baea) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0001f035) mup2_spec_bar_pane_g

0x3dbb,	// (0x00013805) mup2_osc_middle_pane

0xc0b2,	// (0x0001bafc) mup2_visualizer_osc_pane_g1

0x9691,	// (0x000190db) popup_number_entry_window_t1_ParamLimits

0x96a4,	// (0x000190ee) popup_number_entry_window_t2_ParamLimits

0x96b6,	// (0x00019100) popup_number_entry_window_t3_ParamLimits

0x96c8,	// (0x00019112) popup_number_entry_window_t5_ParamLimits

0x96c8,	// (0x00019112) popup_number_entry_window_t5

0xf0af,	// (0x0001eaf9) popup_number_entry_window_t_ParamLimits

0x96fd,	// (0x00019147) text_title_cp2_ParamLimits

0xad1e,	// (0x0001a768) aid_hotspot_pointer_text2_pane

0xad44,	// (0x0001a78e) main_viewer_pane_g9_ParamLimits

0xad44,	// (0x0001a78e) main_viewer_pane_g9

0xa36d,	// (0x00019db7) cale_month_pane_t1_ParamLimits

0xa3d8,	// (0x00019e22) bg_cale_pane_ParamLimits

0xa3f0,	// (0x00019e3a) list_cale_pane_ParamLimits

0xa401,	// (0x00019e4b) listscroll_cale_day_pane_t1

0xa413,	// (0x00019e5d) scroll_pane_cp09_ParamLimits

0x24b7,	// (0x00011f01) main_mup_eq_pane_t1_ParamLimits

0x24b7,	// (0x00011f01) main_mup_eq_pane_t1

0x24d3,	// (0x00011f1d) main_mup_eq_pane_t2_ParamLimits

0x24d3,	// (0x00011f1d) main_mup_eq_pane_t2

0x24ef,	// (0x00011f39) main_mup_eq_pane_t3_ParamLimits

0x24ef,	// (0x00011f39) main_mup_eq_pane_t3

0x250d,	// (0x00011f57) main_mup_eq_pane_t4_ParamLimits

0x250d,	// (0x00011f57) main_mup_eq_pane_t4

0x252b,	// (0x00011f75) main_mup_eq_pane_t5_ParamLimits

0x252b,	// (0x00011f75) main_mup_eq_pane_t5

0x2549,	// (0x00011f93) main_mup_eq_pane_t6_ParamLimits

0x2549,	// (0x00011f93) main_mup_eq_pane_t6

0x255f,	// (0x00011fa9) main_mup_eq_pane_t7_ParamLimits

0x255f,	// (0x00011fa9) main_mup_eq_pane_t7

0x2575,	// (0x00011fbf) main_mup_eq_pane_t8_ParamLimits

0x2575,	// (0x00011fbf) main_mup_eq_pane_t8

0x258b,	// (0x00011fd5) main_mup_eq_pane_t9_ParamLimits

0x258b,	// (0x00011fd5) main_mup_eq_pane_t9

0x25a7,	// (0x00011ff1) main_mup_eq_pane_t10_ParamLimits

0x25a7,	// (0x00011ff1) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0001ee84) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0001ee84) main_mup_eq_pane_t

0x267c,	// (0x000120c6) mup_equalizer_pane_cp5_ParamLimits

0x2694,	// (0x000120de) mup_equalizer_pane_cp6_ParamLimits

0x26ac,	// (0x000120f6) mup_equalizer_pane_cp7_ParamLimits

0x95ee,	// (0x00019038) main_gallery_pane

0xc0bb,	// (0x0001bb05) smil2_volume_pane

0xc0c3,	// (0x0001bb0d) smil_status_volume_pane_g1_ParamLimits

0xc0d6,	// (0x0001bb20) smil_status_volume_pane_g2_ParamLimits

0xc0e9,	// (0x0001bb33) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0001f03a) smil_status_volume_pane_g_ParamLimits

0xc2f9,	// (0x0001bd43) bg_popup_window_pane_cp07_ParamLimits

0xc307,	// (0x0001bd51) blid_firmament_pane

0x3dc4,	// (0x0001380e) aid_size_cell_gallery_ParamLimits

0x3dc4,	// (0x0001380e) aid_size_cell_gallery

0x3dda,	// (0x00013824) grid_gallery_pane_ParamLimits

0x3dda,	// (0x00013824) grid_gallery_pane

0x3df5,	// (0x0001383f) cell_gallery_pane_ParamLimits

0x3df5,	// (0x0001383f) cell_gallery_pane

0xc430,	// (0x0001be7a) bg_cell_gallery_focus_pane_ParamLimits

0xc430,	// (0x0001be7a) bg_cell_gallery_focus_pane

0xc442,	// (0x0001be8c) cell_gallery_pane_g1_ParamLimits

0xc442,	// (0x0001be8c) cell_gallery_pane_g1

0x3e46,	// (0x00013890) cell_gallery_pane_g2_ParamLimits

0x3e46,	// (0x00013890) cell_gallery_pane_g2

0x3e53,	// (0x0001389d) cell_gallery_pane_g3_ParamLimits

0x3e53,	// (0x0001389d) cell_gallery_pane_g3

0xc44e,	// (0x0001be98) cell_gallery_pane_g4_ParamLimits

0xc44e,	// (0x0001be98) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0001f0e8) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0001f0e8) cell_gallery_pane_g

0xc45a,	// (0x0001bea4) bg_cell_gallery_focus_pane_g1

0xc462,	// (0x0001beac) bg_cell_gallery_focus_pane_g2

0xc46a,	// (0x0001beb4) bg_cell_gallery_focus_pane_g3

0xc472,	// (0x0001bebc) bg_cell_gallery_focus_pane_g4

0xc47a,	// (0x0001bec4) bg_cell_gallery_focus_pane_g5

0xc482,	// (0x0001becc) bg_cell_gallery_focus_pane_g6

0xc48a,	// (0x0001bed4) bg_cell_gallery_focus_pane_g7

0xc492,	// (0x0001bedc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0001f0f1) bg_cell_gallery_focus_pane_g

0xc49a,	// (0x0001bee4) aid_firma_cardinal

0xc4ae,	// (0x0001bef8) blid_firmament_pane_t1

0xc4c5,	// (0x0001bf0f) blid_firmament_pane_t2

0xc4dc,	// (0x0001bf26) blid_firmament_pane_t3

0xc4f3,	// (0x0001bf3d) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0001f102) blid_firmament_pane_t

0xc50a,	// (0x0001bf54) blid_sat_info_pane

0xc51a,	// (0x0001bf64) blid_sat_info_pane_g1

0xc51a,	// (0x0001bf64) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0001f10b) blid_sat_info_pane_g

0xc524,	// (0x0001bf6e) blid_sat_info_pane_t1

0xc532,	// (0x0001bf7c) smil2_volume_content_pane

0xc53b,	// (0x0001bf85) smil2_volume_pane_g1

0x9ea0,	// (0x000198ea) smil2_volume_content_pane_g1

0xc543,	// (0x0001bf8d) smil2_volume_content_pane_g2

0xc54c,	// (0x0001bf96) smil2_volume_content_pane_g3

0xc555,	// (0x0001bf9f) smil2_volume_content_pane_g4

0xc55e,	// (0x0001bfa8) smil2_volume_content_pane_g5

0xc567,	// (0x0001bfb1) smil2_volume_content_pane_g6

0xc570,	// (0x0001bfba) smil2_volume_content_pane_g7

0xc579,	// (0x0001bfc3) smil2_volume_content_pane_g8

0xc582,	// (0x0001bfcc) smil2_volume_content_pane_g9

0xc58b,	// (0x0001bfd5) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0001f110) smil2_volume_content_pane_g

0x0535,	// (0x0000ff7f) cale_week_day_heading_pane_t1_ParamLimits

0x055f,	// (0x0000ffa9) cale_week_day_heading_pane_t2_ParamLimits

0x058e,	// (0x0000ffd8) cale_week_day_heading_pane_t3_ParamLimits

0x05bd,	// (0x00010007) cale_week_day_heading_pane_t4_ParamLimits

0x05ec,	// (0x00010036) cale_week_day_heading_pane_t5_ParamLimits

0x061f,	// (0x00010069) cale_week_day_heading_pane_t6_ParamLimits

0x0656,	// (0x000100a0) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0001ec00) cale_week_day_heading_pane_t_ParamLimits

0x9fbd,	// (0x00019a07) bg_cale_side_pane_ParamLimits

0x0680,	// (0x000100ca) cale_week_time_pane_t1_ParamLimits

0x069a,	// (0x000100e4) cale_week_time_pane_t2_ParamLimits

0x06b4,	// (0x000100fe) cale_week_time_pane_t3_ParamLimits

0x06ce,	// (0x00010118) cale_week_time_pane_t4_ParamLimits

0x06e8,	// (0x00010132) cale_week_time_pane_t5_ParamLimits

0x0702,	// (0x0001014c) cale_week_time_pane_t6_ParamLimits

0x0722,	// (0x0001016c) cale_week_time_pane_t7_ParamLimits

0x0748,	// (0x00010192) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0001ec0f) cale_week_time_pane_t_ParamLimits

0x076e,	// (0x000101b8) cell_cale_week_pane_g2_ParamLimits

0x9fbd,	// (0x00019a07) bg_cale_side_pane_cp01_ParamLimits

0x1b0d,	// (0x00011557) cale_month_week_pane_t1_ParamLimits

0x1b26,	// (0x00011570) cale_month_week_pane_t2_ParamLimits

0x1b3f,	// (0x00011589) cale_month_week_pane_t3_ParamLimits

0x1b58,	// (0x000115a2) cale_month_week_pane_t4_ParamLimits

0x1b71,	// (0x000115bb) cale_month_week_pane_t5_ParamLimits

0x1b8a,	// (0x000115d4) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0001ece4) cale_month_week_pane_t_ParamLimits

0xa37f,	// (0x00019dc9) cell_cale_month_pane_g1_ParamLimits

0x95ee,	// (0x00019038) main_cale_event_viewer_pane

0x95ee,	// (0x00019038) listscroll_cale_event_viewer_pane

0xc594,	// (0x0001bfde) list_cale_ev_pane

0xc59c,	// (0x0001bfe6) scroll_pane_cp023

0x3e60,	// (0x000138aa) field_cale_ev_pane_ParamLimits

0x3e60,	// (0x000138aa) field_cale_ev_pane

0xc5a8,	// (0x0001bff2) field_cale_ev_content_pane_ParamLimits

0xc5a8,	// (0x0001bff2) field_cale_ev_content_pane

0xc5b4,	// (0x0001bffe) field_cale_ev_pane_g1_ParamLimits

0xc5b4,	// (0x0001bffe) field_cale_ev_pane_g1

0xc5c0,	// (0x0001c00a) field_cale_ev_pane_g2_ParamLimits

0xc5c0,	// (0x0001c00a) field_cale_ev_pane_g2

0xc5d8,	// (0x0001c022) field_cale_ev_pane_g3_ParamLimits

0xc5d8,	// (0x0001c022) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0001f125) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0001f125) field_cale_ev_pane_g

0xc5f0,	// (0x0001c03a) field_cale_ev_pane_t1_ParamLimits

0xc5f0,	// (0x0001c03a) field_cale_ev_pane_t1

0x3e84,	// (0x000138ce) field_cale_ev_content_pane_t1_ParamLimits

0x3e84,	// (0x000138ce) field_cale_ev_content_pane_t1

0xaca0,	// (0x0001a6ea) bg_button_pane_cp01

0x01ed,	// (0x0000fc37) listscroll_cale_week_pane_ParamLimits

0x9f85,	// (0x000199cf) popup_toolbar_window_cp01

0x9f8e,	// (0x000199d8) listscroll_cale_week_pane_t1_ParamLimits

0x01ed,	// (0x0000fc37) listscroll_cale_day_pane_ParamLimits

0x9f85,	// (0x000199cf) popup_toolbar_window_cp02

0xa401,	// (0x00019e4b) listscroll_cale_day_pane_t1_ParamLimits

0x01ed,	// (0x0000fc37) main_cale_month_pane_ParamLimits

0xc021,	// (0x0001ba6b) popup_toolbar_window_cp03_ParamLimits

0xc021,	// (0x0001ba6b) popup_toolbar_window_cp03

0x2a1d,	// (0x00012467) main_image_pane_g2_ParamLimits

0x2a1d,	// (0x00012467) main_image_pane_g2

0x2a2e,	// (0x00012478) main_image_pane_g3_ParamLimits

0x2a2e,	// (0x00012478) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0001ef16) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0001ef16) main_image_pane_g

0xae44,	// (0x0001a88e) main_image_pane_t1_ParamLimits

0x2a3f,	// (0x00012489) main_image_pane_t2_ParamLimits

0x2a3f,	// (0x00012489) main_image_pane_t2

0x2a51,	// (0x0001249b) main_image_pane_t3_ParamLimits

0x2a51,	// (0x0001249b) main_image_pane_t3

0x2a79,	// (0x000124c3) main_image_pane_t4_ParamLimits

0x2a79,	// (0x000124c3) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0001ef1d) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0001ef1d) main_image_pane_t

0x2a99,	// (0x000124e3) popup_image_details_window_cp01

0x2aa3,	// (0x000124ed) popup_toobar_trans_pane_cp01_ParamLimits

0x2aa3,	// (0x000124ed) popup_toobar_trans_pane_cp01

0x326d,	// (0x00012cb7) popup_image_details_window_ParamLimits

0x326d,	// (0x00012cb7) popup_image_details_window

0xbff2,	// (0x0001ba3c) popup_image_focus_window

0x369e,	// (0x000130e8) camera2_autofocus_pane_ParamLimits

0x369e,	// (0x000130e8) camera2_autofocus_pane

0x95ee,	// (0x00019038) bg_popup_sub_pane_cp06

0xc607,	// (0x0001c051) popup_image_focus_window_g1

0xc60f,	// (0x0001c059) popup_image_focus_window_g2

0xc617,	// (0x0001c061) popup_image_focus_window_g3

0xc61f,	// (0x0001c069) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0001f12c) popup_image_focus_window_g

0xc627,	// (0x0001c071) popup_image_focus_window_t1

0xc635,	// (0x0001c07f) popup_image_focus_window_t2

0xc645,	// (0x0001c08f) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0001f135) popup_image_focus_window_t

0xc653,	// (0x0001c09d) camera2_autofocus_pane_g1

0x9663,	// (0x000190ad) bg_tb_trans_pane_cp01

0xc661,	// (0x0001c0ab) popup_image_details_window_g1

0xc674,	// (0x0001c0be) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0001f147) popup_image_details_window_g

0xc69d,	// (0x0001c0e7) popup_image_details_window_t1

0xc6af,	// (0x0001c0f9) popup_image_details_window_t2

0xc6c8,	// (0x0001c112) popup_image_details_window_t3

0xc6dc,	// (0x0001c126) popup_image_details_window_t4

0xc6f7,	// (0x0001c141) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0001f14e) popup_image_details_window_t

0x9dcd,	// (0x00019817) bg_calc_paper_pane_ParamLimits

0x95ee,	// (0x00019038) grid_highlight_pane_cp013

0x9de1,	// (0x0001982b) list_calc_pane_ParamLimits

0x9df3,	// (0x0001983d) scroll_pane_cp024

0x9dfb,	// (0x00019845) bg_calc_display_pane_ParamLimits

0x0017,	// (0x0000fa61) calc_display_pane_t1_ParamLimits

0x0029,	// (0x0000fa73) calc_display_pane_t2_ParamLimits

0x9e07,	// (0x00019851) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0001eb80) calc_display_pane_t_ParamLimits

0x00ea,	// (0x0000fb34) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0001eb9d) cell_calc_pane_g

0x00f3,	// (0x0000fb3d) cell_calc_pane_t1

0x9e7e,	// (0x000198c8) grid_highlight_pane_cp02_ParamLimits

0x9e94,	// (0x000198de) toolbar_button_pane_cp01_ParamLimits

0x9e94,	// (0x000198de) toolbar_button_pane_cp01

0xae89,	// (0x0001a8d3) temp_image_control_pane_ParamLimits

0xae89,	// (0x0001a8d3) temp_image_control_pane

0x9663,	// (0x000190ad) main_mp3_pane

0xc711,	// (0x0001c15b) temp_image_control_pane_g1_ParamLimits

0xc711,	// (0x0001c15b) temp_image_control_pane_g1

0xc71f,	// (0x0001c169) temp_image_control_pane_g2_ParamLimits

0xc71f,	// (0x0001c169) temp_image_control_pane_g2

0xc731,	// (0x0001c17b) temp_image_control_pane_g3_ParamLimits

0xc731,	// (0x0001c17b) temp_image_control_pane_g3

0x3ed5,	// (0x0001391f) temp_image_control_pane_g4_ParamLimits

0x3ed5,	// (0x0001391f) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0001f159) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0001f159) temp_image_control_pane_g

0xc711,	// (0x0001c15b) main_mp3_pane_g1

0x3ee8,	// (0x00013932) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0001f162) main_mp3_pane_g

0xc774,	// (0x0001c1be) main_mp3_pane_t1

0xa03f,	// (0x00019a89) main_camera_pane_g8_ParamLimits

0xa03f,	// (0x00019a89) main_camera_pane_g8

0x0a80,	// (0x000104ca) main_video_pane_g7_ParamLimits

0x0a80,	// (0x000104ca) main_video_pane_g7

0xc13b,	// (0x0001bb85) main_camera2_pane_t7_ParamLimits

0xc13b,	// (0x0001bb85) main_camera2_pane_t7

0xa18b,	// (0x00019bd5) scroll_pane_cp025_ParamLimits

0xa18b,	// (0x00019bd5) scroll_pane_cp025

0xa19f,	// (0x00019be9) scroll_pane_cp026_ParamLimits

0xa19f,	// (0x00019be9) scroll_pane_cp026

0xa1ae,	// (0x00019bf8) wml_content_pane_ParamLimits

0x95ee,	// (0x00019038) main_touch_calib_pane

0x3fba,	// (0x00013a04) main_touch_calib_pane_g1

0x3fcc,	// (0x00013a16) main_touch_calib_pane_g2

0x3fde,	// (0x00013a28) main_touch_calib_pane_g3

0x3ff0,	// (0x00013a3a) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0001f180) main_touch_calib_pane_g

0x4002,	// (0x00013a4c) main_touch_calib_pane_t1

0x401c,	// (0x00013a66) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0001f189) main_touch_calib_pane_t

0xa9ae,	// (0x0001a3f8) mup_progress_pane_cp02

0xa9e3,	// (0x0001a42d) navi_pane_g1

0xaa9e,	// (0x0001a4e8) navi_pane_mp_t3

0x9663,	// (0x000190ad) main_mp3_pane_ParamLimits

0x3426,	// (0x00012e70) navi_pane_ParamLimits

0xc711,	// (0x0001c15b) main_mp3_pane_g1_ParamLimits

0x3ee8,	// (0x00013932) main_mp3_pane_g2_ParamLimits

0x3ef4,	// (0x0001393e) main_mp3_pane_g3_ParamLimits

0x3ef4,	// (0x0001393e) main_mp3_pane_g3

0x3f02,	// (0x0001394c) main_mp3_pane_g4_ParamLimits

0x3f02,	// (0x0001394c) main_mp3_pane_g4

0xc741,	// (0x0001c18b) main_mp3_pane_g5_ParamLimits

0xc741,	// (0x0001c18b) main_mp3_pane_g5

0xc74f,	// (0x0001c199) main_mp3_pane_g6_ParamLimits

0xc74f,	// (0x0001c199) main_mp3_pane_g6

0xc75c,	// (0x0001c1a6) main_mp3_pane_g7_ParamLimits

0xc75c,	// (0x0001c1a6) main_mp3_pane_g7

0xc768,	// (0x0001c1b2) main_mp3_pane_g8_ParamLimits

0xc768,	// (0x0001c1b2) main_mp3_pane_g8

0xf718,	// (0x0001f162) main_mp3_pane_g_ParamLimits

0x3f0e,	// (0x00013958) main_mp3_pane_t2

0x3f1c,	// (0x00013966) main_mp3_pane_t3

0xc782,	// (0x0001c1cc) main_mp3_pane_t4

0xc790,	// (0x0001c1da) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0001f173) main_mp3_pane_t

0xc79e,	// (0x0001c1e8) mup_progress_pane_cp01

0x960c,	// (0x00019056) aid_zoom_text_secondary2

0xc594,	// (0x0001bfde) list_cale_ev2_pane

0xc59c,	// (0x0001bfe6) scroll_pane_cp023_ParamLimits

0x4076,	// (0x00013ac0) field_cale_ev2_pane_ParamLimits

0x4076,	// (0x00013ac0) field_cale_ev2_pane

0x409a,	// (0x00013ae4) field_cale_ev2_pane_g1_ParamLimits

0x409a,	// (0x00013ae4) field_cale_ev2_pane_g1

0x40a6,	// (0x00013af0) field_cale_ev2_pane_g2_ParamLimits

0x40a6,	// (0x00013af0) field_cale_ev2_pane_g2

0x40be,	// (0x00013b08) field_cale_ev2_pane_g3_ParamLimits

0x40be,	// (0x00013b08) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0001f194) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0001f194) field_cale_ev2_pane_g

0x40d6,	// (0x00013b20) field_cale_ev2_pane_t1_ParamLimits

0x40d6,	// (0x00013b20) field_cale_ev2_pane_t1

0x40ed,	// (0x00013b37) field_cale_ev2_pane_t2_ParamLimits

0x40ed,	// (0x00013b37) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0001f19d) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0001f19d) field_cale_ev2_pane_t

0x28b5,	// (0x000122ff) main_postcard_pane_g5_ParamLimits

0x28b5,	// (0x000122ff) main_postcard_pane_g5

0x28cb,	// (0x00012315) main_postcard_pane_g6_ParamLimits

0x28cb,	// (0x00012315) main_postcard_pane_g6

0x082c,	// (0x00010276) camera2_autofocus_pane_cp_ParamLimits

0x082c,	// (0x00010276) camera2_autofocus_pane_cp

0x9663,	// (0x000190ad) main_mup3_pane

0x414c,	// (0x00013b96) main_mup3_pane_g1_ParamLimits

0x414c,	// (0x00013b96) main_mup3_pane_g1

0x416e,	// (0x00013bb8) main_mup3_pane_g2_ParamLimits

0x416e,	// (0x00013bb8) main_mup3_pane_g2

0x41e9,	// (0x00013c33) main_mup3_pane_g3_ParamLimits

0x41e9,	// (0x00013c33) main_mup3_pane_g3

0x4253,	// (0x00013c9d) main_mup3_pane_g4_ParamLimits

0x4253,	// (0x00013c9d) main_mup3_pane_g4

0x42bd,	// (0x00013d07) main_mup3_pane_g5_ParamLimits

0x42bd,	// (0x00013d07) main_mup3_pane_g5

0x4327,	// (0x00013d71) main_mup3_pane_g6_ParamLimits

0x4327,	// (0x00013d71) main_mup3_pane_g6

0xc7b2,	// (0x0001c1fc) main_mup3_pane_g7_ParamLimits

0xc7b2,	// (0x0001c1fc) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0001f1ad) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0001f1ad) main_mup3_pane_g

0x43a7,	// (0x00013df1) main_mup3_pane_t1_ParamLimits

0x43a7,	// (0x00013df1) main_mup3_pane_t1

0x4419,	// (0x00013e63) main_mup3_pane_t2_ParamLimits

0x4419,	// (0x00013e63) main_mup3_pane_t2

0x44eb,	// (0x00013f35) main_mup3_pane_t4_ParamLimits

0x44eb,	// (0x00013f35) main_mup3_pane_t4

0x4549,	// (0x00013f93) main_mup3_pane_t5_ParamLimits

0x4549,	// (0x00013f93) main_mup3_pane_t5

0x4605,	// (0x0001404f) main_mup3_pane_t6_ParamLimits

0x4605,	// (0x0001404f) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0001f1be) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0001f1be) main_mup3_pane_t

0x46bd,	// (0x00014107) mup3_progress_pane_ParamLimits

0x46bd,	// (0x00014107) mup3_progress_pane

0x4755,	// (0x0001419f) popup_mup3_control_window_ParamLimits

0x4755,	// (0x0001419f) popup_mup3_control_window

0xc7c0,	// (0x0001c20a) popup_mup3_text_window

0x478b,	// (0x000141d5) mup3_progress_pane_t1

0x47aa,	// (0x000141f4) mup3_progress_pane_t2

0xc7c8,	// (0x0001c212) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0001f1cb) mup3_progress_pane_t

0xc7e5,	// (0x0001c22f) mup_progress_pane_cp03

0x95ee,	// (0x00019038) bg_tb_trans_pane_cp04

0x47c9,	// (0x00014213) mup3_volume_pane

0x47d1,	// (0x0001421b) popup_mup3_control_window_g1

0x47da,	// (0x00014224) mup3_volume_pane_g1

0x47e3,	// (0x0001422d) mup3_volume_pane_g2

0x47ec,	// (0x00014236) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0001f1d2) mup3_volume_pane_g

0x95ee,	// (0x00019038) bg_tb_trans_pane_cp03

0xc7f5,	// (0x0001c23f) popup_mup3_text_window_g1

0xc7fd,	// (0x0001c247) popup_mup3_text_window_t1

0x9e55,	// (0x0001989f) list_calc_item_pane_g1_ParamLimits

0xc223,	// (0x0001bc6d) mup_volume_pane_cp_g1

0x4036,	// (0x00013a80) main_touch_calib_pane_t3

0x404a,	// (0x00013a94) main_touch_calib_pane_t4

0x4060,	// (0x00013aaa) main_touch_calib_pane_t5

0x95f8,	// (0x00019042) aid_cell_size_toolbar2

0x9600,	// (0x0001904a) aid_popup3_width_pane

0x960c,	// (0x00019056) aid_zoom_text_msg_primary

0x081e,	// (0x00010268) vorec_t7

0x9e19,	// (0x00019863) bg_calc_paper_pane_g1_ParamLimits

0x9e25,	// (0x0001986f) bg_calc_paper_pane_g2_ParamLimits

0x9e31,	// (0x0001987b) bg_calc_paper_pane_g3_ParamLimits

0x9e3d,	// (0x00019887) bg_calc_paper_pane_g4_ParamLimits

0x9e49,	// (0x00019893) bg_calc_paper_pane_g5_ParamLimits

0x0076,	// (0x0000fac0) bg_calc_paper_pane_g6_ParamLimits

0x0084,	// (0x0000face) bg_calc_paper_pane_g7_ParamLimits

0x0092,	// (0x0000fadc) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0001eb87) bg_calc_paper_pane_g_ParamLimits

0x00a5,	// (0x0000faef) calc_bg_paper_pane_g9_ParamLimits

0x098e,	// (0x000103d8) image_qvga_pane_ParamLimits

0x098e,	// (0x000103d8) image_qvga_pane

0x9d14,	// (0x0001975e) bg_popup_sub_pane_cp04_ParamLimits

0xadc0,	// (0x0001a80a) popup_mup_playback_window_g1_ParamLimits

0xadcc,	// (0x0001a816) popup_mup_playback_window_t1_ParamLimits

0xade1,	// (0x0001a82b) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0001ef11) popup_mup_playback_window_t_ParamLimits

0x3b22,	// (0x0001356c) main_mup2_pane_g3_ParamLimits

0x3b22,	// (0x0001356c) main_mup2_pane_g3

0x0d96,	// (0x000107e0) popup_toolbar_window_cp04

0xb1dc,	// (0x0001ac26) popup_call2_audio_second_window_g3_ParamLimits

0xb1dc,	// (0x0001ac26) popup_call2_audio_second_window_g3

0xb5e6,	// (0x0001b030) popup_call2_audio_first_window_g4_ParamLimits

0xb5e6,	// (0x0001b030) popup_call2_audio_first_window_g4

0xbc65,	// (0x0001b6af) popup_call2_audio_in_window_g4_ParamLimits

0xbc65,	// (0x0001b6af) popup_call2_audio_in_window_g4

0x29ff,	// (0x00012449) aid_area_sk_bg_cut_ParamLimits

0x29ff,	// (0x00012449) aid_area_sk_bg_cut

0xadf6,	// (0x0001a840) aid_area_sk_bg_cut_2_ParamLimits

0xadf6,	// (0x0001a840) aid_area_sk_bg_cut_2

0x3e36,	// (0x00013880) aid_placing_details_win

0x3e3e,	// (0x00013888) aid_placing_details_win_2

0xc653,	// (0x0001c09d) camera2_autofocus_pane_g1_ParamLimits

0xfc92,	// (0x0000f6dc) popup_fixed_preview_cale_window_ParamLimits

0xfc92,	// (0x0000f6dc) popup_fixed_preview_cale_window

0xab27,	// (0x0001a571) navi_slider_pane_g3

0xab30,	// (0x0001a57a) navi_slider_pane_g4

0xab39,	// (0x0001a583) navi_slider_pane_g5

0xab27,	// (0x0001a571) navi_slider_pane_g6

0xab42,	// (0x0001a58c) navi_slider_pane_g7

0xac65,	// (0x0001a6af) mup_scale_pane_g3

0xac6e,	// (0x0001a6b8) mup_scale_pane_g4

0xac77,	// (0x0001a6c1) mup_scale_pane_g5

0x26c4,	// (0x0001210e) mup_scale_pane_g6

0x26cd,	// (0x00012117) mup_scale_pane_g7

0xab27,	// (0x0001a571) cams2_slider_pane_g3

0xc2d8,	// (0x0001bd22) cams2_slider_pane_g4

0xc2e0,	// (0x0001bd2a) cams2_slider_pane_g5

0xab27,	// (0x0001a571) cams2_slider_pane_g6

0xc2e8,	// (0x0001bd32) cams2_slider_pane_g7

0xc51a,	// (0x0001bf64) camera2_autofocus_pane_cp_g1

0xbfc4,	// (0x0001ba0e) bg_popup_preview_window_pane_cp02_ParamLimits

0xbfc4,	// (0x0001ba0e) bg_popup_preview_window_pane_cp02

0xc80b,	// (0x0001c255) list_fp_cale_pane_ParamLimits

0xc80b,	// (0x0001c255) list_fp_cale_pane

0xc817,	// (0x0001c261) popup_fixed_preview_cale_window_t1_ParamLimits

0xc817,	// (0x0001c261) popup_fixed_preview_cale_window_t1

0x47f5,	// (0x0001423f) popup_fixed_preview_cale_window_t2_ParamLimits

0x47f5,	// (0x0001423f) popup_fixed_preview_cale_window_t2

0x480a,	// (0x00014254) popup_fixed_preview_cale_window_t3_ParamLimits

0x480a,	// (0x00014254) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0001f1d9) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0001f1d9) popup_fixed_preview_cale_window_t

0x4821,	// (0x0001426b) list_single_fp_cale_pane_ParamLimits

0x4821,	// (0x0001426b) list_single_fp_cale_pane

0xc835,	// (0x0001c27f) list_single_fp_cale_pane_g1_ParamLimits

0xc835,	// (0x0001c27f) list_single_fp_cale_pane_g1

0xc841,	// (0x0001c28b) list_single_fp_cale_pane_g2_ParamLimits

0xc841,	// (0x0001c28b) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0001f1e0) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0001f1e0) list_single_fp_cale_pane_g

0xc85a,	// (0x0001c2a4) list_single_fp_cale_pane_t1_ParamLimits

0xc85a,	// (0x0001c2a4) list_single_fp_cale_pane_t1

0xc86c,	// (0x0001c2b6) list_single_fp_cale_pane_t2_ParamLimits

0xc86c,	// (0x0001c2b6) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0001f1e7) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0001f1e7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95ee,	// (0x00019038) main_dialer_pane

0x4839,	// (0x00014283) aid_cell_size_keypad

0x4843,	// (0x0001428d) dialer_ne_pane

0x484d,	// (0x00014297) grid_dialer_command_1_pane

0x4855,	// (0x0001429f) grid_dialer_command_2_pane

0x485d,	// (0x000142a7) grid_dialer_keypad_pane

0x4871,	// (0x000142bb) bg_popup_call_pane_cp06_ParamLimits

0x4871,	// (0x000142bb) bg_popup_call_pane_cp06

0x487d,	// (0x000142c7) dialer_ne_clear_pane_ParamLimits

0x487d,	// (0x000142c7) dialer_ne_clear_pane

0xc89f,	// (0x0001c2e9) dialer_ne_pane_g1

0xc8a7,	// (0x0001c2f1) dialer_ne_pane_t1_ParamLimits

0xc8a7,	// (0x0001c2f1) dialer_ne_pane_t1

0x4889,	// (0x000142d3) dialer_ne_pane_t2_ParamLimits

0x4889,	// (0x000142d3) dialer_ne_pane_t2

0x48b3,	// (0x000142fd) dialer_ne_pane_t3_ParamLimits

0x48b3,	// (0x000142fd) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0001f1ec) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0001f1ec) dialer_ne_pane_t

0x48e3,	// (0x0001432d) dialer_ne_pane_t3_copy1_ParamLimits

0x48e3,	// (0x0001432d) dialer_ne_pane_t3_copy1

0x4912,	// (0x0001435c) cell_dialer_keypad_pane_ParamLimits

0x4912,	// (0x0001435c) cell_dialer_keypad_pane

0x4929,	// (0x00014373) cell_dialer_command_1_pane_ParamLimits

0x4929,	// (0x00014373) cell_dialer_command_1_pane

0x493f,	// (0x00014389) cell_dialer_command_2_pane_ParamLimits

0x493f,	// (0x00014389) cell_dialer_command_2_pane

0xc8b9,	// (0x0001c303) bg_button_pane_cp02_ParamLimits

0xc8b9,	// (0x0001c303) bg_button_pane_cp02

0x494e,	// (0x00014398) cell_dialer_keypad_pane_g1_ParamLimits

0x494e,	// (0x00014398) cell_dialer_keypad_pane_g1

0xc8b9,	// (0x0001c303) bg_button_pane_cp03_ParamLimits

0xc8b9,	// (0x0001c303) bg_button_pane_cp03

0x495f,	// (0x000143a9) cell_dialer_command_1_pane_g1_ParamLimits

0x495f,	// (0x000143a9) cell_dialer_command_1_pane_g1

0xc8c5,	// (0x0001c30f) bg_button_pane_cp04

0x4973,	// (0x000143bd) cell_dialer_command_2_pane_g1

0xa018,	// (0x00019a62) bg_button_pane_cp06

0xc8cd,	// (0x0001c317) dialer_ne_clear_pane_g1

0xa9ef,	// (0x0001a439) navi_pane_g2

0xaa1d,	// (0x0001a467) navi_pane_g3

0x0002,

0xf3ca,	// (0x0001ee14) navi_pane_g

0xaaac,	// (0x0001a4f6) navi_pane_mv_g2

0xaad5,	// (0x0001a51f) navi_pane_mv_g5

0x222c,	// (0x00011c76) navi_pane_mv_t1

0x9dfb,	// (0x00019845) main_clock2_pane

0x9663,	// (0x000190ad) main_clock2_list_pane_ParamLimits

0x9663,	// (0x000190ad) main_clock2_list_pane

0x49df,	// (0x00014429) main_clock2_pane_t1_ParamLimits

0x49df,	// (0x00014429) main_clock2_pane_t1

0x4a1a,	// (0x00014464) main_clock2_pane_t2_ParamLimits

0x4a1a,	// (0x00014464) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0001f1f8) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0001f1f8) main_clock2_pane_t

0x4ab9,	// (0x00014503) popup_clock_analogue_window_cp03_ParamLimits

0x4ab9,	// (0x00014503) popup_clock_analogue_window_cp03

0x4ade,	// (0x00014528) popup_clock_digital_window_cp02_ParamLimits

0x4ade,	// (0x00014528) popup_clock_digital_window_cp02

0x4b57,	// (0x000145a1) main_clock2_list_single_pane_ParamLimits

0x4b57,	// (0x000145a1) main_clock2_list_single_pane

0xa018,	// (0x00019a62) list_highlight_pane_cp05

0xc905,	// (0x0001c34f) main_clock2_list_single_pane_t1

0x0d96,	// (0x000107e0) popup_toolbar_window_cp04_ParamLimits

0x3ea5,	// (0x000138ef) camera2_autofocus_pane_g2_ParamLimits

0x3ea5,	// (0x000138ef) camera2_autofocus_pane_g2

0x3eb1,	// (0x000138fb) camera2_autofocus_pane_g3_ParamLimits

0x3eb1,	// (0x000138fb) camera2_autofocus_pane_g3

0x3ebd,	// (0x00013907) camera2_autofocus_pane_g4_ParamLimits

0x3ebd,	// (0x00013907) camera2_autofocus_pane_g4

0x3ec9,	// (0x00013913) camera2_autofocus_pane_g5_ParamLimits

0x3ec9,	// (0x00013913) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0001f13c) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0001f13c) camera2_autofocus_pane_g

0x4102,	// (0x00013b4c) camera2_autofocus_pane_cp_g2

0x410a,	// (0x00013b54) camera2_autofocus_pane_cp_g3

0x4112,	// (0x00013b5c) camera2_autofocus_pane_cp_g4

0x411a,	// (0x00013b64) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0001f1a2) camera2_autofocus_pane_cp_g

0x4869,	// (0x000142b3) popup_dialer_spcha_window

0x95ee,	// (0x00019038) bg_popup_sub_pane_cp07

0xc913,	// (0x0001c35d) list_spcha_pane

0xc91b,	// (0x0001c365) list_single_spcha_pane_ParamLimits

0xc91b,	// (0x0001c365) list_single_spcha_pane

0x95ee,	// (0x00019038) list_highlight_pane_cp06

0xc92c,	// (0x0001c376) list_single_spcha_pane_t1

0xba0f,	// (0x0001b459) popup_call2_audio_out_window_g4_ParamLimits

0xba0f,	// (0x0001b459) popup_call2_audio_out_window_g4

0x95ee,	// (0x00019038) main_imed2_pane

0xbffc,	// (0x0001ba46) popup_imed_adjust2_window

0x3285,	// (0x00012ccf) popup_imed_trans_window_ParamLimits

0x3285,	// (0x00012ccf) popup_imed_trans_window

0xc352,	// (0x0001bd9c) popup_blid_sat_info2_window_t1

0xc360,	// (0x0001bdaa) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0001f0d1) popup_blid_sat_info2_window_t

0x4c12,	// (0x0001465c) aid_size_cell_colour_35

0x4c32,	// (0x0001467c) aid_size_cell_colour_112

0x4c52,	// (0x0001469c) aid_size_cell_effect

0xbfd0,	// (0x0001ba1a) bg_tb_trans_pane_cp02

0xa50a,	// (0x00019f54) heading_imed_pane

0x4c72,	// (0x000146bc) listscroll_imed_pane

0xc93a,	// (0x0001c384) heading_imed_pane_g1

0xc942,	// (0x0001c38c) heading_imed_pane_t1

0xc950,	// (0x0001c39a) grid_imed_colour_35_pane_ParamLimits

0xc950,	// (0x0001c39a) grid_imed_colour_35_pane

0x4c7e,	// (0x000146c8) grid_imed_effect_pane

0xc96c,	// (0x0001c3b6) list_imed_aspect_pane

0x4c95,	// (0x000146df) scroll_pane_cp027_ParamLimits

0x4c95,	// (0x000146df) scroll_pane_cp027

0x4ca6,	// (0x000146f0) cell_imed_effect_pane_ParamLimits

0x4ca6,	// (0x000146f0) cell_imed_effect_pane

0xc974,	// (0x0001c3be) cell_imed_colour_pane_ParamLimits

0xc974,	// (0x0001c3be) cell_imed_colour_pane

0xc9be,	// (0x0001c408) cell_imed_colour_pane_g1_ParamLimits

0xc9be,	// (0x0001c408) cell_imed_colour_pane_g1

0xc9cf,	// (0x0001c419) hgihlgiht_grid_pane_cp016_ParamLimits

0xc9cf,	// (0x0001c419) hgihlgiht_grid_pane_cp016

0x4cd1,	// (0x0001471b) cell_imed_effect_pane_g1

0x4cd9,	// (0x00014723) grid_highlight_pane_cp017

0xc9e0,	// (0x0001c42a) list_imed_single_pane_ParamLimits

0xc9e0,	// (0x0001c42a) list_imed_single_pane

0x95ee,	// (0x00019038) list_highlight_pane_cp07

0xc9f4,	// (0x0001c43e) list_imed_aspect_pane_comp1_t1

0xbfd0,	// (0x0001ba1a) bg_tb_trans_pane_cp05

0xca16,	// (0x0001c460) popup_imed_adjust2_window_g1

0xca3d,	// (0x0001c487) popup_imed_adjust2_window_t1

0xca55,	// (0x0001c49f) slider_imed_adjust_pane

0xca69,	// (0x0001c4b3) slider_imed_adjust_pane_g1

0xca79,	// (0x0001c4c3) slider_imed_adjust_pane_g2

0xca89,	// (0x0001c4d3) slider_imed_adjust_pane_g3

0xca9a,	// (0x0001c4e4) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0001f215) slider_imed_adjust_pane_g

0x4ce2,	// (0x0001472c) aid_size_cell_clipart2

0xcaab,	// (0x0001c4f5) grid_imed_clipart_pane

0xcab5,	// (0x0001c4ff) scroll_pane_cp031

0x4cee,	// (0x00014738) cell_imed_clipart_pane_ParamLimits

0x4cee,	// (0x00014738) cell_imed_clipart_pane

0x4d0b,	// (0x00014755) cell_imed_clipart_pane_g1

0x95ee,	// (0x00019038) grid_highlight_pane_cp014

0x49bd,	// (0x00014407) main_clock2_pane_g1_ParamLimits

0x49bd,	// (0x00014407) main_clock2_pane_g1

0x4afe,	// (0x00014548) aid_call2_pane_cp10

0x4b10,	// (0x0001455a) aid_call_pane_cp10

0xa94e,	// (0x0001a398) popup_clock_analogue_window_cp10_g1

0xa94e,	// (0x0001a398) popup_clock_analogue_window_cp10_g2

0x4b22,	// (0x0001456c) popup_clock_analogue_window_cp10_g3

0x4b22,	// (0x0001456c) popup_clock_analogue_window_cp10_g4

0xa94e,	// (0x0001a398) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0001f203) popup_clock_analogue_window_cp10_g

0x4b38,	// (0x00014582) popup_clock_analogue_window_cp10_t1

0x4b69,	// (0x000145b3) clock_digital_number_pane_cp10_ParamLimits

0x4b69,	// (0x000145b3) clock_digital_number_pane_cp10

0x4b83,	// (0x000145cd) clock_digital_number_pane_cp11_ParamLimits

0x4b83,	// (0x000145cd) clock_digital_number_pane_cp11

0x4b9d,	// (0x000145e7) clock_digital_number_pane_cp12_ParamLimits

0x4b9d,	// (0x000145e7) clock_digital_number_pane_cp12

0x4bb9,	// (0x00014603) clock_digital_number_pane_cp13_ParamLimits

0x4bb9,	// (0x00014603) clock_digital_number_pane_cp13

0x4bd5,	// (0x0001461f) clock_digital_separator_pane_cp10_ParamLimits

0x4bd5,	// (0x0001461f) clock_digital_separator_pane_cp10

0x4bf1,	// (0x0001463b) popup_clock_digital_window_cp02_t1_ParamLimits

0x4bf1,	// (0x0001463b) popup_clock_digital_window_cp02_t1

0x9d0c,	// (0x00019756) clock_digital_number_pane_cp10_g1

0x9d0c,	// (0x00019756) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0001f21e) clock_digital_number_pane_cp10_g

0x9d0c,	// (0x00019756) clock_digital_separator_pane_cp10_g1

0x9d0c,	// (0x00019756) clock_digital_separator_pane_g2_cp10

0xaadd,	// (0x0001a527) navi_pane_vded_g4

0xaae6,	// (0x0001a530) navi_pane_vded_g5

0xaaef,	// (0x0001a539) navi_pane_vded_t1

0x95ee,	// (0x00019038) main_vded_pane

0x4d14,	// (0x0001475e) main_vded_pane_g1

0x4d20,	// (0x0001476a) main_vded_pane_g2

0x4d2c,	// (0x00014776) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0001f223) main_vded_pane_g

0x4d38,	// (0x00014782) main_vded_pane_t1

0x4d46,	// (0x00014790) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0001f22a) main_vded_pane_t

0x4d54,	// (0x0001479e) vded_slider_pane

0x4d5e,	// (0x000147a8) vded_video_pane

0xcabd,	// (0x0001c507) vded_video_pane_g1

0x4d6a,	// (0x000147b4) vded_video_pane_g2

0xc51a,	// (0x0001bf64) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0001f22f) vded_video_pane_g

0xcac7,	// (0x0001c511) vded_slider_pane_g1

0xc223,	// (0x0001bc6d) vded_slider_pane_g2

0xcad0,	// (0x0001c51a) vded_slider_pane_g3

0xcad9,	// (0x0001c523) vded_slider_pane_g4

0xcae2,	// (0x0001c52c) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0001f236) vded_slider_pane_g

0x473f,	// (0x00014189) mup3_rocker_pane_ParamLimits

0x473f,	// (0x00014189) mup3_rocker_pane

0x4d73,	// (0x000147bd) mup3_control_keys_pane_g1

0x4d7b,	// (0x000147c5) mup3_control_keys_pane_g2

0x4d83,	// (0x000147cd) mup3_control_keys_pane_g3

0x4d8b,	// (0x000147d5) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0001f241) mup3_control_keys_pane_g

0xfcc7,	// (0x0000f711) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfcc7,	// (0x0000f711) popup_toolbar2_fixed_window_cp01

0x4775,	// (0x000141bf) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4775,	// (0x000141bf) popup_toolbar2_fixed_window_cp02

0xb34e,	// (0x0001ad98) popup_call2_audio_second_window_t4_ParamLimits

0xb34e,	// (0x0001ad98) popup_call2_audio_second_window_t4

0xb87c,	// (0x0001b2c6) popup_call2_audio_first_window_t6_ParamLimits

0xb87c,	// (0x0001b2c6) popup_call2_audio_first_window_t6

0xbb12,	// (0x0001b55c) popup_call2_audio_out_window_t6_ParamLimits

0xbb12,	// (0x0001b55c) popup_call2_audio_out_window_t6

0x95ee,	// (0x00019038) main_vitu_pane

0x4d9b,	// (0x000147e5) aid_size_cell_itu_ParamLimits

0x4d9b,	// (0x000147e5) aid_size_cell_itu

0x9663,	// (0x000190ad) bg_popup_window_pane_cp08_ParamLimits

0x9663,	// (0x000190ad) bg_popup_window_pane_cp08

0x4db1,	// (0x000147fb) field_vitu_entry_pane_ParamLimits

0x4db1,	// (0x000147fb) field_vitu_entry_pane

0x4dc8,	// (0x00014812) grid_vitu_function_pane_ParamLimits

0x4dc8,	// (0x00014812) grid_vitu_function_pane

0x4de3,	// (0x0001482d) grid_vitu_itu_pane_ParamLimits

0x4de3,	// (0x0001482d) grid_vitu_itu_pane

0x4e01,	// (0x0001484b) cell_vitu_itu_pane_ParamLimits

0x4e01,	// (0x0001484b) cell_vitu_itu_pane

0x4e27,	// (0x00014871) cell_vitu_function_pane_ParamLimits

0x4e27,	// (0x00014871) cell_vitu_function_pane

0x9663,	// (0x000190ad) bg_popup_sub_pane_cp08_ParamLimits

0x9663,	// (0x000190ad) bg_popup_sub_pane_cp08

0x4e42,	// (0x0001488c) field_vitu_entry_pane_t1_ParamLimits

0x4e42,	// (0x0001488c) field_vitu_entry_pane_t1

0xcb03,	// (0x0001c54d) field_vitu_entry_pane_t2_ParamLimits

0xcb03,	// (0x0001c54d) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0001f24f) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0001f24f) field_vitu_entry_pane_t

0xcb20,	// (0x0001c56a) bg_button_pane_cp05_ParamLimits

0xcb20,	// (0x0001c56a) bg_button_pane_cp05

0x4e62,	// (0x000148ac) cell_vitu_itu_pane_g1

0x4e7a,	// (0x000148c4) cell_vitu_itu_pane_t1_ParamLimits

0x4e7a,	// (0x000148c4) cell_vitu_itu_pane_t1

0x4e8c,	// (0x000148d6) cell_vitu_itu_pane_t2_ParamLimits

0x4e8c,	// (0x000148d6) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0001f254) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0001f254) cell_vitu_itu_pane_t

0xcb2e,	// (0x0001c578) bg_button_pane_cp07

0x4ec1,	// (0x0001490b) cell_vitu_function_pane_g1

0x9d9b,	// (0x000197e5) main_calc_pane_g1

0xfaed,	// (0x0000f537) aid_visual_content_pane

0x95ee,	// (0x00019038) main_vradio_pane

0x4eca,	// (0x00014914) main_vradio_pane_g1_ParamLimits

0x4eca,	// (0x00014914) main_vradio_pane_g1

0xcb38,	// (0x0001c582) main_vradio_pane_g2_ParamLimits

0xcb38,	// (0x0001c582) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0001f25b) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0001f25b) main_vradio_pane_g

0x4ee1,	// (0x0001492b) main_vradio_pane_t1_ParamLimits

0x4ee1,	// (0x0001492b) main_vradio_pane_t1

0x4ef6,	// (0x00014940) main_vradio_pane_t2_ParamLimits

0x4ef6,	// (0x00014940) main_vradio_pane_t2

0xcb45,	// (0x0001c58f) main_vradio_pane_t3_ParamLimits

0xcb45,	// (0x0001c58f) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0001f260) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0001f260) main_vradio_pane_t

0x4f0b,	// (0x00014955) vradio_rocker_control_pane_ParamLimits

0x4f0b,	// (0x00014955) vradio_rocker_control_pane

0x4f1d,	// (0x00014967) vradio_station_info_pane_ParamLimits

0x4f1d,	// (0x00014967) vradio_station_info_pane

0xcb59,	// (0x0001c5a3) vradio_frequency_info_pane_ParamLimits

0xcb59,	// (0x0001c5a3) vradio_frequency_info_pane

0xc51a,	// (0x0001bf64) vradio_station_info_pane_g1

0xcb68,	// (0x0001c5b2) vradio_station_info_pane_t1_ParamLimits

0xcb68,	// (0x0001c5b2) vradio_station_info_pane_t1

0xcb8a,	// (0x0001c5d4) vradio_station_info_pane_t2_ParamLimits

0xcb8a,	// (0x0001c5d4) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0001f267) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0001f267) vradio_station_info_pane_t

0xcb9c,	// (0x0001c5e6) vradio_tuning_pane

0xcba4,	// (0x0001c5ee) vradio_rocker_control_pane_g1

0xcbac,	// (0x0001c5f6) vradio_rocker_control_pane_g2

0xcbb4,	// (0x0001c5fe) vradio_rocker_control_pane_g3

0xcbbc,	// (0x0001c606) vradio_rocker_control_pane_g4

0xcbc4,	// (0x0001c60e) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0001f26c) vradio_rocker_control_pane_g

0x4f2d,	// (0x00014977) vradio_frequency_info_pane_g1

0xcbcc,	// (0x0001c616) vradio_frequency_info_pane_t1_ParamLimits

0xcbcc,	// (0x0001c616) vradio_frequency_info_pane_t1

0x4f37,	// (0x00014981) vradio_tuning_pane_g1

0x4f42,	// (0x0001498c) vradio_tuning_pane_t1

0x961c,	// (0x00019066) area_side_right_pane_ParamLimits

0x961c,	// (0x00019066) area_side_right_pane

0xbf8b,	// (0x0001b9d5) status_small_pane_g1

0xbf93,	// (0x0001b9dd) status_small_pane_g2

0xbf9c,	// (0x0001b9e6) status_small_pane_g3

0xbfa5,	// (0x0001b9ef) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0001f027) status_small_pane_g

0xbfae,	// (0x0001b9f8) status_small_pane_t1

0x95ee,	// (0x00019038) main_video3_pane

0xcbe0,	// (0x0001c62a) cams_zoom_vslider_pane

0xcbe8,	// (0x0001c632) image3_wide_pane_ParamLimits

0xcbe8,	// (0x0001c632) image3_wide_pane

0xcc02,	// (0x0001c64c) image3_wide_small_pane

0xcc0e,	// (0x0001c658) main_video3_pane_g1_ParamLimits

0xcc0e,	// (0x0001c658) main_video3_pane_g1

0xcc2a,	// (0x0001c674) main_video3_pane_g2_ParamLimits

0xcc2a,	// (0x0001c674) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0001f277) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0001f277) main_video3_pane_g

0xcc46,	// (0x0001c690) main_video3_pane_t1_ParamLimits

0xcc46,	// (0x0001c690) main_video3_pane_t1

0xcc71,	// (0x0001c6bb) main_video3_pane_t2_ParamLimits

0xcc71,	// (0x0001c6bb) main_video3_pane_t2

0xcc9e,	// (0x0001c6e8) main_video3_pane_t3_ParamLimits

0xcc9e,	// (0x0001c6e8) main_video3_pane_t3

0x0002,

0xf832,	// (0x0001f27c) main_video3_pane_t_ParamLimits

0xf832,	// (0x0001f27c) main_video3_pane_t

0xcccb,	// (0x0001c715) cams_zoom_vslider_pane_g1

0xccd4,	// (0x0001c71e) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0001f283) cams_zoom_vslider_pane_g

0xccdc,	// (0x0001c726) small_slider_vertical_pane

0xc51a,	// (0x0001bf64) small_slider_vertical_pane_g1

0xc51a,	// (0x0001bf64) small_slider_vertical_pane_g2

0xcce4,	// (0x0001c72e) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0001f288) small_slider_vertical_pane_g

0x95ee,	// (0x00019038) main_hwr_training_pane

0xcced,	// (0x0001c737) hwr_training_instruct_pane_ParamLimits

0xcced,	// (0x0001c737) hwr_training_instruct_pane

0x4f51,	// (0x0001499b) hwr_training_navi_pane_ParamLimits

0x4f51,	// (0x0001499b) hwr_training_navi_pane

0x4f70,	// (0x000149ba) hwr_training_write_pane_ParamLimits

0x4f70,	// (0x000149ba) hwr_training_write_pane

0x95ee,	// (0x00019038) bg_frame_shadow_pane

0xcd24,	// (0x0001c76e) hwr_training_write_pane_g1

0xcd2c,	// (0x0001c776) hwr_training_write_pane_g2

0xcd34,	// (0x0001c77e) hwr_training_write_pane_g3

0xcd3c,	// (0x0001c786) hwr_training_write_pane_g4

0xcd44,	// (0x0001c78e) hwr_training_write_pane_g5

0xcd4c,	// (0x0001c796) hwr_training_write_pane_g6

0xcd54,	// (0x0001c79e) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0001f28f) hwr_training_write_pane_g

0xcd5c,	// (0x0001c7a6) hwr_training_navi_pane_g1_ParamLimits

0xcd5c,	// (0x0001c7a6) hwr_training_navi_pane_g1

0xcd6e,	// (0x0001c7b8) hwr_training_navi_pane_g2_ParamLimits

0xcd6e,	// (0x0001c7b8) hwr_training_navi_pane_g2

0xcd80,	// (0x0001c7ca) hwr_training_navi_pane_g3_ParamLimits

0xcd80,	// (0x0001c7ca) hwr_training_navi_pane_g3

0xcd90,	// (0x0001c7da) hwr_training_navi_pane_g4_ParamLimits

0xcd90,	// (0x0001c7da) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0001f29e) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0001f29e) hwr_training_navi_pane_g

0xcd9d,	// (0x0001c7e7) hwr_training_navi_pane_t1

0x4fb8,	// (0x00014a02) list_single_hwr_training_instruct_pane_ParamLimits

0x4fb8,	// (0x00014a02) list_single_hwr_training_instruct_pane

0xcdab,	// (0x0001c7f5) list_single_hwr_training_instruct_pane_t1

0xc45a,	// (0x0001bea4) bg_frame_shadow_pane_g1

0xcdba,	// (0x0001c804) bg_frame_shadow_pane_g2

0xcdc2,	// (0x0001c80c) bg_frame_shadow_pane_g3

0xcdca,	// (0x0001c814) bg_frame_shadow_pane_g4

0xcdd2,	// (0x0001c81c) bg_frame_shadow_pane_g5

0xcdda,	// (0x0001c824) bg_frame_shadow_pane_g6

0xcde2,	// (0x0001c82c) bg_frame_shadow_pane_g7

0x9ee1,	// (0x0001992b) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0001f2a9) bg_frame_shadow_pane_g

0x95ee,	// (0x00019038) main_video_tele_dialer_pane

0x4fd4,	// (0x00014a1e) aid_size_cell_video_keypad_ParamLimits

0x4fd4,	// (0x00014a1e) aid_size_cell_video_keypad

0x4fee,	// (0x00014a38) grid_video_dialer_keypad_pane_ParamLimits

0x4fee,	// (0x00014a38) grid_video_dialer_keypad_pane

0x503a,	// (0x00014a84) video_down_pane_cp_ParamLimits

0x503a,	// (0x00014a84) video_down_pane_cp

0x506c,	// (0x00014ab6) cell_video_dialer_keypad_pane_ParamLimits

0x506c,	// (0x00014ab6) cell_video_dialer_keypad_pane

0xcdea,	// (0x0001c834) bg_button_pane_cp08_ParamLimits

0xcdea,	// (0x0001c834) bg_button_pane_cp08

0x5092,	// (0x00014adc) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5092,	// (0x00014adc) cell_video_dialer_keypad_pane_g1

0x4729,	// (0x00014173) mup3_rocker2_pane_ParamLimits

0x4729,	// (0x00014173) mup3_rocker2_pane

0xc51a,	// (0x0001bf64) mup3_rocker2_pane_g1

0x3152,	// (0x00012b9c) main_dialer2_pane

0x95ee,	// (0x00019038) main_mp4_pane

0xce14,	// (0x0001c85e) main_mp4_pane_g1_ParamLimits

0xce14,	// (0x0001c85e) main_mp4_pane_g1

0xce14,	// (0x0001c85e) main_mp4_pane_g2_ParamLimits

0xce14,	// (0x0001c85e) main_mp4_pane_g2

0x50cd,	// (0x00014b17) main_mp4_pane_g3_ParamLimits

0x50cd,	// (0x00014b17) main_mp4_pane_g3

0xce22,	// (0x0001c86c) main_mp4_pane_g4_ParamLimits

0xce22,	// (0x0001c86c) main_mp4_pane_g4

0xce50,	// (0x0001c89a) main_mp4_pane_g5_ParamLimits

0xce50,	// (0x0001c89a) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0001f2c9) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0001f2c9) main_mp4_pane_g

0xcec4,	// (0x0001c90e) main_mp4_pane_t1_ParamLimits

0xcec4,	// (0x0001c90e) main_mp4_pane_t1

0xcf20,	// (0x0001c96a) main_mp4_pane_t2_ParamLimits

0xcf20,	// (0x0001c96a) main_mp4_pane_t2

0xcf72,	// (0x0001c9bc) main_mp4_pane_t3_ParamLimits

0xcf72,	// (0x0001c9bc) main_mp4_pane_t3

0xcf98,	// (0x0001c9e2) main_mp4_pane_t4_ParamLimits

0xcf98,	// (0x0001c9e2) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0001f2da) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0001f2da) main_mp4_pane_t

0xcfd8,	// (0x0001ca22) mp4_progress_pane_ParamLimits

0xcfd8,	// (0x0001ca22) mp4_progress_pane

0xd022,	// (0x0001ca6c) mp4_rocker_pane_ParamLimits

0xd022,	// (0x0001ca6c) mp4_rocker_pane

0xd04a,	// (0x0001ca94) mp4_progress_pane_t1

0xd063,	// (0x0001caad) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0001f2e3) mp4_progress_pane_t

0xd07c,	// (0x0001cac6) mup_progress_pane_cp04

0xc51a,	// (0x0001bf64) mp4_rocker_pane_g1

0x5117,	// (0x00014b61) aid_cell_size_keypad2_ParamLimits

0x5117,	// (0x00014b61) aid_cell_size_keypad2

0x512d,	// (0x00014b77) dialer2_ne_pane_ParamLimits

0x512d,	// (0x00014b77) dialer2_ne_pane

0x5145,	// (0x00014b8f) grid_dialer2_keypad_pane_ParamLimits

0x5145,	// (0x00014b8f) grid_dialer2_keypad_pane

0xc2f9,	// (0x0001bd43) bg_popup_call_pane_cp07_ParamLimits

0xc2f9,	// (0x0001bd43) bg_popup_call_pane_cp07

0x5161,	// (0x00014bab) dialer2_ne_pane_t1_ParamLimits

0x5161,	// (0x00014bab) dialer2_ne_pane_t1

0x51a1,	// (0x00014beb) cell_dialer2_keypad_pane_ParamLimits

0x51a1,	// (0x00014beb) cell_dialer2_keypad_pane

0xd0a1,	// (0x0001caeb) bg_button_pane_pane_cp04_ParamLimits

0xd0a1,	// (0x0001caeb) bg_button_pane_pane_cp04

0x51c7,	// (0x00014c11) cell_dialer2_keypad_pane_g1_ParamLimits

0x51c7,	// (0x00014c11) cell_dialer2_keypad_pane_g1

0x0c7d,	// (0x000106c7) aid_placing_vt_set_content_ParamLimits

0x0c7d,	// (0x000106c7) aid_placing_vt_set_content

0x0ca1,	// (0x000106eb) aid_placing_vt_set_title_ParamLimits

0x0ca1,	// (0x000106eb) aid_placing_vt_set_title

0x95ee,	// (0x00019038) main_image3_pane

0x528d,	// (0x00014cd7) area_side_right_pane_cp01_ParamLimits

0x528d,	// (0x00014cd7) area_side_right_pane_cp01

0xce14,	// (0x0001c85e) main_image3_pane_g1_ParamLimits

0xce14,	// (0x0001c85e) main_image3_pane_g1

0x52a6,	// (0x00014cf0) main_image3_pane_g2_ParamLimits

0x52a6,	// (0x00014cf0) main_image3_pane_g2

0x52ce,	// (0x00014d18) main_image3_pane_g3_ParamLimits

0x52ce,	// (0x00014d18) main_image3_pane_g3

0x52f8,	// (0x00014d42) main_image3_pane_g4_ParamLimits

0x52f8,	// (0x00014d42) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0001f2f2) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0001f2f2) main_image3_pane_g

0x5322,	// (0x00014d6c) main_image3_pane_t1_ParamLimits

0x5322,	// (0x00014d6c) main_image3_pane_t1

0x537a,	// (0x00014dc4) main_image3_pane_t2_ParamLimits

0x537a,	// (0x00014dc4) main_image3_pane_t2

0x53cc,	// (0x00014e16) main_image3_pane_t3_ParamLimits

0x53cc,	// (0x00014e16) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0001f2fb) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0001f2fb) main_image3_pane_t

0x9663,	// (0x000190ad) grid_sctrl_middle_pane_cp01_ParamLimits

0x9663,	// (0x000190ad) grid_sctrl_middle_pane_cp01

0x5454,	// (0x00014e9e) cell_sctrl_middle_pane_cp01_ParamLimits

0x5454,	// (0x00014e9e) cell_sctrl_middle_pane_cp01

0x5471,	// (0x00014ebb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5471,	// (0x00014ebb) cell_sctrl_middle_pane_cp01_g1

0x95ee,	// (0x00019038) main_call4_pane

0x5486,	// (0x00014ed0) aid_size_button_call4_ParamLimits

0x5486,	// (0x00014ed0) aid_size_button_call4

0x54b9,	// (0x00014f03) call4_windows_pane_ParamLimits

0x54b9,	// (0x00014f03) call4_windows_pane

0x54d8,	// (0x00014f22) grid_call4_button_pane_ParamLimits

0x54d8,	// (0x00014f22) grid_call4_button_pane

0x550f,	// (0x00014f59) call4_windows_conf_pane

0x552a,	// (0x00014f74) popup_call4_audio_first_window_ParamLimits

0x552a,	// (0x00014f74) popup_call4_audio_first_window

0x557c,	// (0x00014fc6) popup_call4_audio_second_window_ParamLimits

0x557c,	// (0x00014fc6) popup_call4_audio_second_window

0x5595,	// (0x00014fdf) popup_call4_audio_wait_window_ParamLimits

0x5595,	// (0x00014fdf) popup_call4_audio_wait_window

0x55a3,	// (0x00014fed) cell_call4_button_pane_ParamLimits

0x55a3,	// (0x00014fed) cell_call4_button_pane

0x55ca,	// (0x00015014) bg_button_pane_cp09_ParamLimits

0x55ca,	// (0x00015014) bg_button_pane_cp09

0x55d6,	// (0x00015020) cell_call4_button_pane_g1_ParamLimits

0x55d6,	// (0x00015020) cell_call4_button_pane_g1

0x55fc,	// (0x00015046) cell_call4_button_pane_t1_ParamLimits

0x55fc,	// (0x00015046) cell_call4_button_pane_t1

0xd11b,	// (0x0001cb65) popup_call4_audio_conf_window_ParamLimits

0xd11b,	// (0x0001cb65) popup_call4_audio_conf_window

0x478b,	// (0x000141d5) mup3_progress_pane_t1_ParamLimits

0x47aa,	// (0x000141f4) mup3_progress_pane_t2_ParamLimits

0xc7c8,	// (0x0001c212) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0001f1cb) mup3_progress_pane_t_ParamLimits

0xc7e5,	// (0x0001c22f) mup_progress_pane_cp03_ParamLimits

0x4d93,	// (0x000147dd) mup3_control_keys_pane_g4_copy1

0xd006,	// (0x0001ca50) mp4_rocker2_pane_ParamLimits

0xd006,	// (0x0001ca50) mp4_rocker2_pane

0xd135,	// (0x0001cb7f) mp4_rocker2_pane_g1

0xd13d,	// (0x0001cb87) mp4_rocker2_pane_g2

0xd145,	// (0x0001cb8f) mp4_rocker2_pane_g3

0xd14d,	// (0x0001cb97) mp4_rocker2_pane_g4

0xd155,	// (0x0001cb9f) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0001f304) mp4_rocker2_pane_g

0x95ee,	// (0x00019038) main_camera4_pane

0x95ee,	// (0x00019038) main_video4_pane

0x5008,	// (0x00014a52) main_video_tele_dialer_pane_t1_ParamLimits

0x5008,	// (0x00014a52) main_video_tele_dialer_pane_t1

0x5021,	// (0x00014a6b) main_video_tele_dialer_pane_t2_ParamLimits

0x5021,	// (0x00014a6b) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0001f2ba) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0001f2ba) main_video_tele_dialer_pane_t

0x563a,	// (0x00015084) cam4_autofocus_pane_ParamLimits

0x563a,	// (0x00015084) cam4_autofocus_pane

0x5650,	// (0x0001509a) cam4_image_uncrop_pane_ParamLimits

0x5650,	// (0x0001509a) cam4_image_uncrop_pane

0x5669,	// (0x000150b3) cam4_indicators_pane_ParamLimits

0x5669,	// (0x000150b3) cam4_indicators_pane

0x5699,	// (0x000150e3) main_camera4_pane_g1_ParamLimits

0x5699,	// (0x000150e3) main_camera4_pane_g1

0x56ab,	// (0x000150f5) main_camera4_pane_g2_ParamLimits

0x56ab,	// (0x000150f5) main_camera4_pane_g2

0x56be,	// (0x00015108) main_camera4_pane_g3_ParamLimits

0x56be,	// (0x00015108) main_camera4_pane_g3

0x56d1,	// (0x0001511b) main_camera4_pane_g4_ParamLimits

0x56d1,	// (0x0001511b) main_camera4_pane_g4

0x56e4,	// (0x0001512e) main_camera4_pane_g5_ParamLimits

0x56e4,	// (0x0001512e) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0001f30f) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0001f30f) main_camera4_pane_g

0x5708,	// (0x00015152) main_camera4_pane_t1_ParamLimits

0x5708,	// (0x00015152) main_camera4_pane_t1

0xc741,	// (0x0001c18b) bg_tb_trans_pane_cp06

0xd183,	// (0x0001cbcd) cam4_indicators_pane_g1

0xd194,	// (0x0001cbde) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0001f32a) cam4_indicators_pane_g

0xd1ac,	// (0x0001cbf6) cam4_indicators_pane_t1

0x576c,	// (0x000151b6) main_video4_pane_g1_ParamLimits

0x576c,	// (0x000151b6) main_video4_pane_g1

0x577b,	// (0x000151c5) main_video4_pane_g2_ParamLimits

0x577b,	// (0x000151c5) main_video4_pane_g2

0x578a,	// (0x000151d4) main_video4_pane_g3_ParamLimits

0x578a,	// (0x000151d4) main_video4_pane_g3

0x5799,	// (0x000151e3) main_video4_pane_g4_ParamLimits

0x5799,	// (0x000151e3) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0001f331) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0001f331) main_video4_pane_g

0x57b7,	// (0x00015201) vid4_indicators_pane_ParamLimits

0x57b7,	// (0x00015201) vid4_indicators_pane

0x57e5,	// (0x0001522f) video4_image_uncrop_cif_pane_ParamLimits

0x57e5,	// (0x0001522f) video4_image_uncrop_cif_pane

0x57ff,	// (0x00015249) video4_image_uncrop_nhd_pane_ParamLimits

0x57ff,	// (0x00015249) video4_image_uncrop_nhd_pane

0x5650,	// (0x0001509a) video4_image_uncrop_vga_pane_ParamLimits

0x5650,	// (0x0001509a) video4_image_uncrop_vga_pane

0x9663,	// (0x000190ad) bg_tb_trans_pane_cp07

0xd1da,	// (0x0001cc24) vid4_indicators_pane_g1

0xd1f0,	// (0x0001cc3a) vid4_indicators_pane_g2

0xd204,	// (0x0001cc4e) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0001f33c) vid4_indicators_pane_g

0xd235,	// (0x0001cc7f) vid4_indicators_pane_t1

0x5815,	// (0x0001525f) cam4_autofocus_pane_g1

0x581d,	// (0x00015267) cam4_autofocus_pane_g2

0x5825,	// (0x0001526f) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0001f347) cam4_autofocus_pane_g

0x582d,	// (0x00015277) cam4_autofocus_pane_g3_copy1

0x5050,	// (0x00014a9a) video_down_pane_cp_t1

0x505e,	// (0x00014aa8) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0001f2bf) video_down_pane_cp_t

0x9663,	// (0x000190ad) popup_vitu2_window_ParamLimits

0x9663,	// (0x000190ad) popup_vitu2_window

0x5835,	// (0x0001527f) aid_size_cell2_itu2_ParamLimits

0x5835,	// (0x0001527f) aid_size_cell2_itu2

0x585b,	// (0x000152a5) aid_size_cell_itu2_ParamLimits

0x585b,	// (0x000152a5) aid_size_cell_itu2

0x58bb,	// (0x00015305) bg_popup_window_pane_cp09_ParamLimits

0x58bb,	// (0x00015305) bg_popup_window_pane_cp09

0x58c9,	// (0x00015313) field_vitu2_entry_pane_ParamLimits

0x58c9,	// (0x00015313) field_vitu2_entry_pane

0x58f1,	// (0x0001533b) grid_vitu2_function_pane_ParamLimits

0x58f1,	// (0x0001533b) grid_vitu2_function_pane

0x5942,	// (0x0001538c) grid_vitu2_itu_pane_ParamLimits

0x5942,	// (0x0001538c) grid_vitu2_itu_pane

0x59d2,	// (0x0001541c) cell_vitu2_itu_pane_ParamLimits

0x59d2,	// (0x0001541c) cell_vitu2_itu_pane

0x59ff,	// (0x00015449) cell_vitu2_function_pane_ParamLimits

0x59ff,	// (0x00015449) cell_vitu2_function_pane

0xd24c,	// (0x0001cc96) bg_popup_call_pane_cp08_ParamLimits

0xd24c,	// (0x0001cc96) bg_popup_call_pane_cp08

0xd263,	// (0x0001ccad) field_vitu2_entry_pane_g1

0xd26f,	// (0x0001ccb9) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0001f34e) field_vitu2_entry_pane_g

0x5a43,	// (0x0001548d) field_vitu2_entry_pane_t1_ParamLimits

0x5a43,	// (0x0001548d) field_vitu2_entry_pane_t1

0xd289,	// (0x0001ccd3) field_vitu2_entry_pane_t2_ParamLimits

0xd289,	// (0x0001ccd3) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0001f355) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0001f355) field_vitu2_entry_pane_t

0x5a71,	// (0x000154bb) bg_button_pane_cp010_ParamLimits

0x5a71,	// (0x000154bb) bg_button_pane_cp010

0xd2ae,	// (0x0001ccf8) cell_vitu2_itu_pane_g1

0x5a8d,	// (0x000154d7) cell_vitu2_itu_pane_t1_ParamLimits

0x5a8d,	// (0x000154d7) cell_vitu2_itu_pane_t1

0x5aeb,	// (0x00015535) cell_vitu2_itu_pane_t2_ParamLimits

0x5aeb,	// (0x00015535) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0001f35f) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0001f35f) cell_vitu2_itu_pane_t

0x9663,	// (0x000190ad) bg_button_pane_cp011

0x5bd7,	// (0x00015621) cell_vitu2_function_pane_g1

0x95ee,	// (0x00019038) main_myfav_hc_pane

0x541c,	// (0x00014e66) popup_image3_note_pane_ParamLimits

0x541c,	// (0x00014e66) popup_image3_note_pane

0x5438,	// (0x00014e82) popup_image3_tool_bar_pane_ParamLimits

0x5438,	// (0x00014e82) popup_image3_tool_bar_pane

0x5b79,	// (0x000155c3) cell_vitu2_itu_pane_t3_ParamLimits

0x5b79,	// (0x000155c3) cell_vitu2_itu_pane_t3

0x95ee,	// (0x00019038) bg_popup_trans_pane

0xd2c0,	// (0x0001cd0a) grid_image3_tool_bar_pane

0xd2ca,	// (0x0001cd14) bg_popup_trans_pane_g1

0xa294,	// (0x00019cde) bg_popup_trans_pane_g2

0xd2d2,	// (0x0001cd1c) bg_popup_trans_pane_g3

0xd2da,	// (0x0001cd24) bg_popup_trans_pane_g4

0xd2e2,	// (0x0001cd2c) bg_popup_trans_pane_g5

0xd2ea,	// (0x0001cd34) bg_popup_trans_pane_g6

0xd2f2,	// (0x0001cd3c) bg_popup_trans_pane_g7

0xd2fa,	// (0x0001cd44) bg_popup_trans_pane_g8

0xa274,	// (0x00019cbe) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0001f366) bg_popup_trans_pane_g

0xd302,	// (0x0001cd4c) cell_image3_tool_bar_pane_ParamLimits

0xd302,	// (0x0001cd4c) cell_image3_tool_bar_pane

0xc51a,	// (0x0001bf64) cell_image3_tool_bar_pane_g1

0x95ee,	// (0x00019038) bg_popup_trans_pane_cp1

0xd318,	// (0x0001cd62) popup_image3_note_pane_t1

0xd326,	// (0x0001cd70) popup_image3_note_pane_t2

0xd334,	// (0x0001cd7e) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0001f379) popup_image3_note_pane_t

0xd344,	// (0x0001cd8e) popup_image3_note_pane_t3_copy1

0x5beb,	// (0x00015635) bg_myfav_hc_instruction_pane_ParamLimits

0x5beb,	// (0x00015635) bg_myfav_hc_instruction_pane

0x5c03,	// (0x0001564d) cell_myfav_contact_pane_ParamLimits

0x5c03,	// (0x0001564d) cell_myfav_contact_pane

0x5c1f,	// (0x00015669) cell_myfav_contact_pane_cp1_ParamLimits

0x5c1f,	// (0x00015669) cell_myfav_contact_pane_cp1

0x5c37,	// (0x00015681) cell_myfav_contact_pane_cp2_ParamLimits

0x5c37,	// (0x00015681) cell_myfav_contact_pane_cp2

0x5c4f,	// (0x00015699) cell_myfav_contact_pane_cp3_ParamLimits

0x5c4f,	// (0x00015699) cell_myfav_contact_pane_cp3

0x5c66,	// (0x000156b0) cell_myfav_contact_pane_cp4_ParamLimits

0x5c66,	// (0x000156b0) cell_myfav_contact_pane_cp4

0x5c7e,	// (0x000156c8) cell_myfav_contact_pane_cp5_ParamLimits

0x5c7e,	// (0x000156c8) cell_myfav_contact_pane_cp5

0x5c92,	// (0x000156dc) cell_myfav_contact_pane_cp6_ParamLimits

0x5c92,	// (0x000156dc) cell_myfav_contact_pane_cp6

0x5ca8,	// (0x000156f2) cell_myfav_contact_pane_cp7_ParamLimits

0x5ca8,	// (0x000156f2) cell_myfav_contact_pane_cp7

0xd352,	// (0x0001cd9c) listscroll_gen_pane_cp05

0x5cc0,	// (0x0001570a) main_myfav_hc_pane_g1_ParamLimits

0x5cc0,	// (0x0001570a) main_myfav_hc_pane_g1

0x5cda,	// (0x00015724) main_myfav_hc_pane_g2_ParamLimits

0x5cda,	// (0x00015724) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0001f380) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0001f380) main_myfav_hc_pane_g

0x5d0e,	// (0x00015758) main_myfav_hc_pane_t1_ParamLimits

0x5d0e,	// (0x00015758) main_myfav_hc_pane_t1

0xd35b,	// (0x0001cda5) main_myfav_hc_pane_t2_ParamLimits

0xd35b,	// (0x0001cda5) main_myfav_hc_pane_t2

0xd36d,	// (0x0001cdb7) main_myfav_hc_pane_t3_ParamLimits

0xd36d,	// (0x0001cdb7) main_myfav_hc_pane_t3

0x5d25,	// (0x0001576f) main_myfav_hc_pane_t4_ParamLimits

0x5d25,	// (0x0001576f) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0001f387) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0001f387) main_myfav_hc_pane_t

0xc51a,	// (0x0001bf64) bg_myfav_hc_instruction_pane_g1

0xd37f,	// (0x0001cdc9) cell_myfav_contact_pane_g1_ParamLimits

0xd37f,	// (0x0001cdc9) cell_myfav_contact_pane_g1

0xd37f,	// (0x0001cdc9) cell_myfav_contact_pane_g2_ParamLimits

0xd37f,	// (0x0001cdc9) cell_myfav_contact_pane_g2

0xd38b,	// (0x0001cdd5) cell_myfav_contact_pane_g3_ParamLimits

0xd38b,	// (0x0001cdd5) cell_myfav_contact_pane_g3

0xc7b2,	// (0x0001c1fc) cell_myfav_contact_pane_g4_ParamLimits

0xc7b2,	// (0x0001c1fc) cell_myfav_contact_pane_g4

0xd398,	// (0x0001cde2) cell_myfav_contact_pane_g5_ParamLimits

0xd398,	// (0x0001cde2) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0001f392) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0001f392) cell_myfav_contact_pane_g

0x5cf4,	// (0x0001573e) main_myfav_hc_pane_g3_ParamLimits

0x5cf4,	// (0x0001573e) main_myfav_hc_pane_g3

0xfc2a,	// (0x0000f674) popup_adpt_find_window

0x5d4f,	// (0x00015799) afind_page_pane_ParamLimits

0x5d4f,	// (0x00015799) afind_page_pane

0x5d64,	// (0x000157ae) aid_size_cell_afind_ParamLimits

0x5d64,	// (0x000157ae) aid_size_cell_afind

0x5d82,	// (0x000157cc) bg_popup_sub_pane_cp09_ParamLimits

0x5d82,	// (0x000157cc) bg_popup_sub_pane_cp09

0x5d8f,	// (0x000157d9) find_pane_cp01_ParamLimits

0x5d8f,	// (0x000157d9) find_pane_cp01

0xd3a4,	// (0x0001cdee) grid_afind_control_pane_ParamLimits

0xd3a4,	// (0x0001cdee) grid_afind_control_pane

0x5d9c,	// (0x000157e6) grid_afind_pane_ParamLimits

0x5d9c,	// (0x000157e6) grid_afind_pane

0x5dbe,	// (0x00015808) cell_afind_pane_ParamLimits

0x5dbe,	// (0x00015808) cell_afind_pane

0xc51a,	// (0x0001bf64) afind_page_pane_g1

0x5e2b,	// (0x00015875) afind_page_pane_g2

0x5e34,	// (0x0001587e) afind_page_pane_g3

0x0002,

0xf953,	// (0x0001f39d) afind_page_pane_g

0x5e3d,	// (0x00015887) afind_page_pane_t1

0xd3b8,	// (0x0001ce02) cell_afind_grid_control_pane_ParamLimits

0xd3b8,	// (0x0001ce02) cell_afind_grid_control_pane

0xd0a1,	// (0x0001caeb) bg_button_pane_cp69_ParamLimits

0xd0a1,	// (0x0001caeb) bg_button_pane_cp69

0x5e5d,	// (0x000158a7) cell_afind_pane_g1_ParamLimits

0x5e5d,	// (0x000158a7) cell_afind_pane_g1

0x5e6a,	// (0x000158b4) cell_afind_pane_t1_ParamLimits

0x5e6a,	// (0x000158b4) cell_afind_pane_t1

0xa089,	// (0x00019ad3) bg_button_pane_cp72

0xd3c7,	// (0x0001ce11) cell_afind_grid_control_pane_g1

0x2bf2,	// (0x0001263c) aid_image_placing_area_ParamLimits

0x2bf2,	// (0x0001263c) aid_image_placing_area

0xcaeb,	// (0x0001c535) field_vitu_entry_pane_g1_ParamLimits

0xcaeb,	// (0x0001c535) field_vitu_entry_pane_g1

0xcaf7,	// (0x0001c541) field_vitu_entry_pane_g2_ParamLimits

0xcaf7,	// (0x0001c541) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0001f24a) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0001f24a) field_vitu_entry_pane_g

0x4e62,	// (0x000148ac) cell_vitu_itu_pane_g1_ParamLimits

0x4ea4,	// (0x000148ee) cell_vitu_itu_pane_t3_ParamLimits

0x4ea4,	// (0x000148ee) cell_vitu_itu_pane_t3

0xd04a,	// (0x0001ca94) mp4_progress_pane_t1_ParamLimits

0xd063,	// (0x0001caad) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0001f2e3) mp4_progress_pane_t_ParamLimits

0xd07c,	// (0x0001cac6) mup_progress_pane_cp04_ParamLimits

0x5d39,	// (0x00015783) main_myfav_hc_pane_t5_ParamLimits

0x5d39,	// (0x00015783) main_myfav_hc_pane_t5

0x9614,	// (0x0001905e) aid_zoom_text_primary

0xfc2a,	// (0x0000f674) popup_adpt_find_window_ParamLimits

0x9663,	// (0x000190ad) main_cam_set_pane

0x5682,	// (0x000150cc) cam4_zoom_pane_ParamLimits

0x5682,	// (0x000150cc) cam4_zoom_pane

0x5e7c,	// (0x000158c6) main_cam_set_pane_g1_ParamLimits

0x5e7c,	// (0x000158c6) main_cam_set_pane_g1

0x5e8a,	// (0x000158d4) main_cam_set_pane_g2_ParamLimits

0x5e8a,	// (0x000158d4) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0001f3a4) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0001f3a4) main_cam_set_pane_g

0x5eab,	// (0x000158f5) main_cam_set_pane_t1_ParamLimits

0x5eab,	// (0x000158f5) main_cam_set_pane_t1

0x5ec6,	// (0x00015910) main_cset_listscroll_pane_ParamLimits

0x5ec6,	// (0x00015910) main_cset_listscroll_pane

0x5eea,	// (0x00015934) main_cset_slider_pane_ParamLimits

0x5eea,	// (0x00015934) main_cset_slider_pane

0xd3d8,	// (0x0001ce22) main_cset_list_pane_ParamLimits

0xd3d8,	// (0x0001ce22) main_cset_list_pane

0xd3e8,	// (0x0001ce32) scroll_pane_cp028

0x5f14,	// (0x0001595e) aid_area_touch_slider

0x5f30,	// (0x0001597a) cset_slider_pane

0x5f5a,	// (0x000159a4) main_cset_slider_pane_g1

0x5f6f,	// (0x000159b9) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0001f3a9) main_cset_slider_pane_g

0xd421,	// (0x0001ce6b) main_cset_slider_pane_t1

0x6031,	// (0x00015a7b) main_cset_slider_pane_t2

0x604b,	// (0x00015a95) main_cset_slider_pane_t3

0x6065,	// (0x00015aaf) main_cset_slider_pane_t4

0x607f,	// (0x00015ac9) main_cset_slider_pane_t5

0x609d,	// (0x00015ae7) main_cset_slider_pane_t6

0x60b4,	// (0x00015afe) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0001f3ce) main_cset_slider_pane_t

0x61c0,	// (0x00015c0a) cset_list_set_pane_ParamLimits

0x61c0,	// (0x00015c0a) cset_list_set_pane

0x61d4,	// (0x00015c1e) aid_position_infowindow_above

0x61dc,	// (0x00015c26) aid_position_infowindow_below

0x61e4,	// (0x00015c2e) cset_list_set_pane_g1_ParamLimits

0x61e4,	// (0x00015c2e) cset_list_set_pane_g1

0x61f0,	// (0x00015c3a) cset_list_set_pane_g3_ParamLimits

0x61f0,	// (0x00015c3a) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0001f3ed) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0001f3ed) cset_list_set_pane_g

0x61ff,	// (0x00015c49) cset_list_set_pane_t1_ParamLimits

0x61ff,	// (0x00015c49) cset_list_set_pane_t1

0x9663,	// (0x000190ad) list_highlight_pane_cp021_ParamLimits

0x9663,	// (0x000190ad) list_highlight_pane_cp021

0xac65,	// (0x0001a6af) cset_slider_pane_g1

0xac77,	// (0x0001a6c1) cset_slider_pane_g2

0xac6e,	// (0x0001a6b8) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0001f3f2) cset_slider_pane_g

0xd4c1,	// (0x0001cf0b) aid_area_touch_cam4_zoom

0x6214,	// (0x00015c5e) cam4_zoom_cont_pane

0x621c,	// (0x00015c66) cam4_zoom_pane_g1

0x6224,	// (0x00015c6e) cam4_zoom_pane_g2

0x622c,	// (0x00015c76) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0001f3f9) cam4_zoom_pane_g

0xd4ca,	// (0x0001cf14) cam4_zoom_cont_pane_g1

0xd4d3,	// (0x0001cf1d) cam4_zoom_cont_pane_g2

0xd4dc,	// (0x0001cf26) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0001f400) cam4_zoom_cont_pane_g

0x54a4,	// (0x00014eee) call4_image_pane_ParamLimits

0x54a4,	// (0x00014eee) call4_image_pane

0x550f,	// (0x00014f59) call4_windows_conf_pane_ParamLimits

0x555a,	// (0x00014fa4) popup_call4_audio_in_window_ParamLimits

0x555a,	// (0x00014fa4) popup_call4_audio_in_window

0x95ee,	// (0x00019038) bg_popup_call2_act_pane_cp02

0xd113,	// (0x0001cb5d) call4_list_conf_pane

0xc51a,	// (0x0001bf64) call4_image_pane_g1

0xc51a,	// (0x0001bf64) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0001f10b) call4_image_pane_g

0xd4e5,	// (0x0001cf2f) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4e5,	// (0x0001cf2f) list_single_graphic_popup_conf4_pane

0x95ee,	// (0x00019038) list_highlight_pane_cp022

0xd4fa,	// (0x0001cf44) list_single_graphic_popup_conf4_pane_g1

0xa84b,	// (0x0001a295) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0001f407) list_single_graphic_popup_conf4_pane_g

0xd502,	// (0x0001cf4c) list_single_graphic_popup_conf4_pane_t1

0x0db8,	// (0x00010802) popup_vtel_slider_window_ParamLimits

0x0db8,	// (0x00010802) popup_vtel_slider_window

0xd08f,	// (0x0001cad9) dialer2_ne_pane_t2_ParamLimits

0xd08f,	// (0x0001cad9) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0001f2e8) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0001f2e8) dialer2_ne_pane_t

0xc2f9,	// (0x0001bd43) bg_popup_sub_pane_cp010_ParamLimits

0xc2f9,	// (0x0001bd43) bg_popup_sub_pane_cp010

0x6235,	// (0x00015c7f) popup_vtel_slider_window_g1_ParamLimits

0x6235,	// (0x00015c7f) popup_vtel_slider_window_g1

0x6248,	// (0x00015c92) popup_vtel_slider_window_g2_ParamLimits

0x6248,	// (0x00015c92) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0001f40c) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0001f40c) popup_vtel_slider_window_g

0x629e,	// (0x00015ce8) vtel_slider_pane_ParamLimits

0x629e,	// (0x00015ce8) vtel_slider_pane

0x62c0,	// (0x00015d0a) vtel_slider_pane_g1_ParamLimits

0x62c0,	// (0x00015d0a) vtel_slider_pane_g1

0x62d4,	// (0x00015d1e) vtel_slider_pane_g2_ParamLimits

0x62d4,	// (0x00015d1e) vtel_slider_pane_g2

0x62ec,	// (0x00015d36) vtel_slider_pane_g3_ParamLimits

0x62ec,	// (0x00015d36) vtel_slider_pane_g3

0x62c0,	// (0x00015d0a) vtel_slider_pane_g4_ParamLimits

0x62c0,	// (0x00015d0a) vtel_slider_pane_g4

0x6302,	// (0x00015d4c) vtel_slider_pane_g5_ParamLimits

0x6302,	// (0x00015d4c) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0001f415) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0001f415) vtel_slider_pane_g

0x9663,	// (0x000190ad) main_gallery2_pane

0x5887,	// (0x000152d1) aid_size_row_itut2_dropdow_list_ParamLimits

0x5887,	// (0x000152d1) aid_size_row_itut2_dropdow_list

0x5919,	// (0x00015363) grid_vitu2_function_top_pane_ParamLimits

0x5919,	// (0x00015363) grid_vitu2_function_top_pane

0x597d,	// (0x000153c7) popup_vitu2_dropdown_list_window_ParamLimits

0x597d,	// (0x000153c7) popup_vitu2_dropdown_list_window

0x59a6,	// (0x000153f0) popup_vitu2_match_list_window

0x6326,	// (0x00015d70) cell_vitu2_function_top_pane_ParamLimits

0x6326,	// (0x00015d70) cell_vitu2_function_top_pane

0x6348,	// (0x00015d92) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6348,	// (0x00015d92) cell_vitu2_function_top_pane_cp01

0x6364,	// (0x00015dae) cell_vitu2_function_top_wide_pane_ParamLimits

0x6364,	// (0x00015dae) cell_vitu2_function_top_wide_pane

0x9663,	// (0x000190ad) bg_button_pane_cp012

0x6380,	// (0x00015dca) cell_vitu2_function_top_pane_g1

0xd518,	// (0x0001cf62) bg_button_pane_cp013_ParamLimits

0xd518,	// (0x0001cf62) bg_button_pane_cp013

0x6394,	// (0x00015dde) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6394,	// (0x00015dde) cell_vitu2_function_top_wide_pane_g1

0x9663,	// (0x000190ad) bg_popup_sub_pane_cp20

0x63ac,	// (0x00015df6) list_vitu2_match_list_pane

0xd2ca,	// (0x0001cd14) bg_popup_sub_pane_cp20_g1

0xd2d2,	// (0x0001cd1c) bg_popup_sub_pane_cp20_g2

0xa294,	// (0x00019cde) bg_popup_sub_pane_cp20_g3

0xd2da,	// (0x0001cd24) bg_popup_sub_pane_cp20_g4

0xa274,	// (0x00019cbe) bg_popup_sub_pane_cp20_g5

0xd534,	// (0x0001cf7e) bg_popup_sub_pane_cp20_g6

0xd2ea,	// (0x0001cd34) bg_popup_sub_pane_cp20_g7

0xd2f2,	// (0x0001cd3c) bg_popup_sub_pane_cp20_g8

0xd2fa,	// (0x0001cd44) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0001f420) bg_popup_sub_pane_cp20_g

0xd53c,	// (0x0001cf86) list_vitu2_match_list_item_pane_ParamLimits

0xd53c,	// (0x0001cf86) list_vitu2_match_list_item_pane

0xd54e,	// (0x0001cf98) list_vitu2_match_list_item_pane_t1

0x95ee,	// (0x00019038) bg_popup_sub_pane_cp21

0xa705,	// (0x0001a14f) grid_vitu2_dropdown_list_pane

0x6416,	// (0x00015e60) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6416,	// (0x00015e60) cell_vitu2_dropdown_list_char_pane

0x6439,	// (0x00015e83) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6439,	// (0x00015e83) cell_vitu2_dropdown_list_ctrl_pane

0xd55c,	// (0x0001cfa6) cell_vitu2_dropdown_list_char_pane_g1

0xd565,	// (0x0001cfaf) cell_vitu2_dropdown_list_char_pane_g2

0xd56e,	// (0x0001cfb8) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0001f43d) cell_vitu2_dropdown_list_char_pane_g

0x6467,	// (0x00015eb1) cell_vitu2_dropdown_list_char_pane_t1

0x6475,	// (0x00015ebf) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6475,	// (0x00015ebf) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6485,	// (0x00015ecf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6485,	// (0x00015ecf) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6496,	// (0x00015ee0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6496,	// (0x00015ee0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x64a6,	// (0x00015ef0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x64a6,	// (0x00015ef0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc741,	// (0x0001c18b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc741,	// (0x0001c18b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0001f444) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0001f444) cell_vitu2_dropdown_list_ctrl_pane_g

0x64c2,	// (0x00015f0c) aid_size_cell_gallery2_ParamLimits

0x64c2,	// (0x00015f0c) aid_size_cell_gallery2

0x64e0,	// (0x00015f2a) grid_gallery2_pane_ParamLimits

0x64e0,	// (0x00015f2a) grid_gallery2_pane

0x64fa,	// (0x00015f44) scroll_pane_cp029_ParamLimits

0x64fa,	// (0x00015f44) scroll_pane_cp029

0x650b,	// (0x00015f55) cell_gallery2_pane_ParamLimits

0x650b,	// (0x00015f55) cell_gallery2_pane

0xd577,	// (0x0001cfc1) cell_gallery2_pane_g2

0x656f,	// (0x00015fb9) cell_gallery2_pane_g3

0xd57f,	// (0x0001cfc9) cell_gallery2_pane_g4

0xd587,	// (0x0001cfd1) cell_gallery2_pane_g5

0xa018,	// (0x00019a62) grid_highlight_pane_cp10

0x59a6,	// (0x000153f0) popup_vitu2_match_list_window_ParamLimits

0x59bd,	// (0x00015407) popup_vitu2_query_window_ParamLimits

0x59bd,	// (0x00015407) popup_vitu2_query_window

0x95ee,	// (0x00019038) bg_vitu2_candi_button_pane

0xd55c,	// (0x0001cfa6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd565,	// (0x0001cfaf) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd56e,	// (0x0001cfb8) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6577,	// (0x00015fc1) bg_button_pane_cp015

0x658b,	// (0x00015fd5) bg_button_pane_cp016

0x659e,	// (0x00015fe8) bg_button_pane_cp017

0xbfd0,	// (0x0001ba1a) bg_popup_sub_pane_cp22

0xd58f,	// (0x0001cfd9) popup_vitu2_query_window_g1

0x65e3,	// (0x0001602d) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0001f44f) popup_vitu2_query_window_g

0x6602,	// (0x0001604c) popup_vitu2_query_window_t1_ParamLimits

0x6602,	// (0x0001604c) popup_vitu2_query_window_t1

0x6637,	// (0x00016081) popup_vitu2_query_window_t2_ParamLimits

0x6637,	// (0x00016081) popup_vitu2_query_window_t2

0x6649,	// (0x00016093) popup_vitu2_query_window_t3_ParamLimits

0x6649,	// (0x00016093) popup_vitu2_query_window_t3

0x6671,	// (0x000160bb) popup_vitu2_query_window_t4_ParamLimits

0x6671,	// (0x000160bb) popup_vitu2_query_window_t4

0x6692,	// (0x000160dc) popup_vitu2_query_window_t5_ParamLimits

0x6692,	// (0x000160dc) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0001f456) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0001f456) popup_vitu2_query_window_t

0xd3d0,	// (0x0001ce1a) main_cset_text_pane

0x5f14,	// (0x0001595e) aid_area_touch_slider_ParamLimits

0x5f30,	// (0x0001597a) cset_slider_pane_ParamLimits

0x5f5a,	// (0x000159a4) main_cset_slider_pane_g1_ParamLimits

0x5f6f,	// (0x000159b9) main_cset_slider_pane_g2_ParamLimits

0xd3f1,	// (0x0001ce3b) main_cset_slider_pane_g3_ParamLimits

0xd3f1,	// (0x0001ce3b) main_cset_slider_pane_g3

0x5f84,	// (0x000159ce) main_cset_slider_pane_g4_ParamLimits

0x5f84,	// (0x000159ce) main_cset_slider_pane_g4

0x5f93,	// (0x000159dd) main_cset_slider_pane_g5_ParamLimits

0x5f93,	// (0x000159dd) main_cset_slider_pane_g5

0x5fa1,	// (0x000159eb) main_cset_slider_pane_g6_ParamLimits

0x5fa1,	// (0x000159eb) main_cset_slider_pane_g6

0xf95f,	// (0x0001f3a9) main_cset_slider_pane_g_ParamLimits

0xd421,	// (0x0001ce6b) main_cset_slider_pane_t1_ParamLimits

0x6031,	// (0x00015a7b) main_cset_slider_pane_t2_ParamLimits

0x604b,	// (0x00015a95) main_cset_slider_pane_t3_ParamLimits

0x6065,	// (0x00015aaf) main_cset_slider_pane_t4_ParamLimits

0x607f,	// (0x00015ac9) main_cset_slider_pane_t5_ParamLimits

0x609d,	// (0x00015ae7) main_cset_slider_pane_t6_ParamLimits

0x60b4,	// (0x00015afe) main_cset_slider_pane_t7_ParamLimits

0x60e2,	// (0x00015b2c) main_cset_slider_pane_t8_ParamLimits

0x60e2,	// (0x00015b2c) main_cset_slider_pane_t8

0x610a,	// (0x00015b54) main_cset_slider_pane_t9_ParamLimits

0x610a,	// (0x00015b54) main_cset_slider_pane_t9

0x6132,	// (0x00015b7c) main_cset_slider_pane_t10_ParamLimits

0x6132,	// (0x00015b7c) main_cset_slider_pane_t10

0x615a,	// (0x00015ba4) main_cset_slider_pane_t11_ParamLimits

0x615a,	// (0x00015ba4) main_cset_slider_pane_t11

0x6184,	// (0x00015bce) main_cset_slider_pane_t12_ParamLimits

0x6184,	// (0x00015bce) main_cset_slider_pane_t12

0x61a1,	// (0x00015beb) main_cset_slider_pane_t13_ParamLimits

0x61a1,	// (0x00015beb) main_cset_slider_pane_t13

0xf984,	// (0x0001f3ce) main_cset_slider_pane_t_ParamLimits

0x95ee,	// (0x00019038) bg_popup_sub_pane_cp011

0xd5fe,	// (0x0001d048) main_cset_text_pane_g1

0xd606,	// (0x0001d050) main_cset_text_pane_t1

0xd614,	// (0x0001d05e) main_cset_text_pane_t2

0xd622,	// (0x0001d06c) main_cset_text_pane_t3

0xd630,	// (0x0001d07a) main_cset_text_pane_t4

0xd63e,	// (0x0001d088) main_cset_text_pane_t5

0xd64c,	// (0x0001d096) main_cset_text_pane_t6

0xd65a,	// (0x0001d0a4) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0001f465) main_cset_text_pane_t

0x95ee,	// (0x00019038) main_cam4_burst_pane

0x95ee,	// (0x00019038) main_cam5_pane

0x5e4b,	// (0x00015895) bg_button_pane_cp019

0x5e54,	// (0x0001589e) bg_button_pane_cp020

0xd3fd,	// (0x0001ce47) main_cset_slider_pane_g7_ParamLimits

0xd3fd,	// (0x0001ce47) main_cset_slider_pane_g7

0xd409,	// (0x0001ce53) main_cset_slider_pane_g8_ParamLimits

0xd409,	// (0x0001ce53) main_cset_slider_pane_g8

0x5fb5,	// (0x000159ff) main_cset_slider_pane_g9_ParamLimits

0x5fb5,	// (0x000159ff) main_cset_slider_pane_g9

0x5fc1,	// (0x00015a0b) main_cset_slider_pane_g10_ParamLimits

0x5fc1,	// (0x00015a0b) main_cset_slider_pane_g10

0x5fcd,	// (0x00015a17) main_cset_slider_pane_g11_ParamLimits

0x5fcd,	// (0x00015a17) main_cset_slider_pane_g11

0x5fd9,	// (0x00015a23) main_cset_slider_pane_g12_ParamLimits

0x5fd9,	// (0x00015a23) main_cset_slider_pane_g12

0x5fe5,	// (0x00015a2f) main_cset_slider_pane_g13_ParamLimits

0x5fe5,	// (0x00015a2f) main_cset_slider_pane_g13

0x5ff1,	// (0x00015a3b) main_cset_slider_pane_g14_ParamLimits

0x5ff1,	// (0x00015a3b) main_cset_slider_pane_g14

0x5ffd,	// (0x00015a47) main_cset_slider_pane_g15_ParamLimits

0x5ffd,	// (0x00015a47) main_cset_slider_pane_g15

0xd44f,	// (0x0001ce99) main_cset_slider_pane_t14_ParamLimits

0xd44f,	// (0x0001ce99) main_cset_slider_pane_t14

0xd488,	// (0x0001ced2) main_cset_slider_pane_t15_ParamLimits

0xd488,	// (0x0001ced2) main_cset_slider_pane_t15

0x6709,	// (0x00016153) aid_cam4_burst_size_cell_ParamLimits

0x6709,	// (0x00016153) aid_cam4_burst_size_cell

0x6729,	// (0x00016173) grid_cam4_burst_pane_ParamLimits

0x6729,	// (0x00016173) grid_cam4_burst_pane

0x6763,	// (0x000161ad) linegrid_cam4_burst_pane_ParamLimits

0x6763,	// (0x000161ad) linegrid_cam4_burst_pane

0xd668,	// (0x0001d0b2) scroll_pane_cp30_ParamLimits

0xd668,	// (0x0001d0b2) scroll_pane_cp30

0x6785,	// (0x000161cf) cell_cam4_burst_pane_ParamLimits

0x6785,	// (0x000161cf) cell_cam4_burst_pane

0xd674,	// (0x0001d0be) linegrid_cam4_burst_pane_g1_ParamLimits

0xd674,	// (0x0001d0be) linegrid_cam4_burst_pane_g1

0x67da,	// (0x00016224) linegrid_cam4_burst_pane_g2_ParamLimits

0x67da,	// (0x00016224) linegrid_cam4_burst_pane_g2

0xd681,	// (0x0001d0cb) linegrid_cam4_burst_pane_g3_ParamLimits

0xd681,	// (0x0001d0cb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0001f474) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0001f474) linegrid_cam4_burst_pane_g

0x67eb,	// (0x00016235) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x67eb,	// (0x00016235) linegrid_cam4_burst_pane_g3_copy1

0xd68e,	// (0x0001d0d8) linegrid_cam4_burst_pane_g4_ParamLimits

0xd68e,	// (0x0001d0d8) linegrid_cam4_burst_pane_g4

0x6809,	// (0x00016253) linegrid_cam4_burst_pane_g5_ParamLimits

0x6809,	// (0x00016253) linegrid_cam4_burst_pane_g5

0x681a,	// (0x00016264) linegrid_cam4_burst_pane_g6_ParamLimits

0x681a,	// (0x00016264) linegrid_cam4_burst_pane_g6

0xd69b,	// (0x0001d0e5) linegrid_cam4_burst_pane_g7_ParamLimits

0xd69b,	// (0x0001d0e5) linegrid_cam4_burst_pane_g7

0x6831,	// (0x0001627b) cell_cam4_burst_pane_g1

0xd6b4,	// (0x0001d0fe) main_cam5_pane_t1_ParamLimits

0xd6b4,	// (0x0001d0fe) main_cam5_pane_t1

0xd6c6,	// (0x0001d110) main_cam5_pane_t2_ParamLimits

0xd6c6,	// (0x0001d110) main_cam5_pane_t2

0xd6d8,	// (0x0001d122) main_cam5_pane_t3_ParamLimits

0xd6d8,	// (0x0001d122) main_cam5_pane_t3

0xd6ea,	// (0x0001d134) main_cam5_pane_t4_ParamLimits

0xd6ea,	// (0x0001d134) main_cam5_pane_t4

0xd702,	// (0x0001d14c) main_cam5_pane_t5_ParamLimits

0xd702,	// (0x0001d14c) main_cam5_pane_t5

0xd716,	// (0x0001d160) main_cam5_pane_t6_ParamLimits

0xd716,	// (0x0001d160) main_cam5_pane_t6

0xd72a,	// (0x0001d174) main_cam5_pane_t7_ParamLimits

0xd72a,	// (0x0001d174) main_cam5_pane_t7

0xd73c,	// (0x0001d186) main_cam5_pane_t8_ParamLimits

0xd73c,	// (0x0001d186) main_cam5_pane_t8

0xd75a,	// (0x0001d1a4) main_cam5_pane_t9_ParamLimits

0xd75a,	// (0x0001d1a4) main_cam5_pane_t9

0xd76c,	// (0x0001d1b6) main_cam5_pane_t10_ParamLimits

0xd76c,	// (0x0001d1b6) main_cam5_pane_t10

0xd77e,	// (0x0001d1c8) main_cam5_pane_t11_ParamLimits

0xd77e,	// (0x0001d1c8) main_cam5_pane_t11

0xd792,	// (0x0001d1dc) main_cam5_pane_t12_ParamLimits

0xd792,	// (0x0001d1dc) main_cam5_pane_t12

0xd7a9,	// (0x0001d1f3) main_cam5_pane_t13_ParamLimits

0xd7a9,	// (0x0001d1f3) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0001f480) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0001f480) main_cam5_pane_t

0xfcab,	// (0x0000f6f5) popup_scut_keymap_window_ParamLimits

0xfcab,	// (0x0000f6f5) popup_scut_keymap_window

0x6844,	// (0x0001628e) aid_size_cell_brow_shortcut

0xa018,	// (0x00019a62) bg_popup_window_pane_cp010

0x6850,	// (0x0001629a) grid_scut_pane

0x685c,	// (0x000162a6) cell_scut_pane_ParamLimits

0x685c,	// (0x000162a6) cell_scut_pane

0x6875,	// (0x000162bf) cell_scut_pane_g1

0xd7cc,	// (0x0001d216) cell_scut_pane_t1

0xd7db,	// (0x0001d225) cell_scut_pane_t2

0x687e,	// (0x000162c8) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0001f49b) cell_scut_pane_t

0x433a,	// (0x00013d84) main_mup3_pane_g8_ParamLimits

0x433a,	// (0x00013d84) main_mup3_pane_g8

0x58a3,	// (0x000152ed) area_vitu2_query_pane_ParamLimits

0x58a3,	// (0x000152ed) area_vitu2_query_pane

0x65b1,	// (0x00015ffb) input_focus_pane_cp08

0xd7ea,	// (0x0001d234) area_vitu2_query_pane_g1

0x688c,	// (0x000162d6) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0001f4a2) area_vitu2_query_pane_g

0x689d,	// (0x000162e7) area_vitu2_query_pane_t1_ParamLimits

0x689d,	// (0x000162e7) area_vitu2_query_pane_t1

0x68b1,	// (0x000162fb) area_vitu2_query_pane_t2_ParamLimits

0x68b1,	// (0x000162fb) area_vitu2_query_pane_t2

0x68c5,	// (0x0001630f) area_vitu2_query_pane_t3_ParamLimits

0x68c5,	// (0x0001630f) area_vitu2_query_pane_t3

0xd7f6,	// (0x0001d240) area_vitu2_query_pane_t4_ParamLimits

0xd7f6,	// (0x0001d240) area_vitu2_query_pane_t4

0xd81e,	// (0x0001d268) area_vitu2_query_pane_t5_ParamLimits

0xd81e,	// (0x0001d268) area_vitu2_query_pane_t5

0xd846,	// (0x0001d290) area_vitu2_query_pane_t6_ParamLimits

0xd846,	// (0x0001d290) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0001f4a7) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0001f4a7) area_vitu2_query_pane_t

0x68ed,	// (0x00016337) bg_button_pane_cp018

0x68fb,	// (0x00016345) bg_button_pane_cp021

0x6907,	// (0x00016351) bg_button_pane_cp022

0x6918,	// (0x00016362) input_focus_pane_cp09

0xa95a,	// (0x0001a3a4) aid_size_touch_mv_arrow_left

0xa985,	// (0x0001a3cf) aid_size_touch_mv_arrow_right

0x6015,	// (0x00015a5f) main_cset_slider_pane_g16_ParamLimits

0x6015,	// (0x00015a5f) main_cset_slider_pane_g16

0x6023,	// (0x00015a6d) main_cset_slider_pane_g17_ParamLimits

0x6023,	// (0x00015a6d) main_cset_slider_pane_g17

0x6831,	// (0x0001627b) cell_cam4_burst_pane_g1_ParamLimits

0x95ee,	// (0x00019038) compa_mode_pane

0x6258,	// (0x00015ca2) popup_vtel_slider_window_g3_ParamLimits

0x6258,	// (0x00015ca2) popup_vtel_slider_window_g3

0x626f,	// (0x00015cb9) popup_vtel_slider_window_g4_ParamLimits

0x626f,	// (0x00015cb9) popup_vtel_slider_window_g4

0x6286,	// (0x00015cd0) popup_vtel_slider_window_t1_ParamLimits

0x6286,	// (0x00015cd0) popup_vtel_slider_window_t1

0x95ee,	// (0x00019038) main_cl_pane

0xbffc,	// (0x0001ba46) popup_imed_adjust2_window_ParamLimits

0xbfd0,	// (0x0001ba1a) bg_tb_trans_pane_cp05_ParamLimits

0xca16,	// (0x0001c460) popup_imed_adjust2_window_g1_ParamLimits

0xca25,	// (0x0001c46f) popup_imed_adjust2_window_g2_ParamLimits

0xca25,	// (0x0001c46f) popup_imed_adjust2_window_g2

0xca31,	// (0x0001c47b) popup_imed_adjust2_window_g3_ParamLimits

0xca31,	// (0x0001c47b) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0001f20e) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0001f20e) popup_imed_adjust2_window_g

0xca3d,	// (0x0001c487) popup_imed_adjust2_window_t1_ParamLimits

0xca55,	// (0x0001c49f) slider_imed_adjust_pane_ParamLimits

0xca69,	// (0x0001c4b3) slider_imed_adjust_pane_g1_ParamLimits

0xca79,	// (0x0001c4c3) slider_imed_adjust_pane_g2_ParamLimits

0xca89,	// (0x0001c4d3) slider_imed_adjust_pane_g3_ParamLimits

0xca9a,	// (0x0001c4e4) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0001f215) slider_imed_adjust_pane_g_ParamLimits

0x5622,	// (0x0001506c) aid_touch_area_cam4_ParamLimits

0x5622,	// (0x0001506c) aid_touch_area_cam4

0xd15d,	// (0x0001cba7) battery_pane_cp01

0x56f5,	// (0x0001513f) main_camera4_pane_g6_ParamLimits

0x56f5,	// (0x0001513f) main_camera4_pane_g6

0x571f,	// (0x00015169) main_camera4_pane_t2_ParamLimits

0x571f,	// (0x00015169) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0001f31c) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0001f31c) main_camera4_pane_t

0x5754,	// (0x0001519e) aid_touch_area_vid4_ParamLimits

0x5754,	// (0x0001519e) aid_touch_area_vid4

0x57a8,	// (0x000151f2) main_video4_pane_g5_ParamLimits

0x57a8,	// (0x000151f2) main_video4_pane_g5

0x57cd,	// (0x00015217) vid4_progress_pane_ParamLimits

0x57cd,	// (0x00015217) vid4_progress_pane

0xd415,	// (0x0001ce5f) main_cset_slider_pane_g18_ParamLimits

0xd415,	// (0x0001ce5f) main_cset_slider_pane_g18

0xd6a8,	// (0x0001d0f2) cell_cam4_burst_pane_g2_ParamLimits

0xd6a8,	// (0x0001d0f2) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0001f47b) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0001f47b) cell_cam4_burst_pane_g

0x9dfb,	// (0x00019845) bg_cl_pane_ParamLimits

0x9dfb,	// (0x00019845) bg_cl_pane

0x6929,	// (0x00016373) cl_header_pane_ParamLimits

0x6929,	// (0x00016373) cl_header_pane

0x693d,	// (0x00016387) cl_listscroll_pane_ParamLimits

0x693d,	// (0x00016387) cl_listscroll_pane

0xd892,	// (0x0001d2dc) bg_cl_pane_g1

0xd89a,	// (0x0001d2e4) bg_cl_pane_g2

0xd8a2,	// (0x0001d2ec) bg_cl_pane_g3

0xd8aa,	// (0x0001d2f4) bg_cl_pane_g4

0xd8b2,	// (0x0001d2fc) bg_cl_pane_g5

0xd8ba,	// (0x0001d304) bg_cl_pane_g6

0xd8c2,	// (0x0001d30c) bg_cl_pane_g7

0xd8ca,	// (0x0001d314) bg_cl_pane_g8

0xd8d2,	// (0x0001d31c) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0001f4b6) bg_cl_pane_g

0x694d,	// (0x00016397) aid_height_cl_leading_ParamLimits

0x694d,	// (0x00016397) aid_height_cl_leading

0x6959,	// (0x000163a3) aid_height_cl_text_ParamLimits

0x6959,	// (0x000163a3) aid_height_cl_text

0x9663,	// (0x000190ad) bg_cl_header_pane_ParamLimits

0x9663,	// (0x000190ad) bg_cl_header_pane

0x6978,	// (0x000163c2) cl_header_pane_g1_ParamLimits

0x6978,	// (0x000163c2) cl_header_pane_g1

0x698e,	// (0x000163d8) cl_header_pane_t1_ParamLimits

0x698e,	// (0x000163d8) cl_header_pane_t1

0xd8da,	// (0x0001d324) cl_list_pane

0xd3e8,	// (0x0001ce32) hc_scroll_pane_cp01

0xa274,	// (0x00019cbe) bg_cl_header_pane_g1

0xd2ca,	// (0x0001cd14) bg_cl_header_pane_g2

0xa294,	// (0x00019cde) bg_cl_header_pane_g3

0xd2da,	// (0x0001cd24) bg_cl_header_pane_g4

0xd2d2,	// (0x0001cd1c) bg_cl_header_pane_g5

0xd534,	// (0x0001cf7e) bg_cl_header_pane_g6

0xd2f2,	// (0x0001cd3c) bg_cl_header_pane_g7

0xd2fa,	// (0x0001cd44) bg_cl_header_pane_g8

0xd2ea,	// (0x0001cd34) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0001f4c9) bg_cl_header_pane_g

0x69a7,	// (0x000163f1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x69a7,	// (0x000163f1) hc_cl_list_double_graphic_heading_pane

0x69ba,	// (0x00016404) hc_cl_list_single_graphic_pane_ParamLimits

0x69ba,	// (0x00016404) hc_cl_list_single_graphic_pane

0x69d2,	// (0x0001641c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x69d2,	// (0x0001641c) hc_cl_list_single_graphic_pane_g1

0x69de,	// (0x00016428) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x69de,	// (0x00016428) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0001f4dc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0001f4dc) hc_cl_list_single_graphic_pane_g

0x69f2,	// (0x0001643c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x69f2,	// (0x0001643c) hc_cl_list_single_graphic_pane_t1

0x69d2,	// (0x0001641c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x69d2,	// (0x0001641c) hc_cl_list_double_graphic_heading_pane_g1

0x6a07,	// (0x00016451) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6a07,	// (0x00016451) hc_cl_list_double_graphic_heading_pane_g2

0x6a1b,	// (0x00016465) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6a1b,	// (0x00016465) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0001f4e1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0001f4e1) hc_cl_list_double_graphic_heading_pane_g

0x6a2f,	// (0x00016479) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6a2f,	// (0x00016479) hc_cl_list_double_graphic_heading_pane_t1

0x6a44,	// (0x0001648e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6a44,	// (0x0001648e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0001f4e8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0001f4e8) hc_cl_list_double_graphic_heading_pane_t

0xd8eb,	// (0x0001d335) vid4_progress_pane_g1

0xd8fb,	// (0x0001d345) vid4_progress_pane_g2

0x6a59,	// (0x000164a3) vid4_progress_pane_g3

0xd194,	// (0x0001cbde) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0001f4ed) vid4_progress_pane_g

0x6a6b,	// (0x000164b5) vid4_progress_pane_t1

0xd90b,	// (0x0001d355) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0001f4f8) vid4_progress_pane_t

0x6a83,	// (0x000164cd) wait_bar_pane_cp07

0xc307,	// (0x0001bd51) blid_firmament_pane_ParamLimits

0xc34a,	// (0x0001bd94) popup_blid_sat_info2_window_g1

0xc36e,	// (0x0001bdb8) popup_blid_sat_info2_window_t3

0xc37c,	// (0x0001bdc6) popup_blid_sat_info2_window_t4

0xc38a,	// (0x0001bdd4) popup_blid_sat_info2_window_t5

0xc398,	// (0x0001bde2) popup_blid_sat_info2_window_t6

0xc3a8,	// (0x0001bdf2) popup_blid_sat_info2_window_t7

0xc3b6,	// (0x0001be00) popup_blid_sat_info2_window_t8

0xc3c4,	// (0x0001be0e) popup_blid_sat_info2_window_t9

0xc3d2,	// (0x0001be1c) popup_blid_sat_info2_window_t10

0xc49a,	// (0x0001bee4) aid_firma_cardinal_ParamLimits

0xc4ae,	// (0x0001bef8) blid_firmament_pane_t1_ParamLimits

0xc4c5,	// (0x0001bf0f) blid_firmament_pane_t2_ParamLimits

0xc4dc,	// (0x0001bf26) blid_firmament_pane_t3_ParamLimits

0xc4f3,	// (0x0001bf3d) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0001f102) blid_firmament_pane_t_ParamLimits

0xc50a,	// (0x0001bf54) blid_sat_info_pane_ParamLimits

0x9663,	// (0x000190ad) main_cam_set_pane_ParamLimits

0x4c12,	// (0x0001465c) aid_size_cell_colour_35_ParamLimits

0x4c32,	// (0x0001467c) aid_size_cell_colour_112_ParamLimits

0x4c52,	// (0x0001469c) aid_size_cell_effect_ParamLimits

0xbfd0,	// (0x0001ba1a) bg_tb_trans_pane_cp02_ParamLimits

0xa50a,	// (0x00019f54) heading_imed_pane_ParamLimits

0x4c72,	// (0x000146bc) listscroll_imed_pane_ParamLimits

0xb5f8,	// (0x0001b042) popup_call2_audio_first_window_g5_ParamLimits

0xb5f8,	// (0x0001b042) popup_call2_audio_first_window_g5

0x522f,	// (0x00014c79) aid_size_touch_image3_arrow_left_ParamLimits

0x522f,	// (0x00014c79) aid_size_touch_image3_arrow_left

0x525b,	// (0x00014ca5) aid_size_touch_image3_arrow_right_ParamLimits

0x525b,	// (0x00014ca5) aid_size_touch_image3_arrow_right

0xd920,	// (0x0001d36a) vid4_progress_pane_t3

0x4f8b,	// (0x000149d5) main_hwr_training_symbol_option_pane_ParamLimits

0x4f8b,	// (0x000149d5) main_hwr_training_symbol_option_pane

0xcd0f,	// (0x0001c759) popup_hwr_training_preview_window_ParamLimits

0xcd0f,	// (0x0001c759) popup_hwr_training_preview_window

0x4fab,	// (0x000149f5) hwr_training_navi_pane_g5_ParamLimits

0x4fab,	// (0x000149f5) hwr_training_navi_pane_g5

0xd2a6,	// (0x0001ccf0) popup_char_count_window

0x9663,	// (0x000190ad) bg_popup_sub_pane_cp20_ParamLimits

0x63ac,	// (0x00015df6) list_vitu2_match_list_pane_ParamLimits

0x63bb,	// (0x00015e05) vitu2_page_scroll_pane_ParamLimits

0x63bb,	// (0x00015e05) vitu2_page_scroll_pane

0xd957,	// (0x0001d3a1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd957,	// (0x0001d3a1) list_single_hwr_training_symbol_option_pane

0xd96a,	// (0x0001d3b4) list_single_hwr_training_symbol_option_pane_g1

0xd972,	// (0x0001d3bc) list_single_hwr_training_symbol_option_pane_t1

0xd980,	// (0x0001d3ca) bg_button_pane_cp023

0xd989,	// (0x0001d3d3) bg_button_pane_cp024

0x6ace,	// (0x00016518) vitu2_page_scroll_pane_g1

0x6ad6,	// (0x00016520) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0001f4ff) vitu2_page_scroll_pane_g

0x6ae0,	// (0x0001652a) vitu2_page_scroll_pane_t1

0xd59b,	// (0x0001cfe5) popup_char_count_window_g1

0xd9bc,	// (0x0001d406) popup_char_count_window_g2

0xd5a4,	// (0x0001cfee) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0001f504) popup_char_count_window_g

0xd9c5,	// (0x0001d40f) popup_char_count_window_t1

0x95ee,	// (0x00019038) main_vded2_pane

0xca02,	// (0x0001c44c) aid_size_cell_imed_line

0xca0c,	// (0x0001c456) grid_imed_line_width_pane

0xd217,	// (0x0001cc61) vid4_indicators_pane_g4

0xd9d3,	// (0x0001d41d) cell_imed_line_width_pane_ParamLimits

0xd9d3,	// (0x0001d41d) cell_imed_line_width_pane

0xd9e9,	// (0x0001d433) cell_imed_line_width_pane_g1

0xd9f2,	// (0x0001d43c) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0001f50b) cell_imed_line_width_pane_g

0x6aef,	// (0x00016539) main_vded2_pane_g1_ParamLimits

0x6aef,	// (0x00016539) main_vded2_pane_g1

0x6b0a,	// (0x00016554) main_vded2_pane_g2_ParamLimits

0x6b0a,	// (0x00016554) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0001f510) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0001f510) main_vded2_pane_g

0x6b1c,	// (0x00016566) vded2_slider_pane_ParamLimits

0x6b1c,	// (0x00016566) vded2_slider_pane

0x6b2c,	// (0x00016576) aid_size_touch_vded2_end

0x6b36,	// (0x00016580) aid_size_touch_vded2_playhead

0xd9fa,	// (0x0001d444) aid_size_touch_vded2_start

0xda02,	// (0x0001d44c) vded2_slider_bg_pane

0xda0b,	// (0x0001d455) vded2_slider_pane_g1

0xda14,	// (0x0001d45e) vded2_slider_pane_g2

0x6b40,	// (0x0001658a) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0001f515) vded2_slider_pane_g

0xd5ad,	// (0x0001cff7) vded2_slider_bg_pane_g1

0xd5b6,	// (0x0001d000) vded2_slider_bg_pane_g2

0xd5bf,	// (0x0001d009) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0001f51c) vded2_slider_bg_pane_g

0x282c,	// (0x00012276) aid_postcard_touch_down_pane_ParamLimits

0x282c,	// (0x00012276) aid_postcard_touch_down_pane

0x2844,	// (0x0001228e) aid_postcard_touch_up_pane_ParamLimits

0x2844,	// (0x0001228e) aid_postcard_touch_up_pane

0x95ee,	// (0x00019038) main_blid2_pane

0xbfde,	// (0x0001ba28) popup_blid2_search_window

0x95ee,	// (0x00019038) blid2_gps_pane

0x95ee,	// (0x00019038) blid2_navig_pane

0x95ee,	// (0x00019038) blid2_search_pane

0x95ee,	// (0x00019038) blid2_tripm_pane

0x6b4b,	// (0x00016595) blid2_search_pane_g1_ParamLimits

0x6b4b,	// (0x00016595) blid2_search_pane_g1

0x6b5e,	// (0x000165a8) blid2_search_pane_t1_ParamLimits

0x6b5e,	// (0x000165a8) blid2_search_pane_t1

0x6b70,	// (0x000165ba) aid_size_cell_blid2_gps_ParamLimits

0x6b70,	// (0x000165ba) aid_size_cell_blid2_gps

0x6b88,	// (0x000165d2) blid2_gps_pane_g1_ParamLimits

0x6b88,	// (0x000165d2) blid2_gps_pane_g1

0x6b9c,	// (0x000165e6) grid_blid2_satellite_pane_ParamLimits

0x6b9c,	// (0x000165e6) grid_blid2_satellite_pane

0x6bb4,	// (0x000165fe) blid2_navig_pane_g1_ParamLimits

0x6bb4,	// (0x000165fe) blid2_navig_pane_g1

0x6bc0,	// (0x0001660a) blid2_navig_pane_t1_ParamLimits

0x6bc0,	// (0x0001660a) blid2_navig_pane_t1

0x6bdb,	// (0x00016625) blid2_navig_pane_t2_ParamLimits

0x6bdb,	// (0x00016625) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0001f523) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0001f523) blid2_navig_pane_t

0x6bf6,	// (0x00016640) blid2_navig_ring_pane_ParamLimits

0x6bf6,	// (0x00016640) blid2_navig_ring_pane

0x6c11,	// (0x0001665b) blid2_speed_pane_ParamLimits

0x6c11,	// (0x0001665b) blid2_speed_pane

0x6c1d,	// (0x00016667) blid2_tripm_pane_g1_ParamLimits

0x6c1d,	// (0x00016667) blid2_tripm_pane_g1

0x6c38,	// (0x00016682) blid2_tripm_pane_g2_ParamLimits

0x6c38,	// (0x00016682) blid2_tripm_pane_g2

0x6c4c,	// (0x00016696) blid2_tripm_pane_g3_ParamLimits

0x6c4c,	// (0x00016696) blid2_tripm_pane_g3

0x6c60,	// (0x000166aa) blid2_tripm_pane_g4_ParamLimits

0x6c60,	// (0x000166aa) blid2_tripm_pane_g4

0x6c74,	// (0x000166be) blid2_tripm_pane_g5_ParamLimits

0x6c74,	// (0x000166be) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0001f528) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0001f528) blid2_tripm_pane_g

0x6c9a,	// (0x000166e4) blid2_tripm_pane_t1_ParamLimits

0x6c9a,	// (0x000166e4) blid2_tripm_pane_t1

0x6cb3,	// (0x000166fd) blid2_tripm_pane_t2_ParamLimits

0x6cb3,	// (0x000166fd) blid2_tripm_pane_t2

0x6ccc,	// (0x00016716) blid2_tripm_pane_t3_ParamLimits

0x6ccc,	// (0x00016716) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0001f535) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0001f535) blid2_tripm_pane_t

0x6d13,	// (0x0001675d) cell_blid2_satellite_pane_ParamLimits

0x6d13,	// (0x0001675d) cell_blid2_satellite_pane

0x6d2f,	// (0x00016779) cell_blid2_satellite_pane_g1

0xda1c,	// (0x0001d466) cell_blid2_satellite_pane_t1

0xc51a,	// (0x0001bf64) blid2_speed_pane_g1

0xda2a,	// (0x0001d474) blid2_speed_pane_t1

0xda38,	// (0x0001d482) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0001f53e) blid2_speed_pane_t

0xc51a,	// (0x0001bf64) blid2_navig_ring_pane_g1

0x6d38,	// (0x00016782) blid2_navig_ring_pane_g2

0x6d40,	// (0x0001678a) blid2_navig_ring_pane_g3

0x6d48,	// (0x00016792) blid2_navig_ring_pane_g4

0x6d50,	// (0x0001679a) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0001f543) blid2_navig_ring_pane_g

0x95ee,	// (0x00019038) bg_popup_window_pane_cp011

0xda46,	// (0x0001d490) popup_blid2_search_window_g1

0xda4e,	// (0x0001d498) popup_blid2_search_window_t1

0xda5c,	// (0x0001d4a6) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0001f54e) popup_blid2_search_window_t

0xa183,	// (0x00019bcd) main_browser_pane_g1

0x9dfb,	// (0x00019845) main_browser_pane_ParamLimits

0x9663,	// (0x000190ad) bg_button_pane_cp011_ParamLimits

0x5bd7,	// (0x00015621) cell_vitu2_function_pane_g1_ParamLimits

0xbfd0,	// (0x0001ba1a) bg_popup_sub_pane_cp22_ParamLimits

0x65b1,	// (0x00015ffb) input_focus_pane_cp08_ParamLimits

0x65c8,	// (0x00016012) popup_vitu2_query_button_pane_ParamLimits

0x65c8,	// (0x00016012) popup_vitu2_query_button_pane

0x65d9,	// (0x00016023) popup_vitu2_query_input_button_pane

0xd58f,	// (0x0001cfd9) popup_vitu2_query_window_g1_ParamLimits

0x65e3,	// (0x0001602d) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0001f44f) popup_vitu2_query_window_g_ParamLimits

0x95ee,	// (0x00019038) bg_button_pane_cp026

0x6d58,	// (0x000167a2) popup_vitu2_query_input_button_pane_g1

0x95ee,	// (0x00019038) bg_button_pane_cp025

0xda6a,	// (0x0001d4b4) popup_vitu2_query_button_pane_t1

0x3f2a,	// (0x00013974) main_mp3_pane_t6

0x3f38,	// (0x00013982) popup_slider_window_cp01

0xd17b,	// (0x0001cbc5) cam4_battery_pane

0xd1d0,	// (0x0001cc1a) cam4_battery_pane_cp02

0xd8e3,	// (0x0001d32d) cam4_battery_pane_cp01

0xd8e3,	// (0x0001d32d) cam4_battery_pane_cp03

0xc51a,	// (0x0001bf64) cam4_battery_pane_g1

0xda78,	// (0x0001d4c2) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0001f553) cam4_battery_pane_g

0xc3e0,	// (0x0001be2a) popup_blid_sat_info2_window_t11

0xa95a,	// (0x0001a3a4) aid_size_touch_mv_arrow_left_ParamLimits

0xa985,	// (0x0001a3cf) aid_size_touch_mv_arrow_right_ParamLimits

0xa9e3,	// (0x0001a42d) navi_pane_g1_ParamLimits

0xa9ef,	// (0x0001a439) navi_pane_g2_ParamLimits

0xaa1d,	// (0x0001a467) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0001ee14) navi_pane_g_ParamLimits

0x222c,	// (0x00011c76) navi_pane_mv_t1_ParamLimits

0x4c7e,	// (0x000146c8) grid_imed_effect_pane_ParamLimits

0x0cc0,	// (0x0001070a) aid_placing_vt_slider_lsc

0xa0ce,	// (0x00019b18) aid_placing_vt_slider_prt

0x9663,	// (0x000190ad) bg_tb_trans_pane_cp01_ParamLimits

0xc661,	// (0x0001c0ab) popup_image_details_window_g1_ParamLimits

0xc674,	// (0x0001c0be) popup_image_details_window_g2_ParamLimits

0xc689,	// (0x0001c0d3) popup_image_details_window_g3_ParamLimits

0xc689,	// (0x0001c0d3) popup_image_details_window_g3

0xf6fd,	// (0x0001f147) popup_image_details_window_g_ParamLimits

0xc69d,	// (0x0001c0e7) popup_image_details_window_t1_ParamLimits

0xc6af,	// (0x0001c0f9) popup_image_details_window_t2_ParamLimits

0xc6c8,	// (0x0001c112) popup_image_details_window_t3_ParamLimits

0xc6dc,	// (0x0001c126) popup_image_details_window_t4_ParamLimits

0xc6f7,	// (0x0001c141) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0001f14e) popup_image_details_window_t_ParamLimits

0x6965,	// (0x000163af) cl_header_name_pane_ParamLimits

0x6965,	// (0x000163af) cl_header_name_pane

0x6d60,	// (0x000167aa) cl_header_name_pane_t1_ParamLimits

0x6d60,	// (0x000167aa) cl_header_name_pane_t1

0x6d81,	// (0x000167cb) cl_header_name_pane_t2_ParamLimits

0x6d81,	// (0x000167cb) cl_header_name_pane_t2

0x6dc3,	// (0x0001680d) cl_header_name_pane_t3_ParamLimits

0x6dc3,	// (0x0001680d) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0001f558) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0001f558) cl_header_name_pane_t

0xaaac,	// (0x0001a4f6) navi_pane_mv_g2_ParamLimits

0xd263,	// (0x0001ccad) field_vitu2_entry_pane_g1_ParamLimits

0xd26f,	// (0x0001ccb9) field_vitu2_entry_pane_g2_ParamLimits

0xd27b,	// (0x0001ccc5) field_vitu2_entry_pane_g3_ParamLimits

0xd27b,	// (0x0001ccc5) field_vitu2_entry_pane_g3

0xf904,	// (0x0001f34e) field_vitu2_entry_pane_g_ParamLimits

0xd2ae,	// (0x0001ccf8) cell_vitu2_itu_pane_g1_ParamLimits

0x5a7f,	// (0x000154c9) cell_vitu2_itu_pane_g2_ParamLimits

0x5a7f,	// (0x000154c9) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0001f35a) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0001f35a) cell_vitu2_itu_pane_g

0x9663,	// (0x000190ad) bg_vkb2_func_pane_cp05_ParamLimits

0x9663,	// (0x000190ad) bg_vkb2_func_pane_cp05

0x9663,	// (0x000190ad) bg_vkb2_func_pane_cp03

0x9663,	// (0x000190ad) bg_vkb2_func_pane_cp04

0x9663,	// (0x000190ad) bg_vkb2_func_pane_cp10_ParamLimits

0x9663,	// (0x000190ad) bg_vkb2_func_pane_cp10

0x6907,	// (0x00016351) bg_vkb2_func_pane_cp08

0x68ed,	// (0x00016337) bg_vkb2_func_pane_cp06

0x68fb,	// (0x00016345) bg_vkb2_func_pane_cp07

0xd992,	// (0x0001d3dc) bg_vkb2_func_pane_cp11_ParamLimits

0xd992,	// (0x0001d3dc) bg_vkb2_func_pane_cp11

0xd9a7,	// (0x0001d3f1) bg_vkb2_func_pane_cp12_ParamLimits

0xd9a7,	// (0x0001d3f1) bg_vkb2_func_pane_cp12

0x95ee,	// (0x00019038) bg_vkb2_func_pane_cp09

0xd2ca,	// (0x0001cd14) bg_vkb2_func_pane_g1

0xa294,	// (0x00019cde) bg_vkb2_func_pane_g2

0xd2d2,	// (0x0001cd1c) bg_vkb2_func_pane_g3

0xd2da,	// (0x0001cd24) bg_vkb2_func_pane_g4

0xd534,	// (0x0001cf7e) bg_vkb2_func_pane_g5

0xd2f2,	// (0x0001cd3c) bg_vkb2_func_pane_g6

0xd2fa,	// (0x0001cd44) bg_vkb2_func_pane_g7

0xd2ea,	// (0x0001cd34) bg_vkb2_func_pane_g8

0xa274,	// (0x00019cbe) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0001f55f) bg_vkb2_func_pane_g

0x6c88,	// (0x000166d2) blid2_tripm_pane_g6_ParamLimits

0x6c88,	// (0x000166d2) blid2_tripm_pane_g6

0xd042,	// (0x0001ca8c) mp4_progress_pane_g1

0x6cff,	// (0x00016749) blid2_tripm_values_pane_ParamLimits

0x6cff,	// (0x00016749) blid2_tripm_values_pane

0x6df4,	// (0x0001683e) blid2_tripm_values_pane_t1

0x6e02,	// (0x0001684c) blid2_tripm_values_pane_t2

0x6e10,	// (0x0001685a) blid2_tripm_values_pane_t3

0x6e1e,	// (0x00016868) blid2_tripm_values_pane_t4

0x6e2c,	// (0x00016876) blid2_tripm_values_pane_t5

0x6e3a,	// (0x00016884) blid2_tripm_values_pane_t6

0x6e48,	// (0x00016892) blid2_tripm_values_pane_t7

0x6e56,	// (0x000168a0) blid2_tripm_values_pane_t8

0x6e64,	// (0x000168ae) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0001f572) blid2_tripm_values_pane_t

0x0cfd,	// (0x00010747) call_video_pane_t1_ParamLimits

0x0d17,	// (0x00010761) call_video_pane_t2_ParamLimits

0xf253,	// (0x0001ec9d) call_video_pane_t_ParamLimits

0x2779,	// (0x000121c3) msg_header_pane_g1_ParamLimits

0xacb2,	// (0x0001a6fc) msg_header_pane_g2_ParamLimits

0xacb2,	// (0x0001a6fc) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0001eeb7) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0001eeb7) msg_header_pane_g

0x9dfb,	// (0x00019845) main_clock2_pane_ParamLimits

0x497b,	// (0x000143c5) grid_clock2_toolbar_pane_ParamLimits

0x497b,	// (0x000143c5) grid_clock2_toolbar_pane

0x497b,	// (0x000143c5) listscroll_clock2_pane_ParamLimits

0x497b,	// (0x000143c5) listscroll_clock2_pane

0x4a5a,	// (0x000144a4) main_clock2_pane_t3_ParamLimits

0x4a5a,	// (0x000144a4) main_clock2_pane_t3

0x4a7d,	// (0x000144c7) main_clock2_pane_t4_ParamLimits

0x4a7d,	// (0x000144c7) main_clock2_pane_t4

0xda82,	// (0x0001d4cc) cell_clock2_toolbar_pane

0xda8a,	// (0x0001d4d4) cell_clock2_toolbar_pane_cp01

0xda8a,	// (0x0001d4d4) cell_clock2_toolbar_pane_cp02

0xda92,	// (0x0001d4dc) cell_clock2_toolbar_pane_cp03

0xda9a,	// (0x0001d4e4) list_clock2_pane

0xa8df,	// (0x0001a329) scroll_pane_cp10

0xdaa2,	// (0x0001d4ec) list_single_clock2_pane_ParamLimits

0xdaa2,	// (0x0001d4ec) list_single_clock2_pane

0xa018,	// (0x00019a62) list_highlight_pane_cp08

0xdaaf,	// (0x0001d4f9) list_single_clock2_pane_t1

0xdabd,	// (0x0001d507) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0001f585) list_single_clock2_pane_t

0x95ee,	// (0x00019038) bg_button_pane_cp10

0xdacb,	// (0x0001d515) cell_clock2_toolbar_pane_g1

0x27b8,	// (0x00012202) aid_main_viewer_pane_g1_ParamLimits

0x27b8,	// (0x00012202) aid_main_viewer_pane_g1

0x27c6,	// (0x00012210) aid_main_viewer_pane_g2_ParamLimits

0x27c6,	// (0x00012210) aid_main_viewer_pane_g2

0x27d4,	// (0x0001221e) aid_main_viewer_pane_g3_ParamLimits

0x27d4,	// (0x0001221e) aid_main_viewer_pane_g3

0x27e3,	// (0x0001222d) aid_main_viewer_pane_g4_ParamLimits

0x27e3,	// (0x0001222d) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0001eec8) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0001eec8) aid_main_viewer_pane_g

0x313e,	// (0x00012b88) main_calc_pane_ParamLimits

0x3152,	// (0x00012b9c) main_dialer2_pane_ParamLimits

0x95ee,	// (0x00019038) main_cam6_pane

0x95ee,	// (0x00019038) main_vid6_pane

0x4987,	// (0x000143d1) listscroll_gen_pane_cp06_ParamLimits

0x4987,	// (0x000143d1) listscroll_gen_pane_cp06

0x4aa0,	// (0x000144ea) main_clock2_pane_t5_ParamLimits

0x4aa0,	// (0x000144ea) main_clock2_pane_t5

0x4afe,	// (0x00014548) aid_call2_pane_cp10_ParamLimits

0x4b10,	// (0x0001455a) aid_call_pane_cp10_ParamLimits

0xa94e,	// (0x0001a398) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa94e,	// (0x0001a398) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4b22,	// (0x0001456c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4b22,	// (0x0001456c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa94e,	// (0x0001a398) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0001f203) popup_clock_analogue_window_cp10_g_ParamLimits

0x4b38,	// (0x00014582) popup_clock_analogue_window_cp10_t1_ParamLimits

0x51dc,	// (0x00014c26) cell_dialer2_keypad_pane_g2_ParamLimits

0x51dc,	// (0x00014c26) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0001f2ed) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0001f2ed) cell_dialer2_keypad_pane_g

0x51f8,	// (0x00014c42) cell_dialer2_keypad_pane_t1

0x5f06,	// (0x00015950) main_cset_text2_pane_ParamLimits

0x5f06,	// (0x00015950) main_cset_text2_pane

0xd7ea,	// (0x0001d234) area_vitu2_query_pane_g1_ParamLimits

0x688c,	// (0x000162d6) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0001f4a2) area_vitu2_query_pane_g_ParamLimits

0xd86e,	// (0x0001d2b8) area_vitu2_query_pane_t7_ParamLimits

0xd86e,	// (0x0001d2b8) area_vitu2_query_pane_t7

0x68ed,	// (0x00016337) bg_button_pane_cp018_ParamLimits

0x68fb,	// (0x00016345) bg_button_pane_cp021_ParamLimits

0x6907,	// (0x00016351) bg_button_pane_cp022_ParamLimits

0x6907,	// (0x00016351) bg_vkb2_func_pane_cp08_ParamLimits

0x68ed,	// (0x00016337) bg_vkb2_func_pane_cp06_ParamLimits

0x68fb,	// (0x00016345) bg_vkb2_func_pane_cp07_ParamLimits

0x6918,	// (0x00016362) input_focus_pane_cp09_ParamLimits

0xdad3,	// (0x0001d51d) cam6_autofocus_pane_ParamLimits

0xdad3,	// (0x0001d51d) cam6_autofocus_pane

0x6e72,	// (0x000168bc) cam6_image_uncrop_pane_ParamLimits

0x6e72,	// (0x000168bc) cam6_image_uncrop_pane

0x6e81,	// (0x000168cb) cam6_indi_pane_ParamLimits

0x6e81,	// (0x000168cb) cam6_indi_pane

0x6e97,	// (0x000168e1) cam6_mode_pane_ParamLimits

0x6e97,	// (0x000168e1) cam6_mode_pane

0x6ea9,	// (0x000168f3) cam6_timer_pane_ParamLimits

0x6ea9,	// (0x000168f3) cam6_timer_pane

0x6eb5,	// (0x000168ff) cam6_zoom_pane_ParamLimits

0x6eb5,	// (0x000168ff) cam6_zoom_pane

0x6ec3,	// (0x0001690d) cam6_mode_pane_g1_ParamLimits

0x6ec3,	// (0x0001690d) cam6_mode_pane_g1

0x6ed3,	// (0x0001691d) cam6_mode_pane_g2_ParamLimits

0x6ed3,	// (0x0001691d) cam6_mode_pane_g2

0x6ee3,	// (0x0001692d) cam6_mode_pane_g3_ParamLimits

0x6ee3,	// (0x0001692d) cam6_mode_pane_g3

0x6ef3,	// (0x0001693d) cam6_mode_pane_g4_ParamLimits

0x6ef3,	// (0x0001693d) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0001f58a) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0001f58a) cam6_mode_pane_g

0xd5c8,	// (0x0001d012) bg_tb_trans_pane_cp08_ParamLimits

0xd5c8,	// (0x0001d012) bg_tb_trans_pane_cp08

0xdae1,	// (0x0001d52b) cam6_battery_pane_ParamLimits

0xdae1,	// (0x0001d52b) cam6_battery_pane

0xdaf7,	// (0x0001d541) cam6_indi_pane_g1_ParamLimits

0xdaf7,	// (0x0001d541) cam6_indi_pane_g1

0xdb09,	// (0x0001d553) cam6_indi_pane_g2_ParamLimits

0xdb09,	// (0x0001d553) cam6_indi_pane_g2

0xdb1b,	// (0x0001d565) cam6_indi_pane_g3_ParamLimits

0xdb1b,	// (0x0001d565) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0001f593) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0001f593) cam6_indi_pane_g

0xdb2d,	// (0x0001d577) cam6_indi_pane_t1_ParamLimits

0xdb2d,	// (0x0001d577) cam6_indi_pane_t1

0x5815,	// (0x0001525f) cam6_autofocus_pane_g1

0x581d,	// (0x00015267) cam6_autofocus_pane_g2

0x5825,	// (0x0001526f) cam6_autofocus_pane_g3

0x582d,	// (0x00015277) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0001f59a) cam6_autofocus_pane_g

0xdb53,	// (0x0001d59d) cam6_timer_pane_g1

0xdb5b,	// (0x0001d5a5) cam6_timer_pane_t1

0xdb69,	// (0x0001d5b3) cam6_zoom_cont_pane

0xdb71,	// (0x0001d5bb) cam6_zoom_pane_g1

0xdb79,	// (0x0001d5c3) cam6_zoom_pane_g2

0x6f03,	// (0x0001694d) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0001f5a3) cam6_zoom_pane_g

0xc51a,	// (0x0001bf64) cam6_battery_pane_g1

0xc51a,	// (0x0001bf64) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0001f10b) cam6_battery_pane_g

0xdb81,	// (0x0001d5cb) cam6_zoom_cont_pane_g1

0xdb8a,	// (0x0001d5d4) cam6_zoom_cont_pane_g2

0xdb93,	// (0x0001d5dd) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0001f5aa) cam6_zoom_cont_pane_g

0x6f20,	// (0x0001696a) cam6_mode_pane_cp_ParamLimits

0x6f20,	// (0x0001696a) cam6_mode_pane_cp

0x6eb5,	// (0x000168ff) cam6_zoom_pane_cp_ParamLimits

0x6eb5,	// (0x000168ff) cam6_zoom_pane_cp

0x6f32,	// (0x0001697c) vid6_image_uncrop_cif_pane_ParamLimits

0x6f32,	// (0x0001697c) vid6_image_uncrop_cif_pane

0x6f42,	// (0x0001698c) vid6_image_uncrop_nhd_pane_ParamLimits

0x6f42,	// (0x0001698c) vid6_image_uncrop_nhd_pane

0x6e72,	// (0x000168bc) vid6_image_uncrop_vga_pane_ParamLimits

0x6e72,	// (0x000168bc) vid6_image_uncrop_vga_pane

0x6f51,	// (0x0001699b) vid6_image_uncrop_wvga_pane_ParamLimits

0x6f51,	// (0x0001699b) vid6_image_uncrop_wvga_pane

0x6f60,	// (0x000169aa) vid6_indi_pane_ParamLimits

0x6f60,	// (0x000169aa) vid6_indi_pane

0xd5c8,	// (0x0001d012) bg_tb_trans_pane_cp09_ParamLimits

0xd5c8,	// (0x0001d012) bg_tb_trans_pane_cp09

0xdbab,	// (0x0001d5f5) cam6_battery_pane_cp_ParamLimits

0xdbab,	// (0x0001d5f5) cam6_battery_pane_cp

0xdbb7,	// (0x0001d601) vid6_indi_pane_g1_ParamLimits

0xdbb7,	// (0x0001d601) vid6_indi_pane_g1

0xdbc9,	// (0x0001d613) vid6_indi_pane_g2_ParamLimits

0xdbc9,	// (0x0001d613) vid6_indi_pane_g2

0xdbdb,	// (0x0001d625) vid6_indi_pane_g3_ParamLimits

0xdbdb,	// (0x0001d625) vid6_indi_pane_g3

0xdbf2,	// (0x0001d63c) vid6_indi_pane_g4_ParamLimits

0xdbf2,	// (0x0001d63c) vid6_indi_pane_g4

0xdc09,	// (0x0001d653) vid6_indi_pane_g5_ParamLimits

0xdc09,	// (0x0001d653) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0001f5b1) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0001f5b1) vid6_indi_pane_g

0xdc23,	// (0x0001d66d) vid6_indi_pane_t1_ParamLimits

0xdc23,	// (0x0001d66d) vid6_indi_pane_t1

0xdc39,	// (0x0001d683) vid6_indi_pane_t2_ParamLimits

0xdc39,	// (0x0001d683) vid6_indi_pane_t2

0xdc61,	// (0x0001d6ab) vid6_indi_pane_t3_ParamLimits

0xdc61,	// (0x0001d6ab) vid6_indi_pane_t3

0xdc89,	// (0x0001d6d3) vid6_indi_pane_t4_ParamLimits

0xdc89,	// (0x0001d6d3) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0001f5bc) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0001f5bc) vid6_indi_pane_t

0xdcad,	// (0x0001d6f7) wait_bar_pane_cp08

0x6f78,	// (0x000169c2) main_cset_text2_pane_t1_ParamLimits

0x6f78,	// (0x000169c2) main_cset_text2_pane_t1

0x6f0b,	// (0x00016955) listscroll_gen_pane_cp06_t1_ParamLimits

0x6f0b,	// (0x00016955) listscroll_gen_pane_cp06_t1

0x95ee,	// (0x00019038) main_cam6_set_pane

0xc741,	// (0x0001c18b) bg_tb_trans_pane_cp06_ParamLimits

0xd183,	// (0x0001cbcd) cam4_indicators_pane_g1_ParamLimits

0xd194,	// (0x0001cbde) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0001f32a) cam4_indicators_pane_g_ParamLimits

0xd1ac,	// (0x0001cbf6) cam4_indicators_pane_t1_ParamLimits

0x9663,	// (0x000190ad) bg_tb_trans_pane_cp07_ParamLimits

0xd1da,	// (0x0001cc24) vid4_indicators_pane_g1_ParamLimits

0xd1f0,	// (0x0001cc3a) vid4_indicators_pane_g2_ParamLimits

0xd204,	// (0x0001cc4e) vid4_indicators_pane_g3_ParamLimits

0xd217,	// (0x0001cc61) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0001f33c) vid4_indicators_pane_g_ParamLimits

0xd235,	// (0x0001cc7f) vid4_indicators_pane_t1_ParamLimits

0xd8eb,	// (0x0001d335) vid4_progress_pane_g1_ParamLimits

0xd8fb,	// (0x0001d345) vid4_progress_pane_g2_ParamLimits

0x6a59,	// (0x000164a3) vid4_progress_pane_g3_ParamLimits

0xd194,	// (0x0001cbde) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0001f4ed) vid4_progress_pane_g_ParamLimits

0x6a6b,	// (0x000164b5) vid4_progress_pane_t1_ParamLimits

0xd90b,	// (0x0001d355) vid4_progress_pane_t2_ParamLimits

0xd920,	// (0x0001d36a) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0001f4f8) vid4_progress_pane_t_ParamLimits

0x6a83,	// (0x000164cd) wait_bar_pane_cp07_ParamLimits

0x6f99,	// (0x000169e3) main_cam6_set_pane_g2_ParamLimits

0x6f99,	// (0x000169e3) main_cam6_set_pane_g2

0x6fbf,	// (0x00016a09) main_cset6_listscroll_pane_ParamLimits

0x6fbf,	// (0x00016a09) main_cset6_listscroll_pane

0x6fdd,	// (0x00016a27) main_cset6_slider_pane_ParamLimits

0x6fdd,	// (0x00016a27) main_cset6_slider_pane

0x6ff3,	// (0x00016a3d) main_cset6_text2_pane_ParamLimits

0x6ff3,	// (0x00016a3d) main_cset6_text2_pane

0xdcbc,	// (0x0001d706) main_cset6_text_pane

0xdcc4,	// (0x0001d70e) main_cset_list_pane_copy1_ParamLimits

0xdcc4,	// (0x0001d70e) main_cset_list_pane_copy1

0xdcd4,	// (0x0001d71e) scroll_pane_cp028_copy1

0x7001,	// (0x00016a4b) cset_list_set_pane_copy1

0x7015,	// (0x00016a5f) aid_position_infowindow_above_copy1

0x701d,	// (0x00016a67) aid_position_infowindow_below_copy1

0x7025,	// (0x00016a6f) cset_list_set_pane_g1_copy1

0x702d,	// (0x00016a77) cset_list_set_pane_g3_copy1_ParamLimits

0x702d,	// (0x00016a77) cset_list_set_pane_g3_copy1

0x703c,	// (0x00016a86) cset_list_set_pane_t1_copy1_ParamLimits

0x703c,	// (0x00016a86) cset_list_set_pane_t1_copy1

0x9663,	// (0x000190ad) list_highlight_pane_cp021_copy1_ParamLimits

0x9663,	// (0x000190ad) list_highlight_pane_cp021_copy1

0xdcdd,	// (0x0001d727) cset6_slider_pane_ParamLimits

0xdcdd,	// (0x0001d727) cset6_slider_pane

0xdd09,	// (0x0001d753) main_cset6_slider_pane_g1_ParamLimits

0xdd09,	// (0x0001d753) main_cset6_slider_pane_g1

0x7051,	// (0x00016a9b) main_cset6_slider_pane_g2_ParamLimits

0x7051,	// (0x00016a9b) main_cset6_slider_pane_g2

0xdd31,	// (0x0001d77b) main_cset6_slider_pane_g3_ParamLimits

0xdd31,	// (0x0001d77b) main_cset6_slider_pane_g3

0x7079,	// (0x00016ac3) main_cset6_slider_pane_g4_ParamLimits

0x7079,	// (0x00016ac3) main_cset6_slider_pane_g4

0x7085,	// (0x00016acf) main_cset6_slider_pane_g5_ParamLimits

0x7085,	// (0x00016acf) main_cset6_slider_pane_g5

0xd3fd,	// (0x0001ce47) main_cset6_slider_pane_g7_ParamLimits

0xd3fd,	// (0x0001ce47) main_cset6_slider_pane_g7

0xd409,	// (0x0001ce53) main_cset6_slider_pane_g8_ParamLimits

0xd409,	// (0x0001ce53) main_cset6_slider_pane_g8

0x5fb5,	// (0x000159ff) main_cset6_slider_pane_g9_ParamLimits

0x5fb5,	// (0x000159ff) main_cset6_slider_pane_g9

0x5fc1,	// (0x00015a0b) main_cset6_slider_pane_g10_ParamLimits

0x5fc1,	// (0x00015a0b) main_cset6_slider_pane_g10

0x5fcd,	// (0x00015a17) main_cset6_slider_pane_g11_ParamLimits

0x5fcd,	// (0x00015a17) main_cset6_slider_pane_g11

0x5fd9,	// (0x00015a23) main_cset6_slider_pane_g12_ParamLimits

0x5fd9,	// (0x00015a23) main_cset6_slider_pane_g12

0x5fe5,	// (0x00015a2f) main_cset6_slider_pane_g13_ParamLimits

0x5fe5,	// (0x00015a2f) main_cset6_slider_pane_g13

0x5ff1,	// (0x00015a3b) main_cset6_slider_pane_g14_ParamLimits

0x5ff1,	// (0x00015a3b) main_cset6_slider_pane_g14

0x7093,	// (0x00016add) main_cset6_slider_pane_g15_ParamLimits

0x7093,	// (0x00016add) main_cset6_slider_pane_g15

0x6015,	// (0x00015a5f) main_cset6_slider_pane_g16_ParamLimits

0x6015,	// (0x00015a5f) main_cset6_slider_pane_g16

0x6023,	// (0x00015a6d) main_cset6_slider_pane_g17_ParamLimits

0x6023,	// (0x00015a6d) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0001f5c5) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0001f5c5) main_cset6_slider_pane_g

0xdd3d,	// (0x0001d787) main_cset6_slider_pane_t1_ParamLimits

0xdd3d,	// (0x0001d787) main_cset6_slider_pane_t1

0x70c3,	// (0x00016b0d) main_cset6_slider_pane_t2_ParamLimits

0x70c3,	// (0x00016b0d) main_cset6_slider_pane_t2

0x70ee,	// (0x00016b38) main_cset6_slider_pane_t3_ParamLimits

0x70ee,	// (0x00016b38) main_cset6_slider_pane_t3

0x7119,	// (0x00016b63) main_cset6_slider_pane_t4_ParamLimits

0x7119,	// (0x00016b63) main_cset6_slider_pane_t4

0x7146,	// (0x00016b90) main_cset6_slider_pane_t5_ParamLimits

0x7146,	// (0x00016b90) main_cset6_slider_pane_t5

0xdd7e,	// (0x0001d7c8) main_cset6_slider_pane_t7_ParamLimits

0xdd7e,	// (0x0001d7c8) main_cset6_slider_pane_t7

0x7173,	// (0x00016bbd) main_cset6_slider_pane_t8_ParamLimits

0x7173,	// (0x00016bbd) main_cset6_slider_pane_t8

0x7197,	// (0x00016be1) main_cset6_slider_pane_t9_ParamLimits

0x7197,	// (0x00016be1) main_cset6_slider_pane_t9

0x71bb,	// (0x00016c05) main_cset6_slider_pane_t10_ParamLimits

0x71bb,	// (0x00016c05) main_cset6_slider_pane_t10

0x71df,	// (0x00016c29) main_cset6_slider_pane_t11_ParamLimits

0x71df,	// (0x00016c29) main_cset6_slider_pane_t11

0xddb4,	// (0x0001d7fe) main_cset6_slider_pane_t14_ParamLimits

0xddb4,	// (0x0001d7fe) main_cset6_slider_pane_t14

0xdded,	// (0x0001d837) main_cset6_slider_pane_t15_ParamLimits

0xdded,	// (0x0001d837) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0001f5ea) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0001f5ea) main_cset6_slider_pane_t

0xde26,	// (0x0001d870) cset_slider_pane_g1_copy1

0xde2f,	// (0x0001d879) cset_slider_pane_g2_copy1

0xde38,	// (0x0001d882) cset_slider_pane_g3_copy1

0x95ee,	// (0x00019038) bg_popup_sub_pane_cp011_copy1

0xde41,	// (0x0001d88b) main_cset_text_pane_g1_copy1

0xd606,	// (0x0001d050) main_cset_text_pane_t1_copy1

0xd614,	// (0x0001d05e) main_cset_text_pane_t2_copy1

0xd622,	// (0x0001d06c) main_cset_text_pane_t3_copy1

0xd630,	// (0x0001d07a) main_cset_text_pane_t4_copy1

0xd63e,	// (0x0001d088) main_cset_text_pane_t5_copy1

0xde49,	// (0x0001d893) main_cset_text_pane_t6_copy1

0xde57,	// (0x0001d8a1) main_cset_text_pane_t7_copy1

0x6f78,	// (0x000169c2) main_cset_text2_pane_t1_copy1

0x9663,	// (0x000190ad) main_ncimui_pane

0x33e0,	// (0x00012e2a) popup_query_ncimui_window_ParamLimits

0x33e0,	// (0x00012e2a) popup_query_ncimui_window

0xc7a6,	// (0x0001c1f0) field_cale_ev2_pane_g4_ParamLimits

0xc7a6,	// (0x0001c1f0) field_cale_ev2_pane_g4

0x50a7,	// (0x00014af1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x50a7,	// (0x00014af1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0001f2c4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0001f2c4) cell_video_dialer_keypad_pane_g

0x50bf,	// (0x00014b09) cell_video_dialer_keypad_pane_t1

0x95ee,	// (0x00019038) bg_popup_window_pane_cp012

0xa7cb,	// (0x0001a215) heading_pane_cp06

0xde83,	// (0x0001d8cd) ncim_query_content_pane

0x95ee,	// (0x00019038) bg_popup_heading_pane_cp01

0xde8b,	// (0x0001d8d5) ncim_heading_pane_t1

0xde99,	// (0x0001d8e3) ncim_indicator_popup_pane

0xdeab,	// (0x0001d8f5) ncim_query_button_pane

0xdec1,	// (0x0001d90b) ncim_query_content_pane_t1

0xded3,	// (0x0001d91d) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0001f62e) ncim_query_content_pane_t

0xdf0d,	// (0x0001d957) ncim_query_list_pane

0xdf1f,	// (0x0001d969) ncim_query_popup_pane

0xde99,	// (0x0001d8e3) ncim_indicator_popup_pane_ParamLimits

0x7404,	// (0x00016e4e) ncim_query_content_pane_g1_ParamLimits

0x7404,	// (0x00016e4e) ncim_query_content_pane_g1

0xdec1,	// (0x0001d90b) ncim_query_content_pane_t1_ParamLimits

0xded3,	// (0x0001d91d) ncim_query_content_pane_t2_ParamLimits

0x7410,	// (0x00016e5a) ncim_query_content_pane_t3_ParamLimits

0x7410,	// (0x00016e5a) ncim_query_content_pane_t3

0x7438,	// (0x00016e82) ncim_query_content_pane_t4_ParamLimits

0x7438,	// (0x00016e82) ncim_query_content_pane_t4

0x7460,	// (0x00016eaa) ncim_query_content_pane_t5_ParamLimits

0x7460,	// (0x00016eaa) ncim_query_content_pane_t5

0xdee5,	// (0x0001d92f) ncim_query_content_pane_t6_ParamLimits

0xdee5,	// (0x0001d92f) ncim_query_content_pane_t6

0xfbe4,	// (0x0001f62e) ncim_query_content_pane_t_ParamLimits

0xdf0d,	// (0x0001d957) ncim_query_list_pane_ParamLimits

0xdf1f,	// (0x0001d969) ncim_query_popup_pane_ParamLimits

0xdf33,	// (0x0001d97d) wait_bar_pane_cp04

0x95ee,	// (0x00019038) input_focus_pane_cp011

0xdf3b,	// (0x0001d985) ncim_query_popup_pane_t1

0xdf49,	// (0x0001d993) ncim_list_query_list_pane_ParamLimits

0xdf49,	// (0x0001d993) ncim_list_query_list_pane

0x95ee,	// (0x00019038) bg_button_pane_cp027

0xdf5c,	// (0x0001d9a6) ncim_query_button_pane_g1

0x95ee,	// (0x00019038) list_highlight_pane_cp012

0xdf66,	// (0x0001d9b0) ncim_list_query_list_pane_g1

0xdf6e,	// (0x0001d9b8) ncim_list_query_list_pane_t1

0xd1a0,	// (0x0001cbea) cam4_indicators_pane_g3_ParamLimits

0xd1a0,	// (0x0001cbea) cam4_indicators_pane_g3

0xd223,	// (0x0001cc6d) vid4_indicators_pane_g5_ParamLimits

0xd223,	// (0x0001cc6d) vid4_indicators_pane_g5

0xd1a0,	// (0x0001cbea) vid4_progress_pane_g5_ParamLimits

0xd1a0,	// (0x0001cbea) vid4_progress_pane_g5

0x72ef,	// (0x00016d39) main_ncimui_pane_g1

0x7358,	// (0x00016da2) ncimui_group_query_pane_ParamLimits

0x7358,	// (0x00016da2) ncimui_group_query_pane

0x73a0,	// (0x00016dea) ncimui_list_pane_ParamLimits

0x73a0,	// (0x00016dea) ncimui_list_pane

0x73c7,	// (0x00016e11) ncimui_text_pane_ParamLimits

0x73c7,	// (0x00016e11) ncimui_text_pane

0x7488,	// (0x00016ed2) ncimui_text_pane_t1_ParamLimits

0x7488,	// (0x00016ed2) ncimui_text_pane_t1

0xdf7c,	// (0x0001d9c6) ncimui_list_single_graphic_pane_ParamLimits

0xdf7c,	// (0x0001d9c6) ncimui_list_single_graphic_pane

0x74a6,	// (0x00016ef0) ncimui_query_pane_ParamLimits

0x74a6,	// (0x00016ef0) ncimui_query_pane

0x95ee,	// (0x00019038) list_highlight_pane_cp013

0xdf8c,	// (0x0001d9d6) ncim_list_query_list_pane_t1_copy1

0xdf66,	// (0x0001d9b0) ncim_list_single_graphic_pane_g1

0x74b9,	// (0x00016f03) ncim_query_button_pane_cp01

0x74c5,	// (0x00016f0f) ncim_query_entry_pane_ParamLimits

0x74c5,	// (0x00016f0f) ncim_query_entry_pane

0x74d8,	// (0x00016f22) ncimui_query_pane_g1

0x74e4,	// (0x00016f2e) ncimui_query_pane_t1_ParamLimits

0x74e4,	// (0x00016f2e) ncimui_query_pane_t1

0x9663,	// (0x000190ad) input_focus_pane_cp012

0xdf9a,	// (0x0001d9e4) ncim_query_entry_pane_t1

0x9dfb,	// (0x00019845) main_im_pane_ParamLimits

0x9663,	// (0x000190ad) main_mobtv_pane_ParamLimits

0x9663,	// (0x000190ad) main_mobtv_pane

0x70ab,	// (0x00016af5) main_cset6_slider_pane_g18_ParamLimits

0x70ab,	// (0x00016af5) main_cset6_slider_pane_g18

0x70b7,	// (0x00016b01) main_cset6_slider_pane_g19_ParamLimits

0x70b7,	// (0x00016b01) main_cset6_slider_pane_g19

0xd5d6,	// (0x0001d020) bg_main_mobtv_pane_ParamLimits

0xd5d6,	// (0x0001d020) bg_main_mobtv_pane

0x74fd,	// (0x00016f47) main_mobtv_info_pane

0x7508,	// (0x00016f52) main_mobtv_loading_pane_ParamLimits

0x7508,	// (0x00016f52) main_mobtv_loading_pane

0xdfac,	// (0x0001d9f6) main_mobtv_pg_channel_list_pane

0xdfb6,	// (0x0001da00) main_mobtv_pg_hdr_pane

0x7515,	// (0x00016f5f) main_mobtv_programe_curr_pane_ParamLimits

0x7515,	// (0x00016f5f) main_mobtv_programe_curr_pane

0x7522,	// (0x00016f6c) main_mobtv_programe_next_pane_ParamLimits

0x7522,	// (0x00016f6c) main_mobtv_programe_next_pane

0xdfbf,	// (0x0001da09) popup_mobtv_noti_window

0xc51a,	// (0x0001bf64) main_tv_pg_hdr_pane_g1

0xdfc9,	// (0x0001da13) main_tv_pg_hdr_pane_g2

0xdfd1,	// (0x0001da1b) main_tv_pg_hdr_pane_g3

0xdfd9,	// (0x0001da23) main_tv_pg_hdr_pane_g4

0xdfe1,	// (0x0001da2b) main_tv_pg_hdr_pane_g5

0xdfeb,	// (0x0001da35) main_tv_pg_hdr_pane_g6

0xdff5,	// (0x0001da3f) main_tv_pg_hdr_pane_g7

0xdfff,	// (0x0001da49) main_tv_pg_hdr_pane_g8

0xe009,	// (0x0001da53) main_tv_pg_hdr_pane_g9

0xe013,	// (0x0001da5d) main_tv_pg_hdr_pane_g10

0xe01d,	// (0x0001da67) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0001f63b) main_tv_pg_hdr_pane_g

0xe027,	// (0x0001da71) main_tv_pg_hdr_pane_t1

0xe035,	// (0x0001da7f) main_tv_pg_hdr_pane_t2

0xe043,	// (0x0001da8d) main_tv_pg_hdr_pane_t3

0xe053,	// (0x0001da9d) main_tv_pg_hdr_pane_t4

0xe063,	// (0x0001daad) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0001f652) main_tv_pg_hdr_pane_t

0xe073,	// (0x0001dabd) single_mobtv_pg_channel_pane_ParamLimits

0xe073,	// (0x0001dabd) single_mobtv_pg_channel_pane

0xe085,	// (0x0001dacf) single_mobtv_pg_channel_table_pane

0xe08e,	// (0x0001dad8) single_mobtv_pg_channel_thumb_pane

0xe097,	// (0x0001dae1) single_tv_pg_channel_pane_g1

0xe0a0,	// (0x0001daea) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0001f65d) single_tv_pg_channel_pane_g

0xc741,	// (0x0001c18b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc741,	// (0x0001c18b) bg_single_mobtv_pg_channel_thumb_pane

0xe0a9,	// (0x0001daf3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0a9,	// (0x0001daf3) single_mobtv_pg_channel_thumb_pane_g1

0xe0b7,	// (0x0001db01) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0b7,	// (0x0001db01) single_mobtv_pg_channel_thumb_pane_g2

0xe0c3,	// (0x0001db0d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0c3,	// (0x0001db0d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0001f662) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0001f662) single_mobtv_pg_channel_thumb_pane_g

0xe0cf,	// (0x0001db19) single_mobtv_pg_channel_thumb_pane_t1

0xe0dd,	// (0x0001db27) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0001f669) single_mobtv_pg_channel_thumb_pane_t

0xc51a,	// (0x0001bf64) bg_single_mobtv_pg_channel_table_pane_g1

0xc51a,	// (0x0001bf64) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0001f10b) bg_single_mobtv_pg_channel_table_pane_g

0xe0eb,	// (0x0001db35) single_mobtv_pg_channel_table_pane_t1

0xe0f9,	// (0x0001db43) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0001f66e) single_mobtv_pg_channel_table_pane_t

0x7537,	// (0x00016f81) main_mobtv_info_pane_g1_ParamLimits

0x7537,	// (0x00016f81) main_mobtv_info_pane_g1

0x7555,	// (0x00016f9f) main_mobtv_info_pane_t1_ParamLimits

0x7555,	// (0x00016f9f) main_mobtv_info_pane_t1

0x75cd,	// (0x00017017) main_mobtv_info_pane_t2_ParamLimits

0x75cd,	// (0x00017017) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0001f678) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0001f678) main_mobtv_info_pane_t

0x765e,	// (0x000170a8) wait_bar_pane_cp05

0x7670,	// (0x000170ba) main_mobtv_loading_pane_g1_ParamLimits

0x7670,	// (0x000170ba) main_mobtv_loading_pane_g1

0x7681,	// (0x000170cb) main_mobtv_loading_pane_g2_ParamLimits

0x7681,	// (0x000170cb) main_mobtv_loading_pane_g2

0x768d,	// (0x000170d7) main_mobtv_loading_pane_g3_ParamLimits

0x768d,	// (0x000170d7) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0001f67f) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0001f67f) main_mobtv_loading_pane_g

0xe107,	// (0x0001db51) main_mobtv_loading_pane_t1_ParamLimits

0xe107,	// (0x0001db51) main_mobtv_loading_pane_t1

0xe11f,	// (0x0001db69) main_mobtv_loading_pane_t2_ParamLimits

0xe11f,	// (0x0001db69) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0001f686) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0001f686) main_mobtv_loading_pane_t

0x76a0,	// (0x000170ea) wait_bar_pane_cp06_ParamLimits

0x76a0,	// (0x000170ea) wait_bar_pane_cp06

0xe143,	// (0x0001db8d) main_mobtv_programe_curr_pane_t1

0xe151,	// (0x0001db9b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0001f68b) main_mobtv_programe_curr_pane_t

0xe15f,	// (0x0001dba9) main_mobtv_programe_next_pane_t1

0xe16d,	// (0x0001dbb7) main_mobtv_programe_next_pane_t2

0xe17b,	// (0x0001dbc5) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0001f690) main_mobtv_programe_next_pane_t

0x95ee,	// (0x00019038) bg_popup_mobtv_noti_window_pane

0xe189,	// (0x0001dbd3) popup_mobtv_noti_window_g1

0xe191,	// (0x0001dbdb) popup_mobtv_noti_window_t1

0xe19f,	// (0x0001dbe9) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0001f697) popup_mobtv_noti_window_t

0xc51a,	// (0x0001bf64) bg_popup_mobtv_noti_window_pane_g1

0x95ee,	// (0x00019038) sc_clock_pane

0x95ee,	// (0x00019038) main_fs_bigclock_pane

0x6ce9,	// (0x00016733) blid2_tripm_pane_t4_ParamLimits

0x6ce9,	// (0x00016733) blid2_tripm_pane_t4

0x76af,	// (0x000170f9) sc_clock_pane_g1_ParamLimits

0x76af,	// (0x000170f9) sc_clock_pane_g1

0x76c1,	// (0x0001710b) sc_clock_pane_t1_ParamLimits

0x76c1,	// (0x0001710b) sc_clock_pane_t1

0x76e5,	// (0x0001712f) sc_clock_pane_t2_ParamLimits

0x76e5,	// (0x0001712f) sc_clock_pane_t2

0x76fd,	// (0x00017147) sc_clock_pane_t3_ParamLimits

0x76fd,	// (0x00017147) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0001f69c) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0001f69c) sc_clock_pane_t

0x8945,	// (0x0001838f) main_fs_bigclock_indicator_pane_ParamLimits

0x8945,	// (0x0001838f) main_fs_bigclock_indicator_pane

0x77c3,	// (0x0001720d) main_fs_bigclock_pane_g1_ParamLimits

0x77c3,	// (0x0001720d) main_fs_bigclock_pane_g1

0x8951,	// (0x0001839b) main_fs_bigclock_pane_t1_ParamLimits

0x8951,	// (0x0001839b) main_fs_bigclock_pane_t1

0x8963,	// (0x000183ad) main_fs_bigclock_pane_t2_ParamLimits

0x8963,	// (0x000183ad) main_fs_bigclock_pane_t2

0x8977,	// (0x000183c1) main_fs_bigclock_pane_t3_ParamLimits

0x8977,	// (0x000183c1) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x0001f8a5) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x0001f8a5) main_fs_bigclock_pane_t

0xec18,	// (0x0001e662) main_fs_bigclock_indicator_pane_g1

0xdeb3,	// (0x0001d8fd) ncim_query_content_pane_g2_ParamLimits

0xdeb3,	// (0x0001d8fd) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0001f629) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0001f629) ncim_query_content_pane_g

0x7714,	// (0x0001715e) sc_clock_pane_t4_ParamLimits

0x7714,	// (0x0001715e) sc_clock_pane_t4

0x9663,	// (0x000190ad) main_radioblah_pane

0xd0e1,	// (0x0001cb2b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0e1,	// (0x0001cb2b) cell_call4_button_pane_t1_copy1

0x7307,	// (0x00016d51) main_ncimui_pane_t1_ParamLimits

0x7307,	// (0x00016d51) main_ncimui_pane_t1

0x7321,	// (0x00016d6b) main_ncimui_pane_t2_ParamLimits

0x7321,	// (0x00016d6b) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0001f622) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0001f622) main_ncimui_pane_t

0xe1ad,	// (0x0001dbf7) main_radioblah_anim_pane_ParamLimits

0xe1ad,	// (0x0001dbf7) main_radioblah_anim_pane

0xe1be,	// (0x0001dc08) main_radioblah_info_pane_ParamLimits

0xe1be,	// (0x0001dc08) main_radioblah_info_pane

0xe1d2,	// (0x0001dc1c) main_radioblah_pane_t1_ParamLimits

0xe1d2,	// (0x0001dc1c) main_radioblah_pane_t1

0xe1ee,	// (0x0001dc38) main_radioblah_pane_t2_ParamLimits

0xe1ee,	// (0x0001dc38) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0001f6bd) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0001f6bd) main_radioblah_pane_t

0x796c,	// (0x000173b6) main_radioblah_rocker_ctrl_pane_ParamLimits

0x796c,	// (0x000173b6) main_radioblah_rocker_ctrl_pane

0xe236,	// (0x0001dc80) main_radioblah_info_pane_t1_ParamLimits

0xe236,	// (0x0001dc80) main_radioblah_info_pane_t1

0x79c4,	// (0x0001740e) main_radioblah_info_pane_t2_ParamLimits

0x79c4,	// (0x0001740e) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0001f6c6) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0001f6c6) main_radioblah_info_pane_t

0xc51a,	// (0x0001bf64) main_radioblah_rocker_ctrl_pane_g1

0x7a74,	// (0x000174be) main_radioblah_rocker_ctrl_pane_g2

0x7a7c,	// (0x000174c6) main_radioblah_rocker_ctrl_pane_g3

0x7a84,	// (0x000174ce) main_radioblah_rocker_ctrl_pane_g4

0x7a8c,	// (0x000174d6) main_radioblah_rocker_ctrl_pane_g5

0x7a94,	// (0x000174de) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0001f6cf) main_radioblah_rocker_ctrl_pane_g

0x6f78,	// (0x000169c2) main_cset_text2_pane_t1_copy1_ParamLimits

0xd171,	// (0x0001cbbb) cam4_image_uncrop_qvga_pane

0xd1c6,	// (0x0001cc10) vid4_image_uncrop_qcif_pane

0xdad3,	// (0x0001d51d) cam6_image_uncrop_qvga_pane_ParamLimits

0xdad3,	// (0x0001d51d) cam6_image_uncrop_qvga_pane

0xdb9b,	// (0x0001d5e5) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb9b,	// (0x0001d5e5) vid6_image_uncrop_qcif_pane

0x95ee,	// (0x00019038) bg_popup_preview_window_pane_cp03

0xde65,	// (0x0001d8af) list_cset_text2_pane

0xde6d,	// (0x0001d8b7) main_cset6_text2_pane_g1

0xde75,	// (0x0001d8bf) main_cset6_text2_pane_t1

0xeeeb,	// (0x0001e935) list_cset_text2_pane_t1_ParamLimits

0xeeeb,	// (0x0001e935) list_cset_text2_pane_t1

0x9663,	// (0x000190ad) main_radioblah_pane_ParamLimits

0x764a,	// (0x00017094) main_mobtv_info_pane_t3_ParamLimits

0x764a,	// (0x00017094) main_mobtv_info_pane_t3

0x795a,	// (0x000173a4) main_radioblah_pane_g1

0x7994,	// (0x000173de) main_radioblah_info_pane_g1

0x7a19,	// (0x00017463) main_radioblah_info_pane_t3_ParamLimits

0x7a19,	// (0x00017463) main_radioblah_info_pane_t3

0x1cd3,	// (0x0001171d) highlight_cell_cale_month_pane_ParamLimits

0x1cd3,	// (0x0001171d) highlight_cell_cale_month_pane

0x95ee,	// (0x00019038) main_phob_fisheye_pane

0xc829,	// (0x0001c273) scroll_pane_cp0031_ParamLimits

0xc829,	// (0x0001c273) scroll_pane_cp0031

0xdcad,	// (0x0001d6f7) wait_bar_pane_cp08_ParamLimits

0x7001,	// (0x00016a4b) cset_list_set_pane_copy1_ParamLimits

0xe270,	// (0x0001dcba) highlight_cell_cale_month_pane_g1

0x7a9c,	// (0x000174e6) highlight_cell_cale_month_pane_t1

0xd8da,	// (0x0001d324) list_gen_pane_cp01

0xd3e8,	// (0x0001ce32) scroll_pane_01

0x7aaa,	// (0x000174f4) list_single_double_fisheye_pane

0x7ab3,	// (0x000174fd) list_double_fisheye_pane_g1_ParamLimits

0x7ab3,	// (0x000174fd) list_double_fisheye_pane_g1

0x7abf,	// (0x00017509) list_double_fisheye_pane_g2_ParamLimits

0x7abf,	// (0x00017509) list_double_fisheye_pane_g2

0x7ad3,	// (0x0001751d) list_double_fisheye_pane_g3_ParamLimits

0x7ad3,	// (0x0001751d) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0001f6dc) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0001f6dc) list_double_fisheye_pane_g

0x7afc,	// (0x00017546) list_double_fisheye_pane_t1_ParamLimits

0x7afc,	// (0x00017546) list_double_fisheye_pane_t1

0x7b17,	// (0x00017561) list_double_fisheye_pane_t2_ParamLimits

0x7b17,	// (0x00017561) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0001f6e7) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0001f6e7) list_double_fisheye_pane_t

0x95ee,	// (0x00019038) main_call5_pane

0x773f,	// (0x00017189) sc_swipe_pane_ParamLimits

0x773f,	// (0x00017189) sc_swipe_pane

0x7b4c,	// (0x00017596) call5_image_pane_ParamLimits

0x7b4c,	// (0x00017596) call5_image_pane

0x7b69,	// (0x000175b3) call5_swipe_1_pane_ParamLimits

0x7b69,	// (0x000175b3) call5_swipe_1_pane

0x7b7c,	// (0x000175c6) call5_swipe_2_pane_ParamLimits

0x7b7c,	// (0x000175c6) call5_swipe_2_pane

0x7ba7,	// (0x000175f1) popup_call5_audio_first_window_ParamLimits

0x7ba7,	// (0x000175f1) popup_call5_audio_first_window

0xc741,	// (0x0001c18b) call5_swipe_1_pane_g1_ParamLimits

0xc741,	// (0x0001c18b) call5_swipe_1_pane_g1

0xe278,	// (0x0001dcc2) call5_swipe_1_pane_g2_ParamLimits

0xe278,	// (0x0001dcc2) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0001f6ec) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0001f6ec) call5_swipe_1_pane_g

0xe284,	// (0x0001dcce) call5_swipe_1_pane_t1_ParamLimits

0xe284,	// (0x0001dcce) call5_swipe_1_pane_t1

0xc741,	// (0x0001c18b) call5_swipe_2_pane_g1_ParamLimits

0xc741,	// (0x0001c18b) call5_swipe_2_pane_g1

0xe299,	// (0x0001dce3) call5_swipe_2_pane_g2_ParamLimits

0xe299,	// (0x0001dce3) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0001f6f1) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0001f6f1) call5_swipe_2_pane_g

0xe2a5,	// (0x0001dcef) call5_swipe_2_pane_t1_ParamLimits

0xe2a5,	// (0x0001dcef) call5_swipe_2_pane_t1

0xe2ba,	// (0x0001dd04) sc_swipe_pane_g1_ParamLimits

0xe2ba,	// (0x0001dd04) sc_swipe_pane_g1

0xe2c7,	// (0x0001dd11) sc_swipe_pane_g2_ParamLimits

0xe2c7,	// (0x0001dd11) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0001f6f6) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0001f6f6) sc_swipe_pane_g

0xe2d3,	// (0x0001dd1d) sc_swipe_pane_t1_ParamLimits

0xe2d3,	// (0x0001dd1d) sc_swipe_pane_t1

0x95ee,	// (0x00019038) main_cmail_launcher_pane

0x7bbc,	// (0x00017606) aid_size_cell_cmail_l_ParamLimits

0x7bbc,	// (0x00017606) aid_size_cell_cmail_l

0x7bca,	// (0x00017614) grid_cmail_l_pane_ParamLimits

0x7bca,	// (0x00017614) grid_cmail_l_pane

0x7be3,	// (0x0001762d) cell_cmail_l_pane_ParamLimits

0x7be3,	// (0x0001762d) cell_cmail_l_pane

0xe2e8,	// (0x0001dd32) cell_cmail_l_pane_g1_ParamLimits

0xe2e8,	// (0x0001dd32) cell_cmail_l_pane_g1

0xe2f4,	// (0x0001dd3e) cell_cmail_l_pane_t1_ParamLimits

0xe2f4,	// (0x0001dd3e) cell_cmail_l_pane_t1

0xe30a,	// (0x0001dd54) cell_cmail_l_pane_t2_ParamLimits

0xe30a,	// (0x0001dd54) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0001f6fb) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0001f6fb) cell_cmail_l_pane_t

0x9663,	// (0x000190ad) grid_highlight_pane_cp018_ParamLimits

0x9663,	// (0x000190ad) grid_highlight_pane_cp018

0xfb8f,	// (0x0000f5d9) main2_pane_ParamLimits

0xfb8f,	// (0x0000f5d9) main2_pane

0x9ec1,	// (0x0001990b) popup_sp_fs_action_menu_bg_pane_g1

0x9ec9,	// (0x00019913) popup_sp_fs_action_menu_bg_pane_g2

0x9ed1,	// (0x0001991b) popup_sp_fs_action_menu_bg_pane_g3

0x9ed9,	// (0x00019923) popup_sp_fs_action_menu_bg_pane_g4

0x9ee1,	// (0x0001992b) popup_sp_fs_action_menu_bg_pane_g5

0x9ee9,	// (0x00019933) popup_sp_fs_action_menu_bg_pane_g6

0x9ef1,	// (0x0001993b) popup_sp_fs_action_menu_bg_pane_g7

0x9ef9,	// (0x00019943) popup_sp_fs_action_menu_bg_pane_g8

0x9f01,	// (0x0001994b) popup_sp_fs_action_menu_bg_pane_g9

0x9f09,	// (0x00019953) popup_sp_fs_action_menu_bg_pane_g10

0x9f09,	// (0x00019953) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0001ebb9) popup_sp_fs_action_menu_bg_pane_g

0x0b3c,	// (0x00010586) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x2_t3_g3_g1

0x0b48,	// (0x00010592) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0b48,	// (0x00010592) list_medium_line_x2_t3_g3_g2

0x0b54,	// (0x0001059e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b54,	// (0x0001059e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0001ec67) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0001ec67) list_medium_line_x2_t3_g3_g

0x0b60,	// (0x000105aa) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b60,	// (0x000105aa) list_medium_line_x2_t3_g3_t1

0x0b75,	// (0x000105bf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b75,	// (0x000105bf) list_medium_line_x2_t3_g3_t2

0x0b89,	// (0x000105d3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0b89,	// (0x000105d3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0001ec6e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0001ec6e) list_medium_line_x2_t3_g3_t

0x0b3c,	// (0x00010586) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x2_t3_g2_g1

0x0b54,	// (0x0001059e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b54,	// (0x0001059e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0001ec75) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0001ec75) list_medium_line_x2_t3_g2_g

0x0b9e,	// (0x000105e8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0b9e,	// (0x000105e8) list_medium_line_x2_t3_g2_t1

0x0bb4,	// (0x000105fe) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0bb4,	// (0x000105fe) list_medium_line_x2_t3_g2_t2

0x0bc6,	// (0x00010610) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0bc6,	// (0x00010610) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0001ec7a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0001ec7a) list_medium_line_x2_t3_g2_t

0x0b3c,	// (0x00010586) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x2_t4_g4_g1

0x0be4,	// (0x0001062e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0be4,	// (0x0001062e) list_medium_line_x2_t4_g4_g2

0x0b48,	// (0x00010592) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0b48,	// (0x00010592) list_medium_line_x2_t4_g4_g3

0x0bf0,	// (0x0001063a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0bf0,	// (0x0001063a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0001ec81) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0001ec81) list_medium_line_x2_t4_g4_g

0x0bfc,	// (0x00010646) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0bfc,	// (0x00010646) list_medium_line_x2_t4_g4_t1

0x0c16,	// (0x00010660) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c16,	// (0x00010660) list_medium_line_x2_t4_g4_t2

0x0c2c,	// (0x00010676) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0c2c,	// (0x00010676) list_medium_line_x2_t4_g4_t3

0x0c41,	// (0x0001068b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0c41,	// (0x0001068b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0001ec8a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0001ec8a) list_medium_line_x2_t4_g4_t

0x0b3c,	// (0x00010586) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x2_t2_g4_g1

0x0be4,	// (0x0001062e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0be4,	// (0x0001062e) list_medium_line_x2_t2_g4_g2

0x0b48,	// (0x00010592) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0b48,	// (0x00010592) list_medium_line_x2_t2_g4_g3

0x0b54,	// (0x0001059e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b54,	// (0x0001059e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0001ecf1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0001ecf1) list_medium_line_x2_t2_g4_g

0x1cf9,	// (0x00011743) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1cf9,	// (0x00011743) list_medium_line_x2_t2_g4_t1

0x0b89,	// (0x000105d3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0b89,	// (0x000105d3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0001ecfa) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0001ecfa) list_medium_line_x2_t2_g4_t

0x0b3c,	// (0x00010586) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x2_t2_g3_g1

0x0b48,	// (0x00010592) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0b48,	// (0x00010592) list_medium_line_x2_t2_g3_g2

0x0b54,	// (0x0001059e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b54,	// (0x0001059e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0001ec67) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0001ec67) list_medium_line_x2_t2_g3_g

0x1d0e,	// (0x00011758) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1d0e,	// (0x00011758) list_medium_line_x2_t2_g3_t1

0x0b89,	// (0x000105d3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0b89,	// (0x000105d3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0001ecff) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0001ecff) list_medium_line_x2_t2_g3_t

0x1e6d,	// (0x000118b7) main_sp_fs_list_pane_ParamLimits

0x1e6d,	// (0x000118b7) main_sp_fs_list_pane

0xd5f2,	// (0x0001d03c) sp_fs_scroll_pane_ParamLimits

0xd5f2,	// (0x0001d03c) sp_fs_scroll_pane

0x1e79,	// (0x000118c3) list_medium_line_x2_t3_t1

0x1e89,	// (0x000118d3) list_medium_line_x2_t3_t2

0x1e97,	// (0x000118e1) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0001ed4a) list_medium_line_x2_t3_t

0x1ea5,	// (0x000118ef) list_medium_line_x3_t4_t1

0x1eb5,	// (0x000118ff) list_medium_line_x3_t4_t2

0x1ec3,	// (0x0001190d) list_medium_line_x3_t4_t3

0x1e97,	// (0x000118e1) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0001ed51) list_medium_line_x3_t4_t

0x1ed1,	// (0x0001191b) list_medium_line_x4_t5_t1

0x1ee1,	// (0x0001192b) list_medium_line_x4_t5_t2

0x1ec3,	// (0x0001190d) list_medium_line_x4_t5_t3

0x1eef,	// (0x00011939) list_medium_line_x4_t5_t4

0x1e97,	// (0x000118e1) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0001ed5a) list_medium_line_x4_t5_t

0x0b3c,	// (0x00010586) list_medium_line_t4_g4_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_t4_g4_g1

0x0bf0,	// (0x0001063a) list_medium_line_t4_g4_g2_ParamLimits

0x0bf0,	// (0x0001063a) list_medium_line_t4_g4_g2

0x1efd,	// (0x00011947) list_medium_line_t4_g4_g3_ParamLimits

0x1efd,	// (0x00011947) list_medium_line_t4_g4_g3

0x0b54,	// (0x0001059e) list_medium_line_t4_g4_g4_ParamLimits

0x0b54,	// (0x0001059e) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0001ed65) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0001ed65) list_medium_line_t4_g4_g

0x1f09,	// (0x00011953) list_medium_line_t4_g4_t1_ParamLimits

0x1f09,	// (0x00011953) list_medium_line_t4_g4_t1

0x1f1e,	// (0x00011968) list_medium_line_t4_g4_t2_ParamLimits

0x1f1e,	// (0x00011968) list_medium_line_t4_g4_t2

0x1f34,	// (0x0001197e) list_medium_line_t4_g4_t3_ParamLimits

0x1f34,	// (0x0001197e) list_medium_line_t4_g4_t3

0x0b89,	// (0x000105d3) list_medium_line_t4_g4_t4_ParamLimits

0x0b89,	// (0x000105d3) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0001ed6e) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0001ed6e) list_medium_line_t4_g4_t

0x2010,	// (0x00011a5a) chi_dic_find_pane_g1

0x3166,	// (0x00012bb0) main_tport_pane

0x6318,	// (0x00015d62) list_medium_line_plain_t1

0x63ca,	// (0x00015e14) list_medium_line_t2_g2_g1_ParamLimits

0x63ca,	// (0x00015e14) list_medium_line_t2_g2_g1

0x63d6,	// (0x00015e20) list_medium_line_t2_g2_g2_ParamLimits

0x63d6,	// (0x00015e20) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0001f433) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0001f433) list_medium_line_t2_g2_g

0x63e2,	// (0x00015e2c) list_medium_line_t2_g2_t1_ParamLimits

0x63e2,	// (0x00015e2c) list_medium_line_t2_g2_t1

0x63fc,	// (0x00015e46) list_medium_line_t2_g2_t2_ParamLimits

0x63fc,	// (0x00015e46) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0001f438) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0001f438) list_medium_line_t2_g2_t

0xd935,	// (0x0001d37f) aid_sp_fs_list_icon_a_sm

0xd93d,	// (0x0001d387) aid_sp_fs_list_icon_d

0xd945,	// (0x0001d38f) aid_sp_fs_text_primary

0xd94e,	// (0x0001d398) aid_sp_fs_text_secondary

0x6a96,	// (0x000164e0) list_medium_line

0x6a96,	// (0x000164e0) list_medium_line_g2

0x6a96,	// (0x000164e0) list_medium_line_g3

0x6a96,	// (0x000164e0) list_medium_line_plain

0x6a96,	// (0x000164e0) list_medium_line_plain_t2

0x6a96,	// (0x000164e0) list_medium_line_plain_t3

0x6a96,	// (0x000164e0) list_medium_line_right_icon

0x6a96,	// (0x000164e0) list_medium_line_right_iconx2

0x6a96,	// (0x000164e0) list_medium_line_t2

0x6a96,	// (0x000164e0) list_medium_line_t2_g2

0x6a96,	// (0x000164e0) list_medium_line_t2_g3

0x6a96,	// (0x000164e0) list_medium_line_t2_right_icon

0x6a96,	// (0x000164e0) list_medium_line_t2_right_iconx2

0x6a96,	// (0x000164e0) list_medium_line_t3

0x6a96,	// (0x000164e0) list_medium_line_t3_g2

0x6a96,	// (0x000164e0) list_medium_line_t3_g3

0x6a96,	// (0x000164e0) list_medium_line_t3_right_iconx2

0x6a9f,	// (0x000164e9) list_medium_line_t4_g4

0x6aa8,	// (0x000164f2) list_medium_line_x2

0x6aa8,	// (0x000164f2) list_medium_line_x2_t2_g2

0x6aa8,	// (0x000164f2) list_medium_line_x2_t2_g3

0x6aa8,	// (0x000164f2) list_medium_line_x2_t2_g4

0x6aa8,	// (0x000164f2) list_medium_line_x2_t3

0x6aa8,	// (0x000164f2) list_medium_line_x2_t3_g2

0x6aa8,	// (0x000164f2) list_medium_line_x2_t3_g3

0x6aa8,	// (0x000164f2) list_medium_line_x2_t3_g4

0x6aa8,	// (0x000164f2) list_medium_line_x2_t4_g2

0x6aa8,	// (0x000164f2) list_medium_line_x2_t4_g4

0x6ab1,	// (0x000164fb) list_medium_line_x3

0x6ab1,	// (0x000164fb) list_medium_line_x3_t4

0x6ab1,	// (0x000164fb) list_medium_line_x3_t4_g4

0x6a9f,	// (0x000164e9) list_medium_line_x4_t4

0x6a9f,	// (0x000164e9) list_medium_line_x4_t4_g7

0x6a9f,	// (0x000164e9) list_medium_line_x4_t5

0x6aba,	// (0x00016504) list_single_fs_dyc_pane_ParamLimits

0x6aba,	// (0x00016504) list_single_fs_dyc_pane

0x0b3c,	// (0x00010586) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x4_t4_g7_g1

0x7205,	// (0x00016c4f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7205,	// (0x00016c4f) list_medium_line_x4_t4_g7_g2

0x7211,	// (0x00016c5b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7211,	// (0x00016c5b) list_medium_line_x4_t4_g7_g3

0x7220,	// (0x00016c6a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7220,	// (0x00016c6a) list_medium_line_x4_t4_g7_g4

0x722c,	// (0x00016c76) list_medium_line_x4_t4_g7_g5_ParamLimits

0x722c,	// (0x00016c76) list_medium_line_x4_t4_g7_g5

0x723b,	// (0x00016c85) list_medium_line_x4_t4_g7_g6_ParamLimits

0x723b,	// (0x00016c85) list_medium_line_x4_t4_g7_g6

0x724a,	// (0x00016c94) list_medium_line_x4_t4_g7_g7_ParamLimits

0x724a,	// (0x00016c94) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0001f603) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0001f603) list_medium_line_x4_t4_g7_g

0x7256,	// (0x00016ca0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7256,	// (0x00016ca0) list_medium_line_x4_t4_g7_t1

0x726b,	// (0x00016cb5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x726b,	// (0x00016cb5) list_medium_line_x4_t4_g7_t2

0x7280,	// (0x00016cca) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7280,	// (0x00016cca) list_medium_line_x4_t4_g7_t3

0x7295,	// (0x00016cdf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7295,	// (0x00016cdf) list_medium_line_x4_t4_g7_t4

0x72a7,	// (0x00016cf1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x72a7,	// (0x00016cf1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0001f612) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0001f612) list_medium_line_x4_t4_g7_t

0x72b9,	// (0x00016d03) list_single_dyc_row_pane_ParamLimits

0x72b9,	// (0x00016d03) list_single_dyc_row_pane

0x7b39,	// (0x00017583) call5_gesture_pane_ParamLimits

0x7b39,	// (0x00017583) call5_gesture_pane

0x7b8f,	// (0x000175d9) call5_windows_pane_ParamLimits

0x7b8f,	// (0x000175d9) call5_windows_pane

0x7bf5,	// (0x0001763f) call5_swipe_1_pane_cp_ParamLimits

0x7bf5,	// (0x0001763f) call5_swipe_1_pane_cp

0x7c01,	// (0x0001764b) call5_swipe_2_pane_cp_ParamLimits

0x7c01,	// (0x0001764b) call5_swipe_2_pane_cp

0xa018,	// (0x00019a62) call5_image_pane_cp

0x7c0d,	// (0x00017657) popup_call5_audio_first_window_cp_ParamLimits

0x7c0d,	// (0x00017657) popup_call5_audio_first_window_cp

0xe2ba,	// (0x0001dd04) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2ba,	// (0x0001dd04) call5_swipe_1_pane_g1_cp

0xe327,	// (0x0001dd71) call5_swipe_1_pane_g2_cp

0xe2d3,	// (0x0001dd1d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2d3,	// (0x0001dd1d) call5_swipe_1_pane_t1_cp

0xe2ba,	// (0x0001dd04) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2ba,	// (0x0001dd04) call5_swipe_2_pane_g1_cp

0xe32f,	// (0x0001dd79) call5_swipe_2_pane_g2_cp

0xe337,	// (0x0001dd81) call5_swipe_2_pane_t1_cp_ParamLimits

0xe337,	// (0x0001dd81) call5_swipe_2_pane_t1_cp

0x9663,	// (0x000190ad) main_sp_fs_email_pane

0xd4c1,	// (0x0001cf0b) main_sp_fs_listscroll_pane_te

0x7c1b,	// (0x00017665) popup_sp_fs_action_menu_pane_ParamLimits

0x7c1b,	// (0x00017665) popup_sp_fs_action_menu_pane

0xc51a,	// (0x0001bf64) bg_sp_fs_ctrlbar_pane_g1

0xe34c,	// (0x0001dd96) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe355,	// (0x0001dd9f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe35e,	// (0x0001dda8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc51a,	// (0x0001bf64) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0001f700) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc2f9,	// (0x0001bd43) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc2f9,	// (0x0001bd43) bg_sp_fs_ctrlbar_ddmenu_pane

0xe367,	// (0x0001ddb1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe367,	// (0x0001ddb1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe373,	// (0x0001ddbd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe373,	// (0x0001ddbd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0001f709) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0001f709) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe37f,	// (0x0001ddc9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe37f,	// (0x0001ddc9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c61,	// (0x000176ab) list_medium_line_t2_right_icon_g1

0x7c69,	// (0x000176b3) list_medium_line_t2_right_icon_t1

0x7c79,	// (0x000176c3) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0001f70e) list_medium_line_t2_right_icon_t

0xbfd0,	// (0x0001ba1a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbfd0,	// (0x0001ba1a) bg_sp_fs_ctrlbar_pane

0x7cd8,	// (0x00017722) main_sp_fs_ctrlbar_button_pane_cp01

0x7ce2,	// (0x0001772c) main_sp_fs_ctrlbar_ddmenu_pane

0xe3d3,	// (0x0001de1d) main_sp_fs_ctrlbar_pane_g1

0xe3df,	// (0x0001de29) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0001f713) main_sp_fs_ctrlbar_pane_g

0x7d20,	// (0x0001776a) main_sp_fs_ctrlbar_pane_t1

0x7d5f,	// (0x000177a9) main_sp_fs_ctrlbar_pane

0x7d83,	// (0x000177cd) main_sp_fs_listscroll_pane_te_cp01

0x7da3,	// (0x000177ed) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7da3,	// (0x000177ed) popup_sp_fs_action_menu_pane_cp01

0x9663,	// (0x000190ad) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9663,	// (0x000190ad) bg_sp_fs_highlight_list_pane_cp01

0xe406,	// (0x0001de50) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe406,	// (0x0001de50) sp_fs_action_menu_list_gene_pane_g1

0xe415,	// (0x0001de5f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe415,	// (0x0001de5f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0001f721) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0001f721) sp_fs_action_menu_list_gene_pane_g

0xe422,	// (0x0001de6c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe422,	// (0x0001de6c) sp_fs_action_menu_list_gene_pane_t1

0xe43a,	// (0x0001de84) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe43a,	// (0x0001de84) sp_fs_action_menu_list_gene_pane

0xe45d,	// (0x0001dea7) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe45d,	// (0x0001dea7) popup_sp_fs_action_menu_bg_pane

0xe46b,	// (0x0001deb5) sp_fs_action_menu_list_pane_ParamLimits

0xe46b,	// (0x0001deb5) sp_fs_action_menu_list_pane

0x7dd9,	// (0x00017823) sp_fs_scroll_pane_cp01_ParamLimits

0x7dd9,	// (0x00017823) sp_fs_scroll_pane_cp01

0x7dff,	// (0x00017849) list_medium_line_plain_t2_t1

0x7e0f,	// (0x00017859) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0001f726) list_medium_line_plain_t2_t

0x7e1f,	// (0x00017869) list_medium_line_plain_t3_t1

0x7e2f,	// (0x00017879) list_medium_line_plain_t3_t2

0x7e3d,	// (0x00017887) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0001f72b) list_medium_line_plain_t3_t

0x0b3c,	// (0x00010586) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x2_t2_g2_g1

0x0b54,	// (0x0001059e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b54,	// (0x0001059e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0001ec75) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0001ec75) list_medium_line_x2_t2_g2_g

0x1f09,	// (0x00011953) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1f09,	// (0x00011953) list_medium_line_x2_t2_g2_t1

0x0b89,	// (0x000105d3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0b89,	// (0x000105d3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0001f732) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0001f732) list_medium_line_x2_t2_g2_t

0x0b3c,	// (0x00010586) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x2_t4_g2_g1

0x0b54,	// (0x0001059e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0b54,	// (0x0001059e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0001ec75) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0001ec75) list_medium_line_x2_t4_g2_g

0x7e4b,	// (0x00017895) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e4b,	// (0x00017895) list_medium_line_x2_t4_g2_t1

0x7e65,	// (0x000178af) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e65,	// (0x000178af) list_medium_line_x2_t4_g2_t2

0x7e7b,	// (0x000178c5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e7b,	// (0x000178c5) list_medium_line_x2_t4_g2_t3

0x0b89,	// (0x000105d3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0b89,	// (0x000105d3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfced,	// (0x0001f737) list_medium_line_x2_t4_g2_t_ParamLimits

0xfced,	// (0x0001f737) list_medium_line_x2_t4_g2_t

0x7e90,	// (0x000178da) list_medium_line_t3_right_iconx2_g1

0x7c61,	// (0x000176ab) list_medium_line_t3_right_iconx2_g2

0x7e98,	// (0x000178e2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf6,	// (0x0001f740) list_medium_line_t3_right_iconx2_g

0x7ea2,	// (0x000178ec) list_medium_line_t3_right_iconx2_t1

0x7eb2,	// (0x000178fc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfd,	// (0x0001f747) list_medium_line_t3_right_iconx2_t

0x0b3c,	// (0x00010586) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x3_t4_g4_g1

0x0b48,	// (0x00010592) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0b48,	// (0x00010592) list_medium_line_x3_t4_g4_g2

0x0bf0,	// (0x0001063a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0bf0,	// (0x0001063a) list_medium_line_x3_t4_g4_g3

0x7ec0,	// (0x0001790a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7ec0,	// (0x0001790a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd02,	// (0x0001f74c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd02,	// (0x0001f74c) list_medium_line_x3_t4_g4_g

0x7ecc,	// (0x00017916) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ecc,	// (0x00017916) list_medium_line_x3_t4_g4_t1

0x7ee3,	// (0x0001792d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7ee3,	// (0x0001792d) list_medium_line_x3_t4_g4_t2

0x7efc,	// (0x00017946) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7efc,	// (0x00017946) list_medium_line_x3_t4_g4_t3

0x7f11,	// (0x0001795b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f11,	// (0x0001795b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0b,	// (0x0001f755) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0b,	// (0x0001f755) list_medium_line_x3_t4_g4_t

0x7f2e,	// (0x00017978) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f2e,	// (0x00017978) list_single_dyc_row_text_pane_t1

0x7f77,	// (0x000179c1) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f77,	// (0x000179c1) list_single_dyc_row_text_pane_t2

0xe48f,	// (0x0001ded9) list_single_dyc_row_text_pane_t3_ParamLimits

0xe48f,	// (0x0001ded9) list_single_dyc_row_text_pane_t3

0x0005,

0xfd14,	// (0x0001f75e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd14,	// (0x0001f75e) list_single_dyc_row_text_pane_t

0xe4b3,	// (0x0001defd) list_single_dyc_row_pane_g1_ParamLimits

0xe4b3,	// (0x0001defd) list_single_dyc_row_pane_g1

0xe4bf,	// (0x0001df09) list_single_dyc_row_pane_g2_ParamLimits

0xe4bf,	// (0x0001df09) list_single_dyc_row_pane_g2

0xe4cb,	// (0x0001df15) list_single_dyc_row_pane_g3_ParamLimits

0xe4cb,	// (0x0001df15) list_single_dyc_row_pane_g3

0xe4d7,	// (0x0001df21) list_single_dyc_row_pane_g4_ParamLimits

0xe4d7,	// (0x0001df21) list_single_dyc_row_pane_g4

0x0003,

0xfd21,	// (0x0001f76b) list_single_dyc_row_pane_g_ParamLimits

0xfd21,	// (0x0001f76b) list_single_dyc_row_pane_g

0xe4e3,	// (0x0001df2d) list_single_dyc_row_text_pane_ParamLimits

0xe4e3,	// (0x0001df2d) list_single_dyc_row_text_pane

0x95ee,	// (0x00019038) bg_sp_fs_scroll_pane

0xe502,	// (0x0001df4c) thumb_sp_fs_scroll_pane

0x63ca,	// (0x00015e14) list_medium_line_g1_ParamLimits

0x63ca,	// (0x00015e14) list_medium_line_g1

0x80ac,	// (0x00017af6) list_medium_line_t1_ParamLimits

0x80ac,	// (0x00017af6) list_medium_line_t1

0x0b3c,	// (0x00010586) list_medium_line_x2_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x2_g1

0x0b48,	// (0x00010592) list_medium_line_x2_g2_ParamLimits

0x0b48,	// (0x00010592) list_medium_line_x2_g2

0x0001,

0xfd2a,	// (0x0001f774) list_medium_line_x2_g_ParamLimits

0xfd2a,	// (0x0001f774) list_medium_line_x2_g

0xe50b,	// (0x0001df55) list_medium_line_x2_t1_ParamLimits

0xe50b,	// (0x0001df55) list_medium_line_x2_t1

0x0b3c,	// (0x00010586) list_medium_line_x3_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x3_g1

0x0b48,	// (0x00010592) list_medium_line_x3_g2_ParamLimits

0x0b48,	// (0x00010592) list_medium_line_x3_g2

0x0001,

0xfd2a,	// (0x0001f774) list_medium_line_x3_g_ParamLimits

0xfd2a,	// (0x0001f774) list_medium_line_x3_g

0xe50b,	// (0x0001df55) list_medium_line_x3_t1_ParamLimits

0xe50b,	// (0x0001df55) list_medium_line_x3_t1

0xe521,	// (0x0001df6b) thumb_sp_fs_scroll_pane_g1

0xe52a,	// (0x0001df74) thumb_sp_fs_scroll_pane_g2

0xe533,	// (0x0001df7d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0001f779) thumb_sp_fs_scroll_pane_g

0xe521,	// (0x0001df6b) bg_sp_fs_scroll_pane_g1

0xe52a,	// (0x0001df74) bg_sp_fs_scroll_pane_g2

0xe533,	// (0x0001df7d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0001f779) bg_sp_fs_scroll_pane_g

0x0b3c,	// (0x00010586) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b3c,	// (0x00010586) list_medium_line_x2_t3_g4_g1

0x0be4,	// (0x0001062e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0be4,	// (0x0001062e) list_medium_line_x2_t3_g4_g2

0x0b48,	// (0x00010592) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0b48,	// (0x00010592) list_medium_line_x2_t3_g4_g3

0x0b54,	// (0x0001059e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b54,	// (0x0001059e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0001ecf1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0001ecf1) list_medium_line_x2_t3_g4_g

0x80c1,	// (0x00017b0b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80c1,	// (0x00017b0b) list_medium_line_x2_t3_g4_t1

0x80d7,	// (0x00017b21) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80d7,	// (0x00017b21) list_medium_line_x2_t3_g4_t2

0x0b89,	// (0x000105d3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0b89,	// (0x000105d3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd36,	// (0x0001f780) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd36,	// (0x0001f780) list_medium_line_x2_t3_g4_t

0x63ca,	// (0x00015e14) list_medium_line_g2_g1_ParamLimits

0x63ca,	// (0x00015e14) list_medium_line_g2_g1

0x63d6,	// (0x00015e20) list_medium_line_g2_g2_ParamLimits

0x63d6,	// (0x00015e20) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0001f433) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0001f433) list_medium_line_g2_g

0x80f1,	// (0x00017b3b) list_medium_line_g2_t1_ParamLimits

0x80f1,	// (0x00017b3b) list_medium_line_g2_t1

0x63ca,	// (0x00015e14) list_medium_line_t3_g2_g1_ParamLimits

0x63ca,	// (0x00015e14) list_medium_line_t3_g2_g1

0x63d6,	// (0x00015e20) list_medium_line_t3_g2_g2_ParamLimits

0x63d6,	// (0x00015e20) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0001f433) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0001f433) list_medium_line_t3_g2_g

0x8106,	// (0x00017b50) list_medium_line_t3_g2_t1_ParamLimits

0x8106,	// (0x00017b50) list_medium_line_t3_g2_t1

0x8120,	// (0x00017b6a) list_medium_line_t3_g2_t2_ParamLimits

0x8120,	// (0x00017b6a) list_medium_line_t3_g2_t2

0x8136,	// (0x00017b80) list_medium_line_t3_g2_t3_ParamLimits

0x8136,	// (0x00017b80) list_medium_line_t3_g2_t3

0x0002,

0xfd3d,	// (0x0001f787) list_medium_line_t3_g2_t_ParamLimits

0xfd3d,	// (0x0001f787) list_medium_line_t3_g2_t

0x7c61,	// (0x000176ab) list_medium_line_right_icon_g1

0x8150,	// (0x00017b9a) list_medium_line_right_icon_t1

0x63ca,	// (0x00015e14) list_medium_line_t2_g1_ParamLimits

0x63ca,	// (0x00015e14) list_medium_line_t2_g1

0x815e,	// (0x00017ba8) list_medium_line_t2_t1_ParamLimits

0x815e,	// (0x00017ba8) list_medium_line_t2_t1

0x8178,	// (0x00017bc2) list_medium_line_t2_t2_ParamLimits

0x8178,	// (0x00017bc2) list_medium_line_t2_t2

0x0001,

0xfd44,	// (0x0001f78e) list_medium_line_t2_t_ParamLimits

0xfd44,	// (0x0001f78e) list_medium_line_t2_t

0x63ca,	// (0x00015e14) list_medium_line_t3_g1_ParamLimits

0x63ca,	// (0x00015e14) list_medium_line_t3_g1

0x8191,	// (0x00017bdb) list_medium_line_t3_t1_ParamLimits

0x8191,	// (0x00017bdb) list_medium_line_t3_t1

0x81ab,	// (0x00017bf5) list_medium_line_t3_t2_ParamLimits

0x81ab,	// (0x00017bf5) list_medium_line_t3_t2

0x81c1,	// (0x00017c0b) list_medium_line_t3_t3_ParamLimits

0x81c1,	// (0x00017c0b) list_medium_line_t3_t3

0x0002,

0xfd49,	// (0x0001f793) list_medium_line_t3_t_ParamLimits

0xfd49,	// (0x0001f793) list_medium_line_t3_t

0x63ca,	// (0x00015e14) list_medium_line_g3_g1_ParamLimits

0x63ca,	// (0x00015e14) list_medium_line_g3_g1

0x81d6,	// (0x00017c20) list_medium_line_g3_g2_ParamLimits

0x81d6,	// (0x00017c20) list_medium_line_g3_g2

0x63d6,	// (0x00015e20) list_medium_line_g3_g3_ParamLimits

0x63d6,	// (0x00015e20) list_medium_line_g3_g3

0x0002,

0xfd50,	// (0x0001f79a) list_medium_line_g3_g_ParamLimits

0xfd50,	// (0x0001f79a) list_medium_line_g3_g

0x81e2,	// (0x00017c2c) list_medium_line_g3_t1_ParamLimits

0x81e2,	// (0x00017c2c) list_medium_line_g3_t1

0x63ca,	// (0x00015e14) list_medium_line_t2_g3_g1_ParamLimits

0x63ca,	// (0x00015e14) list_medium_line_t2_g3_g1

0x81d6,	// (0x00017c20) list_medium_line_t2_g3_g2_ParamLimits

0x81d6,	// (0x00017c20) list_medium_line_t2_g3_g2

0x63d6,	// (0x00015e20) list_medium_line_t2_g3_g3_ParamLimits

0x63d6,	// (0x00015e20) list_medium_line_t2_g3_g3

0x0002,

0xfd50,	// (0x0001f79a) list_medium_line_t2_g3_g_ParamLimits

0xfd50,	// (0x0001f79a) list_medium_line_t2_g3_g

0x81f7,	// (0x00017c41) list_medium_line_t2_g3_t1_ParamLimits

0x81f7,	// (0x00017c41) list_medium_line_t2_g3_t1

0x8211,	// (0x00017c5b) list_medium_line_t2_g3_t2_ParamLimits

0x8211,	// (0x00017c5b) list_medium_line_t2_g3_t2

0x0001,

0xfd57,	// (0x0001f7a1) list_medium_line_t2_g3_t_ParamLimits

0xfd57,	// (0x0001f7a1) list_medium_line_t2_g3_t

0x63ca,	// (0x00015e14) list_medium_line_t3_g3_g1_ParamLimits

0x63ca,	// (0x00015e14) list_medium_line_t3_g3_g1

0x81d6,	// (0x00017c20) list_medium_line_t3_g3_g2_ParamLimits

0x81d6,	// (0x00017c20) list_medium_line_t3_g3_g2

0x63d6,	// (0x00015e20) list_medium_line_t3_g3_g3_ParamLimits

0x63d6,	// (0x00015e20) list_medium_line_t3_g3_g3

0x0002,

0xfd50,	// (0x0001f79a) list_medium_line_t3_g3_g_ParamLimits

0xfd50,	// (0x0001f79a) list_medium_line_t3_g3_g

0x822b,	// (0x00017c75) list_medium_line_t3_g3_t1_ParamLimits

0x822b,	// (0x00017c75) list_medium_line_t3_g3_t1

0x8244,	// (0x00017c8e) list_medium_line_t3_g3_t2_ParamLimits

0x8244,	// (0x00017c8e) list_medium_line_t3_g3_t2

0x825a,	// (0x00017ca4) list_medium_line_t3_g3_t3_ParamLimits

0x825a,	// (0x00017ca4) list_medium_line_t3_g3_t3

0x0002,

0xfd5c,	// (0x0001f7a6) list_medium_line_t3_g3_t_ParamLimits

0xfd5c,	// (0x0001f7a6) list_medium_line_t3_g3_t

0x7e90,	// (0x000178da) list_medium_line_right_iconx2_g1

0x7c61,	// (0x000176ab) list_medium_line_right_iconx2_g2

0x0001,

0xfd63,	// (0x0001f7ad) list_medium_line_right_iconx2_g

0x8274,	// (0x00017cbe) list_medium_line_right_iconx2_t1

0x7e90,	// (0x000178da) list_medium_line_t2_right_iconx2_g1

0x7c61,	// (0x000176ab) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd63,	// (0x0001f7ad) list_medium_line_t2_right_iconx2_g

0x8282,	// (0x00017ccc) list_medium_line_t2_right_iconx2_t1

0x8292,	// (0x00017cdc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd68,	// (0x0001f7b2) list_medium_line_t2_right_iconx2_t

0x82a2,	// (0x00017cec) list_medium_line_x4_t4_t1

0x82b0,	// (0x00017cfa) list_medium_line_x4_t4_t2

0x82c0,	// (0x00017d0a) list_medium_line_x4_t4_t3

0x82d0,	// (0x00017d1a) list_medium_line_x4_t4_t4

0x0003,

0xfd6d,	// (0x0001f7b7) list_medium_line_x4_t4_t

0x8321,	// (0x00017d6b) tport_appsw_pane_ParamLimits

0x8321,	// (0x00017d6b) tport_appsw_pane

0x8338,	// (0x00017d82) tport_contact_pane_ParamLimits

0x8338,	// (0x00017d82) tport_contact_pane

0x8350,	// (0x00017d9a) tport_listscroll_pane_ParamLimits

0x8350,	// (0x00017d9a) tport_listscroll_pane

0x8364,	// (0x00017dae) cell_tport_appsw_pane_ParamLimits

0x8364,	// (0x00017dae) cell_tport_appsw_pane

0xd27b,	// (0x0001ccc5) tport_appsw_pane_g1_ParamLimits

0xd27b,	// (0x0001ccc5) tport_appsw_pane_g1

0xe53c,	// (0x0001df86) tport_contact_pane_g1

0xe545,	// (0x0001df8f) tport_contact_pane_t1

0xe553,	// (0x0001df9d) tport_contact_pane_t2

0x0001,

0xfd76,	// (0x0001f7c0) tport_contact_pane_t

0xe561,	// (0x0001dfab) list_tport_pane

0xe56a,	// (0x0001dfb4) scroll_pane_cp_030

0x83ae,	// (0x00017df8) cell_tport_appsw_pane_g1

0x83be,	// (0x00017e08) cell_tport_appsw_pane_t1

0x83cc,	// (0x00017e16) grid_highlight_pane_cp019

0x83d4,	// (0x00017e1e) list_tport_double_graphic_pane_ParamLimits

0x83d4,	// (0x00017e1e) list_tport_double_graphic_pane

0x9663,	// (0x000190ad) list_highlight_pane_cp023_ParamLimits

0x9663,	// (0x000190ad) list_highlight_pane_cp023

0x83eb,	// (0x00017e35) list_tport_double_graphic_pane_g1_ParamLimits

0x83eb,	// (0x00017e35) list_tport_double_graphic_pane_g1

0x83f8,	// (0x00017e42) list_tport_double_graphic_pane_t1_ParamLimits

0x83f8,	// (0x00017e42) list_tport_double_graphic_pane_t1

0x840d,	// (0x00017e57) list_tport_double_graphic_pane_t2_ParamLimits

0x840d,	// (0x00017e57) list_tport_double_graphic_pane_t2

0x0001,

0xfd82,	// (0x0001f7cc) list_tport_double_graphic_pane_t_ParamLimits

0xfd82,	// (0x0001f7cc) list_tport_double_graphic_pane_t

0x95ee,	// (0x00019038) main_cale_note_pane

0x5a28,	// (0x00015472) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5a28,	// (0x00015472) cell_vitu2_function_top_wide_pane_cp01

0x765e,	// (0x000170a8) wait_bar_pane_cp05_ParamLimits

0x9663,	// (0x000190ad) listscroll_cmail_pane

0xe573,	// (0x0001dfbd) list_cmail_pane

0x841f,	// (0x00017e69) list_cmail_body_pane

0x8436,	// (0x00017e80) list_single_cmail_header_caption_pane

0xe583,	// (0x0001dfcd) list_single_cmail_header_detail_pane_ParamLimits

0xe583,	// (0x0001dfcd) list_single_cmail_header_detail_pane

0xe5b5,	// (0x0001dfff) list_single_cmail_header_caption_pane_t1

0x8453,	// (0x00017e9d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8453,	// (0x00017e9d) list_single_cmail_header_detail_pane_g1

0xe5cc,	// (0x0001e016) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5cc,	// (0x0001e016) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd87,	// (0x0001f7d1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd87,	// (0x0001f7d1) list_single_cmail_header_detail_pane_g

0xe5e5,	// (0x0001e02f) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5e5,	// (0x0001e02f) list_single_cmail_header_detail_pane_t1

0xe645,	// (0x0001e08f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe645,	// (0x0001e08f) list_single_cmail_header_editor_pane_bg

0xe0a0,	// (0x0001daea) list_cmail_body_pane_g1

0xe65c,	// (0x0001e0a6) list_cmail_body_pane_t1

0xd2ca,	// (0x0001cd14) list_single_cmail_header_editor_pane_bg_g1

0xa294,	// (0x00019cde) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2da,	// (0x0001cd24) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2d2,	// (0x0001cd1c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd534,	// (0x0001cf7e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2fa,	// (0x0001cd44) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2ea,	// (0x0001cd34) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2f2,	// (0x0001cd3c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa274,	// (0x00019cbe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x846b,	// (0x00017eb5) calenote_gesture_pane_ParamLimits

0x846b,	// (0x00017eb5) calenote_gesture_pane

0x848b,	// (0x00017ed5) calenote_window_pane_ParamLimits

0x848b,	// (0x00017ed5) calenote_window_pane

0xe66a,	// (0x0001e0b4) popup_note_window_cp01

0x84a7,	// (0x00017ef1) calenote_swipe_1_pane_ParamLimits

0x84a7,	// (0x00017ef1) calenote_swipe_1_pane

0x7c01,	// (0x0001764b) calenote_swipe_2_pane_ParamLimits

0x7c01,	// (0x0001764b) calenote_swipe_2_pane

0xe2ba,	// (0x0001dd04) calenote_swipe_1_pane_g1_ParamLimits

0xe2ba,	// (0x0001dd04) calenote_swipe_1_pane_g1

0xe2c7,	// (0x0001dd11) calenote_swipe_1_pane_g2_ParamLimits

0xe2c7,	// (0x0001dd11) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0001f6f6) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0001f6f6) calenote_swipe_1_pane_g

0xe67c,	// (0x0001e0c6) calenote_swipe_1_pane_t1_ParamLimits

0xe67c,	// (0x0001e0c6) calenote_swipe_1_pane_t1

0xe2ba,	// (0x0001dd04) calenote_swipe_2_pane_g1_ParamLimits

0xe2ba,	// (0x0001dd04) calenote_swipe_2_pane_g1

0xe69b,	// (0x0001e0e5) calenote_swipe_2_pane_g2_ParamLimits

0xe69b,	// (0x0001e0e5) calenote_swipe_2_pane_g2

0x0001,

0xfd93,	// (0x0001f7dd) calenote_swipe_2_pane_g_ParamLimits

0xfd93,	// (0x0001f7dd) calenote_swipe_2_pane_g

0xe6a7,	// (0x0001e0f1) calenote_swipe_2_pane_t1_ParamLimits

0xe6a7,	// (0x0001e0f1) calenote_swipe_2_pane_t1

0x95ee,	// (0x00019038) main_mup_navstr_pane

0x4617,	// (0x00014061) main_mup3_pane_t7_ParamLimits

0x4617,	// (0x00014061) main_mup3_pane_t7

0xce7e,	// (0x0001c8c8) main_mp4_pane_g6_ParamLimits

0xce7e,	// (0x0001c8c8) main_mp4_pane_g6

0xd0cf,	// (0x0001cb19) main_image3_pane_t4_ParamLimits

0xd0cf,	// (0x0001cb19) main_image3_pane_t4

0x84bc,	// (0x00017f06) popup_navstr_preview_pane_ParamLimits

0x84bc,	// (0x00017f06) popup_navstr_preview_pane

0x84cc,	// (0x00017f16) scroll_navstr_pane_ParamLimits

0x84cc,	// (0x00017f16) scroll_navstr_pane

0x95ee,	// (0x00019038) bg_popup_preview_window_pane_cp04

0xe6ce,	// (0x0001e118) popup_navstr_preview_pane_t1

0x84e0,	// (0x00017f2a) scroll_navstr_pane_g1_ParamLimits

0x84e0,	// (0x00017f2a) scroll_navstr_pane_g1

0x84f4,	// (0x00017f3e) scroll_navstr_pane_t1_ParamLimits

0x84f4,	// (0x00017f3e) scroll_navstr_pane_t1

0xe673,	// (0x0001e0bd) bg_button_pane_cp014

0xe673,	// (0x0001e0bd) bg_button_pane_cp030

0x7adf,	// (0x00017529) list_double_fisheye_pane_g4_ParamLimits

0x7adf,	// (0x00017529) list_double_fisheye_pane_g4

0x7aeb,	// (0x00017535) list_double_fisheye_pane_g5_ParamLimits

0x7aeb,	// (0x00017535) list_double_fisheye_pane_g5

0xd5f2,	// (0x0001d03c) sp_fs_scroll_pane_cp03

0xe3d3,	// (0x0001de1d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3df,	// (0x0001de29) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0001f713) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7d20,	// (0x0001776a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe57b,	// (0x0001dfc5) sp_fs_scroll_pane_cp02

0x9f74,	// (0x000199be) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9f74,	// (0x000199be) popup_sp_fs_calendar_preview_list_single_pane

0x95ee,	// (0x00019038) main_cam6_pano_pane

0x9663,	// (0x000190ad) main_mup3_pane_ParamLimits

0x95ee,	// (0x00019038) main_phacti_pane

0x752f,	// (0x00016f79) bg_button_pane_cp11

0x7549,	// (0x00016f93) main_mobtv_info_pane_g2_ParamLimits

0x7549,	// (0x00016f93) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0001f673) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0001f673) main_mobtv_info_pane_g

0x7726,	// (0x00017170) sc_clock_pane_t5_ParamLimits

0x7726,	// (0x00017170) sc_clock_pane_t5

0x795a,	// (0x000173a4) main_radioblah_pane_g1_ParamLimits

0xe206,	// (0x0001dc50) main_radioblah_pane_t3_ParamLimits

0xe206,	// (0x0001dc50) main_radioblah_pane_t3

0xe21e,	// (0x0001dc68) main_radioblah_pane_t4_ParamLimits

0xe21e,	// (0x0001dc68) main_radioblah_pane_t4

0x7982,	// (0x000173cc) main_radioblah_text_pane_ParamLimits

0x7982,	// (0x000173cc) main_radioblah_text_pane

0x7994,	// (0x000173de) main_radioblah_info_pane_g1_ParamLimits

0x7a2d,	// (0x00017477) main_radioblah_info_pane_t4_ParamLimits

0x7a2d,	// (0x00017477) main_radioblah_info_pane_t4

0x9663,	// (0x000190ad) main_sp_fs_calendar_pane

0x850b,	// (0x00017f55) main_phacti_pane_g1

0x8513,	// (0x00017f5d) phacti_note_pane_ParamLimits

0x8513,	// (0x00017f5d) phacti_note_pane

0xe6e5,	// (0x0001e12f) phacti_term_pane_ParamLimits

0xe6e5,	// (0x0001e12f) phacti_term_pane

0xe6fa,	// (0x0001e144) phacti_note_pane_t1_ParamLimits

0xe6fa,	// (0x0001e144) phacti_note_pane_t1

0xe711,	// (0x0001e15b) phacti_term_pane_g1

0xe719,	// (0x0001e163) phacti_term_pane_t1_ParamLimits

0xe719,	// (0x0001e163) phacti_term_pane_t1

0xe743,	// (0x0001e18d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe74b,	// (0x0001e195) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9d,	// (0x0001f7e7) popup_sp_fs_calendar_preview_list_single_pane_g

0xe753,	// (0x0001e19d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe753,	// (0x0001e19d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe769,	// (0x0001e1b3) aid_popup_sp_fs_bg_corner_pane

0xc51a,	// (0x0001bf64) popup_sp_fs_calendar_preview_bg_pane_g1

0x95ee,	// (0x00019038) popup_sp_fs_calendar_preview_bg_pane

0xe771,	// (0x0001e1bb) popup_sp_fs_calendar_preview_list_pane

0xbfd0,	// (0x0001ba1a) bg_main_sp_fs_cale_pane_ParamLimits

0xbfd0,	// (0x0001ba1a) bg_main_sp_fs_cale_pane

0xe782,	// (0x0001e1cc) listscroll_cale_mrui_pane_ParamLimits

0xe782,	// (0x0001e1cc) listscroll_cale_mrui_pane

0xe797,	// (0x0001e1e1) listscroll_sp_fs_schedule_track_pane

0xe7a0,	// (0x0001e1ea) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7a0,	// (0x0001e1ea) main_sp_fs_ctrlbar_pane_cp01

0xe7b3,	// (0x0001e1fd) main_sp_fs_ribbon_pane

0xe7bb,	// (0x0001e205) popup_sp_fs_cale_preview_window

0x8588,	// (0x00017fd2) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8588,	// (0x00017fd2) list_single_sp_fs_schedule_track_pane

0x9663,	// (0x000190ad) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9663,	// (0x000190ad) bg_sp_fs_highlight_list_pane_cp03

0x859c,	// (0x00017fe6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x859c,	// (0x00017fe6) list_single_sp_fs_schedule_track_pane_g1

0x85a8,	// (0x00017ff2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85a8,	// (0x00017ff2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda2,	// (0x0001f7ec) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda2,	// (0x0001f7ec) list_single_sp_fs_schedule_track_pane_g

0x85b4,	// (0x00017ffe) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85b4,	// (0x00017ffe) list_single_sp_fs_schedule_track_pane_t1

0x85d6,	// (0x00018020) sp_fs_schedule_track_pane_ParamLimits

0x85d6,	// (0x00018020) sp_fs_schedule_track_pane

0xe7cd,	// (0x0001e217) sp_fs_schedule_track_pane_g1

0xe7d5,	// (0x0001e21f) sp_fs_schedule_track_pane_g2

0xe7dd,	// (0x0001e227) sp_fs_schedule_track_pane_g3

0xe7e5,	// (0x0001e22f) sp_fs_schedule_track_pane_g4

0xe7ed,	// (0x0001e237) sp_fs_schedule_track_pane_g5

0x0004,

0xfda7,	// (0x0001f7f1) sp_fs_schedule_track_pane_g

0xd2ca,	// (0x0001cd14) bg_sp_fs_schedule_viewer_highlight_g1

0xa294,	// (0x00019cde) bg_sp_fs_schedule_viewer_highlight_g2

0xd2d2,	// (0x0001cd1c) bg_sp_fs_schedule_viewer_highlight_g3

0xd2da,	// (0x0001cd24) bg_sp_fs_schedule_viewer_highlight_g4

0xd534,	// (0x0001cf7e) bg_sp_fs_schedule_viewer_highlight_g5

0xd2ea,	// (0x0001cd34) bg_sp_fs_schedule_viewer_highlight_g6

0xd2f2,	// (0x0001cd3c) bg_sp_fs_schedule_viewer_highlight_g7

0xd2fa,	// (0x0001cd44) bg_sp_fs_schedule_viewer_highlight_g8

0xa274,	// (0x00019cbe) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb2,	// (0x0001f7fc) bg_sp_fs_schedule_viewer_highlight_g

0x95ee,	// (0x00019038) bg_main_sp_fs_ribbon_pane

0x85eb,	// (0x00018035) main_sp_fs_ribbon_pane_g1

0xe7f5,	// (0x0001e23f) main_sp_fs_ribbon_pane_t1

0x85f4,	// (0x0001803e) main_sp_fs_ribbon_pane_t2

0xe804,	// (0x0001e24e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc5,	// (0x0001f80f) main_sp_fs_ribbon_pane_t

0xe813,	// (0x0001e25d) main_sp_fs_ribbon_scheduler_pane

0xe81b,	// (0x0001e265) bg_main_sp_fs_ribbon_pane_g1

0xe824,	// (0x0001e26e) bg_main_sp_fs_ribbon_pane_g2

0xe82d,	// (0x0001e277) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdcc,	// (0x0001f816) bg_main_sp_fs_ribbon_pane_g

0xe835,	// (0x0001e27f) main_sp_fs_ribbon_scheduler_pane_g1

0xe83e,	// (0x0001e288) main_sp_fs_ribbon_scheduler_pane_g2

0xe847,	// (0x0001e291) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd3,	// (0x0001f81d) main_sp_fs_ribbon_scheduler_pane_g

0xe850,	// (0x0001e29a) list_cale_mrui_pane

0x8603,	// (0x0001804d) sp_fs_scroll_pane_cp07_ParamLimits

0x8603,	// (0x0001804d) sp_fs_scroll_pane_cp07

0x861f,	// (0x00018069) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x861f,	// (0x00018069) bg_sp_fs_schedule_viewer_highlight

0xe85d,	// (0x0001e2a7) list_single_sp_fs_schedule_track_pane_cp01

0xe865,	// (0x0001e2af) list_sp_fs_schedule_track_pane

0xe86d,	// (0x0001e2b7) sp_fs_scroll_pane_cp06_ParamLimits

0xe86d,	// (0x0001e2b7) sp_fs_scroll_pane_cp06

0xc51a,	// (0x0001bf64) bgmain_sp_fs_calendar_pane_g1

0x8631,	// (0x0001807b) list_single_cale_mrui_pane_ParamLimits

0x8631,	// (0x0001807b) list_single_cale_mrui_pane

0xe87f,	// (0x0001e2c9) list_single_cale_mrui_row_pane_ParamLimits

0xe87f,	// (0x0001e2c9) list_single_cale_mrui_row_pane

0xe88c,	// (0x0001e2d6) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe88c,	// (0x0001e2d6) list_single_cale_mrui_row_pane_g1

0xe8d1,	// (0x0001e31b) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8d1,	// (0x0001e31b) list_single_cale_mrui_row_pane_t1

0x8654,	// (0x0001809e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8654,	// (0x0001809e) list_single_cale_mrui_row_pane_t2

0xe8e3,	// (0x0001e32d) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8e3,	// (0x0001e32d) list_single_cale_mrui_row_pane_t3

0xe912,	// (0x0001e35c) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe912,	// (0x0001e35c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde1,	// (0x0001f82b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde1,	// (0x0001f82b) list_single_cale_mrui_row_pane_t

0x86ba,	// (0x00018104) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86ba,	// (0x00018104) list_single_cmail_header_editor_pane_bg_cp01

0x86de,	// (0x00018128) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86de,	// (0x00018128) list_single_cmail_header_editor_pane_bg_cp02

0x86fe,	// (0x00018148) main_radioblah_text_pane_t1_ParamLimits

0x86fe,	// (0x00018148) main_radioblah_text_pane_t1

0xe943,	// (0x0001e38d) cam6_indi_pane_cp01

0xe94b,	// (0x0001e395) cam6_mode_pane_cp01

0xe953,	// (0x0001e39d) cam6_pano_pane

0xe95c,	// (0x0001e3a6) cam6_zoom_pane_cp01

0xe966,	// (0x0001e3b0) cam6_pano_image_pane

0xe96f,	// (0x0001e3b9) cam6_pano_pane_g1

0xe0a0,	// (0x0001daea) cam6_pano_pane_g2

0xe978,	// (0x0001e3c2) cam6_pano_pane_g3

0xe981,	// (0x0001e3cb) cam6_pano_pane_g4

0xcabd,	// (0x0001c507) cam6_pano_pane_g5

0xe98a,	// (0x0001e3d4) cam6_pano_pane_g6

0xe992,	// (0x0001e3dc) cam6_pano_pane_g7

0xe99a,	// (0x0001e3e4) cam6_pano_pane_g8

0xe9a3,	// (0x0001e3ed) cam6_pano_pane_g9

0x0008,

0xfdea,	// (0x0001f834) cam6_pano_pane_g

0x95ee,	// (0x00019038) main_browser_tag_pane

0xe6c6,	// (0x0001e110) grid_navstr_albumart_pane

0xe9ae,	// (0x0001e3f8) cell_navstr_albumart_pane_ParamLimits

0xe9ae,	// (0x0001e3f8) cell_navstr_albumart_pane

0xe9ca,	// (0x0001e414) cell_navstr_albumart_pane_g1

0xbddd,	// (0x0001b827) cell_navstr_albumart_pane_g2

0xbded,	// (0x0001b837) cell_navstr_albumart_pane_g3

0xbde5,	// (0x0001b82f) cell_navstr_albumart_pane_g4

0x0003,

0xfdfd,	// (0x0001f847) cell_navstr_albumart_pane_g

0x8719,	// (0x00018163) bt_list_pane_ParamLimits

0x8719,	// (0x00018163) bt_list_pane

0x872f,	// (0x00018179) bt_list_pane_t1

0x873e,	// (0x00018188) bt_list_pane_t2

0x0001,

0xfe06,	// (0x0001f850) bt_list_pane_t

0x95ee,	// (0x00019038) main_cale_prevew_pane

0x874d,	// (0x00018197) popup_cale_preview_window_ParamLimits

0x874d,	// (0x00018197) popup_cale_preview_window

0x9663,	// (0x000190ad) bg_popup_preview_window_pane_cp05_ParamLimits

0x9663,	// (0x000190ad) bg_popup_preview_window_pane_cp05

0xe9d2,	// (0x0001e41c) list_cale_preview_pane_ParamLimits

0xe9d2,	// (0x0001e41c) list_cale_preview_pane

0x876a,	// (0x000181b4) list_double_cale_preview_pane_ParamLimits

0x876a,	// (0x000181b4) list_double_cale_preview_pane

0x877e,	// (0x000181c8) list_single_cale_preview_pane_ParamLimits

0x877e,	// (0x000181c8) list_single_cale_preview_pane

0x8796,	// (0x000181e0) list_single_cale_preview_pane_g1

0x879e,	// (0x000181e8) list_single_cale_preview_pane_t1_ParamLimits

0x879e,	// (0x000181e8) list_single_cale_preview_pane_t1

0x87b3,	// (0x000181fd) list_double_cale_preview_pane_g1

0x87bb,	// (0x00018205) list_double_cale_preview_pane_t1_ParamLimits

0x87bb,	// (0x00018205) list_double_cale_preview_pane_t1

0x87d0,	// (0x0001821a) list_double_cale_preview_pane_t2_ParamLimits

0x87d0,	// (0x0001821a) list_double_cale_preview_pane_t2

0x0001,

0xfe0b,	// (0x0001f855) list_double_cale_preview_pane_t_ParamLimits

0xfe0b,	// (0x0001f855) list_double_cale_preview_pane_t

0x95ee,	// (0x00019038) main_ezdial_pane

0x9663,	// (0x000190ad) main_sp_fs_email_pane_ParamLimits

0x7c8b,	// (0x000176d5) cmail_ddmenu_btn01_pane_ParamLimits

0x7c8b,	// (0x000176d5) cmail_ddmenu_btn01_pane

0x7c9e,	// (0x000176e8) cmail_ddmenu_btn02_pane_ParamLimits

0x7c9e,	// (0x000176e8) cmail_ddmenu_btn02_pane

0x7cc1,	// (0x0001770b) cmail_ddmenu_btn03_pane_ParamLimits

0x7cc1,	// (0x0001770b) cmail_ddmenu_btn03_pane

0x7d5f,	// (0x000177a9) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d83,	// (0x000177cd) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x841f,	// (0x00017e69) list_cmail_body_pane_ParamLimits

0xe5c3,	// (0x0001e00d) bg_button_pane_cp12

0xe5d8,	// (0x0001e022) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5d8,	// (0x0001e022) list_single_cmail_header_detail_pane_g3

0xe621,	// (0x0001e06b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe621,	// (0x0001e06b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8e,	// (0x0001f7d8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8e,	// (0x0001f7d8) list_single_cmail_header_detail_pane_t

0xe72e,	// (0x0001e178) phacti_term_pane_t2_ParamLimits

0xe72e,	// (0x0001e178) phacti_term_pane_t2

0x0001,

0xfd98,	// (0x0001f7e2) phacti_term_pane_t_ParamLimits

0xfd98,	// (0x0001f7e2) phacti_term_pane_t

0xe9de,	// (0x0001e428) aid_size_list_single_double

0x87e8,	// (0x00018232) popup_ezdial_listscroll_window

0x8804,	// (0x0001824e) popup_number_entry_window_cp01

0xa018,	// (0x00019a62) bg_popup_call_pane_cp09

0xe9ea,	// (0x0001e434) ezdial_list_pane

0xe9f2,	// (0x0001e43c) scroll_pane_cp23

0xbfd0,	// (0x0001ba1a) bg_button_pane_cp028_ParamLimits

0xbfd0,	// (0x0001ba1a) bg_button_pane_cp028

0x8812,	// (0x0001825c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8812,	// (0x0001825c) cmail_ddmenu_btn01_pane_g1

0x8821,	// (0x0001826b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8821,	// (0x0001826b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe10,	// (0x0001f85a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe10,	// (0x0001f85a) cmail_ddmenu_btn01_pane_g

0xe9fa,	// (0x0001e444) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9fa,	// (0x0001e444) cmail_ddmenu_btn01_pane_t1

0xbfd0,	// (0x0001ba1a) bg_button_pane_cp029_ParamLimits

0xbfd0,	// (0x0001ba1a) bg_button_pane_cp029

0x8831,	// (0x0001827b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8831,	// (0x0001827b) cmail_ddmenu_btn02_pane_g1

0x884c,	// (0x00018296) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x884c,	// (0x00018296) cmail_ddmenu_btn02_pane_t1

0x9663,	// (0x000190ad) bg_button_pane_cp031_ParamLimits

0x9663,	// (0x000190ad) bg_button_pane_cp031

0x8831,	// (0x0001827b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8831,	// (0x0001827b) cmail_ddmenu_btn03_pane_g1

0x884c,	// (0x00018296) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x884c,	// (0x00018296) cmail_ddmenu_btn03_pane_t1

0x51f8,	// (0x00014c42) cell_dialer2_keypad_pane_t1_ParamLimits

0x5212,	// (0x00014c5c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5212,	// (0x00014c5c) cell_dialer2_keypad_pane_t1_copy1

0x7350,	// (0x00016d9a) ncimui_group_button_pane

0x9663,	// (0x000190ad) main_sp_fs_calendar_pane_ParamLimits

0x8436,	// (0x00017e80) list_single_cmail_header_caption_pane_ParamLimits

0xe779,	// (0x0001e1c3) aid_recal_txt_sm_pane

0x95ee,	// (0x00019038) mian_recal_day_pane

0xe7bb,	// (0x0001e205) popup_sp_fs_cale_preview_window_ParamLimits

0xea0f,	// (0x0001e459) list_recal_day_pane

0xea52,	// (0x0001e49c) list_single_recal_day_pane_ParamLimits

0xea52,	// (0x0001e49c) list_single_recal_day_pane

0xea64,	// (0x0001e4ae) list_single_recal_day_pane_g1_ParamLimits

0xea64,	// (0x0001e4ae) list_single_recal_day_pane_g1

0xea70,	// (0x0001e4ba) list_single_recal_day_pane_g2_ParamLimits

0xea70,	// (0x0001e4ba) list_single_recal_day_pane_g2

0xea7c,	// (0x0001e4c6) list_single_recal_day_pane_g3_ParamLimits

0xea7c,	// (0x0001e4c6) list_single_recal_day_pane_g3

0x8873,	// (0x000182bd) list_single_recal_day_pane_g4_ParamLimits

0x8873,	// (0x000182bd) list_single_recal_day_pane_g4

0xea88,	// (0x0001e4d2) list_single_recal_day_pane_g5_ParamLimits

0xea88,	// (0x0001e4d2) list_single_recal_day_pane_g5

0xea94,	// (0x0001e4de) list_single_recal_day_pane_g6_ParamLimits

0xea94,	// (0x0001e4de) list_single_recal_day_pane_g6

0x0004,

0xfe1f,	// (0x0001f869) list_single_recal_day_pane_g_ParamLimits

0xfe1f,	// (0x0001f869) list_single_recal_day_pane_g

0xeaa8,	// (0x0001e4f2) list_single_recal_day_pane_t1

0xeaba,	// (0x0001e504) list_single_recal_day_pane_t2

0x0001,

0xfe2a,	// (0x0001f874) list_single_recal_day_pane_t

0x888b,	// (0x000182d5) ncimui_query_button_pane_ParamLimits

0x888b,	// (0x000182d5) ncimui_query_button_pane

0x889b,	// (0x000182e5) ncimui_query_button_pane_t1_ParamLimits

0x889b,	// (0x000182e5) ncimui_query_button_pane_t1

0xeacc,	// (0x0001e516) ncimui_query_button_pane_t2_ParamLimits

0xeacc,	// (0x0001e516) ncimui_query_button_pane_t2

0x0001,

0xfe2f,	// (0x0001f879) ncimui_query_button_pane_t_ParamLimits

0xfe2f,	// (0x0001f879) ncimui_query_button_pane_t

0x88ae,	// (0x000182f8) query_button_pane_ParamLimits

0x88ae,	// (0x000182f8) query_button_pane

0x95ee,	// (0x00019038) bg_button_pane_cp0028

0xeadf,	// (0x0001e529) query_button_pane_t1

0x3166,	// (0x00012bb0) main_tport_pane_ParamLimits

0x82e0,	// (0x00017d2a) bg_popup_window_pane_cp01_ParamLimits

0x82e0,	// (0x00017d2a) bg_popup_window_pane_cp01

0x82f9,	// (0x00017d43) heading_pane_cp08_ParamLimits

0x82f9,	// (0x00017d43) heading_pane_cp08

0x830c,	// (0x00017d56) heading_pane_cp07_ParamLimits

0x830c,	// (0x00017d56) heading_pane_cp07

0x83ae,	// (0x00017df8) cell_tport_appsw_pane_g2

0x0002,

0xfd7b,	// (0x0001f7c5) cell_tport_appsw_pane_g

0xac90,	// (0x0001a6da) input_candi_list_open_g1

0xa485,	// (0x00019ecf) list_cale_time_pane_g6_ParamLimits

0xa485,	// (0x00019ecf) list_cale_time_pane_g6

0x3f42,	// (0x0001398c) aid_size_touch_calib_1_ParamLimits

0x3f42,	// (0x0001398c) aid_size_touch_calib_1

0x3f54,	// (0x0001399e) aid_size_touch_calib_2_ParamLimits

0x3f54,	// (0x0001399e) aid_size_touch_calib_2

0x3f6c,	// (0x000139b6) aid_size_touch_calib_3_ParamLimits

0x3f6c,	// (0x000139b6) aid_size_touch_calib_3

0x3f8a,	// (0x000139d4) aid_size_touch_calib_4_ParamLimits

0x3f8a,	// (0x000139d4) aid_size_touch_calib_4

0x3fa2,	// (0x000139ec) main_touch_calib_button_group_pane_ParamLimits

0x3fa2,	// (0x000139ec) main_touch_calib_button_group_pane

0x3fba,	// (0x00013a04) main_touch_calib_pane_g1_ParamLimits

0x3fcc,	// (0x00013a16) main_touch_calib_pane_g2_ParamLimits

0x3fde,	// (0x00013a28) main_touch_calib_pane_g3_ParamLimits

0x3ff0,	// (0x00013a3a) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0001f180) main_touch_calib_pane_g_ParamLimits

0x4002,	// (0x00013a4c) main_touch_calib_pane_t1_ParamLimits

0x401c,	// (0x00013a66) main_touch_calib_pane_t2_ParamLimits

0x4036,	// (0x00013a80) main_touch_calib_pane_t3_ParamLimits

0x404a,	// (0x00013a94) main_touch_calib_pane_t4_ParamLimits

0x4060,	// (0x00013aaa) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0001f189) main_touch_calib_pane_t_ParamLimits

0xc84d,	// (0x0001c297) list_single_fp_cale_pane_g3_ParamLimits

0xc84d,	// (0x0001c297) list_single_fp_cale_pane_g3

0x9663,	// (0x000190ad) bg_button_pane_cp012_ParamLimits

0x9663,	// (0x000190ad) bg_vkb2_func_pane_cp03_ParamLimits

0x6380,	// (0x00015dca) cell_vitu2_function_top_pane_g1_ParamLimits

0x9663,	// (0x000190ad) bg_vkb2_func_pane_cp04_ParamLimits

0x72db,	// (0x00016d25) main_ncimui_button_group_pane_ParamLimits

0x72db,	// (0x00016d25) main_ncimui_button_group_pane

0x733b,	// (0x00016d85) main_ncimui_pane_t3_ParamLimits

0x733b,	// (0x00016d85) main_ncimui_pane_t3

0xe6dc,	// (0x0001e126) phacti_button_group_pane

0xe9de,	// (0x0001e428) aid_size_list_single_double_ParamLimits

0x87e8,	// (0x00018232) popup_ezdial_listscroll_window_ParamLimits

0x8804,	// (0x0001824e) popup_number_entry_window_cp01_ParamLimits

0x88c1,	// (0x0001830b) phacti_button_pane_ParamLimits

0x88c1,	// (0x0001830b) phacti_button_pane

0x95ee,	// (0x00019038) bg_button_pane_cp14

0xeaed,	// (0x0001e537) phacti_button_pane_t1

0x88d2,	// (0x0001831c) main_touch_calib_button_pane_ParamLimits

0x88d2,	// (0x0001831c) main_touch_calib_button_pane

0x9dfb,	// (0x00019845) bg_button_pane_cp18_ParamLimits

0x9dfb,	// (0x00019845) bg_button_pane_cp18

0xeafb,	// (0x0001e545) main_touch_calib_button_pane_t1_ParamLimits

0xeafb,	// (0x0001e545) main_touch_calib_button_pane_t1

0xeb11,	// (0x0001e55b) main_touch_calib_button_pane_t2_ParamLimits

0xeb11,	// (0x0001e55b) main_touch_calib_button_pane_t2

0x0001,

0xfe34,	// (0x0001f87e) main_touch_calib_button_pane_t_ParamLimits

0xfe34,	// (0x0001f87e) main_touch_calib_button_pane_t

0x95ee,	// (0x00019038) cell_ncimui_button_pane

0x95ee,	// (0x00019038) bg_button_pane_cp032

0xeb2f,	// (0x0001e579) cell_ncimui_button_pane_t1

0xd0ad,	// (0x0001caf7) image3_infobar_pane_ParamLimits

0xd0ad,	// (0x0001caf7) image3_infobar_pane

0x7752,	// (0x0001719c) fs_bigclock_status_pane_ParamLimits

0x7752,	// (0x0001719c) fs_bigclock_status_pane

0x775f,	// (0x000171a9) main_fs_bigclock_clock_pane_ParamLimits

0x775f,	// (0x000171a9) main_fs_bigclock_clock_pane

0x7791,	// (0x000171db) main_fs_bigclock_indi_pane_ParamLimits

0x7791,	// (0x000171db) main_fs_bigclock_indi_pane

0x77d1,	// (0x0001721b) main_fs_bigclock_swipe_pane_ParamLimits

0x77d1,	// (0x0001721b) main_fs_bigclock_swipe_pane

0x95ee,	// (0x00019038) main_fs_clock_dumped_data

0x781d,	// (0x00017267) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x781d,	// (0x00017267) list_single_fs_bigclock_indicator_pane_g1

0x7836,	// (0x00017280) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7836,	// (0x00017280) list_single_fs_bigclock_indicator_pane_g2

0x7850,	// (0x0001729a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7850,	// (0x0001729a) list_single_fs_bigclock_indicator_pane_g3

0x786a,	// (0x000172b4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x786a,	// (0x000172b4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0001f6a7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0001f6a7) list_single_fs_bigclock_indicator_pane_g

0x7899,	// (0x000172e3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7899,	// (0x000172e3) list_single_fs_bigclock_indicator_pane_t1

0x78c1,	// (0x0001730b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x78c1,	// (0x0001730b) list_single_fs_bigclock_indicator_pane_t2

0x78e9,	// (0x00017333) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x78e9,	// (0x00017333) list_single_fs_bigclock_indicator_pane_t3

0x7911,	// (0x0001735b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7911,	// (0x0001735b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0001f6b2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0001f6b2) list_single_fs_bigclock_indicator_pane_t

0xeb3d,	// (0x0001e587) image3_infobar_fav_pane_ParamLimits

0xeb3d,	// (0x0001e587) image3_infobar_fav_pane

0xeb4d,	// (0x0001e597) image3_infobar_loc_pane_ParamLimits

0xeb4d,	// (0x0001e597) image3_infobar_loc_pane

0xeb63,	// (0x0001e5ad) image3_infobar_time_pane_ParamLimits

0xeb63,	// (0x0001e5ad) image3_infobar_time_pane

0xc51a,	// (0x0001bf64) image3_infobar_time_pane_g1

0xeb73,	// (0x0001e5bd) image3_infobar_time_pane_t1

0xc51a,	// (0x0001bf64) image3_infobar_loc_pane_g1

0xeb81,	// (0x0001e5cb) image3_infobar_loc_pane_g2

0x0001,

0xfe39,	// (0x0001f883) image3_infobar_loc_pane_g

0xeb89,	// (0x0001e5d3) image3_infobar_loc_pane_t1

0xc51a,	// (0x0001bf64) image3_infobar_fav_pane_g1

0xeb97,	// (0x0001e5e1) image3_infobar_fav_pane_g2

0x0001,

0xfe3e,	// (0x0001f888) image3_infobar_fav_pane_g

0xeb9f,	// (0x0001e5e9) fs_bigclock_status_battery_pane

0xeba8,	// (0x0001e5f2) fs_bigclock_status_signal_pane

0xebb1,	// (0x0001e5fb) fs_bigclock_status_title_pane

0xebba,	// (0x0001e604) fs_bigclock_status_signal_pane_g1

0xebc3,	// (0x0001e60d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe43,	// (0x0001f88d) fs_bigclock_status_signal_pane_g

0xebcb,	// (0x0001e615) fs_bigclock_status_battery_pane_g1

0xebd4,	// (0x0001e61e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe48,	// (0x0001f892) fs_bigclock_status_battery_pane_g

0xebdc,	// (0x0001e626) fs_bigclock_status_title_pane_t1

0x88e7,	// (0x00018331) main_fs_bigclock_clock_pane_g1

0x88e7,	// (0x00018331) main_fs_bigclock_clock_pane_g2

0x88fa,	// (0x00018344) main_fs_bigclock_clock_pane_g3

0x88fa,	// (0x00018344) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x0001f897) main_fs_bigclock_clock_pane_g

0x8911,	// (0x0001835b) main_fs_bigclock_clock_pane_t1

0x8927,	// (0x00018371) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x0001f8a0) main_fs_bigclock_clock_pane_t

0xebea,	// (0x0001e634) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebea,	// (0x0001e634) list_single_fs_bigclock_indicator_pane

0xebfb,	// (0x0001e645) list_single_fs_bigclock_pane_ParamLimits

0xebfb,	// (0x0001e645) list_single_fs_bigclock_pane

0xec21,	// (0x0001e66b) main_fs_bigclock_indicator_pane_t1

0xec30,	// (0x0001e67a) list_single_fs_bigclock_pane_g1

0xec38,	// (0x0001e682) list_single_fs_bigclock_pane_t1

0xc51a,	// (0x0001bf64) main_fs_bigclock_swipe_pane_g1

0xec7b,	// (0x0001e6c5) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe67,	// (0x0001f8b1) main_fs_bigclock_swipe_pane_g

0xec83,	// (0x0001e6cd) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec83,	// (0x0001e6cd) main_fs_bigclock_swipe_pane_t1

0x1f4a,	// (0x00011994) call_type_pane_ParamLimits

0x95ee,	// (0x00019038) main_btmg_pane

0xe8b8,	// (0x0001e302) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8b8,	// (0x0001e302) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdda,	// (0x0001f824) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdda,	// (0x0001f824) list_single_cale_mrui_row_pane_g

0xea38,	// (0x0001e482) list_recal_vselct_arw_lo_pane

0xea40,	// (0x0001e48a) list_recal_vselct_arw_up_pane

0xea48,	// (0x0001e492) list_recal_vselct_pane

0x8989,	// (0x000183d3) btmg_button_pane

0x8993,	// (0x000183dd) main_btmg_pane_g1

0x95ee,	// (0x00019038) bg_button_pane_cp044

0xeca0,	// (0x0001e6ea) btmg_button_pane_t1

0xbfbc,	// (0x0001ba06) aid_listscroll_gen

0x9663,	// (0x000190ad) main_cntbar_detail_pane

0xe573,	// (0x0001dfbd) list_cmail_folder_pane

0xd5f2,	// (0x0001d03c) sp_fs_scroll_pane_cp03_ParamLimits

0xecae,	// (0x0001e6f8) list_single_fs_dyc_pane_cp01_ParamLimits

0xecae,	// (0x0001e6f8) list_single_fs_dyc_pane_cp01

0xeccb,	// (0x0001e715) aid_size_cmail_indent

0xecd4,	// (0x0001e71e) list_single_dyc_row_pane_cp01

0x89d1,	// (0x0001841b) cntbar_detail_list_pane_ParamLimits

0x89d1,	// (0x0001841b) cntbar_detail_list_pane

0x8a23,	// (0x0001846d) main_cntbar_detail_cont_pane_ParamLimits

0x8a23,	// (0x0001846d) main_cntbar_detail_cont_pane

0xd5f2,	// (0x0001d03c) scroll_pane_cp032_ParamLimits

0xd5f2,	// (0x0001d03c) scroll_pane_cp032

0x8a37,	// (0x00018481) cntbar_detail_list_event_pane_ParamLimits

0x8a37,	// (0x00018481) cntbar_detail_list_event_pane

0x89e3,	// (0x0001842d) cntbar_detail_list_shct_pane

0xa2e2,	// (0x00019d2c) aid_list_gen

0xecdd,	// (0x0001e727) aid_scroll

0xece6,	// (0x0001e730) aid_size_touch_scroll_bar

0x6aa8,	// (0x000164f2) aid_list_double

0x6a96,	// (0x000164e0) aid_list_single

0x6a96,	// (0x000164e0) aid_list_single_lg

0x8a47,	// (0x00018491) aid_list_z_g_a_sm

0x8a4f,	// (0x00018499) aid_list_z_g_d

0x8a57,	// (0x000184a1) aid_txt_z_prm

0x8a65,	// (0x000184af) aid_txt_z_prm_cp01

0x8a73,	// (0x000184bd) aid_txt_z_sec

0x8a81,	// (0x000184cb) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a81,	// (0x000184cb) main_cntbar_detail_cont_pane_g1

0x8a95,	// (0x000184df) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a95,	// (0x000184df) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6c,	// (0x0001f8b6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6c,	// (0x0001f8b6) main_cntbar_detail_cont_pane_g

0xecef,	// (0x0001e739) main_cntbar_detail_cont_pane_t1

0xecfd,	// (0x0001e747) main_cntbar_detail_cont_pane_t2

0xed0b,	// (0x0001e755) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe71,	// (0x0001f8bb) main_cntbar_detail_cont_pane_t

0x8aa5,	// (0x000184ef) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8aa5,	// (0x000184ef) cell_cntbar_detail_list_shct_pane

0xed19,	// (0x0001e763) cntbar_detail_list_shct_pane_g1

0xed22,	// (0x0001e76c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe78,	// (0x0001f8c2) cntbar_detail_list_shct_pane_g

0x8ab7,	// (0x00018501) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ab7,	// (0x00018501) cntbar_detail_list_event_pane_g1

0x8ac3,	// (0x0001850d) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ac3,	// (0x0001850d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7d,	// (0x0001f8c7) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7d,	// (0x0001f8c7) cntbar_detail_list_event_pane_g

0x8b31,	// (0x0001857b) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b31,	// (0x0001857b) cntbar_detail_list_event_pane_t1

0x8b46,	// (0x00018590) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b46,	// (0x00018590) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8a,	// (0x0001f8d4) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8a,	// (0x0001f8d4) cntbar_detail_list_event_pane_t

0xc51a,	// (0x0001bf64) cell_cntbar_detail_list_shct_pane_g1

0xaacd,	// (0x0001a517) navi_pane_mv_g3

0x9663,	// (0x000190ad) main_cntbar_detail_pane_ParamLimits

0x95ee,	// (0x00019038) main_notif_wgt_pane

0xce0c,	// (0x0001c856) aid_tch_main_mp4_pane_g4

0xd03a,	// (0x0001ca84) popup_slider_window_cp02

0xea2e,	// (0x0001e478) list_recal_day_event_pane

0x899d,	// (0x000183e7) cntbar_detail_btn_pane_ParamLimits

0x899d,	// (0x000183e7) cntbar_detail_btn_pane

0x89b6,	// (0x00018400) cntbar_detail_btn_pane_cp01_ParamLimits

0x89b6,	// (0x00018400) cntbar_detail_btn_pane_cp01

0x89e3,	// (0x0001842d) cntbar_detail_list_shct_pane_ParamLimits

0x89f3,	// (0x0001843d) cntbar_detail_pane_g1_ParamLimits

0x89f3,	// (0x0001843d) cntbar_detail_pane_g1

0x8a07,	// (0x00018451) cntbar_detail_pane_t1_ParamLimits

0x8a07,	// (0x00018451) cntbar_detail_pane_t1

0x8acf,	// (0x00018519) cntbar_detail_list_event_pane_g3_ParamLimits

0x8acf,	// (0x00018519) cntbar_detail_list_event_pane_g3

0x8ae7,	// (0x00018531) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ae7,	// (0x00018531) cntbar_detail_list_event_pane_g4

0x8aff,	// (0x00018549) cntbar_detail_list_event_pane_g5_ParamLimits

0x8aff,	// (0x00018549) cntbar_detail_list_event_pane_g5

0x8b17,	// (0x00018561) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b17,	// (0x00018561) cntbar_detail_list_event_pane_g6

0x8b5b,	// (0x000185a5) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b5b,	// (0x000185a5) cntbar_detail_list_event_pane_t3

0x8b6d,	// (0x000185b7) popup_notif_wgt_window_ParamLimits

0x8b6d,	// (0x000185b7) popup_notif_wgt_window

0x8b86,	// (0x000185d0) popup_submenu_window_cp01_ParamLimits

0x8b86,	// (0x000185d0) popup_submenu_window_cp01

0xa018,	// (0x00019a62) bg_popup_window_pane_cp10

0xed2b,	// (0x0001e775) listscroll_notif_wgt_pane

0xed3d,	// (0x0001e787) list_notif_wgt_window

0xed46,	// (0x0001e790) scroll_pane_cp033

0x8b9a,	// (0x000185e4) list_notif_wgt_row_pane_ParamLimits

0x8b9a,	// (0x000185e4) list_notif_wgt_row_pane

0xed4f,	// (0x0001e799) aid_size_list_notif_wgt_del

0xed5c,	// (0x0001e7a6) list_notif_wgt_row_pane_g1

0xed68,	// (0x0001e7b2) list_notif_wgt_row_pane_g2

0xed77,	// (0x0001e7c1) list_notif_wgt_row_pane_g3

0x0002,

0xfe91,	// (0x0001f8db) list_notif_wgt_row_pane_g

0xed84,	// (0x0001e7ce) list_notif_wgt_row_pane_t1

0xed9a,	// (0x0001e7e4) list_notif_wgt_row_pane_t2

0xedac,	// (0x0001e7f6) list_notif_wgt_row_pane_t3

0x0002,

0xfe98,	// (0x0001f8e2) list_notif_wgt_row_pane_t

0xd55c,	// (0x0001cfa6) list_recal_day_event_pane_g1

0xedbe,	// (0x0001e808) list_recal_day_event_pane_t1

0x95ee,	// (0x00019038) bg_button_pane_cp045

0x8baa,	// (0x000185f4) cntbar_detail_btn_pane_t1

0xbfd0,	// (0x0001ba1a) main_callh_pane_ParamLimits

0xbfd0,	// (0x0001ba1a) main_callh_pane

0x95ee,	// (0x00019038) main_coverflow0_pane

0x95ee,	// (0x00019038) main_wgtman_pane

0x77f2,	// (0x0001723c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x77f2,	// (0x0001723c) main_fs_bigclock_unlock_btn_pane

0x83a6,	// (0x00017df0) bg_button_pane_cp16

0x83b6,	// (0x00017e00) cell_tport_appsw_pane_g3

0x8bb8,	// (0x00018602) cf0_flow_pane_ParamLimits

0x8bb8,	// (0x00018602) cf0_flow_pane

0xedcd,	// (0x0001e817) listscroll_cf0_pane

0xedd8,	// (0x0001e822) main_cf0_pane_g1

0x8bcd,	// (0x00018617) main_cf0_pane_t1_ParamLimits

0x8bcd,	// (0x00018617) main_cf0_pane_t1

0x8be4,	// (0x0001862e) main_cf0_pane_t2_ParamLimits

0x8be4,	// (0x0001862e) main_cf0_pane_t2

0x0001,

0xfea4,	// (0x0001f8ee) main_cf0_pane_t_ParamLimits

0xfea4,	// (0x0001f8ee) main_cf0_pane_t

0xedea,	// (0x0001e834) scroll_pane_cp11

0x8bfb,	// (0x00018645) cf0_flow_pane_g1

0x8c07,	// (0x00018651) cf0_flow_pane_g2

0x0001,

0xfea9,	// (0x0001f8f3) cf0_flow_pane_g

0x8c13,	// (0x0001865d) cf0_flow_pane_t1

0x95ee,	// (0x00019038) main_call6_pane

0x95ee,	// (0x00019038) main_calllock_pane

0x8c25,	// (0x0001866f) call6_btn_grp_pane_ParamLimits

0x8c25,	// (0x0001866f) call6_btn_grp_pane

0x8c3f,	// (0x00018689) call6_pane_g1_ParamLimits

0x8c3f,	// (0x00018689) call6_pane_g1

0x8c58,	// (0x000186a2) popup_call6_1st_window_ParamLimits

0x8c58,	// (0x000186a2) popup_call6_1st_window

0x8c6c,	// (0x000186b6) popup_call6_2nd_window_ParamLimits

0x8c6c,	// (0x000186b6) popup_call6_2nd_window

0x8c80,	// (0x000186ca) cell_call6_btn_pane_ParamLimits

0x8c80,	// (0x000186ca) cell_call6_btn_pane

0xa018,	// (0x00019a62) bg_popup_call2_in_pane_cp03

0xedf5,	// (0x0001e83f) popup_call6_1st_window_g1

0xedfd,	// (0x0001e847) popup_call6_1st_window_g2

0xee05,	// (0x0001e84f) popup_call6_1st_window_g3

0x0002,

0xfeae,	// (0x0001f8f8) popup_call6_1st_window_g

0xee0d,	// (0x0001e857) popup_call6_1st_window_t1

0xee1c,	// (0x0001e866) popup_call6_1st_window_t2

0xee2c,	// (0x0001e876) popup_call6_1st_window_t3

0x0002,

0xfeb5,	// (0x0001f8ff) popup_call6_1st_window_t

0xa018,	// (0x00019a62) bg_popup_call2_in_pane_cp04

0xedf5,	// (0x0001e83f) popup_call6_2nd_window_g1

0xedfd,	// (0x0001e847) popup_call6_2nd_window_g2

0xee05,	// (0x0001e84f) popup_call6_2nd_window_g3

0x0002,

0xfeae,	// (0x0001f8f8) popup_call6_2nd_window_g

0xee0d,	// (0x0001e857) popup_call6_2nd_window_t1

0x95ee,	// (0x00019038) bg_button_pane_cp15

0xee3c,	// (0x0001e886) cell_call6_btn_pane_g1

0xee45,	// (0x0001e88f) cell_call6_btn_pane_t1

0x8c94,	// (0x000186de) listscroll_wgtman_pane_ParamLimits

0x8c94,	// (0x000186de) listscroll_wgtman_pane

0x8cb5,	// (0x000186ff) wgtman_btn_pane_ParamLimits

0x8cb5,	// (0x000186ff) wgtman_btn_pane

0xa8df,	// (0x0001a329) aid_scroll_copy1

0xee54,	// (0x0001e89e) list_wgtman_pane

0x8cf8,	// (0x00018742) wgtman_btn_pane_g1_ParamLimits

0x8cf8,	// (0x00018742) wgtman_btn_pane_g1

0x8d24,	// (0x0001876e) wgtman_btn_pane_t1_ParamLimits

0x8d24,	// (0x0001876e) wgtman_btn_pane_t1

0xee5e,	// (0x0001e8a8) wgtman_btn_pane_t2_ParamLimits

0xee5e,	// (0x0001e8a8) wgtman_btn_pane_t2

0x0001,

0xfebc,	// (0x0001f906) wgtman_btn_pane_t_ParamLimits

0xfebc,	// (0x0001f906) wgtman_btn_pane_t

0x8d61,	// (0x000187ab) listrow_wgtman_pane_ParamLimits

0x8d61,	// (0x000187ab) listrow_wgtman_pane

0x8d75,	// (0x000187bf) listrow_wgtman_pane_g1

0x8d82,	// (0x000187cc) listrow_wgtman_pane_g2

0x0001,

0xfec1,	// (0x0001f90b) listrow_wgtman_pane_g

0x8da0,	// (0x000187ea) listrow_wgtman_pane_t1

0x8db8,	// (0x00018802) listrow_wgtman_pane_t2

0x0001,

0xfec6,	// (0x0001f910) listrow_wgtman_pane_t

0x8dde,	// (0x00018828) wait_bar_pane_cp09

0xee75,	// (0x0001e8bf) main_calllock_btn_pane

0xee7f,	// (0x0001e8c9) main_calllock_pane_g1

0x95ee,	// (0x00019038) bg_button_pane_cp17

0xee3c,	// (0x0001e886) main_calllock_btn_pane_g1

0xee8b,	// (0x0001e8d5) main_calllock_btn_pane_t1

0x95ee,	// (0x00019038) main_dialer3_pane

0x95ee,	// (0x00019038) main_fmrd2_pane

0xc51a,	// (0x0001bf64) main_fs_bigclock_unlock_btn_pane_g1

0x8df8,	// (0x00018842) main_fs_bigclock_unlock_btn_pane_t1

0x8e06,	// (0x00018850) area_fmrd2_info_pane_ParamLimits

0x8e06,	// (0x00018850) area_fmrd2_info_pane

0x8e17,	// (0x00018861) area_fmrd2_visual_pane_ParamLimits

0x8e17,	// (0x00018861) area_fmrd2_visual_pane

0x8e25,	// (0x0001886f) fmrd2_indi_pane_ParamLimits

0x8e25,	// (0x0001886f) fmrd2_indi_pane

0x8e32,	// (0x0001887c) area_fmrd2_visual_pane_g1

0x8e3a,	// (0x00018884) area_fmrd2_visual_pane_t1

0x8e4a,	// (0x00018894) area_fmrd2_visual_pane_t2

0x8e5a,	// (0x000188a4) area_fmrd2_visual_pane_t3

0x0002,

0xfed0,	// (0x0001f91a) area_fmrd2_visual_pane_t

0x8e6a,	// (0x000188b4) area_fmrd2_info_pane_g1

0x8e72,	// (0x000188bc) area_fmrd2_info_pane_t1

0x8e82,	// (0x000188cc) area_fmrd2_info_pane_t2

0x8e92,	// (0x000188dc) area_fmrd2_info_pane_t3

0x8ea2,	// (0x000188ec) area_fmrd2_info_pane_t4

0x0003,

0xfed7,	// (0x0001f921) area_fmrd2_info_pane_t

0x8eb2,	// (0x000188fc) fmrd2_indi_pane_t1

0x8ec2,	// (0x0001890c) fmrd2_indi_pane_t2

0x8ed2,	// (0x0001891c) fmrd2_indi_pane_t3

0x0002,

0xfee0,	// (0x0001f92a) fmrd2_indi_pane_t

0x787b,	// (0x000172c5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x787b,	// (0x000172c5) list_single_fs_bigclock_indicator_pane_g5

0x7930,	// (0x0001737a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7930,	// (0x0001737a) list_single_fs_bigclock_indicator_pane_t5

0x8527,	// (0x00017f71) aid_cell_bcale_month_pane_ParamLimits

0x8527,	// (0x00017f71) aid_cell_bcale_month_pane

0x8545,	// (0x00017f8f) bcale_month_pane_ParamLimits

0x8545,	// (0x00017f8f) bcale_month_pane

0x8569,	// (0x00017fb3) bcale_preview_pane_ParamLimits

0x8569,	// (0x00017fb3) bcale_preview_pane

0xec38,	// (0x0001e682) list_single_fs_bigclock_pane_t1_ParamLimits

0xec57,	// (0x0001e6a1) list_single_fs_bigclock_pane_t2_ParamLimits

0xec57,	// (0x0001e6a1) list_single_fs_bigclock_pane_t2

0x0001,

0xfe62,	// (0x0001f8ac) list_single_fs_bigclock_pane_t_ParamLimits

0xfe62,	// (0x0001f8ac) list_single_fs_bigclock_pane_t

0x8df0,	// (0x0001883a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfecb,	// (0x0001f915) main_fs_bigclock_unlock_btn_pane_g

0x8ee2,	// (0x0001892c) aid_dia3_key_size_ParamLimits

0x8ee2,	// (0x0001892c) aid_dia3_key_size

0x8ef6,	// (0x00018940) aid_dia3_listrow_size_ParamLimits

0x8ef6,	// (0x00018940) aid_dia3_listrow_size

0x8f10,	// (0x0001895a) dia3_keypad_fun_pane_ParamLimits

0x8f10,	// (0x0001895a) dia3_keypad_fun_pane

0x8f2c,	// (0x00018976) dia3_keypad_num_pane_ParamLimits

0x8f2c,	// (0x00018976) dia3_keypad_num_pane

0x8f48,	// (0x00018992) dia3_listscroll_pane_ParamLimits

0x8f48,	// (0x00018992) dia3_listscroll_pane

0x8f5e,	// (0x000189a8) dia3_numentry_pane_ParamLimits

0x8f5e,	// (0x000189a8) dia3_numentry_pane

0xee9a,	// (0x0001e8e4) dia3_list_pane

0x8f77,	// (0x000189c1) scroll_pane_cp12

0x95ee,	// (0x00019038) bg_dia3_numentry_pane

0x8f82,	// (0x000189cc) dia3_numentry_pane_t1

0x8f91,	// (0x000189db) cell_dia3_key_num_pane

0x8f99,	// (0x000189e3) cell_dia3_key0_fun_pane_ParamLimits

0x8f99,	// (0x000189e3) cell_dia3_key0_fun_pane

0x8fad,	// (0x000189f7) cell_dia3_key1_fun_pane_ParamLimits

0x8fad,	// (0x000189f7) cell_dia3_key1_fun_pane

0x8fc4,	// (0x00018a0e) dia3_listrow_pane

0xdf5c,	// (0x0001d9a6) bg_dia3_numentry_pane_g1

0x95ee,	// (0x00019038) bg_button_pane_cp21

0x8fd6,	// (0x00018a20) cell_dia3_key_num_pane_t1

0x8fe4,	// (0x00018a2e) cell_dia3_key_num_pane_t2

0x8ff3,	// (0x00018a3d) cell_dia3_key_num_pane_t3

0x9002,	// (0x00018a4c) cell_dia3_key_num_pane_t4

0x0003,

0xfee7,	// (0x0001f931) cell_dia3_key_num_pane_t

0x95ee,	// (0x00019038) bg_button_pane_cp19

0x9011,	// (0x00018a5b) cell_dia3_key0_fun_pane_g1

0x95ee,	// (0x00019038) bg_button_pane_cp20

0x9011,	// (0x00018a5b) cell_dia3_key1_fun_pane_g1

0x9019,	// (0x00018a63) area_left_week_number_pane

0x9027,	// (0x00018a71) area_top_day_name_pane

0x903a,	// (0x00018a84) frame_month_view_pane

0xeea5,	// (0x0001e8ef) grid_month_view_pane

0x904f,	// (0x00018a99) cell_top_day_name_pane_ParamLimits

0x904f,	// (0x00018a99) cell_top_day_name_pane

0x907e,	// (0x00018ac8) cell_area_left_week_number_pane_ParamLimits

0x907e,	// (0x00018ac8) cell_area_left_week_number_pane

0x9094,	// (0x00018ade) cell_month_view_pane_ParamLimits

0x9094,	// (0x00018ade) cell_month_view_pane

0xeeb3,	// (0x0001e8fd) frm_month_g1

0x90c5,	// (0x00018b0f) frm_month_g2

0x90d8,	// (0x00018b22) frm_month_g3

0x90eb,	// (0x00018b35) frm_month_g4

0x90fe,	// (0x00018b48) frm_month_g5

0x9111,	// (0x00018b5b) frm_month_g6

0x9126,	// (0x00018b70) frm_month_g7

0xef05,	// (0x0001e94f) frm_month_g8

0x913b,	// (0x00018b85) frm_month_g9

0x914b,	// (0x00018b95) frm_month_g10

0x915b,	// (0x00018ba5) frm_month_g11

0x916b,	// (0x00018bb5) frm_month_g12

0x917d,	// (0x00018bc7) frm_month_g13

0x9191,	// (0x00018bdb) frm_month_g14

0x91a5,	// (0x00018bef) frm_month_g15

0x91b9,	// (0x00018c03) frm_month_g16

0x000f,

0xfef0,	// (0x0001f93a) frm_month_g

0xef12,	// (0x0001e95c) cell_top_day_name_pane_t1

0x91cd,	// (0x00018c17) cell_area_left_week_number_pane_g1

0x91d9,	// (0x00018c23) cell_area_left_week_number_pane_t1

0xc741,	// (0x0001c18b) cell_month_view_pane_g1

0x91ec,	// (0x00018c36) cell_month_view_pane_t1

0x95ee,	// (0x00019038) main_fps_pane

0xe399,	// (0x0001dde3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe399,	// (0x0001dde3) cmail_ddmenu_btn02_pane_cp1

0xe3b5,	// (0x0001ddff) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3b5,	// (0x0001ddff) cmail_ddmenu_btn02_pane_cp2

0x8840,	// (0x0001828a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8840,	// (0x0001828a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe15,	// (0x0001f85f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe15,	// (0x0001f85f) cmail_ddmenu_btn02_pane_g

0x8861,	// (0x000182ab) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8861,	// (0x000182ab) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1a,	// (0x0001f864) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1a,	// (0x0001f864) cmail_ddmenu_btn02_pane_t

0x91ff,	// (0x00018c49) fps_text_pane_ParamLimits

0x91ff,	// (0x00018c49) fps_text_pane

0x9216,	// (0x00018c60) main_fps_pane_g1_ParamLimits

0x9216,	// (0x00018c60) main_fps_pane_g1

0x922e,	// (0x00018c78) wait_bar_pane_cp010_ParamLimits

0x922e,	// (0x00018c78) wait_bar_pane_cp010

0x9241,	// (0x00018c8b) fps_text_pane_t1_ParamLimits

0x9241,	// (0x00018c8b) fps_text_pane_t1

0xeed7,	// (0x0001e921) cam4_image_uncrop_pane_g1

0xeee0,	// (0x0001e92a) cam4_image_uncrop_pane_g2

0x5740,	// (0x0001518a) cam4_image_uncrop_pane_g3

0x5749,	// (0x00015193) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0001f321) cam4_image_uncrop_pane_g

0x8fc4,	// (0x00018a0e) dia3_listrow_pane_ParamLimits

0x95ee,	// (0x00019038) main_phob2_pane

0x8379,	// (0x00017dc3) cell_tport_appsw_pane_cp02_ParamLimits

0x8379,	// (0x00017dc3) cell_tport_appsw_pane_cp02

0x838d,	// (0x00017dd7) cell_tport_appsw_pane_cp03_ParamLimits

0x838d,	// (0x00017dd7) cell_tport_appsw_pane_cp03

0x95ee,	// (0x00019038) phob2_contact_card_pane

0x95ee,	// (0x00019038) phob2_listscroll_pane

0xef25,	// (0x0001e96f) phob2_list_pane

0xef2d,	// (0x0001e977) scroll_pane_cp034

0x9259,	// (0x00018ca3) phob2_cc_data_pane_ParamLimits

0x9259,	// (0x00018ca3) phob2_cc_data_pane

0x9272,	// (0x00018cbc) phob2_cc_listscroll_pane_ParamLimits

0x9272,	// (0x00018cbc) phob2_cc_listscroll_pane

0x8d61,	// (0x000187ab) list_double_large_graphic_phob2_pane_ParamLimits

0x8d61,	// (0x000187ab) list_double_large_graphic_phob2_pane

0x9294,	// (0x00018cde) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9294,	// (0x00018cde) list_double_large_graphic_phob2_pane_g1

0x92aa,	// (0x00018cf4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92aa,	// (0x00018cf4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff11,	// (0x0001f95b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff11,	// (0x0001f95b) list_double_large_graphic_phob2_pane_g

0x92b6,	// (0x00018d00) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92b6,	// (0x00018d00) list_double_large_graphic_phob2_pane_t1

0x92cb,	// (0x00018d15) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92cb,	// (0x00018d15) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff16,	// (0x0001f960) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff16,	// (0x0001f960) list_double_large_graphic_phob2_pane_t

0x95ee,	// (0x00019038) list_highlight_pane_cp024

0x92dd,	// (0x00018d27) phob2_cc_button_pane

0x92e7,	// (0x00018d31) phob2_cc_data_pane_g1_ParamLimits

0x92e7,	// (0x00018d31) phob2_cc_data_pane_g1

0x92ff,	// (0x00018d49) phob2_cc_data_pane_g2_ParamLimits

0x92ff,	// (0x00018d49) phob2_cc_data_pane_g2

0x0001,

0xff1b,	// (0x0001f965) phob2_cc_data_pane_g_ParamLimits

0xff1b,	// (0x0001f965) phob2_cc_data_pane_g

0x930f,	// (0x00018d59) phob2_cc_data_pane_t1_ParamLimits

0x930f,	// (0x00018d59) phob2_cc_data_pane_t1

0x9331,	// (0x00018d7b) phob2_cc_data_pane_t2_ParamLimits

0x9331,	// (0x00018d7b) phob2_cc_data_pane_t2

0x9353,	// (0x00018d9d) phob2_cc_data_pane_t3_ParamLimits

0x9353,	// (0x00018d9d) phob2_cc_data_pane_t3

0x0002,

0xff20,	// (0x0001f96a) phob2_cc_data_pane_t_ParamLimits

0xff20,	// (0x0001f96a) phob2_cc_data_pane_t

0xef35,	// (0x0001e97f) phob2_cc_list_pane_ParamLimits

0xef35,	// (0x0001e97f) phob2_cc_list_pane

0xd668,	// (0x0001d0b2) scroll_pane_cp035_ParamLimits

0xd668,	// (0x0001d0b2) scroll_pane_cp035

0x9663,	// (0x000190ad) bg_button_pane_cp033

0xef41,	// (0x0001e98b) phob2_cc_button_pane_g1

0xef4d,	// (0x0001e997) phob2_cc_button_pane_t1

0xef62,	// (0x0001e9ac) phob2_cc_button_pane_t2

0x0001,

0xff27,	// (0x0001f971) phob2_cc_button_pane_t

0x9375,	// (0x00018dbf) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9375,	// (0x00018dbf) list_double_large_graphic_phob2_cc_pane

0x93b3,	// (0x00018dfd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93b3,	// (0x00018dfd) list_double_large_graphic_phob2_cc_pane_g1

0x93bf,	// (0x00018e09) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93bf,	// (0x00018e09) list_double_large_graphic_phob2_cc_pane_g2

0x93cb,	// (0x00018e15) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93cb,	// (0x00018e15) list_double_large_graphic_phob2_cc_pane_g3

0x93d7,	// (0x00018e21) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93d7,	// (0x00018e21) list_double_large_graphic_phob2_cc_pane_g4

0x93e3,	// (0x00018e2d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x93e3,	// (0x00018e2d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2c,	// (0x0001f976) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2c,	// (0x0001f976) list_double_large_graphic_phob2_cc_pane_g

0x93ef,	// (0x00018e39) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93ef,	// (0x00018e39) list_double_large_graphic_phob2_cc_pane_t1

0x9418,	// (0x00018e62) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9418,	// (0x00018e62) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff37,	// (0x0001f981) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff37,	// (0x0001f981) list_double_large_graphic_phob2_cc_pane_t

0xef74,	// (0x0001e9be) list_highlight_pane_cp025_ParamLimits

0xef74,	// (0x0001e9be) list_highlight_pane_cp025

0x9663,	// (0x000190ad) bg_button_pane_cp033_ParamLimits

0xef41,	// (0x0001e98b) phob2_cc_button_pane_g1_ParamLimits

0xef4d,	// (0x0001e997) phob2_cc_button_pane_t1_ParamLimits

0xef62,	// (0x0001e9ac) phob2_cc_button_pane_t2_ParamLimits

0xff27,	// (0x0001f971) phob2_cc_button_pane_t_ParamLimits

0xfceb,	// (0x0000f735) popup_wgtman_window

0xd3e8,	// (0x0001ce32) scroll_pane_cp038

0x8cda,	// (0x00018724) wgtman_btn_pane_cp_01_ParamLimits

0x8cda,	// (0x00018724) wgtman_btn_pane_cp_01

0xef82,	// (0x0001e9cc) wgtman_content_pane

0xef8b,	// (0x0001e9d5) wgtman_heading_pane

0x95ee,	// (0x00019038) bg_heading_pane_cp02

0xef94,	// (0x0001e9de) wgtman_heading_pane_g1

0xef9c,	// (0x0001e9e6) wgtman_heading_pane_t1

0xefaa,	// (0x0001e9f4) scroll_pane_cp036

0xefb2,	// (0x0001e9fc) wgtman_list_pane

0xeeeb,	// (0x0001e935) wgtman_list_pane_t1_ParamLimits

0xeeeb,	// (0x0001e935) wgtman_list_pane_t1

0xd165,	// (0x0001cbaf) cam4_grid_pane

0x6577,	// (0x00015fc1) bg_button_pane_cp015_ParamLimits

0x658b,	// (0x00015fd5) bg_button_pane_cp016_ParamLimits

0x659e,	// (0x00015fe8) bg_button_pane_cp017_ParamLimits

0x65f6,	// (0x00016040) popup_vitu2_query_window_g3_ParamLimits

0x65f6,	// (0x00016040) popup_vitu2_query_window_g3

0x66b3,	// (0x000160fd) popup_vitu2_query_window_t6_ParamLimits

0x66b3,	// (0x000160fd) popup_vitu2_query_window_t6

0x66de,	// (0x00016128) popup_vitu2_query_window_t7_ParamLimits

0x66de,	// (0x00016128) popup_vitu2_query_window_t7

0xeed7,	// (0x0001e921) cam4_grid_pane_g1

0xeee0,	// (0x0001e92a) cam4_grid_pane_g2

0xefba,	// (0x0001ea04) cam4_grid_pane_g3

0xefc3,	// (0x0001ea0d) cam4_grid_pane_g4

0x0003,

0xff3c,	// (0x0001f986) cam4_grid_pane_g

0x0cc0,	// (0x0001070a) aid_placing_vt_slider_lsc_ParamLimits

0x0fad,	// (0x000109f7) vidtel_button_pane_ParamLimits

0x0fad,	// (0x000109f7) vidtel_button_pane

0x95ee,	// (0x00019038) bg_button_pane_cp034

0xefce,	// (0x0001ea18) vidtel_button_pane_g1

0xefd6,	// (0x0001ea20) vidtel_button_pane_t1

0xd510,	// (0x0001cf5a) aid_size_vtel_slider_touch

0xd668,	// (0x0001d0b2) scroll_pane_cp039

0x74b9,	// (0x00016f03) ncim_query_button_pane_cp01_ParamLimits

0x74d8,	// (0x00016f22) ncimui_query_pane_g1_ParamLimits

0x9663,	// (0x000190ad) input_focus_pane_cp012_ParamLimits

0xdf9a,	// (0x0001d9e4) ncim_query_entry_pane_t1_ParamLimits

0xd668,	// (0x0001d0b2) scroll_pane_cp039_ParamLimits

0xa9b6,	// (0x0001a400) navi_pane_bcale_mc_g1

0xa9be,	// (0x0001a408) navi_pane_bcale_mc_t1

0xe3eb,	// (0x0001de35) main_sp_fs_email_pane_g1

0xe3f7,	// (0x0001de41) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0001f71c) main_sp_fs_email_pane_g

0xe8c4,	// (0x0001e30e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8c4,	// (0x0001e30e) list_single_cale_mrui_row_pane_g3

0x8881,	// (0x000182cb) list_single_recal_day_pane_g5_event_pane

0xeaa0,	// (0x0001e4ea) list_single_recal_day_pane_g7

0xefec,	// (0x0001ea36) list_recal_day_event_pane_cp01

0xeff5,	// (0x0001ea3f) list_recal_vselct_arw_lo_pane_cp01

0xeffd,	// (0x0001ea47) list_recal_vselct_arw_up_pane_cp01

0xf005,	// (0x0001ea4f) list_recal_vselct_pane_cp01

0xd55c,	// (0x0001cfa6) list_recal_day_event_pane_cp01_g1

0xf00f,	// (0x0001ea59) list_recal_day_event_pane_cp01_t1

0xeaa8,	// (0x0001e4f2) list_single_recal_day_pane_t1_ParamLimits

0xeaba,	// (0x0001e504) list_single_recal_day_pane_t2_ParamLimits

0xfe2a,	// (0x0001f874) list_single_recal_day_pane_t_ParamLimits

0x9d14,	// (0x0001975e) bg_notes_pane_ParamLimits

0x9dbf,	// (0x00019809) list_notes_pane_ParamLimits

0x0003,	// (0x0000fa4d) scroll_pane_cp06_ParamLimits

0x9dfb,	// (0x00019845) main_notes_pane_ParamLimits

0x9663,	// (0x000190ad) main_welc_pane

0x9458,	// (0x00018ea2) main_welc_body_pane_ParamLimits

0x9458,	// (0x00018ea2) main_welc_body_pane

0x9477,	// (0x00018ec1) main_welc_opti_pane_ParamLimits

0x9477,	// (0x00018ec1) main_welc_opti_pane

0x94cf,	// (0x00018f19) main_welc_pane_t1_ParamLimits

0x94cf,	// (0x00018f19) main_welc_pane_t1

0xeec0,	// (0x0001e90a) main_welc_body_row_pane_ParamLimits

0xeec0,	// (0x0001e90a) main_welc_body_row_pane

0xd5e4,	// (0x0001d02e) main_welc_opti_row_pane_ParamLimits

0xd5e4,	// (0x0001d02e) main_welc_opti_row_pane

0xf01d,	// (0x0001ea67) main_welc_opti_row_pane_g1

0x9551,	// (0x00018f9b) main_welc_opti_row_pane_t1

0xf025,	// (0x0001ea6f) main_welc_body_row_pane_t1

0xed35,	// (0x0001e77f) popup_notif_wgt_heading_pane

0xed4f,	// (0x0001e799) aid_size_list_notif_wgt_del_ParamLimits

0xed5c,	// (0x0001e7a6) list_notif_wgt_row_pane_g1_ParamLimits

0xed68,	// (0x0001e7b2) list_notif_wgt_row_pane_g2_ParamLimits

0xed77,	// (0x0001e7c1) list_notif_wgt_row_pane_g3_ParamLimits

0xfe91,	// (0x0001f8db) list_notif_wgt_row_pane_g_ParamLimits

0xed84,	// (0x0001e7ce) list_notif_wgt_row_pane_t1_ParamLimits

0xed9a,	// (0x0001e7e4) list_notif_wgt_row_pane_t2_ParamLimits

0xedac,	// (0x0001e7f6) list_notif_wgt_row_pane_t3_ParamLimits

0xfe98,	// (0x0001f8e2) list_notif_wgt_row_pane_t_ParamLimits

0x8d75,	// (0x000187bf) listrow_wgtman_pane_g1_ParamLimits

0x8d82,	// (0x000187cc) listrow_wgtman_pane_g2_ParamLimits

0xfec1,	// (0x0001f90b) listrow_wgtman_pane_g_ParamLimits

0x8da0,	// (0x000187ea) listrow_wgtman_pane_t1_ParamLimits

0x8db8,	// (0x00018802) listrow_wgtman_pane_t2_ParamLimits

0xfec6,	// (0x0001f910) listrow_wgtman_pane_t_ParamLimits

0x8dde,	// (0x00018828) wait_bar_pane_cp09_ParamLimits

0x95ee,	// (0x00019038) bg_popup_heading_pane_cp02

0xf034,	// (0x0001ea7e) popup_notif_wgt_heading_pane_g1

0xf03c,	// (0x0001ea86) popup_notif_wgt_heading_pane_t1

0x95ee,	// (0x00019038) main_vids_pane

0x95ee,	// (0x00019038) vids_listscroll_pane

0x9560,	// (0x00018faa) scroll_pane_cp040

0x95ee,	// (0x00019038) vids_list_pane

0x956b,	// (0x00018fb5) vids_list_double_pane_ParamLimits

0x956b,	// (0x00018fb5) vids_list_double_pane

0x957c,	// (0x00018fc6) vids_list_double_pane_g1

0x9585,	// (0x00018fcf) vids_list_double_pane_t1

0x9595,	// (0x00018fdf) vids_list_double_pane_t2

0x0001,

0xff53,	// (0x0001f99d) vids_list_double_pane_t

0x9663,	// (0x000190ad) main_ncimui_pane_ParamLimits

0x72ef,	// (0x00016d39) main_ncimui_pane_g1_ParamLimits

0x72fb,	// (0x00016d45) main_ncimui_pane_g2_ParamLimits

0x72fb,	// (0x00016d45) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0001f61d) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0001f61d) main_ncimui_pane_g

0x9496,	// (0x00018ee0) main_welc_pane_g1_ParamLimits

0x9496,	// (0x00018ee0) main_welc_pane_g1

0x94ab,	// (0x00018ef5) main_welc_pane_g2_ParamLimits

0x94ab,	// (0x00018ef5) main_welc_pane_g2

0x0002,

0xff45,	// (0x0001f98f) main_welc_pane_g_ParamLimits

0xff45,	// (0x0001f98f) main_welc_pane_g

0x9d14,	// (0x0001975e) listscroll_mce_pane_ParamLimits

0xab0d,	// (0x0001a557) wait_bar_pane_cp10

0xbfc4,	// (0x0001ba0e) main_cale_day_pane_ParamLimits

0xbfc4,	// (0x0001ba0e) main_cale_week_pane_ParamLimits

0x9d14,	// (0x0001975e) main_messa_pane_ParamLimits

0x49ab,	// (0x000143f5) main_clock2_btn_pane_ParamLimits

0x49ab,	// (0x000143f5) main_clock2_btn_pane

0xc8d5,	// (0x0001c31f) main_clock2_btn_pane_cp01_ParamLimits

0xc8d5,	// (0x0001c31f) main_clock2_btn_pane_cp01

0xe850,	// (0x0001e29a) list_cale_mrui_pane_ParamLimits

0xede2,	// (0x0001e82c) main_cf0_pane_g2

0x0001,

0xfe9f,	// (0x0001f8e9) main_cf0_pane_g

0x9019,	// (0x00018a63) area_left_week_number_pane_ParamLimits

0x9027,	// (0x00018a71) area_top_day_name_pane_ParamLimits

0x903a,	// (0x00018a84) frame_month_view_pane_ParamLimits

0xeea5,	// (0x0001e8ef) grid_month_view_pane_ParamLimits

0xeeb3,	// (0x0001e8fd) frm_month_g1_ParamLimits

0x90c5,	// (0x00018b0f) frm_month_g2_ParamLimits

0x90d8,	// (0x00018b22) frm_month_g3_ParamLimits

0x90eb,	// (0x00018b35) frm_month_g4_ParamLimits

0x90fe,	// (0x00018b48) frm_month_g5_ParamLimits

0x9111,	// (0x00018b5b) frm_month_g6_ParamLimits

0x9126,	// (0x00018b70) frm_month_g7_ParamLimits

0xef05,	// (0x0001e94f) frm_month_g8_ParamLimits

0x913b,	// (0x00018b85) frm_month_g9_ParamLimits

0x914b,	// (0x00018b95) frm_month_g10_ParamLimits

0x915b,	// (0x00018ba5) frm_month_g11_ParamLimits

0x916b,	// (0x00018bb5) frm_month_g12_ParamLimits

0x917d,	// (0x00018bc7) frm_month_g13_ParamLimits

0x9191,	// (0x00018bdb) frm_month_g14_ParamLimits

0x91a5,	// (0x00018bef) frm_month_g15_ParamLimits

0x91b9,	// (0x00018c03) frm_month_g16_ParamLimits

0xfef0,	// (0x0001f93a) frm_month_g_ParamLimits

0xef12,	// (0x0001e95c) cell_top_day_name_pane_t1_ParamLimits

0x91cd,	// (0x00018c17) cell_area_left_week_number_pane_g1_ParamLimits

0x91d9,	// (0x00018c23) cell_area_left_week_number_pane_t1_ParamLimits

0xc741,	// (0x0001c18b) cell_month_view_pane_g1_ParamLimits

0x91ec,	// (0x00018c36) cell_month_view_pane_t1_ParamLimits

0x9d0c,	// (0x00019756) main_clock2_btn_pane_g1

0xf04a,	// (0x0001ea94) main_clock2_btn_pane_t1

0x9663,	// (0x000190ad) listscroll_cmail_pane_ParamLimits

0xe3eb,	// (0x0001de35) main_sp_fs_email_pane_g1_ParamLimits

0xe3f7,	// (0x0001de41) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0001f71c) main_sp_fs_email_pane_g_ParamLimits

0xea0f,	// (0x0001e459) list_recal_day_pane_ParamLimits

0xea20,	// (0x0001e46a) mian_recal_day_pane_t1

0x7fed,	// (0x00017a37) list_single_dyc_row_text_pane_t4_ParamLimits

0x7fed,	// (0x00017a37) list_single_dyc_row_text_pane_t4

0x8036,	// (0x00017a80) list_single_dyc_row_text_pane_t5_ParamLimits

0x8036,	// (0x00017a80) list_single_dyc_row_text_pane_t5

0xe4a1,	// (0x0001deeb) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4a1,	// (0x0001deeb) list_single_dyc_row_text_pane_t6

0x1dba,	// (0x00011804) aid_mgn_list_cale_time_pane

0x9663,	// (0x000190ad) main_gallery2_pane_ParamLimits

0xc8e9,	// (0x0001c333) main_clock2_pane_cp01_t1

0xc8f7,	// (0x0001c341) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0001f1f3) main_clock2_pane_cp01_t

0x041f,	// (0x0000fe69) cale_week_scroll_pane_g16_ParamLimits

0x041f,	// (0x0000fe69) cale_week_scroll_pane_g16

0xa018,	// (0x00019a62) vorec_slider_pane

0xefd6,	// (0x0001ea20) vidtel_button_pane_t1_ParamLimits

0x88e7,	// (0x00018331) main_fs_bigclock_clock_pane_g1_ParamLimits

0x88e7,	// (0x00018331) main_fs_bigclock_clock_pane_g2_ParamLimits

0x88fa,	// (0x00018344) main_fs_bigclock_clock_pane_g3_ParamLimits

0x88fa,	// (0x00018344) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4d,	// (0x0001f897) main_fs_bigclock_clock_pane_g_ParamLimits

0x8911,	// (0x0001835b) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8927,	// (0x00018371) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe56,	// (0x0001f8a0) main_fs_bigclock_clock_pane_t_ParamLimits

0x4122,	// (0x00013b6c) main_mup3_lyrics_pane_ParamLimits

0x4122,	// (0x00013b6c) main_mup3_lyrics_pane

0x95cb,	// (0x00019015) main_mup3_lyrics_pane_t1_ParamLimits

0x95cb,	// (0x00019015) main_mup3_lyrics_pane_t1

0xcdf6,	// (0x0001c840) aid_main_mp4_pane_t1_area

0xce00,	// (0x0001c84a) aid_main_mp4_pane_t2_area

0xceac,	// (0x0001c8f6) main_mp4_pane_g7_ParamLimits

0xceac,	// (0x0001c8f6) main_mp4_pane_g7

0xceb8,	// (0x0001c902) main_mp4_pane_g8_ParamLimits

0xceb8,	// (0x0001c902) main_mp4_pane_g8

0x5503,	// (0x00014f4d) aid_call6_pane_g1_size

0x93a3,	// (0x00018ded) list_double_large_graphic_phob2_other_pane_ParamLimits

0x93a3,	// (0x00018ded) list_double_large_graphic_phob2_other_pane

0x95e6,	// (0x00019030) list_double_large_graphic_phob2_other_pane_g1

0x95ee,	// (0x00019038) list_highlight_pane_cp026

0x9663,	// (0x000190ad) main_welc_pane_ParamLimits

0x7cec,	// (0x00017736) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7cec,	// (0x00017736) main_sp_fs_ctrlbar_pane_g3

0x7d06,	// (0x00017750) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7d06,	// (0x00017750) main_sp_fs_ctrlbar_pane_g4

0x7d3a,	// (0x00017784) toolbar2_fixed_button_pane_cp01

0x7d45,	// (0x0001778f) toolbar2_fixed_button_pane_cp02

0x7d52,	// (0x0001779c) toolbar2_fixed_button_pane_cp03

0x9441,	// (0x00018e8b) list_welc_entry_pane_ParamLimits

0x9441,	// (0x00018e8b) list_welc_entry_pane

0x94c0,	// (0x00018f0a) main_welc_pane_g3_ParamLimits

0x94c0,	// (0x00018f0a) main_welc_pane_g3

0x94f1,	// (0x00018f3b) main_welc_pane_t2_ParamLimits

0x94f1,	// (0x00018f3b) main_welc_pane_t2

0x950c,	// (0x00018f56) main_welc_pane_t3_ParamLimits

0x950c,	// (0x00018f56) main_welc_pane_t3

0x0002,

0xff4c,	// (0x0001f996) main_welc_pane_t_ParamLimits

0xff4c,	// (0x0001f996) main_welc_pane_t

0x9526,	// (0x00018f70) welc_button_pane_ParamLimits

0x9526,	// (0x00018f70) welc_button_pane

0x953d,	// (0x00018f87) welc_service_logo_pane_ParamLimits

0x953d,	// (0x00018f87) welc_service_logo_pane

0xf058,	// (0x0001eaa2) list_single_welc_entry_pane_ParamLimits

0xf058,	// (0x0001eaa2) list_single_welc_entry_pane

0xf06b,	// (0x0001eab5) list_single_welc_entry_pane_g1

0xf073,	// (0x0001eabd) list_single_welc_entry_pane_t1

0xf081,	// (0x0001eacb) list_single_welc_entry_pane_t2

0x0001,

0xff58,	// (0x0001f9a2) list_single_welc_entry_pane_t

0x95ee,	// (0x00019038) bg_button_pane_cp035

0xf08f,	// (0x0001ead9) welc_button_pane_t1

0xf09d,	// (0x0001eae7) welc_service_logo_pane_g1

0xf0a6,	// (0x0001eaf0) welc_service_logo_pane_g2

0x0001,

0xff5d,	// (0x0001f9a7) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
