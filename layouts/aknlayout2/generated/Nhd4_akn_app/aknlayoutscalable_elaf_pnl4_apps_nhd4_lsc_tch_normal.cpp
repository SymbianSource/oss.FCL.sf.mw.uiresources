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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000f128 };

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
0x0231,	// (0x0000f359) Screen

0x023d,	// (0x0000f365) application_window

0x0279,	// (0x0000f3a1) area_bottom_pane_ParamLimits

0x0279,	// (0x0000f3a1) area_bottom_pane

0x02b2,	// (0x0000f3da) area_top_pane_ParamLimits

0x02b2,	// (0x0000f3da) area_top_pane

0x9485,	// (0x000185ad) call_video_uplink_pane_ParamLimits

0x9485,	// (0x000185ad) call_video_uplink_pane

0x0340,	// (0x0000f468) main_pane_ParamLimits

0x0340,	// (0x0000f468) main_pane

0xbe5b,	// (0x0001af83) context_pane

0x36a6,	// (0x000127ce) navi_pane

0x36d8,	// (0x00012800) popup_cale_events_window_ParamLimits

0x36d8,	// (0x00012800) popup_cale_events_window

0xbe6e,	// (0x0001af96) popup_mup_playback_window

0x36f0,	// (0x00012818) signal_pane

0x9c12,	// (0x00018d3a) main_browser_pane

0x9e78,	// (0x00018fa0) main_burst_pane

0x340e,	// (0x00012536) main_calc_pane

0xbded,	// (0x0001af15) main_cale_day_pane

0x0951,	// (0x0000fa79) main_cale_month_pane

0xbded,	// (0x0001af15) main_cale_week_pane

0x9e78,	// (0x00018fa0) main_call_pane

0x98c4,	// (0x000189ec) main_call_poc_pane

0x9e78,	// (0x00018fa0) main_camera_pane

0x9e78,	// (0x00018fa0) main_chi_dic_pane

0xa702,	// (0x0001982a) main_clock_pane

0x98c4,	// (0x000189ec) main_fmradio_pane

0x9e78,	// (0x00018fa0) main_graph_messa_pane

0x98c4,	// (0x000189ec) main_help_pane

0x9c12,	// (0x00018d3a) main_im_pane

0x9b1f,	// (0x00018c47) main_image_pane_ParamLimits

0x9b1f,	// (0x00018c47) main_image_pane

0x98c4,	// (0x000189ec) main_location2_pane

0x9e78,	// (0x00018fa0) main_location_pane

0x9b1f,	// (0x00018c47) main_messa_pane

0x98c4,	// (0x000189ec) main_mp2_pane

0x9e78,	// (0x00018fa0) main_mp_pane

0x98c4,	// (0x000189ec) main_msg_pane

0x98c4,	// (0x000189ec) main_mup_eq_pane

0x98c4,	// (0x000189ec) main_mup_pane

0x9c12,	// (0x00018d3a) main_notes_pane

0x98c4,	// (0x000189ec) main_pec_pane

0x98c4,	// (0x000189ec) main_phob_pane

0x98c4,	// (0x000189ec) main_pinb_pane

0x98c4,	// (0x000189ec) main_postcard_pane

0x98c4,	// (0x000189ec) main_qdial_pane

0x9e78,	// (0x00018fa0) main_skin_pane

0x98c4,	// (0x000189ec) main_smil2_pane

0x9e78,	// (0x00018fa0) main_smil_pane

0x9e78,	// (0x00018fa0) main_video_pane

0x9e78,	// (0x00018fa0) main_video_tele_pane

0x9b1f,	// (0x00018c47) main_viewer_pane_ParamLimits

0x9b1f,	// (0x00018c47) main_viewer_pane

0x9e78,	// (0x00018fa0) main_vorec_pane

0x3462,	// (0x0001258a) popup_blid_sat_info_window_ParamLimits

0x3462,	// (0x0001258a) popup_blid_sat_info_window

0x34ba,	// (0x000125e2) popup_dyc_status_message_window_ParamLimits

0x34ba,	// (0x000125e2) popup_dyc_status_message_window

0x34d2,	// (0x000125fa) popup_grid_large_graphic_window_ParamLimits

0x34d2,	// (0x000125fa) popup_grid_large_graphic_window

0x3582,	// (0x000126aa) popup_loc_request_window_ParamLimits

0x3582,	// (0x000126aa) popup_loc_request_window

0x367e,	// (0x000127a6) popup_wml_address_window_ParamLimits

0x367e,	// (0x000127a6) popup_wml_address_window

0x3248,	// (0x00012370) call_muted_g1

0x2efc,	// (0x00012024) popup_call_audio_conf_window_ParamLimits

0x2efc,	// (0x00012024) popup_call_audio_conf_window

0x325c,	// (0x00012384) popup_call_audio_first_window_ParamLimits

0x325c,	// (0x00012384) popup_call_audio_first_window

0x32d2,	// (0x000123fa) popup_call_audio_in_window_ParamLimits

0x32d2,	// (0x000123fa) popup_call_audio_in_window

0x330e,	// (0x00012436) popup_call_audio_out_window_ParamLimits

0x330e,	// (0x00012436) popup_call_audio_out_window

0x3348,	// (0x00012470) popup_call_audio_second_window_ParamLimits

0x3348,	// (0x00012470) popup_call_audio_second_window

0x339e,	// (0x000124c6) popup_call_audio_wait_window_ParamLimits

0x339e,	// (0x000124c6) popup_call_audio_wait_window

0x33d3,	// (0x000124fb) popup_number_entry_window_ParamLimits

0x33d3,	// (0x000124fb) popup_number_entry_window

0x94b1,	// (0x000185d9) bg_popup_call_pane_cp05_ParamLimits

0x94b1,	// (0x000185d9) bg_popup_call_pane_cp05

0x94d1,	// (0x000185f9) popup_number_entry_window_t1

0x94e4,	// (0x0001860c) popup_number_entry_window_t2

0x94f6,	// (0x0001861e) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0001e1d7) popup_number_entry_window_t

0x9508,	// (0x00018630) text_title_cp2

0x951b,	// (0x00018643) bg_popup_call_pane_cp_ParamLimits

0x951b,	// (0x00018643) bg_popup_call_pane_cp

0x9529,	// (0x00018651) call_thumbnail_pane

0x9531,	// (0x00018659) popup_call_audio_in_window_g1_ParamLimits

0x9531,	// (0x00018659) popup_call_audio_in_window_g1

0x953d,	// (0x00018665) popup_call_audio_in_window_g2_ParamLimits

0x953d,	// (0x00018665) popup_call_audio_in_window_g2

0x9549,	// (0x00018671) popup_call_audio_in_window_g3_ParamLimits

0x9549,	// (0x00018671) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0001e1e0) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0001e1e0) popup_call_audio_in_window_g

0x9555,	// (0x0001867d) popup_call_audio_in_window_t1_ParamLimits

0x9555,	// (0x0001867d) popup_call_audio_in_window_t1

0x9571,	// (0x00018699) popup_call_audio_in_window_t2_ParamLimits

0x9571,	// (0x00018699) popup_call_audio_in_window_t2

0x958d,	// (0x000186b5) popup_call_audio_in_window_t3_ParamLimits

0x958d,	// (0x000186b5) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0001e1e7) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0001e1e7) popup_call_audio_in_window_t

0x951b,	// (0x00018643) bg_popup_call_pane_cp01_ParamLimits

0x951b,	// (0x00018643) bg_popup_call_pane_cp01

0x9529,	// (0x00018651) call_thumbnail_pane_cp02

0x95a0,	// (0x000186c8) call_type_pane_cp022

0x95a8,	// (0x000186d0) popup_call_audio_out_window_g1_ParamLimits

0x95a8,	// (0x000186d0) popup_call_audio_out_window_g1

0x95ba,	// (0x000186e2) popup_call_audio_out_window_g2_ParamLimits

0x95ba,	// (0x000186e2) popup_call_audio_out_window_g2

0x95c6,	// (0x000186ee) popup_call_audio_out_window_g3_ParamLimits

0x95c6,	// (0x000186ee) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0001e1ee) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0001e1ee) popup_call_audio_out_window_g

0x95d8,	// (0x00018700) popup_call_audio_out_window_t1_ParamLimits

0x95d8,	// (0x00018700) popup_call_audio_out_window_t1

0x95f0,	// (0x00018718) popup_call_audio_out_window_t2_ParamLimits

0x95f0,	// (0x00018718) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0001e1f5) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0001e1f5) popup_call_audio_out_window_t

0x9605,	// (0x0001872d) bg_popup_call_pane_ParamLimits

0x9605,	// (0x0001872d) bg_popup_call_pane

0x04fd,	// (0x0000f625) call_thumbnail_pane_cp_ParamLimits

0x04fd,	// (0x0000f625) call_thumbnail_pane_cp

0x9689,	// (0x000187b1) call_type_pane_cp01_ParamLimits

0x9689,	// (0x000187b1) call_type_pane_cp01

0x96cd,	// (0x000187f5) popup_call_audio_first_window_g1_ParamLimits

0x96cd,	// (0x000187f5) popup_call_audio_first_window_g1

0x9719,	// (0x00018841) popup_call_audio_first_window_g2_ParamLimits

0x9719,	// (0x00018841) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0001e1fa) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0001e1fa) popup_call_audio_first_window_g

0x975d,	// (0x00018885) popup_call_audio_first_window_t1_ParamLimits

0x975d,	// (0x00018885) popup_call_audio_first_window_t1

0x9809,	// (0x00018931) popup_call_audio_first_window_t4_ParamLimits

0x9809,	// (0x00018931) popup_call_audio_first_window_t4

0x9895,	// (0x000189bd) popup_call_audio_first_window_t5_ParamLimits

0x9895,	// (0x000189bd) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0001e1ff) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0001e1ff) popup_call_audio_first_window_t

0x98c4,	// (0x000189ec) bg_popup_call_pane_cp02

0x98ce,	// (0x000189f6) call_type_pane_cp023

0x98d6,	// (0x000189fe) popup_call_audio_wait_window_g1

0x98de,	// (0x00018a06) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0001e206) popup_call_audio_wait_window_g

0x98e6,	// (0x00018a0e) popup_call_audio_wait_window_t3

0x98f4,	// (0x00018a1c) bg_popup_call_pane_cp03_ParamLimits

0x98f4,	// (0x00018a1c) bg_popup_call_pane_cp03

0x9954,	// (0x00018a7c) call_thumbnail_pane_cp011_ParamLimits

0x9954,	// (0x00018a7c) call_thumbnail_pane_cp011

0x9960,	// (0x00018a88) call_type_pane_cp034_ParamLimits

0x9960,	// (0x00018a88) call_type_pane_cp034

0x999c,	// (0x00018ac4) popup_call_audio_second_window_g1_ParamLimits

0x999c,	// (0x00018ac4) popup_call_audio_second_window_g1

0x99d8,	// (0x00018b00) popup_call_audio_second_window_g2_ParamLimits

0x99d8,	// (0x00018b00) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0001e20b) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0001e20b) popup_call_audio_second_window_g

0x9a14,	// (0x00018b3c) popup_call_audio_second_window_t1_ParamLimits

0x9a14,	// (0x00018b3c) popup_call_audio_second_window_t1

0x9a95,	// (0x00018bbd) popup_call_audio_second_window_t2_ParamLimits

0x9a95,	// (0x00018bbd) popup_call_audio_second_window_t2

0x9acb,	// (0x00018bf3) popup_call_audio_second_window_t3_ParamLimits

0x9acb,	// (0x00018bf3) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0001e210) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0001e210) popup_call_audio_second_window_t

0x98c4,	// (0x000189ec) bg_popup_call_pane_cp04

0x9b01,	// (0x00018c29) list_conf_pane

0x9b09,	// (0x00018c31) popup_call_audio_conf_window_t1

0x9b17,	// (0x00018c3f) call_thumbnail_pane_g1

0x9b1f,	// (0x00018c47) bg_pinb_pane_ParamLimits

0x9b1f,	// (0x00018c47) bg_pinb_pane

0x9b2d,	// (0x00018c55) find_pinb_pane

0x9b36,	// (0x00018c5e) listscroll_pinb_pane_ParamLimits

0x9b36,	// (0x00018c5e) listscroll_pinb_pane

0x9b45,	// (0x00018c6d) pinb_bg_pane_g1

0x0521,	// (0x0000f649) pinb_bg_pane_g2

0x052d,	// (0x0000f655) pinb_bg_pane_g3

0x0539,	// (0x0000f661) pinb_bg_pane_g4

0x0545,	// (0x0000f66d) pinb_bg_pane_g5

0x0551,	// (0x0000f679) pinb_bg_pane_g6

0x055c,	// (0x0000f684) pinb_bg_pane_g7

0x0567,	// (0x0000f68f) pinb_bg_pane_g8

0x0572,	// (0x0000f69a) pinb_bg_pane_g9

0x057c,	// (0x0000f6a4) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0001e217) pinb_bg_pane_g

0x0599,	// (0x0000f6c1) grid_pinb_pane

0x05a2,	// (0x0000f6ca) list_pinb_pane

0x05ab,	// (0x0000f6d3) scroll_pane_cp01_ParamLimits

0x05ab,	// (0x0000f6d3) scroll_pane_cp01

0x9b4f,	// (0x00018c77) find_pinb_pane_g1_ParamLimits

0x9b4f,	// (0x00018c77) find_pinb_pane_g1

0x9b67,	// (0x00018c8f) find_pinb_pane_t1

0x9b79,	// (0x00018ca1) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0001e231) find_pinb_pane_t

0x9b8e,	// (0x00018cb6) input_focus_pane_cp01_ParamLimits

0x9b8e,	// (0x00018cb6) input_focus_pane_cp01

0x05bd,	// (0x0000f6e5) cell_pinb_pane_ParamLimits

0x05bd,	// (0x0000f6e5) cell_pinb_pane

0x05e8,	// (0x0000f710) cell_pinb_pane_g1_ParamLimits

0x05e8,	// (0x0000f710) cell_pinb_pane_g1

0x9b9a,	// (0x00018cc2) cell_pinb_pane_g2_ParamLimits

0x9b9a,	// (0x00018cc2) cell_pinb_pane_g2

0x9ba6,	// (0x00018cce) cell_pinb_pane_g3_ParamLimits

0x9ba6,	// (0x00018cce) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0001e236) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0001e236) cell_pinb_pane_g

0x98c4,	// (0x000189ec) grid_highlight_pane_cp01

0x05fb,	// (0x0000f723) list_pinb_item_pane_ParamLimits

0x05fb,	// (0x0000f723) list_pinb_item_pane

0x98c4,	// (0x000189ec) list_highlight_pane_cp02

0x060e,	// (0x0000f736) list_pinb_item_pane_g1_ParamLimits

0x060e,	// (0x0000f736) list_pinb_item_pane_g1

0x061b,	// (0x0000f743) list_pinb_item_pane_g2_ParamLimits

0x061b,	// (0x0000f743) list_pinb_item_pane_g2

0x0627,	// (0x0000f74f) list_pinb_item_pane_g3_ParamLimits

0x0627,	// (0x0000f74f) list_pinb_item_pane_g3

0x0638,	// (0x0000f760) list_pinb_item_pane_g4_ParamLimits

0x0638,	// (0x0000f760) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0001e23d) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0001e23d) list_pinb_item_pane_g

0x0644,	// (0x0000f76c) list_pinb_item_pane_t1_ParamLimits

0x0644,	// (0x0000f76c) list_pinb_item_pane_t1

0x0679,	// (0x0000f7a1) calc_display_pane

0x069e,	// (0x0000f7c6) calc_paper_pane

0x06c1,	// (0x0000f7e9) grid_calc_pane

0x98c4,	// (0x000189ec) bg_list_pane_cp01

0x06ef,	// (0x0000f817) clock_g1

0x06f7,	// (0x0000f81f) clock_g2

0x0001,

0xf11e,	// (0x0001e246) clock_g

0x06ff,	// (0x0000f827) clock_t1_ParamLimits

0x06ff,	// (0x0000f827) clock_t1

0x0714,	// (0x0000f83c) clock_t2_ParamLimits

0x0714,	// (0x0000f83c) clock_t2

0x0726,	// (0x0000f84e) clock_t3_ParamLimits

0x0726,	// (0x0000f84e) clock_t3

0x0738,	// (0x0000f860) clock_t4_ParamLimits

0x0738,	// (0x0000f860) clock_t4

0x074a,	// (0x0000f872) clock_t5_ParamLimits

0x074a,	// (0x0000f872) clock_t5

0x075f,	// (0x0000f887) clock_t6_ParamLimits

0x075f,	// (0x0000f887) clock_t6

0x0771,	// (0x0000f899) clock_t7_ParamLimits

0x0771,	// (0x0000f899) clock_t7

0x0783,	// (0x0000f8ab) clock_t8_ParamLimits

0x0783,	// (0x0000f8ab) clock_t8

0x0797,	// (0x0000f8bf) clock_t9_ParamLimits

0x0797,	// (0x0000f8bf) clock_t9

0x0008,

0xf123,	// (0x0001e24b) clock_t_ParamLimits

0xf123,	// (0x0001e24b) clock_t

0x9bba,	// (0x00018ce2) popup_clock_analogue_window_cp02

0x9bba,	// (0x00018ce2) popup_clock_digital_window_cp01

0x9bc2,	// (0x00018cea) listscroll_help_pane

0x98c4,	// (0x000189ec) phob_pre_status_pane

0x9bcc,	// (0x00018cf4) grid_qdial_pane

0x9b1f,	// (0x00018c47) listscroll_mce_pane

0x9b1f,	// (0x00018c47) bg_notes_pane

0x9bd6,	// (0x00018cfe) list_notes_pane

0x07ab,	// (0x0000f8d3) scroll_pane_cp06

0x9be4,	// (0x00018d0c) bg_calc_paper_pane

0x9bf8,	// (0x00018d20) list_calc_pane

0x9c12,	// (0x00018d3a) bg_calc_display_pane

0x07bf,	// (0x0000f8e7) calc_display_pane_t1

0x07d1,	// (0x0000f8f9) calc_display_pane_t2

0x9c1e,	// (0x00018d46) calc_display_pane_t3

0x0002,

0xf136,	// (0x0001e25e) calc_display_pane_t

0x07e3,	// (0x0000f90b) cell_calc_pane_ParamLimits

0x07e3,	// (0x0000f90b) cell_calc_pane

0x9c30,	// (0x00018d58) bg_calc_paper_pane_g1

0x9c3c,	// (0x00018d64) bg_calc_paper_pane_g2

0x9c48,	// (0x00018d70) bg_calc_paper_pane_g3

0x9c54,	// (0x00018d7c) bg_calc_paper_pane_g4

0x9c60,	// (0x00018d88) bg_calc_paper_pane_g5

0x0818,	// (0x0000f940) bg_calc_paper_pane_g6

0x0827,	// (0x0000f94f) bg_calc_paper_pane_g7

0x0836,	// (0x0000f95e) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0001e265) bg_calc_paper_pane_g

0x0849,	// (0x0000f971) calc_bg_paper_pane_g9

0x085c,	// (0x0000f984) list_calc_item_pane_ParamLimits

0x085c,	// (0x0000f984) list_calc_item_pane

0x9c6c,	// (0x00018d94) list_calc_item_pane_g1

0x9c79,	// (0x00018da1) list_calc_item_pane_t1_ParamLimits

0x9c79,	// (0x00018da1) list_calc_item_pane_t1

0x0871,	// (0x0000f999) list_calc_item_pane_t2_ParamLimits

0x0871,	// (0x0000f999) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0001e276) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0001e276) list_calc_item_pane_t

0x9c8b,	// (0x00018db3) cell_calc_pane_g1

0x9c95,	// (0x00018dbd) grid_highlight_pane_cp02

0x9cb7,	// (0x00018ddf) bg_calc_display_pane_g1

0x08a3,	// (0x0000f9cb) bg_calc_display_pane_g2

0xd251,	// (0x0001c379) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0001e280) bg_calc_display_pane_g

0x08ad,	// (0x0000f9d5) cell_qdial_pane_ParamLimits

0x08ad,	// (0x0000f9d5) cell_qdial_pane

0x08c1,	// (0x0000f9e9) cell_qdial_pane_g1_ParamLimits

0x08c1,	// (0x0000f9e9) cell_qdial_pane_g1

0x08d7,	// (0x0000f9ff) cell_qdial_pane_g2_ParamLimits

0x08d7,	// (0x0000f9ff) cell_qdial_pane_g2

0x9cc0,	// (0x00018de8) cell_qdial_pane_g3_ParamLimits

0x9cc0,	// (0x00018de8) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0001e287) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0001e287) cell_qdial_pane_g

0x08fd,	// (0x0000fa25) cell_qdial_pane_t1_ParamLimits

0x08fd,	// (0x0000fa25) cell_qdial_pane_t1

0x0915,	// (0x0000fa3d) cell_qdial_pane_t2_ParamLimits

0x0915,	// (0x0000fa3d) cell_qdial_pane_t2

0x0928,	// (0x0000fa50) cell_qdial_pane_t3_ParamLimits

0x0928,	// (0x0000fa50) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0001e290) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0001e290) cell_qdial_pane_t

0x98c4,	// (0x000189ec) grid_highlight_pane_cp04

0x9ccc,	// (0x00018df4) thumbnail_qdial_pane_ParamLimits

0x9ccc,	// (0x00018df4) thumbnail_qdial_pane

0x9d28,	// (0x00018e50) list_help_pane

0x9d31,	// (0x00018e59) scroll_pane_cp02

0x9d3a,	// (0x00018e62) help_list_pane_t1_ParamLimits

0x9d3a,	// (0x00018e62) help_list_pane_t1

0x9d58,	// (0x00018e80) bg_notes_pane_g2

0x9d60,	// (0x00018e88) bg_notes_pane_g3

0x9d68,	// (0x00018e90) notes_bg_pane_g1

0x9d70,	// (0x00018e98) notes_bg_pane_g4

0x9d78,	// (0x00018ea0) notes_bg_pane_g5

0x9d80,	// (0x00018ea8) notes_bg_pane_g6

0x9d88,	// (0x00018eb0) notes_bg_pane_g7

0x9d90,	// (0x00018eb8) notes_bg_pane_g8

0x9d98,	// (0x00018ec0) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0001e2ae) notes_bg_pane_g

0x093b,	// (0x0000fa63) list_notes_text_pane_ParamLimits

0x093b,	// (0x0000fa63) list_notes_text_pane

0x9da0,	// (0x00018ec8) list_notes_text_pane_g1

0x9da9,	// (0x00018ed1) list_notes_text_pane_t1

0x0951,	// (0x0000fa79) listscroll_cale_week_pane

0x097d,	// (0x0000faa5) bg_cale_heading_pane

0x9dd1,	// (0x00018ef9) bg_cale_pane_cp01

0x0995,	// (0x0000fabd) cale_week_corner_pane

0x09b4,	// (0x0000fadc) cale_week_day_heading_pane

0x09d1,	// (0x0000faf9) cale_week_scroll_pane_g1

0x09e4,	// (0x0000fb0c) cale_week_scroll_pane_g2

0x09fc,	// (0x0000fb24) cale_week_scroll_pane_g3

0x0a14,	// (0x0000fb3c) cale_week_scroll_pane_g4

0x0a2c,	// (0x0000fb54) cale_week_scroll_pane_g5

0x0a4c,	// (0x0000fb74) cale_week_scroll_pane_g6

0x0a6c,	// (0x0000fb94) cale_week_scroll_pane_g7

0x0a8c,	// (0x0000fbb4) cale_week_scroll_pane_g8

0x0ab0,	// (0x0000fbd8) cale_week_scroll_pane_g9

0x0ac8,	// (0x0000fbf0) cale_week_scroll_pane_g10

0x0ae0,	// (0x0000fc08) cale_week_scroll_pane_g11

0x0af8,	// (0x0000fc20) cale_week_scroll_pane_g12

0x0b10,	// (0x0000fc38) cale_week_scroll_pane_g13

0x0b10,	// (0x0000fc38) cale_week_scroll_pane_g14

0x0b10,	// (0x0000fc38) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0001e2bd) cale_week_scroll_pane_g

0x0b4c,	// (0x0000fc74) cale_week_time_pane

0x0b70,	// (0x0000fc98) grid_cale_week_pane

0x9e00,	// (0x00018f28) scroll_pane_cp08

0x0b96,	// (0x0000fcbe) cell_cale_week_pane_ParamLimits

0x0b96,	// (0x0000fcbe) cell_cale_week_pane

0x0c24,	// (0x0000fd4c) cale_week_day_heading_pane_t1

0x0c4e,	// (0x0000fd76) cale_week_day_heading_pane_t2

0x0c7d,	// (0x0000fda5) cale_week_day_heading_pane_t3

0x0cac,	// (0x0000fdd4) cale_week_day_heading_pane_t4

0x0cdb,	// (0x0000fe03) cale_week_day_heading_pane_t5

0x0d12,	// (0x0000fe3a) cale_week_day_heading_pane_t6

0x0d49,	// (0x0000fe71) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0001e2de) cale_week_day_heading_pane_t

0x9e1d,	// (0x00018f45) bg_cale_side_pane

0x0d73,	// (0x0000fe9b) cale_week_time_pane_t1

0x0d8d,	// (0x0000feb5) cale_week_time_pane_t2

0x0da7,	// (0x0000fecf) cale_week_time_pane_t3

0x0dc1,	// (0x0000fee9) cale_week_time_pane_t4

0x0ddb,	// (0x0000ff03) cale_week_time_pane_t5

0x0df5,	// (0x0000ff1d) cale_week_time_pane_t6

0x0e0f,	// (0x0000ff37) cale_week_time_pane_t7

0x0e29,	// (0x0000ff51) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0001e2ed) cale_week_time_pane_t

0x0e49,	// (0x0000ff71) cell_cale_week_pane_g2

0x0e6d,	// (0x0000ff95) cell_cale_week_pane_g3_ParamLimits

0x0e6d,	// (0x0000ff95) cell_cale_week_pane_g3

0x9e2b,	// (0x00018f53) grid_highlight_pane_cp07

0x9e33,	// (0x00018f5b) listscroll_gms_pane

0x9e3d,	// (0x00018f65) grid_gms_pane

0x9e46,	// (0x00018f6e) listscroll_gms_pane_g1

0x9e4e,	// (0x00018f76) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0001e2fe) listscroll_gms_pane_g

0x0e85,	// (0x0000ffad) scroll_pane_cp010

0x0e90,	// (0x0000ffb8) cell_gms_pane_ParamLimits

0x0e90,	// (0x0000ffb8) cell_gms_pane

0x0ea2,	// (0x0000ffca) cell_gms_pane_g1

0x9e56,	// (0x00018f7e) cell_gms_pane_g2

0x9e5e,	// (0x00018f86) cell_gms_pane_g3

0x9e67,	// (0x00018f8f) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0001e303) cell_gms_pane_g

0x9e70,	// (0x00018f98) grid_highlight_pane_cp09

0x31f2,	// (0x0001231a) phob_pre_status_pane_g1

0x31fa,	// (0x00012322) phob_pre_status_pane_g2

0x3202,	// (0x0001232a) phob_pre_status_pane_g3

0x320a,	// (0x00012332) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0001e701) phob_pre_status_pane_g

0x321a,	// (0x00012342) phob_pre_status_pane_t1

0x3228,	// (0x00012350) phob_pre_status_pane_t2

0x3238,	// (0x00012360) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0001e70c) phob_pre_status_pane_t

0x9e78,	// (0x00018fa0) bg_list_pane_cp05

0x0eb2,	// (0x0000ffda) grid_vorec_pane

0x0eba,	// (0x0000ffe2) vorec_t1

0x0ec8,	// (0x0000fff0) vorec_t2

0x0ed6,	// (0x0000fffe) vorec_t3

0x0ee4,	// (0x0001000c) vorec_t4

0x93f1,	// (0x00018519) vorec_t5

0x93ff,	// (0x00018527) vorec_t6

0x0004,

0xf1e4,	// (0x0001e30c) vorec_t

0x940d,	// (0x00018535) wait_bar_pane_cp01

0x0f00,	// (0x00010028) cell_vorec_pane_ParamLimits

0x0f00,	// (0x00010028) cell_vorec_pane

0x9e80,	// (0x00018fa8) cell_vorec_pane_g1

0x98c4,	// (0x000189ec) grid_highlight_pane_cp05

0x0f2b,	// (0x00010053) cams_zoom_pane

0x0f3a,	// (0x00010062) image_vga_pane

0x0f54,	// (0x0001007c) main_camera_pane_g1

0x0f66,	// (0x0001008e) main_camera_pane_g2

0x0f76,	// (0x0001009e) main_camera_pane_g3

0x0f86,	// (0x000100ae) main_camera_pane_g4

0x0f96,	// (0x000100be) main_camera_pane_g5

0x0fa6,	// (0x000100ce) main_camera_pane_g6

0x0fb6,	// (0x000100de) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0001e317) main_camera_pane_g

0x0fc6,	// (0x000100ee) main_camera_pane_t1

0x0fdc,	// (0x00010104) main_camera_pane_t2

0x0001,

0xf200,	// (0x0001e328) main_camera_pane_t

0x1016,	// (0x0001013e) cams_zoom_pane_cp_ParamLimits

0x1016,	// (0x0001013e) cams_zoom_pane_cp

0x103e,	// (0x00010166) image_cif_pane_ParamLimits

0x103e,	// (0x00010166) image_cif_pane

0x1079,	// (0x000101a1) image_subqcif_pane

0x1081,	// (0x000101a9) main_video_pane_g1_ParamLimits

0x1081,	// (0x000101a9) main_video_pane_g1

0x10a5,	// (0x000101cd) main_video_pane_g2_ParamLimits

0x10a5,	// (0x000101cd) main_video_pane_g2

0x10d9,	// (0x00010201) main_video_pane_g3_ParamLimits

0x10d9,	// (0x00010201) main_video_pane_g3

0x1107,	// (0x0001022f) main_video_pane_g4_ParamLimits

0x1107,	// (0x0001022f) main_video_pane_g4

0x1135,	// (0x0001025d) main_video_pane_g5_ParamLimits

0x1135,	// (0x0001025d) main_video_pane_g5

0x9e96,	// (0x00018fbe) main_video_pane_g6_ParamLimits

0x9e96,	// (0x00018fbe) main_video_pane_g6

0x0006,

0xf205,	// (0x0001e32d) main_video_pane_g_ParamLimits

0xf205,	// (0x0001e32d) main_video_pane_g

0x115e,	// (0x00010286) main_video_pane_t1_ParamLimits

0x115e,	// (0x00010286) main_video_pane_t1

0x9eb0,	// (0x00018fd8) cams_zoom_pane_g1

0x9eb9,	// (0x00018fe1) cams_zoom_pane_g2

0x9ec2,	// (0x00018fea) cams_zoom_pane_g3

0x9ecb,	// (0x00018ff3) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0001e33c) cams_zoom_pane_g

0x11bb,	// (0x000102e3) grid_cams_pane

0x11d5,	// (0x000102fd) linegrid_cams_pane

0x11e8,	// (0x00010310) cell_cams_pane_ParamLimits

0x11e8,	// (0x00010310) cell_cams_pane

0x9ed4,	// (0x00018ffc) cams_burst_image_pane

0x9edc,	// (0x00019004) cell_cams_pane_g1

0x98c4,	// (0x000189ec) grid_highlight_pane_cp03

0x9c8b,	// (0x00018db3) mp_bg_pane_g1

0x98c4,	// (0x000189ec) bg_list_pane_cp03

0xbd12,	// (0x0001ae3a) bg_mp_pane

0xbd1a,	// (0x0001ae42) grid_mp_pane

0xbd22,	// (0x0001ae4a) media_player_g1

0xbd2a,	// (0x0001ae52) media_player_t1

0xbd38,	// (0x0001ae60) media_player_t2

0xbd46,	// (0x0001ae6e) media_player_t3

0xbd54,	// (0x0001ae7c) media_player_t4

0xbd62,	// (0x0001ae8a) media_player_t5

0xbd70,	// (0x0001ae98) media_player_t6

0xbd7e,	// (0x0001aea6) media_player_t7

0x0006,

0xf5c3,	// (0x0001e6eb) media_player_t

0xbd8c,	// (0x0001aeb4) wait_bar_pane_cp02

0xf5a8,	// (0x0001e6d0) main_usb_pane_t

0x31e9,	// (0x00012311) cell_mp_pane

0x9c8b,	// (0x00018db3) cell_mp_pane_g1

0x98c4,	// (0x000189ec) grid_highlight_pane_cp06

0x9ee4,	// (0x0001900c) grid_skin_colour_pane

0x9eec,	// (0x00019014) list_highlight_pane_cp03

0x131f,	// (0x00010447) skin_g1

0x9ef4,	// (0x0001901c) skin_t1

0x9f03,	// (0x0001902b) skin_t2

0x0001,

0xf249,	// (0x0001e371) skin_t

0x1327,	// (0x0001044f) cell_skin_colour_pane_ParamLimits

0x1327,	// (0x0001044f) cell_skin_colour_pane

0x9f11,	// (0x00019039) cell_skin_colour_pane_g1

0x13a0,	// (0x000104c8) call_video_g1_ParamLimits

0x13a0,	// (0x000104c8) call_video_g1

0x13bc,	// (0x000104e4) call_video_g2_ParamLimits

0x13bc,	// (0x000104e4) call_video_g2

0x0001,

0xf24e,	// (0x0001e376) call_video_g_ParamLimits

0xf24e,	// (0x0001e376) call_video_g

0x140e,	// (0x00010536) call_video_uplink_pane_cp1_ParamLimits

0x140e,	// (0x00010536) call_video_uplink_pane_cp1

0x9f23,	// (0x0001904b) call_video_uplink_pane_cp2

0x14ad,	// (0x000105d5) video_down_crop_pane_ParamLimits

0x14ad,	// (0x000105d5) video_down_crop_pane

0x1596,	// (0x000106be) video_down_pane_ParamLimits

0x1596,	// (0x000106be) video_down_pane

0x9f2b,	// (0x00019053) video_down_subqcif_pane_ParamLimits

0x9f2b,	// (0x00019053) video_down_subqcif_pane

0x9f43,	// (0x0001906b) video_down_subqcif_pane_cp_ParamLimits

0x9f43,	// (0x0001906b) video_down_subqcif_pane_cp

0x9f69,	// (0x00019091) im_reading_pane_ParamLimits

0x9f69,	// (0x00019091) im_reading_pane

0x16a6,	// (0x000107ce) im_writing_pane_ParamLimits

0x16a6,	// (0x000107ce) im_writing_pane

0x16bc,	// (0x000107e4) im_reading_pane_t1

0x9f83,	// (0x000190ab) list_im_pane

0x9f94,	// (0x000190bc) scroll_pane_cp07

0x16f6,	// (0x0001081e) im_writing_pane_t1_ParamLimits

0x16f6,	// (0x0001081e) im_writing_pane_t1

0x9fad,	// (0x000190d5) im_writing_pane_t2_ParamLimits

0x9fad,	// (0x000190d5) im_writing_pane_t2

0x0001,

0xf258,	// (0x0001e380) im_writing_pane_t_ParamLimits

0xf258,	// (0x0001e380) im_writing_pane_t

0x98c4,	// (0x000189ec) input_focus_pane_cp04

0x98c4,	// (0x000189ec) input_focus_pane_cp05

0x170b,	// (0x00010833) list_im_single_pane_ParamLimits

0x170b,	// (0x00010833) list_im_single_pane

0x1720,	// (0x00010848) list_single_im_pane_t1

0x31a9,	// (0x000122d1) blid_accuracy_pane

0x31b1,	// (0x000122d9) blid_compass_pane

0x31bb,	// (0x000122e3) main_location_t1

0x31cb,	// (0x000122f3) main_location_t2

0x31db,	// (0x00012303) main_location_t3

0x0002,

0xf5d2,	// (0x0001e6fa) main_location_t

0x98c4,	// (0x000189ec) aid_levels_location

0x9c8b,	// (0x00018db3) blid_accuracy_pane_g1

0x9c8b,	// (0x00018db3) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0001e3e2) blid_accuracy_pane_g

0x9ff5,	// (0x0001911d) wml_content_pane

0xa033,	// (0x0001915b) wml_button_pane_ParamLimits

0xa033,	// (0x0001915b) wml_button_pane

0x172f,	// (0x00010857) wml_list_single_large_pane_ParamLimits

0x172f,	// (0x00010857) wml_list_single_large_pane

0x1744,	// (0x0001086c) wml_list_single_medium_pane_ParamLimits

0x1744,	// (0x0001086c) wml_list_single_medium_pane

0x175b,	// (0x00010883) wml_list_single_small_pane_ParamLimits

0x175b,	// (0x00010883) wml_list_single_small_pane

0xa047,	// (0x0001916f) wml_selection_box_pane_ParamLimits

0xa047,	// (0x0001916f) wml_selection_box_pane

0xa05a,	// (0x00019182) wml_list_single_pane_t1

0xa069,	// (0x00019191) wml_list_single_medium_pane_t1

0xa078,	// (0x000191a0) wml_list_single_large_pane_t1

0xa087,	// (0x000191af) input_focus_pane_cp02_ParamLimits

0xa087,	// (0x000191af) input_focus_pane_cp02

0xa09a,	// (0x000191c2) wml_selection_box_pane_g1

0xa0a3,	// (0x000191cb) wml_selection_box_pane_t1_ParamLimits

0xa0a3,	// (0x000191cb) wml_selection_box_pane_t1

0x9b1f,	// (0x00018c47) bg_wml_button_pane_ParamLimits

0x9b1f,	// (0x00018c47) bg_wml_button_pane

0xa0bb,	// (0x000191e3) wml_button_pane_g1

0xa0c3,	// (0x000191eb) wml_button_pane_t1

0xa0bb,	// (0x000191e3) wml_button_bg_pane_g1

0xa0d3,	// (0x000191fb) wml_button_bg_pane_g2

0xa0db,	// (0x00019203) wml_button_bg_pane_g3

0xa0e3,	// (0x0001920b) wml_button_bg_pane_g4

0xa0eb,	// (0x00019213) wml_button_bg_pane_g5

0xa0f3,	// (0x0001921b) wml_button_bg_pane_g6

0xa0fb,	// (0x00019223) wml_button_bg_pane_g7

0xa103,	// (0x0001922b) wml_button_bg_pane_g8

0xa10b,	// (0x00019233) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0001e385) wml_button_bg_pane_g

0x1774,	// (0x0001089c) bg_list_pane_cp02

0xa113,	// (0x0001923b) mce_header_pane_ParamLimits

0xa113,	// (0x0001923b) mce_header_pane

0xa129,	// (0x00019251) mce_icon_pane

0xa129,	// (0x00019251) mce_image_pane

0xa132,	// (0x0001925a) mce_text_pane_ParamLimits

0xa132,	// (0x0001925a) mce_text_pane

0x177c,	// (0x000108a4) scroll_pane_cp03

0xa02b,	// (0x00019153) scroll_pane_cp04

0xa145,	// (0x0001926d) scroll_pane_cp05_ParamLimits

0xa145,	// (0x0001926d) scroll_pane_cp05

0x1786,	// (0x000108ae) mce_header_field_pane_ParamLimits

0x1786,	// (0x000108ae) mce_header_field_pane

0x179d,	// (0x000108c5) mce_header_field_pane_2_ParamLimits

0x179d,	// (0x000108c5) mce_header_field_pane_2

0x17b3,	// (0x000108db) mce_header_field_pane_3

0x17bb,	// (0x000108e3) list_single_mce_message_pane_ParamLimits

0x17bb,	// (0x000108e3) list_single_mce_message_pane

0x17d1,	// (0x000108f9) list_single_mce_smart_pane_ParamLimits

0x17d1,	// (0x000108f9) list_single_mce_smart_pane

0xa151,	// (0x00019279) input_focus_pane_cp03

0xa15a,	// (0x00019282) list_header_data_pane

0x17f2,	// (0x0001091a) mce_header_field_pane_t1

0x1802,	// (0x0001092a) list_single_mce_header_pane_ParamLimits

0x1802,	// (0x0001092a) list_single_mce_header_pane

0xa162,	// (0x0001928a) list_single_mce_header_pane_t1

0xa171,	// (0x00019299) list_single_mce_message_pane_g1

0xa179,	// (0x000192a1) list_single_mce_message_pane_t1

0x183c,	// (0x00010964) bg_cale_heading_pane_cp01_ParamLimits

0x183c,	// (0x00010964) bg_cale_heading_pane_cp01

0xa187,	// (0x000192af) bg_cale_pane_cp02_ParamLimits

0xa187,	// (0x000192af) bg_cale_pane_cp02

0x1876,	// (0x0001099e) cale_month_corner_pane

0x1895,	// (0x000109bd) cale_month_day_heading_pane_ParamLimits

0x1895,	// (0x000109bd) cale_month_day_heading_pane

0x18e7,	// (0x00010a0f) cale_month_pane_g1_ParamLimits

0x18e7,	// (0x00010a0f) cale_month_pane_g1

0x1916,	// (0x00010a3e) cale_month_pane_g2_ParamLimits

0x1916,	// (0x00010a3e) cale_month_pane_g2

0x1946,	// (0x00010a6e) cale_month_pane_g3_ParamLimits

0x1946,	// (0x00010a6e) cale_month_pane_g3

0x1982,	// (0x00010aaa) cale_month_pane_g4_ParamLimits

0x1982,	// (0x00010aaa) cale_month_pane_g4

0x19be,	// (0x00010ae6) cale_month_pane_g5_ParamLimits

0x19be,	// (0x00010ae6) cale_month_pane_g5

0x1a06,	// (0x00010b2e) cale_month_pane_g6_ParamLimits

0x1a06,	// (0x00010b2e) cale_month_pane_g6

0x1a52,	// (0x00010b7a) cale_month_pane_g7_ParamLimits

0x1a52,	// (0x00010b7a) cale_month_pane_g7

0x1aa2,	// (0x00010bca) cale_month_pane_g8_ParamLimits

0x1aa2,	// (0x00010bca) cale_month_pane_g8

0x1af6,	// (0x00010c1e) cale_month_pane_g9_ParamLimits

0x1af6,	// (0x00010c1e) cale_month_pane_g9

0x1b48,	// (0x00010c70) cale_month_pane_g10_ParamLimits

0x1b48,	// (0x00010c70) cale_month_pane_g10

0x1b9a,	// (0x00010cc2) cale_month_pane_g11_ParamLimits

0x1b9a,	// (0x00010cc2) cale_month_pane_g11

0x1bec,	// (0x00010d14) cale_month_pane_g12_ParamLimits

0x1bec,	// (0x00010d14) cale_month_pane_g12

0x1c3e,	// (0x00010d66) cale_month_pane_g13_ParamLimits

0x1c3e,	// (0x00010d66) cale_month_pane_g13

0x000c,

0xf270,	// (0x0001e398) cale_month_pane_g_ParamLimits

0xf270,	// (0x0001e398) cale_month_pane_g

0x1c90,	// (0x00010db8) cale_month_week_pane

0x1cb4,	// (0x00010ddc) grid_cale_month_pane_ParamLimits

0x1cb4,	// (0x00010ddc) grid_cale_month_pane

0x1cfd,	// (0x00010e25) cale_month_day_heading_pane_t1

0x1d3f,	// (0x00010e67) cale_month_day_heading_pane_t2

0x1d74,	// (0x00010e9c) cale_month_day_heading_pane_t3

0x1da9,	// (0x00010ed1) cale_month_day_heading_pane_t4

0x1de6,	// (0x00010f0e) cale_month_day_heading_pane_t5

0x1e2b,	// (0x00010f53) cale_month_day_heading_pane_t6

0x1e70,	// (0x00010f98) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0001e3b3) cale_month_day_heading_pane_t

0x9e1d,	// (0x00018f45) bg_cale_side_pane_cp01

0x1ebd,	// (0x00010fe5) cale_month_week_pane_t1

0x1ed6,	// (0x00010ffe) cale_month_week_pane_t2

0x1eef,	// (0x00011017) cale_month_week_pane_t3

0x1f08,	// (0x00011030) cale_month_week_pane_t4

0x1f21,	// (0x00011049) cale_month_week_pane_t5

0x1f3a,	// (0x00011062) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0001e3c2) cale_month_week_pane_t

0x1f53,	// (0x0001107b) cell_cale_month_pane_ParamLimits

0x1f53,	// (0x0001107b) cell_cale_month_pane

0xa1c6,	// (0x000192ee) cell_cale_month_pane_g1

0x20ab,	// (0x000111d3) cell_cale_month_pane_t1_ParamLimits

0x20ab,	// (0x000111d3) cell_cale_month_pane_t1

0x9e2b,	// (0x00018f53) grid_highlight_pane_cp08

0x9c8b,	// (0x00018db3) main_smil_g1

0x20d7,	// (0x000111ff) smil_status_pane

0xa1d2,	// (0x000192fa) smil_text_pane

0xbbf2,	// (0x0001ad1a) bg_popup_call3_rect_pane_g8

0xbbfa,	// (0x0001ad22) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0001e67b) bg_popup_call3_rect_pane_g

0xbed5,	// (0x0001affd) smil_status_volume_pane_g1

0xa1dc,	// (0x00019304) smil_status_pane_t1

0xbf08,	// (0x0001b030) volume_smil_pane

0xa1f3,	// (0x0001931b) list_smil_text_pane

0x20ec,	// (0x00011214) scroll_pane_cp011

0x20f7,	// (0x0001121f) smil_text_list_pane_t1_ParamLimits

0x20f7,	// (0x0001121f) smil_text_list_pane_t1

0xa1fd,	// (0x00019325) aid_volume_smil_ParamLimits

0xa1fd,	// (0x00019325) aid_volume_smil

0x9c8b,	// (0x00018db3) smil_volume_pane_g1

0x9c8b,	// (0x00018db3) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0001e3e2) smil_volume_pane_g

0x0951,	// (0x0000fa79) listscroll_cale_day_pane

0xa21f,	// (0x00019347) bg_cale_pane

0xa237,	// (0x0001935f) list_cale_pane

0xa25a,	// (0x00019382) scroll_pane_cp09

0xa26b,	// (0x00019393) cale_bg_pane_g1

0xa273,	// (0x0001939b) cale_bg_pane_g2

0xa27b,	// (0x000193a3) cale_bg_pane_g3

0xa283,	// (0x000193ab) cale_bg_pane_g4

0xa28b,	// (0x000193b3) cale_bg_pane_g5

0xa293,	// (0x000193bb) cale_bg_pane_g6

0xa29b,	// (0x000193c3) cale_bg_pane_g7

0xa2a3,	// (0x000193cb) cale_bg_pane_g8

0xa2ab,	// (0x000193d3) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0001e3e7) cale_bg_pane_g

0x2143,	// (0x0001126b) list_cale_time_pane_ParamLimits

0x2143,	// (0x0001126b) list_cale_time_pane

0xa2b3,	// (0x000193db) list_cale_time_pane_g1_ParamLimits

0xa2b3,	// (0x000193db) list_cale_time_pane_g1

0xa2bf,	// (0x000193e7) list_cale_time_pane_g2_ParamLimits

0xa2bf,	// (0x000193e7) list_cale_time_pane_g2

0x2159,	// (0x00011281) list_cale_time_pane_g3_ParamLimits

0x2159,	// (0x00011281) list_cale_time_pane_g3

0x2167,	// (0x0001128f) list_cale_time_pane_g4_ParamLimits

0x2167,	// (0x0001128f) list_cale_time_pane_g4

0x2175,	// (0x0001129d) list_cale_time_pane_g5_ParamLimits

0x2175,	// (0x0001129d) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0001e3fa) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0001e3fa) list_cale_time_pane_g

0xa2d9,	// (0x00019401) list_cale_time_pane_t1_ParamLimits

0xa2d9,	// (0x00019401) list_cale_time_pane_t1

0xa301,	// (0x00019429) list_cale_time_pane_t2_ParamLimits

0xa301,	// (0x00019429) list_cale_time_pane_t2

0x24f7,	// (0x0001161f) aid_blid_cardinal_pane

0x2535,	// (0x0001165d) compass_pane_t4

0xa329,	// (0x00019451) list_cale_time_pane_t4_ParamLimits

0xa329,	// (0x00019451) list_cale_time_pane_t4

0x2543,	// (0x0001166b) compass_pane_t5

0x2551,	// (0x00011679) compass_pane_t6

0x255f,	// (0x00011687) compass_pane_t7

0xa81c,	// (0x00019944) navi_pane_cc_t1

0xaa0b,	// (0x00019b33) aid_phob_thumbnail_center_pane

0x2bbf,	// (0x00011ce7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0001e407) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0001e407) list_cale_time_pane_t

0x951b,	// (0x00018643) bg_popup_window_pane_cp02_ParamLimits

0x951b,	// (0x00018643) bg_popup_window_pane_cp02

0xa351,	// (0x00019479) heading_pane_cp01_ParamLimits

0xa351,	// (0x00019479) heading_pane_cp01

0xa35d,	// (0x00019485) loc_req_pane_ParamLimits

0xa35d,	// (0x00019485) loc_req_pane

0xa36d,	// (0x00019495) loc_type_pane_ParamLimits

0xa36d,	// (0x00019495) loc_type_pane

0xa37f,	// (0x000194a7) loc_type_pane_t1_ParamLimits

0xa37f,	// (0x000194a7) loc_type_pane_t1

0xa391,	// (0x000194b9) loc_type_pane_t2_ParamLimits

0xa391,	// (0x000194b9) loc_type_pane_t2

0xa3a3,	// (0x000194cb) loc_type_pane_t3_ParamLimits

0xa3a3,	// (0x000194cb) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0001e40e) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0001e40e) loc_type_pane_t

0xa3b5,	// (0x000194dd) list_loc_req_pane

0xa3bf,	// (0x000194e7) scroll_pane_cp012

0x2183,	// (0x000112ab) list_single_loc_request_popup_menu_pane_ParamLimits

0x2183,	// (0x000112ab) list_single_loc_request_popup_menu_pane

0xa3ca,	// (0x000194f2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa3ca,	// (0x000194f2) list_single_loc_request_popup_menu_pane_g1

0xa3d6,	// (0x000194fe) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa3d6,	// (0x000194fe) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0001e415) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0001e415) list_single_loc_request_popup_menu_pane_g

0xa3e2,	// (0x0001950a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa3e2,	// (0x0001950a) list_single_loc_request_popup_menu_pane_t1

0x9b1f,	// (0x00018c47) bg_popup_window_pane_cp03_ParamLimits

0x9b1f,	// (0x00018c47) bg_popup_window_pane_cp03

0xa3f8,	// (0x00019520) heading_loc_req_pane_ParamLimits

0xa3f8,	// (0x00019520) heading_loc_req_pane

0x2190,	// (0x000112b8) popup_dyc_status_message_window_g1_ParamLimits

0x2190,	// (0x000112b8) popup_dyc_status_message_window_g1

0x21a4,	// (0x000112cc) popup_dyc_status_message_window_t1_ParamLimits

0x21a4,	// (0x000112cc) popup_dyc_status_message_window_t1

0x21b9,	// (0x000112e1) popup_dyc_status_message_window_t2_ParamLimits

0x21b9,	// (0x000112e1) popup_dyc_status_message_window_t2

0x21ce,	// (0x000112f6) popup_dyc_status_message_window_t3_ParamLimits

0x21ce,	// (0x000112f6) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0001e41a) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0001e41a) popup_dyc_status_message_window_t

0x98c4,	// (0x000189ec) bg_heading_pane_cp01

0xa404,	// (0x0001952c) heading_loc_req_pane_g1

0xa40c,	// (0x00019534) heading_loc_req_pane_g2

0xa414,	// (0x0001953c) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0001e421) heading_loc_req_pane_g

0xa41c,	// (0x00019544) heading_loc_req_pane_t1

0xa42b,	// (0x00019553) bg_popup_sub_pane_cp01_ParamLimits

0xa42b,	// (0x00019553) bg_popup_sub_pane_cp01

0xa439,	// (0x00019561) popup_cale_events_window_g1_ParamLimits

0xa439,	// (0x00019561) popup_cale_events_window_g1

0xa459,	// (0x00019581) popup_cale_events_window_g2_ParamLimits

0xa459,	// (0x00019581) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0001e455) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0001e455) popup_cale_events_window_g

0xa479,	// (0x000195a1) popup_cale_events_window_t1_ParamLimits

0xa479,	// (0x000195a1) popup_cale_events_window_t1

0xa48b,	// (0x000195b3) popup_cale_events_window_t2_ParamLimits

0xa48b,	// (0x000195b3) popup_cale_events_window_t2

0xa4c9,	// (0x000195f1) popup_cale_events_window_t3_ParamLimits

0xa4c9,	// (0x000195f1) popup_cale_events_window_t3

0xa503,	// (0x0001962b) popup_cale_events_window_t4_ParamLimits

0xa503,	// (0x0001962b) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0001e45a) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0001e45a) popup_cale_events_window_t

0x22c7,	// (0x000113ef) call_type_pane

0x22d7,	// (0x000113ff) popup_call_status_window_g1

0x22eb,	// (0x00011413) popup_call_status_window_g2

0x22ff,	// (0x00011427) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0001e463) popup_call_status_window_g

0xa539,	// (0x00019661) call_type_pane_g1

0xa542,	// (0x0001966a) call_type_pane_g2

0x0001,

0xf342,	// (0x0001e46a) call_type_pane_g

0x98c4,	// (0x000189ec) bg_popup_sub_pane_cp02

0xa54b,	// (0x00019673) listscroll_popup_wml_pane

0xa553,	// (0x0001967b) list_wml_pane

0xa55d,	// (0x00019685) scroll_pane_cp013

0xa568,	// (0x00019690) list_single_graphic_popup_wml_pane_ParamLimits

0xa568,	// (0x00019690) list_single_graphic_popup_wml_pane

0x9c8b,	// (0x00018db3) list_single_graphic_popup_wml_pane_g1

0xa57c,	// (0x000196a4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0001e46f) list_single_graphic_popup_wml_pane_g

0xa584,	// (0x000196ac) list_single_graphic_popup_wml_pane_t1

0xa59a,	// (0x000196c2) aid_call_pane

0x9b17,	// (0x00018c3f) popup_clock_analogue_window_g1

0x9b17,	// (0x00018c3f) popup_clock_analogue_window_g2

0xa5a2,	// (0x000196ca) popup_clock_analogue_window_g3

0xa5a2,	// (0x000196ca) popup_clock_analogue_window_g4

0x9c8b,	// (0x00018db3) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0001e474) popup_clock_analogue_window_g

0xa5aa,	// (0x000196d2) popup_clock_analogue_window_t1

0xa5b8,	// (0x000196e0) clock_digital_number_pane_ParamLimits

0xa5b8,	// (0x000196e0) clock_digital_number_pane

0xa5c4,	// (0x000196ec) clock_digital_number_pane_cp02_ParamLimits

0xa5c4,	// (0x000196ec) clock_digital_number_pane_cp02

0xa5d0,	// (0x000196f8) clock_digital_number_pane_cp03_ParamLimits

0xa5d0,	// (0x000196f8) clock_digital_number_pane_cp03

0xa5dc,	// (0x00019704) clock_digital_number_pane_cp04_ParamLimits

0xa5dc,	// (0x00019704) clock_digital_number_pane_cp04

0xa5e8,	// (0x00019710) clock_digital_separator_pane_ParamLimits

0xa5e8,	// (0x00019710) clock_digital_separator_pane

0xa5f4,	// (0x0001971c) popup_clock_digital_window_t1

0x9c8b,	// (0x00018db3) clock_digital_number_pane_g1

0x9c8b,	// (0x00018db3) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0001e3e2) clock_digital_number_pane_g

0x9c8b,	// (0x00018db3) clock_digital_separator_pane_g1

0x9c8b,	// (0x00018db3) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0001e3e2) clock_digital_separator_pane_g

0x98c4,	// (0x000189ec) bg_popup_window_pane_cp04

0xa611,	// (0x00019739) heading_pane_cp03

0xa619,	// (0x00019741) listscroll_popup_gms_pane

0xa621,	// (0x00019749) grid_large_graphic_popup_pane

0xa62b,	// (0x00019753) listscroll_popup_gms_pane_g1

0xa633,	// (0x0001975b) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0001e47f) listscroll_popup_gms_pane_g

0xa02b,	// (0x00019153) scroll_pane_cp014

0x230e,	// (0x00011436) cell_large_graphic_popup_pane_ParamLimits

0x230e,	// (0x00011436) cell_large_graphic_popup_pane

0x2326,	// (0x0001144e) cell_large_graphic_popup_pane_g1_ParamLimits

0x2326,	// (0x0001144e) cell_large_graphic_popup_pane_g1

0xa63b,	// (0x00019763) cell_large_graphic_popup_pane_g2_ParamLimits

0xa63b,	// (0x00019763) cell_large_graphic_popup_pane_g2

0xa647,	// (0x0001976f) cell_large_graphic_popup_pane_g3_ParamLimits

0xa647,	// (0x0001976f) cell_large_graphic_popup_pane_g3

0xa654,	// (0x0001977c) cell_large_graphic_popup_pane_g4_ParamLimits

0xa654,	// (0x0001977c) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0001e484) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0001e484) cell_large_graphic_popup_pane_g

0xa664,	// (0x0001978c) grid_highlight_pane_cp010

0x9c8b,	// (0x00018db3) bg_popup_call_pane_g1

0xa66e,	// (0x00019796) list_single_graphic_popup_conf_pane_ParamLimits

0xa66e,	// (0x00019796) list_single_graphic_popup_conf_pane

0xa681,	// (0x000197a9) list_highlight_pane_cp01

0xa68a,	// (0x000197b2) list_single_graphic_popup_conf_pane_g1

0xa692,	// (0x000197ba) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0001e48d) list_single_graphic_popup_conf_pane_g

0xa69a,	// (0x000197c2) list_single_graphic_popup_conf_pane_t1

0xa6a8,	// (0x000197d0) linegrid_cams_pane_g1

0x2332,	// (0x0001145a) linegrid_cams_pane_g2

0x9e5e,	// (0x00018f86) linegrid_cams_pane_g3

0xa6b1,	// (0x000197d9) linegrid_cams_pane_g4

0x233b,	// (0x00011463) linegrid_cams_pane_g5

0x2344,	// (0x0001146c) linegrid_cams_pane_g6

0x9e67,	// (0x00018f8f) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0001e492) linegrid_cams_pane_g

0xa6ba,	// (0x000197e2) popup_clock_analogue_window

0xa6ba,	// (0x000197e2) popup_clock_digital_window

0x98c4,	// (0x000189ec) popup_phob_thumbnail_window

0x9c8b,	// (0x00018db3) call_video_uplink_pane_g1

0xa6c3,	// (0x000197eb) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0001e4a1) call_video_uplink_pane_g

0xa6cb,	// (0x000197f3) video_uplink_pane

0xa6d3,	// (0x000197fb) mce_image_pane_g1

0x234f,	// (0x00011477) mce_image_pane_g2

0x2357,	// (0x0001147f) mce_image_pane_g3

0x235f,	// (0x00011487) mce_image_pane_g4

0x2369,	// (0x00011491) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0001e4a6) mce_image_pane_g

0xa6dd,	// (0x00019805) control_top_pane_stacon_cp01_ParamLimits

0xa6dd,	// (0x00019805) control_top_pane_stacon_cp01

0xa6f1,	// (0x00019819) uni_indicator_pane_stacon_cp01_ParamLimits

0xa6f1,	// (0x00019819) uni_indicator_pane_stacon_cp01

0xa702,	// (0x0001982a) bg_popup_sub_pane_cp03

0x2371,	// (0x00011499) chi_dic_find_pane

0x2379,	// (0x000114a1) listscroll_chi_dic_pane

0x2382,	// (0x000114aa) main_pane_chidic_g1

0x2395,	// (0x000114bd) chi_dic_find_pane_t1

0xa70c,	// (0x00019834) find_chidic_pane

0xa715,	// (0x0001983d) chi_dic_list_pane_ParamLimits

0xa715,	// (0x0001983d) chi_dic_list_pane

0xa726,	// (0x0001984e) scroll_pane_cp020

0x23a3,	// (0x000114cb) find_chidic_pane_t1

0x98c4,	// (0x000189ec) input_focus_pane_cp06

0x23b2,	// (0x000114da) list_chi_dic_pane_ParamLimits

0x23b2,	// (0x000114da) list_chi_dic_pane

0x23c4,	// (0x000114ec) list_chi_dic_pane_t1_ParamLimits

0x23c4,	// (0x000114ec) list_chi_dic_pane_t1

0x98c4,	// (0x000189ec) list_highlight_pane_cp020

0xa72e,	// (0x00019856) bg_cale_heading_pane_g1

0x23d7,	// (0x000114ff) bg_cale_heading_pane_g2

0x23df,	// (0x00011507) bg_cale_heading_pane_g3

0x23e7,	// (0x0001150f) bg_cale_heading_pane_g4

0x23f1,	// (0x00011519) bg_cale_heading_pane_g5

0x23fb,	// (0x00011523) bg_cale_heading_pane_g6

0x2403,	// (0x0001152b) bg_cale_heading_pane_g7

0x240b,	// (0x00011533) bg_cale_heading_pane_g8

0x2415,	// (0x0001153d) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0001e4b1) bg_cale_heading_pane_g

0xa72e,	// (0x00019856) bg_cale_side_pane_g1

0x241f,	// (0x00011547) bg_cale_side_pane_g2

0x2427,	// (0x0001154f) bg_cale_side_pane_g3

0x242f,	// (0x00011557) bg_cale_side_pane_g4

0x2437,	// (0x0001155f) bg_cale_side_pane_g5

0x243f,	// (0x00011567) bg_cale_side_pane_g6

0x2447,	// (0x0001156f) bg_cale_side_pane_g7

0x244f,	// (0x00011577) bg_cale_side_pane_g8

0x2457,	// (0x0001157f) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0001e4c4) bg_cale_side_pane_g

0x245f,	// (0x00011587) popup_call_status_window_ParamLimits

0x245f,	// (0x00011587) popup_call_status_window

0xa736,	// (0x0001985e) stacon_top_pane

0xa73e,	// (0x00019866) status_pane_ParamLimits

0xa73e,	// (0x00019866) status_pane

0xa753,	// (0x0001987b) status_small_pane

0xa75b,	// (0x00019883) control_pane

0x98c4,	// (0x000189ec) stacon_bottom_pane

0xa763,	// (0x0001988b) list_single_mce_smart_pane_t1_ParamLimits

0xa763,	// (0x0001988b) list_single_mce_smart_pane_t1

0xa776,	// (0x0001989e) list_single_mce_smart_pane_t2_ParamLimits

0xa776,	// (0x0001989e) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0001e4d7) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0001e4d7) list_single_mce_smart_pane_t

0x24a6,	// (0x000115ce) compass_pane

0x24af,	// (0x000115d7) main_location2_pane_t1

0x24c1,	// (0x000115e9) main_location2_pane_t2

0x24d3,	// (0x000115fb) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0001e4dc) main_location2_pane_t

0xa795,	// (0x000198bd) compass_pane_g1_ParamLimits

0xa795,	// (0x000198bd) compass_pane_g1

0x2517,	// (0x0001163f) compass_pane_t1

0x2526,	// (0x0001164e) compass_pane_t2

0x0005,

0xf3bd,	// (0x0001e4e5) compass_pane_t

0x256d,	// (0x00011695) text_secondary_cp61

0xa813,	// (0x0001993b) navi_pane_cams_g5

0xa88f,	// (0x000199b7) navi_pane_im_t1

0xa89d,	// (0x000199c5) navi_pane_mp_g1_ParamLimits

0xa89d,	// (0x000199c5) navi_pane_mp_g1

0xa8b1,	// (0x000199d9) navi_pane_mp_g2_ParamLimits

0xa8b1,	// (0x000199d9) navi_pane_mp_g2

0xa8bd,	// (0x000199e5) navi_pane_mp_g3_ParamLimits

0xa8bd,	// (0x000199e5) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0001e4f9) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0001e4f9) navi_pane_mp_g

0xa8c9,	// (0x000199f1) navi_pane_mp_t1

0xa8d7,	// (0x000199ff) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0001e500) navi_pane_mp_t

0xa942,	// (0x00019a6a) navi_pane_vt_g1

0xa8c9,	// (0x000199f1) navi_pane_vt_t1

0xa94a,	// (0x00019a72) navi_slider_pane

0x9e78,	// (0x00018fa0) zooming_pane

0xa95a,	// (0x00019a82) navi_slider_pane_g1

0xa963,	// (0x00019a8b) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0001e507) navi_slider_pane_g

0xa990,	// (0x00019ab8) aid_levels_zoom

0xa998,	// (0x00019ac0) zooming_pane_g1

0xa9a0,	// (0x00019ac8) zooming_pane_g2

0xa9a0,	// (0x00019ac8) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0001e516) zooming_pane_g

0xa9a8,	// (0x00019ad0) level_10_zoom

0xa9b1,	// (0x00019ad9) level_11_zoom

0xa9ba,	// (0x00019ae2) level_1_zoom

0xa9c3,	// (0x00019aeb) level_2_zoom

0xa9cc,	// (0x00019af4) level_3_zoom

0xa9d5,	// (0x00019afd) level_4_zoom

0xa9de,	// (0x00019b06) level_5_zoom

0xa9e7,	// (0x00019b0f) level_6_zoom

0xa9f0,	// (0x00019b18) level_7_zoom

0xa9f9,	// (0x00019b21) level_8_zoom

0xaa02,	// (0x00019b2a) level_9_zoom

0xaa13,	// (0x00019b3b) popup_phob_thumbnail_window_g1

0xaa1b,	// (0x00019b43) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0001e51d) popup_phob_thumbnail_window_g

0xbd94,	// (0x0001aebc) level_1_location

0xbd9c,	// (0x0001aec4) level_2_location

0xbda4,	// (0x0001aecc) level_3_location

0xbdac,	// (0x0001aed4) level_4_location

0x9e78,	// (0x00018fa0) level_5_location

0x25be,	// (0x000116e6) mce_icon_pane_g1

0x25c8,	// (0x000116f0) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0001e522) mce_icon_pane_g

0x25d0,	// (0x000116f8) main_mup_pane_g1_ParamLimits

0x25d0,	// (0x000116f8) main_mup_pane_g1

0x25e6,	// (0x0001170e) main_mup_pane_g2_ParamLimits

0x25e6,	// (0x0001170e) main_mup_pane_g2

0x25f8,	// (0x00011720) main_mup_pane_g3_ParamLimits

0x25f8,	// (0x00011720) main_mup_pane_g3

0x260a,	// (0x00011732) main_mup_pane_g4_ParamLimits

0x260a,	// (0x00011732) main_mup_pane_g4

0x2622,	// (0x0001174a) main_mup_pane_g5_ParamLimits

0x2622,	// (0x0001174a) main_mup_pane_g5

0x263e,	// (0x00011766) main_mup_pane_g6_ParamLimits

0x263e,	// (0x00011766) main_mup_pane_g6

0x2656,	// (0x0001177e) main_mup_pane_g7_ParamLimits

0x2656,	// (0x0001177e) main_mup_pane_g7

0x266e,	// (0x00011796) main_mup_pane_g8_ParamLimits

0x266e,	// (0x00011796) main_mup_pane_g8

0x2686,	// (0x000117ae) main_mup_pane_g9_ParamLimits

0x2686,	// (0x000117ae) main_mup_pane_g9

0x26a0,	// (0x000117c8) main_mup_pane_g10_ParamLimits

0x26a0,	// (0x000117c8) main_mup_pane_g10

0x26ba,	// (0x000117e2) main_mup_pane_g11_ParamLimits

0x26ba,	// (0x000117e2) main_mup_pane_g11

0x26ce,	// (0x000117f6) main_mup_pane_g12_ParamLimits

0x26ce,	// (0x000117f6) main_mup_pane_g12

0x26e4,	// (0x0001180c) main_mup_pane_g13_ParamLimits

0x26e4,	// (0x0001180c) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0001e527) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0001e527) main_mup_pane_g

0x26f8,	// (0x00011820) main_mup_pane_t1_ParamLimits

0x26f8,	// (0x00011820) main_mup_pane_t1

0x2712,	// (0x0001183a) main_mup_pane_t2_ParamLimits

0x2712,	// (0x0001183a) main_mup_pane_t2

0x272a,	// (0x00011852) main_mup_pane_t3_ParamLimits

0x272a,	// (0x00011852) main_mup_pane_t3

0x2742,	// (0x0001186a) main_mup_pane_t4_ParamLimits

0x2742,	// (0x0001186a) main_mup_pane_t4

0x2760,	// (0x00011888) main_mup_pane_t5_ParamLimits

0x2760,	// (0x00011888) main_mup_pane_t5

0x2775,	// (0x0001189d) main_mup_pane_t6_ParamLimits

0x2775,	// (0x0001189d) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0001e542) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0001e542) main_mup_pane_t

0x2787,	// (0x000118af) mup_progress_pane_ParamLimits

0x2787,	// (0x000118af) mup_progress_pane

0x2793,	// (0x000118bb) mup_visualizer_pane_ParamLimits

0x2793,	// (0x000118bb) mup_visualizer_pane

0x27c7,	// (0x000118ef) mup_volume_pane_ParamLimits

0x27c7,	// (0x000118ef) mup_volume_pane

0xaa23,	// (0x00019b4b) mup_visualizer_pane_g1_ParamLimits

0xaa23,	// (0x00019b4b) mup_visualizer_pane_g1

0xaa23,	// (0x00019b4b) mup_visualizer_pane_g2_ParamLimits

0xaa23,	// (0x00019b4b) mup_visualizer_pane_g2

0xa795,	// (0x000198bd) mup_visualizer_pane_g3_ParamLimits

0xa795,	// (0x000198bd) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0001e54f) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0001e54f) mup_visualizer_pane_g

0x9c8b,	// (0x00018db3) mup_volume_pane_g1

0xaa39,	// (0x00019b61) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0001e556) mup_volume_pane_g

0x9c8b,	// (0x00018db3) mup_progress_pane_g1

0xaa42,	// (0x00019b6a) mup_progress_pane_g2

0xaa4b,	// (0x00019b73) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0001e55b) mup_progress_pane_g

0x98c4,	// (0x000189ec) bg_popup_window_pane_cp05

0xaa54,	// (0x00019b7c) heading_pane_cp02_ParamLimits

0xaa54,	// (0x00019b7c) heading_pane_cp02

0xaa6e,	// (0x00019b96) list_popup_blid_pane

0xaa76,	// (0x00019b9e) list_blid_sat_info_pane_ParamLimits

0xaa76,	// (0x00019b9e) list_blid_sat_info_pane

0xaa89,	// (0x00019bb1) list_blid_sat_info_pane_g1

0xaa91,	// (0x00019bb9) list_blid_sat_info_pane_t1

0x28dd,	// (0x00011a05) mup_equalizer_pane_ParamLimits

0x28dd,	// (0x00011a05) mup_equalizer_pane

0x28f6,	// (0x00011a1e) mup_equalizer_pane_cp1_ParamLimits

0x28f6,	// (0x00011a1e) mup_equalizer_pane_cp1

0x2913,	// (0x00011a3b) mup_equalizer_pane_cp2_ParamLimits

0x2913,	// (0x00011a3b) mup_equalizer_pane_cp2

0x2930,	// (0x00011a58) mup_equalizer_pane_cp3_ParamLimits

0x2930,	// (0x00011a58) mup_equalizer_pane_cp3

0x2951,	// (0x00011a79) mup_equalizer_pane_cp4_ParamLimits

0x2951,	// (0x00011a79) mup_equalizer_pane_cp4

0x2972,	// (0x00011a9a) mup_equalizer_pane_cp5

0x2986,	// (0x00011aae) mup_equalizer_pane_cp6

0x299a,	// (0x00011ac2) mup_equalizer_pane_cp7

0xbc72,	// (0x0001ad9a) bg_popup_call_poc_act_pane_g9

0xbc7a,	// (0x0001ada2) bg_popup_call_poc_act_pane_g10

0xbc82,	// (0x0001adaa) bg_popup_call_poc_act_pane_g11

0x000a,

0x9b1f,	// (0x00018c47) mup_scale_pane

0x9c8b,	// (0x00018db3) mup_scale_pane_g1

0xaa9f,	// (0x00019bc7) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0001e577) mup_scale_pane_g

0xaac3,	// (0x00019beb) msg_data_pane

0xaacb,	// (0x00019bf3) scroll_pane_cp017

0x29c0,	// (0x00011ae8) bg_list_pane_cp04_ParamLimits

0x29c0,	// (0x00011ae8) bg_list_pane_cp04

0xaad3,	// (0x00019bfb) msg_data_pane_g1

0x29e0,	// (0x00011b08) msg_data_pane_g2

0x29e8,	// (0x00011b10) msg_data_pane_g3

0x29f0,	// (0x00011b18) msg_data_pane_g4

0x29f8,	// (0x00011b20) msg_data_pane_g5

0x2a00,	// (0x00011b28) msg_data_pane_g6

0x2a08,	// (0x00011b30) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0001e586) msg_data_pane_g

0x2a10,	// (0x00011b38) msg_text_pane_ParamLimits

0x2a10,	// (0x00011b38) msg_text_pane

0x2a3e,	// (0x00011b66) qrid_highlight_pane_cp011_ParamLimits

0x2a3e,	// (0x00011b66) qrid_highlight_pane_cp011

0x98c4,	// (0x000189ec) msg_body_pane

0x98c4,	// (0x000189ec) msg_header_pane

0xaae4,	// (0x00019c0c) input_focus_pane_cp07

0x2a62,	// (0x00011b8a) msg_header_pane_t1_ParamLimits

0x2a62,	// (0x00011b8a) msg_header_pane_t1

0x2a74,	// (0x00011b9c) msg_header_pane_t2_ParamLimits

0x2a74,	// (0x00011b9c) msg_header_pane_t2

0x0001,

0xf472,	// (0x0001e59a) msg_header_pane_t_ParamLimits

0xf472,	// (0x0001e59a) msg_header_pane_t

0xaaf9,	// (0x00019c21) msg_body_pane_g1

0x2a86,	// (0x00011bae) msg_body_pane_t1_ParamLimits

0x2a86,	// (0x00011bae) msg_body_pane_t1

0x2ab7,	// (0x00011bdf) msg_body_pane_t2_ParamLimits

0x2ab7,	// (0x00011bdf) msg_body_pane_t2

0x2ac9,	// (0x00011bf1) msg_body_pane_t3_ParamLimits

0x2ac9,	// (0x00011bf1) msg_body_pane_t3

0x0002,

0xf477,	// (0x0001e59f) msg_body_pane_t_ParamLimits

0xf477,	// (0x0001e59f) msg_body_pane_t

0x2b15,	// (0x00011c3d) main_viewer_pane_g1_ParamLimits

0x2b15,	// (0x00011c3d) main_viewer_pane_g1

0x2b23,	// (0x00011c4b) main_viewer_pane_g2_ParamLimits

0x2b23,	// (0x00011c4b) main_viewer_pane_g2

0x2b31,	// (0x00011c59) main_viewer_pane_g3_ParamLimits

0x2b31,	// (0x00011c59) main_viewer_pane_g3

0x2b40,	// (0x00011c68) main_viewer_pane_g4_ParamLimits

0x2b40,	// (0x00011c68) main_viewer_pane_g4

0xab19,	// (0x00019c41) main_viewer_pane_g5_ParamLimits

0xab19,	// (0x00019c41) main_viewer_pane_g5

0xab19,	// (0x00019c41) main_viewer_pane_g7_ParamLimits

0xab19,	// (0x00019c41) main_viewer_pane_g7

0xab2b,	// (0x00019c53) main_viewer_pane_g8_ParamLimits

0xab2b,	// (0x00019c53) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0001e5af) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0001e5af) main_viewer_pane_g

0xab43,	// (0x00019c6b) viewer_content_pane_ParamLimits

0xab43,	// (0x00019c6b) viewer_content_pane

0x2b7c,	// (0x00011ca4) main_postcard_pane_g1_ParamLimits

0x2b7c,	// (0x00011ca4) main_postcard_pane_g1

0x2b92,	// (0x00011cba) main_postcard_pane_g2_ParamLimits

0x2b92,	// (0x00011cba) main_postcard_pane_g2

0x2ba8,	// (0x00011cd0) main_postcard_pane_g3_ParamLimits

0x2ba8,	// (0x00011cd0) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0001e5c0) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0001e5c0) main_postcard_pane_g

0x2bbf,	// (0x00011ce7) main_postcard_pane_g4

0xbee8,	// (0x0001b010) smil_status_volume_pane_g2

0x2c02,	// (0x00011d2a) postcard_pane_ParamLimits

0x2c02,	// (0x00011d2a) postcard_pane

0xab51,	// (0x00019c79) postcard_pane_g1_ParamLimits

0xab51,	// (0x00019c79) postcard_pane_g1

0x2c44,	// (0x00011d6c) postcard_pane_g2_ParamLimits

0x2c44,	// (0x00011d6c) postcard_pane_g2

0x2c50,	// (0x00011d78) postcard_pane_g3_ParamLimits

0x2c50,	// (0x00011d78) postcard_pane_g3

0xab5f,	// (0x00019c87) postcard_pane_g4_ParamLimits

0xab5f,	// (0x00019c87) postcard_pane_g4

0x2c5c,	// (0x00011d84) postcard_pane_g5_ParamLimits

0x2c5c,	// (0x00011d84) postcard_pane_g5

0x2c71,	// (0x00011d99) postcard_pane_g6_ParamLimits

0x2c71,	// (0x00011d99) postcard_pane_g6

0xab51,	// (0x00019c79) postcard_pane_g7_ParamLimits

0xab51,	// (0x00019c79) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0001e5cd) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0001e5cd) postcard_pane_g

0x2c85,	// (0x00011dad) main_mp2_pane_g1_ParamLimits

0x2c85,	// (0x00011dad) main_mp2_pane_g1

0x2c91,	// (0x00011db9) main_mp2_pane_g2_ParamLimits

0x2c91,	// (0x00011db9) main_mp2_pane_g2

0x2c9d,	// (0x00011dc5) main_mp2_pane_g3_ParamLimits

0x2c9d,	// (0x00011dc5) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0001e5dc) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0001e5dc) main_mp2_pane_g

0x2ca9,	// (0x00011dd1) main_mp2_pane_t1_ParamLimits

0x2ca9,	// (0x00011dd1) main_mp2_pane_t1

0x2cbe,	// (0x00011de6) main_mp2_pane_t2_ParamLimits

0x2cbe,	// (0x00011de6) main_mp2_pane_t2

0x2cd0,	// (0x00011df8) main_mp2_pane_t3_ParamLimits

0x2cd0,	// (0x00011df8) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0001e5e3) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0001e5e3) main_mp2_pane_t

0xab6d,	// (0x00019c95) pec_content_pane_ParamLimits

0xab6d,	// (0x00019c95) pec_content_pane

0xa02b,	// (0x00019153) scroll_pane_cp015

0xab7f,	// (0x00019ca7) pec_attribute_pane_ParamLimits

0xab7f,	// (0x00019ca7) pec_attribute_pane

0x2ce2,	// (0x00011e0a) pec_content_pane_g1_ParamLimits

0x2ce2,	// (0x00011e0a) pec_content_pane_g1

0xab8f,	// (0x00019cb7) pec_content_pane_t1_ParamLimits

0xab8f,	// (0x00019cb7) pec_content_pane_t1

0xaba1,	// (0x00019cc9) pec_content_pane_t2_ParamLimits

0xaba1,	// (0x00019cc9) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0001e5ea) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0001e5ea) pec_content_pane_t

0x2cee,	// (0x00011e16) list_single_graphic_pane_cp01_ParamLimits

0x2cee,	// (0x00011e16) list_single_graphic_pane_cp01

0x9b1f,	// (0x00018c47) bg_popup_sub_pane_cp04

0xabb3,	// (0x00019cdb) popup_mup_playback_window_g1

0xabbf,	// (0x00019ce7) popup_mup_playback_window_t1

0xabd4,	// (0x00019cfc) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0001e5ef) popup_mup_playback_window_t

0xac0b,	// (0x00019d33) main_image_pane_g1_ParamLimits

0xac0b,	// (0x00019d33) main_image_pane_g1

0xac4e,	// (0x00019d76) scroll_pane_cp018_ParamLimits

0xac4e,	// (0x00019d76) scroll_pane_cp018

0xac66,	// (0x00019d8e) scroll_pane_cp016_ParamLimits

0xac66,	// (0x00019d8e) scroll_pane_cp016

0x2dbc,	// (0x00011ee4) smil2_image_pane_ParamLimits

0x2dbc,	// (0x00011ee4) smil2_image_pane

0x2dec,	// (0x00011f14) smil2_root_pane_ParamLimits

0x2dec,	// (0x00011f14) smil2_root_pane

0x2e24,	// (0x00011f4c) smil2_text_pane_ParamLimits

0x2e24,	// (0x00011f4c) smil2_text_pane

0x98c4,	// (0x000189ec) bg_list_pane_cp06

0xaca2,	// (0x00019dca) grid_radio_pane

0x98c4,	// (0x000189ec) bg_popup_window_pane_cp06

0xacaa,	// (0x00019dd2) main_fmradio_pane_t1

0xa611,	// (0x00019739) heading_pane_cp04

0xacb8,	// (0x00019de0) main_fmradio_pane_t2

0xbcca,	// (0x0001adf2) popup_cale_lunar_info_window_g1

0xacc6,	// (0x00019dee) main_fmradio_pane_t3

0xbcd2,	// (0x0001adfa) popup_cale_lunar_info_window_g2

0xacd4,	// (0x00019dfc) main_fmradio_pane_t4

0x0001,

0xace2,	// (0x00019e0a) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0001e6dd) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0001e604) main_fmradio_pane_t

0xacf0,	// (0x00019e18) wait_bar_pane_cp03

0xacf8,	// (0x00019e20) cell_fmradio_pane_ParamLimits

0xacf8,	// (0x00019e20) cell_fmradio_pane

0xab51,	// (0x00019c79) cell_fmradio_pane_g1_ParamLimits

0xab51,	// (0x00019c79) cell_fmradio_pane_g1

0x98c4,	// (0x000189ec) grid_highlight_pane_cp011

0xad0b,	// (0x00019e33) poc_content_pane_ParamLimits

0xad0b,	// (0x00019e33) poc_content_pane

0xad1d,	// (0x00019e45) scroll_pane_cp019

0x2ea4,	// (0x00011fcc) popup_call_poc_act_window_ParamLimits

0x2ea4,	// (0x00011fcc) popup_call_poc_act_window

0x2ec8,	// (0x00011ff0) popup_call_poc_inact_window_ParamLimits

0x2ec8,	// (0x00011ff0) popup_call_poc_inact_window

0xf579,	// (0x0001e6a1) bg_popup_call_poc_act_pane_g

0xbc8a,	// (0x0001adb2) bg_popup_call_poc_inact_pane_g1

0xbc92,	// (0x0001adba) bg_popup_call_poc_inact_pane_g2

0xad25,	// (0x00019e4d) popup_call_poc_act_window_g2

0xbc9a,	// (0x0001adc2) bg_popup_call_poc_inact_pane_g3

0xbc1a,	// (0x0001ad42) bg_popup_call_poc_inact_pane_g4

0xbca2,	// (0x0001adca) bg_popup_call_poc_inact_pane_g5

0xad2d,	// (0x00019e55) popup_call_poc_act_window_t1_ParamLimits

0xad2d,	// (0x00019e55) popup_call_poc_act_window_t1

0xad55,	// (0x00019e7d) popup_call_poc_act_window_t2_ParamLimits

0xad55,	// (0x00019e7d) popup_call_poc_act_window_t2

0xad7d,	// (0x00019ea5) popup_call_poc_act_window_t3_ParamLimits

0xad7d,	// (0x00019ea5) popup_call_poc_act_window_t3

0xada5,	// (0x00019ecd) popup_call_poc_act_window_t4_ParamLimits

0xada5,	// (0x00019ecd) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0001e60f) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0001e60f) popup_call_poc_act_window_t

0xbcaa,	// (0x0001add2) bg_popup_call_poc_inact_pane_g6

0xbcb2,	// (0x0001adda) bg_popup_call_poc_inact_pane_g7

0xbcba,	// (0x0001ade2) bg_popup_call_poc_inact_pane_g8

0xadb7,	// (0x00019edf) popup_call_poc_inact_window_g2

0xbcc2,	// (0x0001adea) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0001e6b8) bg_popup_call_poc_inact_pane_g

0xadbf,	// (0x00019ee7) popup_call_poc_inact_window_t1_ParamLimits

0xadbf,	// (0x00019ee7) popup_call_poc_inact_window_t1

0xadd4,	// (0x00019efc) popup_call_poc_inact_window_t2_ParamLimits

0xadd4,	// (0x00019efc) popup_call_poc_inact_window_t2

0xade9,	// (0x00019f11) popup_call_poc_inact_window_t3_ParamLimits

0xade9,	// (0x00019f11) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0001e618) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0001e618) popup_call_poc_inact_window_t

0xbe5b,	// (0x0001af83) context_pane_ParamLimits

0x36f0,	// (0x00012818) signal_pane_ParamLimits

0x9e78,	// (0x00018fa0) main_call2_pane

0xbe34,	// (0x0001af5c) popup_phob_thumbnail2_window_ParamLimits

0xbe34,	// (0x0001af5c) popup_phob_thumbnail2_window

0xab01,	// (0x00019c29) aid_hotspot_pointer_arrow_pane

0xab09,	// (0x00019c31) aid_hotspot_pointer_hand_pane

0x3212,	// (0x0001233a) phob_pre_status_pane_g5

0x0f2b,	// (0x00010053) cams_zoom_pane_ParamLimits

0x0f3a,	// (0x00010062) image_vga_pane_ParamLimits

0x0f54,	// (0x0001007c) main_camera_pane_g1_ParamLimits

0x0f66,	// (0x0001008e) main_camera_pane_g2_ParamLimits

0x0f76,	// (0x0001009e) main_camera_pane_g3_ParamLimits

0x0f86,	// (0x000100ae) main_camera_pane_g4_ParamLimits

0x0f96,	// (0x000100be) main_camera_pane_g5_ParamLimits

0x0fa6,	// (0x000100ce) main_camera_pane_g6_ParamLimits

0x0fb6,	// (0x000100de) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0001e317) main_camera_pane_g_ParamLimits

0x0fc6,	// (0x000100ee) main_camera_pane_t1_ParamLimits

0x0fdc,	// (0x00010104) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0001e328) main_camera_pane_t_ParamLimits

0x9b1f,	// (0x00018c47) bg_popup_preview_window_pane_cp01_ParamLimits

0x9b1f,	// (0x00018c47) bg_popup_preview_window_pane_cp01

0xadfe,	// (0x00019f26) popup_phob_thumbnail2_window_g1_ParamLimits

0xadfe,	// (0x00019f26) popup_phob_thumbnail2_window_g1

0x98c4,	// (0x000189ec) call2_cli_visual_pane

0x2efc,	// (0x00012024) popup_call2_audio_conf_window_ParamLimits

0x2efc,	// (0x00012024) popup_call2_audio_conf_window

0x2f1c,	// (0x00012044) popup_call2_audio_first_window_ParamLimits

0x2f1c,	// (0x00012044) popup_call2_audio_first_window

0x2fb2,	// (0x000120da) popup_call2_audio_in_window_ParamLimits

0x2fb2,	// (0x000120da) popup_call2_audio_in_window

0x2ffa,	// (0x00012122) popup_call2_audio_out_window_ParamLimits

0x2ffa,	// (0x00012122) popup_call2_audio_out_window

0x3064,	// (0x0001218c) popup_call2_audio_second_window_ParamLimits

0x3064,	// (0x0001218c) popup_call2_audio_second_window

0x30ca,	// (0x000121f2) popup_call2_audio_wait_window_ParamLimits

0x30ca,	// (0x000121f2) popup_call2_audio_wait_window

0x98c4,	// (0x000189ec) bg_popup_call2_act_pane_cp03

0x9b01,	// (0x00018c29) list_conf_pane_cp

0xae0a,	// (0x00019f32) popup_call2_audio_conf_window_t1

0xae18,	// (0x00019f40) list_single_graphic_popup_conf2_pane_ParamLimits

0xae18,	// (0x00019f40) list_single_graphic_popup_conf2_pane

0xa681,	// (0x000197a9) list_highlight_pane_cp04

0xae2b,	// (0x00019f53) list_single_graphic_popup_conf2_pane_g1

0xa692,	// (0x000197ba) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0001e61f) list_single_graphic_popup_conf2_pane_g

0xae35,	// (0x00019f5d) list_single_graphic_popup_conf2_pane_t1

0xae43,	// (0x00019f6b) bg_popup_call2_act_pane_cp01_ParamLimits

0xae43,	// (0x00019f6b) bg_popup_call2_act_pane_cp01

0xaecd,	// (0x00019ff5) call_type_pane_cp05_ParamLimits

0xaecd,	// (0x00019ff5) call_type_pane_cp05

0xaf21,	// (0x0001a049) popup_call2_audio_second_window_g1_ParamLimits

0xaf21,	// (0x0001a049) popup_call2_audio_second_window_g1

0xaf75,	// (0x0001a09d) popup_call2_audio_second_window_g2_ParamLimits

0xaf75,	// (0x0001a09d) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0001e624) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0001e624) popup_call2_audio_second_window_g

0xafda,	// (0x0001a102) popup_call2_audio_second_window_t1_ParamLimits

0xafda,	// (0x0001a102) popup_call2_audio_second_window_t1

0xb095,	// (0x0001a1bd) popup_call2_audio_second_window_t2_ParamLimits

0xb095,	// (0x0001a1bd) popup_call2_audio_second_window_t2

0xb0e8,	// (0x0001a210) popup_call2_audio_second_window_t3_ParamLimits

0xb0e8,	// (0x0001a210) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0001e62b) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0001e62b) popup_call2_audio_second_window_t

0x98c4,	// (0x000189ec) bg_popup_call2_in_pane_cp02

0x98ce,	// (0x000189f6) call_type_pane_cp04

0x98d6,	// (0x000189fe) popup_call2_audio_wait_window_g1

0x98de,	// (0x00018a06) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0001e206) popup_call2_audio_wait_window_g

0x98e6,	// (0x00018a0e) popup_call2_audio_wait_window_t3

0xb1db,	// (0x0001a303) bg_popup_call2_act_pane_ParamLimits

0xb1db,	// (0x0001a303) bg_popup_call2_act_pane

0xb29b,	// (0x0001a3c3) call_type_pane_cp03_ParamLimits

0xb29b,	// (0x0001a3c3) call_type_pane_cp03

0xb2ff,	// (0x0001a427) popup_call2_audio_first_window_g1_ParamLimits

0xb2ff,	// (0x0001a427) popup_call2_audio_first_window_g1

0xb36f,	// (0x0001a497) popup_call2_audio_first_window_g2_ParamLimits

0xb36f,	// (0x0001a497) popup_call2_audio_first_window_g2

0xaa23,	// (0x00019b4b) popup_call2_audio_first_window_g3_ParamLimits

0xaa23,	// (0x00019b4b) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0001e634) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0001e634) popup_call2_audio_first_window_g

0xb44d,	// (0x0001a575) popup_call2_audio_first_window_t1_ParamLimits

0xb44d,	// (0x0001a575) popup_call2_audio_first_window_t1

0xb550,	// (0x0001a678) popup_call2_audio_first_window_t4_ParamLimits

0xb550,	// (0x0001a678) popup_call2_audio_first_window_t4

0xb633,	// (0x0001a75b) popup_call2_audio_first_window_t5_ParamLimits

0xb633,	// (0x0001a75b) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0001e63f) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0001e63f) popup_call2_audio_first_window_t

0x9b17,	// (0x00018c3f) bg_popup_call2_act_pane_g1

0xbcda,	// (0x0001ae02) popup_cale_lunar_info_window_t1

0xbce8,	// (0x0001ae10) popup_cale_lunar_info_window_t2

0xbcf6,	// (0x0001ae1e) popup_cale_lunar_info_window_t3

0x98c4,	// (0x000189ec) bg_popup_call2_bubble_pane

0xb734,	// (0x0001a85c) bg_popup_call2_in_pane_cp01_ParamLimits

0xb734,	// (0x0001a85c) bg_popup_call2_in_pane_cp01

0x95a0,	// (0x000186c8) call_type_pane_cp02

0xb77c,	// (0x0001a8a4) popup_call2_audio_out_window_g1_ParamLimits

0xb77c,	// (0x0001a8a4) popup_call2_audio_out_window_g1

0xb7a8,	// (0x0001a8d0) popup_call2_audio_out_window_g2_ParamLimits

0xb7a8,	// (0x0001a8d0) popup_call2_audio_out_window_g2

0xb7d0,	// (0x0001a8f8) popup_call2_audio_out_window_g3_ParamLimits

0xb7d0,	// (0x0001a8f8) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0001e648) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0001e648) popup_call2_audio_out_window_g

0xb80b,	// (0x0001a933) popup_call2_audio_out_window_t1_ParamLimits

0xb80b,	// (0x0001a933) popup_call2_audio_out_window_t1

0xb86a,	// (0x0001a992) popup_call2_audio_out_window_t2_ParamLimits

0xb86a,	// (0x0001a992) popup_call2_audio_out_window_t2

0xb8be,	// (0x0001a9e6) popup_call2_audio_out_window_t3_ParamLimits

0xb8be,	// (0x0001a9e6) popup_call2_audio_out_window_t3

0xb8d4,	// (0x0001a9fc) popup_call2_audio_out_window_t4_ParamLimits

0xb8d4,	// (0x0001a9fc) popup_call2_audio_out_window_t4

0xb8ea,	// (0x0001aa12) popup_call2_audio_out_window_t5_ParamLimits

0xb8ea,	// (0x0001aa12) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0001e651) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0001e651) popup_call2_audio_out_window_t

0xb94e,	// (0x0001aa76) bg_popup_call2_in_pane_ParamLimits

0xb94e,	// (0x0001aa76) bg_popup_call2_in_pane

0xb9aa,	// (0x0001aad2) popup_call2_audio_in_window_g1_ParamLimits

0xb9aa,	// (0x0001aad2) popup_call2_audio_in_window_g1

0xb9e2,	// (0x0001ab0a) popup_call2_audio_in_window_g2_ParamLimits

0xb9e2,	// (0x0001ab0a) popup_call2_audio_in_window_g2

0xba1a,	// (0x0001ab42) popup_call2_audio_in_window_g3_ParamLimits

0xba1a,	// (0x0001ab42) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0001e65e) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0001e65e) popup_call2_audio_in_window_g

0xba72,	// (0x0001ab9a) popup_call2_audio_in_window_t1_ParamLimits

0xba72,	// (0x0001ab9a) popup_call2_audio_in_window_t1

0xbaf2,	// (0x0001ac1a) popup_call2_audio_in_window_t2_ParamLimits

0xbaf2,	// (0x0001ac1a) popup_call2_audio_in_window_t2

0xbb72,	// (0x0001ac9a) popup_call2_audio_in_window_t3_ParamLimits

0xbb72,	// (0x0001ac9a) popup_call2_audio_in_window_t3

0xbb8c,	// (0x0001acb4) popup_call2_audio_in_window_t4_ParamLimits

0xbb8c,	// (0x0001acb4) popup_call2_audio_in_window_t4

0xbb9e,	// (0x0001acc6) popup_call2_audio_in_window_t5_ParamLimits

0xbb9e,	// (0x0001acc6) popup_call2_audio_in_window_t5

0xbbb0,	// (0x0001acd8) popup_call2_audio_in_window_t6_ParamLimits

0xbbb0,	// (0x0001acd8) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0001e667) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0001e667) popup_call2_audio_in_window_t

0x9b17,	// (0x00018c3f) bg_popup_call2_in_pane_g1

0xbd04,	// (0x0001ae2c) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0001e6e2) popup_cale_lunar_info_window_t

0x9b1f,	// (0x00018c47) bg_popup_call2_rect_pane_ParamLimits

0x9b1f,	// (0x00018c47) bg_popup_call2_rect_pane

0x98c4,	// (0x000189ec) call2_cli_visual_graphic_pane

0x98c4,	// (0x000189ec) call2_cli_visual_text_pane

0xbefb,	// (0x0001b023) smil_status_volume_pane_g3

0x0002,

0x9c8b,	// (0x00018db3) call2_cli_visual_graphic_pane_g1

0x9c8b,	// (0x00018db3) call2_cli_visual_graphic_pane_g2

0x9c8b,	// (0x00018db3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0001e674) call2_cli_visual_graphic_pane_g

0xbbc2,	// (0x0001acea) bg_popup_call2_rect_pane_g1

0x9d20,	// (0x00018e48) bg_popup_call2_rect_pane_g2

0xbbca,	// (0x0001acf2) bg_popup_call2_rect_pane_g3

0xbbd2,	// (0x0001acfa) bg_popup_call2_rect_pane_g4

0xbbda,	// (0x0001ad02) bg_popup_call2_rect_pane_g5

0xbbe2,	// (0x0001ad0a) bg_popup_call2_rect_pane_g6

0xbbea,	// (0x0001ad12) bg_popup_call2_rect_pane_g7

0xbbf2,	// (0x0001ad1a) bg_popup_call2_rect_pane_g8

0xbbfa,	// (0x0001ad22) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0001e67b) bg_popup_call2_rect_pane_g

0xbc02,	// (0x0001ad2a) bg_popup_call2_bubble_pane_g1

0xbc0a,	// (0x0001ad32) bg_popup_call2_bubble_pane_g2

0xbc12,	// (0x0001ad3a) bg_popup_call2_bubble_pane_g3

0xbc1a,	// (0x0001ad42) bg_popup_call2_bubble_pane_g4

0xbc22,	// (0x0001ad4a) bg_popup_call2_bubble_pane_g5

0xbc2a,	// (0x0001ad52) bg_popup_call2_bubble_pane_g6

0xbc32,	// (0x0001ad5a) bg_popup_call2_bubble_pane_g7

0xbc3a,	// (0x0001ad62) bg_popup_call2_bubble_pane_g8

0xbc42,	// (0x0001ad6a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0001e68e) bg_popup_call2_bubble_pane_g

0x0963,	// (0x0000fa8b) aid_cale_week_size_cell_pane

0x0ff2,	// (0x0001011a) aid_cams_cif_uncrop_pane_ParamLimits

0x0ff2,	// (0x0001011a) aid_cams_cif_uncrop_pane

0x11a7,	// (0x000102cf) aid_cams_size_cell_ParamLimits

0x11a7,	// (0x000102cf) aid_cams_size_cell

0x11bb,	// (0x000102e3) grid_cams_pane_ParamLimits

0x11d5,	// (0x000102fd) linegrid_cams_pane_ParamLimits

0x13d2,	// (0x000104fa) call_video_pane_t1

0x13f0,	// (0x00010518) call_video_pane_t2

0x0001,

0xf253,	// (0x0001e37b) call_video_pane_t

0x1816,	// (0x0001093e) aid_cale_month_size_cell_pane_ParamLimits

0x1816,	// (0x0001093e) aid_cale_month_size_cell_pane

0xf603,	// (0x0001e72b) smil_status_volume_pane_g

0xbf08,	// (0x0001b030) volume_smil_pane_ParamLimits

0x9445,	// (0x0001856d) aid_popup2_width_pane

0x08e7,	// (0x0000fa0f) cell_qdial_pane_g4_ParamLimits

0x08e7,	// (0x0000fa0f) cell_qdial_pane_g4

0x24f7,	// (0x0001161f) aid_blid_cardinal_pane_ParamLimits

0x2503,	// (0x0001162b) aid_blid_destination_pane_ParamLimits

0x2503,	// (0x0001162b) aid_blid_destination_pane

0x9b1f,	// (0x00018c47) bg_popup_call_poc_act_pane_ParamLimits

0x9b1f,	// (0x00018c47) bg_popup_call_poc_act_pane

0x9b1f,	// (0x00018c47) bg_popup_call_poc_inact_pane_ParamLimits

0x9b1f,	// (0x00018c47) bg_popup_call_poc_inact_pane

0xbc4a,	// (0x0001ad72) bg_popup_call_poc_act_pane_g1

0xbc52,	// (0x0001ad7a) bg_popup_call_poc_act_pane_g2

0xbc5a,	// (0x0001ad82) bg_popup_call_poc_act_pane_g3

0xbc1a,	// (0x0001ad42) bg_popup_call_poc_act_pane_g4

0xbc22,	// (0x0001ad4a) bg_popup_call_poc_act_pane_g5

0xbc62,	// (0x0001ad8a) bg_popup_call_poc_act_pane_g6

0xbc32,	// (0x0001ad5a) bg_popup_call_poc_act_pane_g7

0xbc6a,	// (0x0001ad92) bg_popup_call_poc_act_pane_g8

0x98c4,	// (0x000189ec) main_usb_pane

0xbe0f,	// (0x0001af37) popup_cale_lunar_info_window

0x16bc,	// (0x000107e4) im_reading_pane_t1_ParamLimits

0x9f83,	// (0x000190ab) list_im_pane_ParamLimits

0x9f94,	// (0x000190bc) scroll_pane_cp07_ParamLimits

0x98c4,	// (0x000189ec) grid_highlight_pane_cp012

0x9b1f,	// (0x00018c47) mup_scale_pane_ParamLimits

0xab51,	// (0x00019c79) main_usb_pane_g1_ParamLimits

0xab51,	// (0x00019c79) main_usb_pane_g1

0x3127,	// (0x0001224f) main_usb_pane_g2_ParamLimits

0x3127,	// (0x0001224f) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0001e6cb) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0001e6cb) main_usb_pane_g

0x313d,	// (0x00012265) main_usb_pane_t1_ParamLimits

0x313d,	// (0x00012265) main_usb_pane_t1

0x314f,	// (0x00012277) main_usb_pane_t2_ParamLimits

0x314f,	// (0x00012277) main_usb_pane_t2

0x3161,	// (0x00012289) main_usb_pane_t3_ParamLimits

0x3161,	// (0x00012289) main_usb_pane_t3

0x3173,	// (0x0001229b) main_usb_pane_t4_ParamLimits

0x3173,	// (0x0001229b) main_usb_pane_t4

0x3185,	// (0x000122ad) main_usb_pane_t5_ParamLimits

0x3185,	// (0x000122ad) main_usb_pane_t5

0x3197,	// (0x000122bf) main_usb_pane_t6_ParamLimits

0x3197,	// (0x000122bf) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0001e6d0) main_usb_pane_t_ParamLimits

0x24a6,	// (0x000115ce) aid_text_placing

0x24af,	// (0x000115d7) main_location2_pane_t1_ParamLimits

0x24c1,	// (0x000115e9) main_location2_pane_t2_ParamLimits

0x24d3,	// (0x000115fb) main_location2_pane_t3_ParamLimits

0x24e5,	// (0x0001160d) main_location2_pane_t4_ParamLimits

0x24e5,	// (0x0001160d) main_location2_pane_t4

0xf3b4,	// (0x0001e4dc) main_location2_pane_t_ParamLimits

0x9b5b,	// (0x00018c83) find_pinb_pane_g2_ParamLimits

0x9b5b,	// (0x00018c83) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0001e22c) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0001e22c) find_pinb_pane_g

0x9b67,	// (0x00018c8f) find_pinb_pane_t1_ParamLimits

0x9b79,	// (0x00018ca1) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0001e231) find_pinb_pane_t_ParamLimits

0x98c4,	// (0x000189ec) main_call3_pane

0x1cfd,	// (0x00010e25) cale_month_day_heading_pane_t1_ParamLimits

0x1d3f,	// (0x00010e67) cale_month_day_heading_pane_t2_ParamLimits

0x1d74,	// (0x00010e9c) cale_month_day_heading_pane_t3_ParamLimits

0x1da9,	// (0x00010ed1) cale_month_day_heading_pane_t4_ParamLimits

0x1de6,	// (0x00010f0e) cale_month_day_heading_pane_t5_ParamLimits

0x1e2b,	// (0x00010f53) cale_month_day_heading_pane_t6_ParamLimits

0x1e70,	// (0x00010f98) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0001e3b3) cale_month_day_heading_pane_t_ParamLimits

0xa1ea,	// (0x00019312) smil_status_volume_pane

0x2c20,	// (0x00011d48) postcard_address_pane_ParamLimits

0x2c20,	// (0x00011d48) postcard_address_pane

0x2c32,	// (0x00011d5a) postcard_message_pane_ParamLimits

0x2c32,	// (0x00011d5a) postcard_message_pane

0x3104,	// (0x0001222c) call2_cli_visual_pane_t1_ParamLimits

0x3104,	// (0x0001222c) call2_cli_visual_pane_t1

0x391f,	// (0x00012a47) postcard_message_pane_t1_ParamLimits

0x391f,	// (0x00012a47) postcard_message_pane_t1

0x3908,	// (0x00012a30) postcard_address_pane_t1_ParamLimits

0x3908,	// (0x00012a30) postcard_address_pane_t1

0x38f4,	// (0x00012a1c) popup_call3_audio_in_window_ParamLimits

0x38f4,	// (0x00012a1c) popup_call3_audio_in_window

0x377f,	// (0x000128a7) bg_popup_call3_in_pane_ParamLimits

0x377f,	// (0x000128a7) bg_popup_call3_in_pane

0x37f5,	// (0x0001291d) popup_call3_audio_in_window_g1_ParamLimits

0x37f5,	// (0x0001291d) popup_call3_audio_in_window_g1

0x3815,	// (0x0001293d) popup_call3_audio_in_window_g2_ParamLimits

0x3815,	// (0x0001293d) popup_call3_audio_in_window_g2

0x3835,	// (0x0001295d) popup_call3_audio_in_window_g3_ParamLimits

0x3835,	// (0x0001295d) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0001e732) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0001e732) popup_call3_audio_in_window_g

0x3866,	// (0x0001298e) popup_call3_audio_in_window_t1_ParamLimits

0x3866,	// (0x0001298e) popup_call3_audio_in_window_t1

0x38a4,	// (0x000129cc) popup_call3_audio_in_window_t2_ParamLimits

0x38a4,	// (0x000129cc) popup_call3_audio_in_window_t2

0x38e2,	// (0x00012a0a) popup_call3_audio_in_window_t3_ParamLimits

0x38e2,	// (0x00012a0a) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0001e73b) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0001e73b) popup_call3_audio_in_window_t

0x9e78,	// (0x00018fa0) bg_popup_call3_rect_pane

0xbbc2,	// (0x0001acea) bg_popup_call3_rect_pane_g1

0x9d20,	// (0x00018e48) bg_popup_call3_rect_pane_g2

0xbbca,	// (0x0001acf2) bg_popup_call3_rect_pane_g3

0xbbd2,	// (0x0001acfa) bg_popup_call3_rect_pane_g4

0xbbda,	// (0x0001ad02) bg_popup_call3_rect_pane_g5

0xbbe2,	// (0x0001ad0a) bg_popup_call3_rect_pane_g6

0xbbea,	// (0x0001ad12) bg_popup_call3_rect_pane_g7

0x27dd,	// (0x00011905) mup_visualizer_osc_pane

0xaa31,	// (0x00019b59) mup_visualizer_spec_pane

0x37af,	// (0x000128d7) call3_video_qcif_pane_ParamLimits

0x37af,	// (0x000128d7) call3_video_qcif_pane

0x37c2,	// (0x000128ea) call3_video_qcif_uncrop_pane_ParamLimits

0x37c2,	// (0x000128ea) call3_video_qcif_uncrop_pane

0x37d0,	// (0x000128f8) call3_video_subqcif_pane_ParamLimits

0x37d0,	// (0x000128f8) call3_video_subqcif_pane

0x37e4,	// (0x0001290c) call3_video_subqcif_uncrop_pane_ParamLimits

0x37e4,	// (0x0001290c) call3_video_subqcif_uncrop_pane

0x3855,	// (0x0001297d) popup_call3_audio_in_window_g4_ParamLimits

0x3855,	// (0x0001297d) popup_call3_audio_in_window_g4

0x376e,	// (0x00012896) mup_spec_half_pane

0x3777,	// (0x0001289f) mup_spec_half_pane_cp

0xbebb,	// (0x0001afe3) mup_osc_middle_pane

0xbec4,	// (0x0001afec) mup_visualizer_osc_pane_g1

0x374e,	// (0x00012876) mup_spec_bar_pane_ParamLimits

0x374e,	// (0x00012876) mup_spec_bar_pane

0xbea8,	// (0x0001afd0) mup_spec_bar_pane_g1

0xbeb2,	// (0x0001afda) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0001e726) mup_spec_bar_pane_g

0x0963,	// (0x0000fa8b) aid_cale_week_size_cell_pane_ParamLimits

0x097d,	// (0x0000faa5) bg_cale_heading_pane_ParamLimits

0x9dd1,	// (0x00018ef9) bg_cale_pane_cp01_ParamLimits

0x0995,	// (0x0000fabd) cale_week_corner_pane_ParamLimits

0x09b4,	// (0x0000fadc) cale_week_day_heading_pane_ParamLimits

0x09d1,	// (0x0000faf9) cale_week_scroll_pane_g1_ParamLimits

0x09e4,	// (0x0000fb0c) cale_week_scroll_pane_g2_ParamLimits

0x09fc,	// (0x0000fb24) cale_week_scroll_pane_g3_ParamLimits

0x0a14,	// (0x0000fb3c) cale_week_scroll_pane_g4_ParamLimits

0x0a2c,	// (0x0000fb54) cale_week_scroll_pane_g5_ParamLimits

0x0a4c,	// (0x0000fb74) cale_week_scroll_pane_g6_ParamLimits

0x0a6c,	// (0x0000fb94) cale_week_scroll_pane_g7_ParamLimits

0x0a8c,	// (0x0000fbb4) cale_week_scroll_pane_g8_ParamLimits

0x0ab0,	// (0x0000fbd8) cale_week_scroll_pane_g9_ParamLimits

0x0ac8,	// (0x0000fbf0) cale_week_scroll_pane_g10_ParamLimits

0x0ae0,	// (0x0000fc08) cale_week_scroll_pane_g11_ParamLimits

0x0af8,	// (0x0000fc20) cale_week_scroll_pane_g12_ParamLimits

0x0b10,	// (0x0000fc38) cale_week_scroll_pane_g13_ParamLimits

0x0b10,	// (0x0000fc38) cale_week_scroll_pane_g14_ParamLimits

0x0b10,	// (0x0000fc38) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0001e2bd) cale_week_scroll_pane_g_ParamLimits

0x0b4c,	// (0x0000fc74) cale_week_time_pane_ParamLimits

0x0b70,	// (0x0000fc98) grid_cale_week_pane_ParamLimits

0x9dee,	// (0x00018f16) listscroll_cale_week_pane_t1

0x9e00,	// (0x00018f28) scroll_pane_cp08_ParamLimits

0x1876,	// (0x0001099e) cale_month_corner_pane_ParamLimits

0xa1b4,	// (0x000192dc) cale_month_pane_t1

0x1c90,	// (0x00010db8) cale_month_week_pane_ParamLimits

0x22d7,	// (0x000113ff) popup_call_status_window_g1_ParamLimits

0x22eb,	// (0x00011413) popup_call_status_window_g2_ParamLimits

0x22ff,	// (0x00011427) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0001e463) popup_call_status_window_g_ParamLimits

0xa592,	// (0x000196ba) aid_call2_pane

0x2a54,	// (0x00011b7c) msg_header_pane_g1

0x2c20,	// (0x00011d48) postcard_address2_pane_ParamLimits

0x2c20,	// (0x00011d48) postcard_address2_pane

0x2c32,	// (0x00011d5a) postcard_message2_pane_ParamLimits

0x2c32,	// (0x00011d5a) postcard_message2_pane

0x36fe,	// (0x00012826) message2_row_pane_ParamLimits

0x36fe,	// (0x00012826) message2_row_pane

0x371b,	// (0x00012843) address2_row_pane_ParamLimits

0x371b,	// (0x00012843) address2_row_pane

0xbe76,	// (0x0001af9e) postcard_message2_row_pane_g1

0xbe7e,	// (0x0001afa6) postcard_message2_row_pane_t1

0xbe76,	// (0x0001af9e) address2_row_pane_g1

0xbe7e,	// (0x0001afa6) address2_row_pane_t1

0x0eaa,	// (0x0000ffd2) aid_size_cell_vorec

0x98c4,	// (0x000189ec) main_rss_pane

0x372e,	// (0x00012856) rss_list_single_pane_ParamLimits

0x372e,	// (0x00012856) rss_list_single_pane

0xbe8c,	// (0x0001afb4) rss_list_single_pane_t1

0xbe9a,	// (0x0001afc2) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0001e721) rss_list_single_pane_t

0x98c4,	// (0x000189ec) main_camera2_pane

0x98c4,	// (0x000189ec) main_video2_pane

0x3998,	// (0x00012ac0) cams_zoom_pane_cp2_ParamLimits

0x3998,	// (0x00012ac0) cams_zoom_pane_cp2

0x39b8,	// (0x00012ae0) image2_vga_pane_ParamLimits

0x39b8,	// (0x00012ae0) image2_vga_pane

0x3a09,	// (0x00012b31) main_camera2_pane_g1_ParamLimits

0x3a09,	// (0x00012b31) main_camera2_pane_g1

0x3a29,	// (0x00012b51) main_camera2_pane_g2_ParamLimits

0x3a29,	// (0x00012b51) main_camera2_pane_g2

0x3a49,	// (0x00012b71) main_camera2_pane_g3_ParamLimits

0x3a49,	// (0x00012b71) main_camera2_pane_g3

0x3a69,	// (0x00012b91) main_camera2_pane_g4_ParamLimits

0x3a69,	// (0x00012b91) main_camera2_pane_g4

0x3a89,	// (0x00012bb1) main_camera2_pane_g5_ParamLimits

0x3a89,	// (0x00012bb1) main_camera2_pane_g5

0x3aa9,	// (0x00012bd1) main_camera2_pane_g6_ParamLimits

0x3aa9,	// (0x00012bd1) main_camera2_pane_g6

0x3ac9,	// (0x00012bf1) main_camera2_pane_g7_ParamLimits

0x3ac9,	// (0x00012bf1) main_camera2_pane_g7

0x3ae9,	// (0x00012c11) main_camera2_pane_g8_ParamLimits

0x3ae9,	// (0x00012c11) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0001e742) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0001e742) main_camera2_pane_g

0x3b29,	// (0x00012c51) main_camera2_pane_t1_ParamLimits

0x3b29,	// (0x00012c51) main_camera2_pane_t1

0x3b5e,	// (0x00012c86) main_camera2_pane_t2_ParamLimits

0x3b5e,	// (0x00012c86) main_camera2_pane_t2

0x3b84,	// (0x00012cac) main_camera2_pane_t3_ParamLimits

0x3b84,	// (0x00012cac) main_camera2_pane_t3

0x3be2,	// (0x00012d0a) main_camera2_pane_t4_ParamLimits

0x3be2,	// (0x00012d0a) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0001e755) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0001e755) main_camera2_pane_t

0x3c74,	// (0x00012d9c) cams_zoom_pane_cp4_ParamLimits

0x3c74,	// (0x00012d9c) cams_zoom_pane_cp4

0x3c8a,	// (0x00012db2) image2_cif_pane_ParamLimits

0x3c8a,	// (0x00012db2) image2_cif_pane

0x3cb5,	// (0x00012ddd) image2_subqcif_pane_ParamLimits

0x3cb5,	// (0x00012ddd) image2_subqcif_pane

0x3ccf,	// (0x00012df7) main_video2_pane_g1_ParamLimits

0x3ccf,	// (0x00012df7) main_video2_pane_g1

0x3ce9,	// (0x00012e11) main_video2_pane_g2_ParamLimits

0x3ce9,	// (0x00012e11) main_video2_pane_g2

0x3cff,	// (0x00012e27) main_video2_pane_g3_ParamLimits

0x3cff,	// (0x00012e27) main_video2_pane_g3

0x3d15,	// (0x00012e3d) main_video2_pane_g4_ParamLimits

0x3d15,	// (0x00012e3d) main_video2_pane_g4

0x3d2b,	// (0x00012e53) main_video2_pane_g5_ParamLimits

0x3d2b,	// (0x00012e53) main_video2_pane_g5

0x3d41,	// (0x00012e69) main_video2_pane_g6_ParamLimits

0x3d41,	// (0x00012e69) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0001e764) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0001e764) main_video2_pane_g

0x3d5b,	// (0x00012e83) main_video2_pane_t1_ParamLimits

0x3d5b,	// (0x00012e83) main_video2_pane_t1

0x3d7f,	// (0x00012ea7) main_video2_pane_t2_ParamLimits

0x3d7f,	// (0x00012ea7) main_video2_pane_t2

0x3dcd,	// (0x00012ef5) main_video2_pane_t3_ParamLimits

0x3dcd,	// (0x00012ef5) main_video2_pane_t3

0x0002,

0xf649,	// (0x0001e771) main_video2_pane_t_ParamLimits

0xf649,	// (0x0001e771) main_video2_pane_t

0x3252,	// (0x0001237a) call_muted_g2

0x0001,

0xf5eb,	// (0x0001e713) call_muted_g

0x98c4,	// (0x000189ec) main_mup2_pane

0x3e15,	// (0x00012f3d) main_mup2_pane_g1_ParamLimits

0x3e15,	// (0x00012f3d) main_mup2_pane_g1

0x3e21,	// (0x00012f49) main_mup2_pane_g2_ParamLimits

0x3e21,	// (0x00012f49) main_mup2_pane_g2

0xc02c,	// (0x0001b154) main_mup_pane_g13_cp1

0xc034,	// (0x0001b15c) mup_volume_pane_cp1

0x3e3d,	// (0x00012f65) main_mup2_pane_g4_ParamLimits

0x3e3d,	// (0x00012f65) main_mup2_pane_g4

0x3e4f,	// (0x00012f77) main_mup2_pane_g5_ParamLimits

0x3e4f,	// (0x00012f77) main_mup2_pane_g5

0x3e61,	// (0x00012f89) main_mup2_pane_g6_ParamLimits

0x3e61,	// (0x00012f89) main_mup2_pane_g6

0x3e73,	// (0x00012f9b) main_mup2_pane_g7_ParamLimits

0x3e73,	// (0x00012f9b) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0001e778) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0001e778) main_mup2_pane_g

0x3e8b,	// (0x00012fb3) main_mup2_pane_t1_ParamLimits

0x3e8b,	// (0x00012fb3) main_mup2_pane_t1

0x3ea1,	// (0x00012fc9) main_mup2_pane_t2_ParamLimits

0x3ea1,	// (0x00012fc9) main_mup2_pane_t2

0x3eb7,	// (0x00012fdf) main_mup2_pane_t3_ParamLimits

0x3eb7,	// (0x00012fdf) main_mup2_pane_t3

0x3ecd,	// (0x00012ff5) main_mup2_pane_t4_ParamLimits

0x3ecd,	// (0x00012ff5) main_mup2_pane_t4

0x3ee5,	// (0x0001300d) main_mup2_pane_t5_ParamLimits

0x3ee5,	// (0x0001300d) main_mup2_pane_t5

0x3efd,	// (0x00013025) main_mup2_pane_t6_ParamLimits

0x3efd,	// (0x00013025) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0001e787) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0001e787) main_mup2_pane_t

0x3f2d,	// (0x00013055) mup2_visualizer_pane_ParamLimits

0x3f2d,	// (0x00013055) mup2_visualizer_pane

0x3f5b,	// (0x00013083) mup_progress_pane_cp_ParamLimits

0x3f5b,	// (0x00013083) mup_progress_pane_cp

0xc00e,	// (0x0001b136) mup_volume_pane_cp_ParamLimits

0xc00e,	// (0x0001b136) mup_volume_pane_cp

0x3f6f,	// (0x00013097) mup2_visualizer_pane_g1_ParamLimits

0x3f6f,	// (0x00013097) mup2_visualizer_pane_g1

0xbf4d,	// (0x0001b075) mup2_visualizer_pane_g2_ParamLimits

0xbf4d,	// (0x0001b075) mup2_visualizer_pane_g2

0x3f86,	// (0x000130ae) mup2_visualizer_pane_g3_ParamLimits

0x3f86,	// (0x000130ae) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0001e794) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0001e794) mup2_visualizer_pane_g

0xac9a,	// (0x00019dc2) aid_size_cell_fmradio

0x3404,	// (0x0001252c) aid_height_parent_landcape

0xa012,	// (0x0001913a) wml_content_pane_cp

0xa01a,	// (0x00019142) wml_tabs_pane

0xa023,	// (0x0001914b) popup_wml_miniature_window

0xa02b,	// (0x00019153) scroll_pane_cp021

0xa03f,	// (0x00019167) wml_content_pane_comp8

0x98c4,	// (0x000189ec) bg_popup_sub_pane_cp05

0xbf6b,	// (0x0001b093) popup_wml_miniature_window_g1

0xbf73,	// (0x0001b09b) wml_miniature_view_pane

0x3f92,	// (0x000130ba) aid_size_wml_view

0x3f9a,	// (0x000130c2) wml_miniature_view_pane_g1

0x3fa3,	// (0x000130cb) wml_miniature_view_pane_g2

0x3fac,	// (0x000130d4) wml_miniature_view_pane_g3

0x3fb4,	// (0x000130dc) wml_miniature_view_pane_g4

0x3fbc,	// (0x000130e4) wml_miniature_view_pane_g5

0x3fc4,	// (0x000130ec) wml_miniature_view_pane_g6

0x3fcc,	// (0x000130f4) wml_miniature_view_pane_g7

0x3fd4,	// (0x000130fc) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0001e79b) wml_miniature_view_pane_g

0xbf7b,	// (0x0001b0a3) background_graphic_ParamLimits

0xbf7b,	// (0x0001b0a3) background_graphic

0xbf87,	// (0x0001b0af) wml_tabs_2_pane

0xbf90,	// (0x0001b0b8) wml_tabs_3_pane_ParamLimits

0xbf90,	// (0x0001b0b8) wml_tabs_3_pane

0xbfa2,	// (0x0001b0ca) wml_tabs_4_pane_ParamLimits

0xbfa2,	// (0x0001b0ca) wml_tabs_4_pane

0xbfb8,	// (0x0001b0e0) wml_tabs_5_pane_ParamLimits

0xbfb8,	// (0x0001b0e0) wml_tabs_5_pane

0xbfd2,	// (0x0001b0fa) wml_tabs_pane_g2_ParamLimits

0xbfd2,	// (0x0001b0fa) wml_tabs_pane_g2

0xbfe6,	// (0x0001b10e) wml_tabs_pane_g3_ParamLimits

0xbfe6,	// (0x0001b10e) wml_tabs_pane_g3

0x3fdc,	// (0x00013104) wml_tabs_2_active_pane_ParamLimits

0x3fdc,	// (0x00013104) wml_tabs_2_active_pane

0x3ff0,	// (0x00013118) wml_tabs_2_passive_pane_ParamLimits

0x3ff0,	// (0x00013118) wml_tabs_2_passive_pane

0x4004,	// (0x0001312c) wml_tabs_3_active_pane_cp_ParamLimits

0x4004,	// (0x0001312c) wml_tabs_3_active_pane_cp

0x4019,	// (0x00013141) wml_tabs_3_passive_pane_ParamLimits

0x4019,	// (0x00013141) wml_tabs_3_passive_pane

0x402c,	// (0x00013154) wml_tabs_3_passive_pane_cp_ParamLimits

0x402c,	// (0x00013154) wml_tabs_3_passive_pane_cp

0x4043,	// (0x0001316b) tabs_4_active_pane

0x404b,	// (0x00013173) tabs_4_passive_pane

0x4055,	// (0x0001317d) tabs_4_passive_pane_cp

0x405d,	// (0x00013185) tabs_4_passive_pane_cp2

0x311f,	// (0x00012247) aid_height_text

0x27af,	// (0x000118d7) mup_volume_cont_pane_ParamLimits

0x27af,	// (0x000118d7) mup_volume_cont_pane

0x0587,	// (0x0000f6af) aid_size_cell_pinb

0x0591,	// (0x0000f6b9) aid_size_list_pinb

0x3f47,	// (0x0001306f) mup2_volume_cont_pane_ParamLimits

0x3f47,	// (0x0001306f) mup2_volume_cont_pane

0xbffa,	// (0x0001b122) mup2_volume_cont_pane_g1_ParamLimits

0xbffa,	// (0x0001b122) mup2_volume_cont_pane_g1

0x0249,	// (0x0000f371) aid_size_cell_touch_ParamLimits

0x0249,	// (0x0000f371) aid_size_cell_touch

0x0476,	// (0x0000f59e) touch_pane_ParamLimits

0x0476,	// (0x0000f59e) touch_pane

0x9433,	// (0x0001855b) main_rss2_pane

0xc03c,	// (0x0001b164) listscroll_rss2_pane

0xc045,	// (0x0001b16d) rss2_navigation_pane

0xc04d,	// (0x0001b175) list_rss2_pane

0xa726,	// (0x0001984e) scroll_pane_cp22

0xc055,	// (0x0001b17d) rss2_navigation_pane_g1

0xc05e,	// (0x0001b186) rss2_navigation_pane_g2

0xc066,	// (0x0001b18e) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0001e7ac) rss2_navigation_pane_g

0xc06e,	// (0x0001b196) rss2_navigation_pane_t1

0x4067,	// (0x0001318f) rss2_list_single_pane_ParamLimits

0x4067,	// (0x0001318f) rss2_list_single_pane

0xc07c,	// (0x0001b1a4) rss2_list_single_pane_t2

0xc08a,	// (0x0001b1b2) rss2_list_single_pane_t3_ParamLimits

0xc08a,	// (0x0001b1b2) rss2_list_single_pane_t3

0xc0a7,	// (0x0001b1cf) rss2_list_single_pane_t4

0x20e2,	// (0x0001120a) smil_status_pane_g1

0x94a3,	// (0x000185cb) main_image2_pane_ParamLimits

0x94a3,	// (0x000185cb) main_image2_pane

0x3b09,	// (0x00012c31) main_camera2_pane_g9_ParamLimits

0x3b09,	// (0x00012c31) main_camera2_pane_g9

0x3c37,	// (0x00012d5f) main_camera2_pane_t5_ParamLimits

0x3c37,	// (0x00012d5f) main_camera2_pane_t5

0xbf1d,	// (0x0001b045) main_camera2_pane_t6_ParamLimits

0xbf1d,	// (0x0001b045) main_camera2_pane_t6

0x407d,	// (0x000131a5) main_image2_pane_g1_ParamLimits

0x407d,	// (0x000131a5) main_image2_pane_g1

0x2e5a,	// (0x00011f82) smil2_video_pane_ParamLimits

0x2e5a,	// (0x00011f82) smil2_video_pane

0x9451,	// (0x00018579) aid_zoom_text_primary_cp

0x9499,	// (0x000185c1) popup_preview_fixed_window

0x9f7b,	// (0x000190a3) im_reading_pane_g1

0x3980,	// (0x00012aa8) cams2_bc_adjust_pane_cp_ParamLimits

0x3980,	// (0x00012aa8) cams2_bc_adjust_pane_cp

0x3c66,	// (0x00012d8e) cams2_bc_adjust_pane_ParamLimits

0x3c66,	// (0x00012d8e) cams2_bc_adjust_pane

0xc0b5,	// (0x0001b1dd) cams2_bc_adjust_pane_g1

0xc0bd,	// (0x0001b1e5) cams2_slider_pane

0xc0c6,	// (0x0001b1ee) cams2_slider_pane_g1

0xc0cf,	// (0x0001b1f7) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0001e7b3) cams2_slider_pane_g

0x0679,	// (0x0000f7a1) calc_display_pane_ParamLimits

0x069e,	// (0x0000f7c6) calc_paper_pane_ParamLimits

0x06c1,	// (0x0000f7e9) grid_calc_pane_ParamLimits

0xa5f4,	// (0x0001971c) popup_clock_digital_window_t1_ParamLimits

0xac37,	// (0x00019d5f) main_image_pane_t1

0x065b,	// (0x0000f783) aid_size_cell_calc_ParamLimits

0x065b,	// (0x0000f783) aid_size_cell_calc

0x344a,	// (0x00012572) popup_blid_sat_info2_window_ParamLimits

0x344a,	// (0x00012572) popup_blid_sat_info2_window

0xc0f1,	// (0x0001b219) aid_size_cell_blid

0xc0f9,	// (0x0001b221) bg_popup_window_pane_cp07

0xc11c,	// (0x0001b244) grid_popup_blid_pane

0xc126,	// (0x0001b24e) heading_pane_cp05_ParamLimits

0xc126,	// (0x0001b24e) heading_pane_cp05

0xc1f0,	// (0x0001b318) cell_popup_blid_pane_ParamLimits

0xc1f0,	// (0x0001b318) cell_popup_blid_pane

0xc214,	// (0x0001b33c) cell_popup_blid_pane_g1

0xc21c,	// (0x0001b344) cell_popup_blid_pane_t1

0x3f17,	// (0x0001303f) mup2_indicator_pane_ParamLimits

0x3f17,	// (0x0001303f) mup2_indicator_pane

0x9e78,	// (0x00018fa0) mup2_visualizer_osc_pane

0xbf59,	// (0x0001b081) mup2_visualizer_spec_pane_ParamLimits

0xbf59,	// (0x0001b081) mup2_visualizer_spec_pane

0x4093,	// (0x000131bb) mup2_spec_half_pane

0x409c,	// (0x000131c4) mup2_spec_half_pane_cp

0x40a4,	// (0x000131cc) mup2_spec_bar_pane_ParamLimits

0x40a4,	// (0x000131cc) mup2_spec_bar_pane

0xbea8,	// (0x0001afd0) mup2_spec_bar_pane_g1

0xbeb2,	// (0x0001afda) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0001e726) mup2_spec_bar_pane_g

0x40c4,	// (0x000131ec) mup2_osc_middle_pane

0xbec4,	// (0x0001afec) mup2_visualizer_osc_pane_g1

0x94d1,	// (0x000185f9) popup_number_entry_window_t1_ParamLimits

0x94e4,	// (0x0001860c) popup_number_entry_window_t2_ParamLimits

0x94f6,	// (0x0001861e) popup_number_entry_window_t3_ParamLimits

0x04c8,	// (0x0000f5f0) popup_number_entry_window_t5_ParamLimits

0x04c8,	// (0x0000f5f0) popup_number_entry_window_t5

0xf0af,	// (0x0001e1d7) popup_number_entry_window_t_ParamLimits

0x9508,	// (0x00018630) text_title_cp2_ParamLimits

0xab11,	// (0x00019c39) aid_hotspot_pointer_text2_pane

0xab37,	// (0x00019c5f) main_viewer_pane_g9_ParamLimits

0xab37,	// (0x00019c5f) main_viewer_pane_g9

0xa1b4,	// (0x000192dc) cale_month_pane_t1_ParamLimits

0xa21f,	// (0x00019347) bg_cale_pane_ParamLimits

0xa237,	// (0x0001935f) list_cale_pane_ParamLimits

0xa248,	// (0x00019370) listscroll_cale_day_pane_t1

0xa25a,	// (0x00019382) scroll_pane_cp09_ParamLimits

0x27e5,	// (0x0001190d) main_mup_eq_pane_t1_ParamLimits

0x27e5,	// (0x0001190d) main_mup_eq_pane_t1

0x27ff,	// (0x00011927) main_mup_eq_pane_t2_ParamLimits

0x27ff,	// (0x00011927) main_mup_eq_pane_t2

0x2819,	// (0x00011941) main_mup_eq_pane_t3_ParamLimits

0x2819,	// (0x00011941) main_mup_eq_pane_t3

0x2835,	// (0x0001195d) main_mup_eq_pane_t4_ParamLimits

0x2835,	// (0x0001195d) main_mup_eq_pane_t4

0x2851,	// (0x00011979) main_mup_eq_pane_t5_ParamLimits

0x2851,	// (0x00011979) main_mup_eq_pane_t5

0x286d,	// (0x00011995) main_mup_eq_pane_t6_ParamLimits

0x286d,	// (0x00011995) main_mup_eq_pane_t6

0x2881,	// (0x000119a9) main_mup_eq_pane_t7_ParamLimits

0x2881,	// (0x000119a9) main_mup_eq_pane_t7

0x2895,	// (0x000119bd) main_mup_eq_pane_t8_ParamLimits

0x2895,	// (0x000119bd) main_mup_eq_pane_t8

0x28a9,	// (0x000119d1) main_mup_eq_pane_t9_ParamLimits

0x28a9,	// (0x000119d1) main_mup_eq_pane_t9

0x28c3,	// (0x000119eb) main_mup_eq_pane_t10_ParamLimits

0x28c3,	// (0x000119eb) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0001e562) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0001e562) main_mup_eq_pane_t

0x2972,	// (0x00011a9a) mup_equalizer_pane_cp5_ParamLimits

0x2986,	// (0x00011aae) mup_equalizer_pane_cp6_ParamLimits

0x299a,	// (0x00011ac2) mup_equalizer_pane_cp7_ParamLimits

0x9433,	// (0x0001855b) main_gallery_pane

0xbecd,	// (0x0001aff5) smil2_volume_pane

0xbed5,	// (0x0001affd) smil_status_volume_pane_g1_ParamLimits

0xbee8,	// (0x0001b010) smil_status_volume_pane_g2_ParamLimits

0xbefb,	// (0x0001b023) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0001e72b) smil_status_volume_pane_g_ParamLimits

0xc0f9,	// (0x0001b221) bg_popup_window_pane_cp07_ParamLimits

0xc107,	// (0x0001b22f) blid_firmament_pane

0x40cd,	// (0x000131f5) aid_size_cell_gallery_ParamLimits

0x40cd,	// (0x000131f5) aid_size_cell_gallery

0x40e3,	// (0x0001320b) grid_gallery_pane_ParamLimits

0x40e3,	// (0x0001320b) grid_gallery_pane

0x40fc,	// (0x00013224) cell_gallery_pane_ParamLimits

0x40fc,	// (0x00013224) cell_gallery_pane

0xc22a,	// (0x0001b352) bg_cell_gallery_focus_pane_ParamLimits

0xc22a,	// (0x0001b352) bg_cell_gallery_focus_pane

0xc23c,	// (0x0001b364) cell_gallery_pane_g1_ParamLimits

0xc23c,	// (0x0001b364) cell_gallery_pane_g1

0x4145,	// (0x0001326d) cell_gallery_pane_g2_ParamLimits

0x4145,	// (0x0001326d) cell_gallery_pane_g2

0x4152,	// (0x0001327a) cell_gallery_pane_g3_ParamLimits

0x4152,	// (0x0001327a) cell_gallery_pane_g3

0xc248,	// (0x0001b370) cell_gallery_pane_g4_ParamLimits

0xc248,	// (0x0001b370) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0001e7d9) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0001e7d9) cell_gallery_pane_g

0xc254,	// (0x0001b37c) bg_cell_gallery_focus_pane_g1

0xc25c,	// (0x0001b384) bg_cell_gallery_focus_pane_g2

0xc264,	// (0x0001b38c) bg_cell_gallery_focus_pane_g3

0xc26c,	// (0x0001b394) bg_cell_gallery_focus_pane_g4

0xc274,	// (0x0001b39c) bg_cell_gallery_focus_pane_g5

0xc27c,	// (0x0001b3a4) bg_cell_gallery_focus_pane_g6

0xc284,	// (0x0001b3ac) bg_cell_gallery_focus_pane_g7

0xc28c,	// (0x0001b3b4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0001e7e2) bg_cell_gallery_focus_pane_g

0xc294,	// (0x0001b3bc) aid_firma_cardinal

0xc2a8,	// (0x0001b3d0) blid_firmament_pane_t1

0xc2bf,	// (0x0001b3e7) blid_firmament_pane_t2

0xc2d6,	// (0x0001b3fe) blid_firmament_pane_t3

0xc2ed,	// (0x0001b415) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0001e7f3) blid_firmament_pane_t

0xc304,	// (0x0001b42c) blid_sat_info_pane

0xc314,	// (0x0001b43c) blid_sat_info_pane_g1

0xc314,	// (0x0001b43c) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0001e7fc) blid_sat_info_pane_g

0xc31e,	// (0x0001b446) blid_sat_info_pane_t1

0xc32c,	// (0x0001b454) smil2_volume_content_pane

0xc335,	// (0x0001b45d) smil2_volume_pane_g1

0x9cb7,	// (0x00018ddf) smil2_volume_content_pane_g1

0xc33d,	// (0x0001b465) smil2_volume_content_pane_g2

0xc346,	// (0x0001b46e) smil2_volume_content_pane_g3

0xc34f,	// (0x0001b477) smil2_volume_content_pane_g4

0xc358,	// (0x0001b480) smil2_volume_content_pane_g5

0xc361,	// (0x0001b489) smil2_volume_content_pane_g6

0xc36a,	// (0x0001b492) smil2_volume_content_pane_g7

0xc373,	// (0x0001b49b) smil2_volume_content_pane_g8

0xc37c,	// (0x0001b4a4) smil2_volume_content_pane_g9

0xc385,	// (0x0001b4ad) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0001e801) smil2_volume_content_pane_g

0x0c24,	// (0x0000fd4c) cale_week_day_heading_pane_t1_ParamLimits

0x0c4e,	// (0x0000fd76) cale_week_day_heading_pane_t2_ParamLimits

0x0c7d,	// (0x0000fda5) cale_week_day_heading_pane_t3_ParamLimits

0x0cac,	// (0x0000fdd4) cale_week_day_heading_pane_t4_ParamLimits

0x0cdb,	// (0x0000fe03) cale_week_day_heading_pane_t5_ParamLimits

0x0d12,	// (0x0000fe3a) cale_week_day_heading_pane_t6_ParamLimits

0x0d49,	// (0x0000fe71) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0001e2de) cale_week_day_heading_pane_t_ParamLimits

0x9e1d,	// (0x00018f45) bg_cale_side_pane_ParamLimits

0x0d73,	// (0x0000fe9b) cale_week_time_pane_t1_ParamLimits

0x0d8d,	// (0x0000feb5) cale_week_time_pane_t2_ParamLimits

0x0da7,	// (0x0000fecf) cale_week_time_pane_t3_ParamLimits

0x0dc1,	// (0x0000fee9) cale_week_time_pane_t4_ParamLimits

0x0ddb,	// (0x0000ff03) cale_week_time_pane_t5_ParamLimits

0x0df5,	// (0x0000ff1d) cale_week_time_pane_t6_ParamLimits

0x0e0f,	// (0x0000ff37) cale_week_time_pane_t7_ParamLimits

0x0e29,	// (0x0000ff51) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0001e2ed) cale_week_time_pane_t_ParamLimits

0x0e49,	// (0x0000ff71) cell_cale_week_pane_g2_ParamLimits

0x9e1d,	// (0x00018f45) bg_cale_side_pane_cp01_ParamLimits

0x1ebd,	// (0x00010fe5) cale_month_week_pane_t1_ParamLimits

0x1ed6,	// (0x00010ffe) cale_month_week_pane_t2_ParamLimits

0x1eef,	// (0x00011017) cale_month_week_pane_t3_ParamLimits

0x1f08,	// (0x00011030) cale_month_week_pane_t4_ParamLimits

0x1f21,	// (0x00011049) cale_month_week_pane_t5_ParamLimits

0x1f3a,	// (0x00011062) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0001e3c2) cale_month_week_pane_t_ParamLimits

0xa1c6,	// (0x000192ee) cell_cale_month_pane_g1_ParamLimits

0x9433,	// (0x0001855b) main_cale_event_viewer_pane

0x9433,	// (0x0001855b) listscroll_cale_event_viewer_pane

0xc38e,	// (0x0001b4b6) list_cale_ev_pane

0xc396,	// (0x0001b4be) scroll_pane_cp023

0xc3a2,	// (0x0001b4ca) field_cale_ev_pane_ParamLimits

0xc3a2,	// (0x0001b4ca) field_cale_ev_pane

0xc3c0,	// (0x0001b4e8) field_cale_ev_content_pane_ParamLimits

0xc3c0,	// (0x0001b4e8) field_cale_ev_content_pane

0xc3cc,	// (0x0001b4f4) field_cale_ev_pane_g1_ParamLimits

0xc3cc,	// (0x0001b4f4) field_cale_ev_pane_g1

0xc3d8,	// (0x0001b500) field_cale_ev_pane_g2_ParamLimits

0xc3d8,	// (0x0001b500) field_cale_ev_pane_g2

0xc3f0,	// (0x0001b518) field_cale_ev_pane_g3_ParamLimits

0xc3f0,	// (0x0001b518) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0001e816) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0001e816) field_cale_ev_pane_g

0xc408,	// (0x0001b530) field_cale_ev_pane_t1_ParamLimits

0xc408,	// (0x0001b530) field_cale_ev_pane_t1

0x9d3a,	// (0x00018e62) field_cale_ev_content_pane_t1_ParamLimits

0x9d3a,	// (0x00018e62) field_cale_ev_content_pane_t1

0xaadb,	// (0x00019c03) bg_button_pane_cp01

0x0951,	// (0x0000fa79) listscroll_cale_week_pane_ParamLimits

0x9dc8,	// (0x00018ef0) popup_toolbar_window_cp01

0x9dee,	// (0x00018f16) listscroll_cale_week_pane_t1_ParamLimits

0x0951,	// (0x0000fa79) listscroll_cale_day_pane_ParamLimits

0x9dc8,	// (0x00018ef0) popup_toolbar_window_cp02

0xa248,	// (0x00019370) listscroll_cale_day_pane_t1_ParamLimits

0x0951,	// (0x0000fa79) main_cale_month_pane_ParamLimits

0xbe46,	// (0x0001af6e) popup_toolbar_window_cp03_ParamLimits

0xbe46,	// (0x0001af6e) popup_toolbar_window_cp03

0x2d22,	// (0x00011e4a) main_image_pane_g2_ParamLimits

0x2d22,	// (0x00011e4a) main_image_pane_g2

0x2d33,	// (0x00011e5b) main_image_pane_g3_ParamLimits

0x2d33,	// (0x00011e5b) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0001e5f4) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0001e5f4) main_image_pane_g

0xac37,	// (0x00019d5f) main_image_pane_t1_ParamLimits

0x2d44,	// (0x00011e6c) main_image_pane_t2_ParamLimits

0x2d44,	// (0x00011e6c) main_image_pane_t2

0x2d56,	// (0x00011e7e) main_image_pane_t3_ParamLimits

0x2d56,	// (0x00011e7e) main_image_pane_t3

0x2d7e,	// (0x00011ea6) main_image_pane_t4_ParamLimits

0x2d7e,	// (0x00011ea6) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0001e5fb) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0001e5fb) main_image_pane_t

0x2d9e,	// (0x00011ec6) popup_image_details_window_cp01

0x2da8,	// (0x00011ed0) popup_toobar_trans_pane_cp01_ParamLimits

0x2da8,	// (0x00011ed0) popup_toobar_trans_pane_cp01

0x351b,	// (0x00012643) popup_image_details_window_ParamLimits

0x351b,	// (0x00012643) popup_image_details_window

0xbe19,	// (0x0001af41) popup_image_focus_window

0x393a,	// (0x00012a62) camera2_autofocus_pane_ParamLimits

0x393a,	// (0x00012a62) camera2_autofocus_pane

0x9433,	// (0x0001855b) bg_popup_sub_pane_cp06

0xc41f,	// (0x0001b547) popup_image_focus_window_g1

0xc427,	// (0x0001b54f) popup_image_focus_window_g2

0xc42f,	// (0x0001b557) popup_image_focus_window_g3

0xc437,	// (0x0001b55f) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0001e81d) popup_image_focus_window_g

0xc43f,	// (0x0001b567) popup_image_focus_window_t1

0xc44d,	// (0x0001b575) popup_image_focus_window_t2

0xc45d,	// (0x0001b585) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0001e826) popup_image_focus_window_t

0xc46b,	// (0x0001b593) camera2_autofocus_pane_g1

0x94a3,	// (0x000185cb) bg_tb_trans_pane_cp01

0xc479,	// (0x0001b5a1) popup_image_details_window_g1

0xc48c,	// (0x0001b5b4) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0001e838) popup_image_details_window_g

0xc4b5,	// (0x0001b5dd) popup_image_details_window_t1

0xc4c7,	// (0x0001b5ef) popup_image_details_window_t2

0xc4e0,	// (0x0001b608) popup_image_details_window_t3

0xc4f4,	// (0x0001b61c) popup_image_details_window_t4

0xc50f,	// (0x0001b637) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0001e83f) popup_image_details_window_t

0x9be4,	// (0x00018d0c) bg_calc_paper_pane_ParamLimits

0x9433,	// (0x0001855b) grid_highlight_pane_cp013

0x9bf8,	// (0x00018d20) list_calc_pane_ParamLimits

0x9c0a,	// (0x00018d32) scroll_pane_cp024

0x9c12,	// (0x00018d3a) bg_calc_display_pane_ParamLimits

0x07bf,	// (0x0000f8e7) calc_display_pane_t1_ParamLimits

0x07d1,	// (0x0000f8f9) calc_display_pane_t2_ParamLimits

0x9c1e,	// (0x00018d46) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0001e25e) calc_display_pane_t_ParamLimits

0x088b,	// (0x0000f9b3) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0001e27b) cell_calc_pane_g

0x0894,	// (0x0000f9bc) cell_calc_pane_t1

0x9c95,	// (0x00018dbd) grid_highlight_pane_cp02_ParamLimits

0x9cab,	// (0x00018dd3) toolbar_button_pane_cp01_ParamLimits

0x9cab,	// (0x00018dd3) toolbar_button_pane_cp01

0xac7c,	// (0x00019da4) temp_image_control_pane_ParamLimits

0xac7c,	// (0x00019da4) temp_image_control_pane

0x94a3,	// (0x000185cb) main_mp3_pane

0xc529,	// (0x0001b651) temp_image_control_pane_g1_ParamLimits

0xc529,	// (0x0001b651) temp_image_control_pane_g1

0xc537,	// (0x0001b65f) temp_image_control_pane_g2_ParamLimits

0xc537,	// (0x0001b65f) temp_image_control_pane_g2

0xc549,	// (0x0001b671) temp_image_control_pane_g3_ParamLimits

0xc549,	// (0x0001b671) temp_image_control_pane_g3

0x418f,	// (0x000132b7) temp_image_control_pane_g4_ParamLimits

0x418f,	// (0x000132b7) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0001e84a) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0001e84a) temp_image_control_pane_g

0xc529,	// (0x0001b651) main_mp3_pane_g1

0x41a2,	// (0x000132ca) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0001e853) main_mp3_pane_g

0xc58c,	// (0x0001b6b4) main_mp3_pane_t1

0x9e8a,	// (0x00018fb2) main_camera_pane_g8_ParamLimits

0x9e8a,	// (0x00018fb2) main_camera_pane_g8

0x114d,	// (0x00010275) main_video_pane_g7_ParamLimits

0x114d,	// (0x00010275) main_video_pane_g7

0xbf3b,	// (0x0001b063) main_camera2_pane_t7_ParamLimits

0xbf3b,	// (0x0001b063) main_camera2_pane_t7

0x9fd2,	// (0x000190fa) scroll_pane_cp025_ParamLimits

0x9fd2,	// (0x000190fa) scroll_pane_cp025

0x9fe6,	// (0x0001910e) scroll_pane_cp026_ParamLimits

0x9fe6,	// (0x0001910e) scroll_pane_cp026

0x9ff5,	// (0x0001911d) wml_content_pane_ParamLimits

0x9433,	// (0x0001855b) main_touch_calib_pane

0x4276,	// (0x0001339e) main_touch_calib_pane_g1

0x4288,	// (0x000133b0) main_touch_calib_pane_g2

0x429a,	// (0x000133c2) main_touch_calib_pane_g3

0x42ac,	// (0x000133d4) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0001e871) main_touch_calib_pane_g

0x42be,	// (0x000133e6) main_touch_calib_pane_t1

0x42d8,	// (0x00013400) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0001e87a) main_touch_calib_pane_t

0xa7f5,	// (0x0001991d) mup_progress_pane_cp02

0xa82a,	// (0x00019952) navi_pane_g1

0xa8e5,	// (0x00019a0d) navi_pane_mp_t3

0x94a3,	// (0x000185cb) main_mp3_pane_ParamLimits

0x36a6,	// (0x000127ce) navi_pane_ParamLimits

0xc529,	// (0x0001b651) main_mp3_pane_g1_ParamLimits

0x41a2,	// (0x000132ca) main_mp3_pane_g2_ParamLimits

0x41b0,	// (0x000132d8) main_mp3_pane_g3_ParamLimits

0x41b0,	// (0x000132d8) main_mp3_pane_g3

0x41be,	// (0x000132e6) main_mp3_pane_g4_ParamLimits

0x41be,	// (0x000132e6) main_mp3_pane_g4

0xc559,	// (0x0001b681) main_mp3_pane_g5_ParamLimits

0xc559,	// (0x0001b681) main_mp3_pane_g5

0xc567,	// (0x0001b68f) main_mp3_pane_g6_ParamLimits

0xc567,	// (0x0001b68f) main_mp3_pane_g6

0xc574,	// (0x0001b69c) main_mp3_pane_g7_ParamLimits

0xc574,	// (0x0001b69c) main_mp3_pane_g7

0xc580,	// (0x0001b6a8) main_mp3_pane_g8_ParamLimits

0xc580,	// (0x0001b6a8) main_mp3_pane_g8

0xf72b,	// (0x0001e853) main_mp3_pane_g_ParamLimits

0x41ca,	// (0x000132f2) main_mp3_pane_t2

0x41d8,	// (0x00013300) main_mp3_pane_t3

0xc59a,	// (0x0001b6c2) main_mp3_pane_t4

0xc5a8,	// (0x0001b6d0) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0001e864) main_mp3_pane_t

0xc5b6,	// (0x0001b6de) mup_progress_pane_cp01

0x9451,	// (0x00018579) aid_zoom_text_secondary2

0xc38e,	// (0x0001b4b6) list_cale_ev2_pane

0xc396,	// (0x0001b4be) scroll_pane_cp023_ParamLimits

0x432e,	// (0x00013456) field_cale_ev2_pane_ParamLimits

0x432e,	// (0x00013456) field_cale_ev2_pane

0xc5be,	// (0x0001b6e6) field_cale_ev2_pane_g1_ParamLimits

0xc5be,	// (0x0001b6e6) field_cale_ev2_pane_g1

0xc5ca,	// (0x0001b6f2) field_cale_ev2_pane_g2_ParamLimits

0xc5ca,	// (0x0001b6f2) field_cale_ev2_pane_g2

0xc5e2,	// (0x0001b70a) field_cale_ev2_pane_g3_ParamLimits

0xc5e2,	// (0x0001b70a) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0001e885) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0001e885) field_cale_ev2_pane_g

0xc606,	// (0x0001b72e) field_cale_ev2_pane_t1_ParamLimits

0xc606,	// (0x0001b72e) field_cale_ev2_pane_t1

0xc61d,	// (0x0001b745) field_cale_ev2_pane_t2_ParamLimits

0xc61d,	// (0x0001b745) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0001e88e) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0001e88e) field_cale_ev2_pane_t

0x2bd6,	// (0x00011cfe) main_postcard_pane_g5_ParamLimits

0x2bd6,	// (0x00011cfe) main_postcard_pane_g5

0x2bec,	// (0x00011d14) main_postcard_pane_g6_ParamLimits

0x2bec,	// (0x00011d14) main_postcard_pane_g6

0x0f13,	// (0x0001003b) camera2_autofocus_pane_cp_ParamLimits

0x0f13,	// (0x0001003b) camera2_autofocus_pane_cp

0x94a3,	// (0x000185cb) main_mup3_pane

0x4393,	// (0x000134bb) main_mup3_pane_g1_ParamLimits

0x4393,	// (0x000134bb) main_mup3_pane_g1

0x43b5,	// (0x000134dd) main_mup3_pane_g2_ParamLimits

0x43b5,	// (0x000134dd) main_mup3_pane_g2

0x4435,	// (0x0001355d) main_mup3_pane_g3_ParamLimits

0x4435,	// (0x0001355d) main_mup3_pane_g3

0x447b,	// (0x000135a3) main_mup3_pane_g4_ParamLimits

0x447b,	// (0x000135a3) main_mup3_pane_g4

0x44c1,	// (0x000135e9) main_mup3_pane_g5_ParamLimits

0x44c1,	// (0x000135e9) main_mup3_pane_g5

0x4507,	// (0x0001362f) main_mup3_pane_g6_ParamLimits

0x4507,	// (0x0001362f) main_mup3_pane_g6

0xc632,	// (0x0001b75a) main_mup3_pane_g7_ParamLimits

0xc632,	// (0x0001b75a) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0001e89e) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0001e89e) main_mup3_pane_g

0x4585,	// (0x000136ad) main_mup3_pane_t1_ParamLimits

0x4585,	// (0x000136ad) main_mup3_pane_t1

0x45f9,	// (0x00013721) main_mup3_pane_t2_ParamLimits

0x45f9,	// (0x00013721) main_mup3_pane_t2

0x46cd,	// (0x000137f5) main_mup3_pane_t4_ParamLimits

0x46cd,	// (0x000137f5) main_mup3_pane_t4

0x4723,	// (0x0001384b) main_mup3_pane_t5_ParamLimits

0x4723,	// (0x0001384b) main_mup3_pane_t5

0x47df,	// (0x00013907) main_mup3_pane_t6_ParamLimits

0x47df,	// (0x00013907) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0001e8af) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0001e8af) main_mup3_pane_t

0x4897,	// (0x000139bf) mup3_progress_pane_ParamLimits

0x4897,	// (0x000139bf) mup3_progress_pane

0x4923,	// (0x00013a4b) popup_mup3_control_window_ParamLimits

0x4923,	// (0x00013a4b) popup_mup3_control_window

0xc640,	// (0x0001b768) popup_mup3_text_window

0x4955,	// (0x00013a7d) mup3_progress_pane_t1

0x4974,	// (0x00013a9c) mup3_progress_pane_t2

0xc648,	// (0x0001b770) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0001e8bc) mup3_progress_pane_t

0xc665,	// (0x0001b78d) mup_progress_pane_cp03

0x9433,	// (0x0001855b) bg_tb_trans_pane_cp04

0x4993,	// (0x00013abb) mup3_volume_pane

0x499b,	// (0x00013ac3) popup_mup3_control_window_g1

0x49a4,	// (0x00013acc) mup3_volume_pane_g1

0x49ad,	// (0x00013ad5) mup3_volume_pane_g2

0x49b6,	// (0x00013ade) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0001e8c3) mup3_volume_pane_g

0x9433,	// (0x0001855b) bg_tb_trans_pane_cp03

0xc675,	// (0x0001b79d) popup_mup3_text_window_g1

0xc67d,	// (0x0001b7a5) popup_mup3_text_window_t1

0x9c6c,	// (0x00018d94) list_calc_item_pane_g1_ParamLimits

0xc023,	// (0x0001b14b) mup_volume_pane_cp_g1

0x42f2,	// (0x0001341a) main_touch_calib_pane_t3

0x4306,	// (0x0001342e) main_touch_calib_pane_t4

0x431a,	// (0x00013442) main_touch_calib_pane_t5

0x943d,	// (0x00018565) aid_cell_size_toolbar2

0x9445,	// (0x0001856d) aid_popup3_width_pane

0x9451,	// (0x00018579) aid_zoom_text_msg_primary

0x0ef2,	// (0x0001001a) vorec_t7

0x9c30,	// (0x00018d58) bg_calc_paper_pane_g1_ParamLimits

0x9c3c,	// (0x00018d64) bg_calc_paper_pane_g2_ParamLimits

0x9c48,	// (0x00018d70) bg_calc_paper_pane_g3_ParamLimits

0x9c54,	// (0x00018d7c) bg_calc_paper_pane_g4_ParamLimits

0x9c60,	// (0x00018d88) bg_calc_paper_pane_g5_ParamLimits

0x0818,	// (0x0000f940) bg_calc_paper_pane_g6_ParamLimits

0x0827,	// (0x0000f94f) bg_calc_paper_pane_g7_ParamLimits

0x0836,	// (0x0000f95e) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0001e265) bg_calc_paper_pane_g_ParamLimits

0x0849,	// (0x0000f971) calc_bg_paper_pane_g9_ParamLimits

0x105f,	// (0x00010187) image_qvga_pane_ParamLimits

0x105f,	// (0x00010187) image_qvga_pane

0x9b1f,	// (0x00018c47) bg_popup_sub_pane_cp04_ParamLimits

0xabb3,	// (0x00019cdb) popup_mup_playback_window_g1_ParamLimits

0xabbf,	// (0x00019ce7) popup_mup_playback_window_t1_ParamLimits

0xabd4,	// (0x00019cfc) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0001e5ef) popup_mup_playback_window_t_ParamLimits

0x3e31,	// (0x00012f59) main_mup2_pane_g3_ParamLimits

0x3e31,	// (0x00012f59) main_mup2_pane_g3

0x1473,	// (0x0001059b) popup_toolbar_window_cp04

0xafc9,	// (0x0001a0f1) popup_call2_audio_second_window_g3_ParamLimits

0xafc9,	// (0x0001a0f1) popup_call2_audio_second_window_g3

0xb3d3,	// (0x0001a4fb) popup_call2_audio_first_window_g4_ParamLimits

0xb3d3,	// (0x0001a4fb) popup_call2_audio_first_window_g4

0xba52,	// (0x0001ab7a) popup_call2_audio_in_window_g4_ParamLimits

0xba52,	// (0x0001ab7a) popup_call2_audio_in_window_g4

0x2d04,	// (0x00011e2c) aid_area_sk_bg_cut_ParamLimits

0x2d04,	// (0x00011e2c) aid_area_sk_bg_cut

0xabe9,	// (0x00019d11) aid_area_sk_bg_cut_2_ParamLimits

0xabe9,	// (0x00019d11) aid_area_sk_bg_cut_2

0x4135,	// (0x0001325d) aid_placing_details_win

0x413d,	// (0x00013265) aid_placing_details_win_2

0xc46b,	// (0x0001b593) camera2_autofocus_pane_g1_ParamLimits

0x040f,	// (0x0000f537) popup_fixed_preview_cale_window_ParamLimits

0x040f,	// (0x0000f537) popup_fixed_preview_cale_window

0xa96c,	// (0x00019a94) navi_slider_pane_g3

0xa975,	// (0x00019a9d) navi_slider_pane_g4

0xa97e,	// (0x00019aa6) navi_slider_pane_g5

0xa96c,	// (0x00019a94) navi_slider_pane_g6

0xa987,	// (0x00019aaf) navi_slider_pane_g7

0xaaa8,	// (0x00019bd0) mup_scale_pane_g3

0xaab1,	// (0x00019bd9) mup_scale_pane_g4

0xaaba,	// (0x00019be2) mup_scale_pane_g5

0x29ae,	// (0x00011ad6) mup_scale_pane_g6

0x29b7,	// (0x00011adf) mup_scale_pane_g7

0xa96c,	// (0x00019a94) cams2_slider_pane_g3

0xc0d8,	// (0x0001b200) cams2_slider_pane_g4

0xc0e0,	// (0x0001b208) cams2_slider_pane_g5

0xa96c,	// (0x00019a94) cams2_slider_pane_g6

0xc0e8,	// (0x0001b210) cams2_slider_pane_g7

0xc314,	// (0x0001b43c) camera2_autofocus_pane_cp_g1

0xbded,	// (0x0001af15) bg_popup_preview_window_pane_cp02_ParamLimits

0xbded,	// (0x0001af15) bg_popup_preview_window_pane_cp02

0xc68b,	// (0x0001b7b3) list_fp_cale_pane_ParamLimits

0xc68b,	// (0x0001b7b3) list_fp_cale_pane

0xc697,	// (0x0001b7bf) popup_fixed_preview_cale_window_t1_ParamLimits

0xc697,	// (0x0001b7bf) popup_fixed_preview_cale_window_t1

0x49bf,	// (0x00013ae7) popup_fixed_preview_cale_window_t2_ParamLimits

0x49bf,	// (0x00013ae7) popup_fixed_preview_cale_window_t2

0x49d4,	// (0x00013afc) popup_fixed_preview_cale_window_t3_ParamLimits

0x49d4,	// (0x00013afc) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0001e8ca) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0001e8ca) popup_fixed_preview_cale_window_t

0x49e9,	// (0x00013b11) list_single_fp_cale_pane_ParamLimits

0x49e9,	// (0x00013b11) list_single_fp_cale_pane

0xc6b5,	// (0x0001b7dd) list_single_fp_cale_pane_g1_ParamLimits

0xc6b5,	// (0x0001b7dd) list_single_fp_cale_pane_g1

0xc6c1,	// (0x0001b7e9) list_single_fp_cale_pane_g2_ParamLimits

0xc6c1,	// (0x0001b7e9) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0001e8d1) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0001e8d1) list_single_fp_cale_pane_g

0xc6da,	// (0x0001b802) list_single_fp_cale_pane_t1_ParamLimits

0xc6da,	// (0x0001b802) list_single_fp_cale_pane_t1

0xc6ec,	// (0x0001b814) list_single_fp_cale_pane_t2_ParamLimits

0xc6ec,	// (0x0001b814) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0001e8d8) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0001e8d8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9433,	// (0x0001855b) main_dialer_pane

0x49ff,	// (0x00013b27) aid_cell_size_keypad

0x4a09,	// (0x00013b31) dialer_ne_pane

0x4a11,	// (0x00013b39) grid_dialer_command_1_pane

0x4a19,	// (0x00013b41) grid_dialer_command_2_pane

0x4a21,	// (0x00013b49) grid_dialer_keypad_pane

0x4a33,	// (0x00013b5b) bg_popup_call_pane_cp06_ParamLimits

0x4a33,	// (0x00013b5b) bg_popup_call_pane_cp06

0x4a3f,	// (0x00013b67) dialer_ne_clear_pane_ParamLimits

0x4a3f,	// (0x00013b67) dialer_ne_clear_pane

0xc71f,	// (0x0001b847) dialer_ne_pane_g1

0xc727,	// (0x0001b84f) dialer_ne_pane_t1_ParamLimits

0xc727,	// (0x0001b84f) dialer_ne_pane_t1

0x4a4b,	// (0x00013b73) dialer_ne_pane_t2_ParamLimits

0x4a4b,	// (0x00013b73) dialer_ne_pane_t2

0x4a75,	// (0x00013b9d) dialer_ne_pane_t3_ParamLimits

0x4a75,	// (0x00013b9d) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0001e8dd) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0001e8dd) dialer_ne_pane_t

0x4aa5,	// (0x00013bcd) dialer_ne_pane_t3_copy1_ParamLimits

0x4aa5,	// (0x00013bcd) dialer_ne_pane_t3_copy1

0x4ad4,	// (0x00013bfc) cell_dialer_keypad_pane_ParamLimits

0x4ad4,	// (0x00013bfc) cell_dialer_keypad_pane

0x4aeb,	// (0x00013c13) cell_dialer_command_1_pane_ParamLimits

0x4aeb,	// (0x00013c13) cell_dialer_command_1_pane

0x4b01,	// (0x00013c29) cell_dialer_command_2_pane_ParamLimits

0x4b01,	// (0x00013c29) cell_dialer_command_2_pane

0xc739,	// (0x0001b861) bg_button_pane_cp02_ParamLimits

0xc739,	// (0x0001b861) bg_button_pane_cp02

0x4b10,	// (0x00013c38) cell_dialer_keypad_pane_g1_ParamLimits

0x4b10,	// (0x00013c38) cell_dialer_keypad_pane_g1

0xc739,	// (0x0001b861) bg_button_pane_cp03_ParamLimits

0xc739,	// (0x0001b861) bg_button_pane_cp03

0x4b24,	// (0x00013c4c) cell_dialer_command_1_pane_g1_ParamLimits

0x4b24,	// (0x00013c4c) cell_dialer_command_1_pane_g1

0xc745,	// (0x0001b86d) bg_button_pane_cp04

0x4b38,	// (0x00013c60) cell_dialer_command_2_pane_g1

0x9e78,	// (0x00018fa0) bg_button_pane_cp06

0xc74d,	// (0x0001b875) dialer_ne_clear_pane_g1

0xa836,	// (0x0001995e) navi_pane_g2

0xa864,	// (0x0001998c) navi_pane_g3

0x0002,

0xf3ca,	// (0x0001e4f2) navi_pane_g

0xa8f3,	// (0x00019a1b) navi_pane_mv_g2

0xa91a,	// (0x00019a42) navi_pane_mv_g5

0x257c,	// (0x000116a4) navi_pane_mv_t1

0x9c12,	// (0x00018d3a) main_clock2_pane

0x94a3,	// (0x000185cb) main_clock2_list_pane_ParamLimits

0x94a3,	// (0x000185cb) main_clock2_list_pane

0x4ba9,	// (0x00013cd1) main_clock2_pane_t1_ParamLimits

0x4ba9,	// (0x00013cd1) main_clock2_pane_t1

0x4be4,	// (0x00013d0c) main_clock2_pane_t2_ParamLimits

0x4be4,	// (0x00013d0c) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0001e8e9) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0001e8e9) main_clock2_pane_t

0x4c84,	// (0x00013dac) popup_clock_analogue_window_cp03_ParamLimits

0x4c84,	// (0x00013dac) popup_clock_analogue_window_cp03

0x4ca9,	// (0x00013dd1) popup_clock_digital_window_cp02_ParamLimits

0x4ca9,	// (0x00013dd1) popup_clock_digital_window_cp02

0x4d22,	// (0x00013e4a) main_clock2_list_single_pane_ParamLimits

0x4d22,	// (0x00013e4a) main_clock2_list_single_pane

0x9e78,	// (0x00018fa0) list_highlight_pane_cp05

0xc787,	// (0x0001b8af) main_clock2_list_single_pane_t1

0x1473,	// (0x0001059b) popup_toolbar_window_cp04_ParamLimits

0x415f,	// (0x00013287) camera2_autofocus_pane_g2_ParamLimits

0x415f,	// (0x00013287) camera2_autofocus_pane_g2

0x416b,	// (0x00013293) camera2_autofocus_pane_g3_ParamLimits

0x416b,	// (0x00013293) camera2_autofocus_pane_g3

0x4177,	// (0x0001329f) camera2_autofocus_pane_g4_ParamLimits

0x4177,	// (0x0001329f) camera2_autofocus_pane_g4

0x4183,	// (0x000132ab) camera2_autofocus_pane_g5_ParamLimits

0x4183,	// (0x000132ab) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0001e82d) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0001e82d) camera2_autofocus_pane_g

0x434f,	// (0x00013477) camera2_autofocus_pane_cp_g2

0x4357,	// (0x0001347f) camera2_autofocus_pane_cp_g3

0x435f,	// (0x00013487) camera2_autofocus_pane_cp_g4

0x4367,	// (0x0001348f) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0001e893) camera2_autofocus_pane_cp_g

0x4a2b,	// (0x00013b53) popup_dialer_spcha_window

0x9433,	// (0x0001855b) bg_popup_sub_pane_cp07

0xc795,	// (0x0001b8bd) list_spcha_pane

0xc79d,	// (0x0001b8c5) list_single_spcha_pane_ParamLimits

0xc79d,	// (0x0001b8c5) list_single_spcha_pane

0x9433,	// (0x0001855b) list_highlight_pane_cp06

0xc7ae,	// (0x0001b8d6) list_single_spcha_pane_t1

0xb7fc,	// (0x0001a924) popup_call2_audio_out_window_g4_ParamLimits

0xb7fc,	// (0x0001a924) popup_call2_audio_out_window_g4

0x9433,	// (0x0001855b) main_imed2_pane

0xbe21,	// (0x0001af49) popup_imed_adjust2_window

0x3533,	// (0x0001265b) popup_imed_trans_window_ParamLimits

0x3533,	// (0x0001265b) popup_imed_trans_window

0xc152,	// (0x0001b27a) popup_blid_sat_info2_window_t1

0xc160,	// (0x0001b288) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0001e7c2) popup_blid_sat_info2_window_t

0x4dd3,	// (0x00013efb) aid_size_cell_colour_35

0x4df3,	// (0x00013f1b) aid_size_cell_colour_112

0x4e13,	// (0x00013f3b) aid_size_cell_effect

0xbdf9,	// (0x0001af21) bg_tb_trans_pane_cp02

0xa351,	// (0x00019479) heading_imed_pane

0x4e33,	// (0x00013f5b) listscroll_imed_pane

0xc7bc,	// (0x0001b8e4) heading_imed_pane_g1

0xc7c4,	// (0x0001b8ec) heading_imed_pane_t1

0xc7d2,	// (0x0001b8fa) grid_imed_colour_35_pane_ParamLimits

0xc7d2,	// (0x0001b8fa) grid_imed_colour_35_pane

0x4e3f,	// (0x00013f67) grid_imed_effect_pane

0xc7ea,	// (0x0001b912) list_imed_aspect_pane

0x4e55,	// (0x00013f7d) scroll_pane_cp027_ParamLimits

0x4e55,	// (0x00013f7d) scroll_pane_cp027

0x4e66,	// (0x00013f8e) cell_imed_effect_pane_ParamLimits

0x4e66,	// (0x00013f8e) cell_imed_effect_pane

0xc7f2,	// (0x0001b91a) cell_imed_colour_pane_ParamLimits

0xc7f2,	// (0x0001b91a) cell_imed_colour_pane

0xc834,	// (0x0001b95c) cell_imed_colour_pane_g1_ParamLimits

0xc834,	// (0x0001b95c) cell_imed_colour_pane_g1

0xc845,	// (0x0001b96d) hgihlgiht_grid_pane_cp016_ParamLimits

0xc845,	// (0x0001b96d) hgihlgiht_grid_pane_cp016

0x4e8d,	// (0x00013fb5) cell_imed_effect_pane_g1

0x4e95,	// (0x00013fbd) grid_highlight_pane_cp017

0xc856,	// (0x0001b97e) list_imed_single_pane_ParamLimits

0xc856,	// (0x0001b97e) list_imed_single_pane

0x9433,	// (0x0001855b) list_highlight_pane_cp07

0xc86b,	// (0x0001b993) list_imed_aspect_pane_comp1_t1

0xbdf9,	// (0x0001af21) bg_tb_trans_pane_cp05

0xc88d,	// (0x0001b9b5) popup_imed_adjust2_window_g1

0xc8b4,	// (0x0001b9dc) popup_imed_adjust2_window_t1

0xc8cc,	// (0x0001b9f4) slider_imed_adjust_pane

0xc8e0,	// (0x0001ba08) slider_imed_adjust_pane_g1

0xc8f0,	// (0x0001ba18) slider_imed_adjust_pane_g2

0xc900,	// (0x0001ba28) slider_imed_adjust_pane_g3

0xc911,	// (0x0001ba39) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0001e906) slider_imed_adjust_pane_g

0x4e9e,	// (0x00013fc6) aid_size_cell_clipart2

0x4eaa,	// (0x00013fd2) grid_imed_clipart_pane

0xc922,	// (0x0001ba4a) scroll_pane_cp031

0x4eb4,	// (0x00013fdc) cell_imed_clipart_pane_ParamLimits

0x4eb4,	// (0x00013fdc) cell_imed_clipart_pane

0x4ed6,	// (0x00013ffe) cell_imed_clipart_pane_g1

0x9433,	// (0x0001855b) grid_highlight_pane_cp014

0x4b85,	// (0x00013cad) main_clock2_pane_g1_ParamLimits

0x4b85,	// (0x00013cad) main_clock2_pane_g1

0x4cc9,	// (0x00013df1) aid_call2_pane_cp10

0x4cdb,	// (0x00013e03) aid_call_pane_cp10

0xa795,	// (0x000198bd) popup_clock_analogue_window_cp10_g1

0xa795,	// (0x000198bd) popup_clock_analogue_window_cp10_g2

0x4ced,	// (0x00013e15) popup_clock_analogue_window_cp10_g3

0x4ced,	// (0x00013e15) popup_clock_analogue_window_cp10_g4

0xa795,	// (0x000198bd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0001e8f4) popup_clock_analogue_window_cp10_g

0x4d03,	// (0x00013e2b) popup_clock_analogue_window_cp10_t1

0x4d34,	// (0x00013e5c) clock_digital_number_pane_cp10_ParamLimits

0x4d34,	// (0x00013e5c) clock_digital_number_pane_cp10

0x4d4c,	// (0x00013e74) clock_digital_number_pane_cp11_ParamLimits

0x4d4c,	// (0x00013e74) clock_digital_number_pane_cp11

0x4d64,	// (0x00013e8c) clock_digital_number_pane_cp12_ParamLimits

0x4d64,	// (0x00013e8c) clock_digital_number_pane_cp12

0x4d7e,	// (0x00013ea6) clock_digital_number_pane_cp13_ParamLimits

0x4d7e,	// (0x00013ea6) clock_digital_number_pane_cp13

0x4d98,	// (0x00013ec0) clock_digital_separator_pane_cp10_ParamLimits

0x4d98,	// (0x00013ec0) clock_digital_separator_pane_cp10

0x4db2,	// (0x00013eda) popup_clock_digital_window_cp02_t1_ParamLimits

0x4db2,	// (0x00013eda) popup_clock_digital_window_cp02_t1

0x9b17,	// (0x00018c3f) clock_digital_number_pane_cp10_g1

0x9b17,	// (0x00018c3f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0001e90f) clock_digital_number_pane_cp10_g

0x9b17,	// (0x00018c3f) clock_digital_separator_pane_cp10_g1

0x9b17,	// (0x00018c3f) clock_digital_separator_pane_g2_cp10

0xa922,	// (0x00019a4a) navi_pane_vded_g4

0xa92b,	// (0x00019a53) navi_pane_vded_g5

0xa934,	// (0x00019a5c) navi_pane_vded_t1

0x9433,	// (0x0001855b) main_vded_pane

0x4edf,	// (0x00014007) main_vded_pane_g1

0x4ee9,	// (0x00014011) main_vded_pane_g2

0x4ef3,	// (0x0001401b) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0001e914) main_vded_pane_g

0x4efd,	// (0x00014025) main_vded_pane_t1

0x4f0b,	// (0x00014033) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0001e91b) main_vded_pane_t

0x4f19,	// (0x00014041) vded_slider_pane

0x4f21,	// (0x00014049) vded_video_pane

0xc92a,	// (0x0001ba52) vded_video_pane_g1

0x4f29,	// (0x00014051) vded_video_pane_g2

0xc314,	// (0x0001b43c) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0001e920) vded_video_pane_g

0xc934,	// (0x0001ba5c) vded_slider_pane_g1

0xc023,	// (0x0001b14b) vded_slider_pane_g2

0xc93d,	// (0x0001ba65) vded_slider_pane_g3

0xc946,	// (0x0001ba6e) vded_slider_pane_g4

0xc94f,	// (0x0001ba77) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0001e927) vded_slider_pane_g

0x490b,	// (0x00013a33) mup3_rocker_pane_ParamLimits

0x490b,	// (0x00013a33) mup3_rocker_pane

0x4f32,	// (0x0001405a) mup3_control_keys_pane_g1

0x4f3a,	// (0x00014062) mup3_control_keys_pane_g2

0x4f42,	// (0x0001406a) mup3_control_keys_pane_g3

0x4f4a,	// (0x00014072) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0001e932) mup3_control_keys_pane_g

0x0446,	// (0x0000f56e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0446,	// (0x0000f56e) popup_toolbar2_fixed_window_cp01

0x493f,	// (0x00013a67) popup_toolbar2_fixed_window_cp02_ParamLimits

0x493f,	// (0x00013a67) popup_toolbar2_fixed_window_cp02

0xb13b,	// (0x0001a263) popup_call2_audio_second_window_t4_ParamLimits

0xb13b,	// (0x0001a263) popup_call2_audio_second_window_t4

0xb669,	// (0x0001a791) popup_call2_audio_first_window_t6_ParamLimits

0xb669,	// (0x0001a791) popup_call2_audio_first_window_t6

0xb8ff,	// (0x0001aa27) popup_call2_audio_out_window_t6_ParamLimits

0xb8ff,	// (0x0001aa27) popup_call2_audio_out_window_t6

0x9433,	// (0x0001855b) main_vitu_pane

0x4f5a,	// (0x00014082) aid_size_cell_itu_ParamLimits

0x4f5a,	// (0x00014082) aid_size_cell_itu

0x94a3,	// (0x000185cb) bg_popup_window_pane_cp08_ParamLimits

0x94a3,	// (0x000185cb) bg_popup_window_pane_cp08

0x4f70,	// (0x00014098) field_vitu_entry_pane_ParamLimits

0x4f70,	// (0x00014098) field_vitu_entry_pane

0x4f88,	// (0x000140b0) grid_vitu_function_pane_ParamLimits

0x4f88,	// (0x000140b0) grid_vitu_function_pane

0x4fa3,	// (0x000140cb) grid_vitu_itu_pane_ParamLimits

0x4fa3,	// (0x000140cb) grid_vitu_itu_pane

0x4fc1,	// (0x000140e9) cell_vitu_itu_pane_ParamLimits

0x4fc1,	// (0x000140e9) cell_vitu_itu_pane

0x4fe3,	// (0x0001410b) cell_vitu_function_pane_ParamLimits

0x4fe3,	// (0x0001410b) cell_vitu_function_pane

0x94a3,	// (0x000185cb) bg_popup_sub_pane_cp08_ParamLimits

0x94a3,	// (0x000185cb) bg_popup_sub_pane_cp08

0x4ffc,	// (0x00014124) field_vitu_entry_pane_t1_ParamLimits

0x4ffc,	// (0x00014124) field_vitu_entry_pane_t1

0xc970,	// (0x0001ba98) field_vitu_entry_pane_t2_ParamLimits

0xc970,	// (0x0001ba98) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0001e940) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0001e940) field_vitu_entry_pane_t

0xc98d,	// (0x0001bab5) bg_button_pane_cp05_ParamLimits

0xc98d,	// (0x0001bab5) bg_button_pane_cp05

0x501b,	// (0x00014143) cell_vitu_itu_pane_g1

0x5033,	// (0x0001415b) cell_vitu_itu_pane_t1_ParamLimits

0x5033,	// (0x0001415b) cell_vitu_itu_pane_t1

0x5045,	// (0x0001416d) cell_vitu_itu_pane_t2_ParamLimits

0x5045,	// (0x0001416d) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0001e945) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0001e945) cell_vitu_itu_pane_t

0xc99b,	// (0x0001bac3) bg_button_pane_cp07

0x507a,	// (0x000141a2) cell_vitu_function_pane_g1

0x9bb2,	// (0x00018cda) main_calc_pane_g1

0x026d,	// (0x0000f395) aid_visual_content_pane

0x9433,	// (0x0001855b) main_vradio_pane

0x5083,	// (0x000141ab) main_vradio_pane_g1_ParamLimits

0x5083,	// (0x000141ab) main_vradio_pane_g1

0xc9a5,	// (0x0001bacd) main_vradio_pane_g2_ParamLimits

0xc9a5,	// (0x0001bacd) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0001e94c) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0001e94c) main_vradio_pane_g

0x509c,	// (0x000141c4) main_vradio_pane_t1_ParamLimits

0x509c,	// (0x000141c4) main_vradio_pane_t1

0x50b1,	// (0x000141d9) main_vradio_pane_t2_ParamLimits

0x50b1,	// (0x000141d9) main_vradio_pane_t2

0xc9b2,	// (0x0001bada) main_vradio_pane_t3_ParamLimits

0xc9b2,	// (0x0001bada) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0001e951) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0001e951) main_vradio_pane_t

0x50c6,	// (0x000141ee) vradio_rocker_control_pane_ParamLimits

0x50c6,	// (0x000141ee) vradio_rocker_control_pane

0x50d8,	// (0x00014200) vradio_station_info_pane_ParamLimits

0x50d8,	// (0x00014200) vradio_station_info_pane

0xc9c6,	// (0x0001baee) vradio_frequency_info_pane_ParamLimits

0xc9c6,	// (0x0001baee) vradio_frequency_info_pane

0xc314,	// (0x0001b43c) vradio_station_info_pane_g1

0xc9d5,	// (0x0001bafd) vradio_station_info_pane_t1_ParamLimits

0xc9d5,	// (0x0001bafd) vradio_station_info_pane_t1

0xc9f7,	// (0x0001bb1f) vradio_station_info_pane_t2_ParamLimits

0xc9f7,	// (0x0001bb1f) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0001e958) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0001e958) vradio_station_info_pane_t

0xca09,	// (0x0001bb31) vradio_tuning_pane

0xca11,	// (0x0001bb39) vradio_rocker_control_pane_g1

0xca19,	// (0x0001bb41) vradio_rocker_control_pane_g2

0xca21,	// (0x0001bb49) vradio_rocker_control_pane_g3

0xca29,	// (0x0001bb51) vradio_rocker_control_pane_g4

0xca31,	// (0x0001bb59) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0001e95d) vradio_rocker_control_pane_g

0x50ea,	// (0x00014212) vradio_frequency_info_pane_g1

0xca39,	// (0x0001bb61) vradio_frequency_info_pane_t1_ParamLimits

0xca39,	// (0x0001bb61) vradio_frequency_info_pane_t1

0x50f4,	// (0x0001421c) vradio_tuning_pane_g1

0x50ff,	// (0x00014227) vradio_tuning_pane_t1

0x9461,	// (0x00018589) area_side_right_pane_ParamLimits

0x9461,	// (0x00018589) area_side_right_pane

0xbdb4,	// (0x0001aedc) status_small_pane_g1

0xbdbc,	// (0x0001aee4) status_small_pane_g2

0xbdc5,	// (0x0001aeed) status_small_pane_g3

0xbdce,	// (0x0001aef6) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0001e718) status_small_pane_g

0xbdd7,	// (0x0001aeff) status_small_pane_t1

0x9433,	// (0x0001855b) main_video3_pane

0xca4d,	// (0x0001bb75) cams_zoom_vslider_pane

0xca55,	// (0x0001bb7d) image3_wide_pane_ParamLimits

0xca55,	// (0x0001bb7d) image3_wide_pane

0xca6f,	// (0x0001bb97) image3_wide_small_pane

0xca7b,	// (0x0001bba3) main_video3_pane_g1_ParamLimits

0xca7b,	// (0x0001bba3) main_video3_pane_g1

0xca97,	// (0x0001bbbf) main_video3_pane_g2_ParamLimits

0xca97,	// (0x0001bbbf) main_video3_pane_g2

0x0001,

0xf840,	// (0x0001e968) main_video3_pane_g_ParamLimits

0xf840,	// (0x0001e968) main_video3_pane_g

0xcab3,	// (0x0001bbdb) main_video3_pane_t1_ParamLimits

0xcab3,	// (0x0001bbdb) main_video3_pane_t1

0xcade,	// (0x0001bc06) main_video3_pane_t2_ParamLimits

0xcade,	// (0x0001bc06) main_video3_pane_t2

0xcb09,	// (0x0001bc31) main_video3_pane_t3_ParamLimits

0xcb09,	// (0x0001bc31) main_video3_pane_t3

0x0002,

0xf845,	// (0x0001e96d) main_video3_pane_t_ParamLimits

0xf845,	// (0x0001e96d) main_video3_pane_t

0xcb36,	// (0x0001bc5e) cams_zoom_vslider_pane_g1

0xcb3f,	// (0x0001bc67) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0001e974) cams_zoom_vslider_pane_g

0xcb47,	// (0x0001bc6f) small_slider_vertical_pane

0xc314,	// (0x0001b43c) small_slider_vertical_pane_g1

0xc314,	// (0x0001b43c) small_slider_vertical_pane_g2

0xcb4f,	// (0x0001bc77) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0001e979) small_slider_vertical_pane_g

0x9433,	// (0x0001855b) main_hwr_training_pane

0xcb58,	// (0x0001bc80) hwr_training_instruct_pane_ParamLimits

0xcb58,	// (0x0001bc80) hwr_training_instruct_pane

0x510e,	// (0x00014236) hwr_training_navi_pane_ParamLimits

0x510e,	// (0x00014236) hwr_training_navi_pane

0x512d,	// (0x00014255) hwr_training_write_pane_ParamLimits

0x512d,	// (0x00014255) hwr_training_write_pane

0x9433,	// (0x0001855b) bg_frame_shadow_pane

0xcb8f,	// (0x0001bcb7) hwr_training_write_pane_g1

0xcb97,	// (0x0001bcbf) hwr_training_write_pane_g2

0xcb9f,	// (0x0001bcc7) hwr_training_write_pane_g3

0xcba7,	// (0x0001bccf) hwr_training_write_pane_g4

0xcbaf,	// (0x0001bcd7) hwr_training_write_pane_g5

0xcbb7,	// (0x0001bcdf) hwr_training_write_pane_g6

0xcbbf,	// (0x0001bce7) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0001e980) hwr_training_write_pane_g

0xcbc7,	// (0x0001bcef) hwr_training_navi_pane_g1_ParamLimits

0xcbc7,	// (0x0001bcef) hwr_training_navi_pane_g1

0xcbd9,	// (0x0001bd01) hwr_training_navi_pane_g2_ParamLimits

0xcbd9,	// (0x0001bd01) hwr_training_navi_pane_g2

0xcbeb,	// (0x0001bd13) hwr_training_navi_pane_g3_ParamLimits

0xcbeb,	// (0x0001bd13) hwr_training_navi_pane_g3

0xcbfb,	// (0x0001bd23) hwr_training_navi_pane_g4_ParamLimits

0xcbfb,	// (0x0001bd23) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0001e98f) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0001e98f) hwr_training_navi_pane_g

0xcc08,	// (0x0001bd30) hwr_training_navi_pane_t1

0x5177,	// (0x0001429f) list_single_hwr_training_instruct_pane_ParamLimits

0x5177,	// (0x0001429f) list_single_hwr_training_instruct_pane

0xcc16,	// (0x0001bd3e) list_single_hwr_training_instruct_pane_t1

0xc254,	// (0x0001b37c) bg_frame_shadow_pane_g1

0xcc25,	// (0x0001bd4d) bg_frame_shadow_pane_g2

0xcc2d,	// (0x0001bd55) bg_frame_shadow_pane_g3

0xcc35,	// (0x0001bd5d) bg_frame_shadow_pane_g4

0xcc3d,	// (0x0001bd65) bg_frame_shadow_pane_g5

0xcc45,	// (0x0001bd6d) bg_frame_shadow_pane_g6

0xcc4d,	// (0x0001bd75) bg_frame_shadow_pane_g7

0x9cf8,	// (0x00018e20) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0001e99a) bg_frame_shadow_pane_g

0x9433,	// (0x0001855b) main_video_tele_dialer_pane

0x518d,	// (0x000142b5) aid_size_cell_video_keypad_ParamLimits

0x518d,	// (0x000142b5) aid_size_cell_video_keypad

0x51a7,	// (0x000142cf) grid_video_dialer_keypad_pane_ParamLimits

0x51a7,	// (0x000142cf) grid_video_dialer_keypad_pane

0x51f5,	// (0x0001431d) video_down_pane_cp_ParamLimits

0x51f5,	// (0x0001431d) video_down_pane_cp

0x5227,	// (0x0001434f) cell_video_dialer_keypad_pane_ParamLimits

0x5227,	// (0x0001434f) cell_video_dialer_keypad_pane

0xcc55,	// (0x0001bd7d) bg_button_pane_cp08_ParamLimits

0xcc55,	// (0x0001bd7d) bg_button_pane_cp08

0x5249,	// (0x00014371) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5249,	// (0x00014371) cell_video_dialer_keypad_pane_g1

0x48f5,	// (0x00013a1d) mup3_rocker2_pane_ParamLimits

0x48f5,	// (0x00013a1d) mup3_rocker2_pane

0xc314,	// (0x0001b43c) mup3_rocker2_pane_g1

0x3422,	// (0x0001254a) main_dialer2_pane

0x9433,	// (0x0001855b) main_mp4_pane

0xcc7f,	// (0x0001bda7) main_mp4_pane_g1_ParamLimits

0xcc7f,	// (0x0001bda7) main_mp4_pane_g1

0xcc7f,	// (0x0001bda7) main_mp4_pane_g2_ParamLimits

0xcc7f,	// (0x0001bda7) main_mp4_pane_g2

0x5283,	// (0x000143ab) main_mp4_pane_g3_ParamLimits

0x5283,	// (0x000143ab) main_mp4_pane_g3

0xcc8d,	// (0x0001bdb5) main_mp4_pane_g4_ParamLimits

0xcc8d,	// (0x0001bdb5) main_mp4_pane_g4

0xccbb,	// (0x0001bde3) main_mp4_pane_g5_ParamLimits

0xccbb,	// (0x0001bde3) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0001e9ba) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0001e9ba) main_mp4_pane_g

0xcd2f,	// (0x0001be57) main_mp4_pane_t1_ParamLimits

0xcd2f,	// (0x0001be57) main_mp4_pane_t1

0xcd8b,	// (0x0001beb3) main_mp4_pane_t2_ParamLimits

0xcd8b,	// (0x0001beb3) main_mp4_pane_t2

0xcddd,	// (0x0001bf05) main_mp4_pane_t3_ParamLimits

0xcddd,	// (0x0001bf05) main_mp4_pane_t3

0xce03,	// (0x0001bf2b) main_mp4_pane_t4_ParamLimits

0xce03,	// (0x0001bf2b) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0001e9cb) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0001e9cb) main_mp4_pane_t

0xce47,	// (0x0001bf6f) mp4_progress_pane_ParamLimits

0xce47,	// (0x0001bf6f) mp4_progress_pane

0xce91,	// (0x0001bfb9) mp4_rocker_pane_ParamLimits

0xce91,	// (0x0001bfb9) mp4_rocker_pane

0xceb9,	// (0x0001bfe1) mp4_progress_pane_t1

0xced2,	// (0x0001bffa) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0001e9d4) mp4_progress_pane_t

0xceeb,	// (0x0001c013) mup_progress_pane_cp04

0xc314,	// (0x0001b43c) mp4_rocker_pane_g1

0x52bf,	// (0x000143e7) aid_cell_size_keypad2_ParamLimits

0x52bf,	// (0x000143e7) aid_cell_size_keypad2

0x52d5,	// (0x000143fd) dialer2_ne_pane_ParamLimits

0x52d5,	// (0x000143fd) dialer2_ne_pane

0x52ef,	// (0x00014417) grid_dialer2_keypad_pane_ParamLimits

0x52ef,	// (0x00014417) grid_dialer2_keypad_pane

0xc0f9,	// (0x0001b221) bg_popup_call_pane_cp07_ParamLimits

0xc0f9,	// (0x0001b221) bg_popup_call_pane_cp07

0x530b,	// (0x00014433) dialer2_ne_pane_t1_ParamLimits

0x530b,	// (0x00014433) dialer2_ne_pane_t1

0x5347,	// (0x0001446f) cell_dialer2_keypad_pane_ParamLimits

0x5347,	// (0x0001446f) cell_dialer2_keypad_pane

0xcf10,	// (0x0001c038) bg_button_pane_pane_cp04_ParamLimits

0xcf10,	// (0x0001c038) bg_button_pane_pane_cp04

0x5369,	// (0x00014491) cell_dialer2_keypad_pane_g1_ParamLimits

0x5369,	// (0x00014491) cell_dialer2_keypad_pane_g1

0x1347,	// (0x0001046f) aid_placing_vt_set_content_ParamLimits

0x1347,	// (0x0001046f) aid_placing_vt_set_content

0x136f,	// (0x00010497) aid_placing_vt_set_title_ParamLimits

0x136f,	// (0x00010497) aid_placing_vt_set_title

0x9433,	// (0x0001855b) main_image3_pane

0x542f,	// (0x00014557) area_side_right_pane_cp01_ParamLimits

0x542f,	// (0x00014557) area_side_right_pane_cp01

0xcc7f,	// (0x0001bda7) main_image3_pane_g1_ParamLimits

0xcc7f,	// (0x0001bda7) main_image3_pane_g1

0x5446,	// (0x0001456e) main_image3_pane_g2_ParamLimits

0x5446,	// (0x0001456e) main_image3_pane_g2

0x546e,	// (0x00014596) main_image3_pane_g3_ParamLimits

0x546e,	// (0x00014596) main_image3_pane_g3

0x5498,	// (0x000145c0) main_image3_pane_g4_ParamLimits

0x5498,	// (0x000145c0) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0001e9e3) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0001e9e3) main_image3_pane_g

0x54c2,	// (0x000145ea) main_image3_pane_t1_ParamLimits

0x54c2,	// (0x000145ea) main_image3_pane_t1

0x551a,	// (0x00014642) main_image3_pane_t2_ParamLimits

0x551a,	// (0x00014642) main_image3_pane_t2

0x556c,	// (0x00014694) main_image3_pane_t3_ParamLimits

0x556c,	// (0x00014694) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0001e9ec) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0001e9ec) main_image3_pane_t

0x94a3,	// (0x000185cb) grid_sctrl_middle_pane_cp01_ParamLimits

0x94a3,	// (0x000185cb) grid_sctrl_middle_pane_cp01

0x55f4,	// (0x0001471c) cell_sctrl_middle_pane_cp01_ParamLimits

0x55f4,	// (0x0001471c) cell_sctrl_middle_pane_cp01

0x5611,	// (0x00014739) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5611,	// (0x00014739) cell_sctrl_middle_pane_cp01_g1

0x9433,	// (0x0001855b) main_call4_pane

0x5627,	// (0x0001474f) aid_size_button_call4_ParamLimits

0x5627,	// (0x0001474f) aid_size_button_call4

0x565a,	// (0x00014782) call4_windows_pane_ParamLimits

0x565a,	// (0x00014782) call4_windows_pane

0x5679,	// (0x000147a1) grid_call4_button_pane_ParamLimits

0x5679,	// (0x000147a1) grid_call4_button_pane

0x56ac,	// (0x000147d4) call4_windows_conf_pane

0x56c3,	// (0x000147eb) popup_call4_audio_first_window_ParamLimits

0x56c3,	// (0x000147eb) popup_call4_audio_first_window

0x5713,	// (0x0001483b) popup_call4_audio_second_window_ParamLimits

0x5713,	// (0x0001483b) popup_call4_audio_second_window

0x572a,	// (0x00014852) popup_call4_audio_wait_window_ParamLimits

0x572a,	// (0x00014852) popup_call4_audio_wait_window

0x5738,	// (0x00014860) cell_call4_button_pane_ParamLimits

0x5738,	// (0x00014860) cell_call4_button_pane

0x575d,	// (0x00014885) bg_button_pane_cp09_ParamLimits

0x575d,	// (0x00014885) bg_button_pane_cp09

0x5769,	// (0x00014891) cell_call4_button_pane_g1_ParamLimits

0x5769,	// (0x00014891) cell_call4_button_pane_g1

0x578f,	// (0x000148b7) cell_call4_button_pane_t1_ParamLimits

0x578f,	// (0x000148b7) cell_call4_button_pane_t1

0xcf88,	// (0x0001c0b0) popup_call4_audio_conf_window_ParamLimits

0xcf88,	// (0x0001c0b0) popup_call4_audio_conf_window

0x4955,	// (0x00013a7d) mup3_progress_pane_t1_ParamLimits

0x4974,	// (0x00013a9c) mup3_progress_pane_t2_ParamLimits

0xc648,	// (0x0001b770) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0001e8bc) mup3_progress_pane_t_ParamLimits

0xc665,	// (0x0001b78d) mup_progress_pane_cp03_ParamLimits

0x4f52,	// (0x0001407a) mup3_control_keys_pane_g4_copy1

0xce75,	// (0x0001bf9d) mp4_rocker2_pane_ParamLimits

0xce75,	// (0x0001bf9d) mp4_rocker2_pane

0xcf9c,	// (0x0001c0c4) mp4_rocker2_pane_g1

0xcfa4,	// (0x0001c0cc) mp4_rocker2_pane_g2

0xcfac,	// (0x0001c0d4) mp4_rocker2_pane_g3

0xcfb4,	// (0x0001c0dc) mp4_rocker2_pane_g4

0xcfbc,	// (0x0001c0e4) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0001e9f5) mp4_rocker2_pane_g

0x9433,	// (0x0001855b) main_camera4_pane

0x9433,	// (0x0001855b) main_video4_pane

0x51c3,	// (0x000142eb) main_video_tele_dialer_pane_t1_ParamLimits

0x51c3,	// (0x000142eb) main_video_tele_dialer_pane_t1

0x51dc,	// (0x00014304) main_video_tele_dialer_pane_t2_ParamLimits

0x51dc,	// (0x00014304) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0001e9ab) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0001e9ab) main_video_tele_dialer_pane_t

0x57d1,	// (0x000148f9) cam4_autofocus_pane_ParamLimits

0x57d1,	// (0x000148f9) cam4_autofocus_pane

0x57e7,	// (0x0001490f) cam4_image_uncrop_pane_ParamLimits

0x57e7,	// (0x0001490f) cam4_image_uncrop_pane

0x5801,	// (0x00014929) cam4_indicators_pane_ParamLimits

0x5801,	// (0x00014929) cam4_indicators_pane

0x582c,	// (0x00014954) main_camera4_pane_g1_ParamLimits

0x582c,	// (0x00014954) main_camera4_pane_g1

0x583e,	// (0x00014966) main_camera4_pane_g2_ParamLimits

0x583e,	// (0x00014966) main_camera4_pane_g2

0x5851,	// (0x00014979) main_camera4_pane_g3_ParamLimits

0x5851,	// (0x00014979) main_camera4_pane_g3

0x5864,	// (0x0001498c) main_camera4_pane_g4_ParamLimits

0x5864,	// (0x0001498c) main_camera4_pane_g4

0x5877,	// (0x0001499f) main_camera4_pane_g5_ParamLimits

0x5877,	// (0x0001499f) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0001ea00) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0001ea00) main_camera4_pane_g

0x589b,	// (0x000149c3) main_camera4_pane_t1_ParamLimits

0x589b,	// (0x000149c3) main_camera4_pane_t1

0xc559,	// (0x0001b681) bg_tb_trans_pane_cp06

0xcfe8,	// (0x0001c110) cam4_indicators_pane_g1

0xcff9,	// (0x0001c121) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0001ea1b) cam4_indicators_pane_g

0xd011,	// (0x0001c139) cam4_indicators_pane_t1

0x58ff,	// (0x00014a27) main_video4_pane_g1_ParamLimits

0x58ff,	// (0x00014a27) main_video4_pane_g1

0x590e,	// (0x00014a36) main_video4_pane_g2_ParamLimits

0x590e,	// (0x00014a36) main_video4_pane_g2

0x591d,	// (0x00014a45) main_video4_pane_g3_ParamLimits

0x591d,	// (0x00014a45) main_video4_pane_g3

0x592c,	// (0x00014a54) main_video4_pane_g4_ParamLimits

0x592c,	// (0x00014a54) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0001ea22) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0001ea22) main_video4_pane_g

0x594a,	// (0x00014a72) vid4_indicators_pane_ParamLimits

0x594a,	// (0x00014a72) vid4_indicators_pane

0x5978,	// (0x00014aa0) video4_image_uncrop_cif_pane_ParamLimits

0x5978,	// (0x00014aa0) video4_image_uncrop_cif_pane

0x5992,	// (0x00014aba) video4_image_uncrop_nhd_pane_ParamLimits

0x5992,	// (0x00014aba) video4_image_uncrop_nhd_pane

0x57e7,	// (0x0001490f) video4_image_uncrop_vga_pane_ParamLimits

0x57e7,	// (0x0001490f) video4_image_uncrop_vga_pane

0x94a3,	// (0x000185cb) bg_tb_trans_pane_cp07

0xd03b,	// (0x0001c163) vid4_indicators_pane_g1

0xd04f,	// (0x0001c177) vid4_indicators_pane_g2

0xd063,	// (0x0001c18b) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0001ea2d) vid4_indicators_pane_g

0xd090,	// (0x0001c1b8) vid4_indicators_pane_t1

0x59a6,	// (0x00014ace) cam4_autofocus_pane_g1

0x59ae,	// (0x00014ad6) cam4_autofocus_pane_g2

0x59b6,	// (0x00014ade) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0001ea38) cam4_autofocus_pane_g

0x59be,	// (0x00014ae6) cam4_autofocus_pane_g3_copy1

0x520b,	// (0x00014333) video_down_pane_cp_t1

0x5219,	// (0x00014341) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0001e9b0) video_down_pane_cp_t

0x94a3,	// (0x000185cb) popup_vitu2_window_ParamLimits

0x94a3,	// (0x000185cb) popup_vitu2_window

0x59c6,	// (0x00014aee) aid_size_cell2_itu2_ParamLimits

0x59c6,	// (0x00014aee) aid_size_cell2_itu2

0x59ec,	// (0x00014b14) aid_size_cell_itu2_ParamLimits

0x59ec,	// (0x00014b14) aid_size_cell_itu2

0x5a48,	// (0x00014b70) bg_popup_window_pane_cp09_ParamLimits

0x5a48,	// (0x00014b70) bg_popup_window_pane_cp09

0x5a56,	// (0x00014b7e) field_vitu2_entry_pane_ParamLimits

0x5a56,	// (0x00014b7e) field_vitu2_entry_pane

0x5a7c,	// (0x00014ba4) grid_vitu2_function_pane_ParamLimits

0x5a7c,	// (0x00014ba4) grid_vitu2_function_pane

0x5acd,	// (0x00014bf5) grid_vitu2_itu_pane_ParamLimits

0x5acd,	// (0x00014bf5) grid_vitu2_itu_pane

0x5b63,	// (0x00014c8b) cell_vitu2_itu_pane_ParamLimits

0x5b63,	// (0x00014c8b) cell_vitu2_itu_pane

0x5b8f,	// (0x00014cb7) cell_vitu2_function_pane_ParamLimits

0x5b8f,	// (0x00014cb7) cell_vitu2_function_pane

0xd0a7,	// (0x0001c1cf) bg_popup_call_pane_cp08_ParamLimits

0xd0a7,	// (0x0001c1cf) bg_popup_call_pane_cp08

0xd0be,	// (0x0001c1e6) field_vitu2_entry_pane_g1

0xd0ca,	// (0x0001c1f2) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0001ea3f) field_vitu2_entry_pane_g

0x5bce,	// (0x00014cf6) field_vitu2_entry_pane_t1_ParamLimits

0x5bce,	// (0x00014cf6) field_vitu2_entry_pane_t1

0xd0e4,	// (0x0001c20c) field_vitu2_entry_pane_t2_ParamLimits

0xd0e4,	// (0x0001c20c) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0001ea46) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0001ea46) field_vitu2_entry_pane_t

0x5bfd,	// (0x00014d25) bg_button_pane_cp010_ParamLimits

0x5bfd,	// (0x00014d25) bg_button_pane_cp010

0xd109,	// (0x0001c231) cell_vitu2_itu_pane_g1

0x5c19,	// (0x00014d41) cell_vitu2_itu_pane_t1_ParamLimits

0x5c19,	// (0x00014d41) cell_vitu2_itu_pane_t1

0x5c77,	// (0x00014d9f) cell_vitu2_itu_pane_t2_ParamLimits

0x5c77,	// (0x00014d9f) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0001ea50) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0001ea50) cell_vitu2_itu_pane_t

0x94a3,	// (0x000185cb) bg_button_pane_cp011

0x5d63,	// (0x00014e8b) cell_vitu2_function_pane_g1

0x9433,	// (0x0001855b) main_myfav_hc_pane

0x55bc,	// (0x000146e4) popup_image3_note_pane_ParamLimits

0x55bc,	// (0x000146e4) popup_image3_note_pane

0x55d8,	// (0x00014700) popup_image3_tool_bar_pane_ParamLimits

0x55d8,	// (0x00014700) popup_image3_tool_bar_pane

0x5d05,	// (0x00014e2d) cell_vitu2_itu_pane_t3_ParamLimits

0x5d05,	// (0x00014e2d) cell_vitu2_itu_pane_t3

0x9433,	// (0x0001855b) bg_popup_trans_pane

0xd11b,	// (0x0001c243) grid_image3_tool_bar_pane

0xd125,	// (0x0001c24d) bg_popup_trans_pane_g1

0xa0db,	// (0x00019203) bg_popup_trans_pane_g2

0xd12d,	// (0x0001c255) bg_popup_trans_pane_g3

0xd135,	// (0x0001c25d) bg_popup_trans_pane_g4

0xd13d,	// (0x0001c265) bg_popup_trans_pane_g5

0xd145,	// (0x0001c26d) bg_popup_trans_pane_g6

0xd14d,	// (0x0001c275) bg_popup_trans_pane_g7

0xd155,	// (0x0001c27d) bg_popup_trans_pane_g8

0xa0bb,	// (0x000191e3) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0001ea57) bg_popup_trans_pane_g

0xd15d,	// (0x0001c285) cell_image3_tool_bar_pane_ParamLimits

0xd15d,	// (0x0001c285) cell_image3_tool_bar_pane

0xc314,	// (0x0001b43c) cell_image3_tool_bar_pane_g1

0x9433,	// (0x0001855b) bg_popup_trans_pane_cp1

0xd171,	// (0x0001c299) popup_image3_note_pane_t1

0xd17f,	// (0x0001c2a7) popup_image3_note_pane_t2

0xd18d,	// (0x0001c2b5) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0001ea6a) popup_image3_note_pane_t

0xd19b,	// (0x0001c2c3) popup_image3_note_pane_t3_copy1

0x5d77,	// (0x00014e9f) bg_myfav_hc_instruction_pane_ParamLimits

0x5d77,	// (0x00014e9f) bg_myfav_hc_instruction_pane

0x5d8b,	// (0x00014eb3) cell_myfav_contact_pane_ParamLimits

0x5d8b,	// (0x00014eb3) cell_myfav_contact_pane

0x5da9,	// (0x00014ed1) cell_myfav_contact_pane_cp1_ParamLimits

0x5da9,	// (0x00014ed1) cell_myfav_contact_pane_cp1

0x5dc1,	// (0x00014ee9) cell_myfav_contact_pane_cp2_ParamLimits

0x5dc1,	// (0x00014ee9) cell_myfav_contact_pane_cp2

0x5dd9,	// (0x00014f01) cell_myfav_contact_pane_cp3_ParamLimits

0x5dd9,	// (0x00014f01) cell_myfav_contact_pane_cp3

0x5df0,	// (0x00014f18) cell_myfav_contact_pane_cp4_ParamLimits

0x5df0,	// (0x00014f18) cell_myfav_contact_pane_cp4

0x5e08,	// (0x00014f30) cell_myfav_contact_pane_cp5_ParamLimits

0x5e08,	// (0x00014f30) cell_myfav_contact_pane_cp5

0x5e1c,	// (0x00014f44) cell_myfav_contact_pane_cp6_ParamLimits

0x5e1c,	// (0x00014f44) cell_myfav_contact_pane_cp6

0x5e32,	// (0x00014f5a) cell_myfav_contact_pane_cp7_ParamLimits

0x5e32,	// (0x00014f5a) cell_myfav_contact_pane_cp7

0xd1a9,	// (0x0001c2d1) listscroll_gen_pane_cp05

0x5e4c,	// (0x00014f74) main_myfav_hc_pane_g1_ParamLimits

0x5e4c,	// (0x00014f74) main_myfav_hc_pane_g1

0x5e66,	// (0x00014f8e) main_myfav_hc_pane_g2_ParamLimits

0x5e66,	// (0x00014f8e) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0001ea71) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0001ea71) main_myfav_hc_pane_g

0x5e98,	// (0x00014fc0) main_myfav_hc_pane_t1_ParamLimits

0x5e98,	// (0x00014fc0) main_myfav_hc_pane_t1

0xd1b2,	// (0x0001c2da) main_myfav_hc_pane_t2_ParamLimits

0xd1b2,	// (0x0001c2da) main_myfav_hc_pane_t2

0xd1c4,	// (0x0001c2ec) main_myfav_hc_pane_t3_ParamLimits

0xd1c4,	// (0x0001c2ec) main_myfav_hc_pane_t3

0x5eaf,	// (0x00014fd7) main_myfav_hc_pane_t4_ParamLimits

0x5eaf,	// (0x00014fd7) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0001ea78) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0001ea78) main_myfav_hc_pane_t

0xc314,	// (0x0001b43c) bg_myfav_hc_instruction_pane_g1

0xd1d6,	// (0x0001c2fe) cell_myfav_contact_pane_g1_ParamLimits

0xd1d6,	// (0x0001c2fe) cell_myfav_contact_pane_g1

0xd1d6,	// (0x0001c2fe) cell_myfav_contact_pane_g2_ParamLimits

0xd1d6,	// (0x0001c2fe) cell_myfav_contact_pane_g2

0xd1e2,	// (0x0001c30a) cell_myfav_contact_pane_g3_ParamLimits

0xd1e2,	// (0x0001c30a) cell_myfav_contact_pane_g3

0xc632,	// (0x0001b75a) cell_myfav_contact_pane_g4_ParamLimits

0xc632,	// (0x0001b75a) cell_myfav_contact_pane_g4

0xd1ef,	// (0x0001c317) cell_myfav_contact_pane_g5_ParamLimits

0xd1ef,	// (0x0001c317) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0001ea83) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0001ea83) cell_myfav_contact_pane_g

0x5e80,	// (0x00014fa8) main_myfav_hc_pane_g3_ParamLimits

0x5e80,	// (0x00014fa8) main_myfav_hc_pane_g3

0x03a8,	// (0x0000f4d0) popup_adpt_find_window

0x5ed7,	// (0x00014fff) afind_page_pane_ParamLimits

0x5ed7,	// (0x00014fff) afind_page_pane

0x5eec,	// (0x00015014) aid_size_cell_afind_ParamLimits

0x5eec,	// (0x00015014) aid_size_cell_afind

0x5f0a,	// (0x00015032) bg_popup_sub_pane_cp09_ParamLimits

0x5f0a,	// (0x00015032) bg_popup_sub_pane_cp09

0x5f17,	// (0x0001503f) find_pane_cp01_ParamLimits

0x5f17,	// (0x0001503f) find_pane_cp01

0xd1fb,	// (0x0001c323) grid_afind_control_pane_ParamLimits

0xd1fb,	// (0x0001c323) grid_afind_control_pane

0x5f24,	// (0x0001504c) grid_afind_pane_ParamLimits

0x5f24,	// (0x0001504c) grid_afind_pane

0x5f43,	// (0x0001506b) cell_afind_pane_ParamLimits

0x5f43,	// (0x0001506b) cell_afind_pane

0xc314,	// (0x0001b43c) afind_page_pane_g1

0x5faa,	// (0x000150d2) afind_page_pane_g2

0x5fb3,	// (0x000150db) afind_page_pane_g3

0x0002,

0xf966,	// (0x0001ea8e) afind_page_pane_g

0x5fbc,	// (0x000150e4) afind_page_pane_t1

0xd20f,	// (0x0001c337) cell_afind_grid_control_pane_ParamLimits

0xd20f,	// (0x0001c337) cell_afind_grid_control_pane

0xcf10,	// (0x0001c038) bg_button_pane_cp69_ParamLimits

0xcf10,	// (0x0001c038) bg_button_pane_cp69

0x5fdc,	// (0x00015104) cell_afind_pane_g1_ParamLimits

0x5fdc,	// (0x00015104) cell_afind_pane_g1

0x5fe9,	// (0x00015111) cell_afind_pane_t1_ParamLimits

0x5fe9,	// (0x00015111) cell_afind_pane_t1

0x9ed4,	// (0x00018ffc) bg_button_pane_cp72

0xd21e,	// (0x0001c346) cell_afind_grid_control_pane_g1

0x2ee1,	// (0x00012009) aid_image_placing_area_ParamLimits

0x2ee1,	// (0x00012009) aid_image_placing_area

0xc958,	// (0x0001ba80) field_vitu_entry_pane_g1_ParamLimits

0xc958,	// (0x0001ba80) field_vitu_entry_pane_g1

0xc964,	// (0x0001ba8c) field_vitu_entry_pane_g2_ParamLimits

0xc964,	// (0x0001ba8c) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0001e93b) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0001e93b) field_vitu_entry_pane_g

0x501b,	// (0x00014143) cell_vitu_itu_pane_g1_ParamLimits

0x505d,	// (0x00014185) cell_vitu_itu_pane_t3_ParamLimits

0x505d,	// (0x00014185) cell_vitu_itu_pane_t3

0xceb9,	// (0x0001bfe1) mp4_progress_pane_t1_ParamLimits

0xced2,	// (0x0001bffa) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0001e9d4) mp4_progress_pane_t_ParamLimits

0xceeb,	// (0x0001c013) mup_progress_pane_cp04_ParamLimits

0x5ec3,	// (0x00014feb) main_myfav_hc_pane_t5_ParamLimits

0x5ec3,	// (0x00014feb) main_myfav_hc_pane_t5

0x9459,	// (0x00018581) aid_zoom_text_primary

0x03a8,	// (0x0000f4d0) popup_adpt_find_window_ParamLimits

0x94a3,	// (0x000185cb) main_cam_set_pane

0x5818,	// (0x00014940) cam4_zoom_pane_ParamLimits

0x5818,	// (0x00014940) cam4_zoom_pane

0x5ffb,	// (0x00015123) main_cam_set_pane_g1_ParamLimits

0x5ffb,	// (0x00015123) main_cam_set_pane_g1

0x6009,	// (0x00015131) main_cam_set_pane_g2_ParamLimits

0x6009,	// (0x00015131) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0001ea95) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0001ea95) main_cam_set_pane_g

0x602a,	// (0x00015152) main_cam_set_pane_t1_ParamLimits

0x602a,	// (0x00015152) main_cam_set_pane_t1

0x6045,	// (0x0001516d) main_cset_listscroll_pane_ParamLimits

0x6045,	// (0x0001516d) main_cset_listscroll_pane

0x6065,	// (0x0001518d) main_cset_slider_pane_ParamLimits

0x6065,	// (0x0001518d) main_cset_slider_pane

0xd26e,	// (0x0001c396) main_cset_list_pane_ParamLimits

0xd26e,	// (0x0001c396) main_cset_list_pane

0xd27e,	// (0x0001c3a6) scroll_pane_cp028

0x608b,	// (0x000151b3) aid_area_touch_slider

0x60a7,	// (0x000151cf) cset_slider_pane

0x60d1,	// (0x000151f9) main_cset_slider_pane_g1

0x60e6,	// (0x0001520e) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0001ea9a) main_cset_slider_pane_g

0xd2cf,	// (0x0001c3f7) main_cset_slider_pane_t1

0x618a,	// (0x000152b2) main_cset_slider_pane_t2

0x61a4,	// (0x000152cc) main_cset_slider_pane_t3

0x61be,	// (0x000152e6) main_cset_slider_pane_t4

0x61d8,	// (0x00015300) main_cset_slider_pane_t5

0x61f2,	// (0x0001531a) main_cset_slider_pane_t6

0x6207,	// (0x0001532f) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0001eabf) main_cset_slider_pane_t

0x630b,	// (0x00015433) cset_list_set_pane_ParamLimits

0x630b,	// (0x00015433) cset_list_set_pane

0x631d,	// (0x00015445) aid_position_infowindow_above

0x6325,	// (0x0001544d) aid_position_infowindow_below

0x632d,	// (0x00015455) cset_list_set_pane_g1_ParamLimits

0x632d,	// (0x00015455) cset_list_set_pane_g1

0x6339,	// (0x00015461) cset_list_set_pane_g3_ParamLimits

0x6339,	// (0x00015461) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0001eade) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0001eade) cset_list_set_pane_g

0x6348,	// (0x00015470) cset_list_set_pane_t1_ParamLimits

0x6348,	// (0x00015470) cset_list_set_pane_t1

0x94a3,	// (0x000185cb) list_highlight_pane_cp021_ParamLimits

0x94a3,	// (0x000185cb) list_highlight_pane_cp021

0xaaa8,	// (0x00019bd0) cset_slider_pane_g1

0xaaba,	// (0x00019be2) cset_slider_pane_g2

0xaab1,	// (0x00019bd9) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0001eae3) cset_slider_pane_g

0xd36f,	// (0x0001c497) aid_area_touch_cam4_zoom

0xd377,	// (0x0001c49f) cam4_zoom_cont_pane

0xd37f,	// (0x0001c4a7) cam4_zoom_pane_g1

0xd387,	// (0x0001c4af) cam4_zoom_pane_g2

0x635d,	// (0x00015485) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0001eaea) cam4_zoom_pane_g

0xcb4f,	// (0x0001bc77) cam4_zoom_cont_pane_g1

0xd38f,	// (0x0001c4b7) cam4_zoom_cont_pane_g2

0xd398,	// (0x0001c4c0) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0001eaf1) cam4_zoom_cont_pane_g

0x5645,	// (0x0001476d) call4_image_pane_ParamLimits

0x5645,	// (0x0001476d) call4_image_pane

0x56ac,	// (0x000147d4) call4_windows_conf_pane_ParamLimits

0x56f1,	// (0x00014819) popup_call4_audio_in_window_ParamLimits

0x56f1,	// (0x00014819) popup_call4_audio_in_window

0x9433,	// (0x0001855b) bg_popup_call2_act_pane_cp02

0xcf80,	// (0x0001c0a8) call4_list_conf_pane

0xc314,	// (0x0001b43c) call4_image_pane_g1

0xc314,	// (0x0001b43c) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0001e7fc) call4_image_pane_g

0xd3a1,	// (0x0001c4c9) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3a1,	// (0x0001c4c9) list_single_graphic_popup_conf4_pane

0x9433,	// (0x0001855b) list_highlight_pane_cp022

0xd3b4,	// (0x0001c4dc) list_single_graphic_popup_conf4_pane_g1

0xa692,	// (0x000197ba) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0001eaf8) list_single_graphic_popup_conf4_pane_g

0xd3bc,	// (0x0001c4e4) list_single_graphic_popup_conf4_pane_t1

0x1493,	// (0x000105bb) popup_vtel_slider_window_ParamLimits

0x1493,	// (0x000105bb) popup_vtel_slider_window

0xcefe,	// (0x0001c026) dialer2_ne_pane_t2_ParamLimits

0xcefe,	// (0x0001c026) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0001e9d9) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0001e9d9) dialer2_ne_pane_t

0xc0f9,	// (0x0001b221) bg_popup_sub_pane_cp010_ParamLimits

0xc0f9,	// (0x0001b221) bg_popup_sub_pane_cp010

0x6365,	// (0x0001548d) popup_vtel_slider_window_g1_ParamLimits

0x6365,	// (0x0001548d) popup_vtel_slider_window_g1

0x6378,	// (0x000154a0) popup_vtel_slider_window_g2_ParamLimits

0x6378,	// (0x000154a0) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0001eafd) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0001eafd) popup_vtel_slider_window_g

0x63ce,	// (0x000154f6) vtel_slider_pane_ParamLimits

0x63ce,	// (0x000154f6) vtel_slider_pane

0x63f0,	// (0x00015518) vtel_slider_pane_g1_ParamLimits

0x63f0,	// (0x00015518) vtel_slider_pane_g1

0x6404,	// (0x0001552c) vtel_slider_pane_g2_ParamLimits

0x6404,	// (0x0001552c) vtel_slider_pane_g2

0x641c,	// (0x00015544) vtel_slider_pane_g3_ParamLimits

0x641c,	// (0x00015544) vtel_slider_pane_g3

0x63f0,	// (0x00015518) vtel_slider_pane_g4_ParamLimits

0x63f0,	// (0x00015518) vtel_slider_pane_g4

0x6432,	// (0x0001555a) vtel_slider_pane_g5_ParamLimits

0x6432,	// (0x0001555a) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0001eb06) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0001eb06) vtel_slider_pane_g

0x94a3,	// (0x000185cb) main_gallery2_pane

0x5a18,	// (0x00014b40) aid_size_row_itut2_dropdow_list_ParamLimits

0x5a18,	// (0x00014b40) aid_size_row_itut2_dropdow_list

0x5aa4,	// (0x00014bcc) grid_vitu2_function_top_pane_ParamLimits

0x5aa4,	// (0x00014bcc) grid_vitu2_function_top_pane

0x5b0e,	// (0x00014c36) popup_vitu2_dropdown_list_window_ParamLimits

0x5b0e,	// (0x00014c36) popup_vitu2_dropdown_list_window

0x5b37,	// (0x00014c5f) popup_vitu2_match_list_window

0x6448,	// (0x00015570) cell_vitu2_function_top_pane_ParamLimits

0x6448,	// (0x00015570) cell_vitu2_function_top_pane

0x6460,	// (0x00015588) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6460,	// (0x00015588) cell_vitu2_function_top_pane_cp01

0x647c,	// (0x000155a4) cell_vitu2_function_top_wide_pane_ParamLimits

0x647c,	// (0x000155a4) cell_vitu2_function_top_wide_pane

0x94a3,	// (0x000185cb) bg_button_pane_cp012

0x6498,	// (0x000155c0) cell_vitu2_function_top_pane_g1

0xd3e0,	// (0x0001c508) bg_button_pane_cp013_ParamLimits

0xd3e0,	// (0x0001c508) bg_button_pane_cp013

0x64ac,	// (0x000155d4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x64ac,	// (0x000155d4) cell_vitu2_function_top_wide_pane_g1

0x94a3,	// (0x000185cb) bg_popup_sub_pane_cp20

0x64c4,	// (0x000155ec) list_vitu2_match_list_pane

0xd125,	// (0x0001c24d) bg_popup_sub_pane_cp20_g1

0xd12d,	// (0x0001c255) bg_popup_sub_pane_cp20_g2

0xa0db,	// (0x00019203) bg_popup_sub_pane_cp20_g3

0xd135,	// (0x0001c25d) bg_popup_sub_pane_cp20_g4

0xa0bb,	// (0x000191e3) bg_popup_sub_pane_cp20_g5

0xd3fc,	// (0x0001c524) bg_popup_sub_pane_cp20_g6

0xd145,	// (0x0001c26d) bg_popup_sub_pane_cp20_g7

0xd14d,	// (0x0001c275) bg_popup_sub_pane_cp20_g8

0xd155,	// (0x0001c27d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0001eb11) bg_popup_sub_pane_cp20_g

0xd404,	// (0x0001c52c) list_vitu2_match_list_item_pane_ParamLimits

0xd404,	// (0x0001c52c) list_vitu2_match_list_item_pane

0xd416,	// (0x0001c53e) list_vitu2_match_list_item_pane_t1

0x9433,	// (0x0001855b) bg_popup_sub_pane_cp21

0xa54b,	// (0x00019673) grid_vitu2_dropdown_list_pane

0x6532,	// (0x0001565a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6532,	// (0x0001565a) cell_vitu2_dropdown_list_char_pane

0x6553,	// (0x0001567b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6553,	// (0x0001567b) cell_vitu2_dropdown_list_ctrl_pane

0xd424,	// (0x0001c54c) cell_vitu2_dropdown_list_char_pane_g1

0xd42d,	// (0x0001c555) cell_vitu2_dropdown_list_char_pane_g2

0xd436,	// (0x0001c55e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0001eb2e) cell_vitu2_dropdown_list_char_pane_g

0x657f,	// (0x000156a7) cell_vitu2_dropdown_list_char_pane_t1

0x658d,	// (0x000156b5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x658d,	// (0x000156b5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x659a,	// (0x000156c2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x659a,	// (0x000156c2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x65a7,	// (0x000156cf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x65a7,	// (0x000156cf) cell_vitu2_dropdown_list_ctrl_pane_g3

0x65b4,	// (0x000156dc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x65b4,	// (0x000156dc) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc559,	// (0x0001b681) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc559,	// (0x0001b681) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0001eb35) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0001eb35) cell_vitu2_dropdown_list_ctrl_pane_g

0x65d0,	// (0x000156f8) aid_size_cell_gallery2_ParamLimits

0x65d0,	// (0x000156f8) aid_size_cell_gallery2

0x65ee,	// (0x00015716) grid_gallery2_pane_ParamLimits

0x65ee,	// (0x00015716) grid_gallery2_pane

0x6608,	// (0x00015730) scroll_pane_cp029_ParamLimits

0x6608,	// (0x00015730) scroll_pane_cp029

0x6619,	// (0x00015741) cell_gallery2_pane_ParamLimits

0x6619,	// (0x00015741) cell_gallery2_pane

0xd43f,	// (0x0001c567) cell_gallery2_pane_g2

0x6678,	// (0x000157a0) cell_gallery2_pane_g3

0xd447,	// (0x0001c56f) cell_gallery2_pane_g4

0xd44f,	// (0x0001c577) cell_gallery2_pane_g5

0x9e78,	// (0x00018fa0) grid_highlight_pane_cp10

0x5b37,	// (0x00014c5f) popup_vitu2_match_list_window_ParamLimits

0x5b4c,	// (0x00014c74) popup_vitu2_query_window_ParamLimits

0x5b4c,	// (0x00014c74) popup_vitu2_query_window

0x9433,	// (0x0001855b) bg_vitu2_candi_button_pane

0xd424,	// (0x0001c54c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd42d,	// (0x0001c555) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd436,	// (0x0001c55e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6680,	// (0x000157a8) bg_button_pane_cp015

0x6694,	// (0x000157bc) bg_button_pane_cp016

0x66a7,	// (0x000157cf) bg_button_pane_cp017

0xbdf9,	// (0x0001af21) bg_popup_sub_pane_cp22

0xd457,	// (0x0001c57f) popup_vitu2_query_window_g1

0x66ec,	// (0x00015814) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0001eb40) popup_vitu2_query_window_g

0x670b,	// (0x00015833) popup_vitu2_query_window_t1_ParamLimits

0x670b,	// (0x00015833) popup_vitu2_query_window_t1

0x6740,	// (0x00015868) popup_vitu2_query_window_t2_ParamLimits

0x6740,	// (0x00015868) popup_vitu2_query_window_t2

0x6752,	// (0x0001587a) popup_vitu2_query_window_t3_ParamLimits

0x6752,	// (0x0001587a) popup_vitu2_query_window_t3

0x677a,	// (0x000158a2) popup_vitu2_query_window_t4_ParamLimits

0x677a,	// (0x000158a2) popup_vitu2_query_window_t4

0x679b,	// (0x000158c3) popup_vitu2_query_window_t5_ParamLimits

0x679b,	// (0x000158c3) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0001eb47) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0001eb47) popup_vitu2_query_window_t

0xd266,	// (0x0001c38e) main_cset_text_pane

0x608b,	// (0x000151b3) aid_area_touch_slider_ParamLimits

0x60a7,	// (0x000151cf) cset_slider_pane_ParamLimits

0x60d1,	// (0x000151f9) main_cset_slider_pane_g1_ParamLimits

0x60e6,	// (0x0001520e) main_cset_slider_pane_g2_ParamLimits

0xd287,	// (0x0001c3af) main_cset_slider_pane_g3_ParamLimits

0xd287,	// (0x0001c3af) main_cset_slider_pane_g3

0x60fb,	// (0x00015223) main_cset_slider_pane_g4_ParamLimits

0x60fb,	// (0x00015223) main_cset_slider_pane_g4

0x610a,	// (0x00015232) main_cset_slider_pane_g5_ParamLimits

0x610a,	// (0x00015232) main_cset_slider_pane_g5

0x6116,	// (0x0001523e) main_cset_slider_pane_g6_ParamLimits

0x6116,	// (0x0001523e) main_cset_slider_pane_g6

0xf972,	// (0x0001ea9a) main_cset_slider_pane_g_ParamLimits

0xd2cf,	// (0x0001c3f7) main_cset_slider_pane_t1_ParamLimits

0x618a,	// (0x000152b2) main_cset_slider_pane_t2_ParamLimits

0x61a4,	// (0x000152cc) main_cset_slider_pane_t3_ParamLimits

0x61be,	// (0x000152e6) main_cset_slider_pane_t4_ParamLimits

0x61d8,	// (0x00015300) main_cset_slider_pane_t5_ParamLimits

0x61f2,	// (0x0001531a) main_cset_slider_pane_t6_ParamLimits

0x6207,	// (0x0001532f) main_cset_slider_pane_t7_ParamLimits

0x6231,	// (0x00015359) main_cset_slider_pane_t8_ParamLimits

0x6231,	// (0x00015359) main_cset_slider_pane_t8

0x6259,	// (0x00015381) main_cset_slider_pane_t9_ParamLimits

0x6259,	// (0x00015381) main_cset_slider_pane_t9

0x6281,	// (0x000153a9) main_cset_slider_pane_t10_ParamLimits

0x6281,	// (0x000153a9) main_cset_slider_pane_t10

0x62a9,	// (0x000153d1) main_cset_slider_pane_t11_ParamLimits

0x62a9,	// (0x000153d1) main_cset_slider_pane_t11

0x62d1,	// (0x000153f9) main_cset_slider_pane_t12_ParamLimits

0x62d1,	// (0x000153f9) main_cset_slider_pane_t12

0x62ee,	// (0x00015416) main_cset_slider_pane_t13_ParamLimits

0x62ee,	// (0x00015416) main_cset_slider_pane_t13

0xf997,	// (0x0001eabf) main_cset_slider_pane_t_ParamLimits

0x9433,	// (0x0001855b) bg_popup_sub_pane_cp011

0xd463,	// (0x0001c58b) main_cset_text_pane_g1

0xd46b,	// (0x0001c593) main_cset_text_pane_t1

0xd479,	// (0x0001c5a1) main_cset_text_pane_t2

0xd487,	// (0x0001c5af) main_cset_text_pane_t3

0xd495,	// (0x0001c5bd) main_cset_text_pane_t4

0xd4a3,	// (0x0001c5cb) main_cset_text_pane_t5

0xd4b1,	// (0x0001c5d9) main_cset_text_pane_t6

0xd4bf,	// (0x0001c5e7) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0001eb56) main_cset_text_pane_t

0x9433,	// (0x0001855b) main_cam4_burst_pane

0x9433,	// (0x0001855b) main_cam5_pane

0x5fca,	// (0x000150f2) bg_button_pane_cp019

0x5fd3,	// (0x000150fb) bg_button_pane_cp020

0xd293,	// (0x0001c3bb) main_cset_slider_pane_g7_ParamLimits

0xd293,	// (0x0001c3bb) main_cset_slider_pane_g7

0xd29f,	// (0x0001c3c7) main_cset_slider_pane_g8_ParamLimits

0xd29f,	// (0x0001c3c7) main_cset_slider_pane_g8

0x612a,	// (0x00015252) main_cset_slider_pane_g9_ParamLimits

0x612a,	// (0x00015252) main_cset_slider_pane_g9

0x6136,	// (0x0001525e) main_cset_slider_pane_g10_ParamLimits

0x6136,	// (0x0001525e) main_cset_slider_pane_g10

0x6142,	// (0x0001526a) main_cset_slider_pane_g11_ParamLimits

0x6142,	// (0x0001526a) main_cset_slider_pane_g11

0x614e,	// (0x00015276) main_cset_slider_pane_g12_ParamLimits

0x614e,	// (0x00015276) main_cset_slider_pane_g12

0x615a,	// (0x00015282) main_cset_slider_pane_g13_ParamLimits

0x615a,	// (0x00015282) main_cset_slider_pane_g13

0x6166,	// (0x0001528e) main_cset_slider_pane_g14_ParamLimits

0x6166,	// (0x0001528e) main_cset_slider_pane_g14

0x6172,	// (0x0001529a) main_cset_slider_pane_g15_ParamLimits

0x6172,	// (0x0001529a) main_cset_slider_pane_g15

0xd2fd,	// (0x0001c425) main_cset_slider_pane_t14_ParamLimits

0xd2fd,	// (0x0001c425) main_cset_slider_pane_t14

0xd336,	// (0x0001c45e) main_cset_slider_pane_t15_ParamLimits

0xd336,	// (0x0001c45e) main_cset_slider_pane_t15

0x6812,	// (0x0001593a) aid_cam4_burst_size_cell_ParamLimits

0x6812,	// (0x0001593a) aid_cam4_burst_size_cell

0x6832,	// (0x0001595a) grid_cam4_burst_pane_ParamLimits

0x6832,	// (0x0001595a) grid_cam4_burst_pane

0x686a,	// (0x00015992) linegrid_cam4_burst_pane_ParamLimits

0x686a,	// (0x00015992) linegrid_cam4_burst_pane

0xd4cd,	// (0x0001c5f5) scroll_pane_cp30_ParamLimits

0xd4cd,	// (0x0001c5f5) scroll_pane_cp30

0x688e,	// (0x000159b6) cell_cam4_burst_pane_ParamLimits

0x688e,	// (0x000159b6) cell_cam4_burst_pane

0xd4d9,	// (0x0001c601) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4d9,	// (0x0001c601) linegrid_cam4_burst_pane_g1

0x68db,	// (0x00015a03) linegrid_cam4_burst_pane_g2_ParamLimits

0x68db,	// (0x00015a03) linegrid_cam4_burst_pane_g2

0xd4e6,	// (0x0001c60e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4e6,	// (0x0001c60e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0001eb65) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0001eb65) linegrid_cam4_burst_pane_g

0x68ec,	// (0x00015a14) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x68ec,	// (0x00015a14) linegrid_cam4_burst_pane_g3_copy1

0xd4f3,	// (0x0001c61b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4f3,	// (0x0001c61b) linegrid_cam4_burst_pane_g4

0x6906,	// (0x00015a2e) linegrid_cam4_burst_pane_g5_ParamLimits

0x6906,	// (0x00015a2e) linegrid_cam4_burst_pane_g5

0x6917,	// (0x00015a3f) linegrid_cam4_burst_pane_g6_ParamLimits

0x6917,	// (0x00015a3f) linegrid_cam4_burst_pane_g6

0xd500,	// (0x0001c628) linegrid_cam4_burst_pane_g7_ParamLimits

0xd500,	// (0x0001c628) linegrid_cam4_burst_pane_g7

0x692e,	// (0x00015a56) cell_cam4_burst_pane_g1

0xd519,	// (0x0001c641) main_cam5_pane_t1_ParamLimits

0xd519,	// (0x0001c641) main_cam5_pane_t1

0xd52b,	// (0x0001c653) main_cam5_pane_t2_ParamLimits

0xd52b,	// (0x0001c653) main_cam5_pane_t2

0xd53d,	// (0x0001c665) main_cam5_pane_t3_ParamLimits

0xd53d,	// (0x0001c665) main_cam5_pane_t3

0xd54f,	// (0x0001c677) main_cam5_pane_t4_ParamLimits

0xd54f,	// (0x0001c677) main_cam5_pane_t4

0xd567,	// (0x0001c68f) main_cam5_pane_t5_ParamLimits

0xd567,	// (0x0001c68f) main_cam5_pane_t5

0xd57b,	// (0x0001c6a3) main_cam5_pane_t6_ParamLimits

0xd57b,	// (0x0001c6a3) main_cam5_pane_t6

0xd58f,	// (0x0001c6b7) main_cam5_pane_t7_ParamLimits

0xd58f,	// (0x0001c6b7) main_cam5_pane_t7

0xd5a1,	// (0x0001c6c9) main_cam5_pane_t8_ParamLimits

0xd5a1,	// (0x0001c6c9) main_cam5_pane_t8

0xd5bd,	// (0x0001c6e5) main_cam5_pane_t9_ParamLimits

0xd5bd,	// (0x0001c6e5) main_cam5_pane_t9

0xd5cf,	// (0x0001c6f7) main_cam5_pane_t10_ParamLimits

0xd5cf,	// (0x0001c6f7) main_cam5_pane_t10

0xd5e1,	// (0x0001c709) main_cam5_pane_t11_ParamLimits

0xd5e1,	// (0x0001c709) main_cam5_pane_t11

0xd5f3,	// (0x0001c71b) main_cam5_pane_t12_ParamLimits

0xd5f3,	// (0x0001c71b) main_cam5_pane_t12

0xd608,	// (0x0001c730) main_cam5_pane_t13_ParamLimits

0xd608,	// (0x0001c730) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0001eb71) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0001eb71) main_cam5_pane_t

0x042a,	// (0x0000f552) popup_scut_keymap_window_ParamLimits

0x042a,	// (0x0000f552) popup_scut_keymap_window

0x6941,	// (0x00015a69) aid_size_cell_brow_shortcut

0x9e78,	// (0x00018fa0) bg_popup_window_pane_cp010

0x694d,	// (0x00015a75) grid_scut_pane

0x6959,	// (0x00015a81) cell_scut_pane_ParamLimits

0x6959,	// (0x00015a81) cell_scut_pane

0x6970,	// (0x00015a98) cell_scut_pane_g1

0xd625,	// (0x0001c74d) cell_scut_pane_t1

0xd634,	// (0x0001c75c) cell_scut_pane_t2

0x6979,	// (0x00015aa1) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0001eb8c) cell_scut_pane_t

0x4518,	// (0x00013640) main_mup3_pane_g8_ParamLimits

0x4518,	// (0x00013640) main_mup3_pane_g8

0x5a30,	// (0x00014b58) area_vitu2_query_pane_ParamLimits

0x5a30,	// (0x00014b58) area_vitu2_query_pane

0x66ba,	// (0x000157e2) input_focus_pane_cp08

0xd643,	// (0x0001c76b) area_vitu2_query_pane_g1

0x6987,	// (0x00015aaf) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0001eb93) area_vitu2_query_pane_g

0x6998,	// (0x00015ac0) area_vitu2_query_pane_t1_ParamLimits

0x6998,	// (0x00015ac0) area_vitu2_query_pane_t1

0x69ac,	// (0x00015ad4) area_vitu2_query_pane_t2_ParamLimits

0x69ac,	// (0x00015ad4) area_vitu2_query_pane_t2

0x69c0,	// (0x00015ae8) area_vitu2_query_pane_t3_ParamLimits

0x69c0,	// (0x00015ae8) area_vitu2_query_pane_t3

0xd64f,	// (0x0001c777) area_vitu2_query_pane_t4_ParamLimits

0xd64f,	// (0x0001c777) area_vitu2_query_pane_t4

0xd677,	// (0x0001c79f) area_vitu2_query_pane_t5_ParamLimits

0xd677,	// (0x0001c79f) area_vitu2_query_pane_t5

0xd69f,	// (0x0001c7c7) area_vitu2_query_pane_t6_ParamLimits

0xd69f,	// (0x0001c7c7) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0001eb98) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0001eb98) area_vitu2_query_pane_t

0x69e8,	// (0x00015b10) bg_button_pane_cp018

0x69f6,	// (0x00015b1e) bg_button_pane_cp021

0x6a02,	// (0x00015b2a) bg_button_pane_cp022

0x6a13,	// (0x00015b3b) input_focus_pane_cp09

0xa7a1,	// (0x000198c9) aid_size_touch_mv_arrow_left

0xa7cc,	// (0x000198f4) aid_size_touch_mv_arrow_right

0xd2ab,	// (0x0001c3d3) main_cset_slider_pane_g16_ParamLimits

0xd2ab,	// (0x0001c3d3) main_cset_slider_pane_g16

0xd2b7,	// (0x0001c3df) main_cset_slider_pane_g17_ParamLimits

0xd2b7,	// (0x0001c3df) main_cset_slider_pane_g17

0x692e,	// (0x00015a56) cell_cam4_burst_pane_g1_ParamLimits

0x9433,	// (0x0001855b) compa_mode_pane

0x6388,	// (0x000154b0) popup_vtel_slider_window_g3_ParamLimits

0x6388,	// (0x000154b0) popup_vtel_slider_window_g3

0x639f,	// (0x000154c7) popup_vtel_slider_window_g4_ParamLimits

0x639f,	// (0x000154c7) popup_vtel_slider_window_g4

0x63b6,	// (0x000154de) popup_vtel_slider_window_t1_ParamLimits

0x63b6,	// (0x000154de) popup_vtel_slider_window_t1

0x9433,	// (0x0001855b) main_cl_pane

0xbe21,	// (0x0001af49) popup_imed_adjust2_window_ParamLimits

0xbdf9,	// (0x0001af21) bg_tb_trans_pane_cp05_ParamLimits

0xc88d,	// (0x0001b9b5) popup_imed_adjust2_window_g1_ParamLimits

0xc89c,	// (0x0001b9c4) popup_imed_adjust2_window_g2_ParamLimits

0xc89c,	// (0x0001b9c4) popup_imed_adjust2_window_g2

0xc8a8,	// (0x0001b9d0) popup_imed_adjust2_window_g3_ParamLimits

0xc8a8,	// (0x0001b9d0) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0001e8ff) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0001e8ff) popup_imed_adjust2_window_g

0xc8b4,	// (0x0001b9dc) popup_imed_adjust2_window_t1_ParamLimits

0xc8cc,	// (0x0001b9f4) slider_imed_adjust_pane_ParamLimits

0xc8e0,	// (0x0001ba08) slider_imed_adjust_pane_g1_ParamLimits

0xc8f0,	// (0x0001ba18) slider_imed_adjust_pane_g2_ParamLimits

0xc900,	// (0x0001ba28) slider_imed_adjust_pane_g3_ParamLimits

0xc911,	// (0x0001ba39) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0001e906) slider_imed_adjust_pane_g_ParamLimits

0x57b9,	// (0x000148e1) aid_touch_area_cam4_ParamLimits

0x57b9,	// (0x000148e1) aid_touch_area_cam4

0xcfc4,	// (0x0001c0ec) battery_pane_cp01

0x5888,	// (0x000149b0) main_camera4_pane_g6_ParamLimits

0x5888,	// (0x000149b0) main_camera4_pane_g6

0x58b2,	// (0x000149da) main_camera4_pane_t2_ParamLimits

0x58b2,	// (0x000149da) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0001ea0d) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0001ea0d) main_camera4_pane_t

0x58e7,	// (0x00014a0f) aid_touch_area_vid4_ParamLimits

0x58e7,	// (0x00014a0f) aid_touch_area_vid4

0x593b,	// (0x00014a63) main_video4_pane_g5_ParamLimits

0x593b,	// (0x00014a63) main_video4_pane_g5

0x5960,	// (0x00014a88) vid4_progress_pane_ParamLimits

0x5960,	// (0x00014a88) vid4_progress_pane

0xd2c3,	// (0x0001c3eb) main_cset_slider_pane_g18_ParamLimits

0xd2c3,	// (0x0001c3eb) main_cset_slider_pane_g18

0xd50d,	// (0x0001c635) cell_cam4_burst_pane_g2_ParamLimits

0xd50d,	// (0x0001c635) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0001eb6c) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0001eb6c) cell_cam4_burst_pane_g

0x9c12,	// (0x00018d3a) bg_cl_pane_ParamLimits

0x9c12,	// (0x00018d3a) bg_cl_pane

0x6a24,	// (0x00015b4c) cl_header_pane_ParamLimits

0x6a24,	// (0x00015b4c) cl_header_pane

0x6a38,	// (0x00015b60) cl_listscroll_pane_ParamLimits

0x6a38,	// (0x00015b60) cl_listscroll_pane

0xd6eb,	// (0x0001c813) bg_cl_pane_g1

0xd6f3,	// (0x0001c81b) bg_cl_pane_g2

0xd6fb,	// (0x0001c823) bg_cl_pane_g3

0xd703,	// (0x0001c82b) bg_cl_pane_g4

0xd70b,	// (0x0001c833) bg_cl_pane_g5

0xd713,	// (0x0001c83b) bg_cl_pane_g6

0xd71b,	// (0x0001c843) bg_cl_pane_g7

0xd723,	// (0x0001c84b) bg_cl_pane_g8

0xd72b,	// (0x0001c853) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0001eba7) bg_cl_pane_g

0x6a48,	// (0x00015b70) aid_height_cl_leading_ParamLimits

0x6a48,	// (0x00015b70) aid_height_cl_leading

0x6a54,	// (0x00015b7c) aid_height_cl_text_ParamLimits

0x6a54,	// (0x00015b7c) aid_height_cl_text

0x94a3,	// (0x000185cb) bg_cl_header_pane_ParamLimits

0x94a3,	// (0x000185cb) bg_cl_header_pane

0x6a73,	// (0x00015b9b) cl_header_pane_g1_ParamLimits

0x6a73,	// (0x00015b9b) cl_header_pane_g1

0x6a89,	// (0x00015bb1) cl_header_pane_t1_ParamLimits

0x6a89,	// (0x00015bb1) cl_header_pane_t1

0xd733,	// (0x0001c85b) cl_list_pane

0xd27e,	// (0x0001c3a6) hc_scroll_pane_cp01

0xa0bb,	// (0x000191e3) bg_cl_header_pane_g1

0xd125,	// (0x0001c24d) bg_cl_header_pane_g2

0xa0db,	// (0x00019203) bg_cl_header_pane_g3

0xd135,	// (0x0001c25d) bg_cl_header_pane_g4

0xd12d,	// (0x0001c255) bg_cl_header_pane_g5

0xd3fc,	// (0x0001c524) bg_cl_header_pane_g6

0xd14d,	// (0x0001c275) bg_cl_header_pane_g7

0xd155,	// (0x0001c27d) bg_cl_header_pane_g8

0xd145,	// (0x0001c26d) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0001ebba) bg_cl_header_pane_g

0x6aa2,	// (0x00015bca) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6aa2,	// (0x00015bca) hc_cl_list_double_graphic_heading_pane

0x6ab3,	// (0x00015bdb) hc_cl_list_single_graphic_pane_ParamLimits

0x6ab3,	// (0x00015bdb) hc_cl_list_single_graphic_pane

0x6acc,	// (0x00015bf4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6acc,	// (0x00015bf4) hc_cl_list_single_graphic_pane_g1

0x6ad8,	// (0x00015c00) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6ad8,	// (0x00015c00) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0001ebcd) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0001ebcd) hc_cl_list_single_graphic_pane_g

0x6aec,	// (0x00015c14) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6aec,	// (0x00015c14) hc_cl_list_single_graphic_pane_t1

0x6acc,	// (0x00015bf4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6acc,	// (0x00015bf4) hc_cl_list_double_graphic_heading_pane_g1

0x6b01,	// (0x00015c29) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b01,	// (0x00015c29) hc_cl_list_double_graphic_heading_pane_g2

0x6b15,	// (0x00015c3d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b15,	// (0x00015c3d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0001ebd2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0001ebd2) hc_cl_list_double_graphic_heading_pane_g

0x6b29,	// (0x00015c51) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6b29,	// (0x00015c51) hc_cl_list_double_graphic_heading_pane_t1

0x6b3e,	// (0x00015c66) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6b3e,	// (0x00015c66) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0001ebd9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0001ebd9) hc_cl_list_double_graphic_heading_pane_t

0xd744,	// (0x0001c86c) vid4_progress_pane_g1

0xd754,	// (0x0001c87c) vid4_progress_pane_g2

0x6b53,	// (0x00015c7b) vid4_progress_pane_g3

0xd764,	// (0x0001c88c) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0001ebde) vid4_progress_pane_g

0x6b65,	// (0x00015c8d) vid4_progress_pane_t1

0xd77c,	// (0x0001c8a4) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0001ebe9) vid4_progress_pane_t

0x6b7b,	// (0x00015ca3) wait_bar_pane_cp07

0xc107,	// (0x0001b22f) blid_firmament_pane_ParamLimits

0xc14a,	// (0x0001b272) popup_blid_sat_info2_window_g1

0xc16e,	// (0x0001b296) popup_blid_sat_info2_window_t3

0xc17c,	// (0x0001b2a4) popup_blid_sat_info2_window_t4

0xc18a,	// (0x0001b2b2) popup_blid_sat_info2_window_t5

0xc198,	// (0x0001b2c0) popup_blid_sat_info2_window_t6

0xc1a8,	// (0x0001b2d0) popup_blid_sat_info2_window_t7

0xc1b6,	// (0x0001b2de) popup_blid_sat_info2_window_t8

0xc1c4,	// (0x0001b2ec) popup_blid_sat_info2_window_t9

0xc1d2,	// (0x0001b2fa) popup_blid_sat_info2_window_t10

0xc294,	// (0x0001b3bc) aid_firma_cardinal_ParamLimits

0xc2a8,	// (0x0001b3d0) blid_firmament_pane_t1_ParamLimits

0xc2bf,	// (0x0001b3e7) blid_firmament_pane_t2_ParamLimits

0xc2d6,	// (0x0001b3fe) blid_firmament_pane_t3_ParamLimits

0xc2ed,	// (0x0001b415) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0001e7f3) blid_firmament_pane_t_ParamLimits

0xc304,	// (0x0001b42c) blid_sat_info_pane_ParamLimits

0x94a3,	// (0x000185cb) main_cam_set_pane_ParamLimits

0x4dd3,	// (0x00013efb) aid_size_cell_colour_35_ParamLimits

0x4df3,	// (0x00013f1b) aid_size_cell_colour_112_ParamLimits

0x4e13,	// (0x00013f3b) aid_size_cell_effect_ParamLimits

0xbdf9,	// (0x0001af21) bg_tb_trans_pane_cp02_ParamLimits

0xa351,	// (0x00019479) heading_imed_pane_ParamLimits

0x4e33,	// (0x00013f5b) listscroll_imed_pane_ParamLimits

0xb3e5,	// (0x0001a50d) popup_call2_audio_first_window_g5_ParamLimits

0xb3e5,	// (0x0001a50d) popup_call2_audio_first_window_g5

0x53d1,	// (0x000144f9) aid_size_touch_image3_arrow_left_ParamLimits

0x53d1,	// (0x000144f9) aid_size_touch_image3_arrow_left

0x53fd,	// (0x00014525) aid_size_touch_image3_arrow_right_ParamLimits

0x53fd,	// (0x00014525) aid_size_touch_image3_arrow_right

0xd791,	// (0x0001c8b9) vid4_progress_pane_t3

0x5148,	// (0x00014270) main_hwr_training_symbol_option_pane_ParamLimits

0x5148,	// (0x00014270) main_hwr_training_symbol_option_pane

0xcb7a,	// (0x0001bca2) popup_hwr_training_preview_window_ParamLimits

0xcb7a,	// (0x0001bca2) popup_hwr_training_preview_window

0x5168,	// (0x00014290) hwr_training_navi_pane_g5_ParamLimits

0x5168,	// (0x00014290) hwr_training_navi_pane_g5

0xd101,	// (0x0001c229) popup_char_count_window

0x94a3,	// (0x000185cb) bg_popup_sub_pane_cp20_ParamLimits

0x64c4,	// (0x000155ec) list_vitu2_match_list_pane_ParamLimits

0x64d3,	// (0x000155fb) vitu2_page_scroll_pane_ParamLimits

0x64d3,	// (0x000155fb) vitu2_page_scroll_pane

0xd7c9,	// (0x0001c8f1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7c9,	// (0x0001c8f1) list_single_hwr_training_symbol_option_pane

0xd7dc,	// (0x0001c904) list_single_hwr_training_symbol_option_pane_g1

0xd7e4,	// (0x0001c90c) list_single_hwr_training_symbol_option_pane_t1

0xd7f2,	// (0x0001c91a) bg_button_pane_cp023

0xd7fb,	// (0x0001c923) bg_button_pane_cp024

0x6bc4,	// (0x00015cec) vitu2_page_scroll_pane_g1

0x6bcc,	// (0x00015cf4) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0001ebf0) vitu2_page_scroll_pane_g

0x6bd4,	// (0x00015cfc) vitu2_page_scroll_pane_t1

0x9cb7,	// (0x00018ddf) popup_char_count_window_g1

0xd82e,	// (0x0001c956) popup_char_count_window_g2

0xd251,	// (0x0001c379) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0001ebf5) popup_char_count_window_g

0xd837,	// (0x0001c95f) popup_char_count_window_t1

0x9433,	// (0x0001855b) main_vded2_pane

0xc879,	// (0x0001b9a1) aid_size_cell_imed_line

0xc883,	// (0x0001b9ab) grid_imed_line_width_pane

0xd074,	// (0x0001c19c) vid4_indicators_pane_g4

0xd845,	// (0x0001c96d) cell_imed_line_width_pane_ParamLimits

0xd845,	// (0x0001c96d) cell_imed_line_width_pane

0xd859,	// (0x0001c981) cell_imed_line_width_pane_g1

0xd862,	// (0x0001c98a) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0001ebfc) cell_imed_line_width_pane_g

0x6be3,	// (0x00015d0b) main_vded2_pane_g1_ParamLimits

0x6be3,	// (0x00015d0b) main_vded2_pane_g1

0x6bf9,	// (0x00015d21) main_vded2_pane_g2_ParamLimits

0x6bf9,	// (0x00015d21) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0001ec01) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0001ec01) main_vded2_pane_g

0x6c0b,	// (0x00015d33) vded2_slider_pane_ParamLimits

0x6c0b,	// (0x00015d33) vded2_slider_pane

0x6c1b,	// (0x00015d43) aid_size_touch_vded2_end

0x6c25,	// (0x00015d4d) aid_size_touch_vded2_playhead

0xd86a,	// (0x0001c992) aid_size_touch_vded2_start

0xd872,	// (0x0001c99a) vded2_slider_bg_pane

0xd87b,	// (0x0001c9a3) vded2_slider_pane_g1

0xd884,	// (0x0001c9ac) vded2_slider_pane_g2

0x6c2f,	// (0x00015d57) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0001ec06) vded2_slider_pane_g

0xd88c,	// (0x0001c9b4) vded2_slider_bg_pane_g1

0xd895,	// (0x0001c9bd) vded2_slider_bg_pane_g2

0xd89e,	// (0x0001c9c6) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0001ec0d) vded2_slider_bg_pane_g

0x2b4f,	// (0x00011c77) aid_postcard_touch_down_pane_ParamLimits

0x2b4f,	// (0x00011c77) aid_postcard_touch_down_pane

0x2b65,	// (0x00011c8d) aid_postcard_touch_up_pane_ParamLimits

0x2b65,	// (0x00011c8d) aid_postcard_touch_up_pane

0x9433,	// (0x0001855b) main_blid2_pane

0xbe07,	// (0x0001af2f) popup_blid2_search_window

0x9433,	// (0x0001855b) blid2_gps_pane

0x9433,	// (0x0001855b) blid2_navig_pane

0x9433,	// (0x0001855b) blid2_search_pane

0x9433,	// (0x0001855b) blid2_tripm_pane

0x6c3a,	// (0x00015d62) blid2_search_pane_g1_ParamLimits

0x6c3a,	// (0x00015d62) blid2_search_pane_g1

0x6c52,	// (0x00015d7a) blid2_search_pane_t1_ParamLimits

0x6c52,	// (0x00015d7a) blid2_search_pane_t1

0x6c64,	// (0x00015d8c) aid_size_cell_blid2_gps_ParamLimits

0x6c64,	// (0x00015d8c) aid_size_cell_blid2_gps

0x6c7c,	// (0x00015da4) blid2_gps_pane_g1_ParamLimits

0x6c7c,	// (0x00015da4) blid2_gps_pane_g1

0x6c90,	// (0x00015db8) grid_blid2_satellite_pane_ParamLimits

0x6c90,	// (0x00015db8) grid_blid2_satellite_pane

0x6caa,	// (0x00015dd2) blid2_navig_pane_g1_ParamLimits

0x6caa,	// (0x00015dd2) blid2_navig_pane_g1

0x6cb6,	// (0x00015dde) blid2_navig_pane_t1_ParamLimits

0x6cb6,	// (0x00015dde) blid2_navig_pane_t1

0x6cd1,	// (0x00015df9) blid2_navig_pane_t2_ParamLimits

0x6cd1,	// (0x00015df9) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0001ec14) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0001ec14) blid2_navig_pane_t

0x6cec,	// (0x00015e14) blid2_navig_ring_pane_ParamLimits

0x6cec,	// (0x00015e14) blid2_navig_ring_pane

0x6d05,	// (0x00015e2d) blid2_speed_pane_ParamLimits

0x6d05,	// (0x00015e2d) blid2_speed_pane

0x6d11,	// (0x00015e39) blid2_tripm_pane_g1_ParamLimits

0x6d11,	// (0x00015e39) blid2_tripm_pane_g1

0x6d2c,	// (0x00015e54) blid2_tripm_pane_g2_ParamLimits

0x6d2c,	// (0x00015e54) blid2_tripm_pane_g2

0x6d40,	// (0x00015e68) blid2_tripm_pane_g3_ParamLimits

0x6d40,	// (0x00015e68) blid2_tripm_pane_g3

0x6d54,	// (0x00015e7c) blid2_tripm_pane_g4_ParamLimits

0x6d54,	// (0x00015e7c) blid2_tripm_pane_g4

0x6d68,	// (0x00015e90) blid2_tripm_pane_g5_ParamLimits

0x6d68,	// (0x00015e90) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0001ec19) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0001ec19) blid2_tripm_pane_g

0x6d8e,	// (0x00015eb6) blid2_tripm_pane_t1_ParamLimits

0x6d8e,	// (0x00015eb6) blid2_tripm_pane_t1

0x6da9,	// (0x00015ed1) blid2_tripm_pane_t2_ParamLimits

0x6da9,	// (0x00015ed1) blid2_tripm_pane_t2

0x6dc2,	// (0x00015eea) blid2_tripm_pane_t3_ParamLimits

0x6dc2,	// (0x00015eea) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0001ec26) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0001ec26) blid2_tripm_pane_t

0x6e09,	// (0x00015f31) cell_blid2_satellite_pane_ParamLimits

0x6e09,	// (0x00015f31) cell_blid2_satellite_pane

0x6e27,	// (0x00015f4f) cell_blid2_satellite_pane_g1

0xd8a7,	// (0x0001c9cf) cell_blid2_satellite_pane_t1

0xc314,	// (0x0001b43c) blid2_speed_pane_g1

0xd8b5,	// (0x0001c9dd) blid2_speed_pane_t1

0xd8c3,	// (0x0001c9eb) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0001ec2f) blid2_speed_pane_t

0xc314,	// (0x0001b43c) blid2_navig_ring_pane_g1

0x6e30,	// (0x00015f58) blid2_navig_ring_pane_g2

0x6e38,	// (0x00015f60) blid2_navig_ring_pane_g3

0x6e40,	// (0x00015f68) blid2_navig_ring_pane_g4

0x6e48,	// (0x00015f70) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0001ec34) blid2_navig_ring_pane_g

0x9433,	// (0x0001855b) bg_popup_window_pane_cp011

0xd8d1,	// (0x0001c9f9) popup_blid2_search_window_g1

0xd8d9,	// (0x0001ca01) popup_blid2_search_window_t1

0xd8e7,	// (0x0001ca0f) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0001ec3f) popup_blid2_search_window_t

0x9fca,	// (0x000190f2) main_browser_pane_g1

0x9c12,	// (0x00018d3a) main_browser_pane_ParamLimits

0x94a3,	// (0x000185cb) bg_button_pane_cp011_ParamLimits

0x5d63,	// (0x00014e8b) cell_vitu2_function_pane_g1_ParamLimits

0xbdf9,	// (0x0001af21) bg_popup_sub_pane_cp22_ParamLimits

0x66ba,	// (0x000157e2) input_focus_pane_cp08_ParamLimits

0x66d1,	// (0x000157f9) popup_vitu2_query_button_pane_ParamLimits

0x66d1,	// (0x000157f9) popup_vitu2_query_button_pane

0x66e2,	// (0x0001580a) popup_vitu2_query_input_button_pane

0xd457,	// (0x0001c57f) popup_vitu2_query_window_g1_ParamLimits

0x66ec,	// (0x00015814) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0001eb40) popup_vitu2_query_window_g_ParamLimits

0x9433,	// (0x0001855b) bg_button_pane_cp026

0x6e50,	// (0x00015f78) popup_vitu2_query_input_button_pane_g1

0x9433,	// (0x0001855b) bg_button_pane_cp025

0xd8f5,	// (0x0001ca1d) popup_vitu2_query_button_pane_t1

0x41e6,	// (0x0001330e) main_mp3_pane_t6

0x41f4,	// (0x0001331c) popup_slider_window_cp01

0xcfe0,	// (0x0001c108) cam4_battery_pane

0xd033,	// (0x0001c15b) cam4_battery_pane_cp02

0xd73c,	// (0x0001c864) cam4_battery_pane_cp01

0xd73c,	// (0x0001c864) cam4_battery_pane_cp03

0xc314,	// (0x0001b43c) cam4_battery_pane_g1

0xd903,	// (0x0001ca2b) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0001ec44) cam4_battery_pane_g

0xc1e0,	// (0x0001b308) popup_blid_sat_info2_window_t11

0xa7a1,	// (0x000198c9) aid_size_touch_mv_arrow_left_ParamLimits

0xa7cc,	// (0x000198f4) aid_size_touch_mv_arrow_right_ParamLimits

0xa82a,	// (0x00019952) navi_pane_g1_ParamLimits

0xa836,	// (0x0001995e) navi_pane_g2_ParamLimits

0xa864,	// (0x0001998c) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0001e4f2) navi_pane_g_ParamLimits

0x257c,	// (0x000116a4) navi_pane_mv_t1_ParamLimits

0x4e3f,	// (0x00013f67) grid_imed_effect_pane_ParamLimits

0x1390,	// (0x000104b8) aid_placing_vt_slider_lsc

0x9f19,	// (0x00019041) aid_placing_vt_slider_prt

0x94a3,	// (0x000185cb) bg_tb_trans_pane_cp01_ParamLimits

0xc479,	// (0x0001b5a1) popup_image_details_window_g1_ParamLimits

0xc48c,	// (0x0001b5b4) popup_image_details_window_g2_ParamLimits

0xc4a1,	// (0x0001b5c9) popup_image_details_window_g3_ParamLimits

0xc4a1,	// (0x0001b5c9) popup_image_details_window_g3

0xf710,	// (0x0001e838) popup_image_details_window_g_ParamLimits

0xc4b5,	// (0x0001b5dd) popup_image_details_window_t1_ParamLimits

0xc4c7,	// (0x0001b5ef) popup_image_details_window_t2_ParamLimits

0xc4e0,	// (0x0001b608) popup_image_details_window_t3_ParamLimits

0xc4f4,	// (0x0001b61c) popup_image_details_window_t4_ParamLimits

0xc50f,	// (0x0001b637) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0001e83f) popup_image_details_window_t_ParamLimits

0x6a60,	// (0x00015b88) cl_header_name_pane_ParamLimits

0x6a60,	// (0x00015b88) cl_header_name_pane

0x6e58,	// (0x00015f80) cl_header_name_pane_t1_ParamLimits

0x6e58,	// (0x00015f80) cl_header_name_pane_t1

0x6e79,	// (0x00015fa1) cl_header_name_pane_t2_ParamLimits

0x6e79,	// (0x00015fa1) cl_header_name_pane_t2

0x6ebb,	// (0x00015fe3) cl_header_name_pane_t3_ParamLimits

0x6ebb,	// (0x00015fe3) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0001ec49) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0001ec49) cl_header_name_pane_t

0xa8f3,	// (0x00019a1b) navi_pane_mv_g2_ParamLimits

0xd0be,	// (0x0001c1e6) field_vitu2_entry_pane_g1_ParamLimits

0xd0ca,	// (0x0001c1f2) field_vitu2_entry_pane_g2_ParamLimits

0xd0d6,	// (0x0001c1fe) field_vitu2_entry_pane_g3_ParamLimits

0xd0d6,	// (0x0001c1fe) field_vitu2_entry_pane_g3

0xf917,	// (0x0001ea3f) field_vitu2_entry_pane_g_ParamLimits

0xd109,	// (0x0001c231) cell_vitu2_itu_pane_g1_ParamLimits

0x5c0b,	// (0x00014d33) cell_vitu2_itu_pane_g2_ParamLimits

0x5c0b,	// (0x00014d33) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0001ea4b) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0001ea4b) cell_vitu2_itu_pane_g

0x94a3,	// (0x000185cb) bg_vkb2_func_pane_cp05_ParamLimits

0x94a3,	// (0x000185cb) bg_vkb2_func_pane_cp05

0x94a3,	// (0x000185cb) bg_vkb2_func_pane_cp03

0x94a3,	// (0x000185cb) bg_vkb2_func_pane_cp04

0x94a3,	// (0x000185cb) bg_vkb2_func_pane_cp10_ParamLimits

0x94a3,	// (0x000185cb) bg_vkb2_func_pane_cp10

0x6a02,	// (0x00015b2a) bg_vkb2_func_pane_cp08

0x69e8,	// (0x00015b10) bg_vkb2_func_pane_cp06

0x69f6,	// (0x00015b1e) bg_vkb2_func_pane_cp07

0xd804,	// (0x0001c92c) bg_vkb2_func_pane_cp11_ParamLimits

0xd804,	// (0x0001c92c) bg_vkb2_func_pane_cp11

0xd819,	// (0x0001c941) bg_vkb2_func_pane_cp12_ParamLimits

0xd819,	// (0x0001c941) bg_vkb2_func_pane_cp12

0x9433,	// (0x0001855b) bg_vkb2_func_pane_cp09

0xd125,	// (0x0001c24d) bg_vkb2_func_pane_g1

0xa0db,	// (0x00019203) bg_vkb2_func_pane_g2

0xd12d,	// (0x0001c255) bg_vkb2_func_pane_g3

0xd135,	// (0x0001c25d) bg_vkb2_func_pane_g4

0xd3fc,	// (0x0001c524) bg_vkb2_func_pane_g5

0xd14d,	// (0x0001c275) bg_vkb2_func_pane_g6

0xd155,	// (0x0001c27d) bg_vkb2_func_pane_g7

0xd145,	// (0x0001c26d) bg_vkb2_func_pane_g8

0xa0bb,	// (0x000191e3) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0001ec50) bg_vkb2_func_pane_g

0x6d7c,	// (0x00015ea4) blid2_tripm_pane_g6_ParamLimits

0x6d7c,	// (0x00015ea4) blid2_tripm_pane_g6

0xceb1,	// (0x0001bfd9) mp4_progress_pane_g1

0x6df5,	// (0x00015f1d) blid2_tripm_values_pane_ParamLimits

0x6df5,	// (0x00015f1d) blid2_tripm_values_pane

0x6eec,	// (0x00016014) blid2_tripm_values_pane_t1

0x6efa,	// (0x00016022) blid2_tripm_values_pane_t2

0x6f08,	// (0x00016030) blid2_tripm_values_pane_t3

0x6f16,	// (0x0001603e) blid2_tripm_values_pane_t4

0x6f24,	// (0x0001604c) blid2_tripm_values_pane_t5

0x6f32,	// (0x0001605a) blid2_tripm_values_pane_t6

0x6f40,	// (0x00016068) blid2_tripm_values_pane_t7

0x6f4e,	// (0x00016076) blid2_tripm_values_pane_t8

0x6f5c,	// (0x00016084) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0001ec63) blid2_tripm_values_pane_t

0x13d2,	// (0x000104fa) call_video_pane_t1_ParamLimits

0x13f0,	// (0x00010518) call_video_pane_t2_ParamLimits

0xf253,	// (0x0001e37b) call_video_pane_t_ParamLimits

0x2a54,	// (0x00011b7c) msg_header_pane_g1_ParamLimits

0xaaed,	// (0x00019c15) msg_header_pane_g2_ParamLimits

0xaaed,	// (0x00019c15) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0001e595) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0001e595) msg_header_pane_g

0x9c12,	// (0x00018d3a) main_clock2_pane_ParamLimits

0x4b40,	// (0x00013c68) grid_clock2_toolbar_pane_ParamLimits

0x4b40,	// (0x00013c68) grid_clock2_toolbar_pane

0x4b40,	// (0x00013c68) listscroll_clock2_pane_ParamLimits

0x4b40,	// (0x00013c68) listscroll_clock2_pane

0x4c24,	// (0x00013d4c) main_clock2_pane_t3_ParamLimits

0x4c24,	// (0x00013d4c) main_clock2_pane_t3

0x4c48,	// (0x00013d70) main_clock2_pane_t4_ParamLimits

0x4c48,	// (0x00013d70) main_clock2_pane_t4

0xd90d,	// (0x0001ca35) cell_clock2_toolbar_pane

0xd915,	// (0x0001ca3d) cell_clock2_toolbar_pane_cp01

0xd915,	// (0x0001ca3d) cell_clock2_toolbar_pane_cp02

0xd91d,	// (0x0001ca45) cell_clock2_toolbar_pane_cp03

0xd925,	// (0x0001ca4d) list_clock2_pane

0xa726,	// (0x0001984e) scroll_pane_cp10

0xd92d,	// (0x0001ca55) list_single_clock2_pane_ParamLimits

0xd92d,	// (0x0001ca55) list_single_clock2_pane

0x9e78,	// (0x00018fa0) list_highlight_pane_cp08

0xd93a,	// (0x0001ca62) list_single_clock2_pane_t1

0xd948,	// (0x0001ca70) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0001ec76) list_single_clock2_pane_t

0x9433,	// (0x0001855b) bg_button_pane_cp10

0xd956,	// (0x0001ca7e) cell_clock2_toolbar_pane_g1

0x2adb,	// (0x00011c03) aid_main_viewer_pane_g1_ParamLimits

0x2adb,	// (0x00011c03) aid_main_viewer_pane_g1

0x2ae9,	// (0x00011c11) aid_main_viewer_pane_g2_ParamLimits

0x2ae9,	// (0x00011c11) aid_main_viewer_pane_g2

0x2af7,	// (0x00011c1f) aid_main_viewer_pane_g3_ParamLimits

0x2af7,	// (0x00011c1f) aid_main_viewer_pane_g3

0x2b06,	// (0x00011c2e) aid_main_viewer_pane_g4_ParamLimits

0x2b06,	// (0x00011c2e) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0001e5a6) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0001e5a6) aid_main_viewer_pane_g

0x340e,	// (0x00012536) main_calc_pane_ParamLimits

0x3422,	// (0x0001254a) main_dialer2_pane_ParamLimits

0x9433,	// (0x0001855b) main_cam6_pane

0x9433,	// (0x0001855b) main_vid6_pane

0x4b4c,	// (0x00013c74) listscroll_gen_pane_cp06_ParamLimits

0x4b4c,	// (0x00013c74) listscroll_gen_pane_cp06

0x4c6b,	// (0x00013d93) main_clock2_pane_t5_ParamLimits

0x4c6b,	// (0x00013d93) main_clock2_pane_t5

0x4cc9,	// (0x00013df1) aid_call2_pane_cp10_ParamLimits

0x4cdb,	// (0x00013e03) aid_call_pane_cp10_ParamLimits

0xa795,	// (0x000198bd) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa795,	// (0x000198bd) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ced,	// (0x00013e15) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ced,	// (0x00013e15) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa795,	// (0x000198bd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0001e8f4) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d03,	// (0x00013e2b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x537e,	// (0x000144a6) cell_dialer2_keypad_pane_g2_ParamLimits

0x537e,	// (0x000144a6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0001e9de) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0001e9de) cell_dialer2_keypad_pane_g

0x539a,	// (0x000144c2) cell_dialer2_keypad_pane_t1

0x607d,	// (0x000151a5) main_cset_text2_pane_ParamLimits

0x607d,	// (0x000151a5) main_cset_text2_pane

0xd643,	// (0x0001c76b) area_vitu2_query_pane_g1_ParamLimits

0x6987,	// (0x00015aaf) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0001eb93) area_vitu2_query_pane_g_ParamLimits

0xd6c7,	// (0x0001c7ef) area_vitu2_query_pane_t7_ParamLimits

0xd6c7,	// (0x0001c7ef) area_vitu2_query_pane_t7

0x69e8,	// (0x00015b10) bg_button_pane_cp018_ParamLimits

0x69f6,	// (0x00015b1e) bg_button_pane_cp021_ParamLimits

0x6a02,	// (0x00015b2a) bg_button_pane_cp022_ParamLimits

0x6a02,	// (0x00015b2a) bg_vkb2_func_pane_cp08_ParamLimits

0x69e8,	// (0x00015b10) bg_vkb2_func_pane_cp06_ParamLimits

0x69f6,	// (0x00015b1e) bg_vkb2_func_pane_cp07_ParamLimits

0x6a13,	// (0x00015b3b) input_focus_pane_cp09_ParamLimits

0xd95e,	// (0x0001ca86) cam6_autofocus_pane_ParamLimits

0xd95e,	// (0x0001ca86) cam6_autofocus_pane

0x6f6a,	// (0x00016092) cam6_image_uncrop_pane_ParamLimits

0x6f6a,	// (0x00016092) cam6_image_uncrop_pane

0x6f79,	// (0x000160a1) cam6_indi_pane_ParamLimits

0x6f79,	// (0x000160a1) cam6_indi_pane

0x6f8f,	// (0x000160b7) cam6_mode_pane_ParamLimits

0x6f8f,	// (0x000160b7) cam6_mode_pane

0x6fa1,	// (0x000160c9) cam6_timer_pane_ParamLimits

0x6fa1,	// (0x000160c9) cam6_timer_pane

0x6fb1,	// (0x000160d9) cam6_zoom_pane_ParamLimits

0x6fb1,	// (0x000160d9) cam6_zoom_pane

0x6fbd,	// (0x000160e5) cam6_mode_pane_g1_ParamLimits

0x6fbd,	// (0x000160e5) cam6_mode_pane_g1

0x6fcd,	// (0x000160f5) cam6_mode_pane_g2_ParamLimits

0x6fcd,	// (0x000160f5) cam6_mode_pane_g2

0x6fdd,	// (0x00016105) cam6_mode_pane_g3_ParamLimits

0x6fdd,	// (0x00016105) cam6_mode_pane_g3

0x6fed,	// (0x00016115) cam6_mode_pane_g4_ParamLimits

0x6fed,	// (0x00016115) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0001ec7b) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0001ec7b) cam6_mode_pane_g

0xd227,	// (0x0001c34f) bg_tb_trans_pane_cp08_ParamLimits

0xd227,	// (0x0001c34f) bg_tb_trans_pane_cp08

0xd96c,	// (0x0001ca94) cam6_battery_pane_ParamLimits

0xd96c,	// (0x0001ca94) cam6_battery_pane

0xd982,	// (0x0001caaa) cam6_indi_pane_g1_ParamLimits

0xd982,	// (0x0001caaa) cam6_indi_pane_g1

0xd994,	// (0x0001cabc) cam6_indi_pane_g2_ParamLimits

0xd994,	// (0x0001cabc) cam6_indi_pane_g2

0xd9a6,	// (0x0001cace) cam6_indi_pane_g3_ParamLimits

0xd9a6,	// (0x0001cace) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0001ec84) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0001ec84) cam6_indi_pane_g

0xd9b8,	// (0x0001cae0) cam6_indi_pane_t1_ParamLimits

0xd9b8,	// (0x0001cae0) cam6_indi_pane_t1

0x6ffd,	// (0x00016125) cam6_autofocus_pane_g1

0x7005,	// (0x0001612d) cam6_autofocus_pane_g2

0x700d,	// (0x00016135) cam6_autofocus_pane_g3

0x7015,	// (0x0001613d) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0001ec8b) cam6_autofocus_pane_g

0xd9de,	// (0x0001cb06) cam6_timer_pane_g1

0xd9e6,	// (0x0001cb0e) cam6_timer_pane_t1

0xd9f4,	// (0x0001cb1c) cam6_zoom_cont_pane

0xd9fc,	// (0x0001cb24) cam6_zoom_pane_g1

0xda04,	// (0x0001cb2c) cam6_zoom_pane_g2

0x701d,	// (0x00016145) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0001ec94) cam6_zoom_pane_g

0xc314,	// (0x0001b43c) cam6_battery_pane_g1

0xc314,	// (0x0001b43c) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0001e7fc) cam6_battery_pane_g

0xda0c,	// (0x0001cb34) cam6_zoom_cont_pane_g1

0xda15,	// (0x0001cb3d) cam6_zoom_cont_pane_g2

0xda1e,	// (0x0001cb46) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0001ec9b) cam6_zoom_cont_pane_g

0x703a,	// (0x00016162) cam6_mode_pane_cp_ParamLimits

0x703a,	// (0x00016162) cam6_mode_pane_cp

0x6fb1,	// (0x000160d9) cam6_zoom_pane_cp_ParamLimits

0x6fb1,	// (0x000160d9) cam6_zoom_pane_cp

0x704c,	// (0x00016174) vid6_image_uncrop_cif_pane_ParamLimits

0x704c,	// (0x00016174) vid6_image_uncrop_cif_pane

0x705c,	// (0x00016184) vid6_image_uncrop_nhd_pane_ParamLimits

0x705c,	// (0x00016184) vid6_image_uncrop_nhd_pane

0x6f6a,	// (0x00016092) vid6_image_uncrop_vga_pane_ParamLimits

0x6f6a,	// (0x00016092) vid6_image_uncrop_vga_pane

0x706b,	// (0x00016193) vid6_image_uncrop_wvga_pane_ParamLimits

0x706b,	// (0x00016193) vid6_image_uncrop_wvga_pane

0x707a,	// (0x000161a2) vid6_indi_pane_ParamLimits

0x707a,	// (0x000161a2) vid6_indi_pane

0xd227,	// (0x0001c34f) bg_tb_trans_pane_cp09_ParamLimits

0xd227,	// (0x0001c34f) bg_tb_trans_pane_cp09

0xda36,	// (0x0001cb5e) cam6_battery_pane_cp_ParamLimits

0xda36,	// (0x0001cb5e) cam6_battery_pane_cp

0xda42,	// (0x0001cb6a) vid6_indi_pane_g1_ParamLimits

0xda42,	// (0x0001cb6a) vid6_indi_pane_g1

0xda54,	// (0x0001cb7c) vid6_indi_pane_g2_ParamLimits

0xda54,	// (0x0001cb7c) vid6_indi_pane_g2

0xda66,	// (0x0001cb8e) vid6_indi_pane_g3_ParamLimits

0xda66,	// (0x0001cb8e) vid6_indi_pane_g3

0xda7b,	// (0x0001cba3) vid6_indi_pane_g4_ParamLimits

0xda7b,	// (0x0001cba3) vid6_indi_pane_g4

0xda90,	// (0x0001cbb8) vid6_indi_pane_g5_ParamLimits

0xda90,	// (0x0001cbb8) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0001eca2) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0001eca2) vid6_indi_pane_g

0xdaaa,	// (0x0001cbd2) vid6_indi_pane_t1_ParamLimits

0xdaaa,	// (0x0001cbd2) vid6_indi_pane_t1

0xdac0,	// (0x0001cbe8) vid6_indi_pane_t2_ParamLimits

0xdac0,	// (0x0001cbe8) vid6_indi_pane_t2

0xdae8,	// (0x0001cc10) vid6_indi_pane_t3_ParamLimits

0xdae8,	// (0x0001cc10) vid6_indi_pane_t3

0xdb10,	// (0x0001cc38) vid6_indi_pane_t4_ParamLimits

0xdb10,	// (0x0001cc38) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0001ecad) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0001ecad) vid6_indi_pane_t

0xdb34,	// (0x0001cc5c) wait_bar_pane_cp08

0x7092,	// (0x000161ba) main_cset_text2_pane_t1_ParamLimits

0x7092,	// (0x000161ba) main_cset_text2_pane_t1

0x7025,	// (0x0001614d) listscroll_gen_pane_cp06_t1_ParamLimits

0x7025,	// (0x0001614d) listscroll_gen_pane_cp06_t1

0x9433,	// (0x0001855b) main_cam6_set_pane

0xc559,	// (0x0001b681) bg_tb_trans_pane_cp06_ParamLimits

0xcfe8,	// (0x0001c110) cam4_indicators_pane_g1_ParamLimits

0xcff9,	// (0x0001c121) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0001ea1b) cam4_indicators_pane_g_ParamLimits

0xd011,	// (0x0001c139) cam4_indicators_pane_t1_ParamLimits

0x94a3,	// (0x000185cb) bg_tb_trans_pane_cp07_ParamLimits

0xd03b,	// (0x0001c163) vid4_indicators_pane_g1_ParamLimits

0xd04f,	// (0x0001c177) vid4_indicators_pane_g2_ParamLimits

0xd063,	// (0x0001c18b) vid4_indicators_pane_g3_ParamLimits

0xd074,	// (0x0001c19c) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0001ea2d) vid4_indicators_pane_g_ParamLimits

0xd090,	// (0x0001c1b8) vid4_indicators_pane_t1_ParamLimits

0xd744,	// (0x0001c86c) vid4_progress_pane_g1_ParamLimits

0xd754,	// (0x0001c87c) vid4_progress_pane_g2_ParamLimits

0x6b53,	// (0x00015c7b) vid4_progress_pane_g3_ParamLimits

0xd764,	// (0x0001c88c) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0001ebde) vid4_progress_pane_g_ParamLimits

0x6b65,	// (0x00015c8d) vid4_progress_pane_t1_ParamLimits

0xd77c,	// (0x0001c8a4) vid4_progress_pane_t2_ParamLimits

0xd791,	// (0x0001c8b9) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0001ebe9) vid4_progress_pane_t_ParamLimits

0x6b7b,	// (0x00015ca3) wait_bar_pane_cp07_ParamLimits

0x70b0,	// (0x000161d8) main_cam6_set_pane_g2_ParamLimits

0x70b0,	// (0x000161d8) main_cam6_set_pane_g2

0x70d4,	// (0x000161fc) main_cset6_listscroll_pane_ParamLimits

0x70d4,	// (0x000161fc) main_cset6_listscroll_pane

0x70f0,	// (0x00016218) main_cset6_slider_pane_ParamLimits

0x70f0,	// (0x00016218) main_cset6_slider_pane

0x7106,	// (0x0001622e) main_cset6_text2_pane_ParamLimits

0x7106,	// (0x0001622e) main_cset6_text2_pane

0xdb43,	// (0x0001cc6b) main_cset6_text_pane

0xdb4b,	// (0x0001cc73) main_cset_list_pane_copy1_ParamLimits

0xdb4b,	// (0x0001cc73) main_cset_list_pane_copy1

0xdb5b,	// (0x0001cc83) scroll_pane_cp028_copy1

0x7114,	// (0x0001623c) cset_list_set_pane_copy1

0x7126,	// (0x0001624e) aid_position_infowindow_above_copy1

0x712e,	// (0x00016256) aid_position_infowindow_below_copy1

0xdb64,	// (0x0001cc8c) cset_list_set_pane_g1_copy1

0xdb6c,	// (0x0001cc94) cset_list_set_pane_g3_copy1_ParamLimits

0xdb6c,	// (0x0001cc94) cset_list_set_pane_g3_copy1

0xdb7b,	// (0x0001cca3) cset_list_set_pane_t1_copy1_ParamLimits

0xdb7b,	// (0x0001cca3) cset_list_set_pane_t1_copy1

0x94a3,	// (0x000185cb) list_highlight_pane_cp021_copy1_ParamLimits

0x94a3,	// (0x000185cb) list_highlight_pane_cp021_copy1

0xdb90,	// (0x0001ccb8) cset6_slider_pane_ParamLimits

0xdb90,	// (0x0001ccb8) cset6_slider_pane

0xdbbc,	// (0x0001cce4) main_cset6_slider_pane_g1_ParamLimits

0xdbbc,	// (0x0001cce4) main_cset6_slider_pane_g1

0x7136,	// (0x0001625e) main_cset6_slider_pane_g2_ParamLimits

0x7136,	// (0x0001625e) main_cset6_slider_pane_g2

0xdbe4,	// (0x0001cd0c) main_cset6_slider_pane_g3_ParamLimits

0xdbe4,	// (0x0001cd0c) main_cset6_slider_pane_g3

0x715e,	// (0x00016286) main_cset6_slider_pane_g4_ParamLimits

0x715e,	// (0x00016286) main_cset6_slider_pane_g4

0xdbf0,	// (0x0001cd18) main_cset6_slider_pane_g5_ParamLimits

0xdbf0,	// (0x0001cd18) main_cset6_slider_pane_g5

0xd293,	// (0x0001c3bb) main_cset6_slider_pane_g7_ParamLimits

0xd293,	// (0x0001c3bb) main_cset6_slider_pane_g7

0xd29f,	// (0x0001c3c7) main_cset6_slider_pane_g8_ParamLimits

0xd29f,	// (0x0001c3c7) main_cset6_slider_pane_g8

0x612a,	// (0x00015252) main_cset6_slider_pane_g9_ParamLimits

0x612a,	// (0x00015252) main_cset6_slider_pane_g9

0x6136,	// (0x0001525e) main_cset6_slider_pane_g10_ParamLimits

0x6136,	// (0x0001525e) main_cset6_slider_pane_g10

0x6142,	// (0x0001526a) main_cset6_slider_pane_g11_ParamLimits

0x6142,	// (0x0001526a) main_cset6_slider_pane_g11

0x614e,	// (0x00015276) main_cset6_slider_pane_g12_ParamLimits

0x614e,	// (0x00015276) main_cset6_slider_pane_g12

0x615a,	// (0x00015282) main_cset6_slider_pane_g13_ParamLimits

0x615a,	// (0x00015282) main_cset6_slider_pane_g13

0x6166,	// (0x0001528e) main_cset6_slider_pane_g14_ParamLimits

0x6166,	// (0x0001528e) main_cset6_slider_pane_g14

0x716a,	// (0x00016292) main_cset6_slider_pane_g15_ParamLimits

0x716a,	// (0x00016292) main_cset6_slider_pane_g15

0xd2ab,	// (0x0001c3d3) main_cset6_slider_pane_g16_ParamLimits

0xd2ab,	// (0x0001c3d3) main_cset6_slider_pane_g16

0xd2b7,	// (0x0001c3df) main_cset6_slider_pane_g17_ParamLimits

0xd2b7,	// (0x0001c3df) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0001ecb6) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0001ecb6) main_cset6_slider_pane_g

0xdbfc,	// (0x0001cd24) main_cset6_slider_pane_t1_ParamLimits

0xdbfc,	// (0x0001cd24) main_cset6_slider_pane_t1

0x719a,	// (0x000162c2) main_cset6_slider_pane_t2_ParamLimits

0x719a,	// (0x000162c2) main_cset6_slider_pane_t2

0x71c5,	// (0x000162ed) main_cset6_slider_pane_t3_ParamLimits

0x71c5,	// (0x000162ed) main_cset6_slider_pane_t3

0x71f0,	// (0x00016318) main_cset6_slider_pane_t4_ParamLimits

0x71f0,	// (0x00016318) main_cset6_slider_pane_t4

0x721b,	// (0x00016343) main_cset6_slider_pane_t5_ParamLimits

0x721b,	// (0x00016343) main_cset6_slider_pane_t5

0xdc3d,	// (0x0001cd65) main_cset6_slider_pane_t7_ParamLimits

0xdc3d,	// (0x0001cd65) main_cset6_slider_pane_t7

0x7246,	// (0x0001636e) main_cset6_slider_pane_t8_ParamLimits

0x7246,	// (0x0001636e) main_cset6_slider_pane_t8

0x726a,	// (0x00016392) main_cset6_slider_pane_t9_ParamLimits

0x726a,	// (0x00016392) main_cset6_slider_pane_t9

0x728e,	// (0x000163b6) main_cset6_slider_pane_t10_ParamLimits

0x728e,	// (0x000163b6) main_cset6_slider_pane_t10

0x72b2,	// (0x000163da) main_cset6_slider_pane_t11_ParamLimits

0x72b2,	// (0x000163da) main_cset6_slider_pane_t11

0xdc73,	// (0x0001cd9b) main_cset6_slider_pane_t14_ParamLimits

0xdc73,	// (0x0001cd9b) main_cset6_slider_pane_t14

0xdcac,	// (0x0001cdd4) main_cset6_slider_pane_t15_ParamLimits

0xdcac,	// (0x0001cdd4) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0001ecdb) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0001ecdb) main_cset6_slider_pane_t

0xcb4f,	// (0x0001bc77) cset_slider_pane_g1_copy1

0xd38f,	// (0x0001c4b7) cset_slider_pane_g2_copy1

0xd398,	// (0x0001c4c0) cset_slider_pane_g3_copy1

0x9433,	// (0x0001855b) bg_popup_sub_pane_cp011_copy1

0xdce5,	// (0x0001ce0d) main_cset_text_pane_g1_copy1

0xd46b,	// (0x0001c593) main_cset_text_pane_t1_copy1

0xd479,	// (0x0001c5a1) main_cset_text_pane_t2_copy1

0xd487,	// (0x0001c5af) main_cset_text_pane_t3_copy1

0xd495,	// (0x0001c5bd) main_cset_text_pane_t4_copy1

0xd4a3,	// (0x0001c5cb) main_cset_text_pane_t5_copy1

0xdced,	// (0x0001ce15) main_cset_text_pane_t6_copy1

0xdcfb,	// (0x0001ce23) main_cset_text_pane_t7_copy1

0x7092,	// (0x000161ba) main_cset_text2_pane_t1_copy1

0x94a3,	// (0x000185cb) main_ncimui_pane

0x3666,	// (0x0001278e) popup_query_ncimui_window_ParamLimits

0x3666,	// (0x0001278e) popup_query_ncimui_window

0xc5fa,	// (0x0001b722) field_cale_ev2_pane_g4_ParamLimits

0xc5fa,	// (0x0001b722) field_cale_ev2_pane_g4

0x525d,	// (0x00014385) cell_video_dialer_keypad_pane_g2_ParamLimits

0x525d,	// (0x00014385) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0001e9b5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0001e9b5) cell_video_dialer_keypad_pane_g

0x5275,	// (0x0001439d) cell_video_dialer_keypad_pane_t1

0x9433,	// (0x0001855b) bg_popup_window_pane_cp012

0xa611,	// (0x00019739) heading_pane_cp06

0xdd27,	// (0x0001ce4f) ncim_query_content_pane

0x9433,	// (0x0001855b) bg_popup_heading_pane_cp01

0xdd2f,	// (0x0001ce57) ncim_heading_pane_t1

0xdd3d,	// (0x0001ce65) ncim_indicator_popup_pane

0xdd4f,	// (0x0001ce77) ncim_query_button_pane

0xdd63,	// (0x0001ce8b) ncim_query_content_pane_t1

0xdd75,	// (0x0001ce9d) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0001ed1f) ncim_query_content_pane_t

0xddaf,	// (0x0001ced7) ncim_query_list_pane

0xddc1,	// (0x0001cee9) ncim_query_popup_pane

0xdd3d,	// (0x0001ce65) ncim_indicator_popup_pane_ParamLimits

0x74d5,	// (0x000165fd) ncim_query_content_pane_g1_ParamLimits

0x74d5,	// (0x000165fd) ncim_query_content_pane_g1

0xdd63,	// (0x0001ce8b) ncim_query_content_pane_t1_ParamLimits

0xdd75,	// (0x0001ce9d) ncim_query_content_pane_t2_ParamLimits

0x74e1,	// (0x00016609) ncim_query_content_pane_t3_ParamLimits

0x74e1,	// (0x00016609) ncim_query_content_pane_t3

0x7509,	// (0x00016631) ncim_query_content_pane_t4_ParamLimits

0x7509,	// (0x00016631) ncim_query_content_pane_t4

0x7531,	// (0x00016659) ncim_query_content_pane_t5_ParamLimits

0x7531,	// (0x00016659) ncim_query_content_pane_t5

0xdd87,	// (0x0001ceaf) ncim_query_content_pane_t6_ParamLimits

0xdd87,	// (0x0001ceaf) ncim_query_content_pane_t6

0xfbf7,	// (0x0001ed1f) ncim_query_content_pane_t_ParamLimits

0xddaf,	// (0x0001ced7) ncim_query_list_pane_ParamLimits

0xddc1,	// (0x0001cee9) ncim_query_popup_pane_ParamLimits

0xddd5,	// (0x0001cefd) wait_bar_pane_cp04

0x9433,	// (0x0001855b) input_focus_pane_cp011

0xdddd,	// (0x0001cf05) ncim_query_popup_pane_t1

0xddeb,	// (0x0001cf13) ncim_list_query_list_pane_ParamLimits

0xddeb,	// (0x0001cf13) ncim_list_query_list_pane

0x9433,	// (0x0001855b) bg_button_pane_cp027

0xddf8,	// (0x0001cf20) ncim_query_button_pane_g1

0x9433,	// (0x0001855b) list_highlight_pane_cp012

0xde02,	// (0x0001cf2a) ncim_list_query_list_pane_g1

0xde0a,	// (0x0001cf32) ncim_list_query_list_pane_t1

0xd005,	// (0x0001c12d) cam4_indicators_pane_g3_ParamLimits

0xd005,	// (0x0001c12d) cam4_indicators_pane_g3

0xd080,	// (0x0001c1a8) vid4_indicators_pane_g5_ParamLimits

0xd080,	// (0x0001c1a8) vid4_indicators_pane_g5

0xd770,	// (0x0001c898) vid4_progress_pane_g5_ParamLimits

0xd770,	// (0x0001c898) vid4_progress_pane_g5

0x73c0,	// (0x000164e8) main_ncimui_pane_g1

0x7429,	// (0x00016551) ncimui_group_query_pane_ParamLimits

0x7429,	// (0x00016551) ncimui_group_query_pane

0x7471,	// (0x00016599) ncimui_list_pane_ParamLimits

0x7471,	// (0x00016599) ncimui_list_pane

0x7498,	// (0x000165c0) ncimui_text_pane_ParamLimits

0x7498,	// (0x000165c0) ncimui_text_pane

0x7559,	// (0x00016681) ncimui_text_pane_t1_ParamLimits

0x7559,	// (0x00016681) ncimui_text_pane_t1

0xde18,	// (0x0001cf40) ncimui_list_single_graphic_pane_ParamLimits

0xde18,	// (0x0001cf40) ncimui_list_single_graphic_pane

0x7577,	// (0x0001669f) ncimui_query_pane_ParamLimits

0x7577,	// (0x0001669f) ncimui_query_pane

0x9433,	// (0x0001855b) list_highlight_pane_cp013

0xde28,	// (0x0001cf50) ncim_list_query_list_pane_t1_copy1

0xde36,	// (0x0001cf5e) ncim_list_single_graphic_pane_g1

0x758a,	// (0x000166b2) ncim_query_button_pane_cp01

0x7596,	// (0x000166be) ncim_query_entry_pane_ParamLimits

0x7596,	// (0x000166be) ncim_query_entry_pane

0x75a9,	// (0x000166d1) ncimui_query_pane_g1

0x75b5,	// (0x000166dd) ncimui_query_pane_t1_ParamLimits

0x75b5,	// (0x000166dd) ncimui_query_pane_t1

0x94a3,	// (0x000185cb) input_focus_pane_cp012

0xde3e,	// (0x0001cf66) ncim_query_entry_pane_t1

0x9c12,	// (0x00018d3a) main_im_pane_ParamLimits

0x94a3,	// (0x000185cb) main_mobtv_pane_ParamLimits

0x94a3,	// (0x000185cb) main_mobtv_pane

0x7182,	// (0x000162aa) main_cset6_slider_pane_g18_ParamLimits

0x7182,	// (0x000162aa) main_cset6_slider_pane_g18

0x718e,	// (0x000162b6) main_cset6_slider_pane_g19_ParamLimits

0x718e,	// (0x000162b6) main_cset6_slider_pane_g19

0xd235,	// (0x0001c35d) bg_main_mobtv_pane_ParamLimits

0xd235,	// (0x0001c35d) bg_main_mobtv_pane

0x75ce,	// (0x000166f6) main_mobtv_info_pane

0x75d7,	// (0x000166ff) main_mobtv_loading_pane_ParamLimits

0x75d7,	// (0x000166ff) main_mobtv_loading_pane

0xde50,	// (0x0001cf78) main_mobtv_pg_channel_list_pane

0xde5a,	// (0x0001cf82) main_mobtv_pg_hdr_pane

0x75e4,	// (0x0001670c) main_mobtv_programe_curr_pane_ParamLimits

0x75e4,	// (0x0001670c) main_mobtv_programe_curr_pane

0x75f1,	// (0x00016719) main_mobtv_programe_next_pane_ParamLimits

0x75f1,	// (0x00016719) main_mobtv_programe_next_pane

0xde63,	// (0x0001cf8b) popup_mobtv_noti_window

0xc314,	// (0x0001b43c) main_tv_pg_hdr_pane_g1

0xde6b,	// (0x0001cf93) main_tv_pg_hdr_pane_g2

0xde73,	// (0x0001cf9b) main_tv_pg_hdr_pane_g3

0xde7b,	// (0x0001cfa3) main_tv_pg_hdr_pane_g4

0xde83,	// (0x0001cfab) main_tv_pg_hdr_pane_g5

0xde8d,	// (0x0001cfb5) main_tv_pg_hdr_pane_g6

0xde97,	// (0x0001cfbf) main_tv_pg_hdr_pane_g7

0xdea1,	// (0x0001cfc9) main_tv_pg_hdr_pane_g8

0xdeab,	// (0x0001cfd3) main_tv_pg_hdr_pane_g9

0xdeb5,	// (0x0001cfdd) main_tv_pg_hdr_pane_g10

0xdebf,	// (0x0001cfe7) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0001ed2c) main_tv_pg_hdr_pane_g

0xdec9,	// (0x0001cff1) main_tv_pg_hdr_pane_t1

0xded7,	// (0x0001cfff) main_tv_pg_hdr_pane_t2

0xdee5,	// (0x0001d00d) main_tv_pg_hdr_pane_t3

0xdef5,	// (0x0001d01d) main_tv_pg_hdr_pane_t4

0xdf05,	// (0x0001d02d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0001ed43) main_tv_pg_hdr_pane_t

0xdf15,	// (0x0001d03d) single_mobtv_pg_channel_pane_ParamLimits

0xdf15,	// (0x0001d03d) single_mobtv_pg_channel_pane

0xdf27,	// (0x0001d04f) single_mobtv_pg_channel_table_pane

0xa1ea,	// (0x00019312) single_mobtv_pg_channel_thumb_pane

0xdf30,	// (0x0001d058) single_tv_pg_channel_pane_g1

0xdf39,	// (0x0001d061) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0001ed4e) single_tv_pg_channel_pane_g

0xc559,	// (0x0001b681) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc559,	// (0x0001b681) bg_single_mobtv_pg_channel_thumb_pane

0xdf42,	// (0x0001d06a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf42,	// (0x0001d06a) single_mobtv_pg_channel_thumb_pane_g1

0xdf50,	// (0x0001d078) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf50,	// (0x0001d078) single_mobtv_pg_channel_thumb_pane_g2

0xdf5c,	// (0x0001d084) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf5c,	// (0x0001d084) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0001ed53) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0001ed53) single_mobtv_pg_channel_thumb_pane_g

0xdf68,	// (0x0001d090) single_mobtv_pg_channel_thumb_pane_t1

0xdf76,	// (0x0001d09e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0001ed5a) single_mobtv_pg_channel_thumb_pane_t

0xc314,	// (0x0001b43c) bg_single_mobtv_pg_channel_table_pane_g1

0xc314,	// (0x0001b43c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0001e7fc) bg_single_mobtv_pg_channel_table_pane_g

0xdf84,	// (0x0001d0ac) single_mobtv_pg_channel_table_pane_t1

0xdf92,	// (0x0001d0ba) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0001ed5f) single_mobtv_pg_channel_table_pane_t

0x7606,	// (0x0001672e) main_mobtv_info_pane_g1_ParamLimits

0x7606,	// (0x0001672e) main_mobtv_info_pane_g1

0x7624,	// (0x0001674c) main_mobtv_info_pane_t1_ParamLimits

0x7624,	// (0x0001674c) main_mobtv_info_pane_t1

0x769c,	// (0x000167c4) main_mobtv_info_pane_t2_ParamLimits

0x769c,	// (0x000167c4) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0001ed69) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0001ed69) main_mobtv_info_pane_t

0x772b,	// (0x00016853) wait_bar_pane_cp05

0x773d,	// (0x00016865) main_mobtv_loading_pane_g1_ParamLimits

0x773d,	// (0x00016865) main_mobtv_loading_pane_g1

0x7750,	// (0x00016878) main_mobtv_loading_pane_g2_ParamLimits

0x7750,	// (0x00016878) main_mobtv_loading_pane_g2

0x775c,	// (0x00016884) main_mobtv_loading_pane_g3_ParamLimits

0x775c,	// (0x00016884) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0001ed70) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0001ed70) main_mobtv_loading_pane_g

0xdfa0,	// (0x0001d0c8) main_mobtv_loading_pane_t1_ParamLimits

0xdfa0,	// (0x0001d0c8) main_mobtv_loading_pane_t1

0xdfb8,	// (0x0001d0e0) main_mobtv_loading_pane_t2_ParamLimits

0xdfb8,	// (0x0001d0e0) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0001ed77) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0001ed77) main_mobtv_loading_pane_t

0x776f,	// (0x00016897) wait_bar_pane_cp06_ParamLimits

0x776f,	// (0x00016897) wait_bar_pane_cp06

0xdfdc,	// (0x0001d104) main_mobtv_programe_curr_pane_t1

0xdfea,	// (0x0001d112) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0001ed7c) main_mobtv_programe_curr_pane_t

0xdff8,	// (0x0001d120) main_mobtv_programe_next_pane_t1

0xe006,	// (0x0001d12e) main_mobtv_programe_next_pane_t2

0xe014,	// (0x0001d13c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0001ed81) main_mobtv_programe_next_pane_t

0x9433,	// (0x0001855b) bg_popup_mobtv_noti_window_pane

0xe022,	// (0x0001d14a) popup_mobtv_noti_window_g1

0xe02a,	// (0x0001d152) popup_mobtv_noti_window_t1

0xe038,	// (0x0001d160) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0001ed88) popup_mobtv_noti_window_t

0xc314,	// (0x0001b43c) bg_popup_mobtv_noti_window_pane_g1

0x9433,	// (0x0001855b) sc_clock_pane

0x9433,	// (0x0001855b) main_fs_bigclock_pane

0x6ddf,	// (0x00015f07) blid2_tripm_pane_t4_ParamLimits

0x6ddf,	// (0x00015f07) blid2_tripm_pane_t4

0x777e,	// (0x000168a6) sc_clock_pane_g1_ParamLimits

0x777e,	// (0x000168a6) sc_clock_pane_g1

0x7790,	// (0x000168b8) sc_clock_pane_t1_ParamLimits

0x7790,	// (0x000168b8) sc_clock_pane_t1

0x77b2,	// (0x000168da) sc_clock_pane_t2_ParamLimits

0x77b2,	// (0x000168da) sc_clock_pane_t2

0x77ca,	// (0x000168f2) sc_clock_pane_t3_ParamLimits

0x77ca,	// (0x000168f2) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0001ed8d) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0001ed8d) sc_clock_pane_t

0x882d,	// (0x00017955) main_fs_bigclock_indicator_pane_ParamLimits

0x882d,	// (0x00017955) main_fs_bigclock_indicator_pane

0x7870,	// (0x00016998) main_fs_bigclock_pane_g1_ParamLimits

0x7870,	// (0x00016998) main_fs_bigclock_pane_g1

0x8839,	// (0x00017961) main_fs_bigclock_pane_t1_ParamLimits

0x8839,	// (0x00017961) main_fs_bigclock_pane_t1

0x884b,	// (0x00017973) main_fs_bigclock_pane_t2_ParamLimits

0x884b,	// (0x00017973) main_fs_bigclock_pane_t2

0x885f,	// (0x00017987) main_fs_bigclock_pane_t3_ParamLimits

0x885f,	// (0x00017987) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ef96) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ef96) main_fs_bigclock_pane_t

0xec2e,	// (0x0001dd56) main_fs_bigclock_indicator_pane_g1

0xdd57,	// (0x0001ce7f) ncim_query_content_pane_g2_ParamLimits

0xdd57,	// (0x0001ce7f) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0001ed1a) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0001ed1a) ncim_query_content_pane_g

0x77e3,	// (0x0001690b) sc_clock_pane_t4_ParamLimits

0x77e3,	// (0x0001690b) sc_clock_pane_t4

0x94a3,	// (0x000185cb) main_radioblah_pane

0xcf4e,	// (0x0001c076) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf4e,	// (0x0001c076) cell_call4_button_pane_t1_copy1

0x73d8,	// (0x00016500) main_ncimui_pane_t1_ParamLimits

0x73d8,	// (0x00016500) main_ncimui_pane_t1

0x73f2,	// (0x0001651a) main_ncimui_pane_t2_ParamLimits

0x73f2,	// (0x0001651a) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0001ed13) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0001ed13) main_ncimui_pane_t

0xe17e,	// (0x0001d2a6) main_radioblah_anim_pane_ParamLimits

0xe17e,	// (0x0001d2a6) main_radioblah_anim_pane

0xe18f,	// (0x0001d2b7) main_radioblah_info_pane_ParamLimits

0xe18f,	// (0x0001d2b7) main_radioblah_info_pane

0xe1a3,	// (0x0001d2cb) main_radioblah_pane_t1_ParamLimits

0xe1a3,	// (0x0001d2cb) main_radioblah_pane_t1

0xe1bf,	// (0x0001d2e7) main_radioblah_pane_t2_ParamLimits

0xe1bf,	// (0x0001d2e7) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0001edae) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0001edae) main_radioblah_pane_t

0x78cf,	// (0x000169f7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x78cf,	// (0x000169f7) main_radioblah_rocker_ctrl_pane

0xe207,	// (0x0001d32f) main_radioblah_info_pane_t1_ParamLimits

0xe207,	// (0x0001d32f) main_radioblah_info_pane_t1

0x7927,	// (0x00016a4f) main_radioblah_info_pane_t2_ParamLimits

0x7927,	// (0x00016a4f) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0001edb7) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0001edb7) main_radioblah_info_pane_t

0xc314,	// (0x0001b43c) main_radioblah_rocker_ctrl_pane_g1

0x79d7,	// (0x00016aff) main_radioblah_rocker_ctrl_pane_g2

0x79df,	// (0x00016b07) main_radioblah_rocker_ctrl_pane_g3

0x79e7,	// (0x00016b0f) main_radioblah_rocker_ctrl_pane_g4

0x79ef,	// (0x00016b17) main_radioblah_rocker_ctrl_pane_g5

0x79f7,	// (0x00016b1f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0001edc0) main_radioblah_rocker_ctrl_pane_g

0x7092,	// (0x000161ba) main_cset_text2_pane_t1_copy1_ParamLimits

0xcfd8,	// (0x0001c100) cam4_image_uncrop_qvga_pane

0xd02b,	// (0x0001c153) vid4_image_uncrop_qcif_pane

0xd95e,	// (0x0001ca86) cam6_image_uncrop_qvga_pane_ParamLimits

0xd95e,	// (0x0001ca86) cam6_image_uncrop_qvga_pane

0xda26,	// (0x0001cb4e) vid6_image_uncrop_qcif_pane_ParamLimits

0xda26,	// (0x0001cb4e) vid6_image_uncrop_qcif_pane

0x9433,	// (0x0001855b) bg_popup_preview_window_pane_cp03

0xdd09,	// (0x0001ce31) list_cset_text2_pane

0xdd11,	// (0x0001ce39) main_cset6_text2_pane_g1

0xdd19,	// (0x0001ce41) main_cset6_text2_pane_t1

0xeac9,	// (0x0001dbf1) list_cset_text2_pane_t1_ParamLimits

0xeac9,	// (0x0001dbf1) list_cset_text2_pane_t1

0x94a3,	// (0x000185cb) main_radioblah_pane_ParamLimits

0x7717,	// (0x0001683f) main_mobtv_info_pane_t3_ParamLimits

0x7717,	// (0x0001683f) main_mobtv_info_pane_t3

0x78bd,	// (0x000169e5) main_radioblah_pane_g1

0x78f7,	// (0x00016a1f) main_radioblah_info_pane_g1

0x797c,	// (0x00016aa4) main_radioblah_info_pane_t3_ParamLimits

0x797c,	// (0x00016aa4) main_radioblah_info_pane_t3

0x205b,	// (0x00011183) highlight_cell_cale_month_pane_ParamLimits

0x205b,	// (0x00011183) highlight_cell_cale_month_pane

0x9433,	// (0x0001855b) main_phob_fisheye_pane

0xc6a9,	// (0x0001b7d1) scroll_pane_cp0031_ParamLimits

0xc6a9,	// (0x0001b7d1) scroll_pane_cp0031

0xdb34,	// (0x0001cc5c) wait_bar_pane_cp08_ParamLimits

0x7114,	// (0x0001623c) cset_list_set_pane_copy1_ParamLimits

0xe241,	// (0x0001d369) highlight_cell_cale_month_pane_g1

0x79ff,	// (0x00016b27) highlight_cell_cale_month_pane_t1

0xd733,	// (0x0001c85b) list_gen_pane_cp01

0xd27e,	// (0x0001c3a6) scroll_pane_01

0x7a0d,	// (0x00016b35) list_single_double_fisheye_pane

0x7a16,	// (0x00016b3e) list_double_fisheye_pane_g1_ParamLimits

0x7a16,	// (0x00016b3e) list_double_fisheye_pane_g1

0x7a22,	// (0x00016b4a) list_double_fisheye_pane_g2_ParamLimits

0x7a22,	// (0x00016b4a) list_double_fisheye_pane_g2

0x7a36,	// (0x00016b5e) list_double_fisheye_pane_g3_ParamLimits

0x7a36,	// (0x00016b5e) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0001edcd) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0001edcd) list_double_fisheye_pane_g

0x7a5f,	// (0x00016b87) list_double_fisheye_pane_t1_ParamLimits

0x7a5f,	// (0x00016b87) list_double_fisheye_pane_t1

0x7a7a,	// (0x00016ba2) list_double_fisheye_pane_t2_ParamLimits

0x7a7a,	// (0x00016ba2) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0001edd8) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0001edd8) list_double_fisheye_pane_t

0x9433,	// (0x0001855b) main_call5_pane

0x780e,	// (0x00016936) sc_swipe_pane_ParamLimits

0x780e,	// (0x00016936) sc_swipe_pane

0x7aaf,	// (0x00016bd7) call5_image_pane_ParamLimits

0x7aaf,	// (0x00016bd7) call5_image_pane

0x7acc,	// (0x00016bf4) call5_swipe_1_pane_ParamLimits

0x7acc,	// (0x00016bf4) call5_swipe_1_pane

0x7adf,	// (0x00016c07) call5_swipe_2_pane_ParamLimits

0x7adf,	// (0x00016c07) call5_swipe_2_pane

0x7b0a,	// (0x00016c32) popup_call5_audio_first_window_ParamLimits

0x7b0a,	// (0x00016c32) popup_call5_audio_first_window

0xc559,	// (0x0001b681) call5_swipe_1_pane_g1_ParamLimits

0xc559,	// (0x0001b681) call5_swipe_1_pane_g1

0xe249,	// (0x0001d371) call5_swipe_1_pane_g2_ParamLimits

0xe249,	// (0x0001d371) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0001eddd) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0001eddd) call5_swipe_1_pane_g

0xe255,	// (0x0001d37d) call5_swipe_1_pane_t1_ParamLimits

0xe255,	// (0x0001d37d) call5_swipe_1_pane_t1

0xc559,	// (0x0001b681) call5_swipe_2_pane_g1_ParamLimits

0xc559,	// (0x0001b681) call5_swipe_2_pane_g1

0xe26a,	// (0x0001d392) call5_swipe_2_pane_g2_ParamLimits

0xe26a,	// (0x0001d392) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0001ede2) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0001ede2) call5_swipe_2_pane_g

0xe276,	// (0x0001d39e) call5_swipe_2_pane_t1_ParamLimits

0xe276,	// (0x0001d39e) call5_swipe_2_pane_t1

0xe28b,	// (0x0001d3b3) sc_swipe_pane_g1_ParamLimits

0xe28b,	// (0x0001d3b3) sc_swipe_pane_g1

0xe298,	// (0x0001d3c0) sc_swipe_pane_g2_ParamLimits

0xe298,	// (0x0001d3c0) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0001ede7) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0001ede7) sc_swipe_pane_g

0xe2a4,	// (0x0001d3cc) sc_swipe_pane_t1_ParamLimits

0xe2a4,	// (0x0001d3cc) sc_swipe_pane_t1

0x9433,	// (0x0001855b) main_cmail_launcher_pane

0x7b1b,	// (0x00016c43) aid_size_cell_cmail_l_ParamLimits

0x7b1b,	// (0x00016c43) aid_size_cell_cmail_l

0x7b29,	// (0x00016c51) grid_cmail_l_pane_ParamLimits

0x7b29,	// (0x00016c51) grid_cmail_l_pane

0x7b43,	// (0x00016c6b) cell_cmail_l_pane_ParamLimits

0x7b43,	// (0x00016c6b) cell_cmail_l_pane

0xe2b9,	// (0x0001d3e1) cell_cmail_l_pane_g1_ParamLimits

0xe2b9,	// (0x0001d3e1) cell_cmail_l_pane_g1

0xe2c5,	// (0x0001d3ed) cell_cmail_l_pane_t1_ParamLimits

0xe2c5,	// (0x0001d3ed) cell_cmail_l_pane_t1

0xe2db,	// (0x0001d403) cell_cmail_l_pane_t2_ParamLimits

0xe2db,	// (0x0001d403) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0001edec) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0001edec) cell_cmail_l_pane_t

0x94a3,	// (0x000185cb) grid_highlight_pane_cp018_ParamLimits

0x94a3,	// (0x000185cb) grid_highlight_pane_cp018

0x030f,	// (0x0000f437) main2_pane_ParamLimits

0x030f,	// (0x0000f437) main2_pane

0x9cd8,	// (0x00018e00) popup_sp_fs_action_menu_bg_pane_g1

0x9ce0,	// (0x00018e08) popup_sp_fs_action_menu_bg_pane_g2

0x9ce8,	// (0x00018e10) popup_sp_fs_action_menu_bg_pane_g3

0x9cf0,	// (0x00018e18) popup_sp_fs_action_menu_bg_pane_g4

0x9cf8,	// (0x00018e20) popup_sp_fs_action_menu_bg_pane_g5

0x9d00,	// (0x00018e28) popup_sp_fs_action_menu_bg_pane_g6

0x9d08,	// (0x00018e30) popup_sp_fs_action_menu_bg_pane_g7

0x9d10,	// (0x00018e38) popup_sp_fs_action_menu_bg_pane_g8

0x9d18,	// (0x00018e40) popup_sp_fs_action_menu_bg_pane_g9

0x9d20,	// (0x00018e48) popup_sp_fs_action_menu_bg_pane_g10

0x9d20,	// (0x00018e48) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0001e297) popup_sp_fs_action_menu_bg_pane_g

0x1208,	// (0x00010330) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x2_t3_g3_g1

0x1214,	// (0x0001033c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1214,	// (0x0001033c) list_medium_line_x2_t3_g3_g2

0x1220,	// (0x00010348) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1220,	// (0x00010348) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0001e345) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0001e345) list_medium_line_x2_t3_g3_g

0x122c,	// (0x00010354) list_medium_line_x2_t3_g3_t1_ParamLimits

0x122c,	// (0x00010354) list_medium_line_x2_t3_g3_t1

0x1241,	// (0x00010369) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1241,	// (0x00010369) list_medium_line_x2_t3_g3_t2

0x1255,	// (0x0001037d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1255,	// (0x0001037d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0001e34c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0001e34c) list_medium_line_x2_t3_g3_t

0x1208,	// (0x00010330) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x2_t3_g2_g1

0x1220,	// (0x00010348) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1220,	// (0x00010348) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0001e353) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0001e353) list_medium_line_x2_t3_g2_g

0x126a,	// (0x00010392) list_medium_line_x2_t3_g2_t1_ParamLimits

0x126a,	// (0x00010392) list_medium_line_x2_t3_g2_t1

0x1280,	// (0x000103a8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1280,	// (0x000103a8) list_medium_line_x2_t3_g2_t2

0x1292,	// (0x000103ba) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1292,	// (0x000103ba) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0001e358) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0001e358) list_medium_line_x2_t3_g2_t

0x1208,	// (0x00010330) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x2_t4_g4_g1

0x12b0,	// (0x000103d8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x12b0,	// (0x000103d8) list_medium_line_x2_t4_g4_g2

0x1214,	// (0x0001033c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1214,	// (0x0001033c) list_medium_line_x2_t4_g4_g3

0x12bc,	// (0x000103e4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x12bc,	// (0x000103e4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0001e35f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0001e35f) list_medium_line_x2_t4_g4_g

0x12c8,	// (0x000103f0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x12c8,	// (0x000103f0) list_medium_line_x2_t4_g4_t1

0x12e2,	// (0x0001040a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x12e2,	// (0x0001040a) list_medium_line_x2_t4_g4_t2

0x12f8,	// (0x00010420) list_medium_line_x2_t4_g4_t3_ParamLimits

0x12f8,	// (0x00010420) list_medium_line_x2_t4_g4_t3

0x130d,	// (0x00010435) list_medium_line_x2_t4_g4_t4_ParamLimits

0x130d,	// (0x00010435) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0001e368) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0001e368) list_medium_line_x2_t4_g4_t

0x1208,	// (0x00010330) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x2_t2_g4_g1

0x12b0,	// (0x000103d8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x12b0,	// (0x000103d8) list_medium_line_x2_t2_g4_g2

0x1214,	// (0x0001033c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1214,	// (0x0001033c) list_medium_line_x2_t2_g4_g3

0x1220,	// (0x00010348) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1220,	// (0x00010348) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0001e3cf) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0001e3cf) list_medium_line_x2_t2_g4_g

0x2081,	// (0x000111a9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2081,	// (0x000111a9) list_medium_line_x2_t2_g4_t1

0x1255,	// (0x0001037d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1255,	// (0x0001037d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0001e3d8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0001e3d8) list_medium_line_x2_t2_g4_t

0x1208,	// (0x00010330) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x2_t2_g3_g1

0x1214,	// (0x0001033c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1214,	// (0x0001033c) list_medium_line_x2_t2_g3_g2

0x1220,	// (0x00010348) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1220,	// (0x00010348) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0001e345) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0001e345) list_medium_line_x2_t2_g3_g

0x2096,	// (0x000111be) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2096,	// (0x000111be) list_medium_line_x2_t2_g3_t1

0x1255,	// (0x0001037d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1255,	// (0x0001037d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0001e3dd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0001e3dd) list_medium_line_x2_t2_g3_t

0x21ea,	// (0x00011312) main_sp_fs_list_pane_ParamLimits

0x21ea,	// (0x00011312) main_sp_fs_list_pane

0xd25a,	// (0x0001c382) sp_fs_scroll_pane_ParamLimits

0xd25a,	// (0x0001c382) sp_fs_scroll_pane

0x21f6,	// (0x0001131e) list_medium_line_x2_t3_t1

0x2206,	// (0x0001132e) list_medium_line_x2_t3_t2

0x2214,	// (0x0001133c) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0001e428) list_medium_line_x2_t3_t

0x2222,	// (0x0001134a) list_medium_line_x3_t4_t1

0x2232,	// (0x0001135a) list_medium_line_x3_t4_t2

0x2240,	// (0x00011368) list_medium_line_x3_t4_t3

0x2214,	// (0x0001133c) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0001e42f) list_medium_line_x3_t4_t

0x224e,	// (0x00011376) list_medium_line_x4_t5_t1

0x225e,	// (0x00011386) list_medium_line_x4_t5_t2

0x2240,	// (0x00011368) list_medium_line_x4_t5_t3

0x226c,	// (0x00011394) list_medium_line_x4_t5_t4

0x2214,	// (0x0001133c) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0001e438) list_medium_line_x4_t5_t

0x1208,	// (0x00010330) list_medium_line_t4_g4_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_t4_g4_g1

0x12bc,	// (0x000103e4) list_medium_line_t4_g4_g2_ParamLimits

0x12bc,	// (0x000103e4) list_medium_line_t4_g4_g2

0x227a,	// (0x000113a2) list_medium_line_t4_g4_g3_ParamLimits

0x227a,	// (0x000113a2) list_medium_line_t4_g4_g3

0x1220,	// (0x00010348) list_medium_line_t4_g4_g4_ParamLimits

0x1220,	// (0x00010348) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0001e443) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0001e443) list_medium_line_t4_g4_g

0x2286,	// (0x000113ae) list_medium_line_t4_g4_t1_ParamLimits

0x2286,	// (0x000113ae) list_medium_line_t4_g4_t1

0x229b,	// (0x000113c3) list_medium_line_t4_g4_t2_ParamLimits

0x229b,	// (0x000113c3) list_medium_line_t4_g4_t2

0x22b1,	// (0x000113d9) list_medium_line_t4_g4_t3_ParamLimits

0x22b1,	// (0x000113d9) list_medium_line_t4_g4_t3

0x1255,	// (0x0001037d) list_medium_line_t4_g4_t4_ParamLimits

0x1255,	// (0x0001037d) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0001e44c) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0001e44c) list_medium_line_t4_g4_t

0x238a,	// (0x000114b2) chi_dic_find_pane_g1

0x3436,	// (0x0001255e) main_tport_pane

0xd3d2,	// (0x0001c4fa) list_medium_line_plain_t1

0x64e2,	// (0x0001560a) list_medium_line_t2_g2_g1_ParamLimits

0x64e2,	// (0x0001560a) list_medium_line_t2_g2_g1

0x64ee,	// (0x00015616) list_medium_line_t2_g2_g2_ParamLimits

0x64ee,	// (0x00015616) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0001eb24) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0001eb24) list_medium_line_t2_g2_g

0x64fa,	// (0x00015622) list_medium_line_t2_g2_t1_ParamLimits

0x64fa,	// (0x00015622) list_medium_line_t2_g2_t1

0x6514,	// (0x0001563c) list_medium_line_t2_g2_t2_ParamLimits

0x6514,	// (0x0001563c) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0001eb29) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0001eb29) list_medium_line_t2_g2_t

0xd7a7,	// (0x0001c8cf) aid_sp_fs_list_icon_a_sm

0xd7af,	// (0x0001c8d7) aid_sp_fs_list_icon_d

0xd7b7,	// (0x0001c8df) aid_sp_fs_text_primary

0xd7c0,	// (0x0001c8e8) aid_sp_fs_text_secondary

0x6b8c,	// (0x00015cb4) list_medium_line

0x6b8c,	// (0x00015cb4) list_medium_line_g2

0x6b8c,	// (0x00015cb4) list_medium_line_g3

0x6b8c,	// (0x00015cb4) list_medium_line_plain

0x6b8c,	// (0x00015cb4) list_medium_line_plain_t2

0x6b8c,	// (0x00015cb4) list_medium_line_plain_t3

0x6b8c,	// (0x00015cb4) list_medium_line_right_icon

0x6b8c,	// (0x00015cb4) list_medium_line_right_iconx2

0x6b8c,	// (0x00015cb4) list_medium_line_t2

0x6b8c,	// (0x00015cb4) list_medium_line_t2_g2

0x6b8c,	// (0x00015cb4) list_medium_line_t2_g3

0x6b8c,	// (0x00015cb4) list_medium_line_t2_right_icon

0x6b8c,	// (0x00015cb4) list_medium_line_t2_right_iconx2

0x6b8c,	// (0x00015cb4) list_medium_line_t3

0x6b8c,	// (0x00015cb4) list_medium_line_t3_g2

0x6b8c,	// (0x00015cb4) list_medium_line_t3_g3

0x6b8c,	// (0x00015cb4) list_medium_line_t3_right_iconx2

0x6b95,	// (0x00015cbd) list_medium_line_t4_g4

0x6b9e,	// (0x00015cc6) list_medium_line_x2

0x6b9e,	// (0x00015cc6) list_medium_line_x2_t2_g2

0x6b9e,	// (0x00015cc6) list_medium_line_x2_t2_g3

0x6b9e,	// (0x00015cc6) list_medium_line_x2_t2_g4

0x6b9e,	// (0x00015cc6) list_medium_line_x2_t3

0x6b9e,	// (0x00015cc6) list_medium_line_x2_t3_g2

0x6b9e,	// (0x00015cc6) list_medium_line_x2_t3_g3

0x6b9e,	// (0x00015cc6) list_medium_line_x2_t3_g4

0x6b9e,	// (0x00015cc6) list_medium_line_x2_t4_g2

0x6b9e,	// (0x00015cc6) list_medium_line_x2_t4_g4

0x6ba7,	// (0x00015ccf) list_medium_line_x3

0x6ba7,	// (0x00015ccf) list_medium_line_x3_t4

0x6ba7,	// (0x00015ccf) list_medium_line_x3_t4_g4

0x6b95,	// (0x00015cbd) list_medium_line_x4_t4

0x6b95,	// (0x00015cbd) list_medium_line_x4_t4_g7

0x6b95,	// (0x00015cbd) list_medium_line_x4_t5

0x6bb0,	// (0x00015cd8) list_single_fs_dyc_pane_ParamLimits

0x6bb0,	// (0x00015cd8) list_single_fs_dyc_pane

0x1208,	// (0x00010330) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x4_t4_g7_g1

0x72d6,	// (0x000163fe) list_medium_line_x4_t4_g7_g2_ParamLimits

0x72d6,	// (0x000163fe) list_medium_line_x4_t4_g7_g2

0x72e2,	// (0x0001640a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x72e2,	// (0x0001640a) list_medium_line_x4_t4_g7_g3

0x72f1,	// (0x00016419) list_medium_line_x4_t4_g7_g4_ParamLimits

0x72f1,	// (0x00016419) list_medium_line_x4_t4_g7_g4

0x72fd,	// (0x00016425) list_medium_line_x4_t4_g7_g5_ParamLimits

0x72fd,	// (0x00016425) list_medium_line_x4_t4_g7_g5

0x730c,	// (0x00016434) list_medium_line_x4_t4_g7_g6_ParamLimits

0x730c,	// (0x00016434) list_medium_line_x4_t4_g7_g6

0x731b,	// (0x00016443) list_medium_line_x4_t4_g7_g7_ParamLimits

0x731b,	// (0x00016443) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0001ecf4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0001ecf4) list_medium_line_x4_t4_g7_g

0x7327,	// (0x0001644f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7327,	// (0x0001644f) list_medium_line_x4_t4_g7_t1

0x733c,	// (0x00016464) list_medium_line_x4_t4_g7_t2_ParamLimits

0x733c,	// (0x00016464) list_medium_line_x4_t4_g7_t2

0x7351,	// (0x00016479) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7351,	// (0x00016479) list_medium_line_x4_t4_g7_t3

0x7366,	// (0x0001648e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7366,	// (0x0001648e) list_medium_line_x4_t4_g7_t4

0x7378,	// (0x000164a0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7378,	// (0x000164a0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0001ed03) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0001ed03) list_medium_line_x4_t4_g7_t

0x738a,	// (0x000164b2) list_single_dyc_row_pane_ParamLimits

0x738a,	// (0x000164b2) list_single_dyc_row_pane

0x7a9c,	// (0x00016bc4) call5_gesture_pane_ParamLimits

0x7a9c,	// (0x00016bc4) call5_gesture_pane

0x7af2,	// (0x00016c1a) call5_windows_pane_ParamLimits

0x7af2,	// (0x00016c1a) call5_windows_pane

0x7b5d,	// (0x00016c85) call5_swipe_1_pane_cp_ParamLimits

0x7b5d,	// (0x00016c85) call5_swipe_1_pane_cp

0x7b69,	// (0x00016c91) call5_swipe_2_pane_cp_ParamLimits

0x7b69,	// (0x00016c91) call5_swipe_2_pane_cp

0x9e78,	// (0x00018fa0) call5_image_pane_cp

0x7b75,	// (0x00016c9d) popup_call5_audio_first_window_cp_ParamLimits

0x7b75,	// (0x00016c9d) popup_call5_audio_first_window_cp

0xe28b,	// (0x0001d3b3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe28b,	// (0x0001d3b3) call5_swipe_1_pane_g1_cp

0xe2f8,	// (0x0001d420) call5_swipe_1_pane_g2_cp

0xe2a4,	// (0x0001d3cc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2a4,	// (0x0001d3cc) call5_swipe_1_pane_t1_cp

0xe28b,	// (0x0001d3b3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe28b,	// (0x0001d3b3) call5_swipe_2_pane_g1_cp

0xe300,	// (0x0001d428) call5_swipe_2_pane_g2_cp

0xe308,	// (0x0001d430) call5_swipe_2_pane_t1_cp_ParamLimits

0xe308,	// (0x0001d430) call5_swipe_2_pane_t1_cp

0x94a3,	// (0x000185cb) main_sp_fs_email_pane

0xe31d,	// (0x0001d445) main_sp_fs_listscroll_pane_te

0x7b83,	// (0x00016cab) popup_sp_fs_action_menu_pane_ParamLimits

0x7b83,	// (0x00016cab) popup_sp_fs_action_menu_pane

0xc314,	// (0x0001b43c) bg_sp_fs_ctrlbar_pane_g1

0xe326,	// (0x0001d44e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe32f,	// (0x0001d457) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe338,	// (0x0001d460) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc314,	// (0x0001b43c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0001edf1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0f9,	// (0x0001b221) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0f9,	// (0x0001b221) bg_sp_fs_ctrlbar_ddmenu_pane

0xe341,	// (0x0001d469) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe341,	// (0x0001d469) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe34d,	// (0x0001d475) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe34d,	// (0x0001d475) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0001edfa) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0001edfa) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe359,	// (0x0001d481) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe359,	// (0x0001d481) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7bc7,	// (0x00016cef) list_medium_line_t2_right_icon_g1

0x7bcf,	// (0x00016cf7) list_medium_line_t2_right_icon_t1

0x7bdf,	// (0x00016d07) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0001edff) list_medium_line_t2_right_icon_t

0xbdf9,	// (0x0001af21) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbdf9,	// (0x0001af21) bg_sp_fs_ctrlbar_pane

0x7c39,	// (0x00016d61) main_sp_fs_ctrlbar_button_pane_cp01

0x7c43,	// (0x00016d6b) main_sp_fs_ctrlbar_ddmenu_pane

0xe3ab,	// (0x0001d4d3) main_sp_fs_ctrlbar_pane_g1

0xe3b7,	// (0x0001d4df) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0001ee04) main_sp_fs_ctrlbar_pane_g

0x7c81,	// (0x00016da9) main_sp_fs_ctrlbar_pane_t1

0x7cc0,	// (0x00016de8) main_sp_fs_ctrlbar_pane

0x7ce4,	// (0x00016e0c) main_sp_fs_listscroll_pane_te_cp01

0x7d04,	// (0x00016e2c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d04,	// (0x00016e2c) popup_sp_fs_action_menu_pane_cp01

0x94a3,	// (0x000185cb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x94a3,	// (0x000185cb) bg_sp_fs_highlight_list_pane_cp01

0xe3de,	// (0x0001d506) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3de,	// (0x0001d506) sp_fs_action_menu_list_gene_pane_g1

0xe3ed,	// (0x0001d515) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3ed,	// (0x0001d515) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001ee12) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001ee12) sp_fs_action_menu_list_gene_pane_g

0xe3fa,	// (0x0001d522) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3fa,	// (0x0001d522) sp_fs_action_menu_list_gene_pane_t1

0xe412,	// (0x0001d53a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe412,	// (0x0001d53a) sp_fs_action_menu_list_gene_pane

0xe431,	// (0x0001d559) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe431,	// (0x0001d559) popup_sp_fs_action_menu_bg_pane

0xe43f,	// (0x0001d567) sp_fs_action_menu_list_pane_ParamLimits

0xe43f,	// (0x0001d567) sp_fs_action_menu_list_pane

0x7d34,	// (0x00016e5c) sp_fs_scroll_pane_cp01_ParamLimits

0x7d34,	// (0x00016e5c) sp_fs_scroll_pane_cp01

0x7d5a,	// (0x00016e82) list_medium_line_plain_t2_t1

0x7d6a,	// (0x00016e92) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001ee17) list_medium_line_plain_t2_t

0x7d7a,	// (0x00016ea2) list_medium_line_plain_t3_t1

0x7d8a,	// (0x00016eb2) list_medium_line_plain_t3_t2

0x7d98,	// (0x00016ec0) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001ee1c) list_medium_line_plain_t3_t

0x1208,	// (0x00010330) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x2_t2_g2_g1

0x1220,	// (0x00010348) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1220,	// (0x00010348) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0001e353) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0001e353) list_medium_line_x2_t2_g2_g

0x2286,	// (0x000113ae) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2286,	// (0x000113ae) list_medium_line_x2_t2_g2_t1

0x1255,	// (0x0001037d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1255,	// (0x0001037d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001ee23) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001ee23) list_medium_line_x2_t2_g2_t

0x1208,	// (0x00010330) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x2_t4_g2_g1

0x1220,	// (0x00010348) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1220,	// (0x00010348) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0001e353) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0001e353) list_medium_line_x2_t4_g2_g

0x7da6,	// (0x00016ece) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7da6,	// (0x00016ece) list_medium_line_x2_t4_g2_t1

0x7dc0,	// (0x00016ee8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7dc0,	// (0x00016ee8) list_medium_line_x2_t4_g2_t2

0x7dd6,	// (0x00016efe) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7dd6,	// (0x00016efe) list_medium_line_x2_t4_g2_t3

0x1255,	// (0x0001037d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1255,	// (0x0001037d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001ee28) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001ee28) list_medium_line_x2_t4_g2_t

0x7deb,	// (0x00016f13) list_medium_line_t3_right_iconx2_g1

0x7bc7,	// (0x00016cef) list_medium_line_t3_right_iconx2_g2

0x7df3,	// (0x00016f1b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001ee31) list_medium_line_t3_right_iconx2_g

0x7dfd,	// (0x00016f25) list_medium_line_t3_right_iconx2_t1

0x7e0d,	// (0x00016f35) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001ee38) list_medium_line_t3_right_iconx2_t

0x1208,	// (0x00010330) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x3_t4_g4_g1

0x1214,	// (0x0001033c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1214,	// (0x0001033c) list_medium_line_x3_t4_g4_g2

0x12bc,	// (0x000103e4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x12bc,	// (0x000103e4) list_medium_line_x3_t4_g4_g3

0x7e1b,	// (0x00016f43) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e1b,	// (0x00016f43) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001ee3d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001ee3d) list_medium_line_x3_t4_g4_g

0x7e27,	// (0x00016f4f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e27,	// (0x00016f4f) list_medium_line_x3_t4_g4_t1

0x7e3e,	// (0x00016f66) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e3e,	// (0x00016f66) list_medium_line_x3_t4_g4_t2

0x7e59,	// (0x00016f81) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7e59,	// (0x00016f81) list_medium_line_x3_t4_g4_t3

0x7e6e,	// (0x00016f96) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e6e,	// (0x00016f96) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001ee46) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001ee46) list_medium_line_x3_t4_g4_t

0x7e8b,	// (0x00016fb3) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e8b,	// (0x00016fb3) list_single_dyc_row_text_pane_t1

0x7ed4,	// (0x00016ffc) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ed4,	// (0x00016ffc) list_single_dyc_row_text_pane_t2

0xe45f,	// (0x0001d587) list_single_dyc_row_text_pane_t3_ParamLimits

0xe45f,	// (0x0001d587) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001ee4f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001ee4f) list_single_dyc_row_text_pane_t

0xe483,	// (0x0001d5ab) list_single_dyc_row_pane_g1_ParamLimits

0xe483,	// (0x0001d5ab) list_single_dyc_row_pane_g1

0xe48f,	// (0x0001d5b7) list_single_dyc_row_pane_g2_ParamLimits

0xe48f,	// (0x0001d5b7) list_single_dyc_row_pane_g2

0xe49b,	// (0x0001d5c3) list_single_dyc_row_pane_g3_ParamLimits

0xe49b,	// (0x0001d5c3) list_single_dyc_row_pane_g3

0xe4a7,	// (0x0001d5cf) list_single_dyc_row_pane_g4_ParamLimits

0xe4a7,	// (0x0001d5cf) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001ee5c) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001ee5c) list_single_dyc_row_pane_g

0xe4b3,	// (0x0001d5db) list_single_dyc_row_text_pane_ParamLimits

0xe4b3,	// (0x0001d5db) list_single_dyc_row_text_pane

0x9433,	// (0x0001855b) bg_sp_fs_scroll_pane

0xe4d2,	// (0x0001d5fa) thumb_sp_fs_scroll_pane

0x64e2,	// (0x0001560a) list_medium_line_g1_ParamLimits

0x64e2,	// (0x0001560a) list_medium_line_g1

0xe4db,	// (0x0001d603) list_medium_line_t1_ParamLimits

0xe4db,	// (0x0001d603) list_medium_line_t1

0x1208,	// (0x00010330) list_medium_line_x2_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x2_g1

0x1214,	// (0x0001033c) list_medium_line_x2_g2_ParamLimits

0x1214,	// (0x0001033c) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001ee65) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001ee65) list_medium_line_x2_g

0xe4f0,	// (0x0001d618) list_medium_line_x2_t1_ParamLimits

0xe4f0,	// (0x0001d618) list_medium_line_x2_t1

0x1208,	// (0x00010330) list_medium_line_x3_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x3_g1

0x1214,	// (0x0001033c) list_medium_line_x3_g2_ParamLimits

0x1214,	// (0x0001033c) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001ee65) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001ee65) list_medium_line_x3_g

0xe4f0,	// (0x0001d618) list_medium_line_x3_t1_ParamLimits

0xe4f0,	// (0x0001d618) list_medium_line_x3_t1

0xe506,	// (0x0001d62e) thumb_sp_fs_scroll_pane_g1

0xe50f,	// (0x0001d637) thumb_sp_fs_scroll_pane_g2

0xe518,	// (0x0001d640) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ee6a) thumb_sp_fs_scroll_pane_g

0xe506,	// (0x0001d62e) bg_sp_fs_scroll_pane_g1

0xe50f,	// (0x0001d637) bg_sp_fs_scroll_pane_g2

0xe518,	// (0x0001d640) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ee6a) bg_sp_fs_scroll_pane_g

0x1208,	// (0x00010330) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1208,	// (0x00010330) list_medium_line_x2_t3_g4_g1

0x12b0,	// (0x000103d8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x12b0,	// (0x000103d8) list_medium_line_x2_t3_g4_g2

0x1214,	// (0x0001033c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1214,	// (0x0001033c) list_medium_line_x2_t3_g4_g3

0x1220,	// (0x00010348) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1220,	// (0x00010348) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0001e3cf) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0001e3cf) list_medium_line_x2_t3_g4_g

0x8009,	// (0x00017131) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8009,	// (0x00017131) list_medium_line_x2_t3_g4_t1

0x8023,	// (0x0001714b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8023,	// (0x0001714b) list_medium_line_x2_t3_g4_t2

0x1255,	// (0x0001037d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1255,	// (0x0001037d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001ee71) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001ee71) list_medium_line_x2_t3_g4_t

0x64e2,	// (0x0001560a) list_medium_line_g2_g1_ParamLimits

0x64e2,	// (0x0001560a) list_medium_line_g2_g1

0x64ee,	// (0x00015616) list_medium_line_g2_g2_ParamLimits

0x64ee,	// (0x00015616) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0001eb24) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0001eb24) list_medium_line_g2_g

0xe521,	// (0x0001d649) list_medium_line_g2_t1_ParamLimits

0xe521,	// (0x0001d649) list_medium_line_g2_t1

0x64e2,	// (0x0001560a) list_medium_line_t3_g2_g1_ParamLimits

0x64e2,	// (0x0001560a) list_medium_line_t3_g2_g1

0x64ee,	// (0x00015616) list_medium_line_t3_g2_g2_ParamLimits

0x64ee,	// (0x00015616) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0001eb24) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0001eb24) list_medium_line_t3_g2_g

0x803d,	// (0x00017165) list_medium_line_t3_g2_t1_ParamLimits

0x803d,	// (0x00017165) list_medium_line_t3_g2_t1

0x8057,	// (0x0001717f) list_medium_line_t3_g2_t2_ParamLimits

0x8057,	// (0x0001717f) list_medium_line_t3_g2_t2

0x806d,	// (0x00017195) list_medium_line_t3_g2_t3_ParamLimits

0x806d,	// (0x00017195) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001ee78) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001ee78) list_medium_line_t3_g2_t

0x7bc7,	// (0x00016cef) list_medium_line_right_icon_g1

0xe536,	// (0x0001d65e) list_medium_line_right_icon_t1

0x64e2,	// (0x0001560a) list_medium_line_t2_g1_ParamLimits

0x64e2,	// (0x0001560a) list_medium_line_t2_g1

0x8087,	// (0x000171af) list_medium_line_t2_t1_ParamLimits

0x8087,	// (0x000171af) list_medium_line_t2_t1

0x80a1,	// (0x000171c9) list_medium_line_t2_t2_ParamLimits

0x80a1,	// (0x000171c9) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ee7f) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ee7f) list_medium_line_t2_t

0x64e2,	// (0x0001560a) list_medium_line_t3_g1_ParamLimits

0x64e2,	// (0x0001560a) list_medium_line_t3_g1

0x80ba,	// (0x000171e2) list_medium_line_t3_t1_ParamLimits

0x80ba,	// (0x000171e2) list_medium_line_t3_t1

0x80d4,	// (0x000171fc) list_medium_line_t3_t2_ParamLimits

0x80d4,	// (0x000171fc) list_medium_line_t3_t2

0x80ea,	// (0x00017212) list_medium_line_t3_t3_ParamLimits

0x80ea,	// (0x00017212) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ee84) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ee84) list_medium_line_t3_t

0x64e2,	// (0x0001560a) list_medium_line_g3_g1_ParamLimits

0x64e2,	// (0x0001560a) list_medium_line_g3_g1

0x80ff,	// (0x00017227) list_medium_line_g3_g2_ParamLimits

0x80ff,	// (0x00017227) list_medium_line_g3_g2

0x64ee,	// (0x00015616) list_medium_line_g3_g3_ParamLimits

0x64ee,	// (0x00015616) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001ee8b) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001ee8b) list_medium_line_g3_g

0xe544,	// (0x0001d66c) list_medium_line_g3_t1_ParamLimits

0xe544,	// (0x0001d66c) list_medium_line_g3_t1

0x64e2,	// (0x0001560a) list_medium_line_t2_g3_g1_ParamLimits

0x64e2,	// (0x0001560a) list_medium_line_t2_g3_g1

0x80ff,	// (0x00017227) list_medium_line_t2_g3_g2_ParamLimits

0x80ff,	// (0x00017227) list_medium_line_t2_g3_g2

0x64ee,	// (0x00015616) list_medium_line_t2_g3_g3_ParamLimits

0x64ee,	// (0x00015616) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001ee8b) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001ee8b) list_medium_line_t2_g3_g

0x810b,	// (0x00017233) list_medium_line_t2_g3_t1_ParamLimits

0x810b,	// (0x00017233) list_medium_line_t2_g3_t1

0x8125,	// (0x0001724d) list_medium_line_t2_g3_t2_ParamLimits

0x8125,	// (0x0001724d) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001ee92) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001ee92) list_medium_line_t2_g3_t

0x64e2,	// (0x0001560a) list_medium_line_t3_g3_g1_ParamLimits

0x64e2,	// (0x0001560a) list_medium_line_t3_g3_g1

0x80ff,	// (0x00017227) list_medium_line_t3_g3_g2_ParamLimits

0x80ff,	// (0x00017227) list_medium_line_t3_g3_g2

0x64ee,	// (0x00015616) list_medium_line_t3_g3_g3_ParamLimits

0x64ee,	// (0x00015616) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001ee8b) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001ee8b) list_medium_line_t3_g3_g

0x8143,	// (0x0001726b) list_medium_line_t3_g3_t1_ParamLimits

0x8143,	// (0x0001726b) list_medium_line_t3_g3_t1

0x815c,	// (0x00017284) list_medium_line_t3_g3_t2_ParamLimits

0x815c,	// (0x00017284) list_medium_line_t3_g3_t2

0x8172,	// (0x0001729a) list_medium_line_t3_g3_t3_ParamLimits

0x8172,	// (0x0001729a) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001ee97) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001ee97) list_medium_line_t3_g3_t

0x7deb,	// (0x00016f13) list_medium_line_right_iconx2_g1

0x7bc7,	// (0x00016cef) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ee9e) list_medium_line_right_iconx2_g

0xe559,	// (0x0001d681) list_medium_line_right_iconx2_t1

0x7deb,	// (0x00016f13) list_medium_line_t2_right_iconx2_g1

0x7bc7,	// (0x00016cef) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ee9e) list_medium_line_t2_right_iconx2_g

0x818c,	// (0x000172b4) list_medium_line_t2_right_iconx2_t1

0x819c,	// (0x000172c4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001eea3) list_medium_line_t2_right_iconx2_t

0x81ae,	// (0x000172d6) list_medium_line_x4_t4_t1

0x81bc,	// (0x000172e4) list_medium_line_x4_t4_t2

0x81cc,	// (0x000172f4) list_medium_line_x4_t4_t3

0x81dc,	// (0x00017304) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001eea8) list_medium_line_x4_t4_t

0x822f,	// (0x00017357) tport_appsw_pane_ParamLimits

0x822f,	// (0x00017357) tport_appsw_pane

0x8247,	// (0x0001736f) tport_contact_pane_ParamLimits

0x8247,	// (0x0001736f) tport_contact_pane

0x825f,	// (0x00017387) tport_listscroll_pane_ParamLimits

0x825f,	// (0x00017387) tport_listscroll_pane

0x8279,	// (0x000173a1) cell_tport_appsw_pane_ParamLimits

0x8279,	// (0x000173a1) cell_tport_appsw_pane

0xd0d6,	// (0x0001c1fe) tport_appsw_pane_g1_ParamLimits

0xd0d6,	// (0x0001c1fe) tport_appsw_pane_g1

0xe567,	// (0x0001d68f) tport_contact_pane_g1

0xe570,	// (0x0001d698) tport_contact_pane_t1

0xe57e,	// (0x0001d6a6) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001eeb1) tport_contact_pane_t

0xe58c,	// (0x0001d6b4) list_tport_pane

0xe595,	// (0x0001d6bd) scroll_pane_cp_030

0x82c1,	// (0x000173e9) cell_tport_appsw_pane_g1

0x82d1,	// (0x000173f9) cell_tport_appsw_pane_t1

0x82df,	// (0x00017407) grid_highlight_pane_cp019

0x82e7,	// (0x0001740f) list_tport_double_graphic_pane_ParamLimits

0x82e7,	// (0x0001740f) list_tport_double_graphic_pane

0x94a3,	// (0x000185cb) list_highlight_pane_cp023_ParamLimits

0x94a3,	// (0x000185cb) list_highlight_pane_cp023

0x82f4,	// (0x0001741c) list_tport_double_graphic_pane_g1_ParamLimits

0x82f4,	// (0x0001741c) list_tport_double_graphic_pane_g1

0x8301,	// (0x00017429) list_tport_double_graphic_pane_t1_ParamLimits

0x8301,	// (0x00017429) list_tport_double_graphic_pane_t1

0x8316,	// (0x0001743e) list_tport_double_graphic_pane_t2_ParamLimits

0x8316,	// (0x0001743e) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001eebd) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001eebd) list_tport_double_graphic_pane_t

0x9433,	// (0x0001855b) main_cale_note_pane

0x5bb4,	// (0x00014cdc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5bb4,	// (0x00014cdc) cell_vitu2_function_top_wide_pane_cp01

0x772b,	// (0x00016853) wait_bar_pane_cp05_ParamLimits

0x94a3,	// (0x000185cb) listscroll_cmail_pane

0xe59e,	// (0x0001d6c6) list_cmail_pane

0x8328,	// (0x00017450) list_cmail_body_pane

0x833d,	// (0x00017465) list_single_cmail_header_caption_pane

0x8354,	// (0x0001747c) list_single_cmail_header_detail_pane_ParamLimits

0x8354,	// (0x0001747c) list_single_cmail_header_detail_pane

0xe5ae,	// (0x0001d6d6) list_single_cmail_header_caption_pane_t1

0x837e,	// (0x000174a6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x837e,	// (0x000174a6) list_single_cmail_header_detail_pane_g1

0xe5c5,	// (0x0001d6ed) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5c5,	// (0x0001d6ed) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001eec2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001eec2) list_single_cmail_header_detail_pane_g

0xe5de,	// (0x0001d706) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5de,	// (0x0001d706) list_single_cmail_header_detail_pane_t1

0xe63e,	// (0x0001d766) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe63e,	// (0x0001d766) list_single_cmail_header_editor_pane_bg

0xdf39,	// (0x0001d061) list_cmail_body_pane_g1

0xe655,	// (0x0001d77d) list_cmail_body_pane_t1

0xd125,	// (0x0001c24d) list_single_cmail_header_editor_pane_bg_g1

0xa0db,	// (0x00019203) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd135,	// (0x0001c25d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd12d,	// (0x0001c255) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3fc,	// (0x0001c524) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd155,	// (0x0001c27d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd145,	// (0x0001c26d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd14d,	// (0x0001c275) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa0bb,	// (0x000191e3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8396,	// (0x000174be) calenote_gesture_pane_ParamLimits

0x8396,	// (0x000174be) calenote_gesture_pane

0x83b6,	// (0x000174de) calenote_window_pane_ParamLimits

0x83b6,	// (0x000174de) calenote_window_pane

0xe663,	// (0x0001d78b) popup_note_window_cp01

0x83d2,	// (0x000174fa) calenote_swipe_1_pane_ParamLimits

0x83d2,	// (0x000174fa) calenote_swipe_1_pane

0x7b69,	// (0x00016c91) calenote_swipe_2_pane_ParamLimits

0x7b69,	// (0x00016c91) calenote_swipe_2_pane

0xe28b,	// (0x0001d3b3) calenote_swipe_1_pane_g1_ParamLimits

0xe28b,	// (0x0001d3b3) calenote_swipe_1_pane_g1

0xe298,	// (0x0001d3c0) calenote_swipe_1_pane_g2_ParamLimits

0xe298,	// (0x0001d3c0) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0001ede7) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0001ede7) calenote_swipe_1_pane_g

0xe675,	// (0x0001d79d) calenote_swipe_1_pane_t1_ParamLimits

0xe675,	// (0x0001d79d) calenote_swipe_1_pane_t1

0xe28b,	// (0x0001d3b3) calenote_swipe_2_pane_g1_ParamLimits

0xe28b,	// (0x0001d3b3) calenote_swipe_2_pane_g1

0xe694,	// (0x0001d7bc) calenote_swipe_2_pane_g2_ParamLimits

0xe694,	// (0x0001d7bc) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001eece) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001eece) calenote_swipe_2_pane_g

0xe6a0,	// (0x0001d7c8) calenote_swipe_2_pane_t1_ParamLimits

0xe6a0,	// (0x0001d7c8) calenote_swipe_2_pane_t1

0x9433,	// (0x0001855b) main_mup_navstr_pane

0x47f1,	// (0x00013919) main_mup3_pane_t7_ParamLimits

0x47f1,	// (0x00013919) main_mup3_pane_t7

0xcce9,	// (0x0001be11) main_mp4_pane_g6_ParamLimits

0xcce9,	// (0x0001be11) main_mp4_pane_g6

0xcf3c,	// (0x0001c064) main_image3_pane_t4_ParamLimits

0xcf3c,	// (0x0001c064) main_image3_pane_t4

0x83e7,	// (0x0001750f) popup_navstr_preview_pane_ParamLimits

0x83e7,	// (0x0001750f) popup_navstr_preview_pane

0x83fb,	// (0x00017523) scroll_navstr_pane_ParamLimits

0x83fb,	// (0x00017523) scroll_navstr_pane

0x9433,	// (0x0001855b) bg_popup_preview_window_pane_cp04

0xe6c7,	// (0x0001d7ef) popup_navstr_preview_pane_t1

0x840f,	// (0x00017537) scroll_navstr_pane_g1_ParamLimits

0x840f,	// (0x00017537) scroll_navstr_pane_g1

0x8423,	// (0x0001754b) scroll_navstr_pane_t1_ParamLimits

0x8423,	// (0x0001754b) scroll_navstr_pane_t1

0xe66c,	// (0x0001d794) bg_button_pane_cp014

0xe66c,	// (0x0001d794) bg_button_pane_cp030

0x7a42,	// (0x00016b6a) list_double_fisheye_pane_g4_ParamLimits

0x7a42,	// (0x00016b6a) list_double_fisheye_pane_g4

0x7a4e,	// (0x00016b76) list_double_fisheye_pane_g5_ParamLimits

0x7a4e,	// (0x00016b76) list_double_fisheye_pane_g5

0xd25a,	// (0x0001c382) sp_fs_scroll_pane_cp03

0xe3ab,	// (0x0001d4d3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3b7,	// (0x0001d4df) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0001ee04) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7c81,	// (0x00016da9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5a6,	// (0x0001d6ce) sp_fs_scroll_pane_cp02

0x9db7,	// (0x00018edf) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9db7,	// (0x00018edf) popup_sp_fs_calendar_preview_list_single_pane

0x9433,	// (0x0001855b) main_cam6_pano_pane

0x94a3,	// (0x000185cb) main_mup3_pane_ParamLimits

0x9433,	// (0x0001855b) main_phacti_pane

0x75fe,	// (0x00016726) bg_button_pane_cp11

0x7618,	// (0x00016740) main_mobtv_info_pane_g2_ParamLimits

0x7618,	// (0x00016740) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0001ed64) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0001ed64) main_mobtv_info_pane_g

0x77f5,	// (0x0001691d) sc_clock_pane_t5_ParamLimits

0x77f5,	// (0x0001691d) sc_clock_pane_t5

0x78bd,	// (0x000169e5) main_radioblah_pane_g1_ParamLimits

0xe1d7,	// (0x0001d2ff) main_radioblah_pane_t3_ParamLimits

0xe1d7,	// (0x0001d2ff) main_radioblah_pane_t3

0xe1ef,	// (0x0001d317) main_radioblah_pane_t4_ParamLimits

0xe1ef,	// (0x0001d317) main_radioblah_pane_t4

0x78e5,	// (0x00016a0d) main_radioblah_text_pane_ParamLimits

0x78e5,	// (0x00016a0d) main_radioblah_text_pane

0x78f7,	// (0x00016a1f) main_radioblah_info_pane_g1_ParamLimits

0x7990,	// (0x00016ab8) main_radioblah_info_pane_t4_ParamLimits

0x7990,	// (0x00016ab8) main_radioblah_info_pane_t4

0x94a3,	// (0x000185cb) main_sp_fs_calendar_pane

0x843a,	// (0x00017562) main_phacti_pane_g1

0x8442,	// (0x0001756a) phacti_note_pane_ParamLimits

0x8442,	// (0x0001756a) phacti_note_pane

0xe6de,	// (0x0001d806) phacti_term_pane_ParamLimits

0xe6de,	// (0x0001d806) phacti_term_pane

0xe6f3,	// (0x0001d81b) phacti_note_pane_t1_ParamLimits

0xe6f3,	// (0x0001d81b) phacti_note_pane_t1

0xe70a,	// (0x0001d832) phacti_term_pane_g1

0xe712,	// (0x0001d83a) phacti_term_pane_t1_ParamLimits

0xe712,	// (0x0001d83a) phacti_term_pane_t1

0xe73c,	// (0x0001d864) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe744,	// (0x0001d86c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001eed8) popup_sp_fs_calendar_preview_list_single_pane_g

0xe74c,	// (0x0001d874) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe74c,	// (0x0001d874) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe762,	// (0x0001d88a) aid_popup_sp_fs_bg_corner_pane

0xc314,	// (0x0001b43c) popup_sp_fs_calendar_preview_bg_pane_g1

0x9433,	// (0x0001855b) popup_sp_fs_calendar_preview_bg_pane

0x1091,	// (0x000101b9) popup_sp_fs_calendar_preview_list_pane

0xbdf9,	// (0x0001af21) bg_main_sp_fs_cale_pane_ParamLimits

0xbdf9,	// (0x0001af21) bg_main_sp_fs_cale_pane

0xe773,	// (0x0001d89b) listscroll_cale_mrui_pane_ParamLimits

0xe773,	// (0x0001d89b) listscroll_cale_mrui_pane

0xd1a9,	// (0x0001c2d1) listscroll_sp_fs_schedule_track_pane

0xe788,	// (0x0001d8b0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe788,	// (0x0001d8b0) main_sp_fs_ctrlbar_pane_cp01

0xe79b,	// (0x0001d8c3) main_sp_fs_ribbon_pane

0xe7a3,	// (0x0001d8cb) popup_sp_fs_cale_preview_window

0x84b7,	// (0x000175df) list_single_sp_fs_schedule_track_pane_ParamLimits

0x84b7,	// (0x000175df) list_single_sp_fs_schedule_track_pane

0x94a3,	// (0x000185cb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x94a3,	// (0x000185cb) bg_sp_fs_highlight_list_pane_cp03

0x84cb,	// (0x000175f3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x84cb,	// (0x000175f3) list_single_sp_fs_schedule_track_pane_g1

0x84d7,	// (0x000175ff) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x84d7,	// (0x000175ff) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001eedd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001eedd) list_single_sp_fs_schedule_track_pane_g

0x84e3,	// (0x0001760b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x84e3,	// (0x0001760b) list_single_sp_fs_schedule_track_pane_t1

0x84fd,	// (0x00017625) sp_fs_schedule_track_pane_ParamLimits

0x84fd,	// (0x00017625) sp_fs_schedule_track_pane

0xe7b5,	// (0x0001d8dd) sp_fs_schedule_track_pane_g1

0xe7bd,	// (0x0001d8e5) sp_fs_schedule_track_pane_g2

0xe7c5,	// (0x0001d8ed) sp_fs_schedule_track_pane_g3

0xe7cd,	// (0x0001d8f5) sp_fs_schedule_track_pane_g4

0xe7d5,	// (0x0001d8fd) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001eee2) sp_fs_schedule_track_pane_g

0xd125,	// (0x0001c24d) bg_sp_fs_schedule_viewer_highlight_g1

0xa0db,	// (0x00019203) bg_sp_fs_schedule_viewer_highlight_g2

0xd12d,	// (0x0001c255) bg_sp_fs_schedule_viewer_highlight_g3

0xd135,	// (0x0001c25d) bg_sp_fs_schedule_viewer_highlight_g4

0xd3fc,	// (0x0001c524) bg_sp_fs_schedule_viewer_highlight_g5

0xd145,	// (0x0001c26d) bg_sp_fs_schedule_viewer_highlight_g6

0xd14d,	// (0x0001c275) bg_sp_fs_schedule_viewer_highlight_g7

0xd155,	// (0x0001c27d) bg_sp_fs_schedule_viewer_highlight_g8

0xa0bb,	// (0x000191e3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001eeed) bg_sp_fs_schedule_viewer_highlight_g

0x9433,	// (0x0001855b) bg_main_sp_fs_ribbon_pane

0x850e,	// (0x00017636) main_sp_fs_ribbon_pane_g1

0xe7dd,	// (0x0001d905) main_sp_fs_ribbon_pane_t1

0x8517,	// (0x0001763f) main_sp_fs_ribbon_pane_t2

0xe7ec,	// (0x0001d914) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001ef00) main_sp_fs_ribbon_pane_t

0xe7fb,	// (0x0001d923) main_sp_fs_ribbon_scheduler_pane

0xe803,	// (0x0001d92b) bg_main_sp_fs_ribbon_pane_g1

0xe80c,	// (0x0001d934) bg_main_sp_fs_ribbon_pane_g2

0xe815,	// (0x0001d93d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001ef07) bg_main_sp_fs_ribbon_pane_g

0xe81d,	// (0x0001d945) main_sp_fs_ribbon_scheduler_pane_g1

0xe826,	// (0x0001d94e) main_sp_fs_ribbon_scheduler_pane_g2

0xe82f,	// (0x0001d957) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001ef0e) main_sp_fs_ribbon_scheduler_pane_g

0xe838,	// (0x0001d960) list_cale_mrui_pane

0x8526,	// (0x0001764e) sp_fs_scroll_pane_cp07_ParamLimits

0x8526,	// (0x0001764e) sp_fs_scroll_pane_cp07

0x8542,	// (0x0001766a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8542,	// (0x0001766a) bg_sp_fs_schedule_viewer_highlight

0xe845,	// (0x0001d96d) list_single_sp_fs_schedule_track_pane_cp01

0xe84d,	// (0x0001d975) list_sp_fs_schedule_track_pane

0xe855,	// (0x0001d97d) sp_fs_scroll_pane_cp06_ParamLimits

0xe855,	// (0x0001d97d) sp_fs_scroll_pane_cp06

0xc314,	// (0x0001b43c) bgmain_sp_fs_calendar_pane_g1

0x8552,	// (0x0001767a) list_single_cale_mrui_pane_ParamLimits

0x8552,	// (0x0001767a) list_single_cale_mrui_pane

0xe867,	// (0x0001d98f) list_single_cale_mrui_row_pane_ParamLimits

0xe867,	// (0x0001d98f) list_single_cale_mrui_row_pane

0xe874,	// (0x0001d99c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe874,	// (0x0001d99c) list_single_cale_mrui_row_pane_g1

0xe8b9,	// (0x0001d9e1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8b9,	// (0x0001d9e1) list_single_cale_mrui_row_pane_t1

0x8573,	// (0x0001769b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8573,	// (0x0001769b) list_single_cale_mrui_row_pane_t2

0xe8cb,	// (0x0001d9f3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8cb,	// (0x0001d9f3) list_single_cale_mrui_row_pane_t3

0xe8fa,	// (0x0001da22) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8fa,	// (0x0001da22) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001ef1c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001ef1c) list_single_cale_mrui_row_pane_t

0x85db,	// (0x00017703) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x85db,	// (0x00017703) list_single_cmail_header_editor_pane_bg_cp01

0x8601,	// (0x00017729) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8601,	// (0x00017729) list_single_cmail_header_editor_pane_bg_cp02

0x8621,	// (0x00017749) main_radioblah_text_pane_t1_ParamLimits

0x8621,	// (0x00017749) main_radioblah_text_pane_t1

0xe929,	// (0x0001da51) cam6_indi_pane_cp01

0xe931,	// (0x0001da59) cam6_mode_pane_cp01

0xe939,	// (0x0001da61) cam6_pano_pane

0xe942,	// (0x0001da6a) cam6_zoom_pane_cp01

0xe94a,	// (0x0001da72) cam6_pano_image_pane

0xe955,	// (0x0001da7d) cam6_pano_pane_g1

0xdf39,	// (0x0001d061) cam6_pano_pane_g2

0xe95e,	// (0x0001da86) cam6_pano_pane_g3

0xe967,	// (0x0001da8f) cam6_pano_pane_g4

0xc92a,	// (0x0001ba52) cam6_pano_pane_g5

0xe970,	// (0x0001da98) cam6_pano_pane_g6

0xe97a,	// (0x0001daa2) cam6_pano_pane_g7

0xe982,	// (0x0001daaa) cam6_pano_pane_g8

0xe98b,	// (0x0001dab3) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001ef25) cam6_pano_pane_g

0x9433,	// (0x0001855b) main_browser_tag_pane

0xe6bf,	// (0x0001d7e7) grid_navstr_albumart_pane

0xe996,	// (0x0001dabe) cell_navstr_albumart_pane_ParamLimits

0xe996,	// (0x0001dabe) cell_navstr_albumart_pane

0xe9b6,	// (0x0001dade) cell_navstr_albumart_pane_g1

0xbbca,	// (0x0001acf2) cell_navstr_albumart_pane_g2

0xbbda,	// (0x0001ad02) cell_navstr_albumart_pane_g3

0xbbd2,	// (0x0001acfa) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001ef38) cell_navstr_albumart_pane_g

0x863c,	// (0x00017764) bt_list_pane_ParamLimits

0x863c,	// (0x00017764) bt_list_pane

0x8650,	// (0x00017778) bt_list_pane_t1

0x865f,	// (0x00017787) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001ef41) bt_list_pane_t

0x9433,	// (0x0001855b) main_cale_prevew_pane

0x866e,	// (0x00017796) popup_cale_preview_window_ParamLimits

0x866e,	// (0x00017796) popup_cale_preview_window

0x94a3,	// (0x000185cb) bg_popup_preview_window_pane_cp05_ParamLimits

0x94a3,	// (0x000185cb) bg_popup_preview_window_pane_cp05

0xe9be,	// (0x0001dae6) list_cale_preview_pane_ParamLimits

0xe9be,	// (0x0001dae6) list_cale_preview_pane

0x8687,	// (0x000177af) list_double_cale_preview_pane_ParamLimits

0x8687,	// (0x000177af) list_double_cale_preview_pane

0xd15d,	// (0x0001c285) list_single_cale_preview_pane_ParamLimits

0xd15d,	// (0x0001c285) list_single_cale_preview_pane

0x8699,	// (0x000177c1) list_single_cale_preview_pane_g1

0x86a1,	// (0x000177c9) list_single_cale_preview_pane_t1_ParamLimits

0x86a1,	// (0x000177c9) list_single_cale_preview_pane_t1

0x86b6,	// (0x000177de) list_double_cale_preview_pane_g1

0x86be,	// (0x000177e6) list_double_cale_preview_pane_t1_ParamLimits

0x86be,	// (0x000177e6) list_double_cale_preview_pane_t1

0x86d3,	// (0x000177fb) list_double_cale_preview_pane_t2_ParamLimits

0x86d3,	// (0x000177fb) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001ef46) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001ef46) list_double_cale_preview_pane_t

0x9433,	// (0x0001855b) main_ezdial_pane

0x94a3,	// (0x000185cb) main_sp_fs_email_pane_ParamLimits

0x7bf1,	// (0x00016d19) cmail_ddmenu_btn01_pane_ParamLimits

0x7bf1,	// (0x00016d19) cmail_ddmenu_btn01_pane

0x7c04,	// (0x00016d2c) cmail_ddmenu_btn02_pane_ParamLimits

0x7c04,	// (0x00016d2c) cmail_ddmenu_btn02_pane

0x7c27,	// (0x00016d4f) cmail_ddmenu_btn03_pane_ParamLimits

0x7c27,	// (0x00016d4f) cmail_ddmenu_btn03_pane

0x7cc0,	// (0x00016de8) main_sp_fs_ctrlbar_pane_ParamLimits

0x7ce4,	// (0x00016e0c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8328,	// (0x00017450) list_cmail_body_pane_ParamLimits

0xe5bc,	// (0x0001d6e4) bg_button_pane_cp12

0xe5d1,	// (0x0001d6f9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5d1,	// (0x0001d6f9) list_single_cmail_header_detail_pane_g3

0xe61a,	// (0x0001d742) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe61a,	// (0x0001d742) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001eec9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001eec9) list_single_cmail_header_detail_pane_t

0xe727,	// (0x0001d84f) phacti_term_pane_t2_ParamLimits

0xe727,	// (0x0001d84f) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001eed3) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001eed3) phacti_term_pane_t

0xe9ca,	// (0x0001daf2) aid_size_list_single_double

0x86eb,	// (0x00017813) popup_ezdial_listscroll_window

0x8707,	// (0x0001782f) popup_number_entry_window_cp01

0x9e78,	// (0x00018fa0) bg_popup_call_pane_cp09

0xe9d6,	// (0x0001dafe) ezdial_list_pane

0xe9de,	// (0x0001db06) scroll_pane_cp23

0xbdf9,	// (0x0001af21) bg_button_pane_cp028_ParamLimits

0xbdf9,	// (0x0001af21) bg_button_pane_cp028

0x8715,	// (0x0001783d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8715,	// (0x0001783d) cmail_ddmenu_btn01_pane_g1

0x8721,	// (0x00017849) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8721,	// (0x00017849) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001ef4b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001ef4b) cmail_ddmenu_btn01_pane_g

0xe9e6,	// (0x0001db0e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9e6,	// (0x0001db0e) cmail_ddmenu_btn01_pane_t1

0xbdf9,	// (0x0001af21) bg_button_pane_cp029_ParamLimits

0xbdf9,	// (0x0001af21) bg_button_pane_cp029

0x872d,	// (0x00017855) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x872d,	// (0x00017855) cmail_ddmenu_btn02_pane_g1

0x8745,	// (0x0001786d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8745,	// (0x0001786d) cmail_ddmenu_btn02_pane_t1

0x94a3,	// (0x000185cb) bg_button_pane_cp031_ParamLimits

0x94a3,	// (0x000185cb) bg_button_pane_cp031

0x872d,	// (0x00017855) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x872d,	// (0x00017855) cmail_ddmenu_btn03_pane_g1

0x8745,	// (0x0001786d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8745,	// (0x0001786d) cmail_ddmenu_btn03_pane_t1

0x539a,	// (0x000144c2) cell_dialer2_keypad_pane_t1_ParamLimits

0x53b4,	// (0x000144dc) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x53b4,	// (0x000144dc) cell_dialer2_keypad_pane_t1_copy1

0x7421,	// (0x00016549) ncimui_group_button_pane

0x94a3,	// (0x000185cb) main_sp_fs_calendar_pane_ParamLimits

0x833d,	// (0x00017465) list_single_cmail_header_caption_pane_ParamLimits

0xe76a,	// (0x0001d892) aid_recal_txt_sm_pane

0x9433,	// (0x0001855b) mian_recal_day_pane

0xe7a3,	// (0x0001d8cb) popup_sp_fs_cale_preview_window_ParamLimits

0xe9fb,	// (0x0001db23) list_recal_day_pane

0xea3d,	// (0x0001db65) list_single_recal_day_pane_ParamLimits

0xea3d,	// (0x0001db65) list_single_recal_day_pane

0xea4f,	// (0x0001db77) list_single_recal_day_pane_g1_ParamLimits

0xea4f,	// (0x0001db77) list_single_recal_day_pane_g1

0xea5b,	// (0x0001db83) list_single_recal_day_pane_g2_ParamLimits

0xea5b,	// (0x0001db83) list_single_recal_day_pane_g2

0xea67,	// (0x0001db8f) list_single_recal_day_pane_g3_ParamLimits

0xea67,	// (0x0001db8f) list_single_recal_day_pane_g3

0x8769,	// (0x00017891) list_single_recal_day_pane_g4_ParamLimits

0x8769,	// (0x00017891) list_single_recal_day_pane_g4

0xea73,	// (0x0001db9b) list_single_recal_day_pane_g5_ParamLimits

0xea73,	// (0x0001db9b) list_single_recal_day_pane_g5

0xea7f,	// (0x0001dba7) list_single_recal_day_pane_g6_ParamLimits

0xea7f,	// (0x0001dba7) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001ef5a) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001ef5a) list_single_recal_day_pane_g

0xea93,	// (0x0001dbbb) list_single_recal_day_pane_t1

0xeaa5,	// (0x0001dbcd) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001ef65) list_single_recal_day_pane_t

0x8781,	// (0x000178a9) ncimui_query_button_pane_ParamLimits

0x8781,	// (0x000178a9) ncimui_query_button_pane

0x8791,	// (0x000178b9) ncimui_query_button_pane_t1_ParamLimits

0x8791,	// (0x000178b9) ncimui_query_button_pane_t1

0xeae4,	// (0x0001dc0c) ncimui_query_button_pane_t2_ParamLimits

0xeae4,	// (0x0001dc0c) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001ef6a) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001ef6a) ncimui_query_button_pane_t

0x87a4,	// (0x000178cc) query_button_pane_ParamLimits

0x87a4,	// (0x000178cc) query_button_pane

0x9433,	// (0x0001855b) bg_button_pane_cp0028

0xeaf7,	// (0x0001dc1f) query_button_pane_t1

0x3436,	// (0x0001255e) main_tport_pane_ParamLimits

0x81ec,	// (0x00017314) bg_popup_window_pane_cp01_ParamLimits

0x81ec,	// (0x00017314) bg_popup_window_pane_cp01

0x8207,	// (0x0001732f) heading_pane_cp08_ParamLimits

0x8207,	// (0x0001732f) heading_pane_cp08

0x821a,	// (0x00017342) heading_pane_cp07_ParamLimits

0x821a,	// (0x00017342) heading_pane_cp07

0x82c1,	// (0x000173e9) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001eeb6) cell_tport_appsw_pane_g

0x29d8,	// (0x00011b00) input_candi_list_open_g1

0xa2cc,	// (0x000193f4) list_cale_time_pane_g6_ParamLimits

0xa2cc,	// (0x000193f4) list_cale_time_pane_g6

0x41fe,	// (0x00013326) aid_size_touch_calib_1_ParamLimits

0x41fe,	// (0x00013326) aid_size_touch_calib_1

0x4210,	// (0x00013338) aid_size_touch_calib_2_ParamLimits

0x4210,	// (0x00013338) aid_size_touch_calib_2

0x4228,	// (0x00013350) aid_size_touch_calib_3_ParamLimits

0x4228,	// (0x00013350) aid_size_touch_calib_3

0x4246,	// (0x0001336e) aid_size_touch_calib_4_ParamLimits

0x4246,	// (0x0001336e) aid_size_touch_calib_4

0x425e,	// (0x00013386) main_touch_calib_button_group_pane_ParamLimits

0x425e,	// (0x00013386) main_touch_calib_button_group_pane

0x4276,	// (0x0001339e) main_touch_calib_pane_g1_ParamLimits

0x4288,	// (0x000133b0) main_touch_calib_pane_g2_ParamLimits

0x429a,	// (0x000133c2) main_touch_calib_pane_g3_ParamLimits

0x42ac,	// (0x000133d4) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0001e871) main_touch_calib_pane_g_ParamLimits

0x42be,	// (0x000133e6) main_touch_calib_pane_t1_ParamLimits

0x42d8,	// (0x00013400) main_touch_calib_pane_t2_ParamLimits

0x42f2,	// (0x0001341a) main_touch_calib_pane_t3_ParamLimits

0x4306,	// (0x0001342e) main_touch_calib_pane_t4_ParamLimits

0x431a,	// (0x00013442) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0001e87a) main_touch_calib_pane_t_ParamLimits

0xc6cd,	// (0x0001b7f5) list_single_fp_cale_pane_g3_ParamLimits

0xc6cd,	// (0x0001b7f5) list_single_fp_cale_pane_g3

0x94a3,	// (0x000185cb) bg_button_pane_cp012_ParamLimits

0x94a3,	// (0x000185cb) bg_vkb2_func_pane_cp03_ParamLimits

0x6498,	// (0x000155c0) cell_vitu2_function_top_pane_g1_ParamLimits

0x94a3,	// (0x000185cb) bg_vkb2_func_pane_cp04_ParamLimits

0x73ac,	// (0x000164d4) main_ncimui_button_group_pane_ParamLimits

0x73ac,	// (0x000164d4) main_ncimui_button_group_pane

0x740c,	// (0x00016534) main_ncimui_pane_t3_ParamLimits

0x740c,	// (0x00016534) main_ncimui_pane_t3

0xe6d5,	// (0x0001d7fd) phacti_button_group_pane

0xe9ca,	// (0x0001daf2) aid_size_list_single_double_ParamLimits

0x86eb,	// (0x00017813) popup_ezdial_listscroll_window_ParamLimits

0x8707,	// (0x0001782f) popup_number_entry_window_cp01_ParamLimits

0x87b7,	// (0x000178df) phacti_button_pane_ParamLimits

0x87b7,	// (0x000178df) phacti_button_pane

0x9433,	// (0x0001855b) bg_button_pane_cp14

0xeb05,	// (0x0001dc2d) phacti_button_pane_t1

0x87c8,	// (0x000178f0) main_touch_calib_button_pane_ParamLimits

0x87c8,	// (0x000178f0) main_touch_calib_button_pane

0x9c12,	// (0x00018d3a) bg_button_pane_cp18_ParamLimits

0x9c12,	// (0x00018d3a) bg_button_pane_cp18

0xeb13,	// (0x0001dc3b) main_touch_calib_button_pane_t1_ParamLimits

0xeb13,	// (0x0001dc3b) main_touch_calib_button_pane_t1

0xeb29,	// (0x0001dc51) main_touch_calib_button_pane_t2_ParamLimits

0xeb29,	// (0x0001dc51) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001ef6f) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001ef6f) main_touch_calib_button_pane_t

0x9433,	// (0x0001855b) cell_ncimui_button_pane

0x9433,	// (0x0001855b) bg_button_pane_cp032

0xeb47,	// (0x0001dc6f) cell_ncimui_button_pane_t1

0xcf1c,	// (0x0001c044) image3_infobar_pane_ParamLimits

0xcf1c,	// (0x0001c044) image3_infobar_pane

0x7821,	// (0x00016949) fs_bigclock_status_pane_ParamLimits

0x7821,	// (0x00016949) fs_bigclock_status_pane

0x782e,	// (0x00016956) main_fs_bigclock_clock_pane_ParamLimits

0x782e,	// (0x00016956) main_fs_bigclock_clock_pane

0x784c,	// (0x00016974) main_fs_bigclock_indi_pane_ParamLimits

0x784c,	// (0x00016974) main_fs_bigclock_indi_pane

0x787e,	// (0x000169a6) main_fs_bigclock_swipe_pane_ParamLimits

0x787e,	// (0x000169a6) main_fs_bigclock_swipe_pane

0x9433,	// (0x0001855b) main_fs_clock_dumped_data

0xe046,	// (0x0001d16e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe046,	// (0x0001d16e) list_single_fs_bigclock_indicator_pane_g1

0xe062,	// (0x0001d18a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe062,	// (0x0001d18a) list_single_fs_bigclock_indicator_pane_g2

0xe07c,	// (0x0001d1a4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe07c,	// (0x0001d1a4) list_single_fs_bigclock_indicator_pane_g3

0xe096,	// (0x0001d1be) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe096,	// (0x0001d1be) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0001ed98) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0001ed98) list_single_fs_bigclock_indicator_pane_g

0xe0c1,	// (0x0001d1e9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0c1,	// (0x0001d1e9) list_single_fs_bigclock_indicator_pane_t1

0xe0e9,	// (0x0001d211) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0e9,	// (0x0001d211) list_single_fs_bigclock_indicator_pane_t2

0xe111,	// (0x0001d239) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe111,	// (0x0001d239) list_single_fs_bigclock_indicator_pane_t3

0xe139,	// (0x0001d261) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe139,	// (0x0001d261) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0001eda3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0001eda3) list_single_fs_bigclock_indicator_pane_t

0xeb55,	// (0x0001dc7d) image3_infobar_fav_pane_ParamLimits

0xeb55,	// (0x0001dc7d) image3_infobar_fav_pane

0xeb65,	// (0x0001dc8d) image3_infobar_loc_pane_ParamLimits

0xeb65,	// (0x0001dc8d) image3_infobar_loc_pane

0xeb79,	// (0x0001dca1) image3_infobar_time_pane_ParamLimits

0xeb79,	// (0x0001dca1) image3_infobar_time_pane

0xc314,	// (0x0001b43c) image3_infobar_time_pane_g1

0xeb89,	// (0x0001dcb1) image3_infobar_time_pane_t1

0xc314,	// (0x0001b43c) image3_infobar_loc_pane_g1

0xeb97,	// (0x0001dcbf) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001ef74) image3_infobar_loc_pane_g

0xeb9f,	// (0x0001dcc7) image3_infobar_loc_pane_t1

0xc314,	// (0x0001b43c) image3_infobar_fav_pane_g1

0xebad,	// (0x0001dcd5) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001ef79) image3_infobar_fav_pane_g

0xebb5,	// (0x0001dcdd) fs_bigclock_status_battery_pane

0xebbe,	// (0x0001dce6) fs_bigclock_status_signal_pane

0xebc7,	// (0x0001dcef) fs_bigclock_status_title_pane

0xebd0,	// (0x0001dcf8) fs_bigclock_status_signal_pane_g1

0xebd9,	// (0x0001dd01) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001ef7e) fs_bigclock_status_signal_pane_g

0xebe1,	// (0x0001dd09) fs_bigclock_status_battery_pane_g1

0xebea,	// (0x0001dd12) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001ef83) fs_bigclock_status_battery_pane_g

0xebf2,	// (0x0001dd1a) fs_bigclock_status_title_pane_t1

0x87dd,	// (0x00017905) main_fs_bigclock_clock_pane_g1

0x87dd,	// (0x00017905) main_fs_bigclock_clock_pane_g2

0x87ee,	// (0x00017916) main_fs_bigclock_clock_pane_g3

0x87ee,	// (0x00017916) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001ef88) main_fs_bigclock_clock_pane_g

0x8801,	// (0x00017929) main_fs_bigclock_clock_pane_t1

0x8817,	// (0x0001793f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ef91) main_fs_bigclock_clock_pane_t

0xec00,	// (0x0001dd28) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec00,	// (0x0001dd28) list_single_fs_bigclock_indicator_pane

0xec11,	// (0x0001dd39) list_single_fs_bigclock_pane_ParamLimits

0xec11,	// (0x0001dd39) list_single_fs_bigclock_pane

0xec37,	// (0x0001dd5f) main_fs_bigclock_indicator_pane_t1

0xec46,	// (0x0001dd6e) list_single_fs_bigclock_pane_g1

0xec4e,	// (0x0001dd76) list_single_fs_bigclock_pane_t1

0xc314,	// (0x0001b43c) main_fs_bigclock_swipe_pane_g1

0xec91,	// (0x0001ddb9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001efa2) main_fs_bigclock_swipe_pane_g

0xec99,	// (0x0001ddc1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec99,	// (0x0001ddc1) main_fs_bigclock_swipe_pane_t1

0x22c7,	// (0x000113ef) call_type_pane_ParamLimits

0x9433,	// (0x0001855b) main_btmg_pane

0xe8a0,	// (0x0001d9c8) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8a0,	// (0x0001d9c8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001ef15) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001ef15) list_single_cale_mrui_row_pane_g

0xea24,	// (0x0001db4c) list_recal_vselct_arw_lo_pane

0xea2c,	// (0x0001db54) list_recal_vselct_arw_up_pane

0xea34,	// (0x0001db5c) list_recal_vselct_pane

0x8871,	// (0x00017999) btmg_button_pane

0x887b,	// (0x000179a3) main_btmg_pane_g1

0x9433,	// (0x0001855b) bg_button_pane_cp044

0xecb6,	// (0x0001ddde) btmg_button_pane_t1

0xbde5,	// (0x0001af0d) aid_listscroll_gen

0x94a3,	// (0x000185cb) main_cntbar_detail_pane

0xe59e,	// (0x0001d6c6) list_cmail_folder_pane

0xd25a,	// (0x0001c382) sp_fs_scroll_pane_cp03_ParamLimits

0x8885,	// (0x000179ad) list_single_fs_dyc_pane_cp01_ParamLimits

0x8885,	// (0x000179ad) list_single_fs_dyc_pane_cp01

0xecc4,	// (0x0001ddec) aid_size_cmail_indent

0xeccd,	// (0x0001ddf5) list_single_dyc_row_pane_cp01

0x88ce,	// (0x000179f6) cntbar_detail_list_pane_ParamLimits

0x88ce,	// (0x000179f6) cntbar_detail_list_pane

0x891a,	// (0x00017a42) main_cntbar_detail_cont_pane_ParamLimits

0x891a,	// (0x00017a42) main_cntbar_detail_cont_pane

0xd25a,	// (0x0001c382) scroll_pane_cp032_ParamLimits

0xd25a,	// (0x0001c382) scroll_pane_cp032

0x892e,	// (0x00017a56) cntbar_detail_list_event_pane_ParamLimits

0x892e,	// (0x00017a56) cntbar_detail_list_event_pane

0x88de,	// (0x00017a06) cntbar_detail_list_shct_pane

0xa129,	// (0x00019251) aid_list_gen

0xecd6,	// (0x0001ddfe) aid_scroll

0xecdf,	// (0x0001de07) aid_size_touch_scroll_bar

0x6b9e,	// (0x00015cc6) aid_list_double

0x6b8c,	// (0x00015cb4) aid_list_single

0x6b8c,	// (0x00015cb4) aid_list_single_lg

0x893e,	// (0x00017a66) aid_list_z_g_a_sm

0x8946,	// (0x00017a6e) aid_list_z_g_d

0x894e,	// (0x00017a76) aid_txt_z_prm

0x895c,	// (0x00017a84) aid_txt_z_prm_cp01

0x896a,	// (0x00017a92) aid_txt_z_sec

0x8978,	// (0x00017aa0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8978,	// (0x00017aa0) main_cntbar_detail_cont_pane_g1

0x898c,	// (0x00017ab4) main_cntbar_detail_cont_pane_g2_ParamLimits

0x898c,	// (0x00017ab4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001efa7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001efa7) main_cntbar_detail_cont_pane_g

0xece8,	// (0x0001de10) main_cntbar_detail_cont_pane_t1

0xecf6,	// (0x0001de1e) main_cntbar_detail_cont_pane_t2

0xed04,	// (0x0001de2c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001efac) main_cntbar_detail_cont_pane_t

0x899c,	// (0x00017ac4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x899c,	// (0x00017ac4) cell_cntbar_detail_list_shct_pane

0xed12,	// (0x0001de3a) cntbar_detail_list_shct_pane_g1

0xed1b,	// (0x0001de43) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001efb3) cntbar_detail_list_shct_pane_g

0x89b0,	// (0x00017ad8) cntbar_detail_list_event_pane_g1_ParamLimits

0x89b0,	// (0x00017ad8) cntbar_detail_list_event_pane_g1

0x89bc,	// (0x00017ae4) cntbar_detail_list_event_pane_g2_ParamLimits

0x89bc,	// (0x00017ae4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001efb8) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001efb8) cntbar_detail_list_event_pane_g

0x8a28,	// (0x00017b50) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a28,	// (0x00017b50) cntbar_detail_list_event_pane_t1

0x8a3d,	// (0x00017b65) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a3d,	// (0x00017b65) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001efc5) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001efc5) cntbar_detail_list_event_pane_t

0xc314,	// (0x0001b43c) cell_cntbar_detail_list_shct_pane_g1

0xa912,	// (0x00019a3a) navi_pane_mv_g3

0x94a3,	// (0x000185cb) main_cntbar_detail_pane_ParamLimits

0x9433,	// (0x0001855b) main_notif_wgt_pane

0xcc77,	// (0x0001bd9f) aid_tch_main_mp4_pane_g4

0xcea9,	// (0x0001bfd1) popup_slider_window_cp02

0xea1a,	// (0x0001db42) list_recal_day_event_pane

0x889c,	// (0x000179c4) cntbar_detail_btn_pane_ParamLimits

0x889c,	// (0x000179c4) cntbar_detail_btn_pane

0x88b5,	// (0x000179dd) cntbar_detail_btn_pane_cp01_ParamLimits

0x88b5,	// (0x000179dd) cntbar_detail_btn_pane_cp01

0x88de,	// (0x00017a06) cntbar_detail_list_shct_pane_ParamLimits

0x88ee,	// (0x00017a16) cntbar_detail_pane_g1_ParamLimits

0x88ee,	// (0x00017a16) cntbar_detail_pane_g1

0x88fe,	// (0x00017a26) cntbar_detail_pane_t1_ParamLimits

0x88fe,	// (0x00017a26) cntbar_detail_pane_t1

0x89c8,	// (0x00017af0) cntbar_detail_list_event_pane_g3_ParamLimits

0x89c8,	// (0x00017af0) cntbar_detail_list_event_pane_g3

0x89e0,	// (0x00017b08) cntbar_detail_list_event_pane_g4_ParamLimits

0x89e0,	// (0x00017b08) cntbar_detail_list_event_pane_g4

0x89f8,	// (0x00017b20) cntbar_detail_list_event_pane_g5_ParamLimits

0x89f8,	// (0x00017b20) cntbar_detail_list_event_pane_g5

0x8a10,	// (0x00017b38) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a10,	// (0x00017b38) cntbar_detail_list_event_pane_g6

0x8a52,	// (0x00017b7a) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a52,	// (0x00017b7a) cntbar_detail_list_event_pane_t3

0x8a64,	// (0x00017b8c) popup_notif_wgt_window_ParamLimits

0x8a64,	// (0x00017b8c) popup_notif_wgt_window

0x8a7d,	// (0x00017ba5) popup_submenu_window_cp01_ParamLimits

0x8a7d,	// (0x00017ba5) popup_submenu_window_cp01

0x9e78,	// (0x00018fa0) bg_popup_window_pane_cp10

0xed24,	// (0x0001de4c) listscroll_notif_wgt_pane

0xed36,	// (0x0001de5e) list_notif_wgt_window

0xed3f,	// (0x0001de67) scroll_pane_cp033

0x8a8f,	// (0x00017bb7) list_notif_wgt_row_pane_ParamLimits

0x8a8f,	// (0x00017bb7) list_notif_wgt_row_pane

0xed48,	// (0x0001de70) aid_size_list_notif_wgt_del

0xed55,	// (0x0001de7d) list_notif_wgt_row_pane_g1

0xed61,	// (0x0001de89) list_notif_wgt_row_pane_g2

0xed70,	// (0x0001de98) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001efcc) list_notif_wgt_row_pane_g

0xed7d,	// (0x0001dea5) list_notif_wgt_row_pane_t1

0xed93,	// (0x0001debb) list_notif_wgt_row_pane_t2

0xeda5,	// (0x0001decd) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001efd3) list_notif_wgt_row_pane_t

0xd424,	// (0x0001c54c) list_recal_day_event_pane_g1

0xedb7,	// (0x0001dedf) list_recal_day_event_pane_t1

0x9433,	// (0x0001855b) bg_button_pane_cp045

0x8a9f,	// (0x00017bc7) cntbar_detail_btn_pane_t1

0xbdf9,	// (0x0001af21) main_callh_pane_ParamLimits

0xbdf9,	// (0x0001af21) main_callh_pane

0x9433,	// (0x0001855b) main_coverflow0_pane

0x9433,	// (0x0001855b) main_wgtman_pane

0x7896,	// (0x000169be) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7896,	// (0x000169be) main_fs_bigclock_unlock_btn_pane

0x82b9,	// (0x000173e1) bg_button_pane_cp16

0x82c9,	// (0x000173f1) cell_tport_appsw_pane_g3

0x8aad,	// (0x00017bd5) cf0_flow_pane_ParamLimits

0x8aad,	// (0x00017bd5) cf0_flow_pane

0xedc6,	// (0x0001deee) listscroll_cf0_pane

0xedd1,	// (0x0001def9) main_cf0_pane_g1

0x8ac2,	// (0x00017bea) main_cf0_pane_t1_ParamLimits

0x8ac2,	// (0x00017bea) main_cf0_pane_t1

0x8ad9,	// (0x00017c01) main_cf0_pane_t2_ParamLimits

0x8ad9,	// (0x00017c01) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001efdf) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001efdf) main_cf0_pane_t

0xede3,	// (0x0001df0b) scroll_pane_cp11

0x8af0,	// (0x00017c18) cf0_flow_pane_g1

0x8af8,	// (0x00017c20) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001efe4) cf0_flow_pane_g

0x8b00,	// (0x00017c28) cf0_flow_pane_t1

0x9433,	// (0x0001855b) main_call6_pane

0x9433,	// (0x0001855b) main_calllock_pane

0x8b0e,	// (0x00017c36) call6_btn_grp_pane_ParamLimits

0x8b0e,	// (0x00017c36) call6_btn_grp_pane

0x8b28,	// (0x00017c50) call6_pane_g1_ParamLimits

0x8b28,	// (0x00017c50) call6_pane_g1

0x8b3e,	// (0x00017c66) popup_call6_1st_window_ParamLimits

0x8b3e,	// (0x00017c66) popup_call6_1st_window

0x8b4f,	// (0x00017c77) popup_call6_2nd_window_ParamLimits

0x8b4f,	// (0x00017c77) popup_call6_2nd_window

0x8b60,	// (0x00017c88) cell_call6_btn_pane_ParamLimits

0x8b60,	// (0x00017c88) cell_call6_btn_pane

0x9e78,	// (0x00018fa0) bg_popup_call2_in_pane_cp03

0xedee,	// (0x0001df16) popup_call6_1st_window_g1

0xedf6,	// (0x0001df1e) popup_call6_1st_window_g2

0xedfe,	// (0x0001df26) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001efe9) popup_call6_1st_window_g

0xee06,	// (0x0001df2e) popup_call6_1st_window_t1

0xee15,	// (0x0001df3d) popup_call6_1st_window_t2

0xee23,	// (0x0001df4b) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001eff0) popup_call6_1st_window_t

0x9e78,	// (0x00018fa0) bg_popup_call2_in_pane_cp04

0xedee,	// (0x0001df16) popup_call6_2nd_window_g1

0xedf6,	// (0x0001df1e) popup_call6_2nd_window_g2

0xedfe,	// (0x0001df26) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001efe9) popup_call6_2nd_window_g

0xee06,	// (0x0001df2e) popup_call6_2nd_window_t1

0x9433,	// (0x0001855b) bg_button_pane_cp15

0xee31,	// (0x0001df59) cell_call6_btn_pane_g1

0xee3a,	// (0x0001df62) cell_call6_btn_pane_t1

0x8b74,	// (0x00017c9c) listscroll_wgtman_pane_ParamLimits

0x8b74,	// (0x00017c9c) listscroll_wgtman_pane

0x8b95,	// (0x00017cbd) wgtman_btn_pane_ParamLimits

0x8b95,	// (0x00017cbd) wgtman_btn_pane

0xa726,	// (0x0001984e) aid_scroll_copy1

0xee49,	// (0x0001df71) list_wgtman_pane

0x8bd8,	// (0x00017d00) wgtman_btn_pane_g1_ParamLimits

0x8bd8,	// (0x00017d00) wgtman_btn_pane_g1

0x8c04,	// (0x00017d2c) wgtman_btn_pane_t1_ParamLimits

0x8c04,	// (0x00017d2c) wgtman_btn_pane_t1

0xee53,	// (0x0001df7b) wgtman_btn_pane_t2_ParamLimits

0xee53,	// (0x0001df7b) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001eff7) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001eff7) wgtman_btn_pane_t

0x8c41,	// (0x00017d69) listrow_wgtman_pane_ParamLimits

0x8c41,	// (0x00017d69) listrow_wgtman_pane

0x8c53,	// (0x00017d7b) listrow_wgtman_pane_g1

0x8c60,	// (0x00017d88) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001effc) listrow_wgtman_pane_g

0x8c7e,	// (0x00017da6) listrow_wgtman_pane_t1

0x8c96,	// (0x00017dbe) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001f001) listrow_wgtman_pane_t

0x8cbc,	// (0x00017de4) wait_bar_pane_cp09

0xee6a,	// (0x0001df92) main_calllock_btn_pane

0xee74,	// (0x0001df9c) main_calllock_pane_g1

0x9433,	// (0x0001855b) bg_button_pane_cp17

0xee31,	// (0x0001df59) main_calllock_btn_pane_g1

0xee80,	// (0x0001dfa8) main_calllock_btn_pane_t1

0x9433,	// (0x0001855b) main_dialer3_pane

0x9433,	// (0x0001855b) main_fmrd2_pane

0xc314,	// (0x0001b43c) main_fs_bigclock_unlock_btn_pane_g1

0x8cd6,	// (0x00017dfe) main_fs_bigclock_unlock_btn_pane_t1

0x8ce4,	// (0x00017e0c) area_fmrd2_info_pane_ParamLimits

0x8ce4,	// (0x00017e0c) area_fmrd2_info_pane

0x8cf5,	// (0x00017e1d) area_fmrd2_visual_pane_ParamLimits

0x8cf5,	// (0x00017e1d) area_fmrd2_visual_pane

0x8d03,	// (0x00017e2b) fmrd2_indi_pane_ParamLimits

0x8d03,	// (0x00017e2b) fmrd2_indi_pane

0x8d10,	// (0x00017e38) area_fmrd2_visual_pane_g1

0x8d18,	// (0x00017e40) area_fmrd2_visual_pane_t1

0x8d28,	// (0x00017e50) area_fmrd2_visual_pane_t2

0x8d38,	// (0x00017e60) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001f00b) area_fmrd2_visual_pane_t

0x8d48,	// (0x00017e70) area_fmrd2_info_pane_g1

0x8d50,	// (0x00017e78) area_fmrd2_info_pane_t1

0x8d60,	// (0x00017e88) area_fmrd2_info_pane_t2

0x8d70,	// (0x00017e98) area_fmrd2_info_pane_t3

0x8d80,	// (0x00017ea8) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001f012) area_fmrd2_info_pane_t

0x8d8e,	// (0x00017eb6) fmrd2_indi_pane_t1

0x8d9e,	// (0x00017ec6) fmrd2_indi_pane_t2

0x8dae,	// (0x00017ed6) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001f01b) fmrd2_indi_pane_t

0xe0a5,	// (0x0001d1cd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0a5,	// (0x0001d1cd) list_single_fs_bigclock_indicator_pane_g5

0xe156,	// (0x0001d27e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe156,	// (0x0001d27e) list_single_fs_bigclock_indicator_pane_t5

0x8456,	// (0x0001757e) aid_cell_bcale_month_pane_ParamLimits

0x8456,	// (0x0001757e) aid_cell_bcale_month_pane

0x8474,	// (0x0001759c) bcale_month_pane_ParamLimits

0x8474,	// (0x0001759c) bcale_month_pane

0x8498,	// (0x000175c0) bcale_preview_pane_ParamLimits

0x8498,	// (0x000175c0) bcale_preview_pane

0xec4e,	// (0x0001dd76) list_single_fs_bigclock_pane_t1_ParamLimits

0xec6d,	// (0x0001dd95) list_single_fs_bigclock_pane_t2_ParamLimits

0xec6d,	// (0x0001dd95) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001ef9d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001ef9d) list_single_fs_bigclock_pane_t

0x8cce,	// (0x00017df6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001f006) main_fs_bigclock_unlock_btn_pane_g

0x8dbe,	// (0x00017ee6) aid_dia3_key_size_ParamLimits

0x8dbe,	// (0x00017ee6) aid_dia3_key_size

0x8dcd,	// (0x00017ef5) aid_dia3_listrow_size_ParamLimits

0x8dcd,	// (0x00017ef5) aid_dia3_listrow_size

0x8de2,	// (0x00017f0a) dia3_keypad_fun_pane_ParamLimits

0x8de2,	// (0x00017f0a) dia3_keypad_fun_pane

0x8dfe,	// (0x00017f26) dia3_keypad_num_pane_ParamLimits

0x8dfe,	// (0x00017f26) dia3_keypad_num_pane

0x8e19,	// (0x00017f41) dia3_listscroll_pane_ParamLimits

0x8e19,	// (0x00017f41) dia3_listscroll_pane

0x8e2c,	// (0x00017f54) dia3_numentry_pane_ParamLimits

0x8e2c,	// (0x00017f54) dia3_numentry_pane

0xee8f,	// (0x0001dfb7) dia3_list_pane

0xee9a,	// (0x0001dfc2) scroll_pane_cp12

0x9433,	// (0x0001855b) bg_dia3_numentry_pane

0x8e40,	// (0x00017f68) dia3_numentry_pane_t1

0x8e4f,	// (0x00017f77) cell_dia3_key_num_pane

0x8e57,	// (0x00017f7f) cell_dia3_key0_fun_pane_ParamLimits

0x8e57,	// (0x00017f7f) cell_dia3_key0_fun_pane

0x8e6b,	// (0x00017f93) cell_dia3_key1_fun_pane_ParamLimits

0x8e6b,	// (0x00017f93) cell_dia3_key1_fun_pane

0x8e83,	// (0x00017fab) dia3_listrow_pane

0xddf8,	// (0x0001cf20) bg_dia3_numentry_pane_g1

0x9433,	// (0x0001855b) bg_button_pane_cp21

0xeea5,	// (0x0001dfcd) cell_dia3_key_num_pane_t1

0xeeb3,	// (0x0001dfdb) cell_dia3_key_num_pane_t2

0xeec2,	// (0x0001dfea) cell_dia3_key_num_pane_t3

0xeed1,	// (0x0001dff9) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001f022) cell_dia3_key_num_pane_t

0x9433,	// (0x0001855b) bg_button_pane_cp19

0x8e95,	// (0x00017fbd) cell_dia3_key0_fun_pane_g1

0x9433,	// (0x0001855b) bg_button_pane_cp20

0x8e9d,	// (0x00017fc5) cell_dia3_key1_fun_pane_g1

0x8ea5,	// (0x00017fcd) area_left_week_number_pane

0x8eb1,	// (0x00017fd9) area_top_day_name_pane

0x8ec4,	// (0x00017fec) frame_month_view_pane

0xeee0,	// (0x0001e008) grid_month_view_pane

0x8ed7,	// (0x00017fff) cell_top_day_name_pane_ParamLimits

0x8ed7,	// (0x00017fff) cell_top_day_name_pane

0x8f04,	// (0x0001802c) cell_area_left_week_number_pane_ParamLimits

0x8f04,	// (0x0001802c) cell_area_left_week_number_pane

0x8f18,	// (0x00018040) cell_month_view_pane_ParamLimits

0x8f18,	// (0x00018040) cell_month_view_pane

0xeeee,	// (0x0001e016) frm_month_g1

0x8f45,	// (0x0001806d) frm_month_g2

0x8f58,	// (0x00018080) frm_month_g3

0x8f6b,	// (0x00018093) frm_month_g4

0x8f7e,	// (0x000180a6) frm_month_g5

0x8f91,	// (0x000180b9) frm_month_g6

0x8fa4,	// (0x000180cc) frm_month_g7

0xeefb,	// (0x0001e023) frm_month_g8

0x8fb7,	// (0x000180df) frm_month_g9

0x8fc7,	// (0x000180ef) frm_month_g10

0x8fd7,	// (0x000180ff) frm_month_g11

0x8fe7,	// (0x0001810f) frm_month_g12

0x8ff9,	// (0x00018121) frm_month_g13

0x900b,	// (0x00018133) frm_month_g14

0x901f,	// (0x00018147) frm_month_g15

0x9033,	// (0x0001815b) frm_month_g16

0x000f,

0xff03,	// (0x0001f02b) frm_month_g

0xef08,	// (0x0001e030) cell_top_day_name_pane_t1

0x9047,	// (0x0001816f) cell_area_left_week_number_pane_g1

0x9053,	// (0x0001817b) cell_area_left_week_number_pane_t1

0xc559,	// (0x0001b681) cell_month_view_pane_g1

0x9066,	// (0x0001818e) cell_month_view_pane_t1

0x9433,	// (0x0001855b) main_fps_pane

0xe373,	// (0x0001d49b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe373,	// (0x0001d49b) cmail_ddmenu_btn02_pane_cp1

0xe38f,	// (0x0001d4b7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe38f,	// (0x0001d4b7) cmail_ddmenu_btn02_pane_cp2

0x8739,	// (0x00017861) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8739,	// (0x00017861) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001ef50) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001ef50) cmail_ddmenu_btn02_pane_g

0x8757,	// (0x0001787f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8757,	// (0x0001787f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001ef55) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001ef55) cmail_ddmenu_btn02_pane_t

0x9079,	// (0x000181a1) fps_text_pane_ParamLimits

0x9079,	// (0x000181a1) fps_text_pane

0x9090,	// (0x000181b8) main_fps_pane_g1_ParamLimits

0x9090,	// (0x000181b8) main_fps_pane_g1

0x90aa,	// (0x000181d2) wait_bar_pane_cp010_ParamLimits

0x90aa,	// (0x000181d2) wait_bar_pane_cp010

0x90bb,	// (0x000181e3) fps_text_pane_t1_ParamLimits

0x90bb,	// (0x000181e3) fps_text_pane_t1

0xeab7,	// (0x0001dbdf) cam4_image_uncrop_pane_g1

0xeac0,	// (0x0001dbe8) cam4_image_uncrop_pane_g2

0x58d3,	// (0x000149fb) cam4_image_uncrop_pane_g3

0x58dc,	// (0x00014a04) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0001ea12) cam4_image_uncrop_pane_g

0x8e83,	// (0x00017fab) dia3_listrow_pane_ParamLimits

0x9433,	// (0x0001855b) main_phob2_pane

0x828a,	// (0x000173b2) cell_tport_appsw_pane_cp02_ParamLimits

0x828a,	// (0x000173b2) cell_tport_appsw_pane_cp02

0x829e,	// (0x000173c6) cell_tport_appsw_pane_cp03_ParamLimits

0x829e,	// (0x000173c6) cell_tport_appsw_pane_cp03

0x9433,	// (0x0001855b) phob2_contact_card_pane

0x9433,	// (0x0001855b) phob2_listscroll_pane

0xef1b,	// (0x0001e043) phob2_list_pane

0xef23,	// (0x0001e04b) scroll_pane_cp034

0x90d3,	// (0x000181fb) phob2_cc_data_pane_ParamLimits

0x90d3,	// (0x000181fb) phob2_cc_data_pane

0x90f2,	// (0x0001821a) phob2_cc_listscroll_pane_ParamLimits

0x90f2,	// (0x0001821a) phob2_cc_listscroll_pane

0x8c41,	// (0x00017d69) list_double_large_graphic_phob2_pane_ParamLimits

0x8c41,	// (0x00017d69) list_double_large_graphic_phob2_pane

0x9110,	// (0x00018238) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9110,	// (0x00018238) list_double_large_graphic_phob2_pane_g1

0x9126,	// (0x0001824e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9126,	// (0x0001824e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001f04c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001f04c) list_double_large_graphic_phob2_pane_g

0x9132,	// (0x0001825a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9132,	// (0x0001825a) list_double_large_graphic_phob2_pane_t1

0x9148,	// (0x00018270) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9148,	// (0x00018270) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001f051) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001f051) list_double_large_graphic_phob2_pane_t

0x9433,	// (0x0001855b) list_highlight_pane_cp024

0x915d,	// (0x00018285) phob2_cc_button_pane

0x9165,	// (0x0001828d) phob2_cc_data_pane_g1_ParamLimits

0x9165,	// (0x0001828d) phob2_cc_data_pane_g1

0x917a,	// (0x000182a2) phob2_cc_data_pane_g2_ParamLimits

0x917a,	// (0x000182a2) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001f056) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001f056) phob2_cc_data_pane_g

0x918a,	// (0x000182b2) phob2_cc_data_pane_t1_ParamLimits

0x918a,	// (0x000182b2) phob2_cc_data_pane_t1

0x91a2,	// (0x000182ca) phob2_cc_data_pane_t2_ParamLimits

0x91a2,	// (0x000182ca) phob2_cc_data_pane_t2

0x91ba,	// (0x000182e2) phob2_cc_data_pane_t3_ParamLimits

0x91ba,	// (0x000182e2) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001f05b) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001f05b) phob2_cc_data_pane_t

0xef2b,	// (0x0001e053) phob2_cc_list_pane_ParamLimits

0xef2b,	// (0x0001e053) phob2_cc_list_pane

0xd4cd,	// (0x0001c5f5) scroll_pane_cp035_ParamLimits

0xd4cd,	// (0x0001c5f5) scroll_pane_cp035

0x94a3,	// (0x000185cb) bg_button_pane_cp033

0xef37,	// (0x0001e05f) phob2_cc_button_pane_g1

0xef43,	// (0x0001e06b) phob2_cc_button_pane_t1

0xef58,	// (0x0001e080) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001f062) phob2_cc_button_pane_t

0x91d2,	// (0x000182fa) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x91d2,	// (0x000182fa) list_double_large_graphic_phob2_cc_pane

0x9204,	// (0x0001832c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9204,	// (0x0001832c) list_double_large_graphic_phob2_cc_pane_g1

0xef6a,	// (0x0001e092) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xef6a,	// (0x0001e092) list_double_large_graphic_phob2_cc_pane_g2

0x9210,	// (0x00018338) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9210,	// (0x00018338) list_double_large_graphic_phob2_cc_pane_g3

0x921c,	// (0x00018344) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x921c,	// (0x00018344) list_double_large_graphic_phob2_cc_pane_g4

0x9228,	// (0x00018350) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9228,	// (0x00018350) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001f067) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001f067) list_double_large_graphic_phob2_cc_pane_g

0x9234,	// (0x0001835c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9234,	// (0x0001835c) list_double_large_graphic_phob2_cc_pane_t1

0x925d,	// (0x00018385) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x925d,	// (0x00018385) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001f072) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001f072) list_double_large_graphic_phob2_cc_pane_t

0xef76,	// (0x0001e09e) list_highlight_pane_cp025_ParamLimits

0xef76,	// (0x0001e09e) list_highlight_pane_cp025

0x94a3,	// (0x000185cb) bg_button_pane_cp033_ParamLimits

0xef37,	// (0x0001e05f) phob2_cc_button_pane_g1_ParamLimits

0xef43,	// (0x0001e06b) phob2_cc_button_pane_t1_ParamLimits

0xef58,	// (0x0001e080) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001f062) phob2_cc_button_pane_t_ParamLimits

0x046a,	// (0x0000f592) popup_wgtman_window

0xd27e,	// (0x0001c3a6) scroll_pane_cp038

0x8bba,	// (0x00017ce2) wgtman_btn_pane_cp_01_ParamLimits

0x8bba,	// (0x00017ce2) wgtman_btn_pane_cp_01

0xef84,	// (0x0001e0ac) wgtman_content_pane

0xef8d,	// (0x0001e0b5) wgtman_heading_pane

0x9433,	// (0x0001855b) bg_heading_pane_cp02

0xef96,	// (0x0001e0be) wgtman_heading_pane_g1

0xef9e,	// (0x0001e0c6) wgtman_heading_pane_t1

0xefac,	// (0x0001e0d4) scroll_pane_cp036

0xefb4,	// (0x0001e0dc) wgtman_list_pane

0xeac9,	// (0x0001dbf1) wgtman_list_pane_t1_ParamLimits

0xeac9,	// (0x0001dbf1) wgtman_list_pane_t1

0xcfcc,	// (0x0001c0f4) cam4_grid_pane

0x6680,	// (0x000157a8) bg_button_pane_cp015_ParamLimits

0x6694,	// (0x000157bc) bg_button_pane_cp016_ParamLimits

0x66a7,	// (0x000157cf) bg_button_pane_cp017_ParamLimits

0x66ff,	// (0x00015827) popup_vitu2_query_window_g3_ParamLimits

0x66ff,	// (0x00015827) popup_vitu2_query_window_g3

0x67bc,	// (0x000158e4) popup_vitu2_query_window_t6_ParamLimits

0x67bc,	// (0x000158e4) popup_vitu2_query_window_t6

0x67e7,	// (0x0001590f) popup_vitu2_query_window_t7_ParamLimits

0x67e7,	// (0x0001590f) popup_vitu2_query_window_t7

0xeab7,	// (0x0001dbdf) cam4_grid_pane_g1

0xeac0,	// (0x0001dbe8) cam4_grid_pane_g2

0xefbc,	// (0x0001e0e4) cam4_grid_pane_g3

0xefc5,	// (0x0001e0ed) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001f077) cam4_grid_pane_g

0x1390,	// (0x000104b8) aid_placing_vt_slider_lsc_ParamLimits

0x168d,	// (0x000107b5) vidtel_button_pane_ParamLimits

0x168d,	// (0x000107b5) vidtel_button_pane

0x9433,	// (0x0001855b) bg_button_pane_cp034

0xefd0,	// (0x0001e0f8) vidtel_button_pane_g1

0xefd8,	// (0x0001e100) vidtel_button_pane_t1

0xd3ca,	// (0x0001c4f2) aid_size_vtel_slider_touch

0xd4cd,	// (0x0001c5f5) scroll_pane_cp039

0x758a,	// (0x000166b2) ncim_query_button_pane_cp01_ParamLimits

0x75a9,	// (0x000166d1) ncimui_query_pane_g1_ParamLimits

0x94a3,	// (0x000185cb) input_focus_pane_cp012_ParamLimits

0xde3e,	// (0x0001cf66) ncim_query_entry_pane_t1_ParamLimits

0xd4cd,	// (0x0001c5f5) scroll_pane_cp039_ParamLimits

0xa7fd,	// (0x00019925) navi_pane_bcale_mc_g1

0xa805,	// (0x0001992d) navi_pane_bcale_mc_t1

0xe3c3,	// (0x0001d4eb) main_sp_fs_email_pane_g1

0xe3cf,	// (0x0001d4f7) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001ee0d) main_sp_fs_email_pane_g

0xe8ac,	// (0x0001d9d4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8ac,	// (0x0001d9d4) list_single_cale_mrui_row_pane_g3

0x8777,	// (0x0001789f) list_single_recal_day_pane_g5_event_pane

0xea8b,	// (0x0001dbb3) list_single_recal_day_pane_g7

0xefee,	// (0x0001e116) list_recal_day_event_pane_cp01

0xeff7,	// (0x0001e11f) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x0001e127) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x0001e12f) list_recal_vselct_pane_cp01

0xd424,	// (0x0001c54c) list_recal_day_event_pane_cp01_g1

0xf011,	// (0x0001e139) list_recal_day_event_pane_cp01_t1

0xea93,	// (0x0001dbbb) list_single_recal_day_pane_t1_ParamLimits

0xeaa5,	// (0x0001dbcd) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001ef65) list_single_recal_day_pane_t_ParamLimits

0x9b1f,	// (0x00018c47) bg_notes_pane_ParamLimits

0x9bd6,	// (0x00018cfe) list_notes_pane_ParamLimits

0x07ab,	// (0x0000f8d3) scroll_pane_cp06_ParamLimits

0x9c12,	// (0x00018d3a) main_notes_pane_ParamLimits

0x94a3,	// (0x000185cb) main_welc_pane

0x929d,	// (0x000183c5) main_welc_body_pane_ParamLimits

0x929d,	// (0x000183c5) main_welc_body_pane

0x92ba,	// (0x000183e2) main_welc_opti_pane_ParamLimits

0x92ba,	// (0x000183e2) main_welc_opti_pane

0x930e,	// (0x00018436) main_welc_pane_t1_ParamLimits

0x930e,	// (0x00018436) main_welc_pane_t1

0x9388,	// (0x000184b0) main_welc_body_row_pane_ParamLimits

0x9388,	// (0x000184b0) main_welc_body_row_pane

0xd243,	// (0x0001c36b) main_welc_opti_row_pane_ParamLimits

0xd243,	// (0x0001c36b) main_welc_opti_row_pane

0xf01f,	// (0x0001e147) main_welc_opti_row_pane_g1

0x939d,	// (0x000184c5) main_welc_opti_row_pane_t1

0xf027,	// (0x0001e14f) main_welc_body_row_pane_t1

0xed2e,	// (0x0001de56) popup_notif_wgt_heading_pane

0xed48,	// (0x0001de70) aid_size_list_notif_wgt_del_ParamLimits

0xed55,	// (0x0001de7d) list_notif_wgt_row_pane_g1_ParamLimits

0xed61,	// (0x0001de89) list_notif_wgt_row_pane_g2_ParamLimits

0xed70,	// (0x0001de98) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001efcc) list_notif_wgt_row_pane_g_ParamLimits

0xed7d,	// (0x0001dea5) list_notif_wgt_row_pane_t1_ParamLimits

0xed93,	// (0x0001debb) list_notif_wgt_row_pane_t2_ParamLimits

0xeda5,	// (0x0001decd) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001efd3) list_notif_wgt_row_pane_t_ParamLimits

0x8c53,	// (0x00017d7b) listrow_wgtman_pane_g1_ParamLimits

0x8c60,	// (0x00017d88) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001effc) listrow_wgtman_pane_g_ParamLimits

0x8c7e,	// (0x00017da6) listrow_wgtman_pane_t1_ParamLimits

0x8c96,	// (0x00017dbe) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001f001) listrow_wgtman_pane_t_ParamLimits

0x8cbc,	// (0x00017de4) wait_bar_pane_cp09_ParamLimits

0x9433,	// (0x0001855b) bg_popup_heading_pane_cp02

0xf036,	// (0x0001e15e) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0001e166) popup_notif_wgt_heading_pane_t1

0x9433,	// (0x0001855b) main_vids_pane

0x9433,	// (0x0001855b) vids_listscroll_pane

0x93ac,	// (0x000184d4) scroll_pane_cp040

0x9433,	// (0x0001855b) vids_list_pane

0x93b7,	// (0x000184df) vids_list_double_pane_ParamLimits

0x93b7,	// (0x000184df) vids_list_double_pane

0x93c8,	// (0x000184f0) vids_list_double_pane_g1

0x93d1,	// (0x000184f9) vids_list_double_pane_t1

0x93e1,	// (0x00018509) vids_list_double_pane_t2

0x0001,

0xff66,	// (0x0001f08e) vids_list_double_pane_t

0x94a3,	// (0x000185cb) main_ncimui_pane_ParamLimits

0x73c0,	// (0x000164e8) main_ncimui_pane_g1_ParamLimits

0x73cc,	// (0x000164f4) main_ncimui_pane_g2_ParamLimits

0x73cc,	// (0x000164f4) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0001ed0e) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0001ed0e) main_ncimui_pane_g

0x92d5,	// (0x000183fd) main_welc_pane_g1_ParamLimits

0x92d5,	// (0x000183fd) main_welc_pane_g1

0x92ea,	// (0x00018412) main_welc_pane_g2_ParamLimits

0x92ea,	// (0x00018412) main_welc_pane_g2

0x0002,

0xff58,	// (0x0001f080) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001f080) main_welc_pane_g

0x9b1f,	// (0x00018c47) listscroll_mce_pane_ParamLimits

0xa952,	// (0x00019a7a) wait_bar_pane_cp10

0xbded,	// (0x0001af15) main_cale_day_pane_ParamLimits

0xbded,	// (0x0001af15) main_cale_week_pane_ParamLimits

0x9b1f,	// (0x00018c47) main_messa_pane_ParamLimits

0x4b71,	// (0x00013c99) main_clock2_btn_pane_ParamLimits

0x4b71,	// (0x00013c99) main_clock2_btn_pane

0xc755,	// (0x0001b87d) main_clock2_btn_pane_cp01_ParamLimits

0xc755,	// (0x0001b87d) main_clock2_btn_pane_cp01

0xe838,	// (0x0001d960) list_cale_mrui_pane_ParamLimits

0xeddb,	// (0x0001df03) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001efda) main_cf0_pane_g

0x8ea5,	// (0x00017fcd) area_left_week_number_pane_ParamLimits

0x8eb1,	// (0x00017fd9) area_top_day_name_pane_ParamLimits

0x8ec4,	// (0x00017fec) frame_month_view_pane_ParamLimits

0xeee0,	// (0x0001e008) grid_month_view_pane_ParamLimits

0xeeee,	// (0x0001e016) frm_month_g1_ParamLimits

0x8f45,	// (0x0001806d) frm_month_g2_ParamLimits

0x8f58,	// (0x00018080) frm_month_g3_ParamLimits

0x8f6b,	// (0x00018093) frm_month_g4_ParamLimits

0x8f7e,	// (0x000180a6) frm_month_g5_ParamLimits

0x8f91,	// (0x000180b9) frm_month_g6_ParamLimits

0x8fa4,	// (0x000180cc) frm_month_g7_ParamLimits

0xeefb,	// (0x0001e023) frm_month_g8_ParamLimits

0x8fb7,	// (0x000180df) frm_month_g9_ParamLimits

0x8fc7,	// (0x000180ef) frm_month_g10_ParamLimits

0x8fd7,	// (0x000180ff) frm_month_g11_ParamLimits

0x8fe7,	// (0x0001810f) frm_month_g12_ParamLimits

0x8ff9,	// (0x00018121) frm_month_g13_ParamLimits

0x900b,	// (0x00018133) frm_month_g14_ParamLimits

0x901f,	// (0x00018147) frm_month_g15_ParamLimits

0x9033,	// (0x0001815b) frm_month_g16_ParamLimits

0xff03,	// (0x0001f02b) frm_month_g_ParamLimits

0xef08,	// (0x0001e030) cell_top_day_name_pane_t1_ParamLimits

0x9047,	// (0x0001816f) cell_area_left_week_number_pane_g1_ParamLimits

0x9053,	// (0x0001817b) cell_area_left_week_number_pane_t1_ParamLimits

0xc559,	// (0x0001b681) cell_month_view_pane_g1_ParamLimits

0x9066,	// (0x0001818e) cell_month_view_pane_t1_ParamLimits

0x9b17,	// (0x00018c3f) main_clock2_btn_pane_g1

0xf04c,	// (0x0001e174) main_clock2_btn_pane_t1

0x94a3,	// (0x000185cb) listscroll_cmail_pane_ParamLimits

0xe3c3,	// (0x0001d4eb) main_sp_fs_email_pane_g1_ParamLimits

0xe3cf,	// (0x0001d4f7) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001ee0d) main_sp_fs_email_pane_g_ParamLimits

0xe9fb,	// (0x0001db23) list_recal_day_pane_ParamLimits

0xea0c,	// (0x0001db34) mian_recal_day_pane_t1

0x7f4a,	// (0x00017072) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f4a,	// (0x00017072) list_single_dyc_row_text_pane_t4

0x7f93,	// (0x000170bb) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f93,	// (0x000170bb) list_single_dyc_row_text_pane_t5

0xe471,	// (0x0001d599) list_single_dyc_row_text_pane_t6_ParamLimits

0xe471,	// (0x0001d599) list_single_dyc_row_text_pane_t6

0x213b,	// (0x00011263) aid_mgn_list_cale_time_pane

0x94a3,	// (0x000185cb) main_gallery2_pane_ParamLimits

0xc76b,	// (0x0001b893) main_clock2_pane_cp01_t1

0xc779,	// (0x0001b8a1) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0001e8e4) main_clock2_pane_cp01_t

0x0b28,	// (0x0000fc50) cale_week_scroll_pane_g16_ParamLimits

0x0b28,	// (0x0000fc50) cale_week_scroll_pane_g16

0x9e78,	// (0x00018fa0) vorec_slider_pane

0xefd8,	// (0x0001e100) vidtel_button_pane_t1_ParamLimits

0x87dd,	// (0x00017905) main_fs_bigclock_clock_pane_g1_ParamLimits

0x87dd,	// (0x00017905) main_fs_bigclock_clock_pane_g2_ParamLimits

0x87ee,	// (0x00017916) main_fs_bigclock_clock_pane_g3_ParamLimits

0x87ee,	// (0x00017916) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0001ef88) main_fs_bigclock_clock_pane_g_ParamLimits

0x8801,	// (0x00017929) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8817,	// (0x0001793f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0001ef91) main_fs_bigclock_clock_pane_t_ParamLimits

0x436f,	// (0x00013497) main_mup3_lyrics_pane_ParamLimits

0x436f,	// (0x00013497) main_mup3_lyrics_pane

0x9417,	// (0x0001853f) main_mup3_lyrics_pane_t1_ParamLimits

0x9417,	// (0x0001853f) main_mup3_lyrics_pane_t1

0xcc61,	// (0x0001bd89) aid_main_mp4_pane_t1_area

0xcc6b,	// (0x0001bd93) aid_main_mp4_pane_t2_area

0xcd17,	// (0x0001be3f) main_mp4_pane_g7_ParamLimits

0xcd17,	// (0x0001be3f) main_mp4_pane_g7

0xcd23,	// (0x0001be4b) main_mp4_pane_g8_ParamLimits

0xcd23,	// (0x0001be4b) main_mp4_pane_g8

0x56a2,	// (0x000147ca) aid_call6_pane_g1_size

0x91ed,	// (0x00018315) list_double_large_graphic_phob2_other_pane_ParamLimits

0x91ed,	// (0x00018315) list_double_large_graphic_phob2_other_pane

0xa72e,	// (0x00019856) list_double_large_graphic_phob2_other_pane_g1

0x9433,	// (0x0001855b) list_highlight_pane_cp026

0x94a3,	// (0x000185cb) main_welc_pane_ParamLimits

0x7c4d,	// (0x00016d75) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7c4d,	// (0x00016d75) main_sp_fs_ctrlbar_pane_g3

0x7c67,	// (0x00016d8f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7c67,	// (0x00016d8f) main_sp_fs_ctrlbar_pane_g4

0x7c9b,	// (0x00016dc3) toolbar2_fixed_button_pane_cp01

0x7ca6,	// (0x00016dce) toolbar2_fixed_button_pane_cp02

0x7cb3,	// (0x00016ddb) toolbar2_fixed_button_pane_cp03

0x9286,	// (0x000183ae) list_welc_entry_pane_ParamLimits

0x9286,	// (0x000183ae) list_welc_entry_pane

0x92ff,	// (0x00018427) main_welc_pane_g3_ParamLimits

0x92ff,	// (0x00018427) main_welc_pane_g3

0x932c,	// (0x00018454) main_welc_pane_t2_ParamLimits

0x932c,	// (0x00018454) main_welc_pane_t2

0x9346,	// (0x0001846e) main_welc_pane_t3_ParamLimits

0x9346,	// (0x0001846e) main_welc_pane_t3

0x0002,

0xff5f,	// (0x0001f087) main_welc_pane_t_ParamLimits

0xff5f,	// (0x0001f087) main_welc_pane_t

0x935d,	// (0x00018485) welc_button_pane_ParamLimits

0x935d,	// (0x00018485) welc_button_pane

0x9374,	// (0x0001849c) welc_service_logo_pane_ParamLimits

0x9374,	// (0x0001849c) welc_service_logo_pane

0xf05a,	// (0x0001e182) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0001e182) list_single_welc_entry_pane

0xf06b,	// (0x0001e193) list_single_welc_entry_pane_g1

0xf073,	// (0x0001e19b) list_single_welc_entry_pane_t1

0xf081,	// (0x0001e1a9) list_single_welc_entry_pane_t2

0x0001,

0xff6b,	// (0x0001f093) list_single_welc_entry_pane_t

0x9433,	// (0x0001855b) bg_button_pane_cp035

0xf08f,	// (0x0001e1b7) welc_button_pane_t1

0xf09d,	// (0x0001e1c5) welc_service_logo_pane_g1

0xf0a6,	// (0x0001e1ce) welc_service_logo_pane_g2

0x0001,

0xff70,	// (0x0001f098) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
