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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000f12c };

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
0x00f2,	// (0x0000f21e) Screen

0x00fe,	// (0x0000f22a) application_window

0x013a,	// (0x0000f266) area_bottom_pane_ParamLimits

0x013a,	// (0x0000f266) area_bottom_pane

0x0173,	// (0x0000f29f) area_top_pane_ParamLimits

0x0173,	// (0x0000f29f) area_top_pane

0x941b,	// (0x00018547) call_video_uplink_pane_ParamLimits

0x941b,	// (0x00018547) call_video_uplink_pane

0x0201,	// (0x0000f32d) main_pane_ParamLimits

0x0201,	// (0x0000f32d) main_pane

0xbe3b,	// (0x0001af67) context_pane

0x386c,	// (0x00012998) navi_pane

0x389e,	// (0x000129ca) popup_cale_events_window_ParamLimits

0x389e,	// (0x000129ca) popup_cale_events_window

0xbe4e,	// (0x0001af7a) popup_mup_playback_window

0x38b6,	// (0x000129e2) signal_pane

0x9bbb,	// (0x00018ce7) main_browser_pane

0xa92d,	// (0x00019a59) main_burst_pane

0x35dc,	// (0x00012708) main_calc_pane

0xbdcd,	// (0x0001aef9) main_cale_day_pane

0x0833,	// (0x0000f95f) main_cale_month_pane

0xbdcd,	// (0x0001aef9) main_cale_week_pane

0xa92d,	// (0x00019a59) main_call_pane

0x985a,	// (0x00018986) main_call_poc_pane

0xa92d,	// (0x00019a59) main_camera_pane

0xa92d,	// (0x00019a59) main_chi_dic_pane

0xa6b8,	// (0x000197e4) main_clock_pane

0x985a,	// (0x00018986) main_fmradio_pane

0xa92d,	// (0x00019a59) main_graph_messa_pane

0x985a,	// (0x00018986) main_help_pane

0x9bbb,	// (0x00018ce7) main_im_pane

0x9ab5,	// (0x00018be1) main_image_pane_ParamLimits

0x9ab5,	// (0x00018be1) main_image_pane

0x985a,	// (0x00018986) main_location2_pane

0xa92d,	// (0x00019a59) main_location_pane

0x9ab5,	// (0x00018be1) main_messa_pane

0x985a,	// (0x00018986) main_mp2_pane

0xa92d,	// (0x00019a59) main_mp_pane

0x985a,	// (0x00018986) main_msg_pane

0x985a,	// (0x00018986) main_mup_eq_pane

0x985a,	// (0x00018986) main_mup_pane

0x9bbb,	// (0x00018ce7) main_notes_pane

0x985a,	// (0x00018986) main_pec_pane

0x985a,	// (0x00018986) main_phob_pane

0x985a,	// (0x00018986) main_pinb_pane

0x985a,	// (0x00018986) main_postcard_pane

0x985a,	// (0x00018986) main_qdial_pane

0xa92d,	// (0x00019a59) main_skin_pane

0x985a,	// (0x00018986) main_smil2_pane

0xa92d,	// (0x00019a59) main_smil_pane

0xa92d,	// (0x00019a59) main_video_pane

0xa92d,	// (0x00019a59) main_video_tele_pane

0x9ab5,	// (0x00018be1) main_viewer_pane_ParamLimits

0x9ab5,	// (0x00018be1) main_viewer_pane

0xa92d,	// (0x00019a59) main_vorec_pane

0x3630,	// (0x0001275c) popup_blid_sat_info_window_ParamLimits

0x3630,	// (0x0001275c) popup_blid_sat_info_window

0x3688,	// (0x000127b4) popup_dyc_status_message_window_ParamLimits

0x3688,	// (0x000127b4) popup_dyc_status_message_window

0x36a0,	// (0x000127cc) popup_grid_large_graphic_window_ParamLimits

0x36a0,	// (0x000127cc) popup_grid_large_graphic_window

0x3756,	// (0x00012882) popup_loc_request_window_ParamLimits

0x3756,	// (0x00012882) popup_loc_request_window

0x3844,	// (0x00012970) popup_wml_address_window_ParamLimits

0x3844,	// (0x00012970) popup_wml_address_window

0x3416,	// (0x00012542) call_muted_g1

0x30c9,	// (0x000121f5) popup_call_audio_conf_window_ParamLimits

0x30c9,	// (0x000121f5) popup_call_audio_conf_window

0x342a,	// (0x00012556) popup_call_audio_first_window_ParamLimits

0x342a,	// (0x00012556) popup_call_audio_first_window

0x34a0,	// (0x000125cc) popup_call_audio_in_window_ParamLimits

0x34a0,	// (0x000125cc) popup_call_audio_in_window

0x34dc,	// (0x00012608) popup_call_audio_out_window_ParamLimits

0x34dc,	// (0x00012608) popup_call_audio_out_window

0x3516,	// (0x00012642) popup_call_audio_second_window_ParamLimits

0x3516,	// (0x00012642) popup_call_audio_second_window

0x356c,	// (0x00012698) popup_call_audio_wait_window_ParamLimits

0x356c,	// (0x00012698) popup_call_audio_wait_window

0x35a1,	// (0x000126cd) popup_number_entry_window_ParamLimits

0x35a1,	// (0x000126cd) popup_number_entry_window

0x9447,	// (0x00018573) bg_popup_call_pane_cp05_ParamLimits

0x9447,	// (0x00018573) bg_popup_call_pane_cp05

0x9467,	// (0x00018593) popup_number_entry_window_t1

0x947a,	// (0x000185a6) popup_number_entry_window_t2

0x948c,	// (0x000185b8) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0001e1f9) popup_number_entry_window_t

0x949e,	// (0x000185ca) text_title_cp2

0x94b1,	// (0x000185dd) bg_popup_call_pane_cp_ParamLimits

0x94b1,	// (0x000185dd) bg_popup_call_pane_cp

0x94bf,	// (0x000185eb) call_thumbnail_pane

0x94c7,	// (0x000185f3) popup_call_audio_in_window_g1_ParamLimits

0x94c7,	// (0x000185f3) popup_call_audio_in_window_g1

0x94d3,	// (0x000185ff) popup_call_audio_in_window_g2_ParamLimits

0x94d3,	// (0x000185ff) popup_call_audio_in_window_g2

0x94df,	// (0x0001860b) popup_call_audio_in_window_g3_ParamLimits

0x94df,	// (0x0001860b) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0001e202) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0001e202) popup_call_audio_in_window_g

0x94eb,	// (0x00018617) popup_call_audio_in_window_t1_ParamLimits

0x94eb,	// (0x00018617) popup_call_audio_in_window_t1

0x9507,	// (0x00018633) popup_call_audio_in_window_t2_ParamLimits

0x9507,	// (0x00018633) popup_call_audio_in_window_t2

0x9523,	// (0x0001864f) popup_call_audio_in_window_t3_ParamLimits

0x9523,	// (0x0001864f) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0001e209) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0001e209) popup_call_audio_in_window_t

0x94b1,	// (0x000185dd) bg_popup_call_pane_cp01_ParamLimits

0x94b1,	// (0x000185dd) bg_popup_call_pane_cp01

0x94bf,	// (0x000185eb) call_thumbnail_pane_cp02

0x9536,	// (0x00018662) call_type_pane_cp022

0x953e,	// (0x0001866a) popup_call_audio_out_window_g1_ParamLimits

0x953e,	// (0x0001866a) popup_call_audio_out_window_g1

0x9550,	// (0x0001867c) popup_call_audio_out_window_g2_ParamLimits

0x9550,	// (0x0001867c) popup_call_audio_out_window_g2

0x955c,	// (0x00018688) popup_call_audio_out_window_g3_ParamLimits

0x955c,	// (0x00018688) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0001e210) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0001e210) popup_call_audio_out_window_g

0x956e,	// (0x0001869a) popup_call_audio_out_window_t1_ParamLimits

0x956e,	// (0x0001869a) popup_call_audio_out_window_t1

0x9586,	// (0x000186b2) popup_call_audio_out_window_t2_ParamLimits

0x9586,	// (0x000186b2) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0001e217) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0001e217) popup_call_audio_out_window_t

0x959b,	// (0x000186c7) bg_popup_call_pane_ParamLimits

0x959b,	// (0x000186c7) bg_popup_call_pane

0x03be,	// (0x0000f4ea) call_thumbnail_pane_cp_ParamLimits

0x03be,	// (0x0000f4ea) call_thumbnail_pane_cp

0x961f,	// (0x0001874b) call_type_pane_cp01_ParamLimits

0x961f,	// (0x0001874b) call_type_pane_cp01

0x9663,	// (0x0001878f) popup_call_audio_first_window_g1_ParamLimits

0x9663,	// (0x0001878f) popup_call_audio_first_window_g1

0x96af,	// (0x000187db) popup_call_audio_first_window_g2_ParamLimits

0x96af,	// (0x000187db) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0001e21c) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0001e21c) popup_call_audio_first_window_g

0x96f3,	// (0x0001881f) popup_call_audio_first_window_t1_ParamLimits

0x96f3,	// (0x0001881f) popup_call_audio_first_window_t1

0x979f,	// (0x000188cb) popup_call_audio_first_window_t4_ParamLimits

0x979f,	// (0x000188cb) popup_call_audio_first_window_t4

0x982b,	// (0x00018957) popup_call_audio_first_window_t5_ParamLimits

0x982b,	// (0x00018957) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0001e221) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0001e221) popup_call_audio_first_window_t

0x985a,	// (0x00018986) bg_popup_call_pane_cp02

0x9864,	// (0x00018990) call_type_pane_cp023

0x986c,	// (0x00018998) popup_call_audio_wait_window_g1

0x9874,	// (0x000189a0) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0001e228) popup_call_audio_wait_window_g

0x987c,	// (0x000189a8) popup_call_audio_wait_window_t3

0x988a,	// (0x000189b6) bg_popup_call_pane_cp03_ParamLimits

0x988a,	// (0x000189b6) bg_popup_call_pane_cp03

0x98ea,	// (0x00018a16) call_thumbnail_pane_cp011_ParamLimits

0x98ea,	// (0x00018a16) call_thumbnail_pane_cp011

0x98f6,	// (0x00018a22) call_type_pane_cp034_ParamLimits

0x98f6,	// (0x00018a22) call_type_pane_cp034

0x9932,	// (0x00018a5e) popup_call_audio_second_window_g1_ParamLimits

0x9932,	// (0x00018a5e) popup_call_audio_second_window_g1

0x996e,	// (0x00018a9a) popup_call_audio_second_window_g2_ParamLimits

0x996e,	// (0x00018a9a) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0001e22d) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0001e22d) popup_call_audio_second_window_g

0x99aa,	// (0x00018ad6) popup_call_audio_second_window_t1_ParamLimits

0x99aa,	// (0x00018ad6) popup_call_audio_second_window_t1

0x9a2b,	// (0x00018b57) popup_call_audio_second_window_t2_ParamLimits

0x9a2b,	// (0x00018b57) popup_call_audio_second_window_t2

0x9a61,	// (0x00018b8d) popup_call_audio_second_window_t3_ParamLimits

0x9a61,	// (0x00018b8d) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0001e232) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0001e232) popup_call_audio_second_window_t

0x985a,	// (0x00018986) bg_popup_call_pane_cp04

0x9a97,	// (0x00018bc3) list_conf_pane

0x9a9f,	// (0x00018bcb) popup_call_audio_conf_window_t1

0x9aad,	// (0x00018bd9) call_thumbnail_pane_g1

0x9ab5,	// (0x00018be1) bg_pinb_pane_ParamLimits

0x9ab5,	// (0x00018be1) bg_pinb_pane

0x9ac3,	// (0x00018bef) find_pinb_pane

0x9acc,	// (0x00018bf8) listscroll_pinb_pane_ParamLimits

0x9acc,	// (0x00018bf8) listscroll_pinb_pane

0x9adb,	// (0x00018c07) pinb_bg_pane_g1

0x03e2,	// (0x0000f50e) pinb_bg_pane_g2

0x03ee,	// (0x0000f51a) pinb_bg_pane_g3

0x03fa,	// (0x0000f526) pinb_bg_pane_g4

0x0406,	// (0x0000f532) pinb_bg_pane_g5

0x0412,	// (0x0000f53e) pinb_bg_pane_g6

0x041d,	// (0x0000f549) pinb_bg_pane_g7

0x0428,	// (0x0000f554) pinb_bg_pane_g8

0x0433,	// (0x0000f55f) pinb_bg_pane_g9

0x043d,	// (0x0000f569) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0001e239) pinb_bg_pane_g

0x045a,	// (0x0000f586) grid_pinb_pane

0x0463,	// (0x0000f58f) list_pinb_pane

0x046c,	// (0x0000f598) scroll_pane_cp01_ParamLimits

0x046c,	// (0x0000f598) scroll_pane_cp01

0x9ae5,	// (0x00018c11) find_pinb_pane_g1_ParamLimits

0x9ae5,	// (0x00018c11) find_pinb_pane_g1

0x9afd,	// (0x00018c29) find_pinb_pane_t1

0x9b0f,	// (0x00018c3b) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0001e253) find_pinb_pane_t

0x9b24,	// (0x00018c50) input_focus_pane_cp01_ParamLimits

0x9b24,	// (0x00018c50) input_focus_pane_cp01

0x047e,	// (0x0000f5aa) cell_pinb_pane_ParamLimits

0x047e,	// (0x0000f5aa) cell_pinb_pane

0x9b30,	// (0x00018c5c) cell_pinb_pane_g1_ParamLimits

0x9b30,	// (0x00018c5c) cell_pinb_pane_g1

0x9b43,	// (0x00018c6f) cell_pinb_pane_g2_ParamLimits

0x9b43,	// (0x00018c6f) cell_pinb_pane_g2

0x9b4f,	// (0x00018c7b) cell_pinb_pane_g3_ParamLimits

0x9b4f,	// (0x00018c7b) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0001e258) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0001e258) cell_pinb_pane_g

0x985a,	// (0x00018986) grid_highlight_pane_cp01

0x04ac,	// (0x0000f5d8) list_pinb_item_pane_ParamLimits

0x04ac,	// (0x0000f5d8) list_pinb_item_pane

0x985a,	// (0x00018986) list_highlight_pane_cp02

0x04bf,	// (0x0000f5eb) list_pinb_item_pane_g1_ParamLimits

0x04bf,	// (0x0000f5eb) list_pinb_item_pane_g1

0x04cc,	// (0x0000f5f8) list_pinb_item_pane_g2_ParamLimits

0x04cc,	// (0x0000f5f8) list_pinb_item_pane_g2

0x04d8,	// (0x0000f604) list_pinb_item_pane_g3_ParamLimits

0x04d8,	// (0x0000f604) list_pinb_item_pane_g3

0x04e9,	// (0x0000f615) list_pinb_item_pane_g4_ParamLimits

0x04e9,	// (0x0000f615) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0001e25f) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0001e25f) list_pinb_item_pane_g

0x04f5,	// (0x0000f621) list_pinb_item_pane_t1_ParamLimits

0x04f5,	// (0x0000f621) list_pinb_item_pane_t1

0x052a,	// (0x0000f656) calc_display_pane

0x0552,	// (0x0000f67e) calc_paper_pane

0x0575,	// (0x0000f6a1) grid_calc_pane

0x985a,	// (0x00018986) bg_list_pane_cp01

0x05a3,	// (0x0000f6cf) clock_g1

0x05ab,	// (0x0000f6d7) clock_g2

0x0001,

0xf13c,	// (0x0001e268) clock_g

0x05b3,	// (0x0000f6df) clock_t1_ParamLimits

0x05b3,	// (0x0000f6df) clock_t1

0x05c8,	// (0x0000f6f4) clock_t2_ParamLimits

0x05c8,	// (0x0000f6f4) clock_t2

0x05da,	// (0x0000f706) clock_t3_ParamLimits

0x05da,	// (0x0000f706) clock_t3

0x05ec,	// (0x0000f718) clock_t4_ParamLimits

0x05ec,	// (0x0000f718) clock_t4

0x05fe,	// (0x0000f72a) clock_t5_ParamLimits

0x05fe,	// (0x0000f72a) clock_t5

0x0613,	// (0x0000f73f) clock_t6_ParamLimits

0x0613,	// (0x0000f73f) clock_t6

0x0625,	// (0x0000f751) clock_t7_ParamLimits

0x0625,	// (0x0000f751) clock_t7

0x0637,	// (0x0000f763) clock_t8_ParamLimits

0x0637,	// (0x0000f763) clock_t8

0x064b,	// (0x0000f777) clock_t9_ParamLimits

0x064b,	// (0x0000f777) clock_t9

0x0008,

0xf141,	// (0x0001e26d) clock_t_ParamLimits

0xf141,	// (0x0001e26d) clock_t

0x9b63,	// (0x00018c8f) popup_clock_analogue_window_cp02

0x9b63,	// (0x00018c8f) popup_clock_digital_window_cp01

0x9b6b,	// (0x00018c97) listscroll_help_pane

0x985a,	// (0x00018986) phob_pre_status_pane

0x9b75,	// (0x00018ca1) grid_qdial_pane

0x9ab5,	// (0x00018be1) listscroll_mce_pane

0x9ab5,	// (0x00018be1) bg_notes_pane

0x9b7f,	// (0x00018cab) list_notes_pane

0x065f,	// (0x0000f78b) scroll_pane_cp06

0x9b8d,	// (0x00018cb9) bg_calc_paper_pane

0x9ba1,	// (0x00018ccd) list_calc_pane

0x9bbb,	// (0x00018ce7) bg_calc_display_pane

0x0673,	// (0x0000f79f) calc_display_pane_t1

0x0685,	// (0x0000f7b1) calc_display_pane_t2

0x9bc7,	// (0x00018cf3) calc_display_pane_t3

0x0002,

0xf154,	// (0x0001e280) calc_display_pane_t

0x0697,	// (0x0000f7c3) cell_calc_pane_ParamLimits

0x0697,	// (0x0000f7c3) cell_calc_pane

0x9bd9,	// (0x00018d05) bg_calc_paper_pane_g1

0x9be5,	// (0x00018d11) bg_calc_paper_pane_g2

0x9bf1,	// (0x00018d1d) bg_calc_paper_pane_g3

0x9bfd,	// (0x00018d29) bg_calc_paper_pane_g4

0x9c09,	// (0x00018d35) bg_calc_paper_pane_g5

0x06ce,	// (0x0000f7fa) bg_calc_paper_pane_g6

0x06df,	// (0x0000f80b) bg_calc_paper_pane_g7

0x06f0,	// (0x0000f81c) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0001e287) bg_calc_paper_pane_g

0x0703,	// (0x0000f82f) calc_bg_paper_pane_g9

0x0716,	// (0x0000f842) list_calc_item_pane_ParamLimits

0x0716,	// (0x0000f842) list_calc_item_pane

0x9c15,	// (0x00018d41) list_calc_item_pane_g1

0x9c22,	// (0x00018d4e) list_calc_item_pane_t1_ParamLimits

0x9c22,	// (0x00018d4e) list_calc_item_pane_t1

0x0730,	// (0x0000f85c) list_calc_item_pane_t2_ParamLimits

0x0730,	// (0x0000f85c) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0001e298) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0001e298) list_calc_item_pane_t

0x9c34,	// (0x00018d60) cell_calc_pane_g1

0x9c3e,	// (0x00018d6a) grid_highlight_pane_cp02

0x9c60,	// (0x00018d8c) bg_calc_display_pane_g1

0x9c69,	// (0x00018d95) bg_calc_display_pane_g2

0x9c73,	// (0x00018d9f) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0001e2a2) bg_calc_display_pane_g

0x0762,	// (0x0000f88e) cell_qdial_pane_ParamLimits

0x0762,	// (0x0000f88e) cell_qdial_pane

0x0776,	// (0x0000f8a2) cell_qdial_pane_g1_ParamLimits

0x0776,	// (0x0000f8a2) cell_qdial_pane_g1

0x078c,	// (0x0000f8b8) cell_qdial_pane_g2_ParamLimits

0x078c,	// (0x0000f8b8) cell_qdial_pane_g2

0x9c7c,	// (0x00018da8) cell_qdial_pane_g3_ParamLimits

0x9c7c,	// (0x00018da8) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0001e2a9) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0001e2a9) cell_qdial_pane_g

0x07b2,	// (0x0000f8de) cell_qdial_pane_t1_ParamLimits

0x07b2,	// (0x0000f8de) cell_qdial_pane_t1

0x07ca,	// (0x0000f8f6) cell_qdial_pane_t2_ParamLimits

0x07ca,	// (0x0000f8f6) cell_qdial_pane_t2

0x07dd,	// (0x0000f909) cell_qdial_pane_t3_ParamLimits

0x07dd,	// (0x0000f909) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0001e2b2) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0001e2b2) cell_qdial_pane_t

0x985a,	// (0x00018986) grid_highlight_pane_cp04

0x9c88,	// (0x00018db4) thumbnail_qdial_pane_ParamLimits

0x9c88,	// (0x00018db4) thumbnail_qdial_pane

0x9ce4,	// (0x00018e10) list_help_pane

0x9ced,	// (0x00018e19) scroll_pane_cp02

0x07f0,	// (0x0000f91c) help_list_pane_t1_ParamLimits

0x07f0,	// (0x0000f91c) help_list_pane_t1

0x9cf6,	// (0x00018e22) bg_notes_pane_g2

0x9cfe,	// (0x00018e2a) bg_notes_pane_g3

0x9d06,	// (0x00018e32) notes_bg_pane_g1

0x9d0e,	// (0x00018e3a) notes_bg_pane_g4

0x9d16,	// (0x00018e42) notes_bg_pane_g5

0x9d1e,	// (0x00018e4a) notes_bg_pane_g6

0x9d26,	// (0x00018e52) notes_bg_pane_g7

0x9d2e,	// (0x00018e5a) notes_bg_pane_g8

0x9d36,	// (0x00018e62) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0001e2d0) notes_bg_pane_g

0x080f,	// (0x0000f93b) list_notes_text_pane_ParamLimits

0x080f,	// (0x0000f93b) list_notes_text_pane

0x9d3e,	// (0x00018e6a) list_notes_text_pane_g1

0x0825,	// (0x0000f951) list_notes_text_pane_t1

0x0833,	// (0x0000f95f) listscroll_cale_week_pane

0x085f,	// (0x0000f98b) bg_cale_heading_pane

0x9d61,	// (0x00018e8d) bg_cale_pane_cp01

0x087d,	// (0x0000f9a9) cale_week_corner_pane

0x089c,	// (0x0000f9c8) cale_week_day_heading_pane

0x08bf,	// (0x0000f9eb) cale_week_scroll_pane_g1

0x08d8,	// (0x0000fa04) cale_week_scroll_pane_g2

0x08f0,	// (0x0000fa1c) cale_week_scroll_pane_g3

0x0908,	// (0x0000fa34) cale_week_scroll_pane_g4

0x0920,	// (0x0000fa4c) cale_week_scroll_pane_g5

0x093c,	// (0x0000fa68) cale_week_scroll_pane_g6

0x095c,	// (0x0000fa88) cale_week_scroll_pane_g7

0x097c,	// (0x0000faa8) cale_week_scroll_pane_g8

0x09a0,	// (0x0000facc) cale_week_scroll_pane_g9

0x09b8,	// (0x0000fae4) cale_week_scroll_pane_g10

0x09d0,	// (0x0000fafc) cale_week_scroll_pane_g11

0x09e8,	// (0x0000fb14) cale_week_scroll_pane_g12

0x0a00,	// (0x0000fb2c) cale_week_scroll_pane_g13

0x0a00,	// (0x0000fb2c) cale_week_scroll_pane_g14

0x0a00,	// (0x0000fb2c) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0001e2df) cale_week_scroll_pane_g

0x0a18,	// (0x0000fb44) cale_week_time_pane

0x0a3c,	// (0x0000fb68) grid_cale_week_pane

0x9d91,	// (0x00018ebd) scroll_pane_cp08

0x0a62,	// (0x0000fb8e) cell_cale_week_pane_ParamLimits

0x0a62,	// (0x0000fb8e) cell_cale_week_pane

0x0af0,	// (0x0000fc1c) cale_week_day_heading_pane_t1

0x0b3a,	// (0x0000fc66) cale_week_day_heading_pane_t2

0x0b89,	// (0x0000fcb5) cale_week_day_heading_pane_t3

0x0bd8,	// (0x0000fd04) cale_week_day_heading_pane_t4

0x0c27,	// (0x0000fd53) cale_week_day_heading_pane_t5

0x0c7e,	// (0x0000fdaa) cale_week_day_heading_pane_t6

0x0cd5,	// (0x0000fe01) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0001e2fe) cale_week_day_heading_pane_t

0x9dae,	// (0x00018eda) bg_cale_side_pane

0x0d1f,	// (0x0000fe4b) cale_week_time_pane_t1

0x0d39,	// (0x0000fe65) cale_week_time_pane_t2

0x0d53,	// (0x0000fe7f) cale_week_time_pane_t3

0x0d6d,	// (0x0000fe99) cale_week_time_pane_t4

0x0d87,	// (0x0000feb3) cale_week_time_pane_t5

0x0da1,	// (0x0000fecd) cale_week_time_pane_t6

0x0dbb,	// (0x0000fee7) cale_week_time_pane_t7

0x0ddb,	// (0x0000ff07) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0001e30d) cale_week_time_pane_t

0x0dfb,	// (0x0000ff27) cell_cale_week_pane_g2

0x0e1a,	// (0x0000ff46) cell_cale_week_pane_g3_ParamLimits

0x0e1a,	// (0x0000ff46) cell_cale_week_pane_g3

0x9dbc,	// (0x00018ee8) grid_highlight_pane_cp07

0x9dc4,	// (0x00018ef0) listscroll_gms_pane

0x9dce,	// (0x00018efa) grid_gms_pane

0x9dd7,	// (0x00018f03) listscroll_gms_pane_g1

0x9ddf,	// (0x00018f0b) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0001e31e) listscroll_gms_pane_g

0x0e32,	// (0x0000ff5e) scroll_pane_cp010

0x0e3d,	// (0x0000ff69) cell_gms_pane_ParamLimits

0x0e3d,	// (0x0000ff69) cell_gms_pane

0x0e4f,	// (0x0000ff7b) cell_gms_pane_g1

0x9de7,	// (0x00018f13) cell_gms_pane_g2

0x9d3e,	// (0x00018e6a) cell_gms_pane_g3

0x9def,	// (0x00018f1b) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0001e323) cell_gms_pane_g

0x9df8,	// (0x00018f24) grid_highlight_pane_cp09

0x33c0,	// (0x000124ec) phob_pre_status_pane_g1

0x33c8,	// (0x000124f4) phob_pre_status_pane_g2

0x33d0,	// (0x000124fc) phob_pre_status_pane_g3

0x33d8,	// (0x00012504) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0001e712) phob_pre_status_pane_g

0x33e8,	// (0x00012514) phob_pre_status_pane_t1

0x33f6,	// (0x00012522) phob_pre_status_pane_t2

0x3406,	// (0x00012532) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0001e71d) phob_pre_status_pane_t

0x985a,	// (0x00018986) bg_list_pane_cp05

0x0e5f,	// (0x0000ff8b) grid_vorec_pane

0x0e69,	// (0x0000ff95) vorec_t1

0x0e77,	// (0x0000ffa3) vorec_t2

0x0e85,	// (0x0000ffb1) vorec_t3

0x0e93,	// (0x0000ffbf) vorec_t4

0x9e00,	// (0x00018f2c) vorec_t5

0x0ea1,	// (0x0000ffcd) vorec_t6

0x0006,

0xf200,	// (0x0001e32c) vorec_t

0x0ebd,	// (0x0000ffe9) wait_bar_pane_cp01

0x0ec5,	// (0x0000fff1) cell_vorec_pane_ParamLimits

0x0ec5,	// (0x0000fff1) cell_vorec_pane

0x9e0e,	// (0x00018f3a) cell_vorec_pane_g1

0x985a,	// (0x00018986) grid_highlight_pane_cp05

0x0ef0,	// (0x0001001c) cams_zoom_pane

0x0eff,	// (0x0001002b) image_vga_pane

0x0f19,	// (0x00010045) main_camera_pane_g1

0x0f2b,	// (0x00010057) main_camera_pane_g2

0x0f3b,	// (0x00010067) main_camera_pane_g3

0x0f4d,	// (0x00010079) main_camera_pane_g4

0x0f5f,	// (0x0001008b) main_camera_pane_g5

0x0f71,	// (0x0001009d) main_camera_pane_g6

0x0f83,	// (0x000100af) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0001e33b) main_camera_pane_g

0x0f95,	// (0x000100c1) main_camera_pane_t1

0x0fab,	// (0x000100d7) main_camera_pane_t2

0x0001,

0xf220,	// (0x0001e34c) main_camera_pane_t

0x0fe7,	// (0x00010113) cams_zoom_pane_cp_ParamLimits

0x0fe7,	// (0x00010113) cams_zoom_pane_cp

0x100f,	// (0x0001013b) image_cif_pane_ParamLimits

0x100f,	// (0x0001013b) image_cif_pane

0x104a,	// (0x00010176) image_subqcif_pane

0x1052,	// (0x0001017e) main_video_pane_g1_ParamLimits

0x1052,	// (0x0001017e) main_video_pane_g1

0x1076,	// (0x000101a2) main_video_pane_g2_ParamLimits

0x1076,	// (0x000101a2) main_video_pane_g2

0x10aa,	// (0x000101d6) main_video_pane_g3_ParamLimits

0x10aa,	// (0x000101d6) main_video_pane_g3

0x10d8,	// (0x00010204) main_video_pane_g4_ParamLimits

0x10d8,	// (0x00010204) main_video_pane_g4

0x1106,	// (0x00010232) main_video_pane_g5_ParamLimits

0x1106,	// (0x00010232) main_video_pane_g5

0x9e24,	// (0x00018f50) main_video_pane_g6_ParamLimits

0x9e24,	// (0x00018f50) main_video_pane_g6

0x0006,

0xf225,	// (0x0001e351) main_video_pane_g_ParamLimits

0xf225,	// (0x0001e351) main_video_pane_g

0x112f,	// (0x0001025b) main_video_pane_t1_ParamLimits

0x112f,	// (0x0001025b) main_video_pane_t1

0x9e3e,	// (0x00018f6a) cams_zoom_pane_g1

0x9e47,	// (0x00018f73) cams_zoom_pane_g2

0x9e50,	// (0x00018f7c) cams_zoom_pane_g3

0x9e59,	// (0x00018f85) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0001e360) cams_zoom_pane_g

0x118c,	// (0x000102b8) grid_cams_pane

0x11a6,	// (0x000102d2) linegrid_cams_pane

0x11b9,	// (0x000102e5) cell_cams_pane_ParamLimits

0x11b9,	// (0x000102e5) cell_cams_pane

0x9e62,	// (0x00018f8e) cams_burst_image_pane

0x9e6a,	// (0x00018f96) cell_cams_pane_g1

0x985a,	// (0x00018986) grid_highlight_pane_cp03

0x9c34,	// (0x00018d60) mp_bg_pane_g1

0x985a,	// (0x00018986) bg_list_pane_cp03

0xbcf2,	// (0x0001ae1e) bg_mp_pane

0xbcfa,	// (0x0001ae26) grid_mp_pane

0xbd02,	// (0x0001ae2e) media_player_g1

0xbd0a,	// (0x0001ae36) media_player_t1

0xbd18,	// (0x0001ae44) media_player_t2

0xbd26,	// (0x0001ae52) media_player_t3

0xbd34,	// (0x0001ae60) media_player_t4

0xbd42,	// (0x0001ae6e) media_player_t5

0xbd50,	// (0x0001ae7c) media_player_t6

0xbd5e,	// (0x0001ae8a) media_player_t7

0x0006,

0xf5d0,	// (0x0001e6fc) media_player_t

0xbd6c,	// (0x0001ae98) wait_bar_pane_cp02

0xf5b5,	// (0x0001e6e1) main_usb_pane_t

0x33b7,	// (0x000124e3) cell_mp_pane

0x9c34,	// (0x00018d60) cell_mp_pane_g1

0x985a,	// (0x00018986) grid_highlight_pane_cp06

0x9e72,	// (0x00018f9e) grid_skin_colour_pane

0x9e7a,	// (0x00018fa6) list_highlight_pane_cp03

0x12ef,	// (0x0001041b) skin_g1

0x9e82,	// (0x00018fae) skin_t1

0x9e91,	// (0x00018fbd) skin_t2

0x0001,

0xf269,	// (0x0001e395) skin_t

0x12f7,	// (0x00010423) cell_skin_colour_pane_ParamLimits

0x12f7,	// (0x00010423) cell_skin_colour_pane

0x9e9f,	// (0x00018fcb) cell_skin_colour_pane_g1

0x1370,	// (0x0001049c) call_video_g1_ParamLimits

0x1370,	// (0x0001049c) call_video_g1

0x138c,	// (0x000104b8) call_video_g2_ParamLimits

0x138c,	// (0x000104b8) call_video_g2

0x0001,

0xf26e,	// (0x0001e39a) call_video_g_ParamLimits

0xf26e,	// (0x0001e39a) call_video_g

0x13de,	// (0x0001050a) call_video_uplink_pane_cp1_ParamLimits

0x13de,	// (0x0001050a) call_video_uplink_pane_cp1

0x9eb1,	// (0x00018fdd) call_video_uplink_pane_cp2

0x147d,	// (0x000105a9) video_down_crop_pane_ParamLimits

0x147d,	// (0x000105a9) video_down_crop_pane

0x1566,	// (0x00010692) video_down_pane_ParamLimits

0x1566,	// (0x00010692) video_down_pane

0x9eb9,	// (0x00018fe5) video_down_subqcif_pane_ParamLimits

0x9eb9,	// (0x00018fe5) video_down_subqcif_pane

0x9ed1,	// (0x00018ffd) video_down_subqcif_pane_cp_ParamLimits

0x9ed1,	// (0x00018ffd) video_down_subqcif_pane_cp

0x9ef7,	// (0x00019023) im_reading_pane_ParamLimits

0x9ef7,	// (0x00019023) im_reading_pane

0x1674,	// (0x000107a0) im_writing_pane_ParamLimits

0x1674,	// (0x000107a0) im_writing_pane

0x168a,	// (0x000107b6) im_reading_pane_t1

0x9f11,	// (0x0001903d) list_im_pane

0x9f22,	// (0x0001904e) scroll_pane_cp07

0x16c7,	// (0x000107f3) im_writing_pane_t1_ParamLimits

0x16c7,	// (0x000107f3) im_writing_pane_t1

0x9f3b,	// (0x00019067) im_writing_pane_t2_ParamLimits

0x9f3b,	// (0x00019067) im_writing_pane_t2

0x0001,

0xf278,	// (0x0001e3a4) im_writing_pane_t_ParamLimits

0xf278,	// (0x0001e3a4) im_writing_pane_t

0x985a,	// (0x00018986) input_focus_pane_cp04

0x985a,	// (0x00018986) input_focus_pane_cp05

0x16dc,	// (0x00010808) list_im_single_pane_ParamLimits

0x16dc,	// (0x00010808) list_im_single_pane

0x16f2,	// (0x0001081e) list_single_im_pane_t1

0x3377,	// (0x000124a3) blid_accuracy_pane

0x337f,	// (0x000124ab) blid_compass_pane

0x3389,	// (0x000124b5) main_location_t1

0x3399,	// (0x000124c5) main_location_t2

0x33a9,	// (0x000124d5) main_location_t3

0x0002,

0xf5df,	// (0x0001e70b) main_location_t

0x985a,	// (0x00018986) aid_levels_location

0x9c34,	// (0x00018d60) blid_accuracy_pane_g1

0x9c34,	// (0x00018d60) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0001e406) blid_accuracy_pane_g

0x9f83,	// (0x000190af) wml_content_pane

0x9fc1,	// (0x000190ed) wml_button_pane_ParamLimits

0x9fc1,	// (0x000190ed) wml_button_pane

0x1701,	// (0x0001082d) wml_list_single_large_pane_ParamLimits

0x1701,	// (0x0001082d) wml_list_single_large_pane

0x1717,	// (0x00010843) wml_list_single_medium_pane_ParamLimits

0x1717,	// (0x00010843) wml_list_single_medium_pane

0x1731,	// (0x0001085d) wml_list_single_small_pane_ParamLimits

0x1731,	// (0x0001085d) wml_list_single_small_pane

0x9fd5,	// (0x00019101) wml_selection_box_pane_ParamLimits

0x9fd5,	// (0x00019101) wml_selection_box_pane

0x9fe8,	// (0x00019114) wml_list_single_pane_t1

0x9ff7,	// (0x00019123) wml_list_single_medium_pane_t1

0xa006,	// (0x00019132) wml_list_single_large_pane_t1

0xa015,	// (0x00019141) input_focus_pane_cp02_ParamLimits

0xa015,	// (0x00019141) input_focus_pane_cp02

0xa028,	// (0x00019154) wml_selection_box_pane_g1

0xa031,	// (0x0001915d) wml_selection_box_pane_t1_ParamLimits

0xa031,	// (0x0001915d) wml_selection_box_pane_t1

0x9ab5,	// (0x00018be1) bg_wml_button_pane_ParamLimits

0x9ab5,	// (0x00018be1) bg_wml_button_pane

0xa049,	// (0x00019175) wml_button_pane_g1

0xa051,	// (0x0001917d) wml_button_pane_t1

0xa049,	// (0x00019175) wml_button_bg_pane_g1

0xa061,	// (0x0001918d) wml_button_bg_pane_g2

0xa069,	// (0x00019195) wml_button_bg_pane_g3

0xa071,	// (0x0001919d) wml_button_bg_pane_g4

0xa079,	// (0x000191a5) wml_button_bg_pane_g5

0xa081,	// (0x000191ad) wml_button_bg_pane_g6

0xa089,	// (0x000191b5) wml_button_bg_pane_g7

0xa091,	// (0x000191bd) wml_button_bg_pane_g8

0xa099,	// (0x000191c5) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0001e3a9) wml_button_bg_pane_g

0x174b,	// (0x00010877) bg_list_pane_cp02

0xa0a1,	// (0x000191cd) mce_header_pane_ParamLimits

0xa0a1,	// (0x000191cd) mce_header_pane

0xa0b7,	// (0x000191e3) mce_icon_pane

0xa0b7,	// (0x000191e3) mce_image_pane

0xa0c0,	// (0x000191ec) mce_text_pane_ParamLimits

0xa0c0,	// (0x000191ec) mce_text_pane

0x1753,	// (0x0001087f) scroll_pane_cp03

0x9fb9,	// (0x000190e5) scroll_pane_cp04

0xa0d3,	// (0x000191ff) scroll_pane_cp05_ParamLimits

0xa0d3,	// (0x000191ff) scroll_pane_cp05

0x175d,	// (0x00010889) mce_header_field_pane_ParamLimits

0x175d,	// (0x00010889) mce_header_field_pane

0x1774,	// (0x000108a0) mce_header_field_pane_2_ParamLimits

0x1774,	// (0x000108a0) mce_header_field_pane_2

0x178a,	// (0x000108b6) mce_header_field_pane_3

0x1792,	// (0x000108be) list_single_mce_message_pane_ParamLimits

0x1792,	// (0x000108be) list_single_mce_message_pane

0x17a9,	// (0x000108d5) list_single_mce_smart_pane_ParamLimits

0x17a9,	// (0x000108d5) list_single_mce_smart_pane

0xa0df,	// (0x0001920b) input_focus_pane_cp03

0xa0e8,	// (0x00019214) list_header_data_pane

0x17cb,	// (0x000108f7) mce_header_field_pane_t1

0x17db,	// (0x00010907) list_single_mce_header_pane_ParamLimits

0x17db,	// (0x00010907) list_single_mce_header_pane

0xa0f0,	// (0x0001921c) list_single_mce_header_pane_t1

0xa0ff,	// (0x0001922b) list_single_mce_message_pane_g1

0xa107,	// (0x00019233) list_single_mce_message_pane_t1

0x1815,	// (0x00010941) bg_cale_heading_pane_cp01_ParamLimits

0x1815,	// (0x00010941) bg_cale_heading_pane_cp01

0xa115,	// (0x00019241) bg_cale_pane_cp02_ParamLimits

0xa115,	// (0x00019241) bg_cale_pane_cp02

0x1850,	// (0x0001097c) cale_month_corner_pane

0x186f,	// (0x0001099b) cale_month_day_heading_pane_ParamLimits

0x186f,	// (0x0001099b) cale_month_day_heading_pane

0x18c2,	// (0x000109ee) cale_month_pane_g1_ParamLimits

0x18c2,	// (0x000109ee) cale_month_pane_g1

0x18f2,	// (0x00010a1e) cale_month_pane_g2_ParamLimits

0x18f2,	// (0x00010a1e) cale_month_pane_g2

0x1922,	// (0x00010a4e) cale_month_pane_g3_ParamLimits

0x1922,	// (0x00010a4e) cale_month_pane_g3

0x195e,	// (0x00010a8a) cale_month_pane_g4_ParamLimits

0x195e,	// (0x00010a8a) cale_month_pane_g4

0x199a,	// (0x00010ac6) cale_month_pane_g5_ParamLimits

0x199a,	// (0x00010ac6) cale_month_pane_g5

0x19e2,	// (0x00010b0e) cale_month_pane_g6_ParamLimits

0x19e2,	// (0x00010b0e) cale_month_pane_g6

0x1a2e,	// (0x00010b5a) cale_month_pane_g7_ParamLimits

0x1a2e,	// (0x00010b5a) cale_month_pane_g7

0x1a82,	// (0x00010bae) cale_month_pane_g8_ParamLimits

0x1a82,	// (0x00010bae) cale_month_pane_g8

0x1ad6,	// (0x00010c02) cale_month_pane_g9_ParamLimits

0x1ad6,	// (0x00010c02) cale_month_pane_g9

0x1b28,	// (0x00010c54) cale_month_pane_g10_ParamLimits

0x1b28,	// (0x00010c54) cale_month_pane_g10

0x1b7a,	// (0x00010ca6) cale_month_pane_g11_ParamLimits

0x1b7a,	// (0x00010ca6) cale_month_pane_g11

0x1bcc,	// (0x00010cf8) cale_month_pane_g12_ParamLimits

0x1bcc,	// (0x00010cf8) cale_month_pane_g12

0x1c1e,	// (0x00010d4a) cale_month_pane_g13_ParamLimits

0x1c1e,	// (0x00010d4a) cale_month_pane_g13

0x000c,

0xf290,	// (0x0001e3bc) cale_month_pane_g_ParamLimits

0xf290,	// (0x0001e3bc) cale_month_pane_g

0x1c70,	// (0x00010d9c) cale_month_week_pane

0x1c94,	// (0x00010dc0) grid_cale_month_pane_ParamLimits

0x1c94,	// (0x00010dc0) grid_cale_month_pane

0x1cd2,	// (0x00010dfe) cale_month_day_heading_pane_t1

0x1d58,	// (0x00010e84) cale_month_day_heading_pane_t2

0x1de9,	// (0x00010f15) cale_month_day_heading_pane_t3

0x1e7a,	// (0x00010fa6) cale_month_day_heading_pane_t4

0x1f13,	// (0x0001103f) cale_month_day_heading_pane_t5

0x1fb4,	// (0x000110e0) cale_month_day_heading_pane_t6

0x2055,	// (0x00011181) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0001e3d7) cale_month_day_heading_pane_t

0x9dae,	// (0x00018eda) bg_cale_side_pane_cp01

0x20fe,	// (0x0001122a) cale_month_week_pane_t1

0x2117,	// (0x00011243) cale_month_week_pane_t2

0x2130,	// (0x0001125c) cale_month_week_pane_t3

0x2149,	// (0x00011275) cale_month_week_pane_t4

0x2162,	// (0x0001128e) cale_month_week_pane_t5

0x217b,	// (0x000112a7) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0001e3e6) cale_month_week_pane_t

0x2194,	// (0x000112c0) cell_cale_month_pane_ParamLimits

0x2194,	// (0x000112c0) cell_cale_month_pane

0xa154,	// (0x00019280) cell_cale_month_pane_g1

0x22ec,	// (0x00011418) cell_cale_month_pane_t1_ParamLimits

0x22ec,	// (0x00011418) cell_cale_month_pane_t1

0x9dbc,	// (0x00018ee8) grid_highlight_pane_cp08

0x9c34,	// (0x00018d60) main_smil_g1

0x230c,	// (0x00011438) smil_status_pane

0xa160,	// (0x0001928c) smil_text_pane

0xbc12,	// (0x0001ad3e) bg_popup_call3_rect_pane_g8

0xbc1a,	// (0x0001ad46) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0001e69f) bg_popup_call3_rect_pane_g

0xbeb5,	// (0x0001afe1) smil_status_volume_pane_g1

0xa16a,	// (0x00019296) smil_status_pane_t1

0xbee8,	// (0x0001b014) volume_smil_pane

0xa181,	// (0x000192ad) list_smil_text_pane

0x2321,	// (0x0001144d) scroll_pane_cp011

0x232c,	// (0x00011458) smil_text_list_pane_t1_ParamLimits

0x232c,	// (0x00011458) smil_text_list_pane_t1

0xa18b,	// (0x000192b7) aid_volume_smil_ParamLimits

0xa18b,	// (0x000192b7) aid_volume_smil

0x9c34,	// (0x00018d60) smil_volume_pane_g1

0x9c34,	// (0x00018d60) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0001e406) smil_volume_pane_g

0x0833,	// (0x0000f95f) listscroll_cale_day_pane

0xa1ad,	// (0x000192d9) bg_cale_pane

0xa1c5,	// (0x000192f1) list_cale_pane

0xa1e8,	// (0x00019314) scroll_pane_cp09

0xa1f9,	// (0x00019325) cale_bg_pane_g1

0xa201,	// (0x0001932d) cale_bg_pane_g2

0xa209,	// (0x00019335) cale_bg_pane_g3

0xa211,	// (0x0001933d) cale_bg_pane_g4

0xa219,	// (0x00019345) cale_bg_pane_g5

0xa221,	// (0x0001934d) cale_bg_pane_g6

0xa229,	// (0x00019355) cale_bg_pane_g7

0xa231,	// (0x0001935d) cale_bg_pane_g8

0xa239,	// (0x00019365) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0001e40b) cale_bg_pane_g

0x236e,	// (0x0001149a) list_cale_time_pane_ParamLimits

0x236e,	// (0x0001149a) list_cale_time_pane

0xa249,	// (0x00019375) list_cale_time_pane_g1_ParamLimits

0xa249,	// (0x00019375) list_cale_time_pane_g1

0xa255,	// (0x00019381) list_cale_time_pane_g2_ParamLimits

0xa255,	// (0x00019381) list_cale_time_pane_g2

0x2385,	// (0x000114b1) list_cale_time_pane_g3_ParamLimits

0x2385,	// (0x000114b1) list_cale_time_pane_g3

0x2393,	// (0x000114bf) list_cale_time_pane_g4_ParamLimits

0x2393,	// (0x000114bf) list_cale_time_pane_g4

0x23a1,	// (0x000114cd) list_cale_time_pane_g5_ParamLimits

0x23a1,	// (0x000114cd) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0001e41e) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0001e41e) list_cale_time_pane_g

0xa26f,	// (0x0001939b) list_cale_time_pane_t1_ParamLimits

0xa26f,	// (0x0001939b) list_cale_time_pane_t1

0xa297,	// (0x000193c3) list_cale_time_pane_t2_ParamLimits

0xa297,	// (0x000193c3) list_cale_time_pane_t2

0x26f1,	// (0x0001181d) aid_blid_cardinal_pane

0x272f,	// (0x0001185b) compass_pane_t4

0xa2bf,	// (0x000193eb) list_cale_time_pane_t4_ParamLimits

0xa2bf,	// (0x000193eb) list_cale_time_pane_t4

0x273d,	// (0x00011869) compass_pane_t5

0x274b,	// (0x00011877) compass_pane_t6

0x2759,	// (0x00011885) compass_pane_t7

0xa7ef,	// (0x0001991b) navi_pane_cc_t1

0xa9e6,	// (0x00019b12) aid_phob_thumbnail_center_pane

0x2d87,	// (0x00011eb3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0001e42b) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0001e42b) list_cale_time_pane_t

0x94b1,	// (0x000185dd) bg_popup_window_pane_cp02_ParamLimits

0x94b1,	// (0x000185dd) bg_popup_window_pane_cp02

0xa2e7,	// (0x00019413) heading_pane_cp01_ParamLimits

0xa2e7,	// (0x00019413) heading_pane_cp01

0xa2f3,	// (0x0001941f) loc_req_pane_ParamLimits

0xa2f3,	// (0x0001941f) loc_req_pane

0xa303,	// (0x0001942f) loc_type_pane_ParamLimits

0xa303,	// (0x0001942f) loc_type_pane

0xa315,	// (0x00019441) loc_type_pane_t1_ParamLimits

0xa315,	// (0x00019441) loc_type_pane_t1

0xa327,	// (0x00019453) loc_type_pane_t2_ParamLimits

0xa327,	// (0x00019453) loc_type_pane_t2

0xa339,	// (0x00019465) loc_type_pane_t3_ParamLimits

0xa339,	// (0x00019465) loc_type_pane_t3

0x0002,

0xf306,	// (0x0001e432) loc_type_pane_t_ParamLimits

0xf306,	// (0x0001e432) loc_type_pane_t

0xa34b,	// (0x00019477) list_loc_req_pane

0xa355,	// (0x00019481) scroll_pane_cp012

0x23af,	// (0x000114db) list_single_loc_request_popup_menu_pane_ParamLimits

0x23af,	// (0x000114db) list_single_loc_request_popup_menu_pane

0xa360,	// (0x0001948c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa360,	// (0x0001948c) list_single_loc_request_popup_menu_pane_g1

0xa36c,	// (0x00019498) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa36c,	// (0x00019498) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0001e439) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0001e439) list_single_loc_request_popup_menu_pane_g

0xa378,	// (0x000194a4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa378,	// (0x000194a4) list_single_loc_request_popup_menu_pane_t1

0x9ab5,	// (0x00018be1) bg_popup_window_pane_cp03_ParamLimits

0x9ab5,	// (0x00018be1) bg_popup_window_pane_cp03

0xa38e,	// (0x000194ba) heading_loc_req_pane_ParamLimits

0xa38e,	// (0x000194ba) heading_loc_req_pane

0x23bc,	// (0x000114e8) popup_dyc_status_message_window_g1_ParamLimits

0x23bc,	// (0x000114e8) popup_dyc_status_message_window_g1

0x23d0,	// (0x000114fc) popup_dyc_status_message_window_t1_ParamLimits

0x23d0,	// (0x000114fc) popup_dyc_status_message_window_t1

0x23e5,	// (0x00011511) popup_dyc_status_message_window_t2_ParamLimits

0x23e5,	// (0x00011511) popup_dyc_status_message_window_t2

0x23fa,	// (0x00011526) popup_dyc_status_message_window_t3_ParamLimits

0x23fa,	// (0x00011526) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0001e43e) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0001e43e) popup_dyc_status_message_window_t

0x985a,	// (0x00018986) bg_heading_pane_cp01

0xa39a,	// (0x000194c6) heading_loc_req_pane_g1

0xa3a2,	// (0x000194ce) heading_loc_req_pane_g2

0xa3aa,	// (0x000194d6) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0001e445) heading_loc_req_pane_g

0xa3b2,	// (0x000194de) heading_loc_req_pane_t1

0xa3c1,	// (0x000194ed) bg_popup_sub_pane_cp01_ParamLimits

0xa3c1,	// (0x000194ed) bg_popup_sub_pane_cp01

0xa3cf,	// (0x000194fb) popup_cale_events_window_g1_ParamLimits

0xa3cf,	// (0x000194fb) popup_cale_events_window_g1

0xa3ef,	// (0x0001951b) popup_cale_events_window_g2_ParamLimits

0xa3ef,	// (0x0001951b) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0001e479) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0001e479) popup_cale_events_window_g

0xa40f,	// (0x0001953b) popup_cale_events_window_t1_ParamLimits

0xa40f,	// (0x0001953b) popup_cale_events_window_t1

0xa421,	// (0x0001954d) popup_cale_events_window_t2_ParamLimits

0xa421,	// (0x0001954d) popup_cale_events_window_t2

0xa45f,	// (0x0001958b) popup_cale_events_window_t3_ParamLimits

0xa45f,	// (0x0001958b) popup_cale_events_window_t3

0xa499,	// (0x000195c5) popup_cale_events_window_t4_ParamLimits

0xa499,	// (0x000195c5) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0001e47e) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0001e47e) popup_cale_events_window_t

0x24ff,	// (0x0001162b) call_type_pane

0x250f,	// (0x0001163b) popup_call_status_window_g1

0x2523,	// (0x0001164f) popup_call_status_window_g2

0x2537,	// (0x00011663) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0001e487) popup_call_status_window_g

0xa4cf,	// (0x000195fb) call_type_pane_g1

0xa4d8,	// (0x00019604) call_type_pane_g2

0x0001,

0xf362,	// (0x0001e48e) call_type_pane_g

0x985a,	// (0x00018986) bg_popup_sub_pane_cp02

0xa4e1,	// (0x0001960d) listscroll_popup_wml_pane

0xa4e9,	// (0x00019615) list_wml_pane

0xa4f3,	// (0x0001961f) scroll_pane_cp013

0xa4fe,	// (0x0001962a) list_single_graphic_popup_wml_pane_ParamLimits

0xa4fe,	// (0x0001962a) list_single_graphic_popup_wml_pane

0x9c34,	// (0x00018d60) list_single_graphic_popup_wml_pane_g1

0xa512,	// (0x0001963e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0001e493) list_single_graphic_popup_wml_pane_g

0xa51a,	// (0x00019646) list_single_graphic_popup_wml_pane_t1

0xa530,	// (0x0001965c) aid_call_pane

0x9aad,	// (0x00018bd9) popup_clock_analogue_window_g1

0x9aad,	// (0x00018bd9) popup_clock_analogue_window_g2

0xa538,	// (0x00019664) popup_clock_analogue_window_g3

0xa538,	// (0x00019664) popup_clock_analogue_window_g4

0x9c34,	// (0x00018d60) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0001e498) popup_clock_analogue_window_g

0xa540,	// (0x0001966c) popup_clock_analogue_window_t1

0xa54e,	// (0x0001967a) clock_digital_number_pane_ParamLimits

0xa54e,	// (0x0001967a) clock_digital_number_pane

0xa55a,	// (0x00019686) clock_digital_number_pane_cp02_ParamLimits

0xa55a,	// (0x00019686) clock_digital_number_pane_cp02

0xa566,	// (0x00019692) clock_digital_number_pane_cp03_ParamLimits

0xa566,	// (0x00019692) clock_digital_number_pane_cp03

0xa572,	// (0x0001969e) clock_digital_number_pane_cp04_ParamLimits

0xa572,	// (0x0001969e) clock_digital_number_pane_cp04

0xa582,	// (0x000196ae) clock_digital_separator_pane_ParamLimits

0xa582,	// (0x000196ae) clock_digital_separator_pane

0xa58e,	// (0x000196ba) popup_clock_digital_window_t1

0x9c34,	// (0x00018d60) clock_digital_number_pane_g1

0x9c34,	// (0x00018d60) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0001e406) clock_digital_number_pane_g

0x9c34,	// (0x00018d60) clock_digital_separator_pane_g1

0x9c34,	// (0x00018d60) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0001e406) clock_digital_separator_pane_g

0x985a,	// (0x00018986) bg_popup_window_pane_cp04

0xa5ab,	// (0x000196d7) heading_pane_cp03

0xa5b3,	// (0x000196df) listscroll_popup_gms_pane

0xa5bb,	// (0x000196e7) grid_large_graphic_popup_pane

0xa5c5,	// (0x000196f1) listscroll_popup_gms_pane_g1

0xa5cd,	// (0x000196f9) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0001e4a3) listscroll_popup_gms_pane_g

0x9fb9,	// (0x000190e5) scroll_pane_cp014

0xa5d5,	// (0x00019701) cell_large_graphic_popup_pane_ParamLimits

0xa5d5,	// (0x00019701) cell_large_graphic_popup_pane

0xa5ed,	// (0x00019719) cell_large_graphic_popup_pane_g1_ParamLimits

0xa5ed,	// (0x00019719) cell_large_graphic_popup_pane_g1

0xa5f9,	// (0x00019725) cell_large_graphic_popup_pane_g2_ParamLimits

0xa5f9,	// (0x00019725) cell_large_graphic_popup_pane_g2

0xa605,	// (0x00019731) cell_large_graphic_popup_pane_g3_ParamLimits

0xa605,	// (0x00019731) cell_large_graphic_popup_pane_g3

0xa612,	// (0x0001973e) cell_large_graphic_popup_pane_g4_ParamLimits

0xa612,	// (0x0001973e) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0001e4a8) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0001e4a8) cell_large_graphic_popup_pane_g

0xa622,	// (0x0001974e) grid_highlight_pane_cp010

0x9c34,	// (0x00018d60) bg_popup_call_pane_g1

0xa62c,	// (0x00019758) list_single_graphic_popup_conf_pane_ParamLimits

0xa62c,	// (0x00019758) list_single_graphic_popup_conf_pane

0xa63f,	// (0x0001976b) list_highlight_pane_cp01

0xa648,	// (0x00019774) list_single_graphic_popup_conf_pane_g1

0xa650,	// (0x0001977c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0001e4b1) list_single_graphic_popup_conf_pane_g

0xa658,	// (0x00019784) list_single_graphic_popup_conf_pane_t1

0xa666,	// (0x00019792) linegrid_cams_pane_g1

0x2546,	// (0x00011672) linegrid_cams_pane_g2

0x9d3e,	// (0x00018e6a) linegrid_cams_pane_g3

0xa66f,	// (0x0001979b) linegrid_cams_pane_g4

0x254f,	// (0x0001167b) linegrid_cams_pane_g5

0x2558,	// (0x00011684) linegrid_cams_pane_g6

0x9def,	// (0x00018f1b) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0001e4b6) linegrid_cams_pane_g

0xa678,	// (0x000197a4) popup_clock_analogue_window

0xa678,	// (0x000197a4) popup_clock_digital_window

0x985a,	// (0x00018986) popup_phob_thumbnail_window

0x9c34,	// (0x00018d60) call_video_uplink_pane_g1

0xa681,	// (0x000197ad) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0001e4c5) call_video_uplink_pane_g

0x9dbc,	// (0x00018ee8) video_uplink_pane

0xa689,	// (0x000197b5) mce_image_pane_g1

0x2563,	// (0x0001168f) mce_image_pane_g2

0x256b,	// (0x00011697) mce_image_pane_g3

0x2573,	// (0x0001169f) mce_image_pane_g4

0x257d,	// (0x000116a9) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0001e4ca) mce_image_pane_g

0xa693,	// (0x000197bf) control_top_pane_stacon_cp01_ParamLimits

0xa693,	// (0x000197bf) control_top_pane_stacon_cp01

0xa6a7,	// (0x000197d3) uni_indicator_pane_stacon_cp01_ParamLimits

0xa6a7,	// (0x000197d3) uni_indicator_pane_stacon_cp01

0xa6b8,	// (0x000197e4) bg_popup_sub_pane_cp03

0x2585,	// (0x000116b1) chi_dic_find_pane

0x258d,	// (0x000116b9) listscroll_chi_dic_pane

0x2596,	// (0x000116c2) main_pane_chidic_g1

0xa6c2,	// (0x000197ee) chi_dic_find_pane_t1

0xa6d0,	// (0x000197fc) find_chidic_pane

0xa6d9,	// (0x00019805) chi_dic_list_pane_ParamLimits

0xa6d9,	// (0x00019805) chi_dic_list_pane

0xa6ea,	// (0x00019816) scroll_pane_cp020

0xa6f2,	// (0x0001981e) find_chidic_pane_t1

0x985a,	// (0x00018986) input_focus_pane_cp06

0x25a9,	// (0x000116d5) list_chi_dic_pane_ParamLimits

0x25a9,	// (0x000116d5) list_chi_dic_pane

0x25bc,	// (0x000116e8) list_chi_dic_pane_t1_ParamLimits

0x25bc,	// (0x000116e8) list_chi_dic_pane_t1

0x985a,	// (0x00018986) list_highlight_pane_cp020

0xa701,	// (0x0001982d) bg_cale_heading_pane_g1

0x25cf,	// (0x000116fb) bg_cale_heading_pane_g2

0x25d7,	// (0x00011703) bg_cale_heading_pane_g3

0x25df,	// (0x0001170b) bg_cale_heading_pane_g4

0x25e9,	// (0x00011715) bg_cale_heading_pane_g5

0x25f3,	// (0x0001171f) bg_cale_heading_pane_g6

0x25fb,	// (0x00011727) bg_cale_heading_pane_g7

0x2603,	// (0x0001172f) bg_cale_heading_pane_g8

0x260d,	// (0x00011739) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0001e4d5) bg_cale_heading_pane_g

0xa701,	// (0x0001982d) bg_cale_side_pane_g1

0x2617,	// (0x00011743) bg_cale_side_pane_g2

0x261f,	// (0x0001174b) bg_cale_side_pane_g3

0x2627,	// (0x00011753) bg_cale_side_pane_g4

0x262f,	// (0x0001175b) bg_cale_side_pane_g5

0x2637,	// (0x00011763) bg_cale_side_pane_g6

0x263f,	// (0x0001176b) bg_cale_side_pane_g7

0x2647,	// (0x00011773) bg_cale_side_pane_g8

0x264f,	// (0x0001177b) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0001e4e8) bg_cale_side_pane_g

0x2657,	// (0x00011783) popup_call_status_window_ParamLimits

0x2657,	// (0x00011783) popup_call_status_window

0xa709,	// (0x00019835) stacon_top_pane

0xa711,	// (0x0001983d) status_pane_ParamLimits

0xa711,	// (0x0001983d) status_pane

0xa726,	// (0x00019852) status_small_pane

0xa72e,	// (0x0001985a) control_pane

0x985a,	// (0x00018986) stacon_bottom_pane

0xa736,	// (0x00019862) list_single_mce_smart_pane_t1_ParamLimits

0xa736,	// (0x00019862) list_single_mce_smart_pane_t1

0xa749,	// (0x00019875) list_single_mce_smart_pane_t2_ParamLimits

0xa749,	// (0x00019875) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0001e4fb) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0001e4fb) list_single_mce_smart_pane_t

0x269e,	// (0x000117ca) compass_pane

0x26a7,	// (0x000117d3) main_location2_pane_t1

0x26b9,	// (0x000117e5) main_location2_pane_t2

0x26cb,	// (0x000117f7) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0001e500) main_location2_pane_t

0xa768,	// (0x00019894) compass_pane_g1_ParamLimits

0xa768,	// (0x00019894) compass_pane_g1

0x2711,	// (0x0001183d) compass_pane_t1

0x2720,	// (0x0001184c) compass_pane_t2

0x0005,

0xf3dd,	// (0x0001e509) compass_pane_t

0x2767,	// (0x00011893) text_secondary_cp61

0xa7e6,	// (0x00019912) navi_pane_cams_g5

0xa862,	// (0x0001998e) navi_pane_im_t1

0xa870,	// (0x0001999c) navi_pane_mp_g1_ParamLimits

0xa870,	// (0x0001999c) navi_pane_mp_g1

0xa884,	// (0x000199b0) navi_pane_mp_g2_ParamLimits

0xa884,	// (0x000199b0) navi_pane_mp_g2

0xa890,	// (0x000199bc) navi_pane_mp_g3_ParamLimits

0xa890,	// (0x000199bc) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0001e51d) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0001e51d) navi_pane_mp_g

0xa89c,	// (0x000199c8) navi_pane_mp_t1

0xa8aa,	// (0x000199d6) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0001e524) navi_pane_mp_t

0xa915,	// (0x00019a41) navi_pane_vt_g1

0xa89c,	// (0x000199c8) navi_pane_vt_t1

0xa91d,	// (0x00019a49) navi_slider_pane

0xa92d,	// (0x00019a59) zooming_pane

0xa935,	// (0x00019a61) navi_slider_pane_g1

0xa93e,	// (0x00019a6a) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0001e52b) navi_slider_pane_g

0xa96b,	// (0x00019a97) aid_levels_zoom

0xa973,	// (0x00019a9f) zooming_pane_g1

0xa97b,	// (0x00019aa7) zooming_pane_g2

0xa97b,	// (0x00019aa7) zooming_pane_g3

0x0002,

0xf40e,	// (0x0001e53a) zooming_pane_g

0xa983,	// (0x00019aaf) level_10_zoom

0xa98c,	// (0x00019ab8) level_11_zoom

0xa995,	// (0x00019ac1) level_1_zoom

0xa99e,	// (0x00019aca) level_2_zoom

0xa9a7,	// (0x00019ad3) level_3_zoom

0xa9b0,	// (0x00019adc) level_4_zoom

0xa9b9,	// (0x00019ae5) level_5_zoom

0xa9c2,	// (0x00019aee) level_6_zoom

0xa9cb,	// (0x00019af7) level_7_zoom

0xa9d4,	// (0x00019b00) level_8_zoom

0xa9dd,	// (0x00019b09) level_9_zoom

0xa9ee,	// (0x00019b1a) popup_phob_thumbnail_window_g1

0xa9f6,	// (0x00019b22) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0001e541) popup_phob_thumbnail_window_g

0xbd74,	// (0x0001aea0) level_1_location

0xbd7c,	// (0x0001aea8) level_2_location

0xbd84,	// (0x0001aeb0) level_3_location

0xbd8c,	// (0x0001aeb8) level_4_location

0xa92d,	// (0x00019a59) level_5_location

0x27b8,	// (0x000118e4) mce_icon_pane_g1

0x27c2,	// (0x000118ee) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0001e546) mce_icon_pane_g

0x27cc,	// (0x000118f8) main_mup_pane_g1_ParamLimits

0x27cc,	// (0x000118f8) main_mup_pane_g1

0x27e2,	// (0x0001190e) main_mup_pane_g2_ParamLimits

0x27e2,	// (0x0001190e) main_mup_pane_g2

0x27fa,	// (0x00011926) main_mup_pane_g3_ParamLimits

0x27fa,	// (0x00011926) main_mup_pane_g3

0x2812,	// (0x0001193e) main_mup_pane_g4_ParamLimits

0x2812,	// (0x0001193e) main_mup_pane_g4

0x282a,	// (0x00011956) main_mup_pane_g5_ParamLimits

0x282a,	// (0x00011956) main_mup_pane_g5

0x2846,	// (0x00011972) main_mup_pane_g6_ParamLimits

0x2846,	// (0x00011972) main_mup_pane_g6

0x285e,	// (0x0001198a) main_mup_pane_g7_ParamLimits

0x285e,	// (0x0001198a) main_mup_pane_g7

0x2876,	// (0x000119a2) main_mup_pane_g8_ParamLimits

0x2876,	// (0x000119a2) main_mup_pane_g8

0x288e,	// (0x000119ba) main_mup_pane_g9_ParamLimits

0x288e,	// (0x000119ba) main_mup_pane_g9

0x28a8,	// (0x000119d4) main_mup_pane_g10_ParamLimits

0x28a8,	// (0x000119d4) main_mup_pane_g10

0x28c2,	// (0x000119ee) main_mup_pane_g11_ParamLimits

0x28c2,	// (0x000119ee) main_mup_pane_g11

0x28d6,	// (0x00011a02) main_mup_pane_g12_ParamLimits

0x28d6,	// (0x00011a02) main_mup_pane_g12

0x28ec,	// (0x00011a18) main_mup_pane_g13_ParamLimits

0x28ec,	// (0x00011a18) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0001e54b) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0001e54b) main_mup_pane_g

0x2900,	// (0x00011a2c) main_mup_pane_t1_ParamLimits

0x2900,	// (0x00011a2c) main_mup_pane_t1

0x291a,	// (0x00011a46) main_mup_pane_t2_ParamLimits

0x291a,	// (0x00011a46) main_mup_pane_t2

0x2932,	// (0x00011a5e) main_mup_pane_t3_ParamLimits

0x2932,	// (0x00011a5e) main_mup_pane_t3

0x294a,	// (0x00011a76) main_mup_pane_t4_ParamLimits

0x294a,	// (0x00011a76) main_mup_pane_t4

0x2968,	// (0x00011a94) main_mup_pane_t5_ParamLimits

0x2968,	// (0x00011a94) main_mup_pane_t5

0x297d,	// (0x00011aa9) main_mup_pane_t6_ParamLimits

0x297d,	// (0x00011aa9) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0001e566) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0001e566) main_mup_pane_t

0x298f,	// (0x00011abb) mup_progress_pane_ParamLimits

0x298f,	// (0x00011abb) mup_progress_pane

0x299b,	// (0x00011ac7) mup_visualizer_pane_ParamLimits

0x299b,	// (0x00011ac7) mup_visualizer_pane

0x29cf,	// (0x00011afb) mup_volume_pane_ParamLimits

0x29cf,	// (0x00011afb) mup_volume_pane

0xa9fe,	// (0x00019b2a) mup_visualizer_pane_g1_ParamLimits

0xa9fe,	// (0x00019b2a) mup_visualizer_pane_g1

0xa9fe,	// (0x00019b2a) mup_visualizer_pane_g2_ParamLimits

0xa9fe,	// (0x00019b2a) mup_visualizer_pane_g2

0xa768,	// (0x00019894) mup_visualizer_pane_g3_ParamLimits

0xa768,	// (0x00019894) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0001e573) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0001e573) mup_visualizer_pane_g

0x9c34,	// (0x00018d60) mup_volume_pane_g1

0xaa14,	// (0x00019b40) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0001e57a) mup_volume_pane_g

0x9c34,	// (0x00018d60) mup_progress_pane_g1

0xaa1d,	// (0x00019b49) mup_progress_pane_g2

0xaa26,	// (0x00019b52) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0001e57f) mup_progress_pane_g

0x985a,	// (0x00018986) bg_popup_window_pane_cp05

0xaa2f,	// (0x00019b5b) heading_pane_cp02_ParamLimits

0xaa2f,	// (0x00019b5b) heading_pane_cp02

0xaa49,	// (0x00019b75) list_popup_blid_pane

0xaa51,	// (0x00019b7d) list_blid_sat_info_pane_ParamLimits

0xaa51,	// (0x00019b7d) list_blid_sat_info_pane

0xaa64,	// (0x00019b90) list_blid_sat_info_pane_g1

0xaa6c,	// (0x00019b98) list_blid_sat_info_pane_t1

0x2ae5,	// (0x00011c11) mup_equalizer_pane_ParamLimits

0x2ae5,	// (0x00011c11) mup_equalizer_pane

0x2afe,	// (0x00011c2a) mup_equalizer_pane_cp1_ParamLimits

0x2afe,	// (0x00011c2a) mup_equalizer_pane_cp1

0x2b1b,	// (0x00011c47) mup_equalizer_pane_cp2_ParamLimits

0x2b1b,	// (0x00011c47) mup_equalizer_pane_cp2

0x2b38,	// (0x00011c64) mup_equalizer_pane_cp3_ParamLimits

0x2b38,	// (0x00011c64) mup_equalizer_pane_cp3

0x2b59,	// (0x00011c85) mup_equalizer_pane_cp4_ParamLimits

0x2b59,	// (0x00011c85) mup_equalizer_pane_cp4

0x2b7a,	// (0x00011ca6) mup_equalizer_pane_cp5

0x2b8e,	// (0x00011cba) mup_equalizer_pane_cp6

0x2ba2,	// (0x00011cce) mup_equalizer_pane_cp7

0xbc92,	// (0x0001adbe) bg_popup_call_poc_act_pane_g9

0xbc9a,	// (0x0001adc6) bg_popup_call_poc_act_pane_g10

0xbca2,	// (0x0001adce) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ab5,	// (0x00018be1) mup_scale_pane

0x9c34,	// (0x00018d60) mup_scale_pane_g1

0xaa7a,	// (0x00019ba6) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0001e59b) mup_scale_pane_g

0xaa9e,	// (0x00019bca) msg_data_pane

0xaaa6,	// (0x00019bd2) scroll_pane_cp017

0x2bc8,	// (0x00011cf4) bg_list_pane_cp04_ParamLimits

0x2bc8,	// (0x00011cf4) bg_list_pane_cp04

0xaaae,	// (0x00019bda) msg_data_pane_g1

0x2bec,	// (0x00011d18) msg_data_pane_g2

0x2bf4,	// (0x00011d20) msg_data_pane_g3

0x2bfc,	// (0x00011d28) msg_data_pane_g4

0x2c04,	// (0x00011d30) msg_data_pane_g5

0x2c0c,	// (0x00011d38) msg_data_pane_g6

0x2c14,	// (0x00011d40) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0001e5aa) msg_data_pane_g

0x2c1c,	// (0x00011d48) msg_text_pane_ParamLimits

0x2c1c,	// (0x00011d48) msg_text_pane

0x2c43,	// (0x00011d6f) qrid_highlight_pane_cp011_ParamLimits

0x2c43,	// (0x00011d6f) qrid_highlight_pane_cp011

0x985a,	// (0x00018986) msg_body_pane

0x985a,	// (0x00018986) msg_header_pane

0xaab6,	// (0x00019be2) input_focus_pane_cp07

0xaacb,	// (0x00019bf7) msg_header_pane_t1_ParamLimits

0xaacb,	// (0x00019bf7) msg_header_pane_t1

0xaadd,	// (0x00019c09) msg_header_pane_t2_ParamLimits

0xaadd,	// (0x00019c09) msg_header_pane_t2

0x0001,

0xf492,	// (0x0001e5be) msg_header_pane_t_ParamLimits

0xf492,	// (0x0001e5be) msg_header_pane_t

0xaaef,	// (0x00019c1b) msg_body_pane_g1

0x2c72,	// (0x00011d9e) msg_body_pane_t1_ParamLimits

0x2c72,	// (0x00011d9e) msg_body_pane_t1

0xaaf7,	// (0x00019c23) msg_body_pane_t2_ParamLimits

0xaaf7,	// (0x00019c23) msg_body_pane_t2

0xab09,	// (0x00019c35) msg_body_pane_t3_ParamLimits

0xab09,	// (0x00019c35) msg_body_pane_t3

0x0002,

0xf497,	// (0x0001e5c3) msg_body_pane_t_ParamLimits

0xf497,	// (0x0001e5c3) msg_body_pane_t

0x2cdd,	// (0x00011e09) main_viewer_pane_g1_ParamLimits

0x2cdd,	// (0x00011e09) main_viewer_pane_g1

0x2ceb,	// (0x00011e17) main_viewer_pane_g2_ParamLimits

0x2ceb,	// (0x00011e17) main_viewer_pane_g2

0x2cf9,	// (0x00011e25) main_viewer_pane_g3_ParamLimits

0x2cf9,	// (0x00011e25) main_viewer_pane_g3

0x2d08,	// (0x00011e34) main_viewer_pane_g4_ParamLimits

0x2d08,	// (0x00011e34) main_viewer_pane_g4

0xab33,	// (0x00019c5f) main_viewer_pane_g5_ParamLimits

0xab33,	// (0x00019c5f) main_viewer_pane_g5

0xab33,	// (0x00019c5f) main_viewer_pane_g7_ParamLimits

0xab33,	// (0x00019c5f) main_viewer_pane_g7

0xab45,	// (0x00019c71) main_viewer_pane_g8_ParamLimits

0xab45,	// (0x00019c71) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0001e5d3) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0001e5d3) main_viewer_pane_g

0xab5d,	// (0x00019c89) viewer_content_pane_ParamLimits

0xab5d,	// (0x00019c89) viewer_content_pane

0x2d44,	// (0x00011e70) main_postcard_pane_g1_ParamLimits

0x2d44,	// (0x00011e70) main_postcard_pane_g1

0x2d5a,	// (0x00011e86) main_postcard_pane_g2_ParamLimits

0x2d5a,	// (0x00011e86) main_postcard_pane_g2

0x2d70,	// (0x00011e9c) main_postcard_pane_g3_ParamLimits

0x2d70,	// (0x00011e9c) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0001e5e4) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0001e5e4) main_postcard_pane_g

0x2d87,	// (0x00011eb3) main_postcard_pane_g4

0xbec8,	// (0x0001aff4) smil_status_volume_pane_g2

0x2dca,	// (0x00011ef6) postcard_pane_ParamLimits

0x2dca,	// (0x00011ef6) postcard_pane

0xab6b,	// (0x00019c97) postcard_pane_g1_ParamLimits

0xab6b,	// (0x00019c97) postcard_pane_g1

0x2e0c,	// (0x00011f38) postcard_pane_g2_ParamLimits

0x2e0c,	// (0x00011f38) postcard_pane_g2

0x2e18,	// (0x00011f44) postcard_pane_g3_ParamLimits

0x2e18,	// (0x00011f44) postcard_pane_g3

0xab79,	// (0x00019ca5) postcard_pane_g4_ParamLimits

0xab79,	// (0x00019ca5) postcard_pane_g4

0x2e24,	// (0x00011f50) postcard_pane_g5_ParamLimits

0x2e24,	// (0x00011f50) postcard_pane_g5

0x2e39,	// (0x00011f65) postcard_pane_g6_ParamLimits

0x2e39,	// (0x00011f65) postcard_pane_g6

0xab6b,	// (0x00019c97) postcard_pane_g7_ParamLimits

0xab6b,	// (0x00019c97) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0001e5f1) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0001e5f1) postcard_pane_g

0x2e4d,	// (0x00011f79) main_mp2_pane_g1_ParamLimits

0x2e4d,	// (0x00011f79) main_mp2_pane_g1

0x2e59,	// (0x00011f85) main_mp2_pane_g2_ParamLimits

0x2e59,	// (0x00011f85) main_mp2_pane_g2

0x2e65,	// (0x00011f91) main_mp2_pane_g3_ParamLimits

0x2e65,	// (0x00011f91) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0001e600) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0001e600) main_mp2_pane_g

0x2e71,	// (0x00011f9d) main_mp2_pane_t1_ParamLimits

0x2e71,	// (0x00011f9d) main_mp2_pane_t1

0x2e86,	// (0x00011fb2) main_mp2_pane_t2_ParamLimits

0x2e86,	// (0x00011fb2) main_mp2_pane_t2

0x2e98,	// (0x00011fc4) main_mp2_pane_t3_ParamLimits

0x2e98,	// (0x00011fc4) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0001e607) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0001e607) main_mp2_pane_t

0xab87,	// (0x00019cb3) pec_content_pane_ParamLimits

0xab87,	// (0x00019cb3) pec_content_pane

0x9fb9,	// (0x000190e5) scroll_pane_cp015

0xab99,	// (0x00019cc5) pec_attribute_pane_ParamLimits

0xab99,	// (0x00019cc5) pec_attribute_pane

0x2eaa,	// (0x00011fd6) pec_content_pane_g1_ParamLimits

0x2eaa,	// (0x00011fd6) pec_content_pane_g1

0xaba9,	// (0x00019cd5) pec_content_pane_t1_ParamLimits

0xaba9,	// (0x00019cd5) pec_content_pane_t1

0xabbb,	// (0x00019ce7) pec_content_pane_t2_ParamLimits

0xabbb,	// (0x00019ce7) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0001e60e) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0001e60e) pec_content_pane_t

0x2eb6,	// (0x00011fe2) list_single_graphic_pane_cp01_ParamLimits

0x2eb6,	// (0x00011fe2) list_single_graphic_pane_cp01

0x9ab5,	// (0x00018be1) bg_popup_sub_pane_cp04

0xabcd,	// (0x00019cf9) popup_mup_playback_window_g1

0xabd9,	// (0x00019d05) popup_mup_playback_window_t1

0xabee,	// (0x00019d1a) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0001e613) popup_mup_playback_window_t

0xac25,	// (0x00019d51) main_image_pane_g1_ParamLimits

0xac25,	// (0x00019d51) main_image_pane_g1

0xac68,	// (0x00019d94) scroll_pane_cp018_ParamLimits

0xac68,	// (0x00019d94) scroll_pane_cp018

0xac80,	// (0x00019dac) scroll_pane_cp016_ParamLimits

0xac80,	// (0x00019dac) scroll_pane_cp016

0x2f85,	// (0x000120b1) smil2_image_pane_ParamLimits

0x2f85,	// (0x000120b1) smil2_image_pane

0x2fb9,	// (0x000120e5) smil2_root_pane_ParamLimits

0x2fb9,	// (0x000120e5) smil2_root_pane

0x2ff1,	// (0x0001211d) smil2_text_pane_ParamLimits

0x2ff1,	// (0x0001211d) smil2_text_pane

0x985a,	// (0x00018986) bg_list_pane_cp06

0xacbc,	// (0x00019de8) grid_radio_pane

0x985a,	// (0x00018986) bg_popup_window_pane_cp06

0xacc4,	// (0x00019df0) main_fmradio_pane_t1

0xa5ab,	// (0x000196d7) heading_pane_cp04

0xacd2,	// (0x00019dfe) main_fmradio_pane_t2

0xbcaa,	// (0x0001add6) popup_cale_lunar_info_window_g1

0xace0,	// (0x00019e0c) main_fmradio_pane_t3

0xbcb2,	// (0x0001adde) popup_cale_lunar_info_window_g2

0xacee,	// (0x00019e1a) main_fmradio_pane_t4

0x0001,

0xacfc,	// (0x00019e28) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0001e6ee) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0001e628) main_fmradio_pane_t

0xad0a,	// (0x00019e36) wait_bar_pane_cp03

0xad12,	// (0x00019e3e) cell_fmradio_pane_ParamLimits

0xad12,	// (0x00019e3e) cell_fmradio_pane

0xab6b,	// (0x00019c97) cell_fmradio_pane_g1_ParamLimits

0xab6b,	// (0x00019c97) cell_fmradio_pane_g1

0x985a,	// (0x00018986) grid_highlight_pane_cp011

0xad25,	// (0x00019e51) poc_content_pane_ParamLimits

0xad25,	// (0x00019e51) poc_content_pane

0xad37,	// (0x00019e63) scroll_pane_cp019

0x3071,	// (0x0001219d) popup_call_poc_act_window_ParamLimits

0x3071,	// (0x0001219d) popup_call_poc_act_window

0x3095,	// (0x000121c1) popup_call_poc_inact_window_ParamLimits

0x3095,	// (0x000121c1) popup_call_poc_inact_window

0xf599,	// (0x0001e6c5) bg_popup_call_poc_act_pane_g

0xbc22,	// (0x0001ad4e) bg_popup_call_poc_inact_pane_g1

0xbc2a,	// (0x0001ad56) bg_popup_call_poc_inact_pane_g2

0xad3f,	// (0x00019e6b) popup_call_poc_act_window_g2

0xbc32,	// (0x0001ad5e) bg_popup_call_poc_inact_pane_g3

0xbc3a,	// (0x0001ad66) bg_popup_call_poc_inact_pane_g4

0xbc42,	// (0x0001ad6e) bg_popup_call_poc_inact_pane_g5

0xad47,	// (0x00019e73) popup_call_poc_act_window_t1_ParamLimits

0xad47,	// (0x00019e73) popup_call_poc_act_window_t1

0xad6f,	// (0x00019e9b) popup_call_poc_act_window_t2_ParamLimits

0xad6f,	// (0x00019e9b) popup_call_poc_act_window_t2

0xad97,	// (0x00019ec3) popup_call_poc_act_window_t3_ParamLimits

0xad97,	// (0x00019ec3) popup_call_poc_act_window_t3

0xadbf,	// (0x00019eeb) popup_call_poc_act_window_t4_ParamLimits

0xadbf,	// (0x00019eeb) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0001e633) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0001e633) popup_call_poc_act_window_t

0xbc4a,	// (0x0001ad76) bg_popup_call_poc_inact_pane_g6

0xbc52,	// (0x0001ad7e) bg_popup_call_poc_inact_pane_g7

0xbc5a,	// (0x0001ad86) bg_popup_call_poc_inact_pane_g8

0xadd1,	// (0x00019efd) popup_call_poc_inact_window_g2

0xbc62,	// (0x0001ad8e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0001e6b2) bg_popup_call_poc_inact_pane_g

0xadd9,	// (0x00019f05) popup_call_poc_inact_window_t1_ParamLimits

0xadd9,	// (0x00019f05) popup_call_poc_inact_window_t1

0xadee,	// (0x00019f1a) popup_call_poc_inact_window_t2_ParamLimits

0xadee,	// (0x00019f1a) popup_call_poc_inact_window_t2

0xae03,	// (0x00019f2f) popup_call_poc_inact_window_t3_ParamLimits

0xae03,	// (0x00019f2f) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0001e63c) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0001e63c) popup_call_poc_inact_window_t

0xbe3b,	// (0x0001af67) context_pane_ParamLimits

0x38b6,	// (0x000129e2) signal_pane_ParamLimits

0xa92d,	// (0x00019a59) main_call2_pane

0xbe14,	// (0x0001af40) popup_phob_thumbnail2_window_ParamLimits

0xbe14,	// (0x0001af40) popup_phob_thumbnail2_window

0xab1b,	// (0x00019c47) aid_hotspot_pointer_arrow_pane

0xab23,	// (0x00019c4f) aid_hotspot_pointer_hand_pane

0x33e0,	// (0x0001250c) phob_pre_status_pane_g5

0x0ef0,	// (0x0001001c) cams_zoom_pane_ParamLimits

0x0eff,	// (0x0001002b) image_vga_pane_ParamLimits

0x0f19,	// (0x00010045) main_camera_pane_g1_ParamLimits

0x0f2b,	// (0x00010057) main_camera_pane_g2_ParamLimits

0x0f3b,	// (0x00010067) main_camera_pane_g3_ParamLimits

0x0f4d,	// (0x00010079) main_camera_pane_g4_ParamLimits

0x0f5f,	// (0x0001008b) main_camera_pane_g5_ParamLimits

0x0f71,	// (0x0001009d) main_camera_pane_g6_ParamLimits

0x0f83,	// (0x000100af) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0001e33b) main_camera_pane_g_ParamLimits

0x0f95,	// (0x000100c1) main_camera_pane_t1_ParamLimits

0x0fab,	// (0x000100d7) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0001e34c) main_camera_pane_t_ParamLimits

0x9ab5,	// (0x00018be1) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ab5,	// (0x00018be1) bg_popup_preview_window_pane_cp01

0xae18,	// (0x00019f44) popup_phob_thumbnail2_window_g1_ParamLimits

0xae18,	// (0x00019f44) popup_phob_thumbnail2_window_g1

0x985a,	// (0x00018986) call2_cli_visual_pane

0x30c9,	// (0x000121f5) popup_call2_audio_conf_window_ParamLimits

0x30c9,	// (0x000121f5) popup_call2_audio_conf_window

0x30e9,	// (0x00012215) popup_call2_audio_first_window_ParamLimits

0x30e9,	// (0x00012215) popup_call2_audio_first_window

0x317f,	// (0x000122ab) popup_call2_audio_in_window_ParamLimits

0x317f,	// (0x000122ab) popup_call2_audio_in_window

0x31c7,	// (0x000122f3) popup_call2_audio_out_window_ParamLimits

0x31c7,	// (0x000122f3) popup_call2_audio_out_window

0x3231,	// (0x0001235d) popup_call2_audio_second_window_ParamLimits

0x3231,	// (0x0001235d) popup_call2_audio_second_window

0x3297,	// (0x000123c3) popup_call2_audio_wait_window_ParamLimits

0x3297,	// (0x000123c3) popup_call2_audio_wait_window

0x985a,	// (0x00018986) bg_popup_call2_act_pane_cp03

0x9a97,	// (0x00018bc3) list_conf_pane_cp

0xae24,	// (0x00019f50) popup_call2_audio_conf_window_t1

0xae32,	// (0x00019f5e) list_single_graphic_popup_conf2_pane_ParamLimits

0xae32,	// (0x00019f5e) list_single_graphic_popup_conf2_pane

0xa63f,	// (0x0001976b) list_highlight_pane_cp04

0xae45,	// (0x00019f71) list_single_graphic_popup_conf2_pane_g1

0xa650,	// (0x0001977c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0001e643) list_single_graphic_popup_conf2_pane_g

0xae4f,	// (0x00019f7b) list_single_graphic_popup_conf2_pane_t1

0xae5d,	// (0x00019f89) bg_popup_call2_act_pane_cp01_ParamLimits

0xae5d,	// (0x00019f89) bg_popup_call2_act_pane_cp01

0xaee7,	// (0x0001a013) call_type_pane_cp05_ParamLimits

0xaee7,	// (0x0001a013) call_type_pane_cp05

0xaf3b,	// (0x0001a067) popup_call2_audio_second_window_g1_ParamLimits

0xaf3b,	// (0x0001a067) popup_call2_audio_second_window_g1

0xaf8f,	// (0x0001a0bb) popup_call2_audio_second_window_g2_ParamLimits

0xaf8f,	// (0x0001a0bb) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0001e648) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0001e648) popup_call2_audio_second_window_g

0xaff4,	// (0x0001a120) popup_call2_audio_second_window_t1_ParamLimits

0xaff4,	// (0x0001a120) popup_call2_audio_second_window_t1

0xb0af,	// (0x0001a1db) popup_call2_audio_second_window_t2_ParamLimits

0xb0af,	// (0x0001a1db) popup_call2_audio_second_window_t2

0xb102,	// (0x0001a22e) popup_call2_audio_second_window_t3_ParamLimits

0xb102,	// (0x0001a22e) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0001e64f) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0001e64f) popup_call2_audio_second_window_t

0x985a,	// (0x00018986) bg_popup_call2_in_pane_cp02

0x9864,	// (0x00018990) call_type_pane_cp04

0x986c,	// (0x00018998) popup_call2_audio_wait_window_g1

0x9874,	// (0x000189a0) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0001e228) popup_call2_audio_wait_window_g

0x987c,	// (0x000189a8) popup_call2_audio_wait_window_t3

0xb1f5,	// (0x0001a321) bg_popup_call2_act_pane_ParamLimits

0xb1f5,	// (0x0001a321) bg_popup_call2_act_pane

0xb2b5,	// (0x0001a3e1) call_type_pane_cp03_ParamLimits

0xb2b5,	// (0x0001a3e1) call_type_pane_cp03

0xb319,	// (0x0001a445) popup_call2_audio_first_window_g1_ParamLimits

0xb319,	// (0x0001a445) popup_call2_audio_first_window_g1

0xb389,	// (0x0001a4b5) popup_call2_audio_first_window_g2_ParamLimits

0xb389,	// (0x0001a4b5) popup_call2_audio_first_window_g2

0xa9fe,	// (0x00019b2a) popup_call2_audio_first_window_g3_ParamLimits

0xa9fe,	// (0x00019b2a) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0001e658) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0001e658) popup_call2_audio_first_window_g

0xb467,	// (0x0001a593) popup_call2_audio_first_window_t1_ParamLimits

0xb467,	// (0x0001a593) popup_call2_audio_first_window_t1

0xb56a,	// (0x0001a696) popup_call2_audio_first_window_t4_ParamLimits

0xb56a,	// (0x0001a696) popup_call2_audio_first_window_t4

0xb64d,	// (0x0001a779) popup_call2_audio_first_window_t5_ParamLimits

0xb64d,	// (0x0001a779) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0001e663) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0001e663) popup_call2_audio_first_window_t

0x9aad,	// (0x00018bd9) bg_popup_call2_act_pane_g1

0xbcba,	// (0x0001ade6) popup_cale_lunar_info_window_t1

0xbcc8,	// (0x0001adf4) popup_cale_lunar_info_window_t2

0xbcd6,	// (0x0001ae02) popup_cale_lunar_info_window_t3

0x985a,	// (0x00018986) bg_popup_call2_bubble_pane

0xb74e,	// (0x0001a87a) bg_popup_call2_in_pane_cp01_ParamLimits

0xb74e,	// (0x0001a87a) bg_popup_call2_in_pane_cp01

0x9536,	// (0x00018662) call_type_pane_cp02

0xb796,	// (0x0001a8c2) popup_call2_audio_out_window_g1_ParamLimits

0xb796,	// (0x0001a8c2) popup_call2_audio_out_window_g1

0xb7c2,	// (0x0001a8ee) popup_call2_audio_out_window_g2_ParamLimits

0xb7c2,	// (0x0001a8ee) popup_call2_audio_out_window_g2

0xb7ea,	// (0x0001a916) popup_call2_audio_out_window_g3_ParamLimits

0xb7ea,	// (0x0001a916) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0001e66c) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0001e66c) popup_call2_audio_out_window_g

0xb825,	// (0x0001a951) popup_call2_audio_out_window_t1_ParamLimits

0xb825,	// (0x0001a951) popup_call2_audio_out_window_t1

0xb884,	// (0x0001a9b0) popup_call2_audio_out_window_t2_ParamLimits

0xb884,	// (0x0001a9b0) popup_call2_audio_out_window_t2

0xb8d8,	// (0x0001aa04) popup_call2_audio_out_window_t3_ParamLimits

0xb8d8,	// (0x0001aa04) popup_call2_audio_out_window_t3

0xb8ee,	// (0x0001aa1a) popup_call2_audio_out_window_t4_ParamLimits

0xb8ee,	// (0x0001aa1a) popup_call2_audio_out_window_t4

0xb904,	// (0x0001aa30) popup_call2_audio_out_window_t5_ParamLimits

0xb904,	// (0x0001aa30) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0001e675) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0001e675) popup_call2_audio_out_window_t

0xb968,	// (0x0001aa94) bg_popup_call2_in_pane_ParamLimits

0xb968,	// (0x0001aa94) bg_popup_call2_in_pane

0xb9c4,	// (0x0001aaf0) popup_call2_audio_in_window_g1_ParamLimits

0xb9c4,	// (0x0001aaf0) popup_call2_audio_in_window_g1

0xb9fc,	// (0x0001ab28) popup_call2_audio_in_window_g2_ParamLimits

0xb9fc,	// (0x0001ab28) popup_call2_audio_in_window_g2

0xba34,	// (0x0001ab60) popup_call2_audio_in_window_g3_ParamLimits

0xba34,	// (0x0001ab60) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0001e682) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0001e682) popup_call2_audio_in_window_g

0xba8c,	// (0x0001abb8) popup_call2_audio_in_window_t1_ParamLimits

0xba8c,	// (0x0001abb8) popup_call2_audio_in_window_t1

0xbb0c,	// (0x0001ac38) popup_call2_audio_in_window_t2_ParamLimits

0xbb0c,	// (0x0001ac38) popup_call2_audio_in_window_t2

0xbb8c,	// (0x0001acb8) popup_call2_audio_in_window_t3_ParamLimits

0xbb8c,	// (0x0001acb8) popup_call2_audio_in_window_t3

0xbba6,	// (0x0001acd2) popup_call2_audio_in_window_t4_ParamLimits

0xbba6,	// (0x0001acd2) popup_call2_audio_in_window_t4

0xbbb8,	// (0x0001ace4) popup_call2_audio_in_window_t5_ParamLimits

0xbbb8,	// (0x0001ace4) popup_call2_audio_in_window_t5

0xbbcd,	// (0x0001acf9) popup_call2_audio_in_window_t6_ParamLimits

0xbbcd,	// (0x0001acf9) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0001e68b) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0001e68b) popup_call2_audio_in_window_t

0x9aad,	// (0x00018bd9) bg_popup_call2_in_pane_g1

0xbce4,	// (0x0001ae10) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0001e6f3) popup_cale_lunar_info_window_t

0x9ab5,	// (0x00018be1) bg_popup_call2_rect_pane_ParamLimits

0x9ab5,	// (0x00018be1) bg_popup_call2_rect_pane

0x985a,	// (0x00018986) call2_cli_visual_graphic_pane

0x985a,	// (0x00018986) call2_cli_visual_text_pane

0xbedb,	// (0x0001b007) smil_status_volume_pane_g3

0x0002,

0x9c34,	// (0x00018d60) call2_cli_visual_graphic_pane_g1

0x9c34,	// (0x00018d60) call2_cli_visual_graphic_pane_g2

0x9c34,	// (0x00018d60) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0001e698) call2_cli_visual_graphic_pane_g

0xbbe2,	// (0x0001ad0e) bg_popup_call2_rect_pane_g1

0x9cdc,	// (0x00018e08) bg_popup_call2_rect_pane_g2

0xbbea,	// (0x0001ad16) bg_popup_call2_rect_pane_g3

0xbbf2,	// (0x0001ad1e) bg_popup_call2_rect_pane_g4

0xbbfa,	// (0x0001ad26) bg_popup_call2_rect_pane_g5

0xbc02,	// (0x0001ad2e) bg_popup_call2_rect_pane_g6

0xbc0a,	// (0x0001ad36) bg_popup_call2_rect_pane_g7

0xbc12,	// (0x0001ad3e) bg_popup_call2_rect_pane_g8

0xbc1a,	// (0x0001ad46) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0001e69f) bg_popup_call2_rect_pane_g

0xbc22,	// (0x0001ad4e) bg_popup_call2_bubble_pane_g1

0xbc2a,	// (0x0001ad56) bg_popup_call2_bubble_pane_g2

0xbc32,	// (0x0001ad5e) bg_popup_call2_bubble_pane_g3

0xbc3a,	// (0x0001ad66) bg_popup_call2_bubble_pane_g4

0xbc42,	// (0x0001ad6e) bg_popup_call2_bubble_pane_g5

0xbc4a,	// (0x0001ad76) bg_popup_call2_bubble_pane_g6

0xbc52,	// (0x0001ad7e) bg_popup_call2_bubble_pane_g7

0xbc5a,	// (0x0001ad86) bg_popup_call2_bubble_pane_g8

0xbc62,	// (0x0001ad8e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0001e6b2) bg_popup_call2_bubble_pane_g

0x0845,	// (0x0000f971) aid_cale_week_size_cell_pane

0x0fc3,	// (0x000100ef) aid_cams_cif_uncrop_pane_ParamLimits

0x0fc3,	// (0x000100ef) aid_cams_cif_uncrop_pane

0x1178,	// (0x000102a4) aid_cams_size_cell_ParamLimits

0x1178,	// (0x000102a4) aid_cams_size_cell

0x118c,	// (0x000102b8) grid_cams_pane_ParamLimits

0x11a6,	// (0x000102d2) linegrid_cams_pane_ParamLimits

0x13a2,	// (0x000104ce) call_video_pane_t1

0x13c0,	// (0x000104ec) call_video_pane_t2

0x0001,

0xf273,	// (0x0001e39f) call_video_pane_t

0x17ef,	// (0x0001091b) aid_cale_month_size_cell_pane_ParamLimits

0x17ef,	// (0x0001091b) aid_cale_month_size_cell_pane

0xf610,	// (0x0001e73c) smil_status_volume_pane_g

0xbee8,	// (0x0001b014) volume_smil_pane_ParamLimits

0x93db,	// (0x00018507) aid_popup2_width_pane

0x079c,	// (0x0000f8c8) cell_qdial_pane_g4_ParamLimits

0x079c,	// (0x0000f8c8) cell_qdial_pane_g4

0x26f1,	// (0x0001181d) aid_blid_cardinal_pane_ParamLimits

0x26fd,	// (0x00011829) aid_blid_destination_pane_ParamLimits

0x26fd,	// (0x00011829) aid_blid_destination_pane

0x9ab5,	// (0x00018be1) bg_popup_call_poc_act_pane_ParamLimits

0x9ab5,	// (0x00018be1) bg_popup_call_poc_act_pane

0x9ab5,	// (0x00018be1) bg_popup_call_poc_inact_pane_ParamLimits

0x9ab5,	// (0x00018be1) bg_popup_call_poc_inact_pane

0xbc6a,	// (0x0001ad96) bg_popup_call_poc_act_pane_g1

0xbc72,	// (0x0001ad9e) bg_popup_call_poc_act_pane_g2

0xbc7a,	// (0x0001ada6) bg_popup_call_poc_act_pane_g3

0xbc3a,	// (0x0001ad66) bg_popup_call_poc_act_pane_g4

0xbc42,	// (0x0001ad6e) bg_popup_call_poc_act_pane_g5

0xbc82,	// (0x0001adae) bg_popup_call_poc_act_pane_g6

0xbc52,	// (0x0001ad7e) bg_popup_call_poc_act_pane_g7

0xbc8a,	// (0x0001adb6) bg_popup_call_poc_act_pane_g8

0x985a,	// (0x00018986) main_usb_pane

0xbdef,	// (0x0001af1b) popup_cale_lunar_info_window

0x168a,	// (0x000107b6) im_reading_pane_t1_ParamLimits

0x9f11,	// (0x0001903d) list_im_pane_ParamLimits

0x9f22,	// (0x0001904e) scroll_pane_cp07_ParamLimits

0x985a,	// (0x00018986) grid_highlight_pane_cp012

0x9ab5,	// (0x00018be1) mup_scale_pane_ParamLimits

0xab6b,	// (0x00019c97) main_usb_pane_g1_ParamLimits

0xab6b,	// (0x00019c97) main_usb_pane_g1

0x32f5,	// (0x00012421) main_usb_pane_g2_ParamLimits

0x32f5,	// (0x00012421) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0001e6dc) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0001e6dc) main_usb_pane_g

0x330b,	// (0x00012437) main_usb_pane_t1_ParamLimits

0x330b,	// (0x00012437) main_usb_pane_t1

0x331d,	// (0x00012449) main_usb_pane_t2_ParamLimits

0x331d,	// (0x00012449) main_usb_pane_t2

0x332f,	// (0x0001245b) main_usb_pane_t3_ParamLimits

0x332f,	// (0x0001245b) main_usb_pane_t3

0x3341,	// (0x0001246d) main_usb_pane_t4_ParamLimits

0x3341,	// (0x0001246d) main_usb_pane_t4

0x3353,	// (0x0001247f) main_usb_pane_t5_ParamLimits

0x3353,	// (0x0001247f) main_usb_pane_t5

0x3365,	// (0x00012491) main_usb_pane_t6_ParamLimits

0x3365,	// (0x00012491) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0001e6e1) main_usb_pane_t_ParamLimits

0x269e,	// (0x000117ca) aid_text_placing

0x26a7,	// (0x000117d3) main_location2_pane_t1_ParamLimits

0x26b9,	// (0x000117e5) main_location2_pane_t2_ParamLimits

0x26cb,	// (0x000117f7) main_location2_pane_t3_ParamLimits

0x26df,	// (0x0001180b) main_location2_pane_t4_ParamLimits

0x26df,	// (0x0001180b) main_location2_pane_t4

0xf3d4,	// (0x0001e500) main_location2_pane_t_ParamLimits

0x9af1,	// (0x00018c1d) find_pinb_pane_g2_ParamLimits

0x9af1,	// (0x00018c1d) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0001e24e) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0001e24e) find_pinb_pane_g

0x9afd,	// (0x00018c29) find_pinb_pane_t1_ParamLimits

0x9b0f,	// (0x00018c3b) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0001e253) find_pinb_pane_t_ParamLimits

0x985a,	// (0x00018986) main_call3_pane

0x1cd2,	// (0x00010dfe) cale_month_day_heading_pane_t1_ParamLimits

0x1d58,	// (0x00010e84) cale_month_day_heading_pane_t2_ParamLimits

0x1de9,	// (0x00010f15) cale_month_day_heading_pane_t3_ParamLimits

0x1e7a,	// (0x00010fa6) cale_month_day_heading_pane_t4_ParamLimits

0x1f13,	// (0x0001103f) cale_month_day_heading_pane_t5_ParamLimits

0x1fb4,	// (0x000110e0) cale_month_day_heading_pane_t6_ParamLimits

0x2055,	// (0x00011181) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0001e3d7) cale_month_day_heading_pane_t_ParamLimits

0xa178,	// (0x000192a4) smil_status_volume_pane

0x2de8,	// (0x00011f14) postcard_address_pane_ParamLimits

0x2de8,	// (0x00011f14) postcard_address_pane

0x2dfa,	// (0x00011f26) postcard_message_pane_ParamLimits

0x2dfa,	// (0x00011f26) postcard_message_pane

0x32d1,	// (0x000123fd) call2_cli_visual_pane_t1_ParamLimits

0x32d1,	// (0x000123fd) call2_cli_visual_pane_t1

0x3ae5,	// (0x00012c11) postcard_message_pane_t1_ParamLimits

0x3ae5,	// (0x00012c11) postcard_message_pane_t1

0x3ace,	// (0x00012bfa) postcard_address_pane_t1_ParamLimits

0x3ace,	// (0x00012bfa) postcard_address_pane_t1

0x3aba,	// (0x00012be6) popup_call3_audio_in_window_ParamLimits

0x3aba,	// (0x00012be6) popup_call3_audio_in_window

0x3947,	// (0x00012a73) bg_popup_call3_in_pane_ParamLimits

0x3947,	// (0x00012a73) bg_popup_call3_in_pane

0x39bb,	// (0x00012ae7) popup_call3_audio_in_window_g1_ParamLimits

0x39bb,	// (0x00012ae7) popup_call3_audio_in_window_g1

0x39db,	// (0x00012b07) popup_call3_audio_in_window_g2_ParamLimits

0x39db,	// (0x00012b07) popup_call3_audio_in_window_g2

0x39fb,	// (0x00012b27) popup_call3_audio_in_window_g3_ParamLimits

0x39fb,	// (0x00012b27) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0001e743) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0001e743) popup_call3_audio_in_window_g

0x3a2c,	// (0x00012b58) popup_call3_audio_in_window_t1_ParamLimits

0x3a2c,	// (0x00012b58) popup_call3_audio_in_window_t1

0x3a6a,	// (0x00012b96) popup_call3_audio_in_window_t2_ParamLimits

0x3a6a,	// (0x00012b96) popup_call3_audio_in_window_t2

0x3aa8,	// (0x00012bd4) popup_call3_audio_in_window_t3_ParamLimits

0x3aa8,	// (0x00012bd4) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0001e74c) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0001e74c) popup_call3_audio_in_window_t

0xa92d,	// (0x00019a59) bg_popup_call3_rect_pane

0xbbe2,	// (0x0001ad0e) bg_popup_call3_rect_pane_g1

0x9cdc,	// (0x00018e08) bg_popup_call3_rect_pane_g2

0xbbea,	// (0x0001ad16) bg_popup_call3_rect_pane_g3

0xbbf2,	// (0x0001ad1e) bg_popup_call3_rect_pane_g4

0xbbfa,	// (0x0001ad26) bg_popup_call3_rect_pane_g5

0xbc02,	// (0x0001ad2e) bg_popup_call3_rect_pane_g6

0xbc0a,	// (0x0001ad36) bg_popup_call3_rect_pane_g7

0x29e5,	// (0x00011b11) mup_visualizer_osc_pane

0xaa0c,	// (0x00019b38) mup_visualizer_spec_pane

0x3977,	// (0x00012aa3) call3_video_qcif_pane_ParamLimits

0x3977,	// (0x00012aa3) call3_video_qcif_pane

0x3988,	// (0x00012ab4) call3_video_qcif_uncrop_pane_ParamLimits

0x3988,	// (0x00012ab4) call3_video_qcif_uncrop_pane

0x3996,	// (0x00012ac2) call3_video_subqcif_pane_ParamLimits

0x3996,	// (0x00012ac2) call3_video_subqcif_pane

0x39aa,	// (0x00012ad6) call3_video_subqcif_uncrop_pane_ParamLimits

0x39aa,	// (0x00012ad6) call3_video_subqcif_uncrop_pane

0x3a1b,	// (0x00012b47) popup_call3_audio_in_window_g4_ParamLimits

0x3a1b,	// (0x00012b47) popup_call3_audio_in_window_g4

0x3936,	// (0x00012a62) mup_spec_half_pane

0x393f,	// (0x00012a6b) mup_spec_half_pane_cp

0xbe9b,	// (0x0001afc7) mup_osc_middle_pane

0xbea4,	// (0x0001afd0) mup_visualizer_osc_pane_g1

0x3916,	// (0x00012a42) mup_spec_bar_pane_ParamLimits

0x3916,	// (0x00012a42) mup_spec_bar_pane

0xbe88,	// (0x0001afb4) mup_spec_bar_pane_g1

0xbe92,	// (0x0001afbe) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0001e737) mup_spec_bar_pane_g

0x0845,	// (0x0000f971) aid_cale_week_size_cell_pane_ParamLimits

0x085f,	// (0x0000f98b) bg_cale_heading_pane_ParamLimits

0x9d61,	// (0x00018e8d) bg_cale_pane_cp01_ParamLimits

0x087d,	// (0x0000f9a9) cale_week_corner_pane_ParamLimits

0x089c,	// (0x0000f9c8) cale_week_day_heading_pane_ParamLimits

0x08bf,	// (0x0000f9eb) cale_week_scroll_pane_g1_ParamLimits

0x08d8,	// (0x0000fa04) cale_week_scroll_pane_g2_ParamLimits

0x08f0,	// (0x0000fa1c) cale_week_scroll_pane_g3_ParamLimits

0x0908,	// (0x0000fa34) cale_week_scroll_pane_g4_ParamLimits

0x0920,	// (0x0000fa4c) cale_week_scroll_pane_g5_ParamLimits

0x093c,	// (0x0000fa68) cale_week_scroll_pane_g6_ParamLimits

0x095c,	// (0x0000fa88) cale_week_scroll_pane_g7_ParamLimits

0x097c,	// (0x0000faa8) cale_week_scroll_pane_g8_ParamLimits

0x09a0,	// (0x0000facc) cale_week_scroll_pane_g9_ParamLimits

0x09b8,	// (0x0000fae4) cale_week_scroll_pane_g10_ParamLimits

0x09d0,	// (0x0000fafc) cale_week_scroll_pane_g11_ParamLimits

0x09e8,	// (0x0000fb14) cale_week_scroll_pane_g12_ParamLimits

0x0a00,	// (0x0000fb2c) cale_week_scroll_pane_g13_ParamLimits

0x0a00,	// (0x0000fb2c) cale_week_scroll_pane_g14_ParamLimits

0x0a00,	// (0x0000fb2c) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0001e2df) cale_week_scroll_pane_g_ParamLimits

0x0a18,	// (0x0000fb44) cale_week_time_pane_ParamLimits

0x0a3c,	// (0x0000fb68) grid_cale_week_pane_ParamLimits

0x9d7f,	// (0x00018eab) listscroll_cale_week_pane_t1

0x9d91,	// (0x00018ebd) scroll_pane_cp08_ParamLimits

0x1850,	// (0x0001097c) cale_month_corner_pane_ParamLimits

0xa142,	// (0x0001926e) cale_month_pane_t1

0x1c70,	// (0x00010d9c) cale_month_week_pane_ParamLimits

0x250f,	// (0x0001163b) popup_call_status_window_g1_ParamLimits

0x2523,	// (0x0001164f) popup_call_status_window_g2_ParamLimits

0x2537,	// (0x00011663) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0001e487) popup_call_status_window_g_ParamLimits

0xa528,	// (0x00019654) aid_call2_pane

0x2c64,	// (0x00011d90) msg_header_pane_g1

0x2de8,	// (0x00011f14) postcard_address2_pane_ParamLimits

0x2de8,	// (0x00011f14) postcard_address2_pane

0x2dfa,	// (0x00011f26) postcard_message2_pane_ParamLimits

0x2dfa,	// (0x00011f26) postcard_message2_pane

0x38c4,	// (0x000129f0) message2_row_pane_ParamLimits

0x38c4,	// (0x000129f0) message2_row_pane

0x38e3,	// (0x00012a0f) address2_row_pane_ParamLimits

0x38e3,	// (0x00012a0f) address2_row_pane

0xbe56,	// (0x0001af82) postcard_message2_row_pane_g1

0xbe5e,	// (0x0001af8a) postcard_message2_row_pane_t1

0xbe56,	// (0x0001af82) address2_row_pane_g1

0xbe5e,	// (0x0001af8a) address2_row_pane_t1

0x0e57,	// (0x0000ff83) aid_size_cell_vorec

0x985a,	// (0x00018986) main_rss_pane

0x38f6,	// (0x00012a22) rss_list_single_pane_ParamLimits

0x38f6,	// (0x00012a22) rss_list_single_pane

0xbe6c,	// (0x0001af98) rss_list_single_pane_t1

0xbe7a,	// (0x0001afa6) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0001e732) rss_list_single_pane_t

0x985a,	// (0x00018986) main_camera2_pane

0x985a,	// (0x00018986) main_video2_pane

0x3b5e,	// (0x00012c8a) cams_zoom_pane_cp2_ParamLimits

0x3b5e,	// (0x00012c8a) cams_zoom_pane_cp2

0x3b7e,	// (0x00012caa) image2_vga_pane_ParamLimits

0x3b7e,	// (0x00012caa) image2_vga_pane

0x3bcf,	// (0x00012cfb) main_camera2_pane_g1_ParamLimits

0x3bcf,	// (0x00012cfb) main_camera2_pane_g1

0x3bef,	// (0x00012d1b) main_camera2_pane_g2_ParamLimits

0x3bef,	// (0x00012d1b) main_camera2_pane_g2

0x3c0f,	// (0x00012d3b) main_camera2_pane_g3_ParamLimits

0x3c0f,	// (0x00012d3b) main_camera2_pane_g3

0x3c2f,	// (0x00012d5b) main_camera2_pane_g4_ParamLimits

0x3c2f,	// (0x00012d5b) main_camera2_pane_g4

0x3c4f,	// (0x00012d7b) main_camera2_pane_g5_ParamLimits

0x3c4f,	// (0x00012d7b) main_camera2_pane_g5

0x3c6f,	// (0x00012d9b) main_camera2_pane_g6_ParamLimits

0x3c6f,	// (0x00012d9b) main_camera2_pane_g6

0x3c8f,	// (0x00012dbb) main_camera2_pane_g7_ParamLimits

0x3c8f,	// (0x00012dbb) main_camera2_pane_g7

0x3caf,	// (0x00012ddb) main_camera2_pane_g8_ParamLimits

0x3caf,	// (0x00012ddb) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0001e753) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0001e753) main_camera2_pane_g

0x3cef,	// (0x00012e1b) main_camera2_pane_t1_ParamLimits

0x3cef,	// (0x00012e1b) main_camera2_pane_t1

0x3d24,	// (0x00012e50) main_camera2_pane_t2_ParamLimits

0x3d24,	// (0x00012e50) main_camera2_pane_t2

0x3d4a,	// (0x00012e76) main_camera2_pane_t3_ParamLimits

0x3d4a,	// (0x00012e76) main_camera2_pane_t3

0x3da8,	// (0x00012ed4) main_camera2_pane_t4_ParamLimits

0x3da8,	// (0x00012ed4) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0001e766) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0001e766) main_camera2_pane_t

0x3e3a,	// (0x00012f66) cams_zoom_pane_cp4_ParamLimits

0x3e3a,	// (0x00012f66) cams_zoom_pane_cp4

0x3e50,	// (0x00012f7c) image2_cif_pane_ParamLimits

0x3e50,	// (0x00012f7c) image2_cif_pane

0x3e7b,	// (0x00012fa7) image2_subqcif_pane_ParamLimits

0x3e7b,	// (0x00012fa7) image2_subqcif_pane

0x3e95,	// (0x00012fc1) main_video2_pane_g1_ParamLimits

0x3e95,	// (0x00012fc1) main_video2_pane_g1

0x3eaf,	// (0x00012fdb) main_video2_pane_g2_ParamLimits

0x3eaf,	// (0x00012fdb) main_video2_pane_g2

0x3ec5,	// (0x00012ff1) main_video2_pane_g3_ParamLimits

0x3ec5,	// (0x00012ff1) main_video2_pane_g3

0x3edb,	// (0x00013007) main_video2_pane_g4_ParamLimits

0x3edb,	// (0x00013007) main_video2_pane_g4

0x3ef1,	// (0x0001301d) main_video2_pane_g5_ParamLimits

0x3ef1,	// (0x0001301d) main_video2_pane_g5

0x3f07,	// (0x00013033) main_video2_pane_g6_ParamLimits

0x3f07,	// (0x00013033) main_video2_pane_g6

0x0005,

0xf649,	// (0x0001e775) main_video2_pane_g_ParamLimits

0xf649,	// (0x0001e775) main_video2_pane_g

0x3f21,	// (0x0001304d) main_video2_pane_t1_ParamLimits

0x3f21,	// (0x0001304d) main_video2_pane_t1

0x3f45,	// (0x00013071) main_video2_pane_t2_ParamLimits

0x3f45,	// (0x00013071) main_video2_pane_t2

0x3f93,	// (0x000130bf) main_video2_pane_t3_ParamLimits

0x3f93,	// (0x000130bf) main_video2_pane_t3

0x0002,

0xf656,	// (0x0001e782) main_video2_pane_t_ParamLimits

0xf656,	// (0x0001e782) main_video2_pane_t

0x3420,	// (0x0001254c) call_muted_g2

0x0001,

0xf5f8,	// (0x0001e724) call_muted_g

0x985a,	// (0x00018986) main_mup2_pane

0x3fdb,	// (0x00013107) main_mup2_pane_g1_ParamLimits

0x3fdb,	// (0x00013107) main_mup2_pane_g1

0x3fe7,	// (0x00013113) main_mup2_pane_g2_ParamLimits

0x3fe7,	// (0x00013113) main_mup2_pane_g2

0xc00c,	// (0x0001b138) main_mup_pane_g13_cp1

0xc014,	// (0x0001b140) mup_volume_pane_cp1

0x4003,	// (0x0001312f) main_mup2_pane_g4_ParamLimits

0x4003,	// (0x0001312f) main_mup2_pane_g4

0x4015,	// (0x00013141) main_mup2_pane_g5_ParamLimits

0x4015,	// (0x00013141) main_mup2_pane_g5

0x4027,	// (0x00013153) main_mup2_pane_g6_ParamLimits

0x4027,	// (0x00013153) main_mup2_pane_g6

0x4039,	// (0x00013165) main_mup2_pane_g7_ParamLimits

0x4039,	// (0x00013165) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0001e789) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0001e789) main_mup2_pane_g

0x4051,	// (0x0001317d) main_mup2_pane_t1_ParamLimits

0x4051,	// (0x0001317d) main_mup2_pane_t1

0x4067,	// (0x00013193) main_mup2_pane_t2_ParamLimits

0x4067,	// (0x00013193) main_mup2_pane_t2

0x407d,	// (0x000131a9) main_mup2_pane_t3_ParamLimits

0x407d,	// (0x000131a9) main_mup2_pane_t3

0x4093,	// (0x000131bf) main_mup2_pane_t4_ParamLimits

0x4093,	// (0x000131bf) main_mup2_pane_t4

0x40ab,	// (0x000131d7) main_mup2_pane_t5_ParamLimits

0x40ab,	// (0x000131d7) main_mup2_pane_t5

0x40c3,	// (0x000131ef) main_mup2_pane_t6_ParamLimits

0x40c3,	// (0x000131ef) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0001e798) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0001e798) main_mup2_pane_t

0x40f3,	// (0x0001321f) mup2_visualizer_pane_ParamLimits

0x40f3,	// (0x0001321f) mup2_visualizer_pane

0x4121,	// (0x0001324d) mup_progress_pane_cp_ParamLimits

0x4121,	// (0x0001324d) mup_progress_pane_cp

0xbfee,	// (0x0001b11a) mup_volume_pane_cp_ParamLimits

0xbfee,	// (0x0001b11a) mup_volume_pane_cp

0x4135,	// (0x00013261) mup2_visualizer_pane_g1_ParamLimits

0x4135,	// (0x00013261) mup2_visualizer_pane_g1

0xbf2d,	// (0x0001b059) mup2_visualizer_pane_g2_ParamLimits

0xbf2d,	// (0x0001b059) mup2_visualizer_pane_g2

0x414c,	// (0x00013278) mup2_visualizer_pane_g3_ParamLimits

0x414c,	// (0x00013278) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0001e7a5) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0001e7a5) mup2_visualizer_pane_g

0xacb4,	// (0x00019de0) aid_size_cell_fmradio

0x35d2,	// (0x000126fe) aid_height_parent_landcape

0x9fa0,	// (0x000190cc) wml_content_pane_cp

0x9fa8,	// (0x000190d4) wml_tabs_pane

0x9fb1,	// (0x000190dd) popup_wml_miniature_window

0x9fb9,	// (0x000190e5) scroll_pane_cp021

0x9fcd,	// (0x000190f9) wml_content_pane_comp8

0x985a,	// (0x00018986) bg_popup_sub_pane_cp05

0xbf4b,	// (0x0001b077) popup_wml_miniature_window_g1

0xbf53,	// (0x0001b07f) wml_miniature_view_pane

0x4158,	// (0x00013284) aid_size_wml_view

0x4160,	// (0x0001328c) wml_miniature_view_pane_g1

0x4169,	// (0x00013295) wml_miniature_view_pane_g2

0x4172,	// (0x0001329e) wml_miniature_view_pane_g3

0x417a,	// (0x000132a6) wml_miniature_view_pane_g4

0x4182,	// (0x000132ae) wml_miniature_view_pane_g5

0x418a,	// (0x000132b6) wml_miniature_view_pane_g6

0x4192,	// (0x000132be) wml_miniature_view_pane_g7

0x419a,	// (0x000132c6) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0001e7ac) wml_miniature_view_pane_g

0xbf5b,	// (0x0001b087) background_graphic_ParamLimits

0xbf5b,	// (0x0001b087) background_graphic

0xbf67,	// (0x0001b093) wml_tabs_2_pane

0xbf70,	// (0x0001b09c) wml_tabs_3_pane_ParamLimits

0xbf70,	// (0x0001b09c) wml_tabs_3_pane

0xbf82,	// (0x0001b0ae) wml_tabs_4_pane_ParamLimits

0xbf82,	// (0x0001b0ae) wml_tabs_4_pane

0xbf98,	// (0x0001b0c4) wml_tabs_5_pane_ParamLimits

0xbf98,	// (0x0001b0c4) wml_tabs_5_pane

0xbfb2,	// (0x0001b0de) wml_tabs_pane_g2_ParamLimits

0xbfb2,	// (0x0001b0de) wml_tabs_pane_g2

0xbfc6,	// (0x0001b0f2) wml_tabs_pane_g3_ParamLimits

0xbfc6,	// (0x0001b0f2) wml_tabs_pane_g3

0x41a2,	// (0x000132ce) wml_tabs_2_active_pane_ParamLimits

0x41a2,	// (0x000132ce) wml_tabs_2_active_pane

0x41b6,	// (0x000132e2) wml_tabs_2_passive_pane_ParamLimits

0x41b6,	// (0x000132e2) wml_tabs_2_passive_pane

0x41ca,	// (0x000132f6) wml_tabs_3_active_pane_cp_ParamLimits

0x41ca,	// (0x000132f6) wml_tabs_3_active_pane_cp

0x41df,	// (0x0001330b) wml_tabs_3_passive_pane_ParamLimits

0x41df,	// (0x0001330b) wml_tabs_3_passive_pane

0x41f2,	// (0x0001331e) wml_tabs_3_passive_pane_cp_ParamLimits

0x41f2,	// (0x0001331e) wml_tabs_3_passive_pane_cp

0x4209,	// (0x00013335) tabs_4_active_pane

0x4211,	// (0x0001333d) tabs_4_passive_pane

0x421b,	// (0x00013347) tabs_4_passive_pane_cp

0x4223,	// (0x0001334f) tabs_4_passive_pane_cp2

0x32ed,	// (0x00012419) aid_height_text

0x29b7,	// (0x00011ae3) mup_volume_cont_pane_ParamLimits

0x29b7,	// (0x00011ae3) mup_volume_cont_pane

0x0448,	// (0x0000f574) aid_size_cell_pinb

0x0452,	// (0x0000f57e) aid_size_list_pinb

0x410d,	// (0x00013239) mup2_volume_cont_pane_ParamLimits

0x410d,	// (0x00013239) mup2_volume_cont_pane

0xbfda,	// (0x0001b106) mup2_volume_cont_pane_g1_ParamLimits

0xbfda,	// (0x0001b106) mup2_volume_cont_pane_g1

0x010a,	// (0x0000f236) aid_size_cell_touch_ParamLimits

0x010a,	// (0x0000f236) aid_size_cell_touch

0x0337,	// (0x0000f463) touch_pane_ParamLimits

0x0337,	// (0x0000f463) touch_pane

0x93c9,	// (0x000184f5) main_rss2_pane

0xc01c,	// (0x0001b148) listscroll_rss2_pane

0xc025,	// (0x0001b151) rss2_navigation_pane

0xc02d,	// (0x0001b159) list_rss2_pane

0xa6ea,	// (0x00019816) scroll_pane_cp22

0xc035,	// (0x0001b161) rss2_navigation_pane_g1

0xc03e,	// (0x0001b16a) rss2_navigation_pane_g2

0xc046,	// (0x0001b172) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0001e7bd) rss2_navigation_pane_g

0xc04e,	// (0x0001b17a) rss2_navigation_pane_t1

0x422d,	// (0x00013359) rss2_list_single_pane_ParamLimits

0x422d,	// (0x00013359) rss2_list_single_pane

0xc05c,	// (0x0001b188) rss2_list_single_pane_t2

0xc06a,	// (0x0001b196) rss2_list_single_pane_t3_ParamLimits

0xc06a,	// (0x0001b196) rss2_list_single_pane_t3

0xc087,	// (0x0001b1b3) rss2_list_single_pane_t4

0x2317,	// (0x00011443) smil_status_pane_g1

0x9439,	// (0x00018565) main_image2_pane_ParamLimits

0x9439,	// (0x00018565) main_image2_pane

0x3ccf,	// (0x00012dfb) main_camera2_pane_g9_ParamLimits

0x3ccf,	// (0x00012dfb) main_camera2_pane_g9

0x3dfd,	// (0x00012f29) main_camera2_pane_t5_ParamLimits

0x3dfd,	// (0x00012f29) main_camera2_pane_t5

0xbefd,	// (0x0001b029) main_camera2_pane_t6_ParamLimits

0xbefd,	// (0x0001b029) main_camera2_pane_t6

0x4244,	// (0x00013370) main_image2_pane_g1_ParamLimits

0x4244,	// (0x00013370) main_image2_pane_g1

0x3027,	// (0x00012153) smil2_video_pane_ParamLimits

0x3027,	// (0x00012153) smil2_video_pane

0x93e7,	// (0x00018513) aid_zoom_text_primary_cp

0x942f,	// (0x0001855b) popup_preview_fixed_window

0x9f09,	// (0x00019035) im_reading_pane_g1

0x3b46,	// (0x00012c72) cams2_bc_adjust_pane_cp_ParamLimits

0x3b46,	// (0x00012c72) cams2_bc_adjust_pane_cp

0x3e2c,	// (0x00012f58) cams2_bc_adjust_pane_ParamLimits

0x3e2c,	// (0x00012f58) cams2_bc_adjust_pane

0xc095,	// (0x0001b1c1) cams2_bc_adjust_pane_g1

0xc09d,	// (0x0001b1c9) cams2_slider_pane

0xc0a6,	// (0x0001b1d2) cams2_slider_pane_g1

0xc0af,	// (0x0001b1db) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0001e7c4) cams2_slider_pane_g

0x052a,	// (0x0000f656) calc_display_pane_ParamLimits

0x0552,	// (0x0000f67e) calc_paper_pane_ParamLimits

0x0575,	// (0x0000f6a1) grid_calc_pane_ParamLimits

0xa58e,	// (0x000196ba) popup_clock_digital_window_t1_ParamLimits

0xac51,	// (0x00019d7d) main_image_pane_t1

0x050c,	// (0x0000f638) aid_size_cell_calc_ParamLimits

0x050c,	// (0x0000f638) aid_size_cell_calc

0x3618,	// (0x00012744) popup_blid_sat_info2_window_ParamLimits

0x3618,	// (0x00012744) popup_blid_sat_info2_window

0xc0d1,	// (0x0001b1fd) aid_size_cell_blid

0xc0d9,	// (0x0001b205) bg_popup_window_pane_cp07

0xc0fc,	// (0x0001b228) grid_popup_blid_pane

0xc106,	// (0x0001b232) heading_pane_cp05_ParamLimits

0xc106,	// (0x0001b232) heading_pane_cp05

0xc1d0,	// (0x0001b2fc) cell_popup_blid_pane_ParamLimits

0xc1d0,	// (0x0001b2fc) cell_popup_blid_pane

0xc1f6,	// (0x0001b322) cell_popup_blid_pane_g1

0xc1fe,	// (0x0001b32a) cell_popup_blid_pane_t1

0x40dd,	// (0x00013209) mup2_indicator_pane_ParamLimits

0x40dd,	// (0x00013209) mup2_indicator_pane

0xa92d,	// (0x00019a59) mup2_visualizer_osc_pane

0xbf39,	// (0x0001b065) mup2_visualizer_spec_pane_ParamLimits

0xbf39,	// (0x0001b065) mup2_visualizer_spec_pane

0x425a,	// (0x00013386) mup2_spec_half_pane

0x4263,	// (0x0001338f) mup2_spec_half_pane_cp

0x426b,	// (0x00013397) mup2_spec_bar_pane_ParamLimits

0x426b,	// (0x00013397) mup2_spec_bar_pane

0xbe88,	// (0x0001afb4) mup2_spec_bar_pane_g1

0xbe92,	// (0x0001afbe) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0001e737) mup2_spec_bar_pane_g

0x428b,	// (0x000133b7) mup2_osc_middle_pane

0xbea4,	// (0x0001afd0) mup2_visualizer_osc_pane_g1

0x9467,	// (0x00018593) popup_number_entry_window_t1_ParamLimits

0x947a,	// (0x000185a6) popup_number_entry_window_t2_ParamLimits

0x948c,	// (0x000185b8) popup_number_entry_window_t3_ParamLimits

0x0389,	// (0x0000f4b5) popup_number_entry_window_t5_ParamLimits

0x0389,	// (0x0000f4b5) popup_number_entry_window_t5

0xf0cd,	// (0x0001e1f9) popup_number_entry_window_t_ParamLimits

0x949e,	// (0x000185ca) text_title_cp2_ParamLimits

0xab2b,	// (0x00019c57) aid_hotspot_pointer_text2_pane

0xab51,	// (0x00019c7d) main_viewer_pane_g9_ParamLimits

0xab51,	// (0x00019c7d) main_viewer_pane_g9

0xa142,	// (0x0001926e) cale_month_pane_t1_ParamLimits

0xa1ad,	// (0x000192d9) bg_cale_pane_ParamLimits

0xa1c5,	// (0x000192f1) list_cale_pane_ParamLimits

0xa1d6,	// (0x00019302) listscroll_cale_day_pane_t1

0xa1e8,	// (0x00019314) scroll_pane_cp09_ParamLimits

0x29ed,	// (0x00011b19) main_mup_eq_pane_t1_ParamLimits

0x29ed,	// (0x00011b19) main_mup_eq_pane_t1

0x2a07,	// (0x00011b33) main_mup_eq_pane_t2_ParamLimits

0x2a07,	// (0x00011b33) main_mup_eq_pane_t2

0x2a21,	// (0x00011b4d) main_mup_eq_pane_t3_ParamLimits

0x2a21,	// (0x00011b4d) main_mup_eq_pane_t3

0x2a3d,	// (0x00011b69) main_mup_eq_pane_t4_ParamLimits

0x2a3d,	// (0x00011b69) main_mup_eq_pane_t4

0x2a59,	// (0x00011b85) main_mup_eq_pane_t5_ParamLimits

0x2a59,	// (0x00011b85) main_mup_eq_pane_t5

0x2a75,	// (0x00011ba1) main_mup_eq_pane_t6_ParamLimits

0x2a75,	// (0x00011ba1) main_mup_eq_pane_t6

0x2a89,	// (0x00011bb5) main_mup_eq_pane_t7_ParamLimits

0x2a89,	// (0x00011bb5) main_mup_eq_pane_t7

0x2a9d,	// (0x00011bc9) main_mup_eq_pane_t8_ParamLimits

0x2a9d,	// (0x00011bc9) main_mup_eq_pane_t8

0x2ab1,	// (0x00011bdd) main_mup_eq_pane_t9_ParamLimits

0x2ab1,	// (0x00011bdd) main_mup_eq_pane_t9

0x2acb,	// (0x00011bf7) main_mup_eq_pane_t10_ParamLimits

0x2acb,	// (0x00011bf7) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0001e586) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0001e586) main_mup_eq_pane_t

0x2b7a,	// (0x00011ca6) mup_equalizer_pane_cp5_ParamLimits

0x2b8e,	// (0x00011cba) mup_equalizer_pane_cp6_ParamLimits

0x2ba2,	// (0x00011cce) mup_equalizer_pane_cp7_ParamLimits

0x93c9,	// (0x000184f5) main_gallery_pane

0xbead,	// (0x0001afd9) smil2_volume_pane

0xbeb5,	// (0x0001afe1) smil_status_volume_pane_g1_ParamLimits

0xbec8,	// (0x0001aff4) smil_status_volume_pane_g2_ParamLimits

0xbedb,	// (0x0001b007) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0001e73c) smil_status_volume_pane_g_ParamLimits

0xc0d9,	// (0x0001b205) bg_popup_window_pane_cp07_ParamLimits

0xc0e7,	// (0x0001b213) blid_firmament_pane

0x4294,	// (0x000133c0) aid_size_cell_gallery_ParamLimits

0x4294,	// (0x000133c0) aid_size_cell_gallery

0x42aa,	// (0x000133d6) grid_gallery_pane_ParamLimits

0x42aa,	// (0x000133d6) grid_gallery_pane

0x42c3,	// (0x000133ef) cell_gallery_pane_ParamLimits

0x42c3,	// (0x000133ef) cell_gallery_pane

0xc20c,	// (0x0001b338) bg_cell_gallery_focus_pane_ParamLimits

0xc20c,	// (0x0001b338) bg_cell_gallery_focus_pane

0xc21e,	// (0x0001b34a) cell_gallery_pane_g1_ParamLimits

0xc21e,	// (0x0001b34a) cell_gallery_pane_g1

0x430c,	// (0x00013438) cell_gallery_pane_g2_ParamLimits

0x430c,	// (0x00013438) cell_gallery_pane_g2

0x4319,	// (0x00013445) cell_gallery_pane_g3_ParamLimits

0x4319,	// (0x00013445) cell_gallery_pane_g3

0xc22a,	// (0x0001b356) cell_gallery_pane_g4_ParamLimits

0xc22a,	// (0x0001b356) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0001e7ea) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0001e7ea) cell_gallery_pane_g

0xc236,	// (0x0001b362) bg_cell_gallery_focus_pane_g1

0xc23e,	// (0x0001b36a) bg_cell_gallery_focus_pane_g2

0xc246,	// (0x0001b372) bg_cell_gallery_focus_pane_g3

0xc24e,	// (0x0001b37a) bg_cell_gallery_focus_pane_g4

0xc256,	// (0x0001b382) bg_cell_gallery_focus_pane_g5

0xc25e,	// (0x0001b38a) bg_cell_gallery_focus_pane_g6

0xc266,	// (0x0001b392) bg_cell_gallery_focus_pane_g7

0xc26e,	// (0x0001b39a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0001e7f3) bg_cell_gallery_focus_pane_g

0xc276,	// (0x0001b3a2) aid_firma_cardinal

0xc28a,	// (0x0001b3b6) blid_firmament_pane_t1

0xc2a1,	// (0x0001b3cd) blid_firmament_pane_t2

0xc2b8,	// (0x0001b3e4) blid_firmament_pane_t3

0xc2cf,	// (0x0001b3fb) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0001e804) blid_firmament_pane_t

0xc2e6,	// (0x0001b412) blid_sat_info_pane

0xc2f6,	// (0x0001b422) blid_sat_info_pane_g1

0xc2f6,	// (0x0001b422) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0001e80d) blid_sat_info_pane_g

0xc300,	// (0x0001b42c) blid_sat_info_pane_t1

0xc30e,	// (0x0001b43a) smil2_volume_content_pane

0xc317,	// (0x0001b443) smil2_volume_pane_g1

0x9c60,	// (0x00018d8c) smil2_volume_content_pane_g1

0xc31f,	// (0x0001b44b) smil2_volume_content_pane_g2

0xc328,	// (0x0001b454) smil2_volume_content_pane_g3

0xc331,	// (0x0001b45d) smil2_volume_content_pane_g4

0xc33a,	// (0x0001b466) smil2_volume_content_pane_g5

0xc343,	// (0x0001b46f) smil2_volume_content_pane_g6

0xc34c,	// (0x0001b478) smil2_volume_content_pane_g7

0xc355,	// (0x0001b481) smil2_volume_content_pane_g8

0xc35e,	// (0x0001b48a) smil2_volume_content_pane_g9

0xc367,	// (0x0001b493) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0001e812) smil2_volume_content_pane_g

0x0af0,	// (0x0000fc1c) cale_week_day_heading_pane_t1_ParamLimits

0x0b3a,	// (0x0000fc66) cale_week_day_heading_pane_t2_ParamLimits

0x0b89,	// (0x0000fcb5) cale_week_day_heading_pane_t3_ParamLimits

0x0bd8,	// (0x0000fd04) cale_week_day_heading_pane_t4_ParamLimits

0x0c27,	// (0x0000fd53) cale_week_day_heading_pane_t5_ParamLimits

0x0c7e,	// (0x0000fdaa) cale_week_day_heading_pane_t6_ParamLimits

0x0cd5,	// (0x0000fe01) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0001e2fe) cale_week_day_heading_pane_t_ParamLimits

0x9dae,	// (0x00018eda) bg_cale_side_pane_ParamLimits

0x0d1f,	// (0x0000fe4b) cale_week_time_pane_t1_ParamLimits

0x0d39,	// (0x0000fe65) cale_week_time_pane_t2_ParamLimits

0x0d53,	// (0x0000fe7f) cale_week_time_pane_t3_ParamLimits

0x0d6d,	// (0x0000fe99) cale_week_time_pane_t4_ParamLimits

0x0d87,	// (0x0000feb3) cale_week_time_pane_t5_ParamLimits

0x0da1,	// (0x0000fecd) cale_week_time_pane_t6_ParamLimits

0x0dbb,	// (0x0000fee7) cale_week_time_pane_t7_ParamLimits

0x0ddb,	// (0x0000ff07) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0001e30d) cale_week_time_pane_t_ParamLimits

0x0dfb,	// (0x0000ff27) cell_cale_week_pane_g2_ParamLimits

0x9dae,	// (0x00018eda) bg_cale_side_pane_cp01_ParamLimits

0x20fe,	// (0x0001122a) cale_month_week_pane_t1_ParamLimits

0x2117,	// (0x00011243) cale_month_week_pane_t2_ParamLimits

0x2130,	// (0x0001125c) cale_month_week_pane_t3_ParamLimits

0x2149,	// (0x00011275) cale_month_week_pane_t4_ParamLimits

0x2162,	// (0x0001128e) cale_month_week_pane_t5_ParamLimits

0x217b,	// (0x000112a7) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0001e3e6) cale_month_week_pane_t_ParamLimits

0xa154,	// (0x00019280) cell_cale_month_pane_g1_ParamLimits

0x93c9,	// (0x000184f5) main_cale_event_viewer_pane

0x93c9,	// (0x000184f5) listscroll_cale_event_viewer_pane

0xc370,	// (0x0001b49c) list_cale_ev_pane

0xc378,	// (0x0001b4a4) scroll_pane_cp023

0xc384,	// (0x0001b4b0) field_cale_ev_pane_ParamLimits

0xc384,	// (0x0001b4b0) field_cale_ev_pane

0xc3a0,	// (0x0001b4cc) field_cale_ev_content_pane_ParamLimits

0xc3a0,	// (0x0001b4cc) field_cale_ev_content_pane

0xc3ac,	// (0x0001b4d8) field_cale_ev_pane_g1_ParamLimits

0xc3ac,	// (0x0001b4d8) field_cale_ev_pane_g1

0xc3b8,	// (0x0001b4e4) field_cale_ev_pane_g2_ParamLimits

0xc3b8,	// (0x0001b4e4) field_cale_ev_pane_g2

0xc3d0,	// (0x0001b4fc) field_cale_ev_pane_g3_ParamLimits

0xc3d0,	// (0x0001b4fc) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0001e827) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0001e827) field_cale_ev_pane_g

0xc3e8,	// (0x0001b514) field_cale_ev_pane_t1_ParamLimits

0xc3e8,	// (0x0001b514) field_cale_ev_pane_t1

0xc3ff,	// (0x0001b52b) field_cale_ev_content_pane_t1_ParamLimits

0xc3ff,	// (0x0001b52b) field_cale_ev_content_pane_t1

0x2c59,	// (0x00011d85) bg_button_pane_cp01

0x0833,	// (0x0000f95f) listscroll_cale_week_pane_ParamLimits

0x9d58,	// (0x00018e84) popup_toolbar_window_cp01

0x9d7f,	// (0x00018eab) listscroll_cale_week_pane_t1_ParamLimits

0x0833,	// (0x0000f95f) listscroll_cale_day_pane_ParamLimits

0x9d58,	// (0x00018e84) popup_toolbar_window_cp02

0xa1d6,	// (0x00019302) listscroll_cale_day_pane_t1_ParamLimits

0x0833,	// (0x0000f95f) main_cale_month_pane_ParamLimits

0xbe26,	// (0x0001af52) popup_toolbar_window_cp03_ParamLimits

0xbe26,	// (0x0001af52) popup_toolbar_window_cp03

0x2eeb,	// (0x00012017) main_image_pane_g2_ParamLimits

0x2eeb,	// (0x00012017) main_image_pane_g2

0x2efc,	// (0x00012028) main_image_pane_g3_ParamLimits

0x2efc,	// (0x00012028) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0001e618) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0001e618) main_image_pane_g

0xac51,	// (0x00019d7d) main_image_pane_t1_ParamLimits

0x2f0d,	// (0x00012039) main_image_pane_t2_ParamLimits

0x2f0d,	// (0x00012039) main_image_pane_t2

0x2f1f,	// (0x0001204b) main_image_pane_t3_ParamLimits

0x2f1f,	// (0x0001204b) main_image_pane_t3

0x2f47,	// (0x00012073) main_image_pane_t4_ParamLimits

0x2f47,	// (0x00012073) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0001e61f) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0001e61f) main_image_pane_t

0x2f67,	// (0x00012093) popup_image_details_window_cp01

0x2f71,	// (0x0001209d) popup_toobar_trans_pane_cp01_ParamLimits

0x2f71,	// (0x0001209d) popup_toobar_trans_pane_cp01

0x36ef,	// (0x0001281b) popup_image_details_window_ParamLimits

0x36ef,	// (0x0001281b) popup_image_details_window

0xbdf9,	// (0x0001af25) popup_image_focus_window

0x3b00,	// (0x00012c2c) camera2_autofocus_pane_ParamLimits

0x3b00,	// (0x00012c2c) camera2_autofocus_pane

0x93c9,	// (0x000184f5) bg_popup_sub_pane_cp06

0xc41c,	// (0x0001b548) popup_image_focus_window_g1

0xc424,	// (0x0001b550) popup_image_focus_window_g2

0xc42c,	// (0x0001b558) popup_image_focus_window_g3

0xc434,	// (0x0001b560) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0001e82e) popup_image_focus_window_g

0xc43c,	// (0x0001b568) popup_image_focus_window_t1

0xc44a,	// (0x0001b576) popup_image_focus_window_t2

0xc45a,	// (0x0001b586) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0001e837) popup_image_focus_window_t

0xc468,	// (0x0001b594) camera2_autofocus_pane_g1

0x9439,	// (0x00018565) bg_tb_trans_pane_cp01

0xc476,	// (0x0001b5a2) popup_image_details_window_g1

0xc489,	// (0x0001b5b5) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0001e849) popup_image_details_window_g

0xc4b2,	// (0x0001b5de) popup_image_details_window_t1

0xc4c4,	// (0x0001b5f0) popup_image_details_window_t2

0xc4dd,	// (0x0001b609) popup_image_details_window_t3

0xc4f1,	// (0x0001b61d) popup_image_details_window_t4

0xc50c,	// (0x0001b638) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0001e850) popup_image_details_window_t

0x9b8d,	// (0x00018cb9) bg_calc_paper_pane_ParamLimits

0x93c9,	// (0x000184f5) grid_highlight_pane_cp013

0x9ba1,	// (0x00018ccd) list_calc_pane_ParamLimits

0x9bb3,	// (0x00018cdf) scroll_pane_cp024

0x9bbb,	// (0x00018ce7) bg_calc_display_pane_ParamLimits

0x0673,	// (0x0000f79f) calc_display_pane_t1_ParamLimits

0x0685,	// (0x0000f7b1) calc_display_pane_t2_ParamLimits

0x9bc7,	// (0x00018cf3) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0001e280) calc_display_pane_t_ParamLimits

0x074a,	// (0x0000f876) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0001e29d) cell_calc_pane_g

0x0753,	// (0x0000f87f) cell_calc_pane_t1

0x9c3e,	// (0x00018d6a) grid_highlight_pane_cp02_ParamLimits

0x9c54,	// (0x00018d80) toolbar_button_pane_cp01_ParamLimits

0x9c54,	// (0x00018d80) toolbar_button_pane_cp01

0xac96,	// (0x00019dc2) temp_image_control_pane_ParamLimits

0xac96,	// (0x00019dc2) temp_image_control_pane

0x9439,	// (0x00018565) main_mp3_pane

0xc526,	// (0x0001b652) temp_image_control_pane_g1_ParamLimits

0xc526,	// (0x0001b652) temp_image_control_pane_g1

0xc534,	// (0x0001b660) temp_image_control_pane_g2_ParamLimits

0xc534,	// (0x0001b660) temp_image_control_pane_g2

0xc546,	// (0x0001b672) temp_image_control_pane_g3_ParamLimits

0xc546,	// (0x0001b672) temp_image_control_pane_g3

0x4356,	// (0x00013482) temp_image_control_pane_g4_ParamLimits

0x4356,	// (0x00013482) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0001e85b) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0001e85b) temp_image_control_pane_g

0xc526,	// (0x0001b652) main_mp3_pane_g1

0x4369,	// (0x00013495) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0001e864) main_mp3_pane_g

0xc589,	// (0x0001b6b5) main_mp3_pane_t1

0x9e18,	// (0x00018f44) main_camera_pane_g8_ParamLimits

0x9e18,	// (0x00018f44) main_camera_pane_g8

0x111e,	// (0x0001024a) main_video_pane_g7_ParamLimits

0x111e,	// (0x0001024a) main_video_pane_g7

0xbf1b,	// (0x0001b047) main_camera2_pane_t7_ParamLimits

0xbf1b,	// (0x0001b047) main_camera2_pane_t7

0x9f60,	// (0x0001908c) scroll_pane_cp025_ParamLimits

0x9f60,	// (0x0001908c) scroll_pane_cp025

0x9f74,	// (0x000190a0) scroll_pane_cp026_ParamLimits

0x9f74,	// (0x000190a0) scroll_pane_cp026

0x9f83,	// (0x000190af) wml_content_pane_ParamLimits

0x93c9,	// (0x000184f5) main_touch_calib_pane

0x443f,	// (0x0001356b) main_touch_calib_pane_g1

0x4451,	// (0x0001357d) main_touch_calib_pane_g2

0x4463,	// (0x0001358f) main_touch_calib_pane_g3

0x4475,	// (0x000135a1) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0001e882) main_touch_calib_pane_g

0x4487,	// (0x000135b3) main_touch_calib_pane_t1

0x44a1,	// (0x000135cd) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0001e88b) main_touch_calib_pane_t

0xa7c8,	// (0x000198f4) mup_progress_pane_cp02

0xa7fd,	// (0x00019929) navi_pane_g1

0xa8b8,	// (0x000199e4) navi_pane_mp_t3

0x9439,	// (0x00018565) main_mp3_pane_ParamLimits

0x386c,	// (0x00012998) navi_pane_ParamLimits

0xc526,	// (0x0001b652) main_mp3_pane_g1_ParamLimits

0x4369,	// (0x00013495) main_mp3_pane_g2_ParamLimits

0x4377,	// (0x000134a3) main_mp3_pane_g3_ParamLimits

0x4377,	// (0x000134a3) main_mp3_pane_g3

0x4385,	// (0x000134b1) main_mp3_pane_g4_ParamLimits

0x4385,	// (0x000134b1) main_mp3_pane_g4

0xc556,	// (0x0001b682) main_mp3_pane_g5_ParamLimits

0xc556,	// (0x0001b682) main_mp3_pane_g5

0xc564,	// (0x0001b690) main_mp3_pane_g6_ParamLimits

0xc564,	// (0x0001b690) main_mp3_pane_g6

0xc571,	// (0x0001b69d) main_mp3_pane_g7_ParamLimits

0xc571,	// (0x0001b69d) main_mp3_pane_g7

0xc57d,	// (0x0001b6a9) main_mp3_pane_g8_ParamLimits

0xc57d,	// (0x0001b6a9) main_mp3_pane_g8

0xf738,	// (0x0001e864) main_mp3_pane_g_ParamLimits

0x4393,	// (0x000134bf) main_mp3_pane_t2

0x43a1,	// (0x000134cd) main_mp3_pane_t3

0xc597,	// (0x0001b6c3) main_mp3_pane_t4

0xc5a5,	// (0x0001b6d1) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0001e875) main_mp3_pane_t

0xc5b3,	// (0x0001b6df) mup_progress_pane_cp01

0x93e7,	// (0x00018513) aid_zoom_text_secondary2

0xc370,	// (0x0001b49c) list_cale_ev2_pane

0xc378,	// (0x0001b4a4) scroll_pane_cp023_ParamLimits

0x44f7,	// (0x00013623) field_cale_ev2_pane_ParamLimits

0x44f7,	// (0x00013623) field_cale_ev2_pane

0xc5bb,	// (0x0001b6e7) field_cale_ev2_pane_g1_ParamLimits

0xc5bb,	// (0x0001b6e7) field_cale_ev2_pane_g1

0xc5c7,	// (0x0001b6f3) field_cale_ev2_pane_g2_ParamLimits

0xc5c7,	// (0x0001b6f3) field_cale_ev2_pane_g2

0xc5df,	// (0x0001b70b) field_cale_ev2_pane_g3_ParamLimits

0xc5df,	// (0x0001b70b) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0001e896) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0001e896) field_cale_ev2_pane_g

0xc603,	// (0x0001b72f) field_cale_ev2_pane_t1_ParamLimits

0xc603,	// (0x0001b72f) field_cale_ev2_pane_t1

0xc61a,	// (0x0001b746) field_cale_ev2_pane_t2_ParamLimits

0xc61a,	// (0x0001b746) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0001e89f) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0001e89f) field_cale_ev2_pane_t

0x2d9e,	// (0x00011eca) main_postcard_pane_g5_ParamLimits

0x2d9e,	// (0x00011eca) main_postcard_pane_g5

0x2db4,	// (0x00011ee0) main_postcard_pane_g6_ParamLimits

0x2db4,	// (0x00011ee0) main_postcard_pane_g6

0x0ed8,	// (0x00010004) camera2_autofocus_pane_cp_ParamLimits

0x0ed8,	// (0x00010004) camera2_autofocus_pane_cp

0x9439,	// (0x00018565) main_mup3_pane

0x4539,	// (0x00013665) main_mup3_pane_g1_ParamLimits

0x4539,	// (0x00013665) main_mup3_pane_g1

0x455b,	// (0x00013687) main_mup3_pane_g2_ParamLimits

0x455b,	// (0x00013687) main_mup3_pane_g2

0x45dd,	// (0x00013709) main_mup3_pane_g3_ParamLimits

0x45dd,	// (0x00013709) main_mup3_pane_g3

0x4623,	// (0x0001374f) main_mup3_pane_g4_ParamLimits

0x4623,	// (0x0001374f) main_mup3_pane_g4

0x4669,	// (0x00013795) main_mup3_pane_g5_ParamLimits

0x4669,	// (0x00013795) main_mup3_pane_g5

0x46b1,	// (0x000137dd) main_mup3_pane_g6_ParamLimits

0x46b1,	// (0x000137dd) main_mup3_pane_g6

0xc62f,	// (0x0001b75b) main_mup3_pane_g7_ParamLimits

0xc62f,	// (0x0001b75b) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0001e8af) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0001e8af) main_mup3_pane_g

0x472f,	// (0x0001385b) main_mup3_pane_t1_ParamLimits

0x472f,	// (0x0001385b) main_mup3_pane_t1

0x47a3,	// (0x000138cf) main_mup3_pane_t2_ParamLimits

0x47a3,	// (0x000138cf) main_mup3_pane_t2

0x4877,	// (0x000139a3) main_mup3_pane_t4_ParamLimits

0x4877,	// (0x000139a3) main_mup3_pane_t4

0x48cd,	// (0x000139f9) main_mup3_pane_t5_ParamLimits

0x48cd,	// (0x000139f9) main_mup3_pane_t5

0x4989,	// (0x00013ab5) main_mup3_pane_t6_ParamLimits

0x4989,	// (0x00013ab5) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0001e8c0) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0001e8c0) main_mup3_pane_t

0x4a41,	// (0x00013b6d) mup3_progress_pane_ParamLimits

0x4a41,	// (0x00013b6d) mup3_progress_pane

0x4acd,	// (0x00013bf9) popup_mup3_control_window_ParamLimits

0x4acd,	// (0x00013bf9) popup_mup3_control_window

0xc63d,	// (0x0001b769) popup_mup3_text_window

0x4aff,	// (0x00013c2b) mup3_progress_pane_t1

0x4b1e,	// (0x00013c4a) mup3_progress_pane_t2

0xc645,	// (0x0001b771) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0001e8cd) mup3_progress_pane_t

0xc662,	// (0x0001b78e) mup_progress_pane_cp03

0x93c9,	// (0x000184f5) bg_tb_trans_pane_cp04

0x4b3d,	// (0x00013c69) mup3_volume_pane

0x4b45,	// (0x00013c71) popup_mup3_control_window_g1

0x4b4e,	// (0x00013c7a) mup3_volume_pane_g1

0x4b57,	// (0x00013c83) mup3_volume_pane_g2

0x4b60,	// (0x00013c8c) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0001e8d4) mup3_volume_pane_g

0x93c9,	// (0x000184f5) bg_tb_trans_pane_cp03

0xc672,	// (0x0001b79e) popup_mup3_text_window_g1

0xc67a,	// (0x0001b7a6) popup_mup3_text_window_t1

0x9c15,	// (0x00018d41) list_calc_item_pane_g1_ParamLimits

0xc003,	// (0x0001b12f) mup_volume_pane_cp_g1

0x44bb,	// (0x000135e7) main_touch_calib_pane_t3

0x44cf,	// (0x000135fb) main_touch_calib_pane_t4

0x44e3,	// (0x0001360f) main_touch_calib_pane_t5

0x93d3,	// (0x000184ff) aid_cell_size_toolbar2

0x93db,	// (0x00018507) aid_popup3_width_pane

0x93e7,	// (0x00018513) aid_zoom_text_msg_primary

0x0eaf,	// (0x0000ffdb) vorec_t7

0x9bd9,	// (0x00018d05) bg_calc_paper_pane_g1_ParamLimits

0x9be5,	// (0x00018d11) bg_calc_paper_pane_g2_ParamLimits

0x9bf1,	// (0x00018d1d) bg_calc_paper_pane_g3_ParamLimits

0x9bfd,	// (0x00018d29) bg_calc_paper_pane_g4_ParamLimits

0x9c09,	// (0x00018d35) bg_calc_paper_pane_g5_ParamLimits

0x06ce,	// (0x0000f7fa) bg_calc_paper_pane_g6_ParamLimits

0x06df,	// (0x0000f80b) bg_calc_paper_pane_g7_ParamLimits

0x06f0,	// (0x0000f81c) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0001e287) bg_calc_paper_pane_g_ParamLimits

0x0703,	// (0x0000f82f) calc_bg_paper_pane_g9_ParamLimits

0x1030,	// (0x0001015c) image_qvga_pane_ParamLimits

0x1030,	// (0x0001015c) image_qvga_pane

0x9ab5,	// (0x00018be1) bg_popup_sub_pane_cp04_ParamLimits

0xabcd,	// (0x00019cf9) popup_mup_playback_window_g1_ParamLimits

0xabd9,	// (0x00019d05) popup_mup_playback_window_t1_ParamLimits

0xabee,	// (0x00019d1a) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0001e613) popup_mup_playback_window_t_ParamLimits

0x3ff7,	// (0x00013123) main_mup2_pane_g3_ParamLimits

0x3ff7,	// (0x00013123) main_mup2_pane_g3

0x1443,	// (0x0001056f) popup_toolbar_window_cp04

0xafe3,	// (0x0001a10f) popup_call2_audio_second_window_g3_ParamLimits

0xafe3,	// (0x0001a10f) popup_call2_audio_second_window_g3

0xb3ed,	// (0x0001a519) popup_call2_audio_first_window_g4_ParamLimits

0xb3ed,	// (0x0001a519) popup_call2_audio_first_window_g4

0xba6c,	// (0x0001ab98) popup_call2_audio_in_window_g4_ParamLimits

0xba6c,	// (0x0001ab98) popup_call2_audio_in_window_g4

0x2ecd,	// (0x00011ff9) aid_area_sk_bg_cut_ParamLimits

0x2ecd,	// (0x00011ff9) aid_area_sk_bg_cut

0xac03,	// (0x00019d2f) aid_area_sk_bg_cut_2_ParamLimits

0xac03,	// (0x00019d2f) aid_area_sk_bg_cut_2

0x42fc,	// (0x00013428) aid_placing_details_win

0x4304,	// (0x00013430) aid_placing_details_win_2

0xc468,	// (0x0001b594) camera2_autofocus_pane_g1_ParamLimits

0x02d0,	// (0x0000f3fc) popup_fixed_preview_cale_window_ParamLimits

0x02d0,	// (0x0000f3fc) popup_fixed_preview_cale_window

0xa947,	// (0x00019a73) navi_slider_pane_g3

0xa950,	// (0x00019a7c) navi_slider_pane_g4

0xa959,	// (0x00019a85) navi_slider_pane_g5

0xa947,	// (0x00019a73) navi_slider_pane_g6

0xa962,	// (0x00019a8e) navi_slider_pane_g7

0xaa83,	// (0x00019baf) mup_scale_pane_g3

0xaa8c,	// (0x00019bb8) mup_scale_pane_g4

0xaa95,	// (0x00019bc1) mup_scale_pane_g5

0x2bb6,	// (0x00011ce2) mup_scale_pane_g6

0x2bbf,	// (0x00011ceb) mup_scale_pane_g7

0xa947,	// (0x00019a73) cams2_slider_pane_g3

0xc0b8,	// (0x0001b1e4) cams2_slider_pane_g4

0xc0c0,	// (0x0001b1ec) cams2_slider_pane_g5

0xa947,	// (0x00019a73) cams2_slider_pane_g6

0xc0c8,	// (0x0001b1f4) cams2_slider_pane_g7

0xc2f6,	// (0x0001b422) camera2_autofocus_pane_cp_g1

0xbdcd,	// (0x0001aef9) bg_popup_preview_window_pane_cp02_ParamLimits

0xbdcd,	// (0x0001aef9) bg_popup_preview_window_pane_cp02

0xc688,	// (0x0001b7b4) list_fp_cale_pane_ParamLimits

0xc688,	// (0x0001b7b4) list_fp_cale_pane

0xc694,	// (0x0001b7c0) popup_fixed_preview_cale_window_t1_ParamLimits

0xc694,	// (0x0001b7c0) popup_fixed_preview_cale_window_t1

0x4b69,	// (0x00013c95) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b69,	// (0x00013c95) popup_fixed_preview_cale_window_t2

0x4b7e,	// (0x00013caa) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b7e,	// (0x00013caa) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0001e8db) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0001e8db) popup_fixed_preview_cale_window_t

0x4b93,	// (0x00013cbf) list_single_fp_cale_pane_ParamLimits

0x4b93,	// (0x00013cbf) list_single_fp_cale_pane

0xc6b2,	// (0x0001b7de) list_single_fp_cale_pane_g1_ParamLimits

0xc6b2,	// (0x0001b7de) list_single_fp_cale_pane_g1

0xc6be,	// (0x0001b7ea) list_single_fp_cale_pane_g2_ParamLimits

0xc6be,	// (0x0001b7ea) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0001e8e2) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0001e8e2) list_single_fp_cale_pane_g

0xc6d7,	// (0x0001b803) list_single_fp_cale_pane_t1_ParamLimits

0xc6d7,	// (0x0001b803) list_single_fp_cale_pane_t1

0xc6e9,	// (0x0001b815) list_single_fp_cale_pane_t2_ParamLimits

0xc6e9,	// (0x0001b815) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0001e8e9) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0001e8e9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x93c9,	// (0x000184f5) main_dialer_pane

0x4baa,	// (0x00013cd6) aid_cell_size_keypad

0x4bb4,	// (0x00013ce0) dialer_ne_pane

0x4bbc,	// (0x00013ce8) grid_dialer_command_1_pane

0x4bc4,	// (0x00013cf0) grid_dialer_command_2_pane

0x4bcc,	// (0x00013cf8) grid_dialer_keypad_pane

0x4bde,	// (0x00013d0a) bg_popup_call_pane_cp06_ParamLimits

0x4bde,	// (0x00013d0a) bg_popup_call_pane_cp06

0x4bea,	// (0x00013d16) dialer_ne_clear_pane_ParamLimits

0x4bea,	// (0x00013d16) dialer_ne_clear_pane

0xc71c,	// (0x0001b848) dialer_ne_pane_g1

0xc724,	// (0x0001b850) dialer_ne_pane_t1_ParamLimits

0xc724,	// (0x0001b850) dialer_ne_pane_t1

0x4bf6,	// (0x00013d22) dialer_ne_pane_t2_ParamLimits

0x4bf6,	// (0x00013d22) dialer_ne_pane_t2

0x4c20,	// (0x00013d4c) dialer_ne_pane_t3_ParamLimits

0x4c20,	// (0x00013d4c) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0001e8ee) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0001e8ee) dialer_ne_pane_t

0x4c50,	// (0x00013d7c) dialer_ne_pane_t3_copy1_ParamLimits

0x4c50,	// (0x00013d7c) dialer_ne_pane_t3_copy1

0x4c7f,	// (0x00013dab) cell_dialer_keypad_pane_ParamLimits

0x4c7f,	// (0x00013dab) cell_dialer_keypad_pane

0x4c96,	// (0x00013dc2) cell_dialer_command_1_pane_ParamLimits

0x4c96,	// (0x00013dc2) cell_dialer_command_1_pane

0x4cac,	// (0x00013dd8) cell_dialer_command_2_pane_ParamLimits

0x4cac,	// (0x00013dd8) cell_dialer_command_2_pane

0xc736,	// (0x0001b862) bg_button_pane_cp02_ParamLimits

0xc736,	// (0x0001b862) bg_button_pane_cp02

0x4cbb,	// (0x00013de7) cell_dialer_keypad_pane_g1_ParamLimits

0x4cbb,	// (0x00013de7) cell_dialer_keypad_pane_g1

0xc736,	// (0x0001b862) bg_button_pane_cp03_ParamLimits

0xc736,	// (0x0001b862) bg_button_pane_cp03

0x4cd0,	// (0x00013dfc) cell_dialer_command_1_pane_g1_ParamLimits

0x4cd0,	// (0x00013dfc) cell_dialer_command_1_pane_g1

0xc742,	// (0x0001b86e) bg_button_pane_cp04

0x4ce3,	// (0x00013e0f) cell_dialer_command_2_pane_g1

0xa92d,	// (0x00019a59) bg_button_pane_cp06

0xc74a,	// (0x0001b876) dialer_ne_clear_pane_g1

0xa809,	// (0x00019935) navi_pane_g2

0xa837,	// (0x00019963) navi_pane_g3

0x0002,

0xf3ea,	// (0x0001e516) navi_pane_g

0xa8c6,	// (0x000199f2) navi_pane_mv_g2

0xa8ed,	// (0x00019a19) navi_pane_mv_g5

0x2776,	// (0x000118a2) navi_pane_mv_t1

0x9bbb,	// (0x00018ce7) main_clock2_pane

0x4d30,	// (0x00013e5c) main_clock2_list_pane_ParamLimits

0x4d30,	// (0x00013e5c) main_clock2_list_pane

0x4d6a,	// (0x00013e96) main_clock2_pane_t1_ParamLimits

0x4d6a,	// (0x00013e96) main_clock2_pane_t1

0x4da8,	// (0x00013ed4) main_clock2_pane_t2_ParamLimits

0x4da8,	// (0x00013ed4) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001e8f5) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001e8f5) main_clock2_pane_t

0x4e46,	// (0x00013f72) popup_clock_analogue_window_cp03_ParamLimits

0x4e46,	// (0x00013f72) popup_clock_analogue_window_cp03

0x4e6b,	// (0x00013f97) popup_clock_digital_window_cp02_ParamLimits

0x4e6b,	// (0x00013f97) popup_clock_digital_window_cp02

0x4ede,	// (0x0001400a) main_clock2_list_single_pane_ParamLimits

0x4ede,	// (0x0001400a) main_clock2_list_single_pane

0xa92d,	// (0x00019a59) list_highlight_pane_cp05

0xc768,	// (0x0001b894) main_clock2_list_single_pane_t1

0x1443,	// (0x0001056f) popup_toolbar_window_cp04_ParamLimits

0x4326,	// (0x00013452) camera2_autofocus_pane_g2_ParamLimits

0x4326,	// (0x00013452) camera2_autofocus_pane_g2

0x4332,	// (0x0001345e) camera2_autofocus_pane_g3_ParamLimits

0x4332,	// (0x0001345e) camera2_autofocus_pane_g3

0x433e,	// (0x0001346a) camera2_autofocus_pane_g4_ParamLimits

0x433e,	// (0x0001346a) camera2_autofocus_pane_g4

0x434a,	// (0x00013476) camera2_autofocus_pane_g5_ParamLimits

0x434a,	// (0x00013476) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0001e83e) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0001e83e) camera2_autofocus_pane_g

0x4519,	// (0x00013645) camera2_autofocus_pane_cp_g2

0x4521,	// (0x0001364d) camera2_autofocus_pane_cp_g3

0x4529,	// (0x00013655) camera2_autofocus_pane_cp_g4

0x4531,	// (0x0001365d) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0001e8a4) camera2_autofocus_pane_cp_g

0x4bd6,	// (0x00013d02) popup_dialer_spcha_window

0x93c9,	// (0x000184f5) bg_popup_sub_pane_cp07

0xc776,	// (0x0001b8a2) list_spcha_pane

0xc77e,	// (0x0001b8aa) list_single_spcha_pane_ParamLimits

0xc77e,	// (0x0001b8aa) list_single_spcha_pane

0x93c9,	// (0x000184f5) list_highlight_pane_cp06

0xc78f,	// (0x0001b8bb) list_single_spcha_pane_t1

0xb816,	// (0x0001a942) popup_call2_audio_out_window_g4_ParamLimits

0xb816,	// (0x0001a942) popup_call2_audio_out_window_g4

0x93c9,	// (0x000184f5) main_imed2_pane

0xbe01,	// (0x0001af2d) popup_imed_adjust2_window

0x3707,	// (0x00012833) popup_imed_trans_window_ParamLimits

0x3707,	// (0x00012833) popup_imed_trans_window

0xc132,	// (0x0001b25e) popup_blid_sat_info2_window_t1

0xc140,	// (0x0001b26c) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0001e7d3) popup_blid_sat_info2_window_t

0x4f88,	// (0x000140b4) aid_size_cell_colour_35

0x4fa8,	// (0x000140d4) aid_size_cell_colour_112

0x4fc8,	// (0x000140f4) aid_size_cell_effect

0xbdd9,	// (0x0001af05) bg_tb_trans_pane_cp02

0xa2e7,	// (0x00019413) heading_imed_pane

0x4fe8,	// (0x00014114) listscroll_imed_pane

0xc79d,	// (0x0001b8c9) heading_imed_pane_g1

0xc7a5,	// (0x0001b8d1) heading_imed_pane_t1

0xc7b3,	// (0x0001b8df) grid_imed_colour_35_pane_ParamLimits

0xc7b3,	// (0x0001b8df) grid_imed_colour_35_pane

0x4ff4,	// (0x00014120) grid_imed_effect_pane

0xc7cb,	// (0x0001b8f7) list_imed_aspect_pane

0x500a,	// (0x00014136) scroll_pane_cp027_ParamLimits

0x500a,	// (0x00014136) scroll_pane_cp027

0x501b,	// (0x00014147) cell_imed_effect_pane_ParamLimits

0x501b,	// (0x00014147) cell_imed_effect_pane

0xc7d3,	// (0x0001b8ff) cell_imed_colour_pane_ParamLimits

0xc7d3,	// (0x0001b8ff) cell_imed_colour_pane

0xc815,	// (0x0001b941) cell_imed_colour_pane_g1_ParamLimits

0xc815,	// (0x0001b941) cell_imed_colour_pane_g1

0xc826,	// (0x0001b952) hgihlgiht_grid_pane_cp016_ParamLimits

0xc826,	// (0x0001b952) hgihlgiht_grid_pane_cp016

0x5042,	// (0x0001416e) cell_imed_effect_pane_g1

0x504a,	// (0x00014176) grid_highlight_pane_cp017

0xc837,	// (0x0001b963) list_imed_single_pane_ParamLimits

0xc837,	// (0x0001b963) list_imed_single_pane

0x93c9,	// (0x000184f5) list_highlight_pane_cp07

0xc84d,	// (0x0001b979) list_imed_aspect_pane_comp1_t1

0xbdd9,	// (0x0001af05) bg_tb_trans_pane_cp05

0xc86f,	// (0x0001b99b) popup_imed_adjust2_window_g1

0xc896,	// (0x0001b9c2) popup_imed_adjust2_window_t1

0xc8ae,	// (0x0001b9da) slider_imed_adjust_pane

0xc8c2,	// (0x0001b9ee) slider_imed_adjust_pane_g1

0xc8d2,	// (0x0001b9fe) slider_imed_adjust_pane_g2

0xc8e2,	// (0x0001ba0e) slider_imed_adjust_pane_g3

0xc8f3,	// (0x0001ba1f) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001e912) slider_imed_adjust_pane_g

0x5053,	// (0x0001417f) aid_size_cell_clipart2

0x505f,	// (0x0001418b) grid_imed_clipart_pane

0xc904,	// (0x0001ba30) scroll_pane_cp031

0x5069,	// (0x00014195) cell_imed_clipart_pane_ParamLimits

0x5069,	// (0x00014195) cell_imed_clipart_pane

0x508d,	// (0x000141b9) cell_imed_clipart_pane_g1

0x93c9,	// (0x000184f5) grid_highlight_pane_cp014

0x4d45,	// (0x00013e71) main_clock2_pane_g1_ParamLimits

0x4d45,	// (0x00013e71) main_clock2_pane_g1

0x4e89,	// (0x00013fb5) aid_call2_pane_cp10

0x4e9b,	// (0x00013fc7) aid_call_pane_cp10

0xa768,	// (0x00019894) popup_clock_analogue_window_cp10_g1

0xa768,	// (0x00019894) popup_clock_analogue_window_cp10_g2

0x4ead,	// (0x00013fd9) popup_clock_analogue_window_cp10_g3

0x4ead,	// (0x00013fd9) popup_clock_analogue_window_cp10_g4

0xa768,	// (0x00019894) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001e900) popup_clock_analogue_window_cp10_g

0x4ebf,	// (0x00013feb) popup_clock_analogue_window_cp10_t1

0x4ef0,	// (0x0001401c) clock_digital_number_pane_cp10_ParamLimits

0x4ef0,	// (0x0001401c) clock_digital_number_pane_cp10

0x4f08,	// (0x00014034) clock_digital_number_pane_cp11_ParamLimits

0x4f08,	// (0x00014034) clock_digital_number_pane_cp11

0x4f20,	// (0x0001404c) clock_digital_number_pane_cp12_ParamLimits

0x4f20,	// (0x0001404c) clock_digital_number_pane_cp12

0x4f38,	// (0x00014064) clock_digital_number_pane_cp13_ParamLimits

0x4f38,	// (0x00014064) clock_digital_number_pane_cp13

0x4f50,	// (0x0001407c) clock_digital_separator_pane_cp10_ParamLimits

0x4f50,	// (0x0001407c) clock_digital_separator_pane_cp10

0x4f68,	// (0x00014094) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f68,	// (0x00014094) popup_clock_digital_window_cp02_t1

0x9aad,	// (0x00018bd9) clock_digital_number_pane_cp10_g1

0x9aad,	// (0x00018bd9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001e91b) clock_digital_number_pane_cp10_g

0x9aad,	// (0x00018bd9) clock_digital_separator_pane_cp10_g1

0x9aad,	// (0x00018bd9) clock_digital_separator_pane_g2_cp10

0xa8f5,	// (0x00019a21) navi_pane_vded_g4

0xa8fe,	// (0x00019a2a) navi_pane_vded_g5

0xa907,	// (0x00019a33) navi_pane_vded_t1

0x93c9,	// (0x000184f5) main_vded_pane

0x5096,	// (0x000141c2) main_vded_pane_g1

0x50a0,	// (0x000141cc) main_vded_pane_g2

0x50aa,	// (0x000141d6) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001e920) main_vded_pane_g

0x50b4,	// (0x000141e0) main_vded_pane_t1

0x50c2,	// (0x000141ee) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001e927) main_vded_pane_t

0x50d0,	// (0x000141fc) vded_slider_pane

0x50da,	// (0x00014206) vded_video_pane

0xc90c,	// (0x0001ba38) vded_video_pane_g1

0x50e4,	// (0x00014210) vded_video_pane_g2

0xc2f6,	// (0x0001b422) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001e92c) vded_video_pane_g

0xc916,	// (0x0001ba42) vded_slider_pane_g1

0xc91f,	// (0x0001ba4b) vded_slider_pane_g2

0xc928,	// (0x0001ba54) vded_slider_pane_g3

0xc931,	// (0x0001ba5d) vded_slider_pane_g4

0xc93a,	// (0x0001ba66) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001e933) vded_slider_pane_g

0x4ab5,	// (0x00013be1) mup3_rocker_pane_ParamLimits

0x4ab5,	// (0x00013be1) mup3_rocker_pane

0x50ed,	// (0x00014219) mup3_control_keys_pane_g1

0x50f5,	// (0x00014221) mup3_control_keys_pane_g2

0x50fd,	// (0x00014229) mup3_control_keys_pane_g3

0x5105,	// (0x00014231) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001e93e) mup3_control_keys_pane_g

0x0307,	// (0x0000f433) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0307,	// (0x0000f433) popup_toolbar2_fixed_window_cp01

0x4ae9,	// (0x00013c15) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4ae9,	// (0x00013c15) popup_toolbar2_fixed_window_cp02

0xb155,	// (0x0001a281) popup_call2_audio_second_window_t4_ParamLimits

0xb155,	// (0x0001a281) popup_call2_audio_second_window_t4

0xb683,	// (0x0001a7af) popup_call2_audio_first_window_t6_ParamLimits

0xb683,	// (0x0001a7af) popup_call2_audio_first_window_t6

0xb919,	// (0x0001aa45) popup_call2_audio_out_window_t6_ParamLimits

0xb919,	// (0x0001aa45) popup_call2_audio_out_window_t6

0x93c9,	// (0x000184f5) main_vitu_pane

0x5115,	// (0x00014241) aid_size_cell_itu_ParamLimits

0x5115,	// (0x00014241) aid_size_cell_itu

0x9439,	// (0x00018565) bg_popup_window_pane_cp08_ParamLimits

0x9439,	// (0x00018565) bg_popup_window_pane_cp08

0x512b,	// (0x00014257) field_vitu_entry_pane_ParamLimits

0x512b,	// (0x00014257) field_vitu_entry_pane

0x5142,	// (0x0001426e) grid_vitu_function_pane_ParamLimits

0x5142,	// (0x0001426e) grid_vitu_function_pane

0x515d,	// (0x00014289) grid_vitu_itu_pane_ParamLimits

0x515d,	// (0x00014289) grid_vitu_itu_pane

0x517b,	// (0x000142a7) cell_vitu_itu_pane_ParamLimits

0x517b,	// (0x000142a7) cell_vitu_itu_pane

0x519f,	// (0x000142cb) cell_vitu_function_pane_ParamLimits

0x519f,	// (0x000142cb) cell_vitu_function_pane

0x9439,	// (0x00018565) bg_popup_sub_pane_cp08_ParamLimits

0x9439,	// (0x00018565) bg_popup_sub_pane_cp08

0x51ba,	// (0x000142e6) field_vitu_entry_pane_t1_ParamLimits

0x51ba,	// (0x000142e6) field_vitu_entry_pane_t1

0xc95b,	// (0x0001ba87) field_vitu_entry_pane_t2_ParamLimits

0xc95b,	// (0x0001ba87) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001e94c) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001e94c) field_vitu_entry_pane_t

0xc978,	// (0x0001baa4) bg_button_pane_cp05_ParamLimits

0xc978,	// (0x0001baa4) bg_button_pane_cp05

0x51d9,	// (0x00014305) cell_vitu_itu_pane_g1

0x51f1,	// (0x0001431d) cell_vitu_itu_pane_t1_ParamLimits

0x51f1,	// (0x0001431d) cell_vitu_itu_pane_t1

0x5203,	// (0x0001432f) cell_vitu_itu_pane_t2_ParamLimits

0x5203,	// (0x0001432f) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001e951) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001e951) cell_vitu_itu_pane_t

0xc986,	// (0x0001bab2) bg_button_pane_cp07

0x5246,	// (0x00014372) cell_vitu_function_pane_g1

0x9b5b,	// (0x00018c87) main_calc_pane_g1

0x012e,	// (0x0000f25a) aid_visual_content_pane

0x93c9,	// (0x000184f5) main_vradio_pane

0x524f,	// (0x0001437b) main_vradio_pane_g1_ParamLimits

0x524f,	// (0x0001437b) main_vradio_pane_g1

0xc990,	// (0x0001babc) main_vradio_pane_g2_ParamLimits

0xc990,	// (0x0001babc) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001e958) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001e958) main_vradio_pane_g

0x5268,	// (0x00014394) main_vradio_pane_t1_ParamLimits

0x5268,	// (0x00014394) main_vradio_pane_t1

0x527d,	// (0x000143a9) main_vradio_pane_t2_ParamLimits

0x527d,	// (0x000143a9) main_vradio_pane_t2

0xc99d,	// (0x0001bac9) main_vradio_pane_t3_ParamLimits

0xc99d,	// (0x0001bac9) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001e95d) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001e95d) main_vradio_pane_t

0x5292,	// (0x000143be) vradio_rocker_control_pane_ParamLimits

0x5292,	// (0x000143be) vradio_rocker_control_pane

0x52a4,	// (0x000143d0) vradio_station_info_pane_ParamLimits

0x52a4,	// (0x000143d0) vradio_station_info_pane

0xc9b1,	// (0x0001badd) vradio_frequency_info_pane_ParamLimits

0xc9b1,	// (0x0001badd) vradio_frequency_info_pane

0xc2f6,	// (0x0001b422) vradio_station_info_pane_g1

0xc9c0,	// (0x0001baec) vradio_station_info_pane_t1_ParamLimits

0xc9c0,	// (0x0001baec) vradio_station_info_pane_t1

0xc9e2,	// (0x0001bb0e) vradio_station_info_pane_t2_ParamLimits

0xc9e2,	// (0x0001bb0e) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001e964) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001e964) vradio_station_info_pane_t

0xc9f4,	// (0x0001bb20) vradio_tuning_pane

0xc9fc,	// (0x0001bb28) vradio_rocker_control_pane_g1

0xca04,	// (0x0001bb30) vradio_rocker_control_pane_g2

0xca0c,	// (0x0001bb38) vradio_rocker_control_pane_g3

0xca14,	// (0x0001bb40) vradio_rocker_control_pane_g4

0xca1c,	// (0x0001bb48) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001e969) vradio_rocker_control_pane_g

0x52b6,	// (0x000143e2) vradio_frequency_info_pane_g1

0xca24,	// (0x0001bb50) vradio_frequency_info_pane_t1_ParamLimits

0xca24,	// (0x0001bb50) vradio_frequency_info_pane_t1

0x52c0,	// (0x000143ec) vradio_tuning_pane_g1

0x52cb,	// (0x000143f7) vradio_tuning_pane_t1

0x93f7,	// (0x00018523) area_side_right_pane_ParamLimits

0x93f7,	// (0x00018523) area_side_right_pane

0xbd94,	// (0x0001aec0) status_small_pane_g1

0xbd9c,	// (0x0001aec8) status_small_pane_g2

0xbda5,	// (0x0001aed1) status_small_pane_g3

0xbdae,	// (0x0001aeda) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0001e729) status_small_pane_g

0xbdb7,	// (0x0001aee3) status_small_pane_t1

0x93c9,	// (0x000184f5) main_video3_pane

0xca38,	// (0x0001bb64) cams_zoom_vslider_pane

0xca40,	// (0x0001bb6c) image3_wide_pane_ParamLimits

0xca40,	// (0x0001bb6c) image3_wide_pane

0xca5a,	// (0x0001bb86) image3_wide_small_pane

0xca66,	// (0x0001bb92) main_video3_pane_g1_ParamLimits

0xca66,	// (0x0001bb92) main_video3_pane_g1

0xca82,	// (0x0001bbae) main_video3_pane_g2_ParamLimits

0xca82,	// (0x0001bbae) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001e974) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001e974) main_video3_pane_g

0xca9e,	// (0x0001bbca) main_video3_pane_t1_ParamLimits

0xca9e,	// (0x0001bbca) main_video3_pane_t1

0xcac9,	// (0x0001bbf5) main_video3_pane_t2_ParamLimits

0xcac9,	// (0x0001bbf5) main_video3_pane_t2

0xcaf4,	// (0x0001bc20) main_video3_pane_t3_ParamLimits

0xcaf4,	// (0x0001bc20) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001e979) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001e979) main_video3_pane_t

0xcb21,	// (0x0001bc4d) cams_zoom_vslider_pane_g1

0xcb2a,	// (0x0001bc56) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001e980) cams_zoom_vslider_pane_g

0xcb32,	// (0x0001bc5e) small_slider_vertical_pane

0xc2f6,	// (0x0001b422) small_slider_vertical_pane_g1

0xc2f6,	// (0x0001b422) small_slider_vertical_pane_g2

0xcb3a,	// (0x0001bc66) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001e985) small_slider_vertical_pane_g

0x93c9,	// (0x000184f5) main_hwr_training_pane

0xcb43,	// (0x0001bc6f) hwr_training_instruct_pane_ParamLimits

0xcb43,	// (0x0001bc6f) hwr_training_instruct_pane

0x52da,	// (0x00014406) hwr_training_navi_pane_ParamLimits

0x52da,	// (0x00014406) hwr_training_navi_pane

0x52f9,	// (0x00014425) hwr_training_write_pane_ParamLimits

0x52f9,	// (0x00014425) hwr_training_write_pane

0x93c9,	// (0x000184f5) bg_frame_shadow_pane

0xcb7a,	// (0x0001bca6) hwr_training_write_pane_g1

0xcb82,	// (0x0001bcae) hwr_training_write_pane_g2

0xcb8a,	// (0x0001bcb6) hwr_training_write_pane_g3

0xcb92,	// (0x0001bcbe) hwr_training_write_pane_g4

0xcb9a,	// (0x0001bcc6) hwr_training_write_pane_g5

0xcba2,	// (0x0001bcce) hwr_training_write_pane_g6

0xcbaa,	// (0x0001bcd6) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001e98c) hwr_training_write_pane_g

0xcbb2,	// (0x0001bcde) hwr_training_navi_pane_g1_ParamLimits

0xcbb2,	// (0x0001bcde) hwr_training_navi_pane_g1

0xcbc4,	// (0x0001bcf0) hwr_training_navi_pane_g2_ParamLimits

0xcbc4,	// (0x0001bcf0) hwr_training_navi_pane_g2

0xcbd6,	// (0x0001bd02) hwr_training_navi_pane_g3_ParamLimits

0xcbd6,	// (0x0001bd02) hwr_training_navi_pane_g3

0xcbe6,	// (0x0001bd12) hwr_training_navi_pane_g4_ParamLimits

0xcbe6,	// (0x0001bd12) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001e99b) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001e99b) hwr_training_navi_pane_g

0xcbf3,	// (0x0001bd1f) hwr_training_navi_pane_t1

0x5343,	// (0x0001446f) list_single_hwr_training_instruct_pane_ParamLimits

0x5343,	// (0x0001446f) list_single_hwr_training_instruct_pane

0xcc01,	// (0x0001bd2d) list_single_hwr_training_instruct_pane_t1

0xc236,	// (0x0001b362) bg_frame_shadow_pane_g1

0xcc10,	// (0x0001bd3c) bg_frame_shadow_pane_g2

0xcc18,	// (0x0001bd44) bg_frame_shadow_pane_g3

0xcc20,	// (0x0001bd4c) bg_frame_shadow_pane_g4

0xcc28,	// (0x0001bd54) bg_frame_shadow_pane_g5

0xcc30,	// (0x0001bd5c) bg_frame_shadow_pane_g6

0xcc38,	// (0x0001bd64) bg_frame_shadow_pane_g7

0x9cb4,	// (0x00018de0) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001e9a6) bg_frame_shadow_pane_g

0x93c9,	// (0x000184f5) main_video_tele_dialer_pane

0x535a,	// (0x00014486) aid_size_cell_video_keypad_ParamLimits

0x535a,	// (0x00014486) aid_size_cell_video_keypad

0x5374,	// (0x000144a0) grid_video_dialer_keypad_pane_ParamLimits

0x5374,	// (0x000144a0) grid_video_dialer_keypad_pane

0x53c2,	// (0x000144ee) video_down_pane_cp_ParamLimits

0x53c2,	// (0x000144ee) video_down_pane_cp

0x53f4,	// (0x00014520) cell_video_dialer_keypad_pane_ParamLimits

0x53f4,	// (0x00014520) cell_video_dialer_keypad_pane

0xcc40,	// (0x0001bd6c) bg_button_pane_cp08_ParamLimits

0xcc40,	// (0x0001bd6c) bg_button_pane_cp08

0x5416,	// (0x00014542) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5416,	// (0x00014542) cell_video_dialer_keypad_pane_g1

0x4a9f,	// (0x00013bcb) mup3_rocker2_pane_ParamLimits

0x4a9f,	// (0x00013bcb) mup3_rocker2_pane

0xc2f6,	// (0x0001b422) mup3_rocker2_pane_g1

0x35f0,	// (0x0001271c) main_dialer2_pane

0x93c9,	// (0x000184f5) main_mp4_pane

0xcc54,	// (0x0001bd80) main_mp4_pane_g1_ParamLimits

0xcc54,	// (0x0001bd80) main_mp4_pane_g1

0xcc54,	// (0x0001bd80) main_mp4_pane_g2_ParamLimits

0xcc54,	// (0x0001bd80) main_mp4_pane_g2

0x5451,	// (0x0001457d) main_mp4_pane_g3_ParamLimits

0x5451,	// (0x0001457d) main_mp4_pane_g3

0xcc62,	// (0x0001bd8e) main_mp4_pane_g4_ParamLimits

0xcc62,	// (0x0001bd8e) main_mp4_pane_g4

0xcc8a,	// (0x0001bdb6) main_mp4_pane_g5_ParamLimits

0xcc8a,	// (0x0001bdb6) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001e9c6) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001e9c6) main_mp4_pane_g

0xccda,	// (0x0001be06) main_mp4_pane_t1_ParamLimits

0xccda,	// (0x0001be06) main_mp4_pane_t1

0xcd36,	// (0x0001be62) main_mp4_pane_t2_ParamLimits

0xcd36,	// (0x0001be62) main_mp4_pane_t2

0xcd88,	// (0x0001beb4) main_mp4_pane_t3_ParamLimits

0xcd88,	// (0x0001beb4) main_mp4_pane_t3

0xcda8,	// (0x0001bed4) main_mp4_pane_t4_ParamLimits

0xcda8,	// (0x0001bed4) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001e9d3) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001e9d3) main_mp4_pane_t

0xcdec,	// (0x0001bf18) mp4_progress_pane_ParamLimits

0xcdec,	// (0x0001bf18) mp4_progress_pane

0xce36,	// (0x0001bf62) mp4_rocker_pane_ParamLimits

0xce36,	// (0x0001bf62) mp4_rocker_pane

0xce5e,	// (0x0001bf8a) mp4_progress_pane_t1

0xce77,	// (0x0001bfa3) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001e9dc) mp4_progress_pane_t

0xce90,	// (0x0001bfbc) mup_progress_pane_cp04

0xc2f6,	// (0x0001b422) mp4_rocker_pane_g1

0x548d,	// (0x000145b9) aid_cell_size_keypad2_ParamLimits

0x548d,	// (0x000145b9) aid_cell_size_keypad2

0x54a3,	// (0x000145cf) dialer2_ne_pane_ParamLimits

0x54a3,	// (0x000145cf) dialer2_ne_pane

0x54bd,	// (0x000145e9) grid_dialer2_keypad_pane_ParamLimits

0x54bd,	// (0x000145e9) grid_dialer2_keypad_pane

0xc0d9,	// (0x0001b205) bg_popup_call_pane_cp07_ParamLimits

0xc0d9,	// (0x0001b205) bg_popup_call_pane_cp07

0x54db,	// (0x00014607) dialer2_ne_pane_t1_ParamLimits

0x54db,	// (0x00014607) dialer2_ne_pane_t1

0x5518,	// (0x00014644) cell_dialer2_keypad_pane_ParamLimits

0x5518,	// (0x00014644) cell_dialer2_keypad_pane

0xceae,	// (0x0001bfda) bg_button_pane_pane_cp04_ParamLimits

0xceae,	// (0x0001bfda) bg_button_pane_pane_cp04

0x553a,	// (0x00014666) cell_dialer2_keypad_pane_g1_ParamLimits

0x553a,	// (0x00014666) cell_dialer2_keypad_pane_g1

0x1317,	// (0x00010443) aid_placing_vt_set_content_ParamLimits

0x1317,	// (0x00010443) aid_placing_vt_set_content

0x133f,	// (0x0001046b) aid_placing_vt_set_title_ParamLimits

0x133f,	// (0x0001046b) aid_placing_vt_set_title

0x93c9,	// (0x000184f5) main_image3_pane

0x5600,	// (0x0001472c) area_side_right_pane_cp01_ParamLimits

0x5600,	// (0x0001472c) area_side_right_pane_cp01

0xcc54,	// (0x0001bd80) main_image3_pane_g1_ParamLimits

0xcc54,	// (0x0001bd80) main_image3_pane_g1

0x5617,	// (0x00014743) main_image3_pane_g2_ParamLimits

0x5617,	// (0x00014743) main_image3_pane_g2

0x563f,	// (0x0001476b) main_image3_pane_g3_ParamLimits

0x563f,	// (0x0001476b) main_image3_pane_g3

0x5669,	// (0x00014795) main_image3_pane_g4_ParamLimits

0x5669,	// (0x00014795) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001e9eb) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001e9eb) main_image3_pane_g

0x5693,	// (0x000147bf) main_image3_pane_t1_ParamLimits

0x5693,	// (0x000147bf) main_image3_pane_t1

0x56eb,	// (0x00014817) main_image3_pane_t2_ParamLimits

0x56eb,	// (0x00014817) main_image3_pane_t2

0x573d,	// (0x00014869) main_image3_pane_t3_ParamLimits

0x573d,	// (0x00014869) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001e9f4) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001e9f4) main_image3_pane_t

0x9439,	// (0x00018565) grid_sctrl_middle_pane_cp01_ParamLimits

0x9439,	// (0x00018565) grid_sctrl_middle_pane_cp01

0x57c5,	// (0x000148f1) cell_sctrl_middle_pane_cp01_ParamLimits

0x57c5,	// (0x000148f1) cell_sctrl_middle_pane_cp01

0x57e2,	// (0x0001490e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57e2,	// (0x0001490e) cell_sctrl_middle_pane_cp01_g1

0x93c9,	// (0x000184f5) main_call4_pane

0x57f8,	// (0x00014924) aid_size_button_call4_ParamLimits

0x57f8,	// (0x00014924) aid_size_button_call4

0x5829,	// (0x00014955) call4_windows_pane_ParamLimits

0x5829,	// (0x00014955) call4_windows_pane

0x5849,	// (0x00014975) grid_call4_button_pane_ParamLimits

0x5849,	// (0x00014975) grid_call4_button_pane

0xceec,	// (0x0001c018) call4_windows_conf_pane

0xcf01,	// (0x0001c02d) popup_call4_audio_first_window_ParamLimits

0xcf01,	// (0x0001c02d) popup_call4_audio_first_window

0xcf4d,	// (0x0001c079) popup_call4_audio_second_window_ParamLimits

0xcf4d,	// (0x0001c079) popup_call4_audio_second_window

0xcf61,	// (0x0001c08d) popup_call4_audio_wait_window_ParamLimits

0xcf61,	// (0x0001c08d) popup_call4_audio_wait_window

0x5876,	// (0x000149a2) cell_call4_button_pane_ParamLimits

0x5876,	// (0x000149a2) cell_call4_button_pane

0x589f,	// (0x000149cb) bg_button_pane_cp09_ParamLimits

0x589f,	// (0x000149cb) bg_button_pane_cp09

0x58ab,	// (0x000149d7) cell_call4_button_pane_g1_ParamLimits

0x58ab,	// (0x000149d7) cell_call4_button_pane_g1

0x58d1,	// (0x000149fd) cell_call4_button_pane_t1_ParamLimits

0x58d1,	// (0x000149fd) cell_call4_button_pane_t1

0xcfa9,	// (0x0001c0d5) popup_call4_audio_conf_window_ParamLimits

0xcfa9,	// (0x0001c0d5) popup_call4_audio_conf_window

0x4aff,	// (0x00013c2b) mup3_progress_pane_t1_ParamLimits

0x4b1e,	// (0x00013c4a) mup3_progress_pane_t2_ParamLimits

0xc645,	// (0x0001b771) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0001e8cd) mup3_progress_pane_t_ParamLimits

0xc662,	// (0x0001b78e) mup_progress_pane_cp03_ParamLimits

0x510d,	// (0x00014239) mup3_control_keys_pane_g4_copy1

0xce1a,	// (0x0001bf46) mp4_rocker2_pane_ParamLimits

0xce1a,	// (0x0001bf46) mp4_rocker2_pane

0xcfbd,	// (0x0001c0e9) mp4_rocker2_pane_g1

0xcfc5,	// (0x0001c0f1) mp4_rocker2_pane_g2

0xcfcd,	// (0x0001c0f9) mp4_rocker2_pane_g3

0xcfd5,	// (0x0001c101) mp4_rocker2_pane_g4

0xcfdd,	// (0x0001c109) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001e9fd) mp4_rocker2_pane_g

0x93c9,	// (0x000184f5) main_camera4_pane

0x93c9,	// (0x000184f5) main_video4_pane

0x5390,	// (0x000144bc) main_video_tele_dialer_pane_t1_ParamLimits

0x5390,	// (0x000144bc) main_video_tele_dialer_pane_t1

0x53a9,	// (0x000144d5) main_video_tele_dialer_pane_t2_ParamLimits

0x53a9,	// (0x000144d5) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001e9b7) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001e9b7) main_video_tele_dialer_pane_t

0x590f,	// (0x00014a3b) cam4_autofocus_pane_ParamLimits

0x590f,	// (0x00014a3b) cam4_autofocus_pane

0x5925,	// (0x00014a51) cam4_image_uncrop_pane_ParamLimits

0x5925,	// (0x00014a51) cam4_image_uncrop_pane

0x593f,	// (0x00014a6b) cam4_indicators_pane_ParamLimits

0x593f,	// (0x00014a6b) cam4_indicators_pane

0x596a,	// (0x00014a96) main_camera4_pane_g1_ParamLimits

0x596a,	// (0x00014a96) main_camera4_pane_g1

0x597c,	// (0x00014aa8) main_camera4_pane_g2_ParamLimits

0x597c,	// (0x00014aa8) main_camera4_pane_g2

0x598f,	// (0x00014abb) main_camera4_pane_g3_ParamLimits

0x598f,	// (0x00014abb) main_camera4_pane_g3

0x59a2,	// (0x00014ace) main_camera4_pane_g4_ParamLimits

0x59a2,	// (0x00014ace) main_camera4_pane_g4

0x59b5,	// (0x00014ae1) main_camera4_pane_g5_ParamLimits

0x59b5,	// (0x00014ae1) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001ea08) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001ea08) main_camera4_pane_g

0x59d9,	// (0x00014b05) main_camera4_pane_t1_ParamLimits

0x59d9,	// (0x00014b05) main_camera4_pane_t1

0xc556,	// (0x0001b682) bg_tb_trans_pane_cp06

0xd009,	// (0x0001c135) cam4_indicators_pane_g1

0xd01a,	// (0x0001c146) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001ea23) cam4_indicators_pane_g

0xd038,	// (0x0001c164) cam4_indicators_pane_t1

0x5a3d,	// (0x00014b69) main_video4_pane_g1_ParamLimits

0x5a3d,	// (0x00014b69) main_video4_pane_g1

0x5a4c,	// (0x00014b78) main_video4_pane_g2_ParamLimits

0x5a4c,	// (0x00014b78) main_video4_pane_g2

0x5a5b,	// (0x00014b87) main_video4_pane_g3_ParamLimits

0x5a5b,	// (0x00014b87) main_video4_pane_g3

0x5a6a,	// (0x00014b96) main_video4_pane_g4_ParamLimits

0x5a6a,	// (0x00014b96) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001ea2a) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001ea2a) main_video4_pane_g

0x5a88,	// (0x00014bb4) vid4_indicators_pane_ParamLimits

0x5a88,	// (0x00014bb4) vid4_indicators_pane

0x5ab6,	// (0x00014be2) video4_image_uncrop_cif_pane_ParamLimits

0x5ab6,	// (0x00014be2) video4_image_uncrop_cif_pane

0x5ad0,	// (0x00014bfc) video4_image_uncrop_nhd_pane_ParamLimits

0x5ad0,	// (0x00014bfc) video4_image_uncrop_nhd_pane

0x5925,	// (0x00014a51) video4_image_uncrop_vga_pane_ParamLimits

0x5925,	// (0x00014a51) video4_image_uncrop_vga_pane

0x9439,	// (0x00018565) bg_tb_trans_pane_cp07

0xd062,	// (0x0001c18e) vid4_indicators_pane_g1

0xd076,	// (0x0001c1a2) vid4_indicators_pane_g2

0xd08a,	// (0x0001c1b6) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001ea35) vid4_indicators_pane_g

0xd0b7,	// (0x0001c1e3) vid4_indicators_pane_t1

0x5ae4,	// (0x00014c10) cam4_autofocus_pane_g1

0x5aec,	// (0x00014c18) cam4_autofocus_pane_g2

0x5af4,	// (0x00014c20) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001ea40) cam4_autofocus_pane_g

0x5afc,	// (0x00014c28) cam4_autofocus_pane_g3_copy1

0x53d8,	// (0x00014504) video_down_pane_cp_t1

0x53e6,	// (0x00014512) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001e9bc) video_down_pane_cp_t

0x9439,	// (0x00018565) popup_vitu2_window_ParamLimits

0x9439,	// (0x00018565) popup_vitu2_window

0x5b04,	// (0x00014c30) aid_size_cell2_itu2_ParamLimits

0x5b04,	// (0x00014c30) aid_size_cell2_itu2

0x5b2a,	// (0x00014c56) aid_size_cell_itu2_ParamLimits

0x5b2a,	// (0x00014c56) aid_size_cell_itu2

0x5b86,	// (0x00014cb2) bg_popup_window_pane_cp09_ParamLimits

0x5b86,	// (0x00014cb2) bg_popup_window_pane_cp09

0x5b94,	// (0x00014cc0) field_vitu2_entry_pane_ParamLimits

0x5b94,	// (0x00014cc0) field_vitu2_entry_pane

0x5bba,	// (0x00014ce6) grid_vitu2_function_pane_ParamLimits

0x5bba,	// (0x00014ce6) grid_vitu2_function_pane

0x5c0b,	// (0x00014d37) grid_vitu2_itu_pane_ParamLimits

0x5c0b,	// (0x00014d37) grid_vitu2_itu_pane

0x5c9c,	// (0x00014dc8) cell_vitu2_itu_pane_ParamLimits

0x5c9c,	// (0x00014dc8) cell_vitu2_itu_pane

0x5cc0,	// (0x00014dec) cell_vitu2_function_pane_ParamLimits

0x5cc0,	// (0x00014dec) cell_vitu2_function_pane

0xd0ce,	// (0x0001c1fa) bg_popup_call_pane_cp08_ParamLimits

0xd0ce,	// (0x0001c1fa) bg_popup_call_pane_cp08

0xd0e7,	// (0x0001c213) field_vitu2_entry_pane_g1

0xd0f3,	// (0x0001c21f) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001ea47) field_vitu2_entry_pane_g

0x5cff,	// (0x00014e2b) field_vitu2_entry_pane_t1_ParamLimits

0x5cff,	// (0x00014e2b) field_vitu2_entry_pane_t1

0xd10d,	// (0x0001c239) field_vitu2_entry_pane_t2_ParamLimits

0xd10d,	// (0x0001c239) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001ea4e) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001ea4e) field_vitu2_entry_pane_t

0x5d2f,	// (0x00014e5b) bg_button_pane_cp010_ParamLimits

0x5d2f,	// (0x00014e5b) bg_button_pane_cp010

0x5d3d,	// (0x00014e69) cell_vitu2_itu_pane_g1

0x5d68,	// (0x00014e94) cell_vitu2_itu_pane_t1_ParamLimits

0x5d68,	// (0x00014e94) cell_vitu2_itu_pane_t1

0x5dc6,	// (0x00014ef2) cell_vitu2_itu_pane_t2_ParamLimits

0x5dc6,	// (0x00014ef2) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001ea58) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001ea58) cell_vitu2_itu_pane_t

0x9439,	// (0x00018565) bg_button_pane_cp011

0x5eb2,	// (0x00014fde) cell_vitu2_function_pane_g1

0x93c9,	// (0x000184f5) main_myfav_hc_pane

0x578d,	// (0x000148b9) popup_image3_note_pane_ParamLimits

0x578d,	// (0x000148b9) popup_image3_note_pane

0x57a9,	// (0x000148d5) popup_image3_tool_bar_pane_ParamLimits

0x57a9,	// (0x000148d5) popup_image3_tool_bar_pane

0x5e54,	// (0x00014f80) cell_vitu2_itu_pane_t3_ParamLimits

0x5e54,	// (0x00014f80) cell_vitu2_itu_pane_t3

0x93c9,	// (0x000184f5) bg_popup_trans_pane

0xd132,	// (0x0001c25e) grid_image3_tool_bar_pane

0xd13c,	// (0x0001c268) bg_popup_trans_pane_g1

0xa069,	// (0x00019195) bg_popup_trans_pane_g2

0xd144,	// (0x0001c270) bg_popup_trans_pane_g3

0xd14c,	// (0x0001c278) bg_popup_trans_pane_g4

0xd154,	// (0x0001c280) bg_popup_trans_pane_g5

0xd15c,	// (0x0001c288) bg_popup_trans_pane_g6

0xd164,	// (0x0001c290) bg_popup_trans_pane_g7

0xd16c,	// (0x0001c298) bg_popup_trans_pane_g8

0xa049,	// (0x00019175) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001ea5f) bg_popup_trans_pane_g

0xd174,	// (0x0001c2a0) cell_image3_tool_bar_pane_ParamLimits

0xd174,	// (0x0001c2a0) cell_image3_tool_bar_pane

0xc2f6,	// (0x0001b422) cell_image3_tool_bar_pane_g1

0x93c9,	// (0x000184f5) bg_popup_trans_pane_cp1

0xd188,	// (0x0001c2b4) popup_image3_note_pane_t1

0xd196,	// (0x0001c2c2) popup_image3_note_pane_t2

0xd1a4,	// (0x0001c2d0) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001ea72) popup_image3_note_pane_t

0xd1b2,	// (0x0001c2de) popup_image3_note_pane_t3_copy1

0x5ec6,	// (0x00014ff2) bg_myfav_hc_instruction_pane_ParamLimits

0x5ec6,	// (0x00014ff2) bg_myfav_hc_instruction_pane

0x5edc,	// (0x00015008) cell_myfav_contact_pane_ParamLimits

0x5edc,	// (0x00015008) cell_myfav_contact_pane

0x5efa,	// (0x00015026) cell_myfav_contact_pane_cp1_ParamLimits

0x5efa,	// (0x00015026) cell_myfav_contact_pane_cp1

0x5f12,	// (0x0001503e) cell_myfav_contact_pane_cp2_ParamLimits

0x5f12,	// (0x0001503e) cell_myfav_contact_pane_cp2

0x5f2a,	// (0x00015056) cell_myfav_contact_pane_cp3_ParamLimits

0x5f2a,	// (0x00015056) cell_myfav_contact_pane_cp3

0x5f41,	// (0x0001506d) cell_myfav_contact_pane_cp4_ParamLimits

0x5f41,	// (0x0001506d) cell_myfav_contact_pane_cp4

0x5f59,	// (0x00015085) cell_myfav_contact_pane_cp5_ParamLimits

0x5f59,	// (0x00015085) cell_myfav_contact_pane_cp5

0x5f6d,	// (0x00015099) cell_myfav_contact_pane_cp6_ParamLimits

0x5f6d,	// (0x00015099) cell_myfav_contact_pane_cp6

0x5f83,	// (0x000150af) cell_myfav_contact_pane_cp7_ParamLimits

0x5f83,	// (0x000150af) cell_myfav_contact_pane_cp7

0xd1c0,	// (0x0001c2ec) listscroll_gen_pane_cp05

0x5f9d,	// (0x000150c9) main_myfav_hc_pane_g1_ParamLimits

0x5f9d,	// (0x000150c9) main_myfav_hc_pane_g1

0x5fb7,	// (0x000150e3) main_myfav_hc_pane_g2_ParamLimits

0x5fb7,	// (0x000150e3) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001ea79) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001ea79) main_myfav_hc_pane_g

0x5fe9,	// (0x00015115) main_myfav_hc_pane_t1_ParamLimits

0x5fe9,	// (0x00015115) main_myfav_hc_pane_t1

0xd1c9,	// (0x0001c2f5) main_myfav_hc_pane_t2_ParamLimits

0xd1c9,	// (0x0001c2f5) main_myfav_hc_pane_t2

0xd1db,	// (0x0001c307) main_myfav_hc_pane_t3_ParamLimits

0xd1db,	// (0x0001c307) main_myfav_hc_pane_t3

0x6000,	// (0x0001512c) main_myfav_hc_pane_t4_ParamLimits

0x6000,	// (0x0001512c) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001ea80) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001ea80) main_myfav_hc_pane_t

0xc2f6,	// (0x0001b422) bg_myfav_hc_instruction_pane_g1

0xd1ed,	// (0x0001c319) cell_myfav_contact_pane_g1_ParamLimits

0xd1ed,	// (0x0001c319) cell_myfav_contact_pane_g1

0xd1ed,	// (0x0001c319) cell_myfav_contact_pane_g2_ParamLimits

0xd1ed,	// (0x0001c319) cell_myfav_contact_pane_g2

0xd1f9,	// (0x0001c325) cell_myfav_contact_pane_g3_ParamLimits

0xd1f9,	// (0x0001c325) cell_myfav_contact_pane_g3

0xc62f,	// (0x0001b75b) cell_myfav_contact_pane_g4_ParamLimits

0xc62f,	// (0x0001b75b) cell_myfav_contact_pane_g4

0xd206,	// (0x0001c332) cell_myfav_contact_pane_g5_ParamLimits

0xd206,	// (0x0001c332) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001ea8b) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001ea8b) cell_myfav_contact_pane_g

0x5fd1,	// (0x000150fd) main_myfav_hc_pane_g3_ParamLimits

0x5fd1,	// (0x000150fd) main_myfav_hc_pane_g3

0x0269,	// (0x0000f395) popup_adpt_find_window

0x6028,	// (0x00015154) afind_page_pane_ParamLimits

0x6028,	// (0x00015154) afind_page_pane

0x603d,	// (0x00015169) aid_size_cell_afind_ParamLimits

0x603d,	// (0x00015169) aid_size_cell_afind

0x605b,	// (0x00015187) bg_popup_sub_pane_cp09_ParamLimits

0x605b,	// (0x00015187) bg_popup_sub_pane_cp09

0x6068,	// (0x00015194) find_pane_cp01_ParamLimits

0x6068,	// (0x00015194) find_pane_cp01

0xd212,	// (0x0001c33e) grid_afind_control_pane_ParamLimits

0xd212,	// (0x0001c33e) grid_afind_control_pane

0x6075,	// (0x000151a1) grid_afind_pane_ParamLimits

0x6075,	// (0x000151a1) grid_afind_pane

0x6094,	// (0x000151c0) cell_afind_pane_ParamLimits

0x6094,	// (0x000151c0) cell_afind_pane

0xc2f6,	// (0x0001b422) afind_page_pane_g1

0x60f5,	// (0x00015221) afind_page_pane_g2

0x60fe,	// (0x0001522a) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001ea96) afind_page_pane_g

0x6107,	// (0x00015233) afind_page_pane_t1

0xd25c,	// (0x0001c388) cell_afind_grid_control_pane_ParamLimits

0xd25c,	// (0x0001c388) cell_afind_grid_control_pane

0xceae,	// (0x0001bfda) bg_button_pane_cp69_ParamLimits

0xceae,	// (0x0001bfda) bg_button_pane_cp69

0x6127,	// (0x00015253) cell_afind_pane_g1_ParamLimits

0x6127,	// (0x00015253) cell_afind_pane_g1

0x6134,	// (0x00015260) cell_afind_pane_t1_ParamLimits

0x6134,	// (0x00015260) cell_afind_pane_t1

0x9e62,	// (0x00018f8e) bg_button_pane_cp72

0xd26b,	// (0x0001c397) cell_afind_grid_control_pane_g1

0x30ae,	// (0x000121da) aid_image_placing_area_ParamLimits

0x30ae,	// (0x000121da) aid_image_placing_area

0xc943,	// (0x0001ba6f) field_vitu_entry_pane_g1_ParamLimits

0xc943,	// (0x0001ba6f) field_vitu_entry_pane_g1

0xc94f,	// (0x0001ba7b) field_vitu_entry_pane_g2_ParamLimits

0xc94f,	// (0x0001ba7b) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001e947) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001e947) field_vitu_entry_pane_g

0x51d9,	// (0x00014305) cell_vitu_itu_pane_g1_ParamLimits

0x5229,	// (0x00014355) cell_vitu_itu_pane_t3_ParamLimits

0x5229,	// (0x00014355) cell_vitu_itu_pane_t3

0xce5e,	// (0x0001bf8a) mp4_progress_pane_t1_ParamLimits

0xce77,	// (0x0001bfa3) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001e9dc) mp4_progress_pane_t_ParamLimits

0xce90,	// (0x0001bfbc) mup_progress_pane_cp04_ParamLimits

0x6014,	// (0x00015140) main_myfav_hc_pane_t5_ParamLimits

0x6014,	// (0x00015140) main_myfav_hc_pane_t5

0x93ef,	// (0x0001851b) aid_zoom_text_primary

0x0269,	// (0x0000f395) popup_adpt_find_window_ParamLimits

0x9439,	// (0x00018565) main_cam_set_pane

0x5956,	// (0x00014a82) cam4_zoom_pane_ParamLimits

0x5956,	// (0x00014a82) cam4_zoom_pane

0x6146,	// (0x00015272) main_cam_set_pane_g1_ParamLimits

0x6146,	// (0x00015272) main_cam_set_pane_g1

0x6154,	// (0x00015280) main_cam_set_pane_g2_ParamLimits

0x6154,	// (0x00015280) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001ea9d) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001ea9d) main_cam_set_pane_g

0x6175,	// (0x000152a1) main_cam_set_pane_t1_ParamLimits

0x6175,	// (0x000152a1) main_cam_set_pane_t1

0x6190,	// (0x000152bc) main_cset_listscroll_pane_ParamLimits

0x6190,	// (0x000152bc) main_cset_listscroll_pane

0x61b0,	// (0x000152dc) main_cset_slider_pane_ParamLimits

0x61b0,	// (0x000152dc) main_cset_slider_pane

0xd27c,	// (0x0001c3a8) main_cset_list_pane_ParamLimits

0xd27c,	// (0x0001c3a8) main_cset_list_pane

0xd28c,	// (0x0001c3b8) scroll_pane_cp028

0x61d6,	// (0x00015302) aid_area_touch_slider

0x61f2,	// (0x0001531e) cset_slider_pane

0x621c,	// (0x00015348) main_cset_slider_pane_g1

0x6231,	// (0x0001535d) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001eaa2) main_cset_slider_pane_g

0xd2c5,	// (0x0001c3f1) main_cset_slider_pane_t1

0x62ed,	// (0x00015419) main_cset_slider_pane_t2

0x6307,	// (0x00015433) main_cset_slider_pane_t3

0x6321,	// (0x0001544d) main_cset_slider_pane_t4

0x633b,	// (0x00015467) main_cset_slider_pane_t5

0x6355,	// (0x00015481) main_cset_slider_pane_t6

0x636a,	// (0x00015496) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001eac7) main_cset_slider_pane_t

0x646e,	// (0x0001559a) cset_list_set_pane_ParamLimits

0x646e,	// (0x0001559a) cset_list_set_pane

0x6481,	// (0x000155ad) aid_position_infowindow_above

0x6489,	// (0x000155b5) aid_position_infowindow_below

0x6491,	// (0x000155bd) cset_list_set_pane_g1_ParamLimits

0x6491,	// (0x000155bd) cset_list_set_pane_g1

0x649d,	// (0x000155c9) cset_list_set_pane_g3_ParamLimits

0x649d,	// (0x000155c9) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001eae6) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001eae6) cset_list_set_pane_g

0x64ac,	// (0x000155d8) cset_list_set_pane_t1_ParamLimits

0x64ac,	// (0x000155d8) cset_list_set_pane_t1

0x9439,	// (0x00018565) list_highlight_pane_cp021_ParamLimits

0x9439,	// (0x00018565) list_highlight_pane_cp021

0xaa83,	// (0x00019baf) cset_slider_pane_g1

0xaa95,	// (0x00019bc1) cset_slider_pane_g2

0xaa8c,	// (0x00019bb8) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001eaeb) cset_slider_pane_g

0xd365,	// (0x0001c491) aid_area_touch_cam4_zoom

0xd36d,	// (0x0001c499) cam4_zoom_cont_pane

0xd375,	// (0x0001c4a1) cam4_zoom_pane_g1

0xd37d,	// (0x0001c4a9) cam4_zoom_pane_g2

0x64c1,	// (0x000155ed) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001eaf2) cam4_zoom_pane_g

0xd385,	// (0x0001c4b1) cam4_zoom_cont_pane_g1

0xd38e,	// (0x0001c4ba) cam4_zoom_cont_pane_g2

0xd397,	// (0x0001c4c3) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001eaf9) cam4_zoom_cont_pane_g

0x5816,	// (0x00014942) call4_image_pane_ParamLimits

0x5816,	// (0x00014942) call4_image_pane

0xceec,	// (0x0001c018) call4_windows_conf_pane_ParamLimits

0xcf2b,	// (0x0001c057) popup_call4_audio_in_window_ParamLimits

0xcf2b,	// (0x0001c057) popup_call4_audio_in_window

0x93c9,	// (0x000184f5) bg_popup_call2_act_pane_cp02

0xcfa1,	// (0x0001c0cd) call4_list_conf_pane

0xc2f6,	// (0x0001b422) call4_image_pane_g1

0xc2f6,	// (0x0001b422) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0001e80d) call4_image_pane_g

0xd3a0,	// (0x0001c4cc) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3a0,	// (0x0001c4cc) list_single_graphic_popup_conf4_pane

0x93c9,	// (0x000184f5) list_highlight_pane_cp022

0xd3b3,	// (0x0001c4df) list_single_graphic_popup_conf4_pane_g1

0xa650,	// (0x0001977c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001eb00) list_single_graphic_popup_conf4_pane_g

0xd3bb,	// (0x0001c4e7) list_single_graphic_popup_conf4_pane_t1

0x1463,	// (0x0001058f) popup_vtel_slider_window_ParamLimits

0x1463,	// (0x0001058f) popup_vtel_slider_window

0xce9c,	// (0x0001bfc8) dialer2_ne_pane_t2_ParamLimits

0xce9c,	// (0x0001bfc8) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001e9e1) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001e9e1) dialer2_ne_pane_t

0xc0d9,	// (0x0001b205) bg_popup_sub_pane_cp010_ParamLimits

0xc0d9,	// (0x0001b205) bg_popup_sub_pane_cp010

0x64c9,	// (0x000155f5) popup_vtel_slider_window_g1_ParamLimits

0x64c9,	// (0x000155f5) popup_vtel_slider_window_g1

0x64dc,	// (0x00015608) popup_vtel_slider_window_g2_ParamLimits

0x64dc,	// (0x00015608) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001eb05) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001eb05) popup_vtel_slider_window_g

0x6532,	// (0x0001565e) vtel_slider_pane_ParamLimits

0x6532,	// (0x0001565e) vtel_slider_pane

0x6554,	// (0x00015680) vtel_slider_pane_g1_ParamLimits

0x6554,	// (0x00015680) vtel_slider_pane_g1

0x6568,	// (0x00015694) vtel_slider_pane_g2_ParamLimits

0x6568,	// (0x00015694) vtel_slider_pane_g2

0x6580,	// (0x000156ac) vtel_slider_pane_g3_ParamLimits

0x6580,	// (0x000156ac) vtel_slider_pane_g3

0x6554,	// (0x00015680) vtel_slider_pane_g4_ParamLimits

0x6554,	// (0x00015680) vtel_slider_pane_g4

0x6596,	// (0x000156c2) vtel_slider_pane_g5_ParamLimits

0x6596,	// (0x000156c2) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001eb0e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001eb0e) vtel_slider_pane_g

0x9439,	// (0x00018565) main_gallery2_pane

0x5b56,	// (0x00014c82) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b56,	// (0x00014c82) aid_size_row_itut2_dropdow_list

0x5be2,	// (0x00014d0e) grid_vitu2_function_top_pane_ParamLimits

0x5be2,	// (0x00014d0e) grid_vitu2_function_top_pane

0x5c47,	// (0x00014d73) popup_vitu2_dropdown_list_window_ParamLimits

0x5c47,	// (0x00014d73) popup_vitu2_dropdown_list_window

0x5c70,	// (0x00014d9c) popup_vitu2_match_list_window

0x65ba,	// (0x000156e6) cell_vitu2_function_top_pane_ParamLimits

0x65ba,	// (0x000156e6) cell_vitu2_function_top_pane

0x65d8,	// (0x00015704) cell_vitu2_function_top_pane_cp01_ParamLimits

0x65d8,	// (0x00015704) cell_vitu2_function_top_pane_cp01

0x65f6,	// (0x00015722) cell_vitu2_function_top_wide_pane_ParamLimits

0x65f6,	// (0x00015722) cell_vitu2_function_top_wide_pane

0x9439,	// (0x00018565) bg_button_pane_cp012

0x6614,	// (0x00015740) cell_vitu2_function_top_pane_g1

0xd3d1,	// (0x0001c4fd) bg_button_pane_cp013_ParamLimits

0xd3d1,	// (0x0001c4fd) bg_button_pane_cp013

0x6628,	// (0x00015754) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6628,	// (0x00015754) cell_vitu2_function_top_wide_pane_g1

0x9439,	// (0x00018565) bg_popup_sub_pane_cp20

0x6640,	// (0x0001576c) list_vitu2_match_list_pane

0xd13c,	// (0x0001c268) bg_popup_sub_pane_cp20_g1

0xd144,	// (0x0001c270) bg_popup_sub_pane_cp20_g2

0xa069,	// (0x00019195) bg_popup_sub_pane_cp20_g3

0xd14c,	// (0x0001c278) bg_popup_sub_pane_cp20_g4

0xa049,	// (0x00019175) bg_popup_sub_pane_cp20_g5

0xd3ed,	// (0x0001c519) bg_popup_sub_pane_cp20_g6

0xd15c,	// (0x0001c288) bg_popup_sub_pane_cp20_g7

0xd164,	// (0x0001c290) bg_popup_sub_pane_cp20_g8

0xd16c,	// (0x0001c298) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001eb19) bg_popup_sub_pane_cp20_g

0xd3f5,	// (0x0001c521) list_vitu2_match_list_item_pane_ParamLimits

0xd3f5,	// (0x0001c521) list_vitu2_match_list_item_pane

0xd407,	// (0x0001c533) list_vitu2_match_list_item_pane_t1

0x93c9,	// (0x000184f5) bg_popup_sub_pane_cp21

0xa4e1,	// (0x0001960d) grid_vitu2_dropdown_list_pane

0x66ab,	// (0x000157d7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66ab,	// (0x000157d7) cell_vitu2_dropdown_list_char_pane

0x66cc,	// (0x000157f8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x66cc,	// (0x000157f8) cell_vitu2_dropdown_list_ctrl_pane

0xd415,	// (0x0001c541) cell_vitu2_dropdown_list_char_pane_g1

0xd41e,	// (0x0001c54a) cell_vitu2_dropdown_list_char_pane_g2

0xd427,	// (0x0001c553) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001eb36) cell_vitu2_dropdown_list_char_pane_g

0x66f8,	// (0x00015824) cell_vitu2_dropdown_list_char_pane_t1

0x6706,	// (0x00015832) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6706,	// (0x00015832) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6716,	// (0x00015842) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6716,	// (0x00015842) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6727,	// (0x00015853) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6727,	// (0x00015853) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6737,	// (0x00015863) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6737,	// (0x00015863) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc556,	// (0x0001b682) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc556,	// (0x0001b682) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001eb3d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001eb3d) cell_vitu2_dropdown_list_ctrl_pane_g

0x6753,	// (0x0001587f) aid_size_cell_gallery2_ParamLimits

0x6753,	// (0x0001587f) aid_size_cell_gallery2

0x6771,	// (0x0001589d) grid_gallery2_pane_ParamLimits

0x6771,	// (0x0001589d) grid_gallery2_pane

0x678b,	// (0x000158b7) scroll_pane_cp029_ParamLimits

0x678b,	// (0x000158b7) scroll_pane_cp029

0x6797,	// (0x000158c3) cell_gallery2_pane_ParamLimits

0x6797,	// (0x000158c3) cell_gallery2_pane

0xd430,	// (0x0001c55c) cell_gallery2_pane_g2

0x67f3,	// (0x0001591f) cell_gallery2_pane_g3

0xd438,	// (0x0001c564) cell_gallery2_pane_g4

0xd440,	// (0x0001c56c) cell_gallery2_pane_g5

0xa92d,	// (0x00019a59) grid_highlight_pane_cp10

0x5c70,	// (0x00014d9c) popup_vitu2_match_list_window_ParamLimits

0x5c85,	// (0x00014db1) popup_vitu2_query_window_ParamLimits

0x5c85,	// (0x00014db1) popup_vitu2_query_window

0x93c9,	// (0x000184f5) bg_vitu2_candi_button_pane

0xd415,	// (0x0001c541) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd41e,	// (0x0001c54a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd427,	// (0x0001c553) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67fb,	// (0x00015927) bg_button_pane_cp015

0x680f,	// (0x0001593b) bg_button_pane_cp016

0x6822,	// (0x0001594e) bg_button_pane_cp017

0xbdd9,	// (0x0001af05) bg_popup_sub_pane_cp22

0xd448,	// (0x0001c574) popup_vitu2_query_window_g1

0x6867,	// (0x00015993) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001eb48) popup_vitu2_query_window_g

0x6886,	// (0x000159b2) popup_vitu2_query_window_t1_ParamLimits

0x6886,	// (0x000159b2) popup_vitu2_query_window_t1

0x68bb,	// (0x000159e7) popup_vitu2_query_window_t2_ParamLimits

0x68bb,	// (0x000159e7) popup_vitu2_query_window_t2

0x68cd,	// (0x000159f9) popup_vitu2_query_window_t3_ParamLimits

0x68cd,	// (0x000159f9) popup_vitu2_query_window_t3

0x68f5,	// (0x00015a21) popup_vitu2_query_window_t4_ParamLimits

0x68f5,	// (0x00015a21) popup_vitu2_query_window_t4

0x6916,	// (0x00015a42) popup_vitu2_query_window_t5_ParamLimits

0x6916,	// (0x00015a42) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001eb4f) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001eb4f) popup_vitu2_query_window_t

0xd274,	// (0x0001c3a0) main_cset_text_pane

0x61d6,	// (0x00015302) aid_area_touch_slider_ParamLimits

0x61f2,	// (0x0001531e) cset_slider_pane_ParamLimits

0x621c,	// (0x00015348) main_cset_slider_pane_g1_ParamLimits

0x6231,	// (0x0001535d) main_cset_slider_pane_g2_ParamLimits

0xd295,	// (0x0001c3c1) main_cset_slider_pane_g3_ParamLimits

0xd295,	// (0x0001c3c1) main_cset_slider_pane_g3

0x6246,	// (0x00015372) main_cset_slider_pane_g4_ParamLimits

0x6246,	// (0x00015372) main_cset_slider_pane_g4

0x6255,	// (0x00015381) main_cset_slider_pane_g5_ParamLimits

0x6255,	// (0x00015381) main_cset_slider_pane_g5

0x6261,	// (0x0001538d) main_cset_slider_pane_g6_ParamLimits

0x6261,	// (0x0001538d) main_cset_slider_pane_g6

0xf976,	// (0x0001eaa2) main_cset_slider_pane_g_ParamLimits

0xd2c5,	// (0x0001c3f1) main_cset_slider_pane_t1_ParamLimits

0x62ed,	// (0x00015419) main_cset_slider_pane_t2_ParamLimits

0x6307,	// (0x00015433) main_cset_slider_pane_t3_ParamLimits

0x6321,	// (0x0001544d) main_cset_slider_pane_t4_ParamLimits

0x633b,	// (0x00015467) main_cset_slider_pane_t5_ParamLimits

0x6355,	// (0x00015481) main_cset_slider_pane_t6_ParamLimits

0x636a,	// (0x00015496) main_cset_slider_pane_t7_ParamLimits

0x6394,	// (0x000154c0) main_cset_slider_pane_t8_ParamLimits

0x6394,	// (0x000154c0) main_cset_slider_pane_t8

0x63bc,	// (0x000154e8) main_cset_slider_pane_t9_ParamLimits

0x63bc,	// (0x000154e8) main_cset_slider_pane_t9

0x63e4,	// (0x00015510) main_cset_slider_pane_t10_ParamLimits

0x63e4,	// (0x00015510) main_cset_slider_pane_t10

0x640c,	// (0x00015538) main_cset_slider_pane_t11_ParamLimits

0x640c,	// (0x00015538) main_cset_slider_pane_t11

0x6434,	// (0x00015560) main_cset_slider_pane_t12_ParamLimits

0x6434,	// (0x00015560) main_cset_slider_pane_t12

0x6451,	// (0x0001557d) main_cset_slider_pane_t13_ParamLimits

0x6451,	// (0x0001557d) main_cset_slider_pane_t13

0xf99b,	// (0x0001eac7) main_cset_slider_pane_t_ParamLimits

0x93c9,	// (0x000184f5) bg_popup_sub_pane_cp011

0xd454,	// (0x0001c580) main_cset_text_pane_g1

0xd45c,	// (0x0001c588) main_cset_text_pane_t1

0xd46a,	// (0x0001c596) main_cset_text_pane_t2

0xd478,	// (0x0001c5a4) main_cset_text_pane_t3

0xd486,	// (0x0001c5b2) main_cset_text_pane_t4

0xd494,	// (0x0001c5c0) main_cset_text_pane_t5

0xd4a2,	// (0x0001c5ce) main_cset_text_pane_t6

0xd4b0,	// (0x0001c5dc) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001eb5e) main_cset_text_pane_t

0x93c9,	// (0x000184f5) main_cam4_burst_pane

0x93c9,	// (0x000184f5) main_cam5_pane

0x6115,	// (0x00015241) bg_button_pane_cp019

0x611e,	// (0x0001524a) bg_button_pane_cp020

0xd2a1,	// (0x0001c3cd) main_cset_slider_pane_g7_ParamLimits

0xd2a1,	// (0x0001c3cd) main_cset_slider_pane_g7

0xd2ad,	// (0x0001c3d9) main_cset_slider_pane_g8_ParamLimits

0xd2ad,	// (0x0001c3d9) main_cset_slider_pane_g8

0x6275,	// (0x000153a1) main_cset_slider_pane_g9_ParamLimits

0x6275,	// (0x000153a1) main_cset_slider_pane_g9

0x6281,	// (0x000153ad) main_cset_slider_pane_g10_ParamLimits

0x6281,	// (0x000153ad) main_cset_slider_pane_g10

0x628d,	// (0x000153b9) main_cset_slider_pane_g11_ParamLimits

0x628d,	// (0x000153b9) main_cset_slider_pane_g11

0x6299,	// (0x000153c5) main_cset_slider_pane_g12_ParamLimits

0x6299,	// (0x000153c5) main_cset_slider_pane_g12

0x62a5,	// (0x000153d1) main_cset_slider_pane_g13_ParamLimits

0x62a5,	// (0x000153d1) main_cset_slider_pane_g13

0x62b1,	// (0x000153dd) main_cset_slider_pane_g14_ParamLimits

0x62b1,	// (0x000153dd) main_cset_slider_pane_g14

0x62bd,	// (0x000153e9) main_cset_slider_pane_g15_ParamLimits

0x62bd,	// (0x000153e9) main_cset_slider_pane_g15

0xd2f3,	// (0x0001c41f) main_cset_slider_pane_t14_ParamLimits

0xd2f3,	// (0x0001c41f) main_cset_slider_pane_t14

0xd32c,	// (0x0001c458) main_cset_slider_pane_t15_ParamLimits

0xd32c,	// (0x0001c458) main_cset_slider_pane_t15

0x698d,	// (0x00015ab9) aid_cam4_burst_size_cell_ParamLimits

0x698d,	// (0x00015ab9) aid_cam4_burst_size_cell

0x69ad,	// (0x00015ad9) grid_cam4_burst_pane_ParamLimits

0x69ad,	// (0x00015ad9) grid_cam4_burst_pane

0x69e5,	// (0x00015b11) linegrid_cam4_burst_pane_ParamLimits

0x69e5,	// (0x00015b11) linegrid_cam4_burst_pane

0xd4be,	// (0x0001c5ea) scroll_pane_cp30_ParamLimits

0xd4be,	// (0x0001c5ea) scroll_pane_cp30

0x6a0b,	// (0x00015b37) cell_cam4_burst_pane_ParamLimits

0x6a0b,	// (0x00015b37) cell_cam4_burst_pane

0xd4ca,	// (0x0001c5f6) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4ca,	// (0x0001c5f6) linegrid_cam4_burst_pane_g1

0x6a58,	// (0x00015b84) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a58,	// (0x00015b84) linegrid_cam4_burst_pane_g2

0xd4d7,	// (0x0001c603) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4d7,	// (0x0001c603) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001eb6d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001eb6d) linegrid_cam4_burst_pane_g

0x6a69,	// (0x00015b95) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a69,	// (0x00015b95) linegrid_cam4_burst_pane_g3_copy1

0xd4e4,	// (0x0001c610) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4e4,	// (0x0001c610) linegrid_cam4_burst_pane_g4

0x6a83,	// (0x00015baf) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a83,	// (0x00015baf) linegrid_cam4_burst_pane_g5

0x6a94,	// (0x00015bc0) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a94,	// (0x00015bc0) linegrid_cam4_burst_pane_g6

0xd4f1,	// (0x0001c61d) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4f1,	// (0x0001c61d) linegrid_cam4_burst_pane_g7

0x6aab,	// (0x00015bd7) cell_cam4_burst_pane_g1

0xd50a,	// (0x0001c636) main_cam5_pane_t1_ParamLimits

0xd50a,	// (0x0001c636) main_cam5_pane_t1

0xd51c,	// (0x0001c648) main_cam5_pane_t2_ParamLimits

0xd51c,	// (0x0001c648) main_cam5_pane_t2

0xd52e,	// (0x0001c65a) main_cam5_pane_t3_ParamLimits

0xd52e,	// (0x0001c65a) main_cam5_pane_t3

0xd540,	// (0x0001c66c) main_cam5_pane_t4_ParamLimits

0xd540,	// (0x0001c66c) main_cam5_pane_t4

0xd558,	// (0x0001c684) main_cam5_pane_t5_ParamLimits

0xd558,	// (0x0001c684) main_cam5_pane_t5

0xd56c,	// (0x0001c698) main_cam5_pane_t6_ParamLimits

0xd56c,	// (0x0001c698) main_cam5_pane_t6

0xd580,	// (0x0001c6ac) main_cam5_pane_t7_ParamLimits

0xd580,	// (0x0001c6ac) main_cam5_pane_t7

0xd592,	// (0x0001c6be) main_cam5_pane_t8_ParamLimits

0xd592,	// (0x0001c6be) main_cam5_pane_t8

0xd5ae,	// (0x0001c6da) main_cam5_pane_t9_ParamLimits

0xd5ae,	// (0x0001c6da) main_cam5_pane_t9

0xd5c0,	// (0x0001c6ec) main_cam5_pane_t10_ParamLimits

0xd5c0,	// (0x0001c6ec) main_cam5_pane_t10

0xd5d2,	// (0x0001c6fe) main_cam5_pane_t11_ParamLimits

0xd5d2,	// (0x0001c6fe) main_cam5_pane_t11

0xd5e4,	// (0x0001c710) main_cam5_pane_t12_ParamLimits

0xd5e4,	// (0x0001c710) main_cam5_pane_t12

0xd5f9,	// (0x0001c725) main_cam5_pane_t13_ParamLimits

0xd5f9,	// (0x0001c725) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001eb79) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001eb79) main_cam5_pane_t

0x02eb,	// (0x0000f417) popup_scut_keymap_window_ParamLimits

0x02eb,	// (0x0000f417) popup_scut_keymap_window

0x6ac0,	// (0x00015bec) aid_size_cell_brow_shortcut

0xa92d,	// (0x00019a59) bg_popup_window_pane_cp010

0x6acc,	// (0x00015bf8) grid_scut_pane

0x6ad8,	// (0x00015c04) cell_scut_pane_ParamLimits

0x6ad8,	// (0x00015c04) cell_scut_pane

0x6aef,	// (0x00015c1b) cell_scut_pane_g1

0xd616,	// (0x0001c742) cell_scut_pane_t1

0xd625,	// (0x0001c751) cell_scut_pane_t2

0x6af8,	// (0x00015c24) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001eb94) cell_scut_pane_t

0x46c2,	// (0x000137ee) main_mup3_pane_g8_ParamLimits

0x46c2,	// (0x000137ee) main_mup3_pane_g8

0x5b6e,	// (0x00014c9a) area_vitu2_query_pane_ParamLimits

0x5b6e,	// (0x00014c9a) area_vitu2_query_pane

0x6835,	// (0x00015961) input_focus_pane_cp08

0xd634,	// (0x0001c760) area_vitu2_query_pane_g1

0x6b06,	// (0x00015c32) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001eb9b) area_vitu2_query_pane_g

0x6b17,	// (0x00015c43) area_vitu2_query_pane_t1_ParamLimits

0x6b17,	// (0x00015c43) area_vitu2_query_pane_t1

0x6b2b,	// (0x00015c57) area_vitu2_query_pane_t2_ParamLimits

0x6b2b,	// (0x00015c57) area_vitu2_query_pane_t2

0x6b3f,	// (0x00015c6b) area_vitu2_query_pane_t3_ParamLimits

0x6b3f,	// (0x00015c6b) area_vitu2_query_pane_t3

0xd640,	// (0x0001c76c) area_vitu2_query_pane_t4_ParamLimits

0xd640,	// (0x0001c76c) area_vitu2_query_pane_t4

0xd668,	// (0x0001c794) area_vitu2_query_pane_t5_ParamLimits

0xd668,	// (0x0001c794) area_vitu2_query_pane_t5

0xd690,	// (0x0001c7bc) area_vitu2_query_pane_t6_ParamLimits

0xd690,	// (0x0001c7bc) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001eba0) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001eba0) area_vitu2_query_pane_t

0x6b67,	// (0x00015c93) bg_button_pane_cp018

0x6b75,	// (0x00015ca1) bg_button_pane_cp021

0x6b81,	// (0x00015cad) bg_button_pane_cp022

0x6b92,	// (0x00015cbe) input_focus_pane_cp09

0xa774,	// (0x000198a0) aid_size_touch_mv_arrow_left

0xa79f,	// (0x000198cb) aid_size_touch_mv_arrow_right

0x62d5,	// (0x00015401) main_cset_slider_pane_g16_ParamLimits

0x62d5,	// (0x00015401) main_cset_slider_pane_g16

0x62e1,	// (0x0001540d) main_cset_slider_pane_g17_ParamLimits

0x62e1,	// (0x0001540d) main_cset_slider_pane_g17

0x6aab,	// (0x00015bd7) cell_cam4_burst_pane_g1_ParamLimits

0x93c9,	// (0x000184f5) compa_mode_pane

0x64ec,	// (0x00015618) popup_vtel_slider_window_g3_ParamLimits

0x64ec,	// (0x00015618) popup_vtel_slider_window_g3

0x6503,	// (0x0001562f) popup_vtel_slider_window_g4_ParamLimits

0x6503,	// (0x0001562f) popup_vtel_slider_window_g4

0x651a,	// (0x00015646) popup_vtel_slider_window_t1_ParamLimits

0x651a,	// (0x00015646) popup_vtel_slider_window_t1

0x93c9,	// (0x000184f5) main_cl_pane

0xbe01,	// (0x0001af2d) popup_imed_adjust2_window_ParamLimits

0xbdd9,	// (0x0001af05) bg_tb_trans_pane_cp05_ParamLimits

0xc86f,	// (0x0001b99b) popup_imed_adjust2_window_g1_ParamLimits

0xc87e,	// (0x0001b9aa) popup_imed_adjust2_window_g2_ParamLimits

0xc87e,	// (0x0001b9aa) popup_imed_adjust2_window_g2

0xc88a,	// (0x0001b9b6) popup_imed_adjust2_window_g3_ParamLimits

0xc88a,	// (0x0001b9b6) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001e90b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001e90b) popup_imed_adjust2_window_g

0xc896,	// (0x0001b9c2) popup_imed_adjust2_window_t1_ParamLimits

0xc8ae,	// (0x0001b9da) slider_imed_adjust_pane_ParamLimits

0xc8c2,	// (0x0001b9ee) slider_imed_adjust_pane_g1_ParamLimits

0xc8d2,	// (0x0001b9fe) slider_imed_adjust_pane_g2_ParamLimits

0xc8e2,	// (0x0001ba0e) slider_imed_adjust_pane_g3_ParamLimits

0xc8f3,	// (0x0001ba1f) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001e912) slider_imed_adjust_pane_g_ParamLimits

0x58f7,	// (0x00014a23) aid_touch_area_cam4_ParamLimits

0x58f7,	// (0x00014a23) aid_touch_area_cam4

0xcfe5,	// (0x0001c111) battery_pane_cp01

0x59c6,	// (0x00014af2) main_camera4_pane_g6_ParamLimits

0x59c6,	// (0x00014af2) main_camera4_pane_g6

0x59f0,	// (0x00014b1c) main_camera4_pane_t2_ParamLimits

0x59f0,	// (0x00014b1c) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001ea15) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001ea15) main_camera4_pane_t

0x5a25,	// (0x00014b51) aid_touch_area_vid4_ParamLimits

0x5a25,	// (0x00014b51) aid_touch_area_vid4

0x5a79,	// (0x00014ba5) main_video4_pane_g5_ParamLimits

0x5a79,	// (0x00014ba5) main_video4_pane_g5

0x5a9e,	// (0x00014bca) vid4_progress_pane_ParamLimits

0x5a9e,	// (0x00014bca) vid4_progress_pane

0xd2b9,	// (0x0001c3e5) main_cset_slider_pane_g18_ParamLimits

0xd2b9,	// (0x0001c3e5) main_cset_slider_pane_g18

0xd4fe,	// (0x0001c62a) cell_cam4_burst_pane_g2_ParamLimits

0xd4fe,	// (0x0001c62a) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001eb74) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001eb74) cell_cam4_burst_pane_g

0x9bbb,	// (0x00018ce7) bg_cl_pane_ParamLimits

0x9bbb,	// (0x00018ce7) bg_cl_pane

0x6ba3,	// (0x00015ccf) cl_header_pane_ParamLimits

0x6ba3,	// (0x00015ccf) cl_header_pane

0x6bb7,	// (0x00015ce3) cl_listscroll_pane_ParamLimits

0x6bb7,	// (0x00015ce3) cl_listscroll_pane

0xd6dc,	// (0x0001c808) bg_cl_pane_g1

0xd6e4,	// (0x0001c810) bg_cl_pane_g2

0xd6ec,	// (0x0001c818) bg_cl_pane_g3

0xd6f4,	// (0x0001c820) bg_cl_pane_g4

0xd6fc,	// (0x0001c828) bg_cl_pane_g5

0xd704,	// (0x0001c830) bg_cl_pane_g6

0xd70c,	// (0x0001c838) bg_cl_pane_g7

0xd714,	// (0x0001c840) bg_cl_pane_g8

0xd71c,	// (0x0001c848) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001ebaf) bg_cl_pane_g

0x6bc7,	// (0x00015cf3) aid_height_cl_leading_ParamLimits

0x6bc7,	// (0x00015cf3) aid_height_cl_leading

0x6bd3,	// (0x00015cff) aid_height_cl_text_ParamLimits

0x6bd3,	// (0x00015cff) aid_height_cl_text

0x9439,	// (0x00018565) bg_cl_header_pane_ParamLimits

0x9439,	// (0x00018565) bg_cl_header_pane

0x6bf2,	// (0x00015d1e) cl_header_pane_g1_ParamLimits

0x6bf2,	// (0x00015d1e) cl_header_pane_g1

0x6c08,	// (0x00015d34) cl_header_pane_t1_ParamLimits

0x6c08,	// (0x00015d34) cl_header_pane_t1

0xd724,	// (0x0001c850) cl_list_pane

0xd28c,	// (0x0001c3b8) hc_scroll_pane_cp01

0xa049,	// (0x00019175) bg_cl_header_pane_g1

0xd13c,	// (0x0001c268) bg_cl_header_pane_g2

0xa069,	// (0x00019195) bg_cl_header_pane_g3

0xd14c,	// (0x0001c278) bg_cl_header_pane_g4

0xd144,	// (0x0001c270) bg_cl_header_pane_g5

0xd3ed,	// (0x0001c519) bg_cl_header_pane_g6

0xd164,	// (0x0001c290) bg_cl_header_pane_g7

0xd16c,	// (0x0001c298) bg_cl_header_pane_g8

0xd15c,	// (0x0001c288) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001ebc2) bg_cl_header_pane_g

0x6c21,	// (0x00015d4d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c21,	// (0x00015d4d) hc_cl_list_double_graphic_heading_pane

0x6c32,	// (0x00015d5e) hc_cl_list_single_graphic_pane_ParamLimits

0x6c32,	// (0x00015d5e) hc_cl_list_single_graphic_pane

0x6c4b,	// (0x00015d77) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c4b,	// (0x00015d77) hc_cl_list_single_graphic_pane_g1

0x6c57,	// (0x00015d83) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c57,	// (0x00015d83) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001ebd5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001ebd5) hc_cl_list_single_graphic_pane_g

0x6c6b,	// (0x00015d97) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c6b,	// (0x00015d97) hc_cl_list_single_graphic_pane_t1

0x6c4b,	// (0x00015d77) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c4b,	// (0x00015d77) hc_cl_list_double_graphic_heading_pane_g1

0x6c80,	// (0x00015dac) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c80,	// (0x00015dac) hc_cl_list_double_graphic_heading_pane_g2

0x6c94,	// (0x00015dc0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c94,	// (0x00015dc0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001ebda) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001ebda) hc_cl_list_double_graphic_heading_pane_g

0x6ca8,	// (0x00015dd4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6ca8,	// (0x00015dd4) hc_cl_list_double_graphic_heading_pane_t1

0x6cbd,	// (0x00015de9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6cbd,	// (0x00015de9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001ebe1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001ebe1) hc_cl_list_double_graphic_heading_pane_t

0x6cd2,	// (0x00015dfe) vid4_progress_pane_g1

0x6ce4,	// (0x00015e10) vid4_progress_pane_g2

0xab45,	// (0x00019c71) vid4_progress_pane_g3

0xd735,	// (0x0001c861) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001ebe6) vid4_progress_pane_g

0xd753,	// (0x0001c87f) vid4_progress_pane_t1

0xd768,	// (0x0001c894) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001ebf1) vid4_progress_pane_t

0xd794,	// (0x0001c8c0) wait_bar_pane_cp07

0xc0e7,	// (0x0001b213) blid_firmament_pane_ParamLimits

0xc12a,	// (0x0001b256) popup_blid_sat_info2_window_g1

0xc14e,	// (0x0001b27a) popup_blid_sat_info2_window_t3

0xc15c,	// (0x0001b288) popup_blid_sat_info2_window_t4

0xc16a,	// (0x0001b296) popup_blid_sat_info2_window_t5

0xc178,	// (0x0001b2a4) popup_blid_sat_info2_window_t6

0xc188,	// (0x0001b2b4) popup_blid_sat_info2_window_t7

0xc196,	// (0x0001b2c2) popup_blid_sat_info2_window_t8

0xc1a4,	// (0x0001b2d0) popup_blid_sat_info2_window_t9

0xc1b2,	// (0x0001b2de) popup_blid_sat_info2_window_t10

0xc276,	// (0x0001b3a2) aid_firma_cardinal_ParamLimits

0xc28a,	// (0x0001b3b6) blid_firmament_pane_t1_ParamLimits

0xc2a1,	// (0x0001b3cd) blid_firmament_pane_t2_ParamLimits

0xc2b8,	// (0x0001b3e4) blid_firmament_pane_t3_ParamLimits

0xc2cf,	// (0x0001b3fb) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0001e804) blid_firmament_pane_t_ParamLimits

0xc2e6,	// (0x0001b412) blid_sat_info_pane_ParamLimits

0x9439,	// (0x00018565) main_cam_set_pane_ParamLimits

0x4f88,	// (0x000140b4) aid_size_cell_colour_35_ParamLimits

0x4fa8,	// (0x000140d4) aid_size_cell_colour_112_ParamLimits

0x4fc8,	// (0x000140f4) aid_size_cell_effect_ParamLimits

0xbdd9,	// (0x0001af05) bg_tb_trans_pane_cp02_ParamLimits

0xa2e7,	// (0x00019413) heading_imed_pane_ParamLimits

0x4fe8,	// (0x00014114) listscroll_imed_pane_ParamLimits

0xb3ff,	// (0x0001a52b) popup_call2_audio_first_window_g5_ParamLimits

0xb3ff,	// (0x0001a52b) popup_call2_audio_first_window_g5

0x55a2,	// (0x000146ce) aid_size_touch_image3_arrow_left_ParamLimits

0x55a2,	// (0x000146ce) aid_size_touch_image3_arrow_left

0x55ce,	// (0x000146fa) aid_size_touch_image3_arrow_right_ParamLimits

0x55ce,	// (0x000146fa) aid_size_touch_image3_arrow_right

0xd77e,	// (0x0001c8aa) vid4_progress_pane_t3

0x5314,	// (0x00014440) main_hwr_training_symbol_option_pane_ParamLimits

0x5314,	// (0x00014440) main_hwr_training_symbol_option_pane

0xcb65,	// (0x0001bc91) popup_hwr_training_preview_window_ParamLimits

0xcb65,	// (0x0001bc91) popup_hwr_training_preview_window

0x5334,	// (0x00014460) hwr_training_navi_pane_g5_ParamLimits

0x5334,	// (0x00014460) hwr_training_navi_pane_g5

0xd12a,	// (0x0001c256) popup_char_count_window

0x9439,	// (0x00018565) bg_popup_sub_pane_cp20_ParamLimits

0x6640,	// (0x0001576c) list_vitu2_match_list_pane_ParamLimits

0x664f,	// (0x0001577b) vitu2_page_scroll_pane_ParamLimits

0x664f,	// (0x0001577b) vitu2_page_scroll_pane

0xd7c6,	// (0x0001c8f2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7c6,	// (0x0001c8f2) list_single_hwr_training_symbol_option_pane

0xd7d9,	// (0x0001c905) list_single_hwr_training_symbol_option_pane_g1

0xd7e1,	// (0x0001c90d) list_single_hwr_training_symbol_option_pane_t1

0xd7ef,	// (0x0001c91b) bg_button_pane_cp023

0xd7f8,	// (0x0001c924) bg_button_pane_cp024

0x6d25,	// (0x00015e51) vitu2_page_scroll_pane_g1

0x6d2d,	// (0x00015e59) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001ebf8) vitu2_page_scroll_pane_g

0x6d35,	// (0x00015e61) vitu2_page_scroll_pane_t1

0xc91f,	// (0x0001ba4b) popup_char_count_window_g1

0xd82b,	// (0x0001c957) popup_char_count_window_g2

0xd834,	// (0x0001c960) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001ebfd) popup_char_count_window_g

0xd83d,	// (0x0001c969) popup_char_count_window_t1

0x93c9,	// (0x000184f5) main_vded2_pane

0xc85b,	// (0x0001b987) aid_size_cell_imed_line

0xc865,	// (0x0001b991) grid_imed_line_width_pane

0xd09b,	// (0x0001c1c7) vid4_indicators_pane_g4

0xd84b,	// (0x0001c977) cell_imed_line_width_pane_ParamLimits

0xd84b,	// (0x0001c977) cell_imed_line_width_pane

0xd85f,	// (0x0001c98b) cell_imed_line_width_pane_g1

0xd868,	// (0x0001c994) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001ec04) cell_imed_line_width_pane_g

0x6d44,	// (0x00015e70) main_vded2_pane_g1_ParamLimits

0x6d44,	// (0x00015e70) main_vded2_pane_g1

0x6d5a,	// (0x00015e86) main_vded2_pane_g2_ParamLimits

0x6d5a,	// (0x00015e86) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001ec09) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001ec09) main_vded2_pane_g

0x6d6c,	// (0x00015e98) vded2_slider_pane_ParamLimits

0x6d6c,	// (0x00015e98) vded2_slider_pane

0x6d7c,	// (0x00015ea8) aid_size_touch_vded2_end

0x6d86,	// (0x00015eb2) aid_size_touch_vded2_playhead

0xd870,	// (0x0001c99c) aid_size_touch_vded2_start

0xd878,	// (0x0001c9a4) vded2_slider_bg_pane

0xd881,	// (0x0001c9ad) vded2_slider_pane_g1

0xd88a,	// (0x0001c9b6) vded2_slider_pane_g2

0x6d90,	// (0x00015ebc) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001ec0e) vded2_slider_pane_g

0xd892,	// (0x0001c9be) vded2_slider_bg_pane_g1

0xd89b,	// (0x0001c9c7) vded2_slider_bg_pane_g2

0xd8a4,	// (0x0001c9d0) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001ec15) vded2_slider_bg_pane_g

0x2d17,	// (0x00011e43) aid_postcard_touch_down_pane_ParamLimits

0x2d17,	// (0x00011e43) aid_postcard_touch_down_pane

0x2d2d,	// (0x00011e59) aid_postcard_touch_up_pane_ParamLimits

0x2d2d,	// (0x00011e59) aid_postcard_touch_up_pane

0x93c9,	// (0x000184f5) main_blid2_pane

0xbde7,	// (0x0001af13) popup_blid2_search_window

0x93c9,	// (0x000184f5) blid2_gps_pane

0x93c9,	// (0x000184f5) blid2_navig_pane

0x93c9,	// (0x000184f5) blid2_search_pane

0x93c9,	// (0x000184f5) blid2_tripm_pane

0x6d9b,	// (0x00015ec7) blid2_search_pane_g1_ParamLimits

0x6d9b,	// (0x00015ec7) blid2_search_pane_g1

0x6db3,	// (0x00015edf) blid2_search_pane_t1_ParamLimits

0x6db3,	// (0x00015edf) blid2_search_pane_t1

0x6dc5,	// (0x00015ef1) aid_size_cell_blid2_gps_ParamLimits

0x6dc5,	// (0x00015ef1) aid_size_cell_blid2_gps

0x6ddd,	// (0x00015f09) blid2_gps_pane_g1_ParamLimits

0x6ddd,	// (0x00015f09) blid2_gps_pane_g1

0x6df1,	// (0x00015f1d) grid_blid2_satellite_pane_ParamLimits

0x6df1,	// (0x00015f1d) grid_blid2_satellite_pane

0x6e0b,	// (0x00015f37) blid2_navig_pane_g1_ParamLimits

0x6e0b,	// (0x00015f37) blid2_navig_pane_g1

0x6e17,	// (0x00015f43) blid2_navig_pane_t1_ParamLimits

0x6e17,	// (0x00015f43) blid2_navig_pane_t1

0x6e32,	// (0x00015f5e) blid2_navig_pane_t2_ParamLimits

0x6e32,	// (0x00015f5e) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001ec1c) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001ec1c) blid2_navig_pane_t

0x6e4d,	// (0x00015f79) blid2_navig_ring_pane_ParamLimits

0x6e4d,	// (0x00015f79) blid2_navig_ring_pane

0x6e66,	// (0x00015f92) blid2_speed_pane_ParamLimits

0x6e66,	// (0x00015f92) blid2_speed_pane

0x6e72,	// (0x00015f9e) blid2_tripm_pane_g1_ParamLimits

0x6e72,	// (0x00015f9e) blid2_tripm_pane_g1

0x6e8d,	// (0x00015fb9) blid2_tripm_pane_g2_ParamLimits

0x6e8d,	// (0x00015fb9) blid2_tripm_pane_g2

0x6ea1,	// (0x00015fcd) blid2_tripm_pane_g3_ParamLimits

0x6ea1,	// (0x00015fcd) blid2_tripm_pane_g3

0x6eb5,	// (0x00015fe1) blid2_tripm_pane_g4_ParamLimits

0x6eb5,	// (0x00015fe1) blid2_tripm_pane_g4

0x6ec9,	// (0x00015ff5) blid2_tripm_pane_g5_ParamLimits

0x6ec9,	// (0x00015ff5) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001ec21) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001ec21) blid2_tripm_pane_g

0x6eef,	// (0x0001601b) blid2_tripm_pane_t1_ParamLimits

0x6eef,	// (0x0001601b) blid2_tripm_pane_t1

0x6f0a,	// (0x00016036) blid2_tripm_pane_t2_ParamLimits

0x6f0a,	// (0x00016036) blid2_tripm_pane_t2

0x6f23,	// (0x0001604f) blid2_tripm_pane_t3_ParamLimits

0x6f23,	// (0x0001604f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001ec2e) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001ec2e) blid2_tripm_pane_t

0x6f6a,	// (0x00016096) cell_blid2_satellite_pane_ParamLimits

0x6f6a,	// (0x00016096) cell_blid2_satellite_pane

0x6f88,	// (0x000160b4) cell_blid2_satellite_pane_g1

0xd8ad,	// (0x0001c9d9) cell_blid2_satellite_pane_t1

0xc2f6,	// (0x0001b422) blid2_speed_pane_g1

0xd8bb,	// (0x0001c9e7) blid2_speed_pane_t1

0xd8c9,	// (0x0001c9f5) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001ec37) blid2_speed_pane_t

0xc2f6,	// (0x0001b422) blid2_navig_ring_pane_g1

0x6f91,	// (0x000160bd) blid2_navig_ring_pane_g2

0x6f99,	// (0x000160c5) blid2_navig_ring_pane_g3

0x6fa1,	// (0x000160cd) blid2_navig_ring_pane_g4

0x6fa9,	// (0x000160d5) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001ec3c) blid2_navig_ring_pane_g

0x93c9,	// (0x000184f5) bg_popup_window_pane_cp011

0xd8d7,	// (0x0001ca03) popup_blid2_search_window_g1

0xd8df,	// (0x0001ca0b) popup_blid2_search_window_t1

0xd8ed,	// (0x0001ca19) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001ec47) popup_blid2_search_window_t

0x9f58,	// (0x00019084) main_browser_pane_g1

0x9bbb,	// (0x00018ce7) main_browser_pane_ParamLimits

0x9439,	// (0x00018565) bg_button_pane_cp011_ParamLimits

0x5eb2,	// (0x00014fde) cell_vitu2_function_pane_g1_ParamLimits

0xbdd9,	// (0x0001af05) bg_popup_sub_pane_cp22_ParamLimits

0x6835,	// (0x00015961) input_focus_pane_cp08_ParamLimits

0x684c,	// (0x00015978) popup_vitu2_query_button_pane_ParamLimits

0x684c,	// (0x00015978) popup_vitu2_query_button_pane

0x685d,	// (0x00015989) popup_vitu2_query_input_button_pane

0xd448,	// (0x0001c574) popup_vitu2_query_window_g1_ParamLimits

0x6867,	// (0x00015993) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001eb48) popup_vitu2_query_window_g_ParamLimits

0x93c9,	// (0x000184f5) bg_button_pane_cp026

0x6fb1,	// (0x000160dd) popup_vitu2_query_input_button_pane_g1

0x93c9,	// (0x000184f5) bg_button_pane_cp025

0xd8fb,	// (0x0001ca27) popup_vitu2_query_button_pane_t1

0x43af,	// (0x000134db) main_mp3_pane_t6

0x43bd,	// (0x000134e9) popup_slider_window_cp01

0xd001,	// (0x0001c12d) cam4_battery_pane

0xd05a,	// (0x0001c186) cam4_battery_pane_cp02

0xd72d,	// (0x0001c859) cam4_battery_pane_cp01

0xd72d,	// (0x0001c859) cam4_battery_pane_cp03

0xc2f6,	// (0x0001b422) cam4_battery_pane_g1

0xd909,	// (0x0001ca35) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001ec4c) cam4_battery_pane_g

0xc1c0,	// (0x0001b2ec) popup_blid_sat_info2_window_t11

0xa774,	// (0x000198a0) aid_size_touch_mv_arrow_left_ParamLimits

0xa79f,	// (0x000198cb) aid_size_touch_mv_arrow_right_ParamLimits

0xa7fd,	// (0x00019929) navi_pane_g1_ParamLimits

0xa809,	// (0x00019935) navi_pane_g2_ParamLimits

0xa837,	// (0x00019963) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0001e516) navi_pane_g_ParamLimits

0x2776,	// (0x000118a2) navi_pane_mv_t1_ParamLimits

0x4ff4,	// (0x00014120) grid_imed_effect_pane_ParamLimits

0x1360,	// (0x0001048c) aid_placing_vt_slider_lsc

0x9ea7,	// (0x00018fd3) aid_placing_vt_slider_prt

0x9439,	// (0x00018565) bg_tb_trans_pane_cp01_ParamLimits

0xc476,	// (0x0001b5a2) popup_image_details_window_g1_ParamLimits

0xc489,	// (0x0001b5b5) popup_image_details_window_g2_ParamLimits

0xc49e,	// (0x0001b5ca) popup_image_details_window_g3_ParamLimits

0xc49e,	// (0x0001b5ca) popup_image_details_window_g3

0xf71d,	// (0x0001e849) popup_image_details_window_g_ParamLimits

0xc4b2,	// (0x0001b5de) popup_image_details_window_t1_ParamLimits

0xc4c4,	// (0x0001b5f0) popup_image_details_window_t2_ParamLimits

0xc4dd,	// (0x0001b609) popup_image_details_window_t3_ParamLimits

0xc4f1,	// (0x0001b61d) popup_image_details_window_t4_ParamLimits

0xc50c,	// (0x0001b638) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0001e850) popup_image_details_window_t_ParamLimits

0x6bdf,	// (0x00015d0b) cl_header_name_pane_ParamLimits

0x6bdf,	// (0x00015d0b) cl_header_name_pane

0x6fb9,	// (0x000160e5) cl_header_name_pane_t1_ParamLimits

0x6fb9,	// (0x000160e5) cl_header_name_pane_t1

0x6fda,	// (0x00016106) cl_header_name_pane_t2_ParamLimits

0x6fda,	// (0x00016106) cl_header_name_pane_t2

0x701c,	// (0x00016148) cl_header_name_pane_t3_ParamLimits

0x701c,	// (0x00016148) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001ec51) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001ec51) cl_header_name_pane_t

0xa8c6,	// (0x000199f2) navi_pane_mv_g2_ParamLimits

0xd0e7,	// (0x0001c213) field_vitu2_entry_pane_g1_ParamLimits

0xd0f3,	// (0x0001c21f) field_vitu2_entry_pane_g2_ParamLimits

0xd0ff,	// (0x0001c22b) field_vitu2_entry_pane_g3_ParamLimits

0xd0ff,	// (0x0001c22b) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001ea47) field_vitu2_entry_pane_g_ParamLimits

0x5d3d,	// (0x00014e69) cell_vitu2_itu_pane_g1_ParamLimits

0x5d4d,	// (0x00014e79) cell_vitu2_itu_pane_g2_ParamLimits

0x5d4d,	// (0x00014e79) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001ea53) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001ea53) cell_vitu2_itu_pane_g

0x9439,	// (0x00018565) bg_vkb2_func_pane_cp05_ParamLimits

0x9439,	// (0x00018565) bg_vkb2_func_pane_cp05

0x9439,	// (0x00018565) bg_vkb2_func_pane_cp03

0x9439,	// (0x00018565) bg_vkb2_func_pane_cp04

0x9439,	// (0x00018565) bg_vkb2_func_pane_cp10_ParamLimits

0x9439,	// (0x00018565) bg_vkb2_func_pane_cp10

0x6b81,	// (0x00015cad) bg_vkb2_func_pane_cp08

0x6b67,	// (0x00015c93) bg_vkb2_func_pane_cp06

0x6b75,	// (0x00015ca1) bg_vkb2_func_pane_cp07

0xd801,	// (0x0001c92d) bg_vkb2_func_pane_cp11_ParamLimits

0xd801,	// (0x0001c92d) bg_vkb2_func_pane_cp11

0xd816,	// (0x0001c942) bg_vkb2_func_pane_cp12_ParamLimits

0xd816,	// (0x0001c942) bg_vkb2_func_pane_cp12

0x93c9,	// (0x000184f5) bg_vkb2_func_pane_cp09

0xd13c,	// (0x0001c268) bg_vkb2_func_pane_g1

0xa069,	// (0x00019195) bg_vkb2_func_pane_g2

0xd144,	// (0x0001c270) bg_vkb2_func_pane_g3

0xd14c,	// (0x0001c278) bg_vkb2_func_pane_g4

0xd3ed,	// (0x0001c519) bg_vkb2_func_pane_g5

0xd164,	// (0x0001c290) bg_vkb2_func_pane_g6

0xd16c,	// (0x0001c298) bg_vkb2_func_pane_g7

0xd15c,	// (0x0001c288) bg_vkb2_func_pane_g8

0xa049,	// (0x00019175) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001ec58) bg_vkb2_func_pane_g

0x6edd,	// (0x00016009) blid2_tripm_pane_g6_ParamLimits

0x6edd,	// (0x00016009) blid2_tripm_pane_g6

0xce56,	// (0x0001bf82) mp4_progress_pane_g1

0x6f56,	// (0x00016082) blid2_tripm_values_pane_ParamLimits

0x6f56,	// (0x00016082) blid2_tripm_values_pane

0x704d,	// (0x00016179) blid2_tripm_values_pane_t1

0x705b,	// (0x00016187) blid2_tripm_values_pane_t2

0x7069,	// (0x00016195) blid2_tripm_values_pane_t3

0x7077,	// (0x000161a3) blid2_tripm_values_pane_t4

0x7085,	// (0x000161b1) blid2_tripm_values_pane_t5

0x7093,	// (0x000161bf) blid2_tripm_values_pane_t6

0x70a1,	// (0x000161cd) blid2_tripm_values_pane_t7

0x70af,	// (0x000161db) blid2_tripm_values_pane_t8

0x70bd,	// (0x000161e9) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001ec6b) blid2_tripm_values_pane_t

0x13a2,	// (0x000104ce) call_video_pane_t1_ParamLimits

0x13c0,	// (0x000104ec) call_video_pane_t2_ParamLimits

0xf273,	// (0x0001e39f) call_video_pane_t_ParamLimits

0x2c64,	// (0x00011d90) msg_header_pane_g1_ParamLimits

0xaabf,	// (0x00019beb) msg_header_pane_g2_ParamLimits

0xaabf,	// (0x00019beb) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0001e5b9) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0001e5b9) msg_header_pane_g

0x9bbb,	// (0x00018ce7) main_clock2_pane_ParamLimits

0x4ceb,	// (0x00013e17) grid_clock2_toolbar_pane_ParamLimits

0x4ceb,	// (0x00013e17) grid_clock2_toolbar_pane

0x4ceb,	// (0x00013e17) listscroll_clock2_pane_ParamLimits

0x4ceb,	// (0x00013e17) listscroll_clock2_pane

0x4de6,	// (0x00013f12) main_clock2_pane_t3_ParamLimits

0x4de6,	// (0x00013f12) main_clock2_pane_t3

0x4e0a,	// (0x00013f36) main_clock2_pane_t4_ParamLimits

0x4e0a,	// (0x00013f36) main_clock2_pane_t4

0xd913,	// (0x0001ca3f) cell_clock2_toolbar_pane

0xd91b,	// (0x0001ca47) cell_clock2_toolbar_pane_cp01

0xd91b,	// (0x0001ca47) cell_clock2_toolbar_pane_cp02

0xd923,	// (0x0001ca4f) cell_clock2_toolbar_pane_cp03

0xd92b,	// (0x0001ca57) list_clock2_pane

0xa6ea,	// (0x00019816) scroll_pane_cp10

0xd933,	// (0x0001ca5f) list_single_clock2_pane_ParamLimits

0xd933,	// (0x0001ca5f) list_single_clock2_pane

0xa92d,	// (0x00019a59) list_highlight_pane_cp08

0xd940,	// (0x0001ca6c) list_single_clock2_pane_t1

0xd94e,	// (0x0001ca7a) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001ec7e) list_single_clock2_pane_t

0x93c9,	// (0x000184f5) bg_button_pane_cp10

0xd95c,	// (0x0001ca88) cell_clock2_toolbar_pane_g1

0x2ca3,	// (0x00011dcf) aid_main_viewer_pane_g1_ParamLimits

0x2ca3,	// (0x00011dcf) aid_main_viewer_pane_g1

0x2cb1,	// (0x00011ddd) aid_main_viewer_pane_g2_ParamLimits

0x2cb1,	// (0x00011ddd) aid_main_viewer_pane_g2

0x2cbf,	// (0x00011deb) aid_main_viewer_pane_g3_ParamLimits

0x2cbf,	// (0x00011deb) aid_main_viewer_pane_g3

0x2cce,	// (0x00011dfa) aid_main_viewer_pane_g4_ParamLimits

0x2cce,	// (0x00011dfa) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0001e5ca) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0001e5ca) aid_main_viewer_pane_g

0x35dc,	// (0x00012708) main_calc_pane_ParamLimits

0x35f0,	// (0x0001271c) main_dialer2_pane_ParamLimits

0x93c9,	// (0x000184f5) main_cam6_pane

0x93c9,	// (0x000184f5) main_vid6_pane

0x4cf7,	// (0x00013e23) listscroll_gen_pane_cp06_ParamLimits

0x4cf7,	// (0x00013e23) listscroll_gen_pane_cp06

0x4e2d,	// (0x00013f59) main_clock2_pane_t5_ParamLimits

0x4e2d,	// (0x00013f59) main_clock2_pane_t5

0x4e89,	// (0x00013fb5) aid_call2_pane_cp10_ParamLimits

0x4e9b,	// (0x00013fc7) aid_call_pane_cp10_ParamLimits

0xa768,	// (0x00019894) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa768,	// (0x00019894) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ead,	// (0x00013fd9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ead,	// (0x00013fd9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa768,	// (0x00019894) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001e900) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ebf,	// (0x00013feb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x554f,	// (0x0001467b) cell_dialer2_keypad_pane_g2_ParamLimits

0x554f,	// (0x0001467b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001e9e6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001e9e6) cell_dialer2_keypad_pane_g

0x556b,	// (0x00014697) cell_dialer2_keypad_pane_t1

0x61c8,	// (0x000152f4) main_cset_text2_pane_ParamLimits

0x61c8,	// (0x000152f4) main_cset_text2_pane

0xd634,	// (0x0001c760) area_vitu2_query_pane_g1_ParamLimits

0x6b06,	// (0x00015c32) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001eb9b) area_vitu2_query_pane_g_ParamLimits

0xd6b8,	// (0x0001c7e4) area_vitu2_query_pane_t7_ParamLimits

0xd6b8,	// (0x0001c7e4) area_vitu2_query_pane_t7

0x6b67,	// (0x00015c93) bg_button_pane_cp018_ParamLimits

0x6b75,	// (0x00015ca1) bg_button_pane_cp021_ParamLimits

0x6b81,	// (0x00015cad) bg_button_pane_cp022_ParamLimits

0x6b81,	// (0x00015cad) bg_vkb2_func_pane_cp08_ParamLimits

0x6b67,	// (0x00015c93) bg_vkb2_func_pane_cp06_ParamLimits

0x6b75,	// (0x00015ca1) bg_vkb2_func_pane_cp07_ParamLimits

0x6b92,	// (0x00015cbe) input_focus_pane_cp09_ParamLimits

0xd964,	// (0x0001ca90) cam6_autofocus_pane_ParamLimits

0xd964,	// (0x0001ca90) cam6_autofocus_pane

0x70cb,	// (0x000161f7) cam6_image_uncrop_pane_ParamLimits

0x70cb,	// (0x000161f7) cam6_image_uncrop_pane

0x70da,	// (0x00016206) cam6_indi_pane_ParamLimits

0x70da,	// (0x00016206) cam6_indi_pane

0x70f0,	// (0x0001621c) cam6_mode_pane_ParamLimits

0x70f0,	// (0x0001621c) cam6_mode_pane

0x7102,	// (0x0001622e) cam6_timer_pane_ParamLimits

0x7102,	// (0x0001622e) cam6_timer_pane

0x710e,	// (0x0001623a) cam6_zoom_pane_ParamLimits

0x710e,	// (0x0001623a) cam6_zoom_pane

0x711a,	// (0x00016246) cam6_mode_pane_g1_ParamLimits

0x711a,	// (0x00016246) cam6_mode_pane_g1

0x712a,	// (0x00016256) cam6_mode_pane_g2_ParamLimits

0x712a,	// (0x00016256) cam6_mode_pane_g2

0x713a,	// (0x00016266) cam6_mode_pane_g3_ParamLimits

0x713a,	// (0x00016266) cam6_mode_pane_g3

0x714a,	// (0x00016276) cam6_mode_pane_g4_ParamLimits

0x714a,	// (0x00016276) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001ec83) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001ec83) cam6_mode_pane_g

0xd226,	// (0x0001c352) bg_tb_trans_pane_cp08_ParamLimits

0xd226,	// (0x0001c352) bg_tb_trans_pane_cp08

0xd972,	// (0x0001ca9e) cam6_battery_pane_ParamLimits

0xd972,	// (0x0001ca9e) cam6_battery_pane

0xd988,	// (0x0001cab4) cam6_indi_pane_g1_ParamLimits

0xd988,	// (0x0001cab4) cam6_indi_pane_g1

0xd99a,	// (0x0001cac6) cam6_indi_pane_g2_ParamLimits

0xd99a,	// (0x0001cac6) cam6_indi_pane_g2

0xd9ac,	// (0x0001cad8) cam6_indi_pane_g3_ParamLimits

0xd9ac,	// (0x0001cad8) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001ec8c) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001ec8c) cam6_indi_pane_g

0xd9be,	// (0x0001caea) cam6_indi_pane_t1_ParamLimits

0xd9be,	// (0x0001caea) cam6_indi_pane_t1

0x715a,	// (0x00016286) cam6_autofocus_pane_g1

0x7162,	// (0x0001628e) cam6_autofocus_pane_g2

0x716a,	// (0x00016296) cam6_autofocus_pane_g3

0x7172,	// (0x0001629e) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001ec93) cam6_autofocus_pane_g

0xd9e4,	// (0x0001cb10) cam6_timer_pane_g1

0xd9ec,	// (0x0001cb18) cam6_timer_pane_t1

0xd9fa,	// (0x0001cb26) cam6_zoom_cont_pane

0xda02,	// (0x0001cb2e) cam6_zoom_pane_g1

0xda0a,	// (0x0001cb36) cam6_zoom_pane_g2

0x717a,	// (0x000162a6) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001ec9c) cam6_zoom_pane_g

0xc2f6,	// (0x0001b422) cam6_battery_pane_g1

0xc2f6,	// (0x0001b422) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0001e80d) cam6_battery_pane_g

0xda12,	// (0x0001cb3e) cam6_zoom_cont_pane_g1

0xda1b,	// (0x0001cb47) cam6_zoom_cont_pane_g2

0xda24,	// (0x0001cb50) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001eca3) cam6_zoom_cont_pane_g

0x7197,	// (0x000162c3) cam6_mode_pane_cp_ParamLimits

0x7197,	// (0x000162c3) cam6_mode_pane_cp

0x710e,	// (0x0001623a) cam6_zoom_pane_cp_ParamLimits

0x710e,	// (0x0001623a) cam6_zoom_pane_cp

0x71a9,	// (0x000162d5) vid6_image_uncrop_cif_pane_ParamLimits

0x71a9,	// (0x000162d5) vid6_image_uncrop_cif_pane

0x71b9,	// (0x000162e5) vid6_image_uncrop_nhd_pane_ParamLimits

0x71b9,	// (0x000162e5) vid6_image_uncrop_nhd_pane

0x70cb,	// (0x000161f7) vid6_image_uncrop_vga_pane_ParamLimits

0x70cb,	// (0x000161f7) vid6_image_uncrop_vga_pane

0x71c8,	// (0x000162f4) vid6_image_uncrop_wvga_pane_ParamLimits

0x71c8,	// (0x000162f4) vid6_image_uncrop_wvga_pane

0x71d7,	// (0x00016303) vid6_indi_pane_ParamLimits

0x71d7,	// (0x00016303) vid6_indi_pane

0xd226,	// (0x0001c352) bg_tb_trans_pane_cp09_ParamLimits

0xd226,	// (0x0001c352) bg_tb_trans_pane_cp09

0xda3c,	// (0x0001cb68) cam6_battery_pane_cp_ParamLimits

0xda3c,	// (0x0001cb68) cam6_battery_pane_cp

0xda48,	// (0x0001cb74) vid6_indi_pane_g1_ParamLimits

0xda48,	// (0x0001cb74) vid6_indi_pane_g1

0xda5a,	// (0x0001cb86) vid6_indi_pane_g2_ParamLimits

0xda5a,	// (0x0001cb86) vid6_indi_pane_g2

0xda6c,	// (0x0001cb98) vid6_indi_pane_g3_ParamLimits

0xda6c,	// (0x0001cb98) vid6_indi_pane_g3

0xda81,	// (0x0001cbad) vid6_indi_pane_g4_ParamLimits

0xda81,	// (0x0001cbad) vid6_indi_pane_g4

0xda96,	// (0x0001cbc2) vid6_indi_pane_g5_ParamLimits

0xda96,	// (0x0001cbc2) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001ecaa) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001ecaa) vid6_indi_pane_g

0xdab0,	// (0x0001cbdc) vid6_indi_pane_t1_ParamLimits

0xdab0,	// (0x0001cbdc) vid6_indi_pane_t1

0xdac6,	// (0x0001cbf2) vid6_indi_pane_t2_ParamLimits

0xdac6,	// (0x0001cbf2) vid6_indi_pane_t2

0xdaee,	// (0x0001cc1a) vid6_indi_pane_t3_ParamLimits

0xdaee,	// (0x0001cc1a) vid6_indi_pane_t3

0xdb16,	// (0x0001cc42) vid6_indi_pane_t4_ParamLimits

0xdb16,	// (0x0001cc42) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001ecb5) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001ecb5) vid6_indi_pane_t

0xdb3a,	// (0x0001cc66) wait_bar_pane_cp08

0x71ef,	// (0x0001631b) main_cset_text2_pane_t1_ParamLimits

0x71ef,	// (0x0001631b) main_cset_text2_pane_t1

0x7182,	// (0x000162ae) listscroll_gen_pane_cp06_t1_ParamLimits

0x7182,	// (0x000162ae) listscroll_gen_pane_cp06_t1

0x93c9,	// (0x000184f5) main_cam6_set_pane

0xc556,	// (0x0001b682) bg_tb_trans_pane_cp06_ParamLimits

0xd009,	// (0x0001c135) cam4_indicators_pane_g1_ParamLimits

0xd01a,	// (0x0001c146) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001ea23) cam4_indicators_pane_g_ParamLimits

0xd038,	// (0x0001c164) cam4_indicators_pane_t1_ParamLimits

0x9439,	// (0x00018565) bg_tb_trans_pane_cp07_ParamLimits

0xd062,	// (0x0001c18e) vid4_indicators_pane_g1_ParamLimits

0xd076,	// (0x0001c1a2) vid4_indicators_pane_g2_ParamLimits

0xd08a,	// (0x0001c1b6) vid4_indicators_pane_g3_ParamLimits

0xd09b,	// (0x0001c1c7) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001ea35) vid4_indicators_pane_g_ParamLimits

0xd0b7,	// (0x0001c1e3) vid4_indicators_pane_t1_ParamLimits

0x6cd2,	// (0x00015dfe) vid4_progress_pane_g1_ParamLimits

0x6ce4,	// (0x00015e10) vid4_progress_pane_g2_ParamLimits

0xab45,	// (0x00019c71) vid4_progress_pane_g3_ParamLimits

0xd735,	// (0x0001c861) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001ebe6) vid4_progress_pane_g_ParamLimits

0xd753,	// (0x0001c87f) vid4_progress_pane_t1_ParamLimits

0xd768,	// (0x0001c894) vid4_progress_pane_t2_ParamLimits

0xd77e,	// (0x0001c8aa) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001ebf1) vid4_progress_pane_t_ParamLimits

0xd794,	// (0x0001c8c0) wait_bar_pane_cp07_ParamLimits

0x720e,	// (0x0001633a) main_cam6_set_pane_g2_ParamLimits

0x720e,	// (0x0001633a) main_cam6_set_pane_g2

0x7232,	// (0x0001635e) main_cset6_listscroll_pane_ParamLimits

0x7232,	// (0x0001635e) main_cset6_listscroll_pane

0x724e,	// (0x0001637a) main_cset6_slider_pane_ParamLimits

0x724e,	// (0x0001637a) main_cset6_slider_pane

0x7264,	// (0x00016390) main_cset6_text2_pane_ParamLimits

0x7264,	// (0x00016390) main_cset6_text2_pane

0xdb49,	// (0x0001cc75) main_cset6_text_pane

0xdb51,	// (0x0001cc7d) main_cset_list_pane_copy1_ParamLimits

0xdb51,	// (0x0001cc7d) main_cset_list_pane_copy1

0xdb61,	// (0x0001cc8d) scroll_pane_cp028_copy1

0x7272,	// (0x0001639e) cset_list_set_pane_copy1

0x7284,	// (0x000163b0) aid_position_infowindow_above_copy1

0x728c,	// (0x000163b8) aid_position_infowindow_below_copy1

0x7294,	// (0x000163c0) cset_list_set_pane_g1_copy1

0x729c,	// (0x000163c8) cset_list_set_pane_g3_copy1_ParamLimits

0x729c,	// (0x000163c8) cset_list_set_pane_g3_copy1

0x72ab,	// (0x000163d7) cset_list_set_pane_t1_copy1_ParamLimits

0x72ab,	// (0x000163d7) cset_list_set_pane_t1_copy1

0x9439,	// (0x00018565) list_highlight_pane_cp021_copy1_ParamLimits

0x9439,	// (0x00018565) list_highlight_pane_cp021_copy1

0xdb6a,	// (0x0001cc96) cset6_slider_pane_ParamLimits

0xdb6a,	// (0x0001cc96) cset6_slider_pane

0xdb96,	// (0x0001ccc2) main_cset6_slider_pane_g1_ParamLimits

0xdb96,	// (0x0001ccc2) main_cset6_slider_pane_g1

0x72c0,	// (0x000163ec) main_cset6_slider_pane_g2_ParamLimits

0x72c0,	// (0x000163ec) main_cset6_slider_pane_g2

0xdbbe,	// (0x0001ccea) main_cset6_slider_pane_g3_ParamLimits

0xdbbe,	// (0x0001ccea) main_cset6_slider_pane_g3

0x72e8,	// (0x00016414) main_cset6_slider_pane_g4_ParamLimits

0x72e8,	// (0x00016414) main_cset6_slider_pane_g4

0x72f4,	// (0x00016420) main_cset6_slider_pane_g5_ParamLimits

0x72f4,	// (0x00016420) main_cset6_slider_pane_g5

0xd2a1,	// (0x0001c3cd) main_cset6_slider_pane_g7_ParamLimits

0xd2a1,	// (0x0001c3cd) main_cset6_slider_pane_g7

0xd2ad,	// (0x0001c3d9) main_cset6_slider_pane_g8_ParamLimits

0xd2ad,	// (0x0001c3d9) main_cset6_slider_pane_g8

0x6275,	// (0x000153a1) main_cset6_slider_pane_g9_ParamLimits

0x6275,	// (0x000153a1) main_cset6_slider_pane_g9

0x6281,	// (0x000153ad) main_cset6_slider_pane_g10_ParamLimits

0x6281,	// (0x000153ad) main_cset6_slider_pane_g10

0x628d,	// (0x000153b9) main_cset6_slider_pane_g11_ParamLimits

0x628d,	// (0x000153b9) main_cset6_slider_pane_g11

0x6299,	// (0x000153c5) main_cset6_slider_pane_g12_ParamLimits

0x6299,	// (0x000153c5) main_cset6_slider_pane_g12

0x62a5,	// (0x000153d1) main_cset6_slider_pane_g13_ParamLimits

0x62a5,	// (0x000153d1) main_cset6_slider_pane_g13

0x62b1,	// (0x000153dd) main_cset6_slider_pane_g14_ParamLimits

0x62b1,	// (0x000153dd) main_cset6_slider_pane_g14

0x7300,	// (0x0001642c) main_cset6_slider_pane_g15_ParamLimits

0x7300,	// (0x0001642c) main_cset6_slider_pane_g15

0x62d5,	// (0x00015401) main_cset6_slider_pane_g16_ParamLimits

0x62d5,	// (0x00015401) main_cset6_slider_pane_g16

0x62e1,	// (0x0001540d) main_cset6_slider_pane_g17_ParamLimits

0x62e1,	// (0x0001540d) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001ecbe) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001ecbe) main_cset6_slider_pane_g

0xdbca,	// (0x0001ccf6) main_cset6_slider_pane_t1_ParamLimits

0xdbca,	// (0x0001ccf6) main_cset6_slider_pane_t1

0x7330,	// (0x0001645c) main_cset6_slider_pane_t2_ParamLimits

0x7330,	// (0x0001645c) main_cset6_slider_pane_t2

0x735b,	// (0x00016487) main_cset6_slider_pane_t3_ParamLimits

0x735b,	// (0x00016487) main_cset6_slider_pane_t3

0x7386,	// (0x000164b2) main_cset6_slider_pane_t4_ParamLimits

0x7386,	// (0x000164b2) main_cset6_slider_pane_t4

0x73b1,	// (0x000164dd) main_cset6_slider_pane_t5_ParamLimits

0x73b1,	// (0x000164dd) main_cset6_slider_pane_t5

0xdc0b,	// (0x0001cd37) main_cset6_slider_pane_t7_ParamLimits

0xdc0b,	// (0x0001cd37) main_cset6_slider_pane_t7

0x73dc,	// (0x00016508) main_cset6_slider_pane_t8_ParamLimits

0x73dc,	// (0x00016508) main_cset6_slider_pane_t8

0x7400,	// (0x0001652c) main_cset6_slider_pane_t9_ParamLimits

0x7400,	// (0x0001652c) main_cset6_slider_pane_t9

0x7424,	// (0x00016550) main_cset6_slider_pane_t10_ParamLimits

0x7424,	// (0x00016550) main_cset6_slider_pane_t10

0x7448,	// (0x00016574) main_cset6_slider_pane_t11_ParamLimits

0x7448,	// (0x00016574) main_cset6_slider_pane_t11

0xdc41,	// (0x0001cd6d) main_cset6_slider_pane_t14_ParamLimits

0xdc41,	// (0x0001cd6d) main_cset6_slider_pane_t14

0xdc7a,	// (0x0001cda6) main_cset6_slider_pane_t15_ParamLimits

0xdc7a,	// (0x0001cda6) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001ece3) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001ece3) main_cset6_slider_pane_t

0xd385,	// (0x0001c4b1) cset_slider_pane_g1_copy1

0xd38e,	// (0x0001c4ba) cset_slider_pane_g2_copy1

0xd397,	// (0x0001c4c3) cset_slider_pane_g3_copy1

0x93c9,	// (0x000184f5) bg_popup_sub_pane_cp011_copy1

0xdcb3,	// (0x0001cddf) main_cset_text_pane_g1_copy1

0xd45c,	// (0x0001c588) main_cset_text_pane_t1_copy1

0xd46a,	// (0x0001c596) main_cset_text_pane_t2_copy1

0xd478,	// (0x0001c5a4) main_cset_text_pane_t3_copy1

0xd486,	// (0x0001c5b2) main_cset_text_pane_t4_copy1

0xd494,	// (0x0001c5c0) main_cset_text_pane_t5_copy1

0xdcbb,	// (0x0001cde7) main_cset_text_pane_t6_copy1

0xdcc9,	// (0x0001cdf5) main_cset_text_pane_t7_copy1

0x753b,	// (0x00016667) main_cset_text2_pane_t1_copy1

0x9439,	// (0x00018565) main_ncimui_pane

0x382c,	// (0x00012958) popup_query_ncimui_window_ParamLimits

0x382c,	// (0x00012958) popup_query_ncimui_window

0xc5f7,	// (0x0001b723) field_cale_ev2_pane_g4_ParamLimits

0xc5f7,	// (0x0001b723) field_cale_ev2_pane_g4

0x542b,	// (0x00014557) cell_video_dialer_keypad_pane_g2_ParamLimits

0x542b,	// (0x00014557) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001e9c1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001e9c1) cell_video_dialer_keypad_pane_g

0x5443,	// (0x0001456f) cell_video_dialer_keypad_pane_t1

0x93c9,	// (0x000184f5) bg_popup_window_pane_cp012

0xa5ab,	// (0x000196d7) heading_pane_cp06

0xdcf5,	// (0x0001ce21) ncim_query_content_pane

0x93c9,	// (0x000184f5) bg_popup_heading_pane_cp01

0xdcfd,	// (0x0001ce29) ncim_heading_pane_t1

0xdd0b,	// (0x0001ce37) ncim_indicator_popup_pane

0xdd1d,	// (0x0001ce49) ncim_query_button_pane

0xdd31,	// (0x0001ce5d) ncim_query_content_pane_t1

0xdd43,	// (0x0001ce6f) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001ed27) ncim_query_content_pane_t

0xdd7d,	// (0x0001cea9) ncim_query_list_pane

0xdd8f,	// (0x0001cebb) ncim_query_popup_pane

0xdd0b,	// (0x0001ce37) ncim_indicator_popup_pane_ParamLimits

0x767f,	// (0x000167ab) ncim_query_content_pane_g1_ParamLimits

0x767f,	// (0x000167ab) ncim_query_content_pane_g1

0xdd31,	// (0x0001ce5d) ncim_query_content_pane_t1_ParamLimits

0xdd43,	// (0x0001ce6f) ncim_query_content_pane_t2_ParamLimits

0x768b,	// (0x000167b7) ncim_query_content_pane_t3_ParamLimits

0x768b,	// (0x000167b7) ncim_query_content_pane_t3

0x76b3,	// (0x000167df) ncim_query_content_pane_t4_ParamLimits

0x76b3,	// (0x000167df) ncim_query_content_pane_t4

0x76db,	// (0x00016807) ncim_query_content_pane_t5_ParamLimits

0x76db,	// (0x00016807) ncim_query_content_pane_t5

0xdd55,	// (0x0001ce81) ncim_query_content_pane_t6_ParamLimits

0xdd55,	// (0x0001ce81) ncim_query_content_pane_t6

0xfbfb,	// (0x0001ed27) ncim_query_content_pane_t_ParamLimits

0xdd7d,	// (0x0001cea9) ncim_query_list_pane_ParamLimits

0xdd8f,	// (0x0001cebb) ncim_query_popup_pane_ParamLimits

0xdda3,	// (0x0001cecf) wait_bar_pane_cp04

0x93c9,	// (0x000184f5) input_focus_pane_cp011

0xddab,	// (0x0001ced7) ncim_query_popup_pane_t1

0xddb9,	// (0x0001cee5) ncim_list_query_list_pane_ParamLimits

0xddb9,	// (0x0001cee5) ncim_list_query_list_pane

0x93c9,	// (0x000184f5) bg_button_pane_cp027

0xddcc,	// (0x0001cef8) ncim_query_button_pane_g1

0x93c9,	// (0x000184f5) list_highlight_pane_cp012

0xddd6,	// (0x0001cf02) ncim_list_query_list_pane_g1

0xddde,	// (0x0001cf0a) ncim_list_query_list_pane_t1

0xd029,	// (0x0001c155) cam4_indicators_pane_g3_ParamLimits

0xd029,	// (0x0001c155) cam4_indicators_pane_g3

0xd0a7,	// (0x0001c1d3) vid4_indicators_pane_g5_ParamLimits

0xd0a7,	// (0x0001c1d3) vid4_indicators_pane_g5

0xd744,	// (0x0001c870) vid4_progress_pane_g5_ParamLimits

0xd744,	// (0x0001c870) vid4_progress_pane_g5

0x756d,	// (0x00016699) main_ncimui_pane_g1

0x75d3,	// (0x000166ff) ncimui_group_query_pane_ParamLimits

0x75d3,	// (0x000166ff) ncimui_group_query_pane

0x761b,	// (0x00016747) ncimui_list_pane_ParamLimits

0x761b,	// (0x00016747) ncimui_list_pane

0x7642,	// (0x0001676e) ncimui_text_pane_ParamLimits

0x7642,	// (0x0001676e) ncimui_text_pane

0x7703,	// (0x0001682f) ncimui_text_pane_t1_ParamLimits

0x7703,	// (0x0001682f) ncimui_text_pane_t1

0xddec,	// (0x0001cf18) ncimui_list_single_graphic_pane_ParamLimits

0xddec,	// (0x0001cf18) ncimui_list_single_graphic_pane

0x7721,	// (0x0001684d) ncimui_query_pane_ParamLimits

0x7721,	// (0x0001684d) ncimui_query_pane

0x93c9,	// (0x000184f5) list_highlight_pane_cp013

0xddfc,	// (0x0001cf28) ncim_list_query_list_pane_t1_copy1

0xddd6,	// (0x0001cf02) ncim_list_single_graphic_pane_g1

0xde0a,	// (0x0001cf36) ncim_query_button_pane_cp01

0xde16,	// (0x0001cf42) ncim_query_entry_pane_ParamLimits

0xde16,	// (0x0001cf42) ncim_query_entry_pane

0xde29,	// (0x0001cf55) ncimui_query_pane_g1

0xde35,	// (0x0001cf61) ncimui_query_pane_t1_ParamLimits

0xde35,	// (0x0001cf61) ncimui_query_pane_t1

0x9439,	// (0x00018565) input_focus_pane_cp012

0xde4e,	// (0x0001cf7a) ncim_query_entry_pane_t1

0x9bbb,	// (0x00018ce7) main_im_pane_ParamLimits

0x9439,	// (0x00018565) main_mobtv_pane_ParamLimits

0x9439,	// (0x00018565) main_mobtv_pane

0x7318,	// (0x00016444) main_cset6_slider_pane_g18_ParamLimits

0x7318,	// (0x00016444) main_cset6_slider_pane_g18

0x7324,	// (0x00016450) main_cset6_slider_pane_g19_ParamLimits

0x7324,	// (0x00016450) main_cset6_slider_pane_g19

0xd234,	// (0x0001c360) bg_main_mobtv_pane_ParamLimits

0xd234,	// (0x0001c360) bg_main_mobtv_pane

0x7734,	// (0x00016860) main_mobtv_info_pane

0x773d,	// (0x00016869) main_mobtv_loading_pane_ParamLimits

0x773d,	// (0x00016869) main_mobtv_loading_pane

0xde60,	// (0x0001cf8c) main_mobtv_pg_channel_list_pane

0xde6a,	// (0x0001cf96) main_mobtv_pg_hdr_pane

0x774a,	// (0x00016876) main_mobtv_programe_curr_pane_ParamLimits

0x774a,	// (0x00016876) main_mobtv_programe_curr_pane

0x7757,	// (0x00016883) main_mobtv_programe_next_pane_ParamLimits

0x7757,	// (0x00016883) main_mobtv_programe_next_pane

0xde73,	// (0x0001cf9f) popup_mobtv_noti_window

0xc2f6,	// (0x0001b422) main_tv_pg_hdr_pane_g1

0xde7b,	// (0x0001cfa7) main_tv_pg_hdr_pane_g2

0xde83,	// (0x0001cfaf) main_tv_pg_hdr_pane_g3

0xde8b,	// (0x0001cfb7) main_tv_pg_hdr_pane_g4

0xde93,	// (0x0001cfbf) main_tv_pg_hdr_pane_g5

0xde9d,	// (0x0001cfc9) main_tv_pg_hdr_pane_g6

0xdea7,	// (0x0001cfd3) main_tv_pg_hdr_pane_g7

0xdeb1,	// (0x0001cfdd) main_tv_pg_hdr_pane_g8

0xdebb,	// (0x0001cfe7) main_tv_pg_hdr_pane_g9

0xdec5,	// (0x0001cff1) main_tv_pg_hdr_pane_g10

0xdecf,	// (0x0001cffb) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001ed34) main_tv_pg_hdr_pane_g

0xded9,	// (0x0001d005) main_tv_pg_hdr_pane_t1

0xdee7,	// (0x0001d013) main_tv_pg_hdr_pane_t2

0xdef5,	// (0x0001d021) main_tv_pg_hdr_pane_t3

0xdf05,	// (0x0001d031) main_tv_pg_hdr_pane_t4

0xdf15,	// (0x0001d041) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001ed4b) main_tv_pg_hdr_pane_t

0xdf25,	// (0x0001d051) single_mobtv_pg_channel_pane_ParamLimits

0xdf25,	// (0x0001d051) single_mobtv_pg_channel_pane

0xdf37,	// (0x0001d063) single_mobtv_pg_channel_table_pane

0xdf40,	// (0x0001d06c) single_mobtv_pg_channel_thumb_pane

0xdf49,	// (0x0001d075) single_tv_pg_channel_pane_g1

0xdf52,	// (0x0001d07e) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001ed56) single_tv_pg_channel_pane_g

0xc556,	// (0x0001b682) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc556,	// (0x0001b682) bg_single_mobtv_pg_channel_thumb_pane

0xdf5b,	// (0x0001d087) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf5b,	// (0x0001d087) single_mobtv_pg_channel_thumb_pane_g1

0xdf69,	// (0x0001d095) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf69,	// (0x0001d095) single_mobtv_pg_channel_thumb_pane_g2

0xdf75,	// (0x0001d0a1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf75,	// (0x0001d0a1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001ed5b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001ed5b) single_mobtv_pg_channel_thumb_pane_g

0xdf81,	// (0x0001d0ad) single_mobtv_pg_channel_thumb_pane_t1

0xdf8f,	// (0x0001d0bb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001ed62) single_mobtv_pg_channel_thumb_pane_t

0xc2f6,	// (0x0001b422) bg_single_mobtv_pg_channel_table_pane_g1

0xc2f6,	// (0x0001b422) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0001e80d) bg_single_mobtv_pg_channel_table_pane_g

0xdf9d,	// (0x0001d0c9) single_mobtv_pg_channel_table_pane_t1

0xdfab,	// (0x0001d0d7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001ed67) single_mobtv_pg_channel_table_pane_t

0x776c,	// (0x00016898) main_mobtv_info_pane_g1_ParamLimits

0x776c,	// (0x00016898) main_mobtv_info_pane_g1

0x778a,	// (0x000168b6) main_mobtv_info_pane_t1_ParamLimits

0x778a,	// (0x000168b6) main_mobtv_info_pane_t1

0x7802,	// (0x0001692e) main_mobtv_info_pane_t2_ParamLimits

0x7802,	// (0x0001692e) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001ed71) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001ed71) main_mobtv_info_pane_t

0x7891,	// (0x000169bd) wait_bar_pane_cp05

0x78a3,	// (0x000169cf) main_mobtv_loading_pane_g1_ParamLimits

0x78a3,	// (0x000169cf) main_mobtv_loading_pane_g1

0x78b6,	// (0x000169e2) main_mobtv_loading_pane_g2_ParamLimits

0x78b6,	// (0x000169e2) main_mobtv_loading_pane_g2

0x78c2,	// (0x000169ee) main_mobtv_loading_pane_g3_ParamLimits

0x78c2,	// (0x000169ee) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001ed78) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001ed78) main_mobtv_loading_pane_g

0xdfb9,	// (0x0001d0e5) main_mobtv_loading_pane_t1_ParamLimits

0xdfb9,	// (0x0001d0e5) main_mobtv_loading_pane_t1

0xdfd1,	// (0x0001d0fd) main_mobtv_loading_pane_t2_ParamLimits

0xdfd1,	// (0x0001d0fd) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001ed7f) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001ed7f) main_mobtv_loading_pane_t

0x78d5,	// (0x00016a01) wait_bar_pane_cp06_ParamLimits

0x78d5,	// (0x00016a01) wait_bar_pane_cp06

0xdff5,	// (0x0001d121) main_mobtv_programe_curr_pane_t1

0xe003,	// (0x0001d12f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001ed84) main_mobtv_programe_curr_pane_t

0xe011,	// (0x0001d13d) main_mobtv_programe_next_pane_t1

0xe01f,	// (0x0001d14b) main_mobtv_programe_next_pane_t2

0xe02d,	// (0x0001d159) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001ed89) main_mobtv_programe_next_pane_t

0x93c9,	// (0x000184f5) bg_popup_mobtv_noti_window_pane

0xe03b,	// (0x0001d167) popup_mobtv_noti_window_g1

0xe043,	// (0x0001d16f) popup_mobtv_noti_window_t1

0xe051,	// (0x0001d17d) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001ed90) popup_mobtv_noti_window_t

0xc2f6,	// (0x0001b422) bg_popup_mobtv_noti_window_pane_g1

0x93c9,	// (0x000184f5) sc_clock_pane

0x93c9,	// (0x000184f5) main_fs_bigclock_pane

0x6f40,	// (0x0001606c) blid2_tripm_pane_t4_ParamLimits

0x6f40,	// (0x0001606c) blid2_tripm_pane_t4

0x78e4,	// (0x00016a10) sc_clock_pane_g1_ParamLimits

0x78e4,	// (0x00016a10) sc_clock_pane_g1

0x78f6,	// (0x00016a22) sc_clock_pane_t1_ParamLimits

0x78f6,	// (0x00016a22) sc_clock_pane_t1

0x7918,	// (0x00016a44) sc_clock_pane_t2_ParamLimits

0x7918,	// (0x00016a44) sc_clock_pane_t2

0x7930,	// (0x00016a5c) sc_clock_pane_t3_ParamLimits

0x7930,	// (0x00016a5c) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001ed95) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001ed95) sc_clock_pane_t

0x88e7,	// (0x00017a13) main_fs_bigclock_indicator_pane_ParamLimits

0x88e7,	// (0x00017a13) main_fs_bigclock_indicator_pane

0xc526,	// (0x0001b652) main_fs_bigclock_pane_g1_ParamLimits

0xc526,	// (0x0001b652) main_fs_bigclock_pane_g1

0x88f3,	// (0x00017a1f) main_fs_bigclock_pane_t1_ParamLimits

0x88f3,	// (0x00017a1f) main_fs_bigclock_pane_t1

0x8905,	// (0x00017a31) main_fs_bigclock_pane_t2_ParamLimits

0x8905,	// (0x00017a31) main_fs_bigclock_pane_t2

0x8917,	// (0x00017a43) main_fs_bigclock_pane_t3_ParamLimits

0x8917,	// (0x00017a43) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ef9a) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ef9a) main_fs_bigclock_pane_t

0xec35,	// (0x0001dd61) main_fs_bigclock_indicator_pane_g1

0xdd25,	// (0x0001ce51) ncim_query_content_pane_g2_ParamLimits

0xdd25,	// (0x0001ce51) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001ed22) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001ed22) ncim_query_content_pane_g

0x7949,	// (0x00016a75) sc_clock_pane_t4_ParamLimits

0x7949,	// (0x00016a75) sc_clock_pane_t4

0x9439,	// (0x00018565) main_radioblah_pane

0xcf6f,	// (0x0001c09b) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf6f,	// (0x0001c09b) cell_call4_button_pane_t1_copy1

0x7585,	// (0x000166b1) main_ncimui_pane_t1_ParamLimits

0x7585,	// (0x000166b1) main_ncimui_pane_t1

0x759f,	// (0x000166cb) main_ncimui_pane_t2_ParamLimits

0x759f,	// (0x000166cb) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001ed1b) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001ed1b) main_ncimui_pane_t

0xe18c,	// (0x0001d2b8) main_radioblah_anim_pane_ParamLimits

0xe18c,	// (0x0001d2b8) main_radioblah_anim_pane

0xe19d,	// (0x0001d2c9) main_radioblah_info_pane_ParamLimits

0xe19d,	// (0x0001d2c9) main_radioblah_info_pane

0xe1b1,	// (0x0001d2dd) main_radioblah_pane_t1_ParamLimits

0xe1b1,	// (0x0001d2dd) main_radioblah_pane_t1

0xe1cd,	// (0x0001d2f9) main_radioblah_pane_t2_ParamLimits

0xe1cd,	// (0x0001d2f9) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001edb6) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001edb6) main_radioblah_pane_t

0x79ff,	// (0x00016b2b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79ff,	// (0x00016b2b) main_radioblah_rocker_ctrl_pane

0xe215,	// (0x0001d341) main_radioblah_info_pane_t1_ParamLimits

0xe215,	// (0x0001d341) main_radioblah_info_pane_t1

0x7a57,	// (0x00016b83) main_radioblah_info_pane_t2_ParamLimits

0x7a57,	// (0x00016b83) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001edbf) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001edbf) main_radioblah_info_pane_t

0xc2f6,	// (0x0001b422) main_radioblah_rocker_ctrl_pane_g1

0x7b07,	// (0x00016c33) main_radioblah_rocker_ctrl_pane_g2

0x7b0f,	// (0x00016c3b) main_radioblah_rocker_ctrl_pane_g3

0x7b17,	// (0x00016c43) main_radioblah_rocker_ctrl_pane_g4

0x7b1f,	// (0x00016c4b) main_radioblah_rocker_ctrl_pane_g5

0x7b27,	// (0x00016c53) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001edc8) main_radioblah_rocker_ctrl_pane_g

0x753b,	// (0x00016667) main_cset_text2_pane_t1_copy1_ParamLimits

0xcff9,	// (0x0001c125) cam4_image_uncrop_qvga_pane

0xd052,	// (0x0001c17e) vid4_image_uncrop_qcif_pane

0xd964,	// (0x0001ca90) cam6_image_uncrop_qvga_pane_ParamLimits

0xd964,	// (0x0001ca90) cam6_image_uncrop_qvga_pane

0xda2c,	// (0x0001cb58) vid6_image_uncrop_qcif_pane_ParamLimits

0xda2c,	// (0x0001cb58) vid6_image_uncrop_qcif_pane

0x93c9,	// (0x000184f5) bg_popup_preview_window_pane_cp03

0xdcd7,	// (0x0001ce03) list_cset_text2_pane

0xdcdf,	// (0x0001ce0b) main_cset6_text2_pane_g1

0xdce7,	// (0x0001ce13) main_cset6_text2_pane_t1

0x7b2f,	// (0x00016c5b) list_cset_text2_pane_t1_ParamLimits

0x7b2f,	// (0x00016c5b) list_cset_text2_pane_t1

0x9439,	// (0x00018565) main_radioblah_pane_ParamLimits

0x787d,	// (0x000169a9) main_mobtv_info_pane_t3_ParamLimits

0x787d,	// (0x000169a9) main_mobtv_info_pane_t3

0x79ed,	// (0x00016b19) main_radioblah_pane_g1

0x7a27,	// (0x00016b53) main_radioblah_info_pane_g1

0x7aac,	// (0x00016bd8) main_radioblah_info_pane_t3_ParamLimits

0x7aac,	// (0x00016bd8) main_radioblah_info_pane_t3

0x229c,	// (0x000113c8) highlight_cell_cale_month_pane_ParamLimits

0x229c,	// (0x000113c8) highlight_cell_cale_month_pane

0x93c9,	// (0x000184f5) main_phob_fisheye_pane

0xc6a6,	// (0x0001b7d2) scroll_pane_cp0031_ParamLimits

0xc6a6,	// (0x0001b7d2) scroll_pane_cp0031

0xdb3a,	// (0x0001cc66) wait_bar_pane_cp08_ParamLimits

0x7272,	// (0x0001639e) cset_list_set_pane_copy1_ParamLimits

0xe24f,	// (0x0001d37b) highlight_cell_cale_month_pane_g1

0x7b4a,	// (0x00016c76) highlight_cell_cale_month_pane_t1

0xd724,	// (0x0001c850) list_gen_pane_cp01

0xd28c,	// (0x0001c3b8) scroll_pane_01

0x7b58,	// (0x00016c84) list_single_double_fisheye_pane

0x7b61,	// (0x00016c8d) list_double_fisheye_pane_g1_ParamLimits

0x7b61,	// (0x00016c8d) list_double_fisheye_pane_g1

0x7b6d,	// (0x00016c99) list_double_fisheye_pane_g2_ParamLimits

0x7b6d,	// (0x00016c99) list_double_fisheye_pane_g2

0x7b79,	// (0x00016ca5) list_double_fisheye_pane_g3_ParamLimits

0x7b79,	// (0x00016ca5) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001edd5) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001edd5) list_double_fisheye_pane_g

0x7b9d,	// (0x00016cc9) list_double_fisheye_pane_t1_ParamLimits

0x7b9d,	// (0x00016cc9) list_double_fisheye_pane_t1

0x7bb8,	// (0x00016ce4) list_double_fisheye_pane_t2_ParamLimits

0x7bb8,	// (0x00016ce4) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001ede0) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001ede0) list_double_fisheye_pane_t

0x93c9,	// (0x000184f5) main_call5_pane

0x7974,	// (0x00016aa0) sc_swipe_pane_ParamLimits

0x7974,	// (0x00016aa0) sc_swipe_pane

0x7bed,	// (0x00016d19) call5_image_pane_ParamLimits

0x7bed,	// (0x00016d19) call5_image_pane

0x7c0a,	// (0x00016d36) call5_swipe_1_pane_ParamLimits

0x7c0a,	// (0x00016d36) call5_swipe_1_pane

0x7c1d,	// (0x00016d49) call5_swipe_2_pane_ParamLimits

0x7c1d,	// (0x00016d49) call5_swipe_2_pane

0x7c48,	// (0x00016d74) popup_call5_audio_first_window_ParamLimits

0x7c48,	// (0x00016d74) popup_call5_audio_first_window

0xc556,	// (0x0001b682) call5_swipe_1_pane_g1_ParamLimits

0xc556,	// (0x0001b682) call5_swipe_1_pane_g1

0xe257,	// (0x0001d383) call5_swipe_1_pane_g2_ParamLimits

0xe257,	// (0x0001d383) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001ede5) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001ede5) call5_swipe_1_pane_g

0xe263,	// (0x0001d38f) call5_swipe_1_pane_t1_ParamLimits

0xe263,	// (0x0001d38f) call5_swipe_1_pane_t1

0xc556,	// (0x0001b682) call5_swipe_2_pane_g1_ParamLimits

0xc556,	// (0x0001b682) call5_swipe_2_pane_g1

0xe278,	// (0x0001d3a4) call5_swipe_2_pane_g2_ParamLimits

0xe278,	// (0x0001d3a4) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001edea) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001edea) call5_swipe_2_pane_g

0xe284,	// (0x0001d3b0) call5_swipe_2_pane_t1_ParamLimits

0xe284,	// (0x0001d3b0) call5_swipe_2_pane_t1

0xe299,	// (0x0001d3c5) sc_swipe_pane_g1_ParamLimits

0xe299,	// (0x0001d3c5) sc_swipe_pane_g1

0xe2a6,	// (0x0001d3d2) sc_swipe_pane_g2_ParamLimits

0xe2a6,	// (0x0001d3d2) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001edef) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001edef) sc_swipe_pane_g

0xe2b2,	// (0x0001d3de) sc_swipe_pane_t1_ParamLimits

0xe2b2,	// (0x0001d3de) sc_swipe_pane_t1

0x93c9,	// (0x000184f5) main_cmail_launcher_pane

0x7c59,	// (0x00016d85) aid_size_cell_cmail_l_ParamLimits

0x7c59,	// (0x00016d85) aid_size_cell_cmail_l

0x7c73,	// (0x00016d9f) grid_cmail_l_pane_ParamLimits

0x7c73,	// (0x00016d9f) grid_cmail_l_pane

0x7c8e,	// (0x00016dba) cell_cmail_l_pane_ParamLimits

0x7c8e,	// (0x00016dba) cell_cmail_l_pane

0x7cb4,	// (0x00016de0) cell_cmail_l_pane_g1_ParamLimits

0x7cb4,	// (0x00016de0) cell_cmail_l_pane_g1

0x7cc5,	// (0x00016df1) cell_cmail_l_pane_t1_ParamLimits

0x7cc5,	// (0x00016df1) cell_cmail_l_pane_t1

0xe2c7,	// (0x0001d3f3) cell_cmail_l_pane_t2_ParamLimits

0xe2c7,	// (0x0001d3f3) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001edf4) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001edf4) cell_cmail_l_pane_t

0x9439,	// (0x00018565) grid_highlight_pane_cp018_ParamLimits

0x9439,	// (0x00018565) grid_highlight_pane_cp018

0x01d0,	// (0x0000f2fc) main2_pane_ParamLimits

0x01d0,	// (0x0000f2fc) main2_pane

0x9c94,	// (0x00018dc0) popup_sp_fs_action_menu_bg_pane_g1

0x9c9c,	// (0x00018dc8) popup_sp_fs_action_menu_bg_pane_g2

0x9ca4,	// (0x00018dd0) popup_sp_fs_action_menu_bg_pane_g3

0x9cac,	// (0x00018dd8) popup_sp_fs_action_menu_bg_pane_g4

0x9cb4,	// (0x00018de0) popup_sp_fs_action_menu_bg_pane_g5

0x9cbc,	// (0x00018de8) popup_sp_fs_action_menu_bg_pane_g6

0x9cc4,	// (0x00018df0) popup_sp_fs_action_menu_bg_pane_g7

0x9ccc,	// (0x00018df8) popup_sp_fs_action_menu_bg_pane_g8

0x9cd4,	// (0x00018e00) popup_sp_fs_action_menu_bg_pane_g9

0x9cdc,	// (0x00018e08) popup_sp_fs_action_menu_bg_pane_g10

0x9cdc,	// (0x00018e08) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0001e2b9) popup_sp_fs_action_menu_bg_pane_g

0x11d9,	// (0x00010305) list_medium_line_x2_t3_g3_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x2_t3_g3_g1

0x11e5,	// (0x00010311) list_medium_line_x2_t3_g3_g2_ParamLimits

0x11e5,	// (0x00010311) list_medium_line_x2_t3_g3_g2

0x11f1,	// (0x0001031d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x11f1,	// (0x0001031d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0001e369) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0001e369) list_medium_line_x2_t3_g3_g

0x11fd,	// (0x00010329) list_medium_line_x2_t3_g3_t1_ParamLimits

0x11fd,	// (0x00010329) list_medium_line_x2_t3_g3_t1

0x1212,	// (0x0001033e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1212,	// (0x0001033e) list_medium_line_x2_t3_g3_t2

0x1226,	// (0x00010352) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1226,	// (0x00010352) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0001e370) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0001e370) list_medium_line_x2_t3_g3_t

0x11d9,	// (0x00010305) list_medium_line_x2_t3_g2_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x2_t3_g2_g1

0x11f1,	// (0x0001031d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x11f1,	// (0x0001031d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0001e377) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0001e377) list_medium_line_x2_t3_g2_g

0x123b,	// (0x00010367) list_medium_line_x2_t3_g2_t1_ParamLimits

0x123b,	// (0x00010367) list_medium_line_x2_t3_g2_t1

0x1251,	// (0x0001037d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1251,	// (0x0001037d) list_medium_line_x2_t3_g2_t2

0x1263,	// (0x0001038f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1263,	// (0x0001038f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0001e37c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0001e37c) list_medium_line_x2_t3_g2_t

0x11d9,	// (0x00010305) list_medium_line_x2_t4_g4_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x2_t4_g4_g1

0x1281,	// (0x000103ad) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1281,	// (0x000103ad) list_medium_line_x2_t4_g4_g2

0x11e5,	// (0x00010311) list_medium_line_x2_t4_g4_g3_ParamLimits

0x11e5,	// (0x00010311) list_medium_line_x2_t4_g4_g3

0x128d,	// (0x000103b9) list_medium_line_x2_t4_g4_g4_ParamLimits

0x128d,	// (0x000103b9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0001e383) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0001e383) list_medium_line_x2_t4_g4_g

0x1299,	// (0x000103c5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1299,	// (0x000103c5) list_medium_line_x2_t4_g4_t1

0x12b3,	// (0x000103df) list_medium_line_x2_t4_g4_t2_ParamLimits

0x12b3,	// (0x000103df) list_medium_line_x2_t4_g4_t2

0x12c8,	// (0x000103f4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x12c8,	// (0x000103f4) list_medium_line_x2_t4_g4_t3

0x12dd,	// (0x00010409) list_medium_line_x2_t4_g4_t4_ParamLimits

0x12dd,	// (0x00010409) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0001e38c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0001e38c) list_medium_line_x2_t4_g4_t

0x11d9,	// (0x00010305) list_medium_line_x2_t2_g4_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x2_t2_g4_g1

0x1281,	// (0x000103ad) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1281,	// (0x000103ad) list_medium_line_x2_t2_g4_g2

0x11e5,	// (0x00010311) list_medium_line_x2_t2_g4_g3_ParamLimits

0x11e5,	// (0x00010311) list_medium_line_x2_t2_g4_g3

0x11f1,	// (0x0001031d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x11f1,	// (0x0001031d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0001e3f3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0001e3f3) list_medium_line_x2_t2_g4_g

0x22c2,	// (0x000113ee) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22c2,	// (0x000113ee) list_medium_line_x2_t2_g4_t1

0x1226,	// (0x00010352) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1226,	// (0x00010352) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0001e3fc) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0001e3fc) list_medium_line_x2_t2_g4_t

0x11d9,	// (0x00010305) list_medium_line_x2_t2_g3_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x2_t2_g3_g1

0x11e5,	// (0x00010311) list_medium_line_x2_t2_g3_g2_ParamLimits

0x11e5,	// (0x00010311) list_medium_line_x2_t2_g3_g2

0x11f1,	// (0x0001031d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x11f1,	// (0x0001031d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0001e369) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0001e369) list_medium_line_x2_t2_g3_g

0x22d7,	// (0x00011403) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22d7,	// (0x00011403) list_medium_line_x2_t2_g3_t1

0x1226,	// (0x00010352) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1226,	// (0x00010352) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0001e401) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0001e401) list_medium_line_x2_t2_g3_t

0x2416,	// (0x00011542) main_sp_fs_list_pane_ParamLimits

0x2416,	// (0x00011542) main_sp_fs_list_pane

0xd250,	// (0x0001c37c) sp_fs_scroll_pane_ParamLimits

0xd250,	// (0x0001c37c) sp_fs_scroll_pane

0x2422,	// (0x0001154e) list_medium_line_x2_t3_t1

0x2432,	// (0x0001155e) list_medium_line_x2_t3_t2

0x2440,	// (0x0001156c) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0001e44c) list_medium_line_x2_t3_t

0x244e,	// (0x0001157a) list_medium_line_x3_t4_t1

0x245e,	// (0x0001158a) list_medium_line_x3_t4_t2

0x246c,	// (0x00011598) list_medium_line_x3_t4_t3

0x2440,	// (0x0001156c) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0001e453) list_medium_line_x3_t4_t

0x247a,	// (0x000115a6) list_medium_line_x4_t5_t1

0x248a,	// (0x000115b6) list_medium_line_x4_t5_t2

0x246c,	// (0x00011598) list_medium_line_x4_t5_t3

0x2498,	// (0x000115c4) list_medium_line_x4_t5_t4

0x2440,	// (0x0001156c) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0001e45c) list_medium_line_x4_t5_t

0x11d9,	// (0x00010305) list_medium_line_t4_g4_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_t4_g4_g1

0x24a6,	// (0x000115d2) list_medium_line_t4_g4_g2_ParamLimits

0x24a6,	// (0x000115d2) list_medium_line_t4_g4_g2

0x24b2,	// (0x000115de) list_medium_line_t4_g4_g3_ParamLimits

0x24b2,	// (0x000115de) list_medium_line_t4_g4_g3

0x11f1,	// (0x0001031d) list_medium_line_t4_g4_g4_ParamLimits

0x11f1,	// (0x0001031d) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0001e467) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0001e467) list_medium_line_t4_g4_g

0x24be,	// (0x000115ea) list_medium_line_t4_g4_t1_ParamLimits

0x24be,	// (0x000115ea) list_medium_line_t4_g4_t1

0x24d3,	// (0x000115ff) list_medium_line_t4_g4_t2_ParamLimits

0x24d3,	// (0x000115ff) list_medium_line_t4_g4_t2

0x24e9,	// (0x00011615) list_medium_line_t4_g4_t3_ParamLimits

0x24e9,	// (0x00011615) list_medium_line_t4_g4_t3

0x1226,	// (0x00010352) list_medium_line_t4_g4_t4_ParamLimits

0x1226,	// (0x00010352) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0001e470) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0001e470) list_medium_line_t4_g4_t

0x259e,	// (0x000116ca) chi_dic_find_pane_g1

0x3604,	// (0x00012730) main_tport_pane

0x65ac,	// (0x000156d8) list_medium_line_plain_t1

0x665e,	// (0x0001578a) list_medium_line_t2_g2_g1_ParamLimits

0x665e,	// (0x0001578a) list_medium_line_t2_g2_g1

0x666a,	// (0x00015796) list_medium_line_t2_g2_g2_ParamLimits

0x666a,	// (0x00015796) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001eb2c) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001eb2c) list_medium_line_t2_g2_g

0x6676,	// (0x000157a2) list_medium_line_t2_g2_t1_ParamLimits

0x6676,	// (0x000157a2) list_medium_line_t2_g2_t1

0x6690,	// (0x000157bc) list_medium_line_t2_g2_t2_ParamLimits

0x6690,	// (0x000157bc) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001eb31) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001eb31) list_medium_line_t2_g2_t

0xd7a4,	// (0x0001c8d0) aid_sp_fs_list_icon_a_sm

0xd7ac,	// (0x0001c8d8) aid_sp_fs_list_icon_d

0xd7b4,	// (0x0001c8e0) aid_sp_fs_text_primary

0xd7bd,	// (0x0001c8e9) aid_sp_fs_text_secondary

0x6cf6,	// (0x00015e22) list_medium_line

0x6cf6,	// (0x00015e22) list_medium_line_g2

0x6cf6,	// (0x00015e22) list_medium_line_g3

0x6cf6,	// (0x00015e22) list_medium_line_plain

0x6cf6,	// (0x00015e22) list_medium_line_plain_t2

0x6cf6,	// (0x00015e22) list_medium_line_plain_t3

0x6cf6,	// (0x00015e22) list_medium_line_right_icon

0x6cf6,	// (0x00015e22) list_medium_line_right_iconx2

0x6cf6,	// (0x00015e22) list_medium_line_t2

0x6cf6,	// (0x00015e22) list_medium_line_t2_g2

0x6cf6,	// (0x00015e22) list_medium_line_t2_g3

0x6cf6,	// (0x00015e22) list_medium_line_t2_right_icon

0x6cf6,	// (0x00015e22) list_medium_line_t2_right_iconx2

0x6cf6,	// (0x00015e22) list_medium_line_t3

0x6cf6,	// (0x00015e22) list_medium_line_t3_g2

0x6cf6,	// (0x00015e22) list_medium_line_t3_g3

0x6cf6,	// (0x00015e22) list_medium_line_t3_right_iconx2

0x6cff,	// (0x00015e2b) list_medium_line_t4_g4

0x6cf6,	// (0x00015e22) list_medium_line_x2

0x6cf6,	// (0x00015e22) list_medium_line_x2_t2_g2

0x6cf6,	// (0x00015e22) list_medium_line_x2_t2_g3

0x6cf6,	// (0x00015e22) list_medium_line_x2_t2_g4

0x6cf6,	// (0x00015e22) list_medium_line_x2_t3

0x6cf6,	// (0x00015e22) list_medium_line_x2_t3_g2

0x6cf6,	// (0x00015e22) list_medium_line_x2_t3_g3

0x6cf6,	// (0x00015e22) list_medium_line_x2_t3_g4

0x6cf6,	// (0x00015e22) list_medium_line_x2_t4_g2

0x6cf6,	// (0x00015e22) list_medium_line_x2_t4_g4

0x6d08,	// (0x00015e34) list_medium_line_x3

0x6d08,	// (0x00015e34) list_medium_line_x3_t4

0x6d08,	// (0x00015e34) list_medium_line_x3_t4_g4

0x6cff,	// (0x00015e2b) list_medium_line_x4_t4

0x6cff,	// (0x00015e2b) list_medium_line_x4_t4_g7

0x6cff,	// (0x00015e2b) list_medium_line_x4_t5

0x6d11,	// (0x00015e3d) list_single_fs_dyc_pane_ParamLimits

0x6d11,	// (0x00015e3d) list_single_fs_dyc_pane

0x11d9,	// (0x00010305) list_medium_line_x4_t4_g7_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x4_t4_g7_g1

0x746c,	// (0x00016598) list_medium_line_x4_t4_g7_g2_ParamLimits

0x746c,	// (0x00016598) list_medium_line_x4_t4_g7_g2

0x7478,	// (0x000165a4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7478,	// (0x000165a4) list_medium_line_x4_t4_g7_g3

0x7487,	// (0x000165b3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7487,	// (0x000165b3) list_medium_line_x4_t4_g7_g4

0x7493,	// (0x000165bf) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7493,	// (0x000165bf) list_medium_line_x4_t4_g7_g5

0x74a2,	// (0x000165ce) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74a2,	// (0x000165ce) list_medium_line_x4_t4_g7_g6

0x74b1,	// (0x000165dd) list_medium_line_x4_t4_g7_g7_ParamLimits

0x74b1,	// (0x000165dd) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001ecfc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001ecfc) list_medium_line_x4_t4_g7_g

0x74bd,	// (0x000165e9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x74bd,	// (0x000165e9) list_medium_line_x4_t4_g7_t1

0x74d2,	// (0x000165fe) list_medium_line_x4_t4_g7_t2_ParamLimits

0x74d2,	// (0x000165fe) list_medium_line_x4_t4_g7_t2

0x74e7,	// (0x00016613) list_medium_line_x4_t4_g7_t3_ParamLimits

0x74e7,	// (0x00016613) list_medium_line_x4_t4_g7_t3

0x74fc,	// (0x00016628) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74fc,	// (0x00016628) list_medium_line_x4_t4_g7_t4

0x750e,	// (0x0001663a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x750e,	// (0x0001663a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001ed0b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001ed0b) list_medium_line_x4_t4_g7_t

0x7520,	// (0x0001664c) list_single_dyc_row_pane_ParamLimits

0x7520,	// (0x0001664c) list_single_dyc_row_pane

0x7bda,	// (0x00016d06) call5_gesture_pane_ParamLimits

0x7bda,	// (0x00016d06) call5_gesture_pane

0x7c30,	// (0x00016d5c) call5_windows_pane_ParamLimits

0x7c30,	// (0x00016d5c) call5_windows_pane

0x7cdb,	// (0x00016e07) call5_swipe_1_pane_cp_ParamLimits

0x7cdb,	// (0x00016e07) call5_swipe_1_pane_cp

0x7ce7,	// (0x00016e13) call5_swipe_2_pane_cp_ParamLimits

0x7ce7,	// (0x00016e13) call5_swipe_2_pane_cp

0xa92d,	// (0x00019a59) call5_image_pane_cp

0x7cf3,	// (0x00016e1f) popup_call5_audio_first_window_cp_ParamLimits

0x7cf3,	// (0x00016e1f) popup_call5_audio_first_window_cp

0xe299,	// (0x0001d3c5) call5_swipe_1_pane_g1_cp_ParamLimits

0xe299,	// (0x0001d3c5) call5_swipe_1_pane_g1_cp

0xe2d9,	// (0x0001d405) call5_swipe_1_pane_g2_cp

0xe2b2,	// (0x0001d3de) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2b2,	// (0x0001d3de) call5_swipe_1_pane_t1_cp

0xe299,	// (0x0001d3c5) call5_swipe_2_pane_g1_cp_ParamLimits

0xe299,	// (0x0001d3c5) call5_swipe_2_pane_g1_cp

0xe2e1,	// (0x0001d40d) call5_swipe_2_pane_g2_cp

0xe2e9,	// (0x0001d415) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2e9,	// (0x0001d415) call5_swipe_2_pane_t1_cp

0x9439,	// (0x00018565) main_sp_fs_email_pane

0xe2fe,	// (0x0001d42a) main_sp_fs_listscroll_pane_te

0xe307,	// (0x0001d433) popup_sp_fs_action_menu_pane_ParamLimits

0xe307,	// (0x0001d433) popup_sp_fs_action_menu_pane

0xc2f6,	// (0x0001b422) bg_sp_fs_ctrlbar_pane_g1

0xe349,	// (0x0001d475) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe352,	// (0x0001d47e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe35b,	// (0x0001d487) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2f6,	// (0x0001b422) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001edf9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0d9,	// (0x0001b205) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0d9,	// (0x0001b205) bg_sp_fs_ctrlbar_ddmenu_pane

0xe364,	// (0x0001d490) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe364,	// (0x0001d490) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe370,	// (0x0001d49c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe370,	// (0x0001d49c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001ee02) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001ee02) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe37c,	// (0x0001d4a8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe37c,	// (0x0001d4a8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d01,	// (0x00016e2d) list_medium_line_t2_right_icon_g1

0x7d09,	// (0x00016e35) list_medium_line_t2_right_icon_t1

0x7d19,	// (0x00016e45) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001ee07) list_medium_line_t2_right_icon_t

0xbdd9,	// (0x0001af05) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbdd9,	// (0x0001af05) bg_sp_fs_ctrlbar_pane

0x7d73,	// (0x00016e9f) main_sp_fs_ctrlbar_button_pane_cp01

0x7d7d,	// (0x00016ea9) main_sp_fs_ctrlbar_ddmenu_pane

0xe3ce,	// (0x0001d4fa) main_sp_fs_ctrlbar_pane_g1

0xe3da,	// (0x0001d506) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001ee0c) main_sp_fs_ctrlbar_pane_g

0xe3e6,	// (0x0001d512) main_sp_fs_ctrlbar_pane_t1

0x7d87,	// (0x00016eb3) main_sp_fs_ctrlbar_pane

0x7dab,	// (0x00016ed7) main_sp_fs_listscroll_pane_te_cp01

0x7dcb,	// (0x00016ef7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7dcb,	// (0x00016ef7) popup_sp_fs_action_menu_pane_cp01

0x9439,	// (0x00018565) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9439,	// (0x00018565) bg_sp_fs_highlight_list_pane_cp01

0xe416,	// (0x0001d542) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe416,	// (0x0001d542) sp_fs_action_menu_list_gene_pane_g1

0xe425,	// (0x0001d551) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe425,	// (0x0001d551) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001ee16) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001ee16) sp_fs_action_menu_list_gene_pane_g

0xe432,	// (0x0001d55e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe432,	// (0x0001d55e) sp_fs_action_menu_list_gene_pane_t1

0xe44a,	// (0x0001d576) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe44a,	// (0x0001d576) sp_fs_action_menu_list_gene_pane

0xe467,	// (0x0001d593) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe467,	// (0x0001d593) popup_sp_fs_action_menu_bg_pane

0xe475,	// (0x0001d5a1) sp_fs_action_menu_list_pane_ParamLimits

0xe475,	// (0x0001d5a1) sp_fs_action_menu_list_pane

0xe493,	// (0x0001d5bf) sp_fs_scroll_pane_cp01_ParamLimits

0xe493,	// (0x0001d5bf) sp_fs_scroll_pane_cp01

0x7dfb,	// (0x00016f27) list_medium_line_plain_t2_t1

0x7e0b,	// (0x00016f37) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001ee1b) list_medium_line_plain_t2_t

0x7e1b,	// (0x00016f47) list_medium_line_plain_t3_t1

0x7e2b,	// (0x00016f57) list_medium_line_plain_t3_t2

0x7e39,	// (0x00016f65) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001ee20) list_medium_line_plain_t3_t

0x11d9,	// (0x00010305) list_medium_line_x2_t2_g2_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x2_t2_g2_g1

0x11f1,	// (0x0001031d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x11f1,	// (0x0001031d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0001e377) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0001e377) list_medium_line_x2_t2_g2_g

0x24be,	// (0x000115ea) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24be,	// (0x000115ea) list_medium_line_x2_t2_g2_t1

0x1226,	// (0x00010352) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1226,	// (0x00010352) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001ee27) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001ee27) list_medium_line_x2_t2_g2_t

0x11d9,	// (0x00010305) list_medium_line_x2_t4_g2_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x2_t4_g2_g1

0x11f1,	// (0x0001031d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x11f1,	// (0x0001031d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf24b,	// (0x0001e377) list_medium_line_x2_t4_g2_g_ParamLimits

0xf24b,	// (0x0001e377) list_medium_line_x2_t4_g2_g

0x7e47,	// (0x00016f73) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e47,	// (0x00016f73) list_medium_line_x2_t4_g2_t1

0x7e61,	// (0x00016f8d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e61,	// (0x00016f8d) list_medium_line_x2_t4_g2_t2

0x7e76,	// (0x00016fa2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e76,	// (0x00016fa2) list_medium_line_x2_t4_g2_t3

0x1226,	// (0x00010352) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1226,	// (0x00010352) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001ee2c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001ee2c) list_medium_line_x2_t4_g2_t

0x7e8b,	// (0x00016fb7) list_medium_line_t3_right_iconx2_g1

0x7d01,	// (0x00016e2d) list_medium_line_t3_right_iconx2_g2

0x7e93,	// (0x00016fbf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001ee35) list_medium_line_t3_right_iconx2_g

0x7e9d,	// (0x00016fc9) list_medium_line_t3_right_iconx2_t1

0x7ead,	// (0x00016fd9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001ee3c) list_medium_line_t3_right_iconx2_t

0x11d9,	// (0x00010305) list_medium_line_x3_t4_g4_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x3_t4_g4_g1

0x11e5,	// (0x00010311) list_medium_line_x3_t4_g4_g2_ParamLimits

0x11e5,	// (0x00010311) list_medium_line_x3_t4_g4_g2

0x24a6,	// (0x000115d2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x24a6,	// (0x000115d2) list_medium_line_x3_t4_g4_g3

0x7ebb,	// (0x00016fe7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7ebb,	// (0x00016fe7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001ee41) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001ee41) list_medium_line_x3_t4_g4_g

0x7ec7,	// (0x00016ff3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ec7,	// (0x00016ff3) list_medium_line_x3_t4_g4_t1

0x7ede,	// (0x0001700a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7ede,	// (0x0001700a) list_medium_line_x3_t4_g4_t2

0x7ef9,	// (0x00017025) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7ef9,	// (0x00017025) list_medium_line_x3_t4_g4_t3

0x7f0e,	// (0x0001703a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f0e,	// (0x0001703a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001ee4a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001ee4a) list_medium_line_x3_t4_g4_t

0x7f2b,	// (0x00017057) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f2b,	// (0x00017057) list_single_dyc_row_text_pane_t1

0x7f74,	// (0x000170a0) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f74,	// (0x000170a0) list_single_dyc_row_text_pane_t2

0xe4b9,	// (0x0001d5e5) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4b9,	// (0x0001d5e5) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001ee53) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001ee53) list_single_dyc_row_text_pane_t

0xe4dd,	// (0x0001d609) list_single_dyc_row_pane_g1_ParamLimits

0xe4dd,	// (0x0001d609) list_single_dyc_row_pane_g1

0xe4e9,	// (0x0001d615) list_single_dyc_row_pane_g2_ParamLimits

0xe4e9,	// (0x0001d615) list_single_dyc_row_pane_g2

0xe4f5,	// (0x0001d621) list_single_dyc_row_pane_g3_ParamLimits

0xe4f5,	// (0x0001d621) list_single_dyc_row_pane_g3

0xe501,	// (0x0001d62d) list_single_dyc_row_pane_g4_ParamLimits

0xe501,	// (0x0001d62d) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001ee60) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001ee60) list_single_dyc_row_pane_g

0xe50d,	// (0x0001d639) list_single_dyc_row_text_pane_ParamLimits

0xe50d,	// (0x0001d639) list_single_dyc_row_text_pane

0x93c9,	// (0x000184f5) bg_sp_fs_scroll_pane

0xe52c,	// (0x0001d658) thumb_sp_fs_scroll_pane

0x665e,	// (0x0001578a) list_medium_line_g1_ParamLimits

0x665e,	// (0x0001578a) list_medium_line_g1

0x80a9,	// (0x000171d5) list_medium_line_t1_ParamLimits

0x80a9,	// (0x000171d5) list_medium_line_t1

0x11d9,	// (0x00010305) list_medium_line_x2_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x2_g1

0x11e5,	// (0x00010311) list_medium_line_x2_g2_ParamLimits

0x11e5,	// (0x00010311) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001ee69) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001ee69) list_medium_line_x2_g

0xe535,	// (0x0001d661) list_medium_line_x2_t1_ParamLimits

0xe535,	// (0x0001d661) list_medium_line_x2_t1

0x11d9,	// (0x00010305) list_medium_line_x3_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x3_g1

0x11e5,	// (0x00010311) list_medium_line_x3_g2_ParamLimits

0x11e5,	// (0x00010311) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001ee69) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001ee69) list_medium_line_x3_g

0xe535,	// (0x0001d661) list_medium_line_x3_t1_ParamLimits

0xe535,	// (0x0001d661) list_medium_line_x3_t1

0xe54b,	// (0x0001d677) thumb_sp_fs_scroll_pane_g1

0xe554,	// (0x0001d680) thumb_sp_fs_scroll_pane_g2

0xe55d,	// (0x0001d689) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ee6e) thumb_sp_fs_scroll_pane_g

0xe54b,	// (0x0001d677) bg_sp_fs_scroll_pane_g1

0xe554,	// (0x0001d680) bg_sp_fs_scroll_pane_g2

0xe55d,	// (0x0001d689) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ee6e) bg_sp_fs_scroll_pane_g

0x11d9,	// (0x00010305) list_medium_line_x2_t3_g4_g1_ParamLimits

0x11d9,	// (0x00010305) list_medium_line_x2_t3_g4_g1

0x1281,	// (0x000103ad) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1281,	// (0x000103ad) list_medium_line_x2_t3_g4_g2

0x11e5,	// (0x00010311) list_medium_line_x2_t3_g4_g3_ParamLimits

0x11e5,	// (0x00010311) list_medium_line_x2_t3_g4_g3

0x11f1,	// (0x0001031d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x11f1,	// (0x0001031d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0001e3f3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0001e3f3) list_medium_line_x2_t3_g4_g

0x80be,	// (0x000171ea) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80be,	// (0x000171ea) list_medium_line_x2_t3_g4_t1

0x80d8,	// (0x00017204) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80d8,	// (0x00017204) list_medium_line_x2_t3_g4_t2

0x1226,	// (0x00010352) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1226,	// (0x00010352) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001ee75) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001ee75) list_medium_line_x2_t3_g4_t

0x665e,	// (0x0001578a) list_medium_line_g2_g1_ParamLimits

0x665e,	// (0x0001578a) list_medium_line_g2_g1

0x666a,	// (0x00015796) list_medium_line_g2_g2_ParamLimits

0x666a,	// (0x00015796) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001eb2c) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001eb2c) list_medium_line_g2_g

0x80f1,	// (0x0001721d) list_medium_line_g2_t1_ParamLimits

0x80f1,	// (0x0001721d) list_medium_line_g2_t1

0x665e,	// (0x0001578a) list_medium_line_t3_g2_g1_ParamLimits

0x665e,	// (0x0001578a) list_medium_line_t3_g2_g1

0x666a,	// (0x00015796) list_medium_line_t3_g2_g2_ParamLimits

0x666a,	// (0x00015796) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001eb2c) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001eb2c) list_medium_line_t3_g2_g

0x8106,	// (0x00017232) list_medium_line_t3_g2_t1_ParamLimits

0x8106,	// (0x00017232) list_medium_line_t3_g2_t1

0x811d,	// (0x00017249) list_medium_line_t3_g2_t2_ParamLimits

0x811d,	// (0x00017249) list_medium_line_t3_g2_t2

0x8132,	// (0x0001725e) list_medium_line_t3_g2_t3_ParamLimits

0x8132,	// (0x0001725e) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001ee7c) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001ee7c) list_medium_line_t3_g2_t

0x7d01,	// (0x00016e2d) list_medium_line_right_icon_g1

0x814b,	// (0x00017277) list_medium_line_right_icon_t1

0x665e,	// (0x0001578a) list_medium_line_t2_g1_ParamLimits

0x665e,	// (0x0001578a) list_medium_line_t2_g1

0x8159,	// (0x00017285) list_medium_line_t2_t1_ParamLimits

0x8159,	// (0x00017285) list_medium_line_t2_t1

0x8173,	// (0x0001729f) list_medium_line_t2_t2_ParamLimits

0x8173,	// (0x0001729f) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ee83) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ee83) list_medium_line_t2_t

0x665e,	// (0x0001578a) list_medium_line_t3_g1_ParamLimits

0x665e,	// (0x0001578a) list_medium_line_t3_g1

0x818c,	// (0x000172b8) list_medium_line_t3_t1_ParamLimits

0x818c,	// (0x000172b8) list_medium_line_t3_t1

0x81a3,	// (0x000172cf) list_medium_line_t3_t2_ParamLimits

0x81a3,	// (0x000172cf) list_medium_line_t3_t2

0x81b8,	// (0x000172e4) list_medium_line_t3_t3_ParamLimits

0x81b8,	// (0x000172e4) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ee88) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ee88) list_medium_line_t3_t

0x665e,	// (0x0001578a) list_medium_line_g3_g1_ParamLimits

0x665e,	// (0x0001578a) list_medium_line_g3_g1

0x81ca,	// (0x000172f6) list_medium_line_g3_g2_ParamLimits

0x81ca,	// (0x000172f6) list_medium_line_g3_g2

0x666a,	// (0x00015796) list_medium_line_g3_g3_ParamLimits

0x666a,	// (0x00015796) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001ee8f) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001ee8f) list_medium_line_g3_g

0x81d6,	// (0x00017302) list_medium_line_g3_t1_ParamLimits

0x81d6,	// (0x00017302) list_medium_line_g3_t1

0x665e,	// (0x0001578a) list_medium_line_t2_g3_g1_ParamLimits

0x665e,	// (0x0001578a) list_medium_line_t2_g3_g1

0x81ca,	// (0x000172f6) list_medium_line_t2_g3_g2_ParamLimits

0x81ca,	// (0x000172f6) list_medium_line_t2_g3_g2

0x666a,	// (0x00015796) list_medium_line_t2_g3_g3_ParamLimits

0x666a,	// (0x00015796) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001ee8f) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001ee8f) list_medium_line_t2_g3_g

0x81eb,	// (0x00017317) list_medium_line_t2_g3_t1_ParamLimits

0x81eb,	// (0x00017317) list_medium_line_t2_g3_t1

0x8202,	// (0x0001732e) list_medium_line_t2_g3_t2_ParamLimits

0x8202,	// (0x0001732e) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001ee96) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001ee96) list_medium_line_t2_g3_t

0x665e,	// (0x0001578a) list_medium_line_t3_g3_g1_ParamLimits

0x665e,	// (0x0001578a) list_medium_line_t3_g3_g1

0x81ca,	// (0x000172f6) list_medium_line_t3_g3_g2_ParamLimits

0x81ca,	// (0x000172f6) list_medium_line_t3_g3_g2

0x666a,	// (0x00015796) list_medium_line_t3_g3_g3_ParamLimits

0x666a,	// (0x00015796) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001ee8f) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001ee8f) list_medium_line_t3_g3_g

0x821d,	// (0x00017349) list_medium_line_t3_g3_t1_ParamLimits

0x821d,	// (0x00017349) list_medium_line_t3_g3_t1

0x8231,	// (0x0001735d) list_medium_line_t3_g3_t2_ParamLimits

0x8231,	// (0x0001735d) list_medium_line_t3_g3_t2

0x8243,	// (0x0001736f) list_medium_line_t3_g3_t3_ParamLimits

0x8243,	// (0x0001736f) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001ee9b) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001ee9b) list_medium_line_t3_g3_t

0x7e8b,	// (0x00016fb7) list_medium_line_right_iconx2_g1

0x7d01,	// (0x00016e2d) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001eea2) list_medium_line_right_iconx2_g

0x8257,	// (0x00017383) list_medium_line_right_iconx2_t1

0x7e8b,	// (0x00016fb7) list_medium_line_t2_right_iconx2_g1

0x7d01,	// (0x00016e2d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001eea2) list_medium_line_t2_right_iconx2_g

0x8265,	// (0x00017391) list_medium_line_t2_right_iconx2_t1

0x8275,	// (0x000173a1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001eea7) list_medium_line_t2_right_iconx2_t

0x8287,	// (0x000173b3) list_medium_line_x4_t4_t1

0x8295,	// (0x000173c1) list_medium_line_x4_t4_t2

0x82a5,	// (0x000173d1) list_medium_line_x4_t4_t3

0x82b5,	// (0x000173e1) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001eeac) list_medium_line_x4_t4_t

0x8308,	// (0x00017434) tport_appsw_pane_ParamLimits

0x8308,	// (0x00017434) tport_appsw_pane

0x8320,	// (0x0001744c) tport_contact_pane_ParamLimits

0x8320,	// (0x0001744c) tport_contact_pane

0x8338,	// (0x00017464) tport_listscroll_pane_ParamLimits

0x8338,	// (0x00017464) tport_listscroll_pane

0x8352,	// (0x0001747e) cell_tport_appsw_pane_ParamLimits

0x8352,	// (0x0001747e) cell_tport_appsw_pane

0xd0ff,	// (0x0001c22b) tport_appsw_pane_g1_ParamLimits

0xd0ff,	// (0x0001c22b) tport_appsw_pane_g1

0xe566,	// (0x0001d692) tport_contact_pane_g1

0xddab,	// (0x0001ced7) tport_contact_pane_t1

0xe56f,	// (0x0001d69b) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001eeb5) tport_contact_pane_t

0xe57d,	// (0x0001d6a9) list_tport_pane

0xe586,	// (0x0001d6b2) scroll_pane_cp_030

0x839a,	// (0x000174c6) cell_tport_appsw_pane_g1

0x83aa,	// (0x000174d6) cell_tport_appsw_pane_t1

0x83b8,	// (0x000174e4) grid_highlight_pane_cp019

0x83c0,	// (0x000174ec) list_tport_double_graphic_pane_ParamLimits

0x83c0,	// (0x000174ec) list_tport_double_graphic_pane

0x9439,	// (0x00018565) list_highlight_pane_cp023_ParamLimits

0x9439,	// (0x00018565) list_highlight_pane_cp023

0x83cd,	// (0x000174f9) list_tport_double_graphic_pane_g1_ParamLimits

0x83cd,	// (0x000174f9) list_tport_double_graphic_pane_g1

0x83da,	// (0x00017506) list_tport_double_graphic_pane_t1_ParamLimits

0x83da,	// (0x00017506) list_tport_double_graphic_pane_t1

0x83ef,	// (0x0001751b) list_tport_double_graphic_pane_t2_ParamLimits

0x83ef,	// (0x0001751b) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001eec1) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001eec1) list_tport_double_graphic_pane_t

0x93c9,	// (0x000184f5) main_cale_note_pane

0x5ce5,	// (0x00014e11) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5ce5,	// (0x00014e11) cell_vitu2_function_top_wide_pane_cp01

0x7891,	// (0x000169bd) wait_bar_pane_cp05_ParamLimits

0x9439,	// (0x00018565) listscroll_cmail_pane

0xe58f,	// (0x0001d6bb) list_cmail_pane

0x8401,	// (0x0001752d) list_cmail_body_pane

0x8416,	// (0x00017542) list_single_cmail_header_caption_pane

0x842f,	// (0x0001755b) list_single_cmail_header_detail_pane_ParamLimits

0x842f,	// (0x0001755b) list_single_cmail_header_detail_pane

0xe59f,	// (0x0001d6cb) list_single_cmail_header_caption_pane_t1

0x8463,	// (0x0001758f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8463,	// (0x0001758f) list_single_cmail_header_detail_pane_g1

0xe5ad,	// (0x0001d6d9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5ad,	// (0x0001d6d9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001eec6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001eec6) list_single_cmail_header_detail_pane_g

0x847b,	// (0x000175a7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x847b,	// (0x000175a7) list_single_cmail_header_detail_pane_t1

0x84b9,	// (0x000175e5) list_single_cmail_header_editor_pane_bg_ParamLimits

0x84b9,	// (0x000175e5) list_single_cmail_header_editor_pane_bg

0xe5ea,	// (0x0001d716) list_cmail_body_pane_g1

0xe5f3,	// (0x0001d71f) list_cmail_body_pane_t1

0xd13c,	// (0x0001c268) list_single_cmail_header_editor_pane_bg_g1

0xa069,	// (0x00019195) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd14c,	// (0x0001c278) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd144,	// (0x0001c270) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3ed,	// (0x0001c519) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd16c,	// (0x0001c298) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd15c,	// (0x0001c288) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd164,	// (0x0001c290) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa049,	// (0x00019175) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84d2,	// (0x000175fe) calenote_gesture_pane_ParamLimits

0x84d2,	// (0x000175fe) calenote_gesture_pane

0x84f2,	// (0x0001761e) calenote_window_pane_ParamLimits

0x84f2,	// (0x0001761e) calenote_window_pane

0xe601,	// (0x0001d72d) popup_note_window_cp01

0x850e,	// (0x0001763a) calenote_swipe_1_pane_ParamLimits

0x850e,	// (0x0001763a) calenote_swipe_1_pane

0x7ce7,	// (0x00016e13) calenote_swipe_2_pane_ParamLimits

0x7ce7,	// (0x00016e13) calenote_swipe_2_pane

0xe299,	// (0x0001d3c5) calenote_swipe_1_pane_g1_ParamLimits

0xe299,	// (0x0001d3c5) calenote_swipe_1_pane_g1

0xe2a6,	// (0x0001d3d2) calenote_swipe_1_pane_g2_ParamLimits

0xe2a6,	// (0x0001d3d2) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001edef) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001edef) calenote_swipe_1_pane_g

0xe613,	// (0x0001d73f) calenote_swipe_1_pane_t1_ParamLimits

0xe613,	// (0x0001d73f) calenote_swipe_1_pane_t1

0xe299,	// (0x0001d3c5) calenote_swipe_2_pane_g1_ParamLimits

0xe299,	// (0x0001d3c5) calenote_swipe_2_pane_g1

0xe632,	// (0x0001d75e) calenote_swipe_2_pane_g2_ParamLimits

0xe632,	// (0x0001d75e) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001eed2) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001eed2) calenote_swipe_2_pane_g

0xe63e,	// (0x0001d76a) calenote_swipe_2_pane_t1_ParamLimits

0xe63e,	// (0x0001d76a) calenote_swipe_2_pane_t1

0x93c9,	// (0x000184f5) main_mup_navstr_pane

0x499b,	// (0x00013ac7) main_mup3_pane_t7_ParamLimits

0x499b,	// (0x00013ac7) main_mup3_pane_t7

0xccb2,	// (0x0001bdde) main_mp4_pane_g6_ParamLimits

0xccb2,	// (0x0001bdde) main_mp4_pane_g6

0xceda,	// (0x0001c006) main_image3_pane_t4_ParamLimits

0xceda,	// (0x0001c006) main_image3_pane_t4

0x8523,	// (0x0001764f) popup_navstr_preview_pane_ParamLimits

0x8523,	// (0x0001764f) popup_navstr_preview_pane

0x8537,	// (0x00017663) scroll_navstr_pane_ParamLimits

0x8537,	// (0x00017663) scroll_navstr_pane

0x93c9,	// (0x000184f5) bg_popup_preview_window_pane_cp04

0xe665,	// (0x0001d791) popup_navstr_preview_pane_t1

0x854b,	// (0x00017677) scroll_navstr_pane_g1_ParamLimits

0x854b,	// (0x00017677) scroll_navstr_pane_g1

0x855f,	// (0x0001768b) scroll_navstr_pane_t1_ParamLimits

0x855f,	// (0x0001768b) scroll_navstr_pane_t1

0xe60a,	// (0x0001d736) bg_button_pane_cp014

0xe60a,	// (0x0001d736) bg_button_pane_cp030

0x7b85,	// (0x00016cb1) list_double_fisheye_pane_g4_ParamLimits

0x7b85,	// (0x00016cb1) list_double_fisheye_pane_g4

0x7b91,	// (0x00016cbd) list_double_fisheye_pane_g5_ParamLimits

0x7b91,	// (0x00016cbd) list_double_fisheye_pane_g5

0xd250,	// (0x0001c37c) sp_fs_scroll_pane_cp03

0xe3ce,	// (0x0001d4fa) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3da,	// (0x0001d506) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001ee0c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3e6,	// (0x0001d512) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe597,	// (0x0001d6c3) sp_fs_scroll_pane_cp02

0x9d47,	// (0x00018e73) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9d47,	// (0x00018e73) popup_sp_fs_calendar_preview_list_single_pane

0x93c9,	// (0x000184f5) main_cam6_pano_pane

0x9439,	// (0x00018565) main_mup3_pane_ParamLimits

0x93c9,	// (0x000184f5) main_phacti_pane

0x7764,	// (0x00016890) bg_button_pane_cp11

0x777e,	// (0x000168aa) main_mobtv_info_pane_g2_ParamLimits

0x777e,	// (0x000168aa) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001ed6c) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001ed6c) main_mobtv_info_pane_g

0x795b,	// (0x00016a87) sc_clock_pane_t5_ParamLimits

0x795b,	// (0x00016a87) sc_clock_pane_t5

0x79ed,	// (0x00016b19) main_radioblah_pane_g1_ParamLimits

0xe1e5,	// (0x0001d311) main_radioblah_pane_t3_ParamLimits

0xe1e5,	// (0x0001d311) main_radioblah_pane_t3

0xe1fd,	// (0x0001d329) main_radioblah_pane_t4_ParamLimits

0xe1fd,	// (0x0001d329) main_radioblah_pane_t4

0x7a15,	// (0x00016b41) main_radioblah_text_pane_ParamLimits

0x7a15,	// (0x00016b41) main_radioblah_text_pane

0x7a27,	// (0x00016b53) main_radioblah_info_pane_g1_ParamLimits

0x7ac0,	// (0x00016bec) main_radioblah_info_pane_t4_ParamLimits

0x7ac0,	// (0x00016bec) main_radioblah_info_pane_t4

0x9439,	// (0x00018565) main_sp_fs_calendar_pane

0x8575,	// (0x000176a1) main_phacti_pane_g1

0x857d,	// (0x000176a9) phacti_note_pane_ParamLimits

0x857d,	// (0x000176a9) phacti_note_pane

0xe67c,	// (0x0001d7a8) phacti_term_pane_ParamLimits

0xe67c,	// (0x0001d7a8) phacti_term_pane

0xe691,	// (0x0001d7bd) phacti_note_pane_t1_ParamLimits

0xe691,	// (0x0001d7bd) phacti_note_pane_t1

0xe6a8,	// (0x0001d7d4) phacti_term_pane_g1

0xe6b0,	// (0x0001d7dc) phacti_term_pane_t1_ParamLimits

0xe6b0,	// (0x0001d7dc) phacti_term_pane_t1

0xe6da,	// (0x0001d806) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6e2,	// (0x0001d80e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001eedc) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6ea,	// (0x0001d816) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6ea,	// (0x0001d816) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe700,	// (0x0001d82c) aid_popup_sp_fs_bg_corner_pane

0xc2f6,	// (0x0001b422) popup_sp_fs_calendar_preview_bg_pane_g1

0x93c9,	// (0x000184f5) popup_sp_fs_calendar_preview_bg_pane

0x1062,	// (0x0001018e) popup_sp_fs_calendar_preview_list_pane

0xbdd9,	// (0x0001af05) bg_main_sp_fs_cale_pane_ParamLimits

0xbdd9,	// (0x0001af05) bg_main_sp_fs_cale_pane

0xe711,	// (0x0001d83d) listscroll_cale_mrui_pane_ParamLimits

0xe711,	// (0x0001d83d) listscroll_cale_mrui_pane

0xe726,	// (0x0001d852) listscroll_sp_fs_schedule_track_pane

0xe72f,	// (0x0001d85b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe72f,	// (0x0001d85b) main_sp_fs_ctrlbar_pane_cp01

0xe742,	// (0x0001d86e) main_sp_fs_ribbon_pane

0xe74a,	// (0x0001d876) popup_sp_fs_cale_preview_window

0x85f2,	// (0x0001771e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85f2,	// (0x0001771e) list_single_sp_fs_schedule_track_pane

0x9439,	// (0x00018565) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9439,	// (0x00018565) bg_sp_fs_highlight_list_pane_cp03

0x8608,	// (0x00017734) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8608,	// (0x00017734) list_single_sp_fs_schedule_track_pane_g1

0x8614,	// (0x00017740) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8614,	// (0x00017740) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001eee1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001eee1) list_single_sp_fs_schedule_track_pane_g

0x8620,	// (0x0001774c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8620,	// (0x0001774c) list_single_sp_fs_schedule_track_pane_t1

0x863a,	// (0x00017766) sp_fs_schedule_track_pane_ParamLimits

0x863a,	// (0x00017766) sp_fs_schedule_track_pane

0xe75c,	// (0x0001d888) sp_fs_schedule_track_pane_g1

0xe764,	// (0x0001d890) sp_fs_schedule_track_pane_g2

0xe76c,	// (0x0001d898) sp_fs_schedule_track_pane_g3

0xe774,	// (0x0001d8a0) sp_fs_schedule_track_pane_g4

0xe77c,	// (0x0001d8a8) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001eee6) sp_fs_schedule_track_pane_g

0xd13c,	// (0x0001c268) bg_sp_fs_schedule_viewer_highlight_g1

0xa069,	// (0x00019195) bg_sp_fs_schedule_viewer_highlight_g2

0xd144,	// (0x0001c270) bg_sp_fs_schedule_viewer_highlight_g3

0xd14c,	// (0x0001c278) bg_sp_fs_schedule_viewer_highlight_g4

0xd3ed,	// (0x0001c519) bg_sp_fs_schedule_viewer_highlight_g5

0xd15c,	// (0x0001c288) bg_sp_fs_schedule_viewer_highlight_g6

0xd164,	// (0x0001c290) bg_sp_fs_schedule_viewer_highlight_g7

0xd16c,	// (0x0001c298) bg_sp_fs_schedule_viewer_highlight_g8

0xa049,	// (0x00019175) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001eef1) bg_sp_fs_schedule_viewer_highlight_g

0x93c9,	// (0x000184f5) bg_main_sp_fs_ribbon_pane

0x864b,	// (0x00017777) main_sp_fs_ribbon_pane_g1

0xe784,	// (0x0001d8b0) main_sp_fs_ribbon_pane_t1

0x8654,	// (0x00017780) main_sp_fs_ribbon_pane_t2

0xe793,	// (0x0001d8bf) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001ef04) main_sp_fs_ribbon_pane_t

0xe7a2,	// (0x0001d8ce) main_sp_fs_ribbon_scheduler_pane

0xe7aa,	// (0x0001d8d6) bg_main_sp_fs_ribbon_pane_g1

0xe7b3,	// (0x0001d8df) bg_main_sp_fs_ribbon_pane_g2

0xe7bc,	// (0x0001d8e8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001ef0b) bg_main_sp_fs_ribbon_pane_g

0xe7c4,	// (0x0001d8f0) main_sp_fs_ribbon_scheduler_pane_g1

0xe7cd,	// (0x0001d8f9) main_sp_fs_ribbon_scheduler_pane_g2

0xe7d6,	// (0x0001d902) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001ef12) main_sp_fs_ribbon_scheduler_pane_g

0xe7df,	// (0x0001d90b) list_cale_mrui_pane

0x8663,	// (0x0001778f) sp_fs_scroll_pane_cp07_ParamLimits

0x8663,	// (0x0001778f) sp_fs_scroll_pane_cp07

0x867f,	// (0x000177ab) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x867f,	// (0x000177ab) bg_sp_fs_schedule_viewer_highlight

0xe7ec,	// (0x0001d918) list_single_sp_fs_schedule_track_pane_cp01

0xe7f4,	// (0x0001d920) list_sp_fs_schedule_track_pane

0xe7fc,	// (0x0001d928) sp_fs_scroll_pane_cp06_ParamLimits

0xe7fc,	// (0x0001d928) sp_fs_scroll_pane_cp06

0xc2f6,	// (0x0001b422) bgmain_sp_fs_calendar_pane_g1

0x868f,	// (0x000177bb) list_single_cale_mrui_pane_ParamLimits

0x868f,	// (0x000177bb) list_single_cale_mrui_pane

0xe80e,	// (0x0001d93a) list_single_cale_mrui_row_pane_ParamLimits

0xe80e,	// (0x0001d93a) list_single_cale_mrui_row_pane

0xe81b,	// (0x0001d947) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe81b,	// (0x0001d947) list_single_cale_mrui_row_pane_g1

0xe860,	// (0x0001d98c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe860,	// (0x0001d98c) list_single_cale_mrui_row_pane_t1

0x86b1,	// (0x000177dd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86b1,	// (0x000177dd) list_single_cale_mrui_row_pane_t2

0xe872,	// (0x0001d99e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe872,	// (0x0001d99e) list_single_cale_mrui_row_pane_t3

0xe8a1,	// (0x0001d9cd) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8a1,	// (0x0001d9cd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001ef20) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001ef20) list_single_cale_mrui_row_pane_t

0x8719,	// (0x00017845) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8719,	// (0x00017845) list_single_cmail_header_editor_pane_bg_cp01

0x873f,	// (0x0001786b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x873f,	// (0x0001786b) list_single_cmail_header_editor_pane_bg_cp02

0x875f,	// (0x0001788b) main_radioblah_text_pane_t1_ParamLimits

0x875f,	// (0x0001788b) main_radioblah_text_pane_t1

0xe8d0,	// (0x0001d9fc) cam6_indi_pane_cp01

0xe8d8,	// (0x0001da04) cam6_mode_pane_cp01

0xe8e0,	// (0x0001da0c) cam6_pano_pane

0xe8e9,	// (0x0001da15) cam6_zoom_pane_cp01

0xe8f1,	// (0x0001da1d) cam6_pano_image_pane

0xe8fc,	// (0x0001da28) cam6_pano_pane_g1

0xdf52,	// (0x0001d07e) cam6_pano_pane_g2

0xe905,	// (0x0001da31) cam6_pano_pane_g3

0xe90e,	// (0x0001da3a) cam6_pano_pane_g4

0xc90c,	// (0x0001ba38) cam6_pano_pane_g5

0xe917,	// (0x0001da43) cam6_pano_pane_g6

0xe921,	// (0x0001da4d) cam6_pano_pane_g7

0xe929,	// (0x0001da55) cam6_pano_pane_g8

0xe932,	// (0x0001da5e) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001ef29) cam6_pano_pane_g

0x93c9,	// (0x000184f5) main_browser_tag_pane

0xe65d,	// (0x0001d789) grid_navstr_albumart_pane

0xe93d,	// (0x0001da69) cell_navstr_albumart_pane_ParamLimits

0xe93d,	// (0x0001da69) cell_navstr_albumart_pane

0xaaae,	// (0x00019bda) cell_navstr_albumart_pane_g1

0xbbea,	// (0x0001ad16) cell_navstr_albumart_pane_g2

0xbbfa,	// (0x0001ad26) cell_navstr_albumart_pane_g3

0xbbf2,	// (0x0001ad1e) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001ef3c) cell_navstr_albumart_pane_g

0x877a,	// (0x000178a6) bt_list_pane_ParamLimits

0x877a,	// (0x000178a6) bt_list_pane

0xe95f,	// (0x0001da8b) bt_list_pane_t1

0xe96e,	// (0x0001da9a) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001ef45) bt_list_pane_t

0x93c9,	// (0x000184f5) main_cale_prevew_pane

0x878f,	// (0x000178bb) popup_cale_preview_window_ParamLimits

0x878f,	// (0x000178bb) popup_cale_preview_window

0x9439,	// (0x00018565) bg_popup_preview_window_pane_cp05_ParamLimits

0x9439,	// (0x00018565) bg_popup_preview_window_pane_cp05

0xe97d,	// (0x0001daa9) list_cale_preview_pane_ParamLimits

0xe97d,	// (0x0001daa9) list_cale_preview_pane

0xe989,	// (0x0001dab5) list_double_cale_preview_pane_ParamLimits

0xe989,	// (0x0001dab5) list_double_cale_preview_pane

0xe99b,	// (0x0001dac7) list_single_cale_preview_pane_ParamLimits

0xe99b,	// (0x0001dac7) list_single_cale_preview_pane

0xe9af,	// (0x0001dadb) list_single_cale_preview_pane_g1

0xe9b7,	// (0x0001dae3) list_single_cale_preview_pane_t1_ParamLimits

0xe9b7,	// (0x0001dae3) list_single_cale_preview_pane_t1

0xe9cc,	// (0x0001daf8) list_double_cale_preview_pane_g1

0xe9d4,	// (0x0001db00) list_double_cale_preview_pane_t1_ParamLimits

0xe9d4,	// (0x0001db00) list_double_cale_preview_pane_t1

0xe9e9,	// (0x0001db15) list_double_cale_preview_pane_t2_ParamLimits

0xe9e9,	// (0x0001db15) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001ef4a) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001ef4a) list_double_cale_preview_pane_t

0x93c9,	// (0x000184f5) main_ezdial_pane

0x9439,	// (0x00018565) main_sp_fs_email_pane_ParamLimits

0x7d2b,	// (0x00016e57) cmail_ddmenu_btn01_pane_ParamLimits

0x7d2b,	// (0x00016e57) cmail_ddmenu_btn01_pane

0x7d3e,	// (0x00016e6a) cmail_ddmenu_btn02_pane_ParamLimits

0x7d3e,	// (0x00016e6a) cmail_ddmenu_btn02_pane

0x7d61,	// (0x00016e8d) cmail_ddmenu_btn03_pane_ParamLimits

0x7d61,	// (0x00016e8d) cmail_ddmenu_btn03_pane

0x7d87,	// (0x00016eb3) main_sp_fs_ctrlbar_pane_ParamLimits

0x7dab,	// (0x00016ed7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8401,	// (0x0001752d) list_cmail_body_pane_ParamLimits

0x8458,	// (0x00017584) bg_button_pane_cp12

0xe5b9,	// (0x0001d6e5) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5b9,	// (0x0001d6e5) list_single_cmail_header_detail_pane_g3

0xe5c6,	// (0x0001d6f2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe5c6,	// (0x0001d6f2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001eecd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001eecd) list_single_cmail_header_detail_pane_t

0xe6c5,	// (0x0001d7f1) phacti_term_pane_t2_ParamLimits

0xe6c5,	// (0x0001d7f1) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001eed7) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001eed7) phacti_term_pane_t

0xea01,	// (0x0001db2d) aid_size_list_single_double

0x87a8,	// (0x000178d4) popup_ezdial_listscroll_window

0x87c3,	// (0x000178ef) popup_number_entry_window_cp01

0xa92d,	// (0x00019a59) bg_popup_call_pane_cp09

0xea0d,	// (0x0001db39) ezdial_list_pane

0xea15,	// (0x0001db41) scroll_pane_cp23

0xbdd9,	// (0x0001af05) bg_button_pane_cp028_ParamLimits

0xbdd9,	// (0x0001af05) bg_button_pane_cp028

0x87d1,	// (0x000178fd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x87d1,	// (0x000178fd) cmail_ddmenu_btn01_pane_g1

0x87dd,	// (0x00017909) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87dd,	// (0x00017909) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001ef4f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001ef4f) cmail_ddmenu_btn01_pane_g

0xea1d,	// (0x0001db49) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea1d,	// (0x0001db49) cmail_ddmenu_btn01_pane_t1

0xbdd9,	// (0x0001af05) bg_button_pane_cp029_ParamLimits

0xbdd9,	// (0x0001af05) bg_button_pane_cp029

0x87e9,	// (0x00017915) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87e9,	// (0x00017915) cmail_ddmenu_btn02_pane_g1

0x8801,	// (0x0001792d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8801,	// (0x0001792d) cmail_ddmenu_btn02_pane_t1

0x9439,	// (0x00018565) bg_button_pane_cp031_ParamLimits

0x9439,	// (0x00018565) bg_button_pane_cp031

0x87e9,	// (0x00017915) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87e9,	// (0x00017915) cmail_ddmenu_btn03_pane_g1

0x8801,	// (0x0001792d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8801,	// (0x0001792d) cmail_ddmenu_btn03_pane_t1

0x556b,	// (0x00014697) cell_dialer2_keypad_pane_t1_ParamLimits

0x5585,	// (0x000146b1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5585,	// (0x000146b1) cell_dialer2_keypad_pane_t1_copy1

0x75cb,	// (0x000166f7) ncimui_group_button_pane

0x9439,	// (0x00018565) main_sp_fs_calendar_pane_ParamLimits

0x8416,	// (0x00017542) list_single_cmail_header_caption_pane_ParamLimits

0xe708,	// (0x0001d834) aid_recal_txt_sm_pane

0x93c9,	// (0x000184f5) mian_recal_day_pane

0xe74a,	// (0x0001d876) popup_sp_fs_cale_preview_window_ParamLimits

0xea32,	// (0x0001db5e) list_recal_day_pane

0xea74,	// (0x0001dba0) list_single_recal_day_pane_ParamLimits

0xea74,	// (0x0001dba0) list_single_recal_day_pane

0xea86,	// (0x0001dbb2) list_single_recal_day_pane_g1_ParamLimits

0xea86,	// (0x0001dbb2) list_single_recal_day_pane_g1

0xea92,	// (0x0001dbbe) list_single_recal_day_pane_g2_ParamLimits

0xea92,	// (0x0001dbbe) list_single_recal_day_pane_g2

0xeaa2,	// (0x0001dbce) list_single_recal_day_pane_g3_ParamLimits

0xeaa2,	// (0x0001dbce) list_single_recal_day_pane_g3

0x8825,	// (0x00017951) list_single_recal_day_pane_g4_ParamLimits

0x8825,	// (0x00017951) list_single_recal_day_pane_g4

0xeac0,	// (0x0001dbec) list_single_recal_day_pane_g5_ParamLimits

0xeac0,	// (0x0001dbec) list_single_recal_day_pane_g5

0xead0,	// (0x0001dbfc) list_single_recal_day_pane_g6_ParamLimits

0xead0,	// (0x0001dbfc) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001ef5e) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001ef5e) list_single_recal_day_pane_g

0xeae4,	// (0x0001dc10) list_single_recal_day_pane_t1

0xeaf6,	// (0x0001dc22) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001ef69) list_single_recal_day_pane_t

0x8845,	// (0x00017971) ncimui_query_button_pane_ParamLimits

0x8845,	// (0x00017971) ncimui_query_button_pane

0x8855,	// (0x00017981) ncimui_query_button_pane_t1_ParamLimits

0x8855,	// (0x00017981) ncimui_query_button_pane_t1

0xeb08,	// (0x0001dc34) ncimui_query_button_pane_t2_ParamLimits

0xeb08,	// (0x0001dc34) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001ef6e) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001ef6e) ncimui_query_button_pane_t

0x8868,	// (0x00017994) query_button_pane_ParamLimits

0x8868,	// (0x00017994) query_button_pane

0x93c9,	// (0x000184f5) bg_button_pane_cp0028

0xeb1b,	// (0x0001dc47) query_button_pane_t1

0x3604,	// (0x00012730) main_tport_pane_ParamLimits

0x82c5,	// (0x000173f1) bg_popup_window_pane_cp01_ParamLimits

0x82c5,	// (0x000173f1) bg_popup_window_pane_cp01

0x82e0,	// (0x0001740c) heading_pane_cp08_ParamLimits

0x82e0,	// (0x0001740c) heading_pane_cp08

0x82f3,	// (0x0001741f) heading_pane_cp07_ParamLimits

0x82f3,	// (0x0001741f) heading_pane_cp07

0x839a,	// (0x000174c6) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001eeba) cell_tport_appsw_pane_g

0x2be4,	// (0x00011d10) input_candi_list_open_g1

0xa262,	// (0x0001938e) list_cale_time_pane_g6_ParamLimits

0xa262,	// (0x0001938e) list_cale_time_pane_g6

0x43c7,	// (0x000134f3) aid_size_touch_calib_1_ParamLimits

0x43c7,	// (0x000134f3) aid_size_touch_calib_1

0x43d9,	// (0x00013505) aid_size_touch_calib_2_ParamLimits

0x43d9,	// (0x00013505) aid_size_touch_calib_2

0x43f1,	// (0x0001351d) aid_size_touch_calib_3_ParamLimits

0x43f1,	// (0x0001351d) aid_size_touch_calib_3

0x440f,	// (0x0001353b) aid_size_touch_calib_4_ParamLimits

0x440f,	// (0x0001353b) aid_size_touch_calib_4

0x4427,	// (0x00013553) main_touch_calib_button_group_pane_ParamLimits

0x4427,	// (0x00013553) main_touch_calib_button_group_pane

0x443f,	// (0x0001356b) main_touch_calib_pane_g1_ParamLimits

0x4451,	// (0x0001357d) main_touch_calib_pane_g2_ParamLimits

0x4463,	// (0x0001358f) main_touch_calib_pane_g3_ParamLimits

0x4475,	// (0x000135a1) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0001e882) main_touch_calib_pane_g_ParamLimits

0x4487,	// (0x000135b3) main_touch_calib_pane_t1_ParamLimits

0x44a1,	// (0x000135cd) main_touch_calib_pane_t2_ParamLimits

0x44bb,	// (0x000135e7) main_touch_calib_pane_t3_ParamLimits

0x44cf,	// (0x000135fb) main_touch_calib_pane_t4_ParamLimits

0x44e3,	// (0x0001360f) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0001e88b) main_touch_calib_pane_t_ParamLimits

0xc6ca,	// (0x0001b7f6) list_single_fp_cale_pane_g3_ParamLimits

0xc6ca,	// (0x0001b7f6) list_single_fp_cale_pane_g3

0x9439,	// (0x00018565) bg_button_pane_cp012_ParamLimits

0x9439,	// (0x00018565) bg_vkb2_func_pane_cp03_ParamLimits

0x6614,	// (0x00015740) cell_vitu2_function_top_pane_g1_ParamLimits

0x9439,	// (0x00018565) bg_vkb2_func_pane_cp04_ParamLimits

0x7559,	// (0x00016685) main_ncimui_button_group_pane_ParamLimits

0x7559,	// (0x00016685) main_ncimui_button_group_pane

0x75b9,	// (0x000166e5) main_ncimui_pane_t3_ParamLimits

0x75b9,	// (0x000166e5) main_ncimui_pane_t3

0xe673,	// (0x0001d79f) phacti_button_group_pane

0xea01,	// (0x0001db2d) aid_size_list_single_double_ParamLimits

0x87a8,	// (0x000178d4) popup_ezdial_listscroll_window_ParamLimits

0x87c3,	// (0x000178ef) popup_number_entry_window_cp01_ParamLimits

0x887b,	// (0x000179a7) phacti_button_pane_ParamLimits

0x887b,	// (0x000179a7) phacti_button_pane

0x93c9,	// (0x000184f5) bg_button_pane_cp14

0xeb29,	// (0x0001dc55) phacti_button_pane_t1

0x888c,	// (0x000179b8) main_touch_calib_button_pane_ParamLimits

0x888c,	// (0x000179b8) main_touch_calib_button_pane

0x9bbb,	// (0x00018ce7) bg_button_pane_cp18_ParamLimits

0x9bbb,	// (0x00018ce7) bg_button_pane_cp18

0xeb37,	// (0x0001dc63) main_touch_calib_button_pane_t1_ParamLimits

0xeb37,	// (0x0001dc63) main_touch_calib_button_pane_t1

0xeb4d,	// (0x0001dc79) main_touch_calib_button_pane_t2_ParamLimits

0xeb4d,	// (0x0001dc79) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001ef73) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001ef73) main_touch_calib_button_pane_t

0x93c9,	// (0x000184f5) cell_ncimui_button_pane

0x93c9,	// (0x000184f5) bg_button_pane_cp032

0xeb6b,	// (0x0001dc97) cell_ncimui_button_pane_t1

0xceba,	// (0x0001bfe6) image3_infobar_pane_ParamLimits

0xceba,	// (0x0001bfe6) image3_infobar_pane

0x7987,	// (0x00016ab3) fs_bigclock_status_pane_ParamLimits

0x7987,	// (0x00016ab3) fs_bigclock_status_pane

0x7994,	// (0x00016ac0) main_fs_bigclock_clock_pane_ParamLimits

0x7994,	// (0x00016ac0) main_fs_bigclock_clock_pane

0x79b0,	// (0x00016adc) main_fs_bigclock_indi_pane_ParamLimits

0x79b0,	// (0x00016adc) main_fs_bigclock_indi_pane

0x79c9,	// (0x00016af5) main_fs_bigclock_swipe_pane_ParamLimits

0x79c9,	// (0x00016af5) main_fs_bigclock_swipe_pane

0x93c9,	// (0x000184f5) main_fs_clock_dumped_data

0xe05f,	// (0x0001d18b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe05f,	// (0x0001d18b) list_single_fs_bigclock_indicator_pane_g1

0xe07a,	// (0x0001d1a6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe07a,	// (0x0001d1a6) list_single_fs_bigclock_indicator_pane_g2

0xe094,	// (0x0001d1c0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe094,	// (0x0001d1c0) list_single_fs_bigclock_indicator_pane_g3

0xe0ae,	// (0x0001d1da) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0ae,	// (0x0001d1da) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001eda0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001eda0) list_single_fs_bigclock_indicator_pane_g

0xe0d7,	// (0x0001d203) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0d7,	// (0x0001d203) list_single_fs_bigclock_indicator_pane_t1

0xe0ff,	// (0x0001d22b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0ff,	// (0x0001d22b) list_single_fs_bigclock_indicator_pane_t2

0xe127,	// (0x0001d253) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe127,	// (0x0001d253) list_single_fs_bigclock_indicator_pane_t3

0xe14f,	// (0x0001d27b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe14f,	// (0x0001d27b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001edab) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001edab) list_single_fs_bigclock_indicator_pane_t

0xeb79,	// (0x0001dca5) image3_infobar_fav_pane_ParamLimits

0xeb79,	// (0x0001dca5) image3_infobar_fav_pane

0xeb89,	// (0x0001dcb5) image3_infobar_loc_pane_ParamLimits

0xeb89,	// (0x0001dcb5) image3_infobar_loc_pane

0xeb9d,	// (0x0001dcc9) image3_infobar_time_pane_ParamLimits

0xeb9d,	// (0x0001dcc9) image3_infobar_time_pane

0xc2f6,	// (0x0001b422) image3_infobar_time_pane_g1

0xebad,	// (0x0001dcd9) image3_infobar_time_pane_t1

0xc2f6,	// (0x0001b422) image3_infobar_loc_pane_g1

0xebbb,	// (0x0001dce7) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001ef78) image3_infobar_loc_pane_g

0xebc3,	// (0x0001dcef) image3_infobar_loc_pane_t1

0xc2f6,	// (0x0001b422) image3_infobar_fav_pane_g1

0xebd1,	// (0x0001dcfd) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001ef7d) image3_infobar_fav_pane_g

0xebd9,	// (0x0001dd05) fs_bigclock_status_battery_pane

0xebe2,	// (0x0001dd0e) fs_bigclock_status_signal_pane

0xebeb,	// (0x0001dd17) fs_bigclock_status_title_pane

0xebf4,	// (0x0001dd20) fs_bigclock_status_signal_pane_g1

0xebfd,	// (0x0001dd29) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001ef82) fs_bigclock_status_signal_pane_g

0xec05,	// (0x0001dd31) fs_bigclock_status_battery_pane_g1

0xec0e,	// (0x0001dd3a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001ef87) fs_bigclock_status_battery_pane_g

0xec16,	// (0x0001dd42) fs_bigclock_status_title_pane_t1

0xc2f6,	// (0x0001b422) main_fs_bigclock_clock_pane_g1

0x88a1,	// (0x000179cd) main_fs_bigclock_clock_pane_g2

0x88a1,	// (0x000179cd) main_fs_bigclock_clock_pane_g3

0x88a1,	// (0x000179cd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001ef8c) main_fs_bigclock_clock_pane_g

0x88a9,	// (0x000179d5) main_fs_bigclock_clock_pane_t1

0x88b7,	// (0x000179e3) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ef95) main_fs_bigclock_clock_pane_t

0xec24,	// (0x0001dd50) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec24,	// (0x0001dd50) list_single_fs_bigclock_indicator_pane

0x88c6,	// (0x000179f2) list_single_fs_bigclock_pane_ParamLimits

0x88c6,	// (0x000179f2) list_single_fs_bigclock_pane

0xec3e,	// (0x0001dd6a) main_fs_bigclock_indicator_pane_t1

0xec4d,	// (0x0001dd79) list_single_fs_bigclock_pane_g1

0xec55,	// (0x0001dd81) list_single_fs_bigclock_pane_t1

0xc2f6,	// (0x0001b422) main_fs_bigclock_swipe_pane_g1

0xec98,	// (0x0001ddc4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001efa6) main_fs_bigclock_swipe_pane_g

0xeca0,	// (0x0001ddcc) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca0,	// (0x0001ddcc) main_fs_bigclock_swipe_pane_t1

0x24ff,	// (0x0001162b) call_type_pane_ParamLimits

0x93c9,	// (0x000184f5) main_btmg_pane

0xe847,	// (0x0001d973) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe847,	// (0x0001d973) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001ef19) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001ef19) list_single_cale_mrui_row_pane_g

0xea5b,	// (0x0001db87) list_recal_vselct_arw_lo_pane

0xea63,	// (0x0001db8f) list_recal_vselct_arw_up_pane

0xea6b,	// (0x0001db97) list_recal_vselct_pane

0x8929,	// (0x00017a55) btmg_button_pane

0x8933,	// (0x00017a5f) main_btmg_pane_g1

0x93c9,	// (0x000184f5) bg_button_pane_cp044

0xecbd,	// (0x0001dde9) btmg_button_pane_t1

0xbdc5,	// (0x0001aef1) aid_listscroll_gen

0x9439,	// (0x00018565) main_cntbar_detail_pane

0xe58f,	// (0x0001d6bb) list_cmail_folder_pane

0xd250,	// (0x0001c37c) sp_fs_scroll_pane_cp03_ParamLimits

0x8416,	// (0x00017542) list_single_fs_dyc_pane_cp01_ParamLimits

0x8416,	// (0x00017542) list_single_fs_dyc_pane_cp01

0xeccb,	// (0x0001ddf7) aid_size_cmail_indent

0xecd4,	// (0x0001de00) list_single_dyc_row_pane_cp01

0x8969,	// (0x00017a95) cntbar_detail_list_pane_ParamLimits

0x8969,	// (0x00017a95) cntbar_detail_list_pane

0x89b5,	// (0x00017ae1) main_cntbar_detail_cont_pane_ParamLimits

0x89b5,	// (0x00017ae1) main_cntbar_detail_cont_pane

0xd250,	// (0x0001c37c) scroll_pane_cp032_ParamLimits

0xd250,	// (0x0001c37c) scroll_pane_cp032

0x89c9,	// (0x00017af5) cntbar_detail_list_event_pane_ParamLimits

0x89c9,	// (0x00017af5) cntbar_detail_list_event_pane

0x8979,	// (0x00017aa5) cntbar_detail_list_shct_pane

0xa0b7,	// (0x000191e3) aid_list_gen

0xecdd,	// (0x0001de09) aid_scroll

0xece6,	// (0x0001de12) aid_size_touch_scroll_bar

0x6cf6,	// (0x00015e22) aid_list_double

0xecef,	// (0x0001de1b) aid_list_single

0x6cf6,	// (0x00015e22) aid_list_single_lg

0xecf8,	// (0x0001de24) aid_list_z_g_a_sm

0xed00,	// (0x0001de2c) aid_list_z_g_d

0xed08,	// (0x0001de34) aid_txt_z_prm

0x89d9,	// (0x00017b05) aid_txt_z_prm_cp01

0x89e7,	// (0x00017b13) aid_txt_z_sec

0x89f5,	// (0x00017b21) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89f5,	// (0x00017b21) main_cntbar_detail_cont_pane_g1

0x8a09,	// (0x00017b35) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a09,	// (0x00017b35) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001efab) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001efab) main_cntbar_detail_cont_pane_g

0xed16,	// (0x0001de42) main_cntbar_detail_cont_pane_t1

0xed24,	// (0x0001de50) main_cntbar_detail_cont_pane_t2

0xed32,	// (0x0001de5e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001efb0) main_cntbar_detail_cont_pane_t

0x8a19,	// (0x00017b45) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a19,	// (0x00017b45) cell_cntbar_detail_list_shct_pane

0xed40,	// (0x0001de6c) cntbar_detail_list_shct_pane_g1

0xed49,	// (0x0001de75) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001efb7) cntbar_detail_list_shct_pane_g

0x8a2d,	// (0x00017b59) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a2d,	// (0x00017b59) cntbar_detail_list_event_pane_g1

0x8a39,	// (0x00017b65) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a39,	// (0x00017b65) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001efbc) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001efbc) cntbar_detail_list_event_pane_g

0x8aa5,	// (0x00017bd1) cntbar_detail_list_event_pane_t1_ParamLimits

0x8aa5,	// (0x00017bd1) cntbar_detail_list_event_pane_t1

0x8aba,	// (0x00017be6) cntbar_detail_list_event_pane_t2_ParamLimits

0x8aba,	// (0x00017be6) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001efc9) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001efc9) cntbar_detail_list_event_pane_t

0xc2f6,	// (0x0001b422) cell_cntbar_detail_list_shct_pane_g1

0xa8e5,	// (0x00019a11) navi_pane_mv_g3

0x9439,	// (0x00018565) main_cntbar_detail_pane_ParamLimits

0x93c9,	// (0x000184f5) main_notif_wgt_pane

0xcc4c,	// (0x0001bd78) aid_tch_main_mp4_pane_g4

0xce4e,	// (0x0001bf7a) popup_slider_window_cp02

0xea51,	// (0x0001db7d) list_recal_day_event_pane

0x893d,	// (0x00017a69) cntbar_detail_btn_pane_ParamLimits

0x893d,	// (0x00017a69) cntbar_detail_btn_pane

0x8953,	// (0x00017a7f) cntbar_detail_btn_pane_cp01_ParamLimits

0x8953,	// (0x00017a7f) cntbar_detail_btn_pane_cp01

0x8979,	// (0x00017aa5) cntbar_detail_list_shct_pane_ParamLimits

0x8989,	// (0x00017ab5) cntbar_detail_pane_g1_ParamLimits

0x8989,	// (0x00017ab5) cntbar_detail_pane_g1

0x8999,	// (0x00017ac5) cntbar_detail_pane_t1_ParamLimits

0x8999,	// (0x00017ac5) cntbar_detail_pane_t1

0x8a45,	// (0x00017b71) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a45,	// (0x00017b71) cntbar_detail_list_event_pane_g3

0x8a5d,	// (0x00017b89) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a5d,	// (0x00017b89) cntbar_detail_list_event_pane_g4

0x8a75,	// (0x00017ba1) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a75,	// (0x00017ba1) cntbar_detail_list_event_pane_g5

0x8a8d,	// (0x00017bb9) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a8d,	// (0x00017bb9) cntbar_detail_list_event_pane_g6

0x8acf,	// (0x00017bfb) cntbar_detail_list_event_pane_t3_ParamLimits

0x8acf,	// (0x00017bfb) cntbar_detail_list_event_pane_t3

0x8ae1,	// (0x00017c0d) popup_notif_wgt_window_ParamLimits

0x8ae1,	// (0x00017c0d) popup_notif_wgt_window

0x8afa,	// (0x00017c26) popup_submenu_window_cp01_ParamLimits

0x8afa,	// (0x00017c26) popup_submenu_window_cp01

0xa92d,	// (0x00019a59) bg_popup_window_pane_cp10

0xed52,	// (0x0001de7e) listscroll_notif_wgt_pane

0xed63,	// (0x0001de8f) list_notif_wgt_window

0xed6c,	// (0x0001de98) scroll_pane_cp033

0x8b0c,	// (0x00017c38) list_notif_wgt_row_pane_ParamLimits

0x8b0c,	// (0x00017c38) list_notif_wgt_row_pane

0xed75,	// (0x0001dea1) aid_size_list_notif_wgt_del

0xed82,	// (0x0001deae) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0001deba) list_notif_wgt_row_pane_g2

0xed9a,	// (0x0001dec6) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001efd0) list_notif_wgt_row_pane_g

0xeda7,	// (0x0001ded3) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0001dee8) list_notif_wgt_row_pane_t2

0xedce,	// (0x0001defa) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001efd7) list_notif_wgt_row_pane_t

0xd415,	// (0x0001c541) list_recal_day_event_pane_g1

0xede0,	// (0x0001df0c) list_recal_day_event_pane_t1

0x93c9,	// (0x000184f5) bg_button_pane_cp045

0xedef,	// (0x0001df1b) cntbar_detail_btn_pane_t1

0xbdd9,	// (0x0001af05) main_callh_pane_ParamLimits

0xbdd9,	// (0x0001af05) main_callh_pane

0x93c9,	// (0x000184f5) main_coverflow0_pane

0x93c9,	// (0x000184f5) main_wgtman_pane

0x79d7,	// (0x00016b03) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79d7,	// (0x00016b03) main_fs_bigclock_unlock_btn_pane

0x8392,	// (0x000174be) bg_button_pane_cp16

0x83a2,	// (0x000174ce) cell_tport_appsw_pane_g3

0x8b1c,	// (0x00017c48) cf0_flow_pane_ParamLimits

0x8b1c,	// (0x00017c48) cf0_flow_pane

0xedfd,	// (0x0001df29) listscroll_cf0_pane

0xee08,	// (0x0001df34) main_cf0_pane_g1

0x8b31,	// (0x00017c5d) main_cf0_pane_t1_ParamLimits

0x8b31,	// (0x00017c5d) main_cf0_pane_t1

0x8b48,	// (0x00017c74) main_cf0_pane_t2_ParamLimits

0x8b48,	// (0x00017c74) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001efe3) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001efe3) main_cf0_pane_t

0xee1a,	// (0x0001df46) scroll_pane_cp11

0x8b5f,	// (0x00017c8b) cf0_flow_pane_g1

0x8b67,	// (0x00017c93) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001efe8) cf0_flow_pane_g

0x8b6f,	// (0x00017c9b) cf0_flow_pane_t1

0x93c9,	// (0x000184f5) main_call6_pane

0x93c9,	// (0x000184f5) main_calllock_pane

0x8b7d,	// (0x00017ca9) call6_btn_grp_pane_ParamLimits

0x8b7d,	// (0x00017ca9) call6_btn_grp_pane

0x8b97,	// (0x00017cc3) call6_pane_g1_ParamLimits

0x8b97,	// (0x00017cc3) call6_pane_g1

0x8bac,	// (0x00017cd8) popup_call6_1st_window_ParamLimits

0x8bac,	// (0x00017cd8) popup_call6_1st_window

0x8bbd,	// (0x00017ce9) popup_call6_2nd_window_ParamLimits

0x8bbd,	// (0x00017ce9) popup_call6_2nd_window

0x8bce,	// (0x00017cfa) cell_call6_btn_pane_ParamLimits

0x8bce,	// (0x00017cfa) cell_call6_btn_pane

0xa92d,	// (0x00019a59) bg_popup_call2_in_pane_cp03

0xee25,	// (0x0001df51) popup_call6_1st_window_g1

0xee2d,	// (0x0001df59) popup_call6_1st_window_g2

0xee35,	// (0x0001df61) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001efed) popup_call6_1st_window_g

0xee3d,	// (0x0001df69) popup_call6_1st_window_t1

0xee4c,	// (0x0001df78) popup_call6_1st_window_t2

0xee5c,	// (0x0001df88) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001eff4) popup_call6_1st_window_t

0xa92d,	// (0x00019a59) bg_popup_call2_in_pane_cp04

0xee25,	// (0x0001df51) popup_call6_2nd_window_g1

0xee2d,	// (0x0001df59) popup_call6_2nd_window_g2

0xee35,	// (0x0001df61) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001efed) popup_call6_2nd_window_g

0xee3d,	// (0x0001df69) popup_call6_2nd_window_t1

0x93c9,	// (0x000184f5) bg_button_pane_cp15

0xee6c,	// (0x0001df98) cell_call6_btn_pane_g1

0xee75,	// (0x0001dfa1) cell_call6_btn_pane_t1

0x8be2,	// (0x00017d0e) listscroll_wgtman_pane_ParamLimits

0x8be2,	// (0x00017d0e) listscroll_wgtman_pane

0x8c03,	// (0x00017d2f) wgtman_btn_pane_ParamLimits

0x8c03,	// (0x00017d2f) wgtman_btn_pane

0xa6ea,	// (0x00019816) aid_scroll_copy1

0xee84,	// (0x0001dfb0) list_wgtman_pane

0x8c46,	// (0x00017d72) wgtman_btn_pane_g1_ParamLimits

0x8c46,	// (0x00017d72) wgtman_btn_pane_g1

0x8c72,	// (0x00017d9e) wgtman_btn_pane_t1_ParamLimits

0x8c72,	// (0x00017d9e) wgtman_btn_pane_t1

0xee8e,	// (0x0001dfba) wgtman_btn_pane_t2_ParamLimits

0xee8e,	// (0x0001dfba) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001effb) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001effb) wgtman_btn_pane_t

0x8caf,	// (0x00017ddb) listrow_wgtman_pane_ParamLimits

0x8caf,	// (0x00017ddb) listrow_wgtman_pane

0x8cc2,	// (0x00017dee) listrow_wgtman_pane_g1

0x8ccf,	// (0x00017dfb) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001f000) listrow_wgtman_pane_g

0x8ced,	// (0x00017e19) listrow_wgtman_pane_t1

0x8d05,	// (0x00017e31) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001f005) listrow_wgtman_pane_t

0x8d2b,	// (0x00017e57) wait_bar_pane_cp09

0xeea5,	// (0x0001dfd1) main_calllock_btn_pane

0xeeaf,	// (0x0001dfdb) main_calllock_pane_g1

0x93c9,	// (0x000184f5) bg_button_pane_cp17

0xeeba,	// (0x0001dfe6) main_calllock_btn_pane_g1

0xeec3,	// (0x0001dfef) main_calllock_btn_pane_t1

0x93c9,	// (0x000184f5) main_dialer3_pane

0x93c9,	// (0x000184f5) main_fmrd2_pane

0xc2f6,	// (0x0001b422) main_fs_bigclock_unlock_btn_pane_g1

0xeeda,	// (0x0001e006) main_fs_bigclock_unlock_btn_pane_t1

0x8d3d,	// (0x00017e69) area_fmrd2_info_pane_ParamLimits

0x8d3d,	// (0x00017e69) area_fmrd2_info_pane

0x8d4e,	// (0x00017e7a) area_fmrd2_visual_pane_ParamLimits

0x8d4e,	// (0x00017e7a) area_fmrd2_visual_pane

0x8d5c,	// (0x00017e88) fmrd2_indi_pane_ParamLimits

0x8d5c,	// (0x00017e88) fmrd2_indi_pane

0x8d69,	// (0x00017e95) area_fmrd2_visual_pane_g1

0x8d71,	// (0x00017e9d) area_fmrd2_visual_pane_t1

0x8d81,	// (0x00017ead) area_fmrd2_visual_pane_t2

0x8d91,	// (0x00017ebd) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001f00f) area_fmrd2_visual_pane_t

0x8da1,	// (0x00017ecd) area_fmrd2_info_pane_g1

0x8da9,	// (0x00017ed5) area_fmrd2_info_pane_t1

0x8db9,	// (0x00017ee5) area_fmrd2_info_pane_t2

0x8dc9,	// (0x00017ef5) area_fmrd2_info_pane_t3

0x8dd9,	// (0x00017f05) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001f016) area_fmrd2_info_pane_t

0x8de7,	// (0x00017f13) fmrd2_indi_pane_t1

0x8df7,	// (0x00017f23) fmrd2_indi_pane_t2

0x8e07,	// (0x00017f33) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001f01f) fmrd2_indi_pane_t

0xe0bd,	// (0x0001d1e9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0bd,	// (0x0001d1e9) list_single_fs_bigclock_indicator_pane_g5

0xe164,	// (0x0001d290) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe164,	// (0x0001d290) list_single_fs_bigclock_indicator_pane_t5

0x8591,	// (0x000176bd) aid_cell_bcale_month_pane_ParamLimits

0x8591,	// (0x000176bd) aid_cell_bcale_month_pane

0x85af,	// (0x000176db) bcale_month_pane_ParamLimits

0x85af,	// (0x000176db) bcale_month_pane

0x85d3,	// (0x000176ff) bcale_preview_pane_ParamLimits

0x85d3,	// (0x000176ff) bcale_preview_pane

0xec55,	// (0x0001dd81) list_single_fs_bigclock_pane_t1_ParamLimits

0xec74,	// (0x0001dda0) list_single_fs_bigclock_pane_t2_ParamLimits

0xec74,	// (0x0001dda0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001efa1) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001efa1) list_single_fs_bigclock_pane_t

0xeed2,	// (0x0001dffe) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001f00a) main_fs_bigclock_unlock_btn_pane_g

0x8e17,	// (0x00017f43) aid_dia3_key_size_ParamLimits

0x8e17,	// (0x00017f43) aid_dia3_key_size

0x8e26,	// (0x00017f52) aid_dia3_listrow_size_ParamLimits

0x8e26,	// (0x00017f52) aid_dia3_listrow_size

0x8e3b,	// (0x00017f67) dia3_keypad_fun_pane_ParamLimits

0x8e3b,	// (0x00017f67) dia3_keypad_fun_pane

0x8e57,	// (0x00017f83) dia3_keypad_num_pane_ParamLimits

0x8e57,	// (0x00017f83) dia3_keypad_num_pane

0x8e72,	// (0x00017f9e) dia3_listscroll_pane_ParamLimits

0x8e72,	// (0x00017f9e) dia3_listscroll_pane

0x8e85,	// (0x00017fb1) dia3_numentry_pane_ParamLimits

0x8e85,	// (0x00017fb1) dia3_numentry_pane

0xeee8,	// (0x0001e014) dia3_list_pane

0xeef3,	// (0x0001e01f) scroll_pane_cp12

0x93c9,	// (0x000184f5) bg_dia3_numentry_pane

0x8e99,	// (0x00017fc5) dia3_numentry_pane_t1

0x8ea8,	// (0x00017fd4) cell_dia3_key_num_pane

0x8eb0,	// (0x00017fdc) cell_dia3_key0_fun_pane_ParamLimits

0x8eb0,	// (0x00017fdc) cell_dia3_key0_fun_pane

0x8ec4,	// (0x00017ff0) cell_dia3_key1_fun_pane_ParamLimits

0x8ec4,	// (0x00017ff0) cell_dia3_key1_fun_pane

0x8edc,	// (0x00018008) dia3_listrow_pane

0xddcc,	// (0x0001cef8) bg_dia3_numentry_pane_g1

0x93c9,	// (0x000184f5) bg_button_pane_cp21

0xeefe,	// (0x0001e02a) cell_dia3_key_num_pane_t1

0xef0c,	// (0x0001e038) cell_dia3_key_num_pane_t2

0xef1b,	// (0x0001e047) cell_dia3_key_num_pane_t3

0xef2a,	// (0x0001e056) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001f026) cell_dia3_key_num_pane_t

0x93c9,	// (0x000184f5) bg_button_pane_cp19

0x8eee,	// (0x0001801a) cell_dia3_key0_fun_pane_g1

0x93c9,	// (0x000184f5) bg_button_pane_cp20

0x8ef6,	// (0x00018022) cell_dia3_key1_fun_pane_g1

0x8efe,	// (0x0001802a) area_left_week_number_pane

0x8f0a,	// (0x00018036) area_top_day_name_pane

0x8f1d,	// (0x00018049) frame_month_view_pane

0xef39,	// (0x0001e065) grid_month_view_pane

0x8f30,	// (0x0001805c) cell_top_day_name_pane_ParamLimits

0x8f30,	// (0x0001805c) cell_top_day_name_pane

0x8f5d,	// (0x00018089) cell_area_left_week_number_pane_ParamLimits

0x8f5d,	// (0x00018089) cell_area_left_week_number_pane

0x8f71,	// (0x0001809d) cell_month_view_pane_ParamLimits

0x8f71,	// (0x0001809d) cell_month_view_pane

0xef47,	// (0x0001e073) frm_month_g1

0x8f9e,	// (0x000180ca) frm_month_g2

0x8fb1,	// (0x000180dd) frm_month_g3

0x8fc4,	// (0x000180f0) frm_month_g4

0x8fd7,	// (0x00018103) frm_month_g5

0x8fea,	// (0x00018116) frm_month_g6

0x8ffd,	// (0x00018129) frm_month_g7

0xef54,	// (0x0001e080) frm_month_g8

0x9010,	// (0x0001813c) frm_month_g9

0x9020,	// (0x0001814c) frm_month_g10

0x9030,	// (0x0001815c) frm_month_g11

0x9040,	// (0x0001816c) frm_month_g12

0x9052,	// (0x0001817e) frm_month_g13

0x9064,	// (0x00018190) frm_month_g14

0x9078,	// (0x000181a4) frm_month_g15

0x908c,	// (0x000181b8) frm_month_g16

0x000f,

0xff03,	// (0x0001f02f) frm_month_g

0xef61,	// (0x0001e08d) cell_top_day_name_pane_t1

0x90a0,	// (0x000181cc) cell_area_left_week_number_pane_g1

0x90ac,	// (0x000181d8) cell_area_left_week_number_pane_t1

0xc556,	// (0x0001b682) cell_month_view_pane_g1

0x90bf,	// (0x000181eb) cell_month_view_pane_t1

0x93c9,	// (0x000184f5) main_fps_pane

0xe396,	// (0x0001d4c2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe396,	// (0x0001d4c2) cmail_ddmenu_btn02_pane_cp1

0xe3b2,	// (0x0001d4de) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3b2,	// (0x0001d4de) cmail_ddmenu_btn02_pane_cp2

0x87f5,	// (0x00017921) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87f5,	// (0x00017921) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001ef54) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001ef54) cmail_ddmenu_btn02_pane_g

0x8813,	// (0x0001793f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8813,	// (0x0001793f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001ef59) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001ef59) cmail_ddmenu_btn02_pane_t

0x90d2,	// (0x000181fe) fps_text_pane_ParamLimits

0x90d2,	// (0x000181fe) fps_text_pane

0x90e9,	// (0x00018215) main_fps_pane_g1_ParamLimits

0x90e9,	// (0x00018215) main_fps_pane_g1

0x9103,	// (0x0001822f) wait_bar_pane_cp010_ParamLimits

0x9103,	// (0x0001822f) wait_bar_pane_cp010

0x9114,	// (0x00018240) fps_text_pane_t1_ParamLimits

0x9114,	// (0x00018240) fps_text_pane_t1

0xeaae,	// (0x0001dbda) cam4_image_uncrop_pane_g1

0xeab7,	// (0x0001dbe3) cam4_image_uncrop_pane_g2

0x5a11,	// (0x00014b3d) cam4_image_uncrop_pane_g3

0x5a1a,	// (0x00014b46) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001ea1a) cam4_image_uncrop_pane_g

0x8edc,	// (0x00018008) dia3_listrow_pane_ParamLimits

0x93c9,	// (0x000184f5) main_phob2_pane

0x8363,	// (0x0001748f) cell_tport_appsw_pane_cp02_ParamLimits

0x8363,	// (0x0001748f) cell_tport_appsw_pane_cp02

0x8377,	// (0x000174a3) cell_tport_appsw_pane_cp03_ParamLimits

0x8377,	// (0x000174a3) cell_tport_appsw_pane_cp03

0x93c9,	// (0x000184f5) phob2_contact_card_pane

0x93c9,	// (0x000184f5) phob2_listscroll_pane

0xef74,	// (0x0001e0a0) phob2_list_pane

0xef7c,	// (0x0001e0a8) scroll_pane_cp034

0x912c,	// (0x00018258) phob2_cc_data_pane_ParamLimits

0x912c,	// (0x00018258) phob2_cc_data_pane

0x914b,	// (0x00018277) phob2_cc_listscroll_pane_ParamLimits

0x914b,	// (0x00018277) phob2_cc_listscroll_pane

0x9169,	// (0x00018295) list_double_large_graphic_phob2_pane_ParamLimits

0x9169,	// (0x00018295) list_double_large_graphic_phob2_pane

0x917c,	// (0x000182a8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x917c,	// (0x000182a8) list_double_large_graphic_phob2_pane_g1

0x9192,	// (0x000182be) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9192,	// (0x000182be) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001f050) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001f050) list_double_large_graphic_phob2_pane_g

0x919e,	// (0x000182ca) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x919e,	// (0x000182ca) list_double_large_graphic_phob2_pane_t1

0x91b4,	// (0x000182e0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x91b4,	// (0x000182e0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001f055) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001f055) list_double_large_graphic_phob2_pane_t

0x93c9,	// (0x000184f5) list_highlight_pane_cp024

0x91c9,	// (0x000182f5) phob2_cc_button_pane

0x91d1,	// (0x000182fd) phob2_cc_data_pane_g1_ParamLimits

0x91d1,	// (0x000182fd) phob2_cc_data_pane_g1

0x91e6,	// (0x00018312) phob2_cc_data_pane_g2_ParamLimits

0x91e6,	// (0x00018312) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001f05a) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001f05a) phob2_cc_data_pane_g

0x91f6,	// (0x00018322) phob2_cc_data_pane_t1_ParamLimits

0x91f6,	// (0x00018322) phob2_cc_data_pane_t1

0x920e,	// (0x0001833a) phob2_cc_data_pane_t2_ParamLimits

0x920e,	// (0x0001833a) phob2_cc_data_pane_t2

0x9226,	// (0x00018352) phob2_cc_data_pane_t3_ParamLimits

0x9226,	// (0x00018352) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001f05f) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001f05f) phob2_cc_data_pane_t

0xef84,	// (0x0001e0b0) phob2_cc_list_pane_ParamLimits

0xef84,	// (0x0001e0b0) phob2_cc_list_pane

0xd4be,	// (0x0001c5ea) scroll_pane_cp035_ParamLimits

0xd4be,	// (0x0001c5ea) scroll_pane_cp035

0x9439,	// (0x00018565) bg_button_pane_cp033

0xef90,	// (0x0001e0bc) phob2_cc_button_pane_g1

0xef9c,	// (0x0001e0c8) phob2_cc_button_pane_t1

0xefb1,	// (0x0001e0dd) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001f066) phob2_cc_button_pane_t

0x923e,	// (0x0001836a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x923e,	// (0x0001836a) list_double_large_graphic_phob2_cc_pane

0x9251,	// (0x0001837d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9251,	// (0x0001837d) list_double_large_graphic_phob2_cc_pane_g1

0x925d,	// (0x00018389) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x925d,	// (0x00018389) list_double_large_graphic_phob2_cc_pane_g2

0x9269,	// (0x00018395) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9269,	// (0x00018395) list_double_large_graphic_phob2_cc_pane_g3

0x9275,	// (0x000183a1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9275,	// (0x000183a1) list_double_large_graphic_phob2_cc_pane_g4

0x9281,	// (0x000183ad) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9281,	// (0x000183ad) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001f06b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001f06b) list_double_large_graphic_phob2_cc_pane_g

0x928d,	// (0x000183b9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x928d,	// (0x000183b9) list_double_large_graphic_phob2_cc_pane_t1

0x92b6,	// (0x000183e2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x92b6,	// (0x000183e2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001f076) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001f076) list_double_large_graphic_phob2_cc_pane_t

0xefc3,	// (0x0001e0ef) list_highlight_pane_cp025_ParamLimits

0xefc3,	// (0x0001e0ef) list_highlight_pane_cp025

0x9439,	// (0x00018565) bg_button_pane_cp033_ParamLimits

0xef90,	// (0x0001e0bc) phob2_cc_button_pane_g1_ParamLimits

0xef9c,	// (0x0001e0c8) phob2_cc_button_pane_t1_ParamLimits

0xefb1,	// (0x0001e0dd) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001f066) phob2_cc_button_pane_t_ParamLimits

0x032b,	// (0x0000f457) popup_wgtman_window

0xd28c,	// (0x0001c3b8) scroll_pane_cp038

0x8c28,	// (0x00017d54) wgtman_btn_pane_cp_01_ParamLimits

0x8c28,	// (0x00017d54) wgtman_btn_pane_cp_01

0xefd1,	// (0x0001e0fd) wgtman_content_pane

0xefda,	// (0x0001e106) wgtman_heading_pane

0x93c9,	// (0x000184f5) bg_heading_pane_cp02

0xefe3,	// (0x0001e10f) wgtman_heading_pane_g1

0xefeb,	// (0x0001e117) wgtman_heading_pane_t1

0xeff9,	// (0x0001e125) scroll_pane_cp036

0xf001,	// (0x0001e12d) wgtman_list_pane

0xf009,	// (0x0001e135) wgtman_list_pane_t1_ParamLimits

0xf009,	// (0x0001e135) wgtman_list_pane_t1

0xcfed,	// (0x0001c119) cam4_grid_pane

0x67fb,	// (0x00015927) bg_button_pane_cp015_ParamLimits

0x680f,	// (0x0001593b) bg_button_pane_cp016_ParamLimits

0x6822,	// (0x0001594e) bg_button_pane_cp017_ParamLimits

0x687a,	// (0x000159a6) popup_vitu2_query_window_g3_ParamLimits

0x687a,	// (0x000159a6) popup_vitu2_query_window_g3

0x6937,	// (0x00015a63) popup_vitu2_query_window_t6_ParamLimits

0x6937,	// (0x00015a63) popup_vitu2_query_window_t6

0x6962,	// (0x00015a8e) popup_vitu2_query_window_t7_ParamLimits

0x6962,	// (0x00015a8e) popup_vitu2_query_window_t7

0xeaae,	// (0x0001dbda) cam4_grid_pane_g1

0xeab7,	// (0x0001dbe3) cam4_grid_pane_g2

0xf025,	// (0x0001e151) cam4_grid_pane_g3

0xf02e,	// (0x0001e15a) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001f07b) cam4_grid_pane_g

0x1360,	// (0x0001048c) aid_placing_vt_slider_lsc_ParamLimits

0x165d,	// (0x00010789) vidtel_button_pane_ParamLimits

0x165d,	// (0x00010789) vidtel_button_pane

0xf039,	// (0x0001e165) bg_button_pane_cp034

0x92df,	// (0x0001840b) vidtel_button_pane_g1

0xf043,	// (0x0001e16f) vidtel_button_pane_t1

0xd3c9,	// (0x0001c4f5) aid_size_vtel_slider_touch

0xd4be,	// (0x0001c5ea) scroll_pane_cp039

0xde0a,	// (0x0001cf36) ncim_query_button_pane_cp01_ParamLimits

0xde29,	// (0x0001cf55) ncimui_query_pane_g1_ParamLimits

0x9439,	// (0x00018565) input_focus_pane_cp012_ParamLimits

0xde4e,	// (0x0001cf7a) ncim_query_entry_pane_t1_ParamLimits

0xd4be,	// (0x0001c5ea) scroll_pane_cp039_ParamLimits

0xa7d0,	// (0x000198fc) navi_pane_bcale_mc_g1

0xa7d8,	// (0x00019904) navi_pane_bcale_mc_t1

0xe3fb,	// (0x0001d527) main_sp_fs_email_pane_g1

0xe407,	// (0x0001d533) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001ee11) main_sp_fs_email_pane_g

0xe853,	// (0x0001d97f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe853,	// (0x0001d97f) list_single_cale_mrui_row_pane_g3

0x883b,	// (0x00017967) list_single_recal_day_pane_g5_event_pane

0xeadc,	// (0x0001dc08) list_single_recal_day_pane_g7

0xf051,	// (0x0001e17d) list_recal_day_event_pane_cp01

0xf05a,	// (0x0001e186) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x0001e18e) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x0001e196) list_recal_vselct_pane_cp01

0xd415,	// (0x0001c541) list_recal_day_event_pane_cp01_g1

0xf074,	// (0x0001e1a0) list_recal_day_event_pane_cp01_t1

0xeae4,	// (0x0001dc10) list_single_recal_day_pane_t1_ParamLimits

0xeaf6,	// (0x0001dc22) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001ef69) list_single_recal_day_pane_t_ParamLimits

0x9ab5,	// (0x00018be1) bg_notes_pane_ParamLimits

0x9b7f,	// (0x00018cab) list_notes_pane_ParamLimits

0x065f,	// (0x0000f78b) scroll_pane_cp06_ParamLimits

0x9bbb,	// (0x00018ce7) main_notes_pane_ParamLimits

0x93c9,	// (0x000184f5) main_welc_pane

0x92e7,	// (0x00018413) main_welc_body_pane_ParamLimits

0x92e7,	// (0x00018413) main_welc_body_pane

0x9304,	// (0x00018430) main_welc_opti_pane_ParamLimits

0x9304,	// (0x00018430) main_welc_opti_pane

0x934d,	// (0x00018479) main_welc_pane_t1_ParamLimits

0x934d,	// (0x00018479) main_welc_pane_t1

0x936f,	// (0x0001849b) main_welc_body_row_pane_ParamLimits

0x936f,	// (0x0001849b) main_welc_body_row_pane

0xd242,	// (0x0001c36e) main_welc_opti_row_pane_ParamLimits

0xd242,	// (0x0001c36e) main_welc_opti_row_pane

0xf082,	// (0x0001e1ae) main_welc_opti_row_pane_g1

0xf08a,	// (0x0001e1b6) main_welc_opti_row_pane_t1

0xf09a,	// (0x0001e1c6) main_welc_body_row_pane_t1

0xed5b,	// (0x0001de87) popup_notif_wgt_heading_pane

0xed75,	// (0x0001dea1) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0001deae) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0001deba) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x0001dec6) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001efd0) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x0001ded3) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0001dee8) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0001defa) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001efd7) list_notif_wgt_row_pane_t_ParamLimits

0x8cc2,	// (0x00017dee) listrow_wgtman_pane_g1_ParamLimits

0x8ccf,	// (0x00017dfb) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001f000) listrow_wgtman_pane_g_ParamLimits

0x8ced,	// (0x00017e19) listrow_wgtman_pane_t1_ParamLimits

0x8d05,	// (0x00017e31) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001f005) listrow_wgtman_pane_t_ParamLimits

0x8d2b,	// (0x00017e57) wait_bar_pane_cp09_ParamLimits

0x93c9,	// (0x000184f5) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0001e1d5) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0001e1dd) popup_notif_wgt_heading_pane_t1

0x93c9,	// (0x000184f5) main_vids_pane

0x93c9,	// (0x000184f5) vids_listscroll_pane

0x9385,	// (0x000184b1) scroll_pane_cp040

0x93c9,	// (0x000184f5) vids_list_pane

0x9390,	// (0x000184bc) vids_list_double_pane_ParamLimits

0x9390,	// (0x000184bc) vids_list_double_pane

0x93a1,	// (0x000184cd) vids_list_double_pane_g1

0x93aa,	// (0x000184d6) vids_list_double_pane_t1

0x93b9,	// (0x000184e5) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001f089) vids_list_double_pane_t

0x9439,	// (0x00018565) main_ncimui_pane_ParamLimits

0x756d,	// (0x00016699) main_ncimui_pane_g1_ParamLimits

0x7579,	// (0x000166a5) main_ncimui_pane_g2_ParamLimits

0x7579,	// (0x000166a5) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001ed16) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001ed16) main_ncimui_pane_g

0x9323,	// (0x0001844f) main_welc_pane_g1_ParamLimits

0x9323,	// (0x0001844f) main_welc_pane_g1

0x9338,	// (0x00018464) main_welc_pane_g2_ParamLimits

0x9338,	// (0x00018464) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001f084) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001f084) main_welc_pane_g

0x9ab5,	// (0x00018be1) listscroll_mce_pane_ParamLimits

0xa925,	// (0x00019a51) wait_bar_pane_cp10

0xbdcd,	// (0x0001aef9) main_cale_day_pane_ParamLimits

0xbdcd,	// (0x0001aef9) main_cale_week_pane_ParamLimits

0x9ab5,	// (0x00018be1) main_messa_pane_ParamLimits

0x4d1c,	// (0x00013e48) main_clock2_btn_pane_ParamLimits

0x4d1c,	// (0x00013e48) main_clock2_btn_pane

0xc752,	// (0x0001b87e) main_clock2_btn_pane_cp01_ParamLimits

0xc752,	// (0x0001b87e) main_clock2_btn_pane_cp01

0xe7df,	// (0x0001d90b) list_cale_mrui_pane_ParamLimits

0xee12,	// (0x0001df3e) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001efde) main_cf0_pane_g

0x8efe,	// (0x0001802a) area_left_week_number_pane_ParamLimits

0x8f0a,	// (0x00018036) area_top_day_name_pane_ParamLimits

0x8f1d,	// (0x00018049) frame_month_view_pane_ParamLimits

0xef39,	// (0x0001e065) grid_month_view_pane_ParamLimits

0xef47,	// (0x0001e073) frm_month_g1_ParamLimits

0x8f9e,	// (0x000180ca) frm_month_g2_ParamLimits

0x8fb1,	// (0x000180dd) frm_month_g3_ParamLimits

0x8fc4,	// (0x000180f0) frm_month_g4_ParamLimits

0x8fd7,	// (0x00018103) frm_month_g5_ParamLimits

0x8fea,	// (0x00018116) frm_month_g6_ParamLimits

0x8ffd,	// (0x00018129) frm_month_g7_ParamLimits

0xef54,	// (0x0001e080) frm_month_g8_ParamLimits

0x9010,	// (0x0001813c) frm_month_g9_ParamLimits

0x9020,	// (0x0001814c) frm_month_g10_ParamLimits

0x9030,	// (0x0001815c) frm_month_g11_ParamLimits

0x9040,	// (0x0001816c) frm_month_g12_ParamLimits

0x9052,	// (0x0001817e) frm_month_g13_ParamLimits

0x9064,	// (0x00018190) frm_month_g14_ParamLimits

0x9078,	// (0x000181a4) frm_month_g15_ParamLimits

0x908c,	// (0x000181b8) frm_month_g16_ParamLimits

0xff03,	// (0x0001f02f) frm_month_g_ParamLimits

0xef61,	// (0x0001e08d) cell_top_day_name_pane_t1_ParamLimits

0x90a0,	// (0x000181cc) cell_area_left_week_number_pane_g1_ParamLimits

0x90ac,	// (0x000181d8) cell_area_left_week_number_pane_t1_ParamLimits

0xc556,	// (0x0001b682) cell_month_view_pane_g1_ParamLimits

0x90bf,	// (0x000181eb) cell_month_view_pane_t1_ParamLimits

0x9aad,	// (0x00018bd9) main_clock2_btn_pane_g1

0xf0bf,	// (0x0001e1eb) main_clock2_btn_pane_t1

0x9439,	// (0x00018565) listscroll_cmail_pane_ParamLimits

0xe3fb,	// (0x0001d527) main_sp_fs_email_pane_g1_ParamLimits

0xe407,	// (0x0001d533) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001ee11) main_sp_fs_email_pane_g_ParamLimits

0xea32,	// (0x0001db5e) list_recal_day_pane_ParamLimits

0xea43,	// (0x0001db6f) mian_recal_day_pane_t1

0x7fea,	// (0x00017116) list_single_dyc_row_text_pane_t4_ParamLimits

0x7fea,	// (0x00017116) list_single_dyc_row_text_pane_t4

0x8033,	// (0x0001715f) list_single_dyc_row_text_pane_t5_ParamLimits

0x8033,	// (0x0001715f) list_single_dyc_row_text_pane_t5

0xe4cb,	// (0x0001d5f7) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4cb,	// (0x0001d5f7) list_single_dyc_row_text_pane_t6

0xa241,	// (0x0001936d) aid_mgn_list_cale_time_pane

0x9439,	// (0x00018565) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
