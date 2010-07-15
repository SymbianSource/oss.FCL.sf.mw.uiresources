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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000f193 };

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
0x0073,	// (0x0000f206) Screen

0x007f,	// (0x0000f212) application_window

0x00bb,	// (0x0000f24e) area_bottom_pane_ParamLimits

0x00bb,	// (0x0000f24e) area_bottom_pane

0x00f4,	// (0x0000f287) area_top_pane_ParamLimits

0x00f4,	// (0x0000f287) area_top_pane

0x9506,	// (0x00018699) call_video_uplink_pane_ParamLimits

0x9506,	// (0x00018699) call_video_uplink_pane

0x0182,	// (0x0000f315) main_pane_ParamLimits

0x0182,	// (0x0000f315) main_pane

0xbf07,	// (0x0001b09a) context_pane

0x3664,	// (0x000127f7) navi_pane

0x3696,	// (0x00012829) popup_cale_events_window_ParamLimits

0x3696,	// (0x00012829) popup_cale_events_window

0xbf1a,	// (0x0001b0ad) popup_mup_playback_window

0x36ae,	// (0x00012841) signal_pane

0x9c87,	// (0x00018e1a) main_browser_pane

0x9ec1,	// (0x00019054) main_burst_pane

0x33c4,	// (0x00012557) main_calc_pane

0xbe99,	// (0x0001b02c) main_cale_day_pane

0x07d5,	// (0x0000f968) main_cale_month_pane

0xbe99,	// (0x0001b02c) main_cale_week_pane

0x9ec1,	// (0x00019054) main_call_pane

0x9945,	// (0x00018ad8) main_call_poc_pane

0x9ec1,	// (0x00019054) main_camera_pane

0x9ec1,	// (0x00019054) main_chi_dic_pane

0xa74f,	// (0x000198e2) main_clock_pane

0x9945,	// (0x00018ad8) main_fmradio_pane

0x9ec1,	// (0x00019054) main_graph_messa_pane

0x9945,	// (0x00018ad8) main_help_pane

0x9c87,	// (0x00018e1a) main_im_pane

0x9ba0,	// (0x00018d33) main_image_pane_ParamLimits

0x9ba0,	// (0x00018d33) main_image_pane

0x9945,	// (0x00018ad8) main_location2_pane

0x9ec1,	// (0x00019054) main_location_pane

0x9ba0,	// (0x00018d33) main_messa_pane

0x9945,	// (0x00018ad8) main_mp2_pane

0x9ec1,	// (0x00019054) main_mp_pane

0x9945,	// (0x00018ad8) main_msg_pane

0x9945,	// (0x00018ad8) main_mup_eq_pane

0x9945,	// (0x00018ad8) main_mup_pane

0x9c87,	// (0x00018e1a) main_notes_pane

0x9945,	// (0x00018ad8) main_pec_pane

0x9945,	// (0x00018ad8) main_phob_pane

0x9945,	// (0x00018ad8) main_pinb_pane

0x9945,	// (0x00018ad8) main_postcard_pane

0x9945,	// (0x00018ad8) main_qdial_pane

0x9ec1,	// (0x00019054) main_skin_pane

0x9945,	// (0x00018ad8) main_smil2_pane

0x9ec1,	// (0x00019054) main_smil_pane

0x9ec1,	// (0x00019054) main_video_pane

0x9ec1,	// (0x00019054) main_video_tele_pane

0x9ba0,	// (0x00018d33) main_viewer_pane_ParamLimits

0x9ba0,	// (0x00018d33) main_viewer_pane

0x9ec1,	// (0x00019054) main_vorec_pane

0x3418,	// (0x000125ab) popup_blid_sat_info_window_ParamLimits

0x3418,	// (0x000125ab) popup_blid_sat_info_window

0x3470,	// (0x00012603) popup_dyc_status_message_window_ParamLimits

0x3470,	// (0x00012603) popup_dyc_status_message_window

0x348a,	// (0x0001261d) popup_grid_large_graphic_window_ParamLimits

0x348a,	// (0x0001261d) popup_grid_large_graphic_window

0x3546,	// (0x000126d9) popup_loc_request_window_ParamLimits

0x3546,	// (0x000126d9) popup_loc_request_window

0x363c,	// (0x000127cf) popup_wml_address_window_ParamLimits

0x363c,	// (0x000127cf) popup_wml_address_window

0x31fe,	// (0x00012391) call_muted_g1

0x2eb3,	// (0x00012046) popup_call_audio_conf_window_ParamLimits

0x2eb3,	// (0x00012046) popup_call_audio_conf_window

0x3212,	// (0x000123a5) popup_call_audio_first_window_ParamLimits

0x3212,	// (0x000123a5) popup_call_audio_first_window

0x3288,	// (0x0001241b) popup_call_audio_in_window_ParamLimits

0x3288,	// (0x0001241b) popup_call_audio_in_window

0x32c4,	// (0x00012457) popup_call_audio_out_window_ParamLimits

0x32c4,	// (0x00012457) popup_call_audio_out_window

0x32fe,	// (0x00012491) popup_call_audio_second_window_ParamLimits

0x32fe,	// (0x00012491) popup_call_audio_second_window

0x3354,	// (0x000124e7) popup_call_audio_wait_window_ParamLimits

0x3354,	// (0x000124e7) popup_call_audio_wait_window

0x3389,	// (0x0001251c) popup_number_entry_window_ParamLimits

0x3389,	// (0x0001251c) popup_number_entry_window

0x9532,	// (0x000186c5) bg_popup_call_pane_cp05_ParamLimits

0x9532,	// (0x000186c5) bg_popup_call_pane_cp05

0x9552,	// (0x000186e5) popup_number_entry_window_t1

0x9565,	// (0x000186f8) popup_number_entry_window_t2

0x9577,	// (0x0001870a) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0001e242) popup_number_entry_window_t

0x9589,	// (0x0001871c) text_title_cp2

0x959c,	// (0x0001872f) bg_popup_call_pane_cp_ParamLimits

0x959c,	// (0x0001872f) bg_popup_call_pane_cp

0x95aa,	// (0x0001873d) call_thumbnail_pane

0x95b2,	// (0x00018745) popup_call_audio_in_window_g1_ParamLimits

0x95b2,	// (0x00018745) popup_call_audio_in_window_g1

0x95be,	// (0x00018751) popup_call_audio_in_window_g2_ParamLimits

0x95be,	// (0x00018751) popup_call_audio_in_window_g2

0x95ca,	// (0x0001875d) popup_call_audio_in_window_g3_ParamLimits

0x95ca,	// (0x0001875d) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0001e24b) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0001e24b) popup_call_audio_in_window_g

0x95d6,	// (0x00018769) popup_call_audio_in_window_t1_ParamLimits

0x95d6,	// (0x00018769) popup_call_audio_in_window_t1

0x95f2,	// (0x00018785) popup_call_audio_in_window_t2_ParamLimits

0x95f2,	// (0x00018785) popup_call_audio_in_window_t2

0x960e,	// (0x000187a1) popup_call_audio_in_window_t3_ParamLimits

0x960e,	// (0x000187a1) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0001e252) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0001e252) popup_call_audio_in_window_t

0x959c,	// (0x0001872f) bg_popup_call_pane_cp01_ParamLimits

0x959c,	// (0x0001872f) bg_popup_call_pane_cp01

0x95aa,	// (0x0001873d) call_thumbnail_pane_cp02

0x9621,	// (0x000187b4) call_type_pane_cp022

0x9629,	// (0x000187bc) popup_call_audio_out_window_g1_ParamLimits

0x9629,	// (0x000187bc) popup_call_audio_out_window_g1

0x963b,	// (0x000187ce) popup_call_audio_out_window_g2_ParamLimits

0x963b,	// (0x000187ce) popup_call_audio_out_window_g2

0x9647,	// (0x000187da) popup_call_audio_out_window_g3_ParamLimits

0x9647,	// (0x000187da) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0001e259) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0001e259) popup_call_audio_out_window_g

0x9659,	// (0x000187ec) popup_call_audio_out_window_t1_ParamLimits

0x9659,	// (0x000187ec) popup_call_audio_out_window_t1

0x9671,	// (0x00018804) popup_call_audio_out_window_t2_ParamLimits

0x9671,	// (0x00018804) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0001e260) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0001e260) popup_call_audio_out_window_t

0x9686,	// (0x00018819) bg_popup_call_pane_ParamLimits

0x9686,	// (0x00018819) bg_popup_call_pane

0x033e,	// (0x0000f4d1) call_thumbnail_pane_cp_ParamLimits

0x033e,	// (0x0000f4d1) call_thumbnail_pane_cp

0x970a,	// (0x0001889d) call_type_pane_cp01_ParamLimits

0x970a,	// (0x0001889d) call_type_pane_cp01

0x974e,	// (0x000188e1) popup_call_audio_first_window_g1_ParamLimits

0x974e,	// (0x000188e1) popup_call_audio_first_window_g1

0x979a,	// (0x0001892d) popup_call_audio_first_window_g2_ParamLimits

0x979a,	// (0x0001892d) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0001e265) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0001e265) popup_call_audio_first_window_g

0x97de,	// (0x00018971) popup_call_audio_first_window_t1_ParamLimits

0x97de,	// (0x00018971) popup_call_audio_first_window_t1

0x988a,	// (0x00018a1d) popup_call_audio_first_window_t4_ParamLimits

0x988a,	// (0x00018a1d) popup_call_audio_first_window_t4

0x9916,	// (0x00018aa9) popup_call_audio_first_window_t5_ParamLimits

0x9916,	// (0x00018aa9) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0001e26a) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0001e26a) popup_call_audio_first_window_t

0x9945,	// (0x00018ad8) bg_popup_call_pane_cp02

0x994f,	// (0x00018ae2) call_type_pane_cp023

0x9957,	// (0x00018aea) popup_call_audio_wait_window_g1

0x995f,	// (0x00018af2) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0001e271) popup_call_audio_wait_window_g

0x9967,	// (0x00018afa) popup_call_audio_wait_window_t3

0x9975,	// (0x00018b08) bg_popup_call_pane_cp03_ParamLimits

0x9975,	// (0x00018b08) bg_popup_call_pane_cp03

0x99d5,	// (0x00018b68) call_thumbnail_pane_cp011_ParamLimits

0x99d5,	// (0x00018b68) call_thumbnail_pane_cp011

0x99e1,	// (0x00018b74) call_type_pane_cp034_ParamLimits

0x99e1,	// (0x00018b74) call_type_pane_cp034

0x9a1d,	// (0x00018bb0) popup_call_audio_second_window_g1_ParamLimits

0x9a1d,	// (0x00018bb0) popup_call_audio_second_window_g1

0x9a59,	// (0x00018bec) popup_call_audio_second_window_g2_ParamLimits

0x9a59,	// (0x00018bec) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0001e276) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0001e276) popup_call_audio_second_window_g

0x9a95,	// (0x00018c28) popup_call_audio_second_window_t1_ParamLimits

0x9a95,	// (0x00018c28) popup_call_audio_second_window_t1

0x9b16,	// (0x00018ca9) popup_call_audio_second_window_t2_ParamLimits

0x9b16,	// (0x00018ca9) popup_call_audio_second_window_t2

0x9b4c,	// (0x00018cdf) popup_call_audio_second_window_t3_ParamLimits

0x9b4c,	// (0x00018cdf) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0001e27b) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0001e27b) popup_call_audio_second_window_t

0x9945,	// (0x00018ad8) bg_popup_call_pane_cp04

0x9b82,	// (0x00018d15) list_conf_pane

0x9b8a,	// (0x00018d1d) popup_call_audio_conf_window_t1

0x9b98,	// (0x00018d2b) call_thumbnail_pane_g1

0x9ba0,	// (0x00018d33) bg_pinb_pane_ParamLimits

0x9ba0,	// (0x00018d33) bg_pinb_pane

0x9bae,	// (0x00018d41) find_pinb_pane

0x9bb7,	// (0x00018d4a) listscroll_pinb_pane_ParamLimits

0x9bb7,	// (0x00018d4a) listscroll_pinb_pane

0x9bc6,	// (0x00018d59) pinb_bg_pane_g1

0x0362,	// (0x0000f4f5) pinb_bg_pane_g2

0x036e,	// (0x0000f501) pinb_bg_pane_g3

0x037a,	// (0x0000f50d) pinb_bg_pane_g4

0x0386,	// (0x0000f519) pinb_bg_pane_g5

0x0392,	// (0x0000f525) pinb_bg_pane_g6

0x039d,	// (0x0000f530) pinb_bg_pane_g7

0x03a8,	// (0x0000f53b) pinb_bg_pane_g8

0x03b3,	// (0x0000f546) pinb_bg_pane_g9

0x03bd,	// (0x0000f550) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0001e282) pinb_bg_pane_g

0x03da,	// (0x0000f56d) grid_pinb_pane

0x03e3,	// (0x0000f576) list_pinb_pane

0x03ec,	// (0x0000f57f) scroll_pane_cp01_ParamLimits

0x03ec,	// (0x0000f57f) scroll_pane_cp01

0x9bd0,	// (0x00018d63) find_pinb_pane_g1_ParamLimits

0x9bd0,	// (0x00018d63) find_pinb_pane_g1

0x9be8,	// (0x00018d7b) find_pinb_pane_t1

0x9bfa,	// (0x00018d8d) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0001e29c) find_pinb_pane_t

0x9c0f,	// (0x00018da2) input_focus_pane_cp01_ParamLimits

0x9c0f,	// (0x00018da2) input_focus_pane_cp01

0x03fe,	// (0x0000f591) cell_pinb_pane_ParamLimits

0x03fe,	// (0x0000f591) cell_pinb_pane

0x0427,	// (0x0000f5ba) cell_pinb_pane_g1_ParamLimits

0x0427,	// (0x0000f5ba) cell_pinb_pane_g1

0x0437,	// (0x0000f5ca) cell_pinb_pane_g2_ParamLimits

0x0437,	// (0x0000f5ca) cell_pinb_pane_g2

0x9c1b,	// (0x00018dae) cell_pinb_pane_g3_ParamLimits

0x9c1b,	// (0x00018dae) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0001e2a1) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0001e2a1) cell_pinb_pane_g

0x9945,	// (0x00018ad8) grid_highlight_pane_cp01

0x0443,	// (0x0000f5d6) list_pinb_item_pane_ParamLimits

0x0443,	// (0x0000f5d6) list_pinb_item_pane

0x9945,	// (0x00018ad8) list_highlight_pane_cp02

0x0455,	// (0x0000f5e8) list_pinb_item_pane_g1_ParamLimits

0x0455,	// (0x0000f5e8) list_pinb_item_pane_g1

0x0462,	// (0x0000f5f5) list_pinb_item_pane_g2_ParamLimits

0x0462,	// (0x0000f5f5) list_pinb_item_pane_g2

0x046e,	// (0x0000f601) list_pinb_item_pane_g3_ParamLimits

0x046e,	// (0x0000f601) list_pinb_item_pane_g3

0x047f,	// (0x0000f612) list_pinb_item_pane_g4_ParamLimits

0x047f,	// (0x0000f612) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0001e2a8) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0001e2a8) list_pinb_item_pane_g

0x048b,	// (0x0000f61e) list_pinb_item_pane_t1_ParamLimits

0x048b,	// (0x0000f61e) list_pinb_item_pane_t1

0x04c0,	// (0x0000f653) calc_display_pane

0x04e5,	// (0x0000f678) calc_paper_pane

0x0508,	// (0x0000f69b) grid_calc_pane

0x9945,	// (0x00018ad8) bg_list_pane_cp01

0x0536,	// (0x0000f6c9) clock_g1

0x053e,	// (0x0000f6d1) clock_g2

0x0001,

0xf11e,	// (0x0001e2b1) clock_g

0x0546,	// (0x0000f6d9) clock_t1_ParamLimits

0x0546,	// (0x0000f6d9) clock_t1

0x055b,	// (0x0000f6ee) clock_t2_ParamLimits

0x055b,	// (0x0000f6ee) clock_t2

0x056d,	// (0x0000f700) clock_t3_ParamLimits

0x056d,	// (0x0000f700) clock_t3

0x057f,	// (0x0000f712) clock_t4_ParamLimits

0x057f,	// (0x0000f712) clock_t4

0x0591,	// (0x0000f724) clock_t5_ParamLimits

0x0591,	// (0x0000f724) clock_t5

0x05a6,	// (0x0000f739) clock_t6_ParamLimits

0x05a6,	// (0x0000f739) clock_t6

0x05b8,	// (0x0000f74b) clock_t7_ParamLimits

0x05b8,	// (0x0000f74b) clock_t7

0x05ca,	// (0x0000f75d) clock_t8_ParamLimits

0x05ca,	// (0x0000f75d) clock_t8

0x05de,	// (0x0000f771) clock_t9_ParamLimits

0x05de,	// (0x0000f771) clock_t9

0x0008,

0xf123,	// (0x0001e2b6) clock_t_ParamLimits

0xf123,	// (0x0001e2b6) clock_t

0x9c2f,	// (0x00018dc2) popup_clock_analogue_window_cp02

0x9c2f,	// (0x00018dc2) popup_clock_digital_window_cp01

0x9c37,	// (0x00018dca) listscroll_help_pane

0x9945,	// (0x00018ad8) phob_pre_status_pane

0x9c41,	// (0x00018dd4) grid_qdial_pane

0x9ba0,	// (0x00018d33) listscroll_mce_pane

0x9ba0,	// (0x00018d33) bg_notes_pane

0x9c4b,	// (0x00018dde) list_notes_pane

0x05f2,	// (0x0000f785) scroll_pane_cp06

0x9c59,	// (0x00018dec) bg_calc_paper_pane

0x9c6d,	// (0x00018e00) list_calc_pane

0x9c87,	// (0x00018e1a) bg_calc_display_pane

0x0606,	// (0x0000f799) calc_display_pane_t1

0x061b,	// (0x0000f7ae) calc_display_pane_t2

0x9c93,	// (0x00018e26) calc_display_pane_t3

0x0002,

0xf136,	// (0x0001e2c9) calc_display_pane_t

0x0630,	// (0x0000f7c3) cell_calc_pane_ParamLimits

0x0630,	// (0x0000f7c3) cell_calc_pane

0x9ca5,	// (0x00018e38) bg_calc_paper_pane_g1

0x9cb1,	// (0x00018e44) bg_calc_paper_pane_g2

0x9cbd,	// (0x00018e50) bg_calc_paper_pane_g3

0x9cc9,	// (0x00018e5c) bg_calc_paper_pane_g4

0x9cd5,	// (0x00018e68) bg_calc_paper_pane_g5

0x0665,	// (0x0000f7f8) bg_calc_paper_pane_g6

0x0674,	// (0x0000f807) bg_calc_paper_pane_g7

0x0683,	// (0x0000f816) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0001e2d0) bg_calc_paper_pane_g

0x0696,	// (0x0000f829) calc_bg_paper_pane_g9

0x06a9,	// (0x0000f83c) list_calc_item_pane_ParamLimits

0x06a9,	// (0x0000f83c) list_calc_item_pane

0x9ce1,	// (0x00018e74) list_calc_item_pane_g1

0x9cee,	// (0x00018e81) list_calc_item_pane_t1_ParamLimits

0x9cee,	// (0x00018e81) list_calc_item_pane_t1

0x06c1,	// (0x0000f854) list_calc_item_pane_t2_ParamLimits

0x06c1,	// (0x0000f854) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0001e2e1) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0001e2e1) list_calc_item_pane_t

0x9d00,	// (0x00018e93) cell_calc_pane_g1

0x9d0a,	// (0x00018e9d) grid_highlight_pane_cp02

0x9d2c,	// (0x00018ebf) bg_calc_display_pane_g1

0x06f3,	// (0x0000f886) bg_calc_display_pane_g2

0x06fd,	// (0x0000f890) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0001e2eb) bg_calc_display_pane_g

0x0706,	// (0x0000f899) cell_qdial_pane_ParamLimits

0x0706,	// (0x0000f899) cell_qdial_pane

0x071a,	// (0x0000f8ad) cell_qdial_pane_g1_ParamLimits

0x071a,	// (0x0000f8ad) cell_qdial_pane_g1

0x0730,	// (0x0000f8c3) cell_qdial_pane_g2_ParamLimits

0x0730,	// (0x0000f8c3) cell_qdial_pane_g2

0x9d35,	// (0x00018ec8) cell_qdial_pane_g3_ParamLimits

0x9d35,	// (0x00018ec8) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0001e2f2) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0001e2f2) cell_qdial_pane_g

0x0757,	// (0x0000f8ea) cell_qdial_pane_t1_ParamLimits

0x0757,	// (0x0000f8ea) cell_qdial_pane_t1

0x076f,	// (0x0000f902) cell_qdial_pane_t2_ParamLimits

0x076f,	// (0x0000f902) cell_qdial_pane_t2

0x0782,	// (0x0000f915) cell_qdial_pane_t3_ParamLimits

0x0782,	// (0x0000f915) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0001e2fb) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0001e2fb) cell_qdial_pane_t

0x9945,	// (0x00018ad8) grid_highlight_pane_cp04

0x9d41,	// (0x00018ed4) thumbnail_qdial_pane_ParamLimits

0x9d41,	// (0x00018ed4) thumbnail_qdial_pane

0x9d9d,	// (0x00018f30) list_help_pane

0x9da6,	// (0x00018f39) scroll_pane_cp02

0x0795,	// (0x0000f928) help_list_pane_t1_ParamLimits

0x0795,	// (0x0000f928) help_list_pane_t1

0x9daf,	// (0x00018f42) bg_notes_pane_g2

0x9db7,	// (0x00018f4a) bg_notes_pane_g3

0x9dbf,	// (0x00018f52) notes_bg_pane_g1

0x9dc7,	// (0x00018f5a) notes_bg_pane_g4

0x9dcf,	// (0x00018f62) notes_bg_pane_g5

0x9dd7,	// (0x00018f6a) notes_bg_pane_g6

0x9ddf,	// (0x00018f72) notes_bg_pane_g7

0x9de7,	// (0x00018f7a) notes_bg_pane_g8

0x9def,	// (0x00018f82) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0001e319) notes_bg_pane_g

0x07b2,	// (0x0000f945) list_notes_text_pane_ParamLimits

0x07b2,	// (0x0000f945) list_notes_text_pane

0x9df7,	// (0x00018f8a) list_notes_text_pane_g1

0x07c7,	// (0x0000f95a) list_notes_text_pane_t1

0x07d5,	// (0x0000f968) listscroll_cale_week_pane

0x0801,	// (0x0000f994) bg_cale_heading_pane

0x9e1a,	// (0x00018fad) bg_cale_pane_cp01

0x0819,	// (0x0000f9ac) cale_week_corner_pane

0x0838,	// (0x0000f9cb) cale_week_day_heading_pane

0x0855,	// (0x0000f9e8) cale_week_scroll_pane_g1

0x0868,	// (0x0000f9fb) cale_week_scroll_pane_g2

0x0880,	// (0x0000fa13) cale_week_scroll_pane_g3

0x0898,	// (0x0000fa2b) cale_week_scroll_pane_g4

0x08b0,	// (0x0000fa43) cale_week_scroll_pane_g5

0x08d0,	// (0x0000fa63) cale_week_scroll_pane_g6

0x08f0,	// (0x0000fa83) cale_week_scroll_pane_g7

0x0910,	// (0x0000faa3) cale_week_scroll_pane_g8

0x0934,	// (0x0000fac7) cale_week_scroll_pane_g9

0x094c,	// (0x0000fadf) cale_week_scroll_pane_g10

0x0964,	// (0x0000faf7) cale_week_scroll_pane_g11

0x097c,	// (0x0000fb0f) cale_week_scroll_pane_g12

0x0994,	// (0x0000fb27) cale_week_scroll_pane_g13

0x0994,	// (0x0000fb27) cale_week_scroll_pane_g14

0x0994,	// (0x0000fb27) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0001e328) cale_week_scroll_pane_g

0x09d0,	// (0x0000fb63) cale_week_time_pane

0x09f4,	// (0x0000fb87) grid_cale_week_pane

0x9e49,	// (0x00018fdc) scroll_pane_cp08

0x0a1a,	// (0x0000fbad) cell_cale_week_pane_ParamLimits

0x0a1a,	// (0x0000fbad) cell_cale_week_pane

0x0aa8,	// (0x0000fc3b) cale_week_day_heading_pane_t1

0x0ad2,	// (0x0000fc65) cale_week_day_heading_pane_t2

0x0b01,	// (0x0000fc94) cale_week_day_heading_pane_t3

0x0b30,	// (0x0000fcc3) cale_week_day_heading_pane_t4

0x0b5f,	// (0x0000fcf2) cale_week_day_heading_pane_t5

0x0b96,	// (0x0000fd29) cale_week_day_heading_pane_t6

0x0bcd,	// (0x0000fd60) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0001e349) cale_week_day_heading_pane_t

0x9e66,	// (0x00018ff9) bg_cale_side_pane

0x0bf7,	// (0x0000fd8a) cale_week_time_pane_t1

0x0c11,	// (0x0000fda4) cale_week_time_pane_t2

0x0c2b,	// (0x0000fdbe) cale_week_time_pane_t3

0x0c45,	// (0x0000fdd8) cale_week_time_pane_t4

0x0c5f,	// (0x0000fdf2) cale_week_time_pane_t5

0x0c79,	// (0x0000fe0c) cale_week_time_pane_t6

0x0c93,	// (0x0000fe26) cale_week_time_pane_t7

0x0cad,	// (0x0000fe40) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0001e358) cale_week_time_pane_t

0x0cc7,	// (0x0000fe5a) cell_cale_week_pane_g2

0x0ce6,	// (0x0000fe79) cell_cale_week_pane_g3_ParamLimits

0x0ce6,	// (0x0000fe79) cell_cale_week_pane_g3

0x9e74,	// (0x00019007) grid_highlight_pane_cp07

0x9e7c,	// (0x0001900f) listscroll_gms_pane

0x9e86,	// (0x00019019) grid_gms_pane

0x9e8f,	// (0x00019022) listscroll_gms_pane_g1

0x9e97,	// (0x0001902a) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0001e369) listscroll_gms_pane_g

0x0cfe,	// (0x0000fe91) scroll_pane_cp010

0x0d09,	// (0x0000fe9c) cell_gms_pane_ParamLimits

0x0d09,	// (0x0000fe9c) cell_gms_pane

0x0d1c,	// (0x0000feaf) cell_gms_pane_g1

0x9e9f,	// (0x00019032) cell_gms_pane_g2

0x9ea7,	// (0x0001903a) cell_gms_pane_g3

0x9eb0,	// (0x00019043) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0001e36e) cell_gms_pane_g

0x9eb9,	// (0x0001904c) grid_highlight_pane_cp09

0x31a8,	// (0x0001233b) phob_pre_status_pane_g1

0x31b0,	// (0x00012343) phob_pre_status_pane_g2

0x31b8,	// (0x0001234b) phob_pre_status_pane_g3

0x31c0,	// (0x00012353) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0001e759) phob_pre_status_pane_g

0x31d0,	// (0x00012363) phob_pre_status_pane_t1

0x31de,	// (0x00012371) phob_pre_status_pane_t2

0x31ee,	// (0x00012381) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0001e764) phob_pre_status_pane_t

0x9ec1,	// (0x00019054) bg_list_pane_cp05

0x0d2c,	// (0x0000febf) grid_vorec_pane

0x0d34,	// (0x0000fec7) vorec_t1

0x0d42,	// (0x0000fed5) vorec_t2

0x0d50,	// (0x0000fee3) vorec_t3

0x0d5e,	// (0x0000fef1) vorec_t4

0x9472,	// (0x00018605) vorec_t5

0x9480,	// (0x00018613) vorec_t6

0x0004,

0xf1e4,	// (0x0001e377) vorec_t

0x948e,	// (0x00018621) wait_bar_pane_cp01

0x0d7a,	// (0x0000ff0d) cell_vorec_pane_ParamLimits

0x0d7a,	// (0x0000ff0d) cell_vorec_pane

0x9ec9,	// (0x0001905c) cell_vorec_pane_g1

0x9945,	// (0x00018ad8) grid_highlight_pane_cp05

0x0da2,	// (0x0000ff35) cams_zoom_pane

0x0db1,	// (0x0000ff44) image_vga_pane

0x0dcb,	// (0x0000ff5e) main_camera_pane_g1

0x0ddd,	// (0x0000ff70) main_camera_pane_g2

0x0ded,	// (0x0000ff80) main_camera_pane_g3

0x0dfd,	// (0x0000ff90) main_camera_pane_g4

0x0e0d,	// (0x0000ffa0) main_camera_pane_g5

0x0e1d,	// (0x0000ffb0) main_camera_pane_g6

0x0e2f,	// (0x0000ffc2) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0001e382) main_camera_pane_g

0x0e3f,	// (0x0000ffd2) main_camera_pane_t1

0x0e55,	// (0x0000ffe8) main_camera_pane_t2

0x0001,

0xf200,	// (0x0001e393) main_camera_pane_t

0x0e8f,	// (0x00010022) cams_zoom_pane_cp_ParamLimits

0x0e8f,	// (0x00010022) cams_zoom_pane_cp

0x0eb7,	// (0x0001004a) image_cif_pane_ParamLimits

0x0eb7,	// (0x0001004a) image_cif_pane

0x0eed,	// (0x00010080) image_subqcif_pane

0x0ef5,	// (0x00010088) main_video_pane_g1_ParamLimits

0x0ef5,	// (0x00010088) main_video_pane_g1

0x0f19,	// (0x000100ac) main_video_pane_g2_ParamLimits

0x0f19,	// (0x000100ac) main_video_pane_g2

0x0f4d,	// (0x000100e0) main_video_pane_g3_ParamLimits

0x0f4d,	// (0x000100e0) main_video_pane_g3

0x0f7b,	// (0x0001010e) main_video_pane_g4_ParamLimits

0x0f7b,	// (0x0001010e) main_video_pane_g4

0x0fa9,	// (0x0001013c) main_video_pane_g5_ParamLimits

0x0fa9,	// (0x0001013c) main_video_pane_g5

0x9edf,	// (0x00019072) main_video_pane_g6_ParamLimits

0x9edf,	// (0x00019072) main_video_pane_g6

0x0006,

0xf205,	// (0x0001e398) main_video_pane_g_ParamLimits

0xf205,	// (0x0001e398) main_video_pane_g

0x0fd2,	// (0x00010165) main_video_pane_t1_ParamLimits

0x0fd2,	// (0x00010165) main_video_pane_t1

0x9ef9,	// (0x0001908c) cams_zoom_pane_g1

0x9f02,	// (0x00019095) cams_zoom_pane_g2

0x9f0b,	// (0x0001909e) cams_zoom_pane_g3

0x9f14,	// (0x000190a7) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0001e3a7) cams_zoom_pane_g

0x102f,	// (0x000101c2) grid_cams_pane

0x1049,	// (0x000101dc) linegrid_cams_pane

0x105d,	// (0x000101f0) cell_cams_pane_ParamLimits

0x105d,	// (0x000101f0) cell_cams_pane

0x9f1d,	// (0x000190b0) cams_burst_image_pane

0x9f25,	// (0x000190b8) cell_cams_pane_g1

0x9945,	// (0x00018ad8) grid_highlight_pane_cp03

0x9d00,	// (0x00018e93) mp_bg_pane_g1

0x9945,	// (0x00018ad8) bg_list_pane_cp03

0xbdbe,	// (0x0001af51) bg_mp_pane

0xbdc6,	// (0x0001af59) grid_mp_pane

0xbdce,	// (0x0001af61) media_player_g1

0xbdd6,	// (0x0001af69) media_player_t1

0xbde4,	// (0x0001af77) media_player_t2

0xbdf2,	// (0x0001af85) media_player_t3

0xbe00,	// (0x0001af93) media_player_t4

0xbe0e,	// (0x0001afa1) media_player_t5

0xbe1c,	// (0x0001afaf) media_player_t6

0xbe2a,	// (0x0001afbd) media_player_t7

0x0006,

0xf5b0,	// (0x0001e743) media_player_t

0xbe38,	// (0x0001afcb) wait_bar_pane_cp02

0xf595,	// (0x0001e728) main_usb_pane_t

0x319f,	// (0x00012332) cell_mp_pane

0x9d00,	// (0x00018e93) cell_mp_pane_g1

0x9945,	// (0x00018ad8) grid_highlight_pane_cp06

0x9f2d,	// (0x000190c0) grid_skin_colour_pane

0x9f35,	// (0x000190c8) list_highlight_pane_cp03

0x1193,	// (0x00010326) skin_g1

0x9f3d,	// (0x000190d0) skin_t1

0x9f4c,	// (0x000190df) skin_t2

0x0001,

0xf249,	// (0x0001e3dc) skin_t

0x119b,	// (0x0001032e) cell_skin_colour_pane_ParamLimits

0x119b,	// (0x0001032e) cell_skin_colour_pane

0x9f5a,	// (0x000190ed) cell_skin_colour_pane_g1

0x1214,	// (0x000103a7) call_video_g1_ParamLimits

0x1214,	// (0x000103a7) call_video_g1

0x1230,	// (0x000103c3) call_video_g2_ParamLimits

0x1230,	// (0x000103c3) call_video_g2

0x0001,

0xf24e,	// (0x0001e3e1) call_video_g_ParamLimits

0xf24e,	// (0x0001e3e1) call_video_g

0x1282,	// (0x00010415) call_video_uplink_pane_cp1_ParamLimits

0x1282,	// (0x00010415) call_video_uplink_pane_cp1

0x9f6c,	// (0x000190ff) call_video_uplink_pane_cp2

0x1321,	// (0x000104b4) video_down_crop_pane_ParamLimits

0x1321,	// (0x000104b4) video_down_crop_pane

0x1418,	// (0x000105ab) video_down_pane_ParamLimits

0x1418,	// (0x000105ab) video_down_pane

0x9f74,	// (0x00019107) video_down_subqcif_pane_ParamLimits

0x9f74,	// (0x00019107) video_down_subqcif_pane

0x9f8c,	// (0x0001911f) video_down_subqcif_pane_cp_ParamLimits

0x9f8c,	// (0x0001911f) video_down_subqcif_pane_cp

0x9fb2,	// (0x00019145) im_reading_pane_ParamLimits

0x9fb2,	// (0x00019145) im_reading_pane

0x1528,	// (0x000106bb) im_writing_pane_ParamLimits

0x1528,	// (0x000106bb) im_writing_pane

0x153e,	// (0x000106d1) im_reading_pane_t1

0x9fcc,	// (0x0001915f) list_im_pane

0x9fdd,	// (0x00019170) scroll_pane_cp07

0x1577,	// (0x0001070a) im_writing_pane_t1_ParamLimits

0x1577,	// (0x0001070a) im_writing_pane_t1

0x9ff6,	// (0x00019189) im_writing_pane_t2_ParamLimits

0x9ff6,	// (0x00019189) im_writing_pane_t2

0x0001,

0xf258,	// (0x0001e3eb) im_writing_pane_t_ParamLimits

0xf258,	// (0x0001e3eb) im_writing_pane_t

0x9945,	// (0x00018ad8) input_focus_pane_cp04

0x9945,	// (0x00018ad8) input_focus_pane_cp05

0x158c,	// (0x0001071f) list_im_single_pane_ParamLimits

0x158c,	// (0x0001071f) list_im_single_pane

0x15a0,	// (0x00010733) list_single_im_pane_t1

0x315f,	// (0x000122f2) blid_accuracy_pane

0x3167,	// (0x000122fa) blid_compass_pane

0x3171,	// (0x00012304) main_location_t1

0x3181,	// (0x00012314) main_location_t2

0x3191,	// (0x00012324) main_location_t3

0x0002,

0xf5bf,	// (0x0001e752) main_location_t

0x9945,	// (0x00018ad8) aid_levels_location

0x9d00,	// (0x00018e93) blid_accuracy_pane_g1

0x9d00,	// (0x00018e93) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0001e44d) blid_accuracy_pane_g

0xa03e,	// (0x000191d1) wml_content_pane

0xa07c,	// (0x0001920f) wml_button_pane_ParamLimits

0xa07c,	// (0x0001920f) wml_button_pane

0x15af,	// (0x00010742) wml_list_single_large_pane_ParamLimits

0x15af,	// (0x00010742) wml_list_single_large_pane

0x15c4,	// (0x00010757) wml_list_single_medium_pane_ParamLimits

0x15c4,	// (0x00010757) wml_list_single_medium_pane

0x15da,	// (0x0001076d) wml_list_single_small_pane_ParamLimits

0x15da,	// (0x0001076d) wml_list_single_small_pane

0xa090,	// (0x00019223) wml_selection_box_pane_ParamLimits

0xa090,	// (0x00019223) wml_selection_box_pane

0xa0a3,	// (0x00019236) wml_list_single_pane_t1

0xa0b2,	// (0x00019245) wml_list_single_medium_pane_t1

0xa0c1,	// (0x00019254) wml_list_single_large_pane_t1

0xa0d0,	// (0x00019263) input_focus_pane_cp02_ParamLimits

0xa0d0,	// (0x00019263) input_focus_pane_cp02

0xa0e3,	// (0x00019276) wml_selection_box_pane_g1

0xa0ec,	// (0x0001927f) wml_selection_box_pane_t1_ParamLimits

0xa0ec,	// (0x0001927f) wml_selection_box_pane_t1

0x9ba0,	// (0x00018d33) bg_wml_button_pane_ParamLimits

0x9ba0,	// (0x00018d33) bg_wml_button_pane

0xa104,	// (0x00019297) wml_button_pane_g1

0xa10c,	// (0x0001929f) wml_button_pane_t1

0xa104,	// (0x00019297) wml_button_bg_pane_g1

0xa11c,	// (0x000192af) wml_button_bg_pane_g2

0xa124,	// (0x000192b7) wml_button_bg_pane_g3

0xa12c,	// (0x000192bf) wml_button_bg_pane_g4

0xa134,	// (0x000192c7) wml_button_bg_pane_g5

0xa13c,	// (0x000192cf) wml_button_bg_pane_g6

0xa144,	// (0x000192d7) wml_button_bg_pane_g7

0xa14c,	// (0x000192df) wml_button_bg_pane_g8

0xa154,	// (0x000192e7) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0001e3f0) wml_button_bg_pane_g

0x15f2,	// (0x00010785) bg_list_pane_cp02

0xa15c,	// (0x000192ef) mce_header_pane_ParamLimits

0xa15c,	// (0x000192ef) mce_header_pane

0xa172,	// (0x00019305) mce_icon_pane

0xa172,	// (0x00019305) mce_image_pane

0xa17b,	// (0x0001930e) mce_text_pane_ParamLimits

0xa17b,	// (0x0001930e) mce_text_pane

0x15fa,	// (0x0001078d) scroll_pane_cp03

0xa074,	// (0x00019207) scroll_pane_cp04

0xa18e,	// (0x00019321) scroll_pane_cp05_ParamLimits

0xa18e,	// (0x00019321) scroll_pane_cp05

0x1604,	// (0x00010797) mce_header_field_pane_ParamLimits

0x1604,	// (0x00010797) mce_header_field_pane

0x161b,	// (0x000107ae) mce_header_field_pane_2_ParamLimits

0x161b,	// (0x000107ae) mce_header_field_pane_2

0x1631,	// (0x000107c4) mce_header_field_pane_3

0x1639,	// (0x000107cc) list_single_mce_message_pane_ParamLimits

0x1639,	// (0x000107cc) list_single_mce_message_pane

0x164e,	// (0x000107e1) list_single_mce_smart_pane_ParamLimits

0x164e,	// (0x000107e1) list_single_mce_smart_pane

0xa19a,	// (0x0001932d) input_focus_pane_cp03

0xa1a3,	// (0x00019336) list_header_data_pane

0x166e,	// (0x00010801) mce_header_field_pane_t1

0x167e,	// (0x00010811) list_single_mce_header_pane_ParamLimits

0x167e,	// (0x00010811) list_single_mce_header_pane

0xa1ab,	// (0x0001933e) list_single_mce_header_pane_t1

0xa1ba,	// (0x0001934d) list_single_mce_message_pane_g1

0xa1c2,	// (0x00019355) list_single_mce_message_pane_t1

0x16b8,	// (0x0001084b) bg_cale_heading_pane_cp01_ParamLimits

0x16b8,	// (0x0001084b) bg_cale_heading_pane_cp01

0xa1d0,	// (0x00019363) bg_cale_pane_cp02_ParamLimits

0xa1d0,	// (0x00019363) bg_cale_pane_cp02

0x16f2,	// (0x00010885) cale_month_corner_pane

0x1711,	// (0x000108a4) cale_month_day_heading_pane_ParamLimits

0x1711,	// (0x000108a4) cale_month_day_heading_pane

0x1763,	// (0x000108f6) cale_month_pane_g1_ParamLimits

0x1763,	// (0x000108f6) cale_month_pane_g1

0x1792,	// (0x00010925) cale_month_pane_g2_ParamLimits

0x1792,	// (0x00010925) cale_month_pane_g2

0x17c2,	// (0x00010955) cale_month_pane_g3_ParamLimits

0x17c2,	// (0x00010955) cale_month_pane_g3

0x17fe,	// (0x00010991) cale_month_pane_g4_ParamLimits

0x17fe,	// (0x00010991) cale_month_pane_g4

0x183a,	// (0x000109cd) cale_month_pane_g5_ParamLimits

0x183a,	// (0x000109cd) cale_month_pane_g5

0x1882,	// (0x00010a15) cale_month_pane_g6_ParamLimits

0x1882,	// (0x00010a15) cale_month_pane_g6

0x18ce,	// (0x00010a61) cale_month_pane_g7_ParamLimits

0x18ce,	// (0x00010a61) cale_month_pane_g7

0x1922,	// (0x00010ab5) cale_month_pane_g8_ParamLimits

0x1922,	// (0x00010ab5) cale_month_pane_g8

0x1976,	// (0x00010b09) cale_month_pane_g9_ParamLimits

0x1976,	// (0x00010b09) cale_month_pane_g9

0x19c8,	// (0x00010b5b) cale_month_pane_g10_ParamLimits

0x19c8,	// (0x00010b5b) cale_month_pane_g10

0x1a1a,	// (0x00010bad) cale_month_pane_g11_ParamLimits

0x1a1a,	// (0x00010bad) cale_month_pane_g11

0x1a6c,	// (0x00010bff) cale_month_pane_g12_ParamLimits

0x1a6c,	// (0x00010bff) cale_month_pane_g12

0x1abe,	// (0x00010c51) cale_month_pane_g13_ParamLimits

0x1abe,	// (0x00010c51) cale_month_pane_g13

0x000c,

0xf270,	// (0x0001e403) cale_month_pane_g_ParamLimits

0xf270,	// (0x0001e403) cale_month_pane_g

0x1b10,	// (0x00010ca3) cale_month_week_pane

0x1b34,	// (0x00010cc7) grid_cale_month_pane_ParamLimits

0x1b34,	// (0x00010cc7) grid_cale_month_pane

0x1b7d,	// (0x00010d10) cale_month_day_heading_pane_t1

0x1c03,	// (0x00010d96) cale_month_day_heading_pane_t2

0x1c7c,	// (0x00010e0f) cale_month_day_heading_pane_t3

0x1cf5,	// (0x00010e88) cale_month_day_heading_pane_t4

0x1d76,	// (0x00010f09) cale_month_day_heading_pane_t5

0x1dff,	// (0x00010f92) cale_month_day_heading_pane_t6

0x1e88,	// (0x0001101b) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0001e41e) cale_month_day_heading_pane_t

0x9e66,	// (0x00018ff9) bg_cale_side_pane_cp01

0x1f19,	// (0x000110ac) cale_month_week_pane_t1

0x1f32,	// (0x000110c5) cale_month_week_pane_t2

0x1f4b,	// (0x000110de) cale_month_week_pane_t3

0x1f64,	// (0x000110f7) cale_month_week_pane_t4

0x1f7d,	// (0x00011110) cale_month_week_pane_t5

0x1f96,	// (0x00011129) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0001e42d) cale_month_week_pane_t

0x1faf,	// (0x00011142) cell_cale_month_pane_ParamLimits

0x1faf,	// (0x00011142) cell_cale_month_pane

0xa20f,	// (0x000193a2) cell_cale_month_pane_g1

0x2107,	// (0x0001129a) cell_cale_month_pane_t1_ParamLimits

0x2107,	// (0x0001129a) cell_cale_month_pane_t1

0x9e74,	// (0x00019007) grid_highlight_pane_cp08

0x9d00,	// (0x00018e93) main_smil_g1

0x2133,	// (0x000112c6) smil_status_pane

0xa21b,	// (0x000193ae) smil_text_pane

0xbcde,	// (0x0001ae71) bg_popup_call3_rect_pane_g8

0xbce6,	// (0x0001ae79) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0001e6e6) bg_popup_call3_rect_pane_g

0xbf81,	// (0x0001b114) smil_status_volume_pane_g1

0xa225,	// (0x000193b8) smil_status_pane_t1

0xbfb4,	// (0x0001b147) volume_smil_pane

0xa23c,	// (0x000193cf) list_smil_text_pane

0x2146,	// (0x000112d9) scroll_pane_cp011

0x2151,	// (0x000112e4) smil_text_list_pane_t1_ParamLimits

0x2151,	// (0x000112e4) smil_text_list_pane_t1

0xa246,	// (0x000193d9) aid_volume_smil_ParamLimits

0xa246,	// (0x000193d9) aid_volume_smil

0x9d00,	// (0x00018e93) smil_volume_pane_g1

0x9d00,	// (0x00018e93) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0001e44d) smil_volume_pane_g

0x07d5,	// (0x0000f968) listscroll_cale_day_pane

0xa268,	// (0x000193fb) bg_cale_pane

0xa280,	// (0x00019413) list_cale_pane

0xa2a3,	// (0x00019436) scroll_pane_cp09

0xa2b4,	// (0x00019447) cale_bg_pane_g1

0xa2bc,	// (0x0001944f) cale_bg_pane_g2

0xa2c4,	// (0x00019457) cale_bg_pane_g3

0xa2cc,	// (0x0001945f) cale_bg_pane_g4

0xa2d4,	// (0x00019467) cale_bg_pane_g5

0xa2dc,	// (0x0001946f) cale_bg_pane_g6

0xa2e4,	// (0x00019477) cale_bg_pane_g7

0xa2ec,	// (0x0001947f) cale_bg_pane_g8

0xa2f4,	// (0x00019487) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0001e452) cale_bg_pane_g

0x2195,	// (0x00011328) list_cale_time_pane_ParamLimits

0x2195,	// (0x00011328) list_cale_time_pane

0xa2fc,	// (0x0001948f) list_cale_time_pane_g1_ParamLimits

0xa2fc,	// (0x0001948f) list_cale_time_pane_g1

0xa308,	// (0x0001949b) list_cale_time_pane_g2_ParamLimits

0xa308,	// (0x0001949b) list_cale_time_pane_g2

0x21aa,	// (0x0001133d) list_cale_time_pane_g3_ParamLimits

0x21aa,	// (0x0001133d) list_cale_time_pane_g3

0x21b8,	// (0x0001134b) list_cale_time_pane_g4_ParamLimits

0x21b8,	// (0x0001134b) list_cale_time_pane_g4

0x21c6,	// (0x00011359) list_cale_time_pane_g5_ParamLimits

0x21c6,	// (0x00011359) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0001e465) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0001e465) list_cale_time_pane_g

0xa322,	// (0x000194b5) list_cale_time_pane_t1_ParamLimits

0xa322,	// (0x000194b5) list_cale_time_pane_t1

0xa34a,	// (0x000194dd) list_cale_time_pane_t2_ParamLimits

0xa34a,	// (0x000194dd) list_cale_time_pane_t2

0x2527,	// (0x000116ba) aid_blid_cardinal_pane

0x2565,	// (0x000116f8) compass_pane_t4

0xa372,	// (0x00019505) list_cale_time_pane_t4_ParamLimits

0xa372,	// (0x00019505) list_cale_time_pane_t4

0x2573,	// (0x00011706) compass_pane_t5

0x2581,	// (0x00011714) compass_pane_t6

0x258f,	// (0x00011722) compass_pane_t7

0xa894,	// (0x00019a27) navi_pane_cc_t1

0xaa83,	// (0x00019c16) aid_phob_thumbnail_center_pane

0x2b77,	// (0x00011d0a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0001e472) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0001e472) list_cale_time_pane_t

0x959c,	// (0x0001872f) bg_popup_window_pane_cp02_ParamLimits

0x959c,	// (0x0001872f) bg_popup_window_pane_cp02

0xa39a,	// (0x0001952d) heading_pane_cp01_ParamLimits

0xa39a,	// (0x0001952d) heading_pane_cp01

0xa3a6,	// (0x00019539) loc_req_pane_ParamLimits

0xa3a6,	// (0x00019539) loc_req_pane

0xa3b6,	// (0x00019549) loc_type_pane_ParamLimits

0xa3b6,	// (0x00019549) loc_type_pane

0xa3c8,	// (0x0001955b) loc_type_pane_t1_ParamLimits

0xa3c8,	// (0x0001955b) loc_type_pane_t1

0xa3da,	// (0x0001956d) loc_type_pane_t2_ParamLimits

0xa3da,	// (0x0001956d) loc_type_pane_t2

0xa3ec,	// (0x0001957f) loc_type_pane_t3_ParamLimits

0xa3ec,	// (0x0001957f) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0001e479) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0001e479) loc_type_pane_t

0xa3fe,	// (0x00019591) list_loc_req_pane

0xa408,	// (0x0001959b) scroll_pane_cp012

0x21d4,	// (0x00011367) list_single_loc_request_popup_menu_pane_ParamLimits

0x21d4,	// (0x00011367) list_single_loc_request_popup_menu_pane

0xa413,	// (0x000195a6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa413,	// (0x000195a6) list_single_loc_request_popup_menu_pane_g1

0xa41f,	// (0x000195b2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa41f,	// (0x000195b2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0001e480) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0001e480) list_single_loc_request_popup_menu_pane_g

0xa42b,	// (0x000195be) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa42b,	// (0x000195be) list_single_loc_request_popup_menu_pane_t1

0x9ba0,	// (0x00018d33) bg_popup_window_pane_cp03_ParamLimits

0x9ba0,	// (0x00018d33) bg_popup_window_pane_cp03

0xa441,	// (0x000195d4) heading_loc_req_pane_ParamLimits

0xa441,	// (0x000195d4) heading_loc_req_pane

0x21e1,	// (0x00011374) popup_dyc_status_message_window_g1_ParamLimits

0x21e1,	// (0x00011374) popup_dyc_status_message_window_g1

0x21f5,	// (0x00011388) popup_dyc_status_message_window_t1_ParamLimits

0x21f5,	// (0x00011388) popup_dyc_status_message_window_t1

0x220a,	// (0x0001139d) popup_dyc_status_message_window_t2_ParamLimits

0x220a,	// (0x0001139d) popup_dyc_status_message_window_t2

0x221f,	// (0x000113b2) popup_dyc_status_message_window_t3_ParamLimits

0x221f,	// (0x000113b2) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0001e485) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0001e485) popup_dyc_status_message_window_t

0x9945,	// (0x00018ad8) bg_heading_pane_cp01

0xa44d,	// (0x000195e0) heading_loc_req_pane_g1

0xa455,	// (0x000195e8) heading_loc_req_pane_g2

0xa45d,	// (0x000195f0) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0001e48c) heading_loc_req_pane_g

0xa465,	// (0x000195f8) heading_loc_req_pane_t1

0xa474,	// (0x00019607) bg_popup_sub_pane_cp01_ParamLimits

0xa474,	// (0x00019607) bg_popup_sub_pane_cp01

0xa482,	// (0x00019615) popup_cale_events_window_g1_ParamLimits

0xa482,	// (0x00019615) popup_cale_events_window_g1

0xa4a2,	// (0x00019635) popup_cale_events_window_g2_ParamLimits

0xa4a2,	// (0x00019635) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0001e4c0) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0001e4c0) popup_cale_events_window_g

0xa4c2,	// (0x00019655) popup_cale_events_window_t1_ParamLimits

0xa4c2,	// (0x00019655) popup_cale_events_window_t1

0xa4d4,	// (0x00019667) popup_cale_events_window_t2_ParamLimits

0xa4d4,	// (0x00019667) popup_cale_events_window_t2

0xa512,	// (0x000196a5) popup_cale_events_window_t3_ParamLimits

0xa512,	// (0x000196a5) popup_cale_events_window_t3

0xa54c,	// (0x000196df) popup_cale_events_window_t4_ParamLimits

0xa54c,	// (0x000196df) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0001e4c5) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0001e4c5) popup_cale_events_window_t

0x2322,	// (0x000114b5) call_type_pane

0x2332,	// (0x000114c5) popup_call_status_window_g1

0x2346,	// (0x000114d9) popup_call_status_window_g2

0x235a,	// (0x000114ed) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0001e4ce) popup_call_status_window_g

0xa582,	// (0x00019715) call_type_pane_g1

0xa58b,	// (0x0001971e) call_type_pane_g2

0x0001,

0xf342,	// (0x0001e4d5) call_type_pane_g

0x9945,	// (0x00018ad8) bg_popup_sub_pane_cp02

0xa594,	// (0x00019727) listscroll_popup_wml_pane

0xa59c,	// (0x0001972f) list_wml_pane

0xa5a6,	// (0x00019739) scroll_pane_cp013

0xa5b1,	// (0x00019744) list_single_graphic_popup_wml_pane_ParamLimits

0xa5b1,	// (0x00019744) list_single_graphic_popup_wml_pane

0x9d00,	// (0x00018e93) list_single_graphic_popup_wml_pane_g1

0xa5c5,	// (0x00019758) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0001e4da) list_single_graphic_popup_wml_pane_g

0xa5cd,	// (0x00019760) list_single_graphic_popup_wml_pane_t1

0xa5e3,	// (0x00019776) aid_call_pane

0x9b98,	// (0x00018d2b) popup_clock_analogue_window_g1

0x9b98,	// (0x00018d2b) popup_clock_analogue_window_g2

0xa5eb,	// (0x0001977e) popup_clock_analogue_window_g3

0xa5eb,	// (0x0001977e) popup_clock_analogue_window_g4

0x9d00,	// (0x00018e93) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0001e4df) popup_clock_analogue_window_g

0xa5f3,	// (0x00019786) popup_clock_analogue_window_t1

0xa601,	// (0x00019794) clock_digital_number_pane_ParamLimits

0xa601,	// (0x00019794) clock_digital_number_pane

0xa60d,	// (0x000197a0) clock_digital_number_pane_cp02_ParamLimits

0xa60d,	// (0x000197a0) clock_digital_number_pane_cp02

0xa619,	// (0x000197ac) clock_digital_number_pane_cp03_ParamLimits

0xa619,	// (0x000197ac) clock_digital_number_pane_cp03

0xa625,	// (0x000197b8) clock_digital_number_pane_cp04_ParamLimits

0xa625,	// (0x000197b8) clock_digital_number_pane_cp04

0xa635,	// (0x000197c8) clock_digital_separator_pane_ParamLimits

0xa635,	// (0x000197c8) clock_digital_separator_pane

0xa641,	// (0x000197d4) popup_clock_digital_window_t1

0x9d00,	// (0x00018e93) clock_digital_number_pane_g1

0x9d00,	// (0x00018e93) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0001e44d) clock_digital_number_pane_g

0x9d00,	// (0x00018e93) clock_digital_separator_pane_g1

0x9d00,	// (0x00018e93) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0001e44d) clock_digital_separator_pane_g

0x9945,	// (0x00018ad8) bg_popup_window_pane_cp04

0xa65e,	// (0x000197f1) heading_pane_cp03

0xa666,	// (0x000197f9) listscroll_popup_gms_pane

0xa66e,	// (0x00019801) grid_large_graphic_popup_pane

0xa678,	// (0x0001980b) listscroll_popup_gms_pane_g1

0xa680,	// (0x00019813) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0001e4ea) listscroll_popup_gms_pane_g

0xa074,	// (0x00019207) scroll_pane_cp014

0x2369,	// (0x000114fc) cell_large_graphic_popup_pane_ParamLimits

0x2369,	// (0x000114fc) cell_large_graphic_popup_pane

0x2381,	// (0x00011514) cell_large_graphic_popup_pane_g1_ParamLimits

0x2381,	// (0x00011514) cell_large_graphic_popup_pane_g1

0xa688,	// (0x0001981b) cell_large_graphic_popup_pane_g2_ParamLimits

0xa688,	// (0x0001981b) cell_large_graphic_popup_pane_g2

0xa694,	// (0x00019827) cell_large_graphic_popup_pane_g3_ParamLimits

0xa694,	// (0x00019827) cell_large_graphic_popup_pane_g3

0xa6a1,	// (0x00019834) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6a1,	// (0x00019834) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0001e4ef) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0001e4ef) cell_large_graphic_popup_pane_g

0xa6b1,	// (0x00019844) grid_highlight_pane_cp010

0x9d00,	// (0x00018e93) bg_popup_call_pane_g1

0xa6bb,	// (0x0001984e) list_single_graphic_popup_conf_pane_ParamLimits

0xa6bb,	// (0x0001984e) list_single_graphic_popup_conf_pane

0xa6ce,	// (0x00019861) list_highlight_pane_cp01

0xa6d7,	// (0x0001986a) list_single_graphic_popup_conf_pane_g1

0xa6df,	// (0x00019872) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0001e4f8) list_single_graphic_popup_conf_pane_g

0xa6e7,	// (0x0001987a) list_single_graphic_popup_conf_pane_t1

0xa6f5,	// (0x00019888) linegrid_cams_pane_g1

0x238d,	// (0x00011520) linegrid_cams_pane_g2

0x9ea7,	// (0x0001903a) linegrid_cams_pane_g3

0xa6fe,	// (0x00019891) linegrid_cams_pane_g4

0x2396,	// (0x00011529) linegrid_cams_pane_g5

0x239f,	// (0x00011532) linegrid_cams_pane_g6

0x9eb0,	// (0x00019043) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0001e4fd) linegrid_cams_pane_g

0xa707,	// (0x0001989a) popup_clock_analogue_window

0xa707,	// (0x0001989a) popup_clock_digital_window

0x9945,	// (0x00018ad8) popup_phob_thumbnail_window

0x9d00,	// (0x00018e93) call_video_uplink_pane_g1

0xa710,	// (0x000198a3) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0001e50c) call_video_uplink_pane_g

0xa718,	// (0x000198ab) video_uplink_pane

0xa720,	// (0x000198b3) mce_image_pane_g1

0x23aa,	// (0x0001153d) mce_image_pane_g2

0x23b4,	// (0x00011547) mce_image_pane_g3

0x23bc,	// (0x0001154f) mce_image_pane_g4

0x23c4,	// (0x00011557) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0001e511) mce_image_pane_g

0xa72a,	// (0x000198bd) control_top_pane_stacon_cp01_ParamLimits

0xa72a,	// (0x000198bd) control_top_pane_stacon_cp01

0xa73e,	// (0x000198d1) uni_indicator_pane_stacon_cp01_ParamLimits

0xa73e,	// (0x000198d1) uni_indicator_pane_stacon_cp01

0xa74f,	// (0x000198e2) bg_popup_sub_pane_cp03

0xa759,	// (0x000198ec) chi_dic_find_pane

0x23cc,	// (0x0001155f) listscroll_chi_dic_pane

0xa761,	// (0x000198f4) main_pane_chidic_g1

0xa769,	// (0x000198fc) chi_dic_find_pane_t1

0xa777,	// (0x0001990a) find_chidic_pane

0xa780,	// (0x00019913) chi_dic_list_pane_ParamLimits

0xa780,	// (0x00019913) chi_dic_list_pane

0xa791,	// (0x00019924) scroll_pane_cp020

0xa799,	// (0x0001992c) find_chidic_pane_t1

0x9945,	// (0x00018ad8) input_focus_pane_cp06

0x23e0,	// (0x00011573) list_chi_dic_pane_ParamLimits

0x23e0,	// (0x00011573) list_chi_dic_pane

0x23f2,	// (0x00011585) list_chi_dic_pane_t1_ParamLimits

0x23f2,	// (0x00011585) list_chi_dic_pane_t1

0x9945,	// (0x00018ad8) list_highlight_pane_cp020

0xa7a8,	// (0x0001993b) bg_cale_heading_pane_g1

0x2405,	// (0x00011598) bg_cale_heading_pane_g2

0x240d,	// (0x000115a0) bg_cale_heading_pane_g3

0x2415,	// (0x000115a8) bg_cale_heading_pane_g4

0x241f,	// (0x000115b2) bg_cale_heading_pane_g5

0x2429,	// (0x000115bc) bg_cale_heading_pane_g6

0x2431,	// (0x000115c4) bg_cale_heading_pane_g7

0x2439,	// (0x000115cc) bg_cale_heading_pane_g8

0x2443,	// (0x000115d6) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0001e51c) bg_cale_heading_pane_g

0xa7a8,	// (0x0001993b) bg_cale_side_pane_g1

0x244d,	// (0x000115e0) bg_cale_side_pane_g2

0x2455,	// (0x000115e8) bg_cale_side_pane_g3

0x245d,	// (0x000115f0) bg_cale_side_pane_g4

0x2465,	// (0x000115f8) bg_cale_side_pane_g5

0x246d,	// (0x00011600) bg_cale_side_pane_g6

0x2475,	// (0x00011608) bg_cale_side_pane_g7

0x247d,	// (0x00011610) bg_cale_side_pane_g8

0x2485,	// (0x00011618) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0001e52f) bg_cale_side_pane_g

0x248d,	// (0x00011620) popup_call_status_window_ParamLimits

0x248d,	// (0x00011620) popup_call_status_window

0xa7b0,	// (0x00019943) stacon_top_pane

0xa7b8,	// (0x0001994b) status_pane_ParamLimits

0xa7b8,	// (0x0001994b) status_pane

0xa7cd,	// (0x00019960) status_small_pane

0xa7d5,	// (0x00019968) control_pane

0x9945,	// (0x00018ad8) stacon_bottom_pane

0xa7dd,	// (0x00019970) list_single_mce_smart_pane_t1_ParamLimits

0xa7dd,	// (0x00019970) list_single_mce_smart_pane_t1

0xa7f0,	// (0x00019983) list_single_mce_smart_pane_t2_ParamLimits

0xa7f0,	// (0x00019983) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0001e542) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0001e542) list_single_mce_smart_pane_t

0x24d6,	// (0x00011669) compass_pane

0x24df,	// (0x00011672) main_location2_pane_t1

0x24f1,	// (0x00011684) main_location2_pane_t2

0x2503,	// (0x00011696) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0001e547) main_location2_pane_t

0xa80f,	// (0x000199a2) compass_pane_g1_ParamLimits

0xa80f,	// (0x000199a2) compass_pane_g1

0x2547,	// (0x000116da) compass_pane_t1

0x2556,	// (0x000116e9) compass_pane_t2

0x0005,

0xf3bd,	// (0x0001e550) compass_pane_t

0x259d,	// (0x00011730) text_secondary_cp61

0xa88b,	// (0x00019a1e) navi_pane_cams_g5

0xa907,	// (0x00019a9a) navi_pane_im_t1

0xa915,	// (0x00019aa8) navi_pane_mp_g1_ParamLimits

0xa915,	// (0x00019aa8) navi_pane_mp_g1

0xa929,	// (0x00019abc) navi_pane_mp_g2_ParamLimits

0xa929,	// (0x00019abc) navi_pane_mp_g2

0xa935,	// (0x00019ac8) navi_pane_mp_g3_ParamLimits

0xa935,	// (0x00019ac8) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0001e564) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0001e564) navi_pane_mp_g

0xa941,	// (0x00019ad4) navi_pane_mp_t1

0xa94f,	// (0x00019ae2) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0001e56b) navi_pane_mp_t

0xa9ba,	// (0x00019b4d) navi_pane_vt_g1

0xa941,	// (0x00019ad4) navi_pane_vt_t1

0xa9c2,	// (0x00019b55) navi_slider_pane

0x9ec1,	// (0x00019054) zooming_pane

0xa9d2,	// (0x00019b65) navi_slider_pane_g1

0xa9db,	// (0x00019b6e) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0001e572) navi_slider_pane_g

0xaa08,	// (0x00019b9b) aid_levels_zoom

0xaa10,	// (0x00019ba3) zooming_pane_g1

0xaa18,	// (0x00019bab) zooming_pane_g2

0xaa18,	// (0x00019bab) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0001e581) zooming_pane_g

0xaa20,	// (0x00019bb3) level_10_zoom

0xaa29,	// (0x00019bbc) level_11_zoom

0xaa32,	// (0x00019bc5) level_1_zoom

0xaa3b,	// (0x00019bce) level_2_zoom

0xaa44,	// (0x00019bd7) level_3_zoom

0xaa4d,	// (0x00019be0) level_4_zoom

0xaa56,	// (0x00019be9) level_5_zoom

0xaa5f,	// (0x00019bf2) level_6_zoom

0xaa68,	// (0x00019bfb) level_7_zoom

0xaa71,	// (0x00019c04) level_8_zoom

0xaa7a,	// (0x00019c0d) level_9_zoom

0xaa8b,	// (0x00019c1e) popup_phob_thumbnail_window_g1

0xaa93,	// (0x00019c26) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0001e588) popup_phob_thumbnail_window_g

0xbe40,	// (0x0001afd3) level_1_location

0xbe48,	// (0x0001afdb) level_2_location

0xbe50,	// (0x0001afe3) level_3_location

0xbe58,	// (0x0001afeb) level_4_location

0x9ec1,	// (0x00019054) level_5_location

0x25ee,	// (0x00011781) mce_icon_pane_g1

0x25f8,	// (0x0001178b) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0001e58d) mce_icon_pane_g

0x2600,	// (0x00011793) main_mup_pane_g1_ParamLimits

0x2600,	// (0x00011793) main_mup_pane_g1

0x2616,	// (0x000117a9) main_mup_pane_g2_ParamLimits

0x2616,	// (0x000117a9) main_mup_pane_g2

0x262e,	// (0x000117c1) main_mup_pane_g3_ParamLimits

0x262e,	// (0x000117c1) main_mup_pane_g3

0x2646,	// (0x000117d9) main_mup_pane_g4_ParamLimits

0x2646,	// (0x000117d9) main_mup_pane_g4

0x265e,	// (0x000117f1) main_mup_pane_g5_ParamLimits

0x265e,	// (0x000117f1) main_mup_pane_g5

0x267a,	// (0x0001180d) main_mup_pane_g6_ParamLimits

0x267a,	// (0x0001180d) main_mup_pane_g6

0x2692,	// (0x00011825) main_mup_pane_g7_ParamLimits

0x2692,	// (0x00011825) main_mup_pane_g7

0x26aa,	// (0x0001183d) main_mup_pane_g8_ParamLimits

0x26aa,	// (0x0001183d) main_mup_pane_g8

0x26c4,	// (0x00011857) main_mup_pane_g9_ParamLimits

0x26c4,	// (0x00011857) main_mup_pane_g9

0x26de,	// (0x00011871) main_mup_pane_g10_ParamLimits

0x26de,	// (0x00011871) main_mup_pane_g10

0x26f8,	// (0x0001188b) main_mup_pane_g11_ParamLimits

0x26f8,	// (0x0001188b) main_mup_pane_g11

0x270c,	// (0x0001189f) main_mup_pane_g12_ParamLimits

0x270c,	// (0x0001189f) main_mup_pane_g12

0x2722,	// (0x000118b5) main_mup_pane_g13_ParamLimits

0x2722,	// (0x000118b5) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0001e592) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0001e592) main_mup_pane_g

0x2736,	// (0x000118c9) main_mup_pane_t1_ParamLimits

0x2736,	// (0x000118c9) main_mup_pane_t1

0x2750,	// (0x000118e3) main_mup_pane_t2_ParamLimits

0x2750,	// (0x000118e3) main_mup_pane_t2

0x2768,	// (0x000118fb) main_mup_pane_t3_ParamLimits

0x2768,	// (0x000118fb) main_mup_pane_t3

0x2780,	// (0x00011913) main_mup_pane_t4_ParamLimits

0x2780,	// (0x00011913) main_mup_pane_t4

0x279e,	// (0x00011931) main_mup_pane_t5_ParamLimits

0x279e,	// (0x00011931) main_mup_pane_t5

0x27b3,	// (0x00011946) main_mup_pane_t6_ParamLimits

0x27b3,	// (0x00011946) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0001e5ad) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0001e5ad) main_mup_pane_t

0x27c5,	// (0x00011958) mup_progress_pane_ParamLimits

0x27c5,	// (0x00011958) mup_progress_pane

0x27d1,	// (0x00011964) mup_visualizer_pane_ParamLimits

0x27d1,	// (0x00011964) mup_visualizer_pane

0x2801,	// (0x00011994) mup_volume_pane_ParamLimits

0x2801,	// (0x00011994) mup_volume_pane

0xaa9b,	// (0x00019c2e) mup_visualizer_pane_g1_ParamLimits

0xaa9b,	// (0x00019c2e) mup_visualizer_pane_g1

0xaa9b,	// (0x00019c2e) mup_visualizer_pane_g2_ParamLimits

0xaa9b,	// (0x00019c2e) mup_visualizer_pane_g2

0xa80f,	// (0x000199a2) mup_visualizer_pane_g3_ParamLimits

0xa80f,	// (0x000199a2) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0001e5ba) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0001e5ba) mup_visualizer_pane_g

0x9d00,	// (0x00018e93) mup_volume_pane_g1

0xaab1,	// (0x00019c44) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0001e5c1) mup_volume_pane_g

0x9d00,	// (0x00018e93) mup_progress_pane_g1

0xaaba,	// (0x00019c4d) mup_progress_pane_g2

0xaac3,	// (0x00019c56) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0001e5c6) mup_progress_pane_g

0x9945,	// (0x00018ad8) bg_popup_window_pane_cp05

0xaacc,	// (0x00019c5f) heading_pane_cp02_ParamLimits

0xaacc,	// (0x00019c5f) heading_pane_cp02

0xaae6,	// (0x00019c79) list_popup_blid_pane

0xaaee,	// (0x00019c81) list_blid_sat_info_pane_ParamLimits

0xaaee,	// (0x00019c81) list_blid_sat_info_pane

0xab01,	// (0x00019c94) list_blid_sat_info_pane_g1

0xab09,	// (0x00019c9c) list_blid_sat_info_pane_t1

0x2917,	// (0x00011aaa) mup_equalizer_pane_ParamLimits

0x2917,	// (0x00011aaa) mup_equalizer_pane

0x2930,	// (0x00011ac3) mup_equalizer_pane_cp1_ParamLimits

0x2930,	// (0x00011ac3) mup_equalizer_pane_cp1

0x294d,	// (0x00011ae0) mup_equalizer_pane_cp2_ParamLimits

0x294d,	// (0x00011ae0) mup_equalizer_pane_cp2

0x296a,	// (0x00011afd) mup_equalizer_pane_cp3_ParamLimits

0x296a,	// (0x00011afd) mup_equalizer_pane_cp3

0x298b,	// (0x00011b1e) mup_equalizer_pane_cp4_ParamLimits

0x298b,	// (0x00011b1e) mup_equalizer_pane_cp4

0x29ac,	// (0x00011b3f) mup_equalizer_pane_cp5

0x29c0,	// (0x00011b53) mup_equalizer_pane_cp6

0x29d4,	// (0x00011b67) mup_equalizer_pane_cp7

0xbd5e,	// (0x0001aef1) bg_popup_call_poc_act_pane_g9

0xbd66,	// (0x0001aef9) bg_popup_call_poc_act_pane_g10

0xbd6e,	// (0x0001af01) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ba0,	// (0x00018d33) mup_scale_pane

0x9d00,	// (0x00018e93) mup_scale_pane_g1

0xab17,	// (0x00019caa) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0001e5e2) mup_scale_pane_g

0xab3b,	// (0x00019cce) msg_data_pane

0xab43,	// (0x00019cd6) scroll_pane_cp017

0x29fa,	// (0x00011b8d) bg_list_pane_cp04_ParamLimits

0x29fa,	// (0x00011b8d) bg_list_pane_cp04

0xab53,	// (0x00019ce6) msg_data_pane_g1

0x2a12,	// (0x00011ba5) msg_data_pane_g2

0x2a1c,	// (0x00011baf) msg_data_pane_g3

0x2a24,	// (0x00011bb7) msg_data_pane_g4

0x2a2c,	// (0x00011bbf) msg_data_pane_g5

0x2a34,	// (0x00011bc7) msg_data_pane_g6

0x2a3c,	// (0x00011bcf) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0001e5f1) msg_data_pane_g

0x2a44,	// (0x00011bd7) msg_text_pane_ParamLimits

0x2a44,	// (0x00011bd7) msg_text_pane

0x2a6f,	// (0x00011c02) qrid_highlight_pane_cp011_ParamLimits

0x2a6f,	// (0x00011c02) qrid_highlight_pane_cp011

0x9945,	// (0x00018ad8) msg_body_pane

0x9945,	// (0x00018ad8) msg_header_pane

0xab64,	// (0x00019cf7) input_focus_pane_cp07

0xab79,	// (0x00019d0c) msg_header_pane_t1_ParamLimits

0xab79,	// (0x00019d0c) msg_header_pane_t1

0xab8b,	// (0x00019d1e) msg_header_pane_t2_ParamLimits

0xab8b,	// (0x00019d1e) msg_header_pane_t2

0x0001,

0xf472,	// (0x0001e605) msg_header_pane_t_ParamLimits

0xf472,	// (0x0001e605) msg_header_pane_t

0xab9d,	// (0x00019d30) msg_body_pane_g1

0xaba5,	// (0x00019d38) msg_body_pane_t1_ParamLimits

0xaba5,	// (0x00019d38) msg_body_pane_t1

0xabd6,	// (0x00019d69) msg_body_pane_t2_ParamLimits

0xabd6,	// (0x00019d69) msg_body_pane_t2

0xabe8,	// (0x00019d7b) msg_body_pane_t3_ParamLimits

0xabe8,	// (0x00019d7b) msg_body_pane_t3

0x0002,

0xf477,	// (0x0001e60a) msg_body_pane_t_ParamLimits

0xf477,	// (0x0001e60a) msg_body_pane_t

0x2acd,	// (0x00011c60) main_viewer_pane_g1_ParamLimits

0x2acd,	// (0x00011c60) main_viewer_pane_g1

0x2adb,	// (0x00011c6e) main_viewer_pane_g2_ParamLimits

0x2adb,	// (0x00011c6e) main_viewer_pane_g2

0x2ae9,	// (0x00011c7c) main_viewer_pane_g3_ParamLimits

0x2ae9,	// (0x00011c7c) main_viewer_pane_g3

0x2af8,	// (0x00011c8b) main_viewer_pane_g4_ParamLimits

0x2af8,	// (0x00011c8b) main_viewer_pane_g4

0xac12,	// (0x00019da5) main_viewer_pane_g5_ParamLimits

0xac12,	// (0x00019da5) main_viewer_pane_g5

0xac12,	// (0x00019da5) main_viewer_pane_g7_ParamLimits

0xac12,	// (0x00019da5) main_viewer_pane_g7

0xac24,	// (0x00019db7) main_viewer_pane_g8_ParamLimits

0xac24,	// (0x00019db7) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0001e61a) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0001e61a) main_viewer_pane_g

0xac3c,	// (0x00019dcf) viewer_content_pane_ParamLimits

0xac3c,	// (0x00019dcf) viewer_content_pane

0x2b34,	// (0x00011cc7) main_postcard_pane_g1_ParamLimits

0x2b34,	// (0x00011cc7) main_postcard_pane_g1

0x2b4a,	// (0x00011cdd) main_postcard_pane_g2_ParamLimits

0x2b4a,	// (0x00011cdd) main_postcard_pane_g2

0x2b60,	// (0x00011cf3) main_postcard_pane_g3_ParamLimits

0x2b60,	// (0x00011cf3) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0001e62b) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0001e62b) main_postcard_pane_g

0x2b77,	// (0x00011d0a) main_postcard_pane_g4

0xbf94,	// (0x0001b127) smil_status_volume_pane_g2

0x2bba,	// (0x00011d4d) postcard_pane_ParamLimits

0x2bba,	// (0x00011d4d) postcard_pane

0xac4a,	// (0x00019ddd) postcard_pane_g1_ParamLimits

0xac4a,	// (0x00019ddd) postcard_pane_g1

0x2bfc,	// (0x00011d8f) postcard_pane_g2_ParamLimits

0x2bfc,	// (0x00011d8f) postcard_pane_g2

0x2c08,	// (0x00011d9b) postcard_pane_g3_ParamLimits

0x2c08,	// (0x00011d9b) postcard_pane_g3

0xac58,	// (0x00019deb) postcard_pane_g4_ParamLimits

0xac58,	// (0x00019deb) postcard_pane_g4

0x2c14,	// (0x00011da7) postcard_pane_g5_ParamLimits

0x2c14,	// (0x00011da7) postcard_pane_g5

0x2c29,	// (0x00011dbc) postcard_pane_g6_ParamLimits

0x2c29,	// (0x00011dbc) postcard_pane_g6

0xac4a,	// (0x00019ddd) postcard_pane_g7_ParamLimits

0xac4a,	// (0x00019ddd) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0001e638) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0001e638) postcard_pane_g

0x2c3d,	// (0x00011dd0) main_mp2_pane_g1_ParamLimits

0x2c3d,	// (0x00011dd0) main_mp2_pane_g1

0x2c49,	// (0x00011ddc) main_mp2_pane_g2_ParamLimits

0x2c49,	// (0x00011ddc) main_mp2_pane_g2

0x2c55,	// (0x00011de8) main_mp2_pane_g3_ParamLimits

0x2c55,	// (0x00011de8) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0001e647) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0001e647) main_mp2_pane_g

0x2c61,	// (0x00011df4) main_mp2_pane_t1_ParamLimits

0x2c61,	// (0x00011df4) main_mp2_pane_t1

0x2c76,	// (0x00011e09) main_mp2_pane_t2_ParamLimits

0x2c76,	// (0x00011e09) main_mp2_pane_t2

0x2c88,	// (0x00011e1b) main_mp2_pane_t3_ParamLimits

0x2c88,	// (0x00011e1b) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0001e64e) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0001e64e) main_mp2_pane_t

0xac66,	// (0x00019df9) pec_content_pane_ParamLimits

0xac66,	// (0x00019df9) pec_content_pane

0xa074,	// (0x00019207) scroll_pane_cp015

0xac78,	// (0x00019e0b) pec_attribute_pane_ParamLimits

0xac78,	// (0x00019e0b) pec_attribute_pane

0x2c9a,	// (0x00011e2d) pec_content_pane_g1_ParamLimits

0x2c9a,	// (0x00011e2d) pec_content_pane_g1

0xac88,	// (0x00019e1b) pec_content_pane_t1_ParamLimits

0xac88,	// (0x00019e1b) pec_content_pane_t1

0xac9a,	// (0x00019e2d) pec_content_pane_t2_ParamLimits

0xac9a,	// (0x00019e2d) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0001e655) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0001e655) pec_content_pane_t

0x2ca6,	// (0x00011e39) list_single_graphic_pane_cp01_ParamLimits

0x2ca6,	// (0x00011e39) list_single_graphic_pane_cp01

0x9ba0,	// (0x00018d33) bg_popup_sub_pane_cp04

0xacac,	// (0x00019e3f) popup_mup_playback_window_g1

0xacb8,	// (0x00019e4b) popup_mup_playback_window_t1

0xaccd,	// (0x00019e60) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0001e65a) popup_mup_playback_window_t

0xad04,	// (0x00019e97) main_image_pane_g1_ParamLimits

0xad04,	// (0x00019e97) main_image_pane_g1

0xad47,	// (0x00019eda) scroll_pane_cp018_ParamLimits

0xad47,	// (0x00019eda) scroll_pane_cp018

0xad5f,	// (0x00019ef2) scroll_pane_cp016_ParamLimits

0xad5f,	// (0x00019ef2) scroll_pane_cp016

0x2d73,	// (0x00011f06) smil2_image_pane_ParamLimits

0x2d73,	// (0x00011f06) smil2_image_pane

0x2da3,	// (0x00011f36) smil2_root_pane_ParamLimits

0x2da3,	// (0x00011f36) smil2_root_pane

0x2ddb,	// (0x00011f6e) smil2_text_pane_ParamLimits

0x2ddb,	// (0x00011f6e) smil2_text_pane

0x9945,	// (0x00018ad8) bg_list_pane_cp06

0xad9b,	// (0x00019f2e) grid_radio_pane

0x9945,	// (0x00018ad8) bg_popup_window_pane_cp06

0xada3,	// (0x00019f36) main_fmradio_pane_t1

0xa65e,	// (0x000197f1) heading_pane_cp04

0xadb1,	// (0x00019f44) main_fmradio_pane_t2

0xbd76,	// (0x0001af09) popup_cale_lunar_info_window_g1

0xadbf,	// (0x00019f52) main_fmradio_pane_t3

0xbd7e,	// (0x0001af11) popup_cale_lunar_info_window_g2

0xadcd,	// (0x00019f60) main_fmradio_pane_t4

0x0001,

0xaddb,	// (0x00019f6e) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0001e735) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0001e66f) main_fmradio_pane_t

0xade9,	// (0x00019f7c) wait_bar_pane_cp03

0xadf1,	// (0x00019f84) cell_fmradio_pane_ParamLimits

0xadf1,	// (0x00019f84) cell_fmradio_pane

0xac4a,	// (0x00019ddd) cell_fmradio_pane_g1_ParamLimits

0xac4a,	// (0x00019ddd) cell_fmradio_pane_g1

0x9945,	// (0x00018ad8) grid_highlight_pane_cp011

0xae04,	// (0x00019f97) poc_content_pane_ParamLimits

0xae04,	// (0x00019f97) poc_content_pane

0xae16,	// (0x00019fa9) scroll_pane_cp019

0x2e5b,	// (0x00011fee) popup_call_poc_act_window_ParamLimits

0x2e5b,	// (0x00011fee) popup_call_poc_act_window

0x2e7f,	// (0x00012012) popup_call_poc_inact_window_ParamLimits

0x2e7f,	// (0x00012012) popup_call_poc_inact_window

0xf579,	// (0x0001e70c) bg_popup_call_poc_act_pane_g

0xbcee,	// (0x0001ae81) bg_popup_call_poc_inact_pane_g1

0xbcf6,	// (0x0001ae89) bg_popup_call_poc_inact_pane_g2

0xae1e,	// (0x00019fb1) popup_call_poc_act_window_g2

0xbcfe,	// (0x0001ae91) bg_popup_call_poc_inact_pane_g3

0xbd06,	// (0x0001ae99) bg_popup_call_poc_inact_pane_g4

0xbd0e,	// (0x0001aea1) bg_popup_call_poc_inact_pane_g5

0xae26,	// (0x00019fb9) popup_call_poc_act_window_t1_ParamLimits

0xae26,	// (0x00019fb9) popup_call_poc_act_window_t1

0xae4e,	// (0x00019fe1) popup_call_poc_act_window_t2_ParamLimits

0xae4e,	// (0x00019fe1) popup_call_poc_act_window_t2

0xae76,	// (0x0001a009) popup_call_poc_act_window_t3_ParamLimits

0xae76,	// (0x0001a009) popup_call_poc_act_window_t3

0xae9e,	// (0x0001a031) popup_call_poc_act_window_t4_ParamLimits

0xae9e,	// (0x0001a031) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0001e67a) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0001e67a) popup_call_poc_act_window_t

0xbd16,	// (0x0001aea9) bg_popup_call_poc_inact_pane_g6

0xbd1e,	// (0x0001aeb1) bg_popup_call_poc_inact_pane_g7

0xbd26,	// (0x0001aeb9) bg_popup_call_poc_inact_pane_g8

0xaeb0,	// (0x0001a043) popup_call_poc_inact_window_g2

0xbd2e,	// (0x0001aec1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0001e6f9) bg_popup_call_poc_inact_pane_g

0xaeb8,	// (0x0001a04b) popup_call_poc_inact_window_t1_ParamLimits

0xaeb8,	// (0x0001a04b) popup_call_poc_inact_window_t1

0xaecd,	// (0x0001a060) popup_call_poc_inact_window_t2_ParamLimits

0xaecd,	// (0x0001a060) popup_call_poc_inact_window_t2

0xaee2,	// (0x0001a075) popup_call_poc_inact_window_t3_ParamLimits

0xaee2,	// (0x0001a075) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0001e683) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0001e683) popup_call_poc_inact_window_t

0xbf07,	// (0x0001b09a) context_pane_ParamLimits

0x36ae,	// (0x00012841) signal_pane_ParamLimits

0x9ec1,	// (0x00019054) main_call2_pane

0xbee0,	// (0x0001b073) popup_phob_thumbnail2_window_ParamLimits

0xbee0,	// (0x0001b073) popup_phob_thumbnail2_window

0xabfa,	// (0x00019d8d) aid_hotspot_pointer_arrow_pane

0xac02,	// (0x00019d95) aid_hotspot_pointer_hand_pane

0x31c8,	// (0x0001235b) phob_pre_status_pane_g5

0x0da2,	// (0x0000ff35) cams_zoom_pane_ParamLimits

0x0db1,	// (0x0000ff44) image_vga_pane_ParamLimits

0x0dcb,	// (0x0000ff5e) main_camera_pane_g1_ParamLimits

0x0ddd,	// (0x0000ff70) main_camera_pane_g2_ParamLimits

0x0ded,	// (0x0000ff80) main_camera_pane_g3_ParamLimits

0x0dfd,	// (0x0000ff90) main_camera_pane_g4_ParamLimits

0x0e0d,	// (0x0000ffa0) main_camera_pane_g5_ParamLimits

0x0e1d,	// (0x0000ffb0) main_camera_pane_g6_ParamLimits

0x0e2f,	// (0x0000ffc2) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0001e382) main_camera_pane_g_ParamLimits

0x0e3f,	// (0x0000ffd2) main_camera_pane_t1_ParamLimits

0x0e55,	// (0x0000ffe8) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0001e393) main_camera_pane_t_ParamLimits

0x9ba0,	// (0x00018d33) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ba0,	// (0x00018d33) bg_popup_preview_window_pane_cp01

0xaef7,	// (0x0001a08a) popup_phob_thumbnail2_window_g1_ParamLimits

0xaef7,	// (0x0001a08a) popup_phob_thumbnail2_window_g1

0x9945,	// (0x00018ad8) call2_cli_visual_pane

0x2eb3,	// (0x00012046) popup_call2_audio_conf_window_ParamLimits

0x2eb3,	// (0x00012046) popup_call2_audio_conf_window

0x2ed3,	// (0x00012066) popup_call2_audio_first_window_ParamLimits

0x2ed3,	// (0x00012066) popup_call2_audio_first_window

0x2f69,	// (0x000120fc) popup_call2_audio_in_window_ParamLimits

0x2f69,	// (0x000120fc) popup_call2_audio_in_window

0x2fb1,	// (0x00012144) popup_call2_audio_out_window_ParamLimits

0x2fb1,	// (0x00012144) popup_call2_audio_out_window

0x301b,	// (0x000121ae) popup_call2_audio_second_window_ParamLimits

0x301b,	// (0x000121ae) popup_call2_audio_second_window

0x3081,	// (0x00012214) popup_call2_audio_wait_window_ParamLimits

0x3081,	// (0x00012214) popup_call2_audio_wait_window

0x9945,	// (0x00018ad8) bg_popup_call2_act_pane_cp03

0x9b82,	// (0x00018d15) list_conf_pane_cp

0xaf03,	// (0x0001a096) popup_call2_audio_conf_window_t1

0xa6bb,	// (0x0001984e) list_single_graphic_popup_conf2_pane_ParamLimits

0xa6bb,	// (0x0001984e) list_single_graphic_popup_conf2_pane

0xa6ce,	// (0x00019861) list_highlight_pane_cp04

0xaf11,	// (0x0001a0a4) list_single_graphic_popup_conf2_pane_g1

0xa6df,	// (0x00019872) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0001e68a) list_single_graphic_popup_conf2_pane_g

0xaf1b,	// (0x0001a0ae) list_single_graphic_popup_conf2_pane_t1

0xaf29,	// (0x0001a0bc) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf29,	// (0x0001a0bc) bg_popup_call2_act_pane_cp01

0xafb3,	// (0x0001a146) call_type_pane_cp05_ParamLimits

0xafb3,	// (0x0001a146) call_type_pane_cp05

0xb007,	// (0x0001a19a) popup_call2_audio_second_window_g1_ParamLimits

0xb007,	// (0x0001a19a) popup_call2_audio_second_window_g1

0xb05b,	// (0x0001a1ee) popup_call2_audio_second_window_g2_ParamLimits

0xb05b,	// (0x0001a1ee) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0001e68f) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0001e68f) popup_call2_audio_second_window_g

0xb0c0,	// (0x0001a253) popup_call2_audio_second_window_t1_ParamLimits

0xb0c0,	// (0x0001a253) popup_call2_audio_second_window_t1

0xb17b,	// (0x0001a30e) popup_call2_audio_second_window_t2_ParamLimits

0xb17b,	// (0x0001a30e) popup_call2_audio_second_window_t2

0xb1ce,	// (0x0001a361) popup_call2_audio_second_window_t3_ParamLimits

0xb1ce,	// (0x0001a361) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0001e696) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0001e696) popup_call2_audio_second_window_t

0x9945,	// (0x00018ad8) bg_popup_call2_in_pane_cp02

0x994f,	// (0x00018ae2) call_type_pane_cp04

0x9957,	// (0x00018aea) popup_call2_audio_wait_window_g1

0x995f,	// (0x00018af2) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0001e271) popup_call2_audio_wait_window_g

0x9967,	// (0x00018afa) popup_call2_audio_wait_window_t3

0xb2c1,	// (0x0001a454) bg_popup_call2_act_pane_ParamLimits

0xb2c1,	// (0x0001a454) bg_popup_call2_act_pane

0xb381,	// (0x0001a514) call_type_pane_cp03_ParamLimits

0xb381,	// (0x0001a514) call_type_pane_cp03

0xb3e5,	// (0x0001a578) popup_call2_audio_first_window_g1_ParamLimits

0xb3e5,	// (0x0001a578) popup_call2_audio_first_window_g1

0xb455,	// (0x0001a5e8) popup_call2_audio_first_window_g2_ParamLimits

0xb455,	// (0x0001a5e8) popup_call2_audio_first_window_g2

0xaa9b,	// (0x00019c2e) popup_call2_audio_first_window_g3_ParamLimits

0xaa9b,	// (0x00019c2e) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0001e69f) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0001e69f) popup_call2_audio_first_window_g

0xb533,	// (0x0001a6c6) popup_call2_audio_first_window_t1_ParamLimits

0xb533,	// (0x0001a6c6) popup_call2_audio_first_window_t1

0xb636,	// (0x0001a7c9) popup_call2_audio_first_window_t4_ParamLimits

0xb636,	// (0x0001a7c9) popup_call2_audio_first_window_t4

0xb719,	// (0x0001a8ac) popup_call2_audio_first_window_t5_ParamLimits

0xb719,	// (0x0001a8ac) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0001e6aa) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0001e6aa) popup_call2_audio_first_window_t

0x9b98,	// (0x00018d2b) bg_popup_call2_act_pane_g1

0xbd86,	// (0x0001af19) popup_cale_lunar_info_window_t1

0xbd94,	// (0x0001af27) popup_cale_lunar_info_window_t2

0xbda2,	// (0x0001af35) popup_cale_lunar_info_window_t3

0x9945,	// (0x00018ad8) bg_popup_call2_bubble_pane

0xb81a,	// (0x0001a9ad) bg_popup_call2_in_pane_cp01_ParamLimits

0xb81a,	// (0x0001a9ad) bg_popup_call2_in_pane_cp01

0x9621,	// (0x000187b4) call_type_pane_cp02

0xb862,	// (0x0001a9f5) popup_call2_audio_out_window_g1_ParamLimits

0xb862,	// (0x0001a9f5) popup_call2_audio_out_window_g1

0xb88e,	// (0x0001aa21) popup_call2_audio_out_window_g2_ParamLimits

0xb88e,	// (0x0001aa21) popup_call2_audio_out_window_g2

0xb8b6,	// (0x0001aa49) popup_call2_audio_out_window_g3_ParamLimits

0xb8b6,	// (0x0001aa49) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0001e6b3) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0001e6b3) popup_call2_audio_out_window_g

0xb8f1,	// (0x0001aa84) popup_call2_audio_out_window_t1_ParamLimits

0xb8f1,	// (0x0001aa84) popup_call2_audio_out_window_t1

0xb950,	// (0x0001aae3) popup_call2_audio_out_window_t2_ParamLimits

0xb950,	// (0x0001aae3) popup_call2_audio_out_window_t2

0xb9a4,	// (0x0001ab37) popup_call2_audio_out_window_t3_ParamLimits

0xb9a4,	// (0x0001ab37) popup_call2_audio_out_window_t3

0xb9ba,	// (0x0001ab4d) popup_call2_audio_out_window_t4_ParamLimits

0xb9ba,	// (0x0001ab4d) popup_call2_audio_out_window_t4

0xb9d0,	// (0x0001ab63) popup_call2_audio_out_window_t5_ParamLimits

0xb9d0,	// (0x0001ab63) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0001e6bc) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0001e6bc) popup_call2_audio_out_window_t

0xba34,	// (0x0001abc7) bg_popup_call2_in_pane_ParamLimits

0xba34,	// (0x0001abc7) bg_popup_call2_in_pane

0xba90,	// (0x0001ac23) popup_call2_audio_in_window_g1_ParamLimits

0xba90,	// (0x0001ac23) popup_call2_audio_in_window_g1

0xbac8,	// (0x0001ac5b) popup_call2_audio_in_window_g2_ParamLimits

0xbac8,	// (0x0001ac5b) popup_call2_audio_in_window_g2

0xbb00,	// (0x0001ac93) popup_call2_audio_in_window_g3_ParamLimits

0xbb00,	// (0x0001ac93) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0001e6c9) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0001e6c9) popup_call2_audio_in_window_g

0xbb58,	// (0x0001aceb) popup_call2_audio_in_window_t1_ParamLimits

0xbb58,	// (0x0001aceb) popup_call2_audio_in_window_t1

0xbbd8,	// (0x0001ad6b) popup_call2_audio_in_window_t2_ParamLimits

0xbbd8,	// (0x0001ad6b) popup_call2_audio_in_window_t2

0xbc58,	// (0x0001adeb) popup_call2_audio_in_window_t3_ParamLimits

0xbc58,	// (0x0001adeb) popup_call2_audio_in_window_t3

0xbc72,	// (0x0001ae05) popup_call2_audio_in_window_t4_ParamLimits

0xbc72,	// (0x0001ae05) popup_call2_audio_in_window_t4

0xbc84,	// (0x0001ae17) popup_call2_audio_in_window_t5_ParamLimits

0xbc84,	// (0x0001ae17) popup_call2_audio_in_window_t5

0xbc99,	// (0x0001ae2c) popup_call2_audio_in_window_t6_ParamLimits

0xbc99,	// (0x0001ae2c) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0001e6d2) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0001e6d2) popup_call2_audio_in_window_t

0x9b98,	// (0x00018d2b) bg_popup_call2_in_pane_g1

0xbdb0,	// (0x0001af43) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0001e73a) popup_cale_lunar_info_window_t

0x9ba0,	// (0x00018d33) bg_popup_call2_rect_pane_ParamLimits

0x9ba0,	// (0x00018d33) bg_popup_call2_rect_pane

0x9945,	// (0x00018ad8) call2_cli_visual_graphic_pane

0x9945,	// (0x00018ad8) call2_cli_visual_text_pane

0xbfa7,	// (0x0001b13a) smil_status_volume_pane_g3

0x0002,

0x9d00,	// (0x00018e93) call2_cli_visual_graphic_pane_g1

0x9d00,	// (0x00018e93) call2_cli_visual_graphic_pane_g2

0x9d00,	// (0x00018e93) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0001e6df) call2_cli_visual_graphic_pane_g

0xbcae,	// (0x0001ae41) bg_popup_call2_rect_pane_g1

0x9d95,	// (0x00018f28) bg_popup_call2_rect_pane_g2

0xbcb6,	// (0x0001ae49) bg_popup_call2_rect_pane_g3

0xbcbe,	// (0x0001ae51) bg_popup_call2_rect_pane_g4

0xbcc6,	// (0x0001ae59) bg_popup_call2_rect_pane_g5

0xbcce,	// (0x0001ae61) bg_popup_call2_rect_pane_g6

0xbcd6,	// (0x0001ae69) bg_popup_call2_rect_pane_g7

0xbcde,	// (0x0001ae71) bg_popup_call2_rect_pane_g8

0xbce6,	// (0x0001ae79) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0001e6e6) bg_popup_call2_rect_pane_g

0xbcee,	// (0x0001ae81) bg_popup_call2_bubble_pane_g1

0xbcf6,	// (0x0001ae89) bg_popup_call2_bubble_pane_g2

0xbcfe,	// (0x0001ae91) bg_popup_call2_bubble_pane_g3

0xbd06,	// (0x0001ae99) bg_popup_call2_bubble_pane_g4

0xbd0e,	// (0x0001aea1) bg_popup_call2_bubble_pane_g5

0xbd16,	// (0x0001aea9) bg_popup_call2_bubble_pane_g6

0xbd1e,	// (0x0001aeb1) bg_popup_call2_bubble_pane_g7

0xbd26,	// (0x0001aeb9) bg_popup_call2_bubble_pane_g8

0xbd2e,	// (0x0001aec1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0001e6f9) bg_popup_call2_bubble_pane_g

0x07e7,	// (0x0000f97a) aid_cale_week_size_cell_pane

0x0e6b,	// (0x0000fffe) aid_cams_cif_uncrop_pane_ParamLimits

0x0e6b,	// (0x0000fffe) aid_cams_cif_uncrop_pane

0x101b,	// (0x000101ae) aid_cams_size_cell_ParamLimits

0x101b,	// (0x000101ae) aid_cams_size_cell

0x102f,	// (0x000101c2) grid_cams_pane_ParamLimits

0x1049,	// (0x000101dc) linegrid_cams_pane_ParamLimits

0x1246,	// (0x000103d9) call_video_pane_t1

0x1264,	// (0x000103f7) call_video_pane_t2

0x0001,

0xf253,	// (0x0001e3e6) call_video_pane_t

0x1692,	// (0x00010825) aid_cale_month_size_cell_pane_ParamLimits

0x1692,	// (0x00010825) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0001e783) smil_status_volume_pane_g

0xbfb4,	// (0x0001b147) volume_smil_pane_ParamLimits

0x94c6,	// (0x00018659) aid_popup2_width_pane

0x0741,	// (0x0000f8d4) cell_qdial_pane_g4_ParamLimits

0x0741,	// (0x0000f8d4) cell_qdial_pane_g4

0x2527,	// (0x000116ba) aid_blid_cardinal_pane_ParamLimits

0x2533,	// (0x000116c6) aid_blid_destination_pane_ParamLimits

0x2533,	// (0x000116c6) aid_blid_destination_pane

0x9ba0,	// (0x00018d33) bg_popup_call_poc_act_pane_ParamLimits

0x9ba0,	// (0x00018d33) bg_popup_call_poc_act_pane

0x9ba0,	// (0x00018d33) bg_popup_call_poc_inact_pane_ParamLimits

0x9ba0,	// (0x00018d33) bg_popup_call_poc_inact_pane

0xbd36,	// (0x0001aec9) bg_popup_call_poc_act_pane_g1

0xbd3e,	// (0x0001aed1) bg_popup_call_poc_act_pane_g2

0xbd46,	// (0x0001aed9) bg_popup_call_poc_act_pane_g3

0xbd06,	// (0x0001ae99) bg_popup_call_poc_act_pane_g4

0xbd0e,	// (0x0001aea1) bg_popup_call_poc_act_pane_g5

0xbd4e,	// (0x0001aee1) bg_popup_call_poc_act_pane_g6

0xbd1e,	// (0x0001aeb1) bg_popup_call_poc_act_pane_g7

0xbd56,	// (0x0001aee9) bg_popup_call_poc_act_pane_g8

0x9945,	// (0x00018ad8) main_usb_pane

0xbebb,	// (0x0001b04e) popup_cale_lunar_info_window

0x153e,	// (0x000106d1) im_reading_pane_t1_ParamLimits

0x9fcc,	// (0x0001915f) list_im_pane_ParamLimits

0x9fdd,	// (0x00019170) scroll_pane_cp07_ParamLimits

0x9945,	// (0x00018ad8) grid_highlight_pane_cp012

0x9ba0,	// (0x00018d33) mup_scale_pane_ParamLimits

0xac4a,	// (0x00019ddd) main_usb_pane_g1_ParamLimits

0xac4a,	// (0x00019ddd) main_usb_pane_g1

0x30dd,	// (0x00012270) main_usb_pane_g2_ParamLimits

0x30dd,	// (0x00012270) main_usb_pane_g2

0x0001,

0xf590,	// (0x0001e723) main_usb_pane_g_ParamLimits

0xf590,	// (0x0001e723) main_usb_pane_g

0x30f3,	// (0x00012286) main_usb_pane_t1_ParamLimits

0x30f3,	// (0x00012286) main_usb_pane_t1

0x3105,	// (0x00012298) main_usb_pane_t2_ParamLimits

0x3105,	// (0x00012298) main_usb_pane_t2

0x3117,	// (0x000122aa) main_usb_pane_t3_ParamLimits

0x3117,	// (0x000122aa) main_usb_pane_t3

0x3129,	// (0x000122bc) main_usb_pane_t4_ParamLimits

0x3129,	// (0x000122bc) main_usb_pane_t4

0x313b,	// (0x000122ce) main_usb_pane_t5_ParamLimits

0x313b,	// (0x000122ce) main_usb_pane_t5

0x314d,	// (0x000122e0) main_usb_pane_t6_ParamLimits

0x314d,	// (0x000122e0) main_usb_pane_t6

0x0005,

0xf595,	// (0x0001e728) main_usb_pane_t_ParamLimits

0x24d6,	// (0x00011669) aid_text_placing

0x24df,	// (0x00011672) main_location2_pane_t1_ParamLimits

0x24f1,	// (0x00011684) main_location2_pane_t2_ParamLimits

0x2503,	// (0x00011696) main_location2_pane_t3_ParamLimits

0x2515,	// (0x000116a8) main_location2_pane_t4_ParamLimits

0x2515,	// (0x000116a8) main_location2_pane_t4

0xf3b4,	// (0x0001e547) main_location2_pane_t_ParamLimits

0x9bdc,	// (0x00018d6f) find_pinb_pane_g2_ParamLimits

0x9bdc,	// (0x00018d6f) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0001e297) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0001e297) find_pinb_pane_g

0x9be8,	// (0x00018d7b) find_pinb_pane_t1_ParamLimits

0x9bfa,	// (0x00018d8d) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0001e29c) find_pinb_pane_t_ParamLimits

0x9945,	// (0x00018ad8) main_call3_pane

0x1b7d,	// (0x00010d10) cale_month_day_heading_pane_t1_ParamLimits

0x1c03,	// (0x00010d96) cale_month_day_heading_pane_t2_ParamLimits

0x1c7c,	// (0x00010e0f) cale_month_day_heading_pane_t3_ParamLimits

0x1cf5,	// (0x00010e88) cale_month_day_heading_pane_t4_ParamLimits

0x1d76,	// (0x00010f09) cale_month_day_heading_pane_t5_ParamLimits

0x1dff,	// (0x00010f92) cale_month_day_heading_pane_t6_ParamLimits

0x1e88,	// (0x0001101b) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0001e41e) cale_month_day_heading_pane_t_ParamLimits

0xa233,	// (0x000193c6) smil_status_volume_pane

0x2bd8,	// (0x00011d6b) postcard_address_pane_ParamLimits

0x2bd8,	// (0x00011d6b) postcard_address_pane

0x2bea,	// (0x00011d7d) postcard_message_pane_ParamLimits

0x2bea,	// (0x00011d7d) postcard_message_pane

0x30bb,	// (0x0001224e) call2_cli_visual_pane_t1_ParamLimits

0x30bb,	// (0x0001224e) call2_cli_visual_pane_t1

0x38db,	// (0x00012a6e) postcard_message_pane_t1_ParamLimits

0x38db,	// (0x00012a6e) postcard_message_pane_t1

0x38c4,	// (0x00012a57) postcard_address_pane_t1_ParamLimits

0x38c4,	// (0x00012a57) postcard_address_pane_t1

0x38b0,	// (0x00012a43) popup_call3_audio_in_window_ParamLimits

0x38b0,	// (0x00012a43) popup_call3_audio_in_window

0x373b,	// (0x000128ce) bg_popup_call3_in_pane_ParamLimits

0x373b,	// (0x000128ce) bg_popup_call3_in_pane

0x37b1,	// (0x00012944) popup_call3_audio_in_window_g1_ParamLimits

0x37b1,	// (0x00012944) popup_call3_audio_in_window_g1

0x37d1,	// (0x00012964) popup_call3_audio_in_window_g2_ParamLimits

0x37d1,	// (0x00012964) popup_call3_audio_in_window_g2

0x37f1,	// (0x00012984) popup_call3_audio_in_window_g3_ParamLimits

0x37f1,	// (0x00012984) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0001e78a) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0001e78a) popup_call3_audio_in_window_g

0x3822,	// (0x000129b5) popup_call3_audio_in_window_t1_ParamLimits

0x3822,	// (0x000129b5) popup_call3_audio_in_window_t1

0x3860,	// (0x000129f3) popup_call3_audio_in_window_t2_ParamLimits

0x3860,	// (0x000129f3) popup_call3_audio_in_window_t2

0x389e,	// (0x00012a31) popup_call3_audio_in_window_t3_ParamLimits

0x389e,	// (0x00012a31) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0001e793) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0001e793) popup_call3_audio_in_window_t

0x9ec1,	// (0x00019054) bg_popup_call3_rect_pane

0xbcae,	// (0x0001ae41) bg_popup_call3_rect_pane_g1

0x9d95,	// (0x00018f28) bg_popup_call3_rect_pane_g2

0xbcb6,	// (0x0001ae49) bg_popup_call3_rect_pane_g3

0xbcbe,	// (0x0001ae51) bg_popup_call3_rect_pane_g4

0xbcc6,	// (0x0001ae59) bg_popup_call3_rect_pane_g5

0xbcce,	// (0x0001ae61) bg_popup_call3_rect_pane_g6

0xbcd6,	// (0x0001ae69) bg_popup_call3_rect_pane_g7

0x2817,	// (0x000119aa) mup_visualizer_osc_pane

0xaaa9,	// (0x00019c3c) mup_visualizer_spec_pane

0x376b,	// (0x000128fe) call3_video_qcif_pane_ParamLimits

0x376b,	// (0x000128fe) call3_video_qcif_pane

0x377e,	// (0x00012911) call3_video_qcif_uncrop_pane_ParamLimits

0x377e,	// (0x00012911) call3_video_qcif_uncrop_pane

0x378c,	// (0x0001291f) call3_video_subqcif_pane_ParamLimits

0x378c,	// (0x0001291f) call3_video_subqcif_pane

0x37a0,	// (0x00012933) call3_video_subqcif_uncrop_pane_ParamLimits

0x37a0,	// (0x00012933) call3_video_subqcif_uncrop_pane

0x3811,	// (0x000129a4) popup_call3_audio_in_window_g4_ParamLimits

0x3811,	// (0x000129a4) popup_call3_audio_in_window_g4

0x372a,	// (0x000128bd) mup_spec_half_pane

0x3733,	// (0x000128c6) mup_spec_half_pane_cp

0xbf67,	// (0x0001b0fa) mup_osc_middle_pane

0xbf70,	// (0x0001b103) mup_visualizer_osc_pane_g1

0x370a,	// (0x0001289d) mup_spec_bar_pane_ParamLimits

0x370a,	// (0x0001289d) mup_spec_bar_pane

0xbf54,	// (0x0001b0e7) mup_spec_bar_pane_g1

0xbf5e,	// (0x0001b0f1) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0001e77e) mup_spec_bar_pane_g

0x07e7,	// (0x0000f97a) aid_cale_week_size_cell_pane_ParamLimits

0x0801,	// (0x0000f994) bg_cale_heading_pane_ParamLimits

0x9e1a,	// (0x00018fad) bg_cale_pane_cp01_ParamLimits

0x0819,	// (0x0000f9ac) cale_week_corner_pane_ParamLimits

0x0838,	// (0x0000f9cb) cale_week_day_heading_pane_ParamLimits

0x0855,	// (0x0000f9e8) cale_week_scroll_pane_g1_ParamLimits

0x0868,	// (0x0000f9fb) cale_week_scroll_pane_g2_ParamLimits

0x0880,	// (0x0000fa13) cale_week_scroll_pane_g3_ParamLimits

0x0898,	// (0x0000fa2b) cale_week_scroll_pane_g4_ParamLimits

0x08b0,	// (0x0000fa43) cale_week_scroll_pane_g5_ParamLimits

0x08d0,	// (0x0000fa63) cale_week_scroll_pane_g6_ParamLimits

0x08f0,	// (0x0000fa83) cale_week_scroll_pane_g7_ParamLimits

0x0910,	// (0x0000faa3) cale_week_scroll_pane_g8_ParamLimits

0x0934,	// (0x0000fac7) cale_week_scroll_pane_g9_ParamLimits

0x094c,	// (0x0000fadf) cale_week_scroll_pane_g10_ParamLimits

0x0964,	// (0x0000faf7) cale_week_scroll_pane_g11_ParamLimits

0x097c,	// (0x0000fb0f) cale_week_scroll_pane_g12_ParamLimits

0x0994,	// (0x0000fb27) cale_week_scroll_pane_g13_ParamLimits

0x0994,	// (0x0000fb27) cale_week_scroll_pane_g14_ParamLimits

0x0994,	// (0x0000fb27) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0001e328) cale_week_scroll_pane_g_ParamLimits

0x09d0,	// (0x0000fb63) cale_week_time_pane_ParamLimits

0x09f4,	// (0x0000fb87) grid_cale_week_pane_ParamLimits

0x9e37,	// (0x00018fca) listscroll_cale_week_pane_t1

0x9e49,	// (0x00018fdc) scroll_pane_cp08_ParamLimits

0x16f2,	// (0x00010885) cale_month_corner_pane_ParamLimits

0xa1fd,	// (0x00019390) cale_month_pane_t1

0x1b10,	// (0x00010ca3) cale_month_week_pane_ParamLimits

0x2332,	// (0x000114c5) popup_call_status_window_g1_ParamLimits

0x2346,	// (0x000114d9) popup_call_status_window_g2_ParamLimits

0x235a,	// (0x000114ed) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0001e4ce) popup_call_status_window_g_ParamLimits

0xa5db,	// (0x0001976e) aid_call2_pane

0x2a85,	// (0x00011c18) msg_header_pane_g1

0x2bd8,	// (0x00011d6b) postcard_address2_pane_ParamLimits

0x2bd8,	// (0x00011d6b) postcard_address2_pane

0x2bea,	// (0x00011d7d) postcard_message2_pane_ParamLimits

0x2bea,	// (0x00011d7d) postcard_message2_pane

0x36bc,	// (0x0001284f) message2_row_pane_ParamLimits

0x36bc,	// (0x0001284f) message2_row_pane

0x36d8,	// (0x0001286b) address2_row_pane_ParamLimits

0x36d8,	// (0x0001286b) address2_row_pane

0xbf22,	// (0x0001b0b5) postcard_message2_row_pane_g1

0xbf2a,	// (0x0001b0bd) postcard_message2_row_pane_t1

0xbf22,	// (0x0001b0b5) address2_row_pane_g1

0xbf2a,	// (0x0001b0bd) address2_row_pane_t1

0x0d24,	// (0x0000feb7) aid_size_cell_vorec

0x9945,	// (0x00018ad8) main_rss_pane

0x36eb,	// (0x0001287e) rss_list_single_pane_ParamLimits

0x36eb,	// (0x0001287e) rss_list_single_pane

0xbf38,	// (0x0001b0cb) rss_list_single_pane_t1

0xbf46,	// (0x0001b0d9) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0001e779) rss_list_single_pane_t

0x9945,	// (0x00018ad8) main_camera2_pane

0x9945,	// (0x00018ad8) main_video2_pane

0x3954,	// (0x00012ae7) cams_zoom_pane_cp2_ParamLimits

0x3954,	// (0x00012ae7) cams_zoom_pane_cp2

0x3974,	// (0x00012b07) image2_vga_pane_ParamLimits

0x3974,	// (0x00012b07) image2_vga_pane

0x39c5,	// (0x00012b58) main_camera2_pane_g1_ParamLimits

0x39c5,	// (0x00012b58) main_camera2_pane_g1

0x39e5,	// (0x00012b78) main_camera2_pane_g2_ParamLimits

0x39e5,	// (0x00012b78) main_camera2_pane_g2

0x3a05,	// (0x00012b98) main_camera2_pane_g3_ParamLimits

0x3a05,	// (0x00012b98) main_camera2_pane_g3

0x3a25,	// (0x00012bb8) main_camera2_pane_g4_ParamLimits

0x3a25,	// (0x00012bb8) main_camera2_pane_g4

0x3a45,	// (0x00012bd8) main_camera2_pane_g5_ParamLimits

0x3a45,	// (0x00012bd8) main_camera2_pane_g5

0x3a65,	// (0x00012bf8) main_camera2_pane_g6_ParamLimits

0x3a65,	// (0x00012bf8) main_camera2_pane_g6

0x3a85,	// (0x00012c18) main_camera2_pane_g7_ParamLimits

0x3a85,	// (0x00012c18) main_camera2_pane_g7

0x3aa5,	// (0x00012c38) main_camera2_pane_g8_ParamLimits

0x3aa5,	// (0x00012c38) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0001e79a) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0001e79a) main_camera2_pane_g

0x3ae5,	// (0x00012c78) main_camera2_pane_t1_ParamLimits

0x3ae5,	// (0x00012c78) main_camera2_pane_t1

0x3b1a,	// (0x00012cad) main_camera2_pane_t2_ParamLimits

0x3b1a,	// (0x00012cad) main_camera2_pane_t2

0x3b40,	// (0x00012cd3) main_camera2_pane_t3_ParamLimits

0x3b40,	// (0x00012cd3) main_camera2_pane_t3

0x3b9e,	// (0x00012d31) main_camera2_pane_t4_ParamLimits

0x3b9e,	// (0x00012d31) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0001e7ad) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0001e7ad) main_camera2_pane_t

0x3c30,	// (0x00012dc3) cams_zoom_pane_cp4_ParamLimits

0x3c30,	// (0x00012dc3) cams_zoom_pane_cp4

0x3c46,	// (0x00012dd9) image2_cif_pane_ParamLimits

0x3c46,	// (0x00012dd9) image2_cif_pane

0x3c71,	// (0x00012e04) image2_subqcif_pane_ParamLimits

0x3c71,	// (0x00012e04) image2_subqcif_pane

0x3c8b,	// (0x00012e1e) main_video2_pane_g1_ParamLimits

0x3c8b,	// (0x00012e1e) main_video2_pane_g1

0x3ca5,	// (0x00012e38) main_video2_pane_g2_ParamLimits

0x3ca5,	// (0x00012e38) main_video2_pane_g2

0x3cbb,	// (0x00012e4e) main_video2_pane_g3_ParamLimits

0x3cbb,	// (0x00012e4e) main_video2_pane_g3

0x3cd1,	// (0x00012e64) main_video2_pane_g4_ParamLimits

0x3cd1,	// (0x00012e64) main_video2_pane_g4

0x3ce7,	// (0x00012e7a) main_video2_pane_g5_ParamLimits

0x3ce7,	// (0x00012e7a) main_video2_pane_g5

0x3cfd,	// (0x00012e90) main_video2_pane_g6_ParamLimits

0x3cfd,	// (0x00012e90) main_video2_pane_g6

0x0005,

0xf629,	// (0x0001e7bc) main_video2_pane_g_ParamLimits

0xf629,	// (0x0001e7bc) main_video2_pane_g

0x3d17,	// (0x00012eaa) main_video2_pane_t1_ParamLimits

0x3d17,	// (0x00012eaa) main_video2_pane_t1

0x3d3b,	// (0x00012ece) main_video2_pane_t2_ParamLimits

0x3d3b,	// (0x00012ece) main_video2_pane_t2

0x3d89,	// (0x00012f1c) main_video2_pane_t3_ParamLimits

0x3d89,	// (0x00012f1c) main_video2_pane_t3

0x0002,

0xf636,	// (0x0001e7c9) main_video2_pane_t_ParamLimits

0xf636,	// (0x0001e7c9) main_video2_pane_t

0x3208,	// (0x0001239b) call_muted_g2

0x0001,

0xf5d8,	// (0x0001e76b) call_muted_g

0x9945,	// (0x00018ad8) main_mup2_pane

0x3dcd,	// (0x00012f60) main_mup2_pane_g1_ParamLimits

0x3dcd,	// (0x00012f60) main_mup2_pane_g1

0x3dd9,	// (0x00012f6c) main_mup2_pane_g2_ParamLimits

0x3dd9,	// (0x00012f6c) main_mup2_pane_g2

0xc0d8,	// (0x0001b26b) main_mup_pane_g13_cp1

0xc0e0,	// (0x0001b273) mup_volume_pane_cp1

0x3df5,	// (0x00012f88) main_mup2_pane_g4_ParamLimits

0x3df5,	// (0x00012f88) main_mup2_pane_g4

0x3e07,	// (0x00012f9a) main_mup2_pane_g5_ParamLimits

0x3e07,	// (0x00012f9a) main_mup2_pane_g5

0x3e19,	// (0x00012fac) main_mup2_pane_g6_ParamLimits

0x3e19,	// (0x00012fac) main_mup2_pane_g6

0x3e2b,	// (0x00012fbe) main_mup2_pane_g7_ParamLimits

0x3e2b,	// (0x00012fbe) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0001e7d0) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0001e7d0) main_mup2_pane_g

0x3e43,	// (0x00012fd6) main_mup2_pane_t1_ParamLimits

0x3e43,	// (0x00012fd6) main_mup2_pane_t1

0x3e59,	// (0x00012fec) main_mup2_pane_t2_ParamLimits

0x3e59,	// (0x00012fec) main_mup2_pane_t2

0x3e6f,	// (0x00013002) main_mup2_pane_t3_ParamLimits

0x3e6f,	// (0x00013002) main_mup2_pane_t3

0x3e85,	// (0x00013018) main_mup2_pane_t4_ParamLimits

0x3e85,	// (0x00013018) main_mup2_pane_t4

0x3e9d,	// (0x00013030) main_mup2_pane_t5_ParamLimits

0x3e9d,	// (0x00013030) main_mup2_pane_t5

0x3eb5,	// (0x00013048) main_mup2_pane_t6_ParamLimits

0x3eb5,	// (0x00013048) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0001e7df) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0001e7df) main_mup2_pane_t

0x3ee5,	// (0x00013078) mup2_visualizer_pane_ParamLimits

0x3ee5,	// (0x00013078) mup2_visualizer_pane

0x3f13,	// (0x000130a6) mup_progress_pane_cp_ParamLimits

0x3f13,	// (0x000130a6) mup_progress_pane_cp

0xc0ba,	// (0x0001b24d) mup_volume_pane_cp_ParamLimits

0xc0ba,	// (0x0001b24d) mup_volume_pane_cp

0x3f27,	// (0x000130ba) mup2_visualizer_pane_g1_ParamLimits

0x3f27,	// (0x000130ba) mup2_visualizer_pane_g1

0xbff9,	// (0x0001b18c) mup2_visualizer_pane_g2_ParamLimits

0xbff9,	// (0x0001b18c) mup2_visualizer_pane_g2

0x3f3e,	// (0x000130d1) mup2_visualizer_pane_g3_ParamLimits

0x3f3e,	// (0x000130d1) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0001e7ec) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0001e7ec) mup2_visualizer_pane_g

0xad93,	// (0x00019f26) aid_size_cell_fmradio

0x33ba,	// (0x0001254d) aid_height_parent_landcape

0xa05b,	// (0x000191ee) wml_content_pane_cp

0xa063,	// (0x000191f6) wml_tabs_pane

0xa06c,	// (0x000191ff) popup_wml_miniature_window

0xa074,	// (0x00019207) scroll_pane_cp021

0xa088,	// (0x0001921b) wml_content_pane_comp8

0x9945,	// (0x00018ad8) bg_popup_sub_pane_cp05

0xc017,	// (0x0001b1aa) popup_wml_miniature_window_g1

0xc01f,	// (0x0001b1b2) wml_miniature_view_pane

0x3f4a,	// (0x000130dd) aid_size_wml_view

0x3f52,	// (0x000130e5) wml_miniature_view_pane_g1

0x3f5b,	// (0x000130ee) wml_miniature_view_pane_g2

0x3f64,	// (0x000130f7) wml_miniature_view_pane_g3

0x3f6c,	// (0x000130ff) wml_miniature_view_pane_g4

0x3f74,	// (0x00013107) wml_miniature_view_pane_g5

0x3f7c,	// (0x0001310f) wml_miniature_view_pane_g6

0x3f84,	// (0x00013117) wml_miniature_view_pane_g7

0x3f8c,	// (0x0001311f) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0001e7f3) wml_miniature_view_pane_g

0xc027,	// (0x0001b1ba) background_graphic_ParamLimits

0xc027,	// (0x0001b1ba) background_graphic

0xc033,	// (0x0001b1c6) wml_tabs_2_pane

0xc03c,	// (0x0001b1cf) wml_tabs_3_pane_ParamLimits

0xc03c,	// (0x0001b1cf) wml_tabs_3_pane

0xc04e,	// (0x0001b1e1) wml_tabs_4_pane_ParamLimits

0xc04e,	// (0x0001b1e1) wml_tabs_4_pane

0xc064,	// (0x0001b1f7) wml_tabs_5_pane_ParamLimits

0xc064,	// (0x0001b1f7) wml_tabs_5_pane

0xc07e,	// (0x0001b211) wml_tabs_pane_g2_ParamLimits

0xc07e,	// (0x0001b211) wml_tabs_pane_g2

0xc092,	// (0x0001b225) wml_tabs_pane_g3_ParamLimits

0xc092,	// (0x0001b225) wml_tabs_pane_g3

0x3f94,	// (0x00013127) wml_tabs_2_active_pane_ParamLimits

0x3f94,	// (0x00013127) wml_tabs_2_active_pane

0x3fa8,	// (0x0001313b) wml_tabs_2_passive_pane_ParamLimits

0x3fa8,	// (0x0001313b) wml_tabs_2_passive_pane

0x3fbc,	// (0x0001314f) wml_tabs_3_active_pane_cp_ParamLimits

0x3fbc,	// (0x0001314f) wml_tabs_3_active_pane_cp

0x3fd1,	// (0x00013164) wml_tabs_3_passive_pane_ParamLimits

0x3fd1,	// (0x00013164) wml_tabs_3_passive_pane

0x3fe4,	// (0x00013177) wml_tabs_3_passive_pane_cp_ParamLimits

0x3fe4,	// (0x00013177) wml_tabs_3_passive_pane_cp

0x3ffb,	// (0x0001318e) tabs_4_active_pane

0x4003,	// (0x00013196) tabs_4_passive_pane

0x400d,	// (0x000131a0) tabs_4_passive_pane_cp

0x4015,	// (0x000131a8) tabs_4_passive_pane_cp2

0x30d5,	// (0x00012268) aid_height_text

0x27ed,	// (0x00011980) mup_volume_cont_pane_ParamLimits

0x27ed,	// (0x00011980) mup_volume_cont_pane

0x03c8,	// (0x0000f55b) aid_size_cell_pinb

0x03d2,	// (0x0000f565) aid_size_list_pinb

0x3eff,	// (0x00013092) mup2_volume_cont_pane_ParamLimits

0x3eff,	// (0x00013092) mup2_volume_cont_pane

0xc0a6,	// (0x0001b239) mup2_volume_cont_pane_g1_ParamLimits

0xc0a6,	// (0x0001b239) mup2_volume_cont_pane_g1

0x008b,	// (0x0000f21e) aid_size_cell_touch_ParamLimits

0x008b,	// (0x0000f21e) aid_size_cell_touch

0x02b8,	// (0x0000f44b) touch_pane_ParamLimits

0x02b8,	// (0x0000f44b) touch_pane

0x94b4,	// (0x00018647) main_rss2_pane

0xc0e8,	// (0x0001b27b) listscroll_rss2_pane

0xc0f1,	// (0x0001b284) rss2_navigation_pane

0xc0f9,	// (0x0001b28c) list_rss2_pane

0xa791,	// (0x00019924) scroll_pane_cp22

0xc101,	// (0x0001b294) rss2_navigation_pane_g1

0xc10a,	// (0x0001b29d) rss2_navigation_pane_g2

0xc112,	// (0x0001b2a5) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0001e804) rss2_navigation_pane_g

0xc11a,	// (0x0001b2ad) rss2_navigation_pane_t1

0x401f,	// (0x000131b2) rss2_list_single_pane_ParamLimits

0x401f,	// (0x000131b2) rss2_list_single_pane

0xc128,	// (0x0001b2bb) rss2_list_single_pane_t2

0xc136,	// (0x0001b2c9) rss2_list_single_pane_t3_ParamLimits

0xc136,	// (0x0001b2c9) rss2_list_single_pane_t3

0xc153,	// (0x0001b2e6) rss2_list_single_pane_t4

0x213c,	// (0x000112cf) smil_status_pane_g1

0x9524,	// (0x000186b7) main_image2_pane_ParamLimits

0x9524,	// (0x000186b7) main_image2_pane

0x3ac5,	// (0x00012c58) main_camera2_pane_g9_ParamLimits

0x3ac5,	// (0x00012c58) main_camera2_pane_g9

0x3bf3,	// (0x00012d86) main_camera2_pane_t5_ParamLimits

0x3bf3,	// (0x00012d86) main_camera2_pane_t5

0xbfc9,	// (0x0001b15c) main_camera2_pane_t6_ParamLimits

0xbfc9,	// (0x0001b15c) main_camera2_pane_t6

0x4034,	// (0x000131c7) main_image2_pane_g1_ParamLimits

0x4034,	// (0x000131c7) main_image2_pane_g1

0x2e11,	// (0x00011fa4) smil2_video_pane_ParamLimits

0x2e11,	// (0x00011fa4) smil2_video_pane

0x94d2,	// (0x00018665) aid_zoom_text_primary_cp

0x951a,	// (0x000186ad) popup_preview_fixed_window

0x9fc4,	// (0x00019157) im_reading_pane_g1

0x393c,	// (0x00012acf) cams2_bc_adjust_pane_cp_ParamLimits

0x393c,	// (0x00012acf) cams2_bc_adjust_pane_cp

0x3c22,	// (0x00012db5) cams2_bc_adjust_pane_ParamLimits

0x3c22,	// (0x00012db5) cams2_bc_adjust_pane

0xc161,	// (0x0001b2f4) cams2_bc_adjust_pane_g1

0xc169,	// (0x0001b2fc) cams2_slider_pane

0xc172,	// (0x0001b305) cams2_slider_pane_g1

0xc17b,	// (0x0001b30e) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0001e80b) cams2_slider_pane_g

0x04c0,	// (0x0000f653) calc_display_pane_ParamLimits

0x04e5,	// (0x0000f678) calc_paper_pane_ParamLimits

0x0508,	// (0x0000f69b) grid_calc_pane_ParamLimits

0xa641,	// (0x000197d4) popup_clock_digital_window_t1_ParamLimits

0xad30,	// (0x00019ec3) main_image_pane_t1

0x04a2,	// (0x0000f635) aid_size_cell_calc_ParamLimits

0x04a2,	// (0x0000f635) aid_size_cell_calc

0x3400,	// (0x00012593) popup_blid_sat_info2_window_ParamLimits

0x3400,	// (0x00012593) popup_blid_sat_info2_window

0xc19d,	// (0x0001b330) aid_size_cell_blid

0xc1a5,	// (0x0001b338) bg_popup_window_pane_cp07

0xc1c8,	// (0x0001b35b) grid_popup_blid_pane

0xc1d2,	// (0x0001b365) heading_pane_cp05_ParamLimits

0xc1d2,	// (0x0001b365) heading_pane_cp05

0xc29c,	// (0x0001b42f) cell_popup_blid_pane_ParamLimits

0xc29c,	// (0x0001b42f) cell_popup_blid_pane

0xc2c0,	// (0x0001b453) cell_popup_blid_pane_g1

0xc2c8,	// (0x0001b45b) cell_popup_blid_pane_t1

0x3ecf,	// (0x00013062) mup2_indicator_pane_ParamLimits

0x3ecf,	// (0x00013062) mup2_indicator_pane

0x9ec1,	// (0x00019054) mup2_visualizer_osc_pane

0xc005,	// (0x0001b198) mup2_visualizer_spec_pane_ParamLimits

0xc005,	// (0x0001b198) mup2_visualizer_spec_pane

0x404a,	// (0x000131dd) mup2_spec_half_pane

0x4053,	// (0x000131e6) mup2_spec_half_pane_cp

0x405b,	// (0x000131ee) mup2_spec_bar_pane_ParamLimits

0x405b,	// (0x000131ee) mup2_spec_bar_pane

0xbf54,	// (0x0001b0e7) mup2_spec_bar_pane_g1

0xbf5e,	// (0x0001b0f1) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0001e77e) mup2_spec_bar_pane_g

0x407b,	// (0x0001320e) mup2_osc_middle_pane

0xbf70,	// (0x0001b103) mup2_visualizer_osc_pane_g1

0x9552,	// (0x000186e5) popup_number_entry_window_t1_ParamLimits

0x9565,	// (0x000186f8) popup_number_entry_window_t2_ParamLimits

0x9577,	// (0x0001870a) popup_number_entry_window_t3_ParamLimits

0x030a,	// (0x0000f49d) popup_number_entry_window_t5_ParamLimits

0x030a,	// (0x0000f49d) popup_number_entry_window_t5

0xf0af,	// (0x0001e242) popup_number_entry_window_t_ParamLimits

0x9589,	// (0x0001871c) text_title_cp2_ParamLimits

0xac0a,	// (0x00019d9d) aid_hotspot_pointer_text2_pane

0xac30,	// (0x00019dc3) main_viewer_pane_g9_ParamLimits

0xac30,	// (0x00019dc3) main_viewer_pane_g9

0xa1fd,	// (0x00019390) cale_month_pane_t1_ParamLimits

0xa268,	// (0x000193fb) bg_cale_pane_ParamLimits

0xa280,	// (0x00019413) list_cale_pane_ParamLimits

0xa291,	// (0x00019424) listscroll_cale_day_pane_t1

0xa2a3,	// (0x00019436) scroll_pane_cp09_ParamLimits

0x281f,	// (0x000119b2) main_mup_eq_pane_t1_ParamLimits

0x281f,	// (0x000119b2) main_mup_eq_pane_t1

0x2839,	// (0x000119cc) main_mup_eq_pane_t2_ParamLimits

0x2839,	// (0x000119cc) main_mup_eq_pane_t2

0x2853,	// (0x000119e6) main_mup_eq_pane_t3_ParamLimits

0x2853,	// (0x000119e6) main_mup_eq_pane_t3

0x286f,	// (0x00011a02) main_mup_eq_pane_t4_ParamLimits

0x286f,	// (0x00011a02) main_mup_eq_pane_t4

0x288b,	// (0x00011a1e) main_mup_eq_pane_t5_ParamLimits

0x288b,	// (0x00011a1e) main_mup_eq_pane_t5

0x28a7,	// (0x00011a3a) main_mup_eq_pane_t6_ParamLimits

0x28a7,	// (0x00011a3a) main_mup_eq_pane_t6

0x28bb,	// (0x00011a4e) main_mup_eq_pane_t7_ParamLimits

0x28bb,	// (0x00011a4e) main_mup_eq_pane_t7

0x28cf,	// (0x00011a62) main_mup_eq_pane_t8_ParamLimits

0x28cf,	// (0x00011a62) main_mup_eq_pane_t8

0x28e3,	// (0x00011a76) main_mup_eq_pane_t9_ParamLimits

0x28e3,	// (0x00011a76) main_mup_eq_pane_t9

0x28fd,	// (0x00011a90) main_mup_eq_pane_t10_ParamLimits

0x28fd,	// (0x00011a90) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0001e5cd) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0001e5cd) main_mup_eq_pane_t

0x29ac,	// (0x00011b3f) mup_equalizer_pane_cp5_ParamLimits

0x29c0,	// (0x00011b53) mup_equalizer_pane_cp6_ParamLimits

0x29d4,	// (0x00011b67) mup_equalizer_pane_cp7_ParamLimits

0x94b4,	// (0x00018647) main_gallery_pane

0xbf79,	// (0x0001b10c) smil2_volume_pane

0xbf81,	// (0x0001b114) smil_status_volume_pane_g1_ParamLimits

0xbf94,	// (0x0001b127) smil_status_volume_pane_g2_ParamLimits

0xbfa7,	// (0x0001b13a) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0001e783) smil_status_volume_pane_g_ParamLimits

0xc1a5,	// (0x0001b338) bg_popup_window_pane_cp07_ParamLimits

0xc1b3,	// (0x0001b346) blid_firmament_pane

0x4084,	// (0x00013217) aid_size_cell_gallery_ParamLimits

0x4084,	// (0x00013217) aid_size_cell_gallery

0x409a,	// (0x0001322d) grid_gallery_pane_ParamLimits

0x409a,	// (0x0001322d) grid_gallery_pane

0x40b3,	// (0x00013246) cell_gallery_pane_ParamLimits

0x40b3,	// (0x00013246) cell_gallery_pane

0xc2d6,	// (0x0001b469) bg_cell_gallery_focus_pane_ParamLimits

0xc2d6,	// (0x0001b469) bg_cell_gallery_focus_pane

0xc2e8,	// (0x0001b47b) cell_gallery_pane_g1_ParamLimits

0xc2e8,	// (0x0001b47b) cell_gallery_pane_g1

0x40fc,	// (0x0001328f) cell_gallery_pane_g2_ParamLimits

0x40fc,	// (0x0001328f) cell_gallery_pane_g2

0x4109,	// (0x0001329c) cell_gallery_pane_g3_ParamLimits

0x4109,	// (0x0001329c) cell_gallery_pane_g3

0xc2f4,	// (0x0001b487) cell_gallery_pane_g4_ParamLimits

0xc2f4,	// (0x0001b487) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0001e831) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0001e831) cell_gallery_pane_g

0xc300,	// (0x0001b493) bg_cell_gallery_focus_pane_g1

0xc308,	// (0x0001b49b) bg_cell_gallery_focus_pane_g2

0xc310,	// (0x0001b4a3) bg_cell_gallery_focus_pane_g3

0xc318,	// (0x0001b4ab) bg_cell_gallery_focus_pane_g4

0xc320,	// (0x0001b4b3) bg_cell_gallery_focus_pane_g5

0xc328,	// (0x0001b4bb) bg_cell_gallery_focus_pane_g6

0xc330,	// (0x0001b4c3) bg_cell_gallery_focus_pane_g7

0xc338,	// (0x0001b4cb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0001e83a) bg_cell_gallery_focus_pane_g

0xc340,	// (0x0001b4d3) aid_firma_cardinal

0xc354,	// (0x0001b4e7) blid_firmament_pane_t1

0xc36b,	// (0x0001b4fe) blid_firmament_pane_t2

0xc382,	// (0x0001b515) blid_firmament_pane_t3

0xc399,	// (0x0001b52c) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0001e84b) blid_firmament_pane_t

0xc3b0,	// (0x0001b543) blid_sat_info_pane

0xc3c0,	// (0x0001b553) blid_sat_info_pane_g1

0xc3c0,	// (0x0001b553) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0001e854) blid_sat_info_pane_g

0xc3ca,	// (0x0001b55d) blid_sat_info_pane_t1

0xc3d8,	// (0x0001b56b) smil2_volume_content_pane

0xc3e1,	// (0x0001b574) smil2_volume_pane_g1

0x9d2c,	// (0x00018ebf) smil2_volume_content_pane_g1

0xc3e9,	// (0x0001b57c) smil2_volume_content_pane_g2

0xc3f2,	// (0x0001b585) smil2_volume_content_pane_g3

0xc3fb,	// (0x0001b58e) smil2_volume_content_pane_g4

0xc404,	// (0x0001b597) smil2_volume_content_pane_g5

0xc40d,	// (0x0001b5a0) smil2_volume_content_pane_g6

0xc416,	// (0x0001b5a9) smil2_volume_content_pane_g7

0xc41f,	// (0x0001b5b2) smil2_volume_content_pane_g8

0xc428,	// (0x0001b5bb) smil2_volume_content_pane_g9

0xc431,	// (0x0001b5c4) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0001e859) smil2_volume_content_pane_g

0x0aa8,	// (0x0000fc3b) cale_week_day_heading_pane_t1_ParamLimits

0x0ad2,	// (0x0000fc65) cale_week_day_heading_pane_t2_ParamLimits

0x0b01,	// (0x0000fc94) cale_week_day_heading_pane_t3_ParamLimits

0x0b30,	// (0x0000fcc3) cale_week_day_heading_pane_t4_ParamLimits

0x0b5f,	// (0x0000fcf2) cale_week_day_heading_pane_t5_ParamLimits

0x0b96,	// (0x0000fd29) cale_week_day_heading_pane_t6_ParamLimits

0x0bcd,	// (0x0000fd60) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0001e349) cale_week_day_heading_pane_t_ParamLimits

0x9e66,	// (0x00018ff9) bg_cale_side_pane_ParamLimits

0x0bf7,	// (0x0000fd8a) cale_week_time_pane_t1_ParamLimits

0x0c11,	// (0x0000fda4) cale_week_time_pane_t2_ParamLimits

0x0c2b,	// (0x0000fdbe) cale_week_time_pane_t3_ParamLimits

0x0c45,	// (0x0000fdd8) cale_week_time_pane_t4_ParamLimits

0x0c5f,	// (0x0000fdf2) cale_week_time_pane_t5_ParamLimits

0x0c79,	// (0x0000fe0c) cale_week_time_pane_t6_ParamLimits

0x0c93,	// (0x0000fe26) cale_week_time_pane_t7_ParamLimits

0x0cad,	// (0x0000fe40) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0001e358) cale_week_time_pane_t_ParamLimits

0x0cc7,	// (0x0000fe5a) cell_cale_week_pane_g2_ParamLimits

0x9e66,	// (0x00018ff9) bg_cale_side_pane_cp01_ParamLimits

0x1f19,	// (0x000110ac) cale_month_week_pane_t1_ParamLimits

0x1f32,	// (0x000110c5) cale_month_week_pane_t2_ParamLimits

0x1f4b,	// (0x000110de) cale_month_week_pane_t3_ParamLimits

0x1f64,	// (0x000110f7) cale_month_week_pane_t4_ParamLimits

0x1f7d,	// (0x00011110) cale_month_week_pane_t5_ParamLimits

0x1f96,	// (0x00011129) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0001e42d) cale_month_week_pane_t_ParamLimits

0xa20f,	// (0x000193a2) cell_cale_month_pane_g1_ParamLimits

0x94b4,	// (0x00018647) main_cale_event_viewer_pane

0x94b4,	// (0x00018647) listscroll_cale_event_viewer_pane

0xc43a,	// (0x0001b5cd) list_cale_ev_pane

0xc442,	// (0x0001b5d5) scroll_pane_cp023

0xc44e,	// (0x0001b5e1) field_cale_ev_pane_ParamLimits

0xc44e,	// (0x0001b5e1) field_cale_ev_pane

0xc46c,	// (0x0001b5ff) field_cale_ev_content_pane_ParamLimits

0xc46c,	// (0x0001b5ff) field_cale_ev_content_pane

0xc478,	// (0x0001b60b) field_cale_ev_pane_g1_ParamLimits

0xc478,	// (0x0001b60b) field_cale_ev_pane_g1

0xc484,	// (0x0001b617) field_cale_ev_pane_g2_ParamLimits

0xc484,	// (0x0001b617) field_cale_ev_pane_g2

0xc49c,	// (0x0001b62f) field_cale_ev_pane_g3_ParamLimits

0xc49c,	// (0x0001b62f) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0001e86e) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0001e86e) field_cale_ev_pane_g

0xc4b4,	// (0x0001b647) field_cale_ev_pane_t1_ParamLimits

0xc4b4,	// (0x0001b647) field_cale_ev_pane_t1

0xc4cb,	// (0x0001b65e) field_cale_ev_content_pane_t1_ParamLimits

0xc4cb,	// (0x0001b65e) field_cale_ev_content_pane_t1

0xab5b,	// (0x00019cee) bg_button_pane_cp01

0x07d5,	// (0x0000f968) listscroll_cale_week_pane_ParamLimits

0x9e11,	// (0x00018fa4) popup_toolbar_window_cp01

0x9e37,	// (0x00018fca) listscroll_cale_week_pane_t1_ParamLimits

0x07d5,	// (0x0000f968) listscroll_cale_day_pane_ParamLimits

0x9e11,	// (0x00018fa4) popup_toolbar_window_cp02

0xa291,	// (0x00019424) listscroll_cale_day_pane_t1_ParamLimits

0x07d5,	// (0x0000f968) main_cale_month_pane_ParamLimits

0xbef2,	// (0x0001b085) popup_toolbar_window_cp03_ParamLimits

0xbef2,	// (0x0001b085) popup_toolbar_window_cp03

0x2cd9,	// (0x00011e6c) main_image_pane_g2_ParamLimits

0x2cd9,	// (0x00011e6c) main_image_pane_g2

0x2cea,	// (0x00011e7d) main_image_pane_g3_ParamLimits

0x2cea,	// (0x00011e7d) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0001e65f) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0001e65f) main_image_pane_g

0xad30,	// (0x00019ec3) main_image_pane_t1_ParamLimits

0x2cfb,	// (0x00011e8e) main_image_pane_t2_ParamLimits

0x2cfb,	// (0x00011e8e) main_image_pane_t2

0x2d0d,	// (0x00011ea0) main_image_pane_t3_ParamLimits

0x2d0d,	// (0x00011ea0) main_image_pane_t3

0x2d35,	// (0x00011ec8) main_image_pane_t4_ParamLimits

0x2d35,	// (0x00011ec8) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0001e666) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0001e666) main_image_pane_t

0x2d55,	// (0x00011ee8) popup_image_details_window_cp01

0x2d5f,	// (0x00011ef2) popup_toobar_trans_pane_cp01_ParamLimits

0x2d5f,	// (0x00011ef2) popup_toobar_trans_pane_cp01

0x34df,	// (0x00012672) popup_image_details_window_ParamLimits

0x34df,	// (0x00012672) popup_image_details_window

0xbec5,	// (0x0001b058) popup_image_focus_window

0x38f6,	// (0x00012a89) camera2_autofocus_pane_ParamLimits

0x38f6,	// (0x00012a89) camera2_autofocus_pane

0x94b4,	// (0x00018647) bg_popup_sub_pane_cp06

0xc4e9,	// (0x0001b67c) popup_image_focus_window_g1

0xc4f1,	// (0x0001b684) popup_image_focus_window_g2

0xc4f9,	// (0x0001b68c) popup_image_focus_window_g3

0xc501,	// (0x0001b694) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0001e875) popup_image_focus_window_g

0xc509,	// (0x0001b69c) popup_image_focus_window_t1

0xc517,	// (0x0001b6aa) popup_image_focus_window_t2

0xc527,	// (0x0001b6ba) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0001e87e) popup_image_focus_window_t

0xc535,	// (0x0001b6c8) camera2_autofocus_pane_g1

0x9524,	// (0x000186b7) bg_tb_trans_pane_cp01

0xc543,	// (0x0001b6d6) popup_image_details_window_g1

0xc556,	// (0x0001b6e9) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0001e890) popup_image_details_window_g

0xc57f,	// (0x0001b712) popup_image_details_window_t1

0xc591,	// (0x0001b724) popup_image_details_window_t2

0xc5aa,	// (0x0001b73d) popup_image_details_window_t3

0xc5be,	// (0x0001b751) popup_image_details_window_t4

0xc5d9,	// (0x0001b76c) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0001e897) popup_image_details_window_t

0x9c59,	// (0x00018dec) bg_calc_paper_pane_ParamLimits

0x94b4,	// (0x00018647) grid_highlight_pane_cp013

0x9c6d,	// (0x00018e00) list_calc_pane_ParamLimits

0x9c7f,	// (0x00018e12) scroll_pane_cp024

0x9c87,	// (0x00018e1a) bg_calc_display_pane_ParamLimits

0x0606,	// (0x0000f799) calc_display_pane_t1_ParamLimits

0x061b,	// (0x0000f7ae) calc_display_pane_t2_ParamLimits

0x9c93,	// (0x00018e26) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0001e2c9) calc_display_pane_t_ParamLimits

0x06db,	// (0x0000f86e) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0001e2e6) cell_calc_pane_g

0x06e4,	// (0x0000f877) cell_calc_pane_t1

0x9d0a,	// (0x00018e9d) grid_highlight_pane_cp02_ParamLimits

0x9d20,	// (0x00018eb3) toolbar_button_pane_cp01_ParamLimits

0x9d20,	// (0x00018eb3) toolbar_button_pane_cp01

0xad75,	// (0x00019f08) temp_image_control_pane_ParamLimits

0xad75,	// (0x00019f08) temp_image_control_pane

0x9524,	// (0x000186b7) main_mp3_pane

0xc5f3,	// (0x0001b786) temp_image_control_pane_g1_ParamLimits

0xc5f3,	// (0x0001b786) temp_image_control_pane_g1

0xc601,	// (0x0001b794) temp_image_control_pane_g2_ParamLimits

0xc601,	// (0x0001b794) temp_image_control_pane_g2

0xc613,	// (0x0001b7a6) temp_image_control_pane_g3_ParamLimits

0xc613,	// (0x0001b7a6) temp_image_control_pane_g3

0x4146,	// (0x000132d9) temp_image_control_pane_g4_ParamLimits

0x4146,	// (0x000132d9) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0001e8a2) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0001e8a2) temp_image_control_pane_g

0xc5f3,	// (0x0001b786) main_mp3_pane_g1

0x4159,	// (0x000132ec) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0001e8ab) main_mp3_pane_g

0xc656,	// (0x0001b7e9) main_mp3_pane_t1

0x9ed3,	// (0x00019066) main_camera_pane_g8_ParamLimits

0x9ed3,	// (0x00019066) main_camera_pane_g8

0x0fc1,	// (0x00010154) main_video_pane_g7_ParamLimits

0x0fc1,	// (0x00010154) main_video_pane_g7

0xbfe7,	// (0x0001b17a) main_camera2_pane_t7_ParamLimits

0xbfe7,	// (0x0001b17a) main_camera2_pane_t7

0xa01b,	// (0x000191ae) scroll_pane_cp025_ParamLimits

0xa01b,	// (0x000191ae) scroll_pane_cp025

0xa02f,	// (0x000191c2) scroll_pane_cp026_ParamLimits

0xa02f,	// (0x000191c2) scroll_pane_cp026

0xa03e,	// (0x000191d1) wml_content_pane_ParamLimits

0x94b4,	// (0x00018647) main_touch_calib_pane

0x422d,	// (0x000133c0) main_touch_calib_pane_g1

0x423f,	// (0x000133d2) main_touch_calib_pane_g2

0x4251,	// (0x000133e4) main_touch_calib_pane_g3

0x4263,	// (0x000133f6) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0001e8c9) main_touch_calib_pane_g

0x4275,	// (0x00013408) main_touch_calib_pane_t1

0x428f,	// (0x00013422) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0001e8d2) main_touch_calib_pane_t

0xa86d,	// (0x00019a00) mup_progress_pane_cp02

0xa8a2,	// (0x00019a35) navi_pane_g1

0xa95d,	// (0x00019af0) navi_pane_mp_t3

0x9524,	// (0x000186b7) main_mp3_pane_ParamLimits

0x3664,	// (0x000127f7) navi_pane_ParamLimits

0xc5f3,	// (0x0001b786) main_mp3_pane_g1_ParamLimits

0x4159,	// (0x000132ec) main_mp3_pane_g2_ParamLimits

0x4167,	// (0x000132fa) main_mp3_pane_g3_ParamLimits

0x4167,	// (0x000132fa) main_mp3_pane_g3

0x4175,	// (0x00013308) main_mp3_pane_g4_ParamLimits

0x4175,	// (0x00013308) main_mp3_pane_g4

0xc623,	// (0x0001b7b6) main_mp3_pane_g5_ParamLimits

0xc623,	// (0x0001b7b6) main_mp3_pane_g5

0xc631,	// (0x0001b7c4) main_mp3_pane_g6_ParamLimits

0xc631,	// (0x0001b7c4) main_mp3_pane_g6

0xc63e,	// (0x0001b7d1) main_mp3_pane_g7_ParamLimits

0xc63e,	// (0x0001b7d1) main_mp3_pane_g7

0xc64a,	// (0x0001b7dd) main_mp3_pane_g8_ParamLimits

0xc64a,	// (0x0001b7dd) main_mp3_pane_g8

0xf718,	// (0x0001e8ab) main_mp3_pane_g_ParamLimits

0x4181,	// (0x00013314) main_mp3_pane_t2

0x418f,	// (0x00013322) main_mp3_pane_t3

0xc664,	// (0x0001b7f7) main_mp3_pane_t4

0xc672,	// (0x0001b805) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0001e8bc) main_mp3_pane_t

0xc680,	// (0x0001b813) mup_progress_pane_cp01

0x94d2,	// (0x00018665) aid_zoom_text_secondary2

0xc43a,	// (0x0001b5cd) list_cale_ev2_pane

0xc442,	// (0x0001b5d5) scroll_pane_cp023_ParamLimits

0x42e5,	// (0x00013478) field_cale_ev2_pane_ParamLimits

0x42e5,	// (0x00013478) field_cale_ev2_pane

0x4305,	// (0x00013498) field_cale_ev2_pane_g1_ParamLimits

0x4305,	// (0x00013498) field_cale_ev2_pane_g1

0x4311,	// (0x000134a4) field_cale_ev2_pane_g2_ParamLimits

0x4311,	// (0x000134a4) field_cale_ev2_pane_g2

0x4329,	// (0x000134bc) field_cale_ev2_pane_g3_ParamLimits

0x4329,	// (0x000134bc) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0001e8dd) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0001e8dd) field_cale_ev2_pane_g

0x4341,	// (0x000134d4) field_cale_ev2_pane_t1_ParamLimits

0x4341,	// (0x000134d4) field_cale_ev2_pane_t1

0x4358,	// (0x000134eb) field_cale_ev2_pane_t2_ParamLimits

0x4358,	// (0x000134eb) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0001e8e6) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0001e8e6) field_cale_ev2_pane_t

0x2b8e,	// (0x00011d21) main_postcard_pane_g5_ParamLimits

0x2b8e,	// (0x00011d21) main_postcard_pane_g5

0x2ba4,	// (0x00011d37) main_postcard_pane_g6_ParamLimits

0x2ba4,	// (0x00011d37) main_postcard_pane_g6

0x0d8d,	// (0x0000ff20) camera2_autofocus_pane_cp_ParamLimits

0x0d8d,	// (0x0000ff20) camera2_autofocus_pane_cp

0x9524,	// (0x000186b7) main_mup3_pane

0x4391,	// (0x00013524) main_mup3_pane_g1_ParamLimits

0x4391,	// (0x00013524) main_mup3_pane_g1

0x43b3,	// (0x00013546) main_mup3_pane_g2_ParamLimits

0x43b3,	// (0x00013546) main_mup3_pane_g2

0x4431,	// (0x000135c4) main_mup3_pane_g3_ParamLimits

0x4431,	// (0x000135c4) main_mup3_pane_g3

0x4477,	// (0x0001360a) main_mup3_pane_g4_ParamLimits

0x4477,	// (0x0001360a) main_mup3_pane_g4

0x44bd,	// (0x00013650) main_mup3_pane_g5_ParamLimits

0x44bd,	// (0x00013650) main_mup3_pane_g5

0x4503,	// (0x00013696) main_mup3_pane_g6_ParamLimits

0x4503,	// (0x00013696) main_mup3_pane_g6

0xc6b4,	// (0x0001b847) main_mup3_pane_g7_ParamLimits

0xc6b4,	// (0x0001b847) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0001e8f6) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0001e8f6) main_mup3_pane_g

0x4581,	// (0x00013714) main_mup3_pane_t1_ParamLimits

0x4581,	// (0x00013714) main_mup3_pane_t1

0x45f5,	// (0x00013788) main_mup3_pane_t2_ParamLimits

0x45f5,	// (0x00013788) main_mup3_pane_t2

0x46c9,	// (0x0001385c) main_mup3_pane_t4_ParamLimits

0x46c9,	// (0x0001385c) main_mup3_pane_t4

0x471f,	// (0x000138b2) main_mup3_pane_t5_ParamLimits

0x471f,	// (0x000138b2) main_mup3_pane_t5

0x47db,	// (0x0001396e) main_mup3_pane_t6_ParamLimits

0x47db,	// (0x0001396e) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0001e907) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0001e907) main_mup3_pane_t

0x4893,	// (0x00013a26) mup3_progress_pane_ParamLimits

0x4893,	// (0x00013a26) mup3_progress_pane

0x4929,	// (0x00013abc) popup_mup3_control_window_ParamLimits

0x4929,	// (0x00013abc) popup_mup3_control_window

0xc6c2,	// (0x0001b855) popup_mup3_text_window

0x495b,	// (0x00013aee) mup3_progress_pane_t1

0x497a,	// (0x00013b0d) mup3_progress_pane_t2

0xc6ca,	// (0x0001b85d) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0001e914) mup3_progress_pane_t

0xc6e7,	// (0x0001b87a) mup_progress_pane_cp03

0x94b4,	// (0x00018647) bg_tb_trans_pane_cp04

0x4999,	// (0x00013b2c) mup3_volume_pane

0x49a1,	// (0x00013b34) popup_mup3_control_window_g1

0x49aa,	// (0x00013b3d) mup3_volume_pane_g1

0x49b3,	// (0x00013b46) mup3_volume_pane_g2

0x49bc,	// (0x00013b4f) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0001e91b) mup3_volume_pane_g

0x94b4,	// (0x00018647) bg_tb_trans_pane_cp03

0xc6f7,	// (0x0001b88a) popup_mup3_text_window_g1

0xc6ff,	// (0x0001b892) popup_mup3_text_window_t1

0x9ce1,	// (0x00018e74) list_calc_item_pane_g1_ParamLimits

0xc0cf,	// (0x0001b262) mup_volume_pane_cp_g1

0x42a9,	// (0x0001343c) main_touch_calib_pane_t3

0x42bd,	// (0x00013450) main_touch_calib_pane_t4

0x42d1,	// (0x00013464) main_touch_calib_pane_t5

0x94be,	// (0x00018651) aid_cell_size_toolbar2

0x94c6,	// (0x00018659) aid_popup3_width_pane

0x94d2,	// (0x00018665) aid_zoom_text_msg_primary

0x0d6c,	// (0x0000feff) vorec_t7

0x9ca5,	// (0x00018e38) bg_calc_paper_pane_g1_ParamLimits

0x9cb1,	// (0x00018e44) bg_calc_paper_pane_g2_ParamLimits

0x9cbd,	// (0x00018e50) bg_calc_paper_pane_g3_ParamLimits

0x9cc9,	// (0x00018e5c) bg_calc_paper_pane_g4_ParamLimits

0x9cd5,	// (0x00018e68) bg_calc_paper_pane_g5_ParamLimits

0x0665,	// (0x0000f7f8) bg_calc_paper_pane_g6_ParamLimits

0x0674,	// (0x0000f807) bg_calc_paper_pane_g7_ParamLimits

0x0683,	// (0x0000f816) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0001e2d0) bg_calc_paper_pane_g_ParamLimits

0x0696,	// (0x0000f829) calc_bg_paper_pane_g9_ParamLimits

0x0ed8,	// (0x0001006b) image_qvga_pane_ParamLimits

0x0ed8,	// (0x0001006b) image_qvga_pane

0x9ba0,	// (0x00018d33) bg_popup_sub_pane_cp04_ParamLimits

0xacac,	// (0x00019e3f) popup_mup_playback_window_g1_ParamLimits

0xacb8,	// (0x00019e4b) popup_mup_playback_window_t1_ParamLimits

0xaccd,	// (0x00019e60) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0001e65a) popup_mup_playback_window_t_ParamLimits

0x3de9,	// (0x00012f7c) main_mup2_pane_g3_ParamLimits

0x3de9,	// (0x00012f7c) main_mup2_pane_g3

0x12e7,	// (0x0001047a) popup_toolbar_window_cp04

0xb0af,	// (0x0001a242) popup_call2_audio_second_window_g3_ParamLimits

0xb0af,	// (0x0001a242) popup_call2_audio_second_window_g3

0xb4b9,	// (0x0001a64c) popup_call2_audio_first_window_g4_ParamLimits

0xb4b9,	// (0x0001a64c) popup_call2_audio_first_window_g4

0xbb38,	// (0x0001accb) popup_call2_audio_in_window_g4_ParamLimits

0xbb38,	// (0x0001accb) popup_call2_audio_in_window_g4

0x2cbb,	// (0x00011e4e) aid_area_sk_bg_cut_ParamLimits

0x2cbb,	// (0x00011e4e) aid_area_sk_bg_cut

0xace2,	// (0x00019e75) aid_area_sk_bg_cut_2_ParamLimits

0xace2,	// (0x00019e75) aid_area_sk_bg_cut_2

0x40ec,	// (0x0001327f) aid_placing_details_win

0x40f4,	// (0x00013287) aid_placing_details_win_2

0xc535,	// (0x0001b6c8) camera2_autofocus_pane_g1_ParamLimits

0x0251,	// (0x0000f3e4) popup_fixed_preview_cale_window_ParamLimits

0x0251,	// (0x0000f3e4) popup_fixed_preview_cale_window

0xa9e4,	// (0x00019b77) navi_slider_pane_g3

0xa9ed,	// (0x00019b80) navi_slider_pane_g4

0xa9f6,	// (0x00019b89) navi_slider_pane_g5

0xa9e4,	// (0x00019b77) navi_slider_pane_g6

0xa9ff,	// (0x00019b92) navi_slider_pane_g7

0xab20,	// (0x00019cb3) mup_scale_pane_g3

0xab29,	// (0x00019cbc) mup_scale_pane_g4

0xab32,	// (0x00019cc5) mup_scale_pane_g5

0x29e8,	// (0x00011b7b) mup_scale_pane_g6

0x29f1,	// (0x00011b84) mup_scale_pane_g7

0xa9e4,	// (0x00019b77) cams2_slider_pane_g3

0xc184,	// (0x0001b317) cams2_slider_pane_g4

0xc18c,	// (0x0001b31f) cams2_slider_pane_g5

0xa9e4,	// (0x00019b77) cams2_slider_pane_g6

0xc194,	// (0x0001b327) cams2_slider_pane_g7

0xc3c0,	// (0x0001b553) camera2_autofocus_pane_cp_g1

0xbe99,	// (0x0001b02c) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe99,	// (0x0001b02c) bg_popup_preview_window_pane_cp02

0xc70d,	// (0x0001b8a0) list_fp_cale_pane_ParamLimits

0xc70d,	// (0x0001b8a0) list_fp_cale_pane

0xc719,	// (0x0001b8ac) popup_fixed_preview_cale_window_t1_ParamLimits

0xc719,	// (0x0001b8ac) popup_fixed_preview_cale_window_t1

0x49c5,	// (0x00013b58) popup_fixed_preview_cale_window_t2_ParamLimits

0x49c5,	// (0x00013b58) popup_fixed_preview_cale_window_t2

0x49da,	// (0x00013b6d) popup_fixed_preview_cale_window_t3_ParamLimits

0x49da,	// (0x00013b6d) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0001e922) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0001e922) popup_fixed_preview_cale_window_t

0x49ef,	// (0x00013b82) list_single_fp_cale_pane_ParamLimits

0x49ef,	// (0x00013b82) list_single_fp_cale_pane

0xc737,	// (0x0001b8ca) list_single_fp_cale_pane_g1_ParamLimits

0xc737,	// (0x0001b8ca) list_single_fp_cale_pane_g1

0xc743,	// (0x0001b8d6) list_single_fp_cale_pane_g2_ParamLimits

0xc743,	// (0x0001b8d6) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0001e929) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0001e929) list_single_fp_cale_pane_g

0xc75c,	// (0x0001b8ef) list_single_fp_cale_pane_t1_ParamLimits

0xc75c,	// (0x0001b8ef) list_single_fp_cale_pane_t1

0xc76e,	// (0x0001b901) list_single_fp_cale_pane_t2_ParamLimits

0xc76e,	// (0x0001b901) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0001e930) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0001e930) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94b4,	// (0x00018647) main_dialer_pane

0x4a04,	// (0x00013b97) aid_cell_size_keypad

0x4a0e,	// (0x00013ba1) dialer_ne_pane

0x4a16,	// (0x00013ba9) grid_dialer_command_1_pane

0x4a1e,	// (0x00013bb1) grid_dialer_command_2_pane

0x4a26,	// (0x00013bb9) grid_dialer_keypad_pane

0x4a38,	// (0x00013bcb) bg_popup_call_pane_cp06_ParamLimits

0x4a38,	// (0x00013bcb) bg_popup_call_pane_cp06

0x4a44,	// (0x00013bd7) dialer_ne_clear_pane_ParamLimits

0x4a44,	// (0x00013bd7) dialer_ne_clear_pane

0xc7a1,	// (0x0001b934) dialer_ne_pane_g1

0xc7a9,	// (0x0001b93c) dialer_ne_pane_t1_ParamLimits

0xc7a9,	// (0x0001b93c) dialer_ne_pane_t1

0x4a50,	// (0x00013be3) dialer_ne_pane_t2_ParamLimits

0x4a50,	// (0x00013be3) dialer_ne_pane_t2

0x4a7a,	// (0x00013c0d) dialer_ne_pane_t3_ParamLimits

0x4a7a,	// (0x00013c0d) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0001e935) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0001e935) dialer_ne_pane_t

0x4aaa,	// (0x00013c3d) dialer_ne_pane_t3_copy1_ParamLimits

0x4aaa,	// (0x00013c3d) dialer_ne_pane_t3_copy1

0x4ad9,	// (0x00013c6c) cell_dialer_keypad_pane_ParamLimits

0x4ad9,	// (0x00013c6c) cell_dialer_keypad_pane

0x4af0,	// (0x00013c83) cell_dialer_command_1_pane_ParamLimits

0x4af0,	// (0x00013c83) cell_dialer_command_1_pane

0x4b06,	// (0x00013c99) cell_dialer_command_2_pane_ParamLimits

0x4b06,	// (0x00013c99) cell_dialer_command_2_pane

0xc7bb,	// (0x0001b94e) bg_button_pane_cp02_ParamLimits

0xc7bb,	// (0x0001b94e) bg_button_pane_cp02

0x4b15,	// (0x00013ca8) cell_dialer_keypad_pane_g1_ParamLimits

0x4b15,	// (0x00013ca8) cell_dialer_keypad_pane_g1

0xc7bb,	// (0x0001b94e) bg_button_pane_cp03_ParamLimits

0xc7bb,	// (0x0001b94e) bg_button_pane_cp03

0x4b29,	// (0x00013cbc) cell_dialer_command_1_pane_g1_ParamLimits

0x4b29,	// (0x00013cbc) cell_dialer_command_1_pane_g1

0xc7c7,	// (0x0001b95a) bg_button_pane_cp04

0x4b3d,	// (0x00013cd0) cell_dialer_command_2_pane_g1

0x9ec1,	// (0x00019054) bg_button_pane_cp06

0xc7cf,	// (0x0001b962) dialer_ne_clear_pane_g1

0xa8ae,	// (0x00019a41) navi_pane_g2

0xa8dc,	// (0x00019a6f) navi_pane_g3

0x0002,

0xf3ca,	// (0x0001e55d) navi_pane_g

0xa96b,	// (0x00019afe) navi_pane_mv_g2

0xa992,	// (0x00019b25) navi_pane_mv_g5

0x25ac,	// (0x0001173f) navi_pane_mv_t1

0x9c87,	// (0x00018e1a) main_clock2_pane

0x9524,	// (0x000186b7) main_clock2_list_pane_ParamLimits

0x9524,	// (0x000186b7) main_clock2_list_pane

0x4bae,	// (0x00013d41) main_clock2_pane_t1_ParamLimits

0x4bae,	// (0x00013d41) main_clock2_pane_t1

0x4be9,	// (0x00013d7c) main_clock2_pane_t2_ParamLimits

0x4be9,	// (0x00013d7c) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0001e941) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0001e941) main_clock2_pane_t

0x4c89,	// (0x00013e1c) popup_clock_analogue_window_cp03_ParamLimits

0x4c89,	// (0x00013e1c) popup_clock_analogue_window_cp03

0x4cae,	// (0x00013e41) popup_clock_digital_window_cp02_ParamLimits

0x4cae,	// (0x00013e41) popup_clock_digital_window_cp02

0x4d27,	// (0x00013eba) main_clock2_list_single_pane_ParamLimits

0x4d27,	// (0x00013eba) main_clock2_list_single_pane

0x9ec1,	// (0x00019054) list_highlight_pane_cp05

0xc80d,	// (0x0001b9a0) main_clock2_list_single_pane_t1

0x12e7,	// (0x0001047a) popup_toolbar_window_cp04_ParamLimits

0x4116,	// (0x000132a9) camera2_autofocus_pane_g2_ParamLimits

0x4116,	// (0x000132a9) camera2_autofocus_pane_g2

0x4122,	// (0x000132b5) camera2_autofocus_pane_g3_ParamLimits

0x4122,	// (0x000132b5) camera2_autofocus_pane_g3

0x412e,	// (0x000132c1) camera2_autofocus_pane_g4_ParamLimits

0x412e,	// (0x000132c1) camera2_autofocus_pane_g4

0x413a,	// (0x000132cd) camera2_autofocus_pane_g5_ParamLimits

0x413a,	// (0x000132cd) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0001e885) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0001e885) camera2_autofocus_pane_g

0xc694,	// (0x0001b827) camera2_autofocus_pane_cp_g2

0xc69c,	// (0x0001b82f) camera2_autofocus_pane_cp_g3

0xc6a4,	// (0x0001b837) camera2_autofocus_pane_cp_g4

0xc6ac,	// (0x0001b83f) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0001e8eb) camera2_autofocus_pane_cp_g

0x4a30,	// (0x00013bc3) popup_dialer_spcha_window

0x94b4,	// (0x00018647) bg_popup_sub_pane_cp07

0xc81b,	// (0x0001b9ae) list_spcha_pane

0xc823,	// (0x0001b9b6) list_single_spcha_pane_ParamLimits

0xc823,	// (0x0001b9b6) list_single_spcha_pane

0x94b4,	// (0x00018647) list_highlight_pane_cp06

0xc834,	// (0x0001b9c7) list_single_spcha_pane_t1

0xb8e2,	// (0x0001aa75) popup_call2_audio_out_window_g4_ParamLimits

0xb8e2,	// (0x0001aa75) popup_call2_audio_out_window_g4

0x94b4,	// (0x00018647) main_imed2_pane

0xbecd,	// (0x0001b060) popup_imed_adjust2_window

0x34f7,	// (0x0001268a) popup_imed_trans_window_ParamLimits

0x34f7,	// (0x0001268a) popup_imed_trans_window

0xc1fe,	// (0x0001b391) popup_blid_sat_info2_window_t1

0xc20c,	// (0x0001b39f) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0001e81a) popup_blid_sat_info2_window_t

0x4dd8,	// (0x00013f6b) aid_size_cell_colour_35

0x4df8,	// (0x00013f8b) aid_size_cell_colour_112

0x4e18,	// (0x00013fab) aid_size_cell_effect

0xbea5,	// (0x0001b038) bg_tb_trans_pane_cp02

0xa39a,	// (0x0001952d) heading_imed_pane

0x4e38,	// (0x00013fcb) listscroll_imed_pane

0xc842,	// (0x0001b9d5) heading_imed_pane_g1

0xc84a,	// (0x0001b9dd) heading_imed_pane_t1

0xc858,	// (0x0001b9eb) grid_imed_colour_35_pane_ParamLimits

0xc858,	// (0x0001b9eb) grid_imed_colour_35_pane

0x4e44,	// (0x00013fd7) grid_imed_effect_pane

0xc86f,	// (0x0001ba02) list_imed_aspect_pane

0x4e5a,	// (0x00013fed) scroll_pane_cp027_ParamLimits

0x4e5a,	// (0x00013fed) scroll_pane_cp027

0x4e6b,	// (0x00013ffe) cell_imed_effect_pane_ParamLimits

0x4e6b,	// (0x00013ffe) cell_imed_effect_pane

0xc877,	// (0x0001ba0a) cell_imed_colour_pane_ParamLimits

0xc877,	// (0x0001ba0a) cell_imed_colour_pane

0xc8b9,	// (0x0001ba4c) cell_imed_colour_pane_g1_ParamLimits

0xc8b9,	// (0x0001ba4c) cell_imed_colour_pane_g1

0xc8ca,	// (0x0001ba5d) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8ca,	// (0x0001ba5d) hgihlgiht_grid_pane_cp016

0x4e92,	// (0x00014025) cell_imed_effect_pane_g1

0x4e9a,	// (0x0001402d) grid_highlight_pane_cp017

0xc8db,	// (0x0001ba6e) list_imed_single_pane_ParamLimits

0xc8db,	// (0x0001ba6e) list_imed_single_pane

0x94b4,	// (0x00018647) list_highlight_pane_cp07

0xc8f0,	// (0x0001ba83) list_imed_aspect_pane_comp1_t1

0xbea5,	// (0x0001b038) bg_tb_trans_pane_cp05

0xc912,	// (0x0001baa5) popup_imed_adjust2_window_g1

0xc939,	// (0x0001bacc) popup_imed_adjust2_window_t1

0xc951,	// (0x0001bae4) slider_imed_adjust_pane

0xc965,	// (0x0001baf8) slider_imed_adjust_pane_g1

0xc975,	// (0x0001bb08) slider_imed_adjust_pane_g2

0xc985,	// (0x0001bb18) slider_imed_adjust_pane_g3

0xc996,	// (0x0001bb29) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0001e95e) slider_imed_adjust_pane_g

0x4ea3,	// (0x00014036) aid_size_cell_clipart2

0x4eaf,	// (0x00014042) grid_imed_clipart_pane

0xc9a7,	// (0x0001bb3a) scroll_pane_cp031

0x4eb9,	// (0x0001404c) cell_imed_clipart_pane_ParamLimits

0x4eb9,	// (0x0001404c) cell_imed_clipart_pane

0x4edb,	// (0x0001406e) cell_imed_clipart_pane_g1

0x94b4,	// (0x00018647) grid_highlight_pane_cp014

0x4b8a,	// (0x00013d1d) main_clock2_pane_g1_ParamLimits

0x4b8a,	// (0x00013d1d) main_clock2_pane_g1

0x4cce,	// (0x00013e61) aid_call2_pane_cp10

0x4ce0,	// (0x00013e73) aid_call_pane_cp10

0xa80f,	// (0x000199a2) popup_clock_analogue_window_cp10_g1

0xa80f,	// (0x000199a2) popup_clock_analogue_window_cp10_g2

0x4cf2,	// (0x00013e85) popup_clock_analogue_window_cp10_g3

0x4cf2,	// (0x00013e85) popup_clock_analogue_window_cp10_g4

0xa80f,	// (0x000199a2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0001e94c) popup_clock_analogue_window_cp10_g

0x4d08,	// (0x00013e9b) popup_clock_analogue_window_cp10_t1

0x4d39,	// (0x00013ecc) clock_digital_number_pane_cp10_ParamLimits

0x4d39,	// (0x00013ecc) clock_digital_number_pane_cp10

0x4d51,	// (0x00013ee4) clock_digital_number_pane_cp11_ParamLimits

0x4d51,	// (0x00013ee4) clock_digital_number_pane_cp11

0x4d69,	// (0x00013efc) clock_digital_number_pane_cp12_ParamLimits

0x4d69,	// (0x00013efc) clock_digital_number_pane_cp12

0x4d83,	// (0x00013f16) clock_digital_number_pane_cp13_ParamLimits

0x4d83,	// (0x00013f16) clock_digital_number_pane_cp13

0x4d9d,	// (0x00013f30) clock_digital_separator_pane_cp10_ParamLimits

0x4d9d,	// (0x00013f30) clock_digital_separator_pane_cp10

0x4db7,	// (0x00013f4a) popup_clock_digital_window_cp02_t1_ParamLimits

0x4db7,	// (0x00013f4a) popup_clock_digital_window_cp02_t1

0x9b98,	// (0x00018d2b) clock_digital_number_pane_cp10_g1

0x9b98,	// (0x00018d2b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0001e967) clock_digital_number_pane_cp10_g

0x9b98,	// (0x00018d2b) clock_digital_separator_pane_cp10_g1

0x9b98,	// (0x00018d2b) clock_digital_separator_pane_g2_cp10

0xa99a,	// (0x00019b2d) navi_pane_vded_g4

0xa9a3,	// (0x00019b36) navi_pane_vded_g5

0xa9ac,	// (0x00019b3f) navi_pane_vded_t1

0x94b4,	// (0x00018647) main_vded_pane

0x4ee4,	// (0x00014077) main_vded_pane_g1

0x4eee,	// (0x00014081) main_vded_pane_g2

0x4ef8,	// (0x0001408b) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0001e96c) main_vded_pane_g

0x4f02,	// (0x00014095) main_vded_pane_t1

0x4f10,	// (0x000140a3) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0001e973) main_vded_pane_t

0x4f1e,	// (0x000140b1) vded_slider_pane

0x4f26,	// (0x000140b9) vded_video_pane

0xc9af,	// (0x0001bb42) vded_video_pane_g1

0x4f2e,	// (0x000140c1) vded_video_pane_g2

0xc3c0,	// (0x0001b553) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0001e978) vded_video_pane_g

0xc9b9,	// (0x0001bb4c) vded_slider_pane_g1

0xc0cf,	// (0x0001b262) vded_slider_pane_g2

0xc9c2,	// (0x0001bb55) vded_slider_pane_g3

0xc9cb,	// (0x0001bb5e) vded_slider_pane_g4

0xc9d4,	// (0x0001bb67) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0001e97f) vded_slider_pane_g

0x4911,	// (0x00013aa4) mup3_rocker_pane_ParamLimits

0x4911,	// (0x00013aa4) mup3_rocker_pane

0x4f37,	// (0x000140ca) mup3_control_keys_pane_g1

0x4f3f,	// (0x000140d2) mup3_control_keys_pane_g2

0x4f47,	// (0x000140da) mup3_control_keys_pane_g3

0x4f4f,	// (0x000140e2) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0001e98a) mup3_control_keys_pane_g

0x0288,	// (0x0000f41b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0288,	// (0x0000f41b) popup_toolbar2_fixed_window_cp01

0x4945,	// (0x00013ad8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4945,	// (0x00013ad8) popup_toolbar2_fixed_window_cp02

0xb221,	// (0x0001a3b4) popup_call2_audio_second_window_t4_ParamLimits

0xb221,	// (0x0001a3b4) popup_call2_audio_second_window_t4

0xb74f,	// (0x0001a8e2) popup_call2_audio_first_window_t6_ParamLimits

0xb74f,	// (0x0001a8e2) popup_call2_audio_first_window_t6

0xb9e5,	// (0x0001ab78) popup_call2_audio_out_window_t6_ParamLimits

0xb9e5,	// (0x0001ab78) popup_call2_audio_out_window_t6

0x94b4,	// (0x00018647) main_vitu_pane

0x4f5f,	// (0x000140f2) aid_size_cell_itu_ParamLimits

0x4f5f,	// (0x000140f2) aid_size_cell_itu

0x9524,	// (0x000186b7) bg_popup_window_pane_cp08_ParamLimits

0x9524,	// (0x000186b7) bg_popup_window_pane_cp08

0x4f75,	// (0x00014108) field_vitu_entry_pane_ParamLimits

0x4f75,	// (0x00014108) field_vitu_entry_pane

0x4f8c,	// (0x0001411f) grid_vitu_function_pane_ParamLimits

0x4f8c,	// (0x0001411f) grid_vitu_function_pane

0x4fa7,	// (0x0001413a) grid_vitu_itu_pane_ParamLimits

0x4fa7,	// (0x0001413a) grid_vitu_itu_pane

0x4fc5,	// (0x00014158) cell_vitu_itu_pane_ParamLimits

0x4fc5,	// (0x00014158) cell_vitu_itu_pane

0x4fe7,	// (0x0001417a) cell_vitu_function_pane_ParamLimits

0x4fe7,	// (0x0001417a) cell_vitu_function_pane

0x9524,	// (0x000186b7) bg_popup_sub_pane_cp08_ParamLimits

0x9524,	// (0x000186b7) bg_popup_sub_pane_cp08

0x5000,	// (0x00014193) field_vitu_entry_pane_t1_ParamLimits

0x5000,	// (0x00014193) field_vitu_entry_pane_t1

0xc9f5,	// (0x0001bb88) field_vitu_entry_pane_t2_ParamLimits

0xc9f5,	// (0x0001bb88) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0001e998) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0001e998) field_vitu_entry_pane_t

0xca12,	// (0x0001bba5) bg_button_pane_cp05_ParamLimits

0xca12,	// (0x0001bba5) bg_button_pane_cp05

0x501e,	// (0x000141b1) cell_vitu_itu_pane_g1

0x5036,	// (0x000141c9) cell_vitu_itu_pane_t1_ParamLimits

0x5036,	// (0x000141c9) cell_vitu_itu_pane_t1

0x5048,	// (0x000141db) cell_vitu_itu_pane_t2_ParamLimits

0x5048,	// (0x000141db) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0001e99d) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0001e99d) cell_vitu_itu_pane_t

0xca20,	// (0x0001bbb3) bg_button_pane_cp07

0x507d,	// (0x00014210) cell_vitu_function_pane_g1

0x9c27,	// (0x00018dba) main_calc_pane_g1

0x00af,	// (0x0000f242) aid_visual_content_pane

0x94b4,	// (0x00018647) main_vradio_pane

0x5086,	// (0x00014219) main_vradio_pane_g1_ParamLimits

0x5086,	// (0x00014219) main_vradio_pane_g1

0xca2a,	// (0x0001bbbd) main_vradio_pane_g2_ParamLimits

0xca2a,	// (0x0001bbbd) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0001e9a4) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0001e9a4) main_vradio_pane_g

0x509f,	// (0x00014232) main_vradio_pane_t1_ParamLimits

0x509f,	// (0x00014232) main_vradio_pane_t1

0x50b4,	// (0x00014247) main_vradio_pane_t2_ParamLimits

0x50b4,	// (0x00014247) main_vradio_pane_t2

0xca37,	// (0x0001bbca) main_vradio_pane_t3_ParamLimits

0xca37,	// (0x0001bbca) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0001e9a9) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0001e9a9) main_vradio_pane_t

0x50c9,	// (0x0001425c) vradio_rocker_control_pane_ParamLimits

0x50c9,	// (0x0001425c) vradio_rocker_control_pane

0x50db,	// (0x0001426e) vradio_station_info_pane_ParamLimits

0x50db,	// (0x0001426e) vradio_station_info_pane

0xca4b,	// (0x0001bbde) vradio_frequency_info_pane_ParamLimits

0xca4b,	// (0x0001bbde) vradio_frequency_info_pane

0xc3c0,	// (0x0001b553) vradio_station_info_pane_g1

0xca5a,	// (0x0001bbed) vradio_station_info_pane_t1_ParamLimits

0xca5a,	// (0x0001bbed) vradio_station_info_pane_t1

0xca7c,	// (0x0001bc0f) vradio_station_info_pane_t2_ParamLimits

0xca7c,	// (0x0001bc0f) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0001e9b0) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0001e9b0) vradio_station_info_pane_t

0xca8e,	// (0x0001bc21) vradio_tuning_pane

0xca96,	// (0x0001bc29) vradio_rocker_control_pane_g1

0xca9e,	// (0x0001bc31) vradio_rocker_control_pane_g2

0xcaa6,	// (0x0001bc39) vradio_rocker_control_pane_g3

0xcaae,	// (0x0001bc41) vradio_rocker_control_pane_g4

0xcab6,	// (0x0001bc49) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0001e9b5) vradio_rocker_control_pane_g

0x50ed,	// (0x00014280) vradio_frequency_info_pane_g1

0xcabe,	// (0x0001bc51) vradio_frequency_info_pane_t1_ParamLimits

0xcabe,	// (0x0001bc51) vradio_frequency_info_pane_t1

0x50f7,	// (0x0001428a) vradio_tuning_pane_g1

0x5102,	// (0x00014295) vradio_tuning_pane_t1

0x94e2,	// (0x00018675) area_side_right_pane_ParamLimits

0x94e2,	// (0x00018675) area_side_right_pane

0xbe60,	// (0x0001aff3) status_small_pane_g1

0xbe68,	// (0x0001affb) status_small_pane_g2

0xbe71,	// (0x0001b004) status_small_pane_g3

0xbe7a,	// (0x0001b00d) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0001e770) status_small_pane_g

0xbe83,	// (0x0001b016) status_small_pane_t1

0x94b4,	// (0x00018647) main_video3_pane

0xcad2,	// (0x0001bc65) cams_zoom_vslider_pane

0xcada,	// (0x0001bc6d) image3_wide_pane_ParamLimits

0xcada,	// (0x0001bc6d) image3_wide_pane

0xcaf4,	// (0x0001bc87) image3_wide_small_pane

0xcb00,	// (0x0001bc93) main_video3_pane_g1_ParamLimits

0xcb00,	// (0x0001bc93) main_video3_pane_g1

0xcb1c,	// (0x0001bcaf) main_video3_pane_g2_ParamLimits

0xcb1c,	// (0x0001bcaf) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0001e9c0) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0001e9c0) main_video3_pane_g

0xcb38,	// (0x0001bccb) main_video3_pane_t1_ParamLimits

0xcb38,	// (0x0001bccb) main_video3_pane_t1

0xcb63,	// (0x0001bcf6) main_video3_pane_t2_ParamLimits

0xcb63,	// (0x0001bcf6) main_video3_pane_t2

0xcb8e,	// (0x0001bd21) main_video3_pane_t3_ParamLimits

0xcb8e,	// (0x0001bd21) main_video3_pane_t3

0x0002,

0xf832,	// (0x0001e9c5) main_video3_pane_t_ParamLimits

0xf832,	// (0x0001e9c5) main_video3_pane_t

0xcbbb,	// (0x0001bd4e) cams_zoom_vslider_pane_g1

0xcbc4,	// (0x0001bd57) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0001e9cc) cams_zoom_vslider_pane_g

0xcbcc,	// (0x0001bd5f) small_slider_vertical_pane

0xc3c0,	// (0x0001b553) small_slider_vertical_pane_g1

0xc3c0,	// (0x0001b553) small_slider_vertical_pane_g2

0xcbd4,	// (0x0001bd67) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0001e9d1) small_slider_vertical_pane_g

0x94b4,	// (0x00018647) main_hwr_training_pane

0xcbdd,	// (0x0001bd70) hwr_training_instruct_pane_ParamLimits

0xcbdd,	// (0x0001bd70) hwr_training_instruct_pane

0x5111,	// (0x000142a4) hwr_training_navi_pane_ParamLimits

0x5111,	// (0x000142a4) hwr_training_navi_pane

0x5130,	// (0x000142c3) hwr_training_write_pane_ParamLimits

0x5130,	// (0x000142c3) hwr_training_write_pane

0x94b4,	// (0x00018647) bg_frame_shadow_pane

0xcc14,	// (0x0001bda7) hwr_training_write_pane_g1

0xcc1c,	// (0x0001bdaf) hwr_training_write_pane_g2

0xcc24,	// (0x0001bdb7) hwr_training_write_pane_g3

0xcc2c,	// (0x0001bdbf) hwr_training_write_pane_g4

0xcc34,	// (0x0001bdc7) hwr_training_write_pane_g5

0xcc3c,	// (0x0001bdcf) hwr_training_write_pane_g6

0xcc44,	// (0x0001bdd7) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0001e9d8) hwr_training_write_pane_g

0xcc4c,	// (0x0001bddf) hwr_training_navi_pane_g1_ParamLimits

0xcc4c,	// (0x0001bddf) hwr_training_navi_pane_g1

0xcc5e,	// (0x0001bdf1) hwr_training_navi_pane_g2_ParamLimits

0xcc5e,	// (0x0001bdf1) hwr_training_navi_pane_g2

0xcc70,	// (0x0001be03) hwr_training_navi_pane_g3_ParamLimits

0xcc70,	// (0x0001be03) hwr_training_navi_pane_g3

0xcc80,	// (0x0001be13) hwr_training_navi_pane_g4_ParamLimits

0xcc80,	// (0x0001be13) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0001e9e7) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0001e9e7) hwr_training_navi_pane_g

0xcc8d,	// (0x0001be20) hwr_training_navi_pane_t1

0x5178,	// (0x0001430b) list_single_hwr_training_instruct_pane_ParamLimits

0x5178,	// (0x0001430b) list_single_hwr_training_instruct_pane

0xcc9b,	// (0x0001be2e) list_single_hwr_training_instruct_pane_t1

0xc300,	// (0x0001b493) bg_frame_shadow_pane_g1

0xccaa,	// (0x0001be3d) bg_frame_shadow_pane_g2

0xccb2,	// (0x0001be45) bg_frame_shadow_pane_g3

0xccba,	// (0x0001be4d) bg_frame_shadow_pane_g4

0xccc2,	// (0x0001be55) bg_frame_shadow_pane_g5

0xccca,	// (0x0001be5d) bg_frame_shadow_pane_g6

0xccd2,	// (0x0001be65) bg_frame_shadow_pane_g7

0x9d6d,	// (0x00018f00) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0001e9f2) bg_frame_shadow_pane_g

0x94b4,	// (0x00018647) main_video_tele_dialer_pane

0x518d,	// (0x00014320) aid_size_cell_video_keypad_ParamLimits

0x518d,	// (0x00014320) aid_size_cell_video_keypad

0x51a7,	// (0x0001433a) grid_video_dialer_keypad_pane_ParamLimits

0x51a7,	// (0x0001433a) grid_video_dialer_keypad_pane

0x51f3,	// (0x00014386) video_down_pane_cp_ParamLimits

0x51f3,	// (0x00014386) video_down_pane_cp

0x5225,	// (0x000143b8) cell_video_dialer_keypad_pane_ParamLimits

0x5225,	// (0x000143b8) cell_video_dialer_keypad_pane

0xccda,	// (0x0001be6d) bg_button_pane_cp08_ParamLimits

0xccda,	// (0x0001be6d) bg_button_pane_cp08

0x5247,	// (0x000143da) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5247,	// (0x000143da) cell_video_dialer_keypad_pane_g1

0x48fb,	// (0x00013a8e) mup3_rocker2_pane_ParamLimits

0x48fb,	// (0x00013a8e) mup3_rocker2_pane

0xc3c0,	// (0x0001b553) mup3_rocker2_pane_g1

0x33d8,	// (0x0001256b) main_dialer2_pane

0x94b4,	// (0x00018647) main_mp4_pane

0xcd04,	// (0x0001be97) main_mp4_pane_g1_ParamLimits

0xcd04,	// (0x0001be97) main_mp4_pane_g1

0xcd04,	// (0x0001be97) main_mp4_pane_g2_ParamLimits

0xcd04,	// (0x0001be97) main_mp4_pane_g2

0x527e,	// (0x00014411) main_mp4_pane_g3_ParamLimits

0x527e,	// (0x00014411) main_mp4_pane_g3

0xcd12,	// (0x0001bea5) main_mp4_pane_g4_ParamLimits

0xcd12,	// (0x0001bea5) main_mp4_pane_g4

0xcd40,	// (0x0001bed3) main_mp4_pane_g5_ParamLimits

0xcd40,	// (0x0001bed3) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0001ea12) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0001ea12) main_mp4_pane_g

0xcdb4,	// (0x0001bf47) main_mp4_pane_t1_ParamLimits

0xcdb4,	// (0x0001bf47) main_mp4_pane_t1

0xce10,	// (0x0001bfa3) main_mp4_pane_t2_ParamLimits

0xce10,	// (0x0001bfa3) main_mp4_pane_t2

0xce62,	// (0x0001bff5) main_mp4_pane_t3_ParamLimits

0xce62,	// (0x0001bff5) main_mp4_pane_t3

0xce88,	// (0x0001c01b) main_mp4_pane_t4_ParamLimits

0xce88,	// (0x0001c01b) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0001ea23) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0001ea23) main_mp4_pane_t

0xcecc,	// (0x0001c05f) mp4_progress_pane_ParamLimits

0xcecc,	// (0x0001c05f) mp4_progress_pane

0xcf16,	// (0x0001c0a9) mp4_rocker_pane_ParamLimits

0xcf16,	// (0x0001c0a9) mp4_rocker_pane

0xcf3e,	// (0x0001c0d1) mp4_progress_pane_t1

0xcf57,	// (0x0001c0ea) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0001ea2c) mp4_progress_pane_t

0xcf70,	// (0x0001c103) mup_progress_pane_cp04

0xc3c0,	// (0x0001b553) mp4_rocker_pane_g1

0x52ba,	// (0x0001444d) aid_cell_size_keypad2_ParamLimits

0x52ba,	// (0x0001444d) aid_cell_size_keypad2

0x52d0,	// (0x00014463) dialer2_ne_pane_ParamLimits

0x52d0,	// (0x00014463) dialer2_ne_pane

0x52ea,	// (0x0001447d) grid_dialer2_keypad_pane_ParamLimits

0x52ea,	// (0x0001447d) grid_dialer2_keypad_pane

0xc1a5,	// (0x0001b338) bg_popup_call_pane_cp07_ParamLimits

0xc1a5,	// (0x0001b338) bg_popup_call_pane_cp07

0x5306,	// (0x00014499) dialer2_ne_pane_t1_ParamLimits

0x5306,	// (0x00014499) dialer2_ne_pane_t1

0x5341,	// (0x000144d4) cell_dialer2_keypad_pane_ParamLimits

0x5341,	// (0x000144d4) cell_dialer2_keypad_pane

0xcf95,	// (0x0001c128) bg_button_pane_pane_cp04_ParamLimits

0xcf95,	// (0x0001c128) bg_button_pane_pane_cp04

0x5363,	// (0x000144f6) cell_dialer2_keypad_pane_g1_ParamLimits

0x5363,	// (0x000144f6) cell_dialer2_keypad_pane_g1

0x11bb,	// (0x0001034e) aid_placing_vt_set_content_ParamLimits

0x11bb,	// (0x0001034e) aid_placing_vt_set_content

0x11e3,	// (0x00010376) aid_placing_vt_set_title_ParamLimits

0x11e3,	// (0x00010376) aid_placing_vt_set_title

0x94b4,	// (0x00018647) main_image3_pane

0x5429,	// (0x000145bc) area_side_right_pane_cp01_ParamLimits

0x5429,	// (0x000145bc) area_side_right_pane_cp01

0xcd04,	// (0x0001be97) main_image3_pane_g1_ParamLimits

0xcd04,	// (0x0001be97) main_image3_pane_g1

0x5440,	// (0x000145d3) main_image3_pane_g2_ParamLimits

0x5440,	// (0x000145d3) main_image3_pane_g2

0x5468,	// (0x000145fb) main_image3_pane_g3_ParamLimits

0x5468,	// (0x000145fb) main_image3_pane_g3

0x5492,	// (0x00014625) main_image3_pane_g4_ParamLimits

0x5492,	// (0x00014625) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0001ea3b) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0001ea3b) main_image3_pane_g

0x54bc,	// (0x0001464f) main_image3_pane_t1_ParamLimits

0x54bc,	// (0x0001464f) main_image3_pane_t1

0x5514,	// (0x000146a7) main_image3_pane_t2_ParamLimits

0x5514,	// (0x000146a7) main_image3_pane_t2

0x5566,	// (0x000146f9) main_image3_pane_t3_ParamLimits

0x5566,	// (0x000146f9) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0001ea44) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0001ea44) main_image3_pane_t

0x9524,	// (0x000186b7) grid_sctrl_middle_pane_cp01_ParamLimits

0x9524,	// (0x000186b7) grid_sctrl_middle_pane_cp01

0x55ee,	// (0x00014781) cell_sctrl_middle_pane_cp01_ParamLimits

0x55ee,	// (0x00014781) cell_sctrl_middle_pane_cp01

0x560b,	// (0x0001479e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x560b,	// (0x0001479e) cell_sctrl_middle_pane_cp01_g1

0x94b4,	// (0x00018647) main_call4_pane

0x5621,	// (0x000147b4) aid_size_button_call4_ParamLimits

0x5621,	// (0x000147b4) aid_size_button_call4

0x5654,	// (0x000147e7) call4_windows_pane_ParamLimits

0x5654,	// (0x000147e7) call4_windows_pane

0x5673,	// (0x00014806) grid_call4_button_pane_ParamLimits

0x5673,	// (0x00014806) grid_call4_button_pane

0x56a6,	// (0x00014839) call4_windows_conf_pane

0x56bd,	// (0x00014850) popup_call4_audio_first_window_ParamLimits

0x56bd,	// (0x00014850) popup_call4_audio_first_window

0x570d,	// (0x000148a0) popup_call4_audio_second_window_ParamLimits

0x570d,	// (0x000148a0) popup_call4_audio_second_window

0x5724,	// (0x000148b7) popup_call4_audio_wait_window_ParamLimits

0x5724,	// (0x000148b7) popup_call4_audio_wait_window

0x5732,	// (0x000148c5) cell_call4_button_pane_ParamLimits

0x5732,	// (0x000148c5) cell_call4_button_pane

0x5757,	// (0x000148ea) bg_button_pane_cp09_ParamLimits

0x5757,	// (0x000148ea) bg_button_pane_cp09

0x5763,	// (0x000148f6) cell_call4_button_pane_g1_ParamLimits

0x5763,	// (0x000148f6) cell_call4_button_pane_g1

0x5789,	// (0x0001491c) cell_call4_button_pane_t1_ParamLimits

0x5789,	// (0x0001491c) cell_call4_button_pane_t1

0xd00d,	// (0x0001c1a0) popup_call4_audio_conf_window_ParamLimits

0xd00d,	// (0x0001c1a0) popup_call4_audio_conf_window

0x495b,	// (0x00013aee) mup3_progress_pane_t1_ParamLimits

0x497a,	// (0x00013b0d) mup3_progress_pane_t2_ParamLimits

0xc6ca,	// (0x0001b85d) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0001e914) mup3_progress_pane_t_ParamLimits

0xc6e7,	// (0x0001b87a) mup_progress_pane_cp03_ParamLimits

0x4f57,	// (0x000140ea) mup3_control_keys_pane_g4_copy1

0xcefa,	// (0x0001c08d) mp4_rocker2_pane_ParamLimits

0xcefa,	// (0x0001c08d) mp4_rocker2_pane

0xd021,	// (0x0001c1b4) mp4_rocker2_pane_g1

0xd029,	// (0x0001c1bc) mp4_rocker2_pane_g2

0xd031,	// (0x0001c1c4) mp4_rocker2_pane_g3

0xd039,	// (0x0001c1cc) mp4_rocker2_pane_g4

0xd041,	// (0x0001c1d4) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0001ea4d) mp4_rocker2_pane_g

0x94b4,	// (0x00018647) main_camera4_pane

0x94b4,	// (0x00018647) main_video4_pane

0x51c1,	// (0x00014354) main_video_tele_dialer_pane_t1_ParamLimits

0x51c1,	// (0x00014354) main_video_tele_dialer_pane_t1

0x51da,	// (0x0001436d) main_video_tele_dialer_pane_t2_ParamLimits

0x51da,	// (0x0001436d) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0001ea03) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0001ea03) main_video_tele_dialer_pane_t

0x57c7,	// (0x0001495a) cam4_autofocus_pane_ParamLimits

0x57c7,	// (0x0001495a) cam4_autofocus_pane

0x57dd,	// (0x00014970) cam4_image_uncrop_pane_ParamLimits

0x57dd,	// (0x00014970) cam4_image_uncrop_pane

0x57f7,	// (0x0001498a) cam4_indicators_pane_ParamLimits

0x57f7,	// (0x0001498a) cam4_indicators_pane

0x5822,	// (0x000149b5) main_camera4_pane_g1_ParamLimits

0x5822,	// (0x000149b5) main_camera4_pane_g1

0x5834,	// (0x000149c7) main_camera4_pane_g2_ParamLimits

0x5834,	// (0x000149c7) main_camera4_pane_g2

0x5847,	// (0x000149da) main_camera4_pane_g3_ParamLimits

0x5847,	// (0x000149da) main_camera4_pane_g3

0x585a,	// (0x000149ed) main_camera4_pane_g4_ParamLimits

0x585a,	// (0x000149ed) main_camera4_pane_g4

0x586d,	// (0x00014a00) main_camera4_pane_g5_ParamLimits

0x586d,	// (0x00014a00) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0001ea58) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0001ea58) main_camera4_pane_g

0x5891,	// (0x00014a24) main_camera4_pane_t1_ParamLimits

0x5891,	// (0x00014a24) main_camera4_pane_t1

0xc623,	// (0x0001b7b6) bg_tb_trans_pane_cp06

0xd06d,	// (0x0001c200) cam4_indicators_pane_g1

0xd07e,	// (0x0001c211) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0001ea73) cam4_indicators_pane_g

0xd09c,	// (0x0001c22f) cam4_indicators_pane_t1

0x58f5,	// (0x00014a88) main_video4_pane_g1_ParamLimits

0x58f5,	// (0x00014a88) main_video4_pane_g1

0x5904,	// (0x00014a97) main_video4_pane_g2_ParamLimits

0x5904,	// (0x00014a97) main_video4_pane_g2

0x5913,	// (0x00014aa6) main_video4_pane_g3_ParamLimits

0x5913,	// (0x00014aa6) main_video4_pane_g3

0x5922,	// (0x00014ab5) main_video4_pane_g4_ParamLimits

0x5922,	// (0x00014ab5) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0001ea7a) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0001ea7a) main_video4_pane_g

0x5940,	// (0x00014ad3) vid4_indicators_pane_ParamLimits

0x5940,	// (0x00014ad3) vid4_indicators_pane

0x596e,	// (0x00014b01) video4_image_uncrop_cif_pane_ParamLimits

0x596e,	// (0x00014b01) video4_image_uncrop_cif_pane

0x5988,	// (0x00014b1b) video4_image_uncrop_nhd_pane_ParamLimits

0x5988,	// (0x00014b1b) video4_image_uncrop_nhd_pane

0x57dd,	// (0x00014970) video4_image_uncrop_vga_pane_ParamLimits

0x57dd,	// (0x00014970) video4_image_uncrop_vga_pane

0x9524,	// (0x000186b7) bg_tb_trans_pane_cp07

0xd0c8,	// (0x0001c25b) vid4_indicators_pane_g1

0xd0dc,	// (0x0001c26f) vid4_indicators_pane_g2

0xd0f0,	// (0x0001c283) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0001ea85) vid4_indicators_pane_g

0xd11f,	// (0x0001c2b2) vid4_indicators_pane_t1

0x599c,	// (0x00014b2f) cam4_autofocus_pane_g1

0x59a4,	// (0x00014b37) cam4_autofocus_pane_g2

0x59ac,	// (0x00014b3f) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0001ea90) cam4_autofocus_pane_g

0x59b4,	// (0x00014b47) cam4_autofocus_pane_g3_copy1

0x5209,	// (0x0001439c) video_down_pane_cp_t1

0x5217,	// (0x000143aa) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0001ea08) video_down_pane_cp_t

0x9524,	// (0x000186b7) popup_vitu2_window_ParamLimits

0x9524,	// (0x000186b7) popup_vitu2_window

0x59bc,	// (0x00014b4f) aid_size_cell2_itu2_ParamLimits

0x59bc,	// (0x00014b4f) aid_size_cell2_itu2

0x59e2,	// (0x00014b75) aid_size_cell_itu2_ParamLimits

0x59e2,	// (0x00014b75) aid_size_cell_itu2

0x5a3e,	// (0x00014bd1) bg_popup_window_pane_cp09_ParamLimits

0x5a3e,	// (0x00014bd1) bg_popup_window_pane_cp09

0x5a4c,	// (0x00014bdf) field_vitu2_entry_pane_ParamLimits

0x5a4c,	// (0x00014bdf) field_vitu2_entry_pane

0x5a72,	// (0x00014c05) grid_vitu2_function_pane_ParamLimits

0x5a72,	// (0x00014c05) grid_vitu2_function_pane

0x5ac3,	// (0x00014c56) grid_vitu2_itu_pane_ParamLimits

0x5ac3,	// (0x00014c56) grid_vitu2_itu_pane

0x5b5b,	// (0x00014cee) cell_vitu2_itu_pane_ParamLimits

0x5b5b,	// (0x00014cee) cell_vitu2_itu_pane

0x5b87,	// (0x00014d1a) cell_vitu2_function_pane_ParamLimits

0x5b87,	// (0x00014d1a) cell_vitu2_function_pane

0xd136,	// (0x0001c2c9) bg_popup_call_pane_cp08_ParamLimits

0xd136,	// (0x0001c2c9) bg_popup_call_pane_cp08

0xd14d,	// (0x0001c2e0) field_vitu2_entry_pane_g1

0xd159,	// (0x0001c2ec) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0001ea97) field_vitu2_entry_pane_g

0x5bc6,	// (0x00014d59) field_vitu2_entry_pane_t1_ParamLimits

0x5bc6,	// (0x00014d59) field_vitu2_entry_pane_t1

0xd173,	// (0x0001c306) field_vitu2_entry_pane_t2_ParamLimits

0xd173,	// (0x0001c306) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0001ea9e) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0001ea9e) field_vitu2_entry_pane_t

0x5bf5,	// (0x00014d88) bg_button_pane_cp010_ParamLimits

0x5bf5,	// (0x00014d88) bg_button_pane_cp010

0xd198,	// (0x0001c32b) cell_vitu2_itu_pane_g1

0x5c11,	// (0x00014da4) cell_vitu2_itu_pane_t1_ParamLimits

0x5c11,	// (0x00014da4) cell_vitu2_itu_pane_t1

0x5c6f,	// (0x00014e02) cell_vitu2_itu_pane_t2_ParamLimits

0x5c6f,	// (0x00014e02) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0001eaa8) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0001eaa8) cell_vitu2_itu_pane_t

0x9524,	// (0x000186b7) bg_button_pane_cp011

0x5d5b,	// (0x00014eee) cell_vitu2_function_pane_g1

0x94b4,	// (0x00018647) main_myfav_hc_pane

0x55b6,	// (0x00014749) popup_image3_note_pane_ParamLimits

0x55b6,	// (0x00014749) popup_image3_note_pane

0x55d2,	// (0x00014765) popup_image3_tool_bar_pane_ParamLimits

0x55d2,	// (0x00014765) popup_image3_tool_bar_pane

0x5cfd,	// (0x00014e90) cell_vitu2_itu_pane_t3_ParamLimits

0x5cfd,	// (0x00014e90) cell_vitu2_itu_pane_t3

0x94b4,	// (0x00018647) bg_popup_trans_pane

0xd1aa,	// (0x0001c33d) grid_image3_tool_bar_pane

0xd1b4,	// (0x0001c347) bg_popup_trans_pane_g1

0xa124,	// (0x000192b7) bg_popup_trans_pane_g2

0xd1bc,	// (0x0001c34f) bg_popup_trans_pane_g3

0xd1c4,	// (0x0001c357) bg_popup_trans_pane_g4

0xd1cc,	// (0x0001c35f) bg_popup_trans_pane_g5

0xd1d4,	// (0x0001c367) bg_popup_trans_pane_g6

0xd1dc,	// (0x0001c36f) bg_popup_trans_pane_g7

0xd1e4,	// (0x0001c377) bg_popup_trans_pane_g8

0xa104,	// (0x00019297) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0001eaaf) bg_popup_trans_pane_g

0xd1ec,	// (0x0001c37f) cell_image3_tool_bar_pane_ParamLimits

0xd1ec,	// (0x0001c37f) cell_image3_tool_bar_pane

0xc3c0,	// (0x0001b553) cell_image3_tool_bar_pane_g1

0x94b4,	// (0x00018647) bg_popup_trans_pane_cp1

0xd200,	// (0x0001c393) popup_image3_note_pane_t1

0xd20e,	// (0x0001c3a1) popup_image3_note_pane_t2

0xd21c,	// (0x0001c3af) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0001eac2) popup_image3_note_pane_t

0xd22a,	// (0x0001c3bd) popup_image3_note_pane_t3_copy1

0x5d6f,	// (0x00014f02) bg_myfav_hc_instruction_pane_ParamLimits

0x5d6f,	// (0x00014f02) bg_myfav_hc_instruction_pane

0x5d83,	// (0x00014f16) cell_myfav_contact_pane_ParamLimits

0x5d83,	// (0x00014f16) cell_myfav_contact_pane

0x5da1,	// (0x00014f34) cell_myfav_contact_pane_cp1_ParamLimits

0x5da1,	// (0x00014f34) cell_myfav_contact_pane_cp1

0x5db9,	// (0x00014f4c) cell_myfav_contact_pane_cp2_ParamLimits

0x5db9,	// (0x00014f4c) cell_myfav_contact_pane_cp2

0x5dd1,	// (0x00014f64) cell_myfav_contact_pane_cp3_ParamLimits

0x5dd1,	// (0x00014f64) cell_myfav_contact_pane_cp3

0x5de8,	// (0x00014f7b) cell_myfav_contact_pane_cp4_ParamLimits

0x5de8,	// (0x00014f7b) cell_myfav_contact_pane_cp4

0x5e00,	// (0x00014f93) cell_myfav_contact_pane_cp5_ParamLimits

0x5e00,	// (0x00014f93) cell_myfav_contact_pane_cp5

0x5e14,	// (0x00014fa7) cell_myfav_contact_pane_cp6_ParamLimits

0x5e14,	// (0x00014fa7) cell_myfav_contact_pane_cp6

0x5e2a,	// (0x00014fbd) cell_myfav_contact_pane_cp7_ParamLimits

0x5e2a,	// (0x00014fbd) cell_myfav_contact_pane_cp7

0xd238,	// (0x0001c3cb) listscroll_gen_pane_cp05

0x5e44,	// (0x00014fd7) main_myfav_hc_pane_g1_ParamLimits

0x5e44,	// (0x00014fd7) main_myfav_hc_pane_g1

0x5e5e,	// (0x00014ff1) main_myfav_hc_pane_g2_ParamLimits

0x5e5e,	// (0x00014ff1) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0001eac9) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0001eac9) main_myfav_hc_pane_g

0x5e90,	// (0x00015023) main_myfav_hc_pane_t1_ParamLimits

0x5e90,	// (0x00015023) main_myfav_hc_pane_t1

0xd241,	// (0x0001c3d4) main_myfav_hc_pane_t2_ParamLimits

0xd241,	// (0x0001c3d4) main_myfav_hc_pane_t2

0xd253,	// (0x0001c3e6) main_myfav_hc_pane_t3_ParamLimits

0xd253,	// (0x0001c3e6) main_myfav_hc_pane_t3

0x5ea7,	// (0x0001503a) main_myfav_hc_pane_t4_ParamLimits

0x5ea7,	// (0x0001503a) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0001ead0) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0001ead0) main_myfav_hc_pane_t

0xc3c0,	// (0x0001b553) bg_myfav_hc_instruction_pane_g1

0xd265,	// (0x0001c3f8) cell_myfav_contact_pane_g1_ParamLimits

0xd265,	// (0x0001c3f8) cell_myfav_contact_pane_g1

0xd265,	// (0x0001c3f8) cell_myfav_contact_pane_g2_ParamLimits

0xd265,	// (0x0001c3f8) cell_myfav_contact_pane_g2

0xd271,	// (0x0001c404) cell_myfav_contact_pane_g3_ParamLimits

0xd271,	// (0x0001c404) cell_myfav_contact_pane_g3

0xc6b4,	// (0x0001b847) cell_myfav_contact_pane_g4_ParamLimits

0xc6b4,	// (0x0001b847) cell_myfav_contact_pane_g4

0xd27e,	// (0x0001c411) cell_myfav_contact_pane_g5_ParamLimits

0xd27e,	// (0x0001c411) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0001eadb) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0001eadb) cell_myfav_contact_pane_g

0x5e78,	// (0x0001500b) main_myfav_hc_pane_g3_ParamLimits

0x5e78,	// (0x0001500b) main_myfav_hc_pane_g3

0x01ea,	// (0x0000f37d) popup_adpt_find_window

0x5ecf,	// (0x00015062) afind_page_pane_ParamLimits

0x5ecf,	// (0x00015062) afind_page_pane

0x5ee4,	// (0x00015077) aid_size_cell_afind_ParamLimits

0x5ee4,	// (0x00015077) aid_size_cell_afind

0x5f02,	// (0x00015095) bg_popup_sub_pane_cp09_ParamLimits

0x5f02,	// (0x00015095) bg_popup_sub_pane_cp09

0x5f0f,	// (0x000150a2) find_pane_cp01_ParamLimits

0x5f0f,	// (0x000150a2) find_pane_cp01

0xd28a,	// (0x0001c41d) grid_afind_control_pane_ParamLimits

0xd28a,	// (0x0001c41d) grid_afind_control_pane

0x5f1c,	// (0x000150af) grid_afind_pane_ParamLimits

0x5f1c,	// (0x000150af) grid_afind_pane

0x5f3e,	// (0x000150d1) cell_afind_pane_ParamLimits

0x5f3e,	// (0x000150d1) cell_afind_pane

0xc3c0,	// (0x0001b553) afind_page_pane_g1

0x5fa5,	// (0x00015138) afind_page_pane_g2

0x5fae,	// (0x00015141) afind_page_pane_g3

0x0002,

0xf953,	// (0x0001eae6) afind_page_pane_g

0x5fb7,	// (0x0001514a) afind_page_pane_t1

0xd29e,	// (0x0001c431) cell_afind_grid_control_pane_ParamLimits

0xd29e,	// (0x0001c431) cell_afind_grid_control_pane

0xcf95,	// (0x0001c128) bg_button_pane_cp69_ParamLimits

0xcf95,	// (0x0001c128) bg_button_pane_cp69

0x5fd7,	// (0x0001516a) cell_afind_pane_g1_ParamLimits

0x5fd7,	// (0x0001516a) cell_afind_pane_g1

0x5fe4,	// (0x00015177) cell_afind_pane_t1_ParamLimits

0x5fe4,	// (0x00015177) cell_afind_pane_t1

0x9f1d,	// (0x000190b0) bg_button_pane_cp72

0xd2ad,	// (0x0001c440) cell_afind_grid_control_pane_g1

0x2e98,	// (0x0001202b) aid_image_placing_area_ParamLimits

0x2e98,	// (0x0001202b) aid_image_placing_area

0xc9dd,	// (0x0001bb70) field_vitu_entry_pane_g1_ParamLimits

0xc9dd,	// (0x0001bb70) field_vitu_entry_pane_g1

0xc9e9,	// (0x0001bb7c) field_vitu_entry_pane_g2_ParamLimits

0xc9e9,	// (0x0001bb7c) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0001e993) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0001e993) field_vitu_entry_pane_g

0x501e,	// (0x000141b1) cell_vitu_itu_pane_g1_ParamLimits

0x5060,	// (0x000141f3) cell_vitu_itu_pane_t3_ParamLimits

0x5060,	// (0x000141f3) cell_vitu_itu_pane_t3

0xcf3e,	// (0x0001c0d1) mp4_progress_pane_t1_ParamLimits

0xcf57,	// (0x0001c0ea) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0001ea2c) mp4_progress_pane_t_ParamLimits

0xcf70,	// (0x0001c103) mup_progress_pane_cp04_ParamLimits

0x5ebb,	// (0x0001504e) main_myfav_hc_pane_t5_ParamLimits

0x5ebb,	// (0x0001504e) main_myfav_hc_pane_t5

0x94da,	// (0x0001866d) aid_zoom_text_primary

0x01ea,	// (0x0000f37d) popup_adpt_find_window_ParamLimits

0x9524,	// (0x000186b7) main_cam_set_pane

0x580e,	// (0x000149a1) cam4_zoom_pane_ParamLimits

0x580e,	// (0x000149a1) cam4_zoom_pane

0x5ff6,	// (0x00015189) main_cam_set_pane_g1_ParamLimits

0x5ff6,	// (0x00015189) main_cam_set_pane_g1

0x6004,	// (0x00015197) main_cam_set_pane_g2_ParamLimits

0x6004,	// (0x00015197) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0001eaed) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0001eaed) main_cam_set_pane_g

0x6025,	// (0x000151b8) main_cam_set_pane_t1_ParamLimits

0x6025,	// (0x000151b8) main_cam_set_pane_t1

0x6040,	// (0x000151d3) main_cset_listscroll_pane_ParamLimits

0x6040,	// (0x000151d3) main_cset_listscroll_pane

0x6060,	// (0x000151f3) main_cset_slider_pane_ParamLimits

0x6060,	// (0x000151f3) main_cset_slider_pane

0xd2be,	// (0x0001c451) main_cset_list_pane_ParamLimits

0xd2be,	// (0x0001c451) main_cset_list_pane

0xd2ce,	// (0x0001c461) scroll_pane_cp028

0x6086,	// (0x00015219) aid_area_touch_slider

0x60a2,	// (0x00015235) cset_slider_pane

0x60cc,	// (0x0001525f) main_cset_slider_pane_g1

0x60e1,	// (0x00015274) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0001eaf2) main_cset_slider_pane_g

0xd33d,	// (0x0001c4d0) main_cset_slider_pane_t1

0x619d,	// (0x00015330) main_cset_slider_pane_t2

0x61b7,	// (0x0001534a) main_cset_slider_pane_t3

0x61d1,	// (0x00015364) main_cset_slider_pane_t4

0x61eb,	// (0x0001537e) main_cset_slider_pane_t5

0x6205,	// (0x00015398) main_cset_slider_pane_t6

0x621a,	// (0x000153ad) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0001eb17) main_cset_slider_pane_t

0x631e,	// (0x000154b1) cset_list_set_pane_ParamLimits

0x631e,	// (0x000154b1) cset_list_set_pane

0x6330,	// (0x000154c3) aid_position_infowindow_above

0x6338,	// (0x000154cb) aid_position_infowindow_below

0xd3dd,	// (0x0001c570) cset_list_set_pane_g1_ParamLimits

0xd3dd,	// (0x0001c570) cset_list_set_pane_g1

0xd3e9,	// (0x0001c57c) cset_list_set_pane_g3_ParamLimits

0xd3e9,	// (0x0001c57c) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0001eb36) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0001eb36) cset_list_set_pane_g

0xd3f8,	// (0x0001c58b) cset_list_set_pane_t1_ParamLimits

0xd3f8,	// (0x0001c58b) cset_list_set_pane_t1

0x9524,	// (0x000186b7) list_highlight_pane_cp021_ParamLimits

0x9524,	// (0x000186b7) list_highlight_pane_cp021

0xab20,	// (0x00019cb3) cset_slider_pane_g1

0xab32,	// (0x00019cc5) cset_slider_pane_g2

0xab29,	// (0x00019cbc) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0001eb3b) cset_slider_pane_g

0xd40d,	// (0x0001c5a0) aid_area_touch_cam4_zoom

0xd415,	// (0x0001c5a8) cam4_zoom_cont_pane

0xd41d,	// (0x0001c5b0) cam4_zoom_pane_g1

0xd425,	// (0x0001c5b8) cam4_zoom_pane_g2

0x6340,	// (0x000154d3) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0001eb42) cam4_zoom_pane_g

0xd42d,	// (0x0001c5c0) cam4_zoom_cont_pane_g1

0xd436,	// (0x0001c5c9) cam4_zoom_cont_pane_g2

0xd43f,	// (0x0001c5d2) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0001eb49) cam4_zoom_cont_pane_g

0x563f,	// (0x000147d2) call4_image_pane_ParamLimits

0x563f,	// (0x000147d2) call4_image_pane

0x56a6,	// (0x00014839) call4_windows_conf_pane_ParamLimits

0x56eb,	// (0x0001487e) popup_call4_audio_in_window_ParamLimits

0x56eb,	// (0x0001487e) popup_call4_audio_in_window

0x94b4,	// (0x00018647) bg_popup_call2_act_pane_cp02

0xd005,	// (0x0001c198) call4_list_conf_pane

0xc3c0,	// (0x0001b553) call4_image_pane_g1

0xc3c0,	// (0x0001b553) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0001e854) call4_image_pane_g

0xd448,	// (0x0001c5db) list_single_graphic_popup_conf4_pane_ParamLimits

0xd448,	// (0x0001c5db) list_single_graphic_popup_conf4_pane

0x94b4,	// (0x00018647) list_highlight_pane_cp022

0xd45b,	// (0x0001c5ee) list_single_graphic_popup_conf4_pane_g1

0xa6df,	// (0x00019872) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0001eb50) list_single_graphic_popup_conf4_pane_g

0xd463,	// (0x0001c5f6) list_single_graphic_popup_conf4_pane_t1

0x1307,	// (0x0001049a) popup_vtel_slider_window_ParamLimits

0x1307,	// (0x0001049a) popup_vtel_slider_window

0xcf83,	// (0x0001c116) dialer2_ne_pane_t2_ParamLimits

0xcf83,	// (0x0001c116) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0001ea31) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0001ea31) dialer2_ne_pane_t

0xc1a5,	// (0x0001b338) bg_popup_sub_pane_cp010_ParamLimits

0xc1a5,	// (0x0001b338) bg_popup_sub_pane_cp010

0x6348,	// (0x000154db) popup_vtel_slider_window_g1_ParamLimits

0x6348,	// (0x000154db) popup_vtel_slider_window_g1

0x635b,	// (0x000154ee) popup_vtel_slider_window_g2_ParamLimits

0x635b,	// (0x000154ee) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0001eb55) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0001eb55) popup_vtel_slider_window_g

0x63b1,	// (0x00015544) vtel_slider_pane_ParamLimits

0x63b1,	// (0x00015544) vtel_slider_pane

0x63d3,	// (0x00015566) vtel_slider_pane_g1_ParamLimits

0x63d3,	// (0x00015566) vtel_slider_pane_g1

0x63e7,	// (0x0001557a) vtel_slider_pane_g2_ParamLimits

0x63e7,	// (0x0001557a) vtel_slider_pane_g2

0x63ff,	// (0x00015592) vtel_slider_pane_g3_ParamLimits

0x63ff,	// (0x00015592) vtel_slider_pane_g3

0x63d3,	// (0x00015566) vtel_slider_pane_g4_ParamLimits

0x63d3,	// (0x00015566) vtel_slider_pane_g4

0x6415,	// (0x000155a8) vtel_slider_pane_g5_ParamLimits

0x6415,	// (0x000155a8) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0001eb5e) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0001eb5e) vtel_slider_pane_g

0x9524,	// (0x000186b7) main_gallery2_pane

0x5a0e,	// (0x00014ba1) aid_size_row_itut2_dropdow_list_ParamLimits

0x5a0e,	// (0x00014ba1) aid_size_row_itut2_dropdow_list

0x5a9a,	// (0x00014c2d) grid_vitu2_function_top_pane_ParamLimits

0x5a9a,	// (0x00014c2d) grid_vitu2_function_top_pane

0x5b04,	// (0x00014c97) popup_vitu2_dropdown_list_window_ParamLimits

0x5b04,	// (0x00014c97) popup_vitu2_dropdown_list_window

0x5b2d,	// (0x00014cc0) popup_vitu2_match_list_window

0x6439,	// (0x000155cc) cell_vitu2_function_top_pane_ParamLimits

0x6439,	// (0x000155cc) cell_vitu2_function_top_pane

0x6451,	// (0x000155e4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6451,	// (0x000155e4) cell_vitu2_function_top_pane_cp01

0x646d,	// (0x00015600) cell_vitu2_function_top_wide_pane_ParamLimits

0x646d,	// (0x00015600) cell_vitu2_function_top_wide_pane

0x9524,	// (0x000186b7) bg_button_pane_cp012

0x6489,	// (0x0001561c) cell_vitu2_function_top_pane_g1

0xd479,	// (0x0001c60c) bg_button_pane_cp013_ParamLimits

0xd479,	// (0x0001c60c) bg_button_pane_cp013

0x649d,	// (0x00015630) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x649d,	// (0x00015630) cell_vitu2_function_top_wide_pane_g1

0x9524,	// (0x000186b7) bg_popup_sub_pane_cp20

0x64b5,	// (0x00015648) list_vitu2_match_list_pane

0xd1b4,	// (0x0001c347) bg_popup_sub_pane_cp20_g1

0xd1bc,	// (0x0001c34f) bg_popup_sub_pane_cp20_g2

0xa124,	// (0x000192b7) bg_popup_sub_pane_cp20_g3

0xd1c4,	// (0x0001c357) bg_popup_sub_pane_cp20_g4

0xa104,	// (0x00019297) bg_popup_sub_pane_cp20_g5

0xd495,	// (0x0001c628) bg_popup_sub_pane_cp20_g6

0xd1d4,	// (0x0001c367) bg_popup_sub_pane_cp20_g7

0xd1dc,	// (0x0001c36f) bg_popup_sub_pane_cp20_g8

0xd1e4,	// (0x0001c377) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0001eb69) bg_popup_sub_pane_cp20_g

0xd49d,	// (0x0001c630) list_vitu2_match_list_item_pane_ParamLimits

0xd49d,	// (0x0001c630) list_vitu2_match_list_item_pane

0xd4af,	// (0x0001c642) list_vitu2_match_list_item_pane_t1

0x94b4,	// (0x00018647) bg_popup_sub_pane_cp21

0xa594,	// (0x00019727) grid_vitu2_dropdown_list_pane

0x6523,	// (0x000156b6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6523,	// (0x000156b6) cell_vitu2_dropdown_list_char_pane

0x6544,	// (0x000156d7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6544,	// (0x000156d7) cell_vitu2_dropdown_list_ctrl_pane

0xd4bd,	// (0x0001c650) cell_vitu2_dropdown_list_char_pane_g1

0xd4c6,	// (0x0001c659) cell_vitu2_dropdown_list_char_pane_g2

0xd4cf,	// (0x0001c662) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0001eb86) cell_vitu2_dropdown_list_char_pane_g

0x6570,	// (0x00015703) cell_vitu2_dropdown_list_char_pane_t1

0x657e,	// (0x00015711) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x657e,	// (0x00015711) cell_vitu2_dropdown_list_ctrl_pane_g1

0x658b,	// (0x0001571e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x658b,	// (0x0001571e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6598,	// (0x0001572b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6598,	// (0x0001572b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x65a5,	// (0x00015738) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x65a5,	// (0x00015738) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc623,	// (0x0001b7b6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc623,	// (0x0001b7b6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0001eb8d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0001eb8d) cell_vitu2_dropdown_list_ctrl_pane_g

0x65c1,	// (0x00015754) aid_size_cell_gallery2_ParamLimits

0x65c1,	// (0x00015754) aid_size_cell_gallery2

0x65df,	// (0x00015772) grid_gallery2_pane_ParamLimits

0x65df,	// (0x00015772) grid_gallery2_pane

0x65f9,	// (0x0001578c) scroll_pane_cp029_ParamLimits

0x65f9,	// (0x0001578c) scroll_pane_cp029

0x660a,	// (0x0001579d) cell_gallery2_pane_ParamLimits

0x660a,	// (0x0001579d) cell_gallery2_pane

0xd4d8,	// (0x0001c66b) cell_gallery2_pane_g2

0x6669,	// (0x000157fc) cell_gallery2_pane_g3

0xd4e0,	// (0x0001c673) cell_gallery2_pane_g4

0xd4e8,	// (0x0001c67b) cell_gallery2_pane_g5

0x9ec1,	// (0x00019054) grid_highlight_pane_cp10

0x5b2d,	// (0x00014cc0) popup_vitu2_match_list_window_ParamLimits

0x5b44,	// (0x00014cd7) popup_vitu2_query_window_ParamLimits

0x5b44,	// (0x00014cd7) popup_vitu2_query_window

0x94b4,	// (0x00018647) bg_vitu2_candi_button_pane

0xd4bd,	// (0x0001c650) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4c6,	// (0x0001c659) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4cf,	// (0x0001c662) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6671,	// (0x00015804) bg_button_pane_cp015

0x6683,	// (0x00015816) bg_button_pane_cp016

0x6696,	// (0x00015829) bg_button_pane_cp017

0xbea5,	// (0x0001b038) bg_popup_sub_pane_cp22

0xd4f0,	// (0x0001c683) popup_vitu2_query_window_g1

0x66db,	// (0x0001586e) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0001eb98) popup_vitu2_query_window_g

0x66fa,	// (0x0001588d) popup_vitu2_query_window_t1_ParamLimits

0x66fa,	// (0x0001588d) popup_vitu2_query_window_t1

0x672f,	// (0x000158c2) popup_vitu2_query_window_t2_ParamLimits

0x672f,	// (0x000158c2) popup_vitu2_query_window_t2

0x6741,	// (0x000158d4) popup_vitu2_query_window_t3_ParamLimits

0x6741,	// (0x000158d4) popup_vitu2_query_window_t3

0x6769,	// (0x000158fc) popup_vitu2_query_window_t4_ParamLimits

0x6769,	// (0x000158fc) popup_vitu2_query_window_t4

0x678a,	// (0x0001591d) popup_vitu2_query_window_t5_ParamLimits

0x678a,	// (0x0001591d) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0001eb9f) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0001eb9f) popup_vitu2_query_window_t

0xd2b6,	// (0x0001c449) main_cset_text_pane

0x6086,	// (0x00015219) aid_area_touch_slider_ParamLimits

0x60a2,	// (0x00015235) cset_slider_pane_ParamLimits

0x60cc,	// (0x0001525f) main_cset_slider_pane_g1_ParamLimits

0x60e1,	// (0x00015274) main_cset_slider_pane_g2_ParamLimits

0xd2d7,	// (0x0001c46a) main_cset_slider_pane_g3_ParamLimits

0xd2d7,	// (0x0001c46a) main_cset_slider_pane_g3

0x60f6,	// (0x00015289) main_cset_slider_pane_g4_ParamLimits

0x60f6,	// (0x00015289) main_cset_slider_pane_g4

0x6105,	// (0x00015298) main_cset_slider_pane_g5_ParamLimits

0x6105,	// (0x00015298) main_cset_slider_pane_g5

0x6111,	// (0x000152a4) main_cset_slider_pane_g6_ParamLimits

0x6111,	// (0x000152a4) main_cset_slider_pane_g6

0xf95f,	// (0x0001eaf2) main_cset_slider_pane_g_ParamLimits

0xd33d,	// (0x0001c4d0) main_cset_slider_pane_t1_ParamLimits

0x619d,	// (0x00015330) main_cset_slider_pane_t2_ParamLimits

0x61b7,	// (0x0001534a) main_cset_slider_pane_t3_ParamLimits

0x61d1,	// (0x00015364) main_cset_slider_pane_t4_ParamLimits

0x61eb,	// (0x0001537e) main_cset_slider_pane_t5_ParamLimits

0x6205,	// (0x00015398) main_cset_slider_pane_t6_ParamLimits

0x621a,	// (0x000153ad) main_cset_slider_pane_t7_ParamLimits

0x6244,	// (0x000153d7) main_cset_slider_pane_t8_ParamLimits

0x6244,	// (0x000153d7) main_cset_slider_pane_t8

0x626c,	// (0x000153ff) main_cset_slider_pane_t9_ParamLimits

0x626c,	// (0x000153ff) main_cset_slider_pane_t9

0x6294,	// (0x00015427) main_cset_slider_pane_t10_ParamLimits

0x6294,	// (0x00015427) main_cset_slider_pane_t10

0x62bc,	// (0x0001544f) main_cset_slider_pane_t11_ParamLimits

0x62bc,	// (0x0001544f) main_cset_slider_pane_t11

0x62e4,	// (0x00015477) main_cset_slider_pane_t12_ParamLimits

0x62e4,	// (0x00015477) main_cset_slider_pane_t12

0x6301,	// (0x00015494) main_cset_slider_pane_t13_ParamLimits

0x6301,	// (0x00015494) main_cset_slider_pane_t13

0xf984,	// (0x0001eb17) main_cset_slider_pane_t_ParamLimits

0x94b4,	// (0x00018647) bg_popup_sub_pane_cp011

0xd4fc,	// (0x0001c68f) main_cset_text_pane_g1

0xd504,	// (0x0001c697) main_cset_text_pane_t1

0xd512,	// (0x0001c6a5) main_cset_text_pane_t2

0xd520,	// (0x0001c6b3) main_cset_text_pane_t3

0xd52e,	// (0x0001c6c1) main_cset_text_pane_t4

0xd53c,	// (0x0001c6cf) main_cset_text_pane_t5

0xd54a,	// (0x0001c6dd) main_cset_text_pane_t6

0xd558,	// (0x0001c6eb) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0001ebae) main_cset_text_pane_t

0x94b4,	// (0x00018647) main_cam4_burst_pane

0x94b4,	// (0x00018647) main_cam5_pane

0x5fc5,	// (0x00015158) bg_button_pane_cp019

0x5fce,	// (0x00015161) bg_button_pane_cp020

0xd2e3,	// (0x0001c476) main_cset_slider_pane_g7_ParamLimits

0xd2e3,	// (0x0001c476) main_cset_slider_pane_g7

0xd2ef,	// (0x0001c482) main_cset_slider_pane_g8_ParamLimits

0xd2ef,	// (0x0001c482) main_cset_slider_pane_g8

0x6125,	// (0x000152b8) main_cset_slider_pane_g9_ParamLimits

0x6125,	// (0x000152b8) main_cset_slider_pane_g9

0x6131,	// (0x000152c4) main_cset_slider_pane_g10_ParamLimits

0x6131,	// (0x000152c4) main_cset_slider_pane_g10

0x613d,	// (0x000152d0) main_cset_slider_pane_g11_ParamLimits

0x613d,	// (0x000152d0) main_cset_slider_pane_g11

0x6149,	// (0x000152dc) main_cset_slider_pane_g12_ParamLimits

0x6149,	// (0x000152dc) main_cset_slider_pane_g12

0x6155,	// (0x000152e8) main_cset_slider_pane_g13_ParamLimits

0x6155,	// (0x000152e8) main_cset_slider_pane_g13

0x6161,	// (0x000152f4) main_cset_slider_pane_g14_ParamLimits

0x6161,	// (0x000152f4) main_cset_slider_pane_g14

0x616d,	// (0x00015300) main_cset_slider_pane_g15_ParamLimits

0x616d,	// (0x00015300) main_cset_slider_pane_g15

0xd36b,	// (0x0001c4fe) main_cset_slider_pane_t14_ParamLimits

0xd36b,	// (0x0001c4fe) main_cset_slider_pane_t14

0xd3a4,	// (0x0001c537) main_cset_slider_pane_t15_ParamLimits

0xd3a4,	// (0x0001c537) main_cset_slider_pane_t15

0x6801,	// (0x00015994) aid_cam4_burst_size_cell_ParamLimits

0x6801,	// (0x00015994) aid_cam4_burst_size_cell

0x6821,	// (0x000159b4) grid_cam4_burst_pane_ParamLimits

0x6821,	// (0x000159b4) grid_cam4_burst_pane

0x6859,	// (0x000159ec) linegrid_cam4_burst_pane_ParamLimits

0x6859,	// (0x000159ec) linegrid_cam4_burst_pane

0xd566,	// (0x0001c6f9) scroll_pane_cp30_ParamLimits

0xd566,	// (0x0001c6f9) scroll_pane_cp30

0x687d,	// (0x00015a10) cell_cam4_burst_pane_ParamLimits

0x687d,	// (0x00015a10) cell_cam4_burst_pane

0xd572,	// (0x0001c705) linegrid_cam4_burst_pane_g1_ParamLimits

0xd572,	// (0x0001c705) linegrid_cam4_burst_pane_g1

0x68ca,	// (0x00015a5d) linegrid_cam4_burst_pane_g2_ParamLimits

0x68ca,	// (0x00015a5d) linegrid_cam4_burst_pane_g2

0xd57f,	// (0x0001c712) linegrid_cam4_burst_pane_g3_ParamLimits

0xd57f,	// (0x0001c712) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0001ebbd) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0001ebbd) linegrid_cam4_burst_pane_g

0x68db,	// (0x00015a6e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x68db,	// (0x00015a6e) linegrid_cam4_burst_pane_g3_copy1

0xd58c,	// (0x0001c71f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd58c,	// (0x0001c71f) linegrid_cam4_burst_pane_g4

0x68f5,	// (0x00015a88) linegrid_cam4_burst_pane_g5_ParamLimits

0x68f5,	// (0x00015a88) linegrid_cam4_burst_pane_g5

0x6906,	// (0x00015a99) linegrid_cam4_burst_pane_g6_ParamLimits

0x6906,	// (0x00015a99) linegrid_cam4_burst_pane_g6

0xd599,	// (0x0001c72c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd599,	// (0x0001c72c) linegrid_cam4_burst_pane_g7

0x691d,	// (0x00015ab0) cell_cam4_burst_pane_g1

0xd5b2,	// (0x0001c745) main_cam5_pane_t1_ParamLimits

0xd5b2,	// (0x0001c745) main_cam5_pane_t1

0xd5c4,	// (0x0001c757) main_cam5_pane_t2_ParamLimits

0xd5c4,	// (0x0001c757) main_cam5_pane_t2

0xd5d6,	// (0x0001c769) main_cam5_pane_t3_ParamLimits

0xd5d6,	// (0x0001c769) main_cam5_pane_t3

0xd5e8,	// (0x0001c77b) main_cam5_pane_t4_ParamLimits

0xd5e8,	// (0x0001c77b) main_cam5_pane_t4

0xd600,	// (0x0001c793) main_cam5_pane_t5_ParamLimits

0xd600,	// (0x0001c793) main_cam5_pane_t5

0xd614,	// (0x0001c7a7) main_cam5_pane_t6_ParamLimits

0xd614,	// (0x0001c7a7) main_cam5_pane_t6

0xd628,	// (0x0001c7bb) main_cam5_pane_t7_ParamLimits

0xd628,	// (0x0001c7bb) main_cam5_pane_t7

0xd63a,	// (0x0001c7cd) main_cam5_pane_t8_ParamLimits

0xd63a,	// (0x0001c7cd) main_cam5_pane_t8

0xd656,	// (0x0001c7e9) main_cam5_pane_t9_ParamLimits

0xd656,	// (0x0001c7e9) main_cam5_pane_t9

0xd668,	// (0x0001c7fb) main_cam5_pane_t10_ParamLimits

0xd668,	// (0x0001c7fb) main_cam5_pane_t10

0xd67a,	// (0x0001c80d) main_cam5_pane_t11_ParamLimits

0xd67a,	// (0x0001c80d) main_cam5_pane_t11

0xd68c,	// (0x0001c81f) main_cam5_pane_t12_ParamLimits

0xd68c,	// (0x0001c81f) main_cam5_pane_t12

0xd6a1,	// (0x0001c834) main_cam5_pane_t13_ParamLimits

0xd6a1,	// (0x0001c834) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0001ebc9) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0001ebc9) main_cam5_pane_t

0x026c,	// (0x0000f3ff) popup_scut_keymap_window_ParamLimits

0x026c,	// (0x0000f3ff) popup_scut_keymap_window

0x6930,	// (0x00015ac3) aid_size_cell_brow_shortcut

0x9ec1,	// (0x00019054) bg_popup_window_pane_cp010

0x693c,	// (0x00015acf) grid_scut_pane

0x6948,	// (0x00015adb) cell_scut_pane_ParamLimits

0x6948,	// (0x00015adb) cell_scut_pane

0x695f,	// (0x00015af2) cell_scut_pane_g1

0xd6be,	// (0x0001c851) cell_scut_pane_t1

0xd6cd,	// (0x0001c860) cell_scut_pane_t2

0x6968,	// (0x00015afb) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0001ebe4) cell_scut_pane_t

0x4514,	// (0x000136a7) main_mup3_pane_g8_ParamLimits

0x4514,	// (0x000136a7) main_mup3_pane_g8

0x5a26,	// (0x00014bb9) area_vitu2_query_pane_ParamLimits

0x5a26,	// (0x00014bb9) area_vitu2_query_pane

0x66a9,	// (0x0001583c) input_focus_pane_cp08

0xd6dc,	// (0x0001c86f) area_vitu2_query_pane_g1

0x6976,	// (0x00015b09) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0001ebeb) area_vitu2_query_pane_g

0x6987,	// (0x00015b1a) area_vitu2_query_pane_t1_ParamLimits

0x6987,	// (0x00015b1a) area_vitu2_query_pane_t1

0x699b,	// (0x00015b2e) area_vitu2_query_pane_t2_ParamLimits

0x699b,	// (0x00015b2e) area_vitu2_query_pane_t2

0x69af,	// (0x00015b42) area_vitu2_query_pane_t3_ParamLimits

0x69af,	// (0x00015b42) area_vitu2_query_pane_t3

0xd6e8,	// (0x0001c87b) area_vitu2_query_pane_t4_ParamLimits

0xd6e8,	// (0x0001c87b) area_vitu2_query_pane_t4

0xd710,	// (0x0001c8a3) area_vitu2_query_pane_t5_ParamLimits

0xd710,	// (0x0001c8a3) area_vitu2_query_pane_t5

0xd738,	// (0x0001c8cb) area_vitu2_query_pane_t6_ParamLimits

0xd738,	// (0x0001c8cb) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0001ebf0) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0001ebf0) area_vitu2_query_pane_t

0x69d7,	// (0x00015b6a) bg_button_pane_cp018

0x69e5,	// (0x00015b78) bg_button_pane_cp021

0x69f1,	// (0x00015b84) bg_button_pane_cp022

0x6a00,	// (0x00015b93) input_focus_pane_cp09

0xa81b,	// (0x000199ae) aid_size_touch_mv_arrow_left

0xa844,	// (0x000199d7) aid_size_touch_mv_arrow_right

0x6185,	// (0x00015318) main_cset_slider_pane_g16_ParamLimits

0x6185,	// (0x00015318) main_cset_slider_pane_g16

0x6191,	// (0x00015324) main_cset_slider_pane_g17_ParamLimits

0x6191,	// (0x00015324) main_cset_slider_pane_g17

0x691d,	// (0x00015ab0) cell_cam4_burst_pane_g1_ParamLimits

0x94b4,	// (0x00018647) compa_mode_pane

0x636b,	// (0x000154fe) popup_vtel_slider_window_g3_ParamLimits

0x636b,	// (0x000154fe) popup_vtel_slider_window_g3

0x6382,	// (0x00015515) popup_vtel_slider_window_g4_ParamLimits

0x6382,	// (0x00015515) popup_vtel_slider_window_g4

0x6399,	// (0x0001552c) popup_vtel_slider_window_t1_ParamLimits

0x6399,	// (0x0001552c) popup_vtel_slider_window_t1

0x94b4,	// (0x00018647) main_cl_pane

0xbecd,	// (0x0001b060) popup_imed_adjust2_window_ParamLimits

0xbea5,	// (0x0001b038) bg_tb_trans_pane_cp05_ParamLimits

0xc912,	// (0x0001baa5) popup_imed_adjust2_window_g1_ParamLimits

0xc921,	// (0x0001bab4) popup_imed_adjust2_window_g2_ParamLimits

0xc921,	// (0x0001bab4) popup_imed_adjust2_window_g2

0xc92d,	// (0x0001bac0) popup_imed_adjust2_window_g3_ParamLimits

0xc92d,	// (0x0001bac0) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0001e957) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0001e957) popup_imed_adjust2_window_g

0xc939,	// (0x0001bacc) popup_imed_adjust2_window_t1_ParamLimits

0xc951,	// (0x0001bae4) slider_imed_adjust_pane_ParamLimits

0xc965,	// (0x0001baf8) slider_imed_adjust_pane_g1_ParamLimits

0xc975,	// (0x0001bb08) slider_imed_adjust_pane_g2_ParamLimits

0xc985,	// (0x0001bb18) slider_imed_adjust_pane_g3_ParamLimits

0xc996,	// (0x0001bb29) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0001e95e) slider_imed_adjust_pane_g_ParamLimits

0x57af,	// (0x00014942) aid_touch_area_cam4_ParamLimits

0x57af,	// (0x00014942) aid_touch_area_cam4

0xd049,	// (0x0001c1dc) battery_pane_cp01

0x587e,	// (0x00014a11) main_camera4_pane_g6_ParamLimits

0x587e,	// (0x00014a11) main_camera4_pane_g6

0x58a8,	// (0x00014a3b) main_camera4_pane_t2_ParamLimits

0x58a8,	// (0x00014a3b) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0001ea65) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0001ea65) main_camera4_pane_t

0x58dd,	// (0x00014a70) aid_touch_area_vid4_ParamLimits

0x58dd,	// (0x00014a70) aid_touch_area_vid4

0x5931,	// (0x00014ac4) main_video4_pane_g5_ParamLimits

0x5931,	// (0x00014ac4) main_video4_pane_g5

0x5956,	// (0x00014ae9) vid4_progress_pane_ParamLimits

0x5956,	// (0x00014ae9) vid4_progress_pane

0xd2fb,	// (0x0001c48e) main_cset_slider_pane_g18_ParamLimits

0xd2fb,	// (0x0001c48e) main_cset_slider_pane_g18

0xd5a6,	// (0x0001c739) cell_cam4_burst_pane_g2_ParamLimits

0xd5a6,	// (0x0001c739) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0001ebc4) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0001ebc4) cell_cam4_burst_pane_g

0x9c87,	// (0x00018e1a) bg_cl_pane_ParamLimits

0x9c87,	// (0x00018e1a) bg_cl_pane

0x6a0f,	// (0x00015ba2) cl_header_pane_ParamLimits

0x6a0f,	// (0x00015ba2) cl_header_pane

0x6a23,	// (0x00015bb6) cl_listscroll_pane_ParamLimits

0x6a23,	// (0x00015bb6) cl_listscroll_pane

0xd784,	// (0x0001c917) bg_cl_pane_g1

0xd78c,	// (0x0001c91f) bg_cl_pane_g2

0xd794,	// (0x0001c927) bg_cl_pane_g3

0xd79c,	// (0x0001c92f) bg_cl_pane_g4

0xd7a4,	// (0x0001c937) bg_cl_pane_g5

0xd7ac,	// (0x0001c93f) bg_cl_pane_g6

0xd7b4,	// (0x0001c947) bg_cl_pane_g7

0xd7bc,	// (0x0001c94f) bg_cl_pane_g8

0xd7c4,	// (0x0001c957) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0001ebff) bg_cl_pane_g

0x6a33,	// (0x00015bc6) aid_height_cl_leading_ParamLimits

0x6a33,	// (0x00015bc6) aid_height_cl_leading

0x6a3f,	// (0x00015bd2) aid_height_cl_text_ParamLimits

0x6a3f,	// (0x00015bd2) aid_height_cl_text

0x9524,	// (0x000186b7) bg_cl_header_pane_ParamLimits

0x9524,	// (0x000186b7) bg_cl_header_pane

0x6a5e,	// (0x00015bf1) cl_header_pane_g1_ParamLimits

0x6a5e,	// (0x00015bf1) cl_header_pane_g1

0x6a74,	// (0x00015c07) cl_header_pane_t1_ParamLimits

0x6a74,	// (0x00015c07) cl_header_pane_t1

0xd7cc,	// (0x0001c95f) cl_list_pane

0xd2ce,	// (0x0001c461) hc_scroll_pane_cp01

0xa104,	// (0x00019297) bg_cl_header_pane_g1

0xd1b4,	// (0x0001c347) bg_cl_header_pane_g2

0xa124,	// (0x000192b7) bg_cl_header_pane_g3

0xd1c4,	// (0x0001c357) bg_cl_header_pane_g4

0xd1bc,	// (0x0001c34f) bg_cl_header_pane_g5

0xd495,	// (0x0001c628) bg_cl_header_pane_g6

0xd1dc,	// (0x0001c36f) bg_cl_header_pane_g7

0xd1e4,	// (0x0001c377) bg_cl_header_pane_g8

0xd1d4,	// (0x0001c367) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0001ec12) bg_cl_header_pane_g

0x6a8d,	// (0x00015c20) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6a8d,	// (0x00015c20) hc_cl_list_double_graphic_heading_pane

0x6a9e,	// (0x00015c31) hc_cl_list_single_graphic_pane_ParamLimits

0x6a9e,	// (0x00015c31) hc_cl_list_single_graphic_pane

0x6ab4,	// (0x00015c47) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6ab4,	// (0x00015c47) hc_cl_list_single_graphic_pane_g1

0x6ac0,	// (0x00015c53) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6ac0,	// (0x00015c53) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0001ec25) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0001ec25) hc_cl_list_single_graphic_pane_g

0x6ad4,	// (0x00015c67) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6ad4,	// (0x00015c67) hc_cl_list_single_graphic_pane_t1

0x6ab4,	// (0x00015c47) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6ab4,	// (0x00015c47) hc_cl_list_double_graphic_heading_pane_g1

0x6ae9,	// (0x00015c7c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ae9,	// (0x00015c7c) hc_cl_list_double_graphic_heading_pane_g2

0x6afd,	// (0x00015c90) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6afd,	// (0x00015c90) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0001ec2a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0001ec2a) hc_cl_list_double_graphic_heading_pane_g

0x6b11,	// (0x00015ca4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6b11,	// (0x00015ca4) hc_cl_list_double_graphic_heading_pane_t1

0x6b26,	// (0x00015cb9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6b26,	// (0x00015cb9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0001ec31) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0001ec31) hc_cl_list_double_graphic_heading_pane_t

0xd7dd,	// (0x0001c970) vid4_progress_pane_g1

0xd7ed,	// (0x0001c980) vid4_progress_pane_g2

0x6b3b,	// (0x00015cce) vid4_progress_pane_g3

0xd7fd,	// (0x0001c990) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0001ec36) vid4_progress_pane_g

0x6b4d,	// (0x00015ce0) vid4_progress_pane_t1

0xd815,	// (0x0001c9a8) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0001ec41) vid4_progress_pane_t

0x6b65,	// (0x00015cf8) wait_bar_pane_cp07

0xc1b3,	// (0x0001b346) blid_firmament_pane_ParamLimits

0xc1f6,	// (0x0001b389) popup_blid_sat_info2_window_g1

0xc21a,	// (0x0001b3ad) popup_blid_sat_info2_window_t3

0xc228,	// (0x0001b3bb) popup_blid_sat_info2_window_t4

0xc236,	// (0x0001b3c9) popup_blid_sat_info2_window_t5

0xc244,	// (0x0001b3d7) popup_blid_sat_info2_window_t6

0xc254,	// (0x0001b3e7) popup_blid_sat_info2_window_t7

0xc262,	// (0x0001b3f5) popup_blid_sat_info2_window_t8

0xc270,	// (0x0001b403) popup_blid_sat_info2_window_t9

0xc27e,	// (0x0001b411) popup_blid_sat_info2_window_t10

0xc340,	// (0x0001b4d3) aid_firma_cardinal_ParamLimits

0xc354,	// (0x0001b4e7) blid_firmament_pane_t1_ParamLimits

0xc36b,	// (0x0001b4fe) blid_firmament_pane_t2_ParamLimits

0xc382,	// (0x0001b515) blid_firmament_pane_t3_ParamLimits

0xc399,	// (0x0001b52c) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0001e84b) blid_firmament_pane_t_ParamLimits

0xc3b0,	// (0x0001b543) blid_sat_info_pane_ParamLimits

0x9524,	// (0x000186b7) main_cam_set_pane_ParamLimits

0x4dd8,	// (0x00013f6b) aid_size_cell_colour_35_ParamLimits

0x4df8,	// (0x00013f8b) aid_size_cell_colour_112_ParamLimits

0x4e18,	// (0x00013fab) aid_size_cell_effect_ParamLimits

0xbea5,	// (0x0001b038) bg_tb_trans_pane_cp02_ParamLimits

0xa39a,	// (0x0001952d) heading_imed_pane_ParamLimits

0x4e38,	// (0x00013fcb) listscroll_imed_pane_ParamLimits

0xb4cb,	// (0x0001a65e) popup_call2_audio_first_window_g5_ParamLimits

0xb4cb,	// (0x0001a65e) popup_call2_audio_first_window_g5

0x53cb,	// (0x0001455e) aid_size_touch_image3_arrow_left_ParamLimits

0x53cb,	// (0x0001455e) aid_size_touch_image3_arrow_left

0x53f7,	// (0x0001458a) aid_size_touch_image3_arrow_right_ParamLimits

0x53f7,	// (0x0001458a) aid_size_touch_image3_arrow_right

0xd82a,	// (0x0001c9bd) vid4_progress_pane_t3

0x514b,	// (0x000142de) main_hwr_training_symbol_option_pane_ParamLimits

0x514b,	// (0x000142de) main_hwr_training_symbol_option_pane

0xcbff,	// (0x0001bd92) popup_hwr_training_preview_window_ParamLimits

0xcbff,	// (0x0001bd92) popup_hwr_training_preview_window

0x516b,	// (0x000142fe) hwr_training_navi_pane_g5_ParamLimits

0x516b,	// (0x000142fe) hwr_training_navi_pane_g5

0xd190,	// (0x0001c323) popup_char_count_window

0x9524,	// (0x000186b7) bg_popup_sub_pane_cp20_ParamLimits

0x64b5,	// (0x00015648) list_vitu2_match_list_pane_ParamLimits

0x64c4,	// (0x00015657) vitu2_page_scroll_pane_ParamLimits

0x64c4,	// (0x00015657) vitu2_page_scroll_pane

0xd861,	// (0x0001c9f4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd861,	// (0x0001c9f4) list_single_hwr_training_symbol_option_pane

0xd874,	// (0x0001ca07) list_single_hwr_training_symbol_option_pane_g1

0xd87c,	// (0x0001ca0f) list_single_hwr_training_symbol_option_pane_t1

0xd88a,	// (0x0001ca1d) bg_button_pane_cp023

0xd893,	// (0x0001ca26) bg_button_pane_cp024

0x6bb0,	// (0x00015d43) vitu2_page_scroll_pane_g1

0x6bb8,	// (0x00015d4b) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0001ec48) vitu2_page_scroll_pane_g

0x6bc0,	// (0x00015d53) vitu2_page_scroll_pane_t1

0xc0cf,	// (0x0001b262) popup_char_count_window_g1

0xd8c6,	// (0x0001ca59) popup_char_count_window_g2

0xd8cf,	// (0x0001ca62) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0001ec4d) popup_char_count_window_g

0xd8d8,	// (0x0001ca6b) popup_char_count_window_t1

0x94b4,	// (0x00018647) main_vded2_pane

0xc8fe,	// (0x0001ba91) aid_size_cell_imed_line

0xc908,	// (0x0001ba9b) grid_imed_line_width_pane

0xd101,	// (0x0001c294) vid4_indicators_pane_g4

0xd8e6,	// (0x0001ca79) cell_imed_line_width_pane_ParamLimits

0xd8e6,	// (0x0001ca79) cell_imed_line_width_pane

0xd8fa,	// (0x0001ca8d) cell_imed_line_width_pane_g1

0xd903,	// (0x0001ca96) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0001ec54) cell_imed_line_width_pane_g

0x6bcf,	// (0x00015d62) main_vded2_pane_g1_ParamLimits

0x6bcf,	// (0x00015d62) main_vded2_pane_g1

0x6be5,	// (0x00015d78) main_vded2_pane_g2_ParamLimits

0x6be5,	// (0x00015d78) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0001ec59) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0001ec59) main_vded2_pane_g

0x6bf7,	// (0x00015d8a) vded2_slider_pane_ParamLimits

0x6bf7,	// (0x00015d8a) vded2_slider_pane

0x6c07,	// (0x00015d9a) aid_size_touch_vded2_end

0x6c11,	// (0x00015da4) aid_size_touch_vded2_playhead

0xd90b,	// (0x0001ca9e) aid_size_touch_vded2_start

0xd913,	// (0x0001caa6) vded2_slider_bg_pane

0xd91c,	// (0x0001caaf) vded2_slider_pane_g1

0xd925,	// (0x0001cab8) vded2_slider_pane_g2

0x6c1b,	// (0x00015dae) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0001ec5e) vded2_slider_pane_g

0xd92d,	// (0x0001cac0) vded2_slider_bg_pane_g1

0xd936,	// (0x0001cac9) vded2_slider_bg_pane_g2

0xd93f,	// (0x0001cad2) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0001ec65) vded2_slider_bg_pane_g

0x2b07,	// (0x00011c9a) aid_postcard_touch_down_pane_ParamLimits

0x2b07,	// (0x00011c9a) aid_postcard_touch_down_pane

0x2b1d,	// (0x00011cb0) aid_postcard_touch_up_pane_ParamLimits

0x2b1d,	// (0x00011cb0) aid_postcard_touch_up_pane

0x94b4,	// (0x00018647) main_blid2_pane

0xbeb3,	// (0x0001b046) popup_blid2_search_window

0x94b4,	// (0x00018647) blid2_gps_pane

0x94b4,	// (0x00018647) blid2_navig_pane

0x94b4,	// (0x00018647) blid2_search_pane

0x94b4,	// (0x00018647) blid2_tripm_pane

0x6c26,	// (0x00015db9) blid2_search_pane_g1_ParamLimits

0x6c26,	// (0x00015db9) blid2_search_pane_g1

0x6c40,	// (0x00015dd3) blid2_search_pane_t1_ParamLimits

0x6c40,	// (0x00015dd3) blid2_search_pane_t1

0x6c52,	// (0x00015de5) aid_size_cell_blid2_gps_ParamLimits

0x6c52,	// (0x00015de5) aid_size_cell_blid2_gps

0x6c6a,	// (0x00015dfd) blid2_gps_pane_g1_ParamLimits

0x6c6a,	// (0x00015dfd) blid2_gps_pane_g1

0x6c7e,	// (0x00015e11) grid_blid2_satellite_pane_ParamLimits

0x6c7e,	// (0x00015e11) grid_blid2_satellite_pane

0x6c98,	// (0x00015e2b) blid2_navig_pane_g1_ParamLimits

0x6c98,	// (0x00015e2b) blid2_navig_pane_g1

0x6ca4,	// (0x00015e37) blid2_navig_pane_t1_ParamLimits

0x6ca4,	// (0x00015e37) blid2_navig_pane_t1

0x6cbf,	// (0x00015e52) blid2_navig_pane_t2_ParamLimits

0x6cbf,	// (0x00015e52) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0001ec6c) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0001ec6c) blid2_navig_pane_t

0x6cda,	// (0x00015e6d) blid2_navig_ring_pane_ParamLimits

0x6cda,	// (0x00015e6d) blid2_navig_ring_pane

0x6cf3,	// (0x00015e86) blid2_speed_pane_ParamLimits

0x6cf3,	// (0x00015e86) blid2_speed_pane

0x6cff,	// (0x00015e92) blid2_tripm_pane_g1_ParamLimits

0x6cff,	// (0x00015e92) blid2_tripm_pane_g1

0x6d18,	// (0x00015eab) blid2_tripm_pane_g2_ParamLimits

0x6d18,	// (0x00015eab) blid2_tripm_pane_g2

0x6d2c,	// (0x00015ebf) blid2_tripm_pane_g3_ParamLimits

0x6d2c,	// (0x00015ebf) blid2_tripm_pane_g3

0x6d40,	// (0x00015ed3) blid2_tripm_pane_g4_ParamLimits

0x6d40,	// (0x00015ed3) blid2_tripm_pane_g4

0x6d54,	// (0x00015ee7) blid2_tripm_pane_g5_ParamLimits

0x6d54,	// (0x00015ee7) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0001ec71) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0001ec71) blid2_tripm_pane_g

0x6d7a,	// (0x00015f0d) blid2_tripm_pane_t1_ParamLimits

0x6d7a,	// (0x00015f0d) blid2_tripm_pane_t1

0x6d95,	// (0x00015f28) blid2_tripm_pane_t2_ParamLimits

0x6d95,	// (0x00015f28) blid2_tripm_pane_t2

0x6dae,	// (0x00015f41) blid2_tripm_pane_t3_ParamLimits

0x6dae,	// (0x00015f41) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0001ec7e) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0001ec7e) blid2_tripm_pane_t

0x6df5,	// (0x00015f88) cell_blid2_satellite_pane_ParamLimits

0x6df5,	// (0x00015f88) cell_blid2_satellite_pane

0x6e13,	// (0x00015fa6) cell_blid2_satellite_pane_g1

0xd948,	// (0x0001cadb) cell_blid2_satellite_pane_t1

0xc3c0,	// (0x0001b553) blid2_speed_pane_g1

0xd956,	// (0x0001cae9) blid2_speed_pane_t1

0xd964,	// (0x0001caf7) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0001ec87) blid2_speed_pane_t

0xc3c0,	// (0x0001b553) blid2_navig_ring_pane_g1

0x6e1c,	// (0x00015faf) blid2_navig_ring_pane_g2

0x6e24,	// (0x00015fb7) blid2_navig_ring_pane_g3

0x6e2c,	// (0x00015fbf) blid2_navig_ring_pane_g4

0x6e34,	// (0x00015fc7) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0001ec8c) blid2_navig_ring_pane_g

0x94b4,	// (0x00018647) bg_popup_window_pane_cp011

0xd972,	// (0x0001cb05) popup_blid2_search_window_g1

0xd97a,	// (0x0001cb0d) popup_blid2_search_window_t1

0xd988,	// (0x0001cb1b) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0001ec97) popup_blid2_search_window_t

0xa013,	// (0x000191a6) main_browser_pane_g1

0x9c87,	// (0x00018e1a) main_browser_pane_ParamLimits

0x9524,	// (0x000186b7) bg_button_pane_cp011_ParamLimits

0x5d5b,	// (0x00014eee) cell_vitu2_function_pane_g1_ParamLimits

0xbea5,	// (0x0001b038) bg_popup_sub_pane_cp22_ParamLimits

0x66a9,	// (0x0001583c) input_focus_pane_cp08_ParamLimits

0x66c0,	// (0x00015853) popup_vitu2_query_button_pane_ParamLimits

0x66c0,	// (0x00015853) popup_vitu2_query_button_pane

0x66d1,	// (0x00015864) popup_vitu2_query_input_button_pane

0xd4f0,	// (0x0001c683) popup_vitu2_query_window_g1_ParamLimits

0x66db,	// (0x0001586e) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0001eb98) popup_vitu2_query_window_g_ParamLimits

0x94b4,	// (0x00018647) bg_button_pane_cp026

0x6e3c,	// (0x00015fcf) popup_vitu2_query_input_button_pane_g1

0x94b4,	// (0x00018647) bg_button_pane_cp025

0xd996,	// (0x0001cb29) popup_vitu2_query_button_pane_t1

0x419d,	// (0x00013330) main_mp3_pane_t6

0x41ab,	// (0x0001333e) popup_slider_window_cp01

0xd065,	// (0x0001c1f8) cam4_battery_pane

0xd0be,	// (0x0001c251) cam4_battery_pane_cp02

0xd7d5,	// (0x0001c968) cam4_battery_pane_cp01

0xd7d5,	// (0x0001c968) cam4_battery_pane_cp03

0xc3c0,	// (0x0001b553) cam4_battery_pane_g1

0xd9a4,	// (0x0001cb37) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0001ec9c) cam4_battery_pane_g

0xc28c,	// (0x0001b41f) popup_blid_sat_info2_window_t11

0xa81b,	// (0x000199ae) aid_size_touch_mv_arrow_left_ParamLimits

0xa844,	// (0x000199d7) aid_size_touch_mv_arrow_right_ParamLimits

0xa8a2,	// (0x00019a35) navi_pane_g1_ParamLimits

0xa8ae,	// (0x00019a41) navi_pane_g2_ParamLimits

0xa8dc,	// (0x00019a6f) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0001e55d) navi_pane_g_ParamLimits

0x25ac,	// (0x0001173f) navi_pane_mv_t1_ParamLimits

0x4e44,	// (0x00013fd7) grid_imed_effect_pane_ParamLimits

0x1204,	// (0x00010397) aid_placing_vt_slider_lsc

0x9f62,	// (0x000190f5) aid_placing_vt_slider_prt

0x9524,	// (0x000186b7) bg_tb_trans_pane_cp01_ParamLimits

0xc543,	// (0x0001b6d6) popup_image_details_window_g1_ParamLimits

0xc556,	// (0x0001b6e9) popup_image_details_window_g2_ParamLimits

0xc56b,	// (0x0001b6fe) popup_image_details_window_g3_ParamLimits

0xc56b,	// (0x0001b6fe) popup_image_details_window_g3

0xf6fd,	// (0x0001e890) popup_image_details_window_g_ParamLimits

0xc57f,	// (0x0001b712) popup_image_details_window_t1_ParamLimits

0xc591,	// (0x0001b724) popup_image_details_window_t2_ParamLimits

0xc5aa,	// (0x0001b73d) popup_image_details_window_t3_ParamLimits

0xc5be,	// (0x0001b751) popup_image_details_window_t4_ParamLimits

0xc5d9,	// (0x0001b76c) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0001e897) popup_image_details_window_t_ParamLimits

0x6a4b,	// (0x00015bde) cl_header_name_pane_ParamLimits

0x6a4b,	// (0x00015bde) cl_header_name_pane

0x6e44,	// (0x00015fd7) cl_header_name_pane_t1_ParamLimits

0x6e44,	// (0x00015fd7) cl_header_name_pane_t1

0x6e65,	// (0x00015ff8) cl_header_name_pane_t2_ParamLimits

0x6e65,	// (0x00015ff8) cl_header_name_pane_t2

0x6ea7,	// (0x0001603a) cl_header_name_pane_t3_ParamLimits

0x6ea7,	// (0x0001603a) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0001eca1) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0001eca1) cl_header_name_pane_t

0xa96b,	// (0x00019afe) navi_pane_mv_g2_ParamLimits

0xd14d,	// (0x0001c2e0) field_vitu2_entry_pane_g1_ParamLimits

0xd159,	// (0x0001c2ec) field_vitu2_entry_pane_g2_ParamLimits

0xd165,	// (0x0001c2f8) field_vitu2_entry_pane_g3_ParamLimits

0xd165,	// (0x0001c2f8) field_vitu2_entry_pane_g3

0xf904,	// (0x0001ea97) field_vitu2_entry_pane_g_ParamLimits

0xd198,	// (0x0001c32b) cell_vitu2_itu_pane_g1_ParamLimits

0x5c03,	// (0x00014d96) cell_vitu2_itu_pane_g2_ParamLimits

0x5c03,	// (0x00014d96) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0001eaa3) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0001eaa3) cell_vitu2_itu_pane_g

0x9524,	// (0x000186b7) bg_vkb2_func_pane_cp05_ParamLimits

0x9524,	// (0x000186b7) bg_vkb2_func_pane_cp05

0x9524,	// (0x000186b7) bg_vkb2_func_pane_cp03

0x9524,	// (0x000186b7) bg_vkb2_func_pane_cp04

0x9524,	// (0x000186b7) bg_vkb2_func_pane_cp10_ParamLimits

0x9524,	// (0x000186b7) bg_vkb2_func_pane_cp10

0x69f1,	// (0x00015b84) bg_vkb2_func_pane_cp08

0x69d7,	// (0x00015b6a) bg_vkb2_func_pane_cp06

0x69e5,	// (0x00015b78) bg_vkb2_func_pane_cp07

0xd89c,	// (0x0001ca2f) bg_vkb2_func_pane_cp11_ParamLimits

0xd89c,	// (0x0001ca2f) bg_vkb2_func_pane_cp11

0xd8b1,	// (0x0001ca44) bg_vkb2_func_pane_cp12_ParamLimits

0xd8b1,	// (0x0001ca44) bg_vkb2_func_pane_cp12

0x94b4,	// (0x00018647) bg_vkb2_func_pane_cp09

0xd1b4,	// (0x0001c347) bg_vkb2_func_pane_g1

0xa124,	// (0x000192b7) bg_vkb2_func_pane_g2

0xd1bc,	// (0x0001c34f) bg_vkb2_func_pane_g3

0xd1c4,	// (0x0001c357) bg_vkb2_func_pane_g4

0xd495,	// (0x0001c628) bg_vkb2_func_pane_g5

0xd1dc,	// (0x0001c36f) bg_vkb2_func_pane_g6

0xd1e4,	// (0x0001c377) bg_vkb2_func_pane_g7

0xd1d4,	// (0x0001c367) bg_vkb2_func_pane_g8

0xa104,	// (0x00019297) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0001eca8) bg_vkb2_func_pane_g

0x6d68,	// (0x00015efb) blid2_tripm_pane_g6_ParamLimits

0x6d68,	// (0x00015efb) blid2_tripm_pane_g6

0xcf36,	// (0x0001c0c9) mp4_progress_pane_g1

0x6de1,	// (0x00015f74) blid2_tripm_values_pane_ParamLimits

0x6de1,	// (0x00015f74) blid2_tripm_values_pane

0x6ed8,	// (0x0001606b) blid2_tripm_values_pane_t1

0x6ee6,	// (0x00016079) blid2_tripm_values_pane_t2

0x6ef4,	// (0x00016087) blid2_tripm_values_pane_t3

0x6f02,	// (0x00016095) blid2_tripm_values_pane_t4

0x6f10,	// (0x000160a3) blid2_tripm_values_pane_t5

0x6f1e,	// (0x000160b1) blid2_tripm_values_pane_t6

0x6f2c,	// (0x000160bf) blid2_tripm_values_pane_t7

0x6f3a,	// (0x000160cd) blid2_tripm_values_pane_t8

0x6f48,	// (0x000160db) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0001ecbb) blid2_tripm_values_pane_t

0x1246,	// (0x000103d9) call_video_pane_t1_ParamLimits

0x1264,	// (0x000103f7) call_video_pane_t2_ParamLimits

0xf253,	// (0x0001e3e6) call_video_pane_t_ParamLimits

0x2a85,	// (0x00011c18) msg_header_pane_g1_ParamLimits

0xab6d,	// (0x00019d00) msg_header_pane_g2_ParamLimits

0xab6d,	// (0x00019d00) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0001e600) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0001e600) msg_header_pane_g

0x9c87,	// (0x00018e1a) main_clock2_pane_ParamLimits

0x4b45,	// (0x00013cd8) grid_clock2_toolbar_pane_ParamLimits

0x4b45,	// (0x00013cd8) grid_clock2_toolbar_pane

0x4b45,	// (0x00013cd8) listscroll_clock2_pane_ParamLimits

0x4b45,	// (0x00013cd8) listscroll_clock2_pane

0x4c29,	// (0x00013dbc) main_clock2_pane_t3_ParamLimits

0x4c29,	// (0x00013dbc) main_clock2_pane_t3

0x4c4d,	// (0x00013de0) main_clock2_pane_t4_ParamLimits

0x4c4d,	// (0x00013de0) main_clock2_pane_t4

0xd9ae,	// (0x0001cb41) cell_clock2_toolbar_pane

0xd9b6,	// (0x0001cb49) cell_clock2_toolbar_pane_cp01

0xd9b6,	// (0x0001cb49) cell_clock2_toolbar_pane_cp02

0xd9be,	// (0x0001cb51) cell_clock2_toolbar_pane_cp03

0xd9c6,	// (0x0001cb59) list_clock2_pane

0xa791,	// (0x00019924) scroll_pane_cp10

0xd9ce,	// (0x0001cb61) list_single_clock2_pane_ParamLimits

0xd9ce,	// (0x0001cb61) list_single_clock2_pane

0x9ec1,	// (0x00019054) list_highlight_pane_cp08

0xd9db,	// (0x0001cb6e) list_single_clock2_pane_t1

0xd9e9,	// (0x0001cb7c) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0001ecce) list_single_clock2_pane_t

0x94b4,	// (0x00018647) bg_button_pane_cp10

0xd9f7,	// (0x0001cb8a) cell_clock2_toolbar_pane_g1

0x2a93,	// (0x00011c26) aid_main_viewer_pane_g1_ParamLimits

0x2a93,	// (0x00011c26) aid_main_viewer_pane_g1

0x2aa1,	// (0x00011c34) aid_main_viewer_pane_g2_ParamLimits

0x2aa1,	// (0x00011c34) aid_main_viewer_pane_g2

0x2aaf,	// (0x00011c42) aid_main_viewer_pane_g3_ParamLimits

0x2aaf,	// (0x00011c42) aid_main_viewer_pane_g3

0x2abe,	// (0x00011c51) aid_main_viewer_pane_g4_ParamLimits

0x2abe,	// (0x00011c51) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0001e611) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0001e611) aid_main_viewer_pane_g

0x33c4,	// (0x00012557) main_calc_pane_ParamLimits

0x33d8,	// (0x0001256b) main_dialer2_pane_ParamLimits

0x94b4,	// (0x00018647) main_cam6_pane

0x94b4,	// (0x00018647) main_vid6_pane

0x4b51,	// (0x00013ce4) listscroll_gen_pane_cp06_ParamLimits

0x4b51,	// (0x00013ce4) listscroll_gen_pane_cp06

0x4c70,	// (0x00013e03) main_clock2_pane_t5_ParamLimits

0x4c70,	// (0x00013e03) main_clock2_pane_t5

0x4cce,	// (0x00013e61) aid_call2_pane_cp10_ParamLimits

0x4ce0,	// (0x00013e73) aid_call_pane_cp10_ParamLimits

0xa80f,	// (0x000199a2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa80f,	// (0x000199a2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4cf2,	// (0x00013e85) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4cf2,	// (0x00013e85) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa80f,	// (0x000199a2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0001e94c) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d08,	// (0x00013e9b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5378,	// (0x0001450b) cell_dialer2_keypad_pane_g2_ParamLimits

0x5378,	// (0x0001450b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0001ea36) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0001ea36) cell_dialer2_keypad_pane_g

0x5394,	// (0x00014527) cell_dialer2_keypad_pane_t1

0x6078,	// (0x0001520b) main_cset_text2_pane_ParamLimits

0x6078,	// (0x0001520b) main_cset_text2_pane

0xd6dc,	// (0x0001c86f) area_vitu2_query_pane_g1_ParamLimits

0x6976,	// (0x00015b09) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0001ebeb) area_vitu2_query_pane_g_ParamLimits

0xd760,	// (0x0001c8f3) area_vitu2_query_pane_t7_ParamLimits

0xd760,	// (0x0001c8f3) area_vitu2_query_pane_t7

0x69d7,	// (0x00015b6a) bg_button_pane_cp018_ParamLimits

0x69e5,	// (0x00015b78) bg_button_pane_cp021_ParamLimits

0x69f1,	// (0x00015b84) bg_button_pane_cp022_ParamLimits

0x69f1,	// (0x00015b84) bg_vkb2_func_pane_cp08_ParamLimits

0x69d7,	// (0x00015b6a) bg_vkb2_func_pane_cp06_ParamLimits

0x69e5,	// (0x00015b78) bg_vkb2_func_pane_cp07_ParamLimits

0x6a00,	// (0x00015b93) input_focus_pane_cp09_ParamLimits

0xd9ff,	// (0x0001cb92) cam6_autofocus_pane_ParamLimits

0xd9ff,	// (0x0001cb92) cam6_autofocus_pane

0x6f56,	// (0x000160e9) cam6_image_uncrop_pane_ParamLimits

0x6f56,	// (0x000160e9) cam6_image_uncrop_pane

0x6f65,	// (0x000160f8) cam6_indi_pane_ParamLimits

0x6f65,	// (0x000160f8) cam6_indi_pane

0x6f7b,	// (0x0001610e) cam6_mode_pane_ParamLimits

0x6f7b,	// (0x0001610e) cam6_mode_pane

0x6f8d,	// (0x00016120) cam6_timer_pane_ParamLimits

0x6f8d,	// (0x00016120) cam6_timer_pane

0x6f99,	// (0x0001612c) cam6_zoom_pane_ParamLimits

0x6f99,	// (0x0001612c) cam6_zoom_pane

0x6fa5,	// (0x00016138) cam6_mode_pane_g1_ParamLimits

0x6fa5,	// (0x00016138) cam6_mode_pane_g1

0x6fb5,	// (0x00016148) cam6_mode_pane_g2_ParamLimits

0x6fb5,	// (0x00016148) cam6_mode_pane_g2

0x6fc5,	// (0x00016158) cam6_mode_pane_g3_ParamLimits

0x6fc5,	// (0x00016158) cam6_mode_pane_g3

0x6fd5,	// (0x00016168) cam6_mode_pane_g4_ParamLimits

0x6fd5,	// (0x00016168) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0001ecd3) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0001ecd3) cam6_mode_pane_g

0xd307,	// (0x0001c49a) bg_tb_trans_pane_cp08_ParamLimits

0xd307,	// (0x0001c49a) bg_tb_trans_pane_cp08

0xda0d,	// (0x0001cba0) cam6_battery_pane_ParamLimits

0xda0d,	// (0x0001cba0) cam6_battery_pane

0xda23,	// (0x0001cbb6) cam6_indi_pane_g1_ParamLimits

0xda23,	// (0x0001cbb6) cam6_indi_pane_g1

0xda35,	// (0x0001cbc8) cam6_indi_pane_g2_ParamLimits

0xda35,	// (0x0001cbc8) cam6_indi_pane_g2

0xda47,	// (0x0001cbda) cam6_indi_pane_g3_ParamLimits

0xda47,	// (0x0001cbda) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0001ecdc) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0001ecdc) cam6_indi_pane_g

0xda59,	// (0x0001cbec) cam6_indi_pane_t1_ParamLimits

0xda59,	// (0x0001cbec) cam6_indi_pane_t1

0x6fe5,	// (0x00016178) cam6_autofocus_pane_g1

0x6fed,	// (0x00016180) cam6_autofocus_pane_g2

0x6ff5,	// (0x00016188) cam6_autofocus_pane_g3

0x6ffd,	// (0x00016190) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0001ece3) cam6_autofocus_pane_g

0xda7f,	// (0x0001cc12) cam6_timer_pane_g1

0xda87,	// (0x0001cc1a) cam6_timer_pane_t1

0xda95,	// (0x0001cc28) cam6_zoom_cont_pane

0xda9d,	// (0x0001cc30) cam6_zoom_pane_g1

0xdaa5,	// (0x0001cc38) cam6_zoom_pane_g2

0x7005,	// (0x00016198) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0001ecec) cam6_zoom_pane_g

0xc3c0,	// (0x0001b553) cam6_battery_pane_g1

0xc3c0,	// (0x0001b553) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0001e854) cam6_battery_pane_g

0xdaad,	// (0x0001cc40) cam6_zoom_cont_pane_g1

0xdab6,	// (0x0001cc49) cam6_zoom_cont_pane_g2

0xdabf,	// (0x0001cc52) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0001ecf3) cam6_zoom_cont_pane_g

0x7022,	// (0x000161b5) cam6_mode_pane_cp_ParamLimits

0x7022,	// (0x000161b5) cam6_mode_pane_cp

0x6f99,	// (0x0001612c) cam6_zoom_pane_cp_ParamLimits

0x6f99,	// (0x0001612c) cam6_zoom_pane_cp

0x7034,	// (0x000161c7) vid6_image_uncrop_cif_pane_ParamLimits

0x7034,	// (0x000161c7) vid6_image_uncrop_cif_pane

0x7044,	// (0x000161d7) vid6_image_uncrop_nhd_pane_ParamLimits

0x7044,	// (0x000161d7) vid6_image_uncrop_nhd_pane

0x6f56,	// (0x000160e9) vid6_image_uncrop_vga_pane_ParamLimits

0x6f56,	// (0x000160e9) vid6_image_uncrop_vga_pane

0x7053,	// (0x000161e6) vid6_image_uncrop_wvga_pane_ParamLimits

0x7053,	// (0x000161e6) vid6_image_uncrop_wvga_pane

0x7062,	// (0x000161f5) vid6_indi_pane_ParamLimits

0x7062,	// (0x000161f5) vid6_indi_pane

0xd307,	// (0x0001c49a) bg_tb_trans_pane_cp09_ParamLimits

0xd307,	// (0x0001c49a) bg_tb_trans_pane_cp09

0xdad7,	// (0x0001cc6a) cam6_battery_pane_cp_ParamLimits

0xdad7,	// (0x0001cc6a) cam6_battery_pane_cp

0xdae3,	// (0x0001cc76) vid6_indi_pane_g1_ParamLimits

0xdae3,	// (0x0001cc76) vid6_indi_pane_g1

0xdaf5,	// (0x0001cc88) vid6_indi_pane_g2_ParamLimits

0xdaf5,	// (0x0001cc88) vid6_indi_pane_g2

0xdb07,	// (0x0001cc9a) vid6_indi_pane_g3_ParamLimits

0xdb07,	// (0x0001cc9a) vid6_indi_pane_g3

0xdb1c,	// (0x0001ccaf) vid6_indi_pane_g4_ParamLimits

0xdb1c,	// (0x0001ccaf) vid6_indi_pane_g4

0xdb31,	// (0x0001ccc4) vid6_indi_pane_g5_ParamLimits

0xdb31,	// (0x0001ccc4) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0001ecfa) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0001ecfa) vid6_indi_pane_g

0xdb4b,	// (0x0001ccde) vid6_indi_pane_t1_ParamLimits

0xdb4b,	// (0x0001ccde) vid6_indi_pane_t1

0xdb61,	// (0x0001ccf4) vid6_indi_pane_t2_ParamLimits

0xdb61,	// (0x0001ccf4) vid6_indi_pane_t2

0xdb89,	// (0x0001cd1c) vid6_indi_pane_t3_ParamLimits

0xdb89,	// (0x0001cd1c) vid6_indi_pane_t3

0xdbb1,	// (0x0001cd44) vid6_indi_pane_t4_ParamLimits

0xdbb1,	// (0x0001cd44) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0001ed05) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0001ed05) vid6_indi_pane_t

0xdbd5,	// (0x0001cd68) wait_bar_pane_cp08

0x707a,	// (0x0001620d) main_cset_text2_pane_t1_ParamLimits

0x707a,	// (0x0001620d) main_cset_text2_pane_t1

0x700d,	// (0x000161a0) listscroll_gen_pane_cp06_t1_ParamLimits

0x700d,	// (0x000161a0) listscroll_gen_pane_cp06_t1

0x94b4,	// (0x00018647) main_cam6_set_pane

0xc623,	// (0x0001b7b6) bg_tb_trans_pane_cp06_ParamLimits

0xd06d,	// (0x0001c200) cam4_indicators_pane_g1_ParamLimits

0xd07e,	// (0x0001c211) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0001ea73) cam4_indicators_pane_g_ParamLimits

0xd09c,	// (0x0001c22f) cam4_indicators_pane_t1_ParamLimits

0x9524,	// (0x000186b7) bg_tb_trans_pane_cp07_ParamLimits

0xd0c8,	// (0x0001c25b) vid4_indicators_pane_g1_ParamLimits

0xd0dc,	// (0x0001c26f) vid4_indicators_pane_g2_ParamLimits

0xd0f0,	// (0x0001c283) vid4_indicators_pane_g3_ParamLimits

0xd101,	// (0x0001c294) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0001ea85) vid4_indicators_pane_g_ParamLimits

0xd11f,	// (0x0001c2b2) vid4_indicators_pane_t1_ParamLimits

0xd7dd,	// (0x0001c970) vid4_progress_pane_g1_ParamLimits

0xd7ed,	// (0x0001c980) vid4_progress_pane_g2_ParamLimits

0x6b3b,	// (0x00015cce) vid4_progress_pane_g3_ParamLimits

0xd7fd,	// (0x0001c990) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0001ec36) vid4_progress_pane_g_ParamLimits

0x6b4d,	// (0x00015ce0) vid4_progress_pane_t1_ParamLimits

0xd815,	// (0x0001c9a8) vid4_progress_pane_t2_ParamLimits

0xd82a,	// (0x0001c9bd) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0001ec41) vid4_progress_pane_t_ParamLimits

0x6b65,	// (0x00015cf8) wait_bar_pane_cp07_ParamLimits

0x7097,	// (0x0001622a) main_cam6_set_pane_g2_ParamLimits

0x7097,	// (0x0001622a) main_cam6_set_pane_g2

0x70bb,	// (0x0001624e) main_cset6_listscroll_pane_ParamLimits

0x70bb,	// (0x0001624e) main_cset6_listscroll_pane

0x70db,	// (0x0001626e) main_cset6_slider_pane_ParamLimits

0x70db,	// (0x0001626e) main_cset6_slider_pane

0x70f1,	// (0x00016284) main_cset6_text2_pane_ParamLimits

0x70f1,	// (0x00016284) main_cset6_text2_pane

0xdbe4,	// (0x0001cd77) main_cset6_text_pane

0xdbec,	// (0x0001cd7f) main_cset_list_pane_copy1_ParamLimits

0xdbec,	// (0x0001cd7f) main_cset_list_pane_copy1

0xdbfc,	// (0x0001cd8f) scroll_pane_cp028_copy1

0x70ff,	// (0x00016292) cset_list_set_pane_copy1

0x7110,	// (0x000162a3) aid_position_infowindow_above_copy1

0x7118,	// (0x000162ab) aid_position_infowindow_below_copy1

0x7120,	// (0x000162b3) cset_list_set_pane_g1_copy1

0x7128,	// (0x000162bb) cset_list_set_pane_g3_copy1_ParamLimits

0x7128,	// (0x000162bb) cset_list_set_pane_g3_copy1

0x7137,	// (0x000162ca) cset_list_set_pane_t1_copy1_ParamLimits

0x7137,	// (0x000162ca) cset_list_set_pane_t1_copy1

0x9524,	// (0x000186b7) list_highlight_pane_cp021_copy1_ParamLimits

0x9524,	// (0x000186b7) list_highlight_pane_cp021_copy1

0xdc05,	// (0x0001cd98) cset6_slider_pane_ParamLimits

0xdc05,	// (0x0001cd98) cset6_slider_pane

0xdc31,	// (0x0001cdc4) main_cset6_slider_pane_g1_ParamLimits

0xdc31,	// (0x0001cdc4) main_cset6_slider_pane_g1

0x714c,	// (0x000162df) main_cset6_slider_pane_g2_ParamLimits

0x714c,	// (0x000162df) main_cset6_slider_pane_g2

0xdc59,	// (0x0001cdec) main_cset6_slider_pane_g3_ParamLimits

0xdc59,	// (0x0001cdec) main_cset6_slider_pane_g3

0x7174,	// (0x00016307) main_cset6_slider_pane_g4_ParamLimits

0x7174,	// (0x00016307) main_cset6_slider_pane_g4

0x7180,	// (0x00016313) main_cset6_slider_pane_g5_ParamLimits

0x7180,	// (0x00016313) main_cset6_slider_pane_g5

0xd2e3,	// (0x0001c476) main_cset6_slider_pane_g7_ParamLimits

0xd2e3,	// (0x0001c476) main_cset6_slider_pane_g7

0xd2ef,	// (0x0001c482) main_cset6_slider_pane_g8_ParamLimits

0xd2ef,	// (0x0001c482) main_cset6_slider_pane_g8

0x6125,	// (0x000152b8) main_cset6_slider_pane_g9_ParamLimits

0x6125,	// (0x000152b8) main_cset6_slider_pane_g9

0x6131,	// (0x000152c4) main_cset6_slider_pane_g10_ParamLimits

0x6131,	// (0x000152c4) main_cset6_slider_pane_g10

0x613d,	// (0x000152d0) main_cset6_slider_pane_g11_ParamLimits

0x613d,	// (0x000152d0) main_cset6_slider_pane_g11

0x6149,	// (0x000152dc) main_cset6_slider_pane_g12_ParamLimits

0x6149,	// (0x000152dc) main_cset6_slider_pane_g12

0x6155,	// (0x000152e8) main_cset6_slider_pane_g13_ParamLimits

0x6155,	// (0x000152e8) main_cset6_slider_pane_g13

0x6161,	// (0x000152f4) main_cset6_slider_pane_g14_ParamLimits

0x6161,	// (0x000152f4) main_cset6_slider_pane_g14

0x718c,	// (0x0001631f) main_cset6_slider_pane_g15_ParamLimits

0x718c,	// (0x0001631f) main_cset6_slider_pane_g15

0x6185,	// (0x00015318) main_cset6_slider_pane_g16_ParamLimits

0x6185,	// (0x00015318) main_cset6_slider_pane_g16

0x6191,	// (0x00015324) main_cset6_slider_pane_g17_ParamLimits

0x6191,	// (0x00015324) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0001ed0e) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0001ed0e) main_cset6_slider_pane_g

0xdc65,	// (0x0001cdf8) main_cset6_slider_pane_t1_ParamLimits

0xdc65,	// (0x0001cdf8) main_cset6_slider_pane_t1

0x71bc,	// (0x0001634f) main_cset6_slider_pane_t2_ParamLimits

0x71bc,	// (0x0001634f) main_cset6_slider_pane_t2

0x71e7,	// (0x0001637a) main_cset6_slider_pane_t3_ParamLimits

0x71e7,	// (0x0001637a) main_cset6_slider_pane_t3

0x7212,	// (0x000163a5) main_cset6_slider_pane_t4_ParamLimits

0x7212,	// (0x000163a5) main_cset6_slider_pane_t4

0x723d,	// (0x000163d0) main_cset6_slider_pane_t5_ParamLimits

0x723d,	// (0x000163d0) main_cset6_slider_pane_t5

0xdca6,	// (0x0001ce39) main_cset6_slider_pane_t7_ParamLimits

0xdca6,	// (0x0001ce39) main_cset6_slider_pane_t7

0x7268,	// (0x000163fb) main_cset6_slider_pane_t8_ParamLimits

0x7268,	// (0x000163fb) main_cset6_slider_pane_t8

0x728c,	// (0x0001641f) main_cset6_slider_pane_t9_ParamLimits

0x728c,	// (0x0001641f) main_cset6_slider_pane_t9

0x72b0,	// (0x00016443) main_cset6_slider_pane_t10_ParamLimits

0x72b0,	// (0x00016443) main_cset6_slider_pane_t10

0x72d4,	// (0x00016467) main_cset6_slider_pane_t11_ParamLimits

0x72d4,	// (0x00016467) main_cset6_slider_pane_t11

0xdcdc,	// (0x0001ce6f) main_cset6_slider_pane_t14_ParamLimits

0xdcdc,	// (0x0001ce6f) main_cset6_slider_pane_t14

0xdd15,	// (0x0001cea8) main_cset6_slider_pane_t15_ParamLimits

0xdd15,	// (0x0001cea8) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0001ed33) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0001ed33) main_cset6_slider_pane_t

0xd42d,	// (0x0001c5c0) cset_slider_pane_g1_copy1

0xd436,	// (0x0001c5c9) cset_slider_pane_g2_copy1

0xd43f,	// (0x0001c5d2) cset_slider_pane_g3_copy1

0x94b4,	// (0x00018647) bg_popup_sub_pane_cp011_copy1

0xdd4e,	// (0x0001cee1) main_cset_text_pane_g1_copy1

0xd504,	// (0x0001c697) main_cset_text_pane_t1_copy1

0xd512,	// (0x0001c6a5) main_cset_text_pane_t2_copy1

0xd520,	// (0x0001c6b3) main_cset_text_pane_t3_copy1

0xd52e,	// (0x0001c6c1) main_cset_text_pane_t4_copy1

0xd53c,	// (0x0001c6cf) main_cset_text_pane_t5_copy1

0xdd56,	// (0x0001cee9) main_cset_text_pane_t6_copy1

0xdd64,	// (0x0001cef7) main_cset_text_pane_t7_copy1

0x707a,	// (0x0001620d) main_cset_text2_pane_t1_copy1

0x9524,	// (0x000186b7) main_ncimui_pane

0x3622,	// (0x000127b5) popup_query_ncimui_window_ParamLimits

0x3622,	// (0x000127b5) popup_query_ncimui_window

0xc688,	// (0x0001b81b) field_cale_ev2_pane_g4_ParamLimits

0xc688,	// (0x0001b81b) field_cale_ev2_pane_g4

0x5258,	// (0x000143eb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5258,	// (0x000143eb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0001ea0d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0001ea0d) cell_video_dialer_keypad_pane_g

0x5270,	// (0x00014403) cell_video_dialer_keypad_pane_t1

0x94b4,	// (0x00018647) bg_popup_window_pane_cp012

0xa65e,	// (0x000197f1) heading_pane_cp06

0xdd90,	// (0x0001cf23) ncim_query_content_pane

0x94b4,	// (0x00018647) bg_popup_heading_pane_cp01

0xdd98,	// (0x0001cf2b) ncim_heading_pane_t1

0xdda6,	// (0x0001cf39) ncim_indicator_popup_pane

0xddb8,	// (0x0001cf4b) ncim_query_button_pane

0xddcc,	// (0x0001cf5f) ncim_query_content_pane_t1

0xddde,	// (0x0001cf71) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0001ed77) ncim_query_content_pane_t

0xde18,	// (0x0001cfab) ncim_query_list_pane

0xde2a,	// (0x0001cfbd) ncim_query_popup_pane

0xdda6,	// (0x0001cf39) ncim_indicator_popup_pane_ParamLimits

0x74f9,	// (0x0001668c) ncim_query_content_pane_g1_ParamLimits

0x74f9,	// (0x0001668c) ncim_query_content_pane_g1

0xddcc,	// (0x0001cf5f) ncim_query_content_pane_t1_ParamLimits

0xddde,	// (0x0001cf71) ncim_query_content_pane_t2_ParamLimits

0x7505,	// (0x00016698) ncim_query_content_pane_t3_ParamLimits

0x7505,	// (0x00016698) ncim_query_content_pane_t3

0x752d,	// (0x000166c0) ncim_query_content_pane_t4_ParamLimits

0x752d,	// (0x000166c0) ncim_query_content_pane_t4

0x7555,	// (0x000166e8) ncim_query_content_pane_t5_ParamLimits

0x7555,	// (0x000166e8) ncim_query_content_pane_t5

0xddf0,	// (0x0001cf83) ncim_query_content_pane_t6_ParamLimits

0xddf0,	// (0x0001cf83) ncim_query_content_pane_t6

0xfbe4,	// (0x0001ed77) ncim_query_content_pane_t_ParamLimits

0xde18,	// (0x0001cfab) ncim_query_list_pane_ParamLimits

0xde2a,	// (0x0001cfbd) ncim_query_popup_pane_ParamLimits

0xde3e,	// (0x0001cfd1) wait_bar_pane_cp04

0x94b4,	// (0x00018647) input_focus_pane_cp011

0xde46,	// (0x0001cfd9) ncim_query_popup_pane_t1

0xde54,	// (0x0001cfe7) ncim_list_query_list_pane_ParamLimits

0xde54,	// (0x0001cfe7) ncim_list_query_list_pane

0x94b4,	// (0x00018647) bg_button_pane_cp027

0xde61,	// (0x0001cff4) ncim_query_button_pane_g1

0x94b4,	// (0x00018647) list_highlight_pane_cp012

0xde6b,	// (0x0001cffe) ncim_list_query_list_pane_g1

0xde73,	// (0x0001d006) ncim_list_query_list_pane_t1

0xd08d,	// (0x0001c220) cam4_indicators_pane_g3_ParamLimits

0xd08d,	// (0x0001c220) cam4_indicators_pane_g3

0xd10d,	// (0x0001c2a0) vid4_indicators_pane_g5_ParamLimits

0xd10d,	// (0x0001c2a0) vid4_indicators_pane_g5

0xd809,	// (0x0001c99c) vid4_progress_pane_g5_ParamLimits

0xd809,	// (0x0001c99c) vid4_progress_pane_g5

0x73e4,	// (0x00016577) main_ncimui_pane_g1

0x744d,	// (0x000165e0) ncimui_group_query_pane_ParamLimits

0x744d,	// (0x000165e0) ncimui_group_query_pane

0x7495,	// (0x00016628) ncimui_list_pane_ParamLimits

0x7495,	// (0x00016628) ncimui_list_pane

0x74bc,	// (0x0001664f) ncimui_text_pane_ParamLimits

0x74bc,	// (0x0001664f) ncimui_text_pane

0x757d,	// (0x00016710) ncimui_text_pane_t1_ParamLimits

0x757d,	// (0x00016710) ncimui_text_pane_t1

0xde81,	// (0x0001d014) ncimui_list_single_graphic_pane_ParamLimits

0xde81,	// (0x0001d014) ncimui_list_single_graphic_pane

0x759b,	// (0x0001672e) ncimui_query_pane_ParamLimits

0x759b,	// (0x0001672e) ncimui_query_pane

0x94b4,	// (0x00018647) list_highlight_pane_cp013

0xde91,	// (0x0001d024) ncim_list_query_list_pane_t1_copy1

0xde6b,	// (0x0001cffe) ncim_list_single_graphic_pane_g1

0x75ae,	// (0x00016741) ncim_query_button_pane_cp01

0x75ba,	// (0x0001674d) ncim_query_entry_pane_ParamLimits

0x75ba,	// (0x0001674d) ncim_query_entry_pane

0x75cd,	// (0x00016760) ncimui_query_pane_g1

0x75d9,	// (0x0001676c) ncimui_query_pane_t1_ParamLimits

0x75d9,	// (0x0001676c) ncimui_query_pane_t1

0x9524,	// (0x000186b7) input_focus_pane_cp012

0xde9f,	// (0x0001d032) ncim_query_entry_pane_t1

0x9c87,	// (0x00018e1a) main_im_pane_ParamLimits

0x9524,	// (0x000186b7) main_mobtv_pane_ParamLimits

0x9524,	// (0x000186b7) main_mobtv_pane

0x71a4,	// (0x00016337) main_cset6_slider_pane_g18_ParamLimits

0x71a4,	// (0x00016337) main_cset6_slider_pane_g18

0x71b0,	// (0x00016343) main_cset6_slider_pane_g19_ParamLimits

0x71b0,	// (0x00016343) main_cset6_slider_pane_g19

0xd315,	// (0x0001c4a8) bg_main_mobtv_pane_ParamLimits

0xd315,	// (0x0001c4a8) bg_main_mobtv_pane

0x75f2,	// (0x00016785) main_mobtv_info_pane

0x75fb,	// (0x0001678e) main_mobtv_loading_pane_ParamLimits

0x75fb,	// (0x0001678e) main_mobtv_loading_pane

0xdeb1,	// (0x0001d044) main_mobtv_pg_channel_list_pane

0xdebb,	// (0x0001d04e) main_mobtv_pg_hdr_pane

0x7608,	// (0x0001679b) main_mobtv_programe_curr_pane_ParamLimits

0x7608,	// (0x0001679b) main_mobtv_programe_curr_pane

0x7615,	// (0x000167a8) main_mobtv_programe_next_pane_ParamLimits

0x7615,	// (0x000167a8) main_mobtv_programe_next_pane

0xdec4,	// (0x0001d057) popup_mobtv_noti_window

0xc3c0,	// (0x0001b553) main_tv_pg_hdr_pane_g1

0xdecc,	// (0x0001d05f) main_tv_pg_hdr_pane_g2

0xded4,	// (0x0001d067) main_tv_pg_hdr_pane_g3

0xdedc,	// (0x0001d06f) main_tv_pg_hdr_pane_g4

0xdee4,	// (0x0001d077) main_tv_pg_hdr_pane_g5

0xdeee,	// (0x0001d081) main_tv_pg_hdr_pane_g6

0xdef8,	// (0x0001d08b) main_tv_pg_hdr_pane_g7

0xdf02,	// (0x0001d095) main_tv_pg_hdr_pane_g8

0xdf0c,	// (0x0001d09f) main_tv_pg_hdr_pane_g9

0xdf16,	// (0x0001d0a9) main_tv_pg_hdr_pane_g10

0xdf20,	// (0x0001d0b3) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0001ed84) main_tv_pg_hdr_pane_g

0xdf2a,	// (0x0001d0bd) main_tv_pg_hdr_pane_t1

0xdf38,	// (0x0001d0cb) main_tv_pg_hdr_pane_t2

0xdf46,	// (0x0001d0d9) main_tv_pg_hdr_pane_t3

0xdf56,	// (0x0001d0e9) main_tv_pg_hdr_pane_t4

0xdf66,	// (0x0001d0f9) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0001ed9b) main_tv_pg_hdr_pane_t

0xdf76,	// (0x0001d109) single_mobtv_pg_channel_pane_ParamLimits

0xdf76,	// (0x0001d109) single_mobtv_pg_channel_pane

0xdf88,	// (0x0001d11b) single_mobtv_pg_channel_table_pane

0xdf91,	// (0x0001d124) single_mobtv_pg_channel_thumb_pane

0xdf9a,	// (0x0001d12d) single_tv_pg_channel_pane_g1

0xdfa3,	// (0x0001d136) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0001eda6) single_tv_pg_channel_pane_g

0xc623,	// (0x0001b7b6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc623,	// (0x0001b7b6) bg_single_mobtv_pg_channel_thumb_pane

0xdfac,	// (0x0001d13f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfac,	// (0x0001d13f) single_mobtv_pg_channel_thumb_pane_g1

0xdfba,	// (0x0001d14d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfba,	// (0x0001d14d) single_mobtv_pg_channel_thumb_pane_g2

0xdfc6,	// (0x0001d159) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfc6,	// (0x0001d159) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0001edab) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0001edab) single_mobtv_pg_channel_thumb_pane_g

0xdfd2,	// (0x0001d165) single_mobtv_pg_channel_thumb_pane_t1

0xdfe0,	// (0x0001d173) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0001edb2) single_mobtv_pg_channel_thumb_pane_t

0xc3c0,	// (0x0001b553) bg_single_mobtv_pg_channel_table_pane_g1

0xc3c0,	// (0x0001b553) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0001e854) bg_single_mobtv_pg_channel_table_pane_g

0xdfee,	// (0x0001d181) single_mobtv_pg_channel_table_pane_t1

0xdffc,	// (0x0001d18f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0001edb7) single_mobtv_pg_channel_table_pane_t

0x762a,	// (0x000167bd) main_mobtv_info_pane_g1_ParamLimits

0x762a,	// (0x000167bd) main_mobtv_info_pane_g1

0x7648,	// (0x000167db) main_mobtv_info_pane_t1_ParamLimits

0x7648,	// (0x000167db) main_mobtv_info_pane_t1

0x76c0,	// (0x00016853) main_mobtv_info_pane_t2_ParamLimits

0x76c0,	// (0x00016853) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0001edc1) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0001edc1) main_mobtv_info_pane_t

0x774f,	// (0x000168e2) wait_bar_pane_cp05

0x7761,	// (0x000168f4) main_mobtv_loading_pane_g1_ParamLimits

0x7761,	// (0x000168f4) main_mobtv_loading_pane_g1

0x7774,	// (0x00016907) main_mobtv_loading_pane_g2_ParamLimits

0x7774,	// (0x00016907) main_mobtv_loading_pane_g2

0x7780,	// (0x00016913) main_mobtv_loading_pane_g3_ParamLimits

0x7780,	// (0x00016913) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0001edc8) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0001edc8) main_mobtv_loading_pane_g

0xe00a,	// (0x0001d19d) main_mobtv_loading_pane_t1_ParamLimits

0xe00a,	// (0x0001d19d) main_mobtv_loading_pane_t1

0xe022,	// (0x0001d1b5) main_mobtv_loading_pane_t2_ParamLimits

0xe022,	// (0x0001d1b5) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0001edcf) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0001edcf) main_mobtv_loading_pane_t

0x7793,	// (0x00016926) wait_bar_pane_cp06_ParamLimits

0x7793,	// (0x00016926) wait_bar_pane_cp06

0xe046,	// (0x0001d1d9) main_mobtv_programe_curr_pane_t1

0xe054,	// (0x0001d1e7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0001edd4) main_mobtv_programe_curr_pane_t

0xe062,	// (0x0001d1f5) main_mobtv_programe_next_pane_t1

0xe070,	// (0x0001d203) main_mobtv_programe_next_pane_t2

0xe07e,	// (0x0001d211) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0001edd9) main_mobtv_programe_next_pane_t

0x94b4,	// (0x00018647) bg_popup_mobtv_noti_window_pane

0xe08c,	// (0x0001d21f) popup_mobtv_noti_window_g1

0xe094,	// (0x0001d227) popup_mobtv_noti_window_t1

0xe0a2,	// (0x0001d235) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0001ede0) popup_mobtv_noti_window_t

0xc3c0,	// (0x0001b553) bg_popup_mobtv_noti_window_pane_g1

0x94b4,	// (0x00018647) sc_clock_pane

0x94b4,	// (0x00018647) main_fs_bigclock_pane

0x6dcb,	// (0x00015f5e) blid2_tripm_pane_t4_ParamLimits

0x6dcb,	// (0x00015f5e) blid2_tripm_pane_t4

0x77a2,	// (0x00016935) sc_clock_pane_g1_ParamLimits

0x77a2,	// (0x00016935) sc_clock_pane_g1

0x77b4,	// (0x00016947) sc_clock_pane_t1_ParamLimits

0x77b4,	// (0x00016947) sc_clock_pane_t1

0x77d6,	// (0x00016969) sc_clock_pane_t2_ParamLimits

0x77d6,	// (0x00016969) sc_clock_pane_t2

0x77ee,	// (0x00016981) sc_clock_pane_t3_ParamLimits

0x77ee,	// (0x00016981) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0001ede5) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0001ede5) sc_clock_pane_t

0x88bb,	// (0x00017a4e) main_fs_bigclock_indicator_pane_ParamLimits

0x88bb,	// (0x00017a4e) main_fs_bigclock_indicator_pane

0x7894,	// (0x00016a27) main_fs_bigclock_pane_g1_ParamLimits

0x7894,	// (0x00016a27) main_fs_bigclock_pane_g1

0x88c7,	// (0x00017a5a) main_fs_bigclock_pane_t1_ParamLimits

0x88c7,	// (0x00017a5a) main_fs_bigclock_pane_t1

0x88d9,	// (0x00017a6c) main_fs_bigclock_pane_t2_ParamLimits

0x88d9,	// (0x00017a6c) main_fs_bigclock_pane_t2

0x88ed,	// (0x00017a80) main_fs_bigclock_pane_t3_ParamLimits

0x88ed,	// (0x00017a80) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x0001efee) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x0001efee) main_fs_bigclock_pane_t

0xec0e,	// (0x0001dda1) main_fs_bigclock_indicator_pane_g1

0xddc0,	// (0x0001cf53) ncim_query_content_pane_g2_ParamLimits

0xddc0,	// (0x0001cf53) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0001ed72) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0001ed72) ncim_query_content_pane_g

0x7807,	// (0x0001699a) sc_clock_pane_t4_ParamLimits

0x7807,	// (0x0001699a) sc_clock_pane_t4

0x9524,	// (0x000186b7) main_radioblah_pane

0xcfd3,	// (0x0001c166) cell_call4_button_pane_t1_copy1_ParamLimits

0xcfd3,	// (0x0001c166) cell_call4_button_pane_t1_copy1

0x73fc,	// (0x0001658f) main_ncimui_pane_t1_ParamLimits

0x73fc,	// (0x0001658f) main_ncimui_pane_t1

0x7416,	// (0x000165a9) main_ncimui_pane_t2_ParamLimits

0x7416,	// (0x000165a9) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0001ed6b) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0001ed6b) main_ncimui_pane_t

0xe1e7,	// (0x0001d37a) main_radioblah_anim_pane_ParamLimits

0xe1e7,	// (0x0001d37a) main_radioblah_anim_pane

0xe1f8,	// (0x0001d38b) main_radioblah_info_pane_ParamLimits

0xe1f8,	// (0x0001d38b) main_radioblah_info_pane

0xe20c,	// (0x0001d39f) main_radioblah_pane_t1_ParamLimits

0xe20c,	// (0x0001d39f) main_radioblah_pane_t1

0xe228,	// (0x0001d3bb) main_radioblah_pane_t2_ParamLimits

0xe228,	// (0x0001d3bb) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0001ee06) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0001ee06) main_radioblah_pane_t

0x78f3,	// (0x00016a86) main_radioblah_rocker_ctrl_pane_ParamLimits

0x78f3,	// (0x00016a86) main_radioblah_rocker_ctrl_pane

0xe270,	// (0x0001d403) main_radioblah_info_pane_t1_ParamLimits

0xe270,	// (0x0001d403) main_radioblah_info_pane_t1

0x794b,	// (0x00016ade) main_radioblah_info_pane_t2_ParamLimits

0x794b,	// (0x00016ade) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0001ee0f) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0001ee0f) main_radioblah_info_pane_t

0xc3c0,	// (0x0001b553) main_radioblah_rocker_ctrl_pane_g1

0x79fb,	// (0x00016b8e) main_radioblah_rocker_ctrl_pane_g2

0x7a03,	// (0x00016b96) main_radioblah_rocker_ctrl_pane_g3

0x7a0b,	// (0x00016b9e) main_radioblah_rocker_ctrl_pane_g4

0x7a13,	// (0x00016ba6) main_radioblah_rocker_ctrl_pane_g5

0x7a1b,	// (0x00016bae) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0001ee18) main_radioblah_rocker_ctrl_pane_g

0x707a,	// (0x0001620d) main_cset_text2_pane_t1_copy1_ParamLimits

0xd05d,	// (0x0001c1f0) cam4_image_uncrop_qvga_pane

0xd0b6,	// (0x0001c249) vid4_image_uncrop_qcif_pane

0xd9ff,	// (0x0001cb92) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9ff,	// (0x0001cb92) cam6_image_uncrop_qvga_pane

0xdac7,	// (0x0001cc5a) vid6_image_uncrop_qcif_pane_ParamLimits

0xdac7,	// (0x0001cc5a) vid6_image_uncrop_qcif_pane

0x94b4,	// (0x00018647) bg_popup_preview_window_pane_cp03

0xdd72,	// (0x0001cf05) list_cset_text2_pane

0xdd7a,	// (0x0001cf0d) main_cset6_text2_pane_g1

0xdd82,	// (0x0001cf15) main_cset6_text2_pane_t1

0x7a23,	// (0x00016bb6) list_cset_text2_pane_t1_ParamLimits

0x7a23,	// (0x00016bb6) list_cset_text2_pane_t1

0x9524,	// (0x000186b7) main_radioblah_pane_ParamLimits

0x773b,	// (0x000168ce) main_mobtv_info_pane_t3_ParamLimits

0x773b,	// (0x000168ce) main_mobtv_info_pane_t3

0x78e1,	// (0x00016a74) main_radioblah_pane_g1

0x791b,	// (0x00016aae) main_radioblah_info_pane_g1

0x79a0,	// (0x00016b33) main_radioblah_info_pane_t3_ParamLimits

0x79a0,	// (0x00016b33) main_radioblah_info_pane_t3

0x20b7,	// (0x0001124a) highlight_cell_cale_month_pane_ParamLimits

0x20b7,	// (0x0001124a) highlight_cell_cale_month_pane

0x94b4,	// (0x00018647) main_phob_fisheye_pane

0xc72b,	// (0x0001b8be) scroll_pane_cp0031_ParamLimits

0xc72b,	// (0x0001b8be) scroll_pane_cp0031

0xdbd5,	// (0x0001cd68) wait_bar_pane_cp08_ParamLimits

0x70ff,	// (0x00016292) cset_list_set_pane_copy1_ParamLimits

0xe2aa,	// (0x0001d43d) highlight_cell_cale_month_pane_g1

0x7a3c,	// (0x00016bcf) highlight_cell_cale_month_pane_t1

0xd7cc,	// (0x0001c95f) list_gen_pane_cp01

0xd2ce,	// (0x0001c461) scroll_pane_01

0xe2b2,	// (0x0001d445) list_single_double_fisheye_pane

0x7a4a,	// (0x00016bdd) list_double_fisheye_pane_g1_ParamLimits

0x7a4a,	// (0x00016bdd) list_double_fisheye_pane_g1

0x7a56,	// (0x00016be9) list_double_fisheye_pane_g2_ParamLimits

0x7a56,	// (0x00016be9) list_double_fisheye_pane_g2

0x7a6a,	// (0x00016bfd) list_double_fisheye_pane_g3_ParamLimits

0x7a6a,	// (0x00016bfd) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0001ee25) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0001ee25) list_double_fisheye_pane_g

0x7a93,	// (0x00016c26) list_double_fisheye_pane_t1_ParamLimits

0x7a93,	// (0x00016c26) list_double_fisheye_pane_t1

0x7aae,	// (0x00016c41) list_double_fisheye_pane_t2_ParamLimits

0x7aae,	// (0x00016c41) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0001ee30) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0001ee30) list_double_fisheye_pane_t

0x94b4,	// (0x00018647) main_call5_pane

0x7832,	// (0x000169c5) sc_swipe_pane_ParamLimits

0x7832,	// (0x000169c5) sc_swipe_pane

0x7ae3,	// (0x00016c76) call5_image_pane_ParamLimits

0x7ae3,	// (0x00016c76) call5_image_pane

0x7b00,	// (0x00016c93) call5_swipe_1_pane_ParamLimits

0x7b00,	// (0x00016c93) call5_swipe_1_pane

0x7b13,	// (0x00016ca6) call5_swipe_2_pane_ParamLimits

0x7b13,	// (0x00016ca6) call5_swipe_2_pane

0x7b3e,	// (0x00016cd1) popup_call5_audio_first_window_ParamLimits

0x7b3e,	// (0x00016cd1) popup_call5_audio_first_window

0xc623,	// (0x0001b7b6) call5_swipe_1_pane_g1_ParamLimits

0xc623,	// (0x0001b7b6) call5_swipe_1_pane_g1

0xe2bb,	// (0x0001d44e) call5_swipe_1_pane_g2_ParamLimits

0xe2bb,	// (0x0001d44e) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0001ee35) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0001ee35) call5_swipe_1_pane_g

0xe2c7,	// (0x0001d45a) call5_swipe_1_pane_t1_ParamLimits

0xe2c7,	// (0x0001d45a) call5_swipe_1_pane_t1

0xc623,	// (0x0001b7b6) call5_swipe_2_pane_g1_ParamLimits

0xc623,	// (0x0001b7b6) call5_swipe_2_pane_g1

0xe2dc,	// (0x0001d46f) call5_swipe_2_pane_g2_ParamLimits

0xe2dc,	// (0x0001d46f) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0001ee3a) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0001ee3a) call5_swipe_2_pane_g

0xe2e8,	// (0x0001d47b) call5_swipe_2_pane_t1_ParamLimits

0xe2e8,	// (0x0001d47b) call5_swipe_2_pane_t1

0xe2fd,	// (0x0001d490) sc_swipe_pane_g1_ParamLimits

0xe2fd,	// (0x0001d490) sc_swipe_pane_g1

0xe30a,	// (0x0001d49d) sc_swipe_pane_g2_ParamLimits

0xe30a,	// (0x0001d49d) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0001ee3f) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0001ee3f) sc_swipe_pane_g

0xe316,	// (0x0001d4a9) sc_swipe_pane_t1_ParamLimits

0xe316,	// (0x0001d4a9) sc_swipe_pane_t1

0x94b4,	// (0x00018647) main_cmail_launcher_pane

0x7b4f,	// (0x00016ce2) aid_size_cell_cmail_l_ParamLimits

0x7b4f,	// (0x00016ce2) aid_size_cell_cmail_l

0x7b5d,	// (0x00016cf0) grid_cmail_l_pane_ParamLimits

0x7b5d,	// (0x00016cf0) grid_cmail_l_pane

0x7b77,	// (0x00016d0a) cell_cmail_l_pane_ParamLimits

0x7b77,	// (0x00016d0a) cell_cmail_l_pane

0xe32b,	// (0x0001d4be) cell_cmail_l_pane_g1_ParamLimits

0xe32b,	// (0x0001d4be) cell_cmail_l_pane_g1

0xe337,	// (0x0001d4ca) cell_cmail_l_pane_t1_ParamLimits

0xe337,	// (0x0001d4ca) cell_cmail_l_pane_t1

0xe34d,	// (0x0001d4e0) cell_cmail_l_pane_t2_ParamLimits

0xe34d,	// (0x0001d4e0) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0001ee44) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0001ee44) cell_cmail_l_pane_t

0x9524,	// (0x000186b7) grid_highlight_pane_cp018_ParamLimits

0x9524,	// (0x000186b7) grid_highlight_pane_cp018

0x0151,	// (0x0000f2e4) main2_pane_ParamLimits

0x0151,	// (0x0000f2e4) main2_pane

0x9d4d,	// (0x00018ee0) popup_sp_fs_action_menu_bg_pane_g1

0x9d55,	// (0x00018ee8) popup_sp_fs_action_menu_bg_pane_g2

0x9d5d,	// (0x00018ef0) popup_sp_fs_action_menu_bg_pane_g3

0x9d65,	// (0x00018ef8) popup_sp_fs_action_menu_bg_pane_g4

0x9d6d,	// (0x00018f00) popup_sp_fs_action_menu_bg_pane_g5

0x9d75,	// (0x00018f08) popup_sp_fs_action_menu_bg_pane_g6

0x9d7d,	// (0x00018f10) popup_sp_fs_action_menu_bg_pane_g7

0x9d85,	// (0x00018f18) popup_sp_fs_action_menu_bg_pane_g8

0x9d8d,	// (0x00018f20) popup_sp_fs_action_menu_bg_pane_g9

0x9d95,	// (0x00018f28) popup_sp_fs_action_menu_bg_pane_g10

0x9d95,	// (0x00018f28) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0001e302) popup_sp_fs_action_menu_bg_pane_g

0x107d,	// (0x00010210) list_medium_line_x2_t3_g3_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x2_t3_g3_g1

0x1089,	// (0x0001021c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1089,	// (0x0001021c) list_medium_line_x2_t3_g3_g2

0x1095,	// (0x00010228) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1095,	// (0x00010228) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0001e3b0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0001e3b0) list_medium_line_x2_t3_g3_g

0x10a1,	// (0x00010234) list_medium_line_x2_t3_g3_t1_ParamLimits

0x10a1,	// (0x00010234) list_medium_line_x2_t3_g3_t1

0x10b6,	// (0x00010249) list_medium_line_x2_t3_g3_t2_ParamLimits

0x10b6,	// (0x00010249) list_medium_line_x2_t3_g3_t2

0x10ca,	// (0x0001025d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x10ca,	// (0x0001025d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0001e3b7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0001e3b7) list_medium_line_x2_t3_g3_t

0x107d,	// (0x00010210) list_medium_line_x2_t3_g2_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x2_t3_g2_g1

0x1095,	// (0x00010228) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1095,	// (0x00010228) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0001e3be) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0001e3be) list_medium_line_x2_t3_g2_g

0x10df,	// (0x00010272) list_medium_line_x2_t3_g2_t1_ParamLimits

0x10df,	// (0x00010272) list_medium_line_x2_t3_g2_t1

0x10f5,	// (0x00010288) list_medium_line_x2_t3_g2_t2_ParamLimits

0x10f5,	// (0x00010288) list_medium_line_x2_t3_g2_t2

0x1107,	// (0x0001029a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1107,	// (0x0001029a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0001e3c3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0001e3c3) list_medium_line_x2_t3_g2_t

0x107d,	// (0x00010210) list_medium_line_x2_t4_g4_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x2_t4_g4_g1

0x1124,	// (0x000102b7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1124,	// (0x000102b7) list_medium_line_x2_t4_g4_g2

0x1089,	// (0x0001021c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1089,	// (0x0001021c) list_medium_line_x2_t4_g4_g3

0x1130,	// (0x000102c3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1130,	// (0x000102c3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0001e3ca) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0001e3ca) list_medium_line_x2_t4_g4_g

0x113c,	// (0x000102cf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x113c,	// (0x000102cf) list_medium_line_x2_t4_g4_t1

0x1156,	// (0x000102e9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1156,	// (0x000102e9) list_medium_line_x2_t4_g4_t2

0x116c,	// (0x000102ff) list_medium_line_x2_t4_g4_t3_ParamLimits

0x116c,	// (0x000102ff) list_medium_line_x2_t4_g4_t3

0x1181,	// (0x00010314) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1181,	// (0x00010314) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0001e3d3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0001e3d3) list_medium_line_x2_t4_g4_t

0x107d,	// (0x00010210) list_medium_line_x2_t2_g4_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x2_t2_g4_g1

0x1124,	// (0x000102b7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1124,	// (0x000102b7) list_medium_line_x2_t2_g4_g2

0x1089,	// (0x0001021c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1089,	// (0x0001021c) list_medium_line_x2_t2_g4_g3

0x1095,	// (0x00010228) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1095,	// (0x00010228) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0001e43a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0001e43a) list_medium_line_x2_t2_g4_g

0x20dd,	// (0x00011270) list_medium_line_x2_t2_g4_t1_ParamLimits

0x20dd,	// (0x00011270) list_medium_line_x2_t2_g4_t1

0x10ca,	// (0x0001025d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x10ca,	// (0x0001025d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0001e443) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0001e443) list_medium_line_x2_t2_g4_t

0x107d,	// (0x00010210) list_medium_line_x2_t2_g3_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x2_t2_g3_g1

0x1089,	// (0x0001021c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1089,	// (0x0001021c) list_medium_line_x2_t2_g3_g2

0x1095,	// (0x00010228) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1095,	// (0x00010228) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0001e3b0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0001e3b0) list_medium_line_x2_t2_g3_g

0x20f2,	// (0x00011285) list_medium_line_x2_t2_g3_t1_ParamLimits

0x20f2,	// (0x00011285) list_medium_line_x2_t2_g3_t1

0x10ca,	// (0x0001025d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x10ca,	// (0x0001025d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0001e448) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0001e448) list_medium_line_x2_t2_g3_t

0x223b,	// (0x000113ce) main_sp_fs_list_pane_ParamLimits

0x223b,	// (0x000113ce) main_sp_fs_list_pane

0xd331,	// (0x0001c4c4) sp_fs_scroll_pane_ParamLimits

0xd331,	// (0x0001c4c4) sp_fs_scroll_pane

0x2247,	// (0x000113da) list_medium_line_x2_t3_t1

0x2257,	// (0x000113ea) list_medium_line_x2_t3_t2

0x2265,	// (0x000113f8) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0001e493) list_medium_line_x2_t3_t

0x2273,	// (0x00011406) list_medium_line_x3_t4_t1

0x2283,	// (0x00011416) list_medium_line_x3_t4_t2

0x2291,	// (0x00011424) list_medium_line_x3_t4_t3

0x2265,	// (0x000113f8) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0001e49a) list_medium_line_x3_t4_t

0x229f,	// (0x00011432) list_medium_line_x4_t5_t1

0x22af,	// (0x00011442) list_medium_line_x4_t5_t2

0x2291,	// (0x00011424) list_medium_line_x4_t5_t3

0x22bd,	// (0x00011450) list_medium_line_x4_t5_t4

0x2265,	// (0x000113f8) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0001e4a3) list_medium_line_x4_t5_t

0x107d,	// (0x00010210) list_medium_line_t4_g4_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_t4_g4_g1

0x22cb,	// (0x0001145e) list_medium_line_t4_g4_g2_ParamLimits

0x22cb,	// (0x0001145e) list_medium_line_t4_g4_g2

0x22d7,	// (0x0001146a) list_medium_line_t4_g4_g3_ParamLimits

0x22d7,	// (0x0001146a) list_medium_line_t4_g4_g3

0x1095,	// (0x00010228) list_medium_line_t4_g4_g4_ParamLimits

0x1095,	// (0x00010228) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0001e4ae) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0001e4ae) list_medium_line_t4_g4_g

0x22e3,	// (0x00011476) list_medium_line_t4_g4_t1_ParamLimits

0x22e3,	// (0x00011476) list_medium_line_t4_g4_t1

0x22f8,	// (0x0001148b) list_medium_line_t4_g4_t2_ParamLimits

0x22f8,	// (0x0001148b) list_medium_line_t4_g4_t2

0x230d,	// (0x000114a0) list_medium_line_t4_g4_t3_ParamLimits

0x230d,	// (0x000114a0) list_medium_line_t4_g4_t3

0x10ca,	// (0x0001025d) list_medium_line_t4_g4_t4_ParamLimits

0x10ca,	// (0x0001025d) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0001e4b7) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0001e4b7) list_medium_line_t4_g4_t

0x23d5,	// (0x00011568) chi_dic_find_pane_g1

0x33ec,	// (0x0001257f) main_tport_pane

0x642b,	// (0x000155be) list_medium_line_plain_t1

0x64d3,	// (0x00015666) list_medium_line_t2_g2_g1_ParamLimits

0x64d3,	// (0x00015666) list_medium_line_t2_g2_g1

0x64df,	// (0x00015672) list_medium_line_t2_g2_g2_ParamLimits

0x64df,	// (0x00015672) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0001eb7c) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0001eb7c) list_medium_line_t2_g2_g

0x64eb,	// (0x0001567e) list_medium_line_t2_g2_t1_ParamLimits

0x64eb,	// (0x0001567e) list_medium_line_t2_g2_t1

0x6505,	// (0x00015698) list_medium_line_t2_g2_t2_ParamLimits

0x6505,	// (0x00015698) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0001eb81) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0001eb81) list_medium_line_t2_g2_t

0xd83f,	// (0x0001c9d2) aid_sp_fs_list_icon_a_sm

0xd847,	// (0x0001c9da) aid_sp_fs_list_icon_d

0xd84f,	// (0x0001c9e2) aid_sp_fs_text_primary

0xd858,	// (0x0001c9eb) aid_sp_fs_text_secondary

0x6b78,	// (0x00015d0b) list_medium_line

0x6b78,	// (0x00015d0b) list_medium_line_g2

0x6b78,	// (0x00015d0b) list_medium_line_g3

0x6b78,	// (0x00015d0b) list_medium_line_plain

0x6b78,	// (0x00015d0b) list_medium_line_plain_t2

0x6b78,	// (0x00015d0b) list_medium_line_plain_t3

0x6b78,	// (0x00015d0b) list_medium_line_right_icon

0x6b78,	// (0x00015d0b) list_medium_line_right_iconx2

0x6b78,	// (0x00015d0b) list_medium_line_t2

0x6b78,	// (0x00015d0b) list_medium_line_t2_g2

0x6b78,	// (0x00015d0b) list_medium_line_t2_g3

0x6b78,	// (0x00015d0b) list_medium_line_t2_right_icon

0x6b78,	// (0x00015d0b) list_medium_line_t2_right_iconx2

0x6b78,	// (0x00015d0b) list_medium_line_t3

0x6b78,	// (0x00015d0b) list_medium_line_t3_g2

0x6b78,	// (0x00015d0b) list_medium_line_t3_g3

0x6b78,	// (0x00015d0b) list_medium_line_t3_right_iconx2

0x6b81,	// (0x00015d14) list_medium_line_t4_g4

0x6b8a,	// (0x00015d1d) list_medium_line_x2

0x6b8a,	// (0x00015d1d) list_medium_line_x2_t2_g2

0x6b8a,	// (0x00015d1d) list_medium_line_x2_t2_g3

0x6b8a,	// (0x00015d1d) list_medium_line_x2_t2_g4

0x6b8a,	// (0x00015d1d) list_medium_line_x2_t3

0x6b8a,	// (0x00015d1d) list_medium_line_x2_t3_g2

0x6b8a,	// (0x00015d1d) list_medium_line_x2_t3_g3

0x6b8a,	// (0x00015d1d) list_medium_line_x2_t3_g4

0x6b8a,	// (0x00015d1d) list_medium_line_x2_t4_g2

0x6b8a,	// (0x00015d1d) list_medium_line_x2_t4_g4

0x6b93,	// (0x00015d26) list_medium_line_x3

0x6b93,	// (0x00015d26) list_medium_line_x3_t4

0x6b93,	// (0x00015d26) list_medium_line_x3_t4_g4

0x6b81,	// (0x00015d14) list_medium_line_x4_t4

0x6b81,	// (0x00015d14) list_medium_line_x4_t4_g7

0x6b81,	// (0x00015d14) list_medium_line_x4_t5

0x6b9c,	// (0x00015d2f) list_single_fs_dyc_pane_ParamLimits

0x6b9c,	// (0x00015d2f) list_single_fs_dyc_pane

0x107d,	// (0x00010210) list_medium_line_x4_t4_g7_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x4_t4_g7_g1

0x72f8,	// (0x0001648b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x72f8,	// (0x0001648b) list_medium_line_x4_t4_g7_g2

0x7304,	// (0x00016497) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7304,	// (0x00016497) list_medium_line_x4_t4_g7_g3

0x7313,	// (0x000164a6) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7313,	// (0x000164a6) list_medium_line_x4_t4_g7_g4

0x731f,	// (0x000164b2) list_medium_line_x4_t4_g7_g5_ParamLimits

0x731f,	// (0x000164b2) list_medium_line_x4_t4_g7_g5

0x732e,	// (0x000164c1) list_medium_line_x4_t4_g7_g6_ParamLimits

0x732e,	// (0x000164c1) list_medium_line_x4_t4_g7_g6

0x733d,	// (0x000164d0) list_medium_line_x4_t4_g7_g7_ParamLimits

0x733d,	// (0x000164d0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0001ed4c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0001ed4c) list_medium_line_x4_t4_g7_g

0x7349,	// (0x000164dc) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7349,	// (0x000164dc) list_medium_line_x4_t4_g7_t1

0x735e,	// (0x000164f1) list_medium_line_x4_t4_g7_t2_ParamLimits

0x735e,	// (0x000164f1) list_medium_line_x4_t4_g7_t2

0x7373,	// (0x00016506) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7373,	// (0x00016506) list_medium_line_x4_t4_g7_t3

0x7388,	// (0x0001651b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7388,	// (0x0001651b) list_medium_line_x4_t4_g7_t4

0x739a,	// (0x0001652d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x739a,	// (0x0001652d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0001ed5b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0001ed5b) list_medium_line_x4_t4_g7_t

0x73ac,	// (0x0001653f) list_single_dyc_row_pane_ParamLimits

0x73ac,	// (0x0001653f) list_single_dyc_row_pane

0x7ad0,	// (0x00016c63) call5_gesture_pane_ParamLimits

0x7ad0,	// (0x00016c63) call5_gesture_pane

0x7b26,	// (0x00016cb9) call5_windows_pane_ParamLimits

0x7b26,	// (0x00016cb9) call5_windows_pane

0x7b91,	// (0x00016d24) call5_swipe_1_pane_cp_ParamLimits

0x7b91,	// (0x00016d24) call5_swipe_1_pane_cp

0x7b9d,	// (0x00016d30) call5_swipe_2_pane_cp_ParamLimits

0x7b9d,	// (0x00016d30) call5_swipe_2_pane_cp

0x9ec1,	// (0x00019054) call5_image_pane_cp

0x7ba9,	// (0x00016d3c) popup_call5_audio_first_window_cp_ParamLimits

0x7ba9,	// (0x00016d3c) popup_call5_audio_first_window_cp

0xe2fd,	// (0x0001d490) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2fd,	// (0x0001d490) call5_swipe_1_pane_g1_cp

0xe36a,	// (0x0001d4fd) call5_swipe_1_pane_g2_cp

0xe316,	// (0x0001d4a9) call5_swipe_1_pane_t1_cp_ParamLimits

0xe316,	// (0x0001d4a9) call5_swipe_1_pane_t1_cp

0xe2fd,	// (0x0001d490) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2fd,	// (0x0001d490) call5_swipe_2_pane_g1_cp

0xe372,	// (0x0001d505) call5_swipe_2_pane_g2_cp

0xe37a,	// (0x0001d50d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe37a,	// (0x0001d50d) call5_swipe_2_pane_t1_cp

0x9524,	// (0x000186b7) main_sp_fs_email_pane

0xe38f,	// (0x0001d522) main_sp_fs_listscroll_pane_te

0x7bb7,	// (0x00016d4a) popup_sp_fs_action_menu_pane_ParamLimits

0x7bb7,	// (0x00016d4a) popup_sp_fs_action_menu_pane

0xc3c0,	// (0x0001b553) bg_sp_fs_ctrlbar_pane_g1

0xe398,	// (0x0001d52b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3a1,	// (0x0001d534) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3aa,	// (0x0001d53d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc3c0,	// (0x0001b553) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0001ee49) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1a5,	// (0x0001b338) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1a5,	// (0x0001b338) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3b3,	// (0x0001d546) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3b3,	// (0x0001d546) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3bf,	// (0x0001d552) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3bf,	// (0x0001d552) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0001ee52) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0001ee52) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3cb,	// (0x0001d55e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3cb,	// (0x0001d55e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7bfb,	// (0x00016d8e) list_medium_line_t2_right_icon_g1

0x7c03,	// (0x00016d96) list_medium_line_t2_right_icon_t1

0x7c13,	// (0x00016da6) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0001ee57) list_medium_line_t2_right_icon_t

0xbea5,	// (0x0001b038) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbea5,	// (0x0001b038) bg_sp_fs_ctrlbar_pane

0x7c6d,	// (0x00016e00) main_sp_fs_ctrlbar_button_pane_cp01

0x7c77,	// (0x00016e0a) main_sp_fs_ctrlbar_ddmenu_pane

0xe41d,	// (0x0001d5b0) main_sp_fs_ctrlbar_pane_g1

0xe429,	// (0x0001d5bc) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0001ee5c) main_sp_fs_ctrlbar_pane_g

0x7cb5,	// (0x00016e48) main_sp_fs_ctrlbar_pane_t1

0x7cf4,	// (0x00016e87) main_sp_fs_ctrlbar_pane

0x7d18,	// (0x00016eab) main_sp_fs_listscroll_pane_te_cp01

0x7d38,	// (0x00016ecb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d38,	// (0x00016ecb) popup_sp_fs_action_menu_pane_cp01

0x9524,	// (0x000186b7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9524,	// (0x000186b7) bg_sp_fs_highlight_list_pane_cp01

0xe450,	// (0x0001d5e3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe450,	// (0x0001d5e3) sp_fs_action_menu_list_gene_pane_g1

0xe45f,	// (0x0001d5f2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe45f,	// (0x0001d5f2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0001ee6a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0001ee6a) sp_fs_action_menu_list_gene_pane_g

0xe46c,	// (0x0001d5ff) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe46c,	// (0x0001d5ff) sp_fs_action_menu_list_gene_pane_t1

0xe484,	// (0x0001d617) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe484,	// (0x0001d617) sp_fs_action_menu_list_gene_pane

0xe4a5,	// (0x0001d638) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4a5,	// (0x0001d638) popup_sp_fs_action_menu_bg_pane

0xe4b3,	// (0x0001d646) sp_fs_action_menu_list_pane_ParamLimits

0xe4b3,	// (0x0001d646) sp_fs_action_menu_list_pane

0x7d68,	// (0x00016efb) sp_fs_scroll_pane_cp01_ParamLimits

0x7d68,	// (0x00016efb) sp_fs_scroll_pane_cp01

0x7d8e,	// (0x00016f21) list_medium_line_plain_t2_t1

0x7d9e,	// (0x00016f31) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0001ee6f) list_medium_line_plain_t2_t

0x7dae,	// (0x00016f41) list_medium_line_plain_t3_t1

0x7dbe,	// (0x00016f51) list_medium_line_plain_t3_t2

0x7dcc,	// (0x00016f5f) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0001ee74) list_medium_line_plain_t3_t

0x107d,	// (0x00010210) list_medium_line_x2_t2_g2_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x2_t2_g2_g1

0x1095,	// (0x00010228) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1095,	// (0x00010228) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0001e3be) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0001e3be) list_medium_line_x2_t2_g2_g

0x22e3,	// (0x00011476) list_medium_line_x2_t2_g2_t1_ParamLimits

0x22e3,	// (0x00011476) list_medium_line_x2_t2_g2_t1

0x10ca,	// (0x0001025d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x10ca,	// (0x0001025d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0001ee7b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0001ee7b) list_medium_line_x2_t2_g2_t

0x107d,	// (0x00010210) list_medium_line_x2_t4_g2_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x2_t4_g2_g1

0x1095,	// (0x00010228) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1095,	// (0x00010228) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0001e3be) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0001e3be) list_medium_line_x2_t4_g2_g

0x7dda,	// (0x00016f6d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7dda,	// (0x00016f6d) list_medium_line_x2_t4_g2_t1

0x7df4,	// (0x00016f87) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7df4,	// (0x00016f87) list_medium_line_x2_t4_g2_t2

0x7e0a,	// (0x00016f9d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e0a,	// (0x00016f9d) list_medium_line_x2_t4_g2_t3

0x10ca,	// (0x0001025d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x10ca,	// (0x0001025d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfced,	// (0x0001ee80) list_medium_line_x2_t4_g2_t_ParamLimits

0xfced,	// (0x0001ee80) list_medium_line_x2_t4_g2_t

0x7e1f,	// (0x00016fb2) list_medium_line_t3_right_iconx2_g1

0x7bfb,	// (0x00016d8e) list_medium_line_t3_right_iconx2_g2

0x7e27,	// (0x00016fba) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf6,	// (0x0001ee89) list_medium_line_t3_right_iconx2_g

0x7e31,	// (0x00016fc4) list_medium_line_t3_right_iconx2_t1

0x7e41,	// (0x00016fd4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfd,	// (0x0001ee90) list_medium_line_t3_right_iconx2_t

0x107d,	// (0x00010210) list_medium_line_x3_t4_g4_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x3_t4_g4_g1

0x1089,	// (0x0001021c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1089,	// (0x0001021c) list_medium_line_x3_t4_g4_g2

0x22cb,	// (0x0001145e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x22cb,	// (0x0001145e) list_medium_line_x3_t4_g4_g3

0x7e4f,	// (0x00016fe2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e4f,	// (0x00016fe2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd02,	// (0x0001ee95) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd02,	// (0x0001ee95) list_medium_line_x3_t4_g4_g

0x7e5b,	// (0x00016fee) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e5b,	// (0x00016fee) list_medium_line_x3_t4_g4_t1

0x7e72,	// (0x00017005) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e72,	// (0x00017005) list_medium_line_x3_t4_g4_t2

0x22f8,	// (0x0001148b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x22f8,	// (0x0001148b) list_medium_line_x3_t4_g4_t3

0x7e8d,	// (0x00017020) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e8d,	// (0x00017020) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0b,	// (0x0001ee9e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0b,	// (0x0001ee9e) list_medium_line_x3_t4_g4_t

0x7eaa,	// (0x0001703d) list_single_dyc_row_text_pane_t1_ParamLimits

0x7eaa,	// (0x0001703d) list_single_dyc_row_text_pane_t1

0x7ef3,	// (0x00017086) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ef3,	// (0x00017086) list_single_dyc_row_text_pane_t2

0xe4d5,	// (0x0001d668) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4d5,	// (0x0001d668) list_single_dyc_row_text_pane_t3

0x0005,

0xfd14,	// (0x0001eea7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd14,	// (0x0001eea7) list_single_dyc_row_text_pane_t

0xe4f9,	// (0x0001d68c) list_single_dyc_row_pane_g1_ParamLimits

0xe4f9,	// (0x0001d68c) list_single_dyc_row_pane_g1

0xe505,	// (0x0001d698) list_single_dyc_row_pane_g2_ParamLimits

0xe505,	// (0x0001d698) list_single_dyc_row_pane_g2

0xe511,	// (0x0001d6a4) list_single_dyc_row_pane_g3_ParamLimits

0xe511,	// (0x0001d6a4) list_single_dyc_row_pane_g3

0xe51d,	// (0x0001d6b0) list_single_dyc_row_pane_g4_ParamLimits

0xe51d,	// (0x0001d6b0) list_single_dyc_row_pane_g4

0x0003,

0xfd21,	// (0x0001eeb4) list_single_dyc_row_pane_g_ParamLimits

0xfd21,	// (0x0001eeb4) list_single_dyc_row_pane_g

0xe529,	// (0x0001d6bc) list_single_dyc_row_text_pane_ParamLimits

0xe529,	// (0x0001d6bc) list_single_dyc_row_text_pane

0x94b4,	// (0x00018647) bg_sp_fs_scroll_pane

0xe548,	// (0x0001d6db) thumb_sp_fs_scroll_pane

0x64d3,	// (0x00015666) list_medium_line_g1_ParamLimits

0x64d3,	// (0x00015666) list_medium_line_g1

0x8028,	// (0x000171bb) list_medium_line_t1_ParamLimits

0x8028,	// (0x000171bb) list_medium_line_t1

0x107d,	// (0x00010210) list_medium_line_x2_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x2_g1

0x1089,	// (0x0001021c) list_medium_line_x2_g2_ParamLimits

0x1089,	// (0x0001021c) list_medium_line_x2_g2

0x0001,

0xfd2a,	// (0x0001eebd) list_medium_line_x2_g_ParamLimits

0xfd2a,	// (0x0001eebd) list_medium_line_x2_g

0xe551,	// (0x0001d6e4) list_medium_line_x2_t1_ParamLimits

0xe551,	// (0x0001d6e4) list_medium_line_x2_t1

0x107d,	// (0x00010210) list_medium_line_x3_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x3_g1

0x1089,	// (0x0001021c) list_medium_line_x3_g2_ParamLimits

0x1089,	// (0x0001021c) list_medium_line_x3_g2

0x0001,

0xfd2a,	// (0x0001eebd) list_medium_line_x3_g_ParamLimits

0xfd2a,	// (0x0001eebd) list_medium_line_x3_g

0xe551,	// (0x0001d6e4) list_medium_line_x3_t1_ParamLimits

0xe551,	// (0x0001d6e4) list_medium_line_x3_t1

0xe567,	// (0x0001d6fa) thumb_sp_fs_scroll_pane_g1

0xe570,	// (0x0001d703) thumb_sp_fs_scroll_pane_g2

0xe579,	// (0x0001d70c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0001eec2) thumb_sp_fs_scroll_pane_g

0xe567,	// (0x0001d6fa) bg_sp_fs_scroll_pane_g1

0xe570,	// (0x0001d703) bg_sp_fs_scroll_pane_g2

0xe579,	// (0x0001d70c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0001eec2) bg_sp_fs_scroll_pane_g

0x107d,	// (0x00010210) list_medium_line_x2_t3_g4_g1_ParamLimits

0x107d,	// (0x00010210) list_medium_line_x2_t3_g4_g1

0x1124,	// (0x000102b7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1124,	// (0x000102b7) list_medium_line_x2_t3_g4_g2

0x1089,	// (0x0001021c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1089,	// (0x0001021c) list_medium_line_x2_t3_g4_g3

0x1095,	// (0x00010228) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1095,	// (0x00010228) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0001e43a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0001e43a) list_medium_line_x2_t3_g4_g

0x803d,	// (0x000171d0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x803d,	// (0x000171d0) list_medium_line_x2_t3_g4_t1

0x8057,	// (0x000171ea) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8057,	// (0x000171ea) list_medium_line_x2_t3_g4_t2

0x10ca,	// (0x0001025d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x10ca,	// (0x0001025d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd36,	// (0x0001eec9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd36,	// (0x0001eec9) list_medium_line_x2_t3_g4_t

0x64d3,	// (0x00015666) list_medium_line_g2_g1_ParamLimits

0x64d3,	// (0x00015666) list_medium_line_g2_g1

0x64df,	// (0x00015672) list_medium_line_g2_g2_ParamLimits

0x64df,	// (0x00015672) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0001eb7c) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0001eb7c) list_medium_line_g2_g

0x8071,	// (0x00017204) list_medium_line_g2_t1_ParamLimits

0x8071,	// (0x00017204) list_medium_line_g2_t1

0x64d3,	// (0x00015666) list_medium_line_t3_g2_g1_ParamLimits

0x64d3,	// (0x00015666) list_medium_line_t3_g2_g1

0x64df,	// (0x00015672) list_medium_line_t3_g2_g2_ParamLimits

0x64df,	// (0x00015672) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0001eb7c) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0001eb7c) list_medium_line_t3_g2_g

0x8086,	// (0x00017219) list_medium_line_t3_g2_t1_ParamLimits

0x8086,	// (0x00017219) list_medium_line_t3_g2_t1

0x80a0,	// (0x00017233) list_medium_line_t3_g2_t2_ParamLimits

0x80a0,	// (0x00017233) list_medium_line_t3_g2_t2

0x80b6,	// (0x00017249) list_medium_line_t3_g2_t3_ParamLimits

0x80b6,	// (0x00017249) list_medium_line_t3_g2_t3

0x0002,

0xfd3d,	// (0x0001eed0) list_medium_line_t3_g2_t_ParamLimits

0xfd3d,	// (0x0001eed0) list_medium_line_t3_g2_t

0x7bfb,	// (0x00016d8e) list_medium_line_right_icon_g1

0x80d0,	// (0x00017263) list_medium_line_right_icon_t1

0x64d3,	// (0x00015666) list_medium_line_t2_g1_ParamLimits

0x64d3,	// (0x00015666) list_medium_line_t2_g1

0x80de,	// (0x00017271) list_medium_line_t2_t1_ParamLimits

0x80de,	// (0x00017271) list_medium_line_t2_t1

0x80f8,	// (0x0001728b) list_medium_line_t2_t2_ParamLimits

0x80f8,	// (0x0001728b) list_medium_line_t2_t2

0x0001,

0xfd44,	// (0x0001eed7) list_medium_line_t2_t_ParamLimits

0xfd44,	// (0x0001eed7) list_medium_line_t2_t

0x64d3,	// (0x00015666) list_medium_line_t3_g1_ParamLimits

0x64d3,	// (0x00015666) list_medium_line_t3_g1

0x8111,	// (0x000172a4) list_medium_line_t3_t1_ParamLimits

0x8111,	// (0x000172a4) list_medium_line_t3_t1

0x812b,	// (0x000172be) list_medium_line_t3_t2_ParamLimits

0x812b,	// (0x000172be) list_medium_line_t3_t2

0x8141,	// (0x000172d4) list_medium_line_t3_t3_ParamLimits

0x8141,	// (0x000172d4) list_medium_line_t3_t3

0x0002,

0xfd49,	// (0x0001eedc) list_medium_line_t3_t_ParamLimits

0xfd49,	// (0x0001eedc) list_medium_line_t3_t

0x64d3,	// (0x00015666) list_medium_line_g3_g1_ParamLimits

0x64d3,	// (0x00015666) list_medium_line_g3_g1

0x8156,	// (0x000172e9) list_medium_line_g3_g2_ParamLimits

0x8156,	// (0x000172e9) list_medium_line_g3_g2

0x64df,	// (0x00015672) list_medium_line_g3_g3_ParamLimits

0x64df,	// (0x00015672) list_medium_line_g3_g3

0x0002,

0xfd50,	// (0x0001eee3) list_medium_line_g3_g_ParamLimits

0xfd50,	// (0x0001eee3) list_medium_line_g3_g

0x8162,	// (0x000172f5) list_medium_line_g3_t1_ParamLimits

0x8162,	// (0x000172f5) list_medium_line_g3_t1

0x64d3,	// (0x00015666) list_medium_line_t2_g3_g1_ParamLimits

0x64d3,	// (0x00015666) list_medium_line_t2_g3_g1

0x8156,	// (0x000172e9) list_medium_line_t2_g3_g2_ParamLimits

0x8156,	// (0x000172e9) list_medium_line_t2_g3_g2

0x64df,	// (0x00015672) list_medium_line_t2_g3_g3_ParamLimits

0x64df,	// (0x00015672) list_medium_line_t2_g3_g3

0x0002,

0xfd50,	// (0x0001eee3) list_medium_line_t2_g3_g_ParamLimits

0xfd50,	// (0x0001eee3) list_medium_line_t2_g3_g

0x8177,	// (0x0001730a) list_medium_line_t2_g3_t1_ParamLimits

0x8177,	// (0x0001730a) list_medium_line_t2_g3_t1

0x8191,	// (0x00017324) list_medium_line_t2_g3_t2_ParamLimits

0x8191,	// (0x00017324) list_medium_line_t2_g3_t2

0x0001,

0xfd57,	// (0x0001eeea) list_medium_line_t2_g3_t_ParamLimits

0xfd57,	// (0x0001eeea) list_medium_line_t2_g3_t

0x64d3,	// (0x00015666) list_medium_line_t3_g3_g1_ParamLimits

0x64d3,	// (0x00015666) list_medium_line_t3_g3_g1

0x8156,	// (0x000172e9) list_medium_line_t3_g3_g2_ParamLimits

0x8156,	// (0x000172e9) list_medium_line_t3_g3_g2

0x64df,	// (0x00015672) list_medium_line_t3_g3_g3_ParamLimits

0x64df,	// (0x00015672) list_medium_line_t3_g3_g3

0x0002,

0xfd50,	// (0x0001eee3) list_medium_line_t3_g3_g_ParamLimits

0xfd50,	// (0x0001eee3) list_medium_line_t3_g3_g

0x81af,	// (0x00017342) list_medium_line_t3_g3_t1_ParamLimits

0x81af,	// (0x00017342) list_medium_line_t3_g3_t1

0x81c8,	// (0x0001735b) list_medium_line_t3_g3_t2_ParamLimits

0x81c8,	// (0x0001735b) list_medium_line_t3_g3_t2

0x81de,	// (0x00017371) list_medium_line_t3_g3_t3_ParamLimits

0x81de,	// (0x00017371) list_medium_line_t3_g3_t3

0x0002,

0xfd5c,	// (0x0001eeef) list_medium_line_t3_g3_t_ParamLimits

0xfd5c,	// (0x0001eeef) list_medium_line_t3_g3_t

0x7e1f,	// (0x00016fb2) list_medium_line_right_iconx2_g1

0x7bfb,	// (0x00016d8e) list_medium_line_right_iconx2_g2

0x0001,

0xfd63,	// (0x0001eef6) list_medium_line_right_iconx2_g

0x81f8,	// (0x0001738b) list_medium_line_right_iconx2_t1

0x7e1f,	// (0x00016fb2) list_medium_line_t2_right_iconx2_g1

0x7bfb,	// (0x00016d8e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd63,	// (0x0001eef6) list_medium_line_t2_right_iconx2_g

0x8206,	// (0x00017399) list_medium_line_t2_right_iconx2_t1

0x8216,	// (0x000173a9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd68,	// (0x0001eefb) list_medium_line_t2_right_iconx2_t

0x8228,	// (0x000173bb) list_medium_line_x4_t4_t1

0x8236,	// (0x000173c9) list_medium_line_x4_t4_t2

0x8246,	// (0x000173d9) list_medium_line_x4_t4_t3

0x8256,	// (0x000173e9) list_medium_line_x4_t4_t4

0x0003,

0xfd6d,	// (0x0001ef00) list_medium_line_x4_t4_t

0x82a9,	// (0x0001743c) tport_appsw_pane_ParamLimits

0x82a9,	// (0x0001743c) tport_appsw_pane

0x82c1,	// (0x00017454) tport_contact_pane_ParamLimits

0x82c1,	// (0x00017454) tport_contact_pane

0x82d9,	// (0x0001746c) tport_listscroll_pane_ParamLimits

0x82d9,	// (0x0001746c) tport_listscroll_pane

0x82f3,	// (0x00017486) cell_tport_appsw_pane_ParamLimits

0x82f3,	// (0x00017486) cell_tport_appsw_pane

0xd165,	// (0x0001c2f8) tport_appsw_pane_g1_ParamLimits

0xd165,	// (0x0001c2f8) tport_appsw_pane_g1

0xe582,	// (0x0001d715) tport_contact_pane_g1

0xde46,	// (0x0001cfd9) tport_contact_pane_t1

0xe58b,	// (0x0001d71e) tport_contact_pane_t2

0x0001,

0xfd76,	// (0x0001ef09) tport_contact_pane_t

0xe599,	// (0x0001d72c) list_tport_pane

0xe5a2,	// (0x0001d735) scroll_pane_cp_030

0x833b,	// (0x000174ce) cell_tport_appsw_pane_g1

0x834b,	// (0x000174de) cell_tport_appsw_pane_t1

0x8359,	// (0x000174ec) grid_highlight_pane_cp019

0x8361,	// (0x000174f4) list_tport_double_graphic_pane_ParamLimits

0x8361,	// (0x000174f4) list_tport_double_graphic_pane

0x9524,	// (0x000186b7) list_highlight_pane_cp023_ParamLimits

0x9524,	// (0x000186b7) list_highlight_pane_cp023

0x836e,	// (0x00017501) list_tport_double_graphic_pane_g1_ParamLimits

0x836e,	// (0x00017501) list_tport_double_graphic_pane_g1

0x837b,	// (0x0001750e) list_tport_double_graphic_pane_t1_ParamLimits

0x837b,	// (0x0001750e) list_tport_double_graphic_pane_t1

0x8390,	// (0x00017523) list_tport_double_graphic_pane_t2_ParamLimits

0x8390,	// (0x00017523) list_tport_double_graphic_pane_t2

0x0001,

0xfd82,	// (0x0001ef15) list_tport_double_graphic_pane_t_ParamLimits

0xfd82,	// (0x0001ef15) list_tport_double_graphic_pane_t

0x94b4,	// (0x00018647) main_cale_note_pane

0x5bac,	// (0x00014d3f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5bac,	// (0x00014d3f) cell_vitu2_function_top_wide_pane_cp01

0x774f,	// (0x000168e2) wait_bar_pane_cp05_ParamLimits

0x9524,	// (0x000186b7) listscroll_cmail_pane

0xe5ab,	// (0x0001d73e) list_cmail_pane

0x83a2,	// (0x00017535) list_cmail_body_pane

0x83b7,	// (0x0001754a) list_single_cmail_header_caption_pane

0x83cd,	// (0x00017560) list_single_cmail_header_detail_pane_ParamLimits

0x83cd,	// (0x00017560) list_single_cmail_header_detail_pane

0xe5bb,	// (0x0001d74e) list_single_cmail_header_caption_pane_t1

0x83f6,	// (0x00017589) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83f6,	// (0x00017589) list_single_cmail_header_detail_pane_g1

0xe5d2,	// (0x0001d765) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5d2,	// (0x0001d765) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd87,	// (0x0001ef1a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd87,	// (0x0001ef1a) list_single_cmail_header_detail_pane_g

0xe5eb,	// (0x0001d77e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5eb,	// (0x0001d77e) list_single_cmail_header_detail_pane_t1

0xe64b,	// (0x0001d7de) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe64b,	// (0x0001d7de) list_single_cmail_header_editor_pane_bg

0xdfa3,	// (0x0001d136) list_cmail_body_pane_g1

0xe662,	// (0x0001d7f5) list_cmail_body_pane_t1

0xd1b4,	// (0x0001c347) list_single_cmail_header_editor_pane_bg_g1

0xa124,	// (0x000192b7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1c4,	// (0x0001c357) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1bc,	// (0x0001c34f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd495,	// (0x0001c628) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1e4,	// (0x0001c377) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1d4,	// (0x0001c367) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1dc,	// (0x0001c36f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa104,	// (0x00019297) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x840e,	// (0x000175a1) calenote_gesture_pane_ParamLimits

0x840e,	// (0x000175a1) calenote_gesture_pane

0x842e,	// (0x000175c1) calenote_window_pane_ParamLimits

0x842e,	// (0x000175c1) calenote_window_pane

0xe670,	// (0x0001d803) popup_note_window_cp01

0x844a,	// (0x000175dd) calenote_swipe_1_pane_ParamLimits

0x844a,	// (0x000175dd) calenote_swipe_1_pane

0x7b9d,	// (0x00016d30) calenote_swipe_2_pane_ParamLimits

0x7b9d,	// (0x00016d30) calenote_swipe_2_pane

0xe2fd,	// (0x0001d490) calenote_swipe_1_pane_g1_ParamLimits

0xe2fd,	// (0x0001d490) calenote_swipe_1_pane_g1

0xe30a,	// (0x0001d49d) calenote_swipe_1_pane_g2_ParamLimits

0xe30a,	// (0x0001d49d) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0001ee3f) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0001ee3f) calenote_swipe_1_pane_g

0xe682,	// (0x0001d815) calenote_swipe_1_pane_t1_ParamLimits

0xe682,	// (0x0001d815) calenote_swipe_1_pane_t1

0xe2fd,	// (0x0001d490) calenote_swipe_2_pane_g1_ParamLimits

0xe2fd,	// (0x0001d490) calenote_swipe_2_pane_g1

0xe6a1,	// (0x0001d834) calenote_swipe_2_pane_g2_ParamLimits

0xe6a1,	// (0x0001d834) calenote_swipe_2_pane_g2

0x0001,

0xfd93,	// (0x0001ef26) calenote_swipe_2_pane_g_ParamLimits

0xfd93,	// (0x0001ef26) calenote_swipe_2_pane_g

0xe6ad,	// (0x0001d840) calenote_swipe_2_pane_t1_ParamLimits

0xe6ad,	// (0x0001d840) calenote_swipe_2_pane_t1

0x94b4,	// (0x00018647) main_mup_navstr_pane

0x47ed,	// (0x00013980) main_mup3_pane_t7_ParamLimits

0x47ed,	// (0x00013980) main_mup3_pane_t7

0xcd6e,	// (0x0001bf01) main_mp4_pane_g6_ParamLimits

0xcd6e,	// (0x0001bf01) main_mp4_pane_g6

0xcfc1,	// (0x0001c154) main_image3_pane_t4_ParamLimits

0xcfc1,	// (0x0001c154) main_image3_pane_t4

0x845f,	// (0x000175f2) popup_navstr_preview_pane_ParamLimits

0x845f,	// (0x000175f2) popup_navstr_preview_pane

0x8473,	// (0x00017606) scroll_navstr_pane_ParamLimits

0x8473,	// (0x00017606) scroll_navstr_pane

0x94b4,	// (0x00018647) bg_popup_preview_window_pane_cp04

0xe6d4,	// (0x0001d867) popup_navstr_preview_pane_t1

0x8487,	// (0x0001761a) scroll_navstr_pane_g1_ParamLimits

0x8487,	// (0x0001761a) scroll_navstr_pane_g1

0x849b,	// (0x0001762e) scroll_navstr_pane_t1_ParamLimits

0x849b,	// (0x0001762e) scroll_navstr_pane_t1

0xe679,	// (0x0001d80c) bg_button_pane_cp014

0xe679,	// (0x0001d80c) bg_button_pane_cp030

0x7a76,	// (0x00016c09) list_double_fisheye_pane_g4_ParamLimits

0x7a76,	// (0x00016c09) list_double_fisheye_pane_g4

0x7a82,	// (0x00016c15) list_double_fisheye_pane_g5_ParamLimits

0x7a82,	// (0x00016c15) list_double_fisheye_pane_g5

0xd331,	// (0x0001c4c4) sp_fs_scroll_pane_cp03

0xe41d,	// (0x0001d5b0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe429,	// (0x0001d5bc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0001ee5c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7cb5,	// (0x00016e48) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5b3,	// (0x0001d746) sp_fs_scroll_pane_cp02

0x9e00,	// (0x00018f93) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e00,	// (0x00018f93) popup_sp_fs_calendar_preview_list_single_pane

0x94b4,	// (0x00018647) main_cam6_pano_pane

0x9524,	// (0x000186b7) main_mup3_pane_ParamLimits

0x94b4,	// (0x00018647) main_phacti_pane

0x7622,	// (0x000167b5) bg_button_pane_cp11

0x763c,	// (0x000167cf) main_mobtv_info_pane_g2_ParamLimits

0x763c,	// (0x000167cf) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0001edbc) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0001edbc) main_mobtv_info_pane_g

0x7819,	// (0x000169ac) sc_clock_pane_t5_ParamLimits

0x7819,	// (0x000169ac) sc_clock_pane_t5

0x78e1,	// (0x00016a74) main_radioblah_pane_g1_ParamLimits

0xe240,	// (0x0001d3d3) main_radioblah_pane_t3_ParamLimits

0xe240,	// (0x0001d3d3) main_radioblah_pane_t3

0xe258,	// (0x0001d3eb) main_radioblah_pane_t4_ParamLimits

0xe258,	// (0x0001d3eb) main_radioblah_pane_t4

0x7909,	// (0x00016a9c) main_radioblah_text_pane_ParamLimits

0x7909,	// (0x00016a9c) main_radioblah_text_pane

0x791b,	// (0x00016aae) main_radioblah_info_pane_g1_ParamLimits

0x79b4,	// (0x00016b47) main_radioblah_info_pane_t4_ParamLimits

0x79b4,	// (0x00016b47) main_radioblah_info_pane_t4

0x9524,	// (0x000186b7) main_sp_fs_calendar_pane

0x84b2,	// (0x00017645) main_phacti_pane_g1

0x84ba,	// (0x0001764d) phacti_note_pane_ParamLimits

0x84ba,	// (0x0001764d) phacti_note_pane

0xe6eb,	// (0x0001d87e) phacti_term_pane_ParamLimits

0xe6eb,	// (0x0001d87e) phacti_term_pane

0xe700,	// (0x0001d893) phacti_note_pane_t1_ParamLimits

0xe700,	// (0x0001d893) phacti_note_pane_t1

0xe717,	// (0x0001d8aa) phacti_term_pane_g1

0xe71f,	// (0x0001d8b2) phacti_term_pane_t1_ParamLimits

0xe71f,	// (0x0001d8b2) phacti_term_pane_t1

0xe749,	// (0x0001d8dc) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9e9f,	// (0x00019032) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9d,	// (0x0001ef30) popup_sp_fs_calendar_preview_list_single_pane_g

0xe751,	// (0x0001d8e4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe751,	// (0x0001d8e4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe767,	// (0x0001d8fa) aid_popup_sp_fs_bg_corner_pane

0xc3c0,	// (0x0001b553) popup_sp_fs_calendar_preview_bg_pane_g1

0x94b4,	// (0x00018647) popup_sp_fs_calendar_preview_bg_pane

0xe76f,	// (0x0001d902) popup_sp_fs_calendar_preview_list_pane

0xbea5,	// (0x0001b038) bg_main_sp_fs_cale_pane_ParamLimits

0xbea5,	// (0x0001b038) bg_main_sp_fs_cale_pane

0xe780,	// (0x0001d913) listscroll_cale_mrui_pane_ParamLimits

0xe780,	// (0x0001d913) listscroll_cale_mrui_pane

0xd238,	// (0x0001c3cb) listscroll_sp_fs_schedule_track_pane

0xe795,	// (0x0001d928) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe795,	// (0x0001d928) main_sp_fs_ctrlbar_pane_cp01

0xe7a8,	// (0x0001d93b) main_sp_fs_ribbon_pane

0xe7b0,	// (0x0001d943) popup_sp_fs_cale_preview_window

0x852f,	// (0x000176c2) list_single_sp_fs_schedule_track_pane_ParamLimits

0x852f,	// (0x000176c2) list_single_sp_fs_schedule_track_pane

0x9524,	// (0x000186b7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9524,	// (0x000186b7) bg_sp_fs_highlight_list_pane_cp03

0x8542,	// (0x000176d5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8542,	// (0x000176d5) list_single_sp_fs_schedule_track_pane_g1

0x854e,	// (0x000176e1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x854e,	// (0x000176e1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda2,	// (0x0001ef35) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda2,	// (0x0001ef35) list_single_sp_fs_schedule_track_pane_g

0x855a,	// (0x000176ed) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x855a,	// (0x000176ed) list_single_sp_fs_schedule_track_pane_t1

0x8574,	// (0x00017707) sp_fs_schedule_track_pane_ParamLimits

0x8574,	// (0x00017707) sp_fs_schedule_track_pane

0xe7c2,	// (0x0001d955) sp_fs_schedule_track_pane_g1

0xe7ca,	// (0x0001d95d) sp_fs_schedule_track_pane_g2

0xe7d2,	// (0x0001d965) sp_fs_schedule_track_pane_g3

0xe7da,	// (0x0001d96d) sp_fs_schedule_track_pane_g4

0xe7e2,	// (0x0001d975) sp_fs_schedule_track_pane_g5

0x0004,

0xfda7,	// (0x0001ef3a) sp_fs_schedule_track_pane_g

0xd1b4,	// (0x0001c347) bg_sp_fs_schedule_viewer_highlight_g1

0xa124,	// (0x000192b7) bg_sp_fs_schedule_viewer_highlight_g2

0xd1bc,	// (0x0001c34f) bg_sp_fs_schedule_viewer_highlight_g3

0xd1c4,	// (0x0001c357) bg_sp_fs_schedule_viewer_highlight_g4

0xd495,	// (0x0001c628) bg_sp_fs_schedule_viewer_highlight_g5

0xd1d4,	// (0x0001c367) bg_sp_fs_schedule_viewer_highlight_g6

0xd1dc,	// (0x0001c36f) bg_sp_fs_schedule_viewer_highlight_g7

0xd1e4,	// (0x0001c377) bg_sp_fs_schedule_viewer_highlight_g8

0xa104,	// (0x00019297) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb2,	// (0x0001ef45) bg_sp_fs_schedule_viewer_highlight_g

0x94b4,	// (0x00018647) bg_main_sp_fs_ribbon_pane

0x8585,	// (0x00017718) main_sp_fs_ribbon_pane_g1

0xe7ea,	// (0x0001d97d) main_sp_fs_ribbon_pane_t1

0x858e,	// (0x00017721) main_sp_fs_ribbon_pane_t2

0xe7f9,	// (0x0001d98c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc5,	// (0x0001ef58) main_sp_fs_ribbon_pane_t

0xe808,	// (0x0001d99b) main_sp_fs_ribbon_scheduler_pane

0xe810,	// (0x0001d9a3) bg_main_sp_fs_ribbon_pane_g1

0xe819,	// (0x0001d9ac) bg_main_sp_fs_ribbon_pane_g2

0xe822,	// (0x0001d9b5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdcc,	// (0x0001ef5f) bg_main_sp_fs_ribbon_pane_g

0xe82a,	// (0x0001d9bd) main_sp_fs_ribbon_scheduler_pane_g1

0xe833,	// (0x0001d9c6) main_sp_fs_ribbon_scheduler_pane_g2

0xe83c,	// (0x0001d9cf) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd3,	// (0x0001ef66) main_sp_fs_ribbon_scheduler_pane_g

0xe845,	// (0x0001d9d8) list_cale_mrui_pane

0x859d,	// (0x00017730) sp_fs_scroll_pane_cp07_ParamLimits

0x859d,	// (0x00017730) sp_fs_scroll_pane_cp07

0x85b9,	// (0x0001774c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x85b9,	// (0x0001774c) bg_sp_fs_schedule_viewer_highlight

0xe852,	// (0x0001d9e5) list_single_sp_fs_schedule_track_pane_cp01

0xe85a,	// (0x0001d9ed) list_sp_fs_schedule_track_pane

0xe862,	// (0x0001d9f5) sp_fs_scroll_pane_cp06_ParamLimits

0xe862,	// (0x0001d9f5) sp_fs_scroll_pane_cp06

0xc3c0,	// (0x0001b553) bgmain_sp_fs_calendar_pane_g1

0x85c9,	// (0x0001775c) list_single_cale_mrui_pane_ParamLimits

0x85c9,	// (0x0001775c) list_single_cale_mrui_pane

0xe874,	// (0x0001da07) list_single_cale_mrui_row_pane_ParamLimits

0xe874,	// (0x0001da07) list_single_cale_mrui_row_pane

0xe881,	// (0x0001da14) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe881,	// (0x0001da14) list_single_cale_mrui_row_pane_g1

0xe8c6,	// (0x0001da59) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8c6,	// (0x0001da59) list_single_cale_mrui_row_pane_t1

0x85ea,	// (0x0001777d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85ea,	// (0x0001777d) list_single_cale_mrui_row_pane_t2

0xe8d8,	// (0x0001da6b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8d8,	// (0x0001da6b) list_single_cale_mrui_row_pane_t3

0xe907,	// (0x0001da9a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe907,	// (0x0001da9a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde1,	// (0x0001ef74) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde1,	// (0x0001ef74) list_single_cale_mrui_row_pane_t

0x8652,	// (0x000177e5) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8652,	// (0x000177e5) list_single_cmail_header_editor_pane_bg_cp01

0x8678,	// (0x0001780b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8678,	// (0x0001780b) list_single_cmail_header_editor_pane_bg_cp02

0x8698,	// (0x0001782b) main_radioblah_text_pane_t1_ParamLimits

0x8698,	// (0x0001782b) main_radioblah_text_pane_t1

0xe936,	// (0x0001dac9) cam6_indi_pane_cp01

0xe93e,	// (0x0001dad1) cam6_mode_pane_cp01

0xe946,	// (0x0001dad9) cam6_pano_pane

0xe94f,	// (0x0001dae2) cam6_zoom_pane_cp01

0xe957,	// (0x0001daea) cam6_pano_image_pane

0xe962,	// (0x0001daf5) cam6_pano_pane_g1

0xdfa3,	// (0x0001d136) cam6_pano_pane_g2

0xe96b,	// (0x0001dafe) cam6_pano_pane_g3

0xe974,	// (0x0001db07) cam6_pano_pane_g4

0xc9af,	// (0x0001bb42) cam6_pano_pane_g5

0xe97d,	// (0x0001db10) cam6_pano_pane_g6

0xe987,	// (0x0001db1a) cam6_pano_pane_g7

0xe98f,	// (0x0001db22) cam6_pano_pane_g8

0xe998,	// (0x0001db2b) cam6_pano_pane_g9

0x0008,

0xfdea,	// (0x0001ef7d) cam6_pano_pane_g

0x94b4,	// (0x00018647) main_browser_tag_pane

0xe6cc,	// (0x0001d85f) grid_navstr_albumart_pane

0xe9a3,	// (0x0001db36) cell_navstr_albumart_pane_ParamLimits

0xe9a3,	// (0x0001db36) cell_navstr_albumart_pane

0xe9c3,	// (0x0001db56) cell_navstr_albumart_pane_g1

0xbcb6,	// (0x0001ae49) cell_navstr_albumart_pane_g2

0xbcc6,	// (0x0001ae59) cell_navstr_albumart_pane_g3

0xbcbe,	// (0x0001ae51) cell_navstr_albumart_pane_g4

0x0003,

0xfdfd,	// (0x0001ef90) cell_navstr_albumart_pane_g

0x86b2,	// (0x00017845) bt_list_pane_ParamLimits

0x86b2,	// (0x00017845) bt_list_pane

0x86c6,	// (0x00017859) bt_list_pane_t1

0x86d5,	// (0x00017868) bt_list_pane_t2

0x0001,

0xfe06,	// (0x0001ef99) bt_list_pane_t

0x94b4,	// (0x00018647) main_cale_prevew_pane

0x86e4,	// (0x00017877) popup_cale_preview_window_ParamLimits

0x86e4,	// (0x00017877) popup_cale_preview_window

0x9524,	// (0x000186b7) bg_popup_preview_window_pane_cp05_ParamLimits

0x9524,	// (0x000186b7) bg_popup_preview_window_pane_cp05

0xe9cb,	// (0x0001db5e) list_cale_preview_pane_ParamLimits

0xe9cb,	// (0x0001db5e) list_cale_preview_pane

0x86ff,	// (0x00017892) list_double_cale_preview_pane_ParamLimits

0x86ff,	// (0x00017892) list_double_cale_preview_pane

0x8711,	// (0x000178a4) list_single_cale_preview_pane_ParamLimits

0x8711,	// (0x000178a4) list_single_cale_preview_pane

0x8727,	// (0x000178ba) list_single_cale_preview_pane_g1

0x872f,	// (0x000178c2) list_single_cale_preview_pane_t1_ParamLimits

0x872f,	// (0x000178c2) list_single_cale_preview_pane_t1

0x8744,	// (0x000178d7) list_double_cale_preview_pane_g1

0x874c,	// (0x000178df) list_double_cale_preview_pane_t1_ParamLimits

0x874c,	// (0x000178df) list_double_cale_preview_pane_t1

0x8761,	// (0x000178f4) list_double_cale_preview_pane_t2_ParamLimits

0x8761,	// (0x000178f4) list_double_cale_preview_pane_t2

0x0001,

0xfe0b,	// (0x0001ef9e) list_double_cale_preview_pane_t_ParamLimits

0xfe0b,	// (0x0001ef9e) list_double_cale_preview_pane_t

0x94b4,	// (0x00018647) main_ezdial_pane

0x9524,	// (0x000186b7) main_sp_fs_email_pane_ParamLimits

0x7c25,	// (0x00016db8) cmail_ddmenu_btn01_pane_ParamLimits

0x7c25,	// (0x00016db8) cmail_ddmenu_btn01_pane

0x7c38,	// (0x00016dcb) cmail_ddmenu_btn02_pane_ParamLimits

0x7c38,	// (0x00016dcb) cmail_ddmenu_btn02_pane

0x7c5b,	// (0x00016dee) cmail_ddmenu_btn03_pane_ParamLimits

0x7c5b,	// (0x00016dee) cmail_ddmenu_btn03_pane

0x7cf4,	// (0x00016e87) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d18,	// (0x00016eab) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x83a2,	// (0x00017535) list_cmail_body_pane_ParamLimits

0xe5c9,	// (0x0001d75c) bg_button_pane_cp12

0xe5de,	// (0x0001d771) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5de,	// (0x0001d771) list_single_cmail_header_detail_pane_g3

0xe627,	// (0x0001d7ba) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe627,	// (0x0001d7ba) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8e,	// (0x0001ef21) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8e,	// (0x0001ef21) list_single_cmail_header_detail_pane_t

0xe734,	// (0x0001d8c7) phacti_term_pane_t2_ParamLimits

0xe734,	// (0x0001d8c7) phacti_term_pane_t2

0x0001,

0xfd98,	// (0x0001ef2b) phacti_term_pane_t_ParamLimits

0xfd98,	// (0x0001ef2b) phacti_term_pane_t

0xe9d7,	// (0x0001db6a) aid_size_list_single_double

0x8779,	// (0x0001790c) popup_ezdial_listscroll_window

0x8795,	// (0x00017928) popup_number_entry_window_cp01

0x9ec1,	// (0x00019054) bg_popup_call_pane_cp09

0xe9e3,	// (0x0001db76) ezdial_list_pane

0xe9eb,	// (0x0001db7e) scroll_pane_cp23

0xbea5,	// (0x0001b038) bg_button_pane_cp028_ParamLimits

0xbea5,	// (0x0001b038) bg_button_pane_cp028

0x87a3,	// (0x00017936) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x87a3,	// (0x00017936) cmail_ddmenu_btn01_pane_g1

0x87af,	// (0x00017942) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87af,	// (0x00017942) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe10,	// (0x0001efa3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe10,	// (0x0001efa3) cmail_ddmenu_btn01_pane_g

0xe9f3,	// (0x0001db86) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9f3,	// (0x0001db86) cmail_ddmenu_btn01_pane_t1

0xbea5,	// (0x0001b038) bg_button_pane_cp029_ParamLimits

0xbea5,	// (0x0001b038) bg_button_pane_cp029

0x87bb,	// (0x0001794e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87bb,	// (0x0001794e) cmail_ddmenu_btn02_pane_g1

0x87d3,	// (0x00017966) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87d3,	// (0x00017966) cmail_ddmenu_btn02_pane_t1

0x9524,	// (0x000186b7) bg_button_pane_cp031_ParamLimits

0x9524,	// (0x000186b7) bg_button_pane_cp031

0x87bb,	// (0x0001794e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87bb,	// (0x0001794e) cmail_ddmenu_btn03_pane_g1

0x87d3,	// (0x00017966) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87d3,	// (0x00017966) cmail_ddmenu_btn03_pane_t1

0x5394,	// (0x00014527) cell_dialer2_keypad_pane_t1_ParamLimits

0x53ae,	// (0x00014541) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x53ae,	// (0x00014541) cell_dialer2_keypad_pane_t1_copy1

0x7445,	// (0x000165d8) ncimui_group_button_pane

0x9524,	// (0x000186b7) main_sp_fs_calendar_pane_ParamLimits

0x83b7,	// (0x0001754a) list_single_cmail_header_caption_pane_ParamLimits

0xe777,	// (0x0001d90a) aid_recal_txt_sm_pane

0x94b4,	// (0x00018647) mian_recal_day_pane

0xe7b0,	// (0x0001d943) popup_sp_fs_cale_preview_window_ParamLimits

0xea08,	// (0x0001db9b) list_recal_day_pane

0xea4a,	// (0x0001dbdd) list_single_recal_day_pane_ParamLimits

0xea4a,	// (0x0001dbdd) list_single_recal_day_pane

0xea5c,	// (0x0001dbef) list_single_recal_day_pane_g1_ParamLimits

0xea5c,	// (0x0001dbef) list_single_recal_day_pane_g1

0xea68,	// (0x0001dbfb) list_single_recal_day_pane_g2_ParamLimits

0xea68,	// (0x0001dbfb) list_single_recal_day_pane_g2

0xea74,	// (0x0001dc07) list_single_recal_day_pane_g3_ParamLimits

0xea74,	// (0x0001dc07) list_single_recal_day_pane_g3

0x87f7,	// (0x0001798a) list_single_recal_day_pane_g4_ParamLimits

0x87f7,	// (0x0001798a) list_single_recal_day_pane_g4

0xea80,	// (0x0001dc13) list_single_recal_day_pane_g5_ParamLimits

0xea80,	// (0x0001dc13) list_single_recal_day_pane_g5

0xea8c,	// (0x0001dc1f) list_single_recal_day_pane_g6_ParamLimits

0xea8c,	// (0x0001dc1f) list_single_recal_day_pane_g6

0x0004,

0xfe1f,	// (0x0001efb2) list_single_recal_day_pane_g_ParamLimits

0xfe1f,	// (0x0001efb2) list_single_recal_day_pane_g

0xeaa0,	// (0x0001dc33) list_single_recal_day_pane_t1

0xeab2,	// (0x0001dc45) list_single_recal_day_pane_t2

0x0001,

0xfe2a,	// (0x0001efbd) list_single_recal_day_pane_t

0x880f,	// (0x000179a2) ncimui_query_button_pane_ParamLimits

0x880f,	// (0x000179a2) ncimui_query_button_pane

0x881f,	// (0x000179b2) ncimui_query_button_pane_t1_ParamLimits

0x881f,	// (0x000179b2) ncimui_query_button_pane_t1

0xeac4,	// (0x0001dc57) ncimui_query_button_pane_t2_ParamLimits

0xeac4,	// (0x0001dc57) ncimui_query_button_pane_t2

0x0001,

0xfe2f,	// (0x0001efc2) ncimui_query_button_pane_t_ParamLimits

0xfe2f,	// (0x0001efc2) ncimui_query_button_pane_t

0x8832,	// (0x000179c5) query_button_pane_ParamLimits

0x8832,	// (0x000179c5) query_button_pane

0x94b4,	// (0x00018647) bg_button_pane_cp0028

0xead7,	// (0x0001dc6a) query_button_pane_t1

0x33ec,	// (0x0001257f) main_tport_pane_ParamLimits

0x8266,	// (0x000173f9) bg_popup_window_pane_cp01_ParamLimits

0x8266,	// (0x000173f9) bg_popup_window_pane_cp01

0x8281,	// (0x00017414) heading_pane_cp08_ParamLimits

0x8281,	// (0x00017414) heading_pane_cp08

0x8294,	// (0x00017427) heading_pane_cp07_ParamLimits

0x8294,	// (0x00017427) heading_pane_cp07

0x833b,	// (0x000174ce) cell_tport_appsw_pane_g2

0x0002,

0xfd7b,	// (0x0001ef0e) cell_tport_appsw_pane_g

0xab4b,	// (0x00019cde) input_candi_list_open_g1

0xa315,	// (0x000194a8) list_cale_time_pane_g6_ParamLimits

0xa315,	// (0x000194a8) list_cale_time_pane_g6

0x41b5,	// (0x00013348) aid_size_touch_calib_1_ParamLimits

0x41b5,	// (0x00013348) aid_size_touch_calib_1

0x41c7,	// (0x0001335a) aid_size_touch_calib_2_ParamLimits

0x41c7,	// (0x0001335a) aid_size_touch_calib_2

0x41df,	// (0x00013372) aid_size_touch_calib_3_ParamLimits

0x41df,	// (0x00013372) aid_size_touch_calib_3

0x41fd,	// (0x00013390) aid_size_touch_calib_4_ParamLimits

0x41fd,	// (0x00013390) aid_size_touch_calib_4

0x4215,	// (0x000133a8) main_touch_calib_button_group_pane_ParamLimits

0x4215,	// (0x000133a8) main_touch_calib_button_group_pane

0x422d,	// (0x000133c0) main_touch_calib_pane_g1_ParamLimits

0x423f,	// (0x000133d2) main_touch_calib_pane_g2_ParamLimits

0x4251,	// (0x000133e4) main_touch_calib_pane_g3_ParamLimits

0x4263,	// (0x000133f6) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0001e8c9) main_touch_calib_pane_g_ParamLimits

0x4275,	// (0x00013408) main_touch_calib_pane_t1_ParamLimits

0x428f,	// (0x00013422) main_touch_calib_pane_t2_ParamLimits

0x42a9,	// (0x0001343c) main_touch_calib_pane_t3_ParamLimits

0x42bd,	// (0x00013450) main_touch_calib_pane_t4_ParamLimits

0x42d1,	// (0x00013464) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0001e8d2) main_touch_calib_pane_t_ParamLimits

0xc74f,	// (0x0001b8e2) list_single_fp_cale_pane_g3_ParamLimits

0xc74f,	// (0x0001b8e2) list_single_fp_cale_pane_g3

0x9524,	// (0x000186b7) bg_button_pane_cp012_ParamLimits

0x9524,	// (0x000186b7) bg_vkb2_func_pane_cp03_ParamLimits

0x6489,	// (0x0001561c) cell_vitu2_function_top_pane_g1_ParamLimits

0x9524,	// (0x000186b7) bg_vkb2_func_pane_cp04_ParamLimits

0x73d0,	// (0x00016563) main_ncimui_button_group_pane_ParamLimits

0x73d0,	// (0x00016563) main_ncimui_button_group_pane

0x7430,	// (0x000165c3) main_ncimui_pane_t3_ParamLimits

0x7430,	// (0x000165c3) main_ncimui_pane_t3

0xe6e2,	// (0x0001d875) phacti_button_group_pane

0xe9d7,	// (0x0001db6a) aid_size_list_single_double_ParamLimits

0x8779,	// (0x0001790c) popup_ezdial_listscroll_window_ParamLimits

0x8795,	// (0x00017928) popup_number_entry_window_cp01_ParamLimits

0x8845,	// (0x000179d8) phacti_button_pane_ParamLimits

0x8845,	// (0x000179d8) phacti_button_pane

0x94b4,	// (0x00018647) bg_button_pane_cp14

0xeae5,	// (0x0001dc78) phacti_button_pane_t1

0x8856,	// (0x000179e9) main_touch_calib_button_pane_ParamLimits

0x8856,	// (0x000179e9) main_touch_calib_button_pane

0x9c87,	// (0x00018e1a) bg_button_pane_cp18_ParamLimits

0x9c87,	// (0x00018e1a) bg_button_pane_cp18

0xeaf3,	// (0x0001dc86) main_touch_calib_button_pane_t1_ParamLimits

0xeaf3,	// (0x0001dc86) main_touch_calib_button_pane_t1

0xeb09,	// (0x0001dc9c) main_touch_calib_button_pane_t2_ParamLimits

0xeb09,	// (0x0001dc9c) main_touch_calib_button_pane_t2

0x0001,

0xfe34,	// (0x0001efc7) main_touch_calib_button_pane_t_ParamLimits

0xfe34,	// (0x0001efc7) main_touch_calib_button_pane_t

0x94b4,	// (0x00018647) cell_ncimui_button_pane

0x94b4,	// (0x00018647) bg_button_pane_cp032

0xeb27,	// (0x0001dcba) cell_ncimui_button_pane_t1

0xcfa1,	// (0x0001c134) image3_infobar_pane_ParamLimits

0xcfa1,	// (0x0001c134) image3_infobar_pane

0x7845,	// (0x000169d8) fs_bigclock_status_pane_ParamLimits

0x7845,	// (0x000169d8) fs_bigclock_status_pane

0x7852,	// (0x000169e5) main_fs_bigclock_clock_pane_ParamLimits

0x7852,	// (0x000169e5) main_fs_bigclock_clock_pane

0x7870,	// (0x00016a03) main_fs_bigclock_indi_pane_ParamLimits

0x7870,	// (0x00016a03) main_fs_bigclock_indi_pane

0x78a2,	// (0x00016a35) main_fs_bigclock_swipe_pane_ParamLimits

0x78a2,	// (0x00016a35) main_fs_bigclock_swipe_pane

0x94b4,	// (0x00018647) main_fs_clock_dumped_data

0xe0b0,	// (0x0001d243) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0b0,	// (0x0001d243) list_single_fs_bigclock_indicator_pane_g1

0xe0cb,	// (0x0001d25e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0cb,	// (0x0001d25e) list_single_fs_bigclock_indicator_pane_g2

0xe0e5,	// (0x0001d278) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0e5,	// (0x0001d278) list_single_fs_bigclock_indicator_pane_g3

0xe0ff,	// (0x0001d292) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0ff,	// (0x0001d292) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0001edf0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0001edf0) list_single_fs_bigclock_indicator_pane_g

0xe12a,	// (0x0001d2bd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe12a,	// (0x0001d2bd) list_single_fs_bigclock_indicator_pane_t1

0xe152,	// (0x0001d2e5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe152,	// (0x0001d2e5) list_single_fs_bigclock_indicator_pane_t2

0xe17a,	// (0x0001d30d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe17a,	// (0x0001d30d) list_single_fs_bigclock_indicator_pane_t3

0xe1a2,	// (0x0001d335) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1a2,	// (0x0001d335) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0001edfb) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0001edfb) list_single_fs_bigclock_indicator_pane_t

0xeb35,	// (0x0001dcc8) image3_infobar_fav_pane_ParamLimits

0xeb35,	// (0x0001dcc8) image3_infobar_fav_pane

0xeb45,	// (0x0001dcd8) image3_infobar_loc_pane_ParamLimits

0xeb45,	// (0x0001dcd8) image3_infobar_loc_pane

0xeb59,	// (0x0001dcec) image3_infobar_time_pane_ParamLimits

0xeb59,	// (0x0001dcec) image3_infobar_time_pane

0xc3c0,	// (0x0001b553) image3_infobar_time_pane_g1

0xeb69,	// (0x0001dcfc) image3_infobar_time_pane_t1

0xc3c0,	// (0x0001b553) image3_infobar_loc_pane_g1

0xeb77,	// (0x0001dd0a) image3_infobar_loc_pane_g2

0x0001,

0xfe39,	// (0x0001efcc) image3_infobar_loc_pane_g

0xeb7f,	// (0x0001dd12) image3_infobar_loc_pane_t1

0xc3c0,	// (0x0001b553) image3_infobar_fav_pane_g1

0xeb8d,	// (0x0001dd20) image3_infobar_fav_pane_g2

0x0001,

0xfe3e,	// (0x0001efd1) image3_infobar_fav_pane_g

0xeb95,	// (0x0001dd28) fs_bigclock_status_battery_pane

0xeb9e,	// (0x0001dd31) fs_bigclock_status_signal_pane

0xeba7,	// (0x0001dd3a) fs_bigclock_status_title_pane

0xebb0,	// (0x0001dd43) fs_bigclock_status_signal_pane_g1

0xebb9,	// (0x0001dd4c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe43,	// (0x0001efd6) fs_bigclock_status_signal_pane_g

0xebc1,	// (0x0001dd54) fs_bigclock_status_battery_pane_g1

0xebca,	// (0x0001dd5d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe48,	// (0x0001efdb) fs_bigclock_status_battery_pane_g

0xebd2,	// (0x0001dd65) fs_bigclock_status_title_pane_t1

0x886b,	// (0x000179fe) main_fs_bigclock_clock_pane_g1

0x886b,	// (0x000179fe) main_fs_bigclock_clock_pane_g2

0x887c,	// (0x00017a0f) main_fs_bigclock_clock_pane_g3

0x887c,	// (0x00017a0f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x0001efe0) main_fs_bigclock_clock_pane_g

0x888f,	// (0x00017a22) main_fs_bigclock_clock_pane_t1

0x88a5,	// (0x00017a38) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x0001efe9) main_fs_bigclock_clock_pane_t

0xebe0,	// (0x0001dd73) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebe0,	// (0x0001dd73) list_single_fs_bigclock_indicator_pane

0xebf1,	// (0x0001dd84) list_single_fs_bigclock_pane_ParamLimits

0xebf1,	// (0x0001dd84) list_single_fs_bigclock_pane

0xec17,	// (0x0001ddaa) main_fs_bigclock_indicator_pane_t1

0xec26,	// (0x0001ddb9) list_single_fs_bigclock_pane_g1

0xec2e,	// (0x0001ddc1) list_single_fs_bigclock_pane_t1

0xc3c0,	// (0x0001b553) main_fs_bigclock_swipe_pane_g1

0xec83,	// (0x0001de16) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe67,	// (0x0001effa) main_fs_bigclock_swipe_pane_g

0xec8b,	// (0x0001de1e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec8b,	// (0x0001de1e) main_fs_bigclock_swipe_pane_t1

0x2322,	// (0x000114b5) call_type_pane_ParamLimits

0x94b4,	// (0x00018647) main_btmg_pane

0xe8ad,	// (0x0001da40) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8ad,	// (0x0001da40) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdda,	// (0x0001ef6d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdda,	// (0x0001ef6d) list_single_cale_mrui_row_pane_g

0xea31,	// (0x0001dbc4) list_recal_vselct_arw_lo_pane

0xea39,	// (0x0001dbcc) list_recal_vselct_arw_up_pane

0xea41,	// (0x0001dbd4) list_recal_vselct_pane

0x88ff,	// (0x00017a92) btmg_button_pane

0x8909,	// (0x00017a9c) main_btmg_pane_g1

0x94b4,	// (0x00018647) bg_button_pane_cp044

0xeca8,	// (0x0001de3b) btmg_button_pane_t1

0xbe91,	// (0x0001b024) aid_listscroll_gen

0x9524,	// (0x000186b7) main_cntbar_detail_pane

0xe5ab,	// (0x0001d73e) list_cmail_folder_pane

0xd331,	// (0x0001c4c4) sp_fs_scroll_pane_cp03_ParamLimits

0x83b7,	// (0x0001754a) list_single_fs_dyc_pane_cp01_ParamLimits

0x83b7,	// (0x0001754a) list_single_fs_dyc_pane_cp01

0xecb6,	// (0x0001de49) aid_size_cmail_indent

0xecbf,	// (0x0001de52) list_single_dyc_row_pane_cp01

0x8945,	// (0x00017ad8) cntbar_detail_list_pane_ParamLimits

0x8945,	// (0x00017ad8) cntbar_detail_list_pane

0x8991,	// (0x00017b24) main_cntbar_detail_cont_pane_ParamLimits

0x8991,	// (0x00017b24) main_cntbar_detail_cont_pane

0xd331,	// (0x0001c4c4) scroll_pane_cp032_ParamLimits

0xd331,	// (0x0001c4c4) scroll_pane_cp032

0x89a5,	// (0x00017b38) cntbar_detail_list_event_pane_ParamLimits

0x89a5,	// (0x00017b38) cntbar_detail_list_event_pane

0x8955,	// (0x00017ae8) cntbar_detail_list_shct_pane

0xa172,	// (0x00019305) aid_list_gen

0xecc8,	// (0x0001de5b) aid_scroll

0xecd1,	// (0x0001de64) aid_size_touch_scroll_bar

0x6b8a,	// (0x00015d1d) aid_list_double

0x6b78,	// (0x00015d0b) aid_list_single

0x6b78,	// (0x00015d0b) aid_list_single_lg

0x89b5,	// (0x00017b48) aid_list_z_g_a_sm

0x89bd,	// (0x00017b50) aid_list_z_g_d

0x89c5,	// (0x00017b58) aid_txt_z_prm

0x89d3,	// (0x00017b66) aid_txt_z_prm_cp01

0x89e1,	// (0x00017b74) aid_txt_z_sec

0x89ef,	// (0x00017b82) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89ef,	// (0x00017b82) main_cntbar_detail_cont_pane_g1

0x8a03,	// (0x00017b96) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a03,	// (0x00017b96) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6c,	// (0x0001efff) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6c,	// (0x0001efff) main_cntbar_detail_cont_pane_g

0xecda,	// (0x0001de6d) main_cntbar_detail_cont_pane_t1

0xece8,	// (0x0001de7b) main_cntbar_detail_cont_pane_t2

0xecf6,	// (0x0001de89) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe71,	// (0x0001f004) main_cntbar_detail_cont_pane_t

0x8a13,	// (0x00017ba6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a13,	// (0x00017ba6) cell_cntbar_detail_list_shct_pane

0xed04,	// (0x0001de97) cntbar_detail_list_shct_pane_g1

0xed0d,	// (0x0001dea0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe78,	// (0x0001f00b) cntbar_detail_list_shct_pane_g

0x8a27,	// (0x00017bba) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a27,	// (0x00017bba) cntbar_detail_list_event_pane_g1

0x8a33,	// (0x00017bc6) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a33,	// (0x00017bc6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7d,	// (0x0001f010) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7d,	// (0x0001f010) cntbar_detail_list_event_pane_g

0x8a9f,	// (0x00017c32) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a9f,	// (0x00017c32) cntbar_detail_list_event_pane_t1

0x8ab4,	// (0x00017c47) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ab4,	// (0x00017c47) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8a,	// (0x0001f01d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8a,	// (0x0001f01d) cntbar_detail_list_event_pane_t

0xc3c0,	// (0x0001b553) cell_cntbar_detail_list_shct_pane_g1

0xa98a,	// (0x00019b1d) navi_pane_mv_g3

0x9524,	// (0x000186b7) main_cntbar_detail_pane_ParamLimits

0x94b4,	// (0x00018647) main_notif_wgt_pane

0xccfc,	// (0x0001be8f) aid_tch_main_mp4_pane_g4

0xcf2e,	// (0x0001c0c1) popup_slider_window_cp02

0xea27,	// (0x0001dbba) list_recal_day_event_pane

0x8913,	// (0x00017aa6) cntbar_detail_btn_pane_ParamLimits

0x8913,	// (0x00017aa6) cntbar_detail_btn_pane

0x892c,	// (0x00017abf) cntbar_detail_btn_pane_cp01_ParamLimits

0x892c,	// (0x00017abf) cntbar_detail_btn_pane_cp01

0x8955,	// (0x00017ae8) cntbar_detail_list_shct_pane_ParamLimits

0x8965,	// (0x00017af8) cntbar_detail_pane_g1_ParamLimits

0x8965,	// (0x00017af8) cntbar_detail_pane_g1

0x8975,	// (0x00017b08) cntbar_detail_pane_t1_ParamLimits

0x8975,	// (0x00017b08) cntbar_detail_pane_t1

0x8a3f,	// (0x00017bd2) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a3f,	// (0x00017bd2) cntbar_detail_list_event_pane_g3

0x8a57,	// (0x00017bea) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a57,	// (0x00017bea) cntbar_detail_list_event_pane_g4

0x8a6f,	// (0x00017c02) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a6f,	// (0x00017c02) cntbar_detail_list_event_pane_g5

0x8a87,	// (0x00017c1a) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a87,	// (0x00017c1a) cntbar_detail_list_event_pane_g6

0x8ac9,	// (0x00017c5c) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ac9,	// (0x00017c5c) cntbar_detail_list_event_pane_t3

0x8adb,	// (0x00017c6e) popup_notif_wgt_window_ParamLimits

0x8adb,	// (0x00017c6e) popup_notif_wgt_window

0x8af4,	// (0x00017c87) popup_submenu_window_cp01_ParamLimits

0x8af4,	// (0x00017c87) popup_submenu_window_cp01

0x9ec1,	// (0x00019054) bg_popup_window_pane_cp10

0xed16,	// (0x0001dea9) listscroll_notif_wgt_pane

0xed28,	// (0x0001debb) list_notif_wgt_window

0xed31,	// (0x0001dec4) scroll_pane_cp033

0x8b0a,	// (0x00017c9d) list_notif_wgt_row_pane_ParamLimits

0x8b0a,	// (0x00017c9d) list_notif_wgt_row_pane

0xed3a,	// (0x0001decd) aid_size_list_notif_wgt_del

0xed47,	// (0x0001deda) list_notif_wgt_row_pane_g1

0xed53,	// (0x0001dee6) list_notif_wgt_row_pane_g2

0xed62,	// (0x0001def5) list_notif_wgt_row_pane_g3

0x0002,

0xfe91,	// (0x0001f024) list_notif_wgt_row_pane_g

0xed6f,	// (0x0001df02) list_notif_wgt_row_pane_t1

0xed85,	// (0x0001df18) list_notif_wgt_row_pane_t2

0xed97,	// (0x0001df2a) list_notif_wgt_row_pane_t3

0x0002,

0xfe98,	// (0x0001f02b) list_notif_wgt_row_pane_t

0xd4bd,	// (0x0001c650) list_recal_day_event_pane_g1

0xeda9,	// (0x0001df3c) list_recal_day_event_pane_t1

0x94b4,	// (0x00018647) bg_button_pane_cp045

0x8b1a,	// (0x00017cad) cntbar_detail_btn_pane_t1

0xbea5,	// (0x0001b038) main_callh_pane_ParamLimits

0xbea5,	// (0x0001b038) main_callh_pane

0x94b4,	// (0x00018647) main_coverflow0_pane

0x94b4,	// (0x00018647) main_wgtman_pane

0x78ba,	// (0x00016a4d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x78ba,	// (0x00016a4d) main_fs_bigclock_unlock_btn_pane

0x8333,	// (0x000174c6) bg_button_pane_cp16

0x8343,	// (0x000174d6) cell_tport_appsw_pane_g3

0x8b28,	// (0x00017cbb) cf0_flow_pane_ParamLimits

0x8b28,	// (0x00017cbb) cf0_flow_pane

0xedb8,	// (0x0001df4b) listscroll_cf0_pane

0xedc3,	// (0x0001df56) main_cf0_pane_g1

0x8b3d,	// (0x00017cd0) main_cf0_pane_t1_ParamLimits

0x8b3d,	// (0x00017cd0) main_cf0_pane_t1

0x8b54,	// (0x00017ce7) main_cf0_pane_t2_ParamLimits

0x8b54,	// (0x00017ce7) main_cf0_pane_t2

0x0001,

0xfea4,	// (0x0001f037) main_cf0_pane_t_ParamLimits

0xfea4,	// (0x0001f037) main_cf0_pane_t

0xedd5,	// (0x0001df68) scroll_pane_cp11

0x8b6b,	// (0x00017cfe) cf0_flow_pane_g1

0x8b73,	// (0x00017d06) cf0_flow_pane_g2

0x0001,

0xfea9,	// (0x0001f03c) cf0_flow_pane_g

0x8b7b,	// (0x00017d0e) cf0_flow_pane_t1

0x94b4,	// (0x00018647) main_call6_pane

0x94b4,	// (0x00018647) main_calllock_pane

0x8b89,	// (0x00017d1c) call6_btn_grp_pane_ParamLimits

0x8b89,	// (0x00017d1c) call6_btn_grp_pane

0x8ba3,	// (0x00017d36) call6_pane_g1_ParamLimits

0x8ba3,	// (0x00017d36) call6_pane_g1

0x8bb9,	// (0x00017d4c) popup_call6_1st_window_ParamLimits

0x8bb9,	// (0x00017d4c) popup_call6_1st_window

0x8bca,	// (0x00017d5d) popup_call6_2nd_window_ParamLimits

0x8bca,	// (0x00017d5d) popup_call6_2nd_window

0x8bdb,	// (0x00017d6e) cell_call6_btn_pane_ParamLimits

0x8bdb,	// (0x00017d6e) cell_call6_btn_pane

0x9ec1,	// (0x00019054) bg_popup_call2_in_pane_cp03

0xede0,	// (0x0001df73) popup_call6_1st_window_g1

0xede8,	// (0x0001df7b) popup_call6_1st_window_g2

0xedf0,	// (0x0001df83) popup_call6_1st_window_g3

0x0002,

0xfeae,	// (0x0001f041) popup_call6_1st_window_g

0xedf8,	// (0x0001df8b) popup_call6_1st_window_t1

0xee07,	// (0x0001df9a) popup_call6_1st_window_t2

0xee15,	// (0x0001dfa8) popup_call6_1st_window_t3

0x0002,

0xfeb5,	// (0x0001f048) popup_call6_1st_window_t

0x9ec1,	// (0x00019054) bg_popup_call2_in_pane_cp04

0xede0,	// (0x0001df73) popup_call6_2nd_window_g1

0xede8,	// (0x0001df7b) popup_call6_2nd_window_g2

0xedf0,	// (0x0001df83) popup_call6_2nd_window_g3

0x0002,

0xfeae,	// (0x0001f041) popup_call6_2nd_window_g

0xedf8,	// (0x0001df8b) popup_call6_2nd_window_t1

0x94b4,	// (0x00018647) bg_button_pane_cp15

0xee23,	// (0x0001dfb6) cell_call6_btn_pane_g1

0xee2c,	// (0x0001dfbf) cell_call6_btn_pane_t1

0x8bee,	// (0x00017d81) listscroll_wgtman_pane_ParamLimits

0x8bee,	// (0x00017d81) listscroll_wgtman_pane

0x8c0f,	// (0x00017da2) wgtman_btn_pane_ParamLimits

0x8c0f,	// (0x00017da2) wgtman_btn_pane

0xa791,	// (0x00019924) aid_scroll_copy1

0xee3b,	// (0x0001dfce) list_wgtman_pane

0x8c52,	// (0x00017de5) wgtman_btn_pane_g1_ParamLimits

0x8c52,	// (0x00017de5) wgtman_btn_pane_g1

0x8c7e,	// (0x00017e11) wgtman_btn_pane_t1_ParamLimits

0x8c7e,	// (0x00017e11) wgtman_btn_pane_t1

0xee45,	// (0x0001dfd8) wgtman_btn_pane_t2_ParamLimits

0xee45,	// (0x0001dfd8) wgtman_btn_pane_t2

0x0001,

0xfebc,	// (0x0001f04f) wgtman_btn_pane_t_ParamLimits

0xfebc,	// (0x0001f04f) wgtman_btn_pane_t

0x8cbb,	// (0x00017e4e) listrow_wgtman_pane_ParamLimits

0x8cbb,	// (0x00017e4e) listrow_wgtman_pane

0x8ccd,	// (0x00017e60) listrow_wgtman_pane_g1

0x8cda,	// (0x00017e6d) listrow_wgtman_pane_g2

0x0001,

0xfec1,	// (0x0001f054) listrow_wgtman_pane_g

0x8cf8,	// (0x00017e8b) listrow_wgtman_pane_t1

0x8d10,	// (0x00017ea3) listrow_wgtman_pane_t2

0x0001,

0xfec6,	// (0x0001f059) listrow_wgtman_pane_t

0x8d36,	// (0x00017ec9) wait_bar_pane_cp09

0xee5c,	// (0x0001dfef) main_calllock_btn_pane

0xee66,	// (0x0001dff9) main_calllock_pane_g1

0x94b4,	// (0x00018647) bg_button_pane_cp17

0xee23,	// (0x0001dfb6) main_calllock_btn_pane_g1

0xee72,	// (0x0001e005) main_calllock_btn_pane_t1

0x94b4,	// (0x00018647) main_dialer3_pane

0x94b4,	// (0x00018647) main_fmrd2_pane

0xc3c0,	// (0x0001b553) main_fs_bigclock_unlock_btn_pane_g1

0x8d50,	// (0x00017ee3) main_fs_bigclock_unlock_btn_pane_t1

0x8d5e,	// (0x00017ef1) area_fmrd2_info_pane_ParamLimits

0x8d5e,	// (0x00017ef1) area_fmrd2_info_pane

0x8d6f,	// (0x00017f02) area_fmrd2_visual_pane_ParamLimits

0x8d6f,	// (0x00017f02) area_fmrd2_visual_pane

0x8d7d,	// (0x00017f10) fmrd2_indi_pane_ParamLimits

0x8d7d,	// (0x00017f10) fmrd2_indi_pane

0x8d8a,	// (0x00017f1d) area_fmrd2_visual_pane_g1

0x8d92,	// (0x00017f25) area_fmrd2_visual_pane_t1

0x8da2,	// (0x00017f35) area_fmrd2_visual_pane_t2

0x8db2,	// (0x00017f45) area_fmrd2_visual_pane_t3

0x0002,

0xfed0,	// (0x0001f063) area_fmrd2_visual_pane_t

0x8dc2,	// (0x00017f55) area_fmrd2_info_pane_g1

0x8dca,	// (0x00017f5d) area_fmrd2_info_pane_t1

0x8dda,	// (0x00017f6d) area_fmrd2_info_pane_t2

0x8dea,	// (0x00017f7d) area_fmrd2_info_pane_t3

0x8dfa,	// (0x00017f8d) area_fmrd2_info_pane_t4

0x0003,

0xfed7,	// (0x0001f06a) area_fmrd2_info_pane_t

0x8e08,	// (0x00017f9b) fmrd2_indi_pane_t1

0x8e18,	// (0x00017fab) fmrd2_indi_pane_t2

0x8e28,	// (0x00017fbb) fmrd2_indi_pane_t3

0x0002,

0xfee0,	// (0x0001f073) fmrd2_indi_pane_t

0xe10e,	// (0x0001d2a1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe10e,	// (0x0001d2a1) list_single_fs_bigclock_indicator_pane_g5

0xe1bf,	// (0x0001d352) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1bf,	// (0x0001d352) list_single_fs_bigclock_indicator_pane_t5

0x84ce,	// (0x00017661) aid_cell_bcale_month_pane_ParamLimits

0x84ce,	// (0x00017661) aid_cell_bcale_month_pane

0x84ec,	// (0x0001767f) bcale_month_pane_ParamLimits

0x84ec,	// (0x0001767f) bcale_month_pane

0x8510,	// (0x000176a3) bcale_preview_pane_ParamLimits

0x8510,	// (0x000176a3) bcale_preview_pane

0xec2e,	// (0x0001ddc1) list_single_fs_bigclock_pane_t1_ParamLimits

0xec4d,	// (0x0001dde0) list_single_fs_bigclock_pane_t2_ParamLimits

0xec4d,	// (0x0001dde0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe62,	// (0x0001eff5) list_single_fs_bigclock_pane_t_ParamLimits

0xfe62,	// (0x0001eff5) list_single_fs_bigclock_pane_t

0x8d48,	// (0x00017edb) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfecb,	// (0x0001f05e) main_fs_bigclock_unlock_btn_pane_g

0x8e38,	// (0x00017fcb) aid_dia3_key_size_ParamLimits

0x8e38,	// (0x00017fcb) aid_dia3_key_size

0x8e47,	// (0x00017fda) aid_dia3_listrow_size_ParamLimits

0x8e47,	// (0x00017fda) aid_dia3_listrow_size

0x8e5c,	// (0x00017fef) dia3_keypad_fun_pane_ParamLimits

0x8e5c,	// (0x00017fef) dia3_keypad_fun_pane

0x8e78,	// (0x0001800b) dia3_keypad_num_pane_ParamLimits

0x8e78,	// (0x0001800b) dia3_keypad_num_pane

0x8e93,	// (0x00018026) dia3_listscroll_pane_ParamLimits

0x8e93,	// (0x00018026) dia3_listscroll_pane

0x8ea6,	// (0x00018039) dia3_numentry_pane_ParamLimits

0x8ea6,	// (0x00018039) dia3_numentry_pane

0xee81,	// (0x0001e014) dia3_list_pane

0xee8c,	// (0x0001e01f) scroll_pane_cp12

0x94b4,	// (0x00018647) bg_dia3_numentry_pane

0x8eba,	// (0x0001804d) dia3_numentry_pane_t1

0x8ec9,	// (0x0001805c) cell_dia3_key_num_pane

0x8ed1,	// (0x00018064) cell_dia3_key0_fun_pane_ParamLimits

0x8ed1,	// (0x00018064) cell_dia3_key0_fun_pane

0x8ee5,	// (0x00018078) cell_dia3_key1_fun_pane_ParamLimits

0x8ee5,	// (0x00018078) cell_dia3_key1_fun_pane

0x8efd,	// (0x00018090) dia3_listrow_pane

0xde61,	// (0x0001cff4) bg_dia3_numentry_pane_g1

0x94b4,	// (0x00018647) bg_button_pane_cp21

0xee97,	// (0x0001e02a) cell_dia3_key_num_pane_t1

0xeea5,	// (0x0001e038) cell_dia3_key_num_pane_t2

0xeeb4,	// (0x0001e047) cell_dia3_key_num_pane_t3

0xeec3,	// (0x0001e056) cell_dia3_key_num_pane_t4

0x0003,

0xfee7,	// (0x0001f07a) cell_dia3_key_num_pane_t

0x94b4,	// (0x00018647) bg_button_pane_cp19

0x8f0f,	// (0x000180a2) cell_dia3_key0_fun_pane_g1

0x94b4,	// (0x00018647) bg_button_pane_cp20

0x8f17,	// (0x000180aa) cell_dia3_key1_fun_pane_g1

0x8f1f,	// (0x000180b2) area_left_week_number_pane

0x8f2b,	// (0x000180be) area_top_day_name_pane

0x8f3e,	// (0x000180d1) frame_month_view_pane

0xeed2,	// (0x0001e065) grid_month_view_pane

0x8f51,	// (0x000180e4) cell_top_day_name_pane_ParamLimits

0x8f51,	// (0x000180e4) cell_top_day_name_pane

0x8f7e,	// (0x00018111) cell_area_left_week_number_pane_ParamLimits

0x8f7e,	// (0x00018111) cell_area_left_week_number_pane

0x8f92,	// (0x00018125) cell_month_view_pane_ParamLimits

0x8f92,	// (0x00018125) cell_month_view_pane

0xeee0,	// (0x0001e073) frm_month_g1

0x8fbf,	// (0x00018152) frm_month_g2

0x8fd2,	// (0x00018165) frm_month_g3

0x8fe5,	// (0x00018178) frm_month_g4

0x8ff8,	// (0x0001818b) frm_month_g5

0x900b,	// (0x0001819e) frm_month_g6

0x901e,	// (0x000181b1) frm_month_g7

0xeeed,	// (0x0001e080) frm_month_g8

0x9031,	// (0x000181c4) frm_month_g9

0x9041,	// (0x000181d4) frm_month_g10

0x9051,	// (0x000181e4) frm_month_g11

0x9061,	// (0x000181f4) frm_month_g12

0x9073,	// (0x00018206) frm_month_g13

0x9085,	// (0x00018218) frm_month_g14

0x9099,	// (0x0001822c) frm_month_g15

0x90ad,	// (0x00018240) frm_month_g16

0x000f,

0xfef0,	// (0x0001f083) frm_month_g

0xeefa,	// (0x0001e08d) cell_top_day_name_pane_t1

0x90c1,	// (0x00018254) cell_area_left_week_number_pane_g1

0x90cd,	// (0x00018260) cell_area_left_week_number_pane_t1

0xc623,	// (0x0001b7b6) cell_month_view_pane_g1

0x90e0,	// (0x00018273) cell_month_view_pane_t1

0x94b4,	// (0x00018647) main_fps_pane

0xe3e5,	// (0x0001d578) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3e5,	// (0x0001d578) cmail_ddmenu_btn02_pane_cp1

0xe401,	// (0x0001d594) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe401,	// (0x0001d594) cmail_ddmenu_btn02_pane_cp2

0x87c7,	// (0x0001795a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87c7,	// (0x0001795a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe15,	// (0x0001efa8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe15,	// (0x0001efa8) cmail_ddmenu_btn02_pane_g

0x87e5,	// (0x00017978) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87e5,	// (0x00017978) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1a,	// (0x0001efad) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1a,	// (0x0001efad) cmail_ddmenu_btn02_pane_t

0x90f3,	// (0x00018286) fps_text_pane_ParamLimits

0x90f3,	// (0x00018286) fps_text_pane

0x910a,	// (0x0001829d) main_fps_pane_g1_ParamLimits

0x910a,	// (0x0001829d) main_fps_pane_g1

0x9124,	// (0x000182b7) wait_bar_pane_cp010_ParamLimits

0x9124,	// (0x000182b7) wait_bar_pane_cp010

0x9135,	// (0x000182c8) fps_text_pane_t1_ParamLimits

0x9135,	// (0x000182c8) fps_text_pane_t1

0xec71,	// (0x0001de04) cam4_image_uncrop_pane_g1

0xec7a,	// (0x0001de0d) cam4_image_uncrop_pane_g2

0x58c9,	// (0x00014a5c) cam4_image_uncrop_pane_g3

0x58d2,	// (0x00014a65) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0001ea6a) cam4_image_uncrop_pane_g

0x8efd,	// (0x00018090) dia3_listrow_pane_ParamLimits

0x94b4,	// (0x00018647) main_phob2_pane

0x8304,	// (0x00017497) cell_tport_appsw_pane_cp02_ParamLimits

0x8304,	// (0x00017497) cell_tport_appsw_pane_cp02

0x8318,	// (0x000174ab) cell_tport_appsw_pane_cp03_ParamLimits

0x8318,	// (0x000174ab) cell_tport_appsw_pane_cp03

0x94b4,	// (0x00018647) phob2_contact_card_pane

0x94b4,	// (0x00018647) phob2_listscroll_pane

0xef0d,	// (0x0001e0a0) phob2_list_pane

0xef15,	// (0x0001e0a8) scroll_pane_cp034

0x914d,	// (0x000182e0) phob2_cc_data_pane_ParamLimits

0x914d,	// (0x000182e0) phob2_cc_data_pane

0x916c,	// (0x000182ff) phob2_cc_listscroll_pane_ParamLimits

0x916c,	// (0x000182ff) phob2_cc_listscroll_pane

0x8cbb,	// (0x00017e4e) list_double_large_graphic_phob2_pane_ParamLimits

0x8cbb,	// (0x00017e4e) list_double_large_graphic_phob2_pane

0x918a,	// (0x0001831d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x918a,	// (0x0001831d) list_double_large_graphic_phob2_pane_g1

0x91a0,	// (0x00018333) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x91a0,	// (0x00018333) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff11,	// (0x0001f0a4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff11,	// (0x0001f0a4) list_double_large_graphic_phob2_pane_g

0x91ac,	// (0x0001833f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x91ac,	// (0x0001833f) list_double_large_graphic_phob2_pane_t1

0x91c1,	// (0x00018354) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x91c1,	// (0x00018354) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff16,	// (0x0001f0a9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff16,	// (0x0001f0a9) list_double_large_graphic_phob2_pane_t

0x94b4,	// (0x00018647) list_highlight_pane_cp024

0x91d3,	// (0x00018366) phob2_cc_button_pane

0x91db,	// (0x0001836e) phob2_cc_data_pane_g1_ParamLimits

0x91db,	// (0x0001836e) phob2_cc_data_pane_g1

0x91f0,	// (0x00018383) phob2_cc_data_pane_g2_ParamLimits

0x91f0,	// (0x00018383) phob2_cc_data_pane_g2

0x0001,

0xff1b,	// (0x0001f0ae) phob2_cc_data_pane_g_ParamLimits

0xff1b,	// (0x0001f0ae) phob2_cc_data_pane_g

0x9200,	// (0x00018393) phob2_cc_data_pane_t1_ParamLimits

0x9200,	// (0x00018393) phob2_cc_data_pane_t1

0x9218,	// (0x000183ab) phob2_cc_data_pane_t2_ParamLimits

0x9218,	// (0x000183ab) phob2_cc_data_pane_t2

0x9230,	// (0x000183c3) phob2_cc_data_pane_t3_ParamLimits

0x9230,	// (0x000183c3) phob2_cc_data_pane_t3

0x0002,

0xff20,	// (0x0001f0b3) phob2_cc_data_pane_t_ParamLimits

0xff20,	// (0x0001f0b3) phob2_cc_data_pane_t

0xef1d,	// (0x0001e0b0) phob2_cc_list_pane_ParamLimits

0xef1d,	// (0x0001e0b0) phob2_cc_list_pane

0xd566,	// (0x0001c6f9) scroll_pane_cp035_ParamLimits

0xd566,	// (0x0001c6f9) scroll_pane_cp035

0x9524,	// (0x000186b7) bg_button_pane_cp033

0xef29,	// (0x0001e0bc) phob2_cc_button_pane_g1

0xef35,	// (0x0001e0c8) phob2_cc_button_pane_t1

0xef4a,	// (0x0001e0dd) phob2_cc_button_pane_t2

0x0001,

0xff27,	// (0x0001f0ba) phob2_cc_button_pane_t

0x9248,	// (0x000183db) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9248,	// (0x000183db) list_double_large_graphic_phob2_cc_pane

0x9278,	// (0x0001840b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9278,	// (0x0001840b) list_double_large_graphic_phob2_cc_pane_g1

0x9284,	// (0x00018417) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9284,	// (0x00018417) list_double_large_graphic_phob2_cc_pane_g2

0x9290,	// (0x00018423) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9290,	// (0x00018423) list_double_large_graphic_phob2_cc_pane_g3

0x929c,	// (0x0001842f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x929c,	// (0x0001842f) list_double_large_graphic_phob2_cc_pane_g4

0x92a8,	// (0x0001843b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x92a8,	// (0x0001843b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2c,	// (0x0001f0bf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2c,	// (0x0001f0bf) list_double_large_graphic_phob2_cc_pane_g

0x92b4,	// (0x00018447) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x92b4,	// (0x00018447) list_double_large_graphic_phob2_cc_pane_t1

0x92dd,	// (0x00018470) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x92dd,	// (0x00018470) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff37,	// (0x0001f0ca) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff37,	// (0x0001f0ca) list_double_large_graphic_phob2_cc_pane_t

0xef5c,	// (0x0001e0ef) list_highlight_pane_cp025_ParamLimits

0xef5c,	// (0x0001e0ef) list_highlight_pane_cp025

0x9524,	// (0x000186b7) bg_button_pane_cp033_ParamLimits

0xef29,	// (0x0001e0bc) phob2_cc_button_pane_g1_ParamLimits

0xef35,	// (0x0001e0c8) phob2_cc_button_pane_t1_ParamLimits

0xef4a,	// (0x0001e0dd) phob2_cc_button_pane_t2_ParamLimits

0xff27,	// (0x0001f0ba) phob2_cc_button_pane_t_ParamLimits

0x02ac,	// (0x0000f43f) popup_wgtman_window

0xd2ce,	// (0x0001c461) scroll_pane_cp038

0x8c34,	// (0x00017dc7) wgtman_btn_pane_cp_01_ParamLimits

0x8c34,	// (0x00017dc7) wgtman_btn_pane_cp_01

0xef6a,	// (0x0001e0fd) wgtman_content_pane

0xef73,	// (0x0001e106) wgtman_heading_pane

0x94b4,	// (0x00018647) bg_heading_pane_cp02

0xef7c,	// (0x0001e10f) wgtman_heading_pane_g1

0xef84,	// (0x0001e117) wgtman_heading_pane_t1

0xef92,	// (0x0001e125) scroll_pane_cp036

0xef9a,	// (0x0001e12d) wgtman_list_pane

0xefa2,	// (0x0001e135) wgtman_list_pane_t1_ParamLimits

0xefa2,	// (0x0001e135) wgtman_list_pane_t1

0xd051,	// (0x0001c1e4) cam4_grid_pane

0x6671,	// (0x00015804) bg_button_pane_cp015_ParamLimits

0x6683,	// (0x00015816) bg_button_pane_cp016_ParamLimits

0x6696,	// (0x00015829) bg_button_pane_cp017_ParamLimits

0x66ee,	// (0x00015881) popup_vitu2_query_window_g3_ParamLimits

0x66ee,	// (0x00015881) popup_vitu2_query_window_g3

0x67ab,	// (0x0001593e) popup_vitu2_query_window_t6_ParamLimits

0x67ab,	// (0x0001593e) popup_vitu2_query_window_t6

0x67d6,	// (0x00015969) popup_vitu2_query_window_t7_ParamLimits

0x67d6,	// (0x00015969) popup_vitu2_query_window_t7

0xec71,	// (0x0001de04) cam4_grid_pane_g1

0xec7a,	// (0x0001de0d) cam4_grid_pane_g2

0xefbc,	// (0x0001e14f) cam4_grid_pane_g3

0xefc5,	// (0x0001e158) cam4_grid_pane_g4

0x0003,

0xff3c,	// (0x0001f0cf) cam4_grid_pane_g

0x1204,	// (0x00010397) aid_placing_vt_slider_lsc_ParamLimits

0x150f,	// (0x000106a2) vidtel_button_pane_ParamLimits

0x150f,	// (0x000106a2) vidtel_button_pane

0x94b4,	// (0x00018647) bg_button_pane_cp034

0xefd0,	// (0x0001e163) vidtel_button_pane_g1

0xefd8,	// (0x0001e16b) vidtel_button_pane_t1

0xd471,	// (0x0001c604) aid_size_vtel_slider_touch

0xd566,	// (0x0001c6f9) scroll_pane_cp039

0x75ae,	// (0x00016741) ncim_query_button_pane_cp01_ParamLimits

0x75cd,	// (0x00016760) ncimui_query_pane_g1_ParamLimits

0x9524,	// (0x000186b7) input_focus_pane_cp012_ParamLimits

0xde9f,	// (0x0001d032) ncim_query_entry_pane_t1_ParamLimits

0xd566,	// (0x0001c6f9) scroll_pane_cp039_ParamLimits

0xa875,	// (0x00019a08) navi_pane_bcale_mc_g1

0xa87d,	// (0x00019a10) navi_pane_bcale_mc_t1

0xe435,	// (0x0001d5c8) main_sp_fs_email_pane_g1

0xe441,	// (0x0001d5d4) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0001ee65) main_sp_fs_email_pane_g

0xe8b9,	// (0x0001da4c) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8b9,	// (0x0001da4c) list_single_cale_mrui_row_pane_g3

0x8805,	// (0x00017998) list_single_recal_day_pane_g5_event_pane

0xea98,	// (0x0001dc2b) list_single_recal_day_pane_g7

0xefee,	// (0x0001e181) list_recal_day_event_pane_cp01

0xeff7,	// (0x0001e18a) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x0001e192) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x0001e19a) list_recal_vselct_pane_cp01

0xd4bd,	// (0x0001c650) list_recal_day_event_pane_cp01_g1

0xf011,	// (0x0001e1a4) list_recal_day_event_pane_cp01_t1

0xeaa0,	// (0x0001dc33) list_single_recal_day_pane_t1_ParamLimits

0xeab2,	// (0x0001dc45) list_single_recal_day_pane_t2_ParamLimits

0xfe2a,	// (0x0001efbd) list_single_recal_day_pane_t_ParamLimits

0x9ba0,	// (0x00018d33) bg_notes_pane_ParamLimits

0x9c4b,	// (0x00018dde) list_notes_pane_ParamLimits

0x05f2,	// (0x0000f785) scroll_pane_cp06_ParamLimits

0x9c87,	// (0x00018e1a) main_notes_pane_ParamLimits

0x9524,	// (0x000186b7) main_welc_pane

0x931d,	// (0x000184b0) main_welc_body_pane_ParamLimits

0x931d,	// (0x000184b0) main_welc_body_pane

0x933b,	// (0x000184ce) main_welc_opti_pane_ParamLimits

0x933b,	// (0x000184ce) main_welc_opti_pane

0x938f,	// (0x00018522) main_welc_pane_t1_ParamLimits

0x938f,	// (0x00018522) main_welc_pane_t1

0x940a,	// (0x0001859d) main_welc_body_row_pane_ParamLimits

0x940a,	// (0x0001859d) main_welc_body_row_pane

0xd323,	// (0x0001c4b6) main_welc_opti_row_pane_ParamLimits

0xd323,	// (0x0001c4b6) main_welc_opti_row_pane

0xf01f,	// (0x0001e1b2) main_welc_opti_row_pane_g1

0x941e,	// (0x000185b1) main_welc_opti_row_pane_t1

0xf027,	// (0x0001e1ba) main_welc_body_row_pane_t1

0xed20,	// (0x0001deb3) popup_notif_wgt_heading_pane

0xed3a,	// (0x0001decd) aid_size_list_notif_wgt_del_ParamLimits

0xed47,	// (0x0001deda) list_notif_wgt_row_pane_g1_ParamLimits

0xed53,	// (0x0001dee6) list_notif_wgt_row_pane_g2_ParamLimits

0xed62,	// (0x0001def5) list_notif_wgt_row_pane_g3_ParamLimits

0xfe91,	// (0x0001f024) list_notif_wgt_row_pane_g_ParamLimits

0xed6f,	// (0x0001df02) list_notif_wgt_row_pane_t1_ParamLimits

0xed85,	// (0x0001df18) list_notif_wgt_row_pane_t2_ParamLimits

0xed97,	// (0x0001df2a) list_notif_wgt_row_pane_t3_ParamLimits

0xfe98,	// (0x0001f02b) list_notif_wgt_row_pane_t_ParamLimits

0x8ccd,	// (0x00017e60) listrow_wgtman_pane_g1_ParamLimits

0x8cda,	// (0x00017e6d) listrow_wgtman_pane_g2_ParamLimits

0xfec1,	// (0x0001f054) listrow_wgtman_pane_g_ParamLimits

0x8cf8,	// (0x00017e8b) listrow_wgtman_pane_t1_ParamLimits

0x8d10,	// (0x00017ea3) listrow_wgtman_pane_t2_ParamLimits

0xfec6,	// (0x0001f059) listrow_wgtman_pane_t_ParamLimits

0x8d36,	// (0x00017ec9) wait_bar_pane_cp09_ParamLimits

0x94b4,	// (0x00018647) bg_popup_heading_pane_cp02

0xf036,	// (0x0001e1c9) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0001e1d1) popup_notif_wgt_heading_pane_t1

0x94b4,	// (0x00018647) main_vids_pane

0x94b4,	// (0x00018647) vids_listscroll_pane

0x942d,	// (0x000185c0) scroll_pane_cp040

0x94b4,	// (0x00018647) vids_list_pane

0x9438,	// (0x000185cb) vids_list_double_pane_ParamLimits

0x9438,	// (0x000185cb) vids_list_double_pane

0x9449,	// (0x000185dc) vids_list_double_pane_g1

0x9452,	// (0x000185e5) vids_list_double_pane_t1

0x9462,	// (0x000185f5) vids_list_double_pane_t2

0x0001,

0xff53,	// (0x0001f0e6) vids_list_double_pane_t

0x9524,	// (0x000186b7) main_ncimui_pane_ParamLimits

0x73e4,	// (0x00016577) main_ncimui_pane_g1_ParamLimits

0x73f0,	// (0x00016583) main_ncimui_pane_g2_ParamLimits

0x73f0,	// (0x00016583) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0001ed66) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0001ed66) main_ncimui_pane_g

0x9356,	// (0x000184e9) main_welc_pane_g1_ParamLimits

0x9356,	// (0x000184e9) main_welc_pane_g1

0x936b,	// (0x000184fe) main_welc_pane_g2_ParamLimits

0x936b,	// (0x000184fe) main_welc_pane_g2

0x0002,

0xff45,	// (0x0001f0d8) main_welc_pane_g_ParamLimits

0xff45,	// (0x0001f0d8) main_welc_pane_g

0x9ba0,	// (0x00018d33) listscroll_mce_pane_ParamLimits

0xa9ca,	// (0x00019b5d) wait_bar_pane_cp10

0xbe99,	// (0x0001b02c) main_cale_day_pane_ParamLimits

0xbe99,	// (0x0001b02c) main_cale_week_pane_ParamLimits

0x9ba0,	// (0x00018d33) main_messa_pane_ParamLimits

0x4b76,	// (0x00013d09) main_clock2_btn_pane_ParamLimits

0x4b76,	// (0x00013d09) main_clock2_btn_pane

0xc7d7,	// (0x0001b96a) main_clock2_btn_pane_cp01_ParamLimits

0xc7d7,	// (0x0001b96a) main_clock2_btn_pane_cp01

0xe845,	// (0x0001d9d8) list_cale_mrui_pane_ParamLimits

0xedcd,	// (0x0001df60) main_cf0_pane_g2

0x0001,

0xfe9f,	// (0x0001f032) main_cf0_pane_g

0x8f1f,	// (0x000180b2) area_left_week_number_pane_ParamLimits

0x8f2b,	// (0x000180be) area_top_day_name_pane_ParamLimits

0x8f3e,	// (0x000180d1) frame_month_view_pane_ParamLimits

0xeed2,	// (0x0001e065) grid_month_view_pane_ParamLimits

0xeee0,	// (0x0001e073) frm_month_g1_ParamLimits

0x8fbf,	// (0x00018152) frm_month_g2_ParamLimits

0x8fd2,	// (0x00018165) frm_month_g3_ParamLimits

0x8fe5,	// (0x00018178) frm_month_g4_ParamLimits

0x8ff8,	// (0x0001818b) frm_month_g5_ParamLimits

0x900b,	// (0x0001819e) frm_month_g6_ParamLimits

0x901e,	// (0x000181b1) frm_month_g7_ParamLimits

0xeeed,	// (0x0001e080) frm_month_g8_ParamLimits

0x9031,	// (0x000181c4) frm_month_g9_ParamLimits

0x9041,	// (0x000181d4) frm_month_g10_ParamLimits

0x9051,	// (0x000181e4) frm_month_g11_ParamLimits

0x9061,	// (0x000181f4) frm_month_g12_ParamLimits

0x9073,	// (0x00018206) frm_month_g13_ParamLimits

0x9085,	// (0x00018218) frm_month_g14_ParamLimits

0x9099,	// (0x0001822c) frm_month_g15_ParamLimits

0x90ad,	// (0x00018240) frm_month_g16_ParamLimits

0xfef0,	// (0x0001f083) frm_month_g_ParamLimits

0xeefa,	// (0x0001e08d) cell_top_day_name_pane_t1_ParamLimits

0x90c1,	// (0x00018254) cell_area_left_week_number_pane_g1_ParamLimits

0x90cd,	// (0x00018260) cell_area_left_week_number_pane_t1_ParamLimits

0xc623,	// (0x0001b7b6) cell_month_view_pane_g1_ParamLimits

0x90e0,	// (0x00018273) cell_month_view_pane_t1_ParamLimits

0x9b98,	// (0x00018d2b) main_clock2_btn_pane_g1

0xf04c,	// (0x0001e1df) main_clock2_btn_pane_t1

0x9524,	// (0x000186b7) listscroll_cmail_pane_ParamLimits

0xe435,	// (0x0001d5c8) main_sp_fs_email_pane_g1_ParamLimits

0xe441,	// (0x0001d5d4) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0001ee65) main_sp_fs_email_pane_g_ParamLimits

0xea08,	// (0x0001db9b) list_recal_day_pane_ParamLimits

0xea19,	// (0x0001dbac) mian_recal_day_pane_t1

0x7f69,	// (0x000170fc) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f69,	// (0x000170fc) list_single_dyc_row_text_pane_t4

0x7fb2,	// (0x00017145) list_single_dyc_row_text_pane_t5_ParamLimits

0x7fb2,	// (0x00017145) list_single_dyc_row_text_pane_t5

0xe4e7,	// (0x0001d67a) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4e7,	// (0x0001d67a) list_single_dyc_row_text_pane_t6

0x218d,	// (0x00011320) aid_mgn_list_cale_time_pane

0x9524,	// (0x000186b7) main_gallery2_pane_ParamLimits

0xc7ed,	// (0x0001b980) main_clock2_pane_cp01_t1

0xc7fd,	// (0x0001b990) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0001e93c) main_clock2_pane_cp01_t

0x09ac,	// (0x0000fb3f) cale_week_scroll_pane_g16_ParamLimits

0x09ac,	// (0x0000fb3f) cale_week_scroll_pane_g16

0x9ec1,	// (0x00019054) vorec_slider_pane

0xefd8,	// (0x0001e16b) vidtel_button_pane_t1_ParamLimits

0x886b,	// (0x000179fe) main_fs_bigclock_clock_pane_g1_ParamLimits

0x886b,	// (0x000179fe) main_fs_bigclock_clock_pane_g2_ParamLimits

0x887c,	// (0x00017a0f) main_fs_bigclock_clock_pane_g3_ParamLimits

0x887c,	// (0x00017a0f) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4d,	// (0x0001efe0) main_fs_bigclock_clock_pane_g_ParamLimits

0x888f,	// (0x00017a22) main_fs_bigclock_clock_pane_t1_ParamLimits

0x88a5,	// (0x00017a38) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe56,	// (0x0001efe9) main_fs_bigclock_clock_pane_t_ParamLimits

0x436d,	// (0x00013500) main_mup3_lyrics_pane_ParamLimits

0x436d,	// (0x00013500) main_mup3_lyrics_pane

0x9498,	// (0x0001862b) main_mup3_lyrics_pane_t1_ParamLimits

0x9498,	// (0x0001862b) main_mup3_lyrics_pane_t1

0xcce6,	// (0x0001be79) aid_main_mp4_pane_t1_area

0xccf0,	// (0x0001be83) aid_main_mp4_pane_t2_area

0xcd9c,	// (0x0001bf2f) main_mp4_pane_g7_ParamLimits

0xcd9c,	// (0x0001bf2f) main_mp4_pane_g7

0xcda8,	// (0x0001bf3b) main_mp4_pane_g8_ParamLimits

0xcda8,	// (0x0001bf3b) main_mp4_pane_g8

0x569c,	// (0x0001482f) aid_call6_pane_g1_size

0x9262,	// (0x000183f5) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9262,	// (0x000183f5) list_double_large_graphic_phob2_other_pane

0xa2b4,	// (0x00019447) list_double_large_graphic_phob2_other_pane_g1

0x94b4,	// (0x00018647) list_highlight_pane_cp026

0x9524,	// (0x000186b7) main_welc_pane_ParamLimits

0x7c81,	// (0x00016e14) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7c81,	// (0x00016e14) main_sp_fs_ctrlbar_pane_g3

0x7c9b,	// (0x00016e2e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7c9b,	// (0x00016e2e) main_sp_fs_ctrlbar_pane_g4

0x7ccf,	// (0x00016e62) toolbar2_fixed_button_pane_cp01

0x7cda,	// (0x00016e6d) toolbar2_fixed_button_pane_cp02

0x7ce7,	// (0x00016e7a) toolbar2_fixed_button_pane_cp03

0x9306,	// (0x00018499) list_welc_entry_pane_ParamLimits

0x9306,	// (0x00018499) list_welc_entry_pane

0x9380,	// (0x00018513) main_welc_pane_g3_ParamLimits

0x9380,	// (0x00018513) main_welc_pane_g3

0x93ad,	// (0x00018540) main_welc_pane_t2_ParamLimits

0x93ad,	// (0x00018540) main_welc_pane_t2

0x93c7,	// (0x0001855a) main_welc_pane_t3_ParamLimits

0x93c7,	// (0x0001855a) main_welc_pane_t3

0x0002,

0xff4c,	// (0x0001f0df) main_welc_pane_t_ParamLimits

0xff4c,	// (0x0001f0df) main_welc_pane_t

0x93de,	// (0x00018571) welc_button_pane_ParamLimits

0x93de,	// (0x00018571) welc_button_pane

0x93f5,	// (0x00018588) welc_service_logo_pane_ParamLimits

0x93f5,	// (0x00018588) welc_service_logo_pane

0xf05a,	// (0x0001e1ed) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0001e1ed) list_single_welc_entry_pane

0xf06b,	// (0x0001e1fe) list_single_welc_entry_pane_g1

0xf073,	// (0x0001e206) list_single_welc_entry_pane_t1

0xf081,	// (0x0001e214) list_single_welc_entry_pane_t2

0x0001,

0xff58,	// (0x0001f0eb) list_single_welc_entry_pane_t

0x94b4,	// (0x00018647) bg_button_pane_cp035

0xf08f,	// (0x0001e222) welc_button_pane_t1

0xf09d,	// (0x0001e230) welc_service_logo_pane_g1

0xf0a6,	// (0x0001e239) welc_service_logo_pane_g2

0x0001,

0xff5d,	// (0x0001f0f0) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
