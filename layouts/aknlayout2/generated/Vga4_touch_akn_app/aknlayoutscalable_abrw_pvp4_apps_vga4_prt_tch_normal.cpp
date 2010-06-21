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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001ec31 };

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
0x259c,	// (0x000211cd) Screen

0x25a8,	// (0x000211d9) application_window

0x25b4,	// (0x000211e5) area_bottom_pane_ParamLimits

0x25b4,	// (0x000211e5) area_bottom_pane

0x0b6d,	// (0x0001f79e) area_top_pane_ParamLimits

0x0b6d,	// (0x0001f79e) area_top_pane

0x0bd1,	// (0x0001f802) call_video_uplink_pane_ParamLimits

0x0bd1,	// (0x0001f802) call_video_uplink_pane

0x0c10,	// (0x0001f841) main_pane_ParamLimits

0x0c10,	// (0x0001f841) main_pane

0xc611,	// (0x0002b242) context_pane

0x5486,	// (0x000240b7) navi_pane

0x54ae,	// (0x000240df) popup_cale_events_window_ParamLimits

0x54ae,	// (0x000240df) popup_cale_events_window

0xc624,	// (0x0002b255) popup_mup_playback_window

0x54c6,	// (0x000240f7) signal_pane

0xa587,	// (0x000291b8) main_browser_pane

0xa72f,	// (0x00029360) main_burst_pane

0x1231,	// (0x0001fe62) main_calc_pane

0xc5f7,	// (0x0002b228) main_cale_day_pane

0x123e,	// (0x0001fe6f) main_cale_month_pane

0xc5f7,	// (0x0002b228) main_cale_week_pane

0xa72f,	// (0x00029360) main_call_pane

0xa267,	// (0x00028e98) main_call_poc_pane

0xa72f,	// (0x00029360) main_camera_pane

0xa72f,	// (0x00029360) main_chi_dic_pane

0xaf44,	// (0x00029b75) main_clock_pane

0xa267,	// (0x00028e98) main_fmradio_pane

0xa72f,	// (0x00029360) main_graph_messa_pane

0xa267,	// (0x00028e98) main_help_pane

0xa587,	// (0x000291b8) main_im_pane

0xa4c2,	// (0x000290f3) main_image_pane_ParamLimits

0xa4c2,	// (0x000290f3) main_image_pane

0xa267,	// (0x00028e98) main_location2_pane

0xa72f,	// (0x00029360) main_location_pane

0xa4c2,	// (0x000290f3) main_messa_pane

0xa267,	// (0x00028e98) main_mp2_pane

0xa72f,	// (0x00029360) main_mp_pane

0xa267,	// (0x00028e98) main_msg_pane

0xa267,	// (0x00028e98) main_mup_eq_pane

0xa267,	// (0x00028e98) main_mup_pane

0xa587,	// (0x000291b8) main_notes_pane

0xa267,	// (0x00028e98) main_pec_pane

0xa267,	// (0x00028e98) main_phob_pane

0xa267,	// (0x00028e98) main_pinb_pane

0xa267,	// (0x00028e98) main_postcard_pane

0xa267,	// (0x00028e98) main_qdial_pane

0xa72f,	// (0x00029360) main_skin_pane

0xa267,	// (0x00028e98) main_smil2_pane

0xa72f,	// (0x00029360) main_smil_pane

0xa72f,	// (0x00029360) main_video_pane

0xa72f,	// (0x00029360) main_video_tele_pane

0xa4c2,	// (0x000290f3) main_viewer_pane_ParamLimits

0xa4c2,	// (0x000290f3) main_viewer_pane

0xa72f,	// (0x00029360) main_vorec_pane

0x1291,	// (0x0001fec2) popup_blid_sat_info_window_ParamLimits

0x1291,	// (0x0001fec2) popup_blid_sat_info_window

0x12b7,	// (0x0001fee8) popup_dyc_status_message_window_ParamLimits

0x12b7,	// (0x0001fee8) popup_dyc_status_message_window

0x12c7,	// (0x0001fef8) popup_grid_large_graphic_window_ParamLimits

0x12c7,	// (0x0001fef8) popup_grid_large_graphic_window

0x135c,	// (0x0001ff8d) popup_loc_request_window_ParamLimits

0x135c,	// (0x0001ff8d) popup_loc_request_window

0x13b5,	// (0x0001ffe6) popup_wml_address_window_ParamLimits

0x13b5,	// (0x0001ffe6) popup_wml_address_window

0x5368,	// (0x00023f99) call_muted_g1

0x5027,	// (0x00023c58) popup_call_audio_conf_window_ParamLimits

0x5027,	// (0x00023c58) popup_call_audio_conf_window

0x5378,	// (0x00023fa9) popup_call_audio_first_window_ParamLimits

0x5378,	// (0x00023fa9) popup_call_audio_first_window

0x53b8,	// (0x00023fe9) popup_call_audio_in_window_ParamLimits

0x53b8,	// (0x00023fe9) popup_call_audio_in_window

0x53dc,	// (0x0002400d) popup_call_audio_out_window_ParamLimits

0x53dc,	// (0x0002400d) popup_call_audio_out_window

0x53fe,	// (0x0002402f) popup_call_audio_second_window_ParamLimits

0x53fe,	// (0x0002402f) popup_call_audio_second_window

0x542e,	// (0x0002405f) popup_call_audio_wait_window_ParamLimits

0x542e,	// (0x0002405f) popup_call_audio_wait_window

0x544f,	// (0x00024080) popup_number_entry_window_ParamLimits

0x544f,	// (0x00024080) popup_number_entry_window

0x9e1f,	// (0x00028a50) bg_popup_call_pane_cp05_ParamLimits

0x9e1f,	// (0x00028a50) bg_popup_call_pane_cp05

0x9e3f,	// (0x00028a70) popup_number_entry_window_t1

0x9e52,	// (0x00028a83) popup_number_entry_window_t2

0x9e64,	// (0x00028a95) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0002dcf7) popup_number_entry_window_t

0x9eab,	// (0x00028adc) text_title_cp2

0x9ebe,	// (0x00028aef) bg_popup_call_pane_cp_ParamLimits

0x9ebe,	// (0x00028aef) bg_popup_call_pane_cp

0x9ecc,	// (0x00028afd) call_thumbnail_pane

0x9ed4,	// (0x00028b05) popup_call_audio_in_window_g1_ParamLimits

0x9ed4,	// (0x00028b05) popup_call_audio_in_window_g1

0x9ee0,	// (0x00028b11) popup_call_audio_in_window_g2_ParamLimits

0x9ee0,	// (0x00028b11) popup_call_audio_in_window_g2

0x9eec,	// (0x00028b1d) popup_call_audio_in_window_g3_ParamLimits

0x9eec,	// (0x00028b1d) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0002dd00) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0002dd00) popup_call_audio_in_window_g

0x9ef8,	// (0x00028b29) popup_call_audio_in_window_t1_ParamLimits

0x9ef8,	// (0x00028b29) popup_call_audio_in_window_t1

0x9f14,	// (0x00028b45) popup_call_audio_in_window_t2_ParamLimits

0x9f14,	// (0x00028b45) popup_call_audio_in_window_t2

0x9f30,	// (0x00028b61) popup_call_audio_in_window_t3_ParamLimits

0x9f30,	// (0x00028b61) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0002dd07) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0002dd07) popup_call_audio_in_window_t

0x9ebe,	// (0x00028aef) bg_popup_call_pane_cp01_ParamLimits

0x9ebe,	// (0x00028aef) bg_popup_call_pane_cp01

0x9ecc,	// (0x00028afd) call_thumbnail_pane_cp02

0x9f43,	// (0x00028b74) call_type_pane_cp022

0x9f4b,	// (0x00028b7c) popup_call_audio_out_window_g1_ParamLimits

0x9f4b,	// (0x00028b7c) popup_call_audio_out_window_g1

0x9f5d,	// (0x00028b8e) popup_call_audio_out_window_g2_ParamLimits

0x9f5d,	// (0x00028b8e) popup_call_audio_out_window_g2

0x9f69,	// (0x00028b9a) popup_call_audio_out_window_g3_ParamLimits

0x9f69,	// (0x00028b9a) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0002dd0e) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0002dd0e) popup_call_audio_out_window_g

0x9f7b,	// (0x00028bac) popup_call_audio_out_window_t1_ParamLimits

0x9f7b,	// (0x00028bac) popup_call_audio_out_window_t1

0x9f93,	// (0x00028bc4) popup_call_audio_out_window_t2_ParamLimits

0x9f93,	// (0x00028bc4) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0002dd15) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0002dd15) popup_call_audio_out_window_t

0x9fa8,	// (0x00028bd9) bg_popup_call_pane_ParamLimits

0x9fa8,	// (0x00028bd9) bg_popup_call_pane

0x25f5,	// (0x00021226) call_thumbnail_pane_cp_ParamLimits

0x25f5,	// (0x00021226) call_thumbnail_pane_cp

0xa02c,	// (0x00028c5d) call_type_pane_cp01_ParamLimits

0xa02c,	// (0x00028c5d) call_type_pane_cp01

0xa070,	// (0x00028ca1) popup_call_audio_first_window_g1_ParamLimits

0xa070,	// (0x00028ca1) popup_call_audio_first_window_g1

0xa0bc,	// (0x00028ced) popup_call_audio_first_window_g2_ParamLimits

0xa0bc,	// (0x00028ced) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0002dd1a) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0002dd1a) popup_call_audio_first_window_g

0xa100,	// (0x00028d31) popup_call_audio_first_window_t1_ParamLimits

0xa100,	// (0x00028d31) popup_call_audio_first_window_t1

0xa1ac,	// (0x00028ddd) popup_call_audio_first_window_t4_ParamLimits

0xa1ac,	// (0x00028ddd) popup_call_audio_first_window_t4

0xa238,	// (0x00028e69) popup_call_audio_first_window_t5_ParamLimits

0xa238,	// (0x00028e69) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0002dd1f) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0002dd1f) popup_call_audio_first_window_t

0xa267,	// (0x00028e98) bg_popup_call_pane_cp02

0xa271,	// (0x00028ea2) call_type_pane_cp023

0xa279,	// (0x00028eaa) popup_call_audio_wait_window_g1

0xa281,	// (0x00028eb2) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002dd26) popup_call_audio_wait_window_g

0xa289,	// (0x00028eba) popup_call_audio_wait_window_t3

0xa297,	// (0x00028ec8) bg_popup_call_pane_cp03_ParamLimits

0xa297,	// (0x00028ec8) bg_popup_call_pane_cp03

0xa2f7,	// (0x00028f28) call_thumbnail_pane_cp011_ParamLimits

0xa2f7,	// (0x00028f28) call_thumbnail_pane_cp011

0xa303,	// (0x00028f34) call_type_pane_cp034_ParamLimits

0xa303,	// (0x00028f34) call_type_pane_cp034

0xa33f,	// (0x00028f70) popup_call_audio_second_window_g1_ParamLimits

0xa33f,	// (0x00028f70) popup_call_audio_second_window_g1

0xa37b,	// (0x00028fac) popup_call_audio_second_window_g2_ParamLimits

0xa37b,	// (0x00028fac) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0002dd2b) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0002dd2b) popup_call_audio_second_window_g

0xa3b7,	// (0x00028fe8) popup_call_audio_second_window_t1_ParamLimits

0xa3b7,	// (0x00028fe8) popup_call_audio_second_window_t1

0xa438,	// (0x00029069) popup_call_audio_second_window_t2_ParamLimits

0xa438,	// (0x00029069) popup_call_audio_second_window_t2

0xa46e,	// (0x0002909f) popup_call_audio_second_window_t3_ParamLimits

0xa46e,	// (0x0002909f) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0002dd30) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0002dd30) popup_call_audio_second_window_t

0xa267,	// (0x00028e98) bg_popup_call_pane_cp04

0xa4a4,	// (0x000290d5) list_conf_pane

0xa4ac,	// (0x000290dd) popup_call_audio_conf_window_t1

0xa4ba,	// (0x000290eb) call_thumbnail_pane_g1

0xa4c2,	// (0x000290f3) bg_pinb_pane_ParamLimits

0xa4c2,	// (0x000290f3) bg_pinb_pane

0xa4d0,	// (0x00029101) find_pinb_pane

0xa4d9,	// (0x0002910a) listscroll_pinb_pane_ParamLimits

0xa4d9,	// (0x0002910a) listscroll_pinb_pane

0xa4e8,	// (0x00029119) pinb_bg_pane_g1

0x2619,	// (0x0002124a) pinb_bg_pane_g2

0x2625,	// (0x00021256) pinb_bg_pane_g3

0x2631,	// (0x00021262) pinb_bg_pane_g4

0x263d,	// (0x0002126e) pinb_bg_pane_g5

0x2649,	// (0x0002127a) pinb_bg_pane_g6

0x2654,	// (0x00021285) pinb_bg_pane_g7

0x265f,	// (0x00021290) pinb_bg_pane_g8

0x266a,	// (0x0002129b) pinb_bg_pane_g9

0x2674,	// (0x000212a5) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0002dd37) pinb_bg_pane_g

0x2691,	// (0x000212c2) grid_pinb_pane

0x269c,	// (0x000212cd) list_pinb_pane

0x26a7,	// (0x000212d8) scroll_pane_cp01_ParamLimits

0x26a7,	// (0x000212d8) scroll_pane_cp01

0xa4f2,	// (0x00029123) find_pinb_pane_g1_ParamLimits

0xa4f2,	// (0x00029123) find_pinb_pane_g1

0xa50a,	// (0x0002913b) find_pinb_pane_t1

0xa51c,	// (0x0002914d) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0002dd51) find_pinb_pane_t

0xa531,	// (0x00029162) input_focus_pane_cp01_ParamLimits

0xa531,	// (0x00029162) input_focus_pane_cp01

0x26b9,	// (0x000212ea) cell_pinb_pane_ParamLimits

0x26b9,	// (0x000212ea) cell_pinb_pane

0x26de,	// (0x0002130f) cell_pinb_pane_g1_ParamLimits

0x26de,	// (0x0002130f) cell_pinb_pane_g1

0x26f3,	// (0x00021324) cell_pinb_pane_g2_ParamLimits

0x26f3,	// (0x00021324) cell_pinb_pane_g2

0xa53d,	// (0x0002916e) cell_pinb_pane_g3_ParamLimits

0xa53d,	// (0x0002916e) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0002dd56) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0002dd56) cell_pinb_pane_g

0xa267,	// (0x00028e98) grid_highlight_pane_cp01

0x26ff,	// (0x00021330) list_pinb_item_pane_ParamLimits

0x26ff,	// (0x00021330) list_pinb_item_pane

0xa267,	// (0x00028e98) list_highlight_pane_cp02

0x271d,	// (0x0002134e) list_pinb_item_pane_g1_ParamLimits

0x271d,	// (0x0002134e) list_pinb_item_pane_g1

0x272a,	// (0x0002135b) list_pinb_item_pane_g2_ParamLimits

0x272a,	// (0x0002135b) list_pinb_item_pane_g2

0x2736,	// (0x00021367) list_pinb_item_pane_g3_ParamLimits

0x2736,	// (0x00021367) list_pinb_item_pane_g3

0x2747,	// (0x00021378) list_pinb_item_pane_g4_ParamLimits

0x2747,	// (0x00021378) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0002dd5d) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0002dd5d) list_pinb_item_pane_g

0x2753,	// (0x00021384) list_pinb_item_pane_t1_ParamLimits

0x2753,	// (0x00021384) list_pinb_item_pane_t1

0x0e01,	// (0x0001fa32) calc_display_pane

0x0e1f,	// (0x0001fa50) calc_paper_pane

0x0e3b,	// (0x0001fa6c) grid_calc_pane

0xa267,	// (0x00028e98) bg_list_pane_cp01

0x276a,	// (0x0002139b) clock_g1

0x2772,	// (0x000213a3) clock_g2

0x0001,

0xf135,	// (0x0002dd66) clock_g

0x277c,	// (0x000213ad) clock_t1_ParamLimits

0x277c,	// (0x000213ad) clock_t1

0x2791,	// (0x000213c2) clock_t2_ParamLimits

0x2791,	// (0x000213c2) clock_t2

0x27a3,	// (0x000213d4) clock_t3_ParamLimits

0x27a3,	// (0x000213d4) clock_t3

0x27b5,	// (0x000213e6) clock_t4_ParamLimits

0x27b5,	// (0x000213e6) clock_t4

0x27c7,	// (0x000213f8) clock_t5_ParamLimits

0x27c7,	// (0x000213f8) clock_t5

0x27dc,	// (0x0002140d) clock_t6_ParamLimits

0x27dc,	// (0x0002140d) clock_t6

0x27ee,	// (0x0002141f) clock_t7_ParamLimits

0x27ee,	// (0x0002141f) clock_t7

0x2800,	// (0x00021431) clock_t8_ParamLimits

0x2800,	// (0x00021431) clock_t8

0x2816,	// (0x00021447) clock_t9_ParamLimits

0x2816,	// (0x00021447) clock_t9

0x0008,

0xf13a,	// (0x0002dd6b) clock_t_ParamLimits

0xf13a,	// (0x0002dd6b) clock_t

0xa549,	// (0x0002917a) popup_clock_analogue_window_cp02

0xa549,	// (0x0002917a) popup_clock_digital_window_cp01

0xa551,	// (0x00029182) listscroll_help_pane

0xa267,	// (0x00028e98) phob_pre_status_pane

0xa55b,	// (0x0002918c) grid_qdial_pane

0xa4c2,	// (0x000290f3) listscroll_mce_pane

0xa4c2,	// (0x000290f3) bg_notes_pane

0xa565,	// (0x00029196) list_notes_pane

0x282c,	// (0x0002145d) scroll_pane_cp06

0xa573,	// (0x000291a4) bg_calc_paper_pane

0x0e67,	// (0x0001fa98) list_calc_pane

0xa587,	// (0x000291b8) bg_calc_display_pane

0x0e81,	// (0x0001fab2) calc_display_pane_t1

0x0e96,	// (0x0001fac7) calc_display_pane_t2

0x0eab,	// (0x0001fadc) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0002dd7e) calc_display_pane_t

0x0ebd,	// (0x0001faee) cell_calc_pane_ParamLimits

0x0ebd,	// (0x0001faee) cell_calc_pane

0xa593,	// (0x000291c4) bg_calc_paper_pane_g1

0xa59f,	// (0x000291d0) bg_calc_paper_pane_g2

0xa5ab,	// (0x000291dc) bg_calc_paper_pane_g3

0xa5b7,	// (0x000291e8) bg_calc_paper_pane_g4

0xa5c3,	// (0x000291f4) bg_calc_paper_pane_g5

0x283b,	// (0x0002146c) bg_calc_paper_pane_g6

0x284c,	// (0x0002147d) bg_calc_paper_pane_g7

0x285d,	// (0x0002148e) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0002dd85) bg_calc_paper_pane_g

0x286e,	// (0x0002149f) calc_bg_paper_pane_g9

0x287f,	// (0x000214b0) list_calc_item_pane_ParamLimits

0x287f,	// (0x000214b0) list_calc_item_pane

0xa5cf,	// (0x00029200) list_calc_item_pane_g1

0x0eec,	// (0x0001fb1d) list_calc_item_pane_t1_ParamLimits

0x0eec,	// (0x0001fb1d) list_calc_item_pane_t1

0x0efe,	// (0x0001fb2f) list_calc_item_pane_t2_ParamLimits

0x0efe,	// (0x0001fb2f) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0002dd96) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0002dd96) list_calc_item_pane_t

0xa5dc,	// (0x0002920d) cell_calc_pane_g1

0xa5e6,	// (0x00029217) grid_highlight_pane_cp02

0xd38b,	// (0x0002bfbc) bg_calc_display_pane_g1

0x0f2e,	// (0x0001fb5f) bg_calc_display_pane_g2

0xd394,	// (0x0002bfc5) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0002dda0) bg_calc_display_pane_g

0x0f38,	// (0x0001fb69) cell_qdial_pane_ParamLimits

0x0f38,	// (0x0001fb69) cell_qdial_pane

0x28a0,	// (0x000214d1) cell_qdial_pane_g1_ParamLimits

0x28a0,	// (0x000214d1) cell_qdial_pane_g1

0x28ad,	// (0x000214de) cell_qdial_pane_g2_ParamLimits

0x28ad,	// (0x000214de) cell_qdial_pane_g2

0xa608,	// (0x00029239) cell_qdial_pane_g3_ParamLimits

0xa608,	// (0x00029239) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0002dda7) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0002dda7) cell_qdial_pane_g

0x28cb,	// (0x000214fc) cell_qdial_pane_t1_ParamLimits

0x28cb,	// (0x000214fc) cell_qdial_pane_t1

0x28e3,	// (0x00021514) cell_qdial_pane_t2_ParamLimits

0x28e3,	// (0x00021514) cell_qdial_pane_t2

0x28f6,	// (0x00021527) cell_qdial_pane_t3_ParamLimits

0x28f6,	// (0x00021527) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0002ddb0) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0002ddb0) cell_qdial_pane_t

0xa267,	// (0x00028e98) grid_highlight_pane_cp04

0xa614,	// (0x00029245) thumbnail_qdial_pane_ParamLimits

0xa614,	// (0x00029245) thumbnail_qdial_pane

0xa670,	// (0x000292a1) list_help_pane

0xa679,	// (0x000292aa) scroll_pane_cp02

0x2909,	// (0x0002153a) help_list_pane_t1_ParamLimits

0x2909,	// (0x0002153a) help_list_pane_t1

0x0f4e,	// (0x0001fb7f) bg_notes_pane_g2

0x0f56,	// (0x0001fb87) bg_notes_pane_g3

0x0f5e,	// (0x0001fb8f) notes_bg_pane_g1

0x0f66,	// (0x0001fb97) notes_bg_pane_g4

0x0f6e,	// (0x0001fb9f) notes_bg_pane_g5

0x0f76,	// (0x0001fba7) notes_bg_pane_g6

0x0f7e,	// (0x0001fbaf) notes_bg_pane_g7

0x0f86,	// (0x0001fbb7) notes_bg_pane_g8

0x0f8e,	// (0x0001fbbf) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0002ddce) notes_bg_pane_g

0x2930,	// (0x00021561) list_notes_text_pane_ParamLimits

0x2930,	// (0x00021561) list_notes_text_pane

0xa682,	// (0x000292b3) list_notes_text_pane_g1

0x2958,	// (0x00021589) list_notes_text_pane_t1

0x2966,	// (0x00021597) listscroll_cale_week_pane

0x2992,	// (0x000215c3) bg_cale_heading_pane

0x29bb,	// (0x000215ec) bg_cale_pane_cp01

0x29dd,	// (0x0002160e) cale_week_corner_pane

0x29fc,	// (0x0002162d) cale_week_day_heading_pane

0x2a2a,	// (0x0002165b) cale_week_scroll_pane_g1

0x2a4e,	// (0x0002167f) cale_week_scroll_pane_g2

0x2a66,	// (0x00021697) cale_week_scroll_pane_g3

0x2a7e,	// (0x000216af) cale_week_scroll_pane_g4

0x2a96,	// (0x000216c7) cale_week_scroll_pane_g5

0x2aae,	// (0x000216df) cale_week_scroll_pane_g6

0x2ace,	// (0x000216ff) cale_week_scroll_pane_g7

0x2aee,	// (0x0002171f) cale_week_scroll_pane_g8

0x2b0e,	// (0x0002173f) cale_week_scroll_pane_g9

0x2b2b,	// (0x0002175c) cale_week_scroll_pane_g10

0x2b48,	// (0x00021779) cale_week_scroll_pane_g11

0x2b67,	// (0x00021798) cale_week_scroll_pane_g12

0x2b8c,	// (0x000217bd) cale_week_scroll_pane_g13

0x2bb5,	// (0x000217e6) cale_week_scroll_pane_g14

0x2bde,	// (0x0002180f) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0002dddd) cale_week_scroll_pane_g

0x2c27,	// (0x00021858) cale_week_time_pane

0x2c47,	// (0x00021878) grid_cale_week_pane

0xa6b7,	// (0x000292e8) scroll_pane_cp08

0x2c78,	// (0x000218a9) cell_cale_week_pane_ParamLimits

0x2c78,	// (0x000218a9) cell_cale_week_pane

0x2d08,	// (0x00021939) cale_week_day_heading_pane_t1

0x2d30,	// (0x00021961) cale_week_day_heading_pane_t2

0x2d5d,	// (0x0002198e) cale_week_day_heading_pane_t3

0x2d8a,	// (0x000219bb) cale_week_day_heading_pane_t4

0x2db7,	// (0x000219e8) cale_week_day_heading_pane_t5

0x2de4,	// (0x00021a15) cale_week_day_heading_pane_t6

0x2e11,	// (0x00021a42) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0002ddfe) cale_week_day_heading_pane_t

0xa6d4,	// (0x00029305) bg_cale_side_pane

0x0f96,	// (0x0001fbc7) cale_week_time_pane_t1

0x0fba,	// (0x0001fbeb) cale_week_time_pane_t2

0x0fde,	// (0x0001fc0f) cale_week_time_pane_t3

0x1002,	// (0x0001fc33) cale_week_time_pane_t4

0x1026,	// (0x0001fc57) cale_week_time_pane_t5

0x104c,	// (0x0001fc7d) cale_week_time_pane_t6

0x1074,	// (0x0001fca5) cale_week_time_pane_t7

0x10a0,	// (0x0001fcd1) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0002de0d) cale_week_time_pane_t

0x2e39,	// (0x00021a6a) cell_cale_week_pane_g2

0x2e5d,	// (0x00021a8e) cell_cale_week_pane_g3_ParamLimits

0x2e5d,	// (0x00021a8e) cell_cale_week_pane_g3

0xa6e2,	// (0x00029313) grid_highlight_pane_cp07

0xa6ea,	// (0x0002931b) listscroll_gms_pane

0xa6f4,	// (0x00029325) grid_gms_pane

0xa6fd,	// (0x0002932e) listscroll_gms_pane_g1

0xa705,	// (0x00029336) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0002de1e) listscroll_gms_pane_g

0x2e75,	// (0x00021aa6) scroll_pane_cp010

0x2e80,	// (0x00021ab1) cell_gms_pane_ParamLimits

0x2e80,	// (0x00021ab1) cell_gms_pane

0x2e93,	// (0x00021ac4) cell_gms_pane_g1

0xa70d,	// (0x0002933e) cell_gms_pane_g2

0xa715,	// (0x00029346) cell_gms_pane_g3

0xa71e,	// (0x0002934f) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0002de23) cell_gms_pane_g

0xa727,	// (0x00029358) grid_highlight_pane_cp09

0x5310,	// (0x00023f41) phob_pre_status_pane_g1

0x5318,	// (0x00023f49) phob_pre_status_pane_g2

0x5320,	// (0x00023f51) phob_pre_status_pane_g3

0x5328,	// (0x00023f59) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0002e20e) phob_pre_status_pane_g

0x5338,	// (0x00023f69) phob_pre_status_pane_t1

0x5348,	// (0x00023f79) phob_pre_status_pane_t2

0x5358,	// (0x00023f89) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0002e219) phob_pre_status_pane_t

0xa72f,	// (0x00029360) bg_list_pane_cp05

0x2ea3,	// (0x00021ad4) grid_vorec_pane

0x2ead,	// (0x00021ade) vorec_t1

0x2ebb,	// (0x00021aec) vorec_t2

0x2ec9,	// (0x00021afa) vorec_t3

0x2ed7,	// (0x00021b08) vorec_t4

0x2576,	// (0x000211a7) vorec_t5

0x2584,	// (0x000211b5) vorec_t6

0x0004,

0xf1fb,	// (0x0002de2c) vorec_t

0x2592,	// (0x000211c3) wait_bar_pane_cp01

0x2ef3,	// (0x00021b24) cell_vorec_pane_ParamLimits

0x2ef3,	// (0x00021b24) cell_vorec_pane

0x10d0,	// (0x0001fd01) cell_vorec_pane_g1

0xa267,	// (0x00028e98) grid_highlight_pane_cp05

0x2f16,	// (0x00021b47) cams_zoom_pane

0x2f22,	// (0x00021b53) image_vga_pane

0x2f31,	// (0x00021b62) main_camera_pane_g1

0x2f3f,	// (0x00021b70) main_camera_pane_g2

0x2f4b,	// (0x00021b7c) main_camera_pane_g3

0x2f59,	// (0x00021b8a) main_camera_pane_g4

0x2f67,	// (0x00021b98) main_camera_pane_g5

0x2f75,	// (0x00021ba6) main_camera_pane_g6

0x2f83,	// (0x00021bb4) main_camera_pane_g7

0x0007,

0xf206,	// (0x0002de37) main_camera_pane_g

0x2f91,	// (0x00021bc2) main_camera_pane_t1

0x2fa3,	// (0x00021bd4) main_camera_pane_t2

0x0001,

0xf217,	// (0x0002de48) main_camera_pane_t

0x2fc6,	// (0x00021bf7) cams_zoom_pane_cp_ParamLimits

0x2fc6,	// (0x00021bf7) cams_zoom_pane_cp

0x2fea,	// (0x00021c1b) image_cif_pane_ParamLimits

0x2fea,	// (0x00021c1b) image_cif_pane

0x3008,	// (0x00021c39) image_subqcif_pane

0x3012,	// (0x00021c43) main_video_pane_g1_ParamLimits

0x3012,	// (0x00021c43) main_video_pane_g1

0x3032,	// (0x00021c63) main_video_pane_g2_ParamLimits

0x3032,	// (0x00021c63) main_video_pane_g2

0x3062,	// (0x00021c93) main_video_pane_g3_ParamLimits

0x3062,	// (0x00021c93) main_video_pane_g3

0x308b,	// (0x00021cbc) main_video_pane_g4_ParamLimits

0x308b,	// (0x00021cbc) main_video_pane_g4

0x30b4,	// (0x00021ce5) main_video_pane_g5_ParamLimits

0x30b4,	// (0x00021ce5) main_video_pane_g5

0xa743,	// (0x00029374) main_video_pane_g6_ParamLimits

0xa743,	// (0x00029374) main_video_pane_g6

0x0006,

0xf21c,	// (0x0002de4d) main_video_pane_g_ParamLimits

0xf21c,	// (0x0002de4d) main_video_pane_g

0x30d6,	// (0x00021d07) main_video_pane_t1_ParamLimits

0x30d6,	// (0x00021d07) main_video_pane_t1

0xa75d,	// (0x0002938e) cams_zoom_pane_g1

0xa766,	// (0x00029397) cams_zoom_pane_g2

0xa76f,	// (0x000293a0) cams_zoom_pane_g3

0xa778,	// (0x000293a9) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0002de5c) cams_zoom_pane_g

0x3120,	// (0x00021d51) grid_cams_pane

0x312e,	// (0x00021d5f) linegrid_cams_pane

0x313a,	// (0x00021d6b) cell_cams_pane_ParamLimits

0x313a,	// (0x00021d6b) cell_cams_pane

0xa781,	// (0x000293b2) cams_burst_image_pane

0xa789,	// (0x000293ba) cell_cams_pane_g1

0xa267,	// (0x00028e98) grid_highlight_pane_cp03

0xa5dc,	// (0x0002920d) mp_bg_pane_g1

0xa267,	// (0x00028e98) bg_list_pane_cp03

0xc51a,	// (0x0002b14b) bg_mp_pane

0xc522,	// (0x0002b153) grid_mp_pane

0xc52a,	// (0x0002b15b) media_player_g1

0xc534,	// (0x0002b165) media_player_t1

0xc542,	// (0x0002b173) media_player_t2

0xc550,	// (0x0002b181) media_player_t3

0xc55e,	// (0x0002b18f) media_player_t4

0xc56c,	// (0x0002b19d) media_player_t5

0xc57a,	// (0x0002b1ab) media_player_t6

0xc588,	// (0x0002b1b9) media_player_t7

0x0006,

0xf5c7,	// (0x0002e1f8) media_player_t

0xc596,	// (0x0002b1c7) wait_bar_pane_cp02

0xf5ac,	// (0x0002e1dd) main_usb_pane_t

0x5307,	// (0x00023f38) cell_mp_pane

0xa5dc,	// (0x0002920d) cell_mp_pane_g1

0xa267,	// (0x00028e98) grid_highlight_pane_cp06

0xa791,	// (0x000293c2) grid_skin_colour_pane

0xa799,	// (0x000293ca) list_highlight_pane_cp03

0x3266,	// (0x00021e97) skin_g1

0xa7a1,	// (0x000293d2) skin_t1

0xa7b0,	// (0x000293e1) skin_t2

0x0001,

0xf260,	// (0x0002de91) skin_t

0x3270,	// (0x00021ea1) cell_skin_colour_pane_ParamLimits

0x3270,	// (0x00021ea1) cell_skin_colour_pane

0xa7be,	// (0x000293ef) cell_skin_colour_pane_g1

0x32f0,	// (0x00021f21) call_video_g1_ParamLimits

0x32f0,	// (0x00021f21) call_video_g1

0x3300,	// (0x00021f31) call_video_g2_ParamLimits

0x3300,	// (0x00021f31) call_video_g2

0x0001,

0xf265,	// (0x0002de96) call_video_g_ParamLimits

0xf265,	// (0x0002de96) call_video_g

0x3350,	// (0x00021f81) call_video_uplink_pane_cp1_ParamLimits

0x3350,	// (0x00021f81) call_video_uplink_pane_cp1

0xa7d0,	// (0x00029401) call_video_uplink_pane_cp2

0x341e,	// (0x0002204f) video_down_crop_pane_ParamLimits

0x341e,	// (0x0002204f) video_down_crop_pane

0x3510,	// (0x00022141) video_down_pane_ParamLimits

0x3510,	// (0x00022141) video_down_pane

0xa7d8,	// (0x00029409) video_down_subqcif_pane_ParamLimits

0xa7d8,	// (0x00029409) video_down_subqcif_pane

0xa7f2,	// (0x00029423) video_down_subqcif_pane_cp_ParamLimits

0xa7f2,	// (0x00029423) video_down_subqcif_pane_cp

0xa81a,	// (0x0002944b) im_reading_pane_ParamLimits

0xa81a,	// (0x0002944b) im_reading_pane

0x362d,	// (0x0002225e) im_writing_pane_ParamLimits

0x362d,	// (0x0002225e) im_writing_pane

0x364b,	// (0x0002227c) im_reading_pane_t1

0xa834,	// (0x00029465) list_im_pane

0xa845,	// (0x00029476) scroll_pane_cp07

0x368d,	// (0x000222be) im_writing_pane_t1_ParamLimits

0x368d,	// (0x000222be) im_writing_pane_t1

0xa85e,	// (0x0002948f) im_writing_pane_t2_ParamLimits

0xa85e,	// (0x0002948f) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0002dea0) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0002dea0) im_writing_pane_t

0xa267,	// (0x00028e98) input_focus_pane_cp04

0xa267,	// (0x00028e98) input_focus_pane_cp05

0x369f,	// (0x000222d0) list_im_single_pane_ParamLimits

0x369f,	// (0x000222d0) list_im_single_pane

0x36b8,	// (0x000222e9) list_single_im_pane_t1

0x52cb,	// (0x00023efc) blid_accuracy_pane

0x52d3,	// (0x00023f04) blid_compass_pane

0x52dd,	// (0x00023f0e) main_location_t1

0x52eb,	// (0x00023f1c) main_location_t2

0x52f9,	// (0x00023f2a) main_location_t3

0x0002,

0xf5d6,	// (0x0002e207) main_location_t

0xa267,	// (0x00028e98) aid_levels_location

0xa5dc,	// (0x0002920d) blid_accuracy_pane_g1

0xa5dc,	// (0x0002920d) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0002df02) blid_accuracy_pane_g

0xa8d2,	// (0x00029503) wml_content_pane

0xa910,	// (0x00029541) wml_button_pane_ParamLimits

0xa910,	// (0x00029541) wml_button_pane

0x36c7,	// (0x000222f8) wml_list_single_large_pane_ParamLimits

0x36c7,	// (0x000222f8) wml_list_single_large_pane

0x36e9,	// (0x0002231a) wml_list_single_medium_pane_ParamLimits

0x36e9,	// (0x0002231a) wml_list_single_medium_pane

0x370c,	// (0x0002233d) wml_list_single_small_pane_ParamLimits

0x370c,	// (0x0002233d) wml_list_single_small_pane

0xa924,	// (0x00029555) wml_selection_box_pane_ParamLimits

0xa924,	// (0x00029555) wml_selection_box_pane

0xa937,	// (0x00029568) wml_list_single_pane_t1

0xa946,	// (0x00029577) wml_list_single_medium_pane_t1

0xa955,	// (0x00029586) wml_list_single_large_pane_t1

0xa964,	// (0x00029595) input_focus_pane_cp02_ParamLimits

0xa964,	// (0x00029595) input_focus_pane_cp02

0xa977,	// (0x000295a8) wml_selection_box_pane_g1

0xa980,	// (0x000295b1) wml_selection_box_pane_t1_ParamLimits

0xa980,	// (0x000295b1) wml_selection_box_pane_t1

0xa4c2,	// (0x000290f3) bg_wml_button_pane_ParamLimits

0xa4c2,	// (0x000290f3) bg_wml_button_pane

0xa998,	// (0x000295c9) wml_button_pane_g1

0xa9a0,	// (0x000295d1) wml_button_pane_t1

0xa998,	// (0x000295c9) wml_button_bg_pane_g1

0xa9b0,	// (0x000295e1) wml_button_bg_pane_g2

0xa9b8,	// (0x000295e9) wml_button_bg_pane_g3

0xa9c0,	// (0x000295f1) wml_button_bg_pane_g4

0xa9c8,	// (0x000295f9) wml_button_bg_pane_g5

0xa9d0,	// (0x00029601) wml_button_bg_pane_g6

0xa9d8,	// (0x00029609) wml_button_bg_pane_g7

0xa9e0,	// (0x00029611) wml_button_bg_pane_g8

0xa9e8,	// (0x00029619) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0002dea5) wml_button_bg_pane_g

0x3734,	// (0x00022365) bg_list_pane_cp02

0xa9f0,	// (0x00029621) mce_header_pane_ParamLimits

0xa9f0,	// (0x00029621) mce_header_pane

0xaa06,	// (0x00029637) mce_icon_pane

0xaa06,	// (0x00029637) mce_image_pane

0xaa0f,	// (0x00029640) mce_text_pane_ParamLimits

0xaa0f,	// (0x00029640) mce_text_pane

0x373e,	// (0x0002236f) scroll_pane_cp03

0xa908,	// (0x00029539) scroll_pane_cp04

0xaa22,	// (0x00029653) scroll_pane_cp05_ParamLimits

0xaa22,	// (0x00029653) scroll_pane_cp05

0x3748,	// (0x00022379) mce_header_field_pane_ParamLimits

0x3748,	// (0x00022379) mce_header_field_pane

0x376a,	// (0x0002239b) mce_header_field_pane_2_ParamLimits

0x376a,	// (0x0002239b) mce_header_field_pane_2

0x3780,	// (0x000223b1) mce_header_field_pane_3

0x3788,	// (0x000223b9) list_single_mce_message_pane_ParamLimits

0x3788,	// (0x000223b9) list_single_mce_message_pane

0x37a7,	// (0x000223d8) list_single_mce_smart_pane_ParamLimits

0x37a7,	// (0x000223d8) list_single_mce_smart_pane

0xaa2e,	// (0x0002965f) input_focus_pane_cp03

0xaa37,	// (0x00029668) list_header_data_pane

0x37d1,	// (0x00022402) mce_header_field_pane_t1

0x37e1,	// (0x00022412) list_single_mce_header_pane_ParamLimits

0x37e1,	// (0x00022412) list_single_mce_header_pane

0xaa3f,	// (0x00029670) list_single_mce_header_pane_t1

0xaa4e,	// (0x0002967f) list_single_mce_message_pane_g1

0xaa56,	// (0x00029687) list_single_mce_message_pane_t1

0x3825,	// (0x00022456) bg_cale_heading_pane_cp01_ParamLimits

0x3825,	// (0x00022456) bg_cale_heading_pane_cp01

0xaa64,	// (0x00029695) bg_cale_pane_cp02_ParamLimits

0xaa64,	// (0x00029695) bg_cale_pane_cp02

0x3877,	// (0x000224a8) cale_month_corner_pane

0x3896,	// (0x000224c7) cale_month_day_heading_pane_ParamLimits

0x3896,	// (0x000224c7) cale_month_day_heading_pane

0x38f8,	// (0x00022529) cale_month_pane_g1_ParamLimits

0x38f8,	// (0x00022529) cale_month_pane_g1

0x393f,	// (0x00022570) cale_month_pane_g2_ParamLimits

0x393f,	// (0x00022570) cale_month_pane_g2

0x3977,	// (0x000225a8) cale_month_pane_g3_ParamLimits

0x3977,	// (0x000225a8) cale_month_pane_g3

0x39cb,	// (0x000225fc) cale_month_pane_g4_ParamLimits

0x39cb,	// (0x000225fc) cale_month_pane_g4

0x3a1f,	// (0x00022650) cale_month_pane_g5_ParamLimits

0x3a1f,	// (0x00022650) cale_month_pane_g5

0x3a73,	// (0x000226a4) cale_month_pane_g6_ParamLimits

0x3a73,	// (0x000226a4) cale_month_pane_g6

0x3ad7,	// (0x00022708) cale_month_pane_g7_ParamLimits

0x3ad7,	// (0x00022708) cale_month_pane_g7

0x3b3b,	// (0x0002276c) cale_month_pane_g8_ParamLimits

0x3b3b,	// (0x0002276c) cale_month_pane_g8

0x3b9f,	// (0x000227d0) cale_month_pane_g9_ParamLimits

0x3b9f,	// (0x000227d0) cale_month_pane_g9

0x3bf9,	// (0x0002282a) cale_month_pane_g10_ParamLimits

0x3bf9,	// (0x0002282a) cale_month_pane_g10

0x3c4b,	// (0x0002287c) cale_month_pane_g11_ParamLimits

0x3c4b,	// (0x0002287c) cale_month_pane_g11

0x3c99,	// (0x000228ca) cale_month_pane_g12_ParamLimits

0x3c99,	// (0x000228ca) cale_month_pane_g12

0x3ce9,	// (0x0002291a) cale_month_pane_g13_ParamLimits

0x3ce9,	// (0x0002291a) cale_month_pane_g13

0x000c,

0xf287,	// (0x0002deb8) cale_month_pane_g_ParamLimits

0xf287,	// (0x0002deb8) cale_month_pane_g

0x3d39,	// (0x0002296a) cale_month_week_pane

0x3d59,	// (0x0002298a) grid_cale_month_pane_ParamLimits

0x3d59,	// (0x0002298a) grid_cale_month_pane

0x3db2,	// (0x000229e3) cale_month_day_heading_pane_t1

0x3e34,	// (0x00022a65) cale_month_day_heading_pane_t2

0x3ead,	// (0x00022ade) cale_month_day_heading_pane_t3

0x3f26,	// (0x00022b57) cale_month_day_heading_pane_t4

0x3f9f,	// (0x00022bd0) cale_month_day_heading_pane_t5

0x4020,	// (0x00022c51) cale_month_day_heading_pane_t6

0x40a9,	// (0x00022cda) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0002ded3) cale_month_day_heading_pane_t

0xa6d4,	// (0x00029305) bg_cale_side_pane_cp01

0x4132,	// (0x00022d63) cale_month_week_pane_t1

0x414b,	// (0x00022d7c) cale_month_week_pane_t2

0x4164,	// (0x00022d95) cale_month_week_pane_t3

0x417d,	// (0x00022dae) cale_month_week_pane_t4

0x4196,	// (0x00022dc7) cale_month_week_pane_t5

0x41b3,	// (0x00022de4) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0002dee2) cale_month_week_pane_t

0x41d6,	// (0x00022e07) cell_cale_month_pane_ParamLimits

0x41d6,	// (0x00022e07) cell_cale_month_pane

0x10da,	// (0x0001fd0b) cell_cale_month_pane_g1

0x10e6,	// (0x0001fd17) cell_cale_month_pane_t1_ParamLimits

0x10e6,	// (0x0001fd17) cell_cale_month_pane_t1

0xa6e2,	// (0x00029313) grid_highlight_pane_cp08

0xa5dc,	// (0x0002920d) main_smil_g1

0x432e,	// (0x00022f5f) smil_status_pane

0xaaa3,	// (0x000296d4) smil_text_pane

0xc438,	// (0x0002b069) bg_popup_call3_rect_pane_g8

0xc440,	// (0x0002b071) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0002e19b) bg_popup_call3_rect_pane_g

0xc69e,	// (0x0002b2cf) smil_status_volume_pane_g1

0xaaad,	// (0x000296de) smil_status_pane_t1

0x13ee,	// (0x0002001f) volume_smil_pane

0xaac4,	// (0x000296f5) list_smil_text_pane

0x4341,	// (0x00022f72) scroll_pane_cp011

0x434c,	// (0x00022f7d) smil_text_list_pane_t1_ParamLimits

0x434c,	// (0x00022f7d) smil_text_list_pane_t1

0x1112,	// (0x0001fd43) aid_volume_smil_ParamLimits

0x1112,	// (0x0001fd43) aid_volume_smil

0xa5dc,	// (0x0002920d) smil_volume_pane_g1

0xa5dc,	// (0x0002920d) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0002df02) smil_volume_pane_g

0x2966,	// (0x00021597) listscroll_cale_day_pane

0xaace,	// (0x000296ff) bg_cale_pane

0xaae6,	// (0x00029717) list_cale_pane

0xab09,	// (0x0002973a) scroll_pane_cp09

0xab1a,	// (0x0002974b) cale_bg_pane_g1

0xab22,	// (0x00029753) cale_bg_pane_g2

0xab2a,	// (0x0002975b) cale_bg_pane_g3

0xab32,	// (0x00029763) cale_bg_pane_g4

0xab3a,	// (0x0002976b) cale_bg_pane_g5

0xab42,	// (0x00029773) cale_bg_pane_g6

0xab4a,	// (0x0002977b) cale_bg_pane_g7

0xab52,	// (0x00029783) cale_bg_pane_g8

0xab5a,	// (0x0002978b) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0002df07) cale_bg_pane_g

0x43a8,	// (0x00022fd9) list_cale_time_pane_ParamLimits

0x43a8,	// (0x00022fd9) list_cale_time_pane

0xab62,	// (0x00029793) list_cale_time_pane_g1_ParamLimits

0xab62,	// (0x00029793) list_cale_time_pane_g1

0xab6e,	// (0x0002979f) list_cale_time_pane_g2_ParamLimits

0xab6e,	// (0x0002979f) list_cale_time_pane_g2

0x43bf,	// (0x00022ff0) list_cale_time_pane_g3_ParamLimits

0x43bf,	// (0x00022ff0) list_cale_time_pane_g3

0x43cd,	// (0x00022ffe) list_cale_time_pane_g4_ParamLimits

0x43cd,	// (0x00022ffe) list_cale_time_pane_g4

0x43db,	// (0x0002300c) list_cale_time_pane_g5_ParamLimits

0x43db,	// (0x0002300c) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0002df1a) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0002df1a) list_cale_time_pane_g

0xab88,	// (0x000297b9) list_cale_time_pane_t1_ParamLimits

0xab88,	// (0x000297b9) list_cale_time_pane_t1

0xabb0,	// (0x000297e1) list_cale_time_pane_t2_ParamLimits

0xabb0,	// (0x000297e1) list_cale_time_pane_t2

0x4720,	// (0x00023351) aid_blid_cardinal_pane

0x4762,	// (0x00023393) compass_pane_t4

0xabd8,	// (0x00029809) list_cale_time_pane_t4_ParamLimits

0xabd8,	// (0x00029809) list_cale_time_pane_t4

0x4770,	// (0x000233a1) compass_pane_t5

0x4780,	// (0x000233b1) compass_pane_t6

0x478e,	// (0x000233bf) compass_pane_t7

0xb05e,	// (0x00029c8f) navi_pane_cc_t1

0xb23d,	// (0x00029e6e) aid_phob_thumbnail_center_pane

0x4dc7,	// (0x000239f8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0002df27) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0002df27) list_cale_time_pane_t

0x9ebe,	// (0x00028aef) bg_popup_window_pane_cp02_ParamLimits

0x9ebe,	// (0x00028aef) bg_popup_window_pane_cp02

0xac00,	// (0x00029831) heading_pane_cp01_ParamLimits

0xac00,	// (0x00029831) heading_pane_cp01

0xac0c,	// (0x0002983d) loc_req_pane_ParamLimits

0xac0c,	// (0x0002983d) loc_req_pane

0xac1c,	// (0x0002984d) loc_type_pane_ParamLimits

0xac1c,	// (0x0002984d) loc_type_pane

0xac2e,	// (0x0002985f) loc_type_pane_t1_ParamLimits

0xac2e,	// (0x0002985f) loc_type_pane_t1

0xac40,	// (0x00029871) loc_type_pane_t2_ParamLimits

0xac40,	// (0x00029871) loc_type_pane_t2

0xac52,	// (0x00029883) loc_type_pane_t3_ParamLimits

0xac52,	// (0x00029883) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0002df2e) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0002df2e) loc_type_pane_t

0xac64,	// (0x00029895) list_loc_req_pane

0xac6e,	// (0x0002989f) scroll_pane_cp012

0x43e9,	// (0x0002301a) list_single_loc_request_popup_menu_pane_ParamLimits

0x43e9,	// (0x0002301a) list_single_loc_request_popup_menu_pane

0xac79,	// (0x000298aa) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xac79,	// (0x000298aa) list_single_loc_request_popup_menu_pane_g1

0xac85,	// (0x000298b6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xac85,	// (0x000298b6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0002df35) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0002df35) list_single_loc_request_popup_menu_pane_g

0xac91,	// (0x000298c2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xac91,	// (0x000298c2) list_single_loc_request_popup_menu_pane_t1

0x43fb,	// (0x0002302c) bg_popup_window_pane_cp03_ParamLimits

0x43fb,	// (0x0002302c) bg_popup_window_pane_cp03

0x4409,	// (0x0002303a) heading_loc_req_pane_ParamLimits

0x4409,	// (0x0002303a) heading_loc_req_pane

0x4415,	// (0x00023046) popup_dyc_status_message_window_g1_ParamLimits

0x4415,	// (0x00023046) popup_dyc_status_message_window_g1

0x4421,	// (0x00023052) popup_dyc_status_message_window_t1_ParamLimits

0x4421,	// (0x00023052) popup_dyc_status_message_window_t1

0x4433,	// (0x00023064) popup_dyc_status_message_window_t2_ParamLimits

0x4433,	// (0x00023064) popup_dyc_status_message_window_t2

0x4445,	// (0x00023076) popup_dyc_status_message_window_t3_ParamLimits

0x4445,	// (0x00023076) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0002df3a) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0002df3a) popup_dyc_status_message_window_t

0xa267,	// (0x00028e98) bg_heading_pane_cp01

0xaca7,	// (0x000298d8) heading_loc_req_pane_g1

0xacaf,	// (0x000298e0) heading_loc_req_pane_g2

0xacb7,	// (0x000298e8) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0002df41) heading_loc_req_pane_g

0xacbf,	// (0x000298f0) heading_loc_req_pane_t1

0xaccf,	// (0x00029900) bg_popup_sub_pane_cp01_ParamLimits

0xaccf,	// (0x00029900) bg_popup_sub_pane_cp01

0xacdd,	// (0x0002990e) popup_cale_events_window_g1_ParamLimits

0xacdd,	// (0x0002990e) popup_cale_events_window_g1

0xacfd,	// (0x0002992e) popup_cale_events_window_g2_ParamLimits

0xacfd,	// (0x0002992e) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0002df75) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0002df75) popup_cale_events_window_g

0xad1d,	// (0x0002994e) popup_cale_events_window_t1_ParamLimits

0xad1d,	// (0x0002994e) popup_cale_events_window_t1

0xad2f,	// (0x00029960) popup_cale_events_window_t2_ParamLimits

0xad2f,	// (0x00029960) popup_cale_events_window_t2

0xad6d,	// (0x0002999e) popup_cale_events_window_t3_ParamLimits

0xad6d,	// (0x0002999e) popup_cale_events_window_t3

0xada7,	// (0x000299d8) popup_cale_events_window_t4_ParamLimits

0xada7,	// (0x000299d8) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0002df7a) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0002df7a) popup_cale_events_window_t

0x4540,	// (0x00023171) call_type_pane

0xaddd,	// (0x00029a0e) popup_call_status_window_g1

0x454c,	// (0x0002317d) popup_call_status_window_g2

0x4558,	// (0x00023189) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0002df83) popup_call_status_window_g

0xadeb,	// (0x00029a1c) call_type_pane_g1

0xadf4,	// (0x00029a25) call_type_pane_g2

0x0001,

0xf359,	// (0x0002df8a) call_type_pane_g

0xa267,	// (0x00028e98) bg_popup_sub_pane_cp02

0xadfd,	// (0x00029a2e) listscroll_popup_wml_pane

0xae05,	// (0x00029a36) list_wml_pane

0xae0f,	// (0x00029a40) scroll_pane_cp013

0xae1a,	// (0x00029a4b) list_single_graphic_popup_wml_pane_ParamLimits

0xae1a,	// (0x00029a4b) list_single_graphic_popup_wml_pane

0xa5dc,	// (0x0002920d) list_single_graphic_popup_wml_pane_g1

0xae2e,	// (0x00029a5f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0002df8f) list_single_graphic_popup_wml_pane_g

0xae36,	// (0x00029a67) list_single_graphic_popup_wml_pane_t1

0xae4c,	// (0x00029a7d) aid_call_pane

0xa4ba,	// (0x000290eb) popup_clock_analogue_window_g1

0xa4ba,	// (0x000290eb) popup_clock_analogue_window_g2

0x1134,	// (0x0001fd65) popup_clock_analogue_window_g3

0x1134,	// (0x0001fd65) popup_clock_analogue_window_g4

0xa5dc,	// (0x0002920d) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0002df94) popup_clock_analogue_window_g

0x113c,	// (0x0001fd6d) popup_clock_analogue_window_t1

0x114a,	// (0x0001fd7b) clock_digital_number_pane_ParamLimits

0x114a,	// (0x0001fd7b) clock_digital_number_pane

0x1156,	// (0x0001fd87) clock_digital_number_pane_cp02_ParamLimits

0x1156,	// (0x0001fd87) clock_digital_number_pane_cp02

0x1162,	// (0x0001fd93) clock_digital_number_pane_cp03_ParamLimits

0x1162,	// (0x0001fd93) clock_digital_number_pane_cp03

0x116e,	// (0x0001fd9f) clock_digital_number_pane_cp04_ParamLimits

0x116e,	// (0x0001fd9f) clock_digital_number_pane_cp04

0x117a,	// (0x0001fdab) clock_digital_separator_pane_ParamLimits

0x117a,	// (0x0001fdab) clock_digital_separator_pane

0x1186,	// (0x0001fdb7) popup_clock_digital_window_t1

0xa5dc,	// (0x0002920d) clock_digital_number_pane_g1

0xa5dc,	// (0x0002920d) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0002df02) clock_digital_number_pane_g

0xa5dc,	// (0x0002920d) clock_digital_separator_pane_g1

0xa5dc,	// (0x0002920d) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0002df02) clock_digital_separator_pane_g

0xa267,	// (0x00028e98) bg_popup_window_pane_cp04

0xae54,	// (0x00029a85) heading_pane_cp03

0xae5c,	// (0x00029a8d) listscroll_popup_gms_pane

0xae64,	// (0x00029a95) grid_large_graphic_popup_pane

0xae6e,	// (0x00029a9f) listscroll_popup_gms_pane_g1

0xae76,	// (0x00029aa7) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0002df9f) listscroll_popup_gms_pane_g

0xa908,	// (0x00029539) scroll_pane_cp014

0x4564,	// (0x00023195) cell_large_graphic_popup_pane_ParamLimits

0x4564,	// (0x00023195) cell_large_graphic_popup_pane

0x457e,	// (0x000231af) cell_large_graphic_popup_pane_g1_ParamLimits

0x457e,	// (0x000231af) cell_large_graphic_popup_pane_g1

0xae7e,	// (0x00029aaf) cell_large_graphic_popup_pane_g2_ParamLimits

0xae7e,	// (0x00029aaf) cell_large_graphic_popup_pane_g2

0xae8a,	// (0x00029abb) cell_large_graphic_popup_pane_g3_ParamLimits

0xae8a,	// (0x00029abb) cell_large_graphic_popup_pane_g3

0xae97,	// (0x00029ac8) cell_large_graphic_popup_pane_g4_ParamLimits

0xae97,	// (0x00029ac8) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0002dfa4) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0002dfa4) cell_large_graphic_popup_pane_g

0xaea7,	// (0x00029ad8) grid_highlight_pane_cp010

0xa5dc,	// (0x0002920d) bg_popup_call_pane_g1

0xaeb1,	// (0x00029ae2) list_single_graphic_popup_conf_pane_ParamLimits

0xaeb1,	// (0x00029ae2) list_single_graphic_popup_conf_pane

0xaec3,	// (0x00029af4) list_highlight_pane_cp01

0xaecc,	// (0x00029afd) list_single_graphic_popup_conf_pane_g1

0xaed4,	// (0x00029b05) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0002dfad) list_single_graphic_popup_conf_pane_g

0xaedc,	// (0x00029b0d) list_single_graphic_popup_conf_pane_t1

0xaeea,	// (0x00029b1b) linegrid_cams_pane_g1

0x458a,	// (0x000231bb) linegrid_cams_pane_g2

0xa715,	// (0x00029346) linegrid_cams_pane_g3

0xaef3,	// (0x00029b24) linegrid_cams_pane_g4

0x4593,	// (0x000231c4) linegrid_cams_pane_g5

0x459c,	// (0x000231cd) linegrid_cams_pane_g6

0xa71e,	// (0x0002934f) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0002dfb2) linegrid_cams_pane_g

0xaefc,	// (0x00029b2d) popup_clock_analogue_window

0xaefc,	// (0x00029b2d) popup_clock_digital_window

0xa267,	// (0x00028e98) popup_phob_thumbnail_window

0xa5dc,	// (0x0002920d) call_video_uplink_pane_g1

0xaf05,	// (0x00029b36) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0002dfc1) call_video_uplink_pane_g

0xaf0d,	// (0x00029b3e) video_uplink_pane

0xaf15,	// (0x00029b46) mce_image_pane_g1

0x45a7,	// (0x000231d8) mce_image_pane_g2

0x45b1,	// (0x000231e2) mce_image_pane_g3

0x45bb,	// (0x000231ec) mce_image_pane_g4

0x45c3,	// (0x000231f4) mce_image_pane_g5

0x0004,

0xf395,	// (0x0002dfc6) mce_image_pane_g

0xaf1f,	// (0x00029b50) control_top_pane_stacon_cp01_ParamLimits

0xaf1f,	// (0x00029b50) control_top_pane_stacon_cp01

0xaf33,	// (0x00029b64) uni_indicator_pane_stacon_cp01_ParamLimits

0xaf33,	// (0x00029b64) uni_indicator_pane_stacon_cp01

0xaf44,	// (0x00029b75) bg_popup_sub_pane_cp03

0x45cb,	// (0x000231fc) chi_dic_find_pane

0x45d3,	// (0x00023204) listscroll_chi_dic_pane

0x45dc,	// (0x0002320d) main_pane_chidic_g1

0x45ef,	// (0x00023220) chi_dic_find_pane_t1

0xaf4e,	// (0x00029b7f) find_chidic_pane

0xaf57,	// (0x00029b88) chi_dic_list_pane_ParamLimits

0xaf57,	// (0x00029b88) chi_dic_list_pane

0xaf68,	// (0x00029b99) scroll_pane_cp020

0x45fd,	// (0x0002322e) find_chidic_pane_t1

0xa267,	// (0x00028e98) input_focus_pane_cp06

0xa87b,	// (0x000294ac) list_chi_dic_pane_ParamLimits

0xa87b,	// (0x000294ac) list_chi_dic_pane

0x460c,	// (0x0002323d) list_chi_dic_pane_t1_ParamLimits

0x460c,	// (0x0002323d) list_chi_dic_pane_t1

0xa267,	// (0x00028e98) list_highlight_pane_cp020

0xaf70,	// (0x00029ba1) bg_cale_heading_pane_g1

0x461f,	// (0x00023250) bg_cale_heading_pane_g2

0x4627,	// (0x00023258) bg_cale_heading_pane_g3

0x462f,	// (0x00023260) bg_cale_heading_pane_g4

0x4639,	// (0x0002326a) bg_cale_heading_pane_g5

0x4643,	// (0x00023274) bg_cale_heading_pane_g6

0x464b,	// (0x0002327c) bg_cale_heading_pane_g7

0x4653,	// (0x00023284) bg_cale_heading_pane_g8

0x465d,	// (0x0002328e) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0002dfd1) bg_cale_heading_pane_g

0xaf70,	// (0x00029ba1) bg_cale_side_pane_g1

0x4667,	// (0x00023298) bg_cale_side_pane_g2

0x4671,	// (0x000232a2) bg_cale_side_pane_g3

0x467b,	// (0x000232ac) bg_cale_side_pane_g4

0x4685,	// (0x000232b6) bg_cale_side_pane_g5

0x468f,	// (0x000232c0) bg_cale_side_pane_g6

0x4699,	// (0x000232ca) bg_cale_side_pane_g7

0x46a3,	// (0x000232d4) bg_cale_side_pane_g8

0x46ab,	// (0x000232dc) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0002dfe4) bg_cale_side_pane_g

0x46b3,	// (0x000232e4) popup_call_status_window_ParamLimits

0x46b3,	// (0x000232e4) popup_call_status_window

0xaf78,	// (0x00029ba9) stacon_top_pane

0xaf80,	// (0x00029bb1) status_pane_ParamLimits

0xaf80,	// (0x00029bb1) status_pane

0xaf95,	// (0x00029bc6) status_small_pane

0xaf9d,	// (0x00029bce) control_pane

0xa267,	// (0x00028e98) stacon_bottom_pane

0xafa5,	// (0x00029bd6) list_single_mce_smart_pane_t1_ParamLimits

0xafa5,	// (0x00029bd6) list_single_mce_smart_pane_t1

0xafb8,	// (0x00029be9) list_single_mce_smart_pane_t2_ParamLimits

0xafb8,	// (0x00029be9) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0002dff7) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0002dff7) list_single_mce_smart_pane_t

0x46bf,	// (0x000232f0) compass_pane

0x46ca,	// (0x000232fb) main_location2_pane_t1

0x46e0,	// (0x00023311) main_location2_pane_t2

0x46f6,	// (0x00023327) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0002dffc) main_location2_pane_t

0xafd7,	// (0x00029c08) compass_pane_g1_ParamLimits

0xafd7,	// (0x00029c08) compass_pane_g1

0x4744,	// (0x00023375) compass_pane_t1

0x4753,	// (0x00023384) compass_pane_t2

0x0005,

0xf3d4,	// (0x0002e005) compass_pane_t

0x479e,	// (0x000233cf) text_secondary_cp61

0xb055,	// (0x00029c86) navi_pane_cams_g5

0xb0d1,	// (0x00029d02) navi_pane_im_t1

0xb0df,	// (0x00029d10) navi_pane_mp_g1_ParamLimits

0xb0df,	// (0x00029d10) navi_pane_mp_g1

0xb0f3,	// (0x00029d24) navi_pane_mp_g2_ParamLimits

0xb0f3,	// (0x00029d24) navi_pane_mp_g2

0xb0ff,	// (0x00029d30) navi_pane_mp_g3_ParamLimits

0xb0ff,	// (0x00029d30) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0002e019) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0002e019) navi_pane_mp_g

0xb10b,	// (0x00029d3c) navi_pane_mp_t1

0xb119,	// (0x00029d4a) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0002e020) navi_pane_mp_t

0xb186,	// (0x00029db7) navi_pane_vt_g1

0xb10b,	// (0x00029d3c) navi_pane_vt_t1

0xb18e,	// (0x00029dbf) navi_slider_pane

0xa72f,	// (0x00029360) zooming_pane

0xb19e,	// (0x00029dcf) navi_slider_pane_g1

0x11a3,	// (0x0001fdd4) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0002e027) navi_slider_pane_g

0xb1c2,	// (0x00029df3) aid_levels_zoom

0xb1ca,	// (0x00029dfb) zooming_pane_g1

0xb1d2,	// (0x00029e03) zooming_pane_g2

0xb1d2,	// (0x00029e03) zooming_pane_g3

0x0002,

0xf405,	// (0x0002e036) zooming_pane_g

0xb1da,	// (0x00029e0b) level_10_zoom

0xb1e3,	// (0x00029e14) level_11_zoom

0xb1ec,	// (0x00029e1d) level_1_zoom

0xb1f5,	// (0x00029e26) level_2_zoom

0xb1fe,	// (0x00029e2f) level_3_zoom

0xb207,	// (0x00029e38) level_4_zoom

0xb210,	// (0x00029e41) level_5_zoom

0xb219,	// (0x00029e4a) level_6_zoom

0xb222,	// (0x00029e53) level_7_zoom

0xb22b,	// (0x00029e5c) level_8_zoom

0xb234,	// (0x00029e65) level_9_zoom

0xb245,	// (0x00029e76) popup_phob_thumbnail_window_g1

0xb24d,	// (0x00029e7e) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0002e03d) popup_phob_thumbnail_window_g

0xc59e,	// (0x0002b1cf) level_1_location

0xc5a6,	// (0x0002b1d7) level_2_location

0xc5ae,	// (0x0002b1df) level_3_location

0xc5b6,	// (0x0002b1e7) level_4_location

0xa72f,	// (0x00029360) level_5_location

0x47d9,	// (0x0002340a) mce_icon_pane_g1

0x47e1,	// (0x00023412) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0002e042) mce_icon_pane_g

0x47e9,	// (0x0002341a) main_mup_pane_g1_ParamLimits

0x47e9,	// (0x0002341a) main_mup_pane_g1

0x4801,	// (0x00023432) main_mup_pane_g2_ParamLimits

0x4801,	// (0x00023432) main_mup_pane_g2

0x481d,	// (0x0002344e) main_mup_pane_g3_ParamLimits

0x481d,	// (0x0002344e) main_mup_pane_g3

0x4839,	// (0x0002346a) main_mup_pane_g4_ParamLimits

0x4839,	// (0x0002346a) main_mup_pane_g4

0x484d,	// (0x0002347e) main_mup_pane_g5_ParamLimits

0x484d,	// (0x0002347e) main_mup_pane_g5

0x486e,	// (0x0002349f) main_mup_pane_g6_ParamLimits

0x486e,	// (0x0002349f) main_mup_pane_g6

0x488e,	// (0x000234bf) main_mup_pane_g7_ParamLimits

0x488e,	// (0x000234bf) main_mup_pane_g7

0x48b2,	// (0x000234e3) main_mup_pane_g8_ParamLimits

0x48b2,	// (0x000234e3) main_mup_pane_g8

0x48d6,	// (0x00023507) main_mup_pane_g9_ParamLimits

0x48d6,	// (0x00023507) main_mup_pane_g9

0x48f9,	// (0x0002352a) main_mup_pane_g10_ParamLimits

0x48f9,	// (0x0002352a) main_mup_pane_g10

0x491c,	// (0x0002354d) main_mup_pane_g11_ParamLimits

0x491c,	// (0x0002354d) main_mup_pane_g11

0x493c,	// (0x0002356d) main_mup_pane_g12_ParamLimits

0x493c,	// (0x0002356d) main_mup_pane_g12

0x494a,	// (0x0002357b) main_mup_pane_g13_ParamLimits

0x494a,	// (0x0002357b) main_mup_pane_g13

0x000c,

0xf416,	// (0x0002e047) main_mup_pane_g_ParamLimits

0xf416,	// (0x0002e047) main_mup_pane_g

0x4960,	// (0x00023591) main_mup_pane_t1_ParamLimits

0x4960,	// (0x00023591) main_mup_pane_t1

0x497f,	// (0x000235b0) main_mup_pane_t2_ParamLimits

0x497f,	// (0x000235b0) main_mup_pane_t2

0x4999,	// (0x000235ca) main_mup_pane_t3_ParamLimits

0x4999,	// (0x000235ca) main_mup_pane_t3

0x49b3,	// (0x000235e4) main_mup_pane_t4_ParamLimits

0x49b3,	// (0x000235e4) main_mup_pane_t4

0x49c5,	// (0x000235f6) main_mup_pane_t5_ParamLimits

0x49c5,	// (0x000235f6) main_mup_pane_t5

0x49d7,	// (0x00023608) main_mup_pane_t6_ParamLimits

0x49d7,	// (0x00023608) main_mup_pane_t6

0x0005,

0xf431,	// (0x0002e062) main_mup_pane_t_ParamLimits

0xf431,	// (0x0002e062) main_mup_pane_t

0x49ed,	// (0x0002361e) mup_progress_pane_ParamLimits

0x49ed,	// (0x0002361e) mup_progress_pane

0x49f9,	// (0x0002362a) mup_visualizer_pane_ParamLimits

0x49f9,	// (0x0002362a) mup_visualizer_pane

0x4a37,	// (0x00023668) mup_volume_pane_ParamLimits

0x4a37,	// (0x00023668) mup_volume_pane

0xaddd,	// (0x00029a0e) mup_visualizer_pane_g1_ParamLimits

0xaddd,	// (0x00029a0e) mup_visualizer_pane_g1

0xaddd,	// (0x00029a0e) mup_visualizer_pane_g2_ParamLimits

0xaddd,	// (0x00029a0e) mup_visualizer_pane_g2

0xafd7,	// (0x00029c08) mup_visualizer_pane_g3_ParamLimits

0xafd7,	// (0x00029c08) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0002e06f) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0002e06f) mup_visualizer_pane_g

0xa5dc,	// (0x0002920d) mup_volume_pane_g1

0xb25d,	// (0x00029e8e) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0002e076) mup_volume_pane_g

0xa5dc,	// (0x0002920d) mup_progress_pane_g1

0xb266,	// (0x00029e97) mup_progress_pane_g2

0xb27b,	// (0x00029eac) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0002e07b) mup_progress_pane_g

0xa267,	// (0x00028e98) bg_popup_window_pane_cp05

0xb284,	// (0x00029eb5) heading_pane_cp02_ParamLimits

0xb284,	// (0x00029eb5) heading_pane_cp02

0xb2a0,	// (0x00029ed1) list_popup_blid_pane

0xb2a8,	// (0x00029ed9) list_blid_sat_info_pane_ParamLimits

0xb2a8,	// (0x00029ed9) list_blid_sat_info_pane

0xb2bb,	// (0x00029eec) list_blid_sat_info_pane_g1

0xb2c3,	// (0x00029ef4) list_blid_sat_info_pane_t1

0x4b56,	// (0x00023787) mup_equalizer_pane_ParamLimits

0x4b56,	// (0x00023787) mup_equalizer_pane

0x4b77,	// (0x000237a8) mup_equalizer_pane_cp1_ParamLimits

0x4b77,	// (0x000237a8) mup_equalizer_pane_cp1

0x4b98,	// (0x000237c9) mup_equalizer_pane_cp2_ParamLimits

0x4b98,	// (0x000237c9) mup_equalizer_pane_cp2

0x4bb9,	// (0x000237ea) mup_equalizer_pane_cp3_ParamLimits

0x4bb9,	// (0x000237ea) mup_equalizer_pane_cp3

0x4bde,	// (0x0002380f) mup_equalizer_pane_cp4_ParamLimits

0x4bde,	// (0x0002380f) mup_equalizer_pane_cp4

0x4c03,	// (0x00023834) mup_equalizer_pane_cp5

0x4c1b,	// (0x0002384c) mup_equalizer_pane_cp6

0x4c33,	// (0x00023864) mup_equalizer_pane_cp7

0xc4b8,	// (0x0002b0e9) bg_popup_call_poc_act_pane_g9

0xc4c0,	// (0x0002b0f1) bg_popup_call_poc_act_pane_g10

0xc4c8,	// (0x0002b0f9) bg_popup_call_poc_act_pane_g11

0x000a,

0xa4c2,	// (0x000290f3) mup_scale_pane

0xa5dc,	// (0x0002920d) mup_scale_pane_g1

0xb2d1,	// (0x00029f02) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0002e097) mup_scale_pane_g

0xb2f5,	// (0x00029f26) msg_data_pane

0xb2fd,	// (0x00029f2e) scroll_pane_cp017

0x4c5d,	// (0x0002388e) bg_list_pane_cp04_ParamLimits

0x4c5d,	// (0x0002388e) bg_list_pane_cp04

0xb30d,	// (0x00029f3e) msg_data_pane_g1

0x4c7d,	// (0x000238ae) msg_data_pane_g2

0x4c87,	// (0x000238b8) msg_data_pane_g3

0x4c91,	// (0x000238c2) msg_data_pane_g4

0x4c99,	// (0x000238ca) msg_data_pane_g5

0x4ca1,	// (0x000238d2) msg_data_pane_g6

0x4ca9,	// (0x000238da) msg_data_pane_g7

0x0006,

0xf475,	// (0x0002e0a6) msg_data_pane_g

0x4cb1,	// (0x000238e2) msg_text_pane_ParamLimits

0x4cb1,	// (0x000238e2) msg_text_pane

0x4ce2,	// (0x00023913) qrid_highlight_pane_cp011_ParamLimits

0x4ce2,	// (0x00023913) qrid_highlight_pane_cp011

0xa267,	// (0x00028e98) msg_body_pane

0xa267,	// (0x00028e98) msg_header_pane

0xb31e,	// (0x00029f4f) input_focus_pane_cp07

0xb333,	// (0x00029f64) msg_header_pane_t1_ParamLimits

0xb333,	// (0x00029f64) msg_header_pane_t1

0xb345,	// (0x00029f76) msg_header_pane_t2_ParamLimits

0xb345,	// (0x00029f76) msg_header_pane_t2

0x0001,

0xf489,	// (0x0002e0ba) msg_header_pane_t_ParamLimits

0xf489,	// (0x0002e0ba) msg_header_pane_t

0xb357,	// (0x00029f88) msg_body_pane_g1

0x4d06,	// (0x00023937) msg_body_pane_t1_ParamLimits

0x4d06,	// (0x00023937) msg_body_pane_t1

0xb35f,	// (0x00029f90) msg_body_pane_t2_ParamLimits

0xb35f,	// (0x00029f90) msg_body_pane_t2

0xb371,	// (0x00029fa2) msg_body_pane_t3_ParamLimits

0xb371,	// (0x00029fa2) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0002e0bf) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0002e0bf) msg_body_pane_t

0x11e5,	// (0x0001fe16) main_viewer_pane_g1_ParamLimits

0x11e5,	// (0x0001fe16) main_viewer_pane_g1

0x11f1,	// (0x0001fe22) main_viewer_pane_g2_ParamLimits

0x11f1,	// (0x0001fe22) main_viewer_pane_g2

0x4d59,	// (0x0002398a) main_viewer_pane_g3_ParamLimits

0x4d59,	// (0x0002398a) main_viewer_pane_g3

0x4d6a,	// (0x0002399b) main_viewer_pane_g4_ParamLimits

0x4d6a,	// (0x0002399b) main_viewer_pane_g4

0x11fd,	// (0x0001fe2e) main_viewer_pane_g5_ParamLimits

0x11fd,	// (0x0001fe2e) main_viewer_pane_g5

0x11fd,	// (0x0001fe2e) main_viewer_pane_g7_ParamLimits

0x11fd,	// (0x0001fe2e) main_viewer_pane_g7

0x120f,	// (0x0001fe40) main_viewer_pane_g8_ParamLimits

0x120f,	// (0x0001fe40) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0002e0cf) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0002e0cf) main_viewer_pane_g

0xb383,	// (0x00029fb4) viewer_content_pane_ParamLimits

0xb383,	// (0x00029fb4) viewer_content_pane

0x4d9b,	// (0x000239cc) main_postcard_pane_g1_ParamLimits

0x4d9b,	// (0x000239cc) main_postcard_pane_g1

0x4da9,	// (0x000239da) main_postcard_pane_g2_ParamLimits

0x4da9,	// (0x000239da) main_postcard_pane_g2

0x4db7,	// (0x000239e8) main_postcard_pane_g3_ParamLimits

0x4db7,	// (0x000239e8) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0002e0e0) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0002e0e0) main_postcard_pane_g

0x4dc7,	// (0x000239f8) main_postcard_pane_g4

0xc6b1,	// (0x0002b2e2) smil_status_volume_pane_g2

0x4df3,	// (0x00023a24) postcard_pane_ParamLimits

0x4df3,	// (0x00023a24) postcard_pane

0xaddd,	// (0x00029a0e) postcard_pane_g1_ParamLimits

0xaddd,	// (0x00029a0e) postcard_pane_g1

0x4e2d,	// (0x00023a5e) postcard_pane_g2_ParamLimits

0x4e2d,	// (0x00023a5e) postcard_pane_g2

0x4e39,	// (0x00023a6a) postcard_pane_g3_ParamLimits

0x4e39,	// (0x00023a6a) postcard_pane_g3

0xb391,	// (0x00029fc2) postcard_pane_g4_ParamLimits

0xb391,	// (0x00029fc2) postcard_pane_g4

0x4e45,	// (0x00023a76) postcard_pane_g5_ParamLimits

0x4e45,	// (0x00023a76) postcard_pane_g5

0x4e51,	// (0x00023a82) postcard_pane_g6_ParamLimits

0x4e51,	// (0x00023a82) postcard_pane_g6

0xb39f,	// (0x00029fd0) postcard_pane_g7_ParamLimits

0xb39f,	// (0x00029fd0) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0002e0ed) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0002e0ed) postcard_pane_g

0x4e5f,	// (0x00023a90) main_mp2_pane_g1_ParamLimits

0x4e5f,	// (0x00023a90) main_mp2_pane_g1

0x4e6d,	// (0x00023a9e) main_mp2_pane_g2_ParamLimits

0x4e6d,	// (0x00023a9e) main_mp2_pane_g2

0x4e79,	// (0x00023aaa) main_mp2_pane_g3_ParamLimits

0x4e79,	// (0x00023aaa) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0002e0fc) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0002e0fc) main_mp2_pane_g

0x4e85,	// (0x00023ab6) main_mp2_pane_t1_ParamLimits

0x4e85,	// (0x00023ab6) main_mp2_pane_t1

0x4e9c,	// (0x00023acd) main_mp2_pane_t2_ParamLimits

0x4e9c,	// (0x00023acd) main_mp2_pane_t2

0x4eb0,	// (0x00023ae1) main_mp2_pane_t3_ParamLimits

0x4eb0,	// (0x00023ae1) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0002e103) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0002e103) main_mp2_pane_t

0xb3ad,	// (0x00029fde) pec_content_pane_ParamLimits

0xb3ad,	// (0x00029fde) pec_content_pane

0xa908,	// (0x00029539) scroll_pane_cp015

0xb3bf,	// (0x00029ff0) pec_attribute_pane_ParamLimits

0xb3bf,	// (0x00029ff0) pec_attribute_pane

0x4ec2,	// (0x00023af3) pec_content_pane_g1_ParamLimits

0x4ec2,	// (0x00023af3) pec_content_pane_g1

0xb3cf,	// (0x0002a000) pec_content_pane_t1_ParamLimits

0xb3cf,	// (0x0002a000) pec_content_pane_t1

0xb3e1,	// (0x0002a012) pec_content_pane_t2_ParamLimits

0xb3e1,	// (0x0002a012) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0002e10a) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0002e10a) pec_content_pane_t

0x4ece,	// (0x00023aff) list_single_graphic_pane_cp01_ParamLimits

0x4ece,	// (0x00023aff) list_single_graphic_pane_cp01

0xa4c2,	// (0x000290f3) bg_popup_sub_pane_cp04

0xb3f3,	// (0x0002a024) popup_mup_playback_window_g1

0xb3ff,	// (0x0002a030) popup_mup_playback_window_t1

0xb414,	// (0x0002a045) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0002e10f) popup_mup_playback_window_t

0xb44b,	// (0x0002a07c) main_image_pane_g1_ParamLimits

0xb44b,	// (0x0002a07c) main_image_pane_g1

0xb48e,	// (0x0002a0bf) scroll_pane_cp018_ParamLimits

0xb48e,	// (0x0002a0bf) scroll_pane_cp018

0xb4a6,	// (0x0002a0d7) scroll_pane_cp016_ParamLimits

0xb4a6,	// (0x0002a0d7) scroll_pane_cp016

0x4f5c,	// (0x00023b8d) smil2_image_pane_ParamLimits

0x4f5c,	// (0x00023b8d) smil2_image_pane

0x4f92,	// (0x00023bc3) smil2_root_pane_ParamLimits

0x4f92,	// (0x00023bc3) smil2_root_pane

0x4fbe,	// (0x00023bef) smil2_text_pane_ParamLimits

0x4fbe,	// (0x00023bef) smil2_text_pane

0xa267,	// (0x00028e98) bg_list_pane_cp06

0xb4e2,	// (0x0002a113) grid_radio_pane

0xa267,	// (0x00028e98) bg_popup_window_pane_cp06

0xb4ec,	// (0x0002a11d) main_fmradio_pane_t1

0xae54,	// (0x00029a85) heading_pane_cp04

0xb4fa,	// (0x0002a12b) main_fmradio_pane_t2

0xc4d0,	// (0x0002b101) popup_cale_lunar_info_window_g1

0xb508,	// (0x0002a139) main_fmradio_pane_t3

0xc4d8,	// (0x0002b109) popup_cale_lunar_info_window_g2

0xb518,	// (0x0002a149) main_fmradio_pane_t4

0x0001,

0xb526,	// (0x0002a157) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0002e1ea) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0002e124) main_fmradio_pane_t

0xb534,	// (0x0002a165) wait_bar_pane_cp03

0xb53c,	// (0x0002a16d) cell_fmradio_pane_ParamLimits

0xb53c,	// (0x0002a16d) cell_fmradio_pane

0xb39f,	// (0x00029fd0) cell_fmradio_pane_g1_ParamLimits

0xb39f,	// (0x00029fd0) cell_fmradio_pane_g1

0xa267,	// (0x00028e98) grid_highlight_pane_cp011

0xb551,	// (0x0002a182) poc_content_pane_ParamLimits

0xb551,	// (0x0002a182) poc_content_pane

0xb563,	// (0x0002a194) scroll_pane_cp019

0x4ffe,	// (0x00023c2f) popup_call_poc_act_window_ParamLimits

0x4ffe,	// (0x00023c2f) popup_call_poc_act_window

0x500b,	// (0x00023c3c) popup_call_poc_inact_window_ParamLimits

0x500b,	// (0x00023c3c) popup_call_poc_inact_window

0xf590,	// (0x0002e1c1) bg_popup_call_poc_act_pane_g

0xc448,	// (0x0002b079) bg_popup_call_poc_inact_pane_g1

0xc450,	// (0x0002b081) bg_popup_call_poc_inact_pane_g2

0xb56b,	// (0x0002a19c) popup_call_poc_act_window_g2

0xc458,	// (0x0002b089) bg_popup_call_poc_inact_pane_g3

0xc460,	// (0x0002b091) bg_popup_call_poc_inact_pane_g4

0xc468,	// (0x0002b099) bg_popup_call_poc_inact_pane_g5

0xb573,	// (0x0002a1a4) popup_call_poc_act_window_t1_ParamLimits

0xb573,	// (0x0002a1a4) popup_call_poc_act_window_t1

0xb59b,	// (0x0002a1cc) popup_call_poc_act_window_t2_ParamLimits

0xb59b,	// (0x0002a1cc) popup_call_poc_act_window_t2

0xb5c3,	// (0x0002a1f4) popup_call_poc_act_window_t3_ParamLimits

0xb5c3,	// (0x0002a1f4) popup_call_poc_act_window_t3

0xb5eb,	// (0x0002a21c) popup_call_poc_act_window_t4_ParamLimits

0xb5eb,	// (0x0002a21c) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0002e12f) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0002e12f) popup_call_poc_act_window_t

0xc470,	// (0x0002b0a1) bg_popup_call_poc_inact_pane_g6

0xc478,	// (0x0002b0a9) bg_popup_call_poc_inact_pane_g7

0xc480,	// (0x0002b0b1) bg_popup_call_poc_inact_pane_g8

0xb5fd,	// (0x0002a22e) popup_call_poc_inact_window_g2

0xc488,	// (0x0002b0b9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0002e1ae) bg_popup_call_poc_inact_pane_g

0xb605,	// (0x0002a236) popup_call_poc_inact_window_t1_ParamLimits

0xb605,	// (0x0002a236) popup_call_poc_inact_window_t1

0xb61a,	// (0x0002a24b) popup_call_poc_inact_window_t2_ParamLimits

0xb61a,	// (0x0002a24b) popup_call_poc_inact_window_t2

0xb62f,	// (0x0002a260) popup_call_poc_inact_window_t3_ParamLimits

0xb62f,	// (0x0002a260) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0002e138) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0002e138) popup_call_poc_inact_window_t

0xc611,	// (0x0002b242) context_pane_ParamLimits

0x54c6,	// (0x000240f7) signal_pane_ParamLimits

0xa72f,	// (0x00029360) main_call2_pane

0x138e,	// (0x0001ffbf) popup_phob_thumbnail2_window_ParamLimits

0x138e,	// (0x0001ffbf) popup_phob_thumbnail2_window

0x11b5,	// (0x0001fde6) aid_hotspot_pointer_arrow_pane

0x11bd,	// (0x0001fdee) aid_hotspot_pointer_hand_pane

0x5330,	// (0x00023f61) phob_pre_status_pane_g5

0x2f16,	// (0x00021b47) cams_zoom_pane_ParamLimits

0x2f22,	// (0x00021b53) image_vga_pane_ParamLimits

0x2f31,	// (0x00021b62) main_camera_pane_g1_ParamLimits

0x2f3f,	// (0x00021b70) main_camera_pane_g2_ParamLimits

0x2f4b,	// (0x00021b7c) main_camera_pane_g3_ParamLimits

0x2f59,	// (0x00021b8a) main_camera_pane_g4_ParamLimits

0x2f67,	// (0x00021b98) main_camera_pane_g5_ParamLimits

0x2f75,	// (0x00021ba6) main_camera_pane_g6_ParamLimits

0x2f83,	// (0x00021bb4) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0002de37) main_camera_pane_g_ParamLimits

0x2f91,	// (0x00021bc2) main_camera_pane_t1_ParamLimits

0x2fa3,	// (0x00021bd4) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0002de48) main_camera_pane_t_ParamLimits

0xa4c2,	// (0x000290f3) bg_popup_preview_window_pane_cp01_ParamLimits

0xa4c2,	// (0x000290f3) bg_popup_preview_window_pane_cp01

0xb644,	// (0x0002a275) popup_phob_thumbnail2_window_g1_ParamLimits

0xb644,	// (0x0002a275) popup_phob_thumbnail2_window_g1

0xa267,	// (0x00028e98) call2_cli_visual_pane

0x5027,	// (0x00023c58) popup_call2_audio_conf_window_ParamLimits

0x5027,	// (0x00023c58) popup_call2_audio_conf_window

0x5040,	// (0x00023c71) popup_call2_audio_first_window_ParamLimits

0x5040,	// (0x00023c71) popup_call2_audio_first_window

0x50de,	// (0x00023d0f) popup_call2_audio_in_window_ParamLimits

0x50de,	// (0x00023d0f) popup_call2_audio_in_window

0x5122,	// (0x00023d53) popup_call2_audio_out_window_ParamLimits

0x5122,	// (0x00023d53) popup_call2_audio_out_window

0x518c,	// (0x00023dbd) popup_call2_audio_second_window_ParamLimits

0x518c,	// (0x00023dbd) popup_call2_audio_second_window

0x51ea,	// (0x00023e1b) popup_call2_audio_wait_window_ParamLimits

0x51ea,	// (0x00023e1b) popup_call2_audio_wait_window

0xa267,	// (0x00028e98) bg_popup_call2_act_pane_cp03

0xa4a4,	// (0x000290d5) list_conf_pane_cp

0xb650,	// (0x0002a281) popup_call2_audio_conf_window_t1

0xb65e,	// (0x0002a28f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb65e,	// (0x0002a28f) list_single_graphic_popup_conf2_pane

0xaec3,	// (0x00029af4) list_highlight_pane_cp04

0xb671,	// (0x0002a2a2) list_single_graphic_popup_conf2_pane_g1

0xaed4,	// (0x00029b05) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0002e13f) list_single_graphic_popup_conf2_pane_g

0xb67b,	// (0x0002a2ac) list_single_graphic_popup_conf2_pane_t1

0xb689,	// (0x0002a2ba) bg_popup_call2_act_pane_cp01_ParamLimits

0xb689,	// (0x0002a2ba) bg_popup_call2_act_pane_cp01

0xb713,	// (0x0002a344) call_type_pane_cp05_ParamLimits

0xb713,	// (0x0002a344) call_type_pane_cp05

0xb767,	// (0x0002a398) popup_call2_audio_second_window_g1_ParamLimits

0xb767,	// (0x0002a398) popup_call2_audio_second_window_g1

0xb7bb,	// (0x0002a3ec) popup_call2_audio_second_window_g2_ParamLimits

0xb7bb,	// (0x0002a3ec) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0002e144) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0002e144) popup_call2_audio_second_window_g

0xb820,	// (0x0002a451) popup_call2_audio_second_window_t1_ParamLimits

0xb820,	// (0x0002a451) popup_call2_audio_second_window_t1

0xb8db,	// (0x0002a50c) popup_call2_audio_second_window_t2_ParamLimits

0xb8db,	// (0x0002a50c) popup_call2_audio_second_window_t2

0xb92e,	// (0x0002a55f) popup_call2_audio_second_window_t3_ParamLimits

0xb92e,	// (0x0002a55f) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0002e14b) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0002e14b) popup_call2_audio_second_window_t

0xa267,	// (0x00028e98) bg_popup_call2_in_pane_cp02

0xa271,	// (0x00028ea2) call_type_pane_cp04

0xa279,	// (0x00028eaa) popup_call2_audio_wait_window_g1

0xa281,	// (0x00028eb2) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0002dd26) popup_call2_audio_wait_window_g

0xa289,	// (0x00028eba) popup_call2_audio_wait_window_t3

0xba21,	// (0x0002a652) bg_popup_call2_act_pane_ParamLimits

0xba21,	// (0x0002a652) bg_popup_call2_act_pane

0xbae1,	// (0x0002a712) call_type_pane_cp03_ParamLimits

0xbae1,	// (0x0002a712) call_type_pane_cp03

0xbb45,	// (0x0002a776) popup_call2_audio_first_window_g1_ParamLimits

0xbb45,	// (0x0002a776) popup_call2_audio_first_window_g1

0xbbb5,	// (0x0002a7e6) popup_call2_audio_first_window_g2_ParamLimits

0xbbb5,	// (0x0002a7e6) popup_call2_audio_first_window_g2

0xaddd,	// (0x00029a0e) popup_call2_audio_first_window_g3_ParamLimits

0xaddd,	// (0x00029a0e) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0002e154) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0002e154) popup_call2_audio_first_window_g

0xbc93,	// (0x0002a8c4) popup_call2_audio_first_window_t1_ParamLimits

0xbc93,	// (0x0002a8c4) popup_call2_audio_first_window_t1

0xbd96,	// (0x0002a9c7) popup_call2_audio_first_window_t4_ParamLimits

0xbd96,	// (0x0002a9c7) popup_call2_audio_first_window_t4

0xbe79,	// (0x0002aaaa) popup_call2_audio_first_window_t5_ParamLimits

0xbe79,	// (0x0002aaaa) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0002e15f) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0002e15f) popup_call2_audio_first_window_t

0xa4ba,	// (0x000290eb) bg_popup_call2_act_pane_g1

0xc4e2,	// (0x0002b113) popup_cale_lunar_info_window_t1

0xc4f0,	// (0x0002b121) popup_cale_lunar_info_window_t2

0xc4fe,	// (0x0002b12f) popup_cale_lunar_info_window_t3

0xa267,	// (0x00028e98) bg_popup_call2_bubble_pane

0xbf7a,	// (0x0002abab) bg_popup_call2_in_pane_cp01_ParamLimits

0xbf7a,	// (0x0002abab) bg_popup_call2_in_pane_cp01

0x9f43,	// (0x00028b74) call_type_pane_cp02

0xbfc2,	// (0x0002abf3) popup_call2_audio_out_window_g1_ParamLimits

0xbfc2,	// (0x0002abf3) popup_call2_audio_out_window_g1

0xbfee,	// (0x0002ac1f) popup_call2_audio_out_window_g2_ParamLimits

0xbfee,	// (0x0002ac1f) popup_call2_audio_out_window_g2

0xc016,	// (0x0002ac47) popup_call2_audio_out_window_g3_ParamLimits

0xc016,	// (0x0002ac47) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0002e168) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0002e168) popup_call2_audio_out_window_g

0xc051,	// (0x0002ac82) popup_call2_audio_out_window_t1_ParamLimits

0xc051,	// (0x0002ac82) popup_call2_audio_out_window_t1

0xc0b0,	// (0x0002ace1) popup_call2_audio_out_window_t2_ParamLimits

0xc0b0,	// (0x0002ace1) popup_call2_audio_out_window_t2

0xc104,	// (0x0002ad35) popup_call2_audio_out_window_t3_ParamLimits

0xc104,	// (0x0002ad35) popup_call2_audio_out_window_t3

0xc11a,	// (0x0002ad4b) popup_call2_audio_out_window_t4_ParamLimits

0xc11a,	// (0x0002ad4b) popup_call2_audio_out_window_t4

0xc130,	// (0x0002ad61) popup_call2_audio_out_window_t5_ParamLimits

0xc130,	// (0x0002ad61) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0002e171) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0002e171) popup_call2_audio_out_window_t

0xc194,	// (0x0002adc5) bg_popup_call2_in_pane_ParamLimits

0xc194,	// (0x0002adc5) bg_popup_call2_in_pane

0xc1f0,	// (0x0002ae21) popup_call2_audio_in_window_g1_ParamLimits

0xc1f0,	// (0x0002ae21) popup_call2_audio_in_window_g1

0xc228,	// (0x0002ae59) popup_call2_audio_in_window_g2_ParamLimits

0xc228,	// (0x0002ae59) popup_call2_audio_in_window_g2

0xc260,	// (0x0002ae91) popup_call2_audio_in_window_g3_ParamLimits

0xc260,	// (0x0002ae91) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0002e17e) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0002e17e) popup_call2_audio_in_window_g

0xc2b8,	// (0x0002aee9) popup_call2_audio_in_window_t1_ParamLimits

0xc2b8,	// (0x0002aee9) popup_call2_audio_in_window_t1

0xc338,	// (0x0002af69) popup_call2_audio_in_window_t2_ParamLimits

0xc338,	// (0x0002af69) popup_call2_audio_in_window_t2

0xc3b8,	// (0x0002afe9) popup_call2_audio_in_window_t3_ParamLimits

0xc3b8,	// (0x0002afe9) popup_call2_audio_in_window_t3

0xc3d2,	// (0x0002b003) popup_call2_audio_in_window_t4_ParamLimits

0xc3d2,	// (0x0002b003) popup_call2_audio_in_window_t4

0xc3e4,	// (0x0002b015) popup_call2_audio_in_window_t5_ParamLimits

0xc3e4,	// (0x0002b015) popup_call2_audio_in_window_t5

0xc3f6,	// (0x0002b027) popup_call2_audio_in_window_t6_ParamLimits

0xc3f6,	// (0x0002b027) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0002e187) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0002e187) popup_call2_audio_in_window_t

0xa4ba,	// (0x000290eb) bg_popup_call2_in_pane_g1

0xc50c,	// (0x0002b13d) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0002e1ef) popup_cale_lunar_info_window_t

0xa4c2,	// (0x000290f3) bg_popup_call2_rect_pane_ParamLimits

0xa4c2,	// (0x000290f3) bg_popup_call2_rect_pane

0xa267,	// (0x00028e98) call2_cli_visual_graphic_pane

0xa267,	// (0x00028e98) call2_cli_visual_text_pane

0x13e1,	// (0x00020012) smil_status_volume_pane_g3

0x0002,

0xa5dc,	// (0x0002920d) call2_cli_visual_graphic_pane_g1

0xa5dc,	// (0x0002920d) call2_cli_visual_graphic_pane_g2

0xa5dc,	// (0x0002920d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0002e194) call2_cli_visual_graphic_pane_g

0xc408,	// (0x0002b039) bg_popup_call2_rect_pane_g1

0xa668,	// (0x00029299) bg_popup_call2_rect_pane_g2

0xc410,	// (0x0002b041) bg_popup_call2_rect_pane_g3

0xc418,	// (0x0002b049) bg_popup_call2_rect_pane_g4

0xc420,	// (0x0002b051) bg_popup_call2_rect_pane_g5

0xc428,	// (0x0002b059) bg_popup_call2_rect_pane_g6

0xc430,	// (0x0002b061) bg_popup_call2_rect_pane_g7

0xc438,	// (0x0002b069) bg_popup_call2_rect_pane_g8

0xc440,	// (0x0002b071) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0002e19b) bg_popup_call2_rect_pane_g

0xc448,	// (0x0002b079) bg_popup_call2_bubble_pane_g1

0xc450,	// (0x0002b081) bg_popup_call2_bubble_pane_g2

0xc458,	// (0x0002b089) bg_popup_call2_bubble_pane_g3

0xc460,	// (0x0002b091) bg_popup_call2_bubble_pane_g4

0xc468,	// (0x0002b099) bg_popup_call2_bubble_pane_g5

0xc470,	// (0x0002b0a1) bg_popup_call2_bubble_pane_g6

0xc478,	// (0x0002b0a9) bg_popup_call2_bubble_pane_g7

0xc480,	// (0x0002b0b1) bg_popup_call2_bubble_pane_g8

0xc488,	// (0x0002b0b9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0002e1ae) bg_popup_call2_bubble_pane_g

0x2978,	// (0x000215a9) aid_cale_week_size_cell_pane

0x2fb7,	// (0x00021be8) aid_cams_cif_uncrop_pane_ParamLimits

0x2fb7,	// (0x00021be8) aid_cams_cif_uncrop_pane

0x3114,	// (0x00021d45) aid_cams_size_cell_ParamLimits

0x3114,	// (0x00021d45) aid_cams_size_cell

0x3120,	// (0x00021d51) grid_cams_pane_ParamLimits

0x312e,	// (0x00021d5f) linegrid_cams_pane_ParamLimits

0x3316,	// (0x00021f47) call_video_pane_t1

0x3333,	// (0x00021f64) call_video_pane_t2

0x0001,

0xf26a,	// (0x0002de9b) call_video_pane_t

0x37ff,	// (0x00022430) aid_cale_month_size_cell_pane_ParamLimits

0x37ff,	// (0x00022430) aid_cale_month_size_cell_pane

0xf607,	// (0x0002e238) smil_status_volume_pane_g

0x13ee,	// (0x0002001f) volume_smil_pane_ParamLimits

0x0af4,	// (0x0001f725) aid_popup2_width_pane

0x28be,	// (0x000214ef) cell_qdial_pane_g4_ParamLimits

0x28be,	// (0x000214ef) cell_qdial_pane_g4

0x4720,	// (0x00023351) aid_blid_cardinal_pane_ParamLimits

0x4730,	// (0x00023361) aid_blid_destination_pane_ParamLimits

0x4730,	// (0x00023361) aid_blid_destination_pane

0xa4c2,	// (0x000290f3) bg_popup_call_poc_act_pane_ParamLimits

0xa4c2,	// (0x000290f3) bg_popup_call_poc_act_pane

0xa4c2,	// (0x000290f3) bg_popup_call_poc_inact_pane_ParamLimits

0xa4c2,	// (0x000290f3) bg_popup_call_poc_inact_pane

0xc490,	// (0x0002b0c1) bg_popup_call_poc_act_pane_g1

0xc498,	// (0x0002b0c9) bg_popup_call_poc_act_pane_g2

0xc4a0,	// (0x0002b0d1) bg_popup_call_poc_act_pane_g3

0xc460,	// (0x0002b091) bg_popup_call_poc_act_pane_g4

0xc468,	// (0x0002b099) bg_popup_call_poc_act_pane_g5

0xc4a8,	// (0x0002b0d9) bg_popup_call_poc_act_pane_g6

0xc478,	// (0x0002b0a9) bg_popup_call_poc_act_pane_g7

0xc4b0,	// (0x0002b0e1) bg_popup_call_poc_act_pane_g8

0xa267,	// (0x00028e98) main_usb_pane

0x12ab,	// (0x0001fedc) popup_cale_lunar_info_window

0x364b,	// (0x0002227c) im_reading_pane_t1_ParamLimits

0xa834,	// (0x00029465) list_im_pane_ParamLimits

0xa845,	// (0x00029476) scroll_pane_cp07_ParamLimits

0xa267,	// (0x00028e98) grid_highlight_pane_cp012

0xa4c2,	// (0x000290f3) mup_scale_pane_ParamLimits

0xaddd,	// (0x00029a0e) main_usb_pane_g1_ParamLimits

0xaddd,	// (0x00029a0e) main_usb_pane_g1

0x5253,	// (0x00023e84) main_usb_pane_g2_ParamLimits

0x5253,	// (0x00023e84) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0002e1d8) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0002e1d8) main_usb_pane_g

0x525f,	// (0x00023e90) main_usb_pane_t1_ParamLimits

0x525f,	// (0x00023e90) main_usb_pane_t1

0x5271,	// (0x00023ea2) main_usb_pane_t2_ParamLimits

0x5271,	// (0x00023ea2) main_usb_pane_t2

0x5283,	// (0x00023eb4) main_usb_pane_t3_ParamLimits

0x5283,	// (0x00023eb4) main_usb_pane_t3

0x5295,	// (0x00023ec6) main_usb_pane_t4_ParamLimits

0x5295,	// (0x00023ec6) main_usb_pane_t4

0x52a7,	// (0x00023ed8) main_usb_pane_t5_ParamLimits

0x52a7,	// (0x00023ed8) main_usb_pane_t5

0x52b9,	// (0x00023eea) main_usb_pane_t6_ParamLimits

0x52b9,	// (0x00023eea) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0002e1dd) main_usb_pane_t_ParamLimits

0x46bf,	// (0x000232f0) aid_text_placing

0x46ca,	// (0x000232fb) main_location2_pane_t1_ParamLimits

0x46e0,	// (0x00023311) main_location2_pane_t2_ParamLimits

0x46f6,	// (0x00023327) main_location2_pane_t3_ParamLimits

0x470c,	// (0x0002333d) main_location2_pane_t4_ParamLimits

0x470c,	// (0x0002333d) main_location2_pane_t4

0xf3cb,	// (0x0002dffc) main_location2_pane_t_ParamLimits

0xa4fe,	// (0x0002912f) find_pinb_pane_g2_ParamLimits

0xa4fe,	// (0x0002912f) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0002dd4c) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0002dd4c) find_pinb_pane_g

0xa50a,	// (0x0002913b) find_pinb_pane_t1_ParamLimits

0xa51c,	// (0x0002914d) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0002dd51) find_pinb_pane_t_ParamLimits

0xa267,	// (0x00028e98) main_call3_pane

0x3db2,	// (0x000229e3) cale_month_day_heading_pane_t1_ParamLimits

0x3e34,	// (0x00022a65) cale_month_day_heading_pane_t2_ParamLimits

0x3ead,	// (0x00022ade) cale_month_day_heading_pane_t3_ParamLimits

0x3f26,	// (0x00022b57) cale_month_day_heading_pane_t4_ParamLimits

0x3f9f,	// (0x00022bd0) cale_month_day_heading_pane_t5_ParamLimits

0x4020,	// (0x00022c51) cale_month_day_heading_pane_t6_ParamLimits

0x40a9,	// (0x00022cda) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0002ded3) cale_month_day_heading_pane_t_ParamLimits

0xaabb,	// (0x000296ec) smil_status_volume_pane

0x4e11,	// (0x00023a42) postcard_address_pane_ParamLimits

0x4e11,	// (0x00023a42) postcard_address_pane

0x4e1f,	// (0x00023a50) postcard_message_pane_ParamLimits

0x4e1f,	// (0x00023a50) postcard_message_pane

0x5229,	// (0x00023e5a) call2_cli_visual_pane_t1_ParamLimits

0x5229,	// (0x00023e5a) call2_cli_visual_pane_t1

0x567c,	// (0x000242ad) postcard_message_pane_t1_ParamLimits

0x567c,	// (0x000242ad) postcard_message_pane_t1

0xc6c4,	// (0x0002b2f5) postcard_address_pane_t1_ParamLimits

0xc6c4,	// (0x0002b2f5) postcard_address_pane_t1

0x566d,	// (0x0002429e) popup_call3_audio_in_window_ParamLimits

0x566d,	// (0x0002429e) popup_call3_audio_in_window

0x554b,	// (0x0002417c) bg_popup_call3_in_pane_ParamLimits

0x554b,	// (0x0002417c) bg_popup_call3_in_pane

0x55b3,	// (0x000241e4) popup_call3_audio_in_window_g1_ParamLimits

0x55b3,	// (0x000241e4) popup_call3_audio_in_window_g1

0x55cb,	// (0x000241fc) popup_call3_audio_in_window_g2_ParamLimits

0x55cb,	// (0x000241fc) popup_call3_audio_in_window_g2

0x55e3,	// (0x00024214) popup_call3_audio_in_window_g3_ParamLimits

0x55e3,	// (0x00024214) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0002e23f) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0002e23f) popup_call3_audio_in_window_g

0x560b,	// (0x0002423c) popup_call3_audio_in_window_t1_ParamLimits

0x560b,	// (0x0002423c) popup_call3_audio_in_window_t1

0x5633,	// (0x00024264) popup_call3_audio_in_window_t2_ParamLimits

0x5633,	// (0x00024264) popup_call3_audio_in_window_t2

0x565b,	// (0x0002428c) popup_call3_audio_in_window_t3_ParamLimits

0x565b,	// (0x0002428c) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0002e248) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0002e248) popup_call3_audio_in_window_t

0xa72f,	// (0x00029360) bg_popup_call3_rect_pane

0xc408,	// (0x0002b039) bg_popup_call3_rect_pane_g1

0xa668,	// (0x00029299) bg_popup_call3_rect_pane_g2

0xc410,	// (0x0002b041) bg_popup_call3_rect_pane_g3

0xc418,	// (0x0002b049) bg_popup_call3_rect_pane_g4

0xc420,	// (0x0002b051) bg_popup_call3_rect_pane_g5

0xc428,	// (0x0002b059) bg_popup_call3_rect_pane_g6

0xc430,	// (0x0002b061) bg_popup_call3_rect_pane_g7

0x4a52,	// (0x00023683) mup_visualizer_osc_pane

0xb255,	// (0x00029e86) mup_visualizer_spec_pane

0x556b,	// (0x0002419c) call3_video_qcif_pane_ParamLimits

0x556b,	// (0x0002419c) call3_video_qcif_pane

0x557d,	// (0x000241ae) call3_video_qcif_uncrop_pane_ParamLimits

0x557d,	// (0x000241ae) call3_video_qcif_uncrop_pane

0x558d,	// (0x000241be) call3_video_subqcif_pane_ParamLimits

0x558d,	// (0x000241be) call3_video_subqcif_pane

0x55a1,	// (0x000241d2) call3_video_subqcif_uncrop_pane_ParamLimits

0x55a1,	// (0x000241d2) call3_video_subqcif_uncrop_pane

0x55fb,	// (0x0002422c) popup_call3_audio_in_window_g4_ParamLimits

0x55fb,	// (0x0002422c) popup_call3_audio_in_window_g4

0x553a,	// (0x0002416b) mup_spec_half_pane

0x5543,	// (0x00024174) mup_spec_half_pane_cp

0xc684,	// (0x0002b2b5) mup_osc_middle_pane

0xc68d,	// (0x0002b2be) mup_visualizer_osc_pane_g1

0x551a,	// (0x0002414b) mup_spec_bar_pane_ParamLimits

0x551a,	// (0x0002414b) mup_spec_bar_pane

0xc671,	// (0x0002b2a2) mup_spec_bar_pane_g1

0xc67b,	// (0x0002b2ac) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0002e233) mup_spec_bar_pane_g

0x2978,	// (0x000215a9) aid_cale_week_size_cell_pane_ParamLimits

0x2992,	// (0x000215c3) bg_cale_heading_pane_ParamLimits

0x29bb,	// (0x000215ec) bg_cale_pane_cp01_ParamLimits

0x29dd,	// (0x0002160e) cale_week_corner_pane_ParamLimits

0x29fc,	// (0x0002162d) cale_week_day_heading_pane_ParamLimits

0x2a2a,	// (0x0002165b) cale_week_scroll_pane_g1_ParamLimits

0x2a4e,	// (0x0002167f) cale_week_scroll_pane_g2_ParamLimits

0x2a66,	// (0x00021697) cale_week_scroll_pane_g3_ParamLimits

0x2a7e,	// (0x000216af) cale_week_scroll_pane_g4_ParamLimits

0x2a96,	// (0x000216c7) cale_week_scroll_pane_g5_ParamLimits

0x2aae,	// (0x000216df) cale_week_scroll_pane_g6_ParamLimits

0x2ace,	// (0x000216ff) cale_week_scroll_pane_g7_ParamLimits

0x2aee,	// (0x0002171f) cale_week_scroll_pane_g8_ParamLimits

0x2b0e,	// (0x0002173f) cale_week_scroll_pane_g9_ParamLimits

0x2b2b,	// (0x0002175c) cale_week_scroll_pane_g10_ParamLimits

0x2b48,	// (0x00021779) cale_week_scroll_pane_g11_ParamLimits

0x2b67,	// (0x00021798) cale_week_scroll_pane_g12_ParamLimits

0x2b8c,	// (0x000217bd) cale_week_scroll_pane_g13_ParamLimits

0x2bb5,	// (0x000217e6) cale_week_scroll_pane_g14_ParamLimits

0x2bde,	// (0x0002180f) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0002dddd) cale_week_scroll_pane_g_ParamLimits

0x2c27,	// (0x00021858) cale_week_time_pane_ParamLimits

0x2c47,	// (0x00021878) grid_cale_week_pane_ParamLimits

0xa6a5,	// (0x000292d6) listscroll_cale_week_pane_t1

0xa6b7,	// (0x000292e8) scroll_pane_cp08_ParamLimits

0x3877,	// (0x000224a8) cale_month_corner_pane_ParamLimits

0xaa91,	// (0x000296c2) cale_month_pane_t1

0x3d39,	// (0x0002296a) cale_month_week_pane_ParamLimits

0xaddd,	// (0x00029a0e) popup_call_status_window_g1_ParamLimits

0x454c,	// (0x0002317d) popup_call_status_window_g2_ParamLimits

0x4558,	// (0x00023189) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0002df83) popup_call_status_window_g_ParamLimits

0xae44,	// (0x00029a75) aid_call2_pane

0x4cf8,	// (0x00023929) msg_header_pane_g1

0x4e11,	// (0x00023a42) postcard_address2_pane_ParamLimits

0x4e11,	// (0x00023a42) postcard_address2_pane

0x4e1f,	// (0x00023a50) postcard_message2_pane_ParamLimits

0x4e1f,	// (0x00023a50) postcard_message2_pane

0x54d4,	// (0x00024105) message2_row_pane_ParamLimits

0x54d4,	// (0x00024105) message2_row_pane

0xc62c,	// (0x0002b25d) address2_row_pane_ParamLimits

0xc62c,	// (0x0002b25d) address2_row_pane

0xc63f,	// (0x0002b270) postcard_message2_row_pane_g1

0xc647,	// (0x0002b278) postcard_message2_row_pane_t1

0xc63f,	// (0x0002b270) address2_row_pane_g1

0xc647,	// (0x0002b278) address2_row_pane_t1

0x2e9b,	// (0x00021acc) aid_size_cell_vorec

0xa267,	// (0x00028e98) main_rss_pane

0x54ee,	// (0x0002411f) rss_list_single_pane_ParamLimits

0x54ee,	// (0x0002411f) rss_list_single_pane

0xc655,	// (0x0002b286) rss_list_single_pane_t1

0xc663,	// (0x0002b294) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0002e22e) rss_list_single_pane_t

0xa267,	// (0x00028e98) main_camera2_pane

0xa267,	// (0x00028e98) main_video2_pane

0x144c,	// (0x0002007d) cams_zoom_pane_cp2_ParamLimits

0x144c,	// (0x0002007d) cams_zoom_pane_cp2

0x1458,	// (0x00020089) image2_vga_pane_ParamLimits

0x1458,	// (0x00020089) image2_vga_pane

0x1467,	// (0x00020098) main_camera2_pane_g1_ParamLimits

0x1467,	// (0x00020098) main_camera2_pane_g1

0x1473,	// (0x000200a4) main_camera2_pane_g2_ParamLimits

0x1473,	// (0x000200a4) main_camera2_pane_g2

0x147f,	// (0x000200b0) main_camera2_pane_g3_ParamLimits

0x147f,	// (0x000200b0) main_camera2_pane_g3

0x148b,	// (0x000200bc) main_camera2_pane_g4_ParamLimits

0x148b,	// (0x000200bc) main_camera2_pane_g4

0x1497,	// (0x000200c8) main_camera2_pane_g5_ParamLimits

0x1497,	// (0x000200c8) main_camera2_pane_g5

0x14a3,	// (0x000200d4) main_camera2_pane_g6_ParamLimits

0x14a3,	// (0x000200d4) main_camera2_pane_g6

0x14af,	// (0x000200e0) main_camera2_pane_g7_ParamLimits

0x14af,	// (0x000200e0) main_camera2_pane_g7

0x14bb,	// (0x000200ec) main_camera2_pane_g8_ParamLimits

0x14bb,	// (0x000200ec) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0002e24f) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0002e24f) main_camera2_pane_g

0x14d3,	// (0x00020104) main_camera2_pane_t1_ParamLimits

0x14d3,	// (0x00020104) main_camera2_pane_t1

0x14e5,	// (0x00020116) main_camera2_pane_t2_ParamLimits

0x14e5,	// (0x00020116) main_camera2_pane_t2

0x14f7,	// (0x00020128) main_camera2_pane_t3_ParamLimits

0x14f7,	// (0x00020128) main_camera2_pane_t3

0x1509,	// (0x0002013a) main_camera2_pane_t4_ParamLimits

0x1509,	// (0x0002013a) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0002e262) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0002e262) main_camera2_pane_t

0x1566,	// (0x00020197) cams_zoom_pane_cp4_ParamLimits

0x1566,	// (0x00020197) cams_zoom_pane_cp4

0x1576,	// (0x000201a7) image2_cif_pane_ParamLimits

0x1576,	// (0x000201a7) image2_cif_pane

0x158b,	// (0x000201bc) image2_subqcif_pane_ParamLimits

0x158b,	// (0x000201bc) image2_subqcif_pane

0x159a,	// (0x000201cb) main_video2_pane_g1_ParamLimits

0x159a,	// (0x000201cb) main_video2_pane_g1

0x15ac,	// (0x000201dd) main_video2_pane_g2_ParamLimits

0x15ac,	// (0x000201dd) main_video2_pane_g2

0x15bc,	// (0x000201ed) main_video2_pane_g3_ParamLimits

0x15bc,	// (0x000201ed) main_video2_pane_g3

0x15cc,	// (0x000201fd) main_video2_pane_g4_ParamLimits

0x15cc,	// (0x000201fd) main_video2_pane_g4

0x15dc,	// (0x0002020d) main_video2_pane_g5_ParamLimits

0x15dc,	// (0x0002020d) main_video2_pane_g5

0x15ec,	// (0x0002021d) main_video2_pane_g6_ParamLimits

0x15ec,	// (0x0002021d) main_video2_pane_g6

0x0005,

0xf640,	// (0x0002e271) main_video2_pane_g_ParamLimits

0xf640,	// (0x0002e271) main_video2_pane_g

0x15fe,	// (0x0002022f) main_video2_pane_t1_ParamLimits

0x15fe,	// (0x0002022f) main_video2_pane_t1

0x1618,	// (0x00020249) main_video2_pane_t2_ParamLimits

0x1618,	// (0x00020249) main_video2_pane_t2

0x163e,	// (0x0002026f) main_video2_pane_t3_ParamLimits

0x163e,	// (0x0002026f) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0002e27e) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0002e27e) main_video2_pane_t

0x5370,	// (0x00023fa1) call_muted_g2

0x0001,

0xf5ef,	// (0x0002e220) call_muted_g

0xa267,	// (0x00028e98) main_mup2_pane

0xc6db,	// (0x0002b30c) main_mup2_pane_g1_ParamLimits

0xc6db,	// (0x0002b30c) main_mup2_pane_g1

0x5697,	// (0x000242c8) main_mup2_pane_g2_ParamLimits

0x5697,	// (0x000242c8) main_mup2_pane_g2

0x168d,	// (0x000202be) main_mup_pane_g13_cp1

0x1695,	// (0x000202c6) mup_volume_pane_cp1

0x56b9,	// (0x000242ea) main_mup2_pane_g4_ParamLimits

0x56b9,	// (0x000242ea) main_mup2_pane_g4

0x56ce,	// (0x000242ff) main_mup2_pane_g5_ParamLimits

0x56ce,	// (0x000242ff) main_mup2_pane_g5

0x56e3,	// (0x00024314) main_mup2_pane_g6_ParamLimits

0x56e3,	// (0x00024314) main_mup2_pane_g6

0x56f8,	// (0x00024329) main_mup2_pane_g7_ParamLimits

0x56f8,	// (0x00024329) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0002e285) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0002e285) main_mup2_pane_g

0x5714,	// (0x00024345) main_mup2_pane_t1_ParamLimits

0x5714,	// (0x00024345) main_mup2_pane_t1

0x572b,	// (0x0002435c) main_mup2_pane_t2_ParamLimits

0x572b,	// (0x0002435c) main_mup2_pane_t2

0x5742,	// (0x00024373) main_mup2_pane_t3_ParamLimits

0x5742,	// (0x00024373) main_mup2_pane_t3

0x5759,	// (0x0002438a) main_mup2_pane_t4_ParamLimits

0x5759,	// (0x0002438a) main_mup2_pane_t4

0x5773,	// (0x000243a4) main_mup2_pane_t5_ParamLimits

0x5773,	// (0x000243a4) main_mup2_pane_t5

0x578d,	// (0x000243be) main_mup2_pane_t6_ParamLimits

0x578d,	// (0x000243be) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0002e294) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0002e294) main_mup2_pane_t

0x57c5,	// (0x000243f6) mup2_visualizer_pane_ParamLimits

0x57c5,	// (0x000243f6) mup2_visualizer_pane

0x57fb,	// (0x0002442c) mup_progress_pane_cp_ParamLimits

0x57fb,	// (0x0002442c) mup_progress_pane_cp

0x1678,	// (0x000202a9) mup_volume_pane_cp_ParamLimits

0x1678,	// (0x000202a9) mup_volume_pane_cp

0x5814,	// (0x00024445) mup2_visualizer_pane_g1_ParamLimits

0x5814,	// (0x00024445) mup2_visualizer_pane_g1

0xc6e7,	// (0x0002b318) mup2_visualizer_pane_g2_ParamLimits

0xc6e7,	// (0x0002b318) mup2_visualizer_pane_g2

0x5829,	// (0x0002445a) mup2_visualizer_pane_g3_ParamLimits

0x5829,	// (0x0002445a) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0002e2a1) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0002e2a1) mup2_visualizer_pane_g

0xb4da,	// (0x0002a10b) aid_size_cell_fmradio

0x1227,	// (0x0001fe58) aid_height_parent_landcape

0xa8ef,	// (0x00029520) wml_content_pane_cp

0xa8f7,	// (0x00029528) wml_tabs_pane

0xa900,	// (0x00029531) popup_wml_miniature_window

0xa908,	// (0x00029539) scroll_pane_cp021

0xa91c,	// (0x0002954d) wml_content_pane_comp8

0xa267,	// (0x00028e98) bg_popup_sub_pane_cp05

0xc705,	// (0x0002b336) popup_wml_miniature_window_g1

0xc70d,	// (0x0002b33e) wml_miniature_view_pane

0x5837,	// (0x00024468) aid_size_wml_view

0x583f,	// (0x00024470) wml_miniature_view_pane_g1

0x5848,	// (0x00024479) wml_miniature_view_pane_g2

0x5851,	// (0x00024482) wml_miniature_view_pane_g3

0x5859,	// (0x0002448a) wml_miniature_view_pane_g4

0x5861,	// (0x00024492) wml_miniature_view_pane_g5

0x5869,	// (0x0002449a) wml_miniature_view_pane_g6

0x5871,	// (0x000244a2) wml_miniature_view_pane_g7

0x5879,	// (0x000244aa) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0002e2a8) wml_miniature_view_pane_g

0xc6db,	// (0x0002b30c) background_graphic_ParamLimits

0xc6db,	// (0x0002b30c) background_graphic

0xc715,	// (0x0002b346) wml_tabs_2_pane

0xc71e,	// (0x0002b34f) wml_tabs_3_pane_ParamLimits

0xc71e,	// (0x0002b34f) wml_tabs_3_pane

0xc730,	// (0x0002b361) wml_tabs_4_pane_ParamLimits

0xc730,	// (0x0002b361) wml_tabs_4_pane

0xc746,	// (0x0002b377) wml_tabs_5_pane_ParamLimits

0xc746,	// (0x0002b377) wml_tabs_5_pane

0xc760,	// (0x0002b391) wml_tabs_pane_g2_ParamLimits

0xc760,	// (0x0002b391) wml_tabs_pane_g2

0xc774,	// (0x0002b3a5) wml_tabs_pane_g3_ParamLimits

0xc774,	// (0x0002b3a5) wml_tabs_pane_g3

0x5881,	// (0x000244b2) wml_tabs_2_active_pane_ParamLimits

0x5881,	// (0x000244b2) wml_tabs_2_active_pane

0x5893,	// (0x000244c4) wml_tabs_2_passive_pane_ParamLimits

0x5893,	// (0x000244c4) wml_tabs_2_passive_pane

0x58a5,	// (0x000244d6) wml_tabs_3_active_pane_cp_ParamLimits

0x58a5,	// (0x000244d6) wml_tabs_3_active_pane_cp

0x58b8,	// (0x000244e9) wml_tabs_3_passive_pane_ParamLimits

0x58b8,	// (0x000244e9) wml_tabs_3_passive_pane

0x58c9,	// (0x000244fa) wml_tabs_3_passive_pane_cp_ParamLimits

0x58c9,	// (0x000244fa) wml_tabs_3_passive_pane_cp

0x58de,	// (0x0002450f) tabs_4_active_pane

0x58e6,	// (0x00024517) tabs_4_passive_pane

0x58ee,	// (0x0002451f) tabs_4_passive_pane_cp

0x58f6,	// (0x00024527) tabs_4_passive_pane_cp2

0x524b,	// (0x00023e7c) aid_height_text

0x4a1b,	// (0x0002364c) mup_volume_cont_pane_ParamLimits

0x4a1b,	// (0x0002364c) mup_volume_cont_pane

0x267f,	// (0x000212b0) aid_size_cell_pinb

0x2689,	// (0x000212ba) aid_size_list_pinb

0x57e4,	// (0x00024415) mup2_volume_cont_pane_ParamLimits

0x57e4,	// (0x00024415) mup2_volume_cont_pane

0x1664,	// (0x00020295) mup2_volume_cont_pane_g1_ParamLimits

0x1664,	// (0x00020295) mup2_volume_cont_pane_g1

0x0b00,	// (0x0001f731) aid_size_cell_touch_ParamLimits

0x0b00,	// (0x0001f731) aid_size_cell_touch

0x0d90,	// (0x0001f9c1) touch_pane_ParamLimits

0x0d90,	// (0x0001f9c1) touch_pane

0x0d86,	// (0x0001f9b7) main_rss2_pane

0xc791,	// (0x0002b3c2) listscroll_rss2_pane

0xc79a,	// (0x0002b3cb) rss2_navigation_pane

0xc7a2,	// (0x0002b3d3) list_rss2_pane

0xaf68,	// (0x00029b99) scroll_pane_cp22

0xc7aa,	// (0x0002b3db) rss2_navigation_pane_g1

0xc7b3,	// (0x0002b3e4) rss2_navigation_pane_g2

0xc7bb,	// (0x0002b3ec) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0002e2b9) rss2_navigation_pane_g

0xc7c3,	// (0x0002b3f4) rss2_navigation_pane_t1

0x5900,	// (0x00024531) rss2_list_single_pane_ParamLimits

0x5900,	// (0x00024531) rss2_list_single_pane

0xc7d1,	// (0x0002b402) rss2_list_single_pane_t2

0xc7df,	// (0x0002b410) rss2_list_single_pane_t3_ParamLimits

0xc7df,	// (0x0002b410) rss2_list_single_pane_t3

0xc7fc,	// (0x0002b42d) rss2_list_single_pane_t4

0x4339,	// (0x00022f6a) smil_status_pane_g1

0x1250,	// (0x0001fe81) main_image2_pane_ParamLimits

0x1250,	// (0x0001fe81) main_image2_pane

0x14c7,	// (0x000200f8) main_camera2_pane_g9_ParamLimits

0x14c7,	// (0x000200f8) main_camera2_pane_g9

0x151b,	// (0x0002014c) main_camera2_pane_t5_ParamLimits

0x151b,	// (0x0002014c) main_camera2_pane_t5

0x152d,	// (0x0002015e) main_camera2_pane_t6_ParamLimits

0x152d,	// (0x0002015e) main_camera2_pane_t6

0x5923,	// (0x00024554) main_image2_pane_g1_ParamLimits

0x5923,	// (0x00024554) main_image2_pane_g1

0x4fe8,	// (0x00023c19) smil2_video_pane_ParamLimits

0x4fe8,	// (0x00023c19) smil2_video_pane

0x0b34,	// (0x0001f765) aid_zoom_text_primary_cp

0x0d2d,	// (0x0001f95e) popup_preview_fixed_window

0xa82c,	// (0x0002945d) im_reading_pane_g1

0x1411,	// (0x00020042) cams2_bc_adjust_pane_cp_ParamLimits

0x1411,	// (0x00020042) cams2_bc_adjust_pane_cp

0x1558,	// (0x00020189) cams2_bc_adjust_pane_ParamLimits

0x1558,	// (0x00020189) cams2_bc_adjust_pane

0xd7b2,	// (0x0002c3e3) cams2_bc_adjust_pane_g1

0x169d,	// (0x000202ce) cams2_slider_pane

0x16a6,	// (0x000202d7) cams2_slider_pane_g1

0x16af,	// (0x000202e0) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0002e2c0) cams2_slider_pane_g

0x0e01,	// (0x0001fa32) calc_display_pane_ParamLimits

0x0e1f,	// (0x0001fa50) calc_paper_pane_ParamLimits

0x0e3b,	// (0x0001fa6c) grid_calc_pane_ParamLimits

0x1186,	// (0x0001fdb7) popup_clock_digital_window_t1_ParamLimits

0xb477,	// (0x0002a0a8) main_image_pane_t1

0x0de7,	// (0x0001fa18) aid_size_cell_calc_ParamLimits

0x0de7,	// (0x0001fa18) aid_size_cell_calc

0x1281,	// (0x0001feb2) popup_blid_sat_info2_window_ParamLimits

0x1281,	// (0x0001feb2) popup_blid_sat_info2_window

0xc812,	// (0x0002b443) aid_size_cell_blid

0xc81a,	// (0x0002b44b) bg_popup_window_pane_cp07

0xc83d,	// (0x0002b46e) grid_popup_blid_pane

0xc847,	// (0x0002b478) heading_pane_cp05_ParamLimits

0xc847,	// (0x0002b478) heading_pane_cp05

0xc911,	// (0x0002b542) cell_popup_blid_pane_ParamLimits

0xc911,	// (0x0002b542) cell_popup_blid_pane

0xc93b,	// (0x0002b56c) cell_popup_blid_pane_g1

0xc943,	// (0x0002b574) cell_popup_blid_pane_t1

0x57aa,	// (0x000243db) mup2_indicator_pane_ParamLimits

0x57aa,	// (0x000243db) mup2_indicator_pane

0xa72f,	// (0x00029360) mup2_visualizer_osc_pane

0xc6f3,	// (0x0002b324) mup2_visualizer_spec_pane_ParamLimits

0xc6f3,	// (0x0002b324) mup2_visualizer_spec_pane

0x592f,	// (0x00024560) mup2_spec_half_pane

0x5938,	// (0x00024569) mup2_spec_half_pane_cp

0x5942,	// (0x00024573) mup2_spec_bar_pane_ParamLimits

0x5942,	// (0x00024573) mup2_spec_bar_pane

0xc671,	// (0x0002b2a2) mup2_spec_bar_pane_g1

0xc67b,	// (0x0002b2ac) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0002e233) mup2_spec_bar_pane_g

0x5961,	// (0x00024592) mup2_osc_middle_pane

0xc68d,	// (0x0002b2be) mup2_visualizer_osc_pane_g1

0x9e3f,	// (0x00028a70) popup_number_entry_window_t1_ParamLimits

0x9e52,	// (0x00028a83) popup_number_entry_window_t2_ParamLimits

0x9e64,	// (0x00028a95) popup_number_entry_window_t3_ParamLimits

0x9e76,	// (0x00028aa7) popup_number_entry_window_t5_ParamLimits

0x9e76,	// (0x00028aa7) popup_number_entry_window_t5

0xf0c6,	// (0x0002dcf7) popup_number_entry_window_t_ParamLimits

0x9eab,	// (0x00028adc) text_title_cp2_ParamLimits

0x11c5,	// (0x0001fdf6) aid_hotspot_pointer_text2_pane

0x121b,	// (0x0001fe4c) main_viewer_pane_g9_ParamLimits

0x121b,	// (0x0001fe4c) main_viewer_pane_g9

0xaa91,	// (0x000296c2) cale_month_pane_t1_ParamLimits

0xaace,	// (0x000296ff) bg_cale_pane_ParamLimits

0xaae6,	// (0x00029717) list_cale_pane_ParamLimits

0xaaf7,	// (0x00029728) listscroll_cale_day_pane_t1

0xab09,	// (0x0002973a) scroll_pane_cp09_ParamLimits

0x4a5a,	// (0x0002368b) main_mup_eq_pane_t1_ParamLimits

0x4a5a,	// (0x0002368b) main_mup_eq_pane_t1

0x4a76,	// (0x000236a7) main_mup_eq_pane_t2_ParamLimits

0x4a76,	// (0x000236a7) main_mup_eq_pane_t2

0x4a92,	// (0x000236c3) main_mup_eq_pane_t3_ParamLimits

0x4a92,	// (0x000236c3) main_mup_eq_pane_t3

0x4aac,	// (0x000236dd) main_mup_eq_pane_t4_ParamLimits

0x4aac,	// (0x000236dd) main_mup_eq_pane_t4

0x4ac6,	// (0x000236f7) main_mup_eq_pane_t5_ParamLimits

0x4ac6,	// (0x000236f7) main_mup_eq_pane_t5

0x4ae0,	// (0x00023711) main_mup_eq_pane_t6_ParamLimits

0x4ae0,	// (0x00023711) main_mup_eq_pane_t6

0x4af6,	// (0x00023727) main_mup_eq_pane_t7_ParamLimits

0x4af6,	// (0x00023727) main_mup_eq_pane_t7

0x4b0c,	// (0x0002373d) main_mup_eq_pane_t8_ParamLimits

0x4b0c,	// (0x0002373d) main_mup_eq_pane_t8

0x4b22,	// (0x00023753) main_mup_eq_pane_t9_ParamLimits

0x4b22,	// (0x00023753) main_mup_eq_pane_t9

0x4b3e,	// (0x0002376f) main_mup_eq_pane_t10_ParamLimits

0x4b3e,	// (0x0002376f) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0002e082) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0002e082) main_mup_eq_pane_t

0x4c03,	// (0x00023834) mup_equalizer_pane_cp5_ParamLimits

0x4c1b,	// (0x0002384c) mup_equalizer_pane_cp6_ParamLimits

0x4c33,	// (0x00023864) mup_equalizer_pane_cp7_ParamLimits

0x0d86,	// (0x0001f9b7) main_gallery_pane

0xc696,	// (0x0002b2c7) smil2_volume_pane

0xc69e,	// (0x0002b2cf) smil_status_volume_pane_g1_ParamLimits

0xc6b1,	// (0x0002b2e2) smil_status_volume_pane_g2_ParamLimits

0x13e1,	// (0x00020012) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0002e238) smil_status_volume_pane_g_ParamLimits

0xc81a,	// (0x0002b44b) bg_popup_window_pane_cp07_ParamLimits

0xc828,	// (0x0002b459) blid_firmament_pane

0x596a,	// (0x0002459b) aid_size_cell_gallery_ParamLimits

0x596a,	// (0x0002459b) aid_size_cell_gallery

0x5978,	// (0x000245a9) grid_gallery_pane_ParamLimits

0x5978,	// (0x000245a9) grid_gallery_pane

0x5988,	// (0x000245b9) cell_gallery_pane_ParamLimits

0x5988,	// (0x000245b9) cell_gallery_pane

0xc951,	// (0x0002b582) bg_cell_gallery_focus_pane_ParamLimits

0xc951,	// (0x0002b582) bg_cell_gallery_focus_pane

0xc963,	// (0x0002b594) cell_gallery_pane_g1_ParamLimits

0xc963,	// (0x0002b594) cell_gallery_pane_g1

0x59d3,	// (0x00024604) cell_gallery_pane_g2_ParamLimits

0x59d3,	// (0x00024604) cell_gallery_pane_g2

0x59e0,	// (0x00024611) cell_gallery_pane_g3_ParamLimits

0x59e0,	// (0x00024611) cell_gallery_pane_g3

0xc96f,	// (0x0002b5a0) cell_gallery_pane_g4_ParamLimits

0xc96f,	// (0x0002b5a0) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0002e2e6) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0002e2e6) cell_gallery_pane_g

0xc97b,	// (0x0002b5ac) bg_cell_gallery_focus_pane_g1

0xc983,	// (0x0002b5b4) bg_cell_gallery_focus_pane_g2

0xc98b,	// (0x0002b5bc) bg_cell_gallery_focus_pane_g3

0xc993,	// (0x0002b5c4) bg_cell_gallery_focus_pane_g4

0xc99b,	// (0x0002b5cc) bg_cell_gallery_focus_pane_g5

0xc9a3,	// (0x0002b5d4) bg_cell_gallery_focus_pane_g6

0xc9ab,	// (0x0002b5dc) bg_cell_gallery_focus_pane_g7

0xc9b3,	// (0x0002b5e4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0002e2ef) bg_cell_gallery_focus_pane_g

0xc9bb,	// (0x0002b5ec) aid_firma_cardinal

0xc9cf,	// (0x0002b600) blid_firmament_pane_t1

0xc9e6,	// (0x0002b617) blid_firmament_pane_t2

0xc9fd,	// (0x0002b62e) blid_firmament_pane_t3

0xca14,	// (0x0002b645) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0002e300) blid_firmament_pane_t

0xca2b,	// (0x0002b65c) blid_sat_info_pane

0xca3b,	// (0x0002b66c) blid_sat_info_pane_g1

0xca3b,	// (0x0002b66c) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0002e309) blid_sat_info_pane_g

0xca45,	// (0x0002b676) blid_sat_info_pane_t1

0xca53,	// (0x0002b684) smil2_volume_content_pane

0xca5c,	// (0x0002b68d) smil2_volume_pane_g1

0xa89e,	// (0x000294cf) smil2_volume_content_pane_g1

0xca64,	// (0x0002b695) smil2_volume_content_pane_g2

0xca6d,	// (0x0002b69e) smil2_volume_content_pane_g3

0xca76,	// (0x0002b6a7) smil2_volume_content_pane_g4

0xca7f,	// (0x0002b6b0) smil2_volume_content_pane_g5

0xca88,	// (0x0002b6b9) smil2_volume_content_pane_g6

0xca91,	// (0x0002b6c2) smil2_volume_content_pane_g7

0xca9a,	// (0x0002b6cb) smil2_volume_content_pane_g8

0xcaa3,	// (0x0002b6d4) smil2_volume_content_pane_g9

0xcaac,	// (0x0002b6dd) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0002e30e) smil2_volume_content_pane_g

0x2d08,	// (0x00021939) cale_week_day_heading_pane_t1_ParamLimits

0x2d30,	// (0x00021961) cale_week_day_heading_pane_t2_ParamLimits

0x2d5d,	// (0x0002198e) cale_week_day_heading_pane_t3_ParamLimits

0x2d8a,	// (0x000219bb) cale_week_day_heading_pane_t4_ParamLimits

0x2db7,	// (0x000219e8) cale_week_day_heading_pane_t5_ParamLimits

0x2de4,	// (0x00021a15) cale_week_day_heading_pane_t6_ParamLimits

0x2e11,	// (0x00021a42) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0002ddfe) cale_week_day_heading_pane_t_ParamLimits

0xa6d4,	// (0x00029305) bg_cale_side_pane_ParamLimits

0x0f96,	// (0x0001fbc7) cale_week_time_pane_t1_ParamLimits

0x0fba,	// (0x0001fbeb) cale_week_time_pane_t2_ParamLimits

0x0fde,	// (0x0001fc0f) cale_week_time_pane_t3_ParamLimits

0x1002,	// (0x0001fc33) cale_week_time_pane_t4_ParamLimits

0x1026,	// (0x0001fc57) cale_week_time_pane_t5_ParamLimits

0x104c,	// (0x0001fc7d) cale_week_time_pane_t6_ParamLimits

0x1074,	// (0x0001fca5) cale_week_time_pane_t7_ParamLimits

0x10a0,	// (0x0001fcd1) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0002de0d) cale_week_time_pane_t_ParamLimits

0x2e39,	// (0x00021a6a) cell_cale_week_pane_g2_ParamLimits

0xa6d4,	// (0x00029305) bg_cale_side_pane_cp01_ParamLimits

0x4132,	// (0x00022d63) cale_month_week_pane_t1_ParamLimits

0x414b,	// (0x00022d7c) cale_month_week_pane_t2_ParamLimits

0x4164,	// (0x00022d95) cale_month_week_pane_t3_ParamLimits

0x417d,	// (0x00022dae) cale_month_week_pane_t4_ParamLimits

0x4196,	// (0x00022dc7) cale_month_week_pane_t5_ParamLimits

0x41b3,	// (0x00022de4) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0002dee2) cale_month_week_pane_t_ParamLimits

0x10da,	// (0x0001fd0b) cell_cale_month_pane_g1_ParamLimits

0x0d86,	// (0x0001f9b7) main_cale_event_viewer_pane

0x9e15,	// (0x00028a46) listscroll_cale_event_viewer_pane

0xcab5,	// (0x0002b6e6) list_cale_ev_pane

0xcabd,	// (0x0002b6ee) scroll_pane_cp023

0x59ed,	// (0x0002461e) field_cale_ev_pane_ParamLimits

0x59ed,	// (0x0002461e) field_cale_ev_pane

0xcac9,	// (0x0002b6fa) field_cale_ev_content_pane_ParamLimits

0xcac9,	// (0x0002b6fa) field_cale_ev_content_pane

0xcad5,	// (0x0002b706) field_cale_ev_pane_g1_ParamLimits

0xcad5,	// (0x0002b706) field_cale_ev_pane_g1

0xcae1,	// (0x0002b712) field_cale_ev_pane_g2_ParamLimits

0xcae1,	// (0x0002b712) field_cale_ev_pane_g2

0xcaf9,	// (0x0002b72a) field_cale_ev_pane_g3_ParamLimits

0xcaf9,	// (0x0002b72a) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0002e323) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0002e323) field_cale_ev_pane_g

0xcb11,	// (0x0002b742) field_cale_ev_pane_t1_ParamLimits

0xcb11,	// (0x0002b742) field_cale_ev_pane_t1

0x5a11,	// (0x00024642) field_cale_ev_content_pane_t1_ParamLimits

0x5a11,	// (0x00024642) field_cale_ev_content_pane_t1

0xb315,	// (0x00029f46) bg_button_pane_cp01

0x2966,	// (0x00021597) listscroll_cale_week_pane_ParamLimits

0xa69c,	// (0x000292cd) popup_toolbar_window_cp01

0xa6a5,	// (0x000292d6) listscroll_cale_week_pane_t1_ParamLimits

0x2966,	// (0x00021597) listscroll_cale_day_pane_ParamLimits

0xa69c,	// (0x000292cd) popup_toolbar_window_cp02

0xaaf7,	// (0x00029728) listscroll_cale_day_pane_t1_ParamLimits

0x123e,	// (0x0001fe6f) main_cale_month_pane_ParamLimits

0x13a0,	// (0x0001ffd1) popup_toolbar_window_cp03_ParamLimits

0x13a0,	// (0x0001ffd1) popup_toolbar_window_cp03

0x4ef8,	// (0x00023b29) main_image_pane_g2_ParamLimits

0x4ef8,	// (0x00023b29) main_image_pane_g2

0x4f04,	// (0x00023b35) main_image_pane_g3_ParamLimits

0x4f04,	// (0x00023b35) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0002e114) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0002e114) main_image_pane_g

0xb477,	// (0x0002a0a8) main_image_pane_t1_ParamLimits

0x4f10,	// (0x00023b41) main_image_pane_t2_ParamLimits

0x4f10,	// (0x00023b41) main_image_pane_t2

0x4f22,	// (0x00023b53) main_image_pane_t3_ParamLimits

0x4f22,	// (0x00023b53) main_image_pane_t3

0x4f34,	// (0x00023b65) main_image_pane_t4_ParamLimits

0x4f34,	// (0x00023b65) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0002e11b) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0002e11b) main_image_pane_t

0x4f46,	// (0x00023b77) popup_image_details_window_cp01

0x4f50,	// (0x00023b81) popup_toobar_trans_pane_cp01_ParamLimits

0x4f50,	// (0x00023b81) popup_toobar_trans_pane_cp01

0x12e2,	// (0x0001ff13) popup_image_details_window_ParamLimits

0x12e2,	// (0x0001ff13) popup_image_details_window

0x12f0,	// (0x0001ff21) popup_image_focus_window

0x1403,	// (0x00020034) camera2_autofocus_pane_ParamLimits

0x1403,	// (0x00020034) camera2_autofocus_pane

0x9e15,	// (0x00028a46) bg_popup_sub_pane_cp06

0xcb28,	// (0x0002b759) popup_image_focus_window_g1

0xcb30,	// (0x0002b761) popup_image_focus_window_g2

0xcb38,	// (0x0002b769) popup_image_focus_window_g3

0xcb40,	// (0x0002b771) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0002e32a) popup_image_focus_window_g

0xcb48,	// (0x0002b779) popup_image_focus_window_t1

0xcb56,	// (0x0002b787) popup_image_focus_window_t2

0xcb66,	// (0x0002b797) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0002e333) popup_image_focus_window_t

0xcb74,	// (0x0002b7a5) camera2_autofocus_pane_g1

0xa890,	// (0x000294c1) bg_tb_trans_pane_cp01

0xcb82,	// (0x0002b7b3) popup_image_details_window_g1

0xcb95,	// (0x0002b7c6) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0002e345) popup_image_details_window_g

0xcbbe,	// (0x0002b7ef) popup_image_details_window_t1

0xcbd0,	// (0x0002b801) popup_image_details_window_t2

0xcbe9,	// (0x0002b81a) popup_image_details_window_t3

0xcbfd,	// (0x0002b82e) popup_image_details_window_t4

0xcc18,	// (0x0002b849) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0002e34c) popup_image_details_window_t

0xa573,	// (0x000291a4) bg_calc_paper_pane_ParamLimits

0x0d86,	// (0x0001f9b7) grid_highlight_pane_cp013

0x0e67,	// (0x0001fa98) list_calc_pane_ParamLimits

0x0e79,	// (0x0001faaa) scroll_pane_cp024

0xa587,	// (0x000291b8) bg_calc_display_pane_ParamLimits

0x0e81,	// (0x0001fab2) calc_display_pane_t1_ParamLimits

0x0e96,	// (0x0001fac7) calc_display_pane_t2_ParamLimits

0x0eab,	// (0x0001fadc) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0002dd7e) calc_display_pane_t_ParamLimits

0x0f16,	// (0x0001fb47) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0002dd9b) cell_calc_pane_g

0x0f1f,	// (0x0001fb50) cell_calc_pane_t1

0xa5e6,	// (0x00029217) grid_highlight_pane_cp02_ParamLimits

0xa5fc,	// (0x0002922d) toolbar_button_pane_cp01_ParamLimits

0xa5fc,	// (0x0002922d) toolbar_button_pane_cp01

0xb4bc,	// (0x0002a0ed) temp_image_control_pane_ParamLimits

0xb4bc,	// (0x0002a0ed) temp_image_control_pane

0x1250,	// (0x0001fe81) main_mp3_pane

0xcc32,	// (0x0002b863) temp_image_control_pane_g1_ParamLimits

0xcc32,	// (0x0002b863) temp_image_control_pane_g1

0xcc40,	// (0x0002b871) temp_image_control_pane_g2_ParamLimits

0xcc40,	// (0x0002b871) temp_image_control_pane_g2

0xcc52,	// (0x0002b883) temp_image_control_pane_g3_ParamLimits

0xcc52,	// (0x0002b883) temp_image_control_pane_g3

0x5a5c,	// (0x0002468d) temp_image_control_pane_g4_ParamLimits

0x5a5c,	// (0x0002468d) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0002e357) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0002e357) temp_image_control_pane_g

0xcc32,	// (0x0002b863) main_mp3_pane_g1

0x5a6d,	// (0x0002469e) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0002e360) main_mp3_pane_g

0xcc95,	// (0x0002b8c6) main_mp3_pane_t1

0xa737,	// (0x00029368) main_camera_pane_g8_ParamLimits

0xa737,	// (0x00029368) main_camera_pane_g8

0x30ca,	// (0x00021cfb) main_video_pane_g7_ParamLimits

0x30ca,	// (0x00021cfb) main_video_pane_g7

0x1546,	// (0x00020177) main_camera2_pane_t7_ParamLimits

0x1546,	// (0x00020177) main_camera2_pane_t7

0xa8af,	// (0x000294e0) scroll_pane_cp025_ParamLimits

0xa8af,	// (0x000294e0) scroll_pane_cp025

0xa8c3,	// (0x000294f4) scroll_pane_cp026_ParamLimits

0xa8c3,	// (0x000294f4) scroll_pane_cp026

0xa8d2,	// (0x00029503) wml_content_pane_ParamLimits

0x0d86,	// (0x0001f9b7) main_touch_calib_pane

0x5b11,	// (0x00024742) main_touch_calib_pane_g1

0x5b1d,	// (0x0002474e) main_touch_calib_pane_g2

0x5b29,	// (0x0002475a) main_touch_calib_pane_g3

0x5b35,	// (0x00024766) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0002e37e) main_touch_calib_pane_g

0x5b41,	// (0x00024772) main_touch_calib_pane_t1

0x5b58,	// (0x00024789) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0002e387) main_touch_calib_pane_t

0xb037,	// (0x00029c68) mup_progress_pane_cp02

0xb06c,	// (0x00029c9d) navi_pane_g1

0xb127,	// (0x00029d58) navi_pane_mp_t3

0x1250,	// (0x0001fe81) main_mp3_pane_ParamLimits

0x5486,	// (0x000240b7) navi_pane_ParamLimits

0xcc32,	// (0x0002b863) main_mp3_pane_g1_ParamLimits

0x5a6d,	// (0x0002469e) main_mp3_pane_g2_ParamLimits

0x5a79,	// (0x000246aa) main_mp3_pane_g3_ParamLimits

0x5a79,	// (0x000246aa) main_mp3_pane_g3

0x5a85,	// (0x000246b6) main_mp3_pane_g4_ParamLimits

0x5a85,	// (0x000246b6) main_mp3_pane_g4

0xcc62,	// (0x0002b893) main_mp3_pane_g5_ParamLimits

0xcc62,	// (0x0002b893) main_mp3_pane_g5

0xcc70,	// (0x0002b8a1) main_mp3_pane_g6_ParamLimits

0xcc70,	// (0x0002b8a1) main_mp3_pane_g6

0xcc7d,	// (0x0002b8ae) main_mp3_pane_g7_ParamLimits

0xcc7d,	// (0x0002b8ae) main_mp3_pane_g7

0xcc89,	// (0x0002b8ba) main_mp3_pane_g8_ParamLimits

0xcc89,	// (0x0002b8ba) main_mp3_pane_g8

0xf72f,	// (0x0002e360) main_mp3_pane_g_ParamLimits

0x5a91,	// (0x000246c2) main_mp3_pane_t2

0x5aa1,	// (0x000246d2) main_mp3_pane_t3

0xcca3,	// (0x0002b8d4) main_mp3_pane_t4

0xccb1,	// (0x0002b8e2) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0002e371) main_mp3_pane_t

0xccbf,	// (0x0002b8f0) mup_progress_pane_cp01

0x0b34,	// (0x0001f765) aid_zoom_text_secondary2

0xcab5,	// (0x0002b6e6) list_cale_ev2_pane

0xcabd,	// (0x0002b6ee) scroll_pane_cp023_ParamLimits

0x5bb3,	// (0x000247e4) field_cale_ev2_pane_ParamLimits

0x5bb3,	// (0x000247e4) field_cale_ev2_pane

0x5bce,	// (0x000247ff) field_cale_ev2_pane_g1_ParamLimits

0x5bce,	// (0x000247ff) field_cale_ev2_pane_g1

0x5bda,	// (0x0002480b) field_cale_ev2_pane_g2_ParamLimits

0x5bda,	// (0x0002480b) field_cale_ev2_pane_g2

0x5bf2,	// (0x00024823) field_cale_ev2_pane_g3_ParamLimits

0x5bf2,	// (0x00024823) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0002e392) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0002e392) field_cale_ev2_pane_g

0x5c0a,	// (0x0002483b) field_cale_ev2_pane_t1_ParamLimits

0x5c0a,	// (0x0002483b) field_cale_ev2_pane_t1

0x5c21,	// (0x00024852) field_cale_ev2_pane_t2_ParamLimits

0x5c21,	// (0x00024852) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0002e39b) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0002e39b) field_cale_ev2_pane_t

0x4dd7,	// (0x00023a08) main_postcard_pane_g5_ParamLimits

0x4dd7,	// (0x00023a08) main_postcard_pane_g5

0x4de5,	// (0x00023a16) main_postcard_pane_g6_ParamLimits

0x4de5,	// (0x00023a16) main_postcard_pane_g6

0x2f08,	// (0x00021b39) camera2_autofocus_pane_cp_ParamLimits

0x2f08,	// (0x00021b39) camera2_autofocus_pane_cp

0x1250,	// (0x0001fe81) main_mup3_pane

0x5c79,	// (0x000248aa) main_mup3_pane_g1_ParamLimits

0x5c79,	// (0x000248aa) main_mup3_pane_g1

0x5c9a,	// (0x000248cb) main_mup3_pane_g2_ParamLimits

0x5c9a,	// (0x000248cb) main_mup3_pane_g2

0x5d0e,	// (0x0002493f) main_mup3_pane_g3_ParamLimits

0x5d0e,	// (0x0002493f) main_mup3_pane_g3

0x5d73,	// (0x000249a4) main_mup3_pane_g4_ParamLimits

0x5d73,	// (0x000249a4) main_mup3_pane_g4

0x5dd8,	// (0x00024a09) main_mup3_pane_g5_ParamLimits

0x5dd8,	// (0x00024a09) main_mup3_pane_g5

0x5e3d,	// (0x00024a6e) main_mup3_pane_g6_ParamLimits

0x5e3d,	// (0x00024a6e) main_mup3_pane_g6

0xccd3,	// (0x0002b904) main_mup3_pane_g7_ParamLimits

0xccd3,	// (0x0002b904) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0002e3ab) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0002e3ab) main_mup3_pane_g

0x5eb3,	// (0x00024ae4) main_mup3_pane_t1_ParamLimits

0x5eb3,	// (0x00024ae4) main_mup3_pane_t1

0x5f1e,	// (0x00024b4f) main_mup3_pane_t2_ParamLimits

0x5f1e,	// (0x00024b4f) main_mup3_pane_t2

0x5fe3,	// (0x00024c14) main_mup3_pane_t4_ParamLimits

0x5fe3,	// (0x00024c14) main_mup3_pane_t4

0x6037,	// (0x00024c68) main_mup3_pane_t5_ParamLimits

0x6037,	// (0x00024c68) main_mup3_pane_t5

0x60e7,	// (0x00024d18) main_mup3_pane_t6_ParamLimits

0x60e7,	// (0x00024d18) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0002e3bc) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0002e3bc) main_mup3_pane_t

0x6191,	// (0x00024dc2) mup3_progress_pane_ParamLimits

0x6191,	// (0x00024dc2) mup3_progress_pane

0x620f,	// (0x00024e40) popup_mup3_control_window_ParamLimits

0x620f,	// (0x00024e40) popup_mup3_control_window

0xcce1,	// (0x0002b912) popup_mup3_text_window

0x622c,	// (0x00024e5d) mup3_progress_pane_t1

0x624b,	// (0x00024e7c) mup3_progress_pane_t2

0xcce9,	// (0x0002b91a) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0002e3c9) mup3_progress_pane_t

0xcd06,	// (0x0002b937) mup_progress_pane_cp03

0x9e15,	// (0x00028a46) bg_tb_trans_pane_cp04

0x626a,	// (0x00024e9b) mup3_volume_pane

0x6272,	// (0x00024ea3) popup_mup3_control_window_g1

0xd39d,	// (0x0002bfce) mup3_volume_pane_g1

0xd3a6,	// (0x0002bfd7) mup3_volume_pane_g2

0xd3af,	// (0x0002bfe0) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0002e3d0) mup3_volume_pane_g

0x9e15,	// (0x00028a46) bg_tb_trans_pane_cp03

0xcd16,	// (0x0002b947) popup_mup3_text_window_g1

0xcd1e,	// (0x0002b94f) popup_mup3_text_window_t1

0xa5cf,	// (0x00029200) list_calc_item_pane_g1_ParamLimits

0xc788,	// (0x0002b3b9) mup_volume_pane_cp_g1

0x5b71,	// (0x000247a2) main_touch_calib_pane_t3

0x5b87,	// (0x000247b8) main_touch_calib_pane_t4

0x5b9d,	// (0x000247ce) main_touch_calib_pane_t5

0x0aec,	// (0x0001f71d) aid_cell_size_toolbar2

0x0af4,	// (0x0001f725) aid_popup3_width_pane

0x0b34,	// (0x0001f765) aid_zoom_text_msg_primary

0x2ee5,	// (0x00021b16) vorec_t7

0xa593,	// (0x000291c4) bg_calc_paper_pane_g1_ParamLimits

0xa59f,	// (0x000291d0) bg_calc_paper_pane_g2_ParamLimits

0xa5ab,	// (0x000291dc) bg_calc_paper_pane_g3_ParamLimits

0xa5b7,	// (0x000291e8) bg_calc_paper_pane_g4_ParamLimits

0xa5c3,	// (0x000291f4) bg_calc_paper_pane_g5_ParamLimits

0x283b,	// (0x0002146c) bg_calc_paper_pane_g6_ParamLimits

0x284c,	// (0x0002147d) bg_calc_paper_pane_g7_ParamLimits

0x285d,	// (0x0002148e) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0002dd85) bg_calc_paper_pane_g_ParamLimits

0x286e,	// (0x0002149f) calc_bg_paper_pane_g9_ParamLimits

0x2ff9,	// (0x00021c2a) image_qvga_pane_ParamLimits

0x2ff9,	// (0x00021c2a) image_qvga_pane

0xa4c2,	// (0x000290f3) bg_popup_sub_pane_cp04_ParamLimits

0xb3f3,	// (0x0002a024) popup_mup_playback_window_g1_ParamLimits

0xb3ff,	// (0x0002a030) popup_mup_playback_window_t1_ParamLimits

0xb414,	// (0x0002a045) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0002e10f) popup_mup_playback_window_t_ParamLimits

0x56a8,	// (0x000242d9) main_mup2_pane_g3_ParamLimits

0x56a8,	// (0x000242d9) main_mup2_pane_g3

0x33bc,	// (0x00021fed) popup_toolbar_window_cp04

0xb80f,	// (0x0002a440) popup_call2_audio_second_window_g3_ParamLimits

0xb80f,	// (0x0002a440) popup_call2_audio_second_window_g3

0xbc19,	// (0x0002a84a) popup_call2_audio_first_window_g4_ParamLimits

0xbc19,	// (0x0002a84a) popup_call2_audio_first_window_g4

0xc298,	// (0x0002aec9) popup_call2_audio_in_window_g4_ParamLimits

0xc298,	// (0x0002aec9) popup_call2_audio_in_window_g4

0x4eeb,	// (0x00023b1c) aid_area_sk_bg_cut_ParamLimits

0x4eeb,	// (0x00023b1c) aid_area_sk_bg_cut

0xb429,	// (0x0002a05a) aid_area_sk_bg_cut_2_ParamLimits

0xb429,	// (0x0002a05a) aid_area_sk_bg_cut_2

0x59c3,	// (0x000245f4) aid_placing_details_win

0x59cb,	// (0x000245fc) aid_placing_details_win_2

0xcb74,	// (0x0002b7a5) camera2_autofocus_pane_g1_ParamLimits

0x0d1e,	// (0x0001f94f) popup_fixed_preview_cale_window_ParamLimits

0x0d1e,	// (0x0001f94f) popup_fixed_preview_cale_window

0xb1a7,	// (0x00029dd8) navi_slider_pane_g3

0xb1b0,	// (0x00029de1) navi_slider_pane_g4

0xb1b9,	// (0x00029dea) navi_slider_pane_g5

0xb1a7,	// (0x00029dd8) navi_slider_pane_g6

0x11ac,	// (0x0001fddd) navi_slider_pane_g7

0xb2da,	// (0x00029f0b) mup_scale_pane_g3

0xb2e3,	// (0x00029f14) mup_scale_pane_g4

0xb2ec,	// (0x00029f1d) mup_scale_pane_g5

0x4c4b,	// (0x0002387c) mup_scale_pane_g6

0x4c54,	// (0x00023885) mup_scale_pane_g7

0xb1a7,	// (0x00029dd8) cams2_slider_pane_g3

0xc80a,	// (0x0002b43b) cams2_slider_pane_g4

0x16b8,	// (0x000202e9) cams2_slider_pane_g5

0xb1a7,	// (0x00029dd8) cams2_slider_pane_g6

0x16c0,	// (0x000202f1) cams2_slider_pane_g7

0xca3b,	// (0x0002b66c) camera2_autofocus_pane_cp_g1

0xc5f7,	// (0x0002b228) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5f7,	// (0x0002b228) bg_popup_preview_window_pane_cp02

0xcd2c,	// (0x0002b95d) list_fp_cale_pane_ParamLimits

0xcd2c,	// (0x0002b95d) list_fp_cale_pane

0xcd38,	// (0x0002b969) popup_fixed_preview_cale_window_t1_ParamLimits

0xcd38,	// (0x0002b969) popup_fixed_preview_cale_window_t1

0x627b,	// (0x00024eac) popup_fixed_preview_cale_window_t2_ParamLimits

0x627b,	// (0x00024eac) popup_fixed_preview_cale_window_t2

0x6290,	// (0x00024ec1) popup_fixed_preview_cale_window_t3_ParamLimits

0x6290,	// (0x00024ec1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0002e3d7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0002e3d7) popup_fixed_preview_cale_window_t

0x62a5,	// (0x00024ed6) list_single_fp_cale_pane_ParamLimits

0x62a5,	// (0x00024ed6) list_single_fp_cale_pane

0xcd56,	// (0x0002b987) list_single_fp_cale_pane_g1_ParamLimits

0xcd56,	// (0x0002b987) list_single_fp_cale_pane_g1

0xcd62,	// (0x0002b993) list_single_fp_cale_pane_g2_ParamLimits

0xcd62,	// (0x0002b993) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0002e3de) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0002e3de) list_single_fp_cale_pane_g

0xcd7b,	// (0x0002b9ac) list_single_fp_cale_pane_t1_ParamLimits

0xcd7b,	// (0x0002b9ac) list_single_fp_cale_pane_t1

0xcd8d,	// (0x0002b9be) list_single_fp_cale_pane_t2_ParamLimits

0xcd8d,	// (0x0002b9be) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0002e3e5) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0002e3e5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0d86,	// (0x0001f9b7) main_dialer_pane

0x62b5,	// (0x00024ee6) aid_cell_size_keypad

0x62bf,	// (0x00024ef0) dialer_ne_pane

0x62c9,	// (0x00024efa) grid_dialer_command_1_pane

0x62d1,	// (0x00024f02) grid_dialer_command_2_pane

0x62d9,	// (0x00024f0a) grid_dialer_keypad_pane

0x62ed,	// (0x00024f1e) bg_popup_call_pane_cp06_ParamLimits

0x62ed,	// (0x00024f1e) bg_popup_call_pane_cp06

0x62f9,	// (0x00024f2a) dialer_ne_clear_pane_ParamLimits

0x62f9,	// (0x00024f2a) dialer_ne_clear_pane

0xcdc0,	// (0x0002b9f1) dialer_ne_pane_g1

0xcdc8,	// (0x0002b9f9) dialer_ne_pane_t1_ParamLimits

0xcdc8,	// (0x0002b9f9) dialer_ne_pane_t1

0x6305,	// (0x00024f36) dialer_ne_pane_t2_ParamLimits

0x6305,	// (0x00024f36) dialer_ne_pane_t2

0x6322,	// (0x00024f53) dialer_ne_pane_t3_ParamLimits

0x6322,	// (0x00024f53) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0002e3ea) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0002e3ea) dialer_ne_pane_t

0x6346,	// (0x00024f77) dialer_ne_pane_t3_copy1_ParamLimits

0x6346,	// (0x00024f77) dialer_ne_pane_t3_copy1

0x636a,	// (0x00024f9b) cell_dialer_keypad_pane_ParamLimits

0x636a,	// (0x00024f9b) cell_dialer_keypad_pane

0x6381,	// (0x00024fb2) cell_dialer_command_1_pane_ParamLimits

0x6381,	// (0x00024fb2) cell_dialer_command_1_pane

0x6397,	// (0x00024fc8) cell_dialer_command_2_pane_ParamLimits

0x6397,	// (0x00024fc8) cell_dialer_command_2_pane

0xcdda,	// (0x0002ba0b) bg_button_pane_cp02_ParamLimits

0xcdda,	// (0x0002ba0b) bg_button_pane_cp02

0x63a6,	// (0x00024fd7) cell_dialer_keypad_pane_g1_ParamLimits

0x63a6,	// (0x00024fd7) cell_dialer_keypad_pane_g1

0xcdda,	// (0x0002ba0b) bg_button_pane_cp03_ParamLimits

0xcdda,	// (0x0002ba0b) bg_button_pane_cp03

0x63bb,	// (0x00024fec) cell_dialer_command_1_pane_g1_ParamLimits

0x63bb,	// (0x00024fec) cell_dialer_command_1_pane_g1

0xcde6,	// (0x0002ba17) bg_button_pane_cp04

0x63cf,	// (0x00025000) cell_dialer_command_2_pane_g1

0xa72f,	// (0x00029360) bg_button_pane_cp06

0xcdee,	// (0x0002ba1f) dialer_ne_clear_pane_g1

0xb078,	// (0x00029ca9) navi_pane_g2

0xb0a6,	// (0x00029cd7) navi_pane_g3

0x0002,

0xf3e1,	// (0x0002e012) navi_pane_g

0xb135,	// (0x00029d66) navi_pane_mv_g2

0xb15e,	// (0x00029d8f) navi_pane_mv_g5

0x47ad,	// (0x000233de) navi_pane_mv_t1

0xa587,	// (0x000291b8) main_clock2_pane

0xd3b8,	// (0x0002bfe9) main_clock2_list_pane_ParamLimits

0xd3b8,	// (0x0002bfe9) main_clock2_list_pane

0x642a,	// (0x0002505b) main_clock2_pane_t1_ParamLimits

0x642a,	// (0x0002505b) main_clock2_pane_t1

0x6458,	// (0x00025089) main_clock2_pane_t2_ParamLimits

0x6458,	// (0x00025089) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0002e3f6) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0002e3f6) main_clock2_pane_t

0x64bd,	// (0x000250ee) popup_clock_analogue_window_cp03_ParamLimits

0x64bd,	// (0x000250ee) popup_clock_analogue_window_cp03

0x64db,	// (0x0002510c) popup_clock_digital_window_cp02_ParamLimits

0x64db,	// (0x0002510c) popup_clock_digital_window_cp02

0x6550,	// (0x00025181) main_clock2_list_single_pane_ParamLimits

0x6550,	// (0x00025181) main_clock2_list_single_pane

0xa72f,	// (0x00029360) list_highlight_pane_cp05

0xce26,	// (0x0002ba57) main_clock2_list_single_pane_t1

0x33bc,	// (0x00021fed) popup_toolbar_window_cp04_ParamLimits

0x5a2c,	// (0x0002465d) camera2_autofocus_pane_g2_ParamLimits

0x5a2c,	// (0x0002465d) camera2_autofocus_pane_g2

0x5a38,	// (0x00024669) camera2_autofocus_pane_g3_ParamLimits

0x5a38,	// (0x00024669) camera2_autofocus_pane_g3

0x5a44,	// (0x00024675) camera2_autofocus_pane_g4_ParamLimits

0x5a44,	// (0x00024675) camera2_autofocus_pane_g4

0x5a50,	// (0x00024681) camera2_autofocus_pane_g5_ParamLimits

0x5a50,	// (0x00024681) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0002e33a) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0002e33a) camera2_autofocus_pane_g

0x5c36,	// (0x00024867) camera2_autofocus_pane_cp_g2

0x5c3e,	// (0x0002486f) camera2_autofocus_pane_cp_g3

0x5c46,	// (0x00024877) camera2_autofocus_pane_cp_g4

0x5c4e,	// (0x0002487f) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0002e3a0) camera2_autofocus_pane_cp_g

0x62e5,	// (0x00024f16) popup_dialer_spcha_window

0x9e15,	// (0x00028a46) bg_popup_sub_pane_cp07

0xce34,	// (0x0002ba65) list_spcha_pane

0xce3c,	// (0x0002ba6d) list_single_spcha_pane_ParamLimits

0xce3c,	// (0x0002ba6d) list_single_spcha_pane

0x9e15,	// (0x00028a46) list_highlight_pane_cp06

0xce4d,	// (0x0002ba7e) list_single_spcha_pane_t1

0xc042,	// (0x0002ac73) popup_call2_audio_out_window_g4_ParamLimits

0xc042,	// (0x0002ac73) popup_call2_audio_out_window_g4

0x0d86,	// (0x0001f9b7) main_imed2_pane

0x12fa,	// (0x0001ff2b) popup_imed_adjust2_window

0x130d,	// (0x0001ff3e) popup_imed_trans_window_ParamLimits

0x130d,	// (0x0001ff3e) popup_imed_trans_window

0xc873,	// (0x0002b4a4) popup_blid_sat_info2_window_t1

0xc881,	// (0x0002b4b2) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0002e2cf) popup_blid_sat_info2_window_t

0x6562,	// (0x00025193) aid_size_cell_colour_35

0x657c,	// (0x000251ad) aid_size_cell_colour_112

0x6593,	// (0x000251c4) aid_size_cell_effect

0xa890,	// (0x000294c1) bg_tb_trans_pane_cp02

0xb26f,	// (0x00029ea0) heading_imed_pane

0x65ad,	// (0x000251de) listscroll_imed_pane

0xce5b,	// (0x0002ba8c) heading_imed_pane_g1

0xce63,	// (0x0002ba94) heading_imed_pane_t1

0xce71,	// (0x0002baa2) grid_imed_colour_35_pane_ParamLimits

0xce71,	// (0x0002baa2) grid_imed_colour_35_pane

0x65b9,	// (0x000251ea) grid_imed_effect_pane

0xce8d,	// (0x0002babe) list_imed_aspect_pane

0x65c9,	// (0x000251fa) scroll_pane_cp027_ParamLimits

0x65c9,	// (0x000251fa) scroll_pane_cp027

0x65d5,	// (0x00025206) cell_imed_effect_pane_ParamLimits

0x65d5,	// (0x00025206) cell_imed_effect_pane

0xce95,	// (0x0002bac6) cell_imed_colour_pane_ParamLimits

0xce95,	// (0x0002bac6) cell_imed_colour_pane

0xcedf,	// (0x0002bb10) cell_imed_colour_pane_g1_ParamLimits

0xcedf,	// (0x0002bb10) cell_imed_colour_pane_g1

0xcef0,	// (0x0002bb21) hgihlgiht_grid_pane_cp016_ParamLimits

0xcef0,	// (0x0002bb21) hgihlgiht_grid_pane_cp016

0x65f1,	// (0x00025222) cell_imed_effect_pane_g1

0x65f9,	// (0x0002522a) grid_highlight_pane_cp017

0xcf01,	// (0x0002bb32) list_imed_single_pane_ParamLimits

0xcf01,	// (0x0002bb32) list_imed_single_pane

0x9e15,	// (0x00028a46) list_highlight_pane_cp07

0xcf15,	// (0x0002bb46) list_imed_aspect_pane_comp1_t1

0xc603,	// (0x0002b234) bg_tb_trans_pane_cp05

0xcf37,	// (0x0002bb68) popup_imed_adjust2_window_g1

0xcf5e,	// (0x0002bb8f) popup_imed_adjust2_window_t1

0xcf76,	// (0x0002bba7) slider_imed_adjust_pane

0xcf8a,	// (0x0002bbbb) slider_imed_adjust_pane_g1

0xcf9a,	// (0x0002bbcb) slider_imed_adjust_pane_g2

0xcfaa,	// (0x0002bbdb) slider_imed_adjust_pane_g3

0xcfbb,	// (0x0002bbec) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0002e413) slider_imed_adjust_pane_g

0x6602,	// (0x00025233) aid_size_cell_clipart2

0xcfcc,	// (0x0002bbfd) grid_imed_clipart_pane

0xcfd6,	// (0x0002bc07) scroll_pane_cp031

0x660e,	// (0x0002523f) cell_imed_clipart_pane_ParamLimits

0x660e,	// (0x0002523f) cell_imed_clipart_pane

0x662c,	// (0x0002525d) cell_imed_clipart_pane_g1

0x9e15,	// (0x00028a46) grid_highlight_pane_cp014

0x640c,	// (0x0002503d) main_clock2_pane_g1_ParamLimits

0x640c,	// (0x0002503d) main_clock2_pane_g1

0x64f7,	// (0x00025128) aid_call2_pane_cp10

0x6509,	// (0x0002513a) aid_call_pane_cp10

0xafd7,	// (0x00029c08) popup_clock_analogue_window_cp10_g1

0xafd7,	// (0x00029c08) popup_clock_analogue_window_cp10_g2

0x651b,	// (0x0002514c) popup_clock_analogue_window_cp10_g3

0x651b,	// (0x0002514c) popup_clock_analogue_window_cp10_g4

0xafd7,	// (0x00029c08) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0002e401) popup_clock_analogue_window_cp10_g

0x6531,	// (0x00025162) popup_clock_analogue_window_cp10_t1

0x16c9,	// (0x000202fa) clock_digital_number_pane_cp10_ParamLimits

0x16c9,	// (0x000202fa) clock_digital_number_pane_cp10

0x16e3,	// (0x00020314) clock_digital_number_pane_cp11_ParamLimits

0x16e3,	// (0x00020314) clock_digital_number_pane_cp11

0x16fd,	// (0x0002032e) clock_digital_number_pane_cp12_ParamLimits

0x16fd,	// (0x0002032e) clock_digital_number_pane_cp12

0x1717,	// (0x00020348) clock_digital_number_pane_cp13_ParamLimits

0x1717,	// (0x00020348) clock_digital_number_pane_cp13

0x1733,	// (0x00020364) clock_digital_separator_pane_cp10_ParamLimits

0x1733,	// (0x00020364) clock_digital_separator_pane_cp10

0x174d,	// (0x0002037e) popup_clock_digital_window_cp02_t1_ParamLimits

0x174d,	// (0x0002037e) popup_clock_digital_window_cp02_t1

0xa4ba,	// (0x000290eb) clock_digital_number_pane_cp10_g1

0xa4ba,	// (0x000290eb) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0002e41c) clock_digital_number_pane_cp10_g

0xa4ba,	// (0x000290eb) clock_digital_separator_pane_cp10_g1

0xa4ba,	// (0x000290eb) clock_digital_separator_pane_g2_cp10

0xb166,	// (0x00029d97) navi_pane_vded_g4

0xb16f,	// (0x00029da0) navi_pane_vded_g5

0xb178,	// (0x00029da9) navi_pane_vded_t1

0x0d86,	// (0x0001f9b7) main_vded_pane

0x6635,	// (0x00025266) main_vded_pane_g1

0x6641,	// (0x00025272) main_vded_pane_g2

0x664b,	// (0x0002527c) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0002e421) main_vded_pane_g

0x6655,	// (0x00025286) main_vded_pane_t1

0x6663,	// (0x00025294) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0002e428) main_vded_pane_t

0x6671,	// (0x000252a2) vded_slider_pane

0x667b,	// (0x000252ac) vded_video_pane

0xcfde,	// (0x0002bc0f) vded_video_pane_g1

0x6687,	// (0x000252b8) vded_video_pane_g2

0xca3b,	// (0x0002b66c) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0002e42d) vded_video_pane_g

0xcfe8,	// (0x0002bc19) vded_slider_pane_g1

0xc788,	// (0x0002b3b9) vded_slider_pane_g2

0xcff1,	// (0x0002bc22) vded_slider_pane_g3

0xcffa,	// (0x0002bc2b) vded_slider_pane_g4

0xd003,	// (0x0002bc34) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0002e434) vded_slider_pane_g

0x6203,	// (0x00024e34) mup3_rocker_pane_ParamLimits

0x6203,	// (0x00024e34) mup3_rocker_pane

0x6690,	// (0x000252c1) mup3_control_keys_pane_g1

0x6698,	// (0x000252c9) mup3_control_keys_pane_g2

0x66a0,	// (0x000252d1) mup3_control_keys_pane_g3

0x66a8,	// (0x000252d9) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0002e43f) mup3_control_keys_pane_g

0x0d46,	// (0x0001f977) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d46,	// (0x0001f977) popup_toolbar2_fixed_window_cp01

0x621f,	// (0x00024e50) popup_toolbar2_fixed_window_cp02_ParamLimits

0x621f,	// (0x00024e50) popup_toolbar2_fixed_window_cp02

0xb981,	// (0x0002a5b2) popup_call2_audio_second_window_t4_ParamLimits

0xb981,	// (0x0002a5b2) popup_call2_audio_second_window_t4

0xbeaf,	// (0x0002aae0) popup_call2_audio_first_window_t6_ParamLimits

0xbeaf,	// (0x0002aae0) popup_call2_audio_first_window_t6

0xc145,	// (0x0002ad76) popup_call2_audio_out_window_t6_ParamLimits

0xc145,	// (0x0002ad76) popup_call2_audio_out_window_t6

0x0d86,	// (0x0001f9b7) main_vitu_pane

0x66b8,	// (0x000252e9) aid_size_cell_itu_ParamLimits

0x66b8,	// (0x000252e9) aid_size_cell_itu

0xd3b8,	// (0x0002bfe9) bg_popup_window_pane_cp08_ParamLimits

0xd3b8,	// (0x0002bfe9) bg_popup_window_pane_cp08

0x66c6,	// (0x000252f7) field_vitu_entry_pane_ParamLimits

0x66c6,	// (0x000252f7) field_vitu_entry_pane

0x66d5,	// (0x00025306) grid_vitu_function_pane_ParamLimits

0x66d5,	// (0x00025306) grid_vitu_function_pane

0x66e5,	// (0x00025316) grid_vitu_itu_pane_ParamLimits

0x66e5,	// (0x00025316) grid_vitu_itu_pane

0x66f5,	// (0x00025326) cell_vitu_itu_pane_ParamLimits

0x66f5,	// (0x00025326) cell_vitu_itu_pane

0x670c,	// (0x0002533d) cell_vitu_function_pane_ParamLimits

0x670c,	// (0x0002533d) cell_vitu_function_pane

0xa890,	// (0x000294c1) bg_popup_sub_pane_cp08_ParamLimits

0xa890,	// (0x000294c1) bg_popup_sub_pane_cp08

0x6720,	// (0x00025351) field_vitu_entry_pane_t1_ParamLimits

0x6720,	// (0x00025351) field_vitu_entry_pane_t1

0xd024,	// (0x0002bc55) field_vitu_entry_pane_t2_ParamLimits

0xd024,	// (0x0002bc55) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0002e44d) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0002e44d) field_vitu_entry_pane_t

0xd041,	// (0x0002bc72) bg_button_pane_cp05_ParamLimits

0xd041,	// (0x0002bc72) bg_button_pane_cp05

0x673a,	// (0x0002536b) cell_vitu_itu_pane_g1

0x6752,	// (0x00025383) cell_vitu_itu_pane_t1_ParamLimits

0x6752,	// (0x00025383) cell_vitu_itu_pane_t1

0x6764,	// (0x00025395) cell_vitu_itu_pane_t2_ParamLimits

0x6764,	// (0x00025395) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0002e452) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0002e452) cell_vitu_itu_pane_t

0xd04f,	// (0x0002bc80) bg_button_pane_cp07

0x67a7,	// (0x000253d8) cell_vitu_function_pane_g1

0x0e5f,	// (0x0001fa90) main_calc_pane_g1

0x0b28,	// (0x0001f759) aid_visual_content_pane

0x0d86,	// (0x0001f9b7) main_vradio_pane

0x67b0,	// (0x000253e1) main_vradio_pane_g1_ParamLimits

0x67b0,	// (0x000253e1) main_vradio_pane_g1

0xd059,	// (0x0002bc8a) main_vradio_pane_g2_ParamLimits

0xd059,	// (0x0002bc8a) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0002e459) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0002e459) main_vradio_pane_g

0x67be,	// (0x000253ef) main_vradio_pane_t1_ParamLimits

0x67be,	// (0x000253ef) main_vradio_pane_t1

0x67d0,	// (0x00025401) main_vradio_pane_t2_ParamLimits

0x67d0,	// (0x00025401) main_vradio_pane_t2

0xd066,	// (0x0002bc97) main_vradio_pane_t3_ParamLimits

0xd066,	// (0x0002bc97) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0002e45e) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0002e45e) main_vradio_pane_t

0x67e2,	// (0x00025413) vradio_rocker_control_pane_ParamLimits

0x67e2,	// (0x00025413) vradio_rocker_control_pane

0x67ee,	// (0x0002541f) vradio_station_info_pane_ParamLimits

0x67ee,	// (0x0002541f) vradio_station_info_pane

0xd07a,	// (0x0002bcab) vradio_frequency_info_pane_ParamLimits

0xd07a,	// (0x0002bcab) vradio_frequency_info_pane

0xca3b,	// (0x0002b66c) vradio_station_info_pane_g1

0xd089,	// (0x0002bcba) vradio_station_info_pane_t1_ParamLimits

0xd089,	// (0x0002bcba) vradio_station_info_pane_t1

0xd0ab,	// (0x0002bcdc) vradio_station_info_pane_t2_ParamLimits

0xd0ab,	// (0x0002bcdc) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0002e465) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0002e465) vradio_station_info_pane_t

0xd0bd,	// (0x0002bcee) vradio_tuning_pane

0xd0c5,	// (0x0002bcf6) vradio_rocker_control_pane_g1

0xd0cd,	// (0x0002bcfe) vradio_rocker_control_pane_g2

0xd0d5,	// (0x0002bd06) vradio_rocker_control_pane_g3

0xd0dd,	// (0x0002bd0e) vradio_rocker_control_pane_g4

0xd0e5,	// (0x0002bd16) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0002e46a) vradio_rocker_control_pane_g

0x67fb,	// (0x0002542c) vradio_frequency_info_pane_g1

0xd0ed,	// (0x0002bd1e) vradio_frequency_info_pane_t1_ParamLimits

0xd0ed,	// (0x0002bd1e) vradio_frequency_info_pane_t1

0x6805,	// (0x00025436) vradio_tuning_pane_g1

0x6810,	// (0x00025441) vradio_tuning_pane_t1

0x0b44,	// (0x0001f775) area_side_right_pane_ParamLimits

0x0b44,	// (0x0001f775) area_side_right_pane

0xc5be,	// (0x0002b1ef) status_small_pane_g1

0xc5c6,	// (0x0002b1f7) status_small_pane_g2

0xc5cf,	// (0x0002b200) status_small_pane_g3

0xc5d8,	// (0x0002b209) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0002e225) status_small_pane_g

0xc5e1,	// (0x0002b212) status_small_pane_t1

0x0d86,	// (0x0001f9b7) main_video3_pane

0xd101,	// (0x0002bd32) cams_zoom_vslider_pane

0xd109,	// (0x0002bd3a) image3_wide_pane_ParamLimits

0xd109,	// (0x0002bd3a) image3_wide_pane

0xd123,	// (0x0002bd54) image3_wide_small_pane

0xd12f,	// (0x0002bd60) main_video3_pane_g1_ParamLimits

0xd12f,	// (0x0002bd60) main_video3_pane_g1

0xd14b,	// (0x0002bd7c) main_video3_pane_g2_ParamLimits

0xd14b,	// (0x0002bd7c) main_video3_pane_g2

0x0001,

0xf844,	// (0x0002e475) main_video3_pane_g_ParamLimits

0xf844,	// (0x0002e475) main_video3_pane_g

0xd167,	// (0x0002bd98) main_video3_pane_t1_ParamLimits

0xd167,	// (0x0002bd98) main_video3_pane_t1

0xd192,	// (0x0002bdc3) main_video3_pane_t2_ParamLimits

0xd192,	// (0x0002bdc3) main_video3_pane_t2

0xd1bf,	// (0x0002bdf0) main_video3_pane_t3_ParamLimits

0xd1bf,	// (0x0002bdf0) main_video3_pane_t3

0x0002,

0xf849,	// (0x0002e47a) main_video3_pane_t_ParamLimits

0xf849,	// (0x0002e47a) main_video3_pane_t

0xd1ec,	// (0x0002be1d) cams_zoom_vslider_pane_g1

0xd1f5,	// (0x0002be26) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0002e481) cams_zoom_vslider_pane_g

0xd1fd,	// (0x0002be2e) small_slider_vertical_pane

0xca3b,	// (0x0002b66c) small_slider_vertical_pane_g1

0xca3b,	// (0x0002b66c) small_slider_vertical_pane_g2

0xd205,	// (0x0002be36) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0002e486) small_slider_vertical_pane_g

0x0d86,	// (0x0001f9b7) main_hwr_training_pane

0xd20e,	// (0x0002be3f) hwr_training_instruct_pane_ParamLimits

0xd20e,	// (0x0002be3f) hwr_training_instruct_pane

0x681f,	// (0x00025450) hwr_training_navi_pane_ParamLimits

0x681f,	// (0x00025450) hwr_training_navi_pane

0x6839,	// (0x0002546a) hwr_training_write_pane_ParamLimits

0x6839,	// (0x0002546a) hwr_training_write_pane

0x9e15,	// (0x00028a46) bg_frame_shadow_pane

0xd245,	// (0x0002be76) hwr_training_write_pane_g1

0xd24d,	// (0x0002be7e) hwr_training_write_pane_g2

0xd255,	// (0x0002be86) hwr_training_write_pane_g3

0xd25d,	// (0x0002be8e) hwr_training_write_pane_g4

0xd265,	// (0x0002be96) hwr_training_write_pane_g5

0xd26d,	// (0x0002be9e) hwr_training_write_pane_g6

0xd275,	// (0x0002bea6) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0002e48d) hwr_training_write_pane_g

0x176e,	// (0x0002039f) hwr_training_navi_pane_g1_ParamLimits

0x176e,	// (0x0002039f) hwr_training_navi_pane_g1

0x1780,	// (0x000203b1) hwr_training_navi_pane_g2_ParamLimits

0x1780,	// (0x000203b1) hwr_training_navi_pane_g2

0x1792,	// (0x000203c3) hwr_training_navi_pane_g3_ParamLimits

0x1792,	// (0x000203c3) hwr_training_navi_pane_g3

0x17a2,	// (0x000203d3) hwr_training_navi_pane_g4_ParamLimits

0x17a2,	// (0x000203d3) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0002e49c) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0002e49c) hwr_training_navi_pane_g

0x17bc,	// (0x000203ed) hwr_training_navi_pane_t1

0x6871,	// (0x000254a2) list_single_hwr_training_instruct_pane_ParamLimits

0x6871,	// (0x000254a2) list_single_hwr_training_instruct_pane

0xd27d,	// (0x0002beae) list_single_hwr_training_instruct_pane_t1

0xc97b,	// (0x0002b5ac) bg_frame_shadow_pane_g1

0xd28c,	// (0x0002bebd) bg_frame_shadow_pane_g2

0xd294,	// (0x0002bec5) bg_frame_shadow_pane_g3

0xd29c,	// (0x0002becd) bg_frame_shadow_pane_g4

0xd2a4,	// (0x0002bed5) bg_frame_shadow_pane_g5

0xd2ac,	// (0x0002bedd) bg_frame_shadow_pane_g6

0xd2b4,	// (0x0002bee5) bg_frame_shadow_pane_g7

0xa640,	// (0x00029271) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0002e4a7) bg_frame_shadow_pane_g

0x0d86,	// (0x0001f9b7) main_video_tele_dialer_pane

0x17ca,	// (0x000203fb) aid_size_cell_video_keypad_ParamLimits

0x17ca,	// (0x000203fb) aid_size_cell_video_keypad

0x17da,	// (0x0002040b) grid_video_dialer_keypad_pane_ParamLimits

0x17da,	// (0x0002040b) grid_video_dialer_keypad_pane

0x17e8,	// (0x00020419) video_down_pane_cp_ParamLimits

0x17e8,	// (0x00020419) video_down_pane_cp

0x17f6,	// (0x00020427) cell_video_dialer_keypad_pane_ParamLimits

0x17f6,	// (0x00020427) cell_video_dialer_keypad_pane

0xd2bc,	// (0x0002beed) bg_button_pane_cp08_ParamLimits

0xd2bc,	// (0x0002beed) bg_button_pane_cp08

0x68ca,	// (0x000254fb) cell_video_dialer_keypad_pane_g1_ParamLimits

0x68ca,	// (0x000254fb) cell_video_dialer_keypad_pane_g1

0x61f7,	// (0x00024e28) mup3_rocker2_pane_ParamLimits

0x61f7,	// (0x00024e28) mup3_rocker2_pane

0xca3b,	// (0x0002b66c) mup3_rocker2_pane_g1

0x125e,	// (0x0001fe8f) main_dialer2_pane

0x0d86,	// (0x0001f9b7) main_mp4_pane

0x182b,	// (0x0002045c) main_mp4_pane_g1_ParamLimits

0x182b,	// (0x0002045c) main_mp4_pane_g1

0x1839,	// (0x0002046a) main_mp4_pane_g2_ParamLimits

0x1839,	// (0x0002046a) main_mp4_pane_g2

0x1847,	// (0x00020478) main_mp4_pane_g3_ParamLimits

0x1847,	// (0x00020478) main_mp4_pane_g3

0x189a,	// (0x000204cb) main_mp4_pane_g4_ParamLimits

0x189a,	// (0x000204cb) main_mp4_pane_g4

0x18c8,	// (0x000204f9) main_mp4_pane_g5_ParamLimits

0x18c8,	// (0x000204f9) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0002e4c7) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0002e4c7) main_mp4_pane_g

0x193c,	// (0x0002056d) main_mp4_pane_t1_ParamLimits

0x193c,	// (0x0002056d) main_mp4_pane_t1

0x1998,	// (0x000205c9) main_mp4_pane_t2_ParamLimits

0x1998,	// (0x000205c9) main_mp4_pane_t2

0xd2c8,	// (0x0002bef9) main_mp4_pane_t3_ParamLimits

0xd2c8,	// (0x0002bef9) main_mp4_pane_t3

0x19ea,	// (0x0002061b) main_mp4_pane_t4_ParamLimits

0x19ea,	// (0x0002061b) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002e4d8) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002e4d8) main_mp4_pane_t

0x1a2a,	// (0x0002065b) mp4_progress_pane_ParamLimits

0x1a2a,	// (0x0002065b) mp4_progress_pane

0x1a74,	// (0x000206a5) mp4_rocker_pane_ParamLimits

0x1a74,	// (0x000206a5) mp4_rocker_pane

0xd2f6,	// (0x0002bf27) mp4_progress_pane_t1

0xd30f,	// (0x0002bf40) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002e4e1) mp4_progress_pane_t

0xd328,	// (0x0002bf59) mup_progress_pane_cp04

0xd7ba,	// (0x0002c3eb) mp4_rocker_pane_g1

0x1a94,	// (0x000206c5) aid_cell_size_keypad2_ParamLimits

0x1a94,	// (0x000206c5) aid_cell_size_keypad2

0x1aa4,	// (0x000206d5) dialer2_ne_pane_ParamLimits

0x1aa4,	// (0x000206d5) dialer2_ne_pane

0x1ab0,	// (0x000206e1) grid_dialer2_keypad_pane_ParamLimits

0x1ab0,	// (0x000206e1) grid_dialer2_keypad_pane

0xd3c6,	// (0x0002bff7) bg_popup_call_pane_cp07_ParamLimits

0xd3c6,	// (0x0002bff7) bg_popup_call_pane_cp07

0x6905,	// (0x00025536) dialer2_ne_pane_t1_ParamLimits

0x6905,	// (0x00025536) dialer2_ne_pane_t1

0x1abe,	// (0x000206ef) cell_dialer2_keypad_pane_ParamLimits

0x1abe,	// (0x000206ef) cell_dialer2_keypad_pane

0xd34d,	// (0x0002bf7e) bg_button_pane_pane_cp04_ParamLimits

0xd34d,	// (0x0002bf7e) bg_button_pane_pane_cp04

0x692a,	// (0x0002555b) cell_dialer2_keypad_pane_g1_ParamLimits

0x692a,	// (0x0002555b) cell_dialer2_keypad_pane_g1

0x328e,	// (0x00021ebf) aid_placing_vt_set_content_ParamLimits

0x328e,	// (0x00021ebf) aid_placing_vt_set_content

0x32b6,	// (0x00021ee7) aid_placing_vt_set_title_ParamLimits

0x32b6,	// (0x00021ee7) aid_placing_vt_set_title

0x0d86,	// (0x0001f9b7) main_image3_pane

0x1b07,	// (0x00020738) area_side_right_pane_cp01_ParamLimits

0x1b07,	// (0x00020738) area_side_right_pane_cp01

0x1b36,	// (0x00020767) main_image3_pane_g1_ParamLimits

0x1b36,	// (0x00020767) main_image3_pane_g1

0x1b44,	// (0x00020775) main_image3_pane_g2_ParamLimits

0x1b44,	// (0x00020775) main_image3_pane_g2

0x1b5d,	// (0x0002078e) main_image3_pane_g3_ParamLimits

0x1b5d,	// (0x0002078e) main_image3_pane_g3

0x1b76,	// (0x000207a7) main_image3_pane_g4_ParamLimits

0x1b76,	// (0x000207a7) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002e4f0) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002e4f0) main_image3_pane_g

0x1b8f,	// (0x000207c0) main_image3_pane_t1_ParamLimits

0x1b8f,	// (0x000207c0) main_image3_pane_t1

0x1bb4,	// (0x000207e5) main_image3_pane_t2_ParamLimits

0x1bb4,	// (0x000207e5) main_image3_pane_t2

0x1bd3,	// (0x00020804) main_image3_pane_t3_ParamLimits

0x1bd3,	// (0x00020804) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002e4f9) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002e4f9) main_image3_pane_t

0xd3b8,	// (0x0002bfe9) grid_sctrl_middle_pane_cp01_ParamLimits

0xd3b8,	// (0x0002bfe9) grid_sctrl_middle_pane_cp01

0x6992,	// (0x000255c3) cell_sctrl_middle_pane_cp01_ParamLimits

0x6992,	// (0x000255c3) cell_sctrl_middle_pane_cp01

0x69a3,	// (0x000255d4) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x69a3,	// (0x000255d4) cell_sctrl_middle_pane_cp01_g1

0x0d86,	// (0x0001f9b7) main_call4_pane

0x1c34,	// (0x00020865) aid_size_button_call4_ParamLimits

0x1c34,	// (0x00020865) aid_size_button_call4

0x1c6a,	// (0x0002089b) call4_windows_pane_ParamLimits

0x1c6a,	// (0x0002089b) call4_windows_pane

0x1c7f,	// (0x000208b0) grid_call4_button_pane_ParamLimits

0x1c7f,	// (0x000208b0) grid_call4_button_pane

0x69bc,	// (0x000255ed) call4_windows_conf_pane

0x69d7,	// (0x00025608) popup_call4_audio_first_window_ParamLimits

0x69d7,	// (0x00025608) popup_call4_audio_first_window

0x6a29,	// (0x0002565a) popup_call4_audio_second_window_ParamLimits

0x6a29,	// (0x0002565a) popup_call4_audio_second_window

0x6a42,	// (0x00025673) popup_call4_audio_wait_window_ParamLimits

0x6a42,	// (0x00025673) popup_call4_audio_wait_window

0x1ca3,	// (0x000208d4) cell_call4_button_pane_ParamLimits

0x1ca3,	// (0x000208d4) cell_call4_button_pane

0x6a50,	// (0x00025681) bg_button_pane_cp09_ParamLimits

0x6a50,	// (0x00025681) bg_button_pane_cp09

0x1cc6,	// (0x000208f7) cell_call4_button_pane_g1_ParamLimits

0x1cc6,	// (0x000208f7) cell_call4_button_pane_g1

0x6a5c,	// (0x0002568d) cell_call4_button_pane_t1_ParamLimits

0x6a5c,	// (0x0002568d) cell_call4_button_pane_t1

0xd361,	// (0x0002bf92) popup_call4_audio_conf_window_ParamLimits

0xd361,	// (0x0002bf92) popup_call4_audio_conf_window

0x622c,	// (0x00024e5d) mup3_progress_pane_t1_ParamLimits

0x624b,	// (0x00024e7c) mup3_progress_pane_t2_ParamLimits

0xcce9,	// (0x0002b91a) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0002e3c9) mup3_progress_pane_t_ParamLimits

0xcd06,	// (0x0002b937) mup_progress_pane_cp03_ParamLimits

0x66b0,	// (0x000252e1) mup3_control_keys_pane_g4_copy1

0x1a58,	// (0x00020689) mp4_rocker2_pane_ParamLimits

0x1a58,	// (0x00020689) mp4_rocker2_pane

0xd37b,	// (0x0002bfac) mp4_rocker2_pane_g1

0xd383,	// (0x0002bfb4) mp4_rocker2_pane_g2

0x1d05,	// (0x00020936) mp4_rocker2_pane_g3

0x1d0d,	// (0x0002093e) mp4_rocker2_pane_g4

0x1d15,	// (0x00020946) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002e502) mp4_rocker2_pane_g

0x0d86,	// (0x0001f9b7) main_camera4_pane

0x0d86,	// (0x0001f9b7) main_video4_pane

0x688a,	// (0x000254bb) main_video_tele_dialer_pane_t1_ParamLimits

0x688a,	// (0x000254bb) main_video_tele_dialer_pane_t1

0x689c,	// (0x000254cd) main_video_tele_dialer_pane_t2_ParamLimits

0x689c,	// (0x000254cd) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0002e4b8) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0002e4b8) main_video_tele_dialer_pane_t

0x1d35,	// (0x00020966) cam4_autofocus_pane_ParamLimits

0x1d35,	// (0x00020966) cam4_autofocus_pane

0x1d4d,	// (0x0002097e) cam4_image_uncrop_pane_ParamLimits

0x1d4d,	// (0x0002097e) cam4_image_uncrop_pane

0x1d66,	// (0x00020997) cam4_indicators_pane_ParamLimits

0x1d66,	// (0x00020997) cam4_indicators_pane

0x1d82,	// (0x000209b3) main_camera4_pane_g1_ParamLimits

0x1d82,	// (0x000209b3) main_camera4_pane_g1

0x1d8e,	// (0x000209bf) main_camera4_pane_g2_ParamLimits

0x1d8e,	// (0x000209bf) main_camera4_pane_g2

0x1d8e,	// (0x000209bf) main_camera4_pane_g3_ParamLimits

0x1d8e,	// (0x000209bf) main_camera4_pane_g3

0x1d9a,	// (0x000209cb) main_camera4_pane_g4_ParamLimits

0x1d9a,	// (0x000209cb) main_camera4_pane_g4

0x1da6,	// (0x000209d7) main_camera4_pane_g5_ParamLimits

0x1da6,	// (0x000209d7) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002e50d) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002e50d) main_camera4_pane_g

0x1dc0,	// (0x000209f1) main_camera4_pane_t1_ParamLimits

0x1dc0,	// (0x000209f1) main_camera4_pane_t1

0x1de4,	// (0x00020a15) bg_tb_trans_pane_cp06

0x1dfa,	// (0x00020a2b) cam4_indicators_pane_g1

0x1e0b,	// (0x00020a3c) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002e528) cam4_indicators_pane_g

0x1e23,	// (0x00020a54) cam4_indicators_pane_t1

0x1e4d,	// (0x00020a7e) main_video4_pane_g1_ParamLimits

0x1e4d,	// (0x00020a7e) main_video4_pane_g1

0x1e59,	// (0x00020a8a) main_video4_pane_g2_ParamLimits

0x1e59,	// (0x00020a8a) main_video4_pane_g2

0x1e65,	// (0x00020a96) main_video4_pane_g3_ParamLimits

0x1e65,	// (0x00020a96) main_video4_pane_g3

0x1e71,	// (0x00020aa2) main_video4_pane_g4_ParamLimits

0x1e71,	// (0x00020aa2) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002e52f) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002e52f) main_video4_pane_g

0x1e93,	// (0x00020ac4) vid4_indicators_pane_ParamLimits

0x1e93,	// (0x00020ac4) vid4_indicators_pane

0x1eb2,	// (0x00020ae3) video4_image_uncrop_cif_pane_ParamLimits

0x1eb2,	// (0x00020ae3) video4_image_uncrop_cif_pane

0x1ec1,	// (0x00020af2) video4_image_uncrop_nhd_pane_ParamLimits

0x1ec1,	// (0x00020af2) video4_image_uncrop_nhd_pane

0x1d4d,	// (0x0002097e) video4_image_uncrop_vga_pane_ParamLimits

0x1d4d,	// (0x0002097e) video4_image_uncrop_vga_pane

0x1250,	// (0x0001fe81) bg_tb_trans_pane_cp07

0x1eda,	// (0x00020b0b) vid4_indicators_pane_g1

0x1ef0,	// (0x00020b21) vid4_indicators_pane_g2

0x1f04,	// (0x00020b35) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002e53a) vid4_indicators_pane_g

0x1f35,	// (0x00020b66) vid4_indicators_pane_t1

0x6a94,	// (0x000256c5) cam4_autofocus_pane_g1

0x6a9c,	// (0x000256cd) cam4_autofocus_pane_g2

0x6aa4,	// (0x000256d5) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002e545) cam4_autofocus_pane_g

0x6aac,	// (0x000256dd) cam4_autofocus_pane_g3_copy1

0x68ae,	// (0x000254df) video_down_pane_cp_t1

0x68bc,	// (0x000254ed) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0002e4bd) video_down_pane_cp_t

0x0d78,	// (0x0001f9a9) popup_vitu2_window_ParamLimits

0x0d78,	// (0x0001f9a9) popup_vitu2_window

0x1f4c,	// (0x00020b7d) aid_size_cell2_itu2_ParamLimits

0x1f4c,	// (0x00020b7d) aid_size_cell2_itu2

0x1f6e,	// (0x00020b9f) aid_size_cell_itu2_ParamLimits

0x1f6e,	// (0x00020b9f) aid_size_cell_itu2

0x1fb4,	// (0x00020be5) bg_popup_window_pane_cp09_ParamLimits

0x1fb4,	// (0x00020be5) bg_popup_window_pane_cp09

0x1fc2,	// (0x00020bf3) field_vitu2_entry_pane_ParamLimits

0x1fc2,	// (0x00020bf3) field_vitu2_entry_pane

0x1fe2,	// (0x00020c13) grid_vitu2_function_pane_ParamLimits

0x1fe2,	// (0x00020c13) grid_vitu2_function_pane

0x2026,	// (0x00020c57) grid_vitu2_itu_pane_ParamLimits

0x2026,	// (0x00020c57) grid_vitu2_itu_pane

0x209e,	// (0x00020ccf) cell_vitu2_itu_pane_ParamLimits

0x209e,	// (0x00020ccf) cell_vitu2_itu_pane

0x20b9,	// (0x00020cea) cell_vitu2_function_pane_ParamLimits

0x20b9,	// (0x00020cea) cell_vitu2_function_pane

0xd3d4,	// (0x0002c005) bg_popup_call_pane_cp08_ParamLimits

0xd3d4,	// (0x0002c005) bg_popup_call_pane_cp08

0xd3eb,	// (0x0002c01c) field_vitu2_entry_pane_g1

0xd3f7,	// (0x0002c028) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002e54c) field_vitu2_entry_pane_g

0x6ab4,	// (0x000256e5) field_vitu2_entry_pane_t1_ParamLimits

0x6ab4,	// (0x000256e5) field_vitu2_entry_pane_t1

0xd411,	// (0x0002c042) field_vitu2_entry_pane_t2_ParamLimits

0xd411,	// (0x0002c042) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002e553) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002e553) field_vitu2_entry_pane_t

0x20fd,	// (0x00020d2e) bg_button_pane_cp010_ParamLimits

0x20fd,	// (0x00020d2e) bg_button_pane_cp010

0x210b,	// (0x00020d3c) cell_vitu2_itu_pane_g1

0x212b,	// (0x00020d5c) cell_vitu2_itu_pane_t1_ParamLimits

0x212b,	// (0x00020d5c) cell_vitu2_itu_pane_t1

0x2177,	// (0x00020da8) cell_vitu2_itu_pane_t2_ParamLimits

0x2177,	// (0x00020da8) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002e55d) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002e55d) cell_vitu2_itu_pane_t

0x1250,	// (0x0001fe81) bg_button_pane_cp011

0x223f,	// (0x00020e70) cell_vitu2_function_pane_g1

0x0d86,	// (0x0001f9b7) main_myfav_hc_pane

0x1c15,	// (0x00020846) popup_image3_note_pane_ParamLimits

0x1c15,	// (0x00020846) popup_image3_note_pane

0x1c23,	// (0x00020854) popup_image3_tool_bar_pane_ParamLimits

0x1c23,	// (0x00020854) popup_image3_tool_bar_pane

0x21ed,	// (0x00020e1e) cell_vitu2_itu_pane_t3_ParamLimits

0x21ed,	// (0x00020e1e) cell_vitu2_itu_pane_t3

0x9e15,	// (0x00028a46) bg_popup_trans_pane

0xd436,	// (0x0002c067) grid_image3_tool_bar_pane

0xd440,	// (0x0002c071) bg_popup_trans_pane_g1

0xa9b8,	// (0x000295e9) bg_popup_trans_pane_g2

0xd448,	// (0x0002c079) bg_popup_trans_pane_g3

0xd450,	// (0x0002c081) bg_popup_trans_pane_g4

0xd458,	// (0x0002c089) bg_popup_trans_pane_g5

0xd460,	// (0x0002c091) bg_popup_trans_pane_g6

0xd468,	// (0x0002c099) bg_popup_trans_pane_g7

0xd470,	// (0x0002c0a1) bg_popup_trans_pane_g8

0xa998,	// (0x000295c9) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002e564) bg_popup_trans_pane_g

0xd478,	// (0x0002c0a9) cell_image3_tool_bar_pane_ParamLimits

0xd478,	// (0x0002c0a9) cell_image3_tool_bar_pane

0xca3b,	// (0x0002b66c) cell_image3_tool_bar_pane_g1

0x9e15,	// (0x00028a46) bg_popup_trans_pane_cp1

0xd48e,	// (0x0002c0bf) popup_image3_note_pane_t1

0xd49c,	// (0x0002c0cd) popup_image3_note_pane_t2

0xd4aa,	// (0x0002c0db) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002e577) popup_image3_note_pane_t

0xd4ba,	// (0x0002c0eb) popup_image3_note_pane_t3_copy1

0x6ae2,	// (0x00025713) bg_myfav_hc_instruction_pane_ParamLimits

0x6ae2,	// (0x00025713) bg_myfav_hc_instruction_pane

0x6afa,	// (0x0002572b) cell_myfav_contact_pane_ParamLimits

0x6afa,	// (0x0002572b) cell_myfav_contact_pane

0x6b14,	// (0x00025745) cell_myfav_contact_pane_cp1_ParamLimits

0x6b14,	// (0x00025745) cell_myfav_contact_pane_cp1

0x6b2c,	// (0x0002575d) cell_myfav_contact_pane_cp2_ParamLimits

0x6b2c,	// (0x0002575d) cell_myfav_contact_pane_cp2

0x6b44,	// (0x00025775) cell_myfav_contact_pane_cp3_ParamLimits

0x6b44,	// (0x00025775) cell_myfav_contact_pane_cp3

0x6b5b,	// (0x0002578c) cell_myfav_contact_pane_cp4_ParamLimits

0x6b5b,	// (0x0002578c) cell_myfav_contact_pane_cp4

0x6b71,	// (0x000257a2) cell_myfav_contact_pane_cp5_ParamLimits

0x6b71,	// (0x000257a2) cell_myfav_contact_pane_cp5

0x6b85,	// (0x000257b6) cell_myfav_contact_pane_cp6_ParamLimits

0x6b85,	// (0x000257b6) cell_myfav_contact_pane_cp6

0x6b99,	// (0x000257ca) cell_myfav_contact_pane_cp7_ParamLimits

0x6b99,	// (0x000257ca) cell_myfav_contact_pane_cp7

0xd4c8,	// (0x0002c0f9) listscroll_gen_pane_cp05

0x6bb1,	// (0x000257e2) main_myfav_hc_pane_g1_ParamLimits

0x6bb1,	// (0x000257e2) main_myfav_hc_pane_g1

0x6bcb,	// (0x000257fc) main_myfav_hc_pane_g2_ParamLimits

0x6bcb,	// (0x000257fc) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002e57e) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002e57e) main_myfav_hc_pane_g

0x6bfd,	// (0x0002582e) main_myfav_hc_pane_t1_ParamLimits

0x6bfd,	// (0x0002582e) main_myfav_hc_pane_t1

0xd4d1,	// (0x0002c102) main_myfav_hc_pane_t2_ParamLimits

0xd4d1,	// (0x0002c102) main_myfav_hc_pane_t2

0xd4e3,	// (0x0002c114) main_myfav_hc_pane_t3_ParamLimits

0xd4e3,	// (0x0002c114) main_myfav_hc_pane_t3

0x6c14,	// (0x00025845) main_myfav_hc_pane_t4_ParamLimits

0x6c14,	// (0x00025845) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002e585) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002e585) main_myfav_hc_pane_t

0xca3b,	// (0x0002b66c) bg_myfav_hc_instruction_pane_g1

0xd4f5,	// (0x0002c126) cell_myfav_contact_pane_g1_ParamLimits

0xd4f5,	// (0x0002c126) cell_myfav_contact_pane_g1

0xd4f5,	// (0x0002c126) cell_myfav_contact_pane_g2_ParamLimits

0xd4f5,	// (0x0002c126) cell_myfav_contact_pane_g2

0xd501,	// (0x0002c132) cell_myfav_contact_pane_g3_ParamLimits

0xd501,	// (0x0002c132) cell_myfav_contact_pane_g3

0xccd3,	// (0x0002b904) cell_myfav_contact_pane_g4_ParamLimits

0xccd3,	// (0x0002b904) cell_myfav_contact_pane_g4

0xd50e,	// (0x0002c13f) cell_myfav_contact_pane_g5_ParamLimits

0xd50e,	// (0x0002c13f) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002e590) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002e590) cell_myfav_contact_pane_g

0x6be5,	// (0x00025816) main_myfav_hc_pane_g3_ParamLimits

0x6be5,	// (0x00025816) main_myfav_hc_pane_g3

0x0c80,	// (0x0001f8b1) popup_adpt_find_window

0x6c3e,	// (0x0002586f) afind_page_pane_ParamLimits

0x6c3e,	// (0x0002586f) afind_page_pane

0x6c4b,	// (0x0002587c) aid_size_cell_afind_ParamLimits

0x6c4b,	// (0x0002587c) aid_size_cell_afind

0x6c65,	// (0x00025896) bg_popup_sub_pane_cp09_ParamLimits

0x6c65,	// (0x00025896) bg_popup_sub_pane_cp09

0x6c72,	// (0x000258a3) find_pane_cp01_ParamLimits

0x6c72,	// (0x000258a3) find_pane_cp01

0xd51a,	// (0x0002c14b) grid_afind_control_pane_ParamLimits

0xd51a,	// (0x0002c14b) grid_afind_control_pane

0x6c7f,	// (0x000258b0) grid_afind_pane_ParamLimits

0x6c7f,	// (0x000258b0) grid_afind_pane

0x6c9b,	// (0x000258cc) cell_afind_pane_ParamLimits

0x6c9b,	// (0x000258cc) cell_afind_pane

0xca3b,	// (0x0002b66c) afind_page_pane_g1

0x6ce7,	// (0x00025918) afind_page_pane_g2

0x6cf0,	// (0x00025921) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002e59b) afind_page_pane_g

0x6cf9,	// (0x0002592a) afind_page_pane_t1

0xd52e,	// (0x0002c15f) cell_afind_grid_control_pane_ParamLimits

0xd52e,	// (0x0002c15f) cell_afind_grid_control_pane

0xd34d,	// (0x0002bf7e) bg_button_pane_cp69_ParamLimits

0xd34d,	// (0x0002bf7e) bg_button_pane_cp69

0x6d19,	// (0x0002594a) cell_afind_pane_g1_ParamLimits

0x6d19,	// (0x0002594a) cell_afind_pane_g1

0x6d26,	// (0x00025957) cell_afind_pane_t1_ParamLimits

0x6d26,	// (0x00025957) cell_afind_pane_t1

0xa781,	// (0x000293b2) bg_button_pane_cp72

0xd53d,	// (0x0002c16e) cell_afind_grid_control_pane_g1

0x5018,	// (0x00023c49) aid_image_placing_area_ParamLimits

0x5018,	// (0x00023c49) aid_image_placing_area

0xd00c,	// (0x0002bc3d) field_vitu_entry_pane_g1_ParamLimits

0xd00c,	// (0x0002bc3d) field_vitu_entry_pane_g1

0xd018,	// (0x0002bc49) field_vitu_entry_pane_g2_ParamLimits

0xd018,	// (0x0002bc49) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0002e448) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0002e448) field_vitu_entry_pane_g

0x673a,	// (0x0002536b) cell_vitu_itu_pane_g1_ParamLimits

0x678a,	// (0x000253bb) cell_vitu_itu_pane_t3_ParamLimits

0x678a,	// (0x000253bb) cell_vitu_itu_pane_t3

0xd2f6,	// (0x0002bf27) mp4_progress_pane_t1_ParamLimits

0xd30f,	// (0x0002bf40) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002e4e1) mp4_progress_pane_t_ParamLimits

0xd328,	// (0x0002bf59) mup_progress_pane_cp04_ParamLimits

0x6c28,	// (0x00025859) main_myfav_hc_pane_t5_ParamLimits

0x6c28,	// (0x00025859) main_myfav_hc_pane_t5

0x0b3c,	// (0x0001f76d) aid_zoom_text_primary

0x0c80,	// (0x0001f8b1) popup_adpt_find_window_ParamLimits

0x1250,	// (0x0001fe81) main_cam_set_pane

0x1d74,	// (0x000209a5) cam4_zoom_pane_ParamLimits

0x1d74,	// (0x000209a5) cam4_zoom_pane

0x6d38,	// (0x00025969) main_cam_set_pane_g1_ParamLimits

0x6d38,	// (0x00025969) main_cam_set_pane_g1

0x6d46,	// (0x00025977) main_cam_set_pane_g2_ParamLimits

0x6d46,	// (0x00025977) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002e5a2) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002e5a2) main_cam_set_pane_g

0x6d52,	// (0x00025983) main_cam_set_pane_t1_ParamLimits

0x6d52,	// (0x00025983) main_cam_set_pane_t1

0x6d6e,	// (0x0002599f) main_cset_listscroll_pane_ParamLimits

0x6d6e,	// (0x0002599f) main_cset_listscroll_pane

0x6d9d,	// (0x000259ce) main_cset_slider_pane_ParamLimits

0x6d9d,	// (0x000259ce) main_cset_slider_pane

0xd54e,	// (0x0002c17f) main_cset_list_pane_ParamLimits

0xd54e,	// (0x0002c17f) main_cset_list_pane

0xd55e,	// (0x0002c18f) scroll_pane_cp028

0x6dbe,	// (0x000259ef) aid_area_touch_slider

0x6dda,	// (0x00025a0b) cset_slider_pane

0x6e04,	// (0x00025a35) main_cset_slider_pane_g1

0x6e19,	// (0x00025a4a) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002e5a7) main_cset_slider_pane_g

0xd597,	// (0x0002c1c8) main_cset_slider_pane_t1

0x6ed5,	// (0x00025b06) main_cset_slider_pane_t2

0x6eef,	// (0x00025b20) main_cset_slider_pane_t3

0x6f09,	// (0x00025b3a) main_cset_slider_pane_t4

0x6f23,	// (0x00025b54) main_cset_slider_pane_t5

0x6f3d,	// (0x00025b6e) main_cset_slider_pane_t6

0x6f52,	// (0x00025b83) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002e5cc) main_cset_slider_pane_t

0x7056,	// (0x00025c87) cset_list_set_pane_ParamLimits

0x7056,	// (0x00025c87) cset_list_set_pane

0x7067,	// (0x00025c98) aid_position_infowindow_above

0x706f,	// (0x00025ca0) aid_position_infowindow_below

0x7077,	// (0x00025ca8) cset_list_set_pane_g1_ParamLimits

0x7077,	// (0x00025ca8) cset_list_set_pane_g1

0x7083,	// (0x00025cb4) cset_list_set_pane_g3_ParamLimits

0x7083,	// (0x00025cb4) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002e5eb) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002e5eb) cset_list_set_pane_g

0x7092,	// (0x00025cc3) cset_list_set_pane_t1_ParamLimits

0x7092,	// (0x00025cc3) cset_list_set_pane_t1

0xa890,	// (0x000294c1) list_highlight_pane_cp021_ParamLimits

0xa890,	// (0x000294c1) list_highlight_pane_cp021

0xb2da,	// (0x00029f0b) cset_slider_pane_g1

0xb2ec,	// (0x00029f1d) cset_slider_pane_g2

0xb2e3,	// (0x00029f14) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002e5f0) cset_slider_pane_g

0x2253,	// (0x00020e84) aid_area_touch_cam4_zoom

0x225c,	// (0x00020e8d) cam4_zoom_cont_pane

0x2264,	// (0x00020e95) cam4_zoom_pane_g1

0x226c,	// (0x00020e9d) cam4_zoom_pane_g2

0x2274,	// (0x00020ea5) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002e5f7) cam4_zoom_pane_g

0x227d,	// (0x00020eae) cam4_zoom_cont_pane_g1

0x2286,	// (0x00020eb7) cam4_zoom_cont_pane_g2

0x228f,	// (0x00020ec0) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002e5fe) cam4_zoom_cont_pane_g

0x1c4e,	// (0x0002087f) call4_image_pane_ParamLimits

0x1c4e,	// (0x0002087f) call4_image_pane

0x69bc,	// (0x000255ed) call4_windows_conf_pane_ParamLimits

0x6a07,	// (0x00025638) popup_call4_audio_in_window_ParamLimits

0x6a07,	// (0x00025638) popup_call4_audio_in_window

0x9e15,	// (0x00028a46) bg_popup_call2_act_pane_cp02

0xd359,	// (0x0002bf8a) call4_list_conf_pane

0xca3b,	// (0x0002b66c) call4_image_pane_g1

0xca3b,	// (0x0002b66c) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0002e309) call4_image_pane_g

0xd637,	// (0x0002c268) list_single_graphic_popup_conf4_pane_ParamLimits

0xd637,	// (0x0002c268) list_single_graphic_popup_conf4_pane

0x9e15,	// (0x00028a46) list_highlight_pane_cp022

0xd64c,	// (0x0002c27d) list_single_graphic_popup_conf4_pane_g1

0xaed4,	// (0x00029b05) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002e605) list_single_graphic_popup_conf4_pane_g

0xd654,	// (0x0002c285) list_single_graphic_popup_conf4_pane_t1

0x3410,	// (0x00022041) popup_vtel_slider_window_ParamLimits

0x3410,	// (0x00022041) popup_vtel_slider_window

0xd33b,	// (0x0002bf6c) dialer2_ne_pane_t2_ParamLimits

0xd33b,	// (0x0002bf6c) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002e4e6) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002e4e6) dialer2_ne_pane_t

0xa890,	// (0x000294c1) bg_popup_sub_pane_cp010_ParamLimits

0xa890,	// (0x000294c1) bg_popup_sub_pane_cp010

0x70a7,	// (0x00025cd8) popup_vtel_slider_window_g1_ParamLimits

0x70a7,	// (0x00025cd8) popup_vtel_slider_window_g1

0x70b3,	// (0x00025ce4) popup_vtel_slider_window_g2_ParamLimits

0x70b3,	// (0x00025ce4) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002e60a) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002e60a) popup_vtel_slider_window_g

0x70fb,	// (0x00025d2c) vtel_slider_pane_ParamLimits

0x70fb,	// (0x00025d2c) vtel_slider_pane

0x710a,	// (0x00025d3b) vtel_slider_pane_g1_ParamLimits

0x710a,	// (0x00025d3b) vtel_slider_pane_g1

0x7117,	// (0x00025d48) vtel_slider_pane_g2_ParamLimits

0x7117,	// (0x00025d48) vtel_slider_pane_g2

0x7124,	// (0x00025d55) vtel_slider_pane_g3_ParamLimits

0x7124,	// (0x00025d55) vtel_slider_pane_g3

0x710a,	// (0x00025d3b) vtel_slider_pane_g4_ParamLimits

0x710a,	// (0x00025d3b) vtel_slider_pane_g4

0x7131,	// (0x00025d62) vtel_slider_pane_g5_ParamLimits

0x7131,	// (0x00025d62) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002e613) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002e613) vtel_slider_pane_g

0x1250,	// (0x0001fe81) main_gallery2_pane

0x1f94,	// (0x00020bc5) aid_size_row_itut2_dropdow_list_ParamLimits

0x1f94,	// (0x00020bc5) aid_size_row_itut2_dropdow_list

0x2004,	// (0x00020c35) grid_vitu2_function_top_pane_ParamLimits

0x2004,	// (0x00020c35) grid_vitu2_function_top_pane

0x205a,	// (0x00020c8b) popup_vitu2_dropdown_list_window_ParamLimits

0x205a,	// (0x00020c8b) popup_vitu2_dropdown_list_window

0x207a,	// (0x00020cab) popup_vitu2_match_list_window

0x2298,	// (0x00020ec9) cell_vitu2_function_top_pane_ParamLimits

0x2298,	// (0x00020ec9) cell_vitu2_function_top_pane

0x22bc,	// (0x00020eed) cell_vitu2_function_top_pane_cp01_ParamLimits

0x22bc,	// (0x00020eed) cell_vitu2_function_top_pane_cp01

0x22d8,	// (0x00020f09) cell_vitu2_function_top_wide_pane_ParamLimits

0x22d8,	// (0x00020f09) cell_vitu2_function_top_wide_pane

0x1250,	// (0x0001fe81) bg_button_pane_cp012

0x22f4,	// (0x00020f25) cell_vitu2_function_top_pane_g1

0x2308,	// (0x00020f39) bg_button_pane_cp013_ParamLimits

0x2308,	// (0x00020f39) bg_button_pane_cp013

0x714c,	// (0x00025d7d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x714c,	// (0x00025d7d) cell_vitu2_function_top_wide_pane_g1

0x0d78,	// (0x0001f9a9) bg_popup_sub_pane_cp20

0x2324,	// (0x00020f55) list_vitu2_match_list_pane

0xd440,	// (0x0002c071) bg_popup_sub_pane_cp20_g1

0xd448,	// (0x0002c079) bg_popup_sub_pane_cp20_g2

0xa9b8,	// (0x000295e9) bg_popup_sub_pane_cp20_g3

0xd450,	// (0x0002c081) bg_popup_sub_pane_cp20_g4

0xa998,	// (0x000295c9) bg_popup_sub_pane_cp20_g5

0xd66a,	// (0x0002c29b) bg_popup_sub_pane_cp20_g6

0xd460,	// (0x0002c091) bg_popup_sub_pane_cp20_g7

0xd468,	// (0x0002c099) bg_popup_sub_pane_cp20_g8

0xd470,	// (0x0002c0a1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002e61e) bg_popup_sub_pane_cp20_g

0x233c,	// (0x00020f6d) list_vitu2_match_list_item_pane_ParamLimits

0x233c,	// (0x00020f6d) list_vitu2_match_list_item_pane

0x234e,	// (0x00020f7f) list_vitu2_match_list_item_pane_t1

0x0d86,	// (0x0001f9b7) bg_popup_sub_pane_cp21

0x235c,	// (0x00020f8d) grid_vitu2_dropdown_list_pane

0x2364,	// (0x00020f95) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2364,	// (0x00020f95) cell_vitu2_dropdown_list_char_pane

0x2389,	// (0x00020fba) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2389,	// (0x00020fba) cell_vitu2_dropdown_list_ctrl_pane

0xd672,	// (0x0002c2a3) cell_vitu2_dropdown_list_char_pane_g1

0xd67b,	// (0x0002c2ac) cell_vitu2_dropdown_list_char_pane_g2

0xd684,	// (0x0002c2b5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002e63b) cell_vitu2_dropdown_list_char_pane_g

0x23b7,	// (0x00020fe8) cell_vitu2_dropdown_list_char_pane_t1

0x71ac,	// (0x00025ddd) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71ac,	// (0x00025ddd) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71bc,	// (0x00025ded) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71bc,	// (0x00025ded) cell_vitu2_dropdown_list_ctrl_pane_g2

0x71cd,	// (0x00025dfe) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x71cd,	// (0x00025dfe) cell_vitu2_dropdown_list_ctrl_pane_g3

0x23c5,	// (0x00020ff6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x23c5,	// (0x00020ff6) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1de4,	// (0x00020a15) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1de4,	// (0x00020a15) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002e642) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002e642) cell_vitu2_dropdown_list_ctrl_pane_g

0x71dd,	// (0x00025e0e) aid_size_cell_gallery2_ParamLimits

0x71dd,	// (0x00025e0e) aid_size_cell_gallery2

0x71f7,	// (0x00025e28) grid_gallery2_pane_ParamLimits

0x71f7,	// (0x00025e28) grid_gallery2_pane

0x720e,	// (0x00025e3f) scroll_pane_cp029_ParamLimits

0x720e,	// (0x00025e3f) scroll_pane_cp029

0x721e,	// (0x00025e4f) cell_gallery2_pane_ParamLimits

0x721e,	// (0x00025e4f) cell_gallery2_pane

0xd68d,	// (0x0002c2be) cell_gallery2_pane_g2

0x7275,	// (0x00025ea6) cell_gallery2_pane_g3

0xd695,	// (0x0002c2c6) cell_gallery2_pane_g4

0xd69d,	// (0x0002c2ce) cell_gallery2_pane_g5

0xa72f,	// (0x00029360) grid_highlight_pane_cp10

0x207a,	// (0x00020cab) popup_vitu2_match_list_window_ParamLimits

0x208e,	// (0x00020cbf) popup_vitu2_query_window_ParamLimits

0x208e,	// (0x00020cbf) popup_vitu2_query_window

0x0d86,	// (0x0001f9b7) bg_vitu2_candi_button_pane

0xd672,	// (0x0002c2a3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd67b,	// (0x0002c2ac) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd684,	// (0x0002c2b5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x727d,	// (0x00025eae) bg_button_pane_cp015

0x728f,	// (0x00025ec0) bg_button_pane_cp016

0x72a2,	// (0x00025ed3) bg_button_pane_cp017

0xc603,	// (0x0002b234) bg_popup_sub_pane_cp22

0xd6a5,	// (0x0002c2d6) popup_vitu2_query_window_g1

0x72e7,	// (0x00025f18) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002e64d) popup_vitu2_query_window_g

0x7304,	// (0x00025f35) popup_vitu2_query_window_t1_ParamLimits

0x7304,	// (0x00025f35) popup_vitu2_query_window_t1

0x7337,	// (0x00025f68) popup_vitu2_query_window_t2_ParamLimits

0x7337,	// (0x00025f68) popup_vitu2_query_window_t2

0x7349,	// (0x00025f7a) popup_vitu2_query_window_t3_ParamLimits

0x7349,	// (0x00025f7a) popup_vitu2_query_window_t3

0x7371,	// (0x00025fa2) popup_vitu2_query_window_t4_ParamLimits

0x7371,	// (0x00025fa2) popup_vitu2_query_window_t4

0x7394,	// (0x00025fc5) popup_vitu2_query_window_t5_ParamLimits

0x7394,	// (0x00025fc5) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002e654) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002e654) popup_vitu2_query_window_t

0xd546,	// (0x0002c177) main_cset_text_pane

0x6dbe,	// (0x000259ef) aid_area_touch_slider_ParamLimits

0x6dda,	// (0x00025a0b) cset_slider_pane_ParamLimits

0x6e04,	// (0x00025a35) main_cset_slider_pane_g1_ParamLimits

0x6e19,	// (0x00025a4a) main_cset_slider_pane_g2_ParamLimits

0xd567,	// (0x0002c198) main_cset_slider_pane_g3_ParamLimits

0xd567,	// (0x0002c198) main_cset_slider_pane_g3

0x6e2e,	// (0x00025a5f) main_cset_slider_pane_g4_ParamLimits

0x6e2e,	// (0x00025a5f) main_cset_slider_pane_g4

0x6e3d,	// (0x00025a6e) main_cset_slider_pane_g5_ParamLimits

0x6e3d,	// (0x00025a6e) main_cset_slider_pane_g5

0x6e49,	// (0x00025a7a) main_cset_slider_pane_g6_ParamLimits

0x6e49,	// (0x00025a7a) main_cset_slider_pane_g6

0xf976,	// (0x0002e5a7) main_cset_slider_pane_g_ParamLimits

0xd597,	// (0x0002c1c8) main_cset_slider_pane_t1_ParamLimits

0x6ed5,	// (0x00025b06) main_cset_slider_pane_t2_ParamLimits

0x6eef,	// (0x00025b20) main_cset_slider_pane_t3_ParamLimits

0x6f09,	// (0x00025b3a) main_cset_slider_pane_t4_ParamLimits

0x6f23,	// (0x00025b54) main_cset_slider_pane_t5_ParamLimits

0x6f3d,	// (0x00025b6e) main_cset_slider_pane_t6_ParamLimits

0x6f52,	// (0x00025b83) main_cset_slider_pane_t7_ParamLimits

0x6f7c,	// (0x00025bad) main_cset_slider_pane_t8_ParamLimits

0x6f7c,	// (0x00025bad) main_cset_slider_pane_t8

0x6fa4,	// (0x00025bd5) main_cset_slider_pane_t9_ParamLimits

0x6fa4,	// (0x00025bd5) main_cset_slider_pane_t9

0x6fcc,	// (0x00025bfd) main_cset_slider_pane_t10_ParamLimits

0x6fcc,	// (0x00025bfd) main_cset_slider_pane_t10

0x6ff4,	// (0x00025c25) main_cset_slider_pane_t11_ParamLimits

0x6ff4,	// (0x00025c25) main_cset_slider_pane_t11

0x701c,	// (0x00025c4d) main_cset_slider_pane_t12_ParamLimits

0x701c,	// (0x00025c4d) main_cset_slider_pane_t12

0x7039,	// (0x00025c6a) main_cset_slider_pane_t13_ParamLimits

0x7039,	// (0x00025c6a) main_cset_slider_pane_t13

0xf99b,	// (0x0002e5cc) main_cset_slider_pane_t_ParamLimits

0x9e15,	// (0x00028a46) bg_popup_sub_pane_cp011

0xd6b1,	// (0x0002c2e2) main_cset_text_pane_g1

0xd6b9,	// (0x0002c2ea) main_cset_text_pane_t1

0xd6c7,	// (0x0002c2f8) main_cset_text_pane_t2

0xd6d5,	// (0x0002c306) main_cset_text_pane_t3

0xd6e3,	// (0x0002c314) main_cset_text_pane_t4

0xd6f1,	// (0x0002c322) main_cset_text_pane_t5

0xd6ff,	// (0x0002c330) main_cset_text_pane_t6

0xd70d,	// (0x0002c33e) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002e663) main_cset_text_pane_t

0x0d86,	// (0x0001f9b7) main_cam4_burst_pane

0x0d86,	// (0x0001f9b7) main_cam5_pane

0x6d07,	// (0x00025938) bg_button_pane_cp019

0x6d10,	// (0x00025941) bg_button_pane_cp020

0xd573,	// (0x0002c1a4) main_cset_slider_pane_g7_ParamLimits

0xd573,	// (0x0002c1a4) main_cset_slider_pane_g7

0xd57f,	// (0x0002c1b0) main_cset_slider_pane_g8_ParamLimits

0xd57f,	// (0x0002c1b0) main_cset_slider_pane_g8

0x6e5d,	// (0x00025a8e) main_cset_slider_pane_g9_ParamLimits

0x6e5d,	// (0x00025a8e) main_cset_slider_pane_g9

0x6e69,	// (0x00025a9a) main_cset_slider_pane_g10_ParamLimits

0x6e69,	// (0x00025a9a) main_cset_slider_pane_g10

0x6e75,	// (0x00025aa6) main_cset_slider_pane_g11_ParamLimits

0x6e75,	// (0x00025aa6) main_cset_slider_pane_g11

0x6e81,	// (0x00025ab2) main_cset_slider_pane_g12_ParamLimits

0x6e81,	// (0x00025ab2) main_cset_slider_pane_g12

0x6e8d,	// (0x00025abe) main_cset_slider_pane_g13_ParamLimits

0x6e8d,	// (0x00025abe) main_cset_slider_pane_g13

0x6e99,	// (0x00025aca) main_cset_slider_pane_g14_ParamLimits

0x6e99,	// (0x00025aca) main_cset_slider_pane_g14

0x6ea5,	// (0x00025ad6) main_cset_slider_pane_g15_ParamLimits

0x6ea5,	// (0x00025ad6) main_cset_slider_pane_g15

0xd5c5,	// (0x0002c1f6) main_cset_slider_pane_t14_ParamLimits

0xd5c5,	// (0x0002c1f6) main_cset_slider_pane_t14

0xd5fe,	// (0x0002c22f) main_cset_slider_pane_t15_ParamLimits

0xd5fe,	// (0x0002c22f) main_cset_slider_pane_t15

0x740d,	// (0x0002603e) aid_cam4_burst_size_cell_ParamLimits

0x740d,	// (0x0002603e) aid_cam4_burst_size_cell

0x7429,	// (0x0002605a) grid_cam4_burst_pane_ParamLimits

0x7429,	// (0x0002605a) grid_cam4_burst_pane

0x745b,	// (0x0002608c) linegrid_cam4_burst_pane_ParamLimits

0x745b,	// (0x0002608c) linegrid_cam4_burst_pane

0x7479,	// (0x000260aa) scroll_pane_cp30_ParamLimits

0x7479,	// (0x000260aa) scroll_pane_cp30

0x7485,	// (0x000260b6) cell_cam4_burst_pane_ParamLimits

0x7485,	// (0x000260b6) cell_cam4_burst_pane

0xd71b,	// (0x0002c34c) linegrid_cam4_burst_pane_g1_ParamLimits

0xd71b,	// (0x0002c34c) linegrid_cam4_burst_pane_g1

0x74c5,	// (0x000260f6) linegrid_cam4_burst_pane_g2_ParamLimits

0x74c5,	// (0x000260f6) linegrid_cam4_burst_pane_g2

0xd728,	// (0x0002c359) linegrid_cam4_burst_pane_g3_ParamLimits

0xd728,	// (0x0002c359) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002e672) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002e672) linegrid_cam4_burst_pane_g

0x74d6,	// (0x00026107) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74d6,	// (0x00026107) linegrid_cam4_burst_pane_g3_copy1

0xd735,	// (0x0002c366) linegrid_cam4_burst_pane_g4_ParamLimits

0xd735,	// (0x0002c366) linegrid_cam4_burst_pane_g4

0x74f0,	// (0x00026121) linegrid_cam4_burst_pane_g5_ParamLimits

0x74f0,	// (0x00026121) linegrid_cam4_burst_pane_g5

0x7501,	// (0x00026132) linegrid_cam4_burst_pane_g6_ParamLimits

0x7501,	// (0x00026132) linegrid_cam4_burst_pane_g6

0xd742,	// (0x0002c373) linegrid_cam4_burst_pane_g7_ParamLimits

0xd742,	// (0x0002c373) linegrid_cam4_burst_pane_g7

0x7518,	// (0x00026149) cell_cam4_burst_pane_g1

0xd75b,	// (0x0002c38c) main_cam5_pane_t1_ParamLimits

0xd75b,	// (0x0002c38c) main_cam5_pane_t1

0xd76d,	// (0x0002c39e) main_cam5_pane_t2_ParamLimits

0xd76d,	// (0x0002c39e) main_cam5_pane_t2

0xd77f,	// (0x0002c3b0) main_cam5_pane_t3_ParamLimits

0xd77f,	// (0x0002c3b0) main_cam5_pane_t3

0xd7c4,	// (0x0002c3f5) main_cam5_pane_t4_ParamLimits

0xd7c4,	// (0x0002c3f5) main_cam5_pane_t4

0xd7dc,	// (0x0002c40d) main_cam5_pane_t5_ParamLimits

0xd7dc,	// (0x0002c40d) main_cam5_pane_t5

0xd7f0,	// (0x0002c421) main_cam5_pane_t6_ParamLimits

0xd7f0,	// (0x0002c421) main_cam5_pane_t6

0xd804,	// (0x0002c435) main_cam5_pane_t7_ParamLimits

0xd804,	// (0x0002c435) main_cam5_pane_t7

0xd816,	// (0x0002c447) main_cam5_pane_t8_ParamLimits

0xd816,	// (0x0002c447) main_cam5_pane_t8

0xd834,	// (0x0002c465) main_cam5_pane_t9_ParamLimits

0xd834,	// (0x0002c465) main_cam5_pane_t9

0xd846,	// (0x0002c477) main_cam5_pane_t10_ParamLimits

0xd846,	// (0x0002c477) main_cam5_pane_t10

0xd858,	// (0x0002c489) main_cam5_pane_t11_ParamLimits

0xd858,	// (0x0002c489) main_cam5_pane_t11

0xd86c,	// (0x0002c49d) main_cam5_pane_t12_ParamLimits

0xd86c,	// (0x0002c49d) main_cam5_pane_t12

0xd883,	// (0x0002c4b4) main_cam5_pane_t13_ParamLimits

0xd883,	// (0x0002c4b4) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002e67e) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002e67e) main_cam5_pane_t

0x0d37,	// (0x0001f968) popup_scut_keymap_window_ParamLimits

0x0d37,	// (0x0001f968) popup_scut_keymap_window

0x752b,	// (0x0002615c) aid_size_cell_brow_shortcut

0xa72f,	// (0x00029360) bg_popup_window_pane_cp010

0x7537,	// (0x00026168) grid_scut_pane

0x7543,	// (0x00026174) cell_scut_pane_ParamLimits

0x7543,	// (0x00026174) cell_scut_pane

0x755e,	// (0x0002618f) cell_scut_pane_g1

0xd8a6,	// (0x0002c4d7) cell_scut_pane_t1

0xd8b5,	// (0x0002c4e6) cell_scut_pane_t2

0x7567,	// (0x00026198) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002e699) cell_scut_pane_t

0x5e4b,	// (0x00024a7c) main_mup3_pane_g8_ParamLimits

0x5e4b,	// (0x00024a7c) main_mup3_pane_g8

0x1fa4,	// (0x00020bd5) area_vitu2_query_pane_ParamLimits

0x1fa4,	// (0x00020bd5) area_vitu2_query_pane

0x72b5,	// (0x00025ee6) input_focus_pane_cp08

0xd8c4,	// (0x0002c4f5) area_vitu2_query_pane_g1

0x7575,	// (0x000261a6) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002e6a0) area_vitu2_query_pane_g

0x7586,	// (0x000261b7) area_vitu2_query_pane_t1_ParamLimits

0x7586,	// (0x000261b7) area_vitu2_query_pane_t1

0x759a,	// (0x000261cb) area_vitu2_query_pane_t2_ParamLimits

0x759a,	// (0x000261cb) area_vitu2_query_pane_t2

0x75ae,	// (0x000261df) area_vitu2_query_pane_t3_ParamLimits

0x75ae,	// (0x000261df) area_vitu2_query_pane_t3

0xd8d0,	// (0x0002c501) area_vitu2_query_pane_t4_ParamLimits

0xd8d0,	// (0x0002c501) area_vitu2_query_pane_t4

0xd8f8,	// (0x0002c529) area_vitu2_query_pane_t5_ParamLimits

0xd8f8,	// (0x0002c529) area_vitu2_query_pane_t5

0xd920,	// (0x0002c551) area_vitu2_query_pane_t6_ParamLimits

0xd920,	// (0x0002c551) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002e6a5) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002e6a5) area_vitu2_query_pane_t

0x75d6,	// (0x00026207) bg_button_pane_cp018

0x75e4,	// (0x00026215) bg_button_pane_cp021

0x75f0,	// (0x00026221) bg_button_pane_cp022

0x7601,	// (0x00026232) input_focus_pane_cp09

0xafe3,	// (0x00029c14) aid_size_touch_mv_arrow_left

0xb00e,	// (0x00029c3f) aid_size_touch_mv_arrow_right

0x6ebd,	// (0x00025aee) main_cset_slider_pane_g16_ParamLimits

0x6ebd,	// (0x00025aee) main_cset_slider_pane_g16

0x6ec9,	// (0x00025afa) main_cset_slider_pane_g17_ParamLimits

0x6ec9,	// (0x00025afa) main_cset_slider_pane_g17

0x7518,	// (0x00026149) cell_cam4_burst_pane_g1_ParamLimits

0x9e15,	// (0x00028a46) compa_mode_pane

0x70bf,	// (0x00025cf0) popup_vtel_slider_window_g3_ParamLimits

0x70bf,	// (0x00025cf0) popup_vtel_slider_window_g3

0x70d3,	// (0x00025d04) popup_vtel_slider_window_g4_ParamLimits

0x70d3,	// (0x00025d04) popup_vtel_slider_window_g4

0x70e7,	// (0x00025d18) popup_vtel_slider_window_t1_ParamLimits

0x70e7,	// (0x00025d18) popup_vtel_slider_window_t1

0x0d86,	// (0x0001f9b7) main_cl_pane

0x12fa,	// (0x0001ff2b) popup_imed_adjust2_window_ParamLimits

0xc603,	// (0x0002b234) bg_tb_trans_pane_cp05_ParamLimits

0xcf37,	// (0x0002bb68) popup_imed_adjust2_window_g1_ParamLimits

0xcf46,	// (0x0002bb77) popup_imed_adjust2_window_g2_ParamLimits

0xcf46,	// (0x0002bb77) popup_imed_adjust2_window_g2

0xcf52,	// (0x0002bb83) popup_imed_adjust2_window_g3_ParamLimits

0xcf52,	// (0x0002bb83) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0002e40c) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0002e40c) popup_imed_adjust2_window_g

0xcf5e,	// (0x0002bb8f) popup_imed_adjust2_window_t1_ParamLimits

0xcf76,	// (0x0002bba7) slider_imed_adjust_pane_ParamLimits

0xcf8a,	// (0x0002bbbb) slider_imed_adjust_pane_g1_ParamLimits

0xcf9a,	// (0x0002bbcb) slider_imed_adjust_pane_g2_ParamLimits

0xcfaa,	// (0x0002bbdb) slider_imed_adjust_pane_g3_ParamLimits

0xcfbb,	// (0x0002bbec) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0002e413) slider_imed_adjust_pane_g_ParamLimits

0x1d1d,	// (0x0002094e) aid_touch_area_cam4_ParamLimits

0x1d1d,	// (0x0002094e) aid_touch_area_cam4

0x1d2d,	// (0x0002095e) battery_pane_cp01

0x1db4,	// (0x000209e5) main_camera4_pane_g6_ParamLimits

0x1db4,	// (0x000209e5) main_camera4_pane_g6

0x1dd2,	// (0x00020a03) main_camera4_pane_t2_ParamLimits

0x1dd2,	// (0x00020a03) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002e51a) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002e51a) main_camera4_pane_t

0x1e3d,	// (0x00020a6e) aid_touch_area_vid4_ParamLimits

0x1e3d,	// (0x00020a6e) aid_touch_area_vid4

0x1e7d,	// (0x00020aae) main_video4_pane_g5_ParamLimits

0x1e7d,	// (0x00020aae) main_video4_pane_g5

0x1ea3,	// (0x00020ad4) vid4_progress_pane_ParamLimits

0x1ea3,	// (0x00020ad4) vid4_progress_pane

0xd58b,	// (0x0002c1bc) main_cset_slider_pane_g18_ParamLimits

0xd58b,	// (0x0002c1bc) main_cset_slider_pane_g18

0xd74f,	// (0x0002c380) cell_cam4_burst_pane_g2_ParamLimits

0xd74f,	// (0x0002c380) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002e679) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002e679) cell_cam4_burst_pane_g

0x7612,	// (0x00026243) bg_cl_pane_ParamLimits

0x7612,	// (0x00026243) bg_cl_pane

0x761e,	// (0x0002624f) cl_header_pane_ParamLimits

0x761e,	// (0x0002624f) cl_header_pane

0x762a,	// (0x0002625b) cl_listscroll_pane_ParamLimits

0x762a,	// (0x0002625b) cl_listscroll_pane

0xd96c,	// (0x0002c59d) bg_cl_pane_g1

0xd974,	// (0x0002c5a5) bg_cl_pane_g2

0xd97c,	// (0x0002c5ad) bg_cl_pane_g3

0xd984,	// (0x0002c5b5) bg_cl_pane_g4

0xd98c,	// (0x0002c5bd) bg_cl_pane_g5

0xd994,	// (0x0002c5c5) bg_cl_pane_g6

0xd99c,	// (0x0002c5cd) bg_cl_pane_g7

0xd9a4,	// (0x0002c5d5) bg_cl_pane_g8

0xd9ac,	// (0x0002c5dd) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002e6b4) bg_cl_pane_g

0x7636,	// (0x00026267) aid_height_cl_leading_ParamLimits

0x7636,	// (0x00026267) aid_height_cl_leading

0x7642,	// (0x00026273) aid_height_cl_text_ParamLimits

0x7642,	// (0x00026273) aid_height_cl_text

0xd3b8,	// (0x0002bfe9) bg_cl_header_pane_ParamLimits

0xd3b8,	// (0x0002bfe9) bg_cl_header_pane

0x765a,	// (0x0002628b) cl_header_pane_g1_ParamLimits

0x765a,	// (0x0002628b) cl_header_pane_g1

0x7667,	// (0x00026298) cl_header_pane_t1_ParamLimits

0x7667,	// (0x00026298) cl_header_pane_t1

0xd9b4,	// (0x0002c5e5) cl_list_pane

0xd55e,	// (0x0002c18f) hc_scroll_pane_cp01

0xa998,	// (0x000295c9) bg_cl_header_pane_g1

0xd440,	// (0x0002c071) bg_cl_header_pane_g2

0xa9b8,	// (0x000295e9) bg_cl_header_pane_g3

0xd450,	// (0x0002c081) bg_cl_header_pane_g4

0xd448,	// (0x0002c079) bg_cl_header_pane_g5

0xd66a,	// (0x0002c29b) bg_cl_header_pane_g6

0xd468,	// (0x0002c099) bg_cl_header_pane_g7

0xd470,	// (0x0002c0a1) bg_cl_header_pane_g8

0xd460,	// (0x0002c091) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002e6c7) bg_cl_header_pane_g

0x7679,	// (0x000262aa) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7679,	// (0x000262aa) hc_cl_list_double_graphic_heading_pane

0x7689,	// (0x000262ba) hc_cl_list_single_graphic_pane_ParamLimits

0x7689,	// (0x000262ba) hc_cl_list_single_graphic_pane

0x769b,	// (0x000262cc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x769b,	// (0x000262cc) hc_cl_list_single_graphic_pane_g1

0x76a7,	// (0x000262d8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76a7,	// (0x000262d8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002e6da) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002e6da) hc_cl_list_single_graphic_pane_g

0x76bb,	// (0x000262ec) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76bb,	// (0x000262ec) hc_cl_list_single_graphic_pane_t1

0x769b,	// (0x000262cc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x769b,	// (0x000262cc) hc_cl_list_double_graphic_heading_pane_g1

0x76d0,	// (0x00026301) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76d0,	// (0x00026301) hc_cl_list_double_graphic_heading_pane_g2

0x76e4,	// (0x00026315) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76e4,	// (0x00026315) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002e6df) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002e6df) hc_cl_list_double_graphic_heading_pane_g

0x76f8,	// (0x00026329) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76f8,	// (0x00026329) hc_cl_list_double_graphic_heading_pane_t1

0x770d,	// (0x0002633e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x770d,	// (0x0002633e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002e6e6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002e6e6) hc_cl_list_double_graphic_heading_pane_t

0x23e6,	// (0x00021017) vid4_progress_pane_g1

0x23f6,	// (0x00021027) vid4_progress_pane_g2

0x2406,	// (0x00021037) vid4_progress_pane_g3

0x1e0b,	// (0x00020a3c) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002e6eb) vid4_progress_pane_g

0x2418,	// (0x00021049) vid4_progress_pane_t1

0x242e,	// (0x0002105f) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002e6f6) vid4_progress_pane_t

0x2458,	// (0x00021089) wait_bar_pane_cp07

0xc828,	// (0x0002b459) blid_firmament_pane_ParamLimits

0xc86b,	// (0x0002b49c) popup_blid_sat_info2_window_g1

0xc88f,	// (0x0002b4c0) popup_blid_sat_info2_window_t3

0xc89d,	// (0x0002b4ce) popup_blid_sat_info2_window_t4

0xc8ab,	// (0x0002b4dc) popup_blid_sat_info2_window_t5

0xc8b9,	// (0x0002b4ea) popup_blid_sat_info2_window_t6

0xc8c9,	// (0x0002b4fa) popup_blid_sat_info2_window_t7

0xc8d7,	// (0x0002b508) popup_blid_sat_info2_window_t8

0xc8e5,	// (0x0002b516) popup_blid_sat_info2_window_t9

0xc8f3,	// (0x0002b524) popup_blid_sat_info2_window_t10

0xc9bb,	// (0x0002b5ec) aid_firma_cardinal_ParamLimits

0xc9cf,	// (0x0002b600) blid_firmament_pane_t1_ParamLimits

0xc9e6,	// (0x0002b617) blid_firmament_pane_t2_ParamLimits

0xc9fd,	// (0x0002b62e) blid_firmament_pane_t3_ParamLimits

0xca14,	// (0x0002b645) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0002e300) blid_firmament_pane_t_ParamLimits

0xca2b,	// (0x0002b65c) blid_sat_info_pane_ParamLimits

0x1250,	// (0x0001fe81) main_cam_set_pane_ParamLimits

0x6562,	// (0x00025193) aid_size_cell_colour_35_ParamLimits

0x657c,	// (0x000251ad) aid_size_cell_colour_112_ParamLimits

0x6593,	// (0x000251c4) aid_size_cell_effect_ParamLimits

0xa890,	// (0x000294c1) bg_tb_trans_pane_cp02_ParamLimits

0xb26f,	// (0x00029ea0) heading_imed_pane_ParamLimits

0x65ad,	// (0x000251de) listscroll_imed_pane_ParamLimits

0xbc2b,	// (0x0002a85c) popup_call2_audio_first_window_g5_ParamLimits

0xbc2b,	// (0x0002a85c) popup_call2_audio_first_window_g5

0x1ad5,	// (0x00020706) aid_size_touch_image3_arrow_left_ParamLimits

0x1ad5,	// (0x00020706) aid_size_touch_image3_arrow_left

0x1aeb,	// (0x0002071c) aid_size_touch_image3_arrow_right_ParamLimits

0x1aeb,	// (0x0002071c) aid_size_touch_image3_arrow_right

0x2443,	// (0x00021074) vid4_progress_pane_t3

0x6851,	// (0x00025482) main_hwr_training_symbol_option_pane_ParamLimits

0x6851,	// (0x00025482) main_hwr_training_symbol_option_pane

0xd230,	// (0x0002be61) popup_hwr_training_preview_window_ParamLimits

0xd230,	// (0x0002be61) popup_hwr_training_preview_window

0x17af,	// (0x000203e0) hwr_training_navi_pane_g5_ParamLimits

0x17af,	// (0x000203e0) hwr_training_navi_pane_g5

0xd42e,	// (0x0002c05f) popup_char_count_window

0x0d78,	// (0x0001f9a9) bg_popup_sub_pane_cp20_ParamLimits

0x2324,	// (0x00020f55) list_vitu2_match_list_pane_ParamLimits

0x2330,	// (0x00020f61) vitu2_page_scroll_pane_ParamLimits

0x2330,	// (0x00020f61) vitu2_page_scroll_pane

0xd9df,	// (0x0002c610) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd9df,	// (0x0002c610) list_single_hwr_training_symbol_option_pane

0xd9f2,	// (0x0002c623) list_single_hwr_training_symbol_option_pane_g1

0xd9fa,	// (0x0002c62b) list_single_hwr_training_symbol_option_pane_t1

0xda08,	// (0x0002c639) bg_button_pane_cp023

0xda11,	// (0x0002c642) bg_button_pane_cp024

0x7751,	// (0x00026382) vitu2_page_scroll_pane_g1

0x7759,	// (0x0002638a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002e6fd) vitu2_page_scroll_pane_g

0x7763,	// (0x00026394) vitu2_page_scroll_pane_t1

0xd394,	// (0x0002bfc5) popup_char_count_window_g1

0xda44,	// (0x0002c675) popup_char_count_window_g2

0xd38b,	// (0x0002bfbc) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002e702) popup_char_count_window_g

0xda4d,	// (0x0002c67e) popup_char_count_window_t1

0x0d86,	// (0x0001f9b7) main_vded2_pane

0xcf23,	// (0x0002bb54) aid_size_cell_imed_line

0xcf2d,	// (0x0002bb5e) grid_imed_line_width_pane

0x1f17,	// (0x00020b48) vid4_indicators_pane_g4

0xda5b,	// (0x0002c68c) cell_imed_line_width_pane_ParamLimits

0xda5b,	// (0x0002c68c) cell_imed_line_width_pane

0xda71,	// (0x0002c6a2) cell_imed_line_width_pane_g1

0xd7b2,	// (0x0002c3e3) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002e709) cell_imed_line_width_pane_g

0x7772,	// (0x000263a3) main_vded2_pane_g1_ParamLimits

0x7772,	// (0x000263a3) main_vded2_pane_g1

0x7781,	// (0x000263b2) main_vded2_pane_g2_ParamLimits

0x7781,	// (0x000263b2) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002e70e) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002e70e) main_vded2_pane_g

0x778f,	// (0x000263c0) vded2_slider_pane_ParamLimits

0x778f,	// (0x000263c0) vded2_slider_pane

0x779c,	// (0x000263cd) aid_size_touch_vded2_end

0x77a6,	// (0x000263d7) aid_size_touch_vded2_playhead

0xda7a,	// (0x0002c6ab) aid_size_touch_vded2_start

0xda82,	// (0x0002c6b3) vded2_slider_bg_pane

0xda8b,	// (0x0002c6bc) vded2_slider_pane_g1

0xda94,	// (0x0002c6c5) vded2_slider_pane_g2

0x77ae,	// (0x000263df) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002e713) vded2_slider_pane_g

0xd39d,	// (0x0002bfce) vded2_slider_bg_pane_g1

0xd3a6,	// (0x0002bfd7) vded2_slider_bg_pane_g2

0xd3af,	// (0x0002bfe0) vded2_slider_bg_pane_g3

0x0002,

0xf79f,	// (0x0002e3d0) vded2_slider_bg_pane_g

0x4d7b,	// (0x000239ac) aid_postcard_touch_down_pane_ParamLimits

0x4d7b,	// (0x000239ac) aid_postcard_touch_down_pane

0x4d8b,	// (0x000239bc) aid_postcard_touch_up_pane_ParamLimits

0x4d8b,	// (0x000239bc) aid_postcard_touch_up_pane

0x0d86,	// (0x0001f9b7) main_blid2_pane

0x1279,	// (0x0001feaa) popup_blid2_search_window

0x9e15,	// (0x00028a46) blid2_gps_pane

0x9e15,	// (0x00028a46) blid2_navig_pane

0x9e15,	// (0x00028a46) blid2_search_pane

0x9e15,	// (0x00028a46) blid2_tripm_pane

0x77b7,	// (0x000263e8) blid2_search_pane_g1_ParamLimits

0x77b7,	// (0x000263e8) blid2_search_pane_g1

0x77c3,	// (0x000263f4) blid2_search_pane_t1_ParamLimits

0x77c3,	// (0x000263f4) blid2_search_pane_t1

0x77d5,	// (0x00026406) aid_size_cell_blid2_gps_ParamLimits

0x77d5,	// (0x00026406) aid_size_cell_blid2_gps

0x77e5,	// (0x00026416) blid2_gps_pane_g1_ParamLimits

0x77e5,	// (0x00026416) blid2_gps_pane_g1

0x77f1,	// (0x00026422) grid_blid2_satellite_pane_ParamLimits

0x77f1,	// (0x00026422) grid_blid2_satellite_pane

0x77ff,	// (0x00026430) blid2_navig_pane_g1_ParamLimits

0x77ff,	// (0x00026430) blid2_navig_pane_g1

0x780b,	// (0x0002643c) blid2_navig_pane_t1_ParamLimits

0x780b,	// (0x0002643c) blid2_navig_pane_t1

0x781d,	// (0x0002644e) blid2_navig_pane_t2_ParamLimits

0x781d,	// (0x0002644e) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0002e71a) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0002e71a) blid2_navig_pane_t

0x782f,	// (0x00026460) blid2_navig_ring_pane_ParamLimits

0x782f,	// (0x00026460) blid2_navig_ring_pane

0x783f,	// (0x00026470) blid2_speed_pane_ParamLimits

0x783f,	// (0x00026470) blid2_speed_pane

0x784b,	// (0x0002647c) blid2_tripm_pane_g1_ParamLimits

0x784b,	// (0x0002647c) blid2_tripm_pane_g1

0x785b,	// (0x0002648c) blid2_tripm_pane_g2_ParamLimits

0x785b,	// (0x0002648c) blid2_tripm_pane_g2

0x7867,	// (0x00026498) blid2_tripm_pane_g3_ParamLimits

0x7867,	// (0x00026498) blid2_tripm_pane_g3

0x7873,	// (0x000264a4) blid2_tripm_pane_g4_ParamLimits

0x7873,	// (0x000264a4) blid2_tripm_pane_g4

0x787f,	// (0x000264b0) blid2_tripm_pane_g5_ParamLimits

0x787f,	// (0x000264b0) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0002e71f) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0002e71f) blid2_tripm_pane_g

0x789b,	// (0x000264cc) blid2_tripm_pane_t1_ParamLimits

0x789b,	// (0x000264cc) blid2_tripm_pane_t1

0x78ad,	// (0x000264de) blid2_tripm_pane_t2_ParamLimits

0x78ad,	// (0x000264de) blid2_tripm_pane_t2

0x78bf,	// (0x000264f0) blid2_tripm_pane_t3_ParamLimits

0x78bf,	// (0x000264f0) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0002e72c) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0002e72c) blid2_tripm_pane_t

0x78f1,	// (0x00026522) cell_blid2_satellite_pane_ParamLimits

0x78f1,	// (0x00026522) cell_blid2_satellite_pane

0x790f,	// (0x00026540) cell_blid2_satellite_pane_g1

0xda9c,	// (0x0002c6cd) cell_blid2_satellite_pane_t1

0xca3b,	// (0x0002b66c) blid2_speed_pane_g1

0xdaaa,	// (0x0002c6db) blid2_speed_pane_t1

0xdab8,	// (0x0002c6e9) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0002e735) blid2_speed_pane_t

0xca3b,	// (0x0002b66c) blid2_navig_ring_pane_g1

0x7918,	// (0x00026549) blid2_navig_ring_pane_g2

0x7920,	// (0x00026551) blid2_navig_ring_pane_g3

0x7928,	// (0x00026559) blid2_navig_ring_pane_g4

0x7930,	// (0x00026561) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0002e73a) blid2_navig_ring_pane_g

0x9e15,	// (0x00028a46) bg_popup_window_pane_cp011

0xdac6,	// (0x0002c6f7) popup_blid2_search_window_g1

0xdace,	// (0x0002c6ff) popup_blid2_search_window_t1

0xdadc,	// (0x0002c70d) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0002e745) popup_blid2_search_window_t

0xa8a7,	// (0x000294d8) main_browser_pane_g1

0xa587,	// (0x000291b8) main_browser_pane_ParamLimits

0x1250,	// (0x0001fe81) bg_button_pane_cp011_ParamLimits

0x223f,	// (0x00020e70) cell_vitu2_function_pane_g1_ParamLimits

0xc603,	// (0x0002b234) bg_popup_sub_pane_cp22_ParamLimits

0x72b5,	// (0x00025ee6) input_focus_pane_cp08_ParamLimits

0x72cc,	// (0x00025efd) popup_vitu2_query_button_pane_ParamLimits

0x72cc,	// (0x00025efd) popup_vitu2_query_button_pane

0x72dd,	// (0x00025f0e) popup_vitu2_query_input_button_pane

0xd6a5,	// (0x0002c2d6) popup_vitu2_query_window_g1_ParamLimits

0x72e7,	// (0x00025f18) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002e64d) popup_vitu2_query_window_g_ParamLimits

0x9e15,	// (0x00028a46) bg_button_pane_cp026

0x7938,	// (0x00026569) popup_vitu2_query_input_button_pane_g1

0x9e15,	// (0x00028a46) bg_button_pane_cp025

0xdaea,	// (0x0002c71b) popup_vitu2_query_button_pane_t1

0x5ab1,	// (0x000246e2) main_mp3_pane_t6

0x5ac1,	// (0x000246f2) popup_slider_window_cp01

0x1df2,	// (0x00020a23) cam4_battery_pane

0x1ed0,	// (0x00020b01) cam4_battery_pane_cp02

0x23de,	// (0x0002100f) cam4_battery_pane_cp01

0x23de,	// (0x0002100f) cam4_battery_pane_cp03

0xd7ba,	// (0x0002c3eb) cam4_battery_pane_g1

0xca3b,	// (0x0002b66c) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0002e74a) cam4_battery_pane_g

0xc901,	// (0x0002b532) popup_blid_sat_info2_window_t11

0xafe3,	// (0x00029c14) aid_size_touch_mv_arrow_left_ParamLimits

0xb00e,	// (0x00029c3f) aid_size_touch_mv_arrow_right_ParamLimits

0xb06c,	// (0x00029c9d) navi_pane_g1_ParamLimits

0xb078,	// (0x00029ca9) navi_pane_g2_ParamLimits

0xb0a6,	// (0x00029cd7) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0002e012) navi_pane_g_ParamLimits

0x47ad,	// (0x000233de) navi_pane_mv_t1_ParamLimits

0x65b9,	// (0x000251ea) grid_imed_effect_pane_ParamLimits

0x32d8,	// (0x00021f09) aid_placing_vt_slider_lsc

0xa7c6,	// (0x000293f7) aid_placing_vt_slider_prt

0xa890,	// (0x000294c1) bg_tb_trans_pane_cp01_ParamLimits

0xcb82,	// (0x0002b7b3) popup_image_details_window_g1_ParamLimits

0xcb95,	// (0x0002b7c6) popup_image_details_window_g2_ParamLimits

0xcbaa,	// (0x0002b7db) popup_image_details_window_g3_ParamLimits

0xcbaa,	// (0x0002b7db) popup_image_details_window_g3

0xf714,	// (0x0002e345) popup_image_details_window_g_ParamLimits

0xcbbe,	// (0x0002b7ef) popup_image_details_window_t1_ParamLimits

0xcbd0,	// (0x0002b801) popup_image_details_window_t2_ParamLimits

0xcbe9,	// (0x0002b81a) popup_image_details_window_t3_ParamLimits

0xcbfd,	// (0x0002b82e) popup_image_details_window_t4_ParamLimits

0xcc18,	// (0x0002b849) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0002e34c) popup_image_details_window_t_ParamLimits

0x764e,	// (0x0002627f) cl_header_name_pane_ParamLimits

0x764e,	// (0x0002627f) cl_header_name_pane

0x7940,	// (0x00026571) cl_header_name_pane_t1_ParamLimits

0x7940,	// (0x00026571) cl_header_name_pane_t1

0x7957,	// (0x00026588) cl_header_name_pane_t2_ParamLimits

0x7957,	// (0x00026588) cl_header_name_pane_t2

0x7981,	// (0x000265b2) cl_header_name_pane_t3_ParamLimits

0x7981,	// (0x000265b2) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0002e74f) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0002e74f) cl_header_name_pane_t

0xb135,	// (0x00029d66) navi_pane_mv_g2_ParamLimits

0xd3eb,	// (0x0002c01c) field_vitu2_entry_pane_g1_ParamLimits

0xd3f7,	// (0x0002c028) field_vitu2_entry_pane_g2_ParamLimits

0xd403,	// (0x0002c034) field_vitu2_entry_pane_g3_ParamLimits

0xd403,	// (0x0002c034) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002e54c) field_vitu2_entry_pane_g_ParamLimits

0x210b,	// (0x00020d3c) cell_vitu2_itu_pane_g1_ParamLimits

0x211d,	// (0x00020d4e) cell_vitu2_itu_pane_g2_ParamLimits

0x211d,	// (0x00020d4e) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002e558) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002e558) cell_vitu2_itu_pane_g

0x1250,	// (0x0001fe81) bg_vkb2_func_pane_cp05_ParamLimits

0x1250,	// (0x0001fe81) bg_vkb2_func_pane_cp05

0x1250,	// (0x0001fe81) bg_vkb2_func_pane_cp03

0x1250,	// (0x0001fe81) bg_vkb2_func_pane_cp04

0x1250,	// (0x0001fe81) bg_vkb2_func_pane_cp10_ParamLimits

0x1250,	// (0x0001fe81) bg_vkb2_func_pane_cp10

0x75f0,	// (0x00026221) bg_vkb2_func_pane_cp08

0x75d6,	// (0x00026207) bg_vkb2_func_pane_cp06

0x75e4,	// (0x00026215) bg_vkb2_func_pane_cp07

0xda1a,	// (0x0002c64b) bg_vkb2_func_pane_cp11_ParamLimits

0xda1a,	// (0x0002c64b) bg_vkb2_func_pane_cp11

0xda2f,	// (0x0002c660) bg_vkb2_func_pane_cp12_ParamLimits

0xda2f,	// (0x0002c660) bg_vkb2_func_pane_cp12

0x9e15,	// (0x00028a46) bg_vkb2_func_pane_cp09

0xd440,	// (0x0002c071) bg_vkb2_func_pane_g1

0xa9b8,	// (0x000295e9) bg_vkb2_func_pane_g2

0xd448,	// (0x0002c079) bg_vkb2_func_pane_g3

0xd450,	// (0x0002c081) bg_vkb2_func_pane_g4

0xd66a,	// (0x0002c29b) bg_vkb2_func_pane_g5

0xd468,	// (0x0002c099) bg_vkb2_func_pane_g6

0xd470,	// (0x0002c0a1) bg_vkb2_func_pane_g7

0xd460,	// (0x0002c091) bg_vkb2_func_pane_g8

0xa998,	// (0x000295c9) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0002e756) bg_vkb2_func_pane_g

0x788d,	// (0x000264be) blid2_tripm_pane_g6_ParamLimits

0x788d,	// (0x000264be) blid2_tripm_pane_g6

0xd2ee,	// (0x0002bf1f) mp4_progress_pane_g1

0x78e5,	// (0x00026516) blid2_tripm_values_pane_ParamLimits

0x78e5,	// (0x00026516) blid2_tripm_values_pane

0x79a6,	// (0x000265d7) blid2_tripm_values_pane_t1

0x79b4,	// (0x000265e5) blid2_tripm_values_pane_t2

0x79c2,	// (0x000265f3) blid2_tripm_values_pane_t3

0x79d0,	// (0x00026601) blid2_tripm_values_pane_t4

0x79de,	// (0x0002660f) blid2_tripm_values_pane_t5

0x79ec,	// (0x0002661d) blid2_tripm_values_pane_t6

0x79fa,	// (0x0002662b) blid2_tripm_values_pane_t7

0x7a08,	// (0x00026639) blid2_tripm_values_pane_t8

0x7a16,	// (0x00026647) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0002e769) blid2_tripm_values_pane_t

0x3316,	// (0x00021f47) call_video_pane_t1_ParamLimits

0x3333,	// (0x00021f64) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0002de9b) call_video_pane_t_ParamLimits

0x4cf8,	// (0x00023929) msg_header_pane_g1_ParamLimits

0xb327,	// (0x00029f58) msg_header_pane_g2_ParamLimits

0xb327,	// (0x00029f58) msg_header_pane_g2

0x0001,

0xf484,	// (0x0002e0b5) msg_header_pane_g_ParamLimits

0xf484,	// (0x0002e0b5) msg_header_pane_g

0xa587,	// (0x000291b8) main_clock2_pane_ParamLimits

0x63d7,	// (0x00025008) grid_clock2_toolbar_pane_ParamLimits

0x63d7,	// (0x00025008) grid_clock2_toolbar_pane

0x63d7,	// (0x00025008) listscroll_clock2_pane_ParamLimits

0x63d7,	// (0x00025008) listscroll_clock2_pane

0x6486,	// (0x000250b7) main_clock2_pane_t3_ParamLimits

0x6486,	// (0x000250b7) main_clock2_pane_t3

0x6498,	// (0x000250c9) main_clock2_pane_t4_ParamLimits

0x6498,	// (0x000250c9) main_clock2_pane_t4

0xdaf8,	// (0x0002c729) cell_clock2_toolbar_pane

0xdb00,	// (0x0002c731) cell_clock2_toolbar_pane_cp01

0xdb00,	// (0x0002c731) cell_clock2_toolbar_pane_cp02

0xdb08,	// (0x0002c739) cell_clock2_toolbar_pane_cp03

0xdb10,	// (0x0002c741) list_clock2_pane

0xaf68,	// (0x00029b99) scroll_pane_cp10

0xdb18,	// (0x0002c749) list_single_clock2_pane_ParamLimits

0xdb18,	// (0x0002c749) list_single_clock2_pane

0xa72f,	// (0x00029360) list_highlight_pane_cp08

0xdb25,	// (0x0002c756) list_single_clock2_pane_t1

0xdb33,	// (0x0002c764) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0002e77c) list_single_clock2_pane_t

0x9e15,	// (0x00028a46) bg_button_pane_cp10

0xdb41,	// (0x0002c772) cell_clock2_toolbar_pane_g1

0x11cd,	// (0x0001fdfe) aid_main_viewer_pane_g1_ParamLimits

0x11cd,	// (0x0001fdfe) aid_main_viewer_pane_g1

0x11d9,	// (0x0001fe0a) aid_main_viewer_pane_g2_ParamLimits

0x11d9,	// (0x0001fe0a) aid_main_viewer_pane_g2

0x4d37,	// (0x00023968) aid_main_viewer_pane_g3_ParamLimits

0x4d37,	// (0x00023968) aid_main_viewer_pane_g3

0x4d48,	// (0x00023979) aid_main_viewer_pane_g4_ParamLimits

0x4d48,	// (0x00023979) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0002e0c6) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0002e0c6) aid_main_viewer_pane_g

0x1231,	// (0x0001fe62) main_calc_pane_ParamLimits

0x125e,	// (0x0001fe8f) main_dialer2_pane_ParamLimits

0x0d86,	// (0x0001f9b7) main_cam6_pane

0x0d86,	// (0x0001f9b7) main_vid6_pane

0x63e3,	// (0x00025014) listscroll_gen_pane_cp06_ParamLimits

0x63e3,	// (0x00025014) listscroll_gen_pane_cp06

0x64aa,	// (0x000250db) main_clock2_pane_t5_ParamLimits

0x64aa,	// (0x000250db) main_clock2_pane_t5

0x64f7,	// (0x00025128) aid_call2_pane_cp10_ParamLimits

0x6509,	// (0x0002513a) aid_call_pane_cp10_ParamLimits

0xafd7,	// (0x00029c08) popup_clock_analogue_window_cp10_g1_ParamLimits

0xafd7,	// (0x00029c08) popup_clock_analogue_window_cp10_g2_ParamLimits

0x651b,	// (0x0002514c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x651b,	// (0x0002514c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xafd7,	// (0x00029c08) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0002e401) popup_clock_analogue_window_cp10_g_ParamLimits

0x6531,	// (0x00025162) popup_clock_analogue_window_cp10_t1_ParamLimits

0x693f,	// (0x00025570) cell_dialer2_keypad_pane_g2_ParamLimits

0x693f,	// (0x00025570) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002e4eb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002e4eb) cell_dialer2_keypad_pane_g

0x695b,	// (0x0002558c) cell_dialer2_keypad_pane_t1

0x6dab,	// (0x000259dc) main_cset_text2_pane_ParamLimits

0x6dab,	// (0x000259dc) main_cset_text2_pane

0xd8c4,	// (0x0002c4f5) area_vitu2_query_pane_g1_ParamLimits

0x7575,	// (0x000261a6) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002e6a0) area_vitu2_query_pane_g_ParamLimits

0xd948,	// (0x0002c579) area_vitu2_query_pane_t7_ParamLimits

0xd948,	// (0x0002c579) area_vitu2_query_pane_t7

0x75d6,	// (0x00026207) bg_button_pane_cp018_ParamLimits

0x75e4,	// (0x00026215) bg_button_pane_cp021_ParamLimits

0x75f0,	// (0x00026221) bg_button_pane_cp022_ParamLimits

0x75f0,	// (0x00026221) bg_vkb2_func_pane_cp08_ParamLimits

0x75d6,	// (0x00026207) bg_vkb2_func_pane_cp06_ParamLimits

0x75e4,	// (0x00026215) bg_vkb2_func_pane_cp07_ParamLimits

0x7601,	// (0x00026232) input_focus_pane_cp09_ParamLimits

0x246b,	// (0x0002109c) cam6_autofocus_pane_ParamLimits

0x246b,	// (0x0002109c) cam6_autofocus_pane

0x248d,	// (0x000210be) cam6_image_uncrop_pane_ParamLimits

0x248d,	// (0x000210be) cam6_image_uncrop_pane

0x24ba,	// (0x000210eb) cam6_indi_pane_ParamLimits

0x24ba,	// (0x000210eb) cam6_indi_pane

0x24d4,	// (0x00021105) cam6_mode_pane_ParamLimits

0x24d4,	// (0x00021105) cam6_mode_pane

0x24e8,	// (0x00021119) cam6_timer_pane_ParamLimits

0x24e8,	// (0x00021119) cam6_timer_pane

0x24f4,	// (0x00021125) cam6_zoom_pane_ParamLimits

0x24f4,	// (0x00021125) cam6_zoom_pane

0x7a24,	// (0x00026655) cam6_mode_pane_g1_ParamLimits

0x7a24,	// (0x00026655) cam6_mode_pane_g1

0x7a30,	// (0x00026661) cam6_mode_pane_g2_ParamLimits

0x7a30,	// (0x00026661) cam6_mode_pane_g2

0x7a3c,	// (0x0002666d) cam6_mode_pane_g3_ParamLimits

0x7a3c,	// (0x0002666d) cam6_mode_pane_g3

0x7a48,	// (0x00026679) cam6_mode_pane_g4_ParamLimits

0x7a48,	// (0x00026679) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0002e781) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0002e781) cam6_mode_pane_g

0xd3c6,	// (0x0002bff7) bg_tb_trans_pane_cp08_ParamLimits

0xd3c6,	// (0x0002bff7) bg_tb_trans_pane_cp08

0xdb49,	// (0x0002c77a) cam6_battery_pane_ParamLimits

0xdb49,	// (0x0002c77a) cam6_battery_pane

0xdb5f,	// (0x0002c790) cam6_indi_pane_g1_ParamLimits

0xdb5f,	// (0x0002c790) cam6_indi_pane_g1

0xdb71,	// (0x0002c7a2) cam6_indi_pane_g2_ParamLimits

0xdb71,	// (0x0002c7a2) cam6_indi_pane_g2

0xdb83,	// (0x0002c7b4) cam6_indi_pane_g3_ParamLimits

0xdb83,	// (0x0002c7b4) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0002e78a) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0002e78a) cam6_indi_pane_g

0xdb95,	// (0x0002c7c6) cam6_indi_pane_t1_ParamLimits

0xdb95,	// (0x0002c7c6) cam6_indi_pane_t1

0x6a9c,	// (0x000256cd) cam6_autofocus_pane_g1

0x6a94,	// (0x000256c5) cam6_autofocus_pane_g2

0x6aac,	// (0x000256dd) cam6_autofocus_pane_g3

0x6aa4,	// (0x000256d5) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002e791) cam6_autofocus_pane_g

0xdbbb,	// (0x0002c7ec) cam6_timer_pane_g1

0xdbc3,	// (0x0002c7f4) cam6_timer_pane_t1

0xdbd1,	// (0x0002c802) cam6_zoom_cont_pane

0xdbd9,	// (0x0002c80a) cam6_zoom_pane_g1

0xdbe1,	// (0x0002c812) cam6_zoom_pane_g2

0x7a54,	// (0x00026685) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002e79a) cam6_zoom_pane_g

0xca3b,	// (0x0002b66c) cam6_battery_pane_g1

0xca3b,	// (0x0002b66c) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0002e309) cam6_battery_pane_g

0xdbe9,	// (0x0002c81a) cam6_zoom_cont_pane_g1

0xdbf2,	// (0x0002c823) cam6_zoom_cont_pane_g2

0xdbfb,	// (0x0002c82c) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0002e7a1) cam6_zoom_cont_pane_g

0x7a71,	// (0x000266a2) cam6_mode_pane_cp_ParamLimits

0x7a71,	// (0x000266a2) cam6_mode_pane_cp

0x7a85,	// (0x000266b6) cam6_zoom_pane_cp_ParamLimits

0x7a85,	// (0x000266b6) cam6_zoom_pane_cp

0x7aa1,	// (0x000266d2) vid6_image_uncrop_cif_pane_ParamLimits

0x7aa1,	// (0x000266d2) vid6_image_uncrop_cif_pane

0x7acd,	// (0x000266fe) vid6_image_uncrop_nhd_pane_ParamLimits

0x7acd,	// (0x000266fe) vid6_image_uncrop_nhd_pane

0x7aec,	// (0x0002671d) vid6_image_uncrop_vga_pane_ParamLimits

0x7aec,	// (0x0002671d) vid6_image_uncrop_vga_pane

0x7b0b,	// (0x0002673c) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b0b,	// (0x0002673c) vid6_image_uncrop_wvga_pane

0x7b2a,	// (0x0002675b) vid6_indi_pane_ParamLimits

0x7b2a,	// (0x0002675b) vid6_indi_pane

0xd3c6,	// (0x0002bff7) bg_tb_trans_pane_cp09_ParamLimits

0xd3c6,	// (0x0002bff7) bg_tb_trans_pane_cp09

0xdc13,	// (0x0002c844) cam6_battery_pane_cp_ParamLimits

0xdc13,	// (0x0002c844) cam6_battery_pane_cp

0xdc1f,	// (0x0002c850) vid6_indi_pane_g1_ParamLimits

0xdc1f,	// (0x0002c850) vid6_indi_pane_g1

0xdc31,	// (0x0002c862) vid6_indi_pane_g2_ParamLimits

0xdc31,	// (0x0002c862) vid6_indi_pane_g2

0xdc43,	// (0x0002c874) vid6_indi_pane_g3_ParamLimits

0xdc43,	// (0x0002c874) vid6_indi_pane_g3

0xdc5a,	// (0x0002c88b) vid6_indi_pane_g4_ParamLimits

0xdc5a,	// (0x0002c88b) vid6_indi_pane_g4

0xdc71,	// (0x0002c8a2) vid6_indi_pane_g5_ParamLimits

0xdc71,	// (0x0002c8a2) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0002e7a8) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0002e7a8) vid6_indi_pane_g

0xdc8b,	// (0x0002c8bc) vid6_indi_pane_t1_ParamLimits

0xdc8b,	// (0x0002c8bc) vid6_indi_pane_t1

0xdca1,	// (0x0002c8d2) vid6_indi_pane_t2_ParamLimits

0xdca1,	// (0x0002c8d2) vid6_indi_pane_t2

0xdcc9,	// (0x0002c8fa) vid6_indi_pane_t3_ParamLimits

0xdcc9,	// (0x0002c8fa) vid6_indi_pane_t3

0xdcf1,	// (0x0002c922) vid6_indi_pane_t4_ParamLimits

0xdcf1,	// (0x0002c922) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0002e7b3) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0002e7b3) vid6_indi_pane_t

0xdd15,	// (0x0002c946) wait_bar_pane_cp08

0x7b4f,	// (0x00026780) main_cset_text2_pane_t1_ParamLimits

0x7b4f,	// (0x00026780) main_cset_text2_pane_t1

0x7a5c,	// (0x0002668d) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a5c,	// (0x0002668d) listscroll_gen_pane_cp06_t1

0x0d86,	// (0x0001f9b7) main_cam6_set_pane

0x1de4,	// (0x00020a15) bg_tb_trans_pane_cp06_ParamLimits

0x1dfa,	// (0x00020a2b) cam4_indicators_pane_g1_ParamLimits

0x1e0b,	// (0x00020a3c) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002e528) cam4_indicators_pane_g_ParamLimits

0x1e23,	// (0x00020a54) cam4_indicators_pane_t1_ParamLimits

0x1250,	// (0x0001fe81) bg_tb_trans_pane_cp07_ParamLimits

0x1eda,	// (0x00020b0b) vid4_indicators_pane_g1_ParamLimits

0x1ef0,	// (0x00020b21) vid4_indicators_pane_g2_ParamLimits

0x1f04,	// (0x00020b35) vid4_indicators_pane_g3_ParamLimits

0x1f17,	// (0x00020b48) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002e53a) vid4_indicators_pane_g_ParamLimits

0x1f35,	// (0x00020b66) vid4_indicators_pane_t1_ParamLimits

0x23e6,	// (0x00021017) vid4_progress_pane_g1_ParamLimits

0x23f6,	// (0x00021027) vid4_progress_pane_g2_ParamLimits

0x2406,	// (0x00021037) vid4_progress_pane_g3_ParamLimits

0x1e0b,	// (0x00020a3c) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002e6eb) vid4_progress_pane_g_ParamLimits

0x2418,	// (0x00021049) vid4_progress_pane_t1_ParamLimits

0x242e,	// (0x0002105f) vid4_progress_pane_t2_ParamLimits

0x2443,	// (0x00021074) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002e6f6) vid4_progress_pane_t_ParamLimits

0x2458,	// (0x00021089) wait_bar_pane_cp07_ParamLimits

0x7b76,	// (0x000267a7) main_cam6_set_pane_g2_ParamLimits

0x7b76,	// (0x000267a7) main_cam6_set_pane_g2

0x7b82,	// (0x000267b3) main_cset6_listscroll_pane_ParamLimits

0x7b82,	// (0x000267b3) main_cset6_listscroll_pane

0x7baf,	// (0x000267e0) main_cset6_slider_pane_ParamLimits

0x7baf,	// (0x000267e0) main_cset6_slider_pane

0x7bbb,	// (0x000267ec) main_cset6_text2_pane_ParamLimits

0x7bbb,	// (0x000267ec) main_cset6_text2_pane

0xdd24,	// (0x0002c955) main_cset6_text_pane

0xdd2c,	// (0x0002c95d) main_cset_list_pane_copy1_ParamLimits

0xdd2c,	// (0x0002c95d) main_cset_list_pane_copy1

0xdd3c,	// (0x0002c96d) scroll_pane_cp028_copy1

0x7bce,	// (0x000267ff) cset_list_set_pane_copy1

0x7bde,	// (0x0002680f) aid_position_infowindow_above_copy1

0x7be6,	// (0x00026817) aid_position_infowindow_below_copy1

0x7bee,	// (0x0002681f) cset_list_set_pane_g1_copy1

0x7bf6,	// (0x00026827) cset_list_set_pane_g3_copy1_ParamLimits

0x7bf6,	// (0x00026827) cset_list_set_pane_g3_copy1

0x7c05,	// (0x00026836) cset_list_set_pane_t1_copy1_ParamLimits

0x7c05,	// (0x00026836) cset_list_set_pane_t1_copy1

0xa890,	// (0x000294c1) list_highlight_pane_cp021_copy1_ParamLimits

0xa890,	// (0x000294c1) list_highlight_pane_cp021_copy1

0xdd45,	// (0x0002c976) cset6_slider_pane_ParamLimits

0xdd45,	// (0x0002c976) cset6_slider_pane

0xdd71,	// (0x0002c9a2) main_cset6_slider_pane_g1_ParamLimits

0xdd71,	// (0x0002c9a2) main_cset6_slider_pane_g1

0x7c1a,	// (0x0002684b) main_cset6_slider_pane_g2_ParamLimits

0x7c1a,	// (0x0002684b) main_cset6_slider_pane_g2

0xdd99,	// (0x0002c9ca) main_cset6_slider_pane_g3_ParamLimits

0xdd99,	// (0x0002c9ca) main_cset6_slider_pane_g3

0x7c42,	// (0x00026873) main_cset6_slider_pane_g4_ParamLimits

0x7c42,	// (0x00026873) main_cset6_slider_pane_g4

0x7c4e,	// (0x0002687f) main_cset6_slider_pane_g5_ParamLimits

0x7c4e,	// (0x0002687f) main_cset6_slider_pane_g5

0xd573,	// (0x0002c1a4) main_cset6_slider_pane_g7_ParamLimits

0xd573,	// (0x0002c1a4) main_cset6_slider_pane_g7

0xd57f,	// (0x0002c1b0) main_cset6_slider_pane_g8_ParamLimits

0xd57f,	// (0x0002c1b0) main_cset6_slider_pane_g8

0x7c5a,	// (0x0002688b) main_cset6_slider_pane_g9_ParamLimits

0x7c5a,	// (0x0002688b) main_cset6_slider_pane_g9

0x7c66,	// (0x00026897) main_cset6_slider_pane_g10_ParamLimits

0x7c66,	// (0x00026897) main_cset6_slider_pane_g10

0x7c72,	// (0x000268a3) main_cset6_slider_pane_g11_ParamLimits

0x7c72,	// (0x000268a3) main_cset6_slider_pane_g11

0x7c7e,	// (0x000268af) main_cset6_slider_pane_g12_ParamLimits

0x7c7e,	// (0x000268af) main_cset6_slider_pane_g12

0x7c8a,	// (0x000268bb) main_cset6_slider_pane_g13_ParamLimits

0x7c8a,	// (0x000268bb) main_cset6_slider_pane_g13

0x7c96,	// (0x000268c7) main_cset6_slider_pane_g14_ParamLimits

0x7c96,	// (0x000268c7) main_cset6_slider_pane_g14

0x7ca2,	// (0x000268d3) main_cset6_slider_pane_g15_ParamLimits

0x7ca2,	// (0x000268d3) main_cset6_slider_pane_g15

0x7cba,	// (0x000268eb) main_cset6_slider_pane_g16_ParamLimits

0x7cba,	// (0x000268eb) main_cset6_slider_pane_g16

0x7cc6,	// (0x000268f7) main_cset6_slider_pane_g17_ParamLimits

0x7cc6,	// (0x000268f7) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0002e7bc) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0002e7bc) main_cset6_slider_pane_g

0xdda5,	// (0x0002c9d6) main_cset6_slider_pane_t1_ParamLimits

0xdda5,	// (0x0002c9d6) main_cset6_slider_pane_t1

0x7cea,	// (0x0002691b) main_cset6_slider_pane_t2_ParamLimits

0x7cea,	// (0x0002691b) main_cset6_slider_pane_t2

0x7d15,	// (0x00026946) main_cset6_slider_pane_t3_ParamLimits

0x7d15,	// (0x00026946) main_cset6_slider_pane_t3

0x7d40,	// (0x00026971) main_cset6_slider_pane_t4_ParamLimits

0x7d40,	// (0x00026971) main_cset6_slider_pane_t4

0x7d6b,	// (0x0002699c) main_cset6_slider_pane_t5_ParamLimits

0x7d6b,	// (0x0002699c) main_cset6_slider_pane_t5

0xdde6,	// (0x0002ca17) main_cset6_slider_pane_t7_ParamLimits

0xdde6,	// (0x0002ca17) main_cset6_slider_pane_t7

0x7d96,	// (0x000269c7) main_cset6_slider_pane_t8_ParamLimits

0x7d96,	// (0x000269c7) main_cset6_slider_pane_t8

0x7dba,	// (0x000269eb) main_cset6_slider_pane_t9_ParamLimits

0x7dba,	// (0x000269eb) main_cset6_slider_pane_t9

0x7dde,	// (0x00026a0f) main_cset6_slider_pane_t10_ParamLimits

0x7dde,	// (0x00026a0f) main_cset6_slider_pane_t10

0x7e02,	// (0x00026a33) main_cset6_slider_pane_t11_ParamLimits

0x7e02,	// (0x00026a33) main_cset6_slider_pane_t11

0xde1c,	// (0x0002ca4d) main_cset6_slider_pane_t14_ParamLimits

0xde1c,	// (0x0002ca4d) main_cset6_slider_pane_t14

0xde55,	// (0x0002ca86) main_cset6_slider_pane_t15_ParamLimits

0xde55,	// (0x0002ca86) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0002e7e1) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0002e7e1) main_cset6_slider_pane_t

0xde8e,	// (0x0002cabf) cset_slider_pane_g1_copy1

0xde97,	// (0x0002cac8) cset_slider_pane_g2_copy1

0xdea0,	// (0x0002cad1) cset_slider_pane_g3_copy1

0x9e15,	// (0x00028a46) bg_popup_sub_pane_cp011_copy1

0xdea9,	// (0x0002cada) main_cset_text_pane_g1_copy1

0xd6b9,	// (0x0002c2ea) main_cset_text_pane_t1_copy1

0xd6c7,	// (0x0002c2f8) main_cset_text_pane_t2_copy1

0xd6d5,	// (0x0002c306) main_cset_text_pane_t3_copy1

0xd6e3,	// (0x0002c314) main_cset_text_pane_t4_copy1

0xd6f1,	// (0x0002c322) main_cset_text_pane_t5_copy1

0xdeb1,	// (0x0002cae2) main_cset_text_pane_t6_copy1

0xdebf,	// (0x0002caf0) main_cset_text_pane_t7_copy1

0x7efc,	// (0x00026b2d) main_cset_text2_pane_t1_copy1

0x1250,	// (0x0001fe81) main_ncimui_pane

0x12b7,	// (0x0001fee8) popup_query_ncimui_window_ParamLimits

0x12b7,	// (0x0001fee8) popup_query_ncimui_window

0xccc7,	// (0x0002b8f8) field_cale_ev2_pane_g4_ParamLimits

0xccc7,	// (0x0002b8f8) field_cale_ev2_pane_g4

0x68df,	// (0x00025510) cell_video_dialer_keypad_pane_g2_ParamLimits

0x68df,	// (0x00025510) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0002e4c2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0002e4c2) cell_video_dialer_keypad_pane_g

0x68f7,	// (0x00025528) cell_video_dialer_keypad_pane_t1

0x9e15,	// (0x00028a46) bg_popup_window_pane_cp012

0xae54,	// (0x00029a85) heading_pane_cp06

0xdeeb,	// (0x0002cb1c) ncim_query_content_pane

0x9e15,	// (0x00028a46) bg_popup_heading_pane_cp01

0xdef3,	// (0x0002cb24) ncim_heading_pane_t1

0xdf01,	// (0x0002cb32) ncim_indicator_popup_pane

0xdf13,	// (0x0002cb44) ncim_query_button_pane

0xdf29,	// (0x0002cb5a) ncim_query_content_pane_t1

0xdf3b,	// (0x0002cb6c) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0002e825) ncim_query_content_pane_t

0xdf75,	// (0x0002cba6) ncim_query_list_pane

0xdf87,	// (0x0002cbb8) ncim_query_popup_pane

0xdf01,	// (0x0002cb32) ncim_indicator_popup_pane_ParamLimits

0x8058,	// (0x00026c89) ncim_query_content_pane_g1_ParamLimits

0x8058,	// (0x00026c89) ncim_query_content_pane_g1

0xdf29,	// (0x0002cb5a) ncim_query_content_pane_t1_ParamLimits

0xdf3b,	// (0x0002cb6c) ncim_query_content_pane_t2_ParamLimits

0x8064,	// (0x00026c95) ncim_query_content_pane_t3_ParamLimits

0x8064,	// (0x00026c95) ncim_query_content_pane_t3

0x8081,	// (0x00026cb2) ncim_query_content_pane_t4_ParamLimits

0x8081,	// (0x00026cb2) ncim_query_content_pane_t4

0x809e,	// (0x00026ccf) ncim_query_content_pane_t5_ParamLimits

0x809e,	// (0x00026ccf) ncim_query_content_pane_t5

0xdf4d,	// (0x0002cb7e) ncim_query_content_pane_t6_ParamLimits

0xdf4d,	// (0x0002cb7e) ncim_query_content_pane_t6

0xfbf4,	// (0x0002e825) ncim_query_content_pane_t_ParamLimits

0xdf75,	// (0x0002cba6) ncim_query_list_pane_ParamLimits

0xdf87,	// (0x0002cbb8) ncim_query_popup_pane_ParamLimits

0xdf9b,	// (0x0002cbcc) wait_bar_pane_cp04

0x9e15,	// (0x00028a46) input_focus_pane_cp011

0xdfa3,	// (0x0002cbd4) ncim_query_popup_pane_t1

0xdfb1,	// (0x0002cbe2) ncim_list_query_list_pane_ParamLimits

0xdfb1,	// (0x0002cbe2) ncim_list_query_list_pane

0x9e15,	// (0x00028a46) bg_button_pane_cp027

0xdfc4,	// (0x0002cbf5) ncim_query_button_pane_g1

0x9e15,	// (0x00028a46) list_highlight_pane_cp012

0xdfce,	// (0x0002cbff) ncim_list_query_list_pane_g1

0xdfd6,	// (0x0002cc07) ncim_list_query_list_pane_t1

0x1e17,	// (0x00020a48) cam4_indicators_pane_g3_ParamLimits

0x1e17,	// (0x00020a48) cam4_indicators_pane_g3

0x1f23,	// (0x00020b54) vid4_indicators_pane_g5_ParamLimits

0x1f23,	// (0x00020b54) vid4_indicators_pane_g5

0x1e17,	// (0x00020a48) vid4_progress_pane_g5_ParamLimits

0x1e17,	// (0x00020a48) vid4_progress_pane_g5

0x7f2e,	// (0x00026b5f) main_ncimui_pane_g1

0x7f9a,	// (0x00026bcb) ncimui_group_query_pane_ParamLimits

0x7f9a,	// (0x00026bcb) ncimui_group_query_pane

0x7ff4,	// (0x00026c25) ncimui_list_pane_ParamLimits

0x7ff4,	// (0x00026c25) ncimui_list_pane

0x801b,	// (0x00026c4c) ncimui_text_pane_ParamLimits

0x801b,	// (0x00026c4c) ncimui_text_pane

0x80bb,	// (0x00026cec) ncimui_text_pane_t1_ParamLimits

0x80bb,	// (0x00026cec) ncimui_text_pane_t1

0xdfe4,	// (0x0002cc15) ncimui_list_single_graphic_pane_ParamLimits

0xdfe4,	// (0x0002cc15) ncimui_list_single_graphic_pane

0x80da,	// (0x00026d0b) ncimui_query_pane_ParamLimits

0x80da,	// (0x00026d0b) ncimui_query_pane

0x9e15,	// (0x00028a46) list_highlight_pane_cp013

0xdff4,	// (0x0002cc25) ncim_list_query_list_pane_t1_copy1

0xdfce,	// (0x0002cbff) ncim_list_single_graphic_pane_g1

0x80ed,	// (0x00026d1e) ncim_query_button_pane_cp01

0x80f9,	// (0x00026d2a) ncim_query_entry_pane_ParamLimits

0x80f9,	// (0x00026d2a) ncim_query_entry_pane

0x810c,	// (0x00026d3d) ncimui_query_pane_g1

0x8118,	// (0x00026d49) ncimui_query_pane_t1_ParamLimits

0x8118,	// (0x00026d49) ncimui_query_pane_t1

0xa890,	// (0x000294c1) input_focus_pane_cp012

0xe002,	// (0x0002cc33) ncim_query_entry_pane_t1

0xa587,	// (0x000291b8) main_im_pane_ParamLimits

0x1250,	// (0x0001fe81) main_mobtv_pane_ParamLimits

0x1250,	// (0x0001fe81) main_mobtv_pane

0x7cd2,	// (0x00026903) main_cset6_slider_pane_g18_ParamLimits

0x7cd2,	// (0x00026903) main_cset6_slider_pane_g18

0x7cde,	// (0x0002690f) main_cset6_slider_pane_g19_ParamLimits

0x7cde,	// (0x0002690f) main_cset6_slider_pane_g19

0xd403,	// (0x0002c034) bg_main_mobtv_pane_ParamLimits

0xd403,	// (0x0002c034) bg_main_mobtv_pane

0x8131,	// (0x00026d62) main_mobtv_info_pane

0x813c,	// (0x00026d6d) main_mobtv_loading_pane_ParamLimits

0x813c,	// (0x00026d6d) main_mobtv_loading_pane

0xe014,	// (0x0002cc45) main_mobtv_pg_channel_list_pane

0xe01e,	// (0x0002cc4f) main_mobtv_pg_hdr_pane

0x8149,	// (0x00026d7a) main_mobtv_programe_curr_pane_ParamLimits

0x8149,	// (0x00026d7a) main_mobtv_programe_curr_pane

0x8156,	// (0x00026d87) main_mobtv_programe_next_pane_ParamLimits

0x8156,	// (0x00026d87) main_mobtv_programe_next_pane

0xe027,	// (0x0002cc58) popup_mobtv_noti_window

0xca3b,	// (0x0002b66c) main_tv_pg_hdr_pane_g1

0xe031,	// (0x0002cc62) main_tv_pg_hdr_pane_g2

0xe039,	// (0x0002cc6a) main_tv_pg_hdr_pane_g3

0xe041,	// (0x0002cc72) main_tv_pg_hdr_pane_g4

0xe049,	// (0x0002cc7a) main_tv_pg_hdr_pane_g5

0xe053,	// (0x0002cc84) main_tv_pg_hdr_pane_g6

0xe05d,	// (0x0002cc8e) main_tv_pg_hdr_pane_g7

0xe067,	// (0x0002cc98) main_tv_pg_hdr_pane_g8

0xe071,	// (0x0002cca2) main_tv_pg_hdr_pane_g9

0xe07b,	// (0x0002ccac) main_tv_pg_hdr_pane_g10

0xe085,	// (0x0002ccb6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0002e832) main_tv_pg_hdr_pane_g

0xe08f,	// (0x0002ccc0) main_tv_pg_hdr_pane_t1

0xe09d,	// (0x0002ccce) main_tv_pg_hdr_pane_t2

0xe0ab,	// (0x0002ccdc) main_tv_pg_hdr_pane_t3

0xe0bb,	// (0x0002ccec) main_tv_pg_hdr_pane_t4

0xe0cb,	// (0x0002ccfc) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0002e849) main_tv_pg_hdr_pane_t

0xe0db,	// (0x0002cd0c) single_mobtv_pg_channel_pane_ParamLimits

0xe0db,	// (0x0002cd0c) single_mobtv_pg_channel_pane

0xe0ed,	// (0x0002cd1e) single_mobtv_pg_channel_table_pane

0xe0f6,	// (0x0002cd27) single_mobtv_pg_channel_thumb_pane

0xe0ff,	// (0x0002cd30) single_tv_pg_channel_pane_g1

0xe108,	// (0x0002cd39) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0002e854) single_tv_pg_channel_pane_g

0xcc62,	// (0x0002b893) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcc62,	// (0x0002b893) bg_single_mobtv_pg_channel_thumb_pane

0xe111,	// (0x0002cd42) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe111,	// (0x0002cd42) single_mobtv_pg_channel_thumb_pane_g1

0xe11f,	// (0x0002cd50) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe11f,	// (0x0002cd50) single_mobtv_pg_channel_thumb_pane_g2

0xe12b,	// (0x0002cd5c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe12b,	// (0x0002cd5c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0002e859) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0002e859) single_mobtv_pg_channel_thumb_pane_g

0xe137,	// (0x0002cd68) single_mobtv_pg_channel_thumb_pane_t1

0xe145,	// (0x0002cd76) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0002e860) single_mobtv_pg_channel_thumb_pane_t

0xca3b,	// (0x0002b66c) bg_single_mobtv_pg_channel_table_pane_g1

0xca3b,	// (0x0002b66c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0002e309) bg_single_mobtv_pg_channel_table_pane_g

0xe153,	// (0x0002cd84) single_mobtv_pg_channel_table_pane_t1

0xe161,	// (0x0002cd92) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0002e865) single_mobtv_pg_channel_table_pane_t

0x816b,	// (0x00026d9c) main_mobtv_info_pane_g1_ParamLimits

0x816b,	// (0x00026d9c) main_mobtv_info_pane_g1

0x8187,	// (0x00026db8) main_mobtv_info_pane_t1_ParamLimits

0x8187,	// (0x00026db8) main_mobtv_info_pane_t1

0x81ff,	// (0x00026e30) main_mobtv_info_pane_t2_ParamLimits

0x81ff,	// (0x00026e30) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0002e86f) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0002e86f) main_mobtv_info_pane_t

0x8290,	// (0x00026ec1) wait_bar_pane_cp05

0x82a2,	// (0x00026ed3) main_mobtv_loading_pane_g1_ParamLimits

0x82a2,	// (0x00026ed3) main_mobtv_loading_pane_g1

0x82ae,	// (0x00026edf) main_mobtv_loading_pane_g2_ParamLimits

0x82ae,	// (0x00026edf) main_mobtv_loading_pane_g2

0x82ba,	// (0x00026eeb) main_mobtv_loading_pane_g3_ParamLimits

0x82ba,	// (0x00026eeb) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0002e876) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0002e876) main_mobtv_loading_pane_g

0xe16f,	// (0x0002cda0) main_mobtv_loading_pane_t1_ParamLimits

0xe16f,	// (0x0002cda0) main_mobtv_loading_pane_t1

0xe187,	// (0x0002cdb8) main_mobtv_loading_pane_t2_ParamLimits

0xe187,	// (0x0002cdb8) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0002e87d) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0002e87d) main_mobtv_loading_pane_t

0x82c8,	// (0x00026ef9) wait_bar_pane_cp06_ParamLimits

0x82c8,	// (0x00026ef9) wait_bar_pane_cp06

0xe1ab,	// (0x0002cddc) main_mobtv_programe_curr_pane_t1

0xe1b9,	// (0x0002cdea) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0002e882) main_mobtv_programe_curr_pane_t

0xe1c7,	// (0x0002cdf8) main_mobtv_programe_next_pane_t1

0xe1d5,	// (0x0002ce06) main_mobtv_programe_next_pane_t2

0xe1e3,	// (0x0002ce14) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0002e887) main_mobtv_programe_next_pane_t

0x9e15,	// (0x00028a46) bg_popup_mobtv_noti_window_pane

0xe1f1,	// (0x0002ce22) popup_mobtv_noti_window_g1

0xe1f9,	// (0x0002ce2a) popup_mobtv_noti_window_t1

0xe207,	// (0x0002ce38) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0002e88e) popup_mobtv_noti_window_t

0xca3b,	// (0x0002b66c) bg_popup_mobtv_noti_window_pane_g1

0x0d86,	// (0x0001f9b7) sc_clock_pane

0x0d86,	// (0x0001f9b7) main_fs_bigclock_pane

0x78d3,	// (0x00026504) blid2_tripm_pane_t4_ParamLimits

0x78d3,	// (0x00026504) blid2_tripm_pane_t4

0x82d4,	// (0x00026f05) sc_clock_pane_g1_ParamLimits

0x82d4,	// (0x00026f05) sc_clock_pane_g1

0x82e2,	// (0x00026f13) sc_clock_pane_t1_ParamLimits

0x82e2,	// (0x00026f13) sc_clock_pane_t1

0x82f7,	// (0x00026f28) sc_clock_pane_t2_ParamLimits

0x82f7,	// (0x00026f28) sc_clock_pane_t2

0x8309,	// (0x00026f3a) sc_clock_pane_t3_ParamLimits

0x8309,	// (0x00026f3a) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0002e893) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0002e893) sc_clock_pane_t

0x9371,	// (0x00027fa2) main_fs_bigclock_indicator_pane_ParamLimits

0x9371,	// (0x00027fa2) main_fs_bigclock_indicator_pane

0x8398,	// (0x00026fc9) main_fs_bigclock_pane_g1_ParamLimits

0x8398,	// (0x00026fc9) main_fs_bigclock_pane_g1

0x937d,	// (0x00027fae) main_fs_bigclock_pane_t1_ParamLimits

0x937d,	// (0x00027fae) main_fs_bigclock_pane_t1

0x938f,	// (0x00027fc0) main_fs_bigclock_pane_t2_ParamLimits

0x938f,	// (0x00027fc0) main_fs_bigclock_pane_t2

0x93a3,	// (0x00027fd4) main_fs_bigclock_pane_t3_ParamLimits

0x93a3,	// (0x00027fd4) main_fs_bigclock_pane_t3

0x0002,

0xfe67,	// (0x0002ea98) main_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0002ea98) main_fs_bigclock_pane_t

0xec95,	// (0x0002d8c6) main_fs_bigclock_indicator_pane_g1

0xdf1b,	// (0x0002cb4c) ncim_query_content_pane_g2_ParamLimits

0xdf1b,	// (0x0002cb4c) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0002e820) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0002e820) ncim_query_content_pane_g

0x831b,	// (0x00026f4c) sc_clock_pane_t4_ParamLimits

0x831b,	// (0x00026f4c) sc_clock_pane_t4

0x1250,	// (0x0001fe81) main_radioblah_pane

0x1cd3,	// (0x00020904) cell_call4_button_pane_t1_copy1_ParamLimits

0x1cd3,	// (0x00020904) cell_call4_button_pane_t1_copy1

0x7f4a,	// (0x00026b7b) main_ncimui_pane_t1_ParamLimits

0x7f4a,	// (0x00026b7b) main_ncimui_pane_t1

0x7f64,	// (0x00026b95) main_ncimui_pane_t2_ParamLimits

0x7f64,	// (0x00026b95) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0002e819) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0002e819) main_ncimui_pane_t

0xe215,	// (0x0002ce46) main_radioblah_anim_pane_ParamLimits

0xe215,	// (0x0002ce46) main_radioblah_anim_pane

0xe226,	// (0x0002ce57) main_radioblah_info_pane_ParamLimits

0xe226,	// (0x0002ce57) main_radioblah_info_pane

0xe23a,	// (0x0002ce6b) main_radioblah_pane_t1_ParamLimits

0xe23a,	// (0x0002ce6b) main_radioblah_pane_t1

0xe256,	// (0x0002ce87) main_radioblah_pane_t2_ParamLimits

0xe256,	// (0x0002ce87) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0002e8b4) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0002e8b4) main_radioblah_pane_t

0x8537,	// (0x00027168) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8537,	// (0x00027168) main_radioblah_rocker_ctrl_pane

0xe29e,	// (0x0002cecf) main_radioblah_info_pane_t1_ParamLimits

0xe29e,	// (0x0002cecf) main_radioblah_info_pane_t1

0x8580,	// (0x000271b1) main_radioblah_info_pane_t2_ParamLimits

0x8580,	// (0x000271b1) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0002e8bd) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0002e8bd) main_radioblah_info_pane_t

0xca3b,	// (0x0002b66c) main_radioblah_rocker_ctrl_pane_g1

0x8630,	// (0x00027261) main_radioblah_rocker_ctrl_pane_g2

0x8638,	// (0x00027269) main_radioblah_rocker_ctrl_pane_g3

0x8640,	// (0x00027271) main_radioblah_rocker_ctrl_pane_g4

0x8648,	// (0x00027279) main_radioblah_rocker_ctrl_pane_g5

0x8650,	// (0x00027281) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0002e8c6) main_radioblah_rocker_ctrl_pane_g

0x7efc,	// (0x00026b2d) main_cset_text2_pane_t1_copy1_ParamLimits

0x1d5c,	// (0x0002098d) cam4_image_uncrop_qvga_pane

0x1e89,	// (0x00020aba) vid4_image_uncrop_qcif_pane

0x24ac,	// (0x000210dd) cam6_image_uncrop_qvga_pane_ParamLimits

0x24ac,	// (0x000210dd) cam6_image_uncrop_qvga_pane

0xdc03,	// (0x0002c834) vid6_image_uncrop_qcif_pane_ParamLimits

0xdc03,	// (0x0002c834) vid6_image_uncrop_qcif_pane

0x9e15,	// (0x00028a46) bg_popup_preview_window_pane_cp03

0xdecd,	// (0x0002cafe) list_cset_text2_pane

0xded5,	// (0x0002cb06) main_cset6_text2_pane_g1

0xdedd,	// (0x0002cb0e) main_cset6_text2_pane_t1

0x8658,	// (0x00027289) list_cset_text2_pane_t1_ParamLimits

0x8658,	// (0x00027289) list_cset_text2_pane_t1

0x1250,	// (0x0001fe81) main_radioblah_pane_ParamLimits

0x827c,	// (0x00026ead) main_mobtv_info_pane_t3_ParamLimits

0x827c,	// (0x00026ead) main_mobtv_info_pane_t3

0x8525,	// (0x00027156) main_radioblah_pane_g1

0x8550,	// (0x00027181) main_radioblah_info_pane_g1

0x85d5,	// (0x00027206) main_radioblah_info_pane_t3_ParamLimits

0x85d5,	// (0x00027206) main_radioblah_info_pane_t3

0x42de,	// (0x00022f0f) highlight_cell_cale_month_pane_ParamLimits

0x42de,	// (0x00022f0f) highlight_cell_cale_month_pane

0x0d86,	// (0x0001f9b7) main_phob_fisheye_pane

0xcd4a,	// (0x0002b97b) scroll_pane_cp0031_ParamLimits

0xcd4a,	// (0x0002b97b) scroll_pane_cp0031

0xdd15,	// (0x0002c946) wait_bar_pane_cp08_ParamLimits

0x7bce,	// (0x000267ff) cset_list_set_pane_copy1_ParamLimits

0xe2d8,	// (0x0002cf09) highlight_cell_cale_month_pane_g1

0x866f,	// (0x000272a0) highlight_cell_cale_month_pane_t1

0xd9b4,	// (0x0002c5e5) list_gen_pane_cp01

0xd55e,	// (0x0002c18f) scroll_pane_01

0x867d,	// (0x000272ae) list_single_double_fisheye_pane

0x8686,	// (0x000272b7) list_double_fisheye_pane_g1_ParamLimits

0x8686,	// (0x000272b7) list_double_fisheye_pane_g1

0x8692,	// (0x000272c3) list_double_fisheye_pane_g2_ParamLimits

0x8692,	// (0x000272c3) list_double_fisheye_pane_g2

0x86a6,	// (0x000272d7) list_double_fisheye_pane_g3_ParamLimits

0x86a6,	// (0x000272d7) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0002e8d3) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0002e8d3) list_double_fisheye_pane_g

0x86cf,	// (0x00027300) list_double_fisheye_pane_t1_ParamLimits

0x86cf,	// (0x00027300) list_double_fisheye_pane_t1

0x86ea,	// (0x0002731b) list_double_fisheye_pane_t2_ParamLimits

0x86ea,	// (0x0002731b) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0002e8de) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0002e8de) list_double_fisheye_pane_t

0x0d86,	// (0x0001f9b7) main_call5_pane

0x8341,	// (0x00026f72) sc_swipe_pane_ParamLimits

0x8341,	// (0x00026f72) sc_swipe_pane

0x8718,	// (0x00027349) call5_image_pane_ParamLimits

0x8718,	// (0x00027349) call5_image_pane

0x872a,	// (0x0002735b) call5_swipe_1_pane_ParamLimits

0x872a,	// (0x0002735b) call5_swipe_1_pane

0x8736,	// (0x00027367) call5_swipe_2_pane_ParamLimits

0x8736,	// (0x00027367) call5_swipe_2_pane

0x8750,	// (0x00027381) popup_call5_audio_first_window_ParamLimits

0x8750,	// (0x00027381) popup_call5_audio_first_window

0xcc62,	// (0x0002b893) call5_swipe_1_pane_g1_ParamLimits

0xcc62,	// (0x0002b893) call5_swipe_1_pane_g1

0xe2e0,	// (0x0002cf11) call5_swipe_1_pane_g2_ParamLimits

0xe2e0,	// (0x0002cf11) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0002e8e3) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0002e8e3) call5_swipe_1_pane_g

0xe2ec,	// (0x0002cf1d) call5_swipe_1_pane_t1_ParamLimits

0xe2ec,	// (0x0002cf1d) call5_swipe_1_pane_t1

0xcc62,	// (0x0002b893) call5_swipe_2_pane_g1_ParamLimits

0xcc62,	// (0x0002b893) call5_swipe_2_pane_g1

0xe301,	// (0x0002cf32) call5_swipe_2_pane_g2_ParamLimits

0xe301,	// (0x0002cf32) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0002e8e8) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0002e8e8) call5_swipe_2_pane_g

0xe30d,	// (0x0002cf3e) call5_swipe_2_pane_t1_ParamLimits

0xe30d,	// (0x0002cf3e) call5_swipe_2_pane_t1

0xe322,	// (0x0002cf53) sc_swipe_pane_g1_ParamLimits

0xe322,	// (0x0002cf53) sc_swipe_pane_g1

0xe32f,	// (0x0002cf60) sc_swipe_pane_g2_ParamLimits

0xe32f,	// (0x0002cf60) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0002e8ed) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0002e8ed) sc_swipe_pane_g

0xe33b,	// (0x0002cf6c) sc_swipe_pane_t1_ParamLimits

0xe33b,	// (0x0002cf6c) sc_swipe_pane_t1

0x0d86,	// (0x0001f9b7) main_cmail_launcher_pane

0x8760,	// (0x00027391) aid_size_cell_cmail_l_ParamLimits

0x8760,	// (0x00027391) aid_size_cell_cmail_l

0x876e,	// (0x0002739f) grid_cmail_l_pane_ParamLimits

0x876e,	// (0x0002739f) grid_cmail_l_pane

0x877e,	// (0x000273af) cell_cmail_l_pane_ParamLimits

0x877e,	// (0x000273af) cell_cmail_l_pane

0xe350,	// (0x0002cf81) cell_cmail_l_pane_g1_ParamLimits

0xe350,	// (0x0002cf81) cell_cmail_l_pane_g1

0xe35c,	// (0x0002cf8d) cell_cmail_l_pane_t1_ParamLimits

0xe35c,	// (0x0002cf8d) cell_cmail_l_pane_t1

0xe372,	// (0x0002cfa3) cell_cmail_l_pane_t2_ParamLimits

0xe372,	// (0x0002cfa3) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0002e8f2) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0002e8f2) cell_cmail_l_pane_t

0xa890,	// (0x000294c1) grid_highlight_pane_cp018_ParamLimits

0xa890,	// (0x000294c1) grid_highlight_pane_cp018

0x0be5,	// (0x0001f816) main2_pane_ParamLimits

0x0be5,	// (0x0001f816) main2_pane

0xa620,	// (0x00029251) popup_sp_fs_action_menu_bg_pane_g1

0xa628,	// (0x00029259) popup_sp_fs_action_menu_bg_pane_g2

0xa630,	// (0x00029261) popup_sp_fs_action_menu_bg_pane_g3

0xa638,	// (0x00029269) popup_sp_fs_action_menu_bg_pane_g4

0xa640,	// (0x00029271) popup_sp_fs_action_menu_bg_pane_g5

0xa648,	// (0x00029279) popup_sp_fs_action_menu_bg_pane_g6

0xa650,	// (0x00029281) popup_sp_fs_action_menu_bg_pane_g7

0xa658,	// (0x00029289) popup_sp_fs_action_menu_bg_pane_g8

0xa660,	// (0x00029291) popup_sp_fs_action_menu_bg_pane_g9

0xa668,	// (0x00029299) popup_sp_fs_action_menu_bg_pane_g10

0xa668,	// (0x00029299) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0002ddb7) popup_sp_fs_action_menu_bg_pane_g

0x314f,	// (0x00021d80) list_medium_line_x2_t3_g3_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x2_t3_g3_g1

0x315b,	// (0x00021d8c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x315b,	// (0x00021d8c) list_medium_line_x2_t3_g3_g2

0x3167,	// (0x00021d98) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3167,	// (0x00021d98) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0002de65) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0002de65) list_medium_line_x2_t3_g3_g

0x3173,	// (0x00021da4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3173,	// (0x00021da4) list_medium_line_x2_t3_g3_t1

0x3188,	// (0x00021db9) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3188,	// (0x00021db9) list_medium_line_x2_t3_g3_t2

0x319c,	// (0x00021dcd) list_medium_line_x2_t3_g3_t3_ParamLimits

0x319c,	// (0x00021dcd) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0002de6c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0002de6c) list_medium_line_x2_t3_g3_t

0x314f,	// (0x00021d80) list_medium_line_x2_t3_g2_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x2_t3_g2_g1

0x3167,	// (0x00021d98) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3167,	// (0x00021d98) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0002de73) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0002de73) list_medium_line_x2_t3_g2_g

0x31b1,	// (0x00021de2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x31b1,	// (0x00021de2) list_medium_line_x2_t3_g2_t1

0x31c7,	// (0x00021df8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x31c7,	// (0x00021df8) list_medium_line_x2_t3_g2_t2

0x31d9,	// (0x00021e0a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x31d9,	// (0x00021e0a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0002de78) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0002de78) list_medium_line_x2_t3_g2_t

0x314f,	// (0x00021d80) list_medium_line_x2_t4_g4_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x2_t4_g4_g1

0x31f7,	// (0x00021e28) list_medium_line_x2_t4_g4_g2_ParamLimits

0x31f7,	// (0x00021e28) list_medium_line_x2_t4_g4_g2

0x315b,	// (0x00021d8c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x315b,	// (0x00021d8c) list_medium_line_x2_t4_g4_g3

0x3203,	// (0x00021e34) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3203,	// (0x00021e34) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0002de7f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0002de7f) list_medium_line_x2_t4_g4_g

0x320f,	// (0x00021e40) list_medium_line_x2_t4_g4_t1_ParamLimits

0x320f,	// (0x00021e40) list_medium_line_x2_t4_g4_t1

0x3229,	// (0x00021e5a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3229,	// (0x00021e5a) list_medium_line_x2_t4_g4_t2

0x323f,	// (0x00021e70) list_medium_line_x2_t4_g4_t3_ParamLimits

0x323f,	// (0x00021e70) list_medium_line_x2_t4_g4_t3

0x3254,	// (0x00021e85) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3254,	// (0x00021e85) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0002de88) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0002de88) list_medium_line_x2_t4_g4_t

0x314f,	// (0x00021d80) list_medium_line_x2_t2_g4_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x2_t2_g4_g1

0x31f7,	// (0x00021e28) list_medium_line_x2_t2_g4_g2_ParamLimits

0x31f7,	// (0x00021e28) list_medium_line_x2_t2_g4_g2

0x315b,	// (0x00021d8c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x315b,	// (0x00021d8c) list_medium_line_x2_t2_g4_g3

0x3167,	// (0x00021d98) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3167,	// (0x00021d98) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0002deef) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0002deef) list_medium_line_x2_t2_g4_g

0x4304,	// (0x00022f35) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4304,	// (0x00022f35) list_medium_line_x2_t2_g4_t1

0x319c,	// (0x00021dcd) list_medium_line_x2_t2_g4_t2_ParamLimits

0x319c,	// (0x00021dcd) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0002def8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0002def8) list_medium_line_x2_t2_g4_t

0x314f,	// (0x00021d80) list_medium_line_x2_t2_g3_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x2_t2_g3_g1

0x315b,	// (0x00021d8c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x315b,	// (0x00021d8c) list_medium_line_x2_t2_g3_g2

0x3167,	// (0x00021d98) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3167,	// (0x00021d98) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0002de65) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0002de65) list_medium_line_x2_t2_g3_g

0x4319,	// (0x00022f4a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4319,	// (0x00022f4a) list_medium_line_x2_t2_g3_t1

0x319c,	// (0x00021dcd) list_medium_line_x2_t2_g3_t2_ParamLimits

0x319c,	// (0x00021dcd) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0002defd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0002defd) list_medium_line_x2_t2_g3_t

0x4457,	// (0x00023088) main_sp_fs_list_pane_ParamLimits

0x4457,	// (0x00023088) main_sp_fs_list_pane

0x4463,	// (0x00023094) sp_fs_scroll_pane_ParamLimits

0x4463,	// (0x00023094) sp_fs_scroll_pane

0x446f,	// (0x000230a0) list_medium_line_x2_t3_t1

0x447f,	// (0x000230b0) list_medium_line_x2_t3_t2

0x448d,	// (0x000230be) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0002df48) list_medium_line_x2_t3_t

0x449b,	// (0x000230cc) list_medium_line_x3_t4_t1

0x44ab,	// (0x000230dc) list_medium_line_x3_t4_t2

0x44b9,	// (0x000230ea) list_medium_line_x3_t4_t3

0x448d,	// (0x000230be) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0002df4f) list_medium_line_x3_t4_t

0x44c7,	// (0x000230f8) list_medium_line_x4_t5_t1

0x44d7,	// (0x00023108) list_medium_line_x4_t5_t2

0x44b9,	// (0x000230ea) list_medium_line_x4_t5_t3

0x44e5,	// (0x00023116) list_medium_line_x4_t5_t4

0x448d,	// (0x000230be) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0002df58) list_medium_line_x4_t5_t

0x314f,	// (0x00021d80) list_medium_line_t4_g4_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_t4_g4_g1

0x3203,	// (0x00021e34) list_medium_line_t4_g4_g2_ParamLimits

0x3203,	// (0x00021e34) list_medium_line_t4_g4_g2

0x44f3,	// (0x00023124) list_medium_line_t4_g4_g3_ParamLimits

0x44f3,	// (0x00023124) list_medium_line_t4_g4_g3

0x3167,	// (0x00021d98) list_medium_line_t4_g4_g4_ParamLimits

0x3167,	// (0x00021d98) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0002df63) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0002df63) list_medium_line_t4_g4_g

0x44ff,	// (0x00023130) list_medium_line_t4_g4_t1_ParamLimits

0x44ff,	// (0x00023130) list_medium_line_t4_g4_t1

0x4514,	// (0x00023145) list_medium_line_t4_g4_t2_ParamLimits

0x4514,	// (0x00023145) list_medium_line_t4_g4_t2

0x452a,	// (0x0002315b) list_medium_line_t4_g4_t3_ParamLimits

0x452a,	// (0x0002315b) list_medium_line_t4_g4_t3

0x319c,	// (0x00021dcd) list_medium_line_t4_g4_t4_ParamLimits

0x319c,	// (0x00021dcd) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0002df6c) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0002df6c) list_medium_line_t4_g4_t

0x45e4,	// (0x00023215) chi_dic_find_pane_g1

0x126c,	// (0x0001fe9d) main_tport_pane

0x713e,	// (0x00025d6f) list_medium_line_plain_t1

0x7164,	// (0x00025d95) list_medium_line_t2_g2_g1_ParamLimits

0x7164,	// (0x00025d95) list_medium_line_t2_g2_g1

0x7170,	// (0x00025da1) list_medium_line_t2_g2_g2_ParamLimits

0x7170,	// (0x00025da1) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002e631) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002e631) list_medium_line_t2_g2_g

0x717c,	// (0x00025dad) list_medium_line_t2_g2_t1_ParamLimits

0x717c,	// (0x00025dad) list_medium_line_t2_g2_t1

0x7196,	// (0x00025dc7) list_medium_line_t2_g2_t2_ParamLimits

0x7196,	// (0x00025dc7) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002e636) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002e636) list_medium_line_t2_g2_t

0xd9bd,	// (0x0002c5ee) aid_sp_fs_list_icon_a_sm

0xd9c5,	// (0x0002c5f6) aid_sp_fs_list_icon_d

0xd9cd,	// (0x0002c5fe) aid_sp_fs_text_primary

0xd9d6,	// (0x0002c607) aid_sp_fs_text_secondary

0x7722,	// (0x00026353) list_medium_line

0x7722,	// (0x00026353) list_medium_line_g2

0x7722,	// (0x00026353) list_medium_line_g3

0x7722,	// (0x00026353) list_medium_line_plain

0x7722,	// (0x00026353) list_medium_line_plain_t2

0x7722,	// (0x00026353) list_medium_line_plain_t3

0x7722,	// (0x00026353) list_medium_line_right_icon

0x7722,	// (0x00026353) list_medium_line_right_iconx2

0x7722,	// (0x00026353) list_medium_line_t2

0x7722,	// (0x00026353) list_medium_line_t2_g2

0x7722,	// (0x00026353) list_medium_line_t2_g3

0x7722,	// (0x00026353) list_medium_line_t2_right_icon

0x7722,	// (0x00026353) list_medium_line_t2_right_iconx2

0x7722,	// (0x00026353) list_medium_line_t3

0x7722,	// (0x00026353) list_medium_line_t3_g2

0x7722,	// (0x00026353) list_medium_line_t3_g3

0x7722,	// (0x00026353) list_medium_line_t3_right_iconx2

0x772b,	// (0x0002635c) list_medium_line_t4_g4

0x7722,	// (0x00026353) list_medium_line_x2

0x7722,	// (0x00026353) list_medium_line_x2_t2_g2

0x7722,	// (0x00026353) list_medium_line_x2_t2_g3

0x7722,	// (0x00026353) list_medium_line_x2_t2_g4

0x7722,	// (0x00026353) list_medium_line_x2_t3

0x7722,	// (0x00026353) list_medium_line_x2_t3_g2

0x7722,	// (0x00026353) list_medium_line_x2_t3_g3

0x7722,	// (0x00026353) list_medium_line_x2_t3_g4

0x7722,	// (0x00026353) list_medium_line_x2_t4_g2

0x7722,	// (0x00026353) list_medium_line_x2_t4_g4

0x7734,	// (0x00026365) list_medium_line_x3

0x7734,	// (0x00026365) list_medium_line_x3_t4

0x7734,	// (0x00026365) list_medium_line_x3_t4_g4

0x772b,	// (0x0002635c) list_medium_line_x4_t4

0x772b,	// (0x0002635c) list_medium_line_x4_t4_g7

0x772b,	// (0x0002635c) list_medium_line_x4_t5

0x773d,	// (0x0002636e) list_single_fs_dyc_pane_ParamLimits

0x773d,	// (0x0002636e) list_single_fs_dyc_pane

0x314f,	// (0x00021d80) list_medium_line_x4_t4_g7_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x4_t4_g7_g1

0x7e26,	// (0x00026a57) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e26,	// (0x00026a57) list_medium_line_x4_t4_g7_g2

0x7e32,	// (0x00026a63) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e32,	// (0x00026a63) list_medium_line_x4_t4_g7_g3

0x7e41,	// (0x00026a72) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e41,	// (0x00026a72) list_medium_line_x4_t4_g7_g4

0x7e4d,	// (0x00026a7e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e4d,	// (0x00026a7e) list_medium_line_x4_t4_g7_g5

0x7e5c,	// (0x00026a8d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e5c,	// (0x00026a8d) list_medium_line_x4_t4_g7_g6

0x7e6b,	// (0x00026a9c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e6b,	// (0x00026a9c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0002e7fa) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0002e7fa) list_medium_line_x4_t4_g7_g

0x7e77,	// (0x00026aa8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e77,	// (0x00026aa8) list_medium_line_x4_t4_g7_t1

0x7e8c,	// (0x00026abd) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e8c,	// (0x00026abd) list_medium_line_x4_t4_g7_t2

0x7ea1,	// (0x00026ad2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ea1,	// (0x00026ad2) list_medium_line_x4_t4_g7_t3

0x7eb6,	// (0x00026ae7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7eb6,	// (0x00026ae7) list_medium_line_x4_t4_g7_t4

0x7ec8,	// (0x00026af9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ec8,	// (0x00026af9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0002e809) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0002e809) list_medium_line_x4_t4_g7_t

0x7eda,	// (0x00026b0b) list_single_dyc_row_pane_ParamLimits

0x7eda,	// (0x00026b0b) list_single_dyc_row_pane

0x870c,	// (0x0002733d) call5_gesture_pane_ParamLimits

0x870c,	// (0x0002733d) call5_gesture_pane

0x8742,	// (0x00027373) call5_windows_pane_ParamLimits

0x8742,	// (0x00027373) call5_windows_pane

0x8793,	// (0x000273c4) call5_swipe_1_pane_cp_ParamLimits

0x8793,	// (0x000273c4) call5_swipe_1_pane_cp

0x879f,	// (0x000273d0) call5_swipe_2_pane_cp_ParamLimits

0x879f,	// (0x000273d0) call5_swipe_2_pane_cp

0xa72f,	// (0x00029360) call5_image_pane_cp

0x87ab,	// (0x000273dc) popup_call5_audio_first_window_cp_ParamLimits

0x87ab,	// (0x000273dc) popup_call5_audio_first_window_cp

0xe322,	// (0x0002cf53) call5_swipe_1_pane_g1_cp_ParamLimits

0xe322,	// (0x0002cf53) call5_swipe_1_pane_g1_cp

0xe38f,	// (0x0002cfc0) call5_swipe_1_pane_g2_cp

0xe33b,	// (0x0002cf6c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe33b,	// (0x0002cf6c) call5_swipe_1_pane_t1_cp

0xe322,	// (0x0002cf53) call5_swipe_2_pane_g1_cp_ParamLimits

0xe322,	// (0x0002cf53) call5_swipe_2_pane_g1_cp

0xe397,	// (0x0002cfc8) call5_swipe_2_pane_g2_cp

0xe39f,	// (0x0002cfd0) call5_swipe_2_pane_t1_cp_ParamLimits

0xe39f,	// (0x0002cfd0) call5_swipe_2_pane_t1_cp

0xa890,	// (0x000294c1) main_sp_fs_email_pane

0xd79d,	// (0x0002c3ce) main_sp_fs_listscroll_pane_te

0x87b9,	// (0x000273ea) popup_sp_fs_action_menu_pane_ParamLimits

0x87b9,	// (0x000273ea) popup_sp_fs_action_menu_pane

0xca3b,	// (0x0002b66c) bg_sp_fs_ctrlbar_pane_g1

0xe3b4,	// (0x0002cfe5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3bd,	// (0x0002cfee) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3c6,	// (0x0002cff7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xca3b,	// (0x0002b66c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0002e8f7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc81a,	// (0x0002b44b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc81a,	// (0x0002b44b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3cf,	// (0x0002d000) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3cf,	// (0x0002d000) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3db,	// (0x0002d00c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3db,	// (0x0002d00c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0002e900) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0002e900) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3e7,	// (0x0002d018) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3e7,	// (0x0002d018) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x87ff,	// (0x00027430) list_medium_line_t2_right_icon_g1

0x8807,	// (0x00027438) list_medium_line_t2_right_icon_t1

0x8817,	// (0x00027448) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0002e905) list_medium_line_t2_right_icon_t

0xc603,	// (0x0002b234) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc603,	// (0x0002b234) bg_sp_fs_ctrlbar_pane

0x887e,	// (0x000274af) main_sp_fs_ctrlbar_button_pane_cp01

0x8886,	// (0x000274b7) main_sp_fs_ctrlbar_ddmenu_pane

0xe43b,	// (0x0002d06c) main_sp_fs_ctrlbar_pane_g1

0xe447,	// (0x0002d078) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0002e90a) main_sp_fs_ctrlbar_pane_g

0xe453,	// (0x0002d084) main_sp_fs_ctrlbar_pane_t1

0x8890,	// (0x000274c1) main_sp_fs_ctrlbar_pane

0x88a6,	// (0x000274d7) main_sp_fs_listscroll_pane_te_cp01

0x88b7,	// (0x000274e8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x88b7,	// (0x000274e8) popup_sp_fs_action_menu_pane_cp01

0xa890,	// (0x000294c1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa890,	// (0x000294c1) bg_sp_fs_highlight_list_pane_cp01

0xe483,	// (0x0002d0b4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe483,	// (0x0002d0b4) sp_fs_action_menu_list_gene_pane_g1

0xe492,	// (0x0002d0c3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe492,	// (0x0002d0c3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0002e914) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0002e914) sp_fs_action_menu_list_gene_pane_g

0xe49f,	// (0x0002d0d0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe49f,	// (0x0002d0d0) sp_fs_action_menu_list_gene_pane_t1

0xe4b7,	// (0x0002d0e8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4b7,	// (0x0002d0e8) sp_fs_action_menu_list_gene_pane

0xe4da,	// (0x0002d10b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4da,	// (0x0002d10b) popup_sp_fs_action_menu_bg_pane

0xe4e8,	// (0x0002d119) sp_fs_action_menu_list_pane_ParamLimits

0xe4e8,	// (0x0002d119) sp_fs_action_menu_list_pane

0x88e5,	// (0x00027516) sp_fs_scroll_pane_cp01_ParamLimits

0x88e5,	// (0x00027516) sp_fs_scroll_pane_cp01

0x890b,	// (0x0002753c) list_medium_line_plain_t2_t1

0x891b,	// (0x0002754c) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0002e919) list_medium_line_plain_t2_t

0x8929,	// (0x0002755a) list_medium_line_plain_t3_t1

0x8939,	// (0x0002756a) list_medium_line_plain_t3_t2

0x8947,	// (0x00027578) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0002e91e) list_medium_line_plain_t3_t

0x314f,	// (0x00021d80) list_medium_line_x2_t2_g2_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x2_t2_g2_g1

0x3167,	// (0x00021d98) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3167,	// (0x00021d98) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0002de73) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0002de73) list_medium_line_x2_t2_g2_g

0x44ff,	// (0x00023130) list_medium_line_x2_t2_g2_t1_ParamLimits

0x44ff,	// (0x00023130) list_medium_line_x2_t2_g2_t1

0x319c,	// (0x00021dcd) list_medium_line_x2_t2_g2_t2_ParamLimits

0x319c,	// (0x00021dcd) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0002e925) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0002e925) list_medium_line_x2_t2_g2_t

0x314f,	// (0x00021d80) list_medium_line_x2_t4_g2_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x2_t4_g2_g1

0x3167,	// (0x00021d98) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3167,	// (0x00021d98) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0002de73) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0002de73) list_medium_line_x2_t4_g2_g

0x8955,	// (0x00027586) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8955,	// (0x00027586) list_medium_line_x2_t4_g2_t1

0x896f,	// (0x000275a0) list_medium_line_x2_t4_g2_t2_ParamLimits

0x896f,	// (0x000275a0) list_medium_line_x2_t4_g2_t2

0x8985,	// (0x000275b6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8985,	// (0x000275b6) list_medium_line_x2_t4_g2_t3

0x319c,	// (0x00021dcd) list_medium_line_x2_t4_g2_t4_ParamLimits

0x319c,	// (0x00021dcd) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf9,	// (0x0002e92a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf9,	// (0x0002e92a) list_medium_line_x2_t4_g2_t

0x899a,	// (0x000275cb) list_medium_line_t3_right_iconx2_g1

0x87ff,	// (0x00027430) list_medium_line_t3_right_iconx2_g2

0x89a2,	// (0x000275d3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd02,	// (0x0002e933) list_medium_line_t3_right_iconx2_g

0x89aa,	// (0x000275db) list_medium_line_t3_right_iconx2_t1

0x89ba,	// (0x000275eb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd09,	// (0x0002e93a) list_medium_line_t3_right_iconx2_t

0x314f,	// (0x00021d80) list_medium_line_x3_t4_g4_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x3_t4_g4_g1

0x315b,	// (0x00021d8c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x315b,	// (0x00021d8c) list_medium_line_x3_t4_g4_g2

0x3203,	// (0x00021e34) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3203,	// (0x00021e34) list_medium_line_x3_t4_g4_g3

0x89c8,	// (0x000275f9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x89c8,	// (0x000275f9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd0e,	// (0x0002e93f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd0e,	// (0x0002e93f) list_medium_line_x3_t4_g4_g

0x89d4,	// (0x00027605) list_medium_line_x3_t4_g4_t1_ParamLimits

0x89d4,	// (0x00027605) list_medium_line_x3_t4_g4_t1

0x89eb,	// (0x0002761c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x89eb,	// (0x0002761c) list_medium_line_x3_t4_g4_t2

0x8a00,	// (0x00027631) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8a00,	// (0x00027631) list_medium_line_x3_t4_g4_t3

0x8a15,	// (0x00027646) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8a15,	// (0x00027646) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd17,	// (0x0002e948) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd17,	// (0x0002e948) list_medium_line_x3_t4_g4_t

0x8a32,	// (0x00027663) list_single_dyc_row_text_pane_t1_ParamLimits

0x8a32,	// (0x00027663) list_single_dyc_row_text_pane_t1

0x8a71,	// (0x000276a2) list_single_dyc_row_text_pane_t2_ParamLimits

0x8a71,	// (0x000276a2) list_single_dyc_row_text_pane_t2

0xe50c,	// (0x0002d13d) list_single_dyc_row_text_pane_t3_ParamLimits

0xe50c,	// (0x0002d13d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd20,	// (0x0002e951) list_single_dyc_row_text_pane_t_ParamLimits

0xfd20,	// (0x0002e951) list_single_dyc_row_text_pane_t

0xe530,	// (0x0002d161) list_single_dyc_row_pane_g1_ParamLimits

0xe530,	// (0x0002d161) list_single_dyc_row_pane_g1

0xe53c,	// (0x0002d16d) list_single_dyc_row_pane_g2_ParamLimits

0xe53c,	// (0x0002d16d) list_single_dyc_row_pane_g2

0xe548,	// (0x0002d179) list_single_dyc_row_pane_g3_ParamLimits

0xe548,	// (0x0002d179) list_single_dyc_row_pane_g3

0xe554,	// (0x0002d185) list_single_dyc_row_pane_g4_ParamLimits

0xe554,	// (0x0002d185) list_single_dyc_row_pane_g4

0x0003,

0xfd2d,	// (0x0002e95e) list_single_dyc_row_pane_g_ParamLimits

0xfd2d,	// (0x0002e95e) list_single_dyc_row_pane_g

0xe560,	// (0x0002d191) list_single_dyc_row_text_pane_ParamLimits

0xe560,	// (0x0002d191) list_single_dyc_row_text_pane

0x9e15,	// (0x00028a46) bg_sp_fs_scroll_pane

0xe57f,	// (0x0002d1b0) thumb_sp_fs_scroll_pane

0x7164,	// (0x00025d95) list_medium_line_g1_ParamLimits

0x7164,	// (0x00025d95) list_medium_line_g1

0x8b9c,	// (0x000277cd) list_medium_line_t1_ParamLimits

0x8b9c,	// (0x000277cd) list_medium_line_t1

0x314f,	// (0x00021d80) list_medium_line_x2_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x2_g1

0x315b,	// (0x00021d8c) list_medium_line_x2_g2_ParamLimits

0x315b,	// (0x00021d8c) list_medium_line_x2_g2

0x0001,

0xfd36,	// (0x0002e967) list_medium_line_x2_g_ParamLimits

0xfd36,	// (0x0002e967) list_medium_line_x2_g

0xe588,	// (0x0002d1b9) list_medium_line_x2_t1_ParamLimits

0xe588,	// (0x0002d1b9) list_medium_line_x2_t1

0x314f,	// (0x00021d80) list_medium_line_x3_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x3_g1

0x315b,	// (0x00021d8c) list_medium_line_x3_g2_ParamLimits

0x315b,	// (0x00021d8c) list_medium_line_x3_g2

0x0001,

0xfd36,	// (0x0002e967) list_medium_line_x3_g_ParamLimits

0xfd36,	// (0x0002e967) list_medium_line_x3_g

0xe588,	// (0x0002d1b9) list_medium_line_x3_t1_ParamLimits

0xe588,	// (0x0002d1b9) list_medium_line_x3_t1

0xe59e,	// (0x0002d1cf) thumb_sp_fs_scroll_pane_g1

0xe5a7,	// (0x0002d1d8) thumb_sp_fs_scroll_pane_g2

0xe5b0,	// (0x0002d1e1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0002e96c) thumb_sp_fs_scroll_pane_g

0xe59e,	// (0x0002d1cf) bg_sp_fs_scroll_pane_g1

0xe5a7,	// (0x0002d1d8) bg_sp_fs_scroll_pane_g2

0xe5b0,	// (0x0002d1e1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0002e96c) bg_sp_fs_scroll_pane_g

0x314f,	// (0x00021d80) list_medium_line_x2_t3_g4_g1_ParamLimits

0x314f,	// (0x00021d80) list_medium_line_x2_t3_g4_g1

0x31f7,	// (0x00021e28) list_medium_line_x2_t3_g4_g2_ParamLimits

0x31f7,	// (0x00021e28) list_medium_line_x2_t3_g4_g2

0x315b,	// (0x00021d8c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x315b,	// (0x00021d8c) list_medium_line_x2_t3_g4_g3

0x3167,	// (0x00021d98) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3167,	// (0x00021d98) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0002deef) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0002deef) list_medium_line_x2_t3_g4_g

0x8bb1,	// (0x000277e2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8bb1,	// (0x000277e2) list_medium_line_x2_t3_g4_t1

0x8bc7,	// (0x000277f8) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8bc7,	// (0x000277f8) list_medium_line_x2_t3_g4_t2

0x319c,	// (0x00021dcd) list_medium_line_x2_t3_g4_t3_ParamLimits

0x319c,	// (0x00021dcd) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd42,	// (0x0002e973) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd42,	// (0x0002e973) list_medium_line_x2_t3_g4_t

0x7164,	// (0x00025d95) list_medium_line_g2_g1_ParamLimits

0x7164,	// (0x00025d95) list_medium_line_g2_g1

0x7170,	// (0x00025da1) list_medium_line_g2_g2_ParamLimits

0x7170,	// (0x00025da1) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002e631) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002e631) list_medium_line_g2_g

0x8be1,	// (0x00027812) list_medium_line_g2_t1_ParamLimits

0x8be1,	// (0x00027812) list_medium_line_g2_t1

0x7164,	// (0x00025d95) list_medium_line_t3_g2_g1_ParamLimits

0x7164,	// (0x00025d95) list_medium_line_t3_g2_g1

0x7170,	// (0x00025da1) list_medium_line_t3_g2_g2_ParamLimits

0x7170,	// (0x00025da1) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002e631) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002e631) list_medium_line_t3_g2_g

0x8bf6,	// (0x00027827) list_medium_line_t3_g2_t1_ParamLimits

0x8bf6,	// (0x00027827) list_medium_line_t3_g2_t1

0x8c10,	// (0x00027841) list_medium_line_t3_g2_t2_ParamLimits

0x8c10,	// (0x00027841) list_medium_line_t3_g2_t2

0x8c26,	// (0x00027857) list_medium_line_t3_g2_t3_ParamLimits

0x8c26,	// (0x00027857) list_medium_line_t3_g2_t3

0x0002,

0xfd49,	// (0x0002e97a) list_medium_line_t3_g2_t_ParamLimits

0xfd49,	// (0x0002e97a) list_medium_line_t3_g2_t

0x87ff,	// (0x00027430) list_medium_line_right_icon_g1

0x8c40,	// (0x00027871) list_medium_line_right_icon_t1

0x7164,	// (0x00025d95) list_medium_line_t2_g1_ParamLimits

0x7164,	// (0x00025d95) list_medium_line_t2_g1

0x8c4e,	// (0x0002787f) list_medium_line_t2_t1_ParamLimits

0x8c4e,	// (0x0002787f) list_medium_line_t2_t1

0x8c68,	// (0x00027899) list_medium_line_t2_t2_ParamLimits

0x8c68,	// (0x00027899) list_medium_line_t2_t2

0x0001,

0xfd50,	// (0x0002e981) list_medium_line_t2_t_ParamLimits

0xfd50,	// (0x0002e981) list_medium_line_t2_t

0x7164,	// (0x00025d95) list_medium_line_t3_g1_ParamLimits

0x7164,	// (0x00025d95) list_medium_line_t3_g1

0x8c7d,	// (0x000278ae) list_medium_line_t3_t1_ParamLimits

0x8c7d,	// (0x000278ae) list_medium_line_t3_t1

0x8c97,	// (0x000278c8) list_medium_line_t3_t2_ParamLimits

0x8c97,	// (0x000278c8) list_medium_line_t3_t2

0x8cad,	// (0x000278de) list_medium_line_t3_t3_ParamLimits

0x8cad,	// (0x000278de) list_medium_line_t3_t3

0x0002,

0xfd55,	// (0x0002e986) list_medium_line_t3_t_ParamLimits

0xfd55,	// (0x0002e986) list_medium_line_t3_t

0x7164,	// (0x00025d95) list_medium_line_g3_g1_ParamLimits

0x7164,	// (0x00025d95) list_medium_line_g3_g1

0x8cc2,	// (0x000278f3) list_medium_line_g3_g2_ParamLimits

0x8cc2,	// (0x000278f3) list_medium_line_g3_g2

0x7170,	// (0x00025da1) list_medium_line_g3_g3_ParamLimits

0x7170,	// (0x00025da1) list_medium_line_g3_g3

0x0002,

0xfd5c,	// (0x0002e98d) list_medium_line_g3_g_ParamLimits

0xfd5c,	// (0x0002e98d) list_medium_line_g3_g

0x8cce,	// (0x000278ff) list_medium_line_g3_t1_ParamLimits

0x8cce,	// (0x000278ff) list_medium_line_g3_t1

0x7164,	// (0x00025d95) list_medium_line_t2_g3_g1_ParamLimits

0x7164,	// (0x00025d95) list_medium_line_t2_g3_g1

0x8cc2,	// (0x000278f3) list_medium_line_t2_g3_g2_ParamLimits

0x8cc2,	// (0x000278f3) list_medium_line_t2_g3_g2

0x7170,	// (0x00025da1) list_medium_line_t2_g3_g3_ParamLimits

0x7170,	// (0x00025da1) list_medium_line_t2_g3_g3

0x0002,

0xfd5c,	// (0x0002e98d) list_medium_line_t2_g3_g_ParamLimits

0xfd5c,	// (0x0002e98d) list_medium_line_t2_g3_g

0x8ce3,	// (0x00027914) list_medium_line_t2_g3_t1_ParamLimits

0x8ce3,	// (0x00027914) list_medium_line_t2_g3_t1

0x8cfd,	// (0x0002792e) list_medium_line_t2_g3_t2_ParamLimits

0x8cfd,	// (0x0002792e) list_medium_line_t2_g3_t2

0x0001,

0xfd63,	// (0x0002e994) list_medium_line_t2_g3_t_ParamLimits

0xfd63,	// (0x0002e994) list_medium_line_t2_g3_t

0x7164,	// (0x00025d95) list_medium_line_t3_g3_g1_ParamLimits

0x7164,	// (0x00025d95) list_medium_line_t3_g3_g1

0x8cc2,	// (0x000278f3) list_medium_line_t3_g3_g2_ParamLimits

0x8cc2,	// (0x000278f3) list_medium_line_t3_g3_g2

0x7170,	// (0x00025da1) list_medium_line_t3_g3_g3_ParamLimits

0x7170,	// (0x00025da1) list_medium_line_t3_g3_g3

0x0002,

0xfd5c,	// (0x0002e98d) list_medium_line_t3_g3_g_ParamLimits

0xfd5c,	// (0x0002e98d) list_medium_line_t3_g3_g

0x8d13,	// (0x00027944) list_medium_line_t3_g3_t1_ParamLimits

0x8d13,	// (0x00027944) list_medium_line_t3_g3_t1

0x8d2c,	// (0x0002795d) list_medium_line_t3_g3_t2_ParamLimits

0x8d2c,	// (0x0002795d) list_medium_line_t3_g3_t2

0x8d42,	// (0x00027973) list_medium_line_t3_g3_t3_ParamLimits

0x8d42,	// (0x00027973) list_medium_line_t3_g3_t3

0x0002,

0xfd68,	// (0x0002e999) list_medium_line_t3_g3_t_ParamLimits

0xfd68,	// (0x0002e999) list_medium_line_t3_g3_t

0x899a,	// (0x000275cb) list_medium_line_right_iconx2_g1

0x87ff,	// (0x00027430) list_medium_line_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0002e9a0) list_medium_line_right_iconx2_g

0x8d5c,	// (0x0002798d) list_medium_line_right_iconx2_t1

0x899a,	// (0x000275cb) list_medium_line_t2_right_iconx2_g1

0x87ff,	// (0x00027430) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0002e9a0) list_medium_line_t2_right_iconx2_g

0x8d6a,	// (0x0002799b) list_medium_line_t2_right_iconx2_t1

0x8d7a,	// (0x000279ab) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd74,	// (0x0002e9a5) list_medium_line_t2_right_iconx2_t

0x8d88,	// (0x000279b9) list_medium_line_x4_t4_t1

0x8d96,	// (0x000279c7) list_medium_line_x4_t4_t2

0x8da6,	// (0x000279d7) list_medium_line_x4_t4_t3

0x8db6,	// (0x000279e7) list_medium_line_x4_t4_t4

0x0003,

0xfd79,	// (0x0002e9aa) list_medium_line_x4_t4_t

0x8df0,	// (0x00027a21) tport_appsw_pane_ParamLimits

0x8df0,	// (0x00027a21) tport_appsw_pane

0x8dfe,	// (0x00027a2f) tport_contact_pane_ParamLimits

0x8dfe,	// (0x00027a2f) tport_contact_pane

0x8e0e,	// (0x00027a3f) tport_listscroll_pane_ParamLimits

0x8e0e,	// (0x00027a3f) tport_listscroll_pane

0x8e1d,	// (0x00027a4e) cell_tport_appsw_pane_ParamLimits

0x8e1d,	// (0x00027a4e) cell_tport_appsw_pane

0xccd3,	// (0x0002b904) tport_appsw_pane_g1_ParamLimits

0xccd3,	// (0x0002b904) tport_appsw_pane_g1

0xe5b9,	// (0x0002d1ea) tport_contact_pane_g1

0xe5c2,	// (0x0002d1f3) tport_contact_pane_t1

0xe5d0,	// (0x0002d201) tport_contact_pane_t2

0x0001,

0xfd82,	// (0x0002e9b3) tport_contact_pane_t

0xe5de,	// (0x0002d20f) list_tport_pane

0xe5e7,	// (0x0002d218) scroll_pane_cp_030

0x8e52,	// (0x00027a83) cell_tport_appsw_pane_g1

0x8e62,	// (0x00027a93) cell_tport_appsw_pane_t1

0x8e70,	// (0x00027aa1) grid_highlight_pane_cp019

0x8e78,	// (0x00027aa9) list_tport_double_graphic_pane_ParamLimits

0x8e78,	// (0x00027aa9) list_tport_double_graphic_pane

0xa890,	// (0x000294c1) list_highlight_pane_cp023_ParamLimits

0xa890,	// (0x000294c1) list_highlight_pane_cp023

0x8e95,	// (0x00027ac6) list_tport_double_graphic_pane_g1_ParamLimits

0x8e95,	// (0x00027ac6) list_tport_double_graphic_pane_g1

0x8ea2,	// (0x00027ad3) list_tport_double_graphic_pane_t1_ParamLimits

0x8ea2,	// (0x00027ad3) list_tport_double_graphic_pane_t1

0x8eb7,	// (0x00027ae8) list_tport_double_graphic_pane_t2_ParamLimits

0x8eb7,	// (0x00027ae8) list_tport_double_graphic_pane_t2

0x0001,

0xfd8e,	// (0x0002e9bf) list_tport_double_graphic_pane_t_ParamLimits

0xfd8e,	// (0x0002e9bf) list_tport_double_graphic_pane_t

0x9e15,	// (0x00028a46) main_cale_note_pane

0x20e2,	// (0x00020d13) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x20e2,	// (0x00020d13) cell_vitu2_function_top_wide_pane_cp01

0x8290,	// (0x00026ec1) wait_bar_pane_cp05_ParamLimits

0xa890,	// (0x000294c1) listscroll_cmail_pane

0xe5f0,	// (0x0002d221) list_cmail_pane

0x8ec9,	// (0x00027afa) list_cmail_body_pane

0x8ee3,	// (0x00027b14) list_single_cmail_header_caption_pane

0xe600,	// (0x0002d231) list_single_cmail_header_detail_pane_ParamLimits

0xe600,	// (0x0002d231) list_single_cmail_header_detail_pane

0xe632,	// (0x0002d263) list_single_cmail_header_caption_pane_t1

0x8f03,	// (0x00027b34) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8f03,	// (0x00027b34) list_single_cmail_header_detail_pane_g1

0xe649,	// (0x0002d27a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe649,	// (0x0002d27a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd93,	// (0x0002e9c4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd93,	// (0x0002e9c4) list_single_cmail_header_detail_pane_g

0xe662,	// (0x0002d293) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe662,	// (0x0002d293) list_single_cmail_header_detail_pane_t1

0xe6c2,	// (0x0002d2f3) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6c2,	// (0x0002d2f3) list_single_cmail_header_editor_pane_bg

0xe108,	// (0x0002cd39) list_cmail_body_pane_g1

0xe6d9,	// (0x0002d30a) list_cmail_body_pane_t1

0xd440,	// (0x0002c071) list_single_cmail_header_editor_pane_bg_g1

0xa9b8,	// (0x000295e9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd450,	// (0x0002c081) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd448,	// (0x0002c079) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd66a,	// (0x0002c29b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd470,	// (0x0002c0a1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd460,	// (0x0002c091) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd468,	// (0x0002c099) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa998,	// (0x000295c9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8f1b,	// (0x00027b4c) calenote_gesture_pane_ParamLimits

0x8f1b,	// (0x00027b4c) calenote_gesture_pane

0x8f35,	// (0x00027b66) calenote_window_pane_ParamLimits

0x8f35,	// (0x00027b66) calenote_window_pane

0xe6e7,	// (0x0002d318) popup_note_window_cp01

0x8f4d,	// (0x00027b7e) calenote_swipe_1_pane_ParamLimits

0x8f4d,	// (0x00027b7e) calenote_swipe_1_pane

0x879f,	// (0x000273d0) calenote_swipe_2_pane_ParamLimits

0x879f,	// (0x000273d0) calenote_swipe_2_pane

0xe322,	// (0x0002cf53) calenote_swipe_1_pane_g1_ParamLimits

0xe322,	// (0x0002cf53) calenote_swipe_1_pane_g1

0xe32f,	// (0x0002cf60) calenote_swipe_1_pane_g2_ParamLimits

0xe32f,	// (0x0002cf60) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0002e8ed) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0002e8ed) calenote_swipe_1_pane_g

0xe6f9,	// (0x0002d32a) calenote_swipe_1_pane_t1_ParamLimits

0xe6f9,	// (0x0002d32a) calenote_swipe_1_pane_t1

0xe322,	// (0x0002cf53) calenote_swipe_2_pane_g1_ParamLimits

0xe322,	// (0x0002cf53) calenote_swipe_2_pane_g1

0xe718,	// (0x0002d349) calenote_swipe_2_pane_g2_ParamLimits

0xe718,	// (0x0002d349) calenote_swipe_2_pane_g2

0x0001,

0xfd9f,	// (0x0002e9d0) calenote_swipe_2_pane_g_ParamLimits

0xfd9f,	// (0x0002e9d0) calenote_swipe_2_pane_g

0xe724,	// (0x0002d355) calenote_swipe_2_pane_t1_ParamLimits

0xe724,	// (0x0002d355) calenote_swipe_2_pane_t1

0x9e15,	// (0x00028a46) main_mup_navstr_pane

0x60f9,	// (0x00024d2a) main_mup3_pane_t7_ParamLimits

0x60f9,	// (0x00024d2a) main_mup3_pane_t7

0x18f6,	// (0x00020527) main_mp4_pane_g6_ParamLimits

0x18f6,	// (0x00020527) main_mp4_pane_g6

0x1c03,	// (0x00020834) main_image3_pane_t4_ParamLimits

0x1c03,	// (0x00020834) main_image3_pane_t4

0x8f60,	// (0x00027b91) popup_navstr_preview_pane_ParamLimits

0x8f60,	// (0x00027b91) popup_navstr_preview_pane

0x8f6c,	// (0x00027b9d) scroll_navstr_pane_ParamLimits

0x8f6c,	// (0x00027b9d) scroll_navstr_pane

0x9e15,	// (0x00028a46) bg_popup_preview_window_pane_cp04

0xe74b,	// (0x0002d37c) popup_navstr_preview_pane_t1

0x8f78,	// (0x00027ba9) scroll_navstr_pane_g1_ParamLimits

0x8f78,	// (0x00027ba9) scroll_navstr_pane_g1

0x8f85,	// (0x00027bb6) scroll_navstr_pane_t1_ParamLimits

0x8f85,	// (0x00027bb6) scroll_navstr_pane_t1

0xe6f0,	// (0x0002d321) bg_button_pane_cp014

0xe6f0,	// (0x0002d321) bg_button_pane_cp030

0x86b2,	// (0x000272e3) list_double_fisheye_pane_g4_ParamLimits

0x86b2,	// (0x000272e3) list_double_fisheye_pane_g4

0x86be,	// (0x000272ef) list_double_fisheye_pane_g5_ParamLimits

0x86be,	// (0x000272ef) list_double_fisheye_pane_g5

0xd7a6,	// (0x0002c3d7) sp_fs_scroll_pane_cp03

0xe43b,	// (0x0002d06c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe447,	// (0x0002d078) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0002e90a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe453,	// (0x0002d084) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5f8,	// (0x0002d229) sp_fs_scroll_pane_cp02

0xa68b,	// (0x000292bc) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa68b,	// (0x000292bc) popup_sp_fs_calendar_preview_list_single_pane

0x9e15,	// (0x00028a46) main_cam6_pano_pane

0x1250,	// (0x0001fe81) main_mup3_pane_ParamLimits

0x9e15,	// (0x00028a46) main_phacti_pane

0x8163,	// (0x00026d94) bg_button_pane_cp11

0x817b,	// (0x00026dac) main_mobtv_info_pane_g2_ParamLimits

0x817b,	// (0x00026dac) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0002e86a) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0002e86a) main_mobtv_info_pane_g

0x832d,	// (0x00026f5e) sc_clock_pane_t5_ParamLimits

0x832d,	// (0x00026f5e) sc_clock_pane_t5

0x8525,	// (0x00027156) main_radioblah_pane_g1_ParamLimits

0xe26e,	// (0x0002ce9f) main_radioblah_pane_t3_ParamLimits

0xe26e,	// (0x0002ce9f) main_radioblah_pane_t3

0xe286,	// (0x0002ceb7) main_radioblah_pane_t4_ParamLimits

0xe286,	// (0x0002ceb7) main_radioblah_pane_t4

0x8543,	// (0x00027174) main_radioblah_text_pane_ParamLimits

0x8543,	// (0x00027174) main_radioblah_text_pane

0x8550,	// (0x00027181) main_radioblah_info_pane_g1_ParamLimits

0x85e9,	// (0x0002721a) main_radioblah_info_pane_t4_ParamLimits

0x85e9,	// (0x0002721a) main_radioblah_info_pane_t4

0xa890,	// (0x000294c1) main_sp_fs_calendar_pane

0x8f97,	// (0x00027bc8) main_phacti_pane_g1

0x8f9f,	// (0x00027bd0) phacti_note_pane_ParamLimits

0x8f9f,	// (0x00027bd0) phacti_note_pane

0xe762,	// (0x0002d393) phacti_term_pane_ParamLimits

0xe762,	// (0x0002d393) phacti_term_pane

0xe777,	// (0x0002d3a8) phacti_note_pane_t1_ParamLimits

0xe777,	// (0x0002d3a8) phacti_note_pane_t1

0xe78e,	// (0x0002d3bf) phacti_term_pane_g1

0xe796,	// (0x0002d3c7) phacti_term_pane_t1_ParamLimits

0xe796,	// (0x0002d3c7) phacti_term_pane_t1

0xe7c0,	// (0x0002d3f1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7c8,	// (0x0002d3f9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda9,	// (0x0002e9da) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7d0,	// (0x0002d401) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7d0,	// (0x0002d401) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7e6,	// (0x0002d417) aid_popup_sp_fs_bg_corner_pane

0xca3b,	// (0x0002b66c) popup_sp_fs_calendar_preview_bg_pane_g1

0x9e15,	// (0x00028a46) popup_sp_fs_calendar_preview_bg_pane

0xe7ee,	// (0x0002d41f) popup_sp_fs_calendar_preview_list_pane

0xc603,	// (0x0002b234) bg_main_sp_fs_cale_pane_ParamLimits

0xc603,	// (0x0002b234) bg_main_sp_fs_cale_pane

0xe7ff,	// (0x0002d430) listscroll_cale_mrui_pane_ParamLimits

0xe7ff,	// (0x0002d430) listscroll_cale_mrui_pane

0xe814,	// (0x0002d445) listscroll_sp_fs_schedule_track_pane

0xe81d,	// (0x0002d44e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe81d,	// (0x0002d44e) main_sp_fs_ctrlbar_pane_cp01

0xe830,	// (0x0002d461) main_sp_fs_ribbon_pane

0xe838,	// (0x0002d469) popup_sp_fs_cale_preview_window

0xee55,	// (0x0002da86) list_single_sp_fs_schedule_track_pane_ParamLimits

0xee55,	// (0x0002da86) list_single_sp_fs_schedule_track_pane

0xd3b8,	// (0x0002bfe9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd3b8,	// (0x0002bfe9) bg_sp_fs_highlight_list_pane_cp03

0x9002,	// (0x00027c33) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9002,	// (0x00027c33) list_single_sp_fs_schedule_track_pane_g1

0x900e,	// (0x00027c3f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x900e,	// (0x00027c3f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdae,	// (0x0002e9df) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdae,	// (0x0002e9df) list_single_sp_fs_schedule_track_pane_g

0x901a,	// (0x00027c4b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x901a,	// (0x00027c4b) list_single_sp_fs_schedule_track_pane_t1

0x9038,	// (0x00027c69) sp_fs_schedule_track_pane_ParamLimits

0x9038,	// (0x00027c69) sp_fs_schedule_track_pane

0xe84a,	// (0x0002d47b) sp_fs_schedule_track_pane_g1

0xe852,	// (0x0002d483) sp_fs_schedule_track_pane_g2

0xe85a,	// (0x0002d48b) sp_fs_schedule_track_pane_g3

0xe862,	// (0x0002d493) sp_fs_schedule_track_pane_g4

0xe86a,	// (0x0002d49b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb3,	// (0x0002e9e4) sp_fs_schedule_track_pane_g

0xd440,	// (0x0002c071) bg_sp_fs_schedule_viewer_highlight_g1

0xa9b8,	// (0x000295e9) bg_sp_fs_schedule_viewer_highlight_g2

0xd448,	// (0x0002c079) bg_sp_fs_schedule_viewer_highlight_g3

0xd450,	// (0x0002c081) bg_sp_fs_schedule_viewer_highlight_g4

0xd66a,	// (0x0002c29b) bg_sp_fs_schedule_viewer_highlight_g5

0xd460,	// (0x0002c091) bg_sp_fs_schedule_viewer_highlight_g6

0xd468,	// (0x0002c099) bg_sp_fs_schedule_viewer_highlight_g7

0xd470,	// (0x0002c0a1) bg_sp_fs_schedule_viewer_highlight_g8

0xa998,	// (0x000295c9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdbe,	// (0x0002e9ef) bg_sp_fs_schedule_viewer_highlight_g

0x9e15,	// (0x00028a46) bg_main_sp_fs_ribbon_pane

0x904a,	// (0x00027c7b) main_sp_fs_ribbon_pane_g1

0xe872,	// (0x0002d4a3) main_sp_fs_ribbon_pane_t1

0x9053,	// (0x00027c84) main_sp_fs_ribbon_pane_t2

0xe881,	// (0x0002d4b2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd1,	// (0x0002ea02) main_sp_fs_ribbon_pane_t

0xe890,	// (0x0002d4c1) main_sp_fs_ribbon_scheduler_pane

0xe898,	// (0x0002d4c9) bg_main_sp_fs_ribbon_pane_g1

0xe8a1,	// (0x0002d4d2) bg_main_sp_fs_ribbon_pane_g2

0xe8aa,	// (0x0002d4db) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd8,	// (0x0002ea09) bg_main_sp_fs_ribbon_pane_g

0xe8b2,	// (0x0002d4e3) main_sp_fs_ribbon_scheduler_pane_g1

0xe8bb,	// (0x0002d4ec) main_sp_fs_ribbon_scheduler_pane_g2

0xe8c4,	// (0x0002d4f5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfddf,	// (0x0002ea10) main_sp_fs_ribbon_scheduler_pane_g

0xe8cd,	// (0x0002d4fe) list_cale_mrui_pane

0x9062,	// (0x00027c93) sp_fs_scroll_pane_cp07_ParamLimits

0x9062,	// (0x00027c93) sp_fs_scroll_pane_cp07

0x907e,	// (0x00027caf) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x907e,	// (0x00027caf) bg_sp_fs_schedule_viewer_highlight

0xe8da,	// (0x0002d50b) list_single_sp_fs_schedule_track_pane_cp01

0xe8e2,	// (0x0002d513) list_sp_fs_schedule_track_pane

0xe8ea,	// (0x0002d51b) sp_fs_scroll_pane_cp06_ParamLimits

0xe8ea,	// (0x0002d51b) sp_fs_scroll_pane_cp06

0xca3b,	// (0x0002b66c) bgmain_sp_fs_calendar_pane_g1

0x908b,	// (0x00027cbc) list_single_cale_mrui_pane_ParamLimits

0x908b,	// (0x00027cbc) list_single_cale_mrui_pane

0xe8fc,	// (0x0002d52d) list_single_cale_mrui_row_pane_ParamLimits

0xe8fc,	// (0x0002d52d) list_single_cale_mrui_row_pane

0xe909,	// (0x0002d53a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe909,	// (0x0002d53a) list_single_cale_mrui_row_pane_g1

0xe94e,	// (0x0002d57f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe94e,	// (0x0002d57f) list_single_cale_mrui_row_pane_t1

0x90b1,	// (0x00027ce2) list_single_cale_mrui_row_pane_t2_ParamLimits

0x90b1,	// (0x00027ce2) list_single_cale_mrui_row_pane_t2

0xe960,	// (0x0002d591) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe960,	// (0x0002d591) list_single_cale_mrui_row_pane_t3

0xe98f,	// (0x0002d5c0) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe98f,	// (0x0002d5c0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfded,	// (0x0002ea1e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfded,	// (0x0002ea1e) list_single_cale_mrui_row_pane_t

0x9117,	// (0x00027d48) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9117,	// (0x00027d48) list_single_cmail_header_editor_pane_bg_cp01

0x9139,	// (0x00027d6a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9139,	// (0x00027d6a) list_single_cmail_header_editor_pane_bg_cp02

0x9157,	// (0x00027d88) main_radioblah_text_pane_t1_ParamLimits

0x9157,	// (0x00027d88) main_radioblah_text_pane_t1

0xe9c0,	// (0x0002d5f1) cam6_indi_pane_cp01

0xe9c8,	// (0x0002d5f9) cam6_mode_pane_cp01

0xe9d0,	// (0x0002d601) cam6_pano_pane

0xe9d9,	// (0x0002d60a) cam6_zoom_pane_cp01

0xe9e3,	// (0x0002d614) cam6_pano_image_pane

0xe9ec,	// (0x0002d61d) cam6_pano_pane_g1

0xe108,	// (0x0002cd39) cam6_pano_pane_g2

0xe9f5,	// (0x0002d626) cam6_pano_pane_g3

0xe9fe,	// (0x0002d62f) cam6_pano_pane_g4

0xcfde,	// (0x0002bc0f) cam6_pano_pane_g5

0xea07,	// (0x0002d638) cam6_pano_pane_g6

0xea0f,	// (0x0002d640) cam6_pano_pane_g7

0xea17,	// (0x0002d648) cam6_pano_pane_g8

0xea20,	// (0x0002d651) cam6_pano_pane_g9

0x0008,

0xfdf6,	// (0x0002ea27) cam6_pano_pane_g

0x9e15,	// (0x00028a46) main_browser_tag_pane

0xe743,	// (0x0002d374) grid_navstr_albumart_pane

0xea2b,	// (0x0002d65c) cell_navstr_albumart_pane_ParamLimits

0xea2b,	// (0x0002d65c) cell_navstr_albumart_pane

0xea47,	// (0x0002d678) cell_navstr_albumart_pane_g1

0xc410,	// (0x0002b041) cell_navstr_albumart_pane_g2

0xc420,	// (0x0002b051) cell_navstr_albumart_pane_g3

0xc418,	// (0x0002b049) cell_navstr_albumart_pane_g4

0x0003,

0xfe09,	// (0x0002ea3a) cell_navstr_albumart_pane_g

0x9171,	// (0x00027da2) bt_list_pane_ParamLimits

0x9171,	// (0x00027da2) bt_list_pane

0x918a,	// (0x00027dbb) bt_list_pane_t1

0x9199,	// (0x00027dca) bt_list_pane_t2

0x0001,

0xfe12,	// (0x0002ea43) bt_list_pane_t

0x9e15,	// (0x00028a46) main_cale_prevew_pane

0x91a8,	// (0x00027dd9) popup_cale_preview_window_ParamLimits

0x91a8,	// (0x00027dd9) popup_cale_preview_window

0xa890,	// (0x000294c1) bg_popup_preview_window_pane_cp05_ParamLimits

0xa890,	// (0x000294c1) bg_popup_preview_window_pane_cp05

0xea4f,	// (0x0002d680) list_cale_preview_pane_ParamLimits

0xea4f,	// (0x0002d680) list_cale_preview_pane

0x91c5,	// (0x00027df6) list_double_cale_preview_pane_ParamLimits

0x91c5,	// (0x00027df6) list_double_cale_preview_pane

0x91d9,	// (0x00027e0a) list_single_cale_preview_pane_ParamLimits

0x91d9,	// (0x00027e0a) list_single_cale_preview_pane

0x91f1,	// (0x00027e22) list_single_cale_preview_pane_g1

0x91f9,	// (0x00027e2a) list_single_cale_preview_pane_t1_ParamLimits

0x91f9,	// (0x00027e2a) list_single_cale_preview_pane_t1

0x920e,	// (0x00027e3f) list_double_cale_preview_pane_g1

0x9216,	// (0x00027e47) list_double_cale_preview_pane_t1_ParamLimits

0x9216,	// (0x00027e47) list_double_cale_preview_pane_t1

0x922b,	// (0x00027e5c) list_double_cale_preview_pane_t2_ParamLimits

0x922b,	// (0x00027e5c) list_double_cale_preview_pane_t2

0x0001,

0xfe17,	// (0x0002ea48) list_double_cale_preview_pane_t_ParamLimits

0xfe17,	// (0x0002ea48) list_double_cale_preview_pane_t

0x9e15,	// (0x00028a46) main_ezdial_pane

0xa890,	// (0x000294c1) main_sp_fs_email_pane_ParamLimits

0x8825,	// (0x00027456) cmail_ddmenu_btn01_pane_ParamLimits

0x8825,	// (0x00027456) cmail_ddmenu_btn01_pane

0x8842,	// (0x00027473) cmail_ddmenu_btn02_pane_ParamLimits

0x8842,	// (0x00027473) cmail_ddmenu_btn02_pane

0x8860,	// (0x00027491) cmail_ddmenu_btn03_pane_ParamLimits

0x8860,	// (0x00027491) cmail_ddmenu_btn03_pane

0x8890,	// (0x000274c1) main_sp_fs_ctrlbar_pane_ParamLimits

0x88a6,	// (0x000274d7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ec9,	// (0x00027afa) list_cmail_body_pane_ParamLimits

0xe640,	// (0x0002d271) bg_button_pane_cp12

0xe655,	// (0x0002d286) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe655,	// (0x0002d286) list_single_cmail_header_detail_pane_g3

0xe69e,	// (0x0002d2cf) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe69e,	// (0x0002d2cf) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9a,	// (0x0002e9cb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9a,	// (0x0002e9cb) list_single_cmail_header_detail_pane_t

0xe7ab,	// (0x0002d3dc) phacti_term_pane_t2_ParamLimits

0xe7ab,	// (0x0002d3dc) phacti_term_pane_t2

0x0001,

0xfda4,	// (0x0002e9d5) phacti_term_pane_t_ParamLimits

0xfda4,	// (0x0002e9d5) phacti_term_pane_t

0xea5b,	// (0x0002d68c) aid_size_list_single_double

0x9243,	// (0x00027e74) popup_ezdial_listscroll_window

0x9265,	// (0x00027e96) popup_number_entry_window_cp01

0xa72f,	// (0x00029360) bg_popup_call_pane_cp09

0xea67,	// (0x0002d698) ezdial_list_pane

0xea6f,	// (0x0002d6a0) scroll_pane_cp23

0xc81a,	// (0x0002b44b) bg_button_pane_cp028_ParamLimits

0xc81a,	// (0x0002b44b) bg_button_pane_cp028

0x9273,	// (0x00027ea4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9273,	// (0x00027ea4) cmail_ddmenu_btn01_pane_g1

0x9285,	// (0x00027eb6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9285,	// (0x00027eb6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe1c,	// (0x0002ea4d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe1c,	// (0x0002ea4d) cmail_ddmenu_btn01_pane_g

0xea77,	// (0x0002d6a8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea77,	// (0x0002d6a8) cmail_ddmenu_btn01_pane_t1

0xc603,	// (0x0002b234) bg_button_pane_cp029_ParamLimits

0xc603,	// (0x0002b234) bg_button_pane_cp029

0x9285,	// (0x00027eb6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9285,	// (0x00027eb6) cmail_ddmenu_btn02_pane_g1

0x929d,	// (0x00027ece) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x929d,	// (0x00027ece) cmail_ddmenu_btn02_pane_t1

0xd3b8,	// (0x0002bfe9) bg_button_pane_cp031_ParamLimits

0xd3b8,	// (0x0002bfe9) bg_button_pane_cp031

0x9285,	// (0x00027eb6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9285,	// (0x00027eb6) cmail_ddmenu_btn03_pane_g1

0x929d,	// (0x00027ece) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x929d,	// (0x00027ece) cmail_ddmenu_btn03_pane_t1

0x695b,	// (0x0002558c) cell_dialer2_keypad_pane_t1_ParamLimits

0x6975,	// (0x000255a6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6975,	// (0x000255a6) cell_dialer2_keypad_pane_t1_copy1

0x7f90,	// (0x00026bc1) ncimui_group_button_pane

0xa890,	// (0x000294c1) main_sp_fs_calendar_pane_ParamLimits

0x8ee3,	// (0x00027b14) list_single_cmail_header_caption_pane_ParamLimits

0xe7f6,	// (0x0002d427) aid_recal_txt_sm_pane

0x9e15,	// (0x00028a46) mian_recal_day_pane

0xe838,	// (0x0002d469) popup_sp_fs_cale_preview_window_ParamLimits

0xea8c,	// (0x0002d6bd) list_recal_day_pane

0xeacf,	// (0x0002d700) list_single_recal_day_pane_ParamLimits

0xeacf,	// (0x0002d700) list_single_recal_day_pane

0xeae1,	// (0x0002d712) list_single_recal_day_pane_g1_ParamLimits

0xeae1,	// (0x0002d712) list_single_recal_day_pane_g1

0xeaed,	// (0x0002d71e) list_single_recal_day_pane_g2_ParamLimits

0xeaed,	// (0x0002d71e) list_single_recal_day_pane_g2

0xeaf9,	// (0x0002d72a) list_single_recal_day_pane_g3_ParamLimits

0xeaf9,	// (0x0002d72a) list_single_recal_day_pane_g3

0x92c1,	// (0x00027ef2) list_single_recal_day_pane_g4_ParamLimits

0x92c1,	// (0x00027ef2) list_single_recal_day_pane_g4

0xeb05,	// (0x0002d736) list_single_recal_day_pane_g5_ParamLimits

0xeb05,	// (0x0002d736) list_single_recal_day_pane_g5

0xeb11,	// (0x0002d742) list_single_recal_day_pane_g6_ParamLimits

0xeb11,	// (0x0002d742) list_single_recal_day_pane_g6

0x0004,

0xfe2b,	// (0x0002ea5c) list_single_recal_day_pane_g_ParamLimits

0xfe2b,	// (0x0002ea5c) list_single_recal_day_pane_g

0xeb25,	// (0x0002d756) list_single_recal_day_pane_t1

0xeb37,	// (0x0002d768) list_single_recal_day_pane_t2

0x0001,

0xfe36,	// (0x0002ea67) list_single_recal_day_pane_t

0x92d9,	// (0x00027f0a) ncimui_query_button_pane_ParamLimits

0x92d9,	// (0x00027f0a) ncimui_query_button_pane

0x92e9,	// (0x00027f1a) ncimui_query_button_pane_t1_ParamLimits

0x92e9,	// (0x00027f1a) ncimui_query_button_pane_t1

0xeb49,	// (0x0002d77a) ncimui_query_button_pane_t2_ParamLimits

0xeb49,	// (0x0002d77a) ncimui_query_button_pane_t2

0x0001,

0xfe3b,	// (0x0002ea6c) ncimui_query_button_pane_t_ParamLimits

0xfe3b,	// (0x0002ea6c) ncimui_query_button_pane_t

0x92fc,	// (0x00027f2d) query_button_pane_ParamLimits

0x92fc,	// (0x00027f2d) query_button_pane

0x9e15,	// (0x00028a46) bg_button_pane_cp0028

0xeb5c,	// (0x0002d78d) query_button_pane_t1

0x126c,	// (0x0001fe9d) main_tport_pane_ParamLimits

0x8dc6,	// (0x000279f7) bg_popup_window_pane_cp01_ParamLimits

0x8dc6,	// (0x000279f7) bg_popup_window_pane_cp01

0x8dd4,	// (0x00027a05) heading_pane_cp08_ParamLimits

0x8dd4,	// (0x00027a05) heading_pane_cp08

0x8de2,	// (0x00027a13) heading_pane_cp07_ParamLimits

0x8de2,	// (0x00027a13) heading_pane_cp07

0x8e52,	// (0x00027a83) cell_tport_appsw_pane_g2

0x0002,

0xfd87,	// (0x0002e9b8) cell_tport_appsw_pane_g

0xb305,	// (0x00029f36) input_candi_list_open_g1

0xab7b,	// (0x000297ac) list_cale_time_pane_g6_ParamLimits

0xab7b,	// (0x000297ac) list_cale_time_pane_g6

0x5acb,	// (0x000246fc) aid_size_touch_calib_1_ParamLimits

0x5acb,	// (0x000246fc) aid_size_touch_calib_1

0x5ad7,	// (0x00024708) aid_size_touch_calib_2_ParamLimits

0x5ad7,	// (0x00024708) aid_size_touch_calib_2

0x5ae5,	// (0x00024716) aid_size_touch_calib_3_ParamLimits

0x5ae5,	// (0x00024716) aid_size_touch_calib_3

0x5af5,	// (0x00024726) aid_size_touch_calib_4_ParamLimits

0x5af5,	// (0x00024726) aid_size_touch_calib_4

0x5b03,	// (0x00024734) main_touch_calib_button_group_pane_ParamLimits

0x5b03,	// (0x00024734) main_touch_calib_button_group_pane

0x5b11,	// (0x00024742) main_touch_calib_pane_g1_ParamLimits

0x5b1d,	// (0x0002474e) main_touch_calib_pane_g2_ParamLimits

0x5b29,	// (0x0002475a) main_touch_calib_pane_g3_ParamLimits

0x5b35,	// (0x00024766) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0002e37e) main_touch_calib_pane_g_ParamLimits

0x5b41,	// (0x00024772) main_touch_calib_pane_t1_ParamLimits

0x5b58,	// (0x00024789) main_touch_calib_pane_t2_ParamLimits

0x5b71,	// (0x000247a2) main_touch_calib_pane_t3_ParamLimits

0x5b87,	// (0x000247b8) main_touch_calib_pane_t4_ParamLimits

0x5b9d,	// (0x000247ce) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0002e387) main_touch_calib_pane_t_ParamLimits

0xcd6e,	// (0x0002b99f) list_single_fp_cale_pane_g3_ParamLimits

0xcd6e,	// (0x0002b99f) list_single_fp_cale_pane_g3

0x1250,	// (0x0001fe81) bg_button_pane_cp012_ParamLimits

0x1250,	// (0x0001fe81) bg_vkb2_func_pane_cp03_ParamLimits

0x22f4,	// (0x00020f25) cell_vitu2_function_top_pane_g1_ParamLimits

0x1250,	// (0x0001fe81) bg_vkb2_func_pane_cp04_ParamLimits

0x7f16,	// (0x00026b47) main_ncimui_button_group_pane_ParamLimits

0x7f16,	// (0x00026b47) main_ncimui_button_group_pane

0x7f7e,	// (0x00026baf) main_ncimui_pane_t3_ParamLimits

0x7f7e,	// (0x00026baf) main_ncimui_pane_t3

0xe759,	// (0x0002d38a) phacti_button_group_pane

0xea5b,	// (0x0002d68c) aid_size_list_single_double_ParamLimits

0x9243,	// (0x00027e74) popup_ezdial_listscroll_window_ParamLimits

0x9265,	// (0x00027e96) popup_number_entry_window_cp01_ParamLimits

0x9309,	// (0x00027f3a) phacti_button_pane_ParamLimits

0x9309,	// (0x00027f3a) phacti_button_pane

0x9e15,	// (0x00028a46) bg_button_pane_cp14

0xeb6a,	// (0x0002d79b) phacti_button_pane_t1

0x931a,	// (0x00027f4b) main_touch_calib_button_pane_ParamLimits

0x931a,	// (0x00027f4b) main_touch_calib_button_pane

0xa587,	// (0x000291b8) bg_button_pane_cp18_ParamLimits

0xa587,	// (0x000291b8) bg_button_pane_cp18

0xeb78,	// (0x0002d7a9) main_touch_calib_button_pane_t1_ParamLimits

0xeb78,	// (0x0002d7a9) main_touch_calib_button_pane_t1

0xeb8e,	// (0x0002d7bf) main_touch_calib_button_pane_t2_ParamLimits

0xeb8e,	// (0x0002d7bf) main_touch_calib_button_pane_t2

0x0001,

0xfe40,	// (0x0002ea71) main_touch_calib_button_pane_t_ParamLimits

0xfe40,	// (0x0002ea71) main_touch_calib_button_pane_t

0x9e15,	// (0x00028a46) cell_ncimui_button_pane

0x9e15,	// (0x00028a46) bg_button_pane_cp032

0xebac,	// (0x0002d7dd) cell_ncimui_button_pane_t1

0x1b14,	// (0x00020745) image3_infobar_pane_ParamLimits

0x1b14,	// (0x00020745) image3_infobar_pane

0x834f,	// (0x00026f80) fs_bigclock_status_pane_ParamLimits

0x834f,	// (0x00026f80) fs_bigclock_status_pane

0x835c,	// (0x00026f8d) main_fs_bigclock_clock_pane_ParamLimits

0x835c,	// (0x00026f8d) main_fs_bigclock_clock_pane

0x8378,	// (0x00026fa9) main_fs_bigclock_indi_pane_ParamLimits

0x8378,	// (0x00026fa9) main_fs_bigclock_indi_pane

0x83a6,	// (0x00026fd7) main_fs_bigclock_swipe_pane_ParamLimits

0x83a6,	// (0x00026fd7) main_fs_bigclock_swipe_pane

0x9e15,	// (0x00028a46) main_fs_clock_dumped_data

0x83e0,	// (0x00027011) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x83e0,	// (0x00027011) list_single_fs_bigclock_indicator_pane_g1

0x83ff,	// (0x00027030) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x83ff,	// (0x00027030) list_single_fs_bigclock_indicator_pane_g2

0x8419,	// (0x0002704a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8419,	// (0x0002704a) list_single_fs_bigclock_indicator_pane_g3

0x8435,	// (0x00027066) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8435,	// (0x00027066) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0002e89e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0002e89e) list_single_fs_bigclock_indicator_pane_g

0x8464,	// (0x00027095) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8464,	// (0x00027095) list_single_fs_bigclock_indicator_pane_t1

0x848c,	// (0x000270bd) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x848c,	// (0x000270bd) list_single_fs_bigclock_indicator_pane_t2

0x84b4,	// (0x000270e5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x84b4,	// (0x000270e5) list_single_fs_bigclock_indicator_pane_t3

0x84dc,	// (0x0002710d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x84dc,	// (0x0002710d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0002e8a9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0002e8a9) list_single_fs_bigclock_indicator_pane_t

0xebba,	// (0x0002d7eb) image3_infobar_fav_pane_ParamLimits

0xebba,	// (0x0002d7eb) image3_infobar_fav_pane

0xebca,	// (0x0002d7fb) image3_infobar_loc_pane_ParamLimits

0xebca,	// (0x0002d7fb) image3_infobar_loc_pane

0xebe0,	// (0x0002d811) image3_infobar_time_pane_ParamLimits

0xebe0,	// (0x0002d811) image3_infobar_time_pane

0xca3b,	// (0x0002b66c) image3_infobar_time_pane_g1

0xebf0,	// (0x0002d821) image3_infobar_time_pane_t1

0xca3b,	// (0x0002b66c) image3_infobar_loc_pane_g1

0xebfe,	// (0x0002d82f) image3_infobar_loc_pane_g2

0x0001,

0xfe45,	// (0x0002ea76) image3_infobar_loc_pane_g

0xec06,	// (0x0002d837) image3_infobar_loc_pane_t1

0xca3b,	// (0x0002b66c) image3_infobar_fav_pane_g1

0xec14,	// (0x0002d845) image3_infobar_fav_pane_g2

0x0001,

0xfe4a,	// (0x0002ea7b) image3_infobar_fav_pane_g

0xec1c,	// (0x0002d84d) fs_bigclock_status_battery_pane

0xec25,	// (0x0002d856) fs_bigclock_status_signal_pane

0xec2e,	// (0x0002d85f) fs_bigclock_status_title_pane

0xec37,	// (0x0002d868) fs_bigclock_status_signal_pane_g1

0xec40,	// (0x0002d871) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe4f,	// (0x0002ea80) fs_bigclock_status_signal_pane_g

0xec48,	// (0x0002d879) fs_bigclock_status_battery_pane_g1

0xec51,	// (0x0002d882) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe54,	// (0x0002ea85) fs_bigclock_status_battery_pane_g

0xec59,	// (0x0002d88a) fs_bigclock_status_title_pane_t1

0x932a,	// (0x00027f5b) main_fs_bigclock_clock_pane_g1

0x932a,	// (0x00027f5b) main_fs_bigclock_clock_pane_g2

0x9339,	// (0x00027f6a) main_fs_bigclock_clock_pane_g3

0x9339,	// (0x00027f6a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe59,	// (0x0002ea8a) main_fs_bigclock_clock_pane_g

0x9349,	// (0x00027f7a) main_fs_bigclock_clock_pane_t1

0x935e,	// (0x00027f8f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe62,	// (0x0002ea93) main_fs_bigclock_clock_pane_t

0xec67,	// (0x0002d898) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec67,	// (0x0002d898) list_single_fs_bigclock_indicator_pane

0xec78,	// (0x0002d8a9) list_single_fs_bigclock_pane_ParamLimits

0xec78,	// (0x0002d8a9) list_single_fs_bigclock_pane

0xec9e,	// (0x0002d8cf) main_fs_bigclock_indicator_pane_t1

0xecad,	// (0x0002d8de) list_single_fs_bigclock_pane_g1

0xecb5,	// (0x0002d8e6) list_single_fs_bigclock_pane_t1

0xca3b,	// (0x0002b66c) main_fs_bigclock_swipe_pane_g1

0xecf8,	// (0x0002d929) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe73,	// (0x0002eaa4) main_fs_bigclock_swipe_pane_g

0xed00,	// (0x0002d931) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed00,	// (0x0002d931) main_fs_bigclock_swipe_pane_t1

0x4540,	// (0x00023171) call_type_pane_ParamLimits

0x9e15,	// (0x00028a46) main_btmg_pane

0xe935,	// (0x0002d566) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe935,	// (0x0002d566) list_single_cale_mrui_row_pane_g2

0x0002,

0xfde6,	// (0x0002ea17) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde6,	// (0x0002ea17) list_single_cale_mrui_row_pane_g

0xeab5,	// (0x0002d6e6) list_recal_vselct_arw_lo_pane

0xeabd,	// (0x0002d6ee) list_recal_vselct_arw_up_pane

0xeac5,	// (0x0002d6f6) list_recal_vselct_pane

0x93b5,	// (0x00027fe6) btmg_button_pane

0x93c1,	// (0x00027ff2) main_btmg_pane_g1

0x9e15,	// (0x00028a46) bg_button_pane_cp044

0xed1d,	// (0x0002d94e) btmg_button_pane_t1

0xc5ef,	// (0x0002b220) aid_listscroll_gen

0xa890,	// (0x000294c1) main_cntbar_detail_pane

0xe5f0,	// (0x0002d221) list_cmail_folder_pane

0xd7a6,	// (0x0002c3d7) sp_fs_scroll_pane_cp03_ParamLimits

0xed2b,	// (0x0002d95c) list_single_fs_dyc_pane_cp01_ParamLimits

0xed2b,	// (0x0002d95c) list_single_fs_dyc_pane_cp01

0xed48,	// (0x0002d979) aid_size_cmail_indent

0xed51,	// (0x0002d982) list_single_dyc_row_pane_cp01

0x93e9,	// (0x0002801a) cntbar_detail_list_pane_ParamLimits

0x93e9,	// (0x0002801a) cntbar_detail_list_pane

0x9429,	// (0x0002805a) main_cntbar_detail_cont_pane_ParamLimits

0x9429,	// (0x0002805a) main_cntbar_detail_cont_pane

0x4463,	// (0x00023094) scroll_pane_cp032_ParamLimits

0x4463,	// (0x00023094) scroll_pane_cp032

0x9435,	// (0x00028066) cntbar_detail_list_event_pane_ParamLimits

0x9435,	// (0x00028066) cntbar_detail_list_event_pane

0x93f7,	// (0x00028028) cntbar_detail_list_shct_pane

0xaa06,	// (0x00029637) aid_list_gen

0xed5a,	// (0x0002d98b) aid_scroll

0xed63,	// (0x0002d994) aid_size_touch_scroll_bar

0x7722,	// (0x00026353) aid_list_double

0x9445,	// (0x00028076) aid_list_single

0x7722,	// (0x00026353) aid_list_single_lg

0x944e,	// (0x0002807f) aid_list_z_g_a_sm

0x9456,	// (0x00028087) aid_list_z_g_d

0x945e,	// (0x0002808f) aid_txt_z_prm

0x946c,	// (0x0002809d) aid_txt_z_prm_cp01

0x947a,	// (0x000280ab) aid_txt_z_sec

0x9488,	// (0x000280b9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9488,	// (0x000280b9) main_cntbar_detail_cont_pane_g1

0x9495,	// (0x000280c6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9495,	// (0x000280c6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe78,	// (0x0002eaa9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe78,	// (0x0002eaa9) main_cntbar_detail_cont_pane_g

0xed6c,	// (0x0002d99d) main_cntbar_detail_cont_pane_t1

0xed7a,	// (0x0002d9ab) main_cntbar_detail_cont_pane_t2

0xed88,	// (0x0002d9b9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe7d,	// (0x0002eaae) main_cntbar_detail_cont_pane_t

0x94a1,	// (0x000280d2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x94a1,	// (0x000280d2) cell_cntbar_detail_list_shct_pane

0xed96,	// (0x0002d9c7) cntbar_detail_list_shct_pane_g1

0xed9f,	// (0x0002d9d0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe84,	// (0x0002eab5) cntbar_detail_list_shct_pane_g

0x94b5,	// (0x000280e6) cntbar_detail_list_event_pane_g1_ParamLimits

0x94b5,	// (0x000280e6) cntbar_detail_list_event_pane_g1

0x94c1,	// (0x000280f2) cntbar_detail_list_event_pane_g2_ParamLimits

0x94c1,	// (0x000280f2) cntbar_detail_list_event_pane_g2

0x0005,

0xfe89,	// (0x0002eaba) cntbar_detail_list_event_pane_g_ParamLimits

0xfe89,	// (0x0002eaba) cntbar_detail_list_event_pane_g

0x952f,	// (0x00028160) cntbar_detail_list_event_pane_t1_ParamLimits

0x952f,	// (0x00028160) cntbar_detail_list_event_pane_t1

0x9544,	// (0x00028175) cntbar_detail_list_event_pane_t2_ParamLimits

0x9544,	// (0x00028175) cntbar_detail_list_event_pane_t2

0x0002,

0xfe96,	// (0x0002eac7) cntbar_detail_list_event_pane_t_ParamLimits

0xfe96,	// (0x0002eac7) cntbar_detail_list_event_pane_t

0xca3b,	// (0x0002b66c) cell_cntbar_detail_list_shct_pane_g1

0xb156,	// (0x00029d87) navi_pane_mv_g3

0xa890,	// (0x000294c1) main_cntbar_detail_pane_ParamLimits

0x9e15,	// (0x00028a46) main_notif_wgt_pane

0x1823,	// (0x00020454) aid_tch_main_mp4_pane_g4

0x1a8c,	// (0x000206bd) popup_slider_window_cp02

0xeaab,	// (0x0002d6dc) list_recal_day_event_pane

0x93c9,	// (0x00027ffa) cntbar_detail_btn_pane_ParamLimits

0x93c9,	// (0x00027ffa) cntbar_detail_btn_pane

0x93d9,	// (0x0002800a) cntbar_detail_btn_pane_cp01_ParamLimits

0x93d9,	// (0x0002800a) cntbar_detail_btn_pane_cp01

0x93f7,	// (0x00028028) cntbar_detail_list_shct_pane_ParamLimits

0x9403,	// (0x00028034) cntbar_detail_pane_g1_ParamLimits

0x9403,	// (0x00028034) cntbar_detail_pane_g1

0x9413,	// (0x00028044) cntbar_detail_pane_t1_ParamLimits

0x9413,	// (0x00028044) cntbar_detail_pane_t1

0x94cd,	// (0x000280fe) cntbar_detail_list_event_pane_g3_ParamLimits

0x94cd,	// (0x000280fe) cntbar_detail_list_event_pane_g3

0x94e5,	// (0x00028116) cntbar_detail_list_event_pane_g4_ParamLimits

0x94e5,	// (0x00028116) cntbar_detail_list_event_pane_g4

0x94fd,	// (0x0002812e) cntbar_detail_list_event_pane_g5_ParamLimits

0x94fd,	// (0x0002812e) cntbar_detail_list_event_pane_g5

0x9515,	// (0x00028146) cntbar_detail_list_event_pane_g6_ParamLimits

0x9515,	// (0x00028146) cntbar_detail_list_event_pane_g6

0x9559,	// (0x0002818a) cntbar_detail_list_event_pane_t3_ParamLimits

0x9559,	// (0x0002818a) cntbar_detail_list_event_pane_t3

0x956b,	// (0x0002819c) popup_notif_wgt_window_ParamLimits

0x956b,	// (0x0002819c) popup_notif_wgt_window

0x957b,	// (0x000281ac) popup_submenu_window_cp01_ParamLimits

0x957b,	// (0x000281ac) popup_submenu_window_cp01

0xa72f,	// (0x00029360) bg_popup_window_pane_cp10

0xeda8,	// (0x0002d9d9) listscroll_notif_wgt_pane

0xedba,	// (0x0002d9eb) list_notif_wgt_window

0xedc3,	// (0x0002d9f4) scroll_pane_cp033

0x958b,	// (0x000281bc) list_notif_wgt_row_pane_ParamLimits

0x958b,	// (0x000281bc) list_notif_wgt_row_pane

0xedcc,	// (0x0002d9fd) aid_size_list_notif_wgt_del

0xedd9,	// (0x0002da0a) list_notif_wgt_row_pane_g1

0xede5,	// (0x0002da16) list_notif_wgt_row_pane_g2

0xedf4,	// (0x0002da25) list_notif_wgt_row_pane_g3

0x0002,

0xfe9d,	// (0x0002eace) list_notif_wgt_row_pane_g

0xee01,	// (0x0002da32) list_notif_wgt_row_pane_t1

0xee17,	// (0x0002da48) list_notif_wgt_row_pane_t2

0xee29,	// (0x0002da5a) list_notif_wgt_row_pane_t3

0x0002,

0xfea4,	// (0x0002ead5) list_notif_wgt_row_pane_t

0xd684,	// (0x0002c2b5) list_recal_day_event_pane_g1

0xee3b,	// (0x0002da6c) list_recal_day_event_pane_t1

0x9e15,	// (0x00028a46) bg_button_pane_cp045

0x959f,	// (0x000281d0) cntbar_detail_btn_pane_t1

0xc603,	// (0x0002b234) main_callh_pane_ParamLimits

0xc603,	// (0x0002b234) main_callh_pane

0x9e15,	// (0x00028a46) main_coverflow0_pane

0x9e15,	// (0x00028a46) main_wgtman_pane

0x83be,	// (0x00026fef) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83be,	// (0x00026fef) main_fs_bigclock_unlock_btn_pane

0x8e4a,	// (0x00027a7b) bg_button_pane_cp16

0x8e5a,	// (0x00027a8b) cell_tport_appsw_pane_g3

0x95ad,	// (0x000281de) cf0_flow_pane_ParamLimits

0x95ad,	// (0x000281de) cf0_flow_pane

0xee4a,	// (0x0002da7b) listscroll_cf0_pane

0xee6c,	// (0x0002da9d) main_cf0_pane_g1

0x95bc,	// (0x000281ed) main_cf0_pane_t1_ParamLimits

0x95bc,	// (0x000281ed) main_cf0_pane_t1

0x95d0,	// (0x00028201) main_cf0_pane_t2_ParamLimits

0x95d0,	// (0x00028201) main_cf0_pane_t2

0x0001,

0xfeb0,	// (0x0002eae1) main_cf0_pane_t_ParamLimits

0xfeb0,	// (0x0002eae1) main_cf0_pane_t

0xee7e,	// (0x0002daaf) scroll_pane_cp11

0x95e4,	// (0x00028215) cf0_flow_pane_g1

0x95ec,	// (0x0002821d) cf0_flow_pane_g2

0x0001,

0xfeb5,	// (0x0002eae6) cf0_flow_pane_g

0x95f4,	// (0x00028225) cf0_flow_pane_t1

0x9e15,	// (0x00028a46) main_call6_pane

0x9e15,	// (0x00028a46) main_calllock_pane

0x2510,	// (0x00021141) call6_btn_grp_pane_ParamLimits

0x2510,	// (0x00021141) call6_btn_grp_pane

0x251d,	// (0x0002114e) call6_pane_g1_ParamLimits

0x251d,	// (0x0002114e) call6_pane_g1

0x252d,	// (0x0002115e) popup_call6_1st_window_ParamLimits

0x252d,	// (0x0002115e) popup_call6_1st_window

0x253d,	// (0x0002116e) popup_call6_2nd_window_ParamLimits

0x253d,	// (0x0002116e) popup_call6_2nd_window

0x254d,	// (0x0002117e) cell_call6_btn_pane_ParamLimits

0x254d,	// (0x0002117e) cell_call6_btn_pane

0xa72f,	// (0x00029360) bg_popup_call2_in_pane_cp03

0xee89,	// (0x0002daba) popup_call6_1st_window_g1

0xee91,	// (0x0002dac2) popup_call6_1st_window_g2

0xee99,	// (0x0002daca) popup_call6_1st_window_g3

0x0002,

0xfeba,	// (0x0002eaeb) popup_call6_1st_window_g

0xeea1,	// (0x0002dad2) popup_call6_1st_window_t1

0xeeb0,	// (0x0002dae1) popup_call6_1st_window_t2

0xeec0,	// (0x0002daf1) popup_call6_1st_window_t3

0x0002,

0xfec1,	// (0x0002eaf2) popup_call6_1st_window_t

0xa72f,	// (0x00029360) bg_popup_call2_in_pane_cp04

0xee89,	// (0x0002daba) popup_call6_2nd_window_g1

0xee91,	// (0x0002dac2) popup_call6_2nd_window_g2

0xee99,	// (0x0002daca) popup_call6_2nd_window_g3

0x0002,

0xfeba,	// (0x0002eaeb) popup_call6_2nd_window_g

0xeea1,	// (0x0002dad2) popup_call6_2nd_window_t1

0x0d86,	// (0x0001f9b7) bg_button_pane_cp15

0x255e,	// (0x0002118f) cell_call6_btn_pane_g1

0x2567,	// (0x00021198) cell_call6_btn_pane_t1

0x9602,	// (0x00028233) listscroll_wgtman_pane_ParamLimits

0x9602,	// (0x00028233) listscroll_wgtman_pane

0x961e,	// (0x0002824f) wgtman_btn_pane_ParamLimits

0x961e,	// (0x0002824f) wgtman_btn_pane

0xaf68,	// (0x00029b99) aid_scroll_copy1

0xeed0,	// (0x0002db01) list_wgtman_pane

0x9653,	// (0x00028284) wgtman_btn_pane_g1_ParamLimits

0x9653,	// (0x00028284) wgtman_btn_pane_g1

0x967b,	// (0x000282ac) wgtman_btn_pane_t1_ParamLimits

0x967b,	// (0x000282ac) wgtman_btn_pane_t1

0xeeda,	// (0x0002db0b) wgtman_btn_pane_t2_ParamLimits

0xeeda,	// (0x0002db0b) wgtman_btn_pane_t2

0x0001,

0xfec8,	// (0x0002eaf9) wgtman_btn_pane_t_ParamLimits

0xfec8,	// (0x0002eaf9) wgtman_btn_pane_t

0x96b2,	// (0x000282e3) listrow_wgtman_pane_ParamLimits

0x96b2,	// (0x000282e3) listrow_wgtman_pane

0x96c7,	// (0x000282f8) listrow_wgtman_pane_g1

0x96d4,	// (0x00028305) listrow_wgtman_pane_g2

0x0001,

0xfecd,	// (0x0002eafe) listrow_wgtman_pane_g

0x96f2,	// (0x00028323) listrow_wgtman_pane_t1

0x970a,	// (0x0002833b) listrow_wgtman_pane_t2

0x0001,

0xfed2,	// (0x0002eb03) listrow_wgtman_pane_t

0x9730,	// (0x00028361) wait_bar_pane_cp09

0xeef1,	// (0x0002db22) main_calllock_btn_pane

0xeefb,	// (0x0002db2c) main_calllock_pane_g1

0x9e15,	// (0x00028a46) bg_button_pane_cp17

0xef07,	// (0x0002db38) main_calllock_btn_pane_g1

0xef10,	// (0x0002db41) main_calllock_btn_pane_t1

0x9e15,	// (0x00028a46) main_dialer3_pane

0x9e15,	// (0x00028a46) main_fmrd2_pane

0xca3b,	// (0x0002b66c) main_fs_bigclock_unlock_btn_pane_g1

0x974a,	// (0x0002837b) main_fs_bigclock_unlock_btn_pane_t1

0x9758,	// (0x00028389) area_fmrd2_info_pane_ParamLimits

0x9758,	// (0x00028389) area_fmrd2_info_pane

0x9764,	// (0x00028395) area_fmrd2_visual_pane_ParamLimits

0x9764,	// (0x00028395) area_fmrd2_visual_pane

0x9772,	// (0x000283a3) fmrd2_indi_pane_ParamLimits

0x9772,	// (0x000283a3) fmrd2_indi_pane

0x977f,	// (0x000283b0) area_fmrd2_visual_pane_g1

0x9787,	// (0x000283b8) area_fmrd2_visual_pane_t1

0x9797,	// (0x000283c8) area_fmrd2_visual_pane_t2

0x97a7,	// (0x000283d8) area_fmrd2_visual_pane_t3

0x0002,

0xfedc,	// (0x0002eb0d) area_fmrd2_visual_pane_t

0x97b7,	// (0x000283e8) area_fmrd2_info_pane_g1

0x97bf,	// (0x000283f0) area_fmrd2_info_pane_t1

0x97cf,	// (0x00028400) area_fmrd2_info_pane_t2

0x97df,	// (0x00028410) area_fmrd2_info_pane_t3

0x97ef,	// (0x00028420) area_fmrd2_info_pane_t4

0x0003,

0xfee3,	// (0x0002eb14) area_fmrd2_info_pane_t

0x97ff,	// (0x00028430) fmrd2_indi_pane_t1

0x980f,	// (0x00028440) fmrd2_indi_pane_t2

0x981f,	// (0x00028450) fmrd2_indi_pane_t3

0x0002,

0xfeec,	// (0x0002eb1d) fmrd2_indi_pane_t

0x8446,	// (0x00027077) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8446,	// (0x00027077) list_single_fs_bigclock_indicator_pane_g5

0x84fb,	// (0x0002712c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x84fb,	// (0x0002712c) list_single_fs_bigclock_indicator_pane_t5

0x8fb5,	// (0x00027be6) aid_cell_bcale_month_pane_ParamLimits

0x8fb5,	// (0x00027be6) aid_cell_bcale_month_pane

0x8fd3,	// (0x00027c04) bcale_month_pane_ParamLimits

0x8fd3,	// (0x00027c04) bcale_month_pane

0x8ff1,	// (0x00027c22) bcale_preview_pane_ParamLimits

0x8ff1,	// (0x00027c22) bcale_preview_pane

0xecb5,	// (0x0002d8e6) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd4,	// (0x0002d905) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd4,	// (0x0002d905) list_single_fs_bigclock_pane_t2

0x0001,

0xfe6e,	// (0x0002ea9f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0002ea9f) list_single_fs_bigclock_pane_t

0x9742,	// (0x00028373) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed7,	// (0x0002eb08) main_fs_bigclock_unlock_btn_pane_g

0x982f,	// (0x00028460) aid_dia3_key_size_ParamLimits

0x982f,	// (0x00028460) aid_dia3_key_size

0x983b,	// (0x0002846c) aid_dia3_listrow_size_ParamLimits

0x983b,	// (0x0002846c) aid_dia3_listrow_size

0x984b,	// (0x0002847c) dia3_keypad_fun_pane_ParamLimits

0x984b,	// (0x0002847c) dia3_keypad_fun_pane

0x985b,	// (0x0002848c) dia3_keypad_num_pane_ParamLimits

0x985b,	// (0x0002848c) dia3_keypad_num_pane

0x986b,	// (0x0002849c) dia3_listscroll_pane_ParamLimits

0x986b,	// (0x0002849c) dia3_listscroll_pane

0x9879,	// (0x000284aa) dia3_numentry_pane_ParamLimits

0x9879,	// (0x000284aa) dia3_numentry_pane

0xef1f,	// (0x0002db50) dia3_list_pane

0x9887,	// (0x000284b8) scroll_pane_cp12

0x9e15,	// (0x00028a46) bg_dia3_numentry_pane

0x9892,	// (0x000284c3) dia3_numentry_pane_t1

0x98a1,	// (0x000284d2) cell_dia3_key_num_pane

0x98a9,	// (0x000284da) cell_dia3_key0_fun_pane_ParamLimits

0x98a9,	// (0x000284da) cell_dia3_key0_fun_pane

0x98b6,	// (0x000284e7) cell_dia3_key1_fun_pane_ParamLimits

0x98b6,	// (0x000284e7) cell_dia3_key1_fun_pane

0x98c3,	// (0x000284f4) dia3_listrow_pane

0xdfc4,	// (0x0002cbf5) bg_dia3_numentry_pane_g1

0x9e15,	// (0x00028a46) bg_button_pane_cp21

0x98d0,	// (0x00028501) cell_dia3_key_num_pane_t1

0x98de,	// (0x0002850f) cell_dia3_key_num_pane_t2

0x98ed,	// (0x0002851e) cell_dia3_key_num_pane_t3

0x98fc,	// (0x0002852d) cell_dia3_key_num_pane_t4

0x0003,

0xfef3,	// (0x0002eb24) cell_dia3_key_num_pane_t

0x9e15,	// (0x00028a46) bg_button_pane_cp19

0x990b,	// (0x0002853c) cell_dia3_key0_fun_pane_g1

0x9e15,	// (0x00028a46) bg_button_pane_cp20

0x9913,	// (0x00028544) cell_dia3_key1_fun_pane_g1

0x991b,	// (0x0002854c) area_left_week_number_pane

0x992e,	// (0x0002855f) area_top_day_name_pane

0x993c,	// (0x0002856d) frame_month_view_pane

0xef2a,	// (0x0002db5b) grid_month_view_pane

0x9951,	// (0x00028582) cell_top_day_name_pane_ParamLimits

0x9951,	// (0x00028582) cell_top_day_name_pane

0x996d,	// (0x0002859e) cell_area_left_week_number_pane_ParamLimits

0x996d,	// (0x0002859e) cell_area_left_week_number_pane

0x998e,	// (0x000285bf) cell_month_view_pane_ParamLimits

0x998e,	// (0x000285bf) cell_month_view_pane

0xef38,	// (0x0002db69) frm_month_g1

0x99ba,	// (0x000285eb) frm_month_g2

0x99cb,	// (0x000285fc) frm_month_g3

0x99dc,	// (0x0002860d) frm_month_g4

0x99ed,	// (0x0002861e) frm_month_g5

0x99fe,	// (0x0002862f) frm_month_g6

0x9a11,	// (0x00028642) frm_month_g7

0xef45,	// (0x0002db76) frm_month_g8

0x9a24,	// (0x00028655) frm_month_g9

0x9a31,	// (0x00028662) frm_month_g10

0x9a3e,	// (0x0002866f) frm_month_g11

0x9a4b,	// (0x0002867c) frm_month_g12

0x9a58,	// (0x00028689) frm_month_g13

0x9a67,	// (0x00028698) frm_month_g14

0x9a76,	// (0x000286a7) frm_month_g15

0x9a85,	// (0x000286b6) frm_month_g16

0x000f,

0xfefc,	// (0x0002eb2d) frm_month_g

0xef52,	// (0x0002db83) cell_top_day_name_pane_t1

0x9a94,	// (0x000286c5) cell_area_left_week_number_pane_g1

0x9aa3,	// (0x000286d4) cell_area_left_week_number_pane_t1

0xcc62,	// (0x0002b893) cell_month_view_pane_g1

0x9ab9,	// (0x000286ea) cell_month_view_pane_t1

0x9e15,	// (0x00028a46) main_fps_pane

0xe401,	// (0x0002d032) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe401,	// (0x0002d032) cmail_ddmenu_btn02_pane_cp1

0xe41d,	// (0x0002d04e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe41d,	// (0x0002d04e) cmail_ddmenu_btn02_pane_cp2

0x9291,	// (0x00027ec2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9291,	// (0x00027ec2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe21,	// (0x0002ea52) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe21,	// (0x0002ea52) cmail_ddmenu_btn02_pane_g

0x92af,	// (0x00027ee0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x92af,	// (0x00027ee0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe26,	// (0x0002ea57) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe26,	// (0x0002ea57) cmail_ddmenu_btn02_pane_t

0x9acf,	// (0x00028700) fps_text_pane_ParamLimits

0x9acf,	// (0x00028700) fps_text_pane

0x9adc,	// (0x0002870d) main_fps_pane_g1_ParamLimits

0x9adc,	// (0x0002870d) main_fps_pane_g1

0x9ae8,	// (0x00028719) wait_bar_pane_cp010_ParamLimits

0x9ae8,	// (0x00028719) wait_bar_pane_cp010

0x9af4,	// (0x00028725) fps_text_pane_t1_ParamLimits

0x9af4,	// (0x00028725) fps_text_pane_t1

0x6a6e,	// (0x0002569f) cam4_image_uncrop_pane_g1

0x6a77,	// (0x000256a8) cam4_image_uncrop_pane_g2

0x6a80,	// (0x000256b1) cam4_image_uncrop_pane_g3

0x6a89,	// (0x000256ba) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002e51f) cam4_image_uncrop_pane_g

0x98c3,	// (0x000284f4) dia3_listrow_pane_ParamLimits

0x9e15,	// (0x00028a46) main_phob2_pane

0x8e2c,	// (0x00027a5d) cell_tport_appsw_pane_cp02_ParamLimits

0x8e2c,	// (0x00027a5d) cell_tport_appsw_pane_cp02

0x8e3b,	// (0x00027a6c) cell_tport_appsw_pane_cp03_ParamLimits

0x8e3b,	// (0x00027a6c) cell_tport_appsw_pane_cp03

0x9e15,	// (0x00028a46) phob2_contact_card_pane

0x9e15,	// (0x00028a46) phob2_listscroll_pane

0xef65,	// (0x0002db96) phob2_list_pane

0xef6d,	// (0x0002db9e) scroll_pane_cp034

0x9b0d,	// (0x0002873e) phob2_cc_data_pane_ParamLimits

0x9b0d,	// (0x0002873e) phob2_cc_data_pane

0x9b24,	// (0x00028755) phob2_cc_listscroll_pane_ParamLimits

0x9b24,	// (0x00028755) phob2_cc_listscroll_pane

0x9b40,	// (0x00028771) list_double_large_graphic_phob2_pane_ParamLimits

0x9b40,	// (0x00028771) list_double_large_graphic_phob2_pane

0x9b58,	// (0x00028789) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9b58,	// (0x00028789) list_double_large_graphic_phob2_pane_g1

0x9b6e,	// (0x0002879f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9b6e,	// (0x0002879f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1d,	// (0x0002eb4e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1d,	// (0x0002eb4e) list_double_large_graphic_phob2_pane_g

0x9b7a,	// (0x000287ab) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9b7a,	// (0x000287ab) list_double_large_graphic_phob2_pane_t1

0x9b8f,	// (0x000287c0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9b8f,	// (0x000287c0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff22,	// (0x0002eb53) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff22,	// (0x0002eb53) list_double_large_graphic_phob2_pane_t

0x9e15,	// (0x00028a46) list_highlight_pane_cp024

0x9ba1,	// (0x000287d2) phob2_cc_button_pane

0x9ba9,	// (0x000287da) phob2_cc_data_pane_g1_ParamLimits

0x9ba9,	// (0x000287da) phob2_cc_data_pane_g1

0x9bbd,	// (0x000287ee) phob2_cc_data_pane_g2_ParamLimits

0x9bbd,	// (0x000287ee) phob2_cc_data_pane_g2

0x0001,

0xff27,	// (0x0002eb58) phob2_cc_data_pane_g_ParamLimits

0xff27,	// (0x0002eb58) phob2_cc_data_pane_g

0x9bcc,	// (0x000287fd) phob2_cc_data_pane_t1_ParamLimits

0x9bcc,	// (0x000287fd) phob2_cc_data_pane_t1

0x9be5,	// (0x00028816) phob2_cc_data_pane_t2_ParamLimits

0x9be5,	// (0x00028816) phob2_cc_data_pane_t2

0x9bfe,	// (0x0002882f) phob2_cc_data_pane_t3_ParamLimits

0x9bfe,	// (0x0002882f) phob2_cc_data_pane_t3

0x0002,

0xff2c,	// (0x0002eb5d) phob2_cc_data_pane_t_ParamLimits

0xff2c,	// (0x0002eb5d) phob2_cc_data_pane_t

0xef75,	// (0x0002dba6) phob2_cc_list_pane_ParamLimits

0xef75,	// (0x0002dba6) phob2_cc_list_pane

0xd791,	// (0x0002c3c2) scroll_pane_cp035_ParamLimits

0xd791,	// (0x0002c3c2) scroll_pane_cp035

0xa890,	// (0x000294c1) bg_button_pane_cp033

0xef81,	// (0x0002dbb2) phob2_cc_button_pane_g1

0xef8d,	// (0x0002dbbe) phob2_cc_button_pane_t1

0xefa2,	// (0x0002dbd3) phob2_cc_button_pane_t2

0x0001,

0xff33,	// (0x0002eb64) phob2_cc_button_pane_t

0x9c17,	// (0x00028848) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9c17,	// (0x00028848) list_double_large_graphic_phob2_cc_pane

0x9c66,	// (0x00028897) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9c66,	// (0x00028897) list_double_large_graphic_phob2_cc_pane_g1

0x9c77,	// (0x000288a8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9c77,	// (0x000288a8) list_double_large_graphic_phob2_cc_pane_g2

0x9c86,	// (0x000288b7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9c86,	// (0x000288b7) list_double_large_graphic_phob2_cc_pane_g3

0x9c95,	// (0x000288c6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9c95,	// (0x000288c6) list_double_large_graphic_phob2_cc_pane_g4

0x9ca6,	// (0x000288d7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ca6,	// (0x000288d7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff38,	// (0x0002eb69) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff38,	// (0x0002eb69) list_double_large_graphic_phob2_cc_pane_g

0x9cb5,	// (0x000288e6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9cb5,	// (0x000288e6) list_double_large_graphic_phob2_cc_pane_t1

0x9cde,	// (0x0002890f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9cde,	// (0x0002890f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff43,	// (0x0002eb74) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff43,	// (0x0002eb74) list_double_large_graphic_phob2_cc_pane_t

0xefb4,	// (0x0002dbe5) list_highlight_pane_cp025_ParamLimits

0xefb4,	// (0x0002dbe5) list_highlight_pane_cp025

0xa890,	// (0x000294c1) bg_button_pane_cp033_ParamLimits

0xef81,	// (0x0002dbb2) phob2_cc_button_pane_g1_ParamLimits

0xef8d,	// (0x0002dbbe) phob2_cc_button_pane_t1_ParamLimits

0xefa2,	// (0x0002dbd3) phob2_cc_button_pane_t2_ParamLimits

0xff33,	// (0x0002eb64) phob2_cc_button_pane_t_ParamLimits

0x25e9,	// (0x0002121a) popup_wgtman_window

0xd55e,	// (0x0002c18f) scroll_pane_cp038

0x963b,	// (0x0002826c) wgtman_btn_pane_cp_01_ParamLimits

0x963b,	// (0x0002826c) wgtman_btn_pane_cp_01

0xefc2,	// (0x0002dbf3) wgtman_content_pane

0xefcb,	// (0x0002dbfc) wgtman_heading_pane

0x9e15,	// (0x00028a46) bg_heading_pane_cp02

0xefd4,	// (0x0002dc05) wgtman_heading_pane_g1

0xefdc,	// (0x0002dc0d) wgtman_heading_pane_t1

0xefea,	// (0x0002dc1b) scroll_pane_cp036

0xeff2,	// (0x0002dc23) wgtman_list_pane

0xeffa,	// (0x0002dc2b) wgtman_list_pane_t1_ParamLimits

0xeffa,	// (0x0002dc2b) wgtman_list_pane_t1

0x1d41,	// (0x00020972) cam4_grid_pane

0x727d,	// (0x00025eae) bg_button_pane_cp015_ParamLimits

0x728f,	// (0x00025ec0) bg_button_pane_cp016_ParamLimits

0x72a2,	// (0x00025ed3) bg_button_pane_cp017_ParamLimits

0x72f8,	// (0x00025f29) popup_vitu2_query_window_g3_ParamLimits

0x72f8,	// (0x00025f29) popup_vitu2_query_window_g3

0x73b7,	// (0x00025fe8) popup_vitu2_query_window_t6_ParamLimits

0x73b7,	// (0x00025fe8) popup_vitu2_query_window_t6

0x73e2,	// (0x00026013) popup_vitu2_query_window_t7_ParamLimits

0x73e2,	// (0x00026013) popup_vitu2_query_window_t7

0xf014,	// (0x0002dc45) cam4_grid_pane_g1

0xf01d,	// (0x0002dc4e) cam4_grid_pane_g2

0xf028,	// (0x0002dc59) cam4_grid_pane_g3

0xf031,	// (0x0002dc62) cam4_grid_pane_g4

0x0003,

0xff48,	// (0x0002eb79) cam4_grid_pane_g

0x32d8,	// (0x00021f09) aid_placing_vt_slider_lsc_ParamLimits

0x360b,	// (0x0002223c) vidtel_button_pane_ParamLimits

0x360b,	// (0x0002223c) vidtel_button_pane

0x9e15,	// (0x00028a46) bg_button_pane_cp034

0xf03c,	// (0x0002dc6d) vidtel_button_pane_g1

0xf044,	// (0x0002dc75) vidtel_button_pane_t1

0xd662,	// (0x0002c293) aid_size_vtel_slider_touch

0xd791,	// (0x0002c3c2) scroll_pane_cp039

0x80ed,	// (0x00026d1e) ncim_query_button_pane_cp01_ParamLimits

0x810c,	// (0x00026d3d) ncimui_query_pane_g1_ParamLimits

0xa890,	// (0x000294c1) input_focus_pane_cp012_ParamLimits

0xe002,	// (0x0002cc33) ncim_query_entry_pane_t1_ParamLimits

0xd791,	// (0x0002c3c2) scroll_pane_cp039_ParamLimits

0xb03f,	// (0x00029c70) navi_pane_bcale_mc_g1

0xb047,	// (0x00029c78) navi_pane_bcale_mc_t1

0xe468,	// (0x0002d099) main_sp_fs_email_pane_g1

0xe474,	// (0x0002d0a5) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0002e90f) main_sp_fs_email_pane_g

0xe941,	// (0x0002d572) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe941,	// (0x0002d572) list_single_cale_mrui_row_pane_g3

0x92cf,	// (0x00027f00) list_single_recal_day_pane_g5_event_pane

0xeb1d,	// (0x0002d74e) list_single_recal_day_pane_g7

0xf05a,	// (0x0002dc8b) list_recal_day_event_pane_cp01

0xf063,	// (0x0002dc94) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0002dc9c) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0002dca4) list_recal_vselct_pane_cp01

0xd684,	// (0x0002c2b5) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0002dcae) list_recal_day_event_pane_cp01_t1

0xeb25,	// (0x0002d756) list_single_recal_day_pane_t1_ParamLimits

0xeb37,	// (0x0002d768) list_single_recal_day_pane_t2_ParamLimits

0xfe36,	// (0x0002ea67) list_single_recal_day_pane_t_ParamLimits

0xa4c2,	// (0x000290f3) bg_notes_pane_ParamLimits

0xa565,	// (0x00029196) list_notes_pane_ParamLimits

0x282c,	// (0x0002145d) scroll_pane_cp06_ParamLimits

0xa587,	// (0x000291b8) main_notes_pane_ParamLimits

0x9e15,	// (0x00028a46) main_welc_pane

0x9d07,	// (0x00028938) main_welc_body_pane_ParamLimits

0x9d07,	// (0x00028938) main_welc_body_pane

0x9d22,	// (0x00028953) main_welc_opti_pane_ParamLimits

0x9d22,	// (0x00028953) main_welc_opti_pane

0x9d57,	// (0x00028988) main_welc_pane_t1_ParamLimits

0x9d57,	// (0x00028988) main_welc_pane_t1

0x9d75,	// (0x000289a6) main_welc_body_row_pane_ParamLimits

0x9d75,	// (0x000289a6) main_welc_body_row_pane

0xd3b8,	// (0x0002bfe9) main_welc_opti_row_pane_ParamLimits

0xd3b8,	// (0x0002bfe9) main_welc_opti_row_pane

0xf08b,	// (0x0002dcbc) main_welc_opti_row_pane_g1

0x9d8f,	// (0x000289c0) main_welc_opti_row_pane_t1

0xf093,	// (0x0002dcc4) main_welc_body_row_pane_t1

0xedb2,	// (0x0002d9e3) popup_notif_wgt_heading_pane

0xedcc,	// (0x0002d9fd) aid_size_list_notif_wgt_del_ParamLimits

0xedd9,	// (0x0002da0a) list_notif_wgt_row_pane_g1_ParamLimits

0xede5,	// (0x0002da16) list_notif_wgt_row_pane_g2_ParamLimits

0xedf4,	// (0x0002da25) list_notif_wgt_row_pane_g3_ParamLimits

0xfe9d,	// (0x0002eace) list_notif_wgt_row_pane_g_ParamLimits

0xee01,	// (0x0002da32) list_notif_wgt_row_pane_t1_ParamLimits

0xee17,	// (0x0002da48) list_notif_wgt_row_pane_t2_ParamLimits

0xee29,	// (0x0002da5a) list_notif_wgt_row_pane_t3_ParamLimits

0xfea4,	// (0x0002ead5) list_notif_wgt_row_pane_t_ParamLimits

0x96c7,	// (0x000282f8) listrow_wgtman_pane_g1_ParamLimits

0x96d4,	// (0x00028305) listrow_wgtman_pane_g2_ParamLimits

0xfecd,	// (0x0002eafe) listrow_wgtman_pane_g_ParamLimits

0x96f2,	// (0x00028323) listrow_wgtman_pane_t1_ParamLimits

0x970a,	// (0x0002833b) listrow_wgtman_pane_t2_ParamLimits

0xfed2,	// (0x0002eb03) listrow_wgtman_pane_t_ParamLimits

0x9730,	// (0x00028361) wait_bar_pane_cp09_ParamLimits

0x9e15,	// (0x00028a46) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0002dcd3) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0002dcdb) popup_notif_wgt_heading_pane_t1

0x9e15,	// (0x00028a46) main_vids_pane

0x9e15,	// (0x00028a46) vids_listscroll_pane

0x9d9e,	// (0x000289cf) scroll_pane_cp040

0x9e15,	// (0x00028a46) vids_list_pane

0x9da9,	// (0x000289da) vids_list_double_pane_ParamLimits

0x9da9,	// (0x000289da) vids_list_double_pane

0x9dbd,	// (0x000289ee) vids_list_double_pane_g1

0x9dc6,	// (0x000289f7) vids_list_double_pane_t1

0x9dd6,	// (0x00028a07) vids_list_double_pane_t2

0x0001,

0xff56,	// (0x0002eb87) vids_list_double_pane_t

0x1250,	// (0x0001fe81) main_ncimui_pane_ParamLimits

0x7f2e,	// (0x00026b5f) main_ncimui_pane_g1_ParamLimits

0x7f3c,	// (0x00026b6d) main_ncimui_pane_g2_ParamLimits

0x7f3c,	// (0x00026b6d) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0002e814) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0002e814) main_ncimui_pane_g

0x9d3d,	// (0x0002896e) main_welc_pane_g1_ParamLimits

0x9d3d,	// (0x0002896e) main_welc_pane_g1

0x9d49,	// (0x0002897a) main_welc_pane_g2_ParamLimits

0x9d49,	// (0x0002897a) main_welc_pane_g2

0x0001,

0xff51,	// (0x0002eb82) main_welc_pane_g_ParamLimits

0xff51,	// (0x0002eb82) main_welc_pane_g

0xa4c2,	// (0x000290f3) listscroll_mce_pane_ParamLimits

0xb196,	// (0x00029dc7) wait_bar_pane_cp10

0xc5f7,	// (0x0002b228) main_cale_day_pane_ParamLimits

0xc5f7,	// (0x0002b228) main_cale_week_pane_ParamLimits

0xa4c2,	// (0x000290f3) main_messa_pane_ParamLimits

0x6400,	// (0x00025031) main_clock2_btn_pane_ParamLimits

0x6400,	// (0x00025031) main_clock2_btn_pane

0xcdf6,	// (0x0002ba27) main_clock2_btn_pane_cp01_ParamLimits

0xcdf6,	// (0x0002ba27) main_clock2_btn_pane_cp01

0xe8cd,	// (0x0002d4fe) list_cale_mrui_pane_ParamLimits

0xee76,	// (0x0002daa7) main_cf0_pane_g2

0x0001,

0xfeab,	// (0x0002eadc) main_cf0_pane_g

0x991b,	// (0x0002854c) area_left_week_number_pane_ParamLimits

0x992e,	// (0x0002855f) area_top_day_name_pane_ParamLimits

0x993c,	// (0x0002856d) frame_month_view_pane_ParamLimits

0xef2a,	// (0x0002db5b) grid_month_view_pane_ParamLimits

0xef38,	// (0x0002db69) frm_month_g1_ParamLimits

0x99ba,	// (0x000285eb) frm_month_g2_ParamLimits

0x99cb,	// (0x000285fc) frm_month_g3_ParamLimits

0x99dc,	// (0x0002860d) frm_month_g4_ParamLimits

0x99ed,	// (0x0002861e) frm_month_g5_ParamLimits

0x99fe,	// (0x0002862f) frm_month_g6_ParamLimits

0x9a11,	// (0x00028642) frm_month_g7_ParamLimits

0xef45,	// (0x0002db76) frm_month_g8_ParamLimits

0x9a24,	// (0x00028655) frm_month_g9_ParamLimits

0x9a31,	// (0x00028662) frm_month_g10_ParamLimits

0x9a3e,	// (0x0002866f) frm_month_g11_ParamLimits

0x9a4b,	// (0x0002867c) frm_month_g12_ParamLimits

0x9a58,	// (0x00028689) frm_month_g13_ParamLimits

0x9a67,	// (0x00028698) frm_month_g14_ParamLimits

0x9a76,	// (0x000286a7) frm_month_g15_ParamLimits

0x9a85,	// (0x000286b6) frm_month_g16_ParamLimits

0xfefc,	// (0x0002eb2d) frm_month_g_ParamLimits

0xef52,	// (0x0002db83) cell_top_day_name_pane_t1_ParamLimits

0x9a94,	// (0x000286c5) cell_area_left_week_number_pane_g1_ParamLimits

0x9aa3,	// (0x000286d4) cell_area_left_week_number_pane_t1_ParamLimits

0xcc62,	// (0x0002b893) cell_month_view_pane_g1_ParamLimits

0x9ab9,	// (0x000286ea) cell_month_view_pane_t1_ParamLimits

0xa4ba,	// (0x000290eb) main_clock2_btn_pane_g1

0xf0b8,	// (0x0002dce9) main_clock2_btn_pane_t1

0xa890,	// (0x000294c1) listscroll_cmail_pane_ParamLimits

0xe468,	// (0x0002d099) main_sp_fs_email_pane_g1_ParamLimits

0xe474,	// (0x0002d0a5) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0002e90f) main_sp_fs_email_pane_g_ParamLimits

0xea8c,	// (0x0002d6bd) list_recal_day_pane_ParamLimits

0xea9d,	// (0x0002d6ce) mian_recal_day_pane_t1

0x8ae7,	// (0x00027718) list_single_dyc_row_text_pane_t4_ParamLimits

0x8ae7,	// (0x00027718) list_single_dyc_row_text_pane_t4

0x8b26,	// (0x00027757) list_single_dyc_row_text_pane_t5_ParamLimits

0x8b26,	// (0x00027757) list_single_dyc_row_text_pane_t5

0xe51e,	// (0x0002d14f) list_single_dyc_row_text_pane_t6_ParamLimits

0xe51e,	// (0x0002d14f) list_single_dyc_row_text_pane_t6

0x43a0,	// (0x00022fd1) aid_mgn_list_cale_time_pane

0x1250,	// (0x0001fe81) main_gallery2_pane_ParamLimits

0xce0a,	// (0x0002ba3b) main_clock2_pane_cp01_t1

0xce18,	// (0x0002ba49) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0002e3f1) main_clock2_pane_cp01_t

0x2c07,	// (0x00021838) cale_week_scroll_pane_g16_ParamLimits

0x2c07,	// (0x00021838) cale_week_scroll_pane_g16

0xa72f,	// (0x00029360) vorec_slider_pane

0xf044,	// (0x0002dc75) vidtel_button_pane_t1_ParamLimits

0x932a,	// (0x00027f5b) main_fs_bigclock_clock_pane_g1_ParamLimits

0x932a,	// (0x00027f5b) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9339,	// (0x00027f6a) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9339,	// (0x00027f6a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe59,	// (0x0002ea8a) main_fs_bigclock_clock_pane_g_ParamLimits

0x9349,	// (0x00027f7a) main_fs_bigclock_clock_pane_t1_ParamLimits

0x935e,	// (0x00027f8f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe62,	// (0x0002ea93) main_fs_bigclock_clock_pane_t_ParamLimits

0x5c56,	// (0x00024887) main_mup3_lyrics_pane_ParamLimits

0x5c56,	// (0x00024887) main_mup3_lyrics_pane

0x9de6,	// (0x00028a17) main_mup3_lyrics_pane_t1_ParamLimits

0x9de6,	// (0x00028a17) main_mup3_lyrics_pane_t1

0x180d,	// (0x0002043e) aid_main_mp4_pane_t1_area

0x1817,	// (0x00020448) aid_main_mp4_pane_t2_area

0x1924,	// (0x00020555) main_mp4_pane_g7_ParamLimits

0x1924,	// (0x00020555) main_mp4_pane_g7

0x1930,	// (0x00020561) main_mp4_pane_g8_ParamLimits

0x1930,	// (0x00020561) main_mp4_pane_g8

0x69b0,	// (0x000255e1) aid_call6_pane_g1_size

0x9c45,	// (0x00028876) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9c45,	// (0x00028876) list_double_large_graphic_phob2_other_pane

0x9e0d,	// (0x00028a3e) list_double_large_graphic_phob2_other_pane_g1

0x9e15,	// (0x00028a46) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
