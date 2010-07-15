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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0000dae1 };

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
0x0b44,	// (0x0000e625) Screen

0x0b4e,	// (0x0000e62f) application_window

0x0b84,	// (0x0000e665) area_bottom_pane_ParamLimits

0x0b84,	// (0x0000e665) area_bottom_pane

0x0bb7,	// (0x0000e698) area_top_pane_ParamLimits

0x0bb7,	// (0x0000e698) area_top_pane

0x9596,	// (0x00017077) call_video_uplink_pane_ParamLimits

0x9596,	// (0x00017077) call_video_uplink_pane

0x0c37,	// (0x0000e718) main_pane_ParamLimits

0x0c37,	// (0x0000e718) main_pane

0xbfba,	// (0x00019a9b) context_pane

0x3d9a,	// (0x0001187b) navi_pane

0x3dc3,	// (0x000118a4) popup_cale_events_window_ParamLimits

0x3dc3,	// (0x000118a4) popup_cale_events_window

0xbfcd,	// (0x00019aae) popup_mup_playback_window

0x3ddb,	// (0x000118bc) signal_pane

0x9d17,	// (0x000177f8) main_browser_pane

0x9f86,	// (0x00017a67) main_burst_pane

0x95b2,	// (0x00017093) main_calc_pane

0xbf46,	// (0x00019a27) main_cale_day_pane

0x11d4,	// (0x0000ecb5) main_cale_month_pane

0xbf46,	// (0x00019a27) main_cale_week_pane

0x9f86,	// (0x00017a67) main_call_pane

0x99d1,	// (0x000174b2) main_call_poc_pane

0x9f86,	// (0x00017a67) main_camera_pane

0x9f86,	// (0x00017a67) main_chi_dic_pane

0xa81b,	// (0x000182fc) main_clock_pane

0x99d1,	// (0x000174b2) main_fmradio_pane

0x9f86,	// (0x00017a67) main_graph_messa_pane

0x99d1,	// (0x000174b2) main_help_pane

0x9d17,	// (0x000177f8) main_im_pane

0x9c2c,	// (0x0001770d) main_image_pane_ParamLimits

0x9c2c,	// (0x0001770d) main_image_pane

0x99d1,	// (0x000174b2) main_location2_pane

0x9f86,	// (0x00017a67) main_location_pane

0x9c2c,	// (0x0001770d) main_messa_pane

0x99d1,	// (0x000174b2) main_mp2_pane

0x9f86,	// (0x00017a67) main_mp_pane

0x99d1,	// (0x000174b2) main_msg_pane

0x99d1,	// (0x000174b2) main_mup_eq_pane

0x99d1,	// (0x000174b2) main_mup_pane

0x9d17,	// (0x000177f8) main_notes_pane

0x99d1,	// (0x000174b2) main_pec_pane

0x99d1,	// (0x000174b2) main_phob_pane

0x99d1,	// (0x000174b2) main_pinb_pane

0x99d1,	// (0x000174b2) main_postcard_pane

0x99d1,	// (0x000174b2) main_qdial_pane

0x9f86,	// (0x00017a67) main_skin_pane

0x99d1,	// (0x000174b2) main_smil2_pane

0x9f86,	// (0x00017a67) main_smil_pane

0x9f86,	// (0x00017a67) main_video_pane

0x9f86,	// (0x00017a67) main_video_tele_pane

0x9c2c,	// (0x0001770d) main_viewer_pane_ParamLimits

0x9c2c,	// (0x0001770d) main_viewer_pane

0x9f86,	// (0x00017a67) main_vorec_pane

0x3b8e,	// (0x0001166f) popup_blid_sat_info_window_ParamLimits

0x3b8e,	// (0x0001166f) popup_blid_sat_info_window

0x3be4,	// (0x000116c5) popup_dyc_status_message_window_ParamLimits

0x3be4,	// (0x000116c5) popup_dyc_status_message_window

0x3bfa,	// (0x000116db) popup_grid_large_graphic_window_ParamLimits

0x3bfa,	// (0x000116db) popup_grid_large_graphic_window

0x3c90,	// (0x00011771) popup_loc_request_window_ParamLimits

0x3c90,	// (0x00011771) popup_loc_request_window

0x3d74,	// (0x00011855) popup_wml_address_window_ParamLimits

0x3d74,	// (0x00011855) popup_wml_address_window

0x39e4,	// (0x000114c5) call_muted_g1

0x3709,	// (0x000111ea) popup_call_audio_conf_window_ParamLimits

0x3709,	// (0x000111ea) popup_call_audio_conf_window

0x39f4,	// (0x000114d5) popup_call_audio_first_window_ParamLimits

0x39f4,	// (0x000114d5) popup_call_audio_first_window

0x3a52,	// (0x00011533) popup_call_audio_in_window_ParamLimits

0x3a52,	// (0x00011533) popup_call_audio_in_window

0x3a7e,	// (0x0001155f) popup_call_audio_out_window_ParamLimits

0x3a7e,	// (0x0001155f) popup_call_audio_out_window

0x3aac,	// (0x0001158d) popup_call_audio_second_window_ParamLimits

0x3aac,	// (0x0001158d) popup_call_audio_second_window

0x3af2,	// (0x000115d3) popup_call_audio_wait_window_ParamLimits

0x3af2,	// (0x000115d3) popup_call_audio_wait_window

0x3b25,	// (0x00011606) popup_number_entry_window_ParamLimits

0x3b25,	// (0x00011606) popup_number_entry_window

0x95c0,	// (0x000170a1) bg_popup_call_pane_cp05_ParamLimits

0x95c0,	// (0x000170a1) bg_popup_call_pane_cp05

0x95e0,	// (0x000170c1) popup_number_entry_window_t1

0x95f3,	// (0x000170d4) popup_number_entry_window_t2

0x9605,	// (0x000170e6) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0001cb90) popup_number_entry_window_t

0x9617,	// (0x000170f8) text_title_cp2

0x962a,	// (0x0001710b) bg_popup_call_pane_cp_ParamLimits

0x962a,	// (0x0001710b) bg_popup_call_pane_cp

0x9638,	// (0x00017119) call_thumbnail_pane

0x9640,	// (0x00017121) popup_call_audio_in_window_g1_ParamLimits

0x9640,	// (0x00017121) popup_call_audio_in_window_g1

0x964c,	// (0x0001712d) popup_call_audio_in_window_g2_ParamLimits

0x964c,	// (0x0001712d) popup_call_audio_in_window_g2

0x9658,	// (0x00017139) popup_call_audio_in_window_g3_ParamLimits

0x9658,	// (0x00017139) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0001cb99) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0001cb99) popup_call_audio_in_window_g

0x9664,	// (0x00017145) popup_call_audio_in_window_t1_ParamLimits

0x9664,	// (0x00017145) popup_call_audio_in_window_t1

0x967f,	// (0x00017160) popup_call_audio_in_window_t2_ParamLimits

0x967f,	// (0x00017160) popup_call_audio_in_window_t2

0x969a,	// (0x0001717b) popup_call_audio_in_window_t3_ParamLimits

0x969a,	// (0x0001717b) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0001cba0) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0001cba0) popup_call_audio_in_window_t

0x962a,	// (0x0001710b) bg_popup_call_pane_cp01_ParamLimits

0x962a,	// (0x0001710b) bg_popup_call_pane_cp01

0x9638,	// (0x00017119) call_thumbnail_pane_cp02

0x96ad,	// (0x0001718e) call_type_pane_cp022

0x96b5,	// (0x00017196) popup_call_audio_out_window_g1_ParamLimits

0x96b5,	// (0x00017196) popup_call_audio_out_window_g1

0x96c7,	// (0x000171a8) popup_call_audio_out_window_g2_ParamLimits

0x96c7,	// (0x000171a8) popup_call_audio_out_window_g2

0x96d3,	// (0x000171b4) popup_call_audio_out_window_g3_ParamLimits

0x96d3,	// (0x000171b4) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0001cba7) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0001cba7) popup_call_audio_out_window_g

0x96e5,	// (0x000171c6) popup_call_audio_out_window_t1_ParamLimits

0x96e5,	// (0x000171c6) popup_call_audio_out_window_t1

0x96fd,	// (0x000171de) popup_call_audio_out_window_t2_ParamLimits

0x96fd,	// (0x000171de) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0001cbae) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0001cbae) popup_call_audio_out_window_t

0x9712,	// (0x000171f3) bg_popup_call_pane_ParamLimits

0x9712,	// (0x000171f3) bg_popup_call_pane

0x0dc0,	// (0x0000e8a1) call_thumbnail_pane_cp_ParamLimits

0x0dc0,	// (0x0000e8a1) call_thumbnail_pane_cp

0x9796,	// (0x00017277) call_type_pane_cp01_ParamLimits

0x9796,	// (0x00017277) call_type_pane_cp01

0x97da,	// (0x000172bb) popup_call_audio_first_window_g1_ParamLimits

0x97da,	// (0x000172bb) popup_call_audio_first_window_g1

0x9826,	// (0x00017307) popup_call_audio_first_window_g2_ParamLimits

0x9826,	// (0x00017307) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0001cbb3) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0001cbb3) popup_call_audio_first_window_g

0x986a,	// (0x0001734b) popup_call_audio_first_window_t1_ParamLimits

0x986a,	// (0x0001734b) popup_call_audio_first_window_t1

0x9916,	// (0x000173f7) popup_call_audio_first_window_t4_ParamLimits

0x9916,	// (0x000173f7) popup_call_audio_first_window_t4

0x99a2,	// (0x00017483) popup_call_audio_first_window_t5_ParamLimits

0x99a2,	// (0x00017483) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0001cbb8) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0001cbb8) popup_call_audio_first_window_t

0x99d1,	// (0x000174b2) bg_popup_call_pane_cp02

0x99db,	// (0x000174bc) call_type_pane_cp023

0x99e3,	// (0x000174c4) popup_call_audio_wait_window_g1

0x99eb,	// (0x000174cc) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0001cbbf) popup_call_audio_wait_window_g

0x99f3,	// (0x000174d4) popup_call_audio_wait_window_t3

0x9a01,	// (0x000174e2) bg_popup_call_pane_cp03_ParamLimits

0x9a01,	// (0x000174e2) bg_popup_call_pane_cp03

0x9a61,	// (0x00017542) call_thumbnail_pane_cp011_ParamLimits

0x9a61,	// (0x00017542) call_thumbnail_pane_cp011

0x9a6d,	// (0x0001754e) call_type_pane_cp034_ParamLimits

0x9a6d,	// (0x0001754e) call_type_pane_cp034

0x9aa9,	// (0x0001758a) popup_call_audio_second_window_g1_ParamLimits

0x9aa9,	// (0x0001758a) popup_call_audio_second_window_g1

0x9ae5,	// (0x000175c6) popup_call_audio_second_window_g2_ParamLimits

0x9ae5,	// (0x000175c6) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0001cbc4) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0001cbc4) popup_call_audio_second_window_g

0x9b21,	// (0x00017602) popup_call_audio_second_window_t1_ParamLimits

0x9b21,	// (0x00017602) popup_call_audio_second_window_t1

0x9ba2,	// (0x00017683) popup_call_audio_second_window_t2_ParamLimits

0x9ba2,	// (0x00017683) popup_call_audio_second_window_t2

0x9bd8,	// (0x000176b9) popup_call_audio_second_window_t3_ParamLimits

0x9bd8,	// (0x000176b9) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0001cbc9) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0001cbc9) popup_call_audio_second_window_t

0x99d1,	// (0x000174b2) bg_popup_call_pane_cp04

0x9c0e,	// (0x000176ef) list_conf_pane

0x9c16,	// (0x000176f7) popup_call_audio_conf_window_t1

0x9c24,	// (0x00017705) call_thumbnail_pane_g1

0x9c2c,	// (0x0001770d) bg_pinb_pane_ParamLimits

0x9c2c,	// (0x0001770d) bg_pinb_pane

0x9c3a,	// (0x0001771b) find_pinb_pane

0x9c43,	// (0x00017724) listscroll_pinb_pane_ParamLimits

0x9c43,	// (0x00017724) listscroll_pinb_pane

0x9c52,	// (0x00017733) pinb_bg_pane_g1

0x0de4,	// (0x0000e8c5) pinb_bg_pane_g2

0x0dee,	// (0x0000e8cf) pinb_bg_pane_g3

0x0df8,	// (0x0000e8d9) pinb_bg_pane_g4

0x0e02,	// (0x0000e8e3) pinb_bg_pane_g5

0x0e0c,	// (0x0000e8ed) pinb_bg_pane_g6

0x0e15,	// (0x0000e8f6) pinb_bg_pane_g7

0x0e1e,	// (0x0000e8ff) pinb_bg_pane_g8

0x0e29,	// (0x0000e90a) pinb_bg_pane_g9

0x0e33,	// (0x0000e914) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0001cbd0) pinb_bg_pane_g

0x0e4e,	// (0x0000e92f) grid_pinb_pane

0x0e57,	// (0x0000e938) list_pinb_pane

0x0e60,	// (0x0000e941) scroll_pane_cp01_ParamLimits

0x0e60,	// (0x0000e941) scroll_pane_cp01

0x9c5c,	// (0x0001773d) find_pinb_pane_g1_ParamLimits

0x9c5c,	// (0x0001773d) find_pinb_pane_g1

0x9c74,	// (0x00017755) find_pinb_pane_t1

0x9c86,	// (0x00017767) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0001cbea) find_pinb_pane_t

0x9c9b,	// (0x0001777c) input_focus_pane_cp01_ParamLimits

0x9c9b,	// (0x0001777c) input_focus_pane_cp01

0x0e72,	// (0x0000e953) cell_pinb_pane_ParamLimits

0x0e72,	// (0x0000e953) cell_pinb_pane

0x0e8d,	// (0x0000e96e) cell_pinb_pane_g1_ParamLimits

0x0e8d,	// (0x0000e96e) cell_pinb_pane_g1

0x0e9d,	// (0x0000e97e) cell_pinb_pane_g2_ParamLimits

0x0e9d,	// (0x0000e97e) cell_pinb_pane_g2

0x9ca7,	// (0x00017788) cell_pinb_pane_g3_ParamLimits

0x9ca7,	// (0x00017788) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0001cbef) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0001cbef) cell_pinb_pane_g

0x99d1,	// (0x000174b2) grid_highlight_pane_cp01

0x0ea9,	// (0x0000e98a) list_pinb_item_pane_ParamLimits

0x0ea9,	// (0x0000e98a) list_pinb_item_pane

0x99d1,	// (0x000174b2) list_highlight_pane_cp02

0x0ebb,	// (0x0000e99c) list_pinb_item_pane_g1_ParamLimits

0x0ebb,	// (0x0000e99c) list_pinb_item_pane_g1

0x0ec8,	// (0x0000e9a9) list_pinb_item_pane_g2_ParamLimits

0x0ec8,	// (0x0000e9a9) list_pinb_item_pane_g2

0x0ed4,	// (0x0000e9b5) list_pinb_item_pane_g3_ParamLimits

0x0ed4,	// (0x0000e9b5) list_pinb_item_pane_g3

0x0ee5,	// (0x0000e9c6) list_pinb_item_pane_g4_ParamLimits

0x0ee5,	// (0x0000e9c6) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0001cbf6) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0001cbf6) list_pinb_item_pane_g

0x0ef1,	// (0x0000e9d2) list_pinb_item_pane_t1_ParamLimits

0x0ef1,	// (0x0000e9d2) list_pinb_item_pane_t1

0x0f26,	// (0x0000ea07) calc_display_pane

0x0f42,	// (0x0000ea23) calc_paper_pane

0x0f63,	// (0x0000ea44) grid_calc_pane

0x99d1,	// (0x000174b2) bg_list_pane_cp01

0x0f7f,	// (0x0000ea60) clock_g1

0x0f87,	// (0x0000ea68) clock_g2

0x0001,

0xf11e,	// (0x0001cbff) clock_g

0x0f8f,	// (0x0000ea70) clock_t1_ParamLimits

0x0f8f,	// (0x0000ea70) clock_t1

0x0fa4,	// (0x0000ea85) clock_t2_ParamLimits

0x0fa4,	// (0x0000ea85) clock_t2

0x0fb6,	// (0x0000ea97) clock_t3_ParamLimits

0x0fb6,	// (0x0000ea97) clock_t3

0x0fc8,	// (0x0000eaa9) clock_t4_ParamLimits

0x0fc8,	// (0x0000eaa9) clock_t4

0x0fda,	// (0x0000eabb) clock_t5_ParamLimits

0x0fda,	// (0x0000eabb) clock_t5

0x0fef,	// (0x0000ead0) clock_t6_ParamLimits

0x0fef,	// (0x0000ead0) clock_t6

0x1001,	// (0x0000eae2) clock_t7_ParamLimits

0x1001,	// (0x0000eae2) clock_t7

0x1013,	// (0x0000eaf4) clock_t8_ParamLimits

0x1013,	// (0x0000eaf4) clock_t8

0x1025,	// (0x0000eb06) clock_t9_ParamLimits

0x1025,	// (0x0000eb06) clock_t9

0x0008,

0xf123,	// (0x0001cc04) clock_t_ParamLimits

0xf123,	// (0x0001cc04) clock_t

0x9cbb,	// (0x0001779c) popup_clock_analogue_window_cp02

0x9cbb,	// (0x0001779c) popup_clock_digital_window_cp01

0x9cc3,	// (0x000177a4) listscroll_help_pane

0x99d1,	// (0x000174b2) phob_pre_status_pane

0x9ccd,	// (0x000177ae) grid_qdial_pane

0x9c2c,	// (0x0001770d) listscroll_mce_pane

0x9c2c,	// (0x0001770d) bg_notes_pane

0x9cd7,	// (0x000177b8) list_notes_pane

0x1037,	// (0x0000eb18) scroll_pane_cp06

0x9ce5,	// (0x000177c6) bg_calc_paper_pane

0x9cfd,	// (0x000177de) list_calc_pane

0x9d17,	// (0x000177f8) bg_calc_display_pane

0x9d23,	// (0x00017804) calc_display_pane_t1

0x9d38,	// (0x00017819) calc_display_pane_t2

0x9d4d,	// (0x0001782e) calc_display_pane_t3

0x0002,

0xf136,	// (0x0001cc17) calc_display_pane_t

0x1049,	// (0x0000eb2a) cell_calc_pane_ParamLimits

0x1049,	// (0x0000eb2a) cell_calc_pane

0x9d5f,	// (0x00017840) bg_calc_paper_pane_g1

0x9d6b,	// (0x0001784c) bg_calc_paper_pane_g2

0x9d77,	// (0x00017858) bg_calc_paper_pane_g3

0x9d83,	// (0x00017864) bg_calc_paper_pane_g4

0x9d8f,	// (0x00017870) bg_calc_paper_pane_g5

0x107c,	// (0x0000eb5d) bg_calc_paper_pane_g6

0x108b,	// (0x0000eb6c) bg_calc_paper_pane_g7

0x109a,	// (0x0000eb7b) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0001cc1e) bg_calc_paper_pane_g

0x10a9,	// (0x0000eb8a) calc_bg_paper_pane_g9

0x10b8,	// (0x0000eb99) list_calc_item_pane_ParamLimits

0x10b8,	// (0x0000eb99) list_calc_item_pane

0x9d9b,	// (0x0001787c) list_calc_item_pane_g1

0x9da8,	// (0x00017889) list_calc_item_pane_t1_ParamLimits

0x9da8,	// (0x00017889) list_calc_item_pane_t1

0x10cc,	// (0x0000ebad) list_calc_item_pane_t2_ParamLimits

0x10cc,	// (0x0000ebad) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0001cc2f) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0001cc2f) list_calc_item_pane_t

0x9dba,	// (0x0001789b) cell_calc_pane_g1

0x9dc4,	// (0x000178a5) grid_highlight_pane_cp02

0x9de6,	// (0x000178c7) bg_calc_display_pane_g1

0x9def,	// (0x000178d0) bg_calc_display_pane_g2

0x9df9,	// (0x000178da) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0001cc39) bg_calc_display_pane_g

0x10fa,	// (0x0000ebdb) cell_qdial_pane_ParamLimits

0x10fa,	// (0x0000ebdb) cell_qdial_pane

0x110c,	// (0x0000ebed) cell_qdial_pane_g1_ParamLimits

0x110c,	// (0x0000ebed) cell_qdial_pane_g1

0x1122,	// (0x0000ec03) cell_qdial_pane_g2_ParamLimits

0x1122,	// (0x0000ec03) cell_qdial_pane_g2

0x9e02,	// (0x000178e3) cell_qdial_pane_g3_ParamLimits

0x9e02,	// (0x000178e3) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0001cc40) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0001cc40) cell_qdial_pane_g

0x1149,	// (0x0000ec2a) cell_qdial_pane_t1_ParamLimits

0x1149,	// (0x0000ec2a) cell_qdial_pane_t1

0x1161,	// (0x0000ec42) cell_qdial_pane_t2_ParamLimits

0x1161,	// (0x0000ec42) cell_qdial_pane_t2

0x1174,	// (0x0000ec55) cell_qdial_pane_t3_ParamLimits

0x1174,	// (0x0000ec55) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0001cc49) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0001cc49) cell_qdial_pane_t

0x99d1,	// (0x000174b2) grid_highlight_pane_cp04

0x9e0e,	// (0x000178ef) thumbnail_qdial_pane_ParamLimits

0x9e0e,	// (0x000178ef) thumbnail_qdial_pane

0x9e6a,	// (0x0001794b) list_help_pane

0x9e74,	// (0x00017955) scroll_pane_cp02

0x1187,	// (0x0000ec68) help_list_pane_t1_ParamLimits

0x1187,	// (0x0000ec68) help_list_pane_t1

0x9e7d,	// (0x0001795e) bg_notes_pane_g2

0x9e85,	// (0x00017966) bg_notes_pane_g3

0x9e8d,	// (0x0001796e) notes_bg_pane_g1

0x9e95,	// (0x00017976) notes_bg_pane_g4

0x9e9d,	// (0x0001797e) notes_bg_pane_g5

0x9ea5,	// (0x00017986) notes_bg_pane_g6

0x9ead,	// (0x0001798e) notes_bg_pane_g7

0x9eb5,	// (0x00017996) notes_bg_pane_g8

0x9ebd,	// (0x0001799e) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0001cc67) notes_bg_pane_g

0x11a3,	// (0x0000ec84) list_notes_text_pane_ParamLimits

0x11a3,	// (0x0000ec84) list_notes_text_pane

0x9ec5,	// (0x000179a6) list_notes_text_pane_g1

0x11c6,	// (0x0000eca7) list_notes_text_pane_t1

0x11d4,	// (0x0000ecb5) listscroll_cale_week_pane

0x11fe,	// (0x0000ecdf) bg_cale_heading_pane

0x9ee8,	// (0x000179c9) bg_cale_pane_cp01

0x1216,	// (0x0000ecf7) cale_week_corner_pane

0x1235,	// (0x0000ed16) cale_week_day_heading_pane

0x1252,	// (0x0000ed33) cale_week_scroll_pane_g1

0x1265,	// (0x0000ed46) cale_week_scroll_pane_g2

0x127d,	// (0x0000ed5e) cale_week_scroll_pane_g3

0x1295,	// (0x0000ed76) cale_week_scroll_pane_g4

0x12ad,	// (0x0000ed8e) cale_week_scroll_pane_g5

0x12c5,	// (0x0000eda6) cale_week_scroll_pane_g6

0x12dd,	// (0x0000edbe) cale_week_scroll_pane_g7

0x12f5,	// (0x0000edd6) cale_week_scroll_pane_g8

0x1311,	// (0x0000edf2) cale_week_scroll_pane_g9

0x1329,	// (0x0000ee0a) cale_week_scroll_pane_g10

0x1341,	// (0x0000ee22) cale_week_scroll_pane_g11

0x1359,	// (0x0000ee3a) cale_week_scroll_pane_g12

0x1371,	// (0x0000ee52) cale_week_scroll_pane_g13

0x1389,	// (0x0000ee6a) cale_week_scroll_pane_g14

0x13a1,	// (0x0000ee82) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0001cc76) cale_week_scroll_pane_g

0x13d5,	// (0x0000eeb6) cale_week_time_pane

0x13f1,	// (0x0000eed2) grid_cale_week_pane

0x9f17,	// (0x000179f8) scroll_pane_cp08

0x140f,	// (0x0000eef0) cell_cale_week_pane_ParamLimits

0x140f,	// (0x0000eef0) cell_cale_week_pane

0x1485,	// (0x0000ef66) cale_week_day_heading_pane_t1

0x14af,	// (0x0000ef90) cale_week_day_heading_pane_t2

0x14de,	// (0x0000efbf) cale_week_day_heading_pane_t3

0x150d,	// (0x0000efee) cale_week_day_heading_pane_t4

0x153c,	// (0x0000f01d) cale_week_day_heading_pane_t5

0x156b,	// (0x0000f04c) cale_week_day_heading_pane_t6

0x159a,	// (0x0000f07b) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0001cc97) cale_week_day_heading_pane_t

0x9f34,	// (0x00017a15) bg_cale_side_pane

0x15c4,	// (0x0000f0a5) cale_week_time_pane_t1

0x15fe,	// (0x0000f0df) cale_week_time_pane_t2

0x1638,	// (0x0000f119) cale_week_time_pane_t3

0x1672,	// (0x0000f153) cale_week_time_pane_t4

0x16ac,	// (0x0000f18d) cale_week_time_pane_t5

0x16e6,	// (0x0000f1c7) cale_week_time_pane_t6

0x1720,	// (0x0000f201) cale_week_time_pane_t7

0x175a,	// (0x0000f23b) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0001cca6) cale_week_time_pane_t

0x1794,	// (0x0000f275) cell_cale_week_pane_g2

0x17b3,	// (0x0000f294) cell_cale_week_pane_g3_ParamLimits

0x17b3,	// (0x0000f294) cell_cale_week_pane_g3

0x9f42,	// (0x00017a23) grid_highlight_pane_cp07

0x9f4a,	// (0x00017a2b) listscroll_gms_pane

0x9f54,	// (0x00017a35) grid_gms_pane

0x9f5d,	// (0x00017a3e) listscroll_gms_pane_g1

0x9f65,	// (0x00017a46) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0001ccb7) listscroll_gms_pane_g

0x17cb,	// (0x0000f2ac) scroll_pane_cp010

0x17d6,	// (0x0000f2b7) cell_gms_pane_ParamLimits

0x17d6,	// (0x0000f2b7) cell_gms_pane

0x17e6,	// (0x0000f2c7) cell_gms_pane_g1

0x9f6d,	// (0x00017a4e) cell_gms_pane_g2

0x9ec5,	// (0x000179a6) cell_gms_pane_g3

0x9f75,	// (0x00017a56) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0001ccbc) cell_gms_pane_g

0x9f7e,	// (0x00017a5f) grid_highlight_pane_cp09

0x3992,	// (0x00011473) phob_pre_status_pane_g1

0x399a,	// (0x0001147b) phob_pre_status_pane_g2

0x39a2,	// (0x00011483) phob_pre_status_pane_g3

0x39aa,	// (0x0001148b) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0001d0ba) phob_pre_status_pane_g

0x39ba,	// (0x0001149b) phob_pre_status_pane_t1

0x39c8,	// (0x000114a9) phob_pre_status_pane_t2

0x39d6,	// (0x000114b7) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0001d0c5) phob_pre_status_pane_t

0x9f86,	// (0x00017a67) bg_list_pane_cp05

0x17f6,	// (0x0000f2d7) grid_vorec_pane

0x9f8e,	// (0x00017a6f) vorec_t1

0x9f9c,	// (0x00017a7d) vorec_t2

0x9faa,	// (0x00017a8b) vorec_t3

0x17fe,	// (0x0000f2df) vorec_t4

0x951c,	// (0x00016ffd) vorec_t5

0x952a,	// (0x0001700b) vorec_t6

0x0004,

0xf1e4,	// (0x0001ccc5) vorec_t

0x9538,	// (0x00017019) wait_bar_pane_cp01

0x180c,	// (0x0000f2ed) cell_vorec_pane_ParamLimits

0x180c,	// (0x0000f2ed) cell_vorec_pane

0x9fc6,	// (0x00017aa7) cell_vorec_pane_g1

0x99d1,	// (0x000174b2) grid_highlight_pane_cp05

0x1831,	// (0x0000f312) cams_zoom_pane

0x1840,	// (0x0000f321) image_vga_pane

0x1858,	// (0x0000f339) main_camera_pane_g1

0x1868,	// (0x0000f349) main_camera_pane_g2

0x1878,	// (0x0000f359) main_camera_pane_g3

0x1888,	// (0x0000f369) main_camera_pane_g4

0x1898,	// (0x0000f379) main_camera_pane_g5

0x18a8,	// (0x0000f389) main_camera_pane_g6

0x18b8,	// (0x0000f399) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0001ccd0) main_camera_pane_g

0x18c8,	// (0x0000f3a9) main_camera_pane_t1

0x18de,	// (0x0000f3bf) main_camera_pane_t2

0x0001,

0xf200,	// (0x0001cce1) main_camera_pane_t

0x1910,	// (0x0000f3f1) cams_zoom_pane_cp_ParamLimits

0x1910,	// (0x0000f3f1) cams_zoom_pane_cp

0x1938,	// (0x0000f419) image_cif_pane_ParamLimits

0x1938,	// (0x0000f419) image_cif_pane

0x1969,	// (0x0000f44a) image_subqcif_pane

0x1971,	// (0x0000f452) main_video_pane_g1_ParamLimits

0x1971,	// (0x0000f452) main_video_pane_g1

0x1995,	// (0x0000f476) main_video_pane_g2_ParamLimits

0x1995,	// (0x0000f476) main_video_pane_g2

0x19c9,	// (0x0000f4aa) main_video_pane_g3_ParamLimits

0x19c9,	// (0x0000f4aa) main_video_pane_g3

0x19f7,	// (0x0000f4d8) main_video_pane_g4_ParamLimits

0x19f7,	// (0x0000f4d8) main_video_pane_g4

0x1a25,	// (0x0000f506) main_video_pane_g5_ParamLimits

0x1a25,	// (0x0000f506) main_video_pane_g5

0x9fdc,	// (0x00017abd) main_video_pane_g6_ParamLimits

0x9fdc,	// (0x00017abd) main_video_pane_g6

0x0006,

0xf205,	// (0x0001cce6) main_video_pane_g_ParamLimits

0xf205,	// (0x0001cce6) main_video_pane_g

0x1a4c,	// (0x0000f52d) main_video_pane_t1_ParamLimits

0x1a4c,	// (0x0000f52d) main_video_pane_t1

0x9ff6,	// (0x00017ad7) cams_zoom_pane_g1

0x9fff,	// (0x00017ae0) cams_zoom_pane_g2

0xa008,	// (0x00017ae9) cams_zoom_pane_g3

0xa011,	// (0x00017af2) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0001ccf5) cams_zoom_pane_g

0x1aa9,	// (0x0000f58a) grid_cams_pane

0x1abe,	// (0x0000f59f) linegrid_cams_pane

0x1acf,	// (0x0000f5b0) cell_cams_pane_ParamLimits

0x1acf,	// (0x0000f5b0) cell_cams_pane

0xa01a,	// (0x00017afb) cams_burst_image_pane

0xa022,	// (0x00017b03) cell_cams_pane_g1

0x99d1,	// (0x000174b2) grid_highlight_pane_cp03

0x9dba,	// (0x0001789b) mp_bg_pane_g1

0x99d1,	// (0x000174b2) bg_list_pane_cp03

0xbe6b,	// (0x0001994c) bg_mp_pane

0xbe73,	// (0x00019954) grid_mp_pane

0xbe7b,	// (0x0001995c) media_player_g1

0xbe83,	// (0x00019964) media_player_t1

0xbe91,	// (0x00019972) media_player_t2

0xbe9f,	// (0x00019980) media_player_t3

0xbead,	// (0x0001998e) media_player_t4

0xbebb,	// (0x0001999c) media_player_t5

0xbec9,	// (0x000199aa) media_player_t6

0xbed7,	// (0x000199b8) media_player_t7

0x0006,

0xf5c3,	// (0x0001d0a4) media_player_t

0xbee5,	// (0x000199c6) wait_bar_pane_cp02

0xf5a8,	// (0x0001d089) main_usb_pane_t

0x3989,	// (0x0001146a) cell_mp_pane

0x9dba,	// (0x0001789b) cell_mp_pane_g1

0x99d1,	// (0x000174b2) grid_highlight_pane_cp06

0xa02a,	// (0x00017b0b) grid_skin_colour_pane

0xa032,	// (0x00017b13) list_highlight_pane_cp03

0x1bdd,	// (0x0000f6be) skin_g1

0xa03a,	// (0x00017b1b) skin_t1

0xa049,	// (0x00017b2a) skin_t2

0x0001,

0xf249,	// (0x0001cd2a) skin_t

0x1be5,	// (0x0000f6c6) cell_skin_colour_pane_ParamLimits

0x1be5,	// (0x0000f6c6) cell_skin_colour_pane

0xa057,	// (0x00017b38) cell_skin_colour_pane_g1

0x1c4e,	// (0x0000f72f) call_video_g1_ParamLimits

0x1c4e,	// (0x0000f72f) call_video_g1

0x1c64,	// (0x0000f745) call_video_g2_ParamLimits

0x1c64,	// (0x0000f745) call_video_g2

0x0001,

0xf24e,	// (0x0001cd2f) call_video_g_ParamLimits

0xf24e,	// (0x0001cd2f) call_video_g

0x1cac,	// (0x0000f78d) call_video_uplink_pane_cp1_ParamLimits

0x1cac,	// (0x0000f78d) call_video_uplink_pane_cp1

0xa069,	// (0x00017b4a) call_video_uplink_pane_cp2

0x1d41,	// (0x0000f822) video_down_crop_pane_ParamLimits

0x1d41,	// (0x0000f822) video_down_crop_pane

0x1e04,	// (0x0000f8e5) video_down_pane_ParamLimits

0x1e04,	// (0x0000f8e5) video_down_pane

0xa071,	// (0x00017b52) video_down_subqcif_pane_ParamLimits

0xa071,	// (0x00017b52) video_down_subqcif_pane

0xa089,	// (0x00017b6a) video_down_subqcif_pane_cp_ParamLimits

0xa089,	// (0x00017b6a) video_down_subqcif_pane_cp

0xa0ad,	// (0x00017b8e) im_reading_pane_ParamLimits

0xa0ad,	// (0x00017b8e) im_reading_pane

0x1ec1,	// (0x0000f9a2) im_writing_pane_ParamLimits

0x1ec1,	// (0x0000f9a2) im_writing_pane

0x1ed7,	// (0x0000f9b8) im_reading_pane_t1

0xa0c7,	// (0x00017ba8) list_im_pane

0xa0d8,	// (0x00017bb9) scroll_pane_cp07

0x1f0d,	// (0x0000f9ee) im_writing_pane_t1_ParamLimits

0x1f0d,	// (0x0000f9ee) im_writing_pane_t1

0xa0f1,	// (0x00017bd2) im_writing_pane_t2_ParamLimits

0xa0f1,	// (0x00017bd2) im_writing_pane_t2

0x0001,

0xf258,	// (0x0001cd39) im_writing_pane_t_ParamLimits

0xf258,	// (0x0001cd39) im_writing_pane_t

0x99d1,	// (0x000174b2) input_focus_pane_cp04

0x99d1,	// (0x000174b2) input_focus_pane_cp05

0x1f22,	// (0x0000fa03) list_im_single_pane_ParamLimits

0x1f22,	// (0x0000fa03) list_im_single_pane

0xa10e,	// (0x00017bef) list_single_im_pane_t1

0x394f,	// (0x00011430) blid_accuracy_pane

0x3957,	// (0x00011438) blid_compass_pane

0x395f,	// (0x00011440) main_location_t1

0x396d,	// (0x0001144e) main_location_t2

0x397b,	// (0x0001145c) main_location_t3

0x0002,

0xf5d2,	// (0x0001d0b3) main_location_t

0x99d1,	// (0x000174b2) aid_levels_location

0x9dba,	// (0x0001789b) blid_accuracy_pane_g1

0x9dba,	// (0x0001789b) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0001cd9b) blid_accuracy_pane_g

0xa148,	// (0x00017c29) wml_content_pane

0xa186,	// (0x00017c67) wml_button_pane_ParamLimits

0xa186,	// (0x00017c67) wml_button_pane

0x1f38,	// (0x0000fa19) wml_list_single_large_pane_ParamLimits

0x1f38,	// (0x0000fa19) wml_list_single_large_pane

0x1f4c,	// (0x0000fa2d) wml_list_single_medium_pane_ParamLimits

0x1f4c,	// (0x0000fa2d) wml_list_single_medium_pane

0x1f61,	// (0x0000fa42) wml_list_single_small_pane_ParamLimits

0x1f61,	// (0x0000fa42) wml_list_single_small_pane

0xa19a,	// (0x00017c7b) wml_selection_box_pane_ParamLimits

0xa19a,	// (0x00017c7b) wml_selection_box_pane

0xa1ad,	// (0x00017c8e) wml_list_single_pane_t1

0xa1bc,	// (0x00017c9d) wml_list_single_medium_pane_t1

0xa1cb,	// (0x00017cac) wml_list_single_large_pane_t1

0xa1da,	// (0x00017cbb) input_focus_pane_cp02_ParamLimits

0xa1da,	// (0x00017cbb) input_focus_pane_cp02

0xa1ed,	// (0x00017cce) wml_selection_box_pane_g1

0xa1f6,	// (0x00017cd7) wml_selection_box_pane_t1_ParamLimits

0xa1f6,	// (0x00017cd7) wml_selection_box_pane_t1

0x9c2c,	// (0x0001770d) bg_wml_button_pane_ParamLimits

0x9c2c,	// (0x0001770d) bg_wml_button_pane

0xa20e,	// (0x00017cef) wml_button_pane_g1

0xa216,	// (0x00017cf7) wml_button_pane_t1

0xa20e,	// (0x00017cef) wml_button_bg_pane_g1

0xa226,	// (0x00017d07) wml_button_bg_pane_g2

0xa22e,	// (0x00017d0f) wml_button_bg_pane_g3

0xa236,	// (0x00017d17) wml_button_bg_pane_g4

0xa23e,	// (0x00017d1f) wml_button_bg_pane_g5

0xa246,	// (0x00017d27) wml_button_bg_pane_g6

0xa24e,	// (0x00017d2f) wml_button_bg_pane_g7

0xa256,	// (0x00017d37) wml_button_bg_pane_g8

0xa25e,	// (0x00017d3f) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0001cd3e) wml_button_bg_pane_g

0x1f78,	// (0x0000fa59) bg_list_pane_cp02

0xa266,	// (0x00017d47) mce_header_pane_ParamLimits

0xa266,	// (0x00017d47) mce_header_pane

0xa27a,	// (0x00017d5b) mce_icon_pane

0xa27a,	// (0x00017d5b) mce_image_pane

0xa283,	// (0x00017d64) mce_text_pane_ParamLimits

0xa283,	// (0x00017d64) mce_text_pane

0x1f81,	// (0x0000fa62) scroll_pane_cp03

0x1f81,	// (0x0000fa62) scroll_pane_cp04

0xa297,	// (0x00017d78) scroll_pane_cp05_ParamLimits

0xa297,	// (0x00017d78) scroll_pane_cp05

0x1f8b,	// (0x0000fa6c) mce_header_field_pane_ParamLimits

0x1f8b,	// (0x0000fa6c) mce_header_field_pane

0x1fa2,	// (0x0000fa83) mce_header_field_pane_2_ParamLimits

0x1fa2,	// (0x0000fa83) mce_header_field_pane_2

0x1fb8,	// (0x0000fa99) mce_header_field_pane_3

0x1fc0,	// (0x0000faa1) list_single_mce_message_pane_ParamLimits

0x1fc0,	// (0x0000faa1) list_single_mce_message_pane

0x1fd5,	// (0x0000fab6) list_single_mce_smart_pane_ParamLimits

0x1fd5,	// (0x0000fab6) list_single_mce_smart_pane

0xa2a3,	// (0x00017d84) input_focus_pane_cp03

0xa2ac,	// (0x00017d8d) list_header_data_pane

0x1ff5,	// (0x0000fad6) mce_header_field_pane_t1

0x2003,	// (0x0000fae4) list_single_mce_header_pane_ParamLimits

0x2003,	// (0x0000fae4) list_single_mce_header_pane

0xa2b4,	// (0x00017d95) list_single_mce_header_pane_t1

0xa2c3,	// (0x00017da4) list_single_mce_message_pane_g1

0xa2cc,	// (0x00017dad) list_single_mce_message_pane_t1

0x203d,	// (0x0000fb1e) bg_cale_heading_pane_cp01_ParamLimits

0x203d,	// (0x0000fb1e) bg_cale_heading_pane_cp01

0xa2db,	// (0x00017dbc) bg_cale_pane_cp02_ParamLimits

0xa2db,	// (0x00017dbc) bg_cale_pane_cp02

0x206c,	// (0x0000fb4d) cale_month_corner_pane

0x208b,	// (0x0000fb6c) cale_month_day_heading_pane_ParamLimits

0x208b,	// (0x0000fb6c) cale_month_day_heading_pane

0x20c2,	// (0x0000fba3) cale_month_pane_g1_ParamLimits

0x20c2,	// (0x0000fba3) cale_month_pane_g1

0x20e6,	// (0x0000fbc7) cale_month_pane_g2_ParamLimits

0x20e6,	// (0x0000fbc7) cale_month_pane_g2

0x210e,	// (0x0000fbef) cale_month_pane_g3_ParamLimits

0x210e,	// (0x0000fbef) cale_month_pane_g3

0x214a,	// (0x0000fc2b) cale_month_pane_g4_ParamLimits

0x214a,	// (0x0000fc2b) cale_month_pane_g4

0x2186,	// (0x0000fc67) cale_month_pane_g5_ParamLimits

0x2186,	// (0x0000fc67) cale_month_pane_g5

0x21c2,	// (0x0000fca3) cale_month_pane_g6_ParamLimits

0x21c2,	// (0x0000fca3) cale_month_pane_g6

0x21fe,	// (0x0000fcdf) cale_month_pane_g7_ParamLimits

0x21fe,	// (0x0000fcdf) cale_month_pane_g7

0x223a,	// (0x0000fd1b) cale_month_pane_g8_ParamLimits

0x223a,	// (0x0000fd1b) cale_month_pane_g8

0x227e,	// (0x0000fd5f) cale_month_pane_g9_ParamLimits

0x227e,	// (0x0000fd5f) cale_month_pane_g9

0x22c0,	// (0x0000fda1) cale_month_pane_g10_ParamLimits

0x22c0,	// (0x0000fda1) cale_month_pane_g10

0x2302,	// (0x0000fde3) cale_month_pane_g11_ParamLimits

0x2302,	// (0x0000fde3) cale_month_pane_g11

0x2344,	// (0x0000fe25) cale_month_pane_g12_ParamLimits

0x2344,	// (0x0000fe25) cale_month_pane_g12

0x2386,	// (0x0000fe67) cale_month_pane_g13_ParamLimits

0x2386,	// (0x0000fe67) cale_month_pane_g13

0x000c,

0xf270,	// (0x0001cd51) cale_month_pane_g_ParamLimits

0xf270,	// (0x0001cd51) cale_month_pane_g

0x23c8,	// (0x0000fea9) cale_month_week_pane

0x23e4,	// (0x0000fec5) grid_cale_month_pane_ParamLimits

0x23e4,	// (0x0000fec5) grid_cale_month_pane

0x2412,	// (0x0000fef3) cale_month_day_heading_pane_t1

0x2498,	// (0x0000ff79) cale_month_day_heading_pane_t2

0x2529,	// (0x0001000a) cale_month_day_heading_pane_t3

0x25ba,	// (0x0001009b) cale_month_day_heading_pane_t4

0x264b,	// (0x0001012c) cale_month_day_heading_pane_t5

0x26dc,	// (0x000101bd) cale_month_day_heading_pane_t6

0x276d,	// (0x0001024e) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0001cd6c) cale_month_day_heading_pane_t

0x9f34,	// (0x00017a15) bg_cale_side_pane_cp01

0x2802,	// (0x000102e3) cale_month_week_pane_t1

0x281b,	// (0x000102fc) cale_month_week_pane_t2

0x2834,	// (0x00010315) cale_month_week_pane_t3

0x284d,	// (0x0001032e) cale_month_week_pane_t4

0x2866,	// (0x00010347) cale_month_week_pane_t5

0x287f,	// (0x00010360) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0001cd7b) cale_month_week_pane_t

0x2898,	// (0x00010379) cell_cale_month_pane_ParamLimits

0x2898,	// (0x00010379) cell_cale_month_pane

0xa31a,	// (0x00017dfb) cell_cale_month_pane_g1

0x29b4,	// (0x00010495) cell_cale_month_pane_t1_ParamLimits

0x29b4,	// (0x00010495) cell_cale_month_pane_t1

0x9f42,	// (0x00017a23) grid_highlight_pane_cp08

0x9dba,	// (0x0001789b) main_smil_g1

0x29d4,	// (0x000104b5) smil_status_pane

0xa326,	// (0x00017e07) smil_text_pane

0xbd4b,	// (0x0001982c) bg_popup_call3_rect_pane_g8

0xbd53,	// (0x00019834) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0001d034) bg_popup_call3_rect_pane_g

0xc034,	// (0x00019b15) smil_status_volume_pane_g1

0x29e5,	// (0x000104c6) smil_status_pane_t1

0xc067,	// (0x00019b48) volume_smil_pane

0xa330,	// (0x00017e11) list_smil_text_pane

0x29fc,	// (0x000104dd) scroll_pane_cp011

0x2a07,	// (0x000104e8) smil_text_list_pane_t1_ParamLimits

0x2a07,	// (0x000104e8) smil_text_list_pane_t1

0xa33a,	// (0x00017e1b) aid_volume_smil_ParamLimits

0xa33a,	// (0x00017e1b) aid_volume_smil

0x9dba,	// (0x0001789b) smil_volume_pane_g1

0x9dba,	// (0x0001789b) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0001cd9b) smil_volume_pane_g

0x11d4,	// (0x0000ecb5) listscroll_cale_day_pane

0xa35c,	// (0x00017e3d) bg_cale_pane

0xa374,	// (0x00017e55) list_cale_pane

0xa397,	// (0x00017e78) scroll_pane_cp09

0xa3a8,	// (0x00017e89) cale_bg_pane_g1

0xa3b0,	// (0x00017e91) cale_bg_pane_g2

0xa3b8,	// (0x00017e99) cale_bg_pane_g3

0xa3c0,	// (0x00017ea1) cale_bg_pane_g4

0xa3c8,	// (0x00017ea9) cale_bg_pane_g5

0xa3d0,	// (0x00017eb1) cale_bg_pane_g6

0xa3d8,	// (0x00017eb9) cale_bg_pane_g7

0xa3e0,	// (0x00017ec1) cale_bg_pane_g8

0xa3e8,	// (0x00017ec9) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0001cda0) cale_bg_pane_g

0x2a4b,	// (0x0001052c) list_cale_time_pane_ParamLimits

0x2a4b,	// (0x0001052c) list_cale_time_pane

0xa3f0,	// (0x00017ed1) list_cale_time_pane_g1_ParamLimits

0xa3f0,	// (0x00017ed1) list_cale_time_pane_g1

0xa3fc,	// (0x00017edd) list_cale_time_pane_g2_ParamLimits

0xa3fc,	// (0x00017edd) list_cale_time_pane_g2

0x2a60,	// (0x00010541) list_cale_time_pane_g3_ParamLimits

0x2a60,	// (0x00010541) list_cale_time_pane_g3

0x2a6c,	// (0x0001054d) list_cale_time_pane_g4_ParamLimits

0x2a6c,	// (0x0001054d) list_cale_time_pane_g4

0x2a78,	// (0x00010559) list_cale_time_pane_g5_ParamLimits

0x2a78,	// (0x00010559) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0001cdb3) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0001cdb3) list_cale_time_pane_g

0xa416,	// (0x00017ef7) list_cale_time_pane_t1_ParamLimits

0xa416,	// (0x00017ef7) list_cale_time_pane_t1

0xa43e,	// (0x00017f1f) list_cale_time_pane_t2_ParamLimits

0xa43e,	// (0x00017f1f) list_cale_time_pane_t2

0x2e0e,	// (0x000108ef) aid_blid_cardinal_pane

0x2e4c,	// (0x0001092d) compass_pane_t4

0xa466,	// (0x00017f47) list_cale_time_pane_t4_ParamLimits

0xa466,	// (0x00017f47) list_cale_time_pane_t4

0x2e5a,	// (0x0001093b) compass_pane_t5

0x2e68,	// (0x00010949) compass_pane_t6

0x2e76,	// (0x00010957) compass_pane_t7

0xa940,	// (0x00018421) navi_pane_cc_t1

0xaaf7,	// (0x000185d8) aid_phob_thumbnail_center_pane

0x3401,	// (0x00010ee2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0001cdc0) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0001cdc0) list_cale_time_pane_t

0x962a,	// (0x0001710b) bg_popup_window_pane_cp02_ParamLimits

0x962a,	// (0x0001710b) bg_popup_window_pane_cp02

0xa48e,	// (0x00017f6f) heading_pane_cp01_ParamLimits

0xa48e,	// (0x00017f6f) heading_pane_cp01

0xa49a,	// (0x00017f7b) loc_req_pane_ParamLimits

0xa49a,	// (0x00017f7b) loc_req_pane

0xa4aa,	// (0x00017f8b) loc_type_pane_ParamLimits

0xa4aa,	// (0x00017f8b) loc_type_pane

0xa4bc,	// (0x00017f9d) loc_type_pane_t1_ParamLimits

0xa4bc,	// (0x00017f9d) loc_type_pane_t1

0xa4ce,	// (0x00017faf) loc_type_pane_t2_ParamLimits

0xa4ce,	// (0x00017faf) loc_type_pane_t2

0xa4e0,	// (0x00017fc1) loc_type_pane_t3_ParamLimits

0xa4e0,	// (0x00017fc1) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0001cdc7) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0001cdc7) loc_type_pane_t

0xa4f2,	// (0x00017fd3) list_loc_req_pane

0xa4fc,	// (0x00017fdd) scroll_pane_cp012

0x2a84,	// (0x00010565) list_single_loc_request_popup_menu_pane_ParamLimits

0x2a84,	// (0x00010565) list_single_loc_request_popup_menu_pane

0xa505,	// (0x00017fe6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa505,	// (0x00017fe6) list_single_loc_request_popup_menu_pane_g1

0xa511,	// (0x00017ff2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa511,	// (0x00017ff2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0001cdce) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0001cdce) list_single_loc_request_popup_menu_pane_g

0xa51d,	// (0x00017ffe) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa51d,	// (0x00017ffe) list_single_loc_request_popup_menu_pane_t1

0x9c2c,	// (0x0001770d) bg_popup_window_pane_cp03_ParamLimits

0x9c2c,	// (0x0001770d) bg_popup_window_pane_cp03

0xa533,	// (0x00018014) heading_loc_req_pane_ParamLimits

0xa533,	// (0x00018014) heading_loc_req_pane

0x2a91,	// (0x00010572) popup_dyc_status_message_window_g1_ParamLimits

0x2a91,	// (0x00010572) popup_dyc_status_message_window_g1

0x2aa5,	// (0x00010586) popup_dyc_status_message_window_t1_ParamLimits

0x2aa5,	// (0x00010586) popup_dyc_status_message_window_t1

0x2aba,	// (0x0001059b) popup_dyc_status_message_window_t2_ParamLimits

0x2aba,	// (0x0001059b) popup_dyc_status_message_window_t2

0x2acf,	// (0x000105b0) popup_dyc_status_message_window_t3_ParamLimits

0x2acf,	// (0x000105b0) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0001cdd3) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0001cdd3) popup_dyc_status_message_window_t

0x99d1,	// (0x000174b2) bg_heading_pane_cp01

0xa53f,	// (0x00018020) heading_loc_req_pane_g1

0xa547,	// (0x00018028) heading_loc_req_pane_g2

0xa54f,	// (0x00018030) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0001cdda) heading_loc_req_pane_g

0xa557,	// (0x00018038) heading_loc_req_pane_t1

0xa566,	// (0x00018047) bg_popup_sub_pane_cp01_ParamLimits

0xa566,	// (0x00018047) bg_popup_sub_pane_cp01

0xa574,	// (0x00018055) popup_cale_events_window_g1_ParamLimits

0xa574,	// (0x00018055) popup_cale_events_window_g1

0xa594,	// (0x00018075) popup_cale_events_window_g2_ParamLimits

0xa594,	// (0x00018075) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0001ce0e) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0001ce0e) popup_cale_events_window_g

0xa5b4,	// (0x00018095) popup_cale_events_window_t1_ParamLimits

0xa5b4,	// (0x00018095) popup_cale_events_window_t1

0xa5c6,	// (0x000180a7) popup_cale_events_window_t2_ParamLimits

0xa5c6,	// (0x000180a7) popup_cale_events_window_t2

0xa604,	// (0x000180e5) popup_cale_events_window_t3_ParamLimits

0xa604,	// (0x000180e5) popup_cale_events_window_t3

0xa63e,	// (0x0001811f) popup_cale_events_window_t4_ParamLimits

0xa63e,	// (0x0001811f) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0001ce13) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0001ce13) popup_cale_events_window_t

0x2bf9,	// (0x000106da) call_type_pane

0x2c09,	// (0x000106ea) popup_call_status_window_g1

0x2c1d,	// (0x000106fe) popup_call_status_window_g2

0x2c31,	// (0x00010712) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0001ce1c) popup_call_status_window_g

0xa674,	// (0x00018155) call_type_pane_g1

0xa67d,	// (0x0001815e) call_type_pane_g2

0x0001,

0xf342,	// (0x0001ce23) call_type_pane_g

0x99d1,	// (0x000174b2) bg_popup_sub_pane_cp02

0xa686,	// (0x00018167) listscroll_popup_wml_pane

0xa68e,	// (0x0001816f) list_wml_pane

0xa698,	// (0x00018179) scroll_pane_cp013

0x2c41,	// (0x00010722) list_single_graphic_popup_wml_pane_ParamLimits

0x2c41,	// (0x00010722) list_single_graphic_popup_wml_pane

0x9dba,	// (0x0001789b) list_single_graphic_popup_wml_pane_g1

0xa6a1,	// (0x00018182) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0001ce28) list_single_graphic_popup_wml_pane_g

0xa6a9,	// (0x0001818a) list_single_graphic_popup_wml_pane_t1

0xa6bf,	// (0x000181a0) aid_call_pane

0x9c24,	// (0x00017705) popup_clock_analogue_window_g1

0x9c24,	// (0x00017705) popup_clock_analogue_window_g2

0xa6c7,	// (0x000181a8) popup_clock_analogue_window_g3

0xa6c7,	// (0x000181a8) popup_clock_analogue_window_g4

0x9dba,	// (0x0001789b) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0001ce2d) popup_clock_analogue_window_g

0xa6cf,	// (0x000181b0) popup_clock_analogue_window_t1

0xa6dd,	// (0x000181be) clock_digital_number_pane_ParamLimits

0xa6dd,	// (0x000181be) clock_digital_number_pane

0xa6e9,	// (0x000181ca) clock_digital_number_pane_cp02_ParamLimits

0xa6e9,	// (0x000181ca) clock_digital_number_pane_cp02

0xa6f5,	// (0x000181d6) clock_digital_number_pane_cp03_ParamLimits

0xa6f5,	// (0x000181d6) clock_digital_number_pane_cp03

0xa701,	// (0x000181e2) clock_digital_number_pane_cp04_ParamLimits

0xa701,	// (0x000181e2) clock_digital_number_pane_cp04

0xa70d,	// (0x000181ee) clock_digital_separator_pane_ParamLimits

0xa70d,	// (0x000181ee) clock_digital_separator_pane

0xa719,	// (0x000181fa) popup_clock_digital_window_t1

0x9dba,	// (0x0001789b) clock_digital_number_pane_g1

0x9dba,	// (0x0001789b) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0001cd9b) clock_digital_number_pane_g

0x9dba,	// (0x0001789b) clock_digital_separator_pane_g1

0x9dba,	// (0x0001789b) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0001cd9b) clock_digital_separator_pane_g

0x99d1,	// (0x000174b2) bg_popup_window_pane_cp04

0xa736,	// (0x00018217) heading_pane_cp03

0xa73e,	// (0x0001821f) listscroll_popup_gms_pane

0xa746,	// (0x00018227) grid_large_graphic_popup_pane

0xa750,	// (0x00018231) listscroll_popup_gms_pane_g1

0xa758,	// (0x00018239) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0001ce38) listscroll_popup_gms_pane_g

0xa17e,	// (0x00017c5f) scroll_pane_cp014

0x2c54,	// (0x00010735) cell_large_graphic_popup_pane_ParamLimits

0x2c54,	// (0x00010735) cell_large_graphic_popup_pane

0x2c6a,	// (0x0001074b) cell_large_graphic_popup_pane_g1_ParamLimits

0x2c6a,	// (0x0001074b) cell_large_graphic_popup_pane_g1

0xa760,	// (0x00018241) cell_large_graphic_popup_pane_g2_ParamLimits

0xa760,	// (0x00018241) cell_large_graphic_popup_pane_g2

0xa76c,	// (0x0001824d) cell_large_graphic_popup_pane_g3_ParamLimits

0xa76c,	// (0x0001824d) cell_large_graphic_popup_pane_g3

0xa779,	// (0x0001825a) cell_large_graphic_popup_pane_g4_ParamLimits

0xa779,	// (0x0001825a) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0001ce3d) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0001ce3d) cell_large_graphic_popup_pane_g

0xa789,	// (0x0001826a) grid_highlight_pane_cp010

0x9dba,	// (0x0001789b) bg_popup_call_pane_g1

0xa793,	// (0x00018274) list_single_graphic_popup_conf_pane_ParamLimits

0xa793,	// (0x00018274) list_single_graphic_popup_conf_pane

0xa7a6,	// (0x00018287) list_highlight_pane_cp01

0xa7af,	// (0x00018290) list_single_graphic_popup_conf_pane_g1

0xa7b7,	// (0x00018298) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0001ce46) list_single_graphic_popup_conf_pane_g

0xa7bf,	// (0x000182a0) list_single_graphic_popup_conf_pane_t1

0xa7cd,	// (0x000182ae) linegrid_cams_pane_g1

0x2c76,	// (0x00010757) linegrid_cams_pane_g2

0x9ec5,	// (0x000179a6) linegrid_cams_pane_g3

0xa7d6,	// (0x000182b7) linegrid_cams_pane_g4

0x2c7f,	// (0x00010760) linegrid_cams_pane_g5

0x2c88,	// (0x00010769) linegrid_cams_pane_g6

0x9f75,	// (0x00017a56) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0001ce4b) linegrid_cams_pane_g

0xa7df,	// (0x000182c0) popup_clock_analogue_window

0xa7df,	// (0x000182c0) popup_clock_digital_window

0x99d1,	// (0x000174b2) popup_phob_thumbnail_window

0x9dba,	// (0x0001789b) call_video_uplink_pane_g1

0xa7e8,	// (0x000182c9) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0001ce5a) call_video_uplink_pane_g

0x9f42,	// (0x00017a23) video_uplink_pane

0xa7f0,	// (0x000182d1) mce_image_pane_g1

0x2c91,	// (0x00010772) mce_image_pane_g2

0x2c99,	// (0x0001077a) mce_image_pane_g3

0x2ca1,	// (0x00010782) mce_image_pane_g4

0x2ca9,	// (0x0001078a) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0001ce5f) mce_image_pane_g

0xa7fa,	// (0x000182db) control_top_pane_stacon_cp01_ParamLimits

0xa7fa,	// (0x000182db) control_top_pane_stacon_cp01

0xa80a,	// (0x000182eb) uni_indicator_pane_stacon_cp01_ParamLimits

0xa80a,	// (0x000182eb) uni_indicator_pane_stacon_cp01

0xa81b,	// (0x000182fc) bg_popup_sub_pane_cp03

0xa825,	// (0x00018306) chi_dic_find_pane

0x2cb1,	// (0x00010792) listscroll_chi_dic_pane

0xa82d,	// (0x0001830e) main_pane_chidic_g1

0xa835,	// (0x00018316) chi_dic_find_pane_t1

0xa843,	// (0x00018324) find_chidic_pane

0xa84c,	// (0x0001832d) chi_dic_list_pane_ParamLimits

0xa84c,	// (0x0001832d) chi_dic_list_pane

0xa85d,	// (0x0001833e) scroll_pane_cp020

0xa865,	// (0x00018346) find_chidic_pane_t1

0x99d1,	// (0x000174b2) input_focus_pane_cp06

0x2cc5,	// (0x000107a6) list_chi_dic_pane_ParamLimits

0x2cc5,	// (0x000107a6) list_chi_dic_pane

0x2cd7,	// (0x000107b8) list_chi_dic_pane_t1_ParamLimits

0x2cd7,	// (0x000107b8) list_chi_dic_pane_t1

0x99d1,	// (0x000174b2) list_highlight_pane_cp020

0xa874,	// (0x00018355) bg_cale_heading_pane_g1

0x2cea,	// (0x000107cb) bg_cale_heading_pane_g2

0x2cf2,	// (0x000107d3) bg_cale_heading_pane_g3

0x2cfa,	// (0x000107db) bg_cale_heading_pane_g4

0x2d02,	// (0x000107e3) bg_cale_heading_pane_g5

0x2d0a,	// (0x000107eb) bg_cale_heading_pane_g6

0x2d12,	// (0x000107f3) bg_cale_heading_pane_g7

0x2d1a,	// (0x000107fb) bg_cale_heading_pane_g8

0x2d22,	// (0x00010803) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0001ce6a) bg_cale_heading_pane_g

0xa874,	// (0x00018355) bg_cale_side_pane_g1

0x2d2a,	// (0x0001080b) bg_cale_side_pane_g2

0x2d32,	// (0x00010813) bg_cale_side_pane_g3

0x2d3a,	// (0x0001081b) bg_cale_side_pane_g4

0x2d42,	// (0x00010823) bg_cale_side_pane_g5

0x2d4a,	// (0x0001082b) bg_cale_side_pane_g6

0x2d52,	// (0x00010833) bg_cale_side_pane_g7

0x2d5a,	// (0x0001083b) bg_cale_side_pane_g8

0x2d62,	// (0x00010843) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0001ce7d) bg_cale_side_pane_g

0x2d6a,	// (0x0001084b) popup_call_status_window_ParamLimits

0x2d6a,	// (0x0001084b) popup_call_status_window

0xa87c,	// (0x0001835d) stacon_top_pane

0xa884,	// (0x00018365) status_pane_ParamLimits

0xa884,	// (0x00018365) status_pane

0xa89e,	// (0x0001837f) status_small_pane

0xa8a6,	// (0x00018387) control_pane

0x99d1,	// (0x000174b2) stacon_bottom_pane

0xa8ae,	// (0x0001838f) list_single_mce_smart_pane_t1_ParamLimits

0xa8ae,	// (0x0001838f) list_single_mce_smart_pane_t1

0xa8c1,	// (0x000183a2) list_single_mce_smart_pane_t2_ParamLimits

0xa8c1,	// (0x000183a2) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0001ce90) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0001ce90) list_single_mce_smart_pane_t

0x2db1,	// (0x00010892) compass_pane

0x2dba,	// (0x0001089b) main_location2_pane_t1

0x2dd0,	// (0x000108b1) main_location2_pane_t2

0x2de6,	// (0x000108c7) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0001ce95) main_location2_pane_t

0xa8e9,	// (0x000183ca) compass_pane_g1_ParamLimits

0xa8e9,	// (0x000183ca) compass_pane_g1

0x2e2e,	// (0x0001090f) compass_pane_t1

0x2e3d,	// (0x0001091e) compass_pane_t2

0x0005,

0xf3bd,	// (0x0001ce9e) compass_pane_t

0x2e84,	// (0x00010965) text_secondary_cp61

0xa937,	// (0x00018418) navi_pane_cams_g5

0xa983,	// (0x00018464) navi_pane_im_t1

0xa991,	// (0x00018472) navi_pane_mp_g1_ParamLimits

0xa991,	// (0x00018472) navi_pane_mp_g1

0xa9a5,	// (0x00018486) navi_pane_mp_g2_ParamLimits

0xa9a5,	// (0x00018486) navi_pane_mp_g2

0xa9b1,	// (0x00018492) navi_pane_mp_g3_ParamLimits

0xa9b1,	// (0x00018492) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0001ceb2) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0001ceb2) navi_pane_mp_g

0xa9bd,	// (0x0001849e) navi_pane_mp_t1

0xa9cb,	// (0x000184ac) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0001ceb9) navi_pane_mp_t

0xaa36,	// (0x00018517) navi_pane_vt_g1

0xa9bd,	// (0x0001849e) navi_pane_vt_t1

0xaa3e,	// (0x0001851f) navi_slider_pane

0x9f86,	// (0x00017a67) zooming_pane

0xaa46,	// (0x00018527) navi_slider_pane_g1

0xaa4f,	// (0x00018530) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0001cec0) navi_slider_pane_g

0xaa7c,	// (0x0001855d) aid_levels_zoom

0xaa84,	// (0x00018565) zooming_pane_g1

0xaa8c,	// (0x0001856d) zooming_pane_g2

0xaa8c,	// (0x0001856d) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0001cecf) zooming_pane_g

0xaa94,	// (0x00018575) level_10_zoom

0xaa9d,	// (0x0001857e) level_11_zoom

0xaaa6,	// (0x00018587) level_1_zoom

0xaaaf,	// (0x00018590) level_2_zoom

0xaab8,	// (0x00018599) level_3_zoom

0xaac1,	// (0x000185a2) level_4_zoom

0xaaca,	// (0x000185ab) level_5_zoom

0xaad3,	// (0x000185b4) level_6_zoom

0xaadc,	// (0x000185bd) level_7_zoom

0xaae5,	// (0x000185c6) level_8_zoom

0xaaee,	// (0x000185cf) level_9_zoom

0xaaff,	// (0x000185e0) popup_phob_thumbnail_window_g1

0xab07,	// (0x000185e8) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0001ced6) popup_phob_thumbnail_window_g

0xbeed,	// (0x000199ce) level_1_location

0xbef5,	// (0x000199d6) level_2_location

0xbefd,	// (0x000199de) level_3_location

0xbf05,	// (0x000199e6) level_4_location

0x9f86,	// (0x00017a67) level_5_location

0x2f1a,	// (0x000109fb) mce_icon_pane_g1

0x2f22,	// (0x00010a03) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0001cedb) mce_icon_pane_g

0x2f2a,	// (0x00010a0b) main_mup_pane_g1_ParamLimits

0x2f2a,	// (0x00010a0b) main_mup_pane_g1

0x2f40,	// (0x00010a21) main_mup_pane_g2_ParamLimits

0x2f40,	// (0x00010a21) main_mup_pane_g2

0x2f58,	// (0x00010a39) main_mup_pane_g3_ParamLimits

0x2f58,	// (0x00010a39) main_mup_pane_g3

0x2f70,	// (0x00010a51) main_mup_pane_g4_ParamLimits

0x2f70,	// (0x00010a51) main_mup_pane_g4

0x2f88,	// (0x00010a69) main_mup_pane_g5_ParamLimits

0x2f88,	// (0x00010a69) main_mup_pane_g5

0x2fa2,	// (0x00010a83) main_mup_pane_g6_ParamLimits

0x2fa2,	// (0x00010a83) main_mup_pane_g6

0x2fba,	// (0x00010a9b) main_mup_pane_g7_ParamLimits

0x2fba,	// (0x00010a9b) main_mup_pane_g7

0x2fd2,	// (0x00010ab3) main_mup_pane_g8_ParamLimits

0x2fd2,	// (0x00010ab3) main_mup_pane_g8

0x2fea,	// (0x00010acb) main_mup_pane_g9_ParamLimits

0x2fea,	// (0x00010acb) main_mup_pane_g9

0x2ffe,	// (0x00010adf) main_mup_pane_g10_ParamLimits

0x2ffe,	// (0x00010adf) main_mup_pane_g10

0x3012,	// (0x00010af3) main_mup_pane_g11_ParamLimits

0x3012,	// (0x00010af3) main_mup_pane_g11

0x3024,	// (0x00010b05) main_mup_pane_g12_ParamLimits

0x3024,	// (0x00010b05) main_mup_pane_g12

0x3038,	// (0x00010b19) main_mup_pane_g13_ParamLimits

0x3038,	// (0x00010b19) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0001cee0) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0001cee0) main_mup_pane_g

0x304a,	// (0x00010b2b) main_mup_pane_t1_ParamLimits

0x304a,	// (0x00010b2b) main_mup_pane_t1

0x3064,	// (0x00010b45) main_mup_pane_t2_ParamLimits

0x3064,	// (0x00010b45) main_mup_pane_t2

0x307c,	// (0x00010b5d) main_mup_pane_t3_ParamLimits

0x307c,	// (0x00010b5d) main_mup_pane_t3

0x3094,	// (0x00010b75) main_mup_pane_t4_ParamLimits

0x3094,	// (0x00010b75) main_mup_pane_t4

0x30b2,	// (0x00010b93) main_mup_pane_t5_ParamLimits

0x30b2,	// (0x00010b93) main_mup_pane_t5

0x30c7,	// (0x00010ba8) main_mup_pane_t6_ParamLimits

0x30c7,	// (0x00010ba8) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0001cefb) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0001cefb) main_mup_pane_t

0x30d9,	// (0x00010bba) mup_progress_pane_ParamLimits

0x30d9,	// (0x00010bba) mup_progress_pane

0x30e5,	// (0x00010bc6) mup_visualizer_pane_ParamLimits

0x30e5,	// (0x00010bc6) mup_visualizer_pane

0x310d,	// (0x00010bee) mup_volume_pane_ParamLimits

0x310d,	// (0x00010bee) mup_volume_pane

0xab0f,	// (0x000185f0) mup_visualizer_pane_g1_ParamLimits

0xab0f,	// (0x000185f0) mup_visualizer_pane_g1

0xab0f,	// (0x000185f0) mup_visualizer_pane_g2_ParamLimits

0xab0f,	// (0x000185f0) mup_visualizer_pane_g2

0xa8e9,	// (0x000183ca) mup_visualizer_pane_g3_ParamLimits

0xa8e9,	// (0x000183ca) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0001cf08) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0001cf08) mup_visualizer_pane_g

0x9dba,	// (0x0001789b) mup_volume_pane_g1

0xab25,	// (0x00018606) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0001cf0f) mup_volume_pane_g

0x9dba,	// (0x0001789b) mup_progress_pane_g1

0xab2e,	// (0x0001860f) mup_progress_pane_g2

0xab37,	// (0x00018618) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0001cf14) mup_progress_pane_g

0x99d1,	// (0x000174b2) bg_popup_window_pane_cp05

0xab40,	// (0x00018621) heading_pane_cp02_ParamLimits

0xab40,	// (0x00018621) heading_pane_cp02

0xab5a,	// (0x0001863b) list_popup_blid_pane

0xab62,	// (0x00018643) list_blid_sat_info_pane_ParamLimits

0xab62,	// (0x00018643) list_blid_sat_info_pane

0xab75,	// (0x00018656) list_blid_sat_info_pane_g1

0xab7d,	// (0x0001865e) list_blid_sat_info_pane_t1

0x31fd,	// (0x00010cde) mup_equalizer_pane_ParamLimits

0x31fd,	// (0x00010cde) mup_equalizer_pane

0x3216,	// (0x00010cf7) mup_equalizer_pane_cp1_ParamLimits

0x3216,	// (0x00010cf7) mup_equalizer_pane_cp1

0x322f,	// (0x00010d10) mup_equalizer_pane_cp2_ParamLimits

0x322f,	// (0x00010d10) mup_equalizer_pane_cp2

0x3248,	// (0x00010d29) mup_equalizer_pane_cp3_ParamLimits

0x3248,	// (0x00010d29) mup_equalizer_pane_cp3

0x3261,	// (0x00010d42) mup_equalizer_pane_cp4_ParamLimits

0x3261,	// (0x00010d42) mup_equalizer_pane_cp4

0x327a,	// (0x00010d5b) mup_equalizer_pane_cp5

0x328c,	// (0x00010d6d) mup_equalizer_pane_cp6

0x329e,	// (0x00010d7f) mup_equalizer_pane_cp7

0xbdcb,	// (0x000198ac) bg_popup_call_poc_act_pane_g9

0xbdd3,	// (0x000198b4) bg_popup_call_poc_act_pane_g10

0xbddb,	// (0x000198bc) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c2c,	// (0x0001770d) mup_scale_pane

0x9dba,	// (0x0001789b) mup_scale_pane_g1

0xab8b,	// (0x0001866c) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0001cf30) mup_scale_pane_g

0xabaf,	// (0x00018690) msg_data_pane

0xabb7,	// (0x00018698) scroll_pane_cp017

0x32c4,	// (0x00010da5) bg_list_pane_cp04_ParamLimits

0x32c4,	// (0x00010da5) bg_list_pane_cp04

0xabc7,	// (0x000186a8) msg_data_pane_g1

0x2c91,	// (0x00010772) msg_data_pane_g2

0x2c99,	// (0x0001077a) msg_data_pane_g3

0x32dc,	// (0x00010dbd) msg_data_pane_g4

0x2ca9,	// (0x0001078a) msg_data_pane_g5

0x2f1a,	// (0x000109fb) msg_data_pane_g6

0x32e4,	// (0x00010dc5) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0001cf3f) msg_data_pane_g

0x32ec,	// (0x00010dcd) msg_text_pane_ParamLimits

0x32ec,	// (0x00010dcd) msg_text_pane

0x3313,	// (0x00010df4) qrid_highlight_pane_cp011_ParamLimits

0x3313,	// (0x00010df4) qrid_highlight_pane_cp011

0x99d1,	// (0x000174b2) msg_body_pane

0x99d1,	// (0x000174b2) msg_header_pane

0xabd8,	// (0x000186b9) input_focus_pane_cp07

0xabed,	// (0x000186ce) msg_header_pane_t1_ParamLimits

0xabed,	// (0x000186ce) msg_header_pane_t1

0xabff,	// (0x000186e0) msg_header_pane_t2_ParamLimits

0xabff,	// (0x000186e0) msg_header_pane_t2

0x0001,

0xf472,	// (0x0001cf53) msg_header_pane_t_ParamLimits

0xf472,	// (0x0001cf53) msg_header_pane_t

0xac11,	// (0x000186f2) msg_body_pane_g1

0xac19,	// (0x000186fa) msg_body_pane_t1_ParamLimits

0xac19,	// (0x000186fa) msg_body_pane_t1

0xac44,	// (0x00018725) msg_body_pane_t2_ParamLimits

0xac44,	// (0x00018725) msg_body_pane_t2

0xac56,	// (0x00018737) msg_body_pane_t3_ParamLimits

0xac56,	// (0x00018737) msg_body_pane_t3

0x0002,

0xf477,	// (0x0001cf58) msg_body_pane_t_ParamLimits

0xf477,	// (0x0001cf58) msg_body_pane_t

0x336b,	// (0x00010e4c) main_viewer_pane_g1_ParamLimits

0x336b,	// (0x00010e4c) main_viewer_pane_g1

0x3377,	// (0x00010e58) main_viewer_pane_g2_ParamLimits

0x3377,	// (0x00010e58) main_viewer_pane_g2

0x3383,	// (0x00010e64) main_viewer_pane_g3_ParamLimits

0x3383,	// (0x00010e64) main_viewer_pane_g3

0x3392,	// (0x00010e73) main_viewer_pane_g4_ParamLimits

0x3392,	// (0x00010e73) main_viewer_pane_g4

0xac80,	// (0x00018761) main_viewer_pane_g5_ParamLimits

0xac80,	// (0x00018761) main_viewer_pane_g5

0xac80,	// (0x00018761) main_viewer_pane_g7_ParamLimits

0xac80,	// (0x00018761) main_viewer_pane_g7

0xac92,	// (0x00018773) main_viewer_pane_g8_ParamLimits

0xac92,	// (0x00018773) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0001cf68) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0001cf68) main_viewer_pane_g

0xacaa,	// (0x0001878b) viewer_content_pane_ParamLimits

0xacaa,	// (0x0001878b) viewer_content_pane

0x33c6,	// (0x00010ea7) main_postcard_pane_g1_ParamLimits

0x33c6,	// (0x00010ea7) main_postcard_pane_g1

0x33da,	// (0x00010ebb) main_postcard_pane_g2_ParamLimits

0x33da,	// (0x00010ebb) main_postcard_pane_g2

0x33ee,	// (0x00010ecf) main_postcard_pane_g3_ParamLimits

0x33ee,	// (0x00010ecf) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0001cf79) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0001cf79) main_postcard_pane_g

0x3401,	// (0x00010ee2) main_postcard_pane_g4

0xc047,	// (0x00019b28) smil_status_volume_pane_g2

0x343c,	// (0x00010f1d) postcard_pane_ParamLimits

0x343c,	// (0x00010f1d) postcard_pane

0xacb8,	// (0x00018799) postcard_pane_g1_ParamLimits

0xacb8,	// (0x00018799) postcard_pane_g1

0x347c,	// (0x00010f5d) postcard_pane_g2_ParamLimits

0x347c,	// (0x00010f5d) postcard_pane_g2

0x3488,	// (0x00010f69) postcard_pane_g3_ParamLimits

0x3488,	// (0x00010f69) postcard_pane_g3

0xacc6,	// (0x000187a7) postcard_pane_g4_ParamLimits

0xacc6,	// (0x000187a7) postcard_pane_g4

0x3494,	// (0x00010f75) postcard_pane_g5_ParamLimits

0x3494,	// (0x00010f75) postcard_pane_g5

0x34a9,	// (0x00010f8a) postcard_pane_g6_ParamLimits

0x34a9,	// (0x00010f8a) postcard_pane_g6

0xacb8,	// (0x00018799) postcard_pane_g7_ParamLimits

0xacb8,	// (0x00018799) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0001cf86) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0001cf86) postcard_pane_g

0x34bd,	// (0x00010f9e) main_mp2_pane_g1_ParamLimits

0x34bd,	// (0x00010f9e) main_mp2_pane_g1

0x34c9,	// (0x00010faa) main_mp2_pane_g2_ParamLimits

0x34c9,	// (0x00010faa) main_mp2_pane_g2

0x34d5,	// (0x00010fb6) main_mp2_pane_g3_ParamLimits

0x34d5,	// (0x00010fb6) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0001cf95) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0001cf95) main_mp2_pane_g

0x34e1,	// (0x00010fc2) main_mp2_pane_t1_ParamLimits

0x34e1,	// (0x00010fc2) main_mp2_pane_t1

0x34f6,	// (0x00010fd7) main_mp2_pane_t2_ParamLimits

0x34f6,	// (0x00010fd7) main_mp2_pane_t2

0x3508,	// (0x00010fe9) main_mp2_pane_t3_ParamLimits

0x3508,	// (0x00010fe9) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0001cf9c) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0001cf9c) main_mp2_pane_t

0xacd4,	// (0x000187b5) pec_content_pane_ParamLimits

0xacd4,	// (0x000187b5) pec_content_pane

0xa17e,	// (0x00017c5f) scroll_pane_cp015

0xace6,	// (0x000187c7) pec_attribute_pane_ParamLimits

0xace6,	// (0x000187c7) pec_attribute_pane

0x351a,	// (0x00010ffb) pec_content_pane_g1_ParamLimits

0x351a,	// (0x00010ffb) pec_content_pane_g1

0xacf6,	// (0x000187d7) pec_content_pane_t1_ParamLimits

0xacf6,	// (0x000187d7) pec_content_pane_t1

0xad08,	// (0x000187e9) pec_content_pane_t2_ParamLimits

0xad08,	// (0x000187e9) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0001cfa3) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0001cfa3) pec_content_pane_t

0x3526,	// (0x00011007) list_single_graphic_pane_cp01_ParamLimits

0x3526,	// (0x00011007) list_single_graphic_pane_cp01

0x9c2c,	// (0x0001770d) bg_popup_sub_pane_cp04

0xad1a,	// (0x000187fb) popup_mup_playback_window_g1

0xad26,	// (0x00018807) popup_mup_playback_window_t1

0xad3b,	// (0x0001881c) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0001cfa8) popup_mup_playback_window_t

0xad72,	// (0x00018853) main_image_pane_g1_ParamLimits

0xad72,	// (0x00018853) main_image_pane_g1

0xadb5,	// (0x00018896) scroll_pane_cp018_ParamLimits

0xadb5,	// (0x00018896) scroll_pane_cp018

0xadcd,	// (0x000188ae) scroll_pane_cp016_ParamLimits

0xadcd,	// (0x000188ae) scroll_pane_cp016

0x35f1,	// (0x000110d2) smil2_image_pane_ParamLimits

0x35f1,	// (0x000110d2) smil2_image_pane

0x3619,	// (0x000110fa) smil2_root_pane_ParamLimits

0x3619,	// (0x000110fa) smil2_root_pane

0x3651,	// (0x00011132) smil2_text_pane_ParamLimits

0x3651,	// (0x00011132) smil2_text_pane

0x99d1,	// (0x000174b2) bg_list_pane_cp06

0xae09,	// (0x000188ea) grid_radio_pane

0x99d1,	// (0x000174b2) bg_popup_window_pane_cp06

0xae11,	// (0x000188f2) main_fmradio_pane_t1

0xa736,	// (0x00018217) heading_pane_cp04

0xae1f,	// (0x00018900) main_fmradio_pane_t2

0xbe23,	// (0x00019904) popup_cale_lunar_info_window_g1

0xae2d,	// (0x0001890e) main_fmradio_pane_t3

0xbe2b,	// (0x0001990c) popup_cale_lunar_info_window_g2

0xae3b,	// (0x0001891c) main_fmradio_pane_t4

0x0001,

0xae49,	// (0x0001892a) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0001d096) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0001cfbd) main_fmradio_pane_t

0xae57,	// (0x00018938) wait_bar_pane_cp03

0xae5f,	// (0x00018940) cell_fmradio_pane_ParamLimits

0xae5f,	// (0x00018940) cell_fmradio_pane

0xacb8,	// (0x00018799) cell_fmradio_pane_g1_ParamLimits

0xacb8,	// (0x00018799) cell_fmradio_pane_g1

0x99d1,	// (0x000174b2) grid_highlight_pane_cp011

0xae72,	// (0x00018953) poc_content_pane_ParamLimits

0xae72,	// (0x00018953) poc_content_pane

0xae85,	// (0x00018966) scroll_pane_cp019

0x36bd,	// (0x0001119e) popup_call_poc_act_window_ParamLimits

0x36bd,	// (0x0001119e) popup_call_poc_act_window

0x36dd,	// (0x000111be) popup_call_poc_inact_window_ParamLimits

0x36dd,	// (0x000111be) popup_call_poc_inact_window

0xf579,	// (0x0001d05a) bg_popup_call_poc_act_pane_g

0xbde3,	// (0x000198c4) bg_popup_call_poc_inact_pane_g1

0xbdeb,	// (0x000198cc) bg_popup_call_poc_inact_pane_g2

0xae8d,	// (0x0001896e) popup_call_poc_act_window_g2

0xbdf3,	// (0x000198d4) bg_popup_call_poc_inact_pane_g3

0xbd73,	// (0x00019854) bg_popup_call_poc_inact_pane_g4

0xbdfb,	// (0x000198dc) bg_popup_call_poc_inact_pane_g5

0xae95,	// (0x00018976) popup_call_poc_act_window_t1_ParamLimits

0xae95,	// (0x00018976) popup_call_poc_act_window_t1

0xaebd,	// (0x0001899e) popup_call_poc_act_window_t2_ParamLimits

0xaebd,	// (0x0001899e) popup_call_poc_act_window_t2

0xaee5,	// (0x000189c6) popup_call_poc_act_window_t3_ParamLimits

0xaee5,	// (0x000189c6) popup_call_poc_act_window_t3

0xaf0d,	// (0x000189ee) popup_call_poc_act_window_t4_ParamLimits

0xaf0d,	// (0x000189ee) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0001cfc8) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0001cfc8) popup_call_poc_act_window_t

0xbe03,	// (0x000198e4) bg_popup_call_poc_inact_pane_g6

0xbe0b,	// (0x000198ec) bg_popup_call_poc_inact_pane_g7

0xbe13,	// (0x000198f4) bg_popup_call_poc_inact_pane_g8

0xaf1f,	// (0x00018a00) popup_call_poc_inact_window_g2

0xbe1b,	// (0x000198fc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0001d071) bg_popup_call_poc_inact_pane_g

0xaf27,	// (0x00018a08) popup_call_poc_inact_window_t1_ParamLimits

0xaf27,	// (0x00018a08) popup_call_poc_inact_window_t1

0xaf3c,	// (0x00018a1d) popup_call_poc_inact_window_t2_ParamLimits

0xaf3c,	// (0x00018a1d) popup_call_poc_inact_window_t2

0xaf51,	// (0x00018a32) popup_call_poc_inact_window_t3_ParamLimits

0xaf51,	// (0x00018a32) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0001cfd1) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0001cfd1) popup_call_poc_inact_window_t

0xbfba,	// (0x00019a9b) context_pane_ParamLimits

0x3ddb,	// (0x000118bc) signal_pane_ParamLimits

0x9f86,	// (0x00017a67) main_call2_pane

0xbf93,	// (0x00019a74) popup_phob_thumbnail2_window_ParamLimits

0xbf93,	// (0x00019a74) popup_phob_thumbnail2_window

0xac68,	// (0x00018749) aid_hotspot_pointer_arrow_pane

0xac70,	// (0x00018751) aid_hotspot_pointer_hand_pane

0x39b2,	// (0x00011493) phob_pre_status_pane_g5

0x1831,	// (0x0000f312) cams_zoom_pane_ParamLimits

0x1840,	// (0x0000f321) image_vga_pane_ParamLimits

0x1858,	// (0x0000f339) main_camera_pane_g1_ParamLimits

0x1868,	// (0x0000f349) main_camera_pane_g2_ParamLimits

0x1878,	// (0x0000f359) main_camera_pane_g3_ParamLimits

0x1888,	// (0x0000f369) main_camera_pane_g4_ParamLimits

0x1898,	// (0x0000f379) main_camera_pane_g5_ParamLimits

0x18a8,	// (0x0000f389) main_camera_pane_g6_ParamLimits

0x18b8,	// (0x0000f399) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0001ccd0) main_camera_pane_g_ParamLimits

0x18c8,	// (0x0000f3a9) main_camera_pane_t1_ParamLimits

0x18de,	// (0x0000f3bf) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0001cce1) main_camera_pane_t_ParamLimits

0x9c2c,	// (0x0001770d) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c2c,	// (0x0001770d) bg_popup_preview_window_pane_cp01

0xaf66,	// (0x00018a47) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf66,	// (0x00018a47) popup_phob_thumbnail2_window_g1

0x99d1,	// (0x000174b2) call2_cli_visual_pane

0x3709,	// (0x000111ea) popup_call2_audio_conf_window_ParamLimits

0x3709,	// (0x000111ea) popup_call2_audio_conf_window

0x3727,	// (0x00011208) popup_call2_audio_first_window_ParamLimits

0x3727,	// (0x00011208) popup_call2_audio_first_window

0x379d,	// (0x0001127e) popup_call2_audio_in_window_ParamLimits

0x379d,	// (0x0001127e) popup_call2_audio_in_window

0x37d1,	// (0x000112b2) popup_call2_audio_out_window_ParamLimits

0x37d1,	// (0x000112b2) popup_call2_audio_out_window

0x3823,	// (0x00011304) popup_call2_audio_second_window_ParamLimits

0x3823,	// (0x00011304) popup_call2_audio_second_window

0x3875,	// (0x00011356) popup_call2_audio_wait_window_ParamLimits

0x3875,	// (0x00011356) popup_call2_audio_wait_window

0x99d1,	// (0x000174b2) bg_popup_call2_act_pane_cp03

0x9c0e,	// (0x000176ef) list_conf_pane_cp

0xaf72,	// (0x00018a53) popup_call2_audio_conf_window_t1

0xa793,	// (0x00018274) list_single_graphic_popup_conf2_pane_ParamLimits

0xa793,	// (0x00018274) list_single_graphic_popup_conf2_pane

0xa7a6,	// (0x00018287) list_highlight_pane_cp04

0xaf80,	// (0x00018a61) list_single_graphic_popup_conf2_pane_g1

0xa7b7,	// (0x00018298) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0001cfd8) list_single_graphic_popup_conf2_pane_g

0xaf88,	// (0x00018a69) list_single_graphic_popup_conf2_pane_t1

0xaf96,	// (0x00018a77) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf96,	// (0x00018a77) bg_popup_call2_act_pane_cp01

0xb020,	// (0x00018b01) call_type_pane_cp05_ParamLimits

0xb020,	// (0x00018b01) call_type_pane_cp05

0xb074,	// (0x00018b55) popup_call2_audio_second_window_g1_ParamLimits

0xb074,	// (0x00018b55) popup_call2_audio_second_window_g1

0xb0c8,	// (0x00018ba9) popup_call2_audio_second_window_g2_ParamLimits

0xb0c8,	// (0x00018ba9) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0001cfdd) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0001cfdd) popup_call2_audio_second_window_g

0xb12d,	// (0x00018c0e) popup_call2_audio_second_window_t1_ParamLimits

0xb12d,	// (0x00018c0e) popup_call2_audio_second_window_t1

0xb1e8,	// (0x00018cc9) popup_call2_audio_second_window_t2_ParamLimits

0xb1e8,	// (0x00018cc9) popup_call2_audio_second_window_t2

0xb23b,	// (0x00018d1c) popup_call2_audio_second_window_t3_ParamLimits

0xb23b,	// (0x00018d1c) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0001cfe4) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0001cfe4) popup_call2_audio_second_window_t

0x99d1,	// (0x000174b2) bg_popup_call2_in_pane_cp02

0x99db,	// (0x000174bc) call_type_pane_cp04

0x99e3,	// (0x000174c4) popup_call2_audio_wait_window_g1

0x99eb,	// (0x000174cc) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0001cbbf) popup_call2_audio_wait_window_g

0x99f3,	// (0x000174d4) popup_call2_audio_wait_window_t3

0xb32e,	// (0x00018e0f) bg_popup_call2_act_pane_ParamLimits

0xb32e,	// (0x00018e0f) bg_popup_call2_act_pane

0xb3ee,	// (0x00018ecf) call_type_pane_cp03_ParamLimits

0xb3ee,	// (0x00018ecf) call_type_pane_cp03

0xb452,	// (0x00018f33) popup_call2_audio_first_window_g1_ParamLimits

0xb452,	// (0x00018f33) popup_call2_audio_first_window_g1

0xb4c2,	// (0x00018fa3) popup_call2_audio_first_window_g2_ParamLimits

0xb4c2,	// (0x00018fa3) popup_call2_audio_first_window_g2

0xab0f,	// (0x000185f0) popup_call2_audio_first_window_g3_ParamLimits

0xab0f,	// (0x000185f0) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0001cfed) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0001cfed) popup_call2_audio_first_window_g

0xb5a0,	// (0x00019081) popup_call2_audio_first_window_t1_ParamLimits

0xb5a0,	// (0x00019081) popup_call2_audio_first_window_t1

0xb6a3,	// (0x00019184) popup_call2_audio_first_window_t4_ParamLimits

0xb6a3,	// (0x00019184) popup_call2_audio_first_window_t4

0xb786,	// (0x00019267) popup_call2_audio_first_window_t5_ParamLimits

0xb786,	// (0x00019267) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0001cff8) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0001cff8) popup_call2_audio_first_window_t

0x9c24,	// (0x00017705) bg_popup_call2_act_pane_g1

0xbe33,	// (0x00019914) popup_cale_lunar_info_window_t1

0xbe41,	// (0x00019922) popup_cale_lunar_info_window_t2

0xbe4f,	// (0x00019930) popup_cale_lunar_info_window_t3

0x99d1,	// (0x000174b2) bg_popup_call2_bubble_pane

0xb887,	// (0x00019368) bg_popup_call2_in_pane_cp01_ParamLimits

0xb887,	// (0x00019368) bg_popup_call2_in_pane_cp01

0x96ad,	// (0x0001718e) call_type_pane_cp02

0xb8cf,	// (0x000193b0) popup_call2_audio_out_window_g1_ParamLimits

0xb8cf,	// (0x000193b0) popup_call2_audio_out_window_g1

0xb8fb,	// (0x000193dc) popup_call2_audio_out_window_g2_ParamLimits

0xb8fb,	// (0x000193dc) popup_call2_audio_out_window_g2

0xb923,	// (0x00019404) popup_call2_audio_out_window_g3_ParamLimits

0xb923,	// (0x00019404) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0001d001) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0001d001) popup_call2_audio_out_window_g

0xb95e,	// (0x0001943f) popup_call2_audio_out_window_t1_ParamLimits

0xb95e,	// (0x0001943f) popup_call2_audio_out_window_t1

0xb9bd,	// (0x0001949e) popup_call2_audio_out_window_t2_ParamLimits

0xb9bd,	// (0x0001949e) popup_call2_audio_out_window_t2

0xba11,	// (0x000194f2) popup_call2_audio_out_window_t3_ParamLimits

0xba11,	// (0x000194f2) popup_call2_audio_out_window_t3

0xba27,	// (0x00019508) popup_call2_audio_out_window_t4_ParamLimits

0xba27,	// (0x00019508) popup_call2_audio_out_window_t4

0xba3d,	// (0x0001951e) popup_call2_audio_out_window_t5_ParamLimits

0xba3d,	// (0x0001951e) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0001d00a) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0001d00a) popup_call2_audio_out_window_t

0xbaa1,	// (0x00019582) bg_popup_call2_in_pane_ParamLimits

0xbaa1,	// (0x00019582) bg_popup_call2_in_pane

0xbafd,	// (0x000195de) popup_call2_audio_in_window_g1_ParamLimits

0xbafd,	// (0x000195de) popup_call2_audio_in_window_g1

0xbb35,	// (0x00019616) popup_call2_audio_in_window_g2_ParamLimits

0xbb35,	// (0x00019616) popup_call2_audio_in_window_g2

0xbb6d,	// (0x0001964e) popup_call2_audio_in_window_g3_ParamLimits

0xbb6d,	// (0x0001964e) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0001d017) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0001d017) popup_call2_audio_in_window_g

0xbbc5,	// (0x000196a6) popup_call2_audio_in_window_t1_ParamLimits

0xbbc5,	// (0x000196a6) popup_call2_audio_in_window_t1

0xbc45,	// (0x00019726) popup_call2_audio_in_window_t2_ParamLimits

0xbc45,	// (0x00019726) popup_call2_audio_in_window_t2

0xbcc5,	// (0x000197a6) popup_call2_audio_in_window_t3_ParamLimits

0xbcc5,	// (0x000197a6) popup_call2_audio_in_window_t3

0xbcdf,	// (0x000197c0) popup_call2_audio_in_window_t4_ParamLimits

0xbcdf,	// (0x000197c0) popup_call2_audio_in_window_t4

0xbcf1,	// (0x000197d2) popup_call2_audio_in_window_t5_ParamLimits

0xbcf1,	// (0x000197d2) popup_call2_audio_in_window_t5

0xbd06,	// (0x000197e7) popup_call2_audio_in_window_t6_ParamLimits

0xbd06,	// (0x000197e7) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0001d020) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0001d020) popup_call2_audio_in_window_t

0x9c24,	// (0x00017705) bg_popup_call2_in_pane_g1

0xbe5d,	// (0x0001993e) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0001d09b) popup_cale_lunar_info_window_t

0x9c2c,	// (0x0001770d) bg_popup_call2_rect_pane_ParamLimits

0x9c2c,	// (0x0001770d) bg_popup_call2_rect_pane

0x99d1,	// (0x000174b2) call2_cli_visual_graphic_pane

0x99d1,	// (0x000174b2) call2_cli_visual_text_pane

0xc05a,	// (0x00019b3b) smil_status_volume_pane_g3

0x0002,

0x9dba,	// (0x0001789b) call2_cli_visual_graphic_pane_g1

0x9dba,	// (0x0001789b) call2_cli_visual_graphic_pane_g2

0x9dba,	// (0x0001789b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0001d02d) call2_cli_visual_graphic_pane_g

0xbd1b,	// (0x000197fc) bg_popup_call2_rect_pane_g1

0x9e62,	// (0x00017943) bg_popup_call2_rect_pane_g2

0xbd23,	// (0x00019804) bg_popup_call2_rect_pane_g3

0xbd2b,	// (0x0001980c) bg_popup_call2_rect_pane_g4

0xbd33,	// (0x00019814) bg_popup_call2_rect_pane_g5

0xbd3b,	// (0x0001981c) bg_popup_call2_rect_pane_g6

0xbd43,	// (0x00019824) bg_popup_call2_rect_pane_g7

0xbd4b,	// (0x0001982c) bg_popup_call2_rect_pane_g8

0xbd53,	// (0x00019834) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0001d034) bg_popup_call2_rect_pane_g

0xbd5b,	// (0x0001983c) bg_popup_call2_bubble_pane_g1

0xbd63,	// (0x00019844) bg_popup_call2_bubble_pane_g2

0xbd6b,	// (0x0001984c) bg_popup_call2_bubble_pane_g3

0xbd73,	// (0x00019854) bg_popup_call2_bubble_pane_g4

0xbd7b,	// (0x0001985c) bg_popup_call2_bubble_pane_g5

0xbd83,	// (0x00019864) bg_popup_call2_bubble_pane_g6

0xbd8b,	// (0x0001986c) bg_popup_call2_bubble_pane_g7

0xbd93,	// (0x00019874) bg_popup_call2_bubble_pane_g8

0xbd9b,	// (0x0001987c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0001d047) bg_popup_call2_bubble_pane_g

0x11e4,	// (0x0000ecc5) aid_cale_week_size_cell_pane

0x18f4,	// (0x0000f3d5) aid_cams_cif_uncrop_pane_ParamLimits

0x18f4,	// (0x0000f3d5) aid_cams_cif_uncrop_pane

0x1a95,	// (0x0000f576) aid_cams_size_cell_ParamLimits

0x1a95,	// (0x0000f576) aid_cams_size_cell

0x1aa9,	// (0x0000f58a) grid_cams_pane_ParamLimits

0x1abe,	// (0x0000f59f) linegrid_cams_pane_ParamLimits

0x1c78,	// (0x0000f759) call_video_pane_t1

0x1c92,	// (0x0000f773) call_video_pane_t2

0x0001,

0xf253,	// (0x0001cd34) call_video_pane_t

0x2017,	// (0x0000faf8) aid_cale_month_size_cell_pane_ParamLimits

0x2017,	// (0x0000faf8) aid_cale_month_size_cell_pane

0xf603,	// (0x0001d0e4) smil_status_volume_pane_g

0xc067,	// (0x00019b48) volume_smil_pane_ParamLimits

0x9571,	// (0x00017052) aid_popup2_width_pane

0x1133,	// (0x0000ec14) cell_qdial_pane_g4_ParamLimits

0x1133,	// (0x0000ec14) cell_qdial_pane_g4

0x2e0e,	// (0x000108ef) aid_blid_cardinal_pane_ParamLimits

0x2e1a,	// (0x000108fb) aid_blid_destination_pane_ParamLimits

0x2e1a,	// (0x000108fb) aid_blid_destination_pane

0x9c2c,	// (0x0001770d) bg_popup_call_poc_act_pane_ParamLimits

0x9c2c,	// (0x0001770d) bg_popup_call_poc_act_pane

0x9c2c,	// (0x0001770d) bg_popup_call_poc_inact_pane_ParamLimits

0x9c2c,	// (0x0001770d) bg_popup_call_poc_inact_pane

0xbda3,	// (0x00019884) bg_popup_call_poc_act_pane_g1

0xbdab,	// (0x0001988c) bg_popup_call_poc_act_pane_g2

0xbdb3,	// (0x00019894) bg_popup_call_poc_act_pane_g3

0xbd73,	// (0x00019854) bg_popup_call_poc_act_pane_g4

0xbd7b,	// (0x0001985c) bg_popup_call_poc_act_pane_g5

0xbdbb,	// (0x0001989c) bg_popup_call_poc_act_pane_g6

0xbd8b,	// (0x0001986c) bg_popup_call_poc_act_pane_g7

0xbdc3,	// (0x000198a4) bg_popup_call_poc_act_pane_g8

0x99d1,	// (0x000174b2) main_usb_pane

0xbf72,	// (0x00019a53) popup_cale_lunar_info_window

0x1ed7,	// (0x0000f9b8) im_reading_pane_t1_ParamLimits

0xa0c7,	// (0x00017ba8) list_im_pane_ParamLimits

0xa0d8,	// (0x00017bb9) scroll_pane_cp07_ParamLimits

0x99d1,	// (0x000174b2) grid_highlight_pane_cp012

0x9c2c,	// (0x0001770d) mup_scale_pane_ParamLimits

0xacb8,	// (0x00018799) main_usb_pane_g1_ParamLimits

0xacb8,	// (0x00018799) main_usb_pane_g1

0x38cf,	// (0x000113b0) main_usb_pane_g2_ParamLimits

0x38cf,	// (0x000113b0) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0001d084) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0001d084) main_usb_pane_g

0x38e3,	// (0x000113c4) main_usb_pane_t1_ParamLimits

0x38e3,	// (0x000113c4) main_usb_pane_t1

0x38f5,	// (0x000113d6) main_usb_pane_t2_ParamLimits

0x38f5,	// (0x000113d6) main_usb_pane_t2

0x3907,	// (0x000113e8) main_usb_pane_t3_ParamLimits

0x3907,	// (0x000113e8) main_usb_pane_t3

0x3919,	// (0x000113fa) main_usb_pane_t4_ParamLimits

0x3919,	// (0x000113fa) main_usb_pane_t4

0x392b,	// (0x0001140c) main_usb_pane_t5_ParamLimits

0x392b,	// (0x0001140c) main_usb_pane_t5

0x393d,	// (0x0001141e) main_usb_pane_t6_ParamLimits

0x393d,	// (0x0001141e) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0001d089) main_usb_pane_t_ParamLimits

0xa8e0,	// (0x000183c1) aid_text_placing

0x2dba,	// (0x0001089b) main_location2_pane_t1_ParamLimits

0x2dd0,	// (0x000108b1) main_location2_pane_t2_ParamLimits

0x2de6,	// (0x000108c7) main_location2_pane_t3_ParamLimits

0x2dfc,	// (0x000108dd) main_location2_pane_t4_ParamLimits

0x2dfc,	// (0x000108dd) main_location2_pane_t4

0xf3b4,	// (0x0001ce95) main_location2_pane_t_ParamLimits

0x9c68,	// (0x00017749) find_pinb_pane_g2_ParamLimits

0x9c68,	// (0x00017749) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0001cbe5) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0001cbe5) find_pinb_pane_g

0x9c74,	// (0x00017755) find_pinb_pane_t1_ParamLimits

0x9c86,	// (0x00017767) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0001cbea) find_pinb_pane_t_ParamLimits

0x99d1,	// (0x000174b2) main_call3_pane

0x2412,	// (0x0000fef3) cale_month_day_heading_pane_t1_ParamLimits

0x2498,	// (0x0000ff79) cale_month_day_heading_pane_t2_ParamLimits

0x2529,	// (0x0001000a) cale_month_day_heading_pane_t3_ParamLimits

0x25ba,	// (0x0001009b) cale_month_day_heading_pane_t4_ParamLimits

0x264b,	// (0x0001012c) cale_month_day_heading_pane_t5_ParamLimits

0x26dc,	// (0x000101bd) cale_month_day_heading_pane_t6_ParamLimits

0x276d,	// (0x0001024e) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0001cd6c) cale_month_day_heading_pane_t_ParamLimits

0x29f3,	// (0x000104d4) smil_status_volume_pane

0x3458,	// (0x00010f39) postcard_address_pane_ParamLimits

0x3458,	// (0x00010f39) postcard_address_pane

0x346a,	// (0x00010f4b) postcard_message_pane_ParamLimits

0x346a,	// (0x00010f4b) postcard_message_pane

0x38ad,	// (0x0001138e) call2_cli_visual_pane_t1_ParamLimits

0x38ad,	// (0x0001138e) call2_cli_visual_pane_t1

0x3ff7,	// (0x00011ad8) postcard_message_pane_t1_ParamLimits

0x3ff7,	// (0x00011ad8) postcard_message_pane_t1

0x3fe0,	// (0x00011ac1) postcard_address_pane_t1_ParamLimits

0x3fe0,	// (0x00011ac1) postcard_address_pane_t1

0x3fce,	// (0x00011aaf) popup_call3_audio_in_window_ParamLimits

0x3fce,	// (0x00011aaf) popup_call3_audio_in_window

0x3e5d,	// (0x0001193e) bg_popup_call3_in_pane_ParamLimits

0x3e5d,	// (0x0001193e) bg_popup_call3_in_pane

0x3ecf,	// (0x000119b0) popup_call3_audio_in_window_g1_ParamLimits

0x3ecf,	// (0x000119b0) popup_call3_audio_in_window_g1

0x3eef,	// (0x000119d0) popup_call3_audio_in_window_g2_ParamLimits

0x3eef,	// (0x000119d0) popup_call3_audio_in_window_g2

0x3f0f,	// (0x000119f0) popup_call3_audio_in_window_g3_ParamLimits

0x3f0f,	// (0x000119f0) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0001d0eb) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0001d0eb) popup_call3_audio_in_window_g

0x3f40,	// (0x00011a21) popup_call3_audio_in_window_t1_ParamLimits

0x3f40,	// (0x00011a21) popup_call3_audio_in_window_t1

0x3f7e,	// (0x00011a5f) popup_call3_audio_in_window_t2_ParamLimits

0x3f7e,	// (0x00011a5f) popup_call3_audio_in_window_t2

0x3fbc,	// (0x00011a9d) popup_call3_audio_in_window_t3_ParamLimits

0x3fbc,	// (0x00011a9d) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0001d0f4) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0001d0f4) popup_call3_audio_in_window_t

0x9f86,	// (0x00017a67) bg_popup_call3_rect_pane

0xbd1b,	// (0x000197fc) bg_popup_call3_rect_pane_g1

0x9e62,	// (0x00017943) bg_popup_call3_rect_pane_g2

0xbd23,	// (0x00019804) bg_popup_call3_rect_pane_g3

0xbd2b,	// (0x0001980c) bg_popup_call3_rect_pane_g4

0xbd33,	// (0x00019814) bg_popup_call3_rect_pane_g5

0xbd3b,	// (0x0001981c) bg_popup_call3_rect_pane_g6

0xbd43,	// (0x00019824) bg_popup_call3_rect_pane_g7

0x3123,	// (0x00010c04) mup_visualizer_osc_pane

0xab1d,	// (0x000185fe) mup_visualizer_spec_pane

0x3e8d,	// (0x0001196e) call3_video_qcif_pane_ParamLimits

0x3e8d,	// (0x0001196e) call3_video_qcif_pane

0x3e9e,	// (0x0001197f) call3_video_qcif_uncrop_pane_ParamLimits

0x3e9e,	// (0x0001197f) call3_video_qcif_uncrop_pane

0x3eaa,	// (0x0001198b) call3_video_subqcif_pane_ParamLimits

0x3eaa,	// (0x0001198b) call3_video_subqcif_pane

0x3ebe,	// (0x0001199f) call3_video_subqcif_uncrop_pane_ParamLimits

0x3ebe,	// (0x0001199f) call3_video_subqcif_uncrop_pane

0x3f2f,	// (0x00011a10) popup_call3_audio_in_window_g4_ParamLimits

0x3f2f,	// (0x00011a10) popup_call3_audio_in_window_g4

0x3e4c,	// (0x0001192d) mup_spec_half_pane

0x3e55,	// (0x00011936) mup_spec_half_pane_cp

0xc01a,	// (0x00019afb) mup_osc_middle_pane

0xc023,	// (0x00019b04) mup_visualizer_osc_pane_g1

0x3e2d,	// (0x0001190e) mup_spec_bar_pane_ParamLimits

0x3e2d,	// (0x0001190e) mup_spec_bar_pane

0xc007,	// (0x00019ae8) mup_spec_bar_pane_g1

0xc011,	// (0x00019af2) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0001d0df) mup_spec_bar_pane_g

0x11e4,	// (0x0000ecc5) aid_cale_week_size_cell_pane_ParamLimits

0x11fe,	// (0x0000ecdf) bg_cale_heading_pane_ParamLimits

0x9ee8,	// (0x000179c9) bg_cale_pane_cp01_ParamLimits

0x1216,	// (0x0000ecf7) cale_week_corner_pane_ParamLimits

0x1235,	// (0x0000ed16) cale_week_day_heading_pane_ParamLimits

0x1252,	// (0x0000ed33) cale_week_scroll_pane_g1_ParamLimits

0x1265,	// (0x0000ed46) cale_week_scroll_pane_g2_ParamLimits

0x127d,	// (0x0000ed5e) cale_week_scroll_pane_g3_ParamLimits

0x1295,	// (0x0000ed76) cale_week_scroll_pane_g4_ParamLimits

0x12ad,	// (0x0000ed8e) cale_week_scroll_pane_g5_ParamLimits

0x12c5,	// (0x0000eda6) cale_week_scroll_pane_g6_ParamLimits

0x12dd,	// (0x0000edbe) cale_week_scroll_pane_g7_ParamLimits

0x12f5,	// (0x0000edd6) cale_week_scroll_pane_g8_ParamLimits

0x1311,	// (0x0000edf2) cale_week_scroll_pane_g9_ParamLimits

0x1329,	// (0x0000ee0a) cale_week_scroll_pane_g10_ParamLimits

0x1341,	// (0x0000ee22) cale_week_scroll_pane_g11_ParamLimits

0x1359,	// (0x0000ee3a) cale_week_scroll_pane_g12_ParamLimits

0x1371,	// (0x0000ee52) cale_week_scroll_pane_g13_ParamLimits

0x1389,	// (0x0000ee6a) cale_week_scroll_pane_g14_ParamLimits

0x13a1,	// (0x0000ee82) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0001cc76) cale_week_scroll_pane_g_ParamLimits

0x13d5,	// (0x0000eeb6) cale_week_time_pane_ParamLimits

0x13f1,	// (0x0000eed2) grid_cale_week_pane_ParamLimits

0x9f05,	// (0x000179e6) listscroll_cale_week_pane_t1

0x9f17,	// (0x000179f8) scroll_pane_cp08_ParamLimits

0x206c,	// (0x0000fb4d) cale_month_corner_pane_ParamLimits

0xa308,	// (0x00017de9) cale_month_pane_t1

0x23c8,	// (0x0000fea9) cale_month_week_pane_ParamLimits

0x2c09,	// (0x000106ea) popup_call_status_window_g1_ParamLimits

0x2c1d,	// (0x000106fe) popup_call_status_window_g2_ParamLimits

0x2c31,	// (0x00010712) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0001ce1c) popup_call_status_window_g_ParamLimits

0xa6b7,	// (0x00018198) aid_call2_pane

0x3329,	// (0x00010e0a) msg_header_pane_g1

0x3458,	// (0x00010f39) postcard_address2_pane_ParamLimits

0x3458,	// (0x00010f39) postcard_address2_pane

0x346a,	// (0x00010f4b) postcard_message2_pane_ParamLimits

0x346a,	// (0x00010f4b) postcard_message2_pane

0x3de9,	// (0x000118ca) message2_row_pane_ParamLimits

0x3de9,	// (0x000118ca) message2_row_pane

0x3e03,	// (0x000118e4) address2_row_pane_ParamLimits

0x3e03,	// (0x000118e4) address2_row_pane

0xbfd5,	// (0x00019ab6) postcard_message2_row_pane_g1

0xbfdd,	// (0x00019abe) postcard_message2_row_pane_t1

0xbfd5,	// (0x00019ab6) address2_row_pane_g1

0xbfdd,	// (0x00019abe) address2_row_pane_t1

0x17ee,	// (0x0000f2cf) aid_size_cell_vorec

0x99d1,	// (0x000174b2) main_rss_pane

0x3e16,	// (0x000118f7) rss_list_single_pane_ParamLimits

0x3e16,	// (0x000118f7) rss_list_single_pane

0xbfeb,	// (0x00019acc) rss_list_single_pane_t1

0xbff9,	// (0x00019ada) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0001d0da) rss_list_single_pane_t

0x99d1,	// (0x000174b2) main_camera2_pane

0x99d1,	// (0x000174b2) main_video2_pane

0x4050,	// (0x00011b31) cams_zoom_pane_cp2_ParamLimits

0x4050,	// (0x00011b31) cams_zoom_pane_cp2

0x4067,	// (0x00011b48) image2_vga_pane_ParamLimits

0x4067,	// (0x00011b48) image2_vga_pane

0x409d,	// (0x00011b7e) main_camera2_pane_g1_ParamLimits

0x409d,	// (0x00011b7e) main_camera2_pane_g1

0x40bd,	// (0x00011b9e) main_camera2_pane_g2_ParamLimits

0x40bd,	// (0x00011b9e) main_camera2_pane_g2

0x40d4,	// (0x00011bb5) main_camera2_pane_g3_ParamLimits

0x40d4,	// (0x00011bb5) main_camera2_pane_g3

0x40eb,	// (0x00011bcc) main_camera2_pane_g4_ParamLimits

0x40eb,	// (0x00011bcc) main_camera2_pane_g4

0x4102,	// (0x00011be3) main_camera2_pane_g5_ParamLimits

0x4102,	// (0x00011be3) main_camera2_pane_g5

0x4119,	// (0x00011bfa) main_camera2_pane_g6_ParamLimits

0x4119,	// (0x00011bfa) main_camera2_pane_g6

0x4130,	// (0x00011c11) main_camera2_pane_g7_ParamLimits

0x4130,	// (0x00011c11) main_camera2_pane_g7

0x4147,	// (0x00011c28) main_camera2_pane_g8_ParamLimits

0x4147,	// (0x00011c28) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0001d0fb) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0001d0fb) main_camera2_pane_g

0x4175,	// (0x00011c56) main_camera2_pane_t1_ParamLimits

0x4175,	// (0x00011c56) main_camera2_pane_t1

0x41a4,	// (0x00011c85) main_camera2_pane_t2_ParamLimits

0x41a4,	// (0x00011c85) main_camera2_pane_t2

0x41c1,	// (0x00011ca2) main_camera2_pane_t3_ParamLimits

0x41c1,	// (0x00011ca2) main_camera2_pane_t3

0x420d,	// (0x00011cee) main_camera2_pane_t4_ParamLimits

0x420d,	// (0x00011cee) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0001d10e) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0001d10e) main_camera2_pane_t

0x4282,	// (0x00011d63) cams_zoom_pane_cp4_ParamLimits

0x4282,	// (0x00011d63) cams_zoom_pane_cp4

0x4298,	// (0x00011d79) image2_cif_pane_ParamLimits

0x4298,	// (0x00011d79) image2_cif_pane

0x42bb,	// (0x00011d9c) image2_subqcif_pane_ParamLimits

0x42bb,	// (0x00011d9c) image2_subqcif_pane

0x42d1,	// (0x00011db2) main_video2_pane_g1_ParamLimits

0x42d1,	// (0x00011db2) main_video2_pane_g1

0x42eb,	// (0x00011dcc) main_video2_pane_g2_ParamLimits

0x42eb,	// (0x00011dcc) main_video2_pane_g2

0x4301,	// (0x00011de2) main_video2_pane_g3_ParamLimits

0x4301,	// (0x00011de2) main_video2_pane_g3

0x4317,	// (0x00011df8) main_video2_pane_g4_ParamLimits

0x4317,	// (0x00011df8) main_video2_pane_g4

0x432d,	// (0x00011e0e) main_video2_pane_g5_ParamLimits

0x432d,	// (0x00011e0e) main_video2_pane_g5

0x4343,	// (0x00011e24) main_video2_pane_g6_ParamLimits

0x4343,	// (0x00011e24) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0001d11d) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0001d11d) main_video2_pane_g

0x435d,	// (0x00011e3e) main_video2_pane_t1_ParamLimits

0x435d,	// (0x00011e3e) main_video2_pane_t1

0x4381,	// (0x00011e62) main_video2_pane_t2_ParamLimits

0x4381,	// (0x00011e62) main_video2_pane_t2

0x43cb,	// (0x00011eac) main_video2_pane_t3_ParamLimits

0x43cb,	// (0x00011eac) main_video2_pane_t3

0x0002,

0xf649,	// (0x0001d12a) main_video2_pane_t_ParamLimits

0xf649,	// (0x0001d12a) main_video2_pane_t

0x39ec,	// (0x000114cd) call_muted_g2

0x0001,

0xf5eb,	// (0x0001d0cc) call_muted_g

0x99d1,	// (0x000174b2) main_mup2_pane

0x440d,	// (0x00011eee) main_mup2_pane_g1_ParamLimits

0x440d,	// (0x00011eee) main_mup2_pane_g1

0x4419,	// (0x00011efa) main_mup2_pane_g2_ParamLimits

0x4419,	// (0x00011efa) main_mup2_pane_g2

0xc186,	// (0x00019c67) main_mup_pane_g13_cp1

0xc18e,	// (0x00019c6f) mup_volume_pane_cp1

0x4435,	// (0x00011f16) main_mup2_pane_g4_ParamLimits

0x4435,	// (0x00011f16) main_mup2_pane_g4

0x4445,	// (0x00011f26) main_mup2_pane_g5_ParamLimits

0x4445,	// (0x00011f26) main_mup2_pane_g5

0x4455,	// (0x00011f36) main_mup2_pane_g6_ParamLimits

0x4455,	// (0x00011f36) main_mup2_pane_g6

0x4465,	// (0x00011f46) main_mup2_pane_g7_ParamLimits

0x4465,	// (0x00011f46) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0001d131) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0001d131) main_mup2_pane_g

0x447d,	// (0x00011f5e) main_mup2_pane_t1_ParamLimits

0x447d,	// (0x00011f5e) main_mup2_pane_t1

0x4493,	// (0x00011f74) main_mup2_pane_t2_ParamLimits

0x4493,	// (0x00011f74) main_mup2_pane_t2

0x44a9,	// (0x00011f8a) main_mup2_pane_t3_ParamLimits

0x44a9,	// (0x00011f8a) main_mup2_pane_t3

0x44bf,	// (0x00011fa0) main_mup2_pane_t4_ParamLimits

0x44bf,	// (0x00011fa0) main_mup2_pane_t4

0x44d7,	// (0x00011fb8) main_mup2_pane_t5_ParamLimits

0x44d7,	// (0x00011fb8) main_mup2_pane_t5

0x44ef,	// (0x00011fd0) main_mup2_pane_t6_ParamLimits

0x44ef,	// (0x00011fd0) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0001d140) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0001d140) main_mup2_pane_t

0x451f,	// (0x00012000) mup2_visualizer_pane_ParamLimits

0x451f,	// (0x00012000) mup2_visualizer_pane

0x454a,	// (0x0001202b) mup_progress_pane_cp_ParamLimits

0x454a,	// (0x0001202b) mup_progress_pane_cp

0xc168,	// (0x00019c49) mup_volume_pane_cp_ParamLimits

0xc168,	// (0x00019c49) mup_volume_pane_cp

0x455e,	// (0x0001203f) mup2_visualizer_pane_g1_ParamLimits

0x455e,	// (0x0001203f) mup2_visualizer_pane_g1

0xc0a7,	// (0x00019b88) mup2_visualizer_pane_g2_ParamLimits

0xc0a7,	// (0x00019b88) mup2_visualizer_pane_g2

0x4573,	// (0x00012054) mup2_visualizer_pane_g3_ParamLimits

0x4573,	// (0x00012054) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0001d14d) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0001d14d) mup2_visualizer_pane_g

0xae01,	// (0x000188e2) aid_size_cell_fmradio

0x3b48,	// (0x00011629) aid_height_parent_landcape

0xa165,	// (0x00017c46) wml_content_pane_cp

0xa16d,	// (0x00017c4e) wml_tabs_pane

0xa176,	// (0x00017c57) popup_wml_miniature_window

0xa17e,	// (0x00017c5f) scroll_pane_cp021

0xa192,	// (0x00017c73) wml_content_pane_comp8

0x99d1,	// (0x000174b2) bg_popup_sub_pane_cp05

0xc0c5,	// (0x00019ba6) popup_wml_miniature_window_g1

0xc0cd,	// (0x00019bae) wml_miniature_view_pane

0x457f,	// (0x00012060) aid_size_wml_view

0x4587,	// (0x00012068) wml_miniature_view_pane_g1

0x4590,	// (0x00012071) wml_miniature_view_pane_g2

0x4599,	// (0x0001207a) wml_miniature_view_pane_g3

0x45a1,	// (0x00012082) wml_miniature_view_pane_g4

0x45a9,	// (0x0001208a) wml_miniature_view_pane_g5

0x45b1,	// (0x00012092) wml_miniature_view_pane_g6

0x45b9,	// (0x0001209a) wml_miniature_view_pane_g7

0x45c1,	// (0x000120a2) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0001d154) wml_miniature_view_pane_g

0xc0d5,	// (0x00019bb6) background_graphic_ParamLimits

0xc0d5,	// (0x00019bb6) background_graphic

0xc0e1,	// (0x00019bc2) wml_tabs_2_pane

0xc0ea,	// (0x00019bcb) wml_tabs_3_pane_ParamLimits

0xc0ea,	// (0x00019bcb) wml_tabs_3_pane

0xc0fc,	// (0x00019bdd) wml_tabs_4_pane_ParamLimits

0xc0fc,	// (0x00019bdd) wml_tabs_4_pane

0xc112,	// (0x00019bf3) wml_tabs_5_pane_ParamLimits

0xc112,	// (0x00019bf3) wml_tabs_5_pane

0xc12c,	// (0x00019c0d) wml_tabs_pane_g2_ParamLimits

0xc12c,	// (0x00019c0d) wml_tabs_pane_g2

0xc140,	// (0x00019c21) wml_tabs_pane_g3_ParamLimits

0xc140,	// (0x00019c21) wml_tabs_pane_g3

0x45c9,	// (0x000120aa) wml_tabs_2_active_pane_ParamLimits

0x45c9,	// (0x000120aa) wml_tabs_2_active_pane

0x45d9,	// (0x000120ba) wml_tabs_2_passive_pane_ParamLimits

0x45d9,	// (0x000120ba) wml_tabs_2_passive_pane

0x45e9,	// (0x000120ca) wml_tabs_3_active_pane_cp_ParamLimits

0x45e9,	// (0x000120ca) wml_tabs_3_active_pane_cp

0x45fa,	// (0x000120db) wml_tabs_3_passive_pane_ParamLimits

0x45fa,	// (0x000120db) wml_tabs_3_passive_pane

0x460b,	// (0x000120ec) wml_tabs_3_passive_pane_cp_ParamLimits

0x460b,	// (0x000120ec) wml_tabs_3_passive_pane_cp

0x461c,	// (0x000120fd) tabs_4_active_pane

0x4624,	// (0x00012105) tabs_4_passive_pane

0x462c,	// (0x0001210d) tabs_4_passive_pane_cp

0x4634,	// (0x00012115) tabs_4_passive_pane_cp2

0x38c7,	// (0x000113a8) aid_height_text

0x30f9,	// (0x00010bda) mup_volume_cont_pane_ParamLimits

0x30f9,	// (0x00010bda) mup_volume_cont_pane

0x0e3c,	// (0x0000e91d) aid_size_cell_pinb

0x0e46,	// (0x0000e927) aid_size_list_pinb

0x4536,	// (0x00012017) mup2_volume_cont_pane_ParamLimits

0x4536,	// (0x00012017) mup2_volume_cont_pane

0xc154,	// (0x00019c35) mup2_volume_cont_pane_g1_ParamLimits

0xc154,	// (0x00019c35) mup2_volume_cont_pane_g1

0x0b58,	// (0x0000e639) aid_size_cell_touch_ParamLimits

0x0b58,	// (0x0000e639) aid_size_cell_touch

0x0d44,	// (0x0000e825) touch_pane_ParamLimits

0x0d44,	// (0x0000e825) touch_pane

0x955f,	// (0x00017040) main_rss2_pane

0xc196,	// (0x00019c77) listscroll_rss2_pane

0xc19f,	// (0x00019c80) rss2_navigation_pane

0xc1a7,	// (0x00019c88) list_rss2_pane

0xa85d,	// (0x0001833e) scroll_pane_cp22

0xc1af,	// (0x00019c90) rss2_navigation_pane_g1

0xc1b8,	// (0x00019c99) rss2_navigation_pane_g2

0xc1c0,	// (0x00019ca1) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0001d165) rss2_navigation_pane_g

0xc1c8,	// (0x00019ca9) rss2_navigation_pane_t1

0x463c,	// (0x0001211d) rss2_list_single_pane_ParamLimits

0x463c,	// (0x0001211d) rss2_list_single_pane

0xc1d6,	// (0x00019cb7) rss2_list_single_pane_t2

0xc1e4,	// (0x00019cc5) rss2_list_single_pane_t3_ParamLimits

0xc1e4,	// (0x00019cc5) rss2_list_single_pane_t3

0xc201,	// (0x00019ce2) rss2_list_single_pane_t4

0x29dd,	// (0x000104be) smil_status_pane_g1

0x95b2,	// (0x00017093) main_image2_pane_ParamLimits

0x95b2,	// (0x00017093) main_image2_pane

0x415e,	// (0x00011c3f) main_camera2_pane_g9_ParamLimits

0x415e,	// (0x00011c3f) main_camera2_pane_g9

0x4250,	// (0x00011d31) main_camera2_pane_t5_ParamLimits

0x4250,	// (0x00011d31) main_camera2_pane_t5

0xc07c,	// (0x00019b5d) main_camera2_pane_t6_ParamLimits

0xc07c,	// (0x00019b5d) main_camera2_pane_t6

0x4650,	// (0x00012131) main_image2_pane_g1_ParamLimits

0x4650,	// (0x00012131) main_image2_pane_g1

0x367f,	// (0x00011160) smil2_video_pane_ParamLimits

0x367f,	// (0x00011160) smil2_video_pane

0x9579,	// (0x0001705a) aid_zoom_text_primary_cp

0x95aa,	// (0x0001708b) popup_preview_fixed_window

0xa0bf,	// (0x00017ba0) im_reading_pane_g1

0x4044,	// (0x00011b25) cams2_bc_adjust_pane_cp_ParamLimits

0x4044,	// (0x00011b25) cams2_bc_adjust_pane_cp

0x4276,	// (0x00011d57) cams2_bc_adjust_pane_ParamLimits

0x4276,	// (0x00011d57) cams2_bc_adjust_pane

0xc20f,	// (0x00019cf0) cams2_bc_adjust_pane_g1

0xc217,	// (0x00019cf8) cams2_slider_pane

0xc220,	// (0x00019d01) cams2_slider_pane_g1

0xc229,	// (0x00019d0a) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0001d16c) cams2_slider_pane_g

0x0f26,	// (0x0000ea07) calc_display_pane_ParamLimits

0x0f42,	// (0x0000ea23) calc_paper_pane_ParamLimits

0x0f63,	// (0x0000ea44) grid_calc_pane_ParamLimits

0xa719,	// (0x000181fa) popup_clock_digital_window_t1_ParamLimits

0xad9e,	// (0x0001887f) main_image_pane_t1

0x0f08,	// (0x0000e9e9) aid_size_cell_calc_ParamLimits

0x0f08,	// (0x0000e9e9) aid_size_cell_calc

0x3b78,	// (0x00011659) popup_blid_sat_info2_window_ParamLimits

0x3b78,	// (0x00011659) popup_blid_sat_info2_window

0xc24b,	// (0x00019d2c) aid_size_cell_blid

0xc253,	// (0x00019d34) bg_popup_window_pane_cp07

0xc276,	// (0x00019d57) grid_popup_blid_pane

0xc27e,	// (0x00019d5f) heading_pane_cp05_ParamLimits

0xc27e,	// (0x00019d5f) heading_pane_cp05

0xc346,	// (0x00019e27) cell_popup_blid_pane_ParamLimits

0xc346,	// (0x00019e27) cell_popup_blid_pane

0xc366,	// (0x00019e47) cell_popup_blid_pane_g1

0xc36e,	// (0x00019e4f) cell_popup_blid_pane_t1

0x4509,	// (0x00011fea) mup2_indicator_pane_ParamLimits

0x4509,	// (0x00011fea) mup2_indicator_pane

0x9f86,	// (0x00017a67) mup2_visualizer_osc_pane

0xc0b3,	// (0x00019b94) mup2_visualizer_spec_pane_ParamLimits

0xc0b3,	// (0x00019b94) mup2_visualizer_spec_pane

0x4664,	// (0x00012145) mup2_spec_half_pane

0x466d,	// (0x0001214e) mup2_spec_half_pane_cp

0x4675,	// (0x00012156) mup2_spec_bar_pane_ParamLimits

0x4675,	// (0x00012156) mup2_spec_bar_pane

0xc007,	// (0x00019ae8) mup2_spec_bar_pane_g1

0xc011,	// (0x00019af2) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0001d0df) mup2_spec_bar_pane_g

0x4694,	// (0x00012175) mup2_osc_middle_pane

0xc023,	// (0x00019b04) mup2_visualizer_osc_pane_g1

0x95e0,	// (0x000170c1) popup_number_entry_window_t1_ParamLimits

0x95f3,	// (0x000170d4) popup_number_entry_window_t2_ParamLimits

0x9605,	// (0x000170e6) popup_number_entry_window_t3_ParamLimits

0x0d8c,	// (0x0000e86d) popup_number_entry_window_t5_ParamLimits

0x0d8c,	// (0x0000e86d) popup_number_entry_window_t5

0xf0af,	// (0x0001cb90) popup_number_entry_window_t_ParamLimits

0x9617,	// (0x000170f8) text_title_cp2_ParamLimits

0xac78,	// (0x00018759) aid_hotspot_pointer_text2_pane

0xac9e,	// (0x0001877f) main_viewer_pane_g9_ParamLimits

0xac9e,	// (0x0001877f) main_viewer_pane_g9

0xa308,	// (0x00017de9) cale_month_pane_t1_ParamLimits

0xa35c,	// (0x00017e3d) bg_cale_pane_ParamLimits

0xa374,	// (0x00017e55) list_cale_pane_ParamLimits

0xa385,	// (0x00017e66) listscroll_cale_day_pane_t1

0xa397,	// (0x00017e78) scroll_pane_cp09_ParamLimits

0x312b,	// (0x00010c0c) main_mup_eq_pane_t1_ParamLimits

0x312b,	// (0x00010c0c) main_mup_eq_pane_t1

0x3143,	// (0x00010c24) main_mup_eq_pane_t2_ParamLimits

0x3143,	// (0x00010c24) main_mup_eq_pane_t2

0x3159,	// (0x00010c3a) main_mup_eq_pane_t3_ParamLimits

0x3159,	// (0x00010c3a) main_mup_eq_pane_t3

0x316f,	// (0x00010c50) main_mup_eq_pane_t4_ParamLimits

0x316f,	// (0x00010c50) main_mup_eq_pane_t4

0x3185,	// (0x00010c66) main_mup_eq_pane_t5_ParamLimits

0x3185,	// (0x00010c66) main_mup_eq_pane_t5

0x319b,	// (0x00010c7c) main_mup_eq_pane_t6_ParamLimits

0x319b,	// (0x00010c7c) main_mup_eq_pane_t6

0x31ad,	// (0x00010c8e) main_mup_eq_pane_t7_ParamLimits

0x31ad,	// (0x00010c8e) main_mup_eq_pane_t7

0x31bf,	// (0x00010ca0) main_mup_eq_pane_t8_ParamLimits

0x31bf,	// (0x00010ca0) main_mup_eq_pane_t8

0x31d1,	// (0x00010cb2) main_mup_eq_pane_t9_ParamLimits

0x31d1,	// (0x00010cb2) main_mup_eq_pane_t9

0x31e7,	// (0x00010cc8) main_mup_eq_pane_t10_ParamLimits

0x31e7,	// (0x00010cc8) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0001cf1b) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0001cf1b) main_mup_eq_pane_t

0x327a,	// (0x00010d5b) mup_equalizer_pane_cp5_ParamLimits

0x328c,	// (0x00010d6d) mup_equalizer_pane_cp6_ParamLimits

0x329e,	// (0x00010d7f) mup_equalizer_pane_cp7_ParamLimits

0x955f,	// (0x00017040) main_gallery_pane

0xc02c,	// (0x00019b0d) smil2_volume_pane

0xc034,	// (0x00019b15) smil_status_volume_pane_g1_ParamLimits

0xc047,	// (0x00019b28) smil_status_volume_pane_g2_ParamLimits

0xc05a,	// (0x00019b3b) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0001d0e4) smil_status_volume_pane_g_ParamLimits

0xc253,	// (0x00019d34) bg_popup_window_pane_cp07_ParamLimits

0xc261,	// (0x00019d42) blid_firmament_pane

0x469d,	// (0x0001217e) aid_size_cell_gallery_ParamLimits

0x469d,	// (0x0001217e) aid_size_cell_gallery

0x46b3,	// (0x00012194) grid_gallery_pane_ParamLimits

0x46b3,	// (0x00012194) grid_gallery_pane

0x46c7,	// (0x000121a8) cell_gallery_pane_ParamLimits

0x46c7,	// (0x000121a8) cell_gallery_pane

0xc37c,	// (0x00019e5d) bg_cell_gallery_focus_pane_ParamLimits

0xc37c,	// (0x00019e5d) bg_cell_gallery_focus_pane

0xc38e,	// (0x00019e6f) cell_gallery_pane_g1_ParamLimits

0xc38e,	// (0x00019e6f) cell_gallery_pane_g1

0x470e,	// (0x000121ef) cell_gallery_pane_g2_ParamLimits

0x470e,	// (0x000121ef) cell_gallery_pane_g2

0x471b,	// (0x000121fc) cell_gallery_pane_g3_ParamLimits

0x471b,	// (0x000121fc) cell_gallery_pane_g3

0xc39a,	// (0x00019e7b) cell_gallery_pane_g4_ParamLimits

0xc39a,	// (0x00019e7b) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0001d192) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0001d192) cell_gallery_pane_g

0xc3a6,	// (0x00019e87) bg_cell_gallery_focus_pane_g1

0xc3ae,	// (0x00019e8f) bg_cell_gallery_focus_pane_g2

0xc3b6,	// (0x00019e97) bg_cell_gallery_focus_pane_g3

0xc3be,	// (0x00019e9f) bg_cell_gallery_focus_pane_g4

0xc3c6,	// (0x00019ea7) bg_cell_gallery_focus_pane_g5

0xc3ce,	// (0x00019eaf) bg_cell_gallery_focus_pane_g6

0xc3d6,	// (0x00019eb7) bg_cell_gallery_focus_pane_g7

0xc3de,	// (0x00019ebf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0001d19b) bg_cell_gallery_focus_pane_g

0xc3e6,	// (0x00019ec7) aid_firma_cardinal

0xc3fa,	// (0x00019edb) blid_firmament_pane_t1

0xc411,	// (0x00019ef2) blid_firmament_pane_t2

0xc428,	// (0x00019f09) blid_firmament_pane_t3

0xc43f,	// (0x00019f20) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0001d1ac) blid_firmament_pane_t

0xc456,	// (0x00019f37) blid_sat_info_pane

0xc466,	// (0x00019f47) blid_sat_info_pane_g1

0xc466,	// (0x00019f47) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0001d1b5) blid_sat_info_pane_g

0xc470,	// (0x00019f51) blid_sat_info_pane_t1

0xc47e,	// (0x00019f5f) smil2_volume_content_pane

0xc487,	// (0x00019f68) smil2_volume_pane_g1

0xc48f,	// (0x00019f70) smil2_volume_content_pane_g1

0xc498,	// (0x00019f79) smil2_volume_content_pane_g2

0xc4a1,	// (0x00019f82) smil2_volume_content_pane_g3

0xc4aa,	// (0x00019f8b) smil2_volume_content_pane_g4

0xc4b3,	// (0x00019f94) smil2_volume_content_pane_g5

0xc4bc,	// (0x00019f9d) smil2_volume_content_pane_g6

0xc4c5,	// (0x00019fa6) smil2_volume_content_pane_g7

0xc4ce,	// (0x00019faf) smil2_volume_content_pane_g8

0xc4d7,	// (0x00019fb8) smil2_volume_content_pane_g9

0xc4e0,	// (0x00019fc1) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0001d1ba) smil2_volume_content_pane_g

0x1485,	// (0x0000ef66) cale_week_day_heading_pane_t1_ParamLimits

0x14af,	// (0x0000ef90) cale_week_day_heading_pane_t2_ParamLimits

0x14de,	// (0x0000efbf) cale_week_day_heading_pane_t3_ParamLimits

0x150d,	// (0x0000efee) cale_week_day_heading_pane_t4_ParamLimits

0x153c,	// (0x0000f01d) cale_week_day_heading_pane_t5_ParamLimits

0x156b,	// (0x0000f04c) cale_week_day_heading_pane_t6_ParamLimits

0x159a,	// (0x0000f07b) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0001cc97) cale_week_day_heading_pane_t_ParamLimits

0x9f34,	// (0x00017a15) bg_cale_side_pane_ParamLimits

0x15c4,	// (0x0000f0a5) cale_week_time_pane_t1_ParamLimits

0x15fe,	// (0x0000f0df) cale_week_time_pane_t2_ParamLimits

0x1638,	// (0x0000f119) cale_week_time_pane_t3_ParamLimits

0x1672,	// (0x0000f153) cale_week_time_pane_t4_ParamLimits

0x16ac,	// (0x0000f18d) cale_week_time_pane_t5_ParamLimits

0x16e6,	// (0x0000f1c7) cale_week_time_pane_t6_ParamLimits

0x1720,	// (0x0000f201) cale_week_time_pane_t7_ParamLimits

0x175a,	// (0x0000f23b) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0001cca6) cale_week_time_pane_t_ParamLimits

0x1794,	// (0x0000f275) cell_cale_week_pane_g2_ParamLimits

0x9f34,	// (0x00017a15) bg_cale_side_pane_cp01_ParamLimits

0x2802,	// (0x000102e3) cale_month_week_pane_t1_ParamLimits

0x281b,	// (0x000102fc) cale_month_week_pane_t2_ParamLimits

0x2834,	// (0x00010315) cale_month_week_pane_t3_ParamLimits

0x284d,	// (0x0001032e) cale_month_week_pane_t4_ParamLimits

0x2866,	// (0x00010347) cale_month_week_pane_t5_ParamLimits

0x287f,	// (0x00010360) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0001cd7b) cale_month_week_pane_t_ParamLimits

0xa31a,	// (0x00017dfb) cell_cale_month_pane_g1_ParamLimits

0x955f,	// (0x00017040) main_cale_event_viewer_pane

0x955f,	// (0x00017040) listscroll_cale_event_viewer_pane

0xc4e9,	// (0x00019fca) list_cale_ev_pane

0xc4f1,	// (0x00019fd2) scroll_pane_cp023

0x4728,	// (0x00012209) field_cale_ev_pane_ParamLimits

0x4728,	// (0x00012209) field_cale_ev_pane

0xc4fd,	// (0x00019fde) field_cale_ev_content_pane_ParamLimits

0xc4fd,	// (0x00019fde) field_cale_ev_content_pane

0xc509,	// (0x00019fea) field_cale_ev_pane_g1_ParamLimits

0xc509,	// (0x00019fea) field_cale_ev_pane_g1

0xc515,	// (0x00019ff6) field_cale_ev_pane_g2_ParamLimits

0xc515,	// (0x00019ff6) field_cale_ev_pane_g2

0xc52d,	// (0x0001a00e) field_cale_ev_pane_g3_ParamLimits

0xc52d,	// (0x0001a00e) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0001d1cf) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0001d1cf) field_cale_ev_pane_g

0xc545,	// (0x0001a026) field_cale_ev_pane_t1_ParamLimits

0xc545,	// (0x0001a026) field_cale_ev_pane_t1

0x4742,	// (0x00012223) field_cale_ev_content_pane_t1_ParamLimits

0x4742,	// (0x00012223) field_cale_ev_content_pane_t1

0xabcf,	// (0x000186b0) bg_button_pane_cp01

0x11d4,	// (0x0000ecb5) listscroll_cale_week_pane_ParamLimits

0x9edf,	// (0x000179c0) popup_toolbar_window_cp01

0x9f05,	// (0x000179e6) listscroll_cale_week_pane_t1_ParamLimits

0x11d4,	// (0x0000ecb5) listscroll_cale_day_pane_ParamLimits

0x9edf,	// (0x000179c0) popup_toolbar_window_cp02

0xa385,	// (0x00017e66) listscroll_cale_day_pane_t1_ParamLimits

0x11d4,	// (0x0000ecb5) main_cale_month_pane_ParamLimits

0xbfa5,	// (0x00019a86) popup_toolbar_window_cp03_ParamLimits

0xbfa5,	// (0x00019a86) popup_toolbar_window_cp03

0x3559,	// (0x0001103a) main_image_pane_g2_ParamLimits

0x3559,	// (0x0001103a) main_image_pane_g2

0x356a,	// (0x0001104b) main_image_pane_g3_ParamLimits

0x356a,	// (0x0001104b) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0001cfad) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0001cfad) main_image_pane_g

0xad9e,	// (0x0001887f) main_image_pane_t1_ParamLimits

0x357b,	// (0x0001105c) main_image_pane_t2_ParamLimits

0x357b,	// (0x0001105c) main_image_pane_t2

0x358d,	// (0x0001106e) main_image_pane_t3_ParamLimits

0x358d,	// (0x0001106e) main_image_pane_t3

0x35b5,	// (0x00011096) main_image_pane_t4_ParamLimits

0x35b5,	// (0x00011096) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0001cfb4) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0001cfb4) main_image_pane_t

0x35d5,	// (0x000110b6) popup_image_details_window_cp01

0x35dd,	// (0x000110be) popup_toobar_trans_pane_cp01_ParamLimits

0x35dd,	// (0x000110be) popup_toobar_trans_pane_cp01

0x3c41,	// (0x00011722) popup_image_details_window_ParamLimits

0x3c41,	// (0x00011722) popup_image_details_window

0xbf7a,	// (0x00019a5b) popup_image_focus_window

0x4012,	// (0x00011af3) camera2_autofocus_pane_ParamLimits

0x4012,	// (0x00011af3) camera2_autofocus_pane

0x955f,	// (0x00017040) bg_popup_sub_pane_cp06

0xc55c,	// (0x0001a03d) popup_image_focus_window_g1

0xc564,	// (0x0001a045) popup_image_focus_window_g2

0xc56c,	// (0x0001a04d) popup_image_focus_window_g3

0xc574,	// (0x0001a055) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0001d1d6) popup_image_focus_window_g

0xc57c,	// (0x0001a05d) popup_image_focus_window_t1

0xc58a,	// (0x0001a06b) popup_image_focus_window_t2

0xc599,	// (0x0001a07a) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0001d1df) popup_image_focus_window_t

0xc5a7,	// (0x0001a088) camera2_autofocus_pane_g1

0x95b2,	// (0x00017093) bg_tb_trans_pane_cp01

0xc5b5,	// (0x0001a096) popup_image_details_window_g1

0xc5c8,	// (0x0001a0a9) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0001d1f1) popup_image_details_window_g

0xc5f1,	// (0x0001a0d2) popup_image_details_window_t1

0xc603,	// (0x0001a0e4) popup_image_details_window_t2

0xc61c,	// (0x0001a0fd) popup_image_details_window_t3

0xc630,	// (0x0001a111) popup_image_details_window_t4

0xc64b,	// (0x0001a12c) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0001d1f8) popup_image_details_window_t

0x9ce5,	// (0x000177c6) bg_calc_paper_pane_ParamLimits

0x955f,	// (0x00017040) grid_highlight_pane_cp013

0x9cfd,	// (0x000177de) list_calc_pane_ParamLimits

0x9d0f,	// (0x000177f0) scroll_pane_cp024

0x9d17,	// (0x000177f8) bg_calc_display_pane_ParamLimits

0x9d23,	// (0x00017804) calc_display_pane_t1_ParamLimits

0x9d38,	// (0x00017819) calc_display_pane_t2_ParamLimits

0x9d4d,	// (0x0001782e) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0001cc17) calc_display_pane_t_ParamLimits

0x10e2,	// (0x0000ebc3) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0001cc34) cell_calc_pane_g

0x10eb,	// (0x0000ebcc) cell_calc_pane_t1

0x9dc4,	// (0x000178a5) grid_highlight_pane_cp02_ParamLimits

0x9dda,	// (0x000178bb) toolbar_button_pane_cp01_ParamLimits

0x9dda,	// (0x000178bb) toolbar_button_pane_cp01

0xade3,	// (0x000188c4) temp_image_control_pane_ParamLimits

0xade3,	// (0x000188c4) temp_image_control_pane

0x95b2,	// (0x00017093) main_mp3_pane

0xc665,	// (0x0001a146) temp_image_control_pane_g1_ParamLimits

0xc665,	// (0x0001a146) temp_image_control_pane_g1

0xc673,	// (0x0001a154) temp_image_control_pane_g2_ParamLimits

0xc673,	// (0x0001a154) temp_image_control_pane_g2

0xc685,	// (0x0001a166) temp_image_control_pane_g3_ParamLimits

0xc685,	// (0x0001a166) temp_image_control_pane_g3

0x478f,	// (0x00012270) temp_image_control_pane_g4_ParamLimits

0x478f,	// (0x00012270) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0001d203) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0001d203) temp_image_control_pane_g

0xc665,	// (0x0001a146) main_mp3_pane_g1

0x47a0,	// (0x00012281) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0001d20c) main_mp3_pane_g

0xc6c8,	// (0x0001a1a9) main_mp3_pane_t1

0x9fd0,	// (0x00017ab1) main_camera_pane_g8_ParamLimits

0x9fd0,	// (0x00017ab1) main_camera_pane_g8

0x1a3d,	// (0x0000f51e) main_video_pane_g7_ParamLimits

0x1a3d,	// (0x0000f51e) main_video_pane_g7

0xc095,	// (0x00019b76) main_camera2_pane_t7_ParamLimits

0xc095,	// (0x00019b76) main_camera2_pane_t7

0xa125,	// (0x00017c06) scroll_pane_cp025_ParamLimits

0xa125,	// (0x00017c06) scroll_pane_cp025

0xa139,	// (0x00017c1a) scroll_pane_cp026_ParamLimits

0xa139,	// (0x00017c1a) scroll_pane_cp026

0xa148,	// (0x00017c29) wml_content_pane_ParamLimits

0x955f,	// (0x00017040) main_touch_calib_pane

0x4862,	// (0x00012343) main_touch_calib_pane_g1

0x4874,	// (0x00012355) main_touch_calib_pane_g2

0x4886,	// (0x00012367) main_touch_calib_pane_g3

0x4898,	// (0x00012379) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0001d22a) main_touch_calib_pane_g

0x48aa,	// (0x0001238b) main_touch_calib_pane_t1

0x48c2,	// (0x000123a3) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0001d233) main_touch_calib_pane_t

0xa919,	// (0x000183fa) mup_progress_pane_cp02

0xa94e,	// (0x0001842f) navi_pane_g1

0xa9d9,	// (0x000184ba) navi_pane_mp_t3

0x95b2,	// (0x00017093) main_mp3_pane_ParamLimits

0x3d9a,	// (0x0001187b) navi_pane_ParamLimits

0xc665,	// (0x0001a146) main_mp3_pane_g1_ParamLimits

0x47a0,	// (0x00012281) main_mp3_pane_g2_ParamLimits

0x47ac,	// (0x0001228d) main_mp3_pane_g3_ParamLimits

0x47ac,	// (0x0001228d) main_mp3_pane_g3

0x47b8,	// (0x00012299) main_mp3_pane_g4_ParamLimits

0x47b8,	// (0x00012299) main_mp3_pane_g4

0xc695,	// (0x0001a176) main_mp3_pane_g5_ParamLimits

0xc695,	// (0x0001a176) main_mp3_pane_g5

0xc6a3,	// (0x0001a184) main_mp3_pane_g6_ParamLimits

0xc6a3,	// (0x0001a184) main_mp3_pane_g6

0xc6b0,	// (0x0001a191) main_mp3_pane_g7_ParamLimits

0xc6b0,	// (0x0001a191) main_mp3_pane_g7

0xc6bc,	// (0x0001a19d) main_mp3_pane_g8_ParamLimits

0xc6bc,	// (0x0001a19d) main_mp3_pane_g8

0xf72b,	// (0x0001d20c) main_mp3_pane_g_ParamLimits

0x47c4,	// (0x000122a5) main_mp3_pane_t2

0x47d2,	// (0x000122b3) main_mp3_pane_t3

0xc6d6,	// (0x0001a1b7) main_mp3_pane_t4

0xc6e4,	// (0x0001a1c5) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0001d21d) main_mp3_pane_t

0xc6f2,	// (0x0001a1d3) mup_progress_pane_cp01

0x9579,	// (0x0001705a) aid_zoom_text_secondary2

0xc4e9,	// (0x00019fca) list_cale_ev2_pane

0xc4f1,	// (0x00019fd2) scroll_pane_cp023_ParamLimits

0x4910,	// (0x000123f1) field_cale_ev2_pane_ParamLimits

0x4910,	// (0x000123f1) field_cale_ev2_pane

0xc6fa,	// (0x0001a1db) field_cale_ev2_pane_g1_ParamLimits

0xc6fa,	// (0x0001a1db) field_cale_ev2_pane_g1

0xc706,	// (0x0001a1e7) field_cale_ev2_pane_g2_ParamLimits

0xc706,	// (0x0001a1e7) field_cale_ev2_pane_g2

0xc71e,	// (0x0001a1ff) field_cale_ev2_pane_g3_ParamLimits

0xc71e,	// (0x0001a1ff) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0001d23e) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0001d23e) field_cale_ev2_pane_g

0xc742,	// (0x0001a223) field_cale_ev2_pane_t1_ParamLimits

0xc742,	// (0x0001a223) field_cale_ev2_pane_t1

0xc759,	// (0x0001a23a) field_cale_ev2_pane_t2_ParamLimits

0xc759,	// (0x0001a23a) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0001d247) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0001d247) field_cale_ev2_pane_t

0x3414,	// (0x00010ef5) main_postcard_pane_g5_ParamLimits

0x3414,	// (0x00010ef5) main_postcard_pane_g5

0x3428,	// (0x00010f09) main_postcard_pane_g6_ParamLimits

0x3428,	// (0x00010f09) main_postcard_pane_g6

0x181f,	// (0x0000f300) camera2_autofocus_pane_cp_ParamLimits

0x181f,	// (0x0000f300) camera2_autofocus_pane_cp

0x95b2,	// (0x00017093) main_mup3_pane

0x4966,	// (0x00012447) main_mup3_pane_g1_ParamLimits

0x4966,	// (0x00012447) main_mup3_pane_g1

0x4988,	// (0x00012469) main_mup3_pane_g2_ParamLimits

0x4988,	// (0x00012469) main_mup3_pane_g2

0x49fb,	// (0x000124dc) main_mup3_pane_g3_ParamLimits

0x49fb,	// (0x000124dc) main_mup3_pane_g3

0x4a39,	// (0x0001251a) main_mup3_pane_g4_ParamLimits

0x4a39,	// (0x0001251a) main_mup3_pane_g4

0x4a77,	// (0x00012558) main_mup3_pane_g5_ParamLimits

0x4a77,	// (0x00012558) main_mup3_pane_g5

0x4ab5,	// (0x00012596) main_mup3_pane_g6_ParamLimits

0x4ab5,	// (0x00012596) main_mup3_pane_g6

0xc76e,	// (0x0001a24f) main_mup3_pane_g7_ParamLimits

0xc76e,	// (0x0001a24f) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0001d257) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0001d257) main_mup3_pane_g

0x4b2b,	// (0x0001260c) main_mup3_pane_t1_ParamLimits

0x4b2b,	// (0x0001260c) main_mup3_pane_t1

0x4b91,	// (0x00012672) main_mup3_pane_t2_ParamLimits

0x4b91,	// (0x00012672) main_mup3_pane_t2

0x4c57,	// (0x00012738) main_mup3_pane_t4_ParamLimits

0x4c57,	// (0x00012738) main_mup3_pane_t4

0x4ca5,	// (0x00012786) main_mup3_pane_t5_ParamLimits

0x4ca5,	// (0x00012786) main_mup3_pane_t5

0x4d53,	// (0x00012834) main_mup3_pane_t6_ParamLimits

0x4d53,	// (0x00012834) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0001d268) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0001d268) main_mup3_pane_t

0x4e07,	// (0x000128e8) mup3_progress_pane_ParamLimits

0x4e07,	// (0x000128e8) mup3_progress_pane

0x4e83,	// (0x00012964) popup_mup3_control_window_ParamLimits

0x4e83,	// (0x00012964) popup_mup3_control_window

0xc77c,	// (0x0001a25d) popup_mup3_text_window

0x4eb1,	// (0x00012992) mup3_progress_pane_t1

0x4ecf,	// (0x000129b0) mup3_progress_pane_t2

0xc784,	// (0x0001a265) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0001d275) mup3_progress_pane_t

0xc7a1,	// (0x0001a282) mup_progress_pane_cp03

0x955f,	// (0x00017040) bg_tb_trans_pane_cp04

0x4eed,	// (0x000129ce) mup3_volume_pane

0x4ef5,	// (0x000129d6) popup_mup3_control_window_g1

0x4efe,	// (0x000129df) mup3_volume_pane_g1

0x4f07,	// (0x000129e8) mup3_volume_pane_g2

0x4f10,	// (0x000129f1) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0001d27c) mup3_volume_pane_g

0x955f,	// (0x00017040) bg_tb_trans_pane_cp03

0xc7b1,	// (0x0001a292) popup_mup3_text_window_g1

0xc7b9,	// (0x0001a29a) popup_mup3_text_window_t1

0x9d9b,	// (0x0001787c) list_calc_item_pane_g1_ParamLimits

0xc17d,	// (0x00019c5e) mup_volume_pane_cp_g1

0x48da,	// (0x000123bb) main_touch_calib_pane_t3

0x48ec,	// (0x000123cd) main_touch_calib_pane_t4

0x48fe,	// (0x000123df) main_touch_calib_pane_t5

0x9569,	// (0x0001704a) aid_cell_size_toolbar2

0x9571,	// (0x00017052) aid_popup3_width_pane

0x9579,	// (0x0001705a) aid_zoom_text_msg_primary

0x9fb8,	// (0x00017a99) vorec_t7

0x9d5f,	// (0x00017840) bg_calc_paper_pane_g1_ParamLimits

0x9d6b,	// (0x0001784c) bg_calc_paper_pane_g2_ParamLimits

0x9d77,	// (0x00017858) bg_calc_paper_pane_g3_ParamLimits

0x9d83,	// (0x00017864) bg_calc_paper_pane_g4_ParamLimits

0x9d8f,	// (0x00017870) bg_calc_paper_pane_g5_ParamLimits

0x107c,	// (0x0000eb5d) bg_calc_paper_pane_g6_ParamLimits

0x108b,	// (0x0000eb6c) bg_calc_paper_pane_g7_ParamLimits

0x109a,	// (0x0000eb7b) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0001cc1e) bg_calc_paper_pane_g_ParamLimits

0x10a9,	// (0x0000eb8a) calc_bg_paper_pane_g9_ParamLimits

0x1953,	// (0x0000f434) image_qvga_pane_ParamLimits

0x1953,	// (0x0000f434) image_qvga_pane

0x9c2c,	// (0x0001770d) bg_popup_sub_pane_cp04_ParamLimits

0xad1a,	// (0x000187fb) popup_mup_playback_window_g1_ParamLimits

0xad26,	// (0x00018807) popup_mup_playback_window_t1_ParamLimits

0xad3b,	// (0x0001881c) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0001cfa8) popup_mup_playback_window_t_ParamLimits

0x4429,	// (0x00011f0a) main_mup2_pane_g3_ParamLimits

0x4429,	// (0x00011f0a) main_mup2_pane_g3

0x1d11,	// (0x0000f7f2) popup_toolbar_window_cp04

0xb11c,	// (0x00018bfd) popup_call2_audio_second_window_g3_ParamLimits

0xb11c,	// (0x00018bfd) popup_call2_audio_second_window_g3

0xb526,	// (0x00019007) popup_call2_audio_first_window_g4_ParamLimits

0xb526,	// (0x00019007) popup_call2_audio_first_window_g4

0xbba5,	// (0x00019686) popup_call2_audio_in_window_g4_ParamLimits

0xbba5,	// (0x00019686) popup_call2_audio_in_window_g4

0x353b,	// (0x0001101c) aid_area_sk_bg_cut_ParamLimits

0x353b,	// (0x0001101c) aid_area_sk_bg_cut

0xad50,	// (0x00018831) aid_area_sk_bg_cut_2_ParamLimits

0xad50,	// (0x00018831) aid_area_sk_bg_cut_2

0x46fe,	// (0x000121df) aid_placing_details_win

0x4706,	// (0x000121e7) aid_placing_details_win_2

0xc5a7,	// (0x0001a088) camera2_autofocus_pane_g1_ParamLimits

0x0ce5,	// (0x0000e7c6) popup_fixed_preview_cale_window_ParamLimits

0x0ce5,	// (0x0000e7c6) popup_fixed_preview_cale_window

0xaa58,	// (0x00018539) navi_slider_pane_g3

0xaa61,	// (0x00018542) navi_slider_pane_g4

0xaa6a,	// (0x0001854b) navi_slider_pane_g5

0xaa58,	// (0x00018539) navi_slider_pane_g6

0xaa73,	// (0x00018554) navi_slider_pane_g7

0xab94,	// (0x00018675) mup_scale_pane_g3

0xab9d,	// (0x0001867e) mup_scale_pane_g4

0xaba6,	// (0x00018687) mup_scale_pane_g5

0x32b2,	// (0x00010d93) mup_scale_pane_g6

0x32bb,	// (0x00010d9c) mup_scale_pane_g7

0xaa58,	// (0x00018539) cams2_slider_pane_g3

0xc232,	// (0x00019d13) cams2_slider_pane_g4

0xc23a,	// (0x00019d1b) cams2_slider_pane_g5

0xaa58,	// (0x00018539) cams2_slider_pane_g6

0xc242,	// (0x00019d23) cams2_slider_pane_g7

0xc466,	// (0x00019f47) camera2_autofocus_pane_cp_g1

0xbf46,	// (0x00019a27) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf46,	// (0x00019a27) bg_popup_preview_window_pane_cp02

0xc7c7,	// (0x0001a2a8) list_fp_cale_pane_ParamLimits

0xc7c7,	// (0x0001a2a8) list_fp_cale_pane

0xc7d3,	// (0x0001a2b4) popup_fixed_preview_cale_window_t1_ParamLimits

0xc7d3,	// (0x0001a2b4) popup_fixed_preview_cale_window_t1

0x4f19,	// (0x000129fa) popup_fixed_preview_cale_window_t2_ParamLimits

0x4f19,	// (0x000129fa) popup_fixed_preview_cale_window_t2

0x4f2e,	// (0x00012a0f) popup_fixed_preview_cale_window_t3_ParamLimits

0x4f2e,	// (0x00012a0f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0001d283) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0001d283) popup_fixed_preview_cale_window_t

0x4f43,	// (0x00012a24) list_single_fp_cale_pane_ParamLimits

0x4f43,	// (0x00012a24) list_single_fp_cale_pane

0xc7f1,	// (0x0001a2d2) list_single_fp_cale_pane_g1_ParamLimits

0xc7f1,	// (0x0001a2d2) list_single_fp_cale_pane_g1

0xc7fd,	// (0x0001a2de) list_single_fp_cale_pane_g2_ParamLimits

0xc7fd,	// (0x0001a2de) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0001d28a) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0001d28a) list_single_fp_cale_pane_g

0xc816,	// (0x0001a2f7) list_single_fp_cale_pane_t1_ParamLimits

0xc816,	// (0x0001a2f7) list_single_fp_cale_pane_t1

0xc828,	// (0x0001a309) list_single_fp_cale_pane_t2_ParamLimits

0xc828,	// (0x0001a309) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0001d291) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0001d291) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x955f,	// (0x00017040) main_dialer_pane

0x4f57,	// (0x00012a38) aid_cell_size_keypad

0x4f61,	// (0x00012a42) dialer_ne_pane

0x4f69,	// (0x00012a4a) grid_dialer_command_1_pane

0x4f71,	// (0x00012a52) grid_dialer_command_2_pane

0x4f79,	// (0x00012a5a) grid_dialer_keypad_pane

0x4f89,	// (0x00012a6a) bg_popup_call_pane_cp06_ParamLimits

0x4f89,	// (0x00012a6a) bg_popup_call_pane_cp06

0x4f95,	// (0x00012a76) dialer_ne_clear_pane_ParamLimits

0x4f95,	// (0x00012a76) dialer_ne_clear_pane

0xc85b,	// (0x0001a33c) dialer_ne_pane_g1

0xc863,	// (0x0001a344) dialer_ne_pane_t1_ParamLimits

0xc863,	// (0x0001a344) dialer_ne_pane_t1

0x4fa1,	// (0x00012a82) dialer_ne_pane_t2_ParamLimits

0x4fa1,	// (0x00012a82) dialer_ne_pane_t2

0x4fcb,	// (0x00012aac) dialer_ne_pane_t3_ParamLimits

0x4fcb,	// (0x00012aac) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0001d296) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0001d296) dialer_ne_pane_t

0x4ffb,	// (0x00012adc) dialer_ne_pane_t3_copy1_ParamLimits

0x4ffb,	// (0x00012adc) dialer_ne_pane_t3_copy1

0x502a,	// (0x00012b0b) cell_dialer_keypad_pane_ParamLimits

0x502a,	// (0x00012b0b) cell_dialer_keypad_pane

0x503f,	// (0x00012b20) cell_dialer_command_1_pane_ParamLimits

0x503f,	// (0x00012b20) cell_dialer_command_1_pane

0x5055,	// (0x00012b36) cell_dialer_command_2_pane_ParamLimits

0x5055,	// (0x00012b36) cell_dialer_command_2_pane

0xc875,	// (0x0001a356) bg_button_pane_cp02_ParamLimits

0xc875,	// (0x0001a356) bg_button_pane_cp02

0x5064,	// (0x00012b45) cell_dialer_keypad_pane_g1_ParamLimits

0x5064,	// (0x00012b45) cell_dialer_keypad_pane_g1

0xc875,	// (0x0001a356) bg_button_pane_cp03_ParamLimits

0xc875,	// (0x0001a356) bg_button_pane_cp03

0x5079,	// (0x00012b5a) cell_dialer_command_1_pane_g1_ParamLimits

0x5079,	// (0x00012b5a) cell_dialer_command_1_pane_g1

0xc881,	// (0x0001a362) bg_button_pane_cp04

0x508d,	// (0x00012b6e) cell_dialer_command_2_pane_g1

0x9f86,	// (0x00017a67) bg_button_pane_cp06

0xc889,	// (0x0001a36a) dialer_ne_clear_pane_g1

0xa95a,	// (0x0001843b) navi_pane_g2

0x2eb7,	// (0x00010998) navi_pane_g3

0x0002,

0xf3ca,	// (0x0001ceab) navi_pane_g

0xa9e7,	// (0x000184c8) navi_pane_mv_g2

0xaa0e,	// (0x000184ef) navi_pane_mv_g5

0x2ed4,	// (0x000109b5) navi_pane_mv_t1

0x9d17,	// (0x000177f8) main_clock2_pane

0x50d2,	// (0x00012bb3) main_clock2_list_pane_ParamLimits

0x50d2,	// (0x00012bb3) main_clock2_list_pane

0x5104,	// (0x00012be5) main_clock2_pane_t1_ParamLimits

0x5104,	// (0x00012be5) main_clock2_pane_t1

0x513e,	// (0x00012c1f) main_clock2_pane_t2_ParamLimits

0x513e,	// (0x00012c1f) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0001d2a2) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0001d2a2) main_clock2_pane_t

0x51d2,	// (0x00012cb3) popup_clock_analogue_window_cp03_ParamLimits

0x51d2,	// (0x00012cb3) popup_clock_analogue_window_cp03

0x51f7,	// (0x00012cd8) popup_clock_digital_window_cp02_ParamLimits

0x51f7,	// (0x00012cd8) popup_clock_digital_window_cp02

0x5268,	// (0x00012d49) main_clock2_list_single_pane_ParamLimits

0x5268,	// (0x00012d49) main_clock2_list_single_pane

0x9f86,	// (0x00017a67) list_highlight_pane_cp05

0xc8c1,	// (0x0001a3a2) main_clock2_list_single_pane_t1

0x1d11,	// (0x0000f7f2) popup_toolbar_window_cp04_ParamLimits

0x475f,	// (0x00012240) camera2_autofocus_pane_g2_ParamLimits

0x475f,	// (0x00012240) camera2_autofocus_pane_g2

0x476b,	// (0x0001224c) camera2_autofocus_pane_g3_ParamLimits

0x476b,	// (0x0001224c) camera2_autofocus_pane_g3

0x4777,	// (0x00012258) camera2_autofocus_pane_g4_ParamLimits

0x4777,	// (0x00012258) camera2_autofocus_pane_g4

0x4783,	// (0x00012264) camera2_autofocus_pane_g5_ParamLimits

0x4783,	// (0x00012264) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0001d1e6) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0001d1e6) camera2_autofocus_pane_g

0x4928,	// (0x00012409) camera2_autofocus_pane_cp_g2

0x4930,	// (0x00012411) camera2_autofocus_pane_cp_g3

0x4938,	// (0x00012419) camera2_autofocus_pane_cp_g4

0x4940,	// (0x00012421) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0001d24c) camera2_autofocus_pane_cp_g

0x4f81,	// (0x00012a62) popup_dialer_spcha_window

0x955f,	// (0x00017040) bg_popup_sub_pane_cp07

0xc8cf,	// (0x0001a3b0) list_spcha_pane

0xc8d7,	// (0x0001a3b8) list_single_spcha_pane_ParamLimits

0xc8d7,	// (0x0001a3b8) list_single_spcha_pane

0x955f,	// (0x00017040) list_highlight_pane_cp06

0xc8e8,	// (0x0001a3c9) list_single_spcha_pane_t1

0xb94f,	// (0x00019430) popup_call2_audio_out_window_g4_ParamLimits

0xb94f,	// (0x00019430) popup_call2_audio_out_window_g4

0x955f,	// (0x00017040) main_imed2_pane

0xbf82,	// (0x00019a63) popup_imed_adjust2_window

0x3c57,	// (0x00011738) popup_imed_trans_window_ParamLimits

0x3c57,	// (0x00011738) popup_imed_trans_window

0xc2aa,	// (0x00019d8b) popup_blid_sat_info2_window_t1

0xc2b8,	// (0x00019d99) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0001d17b) popup_blid_sat_info2_window_t

0x5312,	// (0x00012df3) aid_size_cell_colour_35

0x5332,	// (0x00012e13) aid_size_cell_colour_112

0x5352,	// (0x00012e33) aid_size_cell_effect

0xbf52,	// (0x00019a33) bg_tb_trans_pane_cp02

0xa48e,	// (0x00017f6f) heading_imed_pane

0x5372,	// (0x00012e53) listscroll_imed_pane

0xc8f6,	// (0x0001a3d7) heading_imed_pane_g1

0xc8fe,	// (0x0001a3df) heading_imed_pane_t1

0xc90c,	// (0x0001a3ed) grid_imed_colour_35_pane_ParamLimits

0xc90c,	// (0x0001a3ed) grid_imed_colour_35_pane

0x537e,	// (0x00012e5f) grid_imed_effect_pane

0xc91f,	// (0x0001a400) list_imed_aspect_pane

0x5391,	// (0x00012e72) scroll_pane_cp027_ParamLimits

0x5391,	// (0x00012e72) scroll_pane_cp027

0x539d,	// (0x00012e7e) cell_imed_effect_pane_ParamLimits

0x539d,	// (0x00012e7e) cell_imed_effect_pane

0xc927,	// (0x0001a408) cell_imed_colour_pane_ParamLimits

0xc927,	// (0x0001a408) cell_imed_colour_pane

0xc961,	// (0x0001a442) cell_imed_colour_pane_g1_ParamLimits

0xc961,	// (0x0001a442) cell_imed_colour_pane_g1

0xc972,	// (0x0001a453) hgihlgiht_grid_pane_cp016_ParamLimits

0xc972,	// (0x0001a453) hgihlgiht_grid_pane_cp016

0x53c2,	// (0x00012ea3) cell_imed_effect_pane_g1

0x53ca,	// (0x00012eab) grid_highlight_pane_cp017

0xc983,	// (0x0001a464) list_imed_single_pane_ParamLimits

0xc983,	// (0x0001a464) list_imed_single_pane

0x955f,	// (0x00017040) list_highlight_pane_cp07

0xc996,	// (0x0001a477) list_imed_aspect_pane_comp1_t1

0xbf52,	// (0x00019a33) bg_tb_trans_pane_cp05

0xc9b6,	// (0x0001a497) popup_imed_adjust2_window_g1

0xc9dd,	// (0x0001a4be) popup_imed_adjust2_window_t1

0xc9f5,	// (0x0001a4d6) slider_imed_adjust_pane

0xca09,	// (0x0001a4ea) slider_imed_adjust_pane_g1

0xca19,	// (0x0001a4fa) slider_imed_adjust_pane_g2

0xca29,	// (0x0001a50a) slider_imed_adjust_pane_g3

0xca3a,	// (0x0001a51b) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0001d2bf) slider_imed_adjust_pane_g

0x53d3,	// (0x00012eb4) aid_size_cell_clipart2

0x53df,	// (0x00012ec0) grid_imed_clipart_pane

0xca4b,	// (0x0001a52c) scroll_pane_cp031

0x53e9,	// (0x00012eca) cell_imed_clipart_pane_ParamLimits

0x53e9,	// (0x00012eca) cell_imed_clipart_pane

0x5401,	// (0x00012ee2) cell_imed_clipart_pane_g1

0x955f,	// (0x00017040) grid_highlight_pane_cp014

0x50e5,	// (0x00012bc6) main_clock2_pane_g1_ParamLimits

0x50e5,	// (0x00012bc6) main_clock2_pane_g1

0x5213,	// (0x00012cf4) aid_call2_pane_cp10

0x5225,	// (0x00012d06) aid_call_pane_cp10

0xa8e9,	// (0x000183ca) popup_clock_analogue_window_cp10_g1

0xa8e9,	// (0x000183ca) popup_clock_analogue_window_cp10_g2

0x5237,	// (0x00012d18) popup_clock_analogue_window_cp10_g3

0x5237,	// (0x00012d18) popup_clock_analogue_window_cp10_g4

0xa8e9,	// (0x000183ca) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0001d2ad) popup_clock_analogue_window_cp10_g

0x5249,	// (0x00012d2a) popup_clock_analogue_window_cp10_t1

0x527a,	// (0x00012d5b) clock_digital_number_pane_cp10_ParamLimits

0x527a,	// (0x00012d5b) clock_digital_number_pane_cp10

0x5292,	// (0x00012d73) clock_digital_number_pane_cp11_ParamLimits

0x5292,	// (0x00012d73) clock_digital_number_pane_cp11

0x52aa,	// (0x00012d8b) clock_digital_number_pane_cp12_ParamLimits

0x52aa,	// (0x00012d8b) clock_digital_number_pane_cp12

0x52c2,	// (0x00012da3) clock_digital_number_pane_cp13_ParamLimits

0x52c2,	// (0x00012da3) clock_digital_number_pane_cp13

0x52da,	// (0x00012dbb) clock_digital_separator_pane_cp10_ParamLimits

0x52da,	// (0x00012dbb) clock_digital_separator_pane_cp10

0x52f2,	// (0x00012dd3) popup_clock_digital_window_cp02_t1_ParamLimits

0x52f2,	// (0x00012dd3) popup_clock_digital_window_cp02_t1

0x9c24,	// (0x00017705) clock_digital_number_pane_cp10_g1

0x9c24,	// (0x00017705) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0001d2c8) clock_digital_number_pane_cp10_g

0x9c24,	// (0x00017705) clock_digital_separator_pane_cp10_g1

0x9c24,	// (0x00017705) clock_digital_separator_pane_g2_cp10

0xaa16,	// (0x000184f7) navi_pane_vded_g4

0xaa1f,	// (0x00018500) navi_pane_vded_g5

0xaa28,	// (0x00018509) navi_pane_vded_t1

0x955f,	// (0x00017040) main_vded_pane

0x540a,	// (0x00012eeb) main_vded_pane_g1

0x5414,	// (0x00012ef5) main_vded_pane_g2

0x541c,	// (0x00012efd) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0001d2cd) main_vded_pane_g

0x5424,	// (0x00012f05) main_vded_pane_t1

0x5432,	// (0x00012f13) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0001d2d4) main_vded_pane_t

0x5440,	// (0x00012f21) vded_slider_pane

0x5448,	// (0x00012f29) vded_video_pane

0xca53,	// (0x0001a534) vded_video_pane_g1

0x5450,	// (0x00012f31) vded_video_pane_g2

0xc466,	// (0x00019f47) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0001d2d9) vded_video_pane_g

0xca5d,	// (0x0001a53e) vded_slider_pane_g1

0xc17d,	// (0x00019c5e) vded_slider_pane_g2

0xca66,	// (0x0001a547) vded_slider_pane_g3

0xca6f,	// (0x0001a550) vded_slider_pane_g4

0xca78,	// (0x0001a559) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0001d2e0) vded_slider_pane_g

0x4e6d,	// (0x0001294e) mup3_rocker_pane_ParamLimits

0x4e6d,	// (0x0001294e) mup3_rocker_pane

0x5459,	// (0x00012f3a) mup3_control_keys_pane_g1

0x5461,	// (0x00012f42) mup3_control_keys_pane_g2

0x5469,	// (0x00012f4a) mup3_control_keys_pane_g3

0x5471,	// (0x00012f52) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0001d2eb) mup3_control_keys_pane_g

0x0d18,	// (0x0000e7f9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d18,	// (0x0000e7f9) popup_toolbar2_fixed_window_cp01

0x4e9b,	// (0x0001297c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4e9b,	// (0x0001297c) popup_toolbar2_fixed_window_cp02

0xb28e,	// (0x00018d6f) popup_call2_audio_second_window_t4_ParamLimits

0xb28e,	// (0x00018d6f) popup_call2_audio_second_window_t4

0xb7bc,	// (0x0001929d) popup_call2_audio_first_window_t6_ParamLimits

0xb7bc,	// (0x0001929d) popup_call2_audio_first_window_t6

0xba52,	// (0x00019533) popup_call2_audio_out_window_t6_ParamLimits

0xba52,	// (0x00019533) popup_call2_audio_out_window_t6

0x955f,	// (0x00017040) main_vitu_pane

0x5481,	// (0x00012f62) aid_size_cell_itu_ParamLimits

0x5481,	// (0x00012f62) aid_size_cell_itu

0x95b2,	// (0x00017093) bg_popup_window_pane_cp08_ParamLimits

0x95b2,	// (0x00017093) bg_popup_window_pane_cp08

0x5497,	// (0x00012f78) field_vitu_entry_pane_ParamLimits

0x5497,	// (0x00012f78) field_vitu_entry_pane

0x54aa,	// (0x00012f8b) grid_vitu_function_pane_ParamLimits

0x54aa,	// (0x00012f8b) grid_vitu_function_pane

0x54bf,	// (0x00012fa0) grid_vitu_itu_pane_ParamLimits

0x54bf,	// (0x00012fa0) grid_vitu_itu_pane

0x54d5,	// (0x00012fb6) cell_vitu_itu_pane_ParamLimits

0x54d5,	// (0x00012fb6) cell_vitu_itu_pane

0x54f7,	// (0x00012fd8) cell_vitu_function_pane_ParamLimits

0x54f7,	// (0x00012fd8) cell_vitu_function_pane

0x95b2,	// (0x00017093) bg_popup_sub_pane_cp08_ParamLimits

0x95b2,	// (0x00017093) bg_popup_sub_pane_cp08

0x5510,	// (0x00012ff1) field_vitu_entry_pane_t1_ParamLimits

0x5510,	// (0x00012ff1) field_vitu_entry_pane_t1

0xca99,	// (0x0001a57a) field_vitu_entry_pane_t2_ParamLimits

0xca99,	// (0x0001a57a) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0001d2f9) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0001d2f9) field_vitu_entry_pane_t

0xcab6,	// (0x0001a597) bg_button_pane_cp05_ParamLimits

0xcab6,	// (0x0001a597) bg_button_pane_cp05

0x552c,	// (0x0001300d) cell_vitu_itu_pane_g1

0x5544,	// (0x00013025) cell_vitu_itu_pane_t1_ParamLimits

0x5544,	// (0x00013025) cell_vitu_itu_pane_t1

0x5556,	// (0x00013037) cell_vitu_itu_pane_t2_ParamLimits

0x5556,	// (0x00013037) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0001d2fe) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0001d2fe) cell_vitu_itu_pane_t

0xcac4,	// (0x0001a5a5) bg_button_pane_cp07

0x558b,	// (0x0001306c) cell_vitu_function_pane_g1

0x9cb3,	// (0x00017794) main_calc_pane_g1

0x0b7c,	// (0x0000e65d) aid_visual_content_pane

0x955f,	// (0x00017040) main_vradio_pane

0x5594,	// (0x00013075) main_vradio_pane_g1_ParamLimits

0x5594,	// (0x00013075) main_vradio_pane_g1

0xcace,	// (0x0001a5af) main_vradio_pane_g2_ParamLimits

0xcace,	// (0x0001a5af) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0001d305) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0001d305) main_vradio_pane_g

0x55aa,	// (0x0001308b) main_vradio_pane_t1_ParamLimits

0x55aa,	// (0x0001308b) main_vradio_pane_t1

0x55bf,	// (0x000130a0) main_vradio_pane_t2_ParamLimits

0x55bf,	// (0x000130a0) main_vradio_pane_t2

0xcadb,	// (0x0001a5bc) main_vradio_pane_t3_ParamLimits

0xcadb,	// (0x0001a5bc) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0001d30a) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0001d30a) main_vradio_pane_t

0x55d4,	// (0x000130b5) vradio_rocker_control_pane_ParamLimits

0x55d4,	// (0x000130b5) vradio_rocker_control_pane

0x55e6,	// (0x000130c7) vradio_station_info_pane_ParamLimits

0x55e6,	// (0x000130c7) vradio_station_info_pane

0xcaed,	// (0x0001a5ce) vradio_frequency_info_pane_ParamLimits

0xcaed,	// (0x0001a5ce) vradio_frequency_info_pane

0xc466,	// (0x00019f47) vradio_station_info_pane_g1

0xcafc,	// (0x0001a5dd) vradio_station_info_pane_t1_ParamLimits

0xcafc,	// (0x0001a5dd) vradio_station_info_pane_t1

0xcb1e,	// (0x0001a5ff) vradio_station_info_pane_t2_ParamLimits

0xcb1e,	// (0x0001a5ff) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0001d311) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0001d311) vradio_station_info_pane_t

0xcb30,	// (0x0001a611) vradio_tuning_pane

0xcb38,	// (0x0001a619) vradio_rocker_control_pane_g1

0xcb40,	// (0x0001a621) vradio_rocker_control_pane_g2

0xcb48,	// (0x0001a629) vradio_rocker_control_pane_g3

0xcb50,	// (0x0001a631) vradio_rocker_control_pane_g4

0xcb58,	// (0x0001a639) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0001d316) vradio_rocker_control_pane_g

0x55f6,	// (0x000130d7) vradio_frequency_info_pane_g1

0xcb60,	// (0x0001a641) vradio_frequency_info_pane_t1_ParamLimits

0xcb60,	// (0x0001a641) vradio_frequency_info_pane_t1

0x5600,	// (0x000130e1) vradio_tuning_pane_g1

0x5609,	// (0x000130ea) vradio_tuning_pane_t1

0x9589,	// (0x0001706a) area_side_right_pane_ParamLimits

0x9589,	// (0x0001706a) area_side_right_pane

0xbf0d,	// (0x000199ee) status_small_pane_g1

0xbf15,	// (0x000199f6) status_small_pane_g2

0xbf1e,	// (0x000199ff) status_small_pane_g3

0xbf27,	// (0x00019a08) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0001d0d1) status_small_pane_g

0xbf30,	// (0x00019a11) status_small_pane_t1

0x955f,	// (0x00017040) main_video3_pane

0xcb74,	// (0x0001a655) cams_zoom_vslider_pane

0xcb7c,	// (0x0001a65d) image3_wide_pane_ParamLimits

0xcb7c,	// (0x0001a65d) image3_wide_pane

0xcb96,	// (0x0001a677) image3_wide_small_pane

0xcba0,	// (0x0001a681) main_video3_pane_g1_ParamLimits

0xcba0,	// (0x0001a681) main_video3_pane_g1

0xcbbc,	// (0x0001a69d) main_video3_pane_g2_ParamLimits

0xcbbc,	// (0x0001a69d) main_video3_pane_g2

0x0001,

0xf840,	// (0x0001d321) main_video3_pane_g_ParamLimits

0xf840,	// (0x0001d321) main_video3_pane_g

0xcbd8,	// (0x0001a6b9) main_video3_pane_t1_ParamLimits

0xcbd8,	// (0x0001a6b9) main_video3_pane_t1

0xcc03,	// (0x0001a6e4) main_video3_pane_t2_ParamLimits

0xcc03,	// (0x0001a6e4) main_video3_pane_t2

0xcc2e,	// (0x0001a70f) main_video3_pane_t3_ParamLimits

0xcc2e,	// (0x0001a70f) main_video3_pane_t3

0x0002,

0xf845,	// (0x0001d326) main_video3_pane_t_ParamLimits

0xf845,	// (0x0001d326) main_video3_pane_t

0xcc59,	// (0x0001a73a) cams_zoom_vslider_pane_g1

0xcc62,	// (0x0001a743) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0001d32d) cams_zoom_vslider_pane_g

0xcc6a,	// (0x0001a74b) small_slider_vertical_pane

0xc466,	// (0x00019f47) small_slider_vertical_pane_g1

0xc466,	// (0x00019f47) small_slider_vertical_pane_g2

0xcc72,	// (0x0001a753) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0001d332) small_slider_vertical_pane_g

0x955f,	// (0x00017040) main_hwr_training_pane

0xcc7b,	// (0x0001a75c) hwr_training_instruct_pane_ParamLimits

0xcc7b,	// (0x0001a75c) hwr_training_instruct_pane

0x5618,	// (0x000130f9) hwr_training_navi_pane_ParamLimits

0x5618,	// (0x000130f9) hwr_training_navi_pane

0x562f,	// (0x00013110) hwr_training_write_pane_ParamLimits

0x562f,	// (0x00013110) hwr_training_write_pane

0x955f,	// (0x00017040) bg_frame_shadow_pane

0xccaa,	// (0x0001a78b) hwr_training_write_pane_g1

0xccb2,	// (0x0001a793) hwr_training_write_pane_g2

0xccba,	// (0x0001a79b) hwr_training_write_pane_g3

0xccc2,	// (0x0001a7a3) hwr_training_write_pane_g4

0xccca,	// (0x0001a7ab) hwr_training_write_pane_g5

0xccd2,	// (0x0001a7b3) hwr_training_write_pane_g6

0xccda,	// (0x0001a7bb) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0001d339) hwr_training_write_pane_g

0xcce2,	// (0x0001a7c3) hwr_training_navi_pane_g1_ParamLimits

0xcce2,	// (0x0001a7c3) hwr_training_navi_pane_g1

0xccf4,	// (0x0001a7d5) hwr_training_navi_pane_g2_ParamLimits

0xccf4,	// (0x0001a7d5) hwr_training_navi_pane_g2

0xcd06,	// (0x0001a7e7) hwr_training_navi_pane_g3_ParamLimits

0xcd06,	// (0x0001a7e7) hwr_training_navi_pane_g3

0xcd16,	// (0x0001a7f7) hwr_training_navi_pane_g4_ParamLimits

0xcd16,	// (0x0001a7f7) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0001d348) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0001d348) hwr_training_navi_pane_g

0xcd23,	// (0x0001a804) hwr_training_navi_pane_t1

0x566f,	// (0x00013150) list_single_hwr_training_instruct_pane_ParamLimits

0x566f,	// (0x00013150) list_single_hwr_training_instruct_pane

0xcd31,	// (0x0001a812) list_single_hwr_training_instruct_pane_t1

0xc3a6,	// (0x00019e87) bg_frame_shadow_pane_g1

0xcd40,	// (0x0001a821) bg_frame_shadow_pane_g2

0xcd48,	// (0x0001a829) bg_frame_shadow_pane_g3

0xcd50,	// (0x0001a831) bg_frame_shadow_pane_g4

0xcd58,	// (0x0001a839) bg_frame_shadow_pane_g5

0xcd60,	// (0x0001a841) bg_frame_shadow_pane_g6

0xcd68,	// (0x0001a849) bg_frame_shadow_pane_g7

0x9e3a,	// (0x0001791b) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0001d353) bg_frame_shadow_pane_g

0x955f,	// (0x00017040) main_video_tele_dialer_pane

0x5687,	// (0x00013168) aid_size_cell_video_keypad_ParamLimits

0x5687,	// (0x00013168) aid_size_cell_video_keypad

0x56a1,	// (0x00013182) grid_video_dialer_keypad_pane_ParamLimits

0x56a1,	// (0x00013182) grid_video_dialer_keypad_pane

0x56e3,	// (0x000131c4) video_down_pane_cp_ParamLimits

0x56e3,	// (0x000131c4) video_down_pane_cp

0x5713,	// (0x000131f4) cell_video_dialer_keypad_pane_ParamLimits

0x5713,	// (0x000131f4) cell_video_dialer_keypad_pane

0xcd70,	// (0x0001a851) bg_button_pane_cp08_ParamLimits

0xcd70,	// (0x0001a851) bg_button_pane_cp08

0x5735,	// (0x00013216) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5735,	// (0x00013216) cell_video_dialer_keypad_pane_g1

0x4e57,	// (0x00012938) mup3_rocker2_pane_ParamLimits

0x4e57,	// (0x00012938) mup3_rocker2_pane

0xc466,	// (0x00019f47) mup3_rocker2_pane_g1

0x3b50,	// (0x00011631) main_dialer2_pane

0x955f,	// (0x00017040) main_mp4_pane

0xcd8c,	// (0x0001a86d) main_mp4_pane_g1_ParamLimits

0xcd8c,	// (0x0001a86d) main_mp4_pane_g1

0xcd8c,	// (0x0001a86d) main_mp4_pane_g2_ParamLimits

0xcd8c,	// (0x0001a86d) main_mp4_pane_g2

0x5770,	// (0x00013251) main_mp4_pane_g3_ParamLimits

0x5770,	// (0x00013251) main_mp4_pane_g3

0xcd9a,	// (0x0001a87b) main_mp4_pane_g4_ParamLimits

0xcd9a,	// (0x0001a87b) main_mp4_pane_g4

0xcdc8,	// (0x0001a8a9) main_mp4_pane_g5_ParamLimits

0xcdc8,	// (0x0001a8a9) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0001d373) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0001d373) main_mp4_pane_g

0xce3c,	// (0x0001a91d) main_mp4_pane_t1_ParamLimits

0xce3c,	// (0x0001a91d) main_mp4_pane_t1

0xce94,	// (0x0001a975) main_mp4_pane_t2_ParamLimits

0xce94,	// (0x0001a975) main_mp4_pane_t2

0xcee6,	// (0x0001a9c7) main_mp4_pane_t3_ParamLimits

0xcee6,	// (0x0001a9c7) main_mp4_pane_t3

0xcf0c,	// (0x0001a9ed) main_mp4_pane_t4_ParamLimits

0xcf0c,	// (0x0001a9ed) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0001d384) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0001d384) main_mp4_pane_t

0xcf4c,	// (0x0001aa2d) mp4_progress_pane_ParamLimits

0xcf4c,	// (0x0001aa2d) mp4_progress_pane

0xcf90,	// (0x0001aa71) mp4_rocker_pane_ParamLimits

0xcf90,	// (0x0001aa71) mp4_rocker_pane

0xcfb6,	// (0x0001aa97) mp4_progress_pane_t1

0xcfcd,	// (0x0001aaae) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0001d38d) mp4_progress_pane_t

0xcfe4,	// (0x0001aac5) mup_progress_pane_cp04

0xc466,	// (0x00019f47) mp4_rocker_pane_g1

0x57a0,	// (0x00013281) aid_cell_size_keypad2_ParamLimits

0x57a0,	// (0x00013281) aid_cell_size_keypad2

0x57ba,	// (0x0001329b) dialer2_ne_pane_ParamLimits

0x57ba,	// (0x0001329b) dialer2_ne_pane

0x57cf,	// (0x000132b0) grid_dialer2_keypad_pane_ParamLimits

0x57cf,	// (0x000132b0) grid_dialer2_keypad_pane

0xc253,	// (0x00019d34) bg_popup_call_pane_cp07_ParamLimits

0xc253,	// (0x00019d34) bg_popup_call_pane_cp07

0x57e5,	// (0x000132c6) dialer2_ne_pane_t1_ParamLimits

0x57e5,	// (0x000132c6) dialer2_ne_pane_t1

0x5822,	// (0x00013303) cell_dialer2_keypad_pane_ParamLimits

0x5822,	// (0x00013303) cell_dialer2_keypad_pane

0xd01e,	// (0x0001aaff) bg_button_pane_pane_cp04_ParamLimits

0xd01e,	// (0x0001aaff) bg_button_pane_pane_cp04

0x5844,	// (0x00013325) cell_dialer2_keypad_pane_g1_ParamLimits

0x5844,	// (0x00013325) cell_dialer2_keypad_pane_g1

0x1bff,	// (0x0000f6e0) aid_placing_vt_set_content_ParamLimits

0x1bff,	// (0x0000f6e0) aid_placing_vt_set_content

0x1c21,	// (0x0000f702) aid_placing_vt_set_title_ParamLimits

0x1c21,	// (0x0000f702) aid_placing_vt_set_title

0x955f,	// (0x00017040) main_image3_pane

0x58d3,	// (0x000133b4) area_side_right_pane_cp01_ParamLimits

0x58d3,	// (0x000133b4) area_side_right_pane_cp01

0xcd8c,	// (0x0001a86d) main_image3_pane_g1_ParamLimits

0xcd8c,	// (0x0001a86d) main_image3_pane_g1

0x58ea,	// (0x000133cb) main_image3_pane_g2_ParamLimits

0x58ea,	// (0x000133cb) main_image3_pane_g2

0x5910,	// (0x000133f1) main_image3_pane_g3_ParamLimits

0x5910,	// (0x000133f1) main_image3_pane_g3

0x5936,	// (0x00013417) main_image3_pane_g4_ParamLimits

0x5936,	// (0x00013417) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0001d39c) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0001d39c) main_image3_pane_g

0x595c,	// (0x0001343d) main_image3_pane_t1_ParamLimits

0x595c,	// (0x0001343d) main_image3_pane_t1

0x59b4,	// (0x00013495) main_image3_pane_t2_ParamLimits

0x59b4,	// (0x00013495) main_image3_pane_t2

0x5a06,	// (0x000134e7) main_image3_pane_t3_ParamLimits

0x5a06,	// (0x000134e7) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0001d3a5) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0001d3a5) main_image3_pane_t

0x95b2,	// (0x00017093) grid_sctrl_middle_pane_cp01_ParamLimits

0x95b2,	// (0x00017093) grid_sctrl_middle_pane_cp01

0x5a86,	// (0x00013567) cell_sctrl_middle_pane_cp01_ParamLimits

0x5a86,	// (0x00013567) cell_sctrl_middle_pane_cp01

0x5aa3,	// (0x00013584) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5aa3,	// (0x00013584) cell_sctrl_middle_pane_cp01_g1

0x955f,	// (0x00017040) main_call4_pane

0x5ab9,	// (0x0001359a) aid_size_button_call4_ParamLimits

0x5ab9,	// (0x0001359a) aid_size_button_call4

0x5ae6,	// (0x000135c7) call4_windows_pane_ParamLimits

0x5ae6,	// (0x000135c7) call4_windows_pane

0x5afc,	// (0x000135dd) grid_call4_button_pane_ParamLimits

0x5afc,	// (0x000135dd) grid_call4_button_pane

0xd074,	// (0x0001ab55) call4_windows_conf_pane

0x5b23,	// (0x00013604) popup_call4_audio_first_window_ParamLimits

0x5b23,	// (0x00013604) popup_call4_audio_first_window

0x5b43,	// (0x00013624) popup_call4_audio_second_window_ParamLimits

0x5b43,	// (0x00013624) popup_call4_audio_second_window

0xd0a7,	// (0x0001ab88) popup_call4_audio_wait_window_ParamLimits

0xd0a7,	// (0x0001ab88) popup_call4_audio_wait_window

0x5b55,	// (0x00013636) cell_call4_button_pane_ParamLimits

0x5b55,	// (0x00013636) cell_call4_button_pane

0x5b7a,	// (0x0001365b) bg_button_pane_cp09_ParamLimits

0x5b7a,	// (0x0001365b) bg_button_pane_cp09

0x5b86,	// (0x00013667) cell_call4_button_pane_g1_ParamLimits

0x5b86,	// (0x00013667) cell_call4_button_pane_g1

0x5bac,	// (0x0001368d) cell_call4_button_pane_t1_ParamLimits

0x5bac,	// (0x0001368d) cell_call4_button_pane_t1

0xd0ed,	// (0x0001abce) popup_call4_audio_conf_window_ParamLimits

0xd0ed,	// (0x0001abce) popup_call4_audio_conf_window

0x4eb1,	// (0x00012992) mup3_progress_pane_t1_ParamLimits

0x4ecf,	// (0x000129b0) mup3_progress_pane_t2_ParamLimits

0xc784,	// (0x0001a265) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0001d275) mup3_progress_pane_t_ParamLimits

0xc7a1,	// (0x0001a282) mup_progress_pane_cp03_ParamLimits

0x5479,	// (0x00012f5a) mup3_control_keys_pane_g4_copy1

0xcf7a,	// (0x0001aa5b) mp4_rocker2_pane_ParamLimits

0xcf7a,	// (0x0001aa5b) mp4_rocker2_pane

0xd101,	// (0x0001abe2) mp4_rocker2_pane_g1

0xd109,	// (0x0001abea) mp4_rocker2_pane_g2

0xd111,	// (0x0001abf2) mp4_rocker2_pane_g3

0xd119,	// (0x0001abfa) mp4_rocker2_pane_g4

0xd121,	// (0x0001ac02) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0001d3ae) mp4_rocker2_pane_g

0x955f,	// (0x00017040) main_camera4_pane

0x955f,	// (0x00017040) main_video4_pane

0x56b5,	// (0x00013196) main_video_tele_dialer_pane_t1_ParamLimits

0x56b5,	// (0x00013196) main_video_tele_dialer_pane_t1

0x56cc,	// (0x000131ad) main_video_tele_dialer_pane_t2_ParamLimits

0x56cc,	// (0x000131ad) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0001d364) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0001d364) main_video_tele_dialer_pane_t

0x5bea,	// (0x000136cb) cam4_autofocus_pane_ParamLimits

0x5bea,	// (0x000136cb) cam4_autofocus_pane

0x5bfe,	// (0x000136df) cam4_image_uncrop_pane_ParamLimits

0x5bfe,	// (0x000136df) cam4_image_uncrop_pane

0x5c15,	// (0x000136f6) cam4_indicators_pane_ParamLimits

0x5c15,	// (0x000136f6) cam4_indicators_pane

0x5c39,	// (0x0001371a) main_camera4_pane_g1_ParamLimits

0x5c39,	// (0x0001371a) main_camera4_pane_g1

0x5c45,	// (0x00013726) main_camera4_pane_g2_ParamLimits

0x5c45,	// (0x00013726) main_camera4_pane_g2

0x5c45,	// (0x00013726) main_camera4_pane_g3_ParamLimits

0x5c45,	// (0x00013726) main_camera4_pane_g3

0x5c51,	// (0x00013732) main_camera4_pane_g4_ParamLimits

0x5c51,	// (0x00013732) main_camera4_pane_g4

0x5c5d,	// (0x0001373e) main_camera4_pane_g5_ParamLimits

0x5c5d,	// (0x0001373e) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0001d3b9) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0001d3b9) main_camera4_pane_g

0x5c7a,	// (0x0001375b) main_camera4_pane_t1_ParamLimits

0x5c7a,	// (0x0001375b) main_camera4_pane_t1

0xc695,	// (0x0001a176) bg_tb_trans_pane_cp06

0xd14b,	// (0x0001ac2c) cam4_indicators_pane_g1

0xd15b,	// (0x0001ac3c) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0001d3d4) cam4_indicators_pane_g

0xd17b,	// (0x0001ac5c) cam4_indicators_pane_t1

0x5ccf,	// (0x000137b0) main_video4_pane_g1_ParamLimits

0x5ccf,	// (0x000137b0) main_video4_pane_g1

0x5ce1,	// (0x000137c2) main_video4_pane_g2_ParamLimits

0x5ce1,	// (0x000137c2) main_video4_pane_g2

0x5ce1,	// (0x000137c2) main_video4_pane_g3_ParamLimits

0x5ce1,	// (0x000137c2) main_video4_pane_g3

0x5cf0,	// (0x000137d1) main_video4_pane_g4_ParamLimits

0x5cf0,	// (0x000137d1) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0001d3db) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0001d3db) main_video4_pane_g

0x5d0e,	// (0x000137ef) vid4_indicators_pane_ParamLimits

0x5d0e,	// (0x000137ef) vid4_indicators_pane

0x5d36,	// (0x00013817) video4_image_uncrop_cif_pane_ParamLimits

0x5d36,	// (0x00013817) video4_image_uncrop_cif_pane

0x5d4e,	// (0x0001382f) video4_image_uncrop_nhd_pane_ParamLimits

0x5d4e,	// (0x0001382f) video4_image_uncrop_nhd_pane

0x5d62,	// (0x00013843) video4_image_uncrop_vga_pane_ParamLimits

0x5d62,	// (0x00013843) video4_image_uncrop_vga_pane

0x95b2,	// (0x00017093) bg_tb_trans_pane_cp07

0xd14b,	// (0x0001ac2c) vid4_indicators_pane_g1

0xd19d,	// (0x0001ac7e) vid4_indicators_pane_g2

0xd1ad,	// (0x0001ac8e) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0001d3e6) vid4_indicators_pane_g

0xd1da,	// (0x0001acbb) vid4_indicators_pane_t1

0x5d7a,	// (0x0001385b) cam4_autofocus_pane_g1

0x5d82,	// (0x00013863) cam4_autofocus_pane_g2

0x5d8a,	// (0x0001386b) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0001d3f1) cam4_autofocus_pane_g

0x5d92,	// (0x00013873) cam4_autofocus_pane_g3_copy1

0x56f7,	// (0x000131d8) video_down_pane_cp_t1

0x5705,	// (0x000131e6) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0001d369) video_down_pane_cp_t

0x95b2,	// (0x00017093) popup_vitu2_window_ParamLimits

0x95b2,	// (0x00017093) popup_vitu2_window

0x5d9a,	// (0x0001387b) aid_size_cell2_itu2_ParamLimits

0x5d9a,	// (0x0001387b) aid_size_cell2_itu2

0x5dc0,	// (0x000138a1) aid_size_cell_itu2_ParamLimits

0x5dc0,	// (0x000138a1) aid_size_cell_itu2

0x5e11,	// (0x000138f2) bg_popup_window_pane_cp09_ParamLimits

0x5e11,	// (0x000138f2) bg_popup_window_pane_cp09

0x5e1f,	// (0x00013900) field_vitu2_entry_pane_ParamLimits

0x5e1f,	// (0x00013900) field_vitu2_entry_pane

0x5e36,	// (0x00013917) grid_vitu2_function_pane_ParamLimits

0x5e36,	// (0x00013917) grid_vitu2_function_pane

0x5e6b,	// (0x0001394c) grid_vitu2_itu_pane_ParamLimits

0x5e6b,	// (0x0001394c) grid_vitu2_itu_pane

0x5ed2,	// (0x000139b3) cell_vitu2_itu_pane_ParamLimits

0x5ed2,	// (0x000139b3) cell_vitu2_itu_pane

0x5efa,	// (0x000139db) cell_vitu2_function_pane_ParamLimits

0x5efa,	// (0x000139db) cell_vitu2_function_pane

0xd1f4,	// (0x0001acd5) bg_popup_call_pane_cp08_ParamLimits

0xd1f4,	// (0x0001acd5) bg_popup_call_pane_cp08

0xd20b,	// (0x0001acec) field_vitu2_entry_pane_g1

0xd217,	// (0x0001acf8) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0001d3f8) field_vitu2_entry_pane_g

0x5f39,	// (0x00013a1a) field_vitu2_entry_pane_t1_ParamLimits

0x5f39,	// (0x00013a1a) field_vitu2_entry_pane_t1

0xd231,	// (0x0001ad12) field_vitu2_entry_pane_t2_ParamLimits

0xd231,	// (0x0001ad12) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0001d3ff) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0001d3ff) field_vitu2_entry_pane_t

0x5f66,	// (0x00013a47) bg_button_pane_cp010_ParamLimits

0x5f66,	// (0x00013a47) bg_button_pane_cp010

0xd256,	// (0x0001ad37) cell_vitu2_itu_pane_g1

0x5f82,	// (0x00013a63) cell_vitu2_itu_pane_t1_ParamLimits

0x5f82,	// (0x00013a63) cell_vitu2_itu_pane_t1

0x5fe0,	// (0x00013ac1) cell_vitu2_itu_pane_t2_ParamLimits

0x5fe0,	// (0x00013ac1) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0001d409) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0001d409) cell_vitu2_itu_pane_t

0x95b2,	// (0x00017093) bg_button_pane_cp011

0x60cc,	// (0x00013bad) cell_vitu2_function_pane_g1

0x955f,	// (0x00017040) main_myfav_hc_pane

0x5a52,	// (0x00013533) popup_image3_note_pane_ParamLimits

0x5a52,	// (0x00013533) popup_image3_note_pane

0x5a6c,	// (0x0001354d) popup_image3_tool_bar_pane_ParamLimits

0x5a6c,	// (0x0001354d) popup_image3_tool_bar_pane

0x606e,	// (0x00013b4f) cell_vitu2_itu_pane_t3_ParamLimits

0x606e,	// (0x00013b4f) cell_vitu2_itu_pane_t3

0x955f,	// (0x00017040) bg_popup_trans_pane

0xd268,	// (0x0001ad49) grid_image3_tool_bar_pane

0xd272,	// (0x0001ad53) bg_popup_trans_pane_g1

0xa22e,	// (0x00017d0f) bg_popup_trans_pane_g2

0xd27a,	// (0x0001ad5b) bg_popup_trans_pane_g3

0xd282,	// (0x0001ad63) bg_popup_trans_pane_g4

0xd28a,	// (0x0001ad6b) bg_popup_trans_pane_g5

0xd292,	// (0x0001ad73) bg_popup_trans_pane_g6

0xd29a,	// (0x0001ad7b) bg_popup_trans_pane_g7

0xd2a2,	// (0x0001ad83) bg_popup_trans_pane_g8

0xa20e,	// (0x00017cef) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0001d410) bg_popup_trans_pane_g

0xd2aa,	// (0x0001ad8b) cell_image3_tool_bar_pane_ParamLimits

0xd2aa,	// (0x0001ad8b) cell_image3_tool_bar_pane

0xc466,	// (0x00019f47) cell_image3_tool_bar_pane_g1

0x955f,	// (0x00017040) bg_popup_trans_pane_cp1

0xd2be,	// (0x0001ad9f) popup_image3_note_pane_t1

0xd2cc,	// (0x0001adad) popup_image3_note_pane_t2

0xd2da,	// (0x0001adbb) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0001d423) popup_image3_note_pane_t

0xd2e8,	// (0x0001adc9) popup_image3_note_pane_t3_copy1

0x60df,	// (0x00013bc0) bg_myfav_hc_instruction_pane_ParamLimits

0x60df,	// (0x00013bc0) bg_myfav_hc_instruction_pane

0x60f1,	// (0x00013bd2) cell_myfav_contact_pane_ParamLimits

0x60f1,	// (0x00013bd2) cell_myfav_contact_pane

0x610b,	// (0x00013bec) cell_myfav_contact_pane_cp1_ParamLimits

0x610b,	// (0x00013bec) cell_myfav_contact_pane_cp1

0x6121,	// (0x00013c02) cell_myfav_contact_pane_cp2_ParamLimits

0x6121,	// (0x00013c02) cell_myfav_contact_pane_cp2

0x6137,	// (0x00013c18) cell_myfav_contact_pane_cp3_ParamLimits

0x6137,	// (0x00013c18) cell_myfav_contact_pane_cp3

0x614c,	// (0x00013c2d) cell_myfav_contact_pane_cp4_ParamLimits

0x614c,	// (0x00013c2d) cell_myfav_contact_pane_cp4

0x6160,	// (0x00013c41) cell_myfav_contact_pane_cp5_ParamLimits

0x6160,	// (0x00013c41) cell_myfav_contact_pane_cp5

0x6174,	// (0x00013c55) cell_myfav_contact_pane_cp6_ParamLimits

0x6174,	// (0x00013c55) cell_myfav_contact_pane_cp6

0x6188,	// (0x00013c69) cell_myfav_contact_pane_cp7_ParamLimits

0x6188,	// (0x00013c69) cell_myfav_contact_pane_cp7

0xd2f6,	// (0x0001add7) listscroll_gen_pane_cp05

0x61a0,	// (0x00013c81) main_myfav_hc_pane_g1_ParamLimits

0x61a0,	// (0x00013c81) main_myfav_hc_pane_g1

0x61b6,	// (0x00013c97) main_myfav_hc_pane_g2_ParamLimits

0x61b6,	// (0x00013c97) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0001d42a) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0001d42a) main_myfav_hc_pane_g

0x61e0,	// (0x00013cc1) main_myfav_hc_pane_t1_ParamLimits

0x61e0,	// (0x00013cc1) main_myfav_hc_pane_t1

0xd2ff,	// (0x0001ade0) main_myfav_hc_pane_t2_ParamLimits

0xd2ff,	// (0x0001ade0) main_myfav_hc_pane_t2

0xd311,	// (0x0001adf2) main_myfav_hc_pane_t3_ParamLimits

0xd311,	// (0x0001adf2) main_myfav_hc_pane_t3

0x61f5,	// (0x00013cd6) main_myfav_hc_pane_t4_ParamLimits

0x61f5,	// (0x00013cd6) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0001d431) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0001d431) main_myfav_hc_pane_t

0xc466,	// (0x00019f47) bg_myfav_hc_instruction_pane_g1

0xd323,	// (0x0001ae04) cell_myfav_contact_pane_g1_ParamLimits

0xd323,	// (0x0001ae04) cell_myfav_contact_pane_g1

0xd323,	// (0x0001ae04) cell_myfav_contact_pane_g2_ParamLimits

0xd323,	// (0x0001ae04) cell_myfav_contact_pane_g2

0xd32f,	// (0x0001ae10) cell_myfav_contact_pane_g3_ParamLimits

0xd32f,	// (0x0001ae10) cell_myfav_contact_pane_g3

0xc76e,	// (0x0001a24f) cell_myfav_contact_pane_g4_ParamLimits

0xc76e,	// (0x0001a24f) cell_myfav_contact_pane_g4

0xd33c,	// (0x0001ae1d) cell_myfav_contact_pane_g5_ParamLimits

0xd33c,	// (0x0001ae1d) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0001d43c) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0001d43c) cell_myfav_contact_pane_g

0x61cc,	// (0x00013cad) main_myfav_hc_pane_g3_ParamLimits

0x61cc,	// (0x00013cad) main_myfav_hc_pane_g3

0x0c9e,	// (0x0000e77f) popup_adpt_find_window

0x6219,	// (0x00013cfa) afind_page_pane_ParamLimits

0x6219,	// (0x00013cfa) afind_page_pane

0x622e,	// (0x00013d0f) aid_size_cell_afind_ParamLimits

0x622e,	// (0x00013d0f) aid_size_cell_afind

0x624c,	// (0x00013d2d) bg_popup_sub_pane_cp09_ParamLimits

0x624c,	// (0x00013d2d) bg_popup_sub_pane_cp09

0x6259,	// (0x00013d3a) find_pane_cp01_ParamLimits

0x6259,	// (0x00013d3a) find_pane_cp01

0xd348,	// (0x0001ae29) grid_afind_control_pane_ParamLimits

0xd348,	// (0x0001ae29) grid_afind_control_pane

0x6266,	// (0x00013d47) grid_afind_pane_ParamLimits

0x6266,	// (0x00013d47) grid_afind_pane

0x6284,	// (0x00013d65) cell_afind_pane_ParamLimits

0x6284,	// (0x00013d65) cell_afind_pane

0xc466,	// (0x00019f47) afind_page_pane_g1

0x62d3,	// (0x00013db4) afind_page_pane_g2

0x62dc,	// (0x00013dbd) afind_page_pane_g3

0x0002,

0xf966,	// (0x0001d447) afind_page_pane_g

0x62e5,	// (0x00013dc6) afind_page_pane_t1

0xd35c,	// (0x0001ae3d) cell_afind_grid_control_pane_ParamLimits

0xd35c,	// (0x0001ae3d) cell_afind_grid_control_pane

0xd01e,	// (0x0001aaff) bg_button_pane_cp69_ParamLimits

0xd01e,	// (0x0001aaff) bg_button_pane_cp69

0x6305,	// (0x00013de6) cell_afind_pane_g1_ParamLimits

0x6305,	// (0x00013de6) cell_afind_pane_g1

0x6312,	// (0x00013df3) cell_afind_pane_t1_ParamLimits

0x6312,	// (0x00013df3) cell_afind_pane_t1

0xa01a,	// (0x00017afb) bg_button_pane_cp72

0xd36b,	// (0x0001ae4c) cell_afind_grid_control_pane_g1

0x36f2,	// (0x000111d3) aid_image_placing_area_ParamLimits

0x36f2,	// (0x000111d3) aid_image_placing_area

0xca81,	// (0x0001a562) field_vitu_entry_pane_g1_ParamLimits

0xca81,	// (0x0001a562) field_vitu_entry_pane_g1

0xca8d,	// (0x0001a56e) field_vitu_entry_pane_g2_ParamLimits

0xca8d,	// (0x0001a56e) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0001d2f4) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0001d2f4) field_vitu_entry_pane_g

0x552c,	// (0x0001300d) cell_vitu_itu_pane_g1_ParamLimits

0x556e,	// (0x0001304f) cell_vitu_itu_pane_t3_ParamLimits

0x556e,	// (0x0001304f) cell_vitu_itu_pane_t3

0xcfb6,	// (0x0001aa97) mp4_progress_pane_t1_ParamLimits

0xcfcd,	// (0x0001aaae) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0001d38d) mp4_progress_pane_t_ParamLimits

0xcfe4,	// (0x0001aac5) mup_progress_pane_cp04_ParamLimits

0x6207,	// (0x00013ce8) main_myfav_hc_pane_t5_ParamLimits

0x6207,	// (0x00013ce8) main_myfav_hc_pane_t5

0x9581,	// (0x00017062) aid_zoom_text_primary

0x0c9e,	// (0x0000e77f) popup_adpt_find_window_ParamLimits

0x95b2,	// (0x00017093) main_cam_set_pane

0x5c27,	// (0x00013708) cam4_zoom_pane_ParamLimits

0x5c27,	// (0x00013708) cam4_zoom_pane

0x6324,	// (0x00013e05) main_cam_set_pane_g1_ParamLimits

0x6324,	// (0x00013e05) main_cam_set_pane_g1

0x6332,	// (0x00013e13) main_cam_set_pane_g2_ParamLimits

0x6332,	// (0x00013e13) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0001d44e) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0001d44e) main_cam_set_pane_g

0x6351,	// (0x00013e32) main_cam_set_pane_t1_ParamLimits

0x6351,	// (0x00013e32) main_cam_set_pane_t1

0x6363,	// (0x00013e44) main_cset_listscroll_pane_ParamLimits

0x6363,	// (0x00013e44) main_cset_listscroll_pane

0x6381,	// (0x00013e62) main_cset_slider_pane_ParamLimits

0x6381,	// (0x00013e62) main_cset_slider_pane

0xd37c,	// (0x0001ae5d) main_cset_list_pane_ParamLimits

0xd37c,	// (0x0001ae5d) main_cset_list_pane

0xd38c,	// (0x0001ae6d) scroll_pane_cp028

0x63a5,	// (0x00013e86) aid_area_touch_slider

0x63c1,	// (0x00013ea2) cset_slider_pane

0x63eb,	// (0x00013ecc) main_cset_slider_pane_g1

0x6400,	// (0x00013ee1) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0001d453) main_cset_slider_pane_g

0xd3c5,	// (0x0001aea6) main_cset_slider_pane_t1

0x64bc,	// (0x00013f9d) main_cset_slider_pane_t2

0x64d6,	// (0x00013fb7) main_cset_slider_pane_t3

0x64f0,	// (0x00013fd1) main_cset_slider_pane_t4

0x650a,	// (0x00013feb) main_cset_slider_pane_t5

0x6524,	// (0x00014005) main_cset_slider_pane_t6

0x6539,	// (0x0001401a) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0001d478) main_cset_slider_pane_t

0x663d,	// (0x0001411e) cset_list_set_pane_ParamLimits

0x663d,	// (0x0001411e) cset_list_set_pane

0x664e,	// (0x0001412f) aid_position_infowindow_above

0x6656,	// (0x00014137) aid_position_infowindow_below

0x665e,	// (0x0001413f) cset_list_set_pane_g1_ParamLimits

0x665e,	// (0x0001413f) cset_list_set_pane_g1

0x666a,	// (0x0001414b) cset_list_set_pane_g3_ParamLimits

0x666a,	// (0x0001414b) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0001d497) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0001d497) cset_list_set_pane_g

0x6679,	// (0x0001415a) cset_list_set_pane_t1_ParamLimits

0x6679,	// (0x0001415a) cset_list_set_pane_t1

0x95b2,	// (0x00017093) list_highlight_pane_cp021_ParamLimits

0x95b2,	// (0x00017093) list_highlight_pane_cp021

0xab94,	// (0x00018675) cset_slider_pane_g1

0xaba6,	// (0x00018687) cset_slider_pane_g2

0xab9d,	// (0x0001867e) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0001d49c) cset_slider_pane_g

0xd465,	// (0x0001af46) aid_area_touch_cam4_zoom

0xd46d,	// (0x0001af4e) cam4_zoom_cont_pane

0xd475,	// (0x0001af56) cam4_zoom_pane_g1

0xd47d,	// (0x0001af5e) cam4_zoom_pane_g2

0x668e,	// (0x0001416f) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0001d4a3) cam4_zoom_pane_g

0xd485,	// (0x0001af66) cam4_zoom_cont_pane_g1

0xd48e,	// (0x0001af6f) cam4_zoom_cont_pane_g2

0xd497,	// (0x0001af78) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0001d4aa) cam4_zoom_cont_pane_g

0x5ad7,	// (0x000135b8) call4_image_pane_ParamLimits

0x5ad7,	// (0x000135b8) call4_image_pane

0xd074,	// (0x0001ab55) call4_windows_conf_pane_ParamLimits

0xd087,	// (0x0001ab68) popup_call4_audio_in_window_ParamLimits

0xd087,	// (0x0001ab68) popup_call4_audio_in_window

0x955f,	// (0x00017040) bg_popup_call2_act_pane_cp02

0xd0e5,	// (0x0001abc6) call4_list_conf_pane

0xc466,	// (0x00019f47) call4_image_pane_g1

0xc466,	// (0x00019f47) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0001d1b5) call4_image_pane_g

0xd4a0,	// (0x0001af81) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4a0,	// (0x0001af81) list_single_graphic_popup_conf4_pane

0x955f,	// (0x00017040) list_highlight_pane_cp022

0xd4b3,	// (0x0001af94) list_single_graphic_popup_conf4_pane_g1

0xa7b7,	// (0x00018298) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0001d4b1) list_single_graphic_popup_conf4_pane_g

0xd4bb,	// (0x0001af9c) list_single_graphic_popup_conf4_pane_t1

0x1d2b,	// (0x0000f80c) popup_vtel_slider_window_ParamLimits

0x1d2b,	// (0x0000f80c) popup_vtel_slider_window

0xcff0,	// (0x0001aad1) dialer2_ne_pane_t2_ParamLimits

0xcff0,	// (0x0001aad1) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0001d392) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0001d392) dialer2_ne_pane_t

0xc253,	// (0x00019d34) bg_popup_sub_pane_cp010_ParamLimits

0xc253,	// (0x00019d34) bg_popup_sub_pane_cp010

0x6696,	// (0x00014177) popup_vtel_slider_window_g1_ParamLimits

0x6696,	// (0x00014177) popup_vtel_slider_window_g1

0x66a9,	// (0x0001418a) popup_vtel_slider_window_g2_ParamLimits

0x66a9,	// (0x0001418a) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0001d4b6) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0001d4b6) popup_vtel_slider_window_g

0x66fd,	// (0x000141de) vtel_slider_pane_ParamLimits

0x66fd,	// (0x000141de) vtel_slider_pane

0x671f,	// (0x00014200) vtel_slider_pane_g1_ParamLimits

0x671f,	// (0x00014200) vtel_slider_pane_g1

0x6733,	// (0x00014214) vtel_slider_pane_g2_ParamLimits

0x6733,	// (0x00014214) vtel_slider_pane_g2

0x674b,	// (0x0001422c) vtel_slider_pane_g3_ParamLimits

0x674b,	// (0x0001422c) vtel_slider_pane_g3

0x671f,	// (0x00014200) vtel_slider_pane_g4_ParamLimits

0x671f,	// (0x00014200) vtel_slider_pane_g4

0x6761,	// (0x00014242) vtel_slider_pane_g5_ParamLimits

0x6761,	// (0x00014242) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0001d4bf) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0001d4bf) vtel_slider_pane_g

0x95b2,	// (0x00017093) main_gallery2_pane

0x5dec,	// (0x000138cd) aid_size_row_itut2_dropdow_list_ParamLimits

0x5dec,	// (0x000138cd) aid_size_row_itut2_dropdow_list

0x5e4f,	// (0x00013930) grid_vitu2_function_top_pane_ParamLimits

0x5e4f,	// (0x00013930) grid_vitu2_function_top_pane

0x5e94,	// (0x00013975) popup_vitu2_dropdown_list_window_ParamLimits

0x5e94,	// (0x00013975) popup_vitu2_dropdown_list_window

0x5eb0,	// (0x00013991) popup_vitu2_match_list_window

0x6777,	// (0x00014258) cell_vitu2_function_top_pane_ParamLimits

0x6777,	// (0x00014258) cell_vitu2_function_top_pane

0x678f,	// (0x00014270) cell_vitu2_function_top_pane_cp01_ParamLimits

0x678f,	// (0x00014270) cell_vitu2_function_top_pane_cp01

0x67ab,	// (0x0001428c) cell_vitu2_function_top_wide_pane_ParamLimits

0x67ab,	// (0x0001428c) cell_vitu2_function_top_wide_pane

0x95b2,	// (0x00017093) bg_button_pane_cp012

0x67c7,	// (0x000142a8) cell_vitu2_function_top_pane_g1

0xd4df,	// (0x0001afc0) bg_button_pane_cp013_ParamLimits

0xd4df,	// (0x0001afc0) bg_button_pane_cp013

0x67db,	// (0x000142bc) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x67db,	// (0x000142bc) cell_vitu2_function_top_wide_pane_g1

0x95b2,	// (0x00017093) bg_popup_sub_pane_cp20

0x67f3,	// (0x000142d4) list_vitu2_match_list_pane

0xd272,	// (0x0001ad53) bg_popup_sub_pane_cp20_g1

0xd27a,	// (0x0001ad5b) bg_popup_sub_pane_cp20_g2

0xa22e,	// (0x00017d0f) bg_popup_sub_pane_cp20_g3

0xd282,	// (0x0001ad63) bg_popup_sub_pane_cp20_g4

0xa20e,	// (0x00017cef) bg_popup_sub_pane_cp20_g5

0xd4fb,	// (0x0001afdc) bg_popup_sub_pane_cp20_g6

0xd292,	// (0x0001ad73) bg_popup_sub_pane_cp20_g7

0xd29a,	// (0x0001ad7b) bg_popup_sub_pane_cp20_g8

0xd2a2,	// (0x0001ad83) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0001d4ca) bg_popup_sub_pane_cp20_g

0xd503,	// (0x0001afe4) list_vitu2_match_list_item_pane_ParamLimits

0xd503,	// (0x0001afe4) list_vitu2_match_list_item_pane

0xd515,	// (0x0001aff6) list_vitu2_match_list_item_pane_t1

0x955f,	// (0x00017040) bg_popup_sub_pane_cp21

0xa686,	// (0x00018167) grid_vitu2_dropdown_list_pane

0x683d,	// (0x0001431e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x683d,	// (0x0001431e) cell_vitu2_dropdown_list_char_pane

0x685e,	// (0x0001433f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x685e,	// (0x0001433f) cell_vitu2_dropdown_list_ctrl_pane

0xd53b,	// (0x0001b01c) cell_vitu2_dropdown_list_char_pane_g1

0xd544,	// (0x0001b025) cell_vitu2_dropdown_list_char_pane_g2

0xd54d,	// (0x0001b02e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0001d4e7) cell_vitu2_dropdown_list_char_pane_g

0x688a,	// (0x0001436b) cell_vitu2_dropdown_list_char_pane_t1

0x6898,	// (0x00014379) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6898,	// (0x00014379) cell_vitu2_dropdown_list_ctrl_pane_g1

0x68a5,	// (0x00014386) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x68a5,	// (0x00014386) cell_vitu2_dropdown_list_ctrl_pane_g2

0x68b2,	// (0x00014393) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x68b2,	// (0x00014393) cell_vitu2_dropdown_list_ctrl_pane_g3

0x68bf,	// (0x000143a0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x68bf,	// (0x000143a0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc695,	// (0x0001a176) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc695,	// (0x0001a176) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0001d4ee) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0001d4ee) cell_vitu2_dropdown_list_ctrl_pane_g

0x68db,	// (0x000143bc) aid_size_cell_gallery2_ParamLimits

0x68db,	// (0x000143bc) aid_size_cell_gallery2

0x68f9,	// (0x000143da) grid_gallery2_pane_ParamLimits

0x68f9,	// (0x000143da) grid_gallery2_pane

0x5391,	// (0x00012e72) scroll_pane_cp029_ParamLimits

0x5391,	// (0x00012e72) scroll_pane_cp029

0x690d,	// (0x000143ee) cell_gallery2_pane_ParamLimits

0x690d,	// (0x000143ee) cell_gallery2_pane

0xd556,	// (0x0001b037) cell_gallery2_pane_g2

0x6966,	// (0x00014447) cell_gallery2_pane_g3

0xd55e,	// (0x0001b03f) cell_gallery2_pane_g4

0xd566,	// (0x0001b047) cell_gallery2_pane_g5

0x9f86,	// (0x00017a67) grid_highlight_pane_cp10

0x5eb0,	// (0x00013991) popup_vitu2_match_list_window_ParamLimits

0x5ec1,	// (0x000139a2) popup_vitu2_query_window_ParamLimits

0x5ec1,	// (0x000139a2) popup_vitu2_query_window

0x955f,	// (0x00017040) bg_vitu2_candi_button_pane

0xd53b,	// (0x0001b01c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd544,	// (0x0001b025) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd54d,	// (0x0001b02e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x696e,	// (0x0001444f) bg_button_pane_cp015

0x697e,	// (0x0001445f) bg_button_pane_cp016

0x6990,	// (0x00014471) bg_button_pane_cp017

0xbf52,	// (0x00019a33) bg_popup_sub_pane_cp22

0xd56e,	// (0x0001b04f) popup_vitu2_query_window_g1

0x69d1,	// (0x000144b2) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0001d4f9) popup_vitu2_query_window_g

0x69ec,	// (0x000144cd) popup_vitu2_query_window_t1_ParamLimits

0x69ec,	// (0x000144cd) popup_vitu2_query_window_t1

0x6a1f,	// (0x00014500) popup_vitu2_query_window_t2_ParamLimits

0x6a1f,	// (0x00014500) popup_vitu2_query_window_t2

0x6a31,	// (0x00014512) popup_vitu2_query_window_t3_ParamLimits

0x6a31,	// (0x00014512) popup_vitu2_query_window_t3

0x6a59,	// (0x0001453a) popup_vitu2_query_window_t4_ParamLimits

0x6a59,	// (0x0001453a) popup_vitu2_query_window_t4

0x6a76,	// (0x00014557) popup_vitu2_query_window_t5_ParamLimits

0x6a76,	// (0x00014557) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0001d500) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0001d500) popup_vitu2_query_window_t

0xd374,	// (0x0001ae55) main_cset_text_pane

0x63a5,	// (0x00013e86) aid_area_touch_slider_ParamLimits

0x63c1,	// (0x00013ea2) cset_slider_pane_ParamLimits

0x63eb,	// (0x00013ecc) main_cset_slider_pane_g1_ParamLimits

0x6400,	// (0x00013ee1) main_cset_slider_pane_g2_ParamLimits

0xd395,	// (0x0001ae76) main_cset_slider_pane_g3_ParamLimits

0xd395,	// (0x0001ae76) main_cset_slider_pane_g3

0x6415,	// (0x00013ef6) main_cset_slider_pane_g4_ParamLimits

0x6415,	// (0x00013ef6) main_cset_slider_pane_g4

0x6424,	// (0x00013f05) main_cset_slider_pane_g5_ParamLimits

0x6424,	// (0x00013f05) main_cset_slider_pane_g5

0x6430,	// (0x00013f11) main_cset_slider_pane_g6_ParamLimits

0x6430,	// (0x00013f11) main_cset_slider_pane_g6

0xf972,	// (0x0001d453) main_cset_slider_pane_g_ParamLimits

0xd3c5,	// (0x0001aea6) main_cset_slider_pane_t1_ParamLimits

0x64bc,	// (0x00013f9d) main_cset_slider_pane_t2_ParamLimits

0x64d6,	// (0x00013fb7) main_cset_slider_pane_t3_ParamLimits

0x64f0,	// (0x00013fd1) main_cset_slider_pane_t4_ParamLimits

0x650a,	// (0x00013feb) main_cset_slider_pane_t5_ParamLimits

0x6524,	// (0x00014005) main_cset_slider_pane_t6_ParamLimits

0x6539,	// (0x0001401a) main_cset_slider_pane_t7_ParamLimits

0x6563,	// (0x00014044) main_cset_slider_pane_t8_ParamLimits

0x6563,	// (0x00014044) main_cset_slider_pane_t8

0x658b,	// (0x0001406c) main_cset_slider_pane_t9_ParamLimits

0x658b,	// (0x0001406c) main_cset_slider_pane_t9

0x65b3,	// (0x00014094) main_cset_slider_pane_t10_ParamLimits

0x65b3,	// (0x00014094) main_cset_slider_pane_t10

0x65db,	// (0x000140bc) main_cset_slider_pane_t11_ParamLimits

0x65db,	// (0x000140bc) main_cset_slider_pane_t11

0x6603,	// (0x000140e4) main_cset_slider_pane_t12_ParamLimits

0x6603,	// (0x000140e4) main_cset_slider_pane_t12

0x6620,	// (0x00014101) main_cset_slider_pane_t13_ParamLimits

0x6620,	// (0x00014101) main_cset_slider_pane_t13

0xf997,	// (0x0001d478) main_cset_slider_pane_t_ParamLimits

0x955f,	// (0x00017040) bg_popup_sub_pane_cp011

0xd57a,	// (0x0001b05b) main_cset_text_pane_g1

0xd582,	// (0x0001b063) main_cset_text_pane_t1

0xd590,	// (0x0001b071) main_cset_text_pane_t2

0xd59e,	// (0x0001b07f) main_cset_text_pane_t3

0xd5ac,	// (0x0001b08d) main_cset_text_pane_t4

0xd5ba,	// (0x0001b09b) main_cset_text_pane_t5

0xd5c8,	// (0x0001b0a9) main_cset_text_pane_t6

0xd5d6,	// (0x0001b0b7) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0001d50f) main_cset_text_pane_t

0x955f,	// (0x00017040) main_cam4_burst_pane

0x955f,	// (0x00017040) main_cam5_pane

0x62f3,	// (0x00013dd4) bg_button_pane_cp019

0x62fc,	// (0x00013ddd) bg_button_pane_cp020

0xd3a1,	// (0x0001ae82) main_cset_slider_pane_g7_ParamLimits

0xd3a1,	// (0x0001ae82) main_cset_slider_pane_g7

0xd3ad,	// (0x0001ae8e) main_cset_slider_pane_g8_ParamLimits

0xd3ad,	// (0x0001ae8e) main_cset_slider_pane_g8

0x6444,	// (0x00013f25) main_cset_slider_pane_g9_ParamLimits

0x6444,	// (0x00013f25) main_cset_slider_pane_g9

0x6450,	// (0x00013f31) main_cset_slider_pane_g10_ParamLimits

0x6450,	// (0x00013f31) main_cset_slider_pane_g10

0x645c,	// (0x00013f3d) main_cset_slider_pane_g11_ParamLimits

0x645c,	// (0x00013f3d) main_cset_slider_pane_g11

0x6468,	// (0x00013f49) main_cset_slider_pane_g12_ParamLimits

0x6468,	// (0x00013f49) main_cset_slider_pane_g12

0x6474,	// (0x00013f55) main_cset_slider_pane_g13_ParamLimits

0x6474,	// (0x00013f55) main_cset_slider_pane_g13

0x6480,	// (0x00013f61) main_cset_slider_pane_g14_ParamLimits

0x6480,	// (0x00013f61) main_cset_slider_pane_g14

0x648c,	// (0x00013f6d) main_cset_slider_pane_g15_ParamLimits

0x648c,	// (0x00013f6d) main_cset_slider_pane_g15

0xd3f3,	// (0x0001aed4) main_cset_slider_pane_t14_ParamLimits

0xd3f3,	// (0x0001aed4) main_cset_slider_pane_t14

0xd42c,	// (0x0001af0d) main_cset_slider_pane_t15_ParamLimits

0xd42c,	// (0x0001af0d) main_cset_slider_pane_t15

0x6ae9,	// (0x000145ca) aid_cam4_burst_size_cell_ParamLimits

0x6ae9,	// (0x000145ca) aid_cam4_burst_size_cell

0x6b09,	// (0x000145ea) grid_cam4_burst_pane_ParamLimits

0x6b09,	// (0x000145ea) grid_cam4_burst_pane

0x6b2f,	// (0x00014610) linegrid_cam4_burst_pane_ParamLimits

0x6b2f,	// (0x00014610) linegrid_cam4_burst_pane

0x6b51,	// (0x00014632) scroll_pane_cp30_ParamLimits

0x6b51,	// (0x00014632) scroll_pane_cp30

0x6b5d,	// (0x0001463e) cell_cam4_burst_pane_ParamLimits

0x6b5d,	// (0x0001463e) cell_cam4_burst_pane

0xd5e4,	// (0x0001b0c5) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5e4,	// (0x0001b0c5) linegrid_cam4_burst_pane_g1

0x6ba4,	// (0x00014685) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ba4,	// (0x00014685) linegrid_cam4_burst_pane_g2

0xd5f1,	// (0x0001b0d2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5f1,	// (0x0001b0d2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0001d51e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0001d51e) linegrid_cam4_burst_pane_g

0x6bb5,	// (0x00014696) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6bb5,	// (0x00014696) linegrid_cam4_burst_pane_g3_copy1

0xd5fe,	// (0x0001b0df) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5fe,	// (0x0001b0df) linegrid_cam4_burst_pane_g4

0x6bcf,	// (0x000146b0) linegrid_cam4_burst_pane_g5_ParamLimits

0x6bcf,	// (0x000146b0) linegrid_cam4_burst_pane_g5

0x6be0,	// (0x000146c1) linegrid_cam4_burst_pane_g6_ParamLimits

0x6be0,	// (0x000146c1) linegrid_cam4_burst_pane_g6

0xd60b,	// (0x0001b0ec) linegrid_cam4_burst_pane_g7_ParamLimits

0xd60b,	// (0x0001b0ec) linegrid_cam4_burst_pane_g7

0x6bf1,	// (0x000146d2) cell_cam4_burst_pane_g1

0xd624,	// (0x0001b105) main_cam5_pane_t1_ParamLimits

0xd624,	// (0x0001b105) main_cam5_pane_t1

0xd636,	// (0x0001b117) main_cam5_pane_t2_ParamLimits

0xd636,	// (0x0001b117) main_cam5_pane_t2

0xd648,	// (0x0001b129) main_cam5_pane_t3_ParamLimits

0xd648,	// (0x0001b129) main_cam5_pane_t3

0xd65a,	// (0x0001b13b) main_cam5_pane_t4_ParamLimits

0xd65a,	// (0x0001b13b) main_cam5_pane_t4

0xd670,	// (0x0001b151) main_cam5_pane_t5_ParamLimits

0xd670,	// (0x0001b151) main_cam5_pane_t5

0xd682,	// (0x0001b163) main_cam5_pane_t6_ParamLimits

0xd682,	// (0x0001b163) main_cam5_pane_t6

0xd694,	// (0x0001b175) main_cam5_pane_t7_ParamLimits

0xd694,	// (0x0001b175) main_cam5_pane_t7

0xd6a6,	// (0x0001b187) main_cam5_pane_t8_ParamLimits

0xd6a6,	// (0x0001b187) main_cam5_pane_t8

0xd6c2,	// (0x0001b1a3) main_cam5_pane_t9_ParamLimits

0xd6c2,	// (0x0001b1a3) main_cam5_pane_t9

0xd6d4,	// (0x0001b1b5) main_cam5_pane_t10_ParamLimits

0xd6d4,	// (0x0001b1b5) main_cam5_pane_t10

0xd6e6,	// (0x0001b1c7) main_cam5_pane_t11_ParamLimits

0xd6e6,	// (0x0001b1c7) main_cam5_pane_t11

0xd6f8,	// (0x0001b1d9) main_cam5_pane_t12_ParamLimits

0xd6f8,	// (0x0001b1d9) main_cam5_pane_t12

0xd70d,	// (0x0001b1ee) main_cam5_pane_t13_ParamLimits

0xd70d,	// (0x0001b1ee) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0001d52a) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0001d52a) main_cam5_pane_t

0x0cfc,	// (0x0000e7dd) popup_scut_keymap_window_ParamLimits

0x0cfc,	// (0x0000e7dd) popup_scut_keymap_window

0x6c06,	// (0x000146e7) aid_size_cell_brow_shortcut

0x9f86,	// (0x00017a67) bg_popup_window_pane_cp010

0x6c12,	// (0x000146f3) grid_scut_pane

0x6c1c,	// (0x000146fd) cell_scut_pane_ParamLimits

0x6c1c,	// (0x000146fd) cell_scut_pane

0x6c31,	// (0x00014712) cell_scut_pane_g1

0xd72a,	// (0x0001b20b) cell_scut_pane_t1

0xd739,	// (0x0001b21a) cell_scut_pane_t2

0x6c3a,	// (0x0001471b) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0001d545) cell_scut_pane_t

0x4ac4,	// (0x000125a5) main_mup3_pane_g8_ParamLimits

0x4ac4,	// (0x000125a5) main_mup3_pane_g8

0x5dff,	// (0x000138e0) area_vitu2_query_pane_ParamLimits

0x5dff,	// (0x000138e0) area_vitu2_query_pane

0x69a2,	// (0x00014483) input_focus_pane_cp08

0xd748,	// (0x0001b229) area_vitu2_query_pane_g1

0x6c48,	// (0x00014729) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0001d54c) area_vitu2_query_pane_g

0x6c57,	// (0x00014738) area_vitu2_query_pane_t1_ParamLimits

0x6c57,	// (0x00014738) area_vitu2_query_pane_t1

0x6c69,	// (0x0001474a) area_vitu2_query_pane_t2_ParamLimits

0x6c69,	// (0x0001474a) area_vitu2_query_pane_t2

0x6c7b,	// (0x0001475c) area_vitu2_query_pane_t3_ParamLimits

0x6c7b,	// (0x0001475c) area_vitu2_query_pane_t3

0xd754,	// (0x0001b235) area_vitu2_query_pane_t4_ParamLimits

0xd754,	// (0x0001b235) area_vitu2_query_pane_t4

0xd77c,	// (0x0001b25d) area_vitu2_query_pane_t5_ParamLimits

0xd77c,	// (0x0001b25d) area_vitu2_query_pane_t5

0xd7a4,	// (0x0001b285) area_vitu2_query_pane_t6_ParamLimits

0xd7a4,	// (0x0001b285) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0001d551) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0001d551) area_vitu2_query_pane_t

0x6ca3,	// (0x00014784) bg_button_pane_cp018

0x6cb0,	// (0x00014791) bg_button_pane_cp021

0x6cbc,	// (0x0001479d) bg_button_pane_cp022

0x6ccb,	// (0x000147ac) input_focus_pane_cp09

0x2e93,	// (0x00010974) aid_size_touch_mv_arrow_left

0xa8f5,	// (0x000183d6) aid_size_touch_mv_arrow_right

0x64a4,	// (0x00013f85) main_cset_slider_pane_g16_ParamLimits

0x64a4,	// (0x00013f85) main_cset_slider_pane_g16

0x64b0,	// (0x00013f91) main_cset_slider_pane_g17_ParamLimits

0x64b0,	// (0x00013f91) main_cset_slider_pane_g17

0x6bf1,	// (0x000146d2) cell_cam4_burst_pane_g1_ParamLimits

0x955f,	// (0x00017040) compa_mode_pane

0x66b9,	// (0x0001419a) popup_vtel_slider_window_g3_ParamLimits

0x66b9,	// (0x0001419a) popup_vtel_slider_window_g3

0x66d0,	// (0x000141b1) popup_vtel_slider_window_g4_ParamLimits

0x66d0,	// (0x000141b1) popup_vtel_slider_window_g4

0x66e7,	// (0x000141c8) popup_vtel_slider_window_t1_ParamLimits

0x66e7,	// (0x000141c8) popup_vtel_slider_window_t1

0x955f,	// (0x00017040) main_cl_pane

0xbf82,	// (0x00019a63) popup_imed_adjust2_window_ParamLimits

0xbf52,	// (0x00019a33) bg_tb_trans_pane_cp05_ParamLimits

0xc9b6,	// (0x0001a497) popup_imed_adjust2_window_g1_ParamLimits

0xc9c5,	// (0x0001a4a6) popup_imed_adjust2_window_g2_ParamLimits

0xc9c5,	// (0x0001a4a6) popup_imed_adjust2_window_g2

0xc9d1,	// (0x0001a4b2) popup_imed_adjust2_window_g3_ParamLimits

0xc9d1,	// (0x0001a4b2) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0001d2b8) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0001d2b8) popup_imed_adjust2_window_g

0xc9dd,	// (0x0001a4be) popup_imed_adjust2_window_t1_ParamLimits

0xc9f5,	// (0x0001a4d6) slider_imed_adjust_pane_ParamLimits

0xca09,	// (0x0001a4ea) slider_imed_adjust_pane_g1_ParamLimits

0xca19,	// (0x0001a4fa) slider_imed_adjust_pane_g2_ParamLimits

0xca29,	// (0x0001a50a) slider_imed_adjust_pane_g3_ParamLimits

0xca3a,	// (0x0001a51b) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0001d2bf) slider_imed_adjust_pane_g_ParamLimits

0x5bd6,	// (0x000136b7) aid_touch_area_cam4_ParamLimits

0x5bd6,	// (0x000136b7) aid_touch_area_cam4

0xd129,	// (0x0001ac0a) battery_pane_cp01

0x5c6e,	// (0x0001374f) main_camera4_pane_g6_ParamLimits

0x5c6e,	// (0x0001374f) main_camera4_pane_g6

0x5c8f,	// (0x00013770) main_camera4_pane_t2_ParamLimits

0x5c8f,	// (0x00013770) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0001d3c6) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0001d3c6) main_camera4_pane_t

0x5cbd,	// (0x0001379e) aid_touch_area_vid4_ParamLimits

0x5cbd,	// (0x0001379e) aid_touch_area_vid4

0x5cff,	// (0x000137e0) main_video4_pane_g5_ParamLimits

0x5cff,	// (0x000137e0) main_video4_pane_g5

0x5d20,	// (0x00013801) vid4_progress_pane_ParamLimits

0x5d20,	// (0x00013801) vid4_progress_pane

0xd3b9,	// (0x0001ae9a) main_cset_slider_pane_g18_ParamLimits

0xd3b9,	// (0x0001ae9a) main_cset_slider_pane_g18

0xd618,	// (0x0001b0f9) cell_cam4_burst_pane_g2_ParamLimits

0xd618,	// (0x0001b0f9) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0001d525) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0001d525) cell_cam4_burst_pane_g

0x9d17,	// (0x000177f8) bg_cl_pane_ParamLimits

0x9d17,	// (0x000177f8) bg_cl_pane

0x6cda,	// (0x000147bb) cl_header_pane_ParamLimits

0x6cda,	// (0x000147bb) cl_header_pane

0x6cee,	// (0x000147cf) cl_listscroll_pane_ParamLimits

0x6cee,	// (0x000147cf) cl_listscroll_pane

0xd7f0,	// (0x0001b2d1) bg_cl_pane_g1

0xd7f8,	// (0x0001b2d9) bg_cl_pane_g2

0xd800,	// (0x0001b2e1) bg_cl_pane_g3

0xd808,	// (0x0001b2e9) bg_cl_pane_g4

0xd810,	// (0x0001b2f1) bg_cl_pane_g5

0xd818,	// (0x0001b2f9) bg_cl_pane_g6

0xd820,	// (0x0001b301) bg_cl_pane_g7

0xd828,	// (0x0001b309) bg_cl_pane_g8

0xd830,	// (0x0001b311) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0001d560) bg_cl_pane_g

0x6cfe,	// (0x000147df) aid_height_cl_leading_ParamLimits

0x6cfe,	// (0x000147df) aid_height_cl_leading

0x6d0a,	// (0x000147eb) aid_height_cl_text_ParamLimits

0x6d0a,	// (0x000147eb) aid_height_cl_text

0x95b2,	// (0x00017093) bg_cl_header_pane_ParamLimits

0x95b2,	// (0x00017093) bg_cl_header_pane

0x6d29,	// (0x0001480a) cl_header_pane_g1_ParamLimits

0x6d29,	// (0x0001480a) cl_header_pane_g1

0x6d3f,	// (0x00014820) cl_header_pane_t1_ParamLimits

0x6d3f,	// (0x00014820) cl_header_pane_t1

0xd838,	// (0x0001b319) cl_list_pane

0xd841,	// (0x0001b322) hc_scroll_pane_cp01

0xa20e,	// (0x00017cef) bg_cl_header_pane_g1

0xd272,	// (0x0001ad53) bg_cl_header_pane_g2

0xa22e,	// (0x00017d0f) bg_cl_header_pane_g3

0xd282,	// (0x0001ad63) bg_cl_header_pane_g4

0xd27a,	// (0x0001ad5b) bg_cl_header_pane_g5

0xd4fb,	// (0x0001afdc) bg_cl_header_pane_g6

0xd29a,	// (0x0001ad7b) bg_cl_header_pane_g7

0xd2a2,	// (0x0001ad83) bg_cl_header_pane_g8

0xd292,	// (0x0001ad73) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0001d573) bg_cl_header_pane_g

0x6d58,	// (0x00014839) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6d58,	// (0x00014839) hc_cl_list_double_graphic_heading_pane

0x6d68,	// (0x00014849) hc_cl_list_single_graphic_pane_ParamLimits

0x6d68,	// (0x00014849) hc_cl_list_single_graphic_pane

0x6d7b,	// (0x0001485c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d7b,	// (0x0001485c) hc_cl_list_single_graphic_pane_g1

0x6d87,	// (0x00014868) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d87,	// (0x00014868) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0001d586) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0001d586) hc_cl_list_single_graphic_pane_g

0x6d9b,	// (0x0001487c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6d9b,	// (0x0001487c) hc_cl_list_single_graphic_pane_t1

0x6d7b,	// (0x0001485c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d7b,	// (0x0001485c) hc_cl_list_double_graphic_heading_pane_g1

0x6db0,	// (0x00014891) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6db0,	// (0x00014891) hc_cl_list_double_graphic_heading_pane_g2

0x6dc4,	// (0x000148a5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6dc4,	// (0x000148a5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0001d58b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0001d58b) hc_cl_list_double_graphic_heading_pane_g

0x6dd8,	// (0x000148b9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6dd8,	// (0x000148b9) hc_cl_list_double_graphic_heading_pane_t1

0x6ded,	// (0x000148ce) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6ded,	// (0x000148ce) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0001d592) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0001d592) hc_cl_list_double_graphic_heading_pane_t

0xd84a,	// (0x0001b32b) vid4_progress_pane_g1

0xd859,	// (0x0001b33a) vid4_progress_pane_g2

0xd868,	// (0x0001b349) vid4_progress_pane_g3

0xd877,	// (0x0001b358) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0001d597) vid4_progress_pane_g

0xd883,	// (0x0001b364) vid4_progress_pane_t1

0xd899,	// (0x0001b37a) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0001d5a2) vid4_progress_pane_t

0xd8c3,	// (0x0001b3a4) wait_bar_pane_cp07

0xc261,	// (0x00019d42) blid_firmament_pane_ParamLimits

0xc2a2,	// (0x00019d83) popup_blid_sat_info2_window_g1

0xc2c6,	// (0x00019da7) popup_blid_sat_info2_window_t3

0xc2d4,	// (0x00019db5) popup_blid_sat_info2_window_t4

0xc2e2,	// (0x00019dc3) popup_blid_sat_info2_window_t5

0xc2f0,	// (0x00019dd1) popup_blid_sat_info2_window_t6

0xc300,	// (0x00019de1) popup_blid_sat_info2_window_t7

0xc30e,	// (0x00019def) popup_blid_sat_info2_window_t8

0xc31c,	// (0x00019dfd) popup_blid_sat_info2_window_t9

0xc32a,	// (0x00019e0b) popup_blid_sat_info2_window_t10

0xc3e6,	// (0x00019ec7) aid_firma_cardinal_ParamLimits

0xc3fa,	// (0x00019edb) blid_firmament_pane_t1_ParamLimits

0xc411,	// (0x00019ef2) blid_firmament_pane_t2_ParamLimits

0xc428,	// (0x00019f09) blid_firmament_pane_t3_ParamLimits

0xc43f,	// (0x00019f20) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0001d1ac) blid_firmament_pane_t_ParamLimits

0xc456,	// (0x00019f37) blid_sat_info_pane_ParamLimits

0x95b2,	// (0x00017093) main_cam_set_pane_ParamLimits

0x5312,	// (0x00012df3) aid_size_cell_colour_35_ParamLimits

0x5332,	// (0x00012e13) aid_size_cell_colour_112_ParamLimits

0x5352,	// (0x00012e33) aid_size_cell_effect_ParamLimits

0xbf52,	// (0x00019a33) bg_tb_trans_pane_cp02_ParamLimits

0xa48e,	// (0x00017f6f) heading_imed_pane_ParamLimits

0x5372,	// (0x00012e53) listscroll_imed_pane_ParamLimits

0xb538,	// (0x00019019) popup_call2_audio_first_window_g5_ParamLimits

0xb538,	// (0x00019019) popup_call2_audio_first_window_g5

0x588f,	// (0x00013370) aid_size_touch_image3_arrow_left_ParamLimits

0x588f,	// (0x00013370) aid_size_touch_image3_arrow_left

0x58af,	// (0x00013390) aid_size_touch_image3_arrow_right_ParamLimits

0x58af,	// (0x00013390) aid_size_touch_image3_arrow_right

0xd8ae,	// (0x0001b38f) vid4_progress_pane_t3

0x5646,	// (0x00013127) main_hwr_training_symbol_option_pane_ParamLimits

0x5646,	// (0x00013127) main_hwr_training_symbol_option_pane

0xcc95,	// (0x0001a776) popup_hwr_training_preview_window_ParamLimits

0xcc95,	// (0x0001a776) popup_hwr_training_preview_window

0x5662,	// (0x00013143) hwr_training_navi_pane_g5_ParamLimits

0x5662,	// (0x00013143) hwr_training_navi_pane_g5

0xd24e,	// (0x0001ad2f) popup_char_count_window

0x95b2,	// (0x00017093) bg_popup_sub_pane_cp20_ParamLimits

0x67f3,	// (0x000142d4) list_vitu2_match_list_pane_ParamLimits

0x6802,	// (0x000142e3) vitu2_page_scroll_pane_ParamLimits

0x6802,	// (0x000142e3) vitu2_page_scroll_pane

0xd907,	// (0x0001b3e8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd907,	// (0x0001b3e8) list_single_hwr_training_symbol_option_pane

0xd91a,	// (0x0001b3fb) list_single_hwr_training_symbol_option_pane_g1

0xd922,	// (0x0001b403) list_single_hwr_training_symbol_option_pane_t1

0xd930,	// (0x0001b411) bg_button_pane_cp023

0xd939,	// (0x0001b41a) bg_button_pane_cp024

0x6e28,	// (0x00014909) vitu2_page_scroll_pane_g1

0x6e30,	// (0x00014911) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0001d5a9) vitu2_page_scroll_pane_g

0x6e38,	// (0x00014919) vitu2_page_scroll_pane_t1

0xc48f,	// (0x00019f70) popup_char_count_window_g1

0xd96c,	// (0x0001b44d) popup_char_count_window_g2

0xd975,	// (0x0001b456) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0001d5ae) popup_char_count_window_g

0xd97e,	// (0x0001b45f) popup_char_count_window_t1

0x955f,	// (0x00017040) main_vded2_pane

0xc9a4,	// (0x0001a485) aid_size_cell_imed_line

0xc9ae,	// (0x0001a48f) grid_imed_line_width_pane

0xd1be,	// (0x0001ac9f) vid4_indicators_pane_g4

0xd98c,	// (0x0001b46d) cell_imed_line_width_pane_ParamLimits

0xd98c,	// (0x0001b46d) cell_imed_line_width_pane

0xd99e,	// (0x0001b47f) cell_imed_line_width_pane_g1

0xd9a7,	// (0x0001b488) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0001d5b5) cell_imed_line_width_pane_g

0x6e47,	// (0x00014928) main_vded2_pane_g1_ParamLimits

0x6e47,	// (0x00014928) main_vded2_pane_g1

0x6e5d,	// (0x0001493e) main_vded2_pane_g2_ParamLimits

0x6e5d,	// (0x0001493e) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0001d5ba) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0001d5ba) main_vded2_pane_g

0x6e6d,	// (0x0001494e) vded2_slider_pane_ParamLimits

0x6e6d,	// (0x0001494e) vded2_slider_pane

0x6e80,	// (0x00014961) aid_size_touch_vded2_end

0x6e88,	// (0x00014969) aid_size_touch_vded2_playhead

0x6e90,	// (0x00014971) aid_size_touch_vded2_start

0x6e98,	// (0x00014979) vded2_slider_bg_pane

0x6ea1,	// (0x00014982) vded2_slider_pane_g1

0x6eaa,	// (0x0001498b) vded2_slider_pane_g2

0x6eb2,	// (0x00014993) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0001d5bf) vded2_slider_pane_g

0x6ebb,	// (0x0001499c) vded2_slider_bg_pane_g1

0x6ec4,	// (0x000149a5) vded2_slider_bg_pane_g2

0x6ecd,	// (0x000149ae) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0001d5c6) vded2_slider_bg_pane_g

0x33a1,	// (0x00010e82) aid_postcard_touch_down_pane_ParamLimits

0x33a1,	// (0x00010e82) aid_postcard_touch_down_pane

0x33b3,	// (0x00010e94) aid_postcard_touch_up_pane_ParamLimits

0x33b3,	// (0x00010e94) aid_postcard_touch_up_pane

0x955f,	// (0x00017040) main_blid2_pane

0xbf6a,	// (0x00019a4b) popup_blid2_search_window

0x955f,	// (0x00017040) blid2_gps_pane

0x955f,	// (0x00017040) blid2_navig_pane

0x955f,	// (0x00017040) blid2_search_pane

0x955f,	// (0x00017040) blid2_tripm_pane

0x6ed6,	// (0x000149b7) blid2_search_pane_g1_ParamLimits

0x6ed6,	// (0x000149b7) blid2_search_pane_g1

0x6eea,	// (0x000149cb) blid2_search_pane_t1_ParamLimits

0x6eea,	// (0x000149cb) blid2_search_pane_t1

0x6efc,	// (0x000149dd) aid_size_cell_blid2_gps_ParamLimits

0x6efc,	// (0x000149dd) aid_size_cell_blid2_gps

0x6f14,	// (0x000149f5) blid2_gps_pane_g1_ParamLimits

0x6f14,	// (0x000149f5) blid2_gps_pane_g1

0x6f28,	// (0x00014a09) grid_blid2_satellite_pane_ParamLimits

0x6f28,	// (0x00014a09) grid_blid2_satellite_pane

0x6f3c,	// (0x00014a1d) blid2_navig_pane_g1_ParamLimits

0x6f3c,	// (0x00014a1d) blid2_navig_pane_g1

0x6f48,	// (0x00014a29) blid2_navig_pane_t1_ParamLimits

0x6f48,	// (0x00014a29) blid2_navig_pane_t1

0x6f61,	// (0x00014a42) blid2_navig_pane_t2_ParamLimits

0x6f61,	// (0x00014a42) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0001d5cd) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0001d5cd) blid2_navig_pane_t

0x6f7a,	// (0x00014a5b) blid2_navig_ring_pane_ParamLimits

0x6f7a,	// (0x00014a5b) blid2_navig_ring_pane

0x6f8f,	// (0x00014a70) blid2_speed_pane_ParamLimits

0x6f8f,	// (0x00014a70) blid2_speed_pane

0x6f9b,	// (0x00014a7c) blid2_tripm_pane_g1_ParamLimits

0x6f9b,	// (0x00014a7c) blid2_tripm_pane_g1

0x6fb0,	// (0x00014a91) blid2_tripm_pane_g2_ParamLimits

0x6fb0,	// (0x00014a91) blid2_tripm_pane_g2

0x6fc4,	// (0x00014aa5) blid2_tripm_pane_g3_ParamLimits

0x6fc4,	// (0x00014aa5) blid2_tripm_pane_g3

0x6fd8,	// (0x00014ab9) blid2_tripm_pane_g4_ParamLimits

0x6fd8,	// (0x00014ab9) blid2_tripm_pane_g4

0x6fec,	// (0x00014acd) blid2_tripm_pane_g5_ParamLimits

0x6fec,	// (0x00014acd) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0001d5d2) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0001d5d2) blid2_tripm_pane_g

0x700e,	// (0x00014aef) blid2_tripm_pane_t1_ParamLimits

0x700e,	// (0x00014aef) blid2_tripm_pane_t1

0x7025,	// (0x00014b06) blid2_tripm_pane_t2_ParamLimits

0x7025,	// (0x00014b06) blid2_tripm_pane_t2

0x703c,	// (0x00014b1d) blid2_tripm_pane_t3_ParamLimits

0x703c,	// (0x00014b1d) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0001d5df) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0001d5df) blid2_tripm_pane_t

0x707f,	// (0x00014b60) cell_blid2_satellite_pane_ParamLimits

0x707f,	// (0x00014b60) cell_blid2_satellite_pane

0x7097,	// (0x00014b78) cell_blid2_satellite_pane_g1

0xd9af,	// (0x0001b490) cell_blid2_satellite_pane_t1

0xc466,	// (0x00019f47) blid2_speed_pane_g1

0xd9bd,	// (0x0001b49e) blid2_speed_pane_t1

0xd9cb,	// (0x0001b4ac) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0001d5e8) blid2_speed_pane_t

0xc466,	// (0x00019f47) blid2_navig_ring_pane_g1

0x70a0,	// (0x00014b81) blid2_navig_ring_pane_g2

0x70a8,	// (0x00014b89) blid2_navig_ring_pane_g3

0x70b0,	// (0x00014b91) blid2_navig_ring_pane_g4

0x70b8,	// (0x00014b99) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0001d5ed) blid2_navig_ring_pane_g

0x955f,	// (0x00017040) bg_popup_window_pane_cp011

0xd9d9,	// (0x0001b4ba) popup_blid2_search_window_g1

0xd9e1,	// (0x0001b4c2) popup_blid2_search_window_t1

0xd9ef,	// (0x0001b4d0) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0001d5f8) popup_blid2_search_window_t

0xa11d,	// (0x00017bfe) main_browser_pane_g1

0x9d17,	// (0x000177f8) main_browser_pane_ParamLimits

0x95b2,	// (0x00017093) bg_button_pane_cp011_ParamLimits

0x60cc,	// (0x00013bad) cell_vitu2_function_pane_g1_ParamLimits

0xbf52,	// (0x00019a33) bg_popup_sub_pane_cp22_ParamLimits

0x69a2,	// (0x00014483) input_focus_pane_cp08_ParamLimits

0x69b9,	// (0x0001449a) popup_vitu2_query_button_pane_ParamLimits

0x69b9,	// (0x0001449a) popup_vitu2_query_button_pane

0x69c9,	// (0x000144aa) popup_vitu2_query_input_button_pane

0xd56e,	// (0x0001b04f) popup_vitu2_query_window_g1_ParamLimits

0x69d1,	// (0x000144b2) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0001d4f9) popup_vitu2_query_window_g_ParamLimits

0x955f,	// (0x00017040) bg_button_pane_cp026

0x70c0,	// (0x00014ba1) popup_vitu2_query_input_button_pane_g1

0x955f,	// (0x00017040) bg_button_pane_cp025

0xd9fd,	// (0x0001b4de) popup_vitu2_query_button_pane_t1

0x47e0,	// (0x000122c1) main_mp3_pane_t6

0x47ee,	// (0x000122cf) popup_slider_window_cp01

0xd143,	// (0x0001ac24) cam4_battery_pane

0xd143,	// (0x0001ac24) cam4_battery_pane_cp02

0xd143,	// (0x0001ac24) cam4_battery_pane_cp01

0xd143,	// (0x0001ac24) cam4_battery_pane_cp03

0xc466,	// (0x00019f47) cam4_battery_pane_g1

0xda0b,	// (0x0001b4ec) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0001d5fd) cam4_battery_pane_g

0xc338,	// (0x00019e19) popup_blid_sat_info2_window_t11

0x2e93,	// (0x00010974) aid_size_touch_mv_arrow_left_ParamLimits

0xa8f5,	// (0x000183d6) aid_size_touch_mv_arrow_right_ParamLimits

0xa94e,	// (0x0001842f) navi_pane_g1_ParamLimits

0xa95a,	// (0x0001843b) navi_pane_g2_ParamLimits

0x2eb7,	// (0x00010998) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0001ceab) navi_pane_g_ParamLimits

0x2ed4,	// (0x000109b5) navi_pane_mv_t1_ParamLimits

0x537e,	// (0x00012e5f) grid_imed_effect_pane_ParamLimits

0x1c3e,	// (0x0000f71f) aid_placing_vt_slider_lsc

0xa05f,	// (0x00017b40) aid_placing_vt_slider_prt

0x95b2,	// (0x00017093) bg_tb_trans_pane_cp01_ParamLimits

0xc5b5,	// (0x0001a096) popup_image_details_window_g1_ParamLimits

0xc5c8,	// (0x0001a0a9) popup_image_details_window_g2_ParamLimits

0xc5dd,	// (0x0001a0be) popup_image_details_window_g3_ParamLimits

0xc5dd,	// (0x0001a0be) popup_image_details_window_g3

0xf710,	// (0x0001d1f1) popup_image_details_window_g_ParamLimits

0xc5f1,	// (0x0001a0d2) popup_image_details_window_t1_ParamLimits

0xc603,	// (0x0001a0e4) popup_image_details_window_t2_ParamLimits

0xc61c,	// (0x0001a0fd) popup_image_details_window_t3_ParamLimits

0xc630,	// (0x0001a111) popup_image_details_window_t4_ParamLimits

0xc64b,	// (0x0001a12c) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0001d1f8) popup_image_details_window_t_ParamLimits

0x6d16,	// (0x000147f7) cl_header_name_pane_ParamLimits

0x6d16,	// (0x000147f7) cl_header_name_pane

0x70c8,	// (0x00014ba9) cl_header_name_pane_t1_ParamLimits

0x70c8,	// (0x00014ba9) cl_header_name_pane_t1

0x70e9,	// (0x00014bca) cl_header_name_pane_t2_ParamLimits

0x70e9,	// (0x00014bca) cl_header_name_pane_t2

0x712b,	// (0x00014c0c) cl_header_name_pane_t3_ParamLimits

0x712b,	// (0x00014c0c) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0001d602) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0001d602) cl_header_name_pane_t

0xa9e7,	// (0x000184c8) navi_pane_mv_g2_ParamLimits

0xd20b,	// (0x0001acec) field_vitu2_entry_pane_g1_ParamLimits

0xd217,	// (0x0001acf8) field_vitu2_entry_pane_g2_ParamLimits

0xd223,	// (0x0001ad04) field_vitu2_entry_pane_g3_ParamLimits

0xd223,	// (0x0001ad04) field_vitu2_entry_pane_g3

0xf917,	// (0x0001d3f8) field_vitu2_entry_pane_g_ParamLimits

0xd256,	// (0x0001ad37) cell_vitu2_itu_pane_g1_ParamLimits

0x5f74,	// (0x00013a55) cell_vitu2_itu_pane_g2_ParamLimits

0x5f74,	// (0x00013a55) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0001d404) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0001d404) cell_vitu2_itu_pane_g

0x95b2,	// (0x00017093) bg_vkb2_func_pane_cp05_ParamLimits

0x95b2,	// (0x00017093) bg_vkb2_func_pane_cp05

0x95b2,	// (0x00017093) bg_vkb2_func_pane_cp03

0x95b2,	// (0x00017093) bg_vkb2_func_pane_cp04

0x95b2,	// (0x00017093) bg_vkb2_func_pane_cp10_ParamLimits

0x95b2,	// (0x00017093) bg_vkb2_func_pane_cp10

0x6cbc,	// (0x0001479d) bg_vkb2_func_pane_cp08

0x6ca3,	// (0x00014784) bg_vkb2_func_pane_cp06

0x6cb0,	// (0x00014791) bg_vkb2_func_pane_cp07

0xd942,	// (0x0001b423) bg_vkb2_func_pane_cp11_ParamLimits

0xd942,	// (0x0001b423) bg_vkb2_func_pane_cp11

0xd957,	// (0x0001b438) bg_vkb2_func_pane_cp12_ParamLimits

0xd957,	// (0x0001b438) bg_vkb2_func_pane_cp12

0x955f,	// (0x00017040) bg_vkb2_func_pane_cp09

0xd272,	// (0x0001ad53) bg_vkb2_func_pane_g1

0xa22e,	// (0x00017d0f) bg_vkb2_func_pane_g2

0xd27a,	// (0x0001ad5b) bg_vkb2_func_pane_g3

0xd282,	// (0x0001ad63) bg_vkb2_func_pane_g4

0xd4fb,	// (0x0001afdc) bg_vkb2_func_pane_g5

0xd29a,	// (0x0001ad7b) bg_vkb2_func_pane_g6

0xd2a2,	// (0x0001ad83) bg_vkb2_func_pane_g7

0xd292,	// (0x0001ad73) bg_vkb2_func_pane_g8

0xa20e,	// (0x00017cef) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0001d609) bg_vkb2_func_pane_g

0x6ffe,	// (0x00014adf) blid2_tripm_pane_g6_ParamLimits

0x6ffe,	// (0x00014adf) blid2_tripm_pane_g6

0xcfae,	// (0x0001aa8f) mp4_progress_pane_g1

0x706d,	// (0x00014b4e) blid2_tripm_values_pane_ParamLimits

0x706d,	// (0x00014b4e) blid2_tripm_values_pane

0x715c,	// (0x00014c3d) blid2_tripm_values_pane_t1

0x716a,	// (0x00014c4b) blid2_tripm_values_pane_t2

0x7178,	// (0x00014c59) blid2_tripm_values_pane_t3

0x7186,	// (0x00014c67) blid2_tripm_values_pane_t4

0x7194,	// (0x00014c75) blid2_tripm_values_pane_t5

0x71a2,	// (0x00014c83) blid2_tripm_values_pane_t6

0x71b0,	// (0x00014c91) blid2_tripm_values_pane_t7

0x71be,	// (0x00014c9f) blid2_tripm_values_pane_t8

0x71cc,	// (0x00014cad) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0001d61c) blid2_tripm_values_pane_t

0x1c78,	// (0x0000f759) call_video_pane_t1_ParamLimits

0x1c92,	// (0x0000f773) call_video_pane_t2_ParamLimits

0xf253,	// (0x0001cd34) call_video_pane_t_ParamLimits

0x3329,	// (0x00010e0a) msg_header_pane_g1_ParamLimits

0xabe1,	// (0x000186c2) msg_header_pane_g2_ParamLimits

0xabe1,	// (0x000186c2) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0001cf4e) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0001cf4e) msg_header_pane_g

0x9d17,	// (0x000177f8) main_clock2_pane_ParamLimits

0x5095,	// (0x00012b76) grid_clock2_toolbar_pane_ParamLimits

0x5095,	// (0x00012b76) grid_clock2_toolbar_pane

0x5095,	// (0x00012b76) listscroll_clock2_pane_ParamLimits

0x5095,	// (0x00012b76) listscroll_clock2_pane

0x5178,	// (0x00012c59) main_clock2_pane_t3_ParamLimits

0x5178,	// (0x00012c59) main_clock2_pane_t3

0x519a,	// (0x00012c7b) main_clock2_pane_t4_ParamLimits

0x519a,	// (0x00012c7b) main_clock2_pane_t4

0xda15,	// (0x0001b4f6) cell_clock2_toolbar_pane

0xda1d,	// (0x0001b4fe) cell_clock2_toolbar_pane_cp01

0xda1d,	// (0x0001b4fe) cell_clock2_toolbar_pane_cp02

0xda25,	// (0x0001b506) cell_clock2_toolbar_pane_cp03

0xda2d,	// (0x0001b50e) list_clock2_pane

0xda35,	// (0x0001b516) scroll_pane_cp10

0xda3d,	// (0x0001b51e) list_single_clock2_pane_ParamLimits

0xda3d,	// (0x0001b51e) list_single_clock2_pane

0x9f86,	// (0x00017a67) list_highlight_pane_cp08

0xda4a,	// (0x0001b52b) list_single_clock2_pane_t1

0xda58,	// (0x0001b539) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0001d62f) list_single_clock2_pane_t

0x955f,	// (0x00017040) bg_button_pane_cp10

0xda66,	// (0x0001b547) cell_clock2_toolbar_pane_g1

0x3335,	// (0x00010e16) aid_main_viewer_pane_g1_ParamLimits

0x3335,	// (0x00010e16) aid_main_viewer_pane_g1

0x3341,	// (0x00010e22) aid_main_viewer_pane_g2_ParamLimits

0x3341,	// (0x00010e22) aid_main_viewer_pane_g2

0x334d,	// (0x00010e2e) aid_main_viewer_pane_g3_ParamLimits

0x334d,	// (0x00010e2e) aid_main_viewer_pane_g3

0x335c,	// (0x00010e3d) aid_main_viewer_pane_g4_ParamLimits

0x335c,	// (0x00010e3d) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0001cf5f) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0001cf5f) aid_main_viewer_pane_g

0x95b2,	// (0x00017093) main_calc_pane_ParamLimits

0x3b50,	// (0x00011631) main_dialer2_pane_ParamLimits

0x955f,	// (0x00017040) main_cam6_pane

0x955f,	// (0x00017040) main_vid6_pane

0x50a1,	// (0x00012b82) listscroll_gen_pane_cp06_ParamLimits

0x50a1,	// (0x00012b82) listscroll_gen_pane_cp06

0x51bb,	// (0x00012c9c) main_clock2_pane_t5_ParamLimits

0x51bb,	// (0x00012c9c) main_clock2_pane_t5

0x5213,	// (0x00012cf4) aid_call2_pane_cp10_ParamLimits

0x5225,	// (0x00012d06) aid_call_pane_cp10_ParamLimits

0xa8e9,	// (0x000183ca) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa8e9,	// (0x000183ca) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5237,	// (0x00012d18) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5237,	// (0x00012d18) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa8e9,	// (0x000183ca) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0001d2ad) popup_clock_analogue_window_cp10_g_ParamLimits

0x5249,	// (0x00012d2a) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd02a,	// (0x0001ab0b) cell_dialer2_keypad_pane_g2_ParamLimits

0xd02a,	// (0x0001ab0b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0001d397) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0001d397) cell_dialer2_keypad_pane_g

0x5858,	// (0x00013339) cell_dialer2_keypad_pane_t1

0x6397,	// (0x00013e78) main_cset_text2_pane_ParamLimits

0x6397,	// (0x00013e78) main_cset_text2_pane

0xd748,	// (0x0001b229) area_vitu2_query_pane_g1_ParamLimits

0x6c48,	// (0x00014729) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0001d54c) area_vitu2_query_pane_g_ParamLimits

0xd7cc,	// (0x0001b2ad) area_vitu2_query_pane_t7_ParamLimits

0xd7cc,	// (0x0001b2ad) area_vitu2_query_pane_t7

0x6ca3,	// (0x00014784) bg_button_pane_cp018_ParamLimits

0x6cb0,	// (0x00014791) bg_button_pane_cp021_ParamLimits

0x6cbc,	// (0x0001479d) bg_button_pane_cp022_ParamLimits

0x6cbc,	// (0x0001479d) bg_vkb2_func_pane_cp08_ParamLimits

0x6ca3,	// (0x00014784) bg_vkb2_func_pane_cp06_ParamLimits

0x6cb0,	// (0x00014791) bg_vkb2_func_pane_cp07_ParamLimits

0x6ccb,	// (0x000147ac) input_focus_pane_cp09_ParamLimits

0xda6e,	// (0x0001b54f) cam6_autofocus_pane_ParamLimits

0xda6e,	// (0x0001b54f) cam6_autofocus_pane

0x71da,	// (0x00014cbb) cam6_image_uncrop_pane_ParamLimits

0x71da,	// (0x00014cbb) cam6_image_uncrop_pane

0x71e7,	// (0x00014cc8) cam6_indi_pane_ParamLimits

0x71e7,	// (0x00014cc8) cam6_indi_pane

0x71fd,	// (0x00014cde) cam6_mode_pane_ParamLimits

0x71fd,	// (0x00014cde) cam6_mode_pane

0x720f,	// (0x00014cf0) cam6_timer_pane_ParamLimits

0x720f,	// (0x00014cf0) cam6_timer_pane

0x721b,	// (0x00014cfc) cam6_zoom_pane_ParamLimits

0x721b,	// (0x00014cfc) cam6_zoom_pane

0x7227,	// (0x00014d08) cam6_mode_pane_g1_ParamLimits

0x7227,	// (0x00014d08) cam6_mode_pane_g1

0x7237,	// (0x00014d18) cam6_mode_pane_g2_ParamLimits

0x7237,	// (0x00014d18) cam6_mode_pane_g2

0x7247,	// (0x00014d28) cam6_mode_pane_g3_ParamLimits

0x7247,	// (0x00014d28) cam6_mode_pane_g3

0x7257,	// (0x00014d38) cam6_mode_pane_g4_ParamLimits

0x7257,	// (0x00014d38) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0001d634) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0001d634) cam6_mode_pane_g

0xd002,	// (0x0001aae3) bg_tb_trans_pane_cp08_ParamLimits

0xd002,	// (0x0001aae3) bg_tb_trans_pane_cp08

0xda7a,	// (0x0001b55b) cam6_battery_pane_ParamLimits

0xda7a,	// (0x0001b55b) cam6_battery_pane

0xda90,	// (0x0001b571) cam6_indi_pane_g1_ParamLimits

0xda90,	// (0x0001b571) cam6_indi_pane_g1

0xdaa2,	// (0x0001b583) cam6_indi_pane_g2_ParamLimits

0xdaa2,	// (0x0001b583) cam6_indi_pane_g2

0xdab4,	// (0x0001b595) cam6_indi_pane_g3_ParamLimits

0xdab4,	// (0x0001b595) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0001d63d) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0001d63d) cam6_indi_pane_g

0xdac6,	// (0x0001b5a7) cam6_indi_pane_t1_ParamLimits

0xdac6,	// (0x0001b5a7) cam6_indi_pane_t1

0x5d7a,	// (0x0001385b) cam6_autofocus_pane_g1

0x5d82,	// (0x00013863) cam6_autofocus_pane_g2

0x5d8a,	// (0x0001386b) cam6_autofocus_pane_g3

0x5d92,	// (0x00013873) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0001d644) cam6_autofocus_pane_g

0xdaec,	// (0x0001b5cd) cam6_timer_pane_g1

0xdaf4,	// (0x0001b5d5) cam6_timer_pane_t1

0xdb02,	// (0x0001b5e3) cam6_zoom_cont_pane

0xdb0a,	// (0x0001b5eb) cam6_zoom_pane_g1

0xdb12,	// (0x0001b5f3) cam6_zoom_pane_g2

0x7267,	// (0x00014d48) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0001d64d) cam6_zoom_pane_g

0xc466,	// (0x00019f47) cam6_battery_pane_g1

0xc466,	// (0x00019f47) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0001d1b5) cam6_battery_pane_g

0xdb1a,	// (0x0001b5fb) cam6_zoom_cont_pane_g1

0xdb23,	// (0x0001b604) cam6_zoom_cont_pane_g2

0xdb2c,	// (0x0001b60d) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0001d654) cam6_zoom_cont_pane_g

0x7284,	// (0x00014d65) cam6_mode_pane_cp_ParamLimits

0x7284,	// (0x00014d65) cam6_mode_pane_cp

0x721b,	// (0x00014cfc) cam6_zoom_pane_cp_ParamLimits

0x721b,	// (0x00014cfc) cam6_zoom_pane_cp

0x7296,	// (0x00014d77) vid6_image_uncrop_cif_pane_ParamLimits

0x7296,	// (0x00014d77) vid6_image_uncrop_cif_pane

0x72a4,	// (0x00014d85) vid6_image_uncrop_nhd_pane_ParamLimits

0x72a4,	// (0x00014d85) vid6_image_uncrop_nhd_pane

0x71da,	// (0x00014cbb) vid6_image_uncrop_vga_pane_ParamLimits

0x71da,	// (0x00014cbb) vid6_image_uncrop_vga_pane

0x72b1,	// (0x00014d92) vid6_image_uncrop_wvga_pane_ParamLimits

0x72b1,	// (0x00014d92) vid6_image_uncrop_wvga_pane

0x72be,	// (0x00014d9f) vid6_indi_pane_ParamLimits

0x72be,	// (0x00014d9f) vid6_indi_pane

0xd002,	// (0x0001aae3) bg_tb_trans_pane_cp09_ParamLimits

0xd002,	// (0x0001aae3) bg_tb_trans_pane_cp09

0xdb40,	// (0x0001b621) cam6_battery_pane_cp_ParamLimits

0xdb40,	// (0x0001b621) cam6_battery_pane_cp

0xdb4c,	// (0x0001b62d) vid6_indi_pane_g1_ParamLimits

0xdb4c,	// (0x0001b62d) vid6_indi_pane_g1

0xdb5e,	// (0x0001b63f) vid6_indi_pane_g2_ParamLimits

0xdb5e,	// (0x0001b63f) vid6_indi_pane_g2

0xdb70,	// (0x0001b651) vid6_indi_pane_g3_ParamLimits

0xdb70,	// (0x0001b651) vid6_indi_pane_g3

0xdb85,	// (0x0001b666) vid6_indi_pane_g4_ParamLimits

0xdb85,	// (0x0001b666) vid6_indi_pane_g4

0xdb9a,	// (0x0001b67b) vid6_indi_pane_g5_ParamLimits

0xdb9a,	// (0x0001b67b) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0001d65b) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0001d65b) vid6_indi_pane_g

0xdbb4,	// (0x0001b695) vid6_indi_pane_t1_ParamLimits

0xdbb4,	// (0x0001b695) vid6_indi_pane_t1

0xdbca,	// (0x0001b6ab) vid6_indi_pane_t2_ParamLimits

0xdbca,	// (0x0001b6ab) vid6_indi_pane_t2

0xdbf2,	// (0x0001b6d3) vid6_indi_pane_t3_ParamLimits

0xdbf2,	// (0x0001b6d3) vid6_indi_pane_t3

0xdc1a,	// (0x0001b6fb) vid6_indi_pane_t4_ParamLimits

0xdc1a,	// (0x0001b6fb) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0001d666) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0001d666) vid6_indi_pane_t

0xdc3e,	// (0x0001b71f) wait_bar_pane_cp08

0x72d5,	// (0x00014db6) main_cset_text2_pane_t1_ParamLimits

0x72d5,	// (0x00014db6) main_cset_text2_pane_t1

0x726f,	// (0x00014d50) listscroll_gen_pane_cp06_t1_ParamLimits

0x726f,	// (0x00014d50) listscroll_gen_pane_cp06_t1

0x955f,	// (0x00017040) main_cam6_set_pane

0xc695,	// (0x0001a176) bg_tb_trans_pane_cp06_ParamLimits

0xd14b,	// (0x0001ac2c) cam4_indicators_pane_g1_ParamLimits

0xd15b,	// (0x0001ac3c) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0001d3d4) cam4_indicators_pane_g_ParamLimits

0xd17b,	// (0x0001ac5c) cam4_indicators_pane_t1_ParamLimits

0x95b2,	// (0x00017093) bg_tb_trans_pane_cp07_ParamLimits

0xd14b,	// (0x0001ac2c) vid4_indicators_pane_g1_ParamLimits

0xd19d,	// (0x0001ac7e) vid4_indicators_pane_g2_ParamLimits

0xd1ad,	// (0x0001ac8e) vid4_indicators_pane_g3_ParamLimits

0xd1be,	// (0x0001ac9f) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0001d3e6) vid4_indicators_pane_g_ParamLimits

0xd1da,	// (0x0001acbb) vid4_indicators_pane_t1_ParamLimits

0xd84a,	// (0x0001b32b) vid4_progress_pane_g1_ParamLimits

0xd859,	// (0x0001b33a) vid4_progress_pane_g2_ParamLimits

0xd868,	// (0x0001b349) vid4_progress_pane_g3_ParamLimits

0xd877,	// (0x0001b358) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0001d597) vid4_progress_pane_g_ParamLimits

0xd883,	// (0x0001b364) vid4_progress_pane_t1_ParamLimits

0xd899,	// (0x0001b37a) vid4_progress_pane_t2_ParamLimits

0xd8ae,	// (0x0001b38f) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0001d5a2) vid4_progress_pane_t_ParamLimits

0xd8c3,	// (0x0001b3a4) wait_bar_pane_cp07_ParamLimits

0x72f0,	// (0x00014dd1) main_cam6_set_pane_g2_ParamLimits

0x72f0,	// (0x00014dd1) main_cam6_set_pane_g2

0x7312,	// (0x00014df3) main_cset6_listscroll_pane_ParamLimits

0x7312,	// (0x00014df3) main_cset6_listscroll_pane

0x732c,	// (0x00014e0d) main_cset6_slider_pane_ParamLimits

0x732c,	// (0x00014e0d) main_cset6_slider_pane

0x7342,	// (0x00014e23) main_cset6_text2_pane_ParamLimits

0x7342,	// (0x00014e23) main_cset6_text2_pane

0xdc4e,	// (0x0001b72f) main_cset6_text_pane

0xd37c,	// (0x0001ae5d) main_cset_list_pane_copy1_ParamLimits

0xd37c,	// (0x0001ae5d) main_cset_list_pane_copy1

0xd38c,	// (0x0001ae6d) scroll_pane_cp028_copy1

0x7350,	// (0x00014e31) cset_list_set_pane_copy1

0x7362,	// (0x00014e43) aid_position_infowindow_above_copy1

0x736a,	// (0x00014e4b) aid_position_infowindow_below_copy1

0x7372,	// (0x00014e53) cset_list_set_pane_g1_copy1

0x737a,	// (0x00014e5b) cset_list_set_pane_g3_copy1_ParamLimits

0x737a,	// (0x00014e5b) cset_list_set_pane_g3_copy1

0x7389,	// (0x00014e6a) cset_list_set_pane_t1_copy1_ParamLimits

0x7389,	// (0x00014e6a) cset_list_set_pane_t1_copy1

0x95b2,	// (0x00017093) list_highlight_pane_cp021_copy1_ParamLimits

0x95b2,	// (0x00017093) list_highlight_pane_cp021_copy1

0xdc56,	// (0x0001b737) cset6_slider_pane_ParamLimits

0xdc56,	// (0x0001b737) cset6_slider_pane

0xdc82,	// (0x0001b763) main_cset6_slider_pane_g1_ParamLimits

0xdc82,	// (0x0001b763) main_cset6_slider_pane_g1

0x739e,	// (0x00014e7f) main_cset6_slider_pane_g2_ParamLimits

0x739e,	// (0x00014e7f) main_cset6_slider_pane_g2

0xd3a1,	// (0x0001ae82) main_cset6_slider_pane_g3_ParamLimits

0xd3a1,	// (0x0001ae82) main_cset6_slider_pane_g3

0x645c,	// (0x00013f3d) main_cset6_slider_pane_g4_ParamLimits

0x645c,	// (0x00013f3d) main_cset6_slider_pane_g4

0x64a4,	// (0x00013f85) main_cset6_slider_pane_g5_ParamLimits

0x64a4,	// (0x00013f85) main_cset6_slider_pane_g5

0xd3a1,	// (0x0001ae82) main_cset6_slider_pane_g7_ParamLimits

0xd3a1,	// (0x0001ae82) main_cset6_slider_pane_g7

0xd3ad,	// (0x0001ae8e) main_cset6_slider_pane_g8_ParamLimits

0xd3ad,	// (0x0001ae8e) main_cset6_slider_pane_g8

0x6444,	// (0x00013f25) main_cset6_slider_pane_g9_ParamLimits

0x6444,	// (0x00013f25) main_cset6_slider_pane_g9

0x6450,	// (0x00013f31) main_cset6_slider_pane_g10_ParamLimits

0x6450,	// (0x00013f31) main_cset6_slider_pane_g10

0x645c,	// (0x00013f3d) main_cset6_slider_pane_g11_ParamLimits

0x645c,	// (0x00013f3d) main_cset6_slider_pane_g11

0x6468,	// (0x00013f49) main_cset6_slider_pane_g12_ParamLimits

0x6468,	// (0x00013f49) main_cset6_slider_pane_g12

0x6474,	// (0x00013f55) main_cset6_slider_pane_g13_ParamLimits

0x6474,	// (0x00013f55) main_cset6_slider_pane_g13

0x6480,	// (0x00013f61) main_cset6_slider_pane_g14_ParamLimits

0x6480,	// (0x00013f61) main_cset6_slider_pane_g14

0x73c6,	// (0x00014ea7) main_cset6_slider_pane_g15_ParamLimits

0x73c6,	// (0x00014ea7) main_cset6_slider_pane_g15

0x64a4,	// (0x00013f85) main_cset6_slider_pane_g16_ParamLimits

0x64a4,	// (0x00013f85) main_cset6_slider_pane_g16

0x64b0,	// (0x00013f91) main_cset6_slider_pane_g17_ParamLimits

0x64b0,	// (0x00013f91) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0001d66f) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0001d66f) main_cset6_slider_pane_g

0xdcaa,	// (0x0001b78b) main_cset6_slider_pane_t1_ParamLimits

0xdcaa,	// (0x0001b78b) main_cset6_slider_pane_t1

0xdceb,	// (0x0001b7cc) main_cset6_slider_pane_t2_ParamLimits

0xdceb,	// (0x0001b7cc) main_cset6_slider_pane_t2

0xdd16,	// (0x0001b7f7) main_cset6_slider_pane_t3_ParamLimits

0xdd16,	// (0x0001b7f7) main_cset6_slider_pane_t3

0x73de,	// (0x00014ebf) main_cset6_slider_pane_t4_ParamLimits

0x73de,	// (0x00014ebf) main_cset6_slider_pane_t4

0x7409,	// (0x00014eea) main_cset6_slider_pane_t5_ParamLimits

0x7409,	// (0x00014eea) main_cset6_slider_pane_t5

0xdd41,	// (0x0001b822) main_cset6_slider_pane_t7_ParamLimits

0xdd41,	// (0x0001b822) main_cset6_slider_pane_t7

0x7434,	// (0x00014f15) main_cset6_slider_pane_t8_ParamLimits

0x7434,	// (0x00014f15) main_cset6_slider_pane_t8

0x7458,	// (0x00014f39) main_cset6_slider_pane_t9_ParamLimits

0x7458,	// (0x00014f39) main_cset6_slider_pane_t9

0x747c,	// (0x00014f5d) main_cset6_slider_pane_t10_ParamLimits

0x747c,	// (0x00014f5d) main_cset6_slider_pane_t10

0x74a0,	// (0x00014f81) main_cset6_slider_pane_t11_ParamLimits

0x74a0,	// (0x00014f81) main_cset6_slider_pane_t11

0xdd77,	// (0x0001b858) main_cset6_slider_pane_t14_ParamLimits

0xdd77,	// (0x0001b858) main_cset6_slider_pane_t14

0xddb0,	// (0x0001b891) main_cset6_slider_pane_t15_ParamLimits

0xddb0,	// (0x0001b891) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0001d694) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0001d694) main_cset6_slider_pane_t

0xd485,	// (0x0001af66) cset_slider_pane_g1_copy1

0xd48e,	// (0x0001af6f) cset_slider_pane_g2_copy1

0xd497,	// (0x0001af78) cset_slider_pane_g3_copy1

0x955f,	// (0x00017040) bg_popup_sub_pane_cp011_copy1

0xd57a,	// (0x0001b05b) main_cset_text_pane_g1_copy1

0xd582,	// (0x0001b063) main_cset_text_pane_t1_copy1

0xd590,	// (0x0001b071) main_cset_text_pane_t2_copy1

0xd59e,	// (0x0001b07f) main_cset_text_pane_t3_copy1

0xd5ac,	// (0x0001b08d) main_cset_text_pane_t4_copy1

0xd5ba,	// (0x0001b09b) main_cset_text_pane_t5_copy1

0xd5c8,	// (0x0001b0a9) main_cset_text_pane_t6_copy1

0xd5d6,	// (0x0001b0b7) main_cset_text_pane_t7_copy1

0x7595,	// (0x00015076) main_cset_text2_pane_t1_copy1

0x95b2,	// (0x00017093) main_ncimui_pane

0x3d5e,	// (0x0001183f) popup_query_ncimui_window_ParamLimits

0x3d5e,	// (0x0001183f) popup_query_ncimui_window

0xc736,	// (0x0001a217) field_cale_ev2_pane_g4_ParamLimits

0xc736,	// (0x0001a217) field_cale_ev2_pane_g4

0x574a,	// (0x0001322b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x574a,	// (0x0001322b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0001d36e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0001d36e) cell_video_dialer_keypad_pane_g

0x5762,	// (0x00013243) cell_video_dialer_keypad_pane_t1

0x955f,	// (0x00017040) bg_popup_window_pane_cp012

0xa736,	// (0x00018217) heading_pane_cp06

0xde13,	// (0x0001b8f4) ncim_query_content_pane

0x955f,	// (0x00017040) bg_popup_heading_pane_cp01

0xde1b,	// (0x0001b8fc) ncim_heading_pane_t1

0xde29,	// (0x0001b90a) ncim_indicator_popup_pane

0xde3b,	// (0x0001b91c) ncim_query_button_pane

0xde4f,	// (0x0001b930) ncim_query_content_pane_t1

0xde61,	// (0x0001b942) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0001d6d8) ncim_query_content_pane_t

0xde9b,	// (0x0001b97c) ncim_query_list_pane

0xdead,	// (0x0001b98e) ncim_query_popup_pane

0xde29,	// (0x0001b90a) ncim_indicator_popup_pane_ParamLimits

0x76d4,	// (0x000151b5) ncim_query_content_pane_g1_ParamLimits

0x76d4,	// (0x000151b5) ncim_query_content_pane_g1

0xde4f,	// (0x0001b930) ncim_query_content_pane_t1_ParamLimits

0xde61,	// (0x0001b942) ncim_query_content_pane_t2_ParamLimits

0x76e0,	// (0x000151c1) ncim_query_content_pane_t3_ParamLimits

0x76e0,	// (0x000151c1) ncim_query_content_pane_t3

0x7708,	// (0x000151e9) ncim_query_content_pane_t4_ParamLimits

0x7708,	// (0x000151e9) ncim_query_content_pane_t4

0x7730,	// (0x00015211) ncim_query_content_pane_t5_ParamLimits

0x7730,	// (0x00015211) ncim_query_content_pane_t5

0xde73,	// (0x0001b954) ncim_query_content_pane_t6_ParamLimits

0xde73,	// (0x0001b954) ncim_query_content_pane_t6

0xfbf7,	// (0x0001d6d8) ncim_query_content_pane_t_ParamLimits

0xde9b,	// (0x0001b97c) ncim_query_list_pane_ParamLimits

0xdead,	// (0x0001b98e) ncim_query_popup_pane_ParamLimits

0xdec1,	// (0x0001b9a2) wait_bar_pane_cp04

0x955f,	// (0x00017040) input_focus_pane_cp011

0xdec9,	// (0x0001b9aa) ncim_query_popup_pane_t1

0xded7,	// (0x0001b9b8) ncim_list_query_list_pane_ParamLimits

0xded7,	// (0x0001b9b8) ncim_list_query_list_pane

0x955f,	// (0x00017040) bg_button_pane_cp027

0xdeea,	// (0x0001b9cb) ncim_query_button_pane_g1

0x955f,	// (0x00017040) list_highlight_pane_cp012

0xdef4,	// (0x0001b9d5) ncim_list_query_list_pane_g1

0xdefc,	// (0x0001b9dd) ncim_list_query_list_pane_t1

0xd16b,	// (0x0001ac4c) cam4_indicators_pane_g3_ParamLimits

0xd16b,	// (0x0001ac4c) cam4_indicators_pane_g3

0xd1ca,	// (0x0001acab) vid4_indicators_pane_g5_ParamLimits

0xd1ca,	// (0x0001acab) vid4_indicators_pane_g5

0xa505,	// (0x00017fe6) vid4_progress_pane_g5_ParamLimits

0xa505,	// (0x00017fe6) vid4_progress_pane_g5

0x75c4,	// (0x000150a5) main_ncimui_pane_g1

0x762a,	// (0x0001510b) ncimui_group_query_pane_ParamLimits

0x762a,	// (0x0001510b) ncimui_group_query_pane

0x7672,	// (0x00015153) ncimui_list_pane_ParamLimits

0x7672,	// (0x00015153) ncimui_list_pane

0x7697,	// (0x00015178) ncimui_text_pane_ParamLimits

0x7697,	// (0x00015178) ncimui_text_pane

0x7758,	// (0x00015239) ncimui_text_pane_t1_ParamLimits

0x7758,	// (0x00015239) ncimui_text_pane_t1

0xdf13,	// (0x0001b9f4) ncimui_list_single_graphic_pane_ParamLimits

0xdf13,	// (0x0001b9f4) ncimui_list_single_graphic_pane

0x7776,	// (0x00015257) ncimui_query_pane_ParamLimits

0x7776,	// (0x00015257) ncimui_query_pane

0x955f,	// (0x00017040) list_highlight_pane_cp013

0xdf23,	// (0x0001ba04) ncim_list_query_list_pane_t1_copy1

0xdf31,	// (0x0001ba12) ncim_list_single_graphic_pane_g1

0xdf39,	// (0x0001ba1a) ncim_query_button_pane_cp01

0xdf45,	// (0x0001ba26) ncim_query_entry_pane_ParamLimits

0xdf45,	// (0x0001ba26) ncim_query_entry_pane

0xdf58,	// (0x0001ba39) ncimui_query_pane_g1

0xdf64,	// (0x0001ba45) ncimui_query_pane_t1_ParamLimits

0xdf64,	// (0x0001ba45) ncimui_query_pane_t1

0x95b2,	// (0x00017093) input_focus_pane_cp012

0xdf7d,	// (0x0001ba5e) ncim_query_entry_pane_t1

0x9d17,	// (0x000177f8) main_im_pane_ParamLimits

0x95b2,	// (0x00017093) main_mobtv_pane_ParamLimits

0x95b2,	// (0x00017093) main_mobtv_pane

0x6444,	// (0x00013f25) main_cset6_slider_pane_g18_ParamLimits

0x6444,	// (0x00013f25) main_cset6_slider_pane_g18

0x6474,	// (0x00013f55) main_cset6_slider_pane_g19_ParamLimits

0x6474,	// (0x00013f55) main_cset6_slider_pane_g19

0xdf8f,	// (0x0001ba70) bg_main_mobtv_pane_ParamLimits

0xdf8f,	// (0x0001ba70) bg_main_mobtv_pane

0x7786,	// (0x00015267) main_mobtv_info_pane

0x778f,	// (0x00015270) main_mobtv_loading_pane_ParamLimits

0x778f,	// (0x00015270) main_mobtv_loading_pane

0xdf9d,	// (0x0001ba7e) main_mobtv_pg_channel_list_pane

0xdfa7,	// (0x0001ba88) main_mobtv_pg_hdr_pane

0x779c,	// (0x0001527d) main_mobtv_programe_curr_pane_ParamLimits

0x779c,	// (0x0001527d) main_mobtv_programe_curr_pane

0x77a9,	// (0x0001528a) main_mobtv_programe_next_pane_ParamLimits

0x77a9,	// (0x0001528a) main_mobtv_programe_next_pane

0xdfb0,	// (0x0001ba91) popup_mobtv_noti_window

0xc466,	// (0x00019f47) main_tv_pg_hdr_pane_g1

0xdfb8,	// (0x0001ba99) main_tv_pg_hdr_pane_g2

0xdfc0,	// (0x0001baa1) main_tv_pg_hdr_pane_g3

0xdfc8,	// (0x0001baa9) main_tv_pg_hdr_pane_g4

0xdfd0,	// (0x0001bab1) main_tv_pg_hdr_pane_g5

0xdfd8,	// (0x0001bab9) main_tv_pg_hdr_pane_g6

0xdfe0,	// (0x0001bac1) main_tv_pg_hdr_pane_g7

0xdfe8,	// (0x0001bac9) main_tv_pg_hdr_pane_g8

0xdff0,	// (0x0001bad1) main_tv_pg_hdr_pane_g9

0xdff8,	// (0x0001bad9) main_tv_pg_hdr_pane_g10

0xe002,	// (0x0001bae3) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0001d6e5) main_tv_pg_hdr_pane_g

0xe00c,	// (0x0001baed) main_tv_pg_hdr_pane_t1

0xe01a,	// (0x0001bafb) main_tv_pg_hdr_pane_t2

0xe028,	// (0x0001bb09) main_tv_pg_hdr_pane_t3

0xe036,	// (0x0001bb17) main_tv_pg_hdr_pane_t4

0xe044,	// (0x0001bb25) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0001d6fc) main_tv_pg_hdr_pane_t

0xe052,	// (0x0001bb33) single_mobtv_pg_channel_pane_ParamLimits

0xe052,	// (0x0001bb33) single_mobtv_pg_channel_pane

0xe064,	// (0x0001bb45) single_mobtv_pg_channel_table_pane

0xe06d,	// (0x0001bb4e) single_mobtv_pg_channel_thumb_pane

0xe076,	// (0x0001bb57) single_tv_pg_channel_pane_g1

0xe07f,	// (0x0001bb60) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0001d707) single_tv_pg_channel_pane_g

0xc695,	// (0x0001a176) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc695,	// (0x0001a176) bg_single_mobtv_pg_channel_thumb_pane

0xe088,	// (0x0001bb69) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe088,	// (0x0001bb69) single_mobtv_pg_channel_thumb_pane_g1

0xe096,	// (0x0001bb77) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe096,	// (0x0001bb77) single_mobtv_pg_channel_thumb_pane_g2

0xe0a2,	// (0x0001bb83) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0a2,	// (0x0001bb83) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0001d70c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0001d70c) single_mobtv_pg_channel_thumb_pane_g

0xe0ae,	// (0x0001bb8f) single_mobtv_pg_channel_thumb_pane_t1

0xe0bc,	// (0x0001bb9d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0001d713) single_mobtv_pg_channel_thumb_pane_t

0xc466,	// (0x00019f47) bg_single_mobtv_pg_channel_table_pane_g1

0xc466,	// (0x00019f47) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0001d1b5) bg_single_mobtv_pg_channel_table_pane_g

0xe0ca,	// (0x0001bbab) single_mobtv_pg_channel_table_pane_t1

0xe0d8,	// (0x0001bbb9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0001d718) single_mobtv_pg_channel_table_pane_t

0x77be,	// (0x0001529f) main_mobtv_info_pane_g1_ParamLimits

0x77be,	// (0x0001529f) main_mobtv_info_pane_g1

0x77da,	// (0x000152bb) main_mobtv_info_pane_t1_ParamLimits

0x77da,	// (0x000152bb) main_mobtv_info_pane_t1

0x7840,	// (0x00015321) main_mobtv_info_pane_t2_ParamLimits

0x7840,	// (0x00015321) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0001d722) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0001d722) main_mobtv_info_pane_t

0x78c3,	// (0x000153a4) wait_bar_pane_cp05

0x78d3,	// (0x000153b4) main_mobtv_loading_pane_g1_ParamLimits

0x78d3,	// (0x000153b4) main_mobtv_loading_pane_g1

0x78e4,	// (0x000153c5) main_mobtv_loading_pane_g2_ParamLimits

0x78e4,	// (0x000153c5) main_mobtv_loading_pane_g2

0x78f0,	// (0x000153d1) main_mobtv_loading_pane_g3_ParamLimits

0x78f0,	// (0x000153d1) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0001d729) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0001d729) main_mobtv_loading_pane_g

0xe0e6,	// (0x0001bbc7) main_mobtv_loading_pane_t1_ParamLimits

0xe0e6,	// (0x0001bbc7) main_mobtv_loading_pane_t1

0xe0fe,	// (0x0001bbdf) main_mobtv_loading_pane_t2_ParamLimits

0xe0fe,	// (0x0001bbdf) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0001d730) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0001d730) main_mobtv_loading_pane_t

0x7901,	// (0x000153e2) wait_bar_pane_cp06_ParamLimits

0x7901,	// (0x000153e2) wait_bar_pane_cp06

0xe122,	// (0x0001bc03) main_mobtv_programe_curr_pane_t1

0xe130,	// (0x0001bc11) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0001d735) main_mobtv_programe_curr_pane_t

0xe13e,	// (0x0001bc1f) main_mobtv_programe_next_pane_t1

0xe14c,	// (0x0001bc2d) main_mobtv_programe_next_pane_t2

0xe15a,	// (0x0001bc3b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0001d73a) main_mobtv_programe_next_pane_t

0x955f,	// (0x00017040) bg_popup_mobtv_noti_window_pane

0xe168,	// (0x0001bc49) popup_mobtv_noti_window_g1

0xe170,	// (0x0001bc51) popup_mobtv_noti_window_t1

0xe17e,	// (0x0001bc5f) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0001d741) popup_mobtv_noti_window_t

0xc466,	// (0x00019f47) bg_popup_mobtv_noti_window_pane_g1

0x955f,	// (0x00017040) sc_clock_pane

0x955f,	// (0x00017040) main_fs_bigclock_pane

0x7057,	// (0x00014b38) blid2_tripm_pane_t4_ParamLimits

0x7057,	// (0x00014b38) blid2_tripm_pane_t4

0x7910,	// (0x000153f1) sc_clock_pane_g1_ParamLimits

0x7910,	// (0x000153f1) sc_clock_pane_g1

0x7922,	// (0x00015403) sc_clock_pane_t1_ParamLimits

0x7922,	// (0x00015403) sc_clock_pane_t1

0x7944,	// (0x00015425) sc_clock_pane_t2_ParamLimits

0x7944,	// (0x00015425) sc_clock_pane_t2

0x795a,	// (0x0001543b) sc_clock_pane_t3_ParamLimits

0x795a,	// (0x0001543b) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0001d746) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0001d746) sc_clock_pane_t

0x8a1d,	// (0x000164fe) main_fs_bigclock_indicator_pane_ParamLimits

0x8a1d,	// (0x000164fe) main_fs_bigclock_indicator_pane

0x79f6,	// (0x000154d7) main_fs_bigclock_pane_g1_ParamLimits

0x79f6,	// (0x000154d7) main_fs_bigclock_pane_g1

0x8a29,	// (0x0001650a) main_fs_bigclock_pane_t1_ParamLimits

0x8a29,	// (0x0001650a) main_fs_bigclock_pane_t1

0x8a3b,	// (0x0001651c) main_fs_bigclock_pane_t2_ParamLimits

0x8a3b,	// (0x0001651c) main_fs_bigclock_pane_t2

0x8a4d,	// (0x0001652e) main_fs_bigclock_pane_t3_ParamLimits

0x8a4d,	// (0x0001652e) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001d94f) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001d94f) main_fs_bigclock_pane_t

0xec18,	// (0x0001c6f9) main_fs_bigclock_indicator_pane_g1

0xde43,	// (0x0001b924) ncim_query_content_pane_g2_ParamLimits

0xde43,	// (0x0001b924) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0001d6d3) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0001d6d3) ncim_query_content_pane_g

0x7971,	// (0x00015452) sc_clock_pane_t4_ParamLimits

0x7971,	// (0x00015452) sc_clock_pane_t4

0x95b2,	// (0x00017093) main_radioblah_pane

0xd0b3,	// (0x0001ab94) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0b3,	// (0x0001ab94) cell_call4_button_pane_t1_copy1

0x75dc,	// (0x000150bd) main_ncimui_pane_t1_ParamLimits

0x75dc,	// (0x000150bd) main_ncimui_pane_t1

0x75f6,	// (0x000150d7) main_ncimui_pane_t2_ParamLimits

0x75f6,	// (0x000150d7) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0001d6cc) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0001d6cc) main_ncimui_pane_t

0xe2bf,	// (0x0001bda0) main_radioblah_anim_pane_ParamLimits

0xe2bf,	// (0x0001bda0) main_radioblah_anim_pane

0xe2d0,	// (0x0001bdb1) main_radioblah_info_pane_ParamLimits

0xe2d0,	// (0x0001bdb1) main_radioblah_info_pane

0xe2e4,	// (0x0001bdc5) main_radioblah_pane_t1_ParamLimits

0xe2e4,	// (0x0001bdc5) main_radioblah_pane_t1

0xe300,	// (0x0001bde1) main_radioblah_pane_t2_ParamLimits

0xe300,	// (0x0001bde1) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0001d767) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0001d767) main_radioblah_pane_t

0x7a40,	// (0x00015521) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a40,	// (0x00015521) main_radioblah_rocker_ctrl_pane

0xe348,	// (0x0001be29) main_radioblah_info_pane_t1_ParamLimits

0xe348,	// (0x0001be29) main_radioblah_info_pane_t1

0x7a94,	// (0x00015575) main_radioblah_info_pane_t2_ParamLimits

0x7a94,	// (0x00015575) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0001d770) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0001d770) main_radioblah_info_pane_t

0xc466,	// (0x00019f47) main_radioblah_rocker_ctrl_pane_g1

0x7b42,	// (0x00015623) main_radioblah_rocker_ctrl_pane_g2

0x7b4a,	// (0x0001562b) main_radioblah_rocker_ctrl_pane_g3

0x7b52,	// (0x00015633) main_radioblah_rocker_ctrl_pane_g4

0x7b5a,	// (0x0001563b) main_radioblah_rocker_ctrl_pane_g5

0x7b62,	// (0x00015643) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0001d779) main_radioblah_rocker_ctrl_pane_g

0x7595,	// (0x00015076) main_cset_text2_pane_t1_copy1_ParamLimits

0xd13b,	// (0x0001ac1c) cam4_image_uncrop_qvga_pane

0xd195,	// (0x0001ac76) vid4_image_uncrop_qcif_pane

0xda6e,	// (0x0001b54f) cam6_image_uncrop_qvga_pane_ParamLimits

0xda6e,	// (0x0001b54f) cam6_image_uncrop_qvga_pane

0xdb34,	// (0x0001b615) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb34,	// (0x0001b615) vid6_image_uncrop_qcif_pane

0x955f,	// (0x00017040) bg_popup_preview_window_pane_cp03

0xdde9,	// (0x0001b8ca) list_cset_text2_pane

0xddf1,	// (0x0001b8d2) main_cset6_text2_pane_g1

0xddf9,	// (0x0001b8da) main_cset6_text2_pane_t1

0x7b6a,	// (0x0001564b) list_cset_text2_pane_t1_ParamLimits

0x7b6a,	// (0x0001564b) list_cset_text2_pane_t1

0x95b2,	// (0x00017093) main_radioblah_pane_ParamLimits

0x78b1,	// (0x00015392) main_mobtv_info_pane_t3_ParamLimits

0x78b1,	// (0x00015392) main_mobtv_info_pane_t3

0x7a2e,	// (0x0001550f) main_radioblah_pane_g1

0x7a68,	// (0x00015549) main_radioblah_info_pane_g1

0x7ae7,	// (0x000155c8) main_radioblah_info_pane_t3_ParamLimits

0x7ae7,	// (0x000155c8) main_radioblah_info_pane_t3

0x2964,	// (0x00010445) highlight_cell_cale_month_pane_ParamLimits

0x2964,	// (0x00010445) highlight_cell_cale_month_pane

0x955f,	// (0x00017040) main_phob_fisheye_pane

0xc7e5,	// (0x0001a2c6) scroll_pane_cp0031_ParamLimits

0xc7e5,	// (0x0001a2c6) scroll_pane_cp0031

0xdc3e,	// (0x0001b71f) wait_bar_pane_cp08_ParamLimits

0x7350,	// (0x00014e31) cset_list_set_pane_copy1_ParamLimits

0xe382,	// (0x0001be63) highlight_cell_cale_month_pane_g1

0x7b83,	// (0x00015664) highlight_cell_cale_month_pane_t1

0xe38a,	// (0x0001be6b) list_gen_pane_cp01

0xd38c,	// (0x0001ae6d) scroll_pane_01

0x7b91,	// (0x00015672) list_single_double_fisheye_pane

0x7b9a,	// (0x0001567b) list_double_fisheye_pane_g1_ParamLimits

0x7b9a,	// (0x0001567b) list_double_fisheye_pane_g1

0x7ba6,	// (0x00015687) list_double_fisheye_pane_g2_ParamLimits

0x7ba6,	// (0x00015687) list_double_fisheye_pane_g2

0x7bb2,	// (0x00015693) list_double_fisheye_pane_g3_ParamLimits

0x7bb2,	// (0x00015693) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0001d786) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0001d786) list_double_fisheye_pane_g

0x7bd6,	// (0x000156b7) list_double_fisheye_pane_t1_ParamLimits

0x7bd6,	// (0x000156b7) list_double_fisheye_pane_t1

0x7bf1,	// (0x000156d2) list_double_fisheye_pane_t2_ParamLimits

0x7bf1,	// (0x000156d2) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0001d791) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0001d791) list_double_fisheye_pane_t

0x955f,	// (0x00017040) main_call5_pane

0x799a,	// (0x0001547b) sc_swipe_pane_ParamLimits

0x799a,	// (0x0001547b) sc_swipe_pane

0x7c24,	// (0x00015705) call5_image_pane_ParamLimits

0x7c24,	// (0x00015705) call5_image_pane

0x7c39,	// (0x0001571a) call5_swipe_1_pane_ParamLimits

0x7c39,	// (0x0001571a) call5_swipe_1_pane

0x7c4a,	// (0x0001572b) call5_swipe_2_pane_ParamLimits

0x7c4a,	// (0x0001572b) call5_swipe_2_pane

0x7c6f,	// (0x00015750) popup_call5_audio_first_window_ParamLimits

0x7c6f,	// (0x00015750) popup_call5_audio_first_window

0xc695,	// (0x0001a176) call5_swipe_1_pane_g1_ParamLimits

0xc695,	// (0x0001a176) call5_swipe_1_pane_g1

0xe393,	// (0x0001be74) call5_swipe_1_pane_g2_ParamLimits

0xe393,	// (0x0001be74) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0001d796) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0001d796) call5_swipe_1_pane_g

0xe39f,	// (0x0001be80) call5_swipe_1_pane_t1_ParamLimits

0xe39f,	// (0x0001be80) call5_swipe_1_pane_t1

0xc695,	// (0x0001a176) call5_swipe_2_pane_g1_ParamLimits

0xc695,	// (0x0001a176) call5_swipe_2_pane_g1

0xe3b4,	// (0x0001be95) call5_swipe_2_pane_g2_ParamLimits

0xe3b4,	// (0x0001be95) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0001d79b) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0001d79b) call5_swipe_2_pane_g

0xe3c0,	// (0x0001bea1) call5_swipe_2_pane_t1_ParamLimits

0xe3c0,	// (0x0001bea1) call5_swipe_2_pane_t1

0xe3d5,	// (0x0001beb6) sc_swipe_pane_g1_ParamLimits

0xe3d5,	// (0x0001beb6) sc_swipe_pane_g1

0xe3e2,	// (0x0001bec3) sc_swipe_pane_g2_ParamLimits

0xe3e2,	// (0x0001bec3) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0001d7a0) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0001d7a0) sc_swipe_pane_g

0xe3ee,	// (0x0001becf) sc_swipe_pane_t1_ParamLimits

0xe3ee,	// (0x0001becf) sc_swipe_pane_t1

0x955f,	// (0x00017040) main_cmail_launcher_pane

0x7c7e,	// (0x0001575f) aid_size_cell_cmail_l_ParamLimits

0x7c7e,	// (0x0001575f) aid_size_cell_cmail_l

0x7c97,	// (0x00015778) grid_cmail_l_pane_ParamLimits

0x7c97,	// (0x00015778) grid_cmail_l_pane

0x7cac,	// (0x0001578d) cell_cmail_l_pane_ParamLimits

0x7cac,	// (0x0001578d) cell_cmail_l_pane

0x7cce,	// (0x000157af) cell_cmail_l_pane_g1_ParamLimits

0x7cce,	// (0x000157af) cell_cmail_l_pane_g1

0x7cde,	// (0x000157bf) cell_cmail_l_pane_t1_ParamLimits

0x7cde,	// (0x000157bf) cell_cmail_l_pane_t1

0x7cf4,	// (0x000157d5) cell_cmail_l_pane_t2_ParamLimits

0x7cf4,	// (0x000157d5) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0001d7a5) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0001d7a5) cell_cmail_l_pane_t

0x95b2,	// (0x00017093) grid_highlight_pane_cp018_ParamLimits

0x95b2,	// (0x00017093) grid_highlight_pane_cp018

0x0c0c,	// (0x0000e6ed) main2_pane_ParamLimits

0x0c0c,	// (0x0000e6ed) main2_pane

0x9e1a,	// (0x000178fb) popup_sp_fs_action_menu_bg_pane_g1

0x9e22,	// (0x00017903) popup_sp_fs_action_menu_bg_pane_g2

0x9e2a,	// (0x0001790b) popup_sp_fs_action_menu_bg_pane_g3

0x9e32,	// (0x00017913) popup_sp_fs_action_menu_bg_pane_g4

0x9e3a,	// (0x0001791b) popup_sp_fs_action_menu_bg_pane_g5

0x9e42,	// (0x00017923) popup_sp_fs_action_menu_bg_pane_g6

0x9e4a,	// (0x0001792b) popup_sp_fs_action_menu_bg_pane_g7

0x9e52,	// (0x00017933) popup_sp_fs_action_menu_bg_pane_g8

0x9e5a,	// (0x0001793b) popup_sp_fs_action_menu_bg_pane_g9

0x9e62,	// (0x00017943) popup_sp_fs_action_menu_bg_pane_g10

0x9e62,	// (0x00017943) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0001cc50) popup_sp_fs_action_menu_bg_pane_g

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t3_g3_g1

0x1af9,	// (0x0000f5da) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1af9,	// (0x0000f5da) list_medium_line_x2_t3_g3_g2

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0001ccfe) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0001ccfe) list_medium_line_x2_t3_g3_g

0x1b11,	// (0x0000f5f2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b11,	// (0x0000f5f2) list_medium_line_x2_t3_g3_t1

0x1b26,	// (0x0000f607) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b26,	// (0x0000f607) list_medium_line_x2_t3_g3_t2

0x1b38,	// (0x0000f619) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b38,	// (0x0000f619) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0001cd05) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0001cd05) list_medium_line_x2_t3_g3_t

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t3_g2_g1

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0001cd0c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0001cd0c) list_medium_line_x2_t3_g2_g

0x1b4d,	// (0x0000f62e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b4d,	// (0x0000f62e) list_medium_line_x2_t3_g2_t1

0x1b63,	// (0x0000f644) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b63,	// (0x0000f644) list_medium_line_x2_t3_g2_t2

0x1b38,	// (0x0000f619) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b38,	// (0x0000f619) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0001cd11) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0001cd11) list_medium_line_x2_t3_g2_t

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t4_g4_g1

0x1b75,	// (0x0000f656) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1b75,	// (0x0000f656) list_medium_line_x2_t4_g4_g2

0x1af9,	// (0x0000f5da) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1af9,	// (0x0000f5da) list_medium_line_x2_t4_g4_g3

0x1b81,	// (0x0000f662) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1b81,	// (0x0000f662) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0001cd18) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0001cd18) list_medium_line_x2_t4_g4_g

0x1b8d,	// (0x0000f66e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b8d,	// (0x0000f66e) list_medium_line_x2_t4_g4_t1

0x1ba4,	// (0x0000f685) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1ba4,	// (0x0000f685) list_medium_line_x2_t4_g4_t2

0x1bb9,	// (0x0000f69a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1bb9,	// (0x0000f69a) list_medium_line_x2_t4_g4_t3

0x1bcb,	// (0x0000f6ac) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1bcb,	// (0x0000f6ac) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0001cd21) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0001cd21) list_medium_line_x2_t4_g4_t

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t2_g4_g1

0x1b75,	// (0x0000f656) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1b75,	// (0x0000f656) list_medium_line_x2_t2_g4_g2

0x1af9,	// (0x0000f5da) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1af9,	// (0x0000f5da) list_medium_line_x2_t2_g4_g3

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0001cd88) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0001cd88) list_medium_line_x2_t2_g4_g

0x298a,	// (0x0001046b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x298a,	// (0x0001046b) list_medium_line_x2_t2_g4_t1

0x1b38,	// (0x0000f619) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b38,	// (0x0000f619) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0001cd91) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0001cd91) list_medium_line_x2_t2_g4_t

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t2_g3_g1

0x1af9,	// (0x0000f5da) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1af9,	// (0x0000f5da) list_medium_line_x2_t2_g3_g2

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0001ccfe) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0001ccfe) list_medium_line_x2_t2_g3_g

0x299f,	// (0x00010480) list_medium_line_x2_t2_g3_t1_ParamLimits

0x299f,	// (0x00010480) list_medium_line_x2_t2_g3_t1

0x1b38,	// (0x0000f619) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b38,	// (0x0000f619) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0001cd96) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0001cd96) list_medium_line_x2_t2_g3_t

0x2aeb,	// (0x000105cc) main_sp_fs_list_pane_ParamLimits

0x2aeb,	// (0x000105cc) main_sp_fs_list_pane

0x2af8,	// (0x000105d9) sp_fs_scroll_pane_ParamLimits

0x2af8,	// (0x000105d9) sp_fs_scroll_pane

0x2b05,	// (0x000105e6) list_medium_line_x2_t3_t1

0x2b15,	// (0x000105f6) list_medium_line_x2_t3_t2

0x2b23,	// (0x00010604) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0001cde1) list_medium_line_x2_t3_t

0x2b31,	// (0x00010612) list_medium_line_x3_t4_t1

0x2b41,	// (0x00010622) list_medium_line_x3_t4_t2

0x2b4f,	// (0x00010630) list_medium_line_x3_t4_t3

0x2b5d,	// (0x0001063e) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0001cde8) list_medium_line_x3_t4_t

0x2b6b,	// (0x0001064c) list_medium_line_x4_t5_t1

0x2b7b,	// (0x0001065c) list_medium_line_x4_t5_t2

0x2b4f,	// (0x00010630) list_medium_line_x4_t5_t3

0x2b89,	// (0x0001066a) list_medium_line_x4_t5_t4

0x2b5d,	// (0x0001063e) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0001cdf1) list_medium_line_x4_t5_t

0x1aed,	// (0x0000f5ce) list_medium_line_t4_g4_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_t4_g4_g1

0x1b81,	// (0x0000f662) list_medium_line_t4_g4_g2_ParamLimits

0x1b81,	// (0x0000f662) list_medium_line_t4_g4_g2

0x2b97,	// (0x00010678) list_medium_line_t4_g4_g3_ParamLimits

0x2b97,	// (0x00010678) list_medium_line_t4_g4_g3

0x1b05,	// (0x0000f5e6) list_medium_line_t4_g4_g4_ParamLimits

0x1b05,	// (0x0000f5e6) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0001cdfc) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0001cdfc) list_medium_line_t4_g4_g

0x2ba3,	// (0x00010684) list_medium_line_t4_g4_t1_ParamLimits

0x2ba3,	// (0x00010684) list_medium_line_t4_g4_t1

0x2bb8,	// (0x00010699) list_medium_line_t4_g4_t2_ParamLimits

0x2bb8,	// (0x00010699) list_medium_line_t4_g4_t2

0x2bce,	// (0x000106af) list_medium_line_t4_g4_t3_ParamLimits

0x2bce,	// (0x000106af) list_medium_line_t4_g4_t3

0x2be4,	// (0x000106c5) list_medium_line_t4_g4_t4_ParamLimits

0x2be4,	// (0x000106c5) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0001ce05) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0001ce05) list_medium_line_t4_g4_t

0x2cba,	// (0x0001079b) chi_dic_find_pane_g1

0x3b64,	// (0x00011645) main_tport_pane

0xd4d1,	// (0x0001afb2) list_medium_line_plain_t1

0xd523,	// (0x0001b004) list_medium_line_t2_g2_g1_ParamLimits

0xd523,	// (0x0001b004) list_medium_line_t2_g2_g1

0xd52f,	// (0x0001b010) list_medium_line_t2_g2_g2_ParamLimits

0xd52f,	// (0x0001b010) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0001d4dd) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0001d4dd) list_medium_line_t2_g2_g

0x6811,	// (0x000142f2) list_medium_line_t2_g2_t1_ParamLimits

0x6811,	// (0x000142f2) list_medium_line_t2_g2_t1

0x6828,	// (0x00014309) list_medium_line_t2_g2_t2_ParamLimits

0x6828,	// (0x00014309) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0001d4e2) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0001d4e2) list_medium_line_t2_g2_t

0xd8d3,	// (0x0001b3b4) aid_sp_fs_list_icon_a_sm

0xd8db,	// (0x0001b3bc) aid_sp_fs_list_icon_d

0xd8e3,	// (0x0001b3c4) aid_sp_fs_text_primary

0xd8ec,	// (0x0001b3cd) aid_sp_fs_text_secondary

0xd8f5,	// (0x0001b3d6) list_medium_line

0xd8f5,	// (0x0001b3d6) list_medium_line_g2

0xd8f5,	// (0x0001b3d6) list_medium_line_g3

0xd8f5,	// (0x0001b3d6) list_medium_line_plain

0xd8f5,	// (0x0001b3d6) list_medium_line_plain_t2

0xd8f5,	// (0x0001b3d6) list_medium_line_plain_t3

0xd8f5,	// (0x0001b3d6) list_medium_line_right_icon

0xd8f5,	// (0x0001b3d6) list_medium_line_right_iconx2

0xd8f5,	// (0x0001b3d6) list_medium_line_t2

0xd8f5,	// (0x0001b3d6) list_medium_line_t2_g2

0xd8f5,	// (0x0001b3d6) list_medium_line_t2_g3

0xd8f5,	// (0x0001b3d6) list_medium_line_t2_right_icon

0xd8f5,	// (0x0001b3d6) list_medium_line_t2_right_iconx2

0xd8f5,	// (0x0001b3d6) list_medium_line_t3

0xd8f5,	// (0x0001b3d6) list_medium_line_t3_g2

0xd8f5,	// (0x0001b3d6) list_medium_line_t3_g3

0xd8f5,	// (0x0001b3d6) list_medium_line_t3_right_iconx2

0x6e02,	// (0x000148e3) list_medium_line_t4_g4

0xd8fe,	// (0x0001b3df) list_medium_line_x2

0xd8fe,	// (0x0001b3df) list_medium_line_x2_t2_g2

0xd8fe,	// (0x0001b3df) list_medium_line_x2_t2_g3

0xd8fe,	// (0x0001b3df) list_medium_line_x2_t2_g4

0xd8fe,	// (0x0001b3df) list_medium_line_x2_t3

0xd8fe,	// (0x0001b3df) list_medium_line_x2_t3_g2

0xd8fe,	// (0x0001b3df) list_medium_line_x2_t3_g3

0xd8fe,	// (0x0001b3df) list_medium_line_x2_t3_g4

0xd8fe,	// (0x0001b3df) list_medium_line_x2_t4_g2

0xd8fe,	// (0x0001b3df) list_medium_line_x2_t4_g4

0x6e0b,	// (0x000148ec) list_medium_line_x3

0x6e0b,	// (0x000148ec) list_medium_line_x3_t4

0x6e0b,	// (0x000148ec) list_medium_line_x3_t4_g4

0x6e02,	// (0x000148e3) list_medium_line_x4_t4

0x6e02,	// (0x000148e3) list_medium_line_x4_t4_g7

0x6e02,	// (0x000148e3) list_medium_line_x4_t5

0x6e14,	// (0x000148f5) list_single_fs_dyc_pane_ParamLimits

0x6e14,	// (0x000148f5) list_single_fs_dyc_pane

0x1aed,	// (0x0000f5ce) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x4_t4_g7_g1

0x74c4,	// (0x00014fa5) list_medium_line_x4_t4_g7_g2_ParamLimits

0x74c4,	// (0x00014fa5) list_medium_line_x4_t4_g7_g2

0x74d0,	// (0x00014fb1) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74d0,	// (0x00014fb1) list_medium_line_x4_t4_g7_g3

0x74df,	// (0x00014fc0) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74df,	// (0x00014fc0) list_medium_line_x4_t4_g7_g4

0x74eb,	// (0x00014fcc) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74eb,	// (0x00014fcc) list_medium_line_x4_t4_g7_g5

0x74fa,	// (0x00014fdb) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74fa,	// (0x00014fdb) list_medium_line_x4_t4_g7_g6

0x7509,	// (0x00014fea) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7509,	// (0x00014fea) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0001d6ad) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0001d6ad) list_medium_line_x4_t4_g7_g

0x7515,	// (0x00014ff6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7515,	// (0x00014ff6) list_medium_line_x4_t4_g7_t1

0x752a,	// (0x0001500b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x752a,	// (0x0001500b) list_medium_line_x4_t4_g7_t2

0x753f,	// (0x00015020) list_medium_line_x4_t4_g7_t3_ParamLimits

0x753f,	// (0x00015020) list_medium_line_x4_t4_g7_t3

0x7554,	// (0x00015035) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7554,	// (0x00015035) list_medium_line_x4_t4_g7_t4

0x7566,	// (0x00015047) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7566,	// (0x00015047) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0001d6bc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0001d6bc) list_medium_line_x4_t4_g7_t

0x7578,	// (0x00015059) list_single_dyc_row_pane_ParamLimits

0x7578,	// (0x00015059) list_single_dyc_row_pane

0x7c13,	// (0x000156f4) call5_gesture_pane_ParamLimits

0x7c13,	// (0x000156f4) call5_gesture_pane

0x7c5b,	// (0x0001573c) call5_windows_pane_ParamLimits

0x7c5b,	// (0x0001573c) call5_windows_pane

0x7d0c,	// (0x000157ed) call5_swipe_1_pane_cp_ParamLimits

0x7d0c,	// (0x000157ed) call5_swipe_1_pane_cp

0x7d18,	// (0x000157f9) call5_swipe_2_pane_cp_ParamLimits

0x7d18,	// (0x000157f9) call5_swipe_2_pane_cp

0x9f86,	// (0x00017a67) call5_image_pane_cp

0x7d24,	// (0x00015805) popup_call5_audio_first_window_cp_ParamLimits

0x7d24,	// (0x00015805) popup_call5_audio_first_window_cp

0xe3d5,	// (0x0001beb6) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3d5,	// (0x0001beb6) call5_swipe_1_pane_g1_cp

0xe403,	// (0x0001bee4) call5_swipe_1_pane_g2_cp

0xe3ee,	// (0x0001becf) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3ee,	// (0x0001becf) call5_swipe_1_pane_t1_cp

0xe3d5,	// (0x0001beb6) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3d5,	// (0x0001beb6) call5_swipe_2_pane_g1_cp

0xe40b,	// (0x0001beec) call5_swipe_2_pane_g2_cp

0xe413,	// (0x0001bef4) call5_swipe_2_pane_t1_cp_ParamLimits

0xe413,	// (0x0001bef4) call5_swipe_2_pane_t1_cp

0x95b2,	// (0x00017093) main_sp_fs_email_pane

0xe428,	// (0x0001bf09) main_sp_fs_listscroll_pane_te

0x7d30,	// (0x00015811) popup_sp_fs_action_menu_pane_ParamLimits

0x7d30,	// (0x00015811) popup_sp_fs_action_menu_pane

0xc466,	// (0x00019f47) bg_sp_fs_ctrlbar_pane_g1

0xca66,	// (0x0001a547) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca78,	// (0x0001a559) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xca6f,	// (0x0001a550) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc466,	// (0x00019f47) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0001d7aa) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc253,	// (0x00019d34) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc253,	// (0x00019d34) bg_sp_fs_ctrlbar_ddmenu_pane

0xe431,	// (0x0001bf12) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe431,	// (0x0001bf12) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe43d,	// (0x0001bf1e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe43d,	// (0x0001bf1e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0001d7b3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0001d7b3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe449,	// (0x0001bf2a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe449,	// (0x0001bf2a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe463,	// (0x0001bf44) list_medium_line_t2_right_icon_g1

0xe46b,	// (0x0001bf4c) list_medium_line_t2_right_icon_t1

0x7d62,	// (0x00015843) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0001d7b8) list_medium_line_t2_right_icon_t

0xbf52,	// (0x00019a33) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbf52,	// (0x00019a33) bg_sp_fs_ctrlbar_pane

0x7db6,	// (0x00015897) main_sp_fs_ctrlbar_button_pane_cp01

0x7dbe,	// (0x0001589f) main_sp_fs_ctrlbar_ddmenu_pane

0xe4b3,	// (0x0001bf94) main_sp_fs_ctrlbar_pane_g1

0xe4bf,	// (0x0001bfa0) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0001d7bd) main_sp_fs_ctrlbar_pane_g

0x7dfa,	// (0x000158db) main_sp_fs_ctrlbar_pane_t1

0x7e43,	// (0x00015924) main_sp_fs_ctrlbar_pane

0x7e64,	// (0x00015945) main_sp_fs_listscroll_pane_te_cp01

0x7e84,	// (0x00015965) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e84,	// (0x00015965) popup_sp_fs_action_menu_pane_cp01

0x95b2,	// (0x00017093) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x95b2,	// (0x00017093) bg_sp_fs_highlight_list_pane_cp01

0x7eae,	// (0x0001598f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7eae,	// (0x0001598f) sp_fs_action_menu_list_gene_pane_g1

0xe4e6,	// (0x0001bfc7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4e6,	// (0x0001bfc7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001d7cb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001d7cb) sp_fs_action_menu_list_gene_pane_g

0x7ebd,	// (0x0001599e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7ebd,	// (0x0001599e) sp_fs_action_menu_list_gene_pane_t1

0x7ed5,	// (0x000159b6) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7ed5,	// (0x000159b6) sp_fs_action_menu_list_gene_pane

0xe4f3,	// (0x0001bfd4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4f3,	// (0x0001bfd4) popup_sp_fs_action_menu_bg_pane

0x7ef2,	// (0x000159d3) sp_fs_action_menu_list_pane_ParamLimits

0x7ef2,	// (0x000159d3) sp_fs_action_menu_list_pane

0xe501,	// (0x0001bfe2) sp_fs_scroll_pane_cp01_ParamLimits

0xe501,	// (0x0001bfe2) sp_fs_scroll_pane_cp01

0x7f10,	// (0x000159f1) list_medium_line_plain_t2_t1

0x7f20,	// (0x00015a01) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001d7d0) list_medium_line_plain_t2_t

0x7f2e,	// (0x00015a0f) list_medium_line_plain_t3_t1

0x7f3e,	// (0x00015a1f) list_medium_line_plain_t3_t2

0x7f4c,	// (0x00015a2d) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001d7d5) list_medium_line_plain_t3_t

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t2_g2_g1

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0001cd0c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0001cd0c) list_medium_line_x2_t2_g2_g

0x2ba3,	// (0x00010684) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2ba3,	// (0x00010684) list_medium_line_x2_t2_g2_t1

0x1b38,	// (0x0000f619) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b38,	// (0x0000f619) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001d7dc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001d7dc) list_medium_line_x2_t2_g2_t

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t4_g2_g1

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0001cd0c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0001cd0c) list_medium_line_x2_t4_g2_g

0x7f5a,	// (0x00015a3b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f5a,	// (0x00015a3b) list_medium_line_x2_t4_g2_t1

0x7f71,	// (0x00015a52) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f71,	// (0x00015a52) list_medium_line_x2_t4_g2_t2

0x7f86,	// (0x00015a67) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f86,	// (0x00015a67) list_medium_line_x2_t4_g2_t3

0x1b38,	// (0x0000f619) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b38,	// (0x0000f619) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001d7e1) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001d7e1) list_medium_line_x2_t4_g2_t

0xe527,	// (0x0001c008) list_medium_line_t3_right_iconx2_g1

0xe463,	// (0x0001bf44) list_medium_line_t3_right_iconx2_g2

0x7f98,	// (0x00015a79) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001d7ea) list_medium_line_t3_right_iconx2_g

0x7fa0,	// (0x00015a81) list_medium_line_t3_right_iconx2_t1

0x7fb0,	// (0x00015a91) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001d7f1) list_medium_line_t3_right_iconx2_t

0x1aed,	// (0x0000f5ce) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x3_t4_g4_g1

0x1af9,	// (0x0000f5da) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1af9,	// (0x0000f5da) list_medium_line_x3_t4_g4_g2

0x1b81,	// (0x0000f662) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1b81,	// (0x0000f662) list_medium_line_x3_t4_g4_g3

0x7fbe,	// (0x00015a9f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7fbe,	// (0x00015a9f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001d7f6) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001d7f6) list_medium_line_x3_t4_g4_g

0x7fca,	// (0x00015aab) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fca,	// (0x00015aab) list_medium_line_x3_t4_g4_t1

0x7fe1,	// (0x00015ac2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fe1,	// (0x00015ac2) list_medium_line_x3_t4_g4_t2

0x7ff6,	// (0x00015ad7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7ff6,	// (0x00015ad7) list_medium_line_x3_t4_g4_t3

0x800b,	// (0x00015aec) list_medium_line_x3_t4_g4_t4_ParamLimits

0x800b,	// (0x00015aec) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001d7ff) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001d7ff) list_medium_line_x3_t4_g4_t

0x8028,	// (0x00015b09) list_single_dyc_row_text_pane_t1_ParamLimits

0x8028,	// (0x00015b09) list_single_dyc_row_text_pane_t1

0x805f,	// (0x00015b40) list_single_dyc_row_text_pane_t2_ParamLimits

0x805f,	// (0x00015b40) list_single_dyc_row_text_pane_t2

0xe52f,	// (0x0001c010) list_single_dyc_row_text_pane_t3_ParamLimits

0xe52f,	// (0x0001c010) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001d808) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001d808) list_single_dyc_row_text_pane_t

0xe553,	// (0x0001c034) list_single_dyc_row_pane_g1_ParamLimits

0xe553,	// (0x0001c034) list_single_dyc_row_pane_g1

0xe55f,	// (0x0001c040) list_single_dyc_row_pane_g2_ParamLimits

0xe55f,	// (0x0001c040) list_single_dyc_row_pane_g2

0xe56b,	// (0x0001c04c) list_single_dyc_row_pane_g3_ParamLimits

0xe56b,	// (0x0001c04c) list_single_dyc_row_pane_g3

0xe577,	// (0x0001c058) list_single_dyc_row_pane_g4_ParamLimits

0xe577,	// (0x0001c058) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001d815) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001d815) list_single_dyc_row_pane_g

0xe583,	// (0x0001c064) list_single_dyc_row_text_pane_ParamLimits

0xe583,	// (0x0001c064) list_single_dyc_row_text_pane

0x955f,	// (0x00017040) bg_sp_fs_scroll_pane

0xe5a2,	// (0x0001c083) thumb_sp_fs_scroll_pane

0xd523,	// (0x0001b004) list_medium_line_g1_ParamLimits

0xd523,	// (0x0001b004) list_medium_line_g1

0xe5c2,	// (0x0001c0a3) list_medium_line_t1_ParamLimits

0xe5c2,	// (0x0001c0a3) list_medium_line_t1

0x1aed,	// (0x0000f5ce) list_medium_line_x2_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x2_g1

0x1af9,	// (0x0000f5da) list_medium_line_x2_g2_ParamLimits

0x1af9,	// (0x0000f5da) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001d81e) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001d81e) list_medium_line_x2_g

0xe5d7,	// (0x0001c0b8) list_medium_line_x2_t1_ParamLimits

0xe5d7,	// (0x0001c0b8) list_medium_line_x2_t1

0x1aed,	// (0x0000f5ce) list_medium_line_x3_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x3_g1

0x1af9,	// (0x0000f5da) list_medium_line_x3_g2_ParamLimits

0x1af9,	// (0x0000f5da) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001d81e) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001d81e) list_medium_line_x3_g

0xe5d7,	// (0x0001c0b8) list_medium_line_x3_t1_ParamLimits

0xe5d7,	// (0x0001c0b8) list_medium_line_x3_t1

0xe5ed,	// (0x0001c0ce) thumb_sp_fs_scroll_pane_g1

0xe5f6,	// (0x0001c0d7) thumb_sp_fs_scroll_pane_g2

0xe5ff,	// (0x0001c0e0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001d823) thumb_sp_fs_scroll_pane_g

0xe5ed,	// (0x0001c0ce) bg_sp_fs_scroll_pane_g1

0xe5f6,	// (0x0001c0d7) bg_sp_fs_scroll_pane_g2

0xe5ff,	// (0x0001c0e0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001d823) bg_sp_fs_scroll_pane_g

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1aed,	// (0x0000f5ce) list_medium_line_x2_t3_g4_g1

0x1b75,	// (0x0000f656) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1b75,	// (0x0000f656) list_medium_line_x2_t3_g4_g2

0x1af9,	// (0x0000f5da) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1af9,	// (0x0000f5da) list_medium_line_x2_t3_g4_g3

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1b05,	// (0x0000f5e6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0001cd88) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0001cd88) list_medium_line_x2_t3_g4_g

0x8182,	// (0x00015c63) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8182,	// (0x00015c63) list_medium_line_x2_t3_g4_t1

0x8198,	// (0x00015c79) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8198,	// (0x00015c79) list_medium_line_x2_t3_g4_t2

0x1b38,	// (0x0000f619) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b38,	// (0x0000f619) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001d82a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001d82a) list_medium_line_x2_t3_g4_t

0xd523,	// (0x0001b004) list_medium_line_g2_g1_ParamLimits

0xd523,	// (0x0001b004) list_medium_line_g2_g1

0xd52f,	// (0x0001b010) list_medium_line_g2_g2_ParamLimits

0xd52f,	// (0x0001b010) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0001d4dd) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0001d4dd) list_medium_line_g2_g

0xe608,	// (0x0001c0e9) list_medium_line_g2_t1_ParamLimits

0xe608,	// (0x0001c0e9) list_medium_line_g2_t1

0xd523,	// (0x0001b004) list_medium_line_t3_g2_g1_ParamLimits

0xd523,	// (0x0001b004) list_medium_line_t3_g2_g1

0xd52f,	// (0x0001b010) list_medium_line_t3_g2_g2_ParamLimits

0xd52f,	// (0x0001b010) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0001d4dd) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0001d4dd) list_medium_line_t3_g2_g

0x81b1,	// (0x00015c92) list_medium_line_t3_g2_t1_ParamLimits

0x81b1,	// (0x00015c92) list_medium_line_t3_g2_t1

0x81c8,	// (0x00015ca9) list_medium_line_t3_g2_t2_ParamLimits

0x81c8,	// (0x00015ca9) list_medium_line_t3_g2_t2

0x81dd,	// (0x00015cbe) list_medium_line_t3_g2_t3_ParamLimits

0x81dd,	// (0x00015cbe) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001d831) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001d831) list_medium_line_t3_g2_t

0xe463,	// (0x0001bf44) list_medium_line_right_icon_g1

0xe61d,	// (0x0001c0fe) list_medium_line_right_icon_t1

0xd523,	// (0x0001b004) list_medium_line_t2_g1_ParamLimits

0xd523,	// (0x0001b004) list_medium_line_t2_g1

0x81f2,	// (0x00015cd3) list_medium_line_t2_t1_ParamLimits

0x81f2,	// (0x00015cd3) list_medium_line_t2_t1

0x8209,	// (0x00015cea) list_medium_line_t2_t2_ParamLimits

0x8209,	// (0x00015cea) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001d838) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001d838) list_medium_line_t2_t

0xd523,	// (0x0001b004) list_medium_line_t3_g1_ParamLimits

0xd523,	// (0x0001b004) list_medium_line_t3_g1

0x821b,	// (0x00015cfc) list_medium_line_t3_t1_ParamLimits

0x821b,	// (0x00015cfc) list_medium_line_t3_t1

0x8232,	// (0x00015d13) list_medium_line_t3_t2_ParamLimits

0x8232,	// (0x00015d13) list_medium_line_t3_t2

0x8247,	// (0x00015d28) list_medium_line_t3_t3_ParamLimits

0x8247,	// (0x00015d28) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001d83d) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001d83d) list_medium_line_t3_t

0xd523,	// (0x0001b004) list_medium_line_g3_g1_ParamLimits

0xd523,	// (0x0001b004) list_medium_line_g3_g1

0xe62b,	// (0x0001c10c) list_medium_line_g3_g2_ParamLimits

0xe62b,	// (0x0001c10c) list_medium_line_g3_g2

0xd52f,	// (0x0001b010) list_medium_line_g3_g3_ParamLimits

0xd52f,	// (0x0001b010) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001d844) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001d844) list_medium_line_g3_g

0xe637,	// (0x0001c118) list_medium_line_g3_t1_ParamLimits

0xe637,	// (0x0001c118) list_medium_line_g3_t1

0xd523,	// (0x0001b004) list_medium_line_t2_g3_g1_ParamLimits

0xd523,	// (0x0001b004) list_medium_line_t2_g3_g1

0xe62b,	// (0x0001c10c) list_medium_line_t2_g3_g2_ParamLimits

0xe62b,	// (0x0001c10c) list_medium_line_t2_g3_g2

0xd52f,	// (0x0001b010) list_medium_line_t2_g3_g3_ParamLimits

0xd52f,	// (0x0001b010) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001d844) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001d844) list_medium_line_t2_g3_g

0x8259,	// (0x00015d3a) list_medium_line_t2_g3_t1_ParamLimits

0x8259,	// (0x00015d3a) list_medium_line_t2_g3_t1

0x8273,	// (0x00015d54) list_medium_line_t2_g3_t2_ParamLimits

0x8273,	// (0x00015d54) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001d84b) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001d84b) list_medium_line_t2_g3_t

0xd523,	// (0x0001b004) list_medium_line_t3_g3_g1_ParamLimits

0xd523,	// (0x0001b004) list_medium_line_t3_g3_g1

0xe62b,	// (0x0001c10c) list_medium_line_t3_g3_g2_ParamLimits

0xe62b,	// (0x0001c10c) list_medium_line_t3_g3_g2

0xd52f,	// (0x0001b010) list_medium_line_t3_g3_g3_ParamLimits

0xd52f,	// (0x0001b010) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001d844) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001d844) list_medium_line_t3_g3_g

0x8288,	// (0x00015d69) list_medium_line_t3_g3_t1_ParamLimits

0x8288,	// (0x00015d69) list_medium_line_t3_g3_t1

0x82a1,	// (0x00015d82) list_medium_line_t3_g3_t2_ParamLimits

0x82a1,	// (0x00015d82) list_medium_line_t3_g3_t2

0x82b7,	// (0x00015d98) list_medium_line_t3_g3_t3_ParamLimits

0x82b7,	// (0x00015d98) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001d850) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001d850) list_medium_line_t3_g3_t

0xe527,	// (0x0001c008) list_medium_line_right_iconx2_g1

0xe463,	// (0x0001bf44) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001d857) list_medium_line_right_iconx2_g

0xe64c,	// (0x0001c12d) list_medium_line_right_iconx2_t1

0xe527,	// (0x0001c008) list_medium_line_t2_right_iconx2_g1

0xe463,	// (0x0001bf44) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001d857) list_medium_line_t2_right_iconx2_g

0x82cd,	// (0x00015dae) list_medium_line_t2_right_iconx2_t1

0x82dd,	// (0x00015dbe) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001d85c) list_medium_line_t2_right_iconx2_t

0x82eb,	// (0x00015dcc) list_medium_line_x4_t4_t1

0x82f9,	// (0x00015dda) list_medium_line_x4_t4_t2

0x8309,	// (0x00015dea) list_medium_line_x4_t4_t3

0x8319,	// (0x00015dfa) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001d861) list_medium_line_x4_t4_t

0x8362,	// (0x00015e43) tport_appsw_pane_ParamLimits

0x8362,	// (0x00015e43) tport_appsw_pane

0x8373,	// (0x00015e54) tport_contact_pane_ParamLimits

0x8373,	// (0x00015e54) tport_contact_pane

0x8387,	// (0x00015e68) tport_listscroll_pane_ParamLimits

0x8387,	// (0x00015e68) tport_listscroll_pane

0x839f,	// (0x00015e80) cell_tport_appsw_pane_ParamLimits

0x839f,	// (0x00015e80) cell_tport_appsw_pane

0xd223,	// (0x0001ad04) tport_appsw_pane_g1_ParamLimits

0xd223,	// (0x0001ad04) tport_appsw_pane_g1

0xe65a,	// (0x0001c13b) tport_contact_pane_g1

0xe663,	// (0x0001c144) tport_contact_pane_t1

0xe671,	// (0x0001c152) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001d86a) tport_contact_pane_t

0xe67f,	// (0x0001c160) list_tport_pane

0x9e74,	// (0x00017955) scroll_pane_cp_030

0xe690,	// (0x0001c171) cell_tport_appsw_pane_g1

0xe6a0,	// (0x0001c181) cell_tport_appsw_pane_t1

0xe6ae,	// (0x0001c18f) grid_highlight_pane_cp019

0x83d5,	// (0x00015eb6) list_tport_double_graphic_pane_ParamLimits

0x83d5,	// (0x00015eb6) list_tport_double_graphic_pane

0x95b2,	// (0x00017093) list_highlight_pane_cp023_ParamLimits

0x95b2,	// (0x00017093) list_highlight_pane_cp023

0x83e2,	// (0x00015ec3) list_tport_double_graphic_pane_g1_ParamLimits

0x83e2,	// (0x00015ec3) list_tport_double_graphic_pane_g1

0x83ef,	// (0x00015ed0) list_tport_double_graphic_pane_t1_ParamLimits

0x83ef,	// (0x00015ed0) list_tport_double_graphic_pane_t1

0x8404,	// (0x00015ee5) list_tport_double_graphic_pane_t2_ParamLimits

0x8404,	// (0x00015ee5) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001d876) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001d876) list_tport_double_graphic_pane_t

0x955f,	// (0x00017040) main_cale_note_pane

0x5f1f,	// (0x00013a00) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5f1f,	// (0x00013a00) cell_vitu2_function_top_wide_pane_cp01

0x78c3,	// (0x000153a4) wait_bar_pane_cp05_ParamLimits

0x95b2,	// (0x00017093) listscroll_cmail_pane

0xe6b6,	// (0x0001c197) list_cmail_pane

0x8416,	// (0x00015ef7) list_cmail_body_pane

0x8416,	// (0x00015ef7) list_single_cmail_header_caption_pane

0x842d,	// (0x00015f0e) list_single_cmail_header_detail_pane_ParamLimits

0x842d,	// (0x00015f0e) list_single_cmail_header_detail_pane

0xe6d2,	// (0x0001c1b3) list_single_cmail_header_caption_pane_t1

0x8456,	// (0x00015f37) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8456,	// (0x00015f37) list_single_cmail_header_detail_pane_g1

0xe6e9,	// (0x0001c1ca) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6e9,	// (0x0001c1ca) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001d87b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001d87b) list_single_cmail_header_detail_pane_g

0x846c,	// (0x00015f4d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x846c,	// (0x00015f4d) list_single_cmail_header_detail_pane_t1

0xe726,	// (0x0001c207) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe726,	// (0x0001c207) list_single_cmail_header_editor_pane_bg

0xe73d,	// (0x0001c21e) list_cmail_body_pane_g1

0xe746,	// (0x0001c227) list_cmail_body_pane_t1

0xd272,	// (0x0001ad53) list_single_cmail_header_editor_pane_bg_g1

0xa22e,	// (0x00017d0f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd282,	// (0x0001ad63) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd27a,	// (0x0001ad5b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4fb,	// (0x0001afdc) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2a2,	// (0x0001ad83) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd292,	// (0x0001ad73) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd29a,	// (0x0001ad7b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa20e,	// (0x00017cef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84a8,	// (0x00015f89) calenote_gesture_pane_ParamLimits

0x84a8,	// (0x00015f89) calenote_gesture_pane

0x84c4,	// (0x00015fa5) calenote_window_pane_ParamLimits

0x84c4,	// (0x00015fa5) calenote_window_pane

0xe754,	// (0x0001c235) popup_note_window_cp01

0x84e0,	// (0x00015fc1) calenote_swipe_1_pane_ParamLimits

0x84e0,	// (0x00015fc1) calenote_swipe_1_pane

0x7d18,	// (0x000157f9) calenote_swipe_2_pane_ParamLimits

0x7d18,	// (0x000157f9) calenote_swipe_2_pane

0xe3d5,	// (0x0001beb6) calenote_swipe_1_pane_g1_ParamLimits

0xe3d5,	// (0x0001beb6) calenote_swipe_1_pane_g1

0xe3e2,	// (0x0001bec3) calenote_swipe_1_pane_g2_ParamLimits

0xe3e2,	// (0x0001bec3) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0001d7a0) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0001d7a0) calenote_swipe_1_pane_g

0xe766,	// (0x0001c247) calenote_swipe_1_pane_t1_ParamLimits

0xe766,	// (0x0001c247) calenote_swipe_1_pane_t1

0xe3d5,	// (0x0001beb6) calenote_swipe_2_pane_g1_ParamLimits

0xe3d5,	// (0x0001beb6) calenote_swipe_2_pane_g1

0xe785,	// (0x0001c266) calenote_swipe_2_pane_g2_ParamLimits

0xe785,	// (0x0001c266) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001d887) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001d887) calenote_swipe_2_pane_g

0xe791,	// (0x0001c272) calenote_swipe_2_pane_t1_ParamLimits

0xe791,	// (0x0001c272) calenote_swipe_2_pane_t1

0x955f,	// (0x00017040) main_mup_navstr_pane

0x4d65,	// (0x00012846) main_mup3_pane_t7_ParamLimits

0x4d65,	// (0x00012846) main_mup3_pane_t7

0xcdf6,	// (0x0001a8d7) main_mp4_pane_g6_ParamLimits

0xcdf6,	// (0x0001a8d7) main_mp4_pane_g6

0xd062,	// (0x0001ab43) main_image3_pane_t4_ParamLimits

0xd062,	// (0x0001ab43) main_image3_pane_t4

0x84f5,	// (0x00015fd6) popup_navstr_preview_pane_ParamLimits

0x84f5,	// (0x00015fd6) popup_navstr_preview_pane

0x8505,	// (0x00015fe6) scroll_navstr_pane_ParamLimits

0x8505,	// (0x00015fe6) scroll_navstr_pane

0x955f,	// (0x00017040) bg_popup_preview_window_pane_cp04

0xe7b8,	// (0x0001c299) popup_navstr_preview_pane_t1

0x8519,	// (0x00015ffa) scroll_navstr_pane_g1_ParamLimits

0x8519,	// (0x00015ffa) scroll_navstr_pane_g1

0x852d,	// (0x0001600e) scroll_navstr_pane_t1_ParamLimits

0x852d,	// (0x0001600e) scroll_navstr_pane_t1

0xe75d,	// (0x0001c23e) bg_button_pane_cp014

0xe75d,	// (0x0001c23e) bg_button_pane_cp030

0x7bbe,	// (0x0001569f) list_double_fisheye_pane_g4_ParamLimits

0x7bbe,	// (0x0001569f) list_double_fisheye_pane_g4

0x7bca,	// (0x000156ab) list_double_fisheye_pane_g5_ParamLimits

0x7bca,	// (0x000156ab) list_double_fisheye_pane_g5

0xe6c6,	// (0x0001c1a7) sp_fs_scroll_pane_cp03

0xe4b3,	// (0x0001bf94) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe4bf,	// (0x0001bfa0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0001d7bd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7dfa,	// (0x000158db) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe6be,	// (0x0001c19f) sp_fs_scroll_pane_cp02

0x9ece,	// (0x000179af) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9ece,	// (0x000179af) popup_sp_fs_calendar_preview_list_single_pane

0x955f,	// (0x00017040) main_cam6_pano_pane

0x95b2,	// (0x00017093) main_mup3_pane_ParamLimits

0x955f,	// (0x00017040) main_phacti_pane

0x77b6,	// (0x00015297) bg_button_pane_cp11

0x77ce,	// (0x000152af) main_mobtv_info_pane_g2_ParamLimits

0x77ce,	// (0x000152af) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0001d71d) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0001d71d) main_mobtv_info_pane_g

0x7983,	// (0x00015464) sc_clock_pane_t5_ParamLimits

0x7983,	// (0x00015464) sc_clock_pane_t5

0x7a2e,	// (0x0001550f) main_radioblah_pane_g1_ParamLimits

0xe318,	// (0x0001bdf9) main_radioblah_pane_t3_ParamLimits

0xe318,	// (0x0001bdf9) main_radioblah_pane_t3

0xe330,	// (0x0001be11) main_radioblah_pane_t4_ParamLimits

0xe330,	// (0x0001be11) main_radioblah_pane_t4

0x7a56,	// (0x00015537) main_radioblah_text_pane_ParamLimits

0x7a56,	// (0x00015537) main_radioblah_text_pane

0x7a68,	// (0x00015549) main_radioblah_info_pane_g1_ParamLimits

0x7afb,	// (0x000155dc) main_radioblah_info_pane_t4_ParamLimits

0x7afb,	// (0x000155dc) main_radioblah_info_pane_t4

0x95b2,	// (0x00017093) main_sp_fs_calendar_pane

0x8543,	// (0x00016024) main_phacti_pane_g1

0x854b,	// (0x0001602c) phacti_note_pane_ParamLimits

0x854b,	// (0x0001602c) phacti_note_pane

0xe7cf,	// (0x0001c2b0) phacti_term_pane_ParamLimits

0xe7cf,	// (0x0001c2b0) phacti_term_pane

0xe7e4,	// (0x0001c2c5) phacti_note_pane_t1_ParamLimits

0xe7e4,	// (0x0001c2c5) phacti_note_pane_t1

0xe7fb,	// (0x0001c2dc) phacti_term_pane_g1

0xe803,	// (0x0001c2e4) phacti_term_pane_t1_ParamLimits

0xe803,	// (0x0001c2e4) phacti_term_pane_t1

0xe82d,	// (0x0001c30e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe835,	// (0x0001c316) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001d891) popup_sp_fs_calendar_preview_list_single_pane_g

0xe83d,	// (0x0001c31e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe83d,	// (0x0001c31e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe853,	// (0x0001c334) aid_popup_sp_fs_bg_corner_pane

0xc466,	// (0x00019f47) popup_sp_fs_calendar_preview_bg_pane_g1

0x955f,	// (0x00017040) popup_sp_fs_calendar_preview_bg_pane

0xe85b,	// (0x0001c33c) popup_sp_fs_calendar_preview_list_pane

0xbf52,	// (0x00019a33) bg_main_sp_fs_cale_pane_ParamLimits

0xbf52,	// (0x00019a33) bg_main_sp_fs_cale_pane

0xe86c,	// (0x0001c34d) listscroll_cale_mrui_pane_ParamLimits

0xe86c,	// (0x0001c34d) listscroll_cale_mrui_pane

0xe881,	// (0x0001c362) listscroll_sp_fs_schedule_track_pane

0xe88a,	// (0x0001c36b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe88a,	// (0x0001c36b) main_sp_fs_ctrlbar_pane_cp01

0xe89d,	// (0x0001c37e) main_sp_fs_ribbon_pane

0xe8a5,	// (0x0001c386) popup_sp_fs_cale_preview_window

0x85ae,	// (0x0001608f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85ae,	// (0x0001608f) list_single_sp_fs_schedule_track_pane

0x95b2,	// (0x00017093) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x95b2,	// (0x00017093) bg_sp_fs_highlight_list_pane_cp03

0x85c2,	// (0x000160a3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85c2,	// (0x000160a3) list_single_sp_fs_schedule_track_pane_g1

0x85ce,	// (0x000160af) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85ce,	// (0x000160af) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001d896) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001d896) list_single_sp_fs_schedule_track_pane_g

0x85da,	// (0x000160bb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85da,	// (0x000160bb) list_single_sp_fs_schedule_track_pane_t1

0x85f4,	// (0x000160d5) sp_fs_schedule_track_pane_ParamLimits

0x85f4,	// (0x000160d5) sp_fs_schedule_track_pane

0xe8b7,	// (0x0001c398) sp_fs_schedule_track_pane_g1

0xe8bf,	// (0x0001c3a0) sp_fs_schedule_track_pane_g2

0xe8c7,	// (0x0001c3a8) sp_fs_schedule_track_pane_g3

0xe8cf,	// (0x0001c3b0) sp_fs_schedule_track_pane_g4

0xe8d7,	// (0x0001c3b8) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001d89b) sp_fs_schedule_track_pane_g

0xd272,	// (0x0001ad53) bg_sp_fs_schedule_viewer_highlight_g1

0xa22e,	// (0x00017d0f) bg_sp_fs_schedule_viewer_highlight_g2

0xd27a,	// (0x0001ad5b) bg_sp_fs_schedule_viewer_highlight_g3

0xd282,	// (0x0001ad63) bg_sp_fs_schedule_viewer_highlight_g4

0xd4fb,	// (0x0001afdc) bg_sp_fs_schedule_viewer_highlight_g5

0xd292,	// (0x0001ad73) bg_sp_fs_schedule_viewer_highlight_g6

0xd29a,	// (0x0001ad7b) bg_sp_fs_schedule_viewer_highlight_g7

0xd2a2,	// (0x0001ad83) bg_sp_fs_schedule_viewer_highlight_g8

0xa20e,	// (0x00017cef) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001d8a6) bg_sp_fs_schedule_viewer_highlight_g

0x955f,	// (0x00017040) bg_main_sp_fs_ribbon_pane

0x8605,	// (0x000160e6) main_sp_fs_ribbon_pane_g1

0xe8df,	// (0x0001c3c0) main_sp_fs_ribbon_pane_t1

0x860e,	// (0x000160ef) main_sp_fs_ribbon_pane_t2

0xe8ee,	// (0x0001c3cf) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001d8b9) main_sp_fs_ribbon_pane_t

0xe8fd,	// (0x0001c3de) main_sp_fs_ribbon_scheduler_pane

0xe905,	// (0x0001c3e6) bg_main_sp_fs_ribbon_pane_g1

0xe90e,	// (0x0001c3ef) bg_main_sp_fs_ribbon_pane_g2

0xe917,	// (0x0001c3f8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001d8c0) bg_main_sp_fs_ribbon_pane_g

0xe91f,	// (0x0001c400) main_sp_fs_ribbon_scheduler_pane_g1

0xe928,	// (0x0001c409) main_sp_fs_ribbon_scheduler_pane_g2

0xe931,	// (0x0001c412) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001d8c7) main_sp_fs_ribbon_scheduler_pane_g

0xe93a,	// (0x0001c41b) list_cale_mrui_pane

0x861d,	// (0x000160fe) sp_fs_scroll_pane_cp07_ParamLimits

0x861d,	// (0x000160fe) sp_fs_scroll_pane_cp07

0x8635,	// (0x00016116) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8635,	// (0x00016116) bg_sp_fs_schedule_viewer_highlight

0xe947,	// (0x0001c428) list_single_sp_fs_schedule_track_pane_cp01

0xe94f,	// (0x0001c430) list_sp_fs_schedule_track_pane

0xe957,	// (0x0001c438) sp_fs_scroll_pane_cp06_ParamLimits

0xe957,	// (0x0001c438) sp_fs_scroll_pane_cp06

0xc466,	// (0x00019f47) bgmain_sp_fs_calendar_pane_g1

0x8645,	// (0x00016126) list_single_cale_mrui_pane_ParamLimits

0x8645,	// (0x00016126) list_single_cale_mrui_pane

0xe969,	// (0x0001c44a) list_single_cale_mrui_row_pane_ParamLimits

0xe969,	// (0x0001c44a) list_single_cale_mrui_row_pane

0x8666,	// (0x00016147) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8666,	// (0x00016147) list_single_cale_mrui_row_pane_g1

0x869e,	// (0x0001617f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x869e,	// (0x0001617f) list_single_cale_mrui_row_pane_t1

0x86b0,	// (0x00016191) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86b0,	// (0x00016191) list_single_cale_mrui_row_pane_t2

0x8716,	// (0x000161f7) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8716,	// (0x000161f7) list_single_cale_mrui_row_pane_t3

0x8745,	// (0x00016226) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8745,	// (0x00016226) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001d8d5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001d8d5) list_single_cale_mrui_row_pane_t

0x8774,	// (0x00016255) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8774,	// (0x00016255) list_single_cmail_header_editor_pane_bg_cp01

0x8798,	// (0x00016279) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8798,	// (0x00016279) list_single_cmail_header_editor_pane_bg_cp02

0x87b6,	// (0x00016297) main_radioblah_text_pane_t1_ParamLimits

0x87b6,	// (0x00016297) main_radioblah_text_pane_t1

0xe98c,	// (0x0001c46d) cam6_indi_pane_cp01

0xe994,	// (0x0001c475) cam6_mode_pane_cp01

0xe99c,	// (0x0001c47d) cam6_pano_pane

0xe9a5,	// (0x0001c486) cam6_zoom_pane_cp01

0xe9ad,	// (0x0001c48e) cam6_pano_image_pane

0xe9b6,	// (0x0001c497) cam6_pano_pane_g1

0xe07f,	// (0x0001bb60) cam6_pano_pane_g2

0xe9bf,	// (0x0001c4a0) cam6_pano_pane_g3

0xe9c8,	// (0x0001c4a9) cam6_pano_pane_g4

0xca53,	// (0x0001a534) cam6_pano_pane_g5

0xe9d1,	// (0x0001c4b2) cam6_pano_pane_g6

0xe9d9,	// (0x0001c4ba) cam6_pano_pane_g7

0xe9e1,	// (0x0001c4c2) cam6_pano_pane_g8

0xe9ea,	// (0x0001c4cb) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001d8de) cam6_pano_pane_g

0x955f,	// (0x00017040) main_browser_tag_pane

0xe7b0,	// (0x0001c291) grid_navstr_albumart_pane

0xe9f3,	// (0x0001c4d4) cell_navstr_albumart_pane_ParamLimits

0xe9f3,	// (0x0001c4d4) cell_navstr_albumart_pane

0xabc7,	// (0x000186a8) cell_navstr_albumart_pane_g1

0xbd23,	// (0x00019804) cell_navstr_albumart_pane_g2

0xbd33,	// (0x00019814) cell_navstr_albumart_pane_g3

0xbd2b,	// (0x0001980c) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001d8f1) cell_navstr_albumart_pane_g

0x87cf,	// (0x000162b0) bt_list_pane_ParamLimits

0x87cf,	// (0x000162b0) bt_list_pane

0x87e2,	// (0x000162c3) bt_list_pane_t1

0x87f1,	// (0x000162d2) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001d8fa) bt_list_pane_t

0x955f,	// (0x00017040) main_cale_prevew_pane

0x8800,	// (0x000162e1) popup_cale_preview_window_ParamLimits

0x8800,	// (0x000162e1) popup_cale_preview_window

0x95b2,	// (0x00017093) bg_popup_preview_window_pane_cp05_ParamLimits

0x95b2,	// (0x00017093) bg_popup_preview_window_pane_cp05

0xea0a,	// (0x0001c4eb) list_cale_preview_pane_ParamLimits

0xea0a,	// (0x0001c4eb) list_cale_preview_pane

0x8815,	// (0x000162f6) list_double_cale_preview_pane_ParamLimits

0x8815,	// (0x000162f6) list_double_cale_preview_pane

0x8826,	// (0x00016307) list_single_cale_preview_pane_ParamLimits

0x8826,	// (0x00016307) list_single_cale_preview_pane

0xea16,	// (0x0001c4f7) list_single_cale_preview_pane_g1

0xea1e,	// (0x0001c4ff) list_single_cale_preview_pane_t1_ParamLimits

0xea1e,	// (0x0001c4ff) list_single_cale_preview_pane_t1

0x883a,	// (0x0001631b) list_double_cale_preview_pane_g1

0x8842,	// (0x00016323) list_double_cale_preview_pane_t1_ParamLimits

0x8842,	// (0x00016323) list_double_cale_preview_pane_t1

0x8857,	// (0x00016338) list_double_cale_preview_pane_t2_ParamLimits

0x8857,	// (0x00016338) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001d8ff) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001d8ff) list_double_cale_preview_pane_t

0x955f,	// (0x00017040) main_ezdial_pane

0x95b2,	// (0x00017093) main_sp_fs_email_pane_ParamLimits

0x7d70,	// (0x00015851) cmail_ddmenu_btn01_pane_ParamLimits

0x7d70,	// (0x00015851) cmail_ddmenu_btn01_pane

0x7d83,	// (0x00015864) cmail_ddmenu_btn02_pane_ParamLimits

0x7d83,	// (0x00015864) cmail_ddmenu_btn02_pane

0x7da6,	// (0x00015887) cmail_ddmenu_btn03_pane_ParamLimits

0x7da6,	// (0x00015887) cmail_ddmenu_btn03_pane

0x7e43,	// (0x00015924) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e64,	// (0x00015945) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8416,	// (0x00015ef7) list_cmail_body_pane_ParamLimits

0xe6e0,	// (0x0001c1c1) bg_button_pane_cp12

0xe6f5,	// (0x0001c1d6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6f5,	// (0x0001c1d6) list_single_cmail_header_detail_pane_g3

0xe702,	// (0x0001c1e3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe702,	// (0x0001c1e3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001d882) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001d882) list_single_cmail_header_detail_pane_t

0xe818,	// (0x0001c2f9) phacti_term_pane_t2_ParamLimits

0xe818,	// (0x0001c2f9) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001d88c) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001d88c) phacti_term_pane_t

0xea33,	// (0x0001c514) aid_size_list_single_double

0x886f,	// (0x00016350) popup_ezdial_listscroll_window

0x8885,	// (0x00016366) popup_number_entry_window_cp01

0x9f86,	// (0x00017a67) bg_popup_call_pane_cp09

0xea3f,	// (0x0001c520) ezdial_list_pane

0xea47,	// (0x0001c528) scroll_pane_cp23

0xbf52,	// (0x00019a33) bg_button_pane_cp028_ParamLimits

0xbf52,	// (0x00019a33) bg_button_pane_cp028

0x8891,	// (0x00016372) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8891,	// (0x00016372) cmail_ddmenu_btn01_pane_g1

0x889d,	// (0x0001637e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x889d,	// (0x0001637e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001d904) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001d904) cmail_ddmenu_btn01_pane_g

0xea4f,	// (0x0001c530) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea4f,	// (0x0001c530) cmail_ddmenu_btn01_pane_t1

0xbf52,	// (0x00019a33) bg_button_pane_cp029_ParamLimits

0xbf52,	// (0x00019a33) bg_button_pane_cp029

0x88a9,	// (0x0001638a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88a9,	// (0x0001638a) cmail_ddmenu_btn02_pane_g1

0x88c1,	// (0x000163a2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88c1,	// (0x000163a2) cmail_ddmenu_btn02_pane_t1

0x95b2,	// (0x00017093) bg_button_pane_cp031_ParamLimits

0x95b2,	// (0x00017093) bg_button_pane_cp031

0x88a9,	// (0x0001638a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88a9,	// (0x0001638a) cmail_ddmenu_btn03_pane_g1

0x88c1,	// (0x000163a2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88c1,	// (0x000163a2) cmail_ddmenu_btn03_pane_t1

0x5858,	// (0x00013339) cell_dialer2_keypad_pane_t1_ParamLimits

0x5872,	// (0x00013353) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5872,	// (0x00013353) cell_dialer2_keypad_pane_t1_copy1

0x7622,	// (0x00015103) ncimui_group_button_pane

0x95b2,	// (0x00017093) main_sp_fs_calendar_pane_ParamLimits

0x8416,	// (0x00015ef7) list_single_cmail_header_caption_pane_ParamLimits

0xe863,	// (0x0001c344) aid_recal_txt_sm_pane

0x955f,	// (0x00017040) mian_recal_day_pane

0xe8a5,	// (0x0001c386) popup_sp_fs_cale_preview_window_ParamLimits

0xea64,	// (0x0001c545) list_recal_day_pane

0xeaa6,	// (0x0001c587) list_single_recal_day_pane_ParamLimits

0xeaa6,	// (0x0001c587) list_single_recal_day_pane

0xeab8,	// (0x0001c599) list_single_recal_day_pane_g1_ParamLimits

0xeab8,	// (0x0001c599) list_single_recal_day_pane_g1

0xeac4,	// (0x0001c5a5) list_single_recal_day_pane_g2_ParamLimits

0xeac4,	// (0x0001c5a5) list_single_recal_day_pane_g2

0xead0,	// (0x0001c5b1) list_single_recal_day_pane_g3_ParamLimits

0xead0,	// (0x0001c5b1) list_single_recal_day_pane_g3

0x88e5,	// (0x000163c6) list_single_recal_day_pane_g4_ParamLimits

0x88e5,	// (0x000163c6) list_single_recal_day_pane_g4

0xeadc,	// (0x0001c5bd) list_single_recal_day_pane_g5_ParamLimits

0xeadc,	// (0x0001c5bd) list_single_recal_day_pane_g5

0x88fd,	// (0x000163de) list_single_recal_day_pane_g6_ParamLimits

0x88fd,	// (0x000163de) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001d913) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001d913) list_single_recal_day_pane_g

0xeaf0,	// (0x0001c5d1) list_single_recal_day_pane_t1

0x8909,	// (0x000163ea) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001d91e) list_single_recal_day_pane_t

0x891b,	// (0x000163fc) ncimui_query_button_pane_ParamLimits

0x891b,	// (0x000163fc) ncimui_query_button_pane

0x892b,	// (0x0001640c) ncimui_query_button_pane_t1_ParamLimits

0x892b,	// (0x0001640c) ncimui_query_button_pane_t1

0xeb02,	// (0x0001c5e3) ncimui_query_button_pane_t2_ParamLimits

0xeb02,	// (0x0001c5e3) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001d923) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001d923) ncimui_query_button_pane_t

0x893e,	// (0x0001641f) query_button_pane_ParamLimits

0x893e,	// (0x0001641f) query_button_pane

0x955f,	// (0x00017040) bg_button_pane_cp0028

0xeb15,	// (0x0001c5f6) query_button_pane_t1

0x3b64,	// (0x00011645) main_tport_pane_ParamLimits

0x8329,	// (0x00015e0a) bg_popup_window_pane_cp01_ParamLimits

0x8329,	// (0x00015e0a) bg_popup_window_pane_cp01

0x8340,	// (0x00015e21) heading_pane_cp08_ParamLimits

0x8340,	// (0x00015e21) heading_pane_cp08

0x8351,	// (0x00015e32) heading_pane_cp07_ParamLimits

0x8351,	// (0x00015e32) heading_pane_cp07

0xe690,	// (0x0001c171) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001d86f) cell_tport_appsw_pane_g

0xabbf,	// (0x000186a0) input_candi_list_open_g1

0xa409,	// (0x00017eea) list_cale_time_pane_g6_ParamLimits

0xa409,	// (0x00017eea) list_cale_time_pane_g6

0x47f6,	// (0x000122d7) aid_size_touch_calib_1_ParamLimits

0x47f6,	// (0x000122d7) aid_size_touch_calib_1

0x4808,	// (0x000122e9) aid_size_touch_calib_2_ParamLimits

0x4808,	// (0x000122e9) aid_size_touch_calib_2

0x481e,	// (0x000122ff) aid_size_touch_calib_3_ParamLimits

0x481e,	// (0x000122ff) aid_size_touch_calib_3

0x4836,	// (0x00012317) aid_size_touch_calib_4_ParamLimits

0x4836,	// (0x00012317) aid_size_touch_calib_4

0x484a,	// (0x0001232b) main_touch_calib_button_group_pane_ParamLimits

0x484a,	// (0x0001232b) main_touch_calib_button_group_pane

0x4862,	// (0x00012343) main_touch_calib_pane_g1_ParamLimits

0x4874,	// (0x00012355) main_touch_calib_pane_g2_ParamLimits

0x4886,	// (0x00012367) main_touch_calib_pane_g3_ParamLimits

0x4898,	// (0x00012379) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0001d22a) main_touch_calib_pane_g_ParamLimits

0x48aa,	// (0x0001238b) main_touch_calib_pane_t1_ParamLimits

0x48c2,	// (0x000123a3) main_touch_calib_pane_t2_ParamLimits

0x48da,	// (0x000123bb) main_touch_calib_pane_t3_ParamLimits

0x48ec,	// (0x000123cd) main_touch_calib_pane_t4_ParamLimits

0x48fe,	// (0x000123df) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0001d233) main_touch_calib_pane_t_ParamLimits

0xc809,	// (0x0001a2ea) list_single_fp_cale_pane_g3_ParamLimits

0xc809,	// (0x0001a2ea) list_single_fp_cale_pane_g3

0x95b2,	// (0x00017093) bg_button_pane_cp012_ParamLimits

0x95b2,	// (0x00017093) bg_vkb2_func_pane_cp03_ParamLimits

0x67c7,	// (0x000142a8) cell_vitu2_function_top_pane_g1_ParamLimits

0x95b2,	// (0x00017093) bg_vkb2_func_pane_cp04_ParamLimits

0x75b2,	// (0x00015093) main_ncimui_button_group_pane_ParamLimits

0x75b2,	// (0x00015093) main_ncimui_button_group_pane

0x7610,	// (0x000150f1) main_ncimui_pane_t3_ParamLimits

0x7610,	// (0x000150f1) main_ncimui_pane_t3

0xe7c6,	// (0x0001c2a7) phacti_button_group_pane

0xea33,	// (0x0001c514) aid_size_list_single_double_ParamLimits

0x886f,	// (0x00016350) popup_ezdial_listscroll_window_ParamLimits

0x8885,	// (0x00016366) popup_number_entry_window_cp01_ParamLimits

0x8950,	// (0x00016431) phacti_button_pane_ParamLimits

0x8950,	// (0x00016431) phacti_button_pane

0x955f,	// (0x00017040) bg_button_pane_cp14

0xeb23,	// (0x0001c604) phacti_button_pane_t1

0x895f,	// (0x00016440) main_touch_calib_button_pane_ParamLimits

0x895f,	// (0x00016440) main_touch_calib_button_pane

0x9d17,	// (0x000177f8) bg_button_pane_cp18_ParamLimits

0x9d17,	// (0x000177f8) bg_button_pane_cp18

0x897a,	// (0x0001645b) main_touch_calib_button_pane_t1_ParamLimits

0x897a,	// (0x0001645b) main_touch_calib_button_pane_t1

0x8990,	// (0x00016471) main_touch_calib_button_pane_t2_ParamLimits

0x8990,	// (0x00016471) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001d928) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001d928) main_touch_calib_button_pane_t

0x955f,	// (0x00017040) cell_ncimui_button_pane

0x955f,	// (0x00017040) bg_button_pane_cp032

0xeb31,	// (0x0001c612) cell_ncimui_button_pane_t1

0xd042,	// (0x0001ab23) image3_infobar_pane_ParamLimits

0xd042,	// (0x0001ab23) image3_infobar_pane

0x79ab,	// (0x0001548c) fs_bigclock_status_pane_ParamLimits

0x79ab,	// (0x0001548c) fs_bigclock_status_pane

0x79b8,	// (0x00015499) main_fs_bigclock_clock_pane_ParamLimits

0x79b8,	// (0x00015499) main_fs_bigclock_clock_pane

0x79da,	// (0x000154bb) main_fs_bigclock_indi_pane_ParamLimits

0x79da,	// (0x000154bb) main_fs_bigclock_indi_pane

0x7a04,	// (0x000154e5) main_fs_bigclock_swipe_pane_ParamLimits

0x7a04,	// (0x000154e5) main_fs_bigclock_swipe_pane

0x955f,	// (0x00017040) main_fs_clock_dumped_data

0xe18c,	// (0x0001bc6d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe18c,	// (0x0001bc6d) list_single_fs_bigclock_indicator_pane_g1

0xe1a6,	// (0x0001bc87) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1a6,	// (0x0001bc87) list_single_fs_bigclock_indicator_pane_g2

0xe1c0,	// (0x0001bca1) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe1c0,	// (0x0001bca1) list_single_fs_bigclock_indicator_pane_g3

0xe1da,	// (0x0001bcbb) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1da,	// (0x0001bcbb) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0001d751) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0001d751) list_single_fs_bigclock_indicator_pane_g

0xe203,	// (0x0001bce4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe203,	// (0x0001bce4) list_single_fs_bigclock_indicator_pane_t1

0xe22b,	// (0x0001bd0c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe22b,	// (0x0001bd0c) list_single_fs_bigclock_indicator_pane_t2

0xe253,	// (0x0001bd34) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe253,	// (0x0001bd34) list_single_fs_bigclock_indicator_pane_t3

0xe27b,	// (0x0001bd5c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe27b,	// (0x0001bd5c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0001d75c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0001d75c) list_single_fs_bigclock_indicator_pane_t

0xeb3f,	// (0x0001c620) image3_infobar_fav_pane_ParamLimits

0xeb3f,	// (0x0001c620) image3_infobar_fav_pane

0xeb4f,	// (0x0001c630) image3_infobar_loc_pane_ParamLimits

0xeb4f,	// (0x0001c630) image3_infobar_loc_pane

0xeb63,	// (0x0001c644) image3_infobar_time_pane_ParamLimits

0xeb63,	// (0x0001c644) image3_infobar_time_pane

0xc466,	// (0x00019f47) image3_infobar_time_pane_g1

0xeb73,	// (0x0001c654) image3_infobar_time_pane_t1

0xc466,	// (0x00019f47) image3_infobar_loc_pane_g1

0xeb81,	// (0x0001c662) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001d92d) image3_infobar_loc_pane_g

0xeb89,	// (0x0001c66a) image3_infobar_loc_pane_t1

0xc466,	// (0x00019f47) image3_infobar_fav_pane_g1

0xeb97,	// (0x0001c678) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001d932) image3_infobar_fav_pane_g

0xeb9f,	// (0x0001c680) fs_bigclock_status_battery_pane

0xeba8,	// (0x0001c689) fs_bigclock_status_signal_pane

0xebb1,	// (0x0001c692) fs_bigclock_status_title_pane

0xebba,	// (0x0001c69b) fs_bigclock_status_signal_pane_g1

0xebc3,	// (0x0001c6a4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001d937) fs_bigclock_status_signal_pane_g

0xebcb,	// (0x0001c6ac) fs_bigclock_status_battery_pane_g1

0xebd4,	// (0x0001c6b5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001d93c) fs_bigclock_status_battery_pane_g

0xebdc,	// (0x0001c6bd) fs_bigclock_status_title_pane_t1

0x89ae,	// (0x0001648f) main_fs_bigclock_clock_pane_g1

0x89c0,	// (0x000164a1) main_fs_bigclock_clock_pane_g2

0x89d1,	// (0x000164b2) main_fs_bigclock_clock_pane_g3

0x89d1,	// (0x000164b2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001d941) main_fs_bigclock_clock_pane_g

0x89e4,	// (0x000164c5) main_fs_bigclock_clock_pane_t1

0x89ff,	// (0x000164e0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001d94a) main_fs_bigclock_clock_pane_t

0xebea,	// (0x0001c6cb) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebea,	// (0x0001c6cb) list_single_fs_bigclock_indicator_pane

0xebfb,	// (0x0001c6dc) list_single_fs_bigclock_pane_ParamLimits

0xebfb,	// (0x0001c6dc) list_single_fs_bigclock_pane

0xec21,	// (0x0001c702) main_fs_bigclock_indicator_pane_t1

0xec30,	// (0x0001c711) list_single_fs_bigclock_pane_g1

0xec38,	// (0x0001c719) list_single_fs_bigclock_pane_t1

0xc466,	// (0x00019f47) main_fs_bigclock_swipe_pane_g1

0xec78,	// (0x0001c759) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001d95b) main_fs_bigclock_swipe_pane_g

0xec80,	// (0x0001c761) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec80,	// (0x0001c761) main_fs_bigclock_swipe_pane_t1

0x2bf9,	// (0x000106da) call_type_pane_ParamLimits

0x955f,	// (0x00017040) main_btmg_pane

0x8692,	// (0x00016173) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8692,	// (0x00016173) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001d8ce) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001d8ce) list_single_cale_mrui_row_pane_g

0xea8d,	// (0x0001c56e) list_recal_vselct_arw_lo_pane

0xea95,	// (0x0001c576) list_recal_vselct_arw_up_pane

0xea9d,	// (0x0001c57e) list_recal_vselct_pane

0xec9d,	// (0x0001c77e) btmg_button_pane

0x8a5f,	// (0x00016540) main_btmg_pane_g1

0x955f,	// (0x00017040) bg_button_pane_cp044

0xeca5,	// (0x0001c786) btmg_button_pane_t1

0xbf3e,	// (0x00019a1f) aid_listscroll_gen

0x95b2,	// (0x00017093) main_cntbar_detail_pane

0xe6b6,	// (0x0001c197) list_cmail_folder_pane

0xe6c6,	// (0x0001c1a7) sp_fs_scroll_pane_cp03_ParamLimits

0xecb3,	// (0x0001c794) list_single_fs_dyc_pane_cp01_ParamLimits

0xecb3,	// (0x0001c794) list_single_fs_dyc_pane_cp01

0xecc9,	// (0x0001c7aa) aid_size_cmail_indent

0xecd2,	// (0x0001c7b3) list_single_dyc_row_pane_cp01

0x8a8f,	// (0x00016570) cntbar_detail_list_pane_ParamLimits

0x8a8f,	// (0x00016570) cntbar_detail_list_pane

0x8ad5,	// (0x000165b6) main_cntbar_detail_cont_pane_ParamLimits

0x8ad5,	// (0x000165b6) main_cntbar_detail_cont_pane

0x8ae9,	// (0x000165ca) scroll_pane_cp032_ParamLimits

0x8ae9,	// (0x000165ca) scroll_pane_cp032

0x8af5,	// (0x000165d6) cntbar_detail_list_event_pane_ParamLimits

0x8af5,	// (0x000165d6) cntbar_detail_list_event_pane

0x8a9f,	// (0x00016580) cntbar_detail_list_shct_pane

0xecdb,	// (0x0001c7bc) aid_list_gen

0x9e74,	// (0x00017955) aid_scroll

0xd841,	// (0x0001b322) aid_size_touch_scroll_bar

0xd8fe,	// (0x0001b3df) aid_list_double

0x8b06,	// (0x000165e7) aid_list_single

0xd8f5,	// (0x0001b3d6) aid_list_single_lg

0x8b0f,	// (0x000165f0) aid_list_z_g_a_sm

0x8b17,	// (0x000165f8) aid_list_z_g_d

0x8b1f,	// (0x00016600) aid_txt_z_prm

0x8b2d,	// (0x0001660e) aid_txt_z_prm_cp01

0x8b3b,	// (0x0001661c) aid_txt_z_sec

0x8b49,	// (0x0001662a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b49,	// (0x0001662a) main_cntbar_detail_cont_pane_g1

0x8b5d,	// (0x0001663e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b5d,	// (0x0001663e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001d960) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001d960) main_cntbar_detail_cont_pane_g

0xece4,	// (0x0001c7c5) main_cntbar_detail_cont_pane_t1

0xecf2,	// (0x0001c7d3) main_cntbar_detail_cont_pane_t2

0xed00,	// (0x0001c7e1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001d965) main_cntbar_detail_cont_pane_t

0x8b6d,	// (0x0001664e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b6d,	// (0x0001664e) cell_cntbar_detail_list_shct_pane

0xed0e,	// (0x0001c7ef) cntbar_detail_list_shct_pane_g1

0xed17,	// (0x0001c7f8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001d96c) cntbar_detail_list_shct_pane_g

0x8b7f,	// (0x00016660) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b7f,	// (0x00016660) cntbar_detail_list_event_pane_g1

0x8b8b,	// (0x0001666c) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b8b,	// (0x0001666c) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001d971) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001d971) cntbar_detail_list_event_pane_g

0x8bf7,	// (0x000166d8) cntbar_detail_list_event_pane_t1_ParamLimits

0x8bf7,	// (0x000166d8) cntbar_detail_list_event_pane_t1

0x8c0c,	// (0x000166ed) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c0c,	// (0x000166ed) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001d97e) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001d97e) cntbar_detail_list_event_pane_t

0xc466,	// (0x00019f47) cell_cntbar_detail_list_shct_pane_g1

0xaa06,	// (0x000184e7) navi_pane_mv_g3

0x95b2,	// (0x00017093) main_cntbar_detail_pane_ParamLimits

0x955f,	// (0x00017040) main_notif_wgt_pane

0xcd84,	// (0x0001a865) aid_tch_main_mp4_pane_g4

0xcfa6,	// (0x0001aa87) popup_slider_window_cp02

0xea83,	// (0x0001c564) list_recal_day_event_pane

0x8a67,	// (0x00016548) cntbar_detail_btn_pane_ParamLimits

0x8a67,	// (0x00016548) cntbar_detail_btn_pane

0x8a7a,	// (0x0001655b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a7a,	// (0x0001655b) cntbar_detail_btn_pane_cp01

0x8a9f,	// (0x00016580) cntbar_detail_list_shct_pane_ParamLimits

0x8aaf,	// (0x00016590) cntbar_detail_pane_g1_ParamLimits

0x8aaf,	// (0x00016590) cntbar_detail_pane_g1

0x8abf,	// (0x000165a0) cntbar_detail_pane_t1_ParamLimits

0x8abf,	// (0x000165a0) cntbar_detail_pane_t1

0x8b97,	// (0x00016678) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b97,	// (0x00016678) cntbar_detail_list_event_pane_g3

0x8baf,	// (0x00016690) cntbar_detail_list_event_pane_g4_ParamLimits

0x8baf,	// (0x00016690) cntbar_detail_list_event_pane_g4

0x8bc7,	// (0x000166a8) cntbar_detail_list_event_pane_g5_ParamLimits

0x8bc7,	// (0x000166a8) cntbar_detail_list_event_pane_g5

0x8bdf,	// (0x000166c0) cntbar_detail_list_event_pane_g6_ParamLimits

0x8bdf,	// (0x000166c0) cntbar_detail_list_event_pane_g6

0x8c21,	// (0x00016702) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c21,	// (0x00016702) cntbar_detail_list_event_pane_t3

0x8c33,	// (0x00016714) popup_notif_wgt_window_ParamLimits

0x8c33,	// (0x00016714) popup_notif_wgt_window

0x8c48,	// (0x00016729) popup_submenu_window_cp01_ParamLimits

0x8c48,	// (0x00016729) popup_submenu_window_cp01

0x9f86,	// (0x00017a67) bg_popup_window_pane_cp10

0xed20,	// (0x0001c801) listscroll_notif_wgt_pane

0xed31,	// (0x0001c812) list_notif_wgt_window

0xed3a,	// (0x0001c81b) scroll_pane_cp033

0x8c58,	// (0x00016739) list_notif_wgt_row_pane_ParamLimits

0x8c58,	// (0x00016739) list_notif_wgt_row_pane

0xed43,	// (0x0001c824) aid_size_list_notif_wgt_del

0xed50,	// (0x0001c831) list_notif_wgt_row_pane_g1

0xed5c,	// (0x0001c83d) list_notif_wgt_row_pane_g2

0xed70,	// (0x0001c851) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001d985) list_notif_wgt_row_pane_g

0xed7d,	// (0x0001c85e) list_notif_wgt_row_pane_t1

0xed93,	// (0x0001c874) list_notif_wgt_row_pane_t2

0xeda5,	// (0x0001c886) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001d98c) list_notif_wgt_row_pane_t

0xd53b,	// (0x0001b01c) list_recal_day_event_pane_g1

0xedb7,	// (0x0001c898) list_recal_day_event_pane_t1

0x955f,	// (0x00017040) bg_button_pane_cp045

0x8c68,	// (0x00016749) cntbar_detail_btn_pane_t1

0xbf52,	// (0x00019a33) main_callh_pane_ParamLimits

0xbf52,	// (0x00019a33) main_callh_pane

0x955f,	// (0x00017040) main_coverflow0_pane

0x955f,	// (0x00017040) main_wgtman_pane

0x7a18,	// (0x000154f9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a18,	// (0x000154f9) main_fs_bigclock_unlock_btn_pane

0xe688,	// (0x0001c169) bg_button_pane_cp16

0xe698,	// (0x0001c179) cell_tport_appsw_pane_g3

0x8c76,	// (0x00016757) cf0_flow_pane_ParamLimits

0x8c76,	// (0x00016757) cf0_flow_pane

0xedc6,	// (0x0001c8a7) listscroll_cf0_pane

0xedcf,	// (0x0001c8b0) main_cf0_pane_g1

0x8c8b,	// (0x0001676c) main_cf0_pane_t1_ParamLimits

0x8c8b,	// (0x0001676c) main_cf0_pane_t1

0x8ca0,	// (0x00016781) main_cf0_pane_t2_ParamLimits

0x8ca0,	// (0x00016781) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001d998) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001d998) main_cf0_pane_t

0xede1,	// (0x0001c8c2) scroll_pane_cp11

0x8cb5,	// (0x00016796) cf0_flow_pane_g1

0x8cbd,	// (0x0001679e) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001d99d) cf0_flow_pane_g

0x8cc5,	// (0x000167a6) cf0_flow_pane_t1

0x955f,	// (0x00017040) main_call6_pane

0x955f,	// (0x00017040) main_calllock_pane

0x8cd3,	// (0x000167b4) call6_btn_grp_pane_ParamLimits

0x8cd3,	// (0x000167b4) call6_btn_grp_pane

0x8ce9,	// (0x000167ca) call6_pane_g1_ParamLimits

0x8ce9,	// (0x000167ca) call6_pane_g1

0x8cfc,	// (0x000167dd) popup_call6_1st_window_ParamLimits

0x8cfc,	// (0x000167dd) popup_call6_1st_window

0x8d0b,	// (0x000167ec) popup_call6_2nd_window_ParamLimits

0x8d0b,	// (0x000167ec) popup_call6_2nd_window

0x8d1a,	// (0x000167fb) cell_call6_btn_pane_ParamLimits

0x8d1a,	// (0x000167fb) cell_call6_btn_pane

0x9f86,	// (0x00017a67) bg_popup_call2_in_pane_cp03

0xedea,	// (0x0001c8cb) popup_call6_1st_window_g1

0xedf2,	// (0x0001c8d3) popup_call6_1st_window_g2

0xedfa,	// (0x0001c8db) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001d9a2) popup_call6_1st_window_g

0xee02,	// (0x0001c8e3) popup_call6_1st_window_t1

0xee11,	// (0x0001c8f2) popup_call6_1st_window_t2

0xee1f,	// (0x0001c900) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001d9a9) popup_call6_1st_window_t

0x9f86,	// (0x00017a67) bg_popup_call2_in_pane_cp04

0xedea,	// (0x0001c8cb) popup_call6_2nd_window_g1

0xedf2,	// (0x0001c8d3) popup_call6_2nd_window_g2

0xedfa,	// (0x0001c8db) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001d9a2) popup_call6_2nd_window_g

0xee02,	// (0x0001c8e3) popup_call6_2nd_window_t1

0x955f,	// (0x00017040) bg_button_pane_cp15

0xee2d,	// (0x0001c90e) cell_call6_btn_pane_g1

0xee36,	// (0x0001c917) cell_call6_btn_pane_t1

0x8d2e,	// (0x0001680f) listscroll_wgtman_pane_ParamLimits

0x8d2e,	// (0x0001680f) listscroll_wgtman_pane

0x8d4f,	// (0x00016830) wgtman_btn_pane_ParamLimits

0x8d4f,	// (0x00016830) wgtman_btn_pane

0xa85d,	// (0x0001833e) aid_scroll_copy1

0xee45,	// (0x0001c926) list_wgtman_pane

0x8d8f,	// (0x00016870) wgtman_btn_pane_g1_ParamLimits

0x8d8f,	// (0x00016870) wgtman_btn_pane_g1

0x8dbb,	// (0x0001689c) wgtman_btn_pane_t1_ParamLimits

0x8dbb,	// (0x0001689c) wgtman_btn_pane_t1

0xee4f,	// (0x0001c930) wgtman_btn_pane_t2_ParamLimits

0xee4f,	// (0x0001c930) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001d9b0) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001d9b0) wgtman_btn_pane_t

0x8df8,	// (0x000168d9) listrow_wgtman_pane_ParamLimits

0x8df8,	// (0x000168d9) listrow_wgtman_pane

0x8e09,	// (0x000168ea) listrow_wgtman_pane_g1

0x8e16,	// (0x000168f7) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001d9b5) listrow_wgtman_pane_g

0x8e2e,	// (0x0001690f) listrow_wgtman_pane_t1

0x8e46,	// (0x00016927) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001d9ba) listrow_wgtman_pane_t

0x8e6c,	// (0x0001694d) wait_bar_pane_cp09

0xee66,	// (0x0001c947) main_calllock_btn_pane

0xee6e,	// (0x0001c94f) main_calllock_pane_g1

0x955f,	// (0x00017040) bg_button_pane_cp17

0xee77,	// (0x0001c958) main_calllock_btn_pane_g1

0xee80,	// (0x0001c961) main_calllock_btn_pane_t1

0x955f,	// (0x00017040) main_dialer3_pane

0x955f,	// (0x00017040) main_fmrd2_pane

0xc466,	// (0x00019f47) main_fs_bigclock_unlock_btn_pane_g1

0xee97,	// (0x0001c978) main_fs_bigclock_unlock_btn_pane_t1

0x8e7e,	// (0x0001695f) area_fmrd2_info_pane_ParamLimits

0x8e7e,	// (0x0001695f) area_fmrd2_info_pane

0x8e8d,	// (0x0001696e) area_fmrd2_visual_pane_ParamLimits

0x8e8d,	// (0x0001696e) area_fmrd2_visual_pane

0x8e9b,	// (0x0001697c) fmrd2_indi_pane_ParamLimits

0x8e9b,	// (0x0001697c) fmrd2_indi_pane

0x8ea8,	// (0x00016989) area_fmrd2_visual_pane_g1

0x8eb0,	// (0x00016991) area_fmrd2_visual_pane_t1

0x8ebe,	// (0x0001699f) area_fmrd2_visual_pane_t2

0x8ecc,	// (0x000169ad) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001d9c4) area_fmrd2_visual_pane_t

0x8eda,	// (0x000169bb) area_fmrd2_info_pane_g1

0x8ee2,	// (0x000169c3) area_fmrd2_info_pane_t1

0x8ef0,	// (0x000169d1) area_fmrd2_info_pane_t2

0x8efe,	// (0x000169df) area_fmrd2_info_pane_t3

0x8f0c,	// (0x000169ed) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001d9cb) area_fmrd2_info_pane_t

0x8f1a,	// (0x000169fb) fmrd2_indi_pane_t1

0x8f28,	// (0x00016a09) fmrd2_indi_pane_t2

0x8f36,	// (0x00016a17) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001d9d4) fmrd2_indi_pane_t

0xe1e9,	// (0x0001bcca) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1e9,	// (0x0001bcca) list_single_fs_bigclock_indicator_pane_g5

0xe297,	// (0x0001bd78) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe297,	// (0x0001bd78) list_single_fs_bigclock_indicator_pane_t5

0x855f,	// (0x00016040) aid_cell_bcale_month_pane_ParamLimits

0x855f,	// (0x00016040) aid_cell_bcale_month_pane

0x857d,	// (0x0001605e) bcale_month_pane_ParamLimits

0x857d,	// (0x0001605e) bcale_month_pane

0x8595,	// (0x00016076) bcale_preview_pane_ParamLimits

0x8595,	// (0x00016076) bcale_preview_pane

0xec38,	// (0x0001c719) list_single_fs_bigclock_pane_t1_ParamLimits

0xec54,	// (0x0001c735) list_single_fs_bigclock_pane_t2_ParamLimits

0xec54,	// (0x0001c735) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001d956) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001d956) list_single_fs_bigclock_pane_t

0xee8f,	// (0x0001c970) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001d9bf) main_fs_bigclock_unlock_btn_pane_g

0x8f44,	// (0x00016a25) aid_dia3_key_size_ParamLimits

0x8f44,	// (0x00016a25) aid_dia3_key_size

0x8f53,	// (0x00016a34) aid_dia3_listrow_size_ParamLimits

0x8f53,	// (0x00016a34) aid_dia3_listrow_size

0x8f66,	// (0x00016a47) dia3_keypad_fun_pane_ParamLimits

0x8f66,	// (0x00016a47) dia3_keypad_fun_pane

0x8f7a,	// (0x00016a5b) dia3_keypad_num_pane_ParamLimits

0x8f7a,	// (0x00016a5b) dia3_keypad_num_pane

0x8f8b,	// (0x00016a6c) dia3_listscroll_pane_ParamLimits

0x8f8b,	// (0x00016a6c) dia3_listscroll_pane

0x8f9c,	// (0x00016a7d) dia3_numentry_pane_ParamLimits

0x8f9c,	// (0x00016a7d) dia3_numentry_pane

0xeeb7,	// (0x0001c998) dia3_list_pane

0xeec0,	// (0x0001c9a1) scroll_pane_cp12

0x955f,	// (0x00017040) bg_dia3_numentry_pane

0x8fae,	// (0x00016a8f) dia3_numentry_pane_t1

0x8fbd,	// (0x00016a9e) cell_dia3_key_num_pane

0x8fc5,	// (0x00016aa6) cell_dia3_key0_fun_pane_ParamLimits

0x8fc5,	// (0x00016aa6) cell_dia3_key0_fun_pane

0x8fd9,	// (0x00016aba) cell_dia3_key1_fun_pane_ParamLimits

0x8fd9,	// (0x00016aba) cell_dia3_key1_fun_pane

0x8ff0,	// (0x00016ad1) dia3_listrow_pane

0xdeea,	// (0x0001b9cb) bg_dia3_numentry_pane_g1

0x955f,	// (0x00017040) bg_button_pane_cp21

0xeec9,	// (0x0001c9aa) cell_dia3_key_num_pane_t1

0xeed7,	// (0x0001c9b8) cell_dia3_key_num_pane_t2

0xeee6,	// (0x0001c9c7) cell_dia3_key_num_pane_t3

0xeef5,	// (0x0001c9d6) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001d9db) cell_dia3_key_num_pane_t

0x955f,	// (0x00017040) bg_button_pane_cp19

0xef04,	// (0x0001c9e5) cell_dia3_key0_fun_pane_g1

0x955f,	// (0x00017040) bg_button_pane_cp20

0x9002,	// (0x00016ae3) cell_dia3_key1_fun_pane_g1

0x900a,	// (0x00016aeb) area_left_week_number_pane

0x9016,	// (0x00016af7) area_top_day_name_pane

0x9027,	// (0x00016b08) frame_month_view_pane

0xef0c,	// (0x0001c9ed) grid_month_view_pane

0x9038,	// (0x00016b19) cell_top_day_name_pane_ParamLimits

0x9038,	// (0x00016b19) cell_top_day_name_pane

0x905b,	// (0x00016b3c) cell_area_left_week_number_pane_ParamLimits

0x905b,	// (0x00016b3c) cell_area_left_week_number_pane

0x906f,	// (0x00016b50) cell_month_view_pane_ParamLimits

0x906f,	// (0x00016b50) cell_month_view_pane

0xef1a,	// (0x0001c9fb) frm_month_g1

0x9094,	// (0x00016b75) frm_month_g2

0x90a5,	// (0x00016b86) frm_month_g3

0x90b6,	// (0x00016b97) frm_month_g4

0x90c7,	// (0x00016ba8) frm_month_g5

0x90d8,	// (0x00016bb9) frm_month_g6

0x90e9,	// (0x00016bca) frm_month_g7

0xef27,	// (0x0001ca08) frm_month_g8

0x90fa,	// (0x00016bdb) frm_month_g9

0x910a,	// (0x00016beb) frm_month_g10

0x911a,	// (0x00016bfb) frm_month_g11

0x912a,	// (0x00016c0b) frm_month_g12

0x913a,	// (0x00016c1b) frm_month_g13

0x914a,	// (0x00016c2b) frm_month_g14

0x915a,	// (0x00016c3b) frm_month_g15

0x916c,	// (0x00016c4d) frm_month_g16

0x000f,

0xff03,	// (0x0001d9e4) frm_month_g

0xef34,	// (0x0001ca15) cell_top_day_name_pane_t1

0x917e,	// (0x00016c5f) cell_area_left_week_number_pane_g1

0x918a,	// (0x00016c6b) cell_area_left_week_number_pane_t1

0xc695,	// (0x0001a176) cell_month_view_pane_g1

0x919d,	// (0x00016c7e) cell_month_view_pane_t1

0x955f,	// (0x00017040) main_fps_pane

0xe47b,	// (0x0001bf5c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe47b,	// (0x0001bf5c) cmail_ddmenu_btn02_pane_cp1

0xe497,	// (0x0001bf78) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe497,	// (0x0001bf78) cmail_ddmenu_btn02_pane_cp2

0x88b5,	// (0x00016396) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88b5,	// (0x00016396) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001d909) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001d909) cmail_ddmenu_btn02_pane_g

0x88d3,	// (0x000163b4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88d3,	// (0x000163b4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001d90e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001d90e) cmail_ddmenu_btn02_pane_t

0x91b0,	// (0x00016c91) fps_text_pane_ParamLimits

0x91b0,	// (0x00016c91) fps_text_pane

0x91c6,	// (0x00016ca7) main_fps_pane_g1_ParamLimits

0x91c6,	// (0x00016ca7) main_fps_pane_g1

0x91dc,	// (0x00016cbd) wait_bar_pane_cp010_ParamLimits

0x91dc,	// (0x00016cbd) wait_bar_pane_cp010

0x91ed,	// (0x00016cce) fps_text_pane_t1_ParamLimits

0x91ed,	// (0x00016cce) fps_text_pane_t1

0xeea5,	// (0x0001c986) cam4_image_uncrop_pane_g1

0xeeae,	// (0x0001c98f) cam4_image_uncrop_pane_g2

0x5cab,	// (0x0001378c) cam4_image_uncrop_pane_g3

0x5cb4,	// (0x00013795) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0001d3cb) cam4_image_uncrop_pane_g

0x8ff0,	// (0x00016ad1) dia3_listrow_pane_ParamLimits

0x955f,	// (0x00017040) main_phob2_pane

0x83b0,	// (0x00015e91) cell_tport_appsw_pane_cp02_ParamLimits

0x83b0,	// (0x00015e91) cell_tport_appsw_pane_cp02

0x83c0,	// (0x00015ea1) cell_tport_appsw_pane_cp03_ParamLimits

0x83c0,	// (0x00015ea1) cell_tport_appsw_pane_cp03

0x955f,	// (0x00017040) phob2_contact_card_pane

0x955f,	// (0x00017040) phob2_listscroll_pane

0xef47,	// (0x0001ca28) phob2_list_pane

0xef4f,	// (0x0001ca30) scroll_pane_cp034

0x9205,	// (0x00016ce6) phob2_cc_data_pane_ParamLimits

0x9205,	// (0x00016ce6) phob2_cc_data_pane

0x9222,	// (0x00016d03) phob2_cc_listscroll_pane_ParamLimits

0x9222,	// (0x00016d03) phob2_cc_listscroll_pane

0x8df8,	// (0x000168d9) list_double_large_graphic_phob2_pane_ParamLimits

0x8df8,	// (0x000168d9) list_double_large_graphic_phob2_pane

0x923e,	// (0x00016d1f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x923e,	// (0x00016d1f) list_double_large_graphic_phob2_pane_g1

0x9254,	// (0x00016d35) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9254,	// (0x00016d35) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001da05) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001da05) list_double_large_graphic_phob2_pane_g

0x9260,	// (0x00016d41) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9260,	// (0x00016d41) list_double_large_graphic_phob2_pane_t1

0x9276,	// (0x00016d57) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9276,	// (0x00016d57) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001da0a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001da0a) list_double_large_graphic_phob2_pane_t

0x955f,	// (0x00017040) list_highlight_pane_cp024

0x928b,	// (0x00016d6c) phob2_cc_button_pane

0x9293,	// (0x00016d74) phob2_cc_data_pane_g1_ParamLimits

0x9293,	// (0x00016d74) phob2_cc_data_pane_g1

0x92a8,	// (0x00016d89) phob2_cc_data_pane_g2_ParamLimits

0x92a8,	// (0x00016d89) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001da0f) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001da0f) phob2_cc_data_pane_g

0x92b8,	// (0x00016d99) phob2_cc_data_pane_t1_ParamLimits

0x92b8,	// (0x00016d99) phob2_cc_data_pane_t1

0x92d0,	// (0x00016db1) phob2_cc_data_pane_t2_ParamLimits

0x92d0,	// (0x00016db1) phob2_cc_data_pane_t2

0x92e8,	// (0x00016dc9) phob2_cc_data_pane_t3_ParamLimits

0x92e8,	// (0x00016dc9) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001da14) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001da14) phob2_cc_data_pane_t

0xef57,	// (0x0001ca38) phob2_cc_list_pane_ParamLimits

0xef57,	// (0x0001ca38) phob2_cc_list_pane

0xde07,	// (0x0001b8e8) scroll_pane_cp035_ParamLimits

0xde07,	// (0x0001b8e8) scroll_pane_cp035

0x95b2,	// (0x00017093) bg_button_pane_cp033

0xef63,	// (0x0001ca44) phob2_cc_button_pane_g1

0xef6f,	// (0x0001ca50) phob2_cc_button_pane_t1

0xef84,	// (0x0001ca65) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001da1b) phob2_cc_button_pane_t

0x9300,	// (0x00016de1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9300,	// (0x00016de1) list_double_large_graphic_phob2_cc_pane

0x932e,	// (0x00016e0f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x932e,	// (0x00016e0f) list_double_large_graphic_phob2_cc_pane_g1

0x933a,	// (0x00016e1b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x933a,	// (0x00016e1b) list_double_large_graphic_phob2_cc_pane_g2

0x9346,	// (0x00016e27) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9346,	// (0x00016e27) list_double_large_graphic_phob2_cc_pane_g3

0x9352,	// (0x00016e33) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9352,	// (0x00016e33) list_double_large_graphic_phob2_cc_pane_g4

0x935e,	// (0x00016e3f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x935e,	// (0x00016e3f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001da20) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001da20) list_double_large_graphic_phob2_cc_pane_g

0x936a,	// (0x00016e4b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x936a,	// (0x00016e4b) list_double_large_graphic_phob2_cc_pane_t1

0x9393,	// (0x00016e74) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9393,	// (0x00016e74) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001da2b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001da2b) list_double_large_graphic_phob2_cc_pane_t

0xef96,	// (0x0001ca77) list_highlight_pane_cp025_ParamLimits

0xef96,	// (0x0001ca77) list_highlight_pane_cp025

0x95b2,	// (0x00017093) bg_button_pane_cp033_ParamLimits

0xef63,	// (0x0001ca44) phob2_cc_button_pane_g1_ParamLimits

0xef6f,	// (0x0001ca50) phob2_cc_button_pane_t1_ParamLimits

0xef84,	// (0x0001ca65) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001da1b) phob2_cc_button_pane_t_ParamLimits

0x0d3c,	// (0x0000e81d) popup_wgtman_window

0xdf0a,	// (0x0001b9eb) scroll_pane_cp038

0x8d71,	// (0x00016852) wgtman_btn_pane_cp_01_ParamLimits

0x8d71,	// (0x00016852) wgtman_btn_pane_cp_01

0xefa4,	// (0x0001ca85) wgtman_content_pane

0xefad,	// (0x0001ca8e) wgtman_heading_pane

0x955f,	// (0x00017040) bg_heading_pane_cp02

0xefb6,	// (0x0001ca97) wgtman_heading_pane_g1

0xefbe,	// (0x0001ca9f) wgtman_heading_pane_t1

0xefcc,	// (0x0001caad) scroll_pane_cp036

0xefd4,	// (0x0001cab5) wgtman_list_pane

0xe5ab,	// (0x0001c08c) wgtman_list_pane_t1_ParamLimits

0xe5ab,	// (0x0001c08c) wgtman_list_pane_t1

0xd131,	// (0x0001ac12) cam4_grid_pane

0x696e,	// (0x0001444f) bg_button_pane_cp015_ParamLimits

0x697e,	// (0x0001445f) bg_button_pane_cp016_ParamLimits

0x6990,	// (0x00014471) bg_button_pane_cp017_ParamLimits

0x69e0,	// (0x000144c1) popup_vitu2_query_window_g3_ParamLimits

0x69e0,	// (0x000144c1) popup_vitu2_query_window_g3

0x6a93,	// (0x00014574) popup_vitu2_query_window_t6_ParamLimits

0x6a93,	// (0x00014574) popup_vitu2_query_window_t6

0x6abe,	// (0x0001459f) popup_vitu2_query_window_t7_ParamLimits

0x6abe,	// (0x0001459f) popup_vitu2_query_window_t7

0xeea5,	// (0x0001c986) cam4_grid_pane_g1

0xeeae,	// (0x0001c98f) cam4_grid_pane_g2

0xefdc,	// (0x0001cabd) cam4_grid_pane_g3

0xefe5,	// (0x0001cac6) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001da30) cam4_grid_pane_g

0x1c3e,	// (0x0000f71f) aid_placing_vt_slider_lsc_ParamLimits

0x1eae,	// (0x0000f98f) vidtel_button_pane_ParamLimits

0x1eae,	// (0x0000f98f) vidtel_button_pane

0x955f,	// (0x00017040) bg_button_pane_cp034

0x93bc,	// (0x00016e9d) vidtel_button_pane_g1

0x93c4,	// (0x00016ea5) vidtel_button_pane_t1

0xd4c9,	// (0x0001afaa) aid_size_vtel_slider_touch

0xde07,	// (0x0001b8e8) scroll_pane_cp039

0xdf39,	// (0x0001ba1a) ncim_query_button_pane_cp01_ParamLimits

0xdf58,	// (0x0001ba39) ncimui_query_pane_g1_ParamLimits

0x95b2,	// (0x00017093) input_focus_pane_cp012_ParamLimits

0xdf7d,	// (0x0001ba5e) ncim_query_entry_pane_t1_ParamLimits

0xde07,	// (0x0001b8e8) scroll_pane_cp039_ParamLimits

0xa921,	// (0x00018402) navi_pane_bcale_mc_g1

0xa929,	// (0x0001840a) navi_pane_bcale_mc_t1

0xe4cb,	// (0x0001bfac) main_sp_fs_email_pane_g1

0xe4d7,	// (0x0001bfb8) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001d7c6) main_sp_fs_email_pane_g

0xe97f,	// (0x0001c460) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe97f,	// (0x0001c460) list_single_cale_mrui_row_pane_g3

0x88f3,	// (0x000163d4) list_single_recal_day_pane_g5_event_pane

0xeae8,	// (0x0001c5c9) list_single_recal_day_pane_g7

0xefee,	// (0x0001cacf) list_recal_day_event_pane_cp01

0xeff7,	// (0x0001cad8) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x0001cae0) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x0001cae8) list_recal_vselct_pane_cp01

0xd53b,	// (0x0001b01c) list_recal_day_event_pane_cp01_g1

0xf011,	// (0x0001caf2) list_recal_day_event_pane_cp01_t1

0xeaf0,	// (0x0001c5d1) list_single_recal_day_pane_t1_ParamLimits

0x8909,	// (0x000163ea) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001d91e) list_single_recal_day_pane_t_ParamLimits

0x9c2c,	// (0x0001770d) bg_notes_pane_ParamLimits

0x9cd7,	// (0x000177b8) list_notes_pane_ParamLimits

0x1037,	// (0x0000eb18) scroll_pane_cp06_ParamLimits

0x9d17,	// (0x000177f8) main_notes_pane_ParamLimits

0x95b2,	// (0x00017093) main_welc_pane

0x93ed,	// (0x00016ece) main_welc_body_pane_ParamLimits

0x93ed,	// (0x00016ece) main_welc_body_pane

0x9409,	// (0x00016eea) main_welc_opti_pane_ParamLimits

0x9409,	// (0x00016eea) main_welc_opti_pane

0x9455,	// (0x00016f36) main_welc_pane_t1_ParamLimits

0x9455,	// (0x00016f36) main_welc_pane_t1

0x94bb,	// (0x00016f9c) main_welc_body_row_pane_ParamLimits

0x94bb,	// (0x00016f9c) main_welc_body_row_pane

0xd010,	// (0x0001aaf1) main_welc_opti_row_pane_ParamLimits

0xd010,	// (0x0001aaf1) main_welc_opti_row_pane

0xf01f,	// (0x0001cb00) main_welc_opti_row_pane_g1

0x94ce,	// (0x00016faf) main_welc_opti_row_pane_t1

0xf027,	// (0x0001cb08) main_welc_body_row_pane_t1

0xed29,	// (0x0001c80a) popup_notif_wgt_heading_pane

0xed43,	// (0x0001c824) aid_size_list_notif_wgt_del_ParamLimits

0xed50,	// (0x0001c831) list_notif_wgt_row_pane_g1_ParamLimits

0xed5c,	// (0x0001c83d) list_notif_wgt_row_pane_g2_ParamLimits

0xed70,	// (0x0001c851) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001d985) list_notif_wgt_row_pane_g_ParamLimits

0xed7d,	// (0x0001c85e) list_notif_wgt_row_pane_t1_ParamLimits

0xed93,	// (0x0001c874) list_notif_wgt_row_pane_t2_ParamLimits

0xeda5,	// (0x0001c886) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001d98c) list_notif_wgt_row_pane_t_ParamLimits

0x8e09,	// (0x000168ea) listrow_wgtman_pane_g1_ParamLimits

0x8e16,	// (0x000168f7) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001d9b5) listrow_wgtman_pane_g_ParamLimits

0x8e2e,	// (0x0001690f) listrow_wgtman_pane_t1_ParamLimits

0x8e46,	// (0x00016927) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001d9ba) listrow_wgtman_pane_t_ParamLimits

0x8e6c,	// (0x0001694d) wait_bar_pane_cp09_ParamLimits

0x955f,	// (0x00017040) bg_popup_heading_pane_cp02

0xf036,	// (0x0001cb17) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0001cb1f) popup_notif_wgt_heading_pane_t1

0xbf60,	// (0x00019a41) main_vids_pane

0x955f,	// (0x00017040) vids_listscroll_pane

0x94dd,	// (0x00016fbe) scroll_pane_cp040

0x955f,	// (0x00017040) vids_list_pane

0x94e8,	// (0x00016fc9) vids_list_double_pane_ParamLimits

0x94e8,	// (0x00016fc9) vids_list_double_pane

0x94f5,	// (0x00016fd6) vids_list_double_pane_g1

0x94fe,	// (0x00016fdf) vids_list_double_pane_t1

0x950e,	// (0x00016fef) vids_list_double_pane_t2

0x0001,

0xff66,	// (0x0001da47) vids_list_double_pane_t

0x95b2,	// (0x00017093) main_ncimui_pane_ParamLimits

0x75c4,	// (0x000150a5) main_ncimui_pane_g1_ParamLimits

0x75d0,	// (0x000150b1) main_ncimui_pane_g2_ParamLimits

0x75d0,	// (0x000150b1) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0001d6c7) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0001d6c7) main_ncimui_pane_g

0x9420,	// (0x00016f01) main_welc_pane_g1_ParamLimits

0x9420,	// (0x00016f01) main_welc_pane_g1

0x9433,	// (0x00016f14) main_welc_pane_g2_ParamLimits

0x9433,	// (0x00016f14) main_welc_pane_g2

0x0002,

0xff58,	// (0x0001da39) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001da39) main_welc_pane_g

0x9c2c,	// (0x0001770d) listscroll_mce_pane_ParamLimits

0x2f12,	// (0x000109f3) wait_bar_pane_cp10

0xbf46,	// (0x00019a27) main_cale_day_pane_ParamLimits

0xbf46,	// (0x00019a27) main_cale_week_pane_ParamLimits

0x9c2c,	// (0x0001770d) main_messa_pane_ParamLimits

0x50c2,	// (0x00012ba3) main_clock2_btn_pane_ParamLimits

0x50c2,	// (0x00012ba3) main_clock2_btn_pane

0xc891,	// (0x0001a372) main_clock2_btn_pane_cp01_ParamLimits

0xc891,	// (0x0001a372) main_clock2_btn_pane_cp01

0xe93a,	// (0x0001c41b) list_cale_mrui_pane_ParamLimits

0xedd9,	// (0x0001c8ba) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001d993) main_cf0_pane_g

0x900a,	// (0x00016aeb) area_left_week_number_pane_ParamLimits

0x9016,	// (0x00016af7) area_top_day_name_pane_ParamLimits

0x9027,	// (0x00016b08) frame_month_view_pane_ParamLimits

0xef0c,	// (0x0001c9ed) grid_month_view_pane_ParamLimits

0xef1a,	// (0x0001c9fb) frm_month_g1_ParamLimits

0x9094,	// (0x00016b75) frm_month_g2_ParamLimits

0x90a5,	// (0x00016b86) frm_month_g3_ParamLimits

0x90b6,	// (0x00016b97) frm_month_g4_ParamLimits

0x90c7,	// (0x00016ba8) frm_month_g5_ParamLimits

0x90d8,	// (0x00016bb9) frm_month_g6_ParamLimits

0x90e9,	// (0x00016bca) frm_month_g7_ParamLimits

0xef27,	// (0x0001ca08) frm_month_g8_ParamLimits

0x90fa,	// (0x00016bdb) frm_month_g9_ParamLimits

0x910a,	// (0x00016beb) frm_month_g10_ParamLimits

0x911a,	// (0x00016bfb) frm_month_g11_ParamLimits

0x912a,	// (0x00016c0b) frm_month_g12_ParamLimits

0x913a,	// (0x00016c1b) frm_month_g13_ParamLimits

0x914a,	// (0x00016c2b) frm_month_g14_ParamLimits

0x915a,	// (0x00016c3b) frm_month_g15_ParamLimits

0x916c,	// (0x00016c4d) frm_month_g16_ParamLimits

0xff03,	// (0x0001d9e4) frm_month_g_ParamLimits

0xef34,	// (0x0001ca15) cell_top_day_name_pane_t1_ParamLimits

0x917e,	// (0x00016c5f) cell_area_left_week_number_pane_g1_ParamLimits

0x918a,	// (0x00016c6b) cell_area_left_week_number_pane_t1_ParamLimits

0xc695,	// (0x0001a176) cell_month_view_pane_g1_ParamLimits

0x919d,	// (0x00016c7e) cell_month_view_pane_t1_ParamLimits

0x9c24,	// (0x00017705) main_clock2_btn_pane_g1

0xf04c,	// (0x0001cb2d) main_clock2_btn_pane_t1

0x95b2,	// (0x00017093) listscroll_cmail_pane_ParamLimits

0xe4cb,	// (0x0001bfac) main_sp_fs_email_pane_g1_ParamLimits

0xe4d7,	// (0x0001bfb8) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001d7c6) main_sp_fs_email_pane_g_ParamLimits

0xea64,	// (0x0001c545) list_recal_day_pane_ParamLimits

0xea75,	// (0x0001c556) mian_recal_day_pane_t1

0x80d5,	// (0x00015bb6) list_single_dyc_row_text_pane_t4_ParamLimits

0x80d5,	// (0x00015bb6) list_single_dyc_row_text_pane_t4

0x810c,	// (0x00015bed) list_single_dyc_row_text_pane_t5_ParamLimits

0x810c,	// (0x00015bed) list_single_dyc_row_text_pane_t5

0xe541,	// (0x0001c022) list_single_dyc_row_text_pane_t6_ParamLimits

0xe541,	// (0x0001c022) list_single_dyc_row_text_pane_t6

0x2a43,	// (0x00010524) aid_mgn_list_cale_time_pane

0x95b2,	// (0x00017093) main_gallery2_pane_ParamLimits

0xc8a5,	// (0x0001a386) main_clock2_pane_cp01_t1

0xc8b3,	// (0x0001a394) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0001d29d) main_clock2_pane_cp01_t

0x13b9,	// (0x0000ee9a) cale_week_scroll_pane_g16_ParamLimits

0x13b9,	// (0x0000ee9a) cale_week_scroll_pane_g16

0x9f86,	// (0x00017a67) vorec_slider_pane

0x93c4,	// (0x00016ea5) vidtel_button_pane_t1_ParamLimits

0x89ae,	// (0x0001648f) main_fs_bigclock_clock_pane_g1_ParamLimits

0x89c0,	// (0x000164a1) main_fs_bigclock_clock_pane_g2_ParamLimits

0x89d1,	// (0x000164b2) main_fs_bigclock_clock_pane_g3_ParamLimits

0x89d1,	// (0x000164b2) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0001d941) main_fs_bigclock_clock_pane_g_ParamLimits

0x89e4,	// (0x000164c5) main_fs_bigclock_clock_pane_t1_ParamLimits

0x89ff,	// (0x000164e0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0001d94a) main_fs_bigclock_clock_pane_t_ParamLimits

0x4948,	// (0x00012429) main_mup3_lyrics_pane_ParamLimits

0x4948,	// (0x00012429) main_mup3_lyrics_pane

0x9540,	// (0x00017021) main_mup3_lyrics_pane_t1_ParamLimits

0x9540,	// (0x00017021) main_mup3_lyrics_pane_t1

0xcd7c,	// (0x0001a85d) aid_main_mp4_pane_t1_area

0xcd7c,	// (0x0001a85d) aid_main_mp4_pane_t2_area

0xce24,	// (0x0001a905) main_mp4_pane_g7_ParamLimits

0xce24,	// (0x0001a905) main_mp4_pane_g7

0xce30,	// (0x0001a911) main_mp4_pane_g8_ParamLimits

0xce30,	// (0x0001a911) main_mp4_pane_g8

0x5b1b,	// (0x000135fc) aid_call6_pane_g1_size

0x931a,	// (0x00016dfb) list_double_large_graphic_phob2_other_pane_ParamLimits

0x931a,	// (0x00016dfb) list_double_large_graphic_phob2_other_pane

0xa874,	// (0x00018355) list_double_large_graphic_phob2_other_pane_g1

0x955f,	// (0x00017040) list_highlight_pane_cp026

0x95b2,	// (0x00017093) main_welc_pane_ParamLimits

0x7dc8,	// (0x000158a9) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7dc8,	// (0x000158a9) main_sp_fs_ctrlbar_pane_g3

0x7de0,	// (0x000158c1) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7de0,	// (0x000158c1) main_sp_fs_ctrlbar_pane_g4

0x7e22,	// (0x00015903) toolbar2_fixed_button_pane_cp01

0x7e2d,	// (0x0001590e) toolbar2_fixed_button_pane_cp02

0x7e38,	// (0x00015919) toolbar2_fixed_button_pane_cp03

0x93da,	// (0x00016ebb) list_welc_entry_pane_ParamLimits

0x93da,	// (0x00016ebb) list_welc_entry_pane

0x9446,	// (0x00016f27) main_welc_pane_g3_ParamLimits

0x9446,	// (0x00016f27) main_welc_pane_g3

0x946f,	// (0x00016f50) main_welc_pane_t2_ParamLimits

0x946f,	// (0x00016f50) main_welc_pane_t2

0x9485,	// (0x00016f66) main_welc_pane_t3_ParamLimits

0x9485,	// (0x00016f66) main_welc_pane_t3

0x0002,

0xff5f,	// (0x0001da40) main_welc_pane_t_ParamLimits

0xff5f,	// (0x0001da40) main_welc_pane_t

0x949a,	// (0x00016f7b) welc_button_pane_ParamLimits

0x949a,	// (0x00016f7b) welc_button_pane

0x94ab,	// (0x00016f8c) welc_service_logo_pane_ParamLimits

0x94ab,	// (0x00016f8c) welc_service_logo_pane

0xf05a,	// (0x0001cb3b) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0001cb3b) list_single_welc_entry_pane

0xf06b,	// (0x0001cb4c) list_single_welc_entry_pane_g1

0xf073,	// (0x0001cb54) list_single_welc_entry_pane_t1

0xf081,	// (0x0001cb62) list_single_welc_entry_pane_t2

0x0001,

0xff6b,	// (0x0001da4c) list_single_welc_entry_pane_t

0x955f,	// (0x00017040) bg_button_pane_cp035

0xf08f,	// (0x0001cb70) welc_button_pane_t1

0xf09d,	// (0x0001cb7e) welc_service_logo_pane_g1

0xf0a6,	// (0x0001cb87) welc_service_logo_pane_g2

0x0001,

0xff70,	// (0x0001da51) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
