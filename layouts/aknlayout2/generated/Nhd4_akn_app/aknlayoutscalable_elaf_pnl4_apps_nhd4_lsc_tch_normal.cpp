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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000f1eb };

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
0x0087,	// (0x0000f272) Screen

0x0093,	// (0x0000f27e) application_window

0x00cf,	// (0x0000f2ba) area_bottom_pane_ParamLimits

0x00cf,	// (0x0000f2ba) area_bottom_pane

0x0108,	// (0x0000f2f3) area_top_pane_ParamLimits

0x0108,	// (0x0000f2f3) area_top_pane

0x935e,	// (0x00018549) call_video_uplink_pane_ParamLimits

0x935e,	// (0x00018549) call_video_uplink_pane

0x0196,	// (0x0000f381) main_pane_ParamLimits

0x0196,	// (0x0000f381) main_pane

0xbd78,	// (0x0001af63) context_pane

0x3809,	// (0x000129f4) navi_pane

0x383b,	// (0x00012a26) popup_cale_events_window_ParamLimits

0x383b,	// (0x00012a26) popup_cale_events_window

0xbd8b,	// (0x0001af76) popup_mup_playback_window

0x3853,	// (0x00012a3e) signal_pane

0x9afe,	// (0x00018ce9) main_browser_pane

0x9d42,	// (0x00018f2d) main_burst_pane

0x3579,	// (0x00012764) main_calc_pane

0xbd0a,	// (0x0001aef5) main_cale_day_pane

0x07c8,	// (0x0000f9b3) main_cale_month_pane

0xbd0a,	// (0x0001aef5) main_cale_week_pane

0x9d42,	// (0x00018f2d) main_call_pane

0x979d,	// (0x00018988) main_call_poc_pane

0x9d42,	// (0x00018f2d) main_camera_pane

0x9d42,	// (0x00018f2d) main_chi_dic_pane

0xa5f4,	// (0x000197df) main_clock_pane

0x979d,	// (0x00018988) main_fmradio_pane

0x9d42,	// (0x00018f2d) main_graph_messa_pane

0x979d,	// (0x00018988) main_help_pane

0x9afe,	// (0x00018ce9) main_im_pane

0x99f8,	// (0x00018be3) main_image_pane_ParamLimits

0x99f8,	// (0x00018be3) main_image_pane

0x979d,	// (0x00018988) main_location2_pane

0x9d42,	// (0x00018f2d) main_location_pane

0x99f8,	// (0x00018be3) main_messa_pane

0x979d,	// (0x00018988) main_mp2_pane

0x9d42,	// (0x00018f2d) main_mp_pane

0x979d,	// (0x00018988) main_msg_pane

0x979d,	// (0x00018988) main_mup_eq_pane

0x979d,	// (0x00018988) main_mup_pane

0x9afe,	// (0x00018ce9) main_notes_pane

0x979d,	// (0x00018988) main_pec_pane

0x979d,	// (0x00018988) main_phob_pane

0x979d,	// (0x00018988) main_pinb_pane

0x979d,	// (0x00018988) main_postcard_pane

0x979d,	// (0x00018988) main_qdial_pane

0x9d42,	// (0x00018f2d) main_skin_pane

0x979d,	// (0x00018988) main_smil2_pane

0x9d42,	// (0x00018f2d) main_smil_pane

0x9d42,	// (0x00018f2d) main_video_pane

0x9d42,	// (0x00018f2d) main_video_tele_pane

0x99f8,	// (0x00018be3) main_viewer_pane_ParamLimits

0x99f8,	// (0x00018be3) main_viewer_pane

0x9d42,	// (0x00018f2d) main_vorec_pane

0x35cd,	// (0x000127b8) popup_blid_sat_info_window_ParamLimits

0x35cd,	// (0x000127b8) popup_blid_sat_info_window

0x3625,	// (0x00012810) popup_dyc_status_message_window_ParamLimits

0x3625,	// (0x00012810) popup_dyc_status_message_window

0x363d,	// (0x00012828) popup_grid_large_graphic_window_ParamLimits

0x363d,	// (0x00012828) popup_grid_large_graphic_window

0x36f3,	// (0x000128de) popup_loc_request_window_ParamLimits

0x36f3,	// (0x000128de) popup_loc_request_window

0x37e1,	// (0x000129cc) popup_wml_address_window_ParamLimits

0x37e1,	// (0x000129cc) popup_wml_address_window

0x33b3,	// (0x0001259e) call_muted_g1

0x3066,	// (0x00012251) popup_call_audio_conf_window_ParamLimits

0x3066,	// (0x00012251) popup_call_audio_conf_window

0x33c7,	// (0x000125b2) popup_call_audio_first_window_ParamLimits

0x33c7,	// (0x000125b2) popup_call_audio_first_window

0x343d,	// (0x00012628) popup_call_audio_in_window_ParamLimits

0x343d,	// (0x00012628) popup_call_audio_in_window

0x3479,	// (0x00012664) popup_call_audio_out_window_ParamLimits

0x3479,	// (0x00012664) popup_call_audio_out_window

0x34b3,	// (0x0001269e) popup_call_audio_second_window_ParamLimits

0x34b3,	// (0x0001269e) popup_call_audio_second_window

0x3509,	// (0x000126f4) popup_call_audio_wait_window_ParamLimits

0x3509,	// (0x000126f4) popup_call_audio_wait_window

0x353e,	// (0x00012729) popup_number_entry_window_ParamLimits

0x353e,	// (0x00012729) popup_number_entry_window

0x938a,	// (0x00018575) bg_popup_call_pane_cp05_ParamLimits

0x938a,	// (0x00018575) bg_popup_call_pane_cp05

0x93aa,	// (0x00018595) popup_number_entry_window_t1

0x93bd,	// (0x000185a8) popup_number_entry_window_t2

0x93cf,	// (0x000185ba) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001e2b5) popup_number_entry_window_t

0x93e1,	// (0x000185cc) text_title_cp2

0x93f4,	// (0x000185df) bg_popup_call_pane_cp_ParamLimits

0x93f4,	// (0x000185df) bg_popup_call_pane_cp

0x9402,	// (0x000185ed) call_thumbnail_pane

0x940a,	// (0x000185f5) popup_call_audio_in_window_g1_ParamLimits

0x940a,	// (0x000185f5) popup_call_audio_in_window_g1

0x9416,	// (0x00018601) popup_call_audio_in_window_g2_ParamLimits

0x9416,	// (0x00018601) popup_call_audio_in_window_g2

0x9422,	// (0x0001860d) popup_call_audio_in_window_g3_ParamLimits

0x9422,	// (0x0001860d) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001e2be) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001e2be) popup_call_audio_in_window_g

0x942e,	// (0x00018619) popup_call_audio_in_window_t1_ParamLimits

0x942e,	// (0x00018619) popup_call_audio_in_window_t1

0x944a,	// (0x00018635) popup_call_audio_in_window_t2_ParamLimits

0x944a,	// (0x00018635) popup_call_audio_in_window_t2

0x9466,	// (0x00018651) popup_call_audio_in_window_t3_ParamLimits

0x9466,	// (0x00018651) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001e2c5) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001e2c5) popup_call_audio_in_window_t

0x93f4,	// (0x000185df) bg_popup_call_pane_cp01_ParamLimits

0x93f4,	// (0x000185df) bg_popup_call_pane_cp01

0x9402,	// (0x000185ed) call_thumbnail_pane_cp02

0x9479,	// (0x00018664) call_type_pane_cp022

0x9481,	// (0x0001866c) popup_call_audio_out_window_g1_ParamLimits

0x9481,	// (0x0001866c) popup_call_audio_out_window_g1

0x9493,	// (0x0001867e) popup_call_audio_out_window_g2_ParamLimits

0x9493,	// (0x0001867e) popup_call_audio_out_window_g2

0x949f,	// (0x0001868a) popup_call_audio_out_window_g3_ParamLimits

0x949f,	// (0x0001868a) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001e2cc) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001e2cc) popup_call_audio_out_window_g

0x94b1,	// (0x0001869c) popup_call_audio_out_window_t1_ParamLimits

0x94b1,	// (0x0001869c) popup_call_audio_out_window_t1

0x94c9,	// (0x000186b4) popup_call_audio_out_window_t2_ParamLimits

0x94c9,	// (0x000186b4) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001e2d3) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001e2d3) popup_call_audio_out_window_t

0x94de,	// (0x000186c9) bg_popup_call_pane_ParamLimits

0x94de,	// (0x000186c9) bg_popup_call_pane

0x0353,	// (0x0000f53e) call_thumbnail_pane_cp_ParamLimits

0x0353,	// (0x0000f53e) call_thumbnail_pane_cp

0x9562,	// (0x0001874d) call_type_pane_cp01_ParamLimits

0x9562,	// (0x0001874d) call_type_pane_cp01

0x95a6,	// (0x00018791) popup_call_audio_first_window_g1_ParamLimits

0x95a6,	// (0x00018791) popup_call_audio_first_window_g1

0x95f2,	// (0x000187dd) popup_call_audio_first_window_g2_ParamLimits

0x95f2,	// (0x000187dd) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001e2d8) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001e2d8) popup_call_audio_first_window_g

0x9636,	// (0x00018821) popup_call_audio_first_window_t1_ParamLimits

0x9636,	// (0x00018821) popup_call_audio_first_window_t1

0x96e2,	// (0x000188cd) popup_call_audio_first_window_t4_ParamLimits

0x96e2,	// (0x000188cd) popup_call_audio_first_window_t4

0x976e,	// (0x00018959) popup_call_audio_first_window_t5_ParamLimits

0x976e,	// (0x00018959) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001e2dd) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001e2dd) popup_call_audio_first_window_t

0x979d,	// (0x00018988) bg_popup_call_pane_cp02

0x97a7,	// (0x00018992) call_type_pane_cp023

0x97af,	// (0x0001899a) popup_call_audio_wait_window_g1

0x97b7,	// (0x000189a2) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001e2e4) popup_call_audio_wait_window_g

0x97bf,	// (0x000189aa) popup_call_audio_wait_window_t3

0x97cd,	// (0x000189b8) bg_popup_call_pane_cp03_ParamLimits

0x97cd,	// (0x000189b8) bg_popup_call_pane_cp03

0x982d,	// (0x00018a18) call_thumbnail_pane_cp011_ParamLimits

0x982d,	// (0x00018a18) call_thumbnail_pane_cp011

0x9839,	// (0x00018a24) call_type_pane_cp034_ParamLimits

0x9839,	// (0x00018a24) call_type_pane_cp034

0x9875,	// (0x00018a60) popup_call_audio_second_window_g1_ParamLimits

0x9875,	// (0x00018a60) popup_call_audio_second_window_g1

0x98b1,	// (0x00018a9c) popup_call_audio_second_window_g2_ParamLimits

0x98b1,	// (0x00018a9c) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001e2e9) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001e2e9) popup_call_audio_second_window_g

0x98ed,	// (0x00018ad8) popup_call_audio_second_window_t1_ParamLimits

0x98ed,	// (0x00018ad8) popup_call_audio_second_window_t1

0x996e,	// (0x00018b59) popup_call_audio_second_window_t2_ParamLimits

0x996e,	// (0x00018b59) popup_call_audio_second_window_t2

0x99a4,	// (0x00018b8f) popup_call_audio_second_window_t3_ParamLimits

0x99a4,	// (0x00018b8f) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001e2ee) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001e2ee) popup_call_audio_second_window_t

0x979d,	// (0x00018988) bg_popup_call_pane_cp04

0x99da,	// (0x00018bc5) list_conf_pane

0x99e2,	// (0x00018bcd) popup_call_audio_conf_window_t1

0x99f0,	// (0x00018bdb) call_thumbnail_pane_g1

0x99f8,	// (0x00018be3) bg_pinb_pane_ParamLimits

0x99f8,	// (0x00018be3) bg_pinb_pane

0x9a06,	// (0x00018bf1) find_pinb_pane

0x9a0f,	// (0x00018bfa) listscroll_pinb_pane_ParamLimits

0x9a0f,	// (0x00018bfa) listscroll_pinb_pane

0x9a1e,	// (0x00018c09) pinb_bg_pane_g1

0x0377,	// (0x0000f562) pinb_bg_pane_g2

0x0383,	// (0x0000f56e) pinb_bg_pane_g3

0x038f,	// (0x0000f57a) pinb_bg_pane_g4

0x039b,	// (0x0000f586) pinb_bg_pane_g5

0x03a7,	// (0x0000f592) pinb_bg_pane_g6

0x03b2,	// (0x0000f59d) pinb_bg_pane_g7

0x03bd,	// (0x0000f5a8) pinb_bg_pane_g8

0x03c8,	// (0x0000f5b3) pinb_bg_pane_g9

0x03d2,	// (0x0000f5bd) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001e2f5) pinb_bg_pane_g

0x03ef,	// (0x0000f5da) grid_pinb_pane

0x03f8,	// (0x0000f5e3) list_pinb_pane

0x0401,	// (0x0000f5ec) scroll_pane_cp01_ParamLimits

0x0401,	// (0x0000f5ec) scroll_pane_cp01

0x9a28,	// (0x00018c13) find_pinb_pane_g1_ParamLimits

0x9a28,	// (0x00018c13) find_pinb_pane_g1

0x9a40,	// (0x00018c2b) find_pinb_pane_t1

0x9a52,	// (0x00018c3d) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001e30f) find_pinb_pane_t

0x9a67,	// (0x00018c52) input_focus_pane_cp01_ParamLimits

0x9a67,	// (0x00018c52) input_focus_pane_cp01

0x0413,	// (0x0000f5fe) cell_pinb_pane_ParamLimits

0x0413,	// (0x0000f5fe) cell_pinb_pane

0x9a73,	// (0x00018c5e) cell_pinb_pane_g1_ParamLimits

0x9a73,	// (0x00018c5e) cell_pinb_pane_g1

0x9a86,	// (0x00018c71) cell_pinb_pane_g2_ParamLimits

0x9a86,	// (0x00018c71) cell_pinb_pane_g2

0x9a92,	// (0x00018c7d) cell_pinb_pane_g3_ParamLimits

0x9a92,	// (0x00018c7d) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001e314) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001e314) cell_pinb_pane_g

0x979d,	// (0x00018988) grid_highlight_pane_cp01

0x0441,	// (0x0000f62c) list_pinb_item_pane_ParamLimits

0x0441,	// (0x0000f62c) list_pinb_item_pane

0x979d,	// (0x00018988) list_highlight_pane_cp02

0x0454,	// (0x0000f63f) list_pinb_item_pane_g1_ParamLimits

0x0454,	// (0x0000f63f) list_pinb_item_pane_g1

0x0461,	// (0x0000f64c) list_pinb_item_pane_g2_ParamLimits

0x0461,	// (0x0000f64c) list_pinb_item_pane_g2

0x046d,	// (0x0000f658) list_pinb_item_pane_g3_ParamLimits

0x046d,	// (0x0000f658) list_pinb_item_pane_g3

0x047e,	// (0x0000f669) list_pinb_item_pane_g4_ParamLimits

0x047e,	// (0x0000f669) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001e31b) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001e31b) list_pinb_item_pane_g

0x048a,	// (0x0000f675) list_pinb_item_pane_t1_ParamLimits

0x048a,	// (0x0000f675) list_pinb_item_pane_t1

0x04bf,	// (0x0000f6aa) calc_display_pane

0x04e7,	// (0x0000f6d2) calc_paper_pane

0x050a,	// (0x0000f6f5) grid_calc_pane

0x979d,	// (0x00018988) bg_list_pane_cp01

0x0538,	// (0x0000f723) clock_g1

0x0540,	// (0x0000f72b) clock_g2

0x0001,

0xf139,	// (0x0001e324) clock_g

0x0548,	// (0x0000f733) clock_t1_ParamLimits

0x0548,	// (0x0000f733) clock_t1

0x055d,	// (0x0000f748) clock_t2_ParamLimits

0x055d,	// (0x0000f748) clock_t2

0x056f,	// (0x0000f75a) clock_t3_ParamLimits

0x056f,	// (0x0000f75a) clock_t3

0x0581,	// (0x0000f76c) clock_t4_ParamLimits

0x0581,	// (0x0000f76c) clock_t4

0x0593,	// (0x0000f77e) clock_t5_ParamLimits

0x0593,	// (0x0000f77e) clock_t5

0x05a8,	// (0x0000f793) clock_t6_ParamLimits

0x05a8,	// (0x0000f793) clock_t6

0x05ba,	// (0x0000f7a5) clock_t7_ParamLimits

0x05ba,	// (0x0000f7a5) clock_t7

0x05cc,	// (0x0000f7b7) clock_t8_ParamLimits

0x05cc,	// (0x0000f7b7) clock_t8

0x05e0,	// (0x0000f7cb) clock_t9_ParamLimits

0x05e0,	// (0x0000f7cb) clock_t9

0x0008,

0xf13e,	// (0x0001e329) clock_t_ParamLimits

0xf13e,	// (0x0001e329) clock_t

0x9aa6,	// (0x00018c91) popup_clock_analogue_window_cp02

0x9aa6,	// (0x00018c91) popup_clock_digital_window_cp01

0x9aae,	// (0x00018c99) listscroll_help_pane

0x979d,	// (0x00018988) phob_pre_status_pane

0x9ab8,	// (0x00018ca3) grid_qdial_pane

0x99f8,	// (0x00018be3) listscroll_mce_pane

0x99f8,	// (0x00018be3) bg_notes_pane

0x9ac2,	// (0x00018cad) list_notes_pane

0x05f4,	// (0x0000f7df) scroll_pane_cp06

0x9ad0,	// (0x00018cbb) bg_calc_paper_pane

0x9ae4,	// (0x00018ccf) list_calc_pane

0x9afe,	// (0x00018ce9) bg_calc_display_pane

0x0608,	// (0x0000f7f3) calc_display_pane_t1

0x061a,	// (0x0000f805) calc_display_pane_t2

0x9b0a,	// (0x00018cf5) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001e33c) calc_display_pane_t

0x062c,	// (0x0000f817) cell_calc_pane_ParamLimits

0x062c,	// (0x0000f817) cell_calc_pane

0x9b1c,	// (0x00018d07) bg_calc_paper_pane_g1

0x9b28,	// (0x00018d13) bg_calc_paper_pane_g2

0x9b34,	// (0x00018d1f) bg_calc_paper_pane_g3

0x9b40,	// (0x00018d2b) bg_calc_paper_pane_g4

0x9b4c,	// (0x00018d37) bg_calc_paper_pane_g5

0x0663,	// (0x0000f84e) bg_calc_paper_pane_g6

0x0674,	// (0x0000f85f) bg_calc_paper_pane_g7

0x0685,	// (0x0000f870) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001e343) bg_calc_paper_pane_g

0x0698,	// (0x0000f883) calc_bg_paper_pane_g9

0x06ab,	// (0x0000f896) list_calc_item_pane_ParamLimits

0x06ab,	// (0x0000f896) list_calc_item_pane

0x9b58,	// (0x00018d43) list_calc_item_pane_g1

0x9b65,	// (0x00018d50) list_calc_item_pane_t1_ParamLimits

0x9b65,	// (0x00018d50) list_calc_item_pane_t1

0x06c5,	// (0x0000f8b0) list_calc_item_pane_t2_ParamLimits

0x06c5,	// (0x0000f8b0) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001e354) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001e354) list_calc_item_pane_t

0x9b77,	// (0x00018d62) cell_calc_pane_g1

0x9b81,	// (0x00018d6c) grid_highlight_pane_cp02

0x9ba3,	// (0x00018d8e) bg_calc_display_pane_g1

0x9bac,	// (0x00018d97) bg_calc_display_pane_g2

0x9bb6,	// (0x00018da1) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001e35e) bg_calc_display_pane_g

0x06f7,	// (0x0000f8e2) cell_qdial_pane_ParamLimits

0x06f7,	// (0x0000f8e2) cell_qdial_pane

0x070b,	// (0x0000f8f6) cell_qdial_pane_g1_ParamLimits

0x070b,	// (0x0000f8f6) cell_qdial_pane_g1

0x0721,	// (0x0000f90c) cell_qdial_pane_g2_ParamLimits

0x0721,	// (0x0000f90c) cell_qdial_pane_g2

0x9bbf,	// (0x00018daa) cell_qdial_pane_g3_ParamLimits

0x9bbf,	// (0x00018daa) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001e365) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001e365) cell_qdial_pane_g

0x0747,	// (0x0000f932) cell_qdial_pane_t1_ParamLimits

0x0747,	// (0x0000f932) cell_qdial_pane_t1

0x075f,	// (0x0000f94a) cell_qdial_pane_t2_ParamLimits

0x075f,	// (0x0000f94a) cell_qdial_pane_t2

0x0772,	// (0x0000f95d) cell_qdial_pane_t3_ParamLimits

0x0772,	// (0x0000f95d) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001e36e) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001e36e) cell_qdial_pane_t

0x979d,	// (0x00018988) grid_highlight_pane_cp04

0x9bcb,	// (0x00018db6) thumbnail_qdial_pane_ParamLimits

0x9bcb,	// (0x00018db6) thumbnail_qdial_pane

0x9c27,	// (0x00018e12) list_help_pane

0x9c30,	// (0x00018e1b) scroll_pane_cp02

0x0785,	// (0x0000f970) help_list_pane_t1_ParamLimits

0x0785,	// (0x0000f970) help_list_pane_t1

0x9c39,	// (0x00018e24) bg_notes_pane_g2

0x9c41,	// (0x00018e2c) bg_notes_pane_g3

0x9c49,	// (0x00018e34) notes_bg_pane_g1

0x9c51,	// (0x00018e3c) notes_bg_pane_g4

0x9c59,	// (0x00018e44) notes_bg_pane_g5

0x9c61,	// (0x00018e4c) notes_bg_pane_g6

0x9c69,	// (0x00018e54) notes_bg_pane_g7

0x9c71,	// (0x00018e5c) notes_bg_pane_g8

0x9c79,	// (0x00018e64) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001e38c) notes_bg_pane_g

0x07a4,	// (0x0000f98f) list_notes_text_pane_ParamLimits

0x07a4,	// (0x0000f98f) list_notes_text_pane

0x9c81,	// (0x00018e6c) list_notes_text_pane_g1

0x07ba,	// (0x0000f9a5) list_notes_text_pane_t1

0x07c8,	// (0x0000f9b3) listscroll_cale_week_pane

0x07f4,	// (0x0000f9df) bg_cale_heading_pane

0x9ca4,	// (0x00018e8f) bg_cale_pane_cp01

0x0812,	// (0x0000f9fd) cale_week_corner_pane

0x0831,	// (0x0000fa1c) cale_week_day_heading_pane

0x0854,	// (0x0000fa3f) cale_week_scroll_pane_g1

0x086d,	// (0x0000fa58) cale_week_scroll_pane_g2

0x0885,	// (0x0000fa70) cale_week_scroll_pane_g3

0x089d,	// (0x0000fa88) cale_week_scroll_pane_g4

0x08b5,	// (0x0000faa0) cale_week_scroll_pane_g5

0x08d1,	// (0x0000fabc) cale_week_scroll_pane_g6

0x08f1,	// (0x0000fadc) cale_week_scroll_pane_g7

0x0911,	// (0x0000fafc) cale_week_scroll_pane_g8

0x0935,	// (0x0000fb20) cale_week_scroll_pane_g9

0x094d,	// (0x0000fb38) cale_week_scroll_pane_g10

0x0965,	// (0x0000fb50) cale_week_scroll_pane_g11

0x097d,	// (0x0000fb68) cale_week_scroll_pane_g12

0x0995,	// (0x0000fb80) cale_week_scroll_pane_g13

0x0995,	// (0x0000fb80) cale_week_scroll_pane_g14

0x0995,	// (0x0000fb80) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001e39b) cale_week_scroll_pane_g

0x09d1,	// (0x0000fbbc) cale_week_time_pane

0x09f5,	// (0x0000fbe0) grid_cale_week_pane

0x9cd3,	// (0x00018ebe) scroll_pane_cp08

0x0a1b,	// (0x0000fc06) cell_cale_week_pane_ParamLimits

0x0a1b,	// (0x0000fc06) cell_cale_week_pane

0x0aa9,	// (0x0000fc94) cale_week_day_heading_pane_t1

0x0af3,	// (0x0000fcde) cale_week_day_heading_pane_t2

0x0b42,	// (0x0000fd2d) cale_week_day_heading_pane_t3

0x0b91,	// (0x0000fd7c) cale_week_day_heading_pane_t4

0x0be0,	// (0x0000fdcb) cale_week_day_heading_pane_t5

0x0c37,	// (0x0000fe22) cale_week_day_heading_pane_t6

0x0c8e,	// (0x0000fe79) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001e3bc) cale_week_day_heading_pane_t

0x9cf0,	// (0x00018edb) bg_cale_side_pane

0x0cd8,	// (0x0000fec3) cale_week_time_pane_t1

0x0cf2,	// (0x0000fedd) cale_week_time_pane_t2

0x0d0c,	// (0x0000fef7) cale_week_time_pane_t3

0x0d26,	// (0x0000ff11) cale_week_time_pane_t4

0x0d40,	// (0x0000ff2b) cale_week_time_pane_t5

0x0d5a,	// (0x0000ff45) cale_week_time_pane_t6

0x0d74,	// (0x0000ff5f) cale_week_time_pane_t7

0x0d94,	// (0x0000ff7f) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001e3cb) cale_week_time_pane_t

0x0db4,	// (0x0000ff9f) cell_cale_week_pane_g2

0x0dd8,	// (0x0000ffc3) cell_cale_week_pane_g3_ParamLimits

0x0dd8,	// (0x0000ffc3) cell_cale_week_pane_g3

0x9cfe,	// (0x00018ee9) grid_highlight_pane_cp07

0x9d06,	// (0x00018ef1) listscroll_gms_pane

0x9d10,	// (0x00018efb) grid_gms_pane

0x9d19,	// (0x00018f04) listscroll_gms_pane_g1

0x9d21,	// (0x00018f0c) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001e3dc) listscroll_gms_pane_g

0x0df0,	// (0x0000ffdb) scroll_pane_cp010

0x0dfb,	// (0x0000ffe6) cell_gms_pane_ParamLimits

0x0dfb,	// (0x0000ffe6) cell_gms_pane

0x0e0d,	// (0x0000fff8) cell_gms_pane_g1

0x9d29,	// (0x00018f14) cell_gms_pane_g2

0x9c81,	// (0x00018e6c) cell_gms_pane_g3

0x9d31,	// (0x00018f1c) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001e3e1) cell_gms_pane_g

0x9d3a,	// (0x00018f25) grid_highlight_pane_cp09

0x335d,	// (0x00012548) phob_pre_status_pane_g1

0x3365,	// (0x00012550) phob_pre_status_pane_g2

0x336d,	// (0x00012558) phob_pre_status_pane_g3

0x3375,	// (0x00012560) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0001e7cc) phob_pre_status_pane_g

0x3385,	// (0x00012570) phob_pre_status_pane_t1

0x3393,	// (0x0001257e) phob_pre_status_pane_t2

0x33a3,	// (0x0001258e) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0001e7d7) phob_pre_status_pane_t

0x9d42,	// (0x00018f2d) bg_list_pane_cp05

0x0e1d,	// (0x00010008) grid_vorec_pane

0x0e27,	// (0x00010012) vorec_t1

0x0e35,	// (0x00010020) vorec_t2

0x0e43,	// (0x0001002e) vorec_t3

0x0e51,	// (0x0001003c) vorec_t4

0x92e6,	// (0x000184d1) vorec_t5

0x92f4,	// (0x000184df) vorec_t6

0x0004,

0xf1ff,	// (0x0001e3ea) vorec_t

0x9302,	// (0x000184ed) wait_bar_pane_cp01

0x0e6d,	// (0x00010058) cell_vorec_pane_ParamLimits

0x0e6d,	// (0x00010058) cell_vorec_pane

0x9d4a,	// (0x00018f35) cell_vorec_pane_g1

0x979d,	// (0x00018988) grid_highlight_pane_cp05

0x0e98,	// (0x00010083) cams_zoom_pane

0x0ea7,	// (0x00010092) image_vga_pane

0x0ec1,	// (0x000100ac) main_camera_pane_g1

0x0ed3,	// (0x000100be) main_camera_pane_g2

0x0ee3,	// (0x000100ce) main_camera_pane_g3

0x0ef5,	// (0x000100e0) main_camera_pane_g4

0x0f07,	// (0x000100f2) main_camera_pane_g5

0x0f19,	// (0x00010104) main_camera_pane_g6

0x0f2b,	// (0x00010116) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001e3f5) main_camera_pane_g

0x0f3d,	// (0x00010128) main_camera_pane_t1

0x0f53,	// (0x0001013e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001e406) main_camera_pane_t

0x0f8f,	// (0x0001017a) cams_zoom_pane_cp_ParamLimits

0x0f8f,	// (0x0001017a) cams_zoom_pane_cp

0x0fb7,	// (0x000101a2) image_cif_pane_ParamLimits

0x0fb7,	// (0x000101a2) image_cif_pane

0x0ff2,	// (0x000101dd) image_subqcif_pane

0x0ffa,	// (0x000101e5) main_video_pane_g1_ParamLimits

0x0ffa,	// (0x000101e5) main_video_pane_g1

0x101e,	// (0x00010209) main_video_pane_g2_ParamLimits

0x101e,	// (0x00010209) main_video_pane_g2

0x1052,	// (0x0001023d) main_video_pane_g3_ParamLimits

0x1052,	// (0x0001023d) main_video_pane_g3

0x1080,	// (0x0001026b) main_video_pane_g4_ParamLimits

0x1080,	// (0x0001026b) main_video_pane_g4

0x10ae,	// (0x00010299) main_video_pane_g5_ParamLimits

0x10ae,	// (0x00010299) main_video_pane_g5

0x9d60,	// (0x00018f4b) main_video_pane_g6_ParamLimits

0x9d60,	// (0x00018f4b) main_video_pane_g6

0x0006,

0xf220,	// (0x0001e40b) main_video_pane_g_ParamLimits

0xf220,	// (0x0001e40b) main_video_pane_g

0x10d7,	// (0x000102c2) main_video_pane_t1_ParamLimits

0x10d7,	// (0x000102c2) main_video_pane_t1

0x9d7a,	// (0x00018f65) cams_zoom_pane_g1

0x9d83,	// (0x00018f6e) cams_zoom_pane_g2

0x9d8c,	// (0x00018f77) cams_zoom_pane_g3

0x9d95,	// (0x00018f80) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001e41a) cams_zoom_pane_g

0x1134,	// (0x0001031f) grid_cams_pane

0x114e,	// (0x00010339) linegrid_cams_pane

0x1161,	// (0x0001034c) cell_cams_pane_ParamLimits

0x1161,	// (0x0001034c) cell_cams_pane

0x9d9e,	// (0x00018f89) cams_burst_image_pane

0x9da6,	// (0x00018f91) cell_cams_pane_g1

0x979d,	// (0x00018988) grid_highlight_pane_cp03

0x9b77,	// (0x00018d62) mp_bg_pane_g1

0x979d,	// (0x00018988) bg_list_pane_cp03

0xbc2f,	// (0x0001ae1a) bg_mp_pane

0xbc37,	// (0x0001ae22) grid_mp_pane

0xbc3f,	// (0x0001ae2a) media_player_g1

0xbc47,	// (0x0001ae32) media_player_t1

0xbc55,	// (0x0001ae40) media_player_t2

0xbc63,	// (0x0001ae4e) media_player_t3

0xbc71,	// (0x0001ae5c) media_player_t4

0xbc7f,	// (0x0001ae6a) media_player_t5

0xbc8d,	// (0x0001ae78) media_player_t6

0xbc9b,	// (0x0001ae86) media_player_t7

0x0006,

0xf5cb,	// (0x0001e7b6) media_player_t

0xbca9,	// (0x0001ae94) wait_bar_pane_cp02

0xf5b0,	// (0x0001e79b) main_usb_pane_t

0x3354,	// (0x0001253f) cell_mp_pane

0x9b77,	// (0x00018d62) cell_mp_pane_g1

0x979d,	// (0x00018988) grid_highlight_pane_cp06

0x9dae,	// (0x00018f99) grid_skin_colour_pane

0x9db6,	// (0x00018fa1) list_highlight_pane_cp03

0x1297,	// (0x00010482) skin_g1

0x9dbe,	// (0x00018fa9) skin_t1

0x9dcd,	// (0x00018fb8) skin_t2

0x0001,

0xf264,	// (0x0001e44f) skin_t

0x129f,	// (0x0001048a) cell_skin_colour_pane_ParamLimits

0x129f,	// (0x0001048a) cell_skin_colour_pane

0x9ddb,	// (0x00018fc6) cell_skin_colour_pane_g1

0x1318,	// (0x00010503) call_video_g1_ParamLimits

0x1318,	// (0x00010503) call_video_g1

0x1334,	// (0x0001051f) call_video_g2_ParamLimits

0x1334,	// (0x0001051f) call_video_g2

0x0001,

0xf269,	// (0x0001e454) call_video_g_ParamLimits

0xf269,	// (0x0001e454) call_video_g

0x1386,	// (0x00010571) call_video_uplink_pane_cp1_ParamLimits

0x1386,	// (0x00010571) call_video_uplink_pane_cp1

0x9ded,	// (0x00018fd8) call_video_uplink_pane_cp2

0x1425,	// (0x00010610) video_down_crop_pane_ParamLimits

0x1425,	// (0x00010610) video_down_crop_pane

0x150e,	// (0x000106f9) video_down_pane_ParamLimits

0x150e,	// (0x000106f9) video_down_pane

0x9df5,	// (0x00018fe0) video_down_subqcif_pane_ParamLimits

0x9df5,	// (0x00018fe0) video_down_subqcif_pane

0x9e0d,	// (0x00018ff8) video_down_subqcif_pane_cp_ParamLimits

0x9e0d,	// (0x00018ff8) video_down_subqcif_pane_cp

0x9e33,	// (0x0001901e) im_reading_pane_ParamLimits

0x9e33,	// (0x0001901e) im_reading_pane

0x161c,	// (0x00010807) im_writing_pane_ParamLimits

0x161c,	// (0x00010807) im_writing_pane

0x1632,	// (0x0001081d) im_reading_pane_t1

0x9e4d,	// (0x00019038) list_im_pane

0x9e5e,	// (0x00019049) scroll_pane_cp07

0x166f,	// (0x0001085a) im_writing_pane_t1_ParamLimits

0x166f,	// (0x0001085a) im_writing_pane_t1

0x9e77,	// (0x00019062) im_writing_pane_t2_ParamLimits

0x9e77,	// (0x00019062) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001e45e) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001e45e) im_writing_pane_t

0x979d,	// (0x00018988) input_focus_pane_cp04

0x979d,	// (0x00018988) input_focus_pane_cp05

0x1684,	// (0x0001086f) list_im_single_pane_ParamLimits

0x1684,	// (0x0001086f) list_im_single_pane

0x169a,	// (0x00010885) list_single_im_pane_t1

0x3314,	// (0x000124ff) blid_accuracy_pane

0x331c,	// (0x00012507) blid_compass_pane

0x3326,	// (0x00012511) main_location_t1

0x3336,	// (0x00012521) main_location_t2

0x3346,	// (0x00012531) main_location_t3

0x0002,

0xf5da,	// (0x0001e7c5) main_location_t

0x979d,	// (0x00018988) aid_levels_location

0x9b77,	// (0x00018d62) blid_accuracy_pane_g1

0x9b77,	// (0x00018d62) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001e4c0) blid_accuracy_pane_g

0x9ebf,	// (0x000190aa) wml_content_pane

0x9efd,	// (0x000190e8) wml_button_pane_ParamLimits

0x9efd,	// (0x000190e8) wml_button_pane

0x16a9,	// (0x00010894) wml_list_single_large_pane_ParamLimits

0x16a9,	// (0x00010894) wml_list_single_large_pane

0x16bf,	// (0x000108aa) wml_list_single_medium_pane_ParamLimits

0x16bf,	// (0x000108aa) wml_list_single_medium_pane

0x16d9,	// (0x000108c4) wml_list_single_small_pane_ParamLimits

0x16d9,	// (0x000108c4) wml_list_single_small_pane

0x9f11,	// (0x000190fc) wml_selection_box_pane_ParamLimits

0x9f11,	// (0x000190fc) wml_selection_box_pane

0x9f24,	// (0x0001910f) wml_list_single_pane_t1

0x9f33,	// (0x0001911e) wml_list_single_medium_pane_t1

0x9f42,	// (0x0001912d) wml_list_single_large_pane_t1

0x9f51,	// (0x0001913c) input_focus_pane_cp02_ParamLimits

0x9f51,	// (0x0001913c) input_focus_pane_cp02

0x9f64,	// (0x0001914f) wml_selection_box_pane_g1

0x9f6d,	// (0x00019158) wml_selection_box_pane_t1_ParamLimits

0x9f6d,	// (0x00019158) wml_selection_box_pane_t1

0x99f8,	// (0x00018be3) bg_wml_button_pane_ParamLimits

0x99f8,	// (0x00018be3) bg_wml_button_pane

0x9f85,	// (0x00019170) wml_button_pane_g1

0x9f8d,	// (0x00019178) wml_button_pane_t1

0x9f85,	// (0x00019170) wml_button_bg_pane_g1

0x9f9d,	// (0x00019188) wml_button_bg_pane_g2

0x9fa5,	// (0x00019190) wml_button_bg_pane_g3

0x9fad,	// (0x00019198) wml_button_bg_pane_g4

0x9fb5,	// (0x000191a0) wml_button_bg_pane_g5

0x9fbd,	// (0x000191a8) wml_button_bg_pane_g6

0x9fc5,	// (0x000191b0) wml_button_bg_pane_g7

0x9fcd,	// (0x000191b8) wml_button_bg_pane_g8

0x9fd5,	// (0x000191c0) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001e463) wml_button_bg_pane_g

0x16f3,	// (0x000108de) bg_list_pane_cp02

0x9fdd,	// (0x000191c8) mce_header_pane_ParamLimits

0x9fdd,	// (0x000191c8) mce_header_pane

0x9ff3,	// (0x000191de) mce_icon_pane

0x9ff3,	// (0x000191de) mce_image_pane

0x9ffc,	// (0x000191e7) mce_text_pane_ParamLimits

0x9ffc,	// (0x000191e7) mce_text_pane

0x16fb,	// (0x000108e6) scroll_pane_cp03

0x9ef5,	// (0x000190e0) scroll_pane_cp04

0xa00f,	// (0x000191fa) scroll_pane_cp05_ParamLimits

0xa00f,	// (0x000191fa) scroll_pane_cp05

0x1705,	// (0x000108f0) mce_header_field_pane_ParamLimits

0x1705,	// (0x000108f0) mce_header_field_pane

0x171c,	// (0x00010907) mce_header_field_pane_2_ParamLimits

0x171c,	// (0x00010907) mce_header_field_pane_2

0x1732,	// (0x0001091d) mce_header_field_pane_3

0x173a,	// (0x00010925) list_single_mce_message_pane_ParamLimits

0x173a,	// (0x00010925) list_single_mce_message_pane

0x1751,	// (0x0001093c) list_single_mce_smart_pane_ParamLimits

0x1751,	// (0x0001093c) list_single_mce_smart_pane

0xa01b,	// (0x00019206) input_focus_pane_cp03

0xa024,	// (0x0001920f) list_header_data_pane

0x1773,	// (0x0001095e) mce_header_field_pane_t1

0x1783,	// (0x0001096e) list_single_mce_header_pane_ParamLimits

0x1783,	// (0x0001096e) list_single_mce_header_pane

0xa02c,	// (0x00019217) list_single_mce_header_pane_t1

0xa03b,	// (0x00019226) list_single_mce_message_pane_g1

0xa043,	// (0x0001922e) list_single_mce_message_pane_t1

0x17bd,	// (0x000109a8) bg_cale_heading_pane_cp01_ParamLimits

0x17bd,	// (0x000109a8) bg_cale_heading_pane_cp01

0xa051,	// (0x0001923c) bg_cale_pane_cp02_ParamLimits

0xa051,	// (0x0001923c) bg_cale_pane_cp02

0x17f8,	// (0x000109e3) cale_month_corner_pane

0x1817,	// (0x00010a02) cale_month_day_heading_pane_ParamLimits

0x1817,	// (0x00010a02) cale_month_day_heading_pane

0x186a,	// (0x00010a55) cale_month_pane_g1_ParamLimits

0x186a,	// (0x00010a55) cale_month_pane_g1

0x189a,	// (0x00010a85) cale_month_pane_g2_ParamLimits

0x189a,	// (0x00010a85) cale_month_pane_g2

0x18ca,	// (0x00010ab5) cale_month_pane_g3_ParamLimits

0x18ca,	// (0x00010ab5) cale_month_pane_g3

0x1906,	// (0x00010af1) cale_month_pane_g4_ParamLimits

0x1906,	// (0x00010af1) cale_month_pane_g4

0x1942,	// (0x00010b2d) cale_month_pane_g5_ParamLimits

0x1942,	// (0x00010b2d) cale_month_pane_g5

0x198a,	// (0x00010b75) cale_month_pane_g6_ParamLimits

0x198a,	// (0x00010b75) cale_month_pane_g6

0x19d6,	// (0x00010bc1) cale_month_pane_g7_ParamLimits

0x19d6,	// (0x00010bc1) cale_month_pane_g7

0x1a2a,	// (0x00010c15) cale_month_pane_g8_ParamLimits

0x1a2a,	// (0x00010c15) cale_month_pane_g8

0x1a7e,	// (0x00010c69) cale_month_pane_g9_ParamLimits

0x1a7e,	// (0x00010c69) cale_month_pane_g9

0x1ad0,	// (0x00010cbb) cale_month_pane_g10_ParamLimits

0x1ad0,	// (0x00010cbb) cale_month_pane_g10

0x1b22,	// (0x00010d0d) cale_month_pane_g11_ParamLimits

0x1b22,	// (0x00010d0d) cale_month_pane_g11

0x1b74,	// (0x00010d5f) cale_month_pane_g12_ParamLimits

0x1b74,	// (0x00010d5f) cale_month_pane_g12

0x1bc6,	// (0x00010db1) cale_month_pane_g13_ParamLimits

0x1bc6,	// (0x00010db1) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001e476) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001e476) cale_month_pane_g

0x1c18,	// (0x00010e03) cale_month_week_pane

0x1c3c,	// (0x00010e27) grid_cale_month_pane_ParamLimits

0x1c3c,	// (0x00010e27) grid_cale_month_pane

0x1c7a,	// (0x00010e65) cale_month_day_heading_pane_t1

0x1d00,	// (0x00010eeb) cale_month_day_heading_pane_t2

0x1d91,	// (0x00010f7c) cale_month_day_heading_pane_t3

0x1e22,	// (0x0001100d) cale_month_day_heading_pane_t4

0x1ebb,	// (0x000110a6) cale_month_day_heading_pane_t5

0x1f5c,	// (0x00011147) cale_month_day_heading_pane_t6

0x1ffd,	// (0x000111e8) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001e491) cale_month_day_heading_pane_t

0x9cf0,	// (0x00018edb) bg_cale_side_pane_cp01

0x20a6,	// (0x00011291) cale_month_week_pane_t1

0x20bf,	// (0x000112aa) cale_month_week_pane_t2

0x20d8,	// (0x000112c3) cale_month_week_pane_t3

0x20f1,	// (0x000112dc) cale_month_week_pane_t4

0x210a,	// (0x000112f5) cale_month_week_pane_t5

0x2123,	// (0x0001130e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001e4a0) cale_month_week_pane_t

0x213c,	// (0x00011327) cell_cale_month_pane_ParamLimits

0x213c,	// (0x00011327) cell_cale_month_pane

0xa090,	// (0x0001927b) cell_cale_month_pane_g1

0x2294,	// (0x0001147f) cell_cale_month_pane_t1_ParamLimits

0x2294,	// (0x0001147f) cell_cale_month_pane_t1

0x9cfe,	// (0x00018ee9) grid_highlight_pane_cp08

0x9b77,	// (0x00018d62) main_smil_g1

0x22b4,	// (0x0001149f) smil_status_pane

0xa09c,	// (0x00019287) smil_text_pane

0xbb4f,	// (0x0001ad3a) bg_popup_call3_rect_pane_g8

0xbb57,	// (0x0001ad42) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e759) bg_popup_call3_rect_pane_g

0xbdf2,	// (0x0001afdd) smil_status_volume_pane_g1

0xa0a6,	// (0x00019291) smil_status_pane_t1

0xbe25,	// (0x0001b010) volume_smil_pane

0xa0bd,	// (0x000192a8) list_smil_text_pane

0x22c9,	// (0x000114b4) scroll_pane_cp011

0x22d4,	// (0x000114bf) smil_text_list_pane_t1_ParamLimits

0x22d4,	// (0x000114bf) smil_text_list_pane_t1

0xa0c7,	// (0x000192b2) aid_volume_smil_ParamLimits

0xa0c7,	// (0x000192b2) aid_volume_smil

0x9b77,	// (0x00018d62) smil_volume_pane_g1

0x9b77,	// (0x00018d62) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001e4c0) smil_volume_pane_g

0x07c8,	// (0x0000f9b3) listscroll_cale_day_pane

0xa0e9,	// (0x000192d4) bg_cale_pane

0xa101,	// (0x000192ec) list_cale_pane

0xa124,	// (0x0001930f) scroll_pane_cp09

0xa135,	// (0x00019320) cale_bg_pane_g1

0xa13d,	// (0x00019328) cale_bg_pane_g2

0xa145,	// (0x00019330) cale_bg_pane_g3

0xa14d,	// (0x00019338) cale_bg_pane_g4

0xa155,	// (0x00019340) cale_bg_pane_g5

0xa15d,	// (0x00019348) cale_bg_pane_g6

0xa165,	// (0x00019350) cale_bg_pane_g7

0xa16d,	// (0x00019358) cale_bg_pane_g8

0xa175,	// (0x00019360) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001e4c5) cale_bg_pane_g

0x2316,	// (0x00011501) list_cale_time_pane_ParamLimits

0x2316,	// (0x00011501) list_cale_time_pane

0xa185,	// (0x00019370) list_cale_time_pane_g1_ParamLimits

0xa185,	// (0x00019370) list_cale_time_pane_g1

0xa191,	// (0x0001937c) list_cale_time_pane_g2_ParamLimits

0xa191,	// (0x0001937c) list_cale_time_pane_g2

0x232d,	// (0x00011518) list_cale_time_pane_g3_ParamLimits

0x232d,	// (0x00011518) list_cale_time_pane_g3

0x233b,	// (0x00011526) list_cale_time_pane_g4_ParamLimits

0x233b,	// (0x00011526) list_cale_time_pane_g4

0x2349,	// (0x00011534) list_cale_time_pane_g5_ParamLimits

0x2349,	// (0x00011534) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001e4d8) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001e4d8) list_cale_time_pane_g

0xa1ab,	// (0x00019396) list_cale_time_pane_t1_ParamLimits

0xa1ab,	// (0x00019396) list_cale_time_pane_t1

0xa1d3,	// (0x000193be) list_cale_time_pane_t2_ParamLimits

0xa1d3,	// (0x000193be) list_cale_time_pane_t2

0x2699,	// (0x00011884) aid_blid_cardinal_pane

0x26d7,	// (0x000118c2) compass_pane_t4

0xa1fb,	// (0x000193e6) list_cale_time_pane_t4_ParamLimits

0xa1fb,	// (0x000193e6) list_cale_time_pane_t4

0x26e5,	// (0x000118d0) compass_pane_t5

0x26f3,	// (0x000118de) compass_pane_t6

0x2701,	// (0x000118ec) compass_pane_t7

0xa72b,	// (0x00019916) navi_pane_cc_t1

0xa91a,	// (0x00019b05) aid_phob_thumbnail_center_pane

0x2d24,	// (0x00011f0f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e4e5) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e4e5) list_cale_time_pane_t

0x93f4,	// (0x000185df) bg_popup_window_pane_cp02_ParamLimits

0x93f4,	// (0x000185df) bg_popup_window_pane_cp02

0xa223,	// (0x0001940e) heading_pane_cp01_ParamLimits

0xa223,	// (0x0001940e) heading_pane_cp01

0xa22f,	// (0x0001941a) loc_req_pane_ParamLimits

0xa22f,	// (0x0001941a) loc_req_pane

0xa23f,	// (0x0001942a) loc_type_pane_ParamLimits

0xa23f,	// (0x0001942a) loc_type_pane

0xa251,	// (0x0001943c) loc_type_pane_t1_ParamLimits

0xa251,	// (0x0001943c) loc_type_pane_t1

0xa263,	// (0x0001944e) loc_type_pane_t2_ParamLimits

0xa263,	// (0x0001944e) loc_type_pane_t2

0xa275,	// (0x00019460) loc_type_pane_t3_ParamLimits

0xa275,	// (0x00019460) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e4ec) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e4ec) loc_type_pane_t

0xa287,	// (0x00019472) list_loc_req_pane

0xa291,	// (0x0001947c) scroll_pane_cp012

0x2357,	// (0x00011542) list_single_loc_request_popup_menu_pane_ParamLimits

0x2357,	// (0x00011542) list_single_loc_request_popup_menu_pane

0xa29c,	// (0x00019487) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa29c,	// (0x00019487) list_single_loc_request_popup_menu_pane_g1

0xa2a8,	// (0x00019493) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa2a8,	// (0x00019493) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e4f3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e4f3) list_single_loc_request_popup_menu_pane_g

0xa2b4,	// (0x0001949f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa2b4,	// (0x0001949f) list_single_loc_request_popup_menu_pane_t1

0x99f8,	// (0x00018be3) bg_popup_window_pane_cp03_ParamLimits

0x99f8,	// (0x00018be3) bg_popup_window_pane_cp03

0xa2ca,	// (0x000194b5) heading_loc_req_pane_ParamLimits

0xa2ca,	// (0x000194b5) heading_loc_req_pane

0x2364,	// (0x0001154f) popup_dyc_status_message_window_g1_ParamLimits

0x2364,	// (0x0001154f) popup_dyc_status_message_window_g1

0x2378,	// (0x00011563) popup_dyc_status_message_window_t1_ParamLimits

0x2378,	// (0x00011563) popup_dyc_status_message_window_t1

0x238d,	// (0x00011578) popup_dyc_status_message_window_t2_ParamLimits

0x238d,	// (0x00011578) popup_dyc_status_message_window_t2

0x23a2,	// (0x0001158d) popup_dyc_status_message_window_t3_ParamLimits

0x23a2,	// (0x0001158d) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e4f8) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e4f8) popup_dyc_status_message_window_t

0x979d,	// (0x00018988) bg_heading_pane_cp01

0xa2d6,	// (0x000194c1) heading_loc_req_pane_g1

0xa2de,	// (0x000194c9) heading_loc_req_pane_g2

0xa2e6,	// (0x000194d1) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e4ff) heading_loc_req_pane_g

0xa2ee,	// (0x000194d9) heading_loc_req_pane_t1

0xa2fd,	// (0x000194e8) bg_popup_sub_pane_cp01_ParamLimits

0xa2fd,	// (0x000194e8) bg_popup_sub_pane_cp01

0xa30b,	// (0x000194f6) popup_cale_events_window_g1_ParamLimits

0xa30b,	// (0x000194f6) popup_cale_events_window_g1

0xa32b,	// (0x00019516) popup_cale_events_window_g2_ParamLimits

0xa32b,	// (0x00019516) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e533) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e533) popup_cale_events_window_g

0xa34b,	// (0x00019536) popup_cale_events_window_t1_ParamLimits

0xa34b,	// (0x00019536) popup_cale_events_window_t1

0xa35d,	// (0x00019548) popup_cale_events_window_t2_ParamLimits

0xa35d,	// (0x00019548) popup_cale_events_window_t2

0xa39b,	// (0x00019586) popup_cale_events_window_t3_ParamLimits

0xa39b,	// (0x00019586) popup_cale_events_window_t3

0xa3d5,	// (0x000195c0) popup_cale_events_window_t4_ParamLimits

0xa3d5,	// (0x000195c0) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e538) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e538) popup_cale_events_window_t

0x24a7,	// (0x00011692) call_type_pane

0x24b7,	// (0x000116a2) popup_call_status_window_g1

0x24cb,	// (0x000116b6) popup_call_status_window_g2

0x24df,	// (0x000116ca) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e541) popup_call_status_window_g

0xa40b,	// (0x000195f6) call_type_pane_g1

0xa414,	// (0x000195ff) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e548) call_type_pane_g

0x979d,	// (0x00018988) bg_popup_sub_pane_cp02

0xa41d,	// (0x00019608) listscroll_popup_wml_pane

0xa425,	// (0x00019610) list_wml_pane

0xa42f,	// (0x0001961a) scroll_pane_cp013

0xa43a,	// (0x00019625) list_single_graphic_popup_wml_pane_ParamLimits

0xa43a,	// (0x00019625) list_single_graphic_popup_wml_pane

0x9b77,	// (0x00018d62) list_single_graphic_popup_wml_pane_g1

0xa44e,	// (0x00019639) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e54d) list_single_graphic_popup_wml_pane_g

0xa456,	// (0x00019641) list_single_graphic_popup_wml_pane_t1

0xa46c,	// (0x00019657) aid_call_pane

0x99f0,	// (0x00018bdb) popup_clock_analogue_window_g1

0x99f0,	// (0x00018bdb) popup_clock_analogue_window_g2

0xa474,	// (0x0001965f) popup_clock_analogue_window_g3

0xa474,	// (0x0001965f) popup_clock_analogue_window_g4

0x9b77,	// (0x00018d62) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e552) popup_clock_analogue_window_g

0xa47c,	// (0x00019667) popup_clock_analogue_window_t1

0xa48a,	// (0x00019675) clock_digital_number_pane_ParamLimits

0xa48a,	// (0x00019675) clock_digital_number_pane

0xa496,	// (0x00019681) clock_digital_number_pane_cp02_ParamLimits

0xa496,	// (0x00019681) clock_digital_number_pane_cp02

0xa4a2,	// (0x0001968d) clock_digital_number_pane_cp03_ParamLimits

0xa4a2,	// (0x0001968d) clock_digital_number_pane_cp03

0xa4ae,	// (0x00019699) clock_digital_number_pane_cp04_ParamLimits

0xa4ae,	// (0x00019699) clock_digital_number_pane_cp04

0xa4be,	// (0x000196a9) clock_digital_separator_pane_ParamLimits

0xa4be,	// (0x000196a9) clock_digital_separator_pane

0xa4ca,	// (0x000196b5) popup_clock_digital_window_t1

0x9b77,	// (0x00018d62) clock_digital_number_pane_g1

0x9b77,	// (0x00018d62) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001e4c0) clock_digital_number_pane_g

0x9b77,	// (0x00018d62) clock_digital_separator_pane_g1

0x9b77,	// (0x00018d62) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001e4c0) clock_digital_separator_pane_g

0x979d,	// (0x00018988) bg_popup_window_pane_cp04

0xa4e7,	// (0x000196d2) heading_pane_cp03

0xa4ef,	// (0x000196da) listscroll_popup_gms_pane

0xa4f7,	// (0x000196e2) grid_large_graphic_popup_pane

0xa501,	// (0x000196ec) listscroll_popup_gms_pane_g1

0xa509,	// (0x000196f4) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e55d) listscroll_popup_gms_pane_g

0x9ef5,	// (0x000190e0) scroll_pane_cp014

0xa511,	// (0x000196fc) cell_large_graphic_popup_pane_ParamLimits

0xa511,	// (0x000196fc) cell_large_graphic_popup_pane

0xa529,	// (0x00019714) cell_large_graphic_popup_pane_g1_ParamLimits

0xa529,	// (0x00019714) cell_large_graphic_popup_pane_g1

0xa535,	// (0x00019720) cell_large_graphic_popup_pane_g2_ParamLimits

0xa535,	// (0x00019720) cell_large_graphic_popup_pane_g2

0xa541,	// (0x0001972c) cell_large_graphic_popup_pane_g3_ParamLimits

0xa541,	// (0x0001972c) cell_large_graphic_popup_pane_g3

0xa54e,	// (0x00019739) cell_large_graphic_popup_pane_g4_ParamLimits

0xa54e,	// (0x00019739) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e562) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e562) cell_large_graphic_popup_pane_g

0xa55e,	// (0x00019749) grid_highlight_pane_cp010

0x9b77,	// (0x00018d62) bg_popup_call_pane_g1

0xa568,	// (0x00019753) list_single_graphic_popup_conf_pane_ParamLimits

0xa568,	// (0x00019753) list_single_graphic_popup_conf_pane

0xa57b,	// (0x00019766) list_highlight_pane_cp01

0xa584,	// (0x0001976f) list_single_graphic_popup_conf_pane_g1

0xa58c,	// (0x00019777) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e56b) list_single_graphic_popup_conf_pane_g

0xa594,	// (0x0001977f) list_single_graphic_popup_conf_pane_t1

0xa5a2,	// (0x0001978d) linegrid_cams_pane_g1

0x24ee,	// (0x000116d9) linegrid_cams_pane_g2

0x9c81,	// (0x00018e6c) linegrid_cams_pane_g3

0xa5ab,	// (0x00019796) linegrid_cams_pane_g4

0x24f7,	// (0x000116e2) linegrid_cams_pane_g5

0x2500,	// (0x000116eb) linegrid_cams_pane_g6

0x9d31,	// (0x00018f1c) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e570) linegrid_cams_pane_g

0xa5b4,	// (0x0001979f) popup_clock_analogue_window

0xa5b4,	// (0x0001979f) popup_clock_digital_window

0x979d,	// (0x00018988) popup_phob_thumbnail_window

0x9b77,	// (0x00018d62) call_video_uplink_pane_g1

0xa5bd,	// (0x000197a8) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e57f) call_video_uplink_pane_g

0x9cfe,	// (0x00018ee9) video_uplink_pane

0xa5c5,	// (0x000197b0) mce_image_pane_g1

0x250b,	// (0x000116f6) mce_image_pane_g2

0x2513,	// (0x000116fe) mce_image_pane_g3

0x251b,	// (0x00011706) mce_image_pane_g4

0x2525,	// (0x00011710) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e584) mce_image_pane_g

0xa5cf,	// (0x000197ba) control_top_pane_stacon_cp01_ParamLimits

0xa5cf,	// (0x000197ba) control_top_pane_stacon_cp01

0xa5e3,	// (0x000197ce) uni_indicator_pane_stacon_cp01_ParamLimits

0xa5e3,	// (0x000197ce) uni_indicator_pane_stacon_cp01

0xa5f4,	// (0x000197df) bg_popup_sub_pane_cp03

0x252d,	// (0x00011718) chi_dic_find_pane

0x2535,	// (0x00011720) listscroll_chi_dic_pane

0x253e,	// (0x00011729) main_pane_chidic_g1

0xa5fe,	// (0x000197e9) chi_dic_find_pane_t1

0xa60c,	// (0x000197f7) find_chidic_pane

0xa615,	// (0x00019800) chi_dic_list_pane_ParamLimits

0xa615,	// (0x00019800) chi_dic_list_pane

0xa626,	// (0x00019811) scroll_pane_cp020

0xa62e,	// (0x00019819) find_chidic_pane_t1

0x979d,	// (0x00018988) input_focus_pane_cp06

0x2551,	// (0x0001173c) list_chi_dic_pane_ParamLimits

0x2551,	// (0x0001173c) list_chi_dic_pane

0x2564,	// (0x0001174f) list_chi_dic_pane_t1_ParamLimits

0x2564,	// (0x0001174f) list_chi_dic_pane_t1

0x979d,	// (0x00018988) list_highlight_pane_cp020

0xa63d,	// (0x00019828) bg_cale_heading_pane_g1

0x2577,	// (0x00011762) bg_cale_heading_pane_g2

0x257f,	// (0x0001176a) bg_cale_heading_pane_g3

0x2587,	// (0x00011772) bg_cale_heading_pane_g4

0x2591,	// (0x0001177c) bg_cale_heading_pane_g5

0x259b,	// (0x00011786) bg_cale_heading_pane_g6

0x25a3,	// (0x0001178e) bg_cale_heading_pane_g7

0x25ab,	// (0x00011796) bg_cale_heading_pane_g8

0x25b5,	// (0x000117a0) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e58f) bg_cale_heading_pane_g

0xa63d,	// (0x00019828) bg_cale_side_pane_g1

0x25bf,	// (0x000117aa) bg_cale_side_pane_g2

0x25c7,	// (0x000117b2) bg_cale_side_pane_g3

0x25cf,	// (0x000117ba) bg_cale_side_pane_g4

0x25d7,	// (0x000117c2) bg_cale_side_pane_g5

0x25df,	// (0x000117ca) bg_cale_side_pane_g6

0x25e7,	// (0x000117d2) bg_cale_side_pane_g7

0x25ef,	// (0x000117da) bg_cale_side_pane_g8

0x25f7,	// (0x000117e2) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e5a2) bg_cale_side_pane_g

0x25ff,	// (0x000117ea) popup_call_status_window_ParamLimits

0x25ff,	// (0x000117ea) popup_call_status_window

0xa645,	// (0x00019830) stacon_top_pane

0xa64d,	// (0x00019838) status_pane_ParamLimits

0xa64d,	// (0x00019838) status_pane

0xa662,	// (0x0001984d) status_small_pane

0xa66a,	// (0x00019855) control_pane

0x979d,	// (0x00018988) stacon_bottom_pane

0xa672,	// (0x0001985d) list_single_mce_smart_pane_t1_ParamLimits

0xa672,	// (0x0001985d) list_single_mce_smart_pane_t1

0xa685,	// (0x00019870) list_single_mce_smart_pane_t2_ParamLimits

0xa685,	// (0x00019870) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e5b5) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e5b5) list_single_mce_smart_pane_t

0x2646,	// (0x00011831) compass_pane

0x264f,	// (0x0001183a) main_location2_pane_t1

0x2661,	// (0x0001184c) main_location2_pane_t2

0x2673,	// (0x0001185e) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e5ba) main_location2_pane_t

0xa6a4,	// (0x0001988f) compass_pane_g1_ParamLimits

0xa6a4,	// (0x0001988f) compass_pane_g1

0x26b9,	// (0x000118a4) compass_pane_t1

0x26c8,	// (0x000118b3) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e5c3) compass_pane_t

0x270f,	// (0x000118fa) text_secondary_cp61

0xa722,	// (0x0001990d) navi_pane_cams_g5

0xa79e,	// (0x00019989) navi_pane_im_t1

0xa7ac,	// (0x00019997) navi_pane_mp_g1_ParamLimits

0xa7ac,	// (0x00019997) navi_pane_mp_g1

0xa7c0,	// (0x000199ab) navi_pane_mp_g2_ParamLimits

0xa7c0,	// (0x000199ab) navi_pane_mp_g2

0xa7cc,	// (0x000199b7) navi_pane_mp_g3_ParamLimits

0xa7cc,	// (0x000199b7) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e5d7) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e5d7) navi_pane_mp_g

0xa7d8,	// (0x000199c3) navi_pane_mp_t1

0xa7e6,	// (0x000199d1) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e5de) navi_pane_mp_t

0xa851,	// (0x00019a3c) navi_pane_vt_g1

0xa7d8,	// (0x000199c3) navi_pane_vt_t1

0xa859,	// (0x00019a44) navi_slider_pane

0x9d42,	// (0x00018f2d) zooming_pane

0xa869,	// (0x00019a54) navi_slider_pane_g1

0xa872,	// (0x00019a5d) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e5e5) navi_slider_pane_g

0xa89f,	// (0x00019a8a) aid_levels_zoom

0xa8a7,	// (0x00019a92) zooming_pane_g1

0xa8af,	// (0x00019a9a) zooming_pane_g2

0xa8af,	// (0x00019a9a) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e5f4) zooming_pane_g

0xa8b7,	// (0x00019aa2) level_10_zoom

0xa8c0,	// (0x00019aab) level_11_zoom

0xa8c9,	// (0x00019ab4) level_1_zoom

0xa8d2,	// (0x00019abd) level_2_zoom

0xa8db,	// (0x00019ac6) level_3_zoom

0xa8e4,	// (0x00019acf) level_4_zoom

0xa8ed,	// (0x00019ad8) level_5_zoom

0xa8f6,	// (0x00019ae1) level_6_zoom

0xa8ff,	// (0x00019aea) level_7_zoom

0xa908,	// (0x00019af3) level_8_zoom

0xa911,	// (0x00019afc) level_9_zoom

0xa922,	// (0x00019b0d) popup_phob_thumbnail_window_g1

0xa92a,	// (0x00019b15) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e5fb) popup_phob_thumbnail_window_g

0xbcb1,	// (0x0001ae9c) level_1_location

0xbcb9,	// (0x0001aea4) level_2_location

0xbcc1,	// (0x0001aeac) level_3_location

0xbcc9,	// (0x0001aeb4) level_4_location

0x9d42,	// (0x00018f2d) level_5_location

0x2760,	// (0x0001194b) mce_icon_pane_g1

0x276a,	// (0x00011955) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e600) mce_icon_pane_g

0x2774,	// (0x0001195f) main_mup_pane_g1_ParamLimits

0x2774,	// (0x0001195f) main_mup_pane_g1

0x278a,	// (0x00011975) main_mup_pane_g2_ParamLimits

0x278a,	// (0x00011975) main_mup_pane_g2

0x27a2,	// (0x0001198d) main_mup_pane_g3_ParamLimits

0x27a2,	// (0x0001198d) main_mup_pane_g3

0x27ba,	// (0x000119a5) main_mup_pane_g4_ParamLimits

0x27ba,	// (0x000119a5) main_mup_pane_g4

0x27d2,	// (0x000119bd) main_mup_pane_g5_ParamLimits

0x27d2,	// (0x000119bd) main_mup_pane_g5

0x27ee,	// (0x000119d9) main_mup_pane_g6_ParamLimits

0x27ee,	// (0x000119d9) main_mup_pane_g6

0x2806,	// (0x000119f1) main_mup_pane_g7_ParamLimits

0x2806,	// (0x000119f1) main_mup_pane_g7

0x281e,	// (0x00011a09) main_mup_pane_g8_ParamLimits

0x281e,	// (0x00011a09) main_mup_pane_g8

0x2836,	// (0x00011a21) main_mup_pane_g9_ParamLimits

0x2836,	// (0x00011a21) main_mup_pane_g9

0x2850,	// (0x00011a3b) main_mup_pane_g10_ParamLimits

0x2850,	// (0x00011a3b) main_mup_pane_g10

0x286a,	// (0x00011a55) main_mup_pane_g11_ParamLimits

0x286a,	// (0x00011a55) main_mup_pane_g11

0x287e,	// (0x00011a69) main_mup_pane_g12_ParamLimits

0x287e,	// (0x00011a69) main_mup_pane_g12

0x2894,	// (0x00011a7f) main_mup_pane_g13_ParamLimits

0x2894,	// (0x00011a7f) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e605) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e605) main_mup_pane_g

0x28a8,	// (0x00011a93) main_mup_pane_t1_ParamLimits

0x28a8,	// (0x00011a93) main_mup_pane_t1

0x28c2,	// (0x00011aad) main_mup_pane_t2_ParamLimits

0x28c2,	// (0x00011aad) main_mup_pane_t2

0x28da,	// (0x00011ac5) main_mup_pane_t3_ParamLimits

0x28da,	// (0x00011ac5) main_mup_pane_t3

0x28f2,	// (0x00011add) main_mup_pane_t4_ParamLimits

0x28f2,	// (0x00011add) main_mup_pane_t4

0x2910,	// (0x00011afb) main_mup_pane_t5_ParamLimits

0x2910,	// (0x00011afb) main_mup_pane_t5

0x2925,	// (0x00011b10) main_mup_pane_t6_ParamLimits

0x2925,	// (0x00011b10) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e620) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e620) main_mup_pane_t

0x2937,	// (0x00011b22) mup_progress_pane_ParamLimits

0x2937,	// (0x00011b22) mup_progress_pane

0x2943,	// (0x00011b2e) mup_visualizer_pane_ParamLimits

0x2943,	// (0x00011b2e) mup_visualizer_pane

0x2977,	// (0x00011b62) mup_volume_pane_ParamLimits

0x2977,	// (0x00011b62) mup_volume_pane

0xa932,	// (0x00019b1d) mup_visualizer_pane_g1_ParamLimits

0xa932,	// (0x00019b1d) mup_visualizer_pane_g1

0xa932,	// (0x00019b1d) mup_visualizer_pane_g2_ParamLimits

0xa932,	// (0x00019b1d) mup_visualizer_pane_g2

0xa6a4,	// (0x0001988f) mup_visualizer_pane_g3_ParamLimits

0xa6a4,	// (0x0001988f) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e62d) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e62d) mup_visualizer_pane_g

0x9b77,	// (0x00018d62) mup_volume_pane_g1

0xa948,	// (0x00019b33) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e634) mup_volume_pane_g

0x9b77,	// (0x00018d62) mup_progress_pane_g1

0xa951,	// (0x00019b3c) mup_progress_pane_g2

0xa95a,	// (0x00019b45) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e639) mup_progress_pane_g

0x979d,	// (0x00018988) bg_popup_window_pane_cp05

0xa963,	// (0x00019b4e) heading_pane_cp02_ParamLimits

0xa963,	// (0x00019b4e) heading_pane_cp02

0xa97d,	// (0x00019b68) list_popup_blid_pane

0xa985,	// (0x00019b70) list_blid_sat_info_pane_ParamLimits

0xa985,	// (0x00019b70) list_blid_sat_info_pane

0xa998,	// (0x00019b83) list_blid_sat_info_pane_g1

0xa9a0,	// (0x00019b8b) list_blid_sat_info_pane_t1

0x2a8d,	// (0x00011c78) mup_equalizer_pane_ParamLimits

0x2a8d,	// (0x00011c78) mup_equalizer_pane

0x2aa6,	// (0x00011c91) mup_equalizer_pane_cp1_ParamLimits

0x2aa6,	// (0x00011c91) mup_equalizer_pane_cp1

0x2ac3,	// (0x00011cae) mup_equalizer_pane_cp2_ParamLimits

0x2ac3,	// (0x00011cae) mup_equalizer_pane_cp2

0x2ae0,	// (0x00011ccb) mup_equalizer_pane_cp3_ParamLimits

0x2ae0,	// (0x00011ccb) mup_equalizer_pane_cp3

0x2b01,	// (0x00011cec) mup_equalizer_pane_cp4_ParamLimits

0x2b01,	// (0x00011cec) mup_equalizer_pane_cp4

0x2b22,	// (0x00011d0d) mup_equalizer_pane_cp5

0x2b36,	// (0x00011d21) mup_equalizer_pane_cp6

0x2b4a,	// (0x00011d35) mup_equalizer_pane_cp7

0xbbcf,	// (0x0001adba) bg_popup_call_poc_act_pane_g9

0xbbd7,	// (0x0001adc2) bg_popup_call_poc_act_pane_g10

0xbbdf,	// (0x0001adca) bg_popup_call_poc_act_pane_g11

0x000a,

0x99f8,	// (0x00018be3) mup_scale_pane

0x9b77,	// (0x00018d62) mup_scale_pane_g1

0xa9ae,	// (0x00019b99) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e655) mup_scale_pane_g

0xa9d2,	// (0x00019bbd) msg_data_pane

0xa9da,	// (0x00019bc5) scroll_pane_cp017

0x2b70,	// (0x00011d5b) bg_list_pane_cp04_ParamLimits

0x2b70,	// (0x00011d5b) bg_list_pane_cp04

0xa9e2,	// (0x00019bcd) msg_data_pane_g1

0x2b94,	// (0x00011d7f) msg_data_pane_g2

0x2b9c,	// (0x00011d87) msg_data_pane_g3

0x2ba4,	// (0x00011d8f) msg_data_pane_g4

0x2bac,	// (0x00011d97) msg_data_pane_g5

0x2bb4,	// (0x00011d9f) msg_data_pane_g6

0x2bbc,	// (0x00011da7) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e664) msg_data_pane_g

0x2bc4,	// (0x00011daf) msg_text_pane_ParamLimits

0x2bc4,	// (0x00011daf) msg_text_pane

0x2beb,	// (0x00011dd6) qrid_highlight_pane_cp011_ParamLimits

0x2beb,	// (0x00011dd6) qrid_highlight_pane_cp011

0x979d,	// (0x00018988) msg_body_pane

0x979d,	// (0x00018988) msg_header_pane

0xa9f3,	// (0x00019bde) input_focus_pane_cp07

0xaa08,	// (0x00019bf3) msg_header_pane_t1_ParamLimits

0xaa08,	// (0x00019bf3) msg_header_pane_t1

0xaa1a,	// (0x00019c05) msg_header_pane_t2_ParamLimits

0xaa1a,	// (0x00019c05) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e678) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e678) msg_header_pane_t

0xaa2c,	// (0x00019c17) msg_body_pane_g1

0x2c0f,	// (0x00011dfa) msg_body_pane_t1_ParamLimits

0x2c0f,	// (0x00011dfa) msg_body_pane_t1

0xaa34,	// (0x00019c1f) msg_body_pane_t2_ParamLimits

0xaa34,	// (0x00019c1f) msg_body_pane_t2

0xaa46,	// (0x00019c31) msg_body_pane_t3_ParamLimits

0xaa46,	// (0x00019c31) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e67d) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e67d) msg_body_pane_t

0x2c7a,	// (0x00011e65) main_viewer_pane_g1_ParamLimits

0x2c7a,	// (0x00011e65) main_viewer_pane_g1

0x2c88,	// (0x00011e73) main_viewer_pane_g2_ParamLimits

0x2c88,	// (0x00011e73) main_viewer_pane_g2

0x2c96,	// (0x00011e81) main_viewer_pane_g3_ParamLimits

0x2c96,	// (0x00011e81) main_viewer_pane_g3

0x2ca5,	// (0x00011e90) main_viewer_pane_g4_ParamLimits

0x2ca5,	// (0x00011e90) main_viewer_pane_g4

0xaa70,	// (0x00019c5b) main_viewer_pane_g5_ParamLimits

0xaa70,	// (0x00019c5b) main_viewer_pane_g5

0xaa70,	// (0x00019c5b) main_viewer_pane_g7_ParamLimits

0xaa70,	// (0x00019c5b) main_viewer_pane_g7

0xaa82,	// (0x00019c6d) main_viewer_pane_g8_ParamLimits

0xaa82,	// (0x00019c6d) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e68d) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e68d) main_viewer_pane_g

0xaa9a,	// (0x00019c85) viewer_content_pane_ParamLimits

0xaa9a,	// (0x00019c85) viewer_content_pane

0x2ce1,	// (0x00011ecc) main_postcard_pane_g1_ParamLimits

0x2ce1,	// (0x00011ecc) main_postcard_pane_g1

0x2cf7,	// (0x00011ee2) main_postcard_pane_g2_ParamLimits

0x2cf7,	// (0x00011ee2) main_postcard_pane_g2

0x2d0d,	// (0x00011ef8) main_postcard_pane_g3_ParamLimits

0x2d0d,	// (0x00011ef8) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e69e) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e69e) main_postcard_pane_g

0x2d24,	// (0x00011f0f) main_postcard_pane_g4

0xbe05,	// (0x0001aff0) smil_status_volume_pane_g2

0x2d67,	// (0x00011f52) postcard_pane_ParamLimits

0x2d67,	// (0x00011f52) postcard_pane

0xaaa8,	// (0x00019c93) postcard_pane_g1_ParamLimits

0xaaa8,	// (0x00019c93) postcard_pane_g1

0x2da9,	// (0x00011f94) postcard_pane_g2_ParamLimits

0x2da9,	// (0x00011f94) postcard_pane_g2

0x2db5,	// (0x00011fa0) postcard_pane_g3_ParamLimits

0x2db5,	// (0x00011fa0) postcard_pane_g3

0xaab6,	// (0x00019ca1) postcard_pane_g4_ParamLimits

0xaab6,	// (0x00019ca1) postcard_pane_g4

0x2dc1,	// (0x00011fac) postcard_pane_g5_ParamLimits

0x2dc1,	// (0x00011fac) postcard_pane_g5

0x2dd6,	// (0x00011fc1) postcard_pane_g6_ParamLimits

0x2dd6,	// (0x00011fc1) postcard_pane_g6

0xaaa8,	// (0x00019c93) postcard_pane_g7_ParamLimits

0xaaa8,	// (0x00019c93) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e6ab) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e6ab) postcard_pane_g

0x2dea,	// (0x00011fd5) main_mp2_pane_g1_ParamLimits

0x2dea,	// (0x00011fd5) main_mp2_pane_g1

0x2df6,	// (0x00011fe1) main_mp2_pane_g2_ParamLimits

0x2df6,	// (0x00011fe1) main_mp2_pane_g2

0x2e02,	// (0x00011fed) main_mp2_pane_g3_ParamLimits

0x2e02,	// (0x00011fed) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e6ba) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e6ba) main_mp2_pane_g

0x2e0e,	// (0x00011ff9) main_mp2_pane_t1_ParamLimits

0x2e0e,	// (0x00011ff9) main_mp2_pane_t1

0x2e23,	// (0x0001200e) main_mp2_pane_t2_ParamLimits

0x2e23,	// (0x0001200e) main_mp2_pane_t2

0x2e35,	// (0x00012020) main_mp2_pane_t3_ParamLimits

0x2e35,	// (0x00012020) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e6c1) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e6c1) main_mp2_pane_t

0xaac4,	// (0x00019caf) pec_content_pane_ParamLimits

0xaac4,	// (0x00019caf) pec_content_pane

0x9ef5,	// (0x000190e0) scroll_pane_cp015

0xaad6,	// (0x00019cc1) pec_attribute_pane_ParamLimits

0xaad6,	// (0x00019cc1) pec_attribute_pane

0x2e47,	// (0x00012032) pec_content_pane_g1_ParamLimits

0x2e47,	// (0x00012032) pec_content_pane_g1

0xaae6,	// (0x00019cd1) pec_content_pane_t1_ParamLimits

0xaae6,	// (0x00019cd1) pec_content_pane_t1

0xaaf8,	// (0x00019ce3) pec_content_pane_t2_ParamLimits

0xaaf8,	// (0x00019ce3) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e6c8) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e6c8) pec_content_pane_t

0x2e53,	// (0x0001203e) list_single_graphic_pane_cp01_ParamLimits

0x2e53,	// (0x0001203e) list_single_graphic_pane_cp01

0x99f8,	// (0x00018be3) bg_popup_sub_pane_cp04

0xab0a,	// (0x00019cf5) popup_mup_playback_window_g1

0xab16,	// (0x00019d01) popup_mup_playback_window_t1

0xab2b,	// (0x00019d16) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e6cd) popup_mup_playback_window_t

0xab62,	// (0x00019d4d) main_image_pane_g1_ParamLimits

0xab62,	// (0x00019d4d) main_image_pane_g1

0xaba5,	// (0x00019d90) scroll_pane_cp018_ParamLimits

0xaba5,	// (0x00019d90) scroll_pane_cp018

0xabbd,	// (0x00019da8) scroll_pane_cp016_ParamLimits

0xabbd,	// (0x00019da8) scroll_pane_cp016

0x2f22,	// (0x0001210d) smil2_image_pane_ParamLimits

0x2f22,	// (0x0001210d) smil2_image_pane

0x2f56,	// (0x00012141) smil2_root_pane_ParamLimits

0x2f56,	// (0x00012141) smil2_root_pane

0x2f8e,	// (0x00012179) smil2_text_pane_ParamLimits

0x2f8e,	// (0x00012179) smil2_text_pane

0x979d,	// (0x00018988) bg_list_pane_cp06

0xabf9,	// (0x00019de4) grid_radio_pane

0x979d,	// (0x00018988) bg_popup_window_pane_cp06

0xac01,	// (0x00019dec) main_fmradio_pane_t1

0xa4e7,	// (0x000196d2) heading_pane_cp04

0xac0f,	// (0x00019dfa) main_fmradio_pane_t2

0xbbe7,	// (0x0001add2) popup_cale_lunar_info_window_g1

0xac1d,	// (0x00019e08) main_fmradio_pane_t3

0xbbef,	// (0x0001adda) popup_cale_lunar_info_window_g2

0xac2b,	// (0x00019e16) main_fmradio_pane_t4

0x0001,

0xac39,	// (0x00019e24) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0001e7a8) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e6e2) main_fmradio_pane_t

0xac47,	// (0x00019e32) wait_bar_pane_cp03

0xac4f,	// (0x00019e3a) cell_fmradio_pane_ParamLimits

0xac4f,	// (0x00019e3a) cell_fmradio_pane

0xaaa8,	// (0x00019c93) cell_fmradio_pane_g1_ParamLimits

0xaaa8,	// (0x00019c93) cell_fmradio_pane_g1

0x979d,	// (0x00018988) grid_highlight_pane_cp011

0xac62,	// (0x00019e4d) poc_content_pane_ParamLimits

0xac62,	// (0x00019e4d) poc_content_pane

0xac74,	// (0x00019e5f) scroll_pane_cp019

0x300e,	// (0x000121f9) popup_call_poc_act_window_ParamLimits

0x300e,	// (0x000121f9) popup_call_poc_act_window

0x3032,	// (0x0001221d) popup_call_poc_inact_window_ParamLimits

0x3032,	// (0x0001221d) popup_call_poc_inact_window

0xf594,	// (0x0001e77f) bg_popup_call_poc_act_pane_g

0xbb5f,	// (0x0001ad4a) bg_popup_call_poc_inact_pane_g1

0xbb67,	// (0x0001ad52) bg_popup_call_poc_inact_pane_g2

0xac7c,	// (0x00019e67) popup_call_poc_act_window_g2

0xbb6f,	// (0x0001ad5a) bg_popup_call_poc_inact_pane_g3

0xbb77,	// (0x0001ad62) bg_popup_call_poc_inact_pane_g4

0xbb7f,	// (0x0001ad6a) bg_popup_call_poc_inact_pane_g5

0xac84,	// (0x00019e6f) popup_call_poc_act_window_t1_ParamLimits

0xac84,	// (0x00019e6f) popup_call_poc_act_window_t1

0xacac,	// (0x00019e97) popup_call_poc_act_window_t2_ParamLimits

0xacac,	// (0x00019e97) popup_call_poc_act_window_t2

0xacd4,	// (0x00019ebf) popup_call_poc_act_window_t3_ParamLimits

0xacd4,	// (0x00019ebf) popup_call_poc_act_window_t3

0xacfc,	// (0x00019ee7) popup_call_poc_act_window_t4_ParamLimits

0xacfc,	// (0x00019ee7) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e6ed) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e6ed) popup_call_poc_act_window_t

0xbb87,	// (0x0001ad72) bg_popup_call_poc_inact_pane_g6

0xbb8f,	// (0x0001ad7a) bg_popup_call_poc_inact_pane_g7

0xbb97,	// (0x0001ad82) bg_popup_call_poc_inact_pane_g8

0xad0e,	// (0x00019ef9) popup_call_poc_inact_window_g2

0xbb9f,	// (0x0001ad8a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0001e76c) bg_popup_call_poc_inact_pane_g

0xad16,	// (0x00019f01) popup_call_poc_inact_window_t1_ParamLimits

0xad16,	// (0x00019f01) popup_call_poc_inact_window_t1

0xad2b,	// (0x00019f16) popup_call_poc_inact_window_t2_ParamLimits

0xad2b,	// (0x00019f16) popup_call_poc_inact_window_t2

0xad40,	// (0x00019f2b) popup_call_poc_inact_window_t3_ParamLimits

0xad40,	// (0x00019f2b) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e6f6) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e6f6) popup_call_poc_inact_window_t

0xbd78,	// (0x0001af63) context_pane_ParamLimits

0x3853,	// (0x00012a3e) signal_pane_ParamLimits

0x9d42,	// (0x00018f2d) main_call2_pane

0xbd51,	// (0x0001af3c) popup_phob_thumbnail2_window_ParamLimits

0xbd51,	// (0x0001af3c) popup_phob_thumbnail2_window

0xaa58,	// (0x00019c43) aid_hotspot_pointer_arrow_pane

0xaa60,	// (0x00019c4b) aid_hotspot_pointer_hand_pane

0x337d,	// (0x00012568) phob_pre_status_pane_g5

0x0e98,	// (0x00010083) cams_zoom_pane_ParamLimits

0x0ea7,	// (0x00010092) image_vga_pane_ParamLimits

0x0ec1,	// (0x000100ac) main_camera_pane_g1_ParamLimits

0x0ed3,	// (0x000100be) main_camera_pane_g2_ParamLimits

0x0ee3,	// (0x000100ce) main_camera_pane_g3_ParamLimits

0x0ef5,	// (0x000100e0) main_camera_pane_g4_ParamLimits

0x0f07,	// (0x000100f2) main_camera_pane_g5_ParamLimits

0x0f19,	// (0x00010104) main_camera_pane_g6_ParamLimits

0x0f2b,	// (0x00010116) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001e3f5) main_camera_pane_g_ParamLimits

0x0f3d,	// (0x00010128) main_camera_pane_t1_ParamLimits

0x0f53,	// (0x0001013e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001e406) main_camera_pane_t_ParamLimits

0x99f8,	// (0x00018be3) bg_popup_preview_window_pane_cp01_ParamLimits

0x99f8,	// (0x00018be3) bg_popup_preview_window_pane_cp01

0xad55,	// (0x00019f40) popup_phob_thumbnail2_window_g1_ParamLimits

0xad55,	// (0x00019f40) popup_phob_thumbnail2_window_g1

0x979d,	// (0x00018988) call2_cli_visual_pane

0x3066,	// (0x00012251) popup_call2_audio_conf_window_ParamLimits

0x3066,	// (0x00012251) popup_call2_audio_conf_window

0x3086,	// (0x00012271) popup_call2_audio_first_window_ParamLimits

0x3086,	// (0x00012271) popup_call2_audio_first_window

0x311c,	// (0x00012307) popup_call2_audio_in_window_ParamLimits

0x311c,	// (0x00012307) popup_call2_audio_in_window

0x3164,	// (0x0001234f) popup_call2_audio_out_window_ParamLimits

0x3164,	// (0x0001234f) popup_call2_audio_out_window

0x31ce,	// (0x000123b9) popup_call2_audio_second_window_ParamLimits

0x31ce,	// (0x000123b9) popup_call2_audio_second_window

0x3234,	// (0x0001241f) popup_call2_audio_wait_window_ParamLimits

0x3234,	// (0x0001241f) popup_call2_audio_wait_window

0x979d,	// (0x00018988) bg_popup_call2_act_pane_cp03

0x99da,	// (0x00018bc5) list_conf_pane_cp

0xad61,	// (0x00019f4c) popup_call2_audio_conf_window_t1

0xad6f,	// (0x00019f5a) list_single_graphic_popup_conf2_pane_ParamLimits

0xad6f,	// (0x00019f5a) list_single_graphic_popup_conf2_pane

0xa57b,	// (0x00019766) list_highlight_pane_cp04

0xad82,	// (0x00019f6d) list_single_graphic_popup_conf2_pane_g1

0xa58c,	// (0x00019777) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e6fd) list_single_graphic_popup_conf2_pane_g

0xad8c,	// (0x00019f77) list_single_graphic_popup_conf2_pane_t1

0xad9a,	// (0x00019f85) bg_popup_call2_act_pane_cp01_ParamLimits

0xad9a,	// (0x00019f85) bg_popup_call2_act_pane_cp01

0xae24,	// (0x0001a00f) call_type_pane_cp05_ParamLimits

0xae24,	// (0x0001a00f) call_type_pane_cp05

0xae78,	// (0x0001a063) popup_call2_audio_second_window_g1_ParamLimits

0xae78,	// (0x0001a063) popup_call2_audio_second_window_g1

0xaecc,	// (0x0001a0b7) popup_call2_audio_second_window_g2_ParamLimits

0xaecc,	// (0x0001a0b7) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e702) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e702) popup_call2_audio_second_window_g

0xaf31,	// (0x0001a11c) popup_call2_audio_second_window_t1_ParamLimits

0xaf31,	// (0x0001a11c) popup_call2_audio_second_window_t1

0xafec,	// (0x0001a1d7) popup_call2_audio_second_window_t2_ParamLimits

0xafec,	// (0x0001a1d7) popup_call2_audio_second_window_t2

0xb03f,	// (0x0001a22a) popup_call2_audio_second_window_t3_ParamLimits

0xb03f,	// (0x0001a22a) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e709) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e709) popup_call2_audio_second_window_t

0x979d,	// (0x00018988) bg_popup_call2_in_pane_cp02

0x97a7,	// (0x00018992) call_type_pane_cp04

0x97af,	// (0x0001899a) popup_call2_audio_wait_window_g1

0x97b7,	// (0x000189a2) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001e2e4) popup_call2_audio_wait_window_g

0x97bf,	// (0x000189aa) popup_call2_audio_wait_window_t3

0xb132,	// (0x0001a31d) bg_popup_call2_act_pane_ParamLimits

0xb132,	// (0x0001a31d) bg_popup_call2_act_pane

0xb1f2,	// (0x0001a3dd) call_type_pane_cp03_ParamLimits

0xb1f2,	// (0x0001a3dd) call_type_pane_cp03

0xb256,	// (0x0001a441) popup_call2_audio_first_window_g1_ParamLimits

0xb256,	// (0x0001a441) popup_call2_audio_first_window_g1

0xb2c6,	// (0x0001a4b1) popup_call2_audio_first_window_g2_ParamLimits

0xb2c6,	// (0x0001a4b1) popup_call2_audio_first_window_g2

0xa932,	// (0x00019b1d) popup_call2_audio_first_window_g3_ParamLimits

0xa932,	// (0x00019b1d) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e712) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e712) popup_call2_audio_first_window_g

0xb3a4,	// (0x0001a58f) popup_call2_audio_first_window_t1_ParamLimits

0xb3a4,	// (0x0001a58f) popup_call2_audio_first_window_t1

0xb4a7,	// (0x0001a692) popup_call2_audio_first_window_t4_ParamLimits

0xb4a7,	// (0x0001a692) popup_call2_audio_first_window_t4

0xb58a,	// (0x0001a775) popup_call2_audio_first_window_t5_ParamLimits

0xb58a,	// (0x0001a775) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e71d) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e71d) popup_call2_audio_first_window_t

0x99f0,	// (0x00018bdb) bg_popup_call2_act_pane_g1

0xbbf7,	// (0x0001ade2) popup_cale_lunar_info_window_t1

0xbc05,	// (0x0001adf0) popup_cale_lunar_info_window_t2

0xbc13,	// (0x0001adfe) popup_cale_lunar_info_window_t3

0x979d,	// (0x00018988) bg_popup_call2_bubble_pane

0xb68b,	// (0x0001a876) bg_popup_call2_in_pane_cp01_ParamLimits

0xb68b,	// (0x0001a876) bg_popup_call2_in_pane_cp01

0x9479,	// (0x00018664) call_type_pane_cp02

0xb6d3,	// (0x0001a8be) popup_call2_audio_out_window_g1_ParamLimits

0xb6d3,	// (0x0001a8be) popup_call2_audio_out_window_g1

0xb6ff,	// (0x0001a8ea) popup_call2_audio_out_window_g2_ParamLimits

0xb6ff,	// (0x0001a8ea) popup_call2_audio_out_window_g2

0xb727,	// (0x0001a912) popup_call2_audio_out_window_g3_ParamLimits

0xb727,	// (0x0001a912) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e726) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e726) popup_call2_audio_out_window_g

0xb762,	// (0x0001a94d) popup_call2_audio_out_window_t1_ParamLimits

0xb762,	// (0x0001a94d) popup_call2_audio_out_window_t1

0xb7c1,	// (0x0001a9ac) popup_call2_audio_out_window_t2_ParamLimits

0xb7c1,	// (0x0001a9ac) popup_call2_audio_out_window_t2

0xb815,	// (0x0001aa00) popup_call2_audio_out_window_t3_ParamLimits

0xb815,	// (0x0001aa00) popup_call2_audio_out_window_t3

0xb82b,	// (0x0001aa16) popup_call2_audio_out_window_t4_ParamLimits

0xb82b,	// (0x0001aa16) popup_call2_audio_out_window_t4

0xb841,	// (0x0001aa2c) popup_call2_audio_out_window_t5_ParamLimits

0xb841,	// (0x0001aa2c) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e72f) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e72f) popup_call2_audio_out_window_t

0xb8a5,	// (0x0001aa90) bg_popup_call2_in_pane_ParamLimits

0xb8a5,	// (0x0001aa90) bg_popup_call2_in_pane

0xb901,	// (0x0001aaec) popup_call2_audio_in_window_g1_ParamLimits

0xb901,	// (0x0001aaec) popup_call2_audio_in_window_g1

0xb939,	// (0x0001ab24) popup_call2_audio_in_window_g2_ParamLimits

0xb939,	// (0x0001ab24) popup_call2_audio_in_window_g2

0xb971,	// (0x0001ab5c) popup_call2_audio_in_window_g3_ParamLimits

0xb971,	// (0x0001ab5c) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e73c) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e73c) popup_call2_audio_in_window_g

0xb9c9,	// (0x0001abb4) popup_call2_audio_in_window_t1_ParamLimits

0xb9c9,	// (0x0001abb4) popup_call2_audio_in_window_t1

0xba49,	// (0x0001ac34) popup_call2_audio_in_window_t2_ParamLimits

0xba49,	// (0x0001ac34) popup_call2_audio_in_window_t2

0xbac9,	// (0x0001acb4) popup_call2_audio_in_window_t3_ParamLimits

0xbac9,	// (0x0001acb4) popup_call2_audio_in_window_t3

0xbae3,	// (0x0001acce) popup_call2_audio_in_window_t4_ParamLimits

0xbae3,	// (0x0001acce) popup_call2_audio_in_window_t4

0xbaf5,	// (0x0001ace0) popup_call2_audio_in_window_t5_ParamLimits

0xbaf5,	// (0x0001ace0) popup_call2_audio_in_window_t5

0xbb0a,	// (0x0001acf5) popup_call2_audio_in_window_t6_ParamLimits

0xbb0a,	// (0x0001acf5) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e745) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e745) popup_call2_audio_in_window_t

0x99f0,	// (0x00018bdb) bg_popup_call2_in_pane_g1

0xbc21,	// (0x0001ae0c) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0001e7ad) popup_cale_lunar_info_window_t

0x99f8,	// (0x00018be3) bg_popup_call2_rect_pane_ParamLimits

0x99f8,	// (0x00018be3) bg_popup_call2_rect_pane

0x979d,	// (0x00018988) call2_cli_visual_graphic_pane

0x979d,	// (0x00018988) call2_cli_visual_text_pane

0xbe18,	// (0x0001b003) smil_status_volume_pane_g3

0x0002,

0x9b77,	// (0x00018d62) call2_cli_visual_graphic_pane_g1

0x9b77,	// (0x00018d62) call2_cli_visual_graphic_pane_g2

0x9b77,	// (0x00018d62) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e752) call2_cli_visual_graphic_pane_g

0xbb1f,	// (0x0001ad0a) bg_popup_call2_rect_pane_g1

0x9c1f,	// (0x00018e0a) bg_popup_call2_rect_pane_g2

0xbb27,	// (0x0001ad12) bg_popup_call2_rect_pane_g3

0xbb2f,	// (0x0001ad1a) bg_popup_call2_rect_pane_g4

0xbb37,	// (0x0001ad22) bg_popup_call2_rect_pane_g5

0xbb3f,	// (0x0001ad2a) bg_popup_call2_rect_pane_g6

0xbb47,	// (0x0001ad32) bg_popup_call2_rect_pane_g7

0xbb4f,	// (0x0001ad3a) bg_popup_call2_rect_pane_g8

0xbb57,	// (0x0001ad42) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e759) bg_popup_call2_rect_pane_g

0xbb5f,	// (0x0001ad4a) bg_popup_call2_bubble_pane_g1

0xbb67,	// (0x0001ad52) bg_popup_call2_bubble_pane_g2

0xbb6f,	// (0x0001ad5a) bg_popup_call2_bubble_pane_g3

0xbb77,	// (0x0001ad62) bg_popup_call2_bubble_pane_g4

0xbb7f,	// (0x0001ad6a) bg_popup_call2_bubble_pane_g5

0xbb87,	// (0x0001ad72) bg_popup_call2_bubble_pane_g6

0xbb8f,	// (0x0001ad7a) bg_popup_call2_bubble_pane_g7

0xbb97,	// (0x0001ad82) bg_popup_call2_bubble_pane_g8

0xbb9f,	// (0x0001ad8a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e76c) bg_popup_call2_bubble_pane_g

0x07da,	// (0x0000f9c5) aid_cale_week_size_cell_pane

0x0f6b,	// (0x00010156) aid_cams_cif_uncrop_pane_ParamLimits

0x0f6b,	// (0x00010156) aid_cams_cif_uncrop_pane

0x1120,	// (0x0001030b) aid_cams_size_cell_ParamLimits

0x1120,	// (0x0001030b) aid_cams_size_cell

0x1134,	// (0x0001031f) grid_cams_pane_ParamLimits

0x114e,	// (0x00010339) linegrid_cams_pane_ParamLimits

0x134a,	// (0x00010535) call_video_pane_t1

0x1368,	// (0x00010553) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001e459) call_video_pane_t

0x1797,	// (0x00010982) aid_cale_month_size_cell_pane_ParamLimits

0x1797,	// (0x00010982) aid_cale_month_size_cell_pane

0xf60b,	// (0x0001e7f6) smil_status_volume_pane_g

0xbe25,	// (0x0001b010) volume_smil_pane_ParamLimits

0x931e,	// (0x00018509) aid_popup2_width_pane

0x0731,	// (0x0000f91c) cell_qdial_pane_g4_ParamLimits

0x0731,	// (0x0000f91c) cell_qdial_pane_g4

0x2699,	// (0x00011884) aid_blid_cardinal_pane_ParamLimits

0x26a5,	// (0x00011890) aid_blid_destination_pane_ParamLimits

0x26a5,	// (0x00011890) aid_blid_destination_pane

0x99f8,	// (0x00018be3) bg_popup_call_poc_act_pane_ParamLimits

0x99f8,	// (0x00018be3) bg_popup_call_poc_act_pane

0x99f8,	// (0x00018be3) bg_popup_call_poc_inact_pane_ParamLimits

0x99f8,	// (0x00018be3) bg_popup_call_poc_inact_pane

0xbba7,	// (0x0001ad92) bg_popup_call_poc_act_pane_g1

0xbbaf,	// (0x0001ad9a) bg_popup_call_poc_act_pane_g2

0xbbb7,	// (0x0001ada2) bg_popup_call_poc_act_pane_g3

0xbb77,	// (0x0001ad62) bg_popup_call_poc_act_pane_g4

0xbb7f,	// (0x0001ad6a) bg_popup_call_poc_act_pane_g5

0xbbbf,	// (0x0001adaa) bg_popup_call_poc_act_pane_g6

0xbb8f,	// (0x0001ad7a) bg_popup_call_poc_act_pane_g7

0xbbc7,	// (0x0001adb2) bg_popup_call_poc_act_pane_g8

0x979d,	// (0x00018988) main_usb_pane

0xbd2c,	// (0x0001af17) popup_cale_lunar_info_window

0x1632,	// (0x0001081d) im_reading_pane_t1_ParamLimits

0x9e4d,	// (0x00019038) list_im_pane_ParamLimits

0x9e5e,	// (0x00019049) scroll_pane_cp07_ParamLimits

0x979d,	// (0x00018988) grid_highlight_pane_cp012

0x99f8,	// (0x00018be3) mup_scale_pane_ParamLimits

0xaaa8,	// (0x00019c93) main_usb_pane_g1_ParamLimits

0xaaa8,	// (0x00019c93) main_usb_pane_g1

0x3292,	// (0x0001247d) main_usb_pane_g2_ParamLimits

0x3292,	// (0x0001247d) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0001e796) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0001e796) main_usb_pane_g

0x32a8,	// (0x00012493) main_usb_pane_t1_ParamLimits

0x32a8,	// (0x00012493) main_usb_pane_t1

0x32ba,	// (0x000124a5) main_usb_pane_t2_ParamLimits

0x32ba,	// (0x000124a5) main_usb_pane_t2

0x32cc,	// (0x000124b7) main_usb_pane_t3_ParamLimits

0x32cc,	// (0x000124b7) main_usb_pane_t3

0x32de,	// (0x000124c9) main_usb_pane_t4_ParamLimits

0x32de,	// (0x000124c9) main_usb_pane_t4

0x32f0,	// (0x000124db) main_usb_pane_t5_ParamLimits

0x32f0,	// (0x000124db) main_usb_pane_t5

0x3302,	// (0x000124ed) main_usb_pane_t6_ParamLimits

0x3302,	// (0x000124ed) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0001e79b) main_usb_pane_t_ParamLimits

0x2646,	// (0x00011831) aid_text_placing

0x264f,	// (0x0001183a) main_location2_pane_t1_ParamLimits

0x2661,	// (0x0001184c) main_location2_pane_t2_ParamLimits

0x2673,	// (0x0001185e) main_location2_pane_t3_ParamLimits

0x2687,	// (0x00011872) main_location2_pane_t4_ParamLimits

0x2687,	// (0x00011872) main_location2_pane_t4

0xf3cf,	// (0x0001e5ba) main_location2_pane_t_ParamLimits

0x9a34,	// (0x00018c1f) find_pinb_pane_g2_ParamLimits

0x9a34,	// (0x00018c1f) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001e30a) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001e30a) find_pinb_pane_g

0x9a40,	// (0x00018c2b) find_pinb_pane_t1_ParamLimits

0x9a52,	// (0x00018c3d) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001e30f) find_pinb_pane_t_ParamLimits

0x979d,	// (0x00018988) main_call3_pane

0x1c7a,	// (0x00010e65) cale_month_day_heading_pane_t1_ParamLimits

0x1d00,	// (0x00010eeb) cale_month_day_heading_pane_t2_ParamLimits

0x1d91,	// (0x00010f7c) cale_month_day_heading_pane_t3_ParamLimits

0x1e22,	// (0x0001100d) cale_month_day_heading_pane_t4_ParamLimits

0x1ebb,	// (0x000110a6) cale_month_day_heading_pane_t5_ParamLimits

0x1f5c,	// (0x00011147) cale_month_day_heading_pane_t6_ParamLimits

0x1ffd,	// (0x000111e8) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001e491) cale_month_day_heading_pane_t_ParamLimits

0xa0b4,	// (0x0001929f) smil_status_volume_pane

0x2d85,	// (0x00011f70) postcard_address_pane_ParamLimits

0x2d85,	// (0x00011f70) postcard_address_pane

0x2d97,	// (0x00011f82) postcard_message_pane_ParamLimits

0x2d97,	// (0x00011f82) postcard_message_pane

0x326e,	// (0x00012459) call2_cli_visual_pane_t1_ParamLimits

0x326e,	// (0x00012459) call2_cli_visual_pane_t1

0x3a82,	// (0x00012c6d) postcard_message_pane_t1_ParamLimits

0x3a82,	// (0x00012c6d) postcard_message_pane_t1

0x3a6b,	// (0x00012c56) postcard_address_pane_t1_ParamLimits

0x3a6b,	// (0x00012c56) postcard_address_pane_t1

0x3a57,	// (0x00012c42) popup_call3_audio_in_window_ParamLimits

0x3a57,	// (0x00012c42) popup_call3_audio_in_window

0x38e4,	// (0x00012acf) bg_popup_call3_in_pane_ParamLimits

0x38e4,	// (0x00012acf) bg_popup_call3_in_pane

0x3958,	// (0x00012b43) popup_call3_audio_in_window_g1_ParamLimits

0x3958,	// (0x00012b43) popup_call3_audio_in_window_g1

0x3978,	// (0x00012b63) popup_call3_audio_in_window_g2_ParamLimits

0x3978,	// (0x00012b63) popup_call3_audio_in_window_g2

0x3998,	// (0x00012b83) popup_call3_audio_in_window_g3_ParamLimits

0x3998,	// (0x00012b83) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0001e7fd) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0001e7fd) popup_call3_audio_in_window_g

0x39c9,	// (0x00012bb4) popup_call3_audio_in_window_t1_ParamLimits

0x39c9,	// (0x00012bb4) popup_call3_audio_in_window_t1

0x3a07,	// (0x00012bf2) popup_call3_audio_in_window_t2_ParamLimits

0x3a07,	// (0x00012bf2) popup_call3_audio_in_window_t2

0x3a45,	// (0x00012c30) popup_call3_audio_in_window_t3_ParamLimits

0x3a45,	// (0x00012c30) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0001e806) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0001e806) popup_call3_audio_in_window_t

0x9d42,	// (0x00018f2d) bg_popup_call3_rect_pane

0xbb1f,	// (0x0001ad0a) bg_popup_call3_rect_pane_g1

0x9c1f,	// (0x00018e0a) bg_popup_call3_rect_pane_g2

0xbb27,	// (0x0001ad12) bg_popup_call3_rect_pane_g3

0xbb2f,	// (0x0001ad1a) bg_popup_call3_rect_pane_g4

0xbb37,	// (0x0001ad22) bg_popup_call3_rect_pane_g5

0xbb3f,	// (0x0001ad2a) bg_popup_call3_rect_pane_g6

0xbb47,	// (0x0001ad32) bg_popup_call3_rect_pane_g7

0x298d,	// (0x00011b78) mup_visualizer_osc_pane

0xa940,	// (0x00019b2b) mup_visualizer_spec_pane

0x3914,	// (0x00012aff) call3_video_qcif_pane_ParamLimits

0x3914,	// (0x00012aff) call3_video_qcif_pane

0x3925,	// (0x00012b10) call3_video_qcif_uncrop_pane_ParamLimits

0x3925,	// (0x00012b10) call3_video_qcif_uncrop_pane

0x3933,	// (0x00012b1e) call3_video_subqcif_pane_ParamLimits

0x3933,	// (0x00012b1e) call3_video_subqcif_pane

0x3947,	// (0x00012b32) call3_video_subqcif_uncrop_pane_ParamLimits

0x3947,	// (0x00012b32) call3_video_subqcif_uncrop_pane

0x39b8,	// (0x00012ba3) popup_call3_audio_in_window_g4_ParamLimits

0x39b8,	// (0x00012ba3) popup_call3_audio_in_window_g4

0x38d3,	// (0x00012abe) mup_spec_half_pane

0x38dc,	// (0x00012ac7) mup_spec_half_pane_cp

0xbdd8,	// (0x0001afc3) mup_osc_middle_pane

0xbde1,	// (0x0001afcc) mup_visualizer_osc_pane_g1

0x38b3,	// (0x00012a9e) mup_spec_bar_pane_ParamLimits

0x38b3,	// (0x00012a9e) mup_spec_bar_pane

0xbdc5,	// (0x0001afb0) mup_spec_bar_pane_g1

0xbdcf,	// (0x0001afba) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e7f1) mup_spec_bar_pane_g

0x07da,	// (0x0000f9c5) aid_cale_week_size_cell_pane_ParamLimits

0x07f4,	// (0x0000f9df) bg_cale_heading_pane_ParamLimits

0x9ca4,	// (0x00018e8f) bg_cale_pane_cp01_ParamLimits

0x0812,	// (0x0000f9fd) cale_week_corner_pane_ParamLimits

0x0831,	// (0x0000fa1c) cale_week_day_heading_pane_ParamLimits

0x0854,	// (0x0000fa3f) cale_week_scroll_pane_g1_ParamLimits

0x086d,	// (0x0000fa58) cale_week_scroll_pane_g2_ParamLimits

0x0885,	// (0x0000fa70) cale_week_scroll_pane_g3_ParamLimits

0x089d,	// (0x0000fa88) cale_week_scroll_pane_g4_ParamLimits

0x08b5,	// (0x0000faa0) cale_week_scroll_pane_g5_ParamLimits

0x08d1,	// (0x0000fabc) cale_week_scroll_pane_g6_ParamLimits

0x08f1,	// (0x0000fadc) cale_week_scroll_pane_g7_ParamLimits

0x0911,	// (0x0000fafc) cale_week_scroll_pane_g8_ParamLimits

0x0935,	// (0x0000fb20) cale_week_scroll_pane_g9_ParamLimits

0x094d,	// (0x0000fb38) cale_week_scroll_pane_g10_ParamLimits

0x0965,	// (0x0000fb50) cale_week_scroll_pane_g11_ParamLimits

0x097d,	// (0x0000fb68) cale_week_scroll_pane_g12_ParamLimits

0x0995,	// (0x0000fb80) cale_week_scroll_pane_g13_ParamLimits

0x0995,	// (0x0000fb80) cale_week_scroll_pane_g14_ParamLimits

0x0995,	// (0x0000fb80) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001e39b) cale_week_scroll_pane_g_ParamLimits

0x09d1,	// (0x0000fbbc) cale_week_time_pane_ParamLimits

0x09f5,	// (0x0000fbe0) grid_cale_week_pane_ParamLimits

0x9cc1,	// (0x00018eac) listscroll_cale_week_pane_t1

0x9cd3,	// (0x00018ebe) scroll_pane_cp08_ParamLimits

0x17f8,	// (0x000109e3) cale_month_corner_pane_ParamLimits

0xa07e,	// (0x00019269) cale_month_pane_t1

0x1c18,	// (0x00010e03) cale_month_week_pane_ParamLimits

0x24b7,	// (0x000116a2) popup_call_status_window_g1_ParamLimits

0x24cb,	// (0x000116b6) popup_call_status_window_g2_ParamLimits

0x24df,	// (0x000116ca) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e541) popup_call_status_window_g_ParamLimits

0xa464,	// (0x0001964f) aid_call2_pane

0x2c01,	// (0x00011dec) msg_header_pane_g1

0x2d85,	// (0x00011f70) postcard_address2_pane_ParamLimits

0x2d85,	// (0x00011f70) postcard_address2_pane

0x2d97,	// (0x00011f82) postcard_message2_pane_ParamLimits

0x2d97,	// (0x00011f82) postcard_message2_pane

0x3861,	// (0x00012a4c) message2_row_pane_ParamLimits

0x3861,	// (0x00012a4c) message2_row_pane

0x3880,	// (0x00012a6b) address2_row_pane_ParamLimits

0x3880,	// (0x00012a6b) address2_row_pane

0xbd93,	// (0x0001af7e) postcard_message2_row_pane_g1

0xbd9b,	// (0x0001af86) postcard_message2_row_pane_t1

0xbd93,	// (0x0001af7e) address2_row_pane_g1

0xbd9b,	// (0x0001af86) address2_row_pane_t1

0x0e15,	// (0x00010000) aid_size_cell_vorec

0x979d,	// (0x00018988) main_rss_pane

0x3893,	// (0x00012a7e) rss_list_single_pane_ParamLimits

0x3893,	// (0x00012a7e) rss_list_single_pane

0xbda9,	// (0x0001af94) rss_list_single_pane_t1

0xbdb7,	// (0x0001afa2) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0001e7ec) rss_list_single_pane_t

0x979d,	// (0x00018988) main_camera2_pane

0x979d,	// (0x00018988) main_video2_pane

0x3afb,	// (0x00012ce6) cams_zoom_pane_cp2_ParamLimits

0x3afb,	// (0x00012ce6) cams_zoom_pane_cp2

0x3b1b,	// (0x00012d06) image2_vga_pane_ParamLimits

0x3b1b,	// (0x00012d06) image2_vga_pane

0x3b6c,	// (0x00012d57) main_camera2_pane_g1_ParamLimits

0x3b6c,	// (0x00012d57) main_camera2_pane_g1

0x3b8c,	// (0x00012d77) main_camera2_pane_g2_ParamLimits

0x3b8c,	// (0x00012d77) main_camera2_pane_g2

0x3bac,	// (0x00012d97) main_camera2_pane_g3_ParamLimits

0x3bac,	// (0x00012d97) main_camera2_pane_g3

0x3bcc,	// (0x00012db7) main_camera2_pane_g4_ParamLimits

0x3bcc,	// (0x00012db7) main_camera2_pane_g4

0x3bec,	// (0x00012dd7) main_camera2_pane_g5_ParamLimits

0x3bec,	// (0x00012dd7) main_camera2_pane_g5

0x3c0c,	// (0x00012df7) main_camera2_pane_g6_ParamLimits

0x3c0c,	// (0x00012df7) main_camera2_pane_g6

0x3c2c,	// (0x00012e17) main_camera2_pane_g7_ParamLimits

0x3c2c,	// (0x00012e17) main_camera2_pane_g7

0x3c4c,	// (0x00012e37) main_camera2_pane_g8_ParamLimits

0x3c4c,	// (0x00012e37) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0001e80d) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0001e80d) main_camera2_pane_g

0x3c8c,	// (0x00012e77) main_camera2_pane_t1_ParamLimits

0x3c8c,	// (0x00012e77) main_camera2_pane_t1

0x3cc1,	// (0x00012eac) main_camera2_pane_t2_ParamLimits

0x3cc1,	// (0x00012eac) main_camera2_pane_t2

0x3ce7,	// (0x00012ed2) main_camera2_pane_t3_ParamLimits

0x3ce7,	// (0x00012ed2) main_camera2_pane_t3

0x3d45,	// (0x00012f30) main_camera2_pane_t4_ParamLimits

0x3d45,	// (0x00012f30) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0001e820) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0001e820) main_camera2_pane_t

0x3dd7,	// (0x00012fc2) cams_zoom_pane_cp4_ParamLimits

0x3dd7,	// (0x00012fc2) cams_zoom_pane_cp4

0x3ded,	// (0x00012fd8) image2_cif_pane_ParamLimits

0x3ded,	// (0x00012fd8) image2_cif_pane

0x3e18,	// (0x00013003) image2_subqcif_pane_ParamLimits

0x3e18,	// (0x00013003) image2_subqcif_pane

0x3e32,	// (0x0001301d) main_video2_pane_g1_ParamLimits

0x3e32,	// (0x0001301d) main_video2_pane_g1

0x3e4c,	// (0x00013037) main_video2_pane_g2_ParamLimits

0x3e4c,	// (0x00013037) main_video2_pane_g2

0x3e62,	// (0x0001304d) main_video2_pane_g3_ParamLimits

0x3e62,	// (0x0001304d) main_video2_pane_g3

0x3e78,	// (0x00013063) main_video2_pane_g4_ParamLimits

0x3e78,	// (0x00013063) main_video2_pane_g4

0x3e8e,	// (0x00013079) main_video2_pane_g5_ParamLimits

0x3e8e,	// (0x00013079) main_video2_pane_g5

0x3ea4,	// (0x0001308f) main_video2_pane_g6_ParamLimits

0x3ea4,	// (0x0001308f) main_video2_pane_g6

0x0005,

0xf644,	// (0x0001e82f) main_video2_pane_g_ParamLimits

0xf644,	// (0x0001e82f) main_video2_pane_g

0x3ebe,	// (0x000130a9) main_video2_pane_t1_ParamLimits

0x3ebe,	// (0x000130a9) main_video2_pane_t1

0x3ee2,	// (0x000130cd) main_video2_pane_t2_ParamLimits

0x3ee2,	// (0x000130cd) main_video2_pane_t2

0x3f30,	// (0x0001311b) main_video2_pane_t3_ParamLimits

0x3f30,	// (0x0001311b) main_video2_pane_t3

0x0002,

0xf651,	// (0x0001e83c) main_video2_pane_t_ParamLimits

0xf651,	// (0x0001e83c) main_video2_pane_t

0x33bd,	// (0x000125a8) call_muted_g2

0x0001,

0xf5f3,	// (0x0001e7de) call_muted_g

0x979d,	// (0x00018988) main_mup2_pane

0x3f78,	// (0x00013163) main_mup2_pane_g1_ParamLimits

0x3f78,	// (0x00013163) main_mup2_pane_g1

0x3f84,	// (0x0001316f) main_mup2_pane_g2_ParamLimits

0x3f84,	// (0x0001316f) main_mup2_pane_g2

0xbf49,	// (0x0001b134) main_mup_pane_g13_cp1

0xbf51,	// (0x0001b13c) mup_volume_pane_cp1

0x3fa0,	// (0x0001318b) main_mup2_pane_g4_ParamLimits

0x3fa0,	// (0x0001318b) main_mup2_pane_g4

0x3fb2,	// (0x0001319d) main_mup2_pane_g5_ParamLimits

0x3fb2,	// (0x0001319d) main_mup2_pane_g5

0x3fc4,	// (0x000131af) main_mup2_pane_g6_ParamLimits

0x3fc4,	// (0x000131af) main_mup2_pane_g6

0x3fd6,	// (0x000131c1) main_mup2_pane_g7_ParamLimits

0x3fd6,	// (0x000131c1) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0001e843) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0001e843) main_mup2_pane_g

0x3fee,	// (0x000131d9) main_mup2_pane_t1_ParamLimits

0x3fee,	// (0x000131d9) main_mup2_pane_t1

0x4004,	// (0x000131ef) main_mup2_pane_t2_ParamLimits

0x4004,	// (0x000131ef) main_mup2_pane_t2

0x401a,	// (0x00013205) main_mup2_pane_t3_ParamLimits

0x401a,	// (0x00013205) main_mup2_pane_t3

0x4030,	// (0x0001321b) main_mup2_pane_t4_ParamLimits

0x4030,	// (0x0001321b) main_mup2_pane_t4

0x4048,	// (0x00013233) main_mup2_pane_t5_ParamLimits

0x4048,	// (0x00013233) main_mup2_pane_t5

0x4060,	// (0x0001324b) main_mup2_pane_t6_ParamLimits

0x4060,	// (0x0001324b) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0001e852) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0001e852) main_mup2_pane_t

0x4090,	// (0x0001327b) mup2_visualizer_pane_ParamLimits

0x4090,	// (0x0001327b) mup2_visualizer_pane

0x40be,	// (0x000132a9) mup_progress_pane_cp_ParamLimits

0x40be,	// (0x000132a9) mup_progress_pane_cp

0xbf2b,	// (0x0001b116) mup_volume_pane_cp_ParamLimits

0xbf2b,	// (0x0001b116) mup_volume_pane_cp

0x40d2,	// (0x000132bd) mup2_visualizer_pane_g1_ParamLimits

0x40d2,	// (0x000132bd) mup2_visualizer_pane_g1

0xbe6a,	// (0x0001b055) mup2_visualizer_pane_g2_ParamLimits

0xbe6a,	// (0x0001b055) mup2_visualizer_pane_g2

0x40e9,	// (0x000132d4) mup2_visualizer_pane_g3_ParamLimits

0x40e9,	// (0x000132d4) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0001e85f) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0001e85f) mup2_visualizer_pane_g

0xabf1,	// (0x00019ddc) aid_size_cell_fmradio

0x356f,	// (0x0001275a) aid_height_parent_landcape

0x9edc,	// (0x000190c7) wml_content_pane_cp

0x9ee4,	// (0x000190cf) wml_tabs_pane

0x9eed,	// (0x000190d8) popup_wml_miniature_window

0x9ef5,	// (0x000190e0) scroll_pane_cp021

0x9f09,	// (0x000190f4) wml_content_pane_comp8

0x979d,	// (0x00018988) bg_popup_sub_pane_cp05

0xbe88,	// (0x0001b073) popup_wml_miniature_window_g1

0xbe90,	// (0x0001b07b) wml_miniature_view_pane

0x40f5,	// (0x000132e0) aid_size_wml_view

0x40fd,	// (0x000132e8) wml_miniature_view_pane_g1

0x4106,	// (0x000132f1) wml_miniature_view_pane_g2

0x410f,	// (0x000132fa) wml_miniature_view_pane_g3

0x4117,	// (0x00013302) wml_miniature_view_pane_g4

0x411f,	// (0x0001330a) wml_miniature_view_pane_g5

0x4127,	// (0x00013312) wml_miniature_view_pane_g6

0x412f,	// (0x0001331a) wml_miniature_view_pane_g7

0x4137,	// (0x00013322) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0001e866) wml_miniature_view_pane_g

0xbe98,	// (0x0001b083) background_graphic_ParamLimits

0xbe98,	// (0x0001b083) background_graphic

0xbea4,	// (0x0001b08f) wml_tabs_2_pane

0xbead,	// (0x0001b098) wml_tabs_3_pane_ParamLimits

0xbead,	// (0x0001b098) wml_tabs_3_pane

0xbebf,	// (0x0001b0aa) wml_tabs_4_pane_ParamLimits

0xbebf,	// (0x0001b0aa) wml_tabs_4_pane

0xbed5,	// (0x0001b0c0) wml_tabs_5_pane_ParamLimits

0xbed5,	// (0x0001b0c0) wml_tabs_5_pane

0xbeef,	// (0x0001b0da) wml_tabs_pane_g2_ParamLimits

0xbeef,	// (0x0001b0da) wml_tabs_pane_g2

0xbf03,	// (0x0001b0ee) wml_tabs_pane_g3_ParamLimits

0xbf03,	// (0x0001b0ee) wml_tabs_pane_g3

0x413f,	// (0x0001332a) wml_tabs_2_active_pane_ParamLimits

0x413f,	// (0x0001332a) wml_tabs_2_active_pane

0x4153,	// (0x0001333e) wml_tabs_2_passive_pane_ParamLimits

0x4153,	// (0x0001333e) wml_tabs_2_passive_pane

0x4167,	// (0x00013352) wml_tabs_3_active_pane_cp_ParamLimits

0x4167,	// (0x00013352) wml_tabs_3_active_pane_cp

0x417c,	// (0x00013367) wml_tabs_3_passive_pane_ParamLimits

0x417c,	// (0x00013367) wml_tabs_3_passive_pane

0x418f,	// (0x0001337a) wml_tabs_3_passive_pane_cp_ParamLimits

0x418f,	// (0x0001337a) wml_tabs_3_passive_pane_cp

0x41a6,	// (0x00013391) tabs_4_active_pane

0x41ae,	// (0x00013399) tabs_4_passive_pane

0x41b8,	// (0x000133a3) tabs_4_passive_pane_cp

0x41c0,	// (0x000133ab) tabs_4_passive_pane_cp2

0x328a,	// (0x00012475) aid_height_text

0x295f,	// (0x00011b4a) mup_volume_cont_pane_ParamLimits

0x295f,	// (0x00011b4a) mup_volume_cont_pane

0x03dd,	// (0x0000f5c8) aid_size_cell_pinb

0x03e7,	// (0x0000f5d2) aid_size_list_pinb

0x40aa,	// (0x00013295) mup2_volume_cont_pane_ParamLimits

0x40aa,	// (0x00013295) mup2_volume_cont_pane

0xbf17,	// (0x0001b102) mup2_volume_cont_pane_g1_ParamLimits

0xbf17,	// (0x0001b102) mup2_volume_cont_pane_g1

0x009f,	// (0x0000f28a) aid_size_cell_touch_ParamLimits

0x009f,	// (0x0000f28a) aid_size_cell_touch

0x02cc,	// (0x0000f4b7) touch_pane_ParamLimits

0x02cc,	// (0x0000f4b7) touch_pane

0x930c,	// (0x000184f7) main_rss2_pane

0xbf59,	// (0x0001b144) listscroll_rss2_pane

0xbf62,	// (0x0001b14d) rss2_navigation_pane

0xbf6a,	// (0x0001b155) list_rss2_pane

0xa626,	// (0x00019811) scroll_pane_cp22

0xbf72,	// (0x0001b15d) rss2_navigation_pane_g1

0xbf7b,	// (0x0001b166) rss2_navigation_pane_g2

0xbf83,	// (0x0001b16e) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0001e877) rss2_navigation_pane_g

0xbf8b,	// (0x0001b176) rss2_navigation_pane_t1

0x41ca,	// (0x000133b5) rss2_list_single_pane_ParamLimits

0x41ca,	// (0x000133b5) rss2_list_single_pane

0xbf99,	// (0x0001b184) rss2_list_single_pane_t2

0xbfa7,	// (0x0001b192) rss2_list_single_pane_t3_ParamLimits

0xbfa7,	// (0x0001b192) rss2_list_single_pane_t3

0xbfc4,	// (0x0001b1af) rss2_list_single_pane_t4

0x22bf,	// (0x000114aa) smil_status_pane_g1

0x937c,	// (0x00018567) main_image2_pane_ParamLimits

0x937c,	// (0x00018567) main_image2_pane

0x3c6c,	// (0x00012e57) main_camera2_pane_g9_ParamLimits

0x3c6c,	// (0x00012e57) main_camera2_pane_g9

0x3d9a,	// (0x00012f85) main_camera2_pane_t5_ParamLimits

0x3d9a,	// (0x00012f85) main_camera2_pane_t5

0xbe3a,	// (0x0001b025) main_camera2_pane_t6_ParamLimits

0xbe3a,	// (0x0001b025) main_camera2_pane_t6

0x41e1,	// (0x000133cc) main_image2_pane_g1_ParamLimits

0x41e1,	// (0x000133cc) main_image2_pane_g1

0x2fc4,	// (0x000121af) smil2_video_pane_ParamLimits

0x2fc4,	// (0x000121af) smil2_video_pane

0x932a,	// (0x00018515) aid_zoom_text_primary_cp

0x9372,	// (0x0001855d) popup_preview_fixed_window

0x9e45,	// (0x00019030) im_reading_pane_g1

0x3ae3,	// (0x00012cce) cams2_bc_adjust_pane_cp_ParamLimits

0x3ae3,	// (0x00012cce) cams2_bc_adjust_pane_cp

0x3dc9,	// (0x00012fb4) cams2_bc_adjust_pane_ParamLimits

0x3dc9,	// (0x00012fb4) cams2_bc_adjust_pane

0xbfd2,	// (0x0001b1bd) cams2_bc_adjust_pane_g1

0xbfda,	// (0x0001b1c5) cams2_slider_pane

0xbfe3,	// (0x0001b1ce) cams2_slider_pane_g1

0xbfec,	// (0x0001b1d7) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0001e87e) cams2_slider_pane_g

0x04bf,	// (0x0000f6aa) calc_display_pane_ParamLimits

0x04e7,	// (0x0000f6d2) calc_paper_pane_ParamLimits

0x050a,	// (0x0000f6f5) grid_calc_pane_ParamLimits

0xa4ca,	// (0x000196b5) popup_clock_digital_window_t1_ParamLimits

0xab8e,	// (0x00019d79) main_image_pane_t1

0x04a1,	// (0x0000f68c) aid_size_cell_calc_ParamLimits

0x04a1,	// (0x0000f68c) aid_size_cell_calc

0x35b5,	// (0x000127a0) popup_blid_sat_info2_window_ParamLimits

0x35b5,	// (0x000127a0) popup_blid_sat_info2_window

0xc00e,	// (0x0001b1f9) aid_size_cell_blid

0xc016,	// (0x0001b201) bg_popup_window_pane_cp07

0xc039,	// (0x0001b224) grid_popup_blid_pane

0xc043,	// (0x0001b22e) heading_pane_cp05_ParamLimits

0xc043,	// (0x0001b22e) heading_pane_cp05

0xc10d,	// (0x0001b2f8) cell_popup_blid_pane_ParamLimits

0xc10d,	// (0x0001b2f8) cell_popup_blid_pane

0xc133,	// (0x0001b31e) cell_popup_blid_pane_g1

0xc13b,	// (0x0001b326) cell_popup_blid_pane_t1

0x407a,	// (0x00013265) mup2_indicator_pane_ParamLimits

0x407a,	// (0x00013265) mup2_indicator_pane

0x9d42,	// (0x00018f2d) mup2_visualizer_osc_pane

0xbe76,	// (0x0001b061) mup2_visualizer_spec_pane_ParamLimits

0xbe76,	// (0x0001b061) mup2_visualizer_spec_pane

0x41f7,	// (0x000133e2) mup2_spec_half_pane

0x4200,	// (0x000133eb) mup2_spec_half_pane_cp

0x4208,	// (0x000133f3) mup2_spec_bar_pane_ParamLimits

0x4208,	// (0x000133f3) mup2_spec_bar_pane

0xbdc5,	// (0x0001afb0) mup2_spec_bar_pane_g1

0xbdcf,	// (0x0001afba) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e7f1) mup2_spec_bar_pane_g

0x4228,	// (0x00013413) mup2_osc_middle_pane

0xbde1,	// (0x0001afcc) mup2_visualizer_osc_pane_g1

0x93aa,	// (0x00018595) popup_number_entry_window_t1_ParamLimits

0x93bd,	// (0x000185a8) popup_number_entry_window_t2_ParamLimits

0x93cf,	// (0x000185ba) popup_number_entry_window_t3_ParamLimits

0x031e,	// (0x0000f509) popup_number_entry_window_t5_ParamLimits

0x031e,	// (0x0000f509) popup_number_entry_window_t5

0xf0ca,	// (0x0001e2b5) popup_number_entry_window_t_ParamLimits

0x93e1,	// (0x000185cc) text_title_cp2_ParamLimits

0xaa68,	// (0x00019c53) aid_hotspot_pointer_text2_pane

0xaa8e,	// (0x00019c79) main_viewer_pane_g9_ParamLimits

0xaa8e,	// (0x00019c79) main_viewer_pane_g9

0xa07e,	// (0x00019269) cale_month_pane_t1_ParamLimits

0xa0e9,	// (0x000192d4) bg_cale_pane_ParamLimits

0xa101,	// (0x000192ec) list_cale_pane_ParamLimits

0xa112,	// (0x000192fd) listscroll_cale_day_pane_t1

0xa124,	// (0x0001930f) scroll_pane_cp09_ParamLimits

0x2995,	// (0x00011b80) main_mup_eq_pane_t1_ParamLimits

0x2995,	// (0x00011b80) main_mup_eq_pane_t1

0x29af,	// (0x00011b9a) main_mup_eq_pane_t2_ParamLimits

0x29af,	// (0x00011b9a) main_mup_eq_pane_t2

0x29c9,	// (0x00011bb4) main_mup_eq_pane_t3_ParamLimits

0x29c9,	// (0x00011bb4) main_mup_eq_pane_t3

0x29e5,	// (0x00011bd0) main_mup_eq_pane_t4_ParamLimits

0x29e5,	// (0x00011bd0) main_mup_eq_pane_t4

0x2a01,	// (0x00011bec) main_mup_eq_pane_t5_ParamLimits

0x2a01,	// (0x00011bec) main_mup_eq_pane_t5

0x2a1d,	// (0x00011c08) main_mup_eq_pane_t6_ParamLimits

0x2a1d,	// (0x00011c08) main_mup_eq_pane_t6

0x2a31,	// (0x00011c1c) main_mup_eq_pane_t7_ParamLimits

0x2a31,	// (0x00011c1c) main_mup_eq_pane_t7

0x2a45,	// (0x00011c30) main_mup_eq_pane_t8_ParamLimits

0x2a45,	// (0x00011c30) main_mup_eq_pane_t8

0x2a59,	// (0x00011c44) main_mup_eq_pane_t9_ParamLimits

0x2a59,	// (0x00011c44) main_mup_eq_pane_t9

0x2a73,	// (0x00011c5e) main_mup_eq_pane_t10_ParamLimits

0x2a73,	// (0x00011c5e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e640) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e640) main_mup_eq_pane_t

0x2b22,	// (0x00011d0d) mup_equalizer_pane_cp5_ParamLimits

0x2b36,	// (0x00011d21) mup_equalizer_pane_cp6_ParamLimits

0x2b4a,	// (0x00011d35) mup_equalizer_pane_cp7_ParamLimits

0x930c,	// (0x000184f7) main_gallery_pane

0xbdea,	// (0x0001afd5) smil2_volume_pane

0xbdf2,	// (0x0001afdd) smil_status_volume_pane_g1_ParamLimits

0xbe05,	// (0x0001aff0) smil_status_volume_pane_g2_ParamLimits

0xbe18,	// (0x0001b003) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0001e7f6) smil_status_volume_pane_g_ParamLimits

0xc016,	// (0x0001b201) bg_popup_window_pane_cp07_ParamLimits

0xc024,	// (0x0001b20f) blid_firmament_pane

0x4231,	// (0x0001341c) aid_size_cell_gallery_ParamLimits

0x4231,	// (0x0001341c) aid_size_cell_gallery

0x4247,	// (0x00013432) grid_gallery_pane_ParamLimits

0x4247,	// (0x00013432) grid_gallery_pane

0x4260,	// (0x0001344b) cell_gallery_pane_ParamLimits

0x4260,	// (0x0001344b) cell_gallery_pane

0xc149,	// (0x0001b334) bg_cell_gallery_focus_pane_ParamLimits

0xc149,	// (0x0001b334) bg_cell_gallery_focus_pane

0xc15b,	// (0x0001b346) cell_gallery_pane_g1_ParamLimits

0xc15b,	// (0x0001b346) cell_gallery_pane_g1

0x42a9,	// (0x00013494) cell_gallery_pane_g2_ParamLimits

0x42a9,	// (0x00013494) cell_gallery_pane_g2

0x42b6,	// (0x000134a1) cell_gallery_pane_g3_ParamLimits

0x42b6,	// (0x000134a1) cell_gallery_pane_g3

0xc167,	// (0x0001b352) cell_gallery_pane_g4_ParamLimits

0xc167,	// (0x0001b352) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0001e8a4) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0001e8a4) cell_gallery_pane_g

0xc173,	// (0x0001b35e) bg_cell_gallery_focus_pane_g1

0xc17b,	// (0x0001b366) bg_cell_gallery_focus_pane_g2

0xc183,	// (0x0001b36e) bg_cell_gallery_focus_pane_g3

0xc18b,	// (0x0001b376) bg_cell_gallery_focus_pane_g4

0xc193,	// (0x0001b37e) bg_cell_gallery_focus_pane_g5

0xc19b,	// (0x0001b386) bg_cell_gallery_focus_pane_g6

0xc1a3,	// (0x0001b38e) bg_cell_gallery_focus_pane_g7

0xc1ab,	// (0x0001b396) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0001e8ad) bg_cell_gallery_focus_pane_g

0xc1b3,	// (0x0001b39e) aid_firma_cardinal

0xc1c7,	// (0x0001b3b2) blid_firmament_pane_t1

0xc1de,	// (0x0001b3c9) blid_firmament_pane_t2

0xc1f5,	// (0x0001b3e0) blid_firmament_pane_t3

0xc20c,	// (0x0001b3f7) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0001e8be) blid_firmament_pane_t

0xc223,	// (0x0001b40e) blid_sat_info_pane

0xc233,	// (0x0001b41e) blid_sat_info_pane_g1

0xc233,	// (0x0001b41e) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0001e8c7) blid_sat_info_pane_g

0xc23d,	// (0x0001b428) blid_sat_info_pane_t1

0xc24b,	// (0x0001b436) smil2_volume_content_pane

0xc254,	// (0x0001b43f) smil2_volume_pane_g1

0x9ba3,	// (0x00018d8e) smil2_volume_content_pane_g1

0xc25c,	// (0x0001b447) smil2_volume_content_pane_g2

0xc265,	// (0x0001b450) smil2_volume_content_pane_g3

0xc26e,	// (0x0001b459) smil2_volume_content_pane_g4

0xc277,	// (0x0001b462) smil2_volume_content_pane_g5

0xc280,	// (0x0001b46b) smil2_volume_content_pane_g6

0xc289,	// (0x0001b474) smil2_volume_content_pane_g7

0xc292,	// (0x0001b47d) smil2_volume_content_pane_g8

0xc29b,	// (0x0001b486) smil2_volume_content_pane_g9

0xc2a4,	// (0x0001b48f) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0001e8cc) smil2_volume_content_pane_g

0x0aa9,	// (0x0000fc94) cale_week_day_heading_pane_t1_ParamLimits

0x0af3,	// (0x0000fcde) cale_week_day_heading_pane_t2_ParamLimits

0x0b42,	// (0x0000fd2d) cale_week_day_heading_pane_t3_ParamLimits

0x0b91,	// (0x0000fd7c) cale_week_day_heading_pane_t4_ParamLimits

0x0be0,	// (0x0000fdcb) cale_week_day_heading_pane_t5_ParamLimits

0x0c37,	// (0x0000fe22) cale_week_day_heading_pane_t6_ParamLimits

0x0c8e,	// (0x0000fe79) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001e3bc) cale_week_day_heading_pane_t_ParamLimits

0x9cf0,	// (0x00018edb) bg_cale_side_pane_ParamLimits

0x0cd8,	// (0x0000fec3) cale_week_time_pane_t1_ParamLimits

0x0cf2,	// (0x0000fedd) cale_week_time_pane_t2_ParamLimits

0x0d0c,	// (0x0000fef7) cale_week_time_pane_t3_ParamLimits

0x0d26,	// (0x0000ff11) cale_week_time_pane_t4_ParamLimits

0x0d40,	// (0x0000ff2b) cale_week_time_pane_t5_ParamLimits

0x0d5a,	// (0x0000ff45) cale_week_time_pane_t6_ParamLimits

0x0d74,	// (0x0000ff5f) cale_week_time_pane_t7_ParamLimits

0x0d94,	// (0x0000ff7f) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001e3cb) cale_week_time_pane_t_ParamLimits

0x0db4,	// (0x0000ff9f) cell_cale_week_pane_g2_ParamLimits

0x9cf0,	// (0x00018edb) bg_cale_side_pane_cp01_ParamLimits

0x20a6,	// (0x00011291) cale_month_week_pane_t1_ParamLimits

0x20bf,	// (0x000112aa) cale_month_week_pane_t2_ParamLimits

0x20d8,	// (0x000112c3) cale_month_week_pane_t3_ParamLimits

0x20f1,	// (0x000112dc) cale_month_week_pane_t4_ParamLimits

0x210a,	// (0x000112f5) cale_month_week_pane_t5_ParamLimits

0x2123,	// (0x0001130e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001e4a0) cale_month_week_pane_t_ParamLimits

0xa090,	// (0x0001927b) cell_cale_month_pane_g1_ParamLimits

0x930c,	// (0x000184f7) main_cale_event_viewer_pane

0x930c,	// (0x000184f7) listscroll_cale_event_viewer_pane

0xc2ad,	// (0x0001b498) list_cale_ev_pane

0xc2b5,	// (0x0001b4a0) scroll_pane_cp023

0xc2c1,	// (0x0001b4ac) field_cale_ev_pane_ParamLimits

0xc2c1,	// (0x0001b4ac) field_cale_ev_pane

0xc2dd,	// (0x0001b4c8) field_cale_ev_content_pane_ParamLimits

0xc2dd,	// (0x0001b4c8) field_cale_ev_content_pane

0xc2e9,	// (0x0001b4d4) field_cale_ev_pane_g1_ParamLimits

0xc2e9,	// (0x0001b4d4) field_cale_ev_pane_g1

0xc2f5,	// (0x0001b4e0) field_cale_ev_pane_g2_ParamLimits

0xc2f5,	// (0x0001b4e0) field_cale_ev_pane_g2

0xc30d,	// (0x0001b4f8) field_cale_ev_pane_g3_ParamLimits

0xc30d,	// (0x0001b4f8) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0001e8e1) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0001e8e1) field_cale_ev_pane_g

0xc325,	// (0x0001b510) field_cale_ev_pane_t1_ParamLimits

0xc325,	// (0x0001b510) field_cale_ev_pane_t1

0xc33c,	// (0x0001b527) field_cale_ev_content_pane_t1_ParamLimits

0xc33c,	// (0x0001b527) field_cale_ev_content_pane_t1

0xa9ea,	// (0x00019bd5) bg_button_pane_cp01

0x07c8,	// (0x0000f9b3) listscroll_cale_week_pane_ParamLimits

0x9c9b,	// (0x00018e86) popup_toolbar_window_cp01

0x9cc1,	// (0x00018eac) listscroll_cale_week_pane_t1_ParamLimits

0x07c8,	// (0x0000f9b3) listscroll_cale_day_pane_ParamLimits

0x9c9b,	// (0x00018e86) popup_toolbar_window_cp02

0xa112,	// (0x000192fd) listscroll_cale_day_pane_t1_ParamLimits

0x07c8,	// (0x0000f9b3) main_cale_month_pane_ParamLimits

0xbd63,	// (0x0001af4e) popup_toolbar_window_cp03_ParamLimits

0xbd63,	// (0x0001af4e) popup_toolbar_window_cp03

0x2e88,	// (0x00012073) main_image_pane_g2_ParamLimits

0x2e88,	// (0x00012073) main_image_pane_g2

0x2e99,	// (0x00012084) main_image_pane_g3_ParamLimits

0x2e99,	// (0x00012084) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e6d2) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e6d2) main_image_pane_g

0xab8e,	// (0x00019d79) main_image_pane_t1_ParamLimits

0x2eaa,	// (0x00012095) main_image_pane_t2_ParamLimits

0x2eaa,	// (0x00012095) main_image_pane_t2

0x2ebc,	// (0x000120a7) main_image_pane_t3_ParamLimits

0x2ebc,	// (0x000120a7) main_image_pane_t3

0x2ee4,	// (0x000120cf) main_image_pane_t4_ParamLimits

0x2ee4,	// (0x000120cf) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e6d9) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e6d9) main_image_pane_t

0x2f04,	// (0x000120ef) popup_image_details_window_cp01

0x2f0e,	// (0x000120f9) popup_toobar_trans_pane_cp01_ParamLimits

0x2f0e,	// (0x000120f9) popup_toobar_trans_pane_cp01

0x368c,	// (0x00012877) popup_image_details_window_ParamLimits

0x368c,	// (0x00012877) popup_image_details_window

0xbd36,	// (0x0001af21) popup_image_focus_window

0x3a9d,	// (0x00012c88) camera2_autofocus_pane_ParamLimits

0x3a9d,	// (0x00012c88) camera2_autofocus_pane

0x930c,	// (0x000184f7) bg_popup_sub_pane_cp06

0xc359,	// (0x0001b544) popup_image_focus_window_g1

0xc361,	// (0x0001b54c) popup_image_focus_window_g2

0xc369,	// (0x0001b554) popup_image_focus_window_g3

0xc371,	// (0x0001b55c) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0001e8e8) popup_image_focus_window_g

0xc379,	// (0x0001b564) popup_image_focus_window_t1

0xc387,	// (0x0001b572) popup_image_focus_window_t2

0xc397,	// (0x0001b582) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0001e8f1) popup_image_focus_window_t

0xc3a5,	// (0x0001b590) camera2_autofocus_pane_g1

0x937c,	// (0x00018567) bg_tb_trans_pane_cp01

0xc3b3,	// (0x0001b59e) popup_image_details_window_g1

0xc3c6,	// (0x0001b5b1) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0001e903) popup_image_details_window_g

0xc3ef,	// (0x0001b5da) popup_image_details_window_t1

0xc401,	// (0x0001b5ec) popup_image_details_window_t2

0xc41a,	// (0x0001b605) popup_image_details_window_t3

0xc42e,	// (0x0001b619) popup_image_details_window_t4

0xc449,	// (0x0001b634) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0001e90a) popup_image_details_window_t

0x9ad0,	// (0x00018cbb) bg_calc_paper_pane_ParamLimits

0x930c,	// (0x000184f7) grid_highlight_pane_cp013

0x9ae4,	// (0x00018ccf) list_calc_pane_ParamLimits

0x9af6,	// (0x00018ce1) scroll_pane_cp024

0x9afe,	// (0x00018ce9) bg_calc_display_pane_ParamLimits

0x0608,	// (0x0000f7f3) calc_display_pane_t1_ParamLimits

0x061a,	// (0x0000f805) calc_display_pane_t2_ParamLimits

0x9b0a,	// (0x00018cf5) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001e33c) calc_display_pane_t_ParamLimits

0x06df,	// (0x0000f8ca) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001e359) cell_calc_pane_g

0x06e8,	// (0x0000f8d3) cell_calc_pane_t1

0x9b81,	// (0x00018d6c) grid_highlight_pane_cp02_ParamLimits

0x9b97,	// (0x00018d82) toolbar_button_pane_cp01_ParamLimits

0x9b97,	// (0x00018d82) toolbar_button_pane_cp01

0xabd3,	// (0x00019dbe) temp_image_control_pane_ParamLimits

0xabd3,	// (0x00019dbe) temp_image_control_pane

0x937c,	// (0x00018567) main_mp3_pane

0xc463,	// (0x0001b64e) temp_image_control_pane_g1_ParamLimits

0xc463,	// (0x0001b64e) temp_image_control_pane_g1

0xc471,	// (0x0001b65c) temp_image_control_pane_g2_ParamLimits

0xc471,	// (0x0001b65c) temp_image_control_pane_g2

0xc483,	// (0x0001b66e) temp_image_control_pane_g3_ParamLimits

0xc483,	// (0x0001b66e) temp_image_control_pane_g3

0x42f3,	// (0x000134de) temp_image_control_pane_g4_ParamLimits

0x42f3,	// (0x000134de) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0001e915) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0001e915) temp_image_control_pane_g

0xc463,	// (0x0001b64e) main_mp3_pane_g1

0x4306,	// (0x000134f1) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0001e91e) main_mp3_pane_g

0xc4c6,	// (0x0001b6b1) main_mp3_pane_t1

0x9d54,	// (0x00018f3f) main_camera_pane_g8_ParamLimits

0x9d54,	// (0x00018f3f) main_camera_pane_g8

0x10c6,	// (0x000102b1) main_video_pane_g7_ParamLimits

0x10c6,	// (0x000102b1) main_video_pane_g7

0xbe58,	// (0x0001b043) main_camera2_pane_t7_ParamLimits

0xbe58,	// (0x0001b043) main_camera2_pane_t7

0x9e9c,	// (0x00019087) scroll_pane_cp025_ParamLimits

0x9e9c,	// (0x00019087) scroll_pane_cp025

0x9eb0,	// (0x0001909b) scroll_pane_cp026_ParamLimits

0x9eb0,	// (0x0001909b) scroll_pane_cp026

0x9ebf,	// (0x000190aa) wml_content_pane_ParamLimits

0x930c,	// (0x000184f7) main_touch_calib_pane

0x43dc,	// (0x000135c7) main_touch_calib_pane_g1

0x43ee,	// (0x000135d9) main_touch_calib_pane_g2

0x4400,	// (0x000135eb) main_touch_calib_pane_g3

0x4412,	// (0x000135fd) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0001e93c) main_touch_calib_pane_g

0x4424,	// (0x0001360f) main_touch_calib_pane_t1

0x443e,	// (0x00013629) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0001e945) main_touch_calib_pane_t

0xa704,	// (0x000198ef) mup_progress_pane_cp02

0xa739,	// (0x00019924) navi_pane_g1

0xa7f4,	// (0x000199df) navi_pane_mp_t3

0x937c,	// (0x00018567) main_mp3_pane_ParamLimits

0x3809,	// (0x000129f4) navi_pane_ParamLimits

0xc463,	// (0x0001b64e) main_mp3_pane_g1_ParamLimits

0x4306,	// (0x000134f1) main_mp3_pane_g2_ParamLimits

0x4314,	// (0x000134ff) main_mp3_pane_g3_ParamLimits

0x4314,	// (0x000134ff) main_mp3_pane_g3

0x4322,	// (0x0001350d) main_mp3_pane_g4_ParamLimits

0x4322,	// (0x0001350d) main_mp3_pane_g4

0xc493,	// (0x0001b67e) main_mp3_pane_g5_ParamLimits

0xc493,	// (0x0001b67e) main_mp3_pane_g5

0xc4a1,	// (0x0001b68c) main_mp3_pane_g6_ParamLimits

0xc4a1,	// (0x0001b68c) main_mp3_pane_g6

0xc4ae,	// (0x0001b699) main_mp3_pane_g7_ParamLimits

0xc4ae,	// (0x0001b699) main_mp3_pane_g7

0xc4ba,	// (0x0001b6a5) main_mp3_pane_g8_ParamLimits

0xc4ba,	// (0x0001b6a5) main_mp3_pane_g8

0xf733,	// (0x0001e91e) main_mp3_pane_g_ParamLimits

0x4330,	// (0x0001351b) main_mp3_pane_t2

0x433e,	// (0x00013529) main_mp3_pane_t3

0xc4d4,	// (0x0001b6bf) main_mp3_pane_t4

0xc4e2,	// (0x0001b6cd) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0001e92f) main_mp3_pane_t

0xc4f0,	// (0x0001b6db) mup_progress_pane_cp01

0x932a,	// (0x00018515) aid_zoom_text_secondary2

0xc2ad,	// (0x0001b498) list_cale_ev2_pane

0xc2b5,	// (0x0001b4a0) scroll_pane_cp023_ParamLimits

0x4494,	// (0x0001367f) field_cale_ev2_pane_ParamLimits

0x4494,	// (0x0001367f) field_cale_ev2_pane

0xc4f8,	// (0x0001b6e3) field_cale_ev2_pane_g1_ParamLimits

0xc4f8,	// (0x0001b6e3) field_cale_ev2_pane_g1

0xc504,	// (0x0001b6ef) field_cale_ev2_pane_g2_ParamLimits

0xc504,	// (0x0001b6ef) field_cale_ev2_pane_g2

0xc51c,	// (0x0001b707) field_cale_ev2_pane_g3_ParamLimits

0xc51c,	// (0x0001b707) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0001e950) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0001e950) field_cale_ev2_pane_g

0xc540,	// (0x0001b72b) field_cale_ev2_pane_t1_ParamLimits

0xc540,	// (0x0001b72b) field_cale_ev2_pane_t1

0xc557,	// (0x0001b742) field_cale_ev2_pane_t2_ParamLimits

0xc557,	// (0x0001b742) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0001e959) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0001e959) field_cale_ev2_pane_t

0x2d3b,	// (0x00011f26) main_postcard_pane_g5_ParamLimits

0x2d3b,	// (0x00011f26) main_postcard_pane_g5

0x2d51,	// (0x00011f3c) main_postcard_pane_g6_ParamLimits

0x2d51,	// (0x00011f3c) main_postcard_pane_g6

0x0e80,	// (0x0001006b) camera2_autofocus_pane_cp_ParamLimits

0x0e80,	// (0x0001006b) camera2_autofocus_pane_cp

0x937c,	// (0x00018567) main_mup3_pane

0x44d6,	// (0x000136c1) main_mup3_pane_g1_ParamLimits

0x44d6,	// (0x000136c1) main_mup3_pane_g1

0x44f8,	// (0x000136e3) main_mup3_pane_g2_ParamLimits

0x44f8,	// (0x000136e3) main_mup3_pane_g2

0x457a,	// (0x00013765) main_mup3_pane_g3_ParamLimits

0x457a,	// (0x00013765) main_mup3_pane_g3

0x45c0,	// (0x000137ab) main_mup3_pane_g4_ParamLimits

0x45c0,	// (0x000137ab) main_mup3_pane_g4

0x4606,	// (0x000137f1) main_mup3_pane_g5_ParamLimits

0x4606,	// (0x000137f1) main_mup3_pane_g5

0x464e,	// (0x00013839) main_mup3_pane_g6_ParamLimits

0x464e,	// (0x00013839) main_mup3_pane_g6

0xc56c,	// (0x0001b757) main_mup3_pane_g7_ParamLimits

0xc56c,	// (0x0001b757) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0001e969) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0001e969) main_mup3_pane_g

0x46cc,	// (0x000138b7) main_mup3_pane_t1_ParamLimits

0x46cc,	// (0x000138b7) main_mup3_pane_t1

0x4740,	// (0x0001392b) main_mup3_pane_t2_ParamLimits

0x4740,	// (0x0001392b) main_mup3_pane_t2

0x4814,	// (0x000139ff) main_mup3_pane_t4_ParamLimits

0x4814,	// (0x000139ff) main_mup3_pane_t4

0x486a,	// (0x00013a55) main_mup3_pane_t5_ParamLimits

0x486a,	// (0x00013a55) main_mup3_pane_t5

0x4926,	// (0x00013b11) main_mup3_pane_t6_ParamLimits

0x4926,	// (0x00013b11) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0001e97a) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0001e97a) main_mup3_pane_t

0x49de,	// (0x00013bc9) mup3_progress_pane_ParamLimits

0x49de,	// (0x00013bc9) mup3_progress_pane

0x4a6a,	// (0x00013c55) popup_mup3_control_window_ParamLimits

0x4a6a,	// (0x00013c55) popup_mup3_control_window

0xc57a,	// (0x0001b765) popup_mup3_text_window

0x4a9c,	// (0x00013c87) mup3_progress_pane_t1

0x4abb,	// (0x00013ca6) mup3_progress_pane_t2

0xc582,	// (0x0001b76d) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0001e987) mup3_progress_pane_t

0xc59f,	// (0x0001b78a) mup_progress_pane_cp03

0x930c,	// (0x000184f7) bg_tb_trans_pane_cp04

0x4ada,	// (0x00013cc5) mup3_volume_pane

0x4ae2,	// (0x00013ccd) popup_mup3_control_window_g1

0x4aeb,	// (0x00013cd6) mup3_volume_pane_g1

0x4af4,	// (0x00013cdf) mup3_volume_pane_g2

0x4afd,	// (0x00013ce8) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0001e98e) mup3_volume_pane_g

0x930c,	// (0x000184f7) bg_tb_trans_pane_cp03

0xc5af,	// (0x0001b79a) popup_mup3_text_window_g1

0xc5b7,	// (0x0001b7a2) popup_mup3_text_window_t1

0x9b58,	// (0x00018d43) list_calc_item_pane_g1_ParamLimits

0xbf40,	// (0x0001b12b) mup_volume_pane_cp_g1

0x4458,	// (0x00013643) main_touch_calib_pane_t3

0x446c,	// (0x00013657) main_touch_calib_pane_t4

0x4480,	// (0x0001366b) main_touch_calib_pane_t5

0x9316,	// (0x00018501) aid_cell_size_toolbar2

0x931e,	// (0x00018509) aid_popup3_width_pane

0x932a,	// (0x00018515) aid_zoom_text_msg_primary

0x0e5f,	// (0x0001004a) vorec_t7

0x9b1c,	// (0x00018d07) bg_calc_paper_pane_g1_ParamLimits

0x9b28,	// (0x00018d13) bg_calc_paper_pane_g2_ParamLimits

0x9b34,	// (0x00018d1f) bg_calc_paper_pane_g3_ParamLimits

0x9b40,	// (0x00018d2b) bg_calc_paper_pane_g4_ParamLimits

0x9b4c,	// (0x00018d37) bg_calc_paper_pane_g5_ParamLimits

0x0663,	// (0x0000f84e) bg_calc_paper_pane_g6_ParamLimits

0x0674,	// (0x0000f85f) bg_calc_paper_pane_g7_ParamLimits

0x0685,	// (0x0000f870) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001e343) bg_calc_paper_pane_g_ParamLimits

0x0698,	// (0x0000f883) calc_bg_paper_pane_g9_ParamLimits

0x0fd8,	// (0x000101c3) image_qvga_pane_ParamLimits

0x0fd8,	// (0x000101c3) image_qvga_pane

0x99f8,	// (0x00018be3) bg_popup_sub_pane_cp04_ParamLimits

0xab0a,	// (0x00019cf5) popup_mup_playback_window_g1_ParamLimits

0xab16,	// (0x00019d01) popup_mup_playback_window_t1_ParamLimits

0xab2b,	// (0x00019d16) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e6cd) popup_mup_playback_window_t_ParamLimits

0x3f94,	// (0x0001317f) main_mup2_pane_g3_ParamLimits

0x3f94,	// (0x0001317f) main_mup2_pane_g3

0x13eb,	// (0x000105d6) popup_toolbar_window_cp04

0xaf20,	// (0x0001a10b) popup_call2_audio_second_window_g3_ParamLimits

0xaf20,	// (0x0001a10b) popup_call2_audio_second_window_g3

0xb32a,	// (0x0001a515) popup_call2_audio_first_window_g4_ParamLimits

0xb32a,	// (0x0001a515) popup_call2_audio_first_window_g4

0xb9a9,	// (0x0001ab94) popup_call2_audio_in_window_g4_ParamLimits

0xb9a9,	// (0x0001ab94) popup_call2_audio_in_window_g4

0x2e6a,	// (0x00012055) aid_area_sk_bg_cut_ParamLimits

0x2e6a,	// (0x00012055) aid_area_sk_bg_cut

0xab40,	// (0x00019d2b) aid_area_sk_bg_cut_2_ParamLimits

0xab40,	// (0x00019d2b) aid_area_sk_bg_cut_2

0x4299,	// (0x00013484) aid_placing_details_win

0x42a1,	// (0x0001348c) aid_placing_details_win_2

0xc3a5,	// (0x0001b590) camera2_autofocus_pane_g1_ParamLimits

0x0265,	// (0x0000f450) popup_fixed_preview_cale_window_ParamLimits

0x0265,	// (0x0000f450) popup_fixed_preview_cale_window

0xa87b,	// (0x00019a66) navi_slider_pane_g3

0xa884,	// (0x00019a6f) navi_slider_pane_g4

0xa88d,	// (0x00019a78) navi_slider_pane_g5

0xa87b,	// (0x00019a66) navi_slider_pane_g6

0xa896,	// (0x00019a81) navi_slider_pane_g7

0xa9b7,	// (0x00019ba2) mup_scale_pane_g3

0xa9c0,	// (0x00019bab) mup_scale_pane_g4

0xa9c9,	// (0x00019bb4) mup_scale_pane_g5

0x2b5e,	// (0x00011d49) mup_scale_pane_g6

0x2b67,	// (0x00011d52) mup_scale_pane_g7

0xa87b,	// (0x00019a66) cams2_slider_pane_g3

0xbff5,	// (0x0001b1e0) cams2_slider_pane_g4

0xbffd,	// (0x0001b1e8) cams2_slider_pane_g5

0xa87b,	// (0x00019a66) cams2_slider_pane_g6

0xc005,	// (0x0001b1f0) cams2_slider_pane_g7

0xc233,	// (0x0001b41e) camera2_autofocus_pane_cp_g1

0xbd0a,	// (0x0001aef5) bg_popup_preview_window_pane_cp02_ParamLimits

0xbd0a,	// (0x0001aef5) bg_popup_preview_window_pane_cp02

0xc5c5,	// (0x0001b7b0) list_fp_cale_pane_ParamLimits

0xc5c5,	// (0x0001b7b0) list_fp_cale_pane

0xc5d1,	// (0x0001b7bc) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5d1,	// (0x0001b7bc) popup_fixed_preview_cale_window_t1

0x4b06,	// (0x00013cf1) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b06,	// (0x00013cf1) popup_fixed_preview_cale_window_t2

0x4b1b,	// (0x00013d06) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b1b,	// (0x00013d06) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0001e995) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0001e995) popup_fixed_preview_cale_window_t

0x4b30,	// (0x00013d1b) list_single_fp_cale_pane_ParamLimits

0x4b30,	// (0x00013d1b) list_single_fp_cale_pane

0xc5ef,	// (0x0001b7da) list_single_fp_cale_pane_g1_ParamLimits

0xc5ef,	// (0x0001b7da) list_single_fp_cale_pane_g1

0xc5fb,	// (0x0001b7e6) list_single_fp_cale_pane_g2_ParamLimits

0xc5fb,	// (0x0001b7e6) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0001e99c) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0001e99c) list_single_fp_cale_pane_g

0xc614,	// (0x0001b7ff) list_single_fp_cale_pane_t1_ParamLimits

0xc614,	// (0x0001b7ff) list_single_fp_cale_pane_t1

0xc626,	// (0x0001b811) list_single_fp_cale_pane_t2_ParamLimits

0xc626,	// (0x0001b811) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0001e9a3) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0001e9a3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x930c,	// (0x000184f7) main_dialer_pane

0x4b47,	// (0x00013d32) aid_cell_size_keypad

0x4b51,	// (0x00013d3c) dialer_ne_pane

0x4b59,	// (0x00013d44) grid_dialer_command_1_pane

0x4b61,	// (0x00013d4c) grid_dialer_command_2_pane

0x4b69,	// (0x00013d54) grid_dialer_keypad_pane

0x4b7b,	// (0x00013d66) bg_popup_call_pane_cp06_ParamLimits

0x4b7b,	// (0x00013d66) bg_popup_call_pane_cp06

0x4b87,	// (0x00013d72) dialer_ne_clear_pane_ParamLimits

0x4b87,	// (0x00013d72) dialer_ne_clear_pane

0xc659,	// (0x0001b844) dialer_ne_pane_g1

0xc661,	// (0x0001b84c) dialer_ne_pane_t1_ParamLimits

0xc661,	// (0x0001b84c) dialer_ne_pane_t1

0x4b93,	// (0x00013d7e) dialer_ne_pane_t2_ParamLimits

0x4b93,	// (0x00013d7e) dialer_ne_pane_t2

0x4bbd,	// (0x00013da8) dialer_ne_pane_t3_ParamLimits

0x4bbd,	// (0x00013da8) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0001e9a8) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0001e9a8) dialer_ne_pane_t

0x4bed,	// (0x00013dd8) dialer_ne_pane_t3_copy1_ParamLimits

0x4bed,	// (0x00013dd8) dialer_ne_pane_t3_copy1

0x4c1c,	// (0x00013e07) cell_dialer_keypad_pane_ParamLimits

0x4c1c,	// (0x00013e07) cell_dialer_keypad_pane

0x4c33,	// (0x00013e1e) cell_dialer_command_1_pane_ParamLimits

0x4c33,	// (0x00013e1e) cell_dialer_command_1_pane

0x4c49,	// (0x00013e34) cell_dialer_command_2_pane_ParamLimits

0x4c49,	// (0x00013e34) cell_dialer_command_2_pane

0xc673,	// (0x0001b85e) bg_button_pane_cp02_ParamLimits

0xc673,	// (0x0001b85e) bg_button_pane_cp02

0x4c58,	// (0x00013e43) cell_dialer_keypad_pane_g1_ParamLimits

0x4c58,	// (0x00013e43) cell_dialer_keypad_pane_g1

0xc673,	// (0x0001b85e) bg_button_pane_cp03_ParamLimits

0xc673,	// (0x0001b85e) bg_button_pane_cp03

0x4c6d,	// (0x00013e58) cell_dialer_command_1_pane_g1_ParamLimits

0x4c6d,	// (0x00013e58) cell_dialer_command_1_pane_g1

0xc67f,	// (0x0001b86a) bg_button_pane_cp04

0x4c80,	// (0x00013e6b) cell_dialer_command_2_pane_g1

0x9d42,	// (0x00018f2d) bg_button_pane_cp06

0xc687,	// (0x0001b872) dialer_ne_clear_pane_g1

0xa745,	// (0x00019930) navi_pane_g2

0xa773,	// (0x0001995e) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e5d0) navi_pane_g

0xa802,	// (0x000199ed) navi_pane_mv_g2

0xa829,	// (0x00019a14) navi_pane_mv_g5

0x271e,	// (0x00011909) navi_pane_mv_t1

0x9afe,	// (0x00018ce9) main_clock2_pane

0x4ccd,	// (0x00013eb8) main_clock2_list_pane_ParamLimits

0x4ccd,	// (0x00013eb8) main_clock2_list_pane

0x4d05,	// (0x00013ef0) main_clock2_pane_t1_ParamLimits

0x4d05,	// (0x00013ef0) main_clock2_pane_t1

0x4d43,	// (0x00013f2e) main_clock2_pane_t2_ParamLimits

0x4d43,	// (0x00013f2e) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001e9b4) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001e9b4) main_clock2_pane_t

0x4de1,	// (0x00013fcc) popup_clock_analogue_window_cp03_ParamLimits

0x4de1,	// (0x00013fcc) popup_clock_analogue_window_cp03

0x4e06,	// (0x00013ff1) popup_clock_digital_window_cp02_ParamLimits

0x4e06,	// (0x00013ff1) popup_clock_digital_window_cp02

0x4e79,	// (0x00014064) main_clock2_list_single_pane_ParamLimits

0x4e79,	// (0x00014064) main_clock2_list_single_pane

0x9d42,	// (0x00018f2d) list_highlight_pane_cp05

0xc6c1,	// (0x0001b8ac) main_clock2_list_single_pane_t1

0x13eb,	// (0x000105d6) popup_toolbar_window_cp04_ParamLimits

0x42c3,	// (0x000134ae) camera2_autofocus_pane_g2_ParamLimits

0x42c3,	// (0x000134ae) camera2_autofocus_pane_g2

0x42cf,	// (0x000134ba) camera2_autofocus_pane_g3_ParamLimits

0x42cf,	// (0x000134ba) camera2_autofocus_pane_g3

0x42db,	// (0x000134c6) camera2_autofocus_pane_g4_ParamLimits

0x42db,	// (0x000134c6) camera2_autofocus_pane_g4

0x42e7,	// (0x000134d2) camera2_autofocus_pane_g5_ParamLimits

0x42e7,	// (0x000134d2) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0001e8f8) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0001e8f8) camera2_autofocus_pane_g

0x44b6,	// (0x000136a1) camera2_autofocus_pane_cp_g2

0x44be,	// (0x000136a9) camera2_autofocus_pane_cp_g3

0x44c6,	// (0x000136b1) camera2_autofocus_pane_cp_g4

0x44ce,	// (0x000136b9) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0001e95e) camera2_autofocus_pane_cp_g

0x4b73,	// (0x00013d5e) popup_dialer_spcha_window

0x930c,	// (0x000184f7) bg_popup_sub_pane_cp07

0xc6cf,	// (0x0001b8ba) list_spcha_pane

0xc6d7,	// (0x0001b8c2) list_single_spcha_pane_ParamLimits

0xc6d7,	// (0x0001b8c2) list_single_spcha_pane

0x930c,	// (0x000184f7) list_highlight_pane_cp06

0xc6e8,	// (0x0001b8d3) list_single_spcha_pane_t1

0xb753,	// (0x0001a93e) popup_call2_audio_out_window_g4_ParamLimits

0xb753,	// (0x0001a93e) popup_call2_audio_out_window_g4

0x930c,	// (0x000184f7) main_imed2_pane

0xbd3e,	// (0x0001af29) popup_imed_adjust2_window

0x36a4,	// (0x0001288f) popup_imed_trans_window_ParamLimits

0x36a4,	// (0x0001288f) popup_imed_trans_window

0xc06f,	// (0x0001b25a) popup_blid_sat_info2_window_t1

0xc07d,	// (0x0001b268) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0001e88d) popup_blid_sat_info2_window_t

0x4f23,	// (0x0001410e) aid_size_cell_colour_35

0x4f43,	// (0x0001412e) aid_size_cell_colour_112

0x4f63,	// (0x0001414e) aid_size_cell_effect

0xbd16,	// (0x0001af01) bg_tb_trans_pane_cp02

0xa223,	// (0x0001940e) heading_imed_pane

0x4f83,	// (0x0001416e) listscroll_imed_pane

0xc6f6,	// (0x0001b8e1) heading_imed_pane_g1

0xc6fe,	// (0x0001b8e9) heading_imed_pane_t1

0xc70c,	// (0x0001b8f7) grid_imed_colour_35_pane_ParamLimits

0xc70c,	// (0x0001b8f7) grid_imed_colour_35_pane

0x4f8f,	// (0x0001417a) grid_imed_effect_pane

0xc724,	// (0x0001b90f) list_imed_aspect_pane

0x4fa5,	// (0x00014190) scroll_pane_cp027_ParamLimits

0x4fa5,	// (0x00014190) scroll_pane_cp027

0x4fb6,	// (0x000141a1) cell_imed_effect_pane_ParamLimits

0x4fb6,	// (0x000141a1) cell_imed_effect_pane

0xc72c,	// (0x0001b917) cell_imed_colour_pane_ParamLimits

0xc72c,	// (0x0001b917) cell_imed_colour_pane

0xc76e,	// (0x0001b959) cell_imed_colour_pane_g1_ParamLimits

0xc76e,	// (0x0001b959) cell_imed_colour_pane_g1

0xc77f,	// (0x0001b96a) hgihlgiht_grid_pane_cp016_ParamLimits

0xc77f,	// (0x0001b96a) hgihlgiht_grid_pane_cp016

0x4fdd,	// (0x000141c8) cell_imed_effect_pane_g1

0x4fe5,	// (0x000141d0) grid_highlight_pane_cp017

0xc790,	// (0x0001b97b) list_imed_single_pane_ParamLimits

0xc790,	// (0x0001b97b) list_imed_single_pane

0x930c,	// (0x000184f7) list_highlight_pane_cp07

0xc7a6,	// (0x0001b991) list_imed_aspect_pane_comp1_t1

0xbd16,	// (0x0001af01) bg_tb_trans_pane_cp05

0xc7c8,	// (0x0001b9b3) popup_imed_adjust2_window_g1

0xc7ef,	// (0x0001b9da) popup_imed_adjust2_window_t1

0xc807,	// (0x0001b9f2) slider_imed_adjust_pane

0xc81b,	// (0x0001ba06) slider_imed_adjust_pane_g1

0xc82b,	// (0x0001ba16) slider_imed_adjust_pane_g2

0xc83b,	// (0x0001ba26) slider_imed_adjust_pane_g3

0xc84c,	// (0x0001ba37) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001e9d1) slider_imed_adjust_pane_g

0x4fee,	// (0x000141d9) aid_size_cell_clipart2

0x4ffa,	// (0x000141e5) grid_imed_clipart_pane

0xc85d,	// (0x0001ba48) scroll_pane_cp031

0x5004,	// (0x000141ef) cell_imed_clipart_pane_ParamLimits

0x5004,	// (0x000141ef) cell_imed_clipart_pane

0x5028,	// (0x00014213) cell_imed_clipart_pane_g1

0x930c,	// (0x000184f7) grid_highlight_pane_cp014

0x4ce2,	// (0x00013ecd) main_clock2_pane_g1_ParamLimits

0x4ce2,	// (0x00013ecd) main_clock2_pane_g1

0x4e24,	// (0x0001400f) aid_call2_pane_cp10

0x4e36,	// (0x00014021) aid_call_pane_cp10

0xa6a4,	// (0x0001988f) popup_clock_analogue_window_cp10_g1

0xa6a4,	// (0x0001988f) popup_clock_analogue_window_cp10_g2

0x4e48,	// (0x00014033) popup_clock_analogue_window_cp10_g3

0x4e48,	// (0x00014033) popup_clock_analogue_window_cp10_g4

0xa6a4,	// (0x0001988f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001e9bf) popup_clock_analogue_window_cp10_g

0x4e5a,	// (0x00014045) popup_clock_analogue_window_cp10_t1

0x4e8b,	// (0x00014076) clock_digital_number_pane_cp10_ParamLimits

0x4e8b,	// (0x00014076) clock_digital_number_pane_cp10

0x4ea3,	// (0x0001408e) clock_digital_number_pane_cp11_ParamLimits

0x4ea3,	// (0x0001408e) clock_digital_number_pane_cp11

0x4ebb,	// (0x000140a6) clock_digital_number_pane_cp12_ParamLimits

0x4ebb,	// (0x000140a6) clock_digital_number_pane_cp12

0x4ed3,	// (0x000140be) clock_digital_number_pane_cp13_ParamLimits

0x4ed3,	// (0x000140be) clock_digital_number_pane_cp13

0x4eeb,	// (0x000140d6) clock_digital_separator_pane_cp10_ParamLimits

0x4eeb,	// (0x000140d6) clock_digital_separator_pane_cp10

0x4f03,	// (0x000140ee) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f03,	// (0x000140ee) popup_clock_digital_window_cp02_t1

0x99f0,	// (0x00018bdb) clock_digital_number_pane_cp10_g1

0x99f0,	// (0x00018bdb) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001e9da) clock_digital_number_pane_cp10_g

0x99f0,	// (0x00018bdb) clock_digital_separator_pane_cp10_g1

0x99f0,	// (0x00018bdb) clock_digital_separator_pane_g2_cp10

0xa831,	// (0x00019a1c) navi_pane_vded_g4

0xa83a,	// (0x00019a25) navi_pane_vded_g5

0xa843,	// (0x00019a2e) navi_pane_vded_t1

0x930c,	// (0x000184f7) main_vded_pane

0x5031,	// (0x0001421c) main_vded_pane_g1

0x503b,	// (0x00014226) main_vded_pane_g2

0x5045,	// (0x00014230) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001e9df) main_vded_pane_g

0x504f,	// (0x0001423a) main_vded_pane_t1

0x505d,	// (0x00014248) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001e9e6) main_vded_pane_t

0x506b,	// (0x00014256) vded_slider_pane

0x5075,	// (0x00014260) vded_video_pane

0xc865,	// (0x0001ba50) vded_video_pane_g1

0x507f,	// (0x0001426a) vded_video_pane_g2

0xc233,	// (0x0001b41e) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001e9eb) vded_video_pane_g

0xc86f,	// (0x0001ba5a) vded_slider_pane_g1

0xc878,	// (0x0001ba63) vded_slider_pane_g2

0xc881,	// (0x0001ba6c) vded_slider_pane_g3

0xc88a,	// (0x0001ba75) vded_slider_pane_g4

0xc893,	// (0x0001ba7e) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001e9f2) vded_slider_pane_g

0x4a52,	// (0x00013c3d) mup3_rocker_pane_ParamLimits

0x4a52,	// (0x00013c3d) mup3_rocker_pane

0x5088,	// (0x00014273) mup3_control_keys_pane_g1

0x5090,	// (0x0001427b) mup3_control_keys_pane_g2

0x5098,	// (0x00014283) mup3_control_keys_pane_g3

0x50a0,	// (0x0001428b) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001e9fd) mup3_control_keys_pane_g

0x029c,	// (0x0000f487) popup_toolbar2_fixed_window_cp01_ParamLimits

0x029c,	// (0x0000f487) popup_toolbar2_fixed_window_cp01

0x4a86,	// (0x00013c71) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4a86,	// (0x00013c71) popup_toolbar2_fixed_window_cp02

0xb092,	// (0x0001a27d) popup_call2_audio_second_window_t4_ParamLimits

0xb092,	// (0x0001a27d) popup_call2_audio_second_window_t4

0xb5c0,	// (0x0001a7ab) popup_call2_audio_first_window_t6_ParamLimits

0xb5c0,	// (0x0001a7ab) popup_call2_audio_first_window_t6

0xb856,	// (0x0001aa41) popup_call2_audio_out_window_t6_ParamLimits

0xb856,	// (0x0001aa41) popup_call2_audio_out_window_t6

0x930c,	// (0x000184f7) main_vitu_pane

0x50b0,	// (0x0001429b) aid_size_cell_itu_ParamLimits

0x50b0,	// (0x0001429b) aid_size_cell_itu

0x937c,	// (0x00018567) bg_popup_window_pane_cp08_ParamLimits

0x937c,	// (0x00018567) bg_popup_window_pane_cp08

0x50c6,	// (0x000142b1) field_vitu_entry_pane_ParamLimits

0x50c6,	// (0x000142b1) field_vitu_entry_pane

0x50dd,	// (0x000142c8) grid_vitu_function_pane_ParamLimits

0x50dd,	// (0x000142c8) grid_vitu_function_pane

0x50f8,	// (0x000142e3) grid_vitu_itu_pane_ParamLimits

0x50f8,	// (0x000142e3) grid_vitu_itu_pane

0x5116,	// (0x00014301) cell_vitu_itu_pane_ParamLimits

0x5116,	// (0x00014301) cell_vitu_itu_pane

0x513a,	// (0x00014325) cell_vitu_function_pane_ParamLimits

0x513a,	// (0x00014325) cell_vitu_function_pane

0x937c,	// (0x00018567) bg_popup_sub_pane_cp08_ParamLimits

0x937c,	// (0x00018567) bg_popup_sub_pane_cp08

0x5155,	// (0x00014340) field_vitu_entry_pane_t1_ParamLimits

0x5155,	// (0x00014340) field_vitu_entry_pane_t1

0xc8b4,	// (0x0001ba9f) field_vitu_entry_pane_t2_ParamLimits

0xc8b4,	// (0x0001ba9f) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001ea0b) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001ea0b) field_vitu_entry_pane_t

0xc8d1,	// (0x0001babc) bg_button_pane_cp05_ParamLimits

0xc8d1,	// (0x0001babc) bg_button_pane_cp05

0x5174,	// (0x0001435f) cell_vitu_itu_pane_g1

0x518c,	// (0x00014377) cell_vitu_itu_pane_t1_ParamLimits

0x518c,	// (0x00014377) cell_vitu_itu_pane_t1

0x519e,	// (0x00014389) cell_vitu_itu_pane_t2_ParamLimits

0x519e,	// (0x00014389) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001ea10) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001ea10) cell_vitu_itu_pane_t

0xc8df,	// (0x0001baca) bg_button_pane_cp07

0x51e1,	// (0x000143cc) cell_vitu_function_pane_g1

0x9a9e,	// (0x00018c89) main_calc_pane_g1

0x00c3,	// (0x0000f2ae) aid_visual_content_pane

0x930c,	// (0x000184f7) main_vradio_pane

0x51ea,	// (0x000143d5) main_vradio_pane_g1_ParamLimits

0x51ea,	// (0x000143d5) main_vradio_pane_g1

0xc8e9,	// (0x0001bad4) main_vradio_pane_g2_ParamLimits

0xc8e9,	// (0x0001bad4) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001ea17) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001ea17) main_vradio_pane_g

0x5203,	// (0x000143ee) main_vradio_pane_t1_ParamLimits

0x5203,	// (0x000143ee) main_vradio_pane_t1

0x5218,	// (0x00014403) main_vradio_pane_t2_ParamLimits

0x5218,	// (0x00014403) main_vradio_pane_t2

0xc8f6,	// (0x0001bae1) main_vradio_pane_t3_ParamLimits

0xc8f6,	// (0x0001bae1) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001ea1c) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001ea1c) main_vradio_pane_t

0x522d,	// (0x00014418) vradio_rocker_control_pane_ParamLimits

0x522d,	// (0x00014418) vradio_rocker_control_pane

0x523f,	// (0x0001442a) vradio_station_info_pane_ParamLimits

0x523f,	// (0x0001442a) vradio_station_info_pane

0xc90a,	// (0x0001baf5) vradio_frequency_info_pane_ParamLimits

0xc90a,	// (0x0001baf5) vradio_frequency_info_pane

0xc233,	// (0x0001b41e) vradio_station_info_pane_g1

0xc919,	// (0x0001bb04) vradio_station_info_pane_t1_ParamLimits

0xc919,	// (0x0001bb04) vradio_station_info_pane_t1

0xc93b,	// (0x0001bb26) vradio_station_info_pane_t2_ParamLimits

0xc93b,	// (0x0001bb26) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001ea23) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001ea23) vradio_station_info_pane_t

0xc94d,	// (0x0001bb38) vradio_tuning_pane

0xc955,	// (0x0001bb40) vradio_rocker_control_pane_g1

0xc95d,	// (0x0001bb48) vradio_rocker_control_pane_g2

0xc965,	// (0x0001bb50) vradio_rocker_control_pane_g3

0xc96d,	// (0x0001bb58) vradio_rocker_control_pane_g4

0xc975,	// (0x0001bb60) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001ea28) vradio_rocker_control_pane_g

0x5251,	// (0x0001443c) vradio_frequency_info_pane_g1

0xc97d,	// (0x0001bb68) vradio_frequency_info_pane_t1_ParamLimits

0xc97d,	// (0x0001bb68) vradio_frequency_info_pane_t1

0x525b,	// (0x00014446) vradio_tuning_pane_g1

0x5266,	// (0x00014451) vradio_tuning_pane_t1

0x933a,	// (0x00018525) area_side_right_pane_ParamLimits

0x933a,	// (0x00018525) area_side_right_pane

0xbcd1,	// (0x0001aebc) status_small_pane_g1

0xbcd9,	// (0x0001aec4) status_small_pane_g2

0xbce2,	// (0x0001aecd) status_small_pane_g3

0xbceb,	// (0x0001aed6) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0001e7e3) status_small_pane_g

0xbcf4,	// (0x0001aedf) status_small_pane_t1

0x930c,	// (0x000184f7) main_video3_pane

0xc991,	// (0x0001bb7c) cams_zoom_vslider_pane

0xc999,	// (0x0001bb84) image3_wide_pane_ParamLimits

0xc999,	// (0x0001bb84) image3_wide_pane

0xc9b3,	// (0x0001bb9e) image3_wide_small_pane

0xc9bf,	// (0x0001bbaa) main_video3_pane_g1_ParamLimits

0xc9bf,	// (0x0001bbaa) main_video3_pane_g1

0xc9db,	// (0x0001bbc6) main_video3_pane_g2_ParamLimits

0xc9db,	// (0x0001bbc6) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001ea33) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001ea33) main_video3_pane_g

0xc9f7,	// (0x0001bbe2) main_video3_pane_t1_ParamLimits

0xc9f7,	// (0x0001bbe2) main_video3_pane_t1

0xca22,	// (0x0001bc0d) main_video3_pane_t2_ParamLimits

0xca22,	// (0x0001bc0d) main_video3_pane_t2

0xca4d,	// (0x0001bc38) main_video3_pane_t3_ParamLimits

0xca4d,	// (0x0001bc38) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001ea38) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001ea38) main_video3_pane_t

0xca7a,	// (0x0001bc65) cams_zoom_vslider_pane_g1

0xca83,	// (0x0001bc6e) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001ea3f) cams_zoom_vslider_pane_g

0xca8b,	// (0x0001bc76) small_slider_vertical_pane

0xc233,	// (0x0001b41e) small_slider_vertical_pane_g1

0xc233,	// (0x0001b41e) small_slider_vertical_pane_g2

0xca93,	// (0x0001bc7e) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001ea44) small_slider_vertical_pane_g

0x930c,	// (0x000184f7) main_hwr_training_pane

0xca9c,	// (0x0001bc87) hwr_training_instruct_pane_ParamLimits

0xca9c,	// (0x0001bc87) hwr_training_instruct_pane

0x5275,	// (0x00014460) hwr_training_navi_pane_ParamLimits

0x5275,	// (0x00014460) hwr_training_navi_pane

0x5294,	// (0x0001447f) hwr_training_write_pane_ParamLimits

0x5294,	// (0x0001447f) hwr_training_write_pane

0x930c,	// (0x000184f7) bg_frame_shadow_pane

0xcad3,	// (0x0001bcbe) hwr_training_write_pane_g1

0xcadb,	// (0x0001bcc6) hwr_training_write_pane_g2

0xcae3,	// (0x0001bcce) hwr_training_write_pane_g3

0xcaeb,	// (0x0001bcd6) hwr_training_write_pane_g4

0xcaf3,	// (0x0001bcde) hwr_training_write_pane_g5

0xcafb,	// (0x0001bce6) hwr_training_write_pane_g6

0xcb03,	// (0x0001bcee) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001ea4b) hwr_training_write_pane_g

0xcb0b,	// (0x0001bcf6) hwr_training_navi_pane_g1_ParamLimits

0xcb0b,	// (0x0001bcf6) hwr_training_navi_pane_g1

0xcb1d,	// (0x0001bd08) hwr_training_navi_pane_g2_ParamLimits

0xcb1d,	// (0x0001bd08) hwr_training_navi_pane_g2

0xcb2f,	// (0x0001bd1a) hwr_training_navi_pane_g3_ParamLimits

0xcb2f,	// (0x0001bd1a) hwr_training_navi_pane_g3

0xcb3f,	// (0x0001bd2a) hwr_training_navi_pane_g4_ParamLimits

0xcb3f,	// (0x0001bd2a) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001ea5a) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001ea5a) hwr_training_navi_pane_g

0xcb4c,	// (0x0001bd37) hwr_training_navi_pane_t1

0x52de,	// (0x000144c9) list_single_hwr_training_instruct_pane_ParamLimits

0x52de,	// (0x000144c9) list_single_hwr_training_instruct_pane

0xcb5a,	// (0x0001bd45) list_single_hwr_training_instruct_pane_t1

0xc173,	// (0x0001b35e) bg_frame_shadow_pane_g1

0xcb69,	// (0x0001bd54) bg_frame_shadow_pane_g2

0xcb71,	// (0x0001bd5c) bg_frame_shadow_pane_g3

0xcb79,	// (0x0001bd64) bg_frame_shadow_pane_g4

0xcb81,	// (0x0001bd6c) bg_frame_shadow_pane_g5

0xcb89,	// (0x0001bd74) bg_frame_shadow_pane_g6

0xcb91,	// (0x0001bd7c) bg_frame_shadow_pane_g7

0x9bf7,	// (0x00018de2) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001ea65) bg_frame_shadow_pane_g

0x930c,	// (0x000184f7) main_video_tele_dialer_pane

0x52f5,	// (0x000144e0) aid_size_cell_video_keypad_ParamLimits

0x52f5,	// (0x000144e0) aid_size_cell_video_keypad

0x530f,	// (0x000144fa) grid_video_dialer_keypad_pane_ParamLimits

0x530f,	// (0x000144fa) grid_video_dialer_keypad_pane

0x535d,	// (0x00014548) video_down_pane_cp_ParamLimits

0x535d,	// (0x00014548) video_down_pane_cp

0x538f,	// (0x0001457a) cell_video_dialer_keypad_pane_ParamLimits

0x538f,	// (0x0001457a) cell_video_dialer_keypad_pane

0xcb99,	// (0x0001bd84) bg_button_pane_cp08_ParamLimits

0xcb99,	// (0x0001bd84) bg_button_pane_cp08

0x53b1,	// (0x0001459c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x53b1,	// (0x0001459c) cell_video_dialer_keypad_pane_g1

0x4a3c,	// (0x00013c27) mup3_rocker2_pane_ParamLimits

0x4a3c,	// (0x00013c27) mup3_rocker2_pane

0xc233,	// (0x0001b41e) mup3_rocker2_pane_g1

0x358d,	// (0x00012778) main_dialer2_pane

0x930c,	// (0x000184f7) main_mp4_pane

0xcbad,	// (0x0001bd98) main_mp4_pane_g1_ParamLimits

0xcbad,	// (0x0001bd98) main_mp4_pane_g1

0xcbad,	// (0x0001bd98) main_mp4_pane_g2_ParamLimits

0xcbad,	// (0x0001bd98) main_mp4_pane_g2

0x53ec,	// (0x000145d7) main_mp4_pane_g3_ParamLimits

0x53ec,	// (0x000145d7) main_mp4_pane_g3

0xcbbb,	// (0x0001bda6) main_mp4_pane_g4_ParamLimits

0xcbbb,	// (0x0001bda6) main_mp4_pane_g4

0xcbe3,	// (0x0001bdce) main_mp4_pane_g5_ParamLimits

0xcbe3,	// (0x0001bdce) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001ea85) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001ea85) main_mp4_pane_g

0xcc33,	// (0x0001be1e) main_mp4_pane_t1_ParamLimits

0xcc33,	// (0x0001be1e) main_mp4_pane_t1

0xcc8f,	// (0x0001be7a) main_mp4_pane_t2_ParamLimits

0xcc8f,	// (0x0001be7a) main_mp4_pane_t2

0xcce1,	// (0x0001becc) main_mp4_pane_t3_ParamLimits

0xcce1,	// (0x0001becc) main_mp4_pane_t3

0xcd01,	// (0x0001beec) main_mp4_pane_t4_ParamLimits

0xcd01,	// (0x0001beec) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001ea92) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001ea92) main_mp4_pane_t

0xcd45,	// (0x0001bf30) mp4_progress_pane_ParamLimits

0xcd45,	// (0x0001bf30) mp4_progress_pane

0xcd8f,	// (0x0001bf7a) mp4_rocker_pane_ParamLimits

0xcd8f,	// (0x0001bf7a) mp4_rocker_pane

0xcdb7,	// (0x0001bfa2) mp4_progress_pane_t1

0xcdd0,	// (0x0001bfbb) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001ea9b) mp4_progress_pane_t

0xcde9,	// (0x0001bfd4) mup_progress_pane_cp04

0xc233,	// (0x0001b41e) mp4_rocker_pane_g1

0x5428,	// (0x00014613) aid_cell_size_keypad2_ParamLimits

0x5428,	// (0x00014613) aid_cell_size_keypad2

0x543e,	// (0x00014629) dialer2_ne_pane_ParamLimits

0x543e,	// (0x00014629) dialer2_ne_pane

0x5458,	// (0x00014643) grid_dialer2_keypad_pane_ParamLimits

0x5458,	// (0x00014643) grid_dialer2_keypad_pane

0xc016,	// (0x0001b201) bg_popup_call_pane_cp07_ParamLimits

0xc016,	// (0x0001b201) bg_popup_call_pane_cp07

0x5476,	// (0x00014661) dialer2_ne_pane_t1_ParamLimits

0x5476,	// (0x00014661) dialer2_ne_pane_t1

0x54b3,	// (0x0001469e) cell_dialer2_keypad_pane_ParamLimits

0x54b3,	// (0x0001469e) cell_dialer2_keypad_pane

0xce07,	// (0x0001bff2) bg_button_pane_pane_cp04_ParamLimits

0xce07,	// (0x0001bff2) bg_button_pane_pane_cp04

0x54d5,	// (0x000146c0) cell_dialer2_keypad_pane_g1_ParamLimits

0x54d5,	// (0x000146c0) cell_dialer2_keypad_pane_g1

0x12bf,	// (0x000104aa) aid_placing_vt_set_content_ParamLimits

0x12bf,	// (0x000104aa) aid_placing_vt_set_content

0x12e7,	// (0x000104d2) aid_placing_vt_set_title_ParamLimits

0x12e7,	// (0x000104d2) aid_placing_vt_set_title

0x930c,	// (0x000184f7) main_image3_pane

0x559b,	// (0x00014786) area_side_right_pane_cp01_ParamLimits

0x559b,	// (0x00014786) area_side_right_pane_cp01

0xcbad,	// (0x0001bd98) main_image3_pane_g1_ParamLimits

0xcbad,	// (0x0001bd98) main_image3_pane_g1

0x55b2,	// (0x0001479d) main_image3_pane_g2_ParamLimits

0x55b2,	// (0x0001479d) main_image3_pane_g2

0x55da,	// (0x000147c5) main_image3_pane_g3_ParamLimits

0x55da,	// (0x000147c5) main_image3_pane_g3

0x5604,	// (0x000147ef) main_image3_pane_g4_ParamLimits

0x5604,	// (0x000147ef) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001eaaa) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001eaaa) main_image3_pane_g

0x562e,	// (0x00014819) main_image3_pane_t1_ParamLimits

0x562e,	// (0x00014819) main_image3_pane_t1

0x5686,	// (0x00014871) main_image3_pane_t2_ParamLimits

0x5686,	// (0x00014871) main_image3_pane_t2

0x56d8,	// (0x000148c3) main_image3_pane_t3_ParamLimits

0x56d8,	// (0x000148c3) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001eab3) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001eab3) main_image3_pane_t

0x937c,	// (0x00018567) grid_sctrl_middle_pane_cp01_ParamLimits

0x937c,	// (0x00018567) grid_sctrl_middle_pane_cp01

0x5760,	// (0x0001494b) cell_sctrl_middle_pane_cp01_ParamLimits

0x5760,	// (0x0001494b) cell_sctrl_middle_pane_cp01

0x577d,	// (0x00014968) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x577d,	// (0x00014968) cell_sctrl_middle_pane_cp01_g1

0x930c,	// (0x000184f7) main_call4_pane

0x5793,	// (0x0001497e) aid_size_button_call4_ParamLimits

0x5793,	// (0x0001497e) aid_size_button_call4

0x57c4,	// (0x000149af) call4_windows_pane_ParamLimits

0x57c4,	// (0x000149af) call4_windows_pane

0x57e4,	// (0x000149cf) grid_call4_button_pane_ParamLimits

0x57e4,	// (0x000149cf) grid_call4_button_pane

0xce45,	// (0x0001c030) call4_windows_conf_pane

0xce5a,	// (0x0001c045) popup_call4_audio_first_window_ParamLimits

0xce5a,	// (0x0001c045) popup_call4_audio_first_window

0xcea6,	// (0x0001c091) popup_call4_audio_second_window_ParamLimits

0xcea6,	// (0x0001c091) popup_call4_audio_second_window

0xceba,	// (0x0001c0a5) popup_call4_audio_wait_window_ParamLimits

0xceba,	// (0x0001c0a5) popup_call4_audio_wait_window

0x5811,	// (0x000149fc) cell_call4_button_pane_ParamLimits

0x5811,	// (0x000149fc) cell_call4_button_pane

0x583a,	// (0x00014a25) bg_button_pane_cp09_ParamLimits

0x583a,	// (0x00014a25) bg_button_pane_cp09

0x5846,	// (0x00014a31) cell_call4_button_pane_g1_ParamLimits

0x5846,	// (0x00014a31) cell_call4_button_pane_g1

0x586c,	// (0x00014a57) cell_call4_button_pane_t1_ParamLimits

0x586c,	// (0x00014a57) cell_call4_button_pane_t1

0xcf02,	// (0x0001c0ed) popup_call4_audio_conf_window_ParamLimits

0xcf02,	// (0x0001c0ed) popup_call4_audio_conf_window

0x4a9c,	// (0x00013c87) mup3_progress_pane_t1_ParamLimits

0x4abb,	// (0x00013ca6) mup3_progress_pane_t2_ParamLimits

0xc582,	// (0x0001b76d) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0001e987) mup3_progress_pane_t_ParamLimits

0xc59f,	// (0x0001b78a) mup_progress_pane_cp03_ParamLimits

0x50a8,	// (0x00014293) mup3_control_keys_pane_g4_copy1

0xcd73,	// (0x0001bf5e) mp4_rocker2_pane_ParamLimits

0xcd73,	// (0x0001bf5e) mp4_rocker2_pane

0xcf16,	// (0x0001c101) mp4_rocker2_pane_g1

0xcf1e,	// (0x0001c109) mp4_rocker2_pane_g2

0xcf26,	// (0x0001c111) mp4_rocker2_pane_g3

0xcf2e,	// (0x0001c119) mp4_rocker2_pane_g4

0xcf36,	// (0x0001c121) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001eabc) mp4_rocker2_pane_g

0x930c,	// (0x000184f7) main_camera4_pane

0x930c,	// (0x000184f7) main_video4_pane

0x532b,	// (0x00014516) main_video_tele_dialer_pane_t1_ParamLimits

0x532b,	// (0x00014516) main_video_tele_dialer_pane_t1

0x5344,	// (0x0001452f) main_video_tele_dialer_pane_t2_ParamLimits

0x5344,	// (0x0001452f) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001ea76) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001ea76) main_video_tele_dialer_pane_t

0x58aa,	// (0x00014a95) cam4_autofocus_pane_ParamLimits

0x58aa,	// (0x00014a95) cam4_autofocus_pane

0x58c0,	// (0x00014aab) cam4_image_uncrop_pane_ParamLimits

0x58c0,	// (0x00014aab) cam4_image_uncrop_pane

0x58da,	// (0x00014ac5) cam4_indicators_pane_ParamLimits

0x58da,	// (0x00014ac5) cam4_indicators_pane

0x5905,	// (0x00014af0) main_camera4_pane_g1_ParamLimits

0x5905,	// (0x00014af0) main_camera4_pane_g1

0x5917,	// (0x00014b02) main_camera4_pane_g2_ParamLimits

0x5917,	// (0x00014b02) main_camera4_pane_g2

0x592a,	// (0x00014b15) main_camera4_pane_g3_ParamLimits

0x592a,	// (0x00014b15) main_camera4_pane_g3

0x593d,	// (0x00014b28) main_camera4_pane_g4_ParamLimits

0x593d,	// (0x00014b28) main_camera4_pane_g4

0x5950,	// (0x00014b3b) main_camera4_pane_g5_ParamLimits

0x5950,	// (0x00014b3b) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001eac7) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001eac7) main_camera4_pane_g

0x5974,	// (0x00014b5f) main_camera4_pane_t1_ParamLimits

0x5974,	// (0x00014b5f) main_camera4_pane_t1

0xc493,	// (0x0001b67e) bg_tb_trans_pane_cp06

0xcf62,	// (0x0001c14d) cam4_indicators_pane_g1

0xcf73,	// (0x0001c15e) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001eae2) cam4_indicators_pane_g

0xcf91,	// (0x0001c17c) cam4_indicators_pane_t1

0x59d8,	// (0x00014bc3) main_video4_pane_g1_ParamLimits

0x59d8,	// (0x00014bc3) main_video4_pane_g1

0x59e7,	// (0x00014bd2) main_video4_pane_g2_ParamLimits

0x59e7,	// (0x00014bd2) main_video4_pane_g2

0x59f6,	// (0x00014be1) main_video4_pane_g3_ParamLimits

0x59f6,	// (0x00014be1) main_video4_pane_g3

0x5a05,	// (0x00014bf0) main_video4_pane_g4_ParamLimits

0x5a05,	// (0x00014bf0) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001eae9) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001eae9) main_video4_pane_g

0x5a23,	// (0x00014c0e) vid4_indicators_pane_ParamLimits

0x5a23,	// (0x00014c0e) vid4_indicators_pane

0x5a51,	// (0x00014c3c) video4_image_uncrop_cif_pane_ParamLimits

0x5a51,	// (0x00014c3c) video4_image_uncrop_cif_pane

0x5a6b,	// (0x00014c56) video4_image_uncrop_nhd_pane_ParamLimits

0x5a6b,	// (0x00014c56) video4_image_uncrop_nhd_pane

0x58c0,	// (0x00014aab) video4_image_uncrop_vga_pane_ParamLimits

0x58c0,	// (0x00014aab) video4_image_uncrop_vga_pane

0x937c,	// (0x00018567) bg_tb_trans_pane_cp07

0xcfbb,	// (0x0001c1a6) vid4_indicators_pane_g1

0xcfcf,	// (0x0001c1ba) vid4_indicators_pane_g2

0xcfe3,	// (0x0001c1ce) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001eaf4) vid4_indicators_pane_g

0xd010,	// (0x0001c1fb) vid4_indicators_pane_t1

0x5a7f,	// (0x00014c6a) cam4_autofocus_pane_g1

0x5a87,	// (0x00014c72) cam4_autofocus_pane_g2

0x5a8f,	// (0x00014c7a) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001eaff) cam4_autofocus_pane_g

0x5a97,	// (0x00014c82) cam4_autofocus_pane_g3_copy1

0x5373,	// (0x0001455e) video_down_pane_cp_t1

0x5381,	// (0x0001456c) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001ea7b) video_down_pane_cp_t

0x937c,	// (0x00018567) popup_vitu2_window_ParamLimits

0x937c,	// (0x00018567) popup_vitu2_window

0x5a9f,	// (0x00014c8a) aid_size_cell2_itu2_ParamLimits

0x5a9f,	// (0x00014c8a) aid_size_cell2_itu2

0x5ac5,	// (0x00014cb0) aid_size_cell_itu2_ParamLimits

0x5ac5,	// (0x00014cb0) aid_size_cell_itu2

0x5b20,	// (0x00014d0b) bg_popup_window_pane_cp09_ParamLimits

0x5b20,	// (0x00014d0b) bg_popup_window_pane_cp09

0x5b2e,	// (0x00014d19) field_vitu2_entry_pane_ParamLimits

0x5b2e,	// (0x00014d19) field_vitu2_entry_pane

0x5b51,	// (0x00014d3c) grid_vitu2_function_pane_ParamLimits

0x5b51,	// (0x00014d3c) grid_vitu2_function_pane

0x5b9c,	// (0x00014d87) grid_vitu2_itu_pane_ParamLimits

0x5b9c,	// (0x00014d87) grid_vitu2_itu_pane

0x5c2f,	// (0x00014e1a) cell_vitu2_itu_pane_ParamLimits

0x5c2f,	// (0x00014e1a) cell_vitu2_itu_pane

0x5c5b,	// (0x00014e46) cell_vitu2_function_pane_ParamLimits

0x5c5b,	// (0x00014e46) cell_vitu2_function_pane

0xd027,	// (0x0001c212) bg_popup_call_pane_cp08_ParamLimits

0xd027,	// (0x0001c212) bg_popup_call_pane_cp08

0xd03e,	// (0x0001c229) field_vitu2_entry_pane_g1

0xd04a,	// (0x0001c235) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001eb06) field_vitu2_entry_pane_g

0x5c9a,	// (0x00014e85) field_vitu2_entry_pane_t1_ParamLimits

0x5c9a,	// (0x00014e85) field_vitu2_entry_pane_t1

0xd064,	// (0x0001c24f) field_vitu2_entry_pane_t2_ParamLimits

0xd064,	// (0x0001c24f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001eb0d) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001eb0d) field_vitu2_entry_pane_t

0x5cca,	// (0x00014eb5) bg_button_pane_cp010_ParamLimits

0x5cca,	// (0x00014eb5) bg_button_pane_cp010

0xd089,	// (0x0001c274) cell_vitu2_itu_pane_g1

0x5ce6,	// (0x00014ed1) cell_vitu2_itu_pane_t1_ParamLimits

0x5ce6,	// (0x00014ed1) cell_vitu2_itu_pane_t1

0x5d44,	// (0x00014f2f) cell_vitu2_itu_pane_t2_ParamLimits

0x5d44,	// (0x00014f2f) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001eb17) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001eb17) cell_vitu2_itu_pane_t

0x937c,	// (0x00018567) bg_button_pane_cp011

0x5e30,	// (0x0001501b) cell_vitu2_function_pane_g1

0x930c,	// (0x000184f7) main_myfav_hc_pane

0x5728,	// (0x00014913) popup_image3_note_pane_ParamLimits

0x5728,	// (0x00014913) popup_image3_note_pane

0x5744,	// (0x0001492f) popup_image3_tool_bar_pane_ParamLimits

0x5744,	// (0x0001492f) popup_image3_tool_bar_pane

0x5dd2,	// (0x00014fbd) cell_vitu2_itu_pane_t3_ParamLimits

0x5dd2,	// (0x00014fbd) cell_vitu2_itu_pane_t3

0x930c,	// (0x000184f7) bg_popup_trans_pane

0xd09b,	// (0x0001c286) grid_image3_tool_bar_pane

0xd0a5,	// (0x0001c290) bg_popup_trans_pane_g1

0x9fa5,	// (0x00019190) bg_popup_trans_pane_g2

0xd0ad,	// (0x0001c298) bg_popup_trans_pane_g3

0xd0b5,	// (0x0001c2a0) bg_popup_trans_pane_g4

0xd0bd,	// (0x0001c2a8) bg_popup_trans_pane_g5

0xd0c5,	// (0x0001c2b0) bg_popup_trans_pane_g6

0xd0cd,	// (0x0001c2b8) bg_popup_trans_pane_g7

0xd0d5,	// (0x0001c2c0) bg_popup_trans_pane_g8

0x9f85,	// (0x00019170) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001eb1e) bg_popup_trans_pane_g

0xd0dd,	// (0x0001c2c8) cell_image3_tool_bar_pane_ParamLimits

0xd0dd,	// (0x0001c2c8) cell_image3_tool_bar_pane

0xc233,	// (0x0001b41e) cell_image3_tool_bar_pane_g1

0x930c,	// (0x000184f7) bg_popup_trans_pane_cp1

0xd0f1,	// (0x0001c2dc) popup_image3_note_pane_t1

0xd0ff,	// (0x0001c2ea) popup_image3_note_pane_t2

0xd10d,	// (0x0001c2f8) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001eb31) popup_image3_note_pane_t

0xd11b,	// (0x0001c306) popup_image3_note_pane_t3_copy1

0x5e44,	// (0x0001502f) bg_myfav_hc_instruction_pane_ParamLimits

0x5e44,	// (0x0001502f) bg_myfav_hc_instruction_pane

0x5e5a,	// (0x00015045) cell_myfav_contact_pane_ParamLimits

0x5e5a,	// (0x00015045) cell_myfav_contact_pane

0x5e78,	// (0x00015063) cell_myfav_contact_pane_cp1_ParamLimits

0x5e78,	// (0x00015063) cell_myfav_contact_pane_cp1

0x5e90,	// (0x0001507b) cell_myfav_contact_pane_cp2_ParamLimits

0x5e90,	// (0x0001507b) cell_myfav_contact_pane_cp2

0x5ea8,	// (0x00015093) cell_myfav_contact_pane_cp3_ParamLimits

0x5ea8,	// (0x00015093) cell_myfav_contact_pane_cp3

0x5ebf,	// (0x000150aa) cell_myfav_contact_pane_cp4_ParamLimits

0x5ebf,	// (0x000150aa) cell_myfav_contact_pane_cp4

0x5ed7,	// (0x000150c2) cell_myfav_contact_pane_cp5_ParamLimits

0x5ed7,	// (0x000150c2) cell_myfav_contact_pane_cp5

0x5eeb,	// (0x000150d6) cell_myfav_contact_pane_cp6_ParamLimits

0x5eeb,	// (0x000150d6) cell_myfav_contact_pane_cp6

0x5f01,	// (0x000150ec) cell_myfav_contact_pane_cp7_ParamLimits

0x5f01,	// (0x000150ec) cell_myfav_contact_pane_cp7

0xd129,	// (0x0001c314) listscroll_gen_pane_cp05

0x5f1b,	// (0x00015106) main_myfav_hc_pane_g1_ParamLimits

0x5f1b,	// (0x00015106) main_myfav_hc_pane_g1

0x5f35,	// (0x00015120) main_myfav_hc_pane_g2_ParamLimits

0x5f35,	// (0x00015120) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001eb38) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001eb38) main_myfav_hc_pane_g

0x5f67,	// (0x00015152) main_myfav_hc_pane_t1_ParamLimits

0x5f67,	// (0x00015152) main_myfav_hc_pane_t1

0xd132,	// (0x0001c31d) main_myfav_hc_pane_t2_ParamLimits

0xd132,	// (0x0001c31d) main_myfav_hc_pane_t2

0xd144,	// (0x0001c32f) main_myfav_hc_pane_t3_ParamLimits

0xd144,	// (0x0001c32f) main_myfav_hc_pane_t3

0x5f7e,	// (0x00015169) main_myfav_hc_pane_t4_ParamLimits

0x5f7e,	// (0x00015169) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001eb3f) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001eb3f) main_myfav_hc_pane_t

0xc233,	// (0x0001b41e) bg_myfav_hc_instruction_pane_g1

0xd156,	// (0x0001c341) cell_myfav_contact_pane_g1_ParamLimits

0xd156,	// (0x0001c341) cell_myfav_contact_pane_g1

0xd156,	// (0x0001c341) cell_myfav_contact_pane_g2_ParamLimits

0xd156,	// (0x0001c341) cell_myfav_contact_pane_g2

0xd162,	// (0x0001c34d) cell_myfav_contact_pane_g3_ParamLimits

0xd162,	// (0x0001c34d) cell_myfav_contact_pane_g3

0xc56c,	// (0x0001b757) cell_myfav_contact_pane_g4_ParamLimits

0xc56c,	// (0x0001b757) cell_myfav_contact_pane_g4

0xd16f,	// (0x0001c35a) cell_myfav_contact_pane_g5_ParamLimits

0xd16f,	// (0x0001c35a) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001eb4a) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001eb4a) cell_myfav_contact_pane_g

0x5f4f,	// (0x0001513a) main_myfav_hc_pane_g3_ParamLimits

0x5f4f,	// (0x0001513a) main_myfav_hc_pane_g3

0x01fe,	// (0x0000f3e9) popup_adpt_find_window

0x5fa6,	// (0x00015191) afind_page_pane_ParamLimits

0x5fa6,	// (0x00015191) afind_page_pane

0x5fbb,	// (0x000151a6) aid_size_cell_afind_ParamLimits

0x5fbb,	// (0x000151a6) aid_size_cell_afind

0x5fd9,	// (0x000151c4) bg_popup_sub_pane_cp09_ParamLimits

0x5fd9,	// (0x000151c4) bg_popup_sub_pane_cp09

0x5fe6,	// (0x000151d1) find_pane_cp01_ParamLimits

0x5fe6,	// (0x000151d1) find_pane_cp01

0xd17b,	// (0x0001c366) grid_afind_control_pane_ParamLimits

0xd17b,	// (0x0001c366) grid_afind_control_pane

0x5ff3,	// (0x000151de) grid_afind_pane_ParamLimits

0x5ff3,	// (0x000151de) grid_afind_pane

0x6012,	// (0x000151fd) cell_afind_pane_ParamLimits

0x6012,	// (0x000151fd) cell_afind_pane

0xc233,	// (0x0001b41e) afind_page_pane_g1

0x6079,	// (0x00015264) afind_page_pane_g2

0x6082,	// (0x0001526d) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001eb55) afind_page_pane_g

0x608b,	// (0x00015276) afind_page_pane_t1

0xd1c5,	// (0x0001c3b0) cell_afind_grid_control_pane_ParamLimits

0xd1c5,	// (0x0001c3b0) cell_afind_grid_control_pane

0xce07,	// (0x0001bff2) bg_button_pane_cp69_ParamLimits

0xce07,	// (0x0001bff2) bg_button_pane_cp69

0x60ab,	// (0x00015296) cell_afind_pane_g1_ParamLimits

0x60ab,	// (0x00015296) cell_afind_pane_g1

0x60b8,	// (0x000152a3) cell_afind_pane_t1_ParamLimits

0x60b8,	// (0x000152a3) cell_afind_pane_t1

0x9d9e,	// (0x00018f89) bg_button_pane_cp72

0xd1d4,	// (0x0001c3bf) cell_afind_grid_control_pane_g1

0x304b,	// (0x00012236) aid_image_placing_area_ParamLimits

0x304b,	// (0x00012236) aid_image_placing_area

0xc89c,	// (0x0001ba87) field_vitu_entry_pane_g1_ParamLimits

0xc89c,	// (0x0001ba87) field_vitu_entry_pane_g1

0xc8a8,	// (0x0001ba93) field_vitu_entry_pane_g2_ParamLimits

0xc8a8,	// (0x0001ba93) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001ea06) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001ea06) field_vitu_entry_pane_g

0x5174,	// (0x0001435f) cell_vitu_itu_pane_g1_ParamLimits

0x51c4,	// (0x000143af) cell_vitu_itu_pane_t3_ParamLimits

0x51c4,	// (0x000143af) cell_vitu_itu_pane_t3

0xcdb7,	// (0x0001bfa2) mp4_progress_pane_t1_ParamLimits

0xcdd0,	// (0x0001bfbb) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001ea9b) mp4_progress_pane_t_ParamLimits

0xcde9,	// (0x0001bfd4) mup_progress_pane_cp04_ParamLimits

0x5f92,	// (0x0001517d) main_myfav_hc_pane_t5_ParamLimits

0x5f92,	// (0x0001517d) main_myfav_hc_pane_t5

0x9332,	// (0x0001851d) aid_zoom_text_primary

0x01fe,	// (0x0000f3e9) popup_adpt_find_window_ParamLimits

0x937c,	// (0x00018567) main_cam_set_pane

0x58f1,	// (0x00014adc) cam4_zoom_pane_ParamLimits

0x58f1,	// (0x00014adc) cam4_zoom_pane

0x60ca,	// (0x000152b5) main_cam_set_pane_g1_ParamLimits

0x60ca,	// (0x000152b5) main_cam_set_pane_g1

0x60d8,	// (0x000152c3) main_cam_set_pane_g2_ParamLimits

0x60d8,	// (0x000152c3) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001eb5c) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001eb5c) main_cam_set_pane_g

0x60f9,	// (0x000152e4) main_cam_set_pane_t1_ParamLimits

0x60f9,	// (0x000152e4) main_cam_set_pane_t1

0x6114,	// (0x000152ff) main_cset_listscroll_pane_ParamLimits

0x6114,	// (0x000152ff) main_cset_listscroll_pane

0x6134,	// (0x0001531f) main_cset_slider_pane_ParamLimits

0x6134,	// (0x0001531f) main_cset_slider_pane

0xd1e5,	// (0x0001c3d0) main_cset_list_pane_ParamLimits

0xd1e5,	// (0x0001c3d0) main_cset_list_pane

0xd1f5,	// (0x0001c3e0) scroll_pane_cp028

0x615a,	// (0x00015345) aid_area_touch_slider

0x6176,	// (0x00015361) cset_slider_pane

0x61a0,	// (0x0001538b) main_cset_slider_pane_g1

0x61b5,	// (0x000153a0) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001eb61) main_cset_slider_pane_g

0xd22e,	// (0x0001c419) main_cset_slider_pane_t1

0x6271,	// (0x0001545c) main_cset_slider_pane_t2

0x628b,	// (0x00015476) main_cset_slider_pane_t3

0x62a5,	// (0x00015490) main_cset_slider_pane_t4

0x62bf,	// (0x000154aa) main_cset_slider_pane_t5

0x62d9,	// (0x000154c4) main_cset_slider_pane_t6

0x62ee,	// (0x000154d9) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001eb86) main_cset_slider_pane_t

0x63f2,	// (0x000155dd) cset_list_set_pane_ParamLimits

0x63f2,	// (0x000155dd) cset_list_set_pane

0x6405,	// (0x000155f0) aid_position_infowindow_above

0x640d,	// (0x000155f8) aid_position_infowindow_below

0x6415,	// (0x00015600) cset_list_set_pane_g1_ParamLimits

0x6415,	// (0x00015600) cset_list_set_pane_g1

0x6421,	// (0x0001560c) cset_list_set_pane_g3_ParamLimits

0x6421,	// (0x0001560c) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001eba5) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001eba5) cset_list_set_pane_g

0x6430,	// (0x0001561b) cset_list_set_pane_t1_ParamLimits

0x6430,	// (0x0001561b) cset_list_set_pane_t1

0x937c,	// (0x00018567) list_highlight_pane_cp021_ParamLimits

0x937c,	// (0x00018567) list_highlight_pane_cp021

0xa9b7,	// (0x00019ba2) cset_slider_pane_g1

0xa9c9,	// (0x00019bb4) cset_slider_pane_g2

0xa9c0,	// (0x00019bab) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001ebaa) cset_slider_pane_g

0xd2ce,	// (0x0001c4b9) aid_area_touch_cam4_zoom

0xd2d6,	// (0x0001c4c1) cam4_zoom_cont_pane

0xd2de,	// (0x0001c4c9) cam4_zoom_pane_g1

0xd2e6,	// (0x0001c4d1) cam4_zoom_pane_g2

0x6445,	// (0x00015630) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001ebb1) cam4_zoom_pane_g

0xd2ee,	// (0x0001c4d9) cam4_zoom_cont_pane_g1

0xd2f7,	// (0x0001c4e2) cam4_zoom_cont_pane_g2

0xd300,	// (0x0001c4eb) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001ebb8) cam4_zoom_cont_pane_g

0x57b1,	// (0x0001499c) call4_image_pane_ParamLimits

0x57b1,	// (0x0001499c) call4_image_pane

0xce45,	// (0x0001c030) call4_windows_conf_pane_ParamLimits

0xce84,	// (0x0001c06f) popup_call4_audio_in_window_ParamLimits

0xce84,	// (0x0001c06f) popup_call4_audio_in_window

0x930c,	// (0x000184f7) bg_popup_call2_act_pane_cp02

0xcefa,	// (0x0001c0e5) call4_list_conf_pane

0xc233,	// (0x0001b41e) call4_image_pane_g1

0xc233,	// (0x0001b41e) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0001e8c7) call4_image_pane_g

0xd309,	// (0x0001c4f4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd309,	// (0x0001c4f4) list_single_graphic_popup_conf4_pane

0x930c,	// (0x000184f7) list_highlight_pane_cp022

0xd31c,	// (0x0001c507) list_single_graphic_popup_conf4_pane_g1

0xa58c,	// (0x00019777) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001ebbf) list_single_graphic_popup_conf4_pane_g

0xd324,	// (0x0001c50f) list_single_graphic_popup_conf4_pane_t1

0x140b,	// (0x000105f6) popup_vtel_slider_window_ParamLimits

0x140b,	// (0x000105f6) popup_vtel_slider_window

0xcdf5,	// (0x0001bfe0) dialer2_ne_pane_t2_ParamLimits

0xcdf5,	// (0x0001bfe0) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001eaa0) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001eaa0) dialer2_ne_pane_t

0xc016,	// (0x0001b201) bg_popup_sub_pane_cp010_ParamLimits

0xc016,	// (0x0001b201) bg_popup_sub_pane_cp010

0x644d,	// (0x00015638) popup_vtel_slider_window_g1_ParamLimits

0x644d,	// (0x00015638) popup_vtel_slider_window_g1

0x6460,	// (0x0001564b) popup_vtel_slider_window_g2_ParamLimits

0x6460,	// (0x0001564b) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001ebc4) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001ebc4) popup_vtel_slider_window_g

0x64b6,	// (0x000156a1) vtel_slider_pane_ParamLimits

0x64b6,	// (0x000156a1) vtel_slider_pane

0x64d8,	// (0x000156c3) vtel_slider_pane_g1_ParamLimits

0x64d8,	// (0x000156c3) vtel_slider_pane_g1

0x64ec,	// (0x000156d7) vtel_slider_pane_g2_ParamLimits

0x64ec,	// (0x000156d7) vtel_slider_pane_g2

0x6504,	// (0x000156ef) vtel_slider_pane_g3_ParamLimits

0x6504,	// (0x000156ef) vtel_slider_pane_g3

0x64d8,	// (0x000156c3) vtel_slider_pane_g4_ParamLimits

0x64d8,	// (0x000156c3) vtel_slider_pane_g4

0x651a,	// (0x00015705) vtel_slider_pane_g5_ParamLimits

0x651a,	// (0x00015705) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001ebcd) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001ebcd) vtel_slider_pane_g

0x937c,	// (0x00018567) main_gallery2_pane

0x5af1,	// (0x00014cdc) aid_size_row_itut2_dropdow_list_ParamLimits

0x5af1,	// (0x00014cdc) aid_size_row_itut2_dropdow_list

0x5b76,	// (0x00014d61) grid_vitu2_function_top_pane_ParamLimits

0x5b76,	// (0x00014d61) grid_vitu2_function_top_pane

0x5bdd,	// (0x00014dc8) popup_vitu2_dropdown_list_window_ParamLimits

0x5bdd,	// (0x00014dc8) popup_vitu2_dropdown_list_window

0x5c03,	// (0x00014dee) popup_vitu2_match_list_window

0x653e,	// (0x00015729) cell_vitu2_function_top_pane_ParamLimits

0x653e,	// (0x00015729) cell_vitu2_function_top_pane

0x6560,	// (0x0001574b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6560,	// (0x0001574b) cell_vitu2_function_top_pane_cp01

0x657c,	// (0x00015767) cell_vitu2_function_top_wide_pane_ParamLimits

0x657c,	// (0x00015767) cell_vitu2_function_top_wide_pane

0x937c,	// (0x00018567) bg_button_pane_cp012

0x6598,	// (0x00015783) cell_vitu2_function_top_pane_g1

0xd33a,	// (0x0001c525) bg_button_pane_cp013_ParamLimits

0xd33a,	// (0x0001c525) bg_button_pane_cp013

0x65ac,	// (0x00015797) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65ac,	// (0x00015797) cell_vitu2_function_top_wide_pane_g1

0x937c,	// (0x00018567) bg_popup_sub_pane_cp20

0x65c4,	// (0x000157af) list_vitu2_match_list_pane

0xd0a5,	// (0x0001c290) bg_popup_sub_pane_cp20_g1

0xd0ad,	// (0x0001c298) bg_popup_sub_pane_cp20_g2

0x9fa5,	// (0x00019190) bg_popup_sub_pane_cp20_g3

0xd0b5,	// (0x0001c2a0) bg_popup_sub_pane_cp20_g4

0x9f85,	// (0x00019170) bg_popup_sub_pane_cp20_g5

0xd356,	// (0x0001c541) bg_popup_sub_pane_cp20_g6

0xd0c5,	// (0x0001c2b0) bg_popup_sub_pane_cp20_g7

0xd0cd,	// (0x0001c2b8) bg_popup_sub_pane_cp20_g8

0xd0d5,	// (0x0001c2c0) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001ebd8) bg_popup_sub_pane_cp20_g

0xd35e,	// (0x0001c549) list_vitu2_match_list_item_pane_ParamLimits

0xd35e,	// (0x0001c549) list_vitu2_match_list_item_pane

0xd370,	// (0x0001c55b) list_vitu2_match_list_item_pane_t1

0x930c,	// (0x000184f7) bg_popup_sub_pane_cp21

0xa41d,	// (0x00019608) grid_vitu2_dropdown_list_pane

0x662f,	// (0x0001581a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x662f,	// (0x0001581a) cell_vitu2_dropdown_list_char_pane

0x6650,	// (0x0001583b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6650,	// (0x0001583b) cell_vitu2_dropdown_list_ctrl_pane

0xd37e,	// (0x0001c569) cell_vitu2_dropdown_list_char_pane_g1

0xd387,	// (0x0001c572) cell_vitu2_dropdown_list_char_pane_g2

0xd390,	// (0x0001c57b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001ebf5) cell_vitu2_dropdown_list_char_pane_g

0x667c,	// (0x00015867) cell_vitu2_dropdown_list_char_pane_t1

0x668a,	// (0x00015875) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x668a,	// (0x00015875) cell_vitu2_dropdown_list_ctrl_pane_g1

0x669a,	// (0x00015885) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x669a,	// (0x00015885) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66ab,	// (0x00015896) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66ab,	// (0x00015896) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66bb,	// (0x000158a6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66bb,	// (0x000158a6) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc493,	// (0x0001b67e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc493,	// (0x0001b67e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001ebfc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001ebfc) cell_vitu2_dropdown_list_ctrl_pane_g

0x66d7,	// (0x000158c2) aid_size_cell_gallery2_ParamLimits

0x66d7,	// (0x000158c2) aid_size_cell_gallery2

0x66f5,	// (0x000158e0) grid_gallery2_pane_ParamLimits

0x66f5,	// (0x000158e0) grid_gallery2_pane

0x670f,	// (0x000158fa) scroll_pane_cp029_ParamLimits

0x670f,	// (0x000158fa) scroll_pane_cp029

0x671b,	// (0x00015906) cell_gallery2_pane_ParamLimits

0x671b,	// (0x00015906) cell_gallery2_pane

0xd399,	// (0x0001c584) cell_gallery2_pane_g2

0x6777,	// (0x00015962) cell_gallery2_pane_g3

0xd3a1,	// (0x0001c58c) cell_gallery2_pane_g4

0xd3a9,	// (0x0001c594) cell_gallery2_pane_g5

0x9d42,	// (0x00018f2d) grid_highlight_pane_cp10

0x5c03,	// (0x00014dee) popup_vitu2_match_list_window_ParamLimits

0x5c18,	// (0x00014e03) popup_vitu2_query_window_ParamLimits

0x5c18,	// (0x00014e03) popup_vitu2_query_window

0x930c,	// (0x000184f7) bg_vitu2_candi_button_pane

0xd37e,	// (0x0001c569) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd387,	// (0x0001c572) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd390,	// (0x0001c57b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x677f,	// (0x0001596a) bg_button_pane_cp015

0x6793,	// (0x0001597e) bg_button_pane_cp016

0x67a6,	// (0x00015991) bg_button_pane_cp017

0xbd16,	// (0x0001af01) bg_popup_sub_pane_cp22

0xd3b1,	// (0x0001c59c) popup_vitu2_query_window_g1

0x67eb,	// (0x000159d6) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001ec07) popup_vitu2_query_window_g

0x680a,	// (0x000159f5) popup_vitu2_query_window_t1_ParamLimits

0x680a,	// (0x000159f5) popup_vitu2_query_window_t1

0x683f,	// (0x00015a2a) popup_vitu2_query_window_t2_ParamLimits

0x683f,	// (0x00015a2a) popup_vitu2_query_window_t2

0x6851,	// (0x00015a3c) popup_vitu2_query_window_t3_ParamLimits

0x6851,	// (0x00015a3c) popup_vitu2_query_window_t3

0x6879,	// (0x00015a64) popup_vitu2_query_window_t4_ParamLimits

0x6879,	// (0x00015a64) popup_vitu2_query_window_t4

0x689a,	// (0x00015a85) popup_vitu2_query_window_t5_ParamLimits

0x689a,	// (0x00015a85) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001ec0e) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001ec0e) popup_vitu2_query_window_t

0xd1dd,	// (0x0001c3c8) main_cset_text_pane

0x615a,	// (0x00015345) aid_area_touch_slider_ParamLimits

0x6176,	// (0x00015361) cset_slider_pane_ParamLimits

0x61a0,	// (0x0001538b) main_cset_slider_pane_g1_ParamLimits

0x61b5,	// (0x000153a0) main_cset_slider_pane_g2_ParamLimits

0xd1fe,	// (0x0001c3e9) main_cset_slider_pane_g3_ParamLimits

0xd1fe,	// (0x0001c3e9) main_cset_slider_pane_g3

0x61ca,	// (0x000153b5) main_cset_slider_pane_g4_ParamLimits

0x61ca,	// (0x000153b5) main_cset_slider_pane_g4

0x61d9,	// (0x000153c4) main_cset_slider_pane_g5_ParamLimits

0x61d9,	// (0x000153c4) main_cset_slider_pane_g5

0x61e5,	// (0x000153d0) main_cset_slider_pane_g6_ParamLimits

0x61e5,	// (0x000153d0) main_cset_slider_pane_g6

0xf976,	// (0x0001eb61) main_cset_slider_pane_g_ParamLimits

0xd22e,	// (0x0001c419) main_cset_slider_pane_t1_ParamLimits

0x6271,	// (0x0001545c) main_cset_slider_pane_t2_ParamLimits

0x628b,	// (0x00015476) main_cset_slider_pane_t3_ParamLimits

0x62a5,	// (0x00015490) main_cset_slider_pane_t4_ParamLimits

0x62bf,	// (0x000154aa) main_cset_slider_pane_t5_ParamLimits

0x62d9,	// (0x000154c4) main_cset_slider_pane_t6_ParamLimits

0x62ee,	// (0x000154d9) main_cset_slider_pane_t7_ParamLimits

0x6318,	// (0x00015503) main_cset_slider_pane_t8_ParamLimits

0x6318,	// (0x00015503) main_cset_slider_pane_t8

0x6340,	// (0x0001552b) main_cset_slider_pane_t9_ParamLimits

0x6340,	// (0x0001552b) main_cset_slider_pane_t9

0x6368,	// (0x00015553) main_cset_slider_pane_t10_ParamLimits

0x6368,	// (0x00015553) main_cset_slider_pane_t10

0x6390,	// (0x0001557b) main_cset_slider_pane_t11_ParamLimits

0x6390,	// (0x0001557b) main_cset_slider_pane_t11

0x63b8,	// (0x000155a3) main_cset_slider_pane_t12_ParamLimits

0x63b8,	// (0x000155a3) main_cset_slider_pane_t12

0x63d5,	// (0x000155c0) main_cset_slider_pane_t13_ParamLimits

0x63d5,	// (0x000155c0) main_cset_slider_pane_t13

0xf99b,	// (0x0001eb86) main_cset_slider_pane_t_ParamLimits

0x930c,	// (0x000184f7) bg_popup_sub_pane_cp011

0xd3bd,	// (0x0001c5a8) main_cset_text_pane_g1

0xd3c5,	// (0x0001c5b0) main_cset_text_pane_t1

0xd3d3,	// (0x0001c5be) main_cset_text_pane_t2

0xd3e1,	// (0x0001c5cc) main_cset_text_pane_t3

0xd3ef,	// (0x0001c5da) main_cset_text_pane_t4

0xd3fd,	// (0x0001c5e8) main_cset_text_pane_t5

0xd40b,	// (0x0001c5f6) main_cset_text_pane_t6

0xd419,	// (0x0001c604) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001ec1d) main_cset_text_pane_t

0x930c,	// (0x000184f7) main_cam4_burst_pane

0x930c,	// (0x000184f7) main_cam5_pane

0x6099,	// (0x00015284) bg_button_pane_cp019

0x60a2,	// (0x0001528d) bg_button_pane_cp020

0xd20a,	// (0x0001c3f5) main_cset_slider_pane_g7_ParamLimits

0xd20a,	// (0x0001c3f5) main_cset_slider_pane_g7

0xd216,	// (0x0001c401) main_cset_slider_pane_g8_ParamLimits

0xd216,	// (0x0001c401) main_cset_slider_pane_g8

0x61f9,	// (0x000153e4) main_cset_slider_pane_g9_ParamLimits

0x61f9,	// (0x000153e4) main_cset_slider_pane_g9

0x6205,	// (0x000153f0) main_cset_slider_pane_g10_ParamLimits

0x6205,	// (0x000153f0) main_cset_slider_pane_g10

0x6211,	// (0x000153fc) main_cset_slider_pane_g11_ParamLimits

0x6211,	// (0x000153fc) main_cset_slider_pane_g11

0x621d,	// (0x00015408) main_cset_slider_pane_g12_ParamLimits

0x621d,	// (0x00015408) main_cset_slider_pane_g12

0x6229,	// (0x00015414) main_cset_slider_pane_g13_ParamLimits

0x6229,	// (0x00015414) main_cset_slider_pane_g13

0x6235,	// (0x00015420) main_cset_slider_pane_g14_ParamLimits

0x6235,	// (0x00015420) main_cset_slider_pane_g14

0x6241,	// (0x0001542c) main_cset_slider_pane_g15_ParamLimits

0x6241,	// (0x0001542c) main_cset_slider_pane_g15

0xd25c,	// (0x0001c447) main_cset_slider_pane_t14_ParamLimits

0xd25c,	// (0x0001c447) main_cset_slider_pane_t14

0xd295,	// (0x0001c480) main_cset_slider_pane_t15_ParamLimits

0xd295,	// (0x0001c480) main_cset_slider_pane_t15

0x6911,	// (0x00015afc) aid_cam4_burst_size_cell_ParamLimits

0x6911,	// (0x00015afc) aid_cam4_burst_size_cell

0x6931,	// (0x00015b1c) grid_cam4_burst_pane_ParamLimits

0x6931,	// (0x00015b1c) grid_cam4_burst_pane

0x6969,	// (0x00015b54) linegrid_cam4_burst_pane_ParamLimits

0x6969,	// (0x00015b54) linegrid_cam4_burst_pane

0xd427,	// (0x0001c612) scroll_pane_cp30_ParamLimits

0xd427,	// (0x0001c612) scroll_pane_cp30

0x698f,	// (0x00015b7a) cell_cam4_burst_pane_ParamLimits

0x698f,	// (0x00015b7a) cell_cam4_burst_pane

0xd433,	// (0x0001c61e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd433,	// (0x0001c61e) linegrid_cam4_burst_pane_g1

0x69dc,	// (0x00015bc7) linegrid_cam4_burst_pane_g2_ParamLimits

0x69dc,	// (0x00015bc7) linegrid_cam4_burst_pane_g2

0xd440,	// (0x0001c62b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd440,	// (0x0001c62b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001ec2c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001ec2c) linegrid_cam4_burst_pane_g

0x69ed,	// (0x00015bd8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x69ed,	// (0x00015bd8) linegrid_cam4_burst_pane_g3_copy1

0xd44d,	// (0x0001c638) linegrid_cam4_burst_pane_g4_ParamLimits

0xd44d,	// (0x0001c638) linegrid_cam4_burst_pane_g4

0x6a07,	// (0x00015bf2) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a07,	// (0x00015bf2) linegrid_cam4_burst_pane_g5

0x6a18,	// (0x00015c03) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a18,	// (0x00015c03) linegrid_cam4_burst_pane_g6

0xd45a,	// (0x0001c645) linegrid_cam4_burst_pane_g7_ParamLimits

0xd45a,	// (0x0001c645) linegrid_cam4_burst_pane_g7

0x6a2f,	// (0x00015c1a) cell_cam4_burst_pane_g1

0xd473,	// (0x0001c65e) main_cam5_pane_t1_ParamLimits

0xd473,	// (0x0001c65e) main_cam5_pane_t1

0xd485,	// (0x0001c670) main_cam5_pane_t2_ParamLimits

0xd485,	// (0x0001c670) main_cam5_pane_t2

0xd497,	// (0x0001c682) main_cam5_pane_t3_ParamLimits

0xd497,	// (0x0001c682) main_cam5_pane_t3

0xd4a9,	// (0x0001c694) main_cam5_pane_t4_ParamLimits

0xd4a9,	// (0x0001c694) main_cam5_pane_t4

0xd4c1,	// (0x0001c6ac) main_cam5_pane_t5_ParamLimits

0xd4c1,	// (0x0001c6ac) main_cam5_pane_t5

0xd4d5,	// (0x0001c6c0) main_cam5_pane_t6_ParamLimits

0xd4d5,	// (0x0001c6c0) main_cam5_pane_t6

0xd4e9,	// (0x0001c6d4) main_cam5_pane_t7_ParamLimits

0xd4e9,	// (0x0001c6d4) main_cam5_pane_t7

0xd4fb,	// (0x0001c6e6) main_cam5_pane_t8_ParamLimits

0xd4fb,	// (0x0001c6e6) main_cam5_pane_t8

0xd517,	// (0x0001c702) main_cam5_pane_t9_ParamLimits

0xd517,	// (0x0001c702) main_cam5_pane_t9

0xd529,	// (0x0001c714) main_cam5_pane_t10_ParamLimits

0xd529,	// (0x0001c714) main_cam5_pane_t10

0xd53b,	// (0x0001c726) main_cam5_pane_t11_ParamLimits

0xd53b,	// (0x0001c726) main_cam5_pane_t11

0xd54d,	// (0x0001c738) main_cam5_pane_t12_ParamLimits

0xd54d,	// (0x0001c738) main_cam5_pane_t12

0xd562,	// (0x0001c74d) main_cam5_pane_t13_ParamLimits

0xd562,	// (0x0001c74d) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001ec38) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001ec38) main_cam5_pane_t

0x0280,	// (0x0000f46b) popup_scut_keymap_window_ParamLimits

0x0280,	// (0x0000f46b) popup_scut_keymap_window

0x6a44,	// (0x00015c2f) aid_size_cell_brow_shortcut

0x9d42,	// (0x00018f2d) bg_popup_window_pane_cp010

0x6a50,	// (0x00015c3b) grid_scut_pane

0x6a5c,	// (0x00015c47) cell_scut_pane_ParamLimits

0x6a5c,	// (0x00015c47) cell_scut_pane

0x6a73,	// (0x00015c5e) cell_scut_pane_g1

0xd57f,	// (0x0001c76a) cell_scut_pane_t1

0xd58e,	// (0x0001c779) cell_scut_pane_t2

0x6a7c,	// (0x00015c67) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001ec53) cell_scut_pane_t

0x465f,	// (0x0001384a) main_mup3_pane_g8_ParamLimits

0x465f,	// (0x0001384a) main_mup3_pane_g8

0x5b08,	// (0x00014cf3) area_vitu2_query_pane_ParamLimits

0x5b08,	// (0x00014cf3) area_vitu2_query_pane

0x67b9,	// (0x000159a4) input_focus_pane_cp08

0xd59d,	// (0x0001c788) area_vitu2_query_pane_g1

0x6a8a,	// (0x00015c75) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001ec5a) area_vitu2_query_pane_g

0x6a9b,	// (0x00015c86) area_vitu2_query_pane_t1_ParamLimits

0x6a9b,	// (0x00015c86) area_vitu2_query_pane_t1

0x6aaf,	// (0x00015c9a) area_vitu2_query_pane_t2_ParamLimits

0x6aaf,	// (0x00015c9a) area_vitu2_query_pane_t2

0x6ac3,	// (0x00015cae) area_vitu2_query_pane_t3_ParamLimits

0x6ac3,	// (0x00015cae) area_vitu2_query_pane_t3

0xd5a9,	// (0x0001c794) area_vitu2_query_pane_t4_ParamLimits

0xd5a9,	// (0x0001c794) area_vitu2_query_pane_t4

0xd5d1,	// (0x0001c7bc) area_vitu2_query_pane_t5_ParamLimits

0xd5d1,	// (0x0001c7bc) area_vitu2_query_pane_t5

0xd5f9,	// (0x0001c7e4) area_vitu2_query_pane_t6_ParamLimits

0xd5f9,	// (0x0001c7e4) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001ec5f) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001ec5f) area_vitu2_query_pane_t

0x6aeb,	// (0x00015cd6) bg_button_pane_cp018

0x6af9,	// (0x00015ce4) bg_button_pane_cp021

0x6b05,	// (0x00015cf0) bg_button_pane_cp022

0x6b16,	// (0x00015d01) input_focus_pane_cp09

0xa6b0,	// (0x0001989b) aid_size_touch_mv_arrow_left

0xa6db,	// (0x000198c6) aid_size_touch_mv_arrow_right

0x6259,	// (0x00015444) main_cset_slider_pane_g16_ParamLimits

0x6259,	// (0x00015444) main_cset_slider_pane_g16

0x6265,	// (0x00015450) main_cset_slider_pane_g17_ParamLimits

0x6265,	// (0x00015450) main_cset_slider_pane_g17

0x6a2f,	// (0x00015c1a) cell_cam4_burst_pane_g1_ParamLimits

0x930c,	// (0x000184f7) compa_mode_pane

0x6470,	// (0x0001565b) popup_vtel_slider_window_g3_ParamLimits

0x6470,	// (0x0001565b) popup_vtel_slider_window_g3

0x6487,	// (0x00015672) popup_vtel_slider_window_g4_ParamLimits

0x6487,	// (0x00015672) popup_vtel_slider_window_g4

0x649e,	// (0x00015689) popup_vtel_slider_window_t1_ParamLimits

0x649e,	// (0x00015689) popup_vtel_slider_window_t1

0x930c,	// (0x000184f7) main_cl_pane

0xbd3e,	// (0x0001af29) popup_imed_adjust2_window_ParamLimits

0xbd16,	// (0x0001af01) bg_tb_trans_pane_cp05_ParamLimits

0xc7c8,	// (0x0001b9b3) popup_imed_adjust2_window_g1_ParamLimits

0xc7d7,	// (0x0001b9c2) popup_imed_adjust2_window_g2_ParamLimits

0xc7d7,	// (0x0001b9c2) popup_imed_adjust2_window_g2

0xc7e3,	// (0x0001b9ce) popup_imed_adjust2_window_g3_ParamLimits

0xc7e3,	// (0x0001b9ce) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001e9ca) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001e9ca) popup_imed_adjust2_window_g

0xc7ef,	// (0x0001b9da) popup_imed_adjust2_window_t1_ParamLimits

0xc807,	// (0x0001b9f2) slider_imed_adjust_pane_ParamLimits

0xc81b,	// (0x0001ba06) slider_imed_adjust_pane_g1_ParamLimits

0xc82b,	// (0x0001ba16) slider_imed_adjust_pane_g2_ParamLimits

0xc83b,	// (0x0001ba26) slider_imed_adjust_pane_g3_ParamLimits

0xc84c,	// (0x0001ba37) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001e9d1) slider_imed_adjust_pane_g_ParamLimits

0x5892,	// (0x00014a7d) aid_touch_area_cam4_ParamLimits

0x5892,	// (0x00014a7d) aid_touch_area_cam4

0xcf3e,	// (0x0001c129) battery_pane_cp01

0x5961,	// (0x00014b4c) main_camera4_pane_g6_ParamLimits

0x5961,	// (0x00014b4c) main_camera4_pane_g6

0x598b,	// (0x00014b76) main_camera4_pane_t2_ParamLimits

0x598b,	// (0x00014b76) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001ead4) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001ead4) main_camera4_pane_t

0x59c0,	// (0x00014bab) aid_touch_area_vid4_ParamLimits

0x59c0,	// (0x00014bab) aid_touch_area_vid4

0x5a14,	// (0x00014bff) main_video4_pane_g5_ParamLimits

0x5a14,	// (0x00014bff) main_video4_pane_g5

0x5a39,	// (0x00014c24) vid4_progress_pane_ParamLimits

0x5a39,	// (0x00014c24) vid4_progress_pane

0xd222,	// (0x0001c40d) main_cset_slider_pane_g18_ParamLimits

0xd222,	// (0x0001c40d) main_cset_slider_pane_g18

0xd467,	// (0x0001c652) cell_cam4_burst_pane_g2_ParamLimits

0xd467,	// (0x0001c652) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001ec33) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001ec33) cell_cam4_burst_pane_g

0x9afe,	// (0x00018ce9) bg_cl_pane_ParamLimits

0x9afe,	// (0x00018ce9) bg_cl_pane

0x6b27,	// (0x00015d12) cl_header_pane_ParamLimits

0x6b27,	// (0x00015d12) cl_header_pane

0x6b3b,	// (0x00015d26) cl_listscroll_pane_ParamLimits

0x6b3b,	// (0x00015d26) cl_listscroll_pane

0xd645,	// (0x0001c830) bg_cl_pane_g1

0xd64d,	// (0x0001c838) bg_cl_pane_g2

0xd655,	// (0x0001c840) bg_cl_pane_g3

0xd65d,	// (0x0001c848) bg_cl_pane_g4

0xd665,	// (0x0001c850) bg_cl_pane_g5

0xd66d,	// (0x0001c858) bg_cl_pane_g6

0xd675,	// (0x0001c860) bg_cl_pane_g7

0xd67d,	// (0x0001c868) bg_cl_pane_g8

0xd685,	// (0x0001c870) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001ec6e) bg_cl_pane_g

0x6b4b,	// (0x00015d36) aid_height_cl_leading_ParamLimits

0x6b4b,	// (0x00015d36) aid_height_cl_leading

0x6b57,	// (0x00015d42) aid_height_cl_text_ParamLimits

0x6b57,	// (0x00015d42) aid_height_cl_text

0x937c,	// (0x00018567) bg_cl_header_pane_ParamLimits

0x937c,	// (0x00018567) bg_cl_header_pane

0x6b76,	// (0x00015d61) cl_header_pane_g1_ParamLimits

0x6b76,	// (0x00015d61) cl_header_pane_g1

0x6b8c,	// (0x00015d77) cl_header_pane_t1_ParamLimits

0x6b8c,	// (0x00015d77) cl_header_pane_t1

0xd68d,	// (0x0001c878) cl_list_pane

0xd1f5,	// (0x0001c3e0) hc_scroll_pane_cp01

0x9f85,	// (0x00019170) bg_cl_header_pane_g1

0xd0a5,	// (0x0001c290) bg_cl_header_pane_g2

0x9fa5,	// (0x00019190) bg_cl_header_pane_g3

0xd0b5,	// (0x0001c2a0) bg_cl_header_pane_g4

0xd0ad,	// (0x0001c298) bg_cl_header_pane_g5

0xd356,	// (0x0001c541) bg_cl_header_pane_g6

0xd0cd,	// (0x0001c2b8) bg_cl_header_pane_g7

0xd0d5,	// (0x0001c2c0) bg_cl_header_pane_g8

0xd0c5,	// (0x0001c2b0) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001ec81) bg_cl_header_pane_g

0x6ba5,	// (0x00015d90) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6ba5,	// (0x00015d90) hc_cl_list_double_graphic_heading_pane

0x6bb6,	// (0x00015da1) hc_cl_list_single_graphic_pane_ParamLimits

0x6bb6,	// (0x00015da1) hc_cl_list_single_graphic_pane

0x6bcf,	// (0x00015dba) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6bcf,	// (0x00015dba) hc_cl_list_single_graphic_pane_g1

0x6bdb,	// (0x00015dc6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6bdb,	// (0x00015dc6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001ec94) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001ec94) hc_cl_list_single_graphic_pane_g

0x6bef,	// (0x00015dda) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6bef,	// (0x00015dda) hc_cl_list_single_graphic_pane_t1

0x6bcf,	// (0x00015dba) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6bcf,	// (0x00015dba) hc_cl_list_double_graphic_heading_pane_g1

0x6c04,	// (0x00015def) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c04,	// (0x00015def) hc_cl_list_double_graphic_heading_pane_g2

0x6c18,	// (0x00015e03) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c18,	// (0x00015e03) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001ec99) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001ec99) hc_cl_list_double_graphic_heading_pane_g

0x6c2c,	// (0x00015e17) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c2c,	// (0x00015e17) hc_cl_list_double_graphic_heading_pane_t1

0x6c41,	// (0x00015e2c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c41,	// (0x00015e2c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001eca0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001eca0) hc_cl_list_double_graphic_heading_pane_t

0xd69e,	// (0x0001c889) vid4_progress_pane_g1

0xd6ae,	// (0x0001c899) vid4_progress_pane_g2

0x6c56,	// (0x00015e41) vid4_progress_pane_g3

0xd6be,	// (0x0001c8a9) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001eca5) vid4_progress_pane_g

0x6c68,	// (0x00015e53) vid4_progress_pane_t1

0xd6dc,	// (0x0001c8c7) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001ecb0) vid4_progress_pane_t

0x6c7e,	// (0x00015e69) wait_bar_pane_cp07

0xc024,	// (0x0001b20f) blid_firmament_pane_ParamLimits

0xc067,	// (0x0001b252) popup_blid_sat_info2_window_g1

0xc08b,	// (0x0001b276) popup_blid_sat_info2_window_t3

0xc099,	// (0x0001b284) popup_blid_sat_info2_window_t4

0xc0a7,	// (0x0001b292) popup_blid_sat_info2_window_t5

0xc0b5,	// (0x0001b2a0) popup_blid_sat_info2_window_t6

0xc0c5,	// (0x0001b2b0) popup_blid_sat_info2_window_t7

0xc0d3,	// (0x0001b2be) popup_blid_sat_info2_window_t8

0xc0e1,	// (0x0001b2cc) popup_blid_sat_info2_window_t9

0xc0ef,	// (0x0001b2da) popup_blid_sat_info2_window_t10

0xc1b3,	// (0x0001b39e) aid_firma_cardinal_ParamLimits

0xc1c7,	// (0x0001b3b2) blid_firmament_pane_t1_ParamLimits

0xc1de,	// (0x0001b3c9) blid_firmament_pane_t2_ParamLimits

0xc1f5,	// (0x0001b3e0) blid_firmament_pane_t3_ParamLimits

0xc20c,	// (0x0001b3f7) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0001e8be) blid_firmament_pane_t_ParamLimits

0xc223,	// (0x0001b40e) blid_sat_info_pane_ParamLimits

0x937c,	// (0x00018567) main_cam_set_pane_ParamLimits

0x4f23,	// (0x0001410e) aid_size_cell_colour_35_ParamLimits

0x4f43,	// (0x0001412e) aid_size_cell_colour_112_ParamLimits

0x4f63,	// (0x0001414e) aid_size_cell_effect_ParamLimits

0xbd16,	// (0x0001af01) bg_tb_trans_pane_cp02_ParamLimits

0xa223,	// (0x0001940e) heading_imed_pane_ParamLimits

0x4f83,	// (0x0001416e) listscroll_imed_pane_ParamLimits

0xb33c,	// (0x0001a527) popup_call2_audio_first_window_g5_ParamLimits

0xb33c,	// (0x0001a527) popup_call2_audio_first_window_g5

0x553d,	// (0x00014728) aid_size_touch_image3_arrow_left_ParamLimits

0x553d,	// (0x00014728) aid_size_touch_image3_arrow_left

0x5569,	// (0x00014754) aid_size_touch_image3_arrow_right_ParamLimits

0x5569,	// (0x00014754) aid_size_touch_image3_arrow_right

0xd6f1,	// (0x0001c8dc) vid4_progress_pane_t3

0x52af,	// (0x0001449a) main_hwr_training_symbol_option_pane_ParamLimits

0x52af,	// (0x0001449a) main_hwr_training_symbol_option_pane

0xcabe,	// (0x0001bca9) popup_hwr_training_preview_window_ParamLimits

0xcabe,	// (0x0001bca9) popup_hwr_training_preview_window

0x52cf,	// (0x000144ba) hwr_training_navi_pane_g5_ParamLimits

0x52cf,	// (0x000144ba) hwr_training_navi_pane_g5

0xd081,	// (0x0001c26c) popup_char_count_window

0x937c,	// (0x00018567) bg_popup_sub_pane_cp20_ParamLimits

0x65c4,	// (0x000157af) list_vitu2_match_list_pane_ParamLimits

0x65d3,	// (0x000157be) vitu2_page_scroll_pane_ParamLimits

0x65d3,	// (0x000157be) vitu2_page_scroll_pane

0xd729,	// (0x0001c914) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd729,	// (0x0001c914) list_single_hwr_training_symbol_option_pane

0xd73c,	// (0x0001c927) list_single_hwr_training_symbol_option_pane_g1

0xd744,	// (0x0001c92f) list_single_hwr_training_symbol_option_pane_t1

0xd752,	// (0x0001c93d) bg_button_pane_cp023

0xd75b,	// (0x0001c946) bg_button_pane_cp024

0x6cbe,	// (0x00015ea9) vitu2_page_scroll_pane_g1

0x6cc6,	// (0x00015eb1) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001ecb7) vitu2_page_scroll_pane_g

0x6cce,	// (0x00015eb9) vitu2_page_scroll_pane_t1

0xbf40,	// (0x0001b12b) popup_char_count_window_g1

0xd78e,	// (0x0001c979) popup_char_count_window_g2

0xd797,	// (0x0001c982) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001ecbc) popup_char_count_window_g

0xd7a0,	// (0x0001c98b) popup_char_count_window_t1

0x930c,	// (0x000184f7) main_vded2_pane

0xc7b4,	// (0x0001b99f) aid_size_cell_imed_line

0xc7be,	// (0x0001b9a9) grid_imed_line_width_pane

0xcff4,	// (0x0001c1df) vid4_indicators_pane_g4

0xd7ae,	// (0x0001c999) cell_imed_line_width_pane_ParamLimits

0xd7ae,	// (0x0001c999) cell_imed_line_width_pane

0xd7c2,	// (0x0001c9ad) cell_imed_line_width_pane_g1

0xd7cb,	// (0x0001c9b6) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001ecc3) cell_imed_line_width_pane_g

0x6cdd,	// (0x00015ec8) main_vded2_pane_g1_ParamLimits

0x6cdd,	// (0x00015ec8) main_vded2_pane_g1

0x6cf3,	// (0x00015ede) main_vded2_pane_g2_ParamLimits

0x6cf3,	// (0x00015ede) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001ecc8) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001ecc8) main_vded2_pane_g

0x6d05,	// (0x00015ef0) vded2_slider_pane_ParamLimits

0x6d05,	// (0x00015ef0) vded2_slider_pane

0x6d15,	// (0x00015f00) aid_size_touch_vded2_end

0x6d1f,	// (0x00015f0a) aid_size_touch_vded2_playhead

0xd7d3,	// (0x0001c9be) aid_size_touch_vded2_start

0xd7db,	// (0x0001c9c6) vded2_slider_bg_pane

0xd7e4,	// (0x0001c9cf) vded2_slider_pane_g1

0xd7ed,	// (0x0001c9d8) vded2_slider_pane_g2

0x6d29,	// (0x00015f14) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001eccd) vded2_slider_pane_g

0xd7f5,	// (0x0001c9e0) vded2_slider_bg_pane_g1

0xd7fe,	// (0x0001c9e9) vded2_slider_bg_pane_g2

0xd807,	// (0x0001c9f2) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001ecd4) vded2_slider_bg_pane_g

0x2cb4,	// (0x00011e9f) aid_postcard_touch_down_pane_ParamLimits

0x2cb4,	// (0x00011e9f) aid_postcard_touch_down_pane

0x2cca,	// (0x00011eb5) aid_postcard_touch_up_pane_ParamLimits

0x2cca,	// (0x00011eb5) aid_postcard_touch_up_pane

0x930c,	// (0x000184f7) main_blid2_pane

0xbd24,	// (0x0001af0f) popup_blid2_search_window

0x930c,	// (0x000184f7) blid2_gps_pane

0x930c,	// (0x000184f7) blid2_navig_pane

0x930c,	// (0x000184f7) blid2_search_pane

0x930c,	// (0x000184f7) blid2_tripm_pane

0x6d34,	// (0x00015f1f) blid2_search_pane_g1_ParamLimits

0x6d34,	// (0x00015f1f) blid2_search_pane_g1

0x6d4c,	// (0x00015f37) blid2_search_pane_t1_ParamLimits

0x6d4c,	// (0x00015f37) blid2_search_pane_t1

0x6d5e,	// (0x00015f49) aid_size_cell_blid2_gps_ParamLimits

0x6d5e,	// (0x00015f49) aid_size_cell_blid2_gps

0x6d76,	// (0x00015f61) blid2_gps_pane_g1_ParamLimits

0x6d76,	// (0x00015f61) blid2_gps_pane_g1

0x6d8a,	// (0x00015f75) grid_blid2_satellite_pane_ParamLimits

0x6d8a,	// (0x00015f75) grid_blid2_satellite_pane

0x6da4,	// (0x00015f8f) blid2_navig_pane_g1_ParamLimits

0x6da4,	// (0x00015f8f) blid2_navig_pane_g1

0x6db0,	// (0x00015f9b) blid2_navig_pane_t1_ParamLimits

0x6db0,	// (0x00015f9b) blid2_navig_pane_t1

0x6dcb,	// (0x00015fb6) blid2_navig_pane_t2_ParamLimits

0x6dcb,	// (0x00015fb6) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001ecdb) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001ecdb) blid2_navig_pane_t

0x6de6,	// (0x00015fd1) blid2_navig_ring_pane_ParamLimits

0x6de6,	// (0x00015fd1) blid2_navig_ring_pane

0x6dff,	// (0x00015fea) blid2_speed_pane_ParamLimits

0x6dff,	// (0x00015fea) blid2_speed_pane

0x6e0b,	// (0x00015ff6) blid2_tripm_pane_g1_ParamLimits

0x6e0b,	// (0x00015ff6) blid2_tripm_pane_g1

0x6e26,	// (0x00016011) blid2_tripm_pane_g2_ParamLimits

0x6e26,	// (0x00016011) blid2_tripm_pane_g2

0x6e3a,	// (0x00016025) blid2_tripm_pane_g3_ParamLimits

0x6e3a,	// (0x00016025) blid2_tripm_pane_g3

0x6e4e,	// (0x00016039) blid2_tripm_pane_g4_ParamLimits

0x6e4e,	// (0x00016039) blid2_tripm_pane_g4

0x6e62,	// (0x0001604d) blid2_tripm_pane_g5_ParamLimits

0x6e62,	// (0x0001604d) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001ece0) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001ece0) blid2_tripm_pane_g

0x6e88,	// (0x00016073) blid2_tripm_pane_t1_ParamLimits

0x6e88,	// (0x00016073) blid2_tripm_pane_t1

0x6ea3,	// (0x0001608e) blid2_tripm_pane_t2_ParamLimits

0x6ea3,	// (0x0001608e) blid2_tripm_pane_t2

0x6ebc,	// (0x000160a7) blid2_tripm_pane_t3_ParamLimits

0x6ebc,	// (0x000160a7) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001eced) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001eced) blid2_tripm_pane_t

0x6f03,	// (0x000160ee) cell_blid2_satellite_pane_ParamLimits

0x6f03,	// (0x000160ee) cell_blid2_satellite_pane

0x6f21,	// (0x0001610c) cell_blid2_satellite_pane_g1

0xd810,	// (0x0001c9fb) cell_blid2_satellite_pane_t1

0xc233,	// (0x0001b41e) blid2_speed_pane_g1

0xd81e,	// (0x0001ca09) blid2_speed_pane_t1

0xd82c,	// (0x0001ca17) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001ecf6) blid2_speed_pane_t

0xc233,	// (0x0001b41e) blid2_navig_ring_pane_g1

0x6f2a,	// (0x00016115) blid2_navig_ring_pane_g2

0x6f32,	// (0x0001611d) blid2_navig_ring_pane_g3

0x6f3a,	// (0x00016125) blid2_navig_ring_pane_g4

0x6f42,	// (0x0001612d) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001ecfb) blid2_navig_ring_pane_g

0x930c,	// (0x000184f7) bg_popup_window_pane_cp011

0xd83a,	// (0x0001ca25) popup_blid2_search_window_g1

0xd842,	// (0x0001ca2d) popup_blid2_search_window_t1

0xd850,	// (0x0001ca3b) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001ed06) popup_blid2_search_window_t

0x9e94,	// (0x0001907f) main_browser_pane_g1

0x9afe,	// (0x00018ce9) main_browser_pane_ParamLimits

0x937c,	// (0x00018567) bg_button_pane_cp011_ParamLimits

0x5e30,	// (0x0001501b) cell_vitu2_function_pane_g1_ParamLimits

0xbd16,	// (0x0001af01) bg_popup_sub_pane_cp22_ParamLimits

0x67b9,	// (0x000159a4) input_focus_pane_cp08_ParamLimits

0x67d0,	// (0x000159bb) popup_vitu2_query_button_pane_ParamLimits

0x67d0,	// (0x000159bb) popup_vitu2_query_button_pane

0x67e1,	// (0x000159cc) popup_vitu2_query_input_button_pane

0xd3b1,	// (0x0001c59c) popup_vitu2_query_window_g1_ParamLimits

0x67eb,	// (0x000159d6) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001ec07) popup_vitu2_query_window_g_ParamLimits

0x930c,	// (0x000184f7) bg_button_pane_cp026

0x6f4a,	// (0x00016135) popup_vitu2_query_input_button_pane_g1

0x930c,	// (0x000184f7) bg_button_pane_cp025

0xd85e,	// (0x0001ca49) popup_vitu2_query_button_pane_t1

0x434c,	// (0x00013537) main_mp3_pane_t6

0x435a,	// (0x00013545) popup_slider_window_cp01

0xcf5a,	// (0x0001c145) cam4_battery_pane

0xcfb3,	// (0x0001c19e) cam4_battery_pane_cp02

0xd696,	// (0x0001c881) cam4_battery_pane_cp01

0xd696,	// (0x0001c881) cam4_battery_pane_cp03

0xc233,	// (0x0001b41e) cam4_battery_pane_g1

0xd86c,	// (0x0001ca57) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001ed0b) cam4_battery_pane_g

0xc0fd,	// (0x0001b2e8) popup_blid_sat_info2_window_t11

0xa6b0,	// (0x0001989b) aid_size_touch_mv_arrow_left_ParamLimits

0xa6db,	// (0x000198c6) aid_size_touch_mv_arrow_right_ParamLimits

0xa739,	// (0x00019924) navi_pane_g1_ParamLimits

0xa745,	// (0x00019930) navi_pane_g2_ParamLimits

0xa773,	// (0x0001995e) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e5d0) navi_pane_g_ParamLimits

0x271e,	// (0x00011909) navi_pane_mv_t1_ParamLimits

0x4f8f,	// (0x0001417a) grid_imed_effect_pane_ParamLimits

0x1308,	// (0x000104f3) aid_placing_vt_slider_lsc

0x9de3,	// (0x00018fce) aid_placing_vt_slider_prt

0x937c,	// (0x00018567) bg_tb_trans_pane_cp01_ParamLimits

0xc3b3,	// (0x0001b59e) popup_image_details_window_g1_ParamLimits

0xc3c6,	// (0x0001b5b1) popup_image_details_window_g2_ParamLimits

0xc3db,	// (0x0001b5c6) popup_image_details_window_g3_ParamLimits

0xc3db,	// (0x0001b5c6) popup_image_details_window_g3

0xf718,	// (0x0001e903) popup_image_details_window_g_ParamLimits

0xc3ef,	// (0x0001b5da) popup_image_details_window_t1_ParamLimits

0xc401,	// (0x0001b5ec) popup_image_details_window_t2_ParamLimits

0xc41a,	// (0x0001b605) popup_image_details_window_t3_ParamLimits

0xc42e,	// (0x0001b619) popup_image_details_window_t4_ParamLimits

0xc449,	// (0x0001b634) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0001e90a) popup_image_details_window_t_ParamLimits

0x6b63,	// (0x00015d4e) cl_header_name_pane_ParamLimits

0x6b63,	// (0x00015d4e) cl_header_name_pane

0x6f52,	// (0x0001613d) cl_header_name_pane_t1_ParamLimits

0x6f52,	// (0x0001613d) cl_header_name_pane_t1

0x6f73,	// (0x0001615e) cl_header_name_pane_t2_ParamLimits

0x6f73,	// (0x0001615e) cl_header_name_pane_t2

0x6fb5,	// (0x000161a0) cl_header_name_pane_t3_ParamLimits

0x6fb5,	// (0x000161a0) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001ed10) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001ed10) cl_header_name_pane_t

0xa802,	// (0x000199ed) navi_pane_mv_g2_ParamLimits

0xd03e,	// (0x0001c229) field_vitu2_entry_pane_g1_ParamLimits

0xd04a,	// (0x0001c235) field_vitu2_entry_pane_g2_ParamLimits

0xd056,	// (0x0001c241) field_vitu2_entry_pane_g3_ParamLimits

0xd056,	// (0x0001c241) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001eb06) field_vitu2_entry_pane_g_ParamLimits

0xd089,	// (0x0001c274) cell_vitu2_itu_pane_g1_ParamLimits

0x5cd8,	// (0x00014ec3) cell_vitu2_itu_pane_g2_ParamLimits

0x5cd8,	// (0x00014ec3) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001eb12) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001eb12) cell_vitu2_itu_pane_g

0x937c,	// (0x00018567) bg_vkb2_func_pane_cp05_ParamLimits

0x937c,	// (0x00018567) bg_vkb2_func_pane_cp05

0x937c,	// (0x00018567) bg_vkb2_func_pane_cp03

0x937c,	// (0x00018567) bg_vkb2_func_pane_cp04

0x937c,	// (0x00018567) bg_vkb2_func_pane_cp10_ParamLimits

0x937c,	// (0x00018567) bg_vkb2_func_pane_cp10

0x6b05,	// (0x00015cf0) bg_vkb2_func_pane_cp08

0x6aeb,	// (0x00015cd6) bg_vkb2_func_pane_cp06

0x6af9,	// (0x00015ce4) bg_vkb2_func_pane_cp07

0xd764,	// (0x0001c94f) bg_vkb2_func_pane_cp11_ParamLimits

0xd764,	// (0x0001c94f) bg_vkb2_func_pane_cp11

0xd779,	// (0x0001c964) bg_vkb2_func_pane_cp12_ParamLimits

0xd779,	// (0x0001c964) bg_vkb2_func_pane_cp12

0x930c,	// (0x000184f7) bg_vkb2_func_pane_cp09

0xd0a5,	// (0x0001c290) bg_vkb2_func_pane_g1

0x9fa5,	// (0x00019190) bg_vkb2_func_pane_g2

0xd0ad,	// (0x0001c298) bg_vkb2_func_pane_g3

0xd0b5,	// (0x0001c2a0) bg_vkb2_func_pane_g4

0xd356,	// (0x0001c541) bg_vkb2_func_pane_g5

0xd0cd,	// (0x0001c2b8) bg_vkb2_func_pane_g6

0xd0d5,	// (0x0001c2c0) bg_vkb2_func_pane_g7

0xd0c5,	// (0x0001c2b0) bg_vkb2_func_pane_g8

0x9f85,	// (0x00019170) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001ed17) bg_vkb2_func_pane_g

0x6e76,	// (0x00016061) blid2_tripm_pane_g6_ParamLimits

0x6e76,	// (0x00016061) blid2_tripm_pane_g6

0xcdaf,	// (0x0001bf9a) mp4_progress_pane_g1

0x6eef,	// (0x000160da) blid2_tripm_values_pane_ParamLimits

0x6eef,	// (0x000160da) blid2_tripm_values_pane

0x6fe6,	// (0x000161d1) blid2_tripm_values_pane_t1

0x6ff4,	// (0x000161df) blid2_tripm_values_pane_t2

0x7002,	// (0x000161ed) blid2_tripm_values_pane_t3

0x7010,	// (0x000161fb) blid2_tripm_values_pane_t4

0x701e,	// (0x00016209) blid2_tripm_values_pane_t5

0x702c,	// (0x00016217) blid2_tripm_values_pane_t6

0x703a,	// (0x00016225) blid2_tripm_values_pane_t7

0x7048,	// (0x00016233) blid2_tripm_values_pane_t8

0x7056,	// (0x00016241) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001ed2a) blid2_tripm_values_pane_t

0x134a,	// (0x00010535) call_video_pane_t1_ParamLimits

0x1368,	// (0x00010553) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001e459) call_video_pane_t_ParamLimits

0x2c01,	// (0x00011dec) msg_header_pane_g1_ParamLimits

0xa9fc,	// (0x00019be7) msg_header_pane_g2_ParamLimits

0xa9fc,	// (0x00019be7) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e673) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e673) msg_header_pane_g

0x9afe,	// (0x00018ce9) main_clock2_pane_ParamLimits

0x4c88,	// (0x00013e73) grid_clock2_toolbar_pane_ParamLimits

0x4c88,	// (0x00013e73) grid_clock2_toolbar_pane

0x4c88,	// (0x00013e73) listscroll_clock2_pane_ParamLimits

0x4c88,	// (0x00013e73) listscroll_clock2_pane

0x4d81,	// (0x00013f6c) main_clock2_pane_t3_ParamLimits

0x4d81,	// (0x00013f6c) main_clock2_pane_t3

0x4da5,	// (0x00013f90) main_clock2_pane_t4_ParamLimits

0x4da5,	// (0x00013f90) main_clock2_pane_t4

0xd876,	// (0x0001ca61) cell_clock2_toolbar_pane

0xd87e,	// (0x0001ca69) cell_clock2_toolbar_pane_cp01

0xd87e,	// (0x0001ca69) cell_clock2_toolbar_pane_cp02

0xd886,	// (0x0001ca71) cell_clock2_toolbar_pane_cp03

0xd88e,	// (0x0001ca79) list_clock2_pane

0xa626,	// (0x00019811) scroll_pane_cp10

0xd896,	// (0x0001ca81) list_single_clock2_pane_ParamLimits

0xd896,	// (0x0001ca81) list_single_clock2_pane

0x9d42,	// (0x00018f2d) list_highlight_pane_cp08

0xd8a3,	// (0x0001ca8e) list_single_clock2_pane_t1

0xd8b1,	// (0x0001ca9c) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001ed3d) list_single_clock2_pane_t

0x930c,	// (0x000184f7) bg_button_pane_cp10

0xd8bf,	// (0x0001caaa) cell_clock2_toolbar_pane_g1

0x2c40,	// (0x00011e2b) aid_main_viewer_pane_g1_ParamLimits

0x2c40,	// (0x00011e2b) aid_main_viewer_pane_g1

0x2c4e,	// (0x00011e39) aid_main_viewer_pane_g2_ParamLimits

0x2c4e,	// (0x00011e39) aid_main_viewer_pane_g2

0x2c5c,	// (0x00011e47) aid_main_viewer_pane_g3_ParamLimits

0x2c5c,	// (0x00011e47) aid_main_viewer_pane_g3

0x2c6b,	// (0x00011e56) aid_main_viewer_pane_g4_ParamLimits

0x2c6b,	// (0x00011e56) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e684) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e684) aid_main_viewer_pane_g

0x3579,	// (0x00012764) main_calc_pane_ParamLimits

0x358d,	// (0x00012778) main_dialer2_pane_ParamLimits

0x930c,	// (0x000184f7) main_cam6_pane

0x930c,	// (0x000184f7) main_vid6_pane

0x4c94,	// (0x00013e7f) listscroll_gen_pane_cp06_ParamLimits

0x4c94,	// (0x00013e7f) listscroll_gen_pane_cp06

0x4dc8,	// (0x00013fb3) main_clock2_pane_t5_ParamLimits

0x4dc8,	// (0x00013fb3) main_clock2_pane_t5

0x4e24,	// (0x0001400f) aid_call2_pane_cp10_ParamLimits

0x4e36,	// (0x00014021) aid_call_pane_cp10_ParamLimits

0xa6a4,	// (0x0001988f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa6a4,	// (0x0001988f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4e48,	// (0x00014033) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4e48,	// (0x00014033) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa6a4,	// (0x0001988f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001e9bf) popup_clock_analogue_window_cp10_g_ParamLimits

0x4e5a,	// (0x00014045) popup_clock_analogue_window_cp10_t1_ParamLimits

0x54ea,	// (0x000146d5) cell_dialer2_keypad_pane_g2_ParamLimits

0x54ea,	// (0x000146d5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001eaa5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001eaa5) cell_dialer2_keypad_pane_g

0x5506,	// (0x000146f1) cell_dialer2_keypad_pane_t1

0x614c,	// (0x00015337) main_cset_text2_pane_ParamLimits

0x614c,	// (0x00015337) main_cset_text2_pane

0xd59d,	// (0x0001c788) area_vitu2_query_pane_g1_ParamLimits

0x6a8a,	// (0x00015c75) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001ec5a) area_vitu2_query_pane_g_ParamLimits

0xd621,	// (0x0001c80c) area_vitu2_query_pane_t7_ParamLimits

0xd621,	// (0x0001c80c) area_vitu2_query_pane_t7

0x6aeb,	// (0x00015cd6) bg_button_pane_cp018_ParamLimits

0x6af9,	// (0x00015ce4) bg_button_pane_cp021_ParamLimits

0x6b05,	// (0x00015cf0) bg_button_pane_cp022_ParamLimits

0x6b05,	// (0x00015cf0) bg_vkb2_func_pane_cp08_ParamLimits

0x6aeb,	// (0x00015cd6) bg_vkb2_func_pane_cp06_ParamLimits

0x6af9,	// (0x00015ce4) bg_vkb2_func_pane_cp07_ParamLimits

0x6b16,	// (0x00015d01) input_focus_pane_cp09_ParamLimits

0xd8c7,	// (0x0001cab2) cam6_autofocus_pane_ParamLimits

0xd8c7,	// (0x0001cab2) cam6_autofocus_pane

0x7064,	// (0x0001624f) cam6_image_uncrop_pane_ParamLimits

0x7064,	// (0x0001624f) cam6_image_uncrop_pane

0x7073,	// (0x0001625e) cam6_indi_pane_ParamLimits

0x7073,	// (0x0001625e) cam6_indi_pane

0x7089,	// (0x00016274) cam6_mode_pane_ParamLimits

0x7089,	// (0x00016274) cam6_mode_pane

0x709b,	// (0x00016286) cam6_timer_pane_ParamLimits

0x709b,	// (0x00016286) cam6_timer_pane

0x70a7,	// (0x00016292) cam6_zoom_pane_ParamLimits

0x70a7,	// (0x00016292) cam6_zoom_pane

0x70b3,	// (0x0001629e) cam6_mode_pane_g1_ParamLimits

0x70b3,	// (0x0001629e) cam6_mode_pane_g1

0x70c3,	// (0x000162ae) cam6_mode_pane_g2_ParamLimits

0x70c3,	// (0x000162ae) cam6_mode_pane_g2

0x70d3,	// (0x000162be) cam6_mode_pane_g3_ParamLimits

0x70d3,	// (0x000162be) cam6_mode_pane_g3

0x70e3,	// (0x000162ce) cam6_mode_pane_g4_ParamLimits

0x70e3,	// (0x000162ce) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001ed42) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001ed42) cam6_mode_pane_g

0xd18f,	// (0x0001c37a) bg_tb_trans_pane_cp08_ParamLimits

0xd18f,	// (0x0001c37a) bg_tb_trans_pane_cp08

0xd8d5,	// (0x0001cac0) cam6_battery_pane_ParamLimits

0xd8d5,	// (0x0001cac0) cam6_battery_pane

0xd8eb,	// (0x0001cad6) cam6_indi_pane_g1_ParamLimits

0xd8eb,	// (0x0001cad6) cam6_indi_pane_g1

0xd8fd,	// (0x0001cae8) cam6_indi_pane_g2_ParamLimits

0xd8fd,	// (0x0001cae8) cam6_indi_pane_g2

0xd90f,	// (0x0001cafa) cam6_indi_pane_g3_ParamLimits

0xd90f,	// (0x0001cafa) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001ed4b) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001ed4b) cam6_indi_pane_g

0xd921,	// (0x0001cb0c) cam6_indi_pane_t1_ParamLimits

0xd921,	// (0x0001cb0c) cam6_indi_pane_t1

0x70f3,	// (0x000162de) cam6_autofocus_pane_g1

0x70fb,	// (0x000162e6) cam6_autofocus_pane_g2

0x7103,	// (0x000162ee) cam6_autofocus_pane_g3

0x710b,	// (0x000162f6) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001ed52) cam6_autofocus_pane_g

0xd947,	// (0x0001cb32) cam6_timer_pane_g1

0xd94f,	// (0x0001cb3a) cam6_timer_pane_t1

0xd95d,	// (0x0001cb48) cam6_zoom_cont_pane

0xd965,	// (0x0001cb50) cam6_zoom_pane_g1

0xd96d,	// (0x0001cb58) cam6_zoom_pane_g2

0x7113,	// (0x000162fe) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001ed5b) cam6_zoom_pane_g

0xc233,	// (0x0001b41e) cam6_battery_pane_g1

0xc233,	// (0x0001b41e) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0001e8c7) cam6_battery_pane_g

0xd975,	// (0x0001cb60) cam6_zoom_cont_pane_g1

0xd97e,	// (0x0001cb69) cam6_zoom_cont_pane_g2

0xd987,	// (0x0001cb72) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001ed62) cam6_zoom_cont_pane_g

0x7130,	// (0x0001631b) cam6_mode_pane_cp_ParamLimits

0x7130,	// (0x0001631b) cam6_mode_pane_cp

0x70a7,	// (0x00016292) cam6_zoom_pane_cp_ParamLimits

0x70a7,	// (0x00016292) cam6_zoom_pane_cp

0x7142,	// (0x0001632d) vid6_image_uncrop_cif_pane_ParamLimits

0x7142,	// (0x0001632d) vid6_image_uncrop_cif_pane

0x7152,	// (0x0001633d) vid6_image_uncrop_nhd_pane_ParamLimits

0x7152,	// (0x0001633d) vid6_image_uncrop_nhd_pane

0x7064,	// (0x0001624f) vid6_image_uncrop_vga_pane_ParamLimits

0x7064,	// (0x0001624f) vid6_image_uncrop_vga_pane

0x7161,	// (0x0001634c) vid6_image_uncrop_wvga_pane_ParamLimits

0x7161,	// (0x0001634c) vid6_image_uncrop_wvga_pane

0x7170,	// (0x0001635b) vid6_indi_pane_ParamLimits

0x7170,	// (0x0001635b) vid6_indi_pane

0xd18f,	// (0x0001c37a) bg_tb_trans_pane_cp09_ParamLimits

0xd18f,	// (0x0001c37a) bg_tb_trans_pane_cp09

0xd99f,	// (0x0001cb8a) cam6_battery_pane_cp_ParamLimits

0xd99f,	// (0x0001cb8a) cam6_battery_pane_cp

0xd9ab,	// (0x0001cb96) vid6_indi_pane_g1_ParamLimits

0xd9ab,	// (0x0001cb96) vid6_indi_pane_g1

0xd9bd,	// (0x0001cba8) vid6_indi_pane_g2_ParamLimits

0xd9bd,	// (0x0001cba8) vid6_indi_pane_g2

0xd9cf,	// (0x0001cbba) vid6_indi_pane_g3_ParamLimits

0xd9cf,	// (0x0001cbba) vid6_indi_pane_g3

0xd9e4,	// (0x0001cbcf) vid6_indi_pane_g4_ParamLimits

0xd9e4,	// (0x0001cbcf) vid6_indi_pane_g4

0xd9f9,	// (0x0001cbe4) vid6_indi_pane_g5_ParamLimits

0xd9f9,	// (0x0001cbe4) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001ed69) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001ed69) vid6_indi_pane_g

0xda13,	// (0x0001cbfe) vid6_indi_pane_t1_ParamLimits

0xda13,	// (0x0001cbfe) vid6_indi_pane_t1

0xda29,	// (0x0001cc14) vid6_indi_pane_t2_ParamLimits

0xda29,	// (0x0001cc14) vid6_indi_pane_t2

0xda51,	// (0x0001cc3c) vid6_indi_pane_t3_ParamLimits

0xda51,	// (0x0001cc3c) vid6_indi_pane_t3

0xda79,	// (0x0001cc64) vid6_indi_pane_t4_ParamLimits

0xda79,	// (0x0001cc64) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001ed74) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001ed74) vid6_indi_pane_t

0xda9d,	// (0x0001cc88) wait_bar_pane_cp08

0x7188,	// (0x00016373) main_cset_text2_pane_t1_ParamLimits

0x7188,	// (0x00016373) main_cset_text2_pane_t1

0x711b,	// (0x00016306) listscroll_gen_pane_cp06_t1_ParamLimits

0x711b,	// (0x00016306) listscroll_gen_pane_cp06_t1

0x930c,	// (0x000184f7) main_cam6_set_pane

0xc493,	// (0x0001b67e) bg_tb_trans_pane_cp06_ParamLimits

0xcf62,	// (0x0001c14d) cam4_indicators_pane_g1_ParamLimits

0xcf73,	// (0x0001c15e) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001eae2) cam4_indicators_pane_g_ParamLimits

0xcf91,	// (0x0001c17c) cam4_indicators_pane_t1_ParamLimits

0x937c,	// (0x00018567) bg_tb_trans_pane_cp07_ParamLimits

0xcfbb,	// (0x0001c1a6) vid4_indicators_pane_g1_ParamLimits

0xcfcf,	// (0x0001c1ba) vid4_indicators_pane_g2_ParamLimits

0xcfe3,	// (0x0001c1ce) vid4_indicators_pane_g3_ParamLimits

0xcff4,	// (0x0001c1df) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001eaf4) vid4_indicators_pane_g_ParamLimits

0xd010,	// (0x0001c1fb) vid4_indicators_pane_t1_ParamLimits

0xd69e,	// (0x0001c889) vid4_progress_pane_g1_ParamLimits

0xd6ae,	// (0x0001c899) vid4_progress_pane_g2_ParamLimits

0x6c56,	// (0x00015e41) vid4_progress_pane_g3_ParamLimits

0xd6be,	// (0x0001c8a9) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001eca5) vid4_progress_pane_g_ParamLimits

0x6c68,	// (0x00015e53) vid4_progress_pane_t1_ParamLimits

0xd6dc,	// (0x0001c8c7) vid4_progress_pane_t2_ParamLimits

0xd6f1,	// (0x0001c8dc) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001ecb0) vid4_progress_pane_t_ParamLimits

0x6c7e,	// (0x00015e69) wait_bar_pane_cp07_ParamLimits

0x71a7,	// (0x00016392) main_cam6_set_pane_g2_ParamLimits

0x71a7,	// (0x00016392) main_cam6_set_pane_g2

0x71cb,	// (0x000163b6) main_cset6_listscroll_pane_ParamLimits

0x71cb,	// (0x000163b6) main_cset6_listscroll_pane

0x71e7,	// (0x000163d2) main_cset6_slider_pane_ParamLimits

0x71e7,	// (0x000163d2) main_cset6_slider_pane

0x71fd,	// (0x000163e8) main_cset6_text2_pane_ParamLimits

0x71fd,	// (0x000163e8) main_cset6_text2_pane

0xdaac,	// (0x0001cc97) main_cset6_text_pane

0xdab4,	// (0x0001cc9f) main_cset_list_pane_copy1_ParamLimits

0xdab4,	// (0x0001cc9f) main_cset_list_pane_copy1

0xdac4,	// (0x0001ccaf) scroll_pane_cp028_copy1

0x720b,	// (0x000163f6) cset_list_set_pane_copy1

0x721d,	// (0x00016408) aid_position_infowindow_above_copy1

0x7225,	// (0x00016410) aid_position_infowindow_below_copy1

0x722d,	// (0x00016418) cset_list_set_pane_g1_copy1

0x7235,	// (0x00016420) cset_list_set_pane_g3_copy1_ParamLimits

0x7235,	// (0x00016420) cset_list_set_pane_g3_copy1

0x7244,	// (0x0001642f) cset_list_set_pane_t1_copy1_ParamLimits

0x7244,	// (0x0001642f) cset_list_set_pane_t1_copy1

0x937c,	// (0x00018567) list_highlight_pane_cp021_copy1_ParamLimits

0x937c,	// (0x00018567) list_highlight_pane_cp021_copy1

0xdacd,	// (0x0001ccb8) cset6_slider_pane_ParamLimits

0xdacd,	// (0x0001ccb8) cset6_slider_pane

0xdaf9,	// (0x0001cce4) main_cset6_slider_pane_g1_ParamLimits

0xdaf9,	// (0x0001cce4) main_cset6_slider_pane_g1

0x7259,	// (0x00016444) main_cset6_slider_pane_g2_ParamLimits

0x7259,	// (0x00016444) main_cset6_slider_pane_g2

0xdb21,	// (0x0001cd0c) main_cset6_slider_pane_g3_ParamLimits

0xdb21,	// (0x0001cd0c) main_cset6_slider_pane_g3

0x7281,	// (0x0001646c) main_cset6_slider_pane_g4_ParamLimits

0x7281,	// (0x0001646c) main_cset6_slider_pane_g4

0x728d,	// (0x00016478) main_cset6_slider_pane_g5_ParamLimits

0x728d,	// (0x00016478) main_cset6_slider_pane_g5

0xd20a,	// (0x0001c3f5) main_cset6_slider_pane_g7_ParamLimits

0xd20a,	// (0x0001c3f5) main_cset6_slider_pane_g7

0xd216,	// (0x0001c401) main_cset6_slider_pane_g8_ParamLimits

0xd216,	// (0x0001c401) main_cset6_slider_pane_g8

0x61f9,	// (0x000153e4) main_cset6_slider_pane_g9_ParamLimits

0x61f9,	// (0x000153e4) main_cset6_slider_pane_g9

0x6205,	// (0x000153f0) main_cset6_slider_pane_g10_ParamLimits

0x6205,	// (0x000153f0) main_cset6_slider_pane_g10

0x6211,	// (0x000153fc) main_cset6_slider_pane_g11_ParamLimits

0x6211,	// (0x000153fc) main_cset6_slider_pane_g11

0x621d,	// (0x00015408) main_cset6_slider_pane_g12_ParamLimits

0x621d,	// (0x00015408) main_cset6_slider_pane_g12

0x6229,	// (0x00015414) main_cset6_slider_pane_g13_ParamLimits

0x6229,	// (0x00015414) main_cset6_slider_pane_g13

0x6235,	// (0x00015420) main_cset6_slider_pane_g14_ParamLimits

0x6235,	// (0x00015420) main_cset6_slider_pane_g14

0x7299,	// (0x00016484) main_cset6_slider_pane_g15_ParamLimits

0x7299,	// (0x00016484) main_cset6_slider_pane_g15

0x6259,	// (0x00015444) main_cset6_slider_pane_g16_ParamLimits

0x6259,	// (0x00015444) main_cset6_slider_pane_g16

0x6265,	// (0x00015450) main_cset6_slider_pane_g17_ParamLimits

0x6265,	// (0x00015450) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001ed7d) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001ed7d) main_cset6_slider_pane_g

0xdb2d,	// (0x0001cd18) main_cset6_slider_pane_t1_ParamLimits

0xdb2d,	// (0x0001cd18) main_cset6_slider_pane_t1

0x72c9,	// (0x000164b4) main_cset6_slider_pane_t2_ParamLimits

0x72c9,	// (0x000164b4) main_cset6_slider_pane_t2

0x72f4,	// (0x000164df) main_cset6_slider_pane_t3_ParamLimits

0x72f4,	// (0x000164df) main_cset6_slider_pane_t3

0x731f,	// (0x0001650a) main_cset6_slider_pane_t4_ParamLimits

0x731f,	// (0x0001650a) main_cset6_slider_pane_t4

0x734a,	// (0x00016535) main_cset6_slider_pane_t5_ParamLimits

0x734a,	// (0x00016535) main_cset6_slider_pane_t5

0xdb6e,	// (0x0001cd59) main_cset6_slider_pane_t7_ParamLimits

0xdb6e,	// (0x0001cd59) main_cset6_slider_pane_t7

0x7375,	// (0x00016560) main_cset6_slider_pane_t8_ParamLimits

0x7375,	// (0x00016560) main_cset6_slider_pane_t8

0x7399,	// (0x00016584) main_cset6_slider_pane_t9_ParamLimits

0x7399,	// (0x00016584) main_cset6_slider_pane_t9

0x73bd,	// (0x000165a8) main_cset6_slider_pane_t10_ParamLimits

0x73bd,	// (0x000165a8) main_cset6_slider_pane_t10

0x73e1,	// (0x000165cc) main_cset6_slider_pane_t11_ParamLimits

0x73e1,	// (0x000165cc) main_cset6_slider_pane_t11

0xdba4,	// (0x0001cd8f) main_cset6_slider_pane_t14_ParamLimits

0xdba4,	// (0x0001cd8f) main_cset6_slider_pane_t14

0xdbdd,	// (0x0001cdc8) main_cset6_slider_pane_t15_ParamLimits

0xdbdd,	// (0x0001cdc8) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001eda2) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001eda2) main_cset6_slider_pane_t

0xd2ee,	// (0x0001c4d9) cset_slider_pane_g1_copy1

0xd2f7,	// (0x0001c4e2) cset_slider_pane_g2_copy1

0xd300,	// (0x0001c4eb) cset_slider_pane_g3_copy1

0x930c,	// (0x000184f7) bg_popup_sub_pane_cp011_copy1

0xdc16,	// (0x0001ce01) main_cset_text_pane_g1_copy1

0xd3c5,	// (0x0001c5b0) main_cset_text_pane_t1_copy1

0xd3d3,	// (0x0001c5be) main_cset_text_pane_t2_copy1

0xd3e1,	// (0x0001c5cc) main_cset_text_pane_t3_copy1

0xd3ef,	// (0x0001c5da) main_cset_text_pane_t4_copy1

0xd3fd,	// (0x0001c5e8) main_cset_text_pane_t5_copy1

0xdc1e,	// (0x0001ce09) main_cset_text_pane_t6_copy1

0xdc2c,	// (0x0001ce17) main_cset_text_pane_t7_copy1

0x74d4,	// (0x000166bf) main_cset_text2_pane_t1_copy1

0x937c,	// (0x00018567) main_ncimui_pane

0x37c9,	// (0x000129b4) popup_query_ncimui_window_ParamLimits

0x37c9,	// (0x000129b4) popup_query_ncimui_window

0xc534,	// (0x0001b71f) field_cale_ev2_pane_g4_ParamLimits

0xc534,	// (0x0001b71f) field_cale_ev2_pane_g4

0x53c6,	// (0x000145b1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x53c6,	// (0x000145b1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001ea80) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001ea80) cell_video_dialer_keypad_pane_g

0x53de,	// (0x000145c9) cell_video_dialer_keypad_pane_t1

0x930c,	// (0x000184f7) bg_popup_window_pane_cp012

0xa4e7,	// (0x000196d2) heading_pane_cp06

0xdc58,	// (0x0001ce43) ncim_query_content_pane

0x930c,	// (0x000184f7) bg_popup_heading_pane_cp01

0xdc60,	// (0x0001ce4b) ncim_heading_pane_t1

0xdc6e,	// (0x0001ce59) ncim_indicator_popup_pane

0xdc80,	// (0x0001ce6b) ncim_query_button_pane

0xdc94,	// (0x0001ce7f) ncim_query_content_pane_t1

0xdca6,	// (0x0001ce91) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001ede6) ncim_query_content_pane_t

0xdce0,	// (0x0001cecb) ncim_query_list_pane

0xdcf2,	// (0x0001cedd) ncim_query_popup_pane

0xdc6e,	// (0x0001ce59) ncim_indicator_popup_pane_ParamLimits

0x7618,	// (0x00016803) ncim_query_content_pane_g1_ParamLimits

0x7618,	// (0x00016803) ncim_query_content_pane_g1

0xdc94,	// (0x0001ce7f) ncim_query_content_pane_t1_ParamLimits

0xdca6,	// (0x0001ce91) ncim_query_content_pane_t2_ParamLimits

0x7624,	// (0x0001680f) ncim_query_content_pane_t3_ParamLimits

0x7624,	// (0x0001680f) ncim_query_content_pane_t3

0x764c,	// (0x00016837) ncim_query_content_pane_t4_ParamLimits

0x764c,	// (0x00016837) ncim_query_content_pane_t4

0x7674,	// (0x0001685f) ncim_query_content_pane_t5_ParamLimits

0x7674,	// (0x0001685f) ncim_query_content_pane_t5

0xdcb8,	// (0x0001cea3) ncim_query_content_pane_t6_ParamLimits

0xdcb8,	// (0x0001cea3) ncim_query_content_pane_t6

0xfbfb,	// (0x0001ede6) ncim_query_content_pane_t_ParamLimits

0xdce0,	// (0x0001cecb) ncim_query_list_pane_ParamLimits

0xdcf2,	// (0x0001cedd) ncim_query_popup_pane_ParamLimits

0xdd06,	// (0x0001cef1) wait_bar_pane_cp04

0x930c,	// (0x000184f7) input_focus_pane_cp011

0xdd0e,	// (0x0001cef9) ncim_query_popup_pane_t1

0xdd1c,	// (0x0001cf07) ncim_list_query_list_pane_ParamLimits

0xdd1c,	// (0x0001cf07) ncim_list_query_list_pane

0x930c,	// (0x000184f7) bg_button_pane_cp027

0xdd2f,	// (0x0001cf1a) ncim_query_button_pane_g1

0x930c,	// (0x000184f7) list_highlight_pane_cp012

0xdd39,	// (0x0001cf24) ncim_list_query_list_pane_g1

0xdd41,	// (0x0001cf2c) ncim_list_query_list_pane_t1

0xcf82,	// (0x0001c16d) cam4_indicators_pane_g3_ParamLimits

0xcf82,	// (0x0001c16d) cam4_indicators_pane_g3

0xd000,	// (0x0001c1eb) vid4_indicators_pane_g5_ParamLimits

0xd000,	// (0x0001c1eb) vid4_indicators_pane_g5

0xd6cd,	// (0x0001c8b8) vid4_progress_pane_g5_ParamLimits

0xd6cd,	// (0x0001c8b8) vid4_progress_pane_g5

0x7506,	// (0x000166f1) main_ncimui_pane_g1

0x756c,	// (0x00016757) ncimui_group_query_pane_ParamLimits

0x756c,	// (0x00016757) ncimui_group_query_pane

0x75b4,	// (0x0001679f) ncimui_list_pane_ParamLimits

0x75b4,	// (0x0001679f) ncimui_list_pane

0x75db,	// (0x000167c6) ncimui_text_pane_ParamLimits

0x75db,	// (0x000167c6) ncimui_text_pane

0x769c,	// (0x00016887) ncimui_text_pane_t1_ParamLimits

0x769c,	// (0x00016887) ncimui_text_pane_t1

0xdd4f,	// (0x0001cf3a) ncimui_list_single_graphic_pane_ParamLimits

0xdd4f,	// (0x0001cf3a) ncimui_list_single_graphic_pane

0x76ba,	// (0x000168a5) ncimui_query_pane_ParamLimits

0x76ba,	// (0x000168a5) ncimui_query_pane

0x930c,	// (0x000184f7) list_highlight_pane_cp013

0xdd5f,	// (0x0001cf4a) ncim_list_query_list_pane_t1_copy1

0xdd39,	// (0x0001cf24) ncim_list_single_graphic_pane_g1

0xdd6d,	// (0x0001cf58) ncim_query_button_pane_cp01

0xdd79,	// (0x0001cf64) ncim_query_entry_pane_ParamLimits

0xdd79,	// (0x0001cf64) ncim_query_entry_pane

0xdd8c,	// (0x0001cf77) ncimui_query_pane_g1

0xdd98,	// (0x0001cf83) ncimui_query_pane_t1_ParamLimits

0xdd98,	// (0x0001cf83) ncimui_query_pane_t1

0x937c,	// (0x00018567) input_focus_pane_cp012

0xddb1,	// (0x0001cf9c) ncim_query_entry_pane_t1

0x9afe,	// (0x00018ce9) main_im_pane_ParamLimits

0x937c,	// (0x00018567) main_mobtv_pane_ParamLimits

0x937c,	// (0x00018567) main_mobtv_pane

0x72b1,	// (0x0001649c) main_cset6_slider_pane_g18_ParamLimits

0x72b1,	// (0x0001649c) main_cset6_slider_pane_g18

0x72bd,	// (0x000164a8) main_cset6_slider_pane_g19_ParamLimits

0x72bd,	// (0x000164a8) main_cset6_slider_pane_g19

0xd19d,	// (0x0001c388) bg_main_mobtv_pane_ParamLimits

0xd19d,	// (0x0001c388) bg_main_mobtv_pane

0x76cd,	// (0x000168b8) main_mobtv_info_pane

0x76d6,	// (0x000168c1) main_mobtv_loading_pane_ParamLimits

0x76d6,	// (0x000168c1) main_mobtv_loading_pane

0xddc3,	// (0x0001cfae) main_mobtv_pg_channel_list_pane

0xddcd,	// (0x0001cfb8) main_mobtv_pg_hdr_pane

0x76e3,	// (0x000168ce) main_mobtv_programe_curr_pane_ParamLimits

0x76e3,	// (0x000168ce) main_mobtv_programe_curr_pane

0x76f0,	// (0x000168db) main_mobtv_programe_next_pane_ParamLimits

0x76f0,	// (0x000168db) main_mobtv_programe_next_pane

0xddd6,	// (0x0001cfc1) popup_mobtv_noti_window

0xc233,	// (0x0001b41e) main_tv_pg_hdr_pane_g1

0xddde,	// (0x0001cfc9) main_tv_pg_hdr_pane_g2

0xdde6,	// (0x0001cfd1) main_tv_pg_hdr_pane_g3

0xddee,	// (0x0001cfd9) main_tv_pg_hdr_pane_g4

0xddf6,	// (0x0001cfe1) main_tv_pg_hdr_pane_g5

0xde00,	// (0x0001cfeb) main_tv_pg_hdr_pane_g6

0xde0a,	// (0x0001cff5) main_tv_pg_hdr_pane_g7

0xde14,	// (0x0001cfff) main_tv_pg_hdr_pane_g8

0xde1e,	// (0x0001d009) main_tv_pg_hdr_pane_g9

0xde28,	// (0x0001d013) main_tv_pg_hdr_pane_g10

0xde32,	// (0x0001d01d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001edf3) main_tv_pg_hdr_pane_g

0xde3c,	// (0x0001d027) main_tv_pg_hdr_pane_t1

0xde4a,	// (0x0001d035) main_tv_pg_hdr_pane_t2

0xde58,	// (0x0001d043) main_tv_pg_hdr_pane_t3

0xde68,	// (0x0001d053) main_tv_pg_hdr_pane_t4

0xde78,	// (0x0001d063) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001ee0a) main_tv_pg_hdr_pane_t

0xde88,	// (0x0001d073) single_mobtv_pg_channel_pane_ParamLimits

0xde88,	// (0x0001d073) single_mobtv_pg_channel_pane

0xde9a,	// (0x0001d085) single_mobtv_pg_channel_table_pane

0xdea3,	// (0x0001d08e) single_mobtv_pg_channel_thumb_pane

0xdeac,	// (0x0001d097) single_tv_pg_channel_pane_g1

0xdeb5,	// (0x0001d0a0) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001ee15) single_tv_pg_channel_pane_g

0xc493,	// (0x0001b67e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc493,	// (0x0001b67e) bg_single_mobtv_pg_channel_thumb_pane

0xdebe,	// (0x0001d0a9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdebe,	// (0x0001d0a9) single_mobtv_pg_channel_thumb_pane_g1

0xdecc,	// (0x0001d0b7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdecc,	// (0x0001d0b7) single_mobtv_pg_channel_thumb_pane_g2

0xded8,	// (0x0001d0c3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xded8,	// (0x0001d0c3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001ee1a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001ee1a) single_mobtv_pg_channel_thumb_pane_g

0xdee4,	// (0x0001d0cf) single_mobtv_pg_channel_thumb_pane_t1

0xdef2,	// (0x0001d0dd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001ee21) single_mobtv_pg_channel_thumb_pane_t

0xc233,	// (0x0001b41e) bg_single_mobtv_pg_channel_table_pane_g1

0xc233,	// (0x0001b41e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0001e8c7) bg_single_mobtv_pg_channel_table_pane_g

0xdf00,	// (0x0001d0eb) single_mobtv_pg_channel_table_pane_t1

0xdf0e,	// (0x0001d0f9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001ee26) single_mobtv_pg_channel_table_pane_t

0x7705,	// (0x000168f0) main_mobtv_info_pane_g1_ParamLimits

0x7705,	// (0x000168f0) main_mobtv_info_pane_g1

0x7723,	// (0x0001690e) main_mobtv_info_pane_t1_ParamLimits

0x7723,	// (0x0001690e) main_mobtv_info_pane_t1

0x779b,	// (0x00016986) main_mobtv_info_pane_t2_ParamLimits

0x779b,	// (0x00016986) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001ee30) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001ee30) main_mobtv_info_pane_t

0x782a,	// (0x00016a15) wait_bar_pane_cp05

0x783c,	// (0x00016a27) main_mobtv_loading_pane_g1_ParamLimits

0x783c,	// (0x00016a27) main_mobtv_loading_pane_g1

0x784f,	// (0x00016a3a) main_mobtv_loading_pane_g2_ParamLimits

0x784f,	// (0x00016a3a) main_mobtv_loading_pane_g2

0x785b,	// (0x00016a46) main_mobtv_loading_pane_g3_ParamLimits

0x785b,	// (0x00016a46) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001ee37) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001ee37) main_mobtv_loading_pane_g

0xdf1c,	// (0x0001d107) main_mobtv_loading_pane_t1_ParamLimits

0xdf1c,	// (0x0001d107) main_mobtv_loading_pane_t1

0xdf34,	// (0x0001d11f) main_mobtv_loading_pane_t2_ParamLimits

0xdf34,	// (0x0001d11f) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001ee3e) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001ee3e) main_mobtv_loading_pane_t

0x786e,	// (0x00016a59) wait_bar_pane_cp06_ParamLimits

0x786e,	// (0x00016a59) wait_bar_pane_cp06

0xdf58,	// (0x0001d143) main_mobtv_programe_curr_pane_t1

0xdf66,	// (0x0001d151) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001ee43) main_mobtv_programe_curr_pane_t

0xdf74,	// (0x0001d15f) main_mobtv_programe_next_pane_t1

0xdf82,	// (0x0001d16d) main_mobtv_programe_next_pane_t2

0xdf90,	// (0x0001d17b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001ee48) main_mobtv_programe_next_pane_t

0x930c,	// (0x000184f7) bg_popup_mobtv_noti_window_pane

0xdf9e,	// (0x0001d189) popup_mobtv_noti_window_g1

0xdfa6,	// (0x0001d191) popup_mobtv_noti_window_t1

0xdfb4,	// (0x0001d19f) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001ee4f) popup_mobtv_noti_window_t

0xc233,	// (0x0001b41e) bg_popup_mobtv_noti_window_pane_g1

0x930c,	// (0x000184f7) sc_clock_pane

0x930c,	// (0x000184f7) main_fs_bigclock_pane

0x6ed9,	// (0x000160c4) blid2_tripm_pane_t4_ParamLimits

0x6ed9,	// (0x000160c4) blid2_tripm_pane_t4

0x787d,	// (0x00016a68) sc_clock_pane_g1_ParamLimits

0x787d,	// (0x00016a68) sc_clock_pane_g1

0x788f,	// (0x00016a7a) sc_clock_pane_t1_ParamLimits

0x788f,	// (0x00016a7a) sc_clock_pane_t1

0x78b1,	// (0x00016a9c) sc_clock_pane_t2_ParamLimits

0x78b1,	// (0x00016a9c) sc_clock_pane_t2

0x78c9,	// (0x00016ab4) sc_clock_pane_t3_ParamLimits

0x78c9,	// (0x00016ab4) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001ee54) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001ee54) sc_clock_pane_t

0x87f5,	// (0x000179e0) main_fs_bigclock_indicator_pane_ParamLimits

0x87f5,	// (0x000179e0) main_fs_bigclock_indicator_pane

0x7969,	// (0x00016b54) main_fs_bigclock_pane_g1_ParamLimits

0x7969,	// (0x00016b54) main_fs_bigclock_pane_g1

0x8801,	// (0x000179ec) main_fs_bigclock_pane_t1_ParamLimits

0x8801,	// (0x000179ec) main_fs_bigclock_pane_t1

0x8813,	// (0x000179fe) main_fs_bigclock_pane_t2_ParamLimits

0x8813,	// (0x000179fe) main_fs_bigclock_pane_t2

0x8825,	// (0x00017a10) main_fs_bigclock_pane_t3_ParamLimits

0x8825,	// (0x00017a10) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001f059) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001f059) main_fs_bigclock_pane_t

0xec55,	// (0x0001de40) main_fs_bigclock_indicator_pane_g1

0xdc88,	// (0x0001ce73) ncim_query_content_pane_g2_ParamLimits

0xdc88,	// (0x0001ce73) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001ede1) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001ede1) ncim_query_content_pane_g

0x78e2,	// (0x00016acd) sc_clock_pane_t4_ParamLimits

0x78e2,	// (0x00016acd) sc_clock_pane_t4

0x937c,	// (0x00018567) main_radioblah_pane

0xcec8,	// (0x0001c0b3) cell_call4_button_pane_t1_copy1_ParamLimits

0xcec8,	// (0x0001c0b3) cell_call4_button_pane_t1_copy1

0x751e,	// (0x00016709) main_ncimui_pane_t1_ParamLimits

0x751e,	// (0x00016709) main_ncimui_pane_t1

0x7538,	// (0x00016723) main_ncimui_pane_t2_ParamLimits

0x7538,	// (0x00016723) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001edda) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001edda) main_ncimui_pane_t

0xe0f9,	// (0x0001d2e4) main_radioblah_anim_pane_ParamLimits

0xe0f9,	// (0x0001d2e4) main_radioblah_anim_pane

0xe10a,	// (0x0001d2f5) main_radioblah_info_pane_ParamLimits

0xe10a,	// (0x0001d2f5) main_radioblah_info_pane

0xe11e,	// (0x0001d309) main_radioblah_pane_t1_ParamLimits

0xe11e,	// (0x0001d309) main_radioblah_pane_t1

0xe13a,	// (0x0001d325) main_radioblah_pane_t2_ParamLimits

0xe13a,	// (0x0001d325) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001ee75) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001ee75) main_radioblah_pane_t

0x79c1,	// (0x00016bac) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79c1,	// (0x00016bac) main_radioblah_rocker_ctrl_pane

0xe182,	// (0x0001d36d) main_radioblah_info_pane_t1_ParamLimits

0xe182,	// (0x0001d36d) main_radioblah_info_pane_t1

0x7a19,	// (0x00016c04) main_radioblah_info_pane_t2_ParamLimits

0x7a19,	// (0x00016c04) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001ee7e) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001ee7e) main_radioblah_info_pane_t

0xc233,	// (0x0001b41e) main_radioblah_rocker_ctrl_pane_g1

0x7ac9,	// (0x00016cb4) main_radioblah_rocker_ctrl_pane_g2

0x7ad1,	// (0x00016cbc) main_radioblah_rocker_ctrl_pane_g3

0x7ad9,	// (0x00016cc4) main_radioblah_rocker_ctrl_pane_g4

0x7ae1,	// (0x00016ccc) main_radioblah_rocker_ctrl_pane_g5

0x7ae9,	// (0x00016cd4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001ee87) main_radioblah_rocker_ctrl_pane_g

0x74d4,	// (0x000166bf) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf52,	// (0x0001c13d) cam4_image_uncrop_qvga_pane

0xcfab,	// (0x0001c196) vid4_image_uncrop_qcif_pane

0xd8c7,	// (0x0001cab2) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8c7,	// (0x0001cab2) cam6_image_uncrop_qvga_pane

0xd98f,	// (0x0001cb7a) vid6_image_uncrop_qcif_pane_ParamLimits

0xd98f,	// (0x0001cb7a) vid6_image_uncrop_qcif_pane

0x930c,	// (0x000184f7) bg_popup_preview_window_pane_cp03

0xdc3a,	// (0x0001ce25) list_cset_text2_pane

0xdc42,	// (0x0001ce2d) main_cset6_text2_pane_g1

0xdc4a,	// (0x0001ce35) main_cset6_text2_pane_t1

0xea89,	// (0x0001dc74) list_cset_text2_pane_t1_ParamLimits

0xea89,	// (0x0001dc74) list_cset_text2_pane_t1

0x937c,	// (0x00018567) main_radioblah_pane_ParamLimits

0x7816,	// (0x00016a01) main_mobtv_info_pane_t3_ParamLimits

0x7816,	// (0x00016a01) main_mobtv_info_pane_t3

0x79af,	// (0x00016b9a) main_radioblah_pane_g1

0x79e9,	// (0x00016bd4) main_radioblah_info_pane_g1

0x7a6e,	// (0x00016c59) main_radioblah_info_pane_t3_ParamLimits

0x7a6e,	// (0x00016c59) main_radioblah_info_pane_t3

0x2244,	// (0x0001142f) highlight_cell_cale_month_pane_ParamLimits

0x2244,	// (0x0001142f) highlight_cell_cale_month_pane

0x930c,	// (0x000184f7) main_phob_fisheye_pane

0xc5e3,	// (0x0001b7ce) scroll_pane_cp0031_ParamLimits

0xc5e3,	// (0x0001b7ce) scroll_pane_cp0031

0xda9d,	// (0x0001cc88) wait_bar_pane_cp08_ParamLimits

0x720b,	// (0x000163f6) cset_list_set_pane_copy1_ParamLimits

0xe1bc,	// (0x0001d3a7) highlight_cell_cale_month_pane_g1

0x7af1,	// (0x00016cdc) highlight_cell_cale_month_pane_t1

0xd68d,	// (0x0001c878) list_gen_pane_cp01

0xd1f5,	// (0x0001c3e0) scroll_pane_01

0x7aff,	// (0x00016cea) list_single_double_fisheye_pane

0x7b08,	// (0x00016cf3) list_double_fisheye_pane_g1_ParamLimits

0x7b08,	// (0x00016cf3) list_double_fisheye_pane_g1

0x7b14,	// (0x00016cff) list_double_fisheye_pane_g2_ParamLimits

0x7b14,	// (0x00016cff) list_double_fisheye_pane_g2

0x7b20,	// (0x00016d0b) list_double_fisheye_pane_g3_ParamLimits

0x7b20,	// (0x00016d0b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001ee94) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001ee94) list_double_fisheye_pane_g

0x7b44,	// (0x00016d2f) list_double_fisheye_pane_t1_ParamLimits

0x7b44,	// (0x00016d2f) list_double_fisheye_pane_t1

0x7b5f,	// (0x00016d4a) list_double_fisheye_pane_t2_ParamLimits

0x7b5f,	// (0x00016d4a) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001ee9f) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001ee9f) list_double_fisheye_pane_t

0x930c,	// (0x000184f7) main_call5_pane

0x790d,	// (0x00016af8) sc_swipe_pane_ParamLimits

0x790d,	// (0x00016af8) sc_swipe_pane

0x7b94,	// (0x00016d7f) call5_image_pane_ParamLimits

0x7b94,	// (0x00016d7f) call5_image_pane

0x7bb1,	// (0x00016d9c) call5_swipe_1_pane_ParamLimits

0x7bb1,	// (0x00016d9c) call5_swipe_1_pane

0x7bc4,	// (0x00016daf) call5_swipe_2_pane_ParamLimits

0x7bc4,	// (0x00016daf) call5_swipe_2_pane

0x7bef,	// (0x00016dda) popup_call5_audio_first_window_ParamLimits

0x7bef,	// (0x00016dda) popup_call5_audio_first_window

0xc493,	// (0x0001b67e) call5_swipe_1_pane_g1_ParamLimits

0xc493,	// (0x0001b67e) call5_swipe_1_pane_g1

0xe1c4,	// (0x0001d3af) call5_swipe_1_pane_g2_ParamLimits

0xe1c4,	// (0x0001d3af) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001eea4) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001eea4) call5_swipe_1_pane_g

0xe1d0,	// (0x0001d3bb) call5_swipe_1_pane_t1_ParamLimits

0xe1d0,	// (0x0001d3bb) call5_swipe_1_pane_t1

0xc493,	// (0x0001b67e) call5_swipe_2_pane_g1_ParamLimits

0xc493,	// (0x0001b67e) call5_swipe_2_pane_g1

0xe1e5,	// (0x0001d3d0) call5_swipe_2_pane_g2_ParamLimits

0xe1e5,	// (0x0001d3d0) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001eea9) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001eea9) call5_swipe_2_pane_g

0xe1f1,	// (0x0001d3dc) call5_swipe_2_pane_t1_ParamLimits

0xe1f1,	// (0x0001d3dc) call5_swipe_2_pane_t1

0xe206,	// (0x0001d3f1) sc_swipe_pane_g1_ParamLimits

0xe206,	// (0x0001d3f1) sc_swipe_pane_g1

0xe213,	// (0x0001d3fe) sc_swipe_pane_g2_ParamLimits

0xe213,	// (0x0001d3fe) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001eeae) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001eeae) sc_swipe_pane_g

0xe21f,	// (0x0001d40a) sc_swipe_pane_t1_ParamLimits

0xe21f,	// (0x0001d40a) sc_swipe_pane_t1

0x930c,	// (0x000184f7) main_cmail_launcher_pane

0x7c00,	// (0x00016deb) aid_size_cell_cmail_l_ParamLimits

0x7c00,	// (0x00016deb) aid_size_cell_cmail_l

0x7c1a,	// (0x00016e05) grid_cmail_l_pane_ParamLimits

0x7c1a,	// (0x00016e05) grid_cmail_l_pane

0x7c35,	// (0x00016e20) cell_cmail_l_pane_ParamLimits

0x7c35,	// (0x00016e20) cell_cmail_l_pane

0x7c5b,	// (0x00016e46) cell_cmail_l_pane_g1_ParamLimits

0x7c5b,	// (0x00016e46) cell_cmail_l_pane_g1

0x7c6c,	// (0x00016e57) cell_cmail_l_pane_t1_ParamLimits

0x7c6c,	// (0x00016e57) cell_cmail_l_pane_t1

0xe234,	// (0x0001d41f) cell_cmail_l_pane_t2_ParamLimits

0xe234,	// (0x0001d41f) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001eeb3) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001eeb3) cell_cmail_l_pane_t

0x937c,	// (0x00018567) grid_highlight_pane_cp018_ParamLimits

0x937c,	// (0x00018567) grid_highlight_pane_cp018

0x0165,	// (0x0000f350) main2_pane_ParamLimits

0x0165,	// (0x0000f350) main2_pane

0x9bd7,	// (0x00018dc2) popup_sp_fs_action_menu_bg_pane_g1

0x9bdf,	// (0x00018dca) popup_sp_fs_action_menu_bg_pane_g2

0x9be7,	// (0x00018dd2) popup_sp_fs_action_menu_bg_pane_g3

0x9bef,	// (0x00018dda) popup_sp_fs_action_menu_bg_pane_g4

0x9bf7,	// (0x00018de2) popup_sp_fs_action_menu_bg_pane_g5

0x9bff,	// (0x00018dea) popup_sp_fs_action_menu_bg_pane_g6

0x9c07,	// (0x00018df2) popup_sp_fs_action_menu_bg_pane_g7

0x9c0f,	// (0x00018dfa) popup_sp_fs_action_menu_bg_pane_g8

0x9c17,	// (0x00018e02) popup_sp_fs_action_menu_bg_pane_g9

0x9c1f,	// (0x00018e0a) popup_sp_fs_action_menu_bg_pane_g10

0x9c1f,	// (0x00018e0a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001e375) popup_sp_fs_action_menu_bg_pane_g

0x1181,	// (0x0001036c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x2_t3_g3_g1

0x118d,	// (0x00010378) list_medium_line_x2_t3_g3_g2_ParamLimits

0x118d,	// (0x00010378) list_medium_line_x2_t3_g3_g2

0x1199,	// (0x00010384) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1199,	// (0x00010384) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001e423) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001e423) list_medium_line_x2_t3_g3_g

0x11a5,	// (0x00010390) list_medium_line_x2_t3_g3_t1_ParamLimits

0x11a5,	// (0x00010390) list_medium_line_x2_t3_g3_t1

0x11ba,	// (0x000103a5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x11ba,	// (0x000103a5) list_medium_line_x2_t3_g3_t2

0x11ce,	// (0x000103b9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x11ce,	// (0x000103b9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001e42a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001e42a) list_medium_line_x2_t3_g3_t

0x1181,	// (0x0001036c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x2_t3_g2_g1

0x1199,	// (0x00010384) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1199,	// (0x00010384) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001e431) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001e431) list_medium_line_x2_t3_g2_g

0x11e3,	// (0x000103ce) list_medium_line_x2_t3_g2_t1_ParamLimits

0x11e3,	// (0x000103ce) list_medium_line_x2_t3_g2_t1

0x11f9,	// (0x000103e4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x11f9,	// (0x000103e4) list_medium_line_x2_t3_g2_t2

0x120b,	// (0x000103f6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x120b,	// (0x000103f6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001e436) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001e436) list_medium_line_x2_t3_g2_t

0x1181,	// (0x0001036c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x2_t4_g4_g1

0x1229,	// (0x00010414) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1229,	// (0x00010414) list_medium_line_x2_t4_g4_g2

0x118d,	// (0x00010378) list_medium_line_x2_t4_g4_g3_ParamLimits

0x118d,	// (0x00010378) list_medium_line_x2_t4_g4_g3

0x1235,	// (0x00010420) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1235,	// (0x00010420) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001e43d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001e43d) list_medium_line_x2_t4_g4_g

0x1241,	// (0x0001042c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1241,	// (0x0001042c) list_medium_line_x2_t4_g4_t1

0x125b,	// (0x00010446) list_medium_line_x2_t4_g4_t2_ParamLimits

0x125b,	// (0x00010446) list_medium_line_x2_t4_g4_t2

0x1270,	// (0x0001045b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1270,	// (0x0001045b) list_medium_line_x2_t4_g4_t3

0x1285,	// (0x00010470) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1285,	// (0x00010470) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001e446) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001e446) list_medium_line_x2_t4_g4_t

0x1181,	// (0x0001036c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x2_t2_g4_g1

0x1229,	// (0x00010414) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1229,	// (0x00010414) list_medium_line_x2_t2_g4_g2

0x118d,	// (0x00010378) list_medium_line_x2_t2_g4_g3_ParamLimits

0x118d,	// (0x00010378) list_medium_line_x2_t2_g4_g3

0x1199,	// (0x00010384) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1199,	// (0x00010384) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001e4ad) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001e4ad) list_medium_line_x2_t2_g4_g

0x226a,	// (0x00011455) list_medium_line_x2_t2_g4_t1_ParamLimits

0x226a,	// (0x00011455) list_medium_line_x2_t2_g4_t1

0x11ce,	// (0x000103b9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x11ce,	// (0x000103b9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001e4b6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001e4b6) list_medium_line_x2_t2_g4_t

0x1181,	// (0x0001036c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x2_t2_g3_g1

0x118d,	// (0x00010378) list_medium_line_x2_t2_g3_g2_ParamLimits

0x118d,	// (0x00010378) list_medium_line_x2_t2_g3_g2

0x1199,	// (0x00010384) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1199,	// (0x00010384) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001e423) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001e423) list_medium_line_x2_t2_g3_g

0x227f,	// (0x0001146a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x227f,	// (0x0001146a) list_medium_line_x2_t2_g3_t1

0x11ce,	// (0x000103b9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x11ce,	// (0x000103b9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001e4bb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001e4bb) list_medium_line_x2_t2_g3_t

0x23be,	// (0x000115a9) main_sp_fs_list_pane_ParamLimits

0x23be,	// (0x000115a9) main_sp_fs_list_pane

0xd1b9,	// (0x0001c3a4) sp_fs_scroll_pane_ParamLimits

0xd1b9,	// (0x0001c3a4) sp_fs_scroll_pane

0x23ca,	// (0x000115b5) list_medium_line_x2_t3_t1

0x23da,	// (0x000115c5) list_medium_line_x2_t3_t2

0x23e8,	// (0x000115d3) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e506) list_medium_line_x2_t3_t

0x23f6,	// (0x000115e1) list_medium_line_x3_t4_t1

0x2406,	// (0x000115f1) list_medium_line_x3_t4_t2

0x2414,	// (0x000115ff) list_medium_line_x3_t4_t3

0x23e8,	// (0x000115d3) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e50d) list_medium_line_x3_t4_t

0x2422,	// (0x0001160d) list_medium_line_x4_t5_t1

0x2432,	// (0x0001161d) list_medium_line_x4_t5_t2

0x2414,	// (0x000115ff) list_medium_line_x4_t5_t3

0x2440,	// (0x0001162b) list_medium_line_x4_t5_t4

0x23e8,	// (0x000115d3) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e516) list_medium_line_x4_t5_t

0x1181,	// (0x0001036c) list_medium_line_t4_g4_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_t4_g4_g1

0x244e,	// (0x00011639) list_medium_line_t4_g4_g2_ParamLimits

0x244e,	// (0x00011639) list_medium_line_t4_g4_g2

0x245a,	// (0x00011645) list_medium_line_t4_g4_g3_ParamLimits

0x245a,	// (0x00011645) list_medium_line_t4_g4_g3

0x1199,	// (0x00010384) list_medium_line_t4_g4_g4_ParamLimits

0x1199,	// (0x00010384) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e521) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e521) list_medium_line_t4_g4_g

0x2466,	// (0x00011651) list_medium_line_t4_g4_t1_ParamLimits

0x2466,	// (0x00011651) list_medium_line_t4_g4_t1

0x247b,	// (0x00011666) list_medium_line_t4_g4_t2_ParamLimits

0x247b,	// (0x00011666) list_medium_line_t4_g4_t2

0x2491,	// (0x0001167c) list_medium_line_t4_g4_t3_ParamLimits

0x2491,	// (0x0001167c) list_medium_line_t4_g4_t3

0x11ce,	// (0x000103b9) list_medium_line_t4_g4_t4_ParamLimits

0x11ce,	// (0x000103b9) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e52a) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e52a) list_medium_line_t4_g4_t

0x2546,	// (0x00011731) chi_dic_find_pane_g1

0x35a1,	// (0x0001278c) main_tport_pane

0x6530,	// (0x0001571b) list_medium_line_plain_t1

0x65e2,	// (0x000157cd) list_medium_line_t2_g2_g1_ParamLimits

0x65e2,	// (0x000157cd) list_medium_line_t2_g2_g1

0x65ee,	// (0x000157d9) list_medium_line_t2_g2_g2_ParamLimits

0x65ee,	// (0x000157d9) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001ebeb) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001ebeb) list_medium_line_t2_g2_g

0x65fa,	// (0x000157e5) list_medium_line_t2_g2_t1_ParamLimits

0x65fa,	// (0x000157e5) list_medium_line_t2_g2_t1

0x6614,	// (0x000157ff) list_medium_line_t2_g2_t2_ParamLimits

0x6614,	// (0x000157ff) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001ebf0) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001ebf0) list_medium_line_t2_g2_t

0xd707,	// (0x0001c8f2) aid_sp_fs_list_icon_a_sm

0xd70f,	// (0x0001c8fa) aid_sp_fs_list_icon_d

0xd717,	// (0x0001c902) aid_sp_fs_text_primary

0xd720,	// (0x0001c90b) aid_sp_fs_text_secondary

0x6c8f,	// (0x00015e7a) list_medium_line

0x6c8f,	// (0x00015e7a) list_medium_line_g2

0x6c8f,	// (0x00015e7a) list_medium_line_g3

0x6c8f,	// (0x00015e7a) list_medium_line_plain

0x6c8f,	// (0x00015e7a) list_medium_line_plain_t2

0x6c8f,	// (0x00015e7a) list_medium_line_plain_t3

0x6c8f,	// (0x00015e7a) list_medium_line_right_icon

0x6c8f,	// (0x00015e7a) list_medium_line_right_iconx2

0x6c8f,	// (0x00015e7a) list_medium_line_t2

0x6c8f,	// (0x00015e7a) list_medium_line_t2_g2

0x6c8f,	// (0x00015e7a) list_medium_line_t2_g3

0x6c8f,	// (0x00015e7a) list_medium_line_t2_right_icon

0x6c8f,	// (0x00015e7a) list_medium_line_t2_right_iconx2

0x6c8f,	// (0x00015e7a) list_medium_line_t3

0x6c8f,	// (0x00015e7a) list_medium_line_t3_g2

0x6c8f,	// (0x00015e7a) list_medium_line_t3_g3

0x6c8f,	// (0x00015e7a) list_medium_line_t3_right_iconx2

0x6c98,	// (0x00015e83) list_medium_line_t4_g4

0x6c8f,	// (0x00015e7a) list_medium_line_x2

0x6c8f,	// (0x00015e7a) list_medium_line_x2_t2_g2

0x6c8f,	// (0x00015e7a) list_medium_line_x2_t2_g3

0x6c8f,	// (0x00015e7a) list_medium_line_x2_t2_g4

0x6c8f,	// (0x00015e7a) list_medium_line_x2_t3

0x6c8f,	// (0x00015e7a) list_medium_line_x2_t3_g2

0x6c8f,	// (0x00015e7a) list_medium_line_x2_t3_g3

0x6c8f,	// (0x00015e7a) list_medium_line_x2_t3_g4

0x6c8f,	// (0x00015e7a) list_medium_line_x2_t4_g2

0x6c8f,	// (0x00015e7a) list_medium_line_x2_t4_g4

0x6ca1,	// (0x00015e8c) list_medium_line_x3

0x6ca1,	// (0x00015e8c) list_medium_line_x3_t4

0x6ca1,	// (0x00015e8c) list_medium_line_x3_t4_g4

0x6c98,	// (0x00015e83) list_medium_line_x4_t4

0x6c98,	// (0x00015e83) list_medium_line_x4_t4_g7

0x6c98,	// (0x00015e83) list_medium_line_x4_t5

0x6caa,	// (0x00015e95) list_single_fs_dyc_pane_ParamLimits

0x6caa,	// (0x00015e95) list_single_fs_dyc_pane

0x1181,	// (0x0001036c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x4_t4_g7_g1

0x7405,	// (0x000165f0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7405,	// (0x000165f0) list_medium_line_x4_t4_g7_g2

0x7411,	// (0x000165fc) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7411,	// (0x000165fc) list_medium_line_x4_t4_g7_g3

0x7420,	// (0x0001660b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7420,	// (0x0001660b) list_medium_line_x4_t4_g7_g4

0x742c,	// (0x00016617) list_medium_line_x4_t4_g7_g5_ParamLimits

0x742c,	// (0x00016617) list_medium_line_x4_t4_g7_g5

0x743b,	// (0x00016626) list_medium_line_x4_t4_g7_g6_ParamLimits

0x743b,	// (0x00016626) list_medium_line_x4_t4_g7_g6

0x744a,	// (0x00016635) list_medium_line_x4_t4_g7_g7_ParamLimits

0x744a,	// (0x00016635) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001edbb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001edbb) list_medium_line_x4_t4_g7_g

0x7456,	// (0x00016641) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7456,	// (0x00016641) list_medium_line_x4_t4_g7_t1

0x746b,	// (0x00016656) list_medium_line_x4_t4_g7_t2_ParamLimits

0x746b,	// (0x00016656) list_medium_line_x4_t4_g7_t2

0x7480,	// (0x0001666b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7480,	// (0x0001666b) list_medium_line_x4_t4_g7_t3

0x7495,	// (0x00016680) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7495,	// (0x00016680) list_medium_line_x4_t4_g7_t4

0x74a7,	// (0x00016692) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74a7,	// (0x00016692) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001edca) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001edca) list_medium_line_x4_t4_g7_t

0x74b9,	// (0x000166a4) list_single_dyc_row_pane_ParamLimits

0x74b9,	// (0x000166a4) list_single_dyc_row_pane

0x7b81,	// (0x00016d6c) call5_gesture_pane_ParamLimits

0x7b81,	// (0x00016d6c) call5_gesture_pane

0x7bd7,	// (0x00016dc2) call5_windows_pane_ParamLimits

0x7bd7,	// (0x00016dc2) call5_windows_pane

0x7c82,	// (0x00016e6d) call5_swipe_1_pane_cp_ParamLimits

0x7c82,	// (0x00016e6d) call5_swipe_1_pane_cp

0x7c8e,	// (0x00016e79) call5_swipe_2_pane_cp_ParamLimits

0x7c8e,	// (0x00016e79) call5_swipe_2_pane_cp

0x9d42,	// (0x00018f2d) call5_image_pane_cp

0x7c9a,	// (0x00016e85) popup_call5_audio_first_window_cp_ParamLimits

0x7c9a,	// (0x00016e85) popup_call5_audio_first_window_cp

0xe206,	// (0x0001d3f1) call5_swipe_1_pane_g1_cp_ParamLimits

0xe206,	// (0x0001d3f1) call5_swipe_1_pane_g1_cp

0xe246,	// (0x0001d431) call5_swipe_1_pane_g2_cp

0xe21f,	// (0x0001d40a) call5_swipe_1_pane_t1_cp_ParamLimits

0xe21f,	// (0x0001d40a) call5_swipe_1_pane_t1_cp

0xe206,	// (0x0001d3f1) call5_swipe_2_pane_g1_cp_ParamLimits

0xe206,	// (0x0001d3f1) call5_swipe_2_pane_g1_cp

0xe24e,	// (0x0001d439) call5_swipe_2_pane_g2_cp

0xe256,	// (0x0001d441) call5_swipe_2_pane_t1_cp_ParamLimits

0xe256,	// (0x0001d441) call5_swipe_2_pane_t1_cp

0x937c,	// (0x00018567) main_sp_fs_email_pane

0xe26b,	// (0x0001d456) main_sp_fs_listscroll_pane_te

0xe274,	// (0x0001d45f) popup_sp_fs_action_menu_pane_ParamLimits

0xe274,	// (0x0001d45f) popup_sp_fs_action_menu_pane

0xc233,	// (0x0001b41e) bg_sp_fs_ctrlbar_pane_g1

0xe2b6,	// (0x0001d4a1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2bf,	// (0x0001d4aa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe2c8,	// (0x0001d4b3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc233,	// (0x0001b41e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001eeb8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc016,	// (0x0001b201) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc016,	// (0x0001b201) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2d1,	// (0x0001d4bc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2d1,	// (0x0001d4bc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2dd,	// (0x0001d4c8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2dd,	// (0x0001d4c8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001eec1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001eec1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2e9,	// (0x0001d4d4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2e9,	// (0x0001d4d4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7ca8,	// (0x00016e93) list_medium_line_t2_right_icon_g1

0x7cb0,	// (0x00016e9b) list_medium_line_t2_right_icon_t1

0x7cc0,	// (0x00016eab) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001eec6) list_medium_line_t2_right_icon_t

0xbd16,	// (0x0001af01) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbd16,	// (0x0001af01) bg_sp_fs_ctrlbar_pane

0x7d1a,	// (0x00016f05) main_sp_fs_ctrlbar_button_pane_cp01

0x7d24,	// (0x00016f0f) main_sp_fs_ctrlbar_ddmenu_pane

0xe33b,	// (0x0001d526) main_sp_fs_ctrlbar_pane_g1

0xe347,	// (0x0001d532) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001eecb) main_sp_fs_ctrlbar_pane_g

0xe353,	// (0x0001d53e) main_sp_fs_ctrlbar_pane_t1

0x7d2e,	// (0x00016f19) main_sp_fs_ctrlbar_pane

0x7d52,	// (0x00016f3d) main_sp_fs_listscroll_pane_te_cp01

0x7d72,	// (0x00016f5d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d72,	// (0x00016f5d) popup_sp_fs_action_menu_pane_cp01

0x937c,	// (0x00018567) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x937c,	// (0x00018567) bg_sp_fs_highlight_list_pane_cp01

0xe383,	// (0x0001d56e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe383,	// (0x0001d56e) sp_fs_action_menu_list_gene_pane_g1

0xe392,	// (0x0001d57d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe392,	// (0x0001d57d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001eed5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001eed5) sp_fs_action_menu_list_gene_pane_g

0xe39f,	// (0x0001d58a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe39f,	// (0x0001d58a) sp_fs_action_menu_list_gene_pane_t1

0xe3b7,	// (0x0001d5a2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3b7,	// (0x0001d5a2) sp_fs_action_menu_list_gene_pane

0xe3d4,	// (0x0001d5bf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3d4,	// (0x0001d5bf) popup_sp_fs_action_menu_bg_pane

0xe3e2,	// (0x0001d5cd) sp_fs_action_menu_list_pane_ParamLimits

0xe3e2,	// (0x0001d5cd) sp_fs_action_menu_list_pane

0xe400,	// (0x0001d5eb) sp_fs_scroll_pane_cp01_ParamLimits

0xe400,	// (0x0001d5eb) sp_fs_scroll_pane_cp01

0x7da2,	// (0x00016f8d) list_medium_line_plain_t2_t1

0x7db2,	// (0x00016f9d) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001eeda) list_medium_line_plain_t2_t

0x7dc2,	// (0x00016fad) list_medium_line_plain_t3_t1

0x7dd2,	// (0x00016fbd) list_medium_line_plain_t3_t2

0x7de0,	// (0x00016fcb) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001eedf) list_medium_line_plain_t3_t

0x1181,	// (0x0001036c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x2_t2_g2_g1

0x1199,	// (0x00010384) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1199,	// (0x00010384) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001e431) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001e431) list_medium_line_x2_t2_g2_g

0x2466,	// (0x00011651) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2466,	// (0x00011651) list_medium_line_x2_t2_g2_t1

0x11ce,	// (0x000103b9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x11ce,	// (0x000103b9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001eee6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001eee6) list_medium_line_x2_t2_g2_t

0x1181,	// (0x0001036c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x2_t4_g2_g1

0x1199,	// (0x00010384) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1199,	// (0x00010384) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001e431) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001e431) list_medium_line_x2_t4_g2_g

0x7dee,	// (0x00016fd9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7dee,	// (0x00016fd9) list_medium_line_x2_t4_g2_t1

0x7e08,	// (0x00016ff3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e08,	// (0x00016ff3) list_medium_line_x2_t4_g2_t2

0x7e1d,	// (0x00017008) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e1d,	// (0x00017008) list_medium_line_x2_t4_g2_t3

0x11ce,	// (0x000103b9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x11ce,	// (0x000103b9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001eeeb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001eeeb) list_medium_line_x2_t4_g2_t

0x7e32,	// (0x0001701d) list_medium_line_t3_right_iconx2_g1

0x7ca8,	// (0x00016e93) list_medium_line_t3_right_iconx2_g2

0x7e3a,	// (0x00017025) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001eef4) list_medium_line_t3_right_iconx2_g

0x7e44,	// (0x0001702f) list_medium_line_t3_right_iconx2_t1

0x7e54,	// (0x0001703f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001eefb) list_medium_line_t3_right_iconx2_t

0x1181,	// (0x0001036c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x3_t4_g4_g1

0x118d,	// (0x00010378) list_medium_line_x3_t4_g4_g2_ParamLimits

0x118d,	// (0x00010378) list_medium_line_x3_t4_g4_g2

0x244e,	// (0x00011639) list_medium_line_x3_t4_g4_g3_ParamLimits

0x244e,	// (0x00011639) list_medium_line_x3_t4_g4_g3

0x7e62,	// (0x0001704d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e62,	// (0x0001704d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001ef00) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001ef00) list_medium_line_x3_t4_g4_g

0x7e6e,	// (0x00017059) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e6e,	// (0x00017059) list_medium_line_x3_t4_g4_t1

0x7e85,	// (0x00017070) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e85,	// (0x00017070) list_medium_line_x3_t4_g4_t2

0x7ea0,	// (0x0001708b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7ea0,	// (0x0001708b) list_medium_line_x3_t4_g4_t3

0x7eb5,	// (0x000170a0) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7eb5,	// (0x000170a0) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001ef09) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001ef09) list_medium_line_x3_t4_g4_t

0x7ed2,	// (0x000170bd) list_single_dyc_row_text_pane_t1_ParamLimits

0x7ed2,	// (0x000170bd) list_single_dyc_row_text_pane_t1

0x7f1b,	// (0x00017106) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f1b,	// (0x00017106) list_single_dyc_row_text_pane_t2

0xe426,	// (0x0001d611) list_single_dyc_row_text_pane_t3_ParamLimits

0xe426,	// (0x0001d611) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001ef12) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001ef12) list_single_dyc_row_text_pane_t

0xe44a,	// (0x0001d635) list_single_dyc_row_pane_g1_ParamLimits

0xe44a,	// (0x0001d635) list_single_dyc_row_pane_g1

0xe456,	// (0x0001d641) list_single_dyc_row_pane_g2_ParamLimits

0xe456,	// (0x0001d641) list_single_dyc_row_pane_g2

0xe462,	// (0x0001d64d) list_single_dyc_row_pane_g3_ParamLimits

0xe462,	// (0x0001d64d) list_single_dyc_row_pane_g3

0xe46e,	// (0x0001d659) list_single_dyc_row_pane_g4_ParamLimits

0xe46e,	// (0x0001d659) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001ef1f) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001ef1f) list_single_dyc_row_pane_g

0xe47a,	// (0x0001d665) list_single_dyc_row_text_pane_ParamLimits

0xe47a,	// (0x0001d665) list_single_dyc_row_text_pane

0x930c,	// (0x000184f7) bg_sp_fs_scroll_pane

0xe499,	// (0x0001d684) thumb_sp_fs_scroll_pane

0x65e2,	// (0x000157cd) list_medium_line_g1_ParamLimits

0x65e2,	// (0x000157cd) list_medium_line_g1

0x8050,	// (0x0001723b) list_medium_line_t1_ParamLimits

0x8050,	// (0x0001723b) list_medium_line_t1

0x1181,	// (0x0001036c) list_medium_line_x2_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x2_g1

0x118d,	// (0x00010378) list_medium_line_x2_g2_ParamLimits

0x118d,	// (0x00010378) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001ef28) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001ef28) list_medium_line_x2_g

0xe4a2,	// (0x0001d68d) list_medium_line_x2_t1_ParamLimits

0xe4a2,	// (0x0001d68d) list_medium_line_x2_t1

0x1181,	// (0x0001036c) list_medium_line_x3_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x3_g1

0x118d,	// (0x00010378) list_medium_line_x3_g2_ParamLimits

0x118d,	// (0x00010378) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001ef28) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001ef28) list_medium_line_x3_g

0xe4a2,	// (0x0001d68d) list_medium_line_x3_t1_ParamLimits

0xe4a2,	// (0x0001d68d) list_medium_line_x3_t1

0xe4b8,	// (0x0001d6a3) thumb_sp_fs_scroll_pane_g1

0xe4c1,	// (0x0001d6ac) thumb_sp_fs_scroll_pane_g2

0xe4ca,	// (0x0001d6b5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ef2d) thumb_sp_fs_scroll_pane_g

0xe4b8,	// (0x0001d6a3) bg_sp_fs_scroll_pane_g1

0xe4c1,	// (0x0001d6ac) bg_sp_fs_scroll_pane_g2

0xe4ca,	// (0x0001d6b5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ef2d) bg_sp_fs_scroll_pane_g

0x1181,	// (0x0001036c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1181,	// (0x0001036c) list_medium_line_x2_t3_g4_g1

0x1229,	// (0x00010414) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1229,	// (0x00010414) list_medium_line_x2_t3_g4_g2

0x118d,	// (0x00010378) list_medium_line_x2_t3_g4_g3_ParamLimits

0x118d,	// (0x00010378) list_medium_line_x2_t3_g4_g3

0x1199,	// (0x00010384) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1199,	// (0x00010384) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001e4ad) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001e4ad) list_medium_line_x2_t3_g4_g

0x8065,	// (0x00017250) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8065,	// (0x00017250) list_medium_line_x2_t3_g4_t1

0x807f,	// (0x0001726a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x807f,	// (0x0001726a) list_medium_line_x2_t3_g4_t2

0x11ce,	// (0x000103b9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x11ce,	// (0x000103b9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001ef34) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001ef34) list_medium_line_x2_t3_g4_t

0x65e2,	// (0x000157cd) list_medium_line_g2_g1_ParamLimits

0x65e2,	// (0x000157cd) list_medium_line_g2_g1

0x65ee,	// (0x000157d9) list_medium_line_g2_g2_ParamLimits

0x65ee,	// (0x000157d9) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001ebeb) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001ebeb) list_medium_line_g2_g

0x8098,	// (0x00017283) list_medium_line_g2_t1_ParamLimits

0x8098,	// (0x00017283) list_medium_line_g2_t1

0x65e2,	// (0x000157cd) list_medium_line_t3_g2_g1_ParamLimits

0x65e2,	// (0x000157cd) list_medium_line_t3_g2_g1

0x65ee,	// (0x000157d9) list_medium_line_t3_g2_g2_ParamLimits

0x65ee,	// (0x000157d9) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001ebeb) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001ebeb) list_medium_line_t3_g2_g

0x80ad,	// (0x00017298) list_medium_line_t3_g2_t1_ParamLimits

0x80ad,	// (0x00017298) list_medium_line_t3_g2_t1

0x80c4,	// (0x000172af) list_medium_line_t3_g2_t2_ParamLimits

0x80c4,	// (0x000172af) list_medium_line_t3_g2_t2

0x80d9,	// (0x000172c4) list_medium_line_t3_g2_t3_ParamLimits

0x80d9,	// (0x000172c4) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001ef3b) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001ef3b) list_medium_line_t3_g2_t

0x7ca8,	// (0x00016e93) list_medium_line_right_icon_g1

0x80f2,	// (0x000172dd) list_medium_line_right_icon_t1

0x65e2,	// (0x000157cd) list_medium_line_t2_g1_ParamLimits

0x65e2,	// (0x000157cd) list_medium_line_t2_g1

0x8100,	// (0x000172eb) list_medium_line_t2_t1_ParamLimits

0x8100,	// (0x000172eb) list_medium_line_t2_t1

0x811a,	// (0x00017305) list_medium_line_t2_t2_ParamLimits

0x811a,	// (0x00017305) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ef42) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ef42) list_medium_line_t2_t

0x65e2,	// (0x000157cd) list_medium_line_t3_g1_ParamLimits

0x65e2,	// (0x000157cd) list_medium_line_t3_g1

0x8133,	// (0x0001731e) list_medium_line_t3_t1_ParamLimits

0x8133,	// (0x0001731e) list_medium_line_t3_t1

0x814a,	// (0x00017335) list_medium_line_t3_t2_ParamLimits

0x814a,	// (0x00017335) list_medium_line_t3_t2

0x815f,	// (0x0001734a) list_medium_line_t3_t3_ParamLimits

0x815f,	// (0x0001734a) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ef47) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ef47) list_medium_line_t3_t

0x65e2,	// (0x000157cd) list_medium_line_g3_g1_ParamLimits

0x65e2,	// (0x000157cd) list_medium_line_g3_g1

0x8171,	// (0x0001735c) list_medium_line_g3_g2_ParamLimits

0x8171,	// (0x0001735c) list_medium_line_g3_g2

0x65ee,	// (0x000157d9) list_medium_line_g3_g3_ParamLimits

0x65ee,	// (0x000157d9) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001ef4e) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001ef4e) list_medium_line_g3_g

0x817d,	// (0x00017368) list_medium_line_g3_t1_ParamLimits

0x817d,	// (0x00017368) list_medium_line_g3_t1

0x65e2,	// (0x000157cd) list_medium_line_t2_g3_g1_ParamLimits

0x65e2,	// (0x000157cd) list_medium_line_t2_g3_g1

0x8171,	// (0x0001735c) list_medium_line_t2_g3_g2_ParamLimits

0x8171,	// (0x0001735c) list_medium_line_t2_g3_g2

0x65ee,	// (0x000157d9) list_medium_line_t2_g3_g3_ParamLimits

0x65ee,	// (0x000157d9) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001ef4e) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001ef4e) list_medium_line_t2_g3_g

0x8192,	// (0x0001737d) list_medium_line_t2_g3_t1_ParamLimits

0x8192,	// (0x0001737d) list_medium_line_t2_g3_t1

0x81a9,	// (0x00017394) list_medium_line_t2_g3_t2_ParamLimits

0x81a9,	// (0x00017394) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001ef55) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001ef55) list_medium_line_t2_g3_t

0x65e2,	// (0x000157cd) list_medium_line_t3_g3_g1_ParamLimits

0x65e2,	// (0x000157cd) list_medium_line_t3_g3_g1

0x8171,	// (0x0001735c) list_medium_line_t3_g3_g2_ParamLimits

0x8171,	// (0x0001735c) list_medium_line_t3_g3_g2

0x65ee,	// (0x000157d9) list_medium_line_t3_g3_g3_ParamLimits

0x65ee,	// (0x000157d9) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001ef4e) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001ef4e) list_medium_line_t3_g3_g

0x81c4,	// (0x000173af) list_medium_line_t3_g3_t1_ParamLimits

0x81c4,	// (0x000173af) list_medium_line_t3_g3_t1

0x81d8,	// (0x000173c3) list_medium_line_t3_g3_t2_ParamLimits

0x81d8,	// (0x000173c3) list_medium_line_t3_g3_t2

0x81ea,	// (0x000173d5) list_medium_line_t3_g3_t3_ParamLimits

0x81ea,	// (0x000173d5) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001ef5a) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001ef5a) list_medium_line_t3_g3_t

0x7e32,	// (0x0001701d) list_medium_line_right_iconx2_g1

0x7ca8,	// (0x00016e93) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ef61) list_medium_line_right_iconx2_g

0x81fe,	// (0x000173e9) list_medium_line_right_iconx2_t1

0x7e32,	// (0x0001701d) list_medium_line_t2_right_iconx2_g1

0x7ca8,	// (0x00016e93) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ef61) list_medium_line_t2_right_iconx2_g

0x820c,	// (0x000173f7) list_medium_line_t2_right_iconx2_t1

0x821c,	// (0x00017407) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001ef66) list_medium_line_t2_right_iconx2_t

0x822e,	// (0x00017419) list_medium_line_x4_t4_t1

0x823c,	// (0x00017427) list_medium_line_x4_t4_t2

0x824c,	// (0x00017437) list_medium_line_x4_t4_t3

0x825c,	// (0x00017447) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001ef6b) list_medium_line_x4_t4_t

0x82af,	// (0x0001749a) tport_appsw_pane_ParamLimits

0x82af,	// (0x0001749a) tport_appsw_pane

0x82c7,	// (0x000174b2) tport_contact_pane_ParamLimits

0x82c7,	// (0x000174b2) tport_contact_pane

0x82df,	// (0x000174ca) tport_listscroll_pane_ParamLimits

0x82df,	// (0x000174ca) tport_listscroll_pane

0x82f9,	// (0x000174e4) cell_tport_appsw_pane_ParamLimits

0x82f9,	// (0x000174e4) cell_tport_appsw_pane

0xd056,	// (0x0001c241) tport_appsw_pane_g1_ParamLimits

0xd056,	// (0x0001c241) tport_appsw_pane_g1

0xe4d3,	// (0x0001d6be) tport_contact_pane_g1

0xdd0e,	// (0x0001cef9) tport_contact_pane_t1

0xe4dc,	// (0x0001d6c7) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001ef74) tport_contact_pane_t

0xe4ea,	// (0x0001d6d5) list_tport_pane

0xe4f3,	// (0x0001d6de) scroll_pane_cp_030

0x8341,	// (0x0001752c) cell_tport_appsw_pane_g1

0x8351,	// (0x0001753c) cell_tport_appsw_pane_t1

0x835f,	// (0x0001754a) grid_highlight_pane_cp019

0x8367,	// (0x00017552) list_tport_double_graphic_pane_ParamLimits

0x8367,	// (0x00017552) list_tport_double_graphic_pane

0x937c,	// (0x00018567) list_highlight_pane_cp023_ParamLimits

0x937c,	// (0x00018567) list_highlight_pane_cp023

0x8374,	// (0x0001755f) list_tport_double_graphic_pane_g1_ParamLimits

0x8374,	// (0x0001755f) list_tport_double_graphic_pane_g1

0x8381,	// (0x0001756c) list_tport_double_graphic_pane_t1_ParamLimits

0x8381,	// (0x0001756c) list_tport_double_graphic_pane_t1

0x8396,	// (0x00017581) list_tport_double_graphic_pane_t2_ParamLimits

0x8396,	// (0x00017581) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001ef80) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001ef80) list_tport_double_graphic_pane_t

0x930c,	// (0x000184f7) main_cale_note_pane

0x5c80,	// (0x00014e6b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5c80,	// (0x00014e6b) cell_vitu2_function_top_wide_pane_cp01

0x782a,	// (0x00016a15) wait_bar_pane_cp05_ParamLimits

0x937c,	// (0x00018567) listscroll_cmail_pane

0xe4fc,	// (0x0001d6e7) list_cmail_pane

0x83a8,	// (0x00017593) list_cmail_body_pane

0x83bd,	// (0x000175a8) list_single_cmail_header_caption_pane

0x83d6,	// (0x000175c1) list_single_cmail_header_detail_pane_ParamLimits

0x83d6,	// (0x000175c1) list_single_cmail_header_detail_pane

0xe50c,	// (0x0001d6f7) list_single_cmail_header_caption_pane_t1

0x83ff,	// (0x000175ea) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83ff,	// (0x000175ea) list_single_cmail_header_detail_pane_g1

0xe523,	// (0x0001d70e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe523,	// (0x0001d70e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001ef85) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001ef85) list_single_cmail_header_detail_pane_g

0xe53c,	// (0x0001d727) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe53c,	// (0x0001d727) list_single_cmail_header_detail_pane_t1

0xe59c,	// (0x0001d787) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe59c,	// (0x0001d787) list_single_cmail_header_editor_pane_bg

0xe5b3,	// (0x0001d79e) list_cmail_body_pane_g1

0xe5bc,	// (0x0001d7a7) list_cmail_body_pane_t1

0xd0a5,	// (0x0001c290) list_single_cmail_header_editor_pane_bg_g1

0x9fa5,	// (0x00019190) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd0b5,	// (0x0001c2a0) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd0ad,	// (0x0001c298) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd356,	// (0x0001c541) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd0d5,	// (0x0001c2c0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd0c5,	// (0x0001c2b0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd0cd,	// (0x0001c2b8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9f85,	// (0x00019170) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8417,	// (0x00017602) calenote_gesture_pane_ParamLimits

0x8417,	// (0x00017602) calenote_gesture_pane

0x8437,	// (0x00017622) calenote_window_pane_ParamLimits

0x8437,	// (0x00017622) calenote_window_pane

0xe5ca,	// (0x0001d7b5) popup_note_window_cp01

0x8453,	// (0x0001763e) calenote_swipe_1_pane_ParamLimits

0x8453,	// (0x0001763e) calenote_swipe_1_pane

0x7c8e,	// (0x00016e79) calenote_swipe_2_pane_ParamLimits

0x7c8e,	// (0x00016e79) calenote_swipe_2_pane

0xe206,	// (0x0001d3f1) calenote_swipe_1_pane_g1_ParamLimits

0xe206,	// (0x0001d3f1) calenote_swipe_1_pane_g1

0xe213,	// (0x0001d3fe) calenote_swipe_1_pane_g2_ParamLimits

0xe213,	// (0x0001d3fe) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001eeae) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001eeae) calenote_swipe_1_pane_g

0xe5dc,	// (0x0001d7c7) calenote_swipe_1_pane_t1_ParamLimits

0xe5dc,	// (0x0001d7c7) calenote_swipe_1_pane_t1

0xe206,	// (0x0001d3f1) calenote_swipe_2_pane_g1_ParamLimits

0xe206,	// (0x0001d3f1) calenote_swipe_2_pane_g1

0xe5fb,	// (0x0001d7e6) calenote_swipe_2_pane_g2_ParamLimits

0xe5fb,	// (0x0001d7e6) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001ef91) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001ef91) calenote_swipe_2_pane_g

0xe607,	// (0x0001d7f2) calenote_swipe_2_pane_t1_ParamLimits

0xe607,	// (0x0001d7f2) calenote_swipe_2_pane_t1

0x930c,	// (0x000184f7) main_mup_navstr_pane

0x4938,	// (0x00013b23) main_mup3_pane_t7_ParamLimits

0x4938,	// (0x00013b23) main_mup3_pane_t7

0xcc0b,	// (0x0001bdf6) main_mp4_pane_g6_ParamLimits

0xcc0b,	// (0x0001bdf6) main_mp4_pane_g6

0xce33,	// (0x0001c01e) main_image3_pane_t4_ParamLimits

0xce33,	// (0x0001c01e) main_image3_pane_t4

0x8468,	// (0x00017653) popup_navstr_preview_pane_ParamLimits

0x8468,	// (0x00017653) popup_navstr_preview_pane

0x847c,	// (0x00017667) scroll_navstr_pane_ParamLimits

0x847c,	// (0x00017667) scroll_navstr_pane

0x930c,	// (0x000184f7) bg_popup_preview_window_pane_cp04

0xe62e,	// (0x0001d819) popup_navstr_preview_pane_t1

0x8490,	// (0x0001767b) scroll_navstr_pane_g1_ParamLimits

0x8490,	// (0x0001767b) scroll_navstr_pane_g1

0x84a4,	// (0x0001768f) scroll_navstr_pane_t1_ParamLimits

0x84a4,	// (0x0001768f) scroll_navstr_pane_t1

0xe5d3,	// (0x0001d7be) bg_button_pane_cp014

0xe5d3,	// (0x0001d7be) bg_button_pane_cp030

0x7b2c,	// (0x00016d17) list_double_fisheye_pane_g4_ParamLimits

0x7b2c,	// (0x00016d17) list_double_fisheye_pane_g4

0x7b38,	// (0x00016d23) list_double_fisheye_pane_g5_ParamLimits

0x7b38,	// (0x00016d23) list_double_fisheye_pane_g5

0xd1b9,	// (0x0001c3a4) sp_fs_scroll_pane_cp03

0xe33b,	// (0x0001d526) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe347,	// (0x0001d532) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001eecb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe353,	// (0x0001d53e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe504,	// (0x0001d6ef) sp_fs_scroll_pane_cp02

0x9c8a,	// (0x00018e75) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9c8a,	// (0x00018e75) popup_sp_fs_calendar_preview_list_single_pane

0x930c,	// (0x000184f7) main_cam6_pano_pane

0x937c,	// (0x00018567) main_mup3_pane_ParamLimits

0x930c,	// (0x000184f7) main_phacti_pane

0x76fd,	// (0x000168e8) bg_button_pane_cp11

0x7717,	// (0x00016902) main_mobtv_info_pane_g2_ParamLimits

0x7717,	// (0x00016902) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001ee2b) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001ee2b) main_mobtv_info_pane_g

0x78f4,	// (0x00016adf) sc_clock_pane_t5_ParamLimits

0x78f4,	// (0x00016adf) sc_clock_pane_t5

0x79af,	// (0x00016b9a) main_radioblah_pane_g1_ParamLimits

0xe152,	// (0x0001d33d) main_radioblah_pane_t3_ParamLimits

0xe152,	// (0x0001d33d) main_radioblah_pane_t3

0xe16a,	// (0x0001d355) main_radioblah_pane_t4_ParamLimits

0xe16a,	// (0x0001d355) main_radioblah_pane_t4

0x79d7,	// (0x00016bc2) main_radioblah_text_pane_ParamLimits

0x79d7,	// (0x00016bc2) main_radioblah_text_pane

0x79e9,	// (0x00016bd4) main_radioblah_info_pane_g1_ParamLimits

0x7a82,	// (0x00016c6d) main_radioblah_info_pane_t4_ParamLimits

0x7a82,	// (0x00016c6d) main_radioblah_info_pane_t4

0x937c,	// (0x00018567) main_sp_fs_calendar_pane

0x84ba,	// (0x000176a5) main_phacti_pane_g1

0x84c2,	// (0x000176ad) phacti_note_pane_ParamLimits

0x84c2,	// (0x000176ad) phacti_note_pane

0xe645,	// (0x0001d830) phacti_term_pane_ParamLimits

0xe645,	// (0x0001d830) phacti_term_pane

0xe65a,	// (0x0001d845) phacti_note_pane_t1_ParamLimits

0xe65a,	// (0x0001d845) phacti_note_pane_t1

0xe671,	// (0x0001d85c) phacti_term_pane_g1

0xe679,	// (0x0001d864) phacti_term_pane_t1_ParamLimits

0xe679,	// (0x0001d864) phacti_term_pane_t1

0xe6a3,	// (0x0001d88e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6ab,	// (0x0001d896) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001ef9b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6b3,	// (0x0001d89e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6b3,	// (0x0001d89e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6c9,	// (0x0001d8b4) aid_popup_sp_fs_bg_corner_pane

0xc233,	// (0x0001b41e) popup_sp_fs_calendar_preview_bg_pane_g1

0x930c,	// (0x000184f7) popup_sp_fs_calendar_preview_bg_pane

0x100a,	// (0x000101f5) popup_sp_fs_calendar_preview_list_pane

0xbd16,	// (0x0001af01) bg_main_sp_fs_cale_pane_ParamLimits

0xbd16,	// (0x0001af01) bg_main_sp_fs_cale_pane

0xe6da,	// (0x0001d8c5) listscroll_cale_mrui_pane_ParamLimits

0xe6da,	// (0x0001d8c5) listscroll_cale_mrui_pane

0xe6ef,	// (0x0001d8da) listscroll_sp_fs_schedule_track_pane

0xe6f8,	// (0x0001d8e3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe6f8,	// (0x0001d8e3) main_sp_fs_ctrlbar_pane_cp01

0xe70b,	// (0x0001d8f6) main_sp_fs_ribbon_pane

0xe713,	// (0x0001d8fe) popup_sp_fs_cale_preview_window

0x8537,	// (0x00017722) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8537,	// (0x00017722) list_single_sp_fs_schedule_track_pane

0x937c,	// (0x00018567) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x937c,	// (0x00018567) bg_sp_fs_highlight_list_pane_cp03

0x854d,	// (0x00017738) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x854d,	// (0x00017738) list_single_sp_fs_schedule_track_pane_g1

0x8559,	// (0x00017744) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8559,	// (0x00017744) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001efa0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001efa0) list_single_sp_fs_schedule_track_pane_g

0x8565,	// (0x00017750) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8565,	// (0x00017750) list_single_sp_fs_schedule_track_pane_t1

0x857f,	// (0x0001776a) sp_fs_schedule_track_pane_ParamLimits

0x857f,	// (0x0001776a) sp_fs_schedule_track_pane

0xe725,	// (0x0001d910) sp_fs_schedule_track_pane_g1

0xe72d,	// (0x0001d918) sp_fs_schedule_track_pane_g2

0xe735,	// (0x0001d920) sp_fs_schedule_track_pane_g3

0xe73d,	// (0x0001d928) sp_fs_schedule_track_pane_g4

0xe745,	// (0x0001d930) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001efa5) sp_fs_schedule_track_pane_g

0xd0a5,	// (0x0001c290) bg_sp_fs_schedule_viewer_highlight_g1

0x9fa5,	// (0x00019190) bg_sp_fs_schedule_viewer_highlight_g2

0xd0ad,	// (0x0001c298) bg_sp_fs_schedule_viewer_highlight_g3

0xd0b5,	// (0x0001c2a0) bg_sp_fs_schedule_viewer_highlight_g4

0xd356,	// (0x0001c541) bg_sp_fs_schedule_viewer_highlight_g5

0xd0c5,	// (0x0001c2b0) bg_sp_fs_schedule_viewer_highlight_g6

0xd0cd,	// (0x0001c2b8) bg_sp_fs_schedule_viewer_highlight_g7

0xd0d5,	// (0x0001c2c0) bg_sp_fs_schedule_viewer_highlight_g8

0x9f85,	// (0x00019170) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001efb0) bg_sp_fs_schedule_viewer_highlight_g

0x930c,	// (0x000184f7) bg_main_sp_fs_ribbon_pane

0x8590,	// (0x0001777b) main_sp_fs_ribbon_pane_g1

0xe74d,	// (0x0001d938) main_sp_fs_ribbon_pane_t1

0x8599,	// (0x00017784) main_sp_fs_ribbon_pane_t2

0xe75c,	// (0x0001d947) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001efc3) main_sp_fs_ribbon_pane_t

0xe76b,	// (0x0001d956) main_sp_fs_ribbon_scheduler_pane

0xe773,	// (0x0001d95e) bg_main_sp_fs_ribbon_pane_g1

0xe77c,	// (0x0001d967) bg_main_sp_fs_ribbon_pane_g2

0xe785,	// (0x0001d970) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001efca) bg_main_sp_fs_ribbon_pane_g

0xe78d,	// (0x0001d978) main_sp_fs_ribbon_scheduler_pane_g1

0xe796,	// (0x0001d981) main_sp_fs_ribbon_scheduler_pane_g2

0xe79f,	// (0x0001d98a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001efd1) main_sp_fs_ribbon_scheduler_pane_g

0xe7a8,	// (0x0001d993) list_cale_mrui_pane

0x85a8,	// (0x00017793) sp_fs_scroll_pane_cp07_ParamLimits

0x85a8,	// (0x00017793) sp_fs_scroll_pane_cp07

0x85c4,	// (0x000177af) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x85c4,	// (0x000177af) bg_sp_fs_schedule_viewer_highlight

0xe7b5,	// (0x0001d9a0) list_single_sp_fs_schedule_track_pane_cp01

0xe7bd,	// (0x0001d9a8) list_sp_fs_schedule_track_pane

0xe7c5,	// (0x0001d9b0) sp_fs_scroll_pane_cp06_ParamLimits

0xe7c5,	// (0x0001d9b0) sp_fs_scroll_pane_cp06

0xc233,	// (0x0001b41e) bgmain_sp_fs_calendar_pane_g1

0x85d4,	// (0x000177bf) list_single_cale_mrui_pane_ParamLimits

0x85d4,	// (0x000177bf) list_single_cale_mrui_pane

0xe7d7,	// (0x0001d9c2) list_single_cale_mrui_row_pane_ParamLimits

0xe7d7,	// (0x0001d9c2) list_single_cale_mrui_row_pane

0xe7e4,	// (0x0001d9cf) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe7e4,	// (0x0001d9cf) list_single_cale_mrui_row_pane_g1

0xe829,	// (0x0001da14) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe829,	// (0x0001da14) list_single_cale_mrui_row_pane_t1

0x85f6,	// (0x000177e1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85f6,	// (0x000177e1) list_single_cale_mrui_row_pane_t2

0xe83b,	// (0x0001da26) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe83b,	// (0x0001da26) list_single_cale_mrui_row_pane_t3

0xe86a,	// (0x0001da55) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe86a,	// (0x0001da55) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001efdf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001efdf) list_single_cale_mrui_row_pane_t

0x865e,	// (0x00017849) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x865e,	// (0x00017849) list_single_cmail_header_editor_pane_bg_cp01

0x8684,	// (0x0001786f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8684,	// (0x0001786f) list_single_cmail_header_editor_pane_bg_cp02

0x86a4,	// (0x0001788f) main_radioblah_text_pane_t1_ParamLimits

0x86a4,	// (0x0001788f) main_radioblah_text_pane_t1

0xe899,	// (0x0001da84) cam6_indi_pane_cp01

0xe8a1,	// (0x0001da8c) cam6_mode_pane_cp01

0xe8a9,	// (0x0001da94) cam6_pano_pane

0xe8b2,	// (0x0001da9d) cam6_zoom_pane_cp01

0xe8ba,	// (0x0001daa5) cam6_pano_image_pane

0xe8c5,	// (0x0001dab0) cam6_pano_pane_g1

0xdeb5,	// (0x0001d0a0) cam6_pano_pane_g2

0xe8ce,	// (0x0001dab9) cam6_pano_pane_g3

0xe8d7,	// (0x0001dac2) cam6_pano_pane_g4

0xc865,	// (0x0001ba50) cam6_pano_pane_g5

0xe8e0,	// (0x0001dacb) cam6_pano_pane_g6

0xe8ea,	// (0x0001dad5) cam6_pano_pane_g7

0xe8f2,	// (0x0001dadd) cam6_pano_pane_g8

0xe8fb,	// (0x0001dae6) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001efe8) cam6_pano_pane_g

0x930c,	// (0x000184f7) main_browser_tag_pane

0xe626,	// (0x0001d811) grid_navstr_albumart_pane

0xe906,	// (0x0001daf1) cell_navstr_albumart_pane_ParamLimits

0xe906,	// (0x0001daf1) cell_navstr_albumart_pane

0xa9e2,	// (0x00019bcd) cell_navstr_albumart_pane_g1

0xbb27,	// (0x0001ad12) cell_navstr_albumart_pane_g2

0xbb37,	// (0x0001ad22) cell_navstr_albumart_pane_g3

0xbb2f,	// (0x0001ad1a) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001effb) cell_navstr_albumart_pane_g

0x86bf,	// (0x000178aa) bt_list_pane_ParamLimits

0x86bf,	// (0x000178aa) bt_list_pane

0xe928,	// (0x0001db13) bt_list_pane_t1

0xe937,	// (0x0001db22) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001f004) bt_list_pane_t

0x930c,	// (0x000184f7) main_cale_prevew_pane

0x86d4,	// (0x000178bf) popup_cale_preview_window_ParamLimits

0x86d4,	// (0x000178bf) popup_cale_preview_window

0x937c,	// (0x00018567) bg_popup_preview_window_pane_cp05_ParamLimits

0x937c,	// (0x00018567) bg_popup_preview_window_pane_cp05

0xe946,	// (0x0001db31) list_cale_preview_pane_ParamLimits

0xe946,	// (0x0001db31) list_cale_preview_pane

0xe952,	// (0x0001db3d) list_double_cale_preview_pane_ParamLimits

0xe952,	// (0x0001db3d) list_double_cale_preview_pane

0xe964,	// (0x0001db4f) list_single_cale_preview_pane_ParamLimits

0xe964,	// (0x0001db4f) list_single_cale_preview_pane

0xe978,	// (0x0001db63) list_single_cale_preview_pane_g1

0xe980,	// (0x0001db6b) list_single_cale_preview_pane_t1_ParamLimits

0xe980,	// (0x0001db6b) list_single_cale_preview_pane_t1

0xe995,	// (0x0001db80) list_double_cale_preview_pane_g1

0xe99d,	// (0x0001db88) list_double_cale_preview_pane_t1_ParamLimits

0xe99d,	// (0x0001db88) list_double_cale_preview_pane_t1

0xe9b2,	// (0x0001db9d) list_double_cale_preview_pane_t2_ParamLimits

0xe9b2,	// (0x0001db9d) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001f009) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001f009) list_double_cale_preview_pane_t

0x930c,	// (0x000184f7) main_ezdial_pane

0x937c,	// (0x00018567) main_sp_fs_email_pane_ParamLimits

0x7cd2,	// (0x00016ebd) cmail_ddmenu_btn01_pane_ParamLimits

0x7cd2,	// (0x00016ebd) cmail_ddmenu_btn01_pane

0x7ce5,	// (0x00016ed0) cmail_ddmenu_btn02_pane_ParamLimits

0x7ce5,	// (0x00016ed0) cmail_ddmenu_btn02_pane

0x7d08,	// (0x00016ef3) cmail_ddmenu_btn03_pane_ParamLimits

0x7d08,	// (0x00016ef3) cmail_ddmenu_btn03_pane

0x7d2e,	// (0x00016f19) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d52,	// (0x00016f3d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x83a8,	// (0x00017593) list_cmail_body_pane_ParamLimits

0xe51a,	// (0x0001d705) bg_button_pane_cp12

0xe52f,	// (0x0001d71a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe52f,	// (0x0001d71a) list_single_cmail_header_detail_pane_g3

0xe578,	// (0x0001d763) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe578,	// (0x0001d763) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001ef8c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001ef8c) list_single_cmail_header_detail_pane_t

0xe68e,	// (0x0001d879) phacti_term_pane_t2_ParamLimits

0xe68e,	// (0x0001d879) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001ef96) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001ef96) phacti_term_pane_t

0xe9ca,	// (0x0001dbb5) aid_size_list_single_double

0x86ed,	// (0x000178d8) popup_ezdial_listscroll_window

0x8708,	// (0x000178f3) popup_number_entry_window_cp01

0x9d42,	// (0x00018f2d) bg_popup_call_pane_cp09

0xe9d6,	// (0x0001dbc1) ezdial_list_pane

0xe9de,	// (0x0001dbc9) scroll_pane_cp23

0xbd16,	// (0x0001af01) bg_button_pane_cp028_ParamLimits

0xbd16,	// (0x0001af01) bg_button_pane_cp028

0x8716,	// (0x00017901) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8716,	// (0x00017901) cmail_ddmenu_btn01_pane_g1

0x8722,	// (0x0001790d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8722,	// (0x0001790d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001f00e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001f00e) cmail_ddmenu_btn01_pane_g

0xe9e6,	// (0x0001dbd1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9e6,	// (0x0001dbd1) cmail_ddmenu_btn01_pane_t1

0xbd16,	// (0x0001af01) bg_button_pane_cp029_ParamLimits

0xbd16,	// (0x0001af01) bg_button_pane_cp029

0x872e,	// (0x00017919) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x872e,	// (0x00017919) cmail_ddmenu_btn02_pane_g1

0x8746,	// (0x00017931) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8746,	// (0x00017931) cmail_ddmenu_btn02_pane_t1

0x937c,	// (0x00018567) bg_button_pane_cp031_ParamLimits

0x937c,	// (0x00018567) bg_button_pane_cp031

0x872e,	// (0x00017919) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x872e,	// (0x00017919) cmail_ddmenu_btn03_pane_g1

0x8746,	// (0x00017931) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8746,	// (0x00017931) cmail_ddmenu_btn03_pane_t1

0x5506,	// (0x000146f1) cell_dialer2_keypad_pane_t1_ParamLimits

0x5520,	// (0x0001470b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5520,	// (0x0001470b) cell_dialer2_keypad_pane_t1_copy1

0x7564,	// (0x0001674f) ncimui_group_button_pane

0x937c,	// (0x00018567) main_sp_fs_calendar_pane_ParamLimits

0x83bd,	// (0x000175a8) list_single_cmail_header_caption_pane_ParamLimits

0xe6d1,	// (0x0001d8bc) aid_recal_txt_sm_pane

0x930c,	// (0x000184f7) mian_recal_day_pane

0xe713,	// (0x0001d8fe) popup_sp_fs_cale_preview_window_ParamLimits

0xe9fb,	// (0x0001dbe6) list_recal_day_pane

0xea3d,	// (0x0001dc28) list_single_recal_day_pane_ParamLimits

0xea3d,	// (0x0001dc28) list_single_recal_day_pane

0xea4f,	// (0x0001dc3a) list_single_recal_day_pane_g1_ParamLimits

0xea4f,	// (0x0001dc3a) list_single_recal_day_pane_g1

0xea5b,	// (0x0001dc46) list_single_recal_day_pane_g2_ParamLimits

0xea5b,	// (0x0001dc46) list_single_recal_day_pane_g2

0xea6b,	// (0x0001dc56) list_single_recal_day_pane_g3_ParamLimits

0xea6b,	// (0x0001dc56) list_single_recal_day_pane_g3

0x876a,	// (0x00017955) list_single_recal_day_pane_g4_ParamLimits

0x876a,	// (0x00017955) list_single_recal_day_pane_g4

0xeaa4,	// (0x0001dc8f) list_single_recal_day_pane_g5_ParamLimits

0xeaa4,	// (0x0001dc8f) list_single_recal_day_pane_g5

0xeab4,	// (0x0001dc9f) list_single_recal_day_pane_g6_ParamLimits

0xeab4,	// (0x0001dc9f) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001f01d) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001f01d) list_single_recal_day_pane_g

0xeac8,	// (0x0001dcb3) list_single_recal_day_pane_t1

0xeada,	// (0x0001dcc5) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001f028) list_single_recal_day_pane_t

0x878a,	// (0x00017975) ncimui_query_button_pane_ParamLimits

0x878a,	// (0x00017975) ncimui_query_button_pane

0x879a,	// (0x00017985) ncimui_query_button_pane_t1_ParamLimits

0x879a,	// (0x00017985) ncimui_query_button_pane_t1

0xeaec,	// (0x0001dcd7) ncimui_query_button_pane_t2_ParamLimits

0xeaec,	// (0x0001dcd7) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001f02d) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001f02d) ncimui_query_button_pane_t

0x87ad,	// (0x00017998) query_button_pane_ParamLimits

0x87ad,	// (0x00017998) query_button_pane

0x930c,	// (0x000184f7) bg_button_pane_cp0028

0xeaff,	// (0x0001dcea) query_button_pane_t1

0x35a1,	// (0x0001278c) main_tport_pane_ParamLimits

0x826c,	// (0x00017457) bg_popup_window_pane_cp01_ParamLimits

0x826c,	// (0x00017457) bg_popup_window_pane_cp01

0x8287,	// (0x00017472) heading_pane_cp08_ParamLimits

0x8287,	// (0x00017472) heading_pane_cp08

0x829a,	// (0x00017485) heading_pane_cp07_ParamLimits

0x829a,	// (0x00017485) heading_pane_cp07

0x8341,	// (0x0001752c) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001ef79) cell_tport_appsw_pane_g

0x2b8c,	// (0x00011d77) input_candi_list_open_g1

0xa19e,	// (0x00019389) list_cale_time_pane_g6_ParamLimits

0xa19e,	// (0x00019389) list_cale_time_pane_g6

0x4364,	// (0x0001354f) aid_size_touch_calib_1_ParamLimits

0x4364,	// (0x0001354f) aid_size_touch_calib_1

0x4376,	// (0x00013561) aid_size_touch_calib_2_ParamLimits

0x4376,	// (0x00013561) aid_size_touch_calib_2

0x438e,	// (0x00013579) aid_size_touch_calib_3_ParamLimits

0x438e,	// (0x00013579) aid_size_touch_calib_3

0x43ac,	// (0x00013597) aid_size_touch_calib_4_ParamLimits

0x43ac,	// (0x00013597) aid_size_touch_calib_4

0x43c4,	// (0x000135af) main_touch_calib_button_group_pane_ParamLimits

0x43c4,	// (0x000135af) main_touch_calib_button_group_pane

0x43dc,	// (0x000135c7) main_touch_calib_pane_g1_ParamLimits

0x43ee,	// (0x000135d9) main_touch_calib_pane_g2_ParamLimits

0x4400,	// (0x000135eb) main_touch_calib_pane_g3_ParamLimits

0x4412,	// (0x000135fd) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0001e93c) main_touch_calib_pane_g_ParamLimits

0x4424,	// (0x0001360f) main_touch_calib_pane_t1_ParamLimits

0x443e,	// (0x00013629) main_touch_calib_pane_t2_ParamLimits

0x4458,	// (0x00013643) main_touch_calib_pane_t3_ParamLimits

0x446c,	// (0x00013657) main_touch_calib_pane_t4_ParamLimits

0x4480,	// (0x0001366b) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0001e945) main_touch_calib_pane_t_ParamLimits

0xc607,	// (0x0001b7f2) list_single_fp_cale_pane_g3_ParamLimits

0xc607,	// (0x0001b7f2) list_single_fp_cale_pane_g3

0x937c,	// (0x00018567) bg_button_pane_cp012_ParamLimits

0x937c,	// (0x00018567) bg_vkb2_func_pane_cp03_ParamLimits

0x6598,	// (0x00015783) cell_vitu2_function_top_pane_g1_ParamLimits

0x937c,	// (0x00018567) bg_vkb2_func_pane_cp04_ParamLimits

0x74f2,	// (0x000166dd) main_ncimui_button_group_pane_ParamLimits

0x74f2,	// (0x000166dd) main_ncimui_button_group_pane

0x7552,	// (0x0001673d) main_ncimui_pane_t3_ParamLimits

0x7552,	// (0x0001673d) main_ncimui_pane_t3

0xe63c,	// (0x0001d827) phacti_button_group_pane

0xe9ca,	// (0x0001dbb5) aid_size_list_single_double_ParamLimits

0x86ed,	// (0x000178d8) popup_ezdial_listscroll_window_ParamLimits

0x8708,	// (0x000178f3) popup_number_entry_window_cp01_ParamLimits

0x87c0,	// (0x000179ab) phacti_button_pane_ParamLimits

0x87c0,	// (0x000179ab) phacti_button_pane

0x930c,	// (0x000184f7) bg_button_pane_cp14

0xeb0d,	// (0x0001dcf8) phacti_button_pane_t1

0x87d1,	// (0x000179bc) main_touch_calib_button_pane_ParamLimits

0x87d1,	// (0x000179bc) main_touch_calib_button_pane

0x9afe,	// (0x00018ce9) bg_button_pane_cp18_ParamLimits

0x9afe,	// (0x00018ce9) bg_button_pane_cp18

0xeb1b,	// (0x0001dd06) main_touch_calib_button_pane_t1_ParamLimits

0xeb1b,	// (0x0001dd06) main_touch_calib_button_pane_t1

0xeb31,	// (0x0001dd1c) main_touch_calib_button_pane_t2_ParamLimits

0xeb31,	// (0x0001dd1c) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001f032) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001f032) main_touch_calib_button_pane_t

0x930c,	// (0x000184f7) cell_ncimui_button_pane

0x930c,	// (0x000184f7) bg_button_pane_cp032

0xeb4f,	// (0x0001dd3a) cell_ncimui_button_pane_t1

0xce13,	// (0x0001bffe) image3_infobar_pane_ParamLimits

0xce13,	// (0x0001bffe) image3_infobar_pane

0x7920,	// (0x00016b0b) fs_bigclock_status_pane_ParamLimits

0x7920,	// (0x00016b0b) fs_bigclock_status_pane

0x792d,	// (0x00016b18) main_fs_bigclock_clock_pane_ParamLimits

0x792d,	// (0x00016b18) main_fs_bigclock_clock_pane

0x794d,	// (0x00016b38) main_fs_bigclock_indi_pane_ParamLimits

0x794d,	// (0x00016b38) main_fs_bigclock_indi_pane

0x7977,	// (0x00016b62) main_fs_bigclock_swipe_pane_ParamLimits

0x7977,	// (0x00016b62) main_fs_bigclock_swipe_pane

0x930c,	// (0x000184f7) main_fs_clock_dumped_data

0xdfc2,	// (0x0001d1ad) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfc2,	// (0x0001d1ad) list_single_fs_bigclock_indicator_pane_g1

0xdfde,	// (0x0001d1c9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdfde,	// (0x0001d1c9) list_single_fs_bigclock_indicator_pane_g2

0xdff8,	// (0x0001d1e3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdff8,	// (0x0001d1e3) list_single_fs_bigclock_indicator_pane_g3

0xe012,	// (0x0001d1fd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe012,	// (0x0001d1fd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001ee5f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001ee5f) list_single_fs_bigclock_indicator_pane_g

0xe03d,	// (0x0001d228) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe03d,	// (0x0001d228) list_single_fs_bigclock_indicator_pane_t1

0xe065,	// (0x0001d250) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe065,	// (0x0001d250) list_single_fs_bigclock_indicator_pane_t2

0xe08d,	// (0x0001d278) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe08d,	// (0x0001d278) list_single_fs_bigclock_indicator_pane_t3

0xe0b5,	// (0x0001d2a0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0b5,	// (0x0001d2a0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001ee6a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001ee6a) list_single_fs_bigclock_indicator_pane_t

0xeb5d,	// (0x0001dd48) image3_infobar_fav_pane_ParamLimits

0xeb5d,	// (0x0001dd48) image3_infobar_fav_pane

0xeb6d,	// (0x0001dd58) image3_infobar_loc_pane_ParamLimits

0xeb6d,	// (0x0001dd58) image3_infobar_loc_pane

0xeb81,	// (0x0001dd6c) image3_infobar_time_pane_ParamLimits

0xeb81,	// (0x0001dd6c) image3_infobar_time_pane

0xc233,	// (0x0001b41e) image3_infobar_time_pane_g1

0xeb91,	// (0x0001dd7c) image3_infobar_time_pane_t1

0xc233,	// (0x0001b41e) image3_infobar_loc_pane_g1

0xeb9f,	// (0x0001dd8a) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001f037) image3_infobar_loc_pane_g

0xeba7,	// (0x0001dd92) image3_infobar_loc_pane_t1

0xc233,	// (0x0001b41e) image3_infobar_fav_pane_g1

0xebb5,	// (0x0001dda0) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001f03c) image3_infobar_fav_pane_g

0xebbd,	// (0x0001dda8) fs_bigclock_status_battery_pane

0xebc6,	// (0x0001ddb1) fs_bigclock_status_signal_pane

0xebcf,	// (0x0001ddba) fs_bigclock_status_title_pane

0xebd8,	// (0x0001ddc3) fs_bigclock_status_signal_pane_g1

0xebe1,	// (0x0001ddcc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001f041) fs_bigclock_status_signal_pane_g

0xebe9,	// (0x0001ddd4) fs_bigclock_status_battery_pane_g1

0xebf2,	// (0x0001dddd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001f046) fs_bigclock_status_battery_pane_g

0xebfa,	// (0x0001dde5) fs_bigclock_status_title_pane_t1

0xc233,	// (0x0001b41e) main_fs_bigclock_clock_pane_g1

0xec08,	// (0x0001ddf3) main_fs_bigclock_clock_pane_g2

0xec11,	// (0x0001ddfc) main_fs_bigclock_clock_pane_g3

0xec11,	// (0x0001ddfc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001f04b) main_fs_bigclock_clock_pane_g

0xec19,	// (0x0001de04) main_fs_bigclock_clock_pane_t1

0x87e6,	// (0x000179d1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001f054) main_fs_bigclock_clock_pane_t

0xec27,	// (0x0001de12) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec27,	// (0x0001de12) list_single_fs_bigclock_indicator_pane

0xec38,	// (0x0001de23) list_single_fs_bigclock_pane_ParamLimits

0xec38,	// (0x0001de23) list_single_fs_bigclock_pane

0xec5e,	// (0x0001de49) main_fs_bigclock_indicator_pane_t1

0xec6d,	// (0x0001de58) list_single_fs_bigclock_pane_g1

0xec75,	// (0x0001de60) list_single_fs_bigclock_pane_t1

0xc233,	// (0x0001b41e) main_fs_bigclock_swipe_pane_g1

0xecb8,	// (0x0001dea3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001f065) main_fs_bigclock_swipe_pane_g

0xecc0,	// (0x0001deab) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc0,	// (0x0001deab) main_fs_bigclock_swipe_pane_t1

0x24a7,	// (0x00011692) call_type_pane_ParamLimits

0x930c,	// (0x000184f7) main_btmg_pane

0xe810,	// (0x0001d9fb) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe810,	// (0x0001d9fb) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001efd8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001efd8) list_single_cale_mrui_row_pane_g

0xea24,	// (0x0001dc0f) list_recal_vselct_arw_lo_pane

0xea2c,	// (0x0001dc17) list_recal_vselct_arw_up_pane

0xea34,	// (0x0001dc1f) list_recal_vselct_pane

0x8837,	// (0x00017a22) btmg_button_pane

0x8841,	// (0x00017a2c) main_btmg_pane_g1

0x930c,	// (0x000184f7) bg_button_pane_cp044

0xecdd,	// (0x0001dec8) btmg_button_pane_t1

0xbd02,	// (0x0001aeed) aid_listscroll_gen

0x937c,	// (0x00018567) main_cntbar_detail_pane

0xe4fc,	// (0x0001d6e7) list_cmail_folder_pane

0xd1b9,	// (0x0001c3a4) sp_fs_scroll_pane_cp03_ParamLimits

0x83bd,	// (0x000175a8) list_single_fs_dyc_pane_cp01_ParamLimits

0x83bd,	// (0x000175a8) list_single_fs_dyc_pane_cp01

0xeceb,	// (0x0001ded6) aid_size_cmail_indent

0xecf4,	// (0x0001dedf) list_single_dyc_row_pane_cp01

0x8877,	// (0x00017a62) cntbar_detail_list_pane_ParamLimits

0x8877,	// (0x00017a62) cntbar_detail_list_pane

0x88c3,	// (0x00017aae) main_cntbar_detail_cont_pane_ParamLimits

0x88c3,	// (0x00017aae) main_cntbar_detail_cont_pane

0xd1b9,	// (0x0001c3a4) scroll_pane_cp032_ParamLimits

0xd1b9,	// (0x0001c3a4) scroll_pane_cp032

0x88d7,	// (0x00017ac2) cntbar_detail_list_event_pane_ParamLimits

0x88d7,	// (0x00017ac2) cntbar_detail_list_event_pane

0x8887,	// (0x00017a72) cntbar_detail_list_shct_pane

0x9ff3,	// (0x000191de) aid_list_gen

0xecfd,	// (0x0001dee8) aid_scroll

0xed06,	// (0x0001def1) aid_size_touch_scroll_bar

0x6c8f,	// (0x00015e7a) aid_list_double

0xed0f,	// (0x0001defa) aid_list_single

0x6c8f,	// (0x00015e7a) aid_list_single_lg

0xed18,	// (0x0001df03) aid_list_z_g_a_sm

0xed20,	// (0x0001df0b) aid_list_z_g_d

0xed28,	// (0x0001df13) aid_txt_z_prm

0x88e7,	// (0x00017ad2) aid_txt_z_prm_cp01

0x88f5,	// (0x00017ae0) aid_txt_z_sec

0x8903,	// (0x00017aee) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8903,	// (0x00017aee) main_cntbar_detail_cont_pane_g1

0x8917,	// (0x00017b02) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8917,	// (0x00017b02) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001f06a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001f06a) main_cntbar_detail_cont_pane_g

0xed36,	// (0x0001df21) main_cntbar_detail_cont_pane_t1

0xed44,	// (0x0001df2f) main_cntbar_detail_cont_pane_t2

0xed52,	// (0x0001df3d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001f06f) main_cntbar_detail_cont_pane_t

0x8927,	// (0x00017b12) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8927,	// (0x00017b12) cell_cntbar_detail_list_shct_pane

0xed60,	// (0x0001df4b) cntbar_detail_list_shct_pane_g1

0xed69,	// (0x0001df54) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001f076) cntbar_detail_list_shct_pane_g

0x893b,	// (0x00017b26) cntbar_detail_list_event_pane_g1_ParamLimits

0x893b,	// (0x00017b26) cntbar_detail_list_event_pane_g1

0x8947,	// (0x00017b32) cntbar_detail_list_event_pane_g2_ParamLimits

0x8947,	// (0x00017b32) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001f07b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001f07b) cntbar_detail_list_event_pane_g

0x89b3,	// (0x00017b9e) cntbar_detail_list_event_pane_t1_ParamLimits

0x89b3,	// (0x00017b9e) cntbar_detail_list_event_pane_t1

0x89c8,	// (0x00017bb3) cntbar_detail_list_event_pane_t2_ParamLimits

0x89c8,	// (0x00017bb3) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001f088) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001f088) cntbar_detail_list_event_pane_t

0xc233,	// (0x0001b41e) cell_cntbar_detail_list_shct_pane_g1

0xa821,	// (0x00019a0c) navi_pane_mv_g3

0x937c,	// (0x00018567) main_cntbar_detail_pane_ParamLimits

0x930c,	// (0x000184f7) main_notif_wgt_pane

0xcba5,	// (0x0001bd90) aid_tch_main_mp4_pane_g4

0xcda7,	// (0x0001bf92) popup_slider_window_cp02

0xea1a,	// (0x0001dc05) list_recal_day_event_pane

0x884b,	// (0x00017a36) cntbar_detail_btn_pane_ParamLimits

0x884b,	// (0x00017a36) cntbar_detail_btn_pane

0x8861,	// (0x00017a4c) cntbar_detail_btn_pane_cp01_ParamLimits

0x8861,	// (0x00017a4c) cntbar_detail_btn_pane_cp01

0x8887,	// (0x00017a72) cntbar_detail_list_shct_pane_ParamLimits

0x8897,	// (0x00017a82) cntbar_detail_pane_g1_ParamLimits

0x8897,	// (0x00017a82) cntbar_detail_pane_g1

0x88a7,	// (0x00017a92) cntbar_detail_pane_t1_ParamLimits

0x88a7,	// (0x00017a92) cntbar_detail_pane_t1

0x8953,	// (0x00017b3e) cntbar_detail_list_event_pane_g3_ParamLimits

0x8953,	// (0x00017b3e) cntbar_detail_list_event_pane_g3

0x896b,	// (0x00017b56) cntbar_detail_list_event_pane_g4_ParamLimits

0x896b,	// (0x00017b56) cntbar_detail_list_event_pane_g4

0x8983,	// (0x00017b6e) cntbar_detail_list_event_pane_g5_ParamLimits

0x8983,	// (0x00017b6e) cntbar_detail_list_event_pane_g5

0x899b,	// (0x00017b86) cntbar_detail_list_event_pane_g6_ParamLimits

0x899b,	// (0x00017b86) cntbar_detail_list_event_pane_g6

0x89dd,	// (0x00017bc8) cntbar_detail_list_event_pane_t3_ParamLimits

0x89dd,	// (0x00017bc8) cntbar_detail_list_event_pane_t3

0x89ef,	// (0x00017bda) popup_notif_wgt_window_ParamLimits

0x89ef,	// (0x00017bda) popup_notif_wgt_window

0x8a08,	// (0x00017bf3) popup_submenu_window_cp01_ParamLimits

0x8a08,	// (0x00017bf3) popup_submenu_window_cp01

0x9d42,	// (0x00018f2d) bg_popup_window_pane_cp10

0xed72,	// (0x0001df5d) listscroll_notif_wgt_pane

0xed83,	// (0x0001df6e) list_notif_wgt_window

0xed8c,	// (0x0001df77) scroll_pane_cp033

0x8a1a,	// (0x00017c05) list_notif_wgt_row_pane_ParamLimits

0x8a1a,	// (0x00017c05) list_notif_wgt_row_pane

0xed95,	// (0x0001df80) aid_size_list_notif_wgt_del

0xeda2,	// (0x0001df8d) list_notif_wgt_row_pane_g1

0xedae,	// (0x0001df99) list_notif_wgt_row_pane_g2

0xedc2,	// (0x0001dfad) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001f08f) list_notif_wgt_row_pane_g

0xedcf,	// (0x0001dfba) list_notif_wgt_row_pane_t1

0xede5,	// (0x0001dfd0) list_notif_wgt_row_pane_t2

0xedf7,	// (0x0001dfe2) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001f096) list_notif_wgt_row_pane_t

0xd37e,	// (0x0001c569) list_recal_day_event_pane_g1

0xee09,	// (0x0001dff4) list_recal_day_event_pane_t1

0x930c,	// (0x000184f7) bg_button_pane_cp045

0xee18,	// (0x0001e003) cntbar_detail_btn_pane_t1

0xbd16,	// (0x0001af01) main_callh_pane_ParamLimits

0xbd16,	// (0x0001af01) main_callh_pane

0x930c,	// (0x000184f7) main_coverflow0_pane

0x930c,	// (0x000184f7) main_wgtman_pane

0x798f,	// (0x00016b7a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x798f,	// (0x00016b7a) main_fs_bigclock_unlock_btn_pane

0x8339,	// (0x00017524) bg_button_pane_cp16

0x8349,	// (0x00017534) cell_tport_appsw_pane_g3

0x8a2a,	// (0x00017c15) cf0_flow_pane_ParamLimits

0x8a2a,	// (0x00017c15) cf0_flow_pane

0xee26,	// (0x0001e011) listscroll_cf0_pane

0xee31,	// (0x0001e01c) main_cf0_pane_g1

0x8a3f,	// (0x00017c2a) main_cf0_pane_t1_ParamLimits

0x8a3f,	// (0x00017c2a) main_cf0_pane_t1

0x8a56,	// (0x00017c41) main_cf0_pane_t2_ParamLimits

0x8a56,	// (0x00017c41) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001f0a2) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001f0a2) main_cf0_pane_t

0xee43,	// (0x0001e02e) scroll_pane_cp11

0x8a6d,	// (0x00017c58) cf0_flow_pane_g1

0x8a75,	// (0x00017c60) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001f0a7) cf0_flow_pane_g

0x8a7d,	// (0x00017c68) cf0_flow_pane_t1

0x930c,	// (0x000184f7) main_call6_pane

0x930c,	// (0x000184f7) main_calllock_pane

0x8a8b,	// (0x00017c76) call6_btn_grp_pane_ParamLimits

0x8a8b,	// (0x00017c76) call6_btn_grp_pane

0x8aa5,	// (0x00017c90) call6_pane_g1_ParamLimits

0x8aa5,	// (0x00017c90) call6_pane_g1

0x8aba,	// (0x00017ca5) popup_call6_1st_window_ParamLimits

0x8aba,	// (0x00017ca5) popup_call6_1st_window

0x8acb,	// (0x00017cb6) popup_call6_2nd_window_ParamLimits

0x8acb,	// (0x00017cb6) popup_call6_2nd_window

0x8adc,	// (0x00017cc7) cell_call6_btn_pane_ParamLimits

0x8adc,	// (0x00017cc7) cell_call6_btn_pane

0x9d42,	// (0x00018f2d) bg_popup_call2_in_pane_cp03

0xee4e,	// (0x0001e039) popup_call6_1st_window_g1

0xee56,	// (0x0001e041) popup_call6_1st_window_g2

0xee5e,	// (0x0001e049) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001f0ac) popup_call6_1st_window_g

0xee66,	// (0x0001e051) popup_call6_1st_window_t1

0xee75,	// (0x0001e060) popup_call6_1st_window_t2

0xee85,	// (0x0001e070) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001f0b3) popup_call6_1st_window_t

0x9d42,	// (0x00018f2d) bg_popup_call2_in_pane_cp04

0xee4e,	// (0x0001e039) popup_call6_2nd_window_g1

0xee56,	// (0x0001e041) popup_call6_2nd_window_g2

0xee5e,	// (0x0001e049) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001f0ac) popup_call6_2nd_window_g

0xee66,	// (0x0001e051) popup_call6_2nd_window_t1

0x930c,	// (0x000184f7) bg_button_pane_cp15

0xee95,	// (0x0001e080) cell_call6_btn_pane_g1

0xee9e,	// (0x0001e089) cell_call6_btn_pane_t1

0x8af0,	// (0x00017cdb) listscroll_wgtman_pane_ParamLimits

0x8af0,	// (0x00017cdb) listscroll_wgtman_pane

0x8b11,	// (0x00017cfc) wgtman_btn_pane_ParamLimits

0x8b11,	// (0x00017cfc) wgtman_btn_pane

0xa626,	// (0x00019811) aid_scroll_copy1

0xeead,	// (0x0001e098) list_wgtman_pane

0x8b54,	// (0x00017d3f) wgtman_btn_pane_g1_ParamLimits

0x8b54,	// (0x00017d3f) wgtman_btn_pane_g1

0x8b80,	// (0x00017d6b) wgtman_btn_pane_t1_ParamLimits

0x8b80,	// (0x00017d6b) wgtman_btn_pane_t1

0xeeb7,	// (0x0001e0a2) wgtman_btn_pane_t2_ParamLimits

0xeeb7,	// (0x0001e0a2) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001f0ba) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001f0ba) wgtman_btn_pane_t

0x8bbd,	// (0x00017da8) listrow_wgtman_pane_ParamLimits

0x8bbd,	// (0x00017da8) listrow_wgtman_pane

0x8bd0,	// (0x00017dbb) listrow_wgtman_pane_g1

0x8bdd,	// (0x00017dc8) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001f0bf) listrow_wgtman_pane_g

0x8bfb,	// (0x00017de6) listrow_wgtman_pane_t1

0x8c13,	// (0x00017dfe) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001f0c4) listrow_wgtman_pane_t

0x8c39,	// (0x00017e24) wait_bar_pane_cp09

0xeece,	// (0x0001e0b9) main_calllock_btn_pane

0xeed8,	// (0x0001e0c3) main_calllock_pane_g1

0x930c,	// (0x000184f7) bg_button_pane_cp17

0xeee3,	// (0x0001e0ce) main_calllock_btn_pane_g1

0xeeec,	// (0x0001e0d7) main_calllock_btn_pane_t1

0x930c,	// (0x000184f7) main_dialer3_pane

0x930c,	// (0x000184f7) main_fmrd2_pane

0xc233,	// (0x0001b41e) main_fs_bigclock_unlock_btn_pane_g1

0xef03,	// (0x0001e0ee) main_fs_bigclock_unlock_btn_pane_t1

0x8c4b,	// (0x00017e36) area_fmrd2_info_pane_ParamLimits

0x8c4b,	// (0x00017e36) area_fmrd2_info_pane

0x8c5c,	// (0x00017e47) area_fmrd2_visual_pane_ParamLimits

0x8c5c,	// (0x00017e47) area_fmrd2_visual_pane

0x8c6a,	// (0x00017e55) fmrd2_indi_pane_ParamLimits

0x8c6a,	// (0x00017e55) fmrd2_indi_pane

0x8c77,	// (0x00017e62) area_fmrd2_visual_pane_g1

0x8c7f,	// (0x00017e6a) area_fmrd2_visual_pane_t1

0x8c8f,	// (0x00017e7a) area_fmrd2_visual_pane_t2

0x8c9f,	// (0x00017e8a) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001f0ce) area_fmrd2_visual_pane_t

0x8caf,	// (0x00017e9a) area_fmrd2_info_pane_g1

0x8cb7,	// (0x00017ea2) area_fmrd2_info_pane_t1

0x8cc7,	// (0x00017eb2) area_fmrd2_info_pane_t2

0x8cd7,	// (0x00017ec2) area_fmrd2_info_pane_t3

0x8ce7,	// (0x00017ed2) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001f0d5) area_fmrd2_info_pane_t

0x8cf5,	// (0x00017ee0) fmrd2_indi_pane_t1

0x8d05,	// (0x00017ef0) fmrd2_indi_pane_t2

0x8d15,	// (0x00017f00) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001f0de) fmrd2_indi_pane_t

0xe021,	// (0x0001d20c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe021,	// (0x0001d20c) list_single_fs_bigclock_indicator_pane_g5

0xe0d1,	// (0x0001d2bc) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0d1,	// (0x0001d2bc) list_single_fs_bigclock_indicator_pane_t5

0x84d6,	// (0x000176c1) aid_cell_bcale_month_pane_ParamLimits

0x84d6,	// (0x000176c1) aid_cell_bcale_month_pane

0x84f4,	// (0x000176df) bcale_month_pane_ParamLimits

0x84f4,	// (0x000176df) bcale_month_pane

0x8518,	// (0x00017703) bcale_preview_pane_ParamLimits

0x8518,	// (0x00017703) bcale_preview_pane

0xec75,	// (0x0001de60) list_single_fs_bigclock_pane_t1_ParamLimits

0xec94,	// (0x0001de7f) list_single_fs_bigclock_pane_t2_ParamLimits

0xec94,	// (0x0001de7f) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001f060) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001f060) list_single_fs_bigclock_pane_t

0xeefb,	// (0x0001e0e6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001f0c9) main_fs_bigclock_unlock_btn_pane_g

0x8d25,	// (0x00017f10) aid_dia3_key_size_ParamLimits

0x8d25,	// (0x00017f10) aid_dia3_key_size

0x8d34,	// (0x00017f1f) aid_dia3_listrow_size_ParamLimits

0x8d34,	// (0x00017f1f) aid_dia3_listrow_size

0x8d49,	// (0x00017f34) dia3_keypad_fun_pane_ParamLimits

0x8d49,	// (0x00017f34) dia3_keypad_fun_pane

0x8d65,	// (0x00017f50) dia3_keypad_num_pane_ParamLimits

0x8d65,	// (0x00017f50) dia3_keypad_num_pane

0x8d80,	// (0x00017f6b) dia3_listscroll_pane_ParamLimits

0x8d80,	// (0x00017f6b) dia3_listscroll_pane

0x8d93,	// (0x00017f7e) dia3_numentry_pane_ParamLimits

0x8d93,	// (0x00017f7e) dia3_numentry_pane

0xef11,	// (0x0001e0fc) dia3_list_pane

0xef1c,	// (0x0001e107) scroll_pane_cp12

0x930c,	// (0x000184f7) bg_dia3_numentry_pane

0x8da7,	// (0x00017f92) dia3_numentry_pane_t1

0x8db6,	// (0x00017fa1) cell_dia3_key_num_pane

0x8dbe,	// (0x00017fa9) cell_dia3_key0_fun_pane_ParamLimits

0x8dbe,	// (0x00017fa9) cell_dia3_key0_fun_pane

0x8dd2,	// (0x00017fbd) cell_dia3_key1_fun_pane_ParamLimits

0x8dd2,	// (0x00017fbd) cell_dia3_key1_fun_pane

0x8dea,	// (0x00017fd5) dia3_listrow_pane

0xdd2f,	// (0x0001cf1a) bg_dia3_numentry_pane_g1

0x930c,	// (0x000184f7) bg_button_pane_cp21

0xef27,	// (0x0001e112) cell_dia3_key_num_pane_t1

0xef35,	// (0x0001e120) cell_dia3_key_num_pane_t2

0xef44,	// (0x0001e12f) cell_dia3_key_num_pane_t3

0xef53,	// (0x0001e13e) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001f0e5) cell_dia3_key_num_pane_t

0x930c,	// (0x000184f7) bg_button_pane_cp19

0x8dfc,	// (0x00017fe7) cell_dia3_key0_fun_pane_g1

0x930c,	// (0x000184f7) bg_button_pane_cp20

0x8e04,	// (0x00017fef) cell_dia3_key1_fun_pane_g1

0x8e0c,	// (0x00017ff7) area_left_week_number_pane

0x8e18,	// (0x00018003) area_top_day_name_pane

0x8e2b,	// (0x00018016) frame_month_view_pane

0xef62,	// (0x0001e14d) grid_month_view_pane

0x8e3e,	// (0x00018029) cell_top_day_name_pane_ParamLimits

0x8e3e,	// (0x00018029) cell_top_day_name_pane

0x8e6b,	// (0x00018056) cell_area_left_week_number_pane_ParamLimits

0x8e6b,	// (0x00018056) cell_area_left_week_number_pane

0x8e7f,	// (0x0001806a) cell_month_view_pane_ParamLimits

0x8e7f,	// (0x0001806a) cell_month_view_pane

0xef70,	// (0x0001e15b) frm_month_g1

0x8eac,	// (0x00018097) frm_month_g2

0x8ebf,	// (0x000180aa) frm_month_g3

0x8ed2,	// (0x000180bd) frm_month_g4

0x8ee5,	// (0x000180d0) frm_month_g5

0x8ef8,	// (0x000180e3) frm_month_g6

0x8f0b,	// (0x000180f6) frm_month_g7

0xef7d,	// (0x0001e168) frm_month_g8

0x8f1e,	// (0x00018109) frm_month_g9

0x8f2e,	// (0x00018119) frm_month_g10

0x8f3e,	// (0x00018129) frm_month_g11

0x8f4e,	// (0x00018139) frm_month_g12

0x8f60,	// (0x0001814b) frm_month_g13

0x8f72,	// (0x0001815d) frm_month_g14

0x8f86,	// (0x00018171) frm_month_g15

0x8f9a,	// (0x00018185) frm_month_g16

0x000f,

0xff03,	// (0x0001f0ee) frm_month_g

0xef8a,	// (0x0001e175) cell_top_day_name_pane_t1

0x8fae,	// (0x00018199) cell_area_left_week_number_pane_g1

0x8fba,	// (0x000181a5) cell_area_left_week_number_pane_t1

0xc493,	// (0x0001b67e) cell_month_view_pane_g1

0x8fcd,	// (0x000181b8) cell_month_view_pane_t1

0x930c,	// (0x000184f7) main_fps_pane

0xe303,	// (0x0001d4ee) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe303,	// (0x0001d4ee) cmail_ddmenu_btn02_pane_cp1

0xe31f,	// (0x0001d50a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe31f,	// (0x0001d50a) cmail_ddmenu_btn02_pane_cp2

0x873a,	// (0x00017925) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x873a,	// (0x00017925) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001f013) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001f013) cmail_ddmenu_btn02_pane_g

0x8758,	// (0x00017943) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8758,	// (0x00017943) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001f018) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001f018) cmail_ddmenu_btn02_pane_t

0x8fe0,	// (0x000181cb) fps_text_pane_ParamLimits

0x8fe0,	// (0x000181cb) fps_text_pane

0x8ff7,	// (0x000181e2) main_fps_pane_g1_ParamLimits

0x8ff7,	// (0x000181e2) main_fps_pane_g1

0x9011,	// (0x000181fc) wait_bar_pane_cp010_ParamLimits

0x9011,	// (0x000181fc) wait_bar_pane_cp010

0x9022,	// (0x0001820d) fps_text_pane_t1_ParamLimits

0x9022,	// (0x0001820d) fps_text_pane_t1

0xea77,	// (0x0001dc62) cam4_image_uncrop_pane_g1

0xea80,	// (0x0001dc6b) cam4_image_uncrop_pane_g2

0x59ac,	// (0x00014b97) cam4_image_uncrop_pane_g3

0x59b5,	// (0x00014ba0) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001ead9) cam4_image_uncrop_pane_g

0x8dea,	// (0x00017fd5) dia3_listrow_pane_ParamLimits

0x930c,	// (0x000184f7) main_phob2_pane

0x830a,	// (0x000174f5) cell_tport_appsw_pane_cp02_ParamLimits

0x830a,	// (0x000174f5) cell_tport_appsw_pane_cp02

0x831e,	// (0x00017509) cell_tport_appsw_pane_cp03_ParamLimits

0x831e,	// (0x00017509) cell_tport_appsw_pane_cp03

0x930c,	// (0x000184f7) phob2_contact_card_pane

0x930c,	// (0x000184f7) phob2_listscroll_pane

0xef9d,	// (0x0001e188) phob2_list_pane

0xefa5,	// (0x0001e190) scroll_pane_cp034

0x903a,	// (0x00018225) phob2_cc_data_pane_ParamLimits

0x903a,	// (0x00018225) phob2_cc_data_pane

0x9059,	// (0x00018244) phob2_cc_listscroll_pane_ParamLimits

0x9059,	// (0x00018244) phob2_cc_listscroll_pane

0x9077,	// (0x00018262) list_double_large_graphic_phob2_pane_ParamLimits

0x9077,	// (0x00018262) list_double_large_graphic_phob2_pane

0x908a,	// (0x00018275) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x908a,	// (0x00018275) list_double_large_graphic_phob2_pane_g1

0x90a0,	// (0x0001828b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x90a0,	// (0x0001828b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001f10f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001f10f) list_double_large_graphic_phob2_pane_g

0x90ac,	// (0x00018297) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x90ac,	// (0x00018297) list_double_large_graphic_phob2_pane_t1

0x90c2,	// (0x000182ad) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x90c2,	// (0x000182ad) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001f114) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001f114) list_double_large_graphic_phob2_pane_t

0x930c,	// (0x000184f7) list_highlight_pane_cp024

0x90d7,	// (0x000182c2) phob2_cc_button_pane

0x90df,	// (0x000182ca) phob2_cc_data_pane_g1_ParamLimits

0x90df,	// (0x000182ca) phob2_cc_data_pane_g1

0x90f4,	// (0x000182df) phob2_cc_data_pane_g2_ParamLimits

0x90f4,	// (0x000182df) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001f119) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001f119) phob2_cc_data_pane_g

0x9104,	// (0x000182ef) phob2_cc_data_pane_t1_ParamLimits

0x9104,	// (0x000182ef) phob2_cc_data_pane_t1

0x911c,	// (0x00018307) phob2_cc_data_pane_t2_ParamLimits

0x911c,	// (0x00018307) phob2_cc_data_pane_t2

0x9134,	// (0x0001831f) phob2_cc_data_pane_t3_ParamLimits

0x9134,	// (0x0001831f) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001f11e) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001f11e) phob2_cc_data_pane_t

0xefad,	// (0x0001e198) phob2_cc_list_pane_ParamLimits

0xefad,	// (0x0001e198) phob2_cc_list_pane

0xd427,	// (0x0001c612) scroll_pane_cp035_ParamLimits

0xd427,	// (0x0001c612) scroll_pane_cp035

0x937c,	// (0x00018567) bg_button_pane_cp033

0xefb9,	// (0x0001e1a4) phob2_cc_button_pane_g1

0xefc5,	// (0x0001e1b0) phob2_cc_button_pane_t1

0xefda,	// (0x0001e1c5) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001f125) phob2_cc_button_pane_t

0x914c,	// (0x00018337) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x914c,	// (0x00018337) list_double_large_graphic_phob2_cc_pane

0x915f,	// (0x0001834a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x915f,	// (0x0001834a) list_double_large_graphic_phob2_cc_pane_g1

0x916b,	// (0x00018356) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x916b,	// (0x00018356) list_double_large_graphic_phob2_cc_pane_g2

0x9177,	// (0x00018362) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9177,	// (0x00018362) list_double_large_graphic_phob2_cc_pane_g3

0x9183,	// (0x0001836e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9183,	// (0x0001836e) list_double_large_graphic_phob2_cc_pane_g4

0x918f,	// (0x0001837a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x918f,	// (0x0001837a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001f12a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001f12a) list_double_large_graphic_phob2_cc_pane_g

0x919b,	// (0x00018386) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x919b,	// (0x00018386) list_double_large_graphic_phob2_cc_pane_t1

0x91c4,	// (0x000183af) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x91c4,	// (0x000183af) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001f135) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001f135) list_double_large_graphic_phob2_cc_pane_t

0xefec,	// (0x0001e1d7) list_highlight_pane_cp025_ParamLimits

0xefec,	// (0x0001e1d7) list_highlight_pane_cp025

0x937c,	// (0x00018567) bg_button_pane_cp033_ParamLimits

0xefb9,	// (0x0001e1a4) phob2_cc_button_pane_g1_ParamLimits

0xefc5,	// (0x0001e1b0) phob2_cc_button_pane_t1_ParamLimits

0xefda,	// (0x0001e1c5) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001f125) phob2_cc_button_pane_t_ParamLimits

0x02c0,	// (0x0000f4ab) popup_wgtman_window

0xd1f5,	// (0x0001c3e0) scroll_pane_cp038

0x8b36,	// (0x00017d21) wgtman_btn_pane_cp_01_ParamLimits

0x8b36,	// (0x00017d21) wgtman_btn_pane_cp_01

0xeffa,	// (0x0001e1e5) wgtman_content_pane

0xf003,	// (0x0001e1ee) wgtman_heading_pane

0x930c,	// (0x000184f7) bg_heading_pane_cp02

0xf00c,	// (0x0001e1f7) wgtman_heading_pane_g1

0xf014,	// (0x0001e1ff) wgtman_heading_pane_t1

0xf022,	// (0x0001e20d) scroll_pane_cp036

0xf02a,	// (0x0001e215) wgtman_list_pane

0xea89,	// (0x0001dc74) wgtman_list_pane_t1_ParamLimits

0xea89,	// (0x0001dc74) wgtman_list_pane_t1

0xcf46,	// (0x0001c131) cam4_grid_pane

0x677f,	// (0x0001596a) bg_button_pane_cp015_ParamLimits

0x6793,	// (0x0001597e) bg_button_pane_cp016_ParamLimits

0x67a6,	// (0x00015991) bg_button_pane_cp017_ParamLimits

0x67fe,	// (0x000159e9) popup_vitu2_query_window_g3_ParamLimits

0x67fe,	// (0x000159e9) popup_vitu2_query_window_g3

0x68bb,	// (0x00015aa6) popup_vitu2_query_window_t6_ParamLimits

0x68bb,	// (0x00015aa6) popup_vitu2_query_window_t6

0x68e6,	// (0x00015ad1) popup_vitu2_query_window_t7_ParamLimits

0x68e6,	// (0x00015ad1) popup_vitu2_query_window_t7

0xea77,	// (0x0001dc62) cam4_grid_pane_g1

0xea80,	// (0x0001dc6b) cam4_grid_pane_g2

0xf032,	// (0x0001e21d) cam4_grid_pane_g3

0xf03b,	// (0x0001e226) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001f13a) cam4_grid_pane_g

0x1308,	// (0x000104f3) aid_placing_vt_slider_lsc_ParamLimits

0x1605,	// (0x000107f0) vidtel_button_pane_ParamLimits

0x1605,	// (0x000107f0) vidtel_button_pane

0xf046,	// (0x0001e231) bg_button_pane_cp034

0x91ed,	// (0x000183d8) vidtel_button_pane_g1

0xf050,	// (0x0001e23b) vidtel_button_pane_t1

0xd332,	// (0x0001c51d) aid_size_vtel_slider_touch

0xd427,	// (0x0001c612) scroll_pane_cp039

0xdd6d,	// (0x0001cf58) ncim_query_button_pane_cp01_ParamLimits

0xdd8c,	// (0x0001cf77) ncimui_query_pane_g1_ParamLimits

0x937c,	// (0x00018567) input_focus_pane_cp012_ParamLimits

0xddb1,	// (0x0001cf9c) ncim_query_entry_pane_t1_ParamLimits

0xd427,	// (0x0001c612) scroll_pane_cp039_ParamLimits

0xa70c,	// (0x000198f7) navi_pane_bcale_mc_g1

0xa714,	// (0x000198ff) navi_pane_bcale_mc_t1

0xe368,	// (0x0001d553) main_sp_fs_email_pane_g1

0xe374,	// (0x0001d55f) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001eed0) main_sp_fs_email_pane_g

0xe81c,	// (0x0001da07) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe81c,	// (0x0001da07) list_single_cale_mrui_row_pane_g3

0x8780,	// (0x0001796b) list_single_recal_day_pane_g5_event_pane

0xeac0,	// (0x0001dcab) list_single_recal_day_pane_g7

0xf05e,	// (0x0001e249) list_recal_day_event_pane_cp01

0xf067,	// (0x0001e252) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0001e25a) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0001e262) list_recal_vselct_pane_cp01

0xd37e,	// (0x0001c569) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0001e26c) list_recal_day_event_pane_cp01_t1

0xeac8,	// (0x0001dcb3) list_single_recal_day_pane_t1_ParamLimits

0xeada,	// (0x0001dcc5) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001f028) list_single_recal_day_pane_t_ParamLimits

0x99f8,	// (0x00018be3) bg_notes_pane_ParamLimits

0x9ac2,	// (0x00018cad) list_notes_pane_ParamLimits

0x05f4,	// (0x0000f7df) scroll_pane_cp06_ParamLimits

0x9afe,	// (0x00018ce9) main_notes_pane_ParamLimits

0x930c,	// (0x000184f7) main_welc_pane

0x91f5,	// (0x000183e0) main_welc_body_pane_ParamLimits

0x91f5,	// (0x000183e0) main_welc_body_pane

0x9212,	// (0x000183fd) main_welc_opti_pane_ParamLimits

0x9212,	// (0x000183fd) main_welc_opti_pane

0x925b,	// (0x00018446) main_welc_pane_t1_ParamLimits

0x925b,	// (0x00018446) main_welc_pane_t1

0x927d,	// (0x00018468) main_welc_body_row_pane_ParamLimits

0x927d,	// (0x00018468) main_welc_body_row_pane

0xd1ab,	// (0x0001c396) main_welc_opti_row_pane_ParamLimits

0xd1ab,	// (0x0001c396) main_welc_opti_row_pane

0xf08f,	// (0x0001e27a) main_welc_opti_row_pane_g1

0x9293,	// (0x0001847e) main_welc_opti_row_pane_t1

0xf097,	// (0x0001e282) main_welc_body_row_pane_t1

0xed7b,	// (0x0001df66) popup_notif_wgt_heading_pane

0xed95,	// (0x0001df80) aid_size_list_notif_wgt_del_ParamLimits

0xeda2,	// (0x0001df8d) list_notif_wgt_row_pane_g1_ParamLimits

0xedae,	// (0x0001df99) list_notif_wgt_row_pane_g2_ParamLimits

0xedc2,	// (0x0001dfad) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001f08f) list_notif_wgt_row_pane_g_ParamLimits

0xedcf,	// (0x0001dfba) list_notif_wgt_row_pane_t1_ParamLimits

0xede5,	// (0x0001dfd0) list_notif_wgt_row_pane_t2_ParamLimits

0xedf7,	// (0x0001dfe2) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001f096) list_notif_wgt_row_pane_t_ParamLimits

0x8bd0,	// (0x00017dbb) listrow_wgtman_pane_g1_ParamLimits

0x8bdd,	// (0x00017dc8) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001f0bf) listrow_wgtman_pane_g_ParamLimits

0x8bfb,	// (0x00017de6) listrow_wgtman_pane_t1_ParamLimits

0x8c13,	// (0x00017dfe) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001f0c4) listrow_wgtman_pane_t_ParamLimits

0x8c39,	// (0x00017e24) wait_bar_pane_cp09_ParamLimits

0x930c,	// (0x000184f7) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0001e291) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0001e299) popup_notif_wgt_heading_pane_t1

0x930c,	// (0x000184f7) main_vids_pane

0x930c,	// (0x000184f7) vids_listscroll_pane

0x92a2,	// (0x0001848d) scroll_pane_cp040

0x930c,	// (0x000184f7) vids_list_pane

0x92ad,	// (0x00018498) vids_list_double_pane_ParamLimits

0x92ad,	// (0x00018498) vids_list_double_pane

0x92be,	// (0x000184a9) vids_list_double_pane_g1

0x92c7,	// (0x000184b2) vids_list_double_pane_t1

0x92d6,	// (0x000184c1) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001f148) vids_list_double_pane_t

0x937c,	// (0x00018567) main_ncimui_pane_ParamLimits

0x7506,	// (0x000166f1) main_ncimui_pane_g1_ParamLimits

0x7512,	// (0x000166fd) main_ncimui_pane_g2_ParamLimits

0x7512,	// (0x000166fd) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001edd5) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001edd5) main_ncimui_pane_g

0x9231,	// (0x0001841c) main_welc_pane_g1_ParamLimits

0x9231,	// (0x0001841c) main_welc_pane_g1

0x9246,	// (0x00018431) main_welc_pane_g2_ParamLimits

0x9246,	// (0x00018431) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001f143) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001f143) main_welc_pane_g

0x99f8,	// (0x00018be3) listscroll_mce_pane_ParamLimits

0xa861,	// (0x00019a4c) wait_bar_pane_cp10

0xbd0a,	// (0x0001aef5) main_cale_day_pane_ParamLimits

0xbd0a,	// (0x0001aef5) main_cale_week_pane_ParamLimits

0x99f8,	// (0x00018be3) main_messa_pane_ParamLimits

0x4cb9,	// (0x00013ea4) main_clock2_btn_pane_ParamLimits

0x4cb9,	// (0x00013ea4) main_clock2_btn_pane

0xc68f,	// (0x0001b87a) main_clock2_btn_pane_cp01_ParamLimits

0xc68f,	// (0x0001b87a) main_clock2_btn_pane_cp01

0xe7a8,	// (0x0001d993) list_cale_mrui_pane_ParamLimits

0xee3b,	// (0x0001e026) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001f09d) main_cf0_pane_g

0x8e0c,	// (0x00017ff7) area_left_week_number_pane_ParamLimits

0x8e18,	// (0x00018003) area_top_day_name_pane_ParamLimits

0x8e2b,	// (0x00018016) frame_month_view_pane_ParamLimits

0xef62,	// (0x0001e14d) grid_month_view_pane_ParamLimits

0xef70,	// (0x0001e15b) frm_month_g1_ParamLimits

0x8eac,	// (0x00018097) frm_month_g2_ParamLimits

0x8ebf,	// (0x000180aa) frm_month_g3_ParamLimits

0x8ed2,	// (0x000180bd) frm_month_g4_ParamLimits

0x8ee5,	// (0x000180d0) frm_month_g5_ParamLimits

0x8ef8,	// (0x000180e3) frm_month_g6_ParamLimits

0x8f0b,	// (0x000180f6) frm_month_g7_ParamLimits

0xef7d,	// (0x0001e168) frm_month_g8_ParamLimits

0x8f1e,	// (0x00018109) frm_month_g9_ParamLimits

0x8f2e,	// (0x00018119) frm_month_g10_ParamLimits

0x8f3e,	// (0x00018129) frm_month_g11_ParamLimits

0x8f4e,	// (0x00018139) frm_month_g12_ParamLimits

0x8f60,	// (0x0001814b) frm_month_g13_ParamLimits

0x8f72,	// (0x0001815d) frm_month_g14_ParamLimits

0x8f86,	// (0x00018171) frm_month_g15_ParamLimits

0x8f9a,	// (0x00018185) frm_month_g16_ParamLimits

0xff03,	// (0x0001f0ee) frm_month_g_ParamLimits

0xef8a,	// (0x0001e175) cell_top_day_name_pane_t1_ParamLimits

0x8fae,	// (0x00018199) cell_area_left_week_number_pane_g1_ParamLimits

0x8fba,	// (0x000181a5) cell_area_left_week_number_pane_t1_ParamLimits

0xc493,	// (0x0001b67e) cell_month_view_pane_g1_ParamLimits

0x8fcd,	// (0x000181b8) cell_month_view_pane_t1_ParamLimits

0x99f0,	// (0x00018bdb) main_clock2_btn_pane_g1

0xf0bc,	// (0x0001e2a7) main_clock2_btn_pane_t1

0x937c,	// (0x00018567) listscroll_cmail_pane_ParamLimits

0xe368,	// (0x0001d553) main_sp_fs_email_pane_g1_ParamLimits

0xe374,	// (0x0001d55f) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001eed0) main_sp_fs_email_pane_g_ParamLimits

0xe9fb,	// (0x0001dbe6) list_recal_day_pane_ParamLimits

0xea0c,	// (0x0001dbf7) mian_recal_day_pane_t1

0x7f91,	// (0x0001717c) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f91,	// (0x0001717c) list_single_dyc_row_text_pane_t4

0x7fda,	// (0x000171c5) list_single_dyc_row_text_pane_t5_ParamLimits

0x7fda,	// (0x000171c5) list_single_dyc_row_text_pane_t5

0xe438,	// (0x0001d623) list_single_dyc_row_text_pane_t6_ParamLimits

0xe438,	// (0x0001d623) list_single_dyc_row_text_pane_t6

0xa17d,	// (0x00019368) aid_mgn_list_cale_time_pane

0x937c,	// (0x00018567) main_gallery2_pane_ParamLimits

0xc6a5,	// (0x0001b890) main_clock2_pane_cp01_t1

0xc6b3,	// (0x0001b89e) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0001e9af) main_clock2_pane_cp01_t

0x09ad,	// (0x0000fb98) cale_week_scroll_pane_g16_ParamLimits

0x09ad,	// (0x0000fb98) cale_week_scroll_pane_g16

0x9d42,	// (0x00018f2d) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
