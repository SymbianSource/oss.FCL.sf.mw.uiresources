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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000504b7 };

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
0x356a,	// (0x00053a21) Screen

0x3574,	// (0x00053a2b) application_window

0x35a3,	// (0x00053a5a) area_bottom_pane_ParamLimits

0x35a3,	// (0x00053a5a) area_bottom_pane

0x35d6,	// (0x00053a8d) area_top_pane_ParamLimits

0x35d6,	// (0x00053a8d) area_top_pane

0x0f19,	// (0x000513d0) call_video_uplink_pane_ParamLimits

0x0f19,	// (0x000513d0) call_video_uplink_pane

0x3647,	// (0x00053afe) main_pane_ParamLimits

0x3647,	// (0x00053afe) main_pane

0xc4a2,	// (0x0005c959) context_pane

0x62a9,	// (0x00056760) navi_pane

0x62d2,	// (0x00056789) popup_cale_events_window_ParamLimits

0x62d2,	// (0x00056789) popup_cale_events_window

0xc4b5,	// (0x0005c96c) popup_mup_playback_window

0x62ea,	// (0x000567a1) signal_pane

0x1670,	// (0x00051b27) main_browser_pane

0x21ed,	// (0x000526a4) main_burst_pane

0x257c,	// (0x00052a33) main_calc_pane

0x21ed,	// (0x000526a4) main_cale_day_pane

0x1798,	// (0x00051c4f) main_cale_month_pane

0x21ed,	// (0x000526a4) main_cale_week_pane

0x21ed,	// (0x000526a4) main_call_pane

0x1346,	// (0x000517fd) main_call_poc_pane

0x21ed,	// (0x000526a4) main_camera_pane

0x21ed,	// (0x000526a4) main_chi_dic_pane

0x1fec,	// (0x000524a3) main_clock_pane

0x1346,	// (0x000517fd) main_fmradio_pane

0x21ed,	// (0x000526a4) main_graph_messa_pane

0x1346,	// (0x000517fd) main_help_pane

0x1670,	// (0x00051b27) main_im_pane

0x15a1,	// (0x00051a58) main_image_pane_ParamLimits

0x15a1,	// (0x00051a58) main_image_pane

0x1346,	// (0x000517fd) main_location2_pane

0x21ed,	// (0x000526a4) main_location_pane

0x1346,	// (0x000517fd) main_messa_pane

0x1346,	// (0x000517fd) main_mp2_pane

0x21ed,	// (0x000526a4) main_mp_pane

0x1346,	// (0x000517fd) main_msg_pane

0x1346,	// (0x000517fd) main_mup_eq_pane

0x1346,	// (0x000517fd) main_mup_pane

0x21ed,	// (0x000526a4) main_notes_pane

0x1346,	// (0x000517fd) main_pec_pane

0x1346,	// (0x000517fd) main_phob_pane

0x1346,	// (0x000517fd) main_pinb_pane

0x1346,	// (0x000517fd) main_postcard_pane

0x1346,	// (0x000517fd) main_qdial_pane

0x21ed,	// (0x000526a4) main_skin_pane

0x1346,	// (0x000517fd) main_smil2_pane

0x21ed,	// (0x000526a4) main_smil_pane

0x21ed,	// (0x000526a4) main_video_pane

0x21ed,	// (0x000526a4) main_video_tele_pane

0x15a1,	// (0x00051a58) main_viewer_pane_ParamLimits

0x15a1,	// (0x00051a58) main_viewer_pane

0x21ed,	// (0x000526a4) main_vorec_pane

0x6089,	// (0x00056540) popup_blid_sat_info_window_ParamLimits

0x6089,	// (0x00056540) popup_blid_sat_info_window

0x60df,	// (0x00056596) popup_dyc_status_message_window_ParamLimits

0x60df,	// (0x00056596) popup_dyc_status_message_window

0x60f5,	// (0x000565ac) popup_grid_large_graphic_window_ParamLimits

0x60f5,	// (0x000565ac) popup_grid_large_graphic_window

0x618b,	// (0x00056642) popup_loc_request_window_ParamLimits

0x618b,	// (0x00056642) popup_loc_request_window

0x6283,	// (0x0005673a) popup_wml_address_window_ParamLimits

0x6283,	// (0x0005673a) popup_wml_address_window

0x5edf,	// (0x00056396) call_muted_g1

0x5c04,	// (0x000560bb) popup_call_audio_conf_window_ParamLimits

0x5c04,	// (0x000560bb) popup_call_audio_conf_window

0x5eef,	// (0x000563a6) popup_call_audio_first_window_ParamLimits

0x5eef,	// (0x000563a6) popup_call_audio_first_window

0x5f4d,	// (0x00056404) popup_call_audio_in_window_ParamLimits

0x5f4d,	// (0x00056404) popup_call_audio_in_window

0x5f79,	// (0x00056430) popup_call_audio_out_window_ParamLimits

0x5f79,	// (0x00056430) popup_call_audio_out_window

0x5fa7,	// (0x0005645e) popup_call_audio_second_window_ParamLimits

0x5fa7,	// (0x0005645e) popup_call_audio_second_window

0x5fed,	// (0x000564a4) popup_call_audio_wait_window_ParamLimits

0x5fed,	// (0x000564a4) popup_call_audio_wait_window

0x6020,	// (0x000564d7) popup_number_entry_window_ParamLimits

0x6020,	// (0x000564d7) popup_number_entry_window

0x0f35,	// (0x000513ec) bg_popup_call_pane_cp05_ParamLimits

0x0f35,	// (0x000513ec) bg_popup_call_pane_cp05

0x0f55,	// (0x0005140c) popup_number_entry_window_t1

0x0f68,	// (0x0005141f) popup_number_entry_window_t2

0x0f7a,	// (0x00051431) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0005f5a3) popup_number_entry_window_t

0x0f8c,	// (0x00051443) text_title_cp2

0x0f9f,	// (0x00051456) bg_popup_call_pane_cp_ParamLimits

0x0f9f,	// (0x00051456) bg_popup_call_pane_cp

0x0fad,	// (0x00051464) call_thumbnail_pane

0x0fb5,	// (0x0005146c) popup_call_audio_in_window_g1_ParamLimits

0x0fb5,	// (0x0005146c) popup_call_audio_in_window_g1

0x0fc1,	// (0x00051478) popup_call_audio_in_window_g2_ParamLimits

0x0fc1,	// (0x00051478) popup_call_audio_in_window_g2

0x0fcd,	// (0x00051484) popup_call_audio_in_window_g3_ParamLimits

0x0fcd,	// (0x00051484) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0005f5ac) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0005f5ac) popup_call_audio_in_window_g

0x0fd9,	// (0x00051490) popup_call_audio_in_window_t1_ParamLimits

0x0fd9,	// (0x00051490) popup_call_audio_in_window_t1

0x0ff4,	// (0x000514ab) popup_call_audio_in_window_t2_ParamLimits

0x0ff4,	// (0x000514ab) popup_call_audio_in_window_t2

0x100f,	// (0x000514c6) popup_call_audio_in_window_t3_ParamLimits

0x100f,	// (0x000514c6) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0005f5b3) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0005f5b3) popup_call_audio_in_window_t

0x0f9f,	// (0x00051456) bg_popup_call_pane_cp01_ParamLimits

0x0f9f,	// (0x00051456) bg_popup_call_pane_cp01

0x0fad,	// (0x00051464) call_thumbnail_pane_cp02

0x1022,	// (0x000514d9) call_type_pane_cp022

0x102a,	// (0x000514e1) popup_call_audio_out_window_g1_ParamLimits

0x102a,	// (0x000514e1) popup_call_audio_out_window_g1

0x103c,	// (0x000514f3) popup_call_audio_out_window_g2_ParamLimits

0x103c,	// (0x000514f3) popup_call_audio_out_window_g2

0x1048,	// (0x000514ff) popup_call_audio_out_window_g3_ParamLimits

0x1048,	// (0x000514ff) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0005f5ba) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0005f5ba) popup_call_audio_out_window_g

0x105a,	// (0x00051511) popup_call_audio_out_window_t1_ParamLimits

0x105a,	// (0x00051511) popup_call_audio_out_window_t1

0x1072,	// (0x00051529) popup_call_audio_out_window_t2_ParamLimits

0x1072,	// (0x00051529) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0005f5c1) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0005f5c1) popup_call_audio_out_window_t

0x1087,	// (0x0005153e) bg_popup_call_pane_ParamLimits

0x1087,	// (0x0005153e) bg_popup_call_pane

0x37d9,	// (0x00053c90) call_thumbnail_pane_cp_ParamLimits

0x37d9,	// (0x00053c90) call_thumbnail_pane_cp

0x110b,	// (0x000515c2) call_type_pane_cp01_ParamLimits

0x110b,	// (0x000515c2) call_type_pane_cp01

0x114f,	// (0x00051606) popup_call_audio_first_window_g1_ParamLimits

0x114f,	// (0x00051606) popup_call_audio_first_window_g1

0x119b,	// (0x00051652) popup_call_audio_first_window_g2_ParamLimits

0x119b,	// (0x00051652) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0005f5c6) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0005f5c6) popup_call_audio_first_window_g

0x11df,	// (0x00051696) popup_call_audio_first_window_t1_ParamLimits

0x11df,	// (0x00051696) popup_call_audio_first_window_t1

0x128b,	// (0x00051742) popup_call_audio_first_window_t4_ParamLimits

0x128b,	// (0x00051742) popup_call_audio_first_window_t4

0x1317,	// (0x000517ce) popup_call_audio_first_window_t5_ParamLimits

0x1317,	// (0x000517ce) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0005f5cb) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0005f5cb) popup_call_audio_first_window_t

0x1346,	// (0x000517fd) bg_popup_call_pane_cp02

0x1350,	// (0x00051807) call_type_pane_cp023

0x1358,	// (0x0005180f) popup_call_audio_wait_window_g1

0x1360,	// (0x00051817) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005f5d2) popup_call_audio_wait_window_g

0x1368,	// (0x0005181f) popup_call_audio_wait_window_t3

0x1376,	// (0x0005182d) bg_popup_call_pane_cp03_ParamLimits

0x1376,	// (0x0005182d) bg_popup_call_pane_cp03

0x13d6,	// (0x0005188d) call_thumbnail_pane_cp011_ParamLimits

0x13d6,	// (0x0005188d) call_thumbnail_pane_cp011

0x13e2,	// (0x00051899) call_type_pane_cp034_ParamLimits

0x13e2,	// (0x00051899) call_type_pane_cp034

0x141e,	// (0x000518d5) popup_call_audio_second_window_g1_ParamLimits

0x141e,	// (0x000518d5) popup_call_audio_second_window_g1

0x145a,	// (0x00051911) popup_call_audio_second_window_g2_ParamLimits

0x145a,	// (0x00051911) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0005f5d7) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0005f5d7) popup_call_audio_second_window_g

0x1496,	// (0x0005194d) popup_call_audio_second_window_t1_ParamLimits

0x1496,	// (0x0005194d) popup_call_audio_second_window_t1

0x1517,	// (0x000519ce) popup_call_audio_second_window_t2_ParamLimits

0x1517,	// (0x000519ce) popup_call_audio_second_window_t2

0x154d,	// (0x00051a04) popup_call_audio_second_window_t3_ParamLimits

0x154d,	// (0x00051a04) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0005f5dc) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0005f5dc) popup_call_audio_second_window_t

0x1346,	// (0x000517fd) bg_popup_call_pane_cp04

0x1583,	// (0x00051a3a) list_conf_pane

0x158b,	// (0x00051a42) popup_call_audio_conf_window_t1

0x1599,	// (0x00051a50) call_thumbnail_pane_g1

0x15a1,	// (0x00051a58) bg_pinb_pane_ParamLimits

0x15a1,	// (0x00051a58) bg_pinb_pane

0x15af,	// (0x00051a66) find_pinb_pane

0x15b8,	// (0x00051a6f) listscroll_pinb_pane_ParamLimits

0x15b8,	// (0x00051a6f) listscroll_pinb_pane

0x15c7,	// (0x00051a7e) pinb_bg_pane_g1

0x37fd,	// (0x00053cb4) pinb_bg_pane_g2

0x3807,	// (0x00053cbe) pinb_bg_pane_g3

0x3811,	// (0x00053cc8) pinb_bg_pane_g4

0x381b,	// (0x00053cd2) pinb_bg_pane_g5

0x3825,	// (0x00053cdc) pinb_bg_pane_g6

0x382e,	// (0x00053ce5) pinb_bg_pane_g7

0x3837,	// (0x00053cee) pinb_bg_pane_g8

0x3842,	// (0x00053cf9) pinb_bg_pane_g9

0x384c,	// (0x00053d03) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0005f5e3) pinb_bg_pane_g

0x3867,	// (0x00053d1e) grid_pinb_pane

0x3870,	// (0x00053d27) list_pinb_pane

0x3879,	// (0x00053d30) scroll_pane_cp01_ParamLimits

0x3879,	// (0x00053d30) scroll_pane_cp01

0x15d1,	// (0x00051a88) find_pinb_pane_g1_ParamLimits

0x15d1,	// (0x00051a88) find_pinb_pane_g1

0x15e9,	// (0x00051aa0) find_pinb_pane_t1

0x15fb,	// (0x00051ab2) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0005f5fd) find_pinb_pane_t

0x1610,	// (0x00051ac7) input_focus_pane_cp01_ParamLimits

0x1610,	// (0x00051ac7) input_focus_pane_cp01

0x388b,	// (0x00053d42) cell_pinb_pane_ParamLimits

0x388b,	// (0x00053d42) cell_pinb_pane

0x38a6,	// (0x00053d5d) cell_pinb_pane_g1_ParamLimits

0x38a6,	// (0x00053d5d) cell_pinb_pane_g1

0x38b6,	// (0x00053d6d) cell_pinb_pane_g2_ParamLimits

0x38b6,	// (0x00053d6d) cell_pinb_pane_g2

0x161c,	// (0x00051ad3) cell_pinb_pane_g3_ParamLimits

0x161c,	// (0x00051ad3) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0005f602) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0005f602) cell_pinb_pane_g

0x1346,	// (0x000517fd) grid_highlight_pane_cp01

0x38c2,	// (0x00053d79) list_pinb_item_pane_ParamLimits

0x38c2,	// (0x00053d79) list_pinb_item_pane

0x1346,	// (0x000517fd) list_highlight_pane_cp02

0x38d4,	// (0x00053d8b) list_pinb_item_pane_g1_ParamLimits

0x38d4,	// (0x00053d8b) list_pinb_item_pane_g1

0x38e1,	// (0x00053d98) list_pinb_item_pane_g2_ParamLimits

0x38e1,	// (0x00053d98) list_pinb_item_pane_g2

0x38ed,	// (0x00053da4) list_pinb_item_pane_g3_ParamLimits

0x38ed,	// (0x00053da4) list_pinb_item_pane_g3

0x38fe,	// (0x00053db5) list_pinb_item_pane_g4_ParamLimits

0x38fe,	// (0x00053db5) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0005f609) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0005f609) list_pinb_item_pane_g

0x390a,	// (0x00053dc1) list_pinb_item_pane_t1_ParamLimits

0x390a,	// (0x00053dc1) list_pinb_item_pane_t1

0x393f,	// (0x00053df6) calc_display_pane

0x395b,	// (0x00053e12) calc_paper_pane

0x397c,	// (0x00053e33) grid_calc_pane

0x1346,	// (0x000517fd) bg_list_pane_cp01

0x3998,	// (0x00053e4f) clock_g1

0x39a0,	// (0x00053e57) clock_g2

0x0001,

0xf15b,	// (0x0005f612) clock_g

0x39a8,	// (0x00053e5f) clock_t1_ParamLimits

0x39a8,	// (0x00053e5f) clock_t1

0x39bd,	// (0x00053e74) clock_t2_ParamLimits

0x39bd,	// (0x00053e74) clock_t2

0x39cf,	// (0x00053e86) clock_t3_ParamLimits

0x39cf,	// (0x00053e86) clock_t3

0x39e1,	// (0x00053e98) clock_t4_ParamLimits

0x39e1,	// (0x00053e98) clock_t4

0x39f3,	// (0x00053eaa) clock_t5_ParamLimits

0x39f3,	// (0x00053eaa) clock_t5

0x3a08,	// (0x00053ebf) clock_t6_ParamLimits

0x3a08,	// (0x00053ebf) clock_t6

0x3a1a,	// (0x00053ed1) clock_t7_ParamLimits

0x3a1a,	// (0x00053ed1) clock_t7

0x3a2c,	// (0x00053ee3) clock_t8_ParamLimits

0x3a2c,	// (0x00053ee3) clock_t8

0x3a3e,	// (0x00053ef5) clock_t9_ParamLimits

0x3a3e,	// (0x00053ef5) clock_t9

0x0008,

0xf160,	// (0x0005f617) clock_t_ParamLimits

0xf160,	// (0x0005f617) clock_t

0x1628,	// (0x00051adf) popup_clock_analogue_window_cp02

0x1628,	// (0x00051adf) popup_clock_digital_window_cp01

0x1630,	// (0x00051ae7) listscroll_help_pane

0x1346,	// (0x000517fd) phob_pre_status_pane

0x163a,	// (0x00051af1) grid_qdial_pane

0x1346,	// (0x000517fd) listscroll_mce_pane

0x1644,	// (0x00051afb) bg_notes_pane

0x164e,	// (0x00051b05) list_notes_pane

0x3a50,	// (0x00053f07) scroll_pane_cp06

0x1658,	// (0x00051b0f) bg_calc_paper_pane

0xb021,	// (0x0005b4d8) list_calc_pane

0x1670,	// (0x00051b27) bg_calc_display_pane

0xb03b,	// (0x0005b4f2) calc_display_pane_t1

0xb050,	// (0x0005b507) calc_display_pane_t2

0xb065,	// (0x0005b51c) calc_display_pane_t3

0x0002,

0xf173,	// (0x0005f62a) calc_display_pane_t

0x3a5b,	// (0x00053f12) cell_calc_pane_ParamLimits

0x3a5b,	// (0x00053f12) cell_calc_pane

0x167c,	// (0x00051b33) bg_calc_paper_pane_g1

0x1688,	// (0x00051b3f) bg_calc_paper_pane_g2

0x1694,	// (0x00051b4b) bg_calc_paper_pane_g3

0x16a0,	// (0x00051b57) bg_calc_paper_pane_g4

0x16ac,	// (0x00051b63) bg_calc_paper_pane_g5

0x3a8e,	// (0x00053f45) bg_calc_paper_pane_g6

0x3a9d,	// (0x00053f54) bg_calc_paper_pane_g7

0x3aac,	// (0x00053f63) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0005f631) bg_calc_paper_pane_g

0x3abb,	// (0x00053f72) calc_bg_paper_pane_g9

0x3aca,	// (0x00053f81) list_calc_item_pane_ParamLimits

0x3aca,	// (0x00053f81) list_calc_item_pane

0x16b8,	// (0x00051b6f) list_calc_item_pane_g1

0xb077,	// (0x0005b52e) list_calc_item_pane_t1_ParamLimits

0xb077,	// (0x0005b52e) list_calc_item_pane_t1

0x3ade,	// (0x00053f95) list_calc_item_pane_t2_ParamLimits

0x3ade,	// (0x00053f95) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0005f642) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0005f642) list_calc_item_pane_t

0x16c5,	// (0x00051b7c) cell_calc_pane_g1

0x16cf,	// (0x00051b86) grid_highlight_pane_cp02

0x16f1,	// (0x00051ba8) bg_calc_display_pane_g1

0xb089,	// (0x0005b540) bg_calc_display_pane_g2

0x16fa,	// (0x00051bb1) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0005f64c) bg_calc_display_pane_g

0x3b0c,	// (0x00053fc3) cell_qdial_pane_ParamLimits

0x3b0c,	// (0x00053fc3) cell_qdial_pane

0x3b1e,	// (0x00053fd5) cell_qdial_pane_g1_ParamLimits

0x3b1e,	// (0x00053fd5) cell_qdial_pane_g1

0x3b34,	// (0x00053feb) cell_qdial_pane_g2_ParamLimits

0x3b34,	// (0x00053feb) cell_qdial_pane_g2

0x1703,	// (0x00051bba) cell_qdial_pane_g3_ParamLimits

0x1703,	// (0x00051bba) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0005f653) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0005f653) cell_qdial_pane_g

0x3b5b,	// (0x00054012) cell_qdial_pane_t1_ParamLimits

0x3b5b,	// (0x00054012) cell_qdial_pane_t1

0x3b73,	// (0x0005402a) cell_qdial_pane_t2_ParamLimits

0x3b73,	// (0x0005402a) cell_qdial_pane_t2

0x3b86,	// (0x0005403d) cell_qdial_pane_t3_ParamLimits

0x3b86,	// (0x0005403d) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0005f65c) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0005f65c) cell_qdial_pane_t

0x1346,	// (0x000517fd) grid_highlight_pane_cp04

0x170f,	// (0x00051bc6) thumbnail_qdial_pane_ParamLimits

0x170f,	// (0x00051bc6) thumbnail_qdial_pane

0x176b,	// (0x00051c22) list_help_pane

0x1775,	// (0x00051c2c) scroll_pane_cp02

0x3b99,	// (0x00054050) help_list_pane_t1_ParamLimits

0x3b99,	// (0x00054050) help_list_pane_t1

0xb093,	// (0x0005b54a) bg_notes_pane_g2

0xb09b,	// (0x0005b552) bg_notes_pane_g3

0xb0a3,	// (0x0005b55a) notes_bg_pane_g1

0xb0ab,	// (0x0005b562) notes_bg_pane_g4

0xb0b3,	// (0x0005b56a) notes_bg_pane_g5

0xb0bb,	// (0x0005b572) notes_bg_pane_g6

0xb0c3,	// (0x0005b57a) notes_bg_pane_g7

0xb0cb,	// (0x0005b582) notes_bg_pane_g8

0xb0d3,	// (0x0005b58a) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0005f67a) notes_bg_pane_g

0x2596,	// (0x00052a4d) list_notes_text_pane_ParamLimits

0x2596,	// (0x00052a4d) list_notes_text_pane

0x177e,	// (0x00051c35) list_notes_text_pane_g1

0x3bb5,	// (0x0005406c) list_notes_text_pane_t1

0x1798,	// (0x00051c4f) listscroll_cale_week_pane

0x3bde,	// (0x00054095) bg_cale_heading_pane

0x17a7,	// (0x00051c5e) bg_cale_pane_cp01

0x3bf2,	// (0x000540a9) cale_week_corner_pane

0x3c08,	// (0x000540bf) cale_week_day_heading_pane

0x3c1c,	// (0x000540d3) cale_week_scroll_pane_g1

0x3c2d,	// (0x000540e4) cale_week_scroll_pane_g2

0x3c3e,	// (0x000540f5) cale_week_scroll_pane_g3

0x3c4f,	// (0x00054106) cale_week_scroll_pane_g4

0x3c60,	// (0x00054117) cale_week_scroll_pane_g5

0x3c71,	// (0x00054128) cale_week_scroll_pane_g6

0x3c82,	// (0x00054139) cale_week_scroll_pane_g7

0x3c93,	// (0x0005414a) cale_week_scroll_pane_g8

0x3ca6,	// (0x0005415d) cale_week_scroll_pane_g9

0x3cb7,	// (0x0005416e) cale_week_scroll_pane_g10

0x3cc8,	// (0x0005417f) cale_week_scroll_pane_g11

0x3cd9,	// (0x00054190) cale_week_scroll_pane_g12

0x3cea,	// (0x000541a1) cale_week_scroll_pane_g13

0x3cfb,	// (0x000541b2) cale_week_scroll_pane_g14

0x3d0c,	// (0x000541c3) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0005f689) cale_week_scroll_pane_g

0x3d1d,	// (0x000541d4) cale_week_time_pane

0x3d30,	// (0x000541e7) grid_cale_week_pane

0x3d43,	// (0x000541fa) scroll_pane_cp08

0x3d5d,	// (0x00054214) cell_cale_week_pane_ParamLimits

0x3d5d,	// (0x00054214) cell_cale_week_pane

0x3d99,	// (0x00054250) cale_week_day_heading_pane_t1

0x3dc3,	// (0x0005427a) cale_week_day_heading_pane_t2

0x3ded,	// (0x000542a4) cale_week_day_heading_pane_t3

0x3e17,	// (0x000542ce) cale_week_day_heading_pane_t4

0x3e41,	// (0x000542f8) cale_week_day_heading_pane_t5

0x3e6b,	// (0x00054322) cale_week_day_heading_pane_t6

0x3e95,	// (0x0005434c) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0005f6a8) cale_week_day_heading_pane_t

0x17d2,	// (0x00051c89) bg_cale_side_pane

0x3ebf,	// (0x00054376) cale_week_time_pane_t1

0x3eeb,	// (0x000543a2) cale_week_time_pane_t2

0x3f17,	// (0x000543ce) cale_week_time_pane_t3

0x3f43,	// (0x000543fa) cale_week_time_pane_t4

0x3f6f,	// (0x00054426) cale_week_time_pane_t5

0x3f9b,	// (0x00054452) cale_week_time_pane_t6

0x3fc7,	// (0x0005447e) cale_week_time_pane_t7

0x3ff3,	// (0x000544aa) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0005f6b7) cale_week_time_pane_t

0x401f,	// (0x000544d6) cell_cale_week_pane_g2

0x4038,	// (0x000544ef) cell_cale_week_pane_g3_ParamLimits

0x4038,	// (0x000544ef) cell_cale_week_pane_g3

0x17e0,	// (0x00051c97) grid_highlight_pane_cp07

0x17e8,	// (0x00051c9f) listscroll_gms_pane

0x17f2,	// (0x00051ca9) grid_gms_pane

0x17fb,	// (0x00051cb2) listscroll_gms_pane_g1

0x1803,	// (0x00051cba) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0005f6c8) listscroll_gms_pane_g

0x4050,	// (0x00054507) scroll_pane_cp010

0x405b,	// (0x00054512) cell_gms_pane_ParamLimits

0x405b,	// (0x00054512) cell_gms_pane

0x406b,	// (0x00054522) cell_gms_pane_g1

0x180b,	// (0x00051cc2) cell_gms_pane_g2

0x177e,	// (0x00051c35) cell_gms_pane_g3

0x1813,	// (0x00051cca) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0005f6cd) cell_gms_pane_g

0x181c,	// (0x00051cd3) grid_highlight_pane_cp09

0x5e8d,	// (0x00056344) phob_pre_status_pane_g1

0x5e95,	// (0x0005634c) phob_pre_status_pane_g2

0x5e9d,	// (0x00056354) phob_pre_status_pane_g3

0x5ea5,	// (0x0005635c) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x0005facf) phob_pre_status_pane_g

0x5eb5,	// (0x0005636c) phob_pre_status_pane_t1

0x5ec3,	// (0x0005637a) phob_pre_status_pane_t2

0x5ed1,	// (0x00056388) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x0005fada) phob_pre_status_pane_t

0x1346,	// (0x000517fd) bg_list_pane_cp05

0x407b,	// (0x00054532) grid_vorec_pane

0xb0db,	// (0x0005b592) vorec_t1

0xb0e9,	// (0x0005b5a0) vorec_t2

0xb0f7,	// (0x0005b5ae) vorec_t3

0xb105,	// (0x0005b5bc) vorec_t4

0xb113,	// (0x0005b5ca) vorec_t5

0xb121,	// (0x0005b5d8) vorec_t6

0x0006,

0xf21f,	// (0x0005f6d6) vorec_t

0xb13d,	// (0x0005b5f4) wait_bar_pane_cp01

0x4083,	// (0x0005453a) cell_vorec_pane_ParamLimits

0x4083,	// (0x0005453a) cell_vorec_pane

0x1837,	// (0x00051cee) cell_vorec_pane_g1

0x1346,	// (0x000517fd) grid_highlight_pane_cp05

0x40a8,	// (0x0005455f) cams_zoom_pane

0x40b7,	// (0x0005456e) image_vga_pane

0x40cf,	// (0x00054586) main_camera_pane_g1

0x40df,	// (0x00054596) main_camera_pane_g2

0x40ef,	// (0x000545a6) main_camera_pane_g3

0x40ff,	// (0x000545b6) main_camera_pane_g4

0x410f,	// (0x000545c6) main_camera_pane_g5

0x411f,	// (0x000545d6) main_camera_pane_g6

0x412f,	// (0x000545e6) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0005f6e5) main_camera_pane_g

0x413f,	// (0x000545f6) main_camera_pane_t1

0x4155,	// (0x0005460c) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0005f6f6) main_camera_pane_t

0x4187,	// (0x0005463e) cams_zoom_pane_cp_ParamLimits

0x4187,	// (0x0005463e) cams_zoom_pane_cp

0x41af,	// (0x00054666) image_cif_pane_ParamLimits

0x41af,	// (0x00054666) image_cif_pane

0x41e0,	// (0x00054697) image_subqcif_pane

0x41e8,	// (0x0005469f) main_video_pane_g1_ParamLimits

0x41e8,	// (0x0005469f) main_video_pane_g1

0x420c,	// (0x000546c3) main_video_pane_g2_ParamLimits

0x420c,	// (0x000546c3) main_video_pane_g2

0x4240,	// (0x000546f7) main_video_pane_g3_ParamLimits

0x4240,	// (0x000546f7) main_video_pane_g3

0x426e,	// (0x00054725) main_video_pane_g4_ParamLimits

0x426e,	// (0x00054725) main_video_pane_g4

0x429c,	// (0x00054753) main_video_pane_g5_ParamLimits

0x429c,	// (0x00054753) main_video_pane_g5

0x184d,	// (0x00051d04) main_video_pane_g6_ParamLimits

0x184d,	// (0x00051d04) main_video_pane_g6

0x0006,

0xf244,	// (0x0005f6fb) main_video_pane_g_ParamLimits

0xf244,	// (0x0005f6fb) main_video_pane_g

0x42c3,	// (0x0005477a) main_video_pane_t1_ParamLimits

0x42c3,	// (0x0005477a) main_video_pane_t1

0x1867,	// (0x00051d1e) cams_zoom_pane_g1

0x1870,	// (0x00051d27) cams_zoom_pane_g2

0x1879,	// (0x00051d30) cams_zoom_pane_g3

0x1882,	// (0x00051d39) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0005f70a) cams_zoom_pane_g

0x4320,	// (0x000547d7) grid_cams_pane

0x4335,	// (0x000547ec) linegrid_cams_pane

0x4346,	// (0x000547fd) cell_cams_pane_ParamLimits

0x4346,	// (0x000547fd) cell_cams_pane

0x188b,	// (0x00051d42) cams_burst_image_pane

0x1893,	// (0x00051d4a) cell_cams_pane_g1

0x1346,	// (0x000517fd) grid_highlight_pane_cp03

0x16c5,	// (0x00051b7c) mp_bg_pane_g1

0x1346,	// (0x000517fd) bg_list_pane_cp03

0xc37e,	// (0x0005c835) bg_mp_pane

0xc386,	// (0x0005c83d) grid_mp_pane

0xc38e,	// (0x0005c845) media_player_g1

0xc396,	// (0x0005c84d) media_player_t1

0xc3a4,	// (0x0005c85b) media_player_t2

0xc3b2,	// (0x0005c869) media_player_t3

0xc3c0,	// (0x0005c877) media_player_t4

0xc3ce,	// (0x0005c885) media_player_t5

0xc3dc,	// (0x0005c893) media_player_t6

0xc3ea,	// (0x0005c8a1) media_player_t7

0x0006,

0xf602,	// (0x0005fab9) media_player_t

0xc3f8,	// (0x0005c8af) wait_bar_pane_cp02

0xf5e7,	// (0x0005fa9e) main_usb_pane_t

0x5e84,	// (0x0005633b) cell_mp_pane

0x16c5,	// (0x00051b7c) cell_mp_pane_g1

0x1346,	// (0x000517fd) grid_highlight_pane_cp06

0x189b,	// (0x00051d52) grid_skin_colour_pane

0x18a3,	// (0x00051d5a) list_highlight_pane_cp03

0x43b4,	// (0x0005486b) skin_g1

0x18ab,	// (0x00051d62) skin_t1

0x18ba,	// (0x00051d71) skin_t2

0x0001,

0xf288,	// (0x0005f73f) skin_t

0x43bc,	// (0x00054873) cell_skin_colour_pane_ParamLimits

0x43bc,	// (0x00054873) cell_skin_colour_pane

0x18c8,	// (0x00051d7f) cell_skin_colour_pane_g1

0x4425,	// (0x000548dc) call_video_g1_ParamLimits

0x4425,	// (0x000548dc) call_video_g1

0x443b,	// (0x000548f2) call_video_g2_ParamLimits

0x443b,	// (0x000548f2) call_video_g2

0x0001,

0xf28d,	// (0x0005f744) call_video_g_ParamLimits

0xf28d,	// (0x0005f744) call_video_g

0x4483,	// (0x0005493a) call_video_uplink_pane_cp1_ParamLimits

0x4483,	// (0x0005493a) call_video_uplink_pane_cp1

0x18da,	// (0x00051d91) call_video_uplink_pane_cp2

0x4518,	// (0x000549cf) video_down_crop_pane_ParamLimits

0x4518,	// (0x000549cf) video_down_crop_pane

0x45db,	// (0x00054a92) video_down_pane_ParamLimits

0x45db,	// (0x00054a92) video_down_pane

0x18e2,	// (0x00051d99) video_down_subqcif_pane_ParamLimits

0x18e2,	// (0x00051d99) video_down_subqcif_pane

0x18fa,	// (0x00051db1) video_down_subqcif_pane_cp_ParamLimits

0x18fa,	// (0x00051db1) video_down_subqcif_pane_cp

0x191e,	// (0x00051dd5) im_reading_pane_ParamLimits

0x191e,	// (0x00051dd5) im_reading_pane

0x4698,	// (0x00054b4f) im_writing_pane_ParamLimits

0x4698,	// (0x00054b4f) im_writing_pane

0x46ae,	// (0x00054b65) im_reading_pane_t1

0x1938,	// (0x00051def) list_im_pane

0x1949,	// (0x00051e00) scroll_pane_cp07

0x46e4,	// (0x00054b9b) im_writing_pane_t1_ParamLimits

0x46e4,	// (0x00054b9b) im_writing_pane_t1

0x1962,	// (0x00051e19) im_writing_pane_t2_ParamLimits

0x1962,	// (0x00051e19) im_writing_pane_t2

0x0001,

0xf297,	// (0x0005f74e) im_writing_pane_t_ParamLimits

0xf297,	// (0x0005f74e) im_writing_pane_t

0x1346,	// (0x000517fd) input_focus_pane_cp04

0x1346,	// (0x000517fd) input_focus_pane_cp05

0x46f9,	// (0x00054bb0) list_im_single_pane_ParamLimits

0x46f9,	// (0x00054bb0) list_im_single_pane

0x197f,	// (0x00051e36) list_single_im_pane_t1

0x5e4a,	// (0x00056301) blid_accuracy_pane

0x5e52,	// (0x00056309) blid_compass_pane

0x5e5a,	// (0x00056311) main_location_t1

0x5e68,	// (0x0005631f) main_location_t2

0x5e76,	// (0x0005632d) main_location_t3

0x0002,

0xf611,	// (0x0005fac8) main_location_t

0x1346,	// (0x000517fd) aid_levels_location

0x16c5,	// (0x00051b7c) blid_accuracy_pane_g1

0x16c5,	// (0x00051b7c) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0005f7b0) blid_accuracy_pane_g

0x19b9,	// (0x00051e70) wml_content_pane

0x19f7,	// (0x00051eae) wml_button_pane_ParamLimits

0x19f7,	// (0x00051eae) wml_button_pane

0x470f,	// (0x00054bc6) wml_list_single_large_pane_ParamLimits

0x470f,	// (0x00054bc6) wml_list_single_large_pane

0x4723,	// (0x00054bda) wml_list_single_medium_pane_ParamLimits

0x4723,	// (0x00054bda) wml_list_single_medium_pane

0x4738,	// (0x00054bef) wml_list_single_small_pane_ParamLimits

0x4738,	// (0x00054bef) wml_list_single_small_pane

0x1a0b,	// (0x00051ec2) wml_selection_box_pane_ParamLimits

0x1a0b,	// (0x00051ec2) wml_selection_box_pane

0x1a1e,	// (0x00051ed5) wml_list_single_pane_t1

0x1a2d,	// (0x00051ee4) wml_list_single_medium_pane_t1

0x1a3c,	// (0x00051ef3) wml_list_single_large_pane_t1

0x1a4b,	// (0x00051f02) input_focus_pane_cp02_ParamLimits

0x1a4b,	// (0x00051f02) input_focus_pane_cp02

0x1a5e,	// (0x00051f15) wml_selection_box_pane_g1

0x1a67,	// (0x00051f1e) wml_selection_box_pane_t1_ParamLimits

0x1a67,	// (0x00051f1e) wml_selection_box_pane_t1

0x15a1,	// (0x00051a58) bg_wml_button_pane_ParamLimits

0x15a1,	// (0x00051a58) bg_wml_button_pane

0x1a7f,	// (0x00051f36) wml_button_pane_g1

0x1a87,	// (0x00051f3e) wml_button_pane_t1

0x1a7f,	// (0x00051f36) wml_button_bg_pane_g1

0x1a97,	// (0x00051f4e) wml_button_bg_pane_g2

0x1a9f,	// (0x00051f56) wml_button_bg_pane_g3

0x1aa7,	// (0x00051f5e) wml_button_bg_pane_g4

0x1aaf,	// (0x00051f66) wml_button_bg_pane_g5

0x1ab7,	// (0x00051f6e) wml_button_bg_pane_g6

0x1abf,	// (0x00051f76) wml_button_bg_pane_g7

0x1ac7,	// (0x00051f7e) wml_button_bg_pane_g8

0x1acf,	// (0x00051f86) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0005f753) wml_button_bg_pane_g

0x474f,	// (0x00054c06) bg_list_pane_cp02

0x1ad7,	// (0x00051f8e) mce_header_pane_ParamLimits

0x1ad7,	// (0x00051f8e) mce_header_pane

0x1aeb,	// (0x00051fa2) mce_icon_pane

0x1aeb,	// (0x00051fa2) mce_image_pane

0x1af4,	// (0x00051fab) mce_text_pane_ParamLimits

0x1af4,	// (0x00051fab) mce_text_pane

0x4758,	// (0x00054c0f) scroll_pane_cp03

0x4758,	// (0x00054c0f) scroll_pane_cp04

0x1b08,	// (0x00051fbf) scroll_pane_cp05_ParamLimits

0x1b08,	// (0x00051fbf) scroll_pane_cp05

0x4762,	// (0x00054c19) mce_header_field_pane_ParamLimits

0x4762,	// (0x00054c19) mce_header_field_pane

0x4779,	// (0x00054c30) mce_header_field_pane_2_ParamLimits

0x4779,	// (0x00054c30) mce_header_field_pane_2

0x478f,	// (0x00054c46) mce_header_field_pane_3

0x4797,	// (0x00054c4e) list_single_mce_message_pane_ParamLimits

0x4797,	// (0x00054c4e) list_single_mce_message_pane

0x47ac,	// (0x00054c63) list_single_mce_smart_pane_ParamLimits

0x47ac,	// (0x00054c63) list_single_mce_smart_pane

0x1b14,	// (0x00051fcb) input_focus_pane_cp03

0x1b1d,	// (0x00051fd4) list_header_data_pane

0x47cc,	// (0x00054c83) mce_header_field_pane_t1

0x47da,	// (0x00054c91) list_single_mce_header_pane_ParamLimits

0x47da,	// (0x00054c91) list_single_mce_header_pane

0x1b25,	// (0x00051fdc) list_single_mce_header_pane_t1

0x1b34,	// (0x00051feb) list_single_mce_message_pane_g1

0x1b3d,	// (0x00051ff4) list_single_mce_message_pane_t1

0x480c,	// (0x00054cc3) bg_cale_heading_pane_cp01_ParamLimits

0x480c,	// (0x00054cc3) bg_cale_heading_pane_cp01

0x1b4c,	// (0x00052003) bg_cale_pane_cp02_ParamLimits

0x1b4c,	// (0x00052003) bg_cale_pane_cp02

0x482f,	// (0x00054ce6) cale_month_corner_pane

0x4845,	// (0x00054cfc) cale_month_day_heading_pane_ParamLimits

0x4845,	// (0x00054cfc) cale_month_day_heading_pane

0x4878,	// (0x00054d2f) cale_month_pane_g1_ParamLimits

0x4878,	// (0x00054d2f) cale_month_pane_g1

0x4894,	// (0x00054d4b) cale_month_pane_g2_ParamLimits

0x4894,	// (0x00054d4b) cale_month_pane_g2

0x48af,	// (0x00054d66) cale_month_pane_g3_ParamLimits

0x48af,	// (0x00054d66) cale_month_pane_g3

0x48db,	// (0x00054d92) cale_month_pane_g4_ParamLimits

0x48db,	// (0x00054d92) cale_month_pane_g4

0x4907,	// (0x00054dbe) cale_month_pane_g5_ParamLimits

0x4907,	// (0x00054dbe) cale_month_pane_g5

0x4933,	// (0x00054dea) cale_month_pane_g6_ParamLimits

0x4933,	// (0x00054dea) cale_month_pane_g6

0x495f,	// (0x00054e16) cale_month_pane_g7_ParamLimits

0x495f,	// (0x00054e16) cale_month_pane_g7

0x498b,	// (0x00054e42) cale_month_pane_g8_ParamLimits

0x498b,	// (0x00054e42) cale_month_pane_g8

0x49c7,	// (0x00054e7e) cale_month_pane_g9_ParamLimits

0x49c7,	// (0x00054e7e) cale_month_pane_g9

0x4a01,	// (0x00054eb8) cale_month_pane_g10_ParamLimits

0x4a01,	// (0x00054eb8) cale_month_pane_g10

0x4a3b,	// (0x00054ef2) cale_month_pane_g11_ParamLimits

0x4a3b,	// (0x00054ef2) cale_month_pane_g11

0x4a75,	// (0x00054f2c) cale_month_pane_g12_ParamLimits

0x4a75,	// (0x00054f2c) cale_month_pane_g12

0x4aaf,	// (0x00054f66) cale_month_pane_g13_ParamLimits

0x4aaf,	// (0x00054f66) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0005f766) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0005f766) cale_month_pane_g

0x4ae9,	// (0x00054fa0) cale_month_week_pane

0x4afc,	// (0x00054fb3) grid_cale_month_pane_ParamLimits

0x4afc,	// (0x00054fb3) grid_cale_month_pane

0x4b2a,	// (0x00054fe1) cale_month_day_heading_pane_t1

0x4b88,	// (0x0005503f) cale_month_day_heading_pane_t2

0x4bed,	// (0x000550a4) cale_month_day_heading_pane_t3

0x4c52,	// (0x00055109) cale_month_day_heading_pane_t4

0x4cb7,	// (0x0005516e) cale_month_day_heading_pane_t5

0x4d1c,	// (0x000551d3) cale_month_day_heading_pane_t6

0x4d81,	// (0x00055238) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0005f781) cale_month_day_heading_pane_t

0x17d2,	// (0x00051c89) bg_cale_side_pane_cp01

0x4dee,	// (0x000552a5) cale_month_week_pane_t1

0x4e05,	// (0x000552bc) cale_month_week_pane_t2

0x4e1c,	// (0x000552d3) cale_month_week_pane_t3

0x4e33,	// (0x000552ea) cale_month_week_pane_t4

0x4e4a,	// (0x00055301) cale_month_week_pane_t5

0x4e61,	// (0x00055318) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0005f790) cale_month_week_pane_t

0x4e78,	// (0x0005532f) cell_cale_month_pane_ParamLimits

0x4e78,	// (0x0005532f) cell_cale_month_pane

0xb20f,	// (0x0005b6c6) cell_cale_month_pane_g1

0x4f26,	// (0x000553dd) cell_cale_month_pane_t1_ParamLimits

0x4f26,	// (0x000553dd) cell_cale_month_pane_t1

0x17e0,	// (0x00051c97) grid_highlight_pane_cp08

0x16c5,	// (0x00051b7c) main_smil_g1

0x4f42,	// (0x000553f9) smil_status_pane

0x1b81,	// (0x00052038) smil_text_pane

0xc25e,	// (0x0005c715) bg_popup_call3_rect_pane_g8

0xc266,	// (0x0005c71d) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0005fa49) bg_popup_call3_rect_pane_g

0xc51c,	// (0x0005c9d3) smil_status_volume_pane_g1

0x1b8b,	// (0x00052042) smil_status_pane_t1

0xec04,	// (0x0005f0bb) volume_smil_pane

0x1ba2,	// (0x00052059) list_smil_text_pane

0x4f53,	// (0x0005540a) scroll_pane_cp011

0x4f5e,	// (0x00055415) smil_text_list_pane_t1_ParamLimits

0x4f5e,	// (0x00055415) smil_text_list_pane_t1

0xb21b,	// (0x0005b6d2) aid_volume_smil_ParamLimits

0xb21b,	// (0x0005b6d2) aid_volume_smil

0x16c5,	// (0x00051b7c) smil_volume_pane_g1

0x16c5,	// (0x00051b7c) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0005f7b0) smil_volume_pane_g

0x1670,	// (0x00051b27) listscroll_cale_day_pane

0x1bac,	// (0x00052063) bg_cale_pane

0x1bc4,	// (0x0005207b) list_cale_pane

0x1bd5,	// (0x0005208c) scroll_pane_cp09

0x1be6,	// (0x0005209d) cale_bg_pane_g1

0x1bee,	// (0x000520a5) cale_bg_pane_g2

0x1bf6,	// (0x000520ad) cale_bg_pane_g3

0x1bfe,	// (0x000520b5) cale_bg_pane_g4

0x1c06,	// (0x000520bd) cale_bg_pane_g5

0x1c0e,	// (0x000520c5) cale_bg_pane_g6

0x1c16,	// (0x000520cd) cale_bg_pane_g7

0x1c1e,	// (0x000520d5) cale_bg_pane_g8

0x1c26,	// (0x000520dd) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0005f7b5) cale_bg_pane_g

0x4f9c,	// (0x00055453) list_cale_time_pane_ParamLimits

0x4f9c,	// (0x00055453) list_cale_time_pane

0x1c2e,	// (0x000520e5) list_cale_time_pane_g1_ParamLimits

0x1c2e,	// (0x000520e5) list_cale_time_pane_g1

0x1c3a,	// (0x000520f1) list_cale_time_pane_g2_ParamLimits

0x1c3a,	// (0x000520f1) list_cale_time_pane_g2

0x4fb1,	// (0x00055468) list_cale_time_pane_g3_ParamLimits

0x4fb1,	// (0x00055468) list_cale_time_pane_g3

0x4fbf,	// (0x00055476) list_cale_time_pane_g4_ParamLimits

0x4fbf,	// (0x00055476) list_cale_time_pane_g4

0x4fcd,	// (0x00055484) list_cale_time_pane_g5_ParamLimits

0x4fcd,	// (0x00055484) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0005f7c8) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0005f7c8) list_cale_time_pane_g

0x1c54,	// (0x0005210b) list_cale_time_pane_t1_ParamLimits

0x1c54,	// (0x0005210b) list_cale_time_pane_t1

0x1c7c,	// (0x00052133) list_cale_time_pane_t2_ParamLimits

0x1c7c,	// (0x00052133) list_cale_time_pane_t2

0x52d1,	// (0x00055788) aid_blid_cardinal_pane

0x530f,	// (0x000557c6) compass_pane_t4

0x1ca4,	// (0x0005215b) list_cale_time_pane_t4_ParamLimits

0x1ca4,	// (0x0005215b) list_cale_time_pane_t4

0x531d,	// (0x000557d4) compass_pane_t5

0x532b,	// (0x000557e2) compass_pane_t6

0x5339,	// (0x000557f0) compass_pane_t7

0x20f0,	// (0x000525a7) navi_pane_cc_t1

0x2294,	// (0x0005274b) aid_phob_thumbnail_center_pane

0x58fc,	// (0x00055db3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0005f7d5) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0005f7d5) list_cale_time_pane_t

0x0f9f,	// (0x00051456) bg_popup_window_pane_cp02_ParamLimits

0x0f9f,	// (0x00051456) bg_popup_window_pane_cp02

0x1ccc,	// (0x00052183) heading_pane_cp01_ParamLimits

0x1ccc,	// (0x00052183) heading_pane_cp01

0x1cd8,	// (0x0005218f) loc_req_pane_ParamLimits

0x1cd8,	// (0x0005218f) loc_req_pane

0x1ce8,	// (0x0005219f) loc_type_pane_ParamLimits

0x1ce8,	// (0x0005219f) loc_type_pane

0x1cfa,	// (0x000521b1) loc_type_pane_t1_ParamLimits

0x1cfa,	// (0x000521b1) loc_type_pane_t1

0x1d0c,	// (0x000521c3) loc_type_pane_t2_ParamLimits

0x1d0c,	// (0x000521c3) loc_type_pane_t2

0x1d1e,	// (0x000521d5) loc_type_pane_t3_ParamLimits

0x1d1e,	// (0x000521d5) loc_type_pane_t3

0x0002,

0xf325,	// (0x0005f7dc) loc_type_pane_t_ParamLimits

0xf325,	// (0x0005f7dc) loc_type_pane_t

0x1d30,	// (0x000521e7) list_loc_req_pane

0x1d3a,	// (0x000521f1) scroll_pane_cp012

0x4fd9,	// (0x00055490) list_single_loc_request_popup_menu_pane_ParamLimits

0x4fd9,	// (0x00055490) list_single_loc_request_popup_menu_pane

0x1d43,	// (0x000521fa) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1d43,	// (0x000521fa) list_single_loc_request_popup_menu_pane_g1

0x1d4f,	// (0x00052206) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1d4f,	// (0x00052206) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0005f7e3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0005f7e3) list_single_loc_request_popup_menu_pane_g

0x1d5b,	// (0x00052212) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1d5b,	// (0x00052212) list_single_loc_request_popup_menu_pane_t1

0x15a1,	// (0x00051a58) bg_popup_window_pane_cp03_ParamLimits

0x15a1,	// (0x00051a58) bg_popup_window_pane_cp03

0x258a,	// (0x00052a41) heading_loc_req_pane_ParamLimits

0x258a,	// (0x00052a41) heading_loc_req_pane

0x4fe6,	// (0x0005549d) popup_dyc_status_message_window_g1_ParamLimits

0x4fe6,	// (0x0005549d) popup_dyc_status_message_window_g1

0x4ffa,	// (0x000554b1) popup_dyc_status_message_window_t1_ParamLimits

0x4ffa,	// (0x000554b1) popup_dyc_status_message_window_t1

0x500f,	// (0x000554c6) popup_dyc_status_message_window_t2_ParamLimits

0x500f,	// (0x000554c6) popup_dyc_status_message_window_t2

0x5024,	// (0x000554db) popup_dyc_status_message_window_t3_ParamLimits

0x5024,	// (0x000554db) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0005f7e8) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0005f7e8) popup_dyc_status_message_window_t

0x1346,	// (0x000517fd) bg_heading_pane_cp01

0x1d71,	// (0x00052228) heading_loc_req_pane_g1

0x1d79,	// (0x00052230) heading_loc_req_pane_g2

0x1d81,	// (0x00052238) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0005f7ef) heading_loc_req_pane_g

0x1d89,	// (0x00052240) heading_loc_req_pane_t1

0x1d98,	// (0x0005224f) bg_popup_sub_pane_cp01_ParamLimits

0x1d98,	// (0x0005224f) bg_popup_sub_pane_cp01

0x1da6,	// (0x0005225d) popup_cale_events_window_g1_ParamLimits

0x1da6,	// (0x0005225d) popup_cale_events_window_g1

0x1dc6,	// (0x0005227d) popup_cale_events_window_g2_ParamLimits

0x1dc6,	// (0x0005227d) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0005f823) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0005f823) popup_cale_events_window_g

0x1de6,	// (0x0005229d) popup_cale_events_window_t1_ParamLimits

0x1de6,	// (0x0005229d) popup_cale_events_window_t1

0x1df8,	// (0x000522af) popup_cale_events_window_t2_ParamLimits

0x1df8,	// (0x000522af) popup_cale_events_window_t2

0x1e36,	// (0x000522ed) popup_cale_events_window_t3_ParamLimits

0x1e36,	// (0x000522ed) popup_cale_events_window_t3

0x1e70,	// (0x00052327) popup_cale_events_window_t4_ParamLimits

0x1e70,	// (0x00052327) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0005f828) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0005f828) popup_cale_events_window_t

0x50b4,	// (0x0005556b) call_type_pane

0x50c4,	// (0x0005557b) popup_call_status_window_g1

0x50d8,	// (0x0005558f) popup_call_status_window_g2

0x50ec,	// (0x000555a3) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0005f831) popup_call_status_window_g

0x1eb4,	// (0x0005236b) call_type_pane_g1

0x1ebd,	// (0x00052374) call_type_pane_g2

0x0001,

0xf381,	// (0x0005f838) call_type_pane_g

0x1346,	// (0x000517fd) bg_popup_sub_pane_cp02

0x1ec6,	// (0x0005237d) listscroll_popup_wml_pane

0x1ece,	// (0x00052385) list_wml_pane

0x1ed8,	// (0x0005238f) scroll_pane_cp013

0x50fc,	// (0x000555b3) list_single_graphic_popup_wml_pane_ParamLimits

0x50fc,	// (0x000555b3) list_single_graphic_popup_wml_pane

0x16c5,	// (0x00051b7c) list_single_graphic_popup_wml_pane_g1

0x1ee1,	// (0x00052398) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0005f83d) list_single_graphic_popup_wml_pane_g

0x1ee9,	// (0x000523a0) list_single_graphic_popup_wml_pane_t1

0x1eff,	// (0x000523b6) aid_call_pane

0x1599,	// (0x00051a50) popup_clock_analogue_window_g1

0x1599,	// (0x00051a50) popup_clock_analogue_window_g2

0xb2d7,	// (0x0005b78e) popup_clock_analogue_window_g3

0xb2d7,	// (0x0005b78e) popup_clock_analogue_window_g4

0x16c5,	// (0x00051b7c) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0005f842) popup_clock_analogue_window_g

0xb2df,	// (0x0005b796) popup_clock_analogue_window_t1

0xb2ed,	// (0x0005b7a4) clock_digital_number_pane_ParamLimits

0xb2ed,	// (0x0005b7a4) clock_digital_number_pane

0xb2f9,	// (0x0005b7b0) clock_digital_number_pane_cp02_ParamLimits

0xb2f9,	// (0x0005b7b0) clock_digital_number_pane_cp02

0xb305,	// (0x0005b7bc) clock_digital_number_pane_cp03_ParamLimits

0xb305,	// (0x0005b7bc) clock_digital_number_pane_cp03

0xb311,	// (0x0005b7c8) clock_digital_number_pane_cp04_ParamLimits

0xb311,	// (0x0005b7c8) clock_digital_number_pane_cp04

0xb31d,	// (0x0005b7d4) clock_digital_separator_pane_ParamLimits

0xb31d,	// (0x0005b7d4) clock_digital_separator_pane

0xb329,	// (0x0005b7e0) popup_clock_digital_window_t1

0x16c5,	// (0x00051b7c) clock_digital_number_pane_g1

0x16c5,	// (0x00051b7c) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0005f7b0) clock_digital_number_pane_g

0x16c5,	// (0x00051b7c) clock_digital_separator_pane_g1

0x16c5,	// (0x00051b7c) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0005f7b0) clock_digital_separator_pane_g

0x1346,	// (0x000517fd) bg_popup_window_pane_cp04

0x1f07,	// (0x000523be) heading_pane_cp03

0x1f0f,	// (0x000523c6) listscroll_popup_gms_pane

0x1f17,	// (0x000523ce) grid_large_graphic_popup_pane

0x1f21,	// (0x000523d8) listscroll_popup_gms_pane_g1

0x1f29,	// (0x000523e0) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0005f84d) listscroll_popup_gms_pane_g

0x19ef,	// (0x00051ea6) scroll_pane_cp014

0x510f,	// (0x000555c6) cell_large_graphic_popup_pane_ParamLimits

0x510f,	// (0x000555c6) cell_large_graphic_popup_pane

0x5125,	// (0x000555dc) cell_large_graphic_popup_pane_g1_ParamLimits

0x5125,	// (0x000555dc) cell_large_graphic_popup_pane_g1

0x1f31,	// (0x000523e8) cell_large_graphic_popup_pane_g2_ParamLimits

0x1f31,	// (0x000523e8) cell_large_graphic_popup_pane_g2

0x1f3d,	// (0x000523f4) cell_large_graphic_popup_pane_g3_ParamLimits

0x1f3d,	// (0x000523f4) cell_large_graphic_popup_pane_g3

0x1f4a,	// (0x00052401) cell_large_graphic_popup_pane_g4_ParamLimits

0x1f4a,	// (0x00052401) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0005f852) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0005f852) cell_large_graphic_popup_pane_g

0x1f5a,	// (0x00052411) grid_highlight_pane_cp010

0x16c5,	// (0x00051b7c) bg_popup_call_pane_g1

0x1f64,	// (0x0005241b) list_single_graphic_popup_conf_pane_ParamLimits

0x1f64,	// (0x0005241b) list_single_graphic_popup_conf_pane

0x1f77,	// (0x0005242e) list_highlight_pane_cp01

0x1f80,	// (0x00052437) list_single_graphic_popup_conf_pane_g1

0x1f88,	// (0x0005243f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0005f85b) list_single_graphic_popup_conf_pane_g

0x1f90,	// (0x00052447) list_single_graphic_popup_conf_pane_t1

0x1f9e,	// (0x00052455) linegrid_cams_pane_g1

0x5131,	// (0x000555e8) linegrid_cams_pane_g2

0x177e,	// (0x00051c35) linegrid_cams_pane_g3

0x1fa7,	// (0x0005245e) linegrid_cams_pane_g4

0x513a,	// (0x000555f1) linegrid_cams_pane_g5

0x5143,	// (0x000555fa) linegrid_cams_pane_g6

0x1813,	// (0x00051cca) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0005f860) linegrid_cams_pane_g

0x1fb0,	// (0x00052467) popup_clock_analogue_window

0x1fb0,	// (0x00052467) popup_clock_digital_window

0x1346,	// (0x000517fd) popup_phob_thumbnail_window

0x16c5,	// (0x00051b7c) call_video_uplink_pane_g1

0x1fb9,	// (0x00052470) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0005f86f) call_video_uplink_pane_g

0x17e0,	// (0x00051c97) video_uplink_pane

0x1fc1,	// (0x00052478) mce_image_pane_g1

0x514c,	// (0x00055603) mce_image_pane_g2

0x5154,	// (0x0005560b) mce_image_pane_g3

0x515c,	// (0x00055613) mce_image_pane_g4

0x5164,	// (0x0005561b) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0005f874) mce_image_pane_g

0x1fcb,	// (0x00052482) control_top_pane_stacon_cp01_ParamLimits

0x1fcb,	// (0x00052482) control_top_pane_stacon_cp01

0x1fdb,	// (0x00052492) uni_indicator_pane_stacon_cp01_ParamLimits

0x1fdb,	// (0x00052492) uni_indicator_pane_stacon_cp01

0x1fec,	// (0x000524a3) bg_popup_sub_pane_cp03

0x1ff6,	// (0x000524ad) chi_dic_find_pane

0x516c,	// (0x00055623) listscroll_chi_dic_pane

0x1ffe,	// (0x000524b5) main_pane_chidic_g1

0x2006,	// (0x000524bd) chi_dic_find_pane_t1

0x2014,	// (0x000524cb) find_chidic_pane

0x201d,	// (0x000524d4) chi_dic_list_pane_ParamLimits

0x201d,	// (0x000524d4) chi_dic_list_pane

0x202e,	// (0x000524e5) scroll_pane_cp020

0x2036,	// (0x000524ed) find_chidic_pane_t1

0x1346,	// (0x000517fd) input_focus_pane_cp06

0x5180,	// (0x00055637) list_chi_dic_pane_ParamLimits

0x5180,	// (0x00055637) list_chi_dic_pane

0x5192,	// (0x00055649) list_chi_dic_pane_t1_ParamLimits

0x5192,	// (0x00055649) list_chi_dic_pane_t1

0x1346,	// (0x000517fd) list_highlight_pane_cp020

0x2045,	// (0x000524fc) bg_cale_heading_pane_g1

0x51a5,	// (0x0005565c) bg_cale_heading_pane_g2

0x51ad,	// (0x00055664) bg_cale_heading_pane_g3

0x51b5,	// (0x0005566c) bg_cale_heading_pane_g4

0x51bf,	// (0x00055676) bg_cale_heading_pane_g5

0x51c9,	// (0x00055680) bg_cale_heading_pane_g6

0x51d1,	// (0x00055688) bg_cale_heading_pane_g7

0x51d9,	// (0x00055690) bg_cale_heading_pane_g8

0x51e3,	// (0x0005569a) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0005f87f) bg_cale_heading_pane_g

0x2045,	// (0x000524fc) bg_cale_side_pane_g1

0x51ed,	// (0x000556a4) bg_cale_side_pane_g2

0x51f5,	// (0x000556ac) bg_cale_side_pane_g3

0x51fd,	// (0x000556b4) bg_cale_side_pane_g4

0x5205,	// (0x000556bc) bg_cale_side_pane_g5

0x520d,	// (0x000556c4) bg_cale_side_pane_g6

0x5215,	// (0x000556cc) bg_cale_side_pane_g7

0x521d,	// (0x000556d4) bg_cale_side_pane_g8

0x5225,	// (0x000556dc) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0005f892) bg_cale_side_pane_g

0x522d,	// (0x000556e4) popup_call_status_window_ParamLimits

0x522d,	// (0x000556e4) popup_call_status_window

0x204d,	// (0x00052504) stacon_top_pane

0x2055,	// (0x0005250c) status_pane_ParamLimits

0x2055,	// (0x0005250c) status_pane

0x206f,	// (0x00052526) status_small_pane

0x2077,	// (0x0005252e) control_pane

0x1346,	// (0x000517fd) stacon_bottom_pane

0x207f,	// (0x00052536) list_single_mce_smart_pane_t1_ParamLimits

0x207f,	// (0x00052536) list_single_mce_smart_pane_t1

0x2092,	// (0x00052549) list_single_mce_smart_pane_t2_ParamLimits

0x2092,	// (0x00052549) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0005f8a5) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0005f8a5) list_single_mce_smart_pane_t

0x5274,	// (0x0005572b) compass_pane

0x527d,	// (0x00055734) main_location2_pane_t1

0x5293,	// (0x0005574a) main_location2_pane_t2

0x52a9,	// (0x00055760) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0005f8aa) main_location2_pane_t

0x20ba,	// (0x00052571) compass_pane_g1_ParamLimits

0x20ba,	// (0x00052571) compass_pane_g1

0x52f1,	// (0x000557a8) compass_pane_t1

0x5300,	// (0x000557b7) compass_pane_t2

0x0005,

0xf3fc,	// (0x0005f8b3) compass_pane_t

0x5347,	// (0x000557fe) text_secondary_cp61

0x20e7,	// (0x0005259e) navi_pane_cams_g5

0x2128,	// (0x000525df) navi_pane_im_t1

0x2136,	// (0x000525ed) navi_pane_mp_g1_ParamLimits

0x2136,	// (0x000525ed) navi_pane_mp_g1

0x214a,	// (0x00052601) navi_pane_mp_g2_ParamLimits

0x214a,	// (0x00052601) navi_pane_mp_g2

0x2156,	// (0x0005260d) navi_pane_mp_g3_ParamLimits

0x2156,	// (0x0005260d) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0005f8c7) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0005f8c7) navi_pane_mp_g

0x2162,	// (0x00052619) navi_pane_mp_t1

0x2170,	// (0x00052627) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0005f8ce) navi_pane_mp_t

0x21dd,	// (0x00052694) navi_pane_vt_g1

0x2162,	// (0x00052619) navi_pane_vt_t1

0x21e5,	// (0x0005269c) navi_slider_pane

0x21ed,	// (0x000526a4) zooming_pane

0x21f5,	// (0x000526ac) navi_slider_pane_g1

0xb346,	// (0x0005b7fd) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0005f8d5) navi_slider_pane_g

0x2219,	// (0x000526d0) aid_levels_zoom

0x2221,	// (0x000526d8) zooming_pane_g1

0x2229,	// (0x000526e0) zooming_pane_g2

0x2229,	// (0x000526e0) zooming_pane_g3

0x0002,

0xf42d,	// (0x0005f8e4) zooming_pane_g

0x2231,	// (0x000526e8) level_10_zoom

0x223a,	// (0x000526f1) level_11_zoom

0x2243,	// (0x000526fa) level_1_zoom

0x224c,	// (0x00052703) level_2_zoom

0x2255,	// (0x0005270c) level_3_zoom

0x225e,	// (0x00052715) level_4_zoom

0x2267,	// (0x0005271e) level_5_zoom

0x2270,	// (0x00052727) level_6_zoom

0x2279,	// (0x00052730) level_7_zoom

0x2282,	// (0x00052739) level_8_zoom

0x228b,	// (0x00052742) level_9_zoom

0x229c,	// (0x00052753) popup_phob_thumbnail_window_g1

0x22a4,	// (0x0005275b) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0005f8eb) popup_phob_thumbnail_window_g

0xc400,	// (0x0005c8b7) level_1_location

0xc408,	// (0x0005c8bf) level_2_location

0xc410,	// (0x0005c8c7) level_3_location

0xc418,	// (0x0005c8cf) level_4_location

0x21ed,	// (0x000526a4) level_5_location

0x53d2,	// (0x00055889) mce_icon_pane_g1

0x53da,	// (0x00055891) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0005f8f0) mce_icon_pane_g

0x53e2,	// (0x00055899) main_mup_pane_g1_ParamLimits

0x53e2,	// (0x00055899) main_mup_pane_g1

0x53f8,	// (0x000558af) main_mup_pane_g2_ParamLimits

0x53f8,	// (0x000558af) main_mup_pane_g2

0x5410,	// (0x000558c7) main_mup_pane_g3_ParamLimits

0x5410,	// (0x000558c7) main_mup_pane_g3

0x5428,	// (0x000558df) main_mup_pane_g4_ParamLimits

0x5428,	// (0x000558df) main_mup_pane_g4

0x5440,	// (0x000558f7) main_mup_pane_g5_ParamLimits

0x5440,	// (0x000558f7) main_mup_pane_g5

0x545a,	// (0x00055911) main_mup_pane_g6_ParamLimits

0x545a,	// (0x00055911) main_mup_pane_g6

0x5472,	// (0x00055929) main_mup_pane_g7_ParamLimits

0x5472,	// (0x00055929) main_mup_pane_g7

0x548a,	// (0x00055941) main_mup_pane_g8_ParamLimits

0x548a,	// (0x00055941) main_mup_pane_g8

0x54a2,	// (0x00055959) main_mup_pane_g9_ParamLimits

0x54a2,	// (0x00055959) main_mup_pane_g9

0x54b6,	// (0x0005596d) main_mup_pane_g10_ParamLimits

0x54b6,	// (0x0005596d) main_mup_pane_g10

0x54ca,	// (0x00055981) main_mup_pane_g11_ParamLimits

0x54ca,	// (0x00055981) main_mup_pane_g11

0x54dc,	// (0x00055993) main_mup_pane_g12_ParamLimits

0x54dc,	// (0x00055993) main_mup_pane_g12

0x54f0,	// (0x000559a7) main_mup_pane_g13_ParamLimits

0x54f0,	// (0x000559a7) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0005f8f5) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0005f8f5) main_mup_pane_g

0x5502,	// (0x000559b9) main_mup_pane_t1_ParamLimits

0x5502,	// (0x000559b9) main_mup_pane_t1

0x551c,	// (0x000559d3) main_mup_pane_t2_ParamLimits

0x551c,	// (0x000559d3) main_mup_pane_t2

0x5534,	// (0x000559eb) main_mup_pane_t3_ParamLimits

0x5534,	// (0x000559eb) main_mup_pane_t3

0x554c,	// (0x00055a03) main_mup_pane_t4_ParamLimits

0x554c,	// (0x00055a03) main_mup_pane_t4

0x556a,	// (0x00055a21) main_mup_pane_t5_ParamLimits

0x556a,	// (0x00055a21) main_mup_pane_t5

0x557f,	// (0x00055a36) main_mup_pane_t6_ParamLimits

0x557f,	// (0x00055a36) main_mup_pane_t6

0x0005,

0xf459,	// (0x0005f910) main_mup_pane_t_ParamLimits

0xf459,	// (0x0005f910) main_mup_pane_t

0x5591,	// (0x00055a48) mup_progress_pane_ParamLimits

0x5591,	// (0x00055a48) mup_progress_pane

0x559d,	// (0x00055a54) mup_visualizer_pane_ParamLimits

0x559d,	// (0x00055a54) mup_visualizer_pane

0x55c5,	// (0x00055a7c) mup_volume_pane_ParamLimits

0x55c5,	// (0x00055a7c) mup_volume_pane

0x1ea6,	// (0x0005235d) mup_visualizer_pane_g1_ParamLimits

0x1ea6,	// (0x0005235d) mup_visualizer_pane_g1

0x1ea6,	// (0x0005235d) mup_visualizer_pane_g2_ParamLimits

0x1ea6,	// (0x0005235d) mup_visualizer_pane_g2

0x20ba,	// (0x00052571) mup_visualizer_pane_g3_ParamLimits

0x20ba,	// (0x00052571) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0005f91d) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0005f91d) mup_visualizer_pane_g

0x16c5,	// (0x00051b7c) mup_volume_pane_g1

0x22b4,	// (0x0005276b) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0005f924) mup_volume_pane_g

0x16c5,	// (0x00051b7c) mup_progress_pane_g1

0x22bd,	// (0x00052774) mup_progress_pane_g2

0x22c6,	// (0x0005277d) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0005f929) mup_progress_pane_g

0x1346,	// (0x000517fd) bg_popup_window_pane_cp05

0x22cf,	// (0x00052786) heading_pane_cp02_ParamLimits

0x22cf,	// (0x00052786) heading_pane_cp02

0x22e9,	// (0x000527a0) list_popup_blid_pane

0x22f1,	// (0x000527a8) list_blid_sat_info_pane_ParamLimits

0x22f1,	// (0x000527a8) list_blid_sat_info_pane

0x2304,	// (0x000527bb) list_blid_sat_info_pane_g1

0x230c,	// (0x000527c3) list_blid_sat_info_pane_t1

0x56b5,	// (0x00055b6c) mup_equalizer_pane_ParamLimits

0x56b5,	// (0x00055b6c) mup_equalizer_pane

0x56ce,	// (0x00055b85) mup_equalizer_pane_cp1_ParamLimits

0x56ce,	// (0x00055b85) mup_equalizer_pane_cp1

0x56e7,	// (0x00055b9e) mup_equalizer_pane_cp2_ParamLimits

0x56e7,	// (0x00055b9e) mup_equalizer_pane_cp2

0x5700,	// (0x00055bb7) mup_equalizer_pane_cp3_ParamLimits

0x5700,	// (0x00055bb7) mup_equalizer_pane_cp3

0x5719,	// (0x00055bd0) mup_equalizer_pane_cp4_ParamLimits

0x5719,	// (0x00055bd0) mup_equalizer_pane_cp4

0x5732,	// (0x00055be9) mup_equalizer_pane_cp5

0x5744,	// (0x00055bfb) mup_equalizer_pane_cp6

0x5756,	// (0x00055c0d) mup_equalizer_pane_cp7

0xc2de,	// (0x0005c795) bg_popup_call_poc_act_pane_g9

0xc2e6,	// (0x0005c79d) bg_popup_call_poc_act_pane_g10

0xc2ee,	// (0x0005c7a5) bg_popup_call_poc_act_pane_g11

0x000a,

0x15a1,	// (0x00051a58) mup_scale_pane

0x16c5,	// (0x00051b7c) mup_scale_pane_g1

0x231a,	// (0x000527d1) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0005f945) mup_scale_pane_g

0x233e,	// (0x000527f5) msg_data_pane

0x2346,	// (0x000527fd) scroll_pane_cp017

0x577c,	// (0x00055c33) bg_list_pane_cp04_ParamLimits

0x577c,	// (0x00055c33) bg_list_pane_cp04

0x234e,	// (0x00052805) msg_data_pane_g1

0x514c,	// (0x00055603) msg_data_pane_g2

0x5154,	// (0x0005560b) msg_data_pane_g3

0x579c,	// (0x00055c53) msg_data_pane_g4

0x5164,	// (0x0005561b) msg_data_pane_g5

0x53d2,	// (0x00055889) msg_data_pane_g6

0x57a4,	// (0x00055c5b) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0005f954) msg_data_pane_g

0x57ac,	// (0x00055c63) msg_text_pane_ParamLimits

0x57ac,	// (0x00055c63) msg_text_pane

0x57d1,	// (0x00055c88) qrid_highlight_pane_cp011_ParamLimits

0x57d1,	// (0x00055c88) qrid_highlight_pane_cp011

0x1346,	// (0x000517fd) msg_body_pane

0x1346,	// (0x000517fd) msg_header_pane

0x235f,	// (0x00052816) input_focus_pane_cp07

0x57f3,	// (0x00055caa) msg_header_pane_t1_ParamLimits

0x57f3,	// (0x00055caa) msg_header_pane_t1

0xb358,	// (0x0005b80f) msg_header_pane_t2_ParamLimits

0xb358,	// (0x0005b80f) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0005f968) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0005f968) msg_header_pane_t

0x2374,	// (0x0005282b) msg_body_pane_g1

0x5805,	// (0x00055cbc) msg_body_pane_t1_ParamLimits

0x5805,	// (0x00055cbc) msg_body_pane_t1

0xb36a,	// (0x0005b821) msg_body_pane_t2_ParamLimits

0xb36a,	// (0x0005b821) msg_body_pane_t2

0xb37c,	// (0x0005b833) msg_body_pane_t3_ParamLimits

0xb37c,	// (0x0005b833) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0005f96d) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0005f96d) msg_body_pane_t

0x5866,	// (0x00055d1d) main_viewer_pane_g1_ParamLimits

0x5866,	// (0x00055d1d) main_viewer_pane_g1

0x5872,	// (0x00055d29) main_viewer_pane_g2_ParamLimits

0x5872,	// (0x00055d29) main_viewer_pane_g2

0x587e,	// (0x00055d35) main_viewer_pane_g3_ParamLimits

0x587e,	// (0x00055d35) main_viewer_pane_g3

0x588d,	// (0x00055d44) main_viewer_pane_g4_ParamLimits

0x588d,	// (0x00055d44) main_viewer_pane_g4

0xb3a6,	// (0x0005b85d) main_viewer_pane_g5_ParamLimits

0xb3a6,	// (0x0005b85d) main_viewer_pane_g5

0xb3a6,	// (0x0005b85d) main_viewer_pane_g7_ParamLimits

0xb3a6,	// (0x0005b85d) main_viewer_pane_g7

0xb3b8,	// (0x0005b86f) main_viewer_pane_g8_ParamLimits

0xb3b8,	// (0x0005b86f) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0005f97d) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0005f97d) main_viewer_pane_g

0x237c,	// (0x00052833) viewer_content_pane_ParamLimits

0x237c,	// (0x00052833) viewer_content_pane

0x58c1,	// (0x00055d78) main_postcard_pane_g1_ParamLimits

0x58c1,	// (0x00055d78) main_postcard_pane_g1

0x58d5,	// (0x00055d8c) main_postcard_pane_g2_ParamLimits

0x58d5,	// (0x00055d8c) main_postcard_pane_g2

0x58e9,	// (0x00055da0) main_postcard_pane_g3_ParamLimits

0x58e9,	// (0x00055da0) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0005f98e) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0005f98e) main_postcard_pane_g

0x58fc,	// (0x00055db3) main_postcard_pane_g4

0xc52f,	// (0x0005c9e6) smil_status_volume_pane_g2

0x5937,	// (0x00055dee) postcard_pane_ParamLimits

0x5937,	// (0x00055dee) postcard_pane

0x2398,	// (0x0005284f) postcard_pane_g1_ParamLimits

0x2398,	// (0x0005284f) postcard_pane_g1

0x5977,	// (0x00055e2e) postcard_pane_g2_ParamLimits

0x5977,	// (0x00055e2e) postcard_pane_g2

0x5983,	// (0x00055e3a) postcard_pane_g3_ParamLimits

0x5983,	// (0x00055e3a) postcard_pane_g3

0x238a,	// (0x00052841) postcard_pane_g4_ParamLimits

0x238a,	// (0x00052841) postcard_pane_g4

0x598f,	// (0x00055e46) postcard_pane_g5_ParamLimits

0x598f,	// (0x00055e46) postcard_pane_g5

0x59a4,	// (0x00055e5b) postcard_pane_g6_ParamLimits

0x59a4,	// (0x00055e5b) postcard_pane_g6

0x2398,	// (0x0005284f) postcard_pane_g7_ParamLimits

0x2398,	// (0x0005284f) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0005f99b) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0005f99b) postcard_pane_g

0x59b8,	// (0x00055e6f) main_mp2_pane_g1_ParamLimits

0x59b8,	// (0x00055e6f) main_mp2_pane_g1

0x59c4,	// (0x00055e7b) main_mp2_pane_g2_ParamLimits

0x59c4,	// (0x00055e7b) main_mp2_pane_g2

0x59d0,	// (0x00055e87) main_mp2_pane_g3_ParamLimits

0x59d0,	// (0x00055e87) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0005f9aa) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0005f9aa) main_mp2_pane_g

0x59dc,	// (0x00055e93) main_mp2_pane_t1_ParamLimits

0x59dc,	// (0x00055e93) main_mp2_pane_t1

0x59f1,	// (0x00055ea8) main_mp2_pane_t2_ParamLimits

0x59f1,	// (0x00055ea8) main_mp2_pane_t2

0x5a03,	// (0x00055eba) main_mp2_pane_t3_ParamLimits

0x5a03,	// (0x00055eba) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0005f9b1) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0005f9b1) main_mp2_pane_t

0x23a6,	// (0x0005285d) pec_content_pane_ParamLimits

0x23a6,	// (0x0005285d) pec_content_pane

0x19ef,	// (0x00051ea6) scroll_pane_cp015

0x23b8,	// (0x0005286f) pec_attribute_pane_ParamLimits

0x23b8,	// (0x0005286f) pec_attribute_pane

0x5a15,	// (0x00055ecc) pec_content_pane_g1_ParamLimits

0x5a15,	// (0x00055ecc) pec_content_pane_g1

0x23c8,	// (0x0005287f) pec_content_pane_t1_ParamLimits

0x23c8,	// (0x0005287f) pec_content_pane_t1

0x23da,	// (0x00052891) pec_content_pane_t2_ParamLimits

0x23da,	// (0x00052891) pec_content_pane_t2

0x0001,

0xf501,	// (0x0005f9b8) pec_content_pane_t_ParamLimits

0xf501,	// (0x0005f9b8) pec_content_pane_t

0x5a21,	// (0x00055ed8) list_single_graphic_pane_cp01_ParamLimits

0x5a21,	// (0x00055ed8) list_single_graphic_pane_cp01

0x15a1,	// (0x00051a58) bg_popup_sub_pane_cp04

0x23ec,	// (0x000528a3) popup_mup_playback_window_g1

0x23f8,	// (0x000528af) popup_mup_playback_window_t1

0x240d,	// (0x000528c4) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0005f9bd) popup_mup_playback_window_t

0x2444,	// (0x000528fb) main_image_pane_g1_ParamLimits

0x2444,	// (0x000528fb) main_image_pane_g1

0x2487,	// (0x0005293e) scroll_pane_cp018_ParamLimits

0x2487,	// (0x0005293e) scroll_pane_cp018

0x249f,	// (0x00052956) scroll_pane_cp016_ParamLimits

0x249f,	// (0x00052956) scroll_pane_cp016

0x5aec,	// (0x00055fa3) smil2_image_pane_ParamLimits

0x5aec,	// (0x00055fa3) smil2_image_pane

0x5b14,	// (0x00055fcb) smil2_root_pane_ParamLimits

0x5b14,	// (0x00055fcb) smil2_root_pane

0x5b4c,	// (0x00056003) smil2_text_pane_ParamLimits

0x5b4c,	// (0x00056003) smil2_text_pane

0x1346,	// (0x000517fd) bg_list_pane_cp06

0x24db,	// (0x00052992) grid_radio_pane

0x1346,	// (0x000517fd) bg_popup_window_pane_cp06

0x24e3,	// (0x0005299a) main_fmradio_pane_t1

0x1f07,	// (0x000523be) heading_pane_cp04

0x24f1,	// (0x000529a8) main_fmradio_pane_t2

0xc336,	// (0x0005c7ed) popup_cale_lunar_info_window_g1

0x24ff,	// (0x000529b6) main_fmradio_pane_t3

0xc33e,	// (0x0005c7f5) popup_cale_lunar_info_window_g2

0x250d,	// (0x000529c4) main_fmradio_pane_t4

0x0001,

0x251b,	// (0x000529d2) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x0005faab) popup_cale_lunar_info_window_g

0xf51b,	// (0x0005f9d2) main_fmradio_pane_t

0x2529,	// (0x000529e0) wait_bar_pane_cp03

0x1824,	// (0x00051cdb) cell_fmradio_pane_ParamLimits

0x1824,	// (0x00051cdb) cell_fmradio_pane

0x2398,	// (0x0005284f) cell_fmradio_pane_g1_ParamLimits

0x2398,	// (0x0005284f) cell_fmradio_pane_g1

0x1346,	// (0x000517fd) grid_highlight_pane_cp011

0x2531,	// (0x000529e8) poc_content_pane_ParamLimits

0x2531,	// (0x000529e8) poc_content_pane

0x2544,	// (0x000529fb) scroll_pane_cp019

0x5bb8,	// (0x0005606f) popup_call_poc_act_window_ParamLimits

0x5bb8,	// (0x0005606f) popup_call_poc_act_window

0x5bd8,	// (0x0005608f) popup_call_poc_inact_window_ParamLimits

0x5bd8,	// (0x0005608f) popup_call_poc_inact_window

0xf5b8,	// (0x0005fa6f) bg_popup_call_poc_act_pane_g

0xc2f6,	// (0x0005c7ad) bg_popup_call_poc_inact_pane_g1

0xc2fe,	// (0x0005c7b5) bg_popup_call_poc_inact_pane_g2

0x254c,	// (0x00052a03) popup_call_poc_act_window_g2

0xc306,	// (0x0005c7bd) bg_popup_call_poc_inact_pane_g3

0xc286,	// (0x0005c73d) bg_popup_call_poc_inact_pane_g4

0xc30e,	// (0x0005c7c5) bg_popup_call_poc_inact_pane_g5

0x2554,	// (0x00052a0b) popup_call_poc_act_window_t1_ParamLimits

0x2554,	// (0x00052a0b) popup_call_poc_act_window_t1

0xb3d0,	// (0x0005b887) popup_call_poc_act_window_t2_ParamLimits

0xb3d0,	// (0x0005b887) popup_call_poc_act_window_t2

0xb3f8,	// (0x0005b8af) popup_call_poc_act_window_t3_ParamLimits

0xb3f8,	// (0x0005b8af) popup_call_poc_act_window_t3

0xb420,	// (0x0005b8d7) popup_call_poc_act_window_t4_ParamLimits

0xb420,	// (0x0005b8d7) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0005f9dd) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0005f9dd) popup_call_poc_act_window_t

0xc316,	// (0x0005c7cd) bg_popup_call_poc_inact_pane_g6

0xc31e,	// (0x0005c7d5) bg_popup_call_poc_inact_pane_g7

0xc326,	// (0x0005c7dd) bg_popup_call_poc_inact_pane_g8

0xb432,	// (0x0005b8e9) popup_call_poc_inact_window_g2

0xc32e,	// (0x0005c7e5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x0005fa86) bg_popup_call_poc_inact_pane_g

0xb43a,	// (0x0005b8f1) popup_call_poc_inact_window_t1_ParamLimits

0xb43a,	// (0x0005b8f1) popup_call_poc_inact_window_t1

0xb44f,	// (0x0005b906) popup_call_poc_inact_window_t2_ParamLimits

0xb44f,	// (0x0005b906) popup_call_poc_inact_window_t2

0xb464,	// (0x0005b91b) popup_call_poc_inact_window_t3_ParamLimits

0xb464,	// (0x0005b91b) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0005f9e6) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0005f9e6) popup_call_poc_inact_window_t

0xc4a2,	// (0x0005c959) context_pane_ParamLimits

0x62ea,	// (0x000567a1) signal_pane_ParamLimits

0x21ed,	// (0x000526a4) main_call2_pane

0xc490,	// (0x0005c947) popup_phob_thumbnail2_window_ParamLimits

0xc490,	// (0x0005c947) popup_phob_thumbnail2_window

0xb38e,	// (0x0005b845) aid_hotspot_pointer_arrow_pane

0xb396,	// (0x0005b84d) aid_hotspot_pointer_hand_pane

0x5ead,	// (0x00056364) phob_pre_status_pane_g5

0x40a8,	// (0x0005455f) cams_zoom_pane_ParamLimits

0x40b7,	// (0x0005456e) image_vga_pane_ParamLimits

0x40cf,	// (0x00054586) main_camera_pane_g1_ParamLimits

0x40df,	// (0x00054596) main_camera_pane_g2_ParamLimits

0x40ef,	// (0x000545a6) main_camera_pane_g3_ParamLimits

0x40ff,	// (0x000545b6) main_camera_pane_g4_ParamLimits

0x410f,	// (0x000545c6) main_camera_pane_g5_ParamLimits

0x411f,	// (0x000545d6) main_camera_pane_g6_ParamLimits

0x412f,	// (0x000545e6) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0005f6e5) main_camera_pane_g_ParamLimits

0x413f,	// (0x000545f6) main_camera_pane_t1_ParamLimits

0x4155,	// (0x0005460c) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0005f6f6) main_camera_pane_t_ParamLimits

0x15a1,	// (0x00051a58) bg_popup_preview_window_pane_cp01_ParamLimits

0x15a1,	// (0x00051a58) bg_popup_preview_window_pane_cp01

0xb479,	// (0x0005b930) popup_phob_thumbnail2_window_g1_ParamLimits

0xb479,	// (0x0005b930) popup_phob_thumbnail2_window_g1

0x1346,	// (0x000517fd) call2_cli_visual_pane

0x5c04,	// (0x000560bb) popup_call2_audio_conf_window_ParamLimits

0x5c04,	// (0x000560bb) popup_call2_audio_conf_window

0x5c22,	// (0x000560d9) popup_call2_audio_first_window_ParamLimits

0x5c22,	// (0x000560d9) popup_call2_audio_first_window

0x5c98,	// (0x0005614f) popup_call2_audio_in_window_ParamLimits

0x5c98,	// (0x0005614f) popup_call2_audio_in_window

0x5ccc,	// (0x00056183) popup_call2_audio_out_window_ParamLimits

0x5ccc,	// (0x00056183) popup_call2_audio_out_window

0x5d1e,	// (0x000561d5) popup_call2_audio_second_window_ParamLimits

0x5d1e,	// (0x000561d5) popup_call2_audio_second_window

0x5d70,	// (0x00056227) popup_call2_audio_wait_window_ParamLimits

0x5d70,	// (0x00056227) popup_call2_audio_wait_window

0x1346,	// (0x000517fd) bg_popup_call2_act_pane_cp03

0x1583,	// (0x00051a3a) list_conf_pane_cp

0xb485,	// (0x0005b93c) popup_call2_audio_conf_window_t1

0x1f64,	// (0x0005241b) list_single_graphic_popup_conf2_pane_ParamLimits

0x1f64,	// (0x0005241b) list_single_graphic_popup_conf2_pane

0x1f77,	// (0x0005242e) list_highlight_pane_cp04

0xb493,	// (0x0005b94a) list_single_graphic_popup_conf2_pane_g1

0x1f88,	// (0x0005243f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0005f9ed) list_single_graphic_popup_conf2_pane_g

0xb49b,	// (0x0005b952) list_single_graphic_popup_conf2_pane_t1

0xb4a9,	// (0x0005b960) bg_popup_call2_act_pane_cp01_ParamLimits

0xb4a9,	// (0x0005b960) bg_popup_call2_act_pane_cp01

0xb533,	// (0x0005b9ea) call_type_pane_cp05_ParamLimits

0xb533,	// (0x0005b9ea) call_type_pane_cp05

0xb587,	// (0x0005ba3e) popup_call2_audio_second_window_g1_ParamLimits

0xb587,	// (0x0005ba3e) popup_call2_audio_second_window_g1

0xb5db,	// (0x0005ba92) popup_call2_audio_second_window_g2_ParamLimits

0xb5db,	// (0x0005ba92) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0005f9f2) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0005f9f2) popup_call2_audio_second_window_g

0xb640,	// (0x0005baf7) popup_call2_audio_second_window_t1_ParamLimits

0xb640,	// (0x0005baf7) popup_call2_audio_second_window_t1

0xb6fb,	// (0x0005bbb2) popup_call2_audio_second_window_t2_ParamLimits

0xb6fb,	// (0x0005bbb2) popup_call2_audio_second_window_t2

0xb74e,	// (0x0005bc05) popup_call2_audio_second_window_t3_ParamLimits

0xb74e,	// (0x0005bc05) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0005f9f9) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0005f9f9) popup_call2_audio_second_window_t

0x1346,	// (0x000517fd) bg_popup_call2_in_pane_cp02

0x1350,	// (0x00051807) call_type_pane_cp04

0x1358,	// (0x0005180f) popup_call2_audio_wait_window_g1

0x1360,	// (0x00051817) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005f5d2) popup_call2_audio_wait_window_g

0x1368,	// (0x0005181f) popup_call2_audio_wait_window_t3

0xb841,	// (0x0005bcf8) bg_popup_call2_act_pane_ParamLimits

0xb841,	// (0x0005bcf8) bg_popup_call2_act_pane

0xb901,	// (0x0005bdb8) call_type_pane_cp03_ParamLimits

0xb901,	// (0x0005bdb8) call_type_pane_cp03

0xb965,	// (0x0005be1c) popup_call2_audio_first_window_g1_ParamLimits

0xb965,	// (0x0005be1c) popup_call2_audio_first_window_g1

0xb9d5,	// (0x0005be8c) popup_call2_audio_first_window_g2_ParamLimits

0xb9d5,	// (0x0005be8c) popup_call2_audio_first_window_g2

0x1ea6,	// (0x0005235d) popup_call2_audio_first_window_g3_ParamLimits

0x1ea6,	// (0x0005235d) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0005fa02) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0005fa02) popup_call2_audio_first_window_g

0xbab3,	// (0x0005bf6a) popup_call2_audio_first_window_t1_ParamLimits

0xbab3,	// (0x0005bf6a) popup_call2_audio_first_window_t1

0xbbb6,	// (0x0005c06d) popup_call2_audio_first_window_t4_ParamLimits

0xbbb6,	// (0x0005c06d) popup_call2_audio_first_window_t4

0xbc99,	// (0x0005c150) popup_call2_audio_first_window_t5_ParamLimits

0xbc99,	// (0x0005c150) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0005fa0d) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0005fa0d) popup_call2_audio_first_window_t

0x1599,	// (0x00051a50) bg_popup_call2_act_pane_g1

0xc346,	// (0x0005c7fd) popup_cale_lunar_info_window_t1

0xc354,	// (0x0005c80b) popup_cale_lunar_info_window_t2

0xc362,	// (0x0005c819) popup_cale_lunar_info_window_t3

0x1346,	// (0x000517fd) bg_popup_call2_bubble_pane

0xbd9a,	// (0x0005c251) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd9a,	// (0x0005c251) bg_popup_call2_in_pane_cp01

0x1022,	// (0x000514d9) call_type_pane_cp02

0xbde2,	// (0x0005c299) popup_call2_audio_out_window_g1_ParamLimits

0xbde2,	// (0x0005c299) popup_call2_audio_out_window_g1

0xbe0e,	// (0x0005c2c5) popup_call2_audio_out_window_g2_ParamLimits

0xbe0e,	// (0x0005c2c5) popup_call2_audio_out_window_g2

0xbe36,	// (0x0005c2ed) popup_call2_audio_out_window_g3_ParamLimits

0xbe36,	// (0x0005c2ed) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0005fa16) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0005fa16) popup_call2_audio_out_window_g

0xbe71,	// (0x0005c328) popup_call2_audio_out_window_t1_ParamLimits

0xbe71,	// (0x0005c328) popup_call2_audio_out_window_t1

0xbed0,	// (0x0005c387) popup_call2_audio_out_window_t2_ParamLimits

0xbed0,	// (0x0005c387) popup_call2_audio_out_window_t2

0xbf24,	// (0x0005c3db) popup_call2_audio_out_window_t3_ParamLimits

0xbf24,	// (0x0005c3db) popup_call2_audio_out_window_t3

0xbf3a,	// (0x0005c3f1) popup_call2_audio_out_window_t4_ParamLimits

0xbf3a,	// (0x0005c3f1) popup_call2_audio_out_window_t4

0xbf50,	// (0x0005c407) popup_call2_audio_out_window_t5_ParamLimits

0xbf50,	// (0x0005c407) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0005fa1f) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0005fa1f) popup_call2_audio_out_window_t

0xbfb4,	// (0x0005c46b) bg_popup_call2_in_pane_ParamLimits

0xbfb4,	// (0x0005c46b) bg_popup_call2_in_pane

0xc010,	// (0x0005c4c7) popup_call2_audio_in_window_g1_ParamLimits

0xc010,	// (0x0005c4c7) popup_call2_audio_in_window_g1

0xc048,	// (0x0005c4ff) popup_call2_audio_in_window_g2_ParamLimits

0xc048,	// (0x0005c4ff) popup_call2_audio_in_window_g2

0xc080,	// (0x0005c537) popup_call2_audio_in_window_g3_ParamLimits

0xc080,	// (0x0005c537) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0005fa2c) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0005fa2c) popup_call2_audio_in_window_g

0xc0d8,	// (0x0005c58f) popup_call2_audio_in_window_t1_ParamLimits

0xc0d8,	// (0x0005c58f) popup_call2_audio_in_window_t1

0xc158,	// (0x0005c60f) popup_call2_audio_in_window_t2_ParamLimits

0xc158,	// (0x0005c60f) popup_call2_audio_in_window_t2

0xc1d8,	// (0x0005c68f) popup_call2_audio_in_window_t3_ParamLimits

0xc1d8,	// (0x0005c68f) popup_call2_audio_in_window_t3

0xc1f2,	// (0x0005c6a9) popup_call2_audio_in_window_t4_ParamLimits

0xc1f2,	// (0x0005c6a9) popup_call2_audio_in_window_t4

0xc204,	// (0x0005c6bb) popup_call2_audio_in_window_t5_ParamLimits

0xc204,	// (0x0005c6bb) popup_call2_audio_in_window_t5

0xc219,	// (0x0005c6d0) popup_call2_audio_in_window_t6_ParamLimits

0xc219,	// (0x0005c6d0) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0005fa35) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0005fa35) popup_call2_audio_in_window_t

0x1599,	// (0x00051a50) bg_popup_call2_in_pane_g1

0xc370,	// (0x0005c827) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x0005fab0) popup_cale_lunar_info_window_t

0x15a1,	// (0x00051a58) bg_popup_call2_rect_pane_ParamLimits

0x15a1,	// (0x00051a58) bg_popup_call2_rect_pane

0x1346,	// (0x000517fd) call2_cli_visual_graphic_pane

0x1346,	// (0x000517fd) call2_cli_visual_text_pane

0xebf7,	// (0x0005f0ae) smil_status_volume_pane_g3

0x0002,

0x16c5,	// (0x00051b7c) call2_cli_visual_graphic_pane_g1

0x16c5,	// (0x00051b7c) call2_cli_visual_graphic_pane_g2

0x16c5,	// (0x00051b7c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0005fa42) call2_cli_visual_graphic_pane_g

0xc22e,	// (0x0005c6e5) bg_popup_call2_rect_pane_g1

0x1763,	// (0x00051c1a) bg_popup_call2_rect_pane_g2

0xc236,	// (0x0005c6ed) bg_popup_call2_rect_pane_g3

0xc23e,	// (0x0005c6f5) bg_popup_call2_rect_pane_g4

0xc246,	// (0x0005c6fd) bg_popup_call2_rect_pane_g5

0xc24e,	// (0x0005c705) bg_popup_call2_rect_pane_g6

0xc256,	// (0x0005c70d) bg_popup_call2_rect_pane_g7

0xc25e,	// (0x0005c715) bg_popup_call2_rect_pane_g8

0xc266,	// (0x0005c71d) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0005fa49) bg_popup_call2_rect_pane_g

0xc26e,	// (0x0005c725) bg_popup_call2_bubble_pane_g1

0xc276,	// (0x0005c72d) bg_popup_call2_bubble_pane_g2

0xc27e,	// (0x0005c735) bg_popup_call2_bubble_pane_g3

0xc286,	// (0x0005c73d) bg_popup_call2_bubble_pane_g4

0xc28e,	// (0x0005c745) bg_popup_call2_bubble_pane_g5

0xc296,	// (0x0005c74d) bg_popup_call2_bubble_pane_g6

0xc29e,	// (0x0005c755) bg_popup_call2_bubble_pane_g7

0xc2a6,	// (0x0005c75d) bg_popup_call2_bubble_pane_g8

0xc2ae,	// (0x0005c765) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0005fa5c) bg_popup_call2_bubble_pane_g

0x3bcb,	// (0x00054082) aid_cale_week_size_cell_pane

0x416b,	// (0x00054622) aid_cams_cif_uncrop_pane_ParamLimits

0x416b,	// (0x00054622) aid_cams_cif_uncrop_pane

0x430c,	// (0x000547c3) aid_cams_size_cell_ParamLimits

0x430c,	// (0x000547c3) aid_cams_size_cell

0x4320,	// (0x000547d7) grid_cams_pane_ParamLimits

0x4335,	// (0x000547ec) linegrid_cams_pane_ParamLimits

0x444f,	// (0x00054906) call_video_pane_t1

0x4469,	// (0x00054920) call_video_pane_t2

0x0001,

0xf292,	// (0x0005f749) call_video_pane_t

0x47ee,	// (0x00054ca5) aid_cale_month_size_cell_pane_ParamLimits

0x47ee,	// (0x00054ca5) aid_cale_month_size_cell_pane

0xf642,	// (0x0005faf9) smil_status_volume_pane_g

0xec04,	// (0x0005f0bb) volume_smil_pane_ParamLimits

0x0efc,	// (0x000513b3) aid_popup2_width_pane

0x3b45,	// (0x00053ffc) cell_qdial_pane_g4_ParamLimits

0x3b45,	// (0x00053ffc) cell_qdial_pane_g4

0x52d1,	// (0x00055788) aid_blid_cardinal_pane_ParamLimits

0x52dd,	// (0x00055794) aid_blid_destination_pane_ParamLimits

0x52dd,	// (0x00055794) aid_blid_destination_pane

0x15a1,	// (0x00051a58) bg_popup_call_poc_act_pane_ParamLimits

0x15a1,	// (0x00051a58) bg_popup_call_poc_act_pane

0x15a1,	// (0x00051a58) bg_popup_call_poc_inact_pane_ParamLimits

0x15a1,	// (0x00051a58) bg_popup_call_poc_inact_pane

0xc2b6,	// (0x0005c76d) bg_popup_call_poc_act_pane_g1

0xc2be,	// (0x0005c775) bg_popup_call_poc_act_pane_g2

0xc2c6,	// (0x0005c77d) bg_popup_call_poc_act_pane_g3

0xc286,	// (0x0005c73d) bg_popup_call_poc_act_pane_g4

0xc28e,	// (0x0005c745) bg_popup_call_poc_act_pane_g5

0xc2ce,	// (0x0005c785) bg_popup_call_poc_act_pane_g6

0xc29e,	// (0x0005c755) bg_popup_call_poc_act_pane_g7

0xc2d6,	// (0x0005c78d) bg_popup_call_poc_act_pane_g8

0x1346,	// (0x000517fd) main_usb_pane

0xc46f,	// (0x0005c926) popup_cale_lunar_info_window

0x46ae,	// (0x00054b65) im_reading_pane_t1_ParamLimits

0x1938,	// (0x00051def) list_im_pane_ParamLimits

0x1949,	// (0x00051e00) scroll_pane_cp07_ParamLimits

0x1346,	// (0x000517fd) grid_highlight_pane_cp012

0x15a1,	// (0x00051a58) mup_scale_pane_ParamLimits

0x2398,	// (0x0005284f) main_usb_pane_g1_ParamLimits

0x2398,	// (0x0005284f) main_usb_pane_g1

0x5dca,	// (0x00056281) main_usb_pane_g2_ParamLimits

0x5dca,	// (0x00056281) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x0005fa99) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x0005fa99) main_usb_pane_g

0x5dde,	// (0x00056295) main_usb_pane_t1_ParamLimits

0x5dde,	// (0x00056295) main_usb_pane_t1

0x5df0,	// (0x000562a7) main_usb_pane_t2_ParamLimits

0x5df0,	// (0x000562a7) main_usb_pane_t2

0x5e02,	// (0x000562b9) main_usb_pane_t3_ParamLimits

0x5e02,	// (0x000562b9) main_usb_pane_t3

0x5e14,	// (0x000562cb) main_usb_pane_t4_ParamLimits

0x5e14,	// (0x000562cb) main_usb_pane_t4

0x5e26,	// (0x000562dd) main_usb_pane_t5_ParamLimits

0x5e26,	// (0x000562dd) main_usb_pane_t5

0x5e38,	// (0x000562ef) main_usb_pane_t6_ParamLimits

0x5e38,	// (0x000562ef) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x0005fa9e) main_usb_pane_t_ParamLimits

0x20b1,	// (0x00052568) aid_text_placing

0x527d,	// (0x00055734) main_location2_pane_t1_ParamLimits

0x5293,	// (0x0005574a) main_location2_pane_t2_ParamLimits

0x52a9,	// (0x00055760) main_location2_pane_t3_ParamLimits

0x52bf,	// (0x00055776) main_location2_pane_t4_ParamLimits

0x52bf,	// (0x00055776) main_location2_pane_t4

0xf3f3,	// (0x0005f8aa) main_location2_pane_t_ParamLimits

0x15dd,	// (0x00051a94) find_pinb_pane_g2_ParamLimits

0x15dd,	// (0x00051a94) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0005f5f8) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0005f5f8) find_pinb_pane_g

0x15e9,	// (0x00051aa0) find_pinb_pane_t1_ParamLimits

0x15fb,	// (0x00051ab2) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0005f5fd) find_pinb_pane_t_ParamLimits

0x1346,	// (0x000517fd) main_call3_pane

0x4b2a,	// (0x00054fe1) cale_month_day_heading_pane_t1_ParamLimits

0x4b88,	// (0x0005503f) cale_month_day_heading_pane_t2_ParamLimits

0x4bed,	// (0x000550a4) cale_month_day_heading_pane_t3_ParamLimits

0x4c52,	// (0x00055109) cale_month_day_heading_pane_t4_ParamLimits

0x4cb7,	// (0x0005516e) cale_month_day_heading_pane_t5_ParamLimits

0x4d1c,	// (0x000551d3) cale_month_day_heading_pane_t6_ParamLimits

0x4d81,	// (0x00055238) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0005f781) cale_month_day_heading_pane_t_ParamLimits

0x1b99,	// (0x00052050) smil_status_volume_pane

0x5953,	// (0x00055e0a) postcard_address_pane_ParamLimits

0x5953,	// (0x00055e0a) postcard_address_pane

0x5965,	// (0x00055e1c) postcard_message_pane_ParamLimits

0x5965,	// (0x00055e1c) postcard_message_pane

0x5da8,	// (0x0005625f) call2_cli_visual_pane_t1_ParamLimits

0x5da8,	// (0x0005625f) call2_cli_visual_pane_t1

0x6506,	// (0x000569bd) postcard_message_pane_t1_ParamLimits

0x6506,	// (0x000569bd) postcard_message_pane_t1

0x64ef,	// (0x000569a6) postcard_address_pane_t1_ParamLimits

0x64ef,	// (0x000569a6) postcard_address_pane_t1

0x64dd,	// (0x00056994) popup_call3_audio_in_window_ParamLimits

0x64dd,	// (0x00056994) popup_call3_audio_in_window

0x636c,	// (0x00056823) bg_popup_call3_in_pane_ParamLimits

0x636c,	// (0x00056823) bg_popup_call3_in_pane

0x63de,	// (0x00056895) popup_call3_audio_in_window_g1_ParamLimits

0x63de,	// (0x00056895) popup_call3_audio_in_window_g1

0x63fe,	// (0x000568b5) popup_call3_audio_in_window_g2_ParamLimits

0x63fe,	// (0x000568b5) popup_call3_audio_in_window_g2

0x641e,	// (0x000568d5) popup_call3_audio_in_window_g3_ParamLimits

0x641e,	// (0x000568d5) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x0005fb00) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x0005fb00) popup_call3_audio_in_window_g

0x644f,	// (0x00056906) popup_call3_audio_in_window_t1_ParamLimits

0x644f,	// (0x00056906) popup_call3_audio_in_window_t1

0x648d,	// (0x00056944) popup_call3_audio_in_window_t2_ParamLimits

0x648d,	// (0x00056944) popup_call3_audio_in_window_t2

0x64cb,	// (0x00056982) popup_call3_audio_in_window_t3_ParamLimits

0x64cb,	// (0x00056982) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x0005fb09) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x0005fb09) popup_call3_audio_in_window_t

0x21ed,	// (0x000526a4) bg_popup_call3_rect_pane

0xc22e,	// (0x0005c6e5) bg_popup_call3_rect_pane_g1

0x1763,	// (0x00051c1a) bg_popup_call3_rect_pane_g2

0xc236,	// (0x0005c6ed) bg_popup_call3_rect_pane_g3

0xc23e,	// (0x0005c6f5) bg_popup_call3_rect_pane_g4

0xc246,	// (0x0005c6fd) bg_popup_call3_rect_pane_g5

0xc24e,	// (0x0005c705) bg_popup_call3_rect_pane_g6

0xc256,	// (0x0005c70d) bg_popup_call3_rect_pane_g7

0x55db,	// (0x00055a92) mup_visualizer_osc_pane

0x22ac,	// (0x00052763) mup_visualizer_spec_pane

0x639c,	// (0x00056853) call3_video_qcif_pane_ParamLimits

0x639c,	// (0x00056853) call3_video_qcif_pane

0x63ad,	// (0x00056864) call3_video_qcif_uncrop_pane_ParamLimits

0x63ad,	// (0x00056864) call3_video_qcif_uncrop_pane

0x63b9,	// (0x00056870) call3_video_subqcif_pane_ParamLimits

0x63b9,	// (0x00056870) call3_video_subqcif_pane

0x63cd,	// (0x00056884) call3_video_subqcif_uncrop_pane_ParamLimits

0x63cd,	// (0x00056884) call3_video_subqcif_uncrop_pane

0x643e,	// (0x000568f5) popup_call3_audio_in_window_g4_ParamLimits

0x643e,	// (0x000568f5) popup_call3_audio_in_window_g4

0x635b,	// (0x00056812) mup_spec_half_pane

0x6364,	// (0x0005681b) mup_spec_half_pane_cp

0xc502,	// (0x0005c9b9) mup_osc_middle_pane

0xc50b,	// (0x0005c9c2) mup_visualizer_osc_pane_g1

0x633c,	// (0x000567f3) mup_spec_bar_pane_ParamLimits

0x633c,	// (0x000567f3) mup_spec_bar_pane

0xc4ef,	// (0x0005c9a6) mup_spec_bar_pane_g1

0xc4f9,	// (0x0005c9b0) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0005faf4) mup_spec_bar_pane_g

0x3bcb,	// (0x00054082) aid_cale_week_size_cell_pane_ParamLimits

0x3bde,	// (0x00054095) bg_cale_heading_pane_ParamLimits

0x17a7,	// (0x00051c5e) bg_cale_pane_cp01_ParamLimits

0x3bf2,	// (0x000540a9) cale_week_corner_pane_ParamLimits

0x3c08,	// (0x000540bf) cale_week_day_heading_pane_ParamLimits

0x3c1c,	// (0x000540d3) cale_week_scroll_pane_g1_ParamLimits

0x3c2d,	// (0x000540e4) cale_week_scroll_pane_g2_ParamLimits

0x3c3e,	// (0x000540f5) cale_week_scroll_pane_g3_ParamLimits

0x3c4f,	// (0x00054106) cale_week_scroll_pane_g4_ParamLimits

0x3c60,	// (0x00054117) cale_week_scroll_pane_g5_ParamLimits

0x3c71,	// (0x00054128) cale_week_scroll_pane_g6_ParamLimits

0x3c82,	// (0x00054139) cale_week_scroll_pane_g7_ParamLimits

0x3c93,	// (0x0005414a) cale_week_scroll_pane_g8_ParamLimits

0x3ca6,	// (0x0005415d) cale_week_scroll_pane_g9_ParamLimits

0x3cb7,	// (0x0005416e) cale_week_scroll_pane_g10_ParamLimits

0x3cc8,	// (0x0005417f) cale_week_scroll_pane_g11_ParamLimits

0x3cd9,	// (0x00054190) cale_week_scroll_pane_g12_ParamLimits

0x3cea,	// (0x000541a1) cale_week_scroll_pane_g13_ParamLimits

0x3cfb,	// (0x000541b2) cale_week_scroll_pane_g14_ParamLimits

0x3d0c,	// (0x000541c3) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0005f689) cale_week_scroll_pane_g_ParamLimits

0x3d1d,	// (0x000541d4) cale_week_time_pane_ParamLimits

0x3d30,	// (0x000541e7) grid_cale_week_pane_ParamLimits

0x17c0,	// (0x00051c77) listscroll_cale_week_pane_t1

0x3d43,	// (0x000541fa) scroll_pane_cp08_ParamLimits

0x482f,	// (0x00054ce6) cale_month_corner_pane_ParamLimits

0x1b6f,	// (0x00052026) cale_month_pane_t1

0x4ae9,	// (0x00054fa0) cale_month_week_pane_ParamLimits

0x50c4,	// (0x0005557b) popup_call_status_window_g1_ParamLimits

0x50d8,	// (0x0005558f) popup_call_status_window_g2_ParamLimits

0x50ec,	// (0x000555a3) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0005f831) popup_call_status_window_g_ParamLimits

0x1ef7,	// (0x000523ae) aid_call2_pane

0x57e7,	// (0x00055c9e) msg_header_pane_g1

0x5953,	// (0x00055e0a) postcard_address2_pane_ParamLimits

0x5953,	// (0x00055e0a) postcard_address2_pane

0x5965,	// (0x00055e1c) postcard_message2_pane_ParamLimits

0x5965,	// (0x00055e1c) postcard_message2_pane

0x62f8,	// (0x000567af) message2_row_pane_ParamLimits

0x62f8,	// (0x000567af) message2_row_pane

0x6312,	// (0x000567c9) address2_row_pane_ParamLimits

0x6312,	// (0x000567c9) address2_row_pane

0xc4bd,	// (0x0005c974) postcard_message2_row_pane_g1

0xc4c5,	// (0x0005c97c) postcard_message2_row_pane_t1

0xc4bd,	// (0x0005c974) address2_row_pane_g1

0xc4c5,	// (0x0005c97c) address2_row_pane_t1

0x4073,	// (0x0005452a) aid_size_cell_vorec

0x1346,	// (0x000517fd) main_rss_pane

0x6325,	// (0x000567dc) rss_list_single_pane_ParamLimits

0x6325,	// (0x000567dc) rss_list_single_pane

0xc4d3,	// (0x0005c98a) rss_list_single_pane_t1

0xc4e1,	// (0x0005c998) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x0005faef) rss_list_single_pane_t

0x1346,	// (0x000517fd) main_camera2_pane

0x1346,	// (0x000517fd) main_video2_pane

0x655f,	// (0x00056a16) cams_zoom_pane_cp2_ParamLimits

0x655f,	// (0x00056a16) cams_zoom_pane_cp2

0x6576,	// (0x00056a2d) image2_vga_pane_ParamLimits

0x6576,	// (0x00056a2d) image2_vga_pane

0x65ac,	// (0x00056a63) main_camera2_pane_g1_ParamLimits

0x65ac,	// (0x00056a63) main_camera2_pane_g1

0x65cc,	// (0x00056a83) main_camera2_pane_g2_ParamLimits

0x65cc,	// (0x00056a83) main_camera2_pane_g2

0x65e3,	// (0x00056a9a) main_camera2_pane_g3_ParamLimits

0x65e3,	// (0x00056a9a) main_camera2_pane_g3

0x65fa,	// (0x00056ab1) main_camera2_pane_g4_ParamLimits

0x65fa,	// (0x00056ab1) main_camera2_pane_g4

0x6611,	// (0x00056ac8) main_camera2_pane_g5_ParamLimits

0x6611,	// (0x00056ac8) main_camera2_pane_g5

0x6628,	// (0x00056adf) main_camera2_pane_g6_ParamLimits

0x6628,	// (0x00056adf) main_camera2_pane_g6

0x663f,	// (0x00056af6) main_camera2_pane_g7_ParamLimits

0x663f,	// (0x00056af6) main_camera2_pane_g7

0x6656,	// (0x00056b0d) main_camera2_pane_g8_ParamLimits

0x6656,	// (0x00056b0d) main_camera2_pane_g8

0x0008,

0xf659,	// (0x0005fb10) main_camera2_pane_g_ParamLimits

0xf659,	// (0x0005fb10) main_camera2_pane_g

0x6684,	// (0x00056b3b) main_camera2_pane_t1_ParamLimits

0x6684,	// (0x00056b3b) main_camera2_pane_t1

0x66b3,	// (0x00056b6a) main_camera2_pane_t2_ParamLimits

0x66b3,	// (0x00056b6a) main_camera2_pane_t2

0x66d0,	// (0x00056b87) main_camera2_pane_t3_ParamLimits

0x66d0,	// (0x00056b87) main_camera2_pane_t3

0x671c,	// (0x00056bd3) main_camera2_pane_t4_ParamLimits

0x671c,	// (0x00056bd3) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x0005fb23) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x0005fb23) main_camera2_pane_t

0x6791,	// (0x00056c48) cams_zoom_pane_cp4_ParamLimits

0x6791,	// (0x00056c48) cams_zoom_pane_cp4

0x67a7,	// (0x00056c5e) image2_cif_pane_ParamLimits

0x67a7,	// (0x00056c5e) image2_cif_pane

0x67ca,	// (0x00056c81) image2_subqcif_pane_ParamLimits

0x67ca,	// (0x00056c81) image2_subqcif_pane

0x67e0,	// (0x00056c97) main_video2_pane_g1_ParamLimits

0x67e0,	// (0x00056c97) main_video2_pane_g1

0x67fa,	// (0x00056cb1) main_video2_pane_g2_ParamLimits

0x67fa,	// (0x00056cb1) main_video2_pane_g2

0x6810,	// (0x00056cc7) main_video2_pane_g3_ParamLimits

0x6810,	// (0x00056cc7) main_video2_pane_g3

0x6826,	// (0x00056cdd) main_video2_pane_g4_ParamLimits

0x6826,	// (0x00056cdd) main_video2_pane_g4

0x683c,	// (0x00056cf3) main_video2_pane_g5_ParamLimits

0x683c,	// (0x00056cf3) main_video2_pane_g5

0x6852,	// (0x00056d09) main_video2_pane_g6_ParamLimits

0x6852,	// (0x00056d09) main_video2_pane_g6

0x0005,

0xf67b,	// (0x0005fb32) main_video2_pane_g_ParamLimits

0xf67b,	// (0x0005fb32) main_video2_pane_g

0x686c,	// (0x00056d23) main_video2_pane_t1_ParamLimits

0x686c,	// (0x00056d23) main_video2_pane_t1

0x6890,	// (0x00056d47) main_video2_pane_t2_ParamLimits

0x6890,	// (0x00056d47) main_video2_pane_t2

0x68da,	// (0x00056d91) main_video2_pane_t3_ParamLimits

0x68da,	// (0x00056d91) main_video2_pane_t3

0x0002,

0xf688,	// (0x0005fb3f) main_video2_pane_t_ParamLimits

0xf688,	// (0x0005fb3f) main_video2_pane_t

0x5ee7,	// (0x0005639e) call_muted_g2

0x0001,

0xf62a,	// (0x0005fae1) call_muted_g

0x1346,	// (0x000517fd) main_mup2_pane

0x691c,	// (0x00056dd3) main_mup2_pane_g1_ParamLimits

0x691c,	// (0x00056dd3) main_mup2_pane_g1

0x6928,	// (0x00056ddf) main_mup2_pane_g2_ParamLimits

0x6928,	// (0x00056ddf) main_mup2_pane_g2

0xec6d,	// (0x0005f124) main_mup_pane_g13_cp1

0xec75,	// (0x0005f12c) mup_volume_pane_cp1

0x6944,	// (0x00056dfb) main_mup2_pane_g4_ParamLimits

0x6944,	// (0x00056dfb) main_mup2_pane_g4

0x6954,	// (0x00056e0b) main_mup2_pane_g5_ParamLimits

0x6954,	// (0x00056e0b) main_mup2_pane_g5

0x6964,	// (0x00056e1b) main_mup2_pane_g6_ParamLimits

0x6964,	// (0x00056e1b) main_mup2_pane_g6

0x6974,	// (0x00056e2b) main_mup2_pane_g7_ParamLimits

0x6974,	// (0x00056e2b) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x0005fb46) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x0005fb46) main_mup2_pane_g

0x698c,	// (0x00056e43) main_mup2_pane_t1_ParamLimits

0x698c,	// (0x00056e43) main_mup2_pane_t1

0x69a2,	// (0x00056e59) main_mup2_pane_t2_ParamLimits

0x69a2,	// (0x00056e59) main_mup2_pane_t2

0x69b8,	// (0x00056e6f) main_mup2_pane_t3_ParamLimits

0x69b8,	// (0x00056e6f) main_mup2_pane_t3

0x69ce,	// (0x00056e85) main_mup2_pane_t4_ParamLimits

0x69ce,	// (0x00056e85) main_mup2_pane_t4

0x69e6,	// (0x00056e9d) main_mup2_pane_t5_ParamLimits

0x69e6,	// (0x00056e9d) main_mup2_pane_t5

0x69fe,	// (0x00056eb5) main_mup2_pane_t6_ParamLimits

0x69fe,	// (0x00056eb5) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x0005fb55) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x0005fb55) main_mup2_pane_t

0x6a2e,	// (0x00056ee5) mup2_visualizer_pane_ParamLimits

0x6a2e,	// (0x00056ee5) mup2_visualizer_pane

0x6a59,	// (0x00056f10) mup_progress_pane_cp_ParamLimits

0x6a59,	// (0x00056f10) mup_progress_pane_cp

0xec58,	// (0x0005f10f) mup_volume_pane_cp_ParamLimits

0xec58,	// (0x0005f10f) mup_volume_pane_cp

0x6a6d,	// (0x00056f24) mup2_visualizer_pane_g1_ParamLimits

0x6a6d,	// (0x00056f24) mup2_visualizer_pane_g1

0xc542,	// (0x0005c9f9) mup2_visualizer_pane_g2_ParamLimits

0xc542,	// (0x0005c9f9) mup2_visualizer_pane_g2

0x6a82,	// (0x00056f39) mup2_visualizer_pane_g3_ParamLimits

0x6a82,	// (0x00056f39) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x0005fb62) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x0005fb62) mup2_visualizer_pane_g

0x24d3,	// (0x0005298a) aid_size_cell_fmradio

0x6043,	// (0x000564fa) aid_height_parent_landcape

0x19d6,	// (0x00051e8d) wml_content_pane_cp

0x19de,	// (0x00051e95) wml_tabs_pane

0x19e7,	// (0x00051e9e) popup_wml_miniature_window

0x19ef,	// (0x00051ea6) scroll_pane_cp021

0x1a03,	// (0x00051eba) wml_content_pane_comp8

0x1346,	// (0x000517fd) bg_popup_sub_pane_cp05

0xc560,	// (0x0005ca17) popup_wml_miniature_window_g1

0xc568,	// (0x0005ca1f) wml_miniature_view_pane

0x6a8e,	// (0x00056f45) aid_size_wml_view

0x6a96,	// (0x00056f4d) wml_miniature_view_pane_g1

0x6a9f,	// (0x00056f56) wml_miniature_view_pane_g2

0x6aa8,	// (0x00056f5f) wml_miniature_view_pane_g3

0x6ab0,	// (0x00056f67) wml_miniature_view_pane_g4

0x6ab8,	// (0x00056f6f) wml_miniature_view_pane_g5

0x6ac0,	// (0x00056f77) wml_miniature_view_pane_g6

0x6ac8,	// (0x00056f7f) wml_miniature_view_pane_g7

0x6ad0,	// (0x00056f87) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x0005fb69) wml_miniature_view_pane_g

0xc570,	// (0x0005ca27) background_graphic_ParamLimits

0xc570,	// (0x0005ca27) background_graphic

0xc57c,	// (0x0005ca33) wml_tabs_2_pane

0xc585,	// (0x0005ca3c) wml_tabs_3_pane_ParamLimits

0xc585,	// (0x0005ca3c) wml_tabs_3_pane

0xc597,	// (0x0005ca4e) wml_tabs_4_pane_ParamLimits

0xc597,	// (0x0005ca4e) wml_tabs_4_pane

0xc5ad,	// (0x0005ca64) wml_tabs_5_pane_ParamLimits

0xc5ad,	// (0x0005ca64) wml_tabs_5_pane

0xc5c7,	// (0x0005ca7e) wml_tabs_pane_g2_ParamLimits

0xc5c7,	// (0x0005ca7e) wml_tabs_pane_g2

0xc5db,	// (0x0005ca92) wml_tabs_pane_g3_ParamLimits

0xc5db,	// (0x0005ca92) wml_tabs_pane_g3

0x6ad8,	// (0x00056f8f) wml_tabs_2_active_pane_ParamLimits

0x6ad8,	// (0x00056f8f) wml_tabs_2_active_pane

0x6ae8,	// (0x00056f9f) wml_tabs_2_passive_pane_ParamLimits

0x6ae8,	// (0x00056f9f) wml_tabs_2_passive_pane

0x6af8,	// (0x00056faf) wml_tabs_3_active_pane_cp_ParamLimits

0x6af8,	// (0x00056faf) wml_tabs_3_active_pane_cp

0x6b09,	// (0x00056fc0) wml_tabs_3_passive_pane_ParamLimits

0x6b09,	// (0x00056fc0) wml_tabs_3_passive_pane

0x6b1a,	// (0x00056fd1) wml_tabs_3_passive_pane_cp_ParamLimits

0x6b1a,	// (0x00056fd1) wml_tabs_3_passive_pane_cp

0x6b2b,	// (0x00056fe2) tabs_4_active_pane

0x6b33,	// (0x00056fea) tabs_4_passive_pane

0x6b3b,	// (0x00056ff2) tabs_4_passive_pane_cp

0x6b43,	// (0x00056ffa) tabs_4_passive_pane_cp2

0x5dc2,	// (0x00056279) aid_height_text

0x55b1,	// (0x00055a68) mup_volume_cont_pane_ParamLimits

0x55b1,	// (0x00055a68) mup_volume_cont_pane

0x3855,	// (0x00053d0c) aid_size_cell_pinb

0x385f,	// (0x00053d16) aid_size_list_pinb

0x6a45,	// (0x00056efc) mup2_volume_cont_pane_ParamLimits

0x6a45,	// (0x00056efc) mup2_volume_cont_pane

0xec44,	// (0x0005f0fb) mup2_volume_cont_pane_g1_ParamLimits

0xec44,	// (0x0005f0fb) mup2_volume_cont_pane_g1

0x357e,	// (0x00053a35) aid_size_cell_touch_ParamLimits

0x357e,	// (0x00053a35) aid_size_cell_touch

0x375d,	// (0x00053c14) touch_pane_ParamLimits

0x375d,	// (0x00053c14) touch_pane

0x0eea,	// (0x000513a1) main_rss2_pane

0xc5f8,	// (0x0005caaf) listscroll_rss2_pane

0xc601,	// (0x0005cab8) rss2_navigation_pane

0xc609,	// (0x0005cac0) list_rss2_pane

0x202e,	// (0x000524e5) scroll_pane_cp22

0xc611,	// (0x0005cac8) rss2_navigation_pane_g1

0xc61a,	// (0x0005cad1) rss2_navigation_pane_g2

0xc622,	// (0x0005cad9) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x0005fb7a) rss2_navigation_pane_g

0xc62a,	// (0x0005cae1) rss2_navigation_pane_t1

0x6b4b,	// (0x00057002) rss2_list_single_pane_ParamLimits

0x6b4b,	// (0x00057002) rss2_list_single_pane

0xc638,	// (0x0005caef) rss2_list_single_pane_t2

0xc646,	// (0x0005cafd) rss2_list_single_pane_t3_ParamLimits

0xc646,	// (0x0005cafd) rss2_list_single_pane_t3

0xc663,	// (0x0005cb1a) rss2_list_single_pane_t4

0x4f4b,	// (0x00055402) smil_status_pane_g1

0x257c,	// (0x00052a33) main_image2_pane_ParamLimits

0x257c,	// (0x00052a33) main_image2_pane

0x666d,	// (0x00056b24) main_camera2_pane_g9_ParamLimits

0x666d,	// (0x00056b24) main_camera2_pane_g9

0x675f,	// (0x00056c16) main_camera2_pane_t5_ParamLimits

0x675f,	// (0x00056c16) main_camera2_pane_t5

0xec19,	// (0x0005f0d0) main_camera2_pane_t6_ParamLimits

0xec19,	// (0x0005f0d0) main_camera2_pane_t6

0x6b5f,	// (0x00057016) main_image2_pane_g1_ParamLimits

0x6b5f,	// (0x00057016) main_image2_pane_g1

0x5b7a,	// (0x00056031) smil2_video_pane_ParamLimits

0x5b7a,	// (0x00056031) smil2_video_pane

0xb007,	// (0x0005b4be) aid_zoom_text_primary_cp

0x0f2d,	// (0x000513e4) popup_preview_fixed_window

0x1930,	// (0x00051de7) im_reading_pane_g1

0x6553,	// (0x00056a0a) cams2_bc_adjust_pane_cp_ParamLimits

0x6553,	// (0x00056a0a) cams2_bc_adjust_pane_cp

0x6785,	// (0x00056c3c) cams2_bc_adjust_pane_ParamLimits

0x6785,	// (0x00056c3c) cams2_bc_adjust_pane

0xc671,	// (0x0005cb28) cams2_bc_adjust_pane_g1

0xec7d,	// (0x0005f134) cams2_slider_pane

0xec86,	// (0x0005f13d) cams2_slider_pane_g1

0xec8f,	// (0x0005f146) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x0005fb81) cams2_slider_pane_g

0x393f,	// (0x00053df6) calc_display_pane_ParamLimits

0x395b,	// (0x00053e12) calc_paper_pane_ParamLimits

0x397c,	// (0x00053e33) grid_calc_pane_ParamLimits

0xb329,	// (0x0005b7e0) popup_clock_digital_window_t1_ParamLimits

0x2470,	// (0x00052927) main_image_pane_t1

0x3921,	// (0x00053dd8) aid_size_cell_calc_ParamLimits

0x3921,	// (0x00053dd8) aid_size_cell_calc

0x6073,	// (0x0005652a) popup_blid_sat_info2_window_ParamLimits

0x6073,	// (0x0005652a) popup_blid_sat_info2_window

0xc681,	// (0x0005cb38) aid_size_cell_blid

0xc689,	// (0x0005cb40) bg_popup_window_pane_cp07

0xc6ac,	// (0x0005cb63) grid_popup_blid_pane

0xc6b4,	// (0x0005cb6b) heading_pane_cp05_ParamLimits

0xc6b4,	// (0x0005cb6b) heading_pane_cp05

0xc77c,	// (0x0005cc33) cell_popup_blid_pane_ParamLimits

0xc77c,	// (0x0005cc33) cell_popup_blid_pane

0xc79c,	// (0x0005cc53) cell_popup_blid_pane_g1

0xc7a4,	// (0x0005cc5b) cell_popup_blid_pane_t1

0x6a18,	// (0x00056ecf) mup2_indicator_pane_ParamLimits

0x6a18,	// (0x00056ecf) mup2_indicator_pane

0x21ed,	// (0x000526a4) mup2_visualizer_osc_pane

0xc54e,	// (0x0005ca05) mup2_visualizer_spec_pane_ParamLimits

0xc54e,	// (0x0005ca05) mup2_visualizer_spec_pane

0x6b73,	// (0x0005702a) mup2_spec_half_pane

0x6b7c,	// (0x00057033) mup2_spec_half_pane_cp

0x6b84,	// (0x0005703b) mup2_spec_bar_pane_ParamLimits

0x6b84,	// (0x0005703b) mup2_spec_bar_pane

0xc4ef,	// (0x0005c9a6) mup2_spec_bar_pane_g1

0xc4f9,	// (0x0005c9b0) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0005faf4) mup2_spec_bar_pane_g

0x6ba3,	// (0x0005705a) mup2_osc_middle_pane

0xc50b,	// (0x0005c9c2) mup2_visualizer_osc_pane_g1

0x0f55,	// (0x0005140c) popup_number_entry_window_t1_ParamLimits

0x0f68,	// (0x0005141f) popup_number_entry_window_t2_ParamLimits

0x0f7a,	// (0x00051431) popup_number_entry_window_t3_ParamLimits

0x37a5,	// (0x00053c5c) popup_number_entry_window_t5_ParamLimits

0x37a5,	// (0x00053c5c) popup_number_entry_window_t5

0xf0ec,	// (0x0005f5a3) popup_number_entry_window_t_ParamLimits

0x0f8c,	// (0x00051443) text_title_cp2_ParamLimits

0xb39e,	// (0x0005b855) aid_hotspot_pointer_text2_pane

0xb3c4,	// (0x0005b87b) main_viewer_pane_g9_ParamLimits

0xb3c4,	// (0x0005b87b) main_viewer_pane_g9

0x1b6f,	// (0x00052026) cale_month_pane_t1_ParamLimits

0x1bac,	// (0x00052063) bg_cale_pane_ParamLimits

0x1bc4,	// (0x0005207b) list_cale_pane_ParamLimits

0x17c0,	// (0x00051c77) listscroll_cale_day_pane_t1

0x1bd5,	// (0x0005208c) scroll_pane_cp09_ParamLimits

0x55e3,	// (0x00055a9a) main_mup_eq_pane_t1_ParamLimits

0x55e3,	// (0x00055a9a) main_mup_eq_pane_t1

0x55fb,	// (0x00055ab2) main_mup_eq_pane_t2_ParamLimits

0x55fb,	// (0x00055ab2) main_mup_eq_pane_t2

0x5611,	// (0x00055ac8) main_mup_eq_pane_t3_ParamLimits

0x5611,	// (0x00055ac8) main_mup_eq_pane_t3

0x5627,	// (0x00055ade) main_mup_eq_pane_t4_ParamLimits

0x5627,	// (0x00055ade) main_mup_eq_pane_t4

0x563d,	// (0x00055af4) main_mup_eq_pane_t5_ParamLimits

0x563d,	// (0x00055af4) main_mup_eq_pane_t5

0x5653,	// (0x00055b0a) main_mup_eq_pane_t6_ParamLimits

0x5653,	// (0x00055b0a) main_mup_eq_pane_t6

0x5665,	// (0x00055b1c) main_mup_eq_pane_t7_ParamLimits

0x5665,	// (0x00055b1c) main_mup_eq_pane_t7

0x5677,	// (0x00055b2e) main_mup_eq_pane_t8_ParamLimits

0x5677,	// (0x00055b2e) main_mup_eq_pane_t8

0x5689,	// (0x00055b40) main_mup_eq_pane_t9_ParamLimits

0x5689,	// (0x00055b40) main_mup_eq_pane_t9

0x569f,	// (0x00055b56) main_mup_eq_pane_t10_ParamLimits

0x569f,	// (0x00055b56) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0005f930) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0005f930) main_mup_eq_pane_t

0x5732,	// (0x00055be9) mup_equalizer_pane_cp5_ParamLimits

0x5744,	// (0x00055bfb) mup_equalizer_pane_cp6_ParamLimits

0x5756,	// (0x00055c0d) mup_equalizer_pane_cp7_ParamLimits

0x0eea,	// (0x000513a1) main_gallery_pane

0xc514,	// (0x0005c9cb) smil2_volume_pane

0xc51c,	// (0x0005c9d3) smil_status_volume_pane_g1_ParamLimits

0xc52f,	// (0x0005c9e6) smil_status_volume_pane_g2_ParamLimits

0xebf7,	// (0x0005f0ae) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x0005faf9) smil_status_volume_pane_g_ParamLimits

0xc689,	// (0x0005cb40) bg_popup_window_pane_cp07_ParamLimits

0xc697,	// (0x0005cb4e) blid_firmament_pane

0x6bac,	// (0x00057063) aid_size_cell_gallery_ParamLimits

0x6bac,	// (0x00057063) aid_size_cell_gallery

0x6bc2,	// (0x00057079) grid_gallery_pane_ParamLimits

0x6bc2,	// (0x00057079) grid_gallery_pane

0x6bd6,	// (0x0005708d) cell_gallery_pane_ParamLimits

0x6bd6,	// (0x0005708d) cell_gallery_pane

0xc7b2,	// (0x0005cc69) bg_cell_gallery_focus_pane_ParamLimits

0xc7b2,	// (0x0005cc69) bg_cell_gallery_focus_pane

0xc7c4,	// (0x0005cc7b) cell_gallery_pane_g1_ParamLimits

0xc7c4,	// (0x0005cc7b) cell_gallery_pane_g1

0x6c1d,	// (0x000570d4) cell_gallery_pane_g2_ParamLimits

0x6c1d,	// (0x000570d4) cell_gallery_pane_g2

0x6c2a,	// (0x000570e1) cell_gallery_pane_g3_ParamLimits

0x6c2a,	// (0x000570e1) cell_gallery_pane_g3

0xc7d0,	// (0x0005cc87) cell_gallery_pane_g4_ParamLimits

0xc7d0,	// (0x0005cc87) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x0005fba7) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x0005fba7) cell_gallery_pane_g

0xc7dc,	// (0x0005cc93) bg_cell_gallery_focus_pane_g1

0xc7e4,	// (0x0005cc9b) bg_cell_gallery_focus_pane_g2

0xc7ec,	// (0x0005cca3) bg_cell_gallery_focus_pane_g3

0xc7f4,	// (0x0005ccab) bg_cell_gallery_focus_pane_g4

0xc7fc,	// (0x0005ccb3) bg_cell_gallery_focus_pane_g5

0xc804,	// (0x0005ccbb) bg_cell_gallery_focus_pane_g6

0xc80c,	// (0x0005ccc3) bg_cell_gallery_focus_pane_g7

0xc814,	// (0x0005cccb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x0005fbb0) bg_cell_gallery_focus_pane_g

0xc81c,	// (0x0005ccd3) aid_firma_cardinal

0xc830,	// (0x0005cce7) blid_firmament_pane_t1

0xc847,	// (0x0005ccfe) blid_firmament_pane_t2

0xc85e,	// (0x0005cd15) blid_firmament_pane_t3

0xc875,	// (0x0005cd2c) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x0005fbc1) blid_firmament_pane_t

0xc88c,	// (0x0005cd43) blid_sat_info_pane

0xc89c,	// (0x0005cd53) blid_sat_info_pane_g1

0xc89c,	// (0x0005cd53) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x0005fbca) blid_sat_info_pane_g

0xc8a6,	// (0x0005cd5d) blid_sat_info_pane_t1

0xc8b4,	// (0x0005cd6b) smil2_volume_content_pane

0xc8bd,	// (0x0005cd74) smil2_volume_pane_g1

0xc8c5,	// (0x0005cd7c) smil2_volume_content_pane_g1

0xc8ce,	// (0x0005cd85) smil2_volume_content_pane_g2

0xc8d7,	// (0x0005cd8e) smil2_volume_content_pane_g3

0xc8e0,	// (0x0005cd97) smil2_volume_content_pane_g4

0xc8e9,	// (0x0005cda0) smil2_volume_content_pane_g5

0xc8f2,	// (0x0005cda9) smil2_volume_content_pane_g6

0xc8fb,	// (0x0005cdb2) smil2_volume_content_pane_g7

0xc904,	// (0x0005cdbb) smil2_volume_content_pane_g8

0xc90d,	// (0x0005cdc4) smil2_volume_content_pane_g9

0xc916,	// (0x0005cdcd) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x0005fbcf) smil2_volume_content_pane_g

0x3d99,	// (0x00054250) cale_week_day_heading_pane_t1_ParamLimits

0x3dc3,	// (0x0005427a) cale_week_day_heading_pane_t2_ParamLimits

0x3ded,	// (0x000542a4) cale_week_day_heading_pane_t3_ParamLimits

0x3e17,	// (0x000542ce) cale_week_day_heading_pane_t4_ParamLimits

0x3e41,	// (0x000542f8) cale_week_day_heading_pane_t5_ParamLimits

0x3e6b,	// (0x00054322) cale_week_day_heading_pane_t6_ParamLimits

0x3e95,	// (0x0005434c) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0005f6a8) cale_week_day_heading_pane_t_ParamLimits

0x17d2,	// (0x00051c89) bg_cale_side_pane_ParamLimits

0x3ebf,	// (0x00054376) cale_week_time_pane_t1_ParamLimits

0x3eeb,	// (0x000543a2) cale_week_time_pane_t2_ParamLimits

0x3f17,	// (0x000543ce) cale_week_time_pane_t3_ParamLimits

0x3f43,	// (0x000543fa) cale_week_time_pane_t4_ParamLimits

0x3f6f,	// (0x00054426) cale_week_time_pane_t5_ParamLimits

0x3f9b,	// (0x00054452) cale_week_time_pane_t6_ParamLimits

0x3fc7,	// (0x0005447e) cale_week_time_pane_t7_ParamLimits

0x3ff3,	// (0x000544aa) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0005f6b7) cale_week_time_pane_t_ParamLimits

0x401f,	// (0x000544d6) cell_cale_week_pane_g2_ParamLimits

0x17d2,	// (0x00051c89) bg_cale_side_pane_cp01_ParamLimits

0x4dee,	// (0x000552a5) cale_month_week_pane_t1_ParamLimits

0x4e05,	// (0x000552bc) cale_month_week_pane_t2_ParamLimits

0x4e1c,	// (0x000552d3) cale_month_week_pane_t3_ParamLimits

0x4e33,	// (0x000552ea) cale_month_week_pane_t4_ParamLimits

0x4e4a,	// (0x00055301) cale_month_week_pane_t5_ParamLimits

0x4e61,	// (0x00055318) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0005f790) cale_month_week_pane_t_ParamLimits

0xb20f,	// (0x0005b6c6) cell_cale_month_pane_g1_ParamLimits

0x0eea,	// (0x000513a1) main_cale_event_viewer_pane

0x0eea,	// (0x000513a1) listscroll_cale_event_viewer_pane

0xc91f,	// (0x0005cdd6) list_cale_ev_pane

0xc927,	// (0x0005cdde) scroll_pane_cp023

0x6c37,	// (0x000570ee) field_cale_ev_pane_ParamLimits

0x6c37,	// (0x000570ee) field_cale_ev_pane

0xc933,	// (0x0005cdea) field_cale_ev_content_pane_ParamLimits

0xc933,	// (0x0005cdea) field_cale_ev_content_pane

0xc93f,	// (0x0005cdf6) field_cale_ev_pane_g1_ParamLimits

0xc93f,	// (0x0005cdf6) field_cale_ev_pane_g1

0xc94b,	// (0x0005ce02) field_cale_ev_pane_g2_ParamLimits

0xc94b,	// (0x0005ce02) field_cale_ev_pane_g2

0xc963,	// (0x0005ce1a) field_cale_ev_pane_g3_ParamLimits

0xc963,	// (0x0005ce1a) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x0005fbe4) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x0005fbe4) field_cale_ev_pane_g

0xc97b,	// (0x0005ce32) field_cale_ev_pane_t1_ParamLimits

0xc97b,	// (0x0005ce32) field_cale_ev_pane_t1

0x6c51,	// (0x00057108) field_cale_ev_content_pane_t1_ParamLimits

0x6c51,	// (0x00057108) field_cale_ev_content_pane_t1

0x2356,	// (0x0005280d) bg_button_pane_cp01

0x1798,	// (0x00051c4f) listscroll_cale_week_pane_ParamLimits

0x3bc3,	// (0x0005407a) popup_toolbar_window_cp01

0x17c0,	// (0x00051c77) listscroll_cale_week_pane_t1_ParamLimits

0x1670,	// (0x00051b27) listscroll_cale_day_pane_ParamLimits

0x3bc3,	// (0x0005407a) popup_toolbar_window_cp02

0x17c0,	// (0x00051c77) listscroll_cale_day_pane_t1_ParamLimits

0x1798,	// (0x00051c4f) main_cale_month_pane_ParamLimits

0x626f,	// (0x00056726) popup_toolbar_window_cp03_ParamLimits

0x626f,	// (0x00056726) popup_toolbar_window_cp03

0x5a54,	// (0x00055f0b) main_image_pane_g2_ParamLimits

0x5a54,	// (0x00055f0b) main_image_pane_g2

0x5a65,	// (0x00055f1c) main_image_pane_g3_ParamLimits

0x5a65,	// (0x00055f1c) main_image_pane_g3

0x0002,

0xf50b,	// (0x0005f9c2) main_image_pane_g_ParamLimits

0xf50b,	// (0x0005f9c2) main_image_pane_g

0x2470,	// (0x00052927) main_image_pane_t1_ParamLimits

0x5a76,	// (0x00055f2d) main_image_pane_t2_ParamLimits

0x5a76,	// (0x00055f2d) main_image_pane_t2

0x5a88,	// (0x00055f3f) main_image_pane_t3_ParamLimits

0x5a88,	// (0x00055f3f) main_image_pane_t3

0x5ab0,	// (0x00055f67) main_image_pane_t4_ParamLimits

0x5ab0,	// (0x00055f67) main_image_pane_t4

0x0003,

0xf512,	// (0x0005f9c9) main_image_pane_t_ParamLimits

0xf512,	// (0x0005f9c9) main_image_pane_t

0x5ad0,	// (0x00055f87) popup_image_details_window_cp01

0x5ad8,	// (0x00055f8f) popup_toobar_trans_pane_cp01_ParamLimits

0x5ad8,	// (0x00055f8f) popup_toobar_trans_pane_cp01

0x613c,	// (0x000565f3) popup_image_details_window_ParamLimits

0x613c,	// (0x000565f3) popup_image_details_window

0xc477,	// (0x0005c92e) popup_image_focus_window

0x6521,	// (0x000569d8) camera2_autofocus_pane_ParamLimits

0x6521,	// (0x000569d8) camera2_autofocus_pane

0x0eea,	// (0x000513a1) bg_popup_sub_pane_cp06

0xc992,	// (0x0005ce49) popup_image_focus_window_g1

0xc99a,	// (0x0005ce51) popup_image_focus_window_g2

0xc9a2,	// (0x0005ce59) popup_image_focus_window_g3

0xc9aa,	// (0x0005ce61) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x0005fbeb) popup_image_focus_window_g

0xc9b2,	// (0x0005ce69) popup_image_focus_window_t1

0xc9c0,	// (0x0005ce77) popup_image_focus_window_t2

0xc9cf,	// (0x0005ce86) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x0005fbf4) popup_image_focus_window_t

0xc9dd,	// (0x0005ce94) camera2_autofocus_pane_g1

0x257c,	// (0x00052a33) bg_tb_trans_pane_cp01

0xc9eb,	// (0x0005cea2) popup_image_details_window_g1

0xc9fe,	// (0x0005ceb5) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x0005fc06) popup_image_details_window_g

0xca27,	// (0x0005cede) popup_image_details_window_t1

0xca39,	// (0x0005cef0) popup_image_details_window_t2

0xca52,	// (0x0005cf09) popup_image_details_window_t3

0xca66,	// (0x0005cf1d) popup_image_details_window_t4

0xca81,	// (0x0005cf38) popup_image_details_window_t5

0x0004,

0xf756,	// (0x0005fc0d) popup_image_details_window_t

0x1658,	// (0x00051b0f) bg_calc_paper_pane_ParamLimits

0xb017,	// (0x0005b4ce) grid_highlight_pane_cp013

0xb021,	// (0x0005b4d8) list_calc_pane_ParamLimits

0xb033,	// (0x0005b4ea) scroll_pane_cp024

0x1670,	// (0x00051b27) bg_calc_display_pane_ParamLimits

0xb03b,	// (0x0005b4f2) calc_display_pane_t1_ParamLimits

0xb050,	// (0x0005b507) calc_display_pane_t2_ParamLimits

0xb065,	// (0x0005b51c) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0005f62a) calc_display_pane_t_ParamLimits

0x3af4,	// (0x00053fab) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0005f647) cell_calc_pane_g

0x3afd,	// (0x00053fb4) cell_calc_pane_t1

0x16cf,	// (0x00051b86) grid_highlight_pane_cp02_ParamLimits

0x16e5,	// (0x00051b9c) toolbar_button_pane_cp01_ParamLimits

0x16e5,	// (0x00051b9c) toolbar_button_pane_cp01

0x24b5,	// (0x0005296c) temp_image_control_pane_ParamLimits

0x24b5,	// (0x0005296c) temp_image_control_pane

0x257c,	// (0x00052a33) main_mp3_pane

0xca9b,	// (0x0005cf52) temp_image_control_pane_g1_ParamLimits

0xca9b,	// (0x0005cf52) temp_image_control_pane_g1

0xcaa9,	// (0x0005cf60) temp_image_control_pane_g2_ParamLimits

0xcaa9,	// (0x0005cf60) temp_image_control_pane_g2

0xcabb,	// (0x0005cf72) temp_image_control_pane_g3_ParamLimits

0xcabb,	// (0x0005cf72) temp_image_control_pane_g3

0x6c9e,	// (0x00057155) temp_image_control_pane_g4_ParamLimits

0x6c9e,	// (0x00057155) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x0005fc18) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x0005fc18) temp_image_control_pane_g

0xca9b,	// (0x0005cf52) main_mp3_pane_g1

0x6caf,	// (0x00057166) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x0005fc21) main_mp3_pane_g

0xcafe,	// (0x0005cfb5) main_mp3_pane_t1

0x1841,	// (0x00051cf8) main_camera_pane_g8_ParamLimits

0x1841,	// (0x00051cf8) main_camera_pane_g8

0x42b4,	// (0x0005476b) main_video_pane_g7_ParamLimits

0x42b4,	// (0x0005476b) main_video_pane_g7

0xec32,	// (0x0005f0e9) main_camera2_pane_t7_ParamLimits

0xec32,	// (0x0005f0e9) main_camera2_pane_t7

0x1996,	// (0x00051e4d) scroll_pane_cp025_ParamLimits

0x1996,	// (0x00051e4d) scroll_pane_cp025

0x19aa,	// (0x00051e61) scroll_pane_cp026_ParamLimits

0x19aa,	// (0x00051e61) scroll_pane_cp026

0x19b9,	// (0x00051e70) wml_content_pane_ParamLimits

0x0eea,	// (0x000513a1) main_touch_calib_pane

0x6d66,	// (0x0005721d) main_touch_calib_pane_g1

0x6d72,	// (0x00057229) main_touch_calib_pane_g2

0x6d7e,	// (0x00057235) main_touch_calib_pane_g3

0x6d8a,	// (0x00057241) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x0005fc3f) main_touch_calib_pane_g

0x6d96,	// (0x0005724d) main_touch_calib_pane_t1

0x6dae,	// (0x00057265) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x0005fc48) main_touch_calib_pane_t

0x20df,	// (0x00052596) mup_progress_pane_cp02

0x20fe,	// (0x000525b5) navi_pane_g1

0x217e,	// (0x00052635) navi_pane_mp_t3

0x257c,	// (0x00052a33) main_mp3_pane_ParamLimits

0x62a9,	// (0x00056760) navi_pane_ParamLimits

0xca9b,	// (0x0005cf52) main_mp3_pane_g1_ParamLimits

0x6caf,	// (0x00057166) main_mp3_pane_g2_ParamLimits

0x6cbb,	// (0x00057172) main_mp3_pane_g3_ParamLimits

0x6cbb,	// (0x00057172) main_mp3_pane_g3

0x6cc7,	// (0x0005717e) main_mp3_pane_g4_ParamLimits

0x6cc7,	// (0x0005717e) main_mp3_pane_g4

0xcacb,	// (0x0005cf82) main_mp3_pane_g5_ParamLimits

0xcacb,	// (0x0005cf82) main_mp3_pane_g5

0xcad9,	// (0x0005cf90) main_mp3_pane_g6_ParamLimits

0xcad9,	// (0x0005cf90) main_mp3_pane_g6

0xcae6,	// (0x0005cf9d) main_mp3_pane_g7_ParamLimits

0xcae6,	// (0x0005cf9d) main_mp3_pane_g7

0xcaf2,	// (0x0005cfa9) main_mp3_pane_g8_ParamLimits

0xcaf2,	// (0x0005cfa9) main_mp3_pane_g8

0xf76a,	// (0x0005fc21) main_mp3_pane_g_ParamLimits

0x6cd3,	// (0x0005718a) main_mp3_pane_t2

0x6ce1,	// (0x00057198) main_mp3_pane_t3

0xcb0c,	// (0x0005cfc3) main_mp3_pane_t4

0xcb1a,	// (0x0005cfd1) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x0005fc32) main_mp3_pane_t

0xcb28,	// (0x0005cfdf) mup_progress_pane_cp01

0xb007,	// (0x0005b4be) aid_zoom_text_secondary2

0xc91f,	// (0x0005cdd6) list_cale_ev2_pane

0xc927,	// (0x0005cdde) scroll_pane_cp023_ParamLimits

0x6dfc,	// (0x000572b3) field_cale_ev2_pane_ParamLimits

0x6dfc,	// (0x000572b3) field_cale_ev2_pane

0xcb30,	// (0x0005cfe7) field_cale_ev2_pane_g1_ParamLimits

0xcb30,	// (0x0005cfe7) field_cale_ev2_pane_g1

0xcb3c,	// (0x0005cff3) field_cale_ev2_pane_g2_ParamLimits

0xcb3c,	// (0x0005cff3) field_cale_ev2_pane_g2

0xcb54,	// (0x0005d00b) field_cale_ev2_pane_g3_ParamLimits

0xcb54,	// (0x0005d00b) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x0005fc53) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x0005fc53) field_cale_ev2_pane_g

0xcb78,	// (0x0005d02f) field_cale_ev2_pane_t1_ParamLimits

0xcb78,	// (0x0005d02f) field_cale_ev2_pane_t1

0xcb8f,	// (0x0005d046) field_cale_ev2_pane_t2_ParamLimits

0xcb8f,	// (0x0005d046) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x0005fc5c) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x0005fc5c) field_cale_ev2_pane_t

0x590f,	// (0x00055dc6) main_postcard_pane_g5_ParamLimits

0x590f,	// (0x00055dc6) main_postcard_pane_g5

0x5923,	// (0x00055dda) main_postcard_pane_g6_ParamLimits

0x5923,	// (0x00055dda) main_postcard_pane_g6

0x4096,	// (0x0005454d) camera2_autofocus_pane_cp_ParamLimits

0x4096,	// (0x0005454d) camera2_autofocus_pane_cp

0x257c,	// (0x00052a33) main_mup3_pane

0x6e34,	// (0x000572eb) main_mup3_pane_g1_ParamLimits

0x6e34,	// (0x000572eb) main_mup3_pane_g1

0x6e56,	// (0x0005730d) main_mup3_pane_g2_ParamLimits

0x6e56,	// (0x0005730d) main_mup3_pane_g2

0x6ebe,	// (0x00057375) main_mup3_pane_g3_ParamLimits

0x6ebe,	// (0x00057375) main_mup3_pane_g3

0x6efc,	// (0x000573b3) main_mup3_pane_g4_ParamLimits

0x6efc,	// (0x000573b3) main_mup3_pane_g4

0x6f3a,	// (0x000573f1) main_mup3_pane_g5_ParamLimits

0x6f3a,	// (0x000573f1) main_mup3_pane_g5

0x6f78,	// (0x0005742f) main_mup3_pane_g6_ParamLimits

0x6f78,	// (0x0005742f) main_mup3_pane_g6

0xcba4,	// (0x0005d05b) main_mup3_pane_g7_ParamLimits

0xcba4,	// (0x0005d05b) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x0005fc6c) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x0005fc6c) main_mup3_pane_g

0x6fee,	// (0x000574a5) main_mup3_pane_t1_ParamLimits

0x6fee,	// (0x000574a5) main_mup3_pane_t1

0x7056,	// (0x0005750d) main_mup3_pane_t2_ParamLimits

0x7056,	// (0x0005750d) main_mup3_pane_t2

0x711e,	// (0x000575d5) main_mup3_pane_t4_ParamLimits

0x711e,	// (0x000575d5) main_mup3_pane_t4

0x716c,	// (0x00057623) main_mup3_pane_t5_ParamLimits

0x716c,	// (0x00057623) main_mup3_pane_t5

0x721a,	// (0x000576d1) main_mup3_pane_t6_ParamLimits

0x721a,	// (0x000576d1) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x0005fc7d) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x0005fc7d) main_mup3_pane_t

0x72ce,	// (0x00057785) mup3_progress_pane_ParamLimits

0x72ce,	// (0x00057785) mup3_progress_pane

0x732a,	// (0x000577e1) popup_mup3_control_window_ParamLimits

0x732a,	// (0x000577e1) popup_mup3_control_window

0xcbb2,	// (0x0005d069) popup_mup3_text_window

0x7358,	// (0x0005780f) mup3_progress_pane_t1

0x736e,	// (0x00057825) mup3_progress_pane_t2

0xcbba,	// (0x0005d071) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x0005fc8a) mup3_progress_pane_t

0xcbd1,	// (0x0005d088) mup_progress_pane_cp03

0x0eea,	// (0x000513a1) bg_tb_trans_pane_cp04

0x7384,	// (0x0005783b) mup3_volume_pane

0x738c,	// (0x00057843) popup_mup3_control_window_g1

0x7395,	// (0x0005784c) mup3_volume_pane_g1

0x739e,	// (0x00057855) mup3_volume_pane_g2

0x73a7,	// (0x0005785e) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x0005fc91) mup3_volume_pane_g

0x0eea,	// (0x000513a1) bg_tb_trans_pane_cp03

0xcbe1,	// (0x0005d098) popup_mup3_text_window_g1

0xcbe9,	// (0x0005d0a0) popup_mup3_text_window_t1

0x16b8,	// (0x00051b6f) list_calc_item_pane_g1_ParamLimits

0xc5ef,	// (0x0005caa6) mup_volume_pane_cp_g1

0x6dc6,	// (0x0005727d) main_touch_calib_pane_t3

0x6dd8,	// (0x0005728f) main_touch_calib_pane_t4

0x6dea,	// (0x000572a1) main_touch_calib_pane_t5

0x0ef4,	// (0x000513ab) aid_cell_size_toolbar2

0x0efc,	// (0x000513b3) aid_popup3_width_pane

0xafff,	// (0x0005b4b6) aid_zoom_text_msg_primary

0xb12f,	// (0x0005b5e6) vorec_t7

0x167c,	// (0x00051b33) bg_calc_paper_pane_g1_ParamLimits

0x1688,	// (0x00051b3f) bg_calc_paper_pane_g2_ParamLimits

0x1694,	// (0x00051b4b) bg_calc_paper_pane_g3_ParamLimits

0x16a0,	// (0x00051b57) bg_calc_paper_pane_g4_ParamLimits

0x16ac,	// (0x00051b63) bg_calc_paper_pane_g5_ParamLimits

0x3a8e,	// (0x00053f45) bg_calc_paper_pane_g6_ParamLimits

0x3a9d,	// (0x00053f54) bg_calc_paper_pane_g7_ParamLimits

0x3aac,	// (0x00053f63) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0005f631) bg_calc_paper_pane_g_ParamLimits

0x3abb,	// (0x00053f72) calc_bg_paper_pane_g9_ParamLimits

0x41ca,	// (0x00054681) image_qvga_pane_ParamLimits

0x41ca,	// (0x00054681) image_qvga_pane

0x15a1,	// (0x00051a58) bg_popup_sub_pane_cp04_ParamLimits

0x23ec,	// (0x000528a3) popup_mup_playback_window_g1_ParamLimits

0x23f8,	// (0x000528af) popup_mup_playback_window_t1_ParamLimits

0x240d,	// (0x000528c4) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0005f9bd) popup_mup_playback_window_t_ParamLimits

0x6938,	// (0x00056def) main_mup2_pane_g3_ParamLimits

0x6938,	// (0x00056def) main_mup2_pane_g3

0x44e8,	// (0x0005499f) popup_toolbar_window_cp04

0xb62f,	// (0x0005bae6) popup_call2_audio_second_window_g3_ParamLimits

0xb62f,	// (0x0005bae6) popup_call2_audio_second_window_g3

0xba39,	// (0x0005bef0) popup_call2_audio_first_window_g4_ParamLimits

0xba39,	// (0x0005bef0) popup_call2_audio_first_window_g4

0xc0b8,	// (0x0005c56f) popup_call2_audio_in_window_g4_ParamLimits

0xc0b8,	// (0x0005c56f) popup_call2_audio_in_window_g4

0x5a36,	// (0x00055eed) aid_area_sk_bg_cut_ParamLimits

0x5a36,	// (0x00055eed) aid_area_sk_bg_cut

0x2422,	// (0x000528d9) aid_area_sk_bg_cut_2_ParamLimits

0x2422,	// (0x000528d9) aid_area_sk_bg_cut_2

0x6c0d,	// (0x000570c4) aid_placing_details_win

0x6c15,	// (0x000570cc) aid_placing_details_win_2

0xc9dd,	// (0x0005ce94) camera2_autofocus_pane_g1_ParamLimits

0x3704,	// (0x00053bbb) popup_fixed_preview_cale_window_ParamLimits

0x3704,	// (0x00053bbb) popup_fixed_preview_cale_window

0x21fe,	// (0x000526b5) navi_slider_pane_g3

0x2207,	// (0x000526be) navi_slider_pane_g4

0x2210,	// (0x000526c7) navi_slider_pane_g5

0x21fe,	// (0x000526b5) navi_slider_pane_g6

0xb34f,	// (0x0005b806) navi_slider_pane_g7

0x2323,	// (0x000527da) mup_scale_pane_g3

0x232c,	// (0x000527e3) mup_scale_pane_g4

0x2335,	// (0x000527ec) mup_scale_pane_g5

0x576a,	// (0x00055c21) mup_scale_pane_g6

0x5773,	// (0x00055c2a) mup_scale_pane_g7

0x21fe,	// (0x000526b5) cams2_slider_pane_g3

0xc679,	// (0x0005cb30) cams2_slider_pane_g4

0xec98,	// (0x0005f14f) cams2_slider_pane_g5

0x21fe,	// (0x000526b5) cams2_slider_pane_g6

0xeca0,	// (0x0005f157) cams2_slider_pane_g7

0xc89c,	// (0x0005cd53) camera2_autofocus_pane_cp_g1

0xcbf7,	// (0x0005d0ae) bg_popup_preview_window_pane_cp02_ParamLimits

0xcbf7,	// (0x0005d0ae) bg_popup_preview_window_pane_cp02

0x73b0,	// (0x00057867) list_fp_cale_pane_ParamLimits

0x73b0,	// (0x00057867) list_fp_cale_pane

0xcc03,	// (0x0005d0ba) popup_fixed_preview_cale_window_t1_ParamLimits

0xcc03,	// (0x0005d0ba) popup_fixed_preview_cale_window_t1

0x73bc,	// (0x00057873) popup_fixed_preview_cale_window_t2_ParamLimits

0x73bc,	// (0x00057873) popup_fixed_preview_cale_window_t2

0x73d1,	// (0x00057888) popup_fixed_preview_cale_window_t3_ParamLimits

0x73d1,	// (0x00057888) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x0005fc98) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x0005fc98) popup_fixed_preview_cale_window_t

0x73e6,	// (0x0005789d) list_single_fp_cale_pane_ParamLimits

0x73e6,	// (0x0005789d) list_single_fp_cale_pane

0x73fa,	// (0x000578b1) list_single_fp_cale_pane_g1_ParamLimits

0x73fa,	// (0x000578b1) list_single_fp_cale_pane_g1

0xcc21,	// (0x0005d0d8) list_single_fp_cale_pane_g2_ParamLimits

0xcc21,	// (0x0005d0d8) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x0005fc9f) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x0005fc9f) list_single_fp_cale_pane_g

0x7406,	// (0x000578bd) list_single_fp_cale_pane_t1_ParamLimits

0x7406,	// (0x000578bd) list_single_fp_cale_pane_t1

0x7418,	// (0x000578cf) list_single_fp_cale_pane_t2_ParamLimits

0x7418,	// (0x000578cf) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x0005fca6) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x0005fca6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0eea,	// (0x000513a1) main_dialer_pane

0x744b,	// (0x00057902) aid_cell_size_keypad

0x7455,	// (0x0005790c) dialer_ne_pane

0x745d,	// (0x00057914) grid_dialer_command_1_pane

0x7465,	// (0x0005791c) grid_dialer_command_2_pane

0x746d,	// (0x00057924) grid_dialer_keypad_pane

0x747d,	// (0x00057934) bg_popup_call_pane_cp06_ParamLimits

0x747d,	// (0x00057934) bg_popup_call_pane_cp06

0x7489,	// (0x00057940) dialer_ne_clear_pane_ParamLimits

0x7489,	// (0x00057940) dialer_ne_clear_pane

0xcc3a,	// (0x0005d0f1) dialer_ne_pane_g1

0xcc42,	// (0x0005d0f9) dialer_ne_pane_t1_ParamLimits

0xcc42,	// (0x0005d0f9) dialer_ne_pane_t1

0x7495,	// (0x0005794c) dialer_ne_pane_t2_ParamLimits

0x7495,	// (0x0005794c) dialer_ne_pane_t2

0x74bf,	// (0x00057976) dialer_ne_pane_t3_ParamLimits

0x74bf,	// (0x00057976) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x0005fcab) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x0005fcab) dialer_ne_pane_t

0x74ef,	// (0x000579a6) dialer_ne_pane_t3_copy1_ParamLimits

0x74ef,	// (0x000579a6) dialer_ne_pane_t3_copy1

0x751e,	// (0x000579d5) cell_dialer_keypad_pane_ParamLimits

0x751e,	// (0x000579d5) cell_dialer_keypad_pane

0x7533,	// (0x000579ea) cell_dialer_command_1_pane_ParamLimits

0x7533,	// (0x000579ea) cell_dialer_command_1_pane

0x7549,	// (0x00057a00) cell_dialer_command_2_pane_ParamLimits

0x7549,	// (0x00057a00) cell_dialer_command_2_pane

0xcc54,	// (0x0005d10b) bg_button_pane_cp02_ParamLimits

0xcc54,	// (0x0005d10b) bg_button_pane_cp02

0x7558,	// (0x00057a0f) cell_dialer_keypad_pane_g1_ParamLimits

0x7558,	// (0x00057a0f) cell_dialer_keypad_pane_g1

0xcc54,	// (0x0005d10b) bg_button_pane_cp03_ParamLimits

0xcc54,	// (0x0005d10b) bg_button_pane_cp03

0x756d,	// (0x00057a24) cell_dialer_command_1_pane_g1_ParamLimits

0x756d,	// (0x00057a24) cell_dialer_command_1_pane_g1

0xcc60,	// (0x0005d117) bg_button_pane_cp04

0x7581,	// (0x00057a38) cell_dialer_command_2_pane_g1

0x21ed,	// (0x000526a4) bg_button_pane_cp06

0xcc68,	// (0x0005d11f) dialer_ne_clear_pane_g1

0x210a,	// (0x000525c1) navi_pane_g2

0x536f,	// (0x00055826) navi_pane_g3

0x0002,

0xf409,	// (0x0005f8c0) navi_pane_g

0x218c,	// (0x00052643) navi_pane_mv_g2

0x21b4,	// (0x0005266b) navi_pane_mv_g5

0x5394,	// (0x0005584b) navi_pane_mv_t1

0x1670,	// (0x00051b27) main_clock2_pane

0x75b8,	// (0x00057a6f) main_clock2_list_pane_ParamLimits

0x75b8,	// (0x00057a6f) main_clock2_list_pane

0x75ea,	// (0x00057aa1) main_clock2_pane_t1_ParamLimits

0x75ea,	// (0x00057aa1) main_clock2_pane_t1

0x7621,	// (0x00057ad8) main_clock2_pane_t2_ParamLimits

0x7621,	// (0x00057ad8) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x0005fcb2) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x0005fcb2) main_clock2_pane_t

0x76a3,	// (0x00057b5a) popup_clock_analogue_window_cp03_ParamLimits

0x76a3,	// (0x00057b5a) popup_clock_analogue_window_cp03

0x76c6,	// (0x00057b7d) popup_clock_digital_window_cp02_ParamLimits

0x76c6,	// (0x00057b7d) popup_clock_digital_window_cp02

0x7737,	// (0x00057bee) main_clock2_list_single_pane_ParamLimits

0x7737,	// (0x00057bee) main_clock2_list_single_pane

0x21ed,	// (0x000526a4) list_highlight_pane_cp05

0xcc70,	// (0x0005d127) main_clock2_list_single_pane_t1

0x44e8,	// (0x0005499f) popup_toolbar_window_cp04_ParamLimits

0x6c6e,	// (0x00057125) camera2_autofocus_pane_g2_ParamLimits

0x6c6e,	// (0x00057125) camera2_autofocus_pane_g2

0x6c7a,	// (0x00057131) camera2_autofocus_pane_g3_ParamLimits

0x6c7a,	// (0x00057131) camera2_autofocus_pane_g3

0x6c86,	// (0x0005713d) camera2_autofocus_pane_g4_ParamLimits

0x6c86,	// (0x0005713d) camera2_autofocus_pane_g4

0x6c92,	// (0x00057149) camera2_autofocus_pane_g5_ParamLimits

0x6c92,	// (0x00057149) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x0005fbfb) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x0005fbfb) camera2_autofocus_pane_g

0x6e14,	// (0x000572cb) camera2_autofocus_pane_cp_g2

0x6e1c,	// (0x000572d3) camera2_autofocus_pane_cp_g3

0x6e24,	// (0x000572db) camera2_autofocus_pane_cp_g4

0x6e2c,	// (0x000572e3) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x0005fc61) camera2_autofocus_pane_cp_g

0x7475,	// (0x0005792c) popup_dialer_spcha_window

0x0eea,	// (0x000513a1) bg_popup_sub_pane_cp07

0xcc7e,	// (0x0005d135) list_spcha_pane

0xcc86,	// (0x0005d13d) list_single_spcha_pane_ParamLimits

0xcc86,	// (0x0005d13d) list_single_spcha_pane

0x0eea,	// (0x000513a1) list_highlight_pane_cp06

0xcc97,	// (0x0005d14e) list_single_spcha_pane_t1

0xbe62,	// (0x0005c319) popup_call2_audio_out_window_g4_ParamLimits

0xbe62,	// (0x0005c319) popup_call2_audio_out_window_g4

0x0eea,	// (0x000513a1) main_imed2_pane

0xc47f,	// (0x0005c936) popup_imed_adjust2_window

0x6152,	// (0x00056609) popup_imed_trans_window_ParamLimits

0x6152,	// (0x00056609) popup_imed_trans_window

0xc6e0,	// (0x0005cb97) popup_blid_sat_info2_window_t1

0xc6ee,	// (0x0005cba5) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x0005fb90) popup_blid_sat_info2_window_t

0x77e1,	// (0x00057c98) aid_size_cell_colour_35

0x7801,	// (0x00057cb8) aid_size_cell_colour_112

0x7821,	// (0x00057cd8) aid_size_cell_effect

0xc459,	// (0x0005c910) bg_tb_trans_pane_cp02

0x1ccc,	// (0x00052183) heading_imed_pane

0x7841,	// (0x00057cf8) listscroll_imed_pane

0xcca5,	// (0x0005d15c) heading_imed_pane_g1

0xccad,	// (0x0005d164) heading_imed_pane_t1

0xccbb,	// (0x0005d172) grid_imed_colour_35_pane_ParamLimits

0xccbb,	// (0x0005d172) grid_imed_colour_35_pane

0x784d,	// (0x00057d04) grid_imed_effect_pane

0xccce,	// (0x0005d185) list_imed_aspect_pane

0x7860,	// (0x00057d17) scroll_pane_cp027_ParamLimits

0x7860,	// (0x00057d17) scroll_pane_cp027

0x786c,	// (0x00057d23) cell_imed_effect_pane_ParamLimits

0x786c,	// (0x00057d23) cell_imed_effect_pane

0xccd6,	// (0x0005d18d) cell_imed_colour_pane_ParamLimits

0xccd6,	// (0x0005d18d) cell_imed_colour_pane

0xcd10,	// (0x0005d1c7) cell_imed_colour_pane_g1_ParamLimits

0xcd10,	// (0x0005d1c7) cell_imed_colour_pane_g1

0xcd21,	// (0x0005d1d8) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd21,	// (0x0005d1d8) hgihlgiht_grid_pane_cp016

0x7891,	// (0x00057d48) cell_imed_effect_pane_g1

0x7899,	// (0x00057d50) grid_highlight_pane_cp017

0xcd32,	// (0x0005d1e9) list_imed_single_pane_ParamLimits

0xcd32,	// (0x0005d1e9) list_imed_single_pane

0x0eea,	// (0x000513a1) list_highlight_pane_cp07

0xcd45,	// (0x0005d1fc) list_imed_aspect_pane_comp1_t1

0xc459,	// (0x0005c910) bg_tb_trans_pane_cp05

0xcd65,	// (0x0005d21c) popup_imed_adjust2_window_g1

0xcd8c,	// (0x0005d243) popup_imed_adjust2_window_t1

0xcda4,	// (0x0005d25b) slider_imed_adjust_pane

0xcdb8,	// (0x0005d26f) slider_imed_adjust_pane_g1

0xcdc8,	// (0x0005d27f) slider_imed_adjust_pane_g2

0xcdd8,	// (0x0005d28f) slider_imed_adjust_pane_g3

0xcde9,	// (0x0005d2a0) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x0005fccf) slider_imed_adjust_pane_g

0x78a2,	// (0x00057d59) aid_size_cell_clipart2

0x78ae,	// (0x00057d65) grid_imed_clipart_pane

0xcdfa,	// (0x0005d2b1) scroll_pane_cp031

0x78b8,	// (0x00057d6f) cell_imed_clipart_pane_ParamLimits

0x78b8,	// (0x00057d6f) cell_imed_clipart_pane

0x78d0,	// (0x00057d87) cell_imed_clipart_pane_g1

0x0eea,	// (0x000513a1) grid_highlight_pane_cp014

0x75cb,	// (0x00057a82) main_clock2_pane_g1_ParamLimits

0x75cb,	// (0x00057a82) main_clock2_pane_g1

0x76e2,	// (0x00057b99) aid_call2_pane_cp10

0x76f4,	// (0x00057bab) aid_call_pane_cp10

0x20ba,	// (0x00052571) popup_clock_analogue_window_cp10_g1

0x20ba,	// (0x00052571) popup_clock_analogue_window_cp10_g2

0x7706,	// (0x00057bbd) popup_clock_analogue_window_cp10_g3

0x7706,	// (0x00057bbd) popup_clock_analogue_window_cp10_g4

0x20ba,	// (0x00052571) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x0005fcbd) popup_clock_analogue_window_cp10_g

0x7718,	// (0x00057bcf) popup_clock_analogue_window_cp10_t1

0x7749,	// (0x00057c00) clock_digital_number_pane_cp10_ParamLimits

0x7749,	// (0x00057c00) clock_digital_number_pane_cp10

0x7761,	// (0x00057c18) clock_digital_number_pane_cp11_ParamLimits

0x7761,	// (0x00057c18) clock_digital_number_pane_cp11

0x7779,	// (0x00057c30) clock_digital_number_pane_cp12_ParamLimits

0x7779,	// (0x00057c30) clock_digital_number_pane_cp12

0x7791,	// (0x00057c48) clock_digital_number_pane_cp13_ParamLimits

0x7791,	// (0x00057c48) clock_digital_number_pane_cp13

0x77a9,	// (0x00057c60) clock_digital_separator_pane_cp10_ParamLimits

0x77a9,	// (0x00057c60) clock_digital_separator_pane_cp10

0x77c1,	// (0x00057c78) popup_clock_digital_window_cp02_t1_ParamLimits

0x77c1,	// (0x00057c78) popup_clock_digital_window_cp02_t1

0x1599,	// (0x00051a50) clock_digital_number_pane_cp10_g1

0x1599,	// (0x00051a50) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x0005fcd8) clock_digital_number_pane_cp10_g

0x1599,	// (0x00051a50) clock_digital_separator_pane_cp10_g1

0x1599,	// (0x00051a50) clock_digital_separator_pane_g2_cp10

0x21bd,	// (0x00052674) navi_pane_vded_g4

0x21c6,	// (0x0005267d) navi_pane_vded_g5

0x21cf,	// (0x00052686) navi_pane_vded_t1

0x0eea,	// (0x000513a1) main_vded_pane

0x78d9,	// (0x00057d90) main_vded_pane_g1

0x78e3,	// (0x00057d9a) main_vded_pane_g2

0x78eb,	// (0x00057da2) main_vded_pane_g3

0x0002,

0xf826,	// (0x0005fcdd) main_vded_pane_g

0x78f3,	// (0x00057daa) main_vded_pane_t1

0x7901,	// (0x00057db8) main_vded_pane_t2

0x0001,

0xf82d,	// (0x0005fce4) main_vded_pane_t

0x790f,	// (0x00057dc6) vded_slider_pane

0x7917,	// (0x00057dce) vded_video_pane

0xce02,	// (0x0005d2b9) vded_video_pane_g1

0x791f,	// (0x00057dd6) vded_video_pane_g2

0xc89c,	// (0x0005cd53) vded_video_pane_g3

0x0002,

0xf832,	// (0x0005fce9) vded_video_pane_g

0xce0c,	// (0x0005d2c3) vded_slider_pane_g1

0xc5ef,	// (0x0005caa6) vded_slider_pane_g2

0xce15,	// (0x0005d2cc) vded_slider_pane_g3

0xce1e,	// (0x0005d2d5) vded_slider_pane_g4

0xce27,	// (0x0005d2de) vded_slider_pane_g5

0x0004,

0xf839,	// (0x0005fcf0) vded_slider_pane_g

0x7314,	// (0x000577cb) mup3_rocker_pane_ParamLimits

0x7314,	// (0x000577cb) mup3_rocker_pane

0x7928,	// (0x00057ddf) mup3_control_keys_pane_g1

0x7930,	// (0x00057de7) mup3_control_keys_pane_g2

0x7938,	// (0x00057def) mup3_control_keys_pane_g3

0x7940,	// (0x00057df7) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x0005fcfb) mup3_control_keys_pane_g

0x3737,	// (0x00053bee) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3737,	// (0x00053bee) popup_toolbar2_fixed_window_cp01

0x7342,	// (0x000577f9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7342,	// (0x000577f9) popup_toolbar2_fixed_window_cp02

0xb7a1,	// (0x0005bc58) popup_call2_audio_second_window_t4_ParamLimits

0xb7a1,	// (0x0005bc58) popup_call2_audio_second_window_t4

0xbccf,	// (0x0005c186) popup_call2_audio_first_window_t6_ParamLimits

0xbccf,	// (0x0005c186) popup_call2_audio_first_window_t6

0xbf65,	// (0x0005c41c) popup_call2_audio_out_window_t6_ParamLimits

0xbf65,	// (0x0005c41c) popup_call2_audio_out_window_t6

0x0eea,	// (0x000513a1) main_vitu_pane

0x7950,	// (0x00057e07) aid_size_cell_itu_ParamLimits

0x7950,	// (0x00057e07) aid_size_cell_itu

0x257c,	// (0x00052a33) bg_popup_window_pane_cp08_ParamLimits

0x257c,	// (0x00052a33) bg_popup_window_pane_cp08

0x7966,	// (0x00057e1d) field_vitu_entry_pane_ParamLimits

0x7966,	// (0x00057e1d) field_vitu_entry_pane

0x7979,	// (0x00057e30) grid_vitu_function_pane_ParamLimits

0x7979,	// (0x00057e30) grid_vitu_function_pane

0x798e,	// (0x00057e45) grid_vitu_itu_pane_ParamLimits

0x798e,	// (0x00057e45) grid_vitu_itu_pane

0x79a4,	// (0x00057e5b) cell_vitu_itu_pane_ParamLimits

0x79a4,	// (0x00057e5b) cell_vitu_itu_pane

0x79c6,	// (0x00057e7d) cell_vitu_function_pane_ParamLimits

0x79c6,	// (0x00057e7d) cell_vitu_function_pane

0x257c,	// (0x00052a33) bg_popup_sub_pane_cp08_ParamLimits

0x257c,	// (0x00052a33) bg_popup_sub_pane_cp08

0x79df,	// (0x00057e96) field_vitu_entry_pane_t1_ParamLimits

0x79df,	// (0x00057e96) field_vitu_entry_pane_t1

0xce48,	// (0x0005d2ff) field_vitu_entry_pane_t2_ParamLimits

0xce48,	// (0x0005d2ff) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x0005fd09) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x0005fd09) field_vitu_entry_pane_t

0xce65,	// (0x0005d31c) bg_button_pane_cp05_ParamLimits

0xce65,	// (0x0005d31c) bg_button_pane_cp05

0x79fb,	// (0x00057eb2) cell_vitu_itu_pane_g1

0x7a13,	// (0x00057eca) cell_vitu_itu_pane_t1_ParamLimits

0x7a13,	// (0x00057eca) cell_vitu_itu_pane_t1

0x7a25,	// (0x00057edc) cell_vitu_itu_pane_t2_ParamLimits

0x7a25,	// (0x00057edc) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x0005fd0e) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x0005fd0e) cell_vitu_itu_pane_t

0xce73,	// (0x0005d32a) bg_button_pane_cp07

0x7a5a,	// (0x00057f11) cell_vitu_function_pane_g1

0xb00f,	// (0x0005b4c6) main_calc_pane_g1

0x359b,	// (0x00053a52) aid_visual_content_pane

0x0eea,	// (0x000513a1) main_vradio_pane

0x7a63,	// (0x00057f1a) main_vradio_pane_g1_ParamLimits

0x7a63,	// (0x00057f1a) main_vradio_pane_g1

0xce7d,	// (0x0005d334) main_vradio_pane_g2_ParamLimits

0xce7d,	// (0x0005d334) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x0005fd15) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x0005fd15) main_vradio_pane_g

0x7a79,	// (0x00057f30) main_vradio_pane_t1_ParamLimits

0x7a79,	// (0x00057f30) main_vradio_pane_t1

0x7a8e,	// (0x00057f45) main_vradio_pane_t2_ParamLimits

0x7a8e,	// (0x00057f45) main_vradio_pane_t2

0xce8a,	// (0x0005d341) main_vradio_pane_t3_ParamLimits

0xce8a,	// (0x0005d341) main_vradio_pane_t3

0x0002,

0xf863,	// (0x0005fd1a) main_vradio_pane_t_ParamLimits

0xf863,	// (0x0005fd1a) main_vradio_pane_t

0x7aa3,	// (0x00057f5a) vradio_rocker_control_pane_ParamLimits

0x7aa3,	// (0x00057f5a) vradio_rocker_control_pane

0x7ab5,	// (0x00057f6c) vradio_station_info_pane_ParamLimits

0x7ab5,	// (0x00057f6c) vradio_station_info_pane

0xce9c,	// (0x0005d353) vradio_frequency_info_pane_ParamLimits

0xce9c,	// (0x0005d353) vradio_frequency_info_pane

0xc89c,	// (0x0005cd53) vradio_station_info_pane_g1

0xceab,	// (0x0005d362) vradio_station_info_pane_t1_ParamLimits

0xceab,	// (0x0005d362) vradio_station_info_pane_t1

0xcecd,	// (0x0005d384) vradio_station_info_pane_t2_ParamLimits

0xcecd,	// (0x0005d384) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x0005fd21) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x0005fd21) vradio_station_info_pane_t

0xcedf,	// (0x0005d396) vradio_tuning_pane

0xcee7,	// (0x0005d39e) vradio_rocker_control_pane_g1

0xceef,	// (0x0005d3a6) vradio_rocker_control_pane_g2

0xcef7,	// (0x0005d3ae) vradio_rocker_control_pane_g3

0xceff,	// (0x0005d3b6) vradio_rocker_control_pane_g4

0xcf07,	// (0x0005d3be) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x0005fd26) vradio_rocker_control_pane_g

0x7ac5,	// (0x00057f7c) vradio_frequency_info_pane_g1

0xcf0f,	// (0x0005d3c6) vradio_frequency_info_pane_t1_ParamLimits

0xcf0f,	// (0x0005d3c6) vradio_frequency_info_pane_t1

0x7acf,	// (0x00057f86) vradio_tuning_pane_g1

0x7ad8,	// (0x00057f8f) vradio_tuning_pane_t1

0x0f0c,	// (0x000513c3) area_side_right_pane_ParamLimits

0x0f0c,	// (0x000513c3) area_side_right_pane

0xc420,	// (0x0005c8d7) status_small_pane_g1

0xc428,	// (0x0005c8df) status_small_pane_g2

0xc431,	// (0x0005c8e8) status_small_pane_g3

0xc43a,	// (0x0005c8f1) status_small_pane_g4

0x0003,

0xf62f,	// (0x0005fae6) status_small_pane_g

0xc443,	// (0x0005c8fa) status_small_pane_t1

0x0eea,	// (0x000513a1) main_video3_pane

0xcf23,	// (0x0005d3da) cams_zoom_vslider_pane

0xcf2b,	// (0x0005d3e2) image3_wide_pane_ParamLimits

0xcf2b,	// (0x0005d3e2) image3_wide_pane

0xcf45,	// (0x0005d3fc) image3_wide_small_pane

0xcf4f,	// (0x0005d406) main_video3_pane_g1_ParamLimits

0xcf4f,	// (0x0005d406) main_video3_pane_g1

0xcf6b,	// (0x0005d422) main_video3_pane_g2_ParamLimits

0xcf6b,	// (0x0005d422) main_video3_pane_g2

0x0001,

0xf87a,	// (0x0005fd31) main_video3_pane_g_ParamLimits

0xf87a,	// (0x0005fd31) main_video3_pane_g

0xcf87,	// (0x0005d43e) main_video3_pane_t1_ParamLimits

0xcf87,	// (0x0005d43e) main_video3_pane_t1

0xcfb2,	// (0x0005d469) main_video3_pane_t2_ParamLimits

0xcfb2,	// (0x0005d469) main_video3_pane_t2

0xcfdd,	// (0x0005d494) main_video3_pane_t3_ParamLimits

0xcfdd,	// (0x0005d494) main_video3_pane_t3

0x0002,

0xf87f,	// (0x0005fd36) main_video3_pane_t_ParamLimits

0xf87f,	// (0x0005fd36) main_video3_pane_t

0xd008,	// (0x0005d4bf) cams_zoom_vslider_pane_g1

0xd011,	// (0x0005d4c8) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x0005fd3d) cams_zoom_vslider_pane_g

0xd019,	// (0x0005d4d0) small_slider_vertical_pane

0xc89c,	// (0x0005cd53) small_slider_vertical_pane_g1

0xc89c,	// (0x0005cd53) small_slider_vertical_pane_g2

0xd021,	// (0x0005d4d8) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x0005fd42) small_slider_vertical_pane_g

0x0eea,	// (0x000513a1) main_hwr_training_pane

0xd02a,	// (0x0005d4e1) hwr_training_instruct_pane_ParamLimits

0xd02a,	// (0x0005d4e1) hwr_training_instruct_pane

0x7ae7,	// (0x00057f9e) hwr_training_navi_pane_ParamLimits

0x7ae7,	// (0x00057f9e) hwr_training_navi_pane

0x7afe,	// (0x00057fb5) hwr_training_write_pane_ParamLimits

0x7afe,	// (0x00057fb5) hwr_training_write_pane

0x0eea,	// (0x000513a1) bg_frame_shadow_pane

0xd059,	// (0x0005d510) hwr_training_write_pane_g1

0xd061,	// (0x0005d518) hwr_training_write_pane_g2

0xd069,	// (0x0005d520) hwr_training_write_pane_g3

0xd071,	// (0x0005d528) hwr_training_write_pane_g4

0xd079,	// (0x0005d530) hwr_training_write_pane_g5

0xd081,	// (0x0005d538) hwr_training_write_pane_g6

0xd089,	// (0x0005d540) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x0005fd49) hwr_training_write_pane_g

0xeca9,	// (0x0005f160) hwr_training_navi_pane_g1_ParamLimits

0xeca9,	// (0x0005f160) hwr_training_navi_pane_g1

0xecbb,	// (0x0005f172) hwr_training_navi_pane_g2_ParamLimits

0xecbb,	// (0x0005f172) hwr_training_navi_pane_g2

0xeccd,	// (0x0005f184) hwr_training_navi_pane_g3_ParamLimits

0xeccd,	// (0x0005f184) hwr_training_navi_pane_g3

0xecdd,	// (0x0005f194) hwr_training_navi_pane_g4_ParamLimits

0xecdd,	// (0x0005f194) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x0005fd58) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x0005fd58) hwr_training_navi_pane_g

0xecea,	// (0x0005f1a1) hwr_training_navi_pane_t1

0x7b3e,	// (0x00057ff5) list_single_hwr_training_instruct_pane_ParamLimits

0x7b3e,	// (0x00057ff5) list_single_hwr_training_instruct_pane

0xd091,	// (0x0005d548) list_single_hwr_training_instruct_pane_t1

0xc7dc,	// (0x0005cc93) bg_frame_shadow_pane_g1

0xd0a0,	// (0x0005d557) bg_frame_shadow_pane_g2

0xd0a8,	// (0x0005d55f) bg_frame_shadow_pane_g3

0xd0b0,	// (0x0005d567) bg_frame_shadow_pane_g4

0xd0b8,	// (0x0005d56f) bg_frame_shadow_pane_g5

0xd0c0,	// (0x0005d577) bg_frame_shadow_pane_g6

0xd0c8,	// (0x0005d57f) bg_frame_shadow_pane_g7

0x173b,	// (0x00051bf2) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x0005fd63) bg_frame_shadow_pane_g

0x0eea,	// (0x000513a1) main_video_tele_dialer_pane

0x7b56,	// (0x0005800d) aid_size_cell_video_keypad_ParamLimits

0x7b56,	// (0x0005800d) aid_size_cell_video_keypad

0x7b70,	// (0x00058027) grid_video_dialer_keypad_pane_ParamLimits

0x7b70,	// (0x00058027) grid_video_dialer_keypad_pane

0x7bb2,	// (0x00058069) video_down_pane_cp_ParamLimits

0x7bb2,	// (0x00058069) video_down_pane_cp

0x7be2,	// (0x00058099) cell_video_dialer_keypad_pane_ParamLimits

0x7be2,	// (0x00058099) cell_video_dialer_keypad_pane

0xd0d0,	// (0x0005d587) bg_button_pane_cp08_ParamLimits

0xd0d0,	// (0x0005d587) bg_button_pane_cp08

0x7c04,	// (0x000580bb) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7c04,	// (0x000580bb) cell_video_dialer_keypad_pane_g1

0x72fe,	// (0x000577b5) mup3_rocker2_pane_ParamLimits

0x72fe,	// (0x000577b5) mup3_rocker2_pane

0xc89c,	// (0x0005cd53) mup3_rocker2_pane_g1

0x604b,	// (0x00056502) main_dialer2_pane

0x0eea,	// (0x000513a1) main_mp4_pane

0xed00,	// (0x0005f1b7) main_mp4_pane_g1_ParamLimits

0xed00,	// (0x0005f1b7) main_mp4_pane_g1

0xed00,	// (0x0005f1b7) main_mp4_pane_g2_ParamLimits

0xed00,	// (0x0005f1b7) main_mp4_pane_g2

0x7c3f,	// (0x000580f6) main_mp4_pane_g3_ParamLimits

0x7c3f,	// (0x000580f6) main_mp4_pane_g3

0xed0e,	// (0x0005f1c5) main_mp4_pane_g4_ParamLimits

0xed0e,	// (0x0005f1c5) main_mp4_pane_g4

0xed3c,	// (0x0005f1f3) main_mp4_pane_g5_ParamLimits

0xed3c,	// (0x0005f1f3) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x0005fd83) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x0005fd83) main_mp4_pane_g

0xed98,	// (0x0005f24f) main_mp4_pane_t1_ParamLimits

0xed98,	// (0x0005f24f) main_mp4_pane_t1

0xedf0,	// (0x0005f2a7) main_mp4_pane_t2_ParamLimits

0xedf0,	// (0x0005f2a7) main_mp4_pane_t2

0xd0dc,	// (0x0005d593) main_mp4_pane_t3_ParamLimits

0xd0dc,	// (0x0005d593) main_mp4_pane_t3

0xee42,	// (0x0005f2f9) main_mp4_pane_t4_ParamLimits

0xee42,	// (0x0005f2f9) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x0005fd90) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x0005fd90) main_mp4_pane_t

0xee82,	// (0x0005f339) mp4_progress_pane_ParamLimits

0xee82,	// (0x0005f339) mp4_progress_pane

0xeec6,	// (0x0005f37d) mp4_rocker_pane_ParamLimits

0xeec6,	// (0x0005f37d) mp4_rocker_pane

0xd10a,	// (0x0005d5c1) mp4_progress_pane_t1

0xd121,	// (0x0005d5d8) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x0005fd99) mp4_progress_pane_t

0xd138,	// (0x0005d5ef) mup_progress_pane_cp04

0xd144,	// (0x0005d5fb) mp4_rocker_pane_g1

0x7c6f,	// (0x00058126) aid_cell_size_keypad2_ParamLimits

0x7c6f,	// (0x00058126) aid_cell_size_keypad2

0x7c89,	// (0x00058140) dialer2_ne_pane_ParamLimits

0x7c89,	// (0x00058140) dialer2_ne_pane

0x7c9e,	// (0x00058155) grid_dialer2_keypad_pane_ParamLimits

0x7c9e,	// (0x00058155) grid_dialer2_keypad_pane

0xc689,	// (0x0005cb40) bg_popup_call_pane_cp07_ParamLimits

0xc689,	// (0x0005cb40) bg_popup_call_pane_cp07

0x7cb4,	// (0x0005816b) dialer2_ne_pane_t1_ParamLimits

0x7cb4,	// (0x0005816b) dialer2_ne_pane_t1

0x7cf1,	// (0x000581a8) cell_dialer2_keypad_pane_ParamLimits

0x7cf1,	// (0x000581a8) cell_dialer2_keypad_pane

0xd160,	// (0x0005d617) bg_button_pane_pane_cp04_ParamLimits

0xd160,	// (0x0005d617) bg_button_pane_pane_cp04

0x7d13,	// (0x000581ca) cell_dialer2_keypad_pane_g1_ParamLimits

0x7d13,	// (0x000581ca) cell_dialer2_keypad_pane_g1

0x43d6,	// (0x0005488d) aid_placing_vt_set_content_ParamLimits

0x43d6,	// (0x0005488d) aid_placing_vt_set_content

0x43f8,	// (0x000548af) aid_placing_vt_set_title_ParamLimits

0x43f8,	// (0x000548af) aid_placing_vt_set_title

0x0eea,	// (0x000513a1) main_image3_pane

0x7da2,	// (0x00058259) area_side_right_pane_cp01_ParamLimits

0x7da2,	// (0x00058259) area_side_right_pane_cp01

0xed00,	// (0x0005f1b7) main_image3_pane_g1_ParamLimits

0xed00,	// (0x0005f1b7) main_image3_pane_g1

0x7db9,	// (0x00058270) main_image3_pane_g2_ParamLimits

0x7db9,	// (0x00058270) main_image3_pane_g2

0x7ddf,	// (0x00058296) main_image3_pane_g3_ParamLimits

0x7ddf,	// (0x00058296) main_image3_pane_g3

0x7e05,	// (0x000582bc) main_image3_pane_g4_ParamLimits

0x7e05,	// (0x000582bc) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x0005fda8) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x0005fda8) main_image3_pane_g

0x7e2b,	// (0x000582e2) main_image3_pane_t1_ParamLimits

0x7e2b,	// (0x000582e2) main_image3_pane_t1

0x7e83,	// (0x0005833a) main_image3_pane_t2_ParamLimits

0x7e83,	// (0x0005833a) main_image3_pane_t2

0x7ed5,	// (0x0005838c) main_image3_pane_t3_ParamLimits

0x7ed5,	// (0x0005838c) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x0005fdb1) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x0005fdb1) main_image3_pane_t

0x257c,	// (0x00052a33) grid_sctrl_middle_pane_cp01_ParamLimits

0x257c,	// (0x00052a33) grid_sctrl_middle_pane_cp01

0x7f55,	// (0x0005840c) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f55,	// (0x0005840c) cell_sctrl_middle_pane_cp01

0x7f72,	// (0x00058429) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7f72,	// (0x00058429) cell_sctrl_middle_pane_cp01_g1

0x0eea,	// (0x000513a1) main_call4_pane

0x7f88,	// (0x0005843f) aid_size_button_call4_ParamLimits

0x7f88,	// (0x0005843f) aid_size_button_call4

0x7fb5,	// (0x0005846c) call4_windows_pane_ParamLimits

0x7fb5,	// (0x0005846c) call4_windows_pane

0x7fcb,	// (0x00058482) grid_call4_button_pane_ParamLimits

0x7fcb,	// (0x00058482) grid_call4_button_pane

0xd184,	// (0x0005d63b) call4_windows_conf_pane

0x7fea,	// (0x000584a1) popup_call4_audio_first_window_ParamLimits

0x7fea,	// (0x000584a1) popup_call4_audio_first_window

0x800a,	// (0x000584c1) popup_call4_audio_second_window_ParamLimits

0x800a,	// (0x000584c1) popup_call4_audio_second_window

0xd1b7,	// (0x0005d66e) popup_call4_audio_wait_window_ParamLimits

0xd1b7,	// (0x0005d66e) popup_call4_audio_wait_window

0x801c,	// (0x000584d3) cell_call4_button_pane_ParamLimits

0x801c,	// (0x000584d3) cell_call4_button_pane

0x8041,	// (0x000584f8) bg_button_pane_cp09_ParamLimits

0x8041,	// (0x000584f8) bg_button_pane_cp09

0x804d,	// (0x00058504) cell_call4_button_pane_g1_ParamLimits

0x804d,	// (0x00058504) cell_call4_button_pane_g1

0x8073,	// (0x0005852a) cell_call4_button_pane_t1_ParamLimits

0x8073,	// (0x0005852a) cell_call4_button_pane_t1

0xd1fd,	// (0x0005d6b4) popup_call4_audio_conf_window_ParamLimits

0xd1fd,	// (0x0005d6b4) popup_call4_audio_conf_window

0x7358,	// (0x0005780f) mup3_progress_pane_t1_ParamLimits

0x736e,	// (0x00057825) mup3_progress_pane_t2_ParamLimits

0xcbba,	// (0x0005d071) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x0005fc8a) mup3_progress_pane_t_ParamLimits

0xcbd1,	// (0x0005d088) mup_progress_pane_cp03_ParamLimits

0x7948,	// (0x00057dff) mup3_control_keys_pane_g4_copy1

0xeeb0,	// (0x0005f367) mp4_rocker2_pane_ParamLimits

0xeeb0,	// (0x0005f367) mp4_rocker2_pane

0xd211,	// (0x0005d6c8) mp4_rocker2_pane_g1

0xd219,	// (0x0005d6d0) mp4_rocker2_pane_g2

0xef16,	// (0x0005f3cd) mp4_rocker2_pane_g3

0xef1e,	// (0x0005f3d5) mp4_rocker2_pane_g4

0xef26,	// (0x0005f3dd) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x0005fdba) mp4_rocker2_pane_g

0x0eea,	// (0x000513a1) main_camera4_pane

0x0eea,	// (0x000513a1) main_video4_pane

0x7b84,	// (0x0005803b) main_video_tele_dialer_pane_t1_ParamLimits

0x7b84,	// (0x0005803b) main_video_tele_dialer_pane_t1

0x7b9b,	// (0x00058052) main_video_tele_dialer_pane_t2_ParamLimits

0x7b9b,	// (0x00058052) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x0005fd74) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x0005fd74) main_video_tele_dialer_pane_t

0x80b1,	// (0x00058568) cam4_autofocus_pane_ParamLimits

0x80b1,	// (0x00058568) cam4_autofocus_pane

0x80c5,	// (0x0005857c) cam4_image_uncrop_pane_ParamLimits

0x80c5,	// (0x0005857c) cam4_image_uncrop_pane

0x80dc,	// (0x00058593) cam4_indicators_pane_ParamLimits

0x80dc,	// (0x00058593) cam4_indicators_pane

0x8100,	// (0x000585b7) main_camera4_pane_g1_ParamLimits

0x8100,	// (0x000585b7) main_camera4_pane_g1

0x810c,	// (0x000585c3) main_camera4_pane_g2_ParamLimits

0x810c,	// (0x000585c3) main_camera4_pane_g2

0x810c,	// (0x000585c3) main_camera4_pane_g3_ParamLimits

0x810c,	// (0x000585c3) main_camera4_pane_g3

0x8118,	// (0x000585cf) main_camera4_pane_g4_ParamLimits

0x8118,	// (0x000585cf) main_camera4_pane_g4

0x8124,	// (0x000585db) main_camera4_pane_g5_ParamLimits

0x8124,	// (0x000585db) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x0005fdc5) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x0005fdc5) main_camera4_pane_g

0x8141,	// (0x000585f8) main_camera4_pane_t1_ParamLimits

0x8141,	// (0x000585f8) main_camera4_pane_t1

0xef48,	// (0x0005f3ff) bg_tb_trans_pane_cp06

0xef5e,	// (0x0005f415) cam4_indicators_pane_g1

0xef6e,	// (0x0005f425) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x0005fde0) cam4_indicators_pane_g

0xef8e,	// (0x0005f445) cam4_indicators_pane_t1

0x8196,	// (0x0005864d) main_video4_pane_g1_ParamLimits

0x8196,	// (0x0005864d) main_video4_pane_g1

0x81a8,	// (0x0005865f) main_video4_pane_g2_ParamLimits

0x81a8,	// (0x0005865f) main_video4_pane_g2

0x81a8,	// (0x0005865f) main_video4_pane_g3_ParamLimits

0x81a8,	// (0x0005865f) main_video4_pane_g3

0x81b7,	// (0x0005866e) main_video4_pane_g4_ParamLimits

0x81b7,	// (0x0005866e) main_video4_pane_g4

0x0004,

0xf930,	// (0x0005fde7) main_video4_pane_g_ParamLimits

0xf930,	// (0x0005fde7) main_video4_pane_g

0x81d5,	// (0x0005868c) vid4_indicators_pane_ParamLimits

0x81d5,	// (0x0005868c) vid4_indicators_pane

0x81fd,	// (0x000586b4) video4_image_uncrop_cif_pane_ParamLimits

0x81fd,	// (0x000586b4) video4_image_uncrop_cif_pane

0x8215,	// (0x000586cc) video4_image_uncrop_nhd_pane_ParamLimits

0x8215,	// (0x000586cc) video4_image_uncrop_nhd_pane

0x8229,	// (0x000586e0) video4_image_uncrop_vga_pane_ParamLimits

0x8229,	// (0x000586e0) video4_image_uncrop_vga_pane

0xefb0,	// (0x0005f467) bg_tb_trans_pane_cp07

0x8241,	// (0x000586f8) vid4_indicators_pane_g1

0x824e,	// (0x00058705) vid4_indicators_pane_g2

0x825b,	// (0x00058712) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x0005fdf2) vid4_indicators_pane_g

0x8280,	// (0x00058737) vid4_indicators_pane_t1

0x8292,	// (0x00058749) cam4_autofocus_pane_g1

0x829a,	// (0x00058751) cam4_autofocus_pane_g2

0x82a2,	// (0x00058759) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x0005fdfd) cam4_autofocus_pane_g

0x82aa,	// (0x00058761) cam4_autofocus_pane_g3_copy1

0x7bc6,	// (0x0005807d) video_down_pane_cp_t1

0x7bd4,	// (0x0005808b) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x0005fd79) video_down_pane_cp_t

0x257c,	// (0x00052a33) popup_vitu2_window_ParamLimits

0x257c,	// (0x00052a33) popup_vitu2_window

0x82b2,	// (0x00058769) aid_size_cell2_itu2_ParamLimits

0x82b2,	// (0x00058769) aid_size_cell2_itu2

0x82d8,	// (0x0005878f) aid_size_cell_itu2_ParamLimits

0x82d8,	// (0x0005878f) aid_size_cell_itu2

0x832a,	// (0x000587e1) bg_popup_window_pane_cp09_ParamLimits

0x832a,	// (0x000587e1) bg_popup_window_pane_cp09

0x8338,	// (0x000587ef) field_vitu2_entry_pane_ParamLimits

0x8338,	// (0x000587ef) field_vitu2_entry_pane

0x8352,	// (0x00058809) grid_vitu2_function_pane_ParamLimits

0x8352,	// (0x00058809) grid_vitu2_function_pane

0x838d,	// (0x00058844) grid_vitu2_itu_pane_ParamLimits

0x838d,	// (0x00058844) grid_vitu2_itu_pane

0x83f2,	// (0x000588a9) cell_vitu2_itu_pane_ParamLimits

0x83f2,	// (0x000588a9) cell_vitu2_itu_pane

0x8414,	// (0x000588cb) cell_vitu2_function_pane_ParamLimits

0x8414,	// (0x000588cb) cell_vitu2_function_pane

0xd221,	// (0x0005d6d8) bg_popup_call_pane_cp08_ParamLimits

0xd221,	// (0x0005d6d8) bg_popup_call_pane_cp08

0xd23a,	// (0x0005d6f1) field_vitu2_entry_pane_g1

0xd246,	// (0x0005d6fd) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x0005fe04) field_vitu2_entry_pane_g

0xd260,	// (0x0005d717) field_vitu2_entry_pane_t1_ParamLimits

0xd260,	// (0x0005d717) field_vitu2_entry_pane_t1

0xd27c,	// (0x0005d733) field_vitu2_entry_pane_t2_ParamLimits

0xd27c,	// (0x0005d733) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x0005fe0b) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x0005fe0b) field_vitu2_entry_pane_t

0x8453,	// (0x0005890a) bg_button_pane_cp010_ParamLimits

0x8453,	// (0x0005890a) bg_button_pane_cp010

0x8461,	// (0x00058918) cell_vitu2_itu_pane_g1

0x847f,	// (0x00058936) cell_vitu2_itu_pane_t1_ParamLimits

0x847f,	// (0x00058936) cell_vitu2_itu_pane_t1

0x348e,	// (0x00053945) cell_vitu2_itu_pane_t2_ParamLimits

0x348e,	// (0x00053945) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x0005fe15) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x0005fe15) cell_vitu2_itu_pane_t

0xefbe,	// (0x0005f475) bg_button_pane_cp011

0x84e5,	// (0x0005899c) cell_vitu2_function_pane_g1

0x0eea,	// (0x000513a1) main_myfav_hc_pane

0x7f21,	// (0x000583d8) popup_image3_note_pane_ParamLimits

0x7f21,	// (0x000583d8) popup_image3_note_pane

0x7f3b,	// (0x000583f2) popup_image3_tool_bar_pane_ParamLimits

0x7f3b,	// (0x000583f2) popup_image3_tool_bar_pane

0x3512,	// (0x000539c9) cell_vitu2_itu_pane_t3_ParamLimits

0x3512,	// (0x000539c9) cell_vitu2_itu_pane_t3

0x0eea,	// (0x000513a1) bg_popup_trans_pane

0xd2a1,	// (0x0005d758) grid_image3_tool_bar_pane

0xd2ab,	// (0x0005d762) bg_popup_trans_pane_g1

0x1a9f,	// (0x00051f56) bg_popup_trans_pane_g2

0xd2b3,	// (0x0005d76a) bg_popup_trans_pane_g3

0xd2bb,	// (0x0005d772) bg_popup_trans_pane_g4

0xd2c3,	// (0x0005d77a) bg_popup_trans_pane_g5

0xd2cb,	// (0x0005d782) bg_popup_trans_pane_g6

0xd2d3,	// (0x0005d78a) bg_popup_trans_pane_g7

0xd2db,	// (0x0005d792) bg_popup_trans_pane_g8

0x1a7f,	// (0x00051f36) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x0005fe1c) bg_popup_trans_pane_g

0x2596,	// (0x00052a4d) cell_image3_tool_bar_pane_ParamLimits

0x2596,	// (0x00052a4d) cell_image3_tool_bar_pane

0xc89c,	// (0x0005cd53) cell_image3_tool_bar_pane_g1

0x0eea,	// (0x000513a1) bg_popup_trans_pane_cp1

0xd2e3,	// (0x0005d79a) popup_image3_note_pane_t1

0xd2f1,	// (0x0005d7a8) popup_image3_note_pane_t2

0xd2ff,	// (0x0005d7b6) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x0005fe2f) popup_image3_note_pane_t

0xd30d,	// (0x0005d7c4) popup_image3_note_pane_t3_copy1

0x84f9,	// (0x000589b0) bg_myfav_hc_instruction_pane_ParamLimits

0x84f9,	// (0x000589b0) bg_myfav_hc_instruction_pane

0x850b,	// (0x000589c2) cell_myfav_contact_pane_ParamLimits

0x850b,	// (0x000589c2) cell_myfav_contact_pane

0x8525,	// (0x000589dc) cell_myfav_contact_pane_cp1_ParamLimits

0x8525,	// (0x000589dc) cell_myfav_contact_pane_cp1

0x853b,	// (0x000589f2) cell_myfav_contact_pane_cp2_ParamLimits

0x853b,	// (0x000589f2) cell_myfav_contact_pane_cp2

0x8551,	// (0x00058a08) cell_myfav_contact_pane_cp3_ParamLimits

0x8551,	// (0x00058a08) cell_myfav_contact_pane_cp3

0x8566,	// (0x00058a1d) cell_myfav_contact_pane_cp4_ParamLimits

0x8566,	// (0x00058a1d) cell_myfav_contact_pane_cp4

0x857a,	// (0x00058a31) cell_myfav_contact_pane_cp5_ParamLimits

0x857a,	// (0x00058a31) cell_myfav_contact_pane_cp5

0x858e,	// (0x00058a45) cell_myfav_contact_pane_cp6_ParamLimits

0x858e,	// (0x00058a45) cell_myfav_contact_pane_cp6

0x85a2,	// (0x00058a59) cell_myfav_contact_pane_cp7_ParamLimits

0x85a2,	// (0x00058a59) cell_myfav_contact_pane_cp7

0xd31b,	// (0x0005d7d2) listscroll_gen_pane_cp05

0x85ba,	// (0x00058a71) main_myfav_hc_pane_g1_ParamLimits

0x85ba,	// (0x00058a71) main_myfav_hc_pane_g1

0x85d0,	// (0x00058a87) main_myfav_hc_pane_g2_ParamLimits

0x85d0,	// (0x00058a87) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x0005fe36) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x0005fe36) main_myfav_hc_pane_g

0x85fa,	// (0x00058ab1) main_myfav_hc_pane_t1_ParamLimits

0x85fa,	// (0x00058ab1) main_myfav_hc_pane_t1

0xd324,	// (0x0005d7db) main_myfav_hc_pane_t2_ParamLimits

0xd324,	// (0x0005d7db) main_myfav_hc_pane_t2

0xd336,	// (0x0005d7ed) main_myfav_hc_pane_t3_ParamLimits

0xd336,	// (0x0005d7ed) main_myfav_hc_pane_t3

0x860f,	// (0x00058ac6) main_myfav_hc_pane_t4_ParamLimits

0x860f,	// (0x00058ac6) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x0005fe3d) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x0005fe3d) main_myfav_hc_pane_t

0xc89c,	// (0x0005cd53) bg_myfav_hc_instruction_pane_g1

0xd348,	// (0x0005d7ff) cell_myfav_contact_pane_g1_ParamLimits

0xd348,	// (0x0005d7ff) cell_myfav_contact_pane_g1

0xd348,	// (0x0005d7ff) cell_myfav_contact_pane_g2_ParamLimits

0xd348,	// (0x0005d7ff) cell_myfav_contact_pane_g2

0xd354,	// (0x0005d80b) cell_myfav_contact_pane_g3_ParamLimits

0xd354,	// (0x0005d80b) cell_myfav_contact_pane_g3

0xcba4,	// (0x0005d05b) cell_myfav_contact_pane_g4_ParamLimits

0xcba4,	// (0x0005d05b) cell_myfav_contact_pane_g4

0xd361,	// (0x0005d818) cell_myfav_contact_pane_g5_ParamLimits

0xd361,	// (0x0005d818) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x0005fe48) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x0005fe48) cell_myfav_contact_pane_g

0x85e6,	// (0x00058a9d) main_myfav_hc_pane_g3_ParamLimits

0x85e6,	// (0x00058a9d) main_myfav_hc_pane_g3

0x36bd,	// (0x00053b74) popup_adpt_find_window

0x8633,	// (0x00058aea) afind_page_pane_ParamLimits

0x8633,	// (0x00058aea) afind_page_pane

0x8648,	// (0x00058aff) aid_size_cell_afind_ParamLimits

0x8648,	// (0x00058aff) aid_size_cell_afind

0x8666,	// (0x00058b1d) bg_popup_sub_pane_cp09_ParamLimits

0x8666,	// (0x00058b1d) bg_popup_sub_pane_cp09

0x8673,	// (0x00058b2a) find_pane_cp01_ParamLimits

0x8673,	// (0x00058b2a) find_pane_cp01

0xd36d,	// (0x0005d824) grid_afind_control_pane_ParamLimits

0xd36d,	// (0x0005d824) grid_afind_control_pane

0x8680,	// (0x00058b37) grid_afind_pane_ParamLimits

0x8680,	// (0x00058b37) grid_afind_pane

0x869e,	// (0x00058b55) cell_afind_pane_ParamLimits

0x869e,	// (0x00058b55) cell_afind_pane

0xc89c,	// (0x0005cd53) afind_page_pane_g1

0x86eb,	// (0x00058ba2) afind_page_pane_g2

0x86f4,	// (0x00058bab) afind_page_pane_g3

0x0002,

0xf99c,	// (0x0005fe53) afind_page_pane_g

0x86fd,	// (0x00058bb4) afind_page_pane_t1

0xd381,	// (0x0005d838) cell_afind_grid_control_pane_ParamLimits

0xd381,	// (0x0005d838) cell_afind_grid_control_pane

0xd160,	// (0x0005d617) bg_button_pane_cp69_ParamLimits

0xd160,	// (0x0005d617) bg_button_pane_cp69

0x871d,	// (0x00058bd4) cell_afind_pane_g1_ParamLimits

0x871d,	// (0x00058bd4) cell_afind_pane_g1

0x872a,	// (0x00058be1) cell_afind_pane_t1_ParamLimits

0x872a,	// (0x00058be1) cell_afind_pane_t1

0x188b,	// (0x00051d42) bg_button_pane_cp72

0xd390,	// (0x0005d847) cell_afind_grid_control_pane_g1

0x5bed,	// (0x000560a4) aid_image_placing_area_ParamLimits

0x5bed,	// (0x000560a4) aid_image_placing_area

0xce30,	// (0x0005d2e7) field_vitu_entry_pane_g1_ParamLimits

0xce30,	// (0x0005d2e7) field_vitu_entry_pane_g1

0xce3c,	// (0x0005d2f3) field_vitu_entry_pane_g2_ParamLimits

0xce3c,	// (0x0005d2f3) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x0005fd04) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x0005fd04) field_vitu_entry_pane_g

0x79fb,	// (0x00057eb2) cell_vitu_itu_pane_g1_ParamLimits

0x7a3d,	// (0x00057ef4) cell_vitu_itu_pane_t3_ParamLimits

0x7a3d,	// (0x00057ef4) cell_vitu_itu_pane_t3

0xd10a,	// (0x0005d5c1) mp4_progress_pane_t1_ParamLimits

0xd121,	// (0x0005d5d8) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x0005fd99) mp4_progress_pane_t_ParamLimits

0xd138,	// (0x0005d5ef) mup_progress_pane_cp04_ParamLimits

0x8621,	// (0x00058ad8) main_myfav_hc_pane_t5_ParamLimits

0x8621,	// (0x00058ad8) main_myfav_hc_pane_t5

0x0f04,	// (0x000513bb) aid_zoom_text_primary

0x36bd,	// (0x00053b74) popup_adpt_find_window_ParamLimits

0x257c,	// (0x00052a33) main_cam_set_pane

0x80ee,	// (0x000585a5) cam4_zoom_pane_ParamLimits

0x80ee,	// (0x000585a5) cam4_zoom_pane

0x873c,	// (0x00058bf3) main_cam_set_pane_g1_ParamLimits

0x873c,	// (0x00058bf3) main_cam_set_pane_g1

0x874a,	// (0x00058c01) main_cam_set_pane_g2_ParamLimits

0x874a,	// (0x00058c01) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x0005fe5a) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x0005fe5a) main_cam_set_pane_g

0x8769,	// (0x00058c20) main_cam_set_pane_t1_ParamLimits

0x8769,	// (0x00058c20) main_cam_set_pane_t1

0x877b,	// (0x00058c32) main_cset_listscroll_pane_ParamLimits

0x877b,	// (0x00058c32) main_cset_listscroll_pane

0x8799,	// (0x00058c50) main_cset_slider_pane_ParamLimits

0x8799,	// (0x00058c50) main_cset_slider_pane

0xd3a1,	// (0x0005d858) main_cset_list_pane_ParamLimits

0xd3a1,	// (0x0005d858) main_cset_list_pane

0xd3b1,	// (0x0005d868) scroll_pane_cp028

0x87bd,	// (0x00058c74) aid_area_touch_slider

0x87d9,	// (0x00058c90) cset_slider_pane

0x8803,	// (0x00058cba) main_cset_slider_pane_g1

0x8818,	// (0x00058ccf) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x0005fe5f) main_cset_slider_pane_g

0xd3ea,	// (0x0005d8a1) main_cset_slider_pane_t1

0x88d4,	// (0x00058d8b) main_cset_slider_pane_t2

0x88ee,	// (0x00058da5) main_cset_slider_pane_t3

0x8908,	// (0x00058dbf) main_cset_slider_pane_t4

0x8922,	// (0x00058dd9) main_cset_slider_pane_t5

0x893c,	// (0x00058df3) main_cset_slider_pane_t6

0x8951,	// (0x00058e08) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x0005fe84) main_cset_slider_pane_t

0x8a55,	// (0x00058f0c) cset_list_set_pane_ParamLimits

0x8a55,	// (0x00058f0c) cset_list_set_pane

0x8a66,	// (0x00058f1d) aid_position_infowindow_above

0x8a6e,	// (0x00058f25) aid_position_infowindow_below

0xd48a,	// (0x0005d941) cset_list_set_pane_g1_ParamLimits

0xd48a,	// (0x0005d941) cset_list_set_pane_g1

0x8a76,	// (0x00058f2d) cset_list_set_pane_g3_ParamLimits

0x8a76,	// (0x00058f2d) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x0005fea3) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x0005fea3) cset_list_set_pane_g

0xd496,	// (0x0005d94d) cset_list_set_pane_t1_ParamLimits

0xd496,	// (0x0005d94d) cset_list_set_pane_t1

0x257c,	// (0x00052a33) list_highlight_pane_cp021_ParamLimits

0x257c,	// (0x00052a33) list_highlight_pane_cp021

0x2323,	// (0x000527da) cset_slider_pane_g1

0x2335,	// (0x000527ec) cset_slider_pane_g2

0x232c,	// (0x000527e3) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x0005fea8) cset_slider_pane_g

0xefcc,	// (0x0005f483) aid_area_touch_cam4_zoom

0xefd4,	// (0x0005f48b) cam4_zoom_cont_pane

0xefdc,	// (0x0005f493) cam4_zoom_pane_g1

0xefe4,	// (0x0005f49b) cam4_zoom_pane_g2

0x8a85,	// (0x00058f3c) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x0005feaf) cam4_zoom_pane_g

0xefec,	// (0x0005f4a3) cam4_zoom_cont_pane_g1

0xeff5,	// (0x0005f4ac) cam4_zoom_cont_pane_g2

0xeffe,	// (0x0005f4b5) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x0005feb6) cam4_zoom_cont_pane_g

0x7fa6,	// (0x0005845d) call4_image_pane_ParamLimits

0x7fa6,	// (0x0005845d) call4_image_pane

0xd184,	// (0x0005d63b) call4_windows_conf_pane_ParamLimits

0xd197,	// (0x0005d64e) popup_call4_audio_in_window_ParamLimits

0xd197,	// (0x0005d64e) popup_call4_audio_in_window

0x0eea,	// (0x000513a1) bg_popup_call2_act_pane_cp02

0xd1f5,	// (0x0005d6ac) call4_list_conf_pane

0xc89c,	// (0x0005cd53) call4_image_pane_g1

0xc89c,	// (0x0005cd53) call4_image_pane_g2

0x0001,

0xf713,	// (0x0005fbca) call4_image_pane_g

0xd4ab,	// (0x0005d962) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4ab,	// (0x0005d962) list_single_graphic_popup_conf4_pane

0x0eea,	// (0x000513a1) list_highlight_pane_cp022

0xd4be,	// (0x0005d975) list_single_graphic_popup_conf4_pane_g1

0x1f88,	// (0x0005243f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x0005febd) list_single_graphic_popup_conf4_pane_g

0xd4c6,	// (0x0005d97d) list_single_graphic_popup_conf4_pane_t1

0x4502,	// (0x000549b9) popup_vtel_slider_window_ParamLimits

0x4502,	// (0x000549b9) popup_vtel_slider_window

0xd14e,	// (0x0005d605) dialer2_ne_pane_t2_ParamLimits

0xd14e,	// (0x0005d605) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x0005fd9e) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x0005fd9e) dialer2_ne_pane_t

0xc689,	// (0x0005cb40) bg_popup_sub_pane_cp010_ParamLimits

0xc689,	// (0x0005cb40) bg_popup_sub_pane_cp010

0x8a8d,	// (0x00058f44) popup_vtel_slider_window_g1_ParamLimits

0x8a8d,	// (0x00058f44) popup_vtel_slider_window_g1

0x8aa0,	// (0x00058f57) popup_vtel_slider_window_g2_ParamLimits

0x8aa0,	// (0x00058f57) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x0005fec2) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x0005fec2) popup_vtel_slider_window_g

0x8af4,	// (0x00058fab) vtel_slider_pane_ParamLimits

0x8af4,	// (0x00058fab) vtel_slider_pane

0x8b16,	// (0x00058fcd) vtel_slider_pane_g1_ParamLimits

0x8b16,	// (0x00058fcd) vtel_slider_pane_g1

0x8b2a,	// (0x00058fe1) vtel_slider_pane_g2_ParamLimits

0x8b2a,	// (0x00058fe1) vtel_slider_pane_g2

0x8b42,	// (0x00058ff9) vtel_slider_pane_g3_ParamLimits

0x8b42,	// (0x00058ff9) vtel_slider_pane_g3

0x8b16,	// (0x00058fcd) vtel_slider_pane_g4_ParamLimits

0x8b16,	// (0x00058fcd) vtel_slider_pane_g4

0x8b58,	// (0x0005900f) vtel_slider_pane_g5_ParamLimits

0x8b58,	// (0x0005900f) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x0005fecb) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x0005fecb) vtel_slider_pane_g

0x0eea,	// (0x000513a1) main_gallery2_pane

0x8304,	// (0x000587bb) aid_size_row_itut2_dropdow_list_ParamLimits

0x8304,	// (0x000587bb) aid_size_row_itut2_dropdow_list

0x836e,	// (0x00058825) grid_vitu2_function_top_pane_ParamLimits

0x836e,	// (0x00058825) grid_vitu2_function_top_pane

0x83b1,	// (0x00058868) popup_vitu2_dropdown_list_window_ParamLimits

0x83b1,	// (0x00058868) popup_vitu2_dropdown_list_window

0x83d0,	// (0x00058887) popup_vitu2_match_list_window

0x8b6e,	// (0x00059025) cell_vitu2_function_top_pane_ParamLimits

0x8b6e,	// (0x00059025) cell_vitu2_function_top_pane

0x8b8e,	// (0x00059045) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8b8e,	// (0x00059045) cell_vitu2_function_top_pane_cp01

0x8bae,	// (0x00059065) cell_vitu2_function_top_wide_pane_ParamLimits

0x8bae,	// (0x00059065) cell_vitu2_function_top_wide_pane

0xefbe,	// (0x0005f475) bg_button_pane_cp012

0x8bcc,	// (0x00059083) cell_vitu2_function_top_pane_g1

0xf007,	// (0x0005f4be) bg_button_pane_cp013_ParamLimits

0xf007,	// (0x0005f4be) bg_button_pane_cp013

0x8be0,	// (0x00059097) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8be0,	// (0x00059097) cell_vitu2_function_top_wide_pane_g1

0xefbe,	// (0x0005f475) bg_popup_sub_pane_cp20

0x8bf8,	// (0x000590af) list_vitu2_match_list_pane

0xd2ab,	// (0x0005d762) bg_popup_sub_pane_cp20_g1

0xd2b3,	// (0x0005d76a) bg_popup_sub_pane_cp20_g2

0x1a9f,	// (0x00051f56) bg_popup_sub_pane_cp20_g3

0xd2bb,	// (0x0005d772) bg_popup_sub_pane_cp20_g4

0x1a7f,	// (0x00051f36) bg_popup_sub_pane_cp20_g5

0xd4ea,	// (0x0005d9a1) bg_popup_sub_pane_cp20_g6

0xd2cb,	// (0x0005d782) bg_popup_sub_pane_cp20_g7

0xd2d3,	// (0x0005d78a) bg_popup_sub_pane_cp20_g8

0xd2db,	// (0x0005d792) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x0005fed6) bg_popup_sub_pane_cp20_g

0xf023,	// (0x0005f4da) list_vitu2_match_list_item_pane_ParamLimits

0xf023,	// (0x0005f4da) list_vitu2_match_list_item_pane

0xf035,	// (0x0005f4ec) list_vitu2_match_list_item_pane_t1

0xb017,	// (0x0005b4ce) bg_popup_sub_pane_cp21

0xf043,	// (0x0005f4fa) grid_vitu2_dropdown_list_pane

0x8c42,	// (0x000590f9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8c42,	// (0x000590f9) cell_vitu2_dropdown_list_char_pane

0x8c63,	// (0x0005911a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8c63,	// (0x0005911a) cell_vitu2_dropdown_list_ctrl_pane

0xd4f2,	// (0x0005d9a9) cell_vitu2_dropdown_list_char_pane_g1

0xd4fb,	// (0x0005d9b2) cell_vitu2_dropdown_list_char_pane_g2

0xd504,	// (0x0005d9bb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x0005fef3) cell_vitu2_dropdown_list_char_pane_g

0x8c8f,	// (0x00059146) cell_vitu2_dropdown_list_char_pane_t1

0x8c9d,	// (0x00059154) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8c9d,	// (0x00059154) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8caa,	// (0x00059161) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8caa,	// (0x00059161) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8cb7,	// (0x0005916e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8cb7,	// (0x0005916e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8cc4,	// (0x0005917b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8cc4,	// (0x0005917b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xef48,	// (0x0005f3ff) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xef48,	// (0x0005f3ff) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x0005fefa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x0005fefa) cell_vitu2_dropdown_list_ctrl_pane_g

0x8ce0,	// (0x00059197) aid_size_cell_gallery2_ParamLimits

0x8ce0,	// (0x00059197) aid_size_cell_gallery2

0x8cf6,	// (0x000591ad) grid_gallery2_pane_ParamLimits

0x8cf6,	// (0x000591ad) grid_gallery2_pane

0x8d08,	// (0x000591bf) scroll_pane_cp029_ParamLimits

0x8d08,	// (0x000591bf) scroll_pane_cp029

0x8d14,	// (0x000591cb) cell_gallery2_pane_ParamLimits

0x8d14,	// (0x000591cb) cell_gallery2_pane

0xd50d,	// (0x0005d9c4) cell_gallery2_pane_g2

0x8d46,	// (0x000591fd) cell_gallery2_pane_g3

0xd517,	// (0x0005d9ce) cell_gallery2_pane_g4

0xd51f,	// (0x0005d9d6) cell_gallery2_pane_g5

0x21ed,	// (0x000526a4) grid_highlight_pane_cp10

0x83d0,	// (0x00058887) popup_vitu2_match_list_window_ParamLimits

0x83e1,	// (0x00058898) popup_vitu2_query_window_ParamLimits

0x83e1,	// (0x00058898) popup_vitu2_query_window

0xb017,	// (0x0005b4ce) bg_vitu2_candi_button_pane

0xd4f2,	// (0x0005d9a9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4fb,	// (0x0005d9b2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd504,	// (0x0005d9bb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8d4e,	// (0x00059205) bg_button_pane_cp015

0x8d5e,	// (0x00059215) bg_button_pane_cp016

0x8d70,	// (0x00059227) bg_button_pane_cp017

0xc459,	// (0x0005c910) bg_popup_sub_pane_cp22

0xd527,	// (0x0005d9de) popup_vitu2_query_window_g1

0x8db1,	// (0x00059268) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x0005ff05) popup_vitu2_query_window_g

0x8dcc,	// (0x00059283) popup_vitu2_query_window_t1_ParamLimits

0x8dcc,	// (0x00059283) popup_vitu2_query_window_t1

0x8dff,	// (0x000592b6) popup_vitu2_query_window_t2_ParamLimits

0x8dff,	// (0x000592b6) popup_vitu2_query_window_t2

0x8e11,	// (0x000592c8) popup_vitu2_query_window_t3_ParamLimits

0x8e11,	// (0x000592c8) popup_vitu2_query_window_t3

0x8e39,	// (0x000592f0) popup_vitu2_query_window_t4_ParamLimits

0x8e39,	// (0x000592f0) popup_vitu2_query_window_t4

0x8e56,	// (0x0005930d) popup_vitu2_query_window_t5_ParamLimits

0x8e56,	// (0x0005930d) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x0005ff0c) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x0005ff0c) popup_vitu2_query_window_t

0xd399,	// (0x0005d850) main_cset_text_pane

0x87bd,	// (0x00058c74) aid_area_touch_slider_ParamLimits

0x87d9,	// (0x00058c90) cset_slider_pane_ParamLimits

0x8803,	// (0x00058cba) main_cset_slider_pane_g1_ParamLimits

0x8818,	// (0x00058ccf) main_cset_slider_pane_g2_ParamLimits

0xd3ba,	// (0x0005d871) main_cset_slider_pane_g3_ParamLimits

0xd3ba,	// (0x0005d871) main_cset_slider_pane_g3

0x882d,	// (0x00058ce4) main_cset_slider_pane_g4_ParamLimits

0x882d,	// (0x00058ce4) main_cset_slider_pane_g4

0x883c,	// (0x00058cf3) main_cset_slider_pane_g5_ParamLimits

0x883c,	// (0x00058cf3) main_cset_slider_pane_g5

0x8848,	// (0x00058cff) main_cset_slider_pane_g6_ParamLimits

0x8848,	// (0x00058cff) main_cset_slider_pane_g6

0xf9a8,	// (0x0005fe5f) main_cset_slider_pane_g_ParamLimits

0xd3ea,	// (0x0005d8a1) main_cset_slider_pane_t1_ParamLimits

0x88d4,	// (0x00058d8b) main_cset_slider_pane_t2_ParamLimits

0x88ee,	// (0x00058da5) main_cset_slider_pane_t3_ParamLimits

0x8908,	// (0x00058dbf) main_cset_slider_pane_t4_ParamLimits

0x8922,	// (0x00058dd9) main_cset_slider_pane_t5_ParamLimits

0x893c,	// (0x00058df3) main_cset_slider_pane_t6_ParamLimits

0x8951,	// (0x00058e08) main_cset_slider_pane_t7_ParamLimits

0x897b,	// (0x00058e32) main_cset_slider_pane_t8_ParamLimits

0x897b,	// (0x00058e32) main_cset_slider_pane_t8

0x89a3,	// (0x00058e5a) main_cset_slider_pane_t9_ParamLimits

0x89a3,	// (0x00058e5a) main_cset_slider_pane_t9

0x89cb,	// (0x00058e82) main_cset_slider_pane_t10_ParamLimits

0x89cb,	// (0x00058e82) main_cset_slider_pane_t10

0x89f3,	// (0x00058eaa) main_cset_slider_pane_t11_ParamLimits

0x89f3,	// (0x00058eaa) main_cset_slider_pane_t11

0x8a1b,	// (0x00058ed2) main_cset_slider_pane_t12_ParamLimits

0x8a1b,	// (0x00058ed2) main_cset_slider_pane_t12

0x8a38,	// (0x00058eef) main_cset_slider_pane_t13_ParamLimits

0x8a38,	// (0x00058eef) main_cset_slider_pane_t13

0xf9cd,	// (0x0005fe84) main_cset_slider_pane_t_ParamLimits

0x0eea,	// (0x000513a1) bg_popup_sub_pane_cp011

0xd533,	// (0x0005d9ea) main_cset_text_pane_g1

0xd53b,	// (0x0005d9f2) main_cset_text_pane_t1

0xd549,	// (0x0005da00) main_cset_text_pane_t2

0xd557,	// (0x0005da0e) main_cset_text_pane_t3

0xd565,	// (0x0005da1c) main_cset_text_pane_t4

0xd573,	// (0x0005da2a) main_cset_text_pane_t5

0xd581,	// (0x0005da38) main_cset_text_pane_t6

0xd58f,	// (0x0005da46) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x0005ff1b) main_cset_text_pane_t

0x0eea,	// (0x000513a1) main_cam4_burst_pane

0x0eea,	// (0x000513a1) main_cam5_pane

0x870b,	// (0x00058bc2) bg_button_pane_cp019

0x8714,	// (0x00058bcb) bg_button_pane_cp020

0xd3c6,	// (0x0005d87d) main_cset_slider_pane_g7_ParamLimits

0xd3c6,	// (0x0005d87d) main_cset_slider_pane_g7

0xd3d2,	// (0x0005d889) main_cset_slider_pane_g8_ParamLimits

0xd3d2,	// (0x0005d889) main_cset_slider_pane_g8

0x885c,	// (0x00058d13) main_cset_slider_pane_g9_ParamLimits

0x885c,	// (0x00058d13) main_cset_slider_pane_g9

0x8868,	// (0x00058d1f) main_cset_slider_pane_g10_ParamLimits

0x8868,	// (0x00058d1f) main_cset_slider_pane_g10

0x8874,	// (0x00058d2b) main_cset_slider_pane_g11_ParamLimits

0x8874,	// (0x00058d2b) main_cset_slider_pane_g11

0x8880,	// (0x00058d37) main_cset_slider_pane_g12_ParamLimits

0x8880,	// (0x00058d37) main_cset_slider_pane_g12

0x888c,	// (0x00058d43) main_cset_slider_pane_g13_ParamLimits

0x888c,	// (0x00058d43) main_cset_slider_pane_g13

0x8898,	// (0x00058d4f) main_cset_slider_pane_g14_ParamLimits

0x8898,	// (0x00058d4f) main_cset_slider_pane_g14

0x88a4,	// (0x00058d5b) main_cset_slider_pane_g15_ParamLimits

0x88a4,	// (0x00058d5b) main_cset_slider_pane_g15

0xd418,	// (0x0005d8cf) main_cset_slider_pane_t14_ParamLimits

0xd418,	// (0x0005d8cf) main_cset_slider_pane_t14

0xd451,	// (0x0005d908) main_cset_slider_pane_t15_ParamLimits

0xd451,	// (0x0005d908) main_cset_slider_pane_t15

0x8ec9,	// (0x00059380) aid_cam4_burst_size_cell_ParamLimits

0x8ec9,	// (0x00059380) aid_cam4_burst_size_cell

0x8ee9,	// (0x000593a0) grid_cam4_burst_pane_ParamLimits

0x8ee9,	// (0x000593a0) grid_cam4_burst_pane

0x8f0f,	// (0x000593c6) linegrid_cam4_burst_pane_ParamLimits

0x8f0f,	// (0x000593c6) linegrid_cam4_burst_pane

0x8f31,	// (0x000593e8) scroll_pane_cp30_ParamLimits

0x8f31,	// (0x000593e8) scroll_pane_cp30

0x8f3d,	// (0x000593f4) cell_cam4_burst_pane_ParamLimits

0x8f3d,	// (0x000593f4) cell_cam4_burst_pane

0xd59d,	// (0x0005da54) linegrid_cam4_burst_pane_g1_ParamLimits

0xd59d,	// (0x0005da54) linegrid_cam4_burst_pane_g1

0x8f84,	// (0x0005943b) linegrid_cam4_burst_pane_g2_ParamLimits

0x8f84,	// (0x0005943b) linegrid_cam4_burst_pane_g2

0xd5aa,	// (0x0005da61) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5aa,	// (0x0005da61) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x0005ff2a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x0005ff2a) linegrid_cam4_burst_pane_g

0x8f95,	// (0x0005944c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8f95,	// (0x0005944c) linegrid_cam4_burst_pane_g3_copy1

0xd5b7,	// (0x0005da6e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5b7,	// (0x0005da6e) linegrid_cam4_burst_pane_g4

0x8faf,	// (0x00059466) linegrid_cam4_burst_pane_g5_ParamLimits

0x8faf,	// (0x00059466) linegrid_cam4_burst_pane_g5

0x8fc0,	// (0x00059477) linegrid_cam4_burst_pane_g6_ParamLimits

0x8fc0,	// (0x00059477) linegrid_cam4_burst_pane_g6

0xd5c4,	// (0x0005da7b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5c4,	// (0x0005da7b) linegrid_cam4_burst_pane_g7

0x8fd1,	// (0x00059488) cell_cam4_burst_pane_g1

0xd5dd,	// (0x0005da94) main_cam5_pane_t1_ParamLimits

0xd5dd,	// (0x0005da94) main_cam5_pane_t1

0xd5ef,	// (0x0005daa6) main_cam5_pane_t2_ParamLimits

0xd5ef,	// (0x0005daa6) main_cam5_pane_t2

0xd601,	// (0x0005dab8) main_cam5_pane_t3_ParamLimits

0xd601,	// (0x0005dab8) main_cam5_pane_t3

0xd613,	// (0x0005daca) main_cam5_pane_t4_ParamLimits

0xd613,	// (0x0005daca) main_cam5_pane_t4

0xd629,	// (0x0005dae0) main_cam5_pane_t5_ParamLimits

0xd629,	// (0x0005dae0) main_cam5_pane_t5

0xd63b,	// (0x0005daf2) main_cam5_pane_t6_ParamLimits

0xd63b,	// (0x0005daf2) main_cam5_pane_t6

0xd64d,	// (0x0005db04) main_cam5_pane_t7_ParamLimits

0xd64d,	// (0x0005db04) main_cam5_pane_t7

0xd65f,	// (0x0005db16) main_cam5_pane_t8_ParamLimits

0xd65f,	// (0x0005db16) main_cam5_pane_t8

0xd67b,	// (0x0005db32) main_cam5_pane_t9_ParamLimits

0xd67b,	// (0x0005db32) main_cam5_pane_t9

0xd68d,	// (0x0005db44) main_cam5_pane_t10_ParamLimits

0xd68d,	// (0x0005db44) main_cam5_pane_t10

0xd69f,	// (0x0005db56) main_cam5_pane_t11_ParamLimits

0xd69f,	// (0x0005db56) main_cam5_pane_t11

0xd6b1,	// (0x0005db68) main_cam5_pane_t12_ParamLimits

0xd6b1,	// (0x0005db68) main_cam5_pane_t12

0xd6c6,	// (0x0005db7d) main_cam5_pane_t13_ParamLimits

0xd6c6,	// (0x0005db7d) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x0005ff36) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x0005ff36) main_cam5_pane_t

0x371b,	// (0x00053bd2) popup_scut_keymap_window_ParamLimits

0x371b,	// (0x00053bd2) popup_scut_keymap_window

0x8fe6,	// (0x0005949d) aid_size_cell_brow_shortcut

0x21ed,	// (0x000526a4) bg_popup_window_pane_cp010

0x8ff2,	// (0x000594a9) grid_scut_pane

0x8ffc,	// (0x000594b3) cell_scut_pane_ParamLimits

0x8ffc,	// (0x000594b3) cell_scut_pane

0x9011,	// (0x000594c8) cell_scut_pane_g1

0xd6e3,	// (0x0005db9a) cell_scut_pane_t1

0xd6f2,	// (0x0005dba9) cell_scut_pane_t2

0x901a,	// (0x000594d1) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x0005ff51) cell_scut_pane_t

0x6f87,	// (0x0005743e) main_mup3_pane_g8_ParamLimits

0x6f87,	// (0x0005743e) main_mup3_pane_g8

0x8318,	// (0x000587cf) area_vitu2_query_pane_ParamLimits

0x8318,	// (0x000587cf) area_vitu2_query_pane

0x8d82,	// (0x00059239) input_focus_pane_cp08

0xd701,	// (0x0005dbb8) area_vitu2_query_pane_g1

0x9028,	// (0x000594df) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x0005ff58) area_vitu2_query_pane_g

0x9037,	// (0x000594ee) area_vitu2_query_pane_t1_ParamLimits

0x9037,	// (0x000594ee) area_vitu2_query_pane_t1

0x9049,	// (0x00059500) area_vitu2_query_pane_t2_ParamLimits

0x9049,	// (0x00059500) area_vitu2_query_pane_t2

0x905b,	// (0x00059512) area_vitu2_query_pane_t3_ParamLimits

0x905b,	// (0x00059512) area_vitu2_query_pane_t3

0xd70d,	// (0x0005dbc4) area_vitu2_query_pane_t4_ParamLimits

0xd70d,	// (0x0005dbc4) area_vitu2_query_pane_t4

0xd735,	// (0x0005dbec) area_vitu2_query_pane_t5_ParamLimits

0xd735,	// (0x0005dbec) area_vitu2_query_pane_t5

0xd75d,	// (0x0005dc14) area_vitu2_query_pane_t6_ParamLimits

0xd75d,	// (0x0005dc14) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x0005ff5d) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x0005ff5d) area_vitu2_query_pane_t

0x9083,	// (0x0005953a) bg_button_pane_cp018

0x9090,	// (0x00059547) bg_button_pane_cp021

0x909c,	// (0x00059553) bg_button_pane_cp022

0x90ab,	// (0x00059562) input_focus_pane_cp09

0x5356,	// (0x0005580d) aid_size_touch_mv_arrow_left

0x20c6,	// (0x0005257d) aid_size_touch_mv_arrow_right

0x88bc,	// (0x00058d73) main_cset_slider_pane_g16_ParamLimits

0x88bc,	// (0x00058d73) main_cset_slider_pane_g16

0x88c8,	// (0x00058d7f) main_cset_slider_pane_g17_ParamLimits

0x88c8,	// (0x00058d7f) main_cset_slider_pane_g17

0x8fd1,	// (0x00059488) cell_cam4_burst_pane_g1_ParamLimits

0x0eea,	// (0x000513a1) compa_mode_pane

0x8ab0,	// (0x00058f67) popup_vtel_slider_window_g3_ParamLimits

0x8ab0,	// (0x00058f67) popup_vtel_slider_window_g3

0x8ac7,	// (0x00058f7e) popup_vtel_slider_window_g4_ParamLimits

0x8ac7,	// (0x00058f7e) popup_vtel_slider_window_g4

0x8ade,	// (0x00058f95) popup_vtel_slider_window_t1_ParamLimits

0x8ade,	// (0x00058f95) popup_vtel_slider_window_t1

0x0eea,	// (0x000513a1) main_cl_pane

0xc47f,	// (0x0005c936) popup_imed_adjust2_window_ParamLimits

0xc459,	// (0x0005c910) bg_tb_trans_pane_cp05_ParamLimits

0xcd65,	// (0x0005d21c) popup_imed_adjust2_window_g1_ParamLimits

0xcd74,	// (0x0005d22b) popup_imed_adjust2_window_g2_ParamLimits

0xcd74,	// (0x0005d22b) popup_imed_adjust2_window_g2

0xcd80,	// (0x0005d237) popup_imed_adjust2_window_g3_ParamLimits

0xcd80,	// (0x0005d237) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x0005fcc8) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x0005fcc8) popup_imed_adjust2_window_g

0xcd8c,	// (0x0005d243) popup_imed_adjust2_window_t1_ParamLimits

0xcda4,	// (0x0005d25b) slider_imed_adjust_pane_ParamLimits

0xcdb8,	// (0x0005d26f) slider_imed_adjust_pane_g1_ParamLimits

0xcdc8,	// (0x0005d27f) slider_imed_adjust_pane_g2_ParamLimits

0xcdd8,	// (0x0005d28f) slider_imed_adjust_pane_g3_ParamLimits

0xcde9,	// (0x0005d2a0) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x0005fccf) slider_imed_adjust_pane_g_ParamLimits

0x809d,	// (0x00058554) aid_touch_area_cam4_ParamLimits

0x809d,	// (0x00058554) aid_touch_area_cam4

0xef2e,	// (0x0005f3e5) battery_pane_cp01

0x8135,	// (0x000585ec) main_camera4_pane_g6_ParamLimits

0x8135,	// (0x000585ec) main_camera4_pane_g6

0x8156,	// (0x0005860d) main_camera4_pane_t2_ParamLimits

0x8156,	// (0x0005860d) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x0005fdd2) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x0005fdd2) main_camera4_pane_t

0x8184,	// (0x0005863b) aid_touch_area_vid4_ParamLimits

0x8184,	// (0x0005863b) aid_touch_area_vid4

0x81c6,	// (0x0005867d) main_video4_pane_g5_ParamLimits

0x81c6,	// (0x0005867d) main_video4_pane_g5

0x81e7,	// (0x0005869e) vid4_progress_pane_ParamLimits

0x81e7,	// (0x0005869e) vid4_progress_pane

0xd3de,	// (0x0005d895) main_cset_slider_pane_g18_ParamLimits

0xd3de,	// (0x0005d895) main_cset_slider_pane_g18

0xd5d1,	// (0x0005da88) cell_cam4_burst_pane_g2_ParamLimits

0xd5d1,	// (0x0005da88) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x0005ff31) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x0005ff31) cell_cam4_burst_pane_g

0x1670,	// (0x00051b27) bg_cl_pane_ParamLimits

0x1670,	// (0x00051b27) bg_cl_pane

0x90ba,	// (0x00059571) cl_header_pane_ParamLimits

0x90ba,	// (0x00059571) cl_header_pane

0x90ce,	// (0x00059585) cl_listscroll_pane_ParamLimits

0x90ce,	// (0x00059585) cl_listscroll_pane

0xd7a9,	// (0x0005dc60) bg_cl_pane_g1

0xd7b1,	// (0x0005dc68) bg_cl_pane_g2

0xd7b9,	// (0x0005dc70) bg_cl_pane_g3

0xd7c1,	// (0x0005dc78) bg_cl_pane_g4

0xd7c9,	// (0x0005dc80) bg_cl_pane_g5

0xd7d1,	// (0x0005dc88) bg_cl_pane_g6

0xd7d9,	// (0x0005dc90) bg_cl_pane_g7

0xd7e1,	// (0x0005dc98) bg_cl_pane_g8

0xd7e9,	// (0x0005dca0) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x0005ff6c) bg_cl_pane_g

0x90de,	// (0x00059595) aid_height_cl_leading_ParamLimits

0x90de,	// (0x00059595) aid_height_cl_leading

0x90ea,	// (0x000595a1) aid_height_cl_text_ParamLimits

0x90ea,	// (0x000595a1) aid_height_cl_text

0x257c,	// (0x00052a33) bg_cl_header_pane_ParamLimits

0x257c,	// (0x00052a33) bg_cl_header_pane

0x9109,	// (0x000595c0) cl_header_pane_g1_ParamLimits

0x9109,	// (0x000595c0) cl_header_pane_g1

0x911f,	// (0x000595d6) cl_header_pane_t1_ParamLimits

0x911f,	// (0x000595d6) cl_header_pane_t1

0xd7f1,	// (0x0005dca8) cl_list_pane

0xd7fa,	// (0x0005dcb1) hc_scroll_pane_cp01

0x1a7f,	// (0x00051f36) bg_cl_header_pane_g1

0xd2ab,	// (0x0005d762) bg_cl_header_pane_g2

0x1a9f,	// (0x00051f56) bg_cl_header_pane_g3

0xd2bb,	// (0x0005d772) bg_cl_header_pane_g4

0xd2b3,	// (0x0005d76a) bg_cl_header_pane_g5

0xd4ea,	// (0x0005d9a1) bg_cl_header_pane_g6

0xd2d3,	// (0x0005d78a) bg_cl_header_pane_g7

0xd2db,	// (0x0005d792) bg_cl_header_pane_g8

0xd2cb,	// (0x0005d782) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x0005ff7f) bg_cl_header_pane_g

0x9138,	// (0x000595ef) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9138,	// (0x000595ef) hc_cl_list_double_graphic_heading_pane

0x9148,	// (0x000595ff) hc_cl_list_single_graphic_pane_ParamLimits

0x9148,	// (0x000595ff) hc_cl_list_single_graphic_pane

0x915b,	// (0x00059612) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x915b,	// (0x00059612) hc_cl_list_single_graphic_pane_g1

0x9167,	// (0x0005961e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9167,	// (0x0005961e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x0005ff92) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x0005ff92) hc_cl_list_single_graphic_pane_g

0x917b,	// (0x00059632) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x917b,	// (0x00059632) hc_cl_list_single_graphic_pane_t1

0x915b,	// (0x00059612) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x915b,	// (0x00059612) hc_cl_list_double_graphic_heading_pane_g1

0x9190,	// (0x00059647) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9190,	// (0x00059647) hc_cl_list_double_graphic_heading_pane_g2

0x91a4,	// (0x0005965b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x91a4,	// (0x0005965b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x0005ff97) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x0005ff97) hc_cl_list_double_graphic_heading_pane_g

0x91b8,	// (0x0005966f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x91b8,	// (0x0005966f) hc_cl_list_double_graphic_heading_pane_t1

0x91cd,	// (0x00059684) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x91cd,	// (0x00059684) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x0005ff9e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x0005ff9e) hc_cl_list_double_graphic_heading_pane_t

0xf04b,	// (0x0005f502) vid4_progress_pane_g1

0xf05a,	// (0x0005f511) vid4_progress_pane_g2

0xf069,	// (0x0005f520) vid4_progress_pane_g3

0xf078,	// (0x0005f52f) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x0005ffa3) vid4_progress_pane_g

0xf090,	// (0x0005f547) vid4_progress_pane_t1

0xf0a6,	// (0x0005f55d) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x0005ffae) vid4_progress_pane_t

0xf0d0,	// (0x0005f587) wait_bar_pane_cp07

0xc697,	// (0x0005cb4e) blid_firmament_pane_ParamLimits

0xc6d8,	// (0x0005cb8f) popup_blid_sat_info2_window_g1

0xc6fc,	// (0x0005cbb3) popup_blid_sat_info2_window_t3

0xc70a,	// (0x0005cbc1) popup_blid_sat_info2_window_t4

0xc718,	// (0x0005cbcf) popup_blid_sat_info2_window_t5

0xc726,	// (0x0005cbdd) popup_blid_sat_info2_window_t6

0xc736,	// (0x0005cbed) popup_blid_sat_info2_window_t7

0xc744,	// (0x0005cbfb) popup_blid_sat_info2_window_t8

0xc752,	// (0x0005cc09) popup_blid_sat_info2_window_t9

0xc760,	// (0x0005cc17) popup_blid_sat_info2_window_t10

0xc81c,	// (0x0005ccd3) aid_firma_cardinal_ParamLimits

0xc830,	// (0x0005cce7) blid_firmament_pane_t1_ParamLimits

0xc847,	// (0x0005ccfe) blid_firmament_pane_t2_ParamLimits

0xc85e,	// (0x0005cd15) blid_firmament_pane_t3_ParamLimits

0xc875,	// (0x0005cd2c) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x0005fbc1) blid_firmament_pane_t_ParamLimits

0xc88c,	// (0x0005cd43) blid_sat_info_pane_ParamLimits

0x257c,	// (0x00052a33) main_cam_set_pane_ParamLimits

0x77e1,	// (0x00057c98) aid_size_cell_colour_35_ParamLimits

0x7801,	// (0x00057cb8) aid_size_cell_colour_112_ParamLimits

0x7821,	// (0x00057cd8) aid_size_cell_effect_ParamLimits

0xc459,	// (0x0005c910) bg_tb_trans_pane_cp02_ParamLimits

0x1ccc,	// (0x00052183) heading_imed_pane_ParamLimits

0x7841,	// (0x00057cf8) listscroll_imed_pane_ParamLimits

0xba4b,	// (0x0005bf02) popup_call2_audio_first_window_g5_ParamLimits

0xba4b,	// (0x0005bf02) popup_call2_audio_first_window_g5

0x7d5e,	// (0x00058215) aid_size_touch_image3_arrow_left_ParamLimits

0x7d5e,	// (0x00058215) aid_size_touch_image3_arrow_left

0x7d7e,	// (0x00058235) aid_size_touch_image3_arrow_right_ParamLimits

0x7d7e,	// (0x00058235) aid_size_touch_image3_arrow_right

0xf0bb,	// (0x0005f572) vid4_progress_pane_t3

0x7b15,	// (0x00057fcc) main_hwr_training_symbol_option_pane_ParamLimits

0x7b15,	// (0x00057fcc) main_hwr_training_symbol_option_pane

0xd044,	// (0x0005d4fb) popup_hwr_training_preview_window_ParamLimits

0xd044,	// (0x0005d4fb) popup_hwr_training_preview_window

0x7b31,	// (0x00057fe8) hwr_training_navi_pane_g5_ParamLimits

0x7b31,	// (0x00057fe8) hwr_training_navi_pane_g5

0xd299,	// (0x0005d750) popup_char_count_window

0xefbe,	// (0x0005f475) bg_popup_sub_pane_cp20_ParamLimits

0x8bf8,	// (0x000590af) list_vitu2_match_list_pane_ParamLimits

0x8c07,	// (0x000590be) vitu2_page_scroll_pane_ParamLimits

0x8c07,	// (0x000590be) vitu2_page_scroll_pane

0xd85d,	// (0x0005dd14) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd85d,	// (0x0005dd14) list_single_hwr_training_symbol_option_pane

0xd870,	// (0x0005dd27) list_single_hwr_training_symbol_option_pane_g1

0xd878,	// (0x0005dd2f) list_single_hwr_training_symbol_option_pane_t1

0xd886,	// (0x0005dd3d) bg_button_pane_cp023

0xd88f,	// (0x0005dd46) bg_button_pane_cp024

0x91e2,	// (0x00059699) vitu2_page_scroll_pane_g1

0x91ea,	// (0x000596a1) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x0005ffb5) vitu2_page_scroll_pane_g

0x91f2,	// (0x000596a9) vitu2_page_scroll_pane_t1

0xc5ef,	// (0x0005caa6) popup_char_count_window_g1

0xd8c2,	// (0x0005dd79) popup_char_count_window_g2

0xd8cb,	// (0x0005dd82) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x0005ffba) popup_char_count_window_g

0xd8d4,	// (0x0005dd8b) popup_char_count_window_t1

0x0eea,	// (0x000513a1) main_vded2_pane

0xcd53,	// (0x0005d20a) aid_size_cell_imed_line

0xcd5d,	// (0x0005d214) grid_imed_line_width_pane

0x8268,	// (0x0005871f) vid4_indicators_pane_g4

0xd8e2,	// (0x0005dd99) cell_imed_line_width_pane_ParamLimits

0xd8e2,	// (0x0005dd99) cell_imed_line_width_pane

0xd8f4,	// (0x0005ddab) cell_imed_line_width_pane_g1

0xc671,	// (0x0005cb28) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x0005ffc1) cell_imed_line_width_pane_g

0x9201,	// (0x000596b8) main_vded2_pane_g1_ParamLimits

0x9201,	// (0x000596b8) main_vded2_pane_g1

0x9217,	// (0x000596ce) main_vded2_pane_g2_ParamLimits

0x9217,	// (0x000596ce) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x0005ffc6) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x0005ffc6) main_vded2_pane_g

0x9227,	// (0x000596de) vded2_slider_pane_ParamLimits

0x9227,	// (0x000596de) vded2_slider_pane

0x923a,	// (0x000596f1) aid_size_touch_vded2_end

0x9242,	// (0x000596f9) aid_size_touch_vded2_playhead

0x924a,	// (0x00059701) aid_size_touch_vded2_start

0x9252,	// (0x00059709) vded2_slider_bg_pane

0x925b,	// (0x00059712) vded2_slider_pane_g1

0x9264,	// (0x0005971b) vded2_slider_pane_g2

0x926c,	// (0x00059723) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x0005ffcb) vded2_slider_pane_g

0x9275,	// (0x0005972c) vded2_slider_bg_pane_g1

0x927e,	// (0x00059735) vded2_slider_bg_pane_g2

0x9287,	// (0x0005973e) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x0005ffd2) vded2_slider_bg_pane_g

0x589c,	// (0x00055d53) aid_postcard_touch_down_pane_ParamLimits

0x589c,	// (0x00055d53) aid_postcard_touch_down_pane

0x58ae,	// (0x00055d65) aid_postcard_touch_up_pane_ParamLimits

0x58ae,	// (0x00055d65) aid_postcard_touch_up_pane

0x0eea,	// (0x000513a1) main_blid2_pane

0xc467,	// (0x0005c91e) popup_blid2_search_window

0x0eea,	// (0x000513a1) blid2_gps_pane

0x0eea,	// (0x000513a1) blid2_navig_pane

0x0eea,	// (0x000513a1) blid2_search_pane

0x0eea,	// (0x000513a1) blid2_tripm_pane

0x9290,	// (0x00059747) blid2_search_pane_g1_ParamLimits

0x9290,	// (0x00059747) blid2_search_pane_g1

0x92a4,	// (0x0005975b) blid2_search_pane_t1_ParamLimits

0x92a4,	// (0x0005975b) blid2_search_pane_t1

0x92b6,	// (0x0005976d) aid_size_cell_blid2_gps_ParamLimits

0x92b6,	// (0x0005976d) aid_size_cell_blid2_gps

0x92ce,	// (0x00059785) blid2_gps_pane_g1_ParamLimits

0x92ce,	// (0x00059785) blid2_gps_pane_g1

0x92e2,	// (0x00059799) grid_blid2_satellite_pane_ParamLimits

0x92e2,	// (0x00059799) grid_blid2_satellite_pane

0x92f6,	// (0x000597ad) blid2_navig_pane_g1_ParamLimits

0x92f6,	// (0x000597ad) blid2_navig_pane_g1

0x9302,	// (0x000597b9) blid2_navig_pane_t1_ParamLimits

0x9302,	// (0x000597b9) blid2_navig_pane_t1

0x931b,	// (0x000597d2) blid2_navig_pane_t2_ParamLimits

0x931b,	// (0x000597d2) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x0005ffd9) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x0005ffd9) blid2_navig_pane_t

0x9334,	// (0x000597eb) blid2_navig_ring_pane_ParamLimits

0x9334,	// (0x000597eb) blid2_navig_ring_pane

0x9349,	// (0x00059800) blid2_speed_pane_ParamLimits

0x9349,	// (0x00059800) blid2_speed_pane

0x9355,	// (0x0005980c) blid2_tripm_pane_g1_ParamLimits

0x9355,	// (0x0005980c) blid2_tripm_pane_g1

0x936a,	// (0x00059821) blid2_tripm_pane_g2_ParamLimits

0x936a,	// (0x00059821) blid2_tripm_pane_g2

0x937e,	// (0x00059835) blid2_tripm_pane_g3_ParamLimits

0x937e,	// (0x00059835) blid2_tripm_pane_g3

0x9392,	// (0x00059849) blid2_tripm_pane_g4_ParamLimits

0x9392,	// (0x00059849) blid2_tripm_pane_g4

0x93a6,	// (0x0005985d) blid2_tripm_pane_g5_ParamLimits

0x93a6,	// (0x0005985d) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x0005ffde) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x0005ffde) blid2_tripm_pane_g

0x93c8,	// (0x0005987f) blid2_tripm_pane_t1_ParamLimits

0x93c8,	// (0x0005987f) blid2_tripm_pane_t1

0x93df,	// (0x00059896) blid2_tripm_pane_t2_ParamLimits

0x93df,	// (0x00059896) blid2_tripm_pane_t2

0x93f6,	// (0x000598ad) blid2_tripm_pane_t3_ParamLimits

0x93f6,	// (0x000598ad) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x0005ffeb) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x0005ffeb) blid2_tripm_pane_t

0x9439,	// (0x000598f0) cell_blid2_satellite_pane_ParamLimits

0x9439,	// (0x000598f0) cell_blid2_satellite_pane

0x9451,	// (0x00059908) cell_blid2_satellite_pane_g1

0xd8fd,	// (0x0005ddb4) cell_blid2_satellite_pane_t1

0xc89c,	// (0x0005cd53) blid2_speed_pane_g1

0xd90b,	// (0x0005ddc2) blid2_speed_pane_t1

0xd919,	// (0x0005ddd0) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x0005fff4) blid2_speed_pane_t

0xc89c,	// (0x0005cd53) blid2_navig_ring_pane_g1

0x945a,	// (0x00059911) blid2_navig_ring_pane_g2

0x9462,	// (0x00059919) blid2_navig_ring_pane_g3

0x946a,	// (0x00059921) blid2_navig_ring_pane_g4

0x9472,	// (0x00059929) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x0005fff9) blid2_navig_ring_pane_g

0x0eea,	// (0x000513a1) bg_popup_window_pane_cp011

0xd927,	// (0x0005ddde) popup_blid2_search_window_g1

0xd92f,	// (0x0005dde6) popup_blid2_search_window_t1

0xd93d,	// (0x0005ddf4) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x00060004) popup_blid2_search_window_t

0x198e,	// (0x00051e45) main_browser_pane_g1

0x1670,	// (0x00051b27) main_browser_pane_ParamLimits

0xefbe,	// (0x0005f475) bg_button_pane_cp011_ParamLimits

0x84e5,	// (0x0005899c) cell_vitu2_function_pane_g1_ParamLimits

0xc459,	// (0x0005c910) bg_popup_sub_pane_cp22_ParamLimits

0x8d82,	// (0x00059239) input_focus_pane_cp08_ParamLimits

0x8d99,	// (0x00059250) popup_vitu2_query_button_pane_ParamLimits

0x8d99,	// (0x00059250) popup_vitu2_query_button_pane

0x8da9,	// (0x00059260) popup_vitu2_query_input_button_pane

0xd527,	// (0x0005d9de) popup_vitu2_query_window_g1_ParamLimits

0x8db1,	// (0x00059268) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x0005ff05) popup_vitu2_query_window_g_ParamLimits

0x0eea,	// (0x000513a1) bg_button_pane_cp026

0x947a,	// (0x00059931) popup_vitu2_query_input_button_pane_g1

0x0eea,	// (0x000513a1) bg_button_pane_cp025

0xd94b,	// (0x0005de02) popup_vitu2_query_button_pane_t1

0x6cef,	// (0x000571a6) main_mp3_pane_t6

0x6cfd,	// (0x000571b4) popup_slider_window_cp01

0xef56,	// (0x0005f40d) cam4_battery_pane

0xef56,	// (0x0005f40d) cam4_battery_pane_cp02

0xef56,	// (0x0005f40d) cam4_battery_pane_cp01

0xef56,	// (0x0005f40d) cam4_battery_pane_cp03

0xd144,	// (0x0005d5fb) cam4_battery_pane_g1

0xc89c,	// (0x0005cd53) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x00060009) cam4_battery_pane_g

0xc76e,	// (0x0005cc25) popup_blid_sat_info2_window_t11

0x5356,	// (0x0005580d) aid_size_touch_mv_arrow_left_ParamLimits

0x20c6,	// (0x0005257d) aid_size_touch_mv_arrow_right_ParamLimits

0x20fe,	// (0x000525b5) navi_pane_g1_ParamLimits

0x210a,	// (0x000525c1) navi_pane_g2_ParamLimits

0x536f,	// (0x00055826) navi_pane_g3_ParamLimits

0xf409,	// (0x0005f8c0) navi_pane_g_ParamLimits

0x5394,	// (0x0005584b) navi_pane_mv_t1_ParamLimits

0x784d,	// (0x00057d04) grid_imed_effect_pane_ParamLimits

0x4415,	// (0x000548cc) aid_placing_vt_slider_lsc

0x18d0,	// (0x00051d87) aid_placing_vt_slider_prt

0x257c,	// (0x00052a33) bg_tb_trans_pane_cp01_ParamLimits

0xc9eb,	// (0x0005cea2) popup_image_details_window_g1_ParamLimits

0xc9fe,	// (0x0005ceb5) popup_image_details_window_g2_ParamLimits

0xca13,	// (0x0005ceca) popup_image_details_window_g3_ParamLimits

0xca13,	// (0x0005ceca) popup_image_details_window_g3

0xf74f,	// (0x0005fc06) popup_image_details_window_g_ParamLimits

0xca27,	// (0x0005cede) popup_image_details_window_t1_ParamLimits

0xca39,	// (0x0005cef0) popup_image_details_window_t2_ParamLimits

0xca52,	// (0x0005cf09) popup_image_details_window_t3_ParamLimits

0xca66,	// (0x0005cf1d) popup_image_details_window_t4_ParamLimits

0xca81,	// (0x0005cf38) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x0005fc0d) popup_image_details_window_t_ParamLimits

0x90f6,	// (0x000595ad) cl_header_name_pane_ParamLimits

0x90f6,	// (0x000595ad) cl_header_name_pane

0x9482,	// (0x00059939) cl_header_name_pane_t1_ParamLimits

0x9482,	// (0x00059939) cl_header_name_pane_t1

0x94a3,	// (0x0005995a) cl_header_name_pane_t2_ParamLimits

0x94a3,	// (0x0005995a) cl_header_name_pane_t2

0x94e5,	// (0x0005999c) cl_header_name_pane_t3_ParamLimits

0x94e5,	// (0x0005999c) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x0006000e) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x0006000e) cl_header_name_pane_t

0x218c,	// (0x00052643) navi_pane_mv_g2_ParamLimits

0xd23a,	// (0x0005d6f1) field_vitu2_entry_pane_g1_ParamLimits

0xd246,	// (0x0005d6fd) field_vitu2_entry_pane_g2_ParamLimits

0xd252,	// (0x0005d709) field_vitu2_entry_pane_g3_ParamLimits

0xd252,	// (0x0005d709) field_vitu2_entry_pane_g3

0xf94d,	// (0x0005fe04) field_vitu2_entry_pane_g_ParamLimits

0x8461,	// (0x00058918) cell_vitu2_itu_pane_g1_ParamLimits

0x8471,	// (0x00058928) cell_vitu2_itu_pane_g2_ParamLimits

0x8471,	// (0x00058928) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x0005fe10) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x0005fe10) cell_vitu2_itu_pane_g

0xefbe,	// (0x0005f475) bg_vkb2_func_pane_cp05_ParamLimits

0xefbe,	// (0x0005f475) bg_vkb2_func_pane_cp05

0xefbe,	// (0x0005f475) bg_vkb2_func_pane_cp03

0xefbe,	// (0x0005f475) bg_vkb2_func_pane_cp04

0xefbe,	// (0x0005f475) bg_vkb2_func_pane_cp10_ParamLimits

0xefbe,	// (0x0005f475) bg_vkb2_func_pane_cp10

0x909c,	// (0x00059553) bg_vkb2_func_pane_cp08

0x9083,	// (0x0005953a) bg_vkb2_func_pane_cp06

0x9090,	// (0x00059547) bg_vkb2_func_pane_cp07

0xd898,	// (0x0005dd4f) bg_vkb2_func_pane_cp11_ParamLimits

0xd898,	// (0x0005dd4f) bg_vkb2_func_pane_cp11

0xd8ad,	// (0x0005dd64) bg_vkb2_func_pane_cp12_ParamLimits

0xd8ad,	// (0x0005dd64) bg_vkb2_func_pane_cp12

0x0eea,	// (0x000513a1) bg_vkb2_func_pane_cp09

0xd2ab,	// (0x0005d762) bg_vkb2_func_pane_g1

0x1a9f,	// (0x00051f56) bg_vkb2_func_pane_g2

0xd2b3,	// (0x0005d76a) bg_vkb2_func_pane_g3

0xd2bb,	// (0x0005d772) bg_vkb2_func_pane_g4

0xd4ea,	// (0x0005d9a1) bg_vkb2_func_pane_g5

0xd2d3,	// (0x0005d78a) bg_vkb2_func_pane_g6

0xd2db,	// (0x0005d792) bg_vkb2_func_pane_g7

0xd2cb,	// (0x0005d782) bg_vkb2_func_pane_g8

0x1a7f,	// (0x00051f36) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x00060015) bg_vkb2_func_pane_g

0x93b8,	// (0x0005986f) blid2_tripm_pane_g6_ParamLimits

0x93b8,	// (0x0005986f) blid2_tripm_pane_g6

0xd102,	// (0x0005d5b9) mp4_progress_pane_g1

0x9427,	// (0x000598de) blid2_tripm_values_pane_ParamLimits

0x9427,	// (0x000598de) blid2_tripm_values_pane

0x9516,	// (0x000599cd) blid2_tripm_values_pane_t1

0x9524,	// (0x000599db) blid2_tripm_values_pane_t2

0x9532,	// (0x000599e9) blid2_tripm_values_pane_t3

0x9540,	// (0x000599f7) blid2_tripm_values_pane_t4

0x954e,	// (0x00059a05) blid2_tripm_values_pane_t5

0x955c,	// (0x00059a13) blid2_tripm_values_pane_t6

0x956a,	// (0x00059a21) blid2_tripm_values_pane_t7

0x9578,	// (0x00059a2f) blid2_tripm_values_pane_t8

0x9586,	// (0x00059a3d) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x00060028) blid2_tripm_values_pane_t

0x444f,	// (0x00054906) call_video_pane_t1_ParamLimits

0x4469,	// (0x00054920) call_video_pane_t2_ParamLimits

0xf292,	// (0x0005f749) call_video_pane_t_ParamLimits

0x57e7,	// (0x00055c9e) msg_header_pane_g1_ParamLimits

0x2368,	// (0x0005281f) msg_header_pane_g2_ParamLimits

0x2368,	// (0x0005281f) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0005f963) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0005f963) msg_header_pane_g

0x1670,	// (0x00051b27) main_clock2_pane_ParamLimits

0x7589,	// (0x00057a40) grid_clock2_toolbar_pane_ParamLimits

0x7589,	// (0x00057a40) grid_clock2_toolbar_pane

0x7589,	// (0x00057a40) listscroll_clock2_pane_ParamLimits

0x7589,	// (0x00057a40) listscroll_clock2_pane

0x765b,	// (0x00057b12) main_clock2_pane_t3_ParamLimits

0x765b,	// (0x00057b12) main_clock2_pane_t3

0x7674,	// (0x00057b2b) main_clock2_pane_t4_ParamLimits

0x7674,	// (0x00057b2b) main_clock2_pane_t4

0xd959,	// (0x0005de10) cell_clock2_toolbar_pane

0xd961,	// (0x0005de18) cell_clock2_toolbar_pane_cp01

0xd961,	// (0x0005de18) cell_clock2_toolbar_pane_cp02

0xd969,	// (0x0005de20) cell_clock2_toolbar_pane_cp03

0xd971,	// (0x0005de28) list_clock2_pane

0x202e,	// (0x000524e5) scroll_pane_cp10

0xd979,	// (0x0005de30) list_single_clock2_pane_ParamLimits

0xd979,	// (0x0005de30) list_single_clock2_pane

0x21ed,	// (0x000526a4) list_highlight_pane_cp08

0xd986,	// (0x0005de3d) list_single_clock2_pane_t1

0xd994,	// (0x0005de4b) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x0006003b) list_single_clock2_pane_t

0x0eea,	// (0x000513a1) bg_button_pane_cp10

0xd9a2,	// (0x0005de59) cell_clock2_toolbar_pane_g1

0x5830,	// (0x00055ce7) aid_main_viewer_pane_g1_ParamLimits

0x5830,	// (0x00055ce7) aid_main_viewer_pane_g1

0x583c,	// (0x00055cf3) aid_main_viewer_pane_g2_ParamLimits

0x583c,	// (0x00055cf3) aid_main_viewer_pane_g2

0x5848,	// (0x00055cff) aid_main_viewer_pane_g3_ParamLimits

0x5848,	// (0x00055cff) aid_main_viewer_pane_g3

0x5857,	// (0x00055d0e) aid_main_viewer_pane_g4_ParamLimits

0x5857,	// (0x00055d0e) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0005f974) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0005f974) aid_main_viewer_pane_g

0x257c,	// (0x00052a33) main_calc_pane_ParamLimits

0x604b,	// (0x00056502) main_dialer2_pane_ParamLimits

0x0eea,	// (0x000513a1) main_cam6_pane

0x0eea,	// (0x000513a1) main_vid6_pane

0x7595,	// (0x00057a4c) listscroll_gen_pane_cp06_ParamLimits

0x7595,	// (0x00057a4c) listscroll_gen_pane_cp06

0x768d,	// (0x00057b44) main_clock2_pane_t5_ParamLimits

0x768d,	// (0x00057b44) main_clock2_pane_t5

0x76e2,	// (0x00057b99) aid_call2_pane_cp10_ParamLimits

0x76f4,	// (0x00057bab) aid_call_pane_cp10_ParamLimits

0x20ba,	// (0x00052571) popup_clock_analogue_window_cp10_g1_ParamLimits

0x20ba,	// (0x00052571) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7706,	// (0x00057bbd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7706,	// (0x00057bbd) popup_clock_analogue_window_cp10_g4_ParamLimits

0x20ba,	// (0x00052571) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x0005fcbd) popup_clock_analogue_window_cp10_g_ParamLimits

0x7718,	// (0x00057bcf) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd16c,	// (0x0005d623) cell_dialer2_keypad_pane_g2_ParamLimits

0xd16c,	// (0x0005d623) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x0005fda3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x0005fda3) cell_dialer2_keypad_pane_g

0x7d27,	// (0x000581de) cell_dialer2_keypad_pane_t1

0x87af,	// (0x00058c66) main_cset_text2_pane_ParamLimits

0x87af,	// (0x00058c66) main_cset_text2_pane

0xd701,	// (0x0005dbb8) area_vitu2_query_pane_g1_ParamLimits

0x9028,	// (0x000594df) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x0005ff58) area_vitu2_query_pane_g_ParamLimits

0xd785,	// (0x0005dc3c) area_vitu2_query_pane_t7_ParamLimits

0xd785,	// (0x0005dc3c) area_vitu2_query_pane_t7

0x9083,	// (0x0005953a) bg_button_pane_cp018_ParamLimits

0x9090,	// (0x00059547) bg_button_pane_cp021_ParamLimits

0x909c,	// (0x00059553) bg_button_pane_cp022_ParamLimits

0x909c,	// (0x00059553) bg_vkb2_func_pane_cp08_ParamLimits

0x9083,	// (0x0005953a) bg_vkb2_func_pane_cp06_ParamLimits

0x9090,	// (0x00059547) bg_vkb2_func_pane_cp07_ParamLimits

0x90ab,	// (0x00059562) input_focus_pane_cp09_ParamLimits

0xf0e0,	// (0x0005f597) cam6_autofocus_pane_ParamLimits

0xf0e0,	// (0x0005f597) cam6_autofocus_pane

0x9594,	// (0x00059a4b) cam6_image_uncrop_pane_ParamLimits

0x9594,	// (0x00059a4b) cam6_image_uncrop_pane

0x95a1,	// (0x00059a58) cam6_indi_pane_ParamLimits

0x95a1,	// (0x00059a58) cam6_indi_pane

0x95b7,	// (0x00059a6e) cam6_mode_pane_ParamLimits

0x95b7,	// (0x00059a6e) cam6_mode_pane

0x95c9,	// (0x00059a80) cam6_timer_pane_ParamLimits

0x95c9,	// (0x00059a80) cam6_timer_pane

0x95d5,	// (0x00059a8c) cam6_zoom_pane_ParamLimits

0x95d5,	// (0x00059a8c) cam6_zoom_pane

0x95e1,	// (0x00059a98) cam6_mode_pane_g1_ParamLimits

0x95e1,	// (0x00059a98) cam6_mode_pane_g1

0x95f1,	// (0x00059aa8) cam6_mode_pane_g2_ParamLimits

0x95f1,	// (0x00059aa8) cam6_mode_pane_g2

0x9601,	// (0x00059ab8) cam6_mode_pane_g3_ParamLimits

0x9601,	// (0x00059ab8) cam6_mode_pane_g3

0x9611,	// (0x00059ac8) cam6_mode_pane_g4_ParamLimits

0x9611,	// (0x00059ac8) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x00060040) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x00060040) cam6_mode_pane_g

0xd9aa,	// (0x0005de61) bg_tb_trans_pane_cp08_ParamLimits

0xd9aa,	// (0x0005de61) bg_tb_trans_pane_cp08

0xd9b8,	// (0x0005de6f) cam6_battery_pane_ParamLimits

0xd9b8,	// (0x0005de6f) cam6_battery_pane

0xd9ce,	// (0x0005de85) cam6_indi_pane_g1_ParamLimits

0xd9ce,	// (0x0005de85) cam6_indi_pane_g1

0xd9e0,	// (0x0005de97) cam6_indi_pane_g2_ParamLimits

0xd9e0,	// (0x0005de97) cam6_indi_pane_g2

0xd9f2,	// (0x0005dea9) cam6_indi_pane_g3_ParamLimits

0xd9f2,	// (0x0005dea9) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x00060049) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x00060049) cam6_indi_pane_g

0xda04,	// (0x0005debb) cam6_indi_pane_t1_ParamLimits

0xda04,	// (0x0005debb) cam6_indi_pane_t1

0x829a,	// (0x00058751) cam6_autofocus_pane_g1

0x8292,	// (0x00058749) cam6_autofocus_pane_g2

0x82aa,	// (0x00058761) cam6_autofocus_pane_g3

0x82a2,	// (0x00058759) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x00060050) cam6_autofocus_pane_g

0xda2a,	// (0x0005dee1) cam6_timer_pane_g1

0xda32,	// (0x0005dee9) cam6_timer_pane_t1

0xda40,	// (0x0005def7) cam6_zoom_cont_pane

0xda48,	// (0x0005deff) cam6_zoom_pane_g1

0xda50,	// (0x0005df07) cam6_zoom_pane_g2

0x9621,	// (0x00059ad8) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x00060059) cam6_zoom_pane_g

0xc89c,	// (0x0005cd53) cam6_battery_pane_g1

0xc89c,	// (0x0005cd53) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x0005fbca) cam6_battery_pane_g

0xda58,	// (0x0005df0f) cam6_zoom_cont_pane_g1

0xda61,	// (0x0005df18) cam6_zoom_cont_pane_g2

0xda6a,	// (0x0005df21) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x00060060) cam6_zoom_cont_pane_g

0x963e,	// (0x00059af5) cam6_mode_pane_cp_ParamLimits

0x963e,	// (0x00059af5) cam6_mode_pane_cp

0x9650,	// (0x00059b07) cam6_zoom_pane_cp_ParamLimits

0x9650,	// (0x00059b07) cam6_zoom_pane_cp

0x965c,	// (0x00059b13) vid6_image_uncrop_cif_pane_ParamLimits

0x965c,	// (0x00059b13) vid6_image_uncrop_cif_pane

0x966a,	// (0x00059b21) vid6_image_uncrop_nhd_pane_ParamLimits

0x966a,	// (0x00059b21) vid6_image_uncrop_nhd_pane

0x9677,	// (0x00059b2e) vid6_image_uncrop_vga_pane_ParamLimits

0x9677,	// (0x00059b2e) vid6_image_uncrop_vga_pane

0x9684,	// (0x00059b3b) vid6_image_uncrop_wvga_pane_ParamLimits

0x9684,	// (0x00059b3b) vid6_image_uncrop_wvga_pane

0x9691,	// (0x00059b48) vid6_indi_pane_ParamLimits

0x9691,	// (0x00059b48) vid6_indi_pane

0xd9aa,	// (0x0005de61) bg_tb_trans_pane_cp09_ParamLimits

0xd9aa,	// (0x0005de61) bg_tb_trans_pane_cp09

0xda7e,	// (0x0005df35) cam6_battery_pane_cp_ParamLimits

0xda7e,	// (0x0005df35) cam6_battery_pane_cp

0xda8a,	// (0x0005df41) vid6_indi_pane_g1_ParamLimits

0xda8a,	// (0x0005df41) vid6_indi_pane_g1

0xda9c,	// (0x0005df53) vid6_indi_pane_g2_ParamLimits

0xda9c,	// (0x0005df53) vid6_indi_pane_g2

0xdaae,	// (0x0005df65) vid6_indi_pane_g3_ParamLimits

0xdaae,	// (0x0005df65) vid6_indi_pane_g3

0xdac3,	// (0x0005df7a) vid6_indi_pane_g4_ParamLimits

0xdac3,	// (0x0005df7a) vid6_indi_pane_g4

0xdad8,	// (0x0005df8f) vid6_indi_pane_g5_ParamLimits

0xdad8,	// (0x0005df8f) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x00060067) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x00060067) vid6_indi_pane_g

0xdaf2,	// (0x0005dfa9) vid6_indi_pane_t1_ParamLimits

0xdaf2,	// (0x0005dfa9) vid6_indi_pane_t1

0xdb08,	// (0x0005dfbf) vid6_indi_pane_t2_ParamLimits

0xdb08,	// (0x0005dfbf) vid6_indi_pane_t2

0xdb30,	// (0x0005dfe7) vid6_indi_pane_t3_ParamLimits

0xdb30,	// (0x0005dfe7) vid6_indi_pane_t3

0xdb58,	// (0x0005e00f) vid6_indi_pane_t4_ParamLimits

0xdb58,	// (0x0005e00f) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x00060072) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x00060072) vid6_indi_pane_t

0xdb7c,	// (0x0005e033) wait_bar_pane_cp08

0x96a8,	// (0x00059b5f) main_cset_text2_pane_t1_ParamLimits

0x96a8,	// (0x00059b5f) main_cset_text2_pane_t1

0x9629,	// (0x00059ae0) listscroll_gen_pane_cp06_t1_ParamLimits

0x9629,	// (0x00059ae0) listscroll_gen_pane_cp06_t1

0x0eea,	// (0x000513a1) main_cam6_set_pane

0xef48,	// (0x0005f3ff) bg_tb_trans_pane_cp06_ParamLimits

0xef5e,	// (0x0005f415) cam4_indicators_pane_g1_ParamLimits

0xef6e,	// (0x0005f425) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x0005fde0) cam4_indicators_pane_g_ParamLimits

0xef8e,	// (0x0005f445) cam4_indicators_pane_t1_ParamLimits

0xefb0,	// (0x0005f467) bg_tb_trans_pane_cp07_ParamLimits

0x8241,	// (0x000586f8) vid4_indicators_pane_g1_ParamLimits

0x824e,	// (0x00058705) vid4_indicators_pane_g2_ParamLimits

0x825b,	// (0x00058712) vid4_indicators_pane_g3_ParamLimits

0x8268,	// (0x0005871f) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x0005fdf2) vid4_indicators_pane_g_ParamLimits

0x8280,	// (0x00058737) vid4_indicators_pane_t1_ParamLimits

0xf04b,	// (0x0005f502) vid4_progress_pane_g1_ParamLimits

0xf05a,	// (0x0005f511) vid4_progress_pane_g2_ParamLimits

0xf069,	// (0x0005f520) vid4_progress_pane_g3_ParamLimits

0xf078,	// (0x0005f52f) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x0005ffa3) vid4_progress_pane_g_ParamLimits

0xf090,	// (0x0005f547) vid4_progress_pane_t1_ParamLimits

0xf0a6,	// (0x0005f55d) vid4_progress_pane_t2_ParamLimits

0xf0bb,	// (0x0005f572) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x0005ffae) vid4_progress_pane_t_ParamLimits

0xf0d0,	// (0x0005f587) wait_bar_pane_cp07_ParamLimits

0x96c2,	// (0x00059b79) main_cam6_set_pane_g2_ParamLimits

0x96c2,	// (0x00059b79) main_cam6_set_pane_g2

0x96e4,	// (0x00059b9b) main_cset6_listscroll_pane_ParamLimits

0x96e4,	// (0x00059b9b) main_cset6_listscroll_pane

0x96fe,	// (0x00059bb5) main_cset6_slider_pane_ParamLimits

0x96fe,	// (0x00059bb5) main_cset6_slider_pane

0x9714,	// (0x00059bcb) main_cset6_text2_pane_ParamLimits

0x9714,	// (0x00059bcb) main_cset6_text2_pane

0xdb8c,	// (0x0005e043) main_cset6_text_pane

0xd3a1,	// (0x0005d858) main_cset_list_pane_copy1_ParamLimits

0xd3a1,	// (0x0005d858) main_cset_list_pane_copy1

0xd3b1,	// (0x0005d868) scroll_pane_cp028_copy1

0x9722,	// (0x00059bd9) cset_list_set_pane_copy1

0x9734,	// (0x00059beb) aid_position_infowindow_above_copy1

0x973c,	// (0x00059bf3) aid_position_infowindow_below_copy1

0x9744,	// (0x00059bfb) cset_list_set_pane_g1_copy1

0x8a76,	// (0x00058f2d) cset_list_set_pane_g3_copy1_ParamLimits

0x8a76,	// (0x00058f2d) cset_list_set_pane_g3_copy1

0x974c,	// (0x00059c03) cset_list_set_pane_t1_copy1_ParamLimits

0x974c,	// (0x00059c03) cset_list_set_pane_t1_copy1

0x257c,	// (0x00052a33) list_highlight_pane_cp021_copy1_ParamLimits

0x257c,	// (0x00052a33) list_highlight_pane_cp021_copy1

0xdb94,	// (0x0005e04b) cset6_slider_pane_ParamLimits

0xdb94,	// (0x0005e04b) cset6_slider_pane

0xdbc0,	// (0x0005e077) main_cset6_slider_pane_g1_ParamLimits

0xdbc0,	// (0x0005e077) main_cset6_slider_pane_g1

0x9761,	// (0x00059c18) main_cset6_slider_pane_g2_ParamLimits

0x9761,	// (0x00059c18) main_cset6_slider_pane_g2

0xd3c6,	// (0x0005d87d) main_cset6_slider_pane_g3_ParamLimits

0xd3c6,	// (0x0005d87d) main_cset6_slider_pane_g3

0x8874,	// (0x00058d2b) main_cset6_slider_pane_g4_ParamLimits

0x8874,	// (0x00058d2b) main_cset6_slider_pane_g4

0x88bc,	// (0x00058d73) main_cset6_slider_pane_g5_ParamLimits

0x88bc,	// (0x00058d73) main_cset6_slider_pane_g5

0xd3c6,	// (0x0005d87d) main_cset6_slider_pane_g7_ParamLimits

0xd3c6,	// (0x0005d87d) main_cset6_slider_pane_g7

0xd3d2,	// (0x0005d889) main_cset6_slider_pane_g8_ParamLimits

0xd3d2,	// (0x0005d889) main_cset6_slider_pane_g8

0x885c,	// (0x00058d13) main_cset6_slider_pane_g9_ParamLimits

0x885c,	// (0x00058d13) main_cset6_slider_pane_g9

0x8868,	// (0x00058d1f) main_cset6_slider_pane_g10_ParamLimits

0x8868,	// (0x00058d1f) main_cset6_slider_pane_g10

0x8874,	// (0x00058d2b) main_cset6_slider_pane_g11_ParamLimits

0x8874,	// (0x00058d2b) main_cset6_slider_pane_g11

0x8880,	// (0x00058d37) main_cset6_slider_pane_g12_ParamLimits

0x8880,	// (0x00058d37) main_cset6_slider_pane_g12

0x888c,	// (0x00058d43) main_cset6_slider_pane_g13_ParamLimits

0x888c,	// (0x00058d43) main_cset6_slider_pane_g13

0x8898,	// (0x00058d4f) main_cset6_slider_pane_g14_ParamLimits

0x8898,	// (0x00058d4f) main_cset6_slider_pane_g14

0x9789,	// (0x00059c40) main_cset6_slider_pane_g15_ParamLimits

0x9789,	// (0x00059c40) main_cset6_slider_pane_g15

0x88bc,	// (0x00058d73) main_cset6_slider_pane_g16_ParamLimits

0x88bc,	// (0x00058d73) main_cset6_slider_pane_g16

0x88c8,	// (0x00058d7f) main_cset6_slider_pane_g17_ParamLimits

0x88c8,	// (0x00058d7f) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x0006007b) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x0006007b) main_cset6_slider_pane_g

0xdbe8,	// (0x0005e09f) main_cset6_slider_pane_t1_ParamLimits

0xdbe8,	// (0x0005e09f) main_cset6_slider_pane_t1

0xdc29,	// (0x0005e0e0) main_cset6_slider_pane_t2_ParamLimits

0xdc29,	// (0x0005e0e0) main_cset6_slider_pane_t2

0xdc54,	// (0x0005e10b) main_cset6_slider_pane_t3_ParamLimits

0xdc54,	// (0x0005e10b) main_cset6_slider_pane_t3

0x97a1,	// (0x00059c58) main_cset6_slider_pane_t4_ParamLimits

0x97a1,	// (0x00059c58) main_cset6_slider_pane_t4

0x97cc,	// (0x00059c83) main_cset6_slider_pane_t5_ParamLimits

0x97cc,	// (0x00059c83) main_cset6_slider_pane_t5

0xdc7f,	// (0x0005e136) main_cset6_slider_pane_t7_ParamLimits

0xdc7f,	// (0x0005e136) main_cset6_slider_pane_t7

0x97f7,	// (0x00059cae) main_cset6_slider_pane_t8_ParamLimits

0x97f7,	// (0x00059cae) main_cset6_slider_pane_t8

0x981b,	// (0x00059cd2) main_cset6_slider_pane_t9_ParamLimits

0x981b,	// (0x00059cd2) main_cset6_slider_pane_t9

0x983f,	// (0x00059cf6) main_cset6_slider_pane_t10_ParamLimits

0x983f,	// (0x00059cf6) main_cset6_slider_pane_t10

0x9863,	// (0x00059d1a) main_cset6_slider_pane_t11_ParamLimits

0x9863,	// (0x00059d1a) main_cset6_slider_pane_t11

0xdcb5,	// (0x0005e16c) main_cset6_slider_pane_t14_ParamLimits

0xdcb5,	// (0x0005e16c) main_cset6_slider_pane_t14

0xdcee,	// (0x0005e1a5) main_cset6_slider_pane_t15_ParamLimits

0xdcee,	// (0x0005e1a5) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x000600a0) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x000600a0) main_cset6_slider_pane_t

0xdd27,	// (0x0005e1de) cset_slider_pane_g1_copy1

0xdd30,	// (0x0005e1e7) cset_slider_pane_g2_copy1

0xdd39,	// (0x0005e1f0) cset_slider_pane_g3_copy1

0x0eea,	// (0x000513a1) bg_popup_sub_pane_cp011_copy1

0xd533,	// (0x0005d9ea) main_cset_text_pane_g1_copy1

0xd53b,	// (0x0005d9f2) main_cset_text_pane_t1_copy1

0xd549,	// (0x0005da00) main_cset_text_pane_t2_copy1

0xd557,	// (0x0005da0e) main_cset_text_pane_t3_copy1

0xd565,	// (0x0005da1c) main_cset_text_pane_t4_copy1

0xd573,	// (0x0005da2a) main_cset_text_pane_t5_copy1

0xd581,	// (0x0005da38) main_cset_text_pane_t6_copy1

0xd58f,	// (0x0005da46) main_cset_text_pane_t7_copy1

0x9887,	// (0x00059d3e) main_cset_text2_pane_t1_copy1

0x0eea,	// (0x000513a1) main_ncimui_pane

0x6259,	// (0x00056710) popup_query_ncimui_window_ParamLimits

0x6259,	// (0x00056710) popup_query_ncimui_window

0xcb6c,	// (0x0005d023) field_cale_ev2_pane_g4_ParamLimits

0xcb6c,	// (0x0005d023) field_cale_ev2_pane_g4

0x7c19,	// (0x000580d0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7c19,	// (0x000580d0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x0005fd7e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x0005fd7e) cell_video_dialer_keypad_pane_g

0x7c31,	// (0x000580e8) cell_video_dialer_keypad_pane_t1

0x0eea,	// (0x000513a1) bg_popup_window_pane_cp012

0x1f07,	// (0x000523be) heading_pane_cp06

0xde37,	// (0x0005e2ee) ncim_query_content_pane

0x0eea,	// (0x000513a1) bg_popup_heading_pane_cp01

0xde3f,	// (0x0005e2f6) ncim_heading_pane_t1

0xde4d,	// (0x0005e304) ncim_indicator_popup_pane

0xde5f,	// (0x0005e316) ncim_query_button_pane

0xde73,	// (0x0005e32a) ncim_query_content_pane_t1

0xde85,	// (0x0005e33c) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x000600df) ncim_query_content_pane_t

0xdebf,	// (0x0005e376) ncim_query_list_pane

0xded1,	// (0x0005e388) ncim_query_popup_pane

0xde4d,	// (0x0005e304) ncim_indicator_popup_pane_ParamLimits

0x999a,	// (0x00059e51) ncim_query_content_pane_g1_ParamLimits

0x999a,	// (0x00059e51) ncim_query_content_pane_g1

0xde73,	// (0x0005e32a) ncim_query_content_pane_t1_ParamLimits

0xde85,	// (0x0005e33c) ncim_query_content_pane_t2_ParamLimits

0x99a6,	// (0x00059e5d) ncim_query_content_pane_t3_ParamLimits

0x99a6,	// (0x00059e5d) ncim_query_content_pane_t3

0x99ce,	// (0x00059e85) ncim_query_content_pane_t4_ParamLimits

0x99ce,	// (0x00059e85) ncim_query_content_pane_t4

0x99f6,	// (0x00059ead) ncim_query_content_pane_t5_ParamLimits

0x99f6,	// (0x00059ead) ncim_query_content_pane_t5

0xde97,	// (0x0005e34e) ncim_query_content_pane_t6_ParamLimits

0xde97,	// (0x0005e34e) ncim_query_content_pane_t6

0xfc28,	// (0x000600df) ncim_query_content_pane_t_ParamLimits

0xdebf,	// (0x0005e376) ncim_query_list_pane_ParamLimits

0xded1,	// (0x0005e388) ncim_query_popup_pane_ParamLimits

0xdee5,	// (0x0005e39c) wait_bar_pane_cp04

0x0eea,	// (0x000513a1) input_focus_pane_cp011

0xdeed,	// (0x0005e3a4) ncim_query_popup_pane_t1

0xdefb,	// (0x0005e3b2) ncim_list_query_list_pane_ParamLimits

0xdefb,	// (0x0005e3b2) ncim_list_query_list_pane

0x0eea,	// (0x000513a1) bg_button_pane_cp027

0xdf0e,	// (0x0005e3c5) ncim_query_button_pane_g1

0x0eea,	// (0x000513a1) list_highlight_pane_cp012

0xdf18,	// (0x0005e3cf) ncim_list_query_list_pane_g1

0xdf20,	// (0x0005e3d7) ncim_list_query_list_pane_t1

0xef7e,	// (0x0005f435) cam4_indicators_pane_g3_ParamLimits

0xef7e,	// (0x0005f435) cam4_indicators_pane_g3

0x8274,	// (0x0005872b) vid4_indicators_pane_g5_ParamLimits

0x8274,	// (0x0005872b) vid4_indicators_pane_g5

0xf084,	// (0x0005f53b) vid4_progress_pane_g5_ParamLimits

0xf084,	// (0x0005f53b) vid4_progress_pane_g5

0x98b5,	// (0x00059d6c) main_ncimui_pane_g1

0x990b,	// (0x00059dc2) ncimui_group_query_pane_ParamLimits

0x990b,	// (0x00059dc2) ncimui_group_query_pane

0x9947,	// (0x00059dfe) ncimui_list_pane_ParamLimits

0x9947,	// (0x00059dfe) ncimui_list_pane

0x9966,	// (0x00059e1d) ncimui_text_pane_ParamLimits

0x9966,	// (0x00059e1d) ncimui_text_pane

0x9a1e,	// (0x00059ed5) ncimui_text_pane_t1_ParamLimits

0x9a1e,	// (0x00059ed5) ncimui_text_pane_t1

0xdf37,	// (0x0005e3ee) ncimui_list_single_graphic_pane_ParamLimits

0xdf37,	// (0x0005e3ee) ncimui_list_single_graphic_pane

0x9a3c,	// (0x00059ef3) ncimui_query_pane_ParamLimits

0x9a3c,	// (0x00059ef3) ncimui_query_pane

0x0eea,	// (0x000513a1) list_highlight_pane_cp013

0xdf44,	// (0x0005e3fb) ncim_list_query_list_pane_t1_copy1

0xdf52,	// (0x0005e409) ncim_list_single_graphic_pane_g1

0xdf5a,	// (0x0005e411) ncim_query_button_pane_cp01

0xdf66,	// (0x0005e41d) ncim_query_entry_pane_ParamLimits

0xdf66,	// (0x0005e41d) ncim_query_entry_pane

0xdf79,	// (0x0005e430) ncimui_query_pane_g1

0xdf85,	// (0x0005e43c) ncimui_query_pane_t1_ParamLimits

0xdf85,	// (0x0005e43c) ncimui_query_pane_t1

0x257c,	// (0x00052a33) input_focus_pane_cp012

0xdf9e,	// (0x0005e455) ncim_query_entry_pane_t1

0x1670,	// (0x00051b27) main_im_pane_ParamLimits

0x257c,	// (0x00052a33) main_mobtv_pane_ParamLimits

0x257c,	// (0x00052a33) main_mobtv_pane

0x885c,	// (0x00058d13) main_cset6_slider_pane_g18_ParamLimits

0x885c,	// (0x00058d13) main_cset6_slider_pane_g18

0x888c,	// (0x00058d43) main_cset6_slider_pane_g19_ParamLimits

0x888c,	// (0x00058d43) main_cset6_slider_pane_g19

0xdfb0,	// (0x0005e467) bg_main_mobtv_pane_ParamLimits

0xdfb0,	// (0x0005e467) bg_main_mobtv_pane

0x9a4c,	// (0x00059f03) main_mobtv_info_pane

0x9a55,	// (0x00059f0c) main_mobtv_loading_pane_ParamLimits

0x9a55,	// (0x00059f0c) main_mobtv_loading_pane

0xdfbe,	// (0x0005e475) main_mobtv_pg_channel_list_pane

0xdfc8,	// (0x0005e47f) main_mobtv_pg_hdr_pane

0x9a62,	// (0x00059f19) main_mobtv_programe_curr_pane_ParamLimits

0x9a62,	// (0x00059f19) main_mobtv_programe_curr_pane

0x9a6f,	// (0x00059f26) main_mobtv_programe_next_pane_ParamLimits

0x9a6f,	// (0x00059f26) main_mobtv_programe_next_pane

0xdfd1,	// (0x0005e488) popup_mobtv_noti_window

0xc89c,	// (0x0005cd53) main_tv_pg_hdr_pane_g1

0xdfd9,	// (0x0005e490) main_tv_pg_hdr_pane_g2

0xdfe1,	// (0x0005e498) main_tv_pg_hdr_pane_g3

0xdfe9,	// (0x0005e4a0) main_tv_pg_hdr_pane_g4

0xdff1,	// (0x0005e4a8) main_tv_pg_hdr_pane_g5

0xdff9,	// (0x0005e4b0) main_tv_pg_hdr_pane_g6

0xe001,	// (0x0005e4b8) main_tv_pg_hdr_pane_g7

0xe009,	// (0x0005e4c0) main_tv_pg_hdr_pane_g8

0xe011,	// (0x0005e4c8) main_tv_pg_hdr_pane_g9

0xe019,	// (0x0005e4d0) main_tv_pg_hdr_pane_g10

0xe023,	// (0x0005e4da) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x000600ec) main_tv_pg_hdr_pane_g

0xe02d,	// (0x0005e4e4) main_tv_pg_hdr_pane_t1

0xe03b,	// (0x0005e4f2) main_tv_pg_hdr_pane_t2

0xe049,	// (0x0005e500) main_tv_pg_hdr_pane_t3

0xe057,	// (0x0005e50e) main_tv_pg_hdr_pane_t4

0xe065,	// (0x0005e51c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x00060103) main_tv_pg_hdr_pane_t

0xe073,	// (0x0005e52a) single_mobtv_pg_channel_pane_ParamLimits

0xe073,	// (0x0005e52a) single_mobtv_pg_channel_pane

0xe085,	// (0x0005e53c) single_mobtv_pg_channel_table_pane

0xe08e,	// (0x0005e545) single_mobtv_pg_channel_thumb_pane

0xe097,	// (0x0005e54e) single_tv_pg_channel_pane_g1

0xe0a0,	// (0x0005e557) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x0006010e) single_tv_pg_channel_pane_g

0xcacb,	// (0x0005cf82) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcacb,	// (0x0005cf82) bg_single_mobtv_pg_channel_thumb_pane

0xe0a9,	// (0x0005e560) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0a9,	// (0x0005e560) single_mobtv_pg_channel_thumb_pane_g1

0xe0b7,	// (0x0005e56e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0b7,	// (0x0005e56e) single_mobtv_pg_channel_thumb_pane_g2

0xe0c3,	// (0x0005e57a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0c3,	// (0x0005e57a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x00060113) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x00060113) single_mobtv_pg_channel_thumb_pane_g

0xe0cf,	// (0x0005e586) single_mobtv_pg_channel_thumb_pane_t1

0xe0dd,	// (0x0005e594) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x0006011a) single_mobtv_pg_channel_thumb_pane_t

0xc89c,	// (0x0005cd53) bg_single_mobtv_pg_channel_table_pane_g1

0xc89c,	// (0x0005cd53) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x0005fbca) bg_single_mobtv_pg_channel_table_pane_g

0xe0eb,	// (0x0005e5a2) single_mobtv_pg_channel_table_pane_t1

0xe0f9,	// (0x0005e5b0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x0006011f) single_mobtv_pg_channel_table_pane_t

0x9a84,	// (0x00059f3b) main_mobtv_info_pane_g1_ParamLimits

0x9a84,	// (0x00059f3b) main_mobtv_info_pane_g1

0x9aa0,	// (0x00059f57) main_mobtv_info_pane_t1_ParamLimits

0x9aa0,	// (0x00059f57) main_mobtv_info_pane_t1

0x9b06,	// (0x00059fbd) main_mobtv_info_pane_t2_ParamLimits

0x9b06,	// (0x00059fbd) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x00060129) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x00060129) main_mobtv_info_pane_t

0x9b89,	// (0x0005a040) wait_bar_pane_cp05

0x9b99,	// (0x0005a050) main_mobtv_loading_pane_g1_ParamLimits

0x9b99,	// (0x0005a050) main_mobtv_loading_pane_g1

0x9baa,	// (0x0005a061) main_mobtv_loading_pane_g2_ParamLimits

0x9baa,	// (0x0005a061) main_mobtv_loading_pane_g2

0x9bb6,	// (0x0005a06d) main_mobtv_loading_pane_g3_ParamLimits

0x9bb6,	// (0x0005a06d) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x00060130) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x00060130) main_mobtv_loading_pane_g

0xe107,	// (0x0005e5be) main_mobtv_loading_pane_t1_ParamLimits

0xe107,	// (0x0005e5be) main_mobtv_loading_pane_t1

0xe11f,	// (0x0005e5d6) main_mobtv_loading_pane_t2_ParamLimits

0xe11f,	// (0x0005e5d6) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x00060137) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x00060137) main_mobtv_loading_pane_t

0x9bc7,	// (0x0005a07e) wait_bar_pane_cp06_ParamLimits

0x9bc7,	// (0x0005a07e) wait_bar_pane_cp06

0xe143,	// (0x0005e5fa) main_mobtv_programe_curr_pane_t1

0xe151,	// (0x0005e608) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x0006013c) main_mobtv_programe_curr_pane_t

0xe15f,	// (0x0005e616) main_mobtv_programe_next_pane_t1

0xe16d,	// (0x0005e624) main_mobtv_programe_next_pane_t2

0xe17b,	// (0x0005e632) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x00060141) main_mobtv_programe_next_pane_t

0x0eea,	// (0x000513a1) bg_popup_mobtv_noti_window_pane

0xe189,	// (0x0005e640) popup_mobtv_noti_window_g1

0xe191,	// (0x0005e648) popup_mobtv_noti_window_t1

0xe19f,	// (0x0005e656) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x00060148) popup_mobtv_noti_window_t

0xc89c,	// (0x0005cd53) bg_popup_mobtv_noti_window_pane_g1

0x0eea,	// (0x000513a1) sc_clock_pane

0x0eea,	// (0x000513a1) main_fs_bigclock_pane

0x9411,	// (0x000598c8) blid2_tripm_pane_t4_ParamLimits

0x9411,	// (0x000598c8) blid2_tripm_pane_t4

0x9bd6,	// (0x0005a08d) sc_clock_pane_g1_ParamLimits

0x9bd6,	// (0x0005a08d) sc_clock_pane_g1

0x9be8,	// (0x0005a09f) sc_clock_pane_t1_ParamLimits

0x9be8,	// (0x0005a09f) sc_clock_pane_t1

0x9c0a,	// (0x0005a0c1) sc_clock_pane_t2_ParamLimits

0x9c0a,	// (0x0005a0c1) sc_clock_pane_t2

0x9c20,	// (0x0005a0d7) sc_clock_pane_t3_ParamLimits

0x9c20,	// (0x0005a0d7) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x0006014d) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x0006014d) sc_clock_pane_t

0xa85a,	// (0x0005ad11) main_fs_bigclock_indicator_pane_ParamLimits

0xa85a,	// (0x0005ad11) main_fs_bigclock_indicator_pane

0xca9b,	// (0x0005cf52) main_fs_bigclock_pane_g1_ParamLimits

0xca9b,	// (0x0005cf52) main_fs_bigclock_pane_g1

0xa866,	// (0x0005ad1d) main_fs_bigclock_pane_t1_ParamLimits

0xa866,	// (0x0005ad1d) main_fs_bigclock_pane_t1

0xa878,	// (0x0005ad2f) main_fs_bigclock_pane_t2_ParamLimits

0xa878,	// (0x0005ad2f) main_fs_bigclock_pane_t2

0xa88a,	// (0x0005ad41) main_fs_bigclock_pane_t3_ParamLimits

0xa88a,	// (0x0005ad41) main_fs_bigclock_pane_t3

0x0002,

0xfe90,	// (0x00060347) main_fs_bigclock_pane_t_ParamLimits

0xfe90,	// (0x00060347) main_fs_bigclock_pane_t

0x0443,	// (0x000508fa) main_fs_bigclock_indicator_pane_g1

0xde67,	// (0x0005e31e) ncim_query_content_pane_g2_ParamLimits

0xde67,	// (0x0005e31e) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x000600da) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x000600da) ncim_query_content_pane_g

0x9c35,	// (0x0005a0ec) sc_clock_pane_t4_ParamLimits

0x9c35,	// (0x0005a0ec) sc_clock_pane_t4

0x257c,	// (0x00052a33) main_radioblah_pane

0xd1c3,	// (0x0005d67a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd1c3,	// (0x0005d67a) cell_call4_button_pane_t1_copy1

0x98bd,	// (0x00059d74) main_ncimui_pane_t1_ParamLimits

0x98bd,	// (0x00059d74) main_ncimui_pane_t1

0x98d7,	// (0x00059d8e) main_ncimui_pane_t2_ParamLimits

0x98d7,	// (0x00059d8e) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x000600d3) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x000600d3) main_ncimui_pane_t

0xe2c9,	// (0x0005e780) main_radioblah_anim_pane_ParamLimits

0xe2c9,	// (0x0005e780) main_radioblah_anim_pane

0xe2da,	// (0x0005e791) main_radioblah_info_pane_ParamLimits

0xe2da,	// (0x0005e791) main_radioblah_info_pane

0xe2ee,	// (0x0005e7a5) main_radioblah_pane_t1_ParamLimits

0xe2ee,	// (0x0005e7a5) main_radioblah_pane_t1

0xe30a,	// (0x0005e7c1) main_radioblah_pane_t2_ParamLimits

0xe30a,	// (0x0005e7c1) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x0006016e) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x0006016e) main_radioblah_pane_t

0x9ccc,	// (0x0005a183) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9ccc,	// (0x0005a183) main_radioblah_rocker_ctrl_pane

0xe352,	// (0x0005e809) main_radioblah_info_pane_t1_ParamLimits

0xe352,	// (0x0005e809) main_radioblah_info_pane_t1

0x9d20,	// (0x0005a1d7) main_radioblah_info_pane_t2_ParamLimits

0x9d20,	// (0x0005a1d7) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x00060177) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x00060177) main_radioblah_info_pane_t

0xc89c,	// (0x0005cd53) main_radioblah_rocker_ctrl_pane_g1

0x9dce,	// (0x0005a285) main_radioblah_rocker_ctrl_pane_g2

0x9dd6,	// (0x0005a28d) main_radioblah_rocker_ctrl_pane_g3

0x9dde,	// (0x0005a295) main_radioblah_rocker_ctrl_pane_g4

0x9de6,	// (0x0005a29d) main_radioblah_rocker_ctrl_pane_g5

0x9dee,	// (0x0005a2a5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x00060180) main_radioblah_rocker_ctrl_pane_g

0x9887,	// (0x00059d3e) main_cset_text2_pane_t1_copy1_ParamLimits

0xef40,	// (0x0005f3f7) cam4_image_uncrop_qvga_pane

0xefa8,	// (0x0005f45f) vid4_image_uncrop_qcif_pane

0xf0e0,	// (0x0005f597) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0e0,	// (0x0005f597) cam6_image_uncrop_qvga_pane

0xda72,	// (0x0005df29) vid6_image_uncrop_qcif_pane_ParamLimits

0xda72,	// (0x0005df29) vid6_image_uncrop_qcif_pane

0x0eea,	// (0x000513a1) bg_popup_preview_window_pane_cp03

0xde0d,	// (0x0005e2c4) list_cset_text2_pane

0xde15,	// (0x0005e2cc) main_cset6_text2_pane_g1

0xde1d,	// (0x0005e2d4) main_cset6_text2_pane_t1

0x9df6,	// (0x0005a2ad) list_cset_text2_pane_t1_ParamLimits

0x9df6,	// (0x0005a2ad) list_cset_text2_pane_t1

0x257c,	// (0x00052a33) main_radioblah_pane_ParamLimits

0x9b77,	// (0x0005a02e) main_mobtv_info_pane_t3_ParamLimits

0x9b77,	// (0x0005a02e) main_mobtv_info_pane_t3

0x9cba,	// (0x0005a171) main_radioblah_pane_g1

0x9cf4,	// (0x0005a1ab) main_radioblah_info_pane_g1

0x9d73,	// (0x0005a22a) main_radioblah_info_pane_t3_ParamLimits

0x9d73,	// (0x0005a22a) main_radioblah_info_pane_t3

0x4f08,	// (0x000553bf) highlight_cell_cale_month_pane_ParamLimits

0x4f08,	// (0x000553bf) highlight_cell_cale_month_pane

0x0eea,	// (0x000513a1) main_phob_fisheye_pane

0xcc15,	// (0x0005d0cc) scroll_pane_cp0031_ParamLimits

0xcc15,	// (0x0005d0cc) scroll_pane_cp0031

0xdb7c,	// (0x0005e033) wait_bar_pane_cp08_ParamLimits

0x9722,	// (0x00059bd9) cset_list_set_pane_copy1_ParamLimits

0xe38c,	// (0x0005e843) highlight_cell_cale_month_pane_g1

0x9e0f,	// (0x0005a2c6) highlight_cell_cale_month_pane_t1

0xe394,	// (0x0005e84b) list_gen_pane_cp01

0xd3b1,	// (0x0005d868) scroll_pane_01

0x25aa,	// (0x00052a61) list_single_double_fisheye_pane

0xe39d,	// (0x0005e854) list_double_fisheye_pane_g1_ParamLimits

0xe39d,	// (0x0005e854) list_double_fisheye_pane_g1

0xe3a9,	// (0x0005e860) list_double_fisheye_pane_g2_ParamLimits

0xe3a9,	// (0x0005e860) list_double_fisheye_pane_g2

0x25b3,	// (0x00052a6a) list_double_fisheye_pane_g3_ParamLimits

0x25b3,	// (0x00052a6a) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x0006018d) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x0006018d) list_double_fisheye_pane_g

0xe3da,	// (0x0005e891) list_double_fisheye_pane_t1_ParamLimits

0xe3da,	// (0x0005e891) list_double_fisheye_pane_t1

0xe3f5,	// (0x0005e8ac) list_double_fisheye_pane_t2_ParamLimits

0xe3f5,	// (0x0005e8ac) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x00060198) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x00060198) list_double_fisheye_pane_t

0x0eea,	// (0x000513a1) main_call5_pane

0x9c5e,	// (0x0005a115) sc_swipe_pane_ParamLimits

0x9c5e,	// (0x0005a115) sc_swipe_pane

0x9e2e,	// (0x0005a2e5) call5_image_pane_ParamLimits

0x9e2e,	// (0x0005a2e5) call5_image_pane

0x9e43,	// (0x0005a2fa) call5_swipe_1_pane_ParamLimits

0x9e43,	// (0x0005a2fa) call5_swipe_1_pane

0x9e54,	// (0x0005a30b) call5_swipe_2_pane_ParamLimits

0x9e54,	// (0x0005a30b) call5_swipe_2_pane

0x9e79,	// (0x0005a330) popup_call5_audio_first_window_ParamLimits

0x9e79,	// (0x0005a330) popup_call5_audio_first_window

0xcacb,	// (0x0005cf82) call5_swipe_1_pane_g1_ParamLimits

0xcacb,	// (0x0005cf82) call5_swipe_1_pane_g1

0xe417,	// (0x0005e8ce) call5_swipe_1_pane_g2_ParamLimits

0xe417,	// (0x0005e8ce) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0006019d) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0006019d) call5_swipe_1_pane_g

0xe423,	// (0x0005e8da) call5_swipe_1_pane_t1_ParamLimits

0xe423,	// (0x0005e8da) call5_swipe_1_pane_t1

0xcacb,	// (0x0005cf82) call5_swipe_2_pane_g1_ParamLimits

0xcacb,	// (0x0005cf82) call5_swipe_2_pane_g1

0xe438,	// (0x0005e8ef) call5_swipe_2_pane_g2_ParamLimits

0xe438,	// (0x0005e8ef) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x000601a2) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x000601a2) call5_swipe_2_pane_g

0xe444,	// (0x0005e8fb) call5_swipe_2_pane_t1_ParamLimits

0xe444,	// (0x0005e8fb) call5_swipe_2_pane_t1

0xe459,	// (0x0005e910) sc_swipe_pane_g1_ParamLimits

0xe459,	// (0x0005e910) sc_swipe_pane_g1

0xe466,	// (0x0005e91d) sc_swipe_pane_g2_ParamLimits

0xe466,	// (0x0005e91d) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x000601a7) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x000601a7) sc_swipe_pane_g

0xe472,	// (0x0005e929) sc_swipe_pane_t1_ParamLimits

0xe472,	// (0x0005e929) sc_swipe_pane_t1

0x0eea,	// (0x000513a1) main_cmail_launcher_pane

0x9e88,	// (0x0005a33f) aid_size_cell_cmail_l_ParamLimits

0x9e88,	// (0x0005a33f) aid_size_cell_cmail_l

0x9ea1,	// (0x0005a358) grid_cmail_l_pane_ParamLimits

0x9ea1,	// (0x0005a358) grid_cmail_l_pane

0x9eb6,	// (0x0005a36d) cell_cmail_l_pane_ParamLimits

0x9eb6,	// (0x0005a36d) cell_cmail_l_pane

0x9ed8,	// (0x0005a38f) cell_cmail_l_pane_g1_ParamLimits

0x9ed8,	// (0x0005a38f) cell_cmail_l_pane_g1

0x9ee8,	// (0x0005a39f) cell_cmail_l_pane_t1_ParamLimits

0x9ee8,	// (0x0005a39f) cell_cmail_l_pane_t1

0xe487,	// (0x0005e93e) cell_cmail_l_pane_t2_ParamLimits

0xe487,	// (0x0005e93e) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x000601ac) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x000601ac) cell_cmail_l_pane_t

0x257c,	// (0x00052a33) grid_highlight_pane_cp018_ParamLimits

0x257c,	// (0x00052a33) grid_highlight_pane_cp018

0x362b,	// (0x00053ae2) main2_pane_ParamLimits

0x362b,	// (0x00053ae2) main2_pane

0x171b,	// (0x00051bd2) popup_sp_fs_action_menu_bg_pane_g1

0x1723,	// (0x00051bda) popup_sp_fs_action_menu_bg_pane_g2

0x172b,	// (0x00051be2) popup_sp_fs_action_menu_bg_pane_g3

0x1733,	// (0x00051bea) popup_sp_fs_action_menu_bg_pane_g4

0x173b,	// (0x00051bf2) popup_sp_fs_action_menu_bg_pane_g5

0x1743,	// (0x00051bfa) popup_sp_fs_action_menu_bg_pane_g6

0x174b,	// (0x00051c02) popup_sp_fs_action_menu_bg_pane_g7

0x1753,	// (0x00051c0a) popup_sp_fs_action_menu_bg_pane_g8

0x175b,	// (0x00051c12) popup_sp_fs_action_menu_bg_pane_g9

0x1763,	// (0x00051c1a) popup_sp_fs_action_menu_bg_pane_g10

0x1763,	// (0x00051c1a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0005f663) popup_sp_fs_action_menu_bg_pane_g

0xb145,	// (0x0005b5fc) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x2_t3_g3_g1

0xb151,	// (0x0005b608) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_x2_t3_g3_g2

0xb15d,	// (0x0005b614) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb15d,	// (0x0005b614) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0005f713) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0005f713) list_medium_line_x2_t3_g3_g

0xb169,	// (0x0005b620) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb169,	// (0x0005b620) list_medium_line_x2_t3_g3_t1

0x4364,	// (0x0005481b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4364,	// (0x0005481b) list_medium_line_x2_t3_g3_t2

0xb17e,	// (0x0005b635) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb17e,	// (0x0005b635) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0005f71a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0005f71a) list_medium_line_x2_t3_g3_t

0xb145,	// (0x0005b5fc) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x2_t3_g2_g1

0xb15d,	// (0x0005b614) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb15d,	// (0x0005b614) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0005f721) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0005f721) list_medium_line_x2_t3_g2_g

0xb193,	// (0x0005b64a) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb193,	// (0x0005b64a) list_medium_line_x2_t3_g2_t1

0xb1a9,	// (0x0005b660) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb1a9,	// (0x0005b660) list_medium_line_x2_t3_g2_t2

0xb17e,	// (0x0005b635) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb17e,	// (0x0005b635) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0005f726) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0005f726) list_medium_line_x2_t3_g2_t

0xb145,	// (0x0005b5fc) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x2_t4_g4_g1

0xb1bb,	// (0x0005b672) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb1bb,	// (0x0005b672) list_medium_line_x2_t4_g4_g2

0xb151,	// (0x0005b608) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_x2_t4_g4_g3

0xb1c7,	// (0x0005b67e) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb1c7,	// (0x0005b67e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0005f72d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0005f72d) list_medium_line_x2_t4_g4_g

0x4376,	// (0x0005482d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4376,	// (0x0005482d) list_medium_line_x2_t4_g4_t1

0x438d,	// (0x00054844) list_medium_line_x2_t4_g4_t2_ParamLimits

0x438d,	// (0x00054844) list_medium_line_x2_t4_g4_t2

0x43a2,	// (0x00054859) list_medium_line_x2_t4_g4_t3_ParamLimits

0x43a2,	// (0x00054859) list_medium_line_x2_t4_g4_t3

0xb1d3,	// (0x0005b68a) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb1d3,	// (0x0005b68a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0005f736) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0005f736) list_medium_line_x2_t4_g4_t

0xb145,	// (0x0005b5fc) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x2_t2_g4_g1

0xb1bb,	// (0x0005b672) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb1bb,	// (0x0005b672) list_medium_line_x2_t2_g4_g2

0xb151,	// (0x0005b608) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_x2_t2_g4_g3

0xb15d,	// (0x0005b614) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb15d,	// (0x0005b614) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0005f79d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0005f79d) list_medium_line_x2_t2_g4_g

0xb1e5,	// (0x0005b69c) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb1e5,	// (0x0005b69c) list_medium_line_x2_t2_g4_t1

0xb17e,	// (0x0005b635) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb17e,	// (0x0005b635) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0005f7a6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0005f7a6) list_medium_line_x2_t2_g4_t

0xb145,	// (0x0005b5fc) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x2_t2_g3_g1

0xb151,	// (0x0005b608) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_x2_t2_g3_g2

0xb15d,	// (0x0005b614) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb15d,	// (0x0005b614) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0005f713) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0005f713) list_medium_line_x2_t2_g3_g

0xb1fa,	// (0x0005b6b1) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb1fa,	// (0x0005b6b1) list_medium_line_x2_t2_g3_t1

0xb17e,	// (0x0005b635) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb17e,	// (0x0005b635) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0005f7ab) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0005f7ab) list_medium_line_x2_t2_g3_t

0x5040,	// (0x000554f7) main_sp_fs_list_pane_ParamLimits

0x5040,	// (0x000554f7) main_sp_fs_list_pane

0x504d,	// (0x00055504) sp_fs_scroll_pane_ParamLimits

0x504d,	// (0x00055504) sp_fs_scroll_pane

0x505a,	// (0x00055511) list_medium_line_x2_t3_t1

0x506a,	// (0x00055521) list_medium_line_x2_t3_t2

0xb23d,	// (0x0005b6f4) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0005f7f6) list_medium_line_x2_t3_t

0x5078,	// (0x0005552f) list_medium_line_x3_t4_t1

0x5088,	// (0x0005553f) list_medium_line_x3_t4_t2

0xb24b,	// (0x0005b702) list_medium_line_x3_t4_t3

0xb259,	// (0x0005b710) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0005f7fd) list_medium_line_x3_t4_t

0x5096,	// (0x0005554d) list_medium_line_x4_t5_t1

0x50a6,	// (0x0005555d) list_medium_line_x4_t5_t2

0xb24b,	// (0x0005b702) list_medium_line_x4_t5_t3

0xb267,	// (0x0005b71e) list_medium_line_x4_t5_t4

0xb259,	// (0x0005b710) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0005f806) list_medium_line_x4_t5_t

0xb145,	// (0x0005b5fc) list_medium_line_t4_g4_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_t4_g4_g1

0xb1c7,	// (0x0005b67e) list_medium_line_t4_g4_g2_ParamLimits

0xb1c7,	// (0x0005b67e) list_medium_line_t4_g4_g2

0xb275,	// (0x0005b72c) list_medium_line_t4_g4_g3_ParamLimits

0xb275,	// (0x0005b72c) list_medium_line_t4_g4_g3

0xb15d,	// (0x0005b614) list_medium_line_t4_g4_g4_ParamLimits

0xb15d,	// (0x0005b614) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0005f811) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0005f811) list_medium_line_t4_g4_g

0xb281,	// (0x0005b738) list_medium_line_t4_g4_t1_ParamLimits

0xb281,	// (0x0005b738) list_medium_line_t4_g4_t1

0xb296,	// (0x0005b74d) list_medium_line_t4_g4_t2_ParamLimits

0xb296,	// (0x0005b74d) list_medium_line_t4_g4_t2

0xb2ac,	// (0x0005b763) list_medium_line_t4_g4_t3_ParamLimits

0xb2ac,	// (0x0005b763) list_medium_line_t4_g4_t3

0xb2c2,	// (0x0005b779) list_medium_line_t4_g4_t4_ParamLimits

0xb2c2,	// (0x0005b779) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0005f81a) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0005f81a) list_medium_line_t4_g4_t

0x5175,	// (0x0005562c) chi_dic_find_pane_g1

0x605f,	// (0x00056516) main_tport_pane

0xd4dc,	// (0x0005d993) list_medium_line_plain_t1

0xb145,	// (0x0005b5fc) list_medium_line_t2_g2_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_t2_g2_g1

0xb151,	// (0x0005b608) list_medium_line_t2_g2_g2_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x0005fee9) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x0005fee9) list_medium_line_t2_g2_g

0x8c16,	// (0x000590cd) list_medium_line_t2_g2_t1_ParamLimits

0x8c16,	// (0x000590cd) list_medium_line_t2_g2_t1

0x8c2d,	// (0x000590e4) list_medium_line_t2_g2_t2_ParamLimits

0x8c2d,	// (0x000590e4) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x0005feee) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x0005feee) list_medium_line_t2_g2_t

0xd803,	// (0x0005dcba) aid_sp_fs_list_icon_a_sm

0xd80b,	// (0x0005dcc2) aid_sp_fs_list_icon_d

0xd813,	// (0x0005dcca) aid_sp_fs_text_primary

0xd81c,	// (0x0005dcd3) aid_sp_fs_text_secondary

0xd825,	// (0x0005dcdc) list_medium_line

0xd825,	// (0x0005dcdc) list_medium_line_g2

0xd825,	// (0x0005dcdc) list_medium_line_g3

0xd825,	// (0x0005dcdc) list_medium_line_plain

0xd825,	// (0x0005dcdc) list_medium_line_plain_t2

0xd825,	// (0x0005dcdc) list_medium_line_plain_t3

0xd825,	// (0x0005dcdc) list_medium_line_right_icon

0xd825,	// (0x0005dcdc) list_medium_line_right_iconx2

0xd825,	// (0x0005dcdc) list_medium_line_t2

0xd825,	// (0x0005dcdc) list_medium_line_t2_g2

0xd825,	// (0x0005dcdc) list_medium_line_t2_g3

0xd825,	// (0x0005dcdc) list_medium_line_t2_right_icon

0xd825,	// (0x0005dcdc) list_medium_line_t2_right_iconx2

0xd825,	// (0x0005dcdc) list_medium_line_t3

0xd825,	// (0x0005dcdc) list_medium_line_t3_g2

0xd825,	// (0x0005dcdc) list_medium_line_t3_g3

0xd825,	// (0x0005dcdc) list_medium_line_t3_right_iconx2

0xd82e,	// (0x0005dce5) list_medium_line_t4_g4

0xd837,	// (0x0005dcee) list_medium_line_x2

0xd837,	// (0x0005dcee) list_medium_line_x2_t2_g2

0xd837,	// (0x0005dcee) list_medium_line_x2_t2_g3

0xd837,	// (0x0005dcee) list_medium_line_x2_t2_g4

0xd837,	// (0x0005dcee) list_medium_line_x2_t3

0xd837,	// (0x0005dcee) list_medium_line_x2_t3_g2

0xd837,	// (0x0005dcee) list_medium_line_x2_t3_g3

0xd837,	// (0x0005dcee) list_medium_line_x2_t3_g4

0xd837,	// (0x0005dcee) list_medium_line_x2_t4_g2

0xd837,	// (0x0005dcee) list_medium_line_x2_t4_g4

0xd840,	// (0x0005dcf7) list_medium_line_x3

0xd840,	// (0x0005dcf7) list_medium_line_x3_t4

0xd840,	// (0x0005dcf7) list_medium_line_x3_t4_g4

0xd82e,	// (0x0005dce5) list_medium_line_x4_t4

0xd82e,	// (0x0005dce5) list_medium_line_x4_t4_g7

0xd82e,	// (0x0005dce5) list_medium_line_x4_t5

0xd849,	// (0x0005dd00) list_single_fs_dyc_pane_ParamLimits

0xd849,	// (0x0005dd00) list_single_fs_dyc_pane

0xb145,	// (0x0005b5fc) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x4_t4_g7_g1

0xdd42,	// (0x0005e1f9) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdd42,	// (0x0005e1f9) list_medium_line_x4_t4_g7_g2

0xdd4e,	// (0x0005e205) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdd4e,	// (0x0005e205) list_medium_line_x4_t4_g7_g3

0xdd5d,	// (0x0005e214) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdd5d,	// (0x0005e214) list_medium_line_x4_t4_g7_g4

0xdd69,	// (0x0005e220) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdd69,	// (0x0005e220) list_medium_line_x4_t4_g7_g5

0xdd78,	// (0x0005e22f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdd78,	// (0x0005e22f) list_medium_line_x4_t4_g7_g6

0xdd87,	// (0x0005e23e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdd87,	// (0x0005e23e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x000600b9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x000600b9) list_medium_line_x4_t4_g7_g

0xdd93,	// (0x0005e24a) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdd93,	// (0x0005e24a) list_medium_line_x4_t4_g7_t1

0xdda8,	// (0x0005e25f) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdda8,	// (0x0005e25f) list_medium_line_x4_t4_g7_t2

0xddbd,	// (0x0005e274) list_medium_line_x4_t4_g7_t3_ParamLimits

0xddbd,	// (0x0005e274) list_medium_line_x4_t4_g7_t3

0xddd2,	// (0x0005e289) list_medium_line_x4_t4_g7_t4_ParamLimits

0xddd2,	// (0x0005e289) list_medium_line_x4_t4_g7_t4

0xdde4,	// (0x0005e29b) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdde4,	// (0x0005e29b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x000600c8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x000600c8) list_medium_line_x4_t4_g7_t

0xddf6,	// (0x0005e2ad) list_single_dyc_row_pane_ParamLimits

0xddf6,	// (0x0005e2ad) list_single_dyc_row_pane

0x9e1d,	// (0x0005a2d4) call5_gesture_pane_ParamLimits

0x9e1d,	// (0x0005a2d4) call5_gesture_pane

0x9e65,	// (0x0005a31c) call5_windows_pane_ParamLimits

0x9e65,	// (0x0005a31c) call5_windows_pane

0x9efe,	// (0x0005a3b5) call5_swipe_1_pane_cp_ParamLimits

0x9efe,	// (0x0005a3b5) call5_swipe_1_pane_cp

0x9f0a,	// (0x0005a3c1) call5_swipe_2_pane_cp_ParamLimits

0x9f0a,	// (0x0005a3c1) call5_swipe_2_pane_cp

0x21ed,	// (0x000526a4) call5_image_pane_cp

0x9f16,	// (0x0005a3cd) popup_call5_audio_first_window_cp_ParamLimits

0x9f16,	// (0x0005a3cd) popup_call5_audio_first_window_cp

0xe459,	// (0x0005e910) call5_swipe_1_pane_g1_cp_ParamLimits

0xe459,	// (0x0005e910) call5_swipe_1_pane_g1_cp

0xe499,	// (0x0005e950) call5_swipe_1_pane_g2_cp

0xe472,	// (0x0005e929) call5_swipe_1_pane_t1_cp_ParamLimits

0xe472,	// (0x0005e929) call5_swipe_1_pane_t1_cp

0xe459,	// (0x0005e910) call5_swipe_2_pane_g1_cp_ParamLimits

0xe459,	// (0x0005e910) call5_swipe_2_pane_g1_cp

0xe4a1,	// (0x0005e958) call5_swipe_2_pane_g2_cp

0xe4a9,	// (0x0005e960) call5_swipe_2_pane_t1_cp_ParamLimits

0xe4a9,	// (0x0005e960) call5_swipe_2_pane_t1_cp

0x257c,	// (0x00052a33) main_sp_fs_email_pane

0xe4be,	// (0x0005e975) main_sp_fs_listscroll_pane_te

0x9f22,	// (0x0005a3d9) popup_sp_fs_action_menu_pane_ParamLimits

0x9f22,	// (0x0005a3d9) popup_sp_fs_action_menu_pane

0xc89c,	// (0x0005cd53) bg_sp_fs_ctrlbar_pane_g1

0xe4c7,	// (0x0005e97e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4d0,	// (0x0005e987) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe4d9,	// (0x0005e990) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc89c,	// (0x0005cd53) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x000601b1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc689,	// (0x0005cb40) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc689,	// (0x0005cb40) bg_sp_fs_ctrlbar_ddmenu_pane

0xe4e2,	// (0x0005e999) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe4e2,	// (0x0005e999) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x25bf,	// (0x00052a76) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x25bf,	// (0x00052a76) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x000601ba) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x000601ba) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe4ee,	// (0x0005e9a5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe4ee,	// (0x0005e9a5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe508,	// (0x0005e9bf) list_medium_line_t2_right_icon_g1

0xe510,	// (0x0005e9c7) list_medium_line_t2_right_icon_t1

0x9f52,	// (0x0005a409) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x000601bf) list_medium_line_t2_right_icon_t

0xc459,	// (0x0005c910) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc459,	// (0x0005c910) bg_sp_fs_ctrlbar_pane

0x9fa9,	// (0x0005a460) main_sp_fs_ctrlbar_button_pane_cp01

0x9fb1,	// (0x0005a468) main_sp_fs_ctrlbar_ddmenu_pane

0xe558,	// (0x0005ea0f) main_sp_fs_ctrlbar_pane_g1

0xe564,	// (0x0005ea1b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x000601c4) main_sp_fs_ctrlbar_pane_g

0xe570,	// (0x0005ea27) main_sp_fs_ctrlbar_pane_t1

0x9fbb,	// (0x0005a472) main_sp_fs_ctrlbar_pane

0x9fdc,	// (0x0005a493) main_sp_fs_listscroll_pane_te_cp01

0x9ffc,	// (0x0005a4b3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9ffc,	// (0x0005a4b3) popup_sp_fs_action_menu_pane_cp01

0x257c,	// (0x00052a33) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x257c,	// (0x00052a33) bg_sp_fs_highlight_list_pane_cp01

0xa01b,	// (0x0005a4d2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa01b,	// (0x0005a4d2) sp_fs_action_menu_list_gene_pane_g1

0xe585,	// (0x0005ea3c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe585,	// (0x0005ea3c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x000601c9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x000601c9) sp_fs_action_menu_list_gene_pane_g

0xe592,	// (0x0005ea49) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe592,	// (0x0005ea49) sp_fs_action_menu_list_gene_pane_t1

0xa02a,	// (0x0005a4e1) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa02a,	// (0x0005a4e1) sp_fs_action_menu_list_gene_pane

0xe5aa,	// (0x0005ea61) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5aa,	// (0x0005ea61) popup_sp_fs_action_menu_bg_pane

0xa047,	// (0x0005a4fe) sp_fs_action_menu_list_pane_ParamLimits

0xa047,	// (0x0005a4fe) sp_fs_action_menu_list_pane

0xe5b8,	// (0x0005ea6f) sp_fs_scroll_pane_cp01_ParamLimits

0xe5b8,	// (0x0005ea6f) sp_fs_scroll_pane_cp01

0xa063,	// (0x0005a51a) list_medium_line_plain_t2_t1

0xa073,	// (0x0005a52a) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x000601ce) list_medium_line_plain_t2_t

0xa081,	// (0x0005a538) list_medium_line_plain_t3_t1

0xa091,	// (0x0005a548) list_medium_line_plain_t3_t2

0xa09f,	// (0x0005a556) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x000601d3) list_medium_line_plain_t3_t

0xb145,	// (0x0005b5fc) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x2_t2_g2_g1

0xb15d,	// (0x0005b614) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb15d,	// (0x0005b614) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0005f721) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0005f721) list_medium_line_x2_t2_g2_g

0xb281,	// (0x0005b738) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb281,	// (0x0005b738) list_medium_line_x2_t2_g2_t1

0xb17e,	// (0x0005b635) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb17e,	// (0x0005b635) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x000601da) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x000601da) list_medium_line_x2_t2_g2_t

0xb145,	// (0x0005b5fc) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x2_t4_g2_g1

0xe5de,	// (0x0005ea95) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe5de,	// (0x0005ea95) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd28,	// (0x000601df) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd28,	// (0x000601df) list_medium_line_x2_t4_g2_g

0xa0ad,	// (0x0005a564) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa0ad,	// (0x0005a564) list_medium_line_x2_t4_g2_t1

0xa0c7,	// (0x0005a57e) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa0c7,	// (0x0005a57e) list_medium_line_x2_t4_g2_t2

0xa0dc,	// (0x0005a593) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa0dc,	// (0x0005a593) list_medium_line_x2_t4_g2_t3

0xb17e,	// (0x0005b635) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb17e,	// (0x0005b635) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd2d,	// (0x000601e4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd2d,	// (0x000601e4) list_medium_line_x2_t4_g2_t

0xe5ef,	// (0x0005eaa6) list_medium_line_t3_right_iconx2_g1

0xe508,	// (0x0005e9bf) list_medium_line_t3_right_iconx2_g2

0xa0f1,	// (0x0005a5a8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd36,	// (0x000601ed) list_medium_line_t3_right_iconx2_g

0xa0f9,	// (0x0005a5b0) list_medium_line_t3_right_iconx2_t1

0xa109,	// (0x0005a5c0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd3d,	// (0x000601f4) list_medium_line_t3_right_iconx2_t

0xb145,	// (0x0005b5fc) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x3_t4_g4_g1

0xb151,	// (0x0005b608) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_x3_t4_g4_g2

0xb1c7,	// (0x0005b67e) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb1c7,	// (0x0005b67e) list_medium_line_x3_t4_g4_g3

0xe5f7,	// (0x0005eaae) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe5f7,	// (0x0005eaae) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd42,	// (0x000601f9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd42,	// (0x000601f9) list_medium_line_x3_t4_g4_g

0x8c16,	// (0x000590cd) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8c16,	// (0x000590cd) list_medium_line_x3_t4_g4_t1

0x8c2d,	// (0x000590e4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8c2d,	// (0x000590e4) list_medium_line_x3_t4_g4_t2

0xe603,	// (0x0005eaba) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe603,	// (0x0005eaba) list_medium_line_x3_t4_g4_t3

0xe618,	// (0x0005eacf) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe618,	// (0x0005eacf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4b,	// (0x00060202) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4b,	// (0x00060202) list_medium_line_x3_t4_g4_t

0xa117,	// (0x0005a5ce) list_single_dyc_row_text_pane_t1_ParamLimits

0xa117,	// (0x0005a5ce) list_single_dyc_row_text_pane_t1

0xa14e,	// (0x0005a605) list_single_dyc_row_text_pane_t2_ParamLimits

0xa14e,	// (0x0005a605) list_single_dyc_row_text_pane_t2

0xe635,	// (0x0005eaec) list_single_dyc_row_text_pane_t3_ParamLimits

0xe635,	// (0x0005eaec) list_single_dyc_row_text_pane_t3

0x0002,

0xfd54,	// (0x0006020b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd54,	// (0x0006020b) list_single_dyc_row_text_pane_t

0xe647,	// (0x0005eafe) list_single_dyc_row_pane_g1_ParamLimits

0xe647,	// (0x0005eafe) list_single_dyc_row_pane_g1

0xe653,	// (0x0005eb0a) list_single_dyc_row_pane_g2_ParamLimits

0xe653,	// (0x0005eb0a) list_single_dyc_row_pane_g2

0xe65f,	// (0x0005eb16) list_single_dyc_row_pane_g3_ParamLimits

0xe65f,	// (0x0005eb16) list_single_dyc_row_pane_g3

0xe66b,	// (0x0005eb22) list_single_dyc_row_pane_g4_ParamLimits

0xe66b,	// (0x0005eb22) list_single_dyc_row_pane_g4

0x0003,

0xfd5b,	// (0x00060212) list_single_dyc_row_pane_g_ParamLimits

0xfd5b,	// (0x00060212) list_single_dyc_row_pane_g

0xe677,	// (0x0005eb2e) list_single_dyc_row_text_pane_ParamLimits

0xe677,	// (0x0005eb2e) list_single_dyc_row_text_pane

0x0eea,	// (0x000513a1) bg_sp_fs_scroll_pane

0xe696,	// (0x0005eb4d) thumb_sp_fs_scroll_pane

0xb145,	// (0x0005b5fc) list_medium_line_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_g1

0xb281,	// (0x0005b738) list_medium_line_t1_ParamLimits

0xb281,	// (0x0005b738) list_medium_line_t1

0xb145,	// (0x0005b5fc) list_medium_line_x2_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x2_g1

0xb151,	// (0x0005b608) list_medium_line_x2_g2_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x0005fee9) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x0005fee9) list_medium_line_x2_g

0xe69f,	// (0x0005eb56) list_medium_line_x2_t1_ParamLimits

0xe69f,	// (0x0005eb56) list_medium_line_x2_t1

0xb145,	// (0x0005b5fc) list_medium_line_x3_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x3_g1

0xb151,	// (0x0005b608) list_medium_line_x3_g2_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x0005fee9) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x0005fee9) list_medium_line_x3_g

0xe69f,	// (0x0005eb56) list_medium_line_x3_t1_ParamLimits

0xe69f,	// (0x0005eb56) list_medium_line_x3_t1

0xe6b5,	// (0x0005eb6c) thumb_sp_fs_scroll_pane_g1

0xe6be,	// (0x0005eb75) thumb_sp_fs_scroll_pane_g2

0xe6c7,	// (0x0005eb7e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0006021b) thumb_sp_fs_scroll_pane_g

0xe6b5,	// (0x0005eb6c) bg_sp_fs_scroll_pane_g1

0xe6be,	// (0x0005eb75) bg_sp_fs_scroll_pane_g2

0xe6c7,	// (0x0005eb7e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0006021b) bg_sp_fs_scroll_pane_g

0xb145,	// (0x0005b5fc) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_x2_t3_g4_g1

0xb1bb,	// (0x0005b672) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb1bb,	// (0x0005b672) list_medium_line_x2_t3_g4_g2

0xb151,	// (0x0005b608) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_x2_t3_g4_g3

0xb15d,	// (0x0005b614) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb15d,	// (0x0005b614) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0005f79d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0005f79d) list_medium_line_x2_t3_g4_g

0xa1a8,	// (0x0005a65f) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa1a8,	// (0x0005a65f) list_medium_line_x2_t3_g4_t1

0xa1be,	// (0x0005a675) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa1be,	// (0x0005a675) list_medium_line_x2_t3_g4_t2

0xb17e,	// (0x0005b635) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb17e,	// (0x0005b635) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6b,	// (0x00060222) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6b,	// (0x00060222) list_medium_line_x2_t3_g4_t

0xb145,	// (0x0005b5fc) list_medium_line_g2_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_g2_g1

0xb151,	// (0x0005b608) list_medium_line_g2_g2_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x0005fee9) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x0005fee9) list_medium_line_g2_g

0xb1fa,	// (0x0005b6b1) list_medium_line_g2_t1_ParamLimits

0xb1fa,	// (0x0005b6b1) list_medium_line_g2_t1

0xb145,	// (0x0005b5fc) list_medium_line_t3_g2_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_t3_g2_g1

0xb151,	// (0x0005b608) list_medium_line_t3_g2_g2_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x0005fee9) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x0005fee9) list_medium_line_t3_g2_g

0xa1d7,	// (0x0005a68e) list_medium_line_t3_g2_t1_ParamLimits

0xa1d7,	// (0x0005a68e) list_medium_line_t3_g2_t1

0xa1ee,	// (0x0005a6a5) list_medium_line_t3_g2_t2_ParamLimits

0xa1ee,	// (0x0005a6a5) list_medium_line_t3_g2_t2

0xa203,	// (0x0005a6ba) list_medium_line_t3_g2_t3_ParamLimits

0xa203,	// (0x0005a6ba) list_medium_line_t3_g2_t3

0x0002,

0xfd72,	// (0x00060229) list_medium_line_t3_g2_t_ParamLimits

0xfd72,	// (0x00060229) list_medium_line_t3_g2_t

0xe508,	// (0x0005e9bf) list_medium_line_right_icon_g1

0xe6d0,	// (0x0005eb87) list_medium_line_right_icon_t1

0xb145,	// (0x0005b5fc) list_medium_line_t2_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_t2_g1

0xa218,	// (0x0005a6cf) list_medium_line_t2_t1_ParamLimits

0xa218,	// (0x0005a6cf) list_medium_line_t2_t1

0xa22f,	// (0x0005a6e6) list_medium_line_t2_t2_ParamLimits

0xa22f,	// (0x0005a6e6) list_medium_line_t2_t2

0x0001,

0xfd79,	// (0x00060230) list_medium_line_t2_t_ParamLimits

0xfd79,	// (0x00060230) list_medium_line_t2_t

0xb145,	// (0x0005b5fc) list_medium_line_t3_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_t3_g1

0xa0ad,	// (0x0005a564) list_medium_line_t3_t1_ParamLimits

0xa0ad,	// (0x0005a564) list_medium_line_t3_t1

0xa0c7,	// (0x0005a57e) list_medium_line_t3_t2_ParamLimits

0xa0c7,	// (0x0005a57e) list_medium_line_t3_t2

0xa0dc,	// (0x0005a593) list_medium_line_t3_t3_ParamLimits

0xa0dc,	// (0x0005a593) list_medium_line_t3_t3

0x0002,

0xfd7e,	// (0x00060235) list_medium_line_t3_t_ParamLimits

0xfd7e,	// (0x00060235) list_medium_line_t3_t

0xb145,	// (0x0005b5fc) list_medium_line_g3_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_g3_g1

0xb1bb,	// (0x0005b672) list_medium_line_g3_g2_ParamLimits

0xb1bb,	// (0x0005b672) list_medium_line_g3_g2

0xb151,	// (0x0005b608) list_medium_line_g3_g3_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_g3_g3

0x0002,

0xfd85,	// (0x0006023c) list_medium_line_g3_g_ParamLimits

0xfd85,	// (0x0006023c) list_medium_line_g3_g

0xb1e5,	// (0x0005b69c) list_medium_line_g3_t1_ParamLimits

0xb1e5,	// (0x0005b69c) list_medium_line_g3_t1

0xb145,	// (0x0005b5fc) list_medium_line_t2_g3_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_t2_g3_g1

0xb1bb,	// (0x0005b672) list_medium_line_t2_g3_g2_ParamLimits

0xb1bb,	// (0x0005b672) list_medium_line_t2_g3_g2

0xb151,	// (0x0005b608) list_medium_line_t2_g3_g3_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_t2_g3_g3

0x0002,

0xfd85,	// (0x0006023c) list_medium_line_t2_g3_g_ParamLimits

0xfd85,	// (0x0006023c) list_medium_line_t2_g3_g

0xa241,	// (0x0005a6f8) list_medium_line_t2_g3_t1_ParamLimits

0xa241,	// (0x0005a6f8) list_medium_line_t2_g3_t1

0xa25b,	// (0x0005a712) list_medium_line_t2_g3_t2_ParamLimits

0xa25b,	// (0x0005a712) list_medium_line_t2_g3_t2

0x0001,

0xfd8c,	// (0x00060243) list_medium_line_t2_g3_t_ParamLimits

0xfd8c,	// (0x00060243) list_medium_line_t2_g3_t

0xb145,	// (0x0005b5fc) list_medium_line_t3_g3_g1_ParamLimits

0xb145,	// (0x0005b5fc) list_medium_line_t3_g3_g1

0xb1bb,	// (0x0005b672) list_medium_line_t3_g3_g2_ParamLimits

0xb1bb,	// (0x0005b672) list_medium_line_t3_g3_g2

0xb151,	// (0x0005b608) list_medium_line_t3_g3_g3_ParamLimits

0xb151,	// (0x0005b608) list_medium_line_t3_g3_g3

0x0002,

0xfd85,	// (0x0006023c) list_medium_line_t3_g3_g_ParamLimits

0xfd85,	// (0x0006023c) list_medium_line_t3_g3_g

0xa270,	// (0x0005a727) list_medium_line_t3_g3_t1_ParamLimits

0xa270,	// (0x0005a727) list_medium_line_t3_g3_t1

0xa284,	// (0x0005a73b) list_medium_line_t3_g3_t2_ParamLimits

0xa284,	// (0x0005a73b) list_medium_line_t3_g3_t2

0xa296,	// (0x0005a74d) list_medium_line_t3_g3_t3_ParamLimits

0xa296,	// (0x0005a74d) list_medium_line_t3_g3_t3

0x0002,

0xfd91,	// (0x00060248) list_medium_line_t3_g3_t_ParamLimits

0xfd91,	// (0x00060248) list_medium_line_t3_g3_t

0xe5ef,	// (0x0005eaa6) list_medium_line_right_iconx2_g1

0xe508,	// (0x0005e9bf) list_medium_line_right_iconx2_g2

0x0001,

0xfd98,	// (0x0006024f) list_medium_line_right_iconx2_g

0xe6de,	// (0x0005eb95) list_medium_line_right_iconx2_t1

0xe5ef,	// (0x0005eaa6) list_medium_line_t2_right_iconx2_g1

0xe508,	// (0x0005e9bf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd98,	// (0x0006024f) list_medium_line_t2_right_iconx2_g

0xa2a8,	// (0x0005a75f) list_medium_line_t2_right_iconx2_t1

0xa2b8,	// (0x0005a76f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd9d,	// (0x00060254) list_medium_line_t2_right_iconx2_t

0xd4dc,	// (0x0005d993) list_medium_line_x4_t4_t1

0xa2c6,	// (0x0005a77d) list_medium_line_x4_t4_t2

0xa2d6,	// (0x0005a78d) list_medium_line_x4_t4_t3

0xa2e6,	// (0x0005a79d) list_medium_line_x4_t4_t4

0x0003,

0xfda2,	// (0x00060259) list_medium_line_x4_t4_t

0xa331,	// (0x0005a7e8) tport_appsw_pane_ParamLimits

0xa331,	// (0x0005a7e8) tport_appsw_pane

0xa342,	// (0x0005a7f9) tport_contact_pane_ParamLimits

0xa342,	// (0x0005a7f9) tport_contact_pane

0xa357,	// (0x0005a80e) tport_listscroll_pane_ParamLimits

0xa357,	// (0x0005a80e) tport_listscroll_pane

0xa370,	// (0x0005a827) cell_tport_appsw_pane_ParamLimits

0xa370,	// (0x0005a827) cell_tport_appsw_pane

0xd252,	// (0x0005d709) tport_appsw_pane_g1_ParamLimits

0xd252,	// (0x0005d709) tport_appsw_pane_g1

0xe6ec,	// (0x0005eba3) tport_contact_pane_g1

0xe6f5,	// (0x0005ebac) tport_contact_pane_t1

0xe703,	// (0x0005ebba) tport_contact_pane_t2

0x0001,

0xfdab,	// (0x00060262) tport_contact_pane_t

0xe711,	// (0x0005ebc8) list_tport_pane

0x1775,	// (0x00051c2c) scroll_pane_cp_030

0xe722,	// (0x0005ebd9) cell_tport_appsw_pane_g1

0xe732,	// (0x0005ebe9) cell_tport_appsw_pane_t1

0x0eea,	// (0x000513a1) grid_highlight_pane_cp019

0xa3a6,	// (0x0005a85d) list_tport_double_graphic_pane_ParamLimits

0xa3a6,	// (0x0005a85d) list_tport_double_graphic_pane

0x257c,	// (0x00052a33) list_highlight_pane_cp023_ParamLimits

0x257c,	// (0x00052a33) list_highlight_pane_cp023

0xa3b3,	// (0x0005a86a) list_tport_double_graphic_pane_g1_ParamLimits

0xa3b3,	// (0x0005a86a) list_tport_double_graphic_pane_g1

0xa3c0,	// (0x0005a877) list_tport_double_graphic_pane_t1_ParamLimits

0xa3c0,	// (0x0005a877) list_tport_double_graphic_pane_t1

0xa3d5,	// (0x0005a88c) list_tport_double_graphic_pane_t2_ParamLimits

0xa3d5,	// (0x0005a88c) list_tport_double_graphic_pane_t2

0x0001,

0xfdb7,	// (0x0006026e) list_tport_double_graphic_pane_t_ParamLimits

0xfdb7,	// (0x0006026e) list_tport_double_graphic_pane_t

0x0eea,	// (0x000513a1) main_cale_note_pane

0x8439,	// (0x000588f0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8439,	// (0x000588f0) cell_vitu2_function_top_wide_pane_cp01

0x9b89,	// (0x0005a040) wait_bar_pane_cp05_ParamLimits

0x0eea,	// (0x000513a1) listscroll_cmail_pane

0xe740,	// (0x0005ebf7) list_cmail_pane

0xa3e7,	// (0x0005a89e) list_cmail_body_pane

0xa3e7,	// (0x0005a89e) list_single_cmail_header_caption_pane

0xa3fd,	// (0x0005a8b4) list_single_cmail_header_detail_pane_ParamLimits

0xa3fd,	// (0x0005a8b4) list_single_cmail_header_detail_pane

0xe75c,	// (0x0005ec13) list_single_cmail_header_caption_pane_t1

0xa425,	// (0x0005a8dc) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa425,	// (0x0005a8dc) list_single_cmail_header_detail_pane_g1

0xb151,	// (0x0005b608) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb151,	// (0x0005b608) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdbc,	// (0x00060273) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdbc,	// (0x00060273) list_single_cmail_header_detail_pane_g

0xe77f,	// (0x0005ec36) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe77f,	// (0x0005ec36) list_single_cmail_header_detail_pane_t1

0xe7a7,	// (0x0005ec5e) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe7a7,	// (0x0005ec5e) list_single_cmail_header_editor_pane_bg

0xe7b9,	// (0x0005ec70) list_cmail_body_pane_g1

0xe7c2,	// (0x0005ec79) list_cmail_body_pane_t1

0xd2ab,	// (0x0005d762) list_single_cmail_header_editor_pane_bg_g1

0x1a9f,	// (0x00051f56) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2bb,	// (0x0005d772) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2b3,	// (0x0005d76a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4ea,	// (0x0005d9a1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2db,	// (0x0005d792) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2cb,	// (0x0005d782) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2d3,	// (0x0005d78a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1a7f,	// (0x00051f36) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa45f,	// (0x0005a916) calenote_gesture_pane_ParamLimits

0xa45f,	// (0x0005a916) calenote_gesture_pane

0xa47b,	// (0x0005a932) calenote_window_pane_ParamLimits

0xa47b,	// (0x0005a932) calenote_window_pane

0xe7d0,	// (0x0005ec87) popup_note_window_cp01

0xa497,	// (0x0005a94e) calenote_swipe_1_pane_ParamLimits

0xa497,	// (0x0005a94e) calenote_swipe_1_pane

0x9f0a,	// (0x0005a3c1) calenote_swipe_2_pane_ParamLimits

0x9f0a,	// (0x0005a3c1) calenote_swipe_2_pane

0xe459,	// (0x0005e910) calenote_swipe_1_pane_g1_ParamLimits

0xe459,	// (0x0005e910) calenote_swipe_1_pane_g1

0xe466,	// (0x0005e91d) calenote_swipe_1_pane_g2_ParamLimits

0xe466,	// (0x0005e91d) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x000601a7) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x000601a7) calenote_swipe_1_pane_g

0xe7e2,	// (0x0005ec99) calenote_swipe_1_pane_t1_ParamLimits

0xe7e2,	// (0x0005ec99) calenote_swipe_1_pane_t1

0xe459,	// (0x0005e910) calenote_swipe_2_pane_g1_ParamLimits

0xe459,	// (0x0005e910) calenote_swipe_2_pane_g1

0xe801,	// (0x0005ecb8) calenote_swipe_2_pane_g2_ParamLimits

0xe801,	// (0x0005ecb8) calenote_swipe_2_pane_g2

0x0001,

0xfdc8,	// (0x0006027f) calenote_swipe_2_pane_g_ParamLimits

0xfdc8,	// (0x0006027f) calenote_swipe_2_pane_g

0xe80d,	// (0x0005ecc4) calenote_swipe_2_pane_t1_ParamLimits

0xe80d,	// (0x0005ecc4) calenote_swipe_2_pane_t1

0x0eea,	// (0x000513a1) main_mup_navstr_pane

0x722c,	// (0x000576e3) main_mup3_pane_t7_ParamLimits

0x722c,	// (0x000576e3) main_mup3_pane_t7

0xed6a,	// (0x0005f221) main_mp4_pane_g6_ParamLimits

0xed6a,	// (0x0005f221) main_mp4_pane_g6

0xef04,	// (0x0005f3bb) main_image3_pane_t4_ParamLimits

0xef04,	// (0x0005f3bb) main_image3_pane_t4

0xa4ac,	// (0x0005a963) popup_navstr_preview_pane_ParamLimits

0xa4ac,	// (0x0005a963) popup_navstr_preview_pane

0xa4bc,	// (0x0005a973) scroll_navstr_pane_ParamLimits

0xa4bc,	// (0x0005a973) scroll_navstr_pane

0x0eea,	// (0x000513a1) bg_popup_preview_window_pane_cp04

0xe834,	// (0x0005eceb) popup_navstr_preview_pane_t1

0xa4d0,	// (0x0005a987) scroll_navstr_pane_g1_ParamLimits

0xa4d0,	// (0x0005a987) scroll_navstr_pane_g1

0xa4e4,	// (0x0005a99b) scroll_navstr_pane_t1_ParamLimits

0xa4e4,	// (0x0005a99b) scroll_navstr_pane_t1

0xe7d9,	// (0x0005ec90) bg_button_pane_cp014

0xe7d9,	// (0x0005ec90) bg_button_pane_cp030

0xe3bd,	// (0x0005e874) list_double_fisheye_pane_g4_ParamLimits

0xe3bd,	// (0x0005e874) list_double_fisheye_pane_g4

0xe3c9,	// (0x0005e880) list_double_fisheye_pane_g5_ParamLimits

0xe3c9,	// (0x0005e880) list_double_fisheye_pane_g5

0xe750,	// (0x0005ec07) sp_fs_scroll_pane_cp03

0xe558,	// (0x0005ea0f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe564,	// (0x0005ea1b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x000601c4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe570,	// (0x0005ea27) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe748,	// (0x0005ebff) sp_fs_scroll_pane_cp02

0x1787,	// (0x00051c3e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1787,	// (0x00051c3e) popup_sp_fs_calendar_preview_list_single_pane

0x0eea,	// (0x000513a1) main_cam6_pano_pane

0x257c,	// (0x00052a33) main_mup3_pane_ParamLimits

0x0eea,	// (0x000513a1) main_phacti_pane

0x9a7c,	// (0x00059f33) bg_button_pane_cp11

0x9a94,	// (0x00059f4b) main_mobtv_info_pane_g2_ParamLimits

0x9a94,	// (0x00059f4b) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x00060124) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x00060124) main_mobtv_info_pane_g

0x9c47,	// (0x0005a0fe) sc_clock_pane_t5_ParamLimits

0x9c47,	// (0x0005a0fe) sc_clock_pane_t5

0x9cba,	// (0x0005a171) main_radioblah_pane_g1_ParamLimits

0xe322,	// (0x0005e7d9) main_radioblah_pane_t3_ParamLimits

0xe322,	// (0x0005e7d9) main_radioblah_pane_t3

0xe33a,	// (0x0005e7f1) main_radioblah_pane_t4_ParamLimits

0xe33a,	// (0x0005e7f1) main_radioblah_pane_t4

0x9ce2,	// (0x0005a199) main_radioblah_text_pane_ParamLimits

0x9ce2,	// (0x0005a199) main_radioblah_text_pane

0x9cf4,	// (0x0005a1ab) main_radioblah_info_pane_g1_ParamLimits

0x9d87,	// (0x0005a23e) main_radioblah_info_pane_t4_ParamLimits

0x9d87,	// (0x0005a23e) main_radioblah_info_pane_t4

0x257c,	// (0x00052a33) main_sp_fs_calendar_pane

0xa4fa,	// (0x0005a9b1) main_phacti_pane_g1

0xa502,	// (0x0005a9b9) phacti_note_pane_ParamLimits

0xa502,	// (0x0005a9b9) phacti_note_pane

0xe84b,	// (0x0005ed02) phacti_term_pane_ParamLimits

0xe84b,	// (0x0005ed02) phacti_term_pane

0xe860,	// (0x0005ed17) phacti_note_pane_t1_ParamLimits

0xe860,	// (0x0005ed17) phacti_note_pane_t1

0xe877,	// (0x0005ed2e) phacti_term_pane_g1

0xe87f,	// (0x0005ed36) phacti_term_pane_t1_ParamLimits

0xe87f,	// (0x0005ed36) phacti_term_pane_t1

0xe8a9,	// (0x0005ed60) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8b1,	// (0x0005ed68) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd2,	// (0x00060289) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b9,	// (0x0005ed70) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b9,	// (0x0005ed70) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8cf,	// (0x0005ed86) aid_popup_sp_fs_bg_corner_pane

0xc89c,	// (0x0005cd53) popup_sp_fs_calendar_preview_bg_pane_g1

0x0eea,	// (0x000513a1) popup_sp_fs_calendar_preview_bg_pane

0xe8d7,	// (0x0005ed8e) popup_sp_fs_calendar_preview_list_pane

0x257c,	// (0x00052a33) bg_main_sp_fs_cale_pane_ParamLimits

0x257c,	// (0x00052a33) bg_main_sp_fs_cale_pane

0xe8df,	// (0x0005ed96) listscroll_cale_mrui_pane_ParamLimits

0xe8df,	// (0x0005ed96) listscroll_cale_mrui_pane

0xe8f3,	// (0x0005edaa) listscroll_sp_fs_schedule_track_pane

0xe8fc,	// (0x0005edb3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8fc,	// (0x0005edb3) main_sp_fs_ctrlbar_pane_cp01

0xe90d,	// (0x0005edc4) main_sp_fs_ribbon_pane

0xe915,	// (0x0005edcc) popup_sp_fs_cale_preview_window

0xa551,	// (0x0005aa08) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa551,	// (0x0005aa08) list_single_sp_fs_schedule_track_pane

0x257c,	// (0x00052a33) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x257c,	// (0x00052a33) bg_sp_fs_highlight_list_pane_cp03

0xa564,	// (0x0005aa1b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa564,	// (0x0005aa1b) list_single_sp_fs_schedule_track_pane_g1

0xa570,	// (0x0005aa27) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa570,	// (0x0005aa27) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd7,	// (0x0006028e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd7,	// (0x0006028e) list_single_sp_fs_schedule_track_pane_g

0xa57c,	// (0x0005aa33) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa57c,	// (0x0005aa33) list_single_sp_fs_schedule_track_pane_t1

0xa596,	// (0x0005aa4d) sp_fs_schedule_track_pane_ParamLimits

0xa596,	// (0x0005aa4d) sp_fs_schedule_track_pane

0xe924,	// (0x0005eddb) sp_fs_schedule_track_pane_g1

0xe92c,	// (0x0005ede3) sp_fs_schedule_track_pane_g2

0xe934,	// (0x0005edeb) sp_fs_schedule_track_pane_g3

0xe93c,	// (0x0005edf3) sp_fs_schedule_track_pane_g4

0xe944,	// (0x0005edfb) sp_fs_schedule_track_pane_g5

0x0004,

0xfddc,	// (0x00060293) sp_fs_schedule_track_pane_g

0xd2ab,	// (0x0005d762) bg_sp_fs_schedule_viewer_highlight_g1

0x1a9f,	// (0x00051f56) bg_sp_fs_schedule_viewer_highlight_g2

0xd2b3,	// (0x0005d76a) bg_sp_fs_schedule_viewer_highlight_g3

0xd2bb,	// (0x0005d772) bg_sp_fs_schedule_viewer_highlight_g4

0xd4ea,	// (0x0005d9a1) bg_sp_fs_schedule_viewer_highlight_g5

0xd2cb,	// (0x0005d782) bg_sp_fs_schedule_viewer_highlight_g6

0xd2d3,	// (0x0005d78a) bg_sp_fs_schedule_viewer_highlight_g7

0xd2db,	// (0x0005d792) bg_sp_fs_schedule_viewer_highlight_g8

0x1a7f,	// (0x00051f36) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde7,	// (0x0006029e) bg_sp_fs_schedule_viewer_highlight_g

0x0eea,	// (0x000513a1) bg_main_sp_fs_ribbon_pane

0xa5a7,	// (0x0005aa5e) main_sp_fs_ribbon_pane_g1

0xe94c,	// (0x0005ee03) main_sp_fs_ribbon_pane_t1

0xa5b0,	// (0x0005aa67) main_sp_fs_ribbon_pane_t2

0xe95b,	// (0x0005ee12) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfa,	// (0x000602b1) main_sp_fs_ribbon_pane_t

0xe96a,	// (0x0005ee21) main_sp_fs_ribbon_scheduler_pane

0xe972,	// (0x0005ee29) bg_main_sp_fs_ribbon_pane_g1

0xe97b,	// (0x0005ee32) bg_main_sp_fs_ribbon_pane_g2

0xe984,	// (0x0005ee3b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe01,	// (0x000602b8) bg_main_sp_fs_ribbon_pane_g

0xe98c,	// (0x0005ee43) main_sp_fs_ribbon_scheduler_pane_g1

0xe995,	// (0x0005ee4c) main_sp_fs_ribbon_scheduler_pane_g2

0xe99e,	// (0x0005ee55) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe08,	// (0x000602bf) main_sp_fs_ribbon_scheduler_pane_g

0xe394,	// (0x0005e84b) list_cale_mrui_pane

0xe9a7,	// (0x0005ee5e) sp_fs_scroll_pane_cp07_ParamLimits

0xe9a7,	// (0x0005ee5e) sp_fs_scroll_pane_cp07

0xa5bf,	// (0x0005aa76) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa5bf,	// (0x0005aa76) bg_sp_fs_schedule_viewer_highlight

0xe9bc,	// (0x0005ee73) list_single_sp_fs_schedule_track_pane_cp01

0xe9c4,	// (0x0005ee7b) list_sp_fs_schedule_track_pane

0xe9cc,	// (0x0005ee83) sp_fs_scroll_pane_cp06_ParamLimits

0xe9cc,	// (0x0005ee83) sp_fs_scroll_pane_cp06

0xc89c,	// (0x0005cd53) bgmain_sp_fs_calendar_pane_g1

0xa5cf,	// (0x0005aa86) list_single_cale_mrui_pane_ParamLimits

0xa5cf,	// (0x0005aa86) list_single_cale_mrui_pane

0xe9de,	// (0x0005ee95) list_single_cale_mrui_row_pane_ParamLimits

0xe9de,	// (0x0005ee95) list_single_cale_mrui_row_pane

0xe9eb,	// (0x0005eea2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe9eb,	// (0x0005eea2) list_single_cale_mrui_row_pane_g1

0xea23,	// (0x0005eeda) list_single_cale_mrui_row_pane_t1_ParamLimits

0xea23,	// (0x0005eeda) list_single_cale_mrui_row_pane_t1

0xa5f3,	// (0x0005aaaa) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa5f3,	// (0x0005aaaa) list_single_cale_mrui_row_pane_t2

0xea35,	// (0x0005eeec) list_single_cale_mrui_row_pane_t3_ParamLimits

0xea35,	// (0x0005eeec) list_single_cale_mrui_row_pane_t3

0xea64,	// (0x0005ef1b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea64,	// (0x0005ef1b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe14,	// (0x000602cb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe14,	// (0x000602cb) list_single_cale_mrui_row_pane_t

0xa659,	// (0x0005ab10) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa659,	// (0x0005ab10) list_single_cmail_header_editor_pane_bg_cp01

0xa67d,	// (0x0005ab34) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa67d,	// (0x0005ab34) list_single_cmail_header_editor_pane_bg_cp02

0xa69b,	// (0x0005ab52) main_radioblah_text_pane_t1_ParamLimits

0xa69b,	// (0x0005ab52) main_radioblah_text_pane_t1

0x002f,	// (0x000504e6) cam6_indi_pane_cp01

0x0037,	// (0x000504ee) cam6_mode_pane_cp01

0x003f,	// (0x000504f6) cam6_pano_pane

0x0048,	// (0x000504ff) cam6_zoom_pane_cp01

0x0050,	// (0x00050507) cam6_pano_image_pane

0x0059,	// (0x00050510) cam6_pano_pane_g1

0xe0a0,	// (0x0005e557) cam6_pano_pane_g2

0x0062,	// (0x00050519) cam6_pano_pane_g3

0x006b,	// (0x00050522) cam6_pano_pane_g4

0xce02,	// (0x0005d2b9) cam6_pano_pane_g5

0x0074,	// (0x0005052b) cam6_pano_pane_g6

0x007c,	// (0x00050533) cam6_pano_pane_g7

0x0084,	// (0x0005053b) cam6_pano_pane_g8

0x008d,	// (0x00050544) cam6_pano_pane_g9

0x0008,

0xfe1d,	// (0x000602d4) cam6_pano_pane_g

0x0eea,	// (0x000513a1) main_browser_tag_pane

0xe82c,	// (0x0005ece3) grid_navstr_albumart_pane

0x0096,	// (0x0005054d) cell_navstr_albumart_pane_ParamLimits

0x0096,	// (0x0005054d) cell_navstr_albumart_pane

0x234e,	// (0x00052805) cell_navstr_albumart_pane_g1

0xc236,	// (0x0005c6ed) cell_navstr_albumart_pane_g2

0xc246,	// (0x0005c6fd) cell_navstr_albumart_pane_g3

0xc23e,	// (0x0005c6f5) cell_navstr_albumart_pane_g4

0x0003,

0xfe30,	// (0x000602e7) cell_navstr_albumart_pane_g

0xa6b4,	// (0x0005ab6b) bt_list_pane_ParamLimits

0xa6b4,	// (0x0005ab6b) bt_list_pane

0xa6c7,	// (0x0005ab7e) bt_list_pane_t1

0xa6d6,	// (0x0005ab8d) bt_list_pane_t2

0x0001,

0xfe39,	// (0x000602f0) bt_list_pane_t

0x0eea,	// (0x000513a1) main_cale_prevew_pane

0xa6e5,	// (0x0005ab9c) popup_cale_preview_window_ParamLimits

0xa6e5,	// (0x0005ab9c) popup_cale_preview_window

0x257c,	// (0x00052a33) bg_popup_preview_window_pane_cp05_ParamLimits

0x257c,	// (0x00052a33) bg_popup_preview_window_pane_cp05

0x00f5,	// (0x000505ac) list_cale_preview_pane_ParamLimits

0x00f5,	// (0x000505ac) list_cale_preview_pane

0xa6fa,	// (0x0005abb1) list_double_cale_preview_pane_ParamLimits

0xa6fa,	// (0x0005abb1) list_double_cale_preview_pane

0xa70b,	// (0x0005abc2) list_single_cale_preview_pane_ParamLimits

0xa70b,	// (0x0005abc2) list_single_cale_preview_pane

0x0143,	// (0x000505fa) list_single_cale_preview_pane_g1

0x014b,	// (0x00050602) list_single_cale_preview_pane_t1_ParamLimits

0x014b,	// (0x00050602) list_single_cale_preview_pane_t1

0xa71f,	// (0x0005abd6) list_double_cale_preview_pane_g1

0xa727,	// (0x0005abde) list_double_cale_preview_pane_t1_ParamLimits

0xa727,	// (0x0005abde) list_double_cale_preview_pane_t1

0xa73c,	// (0x0005abf3) list_double_cale_preview_pane_t2_ParamLimits

0xa73c,	// (0x0005abf3) list_double_cale_preview_pane_t2

0x0001,

0xfe3e,	// (0x000602f5) list_double_cale_preview_pane_t_ParamLimits

0xfe3e,	// (0x000602f5) list_double_cale_preview_pane_t

0x0eea,	// (0x000513a1) main_ezdial_pane

0x257c,	// (0x00052a33) main_sp_fs_email_pane_ParamLimits

0x9f60,	// (0x0005a417) cmail_ddmenu_btn01_pane_ParamLimits

0x9f60,	// (0x0005a417) cmail_ddmenu_btn01_pane

0x9f73,	// (0x0005a42a) cmail_ddmenu_btn02_pane_ParamLimits

0x9f73,	// (0x0005a42a) cmail_ddmenu_btn02_pane

0x9f96,	// (0x0005a44d) cmail_ddmenu_btn03_pane_ParamLimits

0x9f96,	// (0x0005a44d) cmail_ddmenu_btn03_pane

0x9fbb,	// (0x0005a472) main_sp_fs_ctrlbar_pane_ParamLimits

0x9fdc,	// (0x0005a493) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa3e7,	// (0x0005a89e) list_cmail_body_pane_ParamLimits

0xe76a,	// (0x0005ec21) bg_button_pane_cp12

0xe772,	// (0x0005ec29) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe772,	// (0x0005ec29) list_single_cmail_header_detail_pane_g3

0xa43b,	// (0x0005a8f2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa43b,	// (0x0005a8f2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc3,	// (0x0006027a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc3,	// (0x0006027a) list_single_cmail_header_detail_pane_t

0xe894,	// (0x0005ed4b) phacti_term_pane_t2_ParamLimits

0xe894,	// (0x0005ed4b) phacti_term_pane_t2

0x0001,

0xfdcd,	// (0x00060284) phacti_term_pane_t_ParamLimits

0xfdcd,	// (0x00060284) phacti_term_pane_t

0x0178,	// (0x0005062f) aid_size_list_single_double

0xa754,	// (0x0005ac0b) popup_ezdial_listscroll_window

0xa76a,	// (0x0005ac21) popup_number_entry_window_cp01

0x21ed,	// (0x000526a4) bg_popup_call_pane_cp09

0x01a9,	// (0x00050660) ezdial_list_pane

0x01b1,	// (0x00050668) scroll_pane_cp23

0xc459,	// (0x0005c910) bg_button_pane_cp028_ParamLimits

0xc459,	// (0x0005c910) bg_button_pane_cp028

0xa776,	// (0x0005ac2d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa776,	// (0x0005ac2d) cmail_ddmenu_btn01_pane_g1

0xa785,	// (0x0005ac3c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa785,	// (0x0005ac3c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe43,	// (0x000602fa) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe43,	// (0x000602fa) cmail_ddmenu_btn01_pane_g

0x01d7,	// (0x0005068e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x01d7,	// (0x0005068e) cmail_ddmenu_btn01_pane_t1

0xc459,	// (0x0005c910) bg_button_pane_cp029_ParamLimits

0xc459,	// (0x0005c910) bg_button_pane_cp029

0xa795,	// (0x0005ac4c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa795,	// (0x0005ac4c) cmail_ddmenu_btn02_pane_g1

0xa7b0,	// (0x0005ac67) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa7b0,	// (0x0005ac67) cmail_ddmenu_btn02_pane_t1

0x257c,	// (0x00052a33) bg_button_pane_cp031_ParamLimits

0x257c,	// (0x00052a33) bg_button_pane_cp031

0xa795,	// (0x0005ac4c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa795,	// (0x0005ac4c) cmail_ddmenu_btn03_pane_g1

0xa7b0,	// (0x0005ac67) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa7b0,	// (0x0005ac67) cmail_ddmenu_btn03_pane_t1

0x7d27,	// (0x000581de) cell_dialer2_keypad_pane_t1_ParamLimits

0x7d41,	// (0x000581f8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7d41,	// (0x000581f8) cell_dialer2_keypad_pane_t1_copy1

0x9903,	// (0x00059dba) ncimui_group_button_pane

0x257c,	// (0x00052a33) main_sp_fs_calendar_pane_ParamLimits

0xa3e7,	// (0x0005a89e) list_single_cmail_header_caption_pane_ParamLimits

0xd81c,	// (0x0005dcd3) aid_recal_txt_sm_pane

0x0eea,	// (0x000513a1) mian_recal_day_pane

0xe915,	// (0x0005edcc) popup_sp_fs_cale_preview_window_ParamLimits

0x0eea,	// (0x000513a1) list_recal_day_pane

0xea9c,	// (0x0005ef53) list_single_recal_day_pane_ParamLimits

0xea9c,	// (0x0005ef53) list_single_recal_day_pane

0x022c,	// (0x000506e3) list_single_recal_day_pane_g1_ParamLimits

0x022c,	// (0x000506e3) list_single_recal_day_pane_g1

0xeaae,	// (0x0005ef65) list_single_recal_day_pane_g2_ParamLimits

0xeaae,	// (0x0005ef65) list_single_recal_day_pane_g2

0xeaba,	// (0x0005ef71) list_single_recal_day_pane_g3_ParamLimits

0xeaba,	// (0x0005ef71) list_single_recal_day_pane_g3

0xa7d7,	// (0x0005ac8e) list_single_recal_day_pane_g4_ParamLimits

0xa7d7,	// (0x0005ac8e) list_single_recal_day_pane_g4

0xeac6,	// (0x0005ef7d) list_single_recal_day_pane_g5_ParamLimits

0xeac6,	// (0x0005ef7d) list_single_recal_day_pane_g5

0xead2,	// (0x0005ef89) list_single_recal_day_pane_g6_ParamLimits

0xead2,	// (0x0005ef89) list_single_recal_day_pane_g6

0x0005,

0xfe52,	// (0x00060309) list_single_recal_day_pane_g_ParamLimits

0xfe52,	// (0x00060309) list_single_recal_day_pane_g

0xeade,	// (0x0005ef95) list_single_recal_day_pane_t1

0xeaec,	// (0x0005efa3) list_single_recal_day_pane_t2

0x0001,

0xfe5f,	// (0x00060316) list_single_recal_day_pane_t

0xa7e5,	// (0x0005ac9c) ncimui_query_button_pane_ParamLimits

0xa7e5,	// (0x0005ac9c) ncimui_query_button_pane

0xa7f5,	// (0x0005acac) ncimui_query_button_pane_t1_ParamLimits

0xa7f5,	// (0x0005acac) ncimui_query_button_pane_t1

0x0267,	// (0x0005071e) ncimui_query_button_pane_t2_ParamLimits

0x0267,	// (0x0005071e) ncimui_query_button_pane_t2

0x0001,

0xfe64,	// (0x0006031b) ncimui_query_button_pane_t_ParamLimits

0xfe64,	// (0x0006031b) ncimui_query_button_pane_t

0xa808,	// (0x0005acbf) query_button_pane_ParamLimits

0xa808,	// (0x0005acbf) query_button_pane

0x0eea,	// (0x000513a1) bg_button_pane_cp0028

0x0287,	// (0x0005073e) query_button_pane_t1

0x605f,	// (0x00056516) main_tport_pane_ParamLimits

0xa2f6,	// (0x0005a7ad) bg_popup_window_pane_cp01_ParamLimits

0xa2f6,	// (0x0005a7ad) bg_popup_window_pane_cp01

0xa30e,	// (0x0005a7c5) heading_pane_cp08_ParamLimits

0xa30e,	// (0x0005a7c5) heading_pane_cp08

0xa320,	// (0x0005a7d7) heading_pane_cp07_ParamLimits

0xa320,	// (0x0005a7d7) heading_pane_cp07

0xe722,	// (0x0005ebd9) cell_tport_appsw_pane_g2

0x0002,

0xfdb0,	// (0x00060267) cell_tport_appsw_pane_g

0x5794,	// (0x00055c4b) input_candi_list_open_g1

0x1c47,	// (0x000520fe) list_cale_time_pane_g6_ParamLimits

0x1c47,	// (0x000520fe) list_cale_time_pane_g6

0x6d05,	// (0x000571bc) aid_size_touch_calib_1_ParamLimits

0x6d05,	// (0x000571bc) aid_size_touch_calib_1

0x6d11,	// (0x000571c8) aid_size_touch_calib_2_ParamLimits

0x6d11,	// (0x000571c8) aid_size_touch_calib_2

0x6d25,	// (0x000571dc) aid_size_touch_calib_3_ParamLimits

0x6d25,	// (0x000571dc) aid_size_touch_calib_3

0x6d3d,	// (0x000571f4) aid_size_touch_calib_4_ParamLimits

0x6d3d,	// (0x000571f4) aid_size_touch_calib_4

0x6d4f,	// (0x00057206) main_touch_calib_button_group_pane_ParamLimits

0x6d4f,	// (0x00057206) main_touch_calib_button_group_pane

0x6d66,	// (0x0005721d) main_touch_calib_pane_g1_ParamLimits

0x6d72,	// (0x00057229) main_touch_calib_pane_g2_ParamLimits

0x6d7e,	// (0x00057235) main_touch_calib_pane_g3_ParamLimits

0x6d8a,	// (0x00057241) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x0005fc3f) main_touch_calib_pane_g_ParamLimits

0x6d96,	// (0x0005724d) main_touch_calib_pane_t1_ParamLimits

0x6dae,	// (0x00057265) main_touch_calib_pane_t2_ParamLimits

0x6dc6,	// (0x0005727d) main_touch_calib_pane_t3_ParamLimits

0x6dd8,	// (0x0005728f) main_touch_calib_pane_t4_ParamLimits

0x6dea,	// (0x000572a1) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x0005fc48) main_touch_calib_pane_t_ParamLimits

0xcc2d,	// (0x0005d0e4) list_single_fp_cale_pane_g3_ParamLimits

0xcc2d,	// (0x0005d0e4) list_single_fp_cale_pane_g3

0xefbe,	// (0x0005f475) bg_button_pane_cp012_ParamLimits

0xefbe,	// (0x0005f475) bg_vkb2_func_pane_cp03_ParamLimits

0x8bcc,	// (0x00059083) cell_vitu2_function_top_pane_g1_ParamLimits

0xefbe,	// (0x0005f475) bg_vkb2_func_pane_cp04_ParamLimits

0x98a5,	// (0x00059d5c) main_ncimui_button_group_pane_ParamLimits

0x98a5,	// (0x00059d5c) main_ncimui_button_group_pane

0x98f1,	// (0x00059da8) main_ncimui_pane_t3_ParamLimits

0x98f1,	// (0x00059da8) main_ncimui_pane_t3

0xe842,	// (0x0005ecf9) phacti_button_group_pane

0x0178,	// (0x0005062f) aid_size_list_single_double_ParamLimits

0xa754,	// (0x0005ac0b) popup_ezdial_listscroll_window_ParamLimits

0xa76a,	// (0x0005ac21) popup_number_entry_window_cp01_ParamLimits

0xa81a,	// (0x0005acd1) phacti_button_pane_ParamLimits

0xa81a,	// (0x0005acd1) phacti_button_pane

0x0eea,	// (0x000513a1) bg_button_pane_cp14

0x02a4,	// (0x0005075b) phacti_button_pane_t1

0xa829,	// (0x0005ace0) main_touch_calib_button_pane_ParamLimits

0xa829,	// (0x0005ace0) main_touch_calib_button_pane

0x1670,	// (0x00051b27) bg_button_pane_cp18_ParamLimits

0x1670,	// (0x00051b27) bg_button_pane_cp18

0x02c2,	// (0x00050779) main_touch_calib_button_pane_t1_ParamLimits

0x02c2,	// (0x00050779) main_touch_calib_button_pane_t1

0x02d8,	// (0x0005078f) main_touch_calib_button_pane_t2_ParamLimits

0x02d8,	// (0x0005078f) main_touch_calib_button_pane_t2

0x0001,

0xfe69,	// (0x00060320) main_touch_calib_button_pane_t_ParamLimits

0xfe69,	// (0x00060320) main_touch_calib_button_pane_t

0x0eea,	// (0x000513a1) cell_ncimui_button_pane

0x0eea,	// (0x000513a1) bg_button_pane_cp032

0x02f6,	// (0x000507ad) cell_ncimui_button_pane_t1

0xeee4,	// (0x0005f39b) image3_infobar_pane_ParamLimits

0xeee4,	// (0x0005f39b) image3_infobar_pane

0x9c6f,	// (0x0005a126) fs_bigclock_status_pane_ParamLimits

0x9c6f,	// (0x0005a126) fs_bigclock_status_pane

0x9c7c,	// (0x0005a133) main_fs_bigclock_clock_pane_ParamLimits

0x9c7c,	// (0x0005a133) main_fs_bigclock_clock_pane

0x9c8b,	// (0x0005a142) main_fs_bigclock_indi_pane_ParamLimits

0x9c8b,	// (0x0005a142) main_fs_bigclock_indi_pane

0x9c9f,	// (0x0005a156) main_fs_bigclock_swipe_pane_ParamLimits

0x9c9f,	// (0x0005a156) main_fs_bigclock_swipe_pane

0x0eea,	// (0x000513a1) main_fs_clock_dumped_data

0xe1ad,	// (0x0005e664) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1ad,	// (0x0005e664) list_single_fs_bigclock_indicator_pane_g1

0xe1c7,	// (0x0005e67e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1c7,	// (0x0005e67e) list_single_fs_bigclock_indicator_pane_g2

0xe1e1,	// (0x0005e698) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe1e1,	// (0x0005e698) list_single_fs_bigclock_indicator_pane_g3

0xe1fb,	// (0x0005e6b2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1fb,	// (0x0005e6b2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x00060158) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x00060158) list_single_fs_bigclock_indicator_pane_g

0xe21f,	// (0x0005e6d6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe21f,	// (0x0005e6d6) list_single_fs_bigclock_indicator_pane_t1

0xe247,	// (0x0005e6fe) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe247,	// (0x0005e6fe) list_single_fs_bigclock_indicator_pane_t2

0xe26f,	// (0x0005e726) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe26f,	// (0x0005e726) list_single_fs_bigclock_indicator_pane_t3

0xe297,	// (0x0005e74e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe297,	// (0x0005e74e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x00060163) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x00060163) list_single_fs_bigclock_indicator_pane_t

0x0304,	// (0x000507bb) image3_infobar_fav_pane_ParamLimits

0x0304,	// (0x000507bb) image3_infobar_fav_pane

0x0314,	// (0x000507cb) image3_infobar_loc_pane_ParamLimits

0x0314,	// (0x000507cb) image3_infobar_loc_pane

0x0328,	// (0x000507df) image3_infobar_time_pane_ParamLimits

0x0328,	// (0x000507df) image3_infobar_time_pane

0xc89c,	// (0x0005cd53) image3_infobar_time_pane_g1

0x0338,	// (0x000507ef) image3_infobar_time_pane_t1

0xc89c,	// (0x0005cd53) image3_infobar_loc_pane_g1

0x0346,	// (0x000507fd) image3_infobar_loc_pane_g2

0x0001,

0xfe6e,	// (0x00060325) image3_infobar_loc_pane_g

0x034e,	// (0x00050805) image3_infobar_loc_pane_t1

0xc89c,	// (0x0005cd53) image3_infobar_fav_pane_g1

0x035c,	// (0x00050813) image3_infobar_fav_pane_g2

0x0001,

0xfe73,	// (0x0006032a) image3_infobar_fav_pane_g

0x0364,	// (0x0005081b) fs_bigclock_status_battery_pane

0x036d,	// (0x00050824) fs_bigclock_status_signal_pane

0x0376,	// (0x0005082d) fs_bigclock_status_title_pane

0x037f,	// (0x00050836) fs_bigclock_status_signal_pane_g1

0x0388,	// (0x0005083f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe78,	// (0x0006032f) fs_bigclock_status_signal_pane_g

0x0390,	// (0x00050847) fs_bigclock_status_battery_pane_g1

0x0399,	// (0x00050850) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe7d,	// (0x00060334) fs_bigclock_status_battery_pane_g

0x03a1,	// (0x00050858) fs_bigclock_status_title_pane_t1

0xc89c,	// (0x0005cd53) main_fs_bigclock_clock_pane_g1

0x03af,	// (0x00050866) main_fs_bigclock_clock_pane_g2

0x03af,	// (0x00050866) main_fs_bigclock_clock_pane_g3

0x03af,	// (0x00050866) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe82,	// (0x00060339) main_fs_bigclock_clock_pane_g

0x03b7,	// (0x0005086e) main_fs_bigclock_clock_pane_t1

0x03c5,	// (0x0005087c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8b,	// (0x00060342) main_fs_bigclock_clock_pane_t

0x03d4,	// (0x0005088b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x03d4,	// (0x0005088b) list_single_fs_bigclock_indicator_pane

0xa83c,	// (0x0005acf3) list_single_fs_bigclock_pane_ParamLimits

0xa83c,	// (0x0005acf3) list_single_fs_bigclock_pane

0x044c,	// (0x00050903) main_fs_bigclock_indicator_pane_t1

0x045b,	// (0x00050912) list_single_fs_bigclock_pane_g1

0x0463,	// (0x0005091a) list_single_fs_bigclock_pane_t1

0xc89c,	// (0x0005cd53) main_fs_bigclock_swipe_pane_g1

0x04a1,	// (0x00050958) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe9c,	// (0x00060353) main_fs_bigclock_swipe_pane_g

0x04a9,	// (0x00050960) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x04a9,	// (0x00050960) main_fs_bigclock_swipe_pane_t1

0x50b4,	// (0x0005556b) call_type_pane_ParamLimits

0x0eea,	// (0x000513a1) main_btmg_pane

0xea17,	// (0x0005eece) list_single_cale_mrui_row_pane_g2_ParamLimits

0xea17,	// (0x0005eece) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0f,	// (0x000602c6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0f,	// (0x000602c6) list_single_cale_mrui_row_pane_g

0x021c,	// (0x000506d3) list_recal_vselct_arw_lo_pane

0x0224,	// (0x000506db) list_recal_vselct_arw_up_pane

0xea93,	// (0x0005ef4a) list_recal_vselct_pane

0x04c6,	// (0x0005097d) btmg_button_pane

0xa89c,	// (0x0005ad53) main_btmg_pane_g1

0x0eea,	// (0x000513a1) bg_button_pane_cp044

0x04d6,	// (0x0005098d) btmg_button_pane_t1

0xc451,	// (0x0005c908) aid_listscroll_gen

0x257c,	// (0x00052a33) main_cntbar_detail_pane

0xe740,	// (0x0005ebf7) list_cmail_folder_pane

0xe750,	// (0x0005ec07) sp_fs_scroll_pane_cp03_ParamLimits

0xa3e7,	// (0x0005a89e) list_single_fs_dyc_pane_cp01_ParamLimits

0xa3e7,	// (0x0005a89e) list_single_fs_dyc_pane_cp01

0x04e4,	// (0x0005099b) aid_size_cmail_indent

0xd825,	// (0x0005dcdc) list_single_dyc_row_pane_cp01

0xa8cc,	// (0x0005ad83) cntbar_detail_list_pane_ParamLimits

0xa8cc,	// (0x0005ad83) cntbar_detail_list_pane

0xa912,	// (0x0005adc9) main_cntbar_detail_cont_pane_ParamLimits

0xa912,	// (0x0005adc9) main_cntbar_detail_cont_pane

0xa926,	// (0x0005addd) scroll_pane_cp032_ParamLimits

0xa926,	// (0x0005addd) scroll_pane_cp032

0xa932,	// (0x0005ade9) cntbar_detail_list_event_pane_ParamLimits

0xa932,	// (0x0005ade9) cntbar_detail_list_event_pane

0xa8dc,	// (0x0005ad93) cntbar_detail_list_shct_pane

0x0565,	// (0x00050a1c) aid_list_gen

0x1775,	// (0x00051c2c) aid_scroll

0xd7fa,	// (0x0005dcb1) aid_size_touch_scroll_bar

0xeafa,	// (0x0005efb1) aid_list_double

0xa943,	// (0x0005adfa) aid_list_single

0xeafa,	// (0x0005efb1) aid_list_single_lg

0xeb03,	// (0x0005efba) aid_list_z_g_a_sm

0xa94c,	// (0x0005ae03) aid_list_z_g_d

0xa954,	// (0x0005ae0b) aid_txt_z_prm

0xeb0b,	// (0x0005efc2) aid_txt_z_prm_cp01

0xeb19,	// (0x0005efd0) aid_txt_z_sec

0xa962,	// (0x0005ae19) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa962,	// (0x0005ae19) main_cntbar_detail_cont_pane_g1

0xa976,	// (0x0005ae2d) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa976,	// (0x0005ae2d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea1,	// (0x00060358) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea1,	// (0x00060358) main_cntbar_detail_cont_pane_g

0x05a6,	// (0x00050a5d) main_cntbar_detail_cont_pane_t1

0x05b4,	// (0x00050a6b) main_cntbar_detail_cont_pane_t2

0x05c2,	// (0x00050a79) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea6,	// (0x0006035d) main_cntbar_detail_cont_pane_t

0xa986,	// (0x0005ae3d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa986,	// (0x0005ae3d) cell_cntbar_detail_list_shct_pane

0x05e2,	// (0x00050a99) cntbar_detail_list_shct_pane_g1

0x05eb,	// (0x00050aa2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfead,	// (0x00060364) cntbar_detail_list_shct_pane_g

0xa998,	// (0x0005ae4f) cntbar_detail_list_event_pane_g1_ParamLimits

0xa998,	// (0x0005ae4f) cntbar_detail_list_event_pane_g1

0xa9a4,	// (0x0005ae5b) cntbar_detail_list_event_pane_g2_ParamLimits

0xa9a4,	// (0x0005ae5b) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb2,	// (0x00060369) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb2,	// (0x00060369) cntbar_detail_list_event_pane_g

0xaa10,	// (0x0005aec7) cntbar_detail_list_event_pane_t1_ParamLimits

0xaa10,	// (0x0005aec7) cntbar_detail_list_event_pane_t1

0xaa25,	// (0x0005aedc) cntbar_detail_list_event_pane_t2_ParamLimits

0xaa25,	// (0x0005aedc) cntbar_detail_list_event_pane_t2

0x0002,

0xfebf,	// (0x00060376) cntbar_detail_list_event_pane_t_ParamLimits

0xfebf,	// (0x00060376) cntbar_detail_list_event_pane_t

0xc89c,	// (0x0005cd53) cell_cntbar_detail_list_shct_pane_g1

0x21ac,	// (0x00052663) navi_pane_mv_g3

0x257c,	// (0x00052a33) main_cntbar_detail_pane_ParamLimits

0x0eea,	// (0x000513a1) main_notif_wgt_pane

0xecf8,	// (0x0005f1af) aid_tch_main_mp4_pane_g4

0xeedc,	// (0x0005f393) popup_slider_window_cp02

0xea93,	// (0x0005ef4a) list_recal_day_event_pane

0xa8a4,	// (0x0005ad5b) cntbar_detail_btn_pane_ParamLimits

0xa8a4,	// (0x0005ad5b) cntbar_detail_btn_pane

0xa8b7,	// (0x0005ad6e) cntbar_detail_btn_pane_cp01_ParamLimits

0xa8b7,	// (0x0005ad6e) cntbar_detail_btn_pane_cp01

0xa8dc,	// (0x0005ad93) cntbar_detail_list_shct_pane_ParamLimits

0xa8ec,	// (0x0005ada3) cntbar_detail_pane_g1_ParamLimits

0xa8ec,	// (0x0005ada3) cntbar_detail_pane_g1

0xa8fc,	// (0x0005adb3) cntbar_detail_pane_t1_ParamLimits

0xa8fc,	// (0x0005adb3) cntbar_detail_pane_t1

0xa9b0,	// (0x0005ae67) cntbar_detail_list_event_pane_g3_ParamLimits

0xa9b0,	// (0x0005ae67) cntbar_detail_list_event_pane_g3

0xa9c8,	// (0x0005ae7f) cntbar_detail_list_event_pane_g4_ParamLimits

0xa9c8,	// (0x0005ae7f) cntbar_detail_list_event_pane_g4

0xa9e0,	// (0x0005ae97) cntbar_detail_list_event_pane_g5_ParamLimits

0xa9e0,	// (0x0005ae97) cntbar_detail_list_event_pane_g5

0xa9f8,	// (0x0005aeaf) cntbar_detail_list_event_pane_g6_ParamLimits

0xa9f8,	// (0x0005aeaf) cntbar_detail_list_event_pane_g6

0xaa3a,	// (0x0005aef1) cntbar_detail_list_event_pane_t3_ParamLimits

0xaa3a,	// (0x0005aef1) cntbar_detail_list_event_pane_t3

0xaa4c,	// (0x0005af03) popup_notif_wgt_window_ParamLimits

0xaa4c,	// (0x0005af03) popup_notif_wgt_window

0xaa61,	// (0x0005af18) popup_submenu_window_cp01_ParamLimits

0xaa61,	// (0x0005af18) popup_submenu_window_cp01

0x21ed,	// (0x000526a4) bg_popup_window_pane_cp10

0x06c2,	// (0x00050b79) listscroll_notif_wgt_pane

0x06ca,	// (0x00050b81) list_notif_wgt_window

0x06d3,	// (0x00050b8a) scroll_pane_cp033

0x06dc,	// (0x00050b93) list_notif_wgt_row_pane_ParamLimits

0x06dc,	// (0x00050b93) list_notif_wgt_row_pane

0x06ee,	// (0x00050ba5) aid_size_list_notif_wgt_del

0x06f7,	// (0x00050bae) list_notif_wgt_row_pane_g1

0x06ff,	// (0x00050bb6) list_notif_wgt_row_pane_g2

0x0707,	// (0x00050bbe) list_notif_wgt_row_pane_g3

0x0002,

0xfec6,	// (0x0006037d) list_notif_wgt_row_pane_g

0x0710,	// (0x00050bc7) list_notif_wgt_row_pane_t1

0x071e,	// (0x00050bd5) list_notif_wgt_row_pane_t2

0x072c,	// (0x00050be3) list_notif_wgt_row_pane_t3

0x0002,

0xfecd,	// (0x00060384) list_notif_wgt_row_pane_t

0xd504,	// (0x0005d9bb) list_recal_day_event_pane_g1

0x073a,	// (0x00050bf1) list_recal_day_event_pane_t1

0x0eea,	// (0x000513a1) bg_button_pane_cp045

0xaa71,	// (0x0005af28) cntbar_detail_btn_pane_t1

0xc459,	// (0x0005c910) main_callh_pane_ParamLimits

0xc459,	// (0x0005c910) main_callh_pane

0x0eea,	// (0x000513a1) main_coverflow0_pane

0x0eea,	// (0x000513a1) main_wgtman_pane

0x9cab,	// (0x0005a162) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9cab,	// (0x0005a162) main_fs_bigclock_unlock_btn_pane

0xe71a,	// (0x0005ebd1) bg_button_pane_cp16

0xe72a,	// (0x0005ebe1) cell_tport_appsw_pane_g3

0xaa7f,	// (0x0005af36) cf0_flow_pane_ParamLimits

0xaa7f,	// (0x0005af36) cf0_flow_pane

0x0766,	// (0x00050c1d) listscroll_cf0_pane

0x076f,	// (0x00050c26) main_cf0_pane_g1

0xaa94,	// (0x0005af4b) main_cf0_pane_t1_ParamLimits

0xaa94,	// (0x0005af4b) main_cf0_pane_t1

0xaaa9,	// (0x0005af60) main_cf0_pane_t2_ParamLimits

0xaaa9,	// (0x0005af60) main_cf0_pane_t2

0x0001,

0xfed4,	// (0x0006038b) main_cf0_pane_t_ParamLimits

0xfed4,	// (0x0006038b) main_cf0_pane_t

0x079d,	// (0x00050c54) scroll_pane_cp11

0xaabe,	// (0x0005af75) cf0_flow_pane_g1

0xaac6,	// (0x0005af7d) cf0_flow_pane_g2

0x0001,

0xfed9,	// (0x00060390) cf0_flow_pane_g

0xaace,	// (0x0005af85) cf0_flow_pane_t1

0x0eea,	// (0x000513a1) main_call6_pane

0x0eea,	// (0x000513a1) main_calllock_pane

0xaadc,	// (0x0005af93) call6_btn_grp_pane_ParamLimits

0xaadc,	// (0x0005af93) call6_btn_grp_pane

0xaaf2,	// (0x0005afa9) call6_pane_g1_ParamLimits

0xaaf2,	// (0x0005afa9) call6_pane_g1

0xab05,	// (0x0005afbc) popup_call6_1st_window_ParamLimits

0xab05,	// (0x0005afbc) popup_call6_1st_window

0xab14,	// (0x0005afcb) popup_call6_2nd_window_ParamLimits

0xab14,	// (0x0005afcb) popup_call6_2nd_window

0xab23,	// (0x0005afda) cell_call6_btn_pane_ParamLimits

0xab23,	// (0x0005afda) cell_call6_btn_pane

0x21ed,	// (0x000526a4) bg_popup_call2_in_pane_cp03

0x0805,	// (0x00050cbc) popup_call6_1st_window_g1

0x080d,	// (0x00050cc4) popup_call6_1st_window_g2

0x0815,	// (0x00050ccc) popup_call6_1st_window_g3

0x0002,

0xfede,	// (0x00060395) popup_call6_1st_window_g

0x081d,	// (0x00050cd4) popup_call6_1st_window_t1

0x082c,	// (0x00050ce3) popup_call6_1st_window_t2

0x083a,	// (0x00050cf1) popup_call6_1st_window_t3

0x0002,

0xfee5,	// (0x0006039c) popup_call6_1st_window_t

0x21ed,	// (0x000526a4) bg_popup_call2_in_pane_cp04

0x0805,	// (0x00050cbc) popup_call6_2nd_window_g1

0x080d,	// (0x00050cc4) popup_call6_2nd_window_g2

0x0815,	// (0x00050ccc) popup_call6_2nd_window_g3

0x0002,

0xfede,	// (0x00060395) popup_call6_2nd_window_g

0x081d,	// (0x00050cd4) popup_call6_2nd_window_t1

0x0eea,	// (0x000513a1) bg_button_pane_cp15

0x0848,	// (0x00050cff) cell_call6_btn_pane_g1

0x0851,	// (0x00050d08) cell_call6_btn_pane_t1

0xab37,	// (0x0005afee) listscroll_wgtman_pane_ParamLimits

0xab37,	// (0x0005afee) listscroll_wgtman_pane

0xab56,	// (0x0005b00d) wgtman_btn_pane_ParamLimits

0xab56,	// (0x0005b00d) wgtman_btn_pane

0x202e,	// (0x000524e5) aid_scroll_copy1

0x08ad,	// (0x00050d64) list_wgtman_pane

0xab96,	// (0x0005b04d) wgtman_btn_pane_g1_ParamLimits

0xab96,	// (0x0005b04d) wgtman_btn_pane_g1

0xabc2,	// (0x0005b079) wgtman_btn_pane_t1_ParamLimits

0xabc2,	// (0x0005b079) wgtman_btn_pane_t1

0x0916,	// (0x00050dcd) wgtman_btn_pane_t2_ParamLimits

0x0916,	// (0x00050dcd) wgtman_btn_pane_t2

0x0001,

0xfeec,	// (0x000603a3) wgtman_btn_pane_t_ParamLimits

0xfeec,	// (0x000603a3) wgtman_btn_pane_t

0xabff,	// (0x0005b0b6) listrow_wgtman_pane_ParamLimits

0xabff,	// (0x0005b0b6) listrow_wgtman_pane

0xac10,	// (0x0005b0c7) listrow_wgtman_pane_g1

0xac19,	// (0x0005b0d0) listrow_wgtman_pane_g2

0x0001,

0xfef1,	// (0x000603a8) listrow_wgtman_pane_g

0xac21,	// (0x0005b0d8) listrow_wgtman_pane_t1

0xac2f,	// (0x0005b0e6) listrow_wgtman_pane_t2

0x0001,

0xfef6,	// (0x000603ad) listrow_wgtman_pane_t

0xac3d,	// (0x0005b0f4) wait_bar_pane_cp09

0x0973,	// (0x00050e2a) main_calllock_btn_pane

0x097b,	// (0x00050e32) main_calllock_pane_g1

0x0eea,	// (0x000513a1) bg_button_pane_cp17

0x0984,	// (0x00050e3b) main_calllock_btn_pane_g1

0x098d,	// (0x00050e44) main_calllock_btn_pane_t1

0x0eea,	// (0x000513a1) main_dialer3_pane

0x0eea,	// (0x000513a1) main_fmrd2_pane

0xc89c,	// (0x0005cd53) main_fs_bigclock_unlock_btn_pane_g1

0x09a4,	// (0x00050e5b) main_fs_bigclock_unlock_btn_pane_t1

0xac45,	// (0x0005b0fc) area_fmrd2_info_pane_ParamLimits

0xac45,	// (0x0005b0fc) area_fmrd2_info_pane

0xac54,	// (0x0005b10b) area_fmrd2_visual_pane_ParamLimits

0xac54,	// (0x0005b10b) area_fmrd2_visual_pane

0xac62,	// (0x0005b119) fmrd2_indi_pane_ParamLimits

0xac62,	// (0x0005b119) fmrd2_indi_pane

0xac6f,	// (0x0005b126) area_fmrd2_visual_pane_g1

0xac77,	// (0x0005b12e) area_fmrd2_visual_pane_t1

0xac85,	// (0x0005b13c) area_fmrd2_visual_pane_t2

0xac93,	// (0x0005b14a) area_fmrd2_visual_pane_t3

0x0002,

0xff00,	// (0x000603b7) area_fmrd2_visual_pane_t

0xaca1,	// (0x0005b158) area_fmrd2_info_pane_g1

0xaca9,	// (0x0005b160) area_fmrd2_info_pane_t1

0xacb7,	// (0x0005b16e) area_fmrd2_info_pane_t2

0xacc5,	// (0x0005b17c) area_fmrd2_info_pane_t3

0xacd3,	// (0x0005b18a) area_fmrd2_info_pane_t4

0x0003,

0xff07,	// (0x000603be) area_fmrd2_info_pane_t

0xace1,	// (0x0005b198) fmrd2_indi_pane_t1

0xacef,	// (0x0005b1a6) fmrd2_indi_pane_t2

0xacfd,	// (0x0005b1b4) fmrd2_indi_pane_t3

0x0002,

0xff10,	// (0x000603c7) fmrd2_indi_pane_t

0xe20a,	// (0x0005e6c1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe20a,	// (0x0005e6c1) list_single_fs_bigclock_indicator_pane_g5

0xe2ac,	// (0x0005e763) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2ac,	// (0x0005e763) list_single_fs_bigclock_indicator_pane_t5

0xa516,	// (0x0005a9cd) aid_cell_bcale_month_pane_ParamLimits

0xa516,	// (0x0005a9cd) aid_cell_bcale_month_pane

0xa528,	// (0x0005a9df) bcale_month_pane_ParamLimits

0xa528,	// (0x0005a9df) bcale_month_pane

0xa53a,	// (0x0005a9f1) bcale_preview_pane_ParamLimits

0xa53a,	// (0x0005a9f1) bcale_preview_pane

0x0463,	// (0x0005091a) list_single_fs_bigclock_pane_t1_ParamLimits

0x047d,	// (0x00050934) list_single_fs_bigclock_pane_t2_ParamLimits

0x047d,	// (0x00050934) list_single_fs_bigclock_pane_t2

0x0001,

0xfe97,	// (0x0006034e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe97,	// (0x0006034e) list_single_fs_bigclock_pane_t

0x099c,	// (0x00050e53) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfefb,	// (0x000603b2) main_fs_bigclock_unlock_btn_pane_g

0xad0b,	// (0x0005b1c2) aid_dia3_key_size_ParamLimits

0xad0b,	// (0x0005b1c2) aid_dia3_key_size

0xad1a,	// (0x0005b1d1) aid_dia3_listrow_size_ParamLimits

0xad1a,	// (0x0005b1d1) aid_dia3_listrow_size

0xad2d,	// (0x0005b1e4) dia3_keypad_fun_pane_ParamLimits

0xad2d,	// (0x0005b1e4) dia3_keypad_fun_pane

0xad41,	// (0x0005b1f8) dia3_keypad_num_pane_ParamLimits

0xad41,	// (0x0005b1f8) dia3_keypad_num_pane

0xad52,	// (0x0005b209) dia3_listscroll_pane_ParamLimits

0xad52,	// (0x0005b209) dia3_listscroll_pane

0xad63,	// (0x0005b21a) dia3_numentry_pane_ParamLimits

0xad63,	// (0x0005b21a) dia3_numentry_pane

0x0abf,	// (0x00050f76) dia3_list_pane

0x0ac8,	// (0x00050f7f) scroll_pane_cp12

0x0eea,	// (0x000513a1) bg_dia3_numentry_pane

0xad75,	// (0x0005b22c) dia3_numentry_pane_t1

0xad84,	// (0x0005b23b) cell_dia3_key_num_pane

0xad8c,	// (0x0005b243) cell_dia3_key0_fun_pane_ParamLimits

0xad8c,	// (0x0005b243) cell_dia3_key0_fun_pane

0xada0,	// (0x0005b257) cell_dia3_key1_fun_pane_ParamLimits

0xada0,	// (0x0005b257) cell_dia3_key1_fun_pane

0xadb7,	// (0x0005b26e) dia3_listrow_pane

0xdf0e,	// (0x0005e3c5) bg_dia3_numentry_pane_g1

0x0eea,	// (0x000513a1) bg_button_pane_cp21

0x0b0f,	// (0x00050fc6) cell_dia3_key_num_pane_t1

0x0b1d,	// (0x00050fd4) cell_dia3_key_num_pane_t2

0x0b2c,	// (0x00050fe3) cell_dia3_key_num_pane_t3

0x0b3b,	// (0x00050ff2) cell_dia3_key_num_pane_t4

0x0003,

0xff17,	// (0x000603ce) cell_dia3_key_num_pane_t

0x0eea,	// (0x000513a1) bg_button_pane_cp19

0x0b4a,	// (0x00051001) cell_dia3_key0_fun_pane_g1

0x0eea,	// (0x000513a1) bg_button_pane_cp20

0xadc9,	// (0x0005b280) cell_dia3_key1_fun_pane_g1

0xadd1,	// (0x0005b288) area_left_week_number_pane

0xadda,	// (0x0005b291) area_top_day_name_pane

0xade3,	// (0x0005b29a) frame_month_view_pane

0xadeb,	// (0x0005b2a2) grid_month_view_pane

0xadf5,	// (0x0005b2ac) cell_top_day_name_pane_ParamLimits

0xadf5,	// (0x0005b2ac) cell_top_day_name_pane

0xae0b,	// (0x0005b2c2) cell_area_left_week_number_pane_ParamLimits

0xae0b,	// (0x0005b2c2) cell_area_left_week_number_pane

0xae1f,	// (0x0005b2d6) cell_month_view_pane_ParamLimits

0xae1f,	// (0x0005b2d6) cell_month_view_pane

0x0bc3,	// (0x0005107a) frm_month_g1

0xae3a,	// (0x0005b2f1) frm_month_g2

0xae42,	// (0x0005b2f9) frm_month_g3

0xae4a,	// (0x0005b301) frm_month_g4

0xae52,	// (0x0005b309) frm_month_g5

0xae5a,	// (0x0005b311) frm_month_g6

0xae62,	// (0x0005b319) frm_month_g7

0x0bfc,	// (0x000510b3) frm_month_g8

0xae6a,	// (0x0005b321) frm_month_g9

0xae73,	// (0x0005b32a) frm_month_g10

0xae7c,	// (0x0005b333) frm_month_g11

0xae85,	// (0x0005b33c) frm_month_g12

0xae8e,	// (0x0005b345) frm_month_g13

0xae97,	// (0x0005b34e) frm_month_g14

0xaea0,	// (0x0005b357) frm_month_g15

0xaea9,	// (0x0005b360) frm_month_g16

0x000f,

0xff20,	// (0x000603d7) frm_month_g

0xaeb2,	// (0x0005b369) cell_top_day_name_pane_t1

0xaec1,	// (0x0005b378) cell_area_left_week_number_pane_g1

0xaeb2,	// (0x0005b369) cell_area_left_week_number_pane_t1

0xc89c,	// (0x0005cd53) cell_month_view_pane_g1

0xaec9,	// (0x0005b380) cell_month_view_pane_t1

0x0eea,	// (0x000513a1) main_fps_pane

0xe520,	// (0x0005e9d7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe520,	// (0x0005e9d7) cmail_ddmenu_btn02_pane_cp1

0xe53c,	// (0x0005e9f3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe53c,	// (0x0005e9f3) cmail_ddmenu_btn02_pane_cp2

0xa7a4,	// (0x0005ac5b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa7a4,	// (0x0005ac5b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe48,	// (0x000602ff) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe48,	// (0x000602ff) cmail_ddmenu_btn02_pane_g

0xa7c5,	// (0x0005ac7c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa7c5,	// (0x0005ac7c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe4d,	// (0x00060304) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe4d,	// (0x00060304) cmail_ddmenu_btn02_pane_t

0xaed8,	// (0x0005b38f) fps_text_pane_ParamLimits

0xaed8,	// (0x0005b38f) fps_text_pane

0xaeee,	// (0x0005b3a5) main_fps_pane_g1_ParamLimits

0xaeee,	// (0x0005b3a5) main_fps_pane_g1

0xaf04,	// (0x0005b3bb) wait_bar_pane_cp010_ParamLimits

0xaf04,	// (0x0005b3bb) wait_bar_pane_cp010

0xaf15,	// (0x0005b3cc) fps_text_pane_t1_ParamLimits

0xaf15,	// (0x0005b3cc) fps_text_pane_t1

0x25cb,	// (0x00052a82) cam4_image_uncrop_pane_g1

0x25d4,	// (0x00052a8b) cam4_image_uncrop_pane_g2

0x8172,	// (0x00058629) cam4_image_uncrop_pane_g3

0x817b,	// (0x00058632) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x0005fdd7) cam4_image_uncrop_pane_g

0xadb7,	// (0x0005b26e) dia3_listrow_pane_ParamLimits

0x0eea,	// (0x000513a1) main_phob2_pane

0xa381,	// (0x0005a838) cell_tport_appsw_pane_cp02_ParamLimits

0xa381,	// (0x0005a838) cell_tport_appsw_pane_cp02

0xa391,	// (0x0005a848) cell_tport_appsw_pane_cp03_ParamLimits

0xa391,	// (0x0005a848) cell_tport_appsw_pane_cp03

0x0eea,	// (0x000513a1) phob2_contact_card_pane

0x0eea,	// (0x000513a1) phob2_listscroll_pane

0x0ca8,	// (0x0005115f) phob2_list_pane

0x0cb0,	// (0x00051167) scroll_pane_cp034

0xaf2d,	// (0x0005b3e4) phob2_cc_data_pane_ParamLimits

0xaf2d,	// (0x0005b3e4) phob2_cc_data_pane

0xeb27,	// (0x0005efde) phob2_cc_listscroll_pane_ParamLimits

0xeb27,	// (0x0005efde) phob2_cc_listscroll_pane

0xeb43,	// (0x0005effa) list_double_large_graphic_phob2_pane_ParamLimits

0xeb43,	// (0x0005effa) list_double_large_graphic_phob2_pane

0xeb55,	// (0x0005f00c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeb55,	// (0x0005f00c) list_double_large_graphic_phob2_pane_g1

0xaf4a,	// (0x0005b401) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaf4a,	// (0x0005b401) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff41,	// (0x000603f8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff41,	// (0x000603f8) list_double_large_graphic_phob2_pane_g

0xaf56,	// (0x0005b40d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaf56,	// (0x0005b40d) list_double_large_graphic_phob2_pane_t1

0xaf6b,	// (0x0005b422) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaf6b,	// (0x0005b422) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff46,	// (0x000603fd) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff46,	// (0x000603fd) list_double_large_graphic_phob2_pane_t

0x0eea,	// (0x000513a1) list_highlight_pane_cp024

0x0d3b,	// (0x000511f2) phob2_cc_button_pane

0xeb62,	// (0x0005f019) phob2_cc_data_pane_g1_ParamLimits

0xeb62,	// (0x0005f019) phob2_cc_data_pane_g1

0xeb77,	// (0x0005f02e) phob2_cc_data_pane_g2_ParamLimits

0xeb77,	// (0x0005f02e) phob2_cc_data_pane_g2

0x0001,

0xff4b,	// (0x00060402) phob2_cc_data_pane_g_ParamLimits

0xff4b,	// (0x00060402) phob2_cc_data_pane_g

0xeb89,	// (0x0005f040) phob2_cc_data_pane_t1_ParamLimits

0xeb89,	// (0x0005f040) phob2_cc_data_pane_t1

0xeba1,	// (0x0005f058) phob2_cc_data_pane_t2_ParamLimits

0xeba1,	// (0x0005f058) phob2_cc_data_pane_t2

0xebb9,	// (0x0005f070) phob2_cc_data_pane_t3_ParamLimits

0xebb9,	// (0x0005f070) phob2_cc_data_pane_t3

0x0002,

0xff50,	// (0x00060407) phob2_cc_data_pane_t_ParamLimits

0xff50,	// (0x00060407) phob2_cc_data_pane_t

0x0d91,	// (0x00051248) phob2_cc_list_pane_ParamLimits

0x0d91,	// (0x00051248) phob2_cc_list_pane

0xde2b,	// (0x0005e2e2) scroll_pane_cp035_ParamLimits

0xde2b,	// (0x0005e2e2) scroll_pane_cp035

0x257c,	// (0x00052a33) bg_button_pane_cp033

0x0d9d,	// (0x00051254) phob2_cc_button_pane_g1

0x0da9,	// (0x00051260) phob2_cc_button_pane_t1

0x0dbe,	// (0x00051275) phob2_cc_button_pane_t2

0x0001,

0xff57,	// (0x0006040e) phob2_cc_button_pane_t

0xebd1,	// (0x0005f088) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xebd1,	// (0x0005f088) list_double_large_graphic_phob2_cc_pane

0xebe3,	// (0x0005f09a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xebe3,	// (0x0005f09a) list_double_large_graphic_phob2_cc_pane_g1

0xaf7d,	// (0x0005b434) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaf7d,	// (0x0005b434) list_double_large_graphic_phob2_cc_pane_g2

0xaf89,	// (0x0005b440) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaf89,	// (0x0005b440) list_double_large_graphic_phob2_cc_pane_g3

0xaf95,	// (0x0005b44c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaf95,	// (0x0005b44c) list_double_large_graphic_phob2_cc_pane_g4

0xafa1,	// (0x0005b458) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xafa1,	// (0x0005b458) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff5c,	// (0x00060413) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff5c,	// (0x00060413) list_double_large_graphic_phob2_cc_pane_g

0xafad,	// (0x0005b464) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xafad,	// (0x0005b464) list_double_large_graphic_phob2_cc_pane_t1

0xafd6,	// (0x0005b48d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xafd6,	// (0x0005b48d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff67,	// (0x0006041e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff67,	// (0x0006041e) list_double_large_graphic_phob2_cc_pane_t

0x0e8c,	// (0x00051343) list_highlight_pane_cp025_ParamLimits

0x0e8c,	// (0x00051343) list_highlight_pane_cp025

0x257c,	// (0x00052a33) bg_button_pane_cp033_ParamLimits

0x0d9d,	// (0x00051254) phob2_cc_button_pane_g1_ParamLimits

0x0da9,	// (0x00051260) phob2_cc_button_pane_t1_ParamLimits

0x0dbe,	// (0x00051275) phob2_cc_button_pane_t2_ParamLimits

0xff57,	// (0x0006040e) phob2_cc_button_pane_t_ParamLimits

0x3755,	// (0x00053c0c) popup_wgtman_window

0xdf2e,	// (0x0005e3e5) scroll_pane_cp038

0xab78,	// (0x0005b02f) wgtman_btn_pane_cp_01_ParamLimits

0xab78,	// (0x0005b02f) wgtman_btn_pane_cp_01

0x0e9a,	// (0x00051351) wgtman_content_pane

0x0ea3,	// (0x0005135a) wgtman_heading_pane

0x0eea,	// (0x000513a1) bg_heading_pane_cp02

0x0eac,	// (0x00051363) wgtman_heading_pane_g1

0x0eb4,	// (0x0005136b) wgtman_heading_pane_t1

0x0ec2,	// (0x00051379) scroll_pane_cp036

0x0eca,	// (0x00051381) wgtman_list_pane

0x0ed2,	// (0x00051389) wgtman_list_pane_t1_ParamLimits

0x0ed2,	// (0x00051389) wgtman_list_pane_t1

0xef36,	// (0x0005f3ed) cam4_grid_pane

0x8d4e,	// (0x00059205) bg_button_pane_cp015_ParamLimits

0x8d5e,	// (0x00059215) bg_button_pane_cp016_ParamLimits

0x8d70,	// (0x00059227) bg_button_pane_cp017_ParamLimits

0x8dc0,	// (0x00059277) popup_vitu2_query_window_g3_ParamLimits

0x8dc0,	// (0x00059277) popup_vitu2_query_window_g3

0x8e73,	// (0x0005932a) popup_vitu2_query_window_t6_ParamLimits

0x8e73,	// (0x0005932a) popup_vitu2_query_window_t6

0x8e9e,	// (0x00059355) popup_vitu2_query_window_t7_ParamLimits

0x8e9e,	// (0x00059355) popup_vitu2_query_window_t7

0x25cb,	// (0x00052a82) cam4_grid_pane_g1

0x25d4,	// (0x00052a8b) cam4_grid_pane_g2

0x25dd,	// (0x00052a94) cam4_grid_pane_g3

0x25e6,	// (0x00052a9d) cam4_grid_pane_g4

0x0003,

0xff6c,	// (0x00060423) cam4_grid_pane_g

0x4415,	// (0x000548cc) aid_placing_vt_slider_lsc_ParamLimits

0x4685,	// (0x00054b3c) vidtel_button_pane_ParamLimits

0x4685,	// (0x00054b3c) vidtel_button_pane

0x0eea,	// (0x000513a1) bg_button_pane_cp034

0xebef,	// (0x0005f0a6) vidtel_button_pane_g1

0x25f7,	// (0x00052aae) vidtel_button_pane_t1

0xd4d4,	// (0x0005d98b) aid_size_vtel_slider_touch

0xde2b,	// (0x0005e2e2) scroll_pane_cp039

0xdf5a,	// (0x0005e411) ncim_query_button_pane_cp01_ParamLimits

0xdf79,	// (0x0005e430) ncimui_query_pane_g1_ParamLimits

0x257c,	// (0x00052a33) input_focus_pane_cp012_ParamLimits

0xdf9e,	// (0x0005e455) ncim_query_entry_pane_t1_ParamLimits

0xde2b,	// (0x0005e2e2) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
