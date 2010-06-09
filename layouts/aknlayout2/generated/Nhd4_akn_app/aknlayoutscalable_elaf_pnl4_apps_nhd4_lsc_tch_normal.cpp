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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000edaf };

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
0x03cc,	// (0x0000f17b) Screen

0x03d8,	// (0x0000f187) application_window

0x0414,	// (0x0000f1c3) area_bottom_pane_ParamLimits

0x0414,	// (0x0000f1c3) area_bottom_pane

0x044d,	// (0x0000f1fc) area_top_pane_ParamLimits

0x044d,	// (0x0000f1fc) area_top_pane

0x9485,	// (0x00018234) call_video_uplink_pane_ParamLimits

0x9485,	// (0x00018234) call_video_uplink_pane

0x04db,	// (0x0000f28a) main_pane_ParamLimits

0x04db,	// (0x0000f28a) main_pane

0xbe74,	// (0x0001ac23) context_pane

0x3840,	// (0x000125ef) navi_pane

0x3872,	// (0x00012621) popup_cale_events_window_ParamLimits

0x3872,	// (0x00012621) popup_cale_events_window

0xbe87,	// (0x0001ac36) popup_mup_playback_window

0x388a,	// (0x00012639) signal_pane

0x9c12,	// (0x000189c1) main_browser_pane

0x9e8b,	// (0x00018c3a) main_burst_pane

0x35a8,	// (0x00012357) main_calc_pane

0xbe06,	// (0x0001abb5) main_cale_day_pane

0x0aeb,	// (0x0000f89a) main_cale_month_pane

0xbe06,	// (0x0001abb5) main_cale_week_pane

0x9e8b,	// (0x00018c3a) main_call_pane

0x98c4,	// (0x00018673) main_call_poc_pane

0x9e8b,	// (0x00018c3a) main_camera_pane

0x9e8b,	// (0x00018c3a) main_chi_dic_pane

0xa715,	// (0x000194c4) main_clock_pane

0x98c4,	// (0x00018673) main_fmradio_pane

0x9e8b,	// (0x00018c3a) main_graph_messa_pane

0x98c4,	// (0x00018673) main_help_pane

0x9c12,	// (0x000189c1) main_im_pane

0x9b1f,	// (0x000188ce) main_image_pane_ParamLimits

0x9b1f,	// (0x000188ce) main_image_pane

0x98c4,	// (0x00018673) main_location2_pane

0x9e8b,	// (0x00018c3a) main_location_pane

0x9b1f,	// (0x000188ce) main_messa_pane

0x98c4,	// (0x00018673) main_mp2_pane

0x9e8b,	// (0x00018c3a) main_mp_pane

0x98c4,	// (0x00018673) main_msg_pane

0x98c4,	// (0x00018673) main_mup_eq_pane

0x98c4,	// (0x00018673) main_mup_pane

0x9c12,	// (0x000189c1) main_notes_pane

0x98c4,	// (0x00018673) main_pec_pane

0x98c4,	// (0x00018673) main_phob_pane

0x98c4,	// (0x00018673) main_pinb_pane

0x98c4,	// (0x00018673) main_postcard_pane

0x98c4,	// (0x00018673) main_qdial_pane

0x9e8b,	// (0x00018c3a) main_skin_pane

0x98c4,	// (0x00018673) main_smil2_pane

0x9e8b,	// (0x00018c3a) main_smil_pane

0x9e8b,	// (0x00018c3a) main_video_pane

0x9e8b,	// (0x00018c3a) main_video_tele_pane

0x9b1f,	// (0x000188ce) main_viewer_pane_ParamLimits

0x9b1f,	// (0x000188ce) main_viewer_pane

0x9e8b,	// (0x00018c3a) main_vorec_pane

0x35fc,	// (0x000123ab) popup_blid_sat_info_window_ParamLimits

0x35fc,	// (0x000123ab) popup_blid_sat_info_window

0x3654,	// (0x00012403) popup_dyc_status_message_window_ParamLimits

0x3654,	// (0x00012403) popup_dyc_status_message_window

0x366c,	// (0x0001241b) popup_grid_large_graphic_window_ParamLimits

0x366c,	// (0x0001241b) popup_grid_large_graphic_window

0x371c,	// (0x000124cb) popup_loc_request_window_ParamLimits

0x371c,	// (0x000124cb) popup_loc_request_window

0x3818,	// (0x000125c7) popup_wml_address_window_ParamLimits

0x3818,	// (0x000125c7) popup_wml_address_window

0x33e2,	// (0x00012191) call_muted_g1

0x3096,	// (0x00011e45) popup_call_audio_conf_window_ParamLimits

0x3096,	// (0x00011e45) popup_call_audio_conf_window

0x33f6,	// (0x000121a5) popup_call_audio_first_window_ParamLimits

0x33f6,	// (0x000121a5) popup_call_audio_first_window

0x346c,	// (0x0001221b) popup_call_audio_in_window_ParamLimits

0x346c,	// (0x0001221b) popup_call_audio_in_window

0x34a8,	// (0x00012257) popup_call_audio_out_window_ParamLimits

0x34a8,	// (0x00012257) popup_call_audio_out_window

0x34e2,	// (0x00012291) popup_call_audio_second_window_ParamLimits

0x34e2,	// (0x00012291) popup_call_audio_second_window

0x3538,	// (0x000122e7) popup_call_audio_wait_window_ParamLimits

0x3538,	// (0x000122e7) popup_call_audio_wait_window

0x356d,	// (0x0001231c) popup_number_entry_window_ParamLimits

0x356d,	// (0x0001231c) popup_number_entry_window

0x94b1,	// (0x00018260) bg_popup_call_pane_cp05_ParamLimits

0x94b1,	// (0x00018260) bg_popup_call_pane_cp05

0x94d1,	// (0x00018280) popup_number_entry_window_t1

0x94e4,	// (0x00018293) popup_number_entry_window_t2

0x94f6,	// (0x000182a5) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001de79) popup_number_entry_window_t

0x9508,	// (0x000182b7) text_title_cp2

0x951b,	// (0x000182ca) bg_popup_call_pane_cp_ParamLimits

0x951b,	// (0x000182ca) bg_popup_call_pane_cp

0x9529,	// (0x000182d8) call_thumbnail_pane

0x9531,	// (0x000182e0) popup_call_audio_in_window_g1_ParamLimits

0x9531,	// (0x000182e0) popup_call_audio_in_window_g1

0x953d,	// (0x000182ec) popup_call_audio_in_window_g2_ParamLimits

0x953d,	// (0x000182ec) popup_call_audio_in_window_g2

0x9549,	// (0x000182f8) popup_call_audio_in_window_g3_ParamLimits

0x9549,	// (0x000182f8) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001de82) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001de82) popup_call_audio_in_window_g

0x9555,	// (0x00018304) popup_call_audio_in_window_t1_ParamLimits

0x9555,	// (0x00018304) popup_call_audio_in_window_t1

0x9571,	// (0x00018320) popup_call_audio_in_window_t2_ParamLimits

0x9571,	// (0x00018320) popup_call_audio_in_window_t2

0x958d,	// (0x0001833c) popup_call_audio_in_window_t3_ParamLimits

0x958d,	// (0x0001833c) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001de89) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001de89) popup_call_audio_in_window_t

0x951b,	// (0x000182ca) bg_popup_call_pane_cp01_ParamLimits

0x951b,	// (0x000182ca) bg_popup_call_pane_cp01

0x9529,	// (0x000182d8) call_thumbnail_pane_cp02

0x95a0,	// (0x0001834f) call_type_pane_cp022

0x95a8,	// (0x00018357) popup_call_audio_out_window_g1_ParamLimits

0x95a8,	// (0x00018357) popup_call_audio_out_window_g1

0x95ba,	// (0x00018369) popup_call_audio_out_window_g2_ParamLimits

0x95ba,	// (0x00018369) popup_call_audio_out_window_g2

0x95c6,	// (0x00018375) popup_call_audio_out_window_g3_ParamLimits

0x95c6,	// (0x00018375) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001de90) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001de90) popup_call_audio_out_window_g

0x95d8,	// (0x00018387) popup_call_audio_out_window_t1_ParamLimits

0x95d8,	// (0x00018387) popup_call_audio_out_window_t1

0x95f0,	// (0x0001839f) popup_call_audio_out_window_t2_ParamLimits

0x95f0,	// (0x0001839f) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001de97) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001de97) popup_call_audio_out_window_t

0x9605,	// (0x000183b4) bg_popup_call_pane_ParamLimits

0x9605,	// (0x000183b4) bg_popup_call_pane

0x0698,	// (0x0000f447) call_thumbnail_pane_cp_ParamLimits

0x0698,	// (0x0000f447) call_thumbnail_pane_cp

0x9689,	// (0x00018438) call_type_pane_cp01_ParamLimits

0x9689,	// (0x00018438) call_type_pane_cp01

0x96cd,	// (0x0001847c) popup_call_audio_first_window_g1_ParamLimits

0x96cd,	// (0x0001847c) popup_call_audio_first_window_g1

0x9719,	// (0x000184c8) popup_call_audio_first_window_g2_ParamLimits

0x9719,	// (0x000184c8) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001de9c) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001de9c) popup_call_audio_first_window_g

0x975d,	// (0x0001850c) popup_call_audio_first_window_t1_ParamLimits

0x975d,	// (0x0001850c) popup_call_audio_first_window_t1

0x9809,	// (0x000185b8) popup_call_audio_first_window_t4_ParamLimits

0x9809,	// (0x000185b8) popup_call_audio_first_window_t4

0x9895,	// (0x00018644) popup_call_audio_first_window_t5_ParamLimits

0x9895,	// (0x00018644) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001dea1) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001dea1) popup_call_audio_first_window_t

0x98c4,	// (0x00018673) bg_popup_call_pane_cp02

0x98ce,	// (0x0001867d) call_type_pane_cp023

0x98d6,	// (0x00018685) popup_call_audio_wait_window_g1

0x98de,	// (0x0001868d) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001dea8) popup_call_audio_wait_window_g

0x98e6,	// (0x00018695) popup_call_audio_wait_window_t3

0x98f4,	// (0x000186a3) bg_popup_call_pane_cp03_ParamLimits

0x98f4,	// (0x000186a3) bg_popup_call_pane_cp03

0x9954,	// (0x00018703) call_thumbnail_pane_cp011_ParamLimits

0x9954,	// (0x00018703) call_thumbnail_pane_cp011

0x9960,	// (0x0001870f) call_type_pane_cp034_ParamLimits

0x9960,	// (0x0001870f) call_type_pane_cp034

0x999c,	// (0x0001874b) popup_call_audio_second_window_g1_ParamLimits

0x999c,	// (0x0001874b) popup_call_audio_second_window_g1

0x99d8,	// (0x00018787) popup_call_audio_second_window_g2_ParamLimits

0x99d8,	// (0x00018787) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001dead) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001dead) popup_call_audio_second_window_g

0x9a14,	// (0x000187c3) popup_call_audio_second_window_t1_ParamLimits

0x9a14,	// (0x000187c3) popup_call_audio_second_window_t1

0x9a95,	// (0x00018844) popup_call_audio_second_window_t2_ParamLimits

0x9a95,	// (0x00018844) popup_call_audio_second_window_t2

0x9acb,	// (0x0001887a) popup_call_audio_second_window_t3_ParamLimits

0x9acb,	// (0x0001887a) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001deb2) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001deb2) popup_call_audio_second_window_t

0x98c4,	// (0x00018673) bg_popup_call_pane_cp04

0x9b01,	// (0x000188b0) list_conf_pane

0x9b09,	// (0x000188b8) popup_call_audio_conf_window_t1

0x9b17,	// (0x000188c6) call_thumbnail_pane_g1

0x9b1f,	// (0x000188ce) bg_pinb_pane_ParamLimits

0x9b1f,	// (0x000188ce) bg_pinb_pane

0x9b2d,	// (0x000188dc) find_pinb_pane

0x9b36,	// (0x000188e5) listscroll_pinb_pane_ParamLimits

0x9b36,	// (0x000188e5) listscroll_pinb_pane

0x9b45,	// (0x000188f4) pinb_bg_pane_g1

0x06bc,	// (0x0000f46b) pinb_bg_pane_g2

0x06c8,	// (0x0000f477) pinb_bg_pane_g3

0x06d4,	// (0x0000f483) pinb_bg_pane_g4

0x06e0,	// (0x0000f48f) pinb_bg_pane_g5

0x06ec,	// (0x0000f49b) pinb_bg_pane_g6

0x06f7,	// (0x0000f4a6) pinb_bg_pane_g7

0x0702,	// (0x0000f4b1) pinb_bg_pane_g8

0x070d,	// (0x0000f4bc) pinb_bg_pane_g9

0x0717,	// (0x0000f4c6) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001deb9) pinb_bg_pane_g

0x0734,	// (0x0000f4e3) grid_pinb_pane

0x073d,	// (0x0000f4ec) list_pinb_pane

0x0746,	// (0x0000f4f5) scroll_pane_cp01_ParamLimits

0x0746,	// (0x0000f4f5) scroll_pane_cp01

0x9b4f,	// (0x000188fe) find_pinb_pane_g1_ParamLimits

0x9b4f,	// (0x000188fe) find_pinb_pane_g1

0x9b67,	// (0x00018916) find_pinb_pane_t1

0x9b79,	// (0x00018928) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001ded3) find_pinb_pane_t

0x9b8e,	// (0x0001893d) input_focus_pane_cp01_ParamLimits

0x9b8e,	// (0x0001893d) input_focus_pane_cp01

0x0758,	// (0x0000f507) cell_pinb_pane_ParamLimits

0x0758,	// (0x0000f507) cell_pinb_pane

0x0783,	// (0x0000f532) cell_pinb_pane_g1_ParamLimits

0x0783,	// (0x0000f532) cell_pinb_pane_g1

0x9b9a,	// (0x00018949) cell_pinb_pane_g2_ParamLimits

0x9b9a,	// (0x00018949) cell_pinb_pane_g2

0x9ba6,	// (0x00018955) cell_pinb_pane_g3_ParamLimits

0x9ba6,	// (0x00018955) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001ded8) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001ded8) cell_pinb_pane_g

0x98c4,	// (0x00018673) grid_highlight_pane_cp01

0x0796,	// (0x0000f545) list_pinb_item_pane_ParamLimits

0x0796,	// (0x0000f545) list_pinb_item_pane

0x98c4,	// (0x00018673) list_highlight_pane_cp02

0x07a9,	// (0x0000f558) list_pinb_item_pane_g1_ParamLimits

0x07a9,	// (0x0000f558) list_pinb_item_pane_g1

0x07b6,	// (0x0000f565) list_pinb_item_pane_g2_ParamLimits

0x07b6,	// (0x0000f565) list_pinb_item_pane_g2

0x07c2,	// (0x0000f571) list_pinb_item_pane_g3_ParamLimits

0x07c2,	// (0x0000f571) list_pinb_item_pane_g3

0x07d3,	// (0x0000f582) list_pinb_item_pane_g4_ParamLimits

0x07d3,	// (0x0000f582) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001dedf) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001dedf) list_pinb_item_pane_g

0x07df,	// (0x0000f58e) list_pinb_item_pane_t1_ParamLimits

0x07df,	// (0x0000f58e) list_pinb_item_pane_t1

0x0814,	// (0x0000f5c3) calc_display_pane

0x083c,	// (0x0000f5eb) calc_paper_pane

0x085f,	// (0x0000f60e) grid_calc_pane

0x98c4,	// (0x00018673) bg_list_pane_cp01

0x088d,	// (0x0000f63c) clock_g1

0x0895,	// (0x0000f644) clock_g2

0x0001,

0xf139,	// (0x0001dee8) clock_g

0x089d,	// (0x0000f64c) clock_t1_ParamLimits

0x089d,	// (0x0000f64c) clock_t1

0x08b2,	// (0x0000f661) clock_t2_ParamLimits

0x08b2,	// (0x0000f661) clock_t2

0x08c4,	// (0x0000f673) clock_t3_ParamLimits

0x08c4,	// (0x0000f673) clock_t3

0x08d6,	// (0x0000f685) clock_t4_ParamLimits

0x08d6,	// (0x0000f685) clock_t4

0x08e8,	// (0x0000f697) clock_t5_ParamLimits

0x08e8,	// (0x0000f697) clock_t5

0x08fd,	// (0x0000f6ac) clock_t6_ParamLimits

0x08fd,	// (0x0000f6ac) clock_t6

0x090f,	// (0x0000f6be) clock_t7_ParamLimits

0x090f,	// (0x0000f6be) clock_t7

0x0921,	// (0x0000f6d0) clock_t8_ParamLimits

0x0921,	// (0x0000f6d0) clock_t8

0x0935,	// (0x0000f6e4) clock_t9_ParamLimits

0x0935,	// (0x0000f6e4) clock_t9

0x0008,

0xf13e,	// (0x0001deed) clock_t_ParamLimits

0xf13e,	// (0x0001deed) clock_t

0x9bba,	// (0x00018969) popup_clock_analogue_window_cp02

0x9bba,	// (0x00018969) popup_clock_digital_window_cp01

0x9bc2,	// (0x00018971) listscroll_help_pane

0x98c4,	// (0x00018673) phob_pre_status_pane

0x9bcc,	// (0x0001897b) grid_qdial_pane

0x9b1f,	// (0x000188ce) listscroll_mce_pane

0x9b1f,	// (0x000188ce) bg_notes_pane

0x9bd6,	// (0x00018985) list_notes_pane

0x0949,	// (0x0000f6f8) scroll_pane_cp06

0x9be4,	// (0x00018993) bg_calc_paper_pane

0x9bf8,	// (0x000189a7) list_calc_pane

0x9c12,	// (0x000189c1) bg_calc_display_pane

0x095d,	// (0x0000f70c) calc_display_pane_t1

0x096f,	// (0x0000f71e) calc_display_pane_t2

0x9c1e,	// (0x000189cd) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001df00) calc_display_pane_t

0x0981,	// (0x0000f730) cell_calc_pane_ParamLimits

0x0981,	// (0x0000f730) cell_calc_pane

0x9c30,	// (0x000189df) bg_calc_paper_pane_g1

0x9c3c,	// (0x000189eb) bg_calc_paper_pane_g2

0x9c48,	// (0x000189f7) bg_calc_paper_pane_g3

0x9c54,	// (0x00018a03) bg_calc_paper_pane_g4

0x9c60,	// (0x00018a0f) bg_calc_paper_pane_g5

0x09b8,	// (0x0000f767) bg_calc_paper_pane_g6

0x09c7,	// (0x0000f776) bg_calc_paper_pane_g7

0x09d6,	// (0x0000f785) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001df07) bg_calc_paper_pane_g

0x09e9,	// (0x0000f798) calc_bg_paper_pane_g9

0x09fc,	// (0x0000f7ab) list_calc_item_pane_ParamLimits

0x09fc,	// (0x0000f7ab) list_calc_item_pane

0x9c6c,	// (0x00018a1b) list_calc_item_pane_g1

0x9c79,	// (0x00018a28) list_calc_item_pane_t1_ParamLimits

0x9c79,	// (0x00018a28) list_calc_item_pane_t1

0x0a15,	// (0x0000f7c4) list_calc_item_pane_t2_ParamLimits

0x0a15,	// (0x0000f7c4) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001df18) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001df18) list_calc_item_pane_t

0x9c8b,	// (0x00018a3a) cell_calc_pane_g1

0x9c95,	// (0x00018a44) grid_highlight_pane_cp02

0x9cb7,	// (0x00018a66) bg_calc_display_pane_g1

0x9cc0,	// (0x00018a6f) bg_calc_display_pane_g2

0x9cca,	// (0x00018a79) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001df22) bg_calc_display_pane_g

0x0a47,	// (0x0000f7f6) cell_qdial_pane_ParamLimits

0x0a47,	// (0x0000f7f6) cell_qdial_pane

0x0a5b,	// (0x0000f80a) cell_qdial_pane_g1_ParamLimits

0x0a5b,	// (0x0000f80a) cell_qdial_pane_g1

0x0a71,	// (0x0000f820) cell_qdial_pane_g2_ParamLimits

0x0a71,	// (0x0000f820) cell_qdial_pane_g2

0x9cd3,	// (0x00018a82) cell_qdial_pane_g3_ParamLimits

0x9cd3,	// (0x00018a82) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001df29) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001df29) cell_qdial_pane_g

0x0a97,	// (0x0000f846) cell_qdial_pane_t1_ParamLimits

0x0a97,	// (0x0000f846) cell_qdial_pane_t1

0x0aaf,	// (0x0000f85e) cell_qdial_pane_t2_ParamLimits

0x0aaf,	// (0x0000f85e) cell_qdial_pane_t2

0x0ac2,	// (0x0000f871) cell_qdial_pane_t3_ParamLimits

0x0ac2,	// (0x0000f871) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001df32) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001df32) cell_qdial_pane_t

0x98c4,	// (0x00018673) grid_highlight_pane_cp04

0x9cdf,	// (0x00018a8e) thumbnail_qdial_pane_ParamLimits

0x9cdf,	// (0x00018a8e) thumbnail_qdial_pane

0x9d3b,	// (0x00018aea) list_help_pane

0x9d44,	// (0x00018af3) scroll_pane_cp02

0x9d4d,	// (0x00018afc) help_list_pane_t1_ParamLimits

0x9d4d,	// (0x00018afc) help_list_pane_t1

0x9d6b,	// (0x00018b1a) bg_notes_pane_g2

0x9d73,	// (0x00018b22) bg_notes_pane_g3

0x9d7b,	// (0x00018b2a) notes_bg_pane_g1

0x9d83,	// (0x00018b32) notes_bg_pane_g4

0x9d8b,	// (0x00018b3a) notes_bg_pane_g5

0x9d93,	// (0x00018b42) notes_bg_pane_g6

0x9d9b,	// (0x00018b4a) notes_bg_pane_g7

0x9da3,	// (0x00018b52) notes_bg_pane_g8

0x9dab,	// (0x00018b5a) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001df50) notes_bg_pane_g

0x0ad5,	// (0x0000f884) list_notes_text_pane_ParamLimits

0x0ad5,	// (0x0000f884) list_notes_text_pane

0x9db3,	// (0x00018b62) list_notes_text_pane_g1

0x9dbc,	// (0x00018b6b) list_notes_text_pane_t1

0x0aeb,	// (0x0000f89a) listscroll_cale_week_pane

0x0b17,	// (0x0000f8c6) bg_cale_heading_pane

0x9de4,	// (0x00018b93) bg_cale_pane_cp01

0x0b2f,	// (0x0000f8de) cale_week_corner_pane

0x0b4e,	// (0x0000f8fd) cale_week_day_heading_pane

0x0b6b,	// (0x0000f91a) cale_week_scroll_pane_g1

0x0b7e,	// (0x0000f92d) cale_week_scroll_pane_g2

0x0b96,	// (0x0000f945) cale_week_scroll_pane_g3

0x0bae,	// (0x0000f95d) cale_week_scroll_pane_g4

0x0bc6,	// (0x0000f975) cale_week_scroll_pane_g5

0x0be6,	// (0x0000f995) cale_week_scroll_pane_g6

0x0c06,	// (0x0000f9b5) cale_week_scroll_pane_g7

0x0c26,	// (0x0000f9d5) cale_week_scroll_pane_g8

0x0c4a,	// (0x0000f9f9) cale_week_scroll_pane_g9

0x0c62,	// (0x0000fa11) cale_week_scroll_pane_g10

0x0c7a,	// (0x0000fa29) cale_week_scroll_pane_g11

0x0c92,	// (0x0000fa41) cale_week_scroll_pane_g12

0x0caa,	// (0x0000fa59) cale_week_scroll_pane_g13

0x0caa,	// (0x0000fa59) cale_week_scroll_pane_g14

0x0caa,	// (0x0000fa59) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001df5f) cale_week_scroll_pane_g

0x0ce6,	// (0x0000fa95) cale_week_time_pane

0x0d0a,	// (0x0000fab9) grid_cale_week_pane

0x9e13,	// (0x00018bc2) scroll_pane_cp08

0x0d30,	// (0x0000fadf) cell_cale_week_pane_ParamLimits

0x0d30,	// (0x0000fadf) cell_cale_week_pane

0x0dbe,	// (0x0000fb6d) cale_week_day_heading_pane_t1

0x0de8,	// (0x0000fb97) cale_week_day_heading_pane_t2

0x0e17,	// (0x0000fbc6) cale_week_day_heading_pane_t3

0x0e46,	// (0x0000fbf5) cale_week_day_heading_pane_t4

0x0e75,	// (0x0000fc24) cale_week_day_heading_pane_t5

0x0eac,	// (0x0000fc5b) cale_week_day_heading_pane_t6

0x0ee3,	// (0x0000fc92) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001df80) cale_week_day_heading_pane_t

0x9e30,	// (0x00018bdf) bg_cale_side_pane

0x0f0d,	// (0x0000fcbc) cale_week_time_pane_t1

0x0f27,	// (0x0000fcd6) cale_week_time_pane_t2

0x0f41,	// (0x0000fcf0) cale_week_time_pane_t3

0x0f5b,	// (0x0000fd0a) cale_week_time_pane_t4

0x0f75,	// (0x0000fd24) cale_week_time_pane_t5

0x0f8f,	// (0x0000fd3e) cale_week_time_pane_t6

0x0fa9,	// (0x0000fd58) cale_week_time_pane_t7

0x0fc3,	// (0x0000fd72) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001df8f) cale_week_time_pane_t

0x0fe3,	// (0x0000fd92) cell_cale_week_pane_g2

0x1007,	// (0x0000fdb6) cell_cale_week_pane_g3_ParamLimits

0x1007,	// (0x0000fdb6) cell_cale_week_pane_g3

0x9e3e,	// (0x00018bed) grid_highlight_pane_cp07

0x9e46,	// (0x00018bf5) listscroll_gms_pane

0x9e50,	// (0x00018bff) grid_gms_pane

0x9e59,	// (0x00018c08) listscroll_gms_pane_g1

0x9e61,	// (0x00018c10) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001dfa0) listscroll_gms_pane_g

0x101f,	// (0x0000fdce) scroll_pane_cp010

0x102a,	// (0x0000fdd9) cell_gms_pane_ParamLimits

0x102a,	// (0x0000fdd9) cell_gms_pane

0x103c,	// (0x0000fdeb) cell_gms_pane_g1

0x9e69,	// (0x00018c18) cell_gms_pane_g2

0x9e71,	// (0x00018c20) cell_gms_pane_g3

0x9e7a,	// (0x00018c29) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001dfa5) cell_gms_pane_g

0x9e83,	// (0x00018c32) grid_highlight_pane_cp09

0x338c,	// (0x0001213b) phob_pre_status_pane_g1

0x3394,	// (0x00012143) phob_pre_status_pane_g2

0x339c,	// (0x0001214b) phob_pre_status_pane_g3

0x33a4,	// (0x00012153) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0001e3a3) phob_pre_status_pane_g

0x33b4,	// (0x00012163) phob_pre_status_pane_t1

0x33c2,	// (0x00012171) phob_pre_status_pane_t2

0x33d2,	// (0x00012181) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0001e3ae) phob_pre_status_pane_t

0x9e8b,	// (0x00018c3a) bg_list_pane_cp05

0x104c,	// (0x0000fdfb) grid_vorec_pane

0x1054,	// (0x0000fe03) vorec_t1

0x1062,	// (0x0000fe11) vorec_t2

0x1070,	// (0x0000fe1f) vorec_t3

0x107e,	// (0x0000fe2d) vorec_t4

0x93f1,	// (0x000181a0) vorec_t5

0x93ff,	// (0x000181ae) vorec_t6

0x0004,

0xf1ff,	// (0x0001dfae) vorec_t

0x940d,	// (0x000181bc) wait_bar_pane_cp01

0x109a,	// (0x0000fe49) cell_vorec_pane_ParamLimits

0x109a,	// (0x0000fe49) cell_vorec_pane

0x9e93,	// (0x00018c42) cell_vorec_pane_g1

0x98c4,	// (0x00018673) grid_highlight_pane_cp05

0x10c5,	// (0x0000fe74) cams_zoom_pane

0x10d4,	// (0x0000fe83) image_vga_pane

0x10ee,	// (0x0000fe9d) main_camera_pane_g1

0x1100,	// (0x0000feaf) main_camera_pane_g2

0x1110,	// (0x0000febf) main_camera_pane_g3

0x1120,	// (0x0000fecf) main_camera_pane_g4

0x1130,	// (0x0000fedf) main_camera_pane_g5

0x1140,	// (0x0000feef) main_camera_pane_g6

0x1150,	// (0x0000feff) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001dfb9) main_camera_pane_g

0x1160,	// (0x0000ff0f) main_camera_pane_t1

0x1176,	// (0x0000ff25) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001dfca) main_camera_pane_t

0x11b0,	// (0x0000ff5f) cams_zoom_pane_cp_ParamLimits

0x11b0,	// (0x0000ff5f) cams_zoom_pane_cp

0x11d8,	// (0x0000ff87) image_cif_pane_ParamLimits

0x11d8,	// (0x0000ff87) image_cif_pane

0x1213,	// (0x0000ffc2) image_subqcif_pane

0x121b,	// (0x0000ffca) main_video_pane_g1_ParamLimits

0x121b,	// (0x0000ffca) main_video_pane_g1

0x123f,	// (0x0000ffee) main_video_pane_g2_ParamLimits

0x123f,	// (0x0000ffee) main_video_pane_g2

0x1273,	// (0x00010022) main_video_pane_g3_ParamLimits

0x1273,	// (0x00010022) main_video_pane_g3

0x12a1,	// (0x00010050) main_video_pane_g4_ParamLimits

0x12a1,	// (0x00010050) main_video_pane_g4

0x12cf,	// (0x0001007e) main_video_pane_g5_ParamLimits

0x12cf,	// (0x0001007e) main_video_pane_g5

0x9ea9,	// (0x00018c58) main_video_pane_g6_ParamLimits

0x9ea9,	// (0x00018c58) main_video_pane_g6

0x0006,

0xf220,	// (0x0001dfcf) main_video_pane_g_ParamLimits

0xf220,	// (0x0001dfcf) main_video_pane_g

0x12f8,	// (0x000100a7) main_video_pane_t1_ParamLimits

0x12f8,	// (0x000100a7) main_video_pane_t1

0x9ec3,	// (0x00018c72) cams_zoom_pane_g1

0x9ecc,	// (0x00018c7b) cams_zoom_pane_g2

0x9ed5,	// (0x00018c84) cams_zoom_pane_g3

0x9ede,	// (0x00018c8d) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001dfde) cams_zoom_pane_g

0x1355,	// (0x00010104) grid_cams_pane

0x136f,	// (0x0001011e) linegrid_cams_pane

0x1382,	// (0x00010131) cell_cams_pane_ParamLimits

0x1382,	// (0x00010131) cell_cams_pane

0x9ee7,	// (0x00018c96) cams_burst_image_pane

0x9eef,	// (0x00018c9e) cell_cams_pane_g1

0x98c4,	// (0x00018673) grid_highlight_pane_cp03

0x9c8b,	// (0x00018a3a) mp_bg_pane_g1

0x98c4,	// (0x00018673) bg_list_pane_cp03

0xbd2b,	// (0x0001aada) bg_mp_pane

0xbd33,	// (0x0001aae2) grid_mp_pane

0xbd3b,	// (0x0001aaea) media_player_g1

0xbd43,	// (0x0001aaf2) media_player_t1

0xbd51,	// (0x0001ab00) media_player_t2

0xbd5f,	// (0x0001ab0e) media_player_t3

0xbd6d,	// (0x0001ab1c) media_player_t4

0xbd7b,	// (0x0001ab2a) media_player_t5

0xbd89,	// (0x0001ab38) media_player_t6

0xbd97,	// (0x0001ab46) media_player_t7

0x0006,

0xf5de,	// (0x0001e38d) media_player_t

0xbda5,	// (0x0001ab54) wait_bar_pane_cp02

0xf5c3,	// (0x0001e372) main_usb_pane_t

0x3383,	// (0x00012132) cell_mp_pane

0x9c8b,	// (0x00018a3a) cell_mp_pane_g1

0x98c4,	// (0x00018673) grid_highlight_pane_cp06

0x9ef7,	// (0x00018ca6) grid_skin_colour_pane

0x9eff,	// (0x00018cae) list_highlight_pane_cp03

0x14b9,	// (0x00010268) skin_g1

0x9f07,	// (0x00018cb6) skin_t1

0x9f16,	// (0x00018cc5) skin_t2

0x0001,

0xf264,	// (0x0001e013) skin_t

0x14c1,	// (0x00010270) cell_skin_colour_pane_ParamLimits

0x14c1,	// (0x00010270) cell_skin_colour_pane

0x9f24,	// (0x00018cd3) cell_skin_colour_pane_g1

0x153a,	// (0x000102e9) call_video_g1_ParamLimits

0x153a,	// (0x000102e9) call_video_g1

0x1556,	// (0x00010305) call_video_g2_ParamLimits

0x1556,	// (0x00010305) call_video_g2

0x0001,

0xf269,	// (0x0001e018) call_video_g_ParamLimits

0xf269,	// (0x0001e018) call_video_g

0x15a8,	// (0x00010357) call_video_uplink_pane_cp1_ParamLimits

0x15a8,	// (0x00010357) call_video_uplink_pane_cp1

0x9f36,	// (0x00018ce5) call_video_uplink_pane_cp2

0x1647,	// (0x000103f6) video_down_crop_pane_ParamLimits

0x1647,	// (0x000103f6) video_down_crop_pane

0x1730,	// (0x000104df) video_down_pane_ParamLimits

0x1730,	// (0x000104df) video_down_pane

0x9f3e,	// (0x00018ced) video_down_subqcif_pane_ParamLimits

0x9f3e,	// (0x00018ced) video_down_subqcif_pane

0x9f56,	// (0x00018d05) video_down_subqcif_pane_cp_ParamLimits

0x9f56,	// (0x00018d05) video_down_subqcif_pane_cp

0x9f7c,	// (0x00018d2b) im_reading_pane_ParamLimits

0x9f7c,	// (0x00018d2b) im_reading_pane

0x1840,	// (0x000105ef) im_writing_pane_ParamLimits

0x1840,	// (0x000105ef) im_writing_pane

0x1856,	// (0x00010605) im_reading_pane_t1

0x9f96,	// (0x00018d45) list_im_pane

0x9fa7,	// (0x00018d56) scroll_pane_cp07

0x1890,	// (0x0001063f) im_writing_pane_t1_ParamLimits

0x1890,	// (0x0001063f) im_writing_pane_t1

0x9fc0,	// (0x00018d6f) im_writing_pane_t2_ParamLimits

0x9fc0,	// (0x00018d6f) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001e022) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001e022) im_writing_pane_t

0x98c4,	// (0x00018673) input_focus_pane_cp04

0x98c4,	// (0x00018673) input_focus_pane_cp05

0x18a5,	// (0x00010654) list_im_single_pane_ParamLimits

0x18a5,	// (0x00010654) list_im_single_pane

0x18ba,	// (0x00010669) list_single_im_pane_t1

0x3343,	// (0x000120f2) blid_accuracy_pane

0x334b,	// (0x000120fa) blid_compass_pane

0x3355,	// (0x00012104) main_location_t1

0x3365,	// (0x00012114) main_location_t2

0x3375,	// (0x00012124) main_location_t3

0x0002,

0xf5ed,	// (0x0001e39c) main_location_t

0x98c4,	// (0x00018673) aid_levels_location

0x9c8b,	// (0x00018a3a) blid_accuracy_pane_g1

0x9c8b,	// (0x00018a3a) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001e084) blid_accuracy_pane_g

0xa008,	// (0x00018db7) wml_content_pane

0xa046,	// (0x00018df5) wml_button_pane_ParamLimits

0xa046,	// (0x00018df5) wml_button_pane

0x18c9,	// (0x00010678) wml_list_single_large_pane_ParamLimits

0x18c9,	// (0x00010678) wml_list_single_large_pane

0x18de,	// (0x0001068d) wml_list_single_medium_pane_ParamLimits

0x18de,	// (0x0001068d) wml_list_single_medium_pane

0x18f5,	// (0x000106a4) wml_list_single_small_pane_ParamLimits

0x18f5,	// (0x000106a4) wml_list_single_small_pane

0xa05a,	// (0x00018e09) wml_selection_box_pane_ParamLimits

0xa05a,	// (0x00018e09) wml_selection_box_pane

0xa06d,	// (0x00018e1c) wml_list_single_pane_t1

0xa07c,	// (0x00018e2b) wml_list_single_medium_pane_t1

0xa08b,	// (0x00018e3a) wml_list_single_large_pane_t1

0xa09a,	// (0x00018e49) input_focus_pane_cp02_ParamLimits

0xa09a,	// (0x00018e49) input_focus_pane_cp02

0xa0ad,	// (0x00018e5c) wml_selection_box_pane_g1

0xa0b6,	// (0x00018e65) wml_selection_box_pane_t1_ParamLimits

0xa0b6,	// (0x00018e65) wml_selection_box_pane_t1

0x9b1f,	// (0x000188ce) bg_wml_button_pane_ParamLimits

0x9b1f,	// (0x000188ce) bg_wml_button_pane

0xa0ce,	// (0x00018e7d) wml_button_pane_g1

0xa0d6,	// (0x00018e85) wml_button_pane_t1

0xa0ce,	// (0x00018e7d) wml_button_bg_pane_g1

0xa0e6,	// (0x00018e95) wml_button_bg_pane_g2

0xa0ee,	// (0x00018e9d) wml_button_bg_pane_g3

0xa0f6,	// (0x00018ea5) wml_button_bg_pane_g4

0xa0fe,	// (0x00018ead) wml_button_bg_pane_g5

0xa106,	// (0x00018eb5) wml_button_bg_pane_g6

0xa10e,	// (0x00018ebd) wml_button_bg_pane_g7

0xa116,	// (0x00018ec5) wml_button_bg_pane_g8

0xa11e,	// (0x00018ecd) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001e027) wml_button_bg_pane_g

0x190e,	// (0x000106bd) bg_list_pane_cp02

0xa126,	// (0x00018ed5) mce_header_pane_ParamLimits

0xa126,	// (0x00018ed5) mce_header_pane

0xa13c,	// (0x00018eeb) mce_icon_pane

0xa13c,	// (0x00018eeb) mce_image_pane

0xa145,	// (0x00018ef4) mce_text_pane_ParamLimits

0xa145,	// (0x00018ef4) mce_text_pane

0x1916,	// (0x000106c5) scroll_pane_cp03

0xa03e,	// (0x00018ded) scroll_pane_cp04

0xa158,	// (0x00018f07) scroll_pane_cp05_ParamLimits

0xa158,	// (0x00018f07) scroll_pane_cp05

0x1920,	// (0x000106cf) mce_header_field_pane_ParamLimits

0x1920,	// (0x000106cf) mce_header_field_pane

0x1937,	// (0x000106e6) mce_header_field_pane_2_ParamLimits

0x1937,	// (0x000106e6) mce_header_field_pane_2

0x194d,	// (0x000106fc) mce_header_field_pane_3

0x1955,	// (0x00010704) list_single_mce_message_pane_ParamLimits

0x1955,	// (0x00010704) list_single_mce_message_pane

0x196b,	// (0x0001071a) list_single_mce_smart_pane_ParamLimits

0x196b,	// (0x0001071a) list_single_mce_smart_pane

0xa164,	// (0x00018f13) input_focus_pane_cp03

0xa16d,	// (0x00018f1c) list_header_data_pane

0x198c,	// (0x0001073b) mce_header_field_pane_t1

0x199c,	// (0x0001074b) list_single_mce_header_pane_ParamLimits

0x199c,	// (0x0001074b) list_single_mce_header_pane

0xa175,	// (0x00018f24) list_single_mce_header_pane_t1

0xa184,	// (0x00018f33) list_single_mce_message_pane_g1

0xa18c,	// (0x00018f3b) list_single_mce_message_pane_t1

0x19d6,	// (0x00010785) bg_cale_heading_pane_cp01_ParamLimits

0x19d6,	// (0x00010785) bg_cale_heading_pane_cp01

0xa19a,	// (0x00018f49) bg_cale_pane_cp02_ParamLimits

0xa19a,	// (0x00018f49) bg_cale_pane_cp02

0x1a10,	// (0x000107bf) cale_month_corner_pane

0x1a2f,	// (0x000107de) cale_month_day_heading_pane_ParamLimits

0x1a2f,	// (0x000107de) cale_month_day_heading_pane

0x1a81,	// (0x00010830) cale_month_pane_g1_ParamLimits

0x1a81,	// (0x00010830) cale_month_pane_g1

0x1ab0,	// (0x0001085f) cale_month_pane_g2_ParamLimits

0x1ab0,	// (0x0001085f) cale_month_pane_g2

0x1ae0,	// (0x0001088f) cale_month_pane_g3_ParamLimits

0x1ae0,	// (0x0001088f) cale_month_pane_g3

0x1b1c,	// (0x000108cb) cale_month_pane_g4_ParamLimits

0x1b1c,	// (0x000108cb) cale_month_pane_g4

0x1b58,	// (0x00010907) cale_month_pane_g5_ParamLimits

0x1b58,	// (0x00010907) cale_month_pane_g5

0x1ba0,	// (0x0001094f) cale_month_pane_g6_ParamLimits

0x1ba0,	// (0x0001094f) cale_month_pane_g6

0x1bec,	// (0x0001099b) cale_month_pane_g7_ParamLimits

0x1bec,	// (0x0001099b) cale_month_pane_g7

0x1c3c,	// (0x000109eb) cale_month_pane_g8_ParamLimits

0x1c3c,	// (0x000109eb) cale_month_pane_g8

0x1c90,	// (0x00010a3f) cale_month_pane_g9_ParamLimits

0x1c90,	// (0x00010a3f) cale_month_pane_g9

0x1ce2,	// (0x00010a91) cale_month_pane_g10_ParamLimits

0x1ce2,	// (0x00010a91) cale_month_pane_g10

0x1d34,	// (0x00010ae3) cale_month_pane_g11_ParamLimits

0x1d34,	// (0x00010ae3) cale_month_pane_g11

0x1d86,	// (0x00010b35) cale_month_pane_g12_ParamLimits

0x1d86,	// (0x00010b35) cale_month_pane_g12

0x1dd8,	// (0x00010b87) cale_month_pane_g13_ParamLimits

0x1dd8,	// (0x00010b87) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001e03a) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001e03a) cale_month_pane_g

0x1e2a,	// (0x00010bd9) cale_month_week_pane

0x1e4e,	// (0x00010bfd) grid_cale_month_pane_ParamLimits

0x1e4e,	// (0x00010bfd) grid_cale_month_pane

0x1e97,	// (0x00010c46) cale_month_day_heading_pane_t1

0x1ed9,	// (0x00010c88) cale_month_day_heading_pane_t2

0x1f0e,	// (0x00010cbd) cale_month_day_heading_pane_t3

0x1f43,	// (0x00010cf2) cale_month_day_heading_pane_t4

0x1f80,	// (0x00010d2f) cale_month_day_heading_pane_t5

0x1fc5,	// (0x00010d74) cale_month_day_heading_pane_t6

0x200a,	// (0x00010db9) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001e055) cale_month_day_heading_pane_t

0x9e30,	// (0x00018bdf) bg_cale_side_pane_cp01

0x2057,	// (0x00010e06) cale_month_week_pane_t1

0x2070,	// (0x00010e1f) cale_month_week_pane_t2

0x2089,	// (0x00010e38) cale_month_week_pane_t3

0x20a2,	// (0x00010e51) cale_month_week_pane_t4

0x20bb,	// (0x00010e6a) cale_month_week_pane_t5

0x20d4,	// (0x00010e83) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001e064) cale_month_week_pane_t

0x20ed,	// (0x00010e9c) cell_cale_month_pane_ParamLimits

0x20ed,	// (0x00010e9c) cell_cale_month_pane

0xa1d9,	// (0x00018f88) cell_cale_month_pane_g1

0x2245,	// (0x00010ff4) cell_cale_month_pane_t1_ParamLimits

0x2245,	// (0x00010ff4) cell_cale_month_pane_t1

0x9e3e,	// (0x00018bed) grid_highlight_pane_cp08

0x9c8b,	// (0x00018a3a) main_smil_g1

0x2271,	// (0x00011020) smil_status_pane

0xa1e5,	// (0x00018f94) smil_text_pane

0xbc0b,	// (0x0001a9ba) bg_popup_call3_rect_pane_g8

0xbc13,	// (0x0001a9c2) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e31d) bg_popup_call3_rect_pane_g

0xbeee,	// (0x0001ac9d) smil_status_volume_pane_g1

0xa1ef,	// (0x00018f9e) smil_status_pane_t1

0xbf21,	// (0x0001acd0) volume_smil_pane

0xa206,	// (0x00018fb5) list_smil_text_pane

0x2286,	// (0x00011035) scroll_pane_cp011

0x2291,	// (0x00011040) smil_text_list_pane_t1_ParamLimits

0x2291,	// (0x00011040) smil_text_list_pane_t1

0xa210,	// (0x00018fbf) aid_volume_smil_ParamLimits

0xa210,	// (0x00018fbf) aid_volume_smil

0x9c8b,	// (0x00018a3a) smil_volume_pane_g1

0x9c8b,	// (0x00018a3a) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001e084) smil_volume_pane_g

0x0aeb,	// (0x0000f89a) listscroll_cale_day_pane

0xa232,	// (0x00018fe1) bg_cale_pane

0xa24a,	// (0x00018ff9) list_cale_pane

0xa26d,	// (0x0001901c) scroll_pane_cp09

0xa27e,	// (0x0001902d) cale_bg_pane_g1

0xa286,	// (0x00019035) cale_bg_pane_g2

0xa28e,	// (0x0001903d) cale_bg_pane_g3

0xa296,	// (0x00019045) cale_bg_pane_g4

0xa29e,	// (0x0001904d) cale_bg_pane_g5

0xa2a6,	// (0x00019055) cale_bg_pane_g6

0xa2ae,	// (0x0001905d) cale_bg_pane_g7

0xa2b6,	// (0x00019065) cale_bg_pane_g8

0xa2be,	// (0x0001906d) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001e089) cale_bg_pane_g

0x22dd,	// (0x0001108c) list_cale_time_pane_ParamLimits

0x22dd,	// (0x0001108c) list_cale_time_pane

0xa2c6,	// (0x00019075) list_cale_time_pane_g1_ParamLimits

0xa2c6,	// (0x00019075) list_cale_time_pane_g1

0xa2d2,	// (0x00019081) list_cale_time_pane_g2_ParamLimits

0xa2d2,	// (0x00019081) list_cale_time_pane_g2

0x22f3,	// (0x000110a2) list_cale_time_pane_g3_ParamLimits

0x22f3,	// (0x000110a2) list_cale_time_pane_g3

0x2301,	// (0x000110b0) list_cale_time_pane_g4_ParamLimits

0x2301,	// (0x000110b0) list_cale_time_pane_g4

0x230f,	// (0x000110be) list_cale_time_pane_g5_ParamLimits

0x230f,	// (0x000110be) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001e09c) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001e09c) list_cale_time_pane_g

0xa2ec,	// (0x0001909b) list_cale_time_pane_t1_ParamLimits

0xa2ec,	// (0x0001909b) list_cale_time_pane_t1

0xa314,	// (0x000190c3) list_cale_time_pane_t2_ParamLimits

0xa314,	// (0x000190c3) list_cale_time_pane_t2

0x2691,	// (0x00011440) aid_blid_cardinal_pane

0x26cf,	// (0x0001147e) compass_pane_t4

0xa33c,	// (0x000190eb) list_cale_time_pane_t4_ParamLimits

0xa33c,	// (0x000190eb) list_cale_time_pane_t4

0x26dd,	// (0x0001148c) compass_pane_t5

0x26eb,	// (0x0001149a) compass_pane_t6

0x26f9,	// (0x000114a8) compass_pane_t7

0xa82f,	// (0x000195de) navi_pane_cc_t1

0xaa1e,	// (0x000197cd) aid_phob_thumbnail_center_pane

0x2d59,	// (0x00011b08) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e0a9) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e0a9) list_cale_time_pane_t

0x951b,	// (0x000182ca) bg_popup_window_pane_cp02_ParamLimits

0x951b,	// (0x000182ca) bg_popup_window_pane_cp02

0xa364,	// (0x00019113) heading_pane_cp01_ParamLimits

0xa364,	// (0x00019113) heading_pane_cp01

0xa370,	// (0x0001911f) loc_req_pane_ParamLimits

0xa370,	// (0x0001911f) loc_req_pane

0xa380,	// (0x0001912f) loc_type_pane_ParamLimits

0xa380,	// (0x0001912f) loc_type_pane

0xa392,	// (0x00019141) loc_type_pane_t1_ParamLimits

0xa392,	// (0x00019141) loc_type_pane_t1

0xa3a4,	// (0x00019153) loc_type_pane_t2_ParamLimits

0xa3a4,	// (0x00019153) loc_type_pane_t2

0xa3b6,	// (0x00019165) loc_type_pane_t3_ParamLimits

0xa3b6,	// (0x00019165) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e0b0) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e0b0) loc_type_pane_t

0xa3c8,	// (0x00019177) list_loc_req_pane

0xa3d2,	// (0x00019181) scroll_pane_cp012

0x231d,	// (0x000110cc) list_single_loc_request_popup_menu_pane_ParamLimits

0x231d,	// (0x000110cc) list_single_loc_request_popup_menu_pane

0xa3dd,	// (0x0001918c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa3dd,	// (0x0001918c) list_single_loc_request_popup_menu_pane_g1

0xa3e9,	// (0x00019198) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa3e9,	// (0x00019198) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e0b7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e0b7) list_single_loc_request_popup_menu_pane_g

0xa3f5,	// (0x000191a4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa3f5,	// (0x000191a4) list_single_loc_request_popup_menu_pane_t1

0x9b1f,	// (0x000188ce) bg_popup_window_pane_cp03_ParamLimits

0x9b1f,	// (0x000188ce) bg_popup_window_pane_cp03

0xa40b,	// (0x000191ba) heading_loc_req_pane_ParamLimits

0xa40b,	// (0x000191ba) heading_loc_req_pane

0x232a,	// (0x000110d9) popup_dyc_status_message_window_g1_ParamLimits

0x232a,	// (0x000110d9) popup_dyc_status_message_window_g1

0x233e,	// (0x000110ed) popup_dyc_status_message_window_t1_ParamLimits

0x233e,	// (0x000110ed) popup_dyc_status_message_window_t1

0x2353,	// (0x00011102) popup_dyc_status_message_window_t2_ParamLimits

0x2353,	// (0x00011102) popup_dyc_status_message_window_t2

0x2368,	// (0x00011117) popup_dyc_status_message_window_t3_ParamLimits

0x2368,	// (0x00011117) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e0bc) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e0bc) popup_dyc_status_message_window_t

0x98c4,	// (0x00018673) bg_heading_pane_cp01

0xa417,	// (0x000191c6) heading_loc_req_pane_g1

0xa41f,	// (0x000191ce) heading_loc_req_pane_g2

0xa427,	// (0x000191d6) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e0c3) heading_loc_req_pane_g

0xa42f,	// (0x000191de) heading_loc_req_pane_t1

0xa43e,	// (0x000191ed) bg_popup_sub_pane_cp01_ParamLimits

0xa43e,	// (0x000191ed) bg_popup_sub_pane_cp01

0xa44c,	// (0x000191fb) popup_cale_events_window_g1_ParamLimits

0xa44c,	// (0x000191fb) popup_cale_events_window_g1

0xa46c,	// (0x0001921b) popup_cale_events_window_g2_ParamLimits

0xa46c,	// (0x0001921b) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e0f7) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e0f7) popup_cale_events_window_g

0xa48c,	// (0x0001923b) popup_cale_events_window_t1_ParamLimits

0xa48c,	// (0x0001923b) popup_cale_events_window_t1

0xa49e,	// (0x0001924d) popup_cale_events_window_t2_ParamLimits

0xa49e,	// (0x0001924d) popup_cale_events_window_t2

0xa4dc,	// (0x0001928b) popup_cale_events_window_t3_ParamLimits

0xa4dc,	// (0x0001928b) popup_cale_events_window_t3

0xa516,	// (0x000192c5) popup_cale_events_window_t4_ParamLimits

0xa516,	// (0x000192c5) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e0fc) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e0fc) popup_cale_events_window_t

0x2461,	// (0x00011210) call_type_pane

0x2471,	// (0x00011220) popup_call_status_window_g1

0x2485,	// (0x00011234) popup_call_status_window_g2

0x2499,	// (0x00011248) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e105) popup_call_status_window_g

0xa54c,	// (0x000192fb) call_type_pane_g1

0xa555,	// (0x00019304) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e10c) call_type_pane_g

0x98c4,	// (0x00018673) bg_popup_sub_pane_cp02

0xa55e,	// (0x0001930d) listscroll_popup_wml_pane

0xa566,	// (0x00019315) list_wml_pane

0xa570,	// (0x0001931f) scroll_pane_cp013

0xa57b,	// (0x0001932a) list_single_graphic_popup_wml_pane_ParamLimits

0xa57b,	// (0x0001932a) list_single_graphic_popup_wml_pane

0x9c8b,	// (0x00018a3a) list_single_graphic_popup_wml_pane_g1

0xa58f,	// (0x0001933e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e111) list_single_graphic_popup_wml_pane_g

0xa597,	// (0x00019346) list_single_graphic_popup_wml_pane_t1

0xa5ad,	// (0x0001935c) aid_call_pane

0x9b17,	// (0x000188c6) popup_clock_analogue_window_g1

0x9b17,	// (0x000188c6) popup_clock_analogue_window_g2

0xa5b5,	// (0x00019364) popup_clock_analogue_window_g3

0xa5b5,	// (0x00019364) popup_clock_analogue_window_g4

0x9c8b,	// (0x00018a3a) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e116) popup_clock_analogue_window_g

0xa5bd,	// (0x0001936c) popup_clock_analogue_window_t1

0xa5cb,	// (0x0001937a) clock_digital_number_pane_ParamLimits

0xa5cb,	// (0x0001937a) clock_digital_number_pane

0xa5d7,	// (0x00019386) clock_digital_number_pane_cp02_ParamLimits

0xa5d7,	// (0x00019386) clock_digital_number_pane_cp02

0xa5e3,	// (0x00019392) clock_digital_number_pane_cp03_ParamLimits

0xa5e3,	// (0x00019392) clock_digital_number_pane_cp03

0xa5ef,	// (0x0001939e) clock_digital_number_pane_cp04_ParamLimits

0xa5ef,	// (0x0001939e) clock_digital_number_pane_cp04

0xa5fb,	// (0x000193aa) clock_digital_separator_pane_ParamLimits

0xa5fb,	// (0x000193aa) clock_digital_separator_pane

0xa607,	// (0x000193b6) popup_clock_digital_window_t1

0x9c8b,	// (0x00018a3a) clock_digital_number_pane_g1

0x9c8b,	// (0x00018a3a) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001e084) clock_digital_number_pane_g

0x9c8b,	// (0x00018a3a) clock_digital_separator_pane_g1

0x9c8b,	// (0x00018a3a) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001e084) clock_digital_separator_pane_g

0x98c4,	// (0x00018673) bg_popup_window_pane_cp04

0xa624,	// (0x000193d3) heading_pane_cp03

0xa62c,	// (0x000193db) listscroll_popup_gms_pane

0xa634,	// (0x000193e3) grid_large_graphic_popup_pane

0xa63e,	// (0x000193ed) listscroll_popup_gms_pane_g1

0xa646,	// (0x000193f5) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e121) listscroll_popup_gms_pane_g

0xa03e,	// (0x00018ded) scroll_pane_cp014

0x24a8,	// (0x00011257) cell_large_graphic_popup_pane_ParamLimits

0x24a8,	// (0x00011257) cell_large_graphic_popup_pane

0x24c0,	// (0x0001126f) cell_large_graphic_popup_pane_g1_ParamLimits

0x24c0,	// (0x0001126f) cell_large_graphic_popup_pane_g1

0xa64e,	// (0x000193fd) cell_large_graphic_popup_pane_g2_ParamLimits

0xa64e,	// (0x000193fd) cell_large_graphic_popup_pane_g2

0xa65a,	// (0x00019409) cell_large_graphic_popup_pane_g3_ParamLimits

0xa65a,	// (0x00019409) cell_large_graphic_popup_pane_g3

0xa667,	// (0x00019416) cell_large_graphic_popup_pane_g4_ParamLimits

0xa667,	// (0x00019416) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e126) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e126) cell_large_graphic_popup_pane_g

0xa677,	// (0x00019426) grid_highlight_pane_cp010

0x9c8b,	// (0x00018a3a) bg_popup_call_pane_g1

0xa681,	// (0x00019430) list_single_graphic_popup_conf_pane_ParamLimits

0xa681,	// (0x00019430) list_single_graphic_popup_conf_pane

0xa694,	// (0x00019443) list_highlight_pane_cp01

0xa69d,	// (0x0001944c) list_single_graphic_popup_conf_pane_g1

0xa6a5,	// (0x00019454) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e12f) list_single_graphic_popup_conf_pane_g

0xa6ad,	// (0x0001945c) list_single_graphic_popup_conf_pane_t1

0xa6bb,	// (0x0001946a) linegrid_cams_pane_g1

0x24cc,	// (0x0001127b) linegrid_cams_pane_g2

0x9e71,	// (0x00018c20) linegrid_cams_pane_g3

0xa6c4,	// (0x00019473) linegrid_cams_pane_g4

0x24d5,	// (0x00011284) linegrid_cams_pane_g5

0x24de,	// (0x0001128d) linegrid_cams_pane_g6

0x9e7a,	// (0x00018c29) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e134) linegrid_cams_pane_g

0xa6cd,	// (0x0001947c) popup_clock_analogue_window

0xa6cd,	// (0x0001947c) popup_clock_digital_window

0x98c4,	// (0x00018673) popup_phob_thumbnail_window

0x9c8b,	// (0x00018a3a) call_video_uplink_pane_g1

0xa6d6,	// (0x00019485) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e143) call_video_uplink_pane_g

0xa6de,	// (0x0001948d) video_uplink_pane

0xa6e6,	// (0x00019495) mce_image_pane_g1

0x24e9,	// (0x00011298) mce_image_pane_g2

0x24f1,	// (0x000112a0) mce_image_pane_g3

0x24f9,	// (0x000112a8) mce_image_pane_g4

0x2503,	// (0x000112b2) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e148) mce_image_pane_g

0xa6f0,	// (0x0001949f) control_top_pane_stacon_cp01_ParamLimits

0xa6f0,	// (0x0001949f) control_top_pane_stacon_cp01

0xa704,	// (0x000194b3) uni_indicator_pane_stacon_cp01_ParamLimits

0xa704,	// (0x000194b3) uni_indicator_pane_stacon_cp01

0xa715,	// (0x000194c4) bg_popup_sub_pane_cp03

0x250b,	// (0x000112ba) chi_dic_find_pane

0x2513,	// (0x000112c2) listscroll_chi_dic_pane

0x251c,	// (0x000112cb) main_pane_chidic_g1

0x252f,	// (0x000112de) chi_dic_find_pane_t1

0xa71f,	// (0x000194ce) find_chidic_pane

0xa728,	// (0x000194d7) chi_dic_list_pane_ParamLimits

0xa728,	// (0x000194d7) chi_dic_list_pane

0xa739,	// (0x000194e8) scroll_pane_cp020

0x253d,	// (0x000112ec) find_chidic_pane_t1

0x98c4,	// (0x00018673) input_focus_pane_cp06

0x254c,	// (0x000112fb) list_chi_dic_pane_ParamLimits

0x254c,	// (0x000112fb) list_chi_dic_pane

0x255e,	// (0x0001130d) list_chi_dic_pane_t1_ParamLimits

0x255e,	// (0x0001130d) list_chi_dic_pane_t1

0x98c4,	// (0x00018673) list_highlight_pane_cp020

0xa741,	// (0x000194f0) bg_cale_heading_pane_g1

0x2571,	// (0x00011320) bg_cale_heading_pane_g2

0x2579,	// (0x00011328) bg_cale_heading_pane_g3

0x2581,	// (0x00011330) bg_cale_heading_pane_g4

0x258b,	// (0x0001133a) bg_cale_heading_pane_g5

0x2595,	// (0x00011344) bg_cale_heading_pane_g6

0x259d,	// (0x0001134c) bg_cale_heading_pane_g7

0x25a5,	// (0x00011354) bg_cale_heading_pane_g8

0x25af,	// (0x0001135e) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e153) bg_cale_heading_pane_g

0xa741,	// (0x000194f0) bg_cale_side_pane_g1

0x25b9,	// (0x00011368) bg_cale_side_pane_g2

0x25c1,	// (0x00011370) bg_cale_side_pane_g3

0x25c9,	// (0x00011378) bg_cale_side_pane_g4

0x25d1,	// (0x00011380) bg_cale_side_pane_g5

0x25d9,	// (0x00011388) bg_cale_side_pane_g6

0x25e1,	// (0x00011390) bg_cale_side_pane_g7

0x25e9,	// (0x00011398) bg_cale_side_pane_g8

0x25f1,	// (0x000113a0) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e166) bg_cale_side_pane_g

0x25f9,	// (0x000113a8) popup_call_status_window_ParamLimits

0x25f9,	// (0x000113a8) popup_call_status_window

0xa749,	// (0x000194f8) stacon_top_pane

0xa751,	// (0x00019500) status_pane_ParamLimits

0xa751,	// (0x00019500) status_pane

0xa766,	// (0x00019515) status_small_pane

0xa76e,	// (0x0001951d) control_pane

0x98c4,	// (0x00018673) stacon_bottom_pane

0xa776,	// (0x00019525) list_single_mce_smart_pane_t1_ParamLimits

0xa776,	// (0x00019525) list_single_mce_smart_pane_t1

0xa789,	// (0x00019538) list_single_mce_smart_pane_t2_ParamLimits

0xa789,	// (0x00019538) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e179) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e179) list_single_mce_smart_pane_t

0x2640,	// (0x000113ef) compass_pane

0x2649,	// (0x000113f8) main_location2_pane_t1

0x265b,	// (0x0001140a) main_location2_pane_t2

0x266d,	// (0x0001141c) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e17e) main_location2_pane_t

0xa7a8,	// (0x00019557) compass_pane_g1_ParamLimits

0xa7a8,	// (0x00019557) compass_pane_g1

0x26b1,	// (0x00011460) compass_pane_t1

0x26c0,	// (0x0001146f) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e187) compass_pane_t

0x2707,	// (0x000114b6) text_secondary_cp61

0xa826,	// (0x000195d5) navi_pane_cams_g5

0xa8a2,	// (0x00019651) navi_pane_im_t1

0xa8b0,	// (0x0001965f) navi_pane_mp_g1_ParamLimits

0xa8b0,	// (0x0001965f) navi_pane_mp_g1

0xa8c4,	// (0x00019673) navi_pane_mp_g2_ParamLimits

0xa8c4,	// (0x00019673) navi_pane_mp_g2

0xa8d0,	// (0x0001967f) navi_pane_mp_g3_ParamLimits

0xa8d0,	// (0x0001967f) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e19b) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e19b) navi_pane_mp_g

0xa8dc,	// (0x0001968b) navi_pane_mp_t1

0xa8ea,	// (0x00019699) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e1a2) navi_pane_mp_t

0xa955,	// (0x00019704) navi_pane_vt_g1

0xa8dc,	// (0x0001968b) navi_pane_vt_t1

0xa95d,	// (0x0001970c) navi_slider_pane

0x9e8b,	// (0x00018c3a) zooming_pane

0xa96d,	// (0x0001971c) navi_slider_pane_g1

0xa976,	// (0x00019725) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e1a9) navi_slider_pane_g

0xa9a3,	// (0x00019752) aid_levels_zoom

0xa9ab,	// (0x0001975a) zooming_pane_g1

0xa9b3,	// (0x00019762) zooming_pane_g2

0xa9b3,	// (0x00019762) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e1b8) zooming_pane_g

0xa9bb,	// (0x0001976a) level_10_zoom

0xa9c4,	// (0x00019773) level_11_zoom

0xa9cd,	// (0x0001977c) level_1_zoom

0xa9d6,	// (0x00019785) level_2_zoom

0xa9df,	// (0x0001978e) level_3_zoom

0xa9e8,	// (0x00019797) level_4_zoom

0xa9f1,	// (0x000197a0) level_5_zoom

0xa9fa,	// (0x000197a9) level_6_zoom

0xaa03,	// (0x000197b2) level_7_zoom

0xaa0c,	// (0x000197bb) level_8_zoom

0xaa15,	// (0x000197c4) level_9_zoom

0xaa26,	// (0x000197d5) popup_phob_thumbnail_window_g1

0xaa2e,	// (0x000197dd) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e1bf) popup_phob_thumbnail_window_g

0xbdad,	// (0x0001ab5c) level_1_location

0xbdb5,	// (0x0001ab64) level_2_location

0xbdbd,	// (0x0001ab6c) level_3_location

0xbdc5,	// (0x0001ab74) level_4_location

0x9e8b,	// (0x00018c3a) level_5_location

0x2758,	// (0x00011507) mce_icon_pane_g1

0x2762,	// (0x00011511) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e1c4) mce_icon_pane_g

0x276a,	// (0x00011519) main_mup_pane_g1_ParamLimits

0x276a,	// (0x00011519) main_mup_pane_g1

0x2780,	// (0x0001152f) main_mup_pane_g2_ParamLimits

0x2780,	// (0x0001152f) main_mup_pane_g2

0x2792,	// (0x00011541) main_mup_pane_g3_ParamLimits

0x2792,	// (0x00011541) main_mup_pane_g3

0x27a4,	// (0x00011553) main_mup_pane_g4_ParamLimits

0x27a4,	// (0x00011553) main_mup_pane_g4

0x27bc,	// (0x0001156b) main_mup_pane_g5_ParamLimits

0x27bc,	// (0x0001156b) main_mup_pane_g5

0x27d8,	// (0x00011587) main_mup_pane_g6_ParamLimits

0x27d8,	// (0x00011587) main_mup_pane_g6

0x27f0,	// (0x0001159f) main_mup_pane_g7_ParamLimits

0x27f0,	// (0x0001159f) main_mup_pane_g7

0x2808,	// (0x000115b7) main_mup_pane_g8_ParamLimits

0x2808,	// (0x000115b7) main_mup_pane_g8

0x2820,	// (0x000115cf) main_mup_pane_g9_ParamLimits

0x2820,	// (0x000115cf) main_mup_pane_g9

0x283a,	// (0x000115e9) main_mup_pane_g10_ParamLimits

0x283a,	// (0x000115e9) main_mup_pane_g10

0x2854,	// (0x00011603) main_mup_pane_g11_ParamLimits

0x2854,	// (0x00011603) main_mup_pane_g11

0x2868,	// (0x00011617) main_mup_pane_g12_ParamLimits

0x2868,	// (0x00011617) main_mup_pane_g12

0x287e,	// (0x0001162d) main_mup_pane_g13_ParamLimits

0x287e,	// (0x0001162d) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e1c9) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e1c9) main_mup_pane_g

0x2892,	// (0x00011641) main_mup_pane_t1_ParamLimits

0x2892,	// (0x00011641) main_mup_pane_t1

0x28ac,	// (0x0001165b) main_mup_pane_t2_ParamLimits

0x28ac,	// (0x0001165b) main_mup_pane_t2

0x28c4,	// (0x00011673) main_mup_pane_t3_ParamLimits

0x28c4,	// (0x00011673) main_mup_pane_t3

0x28dc,	// (0x0001168b) main_mup_pane_t4_ParamLimits

0x28dc,	// (0x0001168b) main_mup_pane_t4

0x28fa,	// (0x000116a9) main_mup_pane_t5_ParamLimits

0x28fa,	// (0x000116a9) main_mup_pane_t5

0x290f,	// (0x000116be) main_mup_pane_t6_ParamLimits

0x290f,	// (0x000116be) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e1e4) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e1e4) main_mup_pane_t

0x2921,	// (0x000116d0) mup_progress_pane_ParamLimits

0x2921,	// (0x000116d0) mup_progress_pane

0x292d,	// (0x000116dc) mup_visualizer_pane_ParamLimits

0x292d,	// (0x000116dc) mup_visualizer_pane

0x2961,	// (0x00011710) mup_volume_pane_ParamLimits

0x2961,	// (0x00011710) mup_volume_pane

0xaa36,	// (0x000197e5) mup_visualizer_pane_g1_ParamLimits

0xaa36,	// (0x000197e5) mup_visualizer_pane_g1

0xaa36,	// (0x000197e5) mup_visualizer_pane_g2_ParamLimits

0xaa36,	// (0x000197e5) mup_visualizer_pane_g2

0xa7a8,	// (0x00019557) mup_visualizer_pane_g3_ParamLimits

0xa7a8,	// (0x00019557) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e1f1) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e1f1) mup_visualizer_pane_g

0x9c8b,	// (0x00018a3a) mup_volume_pane_g1

0xaa4c,	// (0x000197fb) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e1f8) mup_volume_pane_g

0x9c8b,	// (0x00018a3a) mup_progress_pane_g1

0xaa55,	// (0x00019804) mup_progress_pane_g2

0xaa5e,	// (0x0001980d) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e1fd) mup_progress_pane_g

0x98c4,	// (0x00018673) bg_popup_window_pane_cp05

0xaa67,	// (0x00019816) heading_pane_cp02_ParamLimits

0xaa67,	// (0x00019816) heading_pane_cp02

0xaa81,	// (0x00019830) list_popup_blid_pane

0xaa89,	// (0x00019838) list_blid_sat_info_pane_ParamLimits

0xaa89,	// (0x00019838) list_blid_sat_info_pane

0xaa9c,	// (0x0001984b) list_blid_sat_info_pane_g1

0xaaa4,	// (0x00019853) list_blid_sat_info_pane_t1

0x2a77,	// (0x00011826) mup_equalizer_pane_ParamLimits

0x2a77,	// (0x00011826) mup_equalizer_pane

0x2a90,	// (0x0001183f) mup_equalizer_pane_cp1_ParamLimits

0x2a90,	// (0x0001183f) mup_equalizer_pane_cp1

0x2aad,	// (0x0001185c) mup_equalizer_pane_cp2_ParamLimits

0x2aad,	// (0x0001185c) mup_equalizer_pane_cp2

0x2aca,	// (0x00011879) mup_equalizer_pane_cp3_ParamLimits

0x2aca,	// (0x00011879) mup_equalizer_pane_cp3

0x2aeb,	// (0x0001189a) mup_equalizer_pane_cp4_ParamLimits

0x2aeb,	// (0x0001189a) mup_equalizer_pane_cp4

0x2b0c,	// (0x000118bb) mup_equalizer_pane_cp5

0x2b20,	// (0x000118cf) mup_equalizer_pane_cp6

0x2b34,	// (0x000118e3) mup_equalizer_pane_cp7

0xbc8b,	// (0x0001aa3a) bg_popup_call_poc_act_pane_g9

0xbc93,	// (0x0001aa42) bg_popup_call_poc_act_pane_g10

0xbc9b,	// (0x0001aa4a) bg_popup_call_poc_act_pane_g11

0x000a,

0x9b1f,	// (0x000188ce) mup_scale_pane

0x9c8b,	// (0x00018a3a) mup_scale_pane_g1

0xaab2,	// (0x00019861) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e219) mup_scale_pane_g

0xaad6,	// (0x00019885) msg_data_pane

0xaade,	// (0x0001988d) scroll_pane_cp017

0x2b5a,	// (0x00011909) bg_list_pane_cp04_ParamLimits

0x2b5a,	// (0x00011909) bg_list_pane_cp04

0xaae6,	// (0x00019895) msg_data_pane_g1

0x2b7a,	// (0x00011929) msg_data_pane_g2

0x2b82,	// (0x00011931) msg_data_pane_g3

0x2b8a,	// (0x00011939) msg_data_pane_g4

0x2b92,	// (0x00011941) msg_data_pane_g5

0x2b9a,	// (0x00011949) msg_data_pane_g6

0x2ba2,	// (0x00011951) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e228) msg_data_pane_g

0x2baa,	// (0x00011959) msg_text_pane_ParamLimits

0x2baa,	// (0x00011959) msg_text_pane

0x2bd8,	// (0x00011987) qrid_highlight_pane_cp011_ParamLimits

0x2bd8,	// (0x00011987) qrid_highlight_pane_cp011

0x98c4,	// (0x00018673) msg_body_pane

0x98c4,	// (0x00018673) msg_header_pane

0xaaf7,	// (0x000198a6) input_focus_pane_cp07

0x2bfc,	// (0x000119ab) msg_header_pane_t1_ParamLimits

0x2bfc,	// (0x000119ab) msg_header_pane_t1

0x2c0e,	// (0x000119bd) msg_header_pane_t2_ParamLimits

0x2c0e,	// (0x000119bd) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e23c) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e23c) msg_header_pane_t

0xab0c,	// (0x000198bb) msg_body_pane_g1

0x2c20,	// (0x000119cf) msg_body_pane_t1_ParamLimits

0x2c20,	// (0x000119cf) msg_body_pane_t1

0x2c51,	// (0x00011a00) msg_body_pane_t2_ParamLimits

0x2c51,	// (0x00011a00) msg_body_pane_t2

0x2c63,	// (0x00011a12) msg_body_pane_t3_ParamLimits

0x2c63,	// (0x00011a12) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e241) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e241) msg_body_pane_t

0x2caf,	// (0x00011a5e) main_viewer_pane_g1_ParamLimits

0x2caf,	// (0x00011a5e) main_viewer_pane_g1

0x2cbd,	// (0x00011a6c) main_viewer_pane_g2_ParamLimits

0x2cbd,	// (0x00011a6c) main_viewer_pane_g2

0x2ccb,	// (0x00011a7a) main_viewer_pane_g3_ParamLimits

0x2ccb,	// (0x00011a7a) main_viewer_pane_g3

0x2cda,	// (0x00011a89) main_viewer_pane_g4_ParamLimits

0x2cda,	// (0x00011a89) main_viewer_pane_g4

0xab2c,	// (0x000198db) main_viewer_pane_g5_ParamLimits

0xab2c,	// (0x000198db) main_viewer_pane_g5

0xab2c,	// (0x000198db) main_viewer_pane_g7_ParamLimits

0xab2c,	// (0x000198db) main_viewer_pane_g7

0xab3e,	// (0x000198ed) main_viewer_pane_g8_ParamLimits

0xab3e,	// (0x000198ed) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e251) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e251) main_viewer_pane_g

0xab56,	// (0x00019905) viewer_content_pane_ParamLimits

0xab56,	// (0x00019905) viewer_content_pane

0x2d16,	// (0x00011ac5) main_postcard_pane_g1_ParamLimits

0x2d16,	// (0x00011ac5) main_postcard_pane_g1

0x2d2c,	// (0x00011adb) main_postcard_pane_g2_ParamLimits

0x2d2c,	// (0x00011adb) main_postcard_pane_g2

0x2d42,	// (0x00011af1) main_postcard_pane_g3_ParamLimits

0x2d42,	// (0x00011af1) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e262) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e262) main_postcard_pane_g

0x2d59,	// (0x00011b08) main_postcard_pane_g4

0xbf01,	// (0x0001acb0) smil_status_volume_pane_g2

0x2d9c,	// (0x00011b4b) postcard_pane_ParamLimits

0x2d9c,	// (0x00011b4b) postcard_pane

0xab64,	// (0x00019913) postcard_pane_g1_ParamLimits

0xab64,	// (0x00019913) postcard_pane_g1

0x2dde,	// (0x00011b8d) postcard_pane_g2_ParamLimits

0x2dde,	// (0x00011b8d) postcard_pane_g2

0x2dea,	// (0x00011b99) postcard_pane_g3_ParamLimits

0x2dea,	// (0x00011b99) postcard_pane_g3

0xab72,	// (0x00019921) postcard_pane_g4_ParamLimits

0xab72,	// (0x00019921) postcard_pane_g4

0x2df6,	// (0x00011ba5) postcard_pane_g5_ParamLimits

0x2df6,	// (0x00011ba5) postcard_pane_g5

0x2e0b,	// (0x00011bba) postcard_pane_g6_ParamLimits

0x2e0b,	// (0x00011bba) postcard_pane_g6

0xab64,	// (0x00019913) postcard_pane_g7_ParamLimits

0xab64,	// (0x00019913) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e26f) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e26f) postcard_pane_g

0x2e1f,	// (0x00011bce) main_mp2_pane_g1_ParamLimits

0x2e1f,	// (0x00011bce) main_mp2_pane_g1

0x2e2b,	// (0x00011bda) main_mp2_pane_g2_ParamLimits

0x2e2b,	// (0x00011bda) main_mp2_pane_g2

0x2e37,	// (0x00011be6) main_mp2_pane_g3_ParamLimits

0x2e37,	// (0x00011be6) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e27e) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e27e) main_mp2_pane_g

0x2e43,	// (0x00011bf2) main_mp2_pane_t1_ParamLimits

0x2e43,	// (0x00011bf2) main_mp2_pane_t1

0x2e58,	// (0x00011c07) main_mp2_pane_t2_ParamLimits

0x2e58,	// (0x00011c07) main_mp2_pane_t2

0x2e6a,	// (0x00011c19) main_mp2_pane_t3_ParamLimits

0x2e6a,	// (0x00011c19) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e285) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e285) main_mp2_pane_t

0xab80,	// (0x0001992f) pec_content_pane_ParamLimits

0xab80,	// (0x0001992f) pec_content_pane

0xa03e,	// (0x00018ded) scroll_pane_cp015

0xab92,	// (0x00019941) pec_attribute_pane_ParamLimits

0xab92,	// (0x00019941) pec_attribute_pane

0x2e7c,	// (0x00011c2b) pec_content_pane_g1_ParamLimits

0x2e7c,	// (0x00011c2b) pec_content_pane_g1

0xaba2,	// (0x00019951) pec_content_pane_t1_ParamLimits

0xaba2,	// (0x00019951) pec_content_pane_t1

0xabb4,	// (0x00019963) pec_content_pane_t2_ParamLimits

0xabb4,	// (0x00019963) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e28c) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e28c) pec_content_pane_t

0x2e88,	// (0x00011c37) list_single_graphic_pane_cp01_ParamLimits

0x2e88,	// (0x00011c37) list_single_graphic_pane_cp01

0x9b1f,	// (0x000188ce) bg_popup_sub_pane_cp04

0xabc6,	// (0x00019975) popup_mup_playback_window_g1

0xabd2,	// (0x00019981) popup_mup_playback_window_t1

0xabe7,	// (0x00019996) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e291) popup_mup_playback_window_t

0xac1e,	// (0x000199cd) main_image_pane_g1_ParamLimits

0xac1e,	// (0x000199cd) main_image_pane_g1

0xac61,	// (0x00019a10) scroll_pane_cp018_ParamLimits

0xac61,	// (0x00019a10) scroll_pane_cp018

0xac79,	// (0x00019a28) scroll_pane_cp016_ParamLimits

0xac79,	// (0x00019a28) scroll_pane_cp016

0x2f56,	// (0x00011d05) smil2_image_pane_ParamLimits

0x2f56,	// (0x00011d05) smil2_image_pane

0x2f86,	// (0x00011d35) smil2_root_pane_ParamLimits

0x2f86,	// (0x00011d35) smil2_root_pane

0x2fbe,	// (0x00011d6d) smil2_text_pane_ParamLimits

0x2fbe,	// (0x00011d6d) smil2_text_pane

0x98c4,	// (0x00018673) bg_list_pane_cp06

0xacb5,	// (0x00019a64) grid_radio_pane

0x98c4,	// (0x00018673) bg_popup_window_pane_cp06

0xacbd,	// (0x00019a6c) main_fmradio_pane_t1

0xa624,	// (0x000193d3) heading_pane_cp04

0xaccb,	// (0x00019a7a) main_fmradio_pane_t2

0xbce3,	// (0x0001aa92) popup_cale_lunar_info_window_g1

0xacd9,	// (0x00019a88) main_fmradio_pane_t3

0xbceb,	// (0x0001aa9a) popup_cale_lunar_info_window_g2

0xace7,	// (0x00019a96) main_fmradio_pane_t4

0x0001,

0xacf5,	// (0x00019aa4) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0001e37f) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e2a6) main_fmradio_pane_t

0xad03,	// (0x00019ab2) wait_bar_pane_cp03

0xad0b,	// (0x00019aba) cell_fmradio_pane_ParamLimits

0xad0b,	// (0x00019aba) cell_fmradio_pane

0xab64,	// (0x00019913) cell_fmradio_pane_g1_ParamLimits

0xab64,	// (0x00019913) cell_fmradio_pane_g1

0x98c4,	// (0x00018673) grid_highlight_pane_cp011

0xad1e,	// (0x00019acd) poc_content_pane_ParamLimits

0xad1e,	// (0x00019acd) poc_content_pane

0xad30,	// (0x00019adf) scroll_pane_cp019

0x303e,	// (0x00011ded) popup_call_poc_act_window_ParamLimits

0x303e,	// (0x00011ded) popup_call_poc_act_window

0x3062,	// (0x00011e11) popup_call_poc_inact_window_ParamLimits

0x3062,	// (0x00011e11) popup_call_poc_inact_window

0xf594,	// (0x0001e343) bg_popup_call_poc_act_pane_g

0xbca3,	// (0x0001aa52) bg_popup_call_poc_inact_pane_g1

0xbcab,	// (0x0001aa5a) bg_popup_call_poc_inact_pane_g2

0xad38,	// (0x00019ae7) popup_call_poc_act_window_g2

0xbcb3,	// (0x0001aa62) bg_popup_call_poc_inact_pane_g3

0xbc33,	// (0x0001a9e2) bg_popup_call_poc_inact_pane_g4

0xbcbb,	// (0x0001aa6a) bg_popup_call_poc_inact_pane_g5

0xad40,	// (0x00019aef) popup_call_poc_act_window_t1_ParamLimits

0xad40,	// (0x00019aef) popup_call_poc_act_window_t1

0xad68,	// (0x00019b17) popup_call_poc_act_window_t2_ParamLimits

0xad68,	// (0x00019b17) popup_call_poc_act_window_t2

0xad90,	// (0x00019b3f) popup_call_poc_act_window_t3_ParamLimits

0xad90,	// (0x00019b3f) popup_call_poc_act_window_t3

0xadb8,	// (0x00019b67) popup_call_poc_act_window_t4_ParamLimits

0xadb8,	// (0x00019b67) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e2b1) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e2b1) popup_call_poc_act_window_t

0xbcc3,	// (0x0001aa72) bg_popup_call_poc_inact_pane_g6

0xbccb,	// (0x0001aa7a) bg_popup_call_poc_inact_pane_g7

0xbcd3,	// (0x0001aa82) bg_popup_call_poc_inact_pane_g8

0xadca,	// (0x00019b79) popup_call_poc_inact_window_g2

0xbcdb,	// (0x0001aa8a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0001e35a) bg_popup_call_poc_inact_pane_g

0xadd2,	// (0x00019b81) popup_call_poc_inact_window_t1_ParamLimits

0xadd2,	// (0x00019b81) popup_call_poc_inact_window_t1

0xade7,	// (0x00019b96) popup_call_poc_inact_window_t2_ParamLimits

0xade7,	// (0x00019b96) popup_call_poc_inact_window_t2

0xadfc,	// (0x00019bab) popup_call_poc_inact_window_t3_ParamLimits

0xadfc,	// (0x00019bab) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e2ba) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e2ba) popup_call_poc_inact_window_t

0xbe74,	// (0x0001ac23) context_pane_ParamLimits

0x388a,	// (0x00012639) signal_pane_ParamLimits

0x9e8b,	// (0x00018c3a) main_call2_pane

0xbe4d,	// (0x0001abfc) popup_phob_thumbnail2_window_ParamLimits

0xbe4d,	// (0x0001abfc) popup_phob_thumbnail2_window

0xab14,	// (0x000198c3) aid_hotspot_pointer_arrow_pane

0xab1c,	// (0x000198cb) aid_hotspot_pointer_hand_pane

0x33ac,	// (0x0001215b) phob_pre_status_pane_g5

0x10c5,	// (0x0000fe74) cams_zoom_pane_ParamLimits

0x10d4,	// (0x0000fe83) image_vga_pane_ParamLimits

0x10ee,	// (0x0000fe9d) main_camera_pane_g1_ParamLimits

0x1100,	// (0x0000feaf) main_camera_pane_g2_ParamLimits

0x1110,	// (0x0000febf) main_camera_pane_g3_ParamLimits

0x1120,	// (0x0000fecf) main_camera_pane_g4_ParamLimits

0x1130,	// (0x0000fedf) main_camera_pane_g5_ParamLimits

0x1140,	// (0x0000feef) main_camera_pane_g6_ParamLimits

0x1150,	// (0x0000feff) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001dfb9) main_camera_pane_g_ParamLimits

0x1160,	// (0x0000ff0f) main_camera_pane_t1_ParamLimits

0x1176,	// (0x0000ff25) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001dfca) main_camera_pane_t_ParamLimits

0x9b1f,	// (0x000188ce) bg_popup_preview_window_pane_cp01_ParamLimits

0x9b1f,	// (0x000188ce) bg_popup_preview_window_pane_cp01

0xae11,	// (0x00019bc0) popup_phob_thumbnail2_window_g1_ParamLimits

0xae11,	// (0x00019bc0) popup_phob_thumbnail2_window_g1

0x98c4,	// (0x00018673) call2_cli_visual_pane

0x3096,	// (0x00011e45) popup_call2_audio_conf_window_ParamLimits

0x3096,	// (0x00011e45) popup_call2_audio_conf_window

0x30b6,	// (0x00011e65) popup_call2_audio_first_window_ParamLimits

0x30b6,	// (0x00011e65) popup_call2_audio_first_window

0x314c,	// (0x00011efb) popup_call2_audio_in_window_ParamLimits

0x314c,	// (0x00011efb) popup_call2_audio_in_window

0x3194,	// (0x00011f43) popup_call2_audio_out_window_ParamLimits

0x3194,	// (0x00011f43) popup_call2_audio_out_window

0x31fe,	// (0x00011fad) popup_call2_audio_second_window_ParamLimits

0x31fe,	// (0x00011fad) popup_call2_audio_second_window

0x3264,	// (0x00012013) popup_call2_audio_wait_window_ParamLimits

0x3264,	// (0x00012013) popup_call2_audio_wait_window

0x98c4,	// (0x00018673) bg_popup_call2_act_pane_cp03

0x9b01,	// (0x000188b0) list_conf_pane_cp

0xae1d,	// (0x00019bcc) popup_call2_audio_conf_window_t1

0xae2b,	// (0x00019bda) list_single_graphic_popup_conf2_pane_ParamLimits

0xae2b,	// (0x00019bda) list_single_graphic_popup_conf2_pane

0xa694,	// (0x00019443) list_highlight_pane_cp04

0xae3e,	// (0x00019bed) list_single_graphic_popup_conf2_pane_g1

0xa6a5,	// (0x00019454) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e2c1) list_single_graphic_popup_conf2_pane_g

0xae48,	// (0x00019bf7) list_single_graphic_popup_conf2_pane_t1

0xae56,	// (0x00019c05) bg_popup_call2_act_pane_cp01_ParamLimits

0xae56,	// (0x00019c05) bg_popup_call2_act_pane_cp01

0xaee0,	// (0x00019c8f) call_type_pane_cp05_ParamLimits

0xaee0,	// (0x00019c8f) call_type_pane_cp05

0xaf34,	// (0x00019ce3) popup_call2_audio_second_window_g1_ParamLimits

0xaf34,	// (0x00019ce3) popup_call2_audio_second_window_g1

0xaf88,	// (0x00019d37) popup_call2_audio_second_window_g2_ParamLimits

0xaf88,	// (0x00019d37) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e2c6) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e2c6) popup_call2_audio_second_window_g

0xafed,	// (0x00019d9c) popup_call2_audio_second_window_t1_ParamLimits

0xafed,	// (0x00019d9c) popup_call2_audio_second_window_t1

0xb0a8,	// (0x00019e57) popup_call2_audio_second_window_t2_ParamLimits

0xb0a8,	// (0x00019e57) popup_call2_audio_second_window_t2

0xb0fb,	// (0x00019eaa) popup_call2_audio_second_window_t3_ParamLimits

0xb0fb,	// (0x00019eaa) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e2cd) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e2cd) popup_call2_audio_second_window_t

0x98c4,	// (0x00018673) bg_popup_call2_in_pane_cp02

0x98ce,	// (0x0001867d) call_type_pane_cp04

0x98d6,	// (0x00018685) popup_call2_audio_wait_window_g1

0x98de,	// (0x0001868d) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001dea8) popup_call2_audio_wait_window_g

0x98e6,	// (0x00018695) popup_call2_audio_wait_window_t3

0xb1ee,	// (0x00019f9d) bg_popup_call2_act_pane_ParamLimits

0xb1ee,	// (0x00019f9d) bg_popup_call2_act_pane

0xb2ae,	// (0x0001a05d) call_type_pane_cp03_ParamLimits

0xb2ae,	// (0x0001a05d) call_type_pane_cp03

0xb312,	// (0x0001a0c1) popup_call2_audio_first_window_g1_ParamLimits

0xb312,	// (0x0001a0c1) popup_call2_audio_first_window_g1

0xb382,	// (0x0001a131) popup_call2_audio_first_window_g2_ParamLimits

0xb382,	// (0x0001a131) popup_call2_audio_first_window_g2

0xaa36,	// (0x000197e5) popup_call2_audio_first_window_g3_ParamLimits

0xaa36,	// (0x000197e5) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e2d6) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e2d6) popup_call2_audio_first_window_g

0xb460,	// (0x0001a20f) popup_call2_audio_first_window_t1_ParamLimits

0xb460,	// (0x0001a20f) popup_call2_audio_first_window_t1

0xb563,	// (0x0001a312) popup_call2_audio_first_window_t4_ParamLimits

0xb563,	// (0x0001a312) popup_call2_audio_first_window_t4

0xb646,	// (0x0001a3f5) popup_call2_audio_first_window_t5_ParamLimits

0xb646,	// (0x0001a3f5) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e2e1) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e2e1) popup_call2_audio_first_window_t

0x9b17,	// (0x000188c6) bg_popup_call2_act_pane_g1

0xbcf3,	// (0x0001aaa2) popup_cale_lunar_info_window_t1

0xbd01,	// (0x0001aab0) popup_cale_lunar_info_window_t2

0xbd0f,	// (0x0001aabe) popup_cale_lunar_info_window_t3

0x98c4,	// (0x00018673) bg_popup_call2_bubble_pane

0xb747,	// (0x0001a4f6) bg_popup_call2_in_pane_cp01_ParamLimits

0xb747,	// (0x0001a4f6) bg_popup_call2_in_pane_cp01

0x95a0,	// (0x0001834f) call_type_pane_cp02

0xb78f,	// (0x0001a53e) popup_call2_audio_out_window_g1_ParamLimits

0xb78f,	// (0x0001a53e) popup_call2_audio_out_window_g1

0xb7bb,	// (0x0001a56a) popup_call2_audio_out_window_g2_ParamLimits

0xb7bb,	// (0x0001a56a) popup_call2_audio_out_window_g2

0xb7e3,	// (0x0001a592) popup_call2_audio_out_window_g3_ParamLimits

0xb7e3,	// (0x0001a592) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e2ea) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e2ea) popup_call2_audio_out_window_g

0xb81e,	// (0x0001a5cd) popup_call2_audio_out_window_t1_ParamLimits

0xb81e,	// (0x0001a5cd) popup_call2_audio_out_window_t1

0xb87d,	// (0x0001a62c) popup_call2_audio_out_window_t2_ParamLimits

0xb87d,	// (0x0001a62c) popup_call2_audio_out_window_t2

0xb8d1,	// (0x0001a680) popup_call2_audio_out_window_t3_ParamLimits

0xb8d1,	// (0x0001a680) popup_call2_audio_out_window_t3

0xb8e7,	// (0x0001a696) popup_call2_audio_out_window_t4_ParamLimits

0xb8e7,	// (0x0001a696) popup_call2_audio_out_window_t4

0xb8fd,	// (0x0001a6ac) popup_call2_audio_out_window_t5_ParamLimits

0xb8fd,	// (0x0001a6ac) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e2f3) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e2f3) popup_call2_audio_out_window_t

0xb961,	// (0x0001a710) bg_popup_call2_in_pane_ParamLimits

0xb961,	// (0x0001a710) bg_popup_call2_in_pane

0xb9bd,	// (0x0001a76c) popup_call2_audio_in_window_g1_ParamLimits

0xb9bd,	// (0x0001a76c) popup_call2_audio_in_window_g1

0xb9f5,	// (0x0001a7a4) popup_call2_audio_in_window_g2_ParamLimits

0xb9f5,	// (0x0001a7a4) popup_call2_audio_in_window_g2

0xba2d,	// (0x0001a7dc) popup_call2_audio_in_window_g3_ParamLimits

0xba2d,	// (0x0001a7dc) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e300) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e300) popup_call2_audio_in_window_g

0xba85,	// (0x0001a834) popup_call2_audio_in_window_t1_ParamLimits

0xba85,	// (0x0001a834) popup_call2_audio_in_window_t1

0xbb05,	// (0x0001a8b4) popup_call2_audio_in_window_t2_ParamLimits

0xbb05,	// (0x0001a8b4) popup_call2_audio_in_window_t2

0xbb85,	// (0x0001a934) popup_call2_audio_in_window_t3_ParamLimits

0xbb85,	// (0x0001a934) popup_call2_audio_in_window_t3

0xbb9f,	// (0x0001a94e) popup_call2_audio_in_window_t4_ParamLimits

0xbb9f,	// (0x0001a94e) popup_call2_audio_in_window_t4

0xbbb1,	// (0x0001a960) popup_call2_audio_in_window_t5_ParamLimits

0xbbb1,	// (0x0001a960) popup_call2_audio_in_window_t5

0xbbc6,	// (0x0001a975) popup_call2_audio_in_window_t6_ParamLimits

0xbbc6,	// (0x0001a975) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e309) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e309) popup_call2_audio_in_window_t

0x9b17,	// (0x000188c6) bg_popup_call2_in_pane_g1

0xbd1d,	// (0x0001aacc) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0001e384) popup_cale_lunar_info_window_t

0x9b1f,	// (0x000188ce) bg_popup_call2_rect_pane_ParamLimits

0x9b1f,	// (0x000188ce) bg_popup_call2_rect_pane

0x98c4,	// (0x00018673) call2_cli_visual_graphic_pane

0x98c4,	// (0x00018673) call2_cli_visual_text_pane

0xbf14,	// (0x0001acc3) smil_status_volume_pane_g3

0x0002,

0x9c8b,	// (0x00018a3a) call2_cli_visual_graphic_pane_g1

0x9c8b,	// (0x00018a3a) call2_cli_visual_graphic_pane_g2

0x9c8b,	// (0x00018a3a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e316) call2_cli_visual_graphic_pane_g

0xbbdb,	// (0x0001a98a) bg_popup_call2_rect_pane_g1

0x9d33,	// (0x00018ae2) bg_popup_call2_rect_pane_g2

0xbbe3,	// (0x0001a992) bg_popup_call2_rect_pane_g3

0xbbeb,	// (0x0001a99a) bg_popup_call2_rect_pane_g4

0xbbf3,	// (0x0001a9a2) bg_popup_call2_rect_pane_g5

0xbbfb,	// (0x0001a9aa) bg_popup_call2_rect_pane_g6

0xbc03,	// (0x0001a9b2) bg_popup_call2_rect_pane_g7

0xbc0b,	// (0x0001a9ba) bg_popup_call2_rect_pane_g8

0xbc13,	// (0x0001a9c2) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e31d) bg_popup_call2_rect_pane_g

0xbc1b,	// (0x0001a9ca) bg_popup_call2_bubble_pane_g1

0xbc23,	// (0x0001a9d2) bg_popup_call2_bubble_pane_g2

0xbc2b,	// (0x0001a9da) bg_popup_call2_bubble_pane_g3

0xbc33,	// (0x0001a9e2) bg_popup_call2_bubble_pane_g4

0xbc3b,	// (0x0001a9ea) bg_popup_call2_bubble_pane_g5

0xbc43,	// (0x0001a9f2) bg_popup_call2_bubble_pane_g6

0xbc4b,	// (0x0001a9fa) bg_popup_call2_bubble_pane_g7

0xbc53,	// (0x0001aa02) bg_popup_call2_bubble_pane_g8

0xbc5b,	// (0x0001aa0a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e330) bg_popup_call2_bubble_pane_g

0x0afd,	// (0x0000f8ac) aid_cale_week_size_cell_pane

0x118c,	// (0x0000ff3b) aid_cams_cif_uncrop_pane_ParamLimits

0x118c,	// (0x0000ff3b) aid_cams_cif_uncrop_pane

0x1341,	// (0x000100f0) aid_cams_size_cell_ParamLimits

0x1341,	// (0x000100f0) aid_cams_size_cell

0x1355,	// (0x00010104) grid_cams_pane_ParamLimits

0x136f,	// (0x0001011e) linegrid_cams_pane_ParamLimits

0x156c,	// (0x0001031b) call_video_pane_t1

0x158a,	// (0x00010339) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001e01d) call_video_pane_t

0x19b0,	// (0x0001075f) aid_cale_month_size_cell_pane_ParamLimits

0x19b0,	// (0x0001075f) aid_cale_month_size_cell_pane

0xf61e,	// (0x0001e3cd) smil_status_volume_pane_g

0xbf21,	// (0x0001acd0) volume_smil_pane_ParamLimits

0x9445,	// (0x000181f4) aid_popup2_width_pane

0x0a81,	// (0x0000f830) cell_qdial_pane_g4_ParamLimits

0x0a81,	// (0x0000f830) cell_qdial_pane_g4

0x2691,	// (0x00011440) aid_blid_cardinal_pane_ParamLimits

0x269d,	// (0x0001144c) aid_blid_destination_pane_ParamLimits

0x269d,	// (0x0001144c) aid_blid_destination_pane

0x9b1f,	// (0x000188ce) bg_popup_call_poc_act_pane_ParamLimits

0x9b1f,	// (0x000188ce) bg_popup_call_poc_act_pane

0x9b1f,	// (0x000188ce) bg_popup_call_poc_inact_pane_ParamLimits

0x9b1f,	// (0x000188ce) bg_popup_call_poc_inact_pane

0xbc63,	// (0x0001aa12) bg_popup_call_poc_act_pane_g1

0xbc6b,	// (0x0001aa1a) bg_popup_call_poc_act_pane_g2

0xbc73,	// (0x0001aa22) bg_popup_call_poc_act_pane_g3

0xbc33,	// (0x0001a9e2) bg_popup_call_poc_act_pane_g4

0xbc3b,	// (0x0001a9ea) bg_popup_call_poc_act_pane_g5

0xbc7b,	// (0x0001aa2a) bg_popup_call_poc_act_pane_g6

0xbc4b,	// (0x0001a9fa) bg_popup_call_poc_act_pane_g7

0xbc83,	// (0x0001aa32) bg_popup_call_poc_act_pane_g8

0x98c4,	// (0x00018673) main_usb_pane

0xbe28,	// (0x0001abd7) popup_cale_lunar_info_window

0x1856,	// (0x00010605) im_reading_pane_t1_ParamLimits

0x9f96,	// (0x00018d45) list_im_pane_ParamLimits

0x9fa7,	// (0x00018d56) scroll_pane_cp07_ParamLimits

0x98c4,	// (0x00018673) grid_highlight_pane_cp012

0x9b1f,	// (0x000188ce) mup_scale_pane_ParamLimits

0xab64,	// (0x00019913) main_usb_pane_g1_ParamLimits

0xab64,	// (0x00019913) main_usb_pane_g1

0x32c1,	// (0x00012070) main_usb_pane_g2_ParamLimits

0x32c1,	// (0x00012070) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0001e36d) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0001e36d) main_usb_pane_g

0x32d7,	// (0x00012086) main_usb_pane_t1_ParamLimits

0x32d7,	// (0x00012086) main_usb_pane_t1

0x32e9,	// (0x00012098) main_usb_pane_t2_ParamLimits

0x32e9,	// (0x00012098) main_usb_pane_t2

0x32fb,	// (0x000120aa) main_usb_pane_t3_ParamLimits

0x32fb,	// (0x000120aa) main_usb_pane_t3

0x330d,	// (0x000120bc) main_usb_pane_t4_ParamLimits

0x330d,	// (0x000120bc) main_usb_pane_t4

0x331f,	// (0x000120ce) main_usb_pane_t5_ParamLimits

0x331f,	// (0x000120ce) main_usb_pane_t5

0x3331,	// (0x000120e0) main_usb_pane_t6_ParamLimits

0x3331,	// (0x000120e0) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0001e372) main_usb_pane_t_ParamLimits

0x2640,	// (0x000113ef) aid_text_placing

0x2649,	// (0x000113f8) main_location2_pane_t1_ParamLimits

0x265b,	// (0x0001140a) main_location2_pane_t2_ParamLimits

0x266d,	// (0x0001141c) main_location2_pane_t3_ParamLimits

0x267f,	// (0x0001142e) main_location2_pane_t4_ParamLimits

0x267f,	// (0x0001142e) main_location2_pane_t4

0xf3cf,	// (0x0001e17e) main_location2_pane_t_ParamLimits

0x9b5b,	// (0x0001890a) find_pinb_pane_g2_ParamLimits

0x9b5b,	// (0x0001890a) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001dece) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001dece) find_pinb_pane_g

0x9b67,	// (0x00018916) find_pinb_pane_t1_ParamLimits

0x9b79,	// (0x00018928) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001ded3) find_pinb_pane_t_ParamLimits

0x98c4,	// (0x00018673) main_call3_pane

0x1e97,	// (0x00010c46) cale_month_day_heading_pane_t1_ParamLimits

0x1ed9,	// (0x00010c88) cale_month_day_heading_pane_t2_ParamLimits

0x1f0e,	// (0x00010cbd) cale_month_day_heading_pane_t3_ParamLimits

0x1f43,	// (0x00010cf2) cale_month_day_heading_pane_t4_ParamLimits

0x1f80,	// (0x00010d2f) cale_month_day_heading_pane_t5_ParamLimits

0x1fc5,	// (0x00010d74) cale_month_day_heading_pane_t6_ParamLimits

0x200a,	// (0x00010db9) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001e055) cale_month_day_heading_pane_t_ParamLimits

0xa1fd,	// (0x00018fac) smil_status_volume_pane

0x2dba,	// (0x00011b69) postcard_address_pane_ParamLimits

0x2dba,	// (0x00011b69) postcard_address_pane

0x2dcc,	// (0x00011b7b) postcard_message_pane_ParamLimits

0x2dcc,	// (0x00011b7b) postcard_message_pane

0x329e,	// (0x0001204d) call2_cli_visual_pane_t1_ParamLimits

0x329e,	// (0x0001204d) call2_cli_visual_pane_t1

0x3ab9,	// (0x00012868) postcard_message_pane_t1_ParamLimits

0x3ab9,	// (0x00012868) postcard_message_pane_t1

0x3aa2,	// (0x00012851) postcard_address_pane_t1_ParamLimits

0x3aa2,	// (0x00012851) postcard_address_pane_t1

0x3a8e,	// (0x0001283d) popup_call3_audio_in_window_ParamLimits

0x3a8e,	// (0x0001283d) popup_call3_audio_in_window

0x3919,	// (0x000126c8) bg_popup_call3_in_pane_ParamLimits

0x3919,	// (0x000126c8) bg_popup_call3_in_pane

0x398f,	// (0x0001273e) popup_call3_audio_in_window_g1_ParamLimits

0x398f,	// (0x0001273e) popup_call3_audio_in_window_g1

0x39af,	// (0x0001275e) popup_call3_audio_in_window_g2_ParamLimits

0x39af,	// (0x0001275e) popup_call3_audio_in_window_g2

0x39cf,	// (0x0001277e) popup_call3_audio_in_window_g3_ParamLimits

0x39cf,	// (0x0001277e) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0001e3d4) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0001e3d4) popup_call3_audio_in_window_g

0x3a00,	// (0x000127af) popup_call3_audio_in_window_t1_ParamLimits

0x3a00,	// (0x000127af) popup_call3_audio_in_window_t1

0x3a3e,	// (0x000127ed) popup_call3_audio_in_window_t2_ParamLimits

0x3a3e,	// (0x000127ed) popup_call3_audio_in_window_t2

0x3a7c,	// (0x0001282b) popup_call3_audio_in_window_t3_ParamLimits

0x3a7c,	// (0x0001282b) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0001e3dd) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0001e3dd) popup_call3_audio_in_window_t

0x9e8b,	// (0x00018c3a) bg_popup_call3_rect_pane

0xbbdb,	// (0x0001a98a) bg_popup_call3_rect_pane_g1

0x9d33,	// (0x00018ae2) bg_popup_call3_rect_pane_g2

0xbbe3,	// (0x0001a992) bg_popup_call3_rect_pane_g3

0xbbeb,	// (0x0001a99a) bg_popup_call3_rect_pane_g4

0xbbf3,	// (0x0001a9a2) bg_popup_call3_rect_pane_g5

0xbbfb,	// (0x0001a9aa) bg_popup_call3_rect_pane_g6

0xbc03,	// (0x0001a9b2) bg_popup_call3_rect_pane_g7

0x2977,	// (0x00011726) mup_visualizer_osc_pane

0xaa44,	// (0x000197f3) mup_visualizer_spec_pane

0x3949,	// (0x000126f8) call3_video_qcif_pane_ParamLimits

0x3949,	// (0x000126f8) call3_video_qcif_pane

0x395c,	// (0x0001270b) call3_video_qcif_uncrop_pane_ParamLimits

0x395c,	// (0x0001270b) call3_video_qcif_uncrop_pane

0x396a,	// (0x00012719) call3_video_subqcif_pane_ParamLimits

0x396a,	// (0x00012719) call3_video_subqcif_pane

0x397e,	// (0x0001272d) call3_video_subqcif_uncrop_pane_ParamLimits

0x397e,	// (0x0001272d) call3_video_subqcif_uncrop_pane

0x39ef,	// (0x0001279e) popup_call3_audio_in_window_g4_ParamLimits

0x39ef,	// (0x0001279e) popup_call3_audio_in_window_g4

0x3908,	// (0x000126b7) mup_spec_half_pane

0x3911,	// (0x000126c0) mup_spec_half_pane_cp

0xbed4,	// (0x0001ac83) mup_osc_middle_pane

0xbedd,	// (0x0001ac8c) mup_visualizer_osc_pane_g1

0x38e8,	// (0x00012697) mup_spec_bar_pane_ParamLimits

0x38e8,	// (0x00012697) mup_spec_bar_pane

0xbec1,	// (0x0001ac70) mup_spec_bar_pane_g1

0xbecb,	// (0x0001ac7a) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0001e3c8) mup_spec_bar_pane_g

0x0afd,	// (0x0000f8ac) aid_cale_week_size_cell_pane_ParamLimits

0x0b17,	// (0x0000f8c6) bg_cale_heading_pane_ParamLimits

0x9de4,	// (0x00018b93) bg_cale_pane_cp01_ParamLimits

0x0b2f,	// (0x0000f8de) cale_week_corner_pane_ParamLimits

0x0b4e,	// (0x0000f8fd) cale_week_day_heading_pane_ParamLimits

0x0b6b,	// (0x0000f91a) cale_week_scroll_pane_g1_ParamLimits

0x0b7e,	// (0x0000f92d) cale_week_scroll_pane_g2_ParamLimits

0x0b96,	// (0x0000f945) cale_week_scroll_pane_g3_ParamLimits

0x0bae,	// (0x0000f95d) cale_week_scroll_pane_g4_ParamLimits

0x0bc6,	// (0x0000f975) cale_week_scroll_pane_g5_ParamLimits

0x0be6,	// (0x0000f995) cale_week_scroll_pane_g6_ParamLimits

0x0c06,	// (0x0000f9b5) cale_week_scroll_pane_g7_ParamLimits

0x0c26,	// (0x0000f9d5) cale_week_scroll_pane_g8_ParamLimits

0x0c4a,	// (0x0000f9f9) cale_week_scroll_pane_g9_ParamLimits

0x0c62,	// (0x0000fa11) cale_week_scroll_pane_g10_ParamLimits

0x0c7a,	// (0x0000fa29) cale_week_scroll_pane_g11_ParamLimits

0x0c92,	// (0x0000fa41) cale_week_scroll_pane_g12_ParamLimits

0x0caa,	// (0x0000fa59) cale_week_scroll_pane_g13_ParamLimits

0x0caa,	// (0x0000fa59) cale_week_scroll_pane_g14_ParamLimits

0x0caa,	// (0x0000fa59) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001df5f) cale_week_scroll_pane_g_ParamLimits

0x0ce6,	// (0x0000fa95) cale_week_time_pane_ParamLimits

0x0d0a,	// (0x0000fab9) grid_cale_week_pane_ParamLimits

0x9e01,	// (0x00018bb0) listscroll_cale_week_pane_t1

0x9e13,	// (0x00018bc2) scroll_pane_cp08_ParamLimits

0x1a10,	// (0x000107bf) cale_month_corner_pane_ParamLimits

0xa1c7,	// (0x00018f76) cale_month_pane_t1

0x1e2a,	// (0x00010bd9) cale_month_week_pane_ParamLimits

0x2471,	// (0x00011220) popup_call_status_window_g1_ParamLimits

0x2485,	// (0x00011234) popup_call_status_window_g2_ParamLimits

0x2499,	// (0x00011248) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e105) popup_call_status_window_g_ParamLimits

0xa5a5,	// (0x00019354) aid_call2_pane

0x2bee,	// (0x0001199d) msg_header_pane_g1

0x2dba,	// (0x00011b69) postcard_address2_pane_ParamLimits

0x2dba,	// (0x00011b69) postcard_address2_pane

0x2dcc,	// (0x00011b7b) postcard_message2_pane_ParamLimits

0x2dcc,	// (0x00011b7b) postcard_message2_pane

0x3898,	// (0x00012647) message2_row_pane_ParamLimits

0x3898,	// (0x00012647) message2_row_pane

0x38b5,	// (0x00012664) address2_row_pane_ParamLimits

0x38b5,	// (0x00012664) address2_row_pane

0xbe8f,	// (0x0001ac3e) postcard_message2_row_pane_g1

0xbe97,	// (0x0001ac46) postcard_message2_row_pane_t1

0xbe8f,	// (0x0001ac3e) address2_row_pane_g1

0xbe97,	// (0x0001ac46) address2_row_pane_t1

0x1044,	// (0x0000fdf3) aid_size_cell_vorec

0x98c4,	// (0x00018673) main_rss_pane

0x38c8,	// (0x00012677) rss_list_single_pane_ParamLimits

0x38c8,	// (0x00012677) rss_list_single_pane

0xbea5,	// (0x0001ac54) rss_list_single_pane_t1

0xbeb3,	// (0x0001ac62) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0001e3c3) rss_list_single_pane_t

0x98c4,	// (0x00018673) main_camera2_pane

0x98c4,	// (0x00018673) main_video2_pane

0x3b32,	// (0x000128e1) cams_zoom_pane_cp2_ParamLimits

0x3b32,	// (0x000128e1) cams_zoom_pane_cp2

0x3b52,	// (0x00012901) image2_vga_pane_ParamLimits

0x3b52,	// (0x00012901) image2_vga_pane

0x3ba3,	// (0x00012952) main_camera2_pane_g1_ParamLimits

0x3ba3,	// (0x00012952) main_camera2_pane_g1

0x3bc3,	// (0x00012972) main_camera2_pane_g2_ParamLimits

0x3bc3,	// (0x00012972) main_camera2_pane_g2

0x3be3,	// (0x00012992) main_camera2_pane_g3_ParamLimits

0x3be3,	// (0x00012992) main_camera2_pane_g3

0x3c03,	// (0x000129b2) main_camera2_pane_g4_ParamLimits

0x3c03,	// (0x000129b2) main_camera2_pane_g4

0x3c23,	// (0x000129d2) main_camera2_pane_g5_ParamLimits

0x3c23,	// (0x000129d2) main_camera2_pane_g5

0x3c43,	// (0x000129f2) main_camera2_pane_g6_ParamLimits

0x3c43,	// (0x000129f2) main_camera2_pane_g6

0x3c63,	// (0x00012a12) main_camera2_pane_g7_ParamLimits

0x3c63,	// (0x00012a12) main_camera2_pane_g7

0x3c83,	// (0x00012a32) main_camera2_pane_g8_ParamLimits

0x3c83,	// (0x00012a32) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0001e3e4) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0001e3e4) main_camera2_pane_g

0x3cc3,	// (0x00012a72) main_camera2_pane_t1_ParamLimits

0x3cc3,	// (0x00012a72) main_camera2_pane_t1

0x3cf8,	// (0x00012aa7) main_camera2_pane_t2_ParamLimits

0x3cf8,	// (0x00012aa7) main_camera2_pane_t2

0x3d1e,	// (0x00012acd) main_camera2_pane_t3_ParamLimits

0x3d1e,	// (0x00012acd) main_camera2_pane_t3

0x3d7c,	// (0x00012b2b) main_camera2_pane_t4_ParamLimits

0x3d7c,	// (0x00012b2b) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0001e3f7) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0001e3f7) main_camera2_pane_t

0x3e0e,	// (0x00012bbd) cams_zoom_pane_cp4_ParamLimits

0x3e0e,	// (0x00012bbd) cams_zoom_pane_cp4

0x3e24,	// (0x00012bd3) image2_cif_pane_ParamLimits

0x3e24,	// (0x00012bd3) image2_cif_pane

0x3e4f,	// (0x00012bfe) image2_subqcif_pane_ParamLimits

0x3e4f,	// (0x00012bfe) image2_subqcif_pane

0x3e69,	// (0x00012c18) main_video2_pane_g1_ParamLimits

0x3e69,	// (0x00012c18) main_video2_pane_g1

0x3e83,	// (0x00012c32) main_video2_pane_g2_ParamLimits

0x3e83,	// (0x00012c32) main_video2_pane_g2

0x3e99,	// (0x00012c48) main_video2_pane_g3_ParamLimits

0x3e99,	// (0x00012c48) main_video2_pane_g3

0x3eaf,	// (0x00012c5e) main_video2_pane_g4_ParamLimits

0x3eaf,	// (0x00012c5e) main_video2_pane_g4

0x3ec5,	// (0x00012c74) main_video2_pane_g5_ParamLimits

0x3ec5,	// (0x00012c74) main_video2_pane_g5

0x3edb,	// (0x00012c8a) main_video2_pane_g6_ParamLimits

0x3edb,	// (0x00012c8a) main_video2_pane_g6

0x0005,

0xf657,	// (0x0001e406) main_video2_pane_g_ParamLimits

0xf657,	// (0x0001e406) main_video2_pane_g

0x3ef5,	// (0x00012ca4) main_video2_pane_t1_ParamLimits

0x3ef5,	// (0x00012ca4) main_video2_pane_t1

0x3f19,	// (0x00012cc8) main_video2_pane_t2_ParamLimits

0x3f19,	// (0x00012cc8) main_video2_pane_t2

0x3f67,	// (0x00012d16) main_video2_pane_t3_ParamLimits

0x3f67,	// (0x00012d16) main_video2_pane_t3

0x0002,

0xf664,	// (0x0001e413) main_video2_pane_t_ParamLimits

0xf664,	// (0x0001e413) main_video2_pane_t

0x33ec,	// (0x0001219b) call_muted_g2

0x0001,

0xf606,	// (0x0001e3b5) call_muted_g

0x98c4,	// (0x00018673) main_mup2_pane

0x3faf,	// (0x00012d5e) main_mup2_pane_g1_ParamLimits

0x3faf,	// (0x00012d5e) main_mup2_pane_g1

0x3fbb,	// (0x00012d6a) main_mup2_pane_g2_ParamLimits

0x3fbb,	// (0x00012d6a) main_mup2_pane_g2

0xc045,	// (0x0001adf4) main_mup_pane_g13_cp1

0xc04d,	// (0x0001adfc) mup_volume_pane_cp1

0x3fd7,	// (0x00012d86) main_mup2_pane_g4_ParamLimits

0x3fd7,	// (0x00012d86) main_mup2_pane_g4

0x3fe9,	// (0x00012d98) main_mup2_pane_g5_ParamLimits

0x3fe9,	// (0x00012d98) main_mup2_pane_g5

0x3ffb,	// (0x00012daa) main_mup2_pane_g6_ParamLimits

0x3ffb,	// (0x00012daa) main_mup2_pane_g6

0x400d,	// (0x00012dbc) main_mup2_pane_g7_ParamLimits

0x400d,	// (0x00012dbc) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0001e41a) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0001e41a) main_mup2_pane_g

0x4025,	// (0x00012dd4) main_mup2_pane_t1_ParamLimits

0x4025,	// (0x00012dd4) main_mup2_pane_t1

0x403b,	// (0x00012dea) main_mup2_pane_t2_ParamLimits

0x403b,	// (0x00012dea) main_mup2_pane_t2

0x4051,	// (0x00012e00) main_mup2_pane_t3_ParamLimits

0x4051,	// (0x00012e00) main_mup2_pane_t3

0x4067,	// (0x00012e16) main_mup2_pane_t4_ParamLimits

0x4067,	// (0x00012e16) main_mup2_pane_t4

0x407f,	// (0x00012e2e) main_mup2_pane_t5_ParamLimits

0x407f,	// (0x00012e2e) main_mup2_pane_t5

0x4097,	// (0x00012e46) main_mup2_pane_t6_ParamLimits

0x4097,	// (0x00012e46) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0001e429) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0001e429) main_mup2_pane_t

0x40c7,	// (0x00012e76) mup2_visualizer_pane_ParamLimits

0x40c7,	// (0x00012e76) mup2_visualizer_pane

0x40f5,	// (0x00012ea4) mup_progress_pane_cp_ParamLimits

0x40f5,	// (0x00012ea4) mup_progress_pane_cp

0xc027,	// (0x0001add6) mup_volume_pane_cp_ParamLimits

0xc027,	// (0x0001add6) mup_volume_pane_cp

0x4109,	// (0x00012eb8) mup2_visualizer_pane_g1_ParamLimits

0x4109,	// (0x00012eb8) mup2_visualizer_pane_g1

0xbf66,	// (0x0001ad15) mup2_visualizer_pane_g2_ParamLimits

0xbf66,	// (0x0001ad15) mup2_visualizer_pane_g2

0x4120,	// (0x00012ecf) mup2_visualizer_pane_g3_ParamLimits

0x4120,	// (0x00012ecf) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0001e436) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0001e436) mup2_visualizer_pane_g

0xacad,	// (0x00019a5c) aid_size_cell_fmradio

0x359e,	// (0x0001234d) aid_height_parent_landcape

0xa025,	// (0x00018dd4) wml_content_pane_cp

0xa02d,	// (0x00018ddc) wml_tabs_pane

0xa036,	// (0x00018de5) popup_wml_miniature_window

0xa03e,	// (0x00018ded) scroll_pane_cp021

0xa052,	// (0x00018e01) wml_content_pane_comp8

0x98c4,	// (0x00018673) bg_popup_sub_pane_cp05

0xbf84,	// (0x0001ad33) popup_wml_miniature_window_g1

0xbf8c,	// (0x0001ad3b) wml_miniature_view_pane

0x412c,	// (0x00012edb) aid_size_wml_view

0x4134,	// (0x00012ee3) wml_miniature_view_pane_g1

0x413d,	// (0x00012eec) wml_miniature_view_pane_g2

0x4146,	// (0x00012ef5) wml_miniature_view_pane_g3

0x414e,	// (0x00012efd) wml_miniature_view_pane_g4

0x4156,	// (0x00012f05) wml_miniature_view_pane_g5

0x415e,	// (0x00012f0d) wml_miniature_view_pane_g6

0x4166,	// (0x00012f15) wml_miniature_view_pane_g7

0x416e,	// (0x00012f1d) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0001e43d) wml_miniature_view_pane_g

0xbf94,	// (0x0001ad43) background_graphic_ParamLimits

0xbf94,	// (0x0001ad43) background_graphic

0xbfa0,	// (0x0001ad4f) wml_tabs_2_pane

0xbfa9,	// (0x0001ad58) wml_tabs_3_pane_ParamLimits

0xbfa9,	// (0x0001ad58) wml_tabs_3_pane

0xbfbb,	// (0x0001ad6a) wml_tabs_4_pane_ParamLimits

0xbfbb,	// (0x0001ad6a) wml_tabs_4_pane

0xbfd1,	// (0x0001ad80) wml_tabs_5_pane_ParamLimits

0xbfd1,	// (0x0001ad80) wml_tabs_5_pane

0xbfeb,	// (0x0001ad9a) wml_tabs_pane_g2_ParamLimits

0xbfeb,	// (0x0001ad9a) wml_tabs_pane_g2

0xbfff,	// (0x0001adae) wml_tabs_pane_g3_ParamLimits

0xbfff,	// (0x0001adae) wml_tabs_pane_g3

0x4176,	// (0x00012f25) wml_tabs_2_active_pane_ParamLimits

0x4176,	// (0x00012f25) wml_tabs_2_active_pane

0x418a,	// (0x00012f39) wml_tabs_2_passive_pane_ParamLimits

0x418a,	// (0x00012f39) wml_tabs_2_passive_pane

0x419e,	// (0x00012f4d) wml_tabs_3_active_pane_cp_ParamLimits

0x419e,	// (0x00012f4d) wml_tabs_3_active_pane_cp

0x41b3,	// (0x00012f62) wml_tabs_3_passive_pane_ParamLimits

0x41b3,	// (0x00012f62) wml_tabs_3_passive_pane

0x41c6,	// (0x00012f75) wml_tabs_3_passive_pane_cp_ParamLimits

0x41c6,	// (0x00012f75) wml_tabs_3_passive_pane_cp

0x41dd,	// (0x00012f8c) tabs_4_active_pane

0x41e5,	// (0x00012f94) tabs_4_passive_pane

0x41ef,	// (0x00012f9e) tabs_4_passive_pane_cp

0x41f7,	// (0x00012fa6) tabs_4_passive_pane_cp2

0x32b9,	// (0x00012068) aid_height_text

0x2949,	// (0x000116f8) mup_volume_cont_pane_ParamLimits

0x2949,	// (0x000116f8) mup_volume_cont_pane

0x0722,	// (0x0000f4d1) aid_size_cell_pinb

0x072c,	// (0x0000f4db) aid_size_list_pinb

0x40e1,	// (0x00012e90) mup2_volume_cont_pane_ParamLimits

0x40e1,	// (0x00012e90) mup2_volume_cont_pane

0xc013,	// (0x0001adc2) mup2_volume_cont_pane_g1_ParamLimits

0xc013,	// (0x0001adc2) mup2_volume_cont_pane_g1

0x03e4,	// (0x0000f193) aid_size_cell_touch_ParamLimits

0x03e4,	// (0x0000f193) aid_size_cell_touch

0x0611,	// (0x0000f3c0) touch_pane_ParamLimits

0x0611,	// (0x0000f3c0) touch_pane

0x9433,	// (0x000181e2) main_rss2_pane

0xc055,	// (0x0001ae04) listscroll_rss2_pane

0xc05e,	// (0x0001ae0d) rss2_navigation_pane

0xc066,	// (0x0001ae15) list_rss2_pane

0xa739,	// (0x000194e8) scroll_pane_cp22

0xc06e,	// (0x0001ae1d) rss2_navigation_pane_g1

0xc077,	// (0x0001ae26) rss2_navigation_pane_g2

0xc07f,	// (0x0001ae2e) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0001e44e) rss2_navigation_pane_g

0xc087,	// (0x0001ae36) rss2_navigation_pane_t1

0x4201,	// (0x00012fb0) rss2_list_single_pane_ParamLimits

0x4201,	// (0x00012fb0) rss2_list_single_pane

0xc095,	// (0x0001ae44) rss2_list_single_pane_t2

0xc0a3,	// (0x0001ae52) rss2_list_single_pane_t3_ParamLimits

0xc0a3,	// (0x0001ae52) rss2_list_single_pane_t3

0xc0c0,	// (0x0001ae6f) rss2_list_single_pane_t4

0x227c,	// (0x0001102b) smil_status_pane_g1

0x94a3,	// (0x00018252) main_image2_pane_ParamLimits

0x94a3,	// (0x00018252) main_image2_pane

0x3ca3,	// (0x00012a52) main_camera2_pane_g9_ParamLimits

0x3ca3,	// (0x00012a52) main_camera2_pane_g9

0x3dd1,	// (0x00012b80) main_camera2_pane_t5_ParamLimits

0x3dd1,	// (0x00012b80) main_camera2_pane_t5

0xbf36,	// (0x0001ace5) main_camera2_pane_t6_ParamLimits

0xbf36,	// (0x0001ace5) main_camera2_pane_t6

0x4217,	// (0x00012fc6) main_image2_pane_g1_ParamLimits

0x4217,	// (0x00012fc6) main_image2_pane_g1

0x2ff4,	// (0x00011da3) smil2_video_pane_ParamLimits

0x2ff4,	// (0x00011da3) smil2_video_pane

0x9451,	// (0x00018200) aid_zoom_text_primary_cp

0x9499,	// (0x00018248) popup_preview_fixed_window

0x9f8e,	// (0x00018d3d) im_reading_pane_g1

0x3b1a,	// (0x000128c9) cams2_bc_adjust_pane_cp_ParamLimits

0x3b1a,	// (0x000128c9) cams2_bc_adjust_pane_cp

0x3e00,	// (0x00012baf) cams2_bc_adjust_pane_ParamLimits

0x3e00,	// (0x00012baf) cams2_bc_adjust_pane

0xc0ce,	// (0x0001ae7d) cams2_bc_adjust_pane_g1

0xc0d6,	// (0x0001ae85) cams2_slider_pane

0xc0df,	// (0x0001ae8e) cams2_slider_pane_g1

0xc0e8,	// (0x0001ae97) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0001e455) cams2_slider_pane_g

0x0814,	// (0x0000f5c3) calc_display_pane_ParamLimits

0x083c,	// (0x0000f5eb) calc_paper_pane_ParamLimits

0x085f,	// (0x0000f60e) grid_calc_pane_ParamLimits

0xa607,	// (0x000193b6) popup_clock_digital_window_t1_ParamLimits

0xac4a,	// (0x000199f9) main_image_pane_t1

0x07f6,	// (0x0000f5a5) aid_size_cell_calc_ParamLimits

0x07f6,	// (0x0000f5a5) aid_size_cell_calc

0x35e4,	// (0x00012393) popup_blid_sat_info2_window_ParamLimits

0x35e4,	// (0x00012393) popup_blid_sat_info2_window

0xc10a,	// (0x0001aeb9) aid_size_cell_blid

0xc112,	// (0x0001aec1) bg_popup_window_pane_cp07

0xc135,	// (0x0001aee4) grid_popup_blid_pane

0xc13f,	// (0x0001aeee) heading_pane_cp05_ParamLimits

0xc13f,	// (0x0001aeee) heading_pane_cp05

0xc209,	// (0x0001afb8) cell_popup_blid_pane_ParamLimits

0xc209,	// (0x0001afb8) cell_popup_blid_pane

0xc22d,	// (0x0001afdc) cell_popup_blid_pane_g1

0xc235,	// (0x0001afe4) cell_popup_blid_pane_t1

0x40b1,	// (0x00012e60) mup2_indicator_pane_ParamLimits

0x40b1,	// (0x00012e60) mup2_indicator_pane

0x9e8b,	// (0x00018c3a) mup2_visualizer_osc_pane

0xbf72,	// (0x0001ad21) mup2_visualizer_spec_pane_ParamLimits

0xbf72,	// (0x0001ad21) mup2_visualizer_spec_pane

0x422d,	// (0x00012fdc) mup2_spec_half_pane

0x4236,	// (0x00012fe5) mup2_spec_half_pane_cp

0x423e,	// (0x00012fed) mup2_spec_bar_pane_ParamLimits

0x423e,	// (0x00012fed) mup2_spec_bar_pane

0xbec1,	// (0x0001ac70) mup2_spec_bar_pane_g1

0xbecb,	// (0x0001ac7a) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0001e3c8) mup2_spec_bar_pane_g

0x425e,	// (0x0001300d) mup2_osc_middle_pane

0xbedd,	// (0x0001ac8c) mup2_visualizer_osc_pane_g1

0x94d1,	// (0x00018280) popup_number_entry_window_t1_ParamLimits

0x94e4,	// (0x00018293) popup_number_entry_window_t2_ParamLimits

0x94f6,	// (0x000182a5) popup_number_entry_window_t3_ParamLimits

0x0663,	// (0x0000f412) popup_number_entry_window_t5_ParamLimits

0x0663,	// (0x0000f412) popup_number_entry_window_t5

0xf0ca,	// (0x0001de79) popup_number_entry_window_t_ParamLimits

0x9508,	// (0x000182b7) text_title_cp2_ParamLimits

0xab24,	// (0x000198d3) aid_hotspot_pointer_text2_pane

0xab4a,	// (0x000198f9) main_viewer_pane_g9_ParamLimits

0xab4a,	// (0x000198f9) main_viewer_pane_g9

0xa1c7,	// (0x00018f76) cale_month_pane_t1_ParamLimits

0xa232,	// (0x00018fe1) bg_cale_pane_ParamLimits

0xa24a,	// (0x00018ff9) list_cale_pane_ParamLimits

0xa25b,	// (0x0001900a) listscroll_cale_day_pane_t1

0xa26d,	// (0x0001901c) scroll_pane_cp09_ParamLimits

0x297f,	// (0x0001172e) main_mup_eq_pane_t1_ParamLimits

0x297f,	// (0x0001172e) main_mup_eq_pane_t1

0x2999,	// (0x00011748) main_mup_eq_pane_t2_ParamLimits

0x2999,	// (0x00011748) main_mup_eq_pane_t2

0x29b3,	// (0x00011762) main_mup_eq_pane_t3_ParamLimits

0x29b3,	// (0x00011762) main_mup_eq_pane_t3

0x29cf,	// (0x0001177e) main_mup_eq_pane_t4_ParamLimits

0x29cf,	// (0x0001177e) main_mup_eq_pane_t4

0x29eb,	// (0x0001179a) main_mup_eq_pane_t5_ParamLimits

0x29eb,	// (0x0001179a) main_mup_eq_pane_t5

0x2a07,	// (0x000117b6) main_mup_eq_pane_t6_ParamLimits

0x2a07,	// (0x000117b6) main_mup_eq_pane_t6

0x2a1b,	// (0x000117ca) main_mup_eq_pane_t7_ParamLimits

0x2a1b,	// (0x000117ca) main_mup_eq_pane_t7

0x2a2f,	// (0x000117de) main_mup_eq_pane_t8_ParamLimits

0x2a2f,	// (0x000117de) main_mup_eq_pane_t8

0x2a43,	// (0x000117f2) main_mup_eq_pane_t9_ParamLimits

0x2a43,	// (0x000117f2) main_mup_eq_pane_t9

0x2a5d,	// (0x0001180c) main_mup_eq_pane_t10_ParamLimits

0x2a5d,	// (0x0001180c) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e204) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e204) main_mup_eq_pane_t

0x2b0c,	// (0x000118bb) mup_equalizer_pane_cp5_ParamLimits

0x2b20,	// (0x000118cf) mup_equalizer_pane_cp6_ParamLimits

0x2b34,	// (0x000118e3) mup_equalizer_pane_cp7_ParamLimits

0x9433,	// (0x000181e2) main_gallery_pane

0xbee6,	// (0x0001ac95) smil2_volume_pane

0xbeee,	// (0x0001ac9d) smil_status_volume_pane_g1_ParamLimits

0xbf01,	// (0x0001acb0) smil_status_volume_pane_g2_ParamLimits

0xbf14,	// (0x0001acc3) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0001e3cd) smil_status_volume_pane_g_ParamLimits

0xc112,	// (0x0001aec1) bg_popup_window_pane_cp07_ParamLimits

0xc120,	// (0x0001aecf) blid_firmament_pane

0x4267,	// (0x00013016) aid_size_cell_gallery_ParamLimits

0x4267,	// (0x00013016) aid_size_cell_gallery

0x427d,	// (0x0001302c) grid_gallery_pane_ParamLimits

0x427d,	// (0x0001302c) grid_gallery_pane

0x4296,	// (0x00013045) cell_gallery_pane_ParamLimits

0x4296,	// (0x00013045) cell_gallery_pane

0xc243,	// (0x0001aff2) bg_cell_gallery_focus_pane_ParamLimits

0xc243,	// (0x0001aff2) bg_cell_gallery_focus_pane

0xc255,	// (0x0001b004) cell_gallery_pane_g1_ParamLimits

0xc255,	// (0x0001b004) cell_gallery_pane_g1

0x42df,	// (0x0001308e) cell_gallery_pane_g2_ParamLimits

0x42df,	// (0x0001308e) cell_gallery_pane_g2

0x42ec,	// (0x0001309b) cell_gallery_pane_g3_ParamLimits

0x42ec,	// (0x0001309b) cell_gallery_pane_g3

0xc261,	// (0x0001b010) cell_gallery_pane_g4_ParamLimits

0xc261,	// (0x0001b010) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0001e47b) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0001e47b) cell_gallery_pane_g

0xc26d,	// (0x0001b01c) bg_cell_gallery_focus_pane_g1

0xc275,	// (0x0001b024) bg_cell_gallery_focus_pane_g2

0xc27d,	// (0x0001b02c) bg_cell_gallery_focus_pane_g3

0xc285,	// (0x0001b034) bg_cell_gallery_focus_pane_g4

0xc28d,	// (0x0001b03c) bg_cell_gallery_focus_pane_g5

0xc295,	// (0x0001b044) bg_cell_gallery_focus_pane_g6

0xc29d,	// (0x0001b04c) bg_cell_gallery_focus_pane_g7

0xc2a5,	// (0x0001b054) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0001e484) bg_cell_gallery_focus_pane_g

0xc2ad,	// (0x0001b05c) aid_firma_cardinal

0xc2c1,	// (0x0001b070) blid_firmament_pane_t1

0xc2d8,	// (0x0001b087) blid_firmament_pane_t2

0xc2ef,	// (0x0001b09e) blid_firmament_pane_t3

0xc306,	// (0x0001b0b5) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0001e495) blid_firmament_pane_t

0xc31d,	// (0x0001b0cc) blid_sat_info_pane

0xc32d,	// (0x0001b0dc) blid_sat_info_pane_g1

0xc32d,	// (0x0001b0dc) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0001e49e) blid_sat_info_pane_g

0xc337,	// (0x0001b0e6) blid_sat_info_pane_t1

0xc345,	// (0x0001b0f4) smil2_volume_content_pane

0xc34e,	// (0x0001b0fd) smil2_volume_pane_g1

0xc356,	// (0x0001b105) smil2_volume_content_pane_g1

0xc35f,	// (0x0001b10e) smil2_volume_content_pane_g2

0xc368,	// (0x0001b117) smil2_volume_content_pane_g3

0xc371,	// (0x0001b120) smil2_volume_content_pane_g4

0xc37a,	// (0x0001b129) smil2_volume_content_pane_g5

0xc383,	// (0x0001b132) smil2_volume_content_pane_g6

0xc38c,	// (0x0001b13b) smil2_volume_content_pane_g7

0xc395,	// (0x0001b144) smil2_volume_content_pane_g8

0xc39e,	// (0x0001b14d) smil2_volume_content_pane_g9

0xc3a7,	// (0x0001b156) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0001e4a3) smil2_volume_content_pane_g

0x0dbe,	// (0x0000fb6d) cale_week_day_heading_pane_t1_ParamLimits

0x0de8,	// (0x0000fb97) cale_week_day_heading_pane_t2_ParamLimits

0x0e17,	// (0x0000fbc6) cale_week_day_heading_pane_t3_ParamLimits

0x0e46,	// (0x0000fbf5) cale_week_day_heading_pane_t4_ParamLimits

0x0e75,	// (0x0000fc24) cale_week_day_heading_pane_t5_ParamLimits

0x0eac,	// (0x0000fc5b) cale_week_day_heading_pane_t6_ParamLimits

0x0ee3,	// (0x0000fc92) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001df80) cale_week_day_heading_pane_t_ParamLimits

0x9e30,	// (0x00018bdf) bg_cale_side_pane_ParamLimits

0x0f0d,	// (0x0000fcbc) cale_week_time_pane_t1_ParamLimits

0x0f27,	// (0x0000fcd6) cale_week_time_pane_t2_ParamLimits

0x0f41,	// (0x0000fcf0) cale_week_time_pane_t3_ParamLimits

0x0f5b,	// (0x0000fd0a) cale_week_time_pane_t4_ParamLimits

0x0f75,	// (0x0000fd24) cale_week_time_pane_t5_ParamLimits

0x0f8f,	// (0x0000fd3e) cale_week_time_pane_t6_ParamLimits

0x0fa9,	// (0x0000fd58) cale_week_time_pane_t7_ParamLimits

0x0fc3,	// (0x0000fd72) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001df8f) cale_week_time_pane_t_ParamLimits

0x0fe3,	// (0x0000fd92) cell_cale_week_pane_g2_ParamLimits

0x9e30,	// (0x00018bdf) bg_cale_side_pane_cp01_ParamLimits

0x2057,	// (0x00010e06) cale_month_week_pane_t1_ParamLimits

0x2070,	// (0x00010e1f) cale_month_week_pane_t2_ParamLimits

0x2089,	// (0x00010e38) cale_month_week_pane_t3_ParamLimits

0x20a2,	// (0x00010e51) cale_month_week_pane_t4_ParamLimits

0x20bb,	// (0x00010e6a) cale_month_week_pane_t5_ParamLimits

0x20d4,	// (0x00010e83) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001e064) cale_month_week_pane_t_ParamLimits

0xa1d9,	// (0x00018f88) cell_cale_month_pane_g1_ParamLimits

0x9433,	// (0x000181e2) main_cale_event_viewer_pane

0x9433,	// (0x000181e2) listscroll_cale_event_viewer_pane

0xc3b0,	// (0x0001b15f) list_cale_ev_pane

0xc3b8,	// (0x0001b167) scroll_pane_cp023

0xc3c4,	// (0x0001b173) field_cale_ev_pane_ParamLimits

0xc3c4,	// (0x0001b173) field_cale_ev_pane

0xc3e2,	// (0x0001b191) field_cale_ev_content_pane_ParamLimits

0xc3e2,	// (0x0001b191) field_cale_ev_content_pane

0xc3ee,	// (0x0001b19d) field_cale_ev_pane_g1_ParamLimits

0xc3ee,	// (0x0001b19d) field_cale_ev_pane_g1

0xc3fa,	// (0x0001b1a9) field_cale_ev_pane_g2_ParamLimits

0xc3fa,	// (0x0001b1a9) field_cale_ev_pane_g2

0xc412,	// (0x0001b1c1) field_cale_ev_pane_g3_ParamLimits

0xc412,	// (0x0001b1c1) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0001e4b8) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0001e4b8) field_cale_ev_pane_g

0xc42a,	// (0x0001b1d9) field_cale_ev_pane_t1_ParamLimits

0xc42a,	// (0x0001b1d9) field_cale_ev_pane_t1

0x9d4d,	// (0x00018afc) field_cale_ev_content_pane_t1_ParamLimits

0x9d4d,	// (0x00018afc) field_cale_ev_content_pane_t1

0xaaee,	// (0x0001989d) bg_button_pane_cp01

0x0aeb,	// (0x0000f89a) listscroll_cale_week_pane_ParamLimits

0x9ddb,	// (0x00018b8a) popup_toolbar_window_cp01

0x9e01,	// (0x00018bb0) listscroll_cale_week_pane_t1_ParamLimits

0x0aeb,	// (0x0000f89a) listscroll_cale_day_pane_ParamLimits

0x9ddb,	// (0x00018b8a) popup_toolbar_window_cp02

0xa25b,	// (0x0001900a) listscroll_cale_day_pane_t1_ParamLimits

0x0aeb,	// (0x0000f89a) main_cale_month_pane_ParamLimits

0xbe5f,	// (0x0001ac0e) popup_toolbar_window_cp03_ParamLimits

0xbe5f,	// (0x0001ac0e) popup_toolbar_window_cp03

0x2ebc,	// (0x00011c6b) main_image_pane_g2_ParamLimits

0x2ebc,	// (0x00011c6b) main_image_pane_g2

0x2ecd,	// (0x00011c7c) main_image_pane_g3_ParamLimits

0x2ecd,	// (0x00011c7c) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e296) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e296) main_image_pane_g

0xac4a,	// (0x000199f9) main_image_pane_t1_ParamLimits

0x2ede,	// (0x00011c8d) main_image_pane_t2_ParamLimits

0x2ede,	// (0x00011c8d) main_image_pane_t2

0x2ef0,	// (0x00011c9f) main_image_pane_t3_ParamLimits

0x2ef0,	// (0x00011c9f) main_image_pane_t3

0x2f18,	// (0x00011cc7) main_image_pane_t4_ParamLimits

0x2f18,	// (0x00011cc7) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e29d) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e29d) main_image_pane_t

0x2f38,	// (0x00011ce7) popup_image_details_window_cp01

0x2f42,	// (0x00011cf1) popup_toobar_trans_pane_cp01_ParamLimits

0x2f42,	// (0x00011cf1) popup_toobar_trans_pane_cp01

0x36b5,	// (0x00012464) popup_image_details_window_ParamLimits

0x36b5,	// (0x00012464) popup_image_details_window

0xbe32,	// (0x0001abe1) popup_image_focus_window

0x3ad4,	// (0x00012883) camera2_autofocus_pane_ParamLimits

0x3ad4,	// (0x00012883) camera2_autofocus_pane

0x9433,	// (0x000181e2) bg_popup_sub_pane_cp06

0xc441,	// (0x0001b1f0) popup_image_focus_window_g1

0xc449,	// (0x0001b1f8) popup_image_focus_window_g2

0xc451,	// (0x0001b200) popup_image_focus_window_g3

0xc459,	// (0x0001b208) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0001e4bf) popup_image_focus_window_g

0xc461,	// (0x0001b210) popup_image_focus_window_t1

0xc46f,	// (0x0001b21e) popup_image_focus_window_t2

0xc47f,	// (0x0001b22e) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0001e4c8) popup_image_focus_window_t

0xc48d,	// (0x0001b23c) camera2_autofocus_pane_g1

0x94a3,	// (0x00018252) bg_tb_trans_pane_cp01

0xc49b,	// (0x0001b24a) popup_image_details_window_g1

0xc4ae,	// (0x0001b25d) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0001e4da) popup_image_details_window_g

0xc4d7,	// (0x0001b286) popup_image_details_window_t1

0xc4e9,	// (0x0001b298) popup_image_details_window_t2

0xc502,	// (0x0001b2b1) popup_image_details_window_t3

0xc516,	// (0x0001b2c5) popup_image_details_window_t4

0xc531,	// (0x0001b2e0) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0001e4e1) popup_image_details_window_t

0x9be4,	// (0x00018993) bg_calc_paper_pane_ParamLimits

0x9433,	// (0x000181e2) grid_highlight_pane_cp013

0x9bf8,	// (0x000189a7) list_calc_pane_ParamLimits

0x9c0a,	// (0x000189b9) scroll_pane_cp024

0x9c12,	// (0x000189c1) bg_calc_display_pane_ParamLimits

0x095d,	// (0x0000f70c) calc_display_pane_t1_ParamLimits

0x096f,	// (0x0000f71e) calc_display_pane_t2_ParamLimits

0x9c1e,	// (0x000189cd) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001df00) calc_display_pane_t_ParamLimits

0x0a2f,	// (0x0000f7de) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001df1d) cell_calc_pane_g

0x0a38,	// (0x0000f7e7) cell_calc_pane_t1

0x9c95,	// (0x00018a44) grid_highlight_pane_cp02_ParamLimits

0x9cab,	// (0x00018a5a) toolbar_button_pane_cp01_ParamLimits

0x9cab,	// (0x00018a5a) toolbar_button_pane_cp01

0xac8f,	// (0x00019a3e) temp_image_control_pane_ParamLimits

0xac8f,	// (0x00019a3e) temp_image_control_pane

0x94a3,	// (0x00018252) main_mp3_pane

0xc54b,	// (0x0001b2fa) temp_image_control_pane_g1_ParamLimits

0xc54b,	// (0x0001b2fa) temp_image_control_pane_g1

0xc559,	// (0x0001b308) temp_image_control_pane_g2_ParamLimits

0xc559,	// (0x0001b308) temp_image_control_pane_g2

0xc56b,	// (0x0001b31a) temp_image_control_pane_g3_ParamLimits

0xc56b,	// (0x0001b31a) temp_image_control_pane_g3

0x4329,	// (0x000130d8) temp_image_control_pane_g4_ParamLimits

0x4329,	// (0x000130d8) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0001e4ec) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0001e4ec) temp_image_control_pane_g

0xc54b,	// (0x0001b2fa) main_mp3_pane_g1

0x433c,	// (0x000130eb) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0001e4f5) main_mp3_pane_g

0xc5ae,	// (0x0001b35d) main_mp3_pane_t1

0x9e9d,	// (0x00018c4c) main_camera_pane_g8_ParamLimits

0x9e9d,	// (0x00018c4c) main_camera_pane_g8

0x12e7,	// (0x00010096) main_video_pane_g7_ParamLimits

0x12e7,	// (0x00010096) main_video_pane_g7

0xbf54,	// (0x0001ad03) main_camera2_pane_t7_ParamLimits

0xbf54,	// (0x0001ad03) main_camera2_pane_t7

0x9fe5,	// (0x00018d94) scroll_pane_cp025_ParamLimits

0x9fe5,	// (0x00018d94) scroll_pane_cp025

0x9ff9,	// (0x00018da8) scroll_pane_cp026_ParamLimits

0x9ff9,	// (0x00018da8) scroll_pane_cp026

0xa008,	// (0x00018db7) wml_content_pane_ParamLimits

0x9433,	// (0x000181e2) main_touch_calib_pane

0x4410,	// (0x000131bf) main_touch_calib_pane_g1

0x4422,	// (0x000131d1) main_touch_calib_pane_g2

0x4434,	// (0x000131e3) main_touch_calib_pane_g3

0x4446,	// (0x000131f5) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0001e513) main_touch_calib_pane_g

0x4458,	// (0x00013207) main_touch_calib_pane_t1

0x4472,	// (0x00013221) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0001e51c) main_touch_calib_pane_t

0xa808,	// (0x000195b7) mup_progress_pane_cp02

0xa83d,	// (0x000195ec) navi_pane_g1

0xa8f8,	// (0x000196a7) navi_pane_mp_t3

0x94a3,	// (0x00018252) main_mp3_pane_ParamLimits

0x3840,	// (0x000125ef) navi_pane_ParamLimits

0xc54b,	// (0x0001b2fa) main_mp3_pane_g1_ParamLimits

0x433c,	// (0x000130eb) main_mp3_pane_g2_ParamLimits

0x434a,	// (0x000130f9) main_mp3_pane_g3_ParamLimits

0x434a,	// (0x000130f9) main_mp3_pane_g3

0x4358,	// (0x00013107) main_mp3_pane_g4_ParamLimits

0x4358,	// (0x00013107) main_mp3_pane_g4

0xc57b,	// (0x0001b32a) main_mp3_pane_g5_ParamLimits

0xc57b,	// (0x0001b32a) main_mp3_pane_g5

0xc589,	// (0x0001b338) main_mp3_pane_g6_ParamLimits

0xc589,	// (0x0001b338) main_mp3_pane_g6

0xc596,	// (0x0001b345) main_mp3_pane_g7_ParamLimits

0xc596,	// (0x0001b345) main_mp3_pane_g7

0xc5a2,	// (0x0001b351) main_mp3_pane_g8_ParamLimits

0xc5a2,	// (0x0001b351) main_mp3_pane_g8

0xf746,	// (0x0001e4f5) main_mp3_pane_g_ParamLimits

0x4364,	// (0x00013113) main_mp3_pane_t2

0x4372,	// (0x00013121) main_mp3_pane_t3

0xc5bc,	// (0x0001b36b) main_mp3_pane_t4

0xc5ca,	// (0x0001b379) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0001e506) main_mp3_pane_t

0xc5d8,	// (0x0001b387) mup_progress_pane_cp01

0x9451,	// (0x00018200) aid_zoom_text_secondary2

0xc3b0,	// (0x0001b15f) list_cale_ev2_pane

0xc3b8,	// (0x0001b167) scroll_pane_cp023_ParamLimits

0x44c8,	// (0x00013277) field_cale_ev2_pane_ParamLimits

0x44c8,	// (0x00013277) field_cale_ev2_pane

0xc5e0,	// (0x0001b38f) field_cale_ev2_pane_g1_ParamLimits

0xc5e0,	// (0x0001b38f) field_cale_ev2_pane_g1

0xc5ec,	// (0x0001b39b) field_cale_ev2_pane_g2_ParamLimits

0xc5ec,	// (0x0001b39b) field_cale_ev2_pane_g2

0xc604,	// (0x0001b3b3) field_cale_ev2_pane_g3_ParamLimits

0xc604,	// (0x0001b3b3) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0001e527) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0001e527) field_cale_ev2_pane_g

0xc628,	// (0x0001b3d7) field_cale_ev2_pane_t1_ParamLimits

0xc628,	// (0x0001b3d7) field_cale_ev2_pane_t1

0xc63f,	// (0x0001b3ee) field_cale_ev2_pane_t2_ParamLimits

0xc63f,	// (0x0001b3ee) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0001e530) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0001e530) field_cale_ev2_pane_t

0x2d70,	// (0x00011b1f) main_postcard_pane_g5_ParamLimits

0x2d70,	// (0x00011b1f) main_postcard_pane_g5

0x2d86,	// (0x00011b35) main_postcard_pane_g6_ParamLimits

0x2d86,	// (0x00011b35) main_postcard_pane_g6

0x10ad,	// (0x0000fe5c) camera2_autofocus_pane_cp_ParamLimits

0x10ad,	// (0x0000fe5c) camera2_autofocus_pane_cp

0x94a3,	// (0x00018252) main_mup3_pane

0x452d,	// (0x000132dc) main_mup3_pane_g1_ParamLimits

0x452d,	// (0x000132dc) main_mup3_pane_g1

0x454f,	// (0x000132fe) main_mup3_pane_g2_ParamLimits

0x454f,	// (0x000132fe) main_mup3_pane_g2

0x45cf,	// (0x0001337e) main_mup3_pane_g3_ParamLimits

0x45cf,	// (0x0001337e) main_mup3_pane_g3

0x4615,	// (0x000133c4) main_mup3_pane_g4_ParamLimits

0x4615,	// (0x000133c4) main_mup3_pane_g4

0x465b,	// (0x0001340a) main_mup3_pane_g5_ParamLimits

0x465b,	// (0x0001340a) main_mup3_pane_g5

0x46a1,	// (0x00013450) main_mup3_pane_g6_ParamLimits

0x46a1,	// (0x00013450) main_mup3_pane_g6

0xc654,	// (0x0001b403) main_mup3_pane_g7_ParamLimits

0xc654,	// (0x0001b403) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0001e540) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0001e540) main_mup3_pane_g

0x471f,	// (0x000134ce) main_mup3_pane_t1_ParamLimits

0x471f,	// (0x000134ce) main_mup3_pane_t1

0x4793,	// (0x00013542) main_mup3_pane_t2_ParamLimits

0x4793,	// (0x00013542) main_mup3_pane_t2

0x4867,	// (0x00013616) main_mup3_pane_t4_ParamLimits

0x4867,	// (0x00013616) main_mup3_pane_t4

0x48bd,	// (0x0001366c) main_mup3_pane_t5_ParamLimits

0x48bd,	// (0x0001366c) main_mup3_pane_t5

0x4979,	// (0x00013728) main_mup3_pane_t6_ParamLimits

0x4979,	// (0x00013728) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0001e551) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0001e551) main_mup3_pane_t

0x4a31,	// (0x000137e0) mup3_progress_pane_ParamLimits

0x4a31,	// (0x000137e0) mup3_progress_pane

0x4abd,	// (0x0001386c) popup_mup3_control_window_ParamLimits

0x4abd,	// (0x0001386c) popup_mup3_control_window

0xc662,	// (0x0001b411) popup_mup3_text_window

0x4aef,	// (0x0001389e) mup3_progress_pane_t1

0x4b0e,	// (0x000138bd) mup3_progress_pane_t2

0xc66a,	// (0x0001b419) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0001e55e) mup3_progress_pane_t

0xc687,	// (0x0001b436) mup_progress_pane_cp03

0x9433,	// (0x000181e2) bg_tb_trans_pane_cp04

0x4b2d,	// (0x000138dc) mup3_volume_pane

0x4b35,	// (0x000138e4) popup_mup3_control_window_g1

0x4b3e,	// (0x000138ed) mup3_volume_pane_g1

0x4b47,	// (0x000138f6) mup3_volume_pane_g2

0x4b50,	// (0x000138ff) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0001e565) mup3_volume_pane_g

0x9433,	// (0x000181e2) bg_tb_trans_pane_cp03

0xc697,	// (0x0001b446) popup_mup3_text_window_g1

0xc69f,	// (0x0001b44e) popup_mup3_text_window_t1

0x9c6c,	// (0x00018a1b) list_calc_item_pane_g1_ParamLimits

0xc03c,	// (0x0001adeb) mup_volume_pane_cp_g1

0x448c,	// (0x0001323b) main_touch_calib_pane_t3

0x44a0,	// (0x0001324f) main_touch_calib_pane_t4

0x44b4,	// (0x00013263) main_touch_calib_pane_t5

0x943d,	// (0x000181ec) aid_cell_size_toolbar2

0x9445,	// (0x000181f4) aid_popup3_width_pane

0x9451,	// (0x00018200) aid_zoom_text_msg_primary

0x108c,	// (0x0000fe3b) vorec_t7

0x9c30,	// (0x000189df) bg_calc_paper_pane_g1_ParamLimits

0x9c3c,	// (0x000189eb) bg_calc_paper_pane_g2_ParamLimits

0x9c48,	// (0x000189f7) bg_calc_paper_pane_g3_ParamLimits

0x9c54,	// (0x00018a03) bg_calc_paper_pane_g4_ParamLimits

0x9c60,	// (0x00018a0f) bg_calc_paper_pane_g5_ParamLimits

0x09b8,	// (0x0000f767) bg_calc_paper_pane_g6_ParamLimits

0x09c7,	// (0x0000f776) bg_calc_paper_pane_g7_ParamLimits

0x09d6,	// (0x0000f785) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001df07) bg_calc_paper_pane_g_ParamLimits

0x09e9,	// (0x0000f798) calc_bg_paper_pane_g9_ParamLimits

0x11f9,	// (0x0000ffa8) image_qvga_pane_ParamLimits

0x11f9,	// (0x0000ffa8) image_qvga_pane

0x9b1f,	// (0x000188ce) bg_popup_sub_pane_cp04_ParamLimits

0xabc6,	// (0x00019975) popup_mup_playback_window_g1_ParamLimits

0xabd2,	// (0x00019981) popup_mup_playback_window_t1_ParamLimits

0xabe7,	// (0x00019996) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e291) popup_mup_playback_window_t_ParamLimits

0x3fcb,	// (0x00012d7a) main_mup2_pane_g3_ParamLimits

0x3fcb,	// (0x00012d7a) main_mup2_pane_g3

0x160d,	// (0x000103bc) popup_toolbar_window_cp04

0xafdc,	// (0x00019d8b) popup_call2_audio_second_window_g3_ParamLimits

0xafdc,	// (0x00019d8b) popup_call2_audio_second_window_g3

0xb3e6,	// (0x0001a195) popup_call2_audio_first_window_g4_ParamLimits

0xb3e6,	// (0x0001a195) popup_call2_audio_first_window_g4

0xba65,	// (0x0001a814) popup_call2_audio_in_window_g4_ParamLimits

0xba65,	// (0x0001a814) popup_call2_audio_in_window_g4

0x2e9e,	// (0x00011c4d) aid_area_sk_bg_cut_ParamLimits

0x2e9e,	// (0x00011c4d) aid_area_sk_bg_cut

0xabfc,	// (0x000199ab) aid_area_sk_bg_cut_2_ParamLimits

0xabfc,	// (0x000199ab) aid_area_sk_bg_cut_2

0x42cf,	// (0x0001307e) aid_placing_details_win

0x42d7,	// (0x00013086) aid_placing_details_win_2

0xc48d,	// (0x0001b23c) camera2_autofocus_pane_g1_ParamLimits

0x05aa,	// (0x0000f359) popup_fixed_preview_cale_window_ParamLimits

0x05aa,	// (0x0000f359) popup_fixed_preview_cale_window

0xa97f,	// (0x0001972e) navi_slider_pane_g3

0xa988,	// (0x00019737) navi_slider_pane_g4

0xa991,	// (0x00019740) navi_slider_pane_g5

0xa97f,	// (0x0001972e) navi_slider_pane_g6

0xa99a,	// (0x00019749) navi_slider_pane_g7

0xaabb,	// (0x0001986a) mup_scale_pane_g3

0xaac4,	// (0x00019873) mup_scale_pane_g4

0xaacd,	// (0x0001987c) mup_scale_pane_g5

0x2b48,	// (0x000118f7) mup_scale_pane_g6

0x2b51,	// (0x00011900) mup_scale_pane_g7

0xa97f,	// (0x0001972e) cams2_slider_pane_g3

0xc0f1,	// (0x0001aea0) cams2_slider_pane_g4

0xc0f9,	// (0x0001aea8) cams2_slider_pane_g5

0xa97f,	// (0x0001972e) cams2_slider_pane_g6

0xc101,	// (0x0001aeb0) cams2_slider_pane_g7

0xc32d,	// (0x0001b0dc) camera2_autofocus_pane_cp_g1

0xbe06,	// (0x0001abb5) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe06,	// (0x0001abb5) bg_popup_preview_window_pane_cp02

0xc6ad,	// (0x0001b45c) list_fp_cale_pane_ParamLimits

0xc6ad,	// (0x0001b45c) list_fp_cale_pane

0xc6b9,	// (0x0001b468) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6b9,	// (0x0001b468) popup_fixed_preview_cale_window_t1

0x4b59,	// (0x00013908) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b59,	// (0x00013908) popup_fixed_preview_cale_window_t2

0x4b6e,	// (0x0001391d) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b6e,	// (0x0001391d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0001e56c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0001e56c) popup_fixed_preview_cale_window_t

0x4b83,	// (0x00013932) list_single_fp_cale_pane_ParamLimits

0x4b83,	// (0x00013932) list_single_fp_cale_pane

0xc6d7,	// (0x0001b486) list_single_fp_cale_pane_g1_ParamLimits

0xc6d7,	// (0x0001b486) list_single_fp_cale_pane_g1

0xc6e3,	// (0x0001b492) list_single_fp_cale_pane_g2_ParamLimits

0xc6e3,	// (0x0001b492) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0001e573) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0001e573) list_single_fp_cale_pane_g

0xc6fc,	// (0x0001b4ab) list_single_fp_cale_pane_t1_ParamLimits

0xc6fc,	// (0x0001b4ab) list_single_fp_cale_pane_t1

0xc70e,	// (0x0001b4bd) list_single_fp_cale_pane_t2_ParamLimits

0xc70e,	// (0x0001b4bd) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0001e57a) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0001e57a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9433,	// (0x000181e2) main_dialer_pane

0x4b99,	// (0x00013948) aid_cell_size_keypad

0x4ba3,	// (0x00013952) dialer_ne_pane

0x4bab,	// (0x0001395a) grid_dialer_command_1_pane

0x4bb3,	// (0x00013962) grid_dialer_command_2_pane

0x4bbb,	// (0x0001396a) grid_dialer_keypad_pane

0x4bcd,	// (0x0001397c) bg_popup_call_pane_cp06_ParamLimits

0x4bcd,	// (0x0001397c) bg_popup_call_pane_cp06

0x4bd9,	// (0x00013988) dialer_ne_clear_pane_ParamLimits

0x4bd9,	// (0x00013988) dialer_ne_clear_pane

0xc741,	// (0x0001b4f0) dialer_ne_pane_g1

0xc749,	// (0x0001b4f8) dialer_ne_pane_t1_ParamLimits

0xc749,	// (0x0001b4f8) dialer_ne_pane_t1

0x4be5,	// (0x00013994) dialer_ne_pane_t2_ParamLimits

0x4be5,	// (0x00013994) dialer_ne_pane_t2

0x4c0f,	// (0x000139be) dialer_ne_pane_t3_ParamLimits

0x4c0f,	// (0x000139be) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0001e57f) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0001e57f) dialer_ne_pane_t

0x4c3f,	// (0x000139ee) dialer_ne_pane_t3_copy1_ParamLimits

0x4c3f,	// (0x000139ee) dialer_ne_pane_t3_copy1

0x4c6e,	// (0x00013a1d) cell_dialer_keypad_pane_ParamLimits

0x4c6e,	// (0x00013a1d) cell_dialer_keypad_pane

0x4c85,	// (0x00013a34) cell_dialer_command_1_pane_ParamLimits

0x4c85,	// (0x00013a34) cell_dialer_command_1_pane

0x4c9b,	// (0x00013a4a) cell_dialer_command_2_pane_ParamLimits

0x4c9b,	// (0x00013a4a) cell_dialer_command_2_pane

0xc75b,	// (0x0001b50a) bg_button_pane_cp02_ParamLimits

0xc75b,	// (0x0001b50a) bg_button_pane_cp02

0x4caa,	// (0x00013a59) cell_dialer_keypad_pane_g1_ParamLimits

0x4caa,	// (0x00013a59) cell_dialer_keypad_pane_g1

0xc75b,	// (0x0001b50a) bg_button_pane_cp03_ParamLimits

0xc75b,	// (0x0001b50a) bg_button_pane_cp03

0x4cbe,	// (0x00013a6d) cell_dialer_command_1_pane_g1_ParamLimits

0x4cbe,	// (0x00013a6d) cell_dialer_command_1_pane_g1

0xc767,	// (0x0001b516) bg_button_pane_cp04

0x4cd2,	// (0x00013a81) cell_dialer_command_2_pane_g1

0x9e8b,	// (0x00018c3a) bg_button_pane_cp06

0xc76f,	// (0x0001b51e) dialer_ne_clear_pane_g1

0xa849,	// (0x000195f8) navi_pane_g2

0xa877,	// (0x00019626) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e194) navi_pane_g

0xa906,	// (0x000196b5) navi_pane_mv_g2

0xa92d,	// (0x000196dc) navi_pane_mv_g5

0x2716,	// (0x000114c5) navi_pane_mv_t1

0x9c12,	// (0x000189c1) main_clock2_pane

0x4d20,	// (0x00013acf) main_clock2_list_pane_ParamLimits

0x4d20,	// (0x00013acf) main_clock2_list_pane

0x4d5a,	// (0x00013b09) main_clock2_pane_t1_ParamLimits

0x4d5a,	// (0x00013b09) main_clock2_pane_t1

0x4d98,	// (0x00013b47) main_clock2_pane_t2_ParamLimits

0x4d98,	// (0x00013b47) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0001e58b) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0001e58b) main_clock2_pane_t

0x4e36,	// (0x00013be5) popup_clock_analogue_window_cp03_ParamLimits

0x4e36,	// (0x00013be5) popup_clock_analogue_window_cp03

0x4e5b,	// (0x00013c0a) popup_clock_digital_window_cp02_ParamLimits

0x4e5b,	// (0x00013c0a) popup_clock_digital_window_cp02

0x4ecc,	// (0x00013c7b) main_clock2_list_single_pane_ParamLimits

0x4ecc,	// (0x00013c7b) main_clock2_list_single_pane

0x9e8b,	// (0x00018c3a) list_highlight_pane_cp05

0xc7a9,	// (0x0001b558) main_clock2_list_single_pane_t1

0x160d,	// (0x000103bc) popup_toolbar_window_cp04_ParamLimits

0x42f9,	// (0x000130a8) camera2_autofocus_pane_g2_ParamLimits

0x42f9,	// (0x000130a8) camera2_autofocus_pane_g2

0x4305,	// (0x000130b4) camera2_autofocus_pane_g3_ParamLimits

0x4305,	// (0x000130b4) camera2_autofocus_pane_g3

0x4311,	// (0x000130c0) camera2_autofocus_pane_g4_ParamLimits

0x4311,	// (0x000130c0) camera2_autofocus_pane_g4

0x431d,	// (0x000130cc) camera2_autofocus_pane_g5_ParamLimits

0x431d,	// (0x000130cc) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0001e4cf) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0001e4cf) camera2_autofocus_pane_g

0x44e9,	// (0x00013298) camera2_autofocus_pane_cp_g2

0x44f1,	// (0x000132a0) camera2_autofocus_pane_cp_g3

0x44f9,	// (0x000132a8) camera2_autofocus_pane_cp_g4

0x4501,	// (0x000132b0) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0001e535) camera2_autofocus_pane_cp_g

0x4bc5,	// (0x00013974) popup_dialer_spcha_window

0x9433,	// (0x000181e2) bg_popup_sub_pane_cp07

0xc7b7,	// (0x0001b566) list_spcha_pane

0xc7bf,	// (0x0001b56e) list_single_spcha_pane_ParamLimits

0xc7bf,	// (0x0001b56e) list_single_spcha_pane

0x9433,	// (0x000181e2) list_highlight_pane_cp06

0xc7d0,	// (0x0001b57f) list_single_spcha_pane_t1

0xb80f,	// (0x0001a5be) popup_call2_audio_out_window_g4_ParamLimits

0xb80f,	// (0x0001a5be) popup_call2_audio_out_window_g4

0x9433,	// (0x000181e2) main_imed2_pane

0xbe3a,	// (0x0001abe9) popup_imed_adjust2_window

0x36cd,	// (0x0001247c) popup_imed_trans_window_ParamLimits

0x36cd,	// (0x0001247c) popup_imed_trans_window

0xc16b,	// (0x0001af1a) popup_blid_sat_info2_window_t1

0xc179,	// (0x0001af28) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0001e464) popup_blid_sat_info2_window_t

0x4f75,	// (0x00013d24) aid_size_cell_colour_35

0x4f95,	// (0x00013d44) aid_size_cell_colour_112

0x4fb5,	// (0x00013d64) aid_size_cell_effect

0xbe12,	// (0x0001abc1) bg_tb_trans_pane_cp02

0xa364,	// (0x00019113) heading_imed_pane

0x4fd5,	// (0x00013d84) listscroll_imed_pane

0xc7de,	// (0x0001b58d) heading_imed_pane_g1

0xc7e6,	// (0x0001b595) heading_imed_pane_t1

0xc7f4,	// (0x0001b5a3) grid_imed_colour_35_pane_ParamLimits

0xc7f4,	// (0x0001b5a3) grid_imed_colour_35_pane

0x4fe1,	// (0x00013d90) grid_imed_effect_pane

0xc80c,	// (0x0001b5bb) list_imed_aspect_pane

0x4ff7,	// (0x00013da6) scroll_pane_cp027_ParamLimits

0x4ff7,	// (0x00013da6) scroll_pane_cp027

0x5008,	// (0x00013db7) cell_imed_effect_pane_ParamLimits

0x5008,	// (0x00013db7) cell_imed_effect_pane

0xc814,	// (0x0001b5c3) cell_imed_colour_pane_ParamLimits

0xc814,	// (0x0001b5c3) cell_imed_colour_pane

0xc856,	// (0x0001b605) cell_imed_colour_pane_g1_ParamLimits

0xc856,	// (0x0001b605) cell_imed_colour_pane_g1

0xc867,	// (0x0001b616) hgihlgiht_grid_pane_cp016_ParamLimits

0xc867,	// (0x0001b616) hgihlgiht_grid_pane_cp016

0x502f,	// (0x00013dde) cell_imed_effect_pane_g1

0x5037,	// (0x00013de6) grid_highlight_pane_cp017

0xc878,	// (0x0001b627) list_imed_single_pane_ParamLimits

0xc878,	// (0x0001b627) list_imed_single_pane

0x9433,	// (0x000181e2) list_highlight_pane_cp07

0xc88d,	// (0x0001b63c) list_imed_aspect_pane_comp1_t1

0xbe12,	// (0x0001abc1) bg_tb_trans_pane_cp05

0xc8af,	// (0x0001b65e) popup_imed_adjust2_window_g1

0xc8d6,	// (0x0001b685) popup_imed_adjust2_window_t1

0xc8ee,	// (0x0001b69d) slider_imed_adjust_pane

0xc902,	// (0x0001b6b1) slider_imed_adjust_pane_g1

0xc912,	// (0x0001b6c1) slider_imed_adjust_pane_g2

0xc922,	// (0x0001b6d1) slider_imed_adjust_pane_g3

0xc933,	// (0x0001b6e2) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0001e5a8) slider_imed_adjust_pane_g

0x5040,	// (0x00013def) aid_size_cell_clipart2

0x504c,	// (0x00013dfb) grid_imed_clipart_pane

0xc944,	// (0x0001b6f3) scroll_pane_cp031

0x5056,	// (0x00013e05) cell_imed_clipart_pane_ParamLimits

0x5056,	// (0x00013e05) cell_imed_clipart_pane

0x5078,	// (0x00013e27) cell_imed_clipart_pane_g1

0x9433,	// (0x000181e2) grid_highlight_pane_cp014

0x4d35,	// (0x00013ae4) main_clock2_pane_g1_ParamLimits

0x4d35,	// (0x00013ae4) main_clock2_pane_g1

0x4e77,	// (0x00013c26) aid_call2_pane_cp10

0x4e89,	// (0x00013c38) aid_call_pane_cp10

0xa7a8,	// (0x00019557) popup_clock_analogue_window_cp10_g1

0xa7a8,	// (0x00019557) popup_clock_analogue_window_cp10_g2

0x4e9b,	// (0x00013c4a) popup_clock_analogue_window_cp10_g3

0x4e9b,	// (0x00013c4a) popup_clock_analogue_window_cp10_g4

0xa7a8,	// (0x00019557) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0001e596) popup_clock_analogue_window_cp10_g

0x4ead,	// (0x00013c5c) popup_clock_analogue_window_cp10_t1

0x4ede,	// (0x00013c8d) clock_digital_number_pane_cp10_ParamLimits

0x4ede,	// (0x00013c8d) clock_digital_number_pane_cp10

0x4ef6,	// (0x00013ca5) clock_digital_number_pane_cp11_ParamLimits

0x4ef6,	// (0x00013ca5) clock_digital_number_pane_cp11

0x4f0e,	// (0x00013cbd) clock_digital_number_pane_cp12_ParamLimits

0x4f0e,	// (0x00013cbd) clock_digital_number_pane_cp12

0x4f26,	// (0x00013cd5) clock_digital_number_pane_cp13_ParamLimits

0x4f26,	// (0x00013cd5) clock_digital_number_pane_cp13

0x4f3e,	// (0x00013ced) clock_digital_separator_pane_cp10_ParamLimits

0x4f3e,	// (0x00013ced) clock_digital_separator_pane_cp10

0x4f56,	// (0x00013d05) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f56,	// (0x00013d05) popup_clock_digital_window_cp02_t1

0x9b17,	// (0x000188c6) clock_digital_number_pane_cp10_g1

0x9b17,	// (0x000188c6) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0001e5b1) clock_digital_number_pane_cp10_g

0x9b17,	// (0x000188c6) clock_digital_separator_pane_cp10_g1

0x9b17,	// (0x000188c6) clock_digital_separator_pane_g2_cp10

0xa935,	// (0x000196e4) navi_pane_vded_g4

0xa93e,	// (0x000196ed) navi_pane_vded_g5

0xa947,	// (0x000196f6) navi_pane_vded_t1

0x9433,	// (0x000181e2) main_vded_pane

0x5081,	// (0x00013e30) main_vded_pane_g1

0x508b,	// (0x00013e3a) main_vded_pane_g2

0x5095,	// (0x00013e44) main_vded_pane_g3

0x0002,

0xf807,	// (0x0001e5b6) main_vded_pane_g

0x509f,	// (0x00013e4e) main_vded_pane_t1

0x50ad,	// (0x00013e5c) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0001e5bd) main_vded_pane_t

0x50bb,	// (0x00013e6a) vded_slider_pane

0x50c3,	// (0x00013e72) vded_video_pane

0xc94c,	// (0x0001b6fb) vded_video_pane_g1

0x50cb,	// (0x00013e7a) vded_video_pane_g2

0xc32d,	// (0x0001b0dc) vded_video_pane_g3

0x0002,

0xf813,	// (0x0001e5c2) vded_video_pane_g

0xc956,	// (0x0001b705) vded_slider_pane_g1

0xc03c,	// (0x0001adeb) vded_slider_pane_g2

0xc95f,	// (0x0001b70e) vded_slider_pane_g3

0xc968,	// (0x0001b717) vded_slider_pane_g4

0xc971,	// (0x0001b720) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0001e5c9) vded_slider_pane_g

0x4aa5,	// (0x00013854) mup3_rocker_pane_ParamLimits

0x4aa5,	// (0x00013854) mup3_rocker_pane

0x50d4,	// (0x00013e83) mup3_control_keys_pane_g1

0x50dc,	// (0x00013e8b) mup3_control_keys_pane_g2

0x50e4,	// (0x00013e93) mup3_control_keys_pane_g3

0x50ec,	// (0x00013e9b) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0001e5d4) mup3_control_keys_pane_g

0x05e1,	// (0x0000f390) popup_toolbar2_fixed_window_cp01_ParamLimits

0x05e1,	// (0x0000f390) popup_toolbar2_fixed_window_cp01

0x4ad9,	// (0x00013888) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4ad9,	// (0x00013888) popup_toolbar2_fixed_window_cp02

0xb14e,	// (0x00019efd) popup_call2_audio_second_window_t4_ParamLimits

0xb14e,	// (0x00019efd) popup_call2_audio_second_window_t4

0xb67c,	// (0x0001a42b) popup_call2_audio_first_window_t6_ParamLimits

0xb67c,	// (0x0001a42b) popup_call2_audio_first_window_t6

0xb912,	// (0x0001a6c1) popup_call2_audio_out_window_t6_ParamLimits

0xb912,	// (0x0001a6c1) popup_call2_audio_out_window_t6

0x9433,	// (0x000181e2) main_vitu_pane

0x50fc,	// (0x00013eab) aid_size_cell_itu_ParamLimits

0x50fc,	// (0x00013eab) aid_size_cell_itu

0x94a3,	// (0x00018252) bg_popup_window_pane_cp08_ParamLimits

0x94a3,	// (0x00018252) bg_popup_window_pane_cp08

0x5112,	// (0x00013ec1) field_vitu_entry_pane_ParamLimits

0x5112,	// (0x00013ec1) field_vitu_entry_pane

0x512a,	// (0x00013ed9) grid_vitu_function_pane_ParamLimits

0x512a,	// (0x00013ed9) grid_vitu_function_pane

0x5145,	// (0x00013ef4) grid_vitu_itu_pane_ParamLimits

0x5145,	// (0x00013ef4) grid_vitu_itu_pane

0x5163,	// (0x00013f12) cell_vitu_itu_pane_ParamLimits

0x5163,	// (0x00013f12) cell_vitu_itu_pane

0x5185,	// (0x00013f34) cell_vitu_function_pane_ParamLimits

0x5185,	// (0x00013f34) cell_vitu_function_pane

0x94a3,	// (0x00018252) bg_popup_sub_pane_cp08_ParamLimits

0x94a3,	// (0x00018252) bg_popup_sub_pane_cp08

0x519e,	// (0x00013f4d) field_vitu_entry_pane_t1_ParamLimits

0x519e,	// (0x00013f4d) field_vitu_entry_pane_t1

0xc992,	// (0x0001b741) field_vitu_entry_pane_t2_ParamLimits

0xc992,	// (0x0001b741) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0001e5e2) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0001e5e2) field_vitu_entry_pane_t

0xc9af,	// (0x0001b75e) bg_button_pane_cp05_ParamLimits

0xc9af,	// (0x0001b75e) bg_button_pane_cp05

0x51bd,	// (0x00013f6c) cell_vitu_itu_pane_g1

0x51d5,	// (0x00013f84) cell_vitu_itu_pane_t1_ParamLimits

0x51d5,	// (0x00013f84) cell_vitu_itu_pane_t1

0x51e7,	// (0x00013f96) cell_vitu_itu_pane_t2_ParamLimits

0x51e7,	// (0x00013f96) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0001e5e7) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0001e5e7) cell_vitu_itu_pane_t

0xc9bd,	// (0x0001b76c) bg_button_pane_cp07

0x521c,	// (0x00013fcb) cell_vitu_function_pane_g1

0x9bb2,	// (0x00018961) main_calc_pane_g1

0x0408,	// (0x0000f1b7) aid_visual_content_pane

0x9433,	// (0x000181e2) main_vradio_pane

0x5225,	// (0x00013fd4) main_vradio_pane_g1_ParamLimits

0x5225,	// (0x00013fd4) main_vradio_pane_g1

0xc9c7,	// (0x0001b776) main_vradio_pane_g2_ParamLimits

0xc9c7,	// (0x0001b776) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0001e5ee) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0001e5ee) main_vradio_pane_g

0x523e,	// (0x00013fed) main_vradio_pane_t1_ParamLimits

0x523e,	// (0x00013fed) main_vradio_pane_t1

0x5253,	// (0x00014002) main_vradio_pane_t2_ParamLimits

0x5253,	// (0x00014002) main_vradio_pane_t2

0xc9d4,	// (0x0001b783) main_vradio_pane_t3_ParamLimits

0xc9d4,	// (0x0001b783) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0001e5f3) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0001e5f3) main_vradio_pane_t

0x5268,	// (0x00014017) vradio_rocker_control_pane_ParamLimits

0x5268,	// (0x00014017) vradio_rocker_control_pane

0x527a,	// (0x00014029) vradio_station_info_pane_ParamLimits

0x527a,	// (0x00014029) vradio_station_info_pane

0xc9e8,	// (0x0001b797) vradio_frequency_info_pane_ParamLimits

0xc9e8,	// (0x0001b797) vradio_frequency_info_pane

0xc32d,	// (0x0001b0dc) vradio_station_info_pane_g1

0xc9f7,	// (0x0001b7a6) vradio_station_info_pane_t1_ParamLimits

0xc9f7,	// (0x0001b7a6) vradio_station_info_pane_t1

0xca19,	// (0x0001b7c8) vradio_station_info_pane_t2_ParamLimits

0xca19,	// (0x0001b7c8) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0001e5fa) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0001e5fa) vradio_station_info_pane_t

0xca2b,	// (0x0001b7da) vradio_tuning_pane

0xca33,	// (0x0001b7e2) vradio_rocker_control_pane_g1

0xca3b,	// (0x0001b7ea) vradio_rocker_control_pane_g2

0xca43,	// (0x0001b7f2) vradio_rocker_control_pane_g3

0xca4b,	// (0x0001b7fa) vradio_rocker_control_pane_g4

0xca53,	// (0x0001b802) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0001e5ff) vradio_rocker_control_pane_g

0x528c,	// (0x0001403b) vradio_frequency_info_pane_g1

0xca5b,	// (0x0001b80a) vradio_frequency_info_pane_t1_ParamLimits

0xca5b,	// (0x0001b80a) vradio_frequency_info_pane_t1

0x5296,	// (0x00014045) vradio_tuning_pane_g1

0x52a1,	// (0x00014050) vradio_tuning_pane_t1

0x9461,	// (0x00018210) area_side_right_pane_ParamLimits

0x9461,	// (0x00018210) area_side_right_pane

0xbdcd,	// (0x0001ab7c) status_small_pane_g1

0xbdd5,	// (0x0001ab84) status_small_pane_g2

0xbdde,	// (0x0001ab8d) status_small_pane_g3

0xbde7,	// (0x0001ab96) status_small_pane_g4

0x0003,

0xf60b,	// (0x0001e3ba) status_small_pane_g

0xbdf0,	// (0x0001ab9f) status_small_pane_t1

0x9433,	// (0x000181e2) main_video3_pane

0xca6f,	// (0x0001b81e) cams_zoom_vslider_pane

0xca77,	// (0x0001b826) image3_wide_pane_ParamLimits

0xca77,	// (0x0001b826) image3_wide_pane

0xca91,	// (0x0001b840) image3_wide_small_pane

0xca9d,	// (0x0001b84c) main_video3_pane_g1_ParamLimits

0xca9d,	// (0x0001b84c) main_video3_pane_g1

0xcab9,	// (0x0001b868) main_video3_pane_g2_ParamLimits

0xcab9,	// (0x0001b868) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0001e60a) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0001e60a) main_video3_pane_g

0xcad5,	// (0x0001b884) main_video3_pane_t1_ParamLimits

0xcad5,	// (0x0001b884) main_video3_pane_t1

0xcb00,	// (0x0001b8af) main_video3_pane_t2_ParamLimits

0xcb00,	// (0x0001b8af) main_video3_pane_t2

0xcb2b,	// (0x0001b8da) main_video3_pane_t3_ParamLimits

0xcb2b,	// (0x0001b8da) main_video3_pane_t3

0x0002,

0xf860,	// (0x0001e60f) main_video3_pane_t_ParamLimits

0xf860,	// (0x0001e60f) main_video3_pane_t

0xcb58,	// (0x0001b907) cams_zoom_vslider_pane_g1

0xcb61,	// (0x0001b910) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0001e616) cams_zoom_vslider_pane_g

0xcb69,	// (0x0001b918) small_slider_vertical_pane

0xc32d,	// (0x0001b0dc) small_slider_vertical_pane_g1

0xc32d,	// (0x0001b0dc) small_slider_vertical_pane_g2

0xcb71,	// (0x0001b920) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0001e61b) small_slider_vertical_pane_g

0x9433,	// (0x000181e2) main_hwr_training_pane

0xcb7a,	// (0x0001b929) hwr_training_instruct_pane_ParamLimits

0xcb7a,	// (0x0001b929) hwr_training_instruct_pane

0x52b0,	// (0x0001405f) hwr_training_navi_pane_ParamLimits

0x52b0,	// (0x0001405f) hwr_training_navi_pane

0x52cf,	// (0x0001407e) hwr_training_write_pane_ParamLimits

0x52cf,	// (0x0001407e) hwr_training_write_pane

0x9433,	// (0x000181e2) bg_frame_shadow_pane

0xcbb1,	// (0x0001b960) hwr_training_write_pane_g1

0xcbb9,	// (0x0001b968) hwr_training_write_pane_g2

0xcbc1,	// (0x0001b970) hwr_training_write_pane_g3

0xcbc9,	// (0x0001b978) hwr_training_write_pane_g4

0xcbd1,	// (0x0001b980) hwr_training_write_pane_g5

0xcbd9,	// (0x0001b988) hwr_training_write_pane_g6

0xcbe1,	// (0x0001b990) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0001e622) hwr_training_write_pane_g

0xcbe9,	// (0x0001b998) hwr_training_navi_pane_g1_ParamLimits

0xcbe9,	// (0x0001b998) hwr_training_navi_pane_g1

0xcbfb,	// (0x0001b9aa) hwr_training_navi_pane_g2_ParamLimits

0xcbfb,	// (0x0001b9aa) hwr_training_navi_pane_g2

0xcc0d,	// (0x0001b9bc) hwr_training_navi_pane_g3_ParamLimits

0xcc0d,	// (0x0001b9bc) hwr_training_navi_pane_g3

0xcc1d,	// (0x0001b9cc) hwr_training_navi_pane_g4_ParamLimits

0xcc1d,	// (0x0001b9cc) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0001e631) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0001e631) hwr_training_navi_pane_g

0xcc2a,	// (0x0001b9d9) hwr_training_navi_pane_t1

0x5319,	// (0x000140c8) list_single_hwr_training_instruct_pane_ParamLimits

0x5319,	// (0x000140c8) list_single_hwr_training_instruct_pane

0xcc38,	// (0x0001b9e7) list_single_hwr_training_instruct_pane_t1

0xc26d,	// (0x0001b01c) bg_frame_shadow_pane_g1

0xcc47,	// (0x0001b9f6) bg_frame_shadow_pane_g2

0xcc4f,	// (0x0001b9fe) bg_frame_shadow_pane_g3

0xcc57,	// (0x0001ba06) bg_frame_shadow_pane_g4

0xcc5f,	// (0x0001ba0e) bg_frame_shadow_pane_g5

0xcc67,	// (0x0001ba16) bg_frame_shadow_pane_g6

0xcc6f,	// (0x0001ba1e) bg_frame_shadow_pane_g7

0x9d0b,	// (0x00018aba) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0001e63c) bg_frame_shadow_pane_g

0x9433,	// (0x000181e2) main_video_tele_dialer_pane

0x532f,	// (0x000140de) aid_size_cell_video_keypad_ParamLimits

0x532f,	// (0x000140de) aid_size_cell_video_keypad

0x5349,	// (0x000140f8) grid_video_dialer_keypad_pane_ParamLimits

0x5349,	// (0x000140f8) grid_video_dialer_keypad_pane

0x5397,	// (0x00014146) video_down_pane_cp_ParamLimits

0x5397,	// (0x00014146) video_down_pane_cp

0x53c9,	// (0x00014178) cell_video_dialer_keypad_pane_ParamLimits

0x53c9,	// (0x00014178) cell_video_dialer_keypad_pane

0xcc77,	// (0x0001ba26) bg_button_pane_cp08_ParamLimits

0xcc77,	// (0x0001ba26) bg_button_pane_cp08

0x53eb,	// (0x0001419a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x53eb,	// (0x0001419a) cell_video_dialer_keypad_pane_g1

0x4a8f,	// (0x0001383e) mup3_rocker2_pane_ParamLimits

0x4a8f,	// (0x0001383e) mup3_rocker2_pane

0xc32d,	// (0x0001b0dc) mup3_rocker2_pane_g1

0x35bc,	// (0x0001236b) main_dialer2_pane

0x9433,	// (0x000181e2) main_mp4_pane

0xcc8b,	// (0x0001ba3a) main_mp4_pane_g1_ParamLimits

0xcc8b,	// (0x0001ba3a) main_mp4_pane_g1

0xcc8b,	// (0x0001ba3a) main_mp4_pane_g2_ParamLimits

0xcc8b,	// (0x0001ba3a) main_mp4_pane_g2

0x5425,	// (0x000141d4) main_mp4_pane_g3_ParamLimits

0x5425,	// (0x000141d4) main_mp4_pane_g3

0xcc99,	// (0x0001ba48) main_mp4_pane_g4_ParamLimits

0xcc99,	// (0x0001ba48) main_mp4_pane_g4

0xccc1,	// (0x0001ba70) main_mp4_pane_g5_ParamLimits

0xccc1,	// (0x0001ba70) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0001e65c) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0001e65c) main_mp4_pane_g

0xcd11,	// (0x0001bac0) main_mp4_pane_t1_ParamLimits

0xcd11,	// (0x0001bac0) main_mp4_pane_t1

0xcd6d,	// (0x0001bb1c) main_mp4_pane_t2_ParamLimits

0xcd6d,	// (0x0001bb1c) main_mp4_pane_t2

0xcdbf,	// (0x0001bb6e) main_mp4_pane_t3_ParamLimits

0xcdbf,	// (0x0001bb6e) main_mp4_pane_t3

0xcddf,	// (0x0001bb8e) main_mp4_pane_t4_ParamLimits

0xcddf,	// (0x0001bb8e) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0001e669) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0001e669) main_mp4_pane_t

0xce23,	// (0x0001bbd2) mp4_progress_pane_ParamLimits

0xce23,	// (0x0001bbd2) mp4_progress_pane

0xce6d,	// (0x0001bc1c) mp4_rocker_pane_ParamLimits

0xce6d,	// (0x0001bc1c) mp4_rocker_pane

0xce95,	// (0x0001bc44) mp4_progress_pane_t1

0xceae,	// (0x0001bc5d) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0001e672) mp4_progress_pane_t

0xcec7,	// (0x0001bc76) mup_progress_pane_cp04

0xc32d,	// (0x0001b0dc) mp4_rocker_pane_g1

0x5461,	// (0x00014210) aid_cell_size_keypad2_ParamLimits

0x5461,	// (0x00014210) aid_cell_size_keypad2

0x5477,	// (0x00014226) dialer2_ne_pane_ParamLimits

0x5477,	// (0x00014226) dialer2_ne_pane

0x5491,	// (0x00014240) grid_dialer2_keypad_pane_ParamLimits

0x5491,	// (0x00014240) grid_dialer2_keypad_pane

0xc112,	// (0x0001aec1) bg_popup_call_pane_cp07_ParamLimits

0xc112,	// (0x0001aec1) bg_popup_call_pane_cp07

0x54ad,	// (0x0001425c) dialer2_ne_pane_t1_ParamLimits

0x54ad,	// (0x0001425c) dialer2_ne_pane_t1

0x54e9,	// (0x00014298) cell_dialer2_keypad_pane_ParamLimits

0x54e9,	// (0x00014298) cell_dialer2_keypad_pane

0xcee5,	// (0x0001bc94) bg_button_pane_pane_cp04_ParamLimits

0xcee5,	// (0x0001bc94) bg_button_pane_pane_cp04

0x550b,	// (0x000142ba) cell_dialer2_keypad_pane_g1_ParamLimits

0x550b,	// (0x000142ba) cell_dialer2_keypad_pane_g1

0x14e1,	// (0x00010290) aid_placing_vt_set_content_ParamLimits

0x14e1,	// (0x00010290) aid_placing_vt_set_content

0x1509,	// (0x000102b8) aid_placing_vt_set_title_ParamLimits

0x1509,	// (0x000102b8) aid_placing_vt_set_title

0x9433,	// (0x000181e2) main_image3_pane

0x55d1,	// (0x00014380) area_side_right_pane_cp01_ParamLimits

0x55d1,	// (0x00014380) area_side_right_pane_cp01

0xcc8b,	// (0x0001ba3a) main_image3_pane_g1_ParamLimits

0xcc8b,	// (0x0001ba3a) main_image3_pane_g1

0x55e8,	// (0x00014397) main_image3_pane_g2_ParamLimits

0x55e8,	// (0x00014397) main_image3_pane_g2

0x5610,	// (0x000143bf) main_image3_pane_g3_ParamLimits

0x5610,	// (0x000143bf) main_image3_pane_g3

0x563a,	// (0x000143e9) main_image3_pane_g4_ParamLimits

0x563a,	// (0x000143e9) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0001e681) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0001e681) main_image3_pane_g

0x5664,	// (0x00014413) main_image3_pane_t1_ParamLimits

0x5664,	// (0x00014413) main_image3_pane_t1

0x56bc,	// (0x0001446b) main_image3_pane_t2_ParamLimits

0x56bc,	// (0x0001446b) main_image3_pane_t2

0x570e,	// (0x000144bd) main_image3_pane_t3_ParamLimits

0x570e,	// (0x000144bd) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0001e68a) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0001e68a) main_image3_pane_t

0x94a3,	// (0x00018252) grid_sctrl_middle_pane_cp01_ParamLimits

0x94a3,	// (0x00018252) grid_sctrl_middle_pane_cp01

0x5796,	// (0x00014545) cell_sctrl_middle_pane_cp01_ParamLimits

0x5796,	// (0x00014545) cell_sctrl_middle_pane_cp01

0x57b3,	// (0x00014562) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57b3,	// (0x00014562) cell_sctrl_middle_pane_cp01_g1

0x9433,	// (0x000181e2) main_call4_pane

0x57c9,	// (0x00014578) aid_size_button_call4_ParamLimits

0x57c9,	// (0x00014578) aid_size_button_call4

0x57fa,	// (0x000145a9) call4_windows_pane_ParamLimits

0x57fa,	// (0x000145a9) call4_windows_pane

0x581a,	// (0x000145c9) grid_call4_button_pane_ParamLimits

0x581a,	// (0x000145c9) grid_call4_button_pane

0xcf23,	// (0x0001bcd2) call4_windows_conf_pane

0xcf3a,	// (0x0001bce9) popup_call4_audio_first_window_ParamLimits

0xcf3a,	// (0x0001bce9) popup_call4_audio_first_window

0xcf82,	// (0x0001bd31) popup_call4_audio_second_window_ParamLimits

0xcf82,	// (0x0001bd31) popup_call4_audio_second_window

0xcf9b,	// (0x0001bd4a) popup_call4_audio_wait_window_ParamLimits

0xcf9b,	// (0x0001bd4a) popup_call4_audio_wait_window

0x5847,	// (0x000145f6) cell_call4_button_pane_ParamLimits

0x5847,	// (0x000145f6) cell_call4_button_pane

0x5870,	// (0x0001461f) bg_button_pane_cp09_ParamLimits

0x5870,	// (0x0001461f) bg_button_pane_cp09

0x587c,	// (0x0001462b) cell_call4_button_pane_g1_ParamLimits

0x587c,	// (0x0001462b) cell_call4_button_pane_g1

0x58a2,	// (0x00014651) cell_call4_button_pane_t1_ParamLimits

0x58a2,	// (0x00014651) cell_call4_button_pane_t1

0xcfe3,	// (0x0001bd92) popup_call4_audio_conf_window_ParamLimits

0xcfe3,	// (0x0001bd92) popup_call4_audio_conf_window

0x4aef,	// (0x0001389e) mup3_progress_pane_t1_ParamLimits

0x4b0e,	// (0x000138bd) mup3_progress_pane_t2_ParamLimits

0xc66a,	// (0x0001b419) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0001e55e) mup3_progress_pane_t_ParamLimits

0xc687,	// (0x0001b436) mup_progress_pane_cp03_ParamLimits

0x50f4,	// (0x00013ea3) mup3_control_keys_pane_g4_copy1

0xce51,	// (0x0001bc00) mp4_rocker2_pane_ParamLimits

0xce51,	// (0x0001bc00) mp4_rocker2_pane

0xcff7,	// (0x0001bda6) mp4_rocker2_pane_g1

0xcfff,	// (0x0001bdae) mp4_rocker2_pane_g2

0xd007,	// (0x0001bdb6) mp4_rocker2_pane_g3

0xd00f,	// (0x0001bdbe) mp4_rocker2_pane_g4

0xd017,	// (0x0001bdc6) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0001e693) mp4_rocker2_pane_g

0x9433,	// (0x000181e2) main_camera4_pane

0x9433,	// (0x000181e2) main_video4_pane

0x5365,	// (0x00014114) main_video_tele_dialer_pane_t1_ParamLimits

0x5365,	// (0x00014114) main_video_tele_dialer_pane_t1

0x537e,	// (0x0001412d) main_video_tele_dialer_pane_t2_ParamLimits

0x537e,	// (0x0001412d) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0001e64d) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0001e64d) main_video_tele_dialer_pane_t

0x58e4,	// (0x00014693) cam4_autofocus_pane_ParamLimits

0x58e4,	// (0x00014693) cam4_autofocus_pane

0x58fa,	// (0x000146a9) cam4_image_uncrop_pane_ParamLimits

0x58fa,	// (0x000146a9) cam4_image_uncrop_pane

0x5914,	// (0x000146c3) cam4_indicators_pane_ParamLimits

0x5914,	// (0x000146c3) cam4_indicators_pane

0x593f,	// (0x000146ee) main_camera4_pane_g1_ParamLimits

0x593f,	// (0x000146ee) main_camera4_pane_g1

0x5951,	// (0x00014700) main_camera4_pane_g2_ParamLimits

0x5951,	// (0x00014700) main_camera4_pane_g2

0x5964,	// (0x00014713) main_camera4_pane_g3_ParamLimits

0x5964,	// (0x00014713) main_camera4_pane_g3

0x5977,	// (0x00014726) main_camera4_pane_g4_ParamLimits

0x5977,	// (0x00014726) main_camera4_pane_g4

0x598a,	// (0x00014739) main_camera4_pane_g5_ParamLimits

0x598a,	// (0x00014739) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0001e69e) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0001e69e) main_camera4_pane_g

0x59ae,	// (0x0001475d) main_camera4_pane_t1_ParamLimits

0x59ae,	// (0x0001475d) main_camera4_pane_t1

0xc57b,	// (0x0001b32a) bg_tb_trans_pane_cp06

0xd043,	// (0x0001bdf2) cam4_indicators_pane_g1

0xd054,	// (0x0001be03) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0001e6b9) cam4_indicators_pane_g

0xd06c,	// (0x0001be1b) cam4_indicators_pane_t1

0x5a12,	// (0x000147c1) main_video4_pane_g1_ParamLimits

0x5a12,	// (0x000147c1) main_video4_pane_g1

0x5a21,	// (0x000147d0) main_video4_pane_g2_ParamLimits

0x5a21,	// (0x000147d0) main_video4_pane_g2

0x5a30,	// (0x000147df) main_video4_pane_g3_ParamLimits

0x5a30,	// (0x000147df) main_video4_pane_g3

0x5a3f,	// (0x000147ee) main_video4_pane_g4_ParamLimits

0x5a3f,	// (0x000147ee) main_video4_pane_g4

0x0004,

0xf911,	// (0x0001e6c0) main_video4_pane_g_ParamLimits

0xf911,	// (0x0001e6c0) main_video4_pane_g

0x5a5d,	// (0x0001480c) vid4_indicators_pane_ParamLimits

0x5a5d,	// (0x0001480c) vid4_indicators_pane

0x5a8b,	// (0x0001483a) video4_image_uncrop_cif_pane_ParamLimits

0x5a8b,	// (0x0001483a) video4_image_uncrop_cif_pane

0x5aa5,	// (0x00014854) video4_image_uncrop_nhd_pane_ParamLimits

0x5aa5,	// (0x00014854) video4_image_uncrop_nhd_pane

0x58fa,	// (0x000146a9) video4_image_uncrop_vga_pane_ParamLimits

0x58fa,	// (0x000146a9) video4_image_uncrop_vga_pane

0x94a3,	// (0x00018252) bg_tb_trans_pane_cp07

0xd096,	// (0x0001be45) vid4_indicators_pane_g1

0xd0aa,	// (0x0001be59) vid4_indicators_pane_g2

0xd0be,	// (0x0001be6d) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0001e6cb) vid4_indicators_pane_g

0xd0eb,	// (0x0001be9a) vid4_indicators_pane_t1

0x5ab9,	// (0x00014868) cam4_autofocus_pane_g1

0x5ac1,	// (0x00014870) cam4_autofocus_pane_g2

0x5ac9,	// (0x00014878) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0001e6d6) cam4_autofocus_pane_g

0x5ad1,	// (0x00014880) cam4_autofocus_pane_g3_copy1

0x53ad,	// (0x0001415c) video_down_pane_cp_t1

0x53bb,	// (0x0001416a) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0001e652) video_down_pane_cp_t

0x94a3,	// (0x00018252) popup_vitu2_window_ParamLimits

0x94a3,	// (0x00018252) popup_vitu2_window

0x5ad9,	// (0x00014888) aid_size_cell2_itu2_ParamLimits

0x5ad9,	// (0x00014888) aid_size_cell2_itu2

0x5aff,	// (0x000148ae) aid_size_cell_itu2_ParamLimits

0x5aff,	// (0x000148ae) aid_size_cell_itu2

0x5b5b,	// (0x0001490a) bg_popup_window_pane_cp09_ParamLimits

0x5b5b,	// (0x0001490a) bg_popup_window_pane_cp09

0x5b69,	// (0x00014918) field_vitu2_entry_pane_ParamLimits

0x5b69,	// (0x00014918) field_vitu2_entry_pane

0x5b8f,	// (0x0001493e) grid_vitu2_function_pane_ParamLimits

0x5b8f,	// (0x0001493e) grid_vitu2_function_pane

0x5be0,	// (0x0001498f) grid_vitu2_itu_pane_ParamLimits

0x5be0,	// (0x0001498f) grid_vitu2_itu_pane

0x5c76,	// (0x00014a25) cell_vitu2_itu_pane_ParamLimits

0x5c76,	// (0x00014a25) cell_vitu2_itu_pane

0x5ca2,	// (0x00014a51) cell_vitu2_function_pane_ParamLimits

0x5ca2,	// (0x00014a51) cell_vitu2_function_pane

0xd102,	// (0x0001beb1) bg_popup_call_pane_cp08_ParamLimits

0xd102,	// (0x0001beb1) bg_popup_call_pane_cp08

0xd119,	// (0x0001bec8) field_vitu2_entry_pane_g1

0xd125,	// (0x0001bed4) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0001e6dd) field_vitu2_entry_pane_g

0x5ce1,	// (0x00014a90) field_vitu2_entry_pane_t1_ParamLimits

0x5ce1,	// (0x00014a90) field_vitu2_entry_pane_t1

0xd13f,	// (0x0001beee) field_vitu2_entry_pane_t2_ParamLimits

0xd13f,	// (0x0001beee) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0001e6e4) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0001e6e4) field_vitu2_entry_pane_t

0x5d10,	// (0x00014abf) bg_button_pane_cp010_ParamLimits

0x5d10,	// (0x00014abf) bg_button_pane_cp010

0xd164,	// (0x0001bf13) cell_vitu2_itu_pane_g1

0x5d2c,	// (0x00014adb) cell_vitu2_itu_pane_t1_ParamLimits

0x5d2c,	// (0x00014adb) cell_vitu2_itu_pane_t1

0x5d8a,	// (0x00014b39) cell_vitu2_itu_pane_t2_ParamLimits

0x5d8a,	// (0x00014b39) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0001e6ee) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0001e6ee) cell_vitu2_itu_pane_t

0x94a3,	// (0x00018252) bg_button_pane_cp011

0x5e76,	// (0x00014c25) cell_vitu2_function_pane_g1

0x9433,	// (0x000181e2) main_myfav_hc_pane

0x575e,	// (0x0001450d) popup_image3_note_pane_ParamLimits

0x575e,	// (0x0001450d) popup_image3_note_pane

0x577a,	// (0x00014529) popup_image3_tool_bar_pane_ParamLimits

0x577a,	// (0x00014529) popup_image3_tool_bar_pane

0x5e18,	// (0x00014bc7) cell_vitu2_itu_pane_t3_ParamLimits

0x5e18,	// (0x00014bc7) cell_vitu2_itu_pane_t3

0x9433,	// (0x000181e2) bg_popup_trans_pane

0xd176,	// (0x0001bf25) grid_image3_tool_bar_pane

0xd180,	// (0x0001bf2f) bg_popup_trans_pane_g1

0xa0ee,	// (0x00018e9d) bg_popup_trans_pane_g2

0xd188,	// (0x0001bf37) bg_popup_trans_pane_g3

0xd190,	// (0x0001bf3f) bg_popup_trans_pane_g4

0xd198,	// (0x0001bf47) bg_popup_trans_pane_g5

0xd1a0,	// (0x0001bf4f) bg_popup_trans_pane_g6

0xd1a8,	// (0x0001bf57) bg_popup_trans_pane_g7

0xd1b0,	// (0x0001bf5f) bg_popup_trans_pane_g8

0xa0ce,	// (0x00018e7d) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0001e6f5) bg_popup_trans_pane_g

0xd1b8,	// (0x0001bf67) cell_image3_tool_bar_pane_ParamLimits

0xd1b8,	// (0x0001bf67) cell_image3_tool_bar_pane

0xc32d,	// (0x0001b0dc) cell_image3_tool_bar_pane_g1

0x9433,	// (0x000181e2) bg_popup_trans_pane_cp1

0xd1cc,	// (0x0001bf7b) popup_image3_note_pane_t1

0xd1da,	// (0x0001bf89) popup_image3_note_pane_t2

0xd1e8,	// (0x0001bf97) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0001e708) popup_image3_note_pane_t

0xd1f6,	// (0x0001bfa5) popup_image3_note_pane_t3_copy1

0x5e8a,	// (0x00014c39) bg_myfav_hc_instruction_pane_ParamLimits

0x5e8a,	// (0x00014c39) bg_myfav_hc_instruction_pane

0x5e9e,	// (0x00014c4d) cell_myfav_contact_pane_ParamLimits

0x5e9e,	// (0x00014c4d) cell_myfav_contact_pane

0x5ebc,	// (0x00014c6b) cell_myfav_contact_pane_cp1_ParamLimits

0x5ebc,	// (0x00014c6b) cell_myfav_contact_pane_cp1

0x5ed4,	// (0x00014c83) cell_myfav_contact_pane_cp2_ParamLimits

0x5ed4,	// (0x00014c83) cell_myfav_contact_pane_cp2

0x5eec,	// (0x00014c9b) cell_myfav_contact_pane_cp3_ParamLimits

0x5eec,	// (0x00014c9b) cell_myfav_contact_pane_cp3

0x5f03,	// (0x00014cb2) cell_myfav_contact_pane_cp4_ParamLimits

0x5f03,	// (0x00014cb2) cell_myfav_contact_pane_cp4

0x5f1b,	// (0x00014cca) cell_myfav_contact_pane_cp5_ParamLimits

0x5f1b,	// (0x00014cca) cell_myfav_contact_pane_cp5

0x5f2f,	// (0x00014cde) cell_myfav_contact_pane_cp6_ParamLimits

0x5f2f,	// (0x00014cde) cell_myfav_contact_pane_cp6

0x5f45,	// (0x00014cf4) cell_myfav_contact_pane_cp7_ParamLimits

0x5f45,	// (0x00014cf4) cell_myfav_contact_pane_cp7

0xd23a,	// (0x0001bfe9) listscroll_gen_pane_cp05

0x5f5f,	// (0x00014d0e) main_myfav_hc_pane_g1_ParamLimits

0x5f5f,	// (0x00014d0e) main_myfav_hc_pane_g1

0x5f79,	// (0x00014d28) main_myfav_hc_pane_g2_ParamLimits

0x5f79,	// (0x00014d28) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0001e70f) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0001e70f) main_myfav_hc_pane_g

0x5fab,	// (0x00014d5a) main_myfav_hc_pane_t1_ParamLimits

0x5fab,	// (0x00014d5a) main_myfav_hc_pane_t1

0xd243,	// (0x0001bff2) main_myfav_hc_pane_t2_ParamLimits

0xd243,	// (0x0001bff2) main_myfav_hc_pane_t2

0xd255,	// (0x0001c004) main_myfav_hc_pane_t3_ParamLimits

0xd255,	// (0x0001c004) main_myfav_hc_pane_t3

0x5fc2,	// (0x00014d71) main_myfav_hc_pane_t4_ParamLimits

0x5fc2,	// (0x00014d71) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0001e716) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0001e716) main_myfav_hc_pane_t

0xc32d,	// (0x0001b0dc) bg_myfav_hc_instruction_pane_g1

0xd267,	// (0x0001c016) cell_myfav_contact_pane_g1_ParamLimits

0xd267,	// (0x0001c016) cell_myfav_contact_pane_g1

0xd267,	// (0x0001c016) cell_myfav_contact_pane_g2_ParamLimits

0xd267,	// (0x0001c016) cell_myfav_contact_pane_g2

0xd273,	// (0x0001c022) cell_myfav_contact_pane_g3_ParamLimits

0xd273,	// (0x0001c022) cell_myfav_contact_pane_g3

0xc654,	// (0x0001b403) cell_myfav_contact_pane_g4_ParamLimits

0xc654,	// (0x0001b403) cell_myfav_contact_pane_g4

0xd280,	// (0x0001c02f) cell_myfav_contact_pane_g5_ParamLimits

0xd280,	// (0x0001c02f) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0001e721) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0001e721) cell_myfav_contact_pane_g

0x5f93,	// (0x00014d42) main_myfav_hc_pane_g3_ParamLimits

0x5f93,	// (0x00014d42) main_myfav_hc_pane_g3

0x0543,	// (0x0000f2f2) popup_adpt_find_window

0x5fea,	// (0x00014d99) afind_page_pane_ParamLimits

0x5fea,	// (0x00014d99) afind_page_pane

0x5fff,	// (0x00014dae) aid_size_cell_afind_ParamLimits

0x5fff,	// (0x00014dae) aid_size_cell_afind

0x601d,	// (0x00014dcc) bg_popup_sub_pane_cp09_ParamLimits

0x601d,	// (0x00014dcc) bg_popup_sub_pane_cp09

0x602a,	// (0x00014dd9) find_pane_cp01_ParamLimits

0x602a,	// (0x00014dd9) find_pane_cp01

0xd28c,	// (0x0001c03b) grid_afind_control_pane_ParamLimits

0xd28c,	// (0x0001c03b) grid_afind_control_pane

0x6037,	// (0x00014de6) grid_afind_pane_ParamLimits

0x6037,	// (0x00014de6) grid_afind_pane

0x6056,	// (0x00014e05) cell_afind_pane_ParamLimits

0x6056,	// (0x00014e05) cell_afind_pane

0xc32d,	// (0x0001b0dc) afind_page_pane_g1

0x60bd,	// (0x00014e6c) afind_page_pane_g2

0x60c6,	// (0x00014e75) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0001e72c) afind_page_pane_g

0x60cf,	// (0x00014e7e) afind_page_pane_t1

0xd2a0,	// (0x0001c04f) cell_afind_grid_control_pane_ParamLimits

0xd2a0,	// (0x0001c04f) cell_afind_grid_control_pane

0xcee5,	// (0x0001bc94) bg_button_pane_cp69_ParamLimits

0xcee5,	// (0x0001bc94) bg_button_pane_cp69

0x60ef,	// (0x00014e9e) cell_afind_pane_g1_ParamLimits

0x60ef,	// (0x00014e9e) cell_afind_pane_g1

0x60fc,	// (0x00014eab) cell_afind_pane_t1_ParamLimits

0x60fc,	// (0x00014eab) cell_afind_pane_t1

0x9ee7,	// (0x00018c96) bg_button_pane_cp72

0xd2af,	// (0x0001c05e) cell_afind_grid_control_pane_g1

0x307b,	// (0x00011e2a) aid_image_placing_area_ParamLimits

0x307b,	// (0x00011e2a) aid_image_placing_area

0xc97a,	// (0x0001b729) field_vitu_entry_pane_g1_ParamLimits

0xc97a,	// (0x0001b729) field_vitu_entry_pane_g1

0xc986,	// (0x0001b735) field_vitu_entry_pane_g2_ParamLimits

0xc986,	// (0x0001b735) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0001e5dd) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0001e5dd) field_vitu_entry_pane_g

0x51bd,	// (0x00013f6c) cell_vitu_itu_pane_g1_ParamLimits

0x51ff,	// (0x00013fae) cell_vitu_itu_pane_t3_ParamLimits

0x51ff,	// (0x00013fae) cell_vitu_itu_pane_t3

0xce95,	// (0x0001bc44) mp4_progress_pane_t1_ParamLimits

0xceae,	// (0x0001bc5d) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0001e672) mp4_progress_pane_t_ParamLimits

0xcec7,	// (0x0001bc76) mup_progress_pane_cp04_ParamLimits

0x5fd6,	// (0x00014d85) main_myfav_hc_pane_t5_ParamLimits

0x5fd6,	// (0x00014d85) main_myfav_hc_pane_t5

0x9459,	// (0x00018208) aid_zoom_text_primary

0x0543,	// (0x0000f2f2) popup_adpt_find_window_ParamLimits

0x94a3,	// (0x00018252) main_cam_set_pane

0x592b,	// (0x000146da) cam4_zoom_pane_ParamLimits

0x592b,	// (0x000146da) cam4_zoom_pane

0x610e,	// (0x00014ebd) main_cam_set_pane_g1_ParamLimits

0x610e,	// (0x00014ebd) main_cam_set_pane_g1

0x611c,	// (0x00014ecb) main_cam_set_pane_g2_ParamLimits

0x611c,	// (0x00014ecb) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0001e733) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0001e733) main_cam_set_pane_g

0x613d,	// (0x00014eec) main_cam_set_pane_t1_ParamLimits

0x613d,	// (0x00014eec) main_cam_set_pane_t1

0x6158,	// (0x00014f07) main_cset_listscroll_pane_ParamLimits

0x6158,	// (0x00014f07) main_cset_listscroll_pane

0x6178,	// (0x00014f27) main_cset_slider_pane_ParamLimits

0x6178,	// (0x00014f27) main_cset_slider_pane

0xd2c0,	// (0x0001c06f) main_cset_list_pane_ParamLimits

0xd2c0,	// (0x0001c06f) main_cset_list_pane

0xd2d0,	// (0x0001c07f) scroll_pane_cp028

0x619e,	// (0x00014f4d) aid_area_touch_slider

0x61ba,	// (0x00014f69) cset_slider_pane

0x61e4,	// (0x00014f93) main_cset_slider_pane_g1

0x61f9,	// (0x00014fa8) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0001e738) main_cset_slider_pane_g

0xd321,	// (0x0001c0d0) main_cset_slider_pane_t1

0x629d,	// (0x0001504c) main_cset_slider_pane_t2

0x62b7,	// (0x00015066) main_cset_slider_pane_t3

0x62d1,	// (0x00015080) main_cset_slider_pane_t4

0x62eb,	// (0x0001509a) main_cset_slider_pane_t5

0x6305,	// (0x000150b4) main_cset_slider_pane_t6

0x631a,	// (0x000150c9) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0001e75d) main_cset_slider_pane_t

0x641e,	// (0x000151cd) cset_list_set_pane_ParamLimits

0x641e,	// (0x000151cd) cset_list_set_pane

0x6430,	// (0x000151df) aid_position_infowindow_above

0x6438,	// (0x000151e7) aid_position_infowindow_below

0x6440,	// (0x000151ef) cset_list_set_pane_g1_ParamLimits

0x6440,	// (0x000151ef) cset_list_set_pane_g1

0x644c,	// (0x000151fb) cset_list_set_pane_g3_ParamLimits

0x644c,	// (0x000151fb) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0001e77c) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0001e77c) cset_list_set_pane_g

0x645b,	// (0x0001520a) cset_list_set_pane_t1_ParamLimits

0x645b,	// (0x0001520a) cset_list_set_pane_t1

0x94a3,	// (0x00018252) list_highlight_pane_cp021_ParamLimits

0x94a3,	// (0x00018252) list_highlight_pane_cp021

0xaabb,	// (0x0001986a) cset_slider_pane_g1

0xaacd,	// (0x0001987c) cset_slider_pane_g2

0xaac4,	// (0x00019873) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0001e781) cset_slider_pane_g

0xd3c1,	// (0x0001c170) aid_area_touch_cam4_zoom

0xd3c9,	// (0x0001c178) cam4_zoom_cont_pane

0xd3d1,	// (0x0001c180) cam4_zoom_pane_g1

0xd3d9,	// (0x0001c188) cam4_zoom_pane_g2

0x6470,	// (0x0001521f) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0001e788) cam4_zoom_pane_g

0xcb71,	// (0x0001b920) cam4_zoom_cont_pane_g1

0xd3e1,	// (0x0001c190) cam4_zoom_cont_pane_g2

0xd3ea,	// (0x0001c199) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0001e78f) cam4_zoom_cont_pane_g

0x57e7,	// (0x00014596) call4_image_pane_ParamLimits

0x57e7,	// (0x00014596) call4_image_pane

0xcf23,	// (0x0001bcd2) call4_windows_conf_pane_ParamLimits

0xcf60,	// (0x0001bd0f) popup_call4_audio_in_window_ParamLimits

0xcf60,	// (0x0001bd0f) popup_call4_audio_in_window

0x9433,	// (0x000181e2) bg_popup_call2_act_pane_cp02

0xcfdb,	// (0x0001bd8a) call4_list_conf_pane

0xc32d,	// (0x0001b0dc) call4_image_pane_g1

0xc32d,	// (0x0001b0dc) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0001e49e) call4_image_pane_g

0xd3f3,	// (0x0001c1a2) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3f3,	// (0x0001c1a2) list_single_graphic_popup_conf4_pane

0x9433,	// (0x000181e2) list_highlight_pane_cp022

0xd406,	// (0x0001c1b5) list_single_graphic_popup_conf4_pane_g1

0xa6a5,	// (0x00019454) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0001e796) list_single_graphic_popup_conf4_pane_g

0xd40e,	// (0x0001c1bd) list_single_graphic_popup_conf4_pane_t1

0x162d,	// (0x000103dc) popup_vtel_slider_window_ParamLimits

0x162d,	// (0x000103dc) popup_vtel_slider_window

0xced3,	// (0x0001bc82) dialer2_ne_pane_t2_ParamLimits

0xced3,	// (0x0001bc82) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0001e677) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0001e677) dialer2_ne_pane_t

0xc112,	// (0x0001aec1) bg_popup_sub_pane_cp010_ParamLimits

0xc112,	// (0x0001aec1) bg_popup_sub_pane_cp010

0x6478,	// (0x00015227) popup_vtel_slider_window_g1_ParamLimits

0x6478,	// (0x00015227) popup_vtel_slider_window_g1

0x648b,	// (0x0001523a) popup_vtel_slider_window_g2_ParamLimits

0x648b,	// (0x0001523a) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0001e79b) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0001e79b) popup_vtel_slider_window_g

0x64e1,	// (0x00015290) vtel_slider_pane_ParamLimits

0x64e1,	// (0x00015290) vtel_slider_pane

0x6503,	// (0x000152b2) vtel_slider_pane_g1_ParamLimits

0x6503,	// (0x000152b2) vtel_slider_pane_g1

0x6517,	// (0x000152c6) vtel_slider_pane_g2_ParamLimits

0x6517,	// (0x000152c6) vtel_slider_pane_g2

0x652f,	// (0x000152de) vtel_slider_pane_g3_ParamLimits

0x652f,	// (0x000152de) vtel_slider_pane_g3

0x6503,	// (0x000152b2) vtel_slider_pane_g4_ParamLimits

0x6503,	// (0x000152b2) vtel_slider_pane_g4

0x6545,	// (0x000152f4) vtel_slider_pane_g5_ParamLimits

0x6545,	// (0x000152f4) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0001e7a4) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0001e7a4) vtel_slider_pane_g

0x94a3,	// (0x00018252) main_gallery2_pane

0x5b2b,	// (0x000148da) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b2b,	// (0x000148da) aid_size_row_itut2_dropdow_list

0x5bb7,	// (0x00014966) grid_vitu2_function_top_pane_ParamLimits

0x5bb7,	// (0x00014966) grid_vitu2_function_top_pane

0x5c21,	// (0x000149d0) popup_vitu2_dropdown_list_window_ParamLimits

0x5c21,	// (0x000149d0) popup_vitu2_dropdown_list_window

0x5c4a,	// (0x000149f9) popup_vitu2_match_list_window

0x655b,	// (0x0001530a) cell_vitu2_function_top_pane_ParamLimits

0x655b,	// (0x0001530a) cell_vitu2_function_top_pane

0x6573,	// (0x00015322) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6573,	// (0x00015322) cell_vitu2_function_top_pane_cp01

0x658f,	// (0x0001533e) cell_vitu2_function_top_wide_pane_ParamLimits

0x658f,	// (0x0001533e) cell_vitu2_function_top_wide_pane

0x94a3,	// (0x00018252) bg_button_pane_cp012

0x65ab,	// (0x0001535a) cell_vitu2_function_top_pane_g1

0xd432,	// (0x0001c1e1) bg_button_pane_cp013_ParamLimits

0xd432,	// (0x0001c1e1) bg_button_pane_cp013

0x65bf,	// (0x0001536e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65bf,	// (0x0001536e) cell_vitu2_function_top_wide_pane_g1

0x94a3,	// (0x00018252) bg_popup_sub_pane_cp20

0x65d7,	// (0x00015386) list_vitu2_match_list_pane

0xd180,	// (0x0001bf2f) bg_popup_sub_pane_cp20_g1

0xd188,	// (0x0001bf37) bg_popup_sub_pane_cp20_g2

0xa0ee,	// (0x00018e9d) bg_popup_sub_pane_cp20_g3

0xd190,	// (0x0001bf3f) bg_popup_sub_pane_cp20_g4

0xa0ce,	// (0x00018e7d) bg_popup_sub_pane_cp20_g5

0xd44e,	// (0x0001c1fd) bg_popup_sub_pane_cp20_g6

0xd1a0,	// (0x0001bf4f) bg_popup_sub_pane_cp20_g7

0xd1a8,	// (0x0001bf57) bg_popup_sub_pane_cp20_g8

0xd1b0,	// (0x0001bf5f) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0001e7af) bg_popup_sub_pane_cp20_g

0xd456,	// (0x0001c205) list_vitu2_match_list_item_pane_ParamLimits

0xd456,	// (0x0001c205) list_vitu2_match_list_item_pane

0xd468,	// (0x0001c217) list_vitu2_match_list_item_pane_t1

0x9433,	// (0x000181e2) bg_popup_sub_pane_cp21

0xa55e,	// (0x0001930d) grid_vitu2_dropdown_list_pane

0x6645,	// (0x000153f4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6645,	// (0x000153f4) cell_vitu2_dropdown_list_char_pane

0x6666,	// (0x00015415) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6666,	// (0x00015415) cell_vitu2_dropdown_list_ctrl_pane

0xd476,	// (0x0001c225) cell_vitu2_dropdown_list_char_pane_g1

0xd47f,	// (0x0001c22e) cell_vitu2_dropdown_list_char_pane_g2

0xd488,	// (0x0001c237) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0001e7cc) cell_vitu2_dropdown_list_char_pane_g

0x6692,	// (0x00015441) cell_vitu2_dropdown_list_char_pane_t1

0x66a0,	// (0x0001544f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66a0,	// (0x0001544f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66ad,	// (0x0001545c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66ad,	// (0x0001545c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66ba,	// (0x00015469) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66ba,	// (0x00015469) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66c7,	// (0x00015476) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66c7,	// (0x00015476) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc57b,	// (0x0001b32a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc57b,	// (0x0001b32a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0001e7d3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0001e7d3) cell_vitu2_dropdown_list_ctrl_pane_g

0x66e3,	// (0x00015492) aid_size_cell_gallery2_ParamLimits

0x66e3,	// (0x00015492) aid_size_cell_gallery2

0x6701,	// (0x000154b0) grid_gallery2_pane_ParamLimits

0x6701,	// (0x000154b0) grid_gallery2_pane

0x671b,	// (0x000154ca) scroll_pane_cp029_ParamLimits

0x671b,	// (0x000154ca) scroll_pane_cp029

0x672c,	// (0x000154db) cell_gallery2_pane_ParamLimits

0x672c,	// (0x000154db) cell_gallery2_pane

0xd491,	// (0x0001c240) cell_gallery2_pane_g2

0x678b,	// (0x0001553a) cell_gallery2_pane_g3

0xd499,	// (0x0001c248) cell_gallery2_pane_g4

0xd4a1,	// (0x0001c250) cell_gallery2_pane_g5

0x9e8b,	// (0x00018c3a) grid_highlight_pane_cp10

0x5c4a,	// (0x000149f9) popup_vitu2_match_list_window_ParamLimits

0x5c5f,	// (0x00014a0e) popup_vitu2_query_window_ParamLimits

0x5c5f,	// (0x00014a0e) popup_vitu2_query_window

0x9433,	// (0x000181e2) bg_vitu2_candi_button_pane

0xd476,	// (0x0001c225) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd47f,	// (0x0001c22e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd488,	// (0x0001c237) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6793,	// (0x00015542) bg_button_pane_cp015

0x67a7,	// (0x00015556) bg_button_pane_cp016

0x67ba,	// (0x00015569) bg_button_pane_cp017

0xbe12,	// (0x0001abc1) bg_popup_sub_pane_cp22

0xd4a9,	// (0x0001c258) popup_vitu2_query_window_g1

0x67ff,	// (0x000155ae) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0001e7de) popup_vitu2_query_window_g

0x681e,	// (0x000155cd) popup_vitu2_query_window_t1_ParamLimits

0x681e,	// (0x000155cd) popup_vitu2_query_window_t1

0x6853,	// (0x00015602) popup_vitu2_query_window_t2_ParamLimits

0x6853,	// (0x00015602) popup_vitu2_query_window_t2

0x6865,	// (0x00015614) popup_vitu2_query_window_t3_ParamLimits

0x6865,	// (0x00015614) popup_vitu2_query_window_t3

0x688d,	// (0x0001563c) popup_vitu2_query_window_t4_ParamLimits

0x688d,	// (0x0001563c) popup_vitu2_query_window_t4

0x68ae,	// (0x0001565d) popup_vitu2_query_window_t5_ParamLimits

0x68ae,	// (0x0001565d) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0001e7e5) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0001e7e5) popup_vitu2_query_window_t

0xd2b8,	// (0x0001c067) main_cset_text_pane

0x619e,	// (0x00014f4d) aid_area_touch_slider_ParamLimits

0x61ba,	// (0x00014f69) cset_slider_pane_ParamLimits

0x61e4,	// (0x00014f93) main_cset_slider_pane_g1_ParamLimits

0x61f9,	// (0x00014fa8) main_cset_slider_pane_g2_ParamLimits

0xd2d9,	// (0x0001c088) main_cset_slider_pane_g3_ParamLimits

0xd2d9,	// (0x0001c088) main_cset_slider_pane_g3

0x620e,	// (0x00014fbd) main_cset_slider_pane_g4_ParamLimits

0x620e,	// (0x00014fbd) main_cset_slider_pane_g4

0x621d,	// (0x00014fcc) main_cset_slider_pane_g5_ParamLimits

0x621d,	// (0x00014fcc) main_cset_slider_pane_g5

0x6229,	// (0x00014fd8) main_cset_slider_pane_g6_ParamLimits

0x6229,	// (0x00014fd8) main_cset_slider_pane_g6

0xf989,	// (0x0001e738) main_cset_slider_pane_g_ParamLimits

0xd321,	// (0x0001c0d0) main_cset_slider_pane_t1_ParamLimits

0x629d,	// (0x0001504c) main_cset_slider_pane_t2_ParamLimits

0x62b7,	// (0x00015066) main_cset_slider_pane_t3_ParamLimits

0x62d1,	// (0x00015080) main_cset_slider_pane_t4_ParamLimits

0x62eb,	// (0x0001509a) main_cset_slider_pane_t5_ParamLimits

0x6305,	// (0x000150b4) main_cset_slider_pane_t6_ParamLimits

0x631a,	// (0x000150c9) main_cset_slider_pane_t7_ParamLimits

0x6344,	// (0x000150f3) main_cset_slider_pane_t8_ParamLimits

0x6344,	// (0x000150f3) main_cset_slider_pane_t8

0x636c,	// (0x0001511b) main_cset_slider_pane_t9_ParamLimits

0x636c,	// (0x0001511b) main_cset_slider_pane_t9

0x6394,	// (0x00015143) main_cset_slider_pane_t10_ParamLimits

0x6394,	// (0x00015143) main_cset_slider_pane_t10

0x63bc,	// (0x0001516b) main_cset_slider_pane_t11_ParamLimits

0x63bc,	// (0x0001516b) main_cset_slider_pane_t11

0x63e4,	// (0x00015193) main_cset_slider_pane_t12_ParamLimits

0x63e4,	// (0x00015193) main_cset_slider_pane_t12

0x6401,	// (0x000151b0) main_cset_slider_pane_t13_ParamLimits

0x6401,	// (0x000151b0) main_cset_slider_pane_t13

0xf9ae,	// (0x0001e75d) main_cset_slider_pane_t_ParamLimits

0x9433,	// (0x000181e2) bg_popup_sub_pane_cp011

0xd4b5,	// (0x0001c264) main_cset_text_pane_g1

0xd4bd,	// (0x0001c26c) main_cset_text_pane_t1

0xd4cb,	// (0x0001c27a) main_cset_text_pane_t2

0xd4d9,	// (0x0001c288) main_cset_text_pane_t3

0xd4e7,	// (0x0001c296) main_cset_text_pane_t4

0xd4f5,	// (0x0001c2a4) main_cset_text_pane_t5

0xd503,	// (0x0001c2b2) main_cset_text_pane_t6

0xd511,	// (0x0001c2c0) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0001e7f4) main_cset_text_pane_t

0x9433,	// (0x000181e2) main_cam4_burst_pane

0x9433,	// (0x000181e2) main_cam5_pane

0x60dd,	// (0x00014e8c) bg_button_pane_cp019

0x60e6,	// (0x00014e95) bg_button_pane_cp020

0xd2e5,	// (0x0001c094) main_cset_slider_pane_g7_ParamLimits

0xd2e5,	// (0x0001c094) main_cset_slider_pane_g7

0xd2f1,	// (0x0001c0a0) main_cset_slider_pane_g8_ParamLimits

0xd2f1,	// (0x0001c0a0) main_cset_slider_pane_g8

0x623d,	// (0x00014fec) main_cset_slider_pane_g9_ParamLimits

0x623d,	// (0x00014fec) main_cset_slider_pane_g9

0x6249,	// (0x00014ff8) main_cset_slider_pane_g10_ParamLimits

0x6249,	// (0x00014ff8) main_cset_slider_pane_g10

0x6255,	// (0x00015004) main_cset_slider_pane_g11_ParamLimits

0x6255,	// (0x00015004) main_cset_slider_pane_g11

0x6261,	// (0x00015010) main_cset_slider_pane_g12_ParamLimits

0x6261,	// (0x00015010) main_cset_slider_pane_g12

0x626d,	// (0x0001501c) main_cset_slider_pane_g13_ParamLimits

0x626d,	// (0x0001501c) main_cset_slider_pane_g13

0x6279,	// (0x00015028) main_cset_slider_pane_g14_ParamLimits

0x6279,	// (0x00015028) main_cset_slider_pane_g14

0x6285,	// (0x00015034) main_cset_slider_pane_g15_ParamLimits

0x6285,	// (0x00015034) main_cset_slider_pane_g15

0xd34f,	// (0x0001c0fe) main_cset_slider_pane_t14_ParamLimits

0xd34f,	// (0x0001c0fe) main_cset_slider_pane_t14

0xd388,	// (0x0001c137) main_cset_slider_pane_t15_ParamLimits

0xd388,	// (0x0001c137) main_cset_slider_pane_t15

0x6925,	// (0x000156d4) aid_cam4_burst_size_cell_ParamLimits

0x6925,	// (0x000156d4) aid_cam4_burst_size_cell

0x6945,	// (0x000156f4) grid_cam4_burst_pane_ParamLimits

0x6945,	// (0x000156f4) grid_cam4_burst_pane

0x697d,	// (0x0001572c) linegrid_cam4_burst_pane_ParamLimits

0x697d,	// (0x0001572c) linegrid_cam4_burst_pane

0xd51f,	// (0x0001c2ce) scroll_pane_cp30_ParamLimits

0xd51f,	// (0x0001c2ce) scroll_pane_cp30

0x69a1,	// (0x00015750) cell_cam4_burst_pane_ParamLimits

0x69a1,	// (0x00015750) cell_cam4_burst_pane

0xd52b,	// (0x0001c2da) linegrid_cam4_burst_pane_g1_ParamLimits

0xd52b,	// (0x0001c2da) linegrid_cam4_burst_pane_g1

0x69ee,	// (0x0001579d) linegrid_cam4_burst_pane_g2_ParamLimits

0x69ee,	// (0x0001579d) linegrid_cam4_burst_pane_g2

0xd538,	// (0x0001c2e7) linegrid_cam4_burst_pane_g3_ParamLimits

0xd538,	// (0x0001c2e7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0001e803) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0001e803) linegrid_cam4_burst_pane_g

0x69ff,	// (0x000157ae) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x69ff,	// (0x000157ae) linegrid_cam4_burst_pane_g3_copy1

0xd545,	// (0x0001c2f4) linegrid_cam4_burst_pane_g4_ParamLimits

0xd545,	// (0x0001c2f4) linegrid_cam4_burst_pane_g4

0x6a19,	// (0x000157c8) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a19,	// (0x000157c8) linegrid_cam4_burst_pane_g5

0x6a2a,	// (0x000157d9) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a2a,	// (0x000157d9) linegrid_cam4_burst_pane_g6

0xd552,	// (0x0001c301) linegrid_cam4_burst_pane_g7_ParamLimits

0xd552,	// (0x0001c301) linegrid_cam4_burst_pane_g7

0x6a41,	// (0x000157f0) cell_cam4_burst_pane_g1

0xd56b,	// (0x0001c31a) main_cam5_pane_t1_ParamLimits

0xd56b,	// (0x0001c31a) main_cam5_pane_t1

0xd57d,	// (0x0001c32c) main_cam5_pane_t2_ParamLimits

0xd57d,	// (0x0001c32c) main_cam5_pane_t2

0xd58f,	// (0x0001c33e) main_cam5_pane_t3_ParamLimits

0xd58f,	// (0x0001c33e) main_cam5_pane_t3

0xd5a1,	// (0x0001c350) main_cam5_pane_t4_ParamLimits

0xd5a1,	// (0x0001c350) main_cam5_pane_t4

0xd5b9,	// (0x0001c368) main_cam5_pane_t5_ParamLimits

0xd5b9,	// (0x0001c368) main_cam5_pane_t5

0xd5cd,	// (0x0001c37c) main_cam5_pane_t6_ParamLimits

0xd5cd,	// (0x0001c37c) main_cam5_pane_t6

0xd5e1,	// (0x0001c390) main_cam5_pane_t7_ParamLimits

0xd5e1,	// (0x0001c390) main_cam5_pane_t7

0xd5f3,	// (0x0001c3a2) main_cam5_pane_t8_ParamLimits

0xd5f3,	// (0x0001c3a2) main_cam5_pane_t8

0xd60f,	// (0x0001c3be) main_cam5_pane_t9_ParamLimits

0xd60f,	// (0x0001c3be) main_cam5_pane_t9

0xd621,	// (0x0001c3d0) main_cam5_pane_t10_ParamLimits

0xd621,	// (0x0001c3d0) main_cam5_pane_t10

0xd633,	// (0x0001c3e2) main_cam5_pane_t11_ParamLimits

0xd633,	// (0x0001c3e2) main_cam5_pane_t11

0xd645,	// (0x0001c3f4) main_cam5_pane_t12_ParamLimits

0xd645,	// (0x0001c3f4) main_cam5_pane_t12

0xd65a,	// (0x0001c409) main_cam5_pane_t13_ParamLimits

0xd65a,	// (0x0001c409) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0001e80f) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0001e80f) main_cam5_pane_t

0x05c5,	// (0x0000f374) popup_scut_keymap_window_ParamLimits

0x05c5,	// (0x0000f374) popup_scut_keymap_window

0x6a54,	// (0x00015803) aid_size_cell_brow_shortcut

0x9e8b,	// (0x00018c3a) bg_popup_window_pane_cp010

0x6a60,	// (0x0001580f) grid_scut_pane

0x6a6c,	// (0x0001581b) cell_scut_pane_ParamLimits

0x6a6c,	// (0x0001581b) cell_scut_pane

0x6a83,	// (0x00015832) cell_scut_pane_g1

0xd677,	// (0x0001c426) cell_scut_pane_t1

0xd686,	// (0x0001c435) cell_scut_pane_t2

0x6a8c,	// (0x0001583b) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0001e82a) cell_scut_pane_t

0x46b2,	// (0x00013461) main_mup3_pane_g8_ParamLimits

0x46b2,	// (0x00013461) main_mup3_pane_g8

0x5b43,	// (0x000148f2) area_vitu2_query_pane_ParamLimits

0x5b43,	// (0x000148f2) area_vitu2_query_pane

0x67cd,	// (0x0001557c) input_focus_pane_cp08

0xd695,	// (0x0001c444) area_vitu2_query_pane_g1

0x6a9a,	// (0x00015849) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0001e831) area_vitu2_query_pane_g

0x6aab,	// (0x0001585a) area_vitu2_query_pane_t1_ParamLimits

0x6aab,	// (0x0001585a) area_vitu2_query_pane_t1

0x6abf,	// (0x0001586e) area_vitu2_query_pane_t2_ParamLimits

0x6abf,	// (0x0001586e) area_vitu2_query_pane_t2

0x6ad3,	// (0x00015882) area_vitu2_query_pane_t3_ParamLimits

0x6ad3,	// (0x00015882) area_vitu2_query_pane_t3

0xd6a1,	// (0x0001c450) area_vitu2_query_pane_t4_ParamLimits

0xd6a1,	// (0x0001c450) area_vitu2_query_pane_t4

0xd6c9,	// (0x0001c478) area_vitu2_query_pane_t5_ParamLimits

0xd6c9,	// (0x0001c478) area_vitu2_query_pane_t5

0xd6f1,	// (0x0001c4a0) area_vitu2_query_pane_t6_ParamLimits

0xd6f1,	// (0x0001c4a0) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0001e836) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0001e836) area_vitu2_query_pane_t

0x6afb,	// (0x000158aa) bg_button_pane_cp018

0x6b09,	// (0x000158b8) bg_button_pane_cp021

0x6b15,	// (0x000158c4) bg_button_pane_cp022

0x6b26,	// (0x000158d5) input_focus_pane_cp09

0xa7b4,	// (0x00019563) aid_size_touch_mv_arrow_left

0xa7df,	// (0x0001958e) aid_size_touch_mv_arrow_right

0xd2fd,	// (0x0001c0ac) main_cset_slider_pane_g16_ParamLimits

0xd2fd,	// (0x0001c0ac) main_cset_slider_pane_g16

0xd309,	// (0x0001c0b8) main_cset_slider_pane_g17_ParamLimits

0xd309,	// (0x0001c0b8) main_cset_slider_pane_g17

0x6a41,	// (0x000157f0) cell_cam4_burst_pane_g1_ParamLimits

0x9433,	// (0x000181e2) compa_mode_pane

0x649b,	// (0x0001524a) popup_vtel_slider_window_g3_ParamLimits

0x649b,	// (0x0001524a) popup_vtel_slider_window_g3

0x64b2,	// (0x00015261) popup_vtel_slider_window_g4_ParamLimits

0x64b2,	// (0x00015261) popup_vtel_slider_window_g4

0x64c9,	// (0x00015278) popup_vtel_slider_window_t1_ParamLimits

0x64c9,	// (0x00015278) popup_vtel_slider_window_t1

0x9433,	// (0x000181e2) main_cl_pane

0xbe3a,	// (0x0001abe9) popup_imed_adjust2_window_ParamLimits

0xbe12,	// (0x0001abc1) bg_tb_trans_pane_cp05_ParamLimits

0xc8af,	// (0x0001b65e) popup_imed_adjust2_window_g1_ParamLimits

0xc8be,	// (0x0001b66d) popup_imed_adjust2_window_g2_ParamLimits

0xc8be,	// (0x0001b66d) popup_imed_adjust2_window_g2

0xc8ca,	// (0x0001b679) popup_imed_adjust2_window_g3_ParamLimits

0xc8ca,	// (0x0001b679) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0001e5a1) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0001e5a1) popup_imed_adjust2_window_g

0xc8d6,	// (0x0001b685) popup_imed_adjust2_window_t1_ParamLimits

0xc8ee,	// (0x0001b69d) slider_imed_adjust_pane_ParamLimits

0xc902,	// (0x0001b6b1) slider_imed_adjust_pane_g1_ParamLimits

0xc912,	// (0x0001b6c1) slider_imed_adjust_pane_g2_ParamLimits

0xc922,	// (0x0001b6d1) slider_imed_adjust_pane_g3_ParamLimits

0xc933,	// (0x0001b6e2) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0001e5a8) slider_imed_adjust_pane_g_ParamLimits

0x58cc,	// (0x0001467b) aid_touch_area_cam4_ParamLimits

0x58cc,	// (0x0001467b) aid_touch_area_cam4

0xd01f,	// (0x0001bdce) battery_pane_cp01

0x599b,	// (0x0001474a) main_camera4_pane_g6_ParamLimits

0x599b,	// (0x0001474a) main_camera4_pane_g6

0x59c5,	// (0x00014774) main_camera4_pane_t2_ParamLimits

0x59c5,	// (0x00014774) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0001e6ab) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0001e6ab) main_camera4_pane_t

0x59fa,	// (0x000147a9) aid_touch_area_vid4_ParamLimits

0x59fa,	// (0x000147a9) aid_touch_area_vid4

0x5a4e,	// (0x000147fd) main_video4_pane_g5_ParamLimits

0x5a4e,	// (0x000147fd) main_video4_pane_g5

0x5a73,	// (0x00014822) vid4_progress_pane_ParamLimits

0x5a73,	// (0x00014822) vid4_progress_pane

0xd315,	// (0x0001c0c4) main_cset_slider_pane_g18_ParamLimits

0xd315,	// (0x0001c0c4) main_cset_slider_pane_g18

0xd55f,	// (0x0001c30e) cell_cam4_burst_pane_g2_ParamLimits

0xd55f,	// (0x0001c30e) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0001e80a) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0001e80a) cell_cam4_burst_pane_g

0x9c12,	// (0x000189c1) bg_cl_pane_ParamLimits

0x9c12,	// (0x000189c1) bg_cl_pane

0x6b37,	// (0x000158e6) cl_header_pane_ParamLimits

0x6b37,	// (0x000158e6) cl_header_pane

0x6b4b,	// (0x000158fa) cl_listscroll_pane_ParamLimits

0x6b4b,	// (0x000158fa) cl_listscroll_pane

0xd73d,	// (0x0001c4ec) bg_cl_pane_g1

0xd745,	// (0x0001c4f4) bg_cl_pane_g2

0xd74d,	// (0x0001c4fc) bg_cl_pane_g3

0xd755,	// (0x0001c504) bg_cl_pane_g4

0xd75d,	// (0x0001c50c) bg_cl_pane_g5

0xd765,	// (0x0001c514) bg_cl_pane_g6

0xd76d,	// (0x0001c51c) bg_cl_pane_g7

0xd775,	// (0x0001c524) bg_cl_pane_g8

0xd77d,	// (0x0001c52c) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0001e845) bg_cl_pane_g

0x6b5b,	// (0x0001590a) aid_height_cl_leading_ParamLimits

0x6b5b,	// (0x0001590a) aid_height_cl_leading

0x6b67,	// (0x00015916) aid_height_cl_text_ParamLimits

0x6b67,	// (0x00015916) aid_height_cl_text

0x94a3,	// (0x00018252) bg_cl_header_pane_ParamLimits

0x94a3,	// (0x00018252) bg_cl_header_pane

0x6b86,	// (0x00015935) cl_header_pane_g1_ParamLimits

0x6b86,	// (0x00015935) cl_header_pane_g1

0x6b9c,	// (0x0001594b) cl_header_pane_t1_ParamLimits

0x6b9c,	// (0x0001594b) cl_header_pane_t1

0xd785,	// (0x0001c534) cl_list_pane

0xd2d0,	// (0x0001c07f) hc_scroll_pane_cp01

0xa0ce,	// (0x00018e7d) bg_cl_header_pane_g1

0xd180,	// (0x0001bf2f) bg_cl_header_pane_g2

0xa0ee,	// (0x00018e9d) bg_cl_header_pane_g3

0xd190,	// (0x0001bf3f) bg_cl_header_pane_g4

0xd188,	// (0x0001bf37) bg_cl_header_pane_g5

0xd44e,	// (0x0001c1fd) bg_cl_header_pane_g6

0xd1a8,	// (0x0001bf57) bg_cl_header_pane_g7

0xd1b0,	// (0x0001bf5f) bg_cl_header_pane_g8

0xd1a0,	// (0x0001bf4f) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0001e858) bg_cl_header_pane_g

0x6bb5,	// (0x00015964) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bb5,	// (0x00015964) hc_cl_list_double_graphic_heading_pane

0x6bc6,	// (0x00015975) hc_cl_list_single_graphic_pane_ParamLimits

0x6bc6,	// (0x00015975) hc_cl_list_single_graphic_pane

0x6bdf,	// (0x0001598e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6bdf,	// (0x0001598e) hc_cl_list_single_graphic_pane_g1

0x6beb,	// (0x0001599a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6beb,	// (0x0001599a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0001e86b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0001e86b) hc_cl_list_single_graphic_pane_g

0x6bff,	// (0x000159ae) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6bff,	// (0x000159ae) hc_cl_list_single_graphic_pane_t1

0x6bdf,	// (0x0001598e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6bdf,	// (0x0001598e) hc_cl_list_double_graphic_heading_pane_g1

0x6c14,	// (0x000159c3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c14,	// (0x000159c3) hc_cl_list_double_graphic_heading_pane_g2

0x6c28,	// (0x000159d7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c28,	// (0x000159d7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0001e870) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0001e870) hc_cl_list_double_graphic_heading_pane_g

0x6c3c,	// (0x000159eb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c3c,	// (0x000159eb) hc_cl_list_double_graphic_heading_pane_t1

0x6c51,	// (0x00015a00) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c51,	// (0x00015a00) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0001e877) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0001e877) hc_cl_list_double_graphic_heading_pane_t

0xd796,	// (0x0001c545) vid4_progress_pane_g1

0xd7a6,	// (0x0001c555) vid4_progress_pane_g2

0x6c66,	// (0x00015a15) vid4_progress_pane_g3

0xd7b6,	// (0x0001c565) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0001e87c) vid4_progress_pane_g

0x6c78,	// (0x00015a27) vid4_progress_pane_t1

0xd7ce,	// (0x0001c57d) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0001e887) vid4_progress_pane_t

0x6c8e,	// (0x00015a3d) wait_bar_pane_cp07

0xc120,	// (0x0001aecf) blid_firmament_pane_ParamLimits

0xc163,	// (0x0001af12) popup_blid_sat_info2_window_g1

0xc187,	// (0x0001af36) popup_blid_sat_info2_window_t3

0xc195,	// (0x0001af44) popup_blid_sat_info2_window_t4

0xc1a3,	// (0x0001af52) popup_blid_sat_info2_window_t5

0xc1b1,	// (0x0001af60) popup_blid_sat_info2_window_t6

0xc1c1,	// (0x0001af70) popup_blid_sat_info2_window_t7

0xc1cf,	// (0x0001af7e) popup_blid_sat_info2_window_t8

0xc1dd,	// (0x0001af8c) popup_blid_sat_info2_window_t9

0xc1eb,	// (0x0001af9a) popup_blid_sat_info2_window_t10

0xc2ad,	// (0x0001b05c) aid_firma_cardinal_ParamLimits

0xc2c1,	// (0x0001b070) blid_firmament_pane_t1_ParamLimits

0xc2d8,	// (0x0001b087) blid_firmament_pane_t2_ParamLimits

0xc2ef,	// (0x0001b09e) blid_firmament_pane_t3_ParamLimits

0xc306,	// (0x0001b0b5) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0001e495) blid_firmament_pane_t_ParamLimits

0xc31d,	// (0x0001b0cc) blid_sat_info_pane_ParamLimits

0x94a3,	// (0x00018252) main_cam_set_pane_ParamLimits

0x4f75,	// (0x00013d24) aid_size_cell_colour_35_ParamLimits

0x4f95,	// (0x00013d44) aid_size_cell_colour_112_ParamLimits

0x4fb5,	// (0x00013d64) aid_size_cell_effect_ParamLimits

0xbe12,	// (0x0001abc1) bg_tb_trans_pane_cp02_ParamLimits

0xa364,	// (0x00019113) heading_imed_pane_ParamLimits

0x4fd5,	// (0x00013d84) listscroll_imed_pane_ParamLimits

0xb3f8,	// (0x0001a1a7) popup_call2_audio_first_window_g5_ParamLimits

0xb3f8,	// (0x0001a1a7) popup_call2_audio_first_window_g5

0x5573,	// (0x00014322) aid_size_touch_image3_arrow_left_ParamLimits

0x5573,	// (0x00014322) aid_size_touch_image3_arrow_left

0x559f,	// (0x0001434e) aid_size_touch_image3_arrow_right_ParamLimits

0x559f,	// (0x0001434e) aid_size_touch_image3_arrow_right

0xd7e3,	// (0x0001c592) vid4_progress_pane_t3

0x52ea,	// (0x00014099) main_hwr_training_symbol_option_pane_ParamLimits

0x52ea,	// (0x00014099) main_hwr_training_symbol_option_pane

0xcb9c,	// (0x0001b94b) popup_hwr_training_preview_window_ParamLimits

0xcb9c,	// (0x0001b94b) popup_hwr_training_preview_window

0x530a,	// (0x000140b9) hwr_training_navi_pane_g5_ParamLimits

0x530a,	// (0x000140b9) hwr_training_navi_pane_g5

0xd15c,	// (0x0001bf0b) popup_char_count_window

0x94a3,	// (0x00018252) bg_popup_sub_pane_cp20_ParamLimits

0x65d7,	// (0x00015386) list_vitu2_match_list_pane_ParamLimits

0x65e6,	// (0x00015395) vitu2_page_scroll_pane_ParamLimits

0x65e6,	// (0x00015395) vitu2_page_scroll_pane

0xd81b,	// (0x0001c5ca) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd81b,	// (0x0001c5ca) list_single_hwr_training_symbol_option_pane

0xd82e,	// (0x0001c5dd) list_single_hwr_training_symbol_option_pane_g1

0xd836,	// (0x0001c5e5) list_single_hwr_training_symbol_option_pane_t1

0xd844,	// (0x0001c5f3) bg_button_pane_cp023

0xd84d,	// (0x0001c5fc) bg_button_pane_cp024

0x6cd7,	// (0x00015a86) vitu2_page_scroll_pane_g1

0x6cdf,	// (0x00015a8e) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0001e88e) vitu2_page_scroll_pane_g

0x6ce7,	// (0x00015a96) vitu2_page_scroll_pane_t1

0xc356,	// (0x0001b105) popup_char_count_window_g1

0xd880,	// (0x0001c62f) popup_char_count_window_g2

0xd889,	// (0x0001c638) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0001e893) popup_char_count_window_g

0xd892,	// (0x0001c641) popup_char_count_window_t1

0x9433,	// (0x000181e2) main_vded2_pane

0xc89b,	// (0x0001b64a) aid_size_cell_imed_line

0xc8a5,	// (0x0001b654) grid_imed_line_width_pane

0xd0cf,	// (0x0001be7e) vid4_indicators_pane_g4

0xd8a0,	// (0x0001c64f) cell_imed_line_width_pane_ParamLimits

0xd8a0,	// (0x0001c64f) cell_imed_line_width_pane

0xd8b4,	// (0x0001c663) cell_imed_line_width_pane_g1

0xd8bd,	// (0x0001c66c) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0001e89a) cell_imed_line_width_pane_g

0x6cf6,	// (0x00015aa5) main_vded2_pane_g1_ParamLimits

0x6cf6,	// (0x00015aa5) main_vded2_pane_g1

0x6d0c,	// (0x00015abb) main_vded2_pane_g2_ParamLimits

0x6d0c,	// (0x00015abb) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0001e89f) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0001e89f) main_vded2_pane_g

0x6d1e,	// (0x00015acd) vded2_slider_pane_ParamLimits

0x6d1e,	// (0x00015acd) vded2_slider_pane

0x6d2e,	// (0x00015add) aid_size_touch_vded2_end

0x6d38,	// (0x00015ae7) aid_size_touch_vded2_playhead

0xd8c5,	// (0x0001c674) aid_size_touch_vded2_start

0xd8cd,	// (0x0001c67c) vded2_slider_bg_pane

0xd8d6,	// (0x0001c685) vded2_slider_pane_g1

0xd8df,	// (0x0001c68e) vded2_slider_pane_g2

0x6d42,	// (0x00015af1) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0001e8a4) vded2_slider_pane_g

0xd8e7,	// (0x0001c696) vded2_slider_bg_pane_g1

0xd8f0,	// (0x0001c69f) vded2_slider_bg_pane_g2

0xd8f9,	// (0x0001c6a8) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0001e8ab) vded2_slider_bg_pane_g

0x2ce9,	// (0x00011a98) aid_postcard_touch_down_pane_ParamLimits

0x2ce9,	// (0x00011a98) aid_postcard_touch_down_pane

0x2cff,	// (0x00011aae) aid_postcard_touch_up_pane_ParamLimits

0x2cff,	// (0x00011aae) aid_postcard_touch_up_pane

0x9433,	// (0x000181e2) main_blid2_pane

0xbe20,	// (0x0001abcf) popup_blid2_search_window

0x9433,	// (0x000181e2) blid2_gps_pane

0x9433,	// (0x000181e2) blid2_navig_pane

0x9433,	// (0x000181e2) blid2_search_pane

0x9433,	// (0x000181e2) blid2_tripm_pane

0x6d4d,	// (0x00015afc) blid2_search_pane_g1_ParamLimits

0x6d4d,	// (0x00015afc) blid2_search_pane_g1

0x6d65,	// (0x00015b14) blid2_search_pane_t1_ParamLimits

0x6d65,	// (0x00015b14) blid2_search_pane_t1

0x6d77,	// (0x00015b26) aid_size_cell_blid2_gps_ParamLimits

0x6d77,	// (0x00015b26) aid_size_cell_blid2_gps

0x6d8f,	// (0x00015b3e) blid2_gps_pane_g1_ParamLimits

0x6d8f,	// (0x00015b3e) blid2_gps_pane_g1

0x6da3,	// (0x00015b52) grid_blid2_satellite_pane_ParamLimits

0x6da3,	// (0x00015b52) grid_blid2_satellite_pane

0x6dbd,	// (0x00015b6c) blid2_navig_pane_g1_ParamLimits

0x6dbd,	// (0x00015b6c) blid2_navig_pane_g1

0x6dc9,	// (0x00015b78) blid2_navig_pane_t1_ParamLimits

0x6dc9,	// (0x00015b78) blid2_navig_pane_t1

0x6de4,	// (0x00015b93) blid2_navig_pane_t2_ParamLimits

0x6de4,	// (0x00015b93) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0001e8b2) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0001e8b2) blid2_navig_pane_t

0x6dff,	// (0x00015bae) blid2_navig_ring_pane_ParamLimits

0x6dff,	// (0x00015bae) blid2_navig_ring_pane

0x6e18,	// (0x00015bc7) blid2_speed_pane_ParamLimits

0x6e18,	// (0x00015bc7) blid2_speed_pane

0x6e24,	// (0x00015bd3) blid2_tripm_pane_g1_ParamLimits

0x6e24,	// (0x00015bd3) blid2_tripm_pane_g1

0x6e3f,	// (0x00015bee) blid2_tripm_pane_g2_ParamLimits

0x6e3f,	// (0x00015bee) blid2_tripm_pane_g2

0x6e53,	// (0x00015c02) blid2_tripm_pane_g3_ParamLimits

0x6e53,	// (0x00015c02) blid2_tripm_pane_g3

0x6e67,	// (0x00015c16) blid2_tripm_pane_g4_ParamLimits

0x6e67,	// (0x00015c16) blid2_tripm_pane_g4

0x6e7b,	// (0x00015c2a) blid2_tripm_pane_g5_ParamLimits

0x6e7b,	// (0x00015c2a) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0001e8b7) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0001e8b7) blid2_tripm_pane_g

0x6ea1,	// (0x00015c50) blid2_tripm_pane_t1_ParamLimits

0x6ea1,	// (0x00015c50) blid2_tripm_pane_t1

0x6ebc,	// (0x00015c6b) blid2_tripm_pane_t2_ParamLimits

0x6ebc,	// (0x00015c6b) blid2_tripm_pane_t2

0x6ed5,	// (0x00015c84) blid2_tripm_pane_t3_ParamLimits

0x6ed5,	// (0x00015c84) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0001e8c4) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0001e8c4) blid2_tripm_pane_t

0x6f1c,	// (0x00015ccb) cell_blid2_satellite_pane_ParamLimits

0x6f1c,	// (0x00015ccb) cell_blid2_satellite_pane

0x6f3a,	// (0x00015ce9) cell_blid2_satellite_pane_g1

0xd902,	// (0x0001c6b1) cell_blid2_satellite_pane_t1

0xc32d,	// (0x0001b0dc) blid2_speed_pane_g1

0xd910,	// (0x0001c6bf) blid2_speed_pane_t1

0xd91e,	// (0x0001c6cd) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0001e8cd) blid2_speed_pane_t

0xc32d,	// (0x0001b0dc) blid2_navig_ring_pane_g1

0x6f43,	// (0x00015cf2) blid2_navig_ring_pane_g2

0x6f4b,	// (0x00015cfa) blid2_navig_ring_pane_g3

0x6f53,	// (0x00015d02) blid2_navig_ring_pane_g4

0x6f5b,	// (0x00015d0a) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0001e8d2) blid2_navig_ring_pane_g

0x9433,	// (0x000181e2) bg_popup_window_pane_cp011

0xd92c,	// (0x0001c6db) popup_blid2_search_window_g1

0xd934,	// (0x0001c6e3) popup_blid2_search_window_t1

0xd942,	// (0x0001c6f1) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0001e8dd) popup_blid2_search_window_t

0x9fdd,	// (0x00018d8c) main_browser_pane_g1

0x9c12,	// (0x000189c1) main_browser_pane_ParamLimits

0x94a3,	// (0x00018252) bg_button_pane_cp011_ParamLimits

0x5e76,	// (0x00014c25) cell_vitu2_function_pane_g1_ParamLimits

0xbe12,	// (0x0001abc1) bg_popup_sub_pane_cp22_ParamLimits

0x67cd,	// (0x0001557c) input_focus_pane_cp08_ParamLimits

0x67e4,	// (0x00015593) popup_vitu2_query_button_pane_ParamLimits

0x67e4,	// (0x00015593) popup_vitu2_query_button_pane

0x67f5,	// (0x000155a4) popup_vitu2_query_input_button_pane

0xd4a9,	// (0x0001c258) popup_vitu2_query_window_g1_ParamLimits

0x67ff,	// (0x000155ae) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0001e7de) popup_vitu2_query_window_g_ParamLimits

0x9433,	// (0x000181e2) bg_button_pane_cp026

0x6f63,	// (0x00015d12) popup_vitu2_query_input_button_pane_g1

0x9433,	// (0x000181e2) bg_button_pane_cp025

0xd950,	// (0x0001c6ff) popup_vitu2_query_button_pane_t1

0x4380,	// (0x0001312f) main_mp3_pane_t6

0x438e,	// (0x0001313d) popup_slider_window_cp01

0xd03b,	// (0x0001bdea) cam4_battery_pane

0xd08e,	// (0x0001be3d) cam4_battery_pane_cp02

0xd78e,	// (0x0001c53d) cam4_battery_pane_cp01

0xd78e,	// (0x0001c53d) cam4_battery_pane_cp03

0xc32d,	// (0x0001b0dc) cam4_battery_pane_g1

0xd95e,	// (0x0001c70d) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0001e8e2) cam4_battery_pane_g

0xc1f9,	// (0x0001afa8) popup_blid_sat_info2_window_t11

0xa7b4,	// (0x00019563) aid_size_touch_mv_arrow_left_ParamLimits

0xa7df,	// (0x0001958e) aid_size_touch_mv_arrow_right_ParamLimits

0xa83d,	// (0x000195ec) navi_pane_g1_ParamLimits

0xa849,	// (0x000195f8) navi_pane_g2_ParamLimits

0xa877,	// (0x00019626) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e194) navi_pane_g_ParamLimits

0x2716,	// (0x000114c5) navi_pane_mv_t1_ParamLimits

0x4fe1,	// (0x00013d90) grid_imed_effect_pane_ParamLimits

0x152a,	// (0x000102d9) aid_placing_vt_slider_lsc

0x9f2c,	// (0x00018cdb) aid_placing_vt_slider_prt

0x94a3,	// (0x00018252) bg_tb_trans_pane_cp01_ParamLimits

0xc49b,	// (0x0001b24a) popup_image_details_window_g1_ParamLimits

0xc4ae,	// (0x0001b25d) popup_image_details_window_g2_ParamLimits

0xc4c3,	// (0x0001b272) popup_image_details_window_g3_ParamLimits

0xc4c3,	// (0x0001b272) popup_image_details_window_g3

0xf72b,	// (0x0001e4da) popup_image_details_window_g_ParamLimits

0xc4d7,	// (0x0001b286) popup_image_details_window_t1_ParamLimits

0xc4e9,	// (0x0001b298) popup_image_details_window_t2_ParamLimits

0xc502,	// (0x0001b2b1) popup_image_details_window_t3_ParamLimits

0xc516,	// (0x0001b2c5) popup_image_details_window_t4_ParamLimits

0xc531,	// (0x0001b2e0) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0001e4e1) popup_image_details_window_t_ParamLimits

0x6b73,	// (0x00015922) cl_header_name_pane_ParamLimits

0x6b73,	// (0x00015922) cl_header_name_pane

0x6f6b,	// (0x00015d1a) cl_header_name_pane_t1_ParamLimits

0x6f6b,	// (0x00015d1a) cl_header_name_pane_t1

0x6f8c,	// (0x00015d3b) cl_header_name_pane_t2_ParamLimits

0x6f8c,	// (0x00015d3b) cl_header_name_pane_t2

0x6fce,	// (0x00015d7d) cl_header_name_pane_t3_ParamLimits

0x6fce,	// (0x00015d7d) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0001e8e7) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0001e8e7) cl_header_name_pane_t

0xa906,	// (0x000196b5) navi_pane_mv_g2_ParamLimits

0xd119,	// (0x0001bec8) field_vitu2_entry_pane_g1_ParamLimits

0xd125,	// (0x0001bed4) field_vitu2_entry_pane_g2_ParamLimits

0xd131,	// (0x0001bee0) field_vitu2_entry_pane_g3_ParamLimits

0xd131,	// (0x0001bee0) field_vitu2_entry_pane_g3

0xf92e,	// (0x0001e6dd) field_vitu2_entry_pane_g_ParamLimits

0xd164,	// (0x0001bf13) cell_vitu2_itu_pane_g1_ParamLimits

0x5d1e,	// (0x00014acd) cell_vitu2_itu_pane_g2_ParamLimits

0x5d1e,	// (0x00014acd) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0001e6e9) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0001e6e9) cell_vitu2_itu_pane_g

0x94a3,	// (0x00018252) bg_vkb2_func_pane_cp05_ParamLimits

0x94a3,	// (0x00018252) bg_vkb2_func_pane_cp05

0x94a3,	// (0x00018252) bg_vkb2_func_pane_cp03

0x94a3,	// (0x00018252) bg_vkb2_func_pane_cp04

0x94a3,	// (0x00018252) bg_vkb2_func_pane_cp10_ParamLimits

0x94a3,	// (0x00018252) bg_vkb2_func_pane_cp10

0x6b15,	// (0x000158c4) bg_vkb2_func_pane_cp08

0x6afb,	// (0x000158aa) bg_vkb2_func_pane_cp06

0x6b09,	// (0x000158b8) bg_vkb2_func_pane_cp07

0xd856,	// (0x0001c605) bg_vkb2_func_pane_cp11_ParamLimits

0xd856,	// (0x0001c605) bg_vkb2_func_pane_cp11

0xd86b,	// (0x0001c61a) bg_vkb2_func_pane_cp12_ParamLimits

0xd86b,	// (0x0001c61a) bg_vkb2_func_pane_cp12

0x9433,	// (0x000181e2) bg_vkb2_func_pane_cp09

0xd180,	// (0x0001bf2f) bg_vkb2_func_pane_g1

0xa0ee,	// (0x00018e9d) bg_vkb2_func_pane_g2

0xd188,	// (0x0001bf37) bg_vkb2_func_pane_g3

0xd190,	// (0x0001bf3f) bg_vkb2_func_pane_g4

0xd44e,	// (0x0001c1fd) bg_vkb2_func_pane_g5

0xd1a8,	// (0x0001bf57) bg_vkb2_func_pane_g6

0xd1b0,	// (0x0001bf5f) bg_vkb2_func_pane_g7

0xd1a0,	// (0x0001bf4f) bg_vkb2_func_pane_g8

0xa0ce,	// (0x00018e7d) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0001e8ee) bg_vkb2_func_pane_g

0x6e8f,	// (0x00015c3e) blid2_tripm_pane_g6_ParamLimits

0x6e8f,	// (0x00015c3e) blid2_tripm_pane_g6

0xce8d,	// (0x0001bc3c) mp4_progress_pane_g1

0x6f08,	// (0x00015cb7) blid2_tripm_values_pane_ParamLimits

0x6f08,	// (0x00015cb7) blid2_tripm_values_pane

0x6fff,	// (0x00015dae) blid2_tripm_values_pane_t1

0x700d,	// (0x00015dbc) blid2_tripm_values_pane_t2

0x701b,	// (0x00015dca) blid2_tripm_values_pane_t3

0x7029,	// (0x00015dd8) blid2_tripm_values_pane_t4

0x7037,	// (0x00015de6) blid2_tripm_values_pane_t5

0x7045,	// (0x00015df4) blid2_tripm_values_pane_t6

0x7053,	// (0x00015e02) blid2_tripm_values_pane_t7

0x7061,	// (0x00015e10) blid2_tripm_values_pane_t8

0x706f,	// (0x00015e1e) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0001e901) blid2_tripm_values_pane_t

0x156c,	// (0x0001031b) call_video_pane_t1_ParamLimits

0x158a,	// (0x00010339) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001e01d) call_video_pane_t_ParamLimits

0x2bee,	// (0x0001199d) msg_header_pane_g1_ParamLimits

0xab00,	// (0x000198af) msg_header_pane_g2_ParamLimits

0xab00,	// (0x000198af) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e237) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e237) msg_header_pane_g

0x9c12,	// (0x000189c1) main_clock2_pane_ParamLimits

0x4cda,	// (0x00013a89) grid_clock2_toolbar_pane_ParamLimits

0x4cda,	// (0x00013a89) grid_clock2_toolbar_pane

0x4cda,	// (0x00013a89) listscroll_clock2_pane_ParamLimits

0x4cda,	// (0x00013a89) listscroll_clock2_pane

0x4dd6,	// (0x00013b85) main_clock2_pane_t3_ParamLimits

0x4dd6,	// (0x00013b85) main_clock2_pane_t3

0x4dfa,	// (0x00013ba9) main_clock2_pane_t4_ParamLimits

0x4dfa,	// (0x00013ba9) main_clock2_pane_t4

0xd968,	// (0x0001c717) cell_clock2_toolbar_pane

0xd970,	// (0x0001c71f) cell_clock2_toolbar_pane_cp01

0xd970,	// (0x0001c71f) cell_clock2_toolbar_pane_cp02

0xd978,	// (0x0001c727) cell_clock2_toolbar_pane_cp03

0xd980,	// (0x0001c72f) list_clock2_pane

0xa739,	// (0x000194e8) scroll_pane_cp10

0xd988,	// (0x0001c737) list_single_clock2_pane_ParamLimits

0xd988,	// (0x0001c737) list_single_clock2_pane

0x9e8b,	// (0x00018c3a) list_highlight_pane_cp08

0xd995,	// (0x0001c744) list_single_clock2_pane_t1

0xd9a3,	// (0x0001c752) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0001e914) list_single_clock2_pane_t

0x9433,	// (0x000181e2) bg_button_pane_cp10

0xd9b1,	// (0x0001c760) cell_clock2_toolbar_pane_g1

0x2c75,	// (0x00011a24) aid_main_viewer_pane_g1_ParamLimits

0x2c75,	// (0x00011a24) aid_main_viewer_pane_g1

0x2c83,	// (0x00011a32) aid_main_viewer_pane_g2_ParamLimits

0x2c83,	// (0x00011a32) aid_main_viewer_pane_g2

0x2c91,	// (0x00011a40) aid_main_viewer_pane_g3_ParamLimits

0x2c91,	// (0x00011a40) aid_main_viewer_pane_g3

0x2ca0,	// (0x00011a4f) aid_main_viewer_pane_g4_ParamLimits

0x2ca0,	// (0x00011a4f) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e248) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e248) aid_main_viewer_pane_g

0x35a8,	// (0x00012357) main_calc_pane_ParamLimits

0x35bc,	// (0x0001236b) main_dialer2_pane_ParamLimits

0x9433,	// (0x000181e2) main_cam6_pane

0x9433,	// (0x000181e2) main_vid6_pane

0x4ce6,	// (0x00013a95) listscroll_gen_pane_cp06_ParamLimits

0x4ce6,	// (0x00013a95) listscroll_gen_pane_cp06

0x4e1d,	// (0x00013bcc) main_clock2_pane_t5_ParamLimits

0x4e1d,	// (0x00013bcc) main_clock2_pane_t5

0x4e77,	// (0x00013c26) aid_call2_pane_cp10_ParamLimits

0x4e89,	// (0x00013c38) aid_call_pane_cp10_ParamLimits

0xa7a8,	// (0x00019557) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa7a8,	// (0x00019557) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4e9b,	// (0x00013c4a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4e9b,	// (0x00013c4a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa7a8,	// (0x00019557) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0001e596) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ead,	// (0x00013c5c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5520,	// (0x000142cf) cell_dialer2_keypad_pane_g2_ParamLimits

0x5520,	// (0x000142cf) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0001e67c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0001e67c) cell_dialer2_keypad_pane_g

0x553c,	// (0x000142eb) cell_dialer2_keypad_pane_t1

0x6190,	// (0x00014f3f) main_cset_text2_pane_ParamLimits

0x6190,	// (0x00014f3f) main_cset_text2_pane

0xd695,	// (0x0001c444) area_vitu2_query_pane_g1_ParamLimits

0x6a9a,	// (0x00015849) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0001e831) area_vitu2_query_pane_g_ParamLimits

0xd719,	// (0x0001c4c8) area_vitu2_query_pane_t7_ParamLimits

0xd719,	// (0x0001c4c8) area_vitu2_query_pane_t7

0x6afb,	// (0x000158aa) bg_button_pane_cp018_ParamLimits

0x6b09,	// (0x000158b8) bg_button_pane_cp021_ParamLimits

0x6b15,	// (0x000158c4) bg_button_pane_cp022_ParamLimits

0x6b15,	// (0x000158c4) bg_vkb2_func_pane_cp08_ParamLimits

0x6afb,	// (0x000158aa) bg_vkb2_func_pane_cp06_ParamLimits

0x6b09,	// (0x000158b8) bg_vkb2_func_pane_cp07_ParamLimits

0x6b26,	// (0x000158d5) input_focus_pane_cp09_ParamLimits

0xd9b9,	// (0x0001c768) cam6_autofocus_pane_ParamLimits

0xd9b9,	// (0x0001c768) cam6_autofocus_pane

0x707d,	// (0x00015e2c) cam6_image_uncrop_pane_ParamLimits

0x707d,	// (0x00015e2c) cam6_image_uncrop_pane

0x708c,	// (0x00015e3b) cam6_indi_pane_ParamLimits

0x708c,	// (0x00015e3b) cam6_indi_pane

0x70a2,	// (0x00015e51) cam6_mode_pane_ParamLimits

0x70a2,	// (0x00015e51) cam6_mode_pane

0x70b4,	// (0x00015e63) cam6_timer_pane_ParamLimits

0x70b4,	// (0x00015e63) cam6_timer_pane

0x70c4,	// (0x00015e73) cam6_zoom_pane_ParamLimits

0x70c4,	// (0x00015e73) cam6_zoom_pane

0x70d0,	// (0x00015e7f) cam6_mode_pane_g1_ParamLimits

0x70d0,	// (0x00015e7f) cam6_mode_pane_g1

0x70e0,	// (0x00015e8f) cam6_mode_pane_g2_ParamLimits

0x70e0,	// (0x00015e8f) cam6_mode_pane_g2

0x70f0,	// (0x00015e9f) cam6_mode_pane_g3_ParamLimits

0x70f0,	// (0x00015e9f) cam6_mode_pane_g3

0x7100,	// (0x00015eaf) cam6_mode_pane_g4_ParamLimits

0x7100,	// (0x00015eaf) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0001e919) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0001e919) cam6_mode_pane_g

0xd204,	// (0x0001bfb3) bg_tb_trans_pane_cp08_ParamLimits

0xd204,	// (0x0001bfb3) bg_tb_trans_pane_cp08

0xd9c7,	// (0x0001c776) cam6_battery_pane_ParamLimits

0xd9c7,	// (0x0001c776) cam6_battery_pane

0xd9dd,	// (0x0001c78c) cam6_indi_pane_g1_ParamLimits

0xd9dd,	// (0x0001c78c) cam6_indi_pane_g1

0xd9ef,	// (0x0001c79e) cam6_indi_pane_g2_ParamLimits

0xd9ef,	// (0x0001c79e) cam6_indi_pane_g2

0xda01,	// (0x0001c7b0) cam6_indi_pane_g3_ParamLimits

0xda01,	// (0x0001c7b0) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0001e922) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0001e922) cam6_indi_pane_g

0xda13,	// (0x0001c7c2) cam6_indi_pane_t1_ParamLimits

0xda13,	// (0x0001c7c2) cam6_indi_pane_t1

0x7110,	// (0x00015ebf) cam6_autofocus_pane_g1

0x7118,	// (0x00015ec7) cam6_autofocus_pane_g2

0x7120,	// (0x00015ecf) cam6_autofocus_pane_g3

0x7128,	// (0x00015ed7) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0001e929) cam6_autofocus_pane_g

0xda39,	// (0x0001c7e8) cam6_timer_pane_g1

0xda41,	// (0x0001c7f0) cam6_timer_pane_t1

0xda4f,	// (0x0001c7fe) cam6_zoom_cont_pane

0xda57,	// (0x0001c806) cam6_zoom_pane_g1

0xda5f,	// (0x0001c80e) cam6_zoom_pane_g2

0x7130,	// (0x00015edf) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0001e932) cam6_zoom_pane_g

0xc32d,	// (0x0001b0dc) cam6_battery_pane_g1

0xc32d,	// (0x0001b0dc) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0001e49e) cam6_battery_pane_g

0xda67,	// (0x0001c816) cam6_zoom_cont_pane_g1

0xda70,	// (0x0001c81f) cam6_zoom_cont_pane_g2

0xda79,	// (0x0001c828) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0001e939) cam6_zoom_cont_pane_g

0x714d,	// (0x00015efc) cam6_mode_pane_cp_ParamLimits

0x714d,	// (0x00015efc) cam6_mode_pane_cp

0x70c4,	// (0x00015e73) cam6_zoom_pane_cp_ParamLimits

0x70c4,	// (0x00015e73) cam6_zoom_pane_cp

0x715f,	// (0x00015f0e) vid6_image_uncrop_cif_pane_ParamLimits

0x715f,	// (0x00015f0e) vid6_image_uncrop_cif_pane

0x716f,	// (0x00015f1e) vid6_image_uncrop_nhd_pane_ParamLimits

0x716f,	// (0x00015f1e) vid6_image_uncrop_nhd_pane

0x707d,	// (0x00015e2c) vid6_image_uncrop_vga_pane_ParamLimits

0x707d,	// (0x00015e2c) vid6_image_uncrop_vga_pane

0x717e,	// (0x00015f2d) vid6_image_uncrop_wvga_pane_ParamLimits

0x717e,	// (0x00015f2d) vid6_image_uncrop_wvga_pane

0x718d,	// (0x00015f3c) vid6_indi_pane_ParamLimits

0x718d,	// (0x00015f3c) vid6_indi_pane

0xd204,	// (0x0001bfb3) bg_tb_trans_pane_cp09_ParamLimits

0xd204,	// (0x0001bfb3) bg_tb_trans_pane_cp09

0xda91,	// (0x0001c840) cam6_battery_pane_cp_ParamLimits

0xda91,	// (0x0001c840) cam6_battery_pane_cp

0xda9d,	// (0x0001c84c) vid6_indi_pane_g1_ParamLimits

0xda9d,	// (0x0001c84c) vid6_indi_pane_g1

0xdaaf,	// (0x0001c85e) vid6_indi_pane_g2_ParamLimits

0xdaaf,	// (0x0001c85e) vid6_indi_pane_g2

0xdac1,	// (0x0001c870) vid6_indi_pane_g3_ParamLimits

0xdac1,	// (0x0001c870) vid6_indi_pane_g3

0xdad6,	// (0x0001c885) vid6_indi_pane_g4_ParamLimits

0xdad6,	// (0x0001c885) vid6_indi_pane_g4

0xdaeb,	// (0x0001c89a) vid6_indi_pane_g5_ParamLimits

0xdaeb,	// (0x0001c89a) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0001e940) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0001e940) vid6_indi_pane_g

0xdb05,	// (0x0001c8b4) vid6_indi_pane_t1_ParamLimits

0xdb05,	// (0x0001c8b4) vid6_indi_pane_t1

0xdb1b,	// (0x0001c8ca) vid6_indi_pane_t2_ParamLimits

0xdb1b,	// (0x0001c8ca) vid6_indi_pane_t2

0xdb43,	// (0x0001c8f2) vid6_indi_pane_t3_ParamLimits

0xdb43,	// (0x0001c8f2) vid6_indi_pane_t3

0xdb6b,	// (0x0001c91a) vid6_indi_pane_t4_ParamLimits

0xdb6b,	// (0x0001c91a) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0001e94b) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0001e94b) vid6_indi_pane_t

0xdb8f,	// (0x0001c93e) wait_bar_pane_cp08

0x71a5,	// (0x00015f54) main_cset_text2_pane_t1_ParamLimits

0x71a5,	// (0x00015f54) main_cset_text2_pane_t1

0x7138,	// (0x00015ee7) listscroll_gen_pane_cp06_t1_ParamLimits

0x7138,	// (0x00015ee7) listscroll_gen_pane_cp06_t1

0x9433,	// (0x000181e2) main_cam6_set_pane

0xc57b,	// (0x0001b32a) bg_tb_trans_pane_cp06_ParamLimits

0xd043,	// (0x0001bdf2) cam4_indicators_pane_g1_ParamLimits

0xd054,	// (0x0001be03) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0001e6b9) cam4_indicators_pane_g_ParamLimits

0xd06c,	// (0x0001be1b) cam4_indicators_pane_t1_ParamLimits

0x94a3,	// (0x00018252) bg_tb_trans_pane_cp07_ParamLimits

0xd096,	// (0x0001be45) vid4_indicators_pane_g1_ParamLimits

0xd0aa,	// (0x0001be59) vid4_indicators_pane_g2_ParamLimits

0xd0be,	// (0x0001be6d) vid4_indicators_pane_g3_ParamLimits

0xd0cf,	// (0x0001be7e) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0001e6cb) vid4_indicators_pane_g_ParamLimits

0xd0eb,	// (0x0001be9a) vid4_indicators_pane_t1_ParamLimits

0xd796,	// (0x0001c545) vid4_progress_pane_g1_ParamLimits

0xd7a6,	// (0x0001c555) vid4_progress_pane_g2_ParamLimits

0x6c66,	// (0x00015a15) vid4_progress_pane_g3_ParamLimits

0xd7b6,	// (0x0001c565) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0001e87c) vid4_progress_pane_g_ParamLimits

0x6c78,	// (0x00015a27) vid4_progress_pane_t1_ParamLimits

0xd7ce,	// (0x0001c57d) vid4_progress_pane_t2_ParamLimits

0xd7e3,	// (0x0001c592) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0001e887) vid4_progress_pane_t_ParamLimits

0x6c8e,	// (0x00015a3d) wait_bar_pane_cp07_ParamLimits

0x71c3,	// (0x00015f72) main_cam6_set_pane_g2_ParamLimits

0x71c3,	// (0x00015f72) main_cam6_set_pane_g2

0x71e7,	// (0x00015f96) main_cset6_listscroll_pane_ParamLimits

0x71e7,	// (0x00015f96) main_cset6_listscroll_pane

0x7203,	// (0x00015fb2) main_cset6_slider_pane_ParamLimits

0x7203,	// (0x00015fb2) main_cset6_slider_pane

0x7219,	// (0x00015fc8) main_cset6_text2_pane_ParamLimits

0x7219,	// (0x00015fc8) main_cset6_text2_pane

0xdb9e,	// (0x0001c94d) main_cset6_text_pane

0xdba6,	// (0x0001c955) main_cset_list_pane_copy1_ParamLimits

0xdba6,	// (0x0001c955) main_cset_list_pane_copy1

0xdbb6,	// (0x0001c965) scroll_pane_cp028_copy1

0x7227,	// (0x00015fd6) cset_list_set_pane_copy1

0x7239,	// (0x00015fe8) aid_position_infowindow_above_copy1

0x7241,	// (0x00015ff0) aid_position_infowindow_below_copy1

0xdbbf,	// (0x0001c96e) cset_list_set_pane_g1_copy1

0xdbc7,	// (0x0001c976) cset_list_set_pane_g3_copy1_ParamLimits

0xdbc7,	// (0x0001c976) cset_list_set_pane_g3_copy1

0xdbd6,	// (0x0001c985) cset_list_set_pane_t1_copy1_ParamLimits

0xdbd6,	// (0x0001c985) cset_list_set_pane_t1_copy1

0x94a3,	// (0x00018252) list_highlight_pane_cp021_copy1_ParamLimits

0x94a3,	// (0x00018252) list_highlight_pane_cp021_copy1

0xdbeb,	// (0x0001c99a) cset6_slider_pane_ParamLimits

0xdbeb,	// (0x0001c99a) cset6_slider_pane

0xdc17,	// (0x0001c9c6) main_cset6_slider_pane_g1_ParamLimits

0xdc17,	// (0x0001c9c6) main_cset6_slider_pane_g1

0x7249,	// (0x00015ff8) main_cset6_slider_pane_g2_ParamLimits

0x7249,	// (0x00015ff8) main_cset6_slider_pane_g2

0xdc3f,	// (0x0001c9ee) main_cset6_slider_pane_g3_ParamLimits

0xdc3f,	// (0x0001c9ee) main_cset6_slider_pane_g3

0x7271,	// (0x00016020) main_cset6_slider_pane_g4_ParamLimits

0x7271,	// (0x00016020) main_cset6_slider_pane_g4

0xdc4b,	// (0x0001c9fa) main_cset6_slider_pane_g5_ParamLimits

0xdc4b,	// (0x0001c9fa) main_cset6_slider_pane_g5

0xd2e5,	// (0x0001c094) main_cset6_slider_pane_g7_ParamLimits

0xd2e5,	// (0x0001c094) main_cset6_slider_pane_g7

0xd2f1,	// (0x0001c0a0) main_cset6_slider_pane_g8_ParamLimits

0xd2f1,	// (0x0001c0a0) main_cset6_slider_pane_g8

0x623d,	// (0x00014fec) main_cset6_slider_pane_g9_ParamLimits

0x623d,	// (0x00014fec) main_cset6_slider_pane_g9

0x6249,	// (0x00014ff8) main_cset6_slider_pane_g10_ParamLimits

0x6249,	// (0x00014ff8) main_cset6_slider_pane_g10

0x6255,	// (0x00015004) main_cset6_slider_pane_g11_ParamLimits

0x6255,	// (0x00015004) main_cset6_slider_pane_g11

0x6261,	// (0x00015010) main_cset6_slider_pane_g12_ParamLimits

0x6261,	// (0x00015010) main_cset6_slider_pane_g12

0x626d,	// (0x0001501c) main_cset6_slider_pane_g13_ParamLimits

0x626d,	// (0x0001501c) main_cset6_slider_pane_g13

0x6279,	// (0x00015028) main_cset6_slider_pane_g14_ParamLimits

0x6279,	// (0x00015028) main_cset6_slider_pane_g14

0x727d,	// (0x0001602c) main_cset6_slider_pane_g15_ParamLimits

0x727d,	// (0x0001602c) main_cset6_slider_pane_g15

0xd2fd,	// (0x0001c0ac) main_cset6_slider_pane_g16_ParamLimits

0xd2fd,	// (0x0001c0ac) main_cset6_slider_pane_g16

0xd309,	// (0x0001c0b8) main_cset6_slider_pane_g17_ParamLimits

0xd309,	// (0x0001c0b8) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0001e954) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0001e954) main_cset6_slider_pane_g

0xdc57,	// (0x0001ca06) main_cset6_slider_pane_t1_ParamLimits

0xdc57,	// (0x0001ca06) main_cset6_slider_pane_t1

0x72ad,	// (0x0001605c) main_cset6_slider_pane_t2_ParamLimits

0x72ad,	// (0x0001605c) main_cset6_slider_pane_t2

0x72d8,	// (0x00016087) main_cset6_slider_pane_t3_ParamLimits

0x72d8,	// (0x00016087) main_cset6_slider_pane_t3

0x7303,	// (0x000160b2) main_cset6_slider_pane_t4_ParamLimits

0x7303,	// (0x000160b2) main_cset6_slider_pane_t4

0x732e,	// (0x000160dd) main_cset6_slider_pane_t5_ParamLimits

0x732e,	// (0x000160dd) main_cset6_slider_pane_t5

0xdc98,	// (0x0001ca47) main_cset6_slider_pane_t7_ParamLimits

0xdc98,	// (0x0001ca47) main_cset6_slider_pane_t7

0x7359,	// (0x00016108) main_cset6_slider_pane_t8_ParamLimits

0x7359,	// (0x00016108) main_cset6_slider_pane_t8

0x737d,	// (0x0001612c) main_cset6_slider_pane_t9_ParamLimits

0x737d,	// (0x0001612c) main_cset6_slider_pane_t9

0x73a1,	// (0x00016150) main_cset6_slider_pane_t10_ParamLimits

0x73a1,	// (0x00016150) main_cset6_slider_pane_t10

0x73c5,	// (0x00016174) main_cset6_slider_pane_t11_ParamLimits

0x73c5,	// (0x00016174) main_cset6_slider_pane_t11

0xdcce,	// (0x0001ca7d) main_cset6_slider_pane_t14_ParamLimits

0xdcce,	// (0x0001ca7d) main_cset6_slider_pane_t14

0xdd07,	// (0x0001cab6) main_cset6_slider_pane_t15_ParamLimits

0xdd07,	// (0x0001cab6) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0001e979) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0001e979) main_cset6_slider_pane_t

0xcb71,	// (0x0001b920) cset_slider_pane_g1_copy1

0xd3e1,	// (0x0001c190) cset_slider_pane_g2_copy1

0xd3ea,	// (0x0001c199) cset_slider_pane_g3_copy1

0x9433,	// (0x000181e2) bg_popup_sub_pane_cp011_copy1

0xdd40,	// (0x0001caef) main_cset_text_pane_g1_copy1

0xd4bd,	// (0x0001c26c) main_cset_text_pane_t1_copy1

0xd4cb,	// (0x0001c27a) main_cset_text_pane_t2_copy1

0xd4d9,	// (0x0001c288) main_cset_text_pane_t3_copy1

0xd4e7,	// (0x0001c296) main_cset_text_pane_t4_copy1

0xd4f5,	// (0x0001c2a4) main_cset_text_pane_t5_copy1

0xdd48,	// (0x0001caf7) main_cset_text_pane_t6_copy1

0xdd56,	// (0x0001cb05) main_cset_text_pane_t7_copy1

0x71a5,	// (0x00015f54) main_cset_text2_pane_t1_copy1

0x94a3,	// (0x00018252) main_ncimui_pane

0x3800,	// (0x000125af) popup_query_ncimui_window_ParamLimits

0x3800,	// (0x000125af) popup_query_ncimui_window

0xc61c,	// (0x0001b3cb) field_cale_ev2_pane_g4_ParamLimits

0xc61c,	// (0x0001b3cb) field_cale_ev2_pane_g4

0x53ff,	// (0x000141ae) cell_video_dialer_keypad_pane_g2_ParamLimits

0x53ff,	// (0x000141ae) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0001e657) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0001e657) cell_video_dialer_keypad_pane_g

0x5417,	// (0x000141c6) cell_video_dialer_keypad_pane_t1

0x9433,	// (0x000181e2) bg_popup_window_pane_cp012

0xa624,	// (0x000193d3) heading_pane_cp06

0xdd82,	// (0x0001cb31) ncim_query_content_pane

0x9433,	// (0x000181e2) bg_popup_heading_pane_cp01

0xdd8a,	// (0x0001cb39) ncim_heading_pane_t1

0xdd98,	// (0x0001cb47) ncim_indicator_popup_pane

0xddaa,	// (0x0001cb59) ncim_query_button_pane

0xddbe,	// (0x0001cb6d) ncim_query_content_pane_t1

0xddd0,	// (0x0001cb7f) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0001e9bd) ncim_query_content_pane_t

0xde0a,	// (0x0001cbb9) ncim_query_list_pane

0xde1c,	// (0x0001cbcb) ncim_query_popup_pane

0xdd98,	// (0x0001cb47) ncim_indicator_popup_pane_ParamLimits

0x75e8,	// (0x00016397) ncim_query_content_pane_g1_ParamLimits

0x75e8,	// (0x00016397) ncim_query_content_pane_g1

0xddbe,	// (0x0001cb6d) ncim_query_content_pane_t1_ParamLimits

0xddd0,	// (0x0001cb7f) ncim_query_content_pane_t2_ParamLimits

0x75f4,	// (0x000163a3) ncim_query_content_pane_t3_ParamLimits

0x75f4,	// (0x000163a3) ncim_query_content_pane_t3

0x761c,	// (0x000163cb) ncim_query_content_pane_t4_ParamLimits

0x761c,	// (0x000163cb) ncim_query_content_pane_t4

0x7644,	// (0x000163f3) ncim_query_content_pane_t5_ParamLimits

0x7644,	// (0x000163f3) ncim_query_content_pane_t5

0xdde2,	// (0x0001cb91) ncim_query_content_pane_t6_ParamLimits

0xdde2,	// (0x0001cb91) ncim_query_content_pane_t6

0xfc0e,	// (0x0001e9bd) ncim_query_content_pane_t_ParamLimits

0xde0a,	// (0x0001cbb9) ncim_query_list_pane_ParamLimits

0xde1c,	// (0x0001cbcb) ncim_query_popup_pane_ParamLimits

0xde30,	// (0x0001cbdf) wait_bar_pane_cp04

0x9433,	// (0x000181e2) input_focus_pane_cp011

0xde38,	// (0x0001cbe7) ncim_query_popup_pane_t1

0xde46,	// (0x0001cbf5) ncim_list_query_list_pane_ParamLimits

0xde46,	// (0x0001cbf5) ncim_list_query_list_pane

0x9433,	// (0x000181e2) bg_button_pane_cp027

0xde53,	// (0x0001cc02) ncim_query_button_pane_g1

0x9433,	// (0x000181e2) list_highlight_pane_cp012

0xde5d,	// (0x0001cc0c) ncim_list_query_list_pane_g1

0xde65,	// (0x0001cc14) ncim_list_query_list_pane_t1

0xd060,	// (0x0001be0f) cam4_indicators_pane_g3_ParamLimits

0xd060,	// (0x0001be0f) cam4_indicators_pane_g3

0xd0db,	// (0x0001be8a) vid4_indicators_pane_g5_ParamLimits

0xd0db,	// (0x0001be8a) vid4_indicators_pane_g5

0xd7c2,	// (0x0001c571) vid4_progress_pane_g5_ParamLimits

0xd7c2,	// (0x0001c571) vid4_progress_pane_g5

0x74d3,	// (0x00016282) main_ncimui_pane_g1

0x753c,	// (0x000162eb) ncimui_group_query_pane_ParamLimits

0x753c,	// (0x000162eb) ncimui_group_query_pane

0x7584,	// (0x00016333) ncimui_list_pane_ParamLimits

0x7584,	// (0x00016333) ncimui_list_pane

0x75ab,	// (0x0001635a) ncimui_text_pane_ParamLimits

0x75ab,	// (0x0001635a) ncimui_text_pane

0x766c,	// (0x0001641b) ncimui_text_pane_t1_ParamLimits

0x766c,	// (0x0001641b) ncimui_text_pane_t1

0xde73,	// (0x0001cc22) ncimui_list_single_graphic_pane_ParamLimits

0xde73,	// (0x0001cc22) ncimui_list_single_graphic_pane

0x768a,	// (0x00016439) ncimui_query_pane_ParamLimits

0x768a,	// (0x00016439) ncimui_query_pane

0x9433,	// (0x000181e2) list_highlight_pane_cp013

0xde83,	// (0x0001cc32) ncim_list_query_list_pane_t1_copy1

0xde91,	// (0x0001cc40) ncim_list_single_graphic_pane_g1

0x769d,	// (0x0001644c) ncim_query_button_pane_cp01

0x76a9,	// (0x00016458) ncim_query_entry_pane_ParamLimits

0x76a9,	// (0x00016458) ncim_query_entry_pane

0x76bc,	// (0x0001646b) ncimui_query_pane_g1

0x76c8,	// (0x00016477) ncimui_query_pane_t1_ParamLimits

0x76c8,	// (0x00016477) ncimui_query_pane_t1

0x94a3,	// (0x00018252) input_focus_pane_cp012

0xde99,	// (0x0001cc48) ncim_query_entry_pane_t1

0x9c12,	// (0x000189c1) main_im_pane_ParamLimits

0x94a3,	// (0x00018252) main_mobtv_pane_ParamLimits

0x94a3,	// (0x00018252) main_mobtv_pane

0x7295,	// (0x00016044) main_cset6_slider_pane_g18_ParamLimits

0x7295,	// (0x00016044) main_cset6_slider_pane_g18

0x72a1,	// (0x00016050) main_cset6_slider_pane_g19_ParamLimits

0x72a1,	// (0x00016050) main_cset6_slider_pane_g19

0xd212,	// (0x0001bfc1) bg_main_mobtv_pane_ParamLimits

0xd212,	// (0x0001bfc1) bg_main_mobtv_pane

0x76e1,	// (0x00016490) main_mobtv_info_pane

0x76ea,	// (0x00016499) main_mobtv_loading_pane_ParamLimits

0x76ea,	// (0x00016499) main_mobtv_loading_pane

0xdeab,	// (0x0001cc5a) main_mobtv_pg_channel_list_pane

0xdeb5,	// (0x0001cc64) main_mobtv_pg_hdr_pane

0x76f7,	// (0x000164a6) main_mobtv_programe_curr_pane_ParamLimits

0x76f7,	// (0x000164a6) main_mobtv_programe_curr_pane

0x7704,	// (0x000164b3) main_mobtv_programe_next_pane_ParamLimits

0x7704,	// (0x000164b3) main_mobtv_programe_next_pane

0xdebe,	// (0x0001cc6d) popup_mobtv_noti_window

0xc32d,	// (0x0001b0dc) main_tv_pg_hdr_pane_g1

0xdec6,	// (0x0001cc75) main_tv_pg_hdr_pane_g2

0xdece,	// (0x0001cc7d) main_tv_pg_hdr_pane_g3

0xded6,	// (0x0001cc85) main_tv_pg_hdr_pane_g4

0xdede,	// (0x0001cc8d) main_tv_pg_hdr_pane_g5

0xdee8,	// (0x0001cc97) main_tv_pg_hdr_pane_g6

0xdef2,	// (0x0001cca1) main_tv_pg_hdr_pane_g7

0xdefc,	// (0x0001ccab) main_tv_pg_hdr_pane_g8

0xdf06,	// (0x0001ccb5) main_tv_pg_hdr_pane_g9

0xdf10,	// (0x0001ccbf) main_tv_pg_hdr_pane_g10

0xdf1a,	// (0x0001ccc9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0001e9ca) main_tv_pg_hdr_pane_g

0xdf24,	// (0x0001ccd3) main_tv_pg_hdr_pane_t1

0xdf32,	// (0x0001cce1) main_tv_pg_hdr_pane_t2

0xdf40,	// (0x0001ccef) main_tv_pg_hdr_pane_t3

0xdf50,	// (0x0001ccff) main_tv_pg_hdr_pane_t4

0xdf60,	// (0x0001cd0f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0001e9e1) main_tv_pg_hdr_pane_t

0xdf70,	// (0x0001cd1f) single_mobtv_pg_channel_pane_ParamLimits

0xdf70,	// (0x0001cd1f) single_mobtv_pg_channel_pane

0xdf82,	// (0x0001cd31) single_mobtv_pg_channel_table_pane

0xa1fd,	// (0x00018fac) single_mobtv_pg_channel_thumb_pane

0xdf8b,	// (0x0001cd3a) single_tv_pg_channel_pane_g1

0xdf94,	// (0x0001cd43) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0001e9ec) single_tv_pg_channel_pane_g

0xc57b,	// (0x0001b32a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc57b,	// (0x0001b32a) bg_single_mobtv_pg_channel_thumb_pane

0xdf9d,	// (0x0001cd4c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf9d,	// (0x0001cd4c) single_mobtv_pg_channel_thumb_pane_g1

0xdfab,	// (0x0001cd5a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfab,	// (0x0001cd5a) single_mobtv_pg_channel_thumb_pane_g2

0xdfb7,	// (0x0001cd66) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfb7,	// (0x0001cd66) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0001e9f1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0001e9f1) single_mobtv_pg_channel_thumb_pane_g

0xdfc3,	// (0x0001cd72) single_mobtv_pg_channel_thumb_pane_t1

0xdfd1,	// (0x0001cd80) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0001e9f8) single_mobtv_pg_channel_thumb_pane_t

0xc32d,	// (0x0001b0dc) bg_single_mobtv_pg_channel_table_pane_g1

0xc32d,	// (0x0001b0dc) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0001e49e) bg_single_mobtv_pg_channel_table_pane_g

0xdfdf,	// (0x0001cd8e) single_mobtv_pg_channel_table_pane_t1

0xdfed,	// (0x0001cd9c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0001e9fd) single_mobtv_pg_channel_table_pane_t

0x7719,	// (0x000164c8) main_mobtv_info_pane_g1_ParamLimits

0x7719,	// (0x000164c8) main_mobtv_info_pane_g1

0x7737,	// (0x000164e6) main_mobtv_info_pane_t1_ParamLimits

0x7737,	// (0x000164e6) main_mobtv_info_pane_t1

0x77af,	// (0x0001655e) main_mobtv_info_pane_t2_ParamLimits

0x77af,	// (0x0001655e) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0001ea07) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0001ea07) main_mobtv_info_pane_t

0x783e,	// (0x000165ed) wait_bar_pane_cp05

0x7850,	// (0x000165ff) main_mobtv_loading_pane_g1_ParamLimits

0x7850,	// (0x000165ff) main_mobtv_loading_pane_g1

0x7863,	// (0x00016612) main_mobtv_loading_pane_g2_ParamLimits

0x7863,	// (0x00016612) main_mobtv_loading_pane_g2

0x786f,	// (0x0001661e) main_mobtv_loading_pane_g3_ParamLimits

0x786f,	// (0x0001661e) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0001ea0e) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0001ea0e) main_mobtv_loading_pane_g

0xdffb,	// (0x0001cdaa) main_mobtv_loading_pane_t1_ParamLimits

0xdffb,	// (0x0001cdaa) main_mobtv_loading_pane_t1

0xe013,	// (0x0001cdc2) main_mobtv_loading_pane_t2_ParamLimits

0xe013,	// (0x0001cdc2) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0001ea15) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0001ea15) main_mobtv_loading_pane_t

0x7882,	// (0x00016631) wait_bar_pane_cp06_ParamLimits

0x7882,	// (0x00016631) wait_bar_pane_cp06

0xe037,	// (0x0001cde6) main_mobtv_programe_curr_pane_t1

0xe045,	// (0x0001cdf4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0001ea1a) main_mobtv_programe_curr_pane_t

0xe053,	// (0x0001ce02) main_mobtv_programe_next_pane_t1

0xe061,	// (0x0001ce10) main_mobtv_programe_next_pane_t2

0xe06f,	// (0x0001ce1e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0001ea1f) main_mobtv_programe_next_pane_t

0x9433,	// (0x000181e2) bg_popup_mobtv_noti_window_pane

0xe07d,	// (0x0001ce2c) popup_mobtv_noti_window_g1

0xe085,	// (0x0001ce34) popup_mobtv_noti_window_t1

0xe093,	// (0x0001ce42) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0001ea26) popup_mobtv_noti_window_t

0xc32d,	// (0x0001b0dc) bg_popup_mobtv_noti_window_pane_g1

0x9433,	// (0x000181e2) sc_clock_pane

0x9433,	// (0x000181e2) main_fs_bigclock_pane

0x6ef2,	// (0x00015ca1) blid2_tripm_pane_t4_ParamLimits

0x6ef2,	// (0x00015ca1) blid2_tripm_pane_t4

0x7891,	// (0x00016640) sc_clock_pane_g1_ParamLimits

0x7891,	// (0x00016640) sc_clock_pane_g1

0x78a3,	// (0x00016652) sc_clock_pane_t1_ParamLimits

0x78a3,	// (0x00016652) sc_clock_pane_t1

0x78c5,	// (0x00016674) sc_clock_pane_t2_ParamLimits

0x78c5,	// (0x00016674) sc_clock_pane_t2

0x78dd,	// (0x0001668c) sc_clock_pane_t3_ParamLimits

0x78dd,	// (0x0001668c) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0001ea2b) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0001ea2b) sc_clock_pane_t

0x88ce,	// (0x0001767d) main_fs_bigclock_indicator_pane_ParamLimits

0x88ce,	// (0x0001767d) main_fs_bigclock_indicator_pane

0x7983,	// (0x00016732) main_fs_bigclock_pane_g1_ParamLimits

0x7983,	// (0x00016732) main_fs_bigclock_pane_g1

0x88da,	// (0x00017689) main_fs_bigclock_pane_t1_ParamLimits

0x88da,	// (0x00017689) main_fs_bigclock_pane_t1

0x88ec,	// (0x0001769b) main_fs_bigclock_pane_t2_ParamLimits

0x88ec,	// (0x0001769b) main_fs_bigclock_pane_t2

0x8900,	// (0x000176af) main_fs_bigclock_pane_t3_ParamLimits

0x8900,	// (0x000176af) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0001ec30) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0001ec30) main_fs_bigclock_pane_t

0xec9e,	// (0x0001da4d) main_fs_bigclock_indicator_pane_g1

0xddb2,	// (0x0001cb61) ncim_query_content_pane_g2_ParamLimits

0xddb2,	// (0x0001cb61) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0001e9b8) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0001e9b8) ncim_query_content_pane_g

0x78f6,	// (0x000166a5) sc_clock_pane_t4_ParamLimits

0x78f6,	// (0x000166a5) sc_clock_pane_t4

0x94a3,	// (0x00018252) main_radioblah_pane

0xcfa9,	// (0x0001bd58) cell_call4_button_pane_t1_copy1_ParamLimits

0xcfa9,	// (0x0001bd58) cell_call4_button_pane_t1_copy1

0x74eb,	// (0x0001629a) main_ncimui_pane_t1_ParamLimits

0x74eb,	// (0x0001629a) main_ncimui_pane_t1

0x7505,	// (0x000162b4) main_ncimui_pane_t2_ParamLimits

0x7505,	// (0x000162b4) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0001e9b1) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0001e9b1) main_ncimui_pane_t

0xe1d9,	// (0x0001cf88) main_radioblah_anim_pane_ParamLimits

0xe1d9,	// (0x0001cf88) main_radioblah_anim_pane

0xe1ea,	// (0x0001cf99) main_radioblah_info_pane_ParamLimits

0xe1ea,	// (0x0001cf99) main_radioblah_info_pane

0xe1fe,	// (0x0001cfad) main_radioblah_pane_t1_ParamLimits

0xe1fe,	// (0x0001cfad) main_radioblah_pane_t1

0xe21a,	// (0x0001cfc9) main_radioblah_pane_t2_ParamLimits

0xe21a,	// (0x0001cfc9) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0001ea4c) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0001ea4c) main_radioblah_pane_t

0x79e2,	// (0x00016791) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79e2,	// (0x00016791) main_radioblah_rocker_ctrl_pane

0xe262,	// (0x0001d011) main_radioblah_info_pane_t1_ParamLimits

0xe262,	// (0x0001d011) main_radioblah_info_pane_t1

0x7a3a,	// (0x000167e9) main_radioblah_info_pane_t2_ParamLimits

0x7a3a,	// (0x000167e9) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0001ea55) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0001ea55) main_radioblah_info_pane_t

0xc32d,	// (0x0001b0dc) main_radioblah_rocker_ctrl_pane_g1

0x7aea,	// (0x00016899) main_radioblah_rocker_ctrl_pane_g2

0x7af2,	// (0x000168a1) main_radioblah_rocker_ctrl_pane_g3

0x7afa,	// (0x000168a9) main_radioblah_rocker_ctrl_pane_g4

0x7b02,	// (0x000168b1) main_radioblah_rocker_ctrl_pane_g5

0x7b0a,	// (0x000168b9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0001ea5e) main_radioblah_rocker_ctrl_pane_g

0x71a5,	// (0x00015f54) main_cset_text2_pane_t1_copy1_ParamLimits

0xd033,	// (0x0001bde2) cam4_image_uncrop_qvga_pane

0xd086,	// (0x0001be35) vid4_image_uncrop_qcif_pane

0xd9b9,	// (0x0001c768) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9b9,	// (0x0001c768) cam6_image_uncrop_qvga_pane

0xda81,	// (0x0001c830) vid6_image_uncrop_qcif_pane_ParamLimits

0xda81,	// (0x0001c830) vid6_image_uncrop_qcif_pane

0x9433,	// (0x000181e2) bg_popup_preview_window_pane_cp03

0xdd64,	// (0x0001cb13) list_cset_text2_pane

0xdd6c,	// (0x0001cb1b) main_cset6_text2_pane_g1

0xdd74,	// (0x0001cb23) main_cset6_text2_pane_t1

0xe9d7,	// (0x0001d786) list_cset_text2_pane_t1_ParamLimits

0xe9d7,	// (0x0001d786) list_cset_text2_pane_t1

0x94a3,	// (0x00018252) main_radioblah_pane_ParamLimits

0x782a,	// (0x000165d9) main_mobtv_info_pane_t3_ParamLimits

0x782a,	// (0x000165d9) main_mobtv_info_pane_t3

0x79d0,	// (0x0001677f) main_radioblah_pane_g1

0x7a0a,	// (0x000167b9) main_radioblah_info_pane_g1

0x7a8f,	// (0x0001683e) main_radioblah_info_pane_t3_ParamLimits

0x7a8f,	// (0x0001683e) main_radioblah_info_pane_t3

0x21f5,	// (0x00010fa4) highlight_cell_cale_month_pane_ParamLimits

0x21f5,	// (0x00010fa4) highlight_cell_cale_month_pane

0x9433,	// (0x000181e2) main_phob_fisheye_pane

0xc6cb,	// (0x0001b47a) scroll_pane_cp0031_ParamLimits

0xc6cb,	// (0x0001b47a) scroll_pane_cp0031

0xdb8f,	// (0x0001c93e) wait_bar_pane_cp08_ParamLimits

0x7227,	// (0x00015fd6) cset_list_set_pane_copy1_ParamLimits

0xe29c,	// (0x0001d04b) highlight_cell_cale_month_pane_g1

0x7b12,	// (0x000168c1) highlight_cell_cale_month_pane_t1

0xd785,	// (0x0001c534) list_gen_pane_cp01

0xd2d0,	// (0x0001c07f) scroll_pane_01

0x7b20,	// (0x000168cf) list_single_double_fisheye_pane

0x7b29,	// (0x000168d8) list_double_fisheye_pane_g1_ParamLimits

0x7b29,	// (0x000168d8) list_double_fisheye_pane_g1

0x7b35,	// (0x000168e4) list_double_fisheye_pane_g2_ParamLimits

0x7b35,	// (0x000168e4) list_double_fisheye_pane_g2

0x7b49,	// (0x000168f8) list_double_fisheye_pane_g3_ParamLimits

0x7b49,	// (0x000168f8) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0001ea6b) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0001ea6b) list_double_fisheye_pane_g

0x7b72,	// (0x00016921) list_double_fisheye_pane_t1_ParamLimits

0x7b72,	// (0x00016921) list_double_fisheye_pane_t1

0x7b8d,	// (0x0001693c) list_double_fisheye_pane_t2_ParamLimits

0x7b8d,	// (0x0001693c) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0001ea76) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0001ea76) list_double_fisheye_pane_t

0x9433,	// (0x000181e2) main_call5_pane

0x7921,	// (0x000166d0) sc_swipe_pane_ParamLimits

0x7921,	// (0x000166d0) sc_swipe_pane

0x7bc2,	// (0x00016971) call5_image_pane_ParamLimits

0x7bc2,	// (0x00016971) call5_image_pane

0x7bdf,	// (0x0001698e) call5_swipe_1_pane_ParamLimits

0x7bdf,	// (0x0001698e) call5_swipe_1_pane

0x7bf2,	// (0x000169a1) call5_swipe_2_pane_ParamLimits

0x7bf2,	// (0x000169a1) call5_swipe_2_pane

0x7c1d,	// (0x000169cc) popup_call5_audio_first_window_ParamLimits

0x7c1d,	// (0x000169cc) popup_call5_audio_first_window

0xc57b,	// (0x0001b32a) call5_swipe_1_pane_g1_ParamLimits

0xc57b,	// (0x0001b32a) call5_swipe_1_pane_g1

0xe2a4,	// (0x0001d053) call5_swipe_1_pane_g2_ParamLimits

0xe2a4,	// (0x0001d053) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0001ea7b) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0001ea7b) call5_swipe_1_pane_g

0xe2b0,	// (0x0001d05f) call5_swipe_1_pane_t1_ParamLimits

0xe2b0,	// (0x0001d05f) call5_swipe_1_pane_t1

0xc57b,	// (0x0001b32a) call5_swipe_2_pane_g1_ParamLimits

0xc57b,	// (0x0001b32a) call5_swipe_2_pane_g1

0xe2c5,	// (0x0001d074) call5_swipe_2_pane_g2_ParamLimits

0xe2c5,	// (0x0001d074) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0001ea80) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0001ea80) call5_swipe_2_pane_g

0xe2d1,	// (0x0001d080) call5_swipe_2_pane_t1_ParamLimits

0xe2d1,	// (0x0001d080) call5_swipe_2_pane_t1

0xe2e6,	// (0x0001d095) sc_swipe_pane_g1_ParamLimits

0xe2e6,	// (0x0001d095) sc_swipe_pane_g1

0xe2f3,	// (0x0001d0a2) sc_swipe_pane_g2_ParamLimits

0xe2f3,	// (0x0001d0a2) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0001ea85) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0001ea85) sc_swipe_pane_g

0xe2ff,	// (0x0001d0ae) sc_swipe_pane_t1_ParamLimits

0xe2ff,	// (0x0001d0ae) sc_swipe_pane_t1

0x9433,	// (0x000181e2) main_cmail_launcher_pane

0x7c2e,	// (0x000169dd) aid_size_cell_cmail_l_ParamLimits

0x7c2e,	// (0x000169dd) aid_size_cell_cmail_l

0x7c3c,	// (0x000169eb) grid_cmail_l_pane_ParamLimits

0x7c3c,	// (0x000169eb) grid_cmail_l_pane

0x7c56,	// (0x00016a05) cell_cmail_l_pane_ParamLimits

0x7c56,	// (0x00016a05) cell_cmail_l_pane

0xe314,	// (0x0001d0c3) cell_cmail_l_pane_g1_ParamLimits

0xe314,	// (0x0001d0c3) cell_cmail_l_pane_g1

0xe320,	// (0x0001d0cf) cell_cmail_l_pane_t1_ParamLimits

0xe320,	// (0x0001d0cf) cell_cmail_l_pane_t1

0xe336,	// (0x0001d0e5) cell_cmail_l_pane_t2_ParamLimits

0xe336,	// (0x0001d0e5) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0001ea8a) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0001ea8a) cell_cmail_l_pane_t

0x94a3,	// (0x00018252) grid_highlight_pane_cp018_ParamLimits

0x94a3,	// (0x00018252) grid_highlight_pane_cp018

0x04aa,	// (0x0000f259) main2_pane_ParamLimits

0x04aa,	// (0x0000f259) main2_pane

0x9ceb,	// (0x00018a9a) popup_sp_fs_action_menu_bg_pane_g1

0x9cf3,	// (0x00018aa2) popup_sp_fs_action_menu_bg_pane_g2

0x9cfb,	// (0x00018aaa) popup_sp_fs_action_menu_bg_pane_g3

0x9d03,	// (0x00018ab2) popup_sp_fs_action_menu_bg_pane_g4

0x9d0b,	// (0x00018aba) popup_sp_fs_action_menu_bg_pane_g5

0x9d13,	// (0x00018ac2) popup_sp_fs_action_menu_bg_pane_g6

0x9d1b,	// (0x00018aca) popup_sp_fs_action_menu_bg_pane_g7

0x9d23,	// (0x00018ad2) popup_sp_fs_action_menu_bg_pane_g8

0x9d2b,	// (0x00018ada) popup_sp_fs_action_menu_bg_pane_g9

0x9d33,	// (0x00018ae2) popup_sp_fs_action_menu_bg_pane_g10

0x9d33,	// (0x00018ae2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001df39) popup_sp_fs_action_menu_bg_pane_g

0x13a2,	// (0x00010151) list_medium_line_x2_t3_g3_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x2_t3_g3_g1

0x13ae,	// (0x0001015d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x13ae,	// (0x0001015d) list_medium_line_x2_t3_g3_g2

0x13ba,	// (0x00010169) list_medium_line_x2_t3_g3_g3_ParamLimits

0x13ba,	// (0x00010169) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001dfe7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001dfe7) list_medium_line_x2_t3_g3_g

0x13c6,	// (0x00010175) list_medium_line_x2_t3_g3_t1_ParamLimits

0x13c6,	// (0x00010175) list_medium_line_x2_t3_g3_t1

0x13db,	// (0x0001018a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x13db,	// (0x0001018a) list_medium_line_x2_t3_g3_t2

0x13ef,	// (0x0001019e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x13ef,	// (0x0001019e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001dfee) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001dfee) list_medium_line_x2_t3_g3_t

0x13a2,	// (0x00010151) list_medium_line_x2_t3_g2_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x2_t3_g2_g1

0x13ba,	// (0x00010169) list_medium_line_x2_t3_g2_g2_ParamLimits

0x13ba,	// (0x00010169) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001dff5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001dff5) list_medium_line_x2_t3_g2_g

0x1404,	// (0x000101b3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1404,	// (0x000101b3) list_medium_line_x2_t3_g2_t1

0x141a,	// (0x000101c9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x141a,	// (0x000101c9) list_medium_line_x2_t3_g2_t2

0x142c,	// (0x000101db) list_medium_line_x2_t3_g2_t3_ParamLimits

0x142c,	// (0x000101db) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001dffa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001dffa) list_medium_line_x2_t3_g2_t

0x13a2,	// (0x00010151) list_medium_line_x2_t4_g4_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x2_t4_g4_g1

0x144a,	// (0x000101f9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x144a,	// (0x000101f9) list_medium_line_x2_t4_g4_g2

0x13ae,	// (0x0001015d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x13ae,	// (0x0001015d) list_medium_line_x2_t4_g4_g3

0x1456,	// (0x00010205) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1456,	// (0x00010205) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001e001) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001e001) list_medium_line_x2_t4_g4_g

0x1462,	// (0x00010211) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1462,	// (0x00010211) list_medium_line_x2_t4_g4_t1

0x147c,	// (0x0001022b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x147c,	// (0x0001022b) list_medium_line_x2_t4_g4_t2

0x1492,	// (0x00010241) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1492,	// (0x00010241) list_medium_line_x2_t4_g4_t3

0x14a7,	// (0x00010256) list_medium_line_x2_t4_g4_t4_ParamLimits

0x14a7,	// (0x00010256) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001e00a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001e00a) list_medium_line_x2_t4_g4_t

0x13a2,	// (0x00010151) list_medium_line_x2_t2_g4_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x2_t2_g4_g1

0x144a,	// (0x000101f9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x144a,	// (0x000101f9) list_medium_line_x2_t2_g4_g2

0x13ae,	// (0x0001015d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x13ae,	// (0x0001015d) list_medium_line_x2_t2_g4_g3

0x13ba,	// (0x00010169) list_medium_line_x2_t2_g4_g4_ParamLimits

0x13ba,	// (0x00010169) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001e071) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001e071) list_medium_line_x2_t2_g4_g

0x221b,	// (0x00010fca) list_medium_line_x2_t2_g4_t1_ParamLimits

0x221b,	// (0x00010fca) list_medium_line_x2_t2_g4_t1

0x13ef,	// (0x0001019e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x13ef,	// (0x0001019e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001e07a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001e07a) list_medium_line_x2_t2_g4_t

0x13a2,	// (0x00010151) list_medium_line_x2_t2_g3_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x2_t2_g3_g1

0x13ae,	// (0x0001015d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x13ae,	// (0x0001015d) list_medium_line_x2_t2_g3_g2

0x13ba,	// (0x00010169) list_medium_line_x2_t2_g3_g3_ParamLimits

0x13ba,	// (0x00010169) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001dfe7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001dfe7) list_medium_line_x2_t2_g3_g

0x2230,	// (0x00010fdf) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2230,	// (0x00010fdf) list_medium_line_x2_t2_g3_t1

0x13ef,	// (0x0001019e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x13ef,	// (0x0001019e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001e07f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001e07f) list_medium_line_x2_t2_g3_t

0x2384,	// (0x00011133) main_sp_fs_list_pane_ParamLimits

0x2384,	// (0x00011133) main_sp_fs_list_pane

0xd22e,	// (0x0001bfdd) sp_fs_scroll_pane_ParamLimits

0xd22e,	// (0x0001bfdd) sp_fs_scroll_pane

0x2390,	// (0x0001113f) list_medium_line_x2_t3_t1

0x23a0,	// (0x0001114f) list_medium_line_x2_t3_t2

0x23ae,	// (0x0001115d) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e0ca) list_medium_line_x2_t3_t

0x23bc,	// (0x0001116b) list_medium_line_x3_t4_t1

0x23cc,	// (0x0001117b) list_medium_line_x3_t4_t2

0x23da,	// (0x00011189) list_medium_line_x3_t4_t3

0x23ae,	// (0x0001115d) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e0d1) list_medium_line_x3_t4_t

0x23e8,	// (0x00011197) list_medium_line_x4_t5_t1

0x23f8,	// (0x000111a7) list_medium_line_x4_t5_t2

0x23da,	// (0x00011189) list_medium_line_x4_t5_t3

0x2406,	// (0x000111b5) list_medium_line_x4_t5_t4

0x23ae,	// (0x0001115d) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e0da) list_medium_line_x4_t5_t

0x13a2,	// (0x00010151) list_medium_line_t4_g4_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_t4_g4_g1

0x1456,	// (0x00010205) list_medium_line_t4_g4_g2_ParamLimits

0x1456,	// (0x00010205) list_medium_line_t4_g4_g2

0x2414,	// (0x000111c3) list_medium_line_t4_g4_g3_ParamLimits

0x2414,	// (0x000111c3) list_medium_line_t4_g4_g3

0x13ba,	// (0x00010169) list_medium_line_t4_g4_g4_ParamLimits

0x13ba,	// (0x00010169) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e0e5) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e0e5) list_medium_line_t4_g4_g

0x2420,	// (0x000111cf) list_medium_line_t4_g4_t1_ParamLimits

0x2420,	// (0x000111cf) list_medium_line_t4_g4_t1

0x2435,	// (0x000111e4) list_medium_line_t4_g4_t2_ParamLimits

0x2435,	// (0x000111e4) list_medium_line_t4_g4_t2

0x244b,	// (0x000111fa) list_medium_line_t4_g4_t3_ParamLimits

0x244b,	// (0x000111fa) list_medium_line_t4_g4_t3

0x13ef,	// (0x0001019e) list_medium_line_t4_g4_t4_ParamLimits

0x13ef,	// (0x0001019e) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e0ee) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e0ee) list_medium_line_t4_g4_t

0x2524,	// (0x000112d3) chi_dic_find_pane_g1

0x35d0,	// (0x0001237f) main_tport_pane

0xd424,	// (0x0001c1d3) list_medium_line_plain_t1

0x65f5,	// (0x000153a4) list_medium_line_t2_g2_g1_ParamLimits

0x65f5,	// (0x000153a4) list_medium_line_t2_g2_g1

0x6601,	// (0x000153b0) list_medium_line_t2_g2_g2_ParamLimits

0x6601,	// (0x000153b0) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0001e7c2) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0001e7c2) list_medium_line_t2_g2_g

0x660d,	// (0x000153bc) list_medium_line_t2_g2_t1_ParamLimits

0x660d,	// (0x000153bc) list_medium_line_t2_g2_t1

0x6627,	// (0x000153d6) list_medium_line_t2_g2_t2_ParamLimits

0x6627,	// (0x000153d6) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0001e7c7) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0001e7c7) list_medium_line_t2_g2_t

0xd7f9,	// (0x0001c5a8) aid_sp_fs_list_icon_a_sm

0xd801,	// (0x0001c5b0) aid_sp_fs_list_icon_d

0xd809,	// (0x0001c5b8) aid_sp_fs_text_primary

0xd812,	// (0x0001c5c1) aid_sp_fs_text_secondary

0x6c9f,	// (0x00015a4e) list_medium_line

0x6c9f,	// (0x00015a4e) list_medium_line_g2

0x6c9f,	// (0x00015a4e) list_medium_line_g3

0x6c9f,	// (0x00015a4e) list_medium_line_plain

0x6c9f,	// (0x00015a4e) list_medium_line_plain_t2

0x6c9f,	// (0x00015a4e) list_medium_line_plain_t3

0x6c9f,	// (0x00015a4e) list_medium_line_right_icon

0x6c9f,	// (0x00015a4e) list_medium_line_right_iconx2

0x6c9f,	// (0x00015a4e) list_medium_line_t2

0x6c9f,	// (0x00015a4e) list_medium_line_t2_g2

0x6c9f,	// (0x00015a4e) list_medium_line_t2_g3

0x6c9f,	// (0x00015a4e) list_medium_line_t2_right_icon

0x6c9f,	// (0x00015a4e) list_medium_line_t2_right_iconx2

0x6c9f,	// (0x00015a4e) list_medium_line_t3

0x6c9f,	// (0x00015a4e) list_medium_line_t3_g2

0x6c9f,	// (0x00015a4e) list_medium_line_t3_g3

0x6c9f,	// (0x00015a4e) list_medium_line_t3_right_iconx2

0x6ca8,	// (0x00015a57) list_medium_line_t4_g4

0x6cb1,	// (0x00015a60) list_medium_line_x2

0x6cb1,	// (0x00015a60) list_medium_line_x2_t2_g2

0x6cb1,	// (0x00015a60) list_medium_line_x2_t2_g3

0x6cb1,	// (0x00015a60) list_medium_line_x2_t2_g4

0x6cb1,	// (0x00015a60) list_medium_line_x2_t3

0x6cb1,	// (0x00015a60) list_medium_line_x2_t3_g2

0x6cb1,	// (0x00015a60) list_medium_line_x2_t3_g3

0x6cb1,	// (0x00015a60) list_medium_line_x2_t3_g4

0x6cb1,	// (0x00015a60) list_medium_line_x2_t4_g2

0x6cb1,	// (0x00015a60) list_medium_line_x2_t4_g4

0x6cba,	// (0x00015a69) list_medium_line_x3

0x6cba,	// (0x00015a69) list_medium_line_x3_t4

0x6cba,	// (0x00015a69) list_medium_line_x3_t4_g4

0x6ca8,	// (0x00015a57) list_medium_line_x4_t4

0x6ca8,	// (0x00015a57) list_medium_line_x4_t4_g7

0x6ca8,	// (0x00015a57) list_medium_line_x4_t5

0x6cc3,	// (0x00015a72) list_single_fs_dyc_pane_ParamLimits

0x6cc3,	// (0x00015a72) list_single_fs_dyc_pane

0x13a2,	// (0x00010151) list_medium_line_x4_t4_g7_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x4_t4_g7_g1

0x73e9,	// (0x00016198) list_medium_line_x4_t4_g7_g2_ParamLimits

0x73e9,	// (0x00016198) list_medium_line_x4_t4_g7_g2

0x73f5,	// (0x000161a4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x73f5,	// (0x000161a4) list_medium_line_x4_t4_g7_g3

0x7404,	// (0x000161b3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7404,	// (0x000161b3) list_medium_line_x4_t4_g7_g4

0x7410,	// (0x000161bf) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7410,	// (0x000161bf) list_medium_line_x4_t4_g7_g5

0x741f,	// (0x000161ce) list_medium_line_x4_t4_g7_g6_ParamLimits

0x741f,	// (0x000161ce) list_medium_line_x4_t4_g7_g6

0x742e,	// (0x000161dd) list_medium_line_x4_t4_g7_g7_ParamLimits

0x742e,	// (0x000161dd) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0001e992) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0001e992) list_medium_line_x4_t4_g7_g

0x743a,	// (0x000161e9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x743a,	// (0x000161e9) list_medium_line_x4_t4_g7_t1

0x744f,	// (0x000161fe) list_medium_line_x4_t4_g7_t2_ParamLimits

0x744f,	// (0x000161fe) list_medium_line_x4_t4_g7_t2

0x7464,	// (0x00016213) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7464,	// (0x00016213) list_medium_line_x4_t4_g7_t3

0x7479,	// (0x00016228) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7479,	// (0x00016228) list_medium_line_x4_t4_g7_t4

0x748b,	// (0x0001623a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x748b,	// (0x0001623a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0001e9a1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0001e9a1) list_medium_line_x4_t4_g7_t

0x749d,	// (0x0001624c) list_single_dyc_row_pane_ParamLimits

0x749d,	// (0x0001624c) list_single_dyc_row_pane

0x7baf,	// (0x0001695e) call5_gesture_pane_ParamLimits

0x7baf,	// (0x0001695e) call5_gesture_pane

0x7c05,	// (0x000169b4) call5_windows_pane_ParamLimits

0x7c05,	// (0x000169b4) call5_windows_pane

0x7c70,	// (0x00016a1f) call5_swipe_1_pane_cp_ParamLimits

0x7c70,	// (0x00016a1f) call5_swipe_1_pane_cp

0x7c7c,	// (0x00016a2b) call5_swipe_2_pane_cp_ParamLimits

0x7c7c,	// (0x00016a2b) call5_swipe_2_pane_cp

0x9e8b,	// (0x00018c3a) call5_image_pane_cp

0x7c88,	// (0x00016a37) popup_call5_audio_first_window_cp_ParamLimits

0x7c88,	// (0x00016a37) popup_call5_audio_first_window_cp

0xe2e6,	// (0x0001d095) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2e6,	// (0x0001d095) call5_swipe_1_pane_g1_cp

0xe353,	// (0x0001d102) call5_swipe_1_pane_g2_cp

0xe2ff,	// (0x0001d0ae) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2ff,	// (0x0001d0ae) call5_swipe_1_pane_t1_cp

0xe2e6,	// (0x0001d095) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2e6,	// (0x0001d095) call5_swipe_2_pane_g1_cp

0xe35b,	// (0x0001d10a) call5_swipe_2_pane_g2_cp

0xe363,	// (0x0001d112) call5_swipe_2_pane_t1_cp_ParamLimits

0xe363,	// (0x0001d112) call5_swipe_2_pane_t1_cp

0x94a3,	// (0x00018252) main_sp_fs_email_pane

0xe378,	// (0x0001d127) main_sp_fs_listscroll_pane_te

0x7c96,	// (0x00016a45) popup_sp_fs_action_menu_pane_ParamLimits

0x7c96,	// (0x00016a45) popup_sp_fs_action_menu_pane

0xc32d,	// (0x0001b0dc) bg_sp_fs_ctrlbar_pane_g1

0xe381,	// (0x0001d130) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe38a,	// (0x0001d139) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe393,	// (0x0001d142) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc32d,	// (0x0001b0dc) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0001ea8f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc112,	// (0x0001aec1) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc112,	// (0x0001aec1) bg_sp_fs_ctrlbar_ddmenu_pane

0xe39c,	// (0x0001d14b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe39c,	// (0x0001d14b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3a8,	// (0x0001d157) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3a8,	// (0x0001d157) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0001ea98) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0001ea98) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3b4,	// (0x0001d163) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3b4,	// (0x0001d163) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7cda,	// (0x00016a89) list_medium_line_t2_right_icon_g1

0x7ce2,	// (0x00016a91) list_medium_line_t2_right_icon_t1

0x7cf2,	// (0x00016aa1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0001ea9d) list_medium_line_t2_right_icon_t

0xbe12,	// (0x0001abc1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbe12,	// (0x0001abc1) bg_sp_fs_ctrlbar_pane

0x7d4c,	// (0x00016afb) main_sp_fs_ctrlbar_button_pane_cp01

0x7d56,	// (0x00016b05) main_sp_fs_ctrlbar_ddmenu_pane

0xe406,	// (0x0001d1b5) main_sp_fs_ctrlbar_pane_g1

0xe412,	// (0x0001d1c1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0001eaa2) main_sp_fs_ctrlbar_pane_g

0xe41e,	// (0x0001d1cd) main_sp_fs_ctrlbar_pane_t1

0x7d60,	// (0x00016b0f) main_sp_fs_ctrlbar_pane

0x7d84,	// (0x00016b33) main_sp_fs_listscroll_pane_te_cp01

0x7da4,	// (0x00016b53) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7da4,	// (0x00016b53) popup_sp_fs_action_menu_pane_cp01

0x94a3,	// (0x00018252) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x94a3,	// (0x00018252) bg_sp_fs_highlight_list_pane_cp01

0xe44e,	// (0x0001d1fd) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe44e,	// (0x0001d1fd) sp_fs_action_menu_list_gene_pane_g1

0xe45d,	// (0x0001d20c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe45d,	// (0x0001d20c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0001eaac) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0001eaac) sp_fs_action_menu_list_gene_pane_g

0xe46a,	// (0x0001d219) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe46a,	// (0x0001d219) sp_fs_action_menu_list_gene_pane_t1

0xe482,	// (0x0001d231) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe482,	// (0x0001d231) sp_fs_action_menu_list_gene_pane

0xe4a1,	// (0x0001d250) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4a1,	// (0x0001d250) popup_sp_fs_action_menu_bg_pane

0xe4af,	// (0x0001d25e) sp_fs_action_menu_list_pane_ParamLimits

0xe4af,	// (0x0001d25e) sp_fs_action_menu_list_pane

0x7dd4,	// (0x00016b83) sp_fs_scroll_pane_cp01_ParamLimits

0x7dd4,	// (0x00016b83) sp_fs_scroll_pane_cp01

0x7dfa,	// (0x00016ba9) list_medium_line_plain_t2_t1

0x7e0a,	// (0x00016bb9) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0001eab1) list_medium_line_plain_t2_t

0x7e1a,	// (0x00016bc9) list_medium_line_plain_t3_t1

0x7e2a,	// (0x00016bd9) list_medium_line_plain_t3_t2

0x7e38,	// (0x00016be7) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0001eab6) list_medium_line_plain_t3_t

0x13a2,	// (0x00010151) list_medium_line_x2_t2_g2_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x2_t2_g2_g1

0x13ba,	// (0x00010169) list_medium_line_x2_t2_g2_g2_ParamLimits

0x13ba,	// (0x00010169) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001dff5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001dff5) list_medium_line_x2_t2_g2_g

0x2420,	// (0x000111cf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2420,	// (0x000111cf) list_medium_line_x2_t2_g2_t1

0x13ef,	// (0x0001019e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x13ef,	// (0x0001019e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0001eabd) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0001eabd) list_medium_line_x2_t2_g2_t

0x13a2,	// (0x00010151) list_medium_line_x2_t4_g2_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x2_t4_g2_g1

0x13ba,	// (0x00010169) list_medium_line_x2_t4_g2_g2_ParamLimits

0x13ba,	// (0x00010169) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001dff5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001dff5) list_medium_line_x2_t4_g2_g

0x7e46,	// (0x00016bf5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e46,	// (0x00016bf5) list_medium_line_x2_t4_g2_t1

0x7e60,	// (0x00016c0f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e60,	// (0x00016c0f) list_medium_line_x2_t4_g2_t2

0x7e76,	// (0x00016c25) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e76,	// (0x00016c25) list_medium_line_x2_t4_g2_t3

0x13ef,	// (0x0001019e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x13ef,	// (0x0001019e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0001eac2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0001eac2) list_medium_line_x2_t4_g2_t

0x7e8b,	// (0x00016c3a) list_medium_line_t3_right_iconx2_g1

0x7cda,	// (0x00016a89) list_medium_line_t3_right_iconx2_g2

0x7e93,	// (0x00016c42) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0001eacb) list_medium_line_t3_right_iconx2_g

0x7e9d,	// (0x00016c4c) list_medium_line_t3_right_iconx2_t1

0x7ead,	// (0x00016c5c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0001ead2) list_medium_line_t3_right_iconx2_t

0x13a2,	// (0x00010151) list_medium_line_x3_t4_g4_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x3_t4_g4_g1

0x13ae,	// (0x0001015d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x13ae,	// (0x0001015d) list_medium_line_x3_t4_g4_g2

0x1456,	// (0x00010205) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1456,	// (0x00010205) list_medium_line_x3_t4_g4_g3

0x7ebb,	// (0x00016c6a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7ebb,	// (0x00016c6a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0001ead7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0001ead7) list_medium_line_x3_t4_g4_g

0x7ec7,	// (0x00016c76) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ec7,	// (0x00016c76) list_medium_line_x3_t4_g4_t1

0x7ede,	// (0x00016c8d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7ede,	// (0x00016c8d) list_medium_line_x3_t4_g4_t2

0x7ef9,	// (0x00016ca8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7ef9,	// (0x00016ca8) list_medium_line_x3_t4_g4_t3

0x7f0e,	// (0x00016cbd) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f0e,	// (0x00016cbd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0001eae0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0001eae0) list_medium_line_x3_t4_g4_t

0x7f2b,	// (0x00016cda) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f2b,	// (0x00016cda) list_single_dyc_row_text_pane_t1

0x7f74,	// (0x00016d23) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f74,	// (0x00016d23) list_single_dyc_row_text_pane_t2

0xe4cf,	// (0x0001d27e) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4cf,	// (0x0001d27e) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x0001eae9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0001eae9) list_single_dyc_row_text_pane_t

0xe4f3,	// (0x0001d2a2) list_single_dyc_row_pane_g1_ParamLimits

0xe4f3,	// (0x0001d2a2) list_single_dyc_row_pane_g1

0xe4ff,	// (0x0001d2ae) list_single_dyc_row_pane_g2_ParamLimits

0xe4ff,	// (0x0001d2ae) list_single_dyc_row_pane_g2

0xe50b,	// (0x0001d2ba) list_single_dyc_row_pane_g3_ParamLimits

0xe50b,	// (0x0001d2ba) list_single_dyc_row_pane_g3

0xe517,	// (0x0001d2c6) list_single_dyc_row_pane_g4_ParamLimits

0xe517,	// (0x0001d2c6) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x0001eaf6) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x0001eaf6) list_single_dyc_row_pane_g

0xe523,	// (0x0001d2d2) list_single_dyc_row_text_pane_ParamLimits

0xe523,	// (0x0001d2d2) list_single_dyc_row_text_pane

0x9433,	// (0x000181e2) bg_sp_fs_scroll_pane

0xe542,	// (0x0001d2f1) thumb_sp_fs_scroll_pane

0x65f5,	// (0x000153a4) list_medium_line_g1_ParamLimits

0x65f5,	// (0x000153a4) list_medium_line_g1

0xe54b,	// (0x0001d2fa) list_medium_line_t1_ParamLimits

0xe54b,	// (0x0001d2fa) list_medium_line_t1

0x13a2,	// (0x00010151) list_medium_line_x2_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x2_g1

0x13ae,	// (0x0001015d) list_medium_line_x2_g2_ParamLimits

0x13ae,	// (0x0001015d) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0001eaff) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0001eaff) list_medium_line_x2_g

0xe560,	// (0x0001d30f) list_medium_line_x2_t1_ParamLimits

0xe560,	// (0x0001d30f) list_medium_line_x2_t1

0x13a2,	// (0x00010151) list_medium_line_x3_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x3_g1

0x13ae,	// (0x0001015d) list_medium_line_x3_g2_ParamLimits

0x13ae,	// (0x0001015d) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0001eaff) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0001eaff) list_medium_line_x3_g

0xe560,	// (0x0001d30f) list_medium_line_x3_t1_ParamLimits

0xe560,	// (0x0001d30f) list_medium_line_x3_t1

0xe576,	// (0x0001d325) thumb_sp_fs_scroll_pane_g1

0xe57f,	// (0x0001d32e) thumb_sp_fs_scroll_pane_g2

0xe588,	// (0x0001d337) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001eb04) thumb_sp_fs_scroll_pane_g

0xe576,	// (0x0001d325) bg_sp_fs_scroll_pane_g1

0xe57f,	// (0x0001d32e) bg_sp_fs_scroll_pane_g2

0xe588,	// (0x0001d337) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001eb04) bg_sp_fs_scroll_pane_g

0x13a2,	// (0x00010151) list_medium_line_x2_t3_g4_g1_ParamLimits

0x13a2,	// (0x00010151) list_medium_line_x2_t3_g4_g1

0x144a,	// (0x000101f9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x144a,	// (0x000101f9) list_medium_line_x2_t3_g4_g2

0x13ae,	// (0x0001015d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x13ae,	// (0x0001015d) list_medium_line_x2_t3_g4_g3

0x13ba,	// (0x00010169) list_medium_line_x2_t3_g4_g4_ParamLimits

0x13ba,	// (0x00010169) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001e071) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001e071) list_medium_line_x2_t3_g4_g

0x80a9,	// (0x00016e58) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80a9,	// (0x00016e58) list_medium_line_x2_t3_g4_t1

0x80c3,	// (0x00016e72) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80c3,	// (0x00016e72) list_medium_line_x2_t3_g4_t2

0x13ef,	// (0x0001019e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x13ef,	// (0x0001019e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x0001eb0b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x0001eb0b) list_medium_line_x2_t3_g4_t

0x65f5,	// (0x000153a4) list_medium_line_g2_g1_ParamLimits

0x65f5,	// (0x000153a4) list_medium_line_g2_g1

0x6601,	// (0x000153b0) list_medium_line_g2_g2_ParamLimits

0x6601,	// (0x000153b0) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0001e7c2) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0001e7c2) list_medium_line_g2_g

0xe591,	// (0x0001d340) list_medium_line_g2_t1_ParamLimits

0xe591,	// (0x0001d340) list_medium_line_g2_t1

0x65f5,	// (0x000153a4) list_medium_line_t3_g2_g1_ParamLimits

0x65f5,	// (0x000153a4) list_medium_line_t3_g2_g1

0x6601,	// (0x000153b0) list_medium_line_t3_g2_g2_ParamLimits

0x6601,	// (0x000153b0) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0001e7c2) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0001e7c2) list_medium_line_t3_g2_g

0x80dd,	// (0x00016e8c) list_medium_line_t3_g2_t1_ParamLimits

0x80dd,	// (0x00016e8c) list_medium_line_t3_g2_t1

0x80f7,	// (0x00016ea6) list_medium_line_t3_g2_t2_ParamLimits

0x80f7,	// (0x00016ea6) list_medium_line_t3_g2_t2

0x810d,	// (0x00016ebc) list_medium_line_t3_g2_t3_ParamLimits

0x810d,	// (0x00016ebc) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0001eb12) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0001eb12) list_medium_line_t3_g2_t

0x7cda,	// (0x00016a89) list_medium_line_right_icon_g1

0xe5a6,	// (0x0001d355) list_medium_line_right_icon_t1

0x65f5,	// (0x000153a4) list_medium_line_t2_g1_ParamLimits

0x65f5,	// (0x000153a4) list_medium_line_t2_g1

0x8127,	// (0x00016ed6) list_medium_line_t2_t1_ParamLimits

0x8127,	// (0x00016ed6) list_medium_line_t2_t1

0x8141,	// (0x00016ef0) list_medium_line_t2_t2_ParamLimits

0x8141,	// (0x00016ef0) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x0001eb19) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x0001eb19) list_medium_line_t2_t

0x65f5,	// (0x000153a4) list_medium_line_t3_g1_ParamLimits

0x65f5,	// (0x000153a4) list_medium_line_t3_g1

0x815a,	// (0x00016f09) list_medium_line_t3_t1_ParamLimits

0x815a,	// (0x00016f09) list_medium_line_t3_t1

0x8174,	// (0x00016f23) list_medium_line_t3_t2_ParamLimits

0x8174,	// (0x00016f23) list_medium_line_t3_t2

0x818a,	// (0x00016f39) list_medium_line_t3_t3_ParamLimits

0x818a,	// (0x00016f39) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0001eb1e) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0001eb1e) list_medium_line_t3_t

0x65f5,	// (0x000153a4) list_medium_line_g3_g1_ParamLimits

0x65f5,	// (0x000153a4) list_medium_line_g3_g1

0x819f,	// (0x00016f4e) list_medium_line_g3_g2_ParamLimits

0x819f,	// (0x00016f4e) list_medium_line_g3_g2

0x6601,	// (0x000153b0) list_medium_line_g3_g3_ParamLimits

0x6601,	// (0x000153b0) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x0001eb25) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x0001eb25) list_medium_line_g3_g

0xe5b4,	// (0x0001d363) list_medium_line_g3_t1_ParamLimits

0xe5b4,	// (0x0001d363) list_medium_line_g3_t1

0x65f5,	// (0x000153a4) list_medium_line_t2_g3_g1_ParamLimits

0x65f5,	// (0x000153a4) list_medium_line_t2_g3_g1

0x819f,	// (0x00016f4e) list_medium_line_t2_g3_g2_ParamLimits

0x819f,	// (0x00016f4e) list_medium_line_t2_g3_g2

0x6601,	// (0x000153b0) list_medium_line_t2_g3_g3_ParamLimits

0x6601,	// (0x000153b0) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x0001eb25) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x0001eb25) list_medium_line_t2_g3_g

0x81ab,	// (0x00016f5a) list_medium_line_t2_g3_t1_ParamLimits

0x81ab,	// (0x00016f5a) list_medium_line_t2_g3_t1

0x81c5,	// (0x00016f74) list_medium_line_t2_g3_t2_ParamLimits

0x81c5,	// (0x00016f74) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x0001eb2c) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x0001eb2c) list_medium_line_t2_g3_t

0x65f5,	// (0x000153a4) list_medium_line_t3_g3_g1_ParamLimits

0x65f5,	// (0x000153a4) list_medium_line_t3_g3_g1

0x819f,	// (0x00016f4e) list_medium_line_t3_g3_g2_ParamLimits

0x819f,	// (0x00016f4e) list_medium_line_t3_g3_g2

0x6601,	// (0x000153b0) list_medium_line_t3_g3_g3_ParamLimits

0x6601,	// (0x000153b0) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x0001eb25) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x0001eb25) list_medium_line_t3_g3_g

0x81e3,	// (0x00016f92) list_medium_line_t3_g3_t1_ParamLimits

0x81e3,	// (0x00016f92) list_medium_line_t3_g3_t1

0x81fc,	// (0x00016fab) list_medium_line_t3_g3_t2_ParamLimits

0x81fc,	// (0x00016fab) list_medium_line_t3_g3_t2

0x8212,	// (0x00016fc1) list_medium_line_t3_g3_t3_ParamLimits

0x8212,	// (0x00016fc1) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0001eb31) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0001eb31) list_medium_line_t3_g3_t

0x7e8b,	// (0x00016c3a) list_medium_line_right_iconx2_g1

0x7cda,	// (0x00016a89) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001eb38) list_medium_line_right_iconx2_g

0xe5c9,	// (0x0001d378) list_medium_line_right_iconx2_t1

0x7e8b,	// (0x00016c3a) list_medium_line_t2_right_iconx2_g1

0x7cda,	// (0x00016a89) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001eb38) list_medium_line_t2_right_iconx2_g

0x822c,	// (0x00016fdb) list_medium_line_t2_right_iconx2_t1

0x823c,	// (0x00016feb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0001eb3d) list_medium_line_t2_right_iconx2_t

0x824e,	// (0x00016ffd) list_medium_line_x4_t4_t1

0x825c,	// (0x0001700b) list_medium_line_x4_t4_t2

0x826c,	// (0x0001701b) list_medium_line_x4_t4_t3

0x827c,	// (0x0001702b) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0001eb42) list_medium_line_x4_t4_t

0x82cf,	// (0x0001707e) tport_appsw_pane_ParamLimits

0x82cf,	// (0x0001707e) tport_appsw_pane

0x82e7,	// (0x00017096) tport_contact_pane_ParamLimits

0x82e7,	// (0x00017096) tport_contact_pane

0x82ff,	// (0x000170ae) tport_listscroll_pane_ParamLimits

0x82ff,	// (0x000170ae) tport_listscroll_pane

0x8319,	// (0x000170c8) cell_tport_appsw_pane_ParamLimits

0x8319,	// (0x000170c8) cell_tport_appsw_pane

0xd131,	// (0x0001bee0) tport_appsw_pane_g1_ParamLimits

0xd131,	// (0x0001bee0) tport_appsw_pane_g1

0xe5d7,	// (0x0001d386) tport_contact_pane_g1

0xe5e0,	// (0x0001d38f) tport_contact_pane_t1

0xe5ee,	// (0x0001d39d) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x0001eb4b) tport_contact_pane_t

0xe5fc,	// (0x0001d3ab) list_tport_pane

0xe605,	// (0x0001d3b4) scroll_pane_cp_030

0x8361,	// (0x00017110) cell_tport_appsw_pane_g1

0x8371,	// (0x00017120) cell_tport_appsw_pane_t1

0x837f,	// (0x0001712e) grid_highlight_pane_cp019

0x8387,	// (0x00017136) list_tport_double_graphic_pane_ParamLimits

0x8387,	// (0x00017136) list_tport_double_graphic_pane

0x94a3,	// (0x00018252) list_highlight_pane_cp023_ParamLimits

0x94a3,	// (0x00018252) list_highlight_pane_cp023

0x8394,	// (0x00017143) list_tport_double_graphic_pane_g1_ParamLimits

0x8394,	// (0x00017143) list_tport_double_graphic_pane_g1

0x83a1,	// (0x00017150) list_tport_double_graphic_pane_t1_ParamLimits

0x83a1,	// (0x00017150) list_tport_double_graphic_pane_t1

0x83b6,	// (0x00017165) list_tport_double_graphic_pane_t2_ParamLimits

0x83b6,	// (0x00017165) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x0001eb57) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x0001eb57) list_tport_double_graphic_pane_t

0x9433,	// (0x000181e2) main_cale_note_pane

0x5cc7,	// (0x00014a76) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5cc7,	// (0x00014a76) cell_vitu2_function_top_wide_pane_cp01

0x783e,	// (0x000165ed) wait_bar_pane_cp05_ParamLimits

0x94a3,	// (0x00018252) listscroll_cmail_pane

0xe60e,	// (0x0001d3bd) list_cmail_pane

0x83c8,	// (0x00017177) list_cmail_body_pane

0x83dd,	// (0x0001718c) list_single_cmail_header_caption_pane

0x83f4,	// (0x000171a3) list_single_cmail_header_detail_pane_ParamLimits

0x83f4,	// (0x000171a3) list_single_cmail_header_detail_pane

0xe61e,	// (0x0001d3cd) list_single_cmail_header_caption_pane_t1

0x841e,	// (0x000171cd) list_single_cmail_header_detail_pane_g1_ParamLimits

0x841e,	// (0x000171cd) list_single_cmail_header_detail_pane_g1

0xe635,	// (0x0001d3e4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe635,	// (0x0001d3e4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x0001eb5c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x0001eb5c) list_single_cmail_header_detail_pane_g

0xe64e,	// (0x0001d3fd) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe64e,	// (0x0001d3fd) list_single_cmail_header_detail_pane_t1

0xe6ae,	// (0x0001d45d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6ae,	// (0x0001d45d) list_single_cmail_header_editor_pane_bg

0xdf94,	// (0x0001cd43) list_cmail_body_pane_g1

0xe6c5,	// (0x0001d474) list_cmail_body_pane_t1

0xd180,	// (0x0001bf2f) list_single_cmail_header_editor_pane_bg_g1

0xa0ee,	// (0x00018e9d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd190,	// (0x0001bf3f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd188,	// (0x0001bf37) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd44e,	// (0x0001c1fd) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1b0,	// (0x0001bf5f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1a0,	// (0x0001bf4f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1a8,	// (0x0001bf57) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa0ce,	// (0x00018e7d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8436,	// (0x000171e5) calenote_gesture_pane_ParamLimits

0x8436,	// (0x000171e5) calenote_gesture_pane

0x8456,	// (0x00017205) calenote_window_pane_ParamLimits

0x8456,	// (0x00017205) calenote_window_pane

0xe6d3,	// (0x0001d482) popup_note_window_cp01

0x8472,	// (0x00017221) calenote_swipe_1_pane_ParamLimits

0x8472,	// (0x00017221) calenote_swipe_1_pane

0x7c7c,	// (0x00016a2b) calenote_swipe_2_pane_ParamLimits

0x7c7c,	// (0x00016a2b) calenote_swipe_2_pane

0xe2e6,	// (0x0001d095) calenote_swipe_1_pane_g1_ParamLimits

0xe2e6,	// (0x0001d095) calenote_swipe_1_pane_g1

0xe2f3,	// (0x0001d0a2) calenote_swipe_1_pane_g2_ParamLimits

0xe2f3,	// (0x0001d0a2) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0001ea85) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0001ea85) calenote_swipe_1_pane_g

0xe6e5,	// (0x0001d494) calenote_swipe_1_pane_t1_ParamLimits

0xe6e5,	// (0x0001d494) calenote_swipe_1_pane_t1

0xe2e6,	// (0x0001d095) calenote_swipe_2_pane_g1_ParamLimits

0xe2e6,	// (0x0001d095) calenote_swipe_2_pane_g1

0xe704,	// (0x0001d4b3) calenote_swipe_2_pane_g2_ParamLimits

0xe704,	// (0x0001d4b3) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x0001eb68) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x0001eb68) calenote_swipe_2_pane_g

0xe710,	// (0x0001d4bf) calenote_swipe_2_pane_t1_ParamLimits

0xe710,	// (0x0001d4bf) calenote_swipe_2_pane_t1

0x9433,	// (0x000181e2) main_mup_navstr_pane

0x498b,	// (0x0001373a) main_mup3_pane_t7_ParamLimits

0x498b,	// (0x0001373a) main_mup3_pane_t7

0xcce9,	// (0x0001ba98) main_mp4_pane_g6_ParamLimits

0xcce9,	// (0x0001ba98) main_mp4_pane_g6

0xcf11,	// (0x0001bcc0) main_image3_pane_t4_ParamLimits

0xcf11,	// (0x0001bcc0) main_image3_pane_t4

0x8487,	// (0x00017236) popup_navstr_preview_pane_ParamLimits

0x8487,	// (0x00017236) popup_navstr_preview_pane

0x849b,	// (0x0001724a) scroll_navstr_pane_ParamLimits

0x849b,	// (0x0001724a) scroll_navstr_pane

0x9433,	// (0x000181e2) bg_popup_preview_window_pane_cp04

0xe737,	// (0x0001d4e6) popup_navstr_preview_pane_t1

0x84af,	// (0x0001725e) scroll_navstr_pane_g1_ParamLimits

0x84af,	// (0x0001725e) scroll_navstr_pane_g1

0x84c3,	// (0x00017272) scroll_navstr_pane_t1_ParamLimits

0x84c3,	// (0x00017272) scroll_navstr_pane_t1

0xe6dc,	// (0x0001d48b) bg_button_pane_cp014

0xe6dc,	// (0x0001d48b) bg_button_pane_cp030

0x7b55,	// (0x00016904) list_double_fisheye_pane_g4_ParamLimits

0x7b55,	// (0x00016904) list_double_fisheye_pane_g4

0x7b61,	// (0x00016910) list_double_fisheye_pane_g5_ParamLimits

0x7b61,	// (0x00016910) list_double_fisheye_pane_g5

0xd22e,	// (0x0001bfdd) sp_fs_scroll_pane_cp03

0xe406,	// (0x0001d1b5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe412,	// (0x0001d1c1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0001eaa2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe41e,	// (0x0001d1cd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe616,	// (0x0001d3c5) sp_fs_scroll_pane_cp02

0x9dca,	// (0x00018b79) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9dca,	// (0x00018b79) popup_sp_fs_calendar_preview_list_single_pane

0x9433,	// (0x000181e2) main_cam6_pano_pane

0x94a3,	// (0x00018252) main_mup3_pane_ParamLimits

0x9433,	// (0x000181e2) main_phacti_pane

0x7711,	// (0x000164c0) bg_button_pane_cp11

0x772b,	// (0x000164da) main_mobtv_info_pane_g2_ParamLimits

0x772b,	// (0x000164da) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0001ea02) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0001ea02) main_mobtv_info_pane_g

0x7908,	// (0x000166b7) sc_clock_pane_t5_ParamLimits

0x7908,	// (0x000166b7) sc_clock_pane_t5

0x79d0,	// (0x0001677f) main_radioblah_pane_g1_ParamLimits

0xe232,	// (0x0001cfe1) main_radioblah_pane_t3_ParamLimits

0xe232,	// (0x0001cfe1) main_radioblah_pane_t3

0xe24a,	// (0x0001cff9) main_radioblah_pane_t4_ParamLimits

0xe24a,	// (0x0001cff9) main_radioblah_pane_t4

0x79f8,	// (0x000167a7) main_radioblah_text_pane_ParamLimits

0x79f8,	// (0x000167a7) main_radioblah_text_pane

0x7a0a,	// (0x000167b9) main_radioblah_info_pane_g1_ParamLimits

0x7aa3,	// (0x00016852) main_radioblah_info_pane_t4_ParamLimits

0x7aa3,	// (0x00016852) main_radioblah_info_pane_t4

0x94a3,	// (0x00018252) main_sp_fs_calendar_pane

0x84da,	// (0x00017289) main_phacti_pane_g1

0x84e2,	// (0x00017291) phacti_note_pane_ParamLimits

0x84e2,	// (0x00017291) phacti_note_pane

0xe74e,	// (0x0001d4fd) phacti_term_pane_ParamLimits

0xe74e,	// (0x0001d4fd) phacti_term_pane

0xe763,	// (0x0001d512) phacti_note_pane_t1_ParamLimits

0xe763,	// (0x0001d512) phacti_note_pane_t1

0xe77a,	// (0x0001d529) phacti_term_pane_g1

0xe782,	// (0x0001d531) phacti_term_pane_t1_ParamLimits

0xe782,	// (0x0001d531) phacti_term_pane_t1

0xe7ac,	// (0x0001d55b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7b4,	// (0x0001d563) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x0001eb72) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7bc,	// (0x0001d56b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7bc,	// (0x0001d56b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7d2,	// (0x0001d581) aid_popup_sp_fs_bg_corner_pane

0xc32d,	// (0x0001b0dc) popup_sp_fs_calendar_preview_bg_pane_g1

0x9433,	// (0x000181e2) popup_sp_fs_calendar_preview_bg_pane

0x122b,	// (0x0000ffda) popup_sp_fs_calendar_preview_list_pane

0xbe12,	// (0x0001abc1) bg_main_sp_fs_cale_pane_ParamLimits

0xbe12,	// (0x0001abc1) bg_main_sp_fs_cale_pane

0xe7e3,	// (0x0001d592) listscroll_cale_mrui_pane_ParamLimits

0xe7e3,	// (0x0001d592) listscroll_cale_mrui_pane

0xd23a,	// (0x0001bfe9) listscroll_sp_fs_schedule_track_pane

0xe7f8,	// (0x0001d5a7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7f8,	// (0x0001d5a7) main_sp_fs_ctrlbar_pane_cp01

0xe80b,	// (0x0001d5ba) main_sp_fs_ribbon_pane

0xe813,	// (0x0001d5c2) popup_sp_fs_cale_preview_window

0x8557,	// (0x00017306) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8557,	// (0x00017306) list_single_sp_fs_schedule_track_pane

0x94a3,	// (0x00018252) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x94a3,	// (0x00018252) bg_sp_fs_highlight_list_pane_cp03

0x856b,	// (0x0001731a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x856b,	// (0x0001731a) list_single_sp_fs_schedule_track_pane_g1

0x8577,	// (0x00017326) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8577,	// (0x00017326) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x0001eb77) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x0001eb77) list_single_sp_fs_schedule_track_pane_g

0x8583,	// (0x00017332) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8583,	// (0x00017332) list_single_sp_fs_schedule_track_pane_t1

0x859d,	// (0x0001734c) sp_fs_schedule_track_pane_ParamLimits

0x859d,	// (0x0001734c) sp_fs_schedule_track_pane

0xe825,	// (0x0001d5d4) sp_fs_schedule_track_pane_g1

0xe82d,	// (0x0001d5dc) sp_fs_schedule_track_pane_g2

0xe835,	// (0x0001d5e4) sp_fs_schedule_track_pane_g3

0xe83d,	// (0x0001d5ec) sp_fs_schedule_track_pane_g4

0xe845,	// (0x0001d5f4) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x0001eb7c) sp_fs_schedule_track_pane_g

0xd180,	// (0x0001bf2f) bg_sp_fs_schedule_viewer_highlight_g1

0xa0ee,	// (0x00018e9d) bg_sp_fs_schedule_viewer_highlight_g2

0xd188,	// (0x0001bf37) bg_sp_fs_schedule_viewer_highlight_g3

0xd190,	// (0x0001bf3f) bg_sp_fs_schedule_viewer_highlight_g4

0xd44e,	// (0x0001c1fd) bg_sp_fs_schedule_viewer_highlight_g5

0xd1a0,	// (0x0001bf4f) bg_sp_fs_schedule_viewer_highlight_g6

0xd1a8,	// (0x0001bf57) bg_sp_fs_schedule_viewer_highlight_g7

0xd1b0,	// (0x0001bf5f) bg_sp_fs_schedule_viewer_highlight_g8

0xa0ce,	// (0x00018e7d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x0001eb87) bg_sp_fs_schedule_viewer_highlight_g

0x9433,	// (0x000181e2) bg_main_sp_fs_ribbon_pane

0x85ae,	// (0x0001735d) main_sp_fs_ribbon_pane_g1

0xe84d,	// (0x0001d5fc) main_sp_fs_ribbon_pane_t1

0x85b7,	// (0x00017366) main_sp_fs_ribbon_pane_t2

0xe85c,	// (0x0001d60b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x0001eb9a) main_sp_fs_ribbon_pane_t

0xe86b,	// (0x0001d61a) main_sp_fs_ribbon_scheduler_pane

0xe873,	// (0x0001d622) bg_main_sp_fs_ribbon_pane_g1

0xe87c,	// (0x0001d62b) bg_main_sp_fs_ribbon_pane_g2

0xe885,	// (0x0001d634) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x0001eba1) bg_main_sp_fs_ribbon_pane_g

0xe88d,	// (0x0001d63c) main_sp_fs_ribbon_scheduler_pane_g1

0xe896,	// (0x0001d645) main_sp_fs_ribbon_scheduler_pane_g2

0xe89f,	// (0x0001d64e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x0001eba8) main_sp_fs_ribbon_scheduler_pane_g

0xe8a8,	// (0x0001d657) list_cale_mrui_pane

0x85c6,	// (0x00017375) sp_fs_scroll_pane_cp07_ParamLimits

0x85c6,	// (0x00017375) sp_fs_scroll_pane_cp07

0x85e2,	// (0x00017391) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x85e2,	// (0x00017391) bg_sp_fs_schedule_viewer_highlight

0xe8b5,	// (0x0001d664) list_single_sp_fs_schedule_track_pane_cp01

0xe8bd,	// (0x0001d66c) list_sp_fs_schedule_track_pane

0xe8c5,	// (0x0001d674) sp_fs_scroll_pane_cp06_ParamLimits

0xe8c5,	// (0x0001d674) sp_fs_scroll_pane_cp06

0xc32d,	// (0x0001b0dc) bgmain_sp_fs_calendar_pane_g1

0x85f2,	// (0x000173a1) list_single_cale_mrui_pane_ParamLimits

0x85f2,	// (0x000173a1) list_single_cale_mrui_pane

0xe8d7,	// (0x0001d686) list_single_cale_mrui_row_pane_ParamLimits

0xe8d7,	// (0x0001d686) list_single_cale_mrui_row_pane

0xe8e4,	// (0x0001d693) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8e4,	// (0x0001d693) list_single_cale_mrui_row_pane_g1

0xe929,	// (0x0001d6d8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe929,	// (0x0001d6d8) list_single_cale_mrui_row_pane_t1

0x8613,	// (0x000173c2) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8613,	// (0x000173c2) list_single_cale_mrui_row_pane_t2

0xe93b,	// (0x0001d6ea) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe93b,	// (0x0001d6ea) list_single_cale_mrui_row_pane_t3

0xe96a,	// (0x0001d719) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe96a,	// (0x0001d719) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x0001ebb6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x0001ebb6) list_single_cale_mrui_row_pane_t

0x867b,	// (0x0001742a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x867b,	// (0x0001742a) list_single_cmail_header_editor_pane_bg_cp01

0x86a1,	// (0x00017450) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86a1,	// (0x00017450) list_single_cmail_header_editor_pane_bg_cp02

0x86c1,	// (0x00017470) main_radioblah_text_pane_t1_ParamLimits

0x86c1,	// (0x00017470) main_radioblah_text_pane_t1

0xe999,	// (0x0001d748) cam6_indi_pane_cp01

0xe9a1,	// (0x0001d750) cam6_mode_pane_cp01

0xe9a9,	// (0x0001d758) cam6_pano_pane

0xe9b2,	// (0x0001d761) cam6_zoom_pane_cp01

0xe9ba,	// (0x0001d769) cam6_pano_image_pane

0xe9f2,	// (0x0001d7a1) cam6_pano_pane_g1

0xdf94,	// (0x0001cd43) cam6_pano_pane_g2

0xe9fb,	// (0x0001d7aa) cam6_pano_pane_g3

0xea04,	// (0x0001d7b3) cam6_pano_pane_g4

0xc94c,	// (0x0001b6fb) cam6_pano_pane_g5

0xea0d,	// (0x0001d7bc) cam6_pano_pane_g6

0xea17,	// (0x0001d7c6) cam6_pano_pane_g7

0xea1f,	// (0x0001d7ce) cam6_pano_pane_g8

0xea28,	// (0x0001d7d7) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0001ebbf) cam6_pano_pane_g

0x9433,	// (0x000181e2) main_browser_tag_pane

0xe72f,	// (0x0001d4de) grid_navstr_albumart_pane

0xea33,	// (0x0001d7e2) cell_navstr_albumart_pane_ParamLimits

0xea33,	// (0x0001d7e2) cell_navstr_albumart_pane

0xea53,	// (0x0001d802) cell_navstr_albumart_pane_g1

0xbbe3,	// (0x0001a992) cell_navstr_albumart_pane_g2

0xbbf3,	// (0x0001a9a2) cell_navstr_albumart_pane_g3

0xbbeb,	// (0x0001a99a) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0001ebd2) cell_navstr_albumart_pane_g

0x86dc,	// (0x0001748b) bt_list_pane_ParamLimits

0x86dc,	// (0x0001748b) bt_list_pane

0x86f0,	// (0x0001749f) bt_list_pane_t1

0x86ff,	// (0x000174ae) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x0001ebdb) bt_list_pane_t

0x9433,	// (0x000181e2) main_cale_prevew_pane

0x870e,	// (0x000174bd) popup_cale_preview_window_ParamLimits

0x870e,	// (0x000174bd) popup_cale_preview_window

0x94a3,	// (0x00018252) bg_popup_preview_window_pane_cp05_ParamLimits

0x94a3,	// (0x00018252) bg_popup_preview_window_pane_cp05

0xea5b,	// (0x0001d80a) list_cale_preview_pane_ParamLimits

0xea5b,	// (0x0001d80a) list_cale_preview_pane

0x8727,	// (0x000174d6) list_double_cale_preview_pane_ParamLimits

0x8727,	// (0x000174d6) list_double_cale_preview_pane

0xd1b8,	// (0x0001bf67) list_single_cale_preview_pane_ParamLimits

0xd1b8,	// (0x0001bf67) list_single_cale_preview_pane

0x8739,	// (0x000174e8) list_single_cale_preview_pane_g1

0x8741,	// (0x000174f0) list_single_cale_preview_pane_t1_ParamLimits

0x8741,	// (0x000174f0) list_single_cale_preview_pane_t1

0x8756,	// (0x00017505) list_double_cale_preview_pane_g1

0x875e,	// (0x0001750d) list_double_cale_preview_pane_t1_ParamLimits

0x875e,	// (0x0001750d) list_double_cale_preview_pane_t1

0x8773,	// (0x00017522) list_double_cale_preview_pane_t2_ParamLimits

0x8773,	// (0x00017522) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0001ebe0) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0001ebe0) list_double_cale_preview_pane_t

0x9433,	// (0x000181e2) main_ezdial_pane

0x94a3,	// (0x00018252) main_sp_fs_email_pane_ParamLimits

0x7d04,	// (0x00016ab3) cmail_ddmenu_btn01_pane_ParamLimits

0x7d04,	// (0x00016ab3) cmail_ddmenu_btn01_pane

0x7d17,	// (0x00016ac6) cmail_ddmenu_btn02_pane_ParamLimits

0x7d17,	// (0x00016ac6) cmail_ddmenu_btn02_pane

0x7d3a,	// (0x00016ae9) cmail_ddmenu_btn03_pane_ParamLimits

0x7d3a,	// (0x00016ae9) cmail_ddmenu_btn03_pane

0x7d60,	// (0x00016b0f) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d84,	// (0x00016b33) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x83c8,	// (0x00017177) list_cmail_body_pane_ParamLimits

0xe62c,	// (0x0001d3db) bg_button_pane_cp12

0xe641,	// (0x0001d3f0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe641,	// (0x0001d3f0) list_single_cmail_header_detail_pane_g3

0xe68a,	// (0x0001d439) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe68a,	// (0x0001d439) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0001eb63) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0001eb63) list_single_cmail_header_detail_pane_t

0xe797,	// (0x0001d546) phacti_term_pane_t2_ParamLimits

0xe797,	// (0x0001d546) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x0001eb6d) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x0001eb6d) phacti_term_pane_t

0xea67,	// (0x0001d816) aid_size_list_single_double

0x878b,	// (0x0001753a) popup_ezdial_listscroll_window

0x87a7,	// (0x00017556) popup_number_entry_window_cp01

0x9e8b,	// (0x00018c3a) bg_popup_call_pane_cp09

0xea73,	// (0x0001d822) ezdial_list_pane

0xea7b,	// (0x0001d82a) scroll_pane_cp23

0xbe12,	// (0x0001abc1) bg_button_pane_cp028_ParamLimits

0xbe12,	// (0x0001abc1) bg_button_pane_cp028

0x87b5,	// (0x00017564) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x87b5,	// (0x00017564) cmail_ddmenu_btn01_pane_g1

0x87c1,	// (0x00017570) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87c1,	// (0x00017570) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x0001ebe5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x0001ebe5) cmail_ddmenu_btn01_pane_g

0xea83,	// (0x0001d832) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea83,	// (0x0001d832) cmail_ddmenu_btn01_pane_t1

0xbe12,	// (0x0001abc1) bg_button_pane_cp029_ParamLimits

0xbe12,	// (0x0001abc1) bg_button_pane_cp029

0x87cd,	// (0x0001757c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87cd,	// (0x0001757c) cmail_ddmenu_btn02_pane_g1

0x87e6,	// (0x00017595) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87e6,	// (0x00017595) cmail_ddmenu_btn02_pane_t1

0x94a3,	// (0x00018252) bg_button_pane_cp031_ParamLimits

0x94a3,	// (0x00018252) bg_button_pane_cp031

0x87cd,	// (0x0001757c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87cd,	// (0x0001757c) cmail_ddmenu_btn03_pane_g1

0x87e6,	// (0x00017595) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87e6,	// (0x00017595) cmail_ddmenu_btn03_pane_t1

0x553c,	// (0x000142eb) cell_dialer2_keypad_pane_t1_ParamLimits

0x5556,	// (0x00014305) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5556,	// (0x00014305) cell_dialer2_keypad_pane_t1_copy1

0x7534,	// (0x000162e3) ncimui_group_button_pane

0x94a3,	// (0x00018252) main_sp_fs_calendar_pane_ParamLimits

0x83dd,	// (0x0001718c) list_single_cmail_header_caption_pane_ParamLimits

0xe7da,	// (0x0001d589) aid_recal_txt_sm_pane

0x9433,	// (0x000181e2) mian_recal_day_pane

0xe813,	// (0x0001d5c2) popup_sp_fs_cale_preview_window_ParamLimits

0xea98,	// (0x0001d847) list_recal_day_pane

0xeada,	// (0x0001d889) list_single_recal_day_pane_ParamLimits

0xeada,	// (0x0001d889) list_single_recal_day_pane

0xeaec,	// (0x0001d89b) list_single_recal_day_pane_g1_ParamLimits

0xeaec,	// (0x0001d89b) list_single_recal_day_pane_g1

0xeaf8,	// (0x0001d8a7) list_single_recal_day_pane_g2_ParamLimits

0xeaf8,	// (0x0001d8a7) list_single_recal_day_pane_g2

0xeb04,	// (0x0001d8b3) list_single_recal_day_pane_g3_ParamLimits

0xeb04,	// (0x0001d8b3) list_single_recal_day_pane_g3

0x880a,	// (0x000175b9) list_single_recal_day_pane_g4_ParamLimits

0x880a,	// (0x000175b9) list_single_recal_day_pane_g4

0xeb10,	// (0x0001d8bf) list_single_recal_day_pane_g5_ParamLimits

0xeb10,	// (0x0001d8bf) list_single_recal_day_pane_g5

0xeb1c,	// (0x0001d8cb) list_single_recal_day_pane_g6_ParamLimits

0xeb1c,	// (0x0001d8cb) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x0001ebf4) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x0001ebf4) list_single_recal_day_pane_g

0xeb30,	// (0x0001d8df) list_single_recal_day_pane_t1

0xeb42,	// (0x0001d8f1) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0001ebff) list_single_recal_day_pane_t

0x8822,	// (0x000175d1) ncimui_query_button_pane_ParamLimits

0x8822,	// (0x000175d1) ncimui_query_button_pane

0x8832,	// (0x000175e1) ncimui_query_button_pane_t1_ParamLimits

0x8832,	// (0x000175e1) ncimui_query_button_pane_t1

0xeb54,	// (0x0001d903) ncimui_query_button_pane_t2_ParamLimits

0xeb54,	// (0x0001d903) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x0001ec04) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x0001ec04) ncimui_query_button_pane_t

0x8845,	// (0x000175f4) query_button_pane_ParamLimits

0x8845,	// (0x000175f4) query_button_pane

0x9433,	// (0x000181e2) bg_button_pane_cp0028

0xeb67,	// (0x0001d916) query_button_pane_t1

0x35d0,	// (0x0001237f) main_tport_pane_ParamLimits

0x828c,	// (0x0001703b) bg_popup_window_pane_cp01_ParamLimits

0x828c,	// (0x0001703b) bg_popup_window_pane_cp01

0x82a7,	// (0x00017056) heading_pane_cp08_ParamLimits

0x82a7,	// (0x00017056) heading_pane_cp08

0x82ba,	// (0x00017069) heading_pane_cp07_ParamLimits

0x82ba,	// (0x00017069) heading_pane_cp07

0x8361,	// (0x00017110) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0001eb50) cell_tport_appsw_pane_g

0x2b72,	// (0x00011921) input_candi_list_open_g1

0xa2df,	// (0x0001908e) list_cale_time_pane_g6_ParamLimits

0xa2df,	// (0x0001908e) list_cale_time_pane_g6

0x4398,	// (0x00013147) aid_size_touch_calib_1_ParamLimits

0x4398,	// (0x00013147) aid_size_touch_calib_1

0x43aa,	// (0x00013159) aid_size_touch_calib_2_ParamLimits

0x43aa,	// (0x00013159) aid_size_touch_calib_2

0x43c2,	// (0x00013171) aid_size_touch_calib_3_ParamLimits

0x43c2,	// (0x00013171) aid_size_touch_calib_3

0x43e0,	// (0x0001318f) aid_size_touch_calib_4_ParamLimits

0x43e0,	// (0x0001318f) aid_size_touch_calib_4

0x43f8,	// (0x000131a7) main_touch_calib_button_group_pane_ParamLimits

0x43f8,	// (0x000131a7) main_touch_calib_button_group_pane

0x4410,	// (0x000131bf) main_touch_calib_pane_g1_ParamLimits

0x4422,	// (0x000131d1) main_touch_calib_pane_g2_ParamLimits

0x4434,	// (0x000131e3) main_touch_calib_pane_g3_ParamLimits

0x4446,	// (0x000131f5) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0001e513) main_touch_calib_pane_g_ParamLimits

0x4458,	// (0x00013207) main_touch_calib_pane_t1_ParamLimits

0x4472,	// (0x00013221) main_touch_calib_pane_t2_ParamLimits

0x448c,	// (0x0001323b) main_touch_calib_pane_t3_ParamLimits

0x44a0,	// (0x0001324f) main_touch_calib_pane_t4_ParamLimits

0x44b4,	// (0x00013263) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0001e51c) main_touch_calib_pane_t_ParamLimits

0xc6ef,	// (0x0001b49e) list_single_fp_cale_pane_g3_ParamLimits

0xc6ef,	// (0x0001b49e) list_single_fp_cale_pane_g3

0x94a3,	// (0x00018252) bg_button_pane_cp012_ParamLimits

0x94a3,	// (0x00018252) bg_vkb2_func_pane_cp03_ParamLimits

0x65ab,	// (0x0001535a) cell_vitu2_function_top_pane_g1_ParamLimits

0x94a3,	// (0x00018252) bg_vkb2_func_pane_cp04_ParamLimits

0x74bf,	// (0x0001626e) main_ncimui_button_group_pane_ParamLimits

0x74bf,	// (0x0001626e) main_ncimui_button_group_pane

0x751f,	// (0x000162ce) main_ncimui_pane_t3_ParamLimits

0x751f,	// (0x000162ce) main_ncimui_pane_t3

0xe745,	// (0x0001d4f4) phacti_button_group_pane

0xea67,	// (0x0001d816) aid_size_list_single_double_ParamLimits

0x878b,	// (0x0001753a) popup_ezdial_listscroll_window_ParamLimits

0x87a7,	// (0x00017556) popup_number_entry_window_cp01_ParamLimits

0x8858,	// (0x00017607) phacti_button_pane_ParamLimits

0x8858,	// (0x00017607) phacti_button_pane

0x9433,	// (0x000181e2) bg_button_pane_cp14

0xeb75,	// (0x0001d924) phacti_button_pane_t1

0x8869,	// (0x00017618) main_touch_calib_button_pane_ParamLimits

0x8869,	// (0x00017618) main_touch_calib_button_pane

0x9c12,	// (0x000189c1) bg_button_pane_cp18_ParamLimits

0x9c12,	// (0x000189c1) bg_button_pane_cp18

0xeb83,	// (0x0001d932) main_touch_calib_button_pane_t1_ParamLimits

0xeb83,	// (0x0001d932) main_touch_calib_button_pane_t1

0xeb99,	// (0x0001d948) main_touch_calib_button_pane_t2_ParamLimits

0xeb99,	// (0x0001d948) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x0001ec09) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x0001ec09) main_touch_calib_button_pane_t

0x9433,	// (0x000181e2) cell_ncimui_button_pane

0x9433,	// (0x000181e2) bg_button_pane_cp032

0xebb7,	// (0x0001d966) cell_ncimui_button_pane_t1

0xcef1,	// (0x0001bca0) image3_infobar_pane_ParamLimits

0xcef1,	// (0x0001bca0) image3_infobar_pane

0x7934,	// (0x000166e3) fs_bigclock_status_pane_ParamLimits

0x7934,	// (0x000166e3) fs_bigclock_status_pane

0x7941,	// (0x000166f0) main_fs_bigclock_clock_pane_ParamLimits

0x7941,	// (0x000166f0) main_fs_bigclock_clock_pane

0x795f,	// (0x0001670e) main_fs_bigclock_indi_pane_ParamLimits

0x795f,	// (0x0001670e) main_fs_bigclock_indi_pane

0x7991,	// (0x00016740) main_fs_bigclock_swipe_pane_ParamLimits

0x7991,	// (0x00016740) main_fs_bigclock_swipe_pane

0x9433,	// (0x000181e2) main_fs_clock_dumped_data

0xe0a1,	// (0x0001ce50) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0a1,	// (0x0001ce50) list_single_fs_bigclock_indicator_pane_g1

0xe0bd,	// (0x0001ce6c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0bd,	// (0x0001ce6c) list_single_fs_bigclock_indicator_pane_g2

0xe0d7,	// (0x0001ce86) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0d7,	// (0x0001ce86) list_single_fs_bigclock_indicator_pane_g3

0xe0f1,	// (0x0001cea0) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0f1,	// (0x0001cea0) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0001ea36) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0001ea36) list_single_fs_bigclock_indicator_pane_g

0xe11c,	// (0x0001cecb) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe11c,	// (0x0001cecb) list_single_fs_bigclock_indicator_pane_t1

0xe144,	// (0x0001cef3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe144,	// (0x0001cef3) list_single_fs_bigclock_indicator_pane_t2

0xe16c,	// (0x0001cf1b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe16c,	// (0x0001cf1b) list_single_fs_bigclock_indicator_pane_t3

0xe194,	// (0x0001cf43) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe194,	// (0x0001cf43) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0001ea41) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0001ea41) list_single_fs_bigclock_indicator_pane_t

0xebc5,	// (0x0001d974) image3_infobar_fav_pane_ParamLimits

0xebc5,	// (0x0001d974) image3_infobar_fav_pane

0xebd5,	// (0x0001d984) image3_infobar_loc_pane_ParamLimits

0xebd5,	// (0x0001d984) image3_infobar_loc_pane

0xebe9,	// (0x0001d998) image3_infobar_time_pane_ParamLimits

0xebe9,	// (0x0001d998) image3_infobar_time_pane

0xc32d,	// (0x0001b0dc) image3_infobar_time_pane_g1

0xebf9,	// (0x0001d9a8) image3_infobar_time_pane_t1

0xc32d,	// (0x0001b0dc) image3_infobar_loc_pane_g1

0xec07,	// (0x0001d9b6) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0001ec0e) image3_infobar_loc_pane_g

0xec0f,	// (0x0001d9be) image3_infobar_loc_pane_t1

0xc32d,	// (0x0001b0dc) image3_infobar_fav_pane_g1

0xec1d,	// (0x0001d9cc) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0001ec13) image3_infobar_fav_pane_g

0xec25,	// (0x0001d9d4) fs_bigclock_status_battery_pane

0xec2e,	// (0x0001d9dd) fs_bigclock_status_signal_pane

0xec37,	// (0x0001d9e6) fs_bigclock_status_title_pane

0xec40,	// (0x0001d9ef) fs_bigclock_status_signal_pane_g1

0xec49,	// (0x0001d9f8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x0001ec18) fs_bigclock_status_signal_pane_g

0xec51,	// (0x0001da00) fs_bigclock_status_battery_pane_g1

0xec5a,	// (0x0001da09) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0001ec1d) fs_bigclock_status_battery_pane_g

0xec62,	// (0x0001da11) fs_bigclock_status_title_pane_t1

0x887e,	// (0x0001762d) main_fs_bigclock_clock_pane_g1

0x887e,	// (0x0001762d) main_fs_bigclock_clock_pane_g2

0x888f,	// (0x0001763e) main_fs_bigclock_clock_pane_g3

0x888f,	// (0x0001763e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0001ec22) main_fs_bigclock_clock_pane_g

0x88a2,	// (0x00017651) main_fs_bigclock_clock_pane_t1

0x88b8,	// (0x00017667) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x0001ec2b) main_fs_bigclock_clock_pane_t

0xec70,	// (0x0001da1f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec70,	// (0x0001da1f) list_single_fs_bigclock_indicator_pane

0xec81,	// (0x0001da30) list_single_fs_bigclock_pane_ParamLimits

0xec81,	// (0x0001da30) list_single_fs_bigclock_pane

0xeca7,	// (0x0001da56) main_fs_bigclock_indicator_pane_t1

0xecb6,	// (0x0001da65) list_single_fs_bigclock_pane_g1

0xecbe,	// (0x0001da6d) list_single_fs_bigclock_pane_t1

0xc32d,	// (0x0001b0dc) main_fs_bigclock_swipe_pane_g1

0xed01,	// (0x0001dab0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x0001ec3c) main_fs_bigclock_swipe_pane_g

0xed09,	// (0x0001dab8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed09,	// (0x0001dab8) main_fs_bigclock_swipe_pane_t1

0x2461,	// (0x00011210) call_type_pane_ParamLimits

0x9433,	// (0x000181e2) main_btmg_pane

0xe910,	// (0x0001d6bf) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe910,	// (0x0001d6bf) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x0001ebaf) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x0001ebaf) list_single_cale_mrui_row_pane_g

0xeac1,	// (0x0001d870) list_recal_vselct_arw_lo_pane

0xeac9,	// (0x0001d878) list_recal_vselct_arw_up_pane

0xead1,	// (0x0001d880) list_recal_vselct_pane

0x8912,	// (0x000176c1) btmg_button_pane

0x891c,	// (0x000176cb) main_btmg_pane_g1

0x9433,	// (0x000181e2) bg_button_pane_cp044

0xed26,	// (0x0001dad5) btmg_button_pane_t1

0xbdfe,	// (0x0001abad) aid_listscroll_gen

0x94a3,	// (0x00018252) main_cntbar_detail_pane

0xe60e,	// (0x0001d3bd) list_cmail_folder_pane

0xd22e,	// (0x0001bfdd) sp_fs_scroll_pane_cp03_ParamLimits

0x8926,	// (0x000176d5) list_single_fs_dyc_pane_cp01_ParamLimits

0x8926,	// (0x000176d5) list_single_fs_dyc_pane_cp01

0xed34,	// (0x0001dae3) aid_size_cmail_indent

0xed3d,	// (0x0001daec) list_single_dyc_row_pane_cp01

0x896f,	// (0x0001771e) cntbar_detail_list_pane_ParamLimits

0x896f,	// (0x0001771e) cntbar_detail_list_pane

0x89bb,	// (0x0001776a) main_cntbar_detail_cont_pane_ParamLimits

0x89bb,	// (0x0001776a) main_cntbar_detail_cont_pane

0xd22e,	// (0x0001bfdd) scroll_pane_cp032_ParamLimits

0xd22e,	// (0x0001bfdd) scroll_pane_cp032

0x89cf,	// (0x0001777e) cntbar_detail_list_event_pane_ParamLimits

0x89cf,	// (0x0001777e) cntbar_detail_list_event_pane

0x897f,	// (0x0001772e) cntbar_detail_list_shct_pane

0xa13c,	// (0x00018eeb) aid_list_gen

0xed46,	// (0x0001daf5) aid_scroll

0xed4f,	// (0x0001dafe) aid_size_touch_scroll_bar

0x6cb1,	// (0x00015a60) aid_list_double

0x6c9f,	// (0x00015a4e) aid_list_single

0x6c9f,	// (0x00015a4e) aid_list_single_lg

0x89df,	// (0x0001778e) aid_list_z_g_a_sm

0x89e7,	// (0x00017796) aid_list_z_g_d

0x89ef,	// (0x0001779e) aid_txt_z_prm

0x89fd,	// (0x000177ac) aid_txt_z_prm_cp01

0x8a0b,	// (0x000177ba) aid_txt_z_sec

0x8a19,	// (0x000177c8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a19,	// (0x000177c8) main_cntbar_detail_cont_pane_g1

0x8a2d,	// (0x000177dc) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a2d,	// (0x000177dc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0001ec41) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0001ec41) main_cntbar_detail_cont_pane_g

0xed58,	// (0x0001db07) main_cntbar_detail_cont_pane_t1

0xed66,	// (0x0001db15) main_cntbar_detail_cont_pane_t2

0xed74,	// (0x0001db23) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x0001ec46) main_cntbar_detail_cont_pane_t

0x8a3d,	// (0x000177ec) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a3d,	// (0x000177ec) cell_cntbar_detail_list_shct_pane

0xed82,	// (0x0001db31) cntbar_detail_list_shct_pane_g1

0xed8b,	// (0x0001db3a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x0001ec4d) cntbar_detail_list_shct_pane_g

0x8a51,	// (0x00017800) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a51,	// (0x00017800) cntbar_detail_list_event_pane_g1

0x8a5d,	// (0x0001780c) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a5d,	// (0x0001780c) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0001ec52) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0001ec52) cntbar_detail_list_event_pane_g

0x8ac9,	// (0x00017878) cntbar_detail_list_event_pane_t1_ParamLimits

0x8ac9,	// (0x00017878) cntbar_detail_list_event_pane_t1

0x8ade,	// (0x0001788d) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ade,	// (0x0001788d) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x0001ec5f) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x0001ec5f) cntbar_detail_list_event_pane_t

0xc32d,	// (0x0001b0dc) cell_cntbar_detail_list_shct_pane_g1

0xa925,	// (0x000196d4) navi_pane_mv_g3

0x94a3,	// (0x00018252) main_cntbar_detail_pane_ParamLimits

0x9433,	// (0x000181e2) main_notif_wgt_pane

0xcc83,	// (0x0001ba32) aid_tch_main_mp4_pane_g4

0xce85,	// (0x0001bc34) popup_slider_window_cp02

0xeab7,	// (0x0001d866) list_recal_day_event_pane

0x893d,	// (0x000176ec) cntbar_detail_btn_pane_ParamLimits

0x893d,	// (0x000176ec) cntbar_detail_btn_pane

0x8956,	// (0x00017705) cntbar_detail_btn_pane_cp01_ParamLimits

0x8956,	// (0x00017705) cntbar_detail_btn_pane_cp01

0x897f,	// (0x0001772e) cntbar_detail_list_shct_pane_ParamLimits

0x898f,	// (0x0001773e) cntbar_detail_pane_g1_ParamLimits

0x898f,	// (0x0001773e) cntbar_detail_pane_g1

0x899f,	// (0x0001774e) cntbar_detail_pane_t1_ParamLimits

0x899f,	// (0x0001774e) cntbar_detail_pane_t1

0x8a69,	// (0x00017818) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a69,	// (0x00017818) cntbar_detail_list_event_pane_g3

0x8a81,	// (0x00017830) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a81,	// (0x00017830) cntbar_detail_list_event_pane_g4

0x8a99,	// (0x00017848) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a99,	// (0x00017848) cntbar_detail_list_event_pane_g5

0x8ab1,	// (0x00017860) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ab1,	// (0x00017860) cntbar_detail_list_event_pane_g6

0x8af3,	// (0x000178a2) cntbar_detail_list_event_pane_t3_ParamLimits

0x8af3,	// (0x000178a2) cntbar_detail_list_event_pane_t3

0x8b05,	// (0x000178b4) popup_notif_wgt_window_ParamLimits

0x8b05,	// (0x000178b4) popup_notif_wgt_window

0x8b1e,	// (0x000178cd) popup_submenu_window_cp01_ParamLimits

0x8b1e,	// (0x000178cd) popup_submenu_window_cp01

0x9e8b,	// (0x00018c3a) bg_popup_window_pane_cp10

0xed94,	// (0x0001db43) listscroll_notif_wgt_pane

0xeda6,	// (0x0001db55) list_notif_wgt_window

0xedaf,	// (0x0001db5e) scroll_pane_cp033

0x8b30,	// (0x000178df) list_notif_wgt_row_pane_ParamLimits

0x8b30,	// (0x000178df) list_notif_wgt_row_pane

0xedb8,	// (0x0001db67) aid_size_list_notif_wgt_del

0xedc5,	// (0x0001db74) list_notif_wgt_row_pane_g1

0xedd1,	// (0x0001db80) list_notif_wgt_row_pane_g2

0xede0,	// (0x0001db8f) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x0001ec66) list_notif_wgt_row_pane_g

0xeded,	// (0x0001db9c) list_notif_wgt_row_pane_t1

0xee03,	// (0x0001dbb2) list_notif_wgt_row_pane_t2

0xee15,	// (0x0001dbc4) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x0001ec6d) list_notif_wgt_row_pane_t

0xd476,	// (0x0001c225) list_recal_day_event_pane_g1

0xee27,	// (0x0001dbd6) list_recal_day_event_pane_t1

0x9433,	// (0x000181e2) bg_button_pane_cp045

0x8b40,	// (0x000178ef) cntbar_detail_btn_pane_t1

0xbe12,	// (0x0001abc1) main_callh_pane_ParamLimits

0xbe12,	// (0x0001abc1) main_callh_pane

0x9433,	// (0x000181e2) main_coverflow0_pane

0x9433,	// (0x000181e2) main_wgtman_pane

0x79a9,	// (0x00016758) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79a9,	// (0x00016758) main_fs_bigclock_unlock_btn_pane

0x8359,	// (0x00017108) bg_button_pane_cp16

0x8369,	// (0x00017118) cell_tport_appsw_pane_g3

0x8b4e,	// (0x000178fd) cf0_flow_pane_ParamLimits

0x8b4e,	// (0x000178fd) cf0_flow_pane

0xee36,	// (0x0001dbe5) listscroll_cf0_pane

0xee41,	// (0x0001dbf0) main_cf0_pane_g1

0x8b63,	// (0x00017912) main_cf0_pane_t1_ParamLimits

0x8b63,	// (0x00017912) main_cf0_pane_t1

0x8b7a,	// (0x00017929) main_cf0_pane_t2_ParamLimits

0x8b7a,	// (0x00017929) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0001ec79) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0001ec79) main_cf0_pane_t

0xee53,	// (0x0001dc02) scroll_pane_cp11

0x8b91,	// (0x00017940) cf0_flow_pane_g1

0x8b99,	// (0x00017948) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0001ec7e) cf0_flow_pane_g

0x8ba1,	// (0x00017950) cf0_flow_pane_t1

0x9433,	// (0x000181e2) main_call6_pane

0x9433,	// (0x000181e2) main_calllock_pane

0x8baf,	// (0x0001795e) call6_btn_grp_pane_ParamLimits

0x8baf,	// (0x0001795e) call6_btn_grp_pane

0x8bc9,	// (0x00017978) call6_pane_g1_ParamLimits

0x8bc9,	// (0x00017978) call6_pane_g1

0x8bdf,	// (0x0001798e) popup_call6_1st_window_ParamLimits

0x8bdf,	// (0x0001798e) popup_call6_1st_window

0x8bf0,	// (0x0001799f) popup_call6_2nd_window_ParamLimits

0x8bf0,	// (0x0001799f) popup_call6_2nd_window

0x8c01,	// (0x000179b0) cell_call6_btn_pane_ParamLimits

0x8c01,	// (0x000179b0) cell_call6_btn_pane

0x9e8b,	// (0x00018c3a) bg_popup_call2_in_pane_cp03

0xee5e,	// (0x0001dc0d) popup_call6_1st_window_g1

0xee66,	// (0x0001dc15) popup_call6_1st_window_g2

0xee6e,	// (0x0001dc1d) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0001ec83) popup_call6_1st_window_g

0xee76,	// (0x0001dc25) popup_call6_1st_window_t1

0xee85,	// (0x0001dc34) popup_call6_1st_window_t2

0xee93,	// (0x0001dc42) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0001ec8a) popup_call6_1st_window_t

0x9e8b,	// (0x00018c3a) bg_popup_call2_in_pane_cp04

0xee5e,	// (0x0001dc0d) popup_call6_2nd_window_g1

0xee66,	// (0x0001dc15) popup_call6_2nd_window_g2

0xee6e,	// (0x0001dc1d) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0001ec83) popup_call6_2nd_window_g

0xee76,	// (0x0001dc25) popup_call6_2nd_window_t1

0x9433,	// (0x000181e2) bg_button_pane_cp15

0xeea1,	// (0x0001dc50) cell_call6_btn_pane_g1

0xeeaa,	// (0x0001dc59) cell_call6_btn_pane_t1

0x8c15,	// (0x000179c4) listscroll_wgtman_pane_ParamLimits

0x8c15,	// (0x000179c4) listscroll_wgtman_pane

0x8c36,	// (0x000179e5) wgtman_btn_pane_ParamLimits

0x8c36,	// (0x000179e5) wgtman_btn_pane

0xa739,	// (0x000194e8) aid_scroll_copy1

0xeeb9,	// (0x0001dc68) list_wgtman_pane

0x8c79,	// (0x00017a28) wgtman_btn_pane_g1_ParamLimits

0x8c79,	// (0x00017a28) wgtman_btn_pane_g1

0x8ca5,	// (0x00017a54) wgtman_btn_pane_t1_ParamLimits

0x8ca5,	// (0x00017a54) wgtman_btn_pane_t1

0xeec3,	// (0x0001dc72) wgtman_btn_pane_t2_ParamLimits

0xeec3,	// (0x0001dc72) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0001ec91) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0001ec91) wgtman_btn_pane_t

0x8ce2,	// (0x00017a91) listrow_wgtman_pane_ParamLimits

0x8ce2,	// (0x00017a91) listrow_wgtman_pane

0x8cf4,	// (0x00017aa3) listrow_wgtman_pane_g1

0x8d01,	// (0x00017ab0) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0001ec96) listrow_wgtman_pane_g

0x8d1f,	// (0x00017ace) listrow_wgtman_pane_t1

0x8d37,	// (0x00017ae6) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0001ec9b) listrow_wgtman_pane_t

0x8d5d,	// (0x00017b0c) wait_bar_pane_cp09

0xeeda,	// (0x0001dc89) main_calllock_btn_pane

0xeee4,	// (0x0001dc93) main_calllock_pane_g1

0x9433,	// (0x000181e2) bg_button_pane_cp17

0xeea1,	// (0x0001dc50) main_calllock_btn_pane_g1

0xeef0,	// (0x0001dc9f) main_calllock_btn_pane_t1

0x9433,	// (0x000181e2) main_dialer3_pane

0x9433,	// (0x000181e2) main_fmrd2_pane

0xc32d,	// (0x0001b0dc) main_fs_bigclock_unlock_btn_pane_g1

0x8d77,	// (0x00017b26) main_fs_bigclock_unlock_btn_pane_t1

0x8d85,	// (0x00017b34) area_fmrd2_info_pane_ParamLimits

0x8d85,	// (0x00017b34) area_fmrd2_info_pane

0x8d96,	// (0x00017b45) area_fmrd2_visual_pane_ParamLimits

0x8d96,	// (0x00017b45) area_fmrd2_visual_pane

0x8da4,	// (0x00017b53) fmrd2_indi_pane_ParamLimits

0x8da4,	// (0x00017b53) fmrd2_indi_pane

0x8db1,	// (0x00017b60) area_fmrd2_visual_pane_g1

0x8db9,	// (0x00017b68) area_fmrd2_visual_pane_t1

0x8dc9,	// (0x00017b78) area_fmrd2_visual_pane_t2

0x8dd9,	// (0x00017b88) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0001eca5) area_fmrd2_visual_pane_t

0x8de9,	// (0x00017b98) area_fmrd2_info_pane_g1

0x8df1,	// (0x00017ba0) area_fmrd2_info_pane_t1

0x8e01,	// (0x00017bb0) area_fmrd2_info_pane_t2

0x8e11,	// (0x00017bc0) area_fmrd2_info_pane_t3

0x8e21,	// (0x00017bd0) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0001ecac) area_fmrd2_info_pane_t

0x8e2f,	// (0x00017bde) fmrd2_indi_pane_t1

0x8e3f,	// (0x00017bee) fmrd2_indi_pane_t2

0x8e4f,	// (0x00017bfe) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0001ecb5) fmrd2_indi_pane_t

0xe100,	// (0x0001ceaf) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe100,	// (0x0001ceaf) list_single_fs_bigclock_indicator_pane_g5

0xe1b1,	// (0x0001cf60) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1b1,	// (0x0001cf60) list_single_fs_bigclock_indicator_pane_t5

0x84f6,	// (0x000172a5) aid_cell_bcale_month_pane_ParamLimits

0x84f6,	// (0x000172a5) aid_cell_bcale_month_pane

0x8514,	// (0x000172c3) bcale_month_pane_ParamLimits

0x8514,	// (0x000172c3) bcale_month_pane

0x8538,	// (0x000172e7) bcale_preview_pane_ParamLimits

0x8538,	// (0x000172e7) bcale_preview_pane

0xecbe,	// (0x0001da6d) list_single_fs_bigclock_pane_t1_ParamLimits

0xecdd,	// (0x0001da8c) list_single_fs_bigclock_pane_t2_ParamLimits

0xecdd,	// (0x0001da8c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x0001ec37) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x0001ec37) list_single_fs_bigclock_pane_t

0x8d6f,	// (0x00017b1e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0001eca0) main_fs_bigclock_unlock_btn_pane_g

0x8e5f,	// (0x00017c0e) aid_dia3_key_size_ParamLimits

0x8e5f,	// (0x00017c0e) aid_dia3_key_size

0x8e6e,	// (0x00017c1d) aid_dia3_listrow_size_ParamLimits

0x8e6e,	// (0x00017c1d) aid_dia3_listrow_size

0x8e83,	// (0x00017c32) dia3_keypad_fun_pane_ParamLimits

0x8e83,	// (0x00017c32) dia3_keypad_fun_pane

0x8e9f,	// (0x00017c4e) dia3_keypad_num_pane_ParamLimits

0x8e9f,	// (0x00017c4e) dia3_keypad_num_pane

0x8eba,	// (0x00017c69) dia3_listscroll_pane_ParamLimits

0x8eba,	// (0x00017c69) dia3_listscroll_pane

0x8ecd,	// (0x00017c7c) dia3_numentry_pane_ParamLimits

0x8ecd,	// (0x00017c7c) dia3_numentry_pane

0xeeff,	// (0x0001dcae) dia3_list_pane

0xef0a,	// (0x0001dcb9) scroll_pane_cp12

0x9433,	// (0x000181e2) bg_dia3_numentry_pane

0x8ee1,	// (0x00017c90) dia3_numentry_pane_t1

0x8ef0,	// (0x00017c9f) cell_dia3_key_num_pane

0x8ef8,	// (0x00017ca7) cell_dia3_key0_fun_pane_ParamLimits

0x8ef8,	// (0x00017ca7) cell_dia3_key0_fun_pane

0x8f0c,	// (0x00017cbb) cell_dia3_key1_fun_pane_ParamLimits

0x8f0c,	// (0x00017cbb) cell_dia3_key1_fun_pane

0x8f24,	// (0x00017cd3) dia3_listrow_pane

0xde53,	// (0x0001cc02) bg_dia3_numentry_pane_g1

0x9433,	// (0x000181e2) bg_button_pane_cp21

0xef15,	// (0x0001dcc4) cell_dia3_key_num_pane_t1

0xef23,	// (0x0001dcd2) cell_dia3_key_num_pane_t2

0xef32,	// (0x0001dce1) cell_dia3_key_num_pane_t3

0xef41,	// (0x0001dcf0) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x0001ecbc) cell_dia3_key_num_pane_t

0x9433,	// (0x000181e2) bg_button_pane_cp19

0x8f36,	// (0x00017ce5) cell_dia3_key0_fun_pane_g1

0x9433,	// (0x000181e2) bg_button_pane_cp20

0x8f3e,	// (0x00017ced) cell_dia3_key1_fun_pane_g1

0x8f46,	// (0x00017cf5) area_left_week_number_pane

0x8f52,	// (0x00017d01) area_top_day_name_pane

0x8f65,	// (0x00017d14) frame_month_view_pane

0xef50,	// (0x0001dcff) grid_month_view_pane

0x8f78,	// (0x00017d27) cell_top_day_name_pane_ParamLimits

0x8f78,	// (0x00017d27) cell_top_day_name_pane

0x8fa5,	// (0x00017d54) cell_area_left_week_number_pane_ParamLimits

0x8fa5,	// (0x00017d54) cell_area_left_week_number_pane

0x8fb9,	// (0x00017d68) cell_month_view_pane_ParamLimits

0x8fb9,	// (0x00017d68) cell_month_view_pane

0xef5e,	// (0x0001dd0d) frm_month_g1

0x8fe6,	// (0x00017d95) frm_month_g2

0x8ff9,	// (0x00017da8) frm_month_g3

0x900c,	// (0x00017dbb) frm_month_g4

0x901f,	// (0x00017dce) frm_month_g5

0x9032,	// (0x00017de1) frm_month_g6

0x9045,	// (0x00017df4) frm_month_g7

0xef6b,	// (0x0001dd1a) frm_month_g8

0x9058,	// (0x00017e07) frm_month_g9

0x9068,	// (0x00017e17) frm_month_g10

0x9078,	// (0x00017e27) frm_month_g11

0x9088,	// (0x00017e37) frm_month_g12

0x909a,	// (0x00017e49) frm_month_g13

0x90ac,	// (0x00017e5b) frm_month_g14

0x90c0,	// (0x00017e6f) frm_month_g15

0x90d4,	// (0x00017e83) frm_month_g16

0x000f,

0xff16,	// (0x0001ecc5) frm_month_g

0xef78,	// (0x0001dd27) cell_top_day_name_pane_t1

0x90e8,	// (0x00017e97) cell_area_left_week_number_pane_g1

0x90f4,	// (0x00017ea3) cell_area_left_week_number_pane_t1

0xc57b,	// (0x0001b32a) cell_month_view_pane_g1

0x9107,	// (0x00017eb6) cell_month_view_pane_t1

0x9433,	// (0x000181e2) main_fps_pane

0xe3ce,	// (0x0001d17d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3ce,	// (0x0001d17d) cmail_ddmenu_btn02_pane_cp1

0xe3ea,	// (0x0001d199) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3ea,	// (0x0001d199) cmail_ddmenu_btn02_pane_cp2

0x87d9,	// (0x00017588) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87d9,	// (0x00017588) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x0001ebea) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x0001ebea) cmail_ddmenu_btn02_pane_g

0x87f8,	// (0x000175a7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87f8,	// (0x000175a7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0001ebef) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0001ebef) cmail_ddmenu_btn02_pane_t

0x911a,	// (0x00017ec9) fps_text_pane_ParamLimits

0x911a,	// (0x00017ec9) fps_text_pane

0x9131,	// (0x00017ee0) main_fps_pane_g1_ParamLimits

0x9131,	// (0x00017ee0) main_fps_pane_g1

0x914b,	// (0x00017efa) wait_bar_pane_cp010_ParamLimits

0x914b,	// (0x00017efa) wait_bar_pane_cp010

0x915c,	// (0x00017f0b) fps_text_pane_t1_ParamLimits

0x915c,	// (0x00017f0b) fps_text_pane_t1

0xe9c5,	// (0x0001d774) cam4_image_uncrop_pane_g1

0xe9ce,	// (0x0001d77d) cam4_image_uncrop_pane_g2

0x59e6,	// (0x00014795) cam4_image_uncrop_pane_g3

0x59ef,	// (0x0001479e) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0001e6b0) cam4_image_uncrop_pane_g

0x8f24,	// (0x00017cd3) dia3_listrow_pane_ParamLimits

0x9433,	// (0x000181e2) main_phob2_pane

0x832a,	// (0x000170d9) cell_tport_appsw_pane_cp02_ParamLimits

0x832a,	// (0x000170d9) cell_tport_appsw_pane_cp02

0x833e,	// (0x000170ed) cell_tport_appsw_pane_cp03_ParamLimits

0x833e,	// (0x000170ed) cell_tport_appsw_pane_cp03

0x9433,	// (0x000181e2) phob2_contact_card_pane

0x9433,	// (0x000181e2) phob2_listscroll_pane

0xef8b,	// (0x0001dd3a) phob2_list_pane

0xef93,	// (0x0001dd42) scroll_pane_cp034

0x9174,	// (0x00017f23) phob2_cc_data_pane_ParamLimits

0x9174,	// (0x00017f23) phob2_cc_data_pane

0x9193,	// (0x00017f42) phob2_cc_listscroll_pane_ParamLimits

0x9193,	// (0x00017f42) phob2_cc_listscroll_pane

0x8ce2,	// (0x00017a91) list_double_large_graphic_phob2_pane_ParamLimits

0x8ce2,	// (0x00017a91) list_double_large_graphic_phob2_pane

0x91b1,	// (0x00017f60) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x91b1,	// (0x00017f60) list_double_large_graphic_phob2_pane_g1

0x91c7,	// (0x00017f76) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x91c7,	// (0x00017f76) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x0001ece6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x0001ece6) list_double_large_graphic_phob2_pane_g

0x91d3,	// (0x00017f82) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x91d3,	// (0x00017f82) list_double_large_graphic_phob2_pane_t1

0x91e9,	// (0x00017f98) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x91e9,	// (0x00017f98) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0001eceb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0001eceb) list_double_large_graphic_phob2_pane_t

0x9433,	// (0x000181e2) list_highlight_pane_cp024

0x91fe,	// (0x00017fad) phob2_cc_button_pane

0x9206,	// (0x00017fb5) phob2_cc_data_pane_g1_ParamLimits

0x9206,	// (0x00017fb5) phob2_cc_data_pane_g1

0x921b,	// (0x00017fca) phob2_cc_data_pane_g2_ParamLimits

0x921b,	// (0x00017fca) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0001ecf0) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0001ecf0) phob2_cc_data_pane_g

0x922b,	// (0x00017fda) phob2_cc_data_pane_t1_ParamLimits

0x922b,	// (0x00017fda) phob2_cc_data_pane_t1

0x9243,	// (0x00017ff2) phob2_cc_data_pane_t2_ParamLimits

0x9243,	// (0x00017ff2) phob2_cc_data_pane_t2

0x925b,	// (0x0001800a) phob2_cc_data_pane_t3_ParamLimits

0x925b,	// (0x0001800a) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x0001ecf5) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x0001ecf5) phob2_cc_data_pane_t

0xef9b,	// (0x0001dd4a) phob2_cc_list_pane_ParamLimits

0xef9b,	// (0x0001dd4a) phob2_cc_list_pane

0xd51f,	// (0x0001c2ce) scroll_pane_cp035_ParamLimits

0xd51f,	// (0x0001c2ce) scroll_pane_cp035

0x94a3,	// (0x00018252) bg_button_pane_cp033

0xefa7,	// (0x0001dd56) phob2_cc_button_pane_g1

0xefb3,	// (0x0001dd62) phob2_cc_button_pane_t1

0xefc8,	// (0x0001dd77) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0001ecfc) phob2_cc_button_pane_t

0x9273,	// (0x00018022) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9273,	// (0x00018022) list_double_large_graphic_phob2_cc_pane

0x9286,	// (0x00018035) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9286,	// (0x00018035) list_double_large_graphic_phob2_cc_pane_g1

0xefda,	// (0x0001dd89) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefda,	// (0x0001dd89) list_double_large_graphic_phob2_cc_pane_g2

0x9292,	// (0x00018041) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9292,	// (0x00018041) list_double_large_graphic_phob2_cc_pane_g3

0x929e,	// (0x0001804d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x929e,	// (0x0001804d) list_double_large_graphic_phob2_cc_pane_g4

0x92aa,	// (0x00018059) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x92aa,	// (0x00018059) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0001ed01) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0001ed01) list_double_large_graphic_phob2_cc_pane_g

0x92b6,	// (0x00018065) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x92b6,	// (0x00018065) list_double_large_graphic_phob2_cc_pane_t1

0x92df,	// (0x0001808e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x92df,	// (0x0001808e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0001ed0c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0001ed0c) list_double_large_graphic_phob2_cc_pane_t

0xefe6,	// (0x0001dd95) list_highlight_pane_cp025_ParamLimits

0xefe6,	// (0x0001dd95) list_highlight_pane_cp025

0x94a3,	// (0x00018252) bg_button_pane_cp033_ParamLimits

0xefa7,	// (0x0001dd56) phob2_cc_button_pane_g1_ParamLimits

0xefb3,	// (0x0001dd62) phob2_cc_button_pane_t1_ParamLimits

0xefc8,	// (0x0001dd77) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0001ecfc) phob2_cc_button_pane_t_ParamLimits

0x0605,	// (0x0000f3b4) popup_wgtman_window

0xd2d0,	// (0x0001c07f) scroll_pane_cp038

0x8c5b,	// (0x00017a0a) wgtman_btn_pane_cp_01_ParamLimits

0x8c5b,	// (0x00017a0a) wgtman_btn_pane_cp_01

0xeff4,	// (0x0001dda3) wgtman_content_pane

0xeffd,	// (0x0001ddac) wgtman_heading_pane

0x9433,	// (0x000181e2) bg_heading_pane_cp02

0xf006,	// (0x0001ddb5) wgtman_heading_pane_g1

0xf00e,	// (0x0001ddbd) wgtman_heading_pane_t1

0xf01c,	// (0x0001ddcb) scroll_pane_cp036

0xf024,	// (0x0001ddd3) wgtman_list_pane

0xe9d7,	// (0x0001d786) wgtman_list_pane_t1_ParamLimits

0xe9d7,	// (0x0001d786) wgtman_list_pane_t1

0xd027,	// (0x0001bdd6) cam4_grid_pane

0x6793,	// (0x00015542) bg_button_pane_cp015_ParamLimits

0x67a7,	// (0x00015556) bg_button_pane_cp016_ParamLimits

0x67ba,	// (0x00015569) bg_button_pane_cp017_ParamLimits

0x6812,	// (0x000155c1) popup_vitu2_query_window_g3_ParamLimits

0x6812,	// (0x000155c1) popup_vitu2_query_window_g3

0x68cf,	// (0x0001567e) popup_vitu2_query_window_t6_ParamLimits

0x68cf,	// (0x0001567e) popup_vitu2_query_window_t6

0x68fa,	// (0x000156a9) popup_vitu2_query_window_t7_ParamLimits

0x68fa,	// (0x000156a9) popup_vitu2_query_window_t7

0xe9c5,	// (0x0001d774) cam4_grid_pane_g1

0xe9ce,	// (0x0001d77d) cam4_grid_pane_g2

0xf02c,	// (0x0001dddb) cam4_grid_pane_g3

0xf035,	// (0x0001dde4) cam4_grid_pane_g4

0x0003,

0xff62,	// (0x0001ed11) cam4_grid_pane_g

0x152a,	// (0x000102d9) aid_placing_vt_slider_lsc_ParamLimits

0x1827,	// (0x000105d6) vidtel_button_pane_ParamLimits

0x1827,	// (0x000105d6) vidtel_button_pane

0x9433,	// (0x000181e2) bg_button_pane_cp034

0xf040,	// (0x0001ddef) vidtel_button_pane_g1

0xf048,	// (0x0001ddf7) vidtel_button_pane_t1

0xd41c,	// (0x0001c1cb) aid_size_vtel_slider_touch

0xd51f,	// (0x0001c2ce) scroll_pane_cp039

0x769d,	// (0x0001644c) ncim_query_button_pane_cp01_ParamLimits

0x76bc,	// (0x0001646b) ncimui_query_pane_g1_ParamLimits

0x94a3,	// (0x00018252) input_focus_pane_cp012_ParamLimits

0xde99,	// (0x0001cc48) ncim_query_entry_pane_t1_ParamLimits

0xd51f,	// (0x0001c2ce) scroll_pane_cp039_ParamLimits

0xa810,	// (0x000195bf) navi_pane_bcale_mc_g1

0xa818,	// (0x000195c7) navi_pane_bcale_mc_t1

0xe433,	// (0x0001d1e2) main_sp_fs_email_pane_g1

0xe43f,	// (0x0001d1ee) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0001eaa7) main_sp_fs_email_pane_g

0xe91c,	// (0x0001d6cb) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe91c,	// (0x0001d6cb) list_single_cale_mrui_row_pane_g3

0x8818,	// (0x000175c7) list_single_recal_day_pane_g5_event_pane

0xeb28,	// (0x0001d8d7) list_single_recal_day_pane_g7

0xf05e,	// (0x0001de0d) list_recal_day_event_pane_cp01

0xf067,	// (0x0001de16) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0001de1e) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0001de26) list_recal_vselct_pane_cp01

0xd476,	// (0x0001c225) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0001de30) list_recal_day_event_pane_cp01_t1

0xeb30,	// (0x0001d8df) list_single_recal_day_pane_t1_ParamLimits

0xeb42,	// (0x0001d8f1) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0001ebff) list_single_recal_day_pane_t_ParamLimits

0x9b1f,	// (0x000188ce) bg_notes_pane_ParamLimits

0x9bd6,	// (0x00018985) list_notes_pane_ParamLimits

0x0949,	// (0x0000f6f8) scroll_pane_cp06_ParamLimits

0x9c12,	// (0x000189c1) main_notes_pane_ParamLimits

0x9433,	// (0x000181e2) main_welc_pane

0x9308,	// (0x000180b7) main_welc_body_pane_ParamLimits

0x9308,	// (0x000180b7) main_welc_body_pane

0x9325,	// (0x000180d4) main_welc_opti_pane_ParamLimits

0x9325,	// (0x000180d4) main_welc_opti_pane

0x936a,	// (0x00018119) main_welc_pane_t1_ParamLimits

0x936a,	// (0x00018119) main_welc_pane_t1

0x9388,	// (0x00018137) main_welc_body_row_pane_ParamLimits

0x9388,	// (0x00018137) main_welc_body_row_pane

0xd220,	// (0x0001bfcf) main_welc_opti_row_pane_ParamLimits

0xd220,	// (0x0001bfcf) main_welc_opti_row_pane

0xf08f,	// (0x0001de3e) main_welc_opti_row_pane_g1

0x939d,	// (0x0001814c) main_welc_opti_row_pane_t1

0xf097,	// (0x0001de46) main_welc_body_row_pane_t1

0xed9e,	// (0x0001db4d) popup_notif_wgt_heading_pane

0xedb8,	// (0x0001db67) aid_size_list_notif_wgt_del_ParamLimits

0xedc5,	// (0x0001db74) list_notif_wgt_row_pane_g1_ParamLimits

0xedd1,	// (0x0001db80) list_notif_wgt_row_pane_g2_ParamLimits

0xede0,	// (0x0001db8f) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x0001ec66) list_notif_wgt_row_pane_g_ParamLimits

0xeded,	// (0x0001db9c) list_notif_wgt_row_pane_t1_ParamLimits

0xee03,	// (0x0001dbb2) list_notif_wgt_row_pane_t2_ParamLimits

0xee15,	// (0x0001dbc4) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x0001ec6d) list_notif_wgt_row_pane_t_ParamLimits

0x8cf4,	// (0x00017aa3) listrow_wgtman_pane_g1_ParamLimits

0x8d01,	// (0x00017ab0) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x0001ec96) listrow_wgtman_pane_g_ParamLimits

0x8d1f,	// (0x00017ace) listrow_wgtman_pane_t1_ParamLimits

0x8d37,	// (0x00017ae6) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x0001ec9b) listrow_wgtman_pane_t_ParamLimits

0x8d5d,	// (0x00017b0c) wait_bar_pane_cp09_ParamLimits

0x9433,	// (0x000181e2) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0001de55) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0001de5d) popup_notif_wgt_heading_pane_t1

0x9433,	// (0x000181e2) main_vids_pane

0x9433,	// (0x000181e2) vids_listscroll_pane

0x93ac,	// (0x0001815b) scroll_pane_cp040

0x9433,	// (0x000181e2) vids_list_pane

0x93b7,	// (0x00018166) vids_list_double_pane_ParamLimits

0x93b7,	// (0x00018166) vids_list_double_pane

0x93c8,	// (0x00018177) vids_list_double_pane_g1

0x93d1,	// (0x00018180) vids_list_double_pane_t1

0x93e1,	// (0x00018190) vids_list_double_pane_t2

0x0001,

0xff70,	// (0x0001ed1f) vids_list_double_pane_t

0x94a3,	// (0x00018252) main_ncimui_pane_ParamLimits

0x74d3,	// (0x00016282) main_ncimui_pane_g1_ParamLimits

0x74df,	// (0x0001628e) main_ncimui_pane_g2_ParamLimits

0x74df,	// (0x0001628e) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0001e9ac) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0001e9ac) main_ncimui_pane_g

0x9340,	// (0x000180ef) main_welc_pane_g1_ParamLimits

0x9340,	// (0x000180ef) main_welc_pane_g1

0x9355,	// (0x00018104) main_welc_pane_g2_ParamLimits

0x9355,	// (0x00018104) main_welc_pane_g2

0x0001,

0xff6b,	// (0x0001ed1a) main_welc_pane_g_ParamLimits

0xff6b,	// (0x0001ed1a) main_welc_pane_g

0x9b1f,	// (0x000188ce) listscroll_mce_pane_ParamLimits

0xa965,	// (0x00019714) wait_bar_pane_cp10

0xbe06,	// (0x0001abb5) main_cale_day_pane_ParamLimits

0xbe06,	// (0x0001abb5) main_cale_week_pane_ParamLimits

0x9b1f,	// (0x000188ce) main_messa_pane_ParamLimits

0x4d0e,	// (0x00013abd) main_clock2_btn_pane_ParamLimits

0x4d0e,	// (0x00013abd) main_clock2_btn_pane

0xc777,	// (0x0001b526) main_clock2_btn_pane_cp01_ParamLimits

0xc777,	// (0x0001b526) main_clock2_btn_pane_cp01

0xe8a8,	// (0x0001d657) list_cale_mrui_pane_ParamLimits

0xee4b,	// (0x0001dbfa) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x0001ec74) main_cf0_pane_g

0x8f46,	// (0x00017cf5) area_left_week_number_pane_ParamLimits

0x8f52,	// (0x00017d01) area_top_day_name_pane_ParamLimits

0x8f65,	// (0x00017d14) frame_month_view_pane_ParamLimits

0xef50,	// (0x0001dcff) grid_month_view_pane_ParamLimits

0xef5e,	// (0x0001dd0d) frm_month_g1_ParamLimits

0x8fe6,	// (0x00017d95) frm_month_g2_ParamLimits

0x8ff9,	// (0x00017da8) frm_month_g3_ParamLimits

0x900c,	// (0x00017dbb) frm_month_g4_ParamLimits

0x901f,	// (0x00017dce) frm_month_g5_ParamLimits

0x9032,	// (0x00017de1) frm_month_g6_ParamLimits

0x9045,	// (0x00017df4) frm_month_g7_ParamLimits

0xef6b,	// (0x0001dd1a) frm_month_g8_ParamLimits

0x9058,	// (0x00017e07) frm_month_g9_ParamLimits

0x9068,	// (0x00017e17) frm_month_g10_ParamLimits

0x9078,	// (0x00017e27) frm_month_g11_ParamLimits

0x9088,	// (0x00017e37) frm_month_g12_ParamLimits

0x909a,	// (0x00017e49) frm_month_g13_ParamLimits

0x90ac,	// (0x00017e5b) frm_month_g14_ParamLimits

0x90c0,	// (0x00017e6f) frm_month_g15_ParamLimits

0x90d4,	// (0x00017e83) frm_month_g16_ParamLimits

0xff16,	// (0x0001ecc5) frm_month_g_ParamLimits

0xef78,	// (0x0001dd27) cell_top_day_name_pane_t1_ParamLimits

0x90e8,	// (0x00017e97) cell_area_left_week_number_pane_g1_ParamLimits

0x90f4,	// (0x00017ea3) cell_area_left_week_number_pane_t1_ParamLimits

0xc57b,	// (0x0001b32a) cell_month_view_pane_g1_ParamLimits

0x9107,	// (0x00017eb6) cell_month_view_pane_t1_ParamLimits

0x9b17,	// (0x000188c6) main_clock2_btn_pane_g1

0xf0bc,	// (0x0001de6b) main_clock2_btn_pane_t1

0x94a3,	// (0x00018252) listscroll_cmail_pane_ParamLimits

0xe433,	// (0x0001d1e2) main_sp_fs_email_pane_g1_ParamLimits

0xe43f,	// (0x0001d1ee) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0001eaa7) main_sp_fs_email_pane_g_ParamLimits

0xea98,	// (0x0001d847) list_recal_day_pane_ParamLimits

0xeaa9,	// (0x0001d858) mian_recal_day_pane_t1

0x7fea,	// (0x00016d99) list_single_dyc_row_text_pane_t4_ParamLimits

0x7fea,	// (0x00016d99) list_single_dyc_row_text_pane_t4

0x8033,	// (0x00016de2) list_single_dyc_row_text_pane_t5_ParamLimits

0x8033,	// (0x00016de2) list_single_dyc_row_text_pane_t5

0xe4e1,	// (0x0001d290) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4e1,	// (0x0001d290) list_single_dyc_row_text_pane_t6

0x22d5,	// (0x00011084) aid_mgn_list_cale_time_pane

0x94a3,	// (0x00018252) main_gallery2_pane_ParamLimits

0xc78d,	// (0x0001b53c) main_clock2_pane_cp01_t1

0xc79b,	// (0x0001b54a) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0001e586) main_clock2_pane_cp01_t

0x0cc2,	// (0x0000fa71) cale_week_scroll_pane_g16_ParamLimits

0x0cc2,	// (0x0000fa71) cale_week_scroll_pane_g16

0x9e8b,	// (0x00018c3a) vorec_slider_pane

0xf048,	// (0x0001ddf7) vidtel_button_pane_t1_ParamLimits

0x887e,	// (0x0001762d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x887e,	// (0x0001762d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x888f,	// (0x0001763e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x888f,	// (0x0001763e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x0001ec22) main_fs_bigclock_clock_pane_g_ParamLimits

0x88a2,	// (0x00017651) main_fs_bigclock_clock_pane_t1_ParamLimits

0x88b8,	// (0x00017667) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x0001ec2b) main_fs_bigclock_clock_pane_t_ParamLimits

0x4509,	// (0x000132b8) main_mup3_lyrics_pane_ParamLimits

0x4509,	// (0x000132b8) main_mup3_lyrics_pane

0x9417,	// (0x000181c6) main_mup3_lyrics_pane_t1_ParamLimits

0x9417,	// (0x000181c6) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
