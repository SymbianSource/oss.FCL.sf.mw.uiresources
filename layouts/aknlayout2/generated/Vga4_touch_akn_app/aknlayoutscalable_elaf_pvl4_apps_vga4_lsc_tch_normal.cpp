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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000ed6c };

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
0x0161,	// (0x0000eecd) Screen

0x016d,	// (0x0000eed9) application_window

0x01a9,	// (0x0000ef15) area_bottom_pane_ParamLimits

0x01a9,	// (0x0000ef15) area_bottom_pane

0x01e2,	// (0x0000ef4e) area_top_pane_ParamLimits

0x01e2,	// (0x0000ef4e) area_top_pane

0x95a0,	// (0x0001830c) call_video_uplink_pane_ParamLimits

0x95a0,	// (0x0001830c) call_video_uplink_pane

0x0270,	// (0x0000efdc) main_pane_ParamLimits

0x0270,	// (0x0000efdc) main_pane

0xbd20,	// (0x0001aa8c) context_pane

0x338b,	// (0x000120f7) navi_pane

0x33c2,	// (0x0001212e) popup_cale_events_window_ParamLimits

0x33c2,	// (0x0001212e) popup_cale_events_window

0xbd33,	// (0x0001aa9f) popup_mup_playback_window

0x33da,	// (0x00012146) signal_pane

0x9da8,	// (0x00018b14) main_browser_pane

0x9fc9,	// (0x00018d35) main_burst_pane

0x30a3,	// (0x00011e0f) main_calc_pane

0xbcbc,	// (0x0001aa28) main_cale_day_pane

0x069b,	// (0x0000f407) main_cale_month_pane

0xbcbc,	// (0x0001aa28) main_cale_week_pane

0x9fc9,	// (0x00018d35) main_call_pane

0x9a14,	// (0x00018780) main_call_poc_pane

0x9fc9,	// (0x00018d35) main_camera_pane

0x9fc9,	// (0x00018d35) main_chi_dic_pane

0xa841,	// (0x000195ad) main_clock_pane

0x9a14,	// (0x00018780) main_fmradio_pane

0x9fc9,	// (0x00018d35) main_graph_messa_pane

0x9a14,	// (0x00018780) main_help_pane

0x9da8,	// (0x00018b14) main_im_pane

0x9c6f,	// (0x000189db) main_image_pane_ParamLimits

0x9c6f,	// (0x000189db) main_image_pane

0x9a14,	// (0x00018780) main_location2_pane

0x9fc9,	// (0x00018d35) main_location_pane

0x9c6f,	// (0x000189db) main_messa_pane

0x9a14,	// (0x00018780) main_mp2_pane

0x9fc9,	// (0x00018d35) main_mp_pane

0x9a14,	// (0x00018780) main_msg_pane

0x9a14,	// (0x00018780) main_mup_eq_pane

0x9a14,	// (0x00018780) main_mup_pane

0x9da8,	// (0x00018b14) main_notes_pane

0x9a14,	// (0x00018780) main_pec_pane

0x9a14,	// (0x00018780) main_phob_pane

0x9a14,	// (0x00018780) main_pinb_pane

0x9a14,	// (0x00018780) main_postcard_pane

0x9a14,	// (0x00018780) main_qdial_pane

0x9fc9,	// (0x00018d35) main_skin_pane

0x9a14,	// (0x00018780) main_smil2_pane

0x9fc9,	// (0x00018d35) main_smil_pane

0x9fc9,	// (0x00018d35) main_video_pane

0x9fc9,	// (0x00018d35) main_video_tele_pane

0x9c6f,	// (0x000189db) main_viewer_pane_ParamLimits

0x9c6f,	// (0x000189db) main_viewer_pane

0x9fc9,	// (0x00018d35) main_vorec_pane

0x30f9,	// (0x00011e65) popup_blid_sat_info_window_ParamLimits

0x30f9,	// (0x00011e65) popup_blid_sat_info_window

0x315d,	// (0x00011ec9) popup_dyc_status_message_window_ParamLimits

0x315d,	// (0x00011ec9) popup_dyc_status_message_window

0x3177,	// (0x00011ee3) popup_grid_large_graphic_window_ParamLimits

0x3177,	// (0x00011ee3) popup_grid_large_graphic_window

0x3239,	// (0x00011fa5) popup_loc_request_window_ParamLimits

0x3239,	// (0x00011fa5) popup_loc_request_window

0x335f,	// (0x000120cb) popup_wml_address_window_ParamLimits

0x335f,	// (0x000120cb) popup_wml_address_window

0x2ee1,	// (0x00011c4d) call_muted_g1

0x2bba,	// (0x00011926) popup_call_audio_conf_window_ParamLimits

0x2bba,	// (0x00011926) popup_call_audio_conf_window

0x2ef1,	// (0x00011c5d) popup_call_audio_first_window_ParamLimits

0x2ef1,	// (0x00011c5d) popup_call_audio_first_window

0x2f67,	// (0x00011cd3) popup_call_audio_in_window_ParamLimits

0x2f67,	// (0x00011cd3) popup_call_audio_in_window

0x2fa3,	// (0x00011d0f) popup_call_audio_out_window_ParamLimits

0x2fa3,	// (0x00011d0f) popup_call_audio_out_window

0x2fdd,	// (0x00011d49) popup_call_audio_second_window_ParamLimits

0x2fdd,	// (0x00011d49) popup_call_audio_second_window

0x3033,	// (0x00011d9f) popup_call_audio_wait_window_ParamLimits

0x3033,	// (0x00011d9f) popup_call_audio_wait_window

0x3068,	// (0x00011dd4) popup_number_entry_window_ParamLimits

0x3068,	// (0x00011dd4) popup_number_entry_window

0x95cc,	// (0x00018338) bg_popup_call_pane_cp05_ParamLimits

0x95cc,	// (0x00018338) bg_popup_call_pane_cp05

0x95ec,	// (0x00018358) popup_number_entry_window_t1

0x95ff,	// (0x0001836b) popup_number_entry_window_t2

0x9611,	// (0x0001837d) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0001ddac) popup_number_entry_window_t

0x9658,	// (0x000183c4) text_title_cp2

0x966b,	// (0x000183d7) bg_popup_call_pane_cp_ParamLimits

0x966b,	// (0x000183d7) bg_popup_call_pane_cp

0x9679,	// (0x000183e5) call_thumbnail_pane

0x9681,	// (0x000183ed) popup_call_audio_in_window_g1_ParamLimits

0x9681,	// (0x000183ed) popup_call_audio_in_window_g1

0x968d,	// (0x000183f9) popup_call_audio_in_window_g2_ParamLimits

0x968d,	// (0x000183f9) popup_call_audio_in_window_g2

0x9699,	// (0x00018405) popup_call_audio_in_window_g3_ParamLimits

0x9699,	// (0x00018405) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0001ddb5) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0001ddb5) popup_call_audio_in_window_g

0x96a5,	// (0x00018411) popup_call_audio_in_window_t1_ParamLimits

0x96a5,	// (0x00018411) popup_call_audio_in_window_t1

0x96c1,	// (0x0001842d) popup_call_audio_in_window_t2_ParamLimits

0x96c1,	// (0x0001842d) popup_call_audio_in_window_t2

0x96dd,	// (0x00018449) popup_call_audio_in_window_t3_ParamLimits

0x96dd,	// (0x00018449) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0001ddbc) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0001ddbc) popup_call_audio_in_window_t

0x966b,	// (0x000183d7) bg_popup_call_pane_cp01_ParamLimits

0x966b,	// (0x000183d7) bg_popup_call_pane_cp01

0x9679,	// (0x000183e5) call_thumbnail_pane_cp02

0x96f0,	// (0x0001845c) call_type_pane_cp022

0x96f8,	// (0x00018464) popup_call_audio_out_window_g1_ParamLimits

0x96f8,	// (0x00018464) popup_call_audio_out_window_g1

0x970a,	// (0x00018476) popup_call_audio_out_window_g2_ParamLimits

0x970a,	// (0x00018476) popup_call_audio_out_window_g2

0x9716,	// (0x00018482) popup_call_audio_out_window_g3_ParamLimits

0x9716,	// (0x00018482) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0001ddc3) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0001ddc3) popup_call_audio_out_window_g

0x9728,	// (0x00018494) popup_call_audio_out_window_t1_ParamLimits

0x9728,	// (0x00018494) popup_call_audio_out_window_t1

0x9740,	// (0x000184ac) popup_call_audio_out_window_t2_ParamLimits

0x9740,	// (0x000184ac) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0001ddca) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0001ddca) popup_call_audio_out_window_t

0x9755,	// (0x000184c1) bg_popup_call_pane_ParamLimits

0x9755,	// (0x000184c1) bg_popup_call_pane

0x03f5,	// (0x0000f161) call_thumbnail_pane_cp_ParamLimits

0x03f5,	// (0x0000f161) call_thumbnail_pane_cp

0x97d9,	// (0x00018545) call_type_pane_cp01_ParamLimits

0x97d9,	// (0x00018545) call_type_pane_cp01

0x981d,	// (0x00018589) popup_call_audio_first_window_g1_ParamLimits

0x981d,	// (0x00018589) popup_call_audio_first_window_g1

0x9869,	// (0x000185d5) popup_call_audio_first_window_g2_ParamLimits

0x9869,	// (0x000185d5) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x0001ddcf) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x0001ddcf) popup_call_audio_first_window_g

0x98ad,	// (0x00018619) popup_call_audio_first_window_t1_ParamLimits

0x98ad,	// (0x00018619) popup_call_audio_first_window_t1

0x9959,	// (0x000186c5) popup_call_audio_first_window_t4_ParamLimits

0x9959,	// (0x000186c5) popup_call_audio_first_window_t4

0x99e5,	// (0x00018751) popup_call_audio_first_window_t5_ParamLimits

0x99e5,	// (0x00018751) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0001ddd4) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0001ddd4) popup_call_audio_first_window_t

0x9a14,	// (0x00018780) bg_popup_call_pane_cp02

0x9a1e,	// (0x0001878a) call_type_pane_cp023

0x9a26,	// (0x00018792) popup_call_audio_wait_window_g1

0x9a2e,	// (0x0001879a) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0001dddb) popup_call_audio_wait_window_g

0x9a36,	// (0x000187a2) popup_call_audio_wait_window_t3

0x9a44,	// (0x000187b0) bg_popup_call_pane_cp03_ParamLimits

0x9a44,	// (0x000187b0) bg_popup_call_pane_cp03

0x9aa4,	// (0x00018810) call_thumbnail_pane_cp011_ParamLimits

0x9aa4,	// (0x00018810) call_thumbnail_pane_cp011

0x9ab0,	// (0x0001881c) call_type_pane_cp034_ParamLimits

0x9ab0,	// (0x0001881c) call_type_pane_cp034

0x9aec,	// (0x00018858) popup_call_audio_second_window_g1_ParamLimits

0x9aec,	// (0x00018858) popup_call_audio_second_window_g1

0x9b28,	// (0x00018894) popup_call_audio_second_window_g2_ParamLimits

0x9b28,	// (0x00018894) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0001dde0) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0001dde0) popup_call_audio_second_window_g

0x9b64,	// (0x000188d0) popup_call_audio_second_window_t1_ParamLimits

0x9b64,	// (0x000188d0) popup_call_audio_second_window_t1

0x9be5,	// (0x00018951) popup_call_audio_second_window_t2_ParamLimits

0x9be5,	// (0x00018951) popup_call_audio_second_window_t2

0x9c1b,	// (0x00018987) popup_call_audio_second_window_t3_ParamLimits

0x9c1b,	// (0x00018987) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0001dde5) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0001dde5) popup_call_audio_second_window_t

0x9a14,	// (0x00018780) bg_popup_call_pane_cp04

0x9c51,	// (0x000189bd) list_conf_pane

0x9c59,	// (0x000189c5) popup_call_audio_conf_window_t1

0x9c67,	// (0x000189d3) call_thumbnail_pane_g1

0x9c6f,	// (0x000189db) bg_pinb_pane_ParamLimits

0x9c6f,	// (0x000189db) bg_pinb_pane

0x9c7d,	// (0x000189e9) find_pinb_pane

0x9c6f,	// (0x000189db) listscroll_pinb_pane_ParamLimits

0x9c6f,	// (0x000189db) listscroll_pinb_pane

0x9c87,	// (0x000189f3) pinb_bg_pane_g1

0x9c87,	// (0x000189f3) pinb_bg_pane_g2

0x9c87,	// (0x000189f3) pinb_bg_pane_g3

0x9c87,	// (0x000189f3) pinb_bg_pane_g4

0x9c87,	// (0x000189f3) pinb_bg_pane_g5

0x9c87,	// (0x000189f3) pinb_bg_pane_g6

0x9c87,	// (0x000189f3) pinb_bg_pane_g7

0x9c87,	// (0x000189f3) pinb_bg_pane_g8

0x9c87,	// (0x000189f3) pinb_bg_pane_g9

0x9c87,	// (0x000189f3) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0001ddec) pinb_bg_pane_g

0x9549,	// (0x000182b5) grid_pinb_pane

0x9549,	// (0x000182b5) list_pinb_pane

0x95be,	// (0x0001832a) scroll_pane_cp01_ParamLimits

0x95be,	// (0x0001832a) scroll_pane_cp01

0x9c91,	// (0x000189fd) find_pinb_pane_g1_ParamLimits

0x9c91,	// (0x000189fd) find_pinb_pane_g1

0x9ca9,	// (0x00018a15) find_pinb_pane_t1

0x9cbb,	// (0x00018a27) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0001de06) find_pinb_pane_t

0x9cd0,	// (0x00018a3c) input_focus_pane_cp01_ParamLimits

0x9cd0,	// (0x00018a3c) input_focus_pane_cp01

0x9cdc,	// (0x00018a48) cell_pinb_pane_ParamLimits

0x9cdc,	// (0x00018a48) cell_pinb_pane

0x9cea,	// (0x00018a56) cell_pinb_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) cell_pinb_pane_g1

0x9cf8,	// (0x00018a64) cell_pinb_pane_g2_ParamLimits

0x9cf8,	// (0x00018a64) cell_pinb_pane_g2

0x9cf8,	// (0x00018a64) cell_pinb_pane_g3_ParamLimits

0x9cf8,	// (0x00018a64) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x0001de0b) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x0001de0b) cell_pinb_pane_g

0x9a14,	// (0x00018780) grid_highlight_pane_cp01

0x9cdc,	// (0x00018a48) list_pinb_item_pane_ParamLimits

0x9cdc,	// (0x00018a48) list_pinb_item_pane

0x9549,	// (0x000182b5) list_highlight_pane_cp02

0x9d06,	// (0x00018a72) list_pinb_item_pane_g1_ParamLimits

0x9d06,	// (0x00018a72) list_pinb_item_pane_g1

0x9cf8,	// (0x00018a64) list_pinb_item_pane_g2_ParamLimits

0x9cf8,	// (0x00018a64) list_pinb_item_pane_g2

0x9cea,	// (0x00018a56) list_pinb_item_pane_g3_ParamLimits

0x9cea,	// (0x00018a56) list_pinb_item_pane_g3

0x9cf8,	// (0x00018a64) list_pinb_item_pane_g4_ParamLimits

0x9cf8,	// (0x00018a64) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x0001de12) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x0001de12) list_pinb_item_pane_g

0x9d14,	// (0x00018a80) list_pinb_item_pane_t1_ParamLimits

0x9d14,	// (0x00018a80) list_pinb_item_pane_t1

0x0439,	// (0x0000f1a5) calc_display_pane

0x045e,	// (0x0000f1ca) calc_paper_pane

0x0481,	// (0x0000f1ed) grid_calc_pane

0x9549,	// (0x000182b5) bg_list_pane_cp01

0x9d30,	// (0x00018a9c) clock_g1

0x9d30,	// (0x00018a9c) clock_g2

0x0001,

0xf0af,	// (0x0001de1b) clock_g

0x9d3a,	// (0x00018aa6) clock_t1_ParamLimits

0x9d3a,	// (0x00018aa6) clock_t1

0x9d4e,	// (0x00018aba) clock_t2_ParamLimits

0x9d4e,	// (0x00018aba) clock_t2

0x9d4e,	// (0x00018aba) clock_t3_ParamLimits

0x9d4e,	// (0x00018aba) clock_t3

0x9d4e,	// (0x00018aba) clock_t4_ParamLimits

0x9d4e,	// (0x00018aba) clock_t4

0x9d3a,	// (0x00018aa6) clock_t5_ParamLimits

0x9d3a,	// (0x00018aa6) clock_t5

0x9d4e,	// (0x00018aba) clock_t6_ParamLimits

0x9d4e,	// (0x00018aba) clock_t6

0x9d4e,	// (0x00018aba) clock_t7_ParamLimits

0x9d4e,	// (0x00018aba) clock_t7

0x9d4e,	// (0x00018aba) clock_t8_ParamLimits

0x9d4e,	// (0x00018aba) clock_t8

0x9d4e,	// (0x00018aba) clock_t9_ParamLimits

0x9d4e,	// (0x00018aba) clock_t9

0x0008,

0xf0b4,	// (0x0001de20) clock_t_ParamLimits

0xf0b4,	// (0x0001de20) clock_t

0x9549,	// (0x000182b5) popup_clock_analogue_window_cp02

0x9549,	// (0x000182b5) popup_clock_digital_window_cp01

0x9a14,	// (0x00018780) listscroll_help_pane

0x9a14,	// (0x00018780) phob_pre_status_pane

0x9d62,	// (0x00018ace) grid_qdial_pane

0x9c6f,	// (0x000189db) listscroll_mce_pane

0x9c6f,	// (0x000189db) bg_notes_pane

0x9d6c,	// (0x00018ad8) list_notes_pane

0x04af,	// (0x0000f21b) scroll_pane_cp06

0x9d7a,	// (0x00018ae6) bg_calc_paper_pane

0x9d8e,	// (0x00018afa) list_calc_pane

0x9da8,	// (0x00018b14) bg_calc_display_pane

0x04c3,	// (0x0000f22f) calc_display_pane_t1

0x04d8,	// (0x0000f244) calc_display_pane_t2

0x9db4,	// (0x00018b20) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0001de33) calc_display_pane_t

0x04ed,	// (0x0000f259) cell_calc_pane_ParamLimits

0x04ed,	// (0x0000f259) cell_calc_pane

0x9dc6,	// (0x00018b32) bg_calc_paper_pane_g1

0x9dd2,	// (0x00018b3e) bg_calc_paper_pane_g2

0x9dde,	// (0x00018b4a) bg_calc_paper_pane_g3

0x9dea,	// (0x00018b56) bg_calc_paper_pane_g4

0x9df6,	// (0x00018b62) bg_calc_paper_pane_g5

0x0528,	// (0x0000f294) bg_calc_paper_pane_g6

0x053b,	// (0x0000f2a7) bg_calc_paper_pane_g7

0x054e,	// (0x0000f2ba) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x0001de3a) bg_calc_paper_pane_g

0x0561,	// (0x0000f2cd) calc_bg_paper_pane_g9

0x0574,	// (0x0000f2e0) list_calc_item_pane_ParamLimits

0x0574,	// (0x0000f2e0) list_calc_item_pane

0x9e02,	// (0x00018b6e) list_calc_item_pane_g1

0x9e0f,	// (0x00018b7b) list_calc_item_pane_t1_ParamLimits

0x9e0f,	// (0x00018b7b) list_calc_item_pane_t1

0x058c,	// (0x0000f2f8) list_calc_item_pane_t2_ParamLimits

0x058c,	// (0x0000f2f8) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x0001de4b) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x0001de4b) list_calc_item_pane_t

0x9c87,	// (0x000189f3) cell_calc_pane_g1

0x9e21,	// (0x00018b8d) grid_highlight_pane_cp02

0x9e43,	// (0x00018baf) bg_calc_display_pane_g1

0x05be,	// (0x0000f32a) bg_calc_display_pane_g2

0x05c8,	// (0x0000f334) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0001de55) bg_calc_display_pane_g

0x05d1,	// (0x0000f33d) cell_qdial_pane_ParamLimits

0x05d1,	// (0x0000f33d) cell_qdial_pane

0x05e5,	// (0x0000f351) cell_qdial_pane_g1_ParamLimits

0x05e5,	// (0x0000f351) cell_qdial_pane_g1

0x05fb,	// (0x0000f367) cell_qdial_pane_g2_ParamLimits

0x05fb,	// (0x0000f367) cell_qdial_pane_g2

0x9e4c,	// (0x00018bb8) cell_qdial_pane_g3_ParamLimits

0x9e4c,	// (0x00018bb8) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0001de5c) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0001de5c) cell_qdial_pane_g

0x0622,	// (0x0000f38e) cell_qdial_pane_t1_ParamLimits

0x0622,	// (0x0000f38e) cell_qdial_pane_t1

0x063a,	// (0x0000f3a6) cell_qdial_pane_t2_ParamLimits

0x063a,	// (0x0000f3a6) cell_qdial_pane_t2

0x064d,	// (0x0000f3b9) cell_qdial_pane_t3_ParamLimits

0x064d,	// (0x0000f3b9) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0001de65) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0001de65) cell_qdial_pane_t

0x9a14,	// (0x00018780) grid_highlight_pane_cp04

0x9e58,	// (0x00018bc4) thumbnail_qdial_pane_ParamLimits

0x9e58,	// (0x00018bc4) thumbnail_qdial_pane

0x9eb4,	// (0x00018c20) list_help_pane

0x9ebd,	// (0x00018c29) scroll_pane_cp02

0x0660,	// (0x0000f3cc) help_list_pane_t1_ParamLimits

0x0660,	// (0x0000f3cc) help_list_pane_t1

0x9ec6,	// (0x00018c32) bg_notes_pane_g2

0x9ece,	// (0x00018c3a) bg_notes_pane_g3

0x9ed6,	// (0x00018c42) notes_bg_pane_g1

0x9ede,	// (0x00018c4a) notes_bg_pane_g4

0x9ee6,	// (0x00018c52) notes_bg_pane_g5

0x9eee,	// (0x00018c5a) notes_bg_pane_g6

0x9ef6,	// (0x00018c62) notes_bg_pane_g7

0x9efe,	// (0x00018c6a) notes_bg_pane_g8

0x9f06,	// (0x00018c72) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0001de83) notes_bg_pane_g

0x0684,	// (0x0000f3f0) list_notes_text_pane_ParamLimits

0x0684,	// (0x0000f3f0) list_notes_text_pane

0x9f0e,	// (0x00018c7a) list_notes_text_pane_g1

0x9f17,	// (0x00018c83) list_notes_text_pane_t1

0x069b,	// (0x0000f407) listscroll_cale_week_pane

0x06c5,	// (0x0000f431) bg_cale_heading_pane

0x06e9,	// (0x0000f455) bg_cale_pane_cp01

0x0706,	// (0x0000f472) cale_week_corner_pane

0x0725,	// (0x0000f491) cale_week_day_heading_pane

0x074e,	// (0x0000f4ba) cale_week_scroll_pane_g1

0x076d,	// (0x0000f4d9) cale_week_scroll_pane_g2

0x0785,	// (0x0000f4f1) cale_week_scroll_pane_g3

0x079d,	// (0x0000f509) cale_week_scroll_pane_g4

0x07b5,	// (0x0000f521) cale_week_scroll_pane_g5

0x07d5,	// (0x0000f541) cale_week_scroll_pane_g6

0x07f5,	// (0x0000f561) cale_week_scroll_pane_g7

0x0819,	// (0x0000f585) cale_week_scroll_pane_g8

0x083d,	// (0x0000f5a9) cale_week_scroll_pane_g9

0x0855,	// (0x0000f5c1) cale_week_scroll_pane_g10

0x086d,	// (0x0000f5d9) cale_week_scroll_pane_g11

0x0885,	// (0x0000f5f1) cale_week_scroll_pane_g12

0x08a9,	// (0x0000f615) cale_week_scroll_pane_g13

0x08a9,	// (0x0000f615) cale_week_scroll_pane_g14

0x08a9,	// (0x0000f615) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x0001de92) cale_week_scroll_pane_g

0x08f1,	// (0x0000f65d) cale_week_time_pane

0x0915,	// (0x0000f681) grid_cale_week_pane

0x9f51,	// (0x00018cbd) scroll_pane_cp08

0x0947,	// (0x0000f6b3) cell_cale_week_pane_ParamLimits

0x0947,	// (0x0000f6b3) cell_cale_week_pane

0x09e3,	// (0x0000f74f) cale_week_day_heading_pane_t1

0x0a0d,	// (0x0000f779) cale_week_day_heading_pane_t2

0x0a3c,	// (0x0000f7a8) cale_week_day_heading_pane_t3

0x0a6b,	// (0x0000f7d7) cale_week_day_heading_pane_t4

0x0a9a,	// (0x0000f806) cale_week_day_heading_pane_t5

0x0acd,	// (0x0000f839) cale_week_day_heading_pane_t6

0x0b04,	// (0x0000f870) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0001deb3) cale_week_day_heading_pane_t

0x9f6e,	// (0x00018cda) bg_cale_side_pane

0x0b2e,	// (0x0000f89a) cale_week_time_pane_t1

0x0b48,	// (0x0000f8b4) cale_week_time_pane_t2

0x0b62,	// (0x0000f8ce) cale_week_time_pane_t3

0x0b7c,	// (0x0000f8e8) cale_week_time_pane_t4

0x0b96,	// (0x0000f902) cale_week_time_pane_t5

0x0bb0,	// (0x0000f91c) cale_week_time_pane_t6

0x0bd0,	// (0x0000f93c) cale_week_time_pane_t7

0x0bf6,	// (0x0000f962) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x0001dec2) cale_week_time_pane_t

0x0c1c,	// (0x0000f988) cell_cale_week_pane_g2

0x0c40,	// (0x0000f9ac) cell_cale_week_pane_g3_ParamLimits

0x0c40,	// (0x0000f9ac) cell_cale_week_pane_g3

0x9f7c,	// (0x00018ce8) grid_highlight_pane_cp07

0x9f84,	// (0x00018cf0) listscroll_gms_pane

0x9f8e,	// (0x00018cfa) grid_gms_pane

0x9f97,	// (0x00018d03) listscroll_gms_pane_g1

0x9f9f,	// (0x00018d0b) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0001ded3) listscroll_gms_pane_g

0x0c58,	// (0x0000f9c4) scroll_pane_cp010

0x0c63,	// (0x0000f9cf) cell_gms_pane_ParamLimits

0x0c63,	// (0x0000f9cf) cell_gms_pane

0x0c7a,	// (0x0000f9e6) cell_gms_pane_g1

0x9fa7,	// (0x00018d13) cell_gms_pane_g2

0x9faf,	// (0x00018d1b) cell_gms_pane_g3

0x9fb8,	// (0x00018d24) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0001ded8) cell_gms_pane_g

0x9fc1,	// (0x00018d2d) grid_highlight_pane_cp09

0x2e65,	// (0x00011bd1) phob_pre_status_pane_g1

0x2e6d,	// (0x00011bd9) phob_pre_status_pane_g2

0x2e75,	// (0x00011be1) phob_pre_status_pane_g3

0x2e7d,	// (0x00011be9) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x0001e287) phob_pre_status_pane_g

0x2e8d,	// (0x00011bf9) phob_pre_status_pane_t1

0x2e9d,	// (0x00011c09) phob_pre_status_pane_t2

0x2ead,	// (0x00011c19) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x0001e292) phob_pre_status_pane_t

0x9fc9,	// (0x00018d35) bg_list_pane_cp05

0x0c8a,	// (0x0000f9f6) grid_vorec_pane

0x0c94,	// (0x0000fa00) vorec_t1

0x0ca2,	// (0x0000fa0e) vorec_t2

0x0cb0,	// (0x0000fa1c) vorec_t3

0x0cbe,	// (0x0000fa2a) vorec_t4

0xeb03,	// (0x0001d86f) vorec_t5

0x8702,	// (0x0001746e) vorec_t6

0x0004,

0xf175,	// (0x0001dee1) vorec_t

0x8710,	// (0x0001747c) wait_bar_pane_cp01

0x0cda,	// (0x0000fa46) cell_vorec_pane_ParamLimits

0x0cda,	// (0x0000fa46) cell_vorec_pane

0x9fd1,	// (0x00018d3d) cell_vorec_pane_g1

0x9a14,	// (0x00018780) grid_highlight_pane_cp05

0x95be,	// (0x0001832a) cams_zoom_pane

0x95be,	// (0x0001832a) image_vga_pane

0x9cea,	// (0x00018a56) main_camera_pane_g1

0x9cea,	// (0x00018a56) main_camera_pane_g2

0x9cea,	// (0x00018a56) main_camera_pane_g3

0x9cea,	// (0x00018a56) main_camera_pane_g4

0x9cea,	// (0x00018a56) main_camera_pane_g5

0x9cea,	// (0x00018a56) main_camera_pane_g6

0x9cea,	// (0x00018a56) main_camera_pane_g7

0x0007,

0xf180,	// (0x0001deec) main_camera_pane_g

0x9d3a,	// (0x00018aa6) main_camera_pane_t1

0x9d3a,	// (0x00018aa6) main_camera_pane_t2

0x0001,

0xf191,	// (0x0001defd) main_camera_pane_t

0x0d03,	// (0x0000fa6f) cams_zoom_pane_cp_ParamLimits

0x0d03,	// (0x0000fa6f) cams_zoom_pane_cp

0x0d37,	// (0x0000faa3) image_cif_pane_ParamLimits

0x0d37,	// (0x0000faa3) image_cif_pane

0x9549,	// (0x000182b5) image_subqcif_pane

0x0d49,	// (0x0000fab5) main_video_pane_g1_ParamLimits

0x0d49,	// (0x0000fab5) main_video_pane_g1

0x0d77,	// (0x0000fae3) main_video_pane_g2_ParamLimits

0x0d77,	// (0x0000fae3) main_video_pane_g2

0x0db1,	// (0x0000fb1d) main_video_pane_g3_ParamLimits

0x0db1,	// (0x0000fb1d) main_video_pane_g3

0x0db1,	// (0x0000fb1d) main_video_pane_g4_ParamLimits

0x0db1,	// (0x0000fb1d) main_video_pane_g4

0x0de5,	// (0x0000fb51) main_video_pane_g5_ParamLimits

0x0de5,	// (0x0000fb51) main_video_pane_g5

0x9fdb,	// (0x00018d47) main_video_pane_g6_ParamLimits

0x9fdb,	// (0x00018d47) main_video_pane_g6

0x0006,

0xf196,	// (0x0001df02) main_video_pane_g_ParamLimits

0xf196,	// (0x0001df02) main_video_pane_g

0x0e01,	// (0x0000fb6d) main_video_pane_t1_ParamLimits

0x0e01,	// (0x0000fb6d) main_video_pane_t1

0x9d30,	// (0x00018a9c) cams_zoom_pane_g1

0x9d30,	// (0x00018a9c) cams_zoom_pane_g2

0x9d30,	// (0x00018a9c) cams_zoom_pane_g3

0x9d30,	// (0x00018a9c) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x0001df11) cams_zoom_pane_g

0x95be,	// (0x0001832a) grid_cams_pane

0x95be,	// (0x0001832a) linegrid_cams_pane

0x0e45,	// (0x0000fbb1) cell_cams_pane_ParamLimits

0x0e45,	// (0x0000fbb1) cell_cams_pane

0x9549,	// (0x000182b5) cams_burst_image_pane

0x9d30,	// (0x00018a9c) cell_cams_pane_g1

0x9549,	// (0x000182b5) grid_highlight_pane_cp03

0x9c87,	// (0x000189f3) mp_bg_pane_g1

0x9549,	// (0x000182b5) bg_list_pane_cp03

0x9549,	// (0x000182b5) bg_mp_pane

0x9549,	// (0x000182b5) grid_mp_pane

0x9d30,	// (0x00018a9c) media_player_g1

0xa567,	// (0x000192d3) media_player_t1

0xa567,	// (0x000192d3) media_player_t2

0xa567,	// (0x000192d3) media_player_t3

0xa567,	// (0x000192d3) media_player_t4

0xa567,	// (0x000192d3) media_player_t5

0xa567,	// (0x000192d3) media_player_t6

0xa567,	// (0x000192d3) media_player_t7

0x0006,

0xf505,	// (0x0001e271) media_player_t

0x9549,	// (0x000182b5) wait_bar_pane_cp02

0xf4ea,	// (0x0001e256) main_usb_pane_t

0xa841,	// (0x000195ad) cell_mp_pane

0x9c87,	// (0x000189f3) cell_mp_pane_g1

0x9a14,	// (0x00018780) grid_highlight_pane_cp06

0x9ff5,	// (0x00018d61) grid_skin_colour_pane

0x9ffd,	// (0x00018d69) list_highlight_pane_cp03

0x0e5a,	// (0x0000fbc6) skin_g1

0xa005,	// (0x00018d71) skin_t1

0xa014,	// (0x00018d80) skin_t2

0x0001,

0xf1d3,	// (0x0001df3f) skin_t

0x0e62,	// (0x0000fbce) cell_skin_colour_pane_ParamLimits

0x0e62,	// (0x0000fbce) cell_skin_colour_pane

0xa022,	// (0x00018d8e) cell_skin_colour_pane_g1

0x0ed5,	// (0x0000fc41) call_video_g1_ParamLimits

0x0ed5,	// (0x0000fc41) call_video_g1

0x0ef1,	// (0x0000fc5d) call_video_g2_ParamLimits

0x0ef1,	// (0x0000fc5d) call_video_g2

0x0001,

0xf1d8,	// (0x0001df44) call_video_g_ParamLimits

0xf1d8,	// (0x0001df44) call_video_g

0x0f36,	// (0x0000fca2) call_video_uplink_pane_cp1_ParamLimits

0x0f36,	// (0x0000fca2) call_video_uplink_pane_cp1

0xa034,	// (0x00018da0) call_video_uplink_pane_cp2

0x0fd7,	// (0x0000fd43) video_down_crop_pane_ParamLimits

0x0fd7,	// (0x0000fd43) video_down_crop_pane

0x10c0,	// (0x0000fe2c) video_down_pane_ParamLimits

0x10c0,	// (0x0000fe2c) video_down_pane

0xa03c,	// (0x00018da8) video_down_subqcif_pane_ParamLimits

0xa03c,	// (0x00018da8) video_down_subqcif_pane

0xa056,	// (0x00018dc2) video_down_subqcif_pane_cp_ParamLimits

0xa056,	// (0x00018dc2) video_down_subqcif_pane_cp

0xa07e,	// (0x00018dea) im_reading_pane_ParamLimits

0xa07e,	// (0x00018dea) im_reading_pane

0x11cb,	// (0x0000ff37) im_writing_pane_ParamLimits

0x11cb,	// (0x0000ff37) im_writing_pane

0x11e9,	// (0x0000ff55) im_reading_pane_t1

0xa098,	// (0x00018e04) list_im_pane

0xa0a9,	// (0x00018e15) scroll_pane_cp07

0x1228,	// (0x0000ff94) im_writing_pane_t1_ParamLimits

0x1228,	// (0x0000ff94) im_writing_pane_t1

0xa0c2,	// (0x00018e2e) im_writing_pane_t2_ParamLimits

0xa0c2,	// (0x00018e2e) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0001df4e) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0001df4e) im_writing_pane_t

0x9a14,	// (0x00018780) input_focus_pane_cp04

0x9a14,	// (0x00018780) input_focus_pane_cp05

0x123d,	// (0x0000ffa9) list_im_single_pane_ParamLimits

0x123d,	// (0x0000ffa9) list_im_single_pane

0xa0df,	// (0x00018e4b) list_single_im_pane_t1

0x9fc9,	// (0x00018d35) blid_accuracy_pane

0x9fc9,	// (0x00018d35) blid_compass_pane

0xbc74,	// (0x0001a9e0) main_location_t1

0xbc74,	// (0x0001a9e0) main_location_t2

0xbc74,	// (0x0001a9e0) main_location_t3

0x0002,

0xf514,	// (0x0001e280) main_location_t

0x9a14,	// (0x00018780) aid_levels_location

0x9c87,	// (0x000189f3) blid_accuracy_pane_g1

0x9c87,	// (0x000189f3) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x0001df9d) blid_accuracy_pane_g

0xa119,	// (0x00018e85) wml_content_pane

0xa157,	// (0x00018ec3) wml_button_pane_ParamLimits

0xa157,	// (0x00018ec3) wml_button_pane

0x1253,	// (0x0000ffbf) wml_list_single_large_pane_ParamLimits

0x1253,	// (0x0000ffbf) wml_list_single_large_pane

0x126c,	// (0x0000ffd8) wml_list_single_medium_pane_ParamLimits

0x126c,	// (0x0000ffd8) wml_list_single_medium_pane

0x1286,	// (0x0000fff2) wml_list_single_small_pane_ParamLimits

0x1286,	// (0x0000fff2) wml_list_single_small_pane

0xa16b,	// (0x00018ed7) wml_selection_box_pane_ParamLimits

0xa16b,	// (0x00018ed7) wml_selection_box_pane

0xa17e,	// (0x00018eea) wml_list_single_pane_t1

0xa18d,	// (0x00018ef9) wml_list_single_medium_pane_t1

0xa19c,	// (0x00018f08) wml_list_single_large_pane_t1

0xa1ab,	// (0x00018f17) input_focus_pane_cp02_ParamLimits

0xa1ab,	// (0x00018f17) input_focus_pane_cp02

0xa1be,	// (0x00018f2a) wml_selection_box_pane_g1

0xa1c7,	// (0x00018f33) wml_selection_box_pane_t1_ParamLimits

0xa1c7,	// (0x00018f33) wml_selection_box_pane_t1

0x9c6f,	// (0x000189db) bg_wml_button_pane_ParamLimits

0x9c6f,	// (0x000189db) bg_wml_button_pane

0xa1df,	// (0x00018f4b) wml_button_pane_g1

0xa1e7,	// (0x00018f53) wml_button_pane_t1

0xa1df,	// (0x00018f4b) wml_button_bg_pane_g1

0xa1f7,	// (0x00018f63) wml_button_bg_pane_g2

0xa1ff,	// (0x00018f6b) wml_button_bg_pane_g3

0xa207,	// (0x00018f73) wml_button_bg_pane_g4

0xa20f,	// (0x00018f7b) wml_button_bg_pane_g5

0xa217,	// (0x00018f83) wml_button_bg_pane_g6

0xa21f,	// (0x00018f8b) wml_button_bg_pane_g7

0xa227,	// (0x00018f93) wml_button_bg_pane_g8

0xa22f,	// (0x00018f9b) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0001df53) wml_button_bg_pane_g

0x12a2,	// (0x0001000e) bg_list_pane_cp02

0xa237,	// (0x00018fa3) mce_header_pane_ParamLimits

0xa237,	// (0x00018fa3) mce_header_pane

0xa24d,	// (0x00018fb9) mce_icon_pane

0xa24d,	// (0x00018fb9) mce_image_pane

0xa256,	// (0x00018fc2) mce_text_pane_ParamLimits

0xa256,	// (0x00018fc2) mce_text_pane

0x12ac,	// (0x00010018) scroll_pane_cp03

0xa14f,	// (0x00018ebb) scroll_pane_cp04

0xa269,	// (0x00018fd5) scroll_pane_cp05_ParamLimits

0xa269,	// (0x00018fd5) scroll_pane_cp05

0x12b6,	// (0x00010022) mce_header_field_pane_ParamLimits

0x12b6,	// (0x00010022) mce_header_field_pane

0x12cf,	// (0x0001003b) mce_header_field_pane_2_ParamLimits

0x12cf,	// (0x0001003b) mce_header_field_pane_2

0x12e5,	// (0x00010051) mce_header_field_pane_3

0x12ed,	// (0x00010059) list_single_mce_message_pane_ParamLimits

0x12ed,	// (0x00010059) list_single_mce_message_pane

0x1309,	// (0x00010075) list_single_mce_smart_pane_ParamLimits

0x1309,	// (0x00010075) list_single_mce_smart_pane

0xa275,	// (0x00018fe1) input_focus_pane_cp03

0xa27e,	// (0x00018fea) list_header_data_pane

0x1330,	// (0x0001009c) mce_header_field_pane_t1

0x1340,	// (0x000100ac) list_single_mce_header_pane_ParamLimits

0x1340,	// (0x000100ac) list_single_mce_header_pane

0xa286,	// (0x00018ff2) list_single_mce_header_pane_t1

0xa295,	// (0x00019001) list_single_mce_message_pane_g1

0xa29d,	// (0x00019009) list_single_mce_message_pane_t1

0x137a,	// (0x000100e6) bg_cale_heading_pane_cp01_ParamLimits

0x137a,	// (0x000100e6) bg_cale_heading_pane_cp01

0xa2ab,	// (0x00019017) bg_cale_pane_cp02_ParamLimits

0xa2ab,	// (0x00019017) bg_cale_pane_cp02

0x13cc,	// (0x00010138) cale_month_corner_pane

0x13eb,	// (0x00010157) cale_month_day_heading_pane_ParamLimits

0x13eb,	// (0x00010157) cale_month_day_heading_pane

0x1455,	// (0x000101c1) cale_month_pane_g1_ParamLimits

0x1455,	// (0x000101c1) cale_month_pane_g1

0x149c,	// (0x00010208) cale_month_pane_g2_ParamLimits

0x149c,	// (0x00010208) cale_month_pane_g2

0x14d8,	// (0x00010244) cale_month_pane_g3_ParamLimits

0x14d8,	// (0x00010244) cale_month_pane_g3

0x152c,	// (0x00010298) cale_month_pane_g4_ParamLimits

0x152c,	// (0x00010298) cale_month_pane_g4

0x1580,	// (0x000102ec) cale_month_pane_g5_ParamLimits

0x1580,	// (0x000102ec) cale_month_pane_g5

0x15dc,	// (0x00010348) cale_month_pane_g6_ParamLimits

0x15dc,	// (0x00010348) cale_month_pane_g6

0x1644,	// (0x000103b0) cale_month_pane_g7_ParamLimits

0x1644,	// (0x000103b0) cale_month_pane_g7

0x16b0,	// (0x0001041c) cale_month_pane_g8_ParamLimits

0x16b0,	// (0x0001041c) cale_month_pane_g8

0x171c,	// (0x00010488) cale_month_pane_g9_ParamLimits

0x171c,	// (0x00010488) cale_month_pane_g9

0x1780,	// (0x000104ec) cale_month_pane_g10_ParamLimits

0x1780,	// (0x000104ec) cale_month_pane_g10

0x17d2,	// (0x0001053e) cale_month_pane_g11_ParamLimits

0x17d2,	// (0x0001053e) cale_month_pane_g11

0x1824,	// (0x00010590) cale_month_pane_g12_ParamLimits

0x1824,	// (0x00010590) cale_month_pane_g12

0x187c,	// (0x000105e8) cale_month_pane_g13_ParamLimits

0x187c,	// (0x000105e8) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0001df66) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0001df66) cale_month_pane_g

0x18d4,	// (0x00010640) cale_month_week_pane

0x18f8,	// (0x00010664) grid_cale_month_pane_ParamLimits

0x18f8,	// (0x00010664) grid_cale_month_pane

0x1959,	// (0x000106c5) cale_month_day_heading_pane_t1

0x19df,	// (0x0001074b) cale_month_day_heading_pane_t2

0x1a58,	// (0x000107c4) cale_month_day_heading_pane_t3

0x1ad1,	// (0x0001083d) cale_month_day_heading_pane_t4

0x1b52,	// (0x000108be) cale_month_day_heading_pane_t5

0x1bdb,	// (0x00010947) cale_month_day_heading_pane_t6

0x1c6c,	// (0x000109d8) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0001df81) cale_month_day_heading_pane_t

0x9f6e,	// (0x00018cda) bg_cale_side_pane_cp01

0x1cfd,	// (0x00010a69) cale_month_week_pane_t1

0x1d16,	// (0x00010a82) cale_month_week_pane_t2

0x1d2f,	// (0x00010a9b) cale_month_week_pane_t3

0x1d48,	// (0x00010ab4) cale_month_week_pane_t4

0x1d61,	// (0x00010acd) cale_month_week_pane_t5

0x1d7a,	// (0x00010ae6) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0001df90) cale_month_week_pane_t

0x1d9f,	// (0x00010b0b) cell_cale_month_pane_ParamLimits

0x1d9f,	// (0x00010b0b) cell_cale_month_pane

0xa2ea,	// (0x00019056) cell_cale_month_pane_g1

0x1edd,	// (0x00010c49) cell_cale_month_pane_t1_ParamLimits

0x1edd,	// (0x00010c49) cell_cale_month_pane_t1

0x9f7c,	// (0x00018ce8) grid_highlight_pane_cp08

0x9c87,	// (0x000189f3) main_smil_g1

0x1f09,	// (0x00010c75) smil_status_pane

0xa2f6,	// (0x00019062) smil_text_pane

0xbb8a,	// (0x0001a8f6) bg_popup_call3_rect_pane_g8

0xbb92,	// (0x0001a8fe) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x0001e219) bg_popup_call3_rect_pane_g

0xbd95,	// (0x0001ab01) smil_status_volume_pane_g1

0xa300,	// (0x0001906c) smil_status_pane_t1

0xbdc8,	// (0x0001ab34) volume_smil_pane

0xa317,	// (0x00019083) list_smil_text_pane

0x1f1e,	// (0x00010c8a) scroll_pane_cp011

0x1f29,	// (0x00010c95) smil_text_list_pane_t1_ParamLimits

0x1f29,	// (0x00010c95) smil_text_list_pane_t1

0xa321,	// (0x0001908d) aid_volume_smil_ParamLimits

0xa321,	// (0x0001908d) aid_volume_smil

0x9c87,	// (0x000189f3) smil_volume_pane_g1

0x9c87,	// (0x000189f3) smil_volume_pane_g2

0x0001,

0xf231,	// (0x0001df9d) smil_volume_pane_g

0x069b,	// (0x0000f407) listscroll_cale_day_pane

0xa343,	// (0x000190af) bg_cale_pane

0xa35b,	// (0x000190c7) list_cale_pane

0xa37e,	// (0x000190ea) scroll_pane_cp09

0xa38f,	// (0x000190fb) cale_bg_pane_g1

0xa397,	// (0x00019103) cale_bg_pane_g2

0xa39f,	// (0x0001910b) cale_bg_pane_g3

0xa3a7,	// (0x00019113) cale_bg_pane_g4

0xa3af,	// (0x0001911b) cale_bg_pane_g5

0xa3b7,	// (0x00019123) cale_bg_pane_g6

0xa3bf,	// (0x0001912b) cale_bg_pane_g7

0xa3c7,	// (0x00019133) cale_bg_pane_g8

0xa3cf,	// (0x0001913b) cale_bg_pane_g9

0x0008,

0xf236,	// (0x0001dfa2) cale_bg_pane_g

0xa3d7,	// (0x00019143) list_cale_time_pane_ParamLimits

0xa3d7,	// (0x00019143) list_cale_time_pane

0xa3ee,	// (0x0001915a) list_cale_time_pane_g1_ParamLimits

0xa3ee,	// (0x0001915a) list_cale_time_pane_g1

0xa3fa,	// (0x00019166) list_cale_time_pane_g2_ParamLimits

0xa3fa,	// (0x00019166) list_cale_time_pane_g2

0x1f7d,	// (0x00010ce9) list_cale_time_pane_g3_ParamLimits

0x1f7d,	// (0x00010ce9) list_cale_time_pane_g3

0x1f8b,	// (0x00010cf7) list_cale_time_pane_g4_ParamLimits

0x1f8b,	// (0x00010cf7) list_cale_time_pane_g4

0x1f99,	// (0x00010d05) list_cale_time_pane_g5_ParamLimits

0x1f99,	// (0x00010d05) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x0001dfb5) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x0001dfb5) list_cale_time_pane_g

0xa414,	// (0x00019180) list_cale_time_pane_t1_ParamLimits

0xa414,	// (0x00019180) list_cale_time_pane_t1

0xa43c,	// (0x000191a8) list_cale_time_pane_t2_ParamLimits

0xa43c,	// (0x000191a8) list_cale_time_pane_t2

0x224b,	// (0x00010fb7) aid_blid_cardinal_pane

0x2289,	// (0x00010ff5) compass_pane_t4

0xa464,	// (0x000191d0) list_cale_time_pane_t4_ParamLimits

0xa464,	// (0x000191d0) list_cale_time_pane_t4

0x2297,	// (0x00011003) compass_pane_t5

0x22a7,	// (0x00011013) compass_pane_t6

0x22b5,	// (0x00011021) compass_pane_t7

0xa8f1,	// (0x0001965d) navi_pane_cc_t1

0xaa50,	// (0x000197bc) aid_phob_thumbnail_center_pane

0x2873,	// (0x000115df) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x0001dfc2) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x0001dfc2) list_cale_time_pane_t

0x966b,	// (0x000183d7) bg_popup_window_pane_cp02_ParamLimits

0x966b,	// (0x000183d7) bg_popup_window_pane_cp02

0xa48c,	// (0x000191f8) heading_pane_cp01_ParamLimits

0xa48c,	// (0x000191f8) heading_pane_cp01

0xa498,	// (0x00019204) loc_req_pane_ParamLimits

0xa498,	// (0x00019204) loc_req_pane

0xa4a8,	// (0x00019214) loc_type_pane_ParamLimits

0xa4a8,	// (0x00019214) loc_type_pane

0xa4ba,	// (0x00019226) loc_type_pane_t1_ParamLimits

0xa4ba,	// (0x00019226) loc_type_pane_t1

0xa4cc,	// (0x00019238) loc_type_pane_t2_ParamLimits

0xa4cc,	// (0x00019238) loc_type_pane_t2

0xa4de,	// (0x0001924a) loc_type_pane_t3_ParamLimits

0xa4de,	// (0x0001924a) loc_type_pane_t3

0x0002,

0xf25d,	// (0x0001dfc9) loc_type_pane_t_ParamLimits

0xf25d,	// (0x0001dfc9) loc_type_pane_t

0xa4f0,	// (0x0001925c) list_loc_req_pane

0xa4fa,	// (0x00019266) scroll_pane_cp012

0x1fa7,	// (0x00010d13) list_single_loc_request_popup_menu_pane_ParamLimits

0x1fa7,	// (0x00010d13) list_single_loc_request_popup_menu_pane

0xa505,	// (0x00019271) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa505,	// (0x00019271) list_single_loc_request_popup_menu_pane_g1

0xa511,	// (0x0001927d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa511,	// (0x0001927d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x0001dfd0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x0001dfd0) list_single_loc_request_popup_menu_pane_g

0xa51d,	// (0x00019289) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa51d,	// (0x00019289) list_single_loc_request_popup_menu_pane_t1

0x9c6f,	// (0x000189db) bg_popup_window_pane_cp03_ParamLimits

0x9c6f,	// (0x000189db) bg_popup_window_pane_cp03

0xa533,	// (0x0001929f) heading_loc_req_pane_ParamLimits

0xa533,	// (0x0001929f) heading_loc_req_pane

0x1fb4,	// (0x00010d20) popup_dyc_status_message_window_g1_ParamLimits

0x1fb4,	// (0x00010d20) popup_dyc_status_message_window_g1

0x1fc8,	// (0x00010d34) popup_dyc_status_message_window_t1_ParamLimits

0x1fc8,	// (0x00010d34) popup_dyc_status_message_window_t1

0x1fdd,	// (0x00010d49) popup_dyc_status_message_window_t2_ParamLimits

0x1fdd,	// (0x00010d49) popup_dyc_status_message_window_t2

0x1ff2,	// (0x00010d5e) popup_dyc_status_message_window_t3_ParamLimits

0x1ff2,	// (0x00010d5e) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x0001dfd5) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x0001dfd5) popup_dyc_status_message_window_t

0x9a14,	// (0x00018780) bg_heading_pane_cp01

0xa53f,	// (0x000192ab) heading_loc_req_pane_g1

0xa547,	// (0x000192b3) heading_loc_req_pane_g2

0xa54f,	// (0x000192bb) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x0001dfdc) heading_loc_req_pane_g

0xa557,	// (0x000192c3) heading_loc_req_pane_t1

0xa577,	// (0x000192e3) bg_popup_sub_pane_cp01_ParamLimits

0xa577,	// (0x000192e3) bg_popup_sub_pane_cp01

0xa585,	// (0x000192f1) popup_cale_events_window_g1_ParamLimits

0xa585,	// (0x000192f1) popup_cale_events_window_g1

0xa5a5,	// (0x00019311) popup_cale_events_window_g2_ParamLimits

0xa5a5,	// (0x00019311) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x0001dffe) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x0001dffe) popup_cale_events_window_g

0xa5c5,	// (0x00019331) popup_cale_events_window_t1_ParamLimits

0xa5c5,	// (0x00019331) popup_cale_events_window_t1

0xa5d7,	// (0x00019343) popup_cale_events_window_t2_ParamLimits

0xa5d7,	// (0x00019343) popup_cale_events_window_t2

0xa615,	// (0x00019381) popup_cale_events_window_t3_ParamLimits

0xa615,	// (0x00019381) popup_cale_events_window_t3

0xa64f,	// (0x000193bb) popup_cale_events_window_t4_ParamLimits

0xa64f,	// (0x000193bb) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x0001e003) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x0001e003) popup_cale_events_window_t

0x201a,	// (0x00010d86) call_type_pane

0x202a,	// (0x00010d96) popup_call_status_window_g1

0x203e,	// (0x00010daa) popup_call_status_window_g2

0x2052,	// (0x00010dbe) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x0001e00c) popup_call_status_window_g

0xa685,	// (0x000193f1) call_type_pane_g1

0xa68e,	// (0x000193fa) call_type_pane_g2

0x0001,

0xf2a7,	// (0x0001e013) call_type_pane_g

0x9a14,	// (0x00018780) bg_popup_sub_pane_cp02

0xa697,	// (0x00019403) listscroll_popup_wml_pane

0xa69f,	// (0x0001940b) list_wml_pane

0xa6a9,	// (0x00019415) scroll_pane_cp013

0xa6b4,	// (0x00019420) list_single_graphic_popup_wml_pane_ParamLimits

0xa6b4,	// (0x00019420) list_single_graphic_popup_wml_pane

0x9c87,	// (0x000189f3) list_single_graphic_popup_wml_pane_g1

0xa6c8,	// (0x00019434) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x0001e018) list_single_graphic_popup_wml_pane_g

0xa6d0,	// (0x0001943c) list_single_graphic_popup_wml_pane_t1

0xa6e6,	// (0x00019452) aid_call_pane

0x9c67,	// (0x000189d3) popup_clock_analogue_window_g1

0x9c67,	// (0x000189d3) popup_clock_analogue_window_g2

0xa6ee,	// (0x0001945a) popup_clock_analogue_window_g3

0xa6ee,	// (0x0001945a) popup_clock_analogue_window_g4

0x9c87,	// (0x000189f3) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x0001e01d) popup_clock_analogue_window_g

0xa6f6,	// (0x00019462) popup_clock_analogue_window_t1

0xa704,	// (0x00019470) clock_digital_number_pane_ParamLimits

0xa704,	// (0x00019470) clock_digital_number_pane

0xa710,	// (0x0001947c) clock_digital_number_pane_cp02_ParamLimits

0xa710,	// (0x0001947c) clock_digital_number_pane_cp02

0xa71c,	// (0x00019488) clock_digital_number_pane_cp03_ParamLimits

0xa71c,	// (0x00019488) clock_digital_number_pane_cp03

0xa728,	// (0x00019494) clock_digital_number_pane_cp04_ParamLimits

0xa728,	// (0x00019494) clock_digital_number_pane_cp04

0xa734,	// (0x000194a0) clock_digital_separator_pane_ParamLimits

0xa734,	// (0x000194a0) clock_digital_separator_pane

0xa740,	// (0x000194ac) popup_clock_digital_window_t1

0x9c87,	// (0x000189f3) clock_digital_number_pane_g1

0x9c87,	// (0x000189f3) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x0001df9d) clock_digital_number_pane_g

0x9c87,	// (0x000189f3) clock_digital_separator_pane_g1

0x9c87,	// (0x000189f3) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x0001df9d) clock_digital_separator_pane_g

0x9a14,	// (0x00018780) bg_popup_window_pane_cp04

0xa75d,	// (0x000194c9) heading_pane_cp03

0x9fc9,	// (0x00018d35) listscroll_popup_gms_pane

0x9a14,	// (0x00018780) grid_large_graphic_popup_pane

0xa766,	// (0x000194d2) listscroll_popup_gms_pane_g1

0xa76f,	// (0x000194db) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x0001e028) listscroll_popup_gms_pane_g

0xa778,	// (0x000194e4) scroll_pane_cp014

0x9cdc,	// (0x00018a48) cell_large_graphic_popup_pane_ParamLimits

0x9cdc,	// (0x00018a48) cell_large_graphic_popup_pane

0x9cea,	// (0x00018a56) cell_large_graphic_popup_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) cell_large_graphic_popup_pane_g1

0xa781,	// (0x000194ed) cell_large_graphic_popup_pane_g2_ParamLimits

0xa781,	// (0x000194ed) cell_large_graphic_popup_pane_g2

0xa78f,	// (0x000194fb) cell_large_graphic_popup_pane_g3_ParamLimits

0xa78f,	// (0x000194fb) cell_large_graphic_popup_pane_g3

0xa79d,	// (0x00019509) cell_large_graphic_popup_pane_g4_ParamLimits

0xa79d,	// (0x00019509) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x0001e02d) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x0001e02d) cell_large_graphic_popup_pane_g

0x9a14,	// (0x00018780) grid_highlight_pane_cp010

0x9c87,	// (0x000189f3) bg_popup_call_pane_g1

0xa7ae,	// (0x0001951a) list_single_graphic_popup_conf_pane_ParamLimits

0xa7ae,	// (0x0001951a) list_single_graphic_popup_conf_pane

0xa7c0,	// (0x0001952c) list_highlight_pane_cp01

0xa7c9,	// (0x00019535) list_single_graphic_popup_conf_pane_g1

0xa7d1,	// (0x0001953d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0001e036) list_single_graphic_popup_conf_pane_g

0xa7d9,	// (0x00019545) list_single_graphic_popup_conf_pane_t1

0xa7e7,	// (0x00019553) linegrid_cams_pane_g1

0x2062,	// (0x00010dce) linegrid_cams_pane_g2

0x9faf,	// (0x00018d1b) linegrid_cams_pane_g3

0xa7f0,	// (0x0001955c) linegrid_cams_pane_g4

0x206b,	// (0x00010dd7) linegrid_cams_pane_g5

0x2074,	// (0x00010de0) linegrid_cams_pane_g6

0x9fb8,	// (0x00018d24) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x0001e03b) linegrid_cams_pane_g

0xa7f9,	// (0x00019565) popup_clock_analogue_window

0xa7f9,	// (0x00019565) popup_clock_digital_window

0x9a14,	// (0x00018780) popup_phob_thumbnail_window

0x9c87,	// (0x000189f3) call_video_uplink_pane_g1

0xa802,	// (0x0001956e) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x0001e04a) call_video_uplink_pane_g

0xa80a,	// (0x00019576) video_uplink_pane

0xa812,	// (0x0001957e) mce_image_pane_g1

0x207f,	// (0x00010deb) mce_image_pane_g2

0x2089,	// (0x00010df5) mce_image_pane_g3

0x2093,	// (0x00010dff) mce_image_pane_g4

0x209b,	// (0x00010e07) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x0001e04f) mce_image_pane_g

0xa81c,	// (0x00019588) control_top_pane_stacon_cp01_ParamLimits

0xa81c,	// (0x00019588) control_top_pane_stacon_cp01

0xa830,	// (0x0001959c) uni_indicator_pane_stacon_cp01_ParamLimits

0xa830,	// (0x0001959c) uni_indicator_pane_stacon_cp01

0xa841,	// (0x000195ad) bg_popup_sub_pane_cp03

0x20a3,	// (0x00010e0f) chi_dic_find_pane

0x20ab,	// (0x00010e17) listscroll_chi_dic_pane

0x20b4,	// (0x00010e20) main_pane_chidic_g1

0x20c7,	// (0x00010e33) chi_dic_find_pane_t1

0xa84b,	// (0x000195b7) find_chidic_pane

0xa854,	// (0x000195c0) chi_dic_list_pane_ParamLimits

0xa854,	// (0x000195c0) chi_dic_list_pane

0xa865,	// (0x000195d1) scroll_pane_cp020

0x20d5,	// (0x00010e41) find_chidic_pane_t1

0x9a14,	// (0x00018780) input_focus_pane_cp06

0x20e4,	// (0x00010e50) list_chi_dic_pane_ParamLimits

0x20e4,	// (0x00010e50) list_chi_dic_pane

0x20f6,	// (0x00010e62) list_chi_dic_pane_t1_ParamLimits

0x20f6,	// (0x00010e62) list_chi_dic_pane_t1

0x9a14,	// (0x00018780) list_highlight_pane_cp020

0xa86d,	// (0x000195d9) bg_cale_heading_pane_g1

0x2109,	// (0x00010e75) bg_cale_heading_pane_g2

0x2111,	// (0x00010e7d) bg_cale_heading_pane_g3

0x2119,	// (0x00010e85) bg_cale_heading_pane_g4

0x2123,	// (0x00010e8f) bg_cale_heading_pane_g5

0x212d,	// (0x00010e99) bg_cale_heading_pane_g6

0x2135,	// (0x00010ea1) bg_cale_heading_pane_g7

0x213d,	// (0x00010ea9) bg_cale_heading_pane_g8

0x2147,	// (0x00010eb3) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x0001e05a) bg_cale_heading_pane_g

0xa86d,	// (0x000195d9) bg_cale_side_pane_g1

0x2151,	// (0x00010ebd) bg_cale_side_pane_g2

0x215b,	// (0x00010ec7) bg_cale_side_pane_g3

0x2165,	// (0x00010ed1) bg_cale_side_pane_g4

0x216f,	// (0x00010edb) bg_cale_side_pane_g5

0x2179,	// (0x00010ee5) bg_cale_side_pane_g6

0x2183,	// (0x00010eef) bg_cale_side_pane_g7

0x218d,	// (0x00010ef9) bg_cale_side_pane_g8

0x2195,	// (0x00010f01) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x0001e06d) bg_cale_side_pane_g

0x219d,	// (0x00010f09) popup_call_status_window_ParamLimits

0x219d,	// (0x00010f09) popup_call_status_window

0xa875,	// (0x000195e1) stacon_top_pane

0xa87d,	// (0x000195e9) status_pane_ParamLimits

0xa87d,	// (0x000195e9) status_pane

0xa892,	// (0x000195fe) status_small_pane

0xa89a,	// (0x00019606) control_pane

0x9a14,	// (0x00018780) stacon_bottom_pane

0xa8a2,	// (0x0001960e) list_single_mce_smart_pane_t1_ParamLimits

0xa8a2,	// (0x0001960e) list_single_mce_smart_pane_t1

0xa8b5,	// (0x00019621) list_single_mce_smart_pane_t2_ParamLimits

0xa8b5,	// (0x00019621) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x0001e080) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x0001e080) list_single_mce_smart_pane_t

0x21ea,	// (0x00010f56) compass_pane

0x21f5,	// (0x00010f61) main_location2_pane_t1

0x220b,	// (0x00010f77) main_location2_pane_t2

0x2221,	// (0x00010f8d) main_location2_pane_t3

0x0003,

0xf319,	// (0x0001e085) main_location2_pane_t

0xa8d4,	// (0x00019640) compass_pane_g1_ParamLimits

0xa8d4,	// (0x00019640) compass_pane_g1

0x226b,	// (0x00010fd7) compass_pane_t1

0x227a,	// (0x00010fe6) compass_pane_t2

0x0005,

0xf322,	// (0x0001e08e) compass_pane_t

0x22c5,	// (0x00011031) text_secondary_cp61

0xa8e8,	// (0x00019654) navi_pane_cams_g5

0xa90b,	// (0x00019677) navi_pane_im_t1

0xa919,	// (0x00019685) navi_pane_mp_g1_ParamLimits

0xa919,	// (0x00019685) navi_pane_mp_g1

0xa92d,	// (0x00019699) navi_pane_mp_g2_ParamLimits

0xa92d,	// (0x00019699) navi_pane_mp_g2

0xa939,	// (0x000196a5) navi_pane_mp_g3_ParamLimits

0xa939,	// (0x000196a5) navi_pane_mp_g3

0x0002,

0xf336,	// (0x0001e0a2) navi_pane_mp_g_ParamLimits

0xf336,	// (0x0001e0a2) navi_pane_mp_g

0xa945,	// (0x000196b1) navi_pane_mp_t1

0xa953,	// (0x000196bf) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x0001e0a9) navi_pane_mp_t

0xa98f,	// (0x000196fb) navi_pane_vt_g1

0xa945,	// (0x000196b1) navi_pane_vt_t1

0xa997,	// (0x00019703) navi_slider_pane

0x9fc9,	// (0x00018d35) zooming_pane

0xa99f,	// (0x0001970b) navi_slider_pane_g1

0xa9a8,	// (0x00019714) navi_slider_pane_g2

0x0006,

0xf344,	// (0x0001e0b0) navi_slider_pane_g

0xa9d5,	// (0x00019741) aid_levels_zoom

0xa9dd,	// (0x00019749) zooming_pane_g1

0xa9e5,	// (0x00019751) zooming_pane_g2

0xa9e5,	// (0x00019751) zooming_pane_g3

0x0002,

0xf353,	// (0x0001e0bf) zooming_pane_g

0xa9ed,	// (0x00019759) level_10_zoom

0xa9f6,	// (0x00019762) level_11_zoom

0xa9ff,	// (0x0001976b) level_1_zoom

0xaa08,	// (0x00019774) level_2_zoom

0xaa11,	// (0x0001977d) level_3_zoom

0xaa1a,	// (0x00019786) level_4_zoom

0xaa23,	// (0x0001978f) level_5_zoom

0xaa2c,	// (0x00019798) level_6_zoom

0xaa35,	// (0x000197a1) level_7_zoom

0xaa3e,	// (0x000197aa) level_8_zoom

0xaa47,	// (0x000197b3) level_9_zoom

0xaa58,	// (0x000197c4) popup_phob_thumbnail_window_g1

0xaa60,	// (0x000197cc) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x0001e0c6) popup_phob_thumbnail_window_g

0x2ebd,	// (0x00011c29) level_1_location

0x2ec5,	// (0x00011c31) level_2_location

0x2ecd,	// (0x00011c39) level_3_location

0x2ed7,	// (0x00011c43) level_4_location

0x9fc9,	// (0x00018d35) level_5_location

0x240e,	// (0x0001117a) mce_icon_pane_g1

0x2418,	// (0x00011184) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x0001e0cb) mce_icon_pane_g

0xaa68,	// (0x000197d4) main_mup_pane_g1_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g1

0xaa68,	// (0x000197d4) main_mup_pane_g2_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g2

0xaa68,	// (0x000197d4) main_mup_pane_g3_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g3

0xaa68,	// (0x000197d4) main_mup_pane_g4_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g4

0xaa68,	// (0x000197d4) main_mup_pane_g5_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g5

0xaa68,	// (0x000197d4) main_mup_pane_g6_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g6

0xaa68,	// (0x000197d4) main_mup_pane_g7_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g7

0xaa68,	// (0x000197d4) main_mup_pane_g8_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g8

0xaa68,	// (0x000197d4) main_mup_pane_g9_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g9

0xaa68,	// (0x000197d4) main_mup_pane_g10_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g10

0xaa68,	// (0x000197d4) main_mup_pane_g11_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g11

0x9cea,	// (0x00018a56) main_mup_pane_g12_ParamLimits

0x9cea,	// (0x00018a56) main_mup_pane_g12

0xaa68,	// (0x000197d4) main_mup_pane_g13_ParamLimits

0xaa68,	// (0x000197d4) main_mup_pane_g13

0x000c,

0xf364,	// (0x0001e0d0) main_mup_pane_g_ParamLimits

0xf364,	// (0x0001e0d0) main_mup_pane_g

0xaa76,	// (0x000197e2) main_mup_pane_t1_ParamLimits

0xaa76,	// (0x000197e2) main_mup_pane_t1

0xaa76,	// (0x000197e2) main_mup_pane_t2_ParamLimits

0xaa76,	// (0x000197e2) main_mup_pane_t2

0xaa76,	// (0x000197e2) main_mup_pane_t3_ParamLimits

0xaa76,	// (0x000197e2) main_mup_pane_t3

0x9d3a,	// (0x00018aa6) main_mup_pane_t4_ParamLimits

0x9d3a,	// (0x00018aa6) main_mup_pane_t4

0x9d3a,	// (0x00018aa6) main_mup_pane_t5_ParamLimits

0x9d3a,	// (0x00018aa6) main_mup_pane_t5

0x9d4e,	// (0x00018aba) main_mup_pane_t6_ParamLimits

0x9d4e,	// (0x00018aba) main_mup_pane_t6

0x0005,

0xf37f,	// (0x0001e0eb) main_mup_pane_t_ParamLimits

0xf37f,	// (0x0001e0eb) main_mup_pane_t

0x9cdc,	// (0x00018a48) mup_progress_pane_ParamLimits

0x9cdc,	// (0x00018a48) mup_progress_pane

0xaa8a,	// (0x000197f6) mup_visualizer_pane_ParamLimits

0xaa8a,	// (0x000197f6) mup_visualizer_pane

0xaa8a,	// (0x000197f6) mup_volume_pane_ParamLimits

0xaa8a,	// (0x000197f6) mup_volume_pane

0x9cf8,	// (0x00018a64) mup_visualizer_pane_g1_ParamLimits

0x9cf8,	// (0x00018a64) mup_visualizer_pane_g1

0xaa98,	// (0x00019804) mup_visualizer_pane_g2_ParamLimits

0xaa98,	// (0x00019804) mup_visualizer_pane_g2

0x9cea,	// (0x00018a56) mup_visualizer_pane_g3_ParamLimits

0x9cea,	// (0x00018a56) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0001e0f8) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0001e0f8) mup_visualizer_pane_g

0x9d30,	// (0x00018a9c) mup_volume_pane_g1

0x9d30,	// (0x00018a9c) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x0001de1b) mup_volume_pane_g

0x9d30,	// (0x00018a9c) mup_progress_pane_g1

0x9d30,	// (0x00018a9c) mup_progress_pane_g2

0x9d30,	// (0x00018a9c) mup_progress_pane_g3

0x0002,

0xf393,	// (0x0001e0ff) mup_progress_pane_g

0x9a14,	// (0x00018780) bg_popup_window_pane_cp05

0xaaa6,	// (0x00019812) heading_pane_cp02_ParamLimits

0xaaa6,	// (0x00019812) heading_pane_cp02

0xaac2,	// (0x0001982e) list_popup_blid_pane

0xaaca,	// (0x00019836) list_blid_sat_info_pane_ParamLimits

0xaaca,	// (0x00019836) list_blid_sat_info_pane

0xaadd,	// (0x00019849) list_blid_sat_info_pane_g1

0xaae5,	// (0x00019851) list_blid_sat_info_pane_t1

0x252c,	// (0x00011298) mup_equalizer_pane_ParamLimits

0x252c,	// (0x00011298) mup_equalizer_pane

0x254d,	// (0x000112b9) mup_equalizer_pane_cp1_ParamLimits

0x254d,	// (0x000112b9) mup_equalizer_pane_cp1

0x256e,	// (0x000112da) mup_equalizer_pane_cp2_ParamLimits

0x256e,	// (0x000112da) mup_equalizer_pane_cp2

0x2593,	// (0x000112ff) mup_equalizer_pane_cp3_ParamLimits

0x2593,	// (0x000112ff) mup_equalizer_pane_cp3

0x25bc,	// (0x00011328) mup_equalizer_pane_cp4_ParamLimits

0x25bc,	// (0x00011328) mup_equalizer_pane_cp4

0x25e5,	// (0x00011351) mup_equalizer_pane_cp5

0x25fd,	// (0x00011369) mup_equalizer_pane_cp6

0x2615,	// (0x00011381) mup_equalizer_pane_cp7

0xbc0a,	// (0x0001a976) bg_popup_call_poc_act_pane_g9

0xbc12,	// (0x0001a97e) bg_popup_call_poc_act_pane_g10

0xbc1a,	// (0x0001a986) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c6f,	// (0x000189db) mup_scale_pane

0x9c87,	// (0x000189f3) mup_scale_pane_g1

0xaaf3,	// (0x0001985f) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x0001e11b) mup_scale_pane_g

0xab17,	// (0x00019883) msg_data_pane

0xab1f,	// (0x0001988b) scroll_pane_cp017

0x263f,	// (0x000113ab) bg_list_pane_cp04_ParamLimits

0x263f,	// (0x000113ab) bg_list_pane_cp04

0xab27,	// (0x00019893) msg_data_pane_g1

0x2667,	// (0x000113d3) msg_data_pane_g2

0x2671,	// (0x000113dd) msg_data_pane_g3

0x267b,	// (0x000113e7) msg_data_pane_g4

0x2683,	// (0x000113ef) msg_data_pane_g5

0x268b,	// (0x000113f7) msg_data_pane_g6

0x2693,	// (0x000113ff) msg_data_pane_g7

0x0006,

0xf3be,	// (0x0001e12a) msg_data_pane_g

0x269b,	// (0x00011407) msg_text_pane_ParamLimits

0x269b,	// (0x00011407) msg_text_pane

0x26d8,	// (0x00011444) qrid_highlight_pane_cp011_ParamLimits

0x26d8,	// (0x00011444) qrid_highlight_pane_cp011

0x9a14,	// (0x00018780) msg_body_pane

0x9c6f,	// (0x000189db) msg_header_pane

0xab43,	// (0x000198af) input_focus_pane_cp07

0x26fc,	// (0x00011468) msg_header_pane_t1_ParamLimits

0x26fc,	// (0x00011468) msg_header_pane_t1

0x2718,	// (0x00011484) msg_header_pane_t2_ParamLimits

0x2718,	// (0x00011484) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x0001e13e) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x0001e13e) msg_header_pane_t

0xab64,	// (0x000198d0) msg_body_pane_g1

0x2738,	// (0x000114a4) msg_body_pane_t1_ParamLimits

0x2738,	// (0x000114a4) msg_body_pane_t1

0x2769,	// (0x000114d5) msg_body_pane_t2_ParamLimits

0x2769,	// (0x000114d5) msg_body_pane_t2

0x277b,	// (0x000114e7) msg_body_pane_t3_ParamLimits

0x277b,	// (0x000114e7) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x0001e143) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x0001e143) msg_body_pane_t

0x27c7,	// (0x00011533) main_viewer_pane_g1_ParamLimits

0x27c7,	// (0x00011533) main_viewer_pane_g1

0x27d5,	// (0x00011541) main_viewer_pane_g2_ParamLimits

0x27d5,	// (0x00011541) main_viewer_pane_g2

0x27e3,	// (0x0001154f) main_viewer_pane_g3_ParamLimits

0x27e3,	// (0x0001154f) main_viewer_pane_g3

0x27f2,	// (0x0001155e) main_viewer_pane_g4_ParamLimits

0x27f2,	// (0x0001155e) main_viewer_pane_g4

0xab84,	// (0x000198f0) main_viewer_pane_g5_ParamLimits

0xab84,	// (0x000198f0) main_viewer_pane_g5

0xab84,	// (0x000198f0) main_viewer_pane_g7_ParamLimits

0xab84,	// (0x000198f0) main_viewer_pane_g7

0xab96,	// (0x00019902) main_viewer_pane_g8_ParamLimits

0xab96,	// (0x00019902) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x0001e153) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x0001e153) main_viewer_pane_g

0xabae,	// (0x0001991a) viewer_content_pane_ParamLimits

0xabae,	// (0x0001991a) viewer_content_pane

0x2830,	// (0x0001159c) main_postcard_pane_g1_ParamLimits

0x2830,	// (0x0001159c) main_postcard_pane_g1

0x2846,	// (0x000115b2) main_postcard_pane_g2_ParamLimits

0x2846,	// (0x000115b2) main_postcard_pane_g2

0x285c,	// (0x000115c8) main_postcard_pane_g3_ParamLimits

0x285c,	// (0x000115c8) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x0001e164) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x0001e164) main_postcard_pane_g

0x2873,	// (0x000115df) main_postcard_pane_g4

0xbda8,	// (0x0001ab14) smil_status_volume_pane_g2

0x28b6,	// (0x00011622) postcard_pane_ParamLimits

0x28b6,	// (0x00011622) postcard_pane

0xabbc,	// (0x00019928) postcard_pane_g1_ParamLimits

0xabbc,	// (0x00019928) postcard_pane_g1

0x2906,	// (0x00011672) postcard_pane_g2_ParamLimits

0x2906,	// (0x00011672) postcard_pane_g2

0x2912,	// (0x0001167e) postcard_pane_g3_ParamLimits

0x2912,	// (0x0001167e) postcard_pane_g3

0xabca,	// (0x00019936) postcard_pane_g4_ParamLimits

0xabca,	// (0x00019936) postcard_pane_g4

0x291e,	// (0x0001168a) postcard_pane_g5_ParamLimits

0x291e,	// (0x0001168a) postcard_pane_g5

0x2933,	// (0x0001169f) postcard_pane_g6_ParamLimits

0x2933,	// (0x0001169f) postcard_pane_g6

0xabbc,	// (0x00019928) postcard_pane_g7_ParamLimits

0xabbc,	// (0x00019928) postcard_pane_g7

0x0006,

0xf405,	// (0x0001e171) postcard_pane_g_ParamLimits

0xf405,	// (0x0001e171) postcard_pane_g

0x294b,	// (0x000116b7) main_mp2_pane_g1_ParamLimits

0x294b,	// (0x000116b7) main_mp2_pane_g1

0x2959,	// (0x000116c5) main_mp2_pane_g2_ParamLimits

0x2959,	// (0x000116c5) main_mp2_pane_g2

0x2965,	// (0x000116d1) main_mp2_pane_g3_ParamLimits

0x2965,	// (0x000116d1) main_mp2_pane_g3

0x0002,

0xf414,	// (0x0001e180) main_mp2_pane_g_ParamLimits

0xf414,	// (0x0001e180) main_mp2_pane_g

0x2971,	// (0x000116dd) main_mp2_pane_t1_ParamLimits

0x2971,	// (0x000116dd) main_mp2_pane_t1

0x2988,	// (0x000116f4) main_mp2_pane_t2_ParamLimits

0x2988,	// (0x000116f4) main_mp2_pane_t2

0x299a,	// (0x00011706) main_mp2_pane_t3_ParamLimits

0x299a,	// (0x00011706) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x0001e187) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x0001e187) main_mp2_pane_t

0x95be,	// (0x0001832a) pec_content_pane_ParamLimits

0x95be,	// (0x0001832a) pec_content_pane

0x9549,	// (0x000182b5) scroll_pane_cp015

0xaa8a,	// (0x000197f6) pec_attribute_pane_ParamLimits

0xaa8a,	// (0x000197f6) pec_attribute_pane

0x9cea,	// (0x00018a56) pec_content_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) pec_content_pane_g1

0xabd8,	// (0x00019944) pec_content_pane_t1_ParamLimits

0xabd8,	// (0x00019944) pec_content_pane_t1

0xabec,	// (0x00019958) pec_content_pane_t2_ParamLimits

0xabec,	// (0x00019958) pec_content_pane_t2

0x0001,

0xf422,	// (0x0001e18e) pec_content_pane_t_ParamLimits

0xf422,	// (0x0001e18e) pec_content_pane_t

0x9cdc,	// (0x00018a48) list_single_graphic_pane_cp01_ParamLimits

0x9cdc,	// (0x00018a48) list_single_graphic_pane_cp01

0x9c6f,	// (0x000189db) bg_popup_sub_pane_cp04

0xac00,	// (0x0001996c) popup_mup_playback_window_g1

0xac0c,	// (0x00019978) popup_mup_playback_window_t1

0xac21,	// (0x0001998d) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x0001e193) popup_mup_playback_window_t

0xac58,	// (0x000199c4) main_image_pane_g1_ParamLimits

0xac58,	// (0x000199c4) main_image_pane_g1

0xac9b,	// (0x00019a07) scroll_pane_cp018_ParamLimits

0xac9b,	// (0x00019a07) scroll_pane_cp018

0xacb3,	// (0x00019a1f) scroll_pane_cp016_ParamLimits

0xacb3,	// (0x00019a1f) scroll_pane_cp016

0x2a64,	// (0x000117d0) smil2_image_pane_ParamLimits

0x2a64,	// (0x000117d0) smil2_image_pane

0x2a9a,	// (0x00011806) smil2_root_pane_ParamLimits

0x2a9a,	// (0x00011806) smil2_root_pane

0x2ad2,	// (0x0001183e) smil2_text_pane_ParamLimits

0x2ad2,	// (0x0001183e) smil2_text_pane

0x9549,	// (0x000182b5) bg_list_pane_cp06

0x9549,	// (0x000182b5) grid_radio_pane

0x9a14,	// (0x00018780) bg_popup_window_pane_cp06

0xa567,	// (0x000192d3) main_fmradio_pane_t1

0xbc22,	// (0x0001a98e) heading_pane_cp04

0xa567,	// (0x000192d3) main_fmradio_pane_t2

0xbc2a,	// (0x0001a996) popup_cale_lunar_info_window_g1

0xa567,	// (0x000192d3) main_fmradio_pane_t3

0xbc32,	// (0x0001a99e) popup_cale_lunar_info_window_g2

0xa567,	// (0x000192d3) main_fmradio_pane_t4

0x0001,

0xa567,	// (0x000192d3) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x0001e263) popup_cale_lunar_info_window_g

0xf287,	// (0x0001dff3) main_fmradio_pane_t

0x9549,	// (0x000182b5) wait_bar_pane_cp03

0x9cdc,	// (0x00018a48) cell_fmradio_pane_ParamLimits

0x9cdc,	// (0x00018a48) cell_fmradio_pane

0x9cea,	// (0x00018a56) cell_fmradio_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) cell_fmradio_pane_g1

0x9549,	// (0x000182b5) grid_highlight_pane_cp011

0xace7,	// (0x00019a53) poc_content_pane_ParamLimits

0xace7,	// (0x00019a53) poc_content_pane

0xacf9,	// (0x00019a65) scroll_pane_cp019

0x2b62,	// (0x000118ce) popup_call_poc_act_window_ParamLimits

0x2b62,	// (0x000118ce) popup_call_poc_act_window

0x2b86,	// (0x000118f2) popup_call_poc_inact_window_ParamLimits

0x2b86,	// (0x000118f2) popup_call_poc_inact_window

0xf4d3,	// (0x0001e23f) bg_popup_call_poc_act_pane_g

0xbb9a,	// (0x0001a906) bg_popup_call_poc_inact_pane_g1

0xbba2,	// (0x0001a90e) bg_popup_call_poc_inact_pane_g2

0xad01,	// (0x00019a6d) popup_call_poc_act_window_g2

0xbbaa,	// (0x0001a916) bg_popup_call_poc_inact_pane_g3

0xbbb2,	// (0x0001a91e) bg_popup_call_poc_inact_pane_g4

0xbbba,	// (0x0001a926) bg_popup_call_poc_inact_pane_g5

0xad09,	// (0x00019a75) popup_call_poc_act_window_t1_ParamLimits

0xad09,	// (0x00019a75) popup_call_poc_act_window_t1

0xad31,	// (0x00019a9d) popup_call_poc_act_window_t2_ParamLimits

0xad31,	// (0x00019a9d) popup_call_poc_act_window_t2

0xad59,	// (0x00019ac5) popup_call_poc_act_window_t3_ParamLimits

0xad59,	// (0x00019ac5) popup_call_poc_act_window_t3

0xad81,	// (0x00019aed) popup_call_poc_act_window_t4_ParamLimits

0xad81,	// (0x00019aed) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x0001e1a8) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x0001e1a8) popup_call_poc_act_window_t

0xbbc2,	// (0x0001a92e) bg_popup_call_poc_inact_pane_g6

0xbbca,	// (0x0001a936) bg_popup_call_poc_inact_pane_g7

0xbbd2,	// (0x0001a93e) bg_popup_call_poc_inact_pane_g8

0xad93,	// (0x00019aff) popup_call_poc_inact_window_g2

0xbbda,	// (0x0001a946) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x0001e22c) bg_popup_call_poc_inact_pane_g

0xad9b,	// (0x00019b07) popup_call_poc_inact_window_t1_ParamLimits

0xad9b,	// (0x00019b07) popup_call_poc_inact_window_t1

0xadb0,	// (0x00019b1c) popup_call_poc_inact_window_t2_ParamLimits

0xadb0,	// (0x00019b1c) popup_call_poc_inact_window_t2

0xadc5,	// (0x00019b31) popup_call_poc_inact_window_t3_ParamLimits

0xadc5,	// (0x00019b31) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x0001e1b1) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x0001e1b1) popup_call_poc_inact_window_t

0xbd20,	// (0x0001aa8c) context_pane_ParamLimits

0x33da,	// (0x00012146) signal_pane_ParamLimits

0x9fc9,	// (0x00018d35) main_call2_pane

0xbcf9,	// (0x0001aa65) popup_phob_thumbnail2_window_ParamLimits

0xbcf9,	// (0x0001aa65) popup_phob_thumbnail2_window

0xab6c,	// (0x000198d8) aid_hotspot_pointer_arrow_pane

0xab74,	// (0x000198e0) aid_hotspot_pointer_hand_pane

0x2e85,	// (0x00011bf1) phob_pre_status_pane_g5

0x95be,	// (0x0001832a) cams_zoom_pane_ParamLimits

0x95be,	// (0x0001832a) image_vga_pane_ParamLimits

0x9cea,	// (0x00018a56) main_camera_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) main_camera_pane_g2_ParamLimits

0x9cea,	// (0x00018a56) main_camera_pane_g3_ParamLimits

0x9cea,	// (0x00018a56) main_camera_pane_g4_ParamLimits

0x9cea,	// (0x00018a56) main_camera_pane_g5_ParamLimits

0x9cea,	// (0x00018a56) main_camera_pane_g6_ParamLimits

0x9cea,	// (0x00018a56) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0001deec) main_camera_pane_g_ParamLimits

0x9d3a,	// (0x00018aa6) main_camera_pane_t1_ParamLimits

0x9d3a,	// (0x00018aa6) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0001defd) main_camera_pane_t_ParamLimits

0x9c6f,	// (0x000189db) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c6f,	// (0x000189db) bg_popup_preview_window_pane_cp01

0xadda,	// (0x00019b46) popup_phob_thumbnail2_window_g1_ParamLimits

0xadda,	// (0x00019b46) popup_phob_thumbnail2_window_g1

0x9a14,	// (0x00018780) call2_cli_visual_pane

0x2bba,	// (0x00011926) popup_call2_audio_conf_window_ParamLimits

0x2bba,	// (0x00011926) popup_call2_audio_conf_window

0x2be2,	// (0x0001194e) popup_call2_audio_first_window_ParamLimits

0x2be2,	// (0x0001194e) popup_call2_audio_first_window

0x2c78,	// (0x000119e4) popup_call2_audio_in_window_ParamLimits

0x2c78,	// (0x000119e4) popup_call2_audio_in_window

0x2cc4,	// (0x00011a30) popup_call2_audio_out_window_ParamLimits

0x2cc4,	// (0x00011a30) popup_call2_audio_out_window

0x2d36,	// (0x00011aa2) popup_call2_audio_second_window_ParamLimits

0x2d36,	// (0x00011aa2) popup_call2_audio_second_window

0x2d9c,	// (0x00011b08) popup_call2_audio_wait_window_ParamLimits

0x2d9c,	// (0x00011b08) popup_call2_audio_wait_window

0x9a14,	// (0x00018780) bg_popup_call2_act_pane_cp03

0x9c51,	// (0x000189bd) list_conf_pane_cp

0xade6,	// (0x00019b52) popup_call2_audio_conf_window_t1

0xadf4,	// (0x00019b60) list_single_graphic_popup_conf2_pane_ParamLimits

0xadf4,	// (0x00019b60) list_single_graphic_popup_conf2_pane

0xa7c0,	// (0x0001952c) list_highlight_pane_cp04

0xae07,	// (0x00019b73) list_single_graphic_popup_conf2_pane_g1

0xa7d1,	// (0x0001953d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x0001e1b8) list_single_graphic_popup_conf2_pane_g

0xae11,	// (0x00019b7d) list_single_graphic_popup_conf2_pane_t1

0xae1f,	// (0x00019b8b) bg_popup_call2_act_pane_cp01_ParamLimits

0xae1f,	// (0x00019b8b) bg_popup_call2_act_pane_cp01

0xaea9,	// (0x00019c15) call_type_pane_cp05_ParamLimits

0xaea9,	// (0x00019c15) call_type_pane_cp05

0xaefd,	// (0x00019c69) popup_call2_audio_second_window_g1_ParamLimits

0xaefd,	// (0x00019c69) popup_call2_audio_second_window_g1

0xaf51,	// (0x00019cbd) popup_call2_audio_second_window_g2_ParamLimits

0xaf51,	// (0x00019cbd) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x0001e1bd) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x0001e1bd) popup_call2_audio_second_window_g

0xafb6,	// (0x00019d22) popup_call2_audio_second_window_t1_ParamLimits

0xafb6,	// (0x00019d22) popup_call2_audio_second_window_t1

0xb071,	// (0x00019ddd) popup_call2_audio_second_window_t2_ParamLimits

0xb071,	// (0x00019ddd) popup_call2_audio_second_window_t2

0xb0c4,	// (0x00019e30) popup_call2_audio_second_window_t3_ParamLimits

0xb0c4,	// (0x00019e30) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x0001e1c4) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x0001e1c4) popup_call2_audio_second_window_t

0x9a14,	// (0x00018780) bg_popup_call2_in_pane_cp02

0x9a1e,	// (0x0001878a) call_type_pane_cp04

0x2dd6,	// (0x00011b42) popup_call2_audio_wait_window_g1

0x2dde,	// (0x00011b4a) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x0001e1cd) popup_call2_audio_wait_window_g

0x9a36,	// (0x000187a2) popup_call2_audio_wait_window_t3

0xb1b7,	// (0x00019f23) bg_popup_call2_act_pane_ParamLimits

0xb1b7,	// (0x00019f23) bg_popup_call2_act_pane

0xb277,	// (0x00019fe3) call_type_pane_cp03_ParamLimits

0xb277,	// (0x00019fe3) call_type_pane_cp03

0xb2db,	// (0x0001a047) popup_call2_audio_first_window_g1_ParamLimits

0xb2db,	// (0x0001a047) popup_call2_audio_first_window_g1

0xb34b,	// (0x0001a0b7) popup_call2_audio_first_window_g2_ParamLimits

0xb34b,	// (0x0001a0b7) popup_call2_audio_first_window_g2

0xb3af,	// (0x0001a11b) popup_call2_audio_first_window_g3_ParamLimits

0xb3af,	// (0x0001a11b) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x0001e1d2) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x0001e1d2) popup_call2_audio_first_window_g

0xb437,	// (0x0001a1a3) popup_call2_audio_first_window_t1_ParamLimits

0xb437,	// (0x0001a1a3) popup_call2_audio_first_window_t1

0xb53a,	// (0x0001a2a6) popup_call2_audio_first_window_t4_ParamLimits

0xb53a,	// (0x0001a2a6) popup_call2_audio_first_window_t4

0xb61d,	// (0x0001a389) popup_call2_audio_first_window_t5_ParamLimits

0xb61d,	// (0x0001a389) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x0001e1dd) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x0001e1dd) popup_call2_audio_first_window_t

0x9c67,	// (0x000189d3) bg_popup_call2_act_pane_g1

0xbc3c,	// (0x0001a9a8) popup_cale_lunar_info_window_t1

0xbc4a,	// (0x0001a9b6) popup_cale_lunar_info_window_t2

0xbc58,	// (0x0001a9c4) popup_cale_lunar_info_window_t3

0x9a14,	// (0x00018780) bg_popup_call2_bubble_pane

0xb71e,	// (0x0001a48a) bg_popup_call2_in_pane_cp01_ParamLimits

0xb71e,	// (0x0001a48a) bg_popup_call2_in_pane_cp01

0x96f0,	// (0x0001845c) call_type_pane_cp02

0x2de6,	// (0x00011b52) popup_call2_audio_out_window_g1_ParamLimits

0x2de6,	// (0x00011b52) popup_call2_audio_out_window_g1

0xb766,	// (0x0001a4d2) popup_call2_audio_out_window_g2_ParamLimits

0xb766,	// (0x0001a4d2) popup_call2_audio_out_window_g2

0x2e12,	// (0x00011b7e) popup_call2_audio_out_window_g3_ParamLimits

0x2e12,	// (0x00011b7e) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x0001e1e6) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x0001e1e6) popup_call2_audio_out_window_g

0xb79d,	// (0x0001a509) popup_call2_audio_out_window_t1_ParamLimits

0xb79d,	// (0x0001a509) popup_call2_audio_out_window_t1

0xb7fc,	// (0x0001a568) popup_call2_audio_out_window_t2_ParamLimits

0xb7fc,	// (0x0001a568) popup_call2_audio_out_window_t2

0xb850,	// (0x0001a5bc) popup_call2_audio_out_window_t3_ParamLimits

0xb850,	// (0x0001a5bc) popup_call2_audio_out_window_t3

0xb866,	// (0x0001a5d2) popup_call2_audio_out_window_t4_ParamLimits

0xb866,	// (0x0001a5d2) popup_call2_audio_out_window_t4

0xb87c,	// (0x0001a5e8) popup_call2_audio_out_window_t5_ParamLimits

0xb87c,	// (0x0001a5e8) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x0001e1ef) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x0001e1ef) popup_call2_audio_out_window_t

0xb8e0,	// (0x0001a64c) bg_popup_call2_in_pane_ParamLimits

0xb8e0,	// (0x0001a64c) bg_popup_call2_in_pane

0xb93c,	// (0x0001a6a8) popup_call2_audio_in_window_g1_ParamLimits

0xb93c,	// (0x0001a6a8) popup_call2_audio_in_window_g1

0xb974,	// (0x0001a6e0) popup_call2_audio_in_window_g2_ParamLimits

0xb974,	// (0x0001a6e0) popup_call2_audio_in_window_g2

0xb9ac,	// (0x0001a718) popup_call2_audio_in_window_g3_ParamLimits

0xb9ac,	// (0x0001a718) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x0001e1fc) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x0001e1fc) popup_call2_audio_in_window_g

0xba04,	// (0x0001a770) popup_call2_audio_in_window_t1_ParamLimits

0xba04,	// (0x0001a770) popup_call2_audio_in_window_t1

0xba84,	// (0x0001a7f0) popup_call2_audio_in_window_t2_ParamLimits

0xba84,	// (0x0001a7f0) popup_call2_audio_in_window_t2

0xbb04,	// (0x0001a870) popup_call2_audio_in_window_t3_ParamLimits

0xbb04,	// (0x0001a870) popup_call2_audio_in_window_t3

0xbb1e,	// (0x0001a88a) popup_call2_audio_in_window_t4_ParamLimits

0xbb1e,	// (0x0001a88a) popup_call2_audio_in_window_t4

0xbb30,	// (0x0001a89c) popup_call2_audio_in_window_t5_ParamLimits

0xbb30,	// (0x0001a89c) popup_call2_audio_in_window_t5

0xbb45,	// (0x0001a8b1) popup_call2_audio_in_window_t6_ParamLimits

0xbb45,	// (0x0001a8b1) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0001e205) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0001e205) popup_call2_audio_in_window_t

0x9c67,	// (0x000189d3) bg_popup_call2_in_pane_g1

0xbc66,	// (0x0001a9d2) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x0001e268) popup_cale_lunar_info_window_t

0x9c6f,	// (0x000189db) bg_popup_call2_rect_pane_ParamLimits

0x9c6f,	// (0x000189db) bg_popup_call2_rect_pane

0x9a14,	// (0x00018780) call2_cli_visual_graphic_pane

0x9a14,	// (0x00018780) call2_cli_visual_text_pane

0xbdbb,	// (0x0001ab27) smil_status_volume_pane_g3

0x0002,

0x9c87,	// (0x000189f3) call2_cli_visual_graphic_pane_g1

0x9c87,	// (0x000189f3) call2_cli_visual_graphic_pane_g2

0x9c87,	// (0x000189f3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x0001e212) call2_cli_visual_graphic_pane_g

0xbb5a,	// (0x0001a8c6) bg_popup_call2_rect_pane_g1

0x9eac,	// (0x00018c18) bg_popup_call2_rect_pane_g2

0xbb62,	// (0x0001a8ce) bg_popup_call2_rect_pane_g3

0xbb6a,	// (0x0001a8d6) bg_popup_call2_rect_pane_g4

0xbb72,	// (0x0001a8de) bg_popup_call2_rect_pane_g5

0xbb7a,	// (0x0001a8e6) bg_popup_call2_rect_pane_g6

0xbb82,	// (0x0001a8ee) bg_popup_call2_rect_pane_g7

0xbb8a,	// (0x0001a8f6) bg_popup_call2_rect_pane_g8

0xbb92,	// (0x0001a8fe) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x0001e219) bg_popup_call2_rect_pane_g

0xbb9a,	// (0x0001a906) bg_popup_call2_bubble_pane_g1

0xbba2,	// (0x0001a90e) bg_popup_call2_bubble_pane_g2

0xbbaa,	// (0x0001a916) bg_popup_call2_bubble_pane_g3

0xbbb2,	// (0x0001a91e) bg_popup_call2_bubble_pane_g4

0xbbba,	// (0x0001a926) bg_popup_call2_bubble_pane_g5

0xbbc2,	// (0x0001a92e) bg_popup_call2_bubble_pane_g6

0xbbca,	// (0x0001a936) bg_popup_call2_bubble_pane_g7

0xbbd2,	// (0x0001a93e) bg_popup_call2_bubble_pane_g8

0xbbda,	// (0x0001a946) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x0001e22c) bg_popup_call2_bubble_pane_g

0x06ab,	// (0x0000f417) aid_cale_week_size_cell_pane

0x0cef,	// (0x0000fa5b) aid_cams_cif_uncrop_pane_ParamLimits

0x0cef,	// (0x0000fa5b) aid_cams_cif_uncrop_pane

0x95be,	// (0x0001832a) aid_cams_size_cell_ParamLimits

0x95be,	// (0x0001832a) aid_cams_size_cell

0x95be,	// (0x0001832a) grid_cams_pane_ParamLimits

0x95be,	// (0x0001832a) linegrid_cams_pane_ParamLimits

0x0f02,	// (0x0000fc6e) call_video_pane_t1

0x0f1c,	// (0x0000fc88) call_video_pane_t2

0x0001,

0xf1dd,	// (0x0001df49) call_video_pane_t

0x1354,	// (0x000100c0) aid_cale_month_size_cell_pane_ParamLimits

0x1354,	// (0x000100c0) aid_cale_month_size_cell_pane

0xf540,	// (0x0001e2ac) smil_status_volume_pane_g

0xbdc8,	// (0x0001ab34) volume_smil_pane_ParamLimits

0x955b,	// (0x000182c7) aid_popup2_width_pane

0x060c,	// (0x0000f378) cell_qdial_pane_g4_ParamLimits

0x060c,	// (0x0000f378) cell_qdial_pane_g4

0x224b,	// (0x00010fb7) aid_blid_cardinal_pane_ParamLimits

0x2257,	// (0x00010fc3) aid_blid_destination_pane_ParamLimits

0x2257,	// (0x00010fc3) aid_blid_destination_pane

0x9c6f,	// (0x000189db) bg_popup_call_poc_act_pane_ParamLimits

0x9c6f,	// (0x000189db) bg_popup_call_poc_act_pane

0x9c6f,	// (0x000189db) bg_popup_call_poc_inact_pane_ParamLimits

0x9c6f,	// (0x000189db) bg_popup_call_poc_inact_pane

0xbbe2,	// (0x0001a94e) bg_popup_call_poc_act_pane_g1

0xbbea,	// (0x0001a956) bg_popup_call_poc_act_pane_g2

0xbbf2,	// (0x0001a95e) bg_popup_call_poc_act_pane_g3

0xbbb2,	// (0x0001a91e) bg_popup_call_poc_act_pane_g4

0xbbba,	// (0x0001a926) bg_popup_call_poc_act_pane_g5

0xbbfa,	// (0x0001a966) bg_popup_call_poc_act_pane_g6

0xbbca,	// (0x0001a936) bg_popup_call_poc_act_pane_g7

0xbc02,	// (0x0001a96e) bg_popup_call_poc_act_pane_g8

0x9a14,	// (0x00018780) main_usb_pane

0xbcd0,	// (0x0001aa3c) popup_cale_lunar_info_window

0x11e9,	// (0x0000ff55) im_reading_pane_t1_ParamLimits

0xa098,	// (0x00018e04) list_im_pane_ParamLimits

0xa0a9,	// (0x00018e15) scroll_pane_cp07_ParamLimits

0x9a14,	// (0x00018780) grid_highlight_pane_cp012

0x9c6f,	// (0x000189db) mup_scale_pane_ParamLimits

0x9cea,	// (0x00018a56) main_usb_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) main_usb_pane_g1

0x9cea,	// (0x00018a56) main_usb_pane_g2_ParamLimits

0x9cea,	// (0x00018a56) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x0001df28) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x0001df28) main_usb_pane_g

0x9d3a,	// (0x00018aa6) main_usb_pane_t1_ParamLimits

0x9d3a,	// (0x00018aa6) main_usb_pane_t1

0x9d3a,	// (0x00018aa6) main_usb_pane_t2_ParamLimits

0x9d3a,	// (0x00018aa6) main_usb_pane_t2

0x9d3a,	// (0x00018aa6) main_usb_pane_t3_ParamLimits

0x9d3a,	// (0x00018aa6) main_usb_pane_t3

0x9d3a,	// (0x00018aa6) main_usb_pane_t4_ParamLimits

0x9d3a,	// (0x00018aa6) main_usb_pane_t4

0x9d3a,	// (0x00018aa6) main_usb_pane_t5_ParamLimits

0x9d3a,	// (0x00018aa6) main_usb_pane_t5

0x9d3a,	// (0x00018aa6) main_usb_pane_t6_ParamLimits

0x9d3a,	// (0x00018aa6) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x0001e256) main_usb_pane_t_ParamLimits

0x21ea,	// (0x00010f56) aid_text_placing

0x21f5,	// (0x00010f61) main_location2_pane_t1_ParamLimits

0x220b,	// (0x00010f77) main_location2_pane_t2_ParamLimits

0x2221,	// (0x00010f8d) main_location2_pane_t3_ParamLimits

0x2237,	// (0x00010fa3) main_location2_pane_t4_ParamLimits

0x2237,	// (0x00010fa3) main_location2_pane_t4

0xf319,	// (0x0001e085) main_location2_pane_t_ParamLimits

0x9c9d,	// (0x00018a09) find_pinb_pane_g2_ParamLimits

0x9c9d,	// (0x00018a09) find_pinb_pane_g2

0x0001,

0xf095,	// (0x0001de01) find_pinb_pane_g_ParamLimits

0xf095,	// (0x0001de01) find_pinb_pane_g

0x9ca9,	// (0x00018a15) find_pinb_pane_t1_ParamLimits

0x9cbb,	// (0x00018a27) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0001de06) find_pinb_pane_t_ParamLimits

0x9a14,	// (0x00018780) main_call3_pane

0x1959,	// (0x000106c5) cale_month_day_heading_pane_t1_ParamLimits

0x19df,	// (0x0001074b) cale_month_day_heading_pane_t2_ParamLimits

0x1a58,	// (0x000107c4) cale_month_day_heading_pane_t3_ParamLimits

0x1ad1,	// (0x0001083d) cale_month_day_heading_pane_t4_ParamLimits

0x1b52,	// (0x000108be) cale_month_day_heading_pane_t5_ParamLimits

0x1bdb,	// (0x00010947) cale_month_day_heading_pane_t6_ParamLimits

0x1c6c,	// (0x000109d8) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0001df81) cale_month_day_heading_pane_t_ParamLimits

0xa30e,	// (0x0001907a) smil_status_volume_pane

0x28da,	// (0x00011646) postcard_address_pane_ParamLimits

0x28da,	// (0x00011646) postcard_address_pane

0x28f0,	// (0x0001165c) postcard_message_pane_ParamLimits

0x28f0,	// (0x0001165c) postcard_message_pane

0x2e3e,	// (0x00011baa) call2_cli_visual_pane_t1_ParamLimits

0x2e3e,	// (0x00011baa) call2_cli_visual_pane_t1

0xbdf5,	// (0x0001ab61) postcard_message_pane_t1_ParamLimits

0xbdf5,	// (0x0001ab61) postcard_message_pane_t1

0xbddd,	// (0x0001ab49) postcard_address_pane_t1_ParamLimits

0xbddd,	// (0x0001ab49) postcard_address_pane_t1

0x3596,	// (0x00012302) popup_call3_audio_in_window_ParamLimits

0x3596,	// (0x00012302) popup_call3_audio_in_window

0x341b,	// (0x00012187) bg_popup_call3_in_pane_ParamLimits

0x341b,	// (0x00012187) bg_popup_call3_in_pane

0x3497,	// (0x00012203) popup_call3_audio_in_window_g1_ParamLimits

0x3497,	// (0x00012203) popup_call3_audio_in_window_g1

0x34b7,	// (0x00012223) popup_call3_audio_in_window_g2_ParamLimits

0x34b7,	// (0x00012223) popup_call3_audio_in_window_g2

0x34d7,	// (0x00012243) popup_call3_audio_in_window_g3_ParamLimits

0x34d7,	// (0x00012243) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x0001e2b3) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x0001e2b3) popup_call3_audio_in_window_g

0x3508,	// (0x00012274) popup_call3_audio_in_window_t1_ParamLimits

0x3508,	// (0x00012274) popup_call3_audio_in_window_t1

0x3546,	// (0x000122b2) popup_call3_audio_in_window_t2_ParamLimits

0x3546,	// (0x000122b2) popup_call3_audio_in_window_t2

0x3584,	// (0x000122f0) popup_call3_audio_in_window_t3_ParamLimits

0x3584,	// (0x000122f0) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x0001e2bc) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x0001e2bc) popup_call3_audio_in_window_t

0x9fc9,	// (0x00018d35) bg_popup_call3_rect_pane

0xbb5a,	// (0x0001a8c6) bg_popup_call3_rect_pane_g1

0x9eac,	// (0x00018c18) bg_popup_call3_rect_pane_g2

0xbb62,	// (0x0001a8ce) bg_popup_call3_rect_pane_g3

0xbb6a,	// (0x0001a8d6) bg_popup_call3_rect_pane_g4

0xbb72,	// (0x0001a8de) bg_popup_call3_rect_pane_g5

0xbb7a,	// (0x0001a8e6) bg_popup_call3_rect_pane_g6

0xbb82,	// (0x0001a8ee) bg_popup_call3_rect_pane_g7

0x9549,	// (0x000182b5) mup_visualizer_osc_pane

0x9549,	// (0x000182b5) mup_visualizer_spec_pane

0x344b,	// (0x000121b7) call3_video_qcif_pane_ParamLimits

0x344b,	// (0x000121b7) call3_video_qcif_pane

0x345e,	// (0x000121ca) call3_video_qcif_uncrop_pane_ParamLimits

0x345e,	// (0x000121ca) call3_video_qcif_uncrop_pane

0x346e,	// (0x000121da) call3_video_subqcif_pane_ParamLimits

0x346e,	// (0x000121da) call3_video_subqcif_pane

0x3484,	// (0x000121f0) call3_video_subqcif_uncrop_pane_ParamLimits

0x3484,	// (0x000121f0) call3_video_subqcif_uncrop_pane

0x34f7,	// (0x00012263) popup_call3_audio_in_window_g4_ParamLimits

0x34f7,	// (0x00012263) popup_call3_audio_in_window_g4

0x9549,	// (0x000182b5) mup_spec_half_pane

0x9549,	// (0x000182b5) mup_spec_half_pane_cp

0x9549,	// (0x000182b5) mup_osc_middle_pane

0x9d30,	// (0x00018a9c) mup_visualizer_osc_pane_g1

0xbd6e,	// (0x0001aada) mup_spec_bar_pane_ParamLimits

0xbd6e,	// (0x0001aada) mup_spec_bar_pane

0x9d30,	// (0x00018a9c) mup_spec_bar_pane_g1

0x9d30,	// (0x00018a9c) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x0001de1b) mup_spec_bar_pane_g

0x06ab,	// (0x0000f417) aid_cale_week_size_cell_pane_ParamLimits

0x06c5,	// (0x0000f431) bg_cale_heading_pane_ParamLimits

0x06e9,	// (0x0000f455) bg_cale_pane_cp01_ParamLimits

0x0706,	// (0x0000f472) cale_week_corner_pane_ParamLimits

0x0725,	// (0x0000f491) cale_week_day_heading_pane_ParamLimits

0x074e,	// (0x0000f4ba) cale_week_scroll_pane_g1_ParamLimits

0x076d,	// (0x0000f4d9) cale_week_scroll_pane_g2_ParamLimits

0x0785,	// (0x0000f4f1) cale_week_scroll_pane_g3_ParamLimits

0x079d,	// (0x0000f509) cale_week_scroll_pane_g4_ParamLimits

0x07b5,	// (0x0000f521) cale_week_scroll_pane_g5_ParamLimits

0x07d5,	// (0x0000f541) cale_week_scroll_pane_g6_ParamLimits

0x07f5,	// (0x0000f561) cale_week_scroll_pane_g7_ParamLimits

0x0819,	// (0x0000f585) cale_week_scroll_pane_g8_ParamLimits

0x083d,	// (0x0000f5a9) cale_week_scroll_pane_g9_ParamLimits

0x0855,	// (0x0000f5c1) cale_week_scroll_pane_g10_ParamLimits

0x086d,	// (0x0000f5d9) cale_week_scroll_pane_g11_ParamLimits

0x0885,	// (0x0000f5f1) cale_week_scroll_pane_g12_ParamLimits

0x08a9,	// (0x0000f615) cale_week_scroll_pane_g13_ParamLimits

0x08a9,	// (0x0000f615) cale_week_scroll_pane_g14_ParamLimits

0x08a9,	// (0x0000f615) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x0001de92) cale_week_scroll_pane_g_ParamLimits

0x08f1,	// (0x0000f65d) cale_week_time_pane_ParamLimits

0x0915,	// (0x0000f681) grid_cale_week_pane_ParamLimits

0x9f3f,	// (0x00018cab) listscroll_cale_week_pane_t1

0x9f51,	// (0x00018cbd) scroll_pane_cp08_ParamLimits

0x13cc,	// (0x00010138) cale_month_corner_pane_ParamLimits

0xa2d8,	// (0x00019044) cale_month_pane_t1

0x18d4,	// (0x00010640) cale_month_week_pane_ParamLimits

0x202a,	// (0x00010d96) popup_call_status_window_g1_ParamLimits

0x203e,	// (0x00010daa) popup_call_status_window_g2_ParamLimits

0x2052,	// (0x00010dbe) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x0001e00c) popup_call_status_window_g_ParamLimits

0xa6de,	// (0x0001944a) aid_call2_pane

0x26ee,	// (0x0001145a) msg_header_pane_g1

0x28da,	// (0x00011646) postcard_address2_pane_ParamLimits

0x28da,	// (0x00011646) postcard_address2_pane

0x28f0,	// (0x0001165c) postcard_message2_pane_ParamLimits

0x28f0,	// (0x0001165c) postcard_message2_pane

0x33e8,	// (0x00012154) message2_row_pane_ParamLimits

0x33e8,	// (0x00012154) message2_row_pane

0x3408,	// (0x00012174) address2_row_pane_ParamLimits

0x3408,	// (0x00012174) address2_row_pane

0xbd3b,	// (0x0001aaa7) postcard_message2_row_pane_g1

0xbd43,	// (0x0001aaaf) postcard_message2_row_pane_t1

0xbd3b,	// (0x0001aaa7) address2_row_pane_g1

0xbd43,	// (0x0001aaaf) address2_row_pane_t1

0x0c82,	// (0x0000f9ee) aid_size_cell_vorec

0x9a14,	// (0x00018780) main_rss_pane

0xbd51,	// (0x0001aabd) rss_list_single_pane_ParamLimits

0xbd51,	// (0x0001aabd) rss_list_single_pane

0xbd5f,	// (0x0001aacb) rss_list_single_pane_t1

0xbd5f,	// (0x0001aacb) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x0001e2a7) rss_list_single_pane_t

0x9a14,	// (0x00018780) main_camera2_pane

0x9a14,	// (0x00018780) main_video2_pane

0xbe11,	// (0x0001ab7d) cams_zoom_pane_cp2_ParamLimits

0xbe11,	// (0x0001ab7d) cams_zoom_pane_cp2

0xbe11,	// (0x0001ab7d) image2_vga_pane_ParamLimits

0xbe11,	// (0x0001ab7d) image2_vga_pane

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g1_ParamLimits

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g1

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g2_ParamLimits

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g2

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g3_ParamLimits

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g3

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g4_ParamLimits

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g4

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g5_ParamLimits

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g5

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g6_ParamLimits

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g6

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g7_ParamLimits

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g7

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g8_ParamLimits

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g8

0x0008,

0xf557,	// (0x0001e2c3) main_camera2_pane_g_ParamLimits

0xf557,	// (0x0001e2c3) main_camera2_pane_g

0x35b8,	// (0x00012324) main_camera2_pane_t1_ParamLimits

0x35b8,	// (0x00012324) main_camera2_pane_t1

0x35b8,	// (0x00012324) main_camera2_pane_t2_ParamLimits

0x35b8,	// (0x00012324) main_camera2_pane_t2

0x35b8,	// (0x00012324) main_camera2_pane_t3_ParamLimits

0x35b8,	// (0x00012324) main_camera2_pane_t3

0x35b8,	// (0x00012324) main_camera2_pane_t4_ParamLimits

0x35b8,	// (0x00012324) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x0001e2d6) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x0001e2d6) main_camera2_pane_t

0xbe41,	// (0x0001abad) cams_zoom_pane_cp4_ParamLimits

0xbe41,	// (0x0001abad) cams_zoom_pane_cp4

0xbe4f,	// (0x0001abbb) image2_cif_pane_ParamLimits

0xbe4f,	// (0x0001abbb) image2_cif_pane

0x95be,	// (0x0001832a) image2_subqcif_pane_ParamLimits

0x95be,	// (0x0001832a) image2_subqcif_pane

0x35cc,	// (0x00012338) main_video2_pane_g1_ParamLimits

0x35cc,	// (0x00012338) main_video2_pane_g1

0x35cc,	// (0x00012338) main_video2_pane_g2_ParamLimits

0x35cc,	// (0x00012338) main_video2_pane_g2

0x35cc,	// (0x00012338) main_video2_pane_g3_ParamLimits

0x35cc,	// (0x00012338) main_video2_pane_g3

0x35cc,	// (0x00012338) main_video2_pane_g4_ParamLimits

0x35cc,	// (0x00012338) main_video2_pane_g4

0x35cc,	// (0x00012338) main_video2_pane_g5_ParamLimits

0x35cc,	// (0x00012338) main_video2_pane_g5

0x35cc,	// (0x00012338) main_video2_pane_g6_ParamLimits

0x35cc,	// (0x00012338) main_video2_pane_g6

0x0005,

0xf579,	// (0x0001e2e5) main_video2_pane_g_ParamLimits

0xf579,	// (0x0001e2e5) main_video2_pane_g

0x35da,	// (0x00012346) main_video2_pane_t1_ParamLimits

0x35da,	// (0x00012346) main_video2_pane_t1

0x35da,	// (0x00012346) main_video2_pane_t2_ParamLimits

0x35da,	// (0x00012346) main_video2_pane_t2

0x35da,	// (0x00012346) main_video2_pane_t3_ParamLimits

0x35da,	// (0x00012346) main_video2_pane_t3

0x0002,

0xf586,	// (0x0001e2f2) main_video2_pane_t_ParamLimits

0xf586,	// (0x0001e2f2) main_video2_pane_t

0x2ee9,	// (0x00011c55) call_muted_g2

0x0001,

0xf52d,	// (0x0001e299) call_muted_g

0x9a14,	// (0x00018780) main_mup2_pane

0xaa68,	// (0x000197d4) main_mup2_pane_g1_ParamLimits

0xaa68,	// (0x000197d4) main_mup2_pane_g1

0xaa68,	// (0x000197d4) main_mup2_pane_g2_ParamLimits

0xaa68,	// (0x000197d4) main_mup2_pane_g2

0x9d30,	// (0x00018a9c) main_mup_pane_g13_cp1

0x9549,	// (0x000182b5) mup_volume_pane_cp1

0xaa68,	// (0x000197d4) main_mup2_pane_g4_ParamLimits

0xaa68,	// (0x000197d4) main_mup2_pane_g4

0xaa68,	// (0x000197d4) main_mup2_pane_g5_ParamLimits

0xaa68,	// (0x000197d4) main_mup2_pane_g5

0xaa68,	// (0x000197d4) main_mup2_pane_g6_ParamLimits

0xaa68,	// (0x000197d4) main_mup2_pane_g6

0xaa68,	// (0x000197d4) main_mup2_pane_g7_ParamLimits

0xaa68,	// (0x000197d4) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x0001e2f9) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x0001e2f9) main_mup2_pane_g

0xaa76,	// (0x000197e2) main_mup2_pane_t1_ParamLimits

0xaa76,	// (0x000197e2) main_mup2_pane_t1

0xaa76,	// (0x000197e2) main_mup2_pane_t2_ParamLimits

0xaa76,	// (0x000197e2) main_mup2_pane_t2

0xaa76,	// (0x000197e2) main_mup2_pane_t3_ParamLimits

0xaa76,	// (0x000197e2) main_mup2_pane_t3

0xaa76,	// (0x000197e2) main_mup2_pane_t4_ParamLimits

0xaa76,	// (0x000197e2) main_mup2_pane_t4

0xaa76,	// (0x000197e2) main_mup2_pane_t5_ParamLimits

0xaa76,	// (0x000197e2) main_mup2_pane_t5

0xaa76,	// (0x000197e2) main_mup2_pane_t6_ParamLimits

0xaa76,	// (0x000197e2) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x0001e308) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x0001e308) main_mup2_pane_t

0xaa8a,	// (0x000197f6) mup2_visualizer_pane_ParamLimits

0xaa8a,	// (0x000197f6) mup2_visualizer_pane

0xaa8a,	// (0x000197f6) mup_progress_pane_cp_ParamLimits

0xaa8a,	// (0x000197f6) mup_progress_pane_cp

0xbe5d,	// (0x0001abc9) mup_volume_pane_cp_ParamLimits

0xbe5d,	// (0x0001abc9) mup_volume_pane_cp

0x9cea,	// (0x00018a56) mup2_visualizer_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) mup2_visualizer_pane_g1

0x9cf8,	// (0x00018a64) mup2_visualizer_pane_g2_ParamLimits

0x9cf8,	// (0x00018a64) mup2_visualizer_pane_g2

0x9cf8,	// (0x00018a64) mup2_visualizer_pane_g3_ParamLimits

0x9cf8,	// (0x00018a64) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x0001de0b) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x0001de0b) mup2_visualizer_pane_g

0x9549,	// (0x000182b5) aid_size_cell_fmradio

0x3099,	// (0x00011e05) aid_height_parent_landcape

0xa136,	// (0x00018ea2) wml_content_pane_cp

0xa13e,	// (0x00018eaa) wml_tabs_pane

0xa147,	// (0x00018eb3) popup_wml_miniature_window

0xa14f,	// (0x00018ebb) scroll_pane_cp021

0xa163,	// (0x00018ecf) wml_content_pane_comp8

0x9a14,	// (0x00018780) bg_popup_sub_pane_cp05

0xbe73,	// (0x0001abdf) popup_wml_miniature_window_g1

0xbe7b,	// (0x0001abe7) wml_miniature_view_pane

0x35ee,	// (0x0001235a) aid_size_wml_view

0x35f6,	// (0x00012362) wml_miniature_view_pane_g1

0x35ff,	// (0x0001236b) wml_miniature_view_pane_g2

0x3608,	// (0x00012374) wml_miniature_view_pane_g3

0x3610,	// (0x0001237c) wml_miniature_view_pane_g4

0x3618,	// (0x00012384) wml_miniature_view_pane_g5

0x3620,	// (0x0001238c) wml_miniature_view_pane_g6

0x3628,	// (0x00012394) wml_miniature_view_pane_g7

0x3630,	// (0x0001239c) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x0001e315) wml_miniature_view_pane_g

0xbe83,	// (0x0001abef) background_graphic_ParamLimits

0xbe83,	// (0x0001abef) background_graphic

0xbe8f,	// (0x0001abfb) wml_tabs_2_pane

0xbe98,	// (0x0001ac04) wml_tabs_3_pane_ParamLimits

0xbe98,	// (0x0001ac04) wml_tabs_3_pane

0xbeaa,	// (0x0001ac16) wml_tabs_4_pane_ParamLimits

0xbeaa,	// (0x0001ac16) wml_tabs_4_pane

0xbec0,	// (0x0001ac2c) wml_tabs_5_pane_ParamLimits

0xbec0,	// (0x0001ac2c) wml_tabs_5_pane

0xbeda,	// (0x0001ac46) wml_tabs_pane_g2_ParamLimits

0xbeda,	// (0x0001ac46) wml_tabs_pane_g2

0xbeef,	// (0x0001ac5b) wml_tabs_pane_g3_ParamLimits

0xbeef,	// (0x0001ac5b) wml_tabs_pane_g3

0xbf04,	// (0x0001ac70) wml_tabs_2_active_pane_ParamLimits

0xbf04,	// (0x0001ac70) wml_tabs_2_active_pane

0xbf04,	// (0x0001ac70) wml_tabs_2_passive_pane_ParamLimits

0xbf04,	// (0x0001ac70) wml_tabs_2_passive_pane

0x3638,	// (0x000123a4) wml_tabs_3_active_pane_cp_ParamLimits

0x3638,	// (0x000123a4) wml_tabs_3_active_pane_cp

0x364d,	// (0x000123b9) wml_tabs_3_passive_pane_ParamLimits

0x364d,	// (0x000123b9) wml_tabs_3_passive_pane

0x3660,	// (0x000123cc) wml_tabs_3_passive_pane_cp_ParamLimits

0x3660,	// (0x000123cc) wml_tabs_3_passive_pane_cp

0x3677,	// (0x000123e3) tabs_4_active_pane

0x367f,	// (0x000123eb) tabs_4_passive_pane

0x3689,	// (0x000123f5) tabs_4_passive_pane_cp

0x3691,	// (0x000123fd) tabs_4_passive_pane_cp2

0x2e5d,	// (0x00011bc9) aid_height_text

0xaa8a,	// (0x000197f6) mup_volume_cont_pane_ParamLimits

0xaa8a,	// (0x000197f6) mup_volume_cont_pane

0x9549,	// (0x000182b5) aid_size_cell_pinb

0x9549,	// (0x000182b5) aid_size_list_pinb

0xaa8a,	// (0x000197f6) mup2_volume_cont_pane_ParamLimits

0xaa8a,	// (0x000197f6) mup2_volume_cont_pane

0xbf12,	// (0x0001ac7e) mup2_volume_cont_pane_g1_ParamLimits

0xbf12,	// (0x0001ac7e) mup2_volume_cont_pane_g1

0x0179,	// (0x0000eee5) aid_size_cell_touch_ParamLimits

0x0179,	// (0x0000eee5) aid_size_cell_touch

0x03a3,	// (0x0000f10f) touch_pane_ParamLimits

0x03a3,	// (0x0000f10f) touch_pane

0x9549,	// (0x000182b5) main_rss2_pane

0xbf31,	// (0x0001ac9d) listscroll_rss2_pane

0xbf3a,	// (0x0001aca6) rss2_navigation_pane

0xbf42,	// (0x0001acae) list_rss2_pane

0xa865,	// (0x000195d1) scroll_pane_cp22

0xbf4a,	// (0x0001acb6) rss2_navigation_pane_g1

0xbf53,	// (0x0001acbf) rss2_navigation_pane_g2

0xbf5b,	// (0x0001acc7) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x0001e326) rss2_navigation_pane_g

0xbf63,	// (0x0001accf) rss2_navigation_pane_t1

0x369b,	// (0x00012407) rss2_list_single_pane_ParamLimits

0x369b,	// (0x00012407) rss2_list_single_pane

0xbf71,	// (0x0001acdd) rss2_list_single_pane_t2

0xbf7f,	// (0x0001aceb) rss2_list_single_pane_t3_ParamLimits

0xbf7f,	// (0x0001aceb) rss2_list_single_pane_t3

0xbf9c,	// (0x0001ad08) rss2_list_single_pane_t4

0x1f14,	// (0x00010c80) smil_status_pane_g1

0x95be,	// (0x0001832a) main_image2_pane_ParamLimits

0x95be,	// (0x0001832a) main_image2_pane

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g9_ParamLimits

0xbe1f,	// (0x0001ab8b) main_camera2_pane_g9

0x35b8,	// (0x00012324) main_camera2_pane_t5_ParamLimits

0x35b8,	// (0x00012324) main_camera2_pane_t5

0xbe2d,	// (0x0001ab99) main_camera2_pane_t6_ParamLimits

0xbe2d,	// (0x0001ab99) main_camera2_pane_t6

0x36b2,	// (0x0001241e) main_image2_pane_g1_ParamLimits

0x36b2,	// (0x0001241e) main_image2_pane_g1

0x2b0c,	// (0x00011878) smil2_video_pane_ParamLimits

0x2b0c,	// (0x00011878) smil2_video_pane

0x9567,	// (0x000182d3) aid_zoom_text_primary_cp

0x95b4,	// (0x00018320) popup_preview_fixed_window

0xa090,	// (0x00018dfc) im_reading_pane_g1

0x35aa,	// (0x00012316) cams2_bc_adjust_pane_cp_ParamLimits

0x35aa,	// (0x00012316) cams2_bc_adjust_pane_cp

0xaa8a,	// (0x000197f6) cams2_bc_adjust_pane_ParamLimits

0xaa8a,	// (0x000197f6) cams2_bc_adjust_pane

0x9d30,	// (0x00018a9c) cams2_bc_adjust_pane_g1

0x9549,	// (0x000182b5) cams2_slider_pane

0x9d30,	// (0x00018a9c) cams2_slider_pane_g1

0x9d30,	// (0x00018a9c) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x0001e32d) cams2_slider_pane_g

0x0439,	// (0x0000f1a5) calc_display_pane_ParamLimits

0x045e,	// (0x0000f1ca) calc_paper_pane_ParamLimits

0x0481,	// (0x0000f1ed) grid_calc_pane_ParamLimits

0xa740,	// (0x000194ac) popup_clock_digital_window_t1_ParamLimits

0xac84,	// (0x000199f0) main_image_pane_t1

0x0419,	// (0x0000f185) aid_size_cell_calc_ParamLimits

0x0419,	// (0x0000f185) aid_size_cell_calc

0x30df,	// (0x00011e4b) popup_blid_sat_info2_window_ParamLimits

0x30df,	// (0x00011e4b) popup_blid_sat_info2_window

0xbfaa,	// (0x0001ad16) aid_size_cell_blid

0xbe4f,	// (0x0001abbb) bg_popup_window_pane_cp07

0xbfc7,	// (0x0001ad33) grid_popup_blid_pane

0xbfd1,	// (0x0001ad3d) heading_pane_cp05_ParamLimits

0xbfd1,	// (0x0001ad3d) heading_pane_cp05

0xc09b,	// (0x0001ae07) cell_popup_blid_pane_ParamLimits

0xc09b,	// (0x0001ae07) cell_popup_blid_pane

0xc0c5,	// (0x0001ae31) cell_popup_blid_pane_g1

0xc0cd,	// (0x0001ae39) cell_popup_blid_pane_t1

0xaa8a,	// (0x000197f6) mup2_indicator_pane_ParamLimits

0xaa8a,	// (0x000197f6) mup2_indicator_pane

0x9549,	// (0x000182b5) mup2_visualizer_osc_pane

0xbe5d,	// (0x0001abc9) mup2_visualizer_spec_pane_ParamLimits

0xbe5d,	// (0x0001abc9) mup2_visualizer_spec_pane

0x9549,	// (0x000182b5) mup2_spec_half_pane

0x9549,	// (0x000182b5) mup2_spec_half_pane_cp

0xc0db,	// (0x0001ae47) mup2_spec_bar_pane_ParamLimits

0xc0db,	// (0x0001ae47) mup2_spec_bar_pane

0x9d30,	// (0x00018a9c) mup2_spec_bar_pane_g1

0xc0fa,	// (0x0001ae66) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x0001e353) mup2_spec_bar_pane_g

0x9549,	// (0x000182b5) mup2_osc_middle_pane

0x9d30,	// (0x00018a9c) mup2_visualizer_osc_pane_g1

0x95ec,	// (0x00018358) popup_number_entry_window_t1_ParamLimits

0x95ff,	// (0x0001836b) popup_number_entry_window_t2_ParamLimits

0x9611,	// (0x0001837d) popup_number_entry_window_t3_ParamLimits

0x9623,	// (0x0001838f) popup_number_entry_window_t5_ParamLimits

0x9623,	// (0x0001838f) popup_number_entry_window_t5

0xf040,	// (0x0001ddac) popup_number_entry_window_t_ParamLimits

0x9658,	// (0x000183c4) text_title_cp2_ParamLimits

0xab7c,	// (0x000198e8) aid_hotspot_pointer_text2_pane

0xaba2,	// (0x0001990e) main_viewer_pane_g9_ParamLimits

0xaba2,	// (0x0001990e) main_viewer_pane_g9

0xa2d8,	// (0x00019044) cale_month_pane_t1_ParamLimits

0xa343,	// (0x000190af) bg_cale_pane_ParamLimits

0xa35b,	// (0x000190c7) list_cale_pane_ParamLimits

0xa36c,	// (0x000190d8) listscroll_cale_day_pane_t1

0xa37e,	// (0x000190ea) scroll_pane_cp09_ParamLimits

0x2420,	// (0x0001118c) main_mup_eq_pane_t1_ParamLimits

0x2420,	// (0x0001118c) main_mup_eq_pane_t1

0x243c,	// (0x000111a8) main_mup_eq_pane_t2_ParamLimits

0x243c,	// (0x000111a8) main_mup_eq_pane_t2

0x2458,	// (0x000111c4) main_mup_eq_pane_t3_ParamLimits

0x2458,	// (0x000111c4) main_mup_eq_pane_t3

0x2476,	// (0x000111e2) main_mup_eq_pane_t4_ParamLimits

0x2476,	// (0x000111e2) main_mup_eq_pane_t4

0x2494,	// (0x00011200) main_mup_eq_pane_t5_ParamLimits

0x2494,	// (0x00011200) main_mup_eq_pane_t5

0x24b2,	// (0x0001121e) main_mup_eq_pane_t6_ParamLimits

0x24b2,	// (0x0001121e) main_mup_eq_pane_t6

0x24c8,	// (0x00011234) main_mup_eq_pane_t7_ParamLimits

0x24c8,	// (0x00011234) main_mup_eq_pane_t7

0x24de,	// (0x0001124a) main_mup_eq_pane_t8_ParamLimits

0x24de,	// (0x0001124a) main_mup_eq_pane_t8

0x24f4,	// (0x00011260) main_mup_eq_pane_t9_ParamLimits

0x24f4,	// (0x00011260) main_mup_eq_pane_t9

0x2510,	// (0x0001127c) main_mup_eq_pane_t10_ParamLimits

0x2510,	// (0x0001127c) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0001e106) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0001e106) main_mup_eq_pane_t

0x25e5,	// (0x00011351) mup_equalizer_pane_cp5_ParamLimits

0x25fd,	// (0x00011369) mup_equalizer_pane_cp6_ParamLimits

0x2615,	// (0x00011381) mup_equalizer_pane_cp7_ParamLimits

0x9549,	// (0x000182b5) main_gallery_pane

0xbd8d,	// (0x0001aaf9) smil2_volume_pane

0xbd95,	// (0x0001ab01) smil_status_volume_pane_g1_ParamLimits

0xbda8,	// (0x0001ab14) smil_status_volume_pane_g2_ParamLimits

0xbdbb,	// (0x0001ab27) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x0001e2ac) smil_status_volume_pane_g_ParamLimits

0xbe4f,	// (0x0001abbb) bg_popup_window_pane_cp07_ParamLimits

0xbfb2,	// (0x0001ad1e) blid_firmament_pane

0x95be,	// (0x0001832a) aid_size_cell_gallery_ParamLimits

0x95be,	// (0x0001832a) aid_size_cell_gallery

0x95be,	// (0x0001832a) grid_gallery_pane_ParamLimits

0x95be,	// (0x0001832a) grid_gallery_pane

0xbe4f,	// (0x0001abbb) cell_gallery_pane_ParamLimits

0xbe4f,	// (0x0001abbb) cell_gallery_pane

0x95be,	// (0x0001832a) bg_cell_gallery_focus_pane_ParamLimits

0x95be,	// (0x0001832a) bg_cell_gallery_focus_pane

0x9cea,	// (0x00018a56) cell_gallery_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) cell_gallery_pane_g1

0x9cea,	// (0x00018a56) cell_gallery_pane_g2_ParamLimits

0x9cea,	// (0x00018a56) cell_gallery_pane_g2

0x9cea,	// (0x00018a56) cell_gallery_pane_g3_ParamLimits

0x9cea,	// (0x00018a56) cell_gallery_pane_g3

0x9cf8,	// (0x00018a64) cell_gallery_pane_g4_ParamLimits

0x9cf8,	// (0x00018a64) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x0001e358) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x0001e358) cell_gallery_pane_g

0xc104,	// (0x0001ae70) bg_cell_gallery_focus_pane_g1

0xc10c,	// (0x0001ae78) bg_cell_gallery_focus_pane_g2

0xc114,	// (0x0001ae80) bg_cell_gallery_focus_pane_g3

0xc11c,	// (0x0001ae88) bg_cell_gallery_focus_pane_g4

0xc124,	// (0x0001ae90) bg_cell_gallery_focus_pane_g5

0xc12c,	// (0x0001ae98) bg_cell_gallery_focus_pane_g6

0xc134,	// (0x0001aea0) bg_cell_gallery_focus_pane_g7

0xc13c,	// (0x0001aea8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x0001e361) bg_cell_gallery_focus_pane_g

0xc144,	// (0x0001aeb0) aid_firma_cardinal

0xc158,	// (0x0001aec4) blid_firmament_pane_t1

0xc16f,	// (0x0001aedb) blid_firmament_pane_t2

0xc186,	// (0x0001aef2) blid_firmament_pane_t3

0xc19d,	// (0x0001af09) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x0001e372) blid_firmament_pane_t

0xc1b4,	// (0x0001af20) blid_sat_info_pane

0x9d30,	// (0x00018a9c) blid_sat_info_pane_g1

0x9d30,	// (0x00018a9c) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x0001de1b) blid_sat_info_pane_g

0xc1c4,	// (0x0001af30) blid_sat_info_pane_t1

0xc1d2,	// (0x0001af3e) smil2_volume_content_pane

0xc1db,	// (0x0001af47) smil2_volume_pane_g1

0x9e43,	// (0x00018baf) smil2_volume_content_pane_g1

0xc1e3,	// (0x0001af4f) smil2_volume_content_pane_g2

0xc1ec,	// (0x0001af58) smil2_volume_content_pane_g3

0xc1f5,	// (0x0001af61) smil2_volume_content_pane_g4

0xc1fe,	// (0x0001af6a) smil2_volume_content_pane_g5

0xc207,	// (0x0001af73) smil2_volume_content_pane_g6

0xc210,	// (0x0001af7c) smil2_volume_content_pane_g7

0xc219,	// (0x0001af85) smil2_volume_content_pane_g8

0xc222,	// (0x0001af8e) smil2_volume_content_pane_g9

0xc22b,	// (0x0001af97) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x0001e37b) smil2_volume_content_pane_g

0x09e3,	// (0x0000f74f) cale_week_day_heading_pane_t1_ParamLimits

0x0a0d,	// (0x0000f779) cale_week_day_heading_pane_t2_ParamLimits

0x0a3c,	// (0x0000f7a8) cale_week_day_heading_pane_t3_ParamLimits

0x0a6b,	// (0x0000f7d7) cale_week_day_heading_pane_t4_ParamLimits

0x0a9a,	// (0x0000f806) cale_week_day_heading_pane_t5_ParamLimits

0x0acd,	// (0x0000f839) cale_week_day_heading_pane_t6_ParamLimits

0x0b04,	// (0x0000f870) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0001deb3) cale_week_day_heading_pane_t_ParamLimits

0x9f6e,	// (0x00018cda) bg_cale_side_pane_ParamLimits

0x0b2e,	// (0x0000f89a) cale_week_time_pane_t1_ParamLimits

0x0b48,	// (0x0000f8b4) cale_week_time_pane_t2_ParamLimits

0x0b62,	// (0x0000f8ce) cale_week_time_pane_t3_ParamLimits

0x0b7c,	// (0x0000f8e8) cale_week_time_pane_t4_ParamLimits

0x0b96,	// (0x0000f902) cale_week_time_pane_t5_ParamLimits

0x0bb0,	// (0x0000f91c) cale_week_time_pane_t6_ParamLimits

0x0bd0,	// (0x0000f93c) cale_week_time_pane_t7_ParamLimits

0x0bf6,	// (0x0000f962) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x0001dec2) cale_week_time_pane_t_ParamLimits

0x0c1c,	// (0x0000f988) cell_cale_week_pane_g2_ParamLimits

0x9f6e,	// (0x00018cda) bg_cale_side_pane_cp01_ParamLimits

0x1cfd,	// (0x00010a69) cale_month_week_pane_t1_ParamLimits

0x1d16,	// (0x00010a82) cale_month_week_pane_t2_ParamLimits

0x1d2f,	// (0x00010a9b) cale_month_week_pane_t3_ParamLimits

0x1d48,	// (0x00010ab4) cale_month_week_pane_t4_ParamLimits

0x1d61,	// (0x00010acd) cale_month_week_pane_t5_ParamLimits

0x1d7a,	// (0x00010ae6) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0001df90) cale_month_week_pane_t_ParamLimits

0xa2ea,	// (0x00019056) cell_cale_month_pane_g1_ParamLimits

0x9549,	// (0x000182b5) main_cale_event_viewer_pane

0x9549,	// (0x000182b5) listscroll_cale_event_viewer_pane

0xc234,	// (0x0001afa0) list_cale_ev_pane

0xc23c,	// (0x0001afa8) scroll_pane_cp023

0x36c8,	// (0x00012434) field_cale_ev_pane_ParamLimits

0x36c8,	// (0x00012434) field_cale_ev_pane

0xc248,	// (0x0001afb4) field_cale_ev_content_pane_ParamLimits

0xc248,	// (0x0001afb4) field_cale_ev_content_pane

0xc254,	// (0x0001afc0) field_cale_ev_pane_g1_ParamLimits

0xc254,	// (0x0001afc0) field_cale_ev_pane_g1

0xc260,	// (0x0001afcc) field_cale_ev_pane_g2_ParamLimits

0xc260,	// (0x0001afcc) field_cale_ev_pane_g2

0xc278,	// (0x0001afe4) field_cale_ev_pane_g3_ParamLimits

0xc278,	// (0x0001afe4) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x0001e390) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x0001e390) field_cale_ev_pane_g

0xc290,	// (0x0001affc) field_cale_ev_pane_t1_ParamLimits

0xc290,	// (0x0001affc) field_cale_ev_pane_t1

0x36ec,	// (0x00012458) field_cale_ev_content_pane_t1_ParamLimits

0x36ec,	// (0x00012458) field_cale_ev_content_pane_t1

0xab2f,	// (0x0001989b) bg_button_pane_cp01

0x069b,	// (0x0000f407) listscroll_cale_week_pane_ParamLimits

0x9f36,	// (0x00018ca2) popup_toolbar_window_cp01

0x9f3f,	// (0x00018cab) listscroll_cale_week_pane_t1_ParamLimits

0x069b,	// (0x0000f407) listscroll_cale_day_pane_ParamLimits

0x9f36,	// (0x00018ca2) popup_toolbar_window_cp02

0xa36c,	// (0x000190d8) listscroll_cale_day_pane_t1_ParamLimits

0x069b,	// (0x0000f407) main_cale_month_pane_ParamLimits

0xbd0b,	// (0x0001aa77) popup_toolbar_window_cp03_ParamLimits

0xbd0b,	// (0x0001aa77) popup_toolbar_window_cp03

0x29ca,	// (0x00011736) main_image_pane_g2_ParamLimits

0x29ca,	// (0x00011736) main_image_pane_g2

0x29db,	// (0x00011747) main_image_pane_g3_ParamLimits

0x29db,	// (0x00011747) main_image_pane_g3

0x0002,

0xf42c,	// (0x0001e198) main_image_pane_g_ParamLimits

0xf42c,	// (0x0001e198) main_image_pane_g

0xac84,	// (0x000199f0) main_image_pane_t1_ParamLimits

0x29ec,	// (0x00011758) main_image_pane_t2_ParamLimits

0x29ec,	// (0x00011758) main_image_pane_t2

0x29fe,	// (0x0001176a) main_image_pane_t3_ParamLimits

0x29fe,	// (0x0001176a) main_image_pane_t3

0x2a26,	// (0x00011792) main_image_pane_t4_ParamLimits

0x2a26,	// (0x00011792) main_image_pane_t4

0x0003,

0xf433,	// (0x0001e19f) main_image_pane_t_ParamLimits

0xf433,	// (0x0001e19f) main_image_pane_t

0x2a46,	// (0x000117b2) popup_image_details_window_cp01

0x2a50,	// (0x000117bc) popup_toobar_trans_pane_cp01_ParamLimits

0x2a50,	// (0x000117bc) popup_toobar_trans_pane_cp01

0x31d2,	// (0x00011f3e) popup_image_details_window_ParamLimits

0x31d2,	// (0x00011f3e) popup_image_details_window

0xbcdc,	// (0x0001aa48) popup_image_focus_window

0xbe11,	// (0x0001ab7d) camera2_autofocus_pane_ParamLimits

0xbe11,	// (0x0001ab7d) camera2_autofocus_pane

0x9549,	// (0x000182b5) bg_popup_sub_pane_cp06

0xc2a7,	// (0x0001b013) popup_image_focus_window_g1

0xc2af,	// (0x0001b01b) popup_image_focus_window_g2

0xc2b7,	// (0x0001b023) popup_image_focus_window_g3

0xc2bf,	// (0x0001b02b) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x0001e397) popup_image_focus_window_g

0xc2c7,	// (0x0001b033) popup_image_focus_window_t1

0xc2d5,	// (0x0001b041) popup_image_focus_window_t2

0xc2e5,	// (0x0001b051) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x0001e3a0) popup_image_focus_window_t

0x9cea,	// (0x00018a56) camera2_autofocus_pane_g1

0x95be,	// (0x0001832a) bg_tb_trans_pane_cp01

0xc2f3,	// (0x0001b05f) popup_image_details_window_g1

0xc306,	// (0x0001b072) popup_image_details_window_g2

0x0002,

0xf646,	// (0x0001e3b2) popup_image_details_window_g

0xc32f,	// (0x0001b09b) popup_image_details_window_t1

0xc341,	// (0x0001b0ad) popup_image_details_window_t2

0xc35a,	// (0x0001b0c6) popup_image_details_window_t3

0xc36e,	// (0x0001b0da) popup_image_details_window_t4

0xc389,	// (0x0001b0f5) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x0001e3b9) popup_image_details_window_t

0x9d7a,	// (0x00018ae6) bg_calc_paper_pane_ParamLimits

0x9549,	// (0x000182b5) grid_highlight_pane_cp013

0x9d8e,	// (0x00018afa) list_calc_pane_ParamLimits

0x9da0,	// (0x00018b0c) scroll_pane_cp024

0x9da8,	// (0x00018b14) bg_calc_display_pane_ParamLimits

0x04c3,	// (0x0000f22f) calc_display_pane_t1_ParamLimits

0x04d8,	// (0x0000f244) calc_display_pane_t2_ParamLimits

0x9db4,	// (0x00018b20) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0001de33) calc_display_pane_t_ParamLimits

0x05a6,	// (0x0000f312) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0001de50) cell_calc_pane_g

0x05af,	// (0x0000f31b) cell_calc_pane_t1

0x9e21,	// (0x00018b8d) grid_highlight_pane_cp02_ParamLimits

0x9e37,	// (0x00018ba3) toolbar_button_pane_cp01_ParamLimits

0x9e37,	// (0x00018ba3) toolbar_button_pane_cp01

0xacc9,	// (0x00019a35) temp_image_control_pane_ParamLimits

0xacc9,	// (0x00019a35) temp_image_control_pane

0x95be,	// (0x0001832a) main_mp3_pane

0xc3a3,	// (0x0001b10f) temp_image_control_pane_g1_ParamLimits

0xc3a3,	// (0x0001b10f) temp_image_control_pane_g1

0xc3b1,	// (0x0001b11d) temp_image_control_pane_g2_ParamLimits

0xc3b1,	// (0x0001b11d) temp_image_control_pane_g2

0xc3c3,	// (0x0001b12f) temp_image_control_pane_g3_ParamLimits

0xc3c3,	// (0x0001b12f) temp_image_control_pane_g3

0x370d,	// (0x00012479) temp_image_control_pane_g4_ParamLimits

0x370d,	// (0x00012479) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x0001e3c4) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x0001e3c4) temp_image_control_pane_g

0xc3a3,	// (0x0001b10f) main_mp3_pane_g1

0x3720,	// (0x0001248c) main_mp3_pane_g2

0x0007,

0xf661,	// (0x0001e3cd) main_mp3_pane_g

0xc3f8,	// (0x0001b164) main_mp3_pane_t1

0x9cf8,	// (0x00018a64) main_camera_pane_g8_ParamLimits

0x9cf8,	// (0x00018a64) main_camera_pane_g8

0x0df3,	// (0x0000fb5f) main_video_pane_g7_ParamLimits

0x0df3,	// (0x0000fb5f) main_video_pane_g7

0x9d4e,	// (0x00018aba) main_camera2_pane_t7_ParamLimits

0x9d4e,	// (0x00018aba) main_camera2_pane_t7

0xa0f6,	// (0x00018e62) scroll_pane_cp025_ParamLimits

0xa0f6,	// (0x00018e62) scroll_pane_cp025

0xa10a,	// (0x00018e76) scroll_pane_cp026_ParamLimits

0xa10a,	// (0x00018e76) scroll_pane_cp026

0xa119,	// (0x00018e85) wml_content_pane_ParamLimits

0x9549,	// (0x000182b5) main_touch_calib_pane

0x37f2,	// (0x0001255e) main_touch_calib_pane_g1

0x3804,	// (0x00012570) main_touch_calib_pane_g2

0x3816,	// (0x00012582) main_touch_calib_pane_g3

0x3828,	// (0x00012594) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x0001e3eb) main_touch_calib_pane_g

0x383a,	// (0x000125a6) main_touch_calib_pane_t1

0x3854,	// (0x000125c0) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x0001e3f4) main_touch_calib_pane_t

0xa8e0,	// (0x0001964c) mup_progress_pane_cp02

0xa8ff,	// (0x0001966b) navi_pane_g1

0xa961,	// (0x000196cd) navi_pane_mp_t3

0x95be,	// (0x0001832a) main_mp3_pane_ParamLimits

0x338b,	// (0x000120f7) navi_pane_ParamLimits

0xc3a3,	// (0x0001b10f) main_mp3_pane_g1_ParamLimits

0x3720,	// (0x0001248c) main_mp3_pane_g2_ParamLimits

0x372c,	// (0x00012498) main_mp3_pane_g3_ParamLimits

0x372c,	// (0x00012498) main_mp3_pane_g3

0x373a,	// (0x000124a6) main_mp3_pane_g4_ParamLimits

0x373a,	// (0x000124a6) main_mp3_pane_g4

0x9cea,	// (0x00018a56) main_mp3_pane_g5_ParamLimits

0x9cea,	// (0x00018a56) main_mp3_pane_g5

0xc3d3,	// (0x0001b13f) main_mp3_pane_g6_ParamLimits

0xc3d3,	// (0x0001b13f) main_mp3_pane_g6

0xc3e0,	// (0x0001b14c) main_mp3_pane_g7_ParamLimits

0xc3e0,	// (0x0001b14c) main_mp3_pane_g7

0xc3ec,	// (0x0001b158) main_mp3_pane_g8_ParamLimits

0xc3ec,	// (0x0001b158) main_mp3_pane_g8

0xf661,	// (0x0001e3cd) main_mp3_pane_g_ParamLimits

0x3746,	// (0x000124b2) main_mp3_pane_t2

0x3754,	// (0x000124c0) main_mp3_pane_t3

0xc406,	// (0x0001b172) main_mp3_pane_t4

0xc414,	// (0x0001b180) main_mp3_pane_t5

0x0005,

0xf672,	// (0x0001e3de) main_mp3_pane_t

0xc422,	// (0x0001b18e) mup_progress_pane_cp01

0x9567,	// (0x000182d3) aid_zoom_text_secondary2

0xc234,	// (0x0001afa0) list_cale_ev2_pane

0xc23c,	// (0x0001afa8) scroll_pane_cp023_ParamLimits

0x38ae,	// (0x0001261a) field_cale_ev2_pane_ParamLimits

0x38ae,	// (0x0001261a) field_cale_ev2_pane

0x38d2,	// (0x0001263e) field_cale_ev2_pane_g1_ParamLimits

0x38d2,	// (0x0001263e) field_cale_ev2_pane_g1

0x38de,	// (0x0001264a) field_cale_ev2_pane_g2_ParamLimits

0x38de,	// (0x0001264a) field_cale_ev2_pane_g2

0x38f6,	// (0x00012662) field_cale_ev2_pane_g3_ParamLimits

0x38f6,	// (0x00012662) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x0001e3ff) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x0001e3ff) field_cale_ev2_pane_g

0x390e,	// (0x0001267a) field_cale_ev2_pane_t1_ParamLimits

0x390e,	// (0x0001267a) field_cale_ev2_pane_t1

0x3925,	// (0x00012691) field_cale_ev2_pane_t2_ParamLimits

0x3925,	// (0x00012691) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x0001e408) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x0001e408) field_cale_ev2_pane_t

0x288a,	// (0x000115f6) main_postcard_pane_g5_ParamLimits

0x288a,	// (0x000115f6) main_postcard_pane_g5

0x28a0,	// (0x0001160c) main_postcard_pane_g6_ParamLimits

0x28a0,	// (0x0001160c) main_postcard_pane_g6

0x95be,	// (0x0001832a) camera2_autofocus_pane_cp_ParamLimits

0x95be,	// (0x0001832a) camera2_autofocus_pane_cp

0x95be,	// (0x0001832a) main_mup3_pane

0x3984,	// (0x000126f0) main_mup3_pane_g1_ParamLimits

0x3984,	// (0x000126f0) main_mup3_pane_g1

0x39a6,	// (0x00012712) main_mup3_pane_g2_ParamLimits

0x39a6,	// (0x00012712) main_mup3_pane_g2

0x3a21,	// (0x0001278d) main_mup3_pane_g3_ParamLimits

0x3a21,	// (0x0001278d) main_mup3_pane_g3

0x3a8b,	// (0x000127f7) main_mup3_pane_g4_ParamLimits

0x3a8b,	// (0x000127f7) main_mup3_pane_g4

0x3af5,	// (0x00012861) main_mup3_pane_g5_ParamLimits

0x3af5,	// (0x00012861) main_mup3_pane_g5

0x3b5f,	// (0x000128cb) main_mup3_pane_g6_ParamLimits

0x3b5f,	// (0x000128cb) main_mup3_pane_g6

0x9cf8,	// (0x00018a64) main_mup3_pane_g7_ParamLimits

0x9cf8,	// (0x00018a64) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x0001e418) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x0001e418) main_mup3_pane_g

0x3be3,	// (0x0001294f) main_mup3_pane_t1_ParamLimits

0x3be3,	// (0x0001294f) main_mup3_pane_t1

0x3c4d,	// (0x000129b9) main_mup3_pane_t2_ParamLimits

0x3c4d,	// (0x000129b9) main_mup3_pane_t2

0x3d23,	// (0x00012a8f) main_mup3_pane_t4_ParamLimits

0x3d23,	// (0x00012a8f) main_mup3_pane_t4

0x3d81,	// (0x00012aed) main_mup3_pane_t5_ParamLimits

0x3d81,	// (0x00012aed) main_mup3_pane_t5

0x3e49,	// (0x00012bb5) main_mup3_pane_t6_ParamLimits

0x3e49,	// (0x00012bb5) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x0001e429) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x0001e429) main_mup3_pane_t

0x3f01,	// (0x00012c6d) mup3_progress_pane_ParamLimits

0x3f01,	// (0x00012c6d) mup3_progress_pane

0x3f99,	// (0x00012d05) popup_mup3_control_window_ParamLimits

0x3f99,	// (0x00012d05) popup_mup3_control_window

0xc436,	// (0x0001b1a2) popup_mup3_text_window

0x3fcf,	// (0x00012d3b) mup3_progress_pane_t1

0x3fee,	// (0x00012d5a) mup3_progress_pane_t2

0xc43e,	// (0x0001b1aa) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x0001e436) mup3_progress_pane_t

0xc45b,	// (0x0001b1c7) mup_progress_pane_cp03

0x9549,	// (0x000182b5) bg_tb_trans_pane_cp04

0x400d,	// (0x00012d79) mup3_volume_pane

0x4015,	// (0x00012d81) popup_mup3_control_window_g1

0x401e,	// (0x00012d8a) mup3_volume_pane_g1

0x4027,	// (0x00012d93) mup3_volume_pane_g2

0x4030,	// (0x00012d9c) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x0001e43d) mup3_volume_pane_g

0x9549,	// (0x000182b5) bg_tb_trans_pane_cp03

0xc46b,	// (0x0001b1d7) popup_mup3_text_window_g1

0xc473,	// (0x0001b1df) popup_mup3_text_window_t1

0x9e02,	// (0x00018b6e) list_calc_item_pane_g1_ParamLimits

0xbf28,	// (0x0001ac94) mup_volume_pane_cp_g1

0x386e,	// (0x000125da) main_touch_calib_pane_t3

0x3882,	// (0x000125ee) main_touch_calib_pane_t4

0x3898,	// (0x00012604) main_touch_calib_pane_t5

0x9553,	// (0x000182bf) aid_cell_size_toolbar2

0x955b,	// (0x000182c7) aid_popup3_width_pane

0x9567,	// (0x000182d3) aid_zoom_text_msg_primary

0x0ccc,	// (0x0000fa38) vorec_t7

0x9dc6,	// (0x00018b32) bg_calc_paper_pane_g1_ParamLimits

0x9dd2,	// (0x00018b3e) bg_calc_paper_pane_g2_ParamLimits

0x9dde,	// (0x00018b4a) bg_calc_paper_pane_g3_ParamLimits

0x9dea,	// (0x00018b56) bg_calc_paper_pane_g4_ParamLimits

0x9df6,	// (0x00018b62) bg_calc_paper_pane_g5_ParamLimits

0x0528,	// (0x0000f294) bg_calc_paper_pane_g6_ParamLimits

0x053b,	// (0x0000f2a7) bg_calc_paper_pane_g7_ParamLimits

0x054e,	// (0x0000f2ba) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x0001de3a) bg_calc_paper_pane_g_ParamLimits

0x0561,	// (0x0000f2cd) calc_bg_paper_pane_g9_ParamLimits

0x95be,	// (0x0001832a) image_qvga_pane_ParamLimits

0x95be,	// (0x0001832a) image_qvga_pane

0x9c6f,	// (0x000189db) bg_popup_sub_pane_cp04_ParamLimits

0xac00,	// (0x0001996c) popup_mup_playback_window_g1_ParamLimits

0xac0c,	// (0x00019978) popup_mup_playback_window_t1_ParamLimits

0xac21,	// (0x0001998d) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x0001e193) popup_mup_playback_window_t_ParamLimits

0x9cf8,	// (0x00018a64) main_mup2_pane_g3_ParamLimits

0x9cf8,	// (0x00018a64) main_mup2_pane_g3

0x0f9b,	// (0x0000fd07) popup_toolbar_window_cp04

0xafa5,	// (0x00019d11) popup_call2_audio_second_window_g3_ParamLimits

0xafa5,	// (0x00019d11) popup_call2_audio_second_window_g3

0xb3bd,	// (0x0001a129) popup_call2_audio_first_window_g4_ParamLimits

0xb3bd,	// (0x0001a129) popup_call2_audio_first_window_g4

0xb9e4,	// (0x0001a750) popup_call2_audio_in_window_g4_ParamLimits

0xb9e4,	// (0x0001a750) popup_call2_audio_in_window_g4

0x29ac,	// (0x00011718) aid_area_sk_bg_cut_ParamLimits

0x29ac,	// (0x00011718) aid_area_sk_bg_cut

0xac36,	// (0x000199a2) aid_area_sk_bg_cut_2_ParamLimits

0xac36,	// (0x000199a2) aid_area_sk_bg_cut_2

0x9549,	// (0x000182b5) aid_placing_details_win

0x9549,	// (0x000182b5) aid_placing_details_win_2

0x9cea,	// (0x00018a56) camera2_autofocus_pane_g1_ParamLimits

0x033e,	// (0x0000f0aa) popup_fixed_preview_cale_window_ParamLimits

0x033e,	// (0x0000f0aa) popup_fixed_preview_cale_window

0xa9b1,	// (0x0001971d) navi_slider_pane_g3

0xa9ba,	// (0x00019726) navi_slider_pane_g4

0xa9c3,	// (0x0001972f) navi_slider_pane_g5

0xa9b1,	// (0x0001971d) navi_slider_pane_g6

0xa9cc,	// (0x00019738) navi_slider_pane_g7

0xaafc,	// (0x00019868) mup_scale_pane_g3

0xab05,	// (0x00019871) mup_scale_pane_g4

0xab0e,	// (0x0001987a) mup_scale_pane_g5

0x262d,	// (0x00011399) mup_scale_pane_g6

0x2636,	// (0x000113a2) mup_scale_pane_g7

0x9d30,	// (0x00018a9c) cams2_slider_pane_g3

0x9d30,	// (0x00018a9c) cams2_slider_pane_g4

0x9d30,	// (0x00018a9c) cams2_slider_pane_g5

0x9d30,	// (0x00018a9c) cams2_slider_pane_g6

0x9d30,	// (0x00018a9c) cams2_slider_pane_g7

0x9d30,	// (0x00018a9c) camera2_autofocus_pane_cp_g1

0xbcbc,	// (0x0001aa28) bg_popup_preview_window_pane_cp02_ParamLimits

0xbcbc,	// (0x0001aa28) bg_popup_preview_window_pane_cp02

0xc481,	// (0x0001b1ed) list_fp_cale_pane_ParamLimits

0xc481,	// (0x0001b1ed) list_fp_cale_pane

0xc48d,	// (0x0001b1f9) popup_fixed_preview_cale_window_t1_ParamLimits

0xc48d,	// (0x0001b1f9) popup_fixed_preview_cale_window_t1

0x4039,	// (0x00012da5) popup_fixed_preview_cale_window_t2_ParamLimits

0x4039,	// (0x00012da5) popup_fixed_preview_cale_window_t2

0x404e,	// (0x00012dba) popup_fixed_preview_cale_window_t3_ParamLimits

0x404e,	// (0x00012dba) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x0001e444) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x0001e444) popup_fixed_preview_cale_window_t

0x4065,	// (0x00012dd1) list_single_fp_cale_pane_ParamLimits

0x4065,	// (0x00012dd1) list_single_fp_cale_pane

0xc4ab,	// (0x0001b217) list_single_fp_cale_pane_g1_ParamLimits

0xc4ab,	// (0x0001b217) list_single_fp_cale_pane_g1

0xc4b7,	// (0x0001b223) list_single_fp_cale_pane_g2_ParamLimits

0xc4b7,	// (0x0001b223) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x0001e44b) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x0001e44b) list_single_fp_cale_pane_g

0xc4d0,	// (0x0001b23c) list_single_fp_cale_pane_t1_ParamLimits

0xc4d0,	// (0x0001b23c) list_single_fp_cale_pane_t1

0xc4e2,	// (0x0001b24e) list_single_fp_cale_pane_t2_ParamLimits

0xc4e2,	// (0x0001b24e) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x0001e452) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x0001e452) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9549,	// (0x000182b5) main_dialer_pane

0x9549,	// (0x000182b5) aid_cell_size_keypad

0x9549,	// (0x000182b5) dialer_ne_pane

0x9549,	// (0x000182b5) grid_dialer_command_1_pane

0x9549,	// (0x000182b5) grid_dialer_command_2_pane

0x9549,	// (0x000182b5) grid_dialer_keypad_pane

0x407a,	// (0x00012de6) bg_popup_call_pane_cp06_ParamLimits

0x407a,	// (0x00012de6) bg_popup_call_pane_cp06

0x407a,	// (0x00012de6) dialer_ne_clear_pane_ParamLimits

0x407a,	// (0x00012de6) dialer_ne_clear_pane

0x9d30,	// (0x00018a9c) dialer_ne_pane_g1

0x9d4e,	// (0x00018aba) dialer_ne_pane_t1_ParamLimits

0x9d4e,	// (0x00018aba) dialer_ne_pane_t1

0x4088,	// (0x00012df4) dialer_ne_pane_t2_ParamLimits

0x4088,	// (0x00012df4) dialer_ne_pane_t2

0x40b0,	// (0x00012e1c) dialer_ne_pane_t3_ParamLimits

0x40b0,	// (0x00012e1c) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x0001e457) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x0001e457) dialer_ne_pane_t

0x40b0,	// (0x00012e1c) dialer_ne_pane_t3_copy1_ParamLimits

0x40b0,	// (0x00012e1c) dialer_ne_pane_t3_copy1

0xc515,	// (0x0001b281) cell_dialer_keypad_pane_ParamLimits

0xc515,	// (0x0001b281) cell_dialer_keypad_pane

0x95be,	// (0x0001832a) cell_dialer_command_1_pane_ParamLimits

0x95be,	// (0x0001832a) cell_dialer_command_1_pane

0xc52c,	// (0x0001b298) cell_dialer_command_2_pane_ParamLimits

0xc52c,	// (0x0001b298) cell_dialer_command_2_pane

0x95be,	// (0x0001832a) bg_button_pane_cp02_ParamLimits

0x95be,	// (0x0001832a) bg_button_pane_cp02

0x9cea,	// (0x00018a56) cell_dialer_keypad_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) cell_dialer_keypad_pane_g1

0x95be,	// (0x0001832a) bg_button_pane_cp03_ParamLimits

0x95be,	// (0x0001832a) bg_button_pane_cp03

0x9cea,	// (0x00018a56) cell_dialer_command_1_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) cell_dialer_command_1_pane_g1

0x9549,	// (0x000182b5) bg_button_pane_cp04

0x9d30,	// (0x00018a9c) cell_dialer_command_2_pane_g1

0x9549,	// (0x000182b5) bg_button_pane_cp06

0x9d30,	// (0x00018a9c) dialer_ne_clear_pane_g1

0x233c,	// (0x000110a8) navi_pane_g2

0x236a,	// (0x000110d6) navi_pane_g3

0x0002,

0xf32f,	// (0x0001e09b) navi_pane_g

0x2395,	// (0x00011101) navi_pane_mv_g2

0x23bc,	// (0x00011128) navi_pane_mv_g5

0x23c4,	// (0x00011130) navi_pane_mv_t1

0x9da8,	// (0x00018b14) main_clock2_pane

0x95be,	// (0x0001832a) main_clock2_list_pane_ParamLimits

0x95be,	// (0x0001832a) main_clock2_list_pane

0x4141,	// (0x00012ead) main_clock2_pane_t1_ParamLimits

0x4141,	// (0x00012ead) main_clock2_pane_t1

0x417c,	// (0x00012ee8) main_clock2_pane_t2_ParamLimits

0x417c,	// (0x00012ee8) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x0001e463) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x0001e463) main_clock2_pane_t

0x421b,	// (0x00012f87) popup_clock_analogue_window_cp03_ParamLimits

0x421b,	// (0x00012f87) popup_clock_analogue_window_cp03

0x4240,	// (0x00012fac) popup_clock_digital_window_cp02_ParamLimits

0x4240,	// (0x00012fac) popup_clock_digital_window_cp02

0x42b9,	// (0x00013025) main_clock2_list_single_pane_ParamLimits

0x42b9,	// (0x00013025) main_clock2_list_single_pane

0x9fc9,	// (0x00018d35) list_highlight_pane_cp05

0xc56d,	// (0x0001b2d9) main_clock2_list_single_pane_t1

0x0f9b,	// (0x0000fd07) popup_toolbar_window_cp04_ParamLimits

0x9cf8,	// (0x00018a64) camera2_autofocus_pane_g2_ParamLimits

0x9cf8,	// (0x00018a64) camera2_autofocus_pane_g2

0x9cf8,	// (0x00018a64) camera2_autofocus_pane_g3_ParamLimits

0x9cf8,	// (0x00018a64) camera2_autofocus_pane_g3

0x9cf8,	// (0x00018a64) camera2_autofocus_pane_g4_ParamLimits

0x9cf8,	// (0x00018a64) camera2_autofocus_pane_g4

0x9cf8,	// (0x00018a64) camera2_autofocus_pane_g5_ParamLimits

0x9cf8,	// (0x00018a64) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x0001e3a7) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x0001e3a7) camera2_autofocus_pane_g

0x393a,	// (0x000126a6) camera2_autofocus_pane_cp_g2

0x3942,	// (0x000126ae) camera2_autofocus_pane_cp_g3

0x394a,	// (0x000126b6) camera2_autofocus_pane_cp_g4

0x3952,	// (0x000126be) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x0001e40d) camera2_autofocus_pane_cp_g

0x9549,	// (0x000182b5) popup_dialer_spcha_window

0x9549,	// (0x000182b5) bg_popup_sub_pane_cp07

0x9549,	// (0x000182b5) list_spcha_pane

0xc57b,	// (0x0001b2e7) list_single_spcha_pane_ParamLimits

0xc57b,	// (0x0001b2e7) list_single_spcha_pane

0x9549,	// (0x000182b5) list_highlight_pane_cp06

0xa567,	// (0x000192d3) list_single_spcha_pane_t1

0xb78e,	// (0x0001a4fa) popup_call2_audio_out_window_g4_ParamLimits

0xb78e,	// (0x0001a4fa) popup_call2_audio_out_window_g4

0x9549,	// (0x000182b5) main_imed2_pane

0xbce6,	// (0x0001aa52) popup_imed_adjust2_window

0x31ea,	// (0x00011f56) popup_imed_trans_window_ParamLimits

0x31ea,	// (0x00011f56) popup_imed_trans_window

0xbffd,	// (0x0001ad69) popup_blid_sat_info2_window_t1

0xc00b,	// (0x0001ad77) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x0001e33c) popup_blid_sat_info2_window_t

0x4374,	// (0x000130e0) aid_size_cell_colour_35

0x4394,	// (0x00013100) aid_size_cell_colour_112

0x43b4,	// (0x00013120) aid_size_cell_effect

0xaa8a,	// (0x000197f6) bg_tb_trans_pane_cp02

0xa48c,	// (0x000191f8) heading_imed_pane

0x43d4,	// (0x00013140) listscroll_imed_pane

0xc58d,	// (0x0001b2f9) heading_imed_pane_g1

0xc595,	// (0x0001b301) heading_imed_pane_t1

0xc5a3,	// (0x0001b30f) grid_imed_colour_35_pane_ParamLimits

0xc5a3,	// (0x0001b30f) grid_imed_colour_35_pane

0x43e0,	// (0x0001314c) grid_imed_effect_pane

0xc5bf,	// (0x0001b32b) list_imed_aspect_pane

0x43f7,	// (0x00013163) scroll_pane_cp027_ParamLimits

0x43f7,	// (0x00013163) scroll_pane_cp027

0x4408,	// (0x00013174) cell_imed_effect_pane_ParamLimits

0x4408,	// (0x00013174) cell_imed_effect_pane

0xc5c7,	// (0x0001b333) cell_imed_colour_pane_ParamLimits

0xc5c7,	// (0x0001b333) cell_imed_colour_pane

0xc611,	// (0x0001b37d) cell_imed_colour_pane_g1_ParamLimits

0xc611,	// (0x0001b37d) cell_imed_colour_pane_g1

0xc622,	// (0x0001b38e) hgihlgiht_grid_pane_cp016_ParamLimits

0xc622,	// (0x0001b38e) hgihlgiht_grid_pane_cp016

0x4433,	// (0x0001319f) cell_imed_effect_pane_g1

0x443b,	// (0x000131a7) grid_highlight_pane_cp017

0xc633,	// (0x0001b39f) list_imed_single_pane_ParamLimits

0xc633,	// (0x0001b39f) list_imed_single_pane

0x9549,	// (0x000182b5) list_highlight_pane_cp07

0xc647,	// (0x0001b3b3) list_imed_aspect_pane_comp1_t1

0xaa8a,	// (0x000197f6) bg_tb_trans_pane_cp05

0xc669,	// (0x0001b3d5) popup_imed_adjust2_window_g1

0xc690,	// (0x0001b3fc) popup_imed_adjust2_window_t1

0xc6a8,	// (0x0001b414) slider_imed_adjust_pane

0xc6bc,	// (0x0001b428) slider_imed_adjust_pane_g1

0xc6cc,	// (0x0001b438) slider_imed_adjust_pane_g2

0xc6dc,	// (0x0001b448) slider_imed_adjust_pane_g3

0xc6ed,	// (0x0001b459) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x0001e480) slider_imed_adjust_pane_g

0x4444,	// (0x000131b0) aid_size_cell_clipart2

0xc6fe,	// (0x0001b46a) grid_imed_clipart_pane

0xab1f,	// (0x0001988b) scroll_pane_cp031

0x4450,	// (0x000131bc) cell_imed_clipart_pane_ParamLimits

0x4450,	// (0x000131bc) cell_imed_clipart_pane

0x446d,	// (0x000131d9) cell_imed_clipart_pane_g1

0x9549,	// (0x000182b5) grid_highlight_pane_cp014

0x411f,	// (0x00012e8b) main_clock2_pane_g1_ParamLimits

0x411f,	// (0x00012e8b) main_clock2_pane_g1

0x4260,	// (0x00012fcc) aid_call2_pane_cp10

0x4272,	// (0x00012fde) aid_call_pane_cp10

0xa8d4,	// (0x00019640) popup_clock_analogue_window_cp10_g1

0xa8d4,	// (0x00019640) popup_clock_analogue_window_cp10_g2

0x4284,	// (0x00012ff0) popup_clock_analogue_window_cp10_g3

0x4284,	// (0x00012ff0) popup_clock_analogue_window_cp10_g4

0xa8d4,	// (0x00019640) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x0001e46e) popup_clock_analogue_window_cp10_g

0x429a,	// (0x00013006) popup_clock_analogue_window_cp10_t1

0x42cb,	// (0x00013037) clock_digital_number_pane_cp10_ParamLimits

0x42cb,	// (0x00013037) clock_digital_number_pane_cp10

0x42e5,	// (0x00013051) clock_digital_number_pane_cp11_ParamLimits

0x42e5,	// (0x00013051) clock_digital_number_pane_cp11

0x42ff,	// (0x0001306b) clock_digital_number_pane_cp12_ParamLimits

0x42ff,	// (0x0001306b) clock_digital_number_pane_cp12

0x431b,	// (0x00013087) clock_digital_number_pane_cp13_ParamLimits

0x431b,	// (0x00013087) clock_digital_number_pane_cp13

0x4337,	// (0x000130a3) clock_digital_separator_pane_cp10_ParamLimits

0x4337,	// (0x000130a3) clock_digital_separator_pane_cp10

0x4353,	// (0x000130bf) popup_clock_digital_window_cp02_t1_ParamLimits

0x4353,	// (0x000130bf) popup_clock_digital_window_cp02_t1

0x9c67,	// (0x000189d3) clock_digital_number_pane_cp10_g1

0x9c67,	// (0x000189d3) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x0001e489) clock_digital_number_pane_cp10_g

0x9c67,	// (0x000189d3) clock_digital_separator_pane_cp10_g1

0x9c67,	// (0x000189d3) clock_digital_separator_pane_g2_cp10

0xa96f,	// (0x000196db) navi_pane_vded_g4

0xa978,	// (0x000196e4) navi_pane_vded_g5

0xa981,	// (0x000196ed) navi_pane_vded_t1

0x9549,	// (0x000182b5) main_vded_pane

0x4476,	// (0x000131e2) main_vded_pane_g1

0x4482,	// (0x000131ee) main_vded_pane_g2

0x448e,	// (0x000131fa) main_vded_pane_g3

0x0002,

0xf722,	// (0x0001e48e) main_vded_pane_g

0x449a,	// (0x00013206) main_vded_pane_t1

0x44a8,	// (0x00013214) main_vded_pane_t2

0x0001,

0xf729,	// (0x0001e495) main_vded_pane_t

0x44b6,	// (0x00013222) vded_slider_pane

0x44c0,	// (0x0001322c) vded_video_pane

0xc708,	// (0x0001b474) vded_video_pane_g1

0x44cc,	// (0x00013238) vded_video_pane_g2

0x9d30,	// (0x00018a9c) vded_video_pane_g3

0x0002,

0xf72e,	// (0x0001e49a) vded_video_pane_g

0xc712,	// (0x0001b47e) vded_slider_pane_g1

0xbf28,	// (0x0001ac94) vded_slider_pane_g2

0xc71b,	// (0x0001b487) vded_slider_pane_g3

0xc724,	// (0x0001b490) vded_slider_pane_g4

0xc72d,	// (0x0001b499) vded_slider_pane_g5

0x0004,

0xf735,	// (0x0001e4a1) vded_slider_pane_g

0x3f83,	// (0x00012cef) mup3_rocker_pane_ParamLimits

0x3f83,	// (0x00012cef) mup3_rocker_pane

0x44d5,	// (0x00013241) mup3_control_keys_pane_g1

0x44dd,	// (0x00013249) mup3_control_keys_pane_g2

0x44e5,	// (0x00013251) mup3_control_keys_pane_g3

0x44ed,	// (0x00013259) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x0001e4ac) mup3_control_keys_pane_g

0x0373,	// (0x0000f0df) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0373,	// (0x0000f0df) popup_toolbar2_fixed_window_cp01

0x3fb9,	// (0x00012d25) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3fb9,	// (0x00012d25) popup_toolbar2_fixed_window_cp02

0xb117,	// (0x00019e83) popup_call2_audio_second_window_t4_ParamLimits

0xb117,	// (0x00019e83) popup_call2_audio_second_window_t4

0xb653,	// (0x0001a3bf) popup_call2_audio_first_window_t6_ParamLimits

0xb653,	// (0x0001a3bf) popup_call2_audio_first_window_t6

0xb891,	// (0x0001a5fd) popup_call2_audio_out_window_t6_ParamLimits

0xb891,	// (0x0001a5fd) popup_call2_audio_out_window_t6

0x9549,	// (0x000182b5) main_vitu_pane

0x95be,	// (0x0001832a) aid_size_cell_itu_ParamLimits

0x95be,	// (0x0001832a) aid_size_cell_itu

0x95be,	// (0x0001832a) bg_popup_window_pane_cp08_ParamLimits

0x95be,	// (0x0001832a) bg_popup_window_pane_cp08

0x95be,	// (0x0001832a) field_vitu_entry_pane_ParamLimits

0x95be,	// (0x0001832a) field_vitu_entry_pane

0x95be,	// (0x0001832a) grid_vitu_function_pane_ParamLimits

0x95be,	// (0x0001832a) grid_vitu_function_pane

0x95be,	// (0x0001832a) grid_vitu_itu_pane_ParamLimits

0x95be,	// (0x0001832a) grid_vitu_itu_pane

0x95be,	// (0x0001832a) cell_vitu_itu_pane_ParamLimits

0x95be,	// (0x0001832a) cell_vitu_itu_pane

0x95be,	// (0x0001832a) cell_vitu_function_pane_ParamLimits

0x95be,	// (0x0001832a) cell_vitu_function_pane

0x95be,	// (0x0001832a) bg_popup_sub_pane_cp08_ParamLimits

0x95be,	// (0x0001832a) bg_popup_sub_pane_cp08

0x9d3a,	// (0x00018aa6) field_vitu_entry_pane_t1_ParamLimits

0x9d3a,	// (0x00018aa6) field_vitu_entry_pane_t1

0xc736,	// (0x0001b4a2) field_vitu_entry_pane_t2_ParamLimits

0xc736,	// (0x0001b4a2) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x0001e4b5) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x0001e4b5) field_vitu_entry_pane_t

0xbe4f,	// (0x0001abbb) bg_button_pane_cp05_ParamLimits

0xbe4f,	// (0x0001abbb) bg_button_pane_cp05

0xc753,	// (0x0001b4bf) cell_vitu_itu_pane_g1

0xaa76,	// (0x000197e2) cell_vitu_itu_pane_t1_ParamLimits

0xaa76,	// (0x000197e2) cell_vitu_itu_pane_t1

0xaa76,	// (0x000197e2) cell_vitu_itu_pane_t2_ParamLimits

0xaa76,	// (0x000197e2) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x0001e4ba) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x0001e4ba) cell_vitu_itu_pane_t

0x9549,	// (0x000182b5) bg_button_pane_cp07

0x9d30,	// (0x00018a9c) cell_vitu_function_pane_g1

0x9d28,	// (0x00018a94) main_calc_pane_g1

0x019d,	// (0x0000ef09) aid_visual_content_pane

0x9549,	// (0x000182b5) main_vradio_pane

0x9cea,	// (0x00018a56) main_vradio_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) main_vradio_pane_g1

0x9cf8,	// (0x00018a64) main_vradio_pane_g2_ParamLimits

0x9cf8,	// (0x00018a64) main_vradio_pane_g2

0x0001,

0xf755,	// (0x0001e4c1) main_vradio_pane_g_ParamLimits

0xf755,	// (0x0001e4c1) main_vradio_pane_g

0x9d3a,	// (0x00018aa6) main_vradio_pane_t1_ParamLimits

0x9d3a,	// (0x00018aa6) main_vradio_pane_t1

0x9d3a,	// (0x00018aa6) main_vradio_pane_t2_ParamLimits

0x9d3a,	// (0x00018aa6) main_vradio_pane_t2

0x9d4e,	// (0x00018aba) main_vradio_pane_t3_ParamLimits

0x9d4e,	// (0x00018aba) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x0001e4c6) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x0001e4c6) main_vradio_pane_t

0x95be,	// (0x0001832a) vradio_rocker_control_pane_ParamLimits

0x95be,	// (0x0001832a) vradio_rocker_control_pane

0x95be,	// (0x0001832a) vradio_station_info_pane_ParamLimits

0x95be,	// (0x0001832a) vradio_station_info_pane

0x95be,	// (0x0001832a) vradio_frequency_info_pane_ParamLimits

0x95be,	// (0x0001832a) vradio_frequency_info_pane

0x9d30,	// (0x00018a9c) vradio_station_info_pane_g1

0xaa76,	// (0x000197e2) vradio_station_info_pane_t1_ParamLimits

0xaa76,	// (0x000197e2) vradio_station_info_pane_t1

0x9d4e,	// (0x00018aba) vradio_station_info_pane_t2_ParamLimits

0x9d4e,	// (0x00018aba) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x0001e4cd) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x0001e4cd) vradio_station_info_pane_t

0x9549,	// (0x000182b5) vradio_tuning_pane

0x44fd,	// (0x00013269) vradio_rocker_control_pane_g1

0xc76f,	// (0x0001b4db) vradio_rocker_control_pane_g2

0x4507,	// (0x00013273) vradio_rocker_control_pane_g3

0x4511,	// (0x0001327d) vradio_rocker_control_pane_g4

0x451b,	// (0x00013287) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x0001e4d2) vradio_rocker_control_pane_g

0x9d30,	// (0x00018a9c) vradio_frequency_info_pane_g1

0x9d3a,	// (0x00018aa6) vradio_frequency_info_pane_t1_ParamLimits

0x9d3a,	// (0x00018aa6) vradio_frequency_info_pane_t1

0x4525,	// (0x00013291) vradio_tuning_pane_g1

0x4530,	// (0x0001329c) vradio_tuning_pane_t1

0x9577,	// (0x000182e3) area_side_right_pane_ParamLimits

0x9577,	// (0x000182e3) area_side_right_pane

0xbc83,	// (0x0001a9ef) status_small_pane_g1

0xbc8b,	// (0x0001a9f7) status_small_pane_g2

0xbc94,	// (0x0001aa00) status_small_pane_g3

0xbc9d,	// (0x0001aa09) status_small_pane_g4

0x0003,

0xf532,	// (0x0001e29e) status_small_pane_g

0xbca6,	// (0x0001aa12) status_small_pane_t1

0x9549,	// (0x000182b5) main_video3_pane

0x9549,	// (0x000182b5) cams_zoom_vslider_pane

0xc777,	// (0x0001b4e3) image3_wide_pane_ParamLimits

0xc777,	// (0x0001b4e3) image3_wide_pane

0x9549,	// (0x000182b5) image3_wide_small_pane

0xc791,	// (0x0001b4fd) main_video3_pane_g1_ParamLimits

0xc791,	// (0x0001b4fd) main_video3_pane_g1

0xc791,	// (0x0001b4fd) main_video3_pane_g2_ParamLimits

0xc791,	// (0x0001b4fd) main_video3_pane_g2

0x0001,

0xf771,	// (0x0001e4dd) main_video3_pane_g_ParamLimits

0xf771,	// (0x0001e4dd) main_video3_pane_g

0xc7af,	// (0x0001b51b) main_video3_pane_t1_ParamLimits

0xc7af,	// (0x0001b51b) main_video3_pane_t1

0xc7af,	// (0x0001b51b) main_video3_pane_t2_ParamLimits

0xc7af,	// (0x0001b51b) main_video3_pane_t2

0xc7af,	// (0x0001b51b) main_video3_pane_t3_ParamLimits

0xc7af,	// (0x0001b51b) main_video3_pane_t3

0x0002,

0xf776,	// (0x0001e4e2) main_video3_pane_t_ParamLimits

0xf776,	// (0x0001e4e2) main_video3_pane_t

0x9d30,	// (0x00018a9c) cams_zoom_vslider_pane_g1

0x9d30,	// (0x00018a9c) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x0001de1b) cams_zoom_vslider_pane_g

0x9549,	// (0x000182b5) small_slider_vertical_pane

0x9d30,	// (0x00018a9c) small_slider_vertical_pane_g1

0x9d30,	// (0x00018a9c) small_slider_vertical_pane_g2

0xc7d6,	// (0x0001b542) small_slider_vertical_pane_g3

0x0002,

0xf77d,	// (0x0001e4e9) small_slider_vertical_pane_g

0x9549,	// (0x000182b5) main_hwr_training_pane

0xc7df,	// (0x0001b54b) hwr_training_instruct_pane_ParamLimits

0xc7df,	// (0x0001b54b) hwr_training_instruct_pane

0x453f,	// (0x000132ab) hwr_training_navi_pane_ParamLimits

0x453f,	// (0x000132ab) hwr_training_navi_pane

0x455e,	// (0x000132ca) hwr_training_write_pane_ParamLimits

0x455e,	// (0x000132ca) hwr_training_write_pane

0x9549,	// (0x000182b5) bg_frame_shadow_pane

0xc816,	// (0x0001b582) hwr_training_write_pane_g1

0xc81e,	// (0x0001b58a) hwr_training_write_pane_g2

0xc826,	// (0x0001b592) hwr_training_write_pane_g3

0xc82e,	// (0x0001b59a) hwr_training_write_pane_g4

0xc836,	// (0x0001b5a2) hwr_training_write_pane_g5

0xc83e,	// (0x0001b5aa) hwr_training_write_pane_g6

0xc846,	// (0x0001b5b2) hwr_training_write_pane_g7

0x0006,

0xf784,	// (0x0001e4f0) hwr_training_write_pane_g

0xc84e,	// (0x0001b5ba) hwr_training_navi_pane_g1_ParamLimits

0xc84e,	// (0x0001b5ba) hwr_training_navi_pane_g1

0xc860,	// (0x0001b5cc) hwr_training_navi_pane_g2_ParamLimits

0xc860,	// (0x0001b5cc) hwr_training_navi_pane_g2

0xc872,	// (0x0001b5de) hwr_training_navi_pane_g3_ParamLimits

0xc872,	// (0x0001b5de) hwr_training_navi_pane_g3

0xc882,	// (0x0001b5ee) hwr_training_navi_pane_g4_ParamLimits

0xc882,	// (0x0001b5ee) hwr_training_navi_pane_g4

0x0004,

0xf793,	// (0x0001e4ff) hwr_training_navi_pane_g_ParamLimits

0xf793,	// (0x0001e4ff) hwr_training_navi_pane_g

0xc88f,	// (0x0001b5fb) hwr_training_navi_pane_t1

0x45a6,	// (0x00013312) list_single_hwr_training_instruct_pane_ParamLimits

0x45a6,	// (0x00013312) list_single_hwr_training_instruct_pane

0xc89d,	// (0x0001b609) list_single_hwr_training_instruct_pane_t1

0xc104,	// (0x0001ae70) bg_frame_shadow_pane_g1

0xc8ac,	// (0x0001b618) bg_frame_shadow_pane_g2

0xc8b4,	// (0x0001b620) bg_frame_shadow_pane_g3

0xc8bc,	// (0x0001b628) bg_frame_shadow_pane_g4

0xc8c4,	// (0x0001b630) bg_frame_shadow_pane_g5

0xc8cc,	// (0x0001b638) bg_frame_shadow_pane_g6

0xc8d4,	// (0x0001b640) bg_frame_shadow_pane_g7

0x9e84,	// (0x00018bf0) bg_frame_shadow_pane_g8

0x0007,

0xf79e,	// (0x0001e50a) bg_frame_shadow_pane_g

0x9549,	// (0x000182b5) main_video_tele_dialer_pane

0x45c2,	// (0x0001332e) aid_size_cell_video_keypad_ParamLimits

0x45c2,	// (0x0001332e) aid_size_cell_video_keypad

0x45dc,	// (0x00013348) grid_video_dialer_keypad_pane_ParamLimits

0x45dc,	// (0x00013348) grid_video_dialer_keypad_pane

0x4628,	// (0x00013394) video_down_pane_cp_ParamLimits

0x4628,	// (0x00013394) video_down_pane_cp

0x465a,	// (0x000133c6) cell_video_dialer_keypad_pane_ParamLimits

0x465a,	// (0x000133c6) cell_video_dialer_keypad_pane

0xc8dc,	// (0x0001b648) bg_button_pane_cp08_ParamLimits

0xc8dc,	// (0x0001b648) bg_button_pane_cp08

0x4680,	// (0x000133ec) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4680,	// (0x000133ec) cell_video_dialer_keypad_pane_g1

0x3f6d,	// (0x00012cd9) mup3_rocker2_pane_ParamLimits

0x3f6d,	// (0x00012cd9) mup3_rocker2_pane

0x9d30,	// (0x00018a9c) mup3_rocker2_pane_g1

0x30b7,	// (0x00011e23) main_dialer2_pane

0x9549,	// (0x000182b5) main_mp4_pane

0xc906,	// (0x0001b672) main_mp4_pane_g1_ParamLimits

0xc906,	// (0x0001b672) main_mp4_pane_g1

0xc906,	// (0x0001b672) main_mp4_pane_g2_ParamLimits

0xc906,	// (0x0001b672) main_mp4_pane_g2

0x46bb,	// (0x00013427) main_mp4_pane_g3_ParamLimits

0x46bb,	// (0x00013427) main_mp4_pane_g3

0xc924,	// (0x0001b690) main_mp4_pane_g4_ParamLimits

0xc924,	// (0x0001b690) main_mp4_pane_g4

0xc94c,	// (0x0001b6b8) main_mp4_pane_g5_ParamLimits

0xc94c,	// (0x0001b6b8) main_mp4_pane_g5

0x0007,

0xf7be,	// (0x0001e52a) main_mp4_pane_g_ParamLimits

0xf7be,	// (0x0001e52a) main_mp4_pane_g

0xc9b4,	// (0x0001b720) main_mp4_pane_t1_ParamLimits

0xc9b4,	// (0x0001b720) main_mp4_pane_t1

0xca16,	// (0x0001b782) main_mp4_pane_t2_ParamLimits

0xca16,	// (0x0001b782) main_mp4_pane_t2

0xca7a,	// (0x0001b7e6) main_mp4_pane_t3_ParamLimits

0xca7a,	// (0x0001b7e6) main_mp4_pane_t3

0xcad8,	// (0x0001b844) main_mp4_pane_t4_ParamLimits

0xcad8,	// (0x0001b844) main_mp4_pane_t4

0x0003,

0xf7cf,	// (0x0001e53b) main_mp4_pane_t_ParamLimits

0xf7cf,	// (0x0001e53b) main_mp4_pane_t

0xcb36,	// (0x0001b8a2) mp4_progress_pane_ParamLimits

0xcb36,	// (0x0001b8a2) mp4_progress_pane

0xcb6a,	// (0x0001b8d6) mp4_rocker_pane_ParamLimits

0xcb6a,	// (0x0001b8d6) mp4_rocker_pane

0xcb88,	// (0x0001b8f4) mp4_progress_pane_t1

0xcbaa,	// (0x0001b916) mp4_progress_pane_t2

0x0001,

0xf7d8,	// (0x0001e544) mp4_progress_pane_t

0xcbcc,	// (0x0001b938) mup_progress_pane_cp04

0x9d30,	// (0x00018a9c) mp4_rocker_pane_g1

0x95be,	// (0x0001832a) aid_cell_size_keypad2_ParamLimits

0x95be,	// (0x0001832a) aid_cell_size_keypad2

0x95be,	// (0x0001832a) dialer2_ne_pane_ParamLimits

0x95be,	// (0x0001832a) dialer2_ne_pane

0x95be,	// (0x0001832a) grid_dialer2_keypad_pane_ParamLimits

0x95be,	// (0x0001832a) grid_dialer2_keypad_pane

0xbe4f,	// (0x0001abbb) bg_popup_call_pane_cp07_ParamLimits

0xbe4f,	// (0x0001abbb) bg_popup_call_pane_cp07

0x46ed,	// (0x00013459) dialer2_ne_pane_t1_ParamLimits

0x46ed,	// (0x00013459) dialer2_ne_pane_t1

0x472d,	// (0x00013499) cell_dialer2_keypad_pane_ParamLimits

0x472d,	// (0x00013499) cell_dialer2_keypad_pane

0xbe4f,	// (0x0001abbb) bg_button_pane_pane_cp04_ParamLimits

0xbe4f,	// (0x0001abbb) bg_button_pane_pane_cp04

0x9cea,	// (0x00018a56) cell_dialer2_keypad_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) cell_dialer2_keypad_pane_g1

0x0e82,	// (0x0000fbee) aid_placing_vt_set_content_ParamLimits

0x0e82,	// (0x0000fbee) aid_placing_vt_set_content

0x0ea6,	// (0x0000fc12) aid_placing_vt_set_title_ParamLimits

0x0ea6,	// (0x0000fc12) aid_placing_vt_set_title

0x9549,	// (0x000182b5) main_image3_pane

0x47a2,	// (0x0001350e) area_side_right_pane_cp01_ParamLimits

0x47a2,	// (0x0001350e) area_side_right_pane_cp01

0x47bb,	// (0x00013527) main_image3_pane_g1_ParamLimits

0x47bb,	// (0x00013527) main_image3_pane_g1

0x47c9,	// (0x00013535) main_image3_pane_g2_ParamLimits

0x47c9,	// (0x00013535) main_image3_pane_g2

0x47f1,	// (0x0001355d) main_image3_pane_g3_ParamLimits

0x47f1,	// (0x0001355d) main_image3_pane_g3

0x481b,	// (0x00013587) main_image3_pane_g4_ParamLimits

0x481b,	// (0x00013587) main_image3_pane_g4

0x0003,

0xf7e7,	// (0x0001e553) main_image3_pane_g_ParamLimits

0xf7e7,	// (0x0001e553) main_image3_pane_g

0x4845,	// (0x000135b1) main_image3_pane_t1_ParamLimits

0x4845,	// (0x000135b1) main_image3_pane_t1

0x489d,	// (0x00013609) main_image3_pane_t2_ParamLimits

0x489d,	// (0x00013609) main_image3_pane_t2

0x48ef,	// (0x0001365b) main_image3_pane_t3_ParamLimits

0x48ef,	// (0x0001365b) main_image3_pane_t3

0x0003,

0xf7f0,	// (0x0001e55c) main_image3_pane_t_ParamLimits

0xf7f0,	// (0x0001e55c) main_image3_pane_t

0x95be,	// (0x0001832a) grid_sctrl_middle_pane_cp01_ParamLimits

0x95be,	// (0x0001832a) grid_sctrl_middle_pane_cp01

0x4977,	// (0x000136e3) cell_sctrl_middle_pane_cp01_ParamLimits

0x4977,	// (0x000136e3) cell_sctrl_middle_pane_cp01

0x4994,	// (0x00013700) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4994,	// (0x00013700) cell_sctrl_middle_pane_cp01_g1

0x9549,	// (0x000182b5) main_call4_pane

0x49a9,	// (0x00013715) aid_size_button_call4_ParamLimits

0x49a9,	// (0x00013715) aid_size_button_call4

0x49dc,	// (0x00013748) call4_windows_pane_ParamLimits

0x49dc,	// (0x00013748) call4_windows_pane

0x49fb,	// (0x00013767) grid_call4_button_pane_ParamLimits

0x49fb,	// (0x00013767) grid_call4_button_pane

0x4a32,	// (0x0001379e) call4_windows_conf_pane

0x4a4b,	// (0x000137b7) popup_call4_audio_first_window_ParamLimits

0x4a4b,	// (0x000137b7) popup_call4_audio_first_window

0x4a9b,	// (0x00013807) popup_call4_audio_second_window_ParamLimits

0x4a9b,	// (0x00013807) popup_call4_audio_second_window

0x4ab4,	// (0x00013820) popup_call4_audio_wait_window_ParamLimits

0x4ab4,	// (0x00013820) popup_call4_audio_wait_window

0x4ac2,	// (0x0001382e) cell_call4_button_pane_ParamLimits

0x4ac2,	// (0x0001382e) cell_call4_button_pane

0x4ae9,	// (0x00013855) bg_button_pane_cp09_ParamLimits

0x4ae9,	// (0x00013855) bg_button_pane_cp09

0x4af5,	// (0x00013861) cell_call4_button_pane_g1_ParamLimits

0x4af5,	// (0x00013861) cell_call4_button_pane_g1

0x4b1b,	// (0x00013887) cell_call4_button_pane_t1_ParamLimits

0x4b1b,	// (0x00013887) cell_call4_button_pane_t1

0xcc7b,	// (0x0001b9e7) popup_call4_audio_conf_window_ParamLimits

0xcc7b,	// (0x0001b9e7) popup_call4_audio_conf_window

0x3fcf,	// (0x00012d3b) mup3_progress_pane_t1_ParamLimits

0x3fee,	// (0x00012d5a) mup3_progress_pane_t2_ParamLimits

0xc43e,	// (0x0001b1aa) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x0001e436) mup3_progress_pane_t_ParamLimits

0xc45b,	// (0x0001b1c7) mup_progress_pane_cp03_ParamLimits

0x44f5,	// (0x00013261) mup3_control_keys_pane_g4_copy1

0xcb6a,	// (0x0001b8d6) mp4_rocker2_pane_ParamLimits

0xcb6a,	// (0x0001b8d6) mp4_rocker2_pane

0xcc95,	// (0x0001ba01) mp4_rocker2_pane_g1

0xcc95,	// (0x0001ba01) mp4_rocker2_pane_g2

0xcc95,	// (0x0001ba01) mp4_rocker2_pane_g3

0xcc95,	// (0x0001ba01) mp4_rocker2_pane_g4

0xcc95,	// (0x0001ba01) mp4_rocker2_pane_g5

0x0004,

0xf7f9,	// (0x0001e565) mp4_rocker2_pane_g

0x9549,	// (0x000182b5) main_camera4_pane

0x9549,	// (0x000182b5) main_video4_pane

0x45f6,	// (0x00013362) main_video_tele_dialer_pane_t1_ParamLimits

0x45f6,	// (0x00013362) main_video_tele_dialer_pane_t1

0x460f,	// (0x0001337b) main_video_tele_dialer_pane_t2_ParamLimits

0x460f,	// (0x0001337b) main_video_tele_dialer_pane_t2

0x0001,

0xf7af,	// (0x0001e51b) main_video_tele_dialer_pane_t_ParamLimits

0xf7af,	// (0x0001e51b) main_video_tele_dialer_pane_t

0x4b59,	// (0x000138c5) cam4_autofocus_pane_ParamLimits

0x4b59,	// (0x000138c5) cam4_autofocus_pane

0x4b6f,	// (0x000138db) cam4_image_uncrop_pane_ParamLimits

0x4b6f,	// (0x000138db) cam4_image_uncrop_pane

0x4b88,	// (0x000138f4) cam4_indicators_pane_ParamLimits

0x4b88,	// (0x000138f4) cam4_indicators_pane

0x4bb8,	// (0x00013924) main_camera4_pane_g1_ParamLimits

0x4bb8,	// (0x00013924) main_camera4_pane_g1

0x4bca,	// (0x00013936) main_camera4_pane_g2_ParamLimits

0x4bca,	// (0x00013936) main_camera4_pane_g2

0x4bdd,	// (0x00013949) main_camera4_pane_g3_ParamLimits

0x4bdd,	// (0x00013949) main_camera4_pane_g3

0x4bf0,	// (0x0001395c) main_camera4_pane_g4_ParamLimits

0x4bf0,	// (0x0001395c) main_camera4_pane_g4

0x4c03,	// (0x0001396f) main_camera4_pane_g5_ParamLimits

0x4c03,	// (0x0001396f) main_camera4_pane_g5

0x0005,

0xf804,	// (0x0001e570) main_camera4_pane_g_ParamLimits

0xf804,	// (0x0001e570) main_camera4_pane_g

0x4c27,	// (0x00013993) main_camera4_pane_t1_ParamLimits

0x4c27,	// (0x00013993) main_camera4_pane_t1

0x9cea,	// (0x00018a56) bg_tb_trans_pane_cp06

0xccc3,	// (0x0001ba2f) cam4_indicators_pane_g1

0xccd4,	// (0x0001ba40) cam4_indicators_pane_g2

0x0002,

0xf81f,	// (0x0001e58b) cam4_indicators_pane_g

0xccec,	// (0x0001ba58) cam4_indicators_pane_t1

0x4c8b,	// (0x000139f7) main_video4_pane_g1_ParamLimits

0x4c8b,	// (0x000139f7) main_video4_pane_g1

0x4c9a,	// (0x00013a06) main_video4_pane_g2_ParamLimits

0x4c9a,	// (0x00013a06) main_video4_pane_g2

0x4caa,	// (0x00013a16) main_video4_pane_g3_ParamLimits

0x4caa,	// (0x00013a16) main_video4_pane_g3

0x4cba,	// (0x00013a26) main_video4_pane_g4_ParamLimits

0x4cba,	// (0x00013a26) main_video4_pane_g4

0x0004,

0xf826,	// (0x0001e592) main_video4_pane_g_ParamLimits

0xf826,	// (0x0001e592) main_video4_pane_g

0x4cda,	// (0x00013a46) vid4_indicators_pane_ParamLimits

0x4cda,	// (0x00013a46) vid4_indicators_pane

0x4d04,	// (0x00013a70) video4_image_uncrop_cif_pane_ParamLimits

0x4d04,	// (0x00013a70) video4_image_uncrop_cif_pane

0x4d1e,	// (0x00013a8a) video4_image_uncrop_nhd_pane_ParamLimits

0x4d1e,	// (0x00013a8a) video4_image_uncrop_nhd_pane

0x4b6f,	// (0x000138db) video4_image_uncrop_vga_pane_ParamLimits

0x4b6f,	// (0x000138db) video4_image_uncrop_vga_pane

0x95be,	// (0x0001832a) bg_tb_trans_pane_cp07

0xcd1a,	// (0x0001ba86) vid4_indicators_pane_g1

0xcd30,	// (0x0001ba9c) vid4_indicators_pane_g2

0xcd44,	// (0x0001bab0) vid4_indicators_pane_g3

0x0004,

0xf831,	// (0x0001e59d) vid4_indicators_pane_g

0xcd75,	// (0x0001bae1) vid4_indicators_pane_t1

0x4d35,	// (0x00013aa1) cam4_autofocus_pane_g1

0x4d3d,	// (0x00013aa9) cam4_autofocus_pane_g2

0x4d45,	// (0x00013ab1) cam4_autofocus_pane_g3

0x0002,

0xf83c,	// (0x0001e5a8) cam4_autofocus_pane_g

0x4d4d,	// (0x00013ab9) cam4_autofocus_pane_g3_copy1

0x463e,	// (0x000133aa) video_down_pane_cp_t1

0x464c,	// (0x000133b8) video_down_pane_cp_t2

0x0001,

0xf7b4,	// (0x0001e520) video_down_pane_cp_t

0x95be,	// (0x0001832a) popup_vitu2_window_ParamLimits

0x95be,	// (0x0001832a) popup_vitu2_window

0x4d55,	// (0x00013ac1) aid_size_cell2_itu2_ParamLimits

0x4d55,	// (0x00013ac1) aid_size_cell2_itu2

0x4d7b,	// (0x00013ae7) aid_size_cell_itu2_ParamLimits

0x4d7b,	// (0x00013ae7) aid_size_cell_itu2

0x407a,	// (0x00012de6) bg_popup_window_pane_cp09_ParamLimits

0x407a,	// (0x00012de6) bg_popup_window_pane_cp09

0x4dd9,	// (0x00013b45) field_vitu2_entry_pane_ParamLimits

0x4dd9,	// (0x00013b45) field_vitu2_entry_pane

0x4e01,	// (0x00013b6d) grid_vitu2_function_pane_ParamLimits

0x4e01,	// (0x00013b6d) grid_vitu2_function_pane

0x4e52,	// (0x00013bbe) grid_vitu2_itu_pane_ParamLimits

0x4e52,	// (0x00013bbe) grid_vitu2_itu_pane

0x4ee2,	// (0x00013c4e) cell_vitu2_itu_pane_ParamLimits

0x4ee2,	// (0x00013c4e) cell_vitu2_itu_pane

0x4f10,	// (0x00013c7c) cell_vitu2_function_pane_ParamLimits

0x4f10,	// (0x00013c7c) cell_vitu2_function_pane

0xcd8c,	// (0x0001baf8) bg_popup_call_pane_cp08_ParamLimits

0xcd8c,	// (0x0001baf8) bg_popup_call_pane_cp08

0xcda3,	// (0x0001bb0f) field_vitu2_entry_pane_g1

0xcdaf,	// (0x0001bb1b) field_vitu2_entry_pane_g2

0x0002,

0xf843,	// (0x0001e5af) field_vitu2_entry_pane_g

0xcdbb,	// (0x0001bb27) field_vitu2_entry_pane_t1_ParamLimits

0xcdbb,	// (0x0001bb27) field_vitu2_entry_pane_t1

0xcdea,	// (0x0001bb56) field_vitu2_entry_pane_t2_ParamLimits

0xcdea,	// (0x0001bb56) field_vitu2_entry_pane_t2

0x0001,

0xf84a,	// (0x0001e5b6) field_vitu2_entry_pane_t_ParamLimits

0xf84a,	// (0x0001e5b6) field_vitu2_entry_pane_t

0x4f54,	// (0x00013cc0) bg_button_pane_cp010_ParamLimits

0x4f54,	// (0x00013cc0) bg_button_pane_cp010

0x4f62,	// (0x00013cce) cell_vitu2_itu_pane_g1

0x4f88,	// (0x00013cf4) cell_vitu2_itu_pane_t1_ParamLimits

0x4f88,	// (0x00013cf4) cell_vitu2_itu_pane_t1

0x4fe6,	// (0x00013d52) cell_vitu2_itu_pane_t2_ParamLimits

0x4fe6,	// (0x00013d52) cell_vitu2_itu_pane_t2

0x0002,

0xf854,	// (0x0001e5c0) cell_vitu2_itu_pane_t_ParamLimits

0xf854,	// (0x0001e5c0) cell_vitu2_itu_pane_t

0x95be,	// (0x0001832a) bg_button_pane_cp011

0x50d2,	// (0x00013e3e) cell_vitu2_function_pane_g1

0x9549,	// (0x000182b5) main_myfav_hc_pane

0x493f,	// (0x000136ab) popup_image3_note_pane_ParamLimits

0x493f,	// (0x000136ab) popup_image3_note_pane

0x495b,	// (0x000136c7) popup_image3_tool_bar_pane_ParamLimits

0x495b,	// (0x000136c7) popup_image3_tool_bar_pane

0x5074,	// (0x00013de0) cell_vitu2_itu_pane_t3_ParamLimits

0x5074,	// (0x00013de0) cell_vitu2_itu_pane_t3

0x9549,	// (0x000182b5) bg_popup_trans_pane

0xce0f,	// (0x0001bb7b) grid_image3_tool_bar_pane

0xce19,	// (0x0001bb85) bg_popup_trans_pane_g1

0xa1ff,	// (0x00018f6b) bg_popup_trans_pane_g2

0xce21,	// (0x0001bb8d) bg_popup_trans_pane_g3

0xce29,	// (0x0001bb95) bg_popup_trans_pane_g4

0xce31,	// (0x0001bb9d) bg_popup_trans_pane_g5

0xce39,	// (0x0001bba5) bg_popup_trans_pane_g6

0xce41,	// (0x0001bbad) bg_popup_trans_pane_g7

0xce49,	// (0x0001bbb5) bg_popup_trans_pane_g8

0xa1df,	// (0x00018f4b) bg_popup_trans_pane_g9

0x0008,

0xf85b,	// (0x0001e5c7) bg_popup_trans_pane_g

0xce51,	// (0x0001bbbd) cell_image3_tool_bar_pane_ParamLimits

0xce51,	// (0x0001bbbd) cell_image3_tool_bar_pane

0x9d30,	// (0x00018a9c) cell_image3_tool_bar_pane_g1

0x9549,	// (0x000182b5) bg_popup_trans_pane_cp1

0xce67,	// (0x0001bbd3) popup_image3_note_pane_t1

0xce75,	// (0x0001bbe1) popup_image3_note_pane_t2

0xce83,	// (0x0001bbef) popup_image3_note_pane_t3

0x0002,

0xf86e,	// (0x0001e5da) popup_image3_note_pane_t

0xce93,	// (0x0001bbff) popup_image3_note_pane_t3_copy1

0x50e6,	// (0x00013e52) bg_myfav_hc_instruction_pane_ParamLimits

0x50e6,	// (0x00013e52) bg_myfav_hc_instruction_pane

0x50fe,	// (0x00013e6a) cell_myfav_contact_pane_ParamLimits

0x50fe,	// (0x00013e6a) cell_myfav_contact_pane

0x511a,	// (0x00013e86) cell_myfav_contact_pane_cp1_ParamLimits

0x511a,	// (0x00013e86) cell_myfav_contact_pane_cp1

0x5132,	// (0x00013e9e) cell_myfav_contact_pane_cp2_ParamLimits

0x5132,	// (0x00013e9e) cell_myfav_contact_pane_cp2

0x514a,	// (0x00013eb6) cell_myfav_contact_pane_cp3_ParamLimits

0x514a,	// (0x00013eb6) cell_myfav_contact_pane_cp3

0x5161,	// (0x00013ecd) cell_myfav_contact_pane_cp4_ParamLimits

0x5161,	// (0x00013ecd) cell_myfav_contact_pane_cp4

0x5179,	// (0x00013ee5) cell_myfav_contact_pane_cp5_ParamLimits

0x5179,	// (0x00013ee5) cell_myfav_contact_pane_cp5

0x518d,	// (0x00013ef9) cell_myfav_contact_pane_cp6_ParamLimits

0x518d,	// (0x00013ef9) cell_myfav_contact_pane_cp6

0x51a3,	// (0x00013f0f) cell_myfav_contact_pane_cp7_ParamLimits

0x51a3,	// (0x00013f0f) cell_myfav_contact_pane_cp7

0xcea1,	// (0x0001bc0d) listscroll_gen_pane_cp05

0x51bb,	// (0x00013f27) main_myfav_hc_pane_g1_ParamLimits

0x51bb,	// (0x00013f27) main_myfav_hc_pane_g1

0x51d5,	// (0x00013f41) main_myfav_hc_pane_g2_ParamLimits

0x51d5,	// (0x00013f41) main_myfav_hc_pane_g2

0x0002,

0xf875,	// (0x0001e5e1) main_myfav_hc_pane_g_ParamLimits

0xf875,	// (0x0001e5e1) main_myfav_hc_pane_g

0x5209,	// (0x00013f75) main_myfav_hc_pane_t1_ParamLimits

0x5209,	// (0x00013f75) main_myfav_hc_pane_t1

0xceaa,	// (0x0001bc16) main_myfav_hc_pane_t2_ParamLimits

0xceaa,	// (0x0001bc16) main_myfav_hc_pane_t2

0xcebc,	// (0x0001bc28) main_myfav_hc_pane_t3_ParamLimits

0xcebc,	// (0x0001bc28) main_myfav_hc_pane_t3

0x5220,	// (0x00013f8c) main_myfav_hc_pane_t4_ParamLimits

0x5220,	// (0x00013f8c) main_myfav_hc_pane_t4

0x0004,

0xf87c,	// (0x0001e5e8) main_myfav_hc_pane_t_ParamLimits

0xf87c,	// (0x0001e5e8) main_myfav_hc_pane_t

0x9d30,	// (0x00018a9c) bg_myfav_hc_instruction_pane_g1

0xcece,	// (0x0001bc3a) cell_myfav_contact_pane_g1_ParamLimits

0xcece,	// (0x0001bc3a) cell_myfav_contact_pane_g1

0xcece,	// (0x0001bc3a) cell_myfav_contact_pane_g2_ParamLimits

0xcece,	// (0x0001bc3a) cell_myfav_contact_pane_g2

0xceda,	// (0x0001bc46) cell_myfav_contact_pane_g3_ParamLimits

0xceda,	// (0x0001bc46) cell_myfav_contact_pane_g3

0x9cf8,	// (0x00018a64) cell_myfav_contact_pane_g4_ParamLimits

0x9cf8,	// (0x00018a64) cell_myfav_contact_pane_g4

0xcee7,	// (0x0001bc53) cell_myfav_contact_pane_g5_ParamLimits

0xcee7,	// (0x0001bc53) cell_myfav_contact_pane_g5

0x0004,

0xf887,	// (0x0001e5f3) cell_myfav_contact_pane_g_ParamLimits

0xf887,	// (0x0001e5f3) cell_myfav_contact_pane_g

0x51ef,	// (0x00013f5b) main_myfav_hc_pane_g3_ParamLimits

0x51ef,	// (0x00013f5b) main_myfav_hc_pane_g3

0x02d8,	// (0x0000f044) popup_adpt_find_window

0x524a,	// (0x00013fb6) afind_page_pane_ParamLimits

0x524a,	// (0x00013fb6) afind_page_pane

0x5260,	// (0x00013fcc) aid_size_cell_afind_ParamLimits

0x5260,	// (0x00013fcc) aid_size_cell_afind

0x527e,	// (0x00013fea) bg_popup_sub_pane_cp09_ParamLimits

0x527e,	// (0x00013fea) bg_popup_sub_pane_cp09

0x5290,	// (0x00013ffc) find_pane_cp01_ParamLimits

0x5290,	// (0x00013ffc) find_pane_cp01

0xcef3,	// (0x0001bc5f) grid_afind_control_pane_ParamLimits

0xcef3,	// (0x0001bc5f) grid_afind_control_pane

0x52a4,	// (0x00014010) grid_afind_pane_ParamLimits

0x52a4,	// (0x00014010) grid_afind_pane

0x52c6,	// (0x00014032) cell_afind_pane_ParamLimits

0x52c6,	// (0x00014032) cell_afind_pane

0x9d30,	// (0x00018a9c) afind_page_pane_g1

0x532f,	// (0x0001409b) afind_page_pane_g2

0x5337,	// (0x000140a3) afind_page_pane_g3

0x0002,

0xf892,	// (0x0001e5fe) afind_page_pane_g

0x533f,	// (0x000140ab) afind_page_pane_t1

0xcf19,	// (0x0001bc85) cell_afind_grid_control_pane_ParamLimits

0xcf19,	// (0x0001bc85) cell_afind_grid_control_pane

0xcf28,	// (0x0001bc94) bg_button_pane_cp69_ParamLimits

0xcf28,	// (0x0001bc94) bg_button_pane_cp69

0x534d,	// (0x000140b9) cell_afind_pane_g1_ParamLimits

0x534d,	// (0x000140b9) cell_afind_pane_g1

0x535a,	// (0x000140c6) cell_afind_pane_t1_ParamLimits

0x535a,	// (0x000140c6) cell_afind_pane_t1

0xcf34,	// (0x0001bca0) bg_button_pane_cp72

0xcf3c,	// (0x0001bca8) cell_afind_grid_control_pane_g1

0x2b9f,	// (0x0001190b) aid_image_placing_area_ParamLimits

0x2b9f,	// (0x0001190b) aid_image_placing_area

0x9cea,	// (0x00018a56) field_vitu_entry_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) field_vitu_entry_pane_g1

0x9cea,	// (0x00018a56) field_vitu_entry_pane_g2_ParamLimits

0x9cea,	// (0x00018a56) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0001df28) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0001df28) field_vitu_entry_pane_g

0xc753,	// (0x0001b4bf) cell_vitu_itu_pane_g1_ParamLimits

0xc736,	// (0x0001b4a2) cell_vitu_itu_pane_t3_ParamLimits

0xc736,	// (0x0001b4a2) cell_vitu_itu_pane_t3

0xcb88,	// (0x0001b8f4) mp4_progress_pane_t1_ParamLimits

0xcbaa,	// (0x0001b916) mp4_progress_pane_t2_ParamLimits

0xf7d8,	// (0x0001e544) mp4_progress_pane_t_ParamLimits

0xcbcc,	// (0x0001b938) mup_progress_pane_cp04_ParamLimits

0x5234,	// (0x00013fa0) main_myfav_hc_pane_t5_ParamLimits

0x5234,	// (0x00013fa0) main_myfav_hc_pane_t5

0x956f,	// (0x000182db) aid_zoom_text_primary

0x02d8,	// (0x0000f044) popup_adpt_find_window_ParamLimits

0x95be,	// (0x0001832a) main_cam_set_pane

0x4ba1,	// (0x0001390d) cam4_zoom_pane_ParamLimits

0x4ba1,	// (0x0001390d) cam4_zoom_pane

0x536c,	// (0x000140d8) main_cam_set_pane_g1_ParamLimits

0x536c,	// (0x000140d8) main_cam_set_pane_g1

0x537a,	// (0x000140e6) main_cam_set_pane_g2_ParamLimits

0x537a,	// (0x000140e6) main_cam_set_pane_g2

0x0001,

0xf899,	// (0x0001e605) main_cam_set_pane_g_ParamLimits

0xf899,	// (0x0001e605) main_cam_set_pane_g

0x539b,	// (0x00014107) main_cam_set_pane_t1_ParamLimits

0x539b,	// (0x00014107) main_cam_set_pane_t1

0x53b6,	// (0x00014122) main_cset_listscroll_pane_ParamLimits

0x53b6,	// (0x00014122) main_cset_listscroll_pane

0x53de,	// (0x0001414a) main_cset_slider_pane_ParamLimits

0x53de,	// (0x0001414a) main_cset_slider_pane

0xcf4d,	// (0x0001bcb9) main_cset_list_pane_ParamLimits

0xcf4d,	// (0x0001bcb9) main_cset_list_pane

0xcf5d,	// (0x0001bcc9) scroll_pane_cp028

0x5408,	// (0x00014174) aid_area_touch_slider

0x5424,	// (0x00014190) cset_slider_pane

0x5447,	// (0x000141b3) main_cset_slider_pane_g1

0x545c,	// (0x000141c8) main_cset_slider_pane_g2

0x0011,

0xf89e,	// (0x0001e60a) main_cset_slider_pane_g

0xcf96,	// (0x0001bd02) main_cset_slider_pane_t1

0x551e,	// (0x0001428a) main_cset_slider_pane_t2

0x5538,	// (0x000142a4) main_cset_slider_pane_t3

0x5552,	// (0x000142be) main_cset_slider_pane_t4

0x556c,	// (0x000142d8) main_cset_slider_pane_t5

0x558a,	// (0x000142f6) main_cset_slider_pane_t6

0x559f,	// (0x0001430b) main_cset_slider_pane_t7

0x000e,

0xf8c3,	// (0x0001e62f) main_cset_slider_pane_t

0x56ab,	// (0x00014417) cset_list_set_pane_ParamLimits

0x56ab,	// (0x00014417) cset_list_set_pane

0xd030,	// (0x0001bd9c) aid_position_infowindow_above

0xd038,	// (0x0001bda4) aid_position_infowindow_below

0x56bf,	// (0x0001442b) cset_list_set_pane_g1_ParamLimits

0x56bf,	// (0x0001442b) cset_list_set_pane_g1

0x56cb,	// (0x00014437) cset_list_set_pane_g3_ParamLimits

0x56cb,	// (0x00014437) cset_list_set_pane_g3

0x0001,

0xf8e2,	// (0x0001e64e) cset_list_set_pane_g_ParamLimits

0xf8e2,	// (0x0001e64e) cset_list_set_pane_g

0x56da,	// (0x00014446) cset_list_set_pane_t1_ParamLimits

0x56da,	// (0x00014446) cset_list_set_pane_t1

0x95be,	// (0x0001832a) list_highlight_pane_cp021_ParamLimits

0x95be,	// (0x0001832a) list_highlight_pane_cp021

0xaafc,	// (0x00019868) cset_slider_pane_g1

0xab0e,	// (0x0001987a) cset_slider_pane_g2

0xab05,	// (0x00019871) cset_slider_pane_g3

0x0002,

0xf8e7,	// (0x0001e653) cset_slider_pane_g

0xd040,	// (0x0001bdac) aid_area_touch_cam4_zoom

0x56ef,	// (0x0001445b) cam4_zoom_cont_pane

0x56f7,	// (0x00014463) cam4_zoom_pane_g1

0x56ff,	// (0x0001446b) cam4_zoom_pane_g2

0x5707,	// (0x00014473) cam4_zoom_pane_g3

0x0002,

0xf8ee,	// (0x0001e65a) cam4_zoom_pane_g

0xd049,	// (0x0001bdb5) cam4_zoom_cont_pane_g1

0xd052,	// (0x0001bdbe) cam4_zoom_cont_pane_g2

0xd05b,	// (0x0001bdc7) cam4_zoom_cont_pane_g3

0x0002,

0xf8f5,	// (0x0001e661) cam4_zoom_cont_pane_g

0x49c7,	// (0x00013733) call4_image_pane_ParamLimits

0x49c7,	// (0x00013733) call4_image_pane

0x4a32,	// (0x0001379e) call4_windows_conf_pane_ParamLimits

0x4a79,	// (0x000137e5) popup_call4_audio_in_window_ParamLimits

0x4a79,	// (0x000137e5) popup_call4_audio_in_window

0x9549,	// (0x000182b5) bg_popup_call2_act_pane_cp02

0xcc73,	// (0x0001b9df) call4_list_conf_pane

0x9d30,	// (0x00018a9c) call4_image_pane_g1

0x9d30,	// (0x00018a9c) call4_image_pane_g2

0x0001,

0xf0af,	// (0x0001de1b) call4_image_pane_g

0xd064,	// (0x0001bdd0) list_single_graphic_popup_conf4_pane_ParamLimits

0xd064,	// (0x0001bdd0) list_single_graphic_popup_conf4_pane

0x9549,	// (0x000182b5) list_highlight_pane_cp022

0xd079,	// (0x0001bde5) list_single_graphic_popup_conf4_pane_g1

0xa7d1,	// (0x0001953d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fc,	// (0x0001e668) list_single_graphic_popup_conf4_pane_g

0xd081,	// (0x0001bded) list_single_graphic_popup_conf4_pane_t1

0x0fbd,	// (0x0000fd29) popup_vtel_slider_window_ParamLimits

0x0fbd,	// (0x0000fd29) popup_vtel_slider_window

0xcbdf,	// (0x0001b94b) dialer2_ne_pane_t2_ParamLimits

0xcbdf,	// (0x0001b94b) dialer2_ne_pane_t2

0x0001,

0xf7dd,	// (0x0001e549) dialer2_ne_pane_t_ParamLimits

0xf7dd,	// (0x0001e549) dialer2_ne_pane_t

0xbe4f,	// (0x0001abbb) bg_popup_sub_pane_cp010_ParamLimits

0xbe4f,	// (0x0001abbb) bg_popup_sub_pane_cp010

0x570f,	// (0x0001447b) popup_vtel_slider_window_g1_ParamLimits

0x570f,	// (0x0001447b) popup_vtel_slider_window_g1

0x5722,	// (0x0001448e) popup_vtel_slider_window_g2_ParamLimits

0x5722,	// (0x0001448e) popup_vtel_slider_window_g2

0x0003,

0xf901,	// (0x0001e66d) popup_vtel_slider_window_g_ParamLimits

0xf901,	// (0x0001e66d) popup_vtel_slider_window_g

0x5778,	// (0x000144e4) vtel_slider_pane_ParamLimits

0x5778,	// (0x000144e4) vtel_slider_pane

0x579a,	// (0x00014506) vtel_slider_pane_g1_ParamLimits

0x579a,	// (0x00014506) vtel_slider_pane_g1

0x57ae,	// (0x0001451a) vtel_slider_pane_g2_ParamLimits

0x57ae,	// (0x0001451a) vtel_slider_pane_g2

0x57c6,	// (0x00014532) vtel_slider_pane_g3_ParamLimits

0x57c6,	// (0x00014532) vtel_slider_pane_g3

0x579a,	// (0x00014506) vtel_slider_pane_g4_ParamLimits

0x579a,	// (0x00014506) vtel_slider_pane_g4

0x57dc,	// (0x00014548) vtel_slider_pane_g5_ParamLimits

0x57dc,	// (0x00014548) vtel_slider_pane_g5

0x0004,

0xf90a,	// (0x0001e676) vtel_slider_pane_g_ParamLimits

0xf90a,	// (0x0001e676) vtel_slider_pane_g

0x95be,	// (0x0001832a) main_gallery2_pane

0x4da7,	// (0x00013b13) aid_size_row_itut2_dropdow_list_ParamLimits

0x4da7,	// (0x00013b13) aid_size_row_itut2_dropdow_list

0x4e29,	// (0x00013b95) grid_vitu2_function_top_pane_ParamLimits

0x4e29,	// (0x00013b95) grid_vitu2_function_top_pane

0x4e8d,	// (0x00013bf9) popup_vitu2_dropdown_list_window_ParamLimits

0x4e8d,	// (0x00013bf9) popup_vitu2_dropdown_list_window

0x4eb4,	// (0x00013c20) popup_vitu2_match_list_window

0x57f2,	// (0x0001455e) cell_vitu2_function_top_pane_ParamLimits

0x57f2,	// (0x0001455e) cell_vitu2_function_top_pane

0x580c,	// (0x00014578) cell_vitu2_function_top_pane_cp01_ParamLimits

0x580c,	// (0x00014578) cell_vitu2_function_top_pane_cp01

0x5828,	// (0x00014594) cell_vitu2_function_top_wide_pane_ParamLimits

0x5828,	// (0x00014594) cell_vitu2_function_top_wide_pane

0x95be,	// (0x0001832a) bg_button_pane_cp012

0x5846,	// (0x000145b2) cell_vitu2_function_top_pane_g1

0xd097,	// (0x0001be03) bg_button_pane_cp013_ParamLimits

0xd097,	// (0x0001be03) bg_button_pane_cp013

0x585a,	// (0x000145c6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x585a,	// (0x000145c6) cell_vitu2_function_top_wide_pane_g1

0x95be,	// (0x0001832a) bg_popup_sub_pane_cp20

0x5872,	// (0x000145de) list_vitu2_match_list_pane

0xce19,	// (0x0001bb85) bg_popup_sub_pane_cp20_g1

0xce21,	// (0x0001bb8d) bg_popup_sub_pane_cp20_g2

0xa1ff,	// (0x00018f6b) bg_popup_sub_pane_cp20_g3

0xce29,	// (0x0001bb95) bg_popup_sub_pane_cp20_g4

0xa1df,	// (0x00018f4b) bg_popup_sub_pane_cp20_g5

0xd0b3,	// (0x0001be1f) bg_popup_sub_pane_cp20_g6

0xce39,	// (0x0001bba5) bg_popup_sub_pane_cp20_g7

0xce41,	// (0x0001bbad) bg_popup_sub_pane_cp20_g8

0xce49,	// (0x0001bbb5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf915,	// (0x0001e681) bg_popup_sub_pane_cp20_g

0xd0bb,	// (0x0001be27) list_vitu2_match_list_item_pane_ParamLimits

0xd0bb,	// (0x0001be27) list_vitu2_match_list_item_pane

0xd0cd,	// (0x0001be39) list_vitu2_match_list_item_pane_t1

0x9549,	// (0x000182b5) bg_popup_sub_pane_cp21

0x9fc9,	// (0x00018d35) grid_vitu2_dropdown_list_pane

0x588a,	// (0x000145f6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x588a,	// (0x000145f6) cell_vitu2_dropdown_list_char_pane

0x58ac,	// (0x00014618) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x58ac,	// (0x00014618) cell_vitu2_dropdown_list_ctrl_pane

0xd0db,	// (0x0001be47) cell_vitu2_dropdown_list_char_pane_g1

0xd0e4,	// (0x0001be50) cell_vitu2_dropdown_list_char_pane_g2

0xd0ed,	// (0x0001be59) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf928,	// (0x0001e694) cell_vitu2_dropdown_list_char_pane_g

0x58d6,	// (0x00014642) cell_vitu2_dropdown_list_char_pane_t1

0x58e4,	// (0x00014650) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x58e4,	// (0x00014650) cell_vitu2_dropdown_list_ctrl_pane_g1

0x58f4,	// (0x00014660) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x58f4,	// (0x00014660) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5905,	// (0x00014671) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5905,	// (0x00014671) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5915,	// (0x00014681) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5915,	// (0x00014681) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9cea,	// (0x00018a56) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9cea,	// (0x00018a56) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92f,	// (0x0001e69b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92f,	// (0x0001e69b) cell_vitu2_dropdown_list_ctrl_pane_g

0x5931,	// (0x0001469d) aid_size_cell_gallery2_ParamLimits

0x5931,	// (0x0001469d) aid_size_cell_gallery2

0x594f,	// (0x000146bb) grid_gallery2_pane_ParamLimits

0x594f,	// (0x000146bb) grid_gallery2_pane

0x5969,	// (0x000146d5) scroll_pane_cp029_ParamLimits

0x5969,	// (0x000146d5) scroll_pane_cp029

0x597a,	// (0x000146e6) cell_gallery2_pane_ParamLimits

0x597a,	// (0x000146e6) cell_gallery2_pane

0xd0f6,	// (0x0001be62) cell_gallery2_pane_g2

0x59de,	// (0x0001474a) cell_gallery2_pane_g3

0xd0fe,	// (0x0001be6a) cell_gallery2_pane_g4

0xd106,	// (0x0001be72) cell_gallery2_pane_g5

0x9fc9,	// (0x00018d35) grid_highlight_pane_cp10

0x4eb4,	// (0x00013c20) popup_vitu2_match_list_window_ParamLimits

0x4ecb,	// (0x00013c37) popup_vitu2_query_window_ParamLimits

0x4ecb,	// (0x00013c37) popup_vitu2_query_window

0x9549,	// (0x000182b5) bg_vitu2_candi_button_pane

0xd0db,	// (0x0001be47) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd0e4,	// (0x0001be50) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd0ed,	// (0x0001be59) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x59e6,	// (0x00014752) bg_button_pane_cp015

0x59fd,	// (0x00014769) bg_button_pane_cp016

0x5a09,	// (0x00014775) bg_button_pane_cp017

0xaa8a,	// (0x000197f6) bg_popup_sub_pane_cp22

0xd10e,	// (0x0001be7a) popup_vitu2_query_window_g1

0x5a4a,	// (0x000147b6) popup_vitu2_query_window_g2

0x0002,

0xf93a,	// (0x0001e6a6) popup_vitu2_query_window_g

0x5a70,	// (0x000147dc) popup_vitu2_query_window_t1_ParamLimits

0x5a70,	// (0x000147dc) popup_vitu2_query_window_t1

0x5aa5,	// (0x00014811) popup_vitu2_query_window_t2_ParamLimits

0x5aa5,	// (0x00014811) popup_vitu2_query_window_t2

0x5ab7,	// (0x00014823) popup_vitu2_query_window_t3_ParamLimits

0x5ab7,	// (0x00014823) popup_vitu2_query_window_t3

0x5adf,	// (0x0001484b) popup_vitu2_query_window_t4_ParamLimits

0x5adf,	// (0x0001484b) popup_vitu2_query_window_t4

0x5af3,	// (0x0001485f) popup_vitu2_query_window_t5_ParamLimits

0x5af3,	// (0x0001485f) popup_vitu2_query_window_t5

0x0006,

0xf941,	// (0x0001e6ad) popup_vitu2_query_window_t_ParamLimits

0xf941,	// (0x0001e6ad) popup_vitu2_query_window_t

0xcf45,	// (0x0001bcb1) main_cset_text_pane

0x5408,	// (0x00014174) aid_area_touch_slider_ParamLimits

0x5424,	// (0x00014190) cset_slider_pane_ParamLimits

0x5447,	// (0x000141b3) main_cset_slider_pane_g1_ParamLimits

0x545c,	// (0x000141c8) main_cset_slider_pane_g2_ParamLimits

0xcf66,	// (0x0001bcd2) main_cset_slider_pane_g3_ParamLimits

0xcf66,	// (0x0001bcd2) main_cset_slider_pane_g3

0x5471,	// (0x000141dd) main_cset_slider_pane_g4_ParamLimits

0x5471,	// (0x000141dd) main_cset_slider_pane_g4

0x5480,	// (0x000141ec) main_cset_slider_pane_g5_ParamLimits

0x5480,	// (0x000141ec) main_cset_slider_pane_g5

0x548e,	// (0x000141fa) main_cset_slider_pane_g6_ParamLimits

0x548e,	// (0x000141fa) main_cset_slider_pane_g6

0xf89e,	// (0x0001e60a) main_cset_slider_pane_g_ParamLimits

0xcf96,	// (0x0001bd02) main_cset_slider_pane_t1_ParamLimits

0x551e,	// (0x0001428a) main_cset_slider_pane_t2_ParamLimits

0x5538,	// (0x000142a4) main_cset_slider_pane_t3_ParamLimits

0x5552,	// (0x000142be) main_cset_slider_pane_t4_ParamLimits

0x556c,	// (0x000142d8) main_cset_slider_pane_t5_ParamLimits

0x558a,	// (0x000142f6) main_cset_slider_pane_t6_ParamLimits

0x559f,	// (0x0001430b) main_cset_slider_pane_t7_ParamLimits

0x55cd,	// (0x00014339) main_cset_slider_pane_t8_ParamLimits

0x55cd,	// (0x00014339) main_cset_slider_pane_t8

0x55f5,	// (0x00014361) main_cset_slider_pane_t9_ParamLimits

0x55f5,	// (0x00014361) main_cset_slider_pane_t9

0x561d,	// (0x00014389) main_cset_slider_pane_t10_ParamLimits

0x561d,	// (0x00014389) main_cset_slider_pane_t10

0x5645,	// (0x000143b1) main_cset_slider_pane_t11_ParamLimits

0x5645,	// (0x000143b1) main_cset_slider_pane_t11

0x566f,	// (0x000143db) main_cset_slider_pane_t12_ParamLimits

0x566f,	// (0x000143db) main_cset_slider_pane_t12

0x568c,	// (0x000143f8) main_cset_slider_pane_t13_ParamLimits

0x568c,	// (0x000143f8) main_cset_slider_pane_t13

0xf8c3,	// (0x0001e62f) main_cset_slider_pane_t_ParamLimits

0x9549,	// (0x000182b5) bg_popup_sub_pane_cp011

0xd11a,	// (0x0001be86) main_cset_text_pane_g1

0xd122,	// (0x0001be8e) main_cset_text_pane_t1

0xd130,	// (0x0001be9c) main_cset_text_pane_t2

0xd13e,	// (0x0001beaa) main_cset_text_pane_t3

0xd14c,	// (0x0001beb8) main_cset_text_pane_t4

0xd15a,	// (0x0001bec6) main_cset_text_pane_t5

0xd168,	// (0x0001bed4) main_cset_text_pane_t6

0xd176,	// (0x0001bee2) main_cset_text_pane_t7

0x0006,

0xf950,	// (0x0001e6bc) main_cset_text_pane_t

0x9549,	// (0x000182b5) main_cam4_burst_pane

0x9549,	// (0x000182b5) main_cam5_pane

0xcf07,	// (0x0001bc73) bg_button_pane_cp019

0xcf10,	// (0x0001bc7c) bg_button_pane_cp020

0xcf72,	// (0x0001bcde) main_cset_slider_pane_g7_ParamLimits

0xcf72,	// (0x0001bcde) main_cset_slider_pane_g7

0xcf7e,	// (0x0001bcea) main_cset_slider_pane_g8_ParamLimits

0xcf7e,	// (0x0001bcea) main_cset_slider_pane_g8

0x54a2,	// (0x0001420e) main_cset_slider_pane_g9_ParamLimits

0x54a2,	// (0x0001420e) main_cset_slider_pane_g9

0x54ae,	// (0x0001421a) main_cset_slider_pane_g10_ParamLimits

0x54ae,	// (0x0001421a) main_cset_slider_pane_g10

0x54ba,	// (0x00014226) main_cset_slider_pane_g11_ParamLimits

0x54ba,	// (0x00014226) main_cset_slider_pane_g11

0x54c6,	// (0x00014232) main_cset_slider_pane_g12_ParamLimits

0x54c6,	// (0x00014232) main_cset_slider_pane_g12

0x54d2,	// (0x0001423e) main_cset_slider_pane_g13_ParamLimits

0x54d2,	// (0x0001423e) main_cset_slider_pane_g13

0x54de,	// (0x0001424a) main_cset_slider_pane_g14_ParamLimits

0x54de,	// (0x0001424a) main_cset_slider_pane_g14

0x54ea,	// (0x00014256) main_cset_slider_pane_g15_ParamLimits

0x54ea,	// (0x00014256) main_cset_slider_pane_g15

0xcfbe,	// (0x0001bd2a) main_cset_slider_pane_t14_ParamLimits

0xcfbe,	// (0x0001bd2a) main_cset_slider_pane_t14

0xcff7,	// (0x0001bd63) main_cset_slider_pane_t15_ParamLimits

0xcff7,	// (0x0001bd63) main_cset_slider_pane_t15

0x5b5d,	// (0x000148c9) aid_cam4_burst_size_cell_ParamLimits

0x5b5d,	// (0x000148c9) aid_cam4_burst_size_cell

0x5b7d,	// (0x000148e9) grid_cam4_burst_pane_ParamLimits

0x5b7d,	// (0x000148e9) grid_cam4_burst_pane

0x5bb7,	// (0x00014923) linegrid_cam4_burst_pane_ParamLimits

0x5bb7,	// (0x00014923) linegrid_cam4_burst_pane

0xd4b4,	// (0x0001c220) scroll_pane_cp30_ParamLimits

0xd4b4,	// (0x0001c220) scroll_pane_cp30

0x5bd9,	// (0x00014945) cell_cam4_burst_pane_ParamLimits

0x5bd9,	// (0x00014945) cell_cam4_burst_pane

0xd184,	// (0x0001bef0) linegrid_cam4_burst_pane_g1_ParamLimits

0xd184,	// (0x0001bef0) linegrid_cam4_burst_pane_g1

0x5c2e,	// (0x0001499a) linegrid_cam4_burst_pane_g2_ParamLimits

0x5c2e,	// (0x0001499a) linegrid_cam4_burst_pane_g2

0xd191,	// (0x0001befd) linegrid_cam4_burst_pane_g3_ParamLimits

0xd191,	// (0x0001befd) linegrid_cam4_burst_pane_g3

0x0002,

0xf95f,	// (0x0001e6cb) linegrid_cam4_burst_pane_g_ParamLimits

0xf95f,	// (0x0001e6cb) linegrid_cam4_burst_pane_g

0x5c3f,	// (0x000149ab) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5c3f,	// (0x000149ab) linegrid_cam4_burst_pane_g3_copy1

0xd19e,	// (0x0001bf0a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd19e,	// (0x0001bf0a) linegrid_cam4_burst_pane_g4

0x5c5d,	// (0x000149c9) linegrid_cam4_burst_pane_g5_ParamLimits

0x5c5d,	// (0x000149c9) linegrid_cam4_burst_pane_g5

0x5c6e,	// (0x000149da) linegrid_cam4_burst_pane_g6_ParamLimits

0x5c6e,	// (0x000149da) linegrid_cam4_burst_pane_g6

0xd1ab,	// (0x0001bf17) linegrid_cam4_burst_pane_g7_ParamLimits

0xd1ab,	// (0x0001bf17) linegrid_cam4_burst_pane_g7

0x5c85,	// (0x000149f1) cell_cam4_burst_pane_g1

0xd1c4,	// (0x0001bf30) main_cam5_pane_t1_ParamLimits

0xd1c4,	// (0x0001bf30) main_cam5_pane_t1

0xd1d6,	// (0x0001bf42) main_cam5_pane_t2_ParamLimits

0xd1d6,	// (0x0001bf42) main_cam5_pane_t2

0xd1e8,	// (0x0001bf54) main_cam5_pane_t3_ParamLimits

0xd1e8,	// (0x0001bf54) main_cam5_pane_t3

0xd1fa,	// (0x0001bf66) main_cam5_pane_t4_ParamLimits

0xd1fa,	// (0x0001bf66) main_cam5_pane_t4

0xd212,	// (0x0001bf7e) main_cam5_pane_t5_ParamLimits

0xd212,	// (0x0001bf7e) main_cam5_pane_t5

0xd226,	// (0x0001bf92) main_cam5_pane_t6_ParamLimits

0xd226,	// (0x0001bf92) main_cam5_pane_t6

0xd23a,	// (0x0001bfa6) main_cam5_pane_t7_ParamLimits

0xd23a,	// (0x0001bfa6) main_cam5_pane_t7

0xd24c,	// (0x0001bfb8) main_cam5_pane_t8_ParamLimits

0xd24c,	// (0x0001bfb8) main_cam5_pane_t8

0xd26a,	// (0x0001bfd6) main_cam5_pane_t9_ParamLimits

0xd26a,	// (0x0001bfd6) main_cam5_pane_t9

0xd27c,	// (0x0001bfe8) main_cam5_pane_t10_ParamLimits

0xd27c,	// (0x0001bfe8) main_cam5_pane_t10

0xd28e,	// (0x0001bffa) main_cam5_pane_t11_ParamLimits

0xd28e,	// (0x0001bffa) main_cam5_pane_t11

0xd2a2,	// (0x0001c00e) main_cam5_pane_t12_ParamLimits

0xd2a2,	// (0x0001c00e) main_cam5_pane_t12

0xd2b9,	// (0x0001c025) main_cam5_pane_t13_ParamLimits

0xd2b9,	// (0x0001c025) main_cam5_pane_t13

0x000c,

0xf96b,	// (0x0001e6d7) main_cam5_pane_t_ParamLimits

0xf96b,	// (0x0001e6d7) main_cam5_pane_t

0x0357,	// (0x0000f0c3) popup_scut_keymap_window_ParamLimits

0x0357,	// (0x0000f0c3) popup_scut_keymap_window

0x5c98,	// (0x00014a04) aid_size_cell_brow_shortcut

0x9fc9,	// (0x00018d35) bg_popup_window_pane_cp010

0x5ca4,	// (0x00014a10) grid_scut_pane

0x5cb0,	// (0x00014a1c) cell_scut_pane_ParamLimits

0x5cb0,	// (0x00014a1c) cell_scut_pane

0x5cc9,	// (0x00014a35) cell_scut_pane_g1

0xd2dc,	// (0x0001c048) cell_scut_pane_t1

0xd2eb,	// (0x0001c057) cell_scut_pane_t2

0x5cd2,	// (0x00014a3e) cell_scut_pane_t3

0x0002,

0xf986,	// (0x0001e6f2) cell_scut_pane_t

0x3b72,	// (0x000128de) main_mup3_pane_g8_ParamLimits

0x3b72,	// (0x000128de) main_mup3_pane_g8

0x4dc1,	// (0x00013b2d) area_vitu2_query_pane_ParamLimits

0x4dc1,	// (0x00013b2d) area_vitu2_query_pane

0x5a15,	// (0x00014781) input_focus_pane_cp08

0xd2fa,	// (0x0001c066) area_vitu2_query_pane_g1

0x5ce0,	// (0x00014a4c) area_vitu2_query_pane_g2

0x0001,

0xf98d,	// (0x0001e6f9) area_vitu2_query_pane_g

0x5cf5,	// (0x00014a61) area_vitu2_query_pane_t1_ParamLimits

0x5cf5,	// (0x00014a61) area_vitu2_query_pane_t1

0x5d09,	// (0x00014a75) area_vitu2_query_pane_t2_ParamLimits

0x5d09,	// (0x00014a75) area_vitu2_query_pane_t2

0x5d1d,	// (0x00014a89) area_vitu2_query_pane_t3_ParamLimits

0x5d1d,	// (0x00014a89) area_vitu2_query_pane_t3

0xd306,	// (0x0001c072) area_vitu2_query_pane_t4_ParamLimits

0xd306,	// (0x0001c072) area_vitu2_query_pane_t4

0xd32e,	// (0x0001c09a) area_vitu2_query_pane_t5_ParamLimits

0xd32e,	// (0x0001c09a) area_vitu2_query_pane_t5

0xd356,	// (0x0001c0c2) area_vitu2_query_pane_t6_ParamLimits

0xd356,	// (0x0001c0c2) area_vitu2_query_pane_t6

0x0006,

0xf992,	// (0x0001e6fe) area_vitu2_query_pane_t_ParamLimits

0xf992,	// (0x0001e6fe) area_vitu2_query_pane_t

0x5d49,	// (0x00014ab5) bg_button_pane_cp018

0x5d55,	// (0x00014ac1) bg_button_pane_cp021

0x5d61,	// (0x00014acd) bg_button_pane_cp022

0x5d8c,	// (0x00014af8) input_focus_pane_cp09

0x22d4,	// (0x00011040) aid_size_touch_mv_arrow_left

0x22fd,	// (0x00011069) aid_size_touch_mv_arrow_right

0x5502,	// (0x0001426e) main_cset_slider_pane_g16_ParamLimits

0x5502,	// (0x0001426e) main_cset_slider_pane_g16

0x5510,	// (0x0001427c) main_cset_slider_pane_g17_ParamLimits

0x5510,	// (0x0001427c) main_cset_slider_pane_g17

0x5c85,	// (0x000149f1) cell_cam4_burst_pane_g1_ParamLimits

0x9549,	// (0x000182b5) compa_mode_pane

0x5732,	// (0x0001449e) popup_vtel_slider_window_g3_ParamLimits

0x5732,	// (0x0001449e) popup_vtel_slider_window_g3

0x5749,	// (0x000144b5) popup_vtel_slider_window_g4_ParamLimits

0x5749,	// (0x000144b5) popup_vtel_slider_window_g4

0x5760,	// (0x000144cc) popup_vtel_slider_window_t1_ParamLimits

0x5760,	// (0x000144cc) popup_vtel_slider_window_t1

0x9549,	// (0x000182b5) main_cl_pane

0xbce6,	// (0x0001aa52) popup_imed_adjust2_window_ParamLimits

0xaa8a,	// (0x000197f6) bg_tb_trans_pane_cp05_ParamLimits

0xc669,	// (0x0001b3d5) popup_imed_adjust2_window_g1_ParamLimits

0xc678,	// (0x0001b3e4) popup_imed_adjust2_window_g2_ParamLimits

0xc678,	// (0x0001b3e4) popup_imed_adjust2_window_g2

0xc684,	// (0x0001b3f0) popup_imed_adjust2_window_g3_ParamLimits

0xc684,	// (0x0001b3f0) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x0001e479) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x0001e479) popup_imed_adjust2_window_g

0xc690,	// (0x0001b3fc) popup_imed_adjust2_window_t1_ParamLimits

0xc6a8,	// (0x0001b414) slider_imed_adjust_pane_ParamLimits

0xc6bc,	// (0x0001b428) slider_imed_adjust_pane_g1_ParamLimits

0xc6cc,	// (0x0001b438) slider_imed_adjust_pane_g2_ParamLimits

0xc6dc,	// (0x0001b448) slider_imed_adjust_pane_g3_ParamLimits

0xc6ed,	// (0x0001b459) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x0001e480) slider_imed_adjust_pane_g_ParamLimits

0x4b41,	// (0x000138ad) aid_touch_area_cam4_ParamLimits

0x4b41,	// (0x000138ad) aid_touch_area_cam4

0xcc9d,	// (0x0001ba09) battery_pane_cp01

0x4c14,	// (0x00013980) main_camera4_pane_g6_ParamLimits

0x4c14,	// (0x00013980) main_camera4_pane_g6

0x4c3e,	// (0x000139aa) main_camera4_pane_t2_ParamLimits

0x4c3e,	// (0x000139aa) main_camera4_pane_t2

0x0001,

0xf811,	// (0x0001e57d) main_camera4_pane_t_ParamLimits

0xf811,	// (0x0001e57d) main_camera4_pane_t

0x4c73,	// (0x000139df) aid_touch_area_vid4_ParamLimits

0x4c73,	// (0x000139df) aid_touch_area_vid4

0x4cca,	// (0x00013a36) main_video4_pane_g5_ParamLimits

0x4cca,	// (0x00013a36) main_video4_pane_g5

0x4cf0,	// (0x00013a5c) vid4_progress_pane_ParamLimits

0x4cf0,	// (0x00013a5c) vid4_progress_pane

0xcf8a,	// (0x0001bcf6) main_cset_slider_pane_g18_ParamLimits

0xcf8a,	// (0x0001bcf6) main_cset_slider_pane_g18

0xd1b8,	// (0x0001bf24) cell_cam4_burst_pane_g2_ParamLimits

0xd1b8,	// (0x0001bf24) cell_cam4_burst_pane_g2

0x0001,

0xf966,	// (0x0001e6d2) cell_cam4_burst_pane_g_ParamLimits

0xf966,	// (0x0001e6d2) cell_cam4_burst_pane_g

0x9da8,	// (0x00018b14) bg_cl_pane_ParamLimits

0x9da8,	// (0x00018b14) bg_cl_pane

0x5d9d,	// (0x00014b09) cl_header_pane_ParamLimits

0x5d9d,	// (0x00014b09) cl_header_pane

0x5db1,	// (0x00014b1d) cl_listscroll_pane_ParamLimits

0x5db1,	// (0x00014b1d) cl_listscroll_pane

0xd3a2,	// (0x0001c10e) bg_cl_pane_g1

0xd3aa,	// (0x0001c116) bg_cl_pane_g2

0xd3b2,	// (0x0001c11e) bg_cl_pane_g3

0xd3ba,	// (0x0001c126) bg_cl_pane_g4

0xd3c2,	// (0x0001c12e) bg_cl_pane_g5

0xd3ca,	// (0x0001c136) bg_cl_pane_g6

0xd3d2,	// (0x0001c13e) bg_cl_pane_g7

0xd3da,	// (0x0001c146) bg_cl_pane_g8

0xd3e2,	// (0x0001c14e) bg_cl_pane_g9

0x0008,

0xf9a1,	// (0x0001e70d) bg_cl_pane_g

0x5dc1,	// (0x00014b2d) aid_height_cl_leading_ParamLimits

0x5dc1,	// (0x00014b2d) aid_height_cl_leading

0x5dcd,	// (0x00014b39) aid_height_cl_text_ParamLimits

0x5dcd,	// (0x00014b39) aid_height_cl_text

0x95be,	// (0x0001832a) bg_cl_header_pane_ParamLimits

0x95be,	// (0x0001832a) bg_cl_header_pane

0x5dec,	// (0x00014b58) cl_header_pane_g1_ParamLimits

0x5dec,	// (0x00014b58) cl_header_pane_g1

0x5e02,	// (0x00014b6e) cl_header_pane_t1_ParamLimits

0x5e02,	// (0x00014b6e) cl_header_pane_t1

0xd3ea,	// (0x0001c156) cl_list_pane

0xcf5d,	// (0x0001bcc9) hc_scroll_pane_cp01

0xa1df,	// (0x00018f4b) bg_cl_header_pane_g1

0xce19,	// (0x0001bb85) bg_cl_header_pane_g2

0xa1ff,	// (0x00018f6b) bg_cl_header_pane_g3

0xce29,	// (0x0001bb95) bg_cl_header_pane_g4

0xce21,	// (0x0001bb8d) bg_cl_header_pane_g5

0xd0b3,	// (0x0001be1f) bg_cl_header_pane_g6

0xce41,	// (0x0001bbad) bg_cl_header_pane_g7

0xce49,	// (0x0001bbb5) bg_cl_header_pane_g8

0xce39,	// (0x0001bba5) bg_cl_header_pane_g9

0x0008,

0xf9b4,	// (0x0001e720) bg_cl_header_pane_g

0x5e1b,	// (0x00014b87) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5e1b,	// (0x00014b87) hc_cl_list_double_graphic_heading_pane

0x5e2e,	// (0x00014b9a) hc_cl_list_single_graphic_pane_ParamLimits

0x5e2e,	// (0x00014b9a) hc_cl_list_single_graphic_pane

0x5e46,	// (0x00014bb2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5e46,	// (0x00014bb2) hc_cl_list_single_graphic_pane_g1

0x5e52,	// (0x00014bbe) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5e52,	// (0x00014bbe) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c7,	// (0x0001e733) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c7,	// (0x0001e733) hc_cl_list_single_graphic_pane_g

0x5e66,	// (0x00014bd2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5e66,	// (0x00014bd2) hc_cl_list_single_graphic_pane_t1

0x5e46,	// (0x00014bb2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5e46,	// (0x00014bb2) hc_cl_list_double_graphic_heading_pane_g1

0x5e7b,	// (0x00014be7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5e7b,	// (0x00014be7) hc_cl_list_double_graphic_heading_pane_g2

0x5e8f,	// (0x00014bfb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5e8f,	// (0x00014bfb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9cc,	// (0x0001e738) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9cc,	// (0x0001e738) hc_cl_list_double_graphic_heading_pane_g

0x5ea3,	// (0x00014c0f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5ea3,	// (0x00014c0f) hc_cl_list_double_graphic_heading_pane_t1

0x5eb8,	// (0x00014c24) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5eb8,	// (0x00014c24) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d3,	// (0x0001e73f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d3,	// (0x0001e73f) hc_cl_list_double_graphic_heading_pane_t

0xd3fb,	// (0x0001c167) vid4_progress_pane_g1

0xd40b,	// (0x0001c177) vid4_progress_pane_g2

0x5ecd,	// (0x00014c39) vid4_progress_pane_g3

0xd41b,	// (0x0001c187) vid4_progress_pane_g4

0x0004,

0xf9d8,	// (0x0001e744) vid4_progress_pane_g

0x5edf,	// (0x00014c4b) vid4_progress_pane_t1

0xd439,	// (0x0001c1a5) vid4_progress_pane_t2

0x0002,

0xf9e3,	// (0x0001e74f) vid4_progress_pane_t

0x5ef9,	// (0x00014c65) wait_bar_pane_cp07

0xbfb2,	// (0x0001ad1e) blid_firmament_pane_ParamLimits

0xbff5,	// (0x0001ad61) popup_blid_sat_info2_window_g1

0xc019,	// (0x0001ad85) popup_blid_sat_info2_window_t3

0xc027,	// (0x0001ad93) popup_blid_sat_info2_window_t4

0xc035,	// (0x0001ada1) popup_blid_sat_info2_window_t5

0xc043,	// (0x0001adaf) popup_blid_sat_info2_window_t6

0xc053,	// (0x0001adbf) popup_blid_sat_info2_window_t7

0xc061,	// (0x0001adcd) popup_blid_sat_info2_window_t8

0xc06f,	// (0x0001addb) popup_blid_sat_info2_window_t9

0xc07d,	// (0x0001ade9) popup_blid_sat_info2_window_t10

0xc144,	// (0x0001aeb0) aid_firma_cardinal_ParamLimits

0xc158,	// (0x0001aec4) blid_firmament_pane_t1_ParamLimits

0xc16f,	// (0x0001aedb) blid_firmament_pane_t2_ParamLimits

0xc186,	// (0x0001aef2) blid_firmament_pane_t3_ParamLimits

0xc19d,	// (0x0001af09) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x0001e372) blid_firmament_pane_t_ParamLimits

0xc1b4,	// (0x0001af20) blid_sat_info_pane_ParamLimits

0x95be,	// (0x0001832a) main_cam_set_pane_ParamLimits

0x4374,	// (0x000130e0) aid_size_cell_colour_35_ParamLimits

0x4394,	// (0x00013100) aid_size_cell_colour_112_ParamLimits

0x43b4,	// (0x00013120) aid_size_cell_effect_ParamLimits

0xaa8a,	// (0x000197f6) bg_tb_trans_pane_cp02_ParamLimits

0xa48c,	// (0x000191f8) heading_imed_pane_ParamLimits

0x43d4,	// (0x00013140) listscroll_imed_pane_ParamLimits

0xb3cf,	// (0x0001a13b) popup_call2_audio_first_window_g5_ParamLimits

0xb3cf,	// (0x0001a13b) popup_call2_audio_first_window_g5

0x4744,	// (0x000134b0) aid_size_touch_image3_arrow_left_ParamLimits

0x4744,	// (0x000134b0) aid_size_touch_image3_arrow_left

0x4770,	// (0x000134dc) aid_size_touch_image3_arrow_right_ParamLimits

0x4770,	// (0x000134dc) aid_size_touch_image3_arrow_right

0xd452,	// (0x0001c1be) vid4_progress_pane_t3

0x4579,	// (0x000132e5) main_hwr_training_symbol_option_pane_ParamLimits

0x4579,	// (0x000132e5) main_hwr_training_symbol_option_pane

0xc801,	// (0x0001b56d) popup_hwr_training_preview_window_ParamLimits

0xc801,	// (0x0001b56d) popup_hwr_training_preview_window

0x4599,	// (0x00013305) hwr_training_navi_pane_g5_ParamLimits

0x4599,	// (0x00013305) hwr_training_navi_pane_g5

0xce07,	// (0x0001bb73) popup_char_count_window

0x95be,	// (0x0001832a) bg_popup_sub_pane_cp20_ParamLimits

0x5872,	// (0x000145de) list_vitu2_match_list_pane_ParamLimits

0x587e,	// (0x000145ea) vitu2_page_scroll_pane_ParamLimits

0x587e,	// (0x000145ea) vitu2_page_scroll_pane

0xd4e2,	// (0x0001c24e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd4e2,	// (0x0001c24e) list_single_hwr_training_symbol_option_pane

0xd4f5,	// (0x0001c261) list_single_hwr_training_symbol_option_pane_g1

0xd4fd,	// (0x0001c269) list_single_hwr_training_symbol_option_pane_t1

0xd50b,	// (0x0001c277) bg_button_pane_cp023

0xd514,	// (0x0001c280) bg_button_pane_cp024

0xd547,	// (0x0001c2b3) vitu2_page_scroll_pane_g1

0xd54f,	// (0x0001c2bb) vitu2_page_scroll_pane_g2

0x0001,

0xf9ea,	// (0x0001e756) vitu2_page_scroll_pane_g

0xd557,	// (0x0001c2c3) vitu2_page_scroll_pane_t1

0xd467,	// (0x0001c1d3) popup_char_count_window_g1

0xd566,	// (0x0001c2d2) popup_char_count_window_g2

0xd470,	// (0x0001c1dc) popup_char_count_window_g3

0x0002,

0xf9ef,	// (0x0001e75b) popup_char_count_window_g

0xd56f,	// (0x0001c2db) popup_char_count_window_t1

0x9549,	// (0x000182b5) main_vded2_pane

0xc655,	// (0x0001b3c1) aid_size_cell_imed_line

0xc65f,	// (0x0001b3cb) grid_imed_line_width_pane

0xcd57,	// (0x0001bac3) vid4_indicators_pane_g4

0xd57d,	// (0x0001c2e9) cell_imed_line_width_pane_ParamLimits

0xd57d,	// (0x0001c2e9) cell_imed_line_width_pane

0xd593,	// (0x0001c2ff) cell_imed_line_width_pane_g1

0xd59c,	// (0x0001c308) cell_imed_line_width_pane_g2

0x0001,

0xf9f6,	// (0x0001e762) cell_imed_line_width_pane_g

0x5f20,	// (0x00014c8c) main_vded2_pane_g1_ParamLimits

0x5f20,	// (0x00014c8c) main_vded2_pane_g1

0x5f3b,	// (0x00014ca7) main_vded2_pane_g2_ParamLimits

0x5f3b,	// (0x00014ca7) main_vded2_pane_g2

0x0001,

0xf9fb,	// (0x0001e767) main_vded2_pane_g_ParamLimits

0xf9fb,	// (0x0001e767) main_vded2_pane_g

0x5f4d,	// (0x00014cb9) vded2_slider_pane_ParamLimits

0x5f4d,	// (0x00014cb9) vded2_slider_pane

0x5f5d,	// (0x00014cc9) aid_size_touch_vded2_end

0x5f67,	// (0x00014cd3) aid_size_touch_vded2_playhead

0xd5a4,	// (0x0001c310) aid_size_touch_vded2_start

0xd5ac,	// (0x0001c318) vded2_slider_bg_pane

0xd5b5,	// (0x0001c321) vded2_slider_pane_g1

0xd5be,	// (0x0001c32a) vded2_slider_pane_g2

0x5f71,	// (0x00014cdd) vded2_slider_pane_g3

0x0002,

0xfa00,	// (0x0001e76c) vded2_slider_pane_g

0xd479,	// (0x0001c1e5) vded2_slider_bg_pane_g1

0xd482,	// (0x0001c1ee) vded2_slider_bg_pane_g2

0xd48b,	// (0x0001c1f7) vded2_slider_bg_pane_g3

0x0002,

0xfa07,	// (0x0001e773) vded2_slider_bg_pane_g

0x2801,	// (0x0001156d) aid_postcard_touch_down_pane_ParamLimits

0x2801,	// (0x0001156d) aid_postcard_touch_down_pane

0x2819,	// (0x00011585) aid_postcard_touch_up_pane_ParamLimits

0x2819,	// (0x00011585) aid_postcard_touch_up_pane

0x9549,	// (0x000182b5) main_blid2_pane

0xbcc8,	// (0x0001aa34) popup_blid2_search_window

0x9549,	// (0x000182b5) blid2_gps_pane

0x9549,	// (0x000182b5) blid2_navig_pane

0x9549,	// (0x000182b5) blid2_search_pane

0x9549,	// (0x000182b5) blid2_tripm_pane

0x5f7c,	// (0x00014ce8) blid2_search_pane_g1_ParamLimits

0x5f7c,	// (0x00014ce8) blid2_search_pane_g1

0x5f8f,	// (0x00014cfb) blid2_search_pane_t1_ParamLimits

0x5f8f,	// (0x00014cfb) blid2_search_pane_t1

0x5fa1,	// (0x00014d0d) aid_size_cell_blid2_gps_ParamLimits

0x5fa1,	// (0x00014d0d) aid_size_cell_blid2_gps

0x5fb9,	// (0x00014d25) blid2_gps_pane_g1_ParamLimits

0x5fb9,	// (0x00014d25) blid2_gps_pane_g1

0x5fcd,	// (0x00014d39) grid_blid2_satellite_pane_ParamLimits

0x5fcd,	// (0x00014d39) grid_blid2_satellite_pane

0x5fe5,	// (0x00014d51) blid2_navig_pane_g1_ParamLimits

0x5fe5,	// (0x00014d51) blid2_navig_pane_g1

0x5ff1,	// (0x00014d5d) blid2_navig_pane_t1_ParamLimits

0x5ff1,	// (0x00014d5d) blid2_navig_pane_t1

0x600c,	// (0x00014d78) blid2_navig_pane_t2_ParamLimits

0x600c,	// (0x00014d78) blid2_navig_pane_t2

0x0001,

0xfa0e,	// (0x0001e77a) blid2_navig_pane_t_ParamLimits

0xfa0e,	// (0x0001e77a) blid2_navig_pane_t

0x6027,	// (0x00014d93) blid2_navig_ring_pane_ParamLimits

0x6027,	// (0x00014d93) blid2_navig_ring_pane

0x6042,	// (0x00014dae) blid2_speed_pane_ParamLimits

0x6042,	// (0x00014dae) blid2_speed_pane

0x604e,	// (0x00014dba) blid2_tripm_pane_g1_ParamLimits

0x604e,	// (0x00014dba) blid2_tripm_pane_g1

0x6069,	// (0x00014dd5) blid2_tripm_pane_g2_ParamLimits

0x6069,	// (0x00014dd5) blid2_tripm_pane_g2

0x607c,	// (0x00014de8) blid2_tripm_pane_g3_ParamLimits

0x607c,	// (0x00014de8) blid2_tripm_pane_g3

0x608d,	// (0x00014df9) blid2_tripm_pane_g4_ParamLimits

0x608d,	// (0x00014df9) blid2_tripm_pane_g4

0x609e,	// (0x00014e0a) blid2_tripm_pane_g5_ParamLimits

0x609e,	// (0x00014e0a) blid2_tripm_pane_g5

0x0005,

0xfa13,	// (0x0001e77f) blid2_tripm_pane_g_ParamLimits

0xfa13,	// (0x0001e77f) blid2_tripm_pane_g

0x60c4,	// (0x00014e30) blid2_tripm_pane_t1_ParamLimits

0x60c4,	// (0x00014e30) blid2_tripm_pane_t1

0x60dd,	// (0x00014e49) blid2_tripm_pane_t2_ParamLimits

0x60dd,	// (0x00014e49) blid2_tripm_pane_t2

0x60f6,	// (0x00014e62) blid2_tripm_pane_t3_ParamLimits

0x60f6,	// (0x00014e62) blid2_tripm_pane_t3

0x0003,

0xfa20,	// (0x0001e78c) blid2_tripm_pane_t_ParamLimits

0xfa20,	// (0x0001e78c) blid2_tripm_pane_t

0x613d,	// (0x00014ea9) cell_blid2_satellite_pane_ParamLimits

0x613d,	// (0x00014ea9) cell_blid2_satellite_pane

0x6159,	// (0x00014ec5) cell_blid2_satellite_pane_g1

0xd5c6,	// (0x0001c332) cell_blid2_satellite_pane_t1

0x9d30,	// (0x00018a9c) blid2_speed_pane_g1

0xd5d4,	// (0x0001c340) blid2_speed_pane_t1

0xd5e2,	// (0x0001c34e) blid2_speed_pane_t2

0x0001,

0xfa29,	// (0x0001e795) blid2_speed_pane_t

0x9d30,	// (0x00018a9c) blid2_navig_ring_pane_g1

0x6162,	// (0x00014ece) blid2_navig_ring_pane_g2

0x616a,	// (0x00014ed6) blid2_navig_ring_pane_g3

0x6172,	// (0x00014ede) blid2_navig_ring_pane_g4

0x617a,	// (0x00014ee6) blid2_navig_ring_pane_g5

0x0004,

0xfa2e,	// (0x0001e79a) blid2_navig_ring_pane_g

0x9549,	// (0x000182b5) bg_popup_window_pane_cp011

0xd5f0,	// (0x0001c35c) popup_blid2_search_window_g1

0xd5f8,	// (0x0001c364) popup_blid2_search_window_t1

0xd606,	// (0x0001c372) popup_blid2_search_window_t2

0x0001,

0xfa39,	// (0x0001e7a5) popup_blid2_search_window_t

0xa0ee,	// (0x00018e5a) main_browser_pane_g1

0x9da8,	// (0x00018b14) main_browser_pane_ParamLimits

0x95be,	// (0x0001832a) bg_button_pane_cp011_ParamLimits

0x50d2,	// (0x00013e3e) cell_vitu2_function_pane_g1_ParamLimits

0xaa8a,	// (0x000197f6) bg_popup_sub_pane_cp22_ParamLimits

0x5a15,	// (0x00014781) input_focus_pane_cp08_ParamLimits

0x5a31,	// (0x0001479d) popup_vitu2_query_button_pane_ParamLimits

0x5a31,	// (0x0001479d) popup_vitu2_query_button_pane

0x5a40,	// (0x000147ac) popup_vitu2_query_input_button_pane

0xd10e,	// (0x0001be7a) popup_vitu2_query_window_g1_ParamLimits

0x5a4a,	// (0x000147b6) popup_vitu2_query_window_g2_ParamLimits

0xf93a,	// (0x0001e6a6) popup_vitu2_query_window_g_ParamLimits

0x9549,	// (0x000182b5) bg_button_pane_cp026

0x6182,	// (0x00014eee) popup_vitu2_query_input_button_pane_g1

0x9549,	// (0x000182b5) bg_button_pane_cp025

0xd614,	// (0x0001c380) popup_vitu2_query_button_pane_t1

0x3762,	// (0x000124ce) main_mp3_pane_t6

0x3770,	// (0x000124dc) popup_slider_window_cp01

0xccbb,	// (0x0001ba27) cam4_battery_pane

0xcd10,	// (0x0001ba7c) cam4_battery_pane_cp02

0xd3f3,	// (0x0001c15f) cam4_battery_pane_cp01

0xd3f3,	// (0x0001c15f) cam4_battery_pane_cp03

0x9d30,	// (0x00018a9c) cam4_battery_pane_g1

0xd622,	// (0x0001c38e) cam4_battery_pane_g2

0x0001,

0xfa3e,	// (0x0001e7aa) cam4_battery_pane_g

0xc08b,	// (0x0001adf7) popup_blid_sat_info2_window_t11

0x22d4,	// (0x00011040) aid_size_touch_mv_arrow_left_ParamLimits

0x22fd,	// (0x00011069) aid_size_touch_mv_arrow_right_ParamLimits

0xa8ff,	// (0x0001966b) navi_pane_g1_ParamLimits

0x233c,	// (0x000110a8) navi_pane_g2_ParamLimits

0x236a,	// (0x000110d6) navi_pane_g3_ParamLimits

0xf32f,	// (0x0001e09b) navi_pane_g_ParamLimits

0x23c4,	// (0x00011130) navi_pane_mv_t1_ParamLimits

0x43e0,	// (0x0001314c) grid_imed_effect_pane_ParamLimits

0x0ec5,	// (0x0000fc31) aid_placing_vt_slider_lsc

0xa02a,	// (0x00018d96) aid_placing_vt_slider_prt

0x95be,	// (0x0001832a) bg_tb_trans_pane_cp01_ParamLimits

0xc2f3,	// (0x0001b05f) popup_image_details_window_g1_ParamLimits

0xc306,	// (0x0001b072) popup_image_details_window_g2_ParamLimits

0xc31b,	// (0x0001b087) popup_image_details_window_g3_ParamLimits

0xc31b,	// (0x0001b087) popup_image_details_window_g3

0xf646,	// (0x0001e3b2) popup_image_details_window_g_ParamLimits

0xc32f,	// (0x0001b09b) popup_image_details_window_t1_ParamLimits

0xc341,	// (0x0001b0ad) popup_image_details_window_t2_ParamLimits

0xc35a,	// (0x0001b0c6) popup_image_details_window_t3_ParamLimits

0xc36e,	// (0x0001b0da) popup_image_details_window_t4_ParamLimits

0xc389,	// (0x0001b0f5) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x0001e3b9) popup_image_details_window_t_ParamLimits

0x5dd9,	// (0x00014b45) cl_header_name_pane_ParamLimits

0x5dd9,	// (0x00014b45) cl_header_name_pane

0x618a,	// (0x00014ef6) cl_header_name_pane_t1_ParamLimits

0x618a,	// (0x00014ef6) cl_header_name_pane_t1

0x61ab,	// (0x00014f17) cl_header_name_pane_t2_ParamLimits

0x61ab,	// (0x00014f17) cl_header_name_pane_t2

0x61ed,	// (0x00014f59) cl_header_name_pane_t3_ParamLimits

0x61ed,	// (0x00014f59) cl_header_name_pane_t3

0x0002,

0xfa43,	// (0x0001e7af) cl_header_name_pane_t_ParamLimits

0xfa43,	// (0x0001e7af) cl_header_name_pane_t

0x2395,	// (0x00011101) navi_pane_mv_g2_ParamLimits

0xcda3,	// (0x0001bb0f) field_vitu2_entry_pane_g1_ParamLimits

0xcdaf,	// (0x0001bb1b) field_vitu2_entry_pane_g2_ParamLimits

0xaa68,	// (0x000197d4) field_vitu2_entry_pane_g3_ParamLimits

0xaa68,	// (0x000197d4) field_vitu2_entry_pane_g3

0xf843,	// (0x0001e5af) field_vitu2_entry_pane_g_ParamLimits

0x4f62,	// (0x00013cce) cell_vitu2_itu_pane_g1_ParamLimits

0x4f7a,	// (0x00013ce6) cell_vitu2_itu_pane_g2_ParamLimits

0x4f7a,	// (0x00013ce6) cell_vitu2_itu_pane_g2

0x0001,

0xf84f,	// (0x0001e5bb) cell_vitu2_itu_pane_g_ParamLimits

0xf84f,	// (0x0001e5bb) cell_vitu2_itu_pane_g

0x95be,	// (0x0001832a) bg_vkb2_func_pane_cp05_ParamLimits

0x95be,	// (0x0001832a) bg_vkb2_func_pane_cp05

0x95be,	// (0x0001832a) bg_vkb2_func_pane_cp03

0x95be,	// (0x0001832a) bg_vkb2_func_pane_cp04

0x95be,	// (0x0001832a) bg_vkb2_func_pane_cp10_ParamLimits

0x95be,	// (0x0001832a) bg_vkb2_func_pane_cp10

0x5d76,	// (0x00014ae2) bg_vkb2_func_pane_cp08

0x5d49,	// (0x00014ab5) bg_vkb2_func_pane_cp06

0x5d55,	// (0x00014ac1) bg_vkb2_func_pane_cp07

0xd51d,	// (0x0001c289) bg_vkb2_func_pane_cp11_ParamLimits

0xd51d,	// (0x0001c289) bg_vkb2_func_pane_cp11

0xd532,	// (0x0001c29e) bg_vkb2_func_pane_cp12_ParamLimits

0xd532,	// (0x0001c29e) bg_vkb2_func_pane_cp12

0x9549,	// (0x000182b5) bg_vkb2_func_pane_cp09

0xce19,	// (0x0001bb85) bg_vkb2_func_pane_g1

0xa1ff,	// (0x00018f6b) bg_vkb2_func_pane_g2

0xce21,	// (0x0001bb8d) bg_vkb2_func_pane_g3

0xce29,	// (0x0001bb95) bg_vkb2_func_pane_g4

0xd0b3,	// (0x0001be1f) bg_vkb2_func_pane_g5

0xce41,	// (0x0001bbad) bg_vkb2_func_pane_g6

0xce49,	// (0x0001bbb5) bg_vkb2_func_pane_g7

0xce39,	// (0x0001bba5) bg_vkb2_func_pane_g8

0xa1df,	// (0x00018f4b) bg_vkb2_func_pane_g9

0x0008,

0xfa4a,	// (0x0001e7b6) bg_vkb2_func_pane_g

0x60b2,	// (0x00014e1e) blid2_tripm_pane_g6_ParamLimits

0x60b2,	// (0x00014e1e) blid2_tripm_pane_g6

0xcb80,	// (0x0001b8ec) mp4_progress_pane_g1

0x6129,	// (0x00014e95) blid2_tripm_values_pane_ParamLimits

0x6129,	// (0x00014e95) blid2_tripm_values_pane

0x621e,	// (0x00014f8a) blid2_tripm_values_pane_t1

0x622c,	// (0x00014f98) blid2_tripm_values_pane_t2

0xd62c,	// (0x0001c398) blid2_tripm_values_pane_t3

0x623a,	// (0x00014fa6) blid2_tripm_values_pane_t4

0x6248,	// (0x00014fb4) blid2_tripm_values_pane_t5

0x6256,	// (0x00014fc2) blid2_tripm_values_pane_t6

0xd63a,	// (0x0001c3a6) blid2_tripm_values_pane_t7

0x6264,	// (0x00014fd0) blid2_tripm_values_pane_t8

0x6272,	// (0x00014fde) blid2_tripm_values_pane_t9

0x0008,

0xfa5d,	// (0x0001e7c9) blid2_tripm_values_pane_t

0x0f02,	// (0x0000fc6e) call_video_pane_t1_ParamLimits

0x0f1c,	// (0x0000fc88) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x0001df49) call_video_pane_t_ParamLimits

0x26ee,	// (0x0001145a) msg_header_pane_g1_ParamLimits

0xab58,	// (0x000198c4) msg_header_pane_g2_ParamLimits

0xab58,	// (0x000198c4) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x0001e139) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x0001e139) msg_header_pane_g

0x9da8,	// (0x00018b14) main_clock2_pane_ParamLimits

0x40dd,	// (0x00012e49) grid_clock2_toolbar_pane_ParamLimits

0x40dd,	// (0x00012e49) grid_clock2_toolbar_pane

0x40dd,	// (0x00012e49) listscroll_clock2_pane_ParamLimits

0x40dd,	// (0x00012e49) listscroll_clock2_pane

0x41bc,	// (0x00012f28) main_clock2_pane_t3_ParamLimits

0x41bc,	// (0x00012f28) main_clock2_pane_t3

0x41df,	// (0x00012f4b) main_clock2_pane_t4_ParamLimits

0x41df,	// (0x00012f4b) main_clock2_pane_t4

0xd648,	// (0x0001c3b4) cell_clock2_toolbar_pane

0xd650,	// (0x0001c3bc) cell_clock2_toolbar_pane_cp01

0xd650,	// (0x0001c3bc) cell_clock2_toolbar_pane_cp02

0xd658,	// (0x0001c3c4) cell_clock2_toolbar_pane_cp03

0xd660,	// (0x0001c3cc) list_clock2_pane

0xa865,	// (0x000195d1) scroll_pane_cp10

0xd668,	// (0x0001c3d4) list_single_clock2_pane_ParamLimits

0xd668,	// (0x0001c3d4) list_single_clock2_pane

0x9fc9,	// (0x00018d35) list_highlight_pane_cp08

0xd675,	// (0x0001c3e1) list_single_clock2_pane_t1

0xd683,	// (0x0001c3ef) list_single_clock2_pane_t2

0x0001,

0xfa70,	// (0x0001e7dc) list_single_clock2_pane_t

0x9549,	// (0x000182b5) bg_button_pane_cp10

0xd691,	// (0x0001c3fd) cell_clock2_toolbar_pane_g1

0x278d,	// (0x000114f9) aid_main_viewer_pane_g1_ParamLimits

0x278d,	// (0x000114f9) aid_main_viewer_pane_g1

0x279b,	// (0x00011507) aid_main_viewer_pane_g2_ParamLimits

0x279b,	// (0x00011507) aid_main_viewer_pane_g2

0x27a9,	// (0x00011515) aid_main_viewer_pane_g3_ParamLimits

0x27a9,	// (0x00011515) aid_main_viewer_pane_g3

0x27b8,	// (0x00011524) aid_main_viewer_pane_g4_ParamLimits

0x27b8,	// (0x00011524) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x0001e14a) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x0001e14a) aid_main_viewer_pane_g

0x30a3,	// (0x00011e0f) main_calc_pane_ParamLimits

0x30b7,	// (0x00011e23) main_dialer2_pane_ParamLimits

0x9549,	// (0x000182b5) main_cam6_pane

0x9549,	// (0x000182b5) main_vid6_pane

0x40e9,	// (0x00012e55) listscroll_gen_pane_cp06_ParamLimits

0x40e9,	// (0x00012e55) listscroll_gen_pane_cp06

0x4202,	// (0x00012f6e) main_clock2_pane_t5_ParamLimits

0x4202,	// (0x00012f6e) main_clock2_pane_t5

0x4260,	// (0x00012fcc) aid_call2_pane_cp10_ParamLimits

0x4272,	// (0x00012fde) aid_call_pane_cp10_ParamLimits

0xa8d4,	// (0x00019640) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa8d4,	// (0x00019640) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4284,	// (0x00012ff0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4284,	// (0x00012ff0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa8d4,	// (0x00019640) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x0001e46e) popup_clock_analogue_window_cp10_g_ParamLimits

0x429a,	// (0x00013006) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcbf1,	// (0x0001b95d) cell_dialer2_keypad_pane_g2_ParamLimits

0xcbf1,	// (0x0001b95d) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e2,	// (0x0001e54e) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e2,	// (0x0001e54e) cell_dialer2_keypad_pane_g

0x9d3a,	// (0x00018aa6) cell_dialer2_keypad_pane_t1

0x53fa,	// (0x00014166) main_cset_text2_pane_ParamLimits

0x53fa,	// (0x00014166) main_cset_text2_pane

0xd2fa,	// (0x0001c066) area_vitu2_query_pane_g1_ParamLimits

0x5ce0,	// (0x00014a4c) area_vitu2_query_pane_g2_ParamLimits

0xf98d,	// (0x0001e6f9) area_vitu2_query_pane_g_ParamLimits

0xd37e,	// (0x0001c0ea) area_vitu2_query_pane_t7_ParamLimits

0xd37e,	// (0x0001c0ea) area_vitu2_query_pane_t7

0x5d49,	// (0x00014ab5) bg_button_pane_cp018_ParamLimits

0x5d55,	// (0x00014ac1) bg_button_pane_cp021_ParamLimits

0x5d61,	// (0x00014acd) bg_button_pane_cp022_ParamLimits

0x5d76,	// (0x00014ae2) bg_vkb2_func_pane_cp08_ParamLimits

0x5d49,	// (0x00014ab5) bg_vkb2_func_pane_cp06_ParamLimits

0x5d55,	// (0x00014ac1) bg_vkb2_func_pane_cp07_ParamLimits

0x5d8c,	// (0x00014af8) input_focus_pane_cp09_ParamLimits

0xd699,	// (0x0001c405) cam6_autofocus_pane_ParamLimits

0xd699,	// (0x0001c405) cam6_autofocus_pane

0x6280,	// (0x00014fec) cam6_image_uncrop_pane_ParamLimits

0x6280,	// (0x00014fec) cam6_image_uncrop_pane

0x6290,	// (0x00014ffc) cam6_indi_pane_ParamLimits

0x6290,	// (0x00014ffc) cam6_indi_pane

0x62a6,	// (0x00015012) cam6_mode_pane_ParamLimits

0x62a6,	// (0x00015012) cam6_mode_pane

0x62b8,	// (0x00015024) cam6_timer_pane_ParamLimits

0x62b8,	// (0x00015024) cam6_timer_pane

0x62c4,	// (0x00015030) cam6_zoom_pane_ParamLimits

0x62c4,	// (0x00015030) cam6_zoom_pane

0x62d2,	// (0x0001503e) cam6_mode_pane_g1_ParamLimits

0x62d2,	// (0x0001503e) cam6_mode_pane_g1

0x62e2,	// (0x0001504e) cam6_mode_pane_g2_ParamLimits

0x62e2,	// (0x0001504e) cam6_mode_pane_g2

0x62f2,	// (0x0001505e) cam6_mode_pane_g3_ParamLimits

0x62f2,	// (0x0001505e) cam6_mode_pane_g3

0x6302,	// (0x0001506e) cam6_mode_pane_g4_ParamLimits

0x6302,	// (0x0001506e) cam6_mode_pane_g4

0x0003,

0xfa75,	// (0x0001e7e1) cam6_mode_pane_g_ParamLimits

0xfa75,	// (0x0001e7e1) cam6_mode_pane_g

0xbe41,	// (0x0001abad) bg_tb_trans_pane_cp08_ParamLimits

0xbe41,	// (0x0001abad) bg_tb_trans_pane_cp08

0xd6a7,	// (0x0001c413) cam6_battery_pane_ParamLimits

0xd6a7,	// (0x0001c413) cam6_battery_pane

0xd6bd,	// (0x0001c429) cam6_indi_pane_g1_ParamLimits

0xd6bd,	// (0x0001c429) cam6_indi_pane_g1

0xd6cf,	// (0x0001c43b) cam6_indi_pane_g2_ParamLimits

0xd6cf,	// (0x0001c43b) cam6_indi_pane_g2

0xd6e1,	// (0x0001c44d) cam6_indi_pane_g3_ParamLimits

0xd6e1,	// (0x0001c44d) cam6_indi_pane_g3

0x0002,

0xfa7e,	// (0x0001e7ea) cam6_indi_pane_g_ParamLimits

0xfa7e,	// (0x0001e7ea) cam6_indi_pane_g

0xd6f3,	// (0x0001c45f) cam6_indi_pane_t1_ParamLimits

0xd6f3,	// (0x0001c45f) cam6_indi_pane_t1

0x4d35,	// (0x00013aa1) cam6_autofocus_pane_g1

0x4d3d,	// (0x00013aa9) cam6_autofocus_pane_g2

0x4d45,	// (0x00013ab1) cam6_autofocus_pane_g3

0x4d4d,	// (0x00013ab9) cam6_autofocus_pane_g4

0x0003,

0xfa85,	// (0x0001e7f1) cam6_autofocus_pane_g

0xd719,	// (0x0001c485) cam6_timer_pane_g1

0xd721,	// (0x0001c48d) cam6_timer_pane_t1

0xd72f,	// (0x0001c49b) cam6_zoom_cont_pane

0xd737,	// (0x0001c4a3) cam6_zoom_pane_g1

0xd740,	// (0x0001c4ac) cam6_zoom_pane_g2

0x6312,	// (0x0001507e) cam6_zoom_pane_g3

0x0002,

0xfa8e,	// (0x0001e7fa) cam6_zoom_pane_g

0x9d30,	// (0x00018a9c) cam6_battery_pane_g1

0x9d30,	// (0x00018a9c) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x0001de1b) cam6_battery_pane_g

0xd737,	// (0x0001c4a3) cam6_zoom_cont_pane_g1

0xd740,	// (0x0001c4ac) cam6_zoom_cont_pane_g2

0xd749,	// (0x0001c4b5) cam6_zoom_cont_pane_g3

0x0002,

0xfa95,	// (0x0001e801) cam6_zoom_cont_pane_g

0x6330,	// (0x0001509c) cam6_mode_pane_cp_ParamLimits

0x6330,	// (0x0001509c) cam6_mode_pane_cp

0x6342,	// (0x000150ae) cam6_zoom_pane_cp_ParamLimits

0x6342,	// (0x000150ae) cam6_zoom_pane_cp

0x6350,	// (0x000150bc) vid6_image_uncrop_cif_pane_ParamLimits

0x6350,	// (0x000150bc) vid6_image_uncrop_cif_pane

0x6360,	// (0x000150cc) vid6_image_uncrop_nhd_pane_ParamLimits

0x6360,	// (0x000150cc) vid6_image_uncrop_nhd_pane

0x636f,	// (0x000150db) vid6_image_uncrop_vga_pane_ParamLimits

0x636f,	// (0x000150db) vid6_image_uncrop_vga_pane

0x637e,	// (0x000150ea) vid6_image_uncrop_wvga_pane_ParamLimits

0x637e,	// (0x000150ea) vid6_image_uncrop_wvga_pane

0x638d,	// (0x000150f9) vid6_indi_pane_ParamLimits

0x638d,	// (0x000150f9) vid6_indi_pane

0xbe41,	// (0x0001abad) bg_tb_trans_pane_cp09_ParamLimits

0xbe41,	// (0x0001abad) bg_tb_trans_pane_cp09

0xd761,	// (0x0001c4cd) cam6_battery_pane_cp_ParamLimits

0xd761,	// (0x0001c4cd) cam6_battery_pane_cp

0xd76d,	// (0x0001c4d9) vid6_indi_pane_g1_ParamLimits

0xd76d,	// (0x0001c4d9) vid6_indi_pane_g1

0xd77f,	// (0x0001c4eb) vid6_indi_pane_g2_ParamLimits

0xd77f,	// (0x0001c4eb) vid6_indi_pane_g2

0xd791,	// (0x0001c4fd) vid6_indi_pane_g3_ParamLimits

0xd791,	// (0x0001c4fd) vid6_indi_pane_g3

0xd7a8,	// (0x0001c514) vid6_indi_pane_g4_ParamLimits

0xd7a8,	// (0x0001c514) vid6_indi_pane_g4

0xd7bf,	// (0x0001c52b) vid6_indi_pane_g5_ParamLimits

0xd7bf,	// (0x0001c52b) vid6_indi_pane_g5

0x0004,

0xfa9c,	// (0x0001e808) vid6_indi_pane_g_ParamLimits

0xfa9c,	// (0x0001e808) vid6_indi_pane_g

0xd7d9,	// (0x0001c545) vid6_indi_pane_t1_ParamLimits

0xd7d9,	// (0x0001c545) vid6_indi_pane_t1

0xd7ef,	// (0x0001c55b) vid6_indi_pane_t2_ParamLimits

0xd7ef,	// (0x0001c55b) vid6_indi_pane_t2

0xd817,	// (0x0001c583) vid6_indi_pane_t3_ParamLimits

0xd817,	// (0x0001c583) vid6_indi_pane_t3

0xd83f,	// (0x0001c5ab) vid6_indi_pane_t4_ParamLimits

0xd83f,	// (0x0001c5ab) vid6_indi_pane_t4

0x0003,

0xfaa7,	// (0x0001e813) vid6_indi_pane_t_ParamLimits

0xfaa7,	// (0x0001e813) vid6_indi_pane_t

0xd863,	// (0x0001c5cf) wait_bar_pane_cp08

0x63a5,	// (0x00015111) main_cset_text2_pane_t1_ParamLimits

0x63a5,	// (0x00015111) main_cset_text2_pane_t1

0x631b,	// (0x00015087) listscroll_gen_pane_cp06_t1_ParamLimits

0x631b,	// (0x00015087) listscroll_gen_pane_cp06_t1

0x9549,	// (0x000182b5) main_cam6_set_pane

0x9cea,	// (0x00018a56) bg_tb_trans_pane_cp06_ParamLimits

0xccc3,	// (0x0001ba2f) cam4_indicators_pane_g1_ParamLimits

0xccd4,	// (0x0001ba40) cam4_indicators_pane_g2_ParamLimits

0xf81f,	// (0x0001e58b) cam4_indicators_pane_g_ParamLimits

0xccec,	// (0x0001ba58) cam4_indicators_pane_t1_ParamLimits

0x95be,	// (0x0001832a) bg_tb_trans_pane_cp07_ParamLimits

0xcd1a,	// (0x0001ba86) vid4_indicators_pane_g1_ParamLimits

0xcd30,	// (0x0001ba9c) vid4_indicators_pane_g2_ParamLimits

0xcd44,	// (0x0001bab0) vid4_indicators_pane_g3_ParamLimits

0xcd57,	// (0x0001bac3) vid4_indicators_pane_g4_ParamLimits

0xf831,	// (0x0001e59d) vid4_indicators_pane_g_ParamLimits

0xcd75,	// (0x0001bae1) vid4_indicators_pane_t1_ParamLimits

0xd3fb,	// (0x0001c167) vid4_progress_pane_g1_ParamLimits

0xd40b,	// (0x0001c177) vid4_progress_pane_g2_ParamLimits

0x5ecd,	// (0x00014c39) vid4_progress_pane_g3_ParamLimits

0xd41b,	// (0x0001c187) vid4_progress_pane_g4_ParamLimits

0xf9d8,	// (0x0001e744) vid4_progress_pane_g_ParamLimits

0x5edf,	// (0x00014c4b) vid4_progress_pane_t1_ParamLimits

0xd439,	// (0x0001c1a5) vid4_progress_pane_t2_ParamLimits

0xd452,	// (0x0001c1be) vid4_progress_pane_t3_ParamLimits

0xf9e3,	// (0x0001e74f) vid4_progress_pane_t_ParamLimits

0x5ef9,	// (0x00014c65) wait_bar_pane_cp07_ParamLimits

0x63c6,	// (0x00015132) main_cam6_set_pane_g2_ParamLimits

0x63c6,	// (0x00015132) main_cam6_set_pane_g2

0x63ec,	// (0x00015158) main_cset6_listscroll_pane_ParamLimits

0x63ec,	// (0x00015158) main_cset6_listscroll_pane

0x640a,	// (0x00015176) main_cset6_slider_pane_ParamLimits

0x640a,	// (0x00015176) main_cset6_slider_pane

0x6420,	// (0x0001518c) main_cset6_text2_pane_ParamLimits

0x6420,	// (0x0001518c) main_cset6_text2_pane

0xd872,	// (0x0001c5de) main_cset6_text_pane

0xd87a,	// (0x0001c5e6) main_cset_list_pane_copy1_ParamLimits

0xd87a,	// (0x0001c5e6) main_cset_list_pane_copy1

0xd88a,	// (0x0001c5f6) scroll_pane_cp028_copy1

0x642e,	// (0x0001519a) cset_list_set_pane_copy1

0x6442,	// (0x000151ae) aid_position_infowindow_above_copy1

0x644a,	// (0x000151b6) aid_position_infowindow_below_copy1

0x6452,	// (0x000151be) cset_list_set_pane_g1_copy1

0x645a,	// (0x000151c6) cset_list_set_pane_g3_copy1_ParamLimits

0x645a,	// (0x000151c6) cset_list_set_pane_g3_copy1

0x6469,	// (0x000151d5) cset_list_set_pane_t1_copy1_ParamLimits

0x6469,	// (0x000151d5) cset_list_set_pane_t1_copy1

0x95be,	// (0x0001832a) list_highlight_pane_cp021_copy1_ParamLimits

0x95be,	// (0x0001832a) list_highlight_pane_cp021_copy1

0xd893,	// (0x0001c5ff) cset6_slider_pane_ParamLimits

0xd893,	// (0x0001c5ff) cset6_slider_pane

0xd8bf,	// (0x0001c62b) main_cset6_slider_pane_g1_ParamLimits

0xd8bf,	// (0x0001c62b) main_cset6_slider_pane_g1

0x647e,	// (0x000151ea) main_cset6_slider_pane_g2_ParamLimits

0x647e,	// (0x000151ea) main_cset6_slider_pane_g2

0xd8e7,	// (0x0001c653) main_cset6_slider_pane_g3_ParamLimits

0xd8e7,	// (0x0001c653) main_cset6_slider_pane_g3

0x64a6,	// (0x00015212) main_cset6_slider_pane_g4_ParamLimits

0x64a6,	// (0x00015212) main_cset6_slider_pane_g4

0x64b2,	// (0x0001521e) main_cset6_slider_pane_g5_ParamLimits

0x64b2,	// (0x0001521e) main_cset6_slider_pane_g5

0xcf72,	// (0x0001bcde) main_cset6_slider_pane_g7_ParamLimits

0xcf72,	// (0x0001bcde) main_cset6_slider_pane_g7

0xcf7e,	// (0x0001bcea) main_cset6_slider_pane_g8_ParamLimits

0xcf7e,	// (0x0001bcea) main_cset6_slider_pane_g8

0x54a2,	// (0x0001420e) main_cset6_slider_pane_g9_ParamLimits

0x54a2,	// (0x0001420e) main_cset6_slider_pane_g9

0x54ae,	// (0x0001421a) main_cset6_slider_pane_g10_ParamLimits

0x54ae,	// (0x0001421a) main_cset6_slider_pane_g10

0x54ba,	// (0x00014226) main_cset6_slider_pane_g11_ParamLimits

0x54ba,	// (0x00014226) main_cset6_slider_pane_g11

0x54c6,	// (0x00014232) main_cset6_slider_pane_g12_ParamLimits

0x54c6,	// (0x00014232) main_cset6_slider_pane_g12

0x54d2,	// (0x0001423e) main_cset6_slider_pane_g13_ParamLimits

0x54d2,	// (0x0001423e) main_cset6_slider_pane_g13

0x54de,	// (0x0001424a) main_cset6_slider_pane_g14_ParamLimits

0x54de,	// (0x0001424a) main_cset6_slider_pane_g14

0x64c0,	// (0x0001522c) main_cset6_slider_pane_g15_ParamLimits

0x64c0,	// (0x0001522c) main_cset6_slider_pane_g15

0x5502,	// (0x0001426e) main_cset6_slider_pane_g16_ParamLimits

0x5502,	// (0x0001426e) main_cset6_slider_pane_g16

0x5510,	// (0x0001427c) main_cset6_slider_pane_g17_ParamLimits

0x5510,	// (0x0001427c) main_cset6_slider_pane_g17

0x0011,

0xfab0,	// (0x0001e81c) main_cset6_slider_pane_g_ParamLimits

0xfab0,	// (0x0001e81c) main_cset6_slider_pane_g

0xd8f3,	// (0x0001c65f) main_cset6_slider_pane_t1_ParamLimits

0xd8f3,	// (0x0001c65f) main_cset6_slider_pane_t1

0x64f0,	// (0x0001525c) main_cset6_slider_pane_t2_ParamLimits

0x64f0,	// (0x0001525c) main_cset6_slider_pane_t2

0x651b,	// (0x00015287) main_cset6_slider_pane_t3_ParamLimits

0x651b,	// (0x00015287) main_cset6_slider_pane_t3

0x6546,	// (0x000152b2) main_cset6_slider_pane_t4_ParamLimits

0x6546,	// (0x000152b2) main_cset6_slider_pane_t4

0x6571,	// (0x000152dd) main_cset6_slider_pane_t5_ParamLimits

0x6571,	// (0x000152dd) main_cset6_slider_pane_t5

0xd934,	// (0x0001c6a0) main_cset6_slider_pane_t7_ParamLimits

0xd934,	// (0x0001c6a0) main_cset6_slider_pane_t7

0x659e,	// (0x0001530a) main_cset6_slider_pane_t8_ParamLimits

0x659e,	// (0x0001530a) main_cset6_slider_pane_t8

0x65c2,	// (0x0001532e) main_cset6_slider_pane_t9_ParamLimits

0x65c2,	// (0x0001532e) main_cset6_slider_pane_t9

0x65e6,	// (0x00015352) main_cset6_slider_pane_t10_ParamLimits

0x65e6,	// (0x00015352) main_cset6_slider_pane_t10

0x660a,	// (0x00015376) main_cset6_slider_pane_t11_ParamLimits

0x660a,	// (0x00015376) main_cset6_slider_pane_t11

0xd96a,	// (0x0001c6d6) main_cset6_slider_pane_t14_ParamLimits

0xd96a,	// (0x0001c6d6) main_cset6_slider_pane_t14

0xd9a3,	// (0x0001c70f) main_cset6_slider_pane_t15_ParamLimits

0xd9a3,	// (0x0001c70f) main_cset6_slider_pane_t15

0x000b,

0xfad5,	// (0x0001e841) main_cset6_slider_pane_t_ParamLimits

0xfad5,	// (0x0001e841) main_cset6_slider_pane_t

0xd9dc,	// (0x0001c748) cset_slider_pane_g1_copy1

0xd9e5,	// (0x0001c751) cset_slider_pane_g2_copy1

0xd9ee,	// (0x0001c75a) cset_slider_pane_g3_copy1

0x9549,	// (0x000182b5) bg_popup_sub_pane_cp011_copy1

0xda00,	// (0x0001c76c) main_cset_text_pane_g1_copy1

0xd122,	// (0x0001be8e) main_cset_text_pane_t1_copy1

0xd130,	// (0x0001be9c) main_cset_text_pane_t2_copy1

0xd13e,	// (0x0001beaa) main_cset_text_pane_t3_copy1

0xd14c,	// (0x0001beb8) main_cset_text_pane_t4_copy1

0xd15a,	// (0x0001bec6) main_cset_text_pane_t5_copy1

0xda08,	// (0x0001c774) main_cset_text_pane_t6_copy1

0xda16,	// (0x0001c782) main_cset_text_pane_t7_copy1

0x63a5,	// (0x00015111) main_cset_text2_pane_t1_copy1

0x95be,	// (0x0001832a) main_ncimui_pane

0x3345,	// (0x000120b1) popup_query_ncimui_window_ParamLimits

0x3345,	// (0x000120b1) popup_query_ncimui_window

0xc42a,	// (0x0001b196) field_cale_ev2_pane_g4_ParamLimits

0xc42a,	// (0x0001b196) field_cale_ev2_pane_g4

0x4695,	// (0x00013401) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4695,	// (0x00013401) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b9,	// (0x0001e525) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b9,	// (0x0001e525) cell_video_dialer_keypad_pane_g

0x46ad,	// (0x00013419) cell_video_dialer_keypad_pane_t1

0x9549,	// (0x000182b5) bg_popup_window_pane_cp012

0xbc22,	// (0x0001a98e) heading_pane_cp06

0xda42,	// (0x0001c7ae) ncim_query_content_pane

0x9549,	// (0x000182b5) bg_popup_heading_pane_cp01

0xda4a,	// (0x0001c7b6) ncim_heading_pane_t1

0xda58,	// (0x0001c7c4) ncim_indicator_popup_pane

0xda6a,	// (0x0001c7d6) ncim_query_button_pane

0xda80,	// (0x0001c7ec) ncim_query_content_pane_t1

0xda92,	// (0x0001c7fe) ncim_query_content_pane_t2

0x0005,

0xfb19,	// (0x0001e885) ncim_query_content_pane_t

0xdacc,	// (0x0001c838) ncim_query_list_pane

0xdade,	// (0x0001c84a) ncim_query_popup_pane

0xda58,	// (0x0001c7c4) ncim_indicator_popup_pane_ParamLimits

0x6776,	// (0x000154e2) ncim_query_content_pane_g1_ParamLimits

0x6776,	// (0x000154e2) ncim_query_content_pane_g1

0xda80,	// (0x0001c7ec) ncim_query_content_pane_t1_ParamLimits

0xda92,	// (0x0001c7fe) ncim_query_content_pane_t2_ParamLimits

0x6782,	// (0x000154ee) ncim_query_content_pane_t3_ParamLimits

0x6782,	// (0x000154ee) ncim_query_content_pane_t3

0x67aa,	// (0x00015516) ncim_query_content_pane_t4_ParamLimits

0x67aa,	// (0x00015516) ncim_query_content_pane_t4

0x67d2,	// (0x0001553e) ncim_query_content_pane_t5_ParamLimits

0x67d2,	// (0x0001553e) ncim_query_content_pane_t5

0xdaa4,	// (0x0001c810) ncim_query_content_pane_t6_ParamLimits

0xdaa4,	// (0x0001c810) ncim_query_content_pane_t6

0xfb19,	// (0x0001e885) ncim_query_content_pane_t_ParamLimits

0xdacc,	// (0x0001c838) ncim_query_list_pane_ParamLimits

0xdade,	// (0x0001c84a) ncim_query_popup_pane_ParamLimits

0xdaf2,	// (0x0001c85e) wait_bar_pane_cp04

0x9549,	// (0x000182b5) input_focus_pane_cp011

0xdafa,	// (0x0001c866) ncim_query_popup_pane_t1

0xdb08,	// (0x0001c874) ncim_list_query_list_pane_ParamLimits

0xdb08,	// (0x0001c874) ncim_list_query_list_pane

0x9549,	// (0x000182b5) bg_button_pane_cp027

0xdb1b,	// (0x0001c887) ncim_query_button_pane_g1

0x9549,	// (0x000182b5) list_highlight_pane_cp012

0xdb25,	// (0x0001c891) ncim_list_query_list_pane_g1

0xdb2d,	// (0x0001c899) ncim_list_query_list_pane_t1

0xcce0,	// (0x0001ba4c) cam4_indicators_pane_g3_ParamLimits

0xcce0,	// (0x0001ba4c) cam4_indicators_pane_g3

0xcd63,	// (0x0001bacf) vid4_indicators_pane_g5_ParamLimits

0xcd63,	// (0x0001bacf) vid4_indicators_pane_g5

0xd42a,	// (0x0001c196) vid4_progress_pane_g5_ParamLimits

0xd42a,	// (0x0001c196) vid4_progress_pane_g5

0x6661,	// (0x000153cd) main_ncimui_pane_g1

0x66ca,	// (0x00015436) ncimui_group_query_pane_ParamLimits

0x66ca,	// (0x00015436) ncimui_group_query_pane

0x6712,	// (0x0001547e) ncimui_list_pane_ParamLimits

0x6712,	// (0x0001547e) ncimui_list_pane

0x6739,	// (0x000154a5) ncimui_text_pane_ParamLimits

0x6739,	// (0x000154a5) ncimui_text_pane

0x67fa,	// (0x00015566) ncimui_text_pane_t1_ParamLimits

0x67fa,	// (0x00015566) ncimui_text_pane_t1

0xdb3b,	// (0x0001c8a7) ncimui_list_single_graphic_pane_ParamLimits

0xdb3b,	// (0x0001c8a7) ncimui_list_single_graphic_pane

0x6818,	// (0x00015584) ncimui_query_pane_ParamLimits

0x6818,	// (0x00015584) ncimui_query_pane

0x9549,	// (0x000182b5) list_highlight_pane_cp013

0xdb4b,	// (0x0001c8b7) ncim_list_query_list_pane_t1_copy1

0xdb25,	// (0x0001c891) ncim_list_single_graphic_pane_g1

0x682b,	// (0x00015597) ncim_query_button_pane_cp01

0x6837,	// (0x000155a3) ncim_query_entry_pane_ParamLimits

0x6837,	// (0x000155a3) ncim_query_entry_pane

0x684a,	// (0x000155b6) ncimui_query_pane_g1

0x6856,	// (0x000155c2) ncimui_query_pane_t1_ParamLimits

0x6856,	// (0x000155c2) ncimui_query_pane_t1

0x95be,	// (0x0001832a) input_focus_pane_cp012

0xdb59,	// (0x0001c8c5) ncim_query_entry_pane_t1

0x9da8,	// (0x00018b14) main_im_pane_ParamLimits

0x95be,	// (0x0001832a) main_mobtv_pane_ParamLimits

0x95be,	// (0x0001832a) main_mobtv_pane

0x64d8,	// (0x00015244) main_cset6_slider_pane_g18_ParamLimits

0x64d8,	// (0x00015244) main_cset6_slider_pane_g18

0x64e4,	// (0x00015250) main_cset6_slider_pane_g19_ParamLimits

0x64e4,	// (0x00015250) main_cset6_slider_pane_g19

0x9d06,	// (0x00018a72) bg_main_mobtv_pane_ParamLimits

0x9d06,	// (0x00018a72) bg_main_mobtv_pane

0x686f,	// (0x000155db) main_mobtv_info_pane

0x687a,	// (0x000155e6) main_mobtv_loading_pane_ParamLimits

0x687a,	// (0x000155e6) main_mobtv_loading_pane

0xdb6b,	// (0x0001c8d7) main_mobtv_pg_channel_list_pane

0xdb75,	// (0x0001c8e1) main_mobtv_pg_hdr_pane

0x6887,	// (0x000155f3) main_mobtv_programe_curr_pane_ParamLimits

0x6887,	// (0x000155f3) main_mobtv_programe_curr_pane

0x6894,	// (0x00015600) main_mobtv_programe_next_pane_ParamLimits

0x6894,	// (0x00015600) main_mobtv_programe_next_pane

0xdb7e,	// (0x0001c8ea) popup_mobtv_noti_window

0x9d30,	// (0x00018a9c) main_tv_pg_hdr_pane_g1

0xdb88,	// (0x0001c8f4) main_tv_pg_hdr_pane_g2

0xdb90,	// (0x0001c8fc) main_tv_pg_hdr_pane_g3

0xdb98,	// (0x0001c904) main_tv_pg_hdr_pane_g4

0xdba0,	// (0x0001c90c) main_tv_pg_hdr_pane_g5

0xdbaa,	// (0x0001c916) main_tv_pg_hdr_pane_g6

0xdbb4,	// (0x0001c920) main_tv_pg_hdr_pane_g7

0xdbbe,	// (0x0001c92a) main_tv_pg_hdr_pane_g8

0xdbc8,	// (0x0001c934) main_tv_pg_hdr_pane_g9

0xdbd2,	// (0x0001c93e) main_tv_pg_hdr_pane_g10

0xdbdc,	// (0x0001c948) main_tv_pg_hdr_pane_g11

0x000a,

0xfb26,	// (0x0001e892) main_tv_pg_hdr_pane_g

0xdbe6,	// (0x0001c952) main_tv_pg_hdr_pane_t1

0xdbf4,	// (0x0001c960) main_tv_pg_hdr_pane_t2

0xdc02,	// (0x0001c96e) main_tv_pg_hdr_pane_t3

0xdc12,	// (0x0001c97e) main_tv_pg_hdr_pane_t4

0xdc22,	// (0x0001c98e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3d,	// (0x0001e8a9) main_tv_pg_hdr_pane_t

0xdc32,	// (0x0001c99e) single_mobtv_pg_channel_pane_ParamLimits

0xdc32,	// (0x0001c99e) single_mobtv_pg_channel_pane

0xdc44,	// (0x0001c9b0) single_mobtv_pg_channel_table_pane

0xdc4d,	// (0x0001c9b9) single_mobtv_pg_channel_thumb_pane

0xdc56,	// (0x0001c9c2) single_tv_pg_channel_pane_g1

0xdc5f,	// (0x0001c9cb) single_tv_pg_channel_pane_g2

0x0001,

0xfb48,	// (0x0001e8b4) single_tv_pg_channel_pane_g

0x9cea,	// (0x00018a56) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9cea,	// (0x00018a56) bg_single_mobtv_pg_channel_thumb_pane

0xdc68,	// (0x0001c9d4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc68,	// (0x0001c9d4) single_mobtv_pg_channel_thumb_pane_g1

0xdc76,	// (0x0001c9e2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc76,	// (0x0001c9e2) single_mobtv_pg_channel_thumb_pane_g2

0xdc82,	// (0x0001c9ee) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc82,	// (0x0001c9ee) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4d,	// (0x0001e8b9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4d,	// (0x0001e8b9) single_mobtv_pg_channel_thumb_pane_g

0xdc8e,	// (0x0001c9fa) single_mobtv_pg_channel_thumb_pane_t1

0xdc9c,	// (0x0001ca08) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb54,	// (0x0001e8c0) single_mobtv_pg_channel_thumb_pane_t

0x9d30,	// (0x00018a9c) bg_single_mobtv_pg_channel_table_pane_g1

0x9d30,	// (0x00018a9c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x0001de1b) bg_single_mobtv_pg_channel_table_pane_g

0xdcaa,	// (0x0001ca16) single_mobtv_pg_channel_table_pane_t1

0xdcb8,	// (0x0001ca24) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb59,	// (0x0001e8c5) single_mobtv_pg_channel_table_pane_t

0x68a9,	// (0x00015615) main_mobtv_info_pane_g1_ParamLimits

0x68a9,	// (0x00015615) main_mobtv_info_pane_g1

0x68c7,	// (0x00015633) main_mobtv_info_pane_t1_ParamLimits

0x68c7,	// (0x00015633) main_mobtv_info_pane_t1

0x693f,	// (0x000156ab) main_mobtv_info_pane_t2_ParamLimits

0x693f,	// (0x000156ab) main_mobtv_info_pane_t2

0x0002,

0xfb63,	// (0x0001e8cf) main_mobtv_info_pane_t_ParamLimits

0xfb63,	// (0x0001e8cf) main_mobtv_info_pane_t

0x69d0,	// (0x0001573c) wait_bar_pane_cp05

0x69e2,	// (0x0001574e) main_mobtv_loading_pane_g1_ParamLimits

0x69e2,	// (0x0001574e) main_mobtv_loading_pane_g1

0x69f3,	// (0x0001575f) main_mobtv_loading_pane_g2_ParamLimits

0x69f3,	// (0x0001575f) main_mobtv_loading_pane_g2

0x69ff,	// (0x0001576b) main_mobtv_loading_pane_g3_ParamLimits

0x69ff,	// (0x0001576b) main_mobtv_loading_pane_g3

0x0002,

0xfb6a,	// (0x0001e8d6) main_mobtv_loading_pane_g_ParamLimits

0xfb6a,	// (0x0001e8d6) main_mobtv_loading_pane_g

0xdcc6,	// (0x0001ca32) main_mobtv_loading_pane_t1_ParamLimits

0xdcc6,	// (0x0001ca32) main_mobtv_loading_pane_t1

0xdcde,	// (0x0001ca4a) main_mobtv_loading_pane_t2_ParamLimits

0xdcde,	// (0x0001ca4a) main_mobtv_loading_pane_t2

0x0001,

0xfb71,	// (0x0001e8dd) main_mobtv_loading_pane_t_ParamLimits

0xfb71,	// (0x0001e8dd) main_mobtv_loading_pane_t

0x6a12,	// (0x0001577e) wait_bar_pane_cp06_ParamLimits

0x6a12,	// (0x0001577e) wait_bar_pane_cp06

0xdd02,	// (0x0001ca6e) main_mobtv_programe_curr_pane_t1

0xdd10,	// (0x0001ca7c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb76,	// (0x0001e8e2) main_mobtv_programe_curr_pane_t

0xdd1e,	// (0x0001ca8a) main_mobtv_programe_next_pane_t1

0xdd2c,	// (0x0001ca98) main_mobtv_programe_next_pane_t2

0xdd3a,	// (0x0001caa6) main_mobtv_programe_next_pane_t3

0x0002,

0xfb7b,	// (0x0001e8e7) main_mobtv_programe_next_pane_t

0x9549,	// (0x000182b5) bg_popup_mobtv_noti_window_pane

0xdd48,	// (0x0001cab4) popup_mobtv_noti_window_g1

0xdd50,	// (0x0001cabc) popup_mobtv_noti_window_t1

0xdd5e,	// (0x0001caca) popup_mobtv_noti_window_t2

0x0001,

0xfb82,	// (0x0001e8ee) popup_mobtv_noti_window_t

0x9d30,	// (0x00018a9c) bg_popup_mobtv_noti_window_pane_g1

0x9549,	// (0x000182b5) sc_clock_pane

0x9549,	// (0x000182b5) main_fs_bigclock_pane

0x6113,	// (0x00014e7f) blid2_tripm_pane_t4_ParamLimits

0x6113,	// (0x00014e7f) blid2_tripm_pane_t4

0x9cea,	// (0x00018a56) sc_clock_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) sc_clock_pane_g1

0x9d3a,	// (0x00018aa6) sc_clock_pane_t1_ParamLimits

0x9d3a,	// (0x00018aa6) sc_clock_pane_t1

0x9d3a,	// (0x00018aa6) sc_clock_pane_t2_ParamLimits

0x9d3a,	// (0x00018aa6) sc_clock_pane_t2

0x9d3a,	// (0x00018aa6) sc_clock_pane_t3_ParamLimits

0x9d3a,	// (0x00018aa6) sc_clock_pane_t3

0x0004,

0xfb87,	// (0x0001e8f3) sc_clock_pane_t_ParamLimits

0xfb87,	// (0x0001e8f3) sc_clock_pane_t

0x7826,	// (0x00016592) main_fs_bigclock_indicator_pane_ParamLimits

0x7826,	// (0x00016592) main_fs_bigclock_indicator_pane

0x6a92,	// (0x000157fe) main_fs_bigclock_pane_g1_ParamLimits

0x6a92,	// (0x000157fe) main_fs_bigclock_pane_g1

0x7832,	// (0x0001659e) main_fs_bigclock_pane_t1_ParamLimits

0x7832,	// (0x0001659e) main_fs_bigclock_pane_t1

0x7844,	// (0x000165b0) main_fs_bigclock_pane_t2_ParamLimits

0x7844,	// (0x000165b0) main_fs_bigclock_pane_t2

0x7858,	// (0x000165c4) main_fs_bigclock_pane_t3_ParamLimits

0x7858,	// (0x000165c4) main_fs_bigclock_pane_t3

0x0002,

0xfd18,	// (0x0001ea84) main_fs_bigclock_pane_t_ParamLimits

0xfd18,	// (0x0001ea84) main_fs_bigclock_pane_t

0xe707,	// (0x0001d473) main_fs_bigclock_indicator_pane_g1

0xda72,	// (0x0001c7de) ncim_query_content_pane_g2_ParamLimits

0xda72,	// (0x0001c7de) ncim_query_content_pane_g2

0x0001,

0xfb14,	// (0x0001e880) ncim_query_content_pane_g_ParamLimits

0xfb14,	// (0x0001e880) ncim_query_content_pane_g

0x9d3a,	// (0x00018aa6) sc_clock_pane_t4_ParamLimits

0x9d3a,	// (0x00018aa6) sc_clock_pane_t4

0x95be,	// (0x0001832a) main_radioblah_pane

0xcc41,	// (0x0001b9ad) cell_call4_button_pane_t1_copy1_ParamLimits

0xcc41,	// (0x0001b9ad) cell_call4_button_pane_t1_copy1

0x6679,	// (0x000153e5) main_ncimui_pane_t1_ParamLimits

0x6679,	// (0x000153e5) main_ncimui_pane_t1

0x6693,	// (0x000153ff) main_ncimui_pane_t2_ParamLimits

0x6693,	// (0x000153ff) main_ncimui_pane_t2

0x0002,

0xfb0d,	// (0x0001e879) main_ncimui_pane_t_ParamLimits

0xfb0d,	// (0x0001e879) main_ncimui_pane_t

0xaa8a,	// (0x000197f6) main_radioblah_anim_pane_ParamLimits

0xaa8a,	// (0x000197f6) main_radioblah_anim_pane

0xaa8a,	// (0x000197f6) main_radioblah_info_pane_ParamLimits

0xaa8a,	// (0x000197f6) main_radioblah_info_pane

0xaa76,	// (0x000197e2) main_radioblah_pane_t1_ParamLimits

0xaa76,	// (0x000197e2) main_radioblah_pane_t1

0xaa76,	// (0x000197e2) main_radioblah_pane_t2_ParamLimits

0xaa76,	// (0x000197e2) main_radioblah_pane_t2

0x0003,

0xfba8,	// (0x0001e914) main_radioblah_pane_t_ParamLimits

0xfba8,	// (0x0001e914) main_radioblah_pane_t

0x95be,	// (0x0001832a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x95be,	// (0x0001832a) main_radioblah_rocker_ctrl_pane

0xbe2d,	// (0x0001ab99) main_radioblah_info_pane_t1_ParamLimits

0xbe2d,	// (0x0001ab99) main_radioblah_info_pane_t1

0xdd9c,	// (0x0001cb08) main_radioblah_info_pane_t2_ParamLimits

0xdd9c,	// (0x0001cb08) main_radioblah_info_pane_t2

0x0003,

0xfbb1,	// (0x0001e91d) main_radioblah_info_pane_t_ParamLimits

0xfbb1,	// (0x0001e91d) main_radioblah_info_pane_t

0x9d30,	// (0x00018a9c) main_radioblah_rocker_ctrl_pane_g1

0x9d30,	// (0x00018a9c) main_radioblah_rocker_ctrl_pane_g2

0x9d30,	// (0x00018a9c) main_radioblah_rocker_ctrl_pane_g3

0x9d30,	// (0x00018a9c) main_radioblah_rocker_ctrl_pane_g4

0x9d30,	// (0x00018a9c) main_radioblah_rocker_ctrl_pane_g5

0x9d30,	// (0x00018a9c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbba,	// (0x0001e926) main_radioblah_rocker_ctrl_pane_g

0x63a5,	// (0x00015111) main_cset_text2_pane_t1_copy1_ParamLimits

0xccb1,	// (0x0001ba1d) cam4_image_uncrop_qvga_pane

0xcd06,	// (0x0001ba72) vid4_image_uncrop_qcif_pane

0xd699,	// (0x0001c405) cam6_image_uncrop_qvga_pane_ParamLimits

0xd699,	// (0x0001c405) cam6_image_uncrop_qvga_pane

0xd751,	// (0x0001c4bd) vid6_image_uncrop_qcif_pane_ParamLimits

0xd751,	// (0x0001c4bd) vid6_image_uncrop_qcif_pane

0x9549,	// (0x000182b5) bg_popup_preview_window_pane_cp03

0xda24,	// (0x0001c790) list_cset_text2_pane

0xda2c,	// (0x0001c798) main_cset6_text2_pane_g1

0xda34,	// (0x0001c7a0) main_cset6_text2_pane_t1

0xddeb,	// (0x0001cb57) list_cset_text2_pane_t1_ParamLimits

0xddeb,	// (0x0001cb57) list_cset_text2_pane_t1

0x95be,	// (0x0001832a) main_radioblah_pane_ParamLimits

0x69bc,	// (0x00015728) main_mobtv_info_pane_t3_ParamLimits

0x69bc,	// (0x00015728) main_mobtv_info_pane_t3

0xaa68,	// (0x000197d4) main_radioblah_pane_g1

0xdd6c,	// (0x0001cad8) main_radioblah_info_pane_g1

0x9d4e,	// (0x00018aba) main_radioblah_info_pane_t3_ParamLimits

0x9d4e,	// (0x00018aba) main_radioblah_info_pane_t3

0x1eb7,	// (0x00010c23) highlight_cell_cale_month_pane_ParamLimits

0x1eb7,	// (0x00010c23) highlight_cell_cale_month_pane

0x9549,	// (0x000182b5) main_phob_fisheye_pane

0xc49f,	// (0x0001b20b) scroll_pane_cp0031_ParamLimits

0xc49f,	// (0x0001b20b) scroll_pane_cp0031

0xd863,	// (0x0001c5cf) wait_bar_pane_cp08_ParamLimits

0x642e,	// (0x0001519a) cset_list_set_pane_copy1_ParamLimits

0xde05,	// (0x0001cb71) highlight_cell_cale_month_pane_g1

0x6c29,	// (0x00015995) highlight_cell_cale_month_pane_t1

0xd3ea,	// (0x0001c156) list_gen_pane_cp01

0xcf5d,	// (0x0001bcc9) scroll_pane_01

0x6c37,	// (0x000159a3) list_single_double_fisheye_pane

0x6c40,	// (0x000159ac) list_double_fisheye_pane_g1_ParamLimits

0x6c40,	// (0x000159ac) list_double_fisheye_pane_g1

0x6c4c,	// (0x000159b8) list_double_fisheye_pane_g2_ParamLimits

0x6c4c,	// (0x000159b8) list_double_fisheye_pane_g2

0x6c60,	// (0x000159cc) list_double_fisheye_pane_g3_ParamLimits

0x6c60,	// (0x000159cc) list_double_fisheye_pane_g3

0x0004,

0xfbc7,	// (0x0001e933) list_double_fisheye_pane_g_ParamLimits

0xfbc7,	// (0x0001e933) list_double_fisheye_pane_g

0x6c89,	// (0x000159f5) list_double_fisheye_pane_t1_ParamLimits

0x6c89,	// (0x000159f5) list_double_fisheye_pane_t1

0x6ca4,	// (0x00015a10) list_double_fisheye_pane_t2_ParamLimits

0x6ca4,	// (0x00015a10) list_double_fisheye_pane_t2

0x0001,

0xfbd2,	// (0x0001e93e) list_double_fisheye_pane_t_ParamLimits

0xfbd2,	// (0x0001e93e) list_double_fisheye_pane_t

0x9549,	// (0x000182b5) main_call5_pane

0x95be,	// (0x0001832a) sc_swipe_pane_ParamLimits

0x95be,	// (0x0001832a) sc_swipe_pane

0x6cd9,	// (0x00015a45) call5_image_pane_ParamLimits

0x6cd9,	// (0x00015a45) call5_image_pane

0x6cf6,	// (0x00015a62) call5_swipe_1_pane_ParamLimits

0x6cf6,	// (0x00015a62) call5_swipe_1_pane

0x6d09,	// (0x00015a75) call5_swipe_2_pane_ParamLimits

0x6d09,	// (0x00015a75) call5_swipe_2_pane

0x6d34,	// (0x00015aa0) popup_call5_audio_first_window_ParamLimits

0x6d34,	// (0x00015aa0) popup_call5_audio_first_window

0x9cea,	// (0x00018a56) call5_swipe_1_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) call5_swipe_1_pane_g1

0xde0d,	// (0x0001cb79) call5_swipe_1_pane_g2_ParamLimits

0xde0d,	// (0x0001cb79) call5_swipe_1_pane_g2

0x0001,

0xfbd7,	// (0x0001e943) call5_swipe_1_pane_g_ParamLimits

0xfbd7,	// (0x0001e943) call5_swipe_1_pane_g

0xde19,	// (0x0001cb85) call5_swipe_1_pane_t1_ParamLimits

0xde19,	// (0x0001cb85) call5_swipe_1_pane_t1

0x9cea,	// (0x00018a56) call5_swipe_2_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) call5_swipe_2_pane_g1

0xde2e,	// (0x0001cb9a) call5_swipe_2_pane_g2_ParamLimits

0xde2e,	// (0x0001cb9a) call5_swipe_2_pane_g2

0x0001,

0xfbdc,	// (0x0001e948) call5_swipe_2_pane_g_ParamLimits

0xfbdc,	// (0x0001e948) call5_swipe_2_pane_g

0xde3a,	// (0x0001cba6) call5_swipe_2_pane_t1_ParamLimits

0xde3a,	// (0x0001cba6) call5_swipe_2_pane_t1

0x9cea,	// (0x00018a56) sc_swipe_pane_g1_ParamLimits

0x9cea,	// (0x00018a56) sc_swipe_pane_g1

0x9cf8,	// (0x00018a64) sc_swipe_pane_g2_ParamLimits

0x9cf8,	// (0x00018a64) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x0001e4c1) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x0001e4c1) sc_swipe_pane_g

0x9d3a,	// (0x00018aa6) sc_swipe_pane_t1_ParamLimits

0x9d3a,	// (0x00018aa6) sc_swipe_pane_t1

0x9549,	// (0x000182b5) main_cmail_launcher_pane

0x6d49,	// (0x00015ab5) aid_size_cell_cmail_l_ParamLimits

0x6d49,	// (0x00015ab5) aid_size_cell_cmail_l

0x6d5e,	// (0x00015aca) grid_cmail_l_pane_ParamLimits

0x6d5e,	// (0x00015aca) grid_cmail_l_pane

0x6d78,	// (0x00015ae4) cell_cmail_l_pane_ParamLimits

0x6d78,	// (0x00015ae4) cell_cmail_l_pane

0x6d99,	// (0x00015b05) cell_cmail_l_pane_g1_ParamLimits

0x6d99,	// (0x00015b05) cell_cmail_l_pane_g1

0x6da5,	// (0x00015b11) cell_cmail_l_pane_t1_ParamLimits

0x6da5,	// (0x00015b11) cell_cmail_l_pane_t1

0x6dbb,	// (0x00015b27) cell_cmail_l_pane_t2_ParamLimits

0x6dbb,	// (0x00015b27) cell_cmail_l_pane_t2

0x0001,

0xfbe1,	// (0x0001e94d) cell_cmail_l_pane_t_ParamLimits

0xfbe1,	// (0x0001e94d) cell_cmail_l_pane_t

0x95be,	// (0x0001832a) grid_highlight_pane_cp018_ParamLimits

0x95be,	// (0x0001832a) grid_highlight_pane_cp018

0x023f,	// (0x0000efab) main2_pane_ParamLimits

0x023f,	// (0x0000efab) main2_pane

0x9e64,	// (0x00018bd0) popup_sp_fs_action_menu_bg_pane_g1

0x9e6c,	// (0x00018bd8) popup_sp_fs_action_menu_bg_pane_g2

0x9e74,	// (0x00018be0) popup_sp_fs_action_menu_bg_pane_g3

0x9e7c,	// (0x00018be8) popup_sp_fs_action_menu_bg_pane_g4

0x9e84,	// (0x00018bf0) popup_sp_fs_action_menu_bg_pane_g5

0x9e8c,	// (0x00018bf8) popup_sp_fs_action_menu_bg_pane_g6

0x9e94,	// (0x00018c00) popup_sp_fs_action_menu_bg_pane_g7

0x9e9c,	// (0x00018c08) popup_sp_fs_action_menu_bg_pane_g8

0x9ea4,	// (0x00018c10) popup_sp_fs_action_menu_bg_pane_g9

0x9eac,	// (0x00018c18) popup_sp_fs_action_menu_bg_pane_g10

0x9eac,	// (0x00018c18) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0001de6c) popup_sp_fs_action_menu_bg_pane_g

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g3_g1

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g3_g2

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x0001df1a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x0001df1a) list_medium_line_x2_t3_g3_g

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g3_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g3_t2

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0001df21) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0001df21) list_medium_line_x2_t3_g3_t

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g2_g1

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0001df28) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0001df28) list_medium_line_x2_t3_g2_g

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g2_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g2_t2

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0001df21) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0001df21) list_medium_line_x2_t3_g2_t

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g4_g1

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g4_g2

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g4_g3

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0001df2d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0001df2d) list_medium_line_x2_t4_g4_g

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g4_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g4_t2

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g4_t3

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0001df36) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0001df36) list_medium_line_x2_t4_g4_t

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g4_g1

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g4_g2

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g4_g3

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0001df2d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0001df2d) list_medium_line_x2_t2_g4_g

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g4_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x0001defd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x0001defd) list_medium_line_x2_t2_g4_t

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g3_g1

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g3_g2

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x0001df1a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x0001df1a) list_medium_line_x2_t2_g3_g

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g3_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x0001defd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x0001defd) list_medium_line_x2_t2_g3_t

0x200e,	// (0x00010d7a) main_sp_fs_list_pane_ParamLimits

0x200e,	// (0x00010d7a) main_sp_fs_list_pane

0xd494,	// (0x0001c200) sp_fs_scroll_pane_ParamLimits

0xd494,	// (0x0001c200) sp_fs_scroll_pane

0xa567,	// (0x000192d3) list_medium_line_x2_t3_t1

0xa567,	// (0x000192d3) list_medium_line_x2_t3_t2

0xa567,	// (0x000192d3) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x0001dfe3) list_medium_line_x2_t3_t

0xa567,	// (0x000192d3) list_medium_line_x3_t4_t1

0xa567,	// (0x000192d3) list_medium_line_x3_t4_t2

0xa567,	// (0x000192d3) list_medium_line_x3_t4_t3

0xa567,	// (0x000192d3) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x0001dfea) list_medium_line_x3_t4_t

0xa567,	// (0x000192d3) list_medium_line_x4_t5_t1

0xa567,	// (0x000192d3) list_medium_line_x4_t5_t2

0xa567,	// (0x000192d3) list_medium_line_x4_t5_t3

0xa567,	// (0x000192d3) list_medium_line_x4_t5_t4

0xa567,	// (0x000192d3) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x0001dff3) list_medium_line_x4_t5_t

0x9cea,	// (0x00018a56) list_medium_line_t4_g4_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t4_g4_g1

0x9cea,	// (0x00018a56) list_medium_line_t4_g4_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t4_g4_g2

0x9cea,	// (0x00018a56) list_medium_line_t4_g4_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t4_g4_g3

0x9cea,	// (0x00018a56) list_medium_line_t4_g4_g4_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0001df2d) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0001df2d) list_medium_line_t4_g4_g

0x9d3a,	// (0x00018aa6) list_medium_line_t4_g4_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t4_g4_t1

0x9d3a,	// (0x00018aa6) list_medium_line_t4_g4_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t4_g4_t2

0x9d3a,	// (0x00018aa6) list_medium_line_t4_g4_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t4_g4_t3

0x9d3a,	// (0x00018aa6) list_medium_line_t4_g4_t4_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0001df36) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0001df36) list_medium_line_t4_g4_t

0x20bc,	// (0x00010e28) chi_dic_find_pane_g1

0x30cb,	// (0x00011e37) main_tport_pane

0xa567,	// (0x000192d3) list_medium_line_plain_t1

0x9cea,	// (0x00018a56) list_medium_line_t2_g2_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t2_g2_g1

0x9cea,	// (0x00018a56) list_medium_line_t2_g2_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0001df28) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0001df28) list_medium_line_t2_g2_g

0x9d3a,	// (0x00018aa6) list_medium_line_t2_g2_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t2_g2_t1

0x9d3a,	// (0x00018aa6) list_medium_line_t2_g2_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x0001defd) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x0001defd) list_medium_line_t2_g2_t

0xd4c0,	// (0x0001c22c) aid_sp_fs_list_icon_a_sm

0xd4c8,	// (0x0001c234) aid_sp_fs_list_icon_d

0xd4d0,	// (0x0001c23c) aid_sp_fs_text_primary

0xd4d9,	// (0x0001c245) aid_sp_fs_text_secondary

0x9549,	// (0x000182b5) list_medium_line

0x9549,	// (0x000182b5) list_medium_line_g2

0x9549,	// (0x000182b5) list_medium_line_g3

0x9549,	// (0x000182b5) list_medium_line_plain

0x9549,	// (0x000182b5) list_medium_line_plain_t2

0x9549,	// (0x000182b5) list_medium_line_plain_t3

0x9549,	// (0x000182b5) list_medium_line_right_icon

0x9549,	// (0x000182b5) list_medium_line_right_iconx2

0x9549,	// (0x000182b5) list_medium_line_t2

0x9549,	// (0x000182b5) list_medium_line_t2_g2

0x9549,	// (0x000182b5) list_medium_line_t2_g3

0x9549,	// (0x000182b5) list_medium_line_t2_right_icon

0x9549,	// (0x000182b5) list_medium_line_t2_right_iconx2

0x9549,	// (0x000182b5) list_medium_line_t3

0x9549,	// (0x000182b5) list_medium_line_t3_g2

0x9549,	// (0x000182b5) list_medium_line_t3_g3

0x9549,	// (0x000182b5) list_medium_line_t3_right_iconx2

0x9549,	// (0x000182b5) list_medium_line_t4_g4

0x9549,	// (0x000182b5) list_medium_line_x2

0x9549,	// (0x000182b5) list_medium_line_x2_t2_g2

0x9549,	// (0x000182b5) list_medium_line_x2_t2_g3

0x9549,	// (0x000182b5) list_medium_line_x2_t2_g4

0x9549,	// (0x000182b5) list_medium_line_x2_t3

0x9549,	// (0x000182b5) list_medium_line_x2_t3_g2

0x9549,	// (0x000182b5) list_medium_line_x2_t3_g3

0x9549,	// (0x000182b5) list_medium_line_x2_t3_g4

0x9549,	// (0x000182b5) list_medium_line_x2_t4_g2

0x9549,	// (0x000182b5) list_medium_line_x2_t4_g4

0x9549,	// (0x000182b5) list_medium_line_x3

0x9549,	// (0x000182b5) list_medium_line_x3_t4

0x9549,	// (0x000182b5) list_medium_line_x3_t4_g4

0x9549,	// (0x000182b5) list_medium_line_x4_t4

0x9549,	// (0x000182b5) list_medium_line_x4_t4_g7

0x9549,	// (0x000182b5) list_medium_line_x4_t5

0x5f0c,	// (0x00014c78) list_single_fs_dyc_pane_ParamLimits

0x5f0c,	// (0x00014c78) list_single_fs_dyc_pane

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g1

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g2

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g3

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g4

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g5

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x4_t4_g7_g6

0x9cf8,	// (0x00018a64) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9cf8,	// (0x00018a64) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaee,	// (0x0001e85a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaee,	// (0x0001e85a) list_medium_line_x4_t4_g7_g

0x9d3a,	// (0x00018aa6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x4_t4_g7_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x4_t4_g7_t2

0x9d3a,	// (0x00018aa6) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x4_t4_g7_t3

0x9d4e,	// (0x00018aba) list_medium_line_x4_t4_g7_t4_ParamLimits

0x9d4e,	// (0x00018aba) list_medium_line_x4_t4_g7_t4

0x9d4e,	// (0x00018aba) list_medium_line_x4_t4_g7_t5_ParamLimits

0x9d4e,	// (0x00018aba) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafd,	// (0x0001e869) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafd,	// (0x0001e869) list_medium_line_x4_t4_g7_t

0x6630,	// (0x0001539c) list_single_dyc_row_pane_ParamLimits

0x6630,	// (0x0001539c) list_single_dyc_row_pane

0x6cc6,	// (0x00015a32) call5_gesture_pane_ParamLimits

0x6cc6,	// (0x00015a32) call5_gesture_pane

0x6d1c,	// (0x00015a88) call5_windows_pane_ParamLimits

0x6d1c,	// (0x00015a88) call5_windows_pane

0x6dd8,	// (0x00015b44) call5_swipe_1_pane_cp_ParamLimits

0x6dd8,	// (0x00015b44) call5_swipe_1_pane_cp

0x6de4,	// (0x00015b50) call5_swipe_2_pane_cp_ParamLimits

0x6de4,	// (0x00015b50) call5_swipe_2_pane_cp

0x9fc9,	// (0x00018d35) call5_image_pane_cp

0x6df0,	// (0x00015b5c) popup_call5_audio_first_window_cp_ParamLimits

0x6df0,	// (0x00015b5c) popup_call5_audio_first_window_cp

0xde4f,	// (0x0001cbbb) call5_swipe_1_pane_g1_cp_ParamLimits

0xde4f,	// (0x0001cbbb) call5_swipe_1_pane_g1_cp

0xde5c,	// (0x0001cbc8) call5_swipe_1_pane_g2_cp

0xde64,	// (0x0001cbd0) call5_swipe_1_pane_t1_cp_ParamLimits

0xde64,	// (0x0001cbd0) call5_swipe_1_pane_t1_cp

0xde4f,	// (0x0001cbbb) call5_swipe_2_pane_g1_cp_ParamLimits

0xde4f,	// (0x0001cbbb) call5_swipe_2_pane_g1_cp

0xde79,	// (0x0001cbe5) call5_swipe_2_pane_g2_cp

0xde81,	// (0x0001cbed) call5_swipe_2_pane_t1_cp_ParamLimits

0xde81,	// (0x0001cbed) call5_swipe_2_pane_t1_cp

0x95be,	// (0x0001832a) main_sp_fs_email_pane

0xd040,	// (0x0001bdac) main_sp_fs_listscroll_pane_te

0x6dfe,	// (0x00015b6a) popup_sp_fs_action_menu_pane_ParamLimits

0x6dfe,	// (0x00015b6a) popup_sp_fs_action_menu_pane

0x9d30,	// (0x00018a9c) bg_sp_fs_ctrlbar_pane_g1

0xde96,	// (0x0001cc02) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xde9f,	// (0x0001cc0b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdea8,	// (0x0001cc14) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x9d30,	// (0x00018a9c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe6,	// (0x0001e952) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbe4f,	// (0x0001abbb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbe4f,	// (0x0001abbb) bg_sp_fs_ctrlbar_ddmenu_pane

0xdeb1,	// (0x0001cc1d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdeb1,	// (0x0001cc1d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdebd,	// (0x0001cc29) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdebd,	// (0x0001cc29) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbef,	// (0x0001e95b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbef,	// (0x0001e95b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdec9,	// (0x0001cc35) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdec9,	// (0x0001cc35) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9d30,	// (0x00018a9c) list_medium_line_t2_right_icon_g1

0xa567,	// (0x000192d3) list_medium_line_t2_right_icon_t1

0xa567,	// (0x000192d3) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf4,	// (0x0001e960) list_medium_line_t2_right_icon_t

0xaa8a,	// (0x000197f6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xaa8a,	// (0x000197f6) bg_sp_fs_ctrlbar_pane

0x6e91,	// (0x00015bfd) main_sp_fs_ctrlbar_button_pane_cp01

0x6e9b,	// (0x00015c07) main_sp_fs_ctrlbar_ddmenu_pane

0xdf1d,	// (0x0001cc89) main_sp_fs_ctrlbar_pane_g1

0xdf29,	// (0x0001cc95) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbf9,	// (0x0001e965) main_sp_fs_ctrlbar_pane_g

0x6ed9,	// (0x00015c45) main_sp_fs_ctrlbar_pane_t1

0x6f18,	// (0x00015c84) main_sp_fs_ctrlbar_pane

0x6f3c,	// (0x00015ca8) main_sp_fs_listscroll_pane_te_cp01

0x6f68,	// (0x00015cd4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6f68,	// (0x00015cd4) popup_sp_fs_action_menu_pane_cp01

0x95be,	// (0x0001832a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x95be,	// (0x0001832a) bg_sp_fs_highlight_list_pane_cp01

0xdf50,	// (0x0001ccbc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdf50,	// (0x0001ccbc) sp_fs_action_menu_list_gene_pane_g1

0xdf5f,	// (0x0001cccb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf5f,	// (0x0001cccb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc07,	// (0x0001e973) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc07,	// (0x0001e973) sp_fs_action_menu_list_gene_pane_g

0xdf6c,	// (0x0001ccd8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdf6c,	// (0x0001ccd8) sp_fs_action_menu_list_gene_pane_t1

0xdf84,	// (0x0001ccf0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdf84,	// (0x0001ccf0) sp_fs_action_menu_list_gene_pane

0xdfa7,	// (0x0001cd13) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdfa7,	// (0x0001cd13) popup_sp_fs_action_menu_bg_pane

0xdfb5,	// (0x0001cd21) sp_fs_action_menu_list_pane_ParamLimits

0xdfb5,	// (0x0001cd21) sp_fs_action_menu_list_pane

0x6f8d,	// (0x00015cf9) sp_fs_scroll_pane_cp01_ParamLimits

0x6f8d,	// (0x00015cf9) sp_fs_scroll_pane_cp01

0xa567,	// (0x000192d3) list_medium_line_plain_t2_t1

0xa567,	// (0x000192d3) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x0001e960) list_medium_line_plain_t2_t

0xa567,	// (0x000192d3) list_medium_line_plain_t3_t1

0xa567,	// (0x000192d3) list_medium_line_plain_t3_t2

0xa567,	// (0x000192d3) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x0001dfe3) list_medium_line_plain_t3_t

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g2_g1

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0001df28) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0001df28) list_medium_line_x2_t2_g2_g

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g2_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x0001defd) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x0001defd) list_medium_line_x2_t2_g2_t

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g2_g1

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0001df28) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0001df28) list_medium_line_x2_t4_g2_g

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g2_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g2_t2

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g2_t3

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0001df36) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0001df36) list_medium_line_x2_t4_g2_t

0x9d30,	// (0x00018a9c) list_medium_line_t3_right_iconx2_g1

0x9d30,	// (0x00018a9c) list_medium_line_t3_right_iconx2_g2

0x9d30,	// (0x00018a9c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x0001e0ff) list_medium_line_t3_right_iconx2_g

0xa567,	// (0x000192d3) list_medium_line_t3_right_iconx2_t1

0xa567,	// (0x000192d3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf4,	// (0x0001e960) list_medium_line_t3_right_iconx2_t

0x9cea,	// (0x00018a56) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x3_t4_g4_g1

0x9cea,	// (0x00018a56) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x3_t4_g4_g2

0x9cea,	// (0x00018a56) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x3_t4_g4_g3

0x9cea,	// (0x00018a56) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0001df2d) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0001df2d) list_medium_line_x3_t4_g4_g

0x9d3a,	// (0x00018aa6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x3_t4_g4_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x3_t4_g4_t2

0x9d3a,	// (0x00018aa6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x3_t4_g4_t3

0x9d3a,	// (0x00018aa6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0001df36) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0001df36) list_medium_line_x3_t4_g4_t

0x6fb3,	// (0x00015d1f) list_single_dyc_row_text_pane_t1_ParamLimits

0x6fb3,	// (0x00015d1f) list_single_dyc_row_text_pane_t1

0x6ffc,	// (0x00015d68) list_single_dyc_row_text_pane_t2_ParamLimits

0x6ffc,	// (0x00015d68) list_single_dyc_row_text_pane_t2

0xdfd9,	// (0x0001cd45) list_single_dyc_row_text_pane_t3_ParamLimits

0xdfd9,	// (0x0001cd45) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0c,	// (0x0001e978) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0c,	// (0x0001e978) list_single_dyc_row_text_pane_t

0xdffd,	// (0x0001cd69) list_single_dyc_row_pane_g1_ParamLimits

0xdffd,	// (0x0001cd69) list_single_dyc_row_pane_g1

0xe009,	// (0x0001cd75) list_single_dyc_row_pane_g2_ParamLimits

0xe009,	// (0x0001cd75) list_single_dyc_row_pane_g2

0xe015,	// (0x0001cd81) list_single_dyc_row_pane_g3_ParamLimits

0xe015,	// (0x0001cd81) list_single_dyc_row_pane_g3

0xe021,	// (0x0001cd8d) list_single_dyc_row_pane_g4_ParamLimits

0xe021,	// (0x0001cd8d) list_single_dyc_row_pane_g4

0x0003,

0xfc19,	// (0x0001e985) list_single_dyc_row_pane_g_ParamLimits

0xfc19,	// (0x0001e985) list_single_dyc_row_pane_g

0xe02d,	// (0x0001cd99) list_single_dyc_row_text_pane_ParamLimits

0xe02d,	// (0x0001cd99) list_single_dyc_row_text_pane

0x9549,	// (0x000182b5) bg_sp_fs_scroll_pane

0xe04c,	// (0x0001cdb8) thumb_sp_fs_scroll_pane

0x9cea,	// (0x00018a56) list_medium_line_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_g1

0x9d3a,	// (0x00018aa6) list_medium_line_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t1

0x9cea,	// (0x00018a56) list_medium_line_x2_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_g1

0x9cea,	// (0x00018a56) list_medium_line_x2_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0001df28) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0001df28) list_medium_line_x2_g

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t1

0x9cea,	// (0x00018a56) list_medium_line_x3_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x3_g1

0xe055,	// (0x0001cdc1) list_medium_line_x3_g2_ParamLimits

0xe055,	// (0x0001cdc1) list_medium_line_x3_g2

0x0001,

0xfc22,	// (0x0001e98e) list_medium_line_x3_g_ParamLimits

0xfc22,	// (0x0001e98e) list_medium_line_x3_g

0xe063,	// (0x0001cdcf) list_medium_line_x3_t1_ParamLimits

0xe063,	// (0x0001cdcf) list_medium_line_x3_t1

0xe077,	// (0x0001cde3) thumb_sp_fs_scroll_pane_g1

0xe080,	// (0x0001cdec) thumb_sp_fs_scroll_pane_g2

0xe089,	// (0x0001cdf5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x0001e993) thumb_sp_fs_scroll_pane_g

0xe077,	// (0x0001cde3) bg_sp_fs_scroll_pane_g1

0xe080,	// (0x0001cdec) bg_sp_fs_scroll_pane_g2

0xe089,	// (0x0001cdf5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x0001e993) bg_sp_fs_scroll_pane_g

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g4_g1

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g4_g2

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g4_g3

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0001df2d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0001df2d) list_medium_line_x2_t3_g4_g

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g4_t1

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g4_t2

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0001df21) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0001df21) list_medium_line_x2_t3_g4_t

0x9cea,	// (0x00018a56) list_medium_line_g2_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_g2_g1

0x9cea,	// (0x00018a56) list_medium_line_g2_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0001df28) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0001df28) list_medium_line_g2_g

0x9d3a,	// (0x00018aa6) list_medium_line_g2_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_g2_t1

0x9cea,	// (0x00018a56) list_medium_line_t3_g2_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t3_g2_g1

0x9cea,	// (0x00018a56) list_medium_line_t3_g2_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0001df28) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0001df28) list_medium_line_t3_g2_g

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g2_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g2_t1

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g2_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g2_t2

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g2_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0001df21) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0001df21) list_medium_line_t3_g2_t

0x9d30,	// (0x00018a9c) list_medium_line_right_icon_g1

0xa567,	// (0x000192d3) list_medium_line_right_icon_t1

0x9cea,	// (0x00018a56) list_medium_line_t2_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t2_g1

0x9d3a,	// (0x00018aa6) list_medium_line_t2_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t2_t1

0x9d3a,	// (0x00018aa6) list_medium_line_t2_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x0001defd) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x0001defd) list_medium_line_t2_t

0x9cea,	// (0x00018a56) list_medium_line_t3_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t3_g1

0x9d3a,	// (0x00018aa6) list_medium_line_t3_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t3_t1

0x9d3a,	// (0x00018aa6) list_medium_line_t3_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t3_t2

0x9d3a,	// (0x00018aa6) list_medium_line_t3_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0001df21) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0001df21) list_medium_line_t3_t

0x9cea,	// (0x00018a56) list_medium_line_g3_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_g3_g1

0x9cea,	// (0x00018a56) list_medium_line_g3_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_g3_g2

0x9cea,	// (0x00018a56) list_medium_line_g3_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x0001df1a) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x0001df1a) list_medium_line_g3_g

0x9d3a,	// (0x00018aa6) list_medium_line_g3_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_g3_t1

0x9cea,	// (0x00018a56) list_medium_line_t2_g3_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t2_g3_g1

0x9cea,	// (0x00018a56) list_medium_line_t2_g3_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t2_g3_g2

0x9cea,	// (0x00018a56) list_medium_line_t2_g3_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x0001df1a) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x0001df1a) list_medium_line_t2_g3_g

0x9d3a,	// (0x00018aa6) list_medium_line_t2_g3_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t2_g3_t1

0x9d3a,	// (0x00018aa6) list_medium_line_t2_g3_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x0001defd) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x0001defd) list_medium_line_t2_g3_t

0x9cea,	// (0x00018a56) list_medium_line_t3_g3_g1_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t3_g3_g1

0x9cea,	// (0x00018a56) list_medium_line_t3_g3_g2_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t3_g3_g2

0x9cea,	// (0x00018a56) list_medium_line_t3_g3_g3_ParamLimits

0x9cea,	// (0x00018a56) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x0001df1a) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x0001df1a) list_medium_line_t3_g3_g

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g3_t1_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g3_t1

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g3_t2_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g3_t2

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g3_t3_ParamLimits

0x9d3a,	// (0x00018aa6) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0001df21) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0001df21) list_medium_line_t3_g3_t

0x9d30,	// (0x00018a9c) list_medium_line_right_iconx2_g1

0x9d30,	// (0x00018a9c) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x0001de1b) list_medium_line_right_iconx2_g

0xa567,	// (0x000192d3) list_medium_line_right_iconx2_t1

0x9d30,	// (0x00018a9c) list_medium_line_t2_right_iconx2_g1

0x9d30,	// (0x00018a9c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x0001de1b) list_medium_line_t2_right_iconx2_g

0xa567,	// (0x000192d3) list_medium_line_t2_right_iconx2_t1

0xa567,	// (0x000192d3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf4,	// (0x0001e960) list_medium_line_t2_right_iconx2_t

0xa567,	// (0x000192d3) list_medium_line_x4_t4_t1

0xa567,	// (0x000192d3) list_medium_line_x4_t4_t2

0xa567,	// (0x000192d3) list_medium_line_x4_t4_t3

0xa567,	// (0x000192d3) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x0001dfea) list_medium_line_x4_t4_t

0x7175,	// (0x00015ee1) tport_appsw_pane_ParamLimits

0x7175,	// (0x00015ee1) tport_appsw_pane

0x718d,	// (0x00015ef9) tport_contact_pane_ParamLimits

0x718d,	// (0x00015ef9) tport_contact_pane

0x71a8,	// (0x00015f14) tport_listscroll_pane_ParamLimits

0x71a8,	// (0x00015f14) tport_listscroll_pane

0x71c0,	// (0x00015f2c) cell_tport_appsw_pane_ParamLimits

0x71c0,	// (0x00015f2c) cell_tport_appsw_pane

0xaa68,	// (0x000197d4) tport_appsw_pane_g1_ParamLimits

0xaa68,	// (0x000197d4) tport_appsw_pane_g1

0x720a,	// (0x00015f76) tport_contact_pane_g1

0x7213,	// (0x00015f7f) tport_contact_pane_t1

0x7221,	// (0x00015f8d) tport_contact_pane_t2

0x0001,

0xfc2e,	// (0x0001e99a) tport_contact_pane_t

0xe092,	// (0x0001cdfe) list_tport_pane

0xe09b,	// (0x0001ce07) scroll_pane_cp_030

0x7237,	// (0x00015fa3) cell_tport_appsw_pane_g1

0x7247,	// (0x00015fb3) cell_tport_appsw_pane_t1

0x7255,	// (0x00015fc1) grid_highlight_pane_cp019

0x725d,	// (0x00015fc9) list_tport_double_graphic_pane_ParamLimits

0x725d,	// (0x00015fc9) list_tport_double_graphic_pane

0x95be,	// (0x0001832a) list_highlight_pane_cp023_ParamLimits

0x95be,	// (0x0001832a) list_highlight_pane_cp023

0x726a,	// (0x00015fd6) list_tport_double_graphic_pane_g1_ParamLimits

0x726a,	// (0x00015fd6) list_tport_double_graphic_pane_g1

0x7277,	// (0x00015fe3) list_tport_double_graphic_pane_t1_ParamLimits

0x7277,	// (0x00015fe3) list_tport_double_graphic_pane_t1

0x728c,	// (0x00015ff8) list_tport_double_graphic_pane_t2_ParamLimits

0x728c,	// (0x00015ff8) list_tport_double_graphic_pane_t2

0x0001,

0xfc3a,	// (0x0001e9a6) list_tport_double_graphic_pane_t_ParamLimits

0xfc3a,	// (0x0001e9a6) list_tport_double_graphic_pane_t

0x9549,	// (0x000182b5) main_cale_note_pane

0x4f39,	// (0x00013ca5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4f39,	// (0x00013ca5) cell_vitu2_function_top_wide_pane_cp01

0x69d0,	// (0x0001573c) wait_bar_pane_cp05_ParamLimits

0x95be,	// (0x0001832a) listscroll_cmail_pane

0xe0ac,	// (0x0001ce18) list_cmail_pane

0x729e,	// (0x0001600a) list_cmail_body_pane

0x72b5,	// (0x00016021) list_single_cmail_header_caption_pane

0x72cf,	// (0x0001603b) list_single_cmail_header_detail_pane_ParamLimits

0x72cf,	// (0x0001603b) list_single_cmail_header_detail_pane

0xe0c3,	// (0x0001ce2f) list_single_cmail_header_caption_pane_t1

0x7302,	// (0x0001606e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7302,	// (0x0001606e) list_single_cmail_header_detail_pane_g1

0xe0da,	// (0x0001ce46) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe0da,	// (0x0001ce46) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc3f,	// (0x0001e9ab) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc3f,	// (0x0001e9ab) list_single_cmail_header_detail_pane_g

0x731a,	// (0x00016086) list_single_cmail_header_detail_pane_t1_ParamLimits

0x731a,	// (0x00016086) list_single_cmail_header_detail_pane_t1

0x7356,	// (0x000160c2) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7356,	// (0x000160c2) list_single_cmail_header_editor_pane_bg

0xdc5f,	// (0x0001c9cb) list_cmail_body_pane_g1

0xe117,	// (0x0001ce83) list_cmail_body_pane_t1

0xce19,	// (0x0001bb85) list_single_cmail_header_editor_pane_bg_g1

0xa1ff,	// (0x00018f6b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xce29,	// (0x0001bb95) list_single_cmail_header_editor_pane_bg_g1_copy2

0xce21,	// (0x0001bb8d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd0b3,	// (0x0001be1f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xce49,	// (0x0001bbb5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xce39,	// (0x0001bba5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xce41,	// (0x0001bbad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa1df,	// (0x00018f4b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x736d,	// (0x000160d9) calenote_gesture_pane_ParamLimits

0x736d,	// (0x000160d9) calenote_gesture_pane

0x738d,	// (0x000160f9) calenote_window_pane_ParamLimits

0x738d,	// (0x000160f9) calenote_window_pane

0xe125,	// (0x0001ce91) popup_note_window_cp01

0x73a9,	// (0x00016115) calenote_swipe_1_pane_ParamLimits

0x73a9,	// (0x00016115) calenote_swipe_1_pane

0x6de4,	// (0x00015b50) calenote_swipe_2_pane_ParamLimits

0x6de4,	// (0x00015b50) calenote_swipe_2_pane

0xde4f,	// (0x0001cbbb) calenote_swipe_1_pane_g1_ParamLimits

0xde4f,	// (0x0001cbbb) calenote_swipe_1_pane_g1

0xe137,	// (0x0001cea3) calenote_swipe_1_pane_g2_ParamLimits

0xe137,	// (0x0001cea3) calenote_swipe_1_pane_g2

0x0001,

0xfc4b,	// (0x0001e9b7) calenote_swipe_1_pane_g_ParamLimits

0xfc4b,	// (0x0001e9b7) calenote_swipe_1_pane_g

0xe143,	// (0x0001ceaf) calenote_swipe_1_pane_t1_ParamLimits

0xe143,	// (0x0001ceaf) calenote_swipe_1_pane_t1

0xde4f,	// (0x0001cbbb) calenote_swipe_2_pane_g1_ParamLimits

0xde4f,	// (0x0001cbbb) calenote_swipe_2_pane_g1

0xe162,	// (0x0001cece) calenote_swipe_2_pane_g2_ParamLimits

0xe162,	// (0x0001cece) calenote_swipe_2_pane_g2

0x0001,

0xfc50,	// (0x0001e9bc) calenote_swipe_2_pane_g_ParamLimits

0xfc50,	// (0x0001e9bc) calenote_swipe_2_pane_g

0xe16e,	// (0x0001ceda) calenote_swipe_2_pane_t1_ParamLimits

0xe16e,	// (0x0001ceda) calenote_swipe_2_pane_t1

0x9549,	// (0x000182b5) main_mup_navstr_pane

0x3e5b,	// (0x00012bc7) main_mup3_pane_t7_ParamLimits

0x3e5b,	// (0x00012bc7) main_mup3_pane_t7

0xc974,	// (0x0001b6e0) main_mp4_pane_g6_ParamLimits

0xc974,	// (0x0001b6e0) main_mp4_pane_g6

0xcc2f,	// (0x0001b99b) main_image3_pane_t4_ParamLimits

0xcc2f,	// (0x0001b99b) main_image3_pane_t4

0x73be,	// (0x0001612a) popup_navstr_preview_pane_ParamLimits

0x73be,	// (0x0001612a) popup_navstr_preview_pane

0x73ce,	// (0x0001613a) scroll_navstr_pane_ParamLimits

0x73ce,	// (0x0001613a) scroll_navstr_pane

0x9549,	// (0x000182b5) bg_popup_preview_window_pane_cp04

0xe195,	// (0x0001cf01) popup_navstr_preview_pane_t1

0x73e2,	// (0x0001614e) scroll_navstr_pane_g1_ParamLimits

0x73e2,	// (0x0001614e) scroll_navstr_pane_g1

0x73f6,	// (0x00016162) scroll_navstr_pane_t1_ParamLimits

0x73f6,	// (0x00016162) scroll_navstr_pane_t1

0xe12e,	// (0x0001ce9a) bg_button_pane_cp014

0xe12e,	// (0x0001ce9a) bg_button_pane_cp030

0x6c6c,	// (0x000159d8) list_double_fisheye_pane_g4_ParamLimits

0x6c6c,	// (0x000159d8) list_double_fisheye_pane_g4

0x6c78,	// (0x000159e4) list_double_fisheye_pane_g5_ParamLimits

0x6c78,	// (0x000159e4) list_double_fisheye_pane_g5

0xd494,	// (0x0001c200) sp_fs_scroll_pane_cp03

0xdf1d,	// (0x0001cc89) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdf29,	// (0x0001cc95) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf9,	// (0x0001e965) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6ed9,	// (0x00015c45) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe0bb,	// (0x0001ce27) sp_fs_scroll_pane_cp02

0x9f25,	// (0x00018c91) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9f25,	// (0x00018c91) popup_sp_fs_calendar_preview_list_single_pane

0x9549,	// (0x000182b5) main_cam6_pano_pane

0x95be,	// (0x0001832a) main_mup3_pane_ParamLimits

0x9549,	// (0x000182b5) main_phacti_pane

0x68a1,	// (0x0001560d) bg_button_pane_cp11

0x68bb,	// (0x00015627) main_mobtv_info_pane_g2_ParamLimits

0x68bb,	// (0x00015627) main_mobtv_info_pane_g2

0x0001,

0xfb5e,	// (0x0001e8ca) main_mobtv_info_pane_g_ParamLimits

0xfb5e,	// (0x0001e8ca) main_mobtv_info_pane_g

0x9d3a,	// (0x00018aa6) sc_clock_pane_t5_ParamLimits

0x9d3a,	// (0x00018aa6) sc_clock_pane_t5

0xaa68,	// (0x000197d4) main_radioblah_pane_g1_ParamLimits

0xaa76,	// (0x000197e2) main_radioblah_pane_t3_ParamLimits

0xaa76,	// (0x000197e2) main_radioblah_pane_t3

0xaa76,	// (0x000197e2) main_radioblah_pane_t4_ParamLimits

0xaa76,	// (0x000197e2) main_radioblah_pane_t4

0x95be,	// (0x0001832a) main_radioblah_text_pane_ParamLimits

0x95be,	// (0x0001832a) main_radioblah_text_pane

0xdd6c,	// (0x0001cad8) main_radioblah_info_pane_g1_ParamLimits

0xddb0,	// (0x0001cb1c) main_radioblah_info_pane_t4_ParamLimits

0xddb0,	// (0x0001cb1c) main_radioblah_info_pane_t4

0x95be,	// (0x0001832a) main_sp_fs_calendar_pane

0x740d,	// (0x00016179) main_phacti_pane_g1

0x7415,	// (0x00016181) phacti_note_pane_ParamLimits

0x7415,	// (0x00016181) phacti_note_pane

0xe1ac,	// (0x0001cf18) phacti_term_pane_ParamLimits

0xe1ac,	// (0x0001cf18) phacti_term_pane

0xe1c1,	// (0x0001cf2d) phacti_note_pane_t1_ParamLimits

0xe1c1,	// (0x0001cf2d) phacti_note_pane_t1

0xe1d8,	// (0x0001cf44) phacti_term_pane_g1

0xe1e0,	// (0x0001cf4c) phacti_term_pane_t1_ParamLimits

0xe1e0,	// (0x0001cf4c) phacti_term_pane_t1

0xe20a,	// (0x0001cf76) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe212,	// (0x0001cf7e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5a,	// (0x0001e9c6) popup_sp_fs_calendar_preview_list_single_pane_g

0xe21a,	// (0x0001cf86) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe21a,	// (0x0001cf86) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe230,	// (0x0001cf9c) aid_popup_sp_fs_bg_corner_pane

0x9d30,	// (0x00018a9c) popup_sp_fs_calendar_preview_bg_pane_g1

0x9549,	// (0x000182b5) popup_sp_fs_calendar_preview_bg_pane

0xe238,	// (0x0001cfa4) popup_sp_fs_calendar_preview_list_pane

0xaa8a,	// (0x000197f6) bg_main_sp_fs_cale_pane_ParamLimits

0xaa8a,	// (0x000197f6) bg_main_sp_fs_cale_pane

0xe249,	// (0x0001cfb5) listscroll_cale_mrui_pane_ParamLimits

0xe249,	// (0x0001cfb5) listscroll_cale_mrui_pane

0xe25e,	// (0x0001cfca) listscroll_sp_fs_schedule_track_pane

0xe267,	// (0x0001cfd3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe267,	// (0x0001cfd3) main_sp_fs_ctrlbar_pane_cp01

0xe27a,	// (0x0001cfe6) main_sp_fs_ribbon_pane

0xe282,	// (0x0001cfee) popup_sp_fs_cale_preview_window

0x748a,	// (0x000161f6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x748a,	// (0x000161f6) list_single_sp_fs_schedule_track_pane

0x95be,	// (0x0001832a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x95be,	// (0x0001832a) bg_sp_fs_highlight_list_pane_cp03

0x749d,	// (0x00016209) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x749d,	// (0x00016209) list_single_sp_fs_schedule_track_pane_g1

0x74a9,	// (0x00016215) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x74a9,	// (0x00016215) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc5f,	// (0x0001e9cb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc5f,	// (0x0001e9cb) list_single_sp_fs_schedule_track_pane_g

0x74b5,	// (0x00016221) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x74b5,	// (0x00016221) list_single_sp_fs_schedule_track_pane_t1

0x74d7,	// (0x00016243) sp_fs_schedule_track_pane_ParamLimits

0x74d7,	// (0x00016243) sp_fs_schedule_track_pane

0xe294,	// (0x0001d000) sp_fs_schedule_track_pane_g1

0xe29c,	// (0x0001d008) sp_fs_schedule_track_pane_g2

0xe2a4,	// (0x0001d010) sp_fs_schedule_track_pane_g3

0xe2ac,	// (0x0001d018) sp_fs_schedule_track_pane_g4

0xe2b4,	// (0x0001d020) sp_fs_schedule_track_pane_g5

0x0004,

0xfc64,	// (0x0001e9d0) sp_fs_schedule_track_pane_g

0xce19,	// (0x0001bb85) bg_sp_fs_schedule_viewer_highlight_g1

0xa1ff,	// (0x00018f6b) bg_sp_fs_schedule_viewer_highlight_g2

0xce21,	// (0x0001bb8d) bg_sp_fs_schedule_viewer_highlight_g3

0xce29,	// (0x0001bb95) bg_sp_fs_schedule_viewer_highlight_g4

0xd0b3,	// (0x0001be1f) bg_sp_fs_schedule_viewer_highlight_g5

0xce39,	// (0x0001bba5) bg_sp_fs_schedule_viewer_highlight_g6

0xce41,	// (0x0001bbad) bg_sp_fs_schedule_viewer_highlight_g7

0xce49,	// (0x0001bbb5) bg_sp_fs_schedule_viewer_highlight_g8

0xa1df,	// (0x00018f4b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc6f,	// (0x0001e9db) bg_sp_fs_schedule_viewer_highlight_g

0x9549,	// (0x000182b5) bg_main_sp_fs_ribbon_pane

0x74ec,	// (0x00016258) main_sp_fs_ribbon_pane_g1

0xe2bc,	// (0x0001d028) main_sp_fs_ribbon_pane_t1

0x74f5,	// (0x00016261) main_sp_fs_ribbon_pane_t2

0xe2cb,	// (0x0001d037) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc82,	// (0x0001e9ee) main_sp_fs_ribbon_pane_t

0xe2da,	// (0x0001d046) main_sp_fs_ribbon_scheduler_pane

0xe2e2,	// (0x0001d04e) bg_main_sp_fs_ribbon_pane_g1

0xe2eb,	// (0x0001d057) bg_main_sp_fs_ribbon_pane_g2

0xe2f4,	// (0x0001d060) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc89,	// (0x0001e9f5) bg_main_sp_fs_ribbon_pane_g

0xe2fc,	// (0x0001d068) main_sp_fs_ribbon_scheduler_pane_g1

0xe305,	// (0x0001d071) main_sp_fs_ribbon_scheduler_pane_g2

0xe30e,	// (0x0001d07a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc90,	// (0x0001e9fc) main_sp_fs_ribbon_scheduler_pane_g

0xe317,	// (0x0001d083) list_cale_mrui_pane

0x7504,	// (0x00016270) sp_fs_scroll_pane_cp07_ParamLimits

0x7504,	// (0x00016270) sp_fs_scroll_pane_cp07

0x7520,	// (0x0001628c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7520,	// (0x0001628c) bg_sp_fs_schedule_viewer_highlight

0xe324,	// (0x0001d090) list_single_sp_fs_schedule_track_pane_cp01

0xe32c,	// (0x0001d098) list_sp_fs_schedule_track_pane

0xe334,	// (0x0001d0a0) sp_fs_scroll_pane_cp06_ParamLimits

0xe334,	// (0x0001d0a0) sp_fs_scroll_pane_cp06

0x9d30,	// (0x00018a9c) bgmain_sp_fs_calendar_pane_g1

0x7532,	// (0x0001629e) list_single_cale_mrui_pane_ParamLimits

0x7532,	// (0x0001629e) list_single_cale_mrui_pane

0xe346,	// (0x0001d0b2) list_single_cale_mrui_row_pane_ParamLimits

0xe346,	// (0x0001d0b2) list_single_cale_mrui_row_pane

0xe353,	// (0x0001d0bf) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe353,	// (0x0001d0bf) list_single_cale_mrui_row_pane_g1

0xe398,	// (0x0001d104) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe398,	// (0x0001d104) list_single_cale_mrui_row_pane_t1

0x7552,	// (0x000162be) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7552,	// (0x000162be) list_single_cale_mrui_row_pane_t2

0xe3aa,	// (0x0001d116) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe3aa,	// (0x0001d116) list_single_cale_mrui_row_pane_t3

0xe3d9,	// (0x0001d145) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe3d9,	// (0x0001d145) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc9e,	// (0x0001ea0a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc9e,	// (0x0001ea0a) list_single_cale_mrui_row_pane_t

0x75b8,	// (0x00016324) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x75b8,	// (0x00016324) list_single_cmail_header_editor_pane_bg_cp01

0x75e4,	// (0x00016350) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x75e4,	// (0x00016350) list_single_cmail_header_editor_pane_bg_cp02

0xe40a,	// (0x0001d176) main_radioblah_text_pane_t1_ParamLimits

0xe40a,	// (0x0001d176) main_radioblah_text_pane_t1

0xe424,	// (0x0001d190) cam6_indi_pane_cp01

0xe42c,	// (0x0001d198) cam6_mode_pane_cp01

0xe434,	// (0x0001d1a0) cam6_pano_pane

0xe43d,	// (0x0001d1a9) cam6_zoom_pane_cp01

0xe447,	// (0x0001d1b3) cam6_pano_image_pane

0xe450,	// (0x0001d1bc) cam6_pano_pane_g1

0xdc5f,	// (0x0001c9cb) cam6_pano_pane_g2

0xe459,	// (0x0001d1c5) cam6_pano_pane_g3

0xe462,	// (0x0001d1ce) cam6_pano_pane_g4

0xc708,	// (0x0001b474) cam6_pano_pane_g5

0xe46b,	// (0x0001d1d7) cam6_pano_pane_g6

0xe473,	// (0x0001d1df) cam6_pano_pane_g7

0xe47b,	// (0x0001d1e7) cam6_pano_pane_g8

0xe484,	// (0x0001d1f0) cam6_pano_pane_g9

0x0008,

0xfca7,	// (0x0001ea13) cam6_pano_pane_g

0x9549,	// (0x000182b5) main_browser_tag_pane

0xe18d,	// (0x0001cef9) grid_navstr_albumart_pane

0xe48f,	// (0x0001d1fb) cell_navstr_albumart_pane_ParamLimits

0xe48f,	// (0x0001d1fb) cell_navstr_albumart_pane

0xe4ab,	// (0x0001d217) cell_navstr_albumart_pane_g1

0xbb62,	// (0x0001a8ce) cell_navstr_albumart_pane_g2

0xbb72,	// (0x0001a8de) cell_navstr_albumart_pane_g3

0xbb6a,	// (0x0001a8d6) cell_navstr_albumart_pane_g4

0x0003,

0xfcba,	// (0x0001ea26) cell_navstr_albumart_pane_g

0x7602,	// (0x0001636e) bt_list_pane_ParamLimits

0x7602,	// (0x0001636e) bt_list_pane

0x7618,	// (0x00016384) bt_list_pane_t1

0x7627,	// (0x00016393) bt_list_pane_t2

0x0001,

0xfcc3,	// (0x0001ea2f) bt_list_pane_t

0x9549,	// (0x000182b5) main_cale_prevew_pane

0x7636,	// (0x000163a2) popup_cale_preview_window_ParamLimits

0x7636,	// (0x000163a2) popup_cale_preview_window

0x95be,	// (0x0001832a) bg_popup_preview_window_pane_cp05_ParamLimits

0x95be,	// (0x0001832a) bg_popup_preview_window_pane_cp05

0xe4b3,	// (0x0001d21f) list_cale_preview_pane_ParamLimits

0xe4b3,	// (0x0001d21f) list_cale_preview_pane

0x7653,	// (0x000163bf) list_double_cale_preview_pane_ParamLimits

0x7653,	// (0x000163bf) list_double_cale_preview_pane

0x7667,	// (0x000163d3) list_single_cale_preview_pane_ParamLimits

0x7667,	// (0x000163d3) list_single_cale_preview_pane

0x767f,	// (0x000163eb) list_single_cale_preview_pane_g1

0x7687,	// (0x000163f3) list_single_cale_preview_pane_t1_ParamLimits

0x7687,	// (0x000163f3) list_single_cale_preview_pane_t1

0x769c,	// (0x00016408) list_double_cale_preview_pane_g1

0x76a4,	// (0x00016410) list_double_cale_preview_pane_t1_ParamLimits

0x76a4,	// (0x00016410) list_double_cale_preview_pane_t1

0x76b9,	// (0x00016425) list_double_cale_preview_pane_t2_ParamLimits

0x76b9,	// (0x00016425) list_double_cale_preview_pane_t2

0x0001,

0xfcc8,	// (0x0001ea34) list_double_cale_preview_pane_t_ParamLimits

0xfcc8,	// (0x0001ea34) list_double_cale_preview_pane_t

0x9549,	// (0x000182b5) main_ezdial_pane

0x95be,	// (0x0001832a) main_sp_fs_email_pane_ParamLimits

0x6e44,	// (0x00015bb0) cmail_ddmenu_btn01_pane_ParamLimits

0x6e44,	// (0x00015bb0) cmail_ddmenu_btn01_pane

0x6e57,	// (0x00015bc3) cmail_ddmenu_btn02_pane_ParamLimits

0x6e57,	// (0x00015bc3) cmail_ddmenu_btn02_pane

0x6e7a,	// (0x00015be6) cmail_ddmenu_btn03_pane_ParamLimits

0x6e7a,	// (0x00015be6) cmail_ddmenu_btn03_pane

0x6f18,	// (0x00015c84) main_sp_fs_ctrlbar_pane_ParamLimits

0x6f3c,	// (0x00015ca8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x729e,	// (0x0001600a) list_cmail_body_pane_ParamLimits

0xe0d1,	// (0x0001ce3d) bg_button_pane_cp12

0xe0e6,	// (0x0001ce52) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe0e6,	// (0x0001ce52) list_single_cmail_header_detail_pane_g3

0xe0f3,	// (0x0001ce5f) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe0f3,	// (0x0001ce5f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc46,	// (0x0001e9b2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc46,	// (0x0001e9b2) list_single_cmail_header_detail_pane_t

0xe1f5,	// (0x0001cf61) phacti_term_pane_t2_ParamLimits

0xe1f5,	// (0x0001cf61) phacti_term_pane_t2

0x0001,

0xfc55,	// (0x0001e9c1) phacti_term_pane_t_ParamLimits

0xfc55,	// (0x0001e9c1) phacti_term_pane_t

0xe4bf,	// (0x0001d22b) aid_size_list_single_double

0x76d1,	// (0x0001643d) popup_ezdial_listscroll_window

0xe4cb,	// (0x0001d237) popup_number_entry_window_cp01

0x9fc9,	// (0x00018d35) bg_popup_call_pane_cp09

0xe4d8,	// (0x0001d244) ezdial_list_pane

0xe4e0,	// (0x0001d24c) scroll_pane_cp23

0xaa8a,	// (0x000197f6) bg_button_pane_cp028_ParamLimits

0xaa8a,	// (0x000197f6) bg_button_pane_cp028

0x76ed,	// (0x00016459) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x76ed,	// (0x00016459) cmail_ddmenu_btn01_pane_g1

0x76fc,	// (0x00016468) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x76fc,	// (0x00016468) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfccd,	// (0x0001ea39) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfccd,	// (0x0001ea39) cmail_ddmenu_btn01_pane_g

0xe4e8,	// (0x0001d254) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe4e8,	// (0x0001d254) cmail_ddmenu_btn01_pane_t1

0xaa8a,	// (0x000197f6) bg_button_pane_cp029_ParamLimits

0xaa8a,	// (0x000197f6) bg_button_pane_cp029

0x7712,	// (0x0001647e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7712,	// (0x0001647e) cmail_ddmenu_btn02_pane_g1

0x772d,	// (0x00016499) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x772d,	// (0x00016499) cmail_ddmenu_btn02_pane_t1

0x95be,	// (0x0001832a) bg_button_pane_cp031_ParamLimits

0x95be,	// (0x0001832a) bg_button_pane_cp031

0x7712,	// (0x0001647e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7712,	// (0x0001647e) cmail_ddmenu_btn03_pane_g1

0x772d,	// (0x00016499) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x772d,	// (0x00016499) cmail_ddmenu_btn03_pane_t1

0x9d3a,	// (0x00018aa6) cell_dialer2_keypad_pane_t1_ParamLimits

0xc736,	// (0x0001b4a2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc736,	// (0x0001b4a2) cell_dialer2_keypad_pane_t1_copy1

0x66c2,	// (0x0001542e) ncimui_group_button_pane

0x95be,	// (0x0001832a) main_sp_fs_calendar_pane_ParamLimits

0x72b5,	// (0x00016021) list_single_cmail_header_caption_pane_ParamLimits

0xe240,	// (0x0001cfac) aid_recal_txt_sm_pane

0x9549,	// (0x000182b5) mian_recal_day_pane

0xe282,	// (0x0001cfee) popup_sp_fs_cale_preview_window_ParamLimits

0xe4fe,	// (0x0001d26a) list_recal_day_pane

0xe541,	// (0x0001d2ad) list_single_recal_day_pane_ParamLimits

0xe541,	// (0x0001d2ad) list_single_recal_day_pane

0xe553,	// (0x0001d2bf) list_single_recal_day_pane_g1_ParamLimits

0xe553,	// (0x0001d2bf) list_single_recal_day_pane_g1

0xe55f,	// (0x0001d2cb) list_single_recal_day_pane_g2_ParamLimits

0xe55f,	// (0x0001d2cb) list_single_recal_day_pane_g2

0xe56b,	// (0x0001d2d7) list_single_recal_day_pane_g3_ParamLimits

0xe56b,	// (0x0001d2d7) list_single_recal_day_pane_g3

0x7754,	// (0x000164c0) list_single_recal_day_pane_g4_ParamLimits

0x7754,	// (0x000164c0) list_single_recal_day_pane_g4

0xe577,	// (0x0001d2e3) list_single_recal_day_pane_g5_ParamLimits

0xe577,	// (0x0001d2e3) list_single_recal_day_pane_g5

0xe583,	// (0x0001d2ef) list_single_recal_day_pane_g6_ParamLimits

0xe583,	// (0x0001d2ef) list_single_recal_day_pane_g6

0x0004,

0xfcdc,	// (0x0001ea48) list_single_recal_day_pane_g_ParamLimits

0xfcdc,	// (0x0001ea48) list_single_recal_day_pane_g

0xe597,	// (0x0001d303) list_single_recal_day_pane_t1

0xe5a9,	// (0x0001d315) list_single_recal_day_pane_t2

0x0001,

0xfce7,	// (0x0001ea53) list_single_recal_day_pane_t

0x776c,	// (0x000164d8) ncimui_query_button_pane_ParamLimits

0x776c,	// (0x000164d8) ncimui_query_button_pane

0x777c,	// (0x000164e8) ncimui_query_button_pane_t1_ParamLimits

0x777c,	// (0x000164e8) ncimui_query_button_pane_t1

0xe5bb,	// (0x0001d327) ncimui_query_button_pane_t2_ParamLimits

0xe5bb,	// (0x0001d327) ncimui_query_button_pane_t2

0x0001,

0xfcec,	// (0x0001ea58) ncimui_query_button_pane_t_ParamLimits

0xfcec,	// (0x0001ea58) ncimui_query_button_pane_t

0x778f,	// (0x000164fb) query_button_pane_ParamLimits

0x778f,	// (0x000164fb) query_button_pane

0x9549,	// (0x000182b5) bg_button_pane_cp0028

0xe5ce,	// (0x0001d33a) query_button_pane_t1

0x30cb,	// (0x00011e37) main_tport_pane_ParamLimits

0x7131,	// (0x00015e9d) bg_popup_window_pane_cp01_ParamLimits

0x7131,	// (0x00015e9d) bg_popup_window_pane_cp01

0x714a,	// (0x00015eb6) heading_pane_cp08_ParamLimits

0x714a,	// (0x00015eb6) heading_pane_cp08

0x7160,	// (0x00015ecc) heading_pane_cp07_ParamLimits

0x7160,	// (0x00015ecc) heading_pane_cp07

0x7237,	// (0x00015fa3) cell_tport_appsw_pane_g2

0x0002,

0xfc33,	// (0x0001e99f) cell_tport_appsw_pane_g

0x265f,	// (0x000113cb) input_candi_list_open_g1

0xa407,	// (0x00019173) list_cale_time_pane_g6_ParamLimits

0xa407,	// (0x00019173) list_cale_time_pane_g6

0x377a,	// (0x000124e6) aid_size_touch_calib_1_ParamLimits

0x377a,	// (0x000124e6) aid_size_touch_calib_1

0x378c,	// (0x000124f8) aid_size_touch_calib_2_ParamLimits

0x378c,	// (0x000124f8) aid_size_touch_calib_2

0x37a4,	// (0x00012510) aid_size_touch_calib_3_ParamLimits

0x37a4,	// (0x00012510) aid_size_touch_calib_3

0x37c2,	// (0x0001252e) aid_size_touch_calib_4_ParamLimits

0x37c2,	// (0x0001252e) aid_size_touch_calib_4

0x37da,	// (0x00012546) main_touch_calib_button_group_pane_ParamLimits

0x37da,	// (0x00012546) main_touch_calib_button_group_pane

0x37f2,	// (0x0001255e) main_touch_calib_pane_g1_ParamLimits

0x3804,	// (0x00012570) main_touch_calib_pane_g2_ParamLimits

0x3816,	// (0x00012582) main_touch_calib_pane_g3_ParamLimits

0x3828,	// (0x00012594) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x0001e3eb) main_touch_calib_pane_g_ParamLimits

0x383a,	// (0x000125a6) main_touch_calib_pane_t1_ParamLimits

0x3854,	// (0x000125c0) main_touch_calib_pane_t2_ParamLimits

0x386e,	// (0x000125da) main_touch_calib_pane_t3_ParamLimits

0x3882,	// (0x000125ee) main_touch_calib_pane_t4_ParamLimits

0x3898,	// (0x00012604) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x0001e3f4) main_touch_calib_pane_t_ParamLimits

0xc4c3,	// (0x0001b22f) list_single_fp_cale_pane_g3_ParamLimits

0xc4c3,	// (0x0001b22f) list_single_fp_cale_pane_g3

0x95be,	// (0x0001832a) bg_button_pane_cp012_ParamLimits

0x95be,	// (0x0001832a) bg_vkb2_func_pane_cp03_ParamLimits

0x5846,	// (0x000145b2) cell_vitu2_function_top_pane_g1_ParamLimits

0x95be,	// (0x0001832a) bg_vkb2_func_pane_cp04_ParamLimits

0x664d,	// (0x000153b9) main_ncimui_button_group_pane_ParamLimits

0x664d,	// (0x000153b9) main_ncimui_button_group_pane

0x66ad,	// (0x00015419) main_ncimui_pane_t3_ParamLimits

0x66ad,	// (0x00015419) main_ncimui_pane_t3

0xe1a3,	// (0x0001cf0f) phacti_button_group_pane

0xe4bf,	// (0x0001d22b) aid_size_list_single_double_ParamLimits

0x76d1,	// (0x0001643d) popup_ezdial_listscroll_window_ParamLimits

0xe4cb,	// (0x0001d237) popup_number_entry_window_cp01_ParamLimits

0x77a2,	// (0x0001650e) phacti_button_pane_ParamLimits

0x77a2,	// (0x0001650e) phacti_button_pane

0x9549,	// (0x000182b5) bg_button_pane_cp14

0xe5dc,	// (0x0001d348) phacti_button_pane_t1

0x77b3,	// (0x0001651f) main_touch_calib_button_pane_ParamLimits

0x77b3,	// (0x0001651f) main_touch_calib_button_pane

0x9da8,	// (0x00018b14) bg_button_pane_cp18_ParamLimits

0x9da8,	// (0x00018b14) bg_button_pane_cp18

0xe5ea,	// (0x0001d356) main_touch_calib_button_pane_t1_ParamLimits

0xe5ea,	// (0x0001d356) main_touch_calib_button_pane_t1

0xe600,	// (0x0001d36c) main_touch_calib_button_pane_t2_ParamLimits

0xe600,	// (0x0001d36c) main_touch_calib_button_pane_t2

0x0001,

0xfcf1,	// (0x0001ea5d) main_touch_calib_button_pane_t_ParamLimits

0xfcf1,	// (0x0001ea5d) main_touch_calib_button_pane_t

0x9549,	// (0x000182b5) cell_ncimui_button_pane

0x9549,	// (0x000182b5) bg_button_pane_cp032

0xe61e,	// (0x0001d38a) cell_ncimui_button_pane_t1

0xcc0d,	// (0x0001b979) image3_infobar_pane_ParamLimits

0xcc0d,	// (0x0001b979) image3_infobar_pane

0x6a21,	// (0x0001578d) fs_bigclock_status_pane_ParamLimits

0x6a21,	// (0x0001578d) fs_bigclock_status_pane

0x6a2e,	// (0x0001579a) main_fs_bigclock_clock_pane_ParamLimits

0x6a2e,	// (0x0001579a) main_fs_bigclock_clock_pane

0x6a60,	// (0x000157cc) main_fs_bigclock_indi_pane_ParamLimits

0x6a60,	// (0x000157cc) main_fs_bigclock_indi_pane

0x6aa0,	// (0x0001580c) main_fs_bigclock_swipe_pane_ParamLimits

0x6aa0,	// (0x0001580c) main_fs_bigclock_swipe_pane

0x9549,	// (0x000182b5) main_fs_clock_dumped_data

0x6aec,	// (0x00015858) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x6aec,	// (0x00015858) list_single_fs_bigclock_indicator_pane_g1

0x6b05,	// (0x00015871) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x6b05,	// (0x00015871) list_single_fs_bigclock_indicator_pane_g2

0x6b1f,	// (0x0001588b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x6b1f,	// (0x0001588b) list_single_fs_bigclock_indicator_pane_g3

0x6b39,	// (0x000158a5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x6b39,	// (0x000158a5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb92,	// (0x0001e8fe) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb92,	// (0x0001e8fe) list_single_fs_bigclock_indicator_pane_g

0x6b68,	// (0x000158d4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x6b68,	// (0x000158d4) list_single_fs_bigclock_indicator_pane_t1

0x6b90,	// (0x000158fc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x6b90,	// (0x000158fc) list_single_fs_bigclock_indicator_pane_t2

0x6bb8,	// (0x00015924) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x6bb8,	// (0x00015924) list_single_fs_bigclock_indicator_pane_t3

0x6be0,	// (0x0001594c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x6be0,	// (0x0001594c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9d,	// (0x0001e909) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9d,	// (0x0001e909) list_single_fs_bigclock_indicator_pane_t

0xe62c,	// (0x0001d398) image3_infobar_fav_pane_ParamLimits

0xe62c,	// (0x0001d398) image3_infobar_fav_pane

0xe63c,	// (0x0001d3a8) image3_infobar_loc_pane_ParamLimits

0xe63c,	// (0x0001d3a8) image3_infobar_loc_pane

0xe652,	// (0x0001d3be) image3_infobar_time_pane_ParamLimits

0xe652,	// (0x0001d3be) image3_infobar_time_pane

0x9d30,	// (0x00018a9c) image3_infobar_time_pane_g1

0xe662,	// (0x0001d3ce) image3_infobar_time_pane_t1

0x9d30,	// (0x00018a9c) image3_infobar_loc_pane_g1

0xe670,	// (0x0001d3dc) image3_infobar_loc_pane_g2

0x0001,

0xfcf6,	// (0x0001ea62) image3_infobar_loc_pane_g

0xe678,	// (0x0001d3e4) image3_infobar_loc_pane_t1

0x9d30,	// (0x00018a9c) image3_infobar_fav_pane_g1

0xe686,	// (0x0001d3f2) image3_infobar_fav_pane_g2

0x0001,

0xfcfb,	// (0x0001ea67) image3_infobar_fav_pane_g

0xe68e,	// (0x0001d3fa) fs_bigclock_status_battery_pane

0xe697,	// (0x0001d403) fs_bigclock_status_signal_pane

0xe6a0,	// (0x0001d40c) fs_bigclock_status_title_pane

0xe6a9,	// (0x0001d415) fs_bigclock_status_signal_pane_g1

0xe6b2,	// (0x0001d41e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd00,	// (0x0001ea6c) fs_bigclock_status_signal_pane_g

0xe6ba,	// (0x0001d426) fs_bigclock_status_battery_pane_g1

0xe6c3,	// (0x0001d42f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd05,	// (0x0001ea71) fs_bigclock_status_battery_pane_g

0xe6cb,	// (0x0001d437) fs_bigclock_status_title_pane_t1

0x77c8,	// (0x00016534) main_fs_bigclock_clock_pane_g1

0x77c8,	// (0x00016534) main_fs_bigclock_clock_pane_g2

0x77db,	// (0x00016547) main_fs_bigclock_clock_pane_g3

0x77db,	// (0x00016547) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0a,	// (0x0001ea76) main_fs_bigclock_clock_pane_g

0x77f2,	// (0x0001655e) main_fs_bigclock_clock_pane_t1

0x7808,	// (0x00016574) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd13,	// (0x0001ea7f) main_fs_bigclock_clock_pane_t

0xe6d9,	// (0x0001d445) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe6d9,	// (0x0001d445) list_single_fs_bigclock_indicator_pane

0xe6ea,	// (0x0001d456) list_single_fs_bigclock_pane_ParamLimits

0xe6ea,	// (0x0001d456) list_single_fs_bigclock_pane

0xe710,	// (0x0001d47c) main_fs_bigclock_indicator_pane_t1

0xe71f,	// (0x0001d48b) list_single_fs_bigclock_pane_g1

0xe727,	// (0x0001d493) list_single_fs_bigclock_pane_t1

0x9d30,	// (0x00018a9c) main_fs_bigclock_swipe_pane_g1

0xe76a,	// (0x0001d4d6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd24,	// (0x0001ea90) main_fs_bigclock_swipe_pane_g

0xe772,	// (0x0001d4de) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe772,	// (0x0001d4de) main_fs_bigclock_swipe_pane_t1

0x201a,	// (0x00010d86) call_type_pane_ParamLimits

0x9549,	// (0x000182b5) main_btmg_pane

0xe37f,	// (0x0001d0eb) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe37f,	// (0x0001d0eb) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc97,	// (0x0001ea03) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc97,	// (0x0001ea03) list_single_cale_mrui_row_pane_g

0xe527,	// (0x0001d293) list_recal_vselct_arw_lo_pane

0xe52f,	// (0x0001d29b) list_recal_vselct_arw_up_pane

0xe537,	// (0x0001d2a3) list_recal_vselct_pane

0x786a,	// (0x000165d6) btmg_button_pane

0x7874,	// (0x000165e0) main_btmg_pane_g1

0x9549,	// (0x000182b5) bg_button_pane_cp044

0xe78f,	// (0x0001d4fb) btmg_button_pane_t1

0xbcb4,	// (0x0001aa20) aid_listscroll_gen

0x95be,	// (0x0001832a) main_cntbar_detail_pane

0xe0a4,	// (0x0001ce10) list_cmail_folder_pane

0xd494,	// (0x0001c200) sp_fs_scroll_pane_cp03_ParamLimits

0xe79d,	// (0x0001d509) list_single_fs_dyc_pane_cp01_ParamLimits

0xe79d,	// (0x0001d509) list_single_fs_dyc_pane_cp01

0xe7b7,	// (0x0001d523) aid_size_cmail_indent

0xe7c0,	// (0x0001d52c) list_single_dyc_row_pane_cp01

0x78b2,	// (0x0001661e) cntbar_detail_list_pane_ParamLimits

0x78b2,	// (0x0001661e) cntbar_detail_list_pane

0x7904,	// (0x00016670) main_cntbar_detail_cont_pane_ParamLimits

0x7904,	// (0x00016670) main_cntbar_detail_cont_pane

0xd494,	// (0x0001c200) scroll_pane_cp032_ParamLimits

0xd494,	// (0x0001c200) scroll_pane_cp032

0x7918,	// (0x00016684) cntbar_detail_list_event_pane_ParamLimits

0x7918,	// (0x00016684) cntbar_detail_list_event_pane

0x78c4,	// (0x00016630) cntbar_detail_list_shct_pane

0xa24d,	// (0x00018fb9) aid_list_gen

0xe7c9,	// (0x0001d535) aid_scroll

0xe7d2,	// (0x0001d53e) aid_size_touch_scroll_bar

0x6c37,	// (0x000159a3) aid_list_double

0x7928,	// (0x00016694) aid_list_single

0x7928,	// (0x00016694) aid_list_single_lg

0x7931,	// (0x0001669d) aid_list_z_g_a_sm

0x7939,	// (0x000166a5) aid_list_z_g_d

0x7941,	// (0x000166ad) aid_txt_z_prm

0x794f,	// (0x000166bb) aid_txt_z_prm_cp01

0x795d,	// (0x000166c9) aid_txt_z_sec

0x796b,	// (0x000166d7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x796b,	// (0x000166d7) main_cntbar_detail_cont_pane_g1

0x797f,	// (0x000166eb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x797f,	// (0x000166eb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd29,	// (0x0001ea95) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd29,	// (0x0001ea95) main_cntbar_detail_cont_pane_g

0xe7db,	// (0x0001d547) main_cntbar_detail_cont_pane_t1

0xe7e9,	// (0x0001d555) main_cntbar_detail_cont_pane_t2

0xe7f7,	// (0x0001d563) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd2e,	// (0x0001ea9a) main_cntbar_detail_cont_pane_t

0x798f,	// (0x000166fb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x798f,	// (0x000166fb) cell_cntbar_detail_list_shct_pane

0xe805,	// (0x0001d571) cntbar_detail_list_shct_pane_g1

0xe80e,	// (0x0001d57a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd35,	// (0x0001eaa1) cntbar_detail_list_shct_pane_g

0x79a1,	// (0x0001670d) cntbar_detail_list_event_pane_g1_ParamLimits

0x79a1,	// (0x0001670d) cntbar_detail_list_event_pane_g1

0x79ad,	// (0x00016719) cntbar_detail_list_event_pane_g2_ParamLimits

0x79ad,	// (0x00016719) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3a,	// (0x0001eaa6) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3a,	// (0x0001eaa6) cntbar_detail_list_event_pane_g

0x7a1b,	// (0x00016787) cntbar_detail_list_event_pane_t1_ParamLimits

0x7a1b,	// (0x00016787) cntbar_detail_list_event_pane_t1

0x7a30,	// (0x0001679c) cntbar_detail_list_event_pane_t2_ParamLimits

0x7a30,	// (0x0001679c) cntbar_detail_list_event_pane_t2

0x0002,

0xfd47,	// (0x0001eab3) cntbar_detail_list_event_pane_t_ParamLimits

0xfd47,	// (0x0001eab3) cntbar_detail_list_event_pane_t

0x9d30,	// (0x00018a9c) cell_cntbar_detail_list_shct_pane_g1

0x23b4,	// (0x00011120) navi_pane_mv_g3

0x95be,	// (0x0001832a) main_cntbar_detail_pane_ParamLimits

0x9549,	// (0x000182b5) main_notif_wgt_pane

0xc8fe,	// (0x0001b66a) aid_tch_main_mp4_pane_g4

0xcb76,	// (0x0001b8e2) popup_slider_window_cp02

0xe51d,	// (0x0001d289) list_recal_day_event_pane

0x787e,	// (0x000165ea) cntbar_detail_btn_pane_ParamLimits

0x787e,	// (0x000165ea) cntbar_detail_btn_pane

0x7897,	// (0x00016603) cntbar_detail_btn_pane_cp01_ParamLimits

0x7897,	// (0x00016603) cntbar_detail_btn_pane_cp01

0x78c4,	// (0x00016630) cntbar_detail_list_shct_pane_ParamLimits

0x78d4,	// (0x00016640) cntbar_detail_pane_g1_ParamLimits

0x78d4,	// (0x00016640) cntbar_detail_pane_g1

0x78e8,	// (0x00016654) cntbar_detail_pane_t1_ParamLimits

0x78e8,	// (0x00016654) cntbar_detail_pane_t1

0x79b9,	// (0x00016725) cntbar_detail_list_event_pane_g3_ParamLimits

0x79b9,	// (0x00016725) cntbar_detail_list_event_pane_g3

0x79d1,	// (0x0001673d) cntbar_detail_list_event_pane_g4_ParamLimits

0x79d1,	// (0x0001673d) cntbar_detail_list_event_pane_g4

0x79e9,	// (0x00016755) cntbar_detail_list_event_pane_g5_ParamLimits

0x79e9,	// (0x00016755) cntbar_detail_list_event_pane_g5

0x7a01,	// (0x0001676d) cntbar_detail_list_event_pane_g6_ParamLimits

0x7a01,	// (0x0001676d) cntbar_detail_list_event_pane_g6

0x7a45,	// (0x000167b1) cntbar_detail_list_event_pane_t3_ParamLimits

0x7a45,	// (0x000167b1) cntbar_detail_list_event_pane_t3

0x7a57,	// (0x000167c3) popup_notif_wgt_window_ParamLimits

0x7a57,	// (0x000167c3) popup_notif_wgt_window

0x7a70,	// (0x000167dc) popup_submenu_window_cp01_ParamLimits

0x7a70,	// (0x000167dc) popup_submenu_window_cp01

0x9fc9,	// (0x00018d35) bg_popup_window_pane_cp10

0xe817,	// (0x0001d583) listscroll_notif_wgt_pane

0xe829,	// (0x0001d595) list_notif_wgt_window

0xe832,	// (0x0001d59e) scroll_pane_cp033

0x7a84,	// (0x000167f0) list_notif_wgt_row_pane_ParamLimits

0x7a84,	// (0x000167f0) list_notif_wgt_row_pane

0xe83b,	// (0x0001d5a7) aid_size_list_notif_wgt_del

0xe848,	// (0x0001d5b4) list_notif_wgt_row_pane_g1

0xe854,	// (0x0001d5c0) list_notif_wgt_row_pane_g2

0xe863,	// (0x0001d5cf) list_notif_wgt_row_pane_g3

0x0002,

0xfd4e,	// (0x0001eaba) list_notif_wgt_row_pane_g

0xe870,	// (0x0001d5dc) list_notif_wgt_row_pane_t1

0xe886,	// (0x0001d5f2) list_notif_wgt_row_pane_t2

0xe898,	// (0x0001d604) list_notif_wgt_row_pane_t3

0x0002,

0xfd55,	// (0x0001eac1) list_notif_wgt_row_pane_t

0xd0db,	// (0x0001be47) list_recal_day_event_pane_g1

0xe8aa,	// (0x0001d616) list_recal_day_event_pane_t1

0x9549,	// (0x000182b5) bg_button_pane_cp045

0x7a94,	// (0x00016800) cntbar_detail_btn_pane_t1

0xaa8a,	// (0x000197f6) main_callh_pane_ParamLimits

0xaa8a,	// (0x000197f6) main_callh_pane

0x9549,	// (0x000182b5) main_coverflow0_pane

0x9549,	// (0x000182b5) main_wgtman_pane

0x6ac1,	// (0x0001582d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6ac1,	// (0x0001582d) main_fs_bigclock_unlock_btn_pane

0x722f,	// (0x00015f9b) bg_button_pane_cp16

0x723f,	// (0x00015fab) cell_tport_appsw_pane_g3

0x7aa2,	// (0x0001680e) cf0_flow_pane_ParamLimits

0x7aa2,	// (0x0001680e) cf0_flow_pane

0xe8b9,	// (0x0001d625) listscroll_cf0_pane

0xe8c4,	// (0x0001d630) main_cf0_pane_g1

0x7ab7,	// (0x00016823) main_cf0_pane_t1_ParamLimits

0x7ab7,	// (0x00016823) main_cf0_pane_t1

0x7ace,	// (0x0001683a) main_cf0_pane_t2_ParamLimits

0x7ace,	// (0x0001683a) main_cf0_pane_t2

0x0001,

0xfd61,	// (0x0001eacd) main_cf0_pane_t_ParamLimits

0xfd61,	// (0x0001eacd) main_cf0_pane_t

0xe8d6,	// (0x0001d642) scroll_pane_cp11

0x7ae5,	// (0x00016851) cf0_flow_pane_g1

0x7af1,	// (0x0001685d) cf0_flow_pane_g2

0x0001,

0xfd66,	// (0x0001ead2) cf0_flow_pane_g

0x7afd,	// (0x00016869) cf0_flow_pane_t1

0x9549,	// (0x000182b5) main_call6_pane

0x9549,	// (0x000182b5) main_calllock_pane

0x7b0f,	// (0x0001687b) call6_btn_grp_pane_ParamLimits

0x7b0f,	// (0x0001687b) call6_btn_grp_pane

0x7b29,	// (0x00016895) call6_pane_g1_ParamLimits

0x7b29,	// (0x00016895) call6_pane_g1

0x7b42,	// (0x000168ae) popup_call6_1st_window_ParamLimits

0x7b42,	// (0x000168ae) popup_call6_1st_window

0x7b56,	// (0x000168c2) popup_call6_2nd_window_ParamLimits

0x7b56,	// (0x000168c2) popup_call6_2nd_window

0x7b6a,	// (0x000168d6) cell_call6_btn_pane_ParamLimits

0x7b6a,	// (0x000168d6) cell_call6_btn_pane

0x9fc9,	// (0x00018d35) bg_popup_call2_in_pane_cp03

0xe8e1,	// (0x0001d64d) popup_call6_1st_window_g1

0xe8e9,	// (0x0001d655) popup_call6_1st_window_g2

0xe8f1,	// (0x0001d65d) popup_call6_1st_window_g3

0x0002,

0xfd6b,	// (0x0001ead7) popup_call6_1st_window_g

0xe8f9,	// (0x0001d665) popup_call6_1st_window_t1

0xe908,	// (0x0001d674) popup_call6_1st_window_t2

0xe918,	// (0x0001d684) popup_call6_1st_window_t3

0x0002,

0xfd72,	// (0x0001eade) popup_call6_1st_window_t

0x9fc9,	// (0x00018d35) bg_popup_call2_in_pane_cp04

0xe928,	// (0x0001d694) popup_call6_2nd_window_g1

0xe930,	// (0x0001d69c) popup_call6_2nd_window_g2

0xe938,	// (0x0001d6a4) popup_call6_2nd_window_g3

0x0002,

0xfd79,	// (0x0001eae5) popup_call6_2nd_window_g

0xe940,	// (0x0001d6ac) popup_call6_2nd_window_t1

0x9549,	// (0x000182b5) bg_button_pane_cp15

0xe94f,	// (0x0001d6bb) cell_call6_btn_pane_g1

0xe958,	// (0x0001d6c4) cell_call6_btn_pane_t1

0x7b7e,	// (0x000168ea) listscroll_wgtman_pane_ParamLimits

0x7b7e,	// (0x000168ea) listscroll_wgtman_pane

0x7b9f,	// (0x0001690b) wgtman_btn_pane_ParamLimits

0x7b9f,	// (0x0001690b) wgtman_btn_pane

0xa865,	// (0x000195d1) aid_scroll_copy1

0xe967,	// (0x0001d6d3) list_wgtman_pane

0x7be2,	// (0x0001694e) wgtman_btn_pane_g1_ParamLimits

0x7be2,	// (0x0001694e) wgtman_btn_pane_g1

0x7c0e,	// (0x0001697a) wgtman_btn_pane_t1_ParamLimits

0x7c0e,	// (0x0001697a) wgtman_btn_pane_t1

0xe971,	// (0x0001d6dd) wgtman_btn_pane_t2_ParamLimits

0xe971,	// (0x0001d6dd) wgtman_btn_pane_t2

0x0001,

0xfd80,	// (0x0001eaec) wgtman_btn_pane_t_ParamLimits

0xfd80,	// (0x0001eaec) wgtman_btn_pane_t

0x7c4b,	// (0x000169b7) listrow_wgtman_pane_ParamLimits

0x7c4b,	// (0x000169b7) listrow_wgtman_pane

0x7c5f,	// (0x000169cb) listrow_wgtman_pane_g1

0x7c6c,	// (0x000169d8) listrow_wgtman_pane_g2

0x0001,

0xfd85,	// (0x0001eaf1) listrow_wgtman_pane_g

0x7c8a,	// (0x000169f6) listrow_wgtman_pane_t1

0x7ca2,	// (0x00016a0e) listrow_wgtman_pane_t2

0x0001,

0xfd8a,	// (0x0001eaf6) listrow_wgtman_pane_t

0x7cc8,	// (0x00016a34) wait_bar_pane_cp09

0xe988,	// (0x0001d6f4) main_calllock_btn_pane

0xe992,	// (0x0001d6fe) main_calllock_pane_g1

0x9549,	// (0x000182b5) bg_button_pane_cp17

0xe94f,	// (0x0001d6bb) main_calllock_btn_pane_g1

0xe99e,	// (0x0001d70a) main_calllock_btn_pane_t1

0x9549,	// (0x000182b5) main_dialer3_pane

0x9549,	// (0x000182b5) main_fmrd2_pane

0x9d30,	// (0x00018a9c) main_fs_bigclock_unlock_btn_pane_g1

0x7ce2,	// (0x00016a4e) main_fs_bigclock_unlock_btn_pane_t1

0x7cf0,	// (0x00016a5c) area_fmrd2_info_pane_ParamLimits

0x7cf0,	// (0x00016a5c) area_fmrd2_info_pane

0x7d01,	// (0x00016a6d) area_fmrd2_visual_pane_ParamLimits

0x7d01,	// (0x00016a6d) area_fmrd2_visual_pane

0x7d0f,	// (0x00016a7b) fmrd2_indi_pane_ParamLimits

0x7d0f,	// (0x00016a7b) fmrd2_indi_pane

0x7d1c,	// (0x00016a88) area_fmrd2_visual_pane_g1

0x7d24,	// (0x00016a90) area_fmrd2_visual_pane_t1

0x7d34,	// (0x00016aa0) area_fmrd2_visual_pane_t2

0x7d44,	// (0x00016ab0) area_fmrd2_visual_pane_t3

0x0002,

0xfd94,	// (0x0001eb00) area_fmrd2_visual_pane_t

0x7d54,	// (0x00016ac0) area_fmrd2_info_pane_g1

0x7d5c,	// (0x00016ac8) area_fmrd2_info_pane_t1

0x7d6c,	// (0x00016ad8) area_fmrd2_info_pane_t2

0x7d7c,	// (0x00016ae8) area_fmrd2_info_pane_t3

0x7d8c,	// (0x00016af8) area_fmrd2_info_pane_t4

0x0003,

0xfd9b,	// (0x0001eb07) area_fmrd2_info_pane_t

0x7d9c,	// (0x00016b08) fmrd2_indi_pane_t1

0x7dac,	// (0x00016b18) fmrd2_indi_pane_t2

0x7dbc,	// (0x00016b28) fmrd2_indi_pane_t3

0x0002,

0xfda4,	// (0x0001eb10) fmrd2_indi_pane_t

0x6b4a,	// (0x000158b6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x6b4a,	// (0x000158b6) list_single_fs_bigclock_indicator_pane_g5

0x6bff,	// (0x0001596b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x6bff,	// (0x0001596b) list_single_fs_bigclock_indicator_pane_t5

0x7429,	// (0x00016195) aid_cell_bcale_month_pane_ParamLimits

0x7429,	// (0x00016195) aid_cell_bcale_month_pane

0x7447,	// (0x000161b3) bcale_month_pane_ParamLimits

0x7447,	// (0x000161b3) bcale_month_pane

0x746b,	// (0x000161d7) bcale_preview_pane_ParamLimits

0x746b,	// (0x000161d7) bcale_preview_pane

0xe727,	// (0x0001d493) list_single_fs_bigclock_pane_t1_ParamLimits

0xe746,	// (0x0001d4b2) list_single_fs_bigclock_pane_t2_ParamLimits

0xe746,	// (0x0001d4b2) list_single_fs_bigclock_pane_t2

0x0001,

0xfd1f,	// (0x0001ea8b) list_single_fs_bigclock_pane_t_ParamLimits

0xfd1f,	// (0x0001ea8b) list_single_fs_bigclock_pane_t

0x7cda,	// (0x00016a46) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd8f,	// (0x0001eafb) main_fs_bigclock_unlock_btn_pane_g

0x7dcc,	// (0x00016b38) aid_dia3_key_size_ParamLimits

0x7dcc,	// (0x00016b38) aid_dia3_key_size

0x7de0,	// (0x00016b4c) aid_dia3_listrow_size_ParamLimits

0x7de0,	// (0x00016b4c) aid_dia3_listrow_size

0x7dfa,	// (0x00016b66) dia3_keypad_fun_pane_ParamLimits

0x7dfa,	// (0x00016b66) dia3_keypad_fun_pane

0x7e14,	// (0x00016b80) dia3_keypad_num_pane_ParamLimits

0x7e14,	// (0x00016b80) dia3_keypad_num_pane

0x7e2e,	// (0x00016b9a) dia3_listscroll_pane_ParamLimits

0x7e2e,	// (0x00016b9a) dia3_listscroll_pane

0x7e44,	// (0x00016bb0) dia3_numentry_pane_ParamLimits

0x7e44,	// (0x00016bb0) dia3_numentry_pane

0xe9ad,	// (0x0001d719) dia3_list_pane

0x7e5e,	// (0x00016bca) scroll_pane_cp12

0x9549,	// (0x000182b5) bg_dia3_numentry_pane

0x7e69,	// (0x00016bd5) dia3_numentry_pane_t1

0x7e78,	// (0x00016be4) cell_dia3_key_num_pane

0x7e80,	// (0x00016bec) cell_dia3_key0_fun_pane_ParamLimits

0x7e80,	// (0x00016bec) cell_dia3_key0_fun_pane

0x7e94,	// (0x00016c00) cell_dia3_key1_fun_pane_ParamLimits

0x7e94,	// (0x00016c00) cell_dia3_key1_fun_pane

0x7ea9,	// (0x00016c15) dia3_listrow_pane

0xdb1b,	// (0x0001c887) bg_dia3_numentry_pane_g1

0x9549,	// (0x000182b5) bg_button_pane_cp21

0x7ebb,	// (0x00016c27) cell_dia3_key_num_pane_t1

0x7ec9,	// (0x00016c35) cell_dia3_key_num_pane_t2

0x7ec9,	// (0x00016c35) cell_dia3_key_num_pane_t3

0x7ec9,	// (0x00016c35) cell_dia3_key_num_pane_t4

0x0003,

0xfdab,	// (0x0001eb17) cell_dia3_key_num_pane_t

0x9549,	// (0x000182b5) bg_button_pane_cp19

0x7ed8,	// (0x00016c44) cell_dia3_key0_fun_pane_g1

0x9549,	// (0x000182b5) bg_button_pane_cp20

0x7ee0,	// (0x00016c4c) cell_dia3_key1_fun_pane_g1

0x7ee8,	// (0x00016c54) area_left_week_number_pane

0x7ef6,	// (0x00016c62) area_top_day_name_pane

0x7f09,	// (0x00016c75) frame_month_view_pane

0xe9b8,	// (0x0001d724) grid_month_view_pane

0x7f1e,	// (0x00016c8a) cell_top_day_name_pane_ParamLimits

0x7f1e,	// (0x00016c8a) cell_top_day_name_pane

0x7f4d,	// (0x00016cb9) cell_area_left_week_number_pane_ParamLimits

0x7f4d,	// (0x00016cb9) cell_area_left_week_number_pane

0x7f63,	// (0x00016ccf) cell_month_view_pane_ParamLimits

0x7f63,	// (0x00016ccf) cell_month_view_pane

0xe9c6,	// (0x0001d732) frm_month_g1

0x7f94,	// (0x00016d00) frm_month_g2

0x7fa7,	// (0x00016d13) frm_month_g3

0x7fba,	// (0x00016d26) frm_month_g4

0x7fcd,	// (0x00016d39) frm_month_g5

0x7fe0,	// (0x00016d4c) frm_month_g6

0x7ff5,	// (0x00016d61) frm_month_g7

0xe9d3,	// (0x0001d73f) frm_month_g8

0x800a,	// (0x00016d76) frm_month_g9

0x801a,	// (0x00016d86) frm_month_g10

0x802a,	// (0x00016d96) frm_month_g11

0x803a,	// (0x00016da6) frm_month_g12

0x804c,	// (0x00016db8) frm_month_g13

0x8060,	// (0x00016dcc) frm_month_g14

0x8074,	// (0x00016de0) frm_month_g15

0x8088,	// (0x00016df4) frm_month_g16

0x000f,

0xfdb4,	// (0x0001eb20) frm_month_g

0xe9e0,	// (0x0001d74c) cell_top_day_name_pane_t1

0x809c,	// (0x00016e08) cell_area_left_week_number_pane_g1

0x80a8,	// (0x00016e14) cell_area_left_week_number_pane_t1

0x9cea,	// (0x00018a56) cell_month_view_pane_g1

0x80bb,	// (0x00016e27) cell_month_view_pane_t1

0x9549,	// (0x000182b5) main_fps_pane

0xdee3,	// (0x0001cc4f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdee3,	// (0x0001cc4f) cmail_ddmenu_btn02_pane_cp1

0xdeff,	// (0x0001cc6b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdeff,	// (0x0001cc6b) cmail_ddmenu_btn02_pane_cp2

0x7721,	// (0x0001648d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7721,	// (0x0001648d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd2,	// (0x0001ea3e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd2,	// (0x0001ea3e) cmail_ddmenu_btn02_pane_g

0x7742,	// (0x000164ae) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7742,	// (0x000164ae) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcd7,	// (0x0001ea43) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcd7,	// (0x0001ea43) cmail_ddmenu_btn02_pane_t

0x80ce,	// (0x00016e3a) fps_text_pane_ParamLimits

0x80ce,	// (0x00016e3a) fps_text_pane

0x80e5,	// (0x00016e51) main_fps_pane_g1_ParamLimits

0x80e5,	// (0x00016e51) main_fps_pane_g1

0x80fd,	// (0x00016e69) wait_bar_pane_cp010_ParamLimits

0x80fd,	// (0x00016e69) wait_bar_pane_cp010

0x8110,	// (0x00016e7c) fps_text_pane_t1_ParamLimits

0x8110,	// (0x00016e7c) fps_text_pane_t1

0xd4a0,	// (0x0001c20c) cam4_image_uncrop_pane_g1

0xd4a9,	// (0x0001c215) cam4_image_uncrop_pane_g2

0x4c5f,	// (0x000139cb) cam4_image_uncrop_pane_g3

0x4c68,	// (0x000139d4) cam4_image_uncrop_pane_g4

0x0003,

0xf816,	// (0x0001e582) cam4_image_uncrop_pane_g

0x7ea9,	// (0x00016c15) dia3_listrow_pane_ParamLimits

0x9549,	// (0x000182b5) main_phob2_pane

0x71d9,	// (0x00015f45) cell_tport_appsw_pane_cp02_ParamLimits

0x71d9,	// (0x00015f45) cell_tport_appsw_pane_cp02

0x71ed,	// (0x00015f59) cell_tport_appsw_pane_cp03_ParamLimits

0x71ed,	// (0x00015f59) cell_tport_appsw_pane_cp03

0x9549,	// (0x000182b5) phob2_contact_card_pane

0x9549,	// (0x000182b5) phob2_listscroll_pane

0xe9f3,	// (0x0001d75f) phob2_list_pane

0xe9fb,	// (0x0001d767) scroll_pane_cp034

0x8128,	// (0x00016e94) phob2_cc_data_pane_ParamLimits

0x8128,	// (0x00016e94) phob2_cc_data_pane

0x8141,	// (0x00016ead) phob2_cc_listscroll_pane_ParamLimits

0x8141,	// (0x00016ead) phob2_cc_listscroll_pane

0x8162,	// (0x00016ece) list_double_large_graphic_phob2_pane_ParamLimits

0x8162,	// (0x00016ece) list_double_large_graphic_phob2_pane

0x8176,	// (0x00016ee2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8176,	// (0x00016ee2) list_double_large_graphic_phob2_pane_g1

0x8183,	// (0x00016eef) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8183,	// (0x00016eef) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd5,	// (0x0001eb41) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd5,	// (0x0001eb41) list_double_large_graphic_phob2_pane_g

0x81a9,	// (0x00016f15) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x81a9,	// (0x00016f15) list_double_large_graphic_phob2_pane_t1

0x81be,	// (0x00016f2a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x81be,	// (0x00016f2a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdde,	// (0x0001eb4a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdde,	// (0x0001eb4a) list_double_large_graphic_phob2_pane_t

0x9549,	// (0x000182b5) list_highlight_pane_cp024

0x81d3,	// (0x00016f3f) phob2_cc_button_pane

0x81df,	// (0x00016f4b) phob2_cc_data_pane_g1_ParamLimits

0x81df,	// (0x00016f4b) phob2_cc_data_pane_g1

0x81f5,	// (0x00016f61) phob2_cc_data_pane_g2_ParamLimits

0x81f5,	// (0x00016f61) phob2_cc_data_pane_g2

0x0001,

0xfde3,	// (0x0001eb4f) phob2_cc_data_pane_g_ParamLimits

0xfde3,	// (0x0001eb4f) phob2_cc_data_pane_g

0x820d,	// (0x00016f79) phob2_cc_data_pane_t1_ParamLimits

0x820d,	// (0x00016f79) phob2_cc_data_pane_t1

0x823d,	// (0x00016fa9) phob2_cc_data_pane_t2_ParamLimits

0x823d,	// (0x00016fa9) phob2_cc_data_pane_t2

0x826d,	// (0x00016fd9) phob2_cc_data_pane_t3_ParamLimits

0x826d,	// (0x00016fd9) phob2_cc_data_pane_t3

0x0002,

0xfde8,	// (0x0001eb54) phob2_cc_data_pane_t_ParamLimits

0xfde8,	// (0x0001eb54) phob2_cc_data_pane_t

0xea03,	// (0x0001d76f) phob2_cc_list_pane_ParamLimits

0xea03,	// (0x0001d76f) phob2_cc_list_pane

0xd4b4,	// (0x0001c220) scroll_pane_cp035_ParamLimits

0xd4b4,	// (0x0001c220) scroll_pane_cp035

0x95be,	// (0x0001832a) bg_button_pane_cp033

0x829d,	// (0x00017009) phob2_cc_button_pane_g1

0x82a9,	// (0x00017015) phob2_cc_button_pane_t1

0x82be,	// (0x0001702a) phob2_cc_button_pane_t2

0x0001,

0xfdef,	// (0x0001eb5b) phob2_cc_button_pane_t

0x82d0,	// (0x0001703c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x82d0,	// (0x0001703c) list_double_large_graphic_phob2_cc_pane

0x8307,	// (0x00017073) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8307,	// (0x00017073) list_double_large_graphic_phob2_cc_pane_g1

0x8313,	// (0x0001707f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8313,	// (0x0001707f) list_double_large_graphic_phob2_cc_pane_g2

0x831f,	// (0x0001708b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x831f,	// (0x0001708b) list_double_large_graphic_phob2_cc_pane_g3

0x832b,	// (0x00017097) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x832b,	// (0x00017097) list_double_large_graphic_phob2_cc_pane_g4

0x8337,	// (0x000170a3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8337,	// (0x000170a3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf4,	// (0x0001eb60) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf4,	// (0x0001eb60) list_double_large_graphic_phob2_cc_pane_g

0x8343,	// (0x000170af) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8343,	// (0x000170af) list_double_large_graphic_phob2_cc_pane_t1

0x836c,	// (0x000170d8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x836c,	// (0x000170d8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdff,	// (0x0001eb6b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdff,	// (0x0001eb6b) list_double_large_graphic_phob2_cc_pane_t

0xea0f,	// (0x0001d77b) list_highlight_pane_cp025_ParamLimits

0xea0f,	// (0x0001d77b) list_highlight_pane_cp025

0x95be,	// (0x0001832a) bg_button_pane_cp033_ParamLimits

0x829d,	// (0x00017009) phob2_cc_button_pane_g1_ParamLimits

0x82a9,	// (0x00017015) phob2_cc_button_pane_t1_ParamLimits

0x82be,	// (0x0001702a) phob2_cc_button_pane_t2_ParamLimits

0xfdef,	// (0x0001eb5b) phob2_cc_button_pane_t_ParamLimits

0x0397,	// (0x0000f103) popup_wgtman_window

0xcf5d,	// (0x0001bcc9) scroll_pane_cp038

0x7bc4,	// (0x00016930) wgtman_btn_pane_cp_01_ParamLimits

0x7bc4,	// (0x00016930) wgtman_btn_pane_cp_01

0xea1d,	// (0x0001d789) wgtman_content_pane

0xea26,	// (0x0001d792) wgtman_heading_pane

0x9549,	// (0x000182b5) bg_heading_pane_cp02

0xea2f,	// (0x0001d79b) wgtman_heading_pane_g1

0xea37,	// (0x0001d7a3) wgtman_heading_pane_t1

0xea45,	// (0x0001d7b1) scroll_pane_cp036

0xea4d,	// (0x0001d7b9) wgtman_list_pane

0xddeb,	// (0x0001cb57) wgtman_list_pane_t1_ParamLimits

0xddeb,	// (0x0001cb57) wgtman_list_pane_t1

0xcca5,	// (0x0001ba11) cam4_grid_pane

0x59e6,	// (0x00014752) bg_button_pane_cp015_ParamLimits

0x59fd,	// (0x00014769) bg_button_pane_cp016_ParamLimits

0x5a09,	// (0x00014775) bg_button_pane_cp017_ParamLimits

0x5a64,	// (0x000147d0) popup_vitu2_query_window_g3_ParamLimits

0x5a64,	// (0x000147d0) popup_vitu2_query_window_g3

0x5b07,	// (0x00014873) popup_vitu2_query_window_t6_ParamLimits

0x5b07,	// (0x00014873) popup_vitu2_query_window_t6

0x5b32,	// (0x0001489e) popup_vitu2_query_window_t7_ParamLimits

0x5b32,	// (0x0001489e) popup_vitu2_query_window_t7

0xd4a0,	// (0x0001c20c) cam4_grid_pane_g1

0xd4a9,	// (0x0001c215) cam4_grid_pane_g2

0xea55,	// (0x0001d7c1) cam4_grid_pane_g3

0xea5e,	// (0x0001d7ca) cam4_grid_pane_g4

0x0003,

0xfe04,	// (0x0001eb70) cam4_grid_pane_g

0x0ec5,	// (0x0000fc31) aid_placing_vt_slider_lsc_ParamLimits

0x11b2,	// (0x0000ff1e) vidtel_button_pane_ParamLimits

0x11b2,	// (0x0000ff1e) vidtel_button_pane

0x9549,	// (0x000182b5) bg_button_pane_cp034

0xea69,	// (0x0001d7d5) vidtel_button_pane_g1

0xea71,	// (0x0001d7dd) vidtel_button_pane_t1

0xd08f,	// (0x0001bdfb) aid_size_vtel_slider_touch

0xd4b4,	// (0x0001c220) scroll_pane_cp039

0x682b,	// (0x00015597) ncim_query_button_pane_cp01_ParamLimits

0x684a,	// (0x000155b6) ncimui_query_pane_g1_ParamLimits

0x95be,	// (0x0001832a) input_focus_pane_cp012_ParamLimits

0xdb59,	// (0x0001c8c5) ncim_query_entry_pane_t1_ParamLimits

0xd4b4,	// (0x0001c220) scroll_pane_cp039_ParamLimits

0x2326,	// (0x00011092) navi_pane_bcale_mc_g1

0x232e,	// (0x0001109a) navi_pane_bcale_mc_t1

0xdf35,	// (0x0001cca1) main_sp_fs_email_pane_g1

0xdf41,	// (0x0001ccad) main_sp_fs_email_pane_g2

0x0001,

0xfc02,	// (0x0001e96e) main_sp_fs_email_pane_g

0xe38b,	// (0x0001d0f7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe38b,	// (0x0001d0f7) list_single_cale_mrui_row_pane_g3

0x7762,	// (0x000164ce) list_single_recal_day_pane_g5_event_pane

0xe58f,	// (0x0001d2fb) list_single_recal_day_pane_g7

0xea87,	// (0x0001d7f3) list_recal_day_event_pane_cp01

0xea90,	// (0x0001d7fc) list_recal_vselct_arw_lo_pane_cp01

0xea98,	// (0x0001d804) list_recal_vselct_arw_up_pane_cp01

0xeaa0,	// (0x0001d80c) list_recal_vselct_pane_cp01

0xd0db,	// (0x0001be47) list_recal_day_event_pane_cp01_g1

0xeaaa,	// (0x0001d816) list_recal_day_event_pane_cp01_t1

0xe597,	// (0x0001d303) list_single_recal_day_pane_t1_ParamLimits

0xe5a9,	// (0x0001d315) list_single_recal_day_pane_t2_ParamLimits

0xfce7,	// (0x0001ea53) list_single_recal_day_pane_t_ParamLimits

0x9c6f,	// (0x000189db) bg_notes_pane_ParamLimits

0x9d6c,	// (0x00018ad8) list_notes_pane_ParamLimits

0x04af,	// (0x0000f21b) scroll_pane_cp06_ParamLimits

0x9da8,	// (0x00018b14) main_notes_pane_ParamLimits

0x95be,	// (0x0001832a) main_welc_pane

0x83c3,	// (0x0001712f) main_welc_body_pane_ParamLimits

0x83c3,	// (0x0001712f) main_welc_body_pane

0x83e2,	// (0x0001714e) main_welc_opti_pane_ParamLimits

0x83e2,	// (0x0001714e) main_welc_opti_pane

0x8470,	// (0x000171dc) main_welc_pane_t1_ParamLimits

0x8470,	// (0x000171dc) main_welc_pane_t1

0x8698,	// (0x00017404) main_welc_body_row_pane_ParamLimits

0x8698,	// (0x00017404) main_welc_body_row_pane

0x9cdc,	// (0x00018a48) main_welc_opti_row_pane_ParamLimits

0x9cdc,	// (0x00018a48) main_welc_opti_row_pane

0xeac8,	// (0x0001d834) main_welc_opti_row_pane_g1

0x86ac,	// (0x00017418) main_welc_opti_row_pane_t1

0xead0,	// (0x0001d83c) main_welc_body_row_pane_t1

0xe821,	// (0x0001d58d) popup_notif_wgt_heading_pane

0xe83b,	// (0x0001d5a7) aid_size_list_notif_wgt_del_ParamLimits

0xe848,	// (0x0001d5b4) list_notif_wgt_row_pane_g1_ParamLimits

0xe854,	// (0x0001d5c0) list_notif_wgt_row_pane_g2_ParamLimits

0xe863,	// (0x0001d5cf) list_notif_wgt_row_pane_g3_ParamLimits

0xfd4e,	// (0x0001eaba) list_notif_wgt_row_pane_g_ParamLimits

0xe870,	// (0x0001d5dc) list_notif_wgt_row_pane_t1_ParamLimits

0xe886,	// (0x0001d5f2) list_notif_wgt_row_pane_t2_ParamLimits

0xe898,	// (0x0001d604) list_notif_wgt_row_pane_t3_ParamLimits

0xfd55,	// (0x0001eac1) list_notif_wgt_row_pane_t_ParamLimits

0x7c5f,	// (0x000169cb) listrow_wgtman_pane_g1_ParamLimits

0x7c6c,	// (0x000169d8) listrow_wgtman_pane_g2_ParamLimits

0xfd85,	// (0x0001eaf1) listrow_wgtman_pane_g_ParamLimits

0x7c8a,	// (0x000169f6) listrow_wgtman_pane_t1_ParamLimits

0x7ca2,	// (0x00016a0e) listrow_wgtman_pane_t2_ParamLimits

0xfd8a,	// (0x0001eaf6) listrow_wgtman_pane_t_ParamLimits

0x7cc8,	// (0x00016a34) wait_bar_pane_cp09_ParamLimits

0x9549,	// (0x000182b5) bg_popup_heading_pane_cp02

0xeadf,	// (0x0001d84b) popup_notif_wgt_heading_pane_g1

0xeae7,	// (0x0001d853) popup_notif_wgt_heading_pane_t1

0x9549,	// (0x000182b5) main_vids_pane

0x9549,	// (0x000182b5) vids_listscroll_pane

0x86bb,	// (0x00017427) scroll_pane_cp040

0x9549,	// (0x000182b5) vids_list_pane

0x86c6,	// (0x00017432) vids_list_double_pane_ParamLimits

0x86c6,	// (0x00017432) vids_list_double_pane

0x86d9,	// (0x00017445) vids_list_double_pane_g1

0x86e2,	// (0x0001744e) vids_list_double_pane_t1

0x86f2,	// (0x0001745e) vids_list_double_pane_t2

0x0001,

0xfe23,	// (0x0001eb8f) vids_list_double_pane_t

0x95be,	// (0x0001832a) main_ncimui_pane_ParamLimits

0x6661,	// (0x000153cd) main_ncimui_pane_g1_ParamLimits

0x666d,	// (0x000153d9) main_ncimui_pane_g2_ParamLimits

0x666d,	// (0x000153d9) main_ncimui_pane_g2

0x0001,

0xfb08,	// (0x0001e874) main_ncimui_pane_g_ParamLimits

0xfb08,	// (0x0001e874) main_ncimui_pane_g

0x8401,	// (0x0001716d) main_welc_pane_g1_ParamLimits

0x8401,	// (0x0001716d) main_welc_pane_g1

0x8416,	// (0x00017182) main_welc_pane_g2_ParamLimits

0x8416,	// (0x00017182) main_welc_pane_g2

0x0003,

0xfe0d,	// (0x0001eb79) main_welc_pane_g_ParamLimits

0xfe0d,	// (0x0001eb79) main_welc_pane_g

0x9c6f,	// (0x000189db) listscroll_mce_pane_ParamLimits

0x2406,	// (0x00011172) wait_bar_pane_cp10

0xbcbc,	// (0x0001aa28) main_cale_day_pane_ParamLimits

0xbcbc,	// (0x0001aa28) main_cale_week_pane_ParamLimits

0x9c6f,	// (0x000189db) main_messa_pane_ParamLimits

0x410d,	// (0x00012e79) main_clock2_btn_pane_ParamLimits

0x410d,	// (0x00012e79) main_clock2_btn_pane

0xc53d,	// (0x0001b2a9) main_clock2_btn_pane_cp01_ParamLimits

0xc53d,	// (0x0001b2a9) main_clock2_btn_pane_cp01

0xe317,	// (0x0001d083) list_cale_mrui_pane_ParamLimits

0xe8ce,	// (0x0001d63a) main_cf0_pane_g2

0x0001,

0xfd5c,	// (0x0001eac8) main_cf0_pane_g

0x7ee8,	// (0x00016c54) area_left_week_number_pane_ParamLimits

0x7ef6,	// (0x00016c62) area_top_day_name_pane_ParamLimits

0x7f09,	// (0x00016c75) frame_month_view_pane_ParamLimits

0xe9b8,	// (0x0001d724) grid_month_view_pane_ParamLimits

0xe9c6,	// (0x0001d732) frm_month_g1_ParamLimits

0x7f94,	// (0x00016d00) frm_month_g2_ParamLimits

0x7fa7,	// (0x00016d13) frm_month_g3_ParamLimits

0x7fba,	// (0x00016d26) frm_month_g4_ParamLimits

0x7fcd,	// (0x00016d39) frm_month_g5_ParamLimits

0x7fe0,	// (0x00016d4c) frm_month_g6_ParamLimits

0x7ff5,	// (0x00016d61) frm_month_g7_ParamLimits

0xe9d3,	// (0x0001d73f) frm_month_g8_ParamLimits

0x800a,	// (0x00016d76) frm_month_g9_ParamLimits

0x801a,	// (0x00016d86) frm_month_g10_ParamLimits

0x802a,	// (0x00016d96) frm_month_g11_ParamLimits

0x803a,	// (0x00016da6) frm_month_g12_ParamLimits

0x804c,	// (0x00016db8) frm_month_g13_ParamLimits

0x8060,	// (0x00016dcc) frm_month_g14_ParamLimits

0x8074,	// (0x00016de0) frm_month_g15_ParamLimits

0x8088,	// (0x00016df4) frm_month_g16_ParamLimits

0xfdb4,	// (0x0001eb20) frm_month_g_ParamLimits

0xe9e0,	// (0x0001d74c) cell_top_day_name_pane_t1_ParamLimits

0x809c,	// (0x00016e08) cell_area_left_week_number_pane_g1_ParamLimits

0x80a8,	// (0x00016e14) cell_area_left_week_number_pane_t1_ParamLimits

0x9cea,	// (0x00018a56) cell_month_view_pane_g1_ParamLimits

0x80bb,	// (0x00016e27) cell_month_view_pane_t1_ParamLimits

0x9c67,	// (0x000189d3) main_clock2_btn_pane_g1

0xeaf5,	// (0x0001d861) main_clock2_btn_pane_t1

0x95be,	// (0x0001832a) listscroll_cmail_pane_ParamLimits

0xdf35,	// (0x0001cca1) main_sp_fs_email_pane_g1_ParamLimits

0xdf41,	// (0x0001ccad) main_sp_fs_email_pane_g2_ParamLimits

0xfc02,	// (0x0001e96e) main_sp_fs_email_pane_g_ParamLimits

0xe4fe,	// (0x0001d26a) list_recal_day_pane_ParamLimits

0xe50f,	// (0x0001d27b) mian_recal_day_pane_t1

0x7072,	// (0x00015dde) list_single_dyc_row_text_pane_t4_ParamLimits

0x7072,	// (0x00015dde) list_single_dyc_row_text_pane_t4

0x70bb,	// (0x00015e27) list_single_dyc_row_text_pane_t5_ParamLimits

0x70bb,	// (0x00015e27) list_single_dyc_row_text_pane_t5

0xdfeb,	// (0x0001cd57) list_single_dyc_row_text_pane_t6_ParamLimits

0xdfeb,	// (0x0001cd57) list_single_dyc_row_text_pane_t6

0x1f75,	// (0x00010ce1) aid_mgn_list_cale_time_pane

0x95be,	// (0x0001832a) main_gallery2_pane_ParamLimits

0xc551,	// (0x0001b2bd) main_clock2_pane_cp01_t1

0xc55f,	// (0x0001b2cb) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x0001e45e) main_clock2_pane_cp01_t

0x08cd,	// (0x0000f639) cale_week_scroll_pane_g16_ParamLimits

0x08cd,	// (0x0000f639) cale_week_scroll_pane_g16

0x9fc9,	// (0x00018d35) vorec_slider_pane

0xea71,	// (0x0001d7dd) vidtel_button_pane_t1_ParamLimits

0x77c8,	// (0x00016534) main_fs_bigclock_clock_pane_g1_ParamLimits

0x77c8,	// (0x00016534) main_fs_bigclock_clock_pane_g2_ParamLimits

0x77db,	// (0x00016547) main_fs_bigclock_clock_pane_g3_ParamLimits

0x77db,	// (0x00016547) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0a,	// (0x0001ea76) main_fs_bigclock_clock_pane_g_ParamLimits

0x77f2,	// (0x0001655e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7808,	// (0x00016574) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd13,	// (0x0001ea7f) main_fs_bigclock_clock_pane_t_ParamLimits

0x395a,	// (0x000126c6) main_mup3_lyrics_pane_ParamLimits

0x395a,	// (0x000126c6) main_mup3_lyrics_pane

0x871a,	// (0x00017486) main_mup3_lyrics_pane_t1_ParamLimits

0x871a,	// (0x00017486) main_mup3_lyrics_pane_t1

0xc8e8,	// (0x0001b654) aid_main_mp4_pane_t1_area

0xc8f2,	// (0x0001b65e) aid_main_mp4_pane_t2_area

0xc99c,	// (0x0001b708) main_mp4_pane_g7_ParamLimits

0xc99c,	// (0x0001b708) main_mp4_pane_g7

0xc9a8,	// (0x0001b714) main_mp4_pane_g8_ParamLimits

0xc9a8,	// (0x0001b714) main_mp4_pane_g8

0x4a26,	// (0x00013792) aid_call6_pane_g1_size

0x82ef,	// (0x0001705b) list_double_large_graphic_phob2_other_pane_ParamLimits

0x82ef,	// (0x0001705b) list_double_large_graphic_phob2_other_pane

0xa38f,	// (0x000190fb) list_double_large_graphic_phob2_other_pane_g1

0x9549,	// (0x000182b5) list_highlight_pane_cp026

0x95be,	// (0x0001832a) main_welc_pane_ParamLimits

0x6ea5,	// (0x00015c11) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6ea5,	// (0x00015c11) main_sp_fs_ctrlbar_pane_g3

0x6ebf,	// (0x00015c2b) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6ebf,	// (0x00015c2b) main_sp_fs_ctrlbar_pane_g4

0x6ef3,	// (0x00015c5f) toolbar2_fixed_button_pane_cp01

0x6efe,	// (0x00015c6a) toolbar2_fixed_button_pane_cp02

0x6f0b,	// (0x00015c77) toolbar2_fixed_button_pane_cp03

0x83a8,	// (0x00017114) list_welc_entry_pane_ParamLimits

0x83a8,	// (0x00017114) list_welc_entry_pane

0x842b,	// (0x00017197) main_welc_pane_g3_ParamLimits

0x842b,	// (0x00017197) main_welc_pane_g3

0x8492,	// (0x000171fe) main_welc_pane_t2_ParamLimits

0x8492,	// (0x000171fe) main_welc_pane_t2

0x84b5,	// (0x00017221) main_welc_pane_t3_ParamLimits

0x84b5,	// (0x00017221) main_welc_pane_t3

0x0005,

0xfe16,	// (0x0001eb82) main_welc_pane_t_ParamLimits

0xfe16,	// (0x0001eb82) main_welc_pane_t

0x85ed,	// (0x00017359) welc_button_pane_ParamLimits

0x85ed,	// (0x00017359) welc_button_pane

0x8680,	// (0x000173ec) welc_service_logo_pane_ParamLimits

0x8680,	// (0x000173ec) welc_service_logo_pane

0x8735,	// (0x000174a1) list_single_welc_entry_pane_ParamLimits

0x8735,	// (0x000174a1) list_single_welc_entry_pane

0x8746,	// (0x000174b2) list_single_welc_entry_pane_g1

0x874e,	// (0x000174ba) list_single_welc_entry_pane_t1

0x875c,	// (0x000174c8) list_single_welc_entry_pane_t2

0x0001,

0xfe28,	// (0x0001eb94) list_single_welc_entry_pane_t

0x9549,	// (0x000182b5) bg_button_pane_cp035

0xeb11,	// (0x0001d87d) welc_button_pane_t1

0x876a,	// (0x000174d6) welc_service_logo_pane_g1

0x8773,	// (0x000174df) welc_service_logo_pane_g2

0x0001,

0xfe2d,	// (0x0001eb99) welc_service_logo_pane_g

0x9549,	// (0x000182b5) main_int_radio_pane

0xd9f7,	// (0x0001c763) list_single_fs_dyc_pane_g1

0x818f,	// (0x00016efb) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x818f,	// (0x00016efb) list_double_large_graphic_phob2_pane_g3

0x819b,	// (0x00016f07) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x819b,	// (0x00016f07) list_double_large_graphic_phob2_pane_g4

0x877c,	// (0x000174e8) main_int_radio1_pane_ParamLimits

0x877c,	// (0x000174e8) main_int_radio1_pane

0xeb1f,	// (0x0001d88b) find_pane_cp02

0x8799,	// (0x00017505) input_focus_pane_cp12_ParamLimits

0x8799,	// (0x00017505) input_focus_pane_cp12

0x87a9,	// (0x00017515) input_focus_pane_cp13_ParamLimits

0x87a9,	// (0x00017515) input_focus_pane_cp13

0x87bd,	// (0x00017529) input_focus_pane_cp14_ParamLimits

0x87bd,	// (0x00017529) input_focus_pane_cp14

0xeb28,	// (0x0001d894) int_radio1_listscroll_pane

0x87d1,	// (0x0001753d) main_int_radio1_pane_g1_ParamLimits

0x87d1,	// (0x0001753d) main_int_radio1_pane_g1

0x87e7,	// (0x00017553) main_int_radio1_pane_t1_ParamLimits

0x87e7,	// (0x00017553) main_int_radio1_pane_t1

0x8800,	// (0x0001756c) main_int_radio1_pane_t2_ParamLimits

0x8800,	// (0x0001756c) main_int_radio1_pane_t2

0x881b,	// (0x00017587) main_int_radio1_pane_t3_ParamLimits

0x881b,	// (0x00017587) main_int_radio1_pane_t3

0x8836,	// (0x000175a2) main_int_radio1_pane_t4_ParamLimits

0x8836,	// (0x000175a2) main_int_radio1_pane_t4

0xeb32,	// (0x0001d89e) main_int_radio1_pane_t5_ParamLimits

0xeb32,	// (0x0001d89e) main_int_radio1_pane_t5

0x8848,	// (0x000175b4) main_int_radio1_pane_t6_ParamLimits

0x8848,	// (0x000175b4) main_int_radio1_pane_t6

0x885d,	// (0x000175c9) main_int_radio1_pane_t7_ParamLimits

0x885d,	// (0x000175c9) main_int_radio1_pane_t7

0x8872,	// (0x000175de) main_int_radio1_pane_t8_ParamLimits

0x8872,	// (0x000175de) main_int_radio1_pane_t8

0x888f,	// (0x000175fb) main_int_radio1_pane_t9_ParamLimits

0x888f,	// (0x000175fb) main_int_radio1_pane_t9

0x88a1,	// (0x0001760d) main_int_radio1_pane_t10_ParamLimits

0x88a1,	// (0x0001760d) main_int_radio1_pane_t10

0x88c7,	// (0x00017633) main_int_radio1_pane_t11_ParamLimits

0x88c7,	// (0x00017633) main_int_radio1_pane_t11

0x88ed,	// (0x00017659) main_int_radio1_pane_t12_ParamLimits

0x88ed,	// (0x00017659) main_int_radio1_pane_t12

0x000b,

0xfe32,	// (0x0001eb9e) main_int_radio1_pane_t_ParamLimits

0xfe32,	// (0x0001eb9e) main_int_radio1_pane_t

0xe9f3,	// (0x0001d75f) int_radio_list_pane

0xe9fb,	// (0x0001d767) scroll_pane_cp037

0xeb44,	// (0x0001d8b0) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb44,	// (0x0001d8b0) list_double_large_graphic_int_radio_pane

0xeb58,	// (0x0001d8c4) list_double_large_graphic_int_radio_pane_g1

0xeb61,	// (0x0001d8cd) list_double_large_graphic_int_radio_pane_t1

0xeb6f,	// (0x0001d8db) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4b,	// (0x0001ebb7) list_double_large_graphic_int_radio_pane_t

0x9549,	// (0x000182b5) list_highlight_pane_cp027

0xeab8,	// (0x0001d824) main_button_pane_4

0x843f,	// (0x000171ab) main_welc_pane_g4_ParamLimits

0x843f,	// (0x000171ab) main_welc_pane_g4

0x84d8,	// (0x00017244) main_welc_pane_t4_ParamLimits

0x84d8,	// (0x00017244) main_welc_pane_t4

0x84ef,	// (0x0001725b) main_welc_pane_t5_ParamLimits

0x84ef,	// (0x0001725b) main_welc_pane_t5

0x852e,	// (0x0001729a) main_welc_pane_t6_ParamLimits

0x852e,	// (0x0001729a) main_welc_pane_t6

0x8602,	// (0x0001736e) welc_button_pane_2_ParamLimits

0x8602,	// (0x0001736e) welc_button_pane_2

0x8625,	// (0x00017391) welc_button_pane_3_ParamLimits

0x8625,	// (0x00017391) welc_button_pane_3

0xeac0,	// (0x0001d82c) welc_button_pane_4

0x864d,	// (0x000173b9) welc_button_pane_5_ParamLimits

0x864d,	// (0x000173b9) welc_button_pane_5

0x019d,	// (0x0000ef09) main_popup_welc_pane

0xeb95,	// (0x0001d901) main_welc_sk_g3

0xeb9f,	// (0x0001d90b) main_welc_sk_g4

0xeba9,	// (0x0001d915) main_welc_sk_t3

0xebb9,	// (0x0001d925) main_welc_sk_t4

0xebc9,	// (0x0001d935) popup_welc_pane_t4

0xebd7,	// (0x0001d943) popup_welc_pane_t5

0xebe5,	// (0x0001d951) popup_welc_pane_t6

0x9549,	// (0x000182b5) main_acti_pane

0x9549,	// (0x000182b5) main_sso_pane

0x88ff,	// (0x0001766b) sso_body_pane_ParamLimits

0x88ff,	// (0x0001766b) sso_body_pane

0x8914,	// (0x00017680) sso_logo_pane_ParamLimits

0x8914,	// (0x00017680) sso_logo_pane

0x894d,	// (0x000176b9) sso_sk_pane_ParamLimits

0x894d,	// (0x000176b9) sso_sk_pane

0xec27,	// (0x0001d993) main_sso_logo_pane_g1

0x895f,	// (0x000176cb) sso_sk_pane_t1_ParamLimits

0x895f,	// (0x000176cb) sso_sk_pane_t1

0x8979,	// (0x000176e5) sso_sk_pane_t2_ParamLimits

0x8979,	// (0x000176e5) sso_sk_pane_t2

0x0001,

0xfe50,	// (0x0001ebbc) sso_sk_pane_t_ParamLimits

0xfe50,	// (0x0001ebbc) sso_sk_pane_t

0xec32,	// (0x0001d99e) aid_sso_gap

0xec3b,	// (0x0001d9a7) aid_sso_txt1

0xec45,	// (0x0001d9b1) aid_sso_txt2

0xec4f,	// (0x0001d9bb) aid_sso_txt3

0x0002,

0xfe55,	// (0x0001ebc1) aid_sso_txt

0xec59,	// (0x0001d9c5) aid_sso_widget

0x89e3,	// (0x0001774f) sso_btn_pane_ParamLimits

0x89e3,	// (0x0001774f) sso_btn_pane

0x8a67,	// (0x000177d3) sso_option_pane_ParamLimits

0x8a67,	// (0x000177d3) sso_option_pane

0x8b25,	// (0x00017891) sso_query_pane_ParamLimits

0x8b25,	// (0x00017891) sso_query_pane

0x8b7b,	// (0x000178e7) sso_query_pane_cp01_ParamLimits

0x8b7b,	// (0x000178e7) sso_query_pane_cp01

0x8bdb,	// (0x00017947) sso_t_hdr_pane_ParamLimits

0x8bdb,	// (0x00017947) sso_t_hdr_pane

0x8c05,	// (0x00017971) sso_t_nml_pane_ParamLimits

0x8c05,	// (0x00017971) sso_t_nml_pane

0xec63,	// (0x0001d9cf) sso_t_sub_pane

0x8921,	// (0x0001768d) sso_popup_window_ParamLimits

0x8921,	// (0x0001768d) sso_popup_window

0x898f,	// (0x000176fb) sso_apps_pane_ParamLimits

0x898f,	// (0x000176fb) sso_apps_pane

0x89b9,	// (0x00017725) sso_body_pane_g1

0x89c3,	// (0x0001772f) sso_body_pane_t1

0x89d3,	// (0x0001773f) sso_body_pane_t2

0x0001,

0xfe5c,	// (0x0001ebc8) sso_body_pane_t

0x8a2f,	// (0x0001779b) sso_btn_pane_cp01_ParamLimits

0x8a2f,	// (0x0001779b) sso_btn_pane_cp01

0x8af9,	// (0x00017865) sso_prog_pane_ParamLimits

0x8af9,	// (0x00017865) sso_prog_pane

0x8c5b,	// (0x000179c7) sso_t_hdr_pane_t1_ParamLimits

0x8c5b,	// (0x000179c7) sso_t_hdr_pane_t1

0xec78,	// (0x0001d9e4) input_focus_pane_cp10_ParamLimits

0xec78,	// (0x0001d9e4) input_focus_pane_cp10

0xec8c,	// (0x0001d9f8) sso_query_pane_t1_ParamLimits

0xec8c,	// (0x0001d9f8) sso_query_pane_t1

0xec9f,	// (0x0001da0b) sso_query_pane_t2_ParamLimits

0xec9f,	// (0x0001da0b) sso_query_pane_t2

0xecb9,	// (0x0001da25) sso_query_pane_t3_ParamLimits

0xecb9,	// (0x0001da25) sso_query_pane_t3

0xece3,	// (0x0001da4f) sso_query_pane_t4_ParamLimits

0xece3,	// (0x0001da4f) sso_query_pane_t4

0x0003,

0xfe61,	// (0x0001ebcd) sso_query_pane_t_ParamLimits

0xfe61,	// (0x0001ebcd) sso_query_pane_t

0xeb8c,	// (0x0001d8f8) bg_button_pane_cp22

0xeb7d,	// (0x0001d8e9) sso_btn_pane_t1

0x8c6e,	// (0x000179da) sso_t_nml_pane_t1_ParamLimits

0x8c6e,	// (0x000179da) sso_t_nml_pane_t1

0xed07,	// (0x0001da73) sso_option_row_pane_ParamLimits

0xed07,	// (0x0001da73) sso_option_row_pane

0xed14,	// (0x0001da80) sso_t_sub_pane_t1_ParamLimits

0xed14,	// (0x0001da80) sso_t_sub_pane_t1

0x95be,	// (0x0001832a) bg_popup_window_pane_cp11_ParamLimits

0x95be,	// (0x0001832a) bg_popup_window_pane_cp11

0xed31,	// (0x0001da9d) popup_sk_window_cp01_ParamLimits

0xed31,	// (0x0001da9d) popup_sk_window_cp01

0xed3e,	// (0x0001daaa) sso_popup_body_pane_ParamLimits

0xed3e,	// (0x0001daaa) sso_popup_body_pane

0xed4b,	// (0x0001dab7) scroll_pane_cp21_ParamLimits

0xed4b,	// (0x0001dab7) scroll_pane_cp21

0xed58,	// (0x0001dac4) sso_popup_body_t_pane_ParamLimits

0xed58,	// (0x0001dac4) sso_popup_body_t_pane

0xed65,	// (0x0001dad1) sso_popup_body_t_hdr_pane_ParamLimits

0xed65,	// (0x0001dad1) sso_popup_body_t_hdr_pane

0x8c89,	// (0x000179f5) sso_popup_body_t_nml_pane_ParamLimits

0x8c89,	// (0x000179f5) sso_popup_body_t_nml_pane

0x8cb0,	// (0x00017a1c) sso_popup_body_t_sub_pane_ParamLimits

0x8cb0,	// (0x00017a1c) sso_popup_body_t_sub_pane

0xed77,	// (0x0001dae3) sso_popup_body_t_hdr_pane_t1

0x8cd3,	// (0x00017a3f) sso_popup_body_t_nml_pane_t1_ParamLimits

0x8cd3,	// (0x00017a3f) sso_popup_body_t_nml_pane_t1

0xed87,	// (0x0001daf3) sso_popup_body_t_sub_pane_t1_ParamLimits

0xed87,	// (0x0001daf3) sso_popup_body_t_sub_pane_t1

0x9d30,	// (0x00018a9c) sso_prog_pane_g1

0x8d0b,	// (0x00017a77) sso_apps_pane_comp1_ParamLimits

0x8d0b,	// (0x00017a77) sso_apps_pane_comp1

0xedac,	// (0x0001db18) sso_apps_pane_comp1_g1

0xedb4,	// (0x0001db20) sso_apps_pane_comp1_t1

0xedd0,	// (0x0001db3c) sso_option_row_pane_g1

0xedd8,	// (0x0001db44) sso_option_row_pane_t1

0xe0ac,	// (0x0001ce18) list_cmail_pane_ParamLimits

0x9549,	// (0x000182b5) main_call7_pane

0x8395,	// (0x00017101) bg_welc_area_ParamLimits

0x8395,	// (0x00017101) bg_welc_area

0x856c,	// (0x000172d8) sso_t_hdr_pane_a_t1_ParamLimits

0x856c,	// (0x000172d8) sso_t_hdr_pane_a_t1

0x8585,	// (0x000172f1) sso_t_nml_pane_a_t1_ParamLimits

0x8585,	// (0x000172f1) sso_t_nml_pane_a_t1

0x85b4,	// (0x00017320) sso_t_sub_pane_a_t1_ParamLimits

0x85b4,	// (0x00017320) sso_t_sub_pane_a_t1

0x8666,	// (0x000173d2) welc_button_pane_cp01_ParamLimits

0x8666,	// (0x000173d2) welc_button_pane_cp01

0xeb7d,	// (0x0001d8e9) sso_btn_pane_t1_copy1

0xeb8c,	// (0x0001d8f8) welc_button_pane_2_comp1

0xebf5,	// (0x0001d961) sso_t_hdr_pane_p_t1

0xec05,	// (0x0001d971) sso_t_nml_pane_p_t1

0xec15,	// (0x0001d981) sso_t_sub_pane_p_t1

0x9549,	// (0x000182b5) main_att_pane

0x9549,	// (0x000182b5) main_vod_pane

0xec63,	// (0x0001d9cf) sso_t_sub_pane_ParamLimits

0xedc2,	// (0x0001db2e) input_focus_pane_cp10_t1

0xedd8,	// (0x0001db44) sso_option_row_pane_t1_ParamLimits

0x8d25,	// (0x00017a91) main_att_body_pane_ParamLimits

0x8d25,	// (0x00017a91) main_att_body_pane

0x8d3b,	// (0x00017aa7) att_btn_emg_pane_ParamLimits

0x8d3b,	// (0x00017aa7) att_btn_emg_pane

0x8d5a,	// (0x00017ac6) att_btn_pane_ParamLimits

0x8d5a,	// (0x00017ac6) att_btn_pane

0x8dcf,	// (0x00017b3b) att_btn_pane_cp01_ParamLimits

0x8dcf,	// (0x00017b3b) att_btn_pane_cp01

0x8def,	// (0x00017b5b) att_li_srv_pane_ParamLimits

0x8def,	// (0x00017b5b) att_li_srv_pane

0x8e0c,	// (0x00017b78) att_opt_pane_ParamLimits

0x8e0c,	// (0x00017b78) att_opt_pane

0x8e56,	// (0x00017bc2) att_query_pane_ParamLimits

0x8e56,	// (0x00017bc2) att_query_pane

0x8ecf,	// (0x00017c3b) att_query_pane_cp01_ParamLimits

0x8ecf,	// (0x00017c3b) att_query_pane_cp01

0x8f1b,	// (0x00017c87) att_t_hdr_pane_ParamLimits

0x8f1b,	// (0x00017c87) att_t_hdr_pane

0x8f8b,	// (0x00017cf7) att_t_nml_pane_ParamLimits

0x8f8b,	// (0x00017cf7) att_t_nml_pane

0x9005,	// (0x00017d71) att_t_nml_pane_cp01_ParamLimits

0x9005,	// (0x00017d71) att_t_nml_pane_cp01

0x9033,	// (0x00017d9f) att_t_nmlb_pane_ParamLimits

0x9033,	// (0x00017d9f) att_t_nmlb_pane

0x90a0,	// (0x00017e0c) att_term_pane_ParamLimits

0x90a0,	// (0x00017e0c) att_term_pane

0x90ec,	// (0x00017e58) main_att_body_pane_g1_ParamLimits

0x90ec,	// (0x00017e58) main_att_body_pane_g1

0xedf1,	// (0x0001db5d) att_t_hdr_pane_t1_ParamLimits

0xedf1,	// (0x0001db5d) att_t_hdr_pane_t1

0xee0a,	// (0x0001db76) att_t_nml_pane_t1_ParamLimits

0xee0a,	// (0x0001db76) att_t_nml_pane_t1

0xee2f,	// (0x0001db9b) att_btn_pane_t1

0xeb8c,	// (0x0001d8f8) bg_button_pane_cp23

0x911a,	// (0x00017e86) att_li_srv_row_pane_ParamLimits

0x911a,	// (0x00017e86) att_li_srv_row_pane

0xee3f,	// (0x0001dbab) att_t_nmlb_pane_t1_ParamLimits

0xee3f,	// (0x0001dbab) att_t_nmlb_pane_t1

0xee5d,	// (0x0001dbc9) att_query_pane_t1

0xee6c,	// (0x0001dbd8) att_query_pane_t2

0xee7b,	// (0x0001dbe7) att_query_pane_t3

0x0002,

0xfe6a,	// (0x0001ebd6) att_query_pane_t

0xee8a,	// (0x0001dbf6) input_focus_pane_cp11

0xee93,	// (0x0001dbff) att_term_pane_t1_ParamLimits

0xee93,	// (0x0001dbff) att_term_pane_t1

0x9549,	// (0x000182b5) att_opt_row_pane

0xedd0,	// (0x0001db3c) att_opt_row_pane_g1

0xeeb0,	// (0x0001dc1c) att_opt_row_pane_t1_ParamLimits

0xeeb0,	// (0x0001dc1c) att_opt_row_pane_t1

0x912a,	// (0x00017e96) att_li_srv_row_pane_g1

0x9132,	// (0x00017e9e) att_li_srv_row_pane_t1_ParamLimits

0x9132,	// (0x00017e9e) att_li_srv_row_pane_t1

0x9147,	// (0x00017eb3) att_li_srv_row_pane_t2_ParamLimits

0x9147,	// (0x00017eb3) att_li_srv_row_pane_t2

0x0001,

0xfe71,	// (0x0001ebdd) att_li_srv_row_pane_t_ParamLimits

0xfe71,	// (0x0001ebdd) att_li_srv_row_pane_t

0xeec9,	// (0x0001dc35) att_btn_close_pane_g1

0x9549,	// (0x000182b5) bg_button_pane_cp24

0x915c,	// (0x00017ec8) main_vod_body_pane_ParamLimits

0x915c,	// (0x00017ec8) main_vod_body_pane

0x9170,	// (0x00017edc) main_vod_body_pane_g1_ParamLimits

0x9170,	// (0x00017edc) main_vod_body_pane_g1

0x91a4,	// (0x00017f10) scroll_pane_cp24_ParamLimits

0x91a4,	// (0x00017f10) scroll_pane_cp24

0x91f2,	// (0x00017f5e) vod_btn_pane_ParamLimits

0x91f2,	// (0x00017f5e) vod_btn_pane

0x9234,	// (0x00017fa0) vod_det_pane_ParamLimits

0x9234,	// (0x00017fa0) vod_det_pane

0x9268,	// (0x00017fd4) vod_logo_g1_ParamLimits

0x9268,	// (0x00017fd4) vod_logo_g1

0x92b6,	// (0x00018022) vod_opt_pane_ParamLimits

0x92b6,	// (0x00018022) vod_opt_pane

0x92e9,	// (0x00018055) vod_opt_pane_cp01_ParamLimits

0x92e9,	// (0x00018055) vod_opt_pane_cp01

0x9315,	// (0x00018081) vod_query_pane_ParamLimits

0x9315,	// (0x00018081) vod_query_pane

0x9340,	// (0x000180ac) vod_query_pane_cp01_ParamLimits

0x9340,	// (0x000180ac) vod_query_pane_cp01

0x934c,	// (0x000180b8) vod_t_nml_pane_ParamLimits

0x934c,	// (0x000180b8) vod_t_nml_pane

0x9401,	// (0x0001816d) vod_t_nml_pane_cp01_ParamLimits

0x9401,	// (0x0001816d) vod_t_nml_pane_cp01

0x943d,	// (0x000181a9) vod_t_sub_pane_ParamLimits

0x943d,	// (0x000181a9) vod_t_sub_pane

0x946e,	// (0x000181da) vod_t_sub_pane_cp01_ParamLimits

0x946e,	// (0x000181da) vod_t_sub_pane_cp01

0xee8a,	// (0x0001dbf6) vod_query_field_pane

0xeed1,	// (0x0001dc3d) vod_query_pane_t1

0xeb8c,	// (0x0001d8f8) bg_button_pane_cp25

0xeee0,	// (0x0001dc4c) sso_btn_pane_t1_copy2

0x949a,	// (0x00018206) vod_t_nml_pane_t1_ParamLimits

0x949a,	// (0x00018206) vod_t_nml_pane_t1

0xeeef,	// (0x0001dc5b) vod_opt_row_pane_ParamLimits

0xeeef,	// (0x0001dc5b) vod_opt_row_pane

0xef01,	// (0x0001dc6d) vod_t_sub_pane_t1_ParamLimits

0xef01,	// (0x0001dc6d) vod_t_sub_pane_t1

0xef1a,	// (0x0001dc86) vod_det_cell_pane_ParamLimits

0xef1a,	// (0x0001dc86) vod_det_cell_pane

0x9549,	// (0x000182b5) input_focus_pane_cp15

0xef2b,	// (0x0001dc97) vod_query_field_pane_t1

0xef39,	// (0x0001dca5) vod_opt_row_pane_g1_ParamLimits

0xef39,	// (0x0001dca5) vod_opt_row_pane_g1

0xef45,	// (0x0001dcb1) vod_opt_row_pane_t1_ParamLimits

0xef45,	// (0x0001dcb1) vod_opt_row_pane_t1

0xef64,	// (0x0001dcd0) vod_det_cell_field_pane

0xef6d,	// (0x0001dcd9) vod_det_cell_pane_g1

0xef75,	// (0x0001dce1) vod_det_cell_pane_t1

0x9549,	// (0x000182b5) input_focus_pane_cp16

0xef84,	// (0x0001dcf0) vod_det_cell_field_pane_t1

0x7b0f,	// (0x0001687b) call7_btn_grp_pane_ParamLimits

0x7b0f,	// (0x0001687b) call7_btn_grp_pane

0x95be,	// (0x0001832a) call7_bubble_pane_ParamLimits

0x95be,	// (0x0001832a) call7_bubble_pane

0x94cf,	// (0x0001823b) cell_call7_btn_pane_ParamLimits

0x94cf,	// (0x0001823b) cell_call7_btn_pane

0x94e3,	// (0x0001824f) call7_pane_g1_ParamLimits

0x94e3,	// (0x0001824f) call7_pane_g1

0x94f5,	// (0x00018261) call7_windows_conf_pane_ParamLimits

0x94f5,	// (0x00018261) call7_windows_conf_pane

0x9513,	// (0x0001827f) popup_call7_1st_window_ParamLimits

0x9513,	// (0x0001827f) popup_call7_1st_window

0x9525,	// (0x00018291) popup_call7_2nd_window_ParamLimits

0x9525,	// (0x00018291) popup_call7_2nd_window

0x9537,	// (0x000182a3) popup_call7_3rd_window_ParamLimits

0x9537,	// (0x000182a3) popup_call7_3rd_window

0x9549,	// (0x000182b5) bg_button_pane_cp26

0xe94f,	// (0x0001d6bb) cell_call7_btn_pane_g1

0xe958,	// (0x0001d6c4) cell_call7_btn_pane_t1

0x9549,	// (0x000182b5) bg_popup_window_pane_cp12

0xef92,	// (0x0001dcfe) popup_call7_1st_window_g1

0xef9a,	// (0x0001dd06) popup_call7_1st_window_g2

0xefa2,	// (0x0001dd0e) popup_call7_1st_window_g3

0x0002,

0xfe76,	// (0x0001ebe2) popup_call7_1st_window_g

0xefaa,	// (0x0001dd16) popup_call7_1st_window_t1

0xefb9,	// (0x0001dd25) popup_call7_1st_window_t2

0xefc9,	// (0x0001dd35) popup_call7_1st_window_t3

0x0002,

0xfe7d,	// (0x0001ebe9) popup_call7_1st_window_t

0x9549,	// (0x000182b5) bg_popup_window_pane_cp13

0xefd9,	// (0x0001dd45) popup_call7_2nd_window_g1

0xefe1,	// (0x0001dd4d) popup_call7_2nd_window_g2

0xefe9,	// (0x0001dd55) popup_call7_2nd_window_g3

0x0002,

0xfe84,	// (0x0001ebf0) popup_call7_2nd_window_g

0xefaa,	// (0x0001dd16) popup_call7_2nd_window_t1

0x9549,	// (0x000182b5) bg_popup_window_pane_cp14

0xeff1,	// (0x0001dd5d) call7_list_conf_pane

0xeff9,	// (0x0001dd65) call7_list_conf_row_pane_ParamLimits

0xeff9,	// (0x0001dd65) call7_list_conf_row_pane

0xf00c,	// (0x0001dd78) call7_list_conf_row_pane_g1

0xf014,	// (0x0001dd80) call7_list_conf_row_pane_g2

0x0001,

0xfe8b,	// (0x0001ebf7) call7_list_conf_row_pane_g

0xf01c,	// (0x0001dd88) call7_list_conf_row_pane_t1

0x9549,	// (0x000182b5) list_highlight_pane_cp22

0x8ac1,	// (0x0001782d) sso_option_pane_cp01_ParamLimits

0x8ac1,	// (0x0001782d) sso_option_pane_cp01

0x9c6f,	// (0x000189db) msg_header_pane_ParamLimits

0xab2f,	// (0x0001989b) bg_button_pane_cp01_ParamLimits

0xab43,	// (0x000198af) input_focus_pane_cp07_ParamLimits

0x6f5c,	// (0x00015cc8) popup_email_progress_window

0x9d30,	// (0x00018a9c) popup_email_progress_window_g1

0xf02a,	// (0x0001dd96) popup_email_progress_window_g2

0x0001,

0xfe90,	// (0x0001ebfc) popup_email_progress_window_g

0xf032,	// (0x0001dd9e) popup_email_progress_window_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
