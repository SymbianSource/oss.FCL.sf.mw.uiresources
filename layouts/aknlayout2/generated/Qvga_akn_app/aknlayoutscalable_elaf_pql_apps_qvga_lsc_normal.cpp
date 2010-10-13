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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0000b5f8 };

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
0x216e,	// (0x0000d766) Screen

0x2178,	// (0x0000d770) application_window

0x21ae,	// (0x0000d7a6) area_bottom_pane_ParamLimits

0x21ae,	// (0x0000d7a6) area_bottom_pane

0x21e1,	// (0x0000d7d9) area_top_pane_ParamLimits

0x21e1,	// (0x0000d7d9) area_top_pane

0x9bd6,	// (0x000151ce) call_video_uplink_pane_ParamLimits

0x9bd6,	// (0x000151ce) call_video_uplink_pane

0x2261,	// (0x0000d859) main_pane_ParamLimits

0x2261,	// (0x0000d859) main_pane

0xc6d3,	// (0x00017ccb) context_pane

0x4e0b,	// (0x00010403) navi_pane

0x4e34,	// (0x0001042c) popup_cale_events_window_ParamLimits

0x4e34,	// (0x0001042c) popup_cale_events_window

0xc6e6,	// (0x00017cde) popup_mup_playback_window

0x4e4c,	// (0x00010444) signal_pane

0xa37e,	// (0x00015976) main_browser_pane

0xa5e3,	// (0x00015bdb) main_burst_pane

0x9bf2,	// (0x000151ea) main_calc_pane

0xc66d,	// (0x00017c65) main_cale_day_pane

0x26f8,	// (0x0000dcf0) main_cale_month_pane

0xc66d,	// (0x00017c65) main_cale_week_pane

0xa5e3,	// (0x00015bdb) main_call_pane

0xa011,	// (0x00015609) main_call_poc_pane

0xa5e3,	// (0x00015bdb) main_camera_pane

0xa5e3,	// (0x00015bdb) main_chi_dic_pane

0xaeb6,	// (0x000164ae) main_clock_pane

0xa011,	// (0x00015609) main_fmradio_pane

0xa5e3,	// (0x00015bdb) main_graph_messa_pane

0xa011,	// (0x00015609) main_help_pane

0xa37e,	// (0x00015976) main_im_pane

0xa26c,	// (0x00015864) main_image_pane_ParamLimits

0xa26c,	// (0x00015864) main_image_pane

0xa011,	// (0x00015609) main_location2_pane

0xa5e3,	// (0x00015bdb) main_location_pane

0xa26c,	// (0x00015864) main_messa_pane

0xa011,	// (0x00015609) main_mp2_pane

0xa5e3,	// (0x00015bdb) main_mp_pane

0xa011,	// (0x00015609) main_msg_pane

0xa011,	// (0x00015609) main_mup_eq_pane

0xa011,	// (0x00015609) main_mup_pane

0xa37e,	// (0x00015976) main_notes_pane

0xa011,	// (0x00015609) main_pec_pane

0xa011,	// (0x00015609) main_phob_pane

0xa011,	// (0x00015609) main_pinb_pane

0xa011,	// (0x00015609) main_postcard_pane

0xa011,	// (0x00015609) main_qdial_pane

0xa5e3,	// (0x00015bdb) main_skin_pane

0xa011,	// (0x00015609) main_smil2_pane

0xa5e3,	// (0x00015bdb) main_smil_pane

0xa5e3,	// (0x00015bdb) main_video_pane

0xa5e3,	// (0x00015bdb) main_video_tele_pane

0xa26c,	// (0x00015864) main_viewer_pane_ParamLimits

0xa26c,	// (0x00015864) main_viewer_pane

0xa5e3,	// (0x00015bdb) main_vorec_pane

0x4bff,	// (0x000101f7) popup_blid_sat_info_window_ParamLimits

0x4bff,	// (0x000101f7) popup_blid_sat_info_window

0x4c55,	// (0x0001024d) popup_dyc_status_message_window_ParamLimits

0x4c55,	// (0x0001024d) popup_dyc_status_message_window

0x4c6b,	// (0x00010263) popup_grid_large_graphic_window_ParamLimits

0x4c6b,	// (0x00010263) popup_grid_large_graphic_window

0x4d01,	// (0x000102f9) popup_loc_request_window_ParamLimits

0x4d01,	// (0x000102f9) popup_loc_request_window

0x4de5,	// (0x000103dd) popup_wml_address_window_ParamLimits

0x4de5,	// (0x000103dd) popup_wml_address_window

0x4a37,	// (0x0001002f) call_muted_g1

0x4a47,	// (0x0001003f) popup_call_audio_conf_window_ParamLimits

0x4a47,	// (0x0001003f) popup_call_audio_conf_window

0x4a65,	// (0x0001005d) popup_call_audio_first_window_ParamLimits

0x4a65,	// (0x0001005d) popup_call_audio_first_window

0x4ac3,	// (0x000100bb) popup_call_audio_in_window_ParamLimits

0x4ac3,	// (0x000100bb) popup_call_audio_in_window

0x4aef,	// (0x000100e7) popup_call_audio_out_window_ParamLimits

0x4aef,	// (0x000100e7) popup_call_audio_out_window

0x4b1d,	// (0x00010115) popup_call_audio_second_window_ParamLimits

0x4b1d,	// (0x00010115) popup_call_audio_second_window

0x4b63,	// (0x0001015b) popup_call_audio_wait_window_ParamLimits

0x4b63,	// (0x0001015b) popup_call_audio_wait_window

0x4b96,	// (0x0001018e) popup_number_entry_window_ParamLimits

0x4b96,	// (0x0001018e) popup_number_entry_window

0x9c00,	// (0x000151f8) bg_popup_call_pane_cp05_ParamLimits

0x9c00,	// (0x000151f8) bg_popup_call_pane_cp05

0x9c20,	// (0x00015218) popup_number_entry_window_t1

0x9c33,	// (0x0001522b) popup_number_entry_window_t2

0x9c45,	// (0x0001523d) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0001a67d) popup_number_entry_window_t

0x9c57,	// (0x0001524f) text_title_cp2

0x9c6a,	// (0x00015262) bg_popup_call_pane_cp_ParamLimits

0x9c6a,	// (0x00015262) bg_popup_call_pane_cp

0x9c78,	// (0x00015270) call_thumbnail_pane

0x9c80,	// (0x00015278) popup_call_audio_in_window_g1_ParamLimits

0x9c80,	// (0x00015278) popup_call_audio_in_window_g1

0x9c8c,	// (0x00015284) popup_call_audio_in_window_g2_ParamLimits

0x9c8c,	// (0x00015284) popup_call_audio_in_window_g2

0x9c98,	// (0x00015290) popup_call_audio_in_window_g3_ParamLimits

0x9c98,	// (0x00015290) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0001a686) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0001a686) popup_call_audio_in_window_g

0x9ca4,	// (0x0001529c) popup_call_audio_in_window_t1_ParamLimits

0x9ca4,	// (0x0001529c) popup_call_audio_in_window_t1

0x9cbf,	// (0x000152b7) popup_call_audio_in_window_t2_ParamLimits

0x9cbf,	// (0x000152b7) popup_call_audio_in_window_t2

0x9cda,	// (0x000152d2) popup_call_audio_in_window_t3_ParamLimits

0x9cda,	// (0x000152d2) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0001a68d) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0001a68d) popup_call_audio_in_window_t

0x9c6a,	// (0x00015262) bg_popup_call_pane_cp01_ParamLimits

0x9c6a,	// (0x00015262) bg_popup_call_pane_cp01

0x9c78,	// (0x00015270) call_thumbnail_pane_cp02

0x9ced,	// (0x000152e5) call_type_pane_cp022

0x9cf5,	// (0x000152ed) popup_call_audio_out_window_g1_ParamLimits

0x9cf5,	// (0x000152ed) popup_call_audio_out_window_g1

0x9d07,	// (0x000152ff) popup_call_audio_out_window_g2_ParamLimits

0x9d07,	// (0x000152ff) popup_call_audio_out_window_g2

0x9d13,	// (0x0001530b) popup_call_audio_out_window_g3_ParamLimits

0x9d13,	// (0x0001530b) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0001a694) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0001a694) popup_call_audio_out_window_g

0x9d25,	// (0x0001531d) popup_call_audio_out_window_t1_ParamLimits

0x9d25,	// (0x0001531d) popup_call_audio_out_window_t1

0x9d3d,	// (0x00015335) popup_call_audio_out_window_t2_ParamLimits

0x9d3d,	// (0x00015335) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0001a69b) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0001a69b) popup_call_audio_out_window_t

0x9d52,	// (0x0001534a) bg_popup_call_pane_ParamLimits

0x9d52,	// (0x0001534a) bg_popup_call_pane

0x23ea,	// (0x0000d9e2) call_thumbnail_pane_cp_ParamLimits

0x23ea,	// (0x0000d9e2) call_thumbnail_pane_cp

0x9dd6,	// (0x000153ce) call_type_pane_cp01_ParamLimits

0x9dd6,	// (0x000153ce) call_type_pane_cp01

0x9e1a,	// (0x00015412) popup_call_audio_first_window_g1_ParamLimits

0x9e1a,	// (0x00015412) popup_call_audio_first_window_g1

0x9e66,	// (0x0001545e) popup_call_audio_first_window_g2_ParamLimits

0x9e66,	// (0x0001545e) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0001a6a0) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0001a6a0) popup_call_audio_first_window_g

0x9eaa,	// (0x000154a2) popup_call_audio_first_window_t1_ParamLimits

0x9eaa,	// (0x000154a2) popup_call_audio_first_window_t1

0x9f56,	// (0x0001554e) popup_call_audio_first_window_t4_ParamLimits

0x9f56,	// (0x0001554e) popup_call_audio_first_window_t4

0x9fe2,	// (0x000155da) popup_call_audio_first_window_t5_ParamLimits

0x9fe2,	// (0x000155da) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0001a6a5) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0001a6a5) popup_call_audio_first_window_t

0xa011,	// (0x00015609) bg_popup_call_pane_cp02

0xa01b,	// (0x00015613) call_type_pane_cp023

0xa023,	// (0x0001561b) popup_call_audio_wait_window_g1

0xa02b,	// (0x00015623) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0001a6ac) popup_call_audio_wait_window_g

0xa033,	// (0x0001562b) popup_call_audio_wait_window_t3

0xa041,	// (0x00015639) bg_popup_call_pane_cp03_ParamLimits

0xa041,	// (0x00015639) bg_popup_call_pane_cp03

0xa0a1,	// (0x00015699) call_thumbnail_pane_cp011_ParamLimits

0xa0a1,	// (0x00015699) call_thumbnail_pane_cp011

0xa0ad,	// (0x000156a5) call_type_pane_cp034_ParamLimits

0xa0ad,	// (0x000156a5) call_type_pane_cp034

0xa0e9,	// (0x000156e1) popup_call_audio_second_window_g1_ParamLimits

0xa0e9,	// (0x000156e1) popup_call_audio_second_window_g1

0xa125,	// (0x0001571d) popup_call_audio_second_window_g2_ParamLimits

0xa125,	// (0x0001571d) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0001a6b1) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0001a6b1) popup_call_audio_second_window_g

0xa161,	// (0x00015759) popup_call_audio_second_window_t1_ParamLimits

0xa161,	// (0x00015759) popup_call_audio_second_window_t1

0xa1e2,	// (0x000157da) popup_call_audio_second_window_t2_ParamLimits

0xa1e2,	// (0x000157da) popup_call_audio_second_window_t2

0xa218,	// (0x00015810) popup_call_audio_second_window_t3_ParamLimits

0xa218,	// (0x00015810) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0001a6b6) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0001a6b6) popup_call_audio_second_window_t

0xa011,	// (0x00015609) bg_popup_call_pane_cp04

0xa24e,	// (0x00015846) list_conf_pane

0xa256,	// (0x0001584e) popup_call_audio_conf_window_t1

0xa264,	// (0x0001585c) call_thumbnail_pane_g1

0xa26c,	// (0x00015864) bg_pinb_pane_ParamLimits

0xa26c,	// (0x00015864) bg_pinb_pane

0xa27a,	// (0x00015872) find_pinb_pane

0xa26c,	// (0x00015864) listscroll_pinb_pane_ParamLimits

0xa26c,	// (0x00015864) listscroll_pinb_pane

0xa284,	// (0x0001587c) pinb_bg_pane_g1

0xa284,	// (0x0001587c) pinb_bg_pane_g2

0xa284,	// (0x0001587c) pinb_bg_pane_g3

0xa284,	// (0x0001587c) pinb_bg_pane_g4

0xa284,	// (0x0001587c) pinb_bg_pane_g5

0xa284,	// (0x0001587c) pinb_bg_pane_g6

0xa284,	// (0x0001587c) pinb_bg_pane_g7

0xa284,	// (0x0001587c) pinb_bg_pane_g8

0xa284,	// (0x0001587c) pinb_bg_pane_g9

0xa284,	// (0x0001587c) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0001a6bd) pinb_bg_pane_g

0x2419,	// (0x0000da11) grid_pinb_pane

0x9b9f,	// (0x00015197) list_pinb_pane

0xa28e,	// (0x00015886) scroll_pane_cp01_ParamLimits

0xa28e,	// (0x00015886) scroll_pane_cp01

0xa29b,	// (0x00015893) find_pinb_pane_g1_ParamLimits

0xa29b,	// (0x00015893) find_pinb_pane_g1

0xa2b3,	// (0x000158ab) find_pinb_pane_t1

0xa2c5,	// (0x000158bd) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0001a6d7) find_pinb_pane_t

0xa2da,	// (0x000158d2) input_focus_pane_cp01_ParamLimits

0xa2da,	// (0x000158d2) input_focus_pane_cp01

0x2423,	// (0x0000da1b) cell_pinb_pane_ParamLimits

0x2423,	// (0x0000da1b) cell_pinb_pane

0xa2e6,	// (0x000158de) cell_pinb_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) cell_pinb_pane_g1

0xa2f4,	// (0x000158ec) cell_pinb_pane_g2_ParamLimits

0xa2f4,	// (0x000158ec) cell_pinb_pane_g2

0xa2f4,	// (0x000158ec) cell_pinb_pane_g3_ParamLimits

0xa2f4,	// (0x000158ec) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0001a6dc) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0001a6dc) cell_pinb_pane_g

0xa011,	// (0x00015609) grid_highlight_pane_cp01

0x9b9f,	// (0x00015197) list_pinb_item_pane_ParamLimits

0x9b9f,	// (0x00015197) list_pinb_item_pane

0x9b9f,	// (0x00015197) list_highlight_pane_cp02

0xa302,	// (0x000158fa) list_pinb_item_pane_g1_ParamLimits

0xa302,	// (0x000158fa) list_pinb_item_pane_g1

0xa2f4,	// (0x000158ec) list_pinb_item_pane_g2_ParamLimits

0xa2f4,	// (0x000158ec) list_pinb_item_pane_g2

0xa2e6,	// (0x000158de) list_pinb_item_pane_g3_ParamLimits

0xa2e6,	// (0x000158de) list_pinb_item_pane_g3

0xa2f4,	// (0x000158ec) list_pinb_item_pane_g4_ParamLimits

0xa2f4,	// (0x000158ec) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0001a6e3) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0001a6e3) list_pinb_item_pane_g

0xa310,	// (0x00015908) list_pinb_item_pane_t1_ParamLimits

0xa310,	// (0x00015908) list_pinb_item_pane_t1

0x2449,	// (0x0000da41) calc_display_pane

0x2465,	// (0x0000da5d) calc_paper_pane

0x2486,	// (0x0000da7e) grid_calc_pane

0xa011,	// (0x00015609) bg_list_pane_cp01

0x24a2,	// (0x0000da9a) clock_g1

0x24aa,	// (0x0000daa2) clock_g2

0x0001,

0xf0f4,	// (0x0001a6ec) clock_g

0x24b2,	// (0x0000daaa) clock_t1_ParamLimits

0x24b2,	// (0x0000daaa) clock_t1

0x24c7,	// (0x0000dabf) clock_t2_ParamLimits

0x24c7,	// (0x0000dabf) clock_t2

0x24d9,	// (0x0000dad1) clock_t3_ParamLimits

0x24d9,	// (0x0000dad1) clock_t3

0x24eb,	// (0x0000dae3) clock_t4_ParamLimits

0x24eb,	// (0x0000dae3) clock_t4

0x24fd,	// (0x0000daf5) clock_t5_ParamLimits

0x24fd,	// (0x0000daf5) clock_t5

0x2512,	// (0x0000db0a) clock_t6_ParamLimits

0x2512,	// (0x0000db0a) clock_t6

0x2524,	// (0x0000db1c) clock_t7_ParamLimits

0x2524,	// (0x0000db1c) clock_t7

0x2536,	// (0x0000db2e) clock_t8_ParamLimits

0x2536,	// (0x0000db2e) clock_t8

0x2548,	// (0x0000db40) clock_t9_ParamLimits

0x2548,	// (0x0000db40) clock_t9

0x0008,

0xf0f9,	// (0x0001a6f1) clock_t_ParamLimits

0xf0f9,	// (0x0001a6f1) clock_t

0xa32c,	// (0x00015924) popup_clock_analogue_window_cp02

0xa32c,	// (0x00015924) popup_clock_digital_window_cp01

0xa011,	// (0x00015609) listscroll_help_pane

0xa011,	// (0x00015609) phob_pre_status_pane

0xa334,	// (0x0001592c) grid_qdial_pane

0xa26c,	// (0x00015864) listscroll_mce_pane

0xa26c,	// (0x00015864) bg_notes_pane

0xa33e,	// (0x00015936) list_notes_pane

0x255a,	// (0x0000db52) scroll_pane_cp06

0xa34c,	// (0x00015944) bg_calc_paper_pane

0xa364,	// (0x0001595c) list_calc_pane

0xa37e,	// (0x00015976) bg_calc_display_pane

0xa38a,	// (0x00015982) calc_display_pane_t1

0xa39f,	// (0x00015997) calc_display_pane_t2

0xa3b4,	// (0x000159ac) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0001a704) calc_display_pane_t

0x256c,	// (0x0000db64) cell_calc_pane_ParamLimits

0x256c,	// (0x0000db64) cell_calc_pane

0xa3c6,	// (0x000159be) bg_calc_paper_pane_g1

0xa3d2,	// (0x000159ca) bg_calc_paper_pane_g2

0xa3de,	// (0x000159d6) bg_calc_paper_pane_g3

0xa3ea,	// (0x000159e2) bg_calc_paper_pane_g4

0xa3f6,	// (0x000159ee) bg_calc_paper_pane_g5

0x259f,	// (0x0000db97) bg_calc_paper_pane_g6

0x25ae,	// (0x0000dba6) bg_calc_paper_pane_g7

0x25bd,	// (0x0000dbb5) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0001a70b) bg_calc_paper_pane_g

0x25cc,	// (0x0000dbc4) calc_bg_paper_pane_g9

0x25db,	// (0x0000dbd3) list_calc_item_pane_ParamLimits

0x25db,	// (0x0000dbd3) list_calc_item_pane

0xa402,	// (0x000159fa) list_calc_item_pane_g1

0xa40f,	// (0x00015a07) list_calc_item_pane_t1_ParamLimits

0xa40f,	// (0x00015a07) list_calc_item_pane_t1

0x25ef,	// (0x0000dbe7) list_calc_item_pane_t2_ParamLimits

0x25ef,	// (0x0000dbe7) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0001a71c) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0001a71c) list_calc_item_pane_t

0xa284,	// (0x0001587c) cell_calc_pane_g1

0xa421,	// (0x00015a19) grid_highlight_pane_cp02

0xa443,	// (0x00015a3b) bg_calc_display_pane_g1

0xa44c,	// (0x00015a44) bg_calc_display_pane_g2

0xa456,	// (0x00015a4e) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0001a726) bg_calc_display_pane_g

0x261d,	// (0x0000dc15) cell_qdial_pane_ParamLimits

0x261d,	// (0x0000dc15) cell_qdial_pane

0x262f,	// (0x0000dc27) cell_qdial_pane_g1_ParamLimits

0x262f,	// (0x0000dc27) cell_qdial_pane_g1

0x2645,	// (0x0000dc3d) cell_qdial_pane_g2_ParamLimits

0x2645,	// (0x0000dc3d) cell_qdial_pane_g2

0xa45f,	// (0x00015a57) cell_qdial_pane_g3_ParamLimits

0xa45f,	// (0x00015a57) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0001a72d) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0001a72d) cell_qdial_pane_g

0x266c,	// (0x0000dc64) cell_qdial_pane_t1_ParamLimits

0x266c,	// (0x0000dc64) cell_qdial_pane_t1

0x2684,	// (0x0000dc7c) cell_qdial_pane_t2_ParamLimits

0x2684,	// (0x0000dc7c) cell_qdial_pane_t2

0x2697,	// (0x0000dc8f) cell_qdial_pane_t3_ParamLimits

0x2697,	// (0x0000dc8f) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0001a736) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0001a736) cell_qdial_pane_t

0xa011,	// (0x00015609) grid_highlight_pane_cp04

0xa46b,	// (0x00015a63) thumbnail_qdial_pane_ParamLimits

0xa46b,	// (0x00015a63) thumbnail_qdial_pane

0xa4c7,	// (0x00015abf) list_help_pane

0xa4d1,	// (0x00015ac9) scroll_pane_cp02

0x26aa,	// (0x0000dca2) help_list_pane_t1_ParamLimits

0x26aa,	// (0x0000dca2) help_list_pane_t1

0xa4da,	// (0x00015ad2) bg_notes_pane_g2

0xa4e2,	// (0x00015ada) bg_notes_pane_g3

0xa4ea,	// (0x00015ae2) notes_bg_pane_g1

0xa4f2,	// (0x00015aea) notes_bg_pane_g4

0xa4fa,	// (0x00015af2) notes_bg_pane_g5

0xa502,	// (0x00015afa) notes_bg_pane_g6

0xa50a,	// (0x00015b02) notes_bg_pane_g7

0xa512,	// (0x00015b0a) notes_bg_pane_g8

0xa51a,	// (0x00015b12) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0001a754) notes_bg_pane_g

0x26c7,	// (0x0000dcbf) list_notes_text_pane_ParamLimits

0x26c7,	// (0x0000dcbf) list_notes_text_pane

0xa522,	// (0x00015b1a) list_notes_text_pane_g1

0x26ea,	// (0x0000dce2) list_notes_text_pane_t1

0x26f8,	// (0x0000dcf0) listscroll_cale_week_pane

0x2722,	// (0x0000dd1a) bg_cale_heading_pane

0xa545,	// (0x00015b3d) bg_cale_pane_cp01

0x273a,	// (0x0000dd32) cale_week_corner_pane

0x2759,	// (0x0000dd51) cale_week_day_heading_pane

0x2776,	// (0x0000dd6e) cale_week_scroll_pane_g1

0x2789,	// (0x0000dd81) cale_week_scroll_pane_g2

0x27a1,	// (0x0000dd99) cale_week_scroll_pane_g3

0x27b9,	// (0x0000ddb1) cale_week_scroll_pane_g4

0x27d1,	// (0x0000ddc9) cale_week_scroll_pane_g5

0x27e9,	// (0x0000dde1) cale_week_scroll_pane_g6

0x2801,	// (0x0000ddf9) cale_week_scroll_pane_g7

0x2819,	// (0x0000de11) cale_week_scroll_pane_g8

0x2835,	// (0x0000de2d) cale_week_scroll_pane_g9

0x284d,	// (0x0000de45) cale_week_scroll_pane_g10

0x2865,	// (0x0000de5d) cale_week_scroll_pane_g11

0x287d,	// (0x0000de75) cale_week_scroll_pane_g12

0x2895,	// (0x0000de8d) cale_week_scroll_pane_g13

0x28ad,	// (0x0000dea5) cale_week_scroll_pane_g14

0x28c5,	// (0x0000debd) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0001a763) cale_week_scroll_pane_g

0x28f9,	// (0x0000def1) cale_week_time_pane

0x2915,	// (0x0000df0d) grid_cale_week_pane

0xa574,	// (0x00015b6c) scroll_pane_cp08

0x2933,	// (0x0000df2b) cell_cale_week_pane_ParamLimits

0x2933,	// (0x0000df2b) cell_cale_week_pane

0x29a9,	// (0x0000dfa1) cale_week_day_heading_pane_t1

0x29d3,	// (0x0000dfcb) cale_week_day_heading_pane_t2

0x2a02,	// (0x0000dffa) cale_week_day_heading_pane_t3

0x2a31,	// (0x0000e029) cale_week_day_heading_pane_t4

0x2a60,	// (0x0000e058) cale_week_day_heading_pane_t5

0x2a8f,	// (0x0000e087) cale_week_day_heading_pane_t6

0x2abe,	// (0x0000e0b6) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0001a784) cale_week_day_heading_pane_t

0xa591,	// (0x00015b89) bg_cale_side_pane

0x2ae8,	// (0x0000e0e0) cale_week_time_pane_t1

0x2b22,	// (0x0000e11a) cale_week_time_pane_t2

0x2b5c,	// (0x0000e154) cale_week_time_pane_t3

0x2b96,	// (0x0000e18e) cale_week_time_pane_t4

0x2bd0,	// (0x0000e1c8) cale_week_time_pane_t5

0x2c0a,	// (0x0000e202) cale_week_time_pane_t6

0x2c44,	// (0x0000e23c) cale_week_time_pane_t7

0x2c7e,	// (0x0000e276) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0001a793) cale_week_time_pane_t

0x2cb8,	// (0x0000e2b0) cell_cale_week_pane_g2

0x2cd7,	// (0x0000e2cf) cell_cale_week_pane_g3_ParamLimits

0x2cd7,	// (0x0000e2cf) cell_cale_week_pane_g3

0xa59f,	// (0x00015b97) grid_highlight_pane_cp07

0xa5a7,	// (0x00015b9f) listscroll_gms_pane

0xa5b1,	// (0x00015ba9) grid_gms_pane

0xa5ba,	// (0x00015bb2) listscroll_gms_pane_g1

0xa5c2,	// (0x00015bba) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0001a7a4) listscroll_gms_pane_g

0x2cef,	// (0x0000e2e7) scroll_pane_cp010

0x2cfa,	// (0x0000e2f2) cell_gms_pane_ParamLimits

0x2cfa,	// (0x0000e2f2) cell_gms_pane

0x2d0a,	// (0x0000e302) cell_gms_pane_g1

0xa5ca,	// (0x00015bc2) cell_gms_pane_g2

0xa522,	// (0x00015b1a) cell_gms_pane_g3

0xa5d2,	// (0x00015bca) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0001a7a9) cell_gms_pane_g

0xa5db,	// (0x00015bd3) grid_highlight_pane_cp09

0x49e5,	// (0x0000ffdd) phob_pre_status_pane_g1

0x49ed,	// (0x0000ffe5) phob_pre_status_pane_g2

0x49f5,	// (0x0000ffed) phob_pre_status_pane_g3

0x49fd,	// (0x0000fff5) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x0001ab97) phob_pre_status_pane_g

0x4a0d,	// (0x00010005) phob_pre_status_pane_t1

0x4a1b,	// (0x00010013) phob_pre_status_pane_t2

0x4a29,	// (0x00010021) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x0001aba2) phob_pre_status_pane_t

0xa5e3,	// (0x00015bdb) bg_list_pane_cp05

0x2d1a,	// (0x0000e312) grid_vorec_pane

0xa5eb,	// (0x00015be3) vorec_t1

0xa5f9,	// (0x00015bf1) vorec_t2

0xa607,	// (0x00015bff) vorec_t3

0x2d22,	// (0x0000e31a) vorec_t4

0x99b4,	// (0x00014fac) vorec_t5

0x99c2,	// (0x00014fba) vorec_t6

0x0004,

0xf1ba,	// (0x0001a7b2) vorec_t

0x99d0,	// (0x00014fc8) wait_bar_pane_cp01

0x2d30,	// (0x0000e328) cell_vorec_pane_ParamLimits

0x2d30,	// (0x0000e328) cell_vorec_pane

0xa623,	// (0x00015c1b) cell_vorec_pane_g1

0xa011,	// (0x00015609) grid_highlight_pane_cp05

0x9bf2,	// (0x000151ea) cams_zoom_pane

0x2d43,	// (0x0000e33b) image_vga_pane

0xa2e6,	// (0x000158de) main_camera_pane_g1

0xa2e6,	// (0x000158de) main_camera_pane_g2

0xa2e6,	// (0x000158de) main_camera_pane_g3

0xa2e6,	// (0x000158de) main_camera_pane_g4

0xa2e6,	// (0x000158de) main_camera_pane_g5

0xa2e6,	// (0x000158de) main_camera_pane_g6

0xa2e6,	// (0x000158de) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0001a7bd) main_camera_pane_g

0xa62d,	// (0x00015c25) main_camera_pane_t1

0xa62d,	// (0x00015c25) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0001a7ce) main_camera_pane_t

0x2d72,	// (0x0000e36a) cams_zoom_pane_cp_ParamLimits

0x2d72,	// (0x0000e36a) cams_zoom_pane_cp

0x2d9a,	// (0x0000e392) image_cif_pane_ParamLimits

0x2d9a,	// (0x0000e392) image_cif_pane

0x2dcb,	// (0x0000e3c3) image_subqcif_pane

0x2dd3,	// (0x0000e3cb) main_video_pane_g1_ParamLimits

0x2dd3,	// (0x0000e3cb) main_video_pane_g1

0x2df7,	// (0x0000e3ef) main_video_pane_g2_ParamLimits

0x2df7,	// (0x0000e3ef) main_video_pane_g2

0x2e2b,	// (0x0000e423) main_video_pane_g3_ParamLimits

0x2e2b,	// (0x0000e423) main_video_pane_g3

0x2e59,	// (0x0000e451) main_video_pane_g4_ParamLimits

0x2e59,	// (0x0000e451) main_video_pane_g4

0x2e87,	// (0x0000e47f) main_video_pane_g5_ParamLimits

0x2e87,	// (0x0000e47f) main_video_pane_g5

0xa641,	// (0x00015c39) main_video_pane_g6_ParamLimits

0xa641,	// (0x00015c39) main_video_pane_g6

0x0006,

0xf1db,	// (0x0001a7d3) main_video_pane_g_ParamLimits

0xf1db,	// (0x0001a7d3) main_video_pane_g

0x2eae,	// (0x0000e4a6) main_video_pane_t1_ParamLimits

0x2eae,	// (0x0000e4a6) main_video_pane_t1

0xa65b,	// (0x00015c53) cams_zoom_pane_g1

0xa65b,	// (0x00015c53) cams_zoom_pane_g2

0xa65b,	// (0x00015c53) cams_zoom_pane_g3

0xa65b,	// (0x00015c53) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0001a7e2) cams_zoom_pane_g

0x2f0b,	// (0x0000e503) grid_cams_pane

0x2f20,	// (0x0000e518) linegrid_cams_pane

0x2f31,	// (0x0000e529) cell_cams_pane_ParamLimits

0x2f31,	// (0x0000e529) cell_cams_pane

0xa665,	// (0x00015c5d) cams_burst_image_pane

0xa66d,	// (0x00015c65) cell_cams_pane_g1

0xa011,	// (0x00015609) grid_highlight_pane_cp03

0xa284,	// (0x0001587c) mp_bg_pane_g1

0xa011,	// (0x00015609) bg_list_pane_cp03

0xc592,	// (0x00017b8a) bg_mp_pane

0xc59a,	// (0x00017b92) grid_mp_pane

0xc5a2,	// (0x00017b9a) media_player_g1

0xc5aa,	// (0x00017ba2) media_player_t1

0xc5b8,	// (0x00017bb0) media_player_t2

0xc5c6,	// (0x00017bbe) media_player_t3

0xc5d4,	// (0x00017bcc) media_player_t4

0xc5e2,	// (0x00017bda) media_player_t5

0xc5f0,	// (0x00017be8) media_player_t6

0xc5fe,	// (0x00017bf6) media_player_t7

0x0006,

0xf589,	// (0x0001ab81) media_player_t

0xc60c,	// (0x00017c04) wait_bar_pane_cp02

0xf56e,	// (0x0001ab66) main_usb_pane_t

0x49dc,	// (0x0000ffd4) cell_mp_pane

0xa284,	// (0x0001587c) cell_mp_pane_g1

0xa011,	// (0x00015609) grid_highlight_pane_cp06

0xa6b3,	// (0x00015cab) grid_skin_colour_pane

0xa6bb,	// (0x00015cb3) list_highlight_pane_cp03

0x2f4f,	// (0x0000e547) skin_g1

0xa6c3,	// (0x00015cbb) skin_t1

0xa6d2,	// (0x00015cca) skin_t2

0x0001,

0xf218,	// (0x0001a810) skin_t

0x2f57,	// (0x0000e54f) cell_skin_colour_pane_ParamLimits

0x2f57,	// (0x0000e54f) cell_skin_colour_pane

0xa6e0,	// (0x00015cd8) cell_skin_colour_pane_g1

0x2fc0,	// (0x0000e5b8) call_video_g1_ParamLimits

0x2fc0,	// (0x0000e5b8) call_video_g1

0x2fd6,	// (0x0000e5ce) call_video_g2_ParamLimits

0x2fd6,	// (0x0000e5ce) call_video_g2

0x0001,

0xf21d,	// (0x0001a815) call_video_g_ParamLimits

0xf21d,	// (0x0001a815) call_video_g

0x301e,	// (0x0000e616) call_video_uplink_pane_cp1_ParamLimits

0x301e,	// (0x0000e616) call_video_uplink_pane_cp1

0xa6f2,	// (0x00015cea) call_video_uplink_pane_cp2

0x30b3,	// (0x0000e6ab) video_down_crop_pane_ParamLimits

0x30b3,	// (0x0000e6ab) video_down_crop_pane

0x3176,	// (0x0000e76e) video_down_pane_ParamLimits

0x3176,	// (0x0000e76e) video_down_pane

0xa6fa,	// (0x00015cf2) video_down_subqcif_pane_ParamLimits

0xa6fa,	// (0x00015cf2) video_down_subqcif_pane

0xa712,	// (0x00015d0a) video_down_subqcif_pane_cp_ParamLimits

0xa712,	// (0x00015d0a) video_down_subqcif_pane_cp

0xa736,	// (0x00015d2e) im_reading_pane_ParamLimits

0xa736,	// (0x00015d2e) im_reading_pane

0x3233,	// (0x0000e82b) im_writing_pane_ParamLimits

0x3233,	// (0x0000e82b) im_writing_pane

0x3249,	// (0x0000e841) im_reading_pane_t1

0xa750,	// (0x00015d48) list_im_pane

0xa761,	// (0x00015d59) scroll_pane_cp07

0x327f,	// (0x0000e877) im_writing_pane_t1_ParamLimits

0x327f,	// (0x0000e877) im_writing_pane_t1

0xa77a,	// (0x00015d72) im_writing_pane_t2_ParamLimits

0xa77a,	// (0x00015d72) im_writing_pane_t2

0x0001,

0xf227,	// (0x0001a81f) im_writing_pane_t_ParamLimits

0xf227,	// (0x0001a81f) im_writing_pane_t

0xa011,	// (0x00015609) input_focus_pane_cp04

0xa011,	// (0x00015609) input_focus_pane_cp05

0x3294,	// (0x0000e88c) list_im_single_pane_ParamLimits

0x3294,	// (0x0000e88c) list_im_single_pane

0xa797,	// (0x00015d8f) list_single_im_pane_t1

0x49a2,	// (0x0000ff9a) blid_accuracy_pane

0x49aa,	// (0x0000ffa2) blid_compass_pane

0x49b2,	// (0x0000ffaa) main_location_t1

0x49c0,	// (0x0000ffb8) main_location_t2

0x49ce,	// (0x0000ffc6) main_location_t3

0x0002,

0xf598,	// (0x0001ab90) main_location_t

0xa011,	// (0x00015609) aid_levels_location

0xa284,	// (0x0001587c) blid_accuracy_pane_g1

0xa284,	// (0x0001587c) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0001a873) blid_accuracy_pane_g

0xa7d1,	// (0x00015dc9) wml_content_pane

0xa80f,	// (0x00015e07) wml_button_pane_ParamLimits

0xa80f,	// (0x00015e07) wml_button_pane

0x32aa,	// (0x0000e8a2) wml_list_single_large_pane_ParamLimits

0x32aa,	// (0x0000e8a2) wml_list_single_large_pane

0x32be,	// (0x0000e8b6) wml_list_single_medium_pane_ParamLimits

0x32be,	// (0x0000e8b6) wml_list_single_medium_pane

0x32d3,	// (0x0000e8cb) wml_list_single_small_pane_ParamLimits

0x32d3,	// (0x0000e8cb) wml_list_single_small_pane

0xa823,	// (0x00015e1b) wml_selection_box_pane_ParamLimits

0xa823,	// (0x00015e1b) wml_selection_box_pane

0xa836,	// (0x00015e2e) wml_list_single_pane_t1

0xa845,	// (0x00015e3d) wml_list_single_medium_pane_t1

0xa854,	// (0x00015e4c) wml_list_single_large_pane_t1

0xa863,	// (0x00015e5b) input_focus_pane_cp02_ParamLimits

0xa863,	// (0x00015e5b) input_focus_pane_cp02

0xa876,	// (0x00015e6e) wml_selection_box_pane_g1

0xa87f,	// (0x00015e77) wml_selection_box_pane_t1_ParamLimits

0xa87f,	// (0x00015e77) wml_selection_box_pane_t1

0xa26c,	// (0x00015864) bg_wml_button_pane_ParamLimits

0xa26c,	// (0x00015864) bg_wml_button_pane

0xa897,	// (0x00015e8f) wml_button_pane_g1

0xa89f,	// (0x00015e97) wml_button_pane_t1

0xa897,	// (0x00015e8f) wml_button_bg_pane_g1

0xa8af,	// (0x00015ea7) wml_button_bg_pane_g2

0xa8b7,	// (0x00015eaf) wml_button_bg_pane_g3

0xa8bf,	// (0x00015eb7) wml_button_bg_pane_g4

0xa8c7,	// (0x00015ebf) wml_button_bg_pane_g5

0xa8cf,	// (0x00015ec7) wml_button_bg_pane_g6

0xa8d7,	// (0x00015ecf) wml_button_bg_pane_g7

0xa8df,	// (0x00015ed7) wml_button_bg_pane_g8

0xa8e7,	// (0x00015edf) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0001a824) wml_button_bg_pane_g

0x32ea,	// (0x0000e8e2) bg_list_pane_cp02

0xa8ef,	// (0x00015ee7) mce_header_pane_ParamLimits

0xa8ef,	// (0x00015ee7) mce_header_pane

0xa903,	// (0x00015efb) mce_icon_pane

0xa903,	// (0x00015efb) mce_image_pane

0xa90c,	// (0x00015f04) mce_text_pane_ParamLimits

0xa90c,	// (0x00015f04) mce_text_pane

0x32f3,	// (0x0000e8eb) scroll_pane_cp03

0x32f3,	// (0x0000e8eb) scroll_pane_cp04

0xa920,	// (0x00015f18) scroll_pane_cp05_ParamLimits

0xa920,	// (0x00015f18) scroll_pane_cp05

0x32fd,	// (0x0000e8f5) mce_header_field_pane_ParamLimits

0x32fd,	// (0x0000e8f5) mce_header_field_pane

0x3314,	// (0x0000e90c) mce_header_field_pane_2_ParamLimits

0x3314,	// (0x0000e90c) mce_header_field_pane_2

0x332a,	// (0x0000e922) mce_header_field_pane_3

0x3332,	// (0x0000e92a) list_single_mce_message_pane_ParamLimits

0x3332,	// (0x0000e92a) list_single_mce_message_pane

0x3347,	// (0x0000e93f) list_single_mce_smart_pane_ParamLimits

0x3347,	// (0x0000e93f) list_single_mce_smart_pane

0xa92c,	// (0x00015f24) input_focus_pane_cp03

0xa935,	// (0x00015f2d) list_header_data_pane

0x3367,	// (0x0000e95f) mce_header_field_pane_t1

0x3375,	// (0x0000e96d) list_single_mce_header_pane_ParamLimits

0x3375,	// (0x0000e96d) list_single_mce_header_pane

0xa93d,	// (0x00015f35) list_single_mce_header_pane_t1

0xa94c,	// (0x00015f44) list_single_mce_message_pane_g1

0xa955,	// (0x00015f4d) list_single_mce_message_pane_t1

0x33af,	// (0x0000e9a7) bg_cale_heading_pane_cp01_ParamLimits

0x33af,	// (0x0000e9a7) bg_cale_heading_pane_cp01

0xa964,	// (0x00015f5c) bg_cale_pane_cp02_ParamLimits

0xa964,	// (0x00015f5c) bg_cale_pane_cp02

0x33de,	// (0x0000e9d6) cale_month_corner_pane

0x33fd,	// (0x0000e9f5) cale_month_day_heading_pane_ParamLimits

0x33fd,	// (0x0000e9f5) cale_month_day_heading_pane

0x3434,	// (0x0000ea2c) cale_month_pane_g1_ParamLimits

0x3434,	// (0x0000ea2c) cale_month_pane_g1

0x3458,	// (0x0000ea50) cale_month_pane_g2_ParamLimits

0x3458,	// (0x0000ea50) cale_month_pane_g2

0x3480,	// (0x0000ea78) cale_month_pane_g3_ParamLimits

0x3480,	// (0x0000ea78) cale_month_pane_g3

0x34bc,	// (0x0000eab4) cale_month_pane_g4_ParamLimits

0x34bc,	// (0x0000eab4) cale_month_pane_g4

0x34f8,	// (0x0000eaf0) cale_month_pane_g5_ParamLimits

0x34f8,	// (0x0000eaf0) cale_month_pane_g5

0x3534,	// (0x0000eb2c) cale_month_pane_g6_ParamLimits

0x3534,	// (0x0000eb2c) cale_month_pane_g6

0x3570,	// (0x0000eb68) cale_month_pane_g7_ParamLimits

0x3570,	// (0x0000eb68) cale_month_pane_g7

0x35ac,	// (0x0000eba4) cale_month_pane_g8_ParamLimits

0x35ac,	// (0x0000eba4) cale_month_pane_g8

0x35f0,	// (0x0000ebe8) cale_month_pane_g9_ParamLimits

0x35f0,	// (0x0000ebe8) cale_month_pane_g9

0x3632,	// (0x0000ec2a) cale_month_pane_g10_ParamLimits

0x3632,	// (0x0000ec2a) cale_month_pane_g10

0x3674,	// (0x0000ec6c) cale_month_pane_g11_ParamLimits

0x3674,	// (0x0000ec6c) cale_month_pane_g11

0x36b6,	// (0x0000ecae) cale_month_pane_g12_ParamLimits

0x36b6,	// (0x0000ecae) cale_month_pane_g12

0x36f8,	// (0x0000ecf0) cale_month_pane_g13_ParamLimits

0x36f8,	// (0x0000ecf0) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0001a837) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0001a837) cale_month_pane_g

0x373a,	// (0x0000ed32) cale_month_week_pane

0x3756,	// (0x0000ed4e) grid_cale_month_pane_ParamLimits

0x3756,	// (0x0000ed4e) grid_cale_month_pane

0x3784,	// (0x0000ed7c) cale_month_day_heading_pane_t1

0x380a,	// (0x0000ee02) cale_month_day_heading_pane_t2

0x389b,	// (0x0000ee93) cale_month_day_heading_pane_t3

0x392c,	// (0x0000ef24) cale_month_day_heading_pane_t4

0x39bd,	// (0x0000efb5) cale_month_day_heading_pane_t5

0x3a4e,	// (0x0000f046) cale_month_day_heading_pane_t6

0x3adf,	// (0x0000f0d7) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0001a852) cale_month_day_heading_pane_t

0xa591,	// (0x00015b89) bg_cale_side_pane_cp01

0x3b74,	// (0x0000f16c) cale_month_week_pane_t1

0x3b8d,	// (0x0000f185) cale_month_week_pane_t2

0x3ba6,	// (0x0000f19e) cale_month_week_pane_t3

0x3bbf,	// (0x0000f1b7) cale_month_week_pane_t4

0x3bd8,	// (0x0000f1d0) cale_month_week_pane_t5

0x3bf1,	// (0x0000f1e9) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0001a861) cale_month_week_pane_t

0x3c0a,	// (0x0000f202) cell_cale_month_pane_ParamLimits

0x3c0a,	// (0x0000f202) cell_cale_month_pane

0xa9a3,	// (0x00015f9b) cell_cale_month_pane_g1

0x3cfc,	// (0x0000f2f4) cell_cale_month_pane_t1_ParamLimits

0x3cfc,	// (0x0000f2f4) cell_cale_month_pane_t1

0xa59f,	// (0x00015b97) grid_highlight_pane_cp08

0xa284,	// (0x0001587c) main_smil_g1

0x3d1c,	// (0x0000f314) smil_status_pane

0xa9af,	// (0x00015fa7) smil_text_pane

0xc45a,	// (0x00017a52) bg_popup_call3_rect_pane_g8

0xc462,	// (0x00017a5a) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x0001ab11) bg_popup_call3_rect_pane_g

0xc732,	// (0x00017d2a) smil_status_volume_pane_g1

0x3d2d,	// (0x0000f325) smil_status_pane_t1

0xc765,	// (0x00017d5d) volume_smil_pane

0xa9b9,	// (0x00015fb1) list_smil_text_pane

0x3d44,	// (0x0000f33c) scroll_pane_cp011

0x3d4f,	// (0x0000f347) smil_text_list_pane_t1_ParamLimits

0x3d4f,	// (0x0000f347) smil_text_list_pane_t1

0xa9c3,	// (0x00015fbb) aid_volume_smil_ParamLimits

0xa9c3,	// (0x00015fbb) aid_volume_smil

0xa284,	// (0x0001587c) smil_volume_pane_g1

0xa284,	// (0x0001587c) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0001a873) smil_volume_pane_g

0x26f8,	// (0x0000dcf0) listscroll_cale_day_pane

0xa9e5,	// (0x00015fdd) bg_cale_pane

0xa9fd,	// (0x00015ff5) list_cale_pane

0xaa20,	// (0x00016018) scroll_pane_cp09

0xaa31,	// (0x00016029) cale_bg_pane_g1

0xaa39,	// (0x00016031) cale_bg_pane_g2

0xaa41,	// (0x00016039) cale_bg_pane_g3

0xaa49,	// (0x00016041) cale_bg_pane_g4

0xaa51,	// (0x00016049) cale_bg_pane_g5

0xaa59,	// (0x00016051) cale_bg_pane_g6

0xaa61,	// (0x00016059) cale_bg_pane_g7

0xaa69,	// (0x00016061) cale_bg_pane_g8

0xaa71,	// (0x00016069) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0001a878) cale_bg_pane_g

0x3d93,	// (0x0000f38b) list_cale_time_pane_ParamLimits

0x3d93,	// (0x0000f38b) list_cale_time_pane

0xaa79,	// (0x00016071) list_cale_time_pane_g1_ParamLimits

0xaa79,	// (0x00016071) list_cale_time_pane_g1

0xaa85,	// (0x0001607d) list_cale_time_pane_g2_ParamLimits

0xaa85,	// (0x0001607d) list_cale_time_pane_g2

0x3da8,	// (0x0000f3a0) list_cale_time_pane_g3_ParamLimits

0x3da8,	// (0x0000f3a0) list_cale_time_pane_g3

0x3db4,	// (0x0000f3ac) list_cale_time_pane_g4_ParamLimits

0x3db4,	// (0x0000f3ac) list_cale_time_pane_g4

0x3dc0,	// (0x0000f3b8) list_cale_time_pane_g5_ParamLimits

0x3dc0,	// (0x0000f3b8) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0001a88b) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0001a88b) list_cale_time_pane_g

0xaa9f,	// (0x00016097) list_cale_time_pane_t1_ParamLimits

0xaa9f,	// (0x00016097) list_cale_time_pane_t1

0xaac7,	// (0x000160bf) list_cale_time_pane_t2_ParamLimits

0xaac7,	// (0x000160bf) list_cale_time_pane_t2

0x4062,	// (0x0000f65a) aid_blid_cardinal_pane

0x40a0,	// (0x0000f698) compass_pane_t4

0xaaef,	// (0x000160e7) list_cale_time_pane_t4_ParamLimits

0xaaef,	// (0x000160e7) list_cale_time_pane_t4

0x40ae,	// (0x0000f6a6) compass_pane_t5

0x40bc,	// (0x0000f6b4) compass_pane_t6

0x40ca,	// (0x0000f6c2) compass_pane_t7

0xafdb,	// (0x000165d3) navi_pane_cc_t1

0xb192,	// (0x0001678a) aid_phob_thumbnail_center_pane

0x4454,	// (0x0000fa4c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0001a898) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0001a898) list_cale_time_pane_t

0x9c6a,	// (0x00015262) bg_popup_window_pane_cp02_ParamLimits

0x9c6a,	// (0x00015262) bg_popup_window_pane_cp02

0xab17,	// (0x0001610f) heading_pane_cp01_ParamLimits

0xab17,	// (0x0001610f) heading_pane_cp01

0xab23,	// (0x0001611b) loc_req_pane_ParamLimits

0xab23,	// (0x0001611b) loc_req_pane

0xab33,	// (0x0001612b) loc_type_pane_ParamLimits

0xab33,	// (0x0001612b) loc_type_pane

0xab45,	// (0x0001613d) loc_type_pane_t1_ParamLimits

0xab45,	// (0x0001613d) loc_type_pane_t1

0xab57,	// (0x0001614f) loc_type_pane_t2_ParamLimits

0xab57,	// (0x0001614f) loc_type_pane_t2

0xab69,	// (0x00016161) loc_type_pane_t3_ParamLimits

0xab69,	// (0x00016161) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0001a89f) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0001a89f) loc_type_pane_t

0xab7b,	// (0x00016173) list_loc_req_pane

0xab85,	// (0x0001617d) scroll_pane_cp012

0x3dcc,	// (0x0000f3c4) list_single_loc_request_popup_menu_pane_ParamLimits

0x3dcc,	// (0x0000f3c4) list_single_loc_request_popup_menu_pane

0xab8e,	// (0x00016186) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xab8e,	// (0x00016186) list_single_loc_request_popup_menu_pane_g1

0xab9a,	// (0x00016192) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xab9a,	// (0x00016192) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0001a8a6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0001a8a6) list_single_loc_request_popup_menu_pane_g

0xaba6,	// (0x0001619e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaba6,	// (0x0001619e) list_single_loc_request_popup_menu_pane_t1

0xa26c,	// (0x00015864) bg_popup_window_pane_cp03_ParamLimits

0xa26c,	// (0x00015864) bg_popup_window_pane_cp03

0xcda8,	// (0x000183a0) heading_loc_req_pane_ParamLimits

0xcda8,	// (0x000183a0) heading_loc_req_pane

0x3dd9,	// (0x0000f3d1) popup_dyc_status_message_window_g1_ParamLimits

0x3dd9,	// (0x0000f3d1) popup_dyc_status_message_window_g1

0x3ded,	// (0x0000f3e5) popup_dyc_status_message_window_t1_ParamLimits

0x3ded,	// (0x0000f3e5) popup_dyc_status_message_window_t1

0x3e02,	// (0x0000f3fa) popup_dyc_status_message_window_t2_ParamLimits

0x3e02,	// (0x0000f3fa) popup_dyc_status_message_window_t2

0x3e17,	// (0x0000f40f) popup_dyc_status_message_window_t3_ParamLimits

0x3e17,	// (0x0000f40f) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0001a8ab) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0001a8ab) popup_dyc_status_message_window_t

0xa011,	// (0x00015609) bg_heading_pane_cp01

0xabbc,	// (0x000161b4) heading_loc_req_pane_g1

0xabc4,	// (0x000161bc) heading_loc_req_pane_g2

0xabcc,	// (0x000161c4) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0001a8b2) heading_loc_req_pane_g

0xabd4,	// (0x000161cc) heading_loc_req_pane_t1

0xac01,	// (0x000161f9) bg_popup_sub_pane_cp01_ParamLimits

0xac01,	// (0x000161f9) bg_popup_sub_pane_cp01

0xac0f,	// (0x00016207) popup_cale_events_window_g1_ParamLimits

0xac0f,	// (0x00016207) popup_cale_events_window_g1

0xac2f,	// (0x00016227) popup_cale_events_window_g2_ParamLimits

0xac2f,	// (0x00016227) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x0001a8e6) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x0001a8e6) popup_cale_events_window_g

0xac4f,	// (0x00016247) popup_cale_events_window_t1_ParamLimits

0xac4f,	// (0x00016247) popup_cale_events_window_t1

0xac61,	// (0x00016259) popup_cale_events_window_t2_ParamLimits

0xac61,	// (0x00016259) popup_cale_events_window_t2

0xac9f,	// (0x00016297) popup_cale_events_window_t3_ParamLimits

0xac9f,	// (0x00016297) popup_cale_events_window_t3

0xacd9,	// (0x000162d1) popup_cale_events_window_t4_ParamLimits

0xacd9,	// (0x000162d1) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x0001a8eb) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x0001a8eb) popup_cale_events_window_t

0x3e4d,	// (0x0000f445) call_type_pane

0x3e5d,	// (0x0000f455) popup_call_status_window_g1

0x3e71,	// (0x0000f469) popup_call_status_window_g2

0x3e85,	// (0x0000f47d) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x0001a8f4) popup_call_status_window_g

0xad0f,	// (0x00016307) call_type_pane_g1

0xad18,	// (0x00016310) call_type_pane_g2

0x0001,

0xf303,	// (0x0001a8fb) call_type_pane_g

0xa011,	// (0x00015609) bg_popup_sub_pane_cp02

0xad21,	// (0x00016319) listscroll_popup_wml_pane

0xad29,	// (0x00016321) list_wml_pane

0xad33,	// (0x0001632b) scroll_pane_cp013

0x3e95,	// (0x0000f48d) list_single_graphic_popup_wml_pane_ParamLimits

0x3e95,	// (0x0000f48d) list_single_graphic_popup_wml_pane

0xa284,	// (0x0001587c) list_single_graphic_popup_wml_pane_g1

0xad3c,	// (0x00016334) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x0001a900) list_single_graphic_popup_wml_pane_g

0xad44,	// (0x0001633c) list_single_graphic_popup_wml_pane_t1

0xad5a,	// (0x00016352) aid_call_pane

0xa264,	// (0x0001585c) popup_clock_analogue_window_g1

0xa264,	// (0x0001585c) popup_clock_analogue_window_g2

0xad62,	// (0x0001635a) popup_clock_analogue_window_g3

0xad62,	// (0x0001635a) popup_clock_analogue_window_g4

0xa284,	// (0x0001587c) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x0001a905) popup_clock_analogue_window_g

0xad6a,	// (0x00016362) popup_clock_analogue_window_t1

0xad78,	// (0x00016370) clock_digital_number_pane_ParamLimits

0xad78,	// (0x00016370) clock_digital_number_pane

0xad84,	// (0x0001637c) clock_digital_number_pane_cp02_ParamLimits

0xad84,	// (0x0001637c) clock_digital_number_pane_cp02

0xad90,	// (0x00016388) clock_digital_number_pane_cp03_ParamLimits

0xad90,	// (0x00016388) clock_digital_number_pane_cp03

0xad9c,	// (0x00016394) clock_digital_number_pane_cp04_ParamLimits

0xad9c,	// (0x00016394) clock_digital_number_pane_cp04

0xada8,	// (0x000163a0) clock_digital_separator_pane_ParamLimits

0xada8,	// (0x000163a0) clock_digital_separator_pane

0xadb4,	// (0x000163ac) popup_clock_digital_window_t1

0xa284,	// (0x0001587c) clock_digital_number_pane_g1

0xa284,	// (0x0001587c) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0001a873) clock_digital_number_pane_g

0xa284,	// (0x0001587c) clock_digital_separator_pane_g1

0xa284,	// (0x0001587c) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0001a873) clock_digital_separator_pane_g

0xa011,	// (0x00015609) bg_popup_window_pane_cp04

0xadd1,	// (0x000163c9) heading_pane_cp03

0xadd9,	// (0x000163d1) listscroll_popup_gms_pane

0xade1,	// (0x000163d9) grid_large_graphic_popup_pane

0xadeb,	// (0x000163e3) listscroll_popup_gms_pane_g1

0xadf3,	// (0x000163eb) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x0001a910) listscroll_popup_gms_pane_g

0xa807,	// (0x00015dff) scroll_pane_cp014

0x3ea8,	// (0x0000f4a0) cell_large_graphic_popup_pane_ParamLimits

0x3ea8,	// (0x0000f4a0) cell_large_graphic_popup_pane

0x3ebe,	// (0x0000f4b6) cell_large_graphic_popup_pane_g1_ParamLimits

0x3ebe,	// (0x0000f4b6) cell_large_graphic_popup_pane_g1

0xadfb,	// (0x000163f3) cell_large_graphic_popup_pane_g2_ParamLimits

0xadfb,	// (0x000163f3) cell_large_graphic_popup_pane_g2

0xae07,	// (0x000163ff) cell_large_graphic_popup_pane_g3_ParamLimits

0xae07,	// (0x000163ff) cell_large_graphic_popup_pane_g3

0xae14,	// (0x0001640c) cell_large_graphic_popup_pane_g4_ParamLimits

0xae14,	// (0x0001640c) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x0001a915) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x0001a915) cell_large_graphic_popup_pane_g

0xae24,	// (0x0001641c) grid_highlight_pane_cp010

0xa284,	// (0x0001587c) bg_popup_call_pane_g1

0xae2e,	// (0x00016426) list_single_graphic_popup_conf_pane_ParamLimits

0xae2e,	// (0x00016426) list_single_graphic_popup_conf_pane

0xae41,	// (0x00016439) list_highlight_pane_cp01

0xae4a,	// (0x00016442) list_single_graphic_popup_conf_pane_g1

0xae52,	// (0x0001644a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x0001a91e) list_single_graphic_popup_conf_pane_g

0xae5a,	// (0x00016452) list_single_graphic_popup_conf_pane_t1

0xae68,	// (0x00016460) linegrid_cams_pane_g1

0x3eca,	// (0x0000f4c2) linegrid_cams_pane_g2

0xa522,	// (0x00015b1a) linegrid_cams_pane_g3

0xae71,	// (0x00016469) linegrid_cams_pane_g4

0x3ed3,	// (0x0000f4cb) linegrid_cams_pane_g5

0x3edc,	// (0x0000f4d4) linegrid_cams_pane_g6

0xa5d2,	// (0x00015bca) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x0001a923) linegrid_cams_pane_g

0xae7a,	// (0x00016472) popup_clock_analogue_window

0xae7a,	// (0x00016472) popup_clock_digital_window

0xa011,	// (0x00015609) popup_phob_thumbnail_window

0xa284,	// (0x0001587c) call_video_uplink_pane_g1

0xae83,	// (0x0001647b) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x0001a932) call_video_uplink_pane_g

0xa59f,	// (0x00015b97) video_uplink_pane

0xae8b,	// (0x00016483) mce_image_pane_g1

0x3ee5,	// (0x0000f4dd) mce_image_pane_g2

0x3eed,	// (0x0000f4e5) mce_image_pane_g3

0x3ef5,	// (0x0000f4ed) mce_image_pane_g4

0x3efd,	// (0x0000f4f5) mce_image_pane_g5

0x0004,

0xf33f,	// (0x0001a937) mce_image_pane_g

0xae95,	// (0x0001648d) control_top_pane_stacon_cp01_ParamLimits

0xae95,	// (0x0001648d) control_top_pane_stacon_cp01

0xaea5,	// (0x0001649d) uni_indicator_pane_stacon_cp01_ParamLimits

0xaea5,	// (0x0001649d) uni_indicator_pane_stacon_cp01

0xaeb6,	// (0x000164ae) bg_popup_sub_pane_cp03

0xaec0,	// (0x000164b8) chi_dic_find_pane

0x3f05,	// (0x0000f4fd) listscroll_chi_dic_pane

0xaec8,	// (0x000164c0) main_pane_chidic_g1

0xaed0,	// (0x000164c8) chi_dic_find_pane_t1

0xaede,	// (0x000164d6) find_chidic_pane

0xaee7,	// (0x000164df) chi_dic_list_pane_ParamLimits

0xaee7,	// (0x000164df) chi_dic_list_pane

0xaef8,	// (0x000164f0) scroll_pane_cp020

0xaf00,	// (0x000164f8) find_chidic_pane_t1

0xa011,	// (0x00015609) input_focus_pane_cp06

0x3f19,	// (0x0000f511) list_chi_dic_pane_ParamLimits

0x3f19,	// (0x0000f511) list_chi_dic_pane

0x3f2b,	// (0x0000f523) list_chi_dic_pane_t1_ParamLimits

0x3f2b,	// (0x0000f523) list_chi_dic_pane_t1

0xa011,	// (0x00015609) list_highlight_pane_cp020

0xaf0f,	// (0x00016507) bg_cale_heading_pane_g1

0x3f3e,	// (0x0000f536) bg_cale_heading_pane_g2

0x3f46,	// (0x0000f53e) bg_cale_heading_pane_g3

0x3f4e,	// (0x0000f546) bg_cale_heading_pane_g4

0x3f56,	// (0x0000f54e) bg_cale_heading_pane_g5

0x3f5e,	// (0x0000f556) bg_cale_heading_pane_g6

0x3f66,	// (0x0000f55e) bg_cale_heading_pane_g7

0x3f6e,	// (0x0000f566) bg_cale_heading_pane_g8

0x3f76,	// (0x0000f56e) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x0001a942) bg_cale_heading_pane_g

0xaf0f,	// (0x00016507) bg_cale_side_pane_g1

0x3f7e,	// (0x0000f576) bg_cale_side_pane_g2

0x3f86,	// (0x0000f57e) bg_cale_side_pane_g3

0x3f8e,	// (0x0000f586) bg_cale_side_pane_g4

0x3f96,	// (0x0000f58e) bg_cale_side_pane_g5

0x3f9e,	// (0x0000f596) bg_cale_side_pane_g6

0x3fa6,	// (0x0000f59e) bg_cale_side_pane_g7

0x3fae,	// (0x0000f5a6) bg_cale_side_pane_g8

0x3fb6,	// (0x0000f5ae) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x0001a955) bg_cale_side_pane_g

0x3fbe,	// (0x0000f5b6) popup_call_status_window_ParamLimits

0x3fbe,	// (0x0000f5b6) popup_call_status_window

0xaf17,	// (0x0001650f) stacon_top_pane

0xaf1f,	// (0x00016517) status_pane_ParamLimits

0xaf1f,	// (0x00016517) status_pane

0xaf39,	// (0x00016531) status_small_pane

0xaf41,	// (0x00016539) control_pane

0xa011,	// (0x00015609) stacon_bottom_pane

0xaf49,	// (0x00016541) list_single_mce_smart_pane_t1_ParamLimits

0xaf49,	// (0x00016541) list_single_mce_smart_pane_t1

0xaf5c,	// (0x00016554) list_single_mce_smart_pane_t2_ParamLimits

0xaf5c,	// (0x00016554) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x0001a968) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x0001a968) list_single_mce_smart_pane_t

0x4005,	// (0x0000f5fd) compass_pane

0x400e,	// (0x0000f606) main_location2_pane_t1

0x4024,	// (0x0000f61c) main_location2_pane_t2

0x403a,	// (0x0000f632) main_location2_pane_t3

0x0003,

0xf375,	// (0x0001a96d) main_location2_pane_t

0xaf84,	// (0x0001657c) compass_pane_g1_ParamLimits

0xaf84,	// (0x0001657c) compass_pane_g1

0x4082,	// (0x0000f67a) compass_pane_t1

0x4091,	// (0x0000f689) compass_pane_t2

0x0005,

0xf37e,	// (0x0001a976) compass_pane_t

0x40d8,	// (0x0000f6d0) text_secondary_cp61

0xafd2,	// (0x000165ca) navi_pane_cams_g5

0xb01e,	// (0x00016616) navi_pane_im_t1

0xb02c,	// (0x00016624) navi_pane_mp_g1_ParamLimits

0xb02c,	// (0x00016624) navi_pane_mp_g1

0xb040,	// (0x00016638) navi_pane_mp_g2_ParamLimits

0xb040,	// (0x00016638) navi_pane_mp_g2

0xb04c,	// (0x00016644) navi_pane_mp_g3_ParamLimits

0xb04c,	// (0x00016644) navi_pane_mp_g3

0x0002,

0xf392,	// (0x0001a98a) navi_pane_mp_g_ParamLimits

0xf392,	// (0x0001a98a) navi_pane_mp_g

0xb058,	// (0x00016650) navi_pane_mp_t1

0xb066,	// (0x0001665e) navi_pane_mp_t2

0x0002,

0xf399,	// (0x0001a991) navi_pane_mp_t

0xb0d1,	// (0x000166c9) navi_pane_vt_g1

0xb058,	// (0x00016650) navi_pane_vt_t1

0xb0d9,	// (0x000166d1) navi_slider_pane

0xa5e3,	// (0x00015bdb) zooming_pane

0xb0e1,	// (0x000166d9) navi_slider_pane_g1

0xb0ea,	// (0x000166e2) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x0001a998) navi_slider_pane_g

0xb117,	// (0x0001670f) aid_levels_zoom

0xb11f,	// (0x00016717) zooming_pane_g1

0xb127,	// (0x0001671f) zooming_pane_g2

0xb127,	// (0x0001671f) zooming_pane_g3

0x0002,

0xf3af,	// (0x0001a9a7) zooming_pane_g

0xb12f,	// (0x00016727) level_10_zoom

0xb138,	// (0x00016730) level_11_zoom

0xb141,	// (0x00016739) level_1_zoom

0xb14a,	// (0x00016742) level_2_zoom

0xb153,	// (0x0001674b) level_3_zoom

0xb15c,	// (0x00016754) level_4_zoom

0xb165,	// (0x0001675d) level_5_zoom

0xb16e,	// (0x00016766) level_6_zoom

0xb177,	// (0x0001676f) level_7_zoom

0xb180,	// (0x00016778) level_8_zoom

0xb189,	// (0x00016781) level_9_zoom

0xb19a,	// (0x00016792) popup_phob_thumbnail_window_g1

0xb1a2,	// (0x0001679a) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x0001a9ae) popup_phob_thumbnail_window_g

0xc614,	// (0x00017c0c) level_1_location

0xc61c,	// (0x00017c14) level_2_location

0xc624,	// (0x00017c1c) level_3_location

0xc62c,	// (0x00017c24) level_4_location

0xa5e3,	// (0x00015bdb) level_5_location

0x416e,	// (0x0000f766) mce_icon_pane_g1

0x4176,	// (0x0000f76e) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x0001a9b3) mce_icon_pane_g

0xb1aa,	// (0x000167a2) main_mup_pane_g1_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g1

0xb1aa,	// (0x000167a2) main_mup_pane_g2_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g2

0xb1aa,	// (0x000167a2) main_mup_pane_g3_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g3

0xb1aa,	// (0x000167a2) main_mup_pane_g4_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g4

0xb1aa,	// (0x000167a2) main_mup_pane_g5_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g5

0xb1aa,	// (0x000167a2) main_mup_pane_g6_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g6

0xb1aa,	// (0x000167a2) main_mup_pane_g7_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g7

0xb1aa,	// (0x000167a2) main_mup_pane_g8_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g8

0xb1aa,	// (0x000167a2) main_mup_pane_g9_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g9

0xb1aa,	// (0x000167a2) main_mup_pane_g10_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g10

0xb1aa,	// (0x000167a2) main_mup_pane_g11_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g11

0xa2e6,	// (0x000158de) main_mup_pane_g12_ParamLimits

0xa2e6,	// (0x000158de) main_mup_pane_g12

0xb1aa,	// (0x000167a2) main_mup_pane_g13_ParamLimits

0xb1aa,	// (0x000167a2) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x0001a9b8) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x0001a9b8) main_mup_pane_g

0xb1b8,	// (0x000167b0) main_mup_pane_t1_ParamLimits

0xb1b8,	// (0x000167b0) main_mup_pane_t1

0xb1b8,	// (0x000167b0) main_mup_pane_t2_ParamLimits

0xb1b8,	// (0x000167b0) main_mup_pane_t2

0xb1b8,	// (0x000167b0) main_mup_pane_t3_ParamLimits

0xb1b8,	// (0x000167b0) main_mup_pane_t3

0xa62d,	// (0x00015c25) main_mup_pane_t4_ParamLimits

0xa62d,	// (0x00015c25) main_mup_pane_t4

0xa62d,	// (0x00015c25) main_mup_pane_t5_ParamLimits

0xa62d,	// (0x00015c25) main_mup_pane_t5

0xb1cc,	// (0x000167c4) main_mup_pane_t6_ParamLimits

0xb1cc,	// (0x000167c4) main_mup_pane_t6

0x0005,

0xf3db,	// (0x0001a9d3) main_mup_pane_t_ParamLimits

0xf3db,	// (0x0001a9d3) main_mup_pane_t

0xb1e0,	// (0x000167d8) mup_progress_pane_ParamLimits

0xb1e0,	// (0x000167d8) mup_progress_pane

0xb1ee,	// (0x000167e6) mup_visualizer_pane_ParamLimits

0xb1ee,	// (0x000167e6) mup_visualizer_pane

0xb1ee,	// (0x000167e6) mup_volume_pane_ParamLimits

0xb1ee,	// (0x000167e6) mup_volume_pane

0xa2f4,	// (0x000158ec) mup_visualizer_pane_g1_ParamLimits

0xa2f4,	// (0x000158ec) mup_visualizer_pane_g1

0xb1fc,	// (0x000167f4) mup_visualizer_pane_g2_ParamLimits

0xb1fc,	// (0x000167f4) mup_visualizer_pane_g2

0xa2e6,	// (0x000158de) mup_visualizer_pane_g3_ParamLimits

0xa2e6,	// (0x000158de) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x0001a9e0) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x0001a9e0) mup_visualizer_pane_g

0xa65b,	// (0x00015c53) mup_volume_pane_g1

0xa65b,	// (0x00015c53) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x0001a9e7) mup_volume_pane_g

0xa65b,	// (0x00015c53) mup_progress_pane_g1

0xa65b,	// (0x00015c53) mup_progress_pane_g2

0xa65b,	// (0x00015c53) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x0001a9ec) mup_progress_pane_g

0xa011,	// (0x00015609) bg_popup_window_pane_cp05

0xb20a,	// (0x00016802) heading_pane_cp02_ParamLimits

0xb20a,	// (0x00016802) heading_pane_cp02

0xb224,	// (0x0001681c) list_popup_blid_pane

0xb22c,	// (0x00016824) list_blid_sat_info_pane_ParamLimits

0xb22c,	// (0x00016824) list_blid_sat_info_pane

0xb23f,	// (0x00016837) list_blid_sat_info_pane_g1

0xb247,	// (0x0001683f) list_blid_sat_info_pane_t1

0x4250,	// (0x0000f848) mup_equalizer_pane_ParamLimits

0x4250,	// (0x0000f848) mup_equalizer_pane

0x4269,	// (0x0000f861) mup_equalizer_pane_cp1_ParamLimits

0x4269,	// (0x0000f861) mup_equalizer_pane_cp1

0x4282,	// (0x0000f87a) mup_equalizer_pane_cp2_ParamLimits

0x4282,	// (0x0000f87a) mup_equalizer_pane_cp2

0x429b,	// (0x0000f893) mup_equalizer_pane_cp3_ParamLimits

0x429b,	// (0x0000f893) mup_equalizer_pane_cp3

0x42b4,	// (0x0000f8ac) mup_equalizer_pane_cp4_ParamLimits

0x42b4,	// (0x0000f8ac) mup_equalizer_pane_cp4

0x42cd,	// (0x0000f8c5) mup_equalizer_pane_cp5

0x42df,	// (0x0000f8d7) mup_equalizer_pane_cp6

0x42f1,	// (0x0000f8e9) mup_equalizer_pane_cp7

0xc4f2,	// (0x00017aea) bg_popup_call_poc_act_pane_g9

0xc4fa,	// (0x00017af2) bg_popup_call_poc_act_pane_g10

0xc502,	// (0x00017afa) bg_popup_call_poc_act_pane_g11

0x000a,

0xa26c,	// (0x00015864) mup_scale_pane

0xa284,	// (0x0001587c) mup_scale_pane_g1

0xb255,	// (0x0001684d) mup_scale_pane_g2

0x0006,

0xf410,	// (0x0001aa08) mup_scale_pane_g

0xb279,	// (0x00016871) msg_data_pane

0xb281,	// (0x00016879) scroll_pane_cp017

0x4317,	// (0x0000f90f) bg_list_pane_cp04_ParamLimits

0x4317,	// (0x0000f90f) bg_list_pane_cp04

0xb291,	// (0x00016889) msg_data_pane_g1

0x3ee5,	// (0x0000f4dd) msg_data_pane_g2

0x3eed,	// (0x0000f4e5) msg_data_pane_g3

0x432f,	// (0x0000f927) msg_data_pane_g4

0x3efd,	// (0x0000f4f5) msg_data_pane_g5

0x416e,	// (0x0000f766) msg_data_pane_g6

0x4337,	// (0x0000f92f) msg_data_pane_g7

0x0006,

0xf41f,	// (0x0001aa17) msg_data_pane_g

0x433f,	// (0x0000f937) msg_text_pane_ParamLimits

0x433f,	// (0x0000f937) msg_text_pane

0x4366,	// (0x0000f95e) qrid_highlight_pane_cp011_ParamLimits

0x4366,	// (0x0000f95e) qrid_highlight_pane_cp011

0xa011,	// (0x00015609) msg_body_pane

0xa011,	// (0x00015609) msg_header_pane

0xb2a2,	// (0x0001689a) input_focus_pane_cp07

0xb2b7,	// (0x000168af) msg_header_pane_t1_ParamLimits

0xb2b7,	// (0x000168af) msg_header_pane_t1

0xb2cd,	// (0x000168c5) msg_header_pane_t2_ParamLimits

0xb2cd,	// (0x000168c5) msg_header_pane_t2

0x0001,

0xf433,	// (0x0001aa2b) msg_header_pane_t_ParamLimits

0xf433,	// (0x0001aa2b) msg_header_pane_t

0xb2e4,	// (0x000168dc) msg_body_pane_g1

0xb2ec,	// (0x000168e4) msg_body_pane_t1_ParamLimits

0xb2ec,	// (0x000168e4) msg_body_pane_t1

0xb317,	// (0x0001690f) msg_body_pane_t2_ParamLimits

0xb317,	// (0x0001690f) msg_body_pane_t2

0xb329,	// (0x00016921) msg_body_pane_t3_ParamLimits

0xb329,	// (0x00016921) msg_body_pane_t3

0x0002,

0xf438,	// (0x0001aa30) msg_body_pane_t_ParamLimits

0xf438,	// (0x0001aa30) msg_body_pane_t

0x43be,	// (0x0000f9b6) main_viewer_pane_g1_ParamLimits

0x43be,	// (0x0000f9b6) main_viewer_pane_g1

0x43ca,	// (0x0000f9c2) main_viewer_pane_g2_ParamLimits

0x43ca,	// (0x0000f9c2) main_viewer_pane_g2

0x43d6,	// (0x0000f9ce) main_viewer_pane_g3_ParamLimits

0x43d6,	// (0x0000f9ce) main_viewer_pane_g3

0x43e5,	// (0x0000f9dd) main_viewer_pane_g4_ParamLimits

0x43e5,	// (0x0000f9dd) main_viewer_pane_g4

0xb353,	// (0x0001694b) main_viewer_pane_g5_ParamLimits

0xb353,	// (0x0001694b) main_viewer_pane_g5

0xb353,	// (0x0001694b) main_viewer_pane_g7_ParamLimits

0xb353,	// (0x0001694b) main_viewer_pane_g7

0xb365,	// (0x0001695d) main_viewer_pane_g8_ParamLimits

0xb365,	// (0x0001695d) main_viewer_pane_g8

0x0007,

0xf448,	// (0x0001aa40) main_viewer_pane_g_ParamLimits

0xf448,	// (0x0001aa40) main_viewer_pane_g

0xb37d,	// (0x00016975) viewer_content_pane_ParamLimits

0xb37d,	// (0x00016975) viewer_content_pane

0x4419,	// (0x0000fa11) main_postcard_pane_g1_ParamLimits

0x4419,	// (0x0000fa11) main_postcard_pane_g1

0x442d,	// (0x0000fa25) main_postcard_pane_g2_ParamLimits

0x442d,	// (0x0000fa25) main_postcard_pane_g2

0x4441,	// (0x0000fa39) main_postcard_pane_g3_ParamLimits

0x4441,	// (0x0000fa39) main_postcard_pane_g3

0x0005,

0xf459,	// (0x0001aa51) main_postcard_pane_g_ParamLimits

0xf459,	// (0x0001aa51) main_postcard_pane_g

0x4454,	// (0x0000fa4c) main_postcard_pane_g4

0xc745,	// (0x00017d3d) smil_status_volume_pane_g2

0x448f,	// (0x0000fa87) postcard_pane_ParamLimits

0x448f,	// (0x0000fa87) postcard_pane

0xb38b,	// (0x00016983) postcard_pane_g1_ParamLimits

0xb38b,	// (0x00016983) postcard_pane_g1

0x44cf,	// (0x0000fac7) postcard_pane_g2_ParamLimits

0x44cf,	// (0x0000fac7) postcard_pane_g2

0x44db,	// (0x0000fad3) postcard_pane_g3_ParamLimits

0x44db,	// (0x0000fad3) postcard_pane_g3

0xb399,	// (0x00016991) postcard_pane_g4_ParamLimits

0xb399,	// (0x00016991) postcard_pane_g4

0x44e7,	// (0x0000fadf) postcard_pane_g5_ParamLimits

0x44e7,	// (0x0000fadf) postcard_pane_g5

0x44fc,	// (0x0000faf4) postcard_pane_g6_ParamLimits

0x44fc,	// (0x0000faf4) postcard_pane_g6

0xb38b,	// (0x00016983) postcard_pane_g7_ParamLimits

0xb38b,	// (0x00016983) postcard_pane_g7

0x0006,

0xf466,	// (0x0001aa5e) postcard_pane_g_ParamLimits

0xf466,	// (0x0001aa5e) postcard_pane_g

0x4510,	// (0x0000fb08) main_mp2_pane_g1_ParamLimits

0x4510,	// (0x0000fb08) main_mp2_pane_g1

0x451c,	// (0x0000fb14) main_mp2_pane_g2_ParamLimits

0x451c,	// (0x0000fb14) main_mp2_pane_g2

0x4528,	// (0x0000fb20) main_mp2_pane_g3_ParamLimits

0x4528,	// (0x0000fb20) main_mp2_pane_g3

0x0002,

0xf475,	// (0x0001aa6d) main_mp2_pane_g_ParamLimits

0xf475,	// (0x0001aa6d) main_mp2_pane_g

0x4534,	// (0x0000fb2c) main_mp2_pane_t1_ParamLimits

0x4534,	// (0x0000fb2c) main_mp2_pane_t1

0x4549,	// (0x0000fb41) main_mp2_pane_t2_ParamLimits

0x4549,	// (0x0000fb41) main_mp2_pane_t2

0x455b,	// (0x0000fb53) main_mp2_pane_t3_ParamLimits

0x455b,	// (0x0000fb53) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x0001aa74) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x0001aa74) main_mp2_pane_t

0xb3a7,	// (0x0001699f) pec_content_pane_ParamLimits

0xb3a7,	// (0x0001699f) pec_content_pane

0xa807,	// (0x00015dff) scroll_pane_cp015

0xb3b9,	// (0x000169b1) pec_attribute_pane_ParamLimits

0xb3b9,	// (0x000169b1) pec_attribute_pane

0x456d,	// (0x0000fb65) pec_content_pane_g1_ParamLimits

0x456d,	// (0x0000fb65) pec_content_pane_g1

0xb3c9,	// (0x000169c1) pec_content_pane_t1_ParamLimits

0xb3c9,	// (0x000169c1) pec_content_pane_t1

0xb3db,	// (0x000169d3) pec_content_pane_t2_ParamLimits

0xb3db,	// (0x000169d3) pec_content_pane_t2

0x0001,

0xf483,	// (0x0001aa7b) pec_content_pane_t_ParamLimits

0xf483,	// (0x0001aa7b) pec_content_pane_t

0x4579,	// (0x0000fb71) list_single_graphic_pane_cp01_ParamLimits

0x4579,	// (0x0000fb71) list_single_graphic_pane_cp01

0xa26c,	// (0x00015864) bg_popup_sub_pane_cp04

0xb3ed,	// (0x000169e5) popup_mup_playback_window_g1

0xb3f9,	// (0x000169f1) popup_mup_playback_window_t1

0xb40e,	// (0x00016a06) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x0001aa80) popup_mup_playback_window_t

0xb445,	// (0x00016a3d) main_image_pane_g1_ParamLimits

0xb445,	// (0x00016a3d) main_image_pane_g1

0xb488,	// (0x00016a80) scroll_pane_cp018_ParamLimits

0xb488,	// (0x00016a80) scroll_pane_cp018

0xb4a0,	// (0x00016a98) scroll_pane_cp016_ParamLimits

0xb4a0,	// (0x00016a98) scroll_pane_cp016

0x4644,	// (0x0000fc3c) smil2_image_pane_ParamLimits

0x4644,	// (0x0000fc3c) smil2_image_pane

0x466c,	// (0x0000fc64) smil2_root_pane_ParamLimits

0x466c,	// (0x0000fc64) smil2_root_pane

0x46a4,	// (0x0000fc9c) smil2_text_pane_ParamLimits

0x46a4,	// (0x0000fc9c) smil2_text_pane

0xa011,	// (0x00015609) bg_list_pane_cp06

0xb4dc,	// (0x00016ad4) grid_radio_pane

0xa011,	// (0x00015609) bg_popup_window_pane_cp06

0xb4e4,	// (0x00016adc) main_fmradio_pane_t1

0xadd1,	// (0x000163c9) heading_pane_cp04

0xb4f2,	// (0x00016aea) main_fmradio_pane_t2

0xc54a,	// (0x00017b42) popup_cale_lunar_info_window_g1

0xb500,	// (0x00016af8) main_fmradio_pane_t3

0xc552,	// (0x00017b4a) popup_cale_lunar_info_window_g2

0xb50e,	// (0x00016b06) main_fmradio_pane_t4

0x0001,

0xb51c,	// (0x00016b14) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x0001ab73) popup_cale_lunar_info_window_g

0xf49d,	// (0x0001aa95) main_fmradio_pane_t

0xb52a,	// (0x00016b22) wait_bar_pane_cp03

0xb532,	// (0x00016b2a) cell_fmradio_pane_ParamLimits

0xb532,	// (0x00016b2a) cell_fmradio_pane

0xb38b,	// (0x00016983) cell_fmradio_pane_g1_ParamLimits

0xb38b,	// (0x00016983) cell_fmradio_pane_g1

0xa011,	// (0x00015609) grid_highlight_pane_cp011

0xb545,	// (0x00016b3d) poc_content_pane_ParamLimits

0xb545,	// (0x00016b3d) poc_content_pane

0xb558,	// (0x00016b50) scroll_pane_cp019

0x4710,	// (0x0000fd08) popup_call_poc_act_window_ParamLimits

0x4710,	// (0x0000fd08) popup_call_poc_act_window

0x4730,	// (0x0000fd28) popup_call_poc_inact_window_ParamLimits

0x4730,	// (0x0000fd28) popup_call_poc_inact_window

0xf53f,	// (0x0001ab37) bg_popup_call_poc_act_pane_g

0xc50a,	// (0x00017b02) bg_popup_call_poc_inact_pane_g1

0xc512,	// (0x00017b0a) bg_popup_call_poc_inact_pane_g2

0xb560,	// (0x00016b58) popup_call_poc_act_window_g2

0xc51a,	// (0x00017b12) bg_popup_call_poc_inact_pane_g3

0xc4ca,	// (0x00017ac2) bg_popup_call_poc_inact_pane_g4

0xc522,	// (0x00017b1a) bg_popup_call_poc_inact_pane_g5

0xb568,	// (0x00016b60) popup_call_poc_act_window_t1_ParamLimits

0xb568,	// (0x00016b60) popup_call_poc_act_window_t1

0xb590,	// (0x00016b88) popup_call_poc_act_window_t2_ParamLimits

0xb590,	// (0x00016b88) popup_call_poc_act_window_t2

0xb5b8,	// (0x00016bb0) popup_call_poc_act_window_t3_ParamLimits

0xb5b8,	// (0x00016bb0) popup_call_poc_act_window_t3

0xb5e0,	// (0x00016bd8) popup_call_poc_act_window_t4_ParamLimits

0xb5e0,	// (0x00016bd8) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x0001aaa0) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x0001aaa0) popup_call_poc_act_window_t

0xc52a,	// (0x00017b22) bg_popup_call_poc_inact_pane_g6

0xc532,	// (0x00017b2a) bg_popup_call_poc_inact_pane_g7

0xc53a,	// (0x00017b32) bg_popup_call_poc_inact_pane_g8

0xb5f2,	// (0x00016bea) popup_call_poc_inact_window_g2

0xc542,	// (0x00017b3a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x0001ab4e) bg_popup_call_poc_inact_pane_g

0xb5fa,	// (0x00016bf2) popup_call_poc_inact_window_t1_ParamLimits

0xb5fa,	// (0x00016bf2) popup_call_poc_inact_window_t1

0xb60f,	// (0x00016c07) popup_call_poc_inact_window_t2_ParamLimits

0xb60f,	// (0x00016c07) popup_call_poc_inact_window_t2

0xb624,	// (0x00016c1c) popup_call_poc_inact_window_t3_ParamLimits

0xb624,	// (0x00016c1c) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x0001aaa9) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x0001aaa9) popup_call_poc_inact_window_t

0xc6d3,	// (0x00017ccb) context_pane_ParamLimits

0x4e4c,	// (0x00010444) signal_pane_ParamLimits

0xa5e3,	// (0x00015bdb) main_call2_pane

0xc6ac,	// (0x00017ca4) popup_phob_thumbnail2_window_ParamLimits

0xc6ac,	// (0x00017ca4) popup_phob_thumbnail2_window

0xb33b,	// (0x00016933) aid_hotspot_pointer_arrow_pane

0xb343,	// (0x0001693b) aid_hotspot_pointer_hand_pane

0x4a05,	// (0x0000fffd) phob_pre_status_pane_g5

0x9bf2,	// (0x000151ea) cams_zoom_pane_ParamLimits

0x2d43,	// (0x0000e33b) image_vga_pane_ParamLimits

0xa2e6,	// (0x000158de) main_camera_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) main_camera_pane_g2_ParamLimits

0xa2e6,	// (0x000158de) main_camera_pane_g3_ParamLimits

0xa2e6,	// (0x000158de) main_camera_pane_g4_ParamLimits

0xa2e6,	// (0x000158de) main_camera_pane_g5_ParamLimits

0xa2e6,	// (0x000158de) main_camera_pane_g6_ParamLimits

0xa2e6,	// (0x000158de) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0001a7bd) main_camera_pane_g_ParamLimits

0xa62d,	// (0x00015c25) main_camera_pane_t1_ParamLimits

0xa62d,	// (0x00015c25) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0001a7ce) main_camera_pane_t_ParamLimits

0xa26c,	// (0x00015864) bg_popup_preview_window_pane_cp01_ParamLimits

0xa26c,	// (0x00015864) bg_popup_preview_window_pane_cp01

0xb639,	// (0x00016c31) popup_phob_thumbnail2_window_g1_ParamLimits

0xb639,	// (0x00016c31) popup_phob_thumbnail2_window_g1

0xa011,	// (0x00015609) call2_cli_visual_pane

0x475c,	// (0x0000fd54) popup_call2_audio_conf_window_ParamLimits

0x475c,	// (0x0000fd54) popup_call2_audio_conf_window

0x477a,	// (0x0000fd72) popup_call2_audio_first_window_ParamLimits

0x477a,	// (0x0000fd72) popup_call2_audio_first_window

0x47f0,	// (0x0000fde8) popup_call2_audio_in_window_ParamLimits

0x47f0,	// (0x0000fde8) popup_call2_audio_in_window

0x4824,	// (0x0000fe1c) popup_call2_audio_out_window_ParamLimits

0x4824,	// (0x0000fe1c) popup_call2_audio_out_window

0x4876,	// (0x0000fe6e) popup_call2_audio_second_window_ParamLimits

0x4876,	// (0x0000fe6e) popup_call2_audio_second_window

0x48c8,	// (0x0000fec0) popup_call2_audio_wait_window_ParamLimits

0x48c8,	// (0x0000fec0) popup_call2_audio_wait_window

0xa011,	// (0x00015609) bg_popup_call2_act_pane_cp03

0xb645,	// (0x00016c3d) list_conf_pane_cp

0xb64d,	// (0x00016c45) popup_call2_audio_conf_window_t1

0xae2e,	// (0x00016426) list_single_graphic_popup_conf2_pane_ParamLimits

0xae2e,	// (0x00016426) list_single_graphic_popup_conf2_pane

0xae41,	// (0x00016439) list_highlight_pane_cp04

0xb65b,	// (0x00016c53) list_single_graphic_popup_conf2_pane_g1

0xae52,	// (0x0001644a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x0001aab0) list_single_graphic_popup_conf2_pane_g

0xb663,	// (0x00016c5b) list_single_graphic_popup_conf2_pane_t1

0xb671,	// (0x00016c69) bg_popup_call2_act_pane_cp01_ParamLimits

0xb671,	// (0x00016c69) bg_popup_call2_act_pane_cp01

0xb6fb,	// (0x00016cf3) call_type_pane_cp05_ParamLimits

0xb6fb,	// (0x00016cf3) call_type_pane_cp05

0xb74f,	// (0x00016d47) popup_call2_audio_second_window_g1_ParamLimits

0xb74f,	// (0x00016d47) popup_call2_audio_second_window_g1

0xb7a3,	// (0x00016d9b) popup_call2_audio_second_window_g2_ParamLimits

0xb7a3,	// (0x00016d9b) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x0001aab5) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x0001aab5) popup_call2_audio_second_window_g

0xb808,	// (0x00016e00) popup_call2_audio_second_window_t1_ParamLimits

0xb808,	// (0x00016e00) popup_call2_audio_second_window_t1

0xb8c3,	// (0x00016ebb) popup_call2_audio_second_window_t2_ParamLimits

0xb8c3,	// (0x00016ebb) popup_call2_audio_second_window_t2

0xb916,	// (0x00016f0e) popup_call2_audio_second_window_t3_ParamLimits

0xb916,	// (0x00016f0e) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x0001aabc) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x0001aabc) popup_call2_audio_second_window_t

0xa011,	// (0x00015609) bg_popup_call2_in_pane_cp02

0xba09,	// (0x00017001) call_type_pane_cp04

0xba11,	// (0x00017009) popup_call2_audio_wait_window_g1

0xba19,	// (0x00017011) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x0001aac5) popup_call2_audio_wait_window_g

0xba21,	// (0x00017019) popup_call2_audio_wait_window_t3

0xba2f,	// (0x00017027) bg_popup_call2_act_pane_ParamLimits

0xba2f,	// (0x00017027) bg_popup_call2_act_pane

0xbaef,	// (0x000170e7) call_type_pane_cp03_ParamLimits

0xbaef,	// (0x000170e7) call_type_pane_cp03

0xbb53,	// (0x0001714b) popup_call2_audio_first_window_g1_ParamLimits

0xbb53,	// (0x0001714b) popup_call2_audio_first_window_g1

0xbbc3,	// (0x000171bb) popup_call2_audio_first_window_g2_ParamLimits

0xbbc3,	// (0x000171bb) popup_call2_audio_first_window_g2

0xbc27,	// (0x0001721f) popup_call2_audio_first_window_g3_ParamLimits

0xbc27,	// (0x0001721f) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x0001aaca) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x0001aaca) popup_call2_audio_first_window_g

0xbcaf,	// (0x000172a7) popup_call2_audio_first_window_t1_ParamLimits

0xbcaf,	// (0x000172a7) popup_call2_audio_first_window_t1

0xbdb2,	// (0x000173aa) popup_call2_audio_first_window_t4_ParamLimits

0xbdb2,	// (0x000173aa) popup_call2_audio_first_window_t4

0xbe95,	// (0x0001748d) popup_call2_audio_first_window_t5_ParamLimits

0xbe95,	// (0x0001748d) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x0001aad5) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x0001aad5) popup_call2_audio_first_window_t

0xa264,	// (0x0001585c) bg_popup_call2_act_pane_g1

0xc55a,	// (0x00017b52) popup_cale_lunar_info_window_t1

0xc568,	// (0x00017b60) popup_cale_lunar_info_window_t2

0xc576,	// (0x00017b6e) popup_cale_lunar_info_window_t3

0xa011,	// (0x00015609) bg_popup_call2_bubble_pane

0xbf96,	// (0x0001758e) bg_popup_call2_in_pane_cp01_ParamLimits

0xbf96,	// (0x0001758e) bg_popup_call2_in_pane_cp01

0xba09,	// (0x00017001) call_type_pane_cp02

0xbfde,	// (0x000175d6) popup_call2_audio_out_window_g1_ParamLimits

0xbfde,	// (0x000175d6) popup_call2_audio_out_window_g1

0xc00a,	// (0x00017602) popup_call2_audio_out_window_g2_ParamLimits

0xc00a,	// (0x00017602) popup_call2_audio_out_window_g2

0xc032,	// (0x0001762a) popup_call2_audio_out_window_g3_ParamLimits

0xc032,	// (0x0001762a) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x0001aade) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x0001aade) popup_call2_audio_out_window_g

0xc06d,	// (0x00017665) popup_call2_audio_out_window_t1_ParamLimits

0xc06d,	// (0x00017665) popup_call2_audio_out_window_t1

0xc0cc,	// (0x000176c4) popup_call2_audio_out_window_t2_ParamLimits

0xc0cc,	// (0x000176c4) popup_call2_audio_out_window_t2

0xc120,	// (0x00017718) popup_call2_audio_out_window_t3_ParamLimits

0xc120,	// (0x00017718) popup_call2_audio_out_window_t3

0xc136,	// (0x0001772e) popup_call2_audio_out_window_t4_ParamLimits

0xc136,	// (0x0001772e) popup_call2_audio_out_window_t4

0xc14c,	// (0x00017744) popup_call2_audio_out_window_t5_ParamLimits

0xc14c,	// (0x00017744) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x0001aae7) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x0001aae7) popup_call2_audio_out_window_t

0xc1b0,	// (0x000177a8) bg_popup_call2_in_pane_ParamLimits

0xc1b0,	// (0x000177a8) bg_popup_call2_in_pane

0xc20c,	// (0x00017804) popup_call2_audio_in_window_g1_ParamLimits

0xc20c,	// (0x00017804) popup_call2_audio_in_window_g1

0xc244,	// (0x0001783c) popup_call2_audio_in_window_g2_ParamLimits

0xc244,	// (0x0001783c) popup_call2_audio_in_window_g2

0xc27c,	// (0x00017874) popup_call2_audio_in_window_g3_ParamLimits

0xc27c,	// (0x00017874) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x0001aaf4) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x0001aaf4) popup_call2_audio_in_window_g

0xc2d4,	// (0x000178cc) popup_call2_audio_in_window_t1_ParamLimits

0xc2d4,	// (0x000178cc) popup_call2_audio_in_window_t1

0xc354,	// (0x0001794c) popup_call2_audio_in_window_t2_ParamLimits

0xc354,	// (0x0001794c) popup_call2_audio_in_window_t2

0xc3d4,	// (0x000179cc) popup_call2_audio_in_window_t3_ParamLimits

0xc3d4,	// (0x000179cc) popup_call2_audio_in_window_t3

0xc3ee,	// (0x000179e6) popup_call2_audio_in_window_t4_ParamLimits

0xc3ee,	// (0x000179e6) popup_call2_audio_in_window_t4

0xc400,	// (0x000179f8) popup_call2_audio_in_window_t5_ParamLimits

0xc400,	// (0x000179f8) popup_call2_audio_in_window_t5

0xc415,	// (0x00017a0d) popup_call2_audio_in_window_t6_ParamLimits

0xc415,	// (0x00017a0d) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x0001aafd) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x0001aafd) popup_call2_audio_in_window_t

0xa264,	// (0x0001585c) bg_popup_call2_in_pane_g1

0xc584,	// (0x00017b7c) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x0001ab78) popup_cale_lunar_info_window_t

0xa26c,	// (0x00015864) bg_popup_call2_rect_pane_ParamLimits

0xa26c,	// (0x00015864) bg_popup_call2_rect_pane

0xa011,	// (0x00015609) call2_cli_visual_graphic_pane

0xa011,	// (0x00015609) call2_cli_visual_text_pane

0xc758,	// (0x00017d50) smil_status_volume_pane_g3

0x0002,

0xa284,	// (0x0001587c) call2_cli_visual_graphic_pane_g1

0xa284,	// (0x0001587c) call2_cli_visual_graphic_pane_g2

0xa284,	// (0x0001587c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x0001ab0a) call2_cli_visual_graphic_pane_g

0xc42a,	// (0x00017a22) bg_popup_call2_rect_pane_g1

0xa4bf,	// (0x00015ab7) bg_popup_call2_rect_pane_g2

0xc432,	// (0x00017a2a) bg_popup_call2_rect_pane_g3

0xc43a,	// (0x00017a32) bg_popup_call2_rect_pane_g4

0xc442,	// (0x00017a3a) bg_popup_call2_rect_pane_g5

0xc44a,	// (0x00017a42) bg_popup_call2_rect_pane_g6

0xc452,	// (0x00017a4a) bg_popup_call2_rect_pane_g7

0xc45a,	// (0x00017a52) bg_popup_call2_rect_pane_g8

0xc462,	// (0x00017a5a) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x0001ab11) bg_popup_call2_rect_pane_g

0xc46a,	// (0x00017a62) bg_popup_call2_bubble_pane_g1

0xc472,	// (0x00017a6a) bg_popup_call2_bubble_pane_g2

0xc47a,	// (0x00017a72) bg_popup_call2_bubble_pane_g3

0xc482,	// (0x00017a7a) bg_popup_call2_bubble_pane_g4

0xc48a,	// (0x00017a82) bg_popup_call2_bubble_pane_g5

0xc492,	// (0x00017a8a) bg_popup_call2_bubble_pane_g6

0xc49a,	// (0x00017a92) bg_popup_call2_bubble_pane_g7

0xc4a2,	// (0x00017a9a) bg_popup_call2_bubble_pane_g8

0xc4aa,	// (0x00017aa2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x0001ab24) bg_popup_call2_bubble_pane_g

0x2708,	// (0x0000dd00) aid_cale_week_size_cell_pane

0x2d56,	// (0x0000e34e) aid_cams_cif_uncrop_pane_ParamLimits

0x2d56,	// (0x0000e34e) aid_cams_cif_uncrop_pane

0x2ef7,	// (0x0000e4ef) aid_cams_size_cell_ParamLimits

0x2ef7,	// (0x0000e4ef) aid_cams_size_cell

0x2f0b,	// (0x0000e503) grid_cams_pane_ParamLimits

0x2f20,	// (0x0000e518) linegrid_cams_pane_ParamLimits

0x2fea,	// (0x0000e5e2) call_video_pane_t1

0x3004,	// (0x0000e5fc) call_video_pane_t2

0x0001,

0xf222,	// (0x0001a81a) call_video_pane_t

0x3389,	// (0x0000e981) aid_cale_month_size_cell_pane_ParamLimits

0x3389,	// (0x0000e981) aid_cale_month_size_cell_pane

0xf5c4,	// (0x0001abbc) smil_status_volume_pane_g

0xc765,	// (0x00017d5d) volume_smil_pane_ParamLimits

0x9bb1,	// (0x000151a9) aid_popup2_width_pane

0x2656,	// (0x0000dc4e) cell_qdial_pane_g4_ParamLimits

0x2656,	// (0x0000dc4e) cell_qdial_pane_g4

0x4062,	// (0x0000f65a) aid_blid_cardinal_pane_ParamLimits

0x406e,	// (0x0000f666) aid_blid_destination_pane_ParamLimits

0x406e,	// (0x0000f666) aid_blid_destination_pane

0xa26c,	// (0x00015864) bg_popup_call_poc_act_pane_ParamLimits

0xa26c,	// (0x00015864) bg_popup_call_poc_act_pane

0xa26c,	// (0x00015864) bg_popup_call_poc_inact_pane_ParamLimits

0xa26c,	// (0x00015864) bg_popup_call_poc_inact_pane

0xc4b2,	// (0x00017aaa) bg_popup_call_poc_act_pane_g1

0xc4ba,	// (0x00017ab2) bg_popup_call_poc_act_pane_g2

0xc4c2,	// (0x00017aba) bg_popup_call_poc_act_pane_g3

0xc4ca,	// (0x00017ac2) bg_popup_call_poc_act_pane_g4

0xc4d2,	// (0x00017aca) bg_popup_call_poc_act_pane_g5

0xc4da,	// (0x00017ad2) bg_popup_call_poc_act_pane_g6

0xc4e2,	// (0x00017ada) bg_popup_call_poc_act_pane_g7

0xc4ea,	// (0x00017ae2) bg_popup_call_poc_act_pane_g8

0xa011,	// (0x00015609) main_usb_pane

0xc68b,	// (0x00017c83) popup_cale_lunar_info_window

0x3249,	// (0x0000e841) im_reading_pane_t1_ParamLimits

0xa750,	// (0x00015d48) list_im_pane_ParamLimits

0xa761,	// (0x00015d59) scroll_pane_cp07_ParamLimits

0xa011,	// (0x00015609) grid_highlight_pane_cp012

0xa26c,	// (0x00015864) mup_scale_pane_ParamLimits

0xb38b,	// (0x00016983) main_usb_pane_g1_ParamLimits

0xb38b,	// (0x00016983) main_usb_pane_g1

0x4922,	// (0x0000ff1a) main_usb_pane_g2_ParamLimits

0x4922,	// (0x0000ff1a) main_usb_pane_g2

0x0001,

0xf569,	// (0x0001ab61) main_usb_pane_g_ParamLimits

0xf569,	// (0x0001ab61) main_usb_pane_g

0x4936,	// (0x0000ff2e) main_usb_pane_t1_ParamLimits

0x4936,	// (0x0000ff2e) main_usb_pane_t1

0x4948,	// (0x0000ff40) main_usb_pane_t2_ParamLimits

0x4948,	// (0x0000ff40) main_usb_pane_t2

0x495a,	// (0x0000ff52) main_usb_pane_t3_ParamLimits

0x495a,	// (0x0000ff52) main_usb_pane_t3

0x496c,	// (0x0000ff64) main_usb_pane_t4_ParamLimits

0x496c,	// (0x0000ff64) main_usb_pane_t4

0x497e,	// (0x0000ff76) main_usb_pane_t5_ParamLimits

0x497e,	// (0x0000ff76) main_usb_pane_t5

0x4990,	// (0x0000ff88) main_usb_pane_t6_ParamLimits

0x4990,	// (0x0000ff88) main_usb_pane_t6

0x0005,

0xf56e,	// (0x0001ab66) main_usb_pane_t_ParamLimits

0xaf7b,	// (0x00016573) aid_text_placing

0x400e,	// (0x0000f606) main_location2_pane_t1_ParamLimits

0x4024,	// (0x0000f61c) main_location2_pane_t2_ParamLimits

0x403a,	// (0x0000f632) main_location2_pane_t3_ParamLimits

0x4050,	// (0x0000f648) main_location2_pane_t4_ParamLimits

0x4050,	// (0x0000f648) main_location2_pane_t4

0xf375,	// (0x0001a96d) main_location2_pane_t_ParamLimits

0xa2a7,	// (0x0001589f) find_pinb_pane_g2_ParamLimits

0xa2a7,	// (0x0001589f) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0001a6d2) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0001a6d2) find_pinb_pane_g

0xa2b3,	// (0x000158ab) find_pinb_pane_t1_ParamLimits

0xa2c5,	// (0x000158bd) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0001a6d7) find_pinb_pane_t_ParamLimits

0xa011,	// (0x00015609) main_call3_pane

0x3784,	// (0x0000ed7c) cale_month_day_heading_pane_t1_ParamLimits

0x380a,	// (0x0000ee02) cale_month_day_heading_pane_t2_ParamLimits

0x389b,	// (0x0000ee93) cale_month_day_heading_pane_t3_ParamLimits

0x392c,	// (0x0000ef24) cale_month_day_heading_pane_t4_ParamLimits

0x39bd,	// (0x0000efb5) cale_month_day_heading_pane_t5_ParamLimits

0x3a4e,	// (0x0000f046) cale_month_day_heading_pane_t6_ParamLimits

0x3adf,	// (0x0000f0d7) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0001a852) cale_month_day_heading_pane_t_ParamLimits

0x3d3b,	// (0x0000f333) smil_status_volume_pane

0x44ab,	// (0x0000faa3) postcard_address_pane_ParamLimits

0x44ab,	// (0x0000faa3) postcard_address_pane

0x44bd,	// (0x0000fab5) postcard_message_pane_ParamLimits

0x44bd,	// (0x0000fab5) postcard_message_pane

0x4900,	// (0x0000fef8) call2_cli_visual_pane_t1_ParamLimits

0x4900,	// (0x0000fef8) call2_cli_visual_pane_t1

0x5038,	// (0x00010630) postcard_message_pane_t1_ParamLimits

0x5038,	// (0x00010630) postcard_message_pane_t1

0x5021,	// (0x00010619) postcard_address_pane_t1_ParamLimits

0x5021,	// (0x00010619) postcard_address_pane_t1

0x500f,	// (0x00010607) popup_call3_audio_in_window_ParamLimits

0x500f,	// (0x00010607) popup_call3_audio_in_window

0x4e9e,	// (0x00010496) bg_popup_call3_in_pane_ParamLimits

0x4e9e,	// (0x00010496) bg_popup_call3_in_pane

0x4f10,	// (0x00010508) popup_call3_audio_in_window_g1_ParamLimits

0x4f10,	// (0x00010508) popup_call3_audio_in_window_g1

0x4f30,	// (0x00010528) popup_call3_audio_in_window_g2_ParamLimits

0x4f30,	// (0x00010528) popup_call3_audio_in_window_g2

0x4f50,	// (0x00010548) popup_call3_audio_in_window_g3_ParamLimits

0x4f50,	// (0x00010548) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x0001abc3) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x0001abc3) popup_call3_audio_in_window_g

0x4f81,	// (0x00010579) popup_call3_audio_in_window_t1_ParamLimits

0x4f81,	// (0x00010579) popup_call3_audio_in_window_t1

0x4fbf,	// (0x000105b7) popup_call3_audio_in_window_t2_ParamLimits

0x4fbf,	// (0x000105b7) popup_call3_audio_in_window_t2

0x4ffd,	// (0x000105f5) popup_call3_audio_in_window_t3_ParamLimits

0x4ffd,	// (0x000105f5) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x0001abcc) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x0001abcc) popup_call3_audio_in_window_t

0xa5e3,	// (0x00015bdb) bg_popup_call3_rect_pane

0xc42a,	// (0x00017a22) bg_popup_call3_rect_pane_g1

0xa4bf,	// (0x00015ab7) bg_popup_call3_rect_pane_g2

0xc432,	// (0x00017a2a) bg_popup_call3_rect_pane_g3

0xc43a,	// (0x00017a32) bg_popup_call3_rect_pane_g4

0xc442,	// (0x00017a3a) bg_popup_call3_rect_pane_g5

0xc44a,	// (0x00017a42) bg_popup_call3_rect_pane_g6

0xc452,	// (0x00017a4a) bg_popup_call3_rect_pane_g7

0x9b9f,	// (0x00015197) mup_visualizer_osc_pane

0x9b9f,	// (0x00015197) mup_visualizer_spec_pane

0x4ece,	// (0x000104c6) call3_video_qcif_pane_ParamLimits

0x4ece,	// (0x000104c6) call3_video_qcif_pane

0x4edf,	// (0x000104d7) call3_video_qcif_uncrop_pane_ParamLimits

0x4edf,	// (0x000104d7) call3_video_qcif_uncrop_pane

0x4eeb,	// (0x000104e3) call3_video_subqcif_pane_ParamLimits

0x4eeb,	// (0x000104e3) call3_video_subqcif_pane

0x4eff,	// (0x000104f7) call3_video_subqcif_uncrop_pane_ParamLimits

0x4eff,	// (0x000104f7) call3_video_subqcif_uncrop_pane

0x4f70,	// (0x00010568) popup_call3_audio_in_window_g4_ParamLimits

0x4f70,	// (0x00010568) popup_call3_audio_in_window_g4

0x9b9f,	// (0x00015197) mup_spec_half_pane

0x9b9f,	// (0x00015197) mup_spec_half_pane_cp

0x9b9f,	// (0x00015197) mup_osc_middle_pane

0xa65b,	// (0x00015c53) mup_visualizer_osc_pane_g1

0xc720,	// (0x00017d18) mup_spec_bar_pane_ParamLimits

0xc720,	// (0x00017d18) mup_spec_bar_pane

0xa65b,	// (0x00015c53) mup_spec_bar_pane_g1

0xa65b,	// (0x00015c53) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x0001a9e7) mup_spec_bar_pane_g

0x2708,	// (0x0000dd00) aid_cale_week_size_cell_pane_ParamLimits

0x2722,	// (0x0000dd1a) bg_cale_heading_pane_ParamLimits

0xa545,	// (0x00015b3d) bg_cale_pane_cp01_ParamLimits

0x273a,	// (0x0000dd32) cale_week_corner_pane_ParamLimits

0x2759,	// (0x0000dd51) cale_week_day_heading_pane_ParamLimits

0x2776,	// (0x0000dd6e) cale_week_scroll_pane_g1_ParamLimits

0x2789,	// (0x0000dd81) cale_week_scroll_pane_g2_ParamLimits

0x27a1,	// (0x0000dd99) cale_week_scroll_pane_g3_ParamLimits

0x27b9,	// (0x0000ddb1) cale_week_scroll_pane_g4_ParamLimits

0x27d1,	// (0x0000ddc9) cale_week_scroll_pane_g5_ParamLimits

0x27e9,	// (0x0000dde1) cale_week_scroll_pane_g6_ParamLimits

0x2801,	// (0x0000ddf9) cale_week_scroll_pane_g7_ParamLimits

0x2819,	// (0x0000de11) cale_week_scroll_pane_g8_ParamLimits

0x2835,	// (0x0000de2d) cale_week_scroll_pane_g9_ParamLimits

0x284d,	// (0x0000de45) cale_week_scroll_pane_g10_ParamLimits

0x2865,	// (0x0000de5d) cale_week_scroll_pane_g11_ParamLimits

0x287d,	// (0x0000de75) cale_week_scroll_pane_g12_ParamLimits

0x2895,	// (0x0000de8d) cale_week_scroll_pane_g13_ParamLimits

0x28ad,	// (0x0000dea5) cale_week_scroll_pane_g14_ParamLimits

0x28c5,	// (0x0000debd) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0001a763) cale_week_scroll_pane_g_ParamLimits

0x28f9,	// (0x0000def1) cale_week_time_pane_ParamLimits

0x2915,	// (0x0000df0d) grid_cale_week_pane_ParamLimits

0xa562,	// (0x00015b5a) listscroll_cale_week_pane_t1

0xa574,	// (0x00015b6c) scroll_pane_cp08_ParamLimits

0x33de,	// (0x0000e9d6) cale_month_corner_pane_ParamLimits

0xa991,	// (0x00015f89) cale_month_pane_t1

0x373a,	// (0x0000ed32) cale_month_week_pane_ParamLimits

0x3e5d,	// (0x0000f455) popup_call_status_window_g1_ParamLimits

0x3e71,	// (0x0000f469) popup_call_status_window_g2_ParamLimits

0x3e85,	// (0x0000f47d) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x0001a8f4) popup_call_status_window_g_ParamLimits

0xad52,	// (0x0001634a) aid_call2_pane

0x437c,	// (0x0000f974) msg_header_pane_g1

0x44ab,	// (0x0000faa3) postcard_address2_pane_ParamLimits

0x44ab,	// (0x0000faa3) postcard_address2_pane

0x44bd,	// (0x0000fab5) postcard_message2_pane_ParamLimits

0x44bd,	// (0x0000fab5) postcard_message2_pane

0x4e5a,	// (0x00010452) message2_row_pane_ParamLimits

0x4e5a,	// (0x00010452) message2_row_pane

0x4e74,	// (0x0001046c) address2_row_pane_ParamLimits

0x4e74,	// (0x0001046c) address2_row_pane

0xc6ee,	// (0x00017ce6) postcard_message2_row_pane_g1

0xc6f6,	// (0x00017cee) postcard_message2_row_pane_t1

0xc6ee,	// (0x00017ce6) address2_row_pane_g1

0xc6f6,	// (0x00017cee) address2_row_pane_t1

0x2d12,	// (0x0000e30a) aid_size_cell_vorec

0xa011,	// (0x00015609) main_rss_pane

0x4e87,	// (0x0001047f) rss_list_single_pane_ParamLimits

0x4e87,	// (0x0001047f) rss_list_single_pane

0xc704,	// (0x00017cfc) rss_list_single_pane_t1

0xc712,	// (0x00017d0a) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x0001abb7) rss_list_single_pane_t

0xa011,	// (0x00015609) main_camera2_pane

0xa011,	// (0x00015609) main_video2_pane

0xcdb4,	// (0x000183ac) cams_zoom_pane_cp2_ParamLimits

0xcdb4,	// (0x000183ac) cams_zoom_pane_cp2

0xcdb4,	// (0x000183ac) image2_vga_pane_ParamLimits

0xcdb4,	// (0x000183ac) image2_vga_pane

0xcdc2,	// (0x000183ba) main_camera2_pane_g1_ParamLimits

0xcdc2,	// (0x000183ba) main_camera2_pane_g1

0xcdc2,	// (0x000183ba) main_camera2_pane_g2_ParamLimits

0xcdc2,	// (0x000183ba) main_camera2_pane_g2

0xcdc2,	// (0x000183ba) main_camera2_pane_g3_ParamLimits

0xcdc2,	// (0x000183ba) main_camera2_pane_g3

0xcdc2,	// (0x000183ba) main_camera2_pane_g4_ParamLimits

0xcdc2,	// (0x000183ba) main_camera2_pane_g4

0xcdc2,	// (0x000183ba) main_camera2_pane_g5_ParamLimits

0xcdc2,	// (0x000183ba) main_camera2_pane_g5

0xcdc2,	// (0x000183ba) main_camera2_pane_g6_ParamLimits

0xcdc2,	// (0x000183ba) main_camera2_pane_g6

0xcdc2,	// (0x000183ba) main_camera2_pane_g7_ParamLimits

0xcdc2,	// (0x000183ba) main_camera2_pane_g7

0xcdc2,	// (0x000183ba) main_camera2_pane_g8_ParamLimits

0xcdc2,	// (0x000183ba) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x0001abd3) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x0001abd3) main_camera2_pane_g

0x5061,	// (0x00010659) main_camera2_pane_t1_ParamLimits

0x5061,	// (0x00010659) main_camera2_pane_t1

0x5061,	// (0x00010659) main_camera2_pane_t2_ParamLimits

0x5061,	// (0x00010659) main_camera2_pane_t2

0x5061,	// (0x00010659) main_camera2_pane_t3_ParamLimits

0x5061,	// (0x00010659) main_camera2_pane_t3

0x5061,	// (0x00010659) main_camera2_pane_t4_ParamLimits

0x5061,	// (0x00010659) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x0001abe6) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x0001abe6) main_camera2_pane_t

0xcdd0,	// (0x000183c8) cams_zoom_pane_cp4_ParamLimits

0xcdd0,	// (0x000183c8) cams_zoom_pane_cp4

0xc78e,	// (0x00017d86) image2_cif_pane_ParamLimits

0xc78e,	// (0x00017d86) image2_cif_pane

0x9bf2,	// (0x000151ea) image2_subqcif_pane_ParamLimits

0x9bf2,	// (0x000151ea) image2_subqcif_pane

0x5075,	// (0x0001066d) main_video2_pane_g1_ParamLimits

0x5075,	// (0x0001066d) main_video2_pane_g1

0x5075,	// (0x0001066d) main_video2_pane_g2_ParamLimits

0x5075,	// (0x0001066d) main_video2_pane_g2

0x5075,	// (0x0001066d) main_video2_pane_g3_ParamLimits

0x5075,	// (0x0001066d) main_video2_pane_g3

0x5075,	// (0x0001066d) main_video2_pane_g4_ParamLimits

0x5075,	// (0x0001066d) main_video2_pane_g4

0x5075,	// (0x0001066d) main_video2_pane_g5_ParamLimits

0x5075,	// (0x0001066d) main_video2_pane_g5

0x5075,	// (0x0001066d) main_video2_pane_g6_ParamLimits

0x5075,	// (0x0001066d) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x0001abf5) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x0001abf5) main_video2_pane_g

0x5083,	// (0x0001067b) main_video2_pane_t1_ParamLimits

0x5083,	// (0x0001067b) main_video2_pane_t1

0x5083,	// (0x0001067b) main_video2_pane_t2_ParamLimits

0x5083,	// (0x0001067b) main_video2_pane_t2

0x5083,	// (0x0001067b) main_video2_pane_t3_ParamLimits

0x5083,	// (0x0001067b) main_video2_pane_t3

0x0002,

0xf60a,	// (0x0001ac02) main_video2_pane_t_ParamLimits

0xf60a,	// (0x0001ac02) main_video2_pane_t

0x4a3f,	// (0x00010037) call_muted_g2

0x0001,

0xf5b1,	// (0x0001aba9) call_muted_g

0xa011,	// (0x00015609) main_mup2_pane

0xb1aa,	// (0x000167a2) main_mup2_pane_g1_ParamLimits

0xb1aa,	// (0x000167a2) main_mup2_pane_g1

0xb1aa,	// (0x000167a2) main_mup2_pane_g2_ParamLimits

0xb1aa,	// (0x000167a2) main_mup2_pane_g2

0xa65b,	// (0x00015c53) main_mup_pane_g13_cp1

0x9b9f,	// (0x00015197) mup_volume_pane_cp1

0xb1aa,	// (0x000167a2) main_mup2_pane_g4_ParamLimits

0xb1aa,	// (0x000167a2) main_mup2_pane_g4

0xb1aa,	// (0x000167a2) main_mup2_pane_g5_ParamLimits

0xb1aa,	// (0x000167a2) main_mup2_pane_g5

0xb1aa,	// (0x000167a2) main_mup2_pane_g6_ParamLimits

0xb1aa,	// (0x000167a2) main_mup2_pane_g6

0xb1aa,	// (0x000167a2) main_mup2_pane_g7_ParamLimits

0xb1aa,	// (0x000167a2) main_mup2_pane_g7

0x0006,

0xf611,	// (0x0001ac09) main_mup2_pane_g_ParamLimits

0xf611,	// (0x0001ac09) main_mup2_pane_g

0xb1b8,	// (0x000167b0) main_mup2_pane_t1_ParamLimits

0xb1b8,	// (0x000167b0) main_mup2_pane_t1

0xb1b8,	// (0x000167b0) main_mup2_pane_t2_ParamLimits

0xb1b8,	// (0x000167b0) main_mup2_pane_t2

0xb1b8,	// (0x000167b0) main_mup2_pane_t3_ParamLimits

0xb1b8,	// (0x000167b0) main_mup2_pane_t3

0xb1b8,	// (0x000167b0) main_mup2_pane_t4_ParamLimits

0xb1b8,	// (0x000167b0) main_mup2_pane_t4

0xb1b8,	// (0x000167b0) main_mup2_pane_t5_ParamLimits

0xb1b8,	// (0x000167b0) main_mup2_pane_t5

0xb1b8,	// (0x000167b0) main_mup2_pane_t6_ParamLimits

0xb1b8,	// (0x000167b0) main_mup2_pane_t6

0x0005,

0xf620,	// (0x0001ac18) main_mup2_pane_t_ParamLimits

0xf620,	// (0x0001ac18) main_mup2_pane_t

0xb1ee,	// (0x000167e6) mup2_visualizer_pane_ParamLimits

0xb1ee,	// (0x000167e6) mup2_visualizer_pane

0xb1ee,	// (0x000167e6) mup_progress_pane_cp_ParamLimits

0xb1ee,	// (0x000167e6) mup_progress_pane_cp

0xc79c,	// (0x00017d94) mup_volume_pane_cp_ParamLimits

0xc79c,	// (0x00017d94) mup_volume_pane_cp

0xa2e6,	// (0x000158de) mup2_visualizer_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) mup2_visualizer_pane_g1

0xa2f4,	// (0x000158ec) mup2_visualizer_pane_g2_ParamLimits

0xa2f4,	// (0x000158ec) mup2_visualizer_pane_g2

0xa2f4,	// (0x000158ec) mup2_visualizer_pane_g3_ParamLimits

0xa2f4,	// (0x000158ec) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0001a6dc) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0001a6dc) mup2_visualizer_pane_g

0xb4d4,	// (0x00016acc) aid_size_cell_fmradio

0x4bb9,	// (0x000101b1) aid_height_parent_landcape

0xa7ee,	// (0x00015de6) wml_content_pane_cp

0xa7f6,	// (0x00015dee) wml_tabs_pane

0xa7ff,	// (0x00015df7) popup_wml_miniature_window

0xa807,	// (0x00015dff) scroll_pane_cp021

0xa81b,	// (0x00015e13) wml_content_pane_comp8

0xa011,	// (0x00015609) bg_popup_sub_pane_cp05

0xc7b2,	// (0x00017daa) popup_wml_miniature_window_g1

0xc7ba,	// (0x00017db2) wml_miniature_view_pane

0x5097,	// (0x0001068f) aid_size_wml_view

0x509f,	// (0x00010697) wml_miniature_view_pane_g1

0x50a8,	// (0x000106a0) wml_miniature_view_pane_g2

0x50b1,	// (0x000106a9) wml_miniature_view_pane_g3

0x50b9,	// (0x000106b1) wml_miniature_view_pane_g4

0x50c1,	// (0x000106b9) wml_miniature_view_pane_g5

0x50c9,	// (0x000106c1) wml_miniature_view_pane_g6

0x50d1,	// (0x000106c9) wml_miniature_view_pane_g7

0x50d9,	// (0x000106d1) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x0001ac25) wml_miniature_view_pane_g

0xc7c2,	// (0x00017dba) background_graphic_ParamLimits

0xc7c2,	// (0x00017dba) background_graphic

0xc7ce,	// (0x00017dc6) wml_tabs_2_pane

0xc7d7,	// (0x00017dcf) wml_tabs_3_pane_ParamLimits

0xc7d7,	// (0x00017dcf) wml_tabs_3_pane

0xc7e9,	// (0x00017de1) wml_tabs_4_pane_ParamLimits

0xc7e9,	// (0x00017de1) wml_tabs_4_pane

0xc7ff,	// (0x00017df7) wml_tabs_5_pane_ParamLimits

0xc7ff,	// (0x00017df7) wml_tabs_5_pane

0xc819,	// (0x00017e11) wml_tabs_pane_g2_ParamLimits

0xc819,	// (0x00017e11) wml_tabs_pane_g2

0xc82d,	// (0x00017e25) wml_tabs_pane_g3_ParamLimits

0xc82d,	// (0x00017e25) wml_tabs_pane_g3

0x50e1,	// (0x000106d9) wml_tabs_2_active_pane_ParamLimits

0x50e1,	// (0x000106d9) wml_tabs_2_active_pane

0x50f1,	// (0x000106e9) wml_tabs_2_passive_pane_ParamLimits

0x50f1,	// (0x000106e9) wml_tabs_2_passive_pane

0x5101,	// (0x000106f9) wml_tabs_3_active_pane_cp_ParamLimits

0x5101,	// (0x000106f9) wml_tabs_3_active_pane_cp

0x5112,	// (0x0001070a) wml_tabs_3_passive_pane_ParamLimits

0x5112,	// (0x0001070a) wml_tabs_3_passive_pane

0x5123,	// (0x0001071b) wml_tabs_3_passive_pane_cp_ParamLimits

0x5123,	// (0x0001071b) wml_tabs_3_passive_pane_cp

0x5134,	// (0x0001072c) tabs_4_active_pane

0x513c,	// (0x00010734) tabs_4_passive_pane

0x5144,	// (0x0001073c) tabs_4_passive_pane_cp

0x514c,	// (0x00010744) tabs_4_passive_pane_cp2

0x491a,	// (0x0000ff12) aid_height_text

0xb1ee,	// (0x000167e6) mup_volume_cont_pane_ParamLimits

0xb1ee,	// (0x000167e6) mup_volume_cont_pane

0x240e,	// (0x0000da06) aid_size_cell_pinb

0x9b9f,	// (0x00015197) aid_size_list_pinb

0xb1ee,	// (0x000167e6) mup2_volume_cont_pane_ParamLimits

0xb1ee,	// (0x000167e6) mup2_volume_cont_pane

0xc841,	// (0x00017e39) mup2_volume_cont_pane_g1_ParamLimits

0xc841,	// (0x00017e39) mup2_volume_cont_pane_g1

0x2182,	// (0x0000d77a) aid_size_cell_touch_ParamLimits

0x2182,	// (0x0000d77a) aid_size_cell_touch

0x236e,	// (0x0000d966) touch_pane_ParamLimits

0x236e,	// (0x0000d966) touch_pane

0x9b9f,	// (0x00015197) main_rss2_pane

0xc860,	// (0x00017e58) listscroll_rss2_pane

0xc869,	// (0x00017e61) rss2_navigation_pane

0xc871,	// (0x00017e69) list_rss2_pane

0xaef8,	// (0x000164f0) scroll_pane_cp22

0xc879,	// (0x00017e71) rss2_navigation_pane_g1

0xc882,	// (0x00017e7a) rss2_navigation_pane_g2

0xc88a,	// (0x00017e82) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x0001ac36) rss2_navigation_pane_g

0xc892,	// (0x00017e8a) rss2_navigation_pane_t1

0x5154,	// (0x0001074c) rss2_list_single_pane_ParamLimits

0x5154,	// (0x0001074c) rss2_list_single_pane

0xc8a0,	// (0x00017e98) rss2_list_single_pane_t2

0xc8ae,	// (0x00017ea6) rss2_list_single_pane_t3_ParamLimits

0xc8ae,	// (0x00017ea6) rss2_list_single_pane_t3

0xc8cb,	// (0x00017ec3) rss2_list_single_pane_t4

0x3d25,	// (0x0000f31d) smil_status_pane_g1

0x9bf2,	// (0x000151ea) main_image2_pane_ParamLimits

0x9bf2,	// (0x000151ea) main_image2_pane

0xcdc2,	// (0x000183ba) main_camera2_pane_g9_ParamLimits

0xcdc2,	// (0x000183ba) main_camera2_pane_g9

0x5061,	// (0x00010659) main_camera2_pane_t5_ParamLimits

0x5061,	// (0x00010659) main_camera2_pane_t5

0xc77a,	// (0x00017d72) main_camera2_pane_t6_ParamLimits

0xc77a,	// (0x00017d72) main_camera2_pane_t6

0x5168,	// (0x00010760) main_image2_pane_g1_ParamLimits

0x5168,	// (0x00010760) main_image2_pane_g1

0x46d2,	// (0x0000fcca) smil2_video_pane_ParamLimits

0x46d2,	// (0x0000fcca) smil2_video_pane

0x9bb9,	// (0x000151b1) aid_zoom_text_primary_cp

0x9bea,	// (0x000151e2) popup_preview_fixed_window

0xa748,	// (0x00015d40) im_reading_pane_g1

0x5053,	// (0x0001064b) cams2_bc_adjust_pane_cp_ParamLimits

0x5053,	// (0x0001064b) cams2_bc_adjust_pane_cp

0xb1ee,	// (0x000167e6) cams2_bc_adjust_pane_ParamLimits

0xb1ee,	// (0x000167e6) cams2_bc_adjust_pane

0xa65b,	// (0x00015c53) cams2_bc_adjust_pane_g1

0x9b9f,	// (0x00015197) cams2_slider_pane

0xa65b,	// (0x00015c53) cams2_slider_pane_g1

0xa65b,	// (0x00015c53) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x0001ac3d) cams2_slider_pane_g

0x2449,	// (0x0000da41) calc_display_pane_ParamLimits

0x2465,	// (0x0000da5d) calc_paper_pane_ParamLimits

0x2486,	// (0x0000da7e) grid_calc_pane_ParamLimits

0xadb4,	// (0x000163ac) popup_clock_digital_window_t1_ParamLimits

0xb471,	// (0x00016a69) main_image_pane_t1

0x242b,	// (0x0000da23) aid_size_cell_calc_ParamLimits

0x242b,	// (0x0000da23) aid_size_cell_calc

0x4be9,	// (0x000101e1) popup_blid_sat_info2_window_ParamLimits

0x4be9,	// (0x000101e1) popup_blid_sat_info2_window

0xc8d9,	// (0x00017ed1) aid_size_cell_blid

0xc78e,	// (0x00017d86) bg_popup_window_pane_cp07

0xc8f6,	// (0x00017eee) grid_popup_blid_pane

0xc8fe,	// (0x00017ef6) heading_pane_cp05_ParamLimits

0xc8fe,	// (0x00017ef6) heading_pane_cp05

0xc9c6,	// (0x00017fbe) cell_popup_blid_pane_ParamLimits

0xc9c6,	// (0x00017fbe) cell_popup_blid_pane

0xc9e6,	// (0x00017fde) cell_popup_blid_pane_g1

0xc9ee,	// (0x00017fe6) cell_popup_blid_pane_t1

0xb1ee,	// (0x000167e6) mup2_indicator_pane_ParamLimits

0xb1ee,	// (0x000167e6) mup2_indicator_pane

0x9b9f,	// (0x00015197) mup2_visualizer_osc_pane

0xc79c,	// (0x00017d94) mup2_visualizer_spec_pane_ParamLimits

0xc79c,	// (0x00017d94) mup2_visualizer_spec_pane

0x9b9f,	// (0x00015197) mup2_spec_half_pane

0x9b9f,	// (0x00015197) mup2_spec_half_pane_cp

0x9b9f,	// (0x00015197) mup2_spec_bar_pane_ParamLimits

0x9b9f,	// (0x00015197) mup2_spec_bar_pane

0xa65b,	// (0x00015c53) mup2_spec_bar_pane_g1

0xc9fc,	// (0x00017ff4) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x0001ac63) mup2_spec_bar_pane_g

0x9b9f,	// (0x00015197) mup2_osc_middle_pane

0xa65b,	// (0x00015c53) mup2_visualizer_osc_pane_g1

0x9c20,	// (0x00015218) popup_number_entry_window_t1_ParamLimits

0x9c33,	// (0x0001522b) popup_number_entry_window_t2_ParamLimits

0x9c45,	// (0x0001523d) popup_number_entry_window_t3_ParamLimits

0x23b6,	// (0x0000d9ae) popup_number_entry_window_t5_ParamLimits

0x23b6,	// (0x0000d9ae) popup_number_entry_window_t5

0xf085,	// (0x0001a67d) popup_number_entry_window_t_ParamLimits

0x9c57,	// (0x0001524f) text_title_cp2_ParamLimits

0xb34b,	// (0x00016943) aid_hotspot_pointer_text2_pane

0xb371,	// (0x00016969) main_viewer_pane_g9_ParamLimits

0xb371,	// (0x00016969) main_viewer_pane_g9

0xa991,	// (0x00015f89) cale_month_pane_t1_ParamLimits

0xa9e5,	// (0x00015fdd) bg_cale_pane_ParamLimits

0xa9fd,	// (0x00015ff5) list_cale_pane_ParamLimits

0xaa0e,	// (0x00016006) listscroll_cale_day_pane_t1

0xaa20,	// (0x00016018) scroll_pane_cp09_ParamLimits

0x417e,	// (0x0000f776) main_mup_eq_pane_t1_ParamLimits

0x417e,	// (0x0000f776) main_mup_eq_pane_t1

0x4196,	// (0x0000f78e) main_mup_eq_pane_t2_ParamLimits

0x4196,	// (0x0000f78e) main_mup_eq_pane_t2

0x41ac,	// (0x0000f7a4) main_mup_eq_pane_t3_ParamLimits

0x41ac,	// (0x0000f7a4) main_mup_eq_pane_t3

0x41c2,	// (0x0000f7ba) main_mup_eq_pane_t4_ParamLimits

0x41c2,	// (0x0000f7ba) main_mup_eq_pane_t4

0x41d8,	// (0x0000f7d0) main_mup_eq_pane_t5_ParamLimits

0x41d8,	// (0x0000f7d0) main_mup_eq_pane_t5

0x41ee,	// (0x0000f7e6) main_mup_eq_pane_t6_ParamLimits

0x41ee,	// (0x0000f7e6) main_mup_eq_pane_t6

0x4200,	// (0x0000f7f8) main_mup_eq_pane_t7_ParamLimits

0x4200,	// (0x0000f7f8) main_mup_eq_pane_t7

0x4212,	// (0x0000f80a) main_mup_eq_pane_t8_ParamLimits

0x4212,	// (0x0000f80a) main_mup_eq_pane_t8

0x4224,	// (0x0000f81c) main_mup_eq_pane_t9_ParamLimits

0x4224,	// (0x0000f81c) main_mup_eq_pane_t9

0x423a,	// (0x0000f832) main_mup_eq_pane_t10_ParamLimits

0x423a,	// (0x0000f832) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x0001a9f3) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x0001a9f3) main_mup_eq_pane_t

0x42cd,	// (0x0000f8c5) mup_equalizer_pane_cp5_ParamLimits

0x42df,	// (0x0000f8d7) mup_equalizer_pane_cp6_ParamLimits

0x42f1,	// (0x0000f8e9) mup_equalizer_pane_cp7_ParamLimits

0x9b9f,	// (0x00015197) main_gallery_pane

0xc72a,	// (0x00017d22) smil2_volume_pane

0xc732,	// (0x00017d2a) smil_status_volume_pane_g1_ParamLimits

0xc745,	// (0x00017d3d) smil_status_volume_pane_g2_ParamLimits

0xc758,	// (0x00017d50) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x0001abbc) smil_status_volume_pane_g_ParamLimits

0xc78e,	// (0x00017d86) bg_popup_window_pane_cp07_ParamLimits

0xc8e1,	// (0x00017ed9) blid_firmament_pane

0x9bf2,	// (0x000151ea) aid_size_cell_gallery_ParamLimits

0x9bf2,	// (0x000151ea) aid_size_cell_gallery

0x517c,	// (0x00010774) grid_gallery_pane_ParamLimits

0x517c,	// (0x00010774) grid_gallery_pane

0x5192,	// (0x0001078a) cell_gallery_pane_ParamLimits

0x5192,	// (0x0001078a) cell_gallery_pane

0x9bf2,	// (0x000151ea) bg_cell_gallery_focus_pane_ParamLimits

0x9bf2,	// (0x000151ea) bg_cell_gallery_focus_pane

0xa2e6,	// (0x000158de) cell_gallery_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) cell_gallery_pane_g1

0xa2e6,	// (0x000158de) cell_gallery_pane_g2_ParamLimits

0xa2e6,	// (0x000158de) cell_gallery_pane_g2

0xa2e6,	// (0x000158de) cell_gallery_pane_g3_ParamLimits

0xa2e6,	// (0x000158de) cell_gallery_pane_g3

0xa2f4,	// (0x000158ec) cell_gallery_pane_g4_ParamLimits

0xa2f4,	// (0x000158ec) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x0001ac68) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x0001ac68) cell_gallery_pane_g

0xca06,	// (0x00017ffe) bg_cell_gallery_focus_pane_g1

0xca0e,	// (0x00018006) bg_cell_gallery_focus_pane_g2

0xca16,	// (0x0001800e) bg_cell_gallery_focus_pane_g3

0xca1e,	// (0x00018016) bg_cell_gallery_focus_pane_g4

0xca26,	// (0x0001801e) bg_cell_gallery_focus_pane_g5

0xca2e,	// (0x00018026) bg_cell_gallery_focus_pane_g6

0xca36,	// (0x0001802e) bg_cell_gallery_focus_pane_g7

0xca3e,	// (0x00018036) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x0001ac71) bg_cell_gallery_focus_pane_g

0xca46,	// (0x0001803e) aid_firma_cardinal

0xca5a,	// (0x00018052) blid_firmament_pane_t1

0xca71,	// (0x00018069) blid_firmament_pane_t2

0xca88,	// (0x00018080) blid_firmament_pane_t3

0xca9f,	// (0x00018097) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x0001ac82) blid_firmament_pane_t

0xcab6,	// (0x000180ae) blid_sat_info_pane

0xa65b,	// (0x00015c53) blid_sat_info_pane_g1

0xa65b,	// (0x00015c53) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x0001a9e7) blid_sat_info_pane_g

0xcac6,	// (0x000180be) blid_sat_info_pane_t1

0xcad4,	// (0x000180cc) smil2_volume_content_pane

0xcadd,	// (0x000180d5) smil2_volume_pane_g1

0xcae5,	// (0x000180dd) smil2_volume_content_pane_g1

0xcaee,	// (0x000180e6) smil2_volume_content_pane_g2

0xcaf7,	// (0x000180ef) smil2_volume_content_pane_g3

0xcb00,	// (0x000180f8) smil2_volume_content_pane_g4

0xcb09,	// (0x00018101) smil2_volume_content_pane_g5

0xcb12,	// (0x0001810a) smil2_volume_content_pane_g6

0xcb1b,	// (0x00018113) smil2_volume_content_pane_g7

0xcb24,	// (0x0001811c) smil2_volume_content_pane_g8

0xcb2d,	// (0x00018125) smil2_volume_content_pane_g9

0xcb36,	// (0x0001812e) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x0001ac8b) smil2_volume_content_pane_g

0x29a9,	// (0x0000dfa1) cale_week_day_heading_pane_t1_ParamLimits

0x29d3,	// (0x0000dfcb) cale_week_day_heading_pane_t2_ParamLimits

0x2a02,	// (0x0000dffa) cale_week_day_heading_pane_t3_ParamLimits

0x2a31,	// (0x0000e029) cale_week_day_heading_pane_t4_ParamLimits

0x2a60,	// (0x0000e058) cale_week_day_heading_pane_t5_ParamLimits

0x2a8f,	// (0x0000e087) cale_week_day_heading_pane_t6_ParamLimits

0x2abe,	// (0x0000e0b6) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0001a784) cale_week_day_heading_pane_t_ParamLimits

0xa591,	// (0x00015b89) bg_cale_side_pane_ParamLimits

0x2ae8,	// (0x0000e0e0) cale_week_time_pane_t1_ParamLimits

0x2b22,	// (0x0000e11a) cale_week_time_pane_t2_ParamLimits

0x2b5c,	// (0x0000e154) cale_week_time_pane_t3_ParamLimits

0x2b96,	// (0x0000e18e) cale_week_time_pane_t4_ParamLimits

0x2bd0,	// (0x0000e1c8) cale_week_time_pane_t5_ParamLimits

0x2c0a,	// (0x0000e202) cale_week_time_pane_t6_ParamLimits

0x2c44,	// (0x0000e23c) cale_week_time_pane_t7_ParamLimits

0x2c7e,	// (0x0000e276) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0001a793) cale_week_time_pane_t_ParamLimits

0x2cb8,	// (0x0000e2b0) cell_cale_week_pane_g2_ParamLimits

0xa591,	// (0x00015b89) bg_cale_side_pane_cp01_ParamLimits

0x3b74,	// (0x0000f16c) cale_month_week_pane_t1_ParamLimits

0x3b8d,	// (0x0000f185) cale_month_week_pane_t2_ParamLimits

0x3ba6,	// (0x0000f19e) cale_month_week_pane_t3_ParamLimits

0x3bbf,	// (0x0000f1b7) cale_month_week_pane_t4_ParamLimits

0x3bd8,	// (0x0000f1d0) cale_month_week_pane_t5_ParamLimits

0x3bf1,	// (0x0000f1e9) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0001a861) cale_month_week_pane_t_ParamLimits

0xa9a3,	// (0x00015f9b) cell_cale_month_pane_g1_ParamLimits

0x9b9f,	// (0x00015197) main_cale_event_viewer_pane

0x9b9f,	// (0x00015197) listscroll_cale_event_viewer_pane

0xcb3f,	// (0x00018137) list_cale_ev_pane

0xcb47,	// (0x0001813f) scroll_pane_cp023

0x51b2,	// (0x000107aa) field_cale_ev_pane_ParamLimits

0x51b2,	// (0x000107aa) field_cale_ev_pane

0xcb53,	// (0x0001814b) field_cale_ev_content_pane_ParamLimits

0xcb53,	// (0x0001814b) field_cale_ev_content_pane

0xcb5f,	// (0x00018157) field_cale_ev_pane_g1_ParamLimits

0xcb5f,	// (0x00018157) field_cale_ev_pane_g1

0xcb6b,	// (0x00018163) field_cale_ev_pane_g2_ParamLimits

0xcb6b,	// (0x00018163) field_cale_ev_pane_g2

0xcb83,	// (0x0001817b) field_cale_ev_pane_g3_ParamLimits

0xcb83,	// (0x0001817b) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x0001aca0) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x0001aca0) field_cale_ev_pane_g

0xcb9b,	// (0x00018193) field_cale_ev_pane_t1_ParamLimits

0xcb9b,	// (0x00018193) field_cale_ev_pane_t1

0x26aa,	// (0x0000dca2) field_cale_ev_content_pane_t1_ParamLimits

0x26aa,	// (0x0000dca2) field_cale_ev_content_pane_t1

0xb299,	// (0x00016891) bg_button_pane_cp01

0x26f8,	// (0x0000dcf0) listscroll_cale_week_pane_ParamLimits

0xa53c,	// (0x00015b34) popup_toolbar_window_cp01

0xa562,	// (0x00015b5a) listscroll_cale_week_pane_t1_ParamLimits

0x26f8,	// (0x0000dcf0) listscroll_cale_day_pane_ParamLimits

0xa53c,	// (0x00015b34) popup_toolbar_window_cp02

0xaa0e,	// (0x00016006) listscroll_cale_day_pane_t1_ParamLimits

0x26f8,	// (0x0000dcf0) main_cale_month_pane_ParamLimits

0xc6be,	// (0x00017cb6) popup_toolbar_window_cp03_ParamLimits

0xc6be,	// (0x00017cb6) popup_toolbar_window_cp03

0x45ac,	// (0x0000fba4) main_image_pane_g2_ParamLimits

0x45ac,	// (0x0000fba4) main_image_pane_g2

0x45bd,	// (0x0000fbb5) main_image_pane_g3_ParamLimits

0x45bd,	// (0x0000fbb5) main_image_pane_g3

0x0002,

0xf48d,	// (0x0001aa85) main_image_pane_g_ParamLimits

0xf48d,	// (0x0001aa85) main_image_pane_g

0xb471,	// (0x00016a69) main_image_pane_t1_ParamLimits

0x45ce,	// (0x0000fbc6) main_image_pane_t2_ParamLimits

0x45ce,	// (0x0000fbc6) main_image_pane_t2

0x45e0,	// (0x0000fbd8) main_image_pane_t3_ParamLimits

0x45e0,	// (0x0000fbd8) main_image_pane_t3

0x4608,	// (0x0000fc00) main_image_pane_t4_ParamLimits

0x4608,	// (0x0000fc00) main_image_pane_t4

0x0003,

0xf494,	// (0x0001aa8c) main_image_pane_t_ParamLimits

0xf494,	// (0x0001aa8c) main_image_pane_t

0x4628,	// (0x0000fc20) popup_image_details_window_cp01

0x4630,	// (0x0000fc28) popup_toobar_trans_pane_cp01_ParamLimits

0x4630,	// (0x0000fc28) popup_toobar_trans_pane_cp01

0x4cb2,	// (0x000102aa) popup_image_details_window_ParamLimits

0x4cb2,	// (0x000102aa) popup_image_details_window

0xc693,	// (0x00017c8b) popup_image_focus_window

0xcdb4,	// (0x000183ac) camera2_autofocus_pane_ParamLimits

0xcdb4,	// (0x000183ac) camera2_autofocus_pane

0x9b9f,	// (0x00015197) bg_popup_sub_pane_cp06

0xcbb2,	// (0x000181aa) popup_image_focus_window_g1

0xcbba,	// (0x000181b2) popup_image_focus_window_g2

0xcbc2,	// (0x000181ba) popup_image_focus_window_g3

0xcbca,	// (0x000181c2) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x0001aca7) popup_image_focus_window_g

0xcbd2,	// (0x000181ca) popup_image_focus_window_t1

0xcbe0,	// (0x000181d8) popup_image_focus_window_t2

0xcbef,	// (0x000181e7) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x0001acb0) popup_image_focus_window_t

0xa2e6,	// (0x000158de) camera2_autofocus_pane_g1

0x9bf2,	// (0x000151ea) bg_tb_trans_pane_cp01

0xcbfd,	// (0x000181f5) popup_image_details_window_g1

0xcc10,	// (0x00018208) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x0001acc2) popup_image_details_window_g

0xcc39,	// (0x00018231) popup_image_details_window_t1

0xcc4b,	// (0x00018243) popup_image_details_window_t2

0xcc64,	// (0x0001825c) popup_image_details_window_t3

0xcc78,	// (0x00018270) popup_image_details_window_t4

0xcc93,	// (0x0001828b) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x0001acc9) popup_image_details_window_t

0xa34c,	// (0x00015944) bg_calc_paper_pane_ParamLimits

0x9b9f,	// (0x00015197) grid_highlight_pane_cp013

0xa364,	// (0x0001595c) list_calc_pane_ParamLimits

0xa376,	// (0x0001596e) scroll_pane_cp024

0xa37e,	// (0x00015976) bg_calc_display_pane_ParamLimits

0xa38a,	// (0x00015982) calc_display_pane_t1_ParamLimits

0xa39f,	// (0x00015997) calc_display_pane_t2_ParamLimits

0xa3b4,	// (0x000159ac) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0001a704) calc_display_pane_t_ParamLimits

0x2605,	// (0x0000dbfd) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0001a721) cell_calc_pane_g

0x260e,	// (0x0000dc06) cell_calc_pane_t1

0xa421,	// (0x00015a19) grid_highlight_pane_cp02_ParamLimits

0xa437,	// (0x00015a2f) toolbar_button_pane_cp01_ParamLimits

0xa437,	// (0x00015a2f) toolbar_button_pane_cp01

0xb4b6,	// (0x00016aae) temp_image_control_pane_ParamLimits

0xb4b6,	// (0x00016aae) temp_image_control_pane

0x9bf2,	// (0x000151ea) main_mp3_pane

0xccad,	// (0x000182a5) temp_image_control_pane_g1_ParamLimits

0xccad,	// (0x000182a5) temp_image_control_pane_g1

0xccbb,	// (0x000182b3) temp_image_control_pane_g2_ParamLimits

0xccbb,	// (0x000182b3) temp_image_control_pane_g2

0xcccd,	// (0x000182c5) temp_image_control_pane_g3_ParamLimits

0xcccd,	// (0x000182c5) temp_image_control_pane_g3

0x51cc,	// (0x000107c4) temp_image_control_pane_g4_ParamLimits

0x51cc,	// (0x000107c4) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x0001acd4) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x0001acd4) temp_image_control_pane_g

0xccad,	// (0x000182a5) main_mp3_pane_g1

0x51dd,	// (0x000107d5) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x0001acdd) main_mp3_pane_g

0xcd02,	// (0x000182fa) main_mp3_pane_t1

0xa2f4,	// (0x000158ec) main_camera_pane_g8_ParamLimits

0xa2f4,	// (0x000158ec) main_camera_pane_g8

0x2e9f,	// (0x0000e497) main_video_pane_g7_ParamLimits

0x2e9f,	// (0x0000e497) main_video_pane_g7

0xb1cc,	// (0x000167c4) main_camera2_pane_t7_ParamLimits

0xb1cc,	// (0x000167c4) main_camera2_pane_t7

0xa7ae,	// (0x00015da6) scroll_pane_cp025_ParamLimits

0xa7ae,	// (0x00015da6) scroll_pane_cp025

0xa7c2,	// (0x00015dba) scroll_pane_cp026_ParamLimits

0xa7c2,	// (0x00015dba) scroll_pane_cp026

0xa7d1,	// (0x00015dc9) wml_content_pane_ParamLimits

0x9b9f,	// (0x00015197) main_touch_calib_pane

0x529f,	// (0x00010897) main_touch_calib_pane_g1

0x52b1,	// (0x000108a9) main_touch_calib_pane_g2

0x52c3,	// (0x000108bb) main_touch_calib_pane_g3

0x52d5,	// (0x000108cd) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x0001acfb) main_touch_calib_pane_g

0x52e7,	// (0x000108df) main_touch_calib_pane_t1

0x52ff,	// (0x000108f7) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x0001ad04) main_touch_calib_pane_t

0xafb4,	// (0x000165ac) mup_progress_pane_cp02

0xafe9,	// (0x000165e1) navi_pane_g1

0xb074,	// (0x0001666c) navi_pane_mp_t3

0x9bf2,	// (0x000151ea) main_mp3_pane_ParamLimits

0x4e0b,	// (0x00010403) navi_pane_ParamLimits

0xccad,	// (0x000182a5) main_mp3_pane_g1_ParamLimits

0x51dd,	// (0x000107d5) main_mp3_pane_g2_ParamLimits

0x51e9,	// (0x000107e1) main_mp3_pane_g3_ParamLimits

0x51e9,	// (0x000107e1) main_mp3_pane_g3

0x51f5,	// (0x000107ed) main_mp3_pane_g4_ParamLimits

0x51f5,	// (0x000107ed) main_mp3_pane_g4

0xa2e6,	// (0x000158de) main_mp3_pane_g5_ParamLimits

0xa2e6,	// (0x000158de) main_mp3_pane_g5

0xccdd,	// (0x000182d5) main_mp3_pane_g6_ParamLimits

0xccdd,	// (0x000182d5) main_mp3_pane_g6

0xccea,	// (0x000182e2) main_mp3_pane_g7_ParamLimits

0xccea,	// (0x000182e2) main_mp3_pane_g7

0xccf6,	// (0x000182ee) main_mp3_pane_g8_ParamLimits

0xccf6,	// (0x000182ee) main_mp3_pane_g8

0xf6e5,	// (0x0001acdd) main_mp3_pane_g_ParamLimits

0x5201,	// (0x000107f9) main_mp3_pane_t2

0x520f,	// (0x00010807) main_mp3_pane_t3

0xcd10,	// (0x00018308) main_mp3_pane_t4

0xcd1e,	// (0x00018316) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x0001acee) main_mp3_pane_t

0xcd2c,	// (0x00018324) mup_progress_pane_cp01

0x9bb9,	// (0x000151b1) aid_zoom_text_secondary2

0xcb3f,	// (0x00018137) list_cale_ev2_pane

0xcb47,	// (0x0001813f) scroll_pane_cp023_ParamLimits

0x534d,	// (0x00010945) field_cale_ev2_pane_ParamLimits

0x534d,	// (0x00010945) field_cale_ev2_pane

0xcd34,	// (0x0001832c) field_cale_ev2_pane_g1_ParamLimits

0xcd34,	// (0x0001832c) field_cale_ev2_pane_g1

0xcd40,	// (0x00018338) field_cale_ev2_pane_g2_ParamLimits

0xcd40,	// (0x00018338) field_cale_ev2_pane_g2

0xcd58,	// (0x00018350) field_cale_ev2_pane_g3_ParamLimits

0xcd58,	// (0x00018350) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x0001ad0f) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x0001ad0f) field_cale_ev2_pane_g

0xcd7c,	// (0x00018374) field_cale_ev2_pane_t1_ParamLimits

0xcd7c,	// (0x00018374) field_cale_ev2_pane_t1

0xcd93,	// (0x0001838b) field_cale_ev2_pane_t2_ParamLimits

0xcd93,	// (0x0001838b) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x0001ad18) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x0001ad18) field_cale_ev2_pane_t

0x4467,	// (0x0000fa5f) main_postcard_pane_g5_ParamLimits

0x4467,	// (0x0000fa5f) main_postcard_pane_g5

0x447b,	// (0x0000fa73) main_postcard_pane_g6_ParamLimits

0x447b,	// (0x0000fa73) main_postcard_pane_g6

0x9bf2,	// (0x000151ea) camera2_autofocus_pane_cp_ParamLimits

0x9bf2,	// (0x000151ea) camera2_autofocus_pane_cp

0x9bf2,	// (0x000151ea) main_mup3_pane

0x53a3,	// (0x0001099b) main_mup3_pane_g1_ParamLimits

0x53a3,	// (0x0001099b) main_mup3_pane_g1

0x53c5,	// (0x000109bd) main_mup3_pane_g2_ParamLimits

0x53c5,	// (0x000109bd) main_mup3_pane_g2

0x5438,	// (0x00010a30) main_mup3_pane_g3_ParamLimits

0x5438,	// (0x00010a30) main_mup3_pane_g3

0x5476,	// (0x00010a6e) main_mup3_pane_g4_ParamLimits

0x5476,	// (0x00010a6e) main_mup3_pane_g4

0x54b4,	// (0x00010aac) main_mup3_pane_g5_ParamLimits

0x54b4,	// (0x00010aac) main_mup3_pane_g5

0x54f2,	// (0x00010aea) main_mup3_pane_g6_ParamLimits

0x54f2,	// (0x00010aea) main_mup3_pane_g6

0xa2f4,	// (0x000158ec) main_mup3_pane_g7_ParamLimits

0xa2f4,	// (0x000158ec) main_mup3_pane_g7

0x0007,

0xf730,	// (0x0001ad28) main_mup3_pane_g_ParamLimits

0xf730,	// (0x0001ad28) main_mup3_pane_g

0x5568,	// (0x00010b60) main_mup3_pane_t1_ParamLimits

0x5568,	// (0x00010b60) main_mup3_pane_t1

0x55ce,	// (0x00010bc6) main_mup3_pane_t2_ParamLimits

0x55ce,	// (0x00010bc6) main_mup3_pane_t2

0x5694,	// (0x00010c8c) main_mup3_pane_t4_ParamLimits

0x5694,	// (0x00010c8c) main_mup3_pane_t4

0x56e2,	// (0x00010cda) main_mup3_pane_t5_ParamLimits

0x56e2,	// (0x00010cda) main_mup3_pane_t5

0x5790,	// (0x00010d88) main_mup3_pane_t6_ParamLimits

0x5790,	// (0x00010d88) main_mup3_pane_t6

0x0005,

0xf741,	// (0x0001ad39) main_mup3_pane_t_ParamLimits

0xf741,	// (0x0001ad39) main_mup3_pane_t

0x5844,	// (0x00010e3c) mup3_progress_pane_ParamLimits

0x5844,	// (0x00010e3c) mup3_progress_pane

0x58c0,	// (0x00010eb8) popup_mup3_control_window_ParamLimits

0x58c0,	// (0x00010eb8) popup_mup3_control_window

0xcdde,	// (0x000183d6) popup_mup3_text_window

0x58ee,	// (0x00010ee6) mup3_progress_pane_t1

0x590c,	// (0x00010f04) mup3_progress_pane_t2

0xcde6,	// (0x000183de) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x0001ad46) mup3_progress_pane_t

0xce03,	// (0x000183fb) mup_progress_pane_cp03

0x9b9f,	// (0x00015197) bg_tb_trans_pane_cp04

0x592a,	// (0x00010f22) mup3_volume_pane

0x5932,	// (0x00010f2a) popup_mup3_control_window_g1

0x593b,	// (0x00010f33) mup3_volume_pane_g1

0x5944,	// (0x00010f3c) mup3_volume_pane_g2

0x594d,	// (0x00010f45) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x0001ad4d) mup3_volume_pane_g

0x9b9f,	// (0x00015197) bg_tb_trans_pane_cp03

0xce13,	// (0x0001840b) popup_mup3_text_window_g1

0xce1b,	// (0x00018413) popup_mup3_text_window_t1

0xa402,	// (0x000159fa) list_calc_item_pane_g1_ParamLimits

0xc857,	// (0x00017e4f) mup_volume_pane_cp_g1

0x5317,	// (0x0001090f) main_touch_calib_pane_t3

0x5329,	// (0x00010921) main_touch_calib_pane_t4

0x533b,	// (0x00010933) main_touch_calib_pane_t5

0x9ba9,	// (0x000151a1) aid_cell_size_toolbar2

0x9bb1,	// (0x000151a9) aid_popup3_width_pane

0x9bb9,	// (0x000151b1) aid_zoom_text_msg_primary

0xa615,	// (0x00015c0d) vorec_t7

0xa3c6,	// (0x000159be) bg_calc_paper_pane_g1_ParamLimits

0xa3d2,	// (0x000159ca) bg_calc_paper_pane_g2_ParamLimits

0xa3de,	// (0x000159d6) bg_calc_paper_pane_g3_ParamLimits

0xa3ea,	// (0x000159e2) bg_calc_paper_pane_g4_ParamLimits

0xa3f6,	// (0x000159ee) bg_calc_paper_pane_g5_ParamLimits

0x259f,	// (0x0000db97) bg_calc_paper_pane_g6_ParamLimits

0x25ae,	// (0x0000dba6) bg_calc_paper_pane_g7_ParamLimits

0x25bd,	// (0x0000dbb5) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0001a70b) bg_calc_paper_pane_g_ParamLimits

0x25cc,	// (0x0000dbc4) calc_bg_paper_pane_g9_ParamLimits

0x2db5,	// (0x0000e3ad) image_qvga_pane_ParamLimits

0x2db5,	// (0x0000e3ad) image_qvga_pane

0xa26c,	// (0x00015864) bg_popup_sub_pane_cp04_ParamLimits

0xb3ed,	// (0x000169e5) popup_mup_playback_window_g1_ParamLimits

0xb3f9,	// (0x000169f1) popup_mup_playback_window_t1_ParamLimits

0xb40e,	// (0x00016a06) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x0001aa80) popup_mup_playback_window_t_ParamLimits

0xa2f4,	// (0x000158ec) main_mup2_pane_g3_ParamLimits

0xa2f4,	// (0x000158ec) main_mup2_pane_g3

0x3083,	// (0x0000e67b) popup_toolbar_window_cp04

0xb7f7,	// (0x00016def) popup_call2_audio_second_window_g3_ParamLimits

0xb7f7,	// (0x00016def) popup_call2_audio_second_window_g3

0xbc35,	// (0x0001722d) popup_call2_audio_first_window_g4_ParamLimits

0xbc35,	// (0x0001722d) popup_call2_audio_first_window_g4

0xc2b4,	// (0x000178ac) popup_call2_audio_in_window_g4_ParamLimits

0xc2b4,	// (0x000178ac) popup_call2_audio_in_window_g4

0x458e,	// (0x0000fb86) aid_area_sk_bg_cut_ParamLimits

0x458e,	// (0x0000fb86) aid_area_sk_bg_cut

0xb423,	// (0x00016a1b) aid_area_sk_bg_cut_2_ParamLimits

0xb423,	// (0x00016a1b) aid_area_sk_bg_cut_2

0x9b9f,	// (0x00015197) aid_placing_details_win

0x9b9f,	// (0x00015197) aid_placing_details_win_2

0xa2e6,	// (0x000158de) camera2_autofocus_pane_g1_ParamLimits

0x230f,	// (0x0000d907) popup_fixed_preview_cale_window_ParamLimits

0x230f,	// (0x0000d907) popup_fixed_preview_cale_window

0xb0f3,	// (0x000166eb) navi_slider_pane_g3

0xb0fc,	// (0x000166f4) navi_slider_pane_g4

0xb105,	// (0x000166fd) navi_slider_pane_g5

0xb0f3,	// (0x000166eb) navi_slider_pane_g6

0xb10e,	// (0x00016706) navi_slider_pane_g7

0xb25e,	// (0x00016856) mup_scale_pane_g3

0xb267,	// (0x0001685f) mup_scale_pane_g4

0xb270,	// (0x00016868) mup_scale_pane_g5

0x4305,	// (0x0000f8fd) mup_scale_pane_g6

0x430e,	// (0x0000f906) mup_scale_pane_g7

0xa65b,	// (0x00015c53) cams2_slider_pane_g3

0xa65b,	// (0x00015c53) cams2_slider_pane_g4

0xa65b,	// (0x00015c53) cams2_slider_pane_g5

0xa65b,	// (0x00015c53) cams2_slider_pane_g6

0xa65b,	// (0x00015c53) cams2_slider_pane_g7

0xa65b,	// (0x00015c53) camera2_autofocus_pane_cp_g1

0xc66d,	// (0x00017c65) bg_popup_preview_window_pane_cp02_ParamLimits

0xc66d,	// (0x00017c65) bg_popup_preview_window_pane_cp02

0xce29,	// (0x00018421) list_fp_cale_pane_ParamLimits

0xce29,	// (0x00018421) list_fp_cale_pane

0xce35,	// (0x0001842d) popup_fixed_preview_cale_window_t1_ParamLimits

0xce35,	// (0x0001842d) popup_fixed_preview_cale_window_t1

0x5956,	// (0x00010f4e) popup_fixed_preview_cale_window_t2_ParamLimits

0x5956,	// (0x00010f4e) popup_fixed_preview_cale_window_t2

0x596b,	// (0x00010f63) popup_fixed_preview_cale_window_t3_ParamLimits

0x596b,	// (0x00010f63) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x0001ad54) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x0001ad54) popup_fixed_preview_cale_window_t

0x5980,	// (0x00010f78) list_single_fp_cale_pane_ParamLimits

0x5980,	// (0x00010f78) list_single_fp_cale_pane

0xce53,	// (0x0001844b) list_single_fp_cale_pane_g1_ParamLimits

0xce53,	// (0x0001844b) list_single_fp_cale_pane_g1

0xce5f,	// (0x00018457) list_single_fp_cale_pane_g2_ParamLimits

0xce5f,	// (0x00018457) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x0001ad5b) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x0001ad5b) list_single_fp_cale_pane_g

0xce78,	// (0x00018470) list_single_fp_cale_pane_t1_ParamLimits

0xce78,	// (0x00018470) list_single_fp_cale_pane_t1

0xce8a,	// (0x00018482) list_single_fp_cale_pane_t2_ParamLimits

0xce8a,	// (0x00018482) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x0001ad62) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x0001ad62) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9b9f,	// (0x00015197) main_dialer_pane

0x5994,	// (0x00010f8c) aid_cell_size_keypad

0x9b9f,	// (0x00015197) dialer_ne_pane

0x9b9f,	// (0x00015197) grid_dialer_command_1_pane

0x9b9f,	// (0x00015197) grid_dialer_command_2_pane

0x9b9f,	// (0x00015197) grid_dialer_keypad_pane

0x599e,	// (0x00010f96) bg_popup_call_pane_cp06_ParamLimits

0x599e,	// (0x00010f96) bg_popup_call_pane_cp06

0x599e,	// (0x00010f96) dialer_ne_clear_pane_ParamLimits

0x599e,	// (0x00010f96) dialer_ne_clear_pane

0xa65b,	// (0x00015c53) dialer_ne_pane_g1

0xb1cc,	// (0x000167c4) dialer_ne_pane_t1_ParamLimits

0xb1cc,	// (0x000167c4) dialer_ne_pane_t1

0x59ac,	// (0x00010fa4) dialer_ne_pane_t2_ParamLimits

0x59ac,	// (0x00010fa4) dialer_ne_pane_t2

0x59d4,	// (0x00010fcc) dialer_ne_pane_t3_ParamLimits

0x59d4,	// (0x00010fcc) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x0001ad67) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x0001ad67) dialer_ne_pane_t

0x59d4,	// (0x00010fcc) dialer_ne_pane_t3_copy1_ParamLimits

0x59d4,	// (0x00010fcc) dialer_ne_pane_t3_copy1

0x5a01,	// (0x00010ff9) cell_dialer_keypad_pane_ParamLimits

0x5a01,	// (0x00010ff9) cell_dialer_keypad_pane

0x5a09,	// (0x00011001) cell_dialer_command_1_pane_ParamLimits

0x5a09,	// (0x00011001) cell_dialer_command_1_pane

0x5a01,	// (0x00010ff9) cell_dialer_command_2_pane_ParamLimits

0x5a01,	// (0x00010ff9) cell_dialer_command_2_pane

0x9bf2,	// (0x000151ea) bg_button_pane_cp02_ParamLimits

0x9bf2,	// (0x000151ea) bg_button_pane_cp02

0xa2e6,	// (0x000158de) cell_dialer_keypad_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) cell_dialer_keypad_pane_g1

0x9bf2,	// (0x000151ea) bg_button_pane_cp03_ParamLimits

0x9bf2,	// (0x000151ea) bg_button_pane_cp03

0xa2e6,	// (0x000158de) cell_dialer_command_1_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) cell_dialer_command_1_pane_g1

0x9b9f,	// (0x00015197) bg_button_pane_cp04

0xa65b,	// (0x00015c53) cell_dialer_command_2_pane_g1

0x9b9f,	// (0x00015197) bg_button_pane_cp06

0xa65b,	// (0x00015c53) dialer_ne_clear_pane_g1

0xaff5,	// (0x000165ed) navi_pane_g2

0x410b,	// (0x0000f703) navi_pane_g3

0x0002,

0xf38b,	// (0x0001a983) navi_pane_g

0xb082,	// (0x0001667a) navi_pane_mv_g2

0xb0a9,	// (0x000166a1) navi_pane_mv_g5

0x4128,	// (0x0000f720) navi_pane_mv_t1

0xa37e,	// (0x00015976) main_clock2_pane

0x5a57,	// (0x0001104f) main_clock2_list_pane_ParamLimits

0x5a57,	// (0x0001104f) main_clock2_list_pane

0x5a89,	// (0x00011081) main_clock2_pane_t1_ParamLimits

0x5a89,	// (0x00011081) main_clock2_pane_t1

0x5ac3,	// (0x000110bb) main_clock2_pane_t2_ParamLimits

0x5ac3,	// (0x000110bb) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x0001ad73) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x0001ad73) main_clock2_pane_t

0x5b57,	// (0x0001114f) popup_clock_analogue_window_cp03_ParamLimits

0x5b57,	// (0x0001114f) popup_clock_analogue_window_cp03

0x5b7c,	// (0x00011174) popup_clock_digital_window_cp02_ParamLimits

0x5b7c,	// (0x00011174) popup_clock_digital_window_cp02

0x5bed,	// (0x000111e5) main_clock2_list_single_pane_ParamLimits

0x5bed,	// (0x000111e5) main_clock2_list_single_pane

0xa5e3,	// (0x00015bdb) list_highlight_pane_cp05

0xceed,	// (0x000184e5) main_clock2_list_single_pane_t1

0x3083,	// (0x0000e67b) popup_toolbar_window_cp04_ParamLimits

0xa2f4,	// (0x000158ec) camera2_autofocus_pane_g2_ParamLimits

0xa2f4,	// (0x000158ec) camera2_autofocus_pane_g2

0xa2f4,	// (0x000158ec) camera2_autofocus_pane_g3_ParamLimits

0xa2f4,	// (0x000158ec) camera2_autofocus_pane_g3

0xa2f4,	// (0x000158ec) camera2_autofocus_pane_g4_ParamLimits

0xa2f4,	// (0x000158ec) camera2_autofocus_pane_g4

0xa2f4,	// (0x000158ec) camera2_autofocus_pane_g5_ParamLimits

0xa2f4,	// (0x000158ec) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x0001acb7) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x0001acb7) camera2_autofocus_pane_g

0x5365,	// (0x0001095d) camera2_autofocus_pane_cp_g2

0x536d,	// (0x00010965) camera2_autofocus_pane_cp_g3

0x5375,	// (0x0001096d) camera2_autofocus_pane_cp_g4

0x537d,	// (0x00010975) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x0001ad1d) camera2_autofocus_pane_cp_g

0x9b9f,	// (0x00015197) popup_dialer_spcha_window

0x9b9f,	// (0x00015197) bg_popup_sub_pane_cp07

0x9b9f,	// (0x00015197) list_spcha_pane

0x9b9f,	// (0x00015197) list_single_spcha_pane_ParamLimits

0x9b9f,	// (0x00015197) list_single_spcha_pane

0x9b9f,	// (0x00015197) list_highlight_pane_cp06

0xcefb,	// (0x000184f3) list_single_spcha_pane_t1

0xc05e,	// (0x00017656) popup_call2_audio_out_window_g4_ParamLimits

0xc05e,	// (0x00017656) popup_call2_audio_out_window_g4

0x9b9f,	// (0x00015197) main_imed2_pane

0xc69b,	// (0x00017c93) popup_imed_adjust2_window

0x4cc8,	// (0x000102c0) popup_imed_trans_window_ParamLimits

0x4cc8,	// (0x000102c0) popup_imed_trans_window

0xc92a,	// (0x00017f22) popup_blid_sat_info2_window_t1

0xc938,	// (0x00017f30) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x0001ac4c) popup_blid_sat_info2_window_t

0x5c97,	// (0x0001128f) aid_size_cell_colour_35

0x5cb7,	// (0x000112af) aid_size_cell_colour_112

0x5cd7,	// (0x000112cf) aid_size_cell_effect

0xb1ee,	// (0x000167e6) bg_tb_trans_pane_cp02

0xab17,	// (0x0001610f) heading_imed_pane

0x5cf7,	// (0x000112ef) listscroll_imed_pane

0xcf0b,	// (0x00018503) heading_imed_pane_g1

0xcf13,	// (0x0001850b) heading_imed_pane_t1

0xcf21,	// (0x00018519) grid_imed_colour_35_pane_ParamLimits

0xcf21,	// (0x00018519) grid_imed_colour_35_pane

0x5d03,	// (0x000112fb) grid_imed_effect_pane

0xcf34,	// (0x0001852c) list_imed_aspect_pane

0x5d16,	// (0x0001130e) scroll_pane_cp027_ParamLimits

0x5d16,	// (0x0001130e) scroll_pane_cp027

0x5d22,	// (0x0001131a) cell_imed_effect_pane_ParamLimits

0x5d22,	// (0x0001131a) cell_imed_effect_pane

0xcf3c,	// (0x00018534) cell_imed_colour_pane_ParamLimits

0xcf3c,	// (0x00018534) cell_imed_colour_pane

0xcf76,	// (0x0001856e) cell_imed_colour_pane_g1_ParamLimits

0xcf76,	// (0x0001856e) cell_imed_colour_pane_g1

0xcf87,	// (0x0001857f) hgihlgiht_grid_pane_cp016_ParamLimits

0xcf87,	// (0x0001857f) hgihlgiht_grid_pane_cp016

0x5d47,	// (0x0001133f) cell_imed_effect_pane_g1

0x5d4f,	// (0x00011347) grid_highlight_pane_cp017

0xcf98,	// (0x00018590) list_imed_single_pane_ParamLimits

0xcf98,	// (0x00018590) list_imed_single_pane

0x9b9f,	// (0x00015197) list_highlight_pane_cp07

0xcfab,	// (0x000185a3) list_imed_aspect_pane_comp1_t1

0xb1ee,	// (0x000167e6) bg_tb_trans_pane_cp05

0xcfcb,	// (0x000185c3) popup_imed_adjust2_window_g1

0xcff2,	// (0x000185ea) popup_imed_adjust2_window_t1

0xd00a,	// (0x00018602) slider_imed_adjust_pane

0xd01e,	// (0x00018616) slider_imed_adjust_pane_g1

0xd02e,	// (0x00018626) slider_imed_adjust_pane_g2

0xd03e,	// (0x00018636) slider_imed_adjust_pane_g3

0xd04f,	// (0x00018647) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x0001ad90) slider_imed_adjust_pane_g

0x5d58,	// (0x00011350) aid_size_cell_clipart2

0x5d64,	// (0x0001135c) grid_imed_clipart_pane

0xd060,	// (0x00018658) scroll_pane_cp031

0x5d6e,	// (0x00011366) cell_imed_clipart_pane_ParamLimits

0x5d6e,	// (0x00011366) cell_imed_clipart_pane

0x5d86,	// (0x0001137e) cell_imed_clipart_pane_g1

0x9b9f,	// (0x00015197) grid_highlight_pane_cp014

0x5a6a,	// (0x00011062) main_clock2_pane_g1_ParamLimits

0x5a6a,	// (0x00011062) main_clock2_pane_g1

0x5b98,	// (0x00011190) aid_call2_pane_cp10

0x5baa,	// (0x000111a2) aid_call_pane_cp10

0xaf84,	// (0x0001657c) popup_clock_analogue_window_cp10_g1

0xaf84,	// (0x0001657c) popup_clock_analogue_window_cp10_g2

0x5bbc,	// (0x000111b4) popup_clock_analogue_window_cp10_g3

0x5bbc,	// (0x000111b4) popup_clock_analogue_window_cp10_g4

0xaf84,	// (0x0001657c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x0001ad7e) popup_clock_analogue_window_cp10_g

0x5bce,	// (0x000111c6) popup_clock_analogue_window_cp10_t1

0x5bff,	// (0x000111f7) clock_digital_number_pane_cp10_ParamLimits

0x5bff,	// (0x000111f7) clock_digital_number_pane_cp10

0x5c17,	// (0x0001120f) clock_digital_number_pane_cp11_ParamLimits

0x5c17,	// (0x0001120f) clock_digital_number_pane_cp11

0x5c2f,	// (0x00011227) clock_digital_number_pane_cp12_ParamLimits

0x5c2f,	// (0x00011227) clock_digital_number_pane_cp12

0x5c47,	// (0x0001123f) clock_digital_number_pane_cp13_ParamLimits

0x5c47,	// (0x0001123f) clock_digital_number_pane_cp13

0x5c5f,	// (0x00011257) clock_digital_separator_pane_cp10_ParamLimits

0x5c5f,	// (0x00011257) clock_digital_separator_pane_cp10

0x5c77,	// (0x0001126f) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c77,	// (0x0001126f) popup_clock_digital_window_cp02_t1

0xa264,	// (0x0001585c) clock_digital_number_pane_cp10_g1

0xa264,	// (0x0001585c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x0001ad99) clock_digital_number_pane_cp10_g

0xa264,	// (0x0001585c) clock_digital_separator_pane_cp10_g1

0xa264,	// (0x0001585c) clock_digital_separator_pane_g2_cp10

0xb0b1,	// (0x000166a9) navi_pane_vded_g4

0xb0ba,	// (0x000166b2) navi_pane_vded_g5

0xb0c3,	// (0x000166bb) navi_pane_vded_t1

0x9b9f,	// (0x00015197) main_vded_pane

0x5d8f,	// (0x00011387) main_vded_pane_g1

0x5d99,	// (0x00011391) main_vded_pane_g2

0x5da1,	// (0x00011399) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x0001ad9e) main_vded_pane_g

0x5da9,	// (0x000113a1) main_vded_pane_t1

0x5db7,	// (0x000113af) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x0001ada5) main_vded_pane_t

0x5dc5,	// (0x000113bd) vded_slider_pane

0x5dcd,	// (0x000113c5) vded_video_pane

0xd068,	// (0x00018660) vded_video_pane_g1

0x5dd5,	// (0x000113cd) vded_video_pane_g2

0xa65b,	// (0x00015c53) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x0001adaa) vded_video_pane_g

0xd072,	// (0x0001866a) vded_slider_pane_g1

0xc857,	// (0x00017e4f) vded_slider_pane_g2

0xd07b,	// (0x00018673) vded_slider_pane_g3

0xd084,	// (0x0001867c) vded_slider_pane_g4

0xd08d,	// (0x00018685) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x0001adb1) vded_slider_pane_g

0x58aa,	// (0x00010ea2) mup3_rocker_pane_ParamLimits

0x58aa,	// (0x00010ea2) mup3_rocker_pane

0x5dde,	// (0x000113d6) mup3_control_keys_pane_g1

0x5de6,	// (0x000113de) mup3_control_keys_pane_g2

0x5dee,	// (0x000113e6) mup3_control_keys_pane_g3

0x5df6,	// (0x000113ee) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x0001adbc) mup3_control_keys_pane_g

0x2342,	// (0x0000d93a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2342,	// (0x0000d93a) popup_toolbar2_fixed_window_cp01

0x58d8,	// (0x00010ed0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x58d8,	// (0x00010ed0) popup_toolbar2_fixed_window_cp02

0xb969,	// (0x00016f61) popup_call2_audio_second_window_t4_ParamLimits

0xb969,	// (0x00016f61) popup_call2_audio_second_window_t4

0xbecb,	// (0x000174c3) popup_call2_audio_first_window_t6_ParamLimits

0xbecb,	// (0x000174c3) popup_call2_audio_first_window_t6

0xc161,	// (0x00017759) popup_call2_audio_out_window_t6_ParamLimits

0xc161,	// (0x00017759) popup_call2_audio_out_window_t6

0x9b9f,	// (0x00015197) main_vitu_pane

0x9bf2,	// (0x000151ea) aid_size_cell_itu_ParamLimits

0x9bf2,	// (0x000151ea) aid_size_cell_itu

0x9bf2,	// (0x000151ea) bg_popup_window_pane_cp08_ParamLimits

0x9bf2,	// (0x000151ea) bg_popup_window_pane_cp08

0x9bf2,	// (0x000151ea) field_vitu_entry_pane_ParamLimits

0x9bf2,	// (0x000151ea) field_vitu_entry_pane

0x9bf2,	// (0x000151ea) grid_vitu_function_pane_ParamLimits

0x9bf2,	// (0x000151ea) grid_vitu_function_pane

0x9bf2,	// (0x000151ea) grid_vitu_itu_pane_ParamLimits

0x9bf2,	// (0x000151ea) grid_vitu_itu_pane

0x5e06,	// (0x000113fe) cell_vitu_itu_pane_ParamLimits

0x5e06,	// (0x000113fe) cell_vitu_itu_pane

0x9bf2,	// (0x000151ea) cell_vitu_function_pane_ParamLimits

0x9bf2,	// (0x000151ea) cell_vitu_function_pane

0x9bf2,	// (0x000151ea) bg_popup_sub_pane_cp08_ParamLimits

0x9bf2,	// (0x000151ea) bg_popup_sub_pane_cp08

0xa62d,	// (0x00015c25) field_vitu_entry_pane_t1_ParamLimits

0xa62d,	// (0x00015c25) field_vitu_entry_pane_t1

0xd096,	// (0x0001868e) field_vitu_entry_pane_t2_ParamLimits

0xd096,	// (0x0001868e) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x0001adca) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x0001adca) field_vitu_entry_pane_t

0xc78e,	// (0x00017d86) bg_button_pane_cp05_ParamLimits

0xc78e,	// (0x00017d86) bg_button_pane_cp05

0xd0b3,	// (0x000186ab) cell_vitu_itu_pane_g1

0xb1b8,	// (0x000167b0) cell_vitu_itu_pane_t1_ParamLimits

0xb1b8,	// (0x000167b0) cell_vitu_itu_pane_t1

0xb1b8,	// (0x000167b0) cell_vitu_itu_pane_t2_ParamLimits

0xb1b8,	// (0x000167b0) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x0001adcf) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x0001adcf) cell_vitu_itu_pane_t

0x9b9f,	// (0x00015197) bg_button_pane_cp07

0xa65b,	// (0x00015c53) cell_vitu_function_pane_g1

0xa324,	// (0x0001591c) main_calc_pane_g1

0x21a6,	// (0x0000d79e) aid_visual_content_pane

0x9b9f,	// (0x00015197) main_vradio_pane

0xa2e6,	// (0x000158de) main_vradio_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) main_vradio_pane_g1

0xa2f4,	// (0x000158ec) main_vradio_pane_g2_ParamLimits

0xa2f4,	// (0x000158ec) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x0001add6) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x0001add6) main_vradio_pane_g

0xa62d,	// (0x00015c25) main_vradio_pane_t1_ParamLimits

0xa62d,	// (0x00015c25) main_vradio_pane_t1

0xa62d,	// (0x00015c25) main_vradio_pane_t2_ParamLimits

0xa62d,	// (0x00015c25) main_vradio_pane_t2

0xb1cc,	// (0x000167c4) main_vradio_pane_t3_ParamLimits

0xb1cc,	// (0x000167c4) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x0001addb) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x0001addb) main_vradio_pane_t

0x9bf2,	// (0x000151ea) vradio_rocker_control_pane_ParamLimits

0x9bf2,	// (0x000151ea) vradio_rocker_control_pane

0x9bf2,	// (0x000151ea) vradio_station_info_pane_ParamLimits

0x9bf2,	// (0x000151ea) vradio_station_info_pane

0x9bf2,	// (0x000151ea) vradio_frequency_info_pane_ParamLimits

0x9bf2,	// (0x000151ea) vradio_frequency_info_pane

0xa65b,	// (0x00015c53) vradio_station_info_pane_g1

0xb1b8,	// (0x000167b0) vradio_station_info_pane_t1_ParamLimits

0xb1b8,	// (0x000167b0) vradio_station_info_pane_t1

0xb1cc,	// (0x000167c4) vradio_station_info_pane_t2_ParamLimits

0xb1cc,	// (0x000167c4) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x0001ade2) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x0001ade2) vradio_station_info_pane_t

0x9b9f,	// (0x00015197) vradio_tuning_pane

0x5e1a,	// (0x00011412) vradio_rocker_control_pane_g1

0xd0cf,	// (0x000186c7) vradio_rocker_control_pane_g2

0x5e22,	// (0x0001141a) vradio_rocker_control_pane_g3

0x5e2a,	// (0x00011422) vradio_rocker_control_pane_g4

0x5e32,	// (0x0001142a) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x0001ade7) vradio_rocker_control_pane_g

0xa65b,	// (0x00015c53) vradio_frequency_info_pane_g1

0xa62d,	// (0x00015c25) vradio_frequency_info_pane_t1_ParamLimits

0xa62d,	// (0x00015c25) vradio_frequency_info_pane_t1

0x5e3a,	// (0x00011432) vradio_tuning_pane_g1

0x5e43,	// (0x0001143b) vradio_tuning_pane_t1

0x9bc9,	// (0x000151c1) area_side_right_pane_ParamLimits

0x9bc9,	// (0x000151c1) area_side_right_pane

0xc634,	// (0x00017c2c) status_small_pane_g1

0xc63c,	// (0x00017c34) status_small_pane_g2

0xc645,	// (0x00017c3d) status_small_pane_g3

0xc64e,	// (0x00017c46) status_small_pane_g4

0x0003,

0xf5b6,	// (0x0001abae) status_small_pane_g

0xc657,	// (0x00017c4f) status_small_pane_t1

0x9b9f,	// (0x00015197) main_video3_pane

0xd0d7,	// (0x000186cf) cams_zoom_vslider_pane

0xd0df,	// (0x000186d7) image3_wide_pane_ParamLimits

0xd0df,	// (0x000186d7) image3_wide_pane

0xd0f9,	// (0x000186f1) image3_wide_small_pane

0xd103,	// (0x000186fb) main_video3_pane_g1_ParamLimits

0xd103,	// (0x000186fb) main_video3_pane_g1

0xd11f,	// (0x00018717) main_video3_pane_g2_ParamLimits

0xd11f,	// (0x00018717) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x0001adf2) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x0001adf2) main_video3_pane_g

0xd13b,	// (0x00018733) main_video3_pane_t1_ParamLimits

0xd13b,	// (0x00018733) main_video3_pane_t1

0xd166,	// (0x0001875e) main_video3_pane_t2_ParamLimits

0xd166,	// (0x0001875e) main_video3_pane_t2

0xd191,	// (0x00018789) main_video3_pane_t3_ParamLimits

0xd191,	// (0x00018789) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x0001adf7) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x0001adf7) main_video3_pane_t

0xd1bc,	// (0x000187b4) cams_zoom_vslider_pane_g1

0xd1c5,	// (0x000187bd) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x0001adfe) cams_zoom_vslider_pane_g

0xd1cd,	// (0x000187c5) small_slider_vertical_pane

0xa65b,	// (0x00015c53) small_slider_vertical_pane_g1

0xa65b,	// (0x00015c53) small_slider_vertical_pane_g2

0xd1d5,	// (0x000187cd) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x0001ae03) small_slider_vertical_pane_g

0x9b9f,	// (0x00015197) main_hwr_training_pane

0xd1de,	// (0x000187d6) hwr_training_instruct_pane_ParamLimits

0xd1de,	// (0x000187d6) hwr_training_instruct_pane

0x5e52,	// (0x0001144a) hwr_training_navi_pane_ParamLimits

0x5e52,	// (0x0001144a) hwr_training_navi_pane

0x5e69,	// (0x00011461) hwr_training_write_pane_ParamLimits

0x5e69,	// (0x00011461) hwr_training_write_pane

0x9b9f,	// (0x00015197) bg_frame_shadow_pane

0xd20d,	// (0x00018805) hwr_training_write_pane_g1

0xd215,	// (0x0001880d) hwr_training_write_pane_g2

0xd21d,	// (0x00018815) hwr_training_write_pane_g3

0xd225,	// (0x0001881d) hwr_training_write_pane_g4

0xd22d,	// (0x00018825) hwr_training_write_pane_g5

0xd235,	// (0x0001882d) hwr_training_write_pane_g6

0xd23d,	// (0x00018835) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x0001ae0a) hwr_training_write_pane_g

0xd245,	// (0x0001883d) hwr_training_navi_pane_g1_ParamLimits

0xd245,	// (0x0001883d) hwr_training_navi_pane_g1

0xd257,	// (0x0001884f) hwr_training_navi_pane_g2_ParamLimits

0xd257,	// (0x0001884f) hwr_training_navi_pane_g2

0xd269,	// (0x00018861) hwr_training_navi_pane_g3_ParamLimits

0xd269,	// (0x00018861) hwr_training_navi_pane_g3

0xd279,	// (0x00018871) hwr_training_navi_pane_g4_ParamLimits

0xd279,	// (0x00018871) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x0001ae19) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x0001ae19) hwr_training_navi_pane_g

0xd286,	// (0x0001887e) hwr_training_navi_pane_t1

0x5ea9,	// (0x000114a1) list_single_hwr_training_instruct_pane_ParamLimits

0x5ea9,	// (0x000114a1) list_single_hwr_training_instruct_pane

0xd294,	// (0x0001888c) list_single_hwr_training_instruct_pane_t1

0xca06,	// (0x00017ffe) bg_frame_shadow_pane_g1

0xd2a3,	// (0x0001889b) bg_frame_shadow_pane_g2

0xd2ab,	// (0x000188a3) bg_frame_shadow_pane_g3

0xd2b3,	// (0x000188ab) bg_frame_shadow_pane_g4

0xd2bb,	// (0x000188b3) bg_frame_shadow_pane_g5

0xd2c3,	// (0x000188bb) bg_frame_shadow_pane_g6

0xd2cb,	// (0x000188c3) bg_frame_shadow_pane_g7

0xa497,	// (0x00015a8f) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x0001ae24) bg_frame_shadow_pane_g

0x9b9f,	// (0x00015197) main_video_tele_dialer_pane

0x5ec1,	// (0x000114b9) aid_size_cell_video_keypad_ParamLimits

0x5ec1,	// (0x000114b9) aid_size_cell_video_keypad

0x5edb,	// (0x000114d3) grid_video_dialer_keypad_pane_ParamLimits

0x5edb,	// (0x000114d3) grid_video_dialer_keypad_pane

0x5f1d,	// (0x00011515) video_down_pane_cp_ParamLimits

0x5f1d,	// (0x00011515) video_down_pane_cp

0x5f4d,	// (0x00011545) cell_video_dialer_keypad_pane_ParamLimits

0x5f4d,	// (0x00011545) cell_video_dialer_keypad_pane

0xd2d3,	// (0x000188cb) bg_button_pane_cp08_ParamLimits

0xd2d3,	// (0x000188cb) bg_button_pane_cp08

0x5f6f,	// (0x00011567) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f6f,	// (0x00011567) cell_video_dialer_keypad_pane_g1

0x5894,	// (0x00010e8c) mup3_rocker2_pane_ParamLimits

0x5894,	// (0x00010e8c) mup3_rocker2_pane

0xa65b,	// (0x00015c53) mup3_rocker2_pane_g1

0x4bc1,	// (0x000101b9) main_dialer2_pane

0x9b9f,	// (0x00015197) main_mp4_pane

0xd2fd,	// (0x000188f5) main_mp4_pane_g1_ParamLimits

0xd2fd,	// (0x000188f5) main_mp4_pane_g1

0xd2fd,	// (0x000188f5) main_mp4_pane_g2_ParamLimits

0xd2fd,	// (0x000188f5) main_mp4_pane_g2

0x5faa,	// (0x000115a2) main_mp4_pane_g3_ParamLimits

0x5faa,	// (0x000115a2) main_mp4_pane_g3

0xd30b,	// (0x00018903) main_mp4_pane_g4_ParamLimits

0xd30b,	// (0x00018903) main_mp4_pane_g4

0xd339,	// (0x00018931) main_mp4_pane_g5_ParamLimits

0xd339,	// (0x00018931) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x0001ae44) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x0001ae44) main_mp4_pane_g

0xd3ad,	// (0x000189a5) main_mp4_pane_t1_ParamLimits

0xd3ad,	// (0x000189a5) main_mp4_pane_t1

0xd405,	// (0x000189fd) main_mp4_pane_t2_ParamLimits

0xd405,	// (0x000189fd) main_mp4_pane_t2

0xd457,	// (0x00018a4f) main_mp4_pane_t3_ParamLimits

0xd457,	// (0x00018a4f) main_mp4_pane_t3

0xd47d,	// (0x00018a75) main_mp4_pane_t4_ParamLimits

0xd47d,	// (0x00018a75) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x0001ae55) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x0001ae55) main_mp4_pane_t

0xd4bd,	// (0x00018ab5) mp4_progress_pane_ParamLimits

0xd4bd,	// (0x00018ab5) mp4_progress_pane

0xd501,	// (0x00018af9) mp4_rocker_pane_ParamLimits

0xd501,	// (0x00018af9) mp4_rocker_pane

0xd527,	// (0x00018b1f) mp4_progress_pane_t1

0xd53e,	// (0x00018b36) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x0001ae5e) mp4_progress_pane_t

0xd555,	// (0x00018b4d) mup_progress_pane_cp04

0xa65b,	// (0x00015c53) mp4_rocker_pane_g1

0x5fda,	// (0x000115d2) aid_cell_size_keypad2_ParamLimits

0x5fda,	// (0x000115d2) aid_cell_size_keypad2

0x5ff2,	// (0x000115ea) dialer2_ne_pane_ParamLimits

0x5ff2,	// (0x000115ea) dialer2_ne_pane

0x9bf2,	// (0x000151ea) grid_dialer2_keypad_pane_ParamLimits

0x9bf2,	// (0x000151ea) grid_dialer2_keypad_pane

0xc78e,	// (0x00017d86) bg_popup_call_pane_cp07_ParamLimits

0xc78e,	// (0x00017d86) bg_popup_call_pane_cp07

0xa310,	// (0x00015908) dialer2_ne_pane_t1_ParamLimits

0xa310,	// (0x00015908) dialer2_ne_pane_t1

0x600d,	// (0x00011605) cell_dialer2_keypad_pane_ParamLimits

0x600d,	// (0x00011605) cell_dialer2_keypad_pane

0xd561,	// (0x00018b59) bg_button_pane_pane_cp04_ParamLimits

0xd561,	// (0x00018b59) bg_button_pane_pane_cp04

0xa2e6,	// (0x000158de) cell_dialer2_keypad_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) cell_dialer2_keypad_pane_g1

0x2f71,	// (0x0000e569) aid_placing_vt_set_content_ParamLimits

0x2f71,	// (0x0000e569) aid_placing_vt_set_content

0x2f93,	// (0x0000e58b) aid_placing_vt_set_title_ParamLimits

0x2f93,	// (0x0000e58b) aid_placing_vt_set_title

0x9b9f,	// (0x00015197) main_image3_pane

0x6063,	// (0x0001165b) area_side_right_pane_cp01_ParamLimits

0x6063,	// (0x0001165b) area_side_right_pane_cp01

0xd2fd,	// (0x000188f5) main_image3_pane_g1_ParamLimits

0xd2fd,	// (0x000188f5) main_image3_pane_g1

0x607a,	// (0x00011672) main_image3_pane_g2_ParamLimits

0x607a,	// (0x00011672) main_image3_pane_g2

0x60a0,	// (0x00011698) main_image3_pane_g3_ParamLimits

0x60a0,	// (0x00011698) main_image3_pane_g3

0x60c6,	// (0x000116be) main_image3_pane_g4_ParamLimits

0x60c6,	// (0x000116be) main_image3_pane_g4

0x0003,

0xf875,	// (0x0001ae6d) main_image3_pane_g_ParamLimits

0xf875,	// (0x0001ae6d) main_image3_pane_g

0x60ec,	// (0x000116e4) main_image3_pane_t1_ParamLimits

0x60ec,	// (0x000116e4) main_image3_pane_t1

0x6144,	// (0x0001173c) main_image3_pane_t2_ParamLimits

0x6144,	// (0x0001173c) main_image3_pane_t2

0x6196,	// (0x0001178e) main_image3_pane_t3_ParamLimits

0x6196,	// (0x0001178e) main_image3_pane_t3

0x0003,

0xf87e,	// (0x0001ae76) main_image3_pane_t_ParamLimits

0xf87e,	// (0x0001ae76) main_image3_pane_t

0x9bf2,	// (0x000151ea) grid_sctrl_middle_pane_cp01_ParamLimits

0x9bf2,	// (0x000151ea) grid_sctrl_middle_pane_cp01

0x6216,	// (0x0001180e) cell_sctrl_middle_pane_cp01_ParamLimits

0x6216,	// (0x0001180e) cell_sctrl_middle_pane_cp01

0x6233,	// (0x0001182b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6233,	// (0x0001182b) cell_sctrl_middle_pane_cp01_g1

0x9b9f,	// (0x00015197) main_call4_pane

0x6249,	// (0x00011841) aid_size_button_call4_ParamLimits

0x6249,	// (0x00011841) aid_size_button_call4

0x6276,	// (0x0001186e) call4_windows_pane_ParamLimits

0x6276,	// (0x0001186e) call4_windows_pane

0x628c,	// (0x00011884) grid_call4_button_pane_ParamLimits

0x628c,	// (0x00011884) grid_call4_button_pane

0xd5c7,	// (0x00018bbf) call4_windows_conf_pane

0xd5da,	// (0x00018bd2) popup_call4_audio_first_window_ParamLimits

0xd5da,	// (0x00018bd2) popup_call4_audio_first_window

0xd61a,	// (0x00018c12) popup_call4_audio_second_window_ParamLimits

0xd61a,	// (0x00018c12) popup_call4_audio_second_window

0xd62c,	// (0x00018c24) popup_call4_audio_wait_window_ParamLimits

0xd62c,	// (0x00018c24) popup_call4_audio_wait_window

0x62b3,	// (0x000118ab) cell_call4_button_pane_ParamLimits

0x62b3,	// (0x000118ab) cell_call4_button_pane

0x62d8,	// (0x000118d0) bg_button_pane_cp09_ParamLimits

0x62d8,	// (0x000118d0) bg_button_pane_cp09

0x62e4,	// (0x000118dc) cell_call4_button_pane_g1_ParamLimits

0x62e4,	// (0x000118dc) cell_call4_button_pane_g1

0x630a,	// (0x00011902) cell_call4_button_pane_t1_ParamLimits

0x630a,	// (0x00011902) cell_call4_button_pane_t1

0xd672,	// (0x00018c6a) popup_call4_audio_conf_window_ParamLimits

0xd672,	// (0x00018c6a) popup_call4_audio_conf_window

0x58ee,	// (0x00010ee6) mup3_progress_pane_t1_ParamLimits

0x590c,	// (0x00010f04) mup3_progress_pane_t2_ParamLimits

0xcde6,	// (0x000183de) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x0001ad46) mup3_progress_pane_t_ParamLimits

0xce03,	// (0x000183fb) mup_progress_pane_cp03_ParamLimits

0x5dfe,	// (0x000113f6) mup3_control_keys_pane_g4_copy1

0xd4eb,	// (0x00018ae3) mp4_rocker2_pane_ParamLimits

0xd4eb,	// (0x00018ae3) mp4_rocker2_pane

0xd686,	// (0x00018c7e) mp4_rocker2_pane_g1

0xd68e,	// (0x00018c86) mp4_rocker2_pane_g2

0xd696,	// (0x00018c8e) mp4_rocker2_pane_g3

0xd69e,	// (0x00018c96) mp4_rocker2_pane_g4

0xd6a6,	// (0x00018c9e) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x0001ae7f) mp4_rocker2_pane_g

0x9b9f,	// (0x00015197) main_camera4_pane

0x9b9f,	// (0x00015197) main_video4_pane

0x5eef,	// (0x000114e7) main_video_tele_dialer_pane_t1_ParamLimits

0x5eef,	// (0x000114e7) main_video_tele_dialer_pane_t1

0x5f06,	// (0x000114fe) main_video_tele_dialer_pane_t2_ParamLimits

0x5f06,	// (0x000114fe) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x0001ae35) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x0001ae35) main_video_tele_dialer_pane_t

0x6348,	// (0x00011940) cam4_autofocus_pane_ParamLimits

0x6348,	// (0x00011940) cam4_autofocus_pane

0x635c,	// (0x00011954) cam4_image_uncrop_pane_ParamLimits

0x635c,	// (0x00011954) cam4_image_uncrop_pane

0x6373,	// (0x0001196b) cam4_indicators_pane_ParamLimits

0x6373,	// (0x0001196b) cam4_indicators_pane

0x6397,	// (0x0001198f) main_camera4_pane_g1_ParamLimits

0x6397,	// (0x0001198f) main_camera4_pane_g1

0x63a3,	// (0x0001199b) main_camera4_pane_g2_ParamLimits

0x63a3,	// (0x0001199b) main_camera4_pane_g2

0x63a3,	// (0x0001199b) main_camera4_pane_g3_ParamLimits

0x63a3,	// (0x0001199b) main_camera4_pane_g3

0x63af,	// (0x000119a7) main_camera4_pane_g4_ParamLimits

0x63af,	// (0x000119a7) main_camera4_pane_g4

0x63bb,	// (0x000119b3) main_camera4_pane_g5_ParamLimits

0x63bb,	// (0x000119b3) main_camera4_pane_g5

0x0005,

0xf892,	// (0x0001ae8a) main_camera4_pane_g_ParamLimits

0xf892,	// (0x0001ae8a) main_camera4_pane_g

0x63d8,	// (0x000119d0) main_camera4_pane_t1_ParamLimits

0x63d8,	// (0x000119d0) main_camera4_pane_t1

0xa2e6,	// (0x000158de) bg_tb_trans_pane_cp06

0xd6d0,	// (0x00018cc8) cam4_indicators_pane_g1

0xd6e0,	// (0x00018cd8) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x0001aea5) cam4_indicators_pane_g

0xd700,	// (0x00018cf8) cam4_indicators_pane_t1

0x642d,	// (0x00011a25) main_video4_pane_g1_ParamLimits

0x642d,	// (0x00011a25) main_video4_pane_g1

0x643f,	// (0x00011a37) main_video4_pane_g2_ParamLimits

0x643f,	// (0x00011a37) main_video4_pane_g2

0x643f,	// (0x00011a37) main_video4_pane_g3_ParamLimits

0x643f,	// (0x00011a37) main_video4_pane_g3

0x644e,	// (0x00011a46) main_video4_pane_g4_ParamLimits

0x644e,	// (0x00011a46) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x0001aeac) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x0001aeac) main_video4_pane_g

0x646c,	// (0x00011a64) vid4_indicators_pane_ParamLimits

0x646c,	// (0x00011a64) vid4_indicators_pane

0x6494,	// (0x00011a8c) video4_image_uncrop_cif_pane_ParamLimits

0x6494,	// (0x00011a8c) video4_image_uncrop_cif_pane

0x64ac,	// (0x00011aa4) video4_image_uncrop_nhd_pane_ParamLimits

0x64ac,	// (0x00011aa4) video4_image_uncrop_nhd_pane

0x64c0,	// (0x00011ab8) video4_image_uncrop_vga_pane_ParamLimits

0x64c0,	// (0x00011ab8) video4_image_uncrop_vga_pane

0x9bf2,	// (0x000151ea) bg_tb_trans_pane_cp07

0xd6d0,	// (0x00018cc8) vid4_indicators_pane_g1

0xd722,	// (0x00018d1a) vid4_indicators_pane_g2

0xd732,	// (0x00018d2a) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x0001aeb7) vid4_indicators_pane_g

0xd75f,	// (0x00018d57) vid4_indicators_pane_t1

0x64d8,	// (0x00011ad0) cam4_autofocus_pane_g1

0x64e0,	// (0x00011ad8) cam4_autofocus_pane_g2

0x64e8,	// (0x00011ae0) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x0001aec2) cam4_autofocus_pane_g

0x64f0,	// (0x00011ae8) cam4_autofocus_pane_g3_copy1

0x5f31,	// (0x00011529) video_down_pane_cp_t1

0x5f3f,	// (0x00011537) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x0001ae3a) video_down_pane_cp_t

0x9bf2,	// (0x000151ea) popup_vitu2_window_ParamLimits

0x9bf2,	// (0x000151ea) popup_vitu2_window

0x64f8,	// (0x00011af0) aid_size_cell2_itu2_ParamLimits

0x64f8,	// (0x00011af0) aid_size_cell2_itu2

0x651e,	// (0x00011b16) aid_size_cell_itu2_ParamLimits

0x651e,	// (0x00011b16) aid_size_cell_itu2

0x599e,	// (0x00010f96) bg_popup_window_pane_cp09_ParamLimits

0x599e,	// (0x00010f96) bg_popup_window_pane_cp09

0x6570,	// (0x00011b68) field_vitu2_entry_pane_ParamLimits

0x6570,	// (0x00011b68) field_vitu2_entry_pane

0x658a,	// (0x00011b82) grid_vitu2_function_pane_ParamLimits

0x658a,	// (0x00011b82) grid_vitu2_function_pane

0x65c5,	// (0x00011bbd) grid_vitu2_itu_pane_ParamLimits

0x65c5,	// (0x00011bbd) grid_vitu2_itu_pane

0x662f,	// (0x00011c27) cell_vitu2_itu_pane_ParamLimits

0x662f,	// (0x00011c27) cell_vitu2_itu_pane

0x6657,	// (0x00011c4f) cell_vitu2_function_pane_ParamLimits

0x6657,	// (0x00011c4f) cell_vitu2_function_pane

0xd779,	// (0x00018d71) bg_popup_call_pane_cp08_ParamLimits

0xd779,	// (0x00018d71) bg_popup_call_pane_cp08

0xd790,	// (0x00018d88) field_vitu2_entry_pane_g1

0xd79c,	// (0x00018d94) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x0001aec9) field_vitu2_entry_pane_g

0x6696,	// (0x00011c8e) field_vitu2_entry_pane_t1_ParamLimits

0x6696,	// (0x00011c8e) field_vitu2_entry_pane_t1

0xd7a8,	// (0x00018da0) field_vitu2_entry_pane_t2_ParamLimits

0xd7a8,	// (0x00018da0) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x0001aed0) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x0001aed0) field_vitu2_entry_pane_t

0x66c3,	// (0x00011cbb) bg_button_pane_cp010_ParamLimits

0x66c3,	// (0x00011cbb) bg_button_pane_cp010

0xd7cd,	// (0x00018dc5) cell_vitu2_itu_pane_g1

0x66df,	// (0x00011cd7) cell_vitu2_itu_pane_t1_ParamLimits

0x66df,	// (0x00011cd7) cell_vitu2_itu_pane_t1

0x673d,	// (0x00011d35) cell_vitu2_itu_pane_t2_ParamLimits

0x673d,	// (0x00011d35) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x0001aeda) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x0001aeda) cell_vitu2_itu_pane_t

0x9bf2,	// (0x000151ea) bg_button_pane_cp011

0x6829,	// (0x00011e21) cell_vitu2_function_pane_g1

0x9b9f,	// (0x00015197) main_myfav_hc_pane

0x61e2,	// (0x000117da) popup_image3_note_pane_ParamLimits

0x61e2,	// (0x000117da) popup_image3_note_pane

0x61fc,	// (0x000117f4) popup_image3_tool_bar_pane_ParamLimits

0x61fc,	// (0x000117f4) popup_image3_tool_bar_pane

0x67cb,	// (0x00011dc3) cell_vitu2_itu_pane_t3_ParamLimits

0x67cb,	// (0x00011dc3) cell_vitu2_itu_pane_t3

0x9b9f,	// (0x00015197) bg_popup_trans_pane

0xd7df,	// (0x00018dd7) grid_image3_tool_bar_pane

0xd7e9,	// (0x00018de1) bg_popup_trans_pane_g1

0xa8b7,	// (0x00015eaf) bg_popup_trans_pane_g2

0xd7f1,	// (0x00018de9) bg_popup_trans_pane_g3

0xd7f9,	// (0x00018df1) bg_popup_trans_pane_g4

0xd801,	// (0x00018df9) bg_popup_trans_pane_g5

0xd809,	// (0x00018e01) bg_popup_trans_pane_g6

0xd811,	// (0x00018e09) bg_popup_trans_pane_g7

0xd819,	// (0x00018e11) bg_popup_trans_pane_g8

0xa897,	// (0x00015e8f) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x0001aee1) bg_popup_trans_pane_g

0xd821,	// (0x00018e19) cell_image3_tool_bar_pane_ParamLimits

0xd821,	// (0x00018e19) cell_image3_tool_bar_pane

0xa65b,	// (0x00015c53) cell_image3_tool_bar_pane_g1

0x9b9f,	// (0x00015197) bg_popup_trans_pane_cp1

0xd835,	// (0x00018e2d) popup_image3_note_pane_t1

0xd843,	// (0x00018e3b) popup_image3_note_pane_t2

0xd851,	// (0x00018e49) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x0001aef4) popup_image3_note_pane_t

0xd85f,	// (0x00018e57) popup_image3_note_pane_t3_copy1

0x683c,	// (0x00011e34) bg_myfav_hc_instruction_pane_ParamLimits

0x683c,	// (0x00011e34) bg_myfav_hc_instruction_pane

0x684e,	// (0x00011e46) cell_myfav_contact_pane_ParamLimits

0x684e,	// (0x00011e46) cell_myfav_contact_pane

0x6868,	// (0x00011e60) cell_myfav_contact_pane_cp1_ParamLimits

0x6868,	// (0x00011e60) cell_myfav_contact_pane_cp1

0x687e,	// (0x00011e76) cell_myfav_contact_pane_cp2_ParamLimits

0x687e,	// (0x00011e76) cell_myfav_contact_pane_cp2

0x6894,	// (0x00011e8c) cell_myfav_contact_pane_cp3_ParamLimits

0x6894,	// (0x00011e8c) cell_myfav_contact_pane_cp3

0x68a9,	// (0x00011ea1) cell_myfav_contact_pane_cp4_ParamLimits

0x68a9,	// (0x00011ea1) cell_myfav_contact_pane_cp4

0x68bd,	// (0x00011eb5) cell_myfav_contact_pane_cp5_ParamLimits

0x68bd,	// (0x00011eb5) cell_myfav_contact_pane_cp5

0x68d1,	// (0x00011ec9) cell_myfav_contact_pane_cp6_ParamLimits

0x68d1,	// (0x00011ec9) cell_myfav_contact_pane_cp6

0x68e5,	// (0x00011edd) cell_myfav_contact_pane_cp7_ParamLimits

0x68e5,	// (0x00011edd) cell_myfav_contact_pane_cp7

0xd86d,	// (0x00018e65) listscroll_gen_pane_cp05

0x68fd,	// (0x00011ef5) main_myfav_hc_pane_g1_ParamLimits

0x68fd,	// (0x00011ef5) main_myfav_hc_pane_g1

0x6913,	// (0x00011f0b) main_myfav_hc_pane_g2_ParamLimits

0x6913,	// (0x00011f0b) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x0001aefb) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x0001aefb) main_myfav_hc_pane_g

0x693d,	// (0x00011f35) main_myfav_hc_pane_t1_ParamLimits

0x693d,	// (0x00011f35) main_myfav_hc_pane_t1

0xd876,	// (0x00018e6e) main_myfav_hc_pane_t2_ParamLimits

0xd876,	// (0x00018e6e) main_myfav_hc_pane_t2

0xd888,	// (0x00018e80) main_myfav_hc_pane_t3_ParamLimits

0xd888,	// (0x00018e80) main_myfav_hc_pane_t3

0x6952,	// (0x00011f4a) main_myfav_hc_pane_t4_ParamLimits

0x6952,	// (0x00011f4a) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x0001af02) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x0001af02) main_myfav_hc_pane_t

0xa65b,	// (0x00015c53) bg_myfav_hc_instruction_pane_g1

0xd89a,	// (0x00018e92) cell_myfav_contact_pane_g1_ParamLimits

0xd89a,	// (0x00018e92) cell_myfav_contact_pane_g1

0xd89a,	// (0x00018e92) cell_myfav_contact_pane_g2_ParamLimits

0xd89a,	// (0x00018e92) cell_myfav_contact_pane_g2

0xd8a6,	// (0x00018e9e) cell_myfav_contact_pane_g3_ParamLimits

0xd8a6,	// (0x00018e9e) cell_myfav_contact_pane_g3

0xa2f4,	// (0x000158ec) cell_myfav_contact_pane_g4_ParamLimits

0xa2f4,	// (0x000158ec) cell_myfav_contact_pane_g4

0xd8b3,	// (0x00018eab) cell_myfav_contact_pane_g5_ParamLimits

0xd8b3,	// (0x00018eab) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x0001af0d) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x0001af0d) cell_myfav_contact_pane_g

0x6929,	// (0x00011f21) main_myfav_hc_pane_g3_ParamLimits

0x6929,	// (0x00011f21) main_myfav_hc_pane_g3

0x22c8,	// (0x0000d8c0) popup_adpt_find_window

0x6976,	// (0x00011f6e) afind_page_pane_ParamLimits

0x6976,	// (0x00011f6e) afind_page_pane

0x698b,	// (0x00011f83) aid_size_cell_afind_ParamLimits

0x698b,	// (0x00011f83) aid_size_cell_afind

0x69a9,	// (0x00011fa1) bg_popup_sub_pane_cp09_ParamLimits

0x69a9,	// (0x00011fa1) bg_popup_sub_pane_cp09

0x69b6,	// (0x00011fae) find_pane_cp01_ParamLimits

0x69b6,	// (0x00011fae) find_pane_cp01

0xd8bf,	// (0x00018eb7) grid_afind_control_pane_ParamLimits

0xd8bf,	// (0x00018eb7) grid_afind_control_pane

0x69c3,	// (0x00011fbb) grid_afind_pane_ParamLimits

0x69c3,	// (0x00011fbb) grid_afind_pane

0x69e1,	// (0x00011fd9) cell_afind_pane_ParamLimits

0x69e1,	// (0x00011fd9) cell_afind_pane

0xa65b,	// (0x00015c53) afind_page_pane_g1

0x6a30,	// (0x00012028) afind_page_pane_g2

0x6a39,	// (0x00012031) afind_page_pane_g3

0x0002,

0xf920,	// (0x0001af18) afind_page_pane_g

0x6a42,	// (0x0001203a) afind_page_pane_t1

0xd8d3,	// (0x00018ecb) cell_afind_grid_control_pane_ParamLimits

0xd8d3,	// (0x00018ecb) cell_afind_grid_control_pane

0xd8e2,	// (0x00018eda) bg_button_pane_cp69_ParamLimits

0xd8e2,	// (0x00018eda) bg_button_pane_cp69

0x6a62,	// (0x0001205a) cell_afind_pane_g1_ParamLimits

0x6a62,	// (0x0001205a) cell_afind_pane_g1

0x6a6f,	// (0x00012067) cell_afind_pane_t1_ParamLimits

0x6a6f,	// (0x00012067) cell_afind_pane_t1

0xa665,	// (0x00015c5d) bg_button_pane_cp72

0xd8ee,	// (0x00018ee6) cell_afind_grid_control_pane_g1

0x4745,	// (0x0000fd3d) aid_image_placing_area_ParamLimits

0x4745,	// (0x0000fd3d) aid_image_placing_area

0xa2e6,	// (0x000158de) field_vitu_entry_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) field_vitu_entry_pane_g1

0xa2e6,	// (0x000158de) field_vitu_entry_pane_g2_ParamLimits

0xa2e6,	// (0x000158de) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x0001adc5) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x0001adc5) field_vitu_entry_pane_g

0xd0b3,	// (0x000186ab) cell_vitu_itu_pane_g1_ParamLimits

0xd096,	// (0x0001868e) cell_vitu_itu_pane_t3_ParamLimits

0xd096,	// (0x0001868e) cell_vitu_itu_pane_t3

0xd527,	// (0x00018b1f) mp4_progress_pane_t1_ParamLimits

0xd53e,	// (0x00018b36) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x0001ae5e) mp4_progress_pane_t_ParamLimits

0xd555,	// (0x00018b4d) mup_progress_pane_cp04_ParamLimits

0x6964,	// (0x00011f5c) main_myfav_hc_pane_t5_ParamLimits

0x6964,	// (0x00011f5c) main_myfav_hc_pane_t5

0x9bc1,	// (0x000151b9) aid_zoom_text_primary

0x22c8,	// (0x0000d8c0) popup_adpt_find_window_ParamLimits

0x9bf2,	// (0x000151ea) main_cam_set_pane

0x6385,	// (0x0001197d) cam4_zoom_pane_ParamLimits

0x6385,	// (0x0001197d) cam4_zoom_pane

0x6a81,	// (0x00012079) main_cam_set_pane_g1_ParamLimits

0x6a81,	// (0x00012079) main_cam_set_pane_g1

0x6a8f,	// (0x00012087) main_cam_set_pane_g2_ParamLimits

0x6a8f,	// (0x00012087) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x0001af1f) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x0001af1f) main_cam_set_pane_g

0x6aae,	// (0x000120a6) main_cam_set_pane_t1_ParamLimits

0x6aae,	// (0x000120a6) main_cam_set_pane_t1

0x6ac0,	// (0x000120b8) main_cset_listscroll_pane_ParamLimits

0x6ac0,	// (0x000120b8) main_cset_listscroll_pane

0x6ae2,	// (0x000120da) main_cset_slider_pane_ParamLimits

0x6ae2,	// (0x000120da) main_cset_slider_pane

0xd8ff,	// (0x00018ef7) main_cset_list_pane_ParamLimits

0xd8ff,	// (0x00018ef7) main_cset_list_pane

0xd90f,	// (0x00018f07) scroll_pane_cp028

0x6b06,	// (0x000120fe) aid_area_touch_slider

0x6b22,	// (0x0001211a) cset_slider_pane

0x6b45,	// (0x0001213d) main_cset_slider_pane_g1

0x6b5a,	// (0x00012152) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x0001af24) main_cset_slider_pane_g

0xd948,	// (0x00018f40) main_cset_slider_pane_t1

0x6c16,	// (0x0001220e) main_cset_slider_pane_t2

0x6c30,	// (0x00012228) main_cset_slider_pane_t3

0x6c4a,	// (0x00012242) main_cset_slider_pane_t4

0x6c64,	// (0x0001225c) main_cset_slider_pane_t5

0x6c7e,	// (0x00012276) main_cset_slider_pane_t6

0x6c93,	// (0x0001228b) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x0001af49) main_cset_slider_pane_t

0x6d97,	// (0x0001238f) cset_list_set_pane_ParamLimits

0x6d97,	// (0x0001238f) cset_list_set_pane

0xd9e2,	// (0x00018fda) aid_position_infowindow_above

0xd9ea,	// (0x00018fe2) aid_position_infowindow_below

0x6da8,	// (0x000123a0) cset_list_set_pane_g1_ParamLimits

0x6da8,	// (0x000123a0) cset_list_set_pane_g1

0x6db4,	// (0x000123ac) cset_list_set_pane_g3_ParamLimits

0x6db4,	// (0x000123ac) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x0001af68) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x0001af68) cset_list_set_pane_g

0x6dc3,	// (0x000123bb) cset_list_set_pane_t1_ParamLimits

0x6dc3,	// (0x000123bb) cset_list_set_pane_t1

0x9bf2,	// (0x000151ea) list_highlight_pane_cp021_ParamLimits

0x9bf2,	// (0x000151ea) list_highlight_pane_cp021

0xb25e,	// (0x00016856) cset_slider_pane_g1

0xb270,	// (0x00016868) cset_slider_pane_g2

0xb267,	// (0x0001685f) cset_slider_pane_g3

0x0002,

0xf975,	// (0x0001af6d) cset_slider_pane_g

0xd9f2,	// (0x00018fea) aid_area_touch_cam4_zoom

0xd9fa,	// (0x00018ff2) cam4_zoom_cont_pane

0xda02,	// (0x00018ffa) cam4_zoom_pane_g1

0xda0a,	// (0x00019002) cam4_zoom_pane_g2

0x6dd8,	// (0x000123d0) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x0001af74) cam4_zoom_pane_g

0xda12,	// (0x0001900a) cam4_zoom_cont_pane_g1

0xda1b,	// (0x00019013) cam4_zoom_cont_pane_g2

0xda24,	// (0x0001901c) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x0001af7b) cam4_zoom_cont_pane_g

0x6267,	// (0x0001185f) call4_image_pane_ParamLimits

0x6267,	// (0x0001185f) call4_image_pane

0xd5c7,	// (0x00018bbf) call4_windows_conf_pane_ParamLimits

0xd5fa,	// (0x00018bf2) popup_call4_audio_in_window_ParamLimits

0xd5fa,	// (0x00018bf2) popup_call4_audio_in_window

0x9b9f,	// (0x00015197) bg_popup_call2_act_pane_cp02

0xd66a,	// (0x00018c62) call4_list_conf_pane

0xa65b,	// (0x00015c53) call4_image_pane_g1

0xa65b,	// (0x00015c53) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x0001a9e7) call4_image_pane_g

0xda2d,	// (0x00019025) list_single_graphic_popup_conf4_pane_ParamLimits

0xda2d,	// (0x00019025) list_single_graphic_popup_conf4_pane

0x9b9f,	// (0x00015197) list_highlight_pane_cp022

0xda3a,	// (0x00019032) list_single_graphic_popup_conf4_pane_g1

0xae52,	// (0x0001644a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x0001af82) list_single_graphic_popup_conf4_pane_g

0xda42,	// (0x0001903a) list_single_graphic_popup_conf4_pane_t1

0x309d,	// (0x0000e695) popup_vtel_slider_window_ParamLimits

0x309d,	// (0x0000e695) popup_vtel_slider_window

0xb1cc,	// (0x000167c4) dialer2_ne_pane_t2_ParamLimits

0xb1cc,	// (0x000167c4) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x0001ae63) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x0001ae63) dialer2_ne_pane_t

0xc78e,	// (0x00017d86) bg_popup_sub_pane_cp010_ParamLimits

0xc78e,	// (0x00017d86) bg_popup_sub_pane_cp010

0x6de0,	// (0x000123d8) popup_vtel_slider_window_g1_ParamLimits

0x6de0,	// (0x000123d8) popup_vtel_slider_window_g1

0x6df3,	// (0x000123eb) popup_vtel_slider_window_g2_ParamLimits

0x6df3,	// (0x000123eb) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x0001af87) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x0001af87) popup_vtel_slider_window_g

0x6e47,	// (0x0001243f) vtel_slider_pane_ParamLimits

0x6e47,	// (0x0001243f) vtel_slider_pane

0x6e69,	// (0x00012461) vtel_slider_pane_g1_ParamLimits

0x6e69,	// (0x00012461) vtel_slider_pane_g1

0x6e7d,	// (0x00012475) vtel_slider_pane_g2_ParamLimits

0x6e7d,	// (0x00012475) vtel_slider_pane_g2

0x6e95,	// (0x0001248d) vtel_slider_pane_g3_ParamLimits

0x6e95,	// (0x0001248d) vtel_slider_pane_g3

0x6e69,	// (0x00012461) vtel_slider_pane_g4_ParamLimits

0x6e69,	// (0x00012461) vtel_slider_pane_g4

0x6eab,	// (0x000124a3) vtel_slider_pane_g5_ParamLimits

0x6eab,	// (0x000124a3) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x0001af90) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x0001af90) vtel_slider_pane_g

0x9bf2,	// (0x000151ea) main_gallery2_pane

0x654a,	// (0x00011b42) aid_size_row_itut2_dropdow_list_ParamLimits

0x654a,	// (0x00011b42) aid_size_row_itut2_dropdow_list

0x65a6,	// (0x00011b9e) grid_vitu2_function_top_pane_ParamLimits

0x65a6,	// (0x00011b9e) grid_vitu2_function_top_pane

0x65ee,	// (0x00011be6) popup_vitu2_dropdown_list_window_ParamLimits

0x65ee,	// (0x00011be6) popup_vitu2_dropdown_list_window

0x660d,	// (0x00011c05) popup_vitu2_match_list_window

0x6ec1,	// (0x000124b9) cell_vitu2_function_top_pane_ParamLimits

0x6ec1,	// (0x000124b9) cell_vitu2_function_top_pane

0x6ed9,	// (0x000124d1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ed9,	// (0x000124d1) cell_vitu2_function_top_pane_cp01

0x6ef5,	// (0x000124ed) cell_vitu2_function_top_wide_pane_ParamLimits

0x6ef5,	// (0x000124ed) cell_vitu2_function_top_wide_pane

0x9bf2,	// (0x000151ea) bg_button_pane_cp012

0x6f12,	// (0x0001250a) cell_vitu2_function_top_pane_g1

0xda58,	// (0x00019050) bg_button_pane_cp013_ParamLimits

0xda58,	// (0x00019050) bg_button_pane_cp013

0x6f26,	// (0x0001251e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f26,	// (0x0001251e) cell_vitu2_function_top_wide_pane_g1

0x9bf2,	// (0x000151ea) bg_popup_sub_pane_cp20

0x6f3e,	// (0x00012536) list_vitu2_match_list_pane

0xd7e9,	// (0x00018de1) bg_popup_sub_pane_cp20_g1

0xd7f1,	// (0x00018de9) bg_popup_sub_pane_cp20_g2

0xa8b7,	// (0x00015eaf) bg_popup_sub_pane_cp20_g3

0xd7f9,	// (0x00018df1) bg_popup_sub_pane_cp20_g4

0xa897,	// (0x00015e8f) bg_popup_sub_pane_cp20_g5

0xda74,	// (0x0001906c) bg_popup_sub_pane_cp20_g6

0xd809,	// (0x00018e01) bg_popup_sub_pane_cp20_g7

0xd811,	// (0x00018e09) bg_popup_sub_pane_cp20_g8

0xd819,	// (0x00018e11) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x0001af9b) bg_popup_sub_pane_cp20_g

0xda7c,	// (0x00019074) list_vitu2_match_list_item_pane_ParamLimits

0xda7c,	// (0x00019074) list_vitu2_match_list_item_pane

0xda8e,	// (0x00019086) list_vitu2_match_list_item_pane_t1

0x9b9f,	// (0x00015197) bg_popup_sub_pane_cp21

0xad21,	// (0x00016319) grid_vitu2_dropdown_list_pane

0x6f5c,	// (0x00012554) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f5c,	// (0x00012554) cell_vitu2_dropdown_list_char_pane

0x6f7d,	// (0x00012575) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f7d,	// (0x00012575) cell_vitu2_dropdown_list_ctrl_pane

0xdaa9,	// (0x000190a1) cell_vitu2_dropdown_list_char_pane_g1

0xdab2,	// (0x000190aa) cell_vitu2_dropdown_list_char_pane_g2

0xdabb,	// (0x000190b3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x0001afb8) cell_vitu2_dropdown_list_char_pane_g

0x6fa7,	// (0x0001259f) cell_vitu2_dropdown_list_char_pane_t1

0x6fb5,	// (0x000125ad) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6fb5,	// (0x000125ad) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6fc2,	// (0x000125ba) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6fc2,	// (0x000125ba) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6fcf,	// (0x000125c7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6fcf,	// (0x000125c7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6fdc,	// (0x000125d4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6fdc,	// (0x000125d4) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa2e6,	// (0x000158de) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa2e6,	// (0x000158de) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x0001afbf) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x0001afbf) cell_vitu2_dropdown_list_ctrl_pane_g

0x6ff8,	// (0x000125f0) aid_size_cell_gallery2_ParamLimits

0x6ff8,	// (0x000125f0) aid_size_cell_gallery2

0x7016,	// (0x0001260e) grid_gallery2_pane_ParamLimits

0x7016,	// (0x0001260e) grid_gallery2_pane

0x5d16,	// (0x0001130e) scroll_pane_cp029_ParamLimits

0x5d16,	// (0x0001130e) scroll_pane_cp029

0x702a,	// (0x00012622) cell_gallery2_pane_ParamLimits

0x702a,	// (0x00012622) cell_gallery2_pane

0xdac4,	// (0x000190bc) cell_gallery2_pane_g2

0x7083,	// (0x0001267b) cell_gallery2_pane_g3

0xdacc,	// (0x000190c4) cell_gallery2_pane_g4

0xdad4,	// (0x000190cc) cell_gallery2_pane_g5

0xa5e3,	// (0x00015bdb) grid_highlight_pane_cp10

0x660d,	// (0x00011c05) popup_vitu2_match_list_window_ParamLimits

0x661e,	// (0x00011c16) popup_vitu2_query_window_ParamLimits

0x661e,	// (0x00011c16) popup_vitu2_query_window

0x9b9f,	// (0x00015197) bg_vitu2_candi_button_pane

0xdaa9,	// (0x000190a1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdab2,	// (0x000190aa) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdabb,	// (0x000190b3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x708b,	// (0x00012683) bg_button_pane_cp015

0x709b,	// (0x00012693) bg_button_pane_cp016

0x70ad,	// (0x000126a5) bg_button_pane_cp017

0xb1ee,	// (0x000167e6) bg_popup_sub_pane_cp22

0xdadc,	// (0x000190d4) popup_vitu2_query_window_g1

0x70ee,	// (0x000126e6) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x0001afca) popup_vitu2_query_window_g

0x7109,	// (0x00012701) popup_vitu2_query_window_t1_ParamLimits

0x7109,	// (0x00012701) popup_vitu2_query_window_t1

0x713c,	// (0x00012734) popup_vitu2_query_window_t2_ParamLimits

0x713c,	// (0x00012734) popup_vitu2_query_window_t2

0x714e,	// (0x00012746) popup_vitu2_query_window_t3_ParamLimits

0x714e,	// (0x00012746) popup_vitu2_query_window_t3

0x7176,	// (0x0001276e) popup_vitu2_query_window_t4_ParamLimits

0x7176,	// (0x0001276e) popup_vitu2_query_window_t4

0x7193,	// (0x0001278b) popup_vitu2_query_window_t5_ParamLimits

0x7193,	// (0x0001278b) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x0001afd1) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x0001afd1) popup_vitu2_query_window_t

0xd8f7,	// (0x00018eef) main_cset_text_pane

0x6b06,	// (0x000120fe) aid_area_touch_slider_ParamLimits

0x6b22,	// (0x0001211a) cset_slider_pane_ParamLimits

0x6b45,	// (0x0001213d) main_cset_slider_pane_g1_ParamLimits

0x6b5a,	// (0x00012152) main_cset_slider_pane_g2_ParamLimits

0xd918,	// (0x00018f10) main_cset_slider_pane_g3_ParamLimits

0xd918,	// (0x00018f10) main_cset_slider_pane_g3

0x6b6f,	// (0x00012167) main_cset_slider_pane_g4_ParamLimits

0x6b6f,	// (0x00012167) main_cset_slider_pane_g4

0x6b7e,	// (0x00012176) main_cset_slider_pane_g5_ParamLimits

0x6b7e,	// (0x00012176) main_cset_slider_pane_g5

0x6b8a,	// (0x00012182) main_cset_slider_pane_g6_ParamLimits

0x6b8a,	// (0x00012182) main_cset_slider_pane_g6

0xf92c,	// (0x0001af24) main_cset_slider_pane_g_ParamLimits

0xd948,	// (0x00018f40) main_cset_slider_pane_t1_ParamLimits

0x6c16,	// (0x0001220e) main_cset_slider_pane_t2_ParamLimits

0x6c30,	// (0x00012228) main_cset_slider_pane_t3_ParamLimits

0x6c4a,	// (0x00012242) main_cset_slider_pane_t4_ParamLimits

0x6c64,	// (0x0001225c) main_cset_slider_pane_t5_ParamLimits

0x6c7e,	// (0x00012276) main_cset_slider_pane_t6_ParamLimits

0x6c93,	// (0x0001228b) main_cset_slider_pane_t7_ParamLimits

0x6cbd,	// (0x000122b5) main_cset_slider_pane_t8_ParamLimits

0x6cbd,	// (0x000122b5) main_cset_slider_pane_t8

0x6ce5,	// (0x000122dd) main_cset_slider_pane_t9_ParamLimits

0x6ce5,	// (0x000122dd) main_cset_slider_pane_t9

0x6d0d,	// (0x00012305) main_cset_slider_pane_t10_ParamLimits

0x6d0d,	// (0x00012305) main_cset_slider_pane_t10

0x6d35,	// (0x0001232d) main_cset_slider_pane_t11_ParamLimits

0x6d35,	// (0x0001232d) main_cset_slider_pane_t11

0x6d5d,	// (0x00012355) main_cset_slider_pane_t12_ParamLimits

0x6d5d,	// (0x00012355) main_cset_slider_pane_t12

0x6d7a,	// (0x00012372) main_cset_slider_pane_t13_ParamLimits

0x6d7a,	// (0x00012372) main_cset_slider_pane_t13

0xf951,	// (0x0001af49) main_cset_slider_pane_t_ParamLimits

0x9b9f,	// (0x00015197) bg_popup_sub_pane_cp011

0xdae8,	// (0x000190e0) main_cset_text_pane_g1

0xdaf0,	// (0x000190e8) main_cset_text_pane_t1

0xdafe,	// (0x000190f6) main_cset_text_pane_t2

0xdb0c,	// (0x00019104) main_cset_text_pane_t3

0xdb1a,	// (0x00019112) main_cset_text_pane_t4

0xdb28,	// (0x00019120) main_cset_text_pane_t5

0xdb36,	// (0x0001912e) main_cset_text_pane_t6

0xdb44,	// (0x0001913c) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x0001afe0) main_cset_text_pane_t

0x9b9f,	// (0x00015197) main_cam4_burst_pane

0x9b9f,	// (0x00015197) main_cam5_pane

0x6a50,	// (0x00012048) bg_button_pane_cp019

0x6a59,	// (0x00012051) bg_button_pane_cp020

0xd924,	// (0x00018f1c) main_cset_slider_pane_g7_ParamLimits

0xd924,	// (0x00018f1c) main_cset_slider_pane_g7

0xd930,	// (0x00018f28) main_cset_slider_pane_g8_ParamLimits

0xd930,	// (0x00018f28) main_cset_slider_pane_g8

0x6b9e,	// (0x00012196) main_cset_slider_pane_g9_ParamLimits

0x6b9e,	// (0x00012196) main_cset_slider_pane_g9

0x6baa,	// (0x000121a2) main_cset_slider_pane_g10_ParamLimits

0x6baa,	// (0x000121a2) main_cset_slider_pane_g10

0x6bb6,	// (0x000121ae) main_cset_slider_pane_g11_ParamLimits

0x6bb6,	// (0x000121ae) main_cset_slider_pane_g11

0x6bc2,	// (0x000121ba) main_cset_slider_pane_g12_ParamLimits

0x6bc2,	// (0x000121ba) main_cset_slider_pane_g12

0x6bce,	// (0x000121c6) main_cset_slider_pane_g13_ParamLimits

0x6bce,	// (0x000121c6) main_cset_slider_pane_g13

0x6bda,	// (0x000121d2) main_cset_slider_pane_g14_ParamLimits

0x6bda,	// (0x000121d2) main_cset_slider_pane_g14

0x6be6,	// (0x000121de) main_cset_slider_pane_g15_ParamLimits

0x6be6,	// (0x000121de) main_cset_slider_pane_g15

0xd970,	// (0x00018f68) main_cset_slider_pane_t14_ParamLimits

0xd970,	// (0x00018f68) main_cset_slider_pane_t14

0xd9a9,	// (0x00018fa1) main_cset_slider_pane_t15_ParamLimits

0xd9a9,	// (0x00018fa1) main_cset_slider_pane_t15

0x7206,	// (0x000127fe) aid_cam4_burst_size_cell_ParamLimits

0x7206,	// (0x000127fe) aid_cam4_burst_size_cell

0x7226,	// (0x0001281e) grid_cam4_burst_pane_ParamLimits

0x7226,	// (0x0001281e) grid_cam4_burst_pane

0x724c,	// (0x00012844) linegrid_cam4_burst_pane_ParamLimits

0x724c,	// (0x00012844) linegrid_cam4_burst_pane

0x726e,	// (0x00012866) scroll_pane_cp30_ParamLimits

0x726e,	// (0x00012866) scroll_pane_cp30

0x727a,	// (0x00012872) cell_cam4_burst_pane_ParamLimits

0x727a,	// (0x00012872) cell_cam4_burst_pane

0xdb52,	// (0x0001914a) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb52,	// (0x0001914a) linegrid_cam4_burst_pane_g1

0x72c1,	// (0x000128b9) linegrid_cam4_burst_pane_g2_ParamLimits

0x72c1,	// (0x000128b9) linegrid_cam4_burst_pane_g2

0xdb5f,	// (0x00019157) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb5f,	// (0x00019157) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x0001afef) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x0001afef) linegrid_cam4_burst_pane_g

0x72d2,	// (0x000128ca) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x72d2,	// (0x000128ca) linegrid_cam4_burst_pane_g3_copy1

0xdb6c,	// (0x00019164) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb6c,	// (0x00019164) linegrid_cam4_burst_pane_g4

0x72ec,	// (0x000128e4) linegrid_cam4_burst_pane_g5_ParamLimits

0x72ec,	// (0x000128e4) linegrid_cam4_burst_pane_g5

0x72fd,	// (0x000128f5) linegrid_cam4_burst_pane_g6_ParamLimits

0x72fd,	// (0x000128f5) linegrid_cam4_burst_pane_g6

0xdb79,	// (0x00019171) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb79,	// (0x00019171) linegrid_cam4_burst_pane_g7

0x730e,	// (0x00012906) cell_cam4_burst_pane_g1

0xdb92,	// (0x0001918a) main_cam5_pane_t1_ParamLimits

0xdb92,	// (0x0001918a) main_cam5_pane_t1

0xdba4,	// (0x0001919c) main_cam5_pane_t2_ParamLimits

0xdba4,	// (0x0001919c) main_cam5_pane_t2

0xdbb6,	// (0x000191ae) main_cam5_pane_t3_ParamLimits

0xdbb6,	// (0x000191ae) main_cam5_pane_t3

0xdbc8,	// (0x000191c0) main_cam5_pane_t4_ParamLimits

0xdbc8,	// (0x000191c0) main_cam5_pane_t4

0xdbde,	// (0x000191d6) main_cam5_pane_t5_ParamLimits

0xdbde,	// (0x000191d6) main_cam5_pane_t5

0xdbf0,	// (0x000191e8) main_cam5_pane_t6_ParamLimits

0xdbf0,	// (0x000191e8) main_cam5_pane_t6

0xdc02,	// (0x000191fa) main_cam5_pane_t7_ParamLimits

0xdc02,	// (0x000191fa) main_cam5_pane_t7

0xdc14,	// (0x0001920c) main_cam5_pane_t8_ParamLimits

0xdc14,	// (0x0001920c) main_cam5_pane_t8

0xdc30,	// (0x00019228) main_cam5_pane_t9_ParamLimits

0xdc30,	// (0x00019228) main_cam5_pane_t9

0xdc42,	// (0x0001923a) main_cam5_pane_t10_ParamLimits

0xdc42,	// (0x0001923a) main_cam5_pane_t10

0xdc54,	// (0x0001924c) main_cam5_pane_t11_ParamLimits

0xdc54,	// (0x0001924c) main_cam5_pane_t11

0xdc66,	// (0x0001925e) main_cam5_pane_t12_ParamLimits

0xdc66,	// (0x0001925e) main_cam5_pane_t12

0xdc7b,	// (0x00019273) main_cam5_pane_t13_ParamLimits

0xdc7b,	// (0x00019273) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x0001affb) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x0001affb) main_cam5_pane_t

0x2326,	// (0x0000d91e) popup_scut_keymap_window_ParamLimits

0x2326,	// (0x0000d91e) popup_scut_keymap_window

0x7323,	// (0x0001291b) aid_size_cell_brow_shortcut

0xa5e3,	// (0x00015bdb) bg_popup_window_pane_cp010

0x732f,	// (0x00012927) grid_scut_pane

0x7339,	// (0x00012931) cell_scut_pane_ParamLimits

0x7339,	// (0x00012931) cell_scut_pane

0x734e,	// (0x00012946) cell_scut_pane_g1

0xdc98,	// (0x00019290) cell_scut_pane_t1

0xdca7,	// (0x0001929f) cell_scut_pane_t2

0x7357,	// (0x0001294f) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x0001b016) cell_scut_pane_t

0x5501,	// (0x00010af9) main_mup3_pane_g8_ParamLimits

0x5501,	// (0x00010af9) main_mup3_pane_g8

0x655e,	// (0x00011b56) area_vitu2_query_pane_ParamLimits

0x655e,	// (0x00011b56) area_vitu2_query_pane

0x70bf,	// (0x000126b7) input_focus_pane_cp08

0xdcb6,	// (0x000192ae) area_vitu2_query_pane_g1

0x7365,	// (0x0001295d) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x0001b01d) area_vitu2_query_pane_g

0x7374,	// (0x0001296c) area_vitu2_query_pane_t1_ParamLimits

0x7374,	// (0x0001296c) area_vitu2_query_pane_t1

0x7386,	// (0x0001297e) area_vitu2_query_pane_t2_ParamLimits

0x7386,	// (0x0001297e) area_vitu2_query_pane_t2

0x7398,	// (0x00012990) area_vitu2_query_pane_t3_ParamLimits

0x7398,	// (0x00012990) area_vitu2_query_pane_t3

0xdcc2,	// (0x000192ba) area_vitu2_query_pane_t4_ParamLimits

0xdcc2,	// (0x000192ba) area_vitu2_query_pane_t4

0xdcea,	// (0x000192e2) area_vitu2_query_pane_t5_ParamLimits

0xdcea,	// (0x000192e2) area_vitu2_query_pane_t5

0xdd12,	// (0x0001930a) area_vitu2_query_pane_t6_ParamLimits

0xdd12,	// (0x0001930a) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x0001b022) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x0001b022) area_vitu2_query_pane_t

0x73c0,	// (0x000129b8) bg_button_pane_cp018

0x73cd,	// (0x000129c5) bg_button_pane_cp021

0x73d9,	// (0x000129d1) bg_button_pane_cp022

0x73e8,	// (0x000129e0) input_focus_pane_cp09

0x40e7,	// (0x0000f6df) aid_size_touch_mv_arrow_left

0xaf90,	// (0x00016588) aid_size_touch_mv_arrow_right

0x6bfe,	// (0x000121f6) main_cset_slider_pane_g16_ParamLimits

0x6bfe,	// (0x000121f6) main_cset_slider_pane_g16

0x6c0a,	// (0x00012202) main_cset_slider_pane_g17_ParamLimits

0x6c0a,	// (0x00012202) main_cset_slider_pane_g17

0x730e,	// (0x00012906) cell_cam4_burst_pane_g1_ParamLimits

0x9b9f,	// (0x00015197) compa_mode_pane

0x6e03,	// (0x000123fb) popup_vtel_slider_window_g3_ParamLimits

0x6e03,	// (0x000123fb) popup_vtel_slider_window_g3

0x6e1a,	// (0x00012412) popup_vtel_slider_window_g4_ParamLimits

0x6e1a,	// (0x00012412) popup_vtel_slider_window_g4

0x6e31,	// (0x00012429) popup_vtel_slider_window_t1_ParamLimits

0x6e31,	// (0x00012429) popup_vtel_slider_window_t1

0x9b9f,	// (0x00015197) main_cl_pane

0xc69b,	// (0x00017c93) popup_imed_adjust2_window_ParamLimits

0xb1ee,	// (0x000167e6) bg_tb_trans_pane_cp05_ParamLimits

0xcfcb,	// (0x000185c3) popup_imed_adjust2_window_g1_ParamLimits

0xcfda,	// (0x000185d2) popup_imed_adjust2_window_g2_ParamLimits

0xcfda,	// (0x000185d2) popup_imed_adjust2_window_g2

0xcfe6,	// (0x000185de) popup_imed_adjust2_window_g3_ParamLimits

0xcfe6,	// (0x000185de) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x0001ad89) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x0001ad89) popup_imed_adjust2_window_g

0xcff2,	// (0x000185ea) popup_imed_adjust2_window_t1_ParamLimits

0xd00a,	// (0x00018602) slider_imed_adjust_pane_ParamLimits

0xd01e,	// (0x00018616) slider_imed_adjust_pane_g1_ParamLimits

0xd02e,	// (0x00018626) slider_imed_adjust_pane_g2_ParamLimits

0xd03e,	// (0x00018636) slider_imed_adjust_pane_g3_ParamLimits

0xd04f,	// (0x00018647) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x0001ad90) slider_imed_adjust_pane_g_ParamLimits

0x6334,	// (0x0001192c) aid_touch_area_cam4_ParamLimits

0x6334,	// (0x0001192c) aid_touch_area_cam4

0xd6ae,	// (0x00018ca6) battery_pane_cp01

0x63cc,	// (0x000119c4) main_camera4_pane_g6_ParamLimits

0x63cc,	// (0x000119c4) main_camera4_pane_g6

0x63ed,	// (0x000119e5) main_camera4_pane_t2_ParamLimits

0x63ed,	// (0x000119e5) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x0001ae97) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x0001ae97) main_camera4_pane_t

0x641b,	// (0x00011a13) aid_touch_area_vid4_ParamLimits

0x641b,	// (0x00011a13) aid_touch_area_vid4

0x645d,	// (0x00011a55) main_video4_pane_g5_ParamLimits

0x645d,	// (0x00011a55) main_video4_pane_g5

0x647e,	// (0x00011a76) vid4_progress_pane_ParamLimits

0x647e,	// (0x00011a76) vid4_progress_pane

0xd93c,	// (0x00018f34) main_cset_slider_pane_g18_ParamLimits

0xd93c,	// (0x00018f34) main_cset_slider_pane_g18

0xdb86,	// (0x0001917e) cell_cam4_burst_pane_g2_ParamLimits

0xdb86,	// (0x0001917e) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x0001aff6) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x0001aff6) cell_cam4_burst_pane_g

0xa37e,	// (0x00015976) bg_cl_pane_ParamLimits

0xa37e,	// (0x00015976) bg_cl_pane

0x73f7,	// (0x000129ef) cl_header_pane_ParamLimits

0x73f7,	// (0x000129ef) cl_header_pane

0x740b,	// (0x00012a03) cl_listscroll_pane_ParamLimits

0x740b,	// (0x00012a03) cl_listscroll_pane

0xdd5e,	// (0x00019356) bg_cl_pane_g1

0xdd66,	// (0x0001935e) bg_cl_pane_g2

0xdd6e,	// (0x00019366) bg_cl_pane_g3

0xdd76,	// (0x0001936e) bg_cl_pane_g4

0xdd7e,	// (0x00019376) bg_cl_pane_g5

0xdd86,	// (0x0001937e) bg_cl_pane_g6

0xdd8e,	// (0x00019386) bg_cl_pane_g7

0xdd96,	// (0x0001938e) bg_cl_pane_g8

0xdd9e,	// (0x00019396) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x0001b031) bg_cl_pane_g

0x741b,	// (0x00012a13) aid_height_cl_leading_ParamLimits

0x741b,	// (0x00012a13) aid_height_cl_leading

0x7427,	// (0x00012a1f) aid_height_cl_text_ParamLimits

0x7427,	// (0x00012a1f) aid_height_cl_text

0x9bf2,	// (0x000151ea) bg_cl_header_pane_ParamLimits

0x9bf2,	// (0x000151ea) bg_cl_header_pane

0x7446,	// (0x00012a3e) cl_header_pane_g1_ParamLimits

0x7446,	// (0x00012a3e) cl_header_pane_g1

0x745c,	// (0x00012a54) cl_header_pane_t1_ParamLimits

0x745c,	// (0x00012a54) cl_header_pane_t1

0xdda6,	// (0x0001939e) cl_list_pane

0xddaf,	// (0x000193a7) hc_scroll_pane_cp01

0xa897,	// (0x00015e8f) bg_cl_header_pane_g1

0xd7e9,	// (0x00018de1) bg_cl_header_pane_g2

0xa8b7,	// (0x00015eaf) bg_cl_header_pane_g3

0xd7f9,	// (0x00018df1) bg_cl_header_pane_g4

0xd7f1,	// (0x00018de9) bg_cl_header_pane_g5

0xda74,	// (0x0001906c) bg_cl_header_pane_g6

0xd811,	// (0x00018e09) bg_cl_header_pane_g7

0xd819,	// (0x00018e11) bg_cl_header_pane_g8

0xd809,	// (0x00018e01) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x0001b044) bg_cl_header_pane_g

0x7475,	// (0x00012a6d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7475,	// (0x00012a6d) hc_cl_list_double_graphic_heading_pane

0x7485,	// (0x00012a7d) hc_cl_list_single_graphic_pane_ParamLimits

0x7485,	// (0x00012a7d) hc_cl_list_single_graphic_pane

0x7498,	// (0x00012a90) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7498,	// (0x00012a90) hc_cl_list_single_graphic_pane_g1

0x74a4,	// (0x00012a9c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x74a4,	// (0x00012a9c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x0001b057) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x0001b057) hc_cl_list_single_graphic_pane_g

0x74b8,	// (0x00012ab0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74b8,	// (0x00012ab0) hc_cl_list_single_graphic_pane_t1

0x7498,	// (0x00012a90) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7498,	// (0x00012a90) hc_cl_list_double_graphic_heading_pane_g1

0x74cd,	// (0x00012ac5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74cd,	// (0x00012ac5) hc_cl_list_double_graphic_heading_pane_g2

0x74e1,	// (0x00012ad9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74e1,	// (0x00012ad9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x0001b05c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x0001b05c) hc_cl_list_double_graphic_heading_pane_g

0x74f5,	// (0x00012aed) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74f5,	// (0x00012aed) hc_cl_list_double_graphic_heading_pane_t1

0x750a,	// (0x00012b02) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x750a,	// (0x00012b02) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x0001b063) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x0001b063) hc_cl_list_double_graphic_heading_pane_t

0xddb8,	// (0x000193b0) vid4_progress_pane_g1

0xddc7,	// (0x000193bf) vid4_progress_pane_g2

0xddd6,	// (0x000193ce) vid4_progress_pane_g3

0xdde5,	// (0x000193dd) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x0001b068) vid4_progress_pane_g

0xddf1,	// (0x000193e9) vid4_progress_pane_t1

0xde07,	// (0x000193ff) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x0001b073) vid4_progress_pane_t

0xde31,	// (0x00019429) wait_bar_pane_cp07

0xc8e1,	// (0x00017ed9) blid_firmament_pane_ParamLimits

0xc922,	// (0x00017f1a) popup_blid_sat_info2_window_g1

0xc946,	// (0x00017f3e) popup_blid_sat_info2_window_t3

0xc954,	// (0x00017f4c) popup_blid_sat_info2_window_t4

0xc962,	// (0x00017f5a) popup_blid_sat_info2_window_t5

0xc970,	// (0x00017f68) popup_blid_sat_info2_window_t6

0xc980,	// (0x00017f78) popup_blid_sat_info2_window_t7

0xc98e,	// (0x00017f86) popup_blid_sat_info2_window_t8

0xc99c,	// (0x00017f94) popup_blid_sat_info2_window_t9

0xc9aa,	// (0x00017fa2) popup_blid_sat_info2_window_t10

0xca46,	// (0x0001803e) aid_firma_cardinal_ParamLimits

0xca5a,	// (0x00018052) blid_firmament_pane_t1_ParamLimits

0xca71,	// (0x00018069) blid_firmament_pane_t2_ParamLimits

0xca88,	// (0x00018080) blid_firmament_pane_t3_ParamLimits

0xca9f,	// (0x00018097) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x0001ac82) blid_firmament_pane_t_ParamLimits

0xcab6,	// (0x000180ae) blid_sat_info_pane_ParamLimits

0x9bf2,	// (0x000151ea) main_cam_set_pane_ParamLimits

0x5c97,	// (0x0001128f) aid_size_cell_colour_35_ParamLimits

0x5cb7,	// (0x000112af) aid_size_cell_colour_112_ParamLimits

0x5cd7,	// (0x000112cf) aid_size_cell_effect_ParamLimits

0xb1ee,	// (0x000167e6) bg_tb_trans_pane_cp02_ParamLimits

0xab17,	// (0x0001610f) heading_imed_pane_ParamLimits

0x5cf7,	// (0x000112ef) listscroll_imed_pane_ParamLimits

0xbc47,	// (0x0001723f) popup_call2_audio_first_window_g5_ParamLimits

0xbc47,	// (0x0001723f) popup_call2_audio_first_window_g5

0x601f,	// (0x00011617) aid_size_touch_image3_arrow_left_ParamLimits

0x601f,	// (0x00011617) aid_size_touch_image3_arrow_left

0x603f,	// (0x00011637) aid_size_touch_image3_arrow_right_ParamLimits

0x603f,	// (0x00011637) aid_size_touch_image3_arrow_right

0xde1c,	// (0x00019414) vid4_progress_pane_t3

0x5e80,	// (0x00011478) main_hwr_training_symbol_option_pane_ParamLimits

0x5e80,	// (0x00011478) main_hwr_training_symbol_option_pane

0xd1f8,	// (0x000187f0) popup_hwr_training_preview_window_ParamLimits

0xd1f8,	// (0x000187f0) popup_hwr_training_preview_window

0x5e9c,	// (0x00011494) hwr_training_navi_pane_g5_ParamLimits

0x5e9c,	// (0x00011494) hwr_training_navi_pane_g5

0xd7c5,	// (0x00018dbd) popup_char_count_window

0x9bf2,	// (0x000151ea) bg_popup_sub_pane_cp20_ParamLimits

0x6f3e,	// (0x00012536) list_vitu2_match_list_pane_ParamLimits

0x6f4d,	// (0x00012545) vitu2_page_scroll_pane_ParamLimits

0x6f4d,	// (0x00012545) vitu2_page_scroll_pane

0xde6c,	// (0x00019464) list_single_hwr_training_symbol_option_pane_ParamLimits

0xde6c,	// (0x00019464) list_single_hwr_training_symbol_option_pane

0xde7f,	// (0x00019477) list_single_hwr_training_symbol_option_pane_g1

0xde87,	// (0x0001947f) list_single_hwr_training_symbol_option_pane_t1

0xde95,	// (0x0001948d) bg_button_pane_cp023

0xde9e,	// (0x00019496) bg_button_pane_cp024

0x7545,	// (0x00012b3d) vitu2_page_scroll_pane_g1

0x754d,	// (0x00012b45) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x0001b07a) vitu2_page_scroll_pane_g

0x7555,	// (0x00012b4d) vitu2_page_scroll_pane_t1

0xcae5,	// (0x000180dd) popup_char_count_window_g1

0xded1,	// (0x000194c9) popup_char_count_window_g2

0xdeda,	// (0x000194d2) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x0001b07f) popup_char_count_window_g

0xdee3,	// (0x000194db) popup_char_count_window_t1

0x9b9f,	// (0x00015197) main_vded2_pane

0xcfb9,	// (0x000185b1) aid_size_cell_imed_line

0xcfc3,	// (0x000185bb) grid_imed_line_width_pane

0xd743,	// (0x00018d3b) vid4_indicators_pane_g4

0xdef1,	// (0x000194e9) cell_imed_line_width_pane_ParamLimits

0xdef1,	// (0x000194e9) cell_imed_line_width_pane

0xdf03,	// (0x000194fb) cell_imed_line_width_pane_g1

0xdf0c,	// (0x00019504) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x0001b086) cell_imed_line_width_pane_g

0x7564,	// (0x00012b5c) main_vded2_pane_g1_ParamLimits

0x7564,	// (0x00012b5c) main_vded2_pane_g1

0x757a,	// (0x00012b72) main_vded2_pane_g2_ParamLimits

0x757a,	// (0x00012b72) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x0001b08b) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x0001b08b) main_vded2_pane_g

0x758a,	// (0x00012b82) vded2_slider_pane_ParamLimits

0x758a,	// (0x00012b82) vded2_slider_pane

0x759d,	// (0x00012b95) aid_size_touch_vded2_end

0x75a5,	// (0x00012b9d) aid_size_touch_vded2_playhead

0x75ad,	// (0x00012ba5) aid_size_touch_vded2_start

0x75b5,	// (0x00012bad) vded2_slider_bg_pane

0x75be,	// (0x00012bb6) vded2_slider_pane_g1

0x75c7,	// (0x00012bbf) vded2_slider_pane_g2

0x75cf,	// (0x00012bc7) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x0001b090) vded2_slider_pane_g

0x75d8,	// (0x00012bd0) vded2_slider_bg_pane_g1

0x75e1,	// (0x00012bd9) vded2_slider_bg_pane_g2

0x75ea,	// (0x00012be2) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x0001b097) vded2_slider_bg_pane_g

0x43f4,	// (0x0000f9ec) aid_postcard_touch_down_pane_ParamLimits

0x43f4,	// (0x0000f9ec) aid_postcard_touch_down_pane

0x4406,	// (0x0000f9fe) aid_postcard_touch_up_pane_ParamLimits

0x4406,	// (0x0000f9fe) aid_postcard_touch_up_pane

0x9b9f,	// (0x00015197) main_blid2_pane

0xc683,	// (0x00017c7b) popup_blid2_search_window

0x9b9f,	// (0x00015197) blid2_gps_pane

0x9b9f,	// (0x00015197) blid2_navig_pane

0x9b9f,	// (0x00015197) blid2_search_pane

0x9b9f,	// (0x00015197) blid2_tripm_pane

0x75f3,	// (0x00012beb) blid2_search_pane_g1_ParamLimits

0x75f3,	// (0x00012beb) blid2_search_pane_g1

0x7607,	// (0x00012bff) blid2_search_pane_t1_ParamLimits

0x7607,	// (0x00012bff) blid2_search_pane_t1

0x7619,	// (0x00012c11) aid_size_cell_blid2_gps_ParamLimits

0x7619,	// (0x00012c11) aid_size_cell_blid2_gps

0x7631,	// (0x00012c29) blid2_gps_pane_g1_ParamLimits

0x7631,	// (0x00012c29) blid2_gps_pane_g1

0x7645,	// (0x00012c3d) grid_blid2_satellite_pane_ParamLimits

0x7645,	// (0x00012c3d) grid_blid2_satellite_pane

0x7659,	// (0x00012c51) blid2_navig_pane_g1_ParamLimits

0x7659,	// (0x00012c51) blid2_navig_pane_g1

0x7665,	// (0x00012c5d) blid2_navig_pane_t1_ParamLimits

0x7665,	// (0x00012c5d) blid2_navig_pane_t1

0x767e,	// (0x00012c76) blid2_navig_pane_t2_ParamLimits

0x767e,	// (0x00012c76) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x0001b09e) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x0001b09e) blid2_navig_pane_t

0x7697,	// (0x00012c8f) blid2_navig_ring_pane_ParamLimits

0x7697,	// (0x00012c8f) blid2_navig_ring_pane

0x76ac,	// (0x00012ca4) blid2_speed_pane_ParamLimits

0x76ac,	// (0x00012ca4) blid2_speed_pane

0x76b8,	// (0x00012cb0) blid2_tripm_pane_g1_ParamLimits

0x76b8,	// (0x00012cb0) blid2_tripm_pane_g1

0x76cd,	// (0x00012cc5) blid2_tripm_pane_g2_ParamLimits

0x76cd,	// (0x00012cc5) blid2_tripm_pane_g2

0x76e1,	// (0x00012cd9) blid2_tripm_pane_g3_ParamLimits

0x76e1,	// (0x00012cd9) blid2_tripm_pane_g3

0x76f5,	// (0x00012ced) blid2_tripm_pane_g4_ParamLimits

0x76f5,	// (0x00012ced) blid2_tripm_pane_g4

0x7709,	// (0x00012d01) blid2_tripm_pane_g5_ParamLimits

0x7709,	// (0x00012d01) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x0001b0a3) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x0001b0a3) blid2_tripm_pane_g

0x772b,	// (0x00012d23) blid2_tripm_pane_t1_ParamLimits

0x772b,	// (0x00012d23) blid2_tripm_pane_t1

0x7742,	// (0x00012d3a) blid2_tripm_pane_t2_ParamLimits

0x7742,	// (0x00012d3a) blid2_tripm_pane_t2

0x7759,	// (0x00012d51) blid2_tripm_pane_t3_ParamLimits

0x7759,	// (0x00012d51) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x0001b0b0) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x0001b0b0) blid2_tripm_pane_t

0x779c,	// (0x00012d94) cell_blid2_satellite_pane_ParamLimits

0x779c,	// (0x00012d94) cell_blid2_satellite_pane

0x77b4,	// (0x00012dac) cell_blid2_satellite_pane_g1

0xdf14,	// (0x0001950c) cell_blid2_satellite_pane_t1

0xa65b,	// (0x00015c53) blid2_speed_pane_g1

0xdf22,	// (0x0001951a) blid2_speed_pane_t1

0xdf30,	// (0x00019528) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x0001b0b9) blid2_speed_pane_t

0xa65b,	// (0x00015c53) blid2_navig_ring_pane_g1

0x77bd,	// (0x00012db5) blid2_navig_ring_pane_g2

0x77c5,	// (0x00012dbd) blid2_navig_ring_pane_g3

0x77cd,	// (0x00012dc5) blid2_navig_ring_pane_g4

0x77d5,	// (0x00012dcd) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x0001b0be) blid2_navig_ring_pane_g

0x9b9f,	// (0x00015197) bg_popup_window_pane_cp011

0xdf3e,	// (0x00019536) popup_blid2_search_window_g1

0xdf46,	// (0x0001953e) popup_blid2_search_window_t1

0xdf54,	// (0x0001954c) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x0001b0c9) popup_blid2_search_window_t

0xa7a6,	// (0x00015d9e) main_browser_pane_g1

0xa37e,	// (0x00015976) main_browser_pane_ParamLimits

0x9bf2,	// (0x000151ea) bg_button_pane_cp011_ParamLimits

0x6829,	// (0x00011e21) cell_vitu2_function_pane_g1_ParamLimits

0xb1ee,	// (0x000167e6) bg_popup_sub_pane_cp22_ParamLimits

0x70bf,	// (0x000126b7) input_focus_pane_cp08_ParamLimits

0x70d6,	// (0x000126ce) popup_vitu2_query_button_pane_ParamLimits

0x70d6,	// (0x000126ce) popup_vitu2_query_button_pane

0x70e6,	// (0x000126de) popup_vitu2_query_input_button_pane

0xdadc,	// (0x000190d4) popup_vitu2_query_window_g1_ParamLimits

0x70ee,	// (0x000126e6) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x0001afca) popup_vitu2_query_window_g_ParamLimits

0x9b9f,	// (0x00015197) bg_button_pane_cp026

0x77dd,	// (0x00012dd5) popup_vitu2_query_input_button_pane_g1

0x9b9f,	// (0x00015197) bg_button_pane_cp025

0xdf62,	// (0x0001955a) popup_vitu2_query_button_pane_t1

0x521d,	// (0x00010815) main_mp3_pane_t6

0x522b,	// (0x00010823) popup_slider_window_cp01

0xd6c8,	// (0x00018cc0) cam4_battery_pane

0xd6c8,	// (0x00018cc0) cam4_battery_pane_cp02

0xd6c8,	// (0x00018cc0) cam4_battery_pane_cp01

0xd6c8,	// (0x00018cc0) cam4_battery_pane_cp03

0xa65b,	// (0x00015c53) cam4_battery_pane_g1

0xdf70,	// (0x00019568) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x0001b0ce) cam4_battery_pane_g

0xc9b8,	// (0x00017fb0) popup_blid_sat_info2_window_t11

0x40e7,	// (0x0000f6df) aid_size_touch_mv_arrow_left_ParamLimits

0xaf90,	// (0x00016588) aid_size_touch_mv_arrow_right_ParamLimits

0xafe9,	// (0x000165e1) navi_pane_g1_ParamLimits

0xaff5,	// (0x000165ed) navi_pane_g2_ParamLimits

0x410b,	// (0x0000f703) navi_pane_g3_ParamLimits

0xf38b,	// (0x0001a983) navi_pane_g_ParamLimits

0x4128,	// (0x0000f720) navi_pane_mv_t1_ParamLimits

0x5d03,	// (0x000112fb) grid_imed_effect_pane_ParamLimits

0x2fb0,	// (0x0000e5a8) aid_placing_vt_slider_lsc

0xa6e8,	// (0x00015ce0) aid_placing_vt_slider_prt

0x9bf2,	// (0x000151ea) bg_tb_trans_pane_cp01_ParamLimits

0xcbfd,	// (0x000181f5) popup_image_details_window_g1_ParamLimits

0xcc10,	// (0x00018208) popup_image_details_window_g2_ParamLimits

0xcc25,	// (0x0001821d) popup_image_details_window_g3_ParamLimits

0xcc25,	// (0x0001821d) popup_image_details_window_g3

0xf6ca,	// (0x0001acc2) popup_image_details_window_g_ParamLimits

0xcc39,	// (0x00018231) popup_image_details_window_t1_ParamLimits

0xcc4b,	// (0x00018243) popup_image_details_window_t2_ParamLimits

0xcc64,	// (0x0001825c) popup_image_details_window_t3_ParamLimits

0xcc78,	// (0x00018270) popup_image_details_window_t4_ParamLimits

0xcc93,	// (0x0001828b) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x0001acc9) popup_image_details_window_t_ParamLimits

0x7433,	// (0x00012a2b) cl_header_name_pane_ParamLimits

0x7433,	// (0x00012a2b) cl_header_name_pane

0x77e5,	// (0x00012ddd) cl_header_name_pane_t1_ParamLimits

0x77e5,	// (0x00012ddd) cl_header_name_pane_t1

0x7806,	// (0x00012dfe) cl_header_name_pane_t2_ParamLimits

0x7806,	// (0x00012dfe) cl_header_name_pane_t2

0x7848,	// (0x00012e40) cl_header_name_pane_t3_ParamLimits

0x7848,	// (0x00012e40) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x0001b0d3) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x0001b0d3) cl_header_name_pane_t

0xb082,	// (0x0001667a) navi_pane_mv_g2_ParamLimits

0xd790,	// (0x00018d88) field_vitu2_entry_pane_g1_ParamLimits

0xd79c,	// (0x00018d94) field_vitu2_entry_pane_g2_ParamLimits

0xb1aa,	// (0x000167a2) field_vitu2_entry_pane_g3_ParamLimits

0xb1aa,	// (0x000167a2) field_vitu2_entry_pane_g3

0xf8d1,	// (0x0001aec9) field_vitu2_entry_pane_g_ParamLimits

0xd7cd,	// (0x00018dc5) cell_vitu2_itu_pane_g1_ParamLimits

0x66d1,	// (0x00011cc9) cell_vitu2_itu_pane_g2_ParamLimits

0x66d1,	// (0x00011cc9) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x0001aed5) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x0001aed5) cell_vitu2_itu_pane_g

0x9bf2,	// (0x000151ea) bg_vkb2_func_pane_cp05_ParamLimits

0x9bf2,	// (0x000151ea) bg_vkb2_func_pane_cp05

0x9bf2,	// (0x000151ea) bg_vkb2_func_pane_cp03

0x9bf2,	// (0x000151ea) bg_vkb2_func_pane_cp04

0x9bf2,	// (0x000151ea) bg_vkb2_func_pane_cp10_ParamLimits

0x9bf2,	// (0x000151ea) bg_vkb2_func_pane_cp10

0x73d9,	// (0x000129d1) bg_vkb2_func_pane_cp08

0x73c0,	// (0x000129b8) bg_vkb2_func_pane_cp06

0x73cd,	// (0x000129c5) bg_vkb2_func_pane_cp07

0xdea7,	// (0x0001949f) bg_vkb2_func_pane_cp11_ParamLimits

0xdea7,	// (0x0001949f) bg_vkb2_func_pane_cp11

0xdebc,	// (0x000194b4) bg_vkb2_func_pane_cp12_ParamLimits

0xdebc,	// (0x000194b4) bg_vkb2_func_pane_cp12

0x9b9f,	// (0x00015197) bg_vkb2_func_pane_cp09

0xd7e9,	// (0x00018de1) bg_vkb2_func_pane_g1

0xa8b7,	// (0x00015eaf) bg_vkb2_func_pane_g2

0xd7f1,	// (0x00018de9) bg_vkb2_func_pane_g3

0xd7f9,	// (0x00018df1) bg_vkb2_func_pane_g4

0xda74,	// (0x0001906c) bg_vkb2_func_pane_g5

0xd811,	// (0x00018e09) bg_vkb2_func_pane_g6

0xd819,	// (0x00018e11) bg_vkb2_func_pane_g7

0xd809,	// (0x00018e01) bg_vkb2_func_pane_g8

0xa897,	// (0x00015e8f) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x0001b0da) bg_vkb2_func_pane_g

0x771b,	// (0x00012d13) blid2_tripm_pane_g6_ParamLimits

0x771b,	// (0x00012d13) blid2_tripm_pane_g6

0xd51f,	// (0x00018b17) mp4_progress_pane_g1

0x778a,	// (0x00012d82) blid2_tripm_values_pane_ParamLimits

0x778a,	// (0x00012d82) blid2_tripm_values_pane

0x7879,	// (0x00012e71) blid2_tripm_values_pane_t1

0x7887,	// (0x00012e7f) blid2_tripm_values_pane_t2

0x7895,	// (0x00012e8d) blid2_tripm_values_pane_t3

0x78a3,	// (0x00012e9b) blid2_tripm_values_pane_t4

0x78b1,	// (0x00012ea9) blid2_tripm_values_pane_t5

0x78bf,	// (0x00012eb7) blid2_tripm_values_pane_t6

0x78cd,	// (0x00012ec5) blid2_tripm_values_pane_t7

0x78db,	// (0x00012ed3) blid2_tripm_values_pane_t8

0x78e9,	// (0x00012ee1) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x0001b0ed) blid2_tripm_values_pane_t

0x2fea,	// (0x0000e5e2) call_video_pane_t1_ParamLimits

0x3004,	// (0x0000e5fc) call_video_pane_t2_ParamLimits

0xf222,	// (0x0001a81a) call_video_pane_t_ParamLimits

0x437c,	// (0x0000f974) msg_header_pane_g1_ParamLimits

0xb2ab,	// (0x000168a3) msg_header_pane_g2_ParamLimits

0xb2ab,	// (0x000168a3) msg_header_pane_g2

0x0001,

0xf42e,	// (0x0001aa26) msg_header_pane_g_ParamLimits

0xf42e,	// (0x0001aa26) msg_header_pane_g

0xa37e,	// (0x00015976) main_clock2_pane_ParamLimits

0x5a1a,	// (0x00011012) grid_clock2_toolbar_pane_ParamLimits

0x5a1a,	// (0x00011012) grid_clock2_toolbar_pane

0x5a1a,	// (0x00011012) listscroll_clock2_pane_ParamLimits

0x5a1a,	// (0x00011012) listscroll_clock2_pane

0x5afd,	// (0x000110f5) main_clock2_pane_t3_ParamLimits

0x5afd,	// (0x000110f5) main_clock2_pane_t3

0x5b1f,	// (0x00011117) main_clock2_pane_t4_ParamLimits

0x5b1f,	// (0x00011117) main_clock2_pane_t4

0xdf7a,	// (0x00019572) cell_clock2_toolbar_pane

0xdf82,	// (0x0001957a) cell_clock2_toolbar_pane_cp01

0xdf82,	// (0x0001957a) cell_clock2_toolbar_pane_cp02

0xdf8a,	// (0x00019582) cell_clock2_toolbar_pane_cp03

0xdf92,	// (0x0001958a) list_clock2_pane

0xdf9a,	// (0x00019592) scroll_pane_cp10

0xdfa2,	// (0x0001959a) list_single_clock2_pane_ParamLimits

0xdfa2,	// (0x0001959a) list_single_clock2_pane

0xa5e3,	// (0x00015bdb) list_highlight_pane_cp08

0xdfaf,	// (0x000195a7) list_single_clock2_pane_t1

0xdfbd,	// (0x000195b5) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x0001b100) list_single_clock2_pane_t

0x9b9f,	// (0x00015197) bg_button_pane_cp10

0xdfcb,	// (0x000195c3) cell_clock2_toolbar_pane_g1

0x4388,	// (0x0000f980) aid_main_viewer_pane_g1_ParamLimits

0x4388,	// (0x0000f980) aid_main_viewer_pane_g1

0x4394,	// (0x0000f98c) aid_main_viewer_pane_g2_ParamLimits

0x4394,	// (0x0000f98c) aid_main_viewer_pane_g2

0x43a0,	// (0x0000f998) aid_main_viewer_pane_g3_ParamLimits

0x43a0,	// (0x0000f998) aid_main_viewer_pane_g3

0x43af,	// (0x0000f9a7) aid_main_viewer_pane_g4_ParamLimits

0x43af,	// (0x0000f9a7) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x0001aa37) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x0001aa37) aid_main_viewer_pane_g

0x9bf2,	// (0x000151ea) main_calc_pane_ParamLimits

0x4bc1,	// (0x000101b9) main_dialer2_pane_ParamLimits

0x9b9f,	// (0x00015197) main_cam6_pane

0x9b9f,	// (0x00015197) main_vid6_pane

0x5a26,	// (0x0001101e) listscroll_gen_pane_cp06_ParamLimits

0x5a26,	// (0x0001101e) listscroll_gen_pane_cp06

0x5b40,	// (0x00011138) main_clock2_pane_t5_ParamLimits

0x5b40,	// (0x00011138) main_clock2_pane_t5

0x5b98,	// (0x00011190) aid_call2_pane_cp10_ParamLimits

0x5baa,	// (0x000111a2) aid_call_pane_cp10_ParamLimits

0xaf84,	// (0x0001657c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaf84,	// (0x0001657c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5bbc,	// (0x000111b4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5bbc,	// (0x000111b4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaf84,	// (0x0001657c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x0001ad7e) popup_clock_analogue_window_cp10_g_ParamLimits

0x5bce,	// (0x000111c6) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd577,	// (0x00018b6f) cell_dialer2_keypad_pane_g2_ParamLimits

0xd577,	// (0x00018b6f) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x0001ae68) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x0001ae68) cell_dialer2_keypad_pane_g

0xa62d,	// (0x00015c25) cell_dialer2_keypad_pane_t1

0x6af8,	// (0x000120f0) main_cset_text2_pane_ParamLimits

0x6af8,	// (0x000120f0) main_cset_text2_pane

0xdcb6,	// (0x000192ae) area_vitu2_query_pane_g1_ParamLimits

0x7365,	// (0x0001295d) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x0001b01d) area_vitu2_query_pane_g_ParamLimits

0xdd3a,	// (0x00019332) area_vitu2_query_pane_t7_ParamLimits

0xdd3a,	// (0x00019332) area_vitu2_query_pane_t7

0x73c0,	// (0x000129b8) bg_button_pane_cp018_ParamLimits

0x73cd,	// (0x000129c5) bg_button_pane_cp021_ParamLimits

0x73d9,	// (0x000129d1) bg_button_pane_cp022_ParamLimits

0x73d9,	// (0x000129d1) bg_vkb2_func_pane_cp08_ParamLimits

0x73c0,	// (0x000129b8) bg_vkb2_func_pane_cp06_ParamLimits

0x73cd,	// (0x000129c5) bg_vkb2_func_pane_cp07_ParamLimits

0x73e8,	// (0x000129e0) input_focus_pane_cp09_ParamLimits

0xdfd3,	// (0x000195cb) cam6_autofocus_pane_ParamLimits

0xdfd3,	// (0x000195cb) cam6_autofocus_pane

0x78f7,	// (0x00012eef) cam6_image_uncrop_pane_ParamLimits

0x78f7,	// (0x00012eef) cam6_image_uncrop_pane

0x7904,	// (0x00012efc) cam6_indi_pane_ParamLimits

0x7904,	// (0x00012efc) cam6_indi_pane

0x791a,	// (0x00012f12) cam6_mode_pane_ParamLimits

0x791a,	// (0x00012f12) cam6_mode_pane

0x792c,	// (0x00012f24) cam6_timer_pane_ParamLimits

0x792c,	// (0x00012f24) cam6_timer_pane

0x7938,	// (0x00012f30) cam6_zoom_pane_ParamLimits

0x7938,	// (0x00012f30) cam6_zoom_pane

0x7944,	// (0x00012f3c) cam6_mode_pane_g1_ParamLimits

0x7944,	// (0x00012f3c) cam6_mode_pane_g1

0x7954,	// (0x00012f4c) cam6_mode_pane_g2_ParamLimits

0x7954,	// (0x00012f4c) cam6_mode_pane_g2

0x7964,	// (0x00012f5c) cam6_mode_pane_g3_ParamLimits

0x7964,	// (0x00012f5c) cam6_mode_pane_g3

0x7974,	// (0x00012f6c) cam6_mode_pane_g4_ParamLimits

0x7974,	// (0x00012f6c) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x0001b105) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x0001b105) cam6_mode_pane_g

0xcdd0,	// (0x000183c8) bg_tb_trans_pane_cp08_ParamLimits

0xcdd0,	// (0x000183c8) bg_tb_trans_pane_cp08

0xdfdf,	// (0x000195d7) cam6_battery_pane_ParamLimits

0xdfdf,	// (0x000195d7) cam6_battery_pane

0xdff5,	// (0x000195ed) cam6_indi_pane_g1_ParamLimits

0xdff5,	// (0x000195ed) cam6_indi_pane_g1

0xe007,	// (0x000195ff) cam6_indi_pane_g2_ParamLimits

0xe007,	// (0x000195ff) cam6_indi_pane_g2

0xe019,	// (0x00019611) cam6_indi_pane_g3_ParamLimits

0xe019,	// (0x00019611) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x0001b10e) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x0001b10e) cam6_indi_pane_g

0xe02b,	// (0x00019623) cam6_indi_pane_t1_ParamLimits

0xe02b,	// (0x00019623) cam6_indi_pane_t1

0x64d8,	// (0x00011ad0) cam6_autofocus_pane_g1

0x64e0,	// (0x00011ad8) cam6_autofocus_pane_g2

0x64e8,	// (0x00011ae0) cam6_autofocus_pane_g3

0x64f0,	// (0x00011ae8) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x0001b115) cam6_autofocus_pane_g

0xe051,	// (0x00019649) cam6_timer_pane_g1

0xe059,	// (0x00019651) cam6_timer_pane_t1

0xe067,	// (0x0001965f) cam6_zoom_cont_pane

0xe06f,	// (0x00019667) cam6_zoom_pane_g1

0xe077,	// (0x0001966f) cam6_zoom_pane_g2

0x7984,	// (0x00012f7c) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x0001b11e) cam6_zoom_pane_g

0xa65b,	// (0x00015c53) cam6_battery_pane_g1

0xa65b,	// (0x00015c53) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x0001a9e7) cam6_battery_pane_g

0xe07f,	// (0x00019677) cam6_zoom_cont_pane_g1

0xe088,	// (0x00019680) cam6_zoom_cont_pane_g2

0xe091,	// (0x00019689) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x0001b125) cam6_zoom_cont_pane_g

0x79a1,	// (0x00012f99) cam6_mode_pane_cp_ParamLimits

0x79a1,	// (0x00012f99) cam6_mode_pane_cp

0x7938,	// (0x00012f30) cam6_zoom_pane_cp_ParamLimits

0x7938,	// (0x00012f30) cam6_zoom_pane_cp

0x79b3,	// (0x00012fab) vid6_image_uncrop_cif_pane_ParamLimits

0x79b3,	// (0x00012fab) vid6_image_uncrop_cif_pane

0x79c1,	// (0x00012fb9) vid6_image_uncrop_nhd_pane_ParamLimits

0x79c1,	// (0x00012fb9) vid6_image_uncrop_nhd_pane

0x78f7,	// (0x00012eef) vid6_image_uncrop_vga_pane_ParamLimits

0x78f7,	// (0x00012eef) vid6_image_uncrop_vga_pane

0x79ce,	// (0x00012fc6) vid6_image_uncrop_wvga_pane_ParamLimits

0x79ce,	// (0x00012fc6) vid6_image_uncrop_wvga_pane

0x79db,	// (0x00012fd3) vid6_indi_pane_ParamLimits

0x79db,	// (0x00012fd3) vid6_indi_pane

0xcdd0,	// (0x000183c8) bg_tb_trans_pane_cp09_ParamLimits

0xcdd0,	// (0x000183c8) bg_tb_trans_pane_cp09

0xe0a5,	// (0x0001969d) cam6_battery_pane_cp_ParamLimits

0xe0a5,	// (0x0001969d) cam6_battery_pane_cp

0xe0b1,	// (0x000196a9) vid6_indi_pane_g1_ParamLimits

0xe0b1,	// (0x000196a9) vid6_indi_pane_g1

0xe0c3,	// (0x000196bb) vid6_indi_pane_g2_ParamLimits

0xe0c3,	// (0x000196bb) vid6_indi_pane_g2

0xe0d5,	// (0x000196cd) vid6_indi_pane_g3_ParamLimits

0xe0d5,	// (0x000196cd) vid6_indi_pane_g3

0xe0ea,	// (0x000196e2) vid6_indi_pane_g4_ParamLimits

0xe0ea,	// (0x000196e2) vid6_indi_pane_g4

0xe0ff,	// (0x000196f7) vid6_indi_pane_g5_ParamLimits

0xe0ff,	// (0x000196f7) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x0001b12c) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x0001b12c) vid6_indi_pane_g

0xe119,	// (0x00019711) vid6_indi_pane_t1_ParamLimits

0xe119,	// (0x00019711) vid6_indi_pane_t1

0xe12f,	// (0x00019727) vid6_indi_pane_t2_ParamLimits

0xe12f,	// (0x00019727) vid6_indi_pane_t2

0xe157,	// (0x0001974f) vid6_indi_pane_t3_ParamLimits

0xe157,	// (0x0001974f) vid6_indi_pane_t3

0xe17f,	// (0x00019777) vid6_indi_pane_t4_ParamLimits

0xe17f,	// (0x00019777) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x0001b137) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x0001b137) vid6_indi_pane_t

0xe1a3,	// (0x0001979b) wait_bar_pane_cp08

0x79f2,	// (0x00012fea) main_cset_text2_pane_t1_ParamLimits

0x79f2,	// (0x00012fea) main_cset_text2_pane_t1

0x798c,	// (0x00012f84) listscroll_gen_pane_cp06_t1_ParamLimits

0x798c,	// (0x00012f84) listscroll_gen_pane_cp06_t1

0x9b9f,	// (0x00015197) main_cam6_set_pane

0xa2e6,	// (0x000158de) bg_tb_trans_pane_cp06_ParamLimits

0xd6d0,	// (0x00018cc8) cam4_indicators_pane_g1_ParamLimits

0xd6e0,	// (0x00018cd8) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x0001aea5) cam4_indicators_pane_g_ParamLimits

0xd700,	// (0x00018cf8) cam4_indicators_pane_t1_ParamLimits

0x9bf2,	// (0x000151ea) bg_tb_trans_pane_cp07_ParamLimits

0xd6d0,	// (0x00018cc8) vid4_indicators_pane_g1_ParamLimits

0xd722,	// (0x00018d1a) vid4_indicators_pane_g2_ParamLimits

0xd732,	// (0x00018d2a) vid4_indicators_pane_g3_ParamLimits

0xd743,	// (0x00018d3b) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x0001aeb7) vid4_indicators_pane_g_ParamLimits

0xd75f,	// (0x00018d57) vid4_indicators_pane_t1_ParamLimits

0xddb8,	// (0x000193b0) vid4_progress_pane_g1_ParamLimits

0xddc7,	// (0x000193bf) vid4_progress_pane_g2_ParamLimits

0xddd6,	// (0x000193ce) vid4_progress_pane_g3_ParamLimits

0xdde5,	// (0x000193dd) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x0001b068) vid4_progress_pane_g_ParamLimits

0xddf1,	// (0x000193e9) vid4_progress_pane_t1_ParamLimits

0xde07,	// (0x000193ff) vid4_progress_pane_t2_ParamLimits

0xde1c,	// (0x00019414) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x0001b073) vid4_progress_pane_t_ParamLimits

0xde31,	// (0x00019429) wait_bar_pane_cp07_ParamLimits

0x7a0d,	// (0x00013005) main_cam6_set_pane_g2_ParamLimits

0x7a0d,	// (0x00013005) main_cam6_set_pane_g2

0x7a2f,	// (0x00013027) main_cset6_listscroll_pane_ParamLimits

0x7a2f,	// (0x00013027) main_cset6_listscroll_pane

0x7a49,	// (0x00013041) main_cset6_slider_pane_ParamLimits

0x7a49,	// (0x00013041) main_cset6_slider_pane

0x7a5f,	// (0x00013057) main_cset6_text2_pane_ParamLimits

0x7a5f,	// (0x00013057) main_cset6_text2_pane

0xe1b3,	// (0x000197ab) main_cset6_text_pane

0xd8ff,	// (0x00018ef7) main_cset_list_pane_copy1_ParamLimits

0xd8ff,	// (0x00018ef7) main_cset_list_pane_copy1

0xd90f,	// (0x00018f07) scroll_pane_cp028_copy1

0x7a6d,	// (0x00013065) cset_list_set_pane_copy1

0x7a7f,	// (0x00013077) aid_position_infowindow_above_copy1

0x7a87,	// (0x0001307f) aid_position_infowindow_below_copy1

0x7a8f,	// (0x00013087) cset_list_set_pane_g1_copy1

0x7a97,	// (0x0001308f) cset_list_set_pane_g3_copy1_ParamLimits

0x7a97,	// (0x0001308f) cset_list_set_pane_g3_copy1

0x7aa6,	// (0x0001309e) cset_list_set_pane_t1_copy1_ParamLimits

0x7aa6,	// (0x0001309e) cset_list_set_pane_t1_copy1

0x9bf2,	// (0x000151ea) list_highlight_pane_cp021_copy1_ParamLimits

0x9bf2,	// (0x000151ea) list_highlight_pane_cp021_copy1

0xe1bb,	// (0x000197b3) cset6_slider_pane_ParamLimits

0xe1bb,	// (0x000197b3) cset6_slider_pane

0xe1e7,	// (0x000197df) main_cset6_slider_pane_g1_ParamLimits

0xe1e7,	// (0x000197df) main_cset6_slider_pane_g1

0x7abb,	// (0x000130b3) main_cset6_slider_pane_g2_ParamLimits

0x7abb,	// (0x000130b3) main_cset6_slider_pane_g2

0xd924,	// (0x00018f1c) main_cset6_slider_pane_g3_ParamLimits

0xd924,	// (0x00018f1c) main_cset6_slider_pane_g3

0x6bb6,	// (0x000121ae) main_cset6_slider_pane_g4_ParamLimits

0x6bb6,	// (0x000121ae) main_cset6_slider_pane_g4

0x6bfe,	// (0x000121f6) main_cset6_slider_pane_g5_ParamLimits

0x6bfe,	// (0x000121f6) main_cset6_slider_pane_g5

0xd924,	// (0x00018f1c) main_cset6_slider_pane_g7_ParamLimits

0xd924,	// (0x00018f1c) main_cset6_slider_pane_g7

0xd930,	// (0x00018f28) main_cset6_slider_pane_g8_ParamLimits

0xd930,	// (0x00018f28) main_cset6_slider_pane_g8

0x6b9e,	// (0x00012196) main_cset6_slider_pane_g9_ParamLimits

0x6b9e,	// (0x00012196) main_cset6_slider_pane_g9

0x6baa,	// (0x000121a2) main_cset6_slider_pane_g10_ParamLimits

0x6baa,	// (0x000121a2) main_cset6_slider_pane_g10

0x6bb6,	// (0x000121ae) main_cset6_slider_pane_g11_ParamLimits

0x6bb6,	// (0x000121ae) main_cset6_slider_pane_g11

0x6bc2,	// (0x000121ba) main_cset6_slider_pane_g12_ParamLimits

0x6bc2,	// (0x000121ba) main_cset6_slider_pane_g12

0x6bce,	// (0x000121c6) main_cset6_slider_pane_g13_ParamLimits

0x6bce,	// (0x000121c6) main_cset6_slider_pane_g13

0x6bda,	// (0x000121d2) main_cset6_slider_pane_g14_ParamLimits

0x6bda,	// (0x000121d2) main_cset6_slider_pane_g14

0x7ae3,	// (0x000130db) main_cset6_slider_pane_g15_ParamLimits

0x7ae3,	// (0x000130db) main_cset6_slider_pane_g15

0x6bfe,	// (0x000121f6) main_cset6_slider_pane_g16_ParamLimits

0x6bfe,	// (0x000121f6) main_cset6_slider_pane_g16

0x6c0a,	// (0x00012202) main_cset6_slider_pane_g17_ParamLimits

0x6c0a,	// (0x00012202) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x0001b140) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x0001b140) main_cset6_slider_pane_g

0xe20f,	// (0x00019807) main_cset6_slider_pane_t1_ParamLimits

0xe20f,	// (0x00019807) main_cset6_slider_pane_t1

0xe250,	// (0x00019848) main_cset6_slider_pane_t2_ParamLimits

0xe250,	// (0x00019848) main_cset6_slider_pane_t2

0xe27b,	// (0x00019873) main_cset6_slider_pane_t3_ParamLimits

0xe27b,	// (0x00019873) main_cset6_slider_pane_t3

0x7afb,	// (0x000130f3) main_cset6_slider_pane_t4_ParamLimits

0x7afb,	// (0x000130f3) main_cset6_slider_pane_t4

0x7b26,	// (0x0001311e) main_cset6_slider_pane_t5_ParamLimits

0x7b26,	// (0x0001311e) main_cset6_slider_pane_t5

0xe2a6,	// (0x0001989e) main_cset6_slider_pane_t7_ParamLimits

0xe2a6,	// (0x0001989e) main_cset6_slider_pane_t7

0x7b51,	// (0x00013149) main_cset6_slider_pane_t8_ParamLimits

0x7b51,	// (0x00013149) main_cset6_slider_pane_t8

0x7b75,	// (0x0001316d) main_cset6_slider_pane_t9_ParamLimits

0x7b75,	// (0x0001316d) main_cset6_slider_pane_t9

0x7b99,	// (0x00013191) main_cset6_slider_pane_t10_ParamLimits

0x7b99,	// (0x00013191) main_cset6_slider_pane_t10

0x7bbd,	// (0x000131b5) main_cset6_slider_pane_t11_ParamLimits

0x7bbd,	// (0x000131b5) main_cset6_slider_pane_t11

0xe2dc,	// (0x000198d4) main_cset6_slider_pane_t14_ParamLimits

0xe2dc,	// (0x000198d4) main_cset6_slider_pane_t14

0xe315,	// (0x0001990d) main_cset6_slider_pane_t15_ParamLimits

0xe315,	// (0x0001990d) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x0001b165) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x0001b165) main_cset6_slider_pane_t

0xda12,	// (0x0001900a) cset_slider_pane_g1_copy1

0xda1b,	// (0x00019013) cset_slider_pane_g2_copy1

0xda24,	// (0x0001901c) cset_slider_pane_g3_copy1

0x9b9f,	// (0x00015197) bg_popup_sub_pane_cp011_copy1

0xdae8,	// (0x000190e0) main_cset_text_pane_g1_copy1

0xdaf0,	// (0x000190e8) main_cset_text_pane_t1_copy1

0xdafe,	// (0x000190f6) main_cset_text_pane_t2_copy1

0xdb0c,	// (0x00019104) main_cset_text_pane_t3_copy1

0xdb1a,	// (0x00019112) main_cset_text_pane_t4_copy1

0xdb28,	// (0x00019120) main_cset_text_pane_t5_copy1

0xdb36,	// (0x0001912e) main_cset_text_pane_t6_copy1

0xdb44,	// (0x0001913c) main_cset_text_pane_t7_copy1

0x7bfe,	// (0x000131f6) main_cset_text2_pane_t1_copy1

0x9bf2,	// (0x000151ea) main_ncimui_pane

0x4dcf,	// (0x000103c7) popup_query_ncimui_window_ParamLimits

0x4dcf,	// (0x000103c7) popup_query_ncimui_window

0xcd70,	// (0x00018368) field_cale_ev2_pane_g4_ParamLimits

0xcd70,	// (0x00018368) field_cale_ev2_pane_g4

0x5f84,	// (0x0001157c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f84,	// (0x0001157c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x0001ae3f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x0001ae3f) cell_video_dialer_keypad_pane_g

0x5f9c,	// (0x00011594) cell_video_dialer_keypad_pane_t1

0x9b9f,	// (0x00015197) bg_popup_window_pane_cp012

0xadd1,	// (0x000163c9) heading_pane_cp06

0xe39e,	// (0x00019996) ncim_query_content_pane

0x9b9f,	// (0x00015197) bg_popup_heading_pane_cp01

0xe3a6,	// (0x0001999e) ncim_heading_pane_t1

0xe3b4,	// (0x000199ac) ncim_indicator_popup_pane

0xe3c6,	// (0x000199be) ncim_query_button_pane

0xe3da,	// (0x000199d2) ncim_query_content_pane_t1

0xe3ec,	// (0x000199e4) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x0001b1a9) ncim_query_content_pane_t

0xe426,	// (0x00019a1e) ncim_query_list_pane

0xe438,	// (0x00019a30) ncim_query_popup_pane

0xe3b4,	// (0x000199ac) ncim_indicator_popup_pane_ParamLimits

0x7d3d,	// (0x00013335) ncim_query_content_pane_g1_ParamLimits

0x7d3d,	// (0x00013335) ncim_query_content_pane_g1

0xe3da,	// (0x000199d2) ncim_query_content_pane_t1_ParamLimits

0xe3ec,	// (0x000199e4) ncim_query_content_pane_t2_ParamLimits

0x7d49,	// (0x00013341) ncim_query_content_pane_t3_ParamLimits

0x7d49,	// (0x00013341) ncim_query_content_pane_t3

0x7d71,	// (0x00013369) ncim_query_content_pane_t4_ParamLimits

0x7d71,	// (0x00013369) ncim_query_content_pane_t4

0x7d99,	// (0x00013391) ncim_query_content_pane_t5_ParamLimits

0x7d99,	// (0x00013391) ncim_query_content_pane_t5

0xe3fe,	// (0x000199f6) ncim_query_content_pane_t6_ParamLimits

0xe3fe,	// (0x000199f6) ncim_query_content_pane_t6

0xfbb1,	// (0x0001b1a9) ncim_query_content_pane_t_ParamLimits

0xe426,	// (0x00019a1e) ncim_query_list_pane_ParamLimits

0xe438,	// (0x00019a30) ncim_query_popup_pane_ParamLimits

0xe44c,	// (0x00019a44) wait_bar_pane_cp04

0x9b9f,	// (0x00015197) input_focus_pane_cp011

0xe454,	// (0x00019a4c) ncim_query_popup_pane_t1

0xe462,	// (0x00019a5a) ncim_list_query_list_pane_ParamLimits

0xe462,	// (0x00019a5a) ncim_list_query_list_pane

0x9b9f,	// (0x00015197) bg_button_pane_cp027

0xe475,	// (0x00019a6d) ncim_query_button_pane_g1

0x9b9f,	// (0x00015197) list_highlight_pane_cp012

0xe47f,	// (0x00019a77) ncim_list_query_list_pane_g1

0xe487,	// (0x00019a7f) ncim_list_query_list_pane_t1

0xd6f0,	// (0x00018ce8) cam4_indicators_pane_g3_ParamLimits

0xd6f0,	// (0x00018ce8) cam4_indicators_pane_g3

0xd74f,	// (0x00018d47) vid4_indicators_pane_g5_ParamLimits

0xd74f,	// (0x00018d47) vid4_indicators_pane_g5

0xab8e,	// (0x00016186) vid4_progress_pane_g5_ParamLimits

0xab8e,	// (0x00016186) vid4_progress_pane_g5

0x7c2d,	// (0x00013225) main_ncimui_pane_g1

0x7c93,	// (0x0001328b) ncimui_group_query_pane_ParamLimits

0x7c93,	// (0x0001328b) ncimui_group_query_pane

0x7cdb,	// (0x000132d3) ncimui_list_pane_ParamLimits

0x7cdb,	// (0x000132d3) ncimui_list_pane

0x7d00,	// (0x000132f8) ncimui_text_pane_ParamLimits

0x7d00,	// (0x000132f8) ncimui_text_pane

0x7dc1,	// (0x000133b9) ncimui_text_pane_t1_ParamLimits

0x7dc1,	// (0x000133b9) ncimui_text_pane_t1

0xe49e,	// (0x00019a96) ncimui_list_single_graphic_pane_ParamLimits

0xe49e,	// (0x00019a96) ncimui_list_single_graphic_pane

0x7ddf,	// (0x000133d7) ncimui_query_pane_ParamLimits

0x7ddf,	// (0x000133d7) ncimui_query_pane

0x9b9f,	// (0x00015197) list_highlight_pane_cp013

0xe4ae,	// (0x00019aa6) ncim_list_query_list_pane_t1_copy1

0xe4bc,	// (0x00019ab4) ncim_list_single_graphic_pane_g1

0xe4c4,	// (0x00019abc) ncim_query_button_pane_cp01

0xe4d0,	// (0x00019ac8) ncim_query_entry_pane_ParamLimits

0xe4d0,	// (0x00019ac8) ncim_query_entry_pane

0xe4e3,	// (0x00019adb) ncimui_query_pane_g1

0xe4ef,	// (0x00019ae7) ncimui_query_pane_t1_ParamLimits

0xe4ef,	// (0x00019ae7) ncimui_query_pane_t1

0x9bf2,	// (0x000151ea) input_focus_pane_cp012

0xe508,	// (0x00019b00) ncim_query_entry_pane_t1

0xa37e,	// (0x00015976) main_im_pane_ParamLimits

0x9bf2,	// (0x000151ea) main_mobtv_pane_ParamLimits

0x9bf2,	// (0x000151ea) main_mobtv_pane

0x6b9e,	// (0x00012196) main_cset6_slider_pane_g18_ParamLimits

0x6b9e,	// (0x00012196) main_cset6_slider_pane_g18

0x6bce,	// (0x000121c6) main_cset6_slider_pane_g19_ParamLimits

0x6bce,	// (0x000121c6) main_cset6_slider_pane_g19

0xa302,	// (0x000158fa) bg_main_mobtv_pane_ParamLimits

0xa302,	// (0x000158fa) bg_main_mobtv_pane

0x7def,	// (0x000133e7) main_mobtv_info_pane

0x7df8,	// (0x000133f0) main_mobtv_loading_pane_ParamLimits

0x7df8,	// (0x000133f0) main_mobtv_loading_pane

0xe51a,	// (0x00019b12) main_mobtv_pg_channel_list_pane

0xe524,	// (0x00019b1c) main_mobtv_pg_hdr_pane

0x7e05,	// (0x000133fd) main_mobtv_programe_curr_pane_ParamLimits

0x7e05,	// (0x000133fd) main_mobtv_programe_curr_pane

0x7e12,	// (0x0001340a) main_mobtv_programe_next_pane_ParamLimits

0x7e12,	// (0x0001340a) main_mobtv_programe_next_pane

0xe52d,	// (0x00019b25) popup_mobtv_noti_window

0xa65b,	// (0x00015c53) main_tv_pg_hdr_pane_g1

0xe535,	// (0x00019b2d) main_tv_pg_hdr_pane_g2

0xe53d,	// (0x00019b35) main_tv_pg_hdr_pane_g3

0xe545,	// (0x00019b3d) main_tv_pg_hdr_pane_g4

0xe54d,	// (0x00019b45) main_tv_pg_hdr_pane_g5

0xe555,	// (0x00019b4d) main_tv_pg_hdr_pane_g6

0xe55d,	// (0x00019b55) main_tv_pg_hdr_pane_g7

0xe565,	// (0x00019b5d) main_tv_pg_hdr_pane_g8

0xe56d,	// (0x00019b65) main_tv_pg_hdr_pane_g9

0xe575,	// (0x00019b6d) main_tv_pg_hdr_pane_g10

0xe57f,	// (0x00019b77) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x0001b1b6) main_tv_pg_hdr_pane_g

0xe589,	// (0x00019b81) main_tv_pg_hdr_pane_t1

0xe597,	// (0x00019b8f) main_tv_pg_hdr_pane_t2

0xe5a5,	// (0x00019b9d) main_tv_pg_hdr_pane_t3

0xe5b3,	// (0x00019bab) main_tv_pg_hdr_pane_t4

0xe5c1,	// (0x00019bb9) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x0001b1cd) main_tv_pg_hdr_pane_t

0xe5cf,	// (0x00019bc7) single_mobtv_pg_channel_pane_ParamLimits

0xe5cf,	// (0x00019bc7) single_mobtv_pg_channel_pane

0xe5e1,	// (0x00019bd9) single_mobtv_pg_channel_table_pane

0xe5ea,	// (0x00019be2) single_mobtv_pg_channel_thumb_pane

0xe5f3,	// (0x00019beb) single_tv_pg_channel_pane_g1

0xe5fc,	// (0x00019bf4) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x0001b1d8) single_tv_pg_channel_pane_g

0xa2e6,	// (0x000158de) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa2e6,	// (0x000158de) bg_single_mobtv_pg_channel_thumb_pane

0xe605,	// (0x00019bfd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe605,	// (0x00019bfd) single_mobtv_pg_channel_thumb_pane_g1

0xe613,	// (0x00019c0b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe613,	// (0x00019c0b) single_mobtv_pg_channel_thumb_pane_g2

0xe61f,	// (0x00019c17) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe61f,	// (0x00019c17) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x0001b1dd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x0001b1dd) single_mobtv_pg_channel_thumb_pane_g

0xe62b,	// (0x00019c23) single_mobtv_pg_channel_thumb_pane_t1

0xe639,	// (0x00019c31) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x0001b1e4) single_mobtv_pg_channel_thumb_pane_t

0xa65b,	// (0x00015c53) bg_single_mobtv_pg_channel_table_pane_g1

0xa65b,	// (0x00015c53) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x0001a9e7) bg_single_mobtv_pg_channel_table_pane_g

0xe647,	// (0x00019c3f) single_mobtv_pg_channel_table_pane_t1

0xe655,	// (0x00019c4d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x0001b1e9) single_mobtv_pg_channel_table_pane_t

0x7e27,	// (0x0001341f) main_mobtv_info_pane_g1_ParamLimits

0x7e27,	// (0x0001341f) main_mobtv_info_pane_g1

0x7e43,	// (0x0001343b) main_mobtv_info_pane_t1_ParamLimits

0x7e43,	// (0x0001343b) main_mobtv_info_pane_t1

0x7ea9,	// (0x000134a1) main_mobtv_info_pane_t2_ParamLimits

0x7ea9,	// (0x000134a1) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x0001b1f3) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x0001b1f3) main_mobtv_info_pane_t

0x7f2c,	// (0x00013524) wait_bar_pane_cp05

0x7f3c,	// (0x00013534) main_mobtv_loading_pane_g1_ParamLimits

0x7f3c,	// (0x00013534) main_mobtv_loading_pane_g1

0x7f4d,	// (0x00013545) main_mobtv_loading_pane_g2_ParamLimits

0x7f4d,	// (0x00013545) main_mobtv_loading_pane_g2

0x7f59,	// (0x00013551) main_mobtv_loading_pane_g3_ParamLimits

0x7f59,	// (0x00013551) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x0001b1fa) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x0001b1fa) main_mobtv_loading_pane_g

0xe663,	// (0x00019c5b) main_mobtv_loading_pane_t1_ParamLimits

0xe663,	// (0x00019c5b) main_mobtv_loading_pane_t1

0xe67b,	// (0x00019c73) main_mobtv_loading_pane_t2_ParamLimits

0xe67b,	// (0x00019c73) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x0001b201) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x0001b201) main_mobtv_loading_pane_t

0x7f6a,	// (0x00013562) wait_bar_pane_cp06_ParamLimits

0x7f6a,	// (0x00013562) wait_bar_pane_cp06

0xe69f,	// (0x00019c97) main_mobtv_programe_curr_pane_t1

0xe6ad,	// (0x00019ca5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x0001b206) main_mobtv_programe_curr_pane_t

0xe6bb,	// (0x00019cb3) main_mobtv_programe_next_pane_t1

0xe6c9,	// (0x00019cc1) main_mobtv_programe_next_pane_t2

0xe6d7,	// (0x00019ccf) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x0001b20b) main_mobtv_programe_next_pane_t

0x9b9f,	// (0x00015197) bg_popup_mobtv_noti_window_pane

0xe6e5,	// (0x00019cdd) popup_mobtv_noti_window_g1

0xe6ed,	// (0x00019ce5) popup_mobtv_noti_window_t1

0xe6fb,	// (0x00019cf3) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x0001b212) popup_mobtv_noti_window_t

0xa65b,	// (0x00015c53) bg_popup_mobtv_noti_window_pane_g1

0x9b9f,	// (0x00015197) sc_clock_pane

0x9b9f,	// (0x00015197) main_fs_bigclock_pane

0x7774,	// (0x00012d6c) blid2_tripm_pane_t4_ParamLimits

0x7774,	// (0x00012d6c) blid2_tripm_pane_t4

0x7f79,	// (0x00013571) sc_clock_pane_g1_ParamLimits

0x7f79,	// (0x00013571) sc_clock_pane_g1

0x7f8b,	// (0x00013583) sc_clock_pane_t1_ParamLimits

0x7f8b,	// (0x00013583) sc_clock_pane_t1

0x7fad,	// (0x000135a5) sc_clock_pane_t2_ParamLimits

0x7fad,	// (0x000135a5) sc_clock_pane_t2

0x7fc3,	// (0x000135bb) sc_clock_pane_t3_ParamLimits

0x7fc3,	// (0x000135bb) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x0001b217) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x0001b217) sc_clock_pane_t

0x8db9,	// (0x000143b1) main_fs_bigclock_indicator_pane_ParamLimits

0x8db9,	// (0x000143b1) main_fs_bigclock_indicator_pane

0x805f,	// (0x00013657) main_fs_bigclock_pane_g1_ParamLimits

0x805f,	// (0x00013657) main_fs_bigclock_pane_g1

0x8dc5,	// (0x000143bd) main_fs_bigclock_pane_t1_ParamLimits

0x8dc5,	// (0x000143bd) main_fs_bigclock_pane_t1

0x8dd7,	// (0x000143cf) main_fs_bigclock_pane_t2_ParamLimits

0x8dd7,	// (0x000143cf) main_fs_bigclock_pane_t2

0x8de9,	// (0x000143e1) main_fs_bigclock_pane_t3_ParamLimits

0x8de9,	// (0x000143e1) main_fs_bigclock_pane_t3

0x0002,

0xfde3,	// (0x0001b3db) main_fs_bigclock_pane_t_ParamLimits

0xfde3,	// (0x0001b3db) main_fs_bigclock_pane_t

0x0170,	// (0x0000b768) main_fs_bigclock_indicator_pane_g1

0xe3ce,	// (0x000199c6) ncim_query_content_pane_g2_ParamLimits

0xe3ce,	// (0x000199c6) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x0001b1a4) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x0001b1a4) ncim_query_content_pane_g

0x7fda,	// (0x000135d2) sc_clock_pane_t4_ParamLimits

0x7fda,	// (0x000135d2) sc_clock_pane_t4

0x9bf2,	// (0x000151ea) main_radioblah_pane

0xd638,	// (0x00018c30) cell_call4_button_pane_t1_copy1_ParamLimits

0xd638,	// (0x00018c30) cell_call4_button_pane_t1_copy1

0x7c45,	// (0x0001323d) main_ncimui_pane_t1_ParamLimits

0x7c45,	// (0x0001323d) main_ncimui_pane_t1

0x7c5f,	// (0x00013257) main_ncimui_pane_t2_ParamLimits

0x7c5f,	// (0x00013257) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x0001b19d) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x0001b19d) main_ncimui_pane_t

0xe83c,	// (0x00019e34) main_radioblah_anim_pane_ParamLimits

0xe83c,	// (0x00019e34) main_radioblah_anim_pane

0xe84d,	// (0x00019e45) main_radioblah_info_pane_ParamLimits

0xe84d,	// (0x00019e45) main_radioblah_info_pane

0xe861,	// (0x00019e59) main_radioblah_pane_t1_ParamLimits

0xe861,	// (0x00019e59) main_radioblah_pane_t1

0xe87d,	// (0x00019e75) main_radioblah_pane_t2_ParamLimits

0xe87d,	// (0x00019e75) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x0001b238) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x0001b238) main_radioblah_pane_t

0x80a9,	// (0x000136a1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x80a9,	// (0x000136a1) main_radioblah_rocker_ctrl_pane

0xe8c5,	// (0x00019ebd) main_radioblah_info_pane_t1_ParamLimits

0xe8c5,	// (0x00019ebd) main_radioblah_info_pane_t1

0x80fd,	// (0x000136f5) main_radioblah_info_pane_t2_ParamLimits

0x80fd,	// (0x000136f5) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x0001b241) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x0001b241) main_radioblah_info_pane_t

0xa65b,	// (0x00015c53) main_radioblah_rocker_ctrl_pane_g1

0x81ab,	// (0x000137a3) main_radioblah_rocker_ctrl_pane_g2

0x81b3,	// (0x000137ab) main_radioblah_rocker_ctrl_pane_g3

0x81bb,	// (0x000137b3) main_radioblah_rocker_ctrl_pane_g4

0x81c3,	// (0x000137bb) main_radioblah_rocker_ctrl_pane_g5

0x81cb,	// (0x000137c3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x0001b24a) main_radioblah_rocker_ctrl_pane_g

0x7bfe,	// (0x000131f6) main_cset_text2_pane_t1_copy1_ParamLimits

0xd6c0,	// (0x00018cb8) cam4_image_uncrop_qvga_pane

0xd71a,	// (0x00018d12) vid4_image_uncrop_qcif_pane

0xdfd3,	// (0x000195cb) cam6_image_uncrop_qvga_pane_ParamLimits

0xdfd3,	// (0x000195cb) cam6_image_uncrop_qvga_pane

0xe099,	// (0x00019691) vid6_image_uncrop_qcif_pane_ParamLimits

0xe099,	// (0x00019691) vid6_image_uncrop_qcif_pane

0x9b9f,	// (0x00015197) bg_popup_preview_window_pane_cp03

0xe374,	// (0x0001996c) list_cset_text2_pane

0xe37c,	// (0x00019974) main_cset6_text2_pane_g1

0xe384,	// (0x0001997c) main_cset6_text2_pane_t1

0x81d3,	// (0x000137cb) list_cset_text2_pane_t1_ParamLimits

0x81d3,	// (0x000137cb) list_cset_text2_pane_t1

0x9bf2,	// (0x000151ea) main_radioblah_pane_ParamLimits

0x7f1a,	// (0x00013512) main_mobtv_info_pane_t3_ParamLimits

0x7f1a,	// (0x00013512) main_mobtv_info_pane_t3

0x8097,	// (0x0001368f) main_radioblah_pane_g1

0x80d1,	// (0x000136c9) main_radioblah_info_pane_g1

0x8150,	// (0x00013748) main_radioblah_info_pane_t3_ParamLimits

0x8150,	// (0x00013748) main_radioblah_info_pane_t3

0x3cd6,	// (0x0000f2ce) highlight_cell_cale_month_pane_ParamLimits

0x3cd6,	// (0x0000f2ce) highlight_cell_cale_month_pane

0x9b9f,	// (0x00015197) main_phob_fisheye_pane

0xce47,	// (0x0001843f) scroll_pane_cp0031_ParamLimits

0xce47,	// (0x0001843f) scroll_pane_cp0031

0xe1a3,	// (0x0001979b) wait_bar_pane_cp08_ParamLimits

0x7a6d,	// (0x00013065) cset_list_set_pane_copy1_ParamLimits

0xe8ff,	// (0x00019ef7) highlight_cell_cale_month_pane_g1

0x81ec,	// (0x000137e4) highlight_cell_cale_month_pane_t1

0xe907,	// (0x00019eff) list_gen_pane_cp01

0xd90f,	// (0x00018f07) scroll_pane_01

0x81fa,	// (0x000137f2) list_single_double_fisheye_pane

0x8203,	// (0x000137fb) list_double_fisheye_pane_g1_ParamLimits

0x8203,	// (0x000137fb) list_double_fisheye_pane_g1

0x820f,	// (0x00013807) list_double_fisheye_pane_g2_ParamLimits

0x820f,	// (0x00013807) list_double_fisheye_pane_g2

0x821b,	// (0x00013813) list_double_fisheye_pane_g3_ParamLimits

0x821b,	// (0x00013813) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x0001b257) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x0001b257) list_double_fisheye_pane_g

0x823f,	// (0x00013837) list_double_fisheye_pane_t1_ParamLimits

0x823f,	// (0x00013837) list_double_fisheye_pane_t1

0x825a,	// (0x00013852) list_double_fisheye_pane_t2_ParamLimits

0x825a,	// (0x00013852) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x0001b262) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x0001b262) list_double_fisheye_pane_t

0x9b9f,	// (0x00015197) main_call5_pane

0x8003,	// (0x000135fb) sc_swipe_pane_ParamLimits

0x8003,	// (0x000135fb) sc_swipe_pane

0x828d,	// (0x00013885) call5_image_pane_ParamLimits

0x828d,	// (0x00013885) call5_image_pane

0x82a2,	// (0x0001389a) call5_swipe_1_pane_ParamLimits

0x82a2,	// (0x0001389a) call5_swipe_1_pane

0x82b3,	// (0x000138ab) call5_swipe_2_pane_ParamLimits

0x82b3,	// (0x000138ab) call5_swipe_2_pane

0x82d8,	// (0x000138d0) popup_call5_audio_first_window_ParamLimits

0x82d8,	// (0x000138d0) popup_call5_audio_first_window

0xa2e6,	// (0x000158de) call5_swipe_1_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) call5_swipe_1_pane_g1

0xe910,	// (0x00019f08) call5_swipe_1_pane_g2_ParamLimits

0xe910,	// (0x00019f08) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x0001b267) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x0001b267) call5_swipe_1_pane_g

0xe91c,	// (0x00019f14) call5_swipe_1_pane_t1_ParamLimits

0xe91c,	// (0x00019f14) call5_swipe_1_pane_t1

0xa2e6,	// (0x000158de) call5_swipe_2_pane_g1_ParamLimits

0xa2e6,	// (0x000158de) call5_swipe_2_pane_g1

0xe931,	// (0x00019f29) call5_swipe_2_pane_g2_ParamLimits

0xe931,	// (0x00019f29) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x0001b26c) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x0001b26c) call5_swipe_2_pane_g

0xe93d,	// (0x00019f35) call5_swipe_2_pane_t1_ParamLimits

0xe93d,	// (0x00019f35) call5_swipe_2_pane_t1

0xe952,	// (0x00019f4a) sc_swipe_pane_g1_ParamLimits

0xe952,	// (0x00019f4a) sc_swipe_pane_g1

0xe95f,	// (0x00019f57) sc_swipe_pane_g2_ParamLimits

0xe95f,	// (0x00019f57) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x0001b271) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x0001b271) sc_swipe_pane_g

0xe96b,	// (0x00019f63) sc_swipe_pane_t1_ParamLimits

0xe96b,	// (0x00019f63) sc_swipe_pane_t1

0x9b9f,	// (0x00015197) main_cmail_launcher_pane

0x82e7,	// (0x000138df) aid_size_cell_cmail_l_ParamLimits

0x82e7,	// (0x000138df) aid_size_cell_cmail_l

0x8300,	// (0x000138f8) grid_cmail_l_pane_ParamLimits

0x8300,	// (0x000138f8) grid_cmail_l_pane

0x8315,	// (0x0001390d) cell_cmail_l_pane_ParamLimits

0x8315,	// (0x0001390d) cell_cmail_l_pane

0x8337,	// (0x0001392f) cell_cmail_l_pane_g1_ParamLimits

0x8337,	// (0x0001392f) cell_cmail_l_pane_g1

0x8347,	// (0x0001393f) cell_cmail_l_pane_t1_ParamLimits

0x8347,	// (0x0001393f) cell_cmail_l_pane_t1

0x835d,	// (0x00013955) cell_cmail_l_pane_t2_ParamLimits

0x835d,	// (0x00013955) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x0001b276) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x0001b276) cell_cmail_l_pane_t

0x9bf2,	// (0x000151ea) grid_highlight_pane_cp018_ParamLimits

0x9bf2,	// (0x000151ea) grid_highlight_pane_cp018

0x2236,	// (0x0000d82e) main2_pane_ParamLimits

0x2236,	// (0x0000d82e) main2_pane

0xa477,	// (0x00015a6f) popup_sp_fs_action_menu_bg_pane_g1

0xa47f,	// (0x00015a77) popup_sp_fs_action_menu_bg_pane_g2

0xa487,	// (0x00015a7f) popup_sp_fs_action_menu_bg_pane_g3

0xa48f,	// (0x00015a87) popup_sp_fs_action_menu_bg_pane_g4

0xa497,	// (0x00015a8f) popup_sp_fs_action_menu_bg_pane_g5

0xa49f,	// (0x00015a97) popup_sp_fs_action_menu_bg_pane_g6

0xa4a7,	// (0x00015a9f) popup_sp_fs_action_menu_bg_pane_g7

0xa4af,	// (0x00015aa7) popup_sp_fs_action_menu_bg_pane_g8

0xa4b7,	// (0x00015aaf) popup_sp_fs_action_menu_bg_pane_g9

0xa4bf,	// (0x00015ab7) popup_sp_fs_action_menu_bg_pane_g10

0xa4bf,	// (0x00015ab7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0001a73d) popup_sp_fs_action_menu_bg_pane_g

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g3_g1

0xa681,	// (0x00015c79) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x2_t3_g3_g2

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0001a7eb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0001a7eb) list_medium_line_x2_t3_g3_g

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g3_t1

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g3_t2

0xa6a0,	// (0x00015c98) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa6a0,	// (0x00015c98) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0001a7f2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0001a7f2) list_medium_line_x2_t3_g3_t

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g2_g1

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0001a7f9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0001a7f9) list_medium_line_x2_t3_g2_g

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g2_t1

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g2_t2

0xa6a0,	// (0x00015c98) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa6a0,	// (0x00015c98) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0001a7f2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0001a7f2) list_medium_line_x2_t3_g2_t

0xa675,	// (0x00015c6d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t4_g4_g1

0xa681,	// (0x00015c79) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x2_t4_g4_g2

0xa681,	// (0x00015c79) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x2_t4_g4_g3

0xa675,	// (0x00015c6d) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0001a7fe) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0001a7fe) list_medium_line_x2_t4_g4_g

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g4_t1

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g4_t2

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g4_t3

0xa6a0,	// (0x00015c98) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa6a0,	// (0x00015c98) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0001a807) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0001a807) list_medium_line_x2_t4_g4_t

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g4_g1

0xa681,	// (0x00015c79) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x2_t2_g4_g2

0xa681,	// (0x00015c79) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x2_t2_g4_g3

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0001a7fe) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0001a7fe) list_medium_line_x2_t2_g4_g

0xa68d,	// (0x00015c85) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t2_g4_t1

0xa6a0,	// (0x00015c98) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa6a0,	// (0x00015c98) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0001a86e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0001a86e) list_medium_line_x2_t2_g4_t

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g3_g1

0xa681,	// (0x00015c79) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x2_t2_g3_g2

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0001a7eb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0001a7eb) list_medium_line_x2_t2_g3_g

0xa68d,	// (0x00015c85) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t2_g3_t1

0xa6a0,	// (0x00015c98) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa6a0,	// (0x00015c98) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0001a86e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0001a86e) list_medium_line_x2_t2_g3_t

0x3e33,	// (0x0000f42b) main_sp_fs_list_pane_ParamLimits

0x3e33,	// (0x0000f42b) main_sp_fs_list_pane

0x3e40,	// (0x0000f438) sp_fs_scroll_pane_ParamLimits

0x3e40,	// (0x0000f438) sp_fs_scroll_pane

0xabe3,	// (0x000161db) list_medium_line_x2_t3_t1

0xabe3,	// (0x000161db) list_medium_line_x2_t3_t2

0xabf2,	// (0x000161ea) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0001a8b9) list_medium_line_x2_t3_t

0xabe3,	// (0x000161db) list_medium_line_x3_t4_t1

0xabe3,	// (0x000161db) list_medium_line_x3_t4_t2

0xabe3,	// (0x000161db) list_medium_line_x3_t4_t3

0xabe3,	// (0x000161db) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0001a8c0) list_medium_line_x3_t4_t

0xabe3,	// (0x000161db) list_medium_line_x4_t5_t1

0xabe3,	// (0x000161db) list_medium_line_x4_t5_t2

0xabe3,	// (0x000161db) list_medium_line_x4_t5_t3

0xabe3,	// (0x000161db) list_medium_line_x4_t5_t4

0xabe3,	// (0x000161db) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0001a8c9) list_medium_line_x4_t5_t

0xa675,	// (0x00015c6d) list_medium_line_t4_g4_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t4_g4_g1

0xa675,	// (0x00015c6d) list_medium_line_t4_g4_g2_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t4_g4_g2

0xa675,	// (0x00015c6d) list_medium_line_t4_g4_g3_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t4_g4_g3

0xa675,	// (0x00015c6d) list_medium_line_t4_g4_g4_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x0001a8d4) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x0001a8d4) list_medium_line_t4_g4_g

0xa68d,	// (0x00015c85) list_medium_line_t4_g4_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t4_g4_t1

0xa68d,	// (0x00015c85) list_medium_line_t4_g4_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t4_g4_t2

0xa68d,	// (0x00015c85) list_medium_line_t4_g4_t3_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t4_g4_t3

0xa68d,	// (0x00015c85) list_medium_line_t4_g4_t4_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x0001a8dd) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x0001a8dd) list_medium_line_t4_g4_t

0x3f0e,	// (0x0000f506) chi_dic_find_pane_g1

0x4bd5,	// (0x000101cd) main_tport_pane

0xabe3,	// (0x000161db) list_medium_line_plain_t1

0xa675,	// (0x00015c6d) list_medium_line_t2_g2_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t2_g2_g1

0xda9c,	// (0x00019094) list_medium_line_t2_g2_g2_ParamLimits

0xda9c,	// (0x00019094) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x0001afae) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x0001afae) list_medium_line_t2_g2_g

0xa68d,	// (0x00015c85) list_medium_line_t2_g2_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t2_g2_t1

0xa68d,	// (0x00015c85) list_medium_line_t2_g2_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x0001afb3) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x0001afb3) list_medium_line_t2_g2_t

0xde41,	// (0x00019439) aid_sp_fs_list_icon_a_sm

0xde49,	// (0x00019441) aid_sp_fs_list_icon_d

0xde51,	// (0x00019449) aid_sp_fs_text_primary

0xde5a,	// (0x00019452) aid_sp_fs_text_secondary

0xde63,	// (0x0001945b) list_medium_line

0xde63,	// (0x0001945b) list_medium_line_g2

0xde63,	// (0x0001945b) list_medium_line_g3

0xde63,	// (0x0001945b) list_medium_line_plain

0xde63,	// (0x0001945b) list_medium_line_plain_t2

0xde63,	// (0x0001945b) list_medium_line_plain_t3

0xde63,	// (0x0001945b) list_medium_line_right_icon

0xde63,	// (0x0001945b) list_medium_line_right_iconx2

0xde63,	// (0x0001945b) list_medium_line_t2

0xde63,	// (0x0001945b) list_medium_line_t2_g2

0xde63,	// (0x0001945b) list_medium_line_t2_g3

0xde63,	// (0x0001945b) list_medium_line_t2_right_icon

0xde63,	// (0x0001945b) list_medium_line_t2_right_iconx2

0xde63,	// (0x0001945b) list_medium_line_t3

0xde63,	// (0x0001945b) list_medium_line_t3_g2

0xde63,	// (0x0001945b) list_medium_line_t3_g3

0xde63,	// (0x0001945b) list_medium_line_t3_right_iconx2

0x751f,	// (0x00012b17) list_medium_line_t4_g4

0xde63,	// (0x0001945b) list_medium_line_x2

0xde63,	// (0x0001945b) list_medium_line_x2_t2_g2

0xde63,	// (0x0001945b) list_medium_line_x2_t2_g3

0xde63,	// (0x0001945b) list_medium_line_x2_t2_g4

0xde63,	// (0x0001945b) list_medium_line_x2_t3

0xde63,	// (0x0001945b) list_medium_line_x2_t3_g2

0xde63,	// (0x0001945b) list_medium_line_x2_t3_g3

0xde63,	// (0x0001945b) list_medium_line_x2_t3_g4

0xde63,	// (0x0001945b) list_medium_line_x2_t4_g2

0xde63,	// (0x0001945b) list_medium_line_x2_t4_g4

0x7528,	// (0x00012b20) list_medium_line_x3

0x7528,	// (0x00012b20) list_medium_line_x3_t4

0x7528,	// (0x00012b20) list_medium_line_x3_t4_g4

0x751f,	// (0x00012b17) list_medium_line_x4_t4

0x751f,	// (0x00012b17) list_medium_line_x4_t4_g7

0x751f,	// (0x00012b17) list_medium_line_x4_t5

0x7531,	// (0x00012b29) list_single_fs_dyc_pane_ParamLimits

0x7531,	// (0x00012b29) list_single_fs_dyc_pane

0xa675,	// (0x00015c6d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x4_t4_g7_g1

0xa2e6,	// (0x000158de) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa2e6,	// (0x000158de) list_medium_line_x4_t4_g7_g2

0xa681,	// (0x00015c79) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x4_t4_g7_g3

0xa2e6,	// (0x000158de) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa2e6,	// (0x000158de) list_medium_line_x4_t4_g7_g4

0xa2e6,	// (0x000158de) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa2e6,	// (0x000158de) list_medium_line_x4_t4_g7_g5

0xa2e6,	// (0x000158de) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa2e6,	// (0x000158de) list_medium_line_x4_t4_g7_g6

0xa2f4,	// (0x000158ec) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa2f4,	// (0x000158ec) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x0001b17e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x0001b17e) list_medium_line_x4_t4_g7_g

0xa68d,	// (0x00015c85) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x4_t4_g7_t1

0xa68d,	// (0x00015c85) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x4_t4_g7_t2

0xa68d,	// (0x00015c85) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x4_t4_g7_t3

0xe34e,	// (0x00019946) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe34e,	// (0x00019946) list_medium_line_x4_t4_g7_t4

0xe361,	// (0x00019959) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe361,	// (0x00019959) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x0001b18d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x0001b18d) list_medium_line_x4_t4_g7_t

0x7be1,	// (0x000131d9) list_single_dyc_row_pane_ParamLimits

0x7be1,	// (0x000131d9) list_single_dyc_row_pane

0x827c,	// (0x00013874) call5_gesture_pane_ParamLimits

0x827c,	// (0x00013874) call5_gesture_pane

0x82c4,	// (0x000138bc) call5_windows_pane_ParamLimits

0x82c4,	// (0x000138bc) call5_windows_pane

0x8375,	// (0x0001396d) call5_swipe_1_pane_cp_ParamLimits

0x8375,	// (0x0001396d) call5_swipe_1_pane_cp

0x8381,	// (0x00013979) call5_swipe_2_pane_cp_ParamLimits

0x8381,	// (0x00013979) call5_swipe_2_pane_cp

0xa5e3,	// (0x00015bdb) call5_image_pane_cp

0x838d,	// (0x00013985) popup_call5_audio_first_window_cp_ParamLimits

0x838d,	// (0x00013985) popup_call5_audio_first_window_cp

0xe952,	// (0x00019f4a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe952,	// (0x00019f4a) call5_swipe_1_pane_g1_cp

0xe997,	// (0x00019f8f) call5_swipe_1_pane_g2_cp

0xe96b,	// (0x00019f63) call5_swipe_1_pane_t1_cp_ParamLimits

0xe96b,	// (0x00019f63) call5_swipe_1_pane_t1_cp

0xe952,	// (0x00019f4a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe952,	// (0x00019f4a) call5_swipe_2_pane_g1_cp

0xe99f,	// (0x00019f97) call5_swipe_2_pane_g2_cp

0xe9a7,	// (0x00019f9f) call5_swipe_2_pane_t1_cp_ParamLimits

0xe9a7,	// (0x00019f9f) call5_swipe_2_pane_t1_cp

0x9bf2,	// (0x000151ea) main_sp_fs_email_pane

0xe9bc,	// (0x00019fb4) main_sp_fs_listscroll_pane_te

0x8399,	// (0x00013991) popup_sp_fs_action_menu_pane_ParamLimits

0x8399,	// (0x00013991) popup_sp_fs_action_menu_pane

0xa65b,	// (0x00015c53) bg_sp_fs_ctrlbar_pane_g1

0xd07b,	// (0x00018673) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd08d,	// (0x00018685) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd084,	// (0x0001867c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa65b,	// (0x00015c53) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x0001b27b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc78e,	// (0x00017d86) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc78e,	// (0x00017d86) bg_sp_fs_ctrlbar_ddmenu_pane

0xe9c5,	// (0x00019fbd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe9c5,	// (0x00019fbd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe9d1,	// (0x00019fc9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe9d1,	// (0x00019fc9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x0001b284) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x0001b284) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe9dd,	// (0x00019fd5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe9dd,	// (0x00019fd5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe9f7,	// (0x00019fef) list_medium_line_t2_right_icon_g1

0xabe3,	// (0x000161db) list_medium_line_t2_right_icon_t1

0xabe3,	// (0x000161db) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x0001b289) list_medium_line_t2_right_icon_t

0xb1ee,	// (0x000167e6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb1ee,	// (0x000167e6) bg_sp_fs_ctrlbar_pane

0x8411,	// (0x00013a09) main_sp_fs_ctrlbar_button_pane_cp01

0x8419,	// (0x00013a11) main_sp_fs_ctrlbar_ddmenu_pane

0xea37,	// (0x0001a02f) main_sp_fs_ctrlbar_pane_g1

0xea43,	// (0x0001a03b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x0001b28e) main_sp_fs_ctrlbar_pane_g

0x8455,	// (0x00013a4d) main_sp_fs_ctrlbar_pane_t1

0x849e,	// (0x00013a96) main_sp_fs_ctrlbar_pane

0x84bf,	// (0x00013ab7) main_sp_fs_listscroll_pane_te_cp01

0x84df,	// (0x00013ad7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x84df,	// (0x00013ad7) popup_sp_fs_action_menu_pane_cp01

0x9bf2,	// (0x000151ea) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9bf2,	// (0x000151ea) bg_sp_fs_highlight_list_pane_cp01

0x8509,	// (0x00013b01) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8509,	// (0x00013b01) sp_fs_action_menu_list_gene_pane_g1

0xea6a,	// (0x0001a062) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xea6a,	// (0x0001a062) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x0001b29c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x0001b29c) sp_fs_action_menu_list_gene_pane_g

0x8518,	// (0x00013b10) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8518,	// (0x00013b10) sp_fs_action_menu_list_gene_pane_t1

0x8530,	// (0x00013b28) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8530,	// (0x00013b28) sp_fs_action_menu_list_gene_pane

0xea77,	// (0x0001a06f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xea77,	// (0x0001a06f) popup_sp_fs_action_menu_bg_pane

0x854d,	// (0x00013b45) sp_fs_action_menu_list_pane_ParamLimits

0x854d,	// (0x00013b45) sp_fs_action_menu_list_pane

0xea85,	// (0x0001a07d) sp_fs_scroll_pane_cp01_ParamLimits

0xea85,	// (0x0001a07d) sp_fs_scroll_pane_cp01

0xabe3,	// (0x000161db) list_medium_line_plain_t2_t1

0xabe3,	// (0x000161db) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x0001b289) list_medium_line_plain_t2_t

0xabe3,	// (0x000161db) list_medium_line_plain_t3_t1

0xabe3,	// (0x000161db) list_medium_line_plain_t3_t2

0xabe3,	// (0x000161db) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x0001b2a1) list_medium_line_plain_t3_t

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g2_g1

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0001a7f9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0001a7f9) list_medium_line_x2_t2_g2_g

0xa68d,	// (0x00015c85) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t2_g2_t1

0xa6a0,	// (0x00015c98) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa6a0,	// (0x00015c98) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0001a86e) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0001a86e) list_medium_line_x2_t2_g2_t

0xa675,	// (0x00015c6d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t4_g2_g1

0xa675,	// (0x00015c6d) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0001a7f9) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0001a7f9) list_medium_line_x2_t4_g2_g

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g2_t1

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g2_t2

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t4_g2_t3

0xa6a0,	// (0x00015c98) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa6a0,	// (0x00015c98) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0001a807) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0001a807) list_medium_line_x2_t4_g2_t

0xe9f7,	// (0x00019fef) list_medium_line_t3_right_iconx2_g1

0xa65b,	// (0x00015c53) list_medium_line_t3_right_iconx2_g2

0xeaab,	// (0x0001a0a3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb0,	// (0x0001b2a8) list_medium_line_t3_right_iconx2_g

0xabe3,	// (0x000161db) list_medium_line_t3_right_iconx2_t1

0xabe3,	// (0x000161db) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x0001b289) list_medium_line_t3_right_iconx2_t

0xa675,	// (0x00015c6d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x3_t4_g4_g1

0xa681,	// (0x00015c79) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x3_t4_g4_g2

0xa675,	// (0x00015c6d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x3_t4_g4_g3

0xa681,	// (0x00015c79) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcb7,	// (0x0001b2af) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcb7,	// (0x0001b2af) list_medium_line_x3_t4_g4_g

0xa68d,	// (0x00015c85) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x3_t4_g4_t1

0xa68d,	// (0x00015c85) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x3_t4_g4_t2

0xa68d,	// (0x00015c85) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x3_t4_g4_t3

0xeab4,	// (0x0001a0ac) list_medium_line_x3_t4_g4_t4_ParamLimits

0xeab4,	// (0x0001a0ac) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc0,	// (0x0001b2b8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc0,	// (0x0001b2b8) list_medium_line_x3_t4_g4_t

0x856b,	// (0x00013b63) list_single_dyc_row_text_pane_t1_ParamLimits

0x856b,	// (0x00013b63) list_single_dyc_row_text_pane_t1

0x85a2,	// (0x00013b9a) list_single_dyc_row_text_pane_t2_ParamLimits

0x85a2,	// (0x00013b9a) list_single_dyc_row_text_pane_t2

0xead1,	// (0x0001a0c9) list_single_dyc_row_text_pane_t3_ParamLimits

0xead1,	// (0x0001a0c9) list_single_dyc_row_text_pane_t3

0x0005,

0xfcc9,	// (0x0001b2c1) list_single_dyc_row_text_pane_t_ParamLimits

0xfcc9,	// (0x0001b2c1) list_single_dyc_row_text_pane_t

0xeaf5,	// (0x0001a0ed) list_single_dyc_row_pane_g1_ParamLimits

0xeaf5,	// (0x0001a0ed) list_single_dyc_row_pane_g1

0xeb01,	// (0x0001a0f9) list_single_dyc_row_pane_g2_ParamLimits

0xeb01,	// (0x0001a0f9) list_single_dyc_row_pane_g2

0xeb0d,	// (0x0001a105) list_single_dyc_row_pane_g3_ParamLimits

0xeb0d,	// (0x0001a105) list_single_dyc_row_pane_g3

0xeb19,	// (0x0001a111) list_single_dyc_row_pane_g4_ParamLimits

0xeb19,	// (0x0001a111) list_single_dyc_row_pane_g4

0x0003,

0xfcd6,	// (0x0001b2ce) list_single_dyc_row_pane_g_ParamLimits

0xfcd6,	// (0x0001b2ce) list_single_dyc_row_pane_g

0xeb25,	// (0x0001a11d) list_single_dyc_row_text_pane_ParamLimits

0xeb25,	// (0x0001a11d) list_single_dyc_row_text_pane

0x9b9f,	// (0x00015197) bg_sp_fs_scroll_pane

0xeb44,	// (0x0001a13c) thumb_sp_fs_scroll_pane

0xa675,	// (0x00015c6d) list_medium_line_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_g1

0xa68d,	// (0x00015c85) list_medium_line_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t1

0xa675,	// (0x00015c6d) list_medium_line_x2_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_g1

0xda9c,	// (0x00019094) list_medium_line_x2_g2_ParamLimits

0xda9c,	// (0x00019094) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x0001afae) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x0001afae) list_medium_line_x2_g

0xa62d,	// (0x00015c25) list_medium_line_x2_t1_ParamLimits

0xa62d,	// (0x00015c25) list_medium_line_x2_t1

0xa675,	// (0x00015c6d) list_medium_line_x3_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x3_g1

0xeb4d,	// (0x0001a145) list_medium_line_x3_g2_ParamLimits

0xeb4d,	// (0x0001a145) list_medium_line_x3_g2

0x0001,

0xfcdf,	// (0x0001b2d7) list_medium_line_x3_g_ParamLimits

0xfcdf,	// (0x0001b2d7) list_medium_line_x3_g

0xeb5a,	// (0x0001a152) list_medium_line_x3_t1_ParamLimits

0xeb5a,	// (0x0001a152) list_medium_line_x3_t1

0xeb6e,	// (0x0001a166) thumb_sp_fs_scroll_pane_g1

0xeb77,	// (0x0001a16f) thumb_sp_fs_scroll_pane_g2

0xeb80,	// (0x0001a178) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce4,	// (0x0001b2dc) thumb_sp_fs_scroll_pane_g

0xeb6e,	// (0x0001a166) bg_sp_fs_scroll_pane_g1

0xeb77,	// (0x0001a16f) bg_sp_fs_scroll_pane_g2

0xeb80,	// (0x0001a178) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce4,	// (0x0001b2dc) bg_sp_fs_scroll_pane_g

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g4_g1

0xa681,	// (0x00015c79) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x2_t3_g4_g2

0xa681,	// (0x00015c79) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_x2_t3_g4_g3

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0001a7fe) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0001a7fe) list_medium_line_x2_t3_g4_g

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g4_t1

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_x2_t3_g4_t2

0xa6a0,	// (0x00015c98) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa6a0,	// (0x00015c98) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0001a7f2) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0001a7f2) list_medium_line_x2_t3_g4_t

0xa675,	// (0x00015c6d) list_medium_line_g2_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_g2_g1

0xda9c,	// (0x00019094) list_medium_line_g2_g2_ParamLimits

0xda9c,	// (0x00019094) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x0001afae) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x0001afae) list_medium_line_g2_g

0xa68d,	// (0x00015c85) list_medium_line_g2_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_g2_t1

0xa675,	// (0x00015c6d) list_medium_line_t3_g2_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t3_g2_g1

0xda9c,	// (0x00019094) list_medium_line_t3_g2_g2_ParamLimits

0xda9c,	// (0x00019094) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x0001afae) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x0001afae) list_medium_line_t3_g2_g

0xa68d,	// (0x00015c85) list_medium_line_t3_g2_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t3_g2_t1

0xa68d,	// (0x00015c85) list_medium_line_t3_g2_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t3_g2_t2

0xa68d,	// (0x00015c85) list_medium_line_t3_g2_t3_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t3_g2_t3

0x0002,

0xfceb,	// (0x0001b2e3) list_medium_line_t3_g2_t_ParamLimits

0xfceb,	// (0x0001b2e3) list_medium_line_t3_g2_t

0xeb89,	// (0x0001a181) list_medium_line_right_icon_g1

0xabe3,	// (0x000161db) list_medium_line_right_icon_t1

0xa675,	// (0x00015c6d) list_medium_line_t2_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t2_g1

0xa68d,	// (0x00015c85) list_medium_line_t2_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t2_t1

0xa68d,	// (0x00015c85) list_medium_line_t2_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x0001afb3) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x0001afb3) list_medium_line_t2_t

0xa675,	// (0x00015c6d) list_medium_line_t3_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t3_g1

0xa68d,	// (0x00015c85) list_medium_line_t3_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t3_t1

0xa68d,	// (0x00015c85) list_medium_line_t3_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t3_t2

0xa68d,	// (0x00015c85) list_medium_line_t3_t3_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t3_t3

0x0002,

0xfceb,	// (0x0001b2e3) list_medium_line_t3_t_ParamLimits

0xfceb,	// (0x0001b2e3) list_medium_line_t3_t

0xa675,	// (0x00015c6d) list_medium_line_g3_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_g3_g1

0xa681,	// (0x00015c79) list_medium_line_g3_g2_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_g3_g2

0xa681,	// (0x00015c79) list_medium_line_g3_g3_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_g3_g3

0x0002,

0xfcf2,	// (0x0001b2ea) list_medium_line_g3_g_ParamLimits

0xfcf2,	// (0x0001b2ea) list_medium_line_g3_g

0xa68d,	// (0x00015c85) list_medium_line_g3_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_g3_t1

0xa675,	// (0x00015c6d) list_medium_line_t2_g3_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t2_g3_g1

0xa681,	// (0x00015c79) list_medium_line_t2_g3_g2_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_t2_g3_g2

0xa681,	// (0x00015c79) list_medium_line_t2_g3_g3_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_t2_g3_g3

0x0002,

0xfcf2,	// (0x0001b2ea) list_medium_line_t2_g3_g_ParamLimits

0xfcf2,	// (0x0001b2ea) list_medium_line_t2_g3_g

0xa68d,	// (0x00015c85) list_medium_line_t2_g3_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t2_g3_t1

0xa68d,	// (0x00015c85) list_medium_line_t2_g3_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x0001afb3) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x0001afb3) list_medium_line_t2_g3_t

0xa675,	// (0x00015c6d) list_medium_line_t3_g3_g1_ParamLimits

0xa675,	// (0x00015c6d) list_medium_line_t3_g3_g1

0xa681,	// (0x00015c79) list_medium_line_t3_g3_g2_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_t3_g3_g2

0xa681,	// (0x00015c79) list_medium_line_t3_g3_g3_ParamLimits

0xa681,	// (0x00015c79) list_medium_line_t3_g3_g3

0x0002,

0xfcf2,	// (0x0001b2ea) list_medium_line_t3_g3_g_ParamLimits

0xfcf2,	// (0x0001b2ea) list_medium_line_t3_g3_g

0xa68d,	// (0x00015c85) list_medium_line_t3_g3_t1_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t3_g3_t1

0xa68d,	// (0x00015c85) list_medium_line_t3_g3_t2_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t3_g3_t2

0xa68d,	// (0x00015c85) list_medium_line_t3_g3_t3_ParamLimits

0xa68d,	// (0x00015c85) list_medium_line_t3_g3_t3

0x0002,

0xfceb,	// (0x0001b2e3) list_medium_line_t3_g3_t_ParamLimits

0xfceb,	// (0x0001b2e3) list_medium_line_t3_g3_t

0xe9f7,	// (0x00019fef) list_medium_line_right_iconx2_g1

0xe9f7,	// (0x00019fef) list_medium_line_right_iconx2_g2

0x0001,

0xfcf9,	// (0x0001b2f1) list_medium_line_right_iconx2_g

0xeb92,	// (0x0001a18a) list_medium_line_right_iconx2_t1

0xe9f7,	// (0x00019fef) list_medium_line_t2_right_iconx2_g1

0xe9f7,	// (0x00019fef) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcf9,	// (0x0001b2f1) list_medium_line_t2_right_iconx2_g

0xabe3,	// (0x000161db) list_medium_line_t2_right_iconx2_t1

0xabe3,	// (0x000161db) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x0001b289) list_medium_line_t2_right_iconx2_t

0xabe3,	// (0x000161db) list_medium_line_x4_t4_t1

0xabe3,	// (0x000161db) list_medium_line_x4_t4_t2

0xabe3,	// (0x000161db) list_medium_line_x4_t4_t3

0xabe3,	// (0x000161db) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0001a8c0) list_medium_line_x4_t4_t

0x86fe,	// (0x00013cf6) tport_appsw_pane_ParamLimits

0x86fe,	// (0x00013cf6) tport_appsw_pane

0x870f,	// (0x00013d07) tport_contact_pane_ParamLimits

0x870f,	// (0x00013d07) tport_contact_pane

0x8723,	// (0x00013d1b) tport_listscroll_pane_ParamLimits

0x8723,	// (0x00013d1b) tport_listscroll_pane

0x873b,	// (0x00013d33) cell_tport_appsw_pane_ParamLimits

0x873b,	// (0x00013d33) cell_tport_appsw_pane

0xb1aa,	// (0x000167a2) tport_appsw_pane_g1_ParamLimits

0xb1aa,	// (0x000167a2) tport_appsw_pane_g1

0xeba1,	// (0x0001a199) tport_contact_pane_g1

0xebaa,	// (0x0001a1a2) tport_contact_pane_t1

0xebb8,	// (0x0001a1b0) tport_contact_pane_t2

0x0001,

0xfcfe,	// (0x0001b2f6) tport_contact_pane_t

0xebc6,	// (0x0001a1be) list_tport_pane

0xa4d1,	// (0x00015ac9) scroll_pane_cp_030

0xebd7,	// (0x0001a1cf) cell_tport_appsw_pane_g1

0xebe7,	// (0x0001a1df) cell_tport_appsw_pane_t1

0xebf5,	// (0x0001a1ed) grid_highlight_pane_cp019

0x8771,	// (0x00013d69) list_tport_double_graphic_pane_ParamLimits

0x8771,	// (0x00013d69) list_tport_double_graphic_pane

0x9bf2,	// (0x000151ea) list_highlight_pane_cp023_ParamLimits

0x9bf2,	// (0x000151ea) list_highlight_pane_cp023

0x877e,	// (0x00013d76) list_tport_double_graphic_pane_g1_ParamLimits

0x877e,	// (0x00013d76) list_tport_double_graphic_pane_g1

0x878b,	// (0x00013d83) list_tport_double_graphic_pane_t1_ParamLimits

0x878b,	// (0x00013d83) list_tport_double_graphic_pane_t1

0x87a0,	// (0x00013d98) list_tport_double_graphic_pane_t2_ParamLimits

0x87a0,	// (0x00013d98) list_tport_double_graphic_pane_t2

0x0001,

0xfd0a,	// (0x0001b302) list_tport_double_graphic_pane_t_ParamLimits

0xfd0a,	// (0x0001b302) list_tport_double_graphic_pane_t

0x9b9f,	// (0x00015197) main_cale_note_pane

0x667c,	// (0x00011c74) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x667c,	// (0x00011c74) cell_vitu2_function_top_wide_pane_cp01

0x7f2c,	// (0x00013524) wait_bar_pane_cp05_ParamLimits

0x9bf2,	// (0x000151ea) listscroll_cmail_pane

0xebfd,	// (0x0001a1f5) list_cmail_pane

0x87b2,	// (0x00013daa) list_cmail_body_pane

0x87b2,	// (0x00013daa) list_single_cmail_header_caption_pane

0x87c9,	// (0x00013dc1) list_single_cmail_header_detail_pane_ParamLimits

0x87c9,	// (0x00013dc1) list_single_cmail_header_detail_pane

0xec19,	// (0x0001a211) list_single_cmail_header_caption_pane_t1

0x87f2,	// (0x00013dea) list_single_cmail_header_detail_pane_g1_ParamLimits

0x87f2,	// (0x00013dea) list_single_cmail_header_detail_pane_g1

0xec27,	// (0x0001a21f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xec27,	// (0x0001a21f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd0f,	// (0x0001b307) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd0f,	// (0x0001b307) list_single_cmail_header_detail_pane_g

0x8808,	// (0x00013e00) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8808,	// (0x00013e00) list_single_cmail_header_detail_pane_t1

0xec64,	// (0x0001a25c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xec64,	// (0x0001a25c) list_single_cmail_header_editor_pane_bg

0xec7b,	// (0x0001a273) list_cmail_body_pane_g1

0xec84,	// (0x0001a27c) list_cmail_body_pane_t1

0xd7e9,	// (0x00018de1) list_single_cmail_header_editor_pane_bg_g1

0xa8b7,	// (0x00015eaf) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd7f9,	// (0x00018df1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd7f1,	// (0x00018de9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda74,	// (0x0001906c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd819,	// (0x00018e11) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd809,	// (0x00018e01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd811,	// (0x00018e09) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa897,	// (0x00015e8f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8844,	// (0x00013e3c) calenote_gesture_pane_ParamLimits

0x8844,	// (0x00013e3c) calenote_gesture_pane

0x8860,	// (0x00013e58) calenote_window_pane_ParamLimits

0x8860,	// (0x00013e58) calenote_window_pane

0xec92,	// (0x0001a28a) popup_note_window_cp01

0x887c,	// (0x00013e74) calenote_swipe_1_pane_ParamLimits

0x887c,	// (0x00013e74) calenote_swipe_1_pane

0x8381,	// (0x00013979) calenote_swipe_2_pane_ParamLimits

0x8381,	// (0x00013979) calenote_swipe_2_pane

0xe952,	// (0x00019f4a) calenote_swipe_1_pane_g1_ParamLimits

0xe952,	// (0x00019f4a) calenote_swipe_1_pane_g1

0xe95f,	// (0x00019f57) calenote_swipe_1_pane_g2_ParamLimits

0xe95f,	// (0x00019f57) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x0001b271) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x0001b271) calenote_swipe_1_pane_g

0xeca4,	// (0x0001a29c) calenote_swipe_1_pane_t1_ParamLimits

0xeca4,	// (0x0001a29c) calenote_swipe_1_pane_t1

0xe952,	// (0x00019f4a) calenote_swipe_2_pane_g1_ParamLimits

0xe952,	// (0x00019f4a) calenote_swipe_2_pane_g1

0xecc3,	// (0x0001a2bb) calenote_swipe_2_pane_g2_ParamLimits

0xecc3,	// (0x0001a2bb) calenote_swipe_2_pane_g2

0x0001,

0xfd1b,	// (0x0001b313) calenote_swipe_2_pane_g_ParamLimits

0xfd1b,	// (0x0001b313) calenote_swipe_2_pane_g

0xeccf,	// (0x0001a2c7) calenote_swipe_2_pane_t1_ParamLimits

0xeccf,	// (0x0001a2c7) calenote_swipe_2_pane_t1

0x9b9f,	// (0x00015197) main_mup_navstr_pane

0x57a2,	// (0x00010d9a) main_mup3_pane_t7_ParamLimits

0x57a2,	// (0x00010d9a) main_mup3_pane_t7

0xd367,	// (0x0001895f) main_mp4_pane_g6_ParamLimits

0xd367,	// (0x0001895f) main_mp4_pane_g6

0xd5b5,	// (0x00018bad) main_image3_pane_t4_ParamLimits

0xd5b5,	// (0x00018bad) main_image3_pane_t4

0x8891,	// (0x00013e89) popup_navstr_preview_pane_ParamLimits

0x8891,	// (0x00013e89) popup_navstr_preview_pane

0x88a1,	// (0x00013e99) scroll_navstr_pane_ParamLimits

0x88a1,	// (0x00013e99) scroll_navstr_pane

0x9b9f,	// (0x00015197) bg_popup_preview_window_pane_cp04

0xecf6,	// (0x0001a2ee) popup_navstr_preview_pane_t1

0x88b5,	// (0x00013ead) scroll_navstr_pane_g1_ParamLimits

0x88b5,	// (0x00013ead) scroll_navstr_pane_g1

0x88c9,	// (0x00013ec1) scroll_navstr_pane_t1_ParamLimits

0x88c9,	// (0x00013ec1) scroll_navstr_pane_t1

0xec9b,	// (0x0001a293) bg_button_pane_cp014

0xec9b,	// (0x0001a293) bg_button_pane_cp030

0x8227,	// (0x0001381f) list_double_fisheye_pane_g4_ParamLimits

0x8227,	// (0x0001381f) list_double_fisheye_pane_g4

0x8233,	// (0x0001382b) list_double_fisheye_pane_g5_ParamLimits

0x8233,	// (0x0001382b) list_double_fisheye_pane_g5

0xec0d,	// (0x0001a205) sp_fs_scroll_pane_cp03

0xea37,	// (0x0001a02f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xea43,	// (0x0001a03b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x0001b28e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8455,	// (0x00013a4d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xec05,	// (0x0001a1fd) sp_fs_scroll_pane_cp02

0xa52b,	// (0x00015b23) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa52b,	// (0x00015b23) popup_sp_fs_calendar_preview_list_single_pane

0x9b9f,	// (0x00015197) main_cam6_pano_pane

0x9bf2,	// (0x000151ea) main_mup3_pane_ParamLimits

0x9b9f,	// (0x00015197) main_phacti_pane

0x7e1f,	// (0x00013417) bg_button_pane_cp11

0x7e37,	// (0x0001342f) main_mobtv_info_pane_g2_ParamLimits

0x7e37,	// (0x0001342f) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x0001b1ee) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x0001b1ee) main_mobtv_info_pane_g

0x7fec,	// (0x000135e4) sc_clock_pane_t5_ParamLimits

0x7fec,	// (0x000135e4) sc_clock_pane_t5

0x8097,	// (0x0001368f) main_radioblah_pane_g1_ParamLimits

0xe895,	// (0x00019e8d) main_radioblah_pane_t3_ParamLimits

0xe895,	// (0x00019e8d) main_radioblah_pane_t3

0xe8ad,	// (0x00019ea5) main_radioblah_pane_t4_ParamLimits

0xe8ad,	// (0x00019ea5) main_radioblah_pane_t4

0x80bf,	// (0x000136b7) main_radioblah_text_pane_ParamLimits

0x80bf,	// (0x000136b7) main_radioblah_text_pane

0x80d1,	// (0x000136c9) main_radioblah_info_pane_g1_ParamLimits

0x8164,	// (0x0001375c) main_radioblah_info_pane_t4_ParamLimits

0x8164,	// (0x0001375c) main_radioblah_info_pane_t4

0x9bf2,	// (0x000151ea) main_sp_fs_calendar_pane

0x88df,	// (0x00013ed7) main_phacti_pane_g1

0x88e7,	// (0x00013edf) phacti_note_pane_ParamLimits

0x88e7,	// (0x00013edf) phacti_note_pane

0xed0d,	// (0x0001a305) phacti_term_pane_ParamLimits

0xed0d,	// (0x0001a305) phacti_term_pane

0xed22,	// (0x0001a31a) phacti_note_pane_t1_ParamLimits

0xed22,	// (0x0001a31a) phacti_note_pane_t1

0xed39,	// (0x0001a331) phacti_term_pane_g1

0xed41,	// (0x0001a339) phacti_term_pane_t1_ParamLimits

0xed41,	// (0x0001a339) phacti_term_pane_t1

0xed6b,	// (0x0001a363) popup_sp_fs_calendar_preview_list_single_pane_g1

0xed73,	// (0x0001a36b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd25,	// (0x0001b31d) popup_sp_fs_calendar_preview_list_single_pane_g

0xed7b,	// (0x0001a373) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xed7b,	// (0x0001a373) popup_sp_fs_calendar_preview_list_single_pane_t1

0xed91,	// (0x0001a389) aid_popup_sp_fs_bg_corner_pane

0xa65b,	// (0x00015c53) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b9f,	// (0x00015197) popup_sp_fs_calendar_preview_bg_pane

0xed99,	// (0x0001a391) popup_sp_fs_calendar_preview_list_pane

0xb1ee,	// (0x000167e6) bg_main_sp_fs_cale_pane_ParamLimits

0xb1ee,	// (0x000167e6) bg_main_sp_fs_cale_pane

0xedaa,	// (0x0001a3a2) listscroll_cale_mrui_pane_ParamLimits

0xedaa,	// (0x0001a3a2) listscroll_cale_mrui_pane

0xedbf,	// (0x0001a3b7) listscroll_sp_fs_schedule_track_pane

0xedc8,	// (0x0001a3c0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xedc8,	// (0x0001a3c0) main_sp_fs_ctrlbar_pane_cp01

0xeddb,	// (0x0001a3d3) main_sp_fs_ribbon_pane

0xede3,	// (0x0001a3db) popup_sp_fs_cale_preview_window

0x894a,	// (0x00013f42) list_single_sp_fs_schedule_track_pane_ParamLimits

0x894a,	// (0x00013f42) list_single_sp_fs_schedule_track_pane

0x9bf2,	// (0x000151ea) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9bf2,	// (0x000151ea) bg_sp_fs_highlight_list_pane_cp03

0x895e,	// (0x00013f56) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x895e,	// (0x00013f56) list_single_sp_fs_schedule_track_pane_g1

0x896a,	// (0x00013f62) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x896a,	// (0x00013f62) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2a,	// (0x0001b322) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2a,	// (0x0001b322) list_single_sp_fs_schedule_track_pane_g

0x8976,	// (0x00013f6e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8976,	// (0x00013f6e) list_single_sp_fs_schedule_track_pane_t1

0x8990,	// (0x00013f88) sp_fs_schedule_track_pane_ParamLimits

0x8990,	// (0x00013f88) sp_fs_schedule_track_pane

0xedf5,	// (0x0001a3ed) sp_fs_schedule_track_pane_g1

0xedfd,	// (0x0001a3f5) sp_fs_schedule_track_pane_g2

0xee05,	// (0x0001a3fd) sp_fs_schedule_track_pane_g3

0xee0d,	// (0x0001a405) sp_fs_schedule_track_pane_g4

0xee15,	// (0x0001a40d) sp_fs_schedule_track_pane_g5

0x0004,

0xfd2f,	// (0x0001b327) sp_fs_schedule_track_pane_g

0xd7e9,	// (0x00018de1) bg_sp_fs_schedule_viewer_highlight_g1

0xa8b7,	// (0x00015eaf) bg_sp_fs_schedule_viewer_highlight_g2

0xd7f1,	// (0x00018de9) bg_sp_fs_schedule_viewer_highlight_g3

0xd7f9,	// (0x00018df1) bg_sp_fs_schedule_viewer_highlight_g4

0xda74,	// (0x0001906c) bg_sp_fs_schedule_viewer_highlight_g5

0xd809,	// (0x00018e01) bg_sp_fs_schedule_viewer_highlight_g6

0xd811,	// (0x00018e09) bg_sp_fs_schedule_viewer_highlight_g7

0xd819,	// (0x00018e11) bg_sp_fs_schedule_viewer_highlight_g8

0xa897,	// (0x00015e8f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3a,	// (0x0001b332) bg_sp_fs_schedule_viewer_highlight_g

0x9b9f,	// (0x00015197) bg_main_sp_fs_ribbon_pane

0x89a1,	// (0x00013f99) main_sp_fs_ribbon_pane_g1

0xee1d,	// (0x0001a415) main_sp_fs_ribbon_pane_t1

0x89aa,	// (0x00013fa2) main_sp_fs_ribbon_pane_t2

0xee2c,	// (0x0001a424) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd4d,	// (0x0001b345) main_sp_fs_ribbon_pane_t

0xee3b,	// (0x0001a433) main_sp_fs_ribbon_scheduler_pane

0xee43,	// (0x0001a43b) bg_main_sp_fs_ribbon_pane_g1

0xee4c,	// (0x0001a444) bg_main_sp_fs_ribbon_pane_g2

0xee55,	// (0x0001a44d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd54,	// (0x0001b34c) bg_main_sp_fs_ribbon_pane_g

0xee5d,	// (0x0001a455) main_sp_fs_ribbon_scheduler_pane_g1

0xee66,	// (0x0001a45e) main_sp_fs_ribbon_scheduler_pane_g2

0xee6f,	// (0x0001a467) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd5b,	// (0x0001b353) main_sp_fs_ribbon_scheduler_pane_g

0xee78,	// (0x0001a470) list_cale_mrui_pane

0x89b9,	// (0x00013fb1) sp_fs_scroll_pane_cp07_ParamLimits

0x89b9,	// (0x00013fb1) sp_fs_scroll_pane_cp07

0x89d1,	// (0x00013fc9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x89d1,	// (0x00013fc9) bg_sp_fs_schedule_viewer_highlight

0xee85,	// (0x0001a47d) list_single_sp_fs_schedule_track_pane_cp01

0xee8d,	// (0x0001a485) list_sp_fs_schedule_track_pane

0xee95,	// (0x0001a48d) sp_fs_scroll_pane_cp06_ParamLimits

0xee95,	// (0x0001a48d) sp_fs_scroll_pane_cp06

0xa65b,	// (0x00015c53) bgmain_sp_fs_calendar_pane_g1

0x89e1,	// (0x00013fd9) list_single_cale_mrui_pane_ParamLimits

0x89e1,	// (0x00013fd9) list_single_cale_mrui_pane

0xeea7,	// (0x0001a49f) list_single_cale_mrui_row_pane_ParamLimits

0xeea7,	// (0x0001a49f) list_single_cale_mrui_row_pane

0x8a02,	// (0x00013ffa) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8a02,	// (0x00013ffa) list_single_cale_mrui_row_pane_g1

0x8a3a,	// (0x00014032) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8a3a,	// (0x00014032) list_single_cale_mrui_row_pane_t1

0x8a4c,	// (0x00014044) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8a4c,	// (0x00014044) list_single_cale_mrui_row_pane_t2

0x8ab2,	// (0x000140aa) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8ab2,	// (0x000140aa) list_single_cale_mrui_row_pane_t3

0x8ae1,	// (0x000140d9) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8ae1,	// (0x000140d9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd69,	// (0x0001b361) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd69,	// (0x0001b361) list_single_cale_mrui_row_pane_t

0x8b10,	// (0x00014108) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8b10,	// (0x00014108) list_single_cmail_header_editor_pane_bg_cp01

0x8b34,	// (0x0001412c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8b34,	// (0x0001412c) list_single_cmail_header_editor_pane_bg_cp02

0x8b52,	// (0x0001414a) main_radioblah_text_pane_t1_ParamLimits

0x8b52,	// (0x0001414a) main_radioblah_text_pane_t1

0xeeca,	// (0x0001a4c2) cam6_indi_pane_cp01

0xeed2,	// (0x0001a4ca) cam6_mode_pane_cp01

0xeeda,	// (0x0001a4d2) cam6_pano_pane

0xeee3,	// (0x0001a4db) cam6_zoom_pane_cp01

0xeeeb,	// (0x0001a4e3) cam6_pano_image_pane

0xeef4,	// (0x0001a4ec) cam6_pano_pane_g1

0xe5fc,	// (0x00019bf4) cam6_pano_pane_g2

0xeefd,	// (0x0001a4f5) cam6_pano_pane_g3

0xef06,	// (0x0001a4fe) cam6_pano_pane_g4

0xd068,	// (0x00018660) cam6_pano_pane_g5

0xef0f,	// (0x0001a507) cam6_pano_pane_g6

0xef17,	// (0x0001a50f) cam6_pano_pane_g7

0xef1f,	// (0x0001a517) cam6_pano_pane_g8

0xef28,	// (0x0001a520) cam6_pano_pane_g9

0x0008,

0xfd72,	// (0x0001b36a) cam6_pano_pane_g

0x9b9f,	// (0x00015197) main_browser_tag_pane

0xecee,	// (0x0001a2e6) grid_navstr_albumart_pane

0xef31,	// (0x0001a529) cell_navstr_albumart_pane_ParamLimits

0xef31,	// (0x0001a529) cell_navstr_albumart_pane

0xb291,	// (0x00016889) cell_navstr_albumart_pane_g1

0xc432,	// (0x00017a2a) cell_navstr_albumart_pane_g2

0xc442,	// (0x00017a3a) cell_navstr_albumart_pane_g3

0xc43a,	// (0x00017a32) cell_navstr_albumart_pane_g4

0x0003,

0xfd85,	// (0x0001b37d) cell_navstr_albumart_pane_g

0x8b6b,	// (0x00014163) bt_list_pane_ParamLimits

0x8b6b,	// (0x00014163) bt_list_pane

0x8b7e,	// (0x00014176) bt_list_pane_t1

0x8b8d,	// (0x00014185) bt_list_pane_t2

0x0001,

0xfd8e,	// (0x0001b386) bt_list_pane_t

0x9b9f,	// (0x00015197) main_cale_prevew_pane

0x8b9c,	// (0x00014194) popup_cale_preview_window_ParamLimits

0x8b9c,	// (0x00014194) popup_cale_preview_window

0x9bf2,	// (0x000151ea) bg_popup_preview_window_pane_cp05_ParamLimits

0x9bf2,	// (0x000151ea) bg_popup_preview_window_pane_cp05

0xef5e,	// (0x0001a556) list_cale_preview_pane_ParamLimits

0xef5e,	// (0x0001a556) list_cale_preview_pane

0x8bb1,	// (0x000141a9) list_double_cale_preview_pane_ParamLimits

0x8bb1,	// (0x000141a9) list_double_cale_preview_pane

0x8bc2,	// (0x000141ba) list_single_cale_preview_pane_ParamLimits

0x8bc2,	// (0x000141ba) list_single_cale_preview_pane

0xef6a,	// (0x0001a562) list_single_cale_preview_pane_g1

0xef72,	// (0x0001a56a) list_single_cale_preview_pane_t1_ParamLimits

0xef72,	// (0x0001a56a) list_single_cale_preview_pane_t1

0x8bd6,	// (0x000141ce) list_double_cale_preview_pane_g1

0x8bde,	// (0x000141d6) list_double_cale_preview_pane_t1_ParamLimits

0x8bde,	// (0x000141d6) list_double_cale_preview_pane_t1

0x8bf3,	// (0x000141eb) list_double_cale_preview_pane_t2_ParamLimits

0x8bf3,	// (0x000141eb) list_double_cale_preview_pane_t2

0x0001,

0xfd93,	// (0x0001b38b) list_double_cale_preview_pane_t_ParamLimits

0xfd93,	// (0x0001b38b) list_double_cale_preview_pane_t

0x9b9f,	// (0x00015197) main_ezdial_pane

0x9bf2,	// (0x000151ea) main_sp_fs_email_pane_ParamLimits

0x83cb,	// (0x000139c3) cmail_ddmenu_btn01_pane_ParamLimits

0x83cb,	// (0x000139c3) cmail_ddmenu_btn01_pane

0x83de,	// (0x000139d6) cmail_ddmenu_btn02_pane_ParamLimits

0x83de,	// (0x000139d6) cmail_ddmenu_btn02_pane

0x8401,	// (0x000139f9) cmail_ddmenu_btn03_pane_ParamLimits

0x8401,	// (0x000139f9) cmail_ddmenu_btn03_pane

0x849e,	// (0x00013a96) main_sp_fs_ctrlbar_pane_ParamLimits

0x84bf,	// (0x00013ab7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x87b2,	// (0x00013daa) list_cmail_body_pane_ParamLimits

0xb299,	// (0x00016891) bg_button_pane_cp12

0xec33,	// (0x0001a22b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xec33,	// (0x0001a22b) list_single_cmail_header_detail_pane_g3

0xec40,	// (0x0001a238) list_single_cmail_header_detail_pane_t2_ParamLimits

0xec40,	// (0x0001a238) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd16,	// (0x0001b30e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd16,	// (0x0001b30e) list_single_cmail_header_detail_pane_t

0xed56,	// (0x0001a34e) phacti_term_pane_t2_ParamLimits

0xed56,	// (0x0001a34e) phacti_term_pane_t2

0x0001,

0xfd20,	// (0x0001b318) phacti_term_pane_t_ParamLimits

0xfd20,	// (0x0001b318) phacti_term_pane_t

0xef87,	// (0x0001a57f) aid_size_list_single_double

0x8c0b,	// (0x00014203) popup_ezdial_listscroll_window

0x8c21,	// (0x00014219) popup_number_entry_window_cp01

0xa5e3,	// (0x00015bdb) bg_popup_call_pane_cp09

0xef93,	// (0x0001a58b) ezdial_list_pane

0xef9b,	// (0x0001a593) scroll_pane_cp23

0xb1ee,	// (0x000167e6) bg_button_pane_cp028_ParamLimits

0xb1ee,	// (0x000167e6) bg_button_pane_cp028

0x8c2d,	// (0x00014225) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c2d,	// (0x00014225) cmail_ddmenu_btn01_pane_g1

0x8c39,	// (0x00014231) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c39,	// (0x00014231) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd98,	// (0x0001b390) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd98,	// (0x0001b390) cmail_ddmenu_btn01_pane_g

0xefa3,	// (0x0001a59b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xefa3,	// (0x0001a59b) cmail_ddmenu_btn01_pane_t1

0xb1ee,	// (0x000167e6) bg_button_pane_cp029_ParamLimits

0xb1ee,	// (0x000167e6) bg_button_pane_cp029

0x8c45,	// (0x0001423d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c45,	// (0x0001423d) cmail_ddmenu_btn02_pane_g1

0x8c5d,	// (0x00014255) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c5d,	// (0x00014255) cmail_ddmenu_btn02_pane_t1

0x9bf2,	// (0x000151ea) bg_button_pane_cp031_ParamLimits

0x9bf2,	// (0x000151ea) bg_button_pane_cp031

0x8c45,	// (0x0001423d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c45,	// (0x0001423d) cmail_ddmenu_btn03_pane_g1

0x8c5d,	// (0x00014255) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c5d,	// (0x00014255) cmail_ddmenu_btn03_pane_t1

0xa62d,	// (0x00015c25) cell_dialer2_keypad_pane_t1_ParamLimits

0xd096,	// (0x0001868e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xd096,	// (0x0001868e) cell_dialer2_keypad_pane_t1_copy1

0x7c8b,	// (0x00013283) ncimui_group_button_pane

0x9bf2,	// (0x000151ea) main_sp_fs_calendar_pane_ParamLimits

0x87b2,	// (0x00013daa) list_single_cmail_header_caption_pane_ParamLimits

0xeda1,	// (0x0001a399) aid_recal_txt_sm_pane

0x9b9f,	// (0x00015197) mian_recal_day_pane

0xede3,	// (0x0001a3db) popup_sp_fs_cale_preview_window_ParamLimits

0xefb8,	// (0x0001a5b0) list_recal_day_pane

0xeffa,	// (0x0001a5f2) list_single_recal_day_pane_ParamLimits

0xeffa,	// (0x0001a5f2) list_single_recal_day_pane

0xf00c,	// (0x0001a604) list_single_recal_day_pane_g1_ParamLimits

0xf00c,	// (0x0001a604) list_single_recal_day_pane_g1

0xf018,	// (0x0001a610) list_single_recal_day_pane_g2_ParamLimits

0xf018,	// (0x0001a610) list_single_recal_day_pane_g2

0xf024,	// (0x0001a61c) list_single_recal_day_pane_g3_ParamLimits

0xf024,	// (0x0001a61c) list_single_recal_day_pane_g3

0x8c81,	// (0x00014279) list_single_recal_day_pane_g4_ParamLimits

0x8c81,	// (0x00014279) list_single_recal_day_pane_g4

0xf030,	// (0x0001a628) list_single_recal_day_pane_g5_ParamLimits

0xf030,	// (0x0001a628) list_single_recal_day_pane_g5

0x8c99,	// (0x00014291) list_single_recal_day_pane_g6_ParamLimits

0x8c99,	// (0x00014291) list_single_recal_day_pane_g6

0x0004,

0xfda7,	// (0x0001b39f) list_single_recal_day_pane_g_ParamLimits

0xfda7,	// (0x0001b39f) list_single_recal_day_pane_g

0xf044,	// (0x0001a63c) list_single_recal_day_pane_t1

0x8ca5,	// (0x0001429d) list_single_recal_day_pane_t2

0x0001,

0xfdb2,	// (0x0001b3aa) list_single_recal_day_pane_t

0x8cb7,	// (0x000142af) ncimui_query_button_pane_ParamLimits

0x8cb7,	// (0x000142af) ncimui_query_button_pane

0x8cc7,	// (0x000142bf) ncimui_query_button_pane_t1_ParamLimits

0x8cc7,	// (0x000142bf) ncimui_query_button_pane_t1

0xf056,	// (0x0001a64e) ncimui_query_button_pane_t2_ParamLimits

0xf056,	// (0x0001a64e) ncimui_query_button_pane_t2

0x0001,

0xfdb7,	// (0x0001b3af) ncimui_query_button_pane_t_ParamLimits

0xfdb7,	// (0x0001b3af) ncimui_query_button_pane_t

0x8cda,	// (0x000142d2) query_button_pane_ParamLimits

0x8cda,	// (0x000142d2) query_button_pane

0x9b9f,	// (0x00015197) bg_button_pane_cp0028

0xf069,	// (0x0001a661) query_button_pane_t1

0x4bd5,	// (0x000101cd) main_tport_pane_ParamLimits

0x86c5,	// (0x00013cbd) bg_popup_window_pane_cp01_ParamLimits

0x86c5,	// (0x00013cbd) bg_popup_window_pane_cp01

0x86dc,	// (0x00013cd4) heading_pane_cp08_ParamLimits

0x86dc,	// (0x00013cd4) heading_pane_cp08

0x86ed,	// (0x00013ce5) heading_pane_cp07_ParamLimits

0x86ed,	// (0x00013ce5) heading_pane_cp07

0xebd7,	// (0x0001a1cf) cell_tport_appsw_pane_g2

0x0002,

0xfd03,	// (0x0001b2fb) cell_tport_appsw_pane_g

0xb289,	// (0x00016881) input_candi_list_open_g1

0xaa92,	// (0x0001608a) list_cale_time_pane_g6_ParamLimits

0xaa92,	// (0x0001608a) list_cale_time_pane_g6

0x5233,	// (0x0001082b) aid_size_touch_calib_1_ParamLimits

0x5233,	// (0x0001082b) aid_size_touch_calib_1

0x5245,	// (0x0001083d) aid_size_touch_calib_2_ParamLimits

0x5245,	// (0x0001083d) aid_size_touch_calib_2

0x525b,	// (0x00010853) aid_size_touch_calib_3_ParamLimits

0x525b,	// (0x00010853) aid_size_touch_calib_3

0x5273,	// (0x0001086b) aid_size_touch_calib_4_ParamLimits

0x5273,	// (0x0001086b) aid_size_touch_calib_4

0x5287,	// (0x0001087f) main_touch_calib_button_group_pane_ParamLimits

0x5287,	// (0x0001087f) main_touch_calib_button_group_pane

0x529f,	// (0x00010897) main_touch_calib_pane_g1_ParamLimits

0x52b1,	// (0x000108a9) main_touch_calib_pane_g2_ParamLimits

0x52c3,	// (0x000108bb) main_touch_calib_pane_g3_ParamLimits

0x52d5,	// (0x000108cd) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x0001acfb) main_touch_calib_pane_g_ParamLimits

0x52e7,	// (0x000108df) main_touch_calib_pane_t1_ParamLimits

0x52ff,	// (0x000108f7) main_touch_calib_pane_t2_ParamLimits

0x5317,	// (0x0001090f) main_touch_calib_pane_t3_ParamLimits

0x5329,	// (0x00010921) main_touch_calib_pane_t4_ParamLimits

0x533b,	// (0x00010933) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x0001ad04) main_touch_calib_pane_t_ParamLimits

0xce6b,	// (0x00018463) list_single_fp_cale_pane_g3_ParamLimits

0xce6b,	// (0x00018463) list_single_fp_cale_pane_g3

0x9bf2,	// (0x000151ea) bg_button_pane_cp012_ParamLimits

0x9bf2,	// (0x000151ea) bg_vkb2_func_pane_cp03_ParamLimits

0x6f12,	// (0x0001250a) cell_vitu2_function_top_pane_g1_ParamLimits

0x9bf2,	// (0x000151ea) bg_vkb2_func_pane_cp04_ParamLimits

0x7c1b,	// (0x00013213) main_ncimui_button_group_pane_ParamLimits

0x7c1b,	// (0x00013213) main_ncimui_button_group_pane

0x7c79,	// (0x00013271) main_ncimui_pane_t3_ParamLimits

0x7c79,	// (0x00013271) main_ncimui_pane_t3

0xed04,	// (0x0001a2fc) phacti_button_group_pane

0xef87,	// (0x0001a57f) aid_size_list_single_double_ParamLimits

0x8c0b,	// (0x00014203) popup_ezdial_listscroll_window_ParamLimits

0x8c21,	// (0x00014219) popup_number_entry_window_cp01_ParamLimits

0x8cec,	// (0x000142e4) phacti_button_pane_ParamLimits

0x8cec,	// (0x000142e4) phacti_button_pane

0x9b9f,	// (0x00015197) bg_button_pane_cp14

0xf077,	// (0x0001a66f) phacti_button_pane_t1

0x8cfb,	// (0x000142f3) main_touch_calib_button_pane_ParamLimits

0x8cfb,	// (0x000142f3) main_touch_calib_button_pane

0xa37e,	// (0x00015976) bg_button_pane_cp18_ParamLimits

0xa37e,	// (0x00015976) bg_button_pane_cp18

0x8d16,	// (0x0001430e) main_touch_calib_button_pane_t1_ParamLimits

0x8d16,	// (0x0001430e) main_touch_calib_button_pane_t1

0x8d2c,	// (0x00014324) main_touch_calib_button_pane_t2_ParamLimits

0x8d2c,	// (0x00014324) main_touch_calib_button_pane_t2

0x0001,

0xfdbc,	// (0x0001b3b4) main_touch_calib_button_pane_t_ParamLimits

0xfdbc,	// (0x0001b3b4) main_touch_calib_button_pane_t

0x9b9f,	// (0x00015197) cell_ncimui_button_pane

0x9b9f,	// (0x00015197) bg_button_pane_cp032

0x0009,	// (0x0000b601) cell_ncimui_button_pane_t1

0xd595,	// (0x00018b8d) image3_infobar_pane_ParamLimits

0xd595,	// (0x00018b8d) image3_infobar_pane

0x8014,	// (0x0001360c) fs_bigclock_status_pane_ParamLimits

0x8014,	// (0x0001360c) fs_bigclock_status_pane

0x8021,	// (0x00013619) main_fs_bigclock_clock_pane_ParamLimits

0x8021,	// (0x00013619) main_fs_bigclock_clock_pane

0x8043,	// (0x0001363b) main_fs_bigclock_indi_pane_ParamLimits

0x8043,	// (0x0001363b) main_fs_bigclock_indi_pane

0x806d,	// (0x00013665) main_fs_bigclock_swipe_pane_ParamLimits

0x806d,	// (0x00013665) main_fs_bigclock_swipe_pane

0x9b9f,	// (0x00015197) main_fs_clock_dumped_data

0xe709,	// (0x00019d01) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe709,	// (0x00019d01) list_single_fs_bigclock_indicator_pane_g1

0xe723,	// (0x00019d1b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe723,	// (0x00019d1b) list_single_fs_bigclock_indicator_pane_g2

0xe73d,	// (0x00019d35) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe73d,	// (0x00019d35) list_single_fs_bigclock_indicator_pane_g3

0xe757,	// (0x00019d4f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe757,	// (0x00019d4f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x0001b222) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x0001b222) list_single_fs_bigclock_indicator_pane_g

0xe780,	// (0x00019d78) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe780,	// (0x00019d78) list_single_fs_bigclock_indicator_pane_t1

0xe7a8,	// (0x00019da0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe7a8,	// (0x00019da0) list_single_fs_bigclock_indicator_pane_t2

0xe7d0,	// (0x00019dc8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe7d0,	// (0x00019dc8) list_single_fs_bigclock_indicator_pane_t3

0xe7f8,	// (0x00019df0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe7f8,	// (0x00019df0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x0001b22d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x0001b22d) list_single_fs_bigclock_indicator_pane_t

0x0017,	// (0x0000b60f) image3_infobar_fav_pane_ParamLimits

0x0017,	// (0x0000b60f) image3_infobar_fav_pane

0x0027,	// (0x0000b61f) image3_infobar_loc_pane_ParamLimits

0x0027,	// (0x0000b61f) image3_infobar_loc_pane

0x003b,	// (0x0000b633) image3_infobar_time_pane_ParamLimits

0x003b,	// (0x0000b633) image3_infobar_time_pane

0xa65b,	// (0x00015c53) image3_infobar_time_pane_g1

0x004b,	// (0x0000b643) image3_infobar_time_pane_t1

0xa65b,	// (0x00015c53) image3_infobar_loc_pane_g1

0x0059,	// (0x0000b651) image3_infobar_loc_pane_g2

0x0001,

0xfdc1,	// (0x0001b3b9) image3_infobar_loc_pane_g

0x0061,	// (0x0000b659) image3_infobar_loc_pane_t1

0xa65b,	// (0x00015c53) image3_infobar_fav_pane_g1

0x006f,	// (0x0000b667) image3_infobar_fav_pane_g2

0x0001,

0xfdc6,	// (0x0001b3be) image3_infobar_fav_pane_g

0x0077,	// (0x0000b66f) fs_bigclock_status_battery_pane

0x0080,	// (0x0000b678) fs_bigclock_status_signal_pane

0x0089,	// (0x0000b681) fs_bigclock_status_title_pane

0x0092,	// (0x0000b68a) fs_bigclock_status_signal_pane_g1

0x009b,	// (0x0000b693) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdcb,	// (0x0001b3c3) fs_bigclock_status_signal_pane_g

0x00a3,	// (0x0000b69b) fs_bigclock_status_battery_pane_g1

0x00ac,	// (0x0000b6a4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd0,	// (0x0001b3c8) fs_bigclock_status_battery_pane_g

0x00b4,	// (0x0000b6ac) fs_bigclock_status_title_pane_t1

0x8d4a,	// (0x00014342) main_fs_bigclock_clock_pane_g1

0x8d5c,	// (0x00014354) main_fs_bigclock_clock_pane_g2

0x8d6d,	// (0x00014365) main_fs_bigclock_clock_pane_g3

0x8d6d,	// (0x00014365) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdd5,	// (0x0001b3cd) main_fs_bigclock_clock_pane_g

0x8d80,	// (0x00014378) main_fs_bigclock_clock_pane_t1

0x8d9b,	// (0x00014393) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdde,	// (0x0001b3d6) main_fs_bigclock_clock_pane_t

0x0100,	// (0x0000b6f8) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0100,	// (0x0000b6f8) list_single_fs_bigclock_indicator_pane

0x0111,	// (0x0000b709) list_single_fs_bigclock_pane_ParamLimits

0x0111,	// (0x0000b709) list_single_fs_bigclock_pane

0x0179,	// (0x0000b771) main_fs_bigclock_indicator_pane_t1

0x0188,	// (0x0000b780) list_single_fs_bigclock_pane_g1

0x0190,	// (0x0000b788) list_single_fs_bigclock_pane_t1

0xa65b,	// (0x00015c53) main_fs_bigclock_swipe_pane_g1

0x01d0,	// (0x0000b7c8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdef,	// (0x0001b3e7) main_fs_bigclock_swipe_pane_g

0x01d8,	// (0x0000b7d0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x01d8,	// (0x0000b7d0) main_fs_bigclock_swipe_pane_t1

0x3e4d,	// (0x0000f445) call_type_pane_ParamLimits

0x9b9f,	// (0x00015197) main_btmg_pane

0x8a2e,	// (0x00014026) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8a2e,	// (0x00014026) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd62,	// (0x0001b35a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd62,	// (0x0001b35a) list_single_cale_mrui_row_pane_g

0xefe1,	// (0x0001a5d9) list_recal_vselct_arw_lo_pane

0xefe9,	// (0x0001a5e1) list_recal_vselct_arw_up_pane

0xeff1,	// (0x0001a5e9) list_recal_vselct_pane

0x01f5,	// (0x0000b7ed) btmg_button_pane

0x8dfb,	// (0x000143f3) main_btmg_pane_g1

0x9b9f,	// (0x00015197) bg_button_pane_cp044

0x0205,	// (0x0000b7fd) btmg_button_pane_t1

0xc665,	// (0x00017c5d) aid_listscroll_gen

0x9bf2,	// (0x000151ea) main_cntbar_detail_pane

0xebfd,	// (0x0001a1f5) list_cmail_folder_pane

0xec0d,	// (0x0001a205) sp_fs_scroll_pane_cp03_ParamLimits

0xef48,	// (0x0001a540) list_single_fs_dyc_pane_cp01_ParamLimits

0xef48,	// (0x0001a540) list_single_fs_dyc_pane_cp01

0x022b,	// (0x0000b823) aid_size_cmail_indent

0x0234,	// (0x0000b82c) list_single_dyc_row_pane_cp01

0x8e2b,	// (0x00014423) cntbar_detail_list_pane_ParamLimits

0x8e2b,	// (0x00014423) cntbar_detail_list_pane

0x8e71,	// (0x00014469) main_cntbar_detail_cont_pane_ParamLimits

0x8e71,	// (0x00014469) main_cntbar_detail_cont_pane

0x8e85,	// (0x0001447d) scroll_pane_cp032_ParamLimits

0x8e85,	// (0x0001447d) scroll_pane_cp032

0x8e91,	// (0x00014489) cntbar_detail_list_event_pane_ParamLimits

0x8e91,	// (0x00014489) cntbar_detail_list_event_pane

0x8e3b,	// (0x00014433) cntbar_detail_list_shct_pane

0x02b5,	// (0x0000b8ad) aid_list_gen

0xa4d1,	// (0x00015ac9) aid_scroll

0xddaf,	// (0x000193a7) aid_size_touch_scroll_bar

0xde63,	// (0x0001945b) aid_list_double

0x8ea2,	// (0x0001449a) aid_list_single

0xde63,	// (0x0001945b) aid_list_single_lg

0x8eab,	// (0x000144a3) aid_list_z_g_a_sm

0x8eb3,	// (0x000144ab) aid_list_z_g_d

0x8ebb,	// (0x000144b3) aid_txt_z_prm

0x8ec9,	// (0x000144c1) aid_txt_z_prm_cp01

0x8ed7,	// (0x000144cf) aid_txt_z_sec

0x8ee5,	// (0x000144dd) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ee5,	// (0x000144dd) main_cntbar_detail_cont_pane_g1

0x8ef9,	// (0x000144f1) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ef9,	// (0x000144f1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf4,	// (0x0001b3ec) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf4,	// (0x0001b3ec) main_cntbar_detail_cont_pane_g

0x031a,	// (0x0000b912) main_cntbar_detail_cont_pane_t1

0x0328,	// (0x0000b920) main_cntbar_detail_cont_pane_t2

0x0336,	// (0x0000b92e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdf9,	// (0x0001b3f1) main_cntbar_detail_cont_pane_t

0x8f09,	// (0x00014501) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8f09,	// (0x00014501) cell_cntbar_detail_list_shct_pane

0x0356,	// (0x0000b94e) cntbar_detail_list_shct_pane_g1

0x035f,	// (0x0000b957) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe00,	// (0x0001b3f8) cntbar_detail_list_shct_pane_g

0x8f1b,	// (0x00014513) cntbar_detail_list_event_pane_g1_ParamLimits

0x8f1b,	// (0x00014513) cntbar_detail_list_event_pane_g1

0x8f27,	// (0x0001451f) cntbar_detail_list_event_pane_g2_ParamLimits

0x8f27,	// (0x0001451f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe05,	// (0x0001b3fd) cntbar_detail_list_event_pane_g_ParamLimits

0xfe05,	// (0x0001b3fd) cntbar_detail_list_event_pane_g

0x8f93,	// (0x0001458b) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f93,	// (0x0001458b) cntbar_detail_list_event_pane_t1

0x8fa8,	// (0x000145a0) cntbar_detail_list_event_pane_t2_ParamLimits

0x8fa8,	// (0x000145a0) cntbar_detail_list_event_pane_t2

0x0002,

0xfe12,	// (0x0001b40a) cntbar_detail_list_event_pane_t_ParamLimits

0xfe12,	// (0x0001b40a) cntbar_detail_list_event_pane_t

0xa65b,	// (0x00015c53) cell_cntbar_detail_list_shct_pane_g1

0xb0a1,	// (0x00016699) navi_pane_mv_g3

0x9bf2,	// (0x000151ea) main_cntbar_detail_pane_ParamLimits

0x9b9f,	// (0x00015197) main_notif_wgt_pane

0xd2f5,	// (0x000188ed) aid_tch_main_mp4_pane_g4

0xd517,	// (0x00018b0f) popup_slider_window_cp02

0xefd7,	// (0x0001a5cf) list_recal_day_event_pane

0x8e03,	// (0x000143fb) cntbar_detail_btn_pane_ParamLimits

0x8e03,	// (0x000143fb) cntbar_detail_btn_pane

0x8e16,	// (0x0001440e) cntbar_detail_btn_pane_cp01_ParamLimits

0x8e16,	// (0x0001440e) cntbar_detail_btn_pane_cp01

0x8e3b,	// (0x00014433) cntbar_detail_list_shct_pane_ParamLimits

0x8e4b,	// (0x00014443) cntbar_detail_pane_g1_ParamLimits

0x8e4b,	// (0x00014443) cntbar_detail_pane_g1

0x8e5b,	// (0x00014453) cntbar_detail_pane_t1_ParamLimits

0x8e5b,	// (0x00014453) cntbar_detail_pane_t1

0x8f33,	// (0x0001452b) cntbar_detail_list_event_pane_g3_ParamLimits

0x8f33,	// (0x0001452b) cntbar_detail_list_event_pane_g3

0x8f4b,	// (0x00014543) cntbar_detail_list_event_pane_g4_ParamLimits

0x8f4b,	// (0x00014543) cntbar_detail_list_event_pane_g4

0x8f63,	// (0x0001455b) cntbar_detail_list_event_pane_g5_ParamLimits

0x8f63,	// (0x0001455b) cntbar_detail_list_event_pane_g5

0x8f7b,	// (0x00014573) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f7b,	// (0x00014573) cntbar_detail_list_event_pane_g6

0x8fbd,	// (0x000145b5) cntbar_detail_list_event_pane_t3_ParamLimits

0x8fbd,	// (0x000145b5) cntbar_detail_list_event_pane_t3

0x8fcf,	// (0x000145c7) popup_notif_wgt_window_ParamLimits

0x8fcf,	// (0x000145c7) popup_notif_wgt_window

0x8fe4,	// (0x000145dc) popup_submenu_window_cp01_ParamLimits

0x8fe4,	// (0x000145dc) popup_submenu_window_cp01

0xa5e3,	// (0x00015bdb) bg_popup_window_pane_cp10

0x0436,	// (0x0000ba2e) listscroll_notif_wgt_pane

0x0447,	// (0x0000ba3f) list_notif_wgt_window

0x0450,	// (0x0000ba48) scroll_pane_cp033

0x8ff4,	// (0x000145ec) list_notif_wgt_row_pane_ParamLimits

0x8ff4,	// (0x000145ec) list_notif_wgt_row_pane

0x046b,	// (0x0000ba63) aid_size_list_notif_wgt_del

0x0478,	// (0x0000ba70) list_notif_wgt_row_pane_g1

0x0484,	// (0x0000ba7c) list_notif_wgt_row_pane_g2

0x0498,	// (0x0000ba90) list_notif_wgt_row_pane_g3

0x0002,

0xfe19,	// (0x0001b411) list_notif_wgt_row_pane_g

0x04a5,	// (0x0000ba9d) list_notif_wgt_row_pane_t1

0x04bb,	// (0x0000bab3) list_notif_wgt_row_pane_t2

0x04cd,	// (0x0000bac5) list_notif_wgt_row_pane_t3

0x0002,

0xfe20,	// (0x0001b418) list_notif_wgt_row_pane_t

0xdaa9,	// (0x000190a1) list_recal_day_event_pane_g1

0x04df,	// (0x0000bad7) list_recal_day_event_pane_t1

0x9b9f,	// (0x00015197) bg_button_pane_cp045

0x9004,	// (0x000145fc) cntbar_detail_btn_pane_t1

0xb1ee,	// (0x000167e6) main_callh_pane_ParamLimits

0xb1ee,	// (0x000167e6) main_callh_pane

0x9b9f,	// (0x00015197) main_coverflow0_pane

0x9b9f,	// (0x00015197) main_wgtman_pane

0x8081,	// (0x00013679) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8081,	// (0x00013679) main_fs_bigclock_unlock_btn_pane

0xebcf,	// (0x0001a1c7) bg_button_pane_cp16

0xebdf,	// (0x0001a1d7) cell_tport_appsw_pane_g3

0x9012,	// (0x0001460a) cf0_flow_pane_ParamLimits

0x9012,	// (0x0001460a) cf0_flow_pane

0x050b,	// (0x0000bb03) listscroll_cf0_pane

0x0514,	// (0x0000bb0c) main_cf0_pane_g1

0x9027,	// (0x0001461f) main_cf0_pane_t1_ParamLimits

0x9027,	// (0x0001461f) main_cf0_pane_t1

0x903c,	// (0x00014634) main_cf0_pane_t2_ParamLimits

0x903c,	// (0x00014634) main_cf0_pane_t2

0x0001,

0xfe2c,	// (0x0001b424) main_cf0_pane_t_ParamLimits

0xfe2c,	// (0x0001b424) main_cf0_pane_t

0x054a,	// (0x0000bb42) scroll_pane_cp11

0x9051,	// (0x00014649) cf0_flow_pane_g1

0x9059,	// (0x00014651) cf0_flow_pane_g2

0x0001,

0xfe31,	// (0x0001b429) cf0_flow_pane_g

0x9061,	// (0x00014659) cf0_flow_pane_t1

0x9b9f,	// (0x00015197) main_call6_pane

0x9b9f,	// (0x00015197) main_calllock_pane

0x906f,	// (0x00014667) call6_btn_grp_pane_ParamLimits

0x906f,	// (0x00014667) call6_btn_grp_pane

0x9085,	// (0x0001467d) call6_pane_g1_ParamLimits

0x9085,	// (0x0001467d) call6_pane_g1

0x9098,	// (0x00014690) popup_call6_1st_window_ParamLimits

0x9098,	// (0x00014690) popup_call6_1st_window

0x90a7,	// (0x0001469f) popup_call6_2nd_window_ParamLimits

0x90a7,	// (0x0001469f) popup_call6_2nd_window

0x90b6,	// (0x000146ae) cell_call6_btn_pane_ParamLimits

0x90b6,	// (0x000146ae) cell_call6_btn_pane

0xa5e3,	// (0x00015bdb) bg_popup_call2_in_pane_cp03

0x05b2,	// (0x0000bbaa) popup_call6_1st_window_g1

0x05ba,	// (0x0000bbb2) popup_call6_1st_window_g2

0x05c2,	// (0x0000bbba) popup_call6_1st_window_g3

0x0002,

0xfe36,	// (0x0001b42e) popup_call6_1st_window_g

0x05ca,	// (0x0000bbc2) popup_call6_1st_window_t1

0x05d9,	// (0x0000bbd1) popup_call6_1st_window_t2

0x05e7,	// (0x0000bbdf) popup_call6_1st_window_t3

0x0002,

0xfe3d,	// (0x0001b435) popup_call6_1st_window_t

0xa5e3,	// (0x00015bdb) bg_popup_call2_in_pane_cp04

0x05f5,	// (0x0000bbed) popup_call6_2nd_window_g1

0x05fd,	// (0x0000bbf5) popup_call6_2nd_window_g2

0x0605,	// (0x0000bbfd) popup_call6_2nd_window_g3

0x0002,

0xfe44,	// (0x0001b43c) popup_call6_2nd_window_g

0x060d,	// (0x0000bc05) popup_call6_2nd_window_t1

0x9b9f,	// (0x00015197) bg_button_pane_cp15

0x061c,	// (0x0000bc14) cell_call6_btn_pane_g1

0x0625,	// (0x0000bc1d) cell_call6_btn_pane_t1

0x90ca,	// (0x000146c2) listscroll_wgtman_pane_ParamLimits

0x90ca,	// (0x000146c2) listscroll_wgtman_pane

0x90eb,	// (0x000146e3) wgtman_btn_pane_ParamLimits

0x90eb,	// (0x000146e3) wgtman_btn_pane

0xaef8,	// (0x000164f0) aid_scroll_copy1

0x0683,	// (0x0000bc7b) list_wgtman_pane

0x912b,	// (0x00014723) wgtman_btn_pane_g1_ParamLimits

0x912b,	// (0x00014723) wgtman_btn_pane_g1

0x9157,	// (0x0001474f) wgtman_btn_pane_t1_ParamLimits

0x9157,	// (0x0001474f) wgtman_btn_pane_t1

0x06ec,	// (0x0000bce4) wgtman_btn_pane_t2_ParamLimits

0x06ec,	// (0x0000bce4) wgtman_btn_pane_t2

0x0001,

0xfe4b,	// (0x0001b443) wgtman_btn_pane_t_ParamLimits

0xfe4b,	// (0x0001b443) wgtman_btn_pane_t

0x9194,	// (0x0001478c) listrow_wgtman_pane_ParamLimits

0x9194,	// (0x0001478c) listrow_wgtman_pane

0x91a6,	// (0x0001479e) listrow_wgtman_pane_g1

0x91b3,	// (0x000147ab) listrow_wgtman_pane_g2

0x0001,

0xfe50,	// (0x0001b448) listrow_wgtman_pane_g

0x91cb,	// (0x000147c3) listrow_wgtman_pane_t1

0x91e3,	// (0x000147db) listrow_wgtman_pane_t2

0x0001,

0xfe55,	// (0x0001b44d) listrow_wgtman_pane_t

0x9209,	// (0x00014801) wait_bar_pane_cp09

0x0789,	// (0x0000bd81) main_calllock_btn_pane

0x0791,	// (0x0000bd89) main_calllock_pane_g1

0x9b9f,	// (0x00015197) bg_button_pane_cp17

0x079a,	// (0x0000bd92) main_calllock_btn_pane_g1

0x07a3,	// (0x0000bd9b) main_calllock_btn_pane_t1

0x9b9f,	// (0x00015197) main_dialer3_pane

0x9b9f,	// (0x00015197) main_fmrd2_pane

0xa65b,	// (0x00015c53) main_fs_bigclock_unlock_btn_pane_g1

0x07ba,	// (0x0000bdb2) main_fs_bigclock_unlock_btn_pane_t1

0x921b,	// (0x00014813) area_fmrd2_info_pane_ParamLimits

0x921b,	// (0x00014813) area_fmrd2_info_pane

0x922a,	// (0x00014822) area_fmrd2_visual_pane_ParamLimits

0x922a,	// (0x00014822) area_fmrd2_visual_pane

0x9238,	// (0x00014830) fmrd2_indi_pane_ParamLimits

0x9238,	// (0x00014830) fmrd2_indi_pane

0x9245,	// (0x0001483d) area_fmrd2_visual_pane_g1

0x924d,	// (0x00014845) area_fmrd2_visual_pane_t1

0x925b,	// (0x00014853) area_fmrd2_visual_pane_t2

0x9269,	// (0x00014861) area_fmrd2_visual_pane_t3

0x0002,

0xfe5f,	// (0x0001b457) area_fmrd2_visual_pane_t

0x9277,	// (0x0001486f) area_fmrd2_info_pane_g1

0x927f,	// (0x00014877) area_fmrd2_info_pane_t1

0x928d,	// (0x00014885) area_fmrd2_info_pane_t2

0x929b,	// (0x00014893) area_fmrd2_info_pane_t3

0x92a9,	// (0x000148a1) area_fmrd2_info_pane_t4

0x0003,

0xfe66,	// (0x0001b45e) area_fmrd2_info_pane_t

0x92b7,	// (0x000148af) fmrd2_indi_pane_t1

0x92c5,	// (0x000148bd) fmrd2_indi_pane_t2

0x92d3,	// (0x000148cb) fmrd2_indi_pane_t3

0x0002,

0xfe6f,	// (0x0001b467) fmrd2_indi_pane_t

0xe766,	// (0x00019d5e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe766,	// (0x00019d5e) list_single_fs_bigclock_indicator_pane_g5

0xe814,	// (0x00019e0c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe814,	// (0x00019e0c) list_single_fs_bigclock_indicator_pane_t5

0x88fb,	// (0x00013ef3) aid_cell_bcale_month_pane_ParamLimits

0x88fb,	// (0x00013ef3) aid_cell_bcale_month_pane

0x8919,	// (0x00013f11) bcale_month_pane_ParamLimits

0x8919,	// (0x00013f11) bcale_month_pane

0x8931,	// (0x00013f29) bcale_preview_pane_ParamLimits

0x8931,	// (0x00013f29) bcale_preview_pane

0x0190,	// (0x0000b788) list_single_fs_bigclock_pane_t1_ParamLimits

0x01ac,	// (0x0000b7a4) list_single_fs_bigclock_pane_t2_ParamLimits

0x01ac,	// (0x0000b7a4) list_single_fs_bigclock_pane_t2

0x0001,

0xfdea,	// (0x0001b3e2) list_single_fs_bigclock_pane_t_ParamLimits

0xfdea,	// (0x0001b3e2) list_single_fs_bigclock_pane_t

0x07b2,	// (0x0000bdaa) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5a,	// (0x0001b452) main_fs_bigclock_unlock_btn_pane_g

0x92e1,	// (0x000148d9) aid_dia3_key_size_ParamLimits

0x92e1,	// (0x000148d9) aid_dia3_key_size

0x92f0,	// (0x000148e8) aid_dia3_listrow_size_ParamLimits

0x92f0,	// (0x000148e8) aid_dia3_listrow_size

0x9303,	// (0x000148fb) dia3_keypad_fun_pane_ParamLimits

0x9303,	// (0x000148fb) dia3_keypad_fun_pane

0x9317,	// (0x0001490f) dia3_keypad_num_pane_ParamLimits

0x9317,	// (0x0001490f) dia3_keypad_num_pane

0x9328,	// (0x00014920) dia3_listscroll_pane_ParamLimits

0x9328,	// (0x00014920) dia3_listscroll_pane

0x9339,	// (0x00014931) dia3_numentry_pane_ParamLimits

0x9339,	// (0x00014931) dia3_numentry_pane

0x08d5,	// (0x0000becd) dia3_list_pane

0x08de,	// (0x0000bed6) scroll_pane_cp12

0x9b9f,	// (0x00015197) bg_dia3_numentry_pane

0x934d,	// (0x00014945) dia3_numentry_pane_t1

0x935c,	// (0x00014954) cell_dia3_key_num_pane

0x9364,	// (0x0001495c) cell_dia3_key0_fun_pane_ParamLimits

0x9364,	// (0x0001495c) cell_dia3_key0_fun_pane

0x9378,	// (0x00014970) cell_dia3_key1_fun_pane_ParamLimits

0x9378,	// (0x00014970) cell_dia3_key1_fun_pane

0x938f,	// (0x00014987) dia3_listrow_pane

0xe475,	// (0x00019a6d) bg_dia3_numentry_pane_g1

0x9b9f,	// (0x00015197) bg_button_pane_cp21

0x0925,	// (0x0000bf1d) cell_dia3_key_num_pane_t1

0x0933,	// (0x0000bf2b) cell_dia3_key_num_pane_t2

0x0942,	// (0x0000bf3a) cell_dia3_key_num_pane_t3

0x0951,	// (0x0000bf49) cell_dia3_key_num_pane_t4

0x0003,

0xfe76,	// (0x0001b46e) cell_dia3_key_num_pane_t

0x9b9f,	// (0x00015197) bg_button_pane_cp19

0x0960,	// (0x0000bf58) cell_dia3_key0_fun_pane_g1

0x9b9f,	// (0x00015197) bg_button_pane_cp20

0x93a1,	// (0x00014999) cell_dia3_key1_fun_pane_g1

0x93a9,	// (0x000149a1) area_left_week_number_pane

0x93b5,	// (0x000149ad) area_top_day_name_pane

0x93c6,	// (0x000149be) frame_month_view_pane

0x099e,	// (0x0000bf96) grid_month_view_pane

0x93d7,	// (0x000149cf) cell_top_day_name_pane_ParamLimits

0x93d7,	// (0x000149cf) cell_top_day_name_pane

0x93fa,	// (0x000149f2) cell_area_left_week_number_pane_ParamLimits

0x93fa,	// (0x000149f2) cell_area_left_week_number_pane

0x940e,	// (0x00014a06) cell_month_view_pane_ParamLimits

0x940e,	// (0x00014a06) cell_month_view_pane

0x0a07,	// (0x0000bfff) frm_month_g1

0x9433,	// (0x00014a2b) frm_month_g2

0x9444,	// (0x00014a3c) frm_month_g3

0x9455,	// (0x00014a4d) frm_month_g4

0x9466,	// (0x00014a5e) frm_month_g5

0x9477,	// (0x00014a6f) frm_month_g6

0x9488,	// (0x00014a80) frm_month_g7

0x0a6e,	// (0x0000c066) frm_month_g8

0x9499,	// (0x00014a91) frm_month_g9

0x94a9,	// (0x00014aa1) frm_month_g10

0x94b9,	// (0x00014ab1) frm_month_g11

0x94c9,	// (0x00014ac1) frm_month_g12

0x94d9,	// (0x00014ad1) frm_month_g13

0x94e9,	// (0x00014ae1) frm_month_g14

0x94f9,	// (0x00014af1) frm_month_g15

0x950b,	// (0x00014b03) frm_month_g16

0x000f,

0xfe7f,	// (0x0001b477) frm_month_g

0x0ae3,	// (0x0000c0db) cell_top_day_name_pane_t1

0x951d,	// (0x00014b15) cell_area_left_week_number_pane_g1

0x9529,	// (0x00014b21) cell_area_left_week_number_pane_t1

0xa2e6,	// (0x000158de) cell_month_view_pane_g1

0x953c,	// (0x00014b34) cell_month_view_pane_t1

0x9b9f,	// (0x00015197) main_fps_pane

0xe9ff,	// (0x00019ff7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe9ff,	// (0x00019ff7) cmail_ddmenu_btn02_pane_cp1

0xea1b,	// (0x0001a013) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xea1b,	// (0x0001a013) cmail_ddmenu_btn02_pane_cp2

0x8c51,	// (0x00014249) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c51,	// (0x00014249) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd9d,	// (0x0001b395) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd9d,	// (0x0001b395) cmail_ddmenu_btn02_pane_g

0x8c6f,	// (0x00014267) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c6f,	// (0x00014267) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda2,	// (0x0001b39a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda2,	// (0x0001b39a) cmail_ddmenu_btn02_pane_t

0x954f,	// (0x00014b47) fps_text_pane_ParamLimits

0x954f,	// (0x00014b47) fps_text_pane

0x9565,	// (0x00014b5d) main_fps_pane_g1_ParamLimits

0x9565,	// (0x00014b5d) main_fps_pane_g1

0x957b,	// (0x00014b73) wait_bar_pane_cp010_ParamLimits

0x957b,	// (0x00014b73) wait_bar_pane_cp010

0x958c,	// (0x00014b84) fps_text_pane_t1_ParamLimits

0x958c,	// (0x00014b84) fps_text_pane_t1

0x0ded,	// (0x0000c3e5) cam4_image_uncrop_pane_g1

0x0df6,	// (0x0000c3ee) cam4_image_uncrop_pane_g2

0x6409,	// (0x00011a01) cam4_image_uncrop_pane_g3

0x6412,	// (0x00011a0a) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x0001ae9c) cam4_image_uncrop_pane_g

0x938f,	// (0x00014987) dia3_listrow_pane_ParamLimits

0x9b9f,	// (0x00015197) main_phob2_pane

0x874c,	// (0x00013d44) cell_tport_appsw_pane_cp02_ParamLimits

0x874c,	// (0x00013d44) cell_tport_appsw_pane_cp02

0x875c,	// (0x00013d54) cell_tport_appsw_pane_cp03_ParamLimits

0x875c,	// (0x00013d54) cell_tport_appsw_pane_cp03

0x9b9f,	// (0x00015197) phob2_contact_card_pane

0x9b9f,	// (0x00015197) phob2_listscroll_pane

0x0b6f,	// (0x0000c167) phob2_list_pane

0x0b77,	// (0x0000c16f) scroll_pane_cp034

0x95a4,	// (0x00014b9c) phob2_cc_data_pane_ParamLimits

0x95a4,	// (0x00014b9c) phob2_cc_data_pane

0x95c1,	// (0x00014bb9) phob2_cc_listscroll_pane_ParamLimits

0x95c1,	// (0x00014bb9) phob2_cc_listscroll_pane

0x9194,	// (0x0001478c) list_double_large_graphic_phob2_pane_ParamLimits

0x9194,	// (0x0001478c) list_double_large_graphic_phob2_pane

0x95dd,	// (0x00014bd5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x95dd,	// (0x00014bd5) list_double_large_graphic_phob2_pane_g1

0x95ea,	// (0x00014be2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x95ea,	// (0x00014be2) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea0,	// (0x0001b498) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea0,	// (0x0001b498) list_double_large_graphic_phob2_pane_g

0x960e,	// (0x00014c06) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x960e,	// (0x00014c06) list_double_large_graphic_phob2_pane_t1

0x9623,	// (0x00014c1b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9623,	// (0x00014c1b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfea9,	// (0x0001b4a1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfea9,	// (0x0001b4a1) list_double_large_graphic_phob2_pane_t

0x9b9f,	// (0x00015197) list_highlight_pane_cp024

0x0c1c,	// (0x0000c214) phob2_cc_button_pane

0x9638,	// (0x00014c30) phob2_cc_data_pane_g1_ParamLimits

0x9638,	// (0x00014c30) phob2_cc_data_pane_g1

0x964f,	// (0x00014c47) phob2_cc_data_pane_g2_ParamLimits

0x964f,	// (0x00014c47) phob2_cc_data_pane_g2

0x0001,

0xfeae,	// (0x0001b4a6) phob2_cc_data_pane_g_ParamLimits

0xfeae,	// (0x0001b4a6) phob2_cc_data_pane_g

0x9661,	// (0x00014c59) phob2_cc_data_pane_t1_ParamLimits

0x9661,	// (0x00014c59) phob2_cc_data_pane_t1

0x9679,	// (0x00014c71) phob2_cc_data_pane_t2_ParamLimits

0x9679,	// (0x00014c71) phob2_cc_data_pane_t2

0x9691,	// (0x00014c89) phob2_cc_data_pane_t3_ParamLimits

0x9691,	// (0x00014c89) phob2_cc_data_pane_t3

0x0002,

0xfeb3,	// (0x0001b4ab) phob2_cc_data_pane_t_ParamLimits

0xfeb3,	// (0x0001b4ab) phob2_cc_data_pane_t

0x0c81,	// (0x0000c279) phob2_cc_list_pane_ParamLimits

0x0c81,	// (0x0000c279) phob2_cc_list_pane

0xe392,	// (0x0001998a) scroll_pane_cp035_ParamLimits

0xe392,	// (0x0001998a) scroll_pane_cp035

0x9bf2,	// (0x000151ea) bg_button_pane_cp033

0x0c8d,	// (0x0000c285) phob2_cc_button_pane_g1

0x0c99,	// (0x0000c291) phob2_cc_button_pane_t1

0x0cae,	// (0x0000c2a6) phob2_cc_button_pane_t2

0x0001,

0xfeba,	// (0x0001b4b2) phob2_cc_button_pane_t

0x96a9,	// (0x00014ca1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x96a9,	// (0x00014ca1) list_double_large_graphic_phob2_cc_pane

0x96d7,	// (0x00014ccf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x96d7,	// (0x00014ccf) list_double_large_graphic_phob2_cc_pane_g1

0x96e3,	// (0x00014cdb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x96e3,	// (0x00014cdb) list_double_large_graphic_phob2_cc_pane_g2

0x96ef,	// (0x00014ce7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x96ef,	// (0x00014ce7) list_double_large_graphic_phob2_cc_pane_g3

0x96fb,	// (0x00014cf3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x96fb,	// (0x00014cf3) list_double_large_graphic_phob2_cc_pane_g4

0x9707,	// (0x00014cff) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9707,	// (0x00014cff) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfebf,	// (0x0001b4b7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfebf,	// (0x0001b4b7) list_double_large_graphic_phob2_cc_pane_g

0x9713,	// (0x00014d0b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9713,	// (0x00014d0b) list_double_large_graphic_phob2_cc_pane_t1

0x973c,	// (0x00014d34) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x973c,	// (0x00014d34) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeca,	// (0x0001b4c2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeca,	// (0x0001b4c2) list_double_large_graphic_phob2_cc_pane_t

0x0da7,	// (0x0000c39f) list_highlight_pane_cp025_ParamLimits

0x0da7,	// (0x0000c39f) list_highlight_pane_cp025

0x9bf2,	// (0x000151ea) bg_button_pane_cp033_ParamLimits

0x0c8d,	// (0x0000c285) phob2_cc_button_pane_g1_ParamLimits

0x0c99,	// (0x0000c291) phob2_cc_button_pane_t1_ParamLimits

0x0cae,	// (0x0000c2a6) phob2_cc_button_pane_t2_ParamLimits

0xfeba,	// (0x0001b4b2) phob2_cc_button_pane_t_ParamLimits

0x2366,	// (0x0000d95e) popup_wgtman_window

0xe495,	// (0x00019a8d) scroll_pane_cp038

0x910d,	// (0x00014705) wgtman_btn_pane_cp_01_ParamLimits

0x910d,	// (0x00014705) wgtman_btn_pane_cp_01

0x0db5,	// (0x0000c3ad) wgtman_content_pane

0x0dbe,	// (0x0000c3b6) wgtman_heading_pane

0x9b9f,	// (0x00015197) bg_heading_pane_cp02

0x0dc7,	// (0x0000c3bf) wgtman_heading_pane_g1

0x0dcf,	// (0x0000c3c7) wgtman_heading_pane_t1

0x0ddd,	// (0x0000c3d5) scroll_pane_cp036

0x0de5,	// (0x0000c3dd) wgtman_list_pane

0xe980,	// (0x00019f78) wgtman_list_pane_t1_ParamLimits

0xe980,	// (0x00019f78) wgtman_list_pane_t1

0xd6b6,	// (0x00018cae) cam4_grid_pane

0x708b,	// (0x00012683) bg_button_pane_cp015_ParamLimits

0x709b,	// (0x00012693) bg_button_pane_cp016_ParamLimits

0x70ad,	// (0x000126a5) bg_button_pane_cp017_ParamLimits

0x70fd,	// (0x000126f5) popup_vitu2_query_window_g3_ParamLimits

0x70fd,	// (0x000126f5) popup_vitu2_query_window_g3

0x71b0,	// (0x000127a8) popup_vitu2_query_window_t6_ParamLimits

0x71b0,	// (0x000127a8) popup_vitu2_query_window_t6

0x71db,	// (0x000127d3) popup_vitu2_query_window_t7_ParamLimits

0x71db,	// (0x000127d3) popup_vitu2_query_window_t7

0x0ded,	// (0x0000c3e5) cam4_grid_pane_g1

0x0df6,	// (0x0000c3ee) cam4_grid_pane_g2

0x0dff,	// (0x0000c3f7) cam4_grid_pane_g3

0x0e08,	// (0x0000c400) cam4_grid_pane_g4

0x0003,

0xfecf,	// (0x0001b4c7) cam4_grid_pane_g

0x2fb0,	// (0x0000e5a8) aid_placing_vt_slider_lsc_ParamLimits

0x3220,	// (0x0000e818) vidtel_button_pane_ParamLimits

0x3220,	// (0x0000e818) vidtel_button_pane

0x9b9f,	// (0x00015197) bg_button_pane_cp034

0x9765,	// (0x00014d5d) vidtel_button_pane_g1

0x976d,	// (0x00014d65) vidtel_button_pane_t1

0xda50,	// (0x00019048) aid_size_vtel_slider_touch

0xe392,	// (0x0001998a) scroll_pane_cp039

0xe4c4,	// (0x00019abc) ncim_query_button_pane_cp01_ParamLimits

0xe4e3,	// (0x00019adb) ncimui_query_pane_g1_ParamLimits

0x9bf2,	// (0x000151ea) input_focus_pane_cp012_ParamLimits

0xe508,	// (0x00019b00) ncim_query_entry_pane_t1_ParamLimits

0xe392,	// (0x0001998a) scroll_pane_cp039_ParamLimits

0xafbc,	// (0x000165b4) navi_pane_bcale_mc_g1

0xafc4,	// (0x000165bc) navi_pane_bcale_mc_t1

0xea4f,	// (0x0001a047) main_sp_fs_email_pane_g1

0xea5b,	// (0x0001a053) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x0001b297) main_sp_fs_email_pane_g

0xeebd,	// (0x0001a4b5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xeebd,	// (0x0001a4b5) list_single_cale_mrui_row_pane_g3

0x8c8f,	// (0x00014287) list_single_recal_day_pane_g5_event_pane

0xf03c,	// (0x0001a634) list_single_recal_day_pane_g7

0x0e2f,	// (0x0000c427) list_recal_day_event_pane_cp01

0x0e38,	// (0x0000c430) list_recal_vselct_arw_lo_pane_cp01

0x0e40,	// (0x0000c438) list_recal_vselct_arw_up_pane_cp01

0x0e48,	// (0x0000c440) list_recal_vselct_pane_cp01

0xdaa9,	// (0x000190a1) list_recal_day_event_pane_cp01_g1

0x0e52,	// (0x0000c44a) list_recal_day_event_pane_cp01_t1

0xf044,	// (0x0001a63c) list_single_recal_day_pane_t1_ParamLimits

0x8ca5,	// (0x0001429d) list_single_recal_day_pane_t2_ParamLimits

0xfdb2,	// (0x0001b3aa) list_single_recal_day_pane_t_ParamLimits

0xa26c,	// (0x00015864) bg_notes_pane_ParamLimits

0xa33e,	// (0x00015936) list_notes_pane_ParamLimits

0x255a,	// (0x0000db52) scroll_pane_cp06_ParamLimits

0xa37e,	// (0x00015976) main_notes_pane_ParamLimits

0x9bf2,	// (0x000151ea) main_welc_pane

0x9799,	// (0x00014d91) main_welc_body_pane_ParamLimits

0x9799,	// (0x00014d91) main_welc_body_pane

0x97b5,	// (0x00014dad) main_welc_opti_pane_ParamLimits

0x97b5,	// (0x00014dad) main_welc_opti_pane

0x9821,	// (0x00014e19) main_welc_pane_t1_ParamLimits

0x9821,	// (0x00014e19) main_welc_pane_t1

0x9961,	// (0x00014f59) main_welc_body_row_pane_ParamLimits

0x9961,	// (0x00014f59) main_welc_body_row_pane

0xb1e0,	// (0x000167d8) main_welc_opti_row_pane_ParamLimits

0xb1e0,	// (0x000167d8) main_welc_opti_row_pane

0x0ffc,	// (0x0000c5f4) main_welc_opti_row_pane_g1

0x9974,	// (0x00014f6c) main_welc_opti_row_pane_t1

0x1013,	// (0x0000c60b) main_welc_body_row_pane_t1

0x043f,	// (0x0000ba37) popup_notif_wgt_heading_pane

0x046b,	// (0x0000ba63) aid_size_list_notif_wgt_del_ParamLimits

0x0478,	// (0x0000ba70) list_notif_wgt_row_pane_g1_ParamLimits

0x0484,	// (0x0000ba7c) list_notif_wgt_row_pane_g2_ParamLimits

0x0498,	// (0x0000ba90) list_notif_wgt_row_pane_g3_ParamLimits

0xfe19,	// (0x0001b411) list_notif_wgt_row_pane_g_ParamLimits

0x04a5,	// (0x0000ba9d) list_notif_wgt_row_pane_t1_ParamLimits

0x04bb,	// (0x0000bab3) list_notif_wgt_row_pane_t2_ParamLimits

0x04cd,	// (0x0000bac5) list_notif_wgt_row_pane_t3_ParamLimits

0xfe20,	// (0x0001b418) list_notif_wgt_row_pane_t_ParamLimits

0x91a6,	// (0x0001479e) listrow_wgtman_pane_g1_ParamLimits

0x91b3,	// (0x000147ab) listrow_wgtman_pane_g2_ParamLimits

0xfe50,	// (0x0001b448) listrow_wgtman_pane_g_ParamLimits

0x91cb,	// (0x000147c3) listrow_wgtman_pane_t1_ParamLimits

0x91e3,	// (0x000147db) listrow_wgtman_pane_t2_ParamLimits

0xfe55,	// (0x0001b44d) listrow_wgtman_pane_t_ParamLimits

0x9209,	// (0x00014801) wait_bar_pane_cp09_ParamLimits

0x9b9f,	// (0x00015197) bg_popup_heading_pane_cp02

0x1022,	// (0x0000c61a) popup_notif_wgt_heading_pane_g1

0x102a,	// (0x0000c622) popup_notif_wgt_heading_pane_t1

0xc679,	// (0x00017c71) main_vids_pane

0x9b9f,	// (0x00015197) vids_listscroll_pane

0x9983,	// (0x00014f7b) scroll_pane_cp040

0x9b9f,	// (0x00015197) vids_list_pane

0x02a5,	// (0x0000b89d) vids_list_double_pane_ParamLimits

0x02a5,	// (0x0000b89d) vids_list_double_pane

0x998e,	// (0x00014f86) vids_list_double_pane_g1

0x9997,	// (0x00014f8f) vids_list_double_pane_t1

0x99a6,	// (0x00014f9e) vids_list_double_pane_t2

0x0001,

0xfeee,	// (0x0001b4e6) vids_list_double_pane_t

0x9bf2,	// (0x000151ea) main_ncimui_pane_ParamLimits

0x7c2d,	// (0x00013225) main_ncimui_pane_g1_ParamLimits

0x7c39,	// (0x00013231) main_ncimui_pane_g2_ParamLimits

0x7c39,	// (0x00013231) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x0001b198) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x0001b198) main_ncimui_pane_g

0x97cc,	// (0x00014dc4) main_welc_pane_g1_ParamLimits

0x97cc,	// (0x00014dc4) main_welc_pane_g1

0x97df,	// (0x00014dd7) main_welc_pane_g2_ParamLimits

0x97df,	// (0x00014dd7) main_welc_pane_g2

0x0003,

0xfed8,	// (0x0001b4d0) main_welc_pane_g_ParamLimits

0xfed8,	// (0x0001b4d0) main_welc_pane_g

0xa26c,	// (0x00015864) listscroll_mce_pane_ParamLimits

0x4166,	// (0x0000f75e) wait_bar_pane_cp10

0xc66d,	// (0x00017c65) main_cale_day_pane_ParamLimits

0xc66d,	// (0x00017c65) main_cale_week_pane_ParamLimits

0xa26c,	// (0x00015864) main_messa_pane_ParamLimits

0x5a47,	// (0x0001103f) main_clock2_btn_pane_ParamLimits

0x5a47,	// (0x0001103f) main_clock2_btn_pane

0xcebd,	// (0x000184b5) main_clock2_btn_pane_cp01_ParamLimits

0xcebd,	// (0x000184b5) main_clock2_btn_pane_cp01

0xee78,	// (0x0001a470) list_cale_mrui_pane_ParamLimits

0x051e,	// (0x0000bb16) main_cf0_pane_g2

0x0001,

0xfe27,	// (0x0001b41f) main_cf0_pane_g

0x93a9,	// (0x000149a1) area_left_week_number_pane_ParamLimits

0x93b5,	// (0x000149ad) area_top_day_name_pane_ParamLimits

0x93c6,	// (0x000149be) frame_month_view_pane_ParamLimits

0x099e,	// (0x0000bf96) grid_month_view_pane_ParamLimits

0x0a07,	// (0x0000bfff) frm_month_g1_ParamLimits

0x9433,	// (0x00014a2b) frm_month_g2_ParamLimits

0x9444,	// (0x00014a3c) frm_month_g3_ParamLimits

0x9455,	// (0x00014a4d) frm_month_g4_ParamLimits

0x9466,	// (0x00014a5e) frm_month_g5_ParamLimits

0x9477,	// (0x00014a6f) frm_month_g6_ParamLimits

0x9488,	// (0x00014a80) frm_month_g7_ParamLimits

0x0a6e,	// (0x0000c066) frm_month_g8_ParamLimits

0x9499,	// (0x00014a91) frm_month_g9_ParamLimits

0x94a9,	// (0x00014aa1) frm_month_g10_ParamLimits

0x94b9,	// (0x00014ab1) frm_month_g11_ParamLimits

0x94c9,	// (0x00014ac1) frm_month_g12_ParamLimits

0x94d9,	// (0x00014ad1) frm_month_g13_ParamLimits

0x94e9,	// (0x00014ae1) frm_month_g14_ParamLimits

0x94f9,	// (0x00014af1) frm_month_g15_ParamLimits

0x950b,	// (0x00014b03) frm_month_g16_ParamLimits

0xfe7f,	// (0x0001b477) frm_month_g_ParamLimits

0x0ae3,	// (0x0000c0db) cell_top_day_name_pane_t1_ParamLimits

0x951d,	// (0x00014b15) cell_area_left_week_number_pane_g1_ParamLimits

0x9529,	// (0x00014b21) cell_area_left_week_number_pane_t1_ParamLimits

0xa2e6,	// (0x000158de) cell_month_view_pane_g1_ParamLimits

0x953c,	// (0x00014b34) cell_month_view_pane_t1_ParamLimits

0xa264,	// (0x0001585c) main_clock2_btn_pane_g1

0x1079,	// (0x0000c671) main_clock2_btn_pane_t1

0x9bf2,	// (0x000151ea) listscroll_cmail_pane_ParamLimits

0xea4f,	// (0x0001a047) main_sp_fs_email_pane_g1_ParamLimits

0xea5b,	// (0x0001a053) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x0001b297) main_sp_fs_email_pane_g_ParamLimits

0xefb8,	// (0x0001a5b0) list_recal_day_pane_ParamLimits

0xefc9,	// (0x0001a5c1) mian_recal_day_pane_t1

0x8618,	// (0x00013c10) list_single_dyc_row_text_pane_t4_ParamLimits

0x8618,	// (0x00013c10) list_single_dyc_row_text_pane_t4

0x864f,	// (0x00013c47) list_single_dyc_row_text_pane_t5_ParamLimits

0x864f,	// (0x00013c47) list_single_dyc_row_text_pane_t5

0xeae3,	// (0x0001a0db) list_single_dyc_row_text_pane_t6_ParamLimits

0xeae3,	// (0x0001a0db) list_single_dyc_row_text_pane_t6

0x3d8b,	// (0x0000f383) aid_mgn_list_cale_time_pane

0x9bf2,	// (0x000151ea) main_gallery2_pane_ParamLimits

0xced1,	// (0x000184c9) main_clock2_pane_cp01_t1

0xcedf,	// (0x000184d7) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x0001ad6e) main_clock2_pane_cp01_t

0x28dd,	// (0x0000ded5) cale_week_scroll_pane_g16_ParamLimits

0x28dd,	// (0x0000ded5) cale_week_scroll_pane_g16

0xa5e3,	// (0x00015bdb) vorec_slider_pane

0x976d,	// (0x00014d65) vidtel_button_pane_t1_ParamLimits

0x8d4a,	// (0x00014342) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8d5c,	// (0x00014354) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8d6d,	// (0x00014365) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8d6d,	// (0x00014365) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdd5,	// (0x0001b3cd) main_fs_bigclock_clock_pane_g_ParamLimits

0x8d80,	// (0x00014378) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8d9b,	// (0x00014393) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdde,	// (0x0001b3d6) main_fs_bigclock_clock_pane_t_ParamLimits

0x5385,	// (0x0001097d) main_mup3_lyrics_pane_ParamLimits

0x5385,	// (0x0001097d) main_mup3_lyrics_pane

0x99d8,	// (0x00014fd0) main_mup3_lyrics_pane_t1_ParamLimits

0x99d8,	// (0x00014fd0) main_mup3_lyrics_pane_t1

0xd2df,	// (0x000188d7) aid_main_mp4_pane_t1_area

0xd2e9,	// (0x000188e1) aid_main_mp4_pane_t2_area

0xd395,	// (0x0001898d) main_mp4_pane_g7_ParamLimits

0xd395,	// (0x0001898d) main_mp4_pane_g7

0xd3a1,	// (0x00018999) main_mp4_pane_g8_ParamLimits

0xd3a1,	// (0x00018999) main_mp4_pane_g8

0x62ab,	// (0x000118a3) aid_call6_pane_g1_size

0x96c3,	// (0x00014cbb) list_double_large_graphic_phob2_other_pane_ParamLimits

0x96c3,	// (0x00014cbb) list_double_large_graphic_phob2_other_pane

0xaf0f,	// (0x00016507) list_double_large_graphic_phob2_other_pane_g1

0x9b9f,	// (0x00015197) list_highlight_pane_cp026

0x9bf2,	// (0x000151ea) main_welc_pane_ParamLimits

0x8423,	// (0x00013a1b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8423,	// (0x00013a1b) main_sp_fs_ctrlbar_pane_g3

0x843b,	// (0x00013a33) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x843b,	// (0x00013a33) main_sp_fs_ctrlbar_pane_g4

0x847d,	// (0x00013a75) toolbar2_fixed_button_pane_cp01

0x8488,	// (0x00013a80) toolbar2_fixed_button_pane_cp02

0x8493,	// (0x00013a8b) toolbar2_fixed_button_pane_cp03

0x9783,	// (0x00014d7b) list_welc_entry_pane_ParamLimits

0x9783,	// (0x00014d7b) list_welc_entry_pane

0x97f2,	// (0x00014dea) main_welc_pane_g3_ParamLimits

0x97f2,	// (0x00014dea) main_welc_pane_g3

0x983b,	// (0x00014e33) main_welc_pane_t2_ParamLimits

0x983b,	// (0x00014e33) main_welc_pane_t2

0x9851,	// (0x00014e49) main_welc_pane_t3_ParamLimits

0x9851,	// (0x00014e49) main_welc_pane_t3

0x0005,

0xfee1,	// (0x0001b4d9) main_welc_pane_t_ParamLimits

0xfee1,	// (0x0001b4d9) main_welc_pane_t

0x98fd,	// (0x00014ef5) welc_button_pane_ParamLimits

0x98fd,	// (0x00014ef5) welc_button_pane

0x9951,	// (0x00014f49) welc_service_logo_pane_ParamLimits

0x9951,	// (0x00014f49) welc_service_logo_pane

0x99f7,	// (0x00014fef) list_single_welc_entry_pane_ParamLimits

0x99f7,	// (0x00014fef) list_single_welc_entry_pane

0x9a08,	// (0x00015000) list_single_welc_entry_pane_g1

0x9a10,	// (0x00015008) list_single_welc_entry_pane_t1

0x9a1e,	// (0x00015016) list_single_welc_entry_pane_t2

0x0001,

0xfef3,	// (0x0001b4eb) list_single_welc_entry_pane_t

0x9b9f,	// (0x00015197) bg_button_pane_cp035

0x10fe,	// (0x0000c6f6) welc_button_pane_t1

0x110c,	// (0x0000c704) welc_service_logo_pane_g1

0x1115,	// (0x0000c70d) welc_service_logo_pane_g2

0x0001,

0xfef8,	// (0x0001b4f0) welc_service_logo_pane_g

0x9b9f,	// (0x00015197) main_int_radio_pane

0xa443,	// (0x00015a3b) list_single_fs_dyc_pane_g1

0x95f6,	// (0x00014bee) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x95f6,	// (0x00014bee) list_double_large_graphic_phob2_pane_g3

0x9602,	// (0x00014bfa) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9602,	// (0x00014bfa) list_double_large_graphic_phob2_pane_g4

0x9a2c,	// (0x00015024) main_int_radio1_pane_ParamLimits

0x9a2c,	// (0x00015024) main_int_radio1_pane

0x1134,	// (0x0000c72c) find_pane_cp02

0x9a49,	// (0x00015041) input_focus_pane_cp12_ParamLimits

0x9a49,	// (0x00015041) input_focus_pane_cp12

0x9a59,	// (0x00015051) input_focus_pane_cp13_ParamLimits

0x9a59,	// (0x00015051) input_focus_pane_cp13

0x9a6d,	// (0x00015065) input_focus_pane_cp14_ParamLimits

0x9a6d,	// (0x00015065) input_focus_pane_cp14

0x1179,	// (0x0000c771) int_radio1_listscroll_pane

0x9a81,	// (0x00015079) main_int_radio1_pane_g1_ParamLimits

0x9a81,	// (0x00015079) main_int_radio1_pane_g1

0x9a95,	// (0x0001508d) main_int_radio1_pane_t1_ParamLimits

0x9a95,	// (0x0001508d) main_int_radio1_pane_t1

0x9aac,	// (0x000150a4) main_int_radio1_pane_t2_ParamLimits

0x9aac,	// (0x000150a4) main_int_radio1_pane_t2

0x9ac3,	// (0x000150bb) main_int_radio1_pane_t3_ParamLimits

0x9ac3,	// (0x000150bb) main_int_radio1_pane_t3

0x9ada,	// (0x000150d2) main_int_radio1_pane_t4_ParamLimits

0x9ada,	// (0x000150d2) main_int_radio1_pane_t4

0x11dc,	// (0x0000c7d4) main_int_radio1_pane_t5_ParamLimits

0x11dc,	// (0x0000c7d4) main_int_radio1_pane_t5

0x9aec,	// (0x000150e4) main_int_radio1_pane_t6_ParamLimits

0x9aec,	// (0x000150e4) main_int_radio1_pane_t6

0x9b01,	// (0x000150f9) main_int_radio1_pane_t7_ParamLimits

0x9b01,	// (0x000150f9) main_int_radio1_pane_t7

0x9b16,	// (0x0001510e) main_int_radio1_pane_t8_ParamLimits

0x9b16,	// (0x0001510e) main_int_radio1_pane_t8

0x9b33,	// (0x0001512b) main_int_radio1_pane_t9_ParamLimits

0x9b33,	// (0x0001512b) main_int_radio1_pane_t9

0x9b45,	// (0x0001513d) main_int_radio1_pane_t10_ParamLimits

0x9b45,	// (0x0001513d) main_int_radio1_pane_t10

0x9b69,	// (0x00015161) main_int_radio1_pane_t11_ParamLimits

0x9b69,	// (0x00015161) main_int_radio1_pane_t11

0x9b8d,	// (0x00015185) main_int_radio1_pane_t12_ParamLimits

0x9b8d,	// (0x00015185) main_int_radio1_pane_t12

0x000b,

0xfefd,	// (0x0001b4f5) main_int_radio1_pane_t_ParamLimits

0xfefd,	// (0x0001b4f5) main_int_radio1_pane_t

0x12ab,	// (0x0000c8a3) int_radio_list_pane

0x0b77,	// (0x0000c16f) scroll_pane_cp037

0x0703,	// (0x0000bcfb) list_double_large_graphic_int_radio_pane_ParamLimits

0x0703,	// (0x0000bcfb) list_double_large_graphic_int_radio_pane

0x12b3,	// (0x0000c8ab) list_double_large_graphic_int_radio_pane_g1

0x12bc,	// (0x0000c8b4) list_double_large_graphic_int_radio_pane_t1

0x12ca,	// (0x0000c8c2) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff16,	// (0x0001b50e) list_double_large_graphic_int_radio_pane_t

0x9b9f,	// (0x00015197) list_highlight_pane_cp027

0x0e6d,	// (0x0000c465) main_button_pane_4

0x9802,	// (0x00014dfa) main_welc_pane_g4_ParamLimits

0x9802,	// (0x00014dfa) main_welc_pane_g4

0x9867,	// (0x00014e5f) main_welc_pane_t4_ParamLimits

0x9867,	// (0x00014e5f) main_welc_pane_t4

0x987c,	// (0x00014e74) main_welc_pane_t5_ParamLimits

0x987c,	// (0x00014e74) main_welc_pane_t5

0x98c4,	// (0x00014ebc) main_welc_pane_t6_ParamLimits

0x98c4,	// (0x00014ebc) main_welc_pane_t6

0x990e,	// (0x00014f06) welc_button_pane_2_ParamLimits

0x990e,	// (0x00014f06) welc_button_pane_2

0x9924,	// (0x00014f1c) welc_button_pane_3_ParamLimits

0x9924,	// (0x00014f1c) welc_button_pane_3

0x0e6d,	// (0x0000c465) welc_button_pane_4

0x993f,	// (0x00014f37) welc_button_pane_5_ParamLimits

0x993f,	// (0x00014f37) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	0, // AknLayoutScalable_Apps::Tmain_acti_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_sso_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_logo_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_logo_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_sso_logo_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_gap_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt1_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt2_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt3_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt_Limits_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_widget_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_window_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_window_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tinput_focus_pane_cp10_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tinput_focus_pane_cp10_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t3_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t3_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t4_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Tbg_button_pane_cp22_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tbg_popup_window_pane_cp11_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tbg_popup_window_pane_cp11_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_sk_window_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_sk_window_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_pane_sig*,
	0, // AknLayoutScalable_Apps::Tscroll_pane_cp21_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tscroll_pane_cp21_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_t1_sig*,
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
