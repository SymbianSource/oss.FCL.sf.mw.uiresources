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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000f1df };

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
0x008f,	// (0x0000f26e) Screen

0x009b,	// (0x0000f27a) application_window

0x00d7,	// (0x0000f2b6) area_bottom_pane_ParamLimits

0x00d7,	// (0x0000f2b6) area_bottom_pane

0x0110,	// (0x0000f2ef) area_top_pane_ParamLimits

0x0110,	// (0x0000f2ef) area_top_pane

0x9384,	// (0x00018563) call_video_uplink_pane_ParamLimits

0x9384,	// (0x00018563) call_video_uplink_pane

0x019e,	// (0x0000f37d) main_pane_ParamLimits

0x019e,	// (0x0000f37d) main_pane

0xbdad,	// (0x0001af8c) context_pane

0x3827,	// (0x00012a06) navi_pane

0x3859,	// (0x00012a38) popup_cale_events_window_ParamLimits

0x3859,	// (0x00012a38) popup_cale_events_window

0xbdc0,	// (0x0001af9f) popup_mup_playback_window

0x3871,	// (0x00012a50) signal_pane

0x9b24,	// (0x00018d03) main_browser_pane

0xa896,	// (0x00019a75) main_burst_pane

0x3597,	// (0x00012776) main_calc_pane

0xbd3f,	// (0x0001af1e) main_cale_day_pane

0x07d0,	// (0x0000f9af) main_cale_month_pane

0xbd3f,	// (0x0001af1e) main_cale_week_pane

0xa896,	// (0x00019a75) main_call_pane

0x97c3,	// (0x000189a2) main_call_poc_pane

0xa896,	// (0x00019a75) main_camera_pane

0xa896,	// (0x00019a75) main_chi_dic_pane

0xa621,	// (0x00019800) main_clock_pane

0x97c3,	// (0x000189a2) main_fmradio_pane

0xa896,	// (0x00019a75) main_graph_messa_pane

0x97c3,	// (0x000189a2) main_help_pane

0x9b24,	// (0x00018d03) main_im_pane

0x9a1e,	// (0x00018bfd) main_image_pane_ParamLimits

0x9a1e,	// (0x00018bfd) main_image_pane

0x97c3,	// (0x000189a2) main_location2_pane

0xa896,	// (0x00019a75) main_location_pane

0x9a1e,	// (0x00018bfd) main_messa_pane

0x97c3,	// (0x000189a2) main_mp2_pane

0xa896,	// (0x00019a75) main_mp_pane

0x97c3,	// (0x000189a2) main_msg_pane

0x97c3,	// (0x000189a2) main_mup_eq_pane

0x97c3,	// (0x000189a2) main_mup_pane

0x9b24,	// (0x00018d03) main_notes_pane

0x97c3,	// (0x000189a2) main_pec_pane

0x97c3,	// (0x000189a2) main_phob_pane

0x97c3,	// (0x000189a2) main_pinb_pane

0x97c3,	// (0x000189a2) main_postcard_pane

0x97c3,	// (0x000189a2) main_qdial_pane

0xa896,	// (0x00019a75) main_skin_pane

0x97c3,	// (0x000189a2) main_smil2_pane

0xa896,	// (0x00019a75) main_smil_pane

0xa896,	// (0x00019a75) main_video_pane

0xa896,	// (0x00019a75) main_video_tele_pane

0x9a1e,	// (0x00018bfd) main_viewer_pane_ParamLimits

0x9a1e,	// (0x00018bfd) main_viewer_pane

0xa896,	// (0x00019a75) main_vorec_pane

0x35eb,	// (0x000127ca) popup_blid_sat_info_window_ParamLimits

0x35eb,	// (0x000127ca) popup_blid_sat_info_window

0x3643,	// (0x00012822) popup_dyc_status_message_window_ParamLimits

0x3643,	// (0x00012822) popup_dyc_status_message_window

0x365b,	// (0x0001283a) popup_grid_large_graphic_window_ParamLimits

0x365b,	// (0x0001283a) popup_grid_large_graphic_window

0x3711,	// (0x000128f0) popup_loc_request_window_ParamLimits

0x3711,	// (0x000128f0) popup_loc_request_window

0x37ff,	// (0x000129de) popup_wml_address_window_ParamLimits

0x37ff,	// (0x000129de) popup_wml_address_window

0x33d1,	// (0x000125b0) call_muted_g1

0x3084,	// (0x00012263) popup_call_audio_conf_window_ParamLimits

0x3084,	// (0x00012263) popup_call_audio_conf_window

0x33e5,	// (0x000125c4) popup_call_audio_first_window_ParamLimits

0x33e5,	// (0x000125c4) popup_call_audio_first_window

0x345b,	// (0x0001263a) popup_call_audio_in_window_ParamLimits

0x345b,	// (0x0001263a) popup_call_audio_in_window

0x3497,	// (0x00012676) popup_call_audio_out_window_ParamLimits

0x3497,	// (0x00012676) popup_call_audio_out_window

0x34d1,	// (0x000126b0) popup_call_audio_second_window_ParamLimits

0x34d1,	// (0x000126b0) popup_call_audio_second_window

0x3527,	// (0x00012706) popup_call_audio_wait_window_ParamLimits

0x3527,	// (0x00012706) popup_call_audio_wait_window

0x355c,	// (0x0001273b) popup_number_entry_window_ParamLimits

0x355c,	// (0x0001273b) popup_number_entry_window

0x93b0,	// (0x0001858f) bg_popup_call_pane_cp05_ParamLimits

0x93b0,	// (0x0001858f) bg_popup_call_pane_cp05

0x93d0,	// (0x000185af) popup_number_entry_window_t1

0x93e3,	// (0x000185c2) popup_number_entry_window_t2

0x93f5,	// (0x000185d4) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0001e2a5) popup_number_entry_window_t

0x9407,	// (0x000185e6) text_title_cp2

0x941a,	// (0x000185f9) bg_popup_call_pane_cp_ParamLimits

0x941a,	// (0x000185f9) bg_popup_call_pane_cp

0x9428,	// (0x00018607) call_thumbnail_pane

0x9430,	// (0x0001860f) popup_call_audio_in_window_g1_ParamLimits

0x9430,	// (0x0001860f) popup_call_audio_in_window_g1

0x943c,	// (0x0001861b) popup_call_audio_in_window_g2_ParamLimits

0x943c,	// (0x0001861b) popup_call_audio_in_window_g2

0x9448,	// (0x00018627) popup_call_audio_in_window_g3_ParamLimits

0x9448,	// (0x00018627) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0001e2ae) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0001e2ae) popup_call_audio_in_window_g

0x9454,	// (0x00018633) popup_call_audio_in_window_t1_ParamLimits

0x9454,	// (0x00018633) popup_call_audio_in_window_t1

0x9470,	// (0x0001864f) popup_call_audio_in_window_t2_ParamLimits

0x9470,	// (0x0001864f) popup_call_audio_in_window_t2

0x948c,	// (0x0001866b) popup_call_audio_in_window_t3_ParamLimits

0x948c,	// (0x0001866b) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0001e2b5) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0001e2b5) popup_call_audio_in_window_t

0x941a,	// (0x000185f9) bg_popup_call_pane_cp01_ParamLimits

0x941a,	// (0x000185f9) bg_popup_call_pane_cp01

0x9428,	// (0x00018607) call_thumbnail_pane_cp02

0x949f,	// (0x0001867e) call_type_pane_cp022

0x94a7,	// (0x00018686) popup_call_audio_out_window_g1_ParamLimits

0x94a7,	// (0x00018686) popup_call_audio_out_window_g1

0x94b9,	// (0x00018698) popup_call_audio_out_window_g2_ParamLimits

0x94b9,	// (0x00018698) popup_call_audio_out_window_g2

0x94c5,	// (0x000186a4) popup_call_audio_out_window_g3_ParamLimits

0x94c5,	// (0x000186a4) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0001e2bc) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0001e2bc) popup_call_audio_out_window_g

0x94d7,	// (0x000186b6) popup_call_audio_out_window_t1_ParamLimits

0x94d7,	// (0x000186b6) popup_call_audio_out_window_t1

0x94ef,	// (0x000186ce) popup_call_audio_out_window_t2_ParamLimits

0x94ef,	// (0x000186ce) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0001e2c3) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0001e2c3) popup_call_audio_out_window_t

0x9504,	// (0x000186e3) bg_popup_call_pane_ParamLimits

0x9504,	// (0x000186e3) bg_popup_call_pane

0x035b,	// (0x0000f53a) call_thumbnail_pane_cp_ParamLimits

0x035b,	// (0x0000f53a) call_thumbnail_pane_cp

0x9588,	// (0x00018767) call_type_pane_cp01_ParamLimits

0x9588,	// (0x00018767) call_type_pane_cp01

0x95cc,	// (0x000187ab) popup_call_audio_first_window_g1_ParamLimits

0x95cc,	// (0x000187ab) popup_call_audio_first_window_g1

0x9618,	// (0x000187f7) popup_call_audio_first_window_g2_ParamLimits

0x9618,	// (0x000187f7) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0001e2c8) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0001e2c8) popup_call_audio_first_window_g

0x965c,	// (0x0001883b) popup_call_audio_first_window_t1_ParamLimits

0x965c,	// (0x0001883b) popup_call_audio_first_window_t1

0x9708,	// (0x000188e7) popup_call_audio_first_window_t4_ParamLimits

0x9708,	// (0x000188e7) popup_call_audio_first_window_t4

0x9794,	// (0x00018973) popup_call_audio_first_window_t5_ParamLimits

0x9794,	// (0x00018973) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0001e2cd) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0001e2cd) popup_call_audio_first_window_t

0x97c3,	// (0x000189a2) bg_popup_call_pane_cp02

0x97cd,	// (0x000189ac) call_type_pane_cp023

0x97d5,	// (0x000189b4) popup_call_audio_wait_window_g1

0x97dd,	// (0x000189bc) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001e2d4) popup_call_audio_wait_window_g

0x97e5,	// (0x000189c4) popup_call_audio_wait_window_t3

0x97f3,	// (0x000189d2) bg_popup_call_pane_cp03_ParamLimits

0x97f3,	// (0x000189d2) bg_popup_call_pane_cp03

0x9853,	// (0x00018a32) call_thumbnail_pane_cp011_ParamLimits

0x9853,	// (0x00018a32) call_thumbnail_pane_cp011

0x985f,	// (0x00018a3e) call_type_pane_cp034_ParamLimits

0x985f,	// (0x00018a3e) call_type_pane_cp034

0x989b,	// (0x00018a7a) popup_call_audio_second_window_g1_ParamLimits

0x989b,	// (0x00018a7a) popup_call_audio_second_window_g1

0x98d7,	// (0x00018ab6) popup_call_audio_second_window_g2_ParamLimits

0x98d7,	// (0x00018ab6) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0001e2d9) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0001e2d9) popup_call_audio_second_window_g

0x9913,	// (0x00018af2) popup_call_audio_second_window_t1_ParamLimits

0x9913,	// (0x00018af2) popup_call_audio_second_window_t1

0x9994,	// (0x00018b73) popup_call_audio_second_window_t2_ParamLimits

0x9994,	// (0x00018b73) popup_call_audio_second_window_t2

0x99ca,	// (0x00018ba9) popup_call_audio_second_window_t3_ParamLimits

0x99ca,	// (0x00018ba9) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0001e2de) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0001e2de) popup_call_audio_second_window_t

0x97c3,	// (0x000189a2) bg_popup_call_pane_cp04

0x9a00,	// (0x00018bdf) list_conf_pane

0x9a08,	// (0x00018be7) popup_call_audio_conf_window_t1

0x9a16,	// (0x00018bf5) call_thumbnail_pane_g1

0x9a1e,	// (0x00018bfd) bg_pinb_pane_ParamLimits

0x9a1e,	// (0x00018bfd) bg_pinb_pane

0x9a2c,	// (0x00018c0b) find_pinb_pane

0x9a35,	// (0x00018c14) listscroll_pinb_pane_ParamLimits

0x9a35,	// (0x00018c14) listscroll_pinb_pane

0x9a44,	// (0x00018c23) pinb_bg_pane_g1

0x037f,	// (0x0000f55e) pinb_bg_pane_g2

0x038b,	// (0x0000f56a) pinb_bg_pane_g3

0x0397,	// (0x0000f576) pinb_bg_pane_g4

0x03a3,	// (0x0000f582) pinb_bg_pane_g5

0x03af,	// (0x0000f58e) pinb_bg_pane_g6

0x03ba,	// (0x0000f599) pinb_bg_pane_g7

0x03c5,	// (0x0000f5a4) pinb_bg_pane_g8

0x03d0,	// (0x0000f5af) pinb_bg_pane_g9

0x03da,	// (0x0000f5b9) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0001e2e5) pinb_bg_pane_g

0x03f7,	// (0x0000f5d6) grid_pinb_pane

0x0400,	// (0x0000f5df) list_pinb_pane

0x0409,	// (0x0000f5e8) scroll_pane_cp01_ParamLimits

0x0409,	// (0x0000f5e8) scroll_pane_cp01

0x9a4e,	// (0x00018c2d) find_pinb_pane_g1_ParamLimits

0x9a4e,	// (0x00018c2d) find_pinb_pane_g1

0x9a66,	// (0x00018c45) find_pinb_pane_t1

0x9a78,	// (0x00018c57) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0001e2ff) find_pinb_pane_t

0x9a8d,	// (0x00018c6c) input_focus_pane_cp01_ParamLimits

0x9a8d,	// (0x00018c6c) input_focus_pane_cp01

0x041b,	// (0x0000f5fa) cell_pinb_pane_ParamLimits

0x041b,	// (0x0000f5fa) cell_pinb_pane

0x9a99,	// (0x00018c78) cell_pinb_pane_g1_ParamLimits

0x9a99,	// (0x00018c78) cell_pinb_pane_g1

0x9aac,	// (0x00018c8b) cell_pinb_pane_g2_ParamLimits

0x9aac,	// (0x00018c8b) cell_pinb_pane_g2

0x9ab8,	// (0x00018c97) cell_pinb_pane_g3_ParamLimits

0x9ab8,	// (0x00018c97) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0001e304) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0001e304) cell_pinb_pane_g

0x97c3,	// (0x000189a2) grid_highlight_pane_cp01

0x0449,	// (0x0000f628) list_pinb_item_pane_ParamLimits

0x0449,	// (0x0000f628) list_pinb_item_pane

0x97c3,	// (0x000189a2) list_highlight_pane_cp02

0x045c,	// (0x0000f63b) list_pinb_item_pane_g1_ParamLimits

0x045c,	// (0x0000f63b) list_pinb_item_pane_g1

0x0469,	// (0x0000f648) list_pinb_item_pane_g2_ParamLimits

0x0469,	// (0x0000f648) list_pinb_item_pane_g2

0x0475,	// (0x0000f654) list_pinb_item_pane_g3_ParamLimits

0x0475,	// (0x0000f654) list_pinb_item_pane_g3

0x0486,	// (0x0000f665) list_pinb_item_pane_g4_ParamLimits

0x0486,	// (0x0000f665) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0001e30b) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0001e30b) list_pinb_item_pane_g

0x0492,	// (0x0000f671) list_pinb_item_pane_t1_ParamLimits

0x0492,	// (0x0000f671) list_pinb_item_pane_t1

0x04c7,	// (0x0000f6a6) calc_display_pane

0x04ef,	// (0x0000f6ce) calc_paper_pane

0x0512,	// (0x0000f6f1) grid_calc_pane

0x97c3,	// (0x000189a2) bg_list_pane_cp01

0x0540,	// (0x0000f71f) clock_g1

0x0548,	// (0x0000f727) clock_g2

0x0001,

0xf135,	// (0x0001e314) clock_g

0x0550,	// (0x0000f72f) clock_t1_ParamLimits

0x0550,	// (0x0000f72f) clock_t1

0x0565,	// (0x0000f744) clock_t2_ParamLimits

0x0565,	// (0x0000f744) clock_t2

0x0577,	// (0x0000f756) clock_t3_ParamLimits

0x0577,	// (0x0000f756) clock_t3

0x0589,	// (0x0000f768) clock_t4_ParamLimits

0x0589,	// (0x0000f768) clock_t4

0x059b,	// (0x0000f77a) clock_t5_ParamLimits

0x059b,	// (0x0000f77a) clock_t5

0x05b0,	// (0x0000f78f) clock_t6_ParamLimits

0x05b0,	// (0x0000f78f) clock_t6

0x05c2,	// (0x0000f7a1) clock_t7_ParamLimits

0x05c2,	// (0x0000f7a1) clock_t7

0x05d4,	// (0x0000f7b3) clock_t8_ParamLimits

0x05d4,	// (0x0000f7b3) clock_t8

0x05e8,	// (0x0000f7c7) clock_t9_ParamLimits

0x05e8,	// (0x0000f7c7) clock_t9

0x0008,

0xf13a,	// (0x0001e319) clock_t_ParamLimits

0xf13a,	// (0x0001e319) clock_t

0x9acc,	// (0x00018cab) popup_clock_analogue_window_cp02

0x9acc,	// (0x00018cab) popup_clock_digital_window_cp01

0x9ad4,	// (0x00018cb3) listscroll_help_pane

0x97c3,	// (0x000189a2) phob_pre_status_pane

0x9ade,	// (0x00018cbd) grid_qdial_pane

0x9a1e,	// (0x00018bfd) listscroll_mce_pane

0x9a1e,	// (0x00018bfd) bg_notes_pane

0x9ae8,	// (0x00018cc7) list_notes_pane

0x05fc,	// (0x0000f7db) scroll_pane_cp06

0x9af6,	// (0x00018cd5) bg_calc_paper_pane

0x9b0a,	// (0x00018ce9) list_calc_pane

0x9b24,	// (0x00018d03) bg_calc_display_pane

0x0610,	// (0x0000f7ef) calc_display_pane_t1

0x0622,	// (0x0000f801) calc_display_pane_t2

0x9b30,	// (0x00018d0f) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0001e32c) calc_display_pane_t

0x0634,	// (0x0000f813) cell_calc_pane_ParamLimits

0x0634,	// (0x0000f813) cell_calc_pane

0x9b42,	// (0x00018d21) bg_calc_paper_pane_g1

0x9b4e,	// (0x00018d2d) bg_calc_paper_pane_g2

0x9b5a,	// (0x00018d39) bg_calc_paper_pane_g3

0x9b66,	// (0x00018d45) bg_calc_paper_pane_g4

0x9b72,	// (0x00018d51) bg_calc_paper_pane_g5

0x066b,	// (0x0000f84a) bg_calc_paper_pane_g6

0x067c,	// (0x0000f85b) bg_calc_paper_pane_g7

0x068d,	// (0x0000f86c) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0001e333) bg_calc_paper_pane_g

0x06a0,	// (0x0000f87f) calc_bg_paper_pane_g9

0x06b3,	// (0x0000f892) list_calc_item_pane_ParamLimits

0x06b3,	// (0x0000f892) list_calc_item_pane

0x9b7e,	// (0x00018d5d) list_calc_item_pane_g1

0x9b8b,	// (0x00018d6a) list_calc_item_pane_t1_ParamLimits

0x9b8b,	// (0x00018d6a) list_calc_item_pane_t1

0x06cd,	// (0x0000f8ac) list_calc_item_pane_t2_ParamLimits

0x06cd,	// (0x0000f8ac) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0001e344) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0001e344) list_calc_item_pane_t

0x9b9d,	// (0x00018d7c) cell_calc_pane_g1

0x9ba7,	// (0x00018d86) grid_highlight_pane_cp02

0x9bc9,	// (0x00018da8) bg_calc_display_pane_g1

0x9bd2,	// (0x00018db1) bg_calc_display_pane_g2

0x9bdc,	// (0x00018dbb) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0001e34e) bg_calc_display_pane_g

0x06ff,	// (0x0000f8de) cell_qdial_pane_ParamLimits

0x06ff,	// (0x0000f8de) cell_qdial_pane

0x0713,	// (0x0000f8f2) cell_qdial_pane_g1_ParamLimits

0x0713,	// (0x0000f8f2) cell_qdial_pane_g1

0x0729,	// (0x0000f908) cell_qdial_pane_g2_ParamLimits

0x0729,	// (0x0000f908) cell_qdial_pane_g2

0x9be5,	// (0x00018dc4) cell_qdial_pane_g3_ParamLimits

0x9be5,	// (0x00018dc4) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0001e355) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0001e355) cell_qdial_pane_g

0x074f,	// (0x0000f92e) cell_qdial_pane_t1_ParamLimits

0x074f,	// (0x0000f92e) cell_qdial_pane_t1

0x0767,	// (0x0000f946) cell_qdial_pane_t2_ParamLimits

0x0767,	// (0x0000f946) cell_qdial_pane_t2

0x077a,	// (0x0000f959) cell_qdial_pane_t3_ParamLimits

0x077a,	// (0x0000f959) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0001e35e) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0001e35e) cell_qdial_pane_t

0x97c3,	// (0x000189a2) grid_highlight_pane_cp04

0x9bf1,	// (0x00018dd0) thumbnail_qdial_pane_ParamLimits

0x9bf1,	// (0x00018dd0) thumbnail_qdial_pane

0x9c4d,	// (0x00018e2c) list_help_pane

0x9c56,	// (0x00018e35) scroll_pane_cp02

0x078d,	// (0x0000f96c) help_list_pane_t1_ParamLimits

0x078d,	// (0x0000f96c) help_list_pane_t1

0x9c5f,	// (0x00018e3e) bg_notes_pane_g2

0x9c67,	// (0x00018e46) bg_notes_pane_g3

0x9c6f,	// (0x00018e4e) notes_bg_pane_g1

0x9c77,	// (0x00018e56) notes_bg_pane_g4

0x9c7f,	// (0x00018e5e) notes_bg_pane_g5

0x9c87,	// (0x00018e66) notes_bg_pane_g6

0x9c8f,	// (0x00018e6e) notes_bg_pane_g7

0x9c97,	// (0x00018e76) notes_bg_pane_g8

0x9c9f,	// (0x00018e7e) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0001e37c) notes_bg_pane_g

0x07ac,	// (0x0000f98b) list_notes_text_pane_ParamLimits

0x07ac,	// (0x0000f98b) list_notes_text_pane

0x9ca7,	// (0x00018e86) list_notes_text_pane_g1

0x07c2,	// (0x0000f9a1) list_notes_text_pane_t1

0x07d0,	// (0x0000f9af) listscroll_cale_week_pane

0x07fc,	// (0x0000f9db) bg_cale_heading_pane

0x9cca,	// (0x00018ea9) bg_cale_pane_cp01

0x081a,	// (0x0000f9f9) cale_week_corner_pane

0x0839,	// (0x0000fa18) cale_week_day_heading_pane

0x085c,	// (0x0000fa3b) cale_week_scroll_pane_g1

0x0875,	// (0x0000fa54) cale_week_scroll_pane_g2

0x088d,	// (0x0000fa6c) cale_week_scroll_pane_g3

0x08a5,	// (0x0000fa84) cale_week_scroll_pane_g4

0x08bd,	// (0x0000fa9c) cale_week_scroll_pane_g5

0x08d9,	// (0x0000fab8) cale_week_scroll_pane_g6

0x08f9,	// (0x0000fad8) cale_week_scroll_pane_g7

0x0919,	// (0x0000faf8) cale_week_scroll_pane_g8

0x093d,	// (0x0000fb1c) cale_week_scroll_pane_g9

0x0955,	// (0x0000fb34) cale_week_scroll_pane_g10

0x096d,	// (0x0000fb4c) cale_week_scroll_pane_g11

0x0985,	// (0x0000fb64) cale_week_scroll_pane_g12

0x099d,	// (0x0000fb7c) cale_week_scroll_pane_g13

0x099d,	// (0x0000fb7c) cale_week_scroll_pane_g14

0x099d,	// (0x0000fb7c) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0001e38b) cale_week_scroll_pane_g

0x09d9,	// (0x0000fbb8) cale_week_time_pane

0x09fd,	// (0x0000fbdc) grid_cale_week_pane

0x9cfa,	// (0x00018ed9) scroll_pane_cp08

0x0a23,	// (0x0000fc02) cell_cale_week_pane_ParamLimits

0x0a23,	// (0x0000fc02) cell_cale_week_pane

0x0ab1,	// (0x0000fc90) cale_week_day_heading_pane_t1

0x0afb,	// (0x0000fcda) cale_week_day_heading_pane_t2

0x0b4a,	// (0x0000fd29) cale_week_day_heading_pane_t3

0x0b99,	// (0x0000fd78) cale_week_day_heading_pane_t4

0x0be8,	// (0x0000fdc7) cale_week_day_heading_pane_t5

0x0c3f,	// (0x0000fe1e) cale_week_day_heading_pane_t6

0x0c96,	// (0x0000fe75) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0001e3ac) cale_week_day_heading_pane_t

0x9d17,	// (0x00018ef6) bg_cale_side_pane

0x0ce0,	// (0x0000febf) cale_week_time_pane_t1

0x0cfa,	// (0x0000fed9) cale_week_time_pane_t2

0x0d14,	// (0x0000fef3) cale_week_time_pane_t3

0x0d2e,	// (0x0000ff0d) cale_week_time_pane_t4

0x0d48,	// (0x0000ff27) cale_week_time_pane_t5

0x0d62,	// (0x0000ff41) cale_week_time_pane_t6

0x0d7c,	// (0x0000ff5b) cale_week_time_pane_t7

0x0d9c,	// (0x0000ff7b) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0001e3bb) cale_week_time_pane_t

0x0dbc,	// (0x0000ff9b) cell_cale_week_pane_g2

0x0de0,	// (0x0000ffbf) cell_cale_week_pane_g3_ParamLimits

0x0de0,	// (0x0000ffbf) cell_cale_week_pane_g3

0x9d25,	// (0x00018f04) grid_highlight_pane_cp07

0x9d2d,	// (0x00018f0c) listscroll_gms_pane

0x9d37,	// (0x00018f16) grid_gms_pane

0x9d40,	// (0x00018f1f) listscroll_gms_pane_g1

0x9d48,	// (0x00018f27) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0001e3cc) listscroll_gms_pane_g

0x0df8,	// (0x0000ffd7) scroll_pane_cp010

0x0e03,	// (0x0000ffe2) cell_gms_pane_ParamLimits

0x0e03,	// (0x0000ffe2) cell_gms_pane

0x0e15,	// (0x0000fff4) cell_gms_pane_g1

0x9d50,	// (0x00018f2f) cell_gms_pane_g2

0x9ca7,	// (0x00018e86) cell_gms_pane_g3

0x9d58,	// (0x00018f37) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0001e3d1) cell_gms_pane_g

0x9d61,	// (0x00018f40) grid_highlight_pane_cp09

0x337b,	// (0x0001255a) phob_pre_status_pane_g1

0x3383,	// (0x00012562) phob_pre_status_pane_g2

0x338b,	// (0x0001256a) phob_pre_status_pane_g3

0x3393,	// (0x00012572) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0001e7c0) phob_pre_status_pane_g

0x33a3,	// (0x00012582) phob_pre_status_pane_t1

0x33b1,	// (0x00012590) phob_pre_status_pane_t2

0x33c1,	// (0x000125a0) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0001e7cb) phob_pre_status_pane_t

0x97c3,	// (0x000189a2) bg_list_pane_cp05

0x0e25,	// (0x00010004) grid_vorec_pane

0x0e2f,	// (0x0001000e) vorec_t1

0x0e3d,	// (0x0001001c) vorec_t2

0x0e4b,	// (0x0001002a) vorec_t3

0x0e59,	// (0x00010038) vorec_t4

0x9d69,	// (0x00018f48) vorec_t5

0x0e67,	// (0x00010046) vorec_t6

0x0006,

0xf1fb,	// (0x0001e3da) vorec_t

0x0e83,	// (0x00010062) wait_bar_pane_cp01

0x0e8b,	// (0x0001006a) cell_vorec_pane_ParamLimits

0x0e8b,	// (0x0001006a) cell_vorec_pane

0x9d77,	// (0x00018f56) cell_vorec_pane_g1

0x97c3,	// (0x000189a2) grid_highlight_pane_cp05

0x0eb6,	// (0x00010095) cams_zoom_pane

0x0ec5,	// (0x000100a4) image_vga_pane

0x0edf,	// (0x000100be) main_camera_pane_g1

0x0ef1,	// (0x000100d0) main_camera_pane_g2

0x0f01,	// (0x000100e0) main_camera_pane_g3

0x0f13,	// (0x000100f2) main_camera_pane_g4

0x0f25,	// (0x00010104) main_camera_pane_g5

0x0f37,	// (0x00010116) main_camera_pane_g6

0x0f49,	// (0x00010128) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001e3e9) main_camera_pane_g

0x0f5b,	// (0x0001013a) main_camera_pane_t1

0x0f71,	// (0x00010150) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001e3fa) main_camera_pane_t

0x0fad,	// (0x0001018c) cams_zoom_pane_cp_ParamLimits

0x0fad,	// (0x0001018c) cams_zoom_pane_cp

0x0fd5,	// (0x000101b4) image_cif_pane_ParamLimits

0x0fd5,	// (0x000101b4) image_cif_pane

0x1010,	// (0x000101ef) image_subqcif_pane

0x1018,	// (0x000101f7) main_video_pane_g1_ParamLimits

0x1018,	// (0x000101f7) main_video_pane_g1

0x103c,	// (0x0001021b) main_video_pane_g2_ParamLimits

0x103c,	// (0x0001021b) main_video_pane_g2

0x1070,	// (0x0001024f) main_video_pane_g3_ParamLimits

0x1070,	// (0x0001024f) main_video_pane_g3

0x109e,	// (0x0001027d) main_video_pane_g4_ParamLimits

0x109e,	// (0x0001027d) main_video_pane_g4

0x10cc,	// (0x000102ab) main_video_pane_g5_ParamLimits

0x10cc,	// (0x000102ab) main_video_pane_g5

0x9d8d,	// (0x00018f6c) main_video_pane_g6_ParamLimits

0x9d8d,	// (0x00018f6c) main_video_pane_g6

0x0006,

0xf220,	// (0x0001e3ff) main_video_pane_g_ParamLimits

0xf220,	// (0x0001e3ff) main_video_pane_g

0x10f5,	// (0x000102d4) main_video_pane_t1_ParamLimits

0x10f5,	// (0x000102d4) main_video_pane_t1

0x9da7,	// (0x00018f86) cams_zoom_pane_g1

0x9db0,	// (0x00018f8f) cams_zoom_pane_g2

0x9db9,	// (0x00018f98) cams_zoom_pane_g3

0x9dc2,	// (0x00018fa1) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001e40e) cams_zoom_pane_g

0x1152,	// (0x00010331) grid_cams_pane

0x116c,	// (0x0001034b) linegrid_cams_pane

0x117f,	// (0x0001035e) cell_cams_pane_ParamLimits

0x117f,	// (0x0001035e) cell_cams_pane

0x9dcb,	// (0x00018faa) cams_burst_image_pane

0x9dd3,	// (0x00018fb2) cell_cams_pane_g1

0x97c3,	// (0x000189a2) grid_highlight_pane_cp03

0x9b9d,	// (0x00018d7c) mp_bg_pane_g1

0x97c3,	// (0x000189a2) bg_list_pane_cp03

0xbc64,	// (0x0001ae43) bg_mp_pane

0xbc6c,	// (0x0001ae4b) grid_mp_pane

0xbc74,	// (0x0001ae53) media_player_g1

0xbc7c,	// (0x0001ae5b) media_player_t1

0xbc8a,	// (0x0001ae69) media_player_t2

0xbc98,	// (0x0001ae77) media_player_t3

0xbca6,	// (0x0001ae85) media_player_t4

0xbcb4,	// (0x0001ae93) media_player_t5

0xbcc2,	// (0x0001aea1) media_player_t6

0xbcd0,	// (0x0001aeaf) media_player_t7

0x0006,

0xf5cb,	// (0x0001e7aa) media_player_t

0xbcde,	// (0x0001aebd) wait_bar_pane_cp02

0xf5b0,	// (0x0001e78f) main_usb_pane_t

0x3372,	// (0x00012551) cell_mp_pane

0x9b9d,	// (0x00018d7c) cell_mp_pane_g1

0x97c3,	// (0x000189a2) grid_highlight_pane_cp06

0x9ddb,	// (0x00018fba) grid_skin_colour_pane

0x9de3,	// (0x00018fc2) list_highlight_pane_cp03

0x12b5,	// (0x00010494) skin_g1

0x9deb,	// (0x00018fca) skin_t1

0x9dfa,	// (0x00018fd9) skin_t2

0x0001,

0xf264,	// (0x0001e443) skin_t

0x12bd,	// (0x0001049c) cell_skin_colour_pane_ParamLimits

0x12bd,	// (0x0001049c) cell_skin_colour_pane

0x9e08,	// (0x00018fe7) cell_skin_colour_pane_g1

0x1336,	// (0x00010515) call_video_g1_ParamLimits

0x1336,	// (0x00010515) call_video_g1

0x1352,	// (0x00010531) call_video_g2_ParamLimits

0x1352,	// (0x00010531) call_video_g2

0x0001,

0xf269,	// (0x0001e448) call_video_g_ParamLimits

0xf269,	// (0x0001e448) call_video_g

0x13a4,	// (0x00010583) call_video_uplink_pane_cp1_ParamLimits

0x13a4,	// (0x00010583) call_video_uplink_pane_cp1

0x9e1a,	// (0x00018ff9) call_video_uplink_pane_cp2

0x1443,	// (0x00010622) video_down_crop_pane_ParamLimits

0x1443,	// (0x00010622) video_down_crop_pane

0x152c,	// (0x0001070b) video_down_pane_ParamLimits

0x152c,	// (0x0001070b) video_down_pane

0x9e22,	// (0x00019001) video_down_subqcif_pane_ParamLimits

0x9e22,	// (0x00019001) video_down_subqcif_pane

0x9e3a,	// (0x00019019) video_down_subqcif_pane_cp_ParamLimits

0x9e3a,	// (0x00019019) video_down_subqcif_pane_cp

0x9e60,	// (0x0001903f) im_reading_pane_ParamLimits

0x9e60,	// (0x0001903f) im_reading_pane

0x163a,	// (0x00010819) im_writing_pane_ParamLimits

0x163a,	// (0x00010819) im_writing_pane

0x1650,	// (0x0001082f) im_reading_pane_t1

0x9e7a,	// (0x00019059) list_im_pane

0x9e8b,	// (0x0001906a) scroll_pane_cp07

0x168d,	// (0x0001086c) im_writing_pane_t1_ParamLimits

0x168d,	// (0x0001086c) im_writing_pane_t1

0x9ea4,	// (0x00019083) im_writing_pane_t2_ParamLimits

0x9ea4,	// (0x00019083) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001e452) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001e452) im_writing_pane_t

0x97c3,	// (0x000189a2) input_focus_pane_cp04

0x97c3,	// (0x000189a2) input_focus_pane_cp05

0x16a2,	// (0x00010881) list_im_single_pane_ParamLimits

0x16a2,	// (0x00010881) list_im_single_pane

0x16b8,	// (0x00010897) list_single_im_pane_t1

0x3332,	// (0x00012511) blid_accuracy_pane

0x333a,	// (0x00012519) blid_compass_pane

0x3344,	// (0x00012523) main_location_t1

0x3354,	// (0x00012533) main_location_t2

0x3364,	// (0x00012543) main_location_t3

0x0002,

0xf5da,	// (0x0001e7b9) main_location_t

0x97c3,	// (0x000189a2) aid_levels_location

0x9b9d,	// (0x00018d7c) blid_accuracy_pane_g1

0x9b9d,	// (0x00018d7c) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001e4b4) blid_accuracy_pane_g

0x9eec,	// (0x000190cb) wml_content_pane

0x9f2a,	// (0x00019109) wml_button_pane_ParamLimits

0x9f2a,	// (0x00019109) wml_button_pane

0x16c7,	// (0x000108a6) wml_list_single_large_pane_ParamLimits

0x16c7,	// (0x000108a6) wml_list_single_large_pane

0x16dd,	// (0x000108bc) wml_list_single_medium_pane_ParamLimits

0x16dd,	// (0x000108bc) wml_list_single_medium_pane

0x16f7,	// (0x000108d6) wml_list_single_small_pane_ParamLimits

0x16f7,	// (0x000108d6) wml_list_single_small_pane

0x9f3e,	// (0x0001911d) wml_selection_box_pane_ParamLimits

0x9f3e,	// (0x0001911d) wml_selection_box_pane

0x9f51,	// (0x00019130) wml_list_single_pane_t1

0x9f60,	// (0x0001913f) wml_list_single_medium_pane_t1

0x9f6f,	// (0x0001914e) wml_list_single_large_pane_t1

0x9f7e,	// (0x0001915d) input_focus_pane_cp02_ParamLimits

0x9f7e,	// (0x0001915d) input_focus_pane_cp02

0x9f91,	// (0x00019170) wml_selection_box_pane_g1

0x9f9a,	// (0x00019179) wml_selection_box_pane_t1_ParamLimits

0x9f9a,	// (0x00019179) wml_selection_box_pane_t1

0x9a1e,	// (0x00018bfd) bg_wml_button_pane_ParamLimits

0x9a1e,	// (0x00018bfd) bg_wml_button_pane

0x9fb2,	// (0x00019191) wml_button_pane_g1

0x9fba,	// (0x00019199) wml_button_pane_t1

0x9fb2,	// (0x00019191) wml_button_bg_pane_g1

0x9fca,	// (0x000191a9) wml_button_bg_pane_g2

0x9fd2,	// (0x000191b1) wml_button_bg_pane_g3

0x9fda,	// (0x000191b9) wml_button_bg_pane_g4

0x9fe2,	// (0x000191c1) wml_button_bg_pane_g5

0x9fea,	// (0x000191c9) wml_button_bg_pane_g6

0x9ff2,	// (0x000191d1) wml_button_bg_pane_g7

0x9ffa,	// (0x000191d9) wml_button_bg_pane_g8

0xa002,	// (0x000191e1) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001e457) wml_button_bg_pane_g

0x1711,	// (0x000108f0) bg_list_pane_cp02

0xa00a,	// (0x000191e9) mce_header_pane_ParamLimits

0xa00a,	// (0x000191e9) mce_header_pane

0xa020,	// (0x000191ff) mce_icon_pane

0xa020,	// (0x000191ff) mce_image_pane

0xa029,	// (0x00019208) mce_text_pane_ParamLimits

0xa029,	// (0x00019208) mce_text_pane

0x1719,	// (0x000108f8) scroll_pane_cp03

0x9f22,	// (0x00019101) scroll_pane_cp04

0xa03c,	// (0x0001921b) scroll_pane_cp05_ParamLimits

0xa03c,	// (0x0001921b) scroll_pane_cp05

0x1723,	// (0x00010902) mce_header_field_pane_ParamLimits

0x1723,	// (0x00010902) mce_header_field_pane

0x173a,	// (0x00010919) mce_header_field_pane_2_ParamLimits

0x173a,	// (0x00010919) mce_header_field_pane_2

0x1750,	// (0x0001092f) mce_header_field_pane_3

0x1758,	// (0x00010937) list_single_mce_message_pane_ParamLimits

0x1758,	// (0x00010937) list_single_mce_message_pane

0x176f,	// (0x0001094e) list_single_mce_smart_pane_ParamLimits

0x176f,	// (0x0001094e) list_single_mce_smart_pane

0xa048,	// (0x00019227) input_focus_pane_cp03

0xa051,	// (0x00019230) list_header_data_pane

0x1791,	// (0x00010970) mce_header_field_pane_t1

0x17a1,	// (0x00010980) list_single_mce_header_pane_ParamLimits

0x17a1,	// (0x00010980) list_single_mce_header_pane

0xa059,	// (0x00019238) list_single_mce_header_pane_t1

0xa068,	// (0x00019247) list_single_mce_message_pane_g1

0xa070,	// (0x0001924f) list_single_mce_message_pane_t1

0x17db,	// (0x000109ba) bg_cale_heading_pane_cp01_ParamLimits

0x17db,	// (0x000109ba) bg_cale_heading_pane_cp01

0xa07e,	// (0x0001925d) bg_cale_pane_cp02_ParamLimits

0xa07e,	// (0x0001925d) bg_cale_pane_cp02

0x1816,	// (0x000109f5) cale_month_corner_pane

0x1835,	// (0x00010a14) cale_month_day_heading_pane_ParamLimits

0x1835,	// (0x00010a14) cale_month_day_heading_pane

0x1888,	// (0x00010a67) cale_month_pane_g1_ParamLimits

0x1888,	// (0x00010a67) cale_month_pane_g1

0x18b8,	// (0x00010a97) cale_month_pane_g2_ParamLimits

0x18b8,	// (0x00010a97) cale_month_pane_g2

0x18e8,	// (0x00010ac7) cale_month_pane_g3_ParamLimits

0x18e8,	// (0x00010ac7) cale_month_pane_g3

0x1924,	// (0x00010b03) cale_month_pane_g4_ParamLimits

0x1924,	// (0x00010b03) cale_month_pane_g4

0x1960,	// (0x00010b3f) cale_month_pane_g5_ParamLimits

0x1960,	// (0x00010b3f) cale_month_pane_g5

0x19a8,	// (0x00010b87) cale_month_pane_g6_ParamLimits

0x19a8,	// (0x00010b87) cale_month_pane_g6

0x19f4,	// (0x00010bd3) cale_month_pane_g7_ParamLimits

0x19f4,	// (0x00010bd3) cale_month_pane_g7

0x1a48,	// (0x00010c27) cale_month_pane_g8_ParamLimits

0x1a48,	// (0x00010c27) cale_month_pane_g8

0x1a9c,	// (0x00010c7b) cale_month_pane_g9_ParamLimits

0x1a9c,	// (0x00010c7b) cale_month_pane_g9

0x1aee,	// (0x00010ccd) cale_month_pane_g10_ParamLimits

0x1aee,	// (0x00010ccd) cale_month_pane_g10

0x1b40,	// (0x00010d1f) cale_month_pane_g11_ParamLimits

0x1b40,	// (0x00010d1f) cale_month_pane_g11

0x1b92,	// (0x00010d71) cale_month_pane_g12_ParamLimits

0x1b92,	// (0x00010d71) cale_month_pane_g12

0x1be4,	// (0x00010dc3) cale_month_pane_g13_ParamLimits

0x1be4,	// (0x00010dc3) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001e46a) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001e46a) cale_month_pane_g

0x1c36,	// (0x00010e15) cale_month_week_pane

0x1c5a,	// (0x00010e39) grid_cale_month_pane_ParamLimits

0x1c5a,	// (0x00010e39) grid_cale_month_pane

0x1c98,	// (0x00010e77) cale_month_day_heading_pane_t1

0x1d1e,	// (0x00010efd) cale_month_day_heading_pane_t2

0x1daf,	// (0x00010f8e) cale_month_day_heading_pane_t3

0x1e40,	// (0x0001101f) cale_month_day_heading_pane_t4

0x1ed9,	// (0x000110b8) cale_month_day_heading_pane_t5

0x1f7a,	// (0x00011159) cale_month_day_heading_pane_t6

0x201b,	// (0x000111fa) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001e485) cale_month_day_heading_pane_t

0x9d17,	// (0x00018ef6) bg_cale_side_pane_cp01

0x20c4,	// (0x000112a3) cale_month_week_pane_t1

0x20dd,	// (0x000112bc) cale_month_week_pane_t2

0x20f6,	// (0x000112d5) cale_month_week_pane_t3

0x210f,	// (0x000112ee) cale_month_week_pane_t4

0x2128,	// (0x00011307) cale_month_week_pane_t5

0x2141,	// (0x00011320) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001e494) cale_month_week_pane_t

0x215a,	// (0x00011339) cell_cale_month_pane_ParamLimits

0x215a,	// (0x00011339) cell_cale_month_pane

0xa0bd,	// (0x0001929c) cell_cale_month_pane_g1

0x22b2,	// (0x00011491) cell_cale_month_pane_t1_ParamLimits

0x22b2,	// (0x00011491) cell_cale_month_pane_t1

0x9d25,	// (0x00018f04) grid_highlight_pane_cp08

0x9b9d,	// (0x00018d7c) main_smil_g1

0x22d2,	// (0x000114b1) smil_status_pane

0xa0c9,	// (0x000192a8) smil_text_pane

0xbb84,	// (0x0001ad63) bg_popup_call3_rect_pane_g8

0xbb8c,	// (0x0001ad6b) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e74d) bg_popup_call3_rect_pane_g

0xbe27,	// (0x0001b006) smil_status_volume_pane_g1

0xa0d3,	// (0x000192b2) smil_status_pane_t1

0xbe5a,	// (0x0001b039) volume_smil_pane

0xa0ea,	// (0x000192c9) list_smil_text_pane

0x22e7,	// (0x000114c6) scroll_pane_cp011

0x22f2,	// (0x000114d1) smil_text_list_pane_t1_ParamLimits

0x22f2,	// (0x000114d1) smil_text_list_pane_t1

0xa0f4,	// (0x000192d3) aid_volume_smil_ParamLimits

0xa0f4,	// (0x000192d3) aid_volume_smil

0x9b9d,	// (0x00018d7c) smil_volume_pane_g1

0x9b9d,	// (0x00018d7c) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001e4b4) smil_volume_pane_g

0x07d0,	// (0x0000f9af) listscroll_cale_day_pane

0xa116,	// (0x000192f5) bg_cale_pane

0xa12e,	// (0x0001930d) list_cale_pane

0xa151,	// (0x00019330) scroll_pane_cp09

0xa162,	// (0x00019341) cale_bg_pane_g1

0xa16a,	// (0x00019349) cale_bg_pane_g2

0xa172,	// (0x00019351) cale_bg_pane_g3

0xa17a,	// (0x00019359) cale_bg_pane_g4

0xa182,	// (0x00019361) cale_bg_pane_g5

0xa18a,	// (0x00019369) cale_bg_pane_g6

0xa192,	// (0x00019371) cale_bg_pane_g7

0xa19a,	// (0x00019379) cale_bg_pane_g8

0xa1a2,	// (0x00019381) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001e4b9) cale_bg_pane_g

0x2334,	// (0x00011513) list_cale_time_pane_ParamLimits

0x2334,	// (0x00011513) list_cale_time_pane

0xa1b2,	// (0x00019391) list_cale_time_pane_g1_ParamLimits

0xa1b2,	// (0x00019391) list_cale_time_pane_g1

0xa1be,	// (0x0001939d) list_cale_time_pane_g2_ParamLimits

0xa1be,	// (0x0001939d) list_cale_time_pane_g2

0x234b,	// (0x0001152a) list_cale_time_pane_g3_ParamLimits

0x234b,	// (0x0001152a) list_cale_time_pane_g3

0x2359,	// (0x00011538) list_cale_time_pane_g4_ParamLimits

0x2359,	// (0x00011538) list_cale_time_pane_g4

0x2367,	// (0x00011546) list_cale_time_pane_g5_ParamLimits

0x2367,	// (0x00011546) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001e4cc) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001e4cc) list_cale_time_pane_g

0xa1d8,	// (0x000193b7) list_cale_time_pane_t1_ParamLimits

0xa1d8,	// (0x000193b7) list_cale_time_pane_t1

0xa200,	// (0x000193df) list_cale_time_pane_t2_ParamLimits

0xa200,	// (0x000193df) list_cale_time_pane_t2

0x26b7,	// (0x00011896) aid_blid_cardinal_pane

0x26f5,	// (0x000118d4) compass_pane_t4

0xa228,	// (0x00019407) list_cale_time_pane_t4_ParamLimits

0xa228,	// (0x00019407) list_cale_time_pane_t4

0x2703,	// (0x000118e2) compass_pane_t5

0x2711,	// (0x000118f0) compass_pane_t6

0x271f,	// (0x000118fe) compass_pane_t7

0xa758,	// (0x00019937) navi_pane_cc_t1

0xa94f,	// (0x00019b2e) aid_phob_thumbnail_center_pane

0x2d42,	// (0x00011f21) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e4d9) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e4d9) list_cale_time_pane_t

0x941a,	// (0x000185f9) bg_popup_window_pane_cp02_ParamLimits

0x941a,	// (0x000185f9) bg_popup_window_pane_cp02

0xa250,	// (0x0001942f) heading_pane_cp01_ParamLimits

0xa250,	// (0x0001942f) heading_pane_cp01

0xa25c,	// (0x0001943b) loc_req_pane_ParamLimits

0xa25c,	// (0x0001943b) loc_req_pane

0xa26c,	// (0x0001944b) loc_type_pane_ParamLimits

0xa26c,	// (0x0001944b) loc_type_pane

0xa27e,	// (0x0001945d) loc_type_pane_t1_ParamLimits

0xa27e,	// (0x0001945d) loc_type_pane_t1

0xa290,	// (0x0001946f) loc_type_pane_t2_ParamLimits

0xa290,	// (0x0001946f) loc_type_pane_t2

0xa2a2,	// (0x00019481) loc_type_pane_t3_ParamLimits

0xa2a2,	// (0x00019481) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e4e0) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e4e0) loc_type_pane_t

0xa2b4,	// (0x00019493) list_loc_req_pane

0xa2be,	// (0x0001949d) scroll_pane_cp012

0x2375,	// (0x00011554) list_single_loc_request_popup_menu_pane_ParamLimits

0x2375,	// (0x00011554) list_single_loc_request_popup_menu_pane

0xa2c9,	// (0x000194a8) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa2c9,	// (0x000194a8) list_single_loc_request_popup_menu_pane_g1

0xa2d5,	// (0x000194b4) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa2d5,	// (0x000194b4) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e4e7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e4e7) list_single_loc_request_popup_menu_pane_g

0xa2e1,	// (0x000194c0) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa2e1,	// (0x000194c0) list_single_loc_request_popup_menu_pane_t1

0x9a1e,	// (0x00018bfd) bg_popup_window_pane_cp03_ParamLimits

0x9a1e,	// (0x00018bfd) bg_popup_window_pane_cp03

0xa2f7,	// (0x000194d6) heading_loc_req_pane_ParamLimits

0xa2f7,	// (0x000194d6) heading_loc_req_pane

0x2382,	// (0x00011561) popup_dyc_status_message_window_g1_ParamLimits

0x2382,	// (0x00011561) popup_dyc_status_message_window_g1

0x2396,	// (0x00011575) popup_dyc_status_message_window_t1_ParamLimits

0x2396,	// (0x00011575) popup_dyc_status_message_window_t1

0x23ab,	// (0x0001158a) popup_dyc_status_message_window_t2_ParamLimits

0x23ab,	// (0x0001158a) popup_dyc_status_message_window_t2

0x23c0,	// (0x0001159f) popup_dyc_status_message_window_t3_ParamLimits

0x23c0,	// (0x0001159f) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e4ec) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e4ec) popup_dyc_status_message_window_t

0x97c3,	// (0x000189a2) bg_heading_pane_cp01

0xa303,	// (0x000194e2) heading_loc_req_pane_g1

0xa30b,	// (0x000194ea) heading_loc_req_pane_g2

0xa313,	// (0x000194f2) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e4f3) heading_loc_req_pane_g

0xa31b,	// (0x000194fa) heading_loc_req_pane_t1

0xa32a,	// (0x00019509) bg_popup_sub_pane_cp01_ParamLimits

0xa32a,	// (0x00019509) bg_popup_sub_pane_cp01

0xa338,	// (0x00019517) popup_cale_events_window_g1_ParamLimits

0xa338,	// (0x00019517) popup_cale_events_window_g1

0xa358,	// (0x00019537) popup_cale_events_window_g2_ParamLimits

0xa358,	// (0x00019537) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e527) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e527) popup_cale_events_window_g

0xa378,	// (0x00019557) popup_cale_events_window_t1_ParamLimits

0xa378,	// (0x00019557) popup_cale_events_window_t1

0xa38a,	// (0x00019569) popup_cale_events_window_t2_ParamLimits

0xa38a,	// (0x00019569) popup_cale_events_window_t2

0xa3c8,	// (0x000195a7) popup_cale_events_window_t3_ParamLimits

0xa3c8,	// (0x000195a7) popup_cale_events_window_t3

0xa402,	// (0x000195e1) popup_cale_events_window_t4_ParamLimits

0xa402,	// (0x000195e1) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e52c) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e52c) popup_cale_events_window_t

0x24c5,	// (0x000116a4) call_type_pane

0x24d5,	// (0x000116b4) popup_call_status_window_g1

0x24e9,	// (0x000116c8) popup_call_status_window_g2

0x24fd,	// (0x000116dc) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e535) popup_call_status_window_g

0xa438,	// (0x00019617) call_type_pane_g1

0xa441,	// (0x00019620) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e53c) call_type_pane_g

0x97c3,	// (0x000189a2) bg_popup_sub_pane_cp02

0xa44a,	// (0x00019629) listscroll_popup_wml_pane

0xa452,	// (0x00019631) list_wml_pane

0xa45c,	// (0x0001963b) scroll_pane_cp013

0xa467,	// (0x00019646) list_single_graphic_popup_wml_pane_ParamLimits

0xa467,	// (0x00019646) list_single_graphic_popup_wml_pane

0x9b9d,	// (0x00018d7c) list_single_graphic_popup_wml_pane_g1

0xa47b,	// (0x0001965a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e541) list_single_graphic_popup_wml_pane_g

0xa483,	// (0x00019662) list_single_graphic_popup_wml_pane_t1

0xa499,	// (0x00019678) aid_call_pane

0x9a16,	// (0x00018bf5) popup_clock_analogue_window_g1

0x9a16,	// (0x00018bf5) popup_clock_analogue_window_g2

0xa4a1,	// (0x00019680) popup_clock_analogue_window_g3

0xa4a1,	// (0x00019680) popup_clock_analogue_window_g4

0x9b9d,	// (0x00018d7c) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e546) popup_clock_analogue_window_g

0xa4a9,	// (0x00019688) popup_clock_analogue_window_t1

0xa4b7,	// (0x00019696) clock_digital_number_pane_ParamLimits

0xa4b7,	// (0x00019696) clock_digital_number_pane

0xa4c3,	// (0x000196a2) clock_digital_number_pane_cp02_ParamLimits

0xa4c3,	// (0x000196a2) clock_digital_number_pane_cp02

0xa4cf,	// (0x000196ae) clock_digital_number_pane_cp03_ParamLimits

0xa4cf,	// (0x000196ae) clock_digital_number_pane_cp03

0xa4db,	// (0x000196ba) clock_digital_number_pane_cp04_ParamLimits

0xa4db,	// (0x000196ba) clock_digital_number_pane_cp04

0xa4eb,	// (0x000196ca) clock_digital_separator_pane_ParamLimits

0xa4eb,	// (0x000196ca) clock_digital_separator_pane

0xa4f7,	// (0x000196d6) popup_clock_digital_window_t1

0x9b9d,	// (0x00018d7c) clock_digital_number_pane_g1

0x9b9d,	// (0x00018d7c) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001e4b4) clock_digital_number_pane_g

0x9b9d,	// (0x00018d7c) clock_digital_separator_pane_g1

0x9b9d,	// (0x00018d7c) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001e4b4) clock_digital_separator_pane_g

0x97c3,	// (0x000189a2) bg_popup_window_pane_cp04

0xa514,	// (0x000196f3) heading_pane_cp03

0xa51c,	// (0x000196fb) listscroll_popup_gms_pane

0xa524,	// (0x00019703) grid_large_graphic_popup_pane

0xa52e,	// (0x0001970d) listscroll_popup_gms_pane_g1

0xa536,	// (0x00019715) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e551) listscroll_popup_gms_pane_g

0x9f22,	// (0x00019101) scroll_pane_cp014

0xa53e,	// (0x0001971d) cell_large_graphic_popup_pane_ParamLimits

0xa53e,	// (0x0001971d) cell_large_graphic_popup_pane

0xa556,	// (0x00019735) cell_large_graphic_popup_pane_g1_ParamLimits

0xa556,	// (0x00019735) cell_large_graphic_popup_pane_g1

0xa562,	// (0x00019741) cell_large_graphic_popup_pane_g2_ParamLimits

0xa562,	// (0x00019741) cell_large_graphic_popup_pane_g2

0xa56e,	// (0x0001974d) cell_large_graphic_popup_pane_g3_ParamLimits

0xa56e,	// (0x0001974d) cell_large_graphic_popup_pane_g3

0xa57b,	// (0x0001975a) cell_large_graphic_popup_pane_g4_ParamLimits

0xa57b,	// (0x0001975a) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e556) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e556) cell_large_graphic_popup_pane_g

0xa58b,	// (0x0001976a) grid_highlight_pane_cp010

0x9b9d,	// (0x00018d7c) bg_popup_call_pane_g1

0xa595,	// (0x00019774) list_single_graphic_popup_conf_pane_ParamLimits

0xa595,	// (0x00019774) list_single_graphic_popup_conf_pane

0xa5a8,	// (0x00019787) list_highlight_pane_cp01

0xa5b1,	// (0x00019790) list_single_graphic_popup_conf_pane_g1

0xa5b9,	// (0x00019798) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e55f) list_single_graphic_popup_conf_pane_g

0xa5c1,	// (0x000197a0) list_single_graphic_popup_conf_pane_t1

0xa5cf,	// (0x000197ae) linegrid_cams_pane_g1

0x250c,	// (0x000116eb) linegrid_cams_pane_g2

0x9ca7,	// (0x00018e86) linegrid_cams_pane_g3

0xa5d8,	// (0x000197b7) linegrid_cams_pane_g4

0x2515,	// (0x000116f4) linegrid_cams_pane_g5

0x251e,	// (0x000116fd) linegrid_cams_pane_g6

0x9d58,	// (0x00018f37) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e564) linegrid_cams_pane_g

0xa5e1,	// (0x000197c0) popup_clock_analogue_window

0xa5e1,	// (0x000197c0) popup_clock_digital_window

0x97c3,	// (0x000189a2) popup_phob_thumbnail_window

0x9b9d,	// (0x00018d7c) call_video_uplink_pane_g1

0xa5ea,	// (0x000197c9) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e573) call_video_uplink_pane_g

0x9d25,	// (0x00018f04) video_uplink_pane

0xa5f2,	// (0x000197d1) mce_image_pane_g1

0x2529,	// (0x00011708) mce_image_pane_g2

0x2531,	// (0x00011710) mce_image_pane_g3

0x2539,	// (0x00011718) mce_image_pane_g4

0x2543,	// (0x00011722) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e578) mce_image_pane_g

0xa5fc,	// (0x000197db) control_top_pane_stacon_cp01_ParamLimits

0xa5fc,	// (0x000197db) control_top_pane_stacon_cp01

0xa610,	// (0x000197ef) uni_indicator_pane_stacon_cp01_ParamLimits

0xa610,	// (0x000197ef) uni_indicator_pane_stacon_cp01

0xa621,	// (0x00019800) bg_popup_sub_pane_cp03

0x254b,	// (0x0001172a) chi_dic_find_pane

0x2553,	// (0x00011732) listscroll_chi_dic_pane

0x255c,	// (0x0001173b) main_pane_chidic_g1

0xa62b,	// (0x0001980a) chi_dic_find_pane_t1

0xa639,	// (0x00019818) find_chidic_pane

0xa642,	// (0x00019821) chi_dic_list_pane_ParamLimits

0xa642,	// (0x00019821) chi_dic_list_pane

0xa653,	// (0x00019832) scroll_pane_cp020

0xa65b,	// (0x0001983a) find_chidic_pane_t1

0x97c3,	// (0x000189a2) input_focus_pane_cp06

0x256f,	// (0x0001174e) list_chi_dic_pane_ParamLimits

0x256f,	// (0x0001174e) list_chi_dic_pane

0x2582,	// (0x00011761) list_chi_dic_pane_t1_ParamLimits

0x2582,	// (0x00011761) list_chi_dic_pane_t1

0x97c3,	// (0x000189a2) list_highlight_pane_cp020

0xa66a,	// (0x00019849) bg_cale_heading_pane_g1

0x2595,	// (0x00011774) bg_cale_heading_pane_g2

0x259d,	// (0x0001177c) bg_cale_heading_pane_g3

0x25a5,	// (0x00011784) bg_cale_heading_pane_g4

0x25af,	// (0x0001178e) bg_cale_heading_pane_g5

0x25b9,	// (0x00011798) bg_cale_heading_pane_g6

0x25c1,	// (0x000117a0) bg_cale_heading_pane_g7

0x25c9,	// (0x000117a8) bg_cale_heading_pane_g8

0x25d3,	// (0x000117b2) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e583) bg_cale_heading_pane_g

0xa66a,	// (0x00019849) bg_cale_side_pane_g1

0x25dd,	// (0x000117bc) bg_cale_side_pane_g2

0x25e5,	// (0x000117c4) bg_cale_side_pane_g3

0x25ed,	// (0x000117cc) bg_cale_side_pane_g4

0x25f5,	// (0x000117d4) bg_cale_side_pane_g5

0x25fd,	// (0x000117dc) bg_cale_side_pane_g6

0x2605,	// (0x000117e4) bg_cale_side_pane_g7

0x260d,	// (0x000117ec) bg_cale_side_pane_g8

0x2615,	// (0x000117f4) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e596) bg_cale_side_pane_g

0x261d,	// (0x000117fc) popup_call_status_window_ParamLimits

0x261d,	// (0x000117fc) popup_call_status_window

0xa672,	// (0x00019851) stacon_top_pane

0xa67a,	// (0x00019859) status_pane_ParamLimits

0xa67a,	// (0x00019859) status_pane

0xa68f,	// (0x0001986e) status_small_pane

0xa697,	// (0x00019876) control_pane

0x97c3,	// (0x000189a2) stacon_bottom_pane

0xa69f,	// (0x0001987e) list_single_mce_smart_pane_t1_ParamLimits

0xa69f,	// (0x0001987e) list_single_mce_smart_pane_t1

0xa6b2,	// (0x00019891) list_single_mce_smart_pane_t2_ParamLimits

0xa6b2,	// (0x00019891) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e5a9) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e5a9) list_single_mce_smart_pane_t

0x2664,	// (0x00011843) compass_pane

0x266d,	// (0x0001184c) main_location2_pane_t1

0x267f,	// (0x0001185e) main_location2_pane_t2

0x2691,	// (0x00011870) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e5ae) main_location2_pane_t

0xa6d1,	// (0x000198b0) compass_pane_g1_ParamLimits

0xa6d1,	// (0x000198b0) compass_pane_g1

0x26d7,	// (0x000118b6) compass_pane_t1

0x26e6,	// (0x000118c5) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e5b7) compass_pane_t

0x272d,	// (0x0001190c) text_secondary_cp61

0xa74f,	// (0x0001992e) navi_pane_cams_g5

0xa7cb,	// (0x000199aa) navi_pane_im_t1

0xa7d9,	// (0x000199b8) navi_pane_mp_g1_ParamLimits

0xa7d9,	// (0x000199b8) navi_pane_mp_g1

0xa7ed,	// (0x000199cc) navi_pane_mp_g2_ParamLimits

0xa7ed,	// (0x000199cc) navi_pane_mp_g2

0xa7f9,	// (0x000199d8) navi_pane_mp_g3_ParamLimits

0xa7f9,	// (0x000199d8) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e5cb) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e5cb) navi_pane_mp_g

0xa805,	// (0x000199e4) navi_pane_mp_t1

0xa813,	// (0x000199f2) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e5d2) navi_pane_mp_t

0xa87e,	// (0x00019a5d) navi_pane_vt_g1

0xa805,	// (0x000199e4) navi_pane_vt_t1

0xa886,	// (0x00019a65) navi_slider_pane

0xa896,	// (0x00019a75) zooming_pane

0xa89e,	// (0x00019a7d) navi_slider_pane_g1

0xa8a7,	// (0x00019a86) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e5d9) navi_slider_pane_g

0xa8d4,	// (0x00019ab3) aid_levels_zoom

0xa8dc,	// (0x00019abb) zooming_pane_g1

0xa8e4,	// (0x00019ac3) zooming_pane_g2

0xa8e4,	// (0x00019ac3) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e5e8) zooming_pane_g

0xa8ec,	// (0x00019acb) level_10_zoom

0xa8f5,	// (0x00019ad4) level_11_zoom

0xa8fe,	// (0x00019add) level_1_zoom

0xa907,	// (0x00019ae6) level_2_zoom

0xa910,	// (0x00019aef) level_3_zoom

0xa919,	// (0x00019af8) level_4_zoom

0xa922,	// (0x00019b01) level_5_zoom

0xa92b,	// (0x00019b0a) level_6_zoom

0xa934,	// (0x00019b13) level_7_zoom

0xa93d,	// (0x00019b1c) level_8_zoom

0xa946,	// (0x00019b25) level_9_zoom

0xa957,	// (0x00019b36) popup_phob_thumbnail_window_g1

0xa95f,	// (0x00019b3e) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e5ef) popup_phob_thumbnail_window_g

0xbce6,	// (0x0001aec5) level_1_location

0xbcee,	// (0x0001aecd) level_2_location

0xbcf6,	// (0x0001aed5) level_3_location

0xbcfe,	// (0x0001aedd) level_4_location

0xa896,	// (0x00019a75) level_5_location

0x277e,	// (0x0001195d) mce_icon_pane_g1

0x2788,	// (0x00011967) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e5f4) mce_icon_pane_g

0x2792,	// (0x00011971) main_mup_pane_g1_ParamLimits

0x2792,	// (0x00011971) main_mup_pane_g1

0x27a8,	// (0x00011987) main_mup_pane_g2_ParamLimits

0x27a8,	// (0x00011987) main_mup_pane_g2

0x27c0,	// (0x0001199f) main_mup_pane_g3_ParamLimits

0x27c0,	// (0x0001199f) main_mup_pane_g3

0x27d8,	// (0x000119b7) main_mup_pane_g4_ParamLimits

0x27d8,	// (0x000119b7) main_mup_pane_g4

0x27f0,	// (0x000119cf) main_mup_pane_g5_ParamLimits

0x27f0,	// (0x000119cf) main_mup_pane_g5

0x280c,	// (0x000119eb) main_mup_pane_g6_ParamLimits

0x280c,	// (0x000119eb) main_mup_pane_g6

0x2824,	// (0x00011a03) main_mup_pane_g7_ParamLimits

0x2824,	// (0x00011a03) main_mup_pane_g7

0x283c,	// (0x00011a1b) main_mup_pane_g8_ParamLimits

0x283c,	// (0x00011a1b) main_mup_pane_g8

0x2854,	// (0x00011a33) main_mup_pane_g9_ParamLimits

0x2854,	// (0x00011a33) main_mup_pane_g9

0x286e,	// (0x00011a4d) main_mup_pane_g10_ParamLimits

0x286e,	// (0x00011a4d) main_mup_pane_g10

0x2888,	// (0x00011a67) main_mup_pane_g11_ParamLimits

0x2888,	// (0x00011a67) main_mup_pane_g11

0x289c,	// (0x00011a7b) main_mup_pane_g12_ParamLimits

0x289c,	// (0x00011a7b) main_mup_pane_g12

0x28b2,	// (0x00011a91) main_mup_pane_g13_ParamLimits

0x28b2,	// (0x00011a91) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e5f9) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e5f9) main_mup_pane_g

0x28c6,	// (0x00011aa5) main_mup_pane_t1_ParamLimits

0x28c6,	// (0x00011aa5) main_mup_pane_t1

0x28e0,	// (0x00011abf) main_mup_pane_t2_ParamLimits

0x28e0,	// (0x00011abf) main_mup_pane_t2

0x28f8,	// (0x00011ad7) main_mup_pane_t3_ParamLimits

0x28f8,	// (0x00011ad7) main_mup_pane_t3

0x2910,	// (0x00011aef) main_mup_pane_t4_ParamLimits

0x2910,	// (0x00011aef) main_mup_pane_t4

0x292e,	// (0x00011b0d) main_mup_pane_t5_ParamLimits

0x292e,	// (0x00011b0d) main_mup_pane_t5

0x2943,	// (0x00011b22) main_mup_pane_t6_ParamLimits

0x2943,	// (0x00011b22) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e614) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e614) main_mup_pane_t

0x2955,	// (0x00011b34) mup_progress_pane_ParamLimits

0x2955,	// (0x00011b34) mup_progress_pane

0x2961,	// (0x00011b40) mup_visualizer_pane_ParamLimits

0x2961,	// (0x00011b40) mup_visualizer_pane

0x2995,	// (0x00011b74) mup_volume_pane_ParamLimits

0x2995,	// (0x00011b74) mup_volume_pane

0xa967,	// (0x00019b46) mup_visualizer_pane_g1_ParamLimits

0xa967,	// (0x00019b46) mup_visualizer_pane_g1

0xa967,	// (0x00019b46) mup_visualizer_pane_g2_ParamLimits

0xa967,	// (0x00019b46) mup_visualizer_pane_g2

0xa6d1,	// (0x000198b0) mup_visualizer_pane_g3_ParamLimits

0xa6d1,	// (0x000198b0) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e621) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e621) mup_visualizer_pane_g

0x9b9d,	// (0x00018d7c) mup_volume_pane_g1

0xa97d,	// (0x00019b5c) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e628) mup_volume_pane_g

0x9b9d,	// (0x00018d7c) mup_progress_pane_g1

0xa986,	// (0x00019b65) mup_progress_pane_g2

0xa98f,	// (0x00019b6e) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e62d) mup_progress_pane_g

0x97c3,	// (0x000189a2) bg_popup_window_pane_cp05

0xa998,	// (0x00019b77) heading_pane_cp02_ParamLimits

0xa998,	// (0x00019b77) heading_pane_cp02

0xa9b2,	// (0x00019b91) list_popup_blid_pane

0xa9ba,	// (0x00019b99) list_blid_sat_info_pane_ParamLimits

0xa9ba,	// (0x00019b99) list_blid_sat_info_pane

0xa9cd,	// (0x00019bac) list_blid_sat_info_pane_g1

0xa9d5,	// (0x00019bb4) list_blid_sat_info_pane_t1

0x2aab,	// (0x00011c8a) mup_equalizer_pane_ParamLimits

0x2aab,	// (0x00011c8a) mup_equalizer_pane

0x2ac4,	// (0x00011ca3) mup_equalizer_pane_cp1_ParamLimits

0x2ac4,	// (0x00011ca3) mup_equalizer_pane_cp1

0x2ae1,	// (0x00011cc0) mup_equalizer_pane_cp2_ParamLimits

0x2ae1,	// (0x00011cc0) mup_equalizer_pane_cp2

0x2afe,	// (0x00011cdd) mup_equalizer_pane_cp3_ParamLimits

0x2afe,	// (0x00011cdd) mup_equalizer_pane_cp3

0x2b1f,	// (0x00011cfe) mup_equalizer_pane_cp4_ParamLimits

0x2b1f,	// (0x00011cfe) mup_equalizer_pane_cp4

0x2b40,	// (0x00011d1f) mup_equalizer_pane_cp5

0x2b54,	// (0x00011d33) mup_equalizer_pane_cp6

0x2b68,	// (0x00011d47) mup_equalizer_pane_cp7

0xbc04,	// (0x0001ade3) bg_popup_call_poc_act_pane_g9

0xbc0c,	// (0x0001adeb) bg_popup_call_poc_act_pane_g10

0xbc14,	// (0x0001adf3) bg_popup_call_poc_act_pane_g11

0x000a,

0x9a1e,	// (0x00018bfd) mup_scale_pane

0x9b9d,	// (0x00018d7c) mup_scale_pane_g1

0xa9e3,	// (0x00019bc2) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e649) mup_scale_pane_g

0xaa07,	// (0x00019be6) msg_data_pane

0xaa0f,	// (0x00019bee) scroll_pane_cp017

0x2b8e,	// (0x00011d6d) bg_list_pane_cp04_ParamLimits

0x2b8e,	// (0x00011d6d) bg_list_pane_cp04

0xaa17,	// (0x00019bf6) msg_data_pane_g1

0x2bb2,	// (0x00011d91) msg_data_pane_g2

0x2bba,	// (0x00011d99) msg_data_pane_g3

0x2bc2,	// (0x00011da1) msg_data_pane_g4

0x2bca,	// (0x00011da9) msg_data_pane_g5

0x2bd2,	// (0x00011db1) msg_data_pane_g6

0x2bda,	// (0x00011db9) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e658) msg_data_pane_g

0x2be2,	// (0x00011dc1) msg_text_pane_ParamLimits

0x2be2,	// (0x00011dc1) msg_text_pane

0x2c09,	// (0x00011de8) qrid_highlight_pane_cp011_ParamLimits

0x2c09,	// (0x00011de8) qrid_highlight_pane_cp011

0x97c3,	// (0x000189a2) msg_body_pane

0x97c3,	// (0x000189a2) msg_header_pane

0xaa28,	// (0x00019c07) input_focus_pane_cp07

0xaa3d,	// (0x00019c1c) msg_header_pane_t1_ParamLimits

0xaa3d,	// (0x00019c1c) msg_header_pane_t1

0xaa4f,	// (0x00019c2e) msg_header_pane_t2_ParamLimits

0xaa4f,	// (0x00019c2e) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e66c) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e66c) msg_header_pane_t

0xaa61,	// (0x00019c40) msg_body_pane_g1

0x2c2d,	// (0x00011e0c) msg_body_pane_t1_ParamLimits

0x2c2d,	// (0x00011e0c) msg_body_pane_t1

0xaa69,	// (0x00019c48) msg_body_pane_t2_ParamLimits

0xaa69,	// (0x00019c48) msg_body_pane_t2

0xaa7b,	// (0x00019c5a) msg_body_pane_t3_ParamLimits

0xaa7b,	// (0x00019c5a) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e671) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e671) msg_body_pane_t

0x2c98,	// (0x00011e77) main_viewer_pane_g1_ParamLimits

0x2c98,	// (0x00011e77) main_viewer_pane_g1

0x2ca6,	// (0x00011e85) main_viewer_pane_g2_ParamLimits

0x2ca6,	// (0x00011e85) main_viewer_pane_g2

0x2cb4,	// (0x00011e93) main_viewer_pane_g3_ParamLimits

0x2cb4,	// (0x00011e93) main_viewer_pane_g3

0x2cc3,	// (0x00011ea2) main_viewer_pane_g4_ParamLimits

0x2cc3,	// (0x00011ea2) main_viewer_pane_g4

0xaaa5,	// (0x00019c84) main_viewer_pane_g5_ParamLimits

0xaaa5,	// (0x00019c84) main_viewer_pane_g5

0xaaa5,	// (0x00019c84) main_viewer_pane_g7_ParamLimits

0xaaa5,	// (0x00019c84) main_viewer_pane_g7

0xaab7,	// (0x00019c96) main_viewer_pane_g8_ParamLimits

0xaab7,	// (0x00019c96) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e681) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e681) main_viewer_pane_g

0xaacf,	// (0x00019cae) viewer_content_pane_ParamLimits

0xaacf,	// (0x00019cae) viewer_content_pane

0x2cff,	// (0x00011ede) main_postcard_pane_g1_ParamLimits

0x2cff,	// (0x00011ede) main_postcard_pane_g1

0x2d15,	// (0x00011ef4) main_postcard_pane_g2_ParamLimits

0x2d15,	// (0x00011ef4) main_postcard_pane_g2

0x2d2b,	// (0x00011f0a) main_postcard_pane_g3_ParamLimits

0x2d2b,	// (0x00011f0a) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e692) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e692) main_postcard_pane_g

0x2d42,	// (0x00011f21) main_postcard_pane_g4

0xbe3a,	// (0x0001b019) smil_status_volume_pane_g2

0x2d85,	// (0x00011f64) postcard_pane_ParamLimits

0x2d85,	// (0x00011f64) postcard_pane

0xaadd,	// (0x00019cbc) postcard_pane_g1_ParamLimits

0xaadd,	// (0x00019cbc) postcard_pane_g1

0x2dc7,	// (0x00011fa6) postcard_pane_g2_ParamLimits

0x2dc7,	// (0x00011fa6) postcard_pane_g2

0x2dd3,	// (0x00011fb2) postcard_pane_g3_ParamLimits

0x2dd3,	// (0x00011fb2) postcard_pane_g3

0xaaeb,	// (0x00019cca) postcard_pane_g4_ParamLimits

0xaaeb,	// (0x00019cca) postcard_pane_g4

0x2ddf,	// (0x00011fbe) postcard_pane_g5_ParamLimits

0x2ddf,	// (0x00011fbe) postcard_pane_g5

0x2df4,	// (0x00011fd3) postcard_pane_g6_ParamLimits

0x2df4,	// (0x00011fd3) postcard_pane_g6

0xaadd,	// (0x00019cbc) postcard_pane_g7_ParamLimits

0xaadd,	// (0x00019cbc) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e69f) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e69f) postcard_pane_g

0x2e08,	// (0x00011fe7) main_mp2_pane_g1_ParamLimits

0x2e08,	// (0x00011fe7) main_mp2_pane_g1

0x2e14,	// (0x00011ff3) main_mp2_pane_g2_ParamLimits

0x2e14,	// (0x00011ff3) main_mp2_pane_g2

0x2e20,	// (0x00011fff) main_mp2_pane_g3_ParamLimits

0x2e20,	// (0x00011fff) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e6ae) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e6ae) main_mp2_pane_g

0x2e2c,	// (0x0001200b) main_mp2_pane_t1_ParamLimits

0x2e2c,	// (0x0001200b) main_mp2_pane_t1

0x2e41,	// (0x00012020) main_mp2_pane_t2_ParamLimits

0x2e41,	// (0x00012020) main_mp2_pane_t2

0x2e53,	// (0x00012032) main_mp2_pane_t3_ParamLimits

0x2e53,	// (0x00012032) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e6b5) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e6b5) main_mp2_pane_t

0xaaf9,	// (0x00019cd8) pec_content_pane_ParamLimits

0xaaf9,	// (0x00019cd8) pec_content_pane

0x9f22,	// (0x00019101) scroll_pane_cp015

0xab0b,	// (0x00019cea) pec_attribute_pane_ParamLimits

0xab0b,	// (0x00019cea) pec_attribute_pane

0x2e65,	// (0x00012044) pec_content_pane_g1_ParamLimits

0x2e65,	// (0x00012044) pec_content_pane_g1

0xab1b,	// (0x00019cfa) pec_content_pane_t1_ParamLimits

0xab1b,	// (0x00019cfa) pec_content_pane_t1

0xab2d,	// (0x00019d0c) pec_content_pane_t2_ParamLimits

0xab2d,	// (0x00019d0c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e6bc) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e6bc) pec_content_pane_t

0x2e71,	// (0x00012050) list_single_graphic_pane_cp01_ParamLimits

0x2e71,	// (0x00012050) list_single_graphic_pane_cp01

0x9a1e,	// (0x00018bfd) bg_popup_sub_pane_cp04

0xab3f,	// (0x00019d1e) popup_mup_playback_window_g1

0xab4b,	// (0x00019d2a) popup_mup_playback_window_t1

0xab60,	// (0x00019d3f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e6c1) popup_mup_playback_window_t

0xab97,	// (0x00019d76) main_image_pane_g1_ParamLimits

0xab97,	// (0x00019d76) main_image_pane_g1

0xabda,	// (0x00019db9) scroll_pane_cp018_ParamLimits

0xabda,	// (0x00019db9) scroll_pane_cp018

0xabf2,	// (0x00019dd1) scroll_pane_cp016_ParamLimits

0xabf2,	// (0x00019dd1) scroll_pane_cp016

0x2f40,	// (0x0001211f) smil2_image_pane_ParamLimits

0x2f40,	// (0x0001211f) smil2_image_pane

0x2f74,	// (0x00012153) smil2_root_pane_ParamLimits

0x2f74,	// (0x00012153) smil2_root_pane

0x2fac,	// (0x0001218b) smil2_text_pane_ParamLimits

0x2fac,	// (0x0001218b) smil2_text_pane

0x97c3,	// (0x000189a2) bg_list_pane_cp06

0xac2e,	// (0x00019e0d) grid_radio_pane

0x97c3,	// (0x000189a2) bg_popup_window_pane_cp06

0xac36,	// (0x00019e15) main_fmradio_pane_t1

0xa514,	// (0x000196f3) heading_pane_cp04

0xac44,	// (0x00019e23) main_fmradio_pane_t2

0xbc1c,	// (0x0001adfb) popup_cale_lunar_info_window_g1

0xac52,	// (0x00019e31) main_fmradio_pane_t3

0xbc24,	// (0x0001ae03) popup_cale_lunar_info_window_g2

0xac60,	// (0x00019e3f) main_fmradio_pane_t4

0x0001,

0xac6e,	// (0x00019e4d) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0001e79c) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e6d6) main_fmradio_pane_t

0xac7c,	// (0x00019e5b) wait_bar_pane_cp03

0xac84,	// (0x00019e63) cell_fmradio_pane_ParamLimits

0xac84,	// (0x00019e63) cell_fmradio_pane

0xaadd,	// (0x00019cbc) cell_fmradio_pane_g1_ParamLimits

0xaadd,	// (0x00019cbc) cell_fmradio_pane_g1

0x97c3,	// (0x000189a2) grid_highlight_pane_cp011

0xac97,	// (0x00019e76) poc_content_pane_ParamLimits

0xac97,	// (0x00019e76) poc_content_pane

0xaca9,	// (0x00019e88) scroll_pane_cp019

0x302c,	// (0x0001220b) popup_call_poc_act_window_ParamLimits

0x302c,	// (0x0001220b) popup_call_poc_act_window

0x3050,	// (0x0001222f) popup_call_poc_inact_window_ParamLimits

0x3050,	// (0x0001222f) popup_call_poc_inact_window

0xf594,	// (0x0001e773) bg_popup_call_poc_act_pane_g

0xbb94,	// (0x0001ad73) bg_popup_call_poc_inact_pane_g1

0xbb9c,	// (0x0001ad7b) bg_popup_call_poc_inact_pane_g2

0xacb1,	// (0x00019e90) popup_call_poc_act_window_g2

0xbba4,	// (0x0001ad83) bg_popup_call_poc_inact_pane_g3

0xbbac,	// (0x0001ad8b) bg_popup_call_poc_inact_pane_g4

0xbbb4,	// (0x0001ad93) bg_popup_call_poc_inact_pane_g5

0xacb9,	// (0x00019e98) popup_call_poc_act_window_t1_ParamLimits

0xacb9,	// (0x00019e98) popup_call_poc_act_window_t1

0xace1,	// (0x00019ec0) popup_call_poc_act_window_t2_ParamLimits

0xace1,	// (0x00019ec0) popup_call_poc_act_window_t2

0xad09,	// (0x00019ee8) popup_call_poc_act_window_t3_ParamLimits

0xad09,	// (0x00019ee8) popup_call_poc_act_window_t3

0xad31,	// (0x00019f10) popup_call_poc_act_window_t4_ParamLimits

0xad31,	// (0x00019f10) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e6e1) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e6e1) popup_call_poc_act_window_t

0xbbbc,	// (0x0001ad9b) bg_popup_call_poc_inact_pane_g6

0xbbc4,	// (0x0001ada3) bg_popup_call_poc_inact_pane_g7

0xbbcc,	// (0x0001adab) bg_popup_call_poc_inact_pane_g8

0xad43,	// (0x00019f22) popup_call_poc_inact_window_g2

0xbbd4,	// (0x0001adb3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0001e760) bg_popup_call_poc_inact_pane_g

0xad4b,	// (0x00019f2a) popup_call_poc_inact_window_t1_ParamLimits

0xad4b,	// (0x00019f2a) popup_call_poc_inact_window_t1

0xad60,	// (0x00019f3f) popup_call_poc_inact_window_t2_ParamLimits

0xad60,	// (0x00019f3f) popup_call_poc_inact_window_t2

0xad75,	// (0x00019f54) popup_call_poc_inact_window_t3_ParamLimits

0xad75,	// (0x00019f54) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e6ea) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e6ea) popup_call_poc_inact_window_t

0xbdad,	// (0x0001af8c) context_pane_ParamLimits

0x3871,	// (0x00012a50) signal_pane_ParamLimits

0xa896,	// (0x00019a75) main_call2_pane

0xbd86,	// (0x0001af65) popup_phob_thumbnail2_window_ParamLimits

0xbd86,	// (0x0001af65) popup_phob_thumbnail2_window

0xaa8d,	// (0x00019c6c) aid_hotspot_pointer_arrow_pane

0xaa95,	// (0x00019c74) aid_hotspot_pointer_hand_pane

0x339b,	// (0x0001257a) phob_pre_status_pane_g5

0x0eb6,	// (0x00010095) cams_zoom_pane_ParamLimits

0x0ec5,	// (0x000100a4) image_vga_pane_ParamLimits

0x0edf,	// (0x000100be) main_camera_pane_g1_ParamLimits

0x0ef1,	// (0x000100d0) main_camera_pane_g2_ParamLimits

0x0f01,	// (0x000100e0) main_camera_pane_g3_ParamLimits

0x0f13,	// (0x000100f2) main_camera_pane_g4_ParamLimits

0x0f25,	// (0x00010104) main_camera_pane_g5_ParamLimits

0x0f37,	// (0x00010116) main_camera_pane_g6_ParamLimits

0x0f49,	// (0x00010128) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001e3e9) main_camera_pane_g_ParamLimits

0x0f5b,	// (0x0001013a) main_camera_pane_t1_ParamLimits

0x0f71,	// (0x00010150) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001e3fa) main_camera_pane_t_ParamLimits

0x9a1e,	// (0x00018bfd) bg_popup_preview_window_pane_cp01_ParamLimits

0x9a1e,	// (0x00018bfd) bg_popup_preview_window_pane_cp01

0xad8a,	// (0x00019f69) popup_phob_thumbnail2_window_g1_ParamLimits

0xad8a,	// (0x00019f69) popup_phob_thumbnail2_window_g1

0x97c3,	// (0x000189a2) call2_cli_visual_pane

0x3084,	// (0x00012263) popup_call2_audio_conf_window_ParamLimits

0x3084,	// (0x00012263) popup_call2_audio_conf_window

0x30a4,	// (0x00012283) popup_call2_audio_first_window_ParamLimits

0x30a4,	// (0x00012283) popup_call2_audio_first_window

0x313a,	// (0x00012319) popup_call2_audio_in_window_ParamLimits

0x313a,	// (0x00012319) popup_call2_audio_in_window

0x3182,	// (0x00012361) popup_call2_audio_out_window_ParamLimits

0x3182,	// (0x00012361) popup_call2_audio_out_window

0x31ec,	// (0x000123cb) popup_call2_audio_second_window_ParamLimits

0x31ec,	// (0x000123cb) popup_call2_audio_second_window

0x3252,	// (0x00012431) popup_call2_audio_wait_window_ParamLimits

0x3252,	// (0x00012431) popup_call2_audio_wait_window

0x97c3,	// (0x000189a2) bg_popup_call2_act_pane_cp03

0x9a00,	// (0x00018bdf) list_conf_pane_cp

0xad96,	// (0x00019f75) popup_call2_audio_conf_window_t1

0xada4,	// (0x00019f83) list_single_graphic_popup_conf2_pane_ParamLimits

0xada4,	// (0x00019f83) list_single_graphic_popup_conf2_pane

0xa5a8,	// (0x00019787) list_highlight_pane_cp04

0xadb7,	// (0x00019f96) list_single_graphic_popup_conf2_pane_g1

0xa5b9,	// (0x00019798) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e6f1) list_single_graphic_popup_conf2_pane_g

0xadc1,	// (0x00019fa0) list_single_graphic_popup_conf2_pane_t1

0xadcf,	// (0x00019fae) bg_popup_call2_act_pane_cp01_ParamLimits

0xadcf,	// (0x00019fae) bg_popup_call2_act_pane_cp01

0xae59,	// (0x0001a038) call_type_pane_cp05_ParamLimits

0xae59,	// (0x0001a038) call_type_pane_cp05

0xaead,	// (0x0001a08c) popup_call2_audio_second_window_g1_ParamLimits

0xaead,	// (0x0001a08c) popup_call2_audio_second_window_g1

0xaf01,	// (0x0001a0e0) popup_call2_audio_second_window_g2_ParamLimits

0xaf01,	// (0x0001a0e0) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e6f6) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e6f6) popup_call2_audio_second_window_g

0xaf66,	// (0x0001a145) popup_call2_audio_second_window_t1_ParamLimits

0xaf66,	// (0x0001a145) popup_call2_audio_second_window_t1

0xb021,	// (0x0001a200) popup_call2_audio_second_window_t2_ParamLimits

0xb021,	// (0x0001a200) popup_call2_audio_second_window_t2

0xb074,	// (0x0001a253) popup_call2_audio_second_window_t3_ParamLimits

0xb074,	// (0x0001a253) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e6fd) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e6fd) popup_call2_audio_second_window_t

0x97c3,	// (0x000189a2) bg_popup_call2_in_pane_cp02

0x97cd,	// (0x000189ac) call_type_pane_cp04

0x97d5,	// (0x000189b4) popup_call2_audio_wait_window_g1

0x97dd,	// (0x000189bc) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001e2d4) popup_call2_audio_wait_window_g

0x97e5,	// (0x000189c4) popup_call2_audio_wait_window_t3

0xb167,	// (0x0001a346) bg_popup_call2_act_pane_ParamLimits

0xb167,	// (0x0001a346) bg_popup_call2_act_pane

0xb227,	// (0x0001a406) call_type_pane_cp03_ParamLimits

0xb227,	// (0x0001a406) call_type_pane_cp03

0xb28b,	// (0x0001a46a) popup_call2_audio_first_window_g1_ParamLimits

0xb28b,	// (0x0001a46a) popup_call2_audio_first_window_g1

0xb2fb,	// (0x0001a4da) popup_call2_audio_first_window_g2_ParamLimits

0xb2fb,	// (0x0001a4da) popup_call2_audio_first_window_g2

0xa967,	// (0x00019b46) popup_call2_audio_first_window_g3_ParamLimits

0xa967,	// (0x00019b46) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e706) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e706) popup_call2_audio_first_window_g

0xb3d9,	// (0x0001a5b8) popup_call2_audio_first_window_t1_ParamLimits

0xb3d9,	// (0x0001a5b8) popup_call2_audio_first_window_t1

0xb4dc,	// (0x0001a6bb) popup_call2_audio_first_window_t4_ParamLimits

0xb4dc,	// (0x0001a6bb) popup_call2_audio_first_window_t4

0xb5bf,	// (0x0001a79e) popup_call2_audio_first_window_t5_ParamLimits

0xb5bf,	// (0x0001a79e) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e711) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e711) popup_call2_audio_first_window_t

0x9a16,	// (0x00018bf5) bg_popup_call2_act_pane_g1

0xbc2c,	// (0x0001ae0b) popup_cale_lunar_info_window_t1

0xbc3a,	// (0x0001ae19) popup_cale_lunar_info_window_t2

0xbc48,	// (0x0001ae27) popup_cale_lunar_info_window_t3

0x97c3,	// (0x000189a2) bg_popup_call2_bubble_pane

0xb6c0,	// (0x0001a89f) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6c0,	// (0x0001a89f) bg_popup_call2_in_pane_cp01

0x949f,	// (0x0001867e) call_type_pane_cp02

0xb708,	// (0x0001a8e7) popup_call2_audio_out_window_g1_ParamLimits

0xb708,	// (0x0001a8e7) popup_call2_audio_out_window_g1

0xb734,	// (0x0001a913) popup_call2_audio_out_window_g2_ParamLimits

0xb734,	// (0x0001a913) popup_call2_audio_out_window_g2

0xb75c,	// (0x0001a93b) popup_call2_audio_out_window_g3_ParamLimits

0xb75c,	// (0x0001a93b) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e71a) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e71a) popup_call2_audio_out_window_g

0xb797,	// (0x0001a976) popup_call2_audio_out_window_t1_ParamLimits

0xb797,	// (0x0001a976) popup_call2_audio_out_window_t1

0xb7f6,	// (0x0001a9d5) popup_call2_audio_out_window_t2_ParamLimits

0xb7f6,	// (0x0001a9d5) popup_call2_audio_out_window_t2

0xb84a,	// (0x0001aa29) popup_call2_audio_out_window_t3_ParamLimits

0xb84a,	// (0x0001aa29) popup_call2_audio_out_window_t3

0xb860,	// (0x0001aa3f) popup_call2_audio_out_window_t4_ParamLimits

0xb860,	// (0x0001aa3f) popup_call2_audio_out_window_t4

0xb876,	// (0x0001aa55) popup_call2_audio_out_window_t5_ParamLimits

0xb876,	// (0x0001aa55) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e723) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e723) popup_call2_audio_out_window_t

0xb8da,	// (0x0001aab9) bg_popup_call2_in_pane_ParamLimits

0xb8da,	// (0x0001aab9) bg_popup_call2_in_pane

0xb936,	// (0x0001ab15) popup_call2_audio_in_window_g1_ParamLimits

0xb936,	// (0x0001ab15) popup_call2_audio_in_window_g1

0xb96e,	// (0x0001ab4d) popup_call2_audio_in_window_g2_ParamLimits

0xb96e,	// (0x0001ab4d) popup_call2_audio_in_window_g2

0xb9a6,	// (0x0001ab85) popup_call2_audio_in_window_g3_ParamLimits

0xb9a6,	// (0x0001ab85) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e730) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e730) popup_call2_audio_in_window_g

0xb9fe,	// (0x0001abdd) popup_call2_audio_in_window_t1_ParamLimits

0xb9fe,	// (0x0001abdd) popup_call2_audio_in_window_t1

0xba7e,	// (0x0001ac5d) popup_call2_audio_in_window_t2_ParamLimits

0xba7e,	// (0x0001ac5d) popup_call2_audio_in_window_t2

0xbafe,	// (0x0001acdd) popup_call2_audio_in_window_t3_ParamLimits

0xbafe,	// (0x0001acdd) popup_call2_audio_in_window_t3

0xbb18,	// (0x0001acf7) popup_call2_audio_in_window_t4_ParamLimits

0xbb18,	// (0x0001acf7) popup_call2_audio_in_window_t4

0xbb2a,	// (0x0001ad09) popup_call2_audio_in_window_t5_ParamLimits

0xbb2a,	// (0x0001ad09) popup_call2_audio_in_window_t5

0xbb3f,	// (0x0001ad1e) popup_call2_audio_in_window_t6_ParamLimits

0xbb3f,	// (0x0001ad1e) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e739) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e739) popup_call2_audio_in_window_t

0x9a16,	// (0x00018bf5) bg_popup_call2_in_pane_g1

0xbc56,	// (0x0001ae35) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0001e7a1) popup_cale_lunar_info_window_t

0x9a1e,	// (0x00018bfd) bg_popup_call2_rect_pane_ParamLimits

0x9a1e,	// (0x00018bfd) bg_popup_call2_rect_pane

0x97c3,	// (0x000189a2) call2_cli_visual_graphic_pane

0x97c3,	// (0x000189a2) call2_cli_visual_text_pane

0xbe4d,	// (0x0001b02c) smil_status_volume_pane_g3

0x0002,

0x9b9d,	// (0x00018d7c) call2_cli_visual_graphic_pane_g1

0x9b9d,	// (0x00018d7c) call2_cli_visual_graphic_pane_g2

0x9b9d,	// (0x00018d7c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e746) call2_cli_visual_graphic_pane_g

0xbb54,	// (0x0001ad33) bg_popup_call2_rect_pane_g1

0x9c45,	// (0x00018e24) bg_popup_call2_rect_pane_g2

0xbb5c,	// (0x0001ad3b) bg_popup_call2_rect_pane_g3

0xbb64,	// (0x0001ad43) bg_popup_call2_rect_pane_g4

0xbb6c,	// (0x0001ad4b) bg_popup_call2_rect_pane_g5

0xbb74,	// (0x0001ad53) bg_popup_call2_rect_pane_g6

0xbb7c,	// (0x0001ad5b) bg_popup_call2_rect_pane_g7

0xbb84,	// (0x0001ad63) bg_popup_call2_rect_pane_g8

0xbb8c,	// (0x0001ad6b) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e74d) bg_popup_call2_rect_pane_g

0xbb94,	// (0x0001ad73) bg_popup_call2_bubble_pane_g1

0xbb9c,	// (0x0001ad7b) bg_popup_call2_bubble_pane_g2

0xbba4,	// (0x0001ad83) bg_popup_call2_bubble_pane_g3

0xbbac,	// (0x0001ad8b) bg_popup_call2_bubble_pane_g4

0xbbb4,	// (0x0001ad93) bg_popup_call2_bubble_pane_g5

0xbbbc,	// (0x0001ad9b) bg_popup_call2_bubble_pane_g6

0xbbc4,	// (0x0001ada3) bg_popup_call2_bubble_pane_g7

0xbbcc,	// (0x0001adab) bg_popup_call2_bubble_pane_g8

0xbbd4,	// (0x0001adb3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e760) bg_popup_call2_bubble_pane_g

0x07e2,	// (0x0000f9c1) aid_cale_week_size_cell_pane

0x0f89,	// (0x00010168) aid_cams_cif_uncrop_pane_ParamLimits

0x0f89,	// (0x00010168) aid_cams_cif_uncrop_pane

0x113e,	// (0x0001031d) aid_cams_size_cell_ParamLimits

0x113e,	// (0x0001031d) aid_cams_size_cell

0x1152,	// (0x00010331) grid_cams_pane_ParamLimits

0x116c,	// (0x0001034b) linegrid_cams_pane_ParamLimits

0x1368,	// (0x00010547) call_video_pane_t1

0x1386,	// (0x00010565) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001e44d) call_video_pane_t

0x17b5,	// (0x00010994) aid_cale_month_size_cell_pane_ParamLimits

0x17b5,	// (0x00010994) aid_cale_month_size_cell_pane

0xf60b,	// (0x0001e7ea) smil_status_volume_pane_g

0xbe5a,	// (0x0001b039) volume_smil_pane_ParamLimits

0x9344,	// (0x00018523) aid_popup2_width_pane

0x0739,	// (0x0000f918) cell_qdial_pane_g4_ParamLimits

0x0739,	// (0x0000f918) cell_qdial_pane_g4

0x26b7,	// (0x00011896) aid_blid_cardinal_pane_ParamLimits

0x26c3,	// (0x000118a2) aid_blid_destination_pane_ParamLimits

0x26c3,	// (0x000118a2) aid_blid_destination_pane

0x9a1e,	// (0x00018bfd) bg_popup_call_poc_act_pane_ParamLimits

0x9a1e,	// (0x00018bfd) bg_popup_call_poc_act_pane

0x9a1e,	// (0x00018bfd) bg_popup_call_poc_inact_pane_ParamLimits

0x9a1e,	// (0x00018bfd) bg_popup_call_poc_inact_pane

0xbbdc,	// (0x0001adbb) bg_popup_call_poc_act_pane_g1

0xbbe4,	// (0x0001adc3) bg_popup_call_poc_act_pane_g2

0xbbec,	// (0x0001adcb) bg_popup_call_poc_act_pane_g3

0xbbac,	// (0x0001ad8b) bg_popup_call_poc_act_pane_g4

0xbbb4,	// (0x0001ad93) bg_popup_call_poc_act_pane_g5

0xbbf4,	// (0x0001add3) bg_popup_call_poc_act_pane_g6

0xbbc4,	// (0x0001ada3) bg_popup_call_poc_act_pane_g7

0xbbfc,	// (0x0001addb) bg_popup_call_poc_act_pane_g8

0x97c3,	// (0x000189a2) main_usb_pane

0xbd61,	// (0x0001af40) popup_cale_lunar_info_window

0x1650,	// (0x0001082f) im_reading_pane_t1_ParamLimits

0x9e7a,	// (0x00019059) list_im_pane_ParamLimits

0x9e8b,	// (0x0001906a) scroll_pane_cp07_ParamLimits

0x97c3,	// (0x000189a2) grid_highlight_pane_cp012

0x9a1e,	// (0x00018bfd) mup_scale_pane_ParamLimits

0xaadd,	// (0x00019cbc) main_usb_pane_g1_ParamLimits

0xaadd,	// (0x00019cbc) main_usb_pane_g1

0x32b0,	// (0x0001248f) main_usb_pane_g2_ParamLimits

0x32b0,	// (0x0001248f) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0001e78a) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0001e78a) main_usb_pane_g

0x32c6,	// (0x000124a5) main_usb_pane_t1_ParamLimits

0x32c6,	// (0x000124a5) main_usb_pane_t1

0x32d8,	// (0x000124b7) main_usb_pane_t2_ParamLimits

0x32d8,	// (0x000124b7) main_usb_pane_t2

0x32ea,	// (0x000124c9) main_usb_pane_t3_ParamLimits

0x32ea,	// (0x000124c9) main_usb_pane_t3

0x32fc,	// (0x000124db) main_usb_pane_t4_ParamLimits

0x32fc,	// (0x000124db) main_usb_pane_t4

0x330e,	// (0x000124ed) main_usb_pane_t5_ParamLimits

0x330e,	// (0x000124ed) main_usb_pane_t5

0x3320,	// (0x000124ff) main_usb_pane_t6_ParamLimits

0x3320,	// (0x000124ff) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0001e78f) main_usb_pane_t_ParamLimits

0x2664,	// (0x00011843) aid_text_placing

0x266d,	// (0x0001184c) main_location2_pane_t1_ParamLimits

0x267f,	// (0x0001185e) main_location2_pane_t2_ParamLimits

0x2691,	// (0x00011870) main_location2_pane_t3_ParamLimits

0x26a5,	// (0x00011884) main_location2_pane_t4_ParamLimits

0x26a5,	// (0x00011884) main_location2_pane_t4

0xf3cf,	// (0x0001e5ae) main_location2_pane_t_ParamLimits

0x9a5a,	// (0x00018c39) find_pinb_pane_g2_ParamLimits

0x9a5a,	// (0x00018c39) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0001e2fa) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0001e2fa) find_pinb_pane_g

0x9a66,	// (0x00018c45) find_pinb_pane_t1_ParamLimits

0x9a78,	// (0x00018c57) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0001e2ff) find_pinb_pane_t_ParamLimits

0x97c3,	// (0x000189a2) main_call3_pane

0x1c98,	// (0x00010e77) cale_month_day_heading_pane_t1_ParamLimits

0x1d1e,	// (0x00010efd) cale_month_day_heading_pane_t2_ParamLimits

0x1daf,	// (0x00010f8e) cale_month_day_heading_pane_t3_ParamLimits

0x1e40,	// (0x0001101f) cale_month_day_heading_pane_t4_ParamLimits

0x1ed9,	// (0x000110b8) cale_month_day_heading_pane_t5_ParamLimits

0x1f7a,	// (0x00011159) cale_month_day_heading_pane_t6_ParamLimits

0x201b,	// (0x000111fa) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001e485) cale_month_day_heading_pane_t_ParamLimits

0xa0e1,	// (0x000192c0) smil_status_volume_pane

0x2da3,	// (0x00011f82) postcard_address_pane_ParamLimits

0x2da3,	// (0x00011f82) postcard_address_pane

0x2db5,	// (0x00011f94) postcard_message_pane_ParamLimits

0x2db5,	// (0x00011f94) postcard_message_pane

0x328c,	// (0x0001246b) call2_cli_visual_pane_t1_ParamLimits

0x328c,	// (0x0001246b) call2_cli_visual_pane_t1

0x3aa0,	// (0x00012c7f) postcard_message_pane_t1_ParamLimits

0x3aa0,	// (0x00012c7f) postcard_message_pane_t1

0x3a89,	// (0x00012c68) postcard_address_pane_t1_ParamLimits

0x3a89,	// (0x00012c68) postcard_address_pane_t1

0x3a75,	// (0x00012c54) popup_call3_audio_in_window_ParamLimits

0x3a75,	// (0x00012c54) popup_call3_audio_in_window

0x3902,	// (0x00012ae1) bg_popup_call3_in_pane_ParamLimits

0x3902,	// (0x00012ae1) bg_popup_call3_in_pane

0x3976,	// (0x00012b55) popup_call3_audio_in_window_g1_ParamLimits

0x3976,	// (0x00012b55) popup_call3_audio_in_window_g1

0x3996,	// (0x00012b75) popup_call3_audio_in_window_g2_ParamLimits

0x3996,	// (0x00012b75) popup_call3_audio_in_window_g2

0x39b6,	// (0x00012b95) popup_call3_audio_in_window_g3_ParamLimits

0x39b6,	// (0x00012b95) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0001e7f1) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0001e7f1) popup_call3_audio_in_window_g

0x39e7,	// (0x00012bc6) popup_call3_audio_in_window_t1_ParamLimits

0x39e7,	// (0x00012bc6) popup_call3_audio_in_window_t1

0x3a25,	// (0x00012c04) popup_call3_audio_in_window_t2_ParamLimits

0x3a25,	// (0x00012c04) popup_call3_audio_in_window_t2

0x3a63,	// (0x00012c42) popup_call3_audio_in_window_t3_ParamLimits

0x3a63,	// (0x00012c42) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0001e7fa) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0001e7fa) popup_call3_audio_in_window_t

0xa896,	// (0x00019a75) bg_popup_call3_rect_pane

0xbb54,	// (0x0001ad33) bg_popup_call3_rect_pane_g1

0x9c45,	// (0x00018e24) bg_popup_call3_rect_pane_g2

0xbb5c,	// (0x0001ad3b) bg_popup_call3_rect_pane_g3

0xbb64,	// (0x0001ad43) bg_popup_call3_rect_pane_g4

0xbb6c,	// (0x0001ad4b) bg_popup_call3_rect_pane_g5

0xbb74,	// (0x0001ad53) bg_popup_call3_rect_pane_g6

0xbb7c,	// (0x0001ad5b) bg_popup_call3_rect_pane_g7

0x29ab,	// (0x00011b8a) mup_visualizer_osc_pane

0xa975,	// (0x00019b54) mup_visualizer_spec_pane

0x3932,	// (0x00012b11) call3_video_qcif_pane_ParamLimits

0x3932,	// (0x00012b11) call3_video_qcif_pane

0x3943,	// (0x00012b22) call3_video_qcif_uncrop_pane_ParamLimits

0x3943,	// (0x00012b22) call3_video_qcif_uncrop_pane

0x3951,	// (0x00012b30) call3_video_subqcif_pane_ParamLimits

0x3951,	// (0x00012b30) call3_video_subqcif_pane

0x3965,	// (0x00012b44) call3_video_subqcif_uncrop_pane_ParamLimits

0x3965,	// (0x00012b44) call3_video_subqcif_uncrop_pane

0x39d6,	// (0x00012bb5) popup_call3_audio_in_window_g4_ParamLimits

0x39d6,	// (0x00012bb5) popup_call3_audio_in_window_g4

0x38f1,	// (0x00012ad0) mup_spec_half_pane

0x38fa,	// (0x00012ad9) mup_spec_half_pane_cp

0xbe0d,	// (0x0001afec) mup_osc_middle_pane

0xbe16,	// (0x0001aff5) mup_visualizer_osc_pane_g1

0x38d1,	// (0x00012ab0) mup_spec_bar_pane_ParamLimits

0x38d1,	// (0x00012ab0) mup_spec_bar_pane

0xbdfa,	// (0x0001afd9) mup_spec_bar_pane_g1

0xbe04,	// (0x0001afe3) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e7e5) mup_spec_bar_pane_g

0x07e2,	// (0x0000f9c1) aid_cale_week_size_cell_pane_ParamLimits

0x07fc,	// (0x0000f9db) bg_cale_heading_pane_ParamLimits

0x9cca,	// (0x00018ea9) bg_cale_pane_cp01_ParamLimits

0x081a,	// (0x0000f9f9) cale_week_corner_pane_ParamLimits

0x0839,	// (0x0000fa18) cale_week_day_heading_pane_ParamLimits

0x085c,	// (0x0000fa3b) cale_week_scroll_pane_g1_ParamLimits

0x0875,	// (0x0000fa54) cale_week_scroll_pane_g2_ParamLimits

0x088d,	// (0x0000fa6c) cale_week_scroll_pane_g3_ParamLimits

0x08a5,	// (0x0000fa84) cale_week_scroll_pane_g4_ParamLimits

0x08bd,	// (0x0000fa9c) cale_week_scroll_pane_g5_ParamLimits

0x08d9,	// (0x0000fab8) cale_week_scroll_pane_g6_ParamLimits

0x08f9,	// (0x0000fad8) cale_week_scroll_pane_g7_ParamLimits

0x0919,	// (0x0000faf8) cale_week_scroll_pane_g8_ParamLimits

0x093d,	// (0x0000fb1c) cale_week_scroll_pane_g9_ParamLimits

0x0955,	// (0x0000fb34) cale_week_scroll_pane_g10_ParamLimits

0x096d,	// (0x0000fb4c) cale_week_scroll_pane_g11_ParamLimits

0x0985,	// (0x0000fb64) cale_week_scroll_pane_g12_ParamLimits

0x099d,	// (0x0000fb7c) cale_week_scroll_pane_g13_ParamLimits

0x099d,	// (0x0000fb7c) cale_week_scroll_pane_g14_ParamLimits

0x099d,	// (0x0000fb7c) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0001e38b) cale_week_scroll_pane_g_ParamLimits

0x09d9,	// (0x0000fbb8) cale_week_time_pane_ParamLimits

0x09fd,	// (0x0000fbdc) grid_cale_week_pane_ParamLimits

0x9ce8,	// (0x00018ec7) listscroll_cale_week_pane_t1

0x9cfa,	// (0x00018ed9) scroll_pane_cp08_ParamLimits

0x1816,	// (0x000109f5) cale_month_corner_pane_ParamLimits

0xa0ab,	// (0x0001928a) cale_month_pane_t1

0x1c36,	// (0x00010e15) cale_month_week_pane_ParamLimits

0x24d5,	// (0x000116b4) popup_call_status_window_g1_ParamLimits

0x24e9,	// (0x000116c8) popup_call_status_window_g2_ParamLimits

0x24fd,	// (0x000116dc) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e535) popup_call_status_window_g_ParamLimits

0xa491,	// (0x00019670) aid_call2_pane

0x2c1f,	// (0x00011dfe) msg_header_pane_g1

0x2da3,	// (0x00011f82) postcard_address2_pane_ParamLimits

0x2da3,	// (0x00011f82) postcard_address2_pane

0x2db5,	// (0x00011f94) postcard_message2_pane_ParamLimits

0x2db5,	// (0x00011f94) postcard_message2_pane

0x387f,	// (0x00012a5e) message2_row_pane_ParamLimits

0x387f,	// (0x00012a5e) message2_row_pane

0x389e,	// (0x00012a7d) address2_row_pane_ParamLimits

0x389e,	// (0x00012a7d) address2_row_pane

0xbdc8,	// (0x0001afa7) postcard_message2_row_pane_g1

0xbdd0,	// (0x0001afaf) postcard_message2_row_pane_t1

0xbdc8,	// (0x0001afa7) address2_row_pane_g1

0xbdd0,	// (0x0001afaf) address2_row_pane_t1

0x0e1d,	// (0x0000fffc) aid_size_cell_vorec

0x97c3,	// (0x000189a2) main_rss_pane

0x38b1,	// (0x00012a90) rss_list_single_pane_ParamLimits

0x38b1,	// (0x00012a90) rss_list_single_pane

0xbdde,	// (0x0001afbd) rss_list_single_pane_t1

0xbdec,	// (0x0001afcb) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0001e7e0) rss_list_single_pane_t

0x97c3,	// (0x000189a2) main_camera2_pane

0x97c3,	// (0x000189a2) main_video2_pane

0x3b19,	// (0x00012cf8) cams_zoom_pane_cp2_ParamLimits

0x3b19,	// (0x00012cf8) cams_zoom_pane_cp2

0x3b39,	// (0x00012d18) image2_vga_pane_ParamLimits

0x3b39,	// (0x00012d18) image2_vga_pane

0x3b8a,	// (0x00012d69) main_camera2_pane_g1_ParamLimits

0x3b8a,	// (0x00012d69) main_camera2_pane_g1

0x3baa,	// (0x00012d89) main_camera2_pane_g2_ParamLimits

0x3baa,	// (0x00012d89) main_camera2_pane_g2

0x3bca,	// (0x00012da9) main_camera2_pane_g3_ParamLimits

0x3bca,	// (0x00012da9) main_camera2_pane_g3

0x3bea,	// (0x00012dc9) main_camera2_pane_g4_ParamLimits

0x3bea,	// (0x00012dc9) main_camera2_pane_g4

0x3c0a,	// (0x00012de9) main_camera2_pane_g5_ParamLimits

0x3c0a,	// (0x00012de9) main_camera2_pane_g5

0x3c2a,	// (0x00012e09) main_camera2_pane_g6_ParamLimits

0x3c2a,	// (0x00012e09) main_camera2_pane_g6

0x3c4a,	// (0x00012e29) main_camera2_pane_g7_ParamLimits

0x3c4a,	// (0x00012e29) main_camera2_pane_g7

0x3c6a,	// (0x00012e49) main_camera2_pane_g8_ParamLimits

0x3c6a,	// (0x00012e49) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0001e801) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0001e801) main_camera2_pane_g

0x3caa,	// (0x00012e89) main_camera2_pane_t1_ParamLimits

0x3caa,	// (0x00012e89) main_camera2_pane_t1

0x3cdf,	// (0x00012ebe) main_camera2_pane_t2_ParamLimits

0x3cdf,	// (0x00012ebe) main_camera2_pane_t2

0x3d05,	// (0x00012ee4) main_camera2_pane_t3_ParamLimits

0x3d05,	// (0x00012ee4) main_camera2_pane_t3

0x3d63,	// (0x00012f42) main_camera2_pane_t4_ParamLimits

0x3d63,	// (0x00012f42) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0001e814) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0001e814) main_camera2_pane_t

0x3df5,	// (0x00012fd4) cams_zoom_pane_cp4_ParamLimits

0x3df5,	// (0x00012fd4) cams_zoom_pane_cp4

0x3e0b,	// (0x00012fea) image2_cif_pane_ParamLimits

0x3e0b,	// (0x00012fea) image2_cif_pane

0x3e36,	// (0x00013015) image2_subqcif_pane_ParamLimits

0x3e36,	// (0x00013015) image2_subqcif_pane

0x3e50,	// (0x0001302f) main_video2_pane_g1_ParamLimits

0x3e50,	// (0x0001302f) main_video2_pane_g1

0x3e6a,	// (0x00013049) main_video2_pane_g2_ParamLimits

0x3e6a,	// (0x00013049) main_video2_pane_g2

0x3e80,	// (0x0001305f) main_video2_pane_g3_ParamLimits

0x3e80,	// (0x0001305f) main_video2_pane_g3

0x3e96,	// (0x00013075) main_video2_pane_g4_ParamLimits

0x3e96,	// (0x00013075) main_video2_pane_g4

0x3eac,	// (0x0001308b) main_video2_pane_g5_ParamLimits

0x3eac,	// (0x0001308b) main_video2_pane_g5

0x3ec2,	// (0x000130a1) main_video2_pane_g6_ParamLimits

0x3ec2,	// (0x000130a1) main_video2_pane_g6

0x0005,

0xf644,	// (0x0001e823) main_video2_pane_g_ParamLimits

0xf644,	// (0x0001e823) main_video2_pane_g

0x3edc,	// (0x000130bb) main_video2_pane_t1_ParamLimits

0x3edc,	// (0x000130bb) main_video2_pane_t1

0x3f00,	// (0x000130df) main_video2_pane_t2_ParamLimits

0x3f00,	// (0x000130df) main_video2_pane_t2

0x3f4e,	// (0x0001312d) main_video2_pane_t3_ParamLimits

0x3f4e,	// (0x0001312d) main_video2_pane_t3

0x0002,

0xf651,	// (0x0001e830) main_video2_pane_t_ParamLimits

0xf651,	// (0x0001e830) main_video2_pane_t

0x33db,	// (0x000125ba) call_muted_g2

0x0001,

0xf5f3,	// (0x0001e7d2) call_muted_g

0x97c3,	// (0x000189a2) main_mup2_pane

0x3f96,	// (0x00013175) main_mup2_pane_g1_ParamLimits

0x3f96,	// (0x00013175) main_mup2_pane_g1

0x3fa2,	// (0x00013181) main_mup2_pane_g2_ParamLimits

0x3fa2,	// (0x00013181) main_mup2_pane_g2

0xbf7e,	// (0x0001b15d) main_mup_pane_g13_cp1

0xbf86,	// (0x0001b165) mup_volume_pane_cp1

0x3fbe,	// (0x0001319d) main_mup2_pane_g4_ParamLimits

0x3fbe,	// (0x0001319d) main_mup2_pane_g4

0x3fd0,	// (0x000131af) main_mup2_pane_g5_ParamLimits

0x3fd0,	// (0x000131af) main_mup2_pane_g5

0x3fe2,	// (0x000131c1) main_mup2_pane_g6_ParamLimits

0x3fe2,	// (0x000131c1) main_mup2_pane_g6

0x3ff4,	// (0x000131d3) main_mup2_pane_g7_ParamLimits

0x3ff4,	// (0x000131d3) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0001e837) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0001e837) main_mup2_pane_g

0x400c,	// (0x000131eb) main_mup2_pane_t1_ParamLimits

0x400c,	// (0x000131eb) main_mup2_pane_t1

0x4022,	// (0x00013201) main_mup2_pane_t2_ParamLimits

0x4022,	// (0x00013201) main_mup2_pane_t2

0x4038,	// (0x00013217) main_mup2_pane_t3_ParamLimits

0x4038,	// (0x00013217) main_mup2_pane_t3

0x404e,	// (0x0001322d) main_mup2_pane_t4_ParamLimits

0x404e,	// (0x0001322d) main_mup2_pane_t4

0x4066,	// (0x00013245) main_mup2_pane_t5_ParamLimits

0x4066,	// (0x00013245) main_mup2_pane_t5

0x407e,	// (0x0001325d) main_mup2_pane_t6_ParamLimits

0x407e,	// (0x0001325d) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0001e846) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0001e846) main_mup2_pane_t

0x40ae,	// (0x0001328d) mup2_visualizer_pane_ParamLimits

0x40ae,	// (0x0001328d) mup2_visualizer_pane

0x40dc,	// (0x000132bb) mup_progress_pane_cp_ParamLimits

0x40dc,	// (0x000132bb) mup_progress_pane_cp

0xbf60,	// (0x0001b13f) mup_volume_pane_cp_ParamLimits

0xbf60,	// (0x0001b13f) mup_volume_pane_cp

0x40f0,	// (0x000132cf) mup2_visualizer_pane_g1_ParamLimits

0x40f0,	// (0x000132cf) mup2_visualizer_pane_g1

0xbe9f,	// (0x0001b07e) mup2_visualizer_pane_g2_ParamLimits

0xbe9f,	// (0x0001b07e) mup2_visualizer_pane_g2

0x4107,	// (0x000132e6) mup2_visualizer_pane_g3_ParamLimits

0x4107,	// (0x000132e6) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0001e853) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0001e853) mup2_visualizer_pane_g

0xac26,	// (0x00019e05) aid_size_cell_fmradio

0x358d,	// (0x0001276c) aid_height_parent_landcape

0x9f09,	// (0x000190e8) wml_content_pane_cp

0x9f11,	// (0x000190f0) wml_tabs_pane

0x9f1a,	// (0x000190f9) popup_wml_miniature_window

0x9f22,	// (0x00019101) scroll_pane_cp021

0x9f36,	// (0x00019115) wml_content_pane_comp8

0x97c3,	// (0x000189a2) bg_popup_sub_pane_cp05

0xbebd,	// (0x0001b09c) popup_wml_miniature_window_g1

0xbec5,	// (0x0001b0a4) wml_miniature_view_pane

0x4113,	// (0x000132f2) aid_size_wml_view

0x411b,	// (0x000132fa) wml_miniature_view_pane_g1

0x4124,	// (0x00013303) wml_miniature_view_pane_g2

0x412d,	// (0x0001330c) wml_miniature_view_pane_g3

0x4135,	// (0x00013314) wml_miniature_view_pane_g4

0x413d,	// (0x0001331c) wml_miniature_view_pane_g5

0x4145,	// (0x00013324) wml_miniature_view_pane_g6

0x414d,	// (0x0001332c) wml_miniature_view_pane_g7

0x4155,	// (0x00013334) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0001e85a) wml_miniature_view_pane_g

0xbecd,	// (0x0001b0ac) background_graphic_ParamLimits

0xbecd,	// (0x0001b0ac) background_graphic

0xbed9,	// (0x0001b0b8) wml_tabs_2_pane

0xbee2,	// (0x0001b0c1) wml_tabs_3_pane_ParamLimits

0xbee2,	// (0x0001b0c1) wml_tabs_3_pane

0xbef4,	// (0x0001b0d3) wml_tabs_4_pane_ParamLimits

0xbef4,	// (0x0001b0d3) wml_tabs_4_pane

0xbf0a,	// (0x0001b0e9) wml_tabs_5_pane_ParamLimits

0xbf0a,	// (0x0001b0e9) wml_tabs_5_pane

0xbf24,	// (0x0001b103) wml_tabs_pane_g2_ParamLimits

0xbf24,	// (0x0001b103) wml_tabs_pane_g2

0xbf38,	// (0x0001b117) wml_tabs_pane_g3_ParamLimits

0xbf38,	// (0x0001b117) wml_tabs_pane_g3

0x415d,	// (0x0001333c) wml_tabs_2_active_pane_ParamLimits

0x415d,	// (0x0001333c) wml_tabs_2_active_pane

0x4171,	// (0x00013350) wml_tabs_2_passive_pane_ParamLimits

0x4171,	// (0x00013350) wml_tabs_2_passive_pane

0x4185,	// (0x00013364) wml_tabs_3_active_pane_cp_ParamLimits

0x4185,	// (0x00013364) wml_tabs_3_active_pane_cp

0x419a,	// (0x00013379) wml_tabs_3_passive_pane_ParamLimits

0x419a,	// (0x00013379) wml_tabs_3_passive_pane

0x41ad,	// (0x0001338c) wml_tabs_3_passive_pane_cp_ParamLimits

0x41ad,	// (0x0001338c) wml_tabs_3_passive_pane_cp

0x41c4,	// (0x000133a3) tabs_4_active_pane

0x41cc,	// (0x000133ab) tabs_4_passive_pane

0x41d6,	// (0x000133b5) tabs_4_passive_pane_cp

0x41de,	// (0x000133bd) tabs_4_passive_pane_cp2

0x32a8,	// (0x00012487) aid_height_text

0x297d,	// (0x00011b5c) mup_volume_cont_pane_ParamLimits

0x297d,	// (0x00011b5c) mup_volume_cont_pane

0x03e5,	// (0x0000f5c4) aid_size_cell_pinb

0x03ef,	// (0x0000f5ce) aid_size_list_pinb

0x40c8,	// (0x000132a7) mup2_volume_cont_pane_ParamLimits

0x40c8,	// (0x000132a7) mup2_volume_cont_pane

0xbf4c,	// (0x0001b12b) mup2_volume_cont_pane_g1_ParamLimits

0xbf4c,	// (0x0001b12b) mup2_volume_cont_pane_g1

0x00a7,	// (0x0000f286) aid_size_cell_touch_ParamLimits

0x00a7,	// (0x0000f286) aid_size_cell_touch

0x02d4,	// (0x0000f4b3) touch_pane_ParamLimits

0x02d4,	// (0x0000f4b3) touch_pane

0x9332,	// (0x00018511) main_rss2_pane

0xbf8e,	// (0x0001b16d) listscroll_rss2_pane

0xbf97,	// (0x0001b176) rss2_navigation_pane

0xbf9f,	// (0x0001b17e) list_rss2_pane

0xa653,	// (0x00019832) scroll_pane_cp22

0xbfa7,	// (0x0001b186) rss2_navigation_pane_g1

0xbfb0,	// (0x0001b18f) rss2_navigation_pane_g2

0xbfb8,	// (0x0001b197) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0001e86b) rss2_navigation_pane_g

0xbfc0,	// (0x0001b19f) rss2_navigation_pane_t1

0x41e8,	// (0x000133c7) rss2_list_single_pane_ParamLimits

0x41e8,	// (0x000133c7) rss2_list_single_pane

0xbfce,	// (0x0001b1ad) rss2_list_single_pane_t2

0xbfdc,	// (0x0001b1bb) rss2_list_single_pane_t3_ParamLimits

0xbfdc,	// (0x0001b1bb) rss2_list_single_pane_t3

0xbff9,	// (0x0001b1d8) rss2_list_single_pane_t4

0x22dd,	// (0x000114bc) smil_status_pane_g1

0x93a2,	// (0x00018581) main_image2_pane_ParamLimits

0x93a2,	// (0x00018581) main_image2_pane

0x3c8a,	// (0x00012e69) main_camera2_pane_g9_ParamLimits

0x3c8a,	// (0x00012e69) main_camera2_pane_g9

0x3db8,	// (0x00012f97) main_camera2_pane_t5_ParamLimits

0x3db8,	// (0x00012f97) main_camera2_pane_t5

0xbe6f,	// (0x0001b04e) main_camera2_pane_t6_ParamLimits

0xbe6f,	// (0x0001b04e) main_camera2_pane_t6

0x41ff,	// (0x000133de) main_image2_pane_g1_ParamLimits

0x41ff,	// (0x000133de) main_image2_pane_g1

0x2fe2,	// (0x000121c1) smil2_video_pane_ParamLimits

0x2fe2,	// (0x000121c1) smil2_video_pane

0x9350,	// (0x0001852f) aid_zoom_text_primary_cp

0x9398,	// (0x00018577) popup_preview_fixed_window

0x9e72,	// (0x00019051) im_reading_pane_g1

0x3b01,	// (0x00012ce0) cams2_bc_adjust_pane_cp_ParamLimits

0x3b01,	// (0x00012ce0) cams2_bc_adjust_pane_cp

0x3de7,	// (0x00012fc6) cams2_bc_adjust_pane_ParamLimits

0x3de7,	// (0x00012fc6) cams2_bc_adjust_pane

0xc007,	// (0x0001b1e6) cams2_bc_adjust_pane_g1

0xc00f,	// (0x0001b1ee) cams2_slider_pane

0xc018,	// (0x0001b1f7) cams2_slider_pane_g1

0xc021,	// (0x0001b200) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0001e872) cams2_slider_pane_g

0x04c7,	// (0x0000f6a6) calc_display_pane_ParamLimits

0x04ef,	// (0x0000f6ce) calc_paper_pane_ParamLimits

0x0512,	// (0x0000f6f1) grid_calc_pane_ParamLimits

0xa4f7,	// (0x000196d6) popup_clock_digital_window_t1_ParamLimits

0xabc3,	// (0x00019da2) main_image_pane_t1

0x04a9,	// (0x0000f688) aid_size_cell_calc_ParamLimits

0x04a9,	// (0x0000f688) aid_size_cell_calc

0x35d3,	// (0x000127b2) popup_blid_sat_info2_window_ParamLimits

0x35d3,	// (0x000127b2) popup_blid_sat_info2_window

0xc043,	// (0x0001b222) aid_size_cell_blid

0xc04b,	// (0x0001b22a) bg_popup_window_pane_cp07

0xc06e,	// (0x0001b24d) grid_popup_blid_pane

0xc078,	// (0x0001b257) heading_pane_cp05_ParamLimits

0xc078,	// (0x0001b257) heading_pane_cp05

0xc142,	// (0x0001b321) cell_popup_blid_pane_ParamLimits

0xc142,	// (0x0001b321) cell_popup_blid_pane

0xc168,	// (0x0001b347) cell_popup_blid_pane_g1

0xc170,	// (0x0001b34f) cell_popup_blid_pane_t1

0x4098,	// (0x00013277) mup2_indicator_pane_ParamLimits

0x4098,	// (0x00013277) mup2_indicator_pane

0xa896,	// (0x00019a75) mup2_visualizer_osc_pane

0xbeab,	// (0x0001b08a) mup2_visualizer_spec_pane_ParamLimits

0xbeab,	// (0x0001b08a) mup2_visualizer_spec_pane

0x4215,	// (0x000133f4) mup2_spec_half_pane

0x421e,	// (0x000133fd) mup2_spec_half_pane_cp

0x4226,	// (0x00013405) mup2_spec_bar_pane_ParamLimits

0x4226,	// (0x00013405) mup2_spec_bar_pane

0xbdfa,	// (0x0001afd9) mup2_spec_bar_pane_g1

0xbe04,	// (0x0001afe3) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e7e5) mup2_spec_bar_pane_g

0x4246,	// (0x00013425) mup2_osc_middle_pane

0xbe16,	// (0x0001aff5) mup2_visualizer_osc_pane_g1

0x93d0,	// (0x000185af) popup_number_entry_window_t1_ParamLimits

0x93e3,	// (0x000185c2) popup_number_entry_window_t2_ParamLimits

0x93f5,	// (0x000185d4) popup_number_entry_window_t3_ParamLimits

0x0326,	// (0x0000f505) popup_number_entry_window_t5_ParamLimits

0x0326,	// (0x0000f505) popup_number_entry_window_t5

0xf0c6,	// (0x0001e2a5) popup_number_entry_window_t_ParamLimits

0x9407,	// (0x000185e6) text_title_cp2_ParamLimits

0xaa9d,	// (0x00019c7c) aid_hotspot_pointer_text2_pane

0xaac3,	// (0x00019ca2) main_viewer_pane_g9_ParamLimits

0xaac3,	// (0x00019ca2) main_viewer_pane_g9

0xa0ab,	// (0x0001928a) cale_month_pane_t1_ParamLimits

0xa116,	// (0x000192f5) bg_cale_pane_ParamLimits

0xa12e,	// (0x0001930d) list_cale_pane_ParamLimits

0xa13f,	// (0x0001931e) listscroll_cale_day_pane_t1

0xa151,	// (0x00019330) scroll_pane_cp09_ParamLimits

0x29b3,	// (0x00011b92) main_mup_eq_pane_t1_ParamLimits

0x29b3,	// (0x00011b92) main_mup_eq_pane_t1

0x29cd,	// (0x00011bac) main_mup_eq_pane_t2_ParamLimits

0x29cd,	// (0x00011bac) main_mup_eq_pane_t2

0x29e7,	// (0x00011bc6) main_mup_eq_pane_t3_ParamLimits

0x29e7,	// (0x00011bc6) main_mup_eq_pane_t3

0x2a03,	// (0x00011be2) main_mup_eq_pane_t4_ParamLimits

0x2a03,	// (0x00011be2) main_mup_eq_pane_t4

0x2a1f,	// (0x00011bfe) main_mup_eq_pane_t5_ParamLimits

0x2a1f,	// (0x00011bfe) main_mup_eq_pane_t5

0x2a3b,	// (0x00011c1a) main_mup_eq_pane_t6_ParamLimits

0x2a3b,	// (0x00011c1a) main_mup_eq_pane_t6

0x2a4f,	// (0x00011c2e) main_mup_eq_pane_t7_ParamLimits

0x2a4f,	// (0x00011c2e) main_mup_eq_pane_t7

0x2a63,	// (0x00011c42) main_mup_eq_pane_t8_ParamLimits

0x2a63,	// (0x00011c42) main_mup_eq_pane_t8

0x2a77,	// (0x00011c56) main_mup_eq_pane_t9_ParamLimits

0x2a77,	// (0x00011c56) main_mup_eq_pane_t9

0x2a91,	// (0x00011c70) main_mup_eq_pane_t10_ParamLimits

0x2a91,	// (0x00011c70) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e634) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e634) main_mup_eq_pane_t

0x2b40,	// (0x00011d1f) mup_equalizer_pane_cp5_ParamLimits

0x2b54,	// (0x00011d33) mup_equalizer_pane_cp6_ParamLimits

0x2b68,	// (0x00011d47) mup_equalizer_pane_cp7_ParamLimits

0x9332,	// (0x00018511) main_gallery_pane

0xbe1f,	// (0x0001affe) smil2_volume_pane

0xbe27,	// (0x0001b006) smil_status_volume_pane_g1_ParamLimits

0xbe3a,	// (0x0001b019) smil_status_volume_pane_g2_ParamLimits

0xbe4d,	// (0x0001b02c) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0001e7ea) smil_status_volume_pane_g_ParamLimits

0xc04b,	// (0x0001b22a) bg_popup_window_pane_cp07_ParamLimits

0xc059,	// (0x0001b238) blid_firmament_pane

0x424f,	// (0x0001342e) aid_size_cell_gallery_ParamLimits

0x424f,	// (0x0001342e) aid_size_cell_gallery

0x4265,	// (0x00013444) grid_gallery_pane_ParamLimits

0x4265,	// (0x00013444) grid_gallery_pane

0x427e,	// (0x0001345d) cell_gallery_pane_ParamLimits

0x427e,	// (0x0001345d) cell_gallery_pane

0xc17e,	// (0x0001b35d) bg_cell_gallery_focus_pane_ParamLimits

0xc17e,	// (0x0001b35d) bg_cell_gallery_focus_pane

0xc190,	// (0x0001b36f) cell_gallery_pane_g1_ParamLimits

0xc190,	// (0x0001b36f) cell_gallery_pane_g1

0x42c7,	// (0x000134a6) cell_gallery_pane_g2_ParamLimits

0x42c7,	// (0x000134a6) cell_gallery_pane_g2

0x42d4,	// (0x000134b3) cell_gallery_pane_g3_ParamLimits

0x42d4,	// (0x000134b3) cell_gallery_pane_g3

0xc19c,	// (0x0001b37b) cell_gallery_pane_g4_ParamLimits

0xc19c,	// (0x0001b37b) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0001e898) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0001e898) cell_gallery_pane_g

0xc1a8,	// (0x0001b387) bg_cell_gallery_focus_pane_g1

0xc1b0,	// (0x0001b38f) bg_cell_gallery_focus_pane_g2

0xc1b8,	// (0x0001b397) bg_cell_gallery_focus_pane_g3

0xc1c0,	// (0x0001b39f) bg_cell_gallery_focus_pane_g4

0xc1c8,	// (0x0001b3a7) bg_cell_gallery_focus_pane_g5

0xc1d0,	// (0x0001b3af) bg_cell_gallery_focus_pane_g6

0xc1d8,	// (0x0001b3b7) bg_cell_gallery_focus_pane_g7

0xc1e0,	// (0x0001b3bf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0001e8a1) bg_cell_gallery_focus_pane_g

0xc1e8,	// (0x0001b3c7) aid_firma_cardinal

0xc1fc,	// (0x0001b3db) blid_firmament_pane_t1

0xc213,	// (0x0001b3f2) blid_firmament_pane_t2

0xc22a,	// (0x0001b409) blid_firmament_pane_t3

0xc241,	// (0x0001b420) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0001e8b2) blid_firmament_pane_t

0xc258,	// (0x0001b437) blid_sat_info_pane

0xc268,	// (0x0001b447) blid_sat_info_pane_g1

0xc268,	// (0x0001b447) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0001e8bb) blid_sat_info_pane_g

0xc272,	// (0x0001b451) blid_sat_info_pane_t1

0xc280,	// (0x0001b45f) smil2_volume_content_pane

0xc289,	// (0x0001b468) smil2_volume_pane_g1

0x9bc9,	// (0x00018da8) smil2_volume_content_pane_g1

0xc291,	// (0x0001b470) smil2_volume_content_pane_g2

0xc29a,	// (0x0001b479) smil2_volume_content_pane_g3

0xc2a3,	// (0x0001b482) smil2_volume_content_pane_g4

0xc2ac,	// (0x0001b48b) smil2_volume_content_pane_g5

0xc2b5,	// (0x0001b494) smil2_volume_content_pane_g6

0xc2be,	// (0x0001b49d) smil2_volume_content_pane_g7

0xc2c7,	// (0x0001b4a6) smil2_volume_content_pane_g8

0xc2d0,	// (0x0001b4af) smil2_volume_content_pane_g9

0xc2d9,	// (0x0001b4b8) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0001e8c0) smil2_volume_content_pane_g

0x0ab1,	// (0x0000fc90) cale_week_day_heading_pane_t1_ParamLimits

0x0afb,	// (0x0000fcda) cale_week_day_heading_pane_t2_ParamLimits

0x0b4a,	// (0x0000fd29) cale_week_day_heading_pane_t3_ParamLimits

0x0b99,	// (0x0000fd78) cale_week_day_heading_pane_t4_ParamLimits

0x0be8,	// (0x0000fdc7) cale_week_day_heading_pane_t5_ParamLimits

0x0c3f,	// (0x0000fe1e) cale_week_day_heading_pane_t6_ParamLimits

0x0c96,	// (0x0000fe75) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0001e3ac) cale_week_day_heading_pane_t_ParamLimits

0x9d17,	// (0x00018ef6) bg_cale_side_pane_ParamLimits

0x0ce0,	// (0x0000febf) cale_week_time_pane_t1_ParamLimits

0x0cfa,	// (0x0000fed9) cale_week_time_pane_t2_ParamLimits

0x0d14,	// (0x0000fef3) cale_week_time_pane_t3_ParamLimits

0x0d2e,	// (0x0000ff0d) cale_week_time_pane_t4_ParamLimits

0x0d48,	// (0x0000ff27) cale_week_time_pane_t5_ParamLimits

0x0d62,	// (0x0000ff41) cale_week_time_pane_t6_ParamLimits

0x0d7c,	// (0x0000ff5b) cale_week_time_pane_t7_ParamLimits

0x0d9c,	// (0x0000ff7b) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0001e3bb) cale_week_time_pane_t_ParamLimits

0x0dbc,	// (0x0000ff9b) cell_cale_week_pane_g2_ParamLimits

0x9d17,	// (0x00018ef6) bg_cale_side_pane_cp01_ParamLimits

0x20c4,	// (0x000112a3) cale_month_week_pane_t1_ParamLimits

0x20dd,	// (0x000112bc) cale_month_week_pane_t2_ParamLimits

0x20f6,	// (0x000112d5) cale_month_week_pane_t3_ParamLimits

0x210f,	// (0x000112ee) cale_month_week_pane_t4_ParamLimits

0x2128,	// (0x00011307) cale_month_week_pane_t5_ParamLimits

0x2141,	// (0x00011320) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001e494) cale_month_week_pane_t_ParamLimits

0xa0bd,	// (0x0001929c) cell_cale_month_pane_g1_ParamLimits

0x9332,	// (0x00018511) main_cale_event_viewer_pane

0x9332,	// (0x00018511) listscroll_cale_event_viewer_pane

0xc2e2,	// (0x0001b4c1) list_cale_ev_pane

0xc2ea,	// (0x0001b4c9) scroll_pane_cp023

0xc2f6,	// (0x0001b4d5) field_cale_ev_pane_ParamLimits

0xc2f6,	// (0x0001b4d5) field_cale_ev_pane

0xc312,	// (0x0001b4f1) field_cale_ev_content_pane_ParamLimits

0xc312,	// (0x0001b4f1) field_cale_ev_content_pane

0xc31e,	// (0x0001b4fd) field_cale_ev_pane_g1_ParamLimits

0xc31e,	// (0x0001b4fd) field_cale_ev_pane_g1

0xc32a,	// (0x0001b509) field_cale_ev_pane_g2_ParamLimits

0xc32a,	// (0x0001b509) field_cale_ev_pane_g2

0xc342,	// (0x0001b521) field_cale_ev_pane_g3_ParamLimits

0xc342,	// (0x0001b521) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0001e8d5) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0001e8d5) field_cale_ev_pane_g

0xc35a,	// (0x0001b539) field_cale_ev_pane_t1_ParamLimits

0xc35a,	// (0x0001b539) field_cale_ev_pane_t1

0xc371,	// (0x0001b550) field_cale_ev_content_pane_t1_ParamLimits

0xc371,	// (0x0001b550) field_cale_ev_content_pane_t1

0xaa1f,	// (0x00019bfe) bg_button_pane_cp01

0x07d0,	// (0x0000f9af) listscroll_cale_week_pane_ParamLimits

0x9cc1,	// (0x00018ea0) popup_toolbar_window_cp01

0x9ce8,	// (0x00018ec7) listscroll_cale_week_pane_t1_ParamLimits

0x07d0,	// (0x0000f9af) listscroll_cale_day_pane_ParamLimits

0x9cc1,	// (0x00018ea0) popup_toolbar_window_cp02

0xa13f,	// (0x0001931e) listscroll_cale_day_pane_t1_ParamLimits

0x07d0,	// (0x0000f9af) main_cale_month_pane_ParamLimits

0xbd98,	// (0x0001af77) popup_toolbar_window_cp03_ParamLimits

0xbd98,	// (0x0001af77) popup_toolbar_window_cp03

0x2ea6,	// (0x00012085) main_image_pane_g2_ParamLimits

0x2ea6,	// (0x00012085) main_image_pane_g2

0x2eb7,	// (0x00012096) main_image_pane_g3_ParamLimits

0x2eb7,	// (0x00012096) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e6c6) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e6c6) main_image_pane_g

0xabc3,	// (0x00019da2) main_image_pane_t1_ParamLimits

0x2ec8,	// (0x000120a7) main_image_pane_t2_ParamLimits

0x2ec8,	// (0x000120a7) main_image_pane_t2

0x2eda,	// (0x000120b9) main_image_pane_t3_ParamLimits

0x2eda,	// (0x000120b9) main_image_pane_t3

0x2f02,	// (0x000120e1) main_image_pane_t4_ParamLimits

0x2f02,	// (0x000120e1) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e6cd) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e6cd) main_image_pane_t

0x2f22,	// (0x00012101) popup_image_details_window_cp01

0x2f2c,	// (0x0001210b) popup_toobar_trans_pane_cp01_ParamLimits

0x2f2c,	// (0x0001210b) popup_toobar_trans_pane_cp01

0x36aa,	// (0x00012889) popup_image_details_window_ParamLimits

0x36aa,	// (0x00012889) popup_image_details_window

0xbd6b,	// (0x0001af4a) popup_image_focus_window

0x3abb,	// (0x00012c9a) camera2_autofocus_pane_ParamLimits

0x3abb,	// (0x00012c9a) camera2_autofocus_pane

0x9332,	// (0x00018511) bg_popup_sub_pane_cp06

0xc38e,	// (0x0001b56d) popup_image_focus_window_g1

0xc396,	// (0x0001b575) popup_image_focus_window_g2

0xc39e,	// (0x0001b57d) popup_image_focus_window_g3

0xc3a6,	// (0x0001b585) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0001e8dc) popup_image_focus_window_g

0xc3ae,	// (0x0001b58d) popup_image_focus_window_t1

0xc3bc,	// (0x0001b59b) popup_image_focus_window_t2

0xc3cc,	// (0x0001b5ab) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0001e8e5) popup_image_focus_window_t

0xc3da,	// (0x0001b5b9) camera2_autofocus_pane_g1

0x93a2,	// (0x00018581) bg_tb_trans_pane_cp01

0xc3e8,	// (0x0001b5c7) popup_image_details_window_g1

0xc3fb,	// (0x0001b5da) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0001e8f7) popup_image_details_window_g

0xc424,	// (0x0001b603) popup_image_details_window_t1

0xc436,	// (0x0001b615) popup_image_details_window_t2

0xc44f,	// (0x0001b62e) popup_image_details_window_t3

0xc463,	// (0x0001b642) popup_image_details_window_t4

0xc47e,	// (0x0001b65d) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0001e8fe) popup_image_details_window_t

0x9af6,	// (0x00018cd5) bg_calc_paper_pane_ParamLimits

0x9332,	// (0x00018511) grid_highlight_pane_cp013

0x9b0a,	// (0x00018ce9) list_calc_pane_ParamLimits

0x9b1c,	// (0x00018cfb) scroll_pane_cp024

0x9b24,	// (0x00018d03) bg_calc_display_pane_ParamLimits

0x0610,	// (0x0000f7ef) calc_display_pane_t1_ParamLimits

0x0622,	// (0x0000f801) calc_display_pane_t2_ParamLimits

0x9b30,	// (0x00018d0f) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0001e32c) calc_display_pane_t_ParamLimits

0x06e7,	// (0x0000f8c6) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0001e349) cell_calc_pane_g

0x06f0,	// (0x0000f8cf) cell_calc_pane_t1

0x9ba7,	// (0x00018d86) grid_highlight_pane_cp02_ParamLimits

0x9bbd,	// (0x00018d9c) toolbar_button_pane_cp01_ParamLimits

0x9bbd,	// (0x00018d9c) toolbar_button_pane_cp01

0xac08,	// (0x00019de7) temp_image_control_pane_ParamLimits

0xac08,	// (0x00019de7) temp_image_control_pane

0x93a2,	// (0x00018581) main_mp3_pane

0xc498,	// (0x0001b677) temp_image_control_pane_g1_ParamLimits

0xc498,	// (0x0001b677) temp_image_control_pane_g1

0xc4a6,	// (0x0001b685) temp_image_control_pane_g2_ParamLimits

0xc4a6,	// (0x0001b685) temp_image_control_pane_g2

0xc4b8,	// (0x0001b697) temp_image_control_pane_g3_ParamLimits

0xc4b8,	// (0x0001b697) temp_image_control_pane_g3

0x4311,	// (0x000134f0) temp_image_control_pane_g4_ParamLimits

0x4311,	// (0x000134f0) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0001e909) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0001e909) temp_image_control_pane_g

0xc498,	// (0x0001b677) main_mp3_pane_g1

0x4324,	// (0x00013503) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0001e912) main_mp3_pane_g

0xc4fb,	// (0x0001b6da) main_mp3_pane_t1

0x9d81,	// (0x00018f60) main_camera_pane_g8_ParamLimits

0x9d81,	// (0x00018f60) main_camera_pane_g8

0x10e4,	// (0x000102c3) main_video_pane_g7_ParamLimits

0x10e4,	// (0x000102c3) main_video_pane_g7

0xbe8d,	// (0x0001b06c) main_camera2_pane_t7_ParamLimits

0xbe8d,	// (0x0001b06c) main_camera2_pane_t7

0x9ec9,	// (0x000190a8) scroll_pane_cp025_ParamLimits

0x9ec9,	// (0x000190a8) scroll_pane_cp025

0x9edd,	// (0x000190bc) scroll_pane_cp026_ParamLimits

0x9edd,	// (0x000190bc) scroll_pane_cp026

0x9eec,	// (0x000190cb) wml_content_pane_ParamLimits

0x9332,	// (0x00018511) main_touch_calib_pane

0x43fa,	// (0x000135d9) main_touch_calib_pane_g1

0x440c,	// (0x000135eb) main_touch_calib_pane_g2

0x441e,	// (0x000135fd) main_touch_calib_pane_g3

0x4430,	// (0x0001360f) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0001e930) main_touch_calib_pane_g

0x4442,	// (0x00013621) main_touch_calib_pane_t1

0x445c,	// (0x0001363b) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0001e939) main_touch_calib_pane_t

0xa731,	// (0x00019910) mup_progress_pane_cp02

0xa766,	// (0x00019945) navi_pane_g1

0xa821,	// (0x00019a00) navi_pane_mp_t3

0x93a2,	// (0x00018581) main_mp3_pane_ParamLimits

0x3827,	// (0x00012a06) navi_pane_ParamLimits

0xc498,	// (0x0001b677) main_mp3_pane_g1_ParamLimits

0x4324,	// (0x00013503) main_mp3_pane_g2_ParamLimits

0x4332,	// (0x00013511) main_mp3_pane_g3_ParamLimits

0x4332,	// (0x00013511) main_mp3_pane_g3

0x4340,	// (0x0001351f) main_mp3_pane_g4_ParamLimits

0x4340,	// (0x0001351f) main_mp3_pane_g4

0xc4c8,	// (0x0001b6a7) main_mp3_pane_g5_ParamLimits

0xc4c8,	// (0x0001b6a7) main_mp3_pane_g5

0xc4d6,	// (0x0001b6b5) main_mp3_pane_g6_ParamLimits

0xc4d6,	// (0x0001b6b5) main_mp3_pane_g6

0xc4e3,	// (0x0001b6c2) main_mp3_pane_g7_ParamLimits

0xc4e3,	// (0x0001b6c2) main_mp3_pane_g7

0xc4ef,	// (0x0001b6ce) main_mp3_pane_g8_ParamLimits

0xc4ef,	// (0x0001b6ce) main_mp3_pane_g8

0xf733,	// (0x0001e912) main_mp3_pane_g_ParamLimits

0x434e,	// (0x0001352d) main_mp3_pane_t2

0x435c,	// (0x0001353b) main_mp3_pane_t3

0xc509,	// (0x0001b6e8) main_mp3_pane_t4

0xc517,	// (0x0001b6f6) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0001e923) main_mp3_pane_t

0xc525,	// (0x0001b704) mup_progress_pane_cp01

0x9350,	// (0x0001852f) aid_zoom_text_secondary2

0xc2e2,	// (0x0001b4c1) list_cale_ev2_pane

0xc2ea,	// (0x0001b4c9) scroll_pane_cp023_ParamLimits

0x44b2,	// (0x00013691) field_cale_ev2_pane_ParamLimits

0x44b2,	// (0x00013691) field_cale_ev2_pane

0xc52d,	// (0x0001b70c) field_cale_ev2_pane_g1_ParamLimits

0xc52d,	// (0x0001b70c) field_cale_ev2_pane_g1

0xc539,	// (0x0001b718) field_cale_ev2_pane_g2_ParamLimits

0xc539,	// (0x0001b718) field_cale_ev2_pane_g2

0xc551,	// (0x0001b730) field_cale_ev2_pane_g3_ParamLimits

0xc551,	// (0x0001b730) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0001e944) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0001e944) field_cale_ev2_pane_g

0xc575,	// (0x0001b754) field_cale_ev2_pane_t1_ParamLimits

0xc575,	// (0x0001b754) field_cale_ev2_pane_t1

0xc58c,	// (0x0001b76b) field_cale_ev2_pane_t2_ParamLimits

0xc58c,	// (0x0001b76b) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0001e94d) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0001e94d) field_cale_ev2_pane_t

0x2d59,	// (0x00011f38) main_postcard_pane_g5_ParamLimits

0x2d59,	// (0x00011f38) main_postcard_pane_g5

0x2d6f,	// (0x00011f4e) main_postcard_pane_g6_ParamLimits

0x2d6f,	// (0x00011f4e) main_postcard_pane_g6

0x0e9e,	// (0x0001007d) camera2_autofocus_pane_cp_ParamLimits

0x0e9e,	// (0x0001007d) camera2_autofocus_pane_cp

0x93a2,	// (0x00018581) main_mup3_pane

0x44f4,	// (0x000136d3) main_mup3_pane_g1_ParamLimits

0x44f4,	// (0x000136d3) main_mup3_pane_g1

0x4516,	// (0x000136f5) main_mup3_pane_g2_ParamLimits

0x4516,	// (0x000136f5) main_mup3_pane_g2

0x4598,	// (0x00013777) main_mup3_pane_g3_ParamLimits

0x4598,	// (0x00013777) main_mup3_pane_g3

0x45de,	// (0x000137bd) main_mup3_pane_g4_ParamLimits

0x45de,	// (0x000137bd) main_mup3_pane_g4

0x4624,	// (0x00013803) main_mup3_pane_g5_ParamLimits

0x4624,	// (0x00013803) main_mup3_pane_g5

0x466c,	// (0x0001384b) main_mup3_pane_g6_ParamLimits

0x466c,	// (0x0001384b) main_mup3_pane_g6

0xc5a1,	// (0x0001b780) main_mup3_pane_g7_ParamLimits

0xc5a1,	// (0x0001b780) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0001e95d) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0001e95d) main_mup3_pane_g

0x46ea,	// (0x000138c9) main_mup3_pane_t1_ParamLimits

0x46ea,	// (0x000138c9) main_mup3_pane_t1

0x475e,	// (0x0001393d) main_mup3_pane_t2_ParamLimits

0x475e,	// (0x0001393d) main_mup3_pane_t2

0x4832,	// (0x00013a11) main_mup3_pane_t4_ParamLimits

0x4832,	// (0x00013a11) main_mup3_pane_t4

0x4888,	// (0x00013a67) main_mup3_pane_t5_ParamLimits

0x4888,	// (0x00013a67) main_mup3_pane_t5

0x4944,	// (0x00013b23) main_mup3_pane_t6_ParamLimits

0x4944,	// (0x00013b23) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0001e96e) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0001e96e) main_mup3_pane_t

0x49fc,	// (0x00013bdb) mup3_progress_pane_ParamLimits

0x49fc,	// (0x00013bdb) mup3_progress_pane

0x4a88,	// (0x00013c67) popup_mup3_control_window_ParamLimits

0x4a88,	// (0x00013c67) popup_mup3_control_window

0xc5af,	// (0x0001b78e) popup_mup3_text_window

0x4aba,	// (0x00013c99) mup3_progress_pane_t1

0x4ad9,	// (0x00013cb8) mup3_progress_pane_t2

0xc5b7,	// (0x0001b796) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0001e97b) mup3_progress_pane_t

0xc5d4,	// (0x0001b7b3) mup_progress_pane_cp03

0x9332,	// (0x00018511) bg_tb_trans_pane_cp04

0x4af8,	// (0x00013cd7) mup3_volume_pane

0x4b00,	// (0x00013cdf) popup_mup3_control_window_g1

0x4b09,	// (0x00013ce8) mup3_volume_pane_g1

0x4b12,	// (0x00013cf1) mup3_volume_pane_g2

0x4b1b,	// (0x00013cfa) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0001e982) mup3_volume_pane_g

0x9332,	// (0x00018511) bg_tb_trans_pane_cp03

0xc5e4,	// (0x0001b7c3) popup_mup3_text_window_g1

0xc5ec,	// (0x0001b7cb) popup_mup3_text_window_t1

0x9b7e,	// (0x00018d5d) list_calc_item_pane_g1_ParamLimits

0xbf75,	// (0x0001b154) mup_volume_pane_cp_g1

0x4476,	// (0x00013655) main_touch_calib_pane_t3

0x448a,	// (0x00013669) main_touch_calib_pane_t4

0x449e,	// (0x0001367d) main_touch_calib_pane_t5

0x933c,	// (0x0001851b) aid_cell_size_toolbar2

0x9344,	// (0x00018523) aid_popup3_width_pane

0x9350,	// (0x0001852f) aid_zoom_text_msg_primary

0x0e75,	// (0x00010054) vorec_t7

0x9b42,	// (0x00018d21) bg_calc_paper_pane_g1_ParamLimits

0x9b4e,	// (0x00018d2d) bg_calc_paper_pane_g2_ParamLimits

0x9b5a,	// (0x00018d39) bg_calc_paper_pane_g3_ParamLimits

0x9b66,	// (0x00018d45) bg_calc_paper_pane_g4_ParamLimits

0x9b72,	// (0x00018d51) bg_calc_paper_pane_g5_ParamLimits

0x066b,	// (0x0000f84a) bg_calc_paper_pane_g6_ParamLimits

0x067c,	// (0x0000f85b) bg_calc_paper_pane_g7_ParamLimits

0x068d,	// (0x0000f86c) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0001e333) bg_calc_paper_pane_g_ParamLimits

0x06a0,	// (0x0000f87f) calc_bg_paper_pane_g9_ParamLimits

0x0ff6,	// (0x000101d5) image_qvga_pane_ParamLimits

0x0ff6,	// (0x000101d5) image_qvga_pane

0x9a1e,	// (0x00018bfd) bg_popup_sub_pane_cp04_ParamLimits

0xab3f,	// (0x00019d1e) popup_mup_playback_window_g1_ParamLimits

0xab4b,	// (0x00019d2a) popup_mup_playback_window_t1_ParamLimits

0xab60,	// (0x00019d3f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e6c1) popup_mup_playback_window_t_ParamLimits

0x3fb2,	// (0x00013191) main_mup2_pane_g3_ParamLimits

0x3fb2,	// (0x00013191) main_mup2_pane_g3

0x1409,	// (0x000105e8) popup_toolbar_window_cp04

0xaf55,	// (0x0001a134) popup_call2_audio_second_window_g3_ParamLimits

0xaf55,	// (0x0001a134) popup_call2_audio_second_window_g3

0xb35f,	// (0x0001a53e) popup_call2_audio_first_window_g4_ParamLimits

0xb35f,	// (0x0001a53e) popup_call2_audio_first_window_g4

0xb9de,	// (0x0001abbd) popup_call2_audio_in_window_g4_ParamLimits

0xb9de,	// (0x0001abbd) popup_call2_audio_in_window_g4

0x2e88,	// (0x00012067) aid_area_sk_bg_cut_ParamLimits

0x2e88,	// (0x00012067) aid_area_sk_bg_cut

0xab75,	// (0x00019d54) aid_area_sk_bg_cut_2_ParamLimits

0xab75,	// (0x00019d54) aid_area_sk_bg_cut_2

0x42b7,	// (0x00013496) aid_placing_details_win

0x42bf,	// (0x0001349e) aid_placing_details_win_2

0xc3da,	// (0x0001b5b9) camera2_autofocus_pane_g1_ParamLimits

0x026d,	// (0x0000f44c) popup_fixed_preview_cale_window_ParamLimits

0x026d,	// (0x0000f44c) popup_fixed_preview_cale_window

0xa8b0,	// (0x00019a8f) navi_slider_pane_g3

0xa8b9,	// (0x00019a98) navi_slider_pane_g4

0xa8c2,	// (0x00019aa1) navi_slider_pane_g5

0xa8b0,	// (0x00019a8f) navi_slider_pane_g6

0xa8cb,	// (0x00019aaa) navi_slider_pane_g7

0xa9ec,	// (0x00019bcb) mup_scale_pane_g3

0xa9f5,	// (0x00019bd4) mup_scale_pane_g4

0xa9fe,	// (0x00019bdd) mup_scale_pane_g5

0x2b7c,	// (0x00011d5b) mup_scale_pane_g6

0x2b85,	// (0x00011d64) mup_scale_pane_g7

0xa8b0,	// (0x00019a8f) cams2_slider_pane_g3

0xc02a,	// (0x0001b209) cams2_slider_pane_g4

0xc032,	// (0x0001b211) cams2_slider_pane_g5

0xa8b0,	// (0x00019a8f) cams2_slider_pane_g6

0xc03a,	// (0x0001b219) cams2_slider_pane_g7

0xc268,	// (0x0001b447) camera2_autofocus_pane_cp_g1

0xbd3f,	// (0x0001af1e) bg_popup_preview_window_pane_cp02_ParamLimits

0xbd3f,	// (0x0001af1e) bg_popup_preview_window_pane_cp02

0xc5fa,	// (0x0001b7d9) list_fp_cale_pane_ParamLimits

0xc5fa,	// (0x0001b7d9) list_fp_cale_pane

0xc606,	// (0x0001b7e5) popup_fixed_preview_cale_window_t1_ParamLimits

0xc606,	// (0x0001b7e5) popup_fixed_preview_cale_window_t1

0x4b24,	// (0x00013d03) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b24,	// (0x00013d03) popup_fixed_preview_cale_window_t2

0x4b39,	// (0x00013d18) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b39,	// (0x00013d18) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0001e989) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0001e989) popup_fixed_preview_cale_window_t

0x4b4e,	// (0x00013d2d) list_single_fp_cale_pane_ParamLimits

0x4b4e,	// (0x00013d2d) list_single_fp_cale_pane

0xc624,	// (0x0001b803) list_single_fp_cale_pane_g1_ParamLimits

0xc624,	// (0x0001b803) list_single_fp_cale_pane_g1

0xc630,	// (0x0001b80f) list_single_fp_cale_pane_g2_ParamLimits

0xc630,	// (0x0001b80f) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0001e990) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0001e990) list_single_fp_cale_pane_g

0xc649,	// (0x0001b828) list_single_fp_cale_pane_t1_ParamLimits

0xc649,	// (0x0001b828) list_single_fp_cale_pane_t1

0xc65b,	// (0x0001b83a) list_single_fp_cale_pane_t2_ParamLimits

0xc65b,	// (0x0001b83a) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0001e997) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0001e997) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9332,	// (0x00018511) main_dialer_pane

0x4b65,	// (0x00013d44) aid_cell_size_keypad

0x4b6f,	// (0x00013d4e) dialer_ne_pane

0x4b77,	// (0x00013d56) grid_dialer_command_1_pane

0x4b7f,	// (0x00013d5e) grid_dialer_command_2_pane

0x4b87,	// (0x00013d66) grid_dialer_keypad_pane

0x4b99,	// (0x00013d78) bg_popup_call_pane_cp06_ParamLimits

0x4b99,	// (0x00013d78) bg_popup_call_pane_cp06

0x4ba5,	// (0x00013d84) dialer_ne_clear_pane_ParamLimits

0x4ba5,	// (0x00013d84) dialer_ne_clear_pane

0xc68e,	// (0x0001b86d) dialer_ne_pane_g1

0xc696,	// (0x0001b875) dialer_ne_pane_t1_ParamLimits

0xc696,	// (0x0001b875) dialer_ne_pane_t1

0x4bb1,	// (0x00013d90) dialer_ne_pane_t2_ParamLimits

0x4bb1,	// (0x00013d90) dialer_ne_pane_t2

0x4bdb,	// (0x00013dba) dialer_ne_pane_t3_ParamLimits

0x4bdb,	// (0x00013dba) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0001e99c) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0001e99c) dialer_ne_pane_t

0x4c0b,	// (0x00013dea) dialer_ne_pane_t3_copy1_ParamLimits

0x4c0b,	// (0x00013dea) dialer_ne_pane_t3_copy1

0x4c3a,	// (0x00013e19) cell_dialer_keypad_pane_ParamLimits

0x4c3a,	// (0x00013e19) cell_dialer_keypad_pane

0x4c51,	// (0x00013e30) cell_dialer_command_1_pane_ParamLimits

0x4c51,	// (0x00013e30) cell_dialer_command_1_pane

0x4c67,	// (0x00013e46) cell_dialer_command_2_pane_ParamLimits

0x4c67,	// (0x00013e46) cell_dialer_command_2_pane

0xc6a8,	// (0x0001b887) bg_button_pane_cp02_ParamLimits

0xc6a8,	// (0x0001b887) bg_button_pane_cp02

0x4c76,	// (0x00013e55) cell_dialer_keypad_pane_g1_ParamLimits

0x4c76,	// (0x00013e55) cell_dialer_keypad_pane_g1

0xc6a8,	// (0x0001b887) bg_button_pane_cp03_ParamLimits

0xc6a8,	// (0x0001b887) bg_button_pane_cp03

0x4c8b,	// (0x00013e6a) cell_dialer_command_1_pane_g1_ParamLimits

0x4c8b,	// (0x00013e6a) cell_dialer_command_1_pane_g1

0xc6b4,	// (0x0001b893) bg_button_pane_cp04

0x4c9e,	// (0x00013e7d) cell_dialer_command_2_pane_g1

0xa896,	// (0x00019a75) bg_button_pane_cp06

0xc6bc,	// (0x0001b89b) dialer_ne_clear_pane_g1

0xa772,	// (0x00019951) navi_pane_g2

0xa7a0,	// (0x0001997f) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e5c4) navi_pane_g

0xa82f,	// (0x00019a0e) navi_pane_mv_g2

0xa856,	// (0x00019a35) navi_pane_mv_g5

0x273c,	// (0x0001191b) navi_pane_mv_t1

0x9b24,	// (0x00018d03) main_clock2_pane

0x4ceb,	// (0x00013eca) main_clock2_list_pane_ParamLimits

0x4ceb,	// (0x00013eca) main_clock2_list_pane

0x4d23,	// (0x00013f02) main_clock2_pane_t1_ParamLimits

0x4d23,	// (0x00013f02) main_clock2_pane_t1

0x4d61,	// (0x00013f40) main_clock2_pane_t2_ParamLimits

0x4d61,	// (0x00013f40) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001e9a8) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001e9a8) main_clock2_pane_t

0x4dff,	// (0x00013fde) popup_clock_analogue_window_cp03_ParamLimits

0x4dff,	// (0x00013fde) popup_clock_analogue_window_cp03

0x4e24,	// (0x00014003) popup_clock_digital_window_cp02_ParamLimits

0x4e24,	// (0x00014003) popup_clock_digital_window_cp02

0x4e97,	// (0x00014076) main_clock2_list_single_pane_ParamLimits

0x4e97,	// (0x00014076) main_clock2_list_single_pane

0xa896,	// (0x00019a75) list_highlight_pane_cp05

0xc6f6,	// (0x0001b8d5) main_clock2_list_single_pane_t1

0x1409,	// (0x000105e8) popup_toolbar_window_cp04_ParamLimits

0x42e1,	// (0x000134c0) camera2_autofocus_pane_g2_ParamLimits

0x42e1,	// (0x000134c0) camera2_autofocus_pane_g2

0x42ed,	// (0x000134cc) camera2_autofocus_pane_g3_ParamLimits

0x42ed,	// (0x000134cc) camera2_autofocus_pane_g3

0x42f9,	// (0x000134d8) camera2_autofocus_pane_g4_ParamLimits

0x42f9,	// (0x000134d8) camera2_autofocus_pane_g4

0x4305,	// (0x000134e4) camera2_autofocus_pane_g5_ParamLimits

0x4305,	// (0x000134e4) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0001e8ec) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0001e8ec) camera2_autofocus_pane_g

0x44d4,	// (0x000136b3) camera2_autofocus_pane_cp_g2

0x44dc,	// (0x000136bb) camera2_autofocus_pane_cp_g3

0x44e4,	// (0x000136c3) camera2_autofocus_pane_cp_g4

0x44ec,	// (0x000136cb) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0001e952) camera2_autofocus_pane_cp_g

0x4b91,	// (0x00013d70) popup_dialer_spcha_window

0x9332,	// (0x00018511) bg_popup_sub_pane_cp07

0xc704,	// (0x0001b8e3) list_spcha_pane

0xc70c,	// (0x0001b8eb) list_single_spcha_pane_ParamLimits

0xc70c,	// (0x0001b8eb) list_single_spcha_pane

0x9332,	// (0x00018511) list_highlight_pane_cp06

0xc71d,	// (0x0001b8fc) list_single_spcha_pane_t1

0xb788,	// (0x0001a967) popup_call2_audio_out_window_g4_ParamLimits

0xb788,	// (0x0001a967) popup_call2_audio_out_window_g4

0x9332,	// (0x00018511) main_imed2_pane

0xbd73,	// (0x0001af52) popup_imed_adjust2_window

0x36c2,	// (0x000128a1) popup_imed_trans_window_ParamLimits

0x36c2,	// (0x000128a1) popup_imed_trans_window

0xc0a4,	// (0x0001b283) popup_blid_sat_info2_window_t1

0xc0b2,	// (0x0001b291) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0001e881) popup_blid_sat_info2_window_t

0x4f41,	// (0x00014120) aid_size_cell_colour_35

0x4f61,	// (0x00014140) aid_size_cell_colour_112

0x4f81,	// (0x00014160) aid_size_cell_effect

0xbd4b,	// (0x0001af2a) bg_tb_trans_pane_cp02

0xa250,	// (0x0001942f) heading_imed_pane

0x4fa1,	// (0x00014180) listscroll_imed_pane

0xc72b,	// (0x0001b90a) heading_imed_pane_g1

0xc733,	// (0x0001b912) heading_imed_pane_t1

0xc741,	// (0x0001b920) grid_imed_colour_35_pane_ParamLimits

0xc741,	// (0x0001b920) grid_imed_colour_35_pane

0x4fad,	// (0x0001418c) grid_imed_effect_pane

0xc759,	// (0x0001b938) list_imed_aspect_pane

0x4fc3,	// (0x000141a2) scroll_pane_cp027_ParamLimits

0x4fc3,	// (0x000141a2) scroll_pane_cp027

0x4fd4,	// (0x000141b3) cell_imed_effect_pane_ParamLimits

0x4fd4,	// (0x000141b3) cell_imed_effect_pane

0xc761,	// (0x0001b940) cell_imed_colour_pane_ParamLimits

0xc761,	// (0x0001b940) cell_imed_colour_pane

0xc7a3,	// (0x0001b982) cell_imed_colour_pane_g1_ParamLimits

0xc7a3,	// (0x0001b982) cell_imed_colour_pane_g1

0xc7b4,	// (0x0001b993) hgihlgiht_grid_pane_cp016_ParamLimits

0xc7b4,	// (0x0001b993) hgihlgiht_grid_pane_cp016

0x4ffb,	// (0x000141da) cell_imed_effect_pane_g1

0x5003,	// (0x000141e2) grid_highlight_pane_cp017

0xc7c5,	// (0x0001b9a4) list_imed_single_pane_ParamLimits

0xc7c5,	// (0x0001b9a4) list_imed_single_pane

0x9332,	// (0x00018511) list_highlight_pane_cp07

0xc7db,	// (0x0001b9ba) list_imed_aspect_pane_comp1_t1

0xbd4b,	// (0x0001af2a) bg_tb_trans_pane_cp05

0xc7fd,	// (0x0001b9dc) popup_imed_adjust2_window_g1

0xc824,	// (0x0001ba03) popup_imed_adjust2_window_t1

0xc83c,	// (0x0001ba1b) slider_imed_adjust_pane

0xc850,	// (0x0001ba2f) slider_imed_adjust_pane_g1

0xc860,	// (0x0001ba3f) slider_imed_adjust_pane_g2

0xc870,	// (0x0001ba4f) slider_imed_adjust_pane_g3

0xc881,	// (0x0001ba60) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001e9c5) slider_imed_adjust_pane_g

0x500c,	// (0x000141eb) aid_size_cell_clipart2

0x5018,	// (0x000141f7) grid_imed_clipart_pane

0xc892,	// (0x0001ba71) scroll_pane_cp031

0x5022,	// (0x00014201) cell_imed_clipart_pane_ParamLimits

0x5022,	// (0x00014201) cell_imed_clipart_pane

0x5046,	// (0x00014225) cell_imed_clipart_pane_g1

0x9332,	// (0x00018511) grid_highlight_pane_cp014

0x4d00,	// (0x00013edf) main_clock2_pane_g1_ParamLimits

0x4d00,	// (0x00013edf) main_clock2_pane_g1

0x4e42,	// (0x00014021) aid_call2_pane_cp10

0x4e54,	// (0x00014033) aid_call_pane_cp10

0xa6d1,	// (0x000198b0) popup_clock_analogue_window_cp10_g1

0xa6d1,	// (0x000198b0) popup_clock_analogue_window_cp10_g2

0x4e66,	// (0x00014045) popup_clock_analogue_window_cp10_g3

0x4e66,	// (0x00014045) popup_clock_analogue_window_cp10_g4

0xa6d1,	// (0x000198b0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001e9b3) popup_clock_analogue_window_cp10_g

0x4e78,	// (0x00014057) popup_clock_analogue_window_cp10_t1

0x4ea9,	// (0x00014088) clock_digital_number_pane_cp10_ParamLimits

0x4ea9,	// (0x00014088) clock_digital_number_pane_cp10

0x4ec1,	// (0x000140a0) clock_digital_number_pane_cp11_ParamLimits

0x4ec1,	// (0x000140a0) clock_digital_number_pane_cp11

0x4ed9,	// (0x000140b8) clock_digital_number_pane_cp12_ParamLimits

0x4ed9,	// (0x000140b8) clock_digital_number_pane_cp12

0x4ef1,	// (0x000140d0) clock_digital_number_pane_cp13_ParamLimits

0x4ef1,	// (0x000140d0) clock_digital_number_pane_cp13

0x4f09,	// (0x000140e8) clock_digital_separator_pane_cp10_ParamLimits

0x4f09,	// (0x000140e8) clock_digital_separator_pane_cp10

0x4f21,	// (0x00014100) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f21,	// (0x00014100) popup_clock_digital_window_cp02_t1

0x9a16,	// (0x00018bf5) clock_digital_number_pane_cp10_g1

0x9a16,	// (0x00018bf5) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001e9ce) clock_digital_number_pane_cp10_g

0x9a16,	// (0x00018bf5) clock_digital_separator_pane_cp10_g1

0x9a16,	// (0x00018bf5) clock_digital_separator_pane_g2_cp10

0xa85e,	// (0x00019a3d) navi_pane_vded_g4

0xa867,	// (0x00019a46) navi_pane_vded_g5

0xa870,	// (0x00019a4f) navi_pane_vded_t1

0x9332,	// (0x00018511) main_vded_pane

0x504f,	// (0x0001422e) main_vded_pane_g1

0x5059,	// (0x00014238) main_vded_pane_g2

0x5063,	// (0x00014242) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001e9d3) main_vded_pane_g

0x506d,	// (0x0001424c) main_vded_pane_t1

0x507b,	// (0x0001425a) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001e9da) main_vded_pane_t

0x5089,	// (0x00014268) vded_slider_pane

0x5093,	// (0x00014272) vded_video_pane

0xc89a,	// (0x0001ba79) vded_video_pane_g1

0x509d,	// (0x0001427c) vded_video_pane_g2

0xc268,	// (0x0001b447) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001e9df) vded_video_pane_g

0xc8a4,	// (0x0001ba83) vded_slider_pane_g1

0xc8ad,	// (0x0001ba8c) vded_slider_pane_g2

0xc8b6,	// (0x0001ba95) vded_slider_pane_g3

0xc8bf,	// (0x0001ba9e) vded_slider_pane_g4

0xc8c8,	// (0x0001baa7) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001e9e6) vded_slider_pane_g

0x4a70,	// (0x00013c4f) mup3_rocker_pane_ParamLimits

0x4a70,	// (0x00013c4f) mup3_rocker_pane

0x50a6,	// (0x00014285) mup3_control_keys_pane_g1

0x50ae,	// (0x0001428d) mup3_control_keys_pane_g2

0x50b6,	// (0x00014295) mup3_control_keys_pane_g3

0x50be,	// (0x0001429d) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001e9f1) mup3_control_keys_pane_g

0x02a4,	// (0x0000f483) popup_toolbar2_fixed_window_cp01_ParamLimits

0x02a4,	// (0x0000f483) popup_toolbar2_fixed_window_cp01

0x4aa4,	// (0x00013c83) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4aa4,	// (0x00013c83) popup_toolbar2_fixed_window_cp02

0xb0c7,	// (0x0001a2a6) popup_call2_audio_second_window_t4_ParamLimits

0xb0c7,	// (0x0001a2a6) popup_call2_audio_second_window_t4

0xb5f5,	// (0x0001a7d4) popup_call2_audio_first_window_t6_ParamLimits

0xb5f5,	// (0x0001a7d4) popup_call2_audio_first_window_t6

0xb88b,	// (0x0001aa6a) popup_call2_audio_out_window_t6_ParamLimits

0xb88b,	// (0x0001aa6a) popup_call2_audio_out_window_t6

0x9332,	// (0x00018511) main_vitu_pane

0x50ce,	// (0x000142ad) aid_size_cell_itu_ParamLimits

0x50ce,	// (0x000142ad) aid_size_cell_itu

0x93a2,	// (0x00018581) bg_popup_window_pane_cp08_ParamLimits

0x93a2,	// (0x00018581) bg_popup_window_pane_cp08

0x50e4,	// (0x000142c3) field_vitu_entry_pane_ParamLimits

0x50e4,	// (0x000142c3) field_vitu_entry_pane

0x50fb,	// (0x000142da) grid_vitu_function_pane_ParamLimits

0x50fb,	// (0x000142da) grid_vitu_function_pane

0x5116,	// (0x000142f5) grid_vitu_itu_pane_ParamLimits

0x5116,	// (0x000142f5) grid_vitu_itu_pane

0x5134,	// (0x00014313) cell_vitu_itu_pane_ParamLimits

0x5134,	// (0x00014313) cell_vitu_itu_pane

0x5158,	// (0x00014337) cell_vitu_function_pane_ParamLimits

0x5158,	// (0x00014337) cell_vitu_function_pane

0x93a2,	// (0x00018581) bg_popup_sub_pane_cp08_ParamLimits

0x93a2,	// (0x00018581) bg_popup_sub_pane_cp08

0x5173,	// (0x00014352) field_vitu_entry_pane_t1_ParamLimits

0x5173,	// (0x00014352) field_vitu_entry_pane_t1

0xc8e9,	// (0x0001bac8) field_vitu_entry_pane_t2_ParamLimits

0xc8e9,	// (0x0001bac8) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001e9ff) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001e9ff) field_vitu_entry_pane_t

0xc906,	// (0x0001bae5) bg_button_pane_cp05_ParamLimits

0xc906,	// (0x0001bae5) bg_button_pane_cp05

0x5192,	// (0x00014371) cell_vitu_itu_pane_g1

0x51aa,	// (0x00014389) cell_vitu_itu_pane_t1_ParamLimits

0x51aa,	// (0x00014389) cell_vitu_itu_pane_t1

0x51bc,	// (0x0001439b) cell_vitu_itu_pane_t2_ParamLimits

0x51bc,	// (0x0001439b) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001ea04) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001ea04) cell_vitu_itu_pane_t

0xc914,	// (0x0001baf3) bg_button_pane_cp07

0x51ff,	// (0x000143de) cell_vitu_function_pane_g1

0x9ac4,	// (0x00018ca3) main_calc_pane_g1

0x00cb,	// (0x0000f2aa) aid_visual_content_pane

0x9332,	// (0x00018511) main_vradio_pane

0x5208,	// (0x000143e7) main_vradio_pane_g1_ParamLimits

0x5208,	// (0x000143e7) main_vradio_pane_g1

0xc91e,	// (0x0001bafd) main_vradio_pane_g2_ParamLimits

0xc91e,	// (0x0001bafd) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001ea0b) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001ea0b) main_vradio_pane_g

0x5221,	// (0x00014400) main_vradio_pane_t1_ParamLimits

0x5221,	// (0x00014400) main_vradio_pane_t1

0x5236,	// (0x00014415) main_vradio_pane_t2_ParamLimits

0x5236,	// (0x00014415) main_vradio_pane_t2

0xc92b,	// (0x0001bb0a) main_vradio_pane_t3_ParamLimits

0xc92b,	// (0x0001bb0a) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001ea10) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001ea10) main_vradio_pane_t

0x524b,	// (0x0001442a) vradio_rocker_control_pane_ParamLimits

0x524b,	// (0x0001442a) vradio_rocker_control_pane

0x525d,	// (0x0001443c) vradio_station_info_pane_ParamLimits

0x525d,	// (0x0001443c) vradio_station_info_pane

0xc93f,	// (0x0001bb1e) vradio_frequency_info_pane_ParamLimits

0xc93f,	// (0x0001bb1e) vradio_frequency_info_pane

0xc268,	// (0x0001b447) vradio_station_info_pane_g1

0xc94e,	// (0x0001bb2d) vradio_station_info_pane_t1_ParamLimits

0xc94e,	// (0x0001bb2d) vradio_station_info_pane_t1

0xc970,	// (0x0001bb4f) vradio_station_info_pane_t2_ParamLimits

0xc970,	// (0x0001bb4f) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001ea17) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001ea17) vradio_station_info_pane_t

0xc982,	// (0x0001bb61) vradio_tuning_pane

0xc98a,	// (0x0001bb69) vradio_rocker_control_pane_g1

0xc992,	// (0x0001bb71) vradio_rocker_control_pane_g2

0xc99a,	// (0x0001bb79) vradio_rocker_control_pane_g3

0xc9a2,	// (0x0001bb81) vradio_rocker_control_pane_g4

0xc9aa,	// (0x0001bb89) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001ea1c) vradio_rocker_control_pane_g

0x526f,	// (0x0001444e) vradio_frequency_info_pane_g1

0xc9b2,	// (0x0001bb91) vradio_frequency_info_pane_t1_ParamLimits

0xc9b2,	// (0x0001bb91) vradio_frequency_info_pane_t1

0x5279,	// (0x00014458) vradio_tuning_pane_g1

0x5284,	// (0x00014463) vradio_tuning_pane_t1

0x9360,	// (0x0001853f) area_side_right_pane_ParamLimits

0x9360,	// (0x0001853f) area_side_right_pane

0xbd06,	// (0x0001aee5) status_small_pane_g1

0xbd0e,	// (0x0001aeed) status_small_pane_g2

0xbd17,	// (0x0001aef6) status_small_pane_g3

0xbd20,	// (0x0001aeff) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0001e7d7) status_small_pane_g

0xbd29,	// (0x0001af08) status_small_pane_t1

0x9332,	// (0x00018511) main_video3_pane

0xc9c6,	// (0x0001bba5) cams_zoom_vslider_pane

0xc9ce,	// (0x0001bbad) image3_wide_pane_ParamLimits

0xc9ce,	// (0x0001bbad) image3_wide_pane

0xc9e8,	// (0x0001bbc7) image3_wide_small_pane

0xc9f4,	// (0x0001bbd3) main_video3_pane_g1_ParamLimits

0xc9f4,	// (0x0001bbd3) main_video3_pane_g1

0xca10,	// (0x0001bbef) main_video3_pane_g2_ParamLimits

0xca10,	// (0x0001bbef) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001ea27) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001ea27) main_video3_pane_g

0xca2c,	// (0x0001bc0b) main_video3_pane_t1_ParamLimits

0xca2c,	// (0x0001bc0b) main_video3_pane_t1

0xca57,	// (0x0001bc36) main_video3_pane_t2_ParamLimits

0xca57,	// (0x0001bc36) main_video3_pane_t2

0xca82,	// (0x0001bc61) main_video3_pane_t3_ParamLimits

0xca82,	// (0x0001bc61) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001ea2c) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001ea2c) main_video3_pane_t

0xcaaf,	// (0x0001bc8e) cams_zoom_vslider_pane_g1

0xcab8,	// (0x0001bc97) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001ea33) cams_zoom_vslider_pane_g

0xcac0,	// (0x0001bc9f) small_slider_vertical_pane

0xc268,	// (0x0001b447) small_slider_vertical_pane_g1

0xc268,	// (0x0001b447) small_slider_vertical_pane_g2

0xcac8,	// (0x0001bca7) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001ea38) small_slider_vertical_pane_g

0x9332,	// (0x00018511) main_hwr_training_pane

0xcad1,	// (0x0001bcb0) hwr_training_instruct_pane_ParamLimits

0xcad1,	// (0x0001bcb0) hwr_training_instruct_pane

0x5293,	// (0x00014472) hwr_training_navi_pane_ParamLimits

0x5293,	// (0x00014472) hwr_training_navi_pane

0x52b2,	// (0x00014491) hwr_training_write_pane_ParamLimits

0x52b2,	// (0x00014491) hwr_training_write_pane

0x9332,	// (0x00018511) bg_frame_shadow_pane

0xcb08,	// (0x0001bce7) hwr_training_write_pane_g1

0xcb10,	// (0x0001bcef) hwr_training_write_pane_g2

0xcb18,	// (0x0001bcf7) hwr_training_write_pane_g3

0xcb20,	// (0x0001bcff) hwr_training_write_pane_g4

0xcb28,	// (0x0001bd07) hwr_training_write_pane_g5

0xcb30,	// (0x0001bd0f) hwr_training_write_pane_g6

0xcb38,	// (0x0001bd17) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001ea3f) hwr_training_write_pane_g

0xcb40,	// (0x0001bd1f) hwr_training_navi_pane_g1_ParamLimits

0xcb40,	// (0x0001bd1f) hwr_training_navi_pane_g1

0xcb52,	// (0x0001bd31) hwr_training_navi_pane_g2_ParamLimits

0xcb52,	// (0x0001bd31) hwr_training_navi_pane_g2

0xcb64,	// (0x0001bd43) hwr_training_navi_pane_g3_ParamLimits

0xcb64,	// (0x0001bd43) hwr_training_navi_pane_g3

0xcb74,	// (0x0001bd53) hwr_training_navi_pane_g4_ParamLimits

0xcb74,	// (0x0001bd53) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001ea4e) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001ea4e) hwr_training_navi_pane_g

0xcb81,	// (0x0001bd60) hwr_training_navi_pane_t1

0x52fc,	// (0x000144db) list_single_hwr_training_instruct_pane_ParamLimits

0x52fc,	// (0x000144db) list_single_hwr_training_instruct_pane

0xcb8f,	// (0x0001bd6e) list_single_hwr_training_instruct_pane_t1

0xc1a8,	// (0x0001b387) bg_frame_shadow_pane_g1

0xcb9e,	// (0x0001bd7d) bg_frame_shadow_pane_g2

0xcba6,	// (0x0001bd85) bg_frame_shadow_pane_g3

0xcbae,	// (0x0001bd8d) bg_frame_shadow_pane_g4

0xcbb6,	// (0x0001bd95) bg_frame_shadow_pane_g5

0xcbbe,	// (0x0001bd9d) bg_frame_shadow_pane_g6

0xcbc6,	// (0x0001bda5) bg_frame_shadow_pane_g7

0x9c1d,	// (0x00018dfc) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001ea59) bg_frame_shadow_pane_g

0x9332,	// (0x00018511) main_video_tele_dialer_pane

0x5313,	// (0x000144f2) aid_size_cell_video_keypad_ParamLimits

0x5313,	// (0x000144f2) aid_size_cell_video_keypad

0x532d,	// (0x0001450c) grid_video_dialer_keypad_pane_ParamLimits

0x532d,	// (0x0001450c) grid_video_dialer_keypad_pane

0x537b,	// (0x0001455a) video_down_pane_cp_ParamLimits

0x537b,	// (0x0001455a) video_down_pane_cp

0x53ad,	// (0x0001458c) cell_video_dialer_keypad_pane_ParamLimits

0x53ad,	// (0x0001458c) cell_video_dialer_keypad_pane

0xcbce,	// (0x0001bdad) bg_button_pane_cp08_ParamLimits

0xcbce,	// (0x0001bdad) bg_button_pane_cp08

0x53cf,	// (0x000145ae) cell_video_dialer_keypad_pane_g1_ParamLimits

0x53cf,	// (0x000145ae) cell_video_dialer_keypad_pane_g1

0x4a5a,	// (0x00013c39) mup3_rocker2_pane_ParamLimits

0x4a5a,	// (0x00013c39) mup3_rocker2_pane

0xc268,	// (0x0001b447) mup3_rocker2_pane_g1

0x35ab,	// (0x0001278a) main_dialer2_pane

0x9332,	// (0x00018511) main_mp4_pane

0xcbe2,	// (0x0001bdc1) main_mp4_pane_g1_ParamLimits

0xcbe2,	// (0x0001bdc1) main_mp4_pane_g1

0xcbe2,	// (0x0001bdc1) main_mp4_pane_g2_ParamLimits

0xcbe2,	// (0x0001bdc1) main_mp4_pane_g2

0x540a,	// (0x000145e9) main_mp4_pane_g3_ParamLimits

0x540a,	// (0x000145e9) main_mp4_pane_g3

0xcbf0,	// (0x0001bdcf) main_mp4_pane_g4_ParamLimits

0xcbf0,	// (0x0001bdcf) main_mp4_pane_g4

0xcc18,	// (0x0001bdf7) main_mp4_pane_g5_ParamLimits

0xcc18,	// (0x0001bdf7) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001ea79) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001ea79) main_mp4_pane_g

0xcc68,	// (0x0001be47) main_mp4_pane_t1_ParamLimits

0xcc68,	// (0x0001be47) main_mp4_pane_t1

0xccc4,	// (0x0001bea3) main_mp4_pane_t2_ParamLimits

0xccc4,	// (0x0001bea3) main_mp4_pane_t2

0xcd16,	// (0x0001bef5) main_mp4_pane_t3_ParamLimits

0xcd16,	// (0x0001bef5) main_mp4_pane_t3

0xcd36,	// (0x0001bf15) main_mp4_pane_t4_ParamLimits

0xcd36,	// (0x0001bf15) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001ea86) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001ea86) main_mp4_pane_t

0xcd7a,	// (0x0001bf59) mp4_progress_pane_ParamLimits

0xcd7a,	// (0x0001bf59) mp4_progress_pane

0xcdc4,	// (0x0001bfa3) mp4_rocker_pane_ParamLimits

0xcdc4,	// (0x0001bfa3) mp4_rocker_pane

0xcdec,	// (0x0001bfcb) mp4_progress_pane_t1

0xce05,	// (0x0001bfe4) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001ea8f) mp4_progress_pane_t

0xce1e,	// (0x0001bffd) mup_progress_pane_cp04

0xc268,	// (0x0001b447) mp4_rocker_pane_g1

0x5446,	// (0x00014625) aid_cell_size_keypad2_ParamLimits

0x5446,	// (0x00014625) aid_cell_size_keypad2

0x545c,	// (0x0001463b) dialer2_ne_pane_ParamLimits

0x545c,	// (0x0001463b) dialer2_ne_pane

0x5476,	// (0x00014655) grid_dialer2_keypad_pane_ParamLimits

0x5476,	// (0x00014655) grid_dialer2_keypad_pane

0xc04b,	// (0x0001b22a) bg_popup_call_pane_cp07_ParamLimits

0xc04b,	// (0x0001b22a) bg_popup_call_pane_cp07

0x5494,	// (0x00014673) dialer2_ne_pane_t1_ParamLimits

0x5494,	// (0x00014673) dialer2_ne_pane_t1

0x54d1,	// (0x000146b0) cell_dialer2_keypad_pane_ParamLimits

0x54d1,	// (0x000146b0) cell_dialer2_keypad_pane

0xce3c,	// (0x0001c01b) bg_button_pane_pane_cp04_ParamLimits

0xce3c,	// (0x0001c01b) bg_button_pane_pane_cp04

0x54f3,	// (0x000146d2) cell_dialer2_keypad_pane_g1_ParamLimits

0x54f3,	// (0x000146d2) cell_dialer2_keypad_pane_g1

0x12dd,	// (0x000104bc) aid_placing_vt_set_content_ParamLimits

0x12dd,	// (0x000104bc) aid_placing_vt_set_content

0x1305,	// (0x000104e4) aid_placing_vt_set_title_ParamLimits

0x1305,	// (0x000104e4) aid_placing_vt_set_title

0x9332,	// (0x00018511) main_image3_pane

0x55b9,	// (0x00014798) area_side_right_pane_cp01_ParamLimits

0x55b9,	// (0x00014798) area_side_right_pane_cp01

0xcbe2,	// (0x0001bdc1) main_image3_pane_g1_ParamLimits

0xcbe2,	// (0x0001bdc1) main_image3_pane_g1

0x55d0,	// (0x000147af) main_image3_pane_g2_ParamLimits

0x55d0,	// (0x000147af) main_image3_pane_g2

0x55f8,	// (0x000147d7) main_image3_pane_g3_ParamLimits

0x55f8,	// (0x000147d7) main_image3_pane_g3

0x5622,	// (0x00014801) main_image3_pane_g4_ParamLimits

0x5622,	// (0x00014801) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001ea9e) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001ea9e) main_image3_pane_g

0x564c,	// (0x0001482b) main_image3_pane_t1_ParamLimits

0x564c,	// (0x0001482b) main_image3_pane_t1

0x56a4,	// (0x00014883) main_image3_pane_t2_ParamLimits

0x56a4,	// (0x00014883) main_image3_pane_t2

0x56f6,	// (0x000148d5) main_image3_pane_t3_ParamLimits

0x56f6,	// (0x000148d5) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001eaa7) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001eaa7) main_image3_pane_t

0x93a2,	// (0x00018581) grid_sctrl_middle_pane_cp01_ParamLimits

0x93a2,	// (0x00018581) grid_sctrl_middle_pane_cp01

0x577e,	// (0x0001495d) cell_sctrl_middle_pane_cp01_ParamLimits

0x577e,	// (0x0001495d) cell_sctrl_middle_pane_cp01

0x579b,	// (0x0001497a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x579b,	// (0x0001497a) cell_sctrl_middle_pane_cp01_g1

0x9332,	// (0x00018511) main_call4_pane

0x57b1,	// (0x00014990) aid_size_button_call4_ParamLimits

0x57b1,	// (0x00014990) aid_size_button_call4

0x57e2,	// (0x000149c1) call4_windows_pane_ParamLimits

0x57e2,	// (0x000149c1) call4_windows_pane

0x5802,	// (0x000149e1) grid_call4_button_pane_ParamLimits

0x5802,	// (0x000149e1) grid_call4_button_pane

0xce7a,	// (0x0001c059) call4_windows_conf_pane

0xce8f,	// (0x0001c06e) popup_call4_audio_first_window_ParamLimits

0xce8f,	// (0x0001c06e) popup_call4_audio_first_window

0xcedb,	// (0x0001c0ba) popup_call4_audio_second_window_ParamLimits

0xcedb,	// (0x0001c0ba) popup_call4_audio_second_window

0xceef,	// (0x0001c0ce) popup_call4_audio_wait_window_ParamLimits

0xceef,	// (0x0001c0ce) popup_call4_audio_wait_window

0x582f,	// (0x00014a0e) cell_call4_button_pane_ParamLimits

0x582f,	// (0x00014a0e) cell_call4_button_pane

0x5858,	// (0x00014a37) bg_button_pane_cp09_ParamLimits

0x5858,	// (0x00014a37) bg_button_pane_cp09

0x5864,	// (0x00014a43) cell_call4_button_pane_g1_ParamLimits

0x5864,	// (0x00014a43) cell_call4_button_pane_g1

0x588a,	// (0x00014a69) cell_call4_button_pane_t1_ParamLimits

0x588a,	// (0x00014a69) cell_call4_button_pane_t1

0xcf37,	// (0x0001c116) popup_call4_audio_conf_window_ParamLimits

0xcf37,	// (0x0001c116) popup_call4_audio_conf_window

0x4aba,	// (0x00013c99) mup3_progress_pane_t1_ParamLimits

0x4ad9,	// (0x00013cb8) mup3_progress_pane_t2_ParamLimits

0xc5b7,	// (0x0001b796) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0001e97b) mup3_progress_pane_t_ParamLimits

0xc5d4,	// (0x0001b7b3) mup_progress_pane_cp03_ParamLimits

0x50c6,	// (0x000142a5) mup3_control_keys_pane_g4_copy1

0xcda8,	// (0x0001bf87) mp4_rocker2_pane_ParamLimits

0xcda8,	// (0x0001bf87) mp4_rocker2_pane

0xcf4b,	// (0x0001c12a) mp4_rocker2_pane_g1

0xcf53,	// (0x0001c132) mp4_rocker2_pane_g2

0xcf5b,	// (0x0001c13a) mp4_rocker2_pane_g3

0xcf63,	// (0x0001c142) mp4_rocker2_pane_g4

0xcf6b,	// (0x0001c14a) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001eab0) mp4_rocker2_pane_g

0x9332,	// (0x00018511) main_camera4_pane

0x9332,	// (0x00018511) main_video4_pane

0x5349,	// (0x00014528) main_video_tele_dialer_pane_t1_ParamLimits

0x5349,	// (0x00014528) main_video_tele_dialer_pane_t1

0x5362,	// (0x00014541) main_video_tele_dialer_pane_t2_ParamLimits

0x5362,	// (0x00014541) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001ea6a) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001ea6a) main_video_tele_dialer_pane_t

0x58c8,	// (0x00014aa7) cam4_autofocus_pane_ParamLimits

0x58c8,	// (0x00014aa7) cam4_autofocus_pane

0x58de,	// (0x00014abd) cam4_image_uncrop_pane_ParamLimits

0x58de,	// (0x00014abd) cam4_image_uncrop_pane

0x58f8,	// (0x00014ad7) cam4_indicators_pane_ParamLimits

0x58f8,	// (0x00014ad7) cam4_indicators_pane

0x5923,	// (0x00014b02) main_camera4_pane_g1_ParamLimits

0x5923,	// (0x00014b02) main_camera4_pane_g1

0x5935,	// (0x00014b14) main_camera4_pane_g2_ParamLimits

0x5935,	// (0x00014b14) main_camera4_pane_g2

0x5948,	// (0x00014b27) main_camera4_pane_g3_ParamLimits

0x5948,	// (0x00014b27) main_camera4_pane_g3

0x595b,	// (0x00014b3a) main_camera4_pane_g4_ParamLimits

0x595b,	// (0x00014b3a) main_camera4_pane_g4

0x596e,	// (0x00014b4d) main_camera4_pane_g5_ParamLimits

0x596e,	// (0x00014b4d) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001eabb) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001eabb) main_camera4_pane_g

0x5992,	// (0x00014b71) main_camera4_pane_t1_ParamLimits

0x5992,	// (0x00014b71) main_camera4_pane_t1

0xc4c8,	// (0x0001b6a7) bg_tb_trans_pane_cp06

0xcf97,	// (0x0001c176) cam4_indicators_pane_g1

0xcfa8,	// (0x0001c187) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001ead6) cam4_indicators_pane_g

0xcfc6,	// (0x0001c1a5) cam4_indicators_pane_t1

0x59f6,	// (0x00014bd5) main_video4_pane_g1_ParamLimits

0x59f6,	// (0x00014bd5) main_video4_pane_g1

0x5a05,	// (0x00014be4) main_video4_pane_g2_ParamLimits

0x5a05,	// (0x00014be4) main_video4_pane_g2

0x5a14,	// (0x00014bf3) main_video4_pane_g3_ParamLimits

0x5a14,	// (0x00014bf3) main_video4_pane_g3

0x5a23,	// (0x00014c02) main_video4_pane_g4_ParamLimits

0x5a23,	// (0x00014c02) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001eadd) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001eadd) main_video4_pane_g

0x5a41,	// (0x00014c20) vid4_indicators_pane_ParamLimits

0x5a41,	// (0x00014c20) vid4_indicators_pane

0x5a6f,	// (0x00014c4e) video4_image_uncrop_cif_pane_ParamLimits

0x5a6f,	// (0x00014c4e) video4_image_uncrop_cif_pane

0x5a89,	// (0x00014c68) video4_image_uncrop_nhd_pane_ParamLimits

0x5a89,	// (0x00014c68) video4_image_uncrop_nhd_pane

0x58de,	// (0x00014abd) video4_image_uncrop_vga_pane_ParamLimits

0x58de,	// (0x00014abd) video4_image_uncrop_vga_pane

0x93a2,	// (0x00018581) bg_tb_trans_pane_cp07

0xcff0,	// (0x0001c1cf) vid4_indicators_pane_g1

0xd004,	// (0x0001c1e3) vid4_indicators_pane_g2

0xd018,	// (0x0001c1f7) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001eae8) vid4_indicators_pane_g

0xd045,	// (0x0001c224) vid4_indicators_pane_t1

0x5a9d,	// (0x00014c7c) cam4_autofocus_pane_g1

0x5aa5,	// (0x00014c84) cam4_autofocus_pane_g2

0x5aad,	// (0x00014c8c) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001eaf3) cam4_autofocus_pane_g

0x5ab5,	// (0x00014c94) cam4_autofocus_pane_g3_copy1

0x5391,	// (0x00014570) video_down_pane_cp_t1

0x539f,	// (0x0001457e) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001ea6f) video_down_pane_cp_t

0x93a2,	// (0x00018581) popup_vitu2_window_ParamLimits

0x93a2,	// (0x00018581) popup_vitu2_window

0x5abd,	// (0x00014c9c) aid_size_cell2_itu2_ParamLimits

0x5abd,	// (0x00014c9c) aid_size_cell2_itu2

0x5ae3,	// (0x00014cc2) aid_size_cell_itu2_ParamLimits

0x5ae3,	// (0x00014cc2) aid_size_cell_itu2

0x5b3f,	// (0x00014d1e) bg_popup_window_pane_cp09_ParamLimits

0x5b3f,	// (0x00014d1e) bg_popup_window_pane_cp09

0x5b4d,	// (0x00014d2c) field_vitu2_entry_pane_ParamLimits

0x5b4d,	// (0x00014d2c) field_vitu2_entry_pane

0x5b73,	// (0x00014d52) grid_vitu2_function_pane_ParamLimits

0x5b73,	// (0x00014d52) grid_vitu2_function_pane

0x5bc4,	// (0x00014da3) grid_vitu2_itu_pane_ParamLimits

0x5bc4,	// (0x00014da3) grid_vitu2_itu_pane

0x5c55,	// (0x00014e34) cell_vitu2_itu_pane_ParamLimits

0x5c55,	// (0x00014e34) cell_vitu2_itu_pane

0x5c79,	// (0x00014e58) cell_vitu2_function_pane_ParamLimits

0x5c79,	// (0x00014e58) cell_vitu2_function_pane

0xd05c,	// (0x0001c23b) bg_popup_call_pane_cp08_ParamLimits

0xd05c,	// (0x0001c23b) bg_popup_call_pane_cp08

0xd073,	// (0x0001c252) field_vitu2_entry_pane_g1

0xd07f,	// (0x0001c25e) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001eafa) field_vitu2_entry_pane_g

0xd099,	// (0x0001c278) field_vitu2_entry_pane_t1_ParamLimits

0xd099,	// (0x0001c278) field_vitu2_entry_pane_t1

0xd0c5,	// (0x0001c2a4) field_vitu2_entry_pane_t2_ParamLimits

0xd0c5,	// (0x0001c2a4) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001eb01) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001eb01) field_vitu2_entry_pane_t

0x5cb8,	// (0x00014e97) bg_button_pane_cp010_ParamLimits

0x5cb8,	// (0x00014e97) bg_button_pane_cp010

0x5cc6,	// (0x00014ea5) cell_vitu2_itu_pane_g1

0x5cf1,	// (0x00014ed0) cell_vitu2_itu_pane_t1_ParamLimits

0x5cf1,	// (0x00014ed0) cell_vitu2_itu_pane_t1

0x5d4f,	// (0x00014f2e) cell_vitu2_itu_pane_t2_ParamLimits

0x5d4f,	// (0x00014f2e) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001eb0b) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001eb0b) cell_vitu2_itu_pane_t

0x93a2,	// (0x00018581) bg_button_pane_cp011

0x5e2b,	// (0x0001500a) cell_vitu2_function_pane_g1

0x9332,	// (0x00018511) main_myfav_hc_pane

0x5746,	// (0x00014925) popup_image3_note_pane_ParamLimits

0x5746,	// (0x00014925) popup_image3_note_pane

0x5762,	// (0x00014941) popup_image3_tool_bar_pane_ParamLimits

0x5762,	// (0x00014941) popup_image3_tool_bar_pane

0x5dd3,	// (0x00014fb2) cell_vitu2_itu_pane_t3_ParamLimits

0x5dd3,	// (0x00014fb2) cell_vitu2_itu_pane_t3

0x9332,	// (0x00018511) bg_popup_trans_pane

0xd0ea,	// (0x0001c2c9) grid_image3_tool_bar_pane

0xd0f4,	// (0x0001c2d3) bg_popup_trans_pane_g1

0x9fd2,	// (0x000191b1) bg_popup_trans_pane_g2

0xd0fc,	// (0x0001c2db) bg_popup_trans_pane_g3

0xd104,	// (0x0001c2e3) bg_popup_trans_pane_g4

0xd10c,	// (0x0001c2eb) bg_popup_trans_pane_g5

0xd114,	// (0x0001c2f3) bg_popup_trans_pane_g6

0xd11c,	// (0x0001c2fb) bg_popup_trans_pane_g7

0xd124,	// (0x0001c303) bg_popup_trans_pane_g8

0x9fb2,	// (0x00019191) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001eb12) bg_popup_trans_pane_g

0xd12c,	// (0x0001c30b) cell_image3_tool_bar_pane_ParamLimits

0xd12c,	// (0x0001c30b) cell_image3_tool_bar_pane

0xc268,	// (0x0001b447) cell_image3_tool_bar_pane_g1

0x9332,	// (0x00018511) bg_popup_trans_pane_cp1

0xd140,	// (0x0001c31f) popup_image3_note_pane_t1

0xd14e,	// (0x0001c32d) popup_image3_note_pane_t2

0xd15c,	// (0x0001c33b) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001eb25) popup_image3_note_pane_t

0xd16a,	// (0x0001c349) popup_image3_note_pane_t3_copy1

0x5e3f,	// (0x0001501e) bg_myfav_hc_instruction_pane_ParamLimits

0x5e3f,	// (0x0001501e) bg_myfav_hc_instruction_pane

0x5e55,	// (0x00015034) cell_myfav_contact_pane_ParamLimits

0x5e55,	// (0x00015034) cell_myfav_contact_pane

0x5e73,	// (0x00015052) cell_myfav_contact_pane_cp1_ParamLimits

0x5e73,	// (0x00015052) cell_myfav_contact_pane_cp1

0x5e8b,	// (0x0001506a) cell_myfav_contact_pane_cp2_ParamLimits

0x5e8b,	// (0x0001506a) cell_myfav_contact_pane_cp2

0x5ea3,	// (0x00015082) cell_myfav_contact_pane_cp3_ParamLimits

0x5ea3,	// (0x00015082) cell_myfav_contact_pane_cp3

0x5eba,	// (0x00015099) cell_myfav_contact_pane_cp4_ParamLimits

0x5eba,	// (0x00015099) cell_myfav_contact_pane_cp4

0x5ed2,	// (0x000150b1) cell_myfav_contact_pane_cp5_ParamLimits

0x5ed2,	// (0x000150b1) cell_myfav_contact_pane_cp5

0x5ee6,	// (0x000150c5) cell_myfav_contact_pane_cp6_ParamLimits

0x5ee6,	// (0x000150c5) cell_myfav_contact_pane_cp6

0x5efc,	// (0x000150db) cell_myfav_contact_pane_cp7_ParamLimits

0x5efc,	// (0x000150db) cell_myfav_contact_pane_cp7

0xd178,	// (0x0001c357) listscroll_gen_pane_cp05

0x5f16,	// (0x000150f5) main_myfav_hc_pane_g1_ParamLimits

0x5f16,	// (0x000150f5) main_myfav_hc_pane_g1

0x5f30,	// (0x0001510f) main_myfav_hc_pane_g2_ParamLimits

0x5f30,	// (0x0001510f) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001eb2c) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001eb2c) main_myfav_hc_pane_g

0x5f62,	// (0x00015141) main_myfav_hc_pane_t1_ParamLimits

0x5f62,	// (0x00015141) main_myfav_hc_pane_t1

0xd181,	// (0x0001c360) main_myfav_hc_pane_t2_ParamLimits

0xd181,	// (0x0001c360) main_myfav_hc_pane_t2

0xd193,	// (0x0001c372) main_myfav_hc_pane_t3_ParamLimits

0xd193,	// (0x0001c372) main_myfav_hc_pane_t3

0x5f79,	// (0x00015158) main_myfav_hc_pane_t4_ParamLimits

0x5f79,	// (0x00015158) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001eb33) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001eb33) main_myfav_hc_pane_t

0xc268,	// (0x0001b447) bg_myfav_hc_instruction_pane_g1

0xd1a5,	// (0x0001c384) cell_myfav_contact_pane_g1_ParamLimits

0xd1a5,	// (0x0001c384) cell_myfav_contact_pane_g1

0xd1a5,	// (0x0001c384) cell_myfav_contact_pane_g2_ParamLimits

0xd1a5,	// (0x0001c384) cell_myfav_contact_pane_g2

0xd1b1,	// (0x0001c390) cell_myfav_contact_pane_g3_ParamLimits

0xd1b1,	// (0x0001c390) cell_myfav_contact_pane_g3

0xc5a1,	// (0x0001b780) cell_myfav_contact_pane_g4_ParamLimits

0xc5a1,	// (0x0001b780) cell_myfav_contact_pane_g4

0xd1be,	// (0x0001c39d) cell_myfav_contact_pane_g5_ParamLimits

0xd1be,	// (0x0001c39d) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001eb3e) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001eb3e) cell_myfav_contact_pane_g

0x5f4a,	// (0x00015129) main_myfav_hc_pane_g3_ParamLimits

0x5f4a,	// (0x00015129) main_myfav_hc_pane_g3

0x0206,	// (0x0000f3e5) popup_adpt_find_window

0x5fa1,	// (0x00015180) afind_page_pane_ParamLimits

0x5fa1,	// (0x00015180) afind_page_pane

0x5fb6,	// (0x00015195) aid_size_cell_afind_ParamLimits

0x5fb6,	// (0x00015195) aid_size_cell_afind

0x5fd4,	// (0x000151b3) bg_popup_sub_pane_cp09_ParamLimits

0x5fd4,	// (0x000151b3) bg_popup_sub_pane_cp09

0x5fe1,	// (0x000151c0) find_pane_cp01_ParamLimits

0x5fe1,	// (0x000151c0) find_pane_cp01

0xd1ca,	// (0x0001c3a9) grid_afind_control_pane_ParamLimits

0xd1ca,	// (0x0001c3a9) grid_afind_control_pane

0x5fee,	// (0x000151cd) grid_afind_pane_ParamLimits

0x5fee,	// (0x000151cd) grid_afind_pane

0x600d,	// (0x000151ec) cell_afind_pane_ParamLimits

0x600d,	// (0x000151ec) cell_afind_pane

0xc268,	// (0x0001b447) afind_page_pane_g1

0x606e,	// (0x0001524d) afind_page_pane_g2

0x6077,	// (0x00015256) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001eb49) afind_page_pane_g

0x6080,	// (0x0001525f) afind_page_pane_t1

0xd214,	// (0x0001c3f3) cell_afind_grid_control_pane_ParamLimits

0xd214,	// (0x0001c3f3) cell_afind_grid_control_pane

0xce3c,	// (0x0001c01b) bg_button_pane_cp69_ParamLimits

0xce3c,	// (0x0001c01b) bg_button_pane_cp69

0x60a0,	// (0x0001527f) cell_afind_pane_g1_ParamLimits

0x60a0,	// (0x0001527f) cell_afind_pane_g1

0x60ad,	// (0x0001528c) cell_afind_pane_t1_ParamLimits

0x60ad,	// (0x0001528c) cell_afind_pane_t1

0x9dcb,	// (0x00018faa) bg_button_pane_cp72

0xd223,	// (0x0001c402) cell_afind_grid_control_pane_g1

0x3069,	// (0x00012248) aid_image_placing_area_ParamLimits

0x3069,	// (0x00012248) aid_image_placing_area

0xc8d1,	// (0x0001bab0) field_vitu_entry_pane_g1_ParamLimits

0xc8d1,	// (0x0001bab0) field_vitu_entry_pane_g1

0xc8dd,	// (0x0001babc) field_vitu_entry_pane_g2_ParamLimits

0xc8dd,	// (0x0001babc) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001e9fa) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001e9fa) field_vitu_entry_pane_g

0x5192,	// (0x00014371) cell_vitu_itu_pane_g1_ParamLimits

0x51e2,	// (0x000143c1) cell_vitu_itu_pane_t3_ParamLimits

0x51e2,	// (0x000143c1) cell_vitu_itu_pane_t3

0xcdec,	// (0x0001bfcb) mp4_progress_pane_t1_ParamLimits

0xce05,	// (0x0001bfe4) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001ea8f) mp4_progress_pane_t_ParamLimits

0xce1e,	// (0x0001bffd) mup_progress_pane_cp04_ParamLimits

0x5f8d,	// (0x0001516c) main_myfav_hc_pane_t5_ParamLimits

0x5f8d,	// (0x0001516c) main_myfav_hc_pane_t5

0x9358,	// (0x00018537) aid_zoom_text_primary

0x0206,	// (0x0000f3e5) popup_adpt_find_window_ParamLimits

0x93a2,	// (0x00018581) main_cam_set_pane

0x590f,	// (0x00014aee) cam4_zoom_pane_ParamLimits

0x590f,	// (0x00014aee) cam4_zoom_pane

0x60bf,	// (0x0001529e) main_cam_set_pane_g1_ParamLimits

0x60bf,	// (0x0001529e) main_cam_set_pane_g1

0x60cd,	// (0x000152ac) main_cam_set_pane_g2_ParamLimits

0x60cd,	// (0x000152ac) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001eb50) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001eb50) main_cam_set_pane_g

0x60ee,	// (0x000152cd) main_cam_set_pane_t1_ParamLimits

0x60ee,	// (0x000152cd) main_cam_set_pane_t1

0x6109,	// (0x000152e8) main_cset_listscroll_pane_ParamLimits

0x6109,	// (0x000152e8) main_cset_listscroll_pane

0x6129,	// (0x00015308) main_cset_slider_pane_ParamLimits

0x6129,	// (0x00015308) main_cset_slider_pane

0xd234,	// (0x0001c413) main_cset_list_pane_ParamLimits

0xd234,	// (0x0001c413) main_cset_list_pane

0xd244,	// (0x0001c423) scroll_pane_cp028

0x614f,	// (0x0001532e) aid_area_touch_slider

0x616b,	// (0x0001534a) cset_slider_pane

0x6195,	// (0x00015374) main_cset_slider_pane_g1

0x61aa,	// (0x00015389) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001eb55) main_cset_slider_pane_g

0xd27d,	// (0x0001c45c) main_cset_slider_pane_t1

0x6266,	// (0x00015445) main_cset_slider_pane_t2

0x6280,	// (0x0001545f) main_cset_slider_pane_t3

0x629a,	// (0x00015479) main_cset_slider_pane_t4

0x62b4,	// (0x00015493) main_cset_slider_pane_t5

0x62ce,	// (0x000154ad) main_cset_slider_pane_t6

0x62e3,	// (0x000154c2) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001eb7a) main_cset_slider_pane_t

0x63e7,	// (0x000155c6) cset_list_set_pane_ParamLimits

0x63e7,	// (0x000155c6) cset_list_set_pane

0x63fa,	// (0x000155d9) aid_position_infowindow_above

0x6402,	// (0x000155e1) aid_position_infowindow_below

0x640a,	// (0x000155e9) cset_list_set_pane_g1_ParamLimits

0x640a,	// (0x000155e9) cset_list_set_pane_g1

0x6416,	// (0x000155f5) cset_list_set_pane_g3_ParamLimits

0x6416,	// (0x000155f5) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001eb99) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001eb99) cset_list_set_pane_g

0x6425,	// (0x00015604) cset_list_set_pane_t1_ParamLimits

0x6425,	// (0x00015604) cset_list_set_pane_t1

0x93a2,	// (0x00018581) list_highlight_pane_cp021_ParamLimits

0x93a2,	// (0x00018581) list_highlight_pane_cp021

0xa9ec,	// (0x00019bcb) cset_slider_pane_g1

0xa9fe,	// (0x00019bdd) cset_slider_pane_g2

0xa9f5,	// (0x00019bd4) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001eb9e) cset_slider_pane_g

0xd31d,	// (0x0001c4fc) aid_area_touch_cam4_zoom

0xd325,	// (0x0001c504) cam4_zoom_cont_pane

0xd32d,	// (0x0001c50c) cam4_zoom_pane_g1

0xd335,	// (0x0001c514) cam4_zoom_pane_g2

0x643a,	// (0x00015619) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001eba5) cam4_zoom_pane_g

0xd33d,	// (0x0001c51c) cam4_zoom_cont_pane_g1

0xd346,	// (0x0001c525) cam4_zoom_cont_pane_g2

0xd34f,	// (0x0001c52e) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001ebac) cam4_zoom_cont_pane_g

0x57cf,	// (0x000149ae) call4_image_pane_ParamLimits

0x57cf,	// (0x000149ae) call4_image_pane

0xce7a,	// (0x0001c059) call4_windows_conf_pane_ParamLimits

0xceb9,	// (0x0001c098) popup_call4_audio_in_window_ParamLimits

0xceb9,	// (0x0001c098) popup_call4_audio_in_window

0x9332,	// (0x00018511) bg_popup_call2_act_pane_cp02

0xcf2f,	// (0x0001c10e) call4_list_conf_pane

0xc268,	// (0x0001b447) call4_image_pane_g1

0xc268,	// (0x0001b447) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0001e8bb) call4_image_pane_g

0xd358,	// (0x0001c537) list_single_graphic_popup_conf4_pane_ParamLimits

0xd358,	// (0x0001c537) list_single_graphic_popup_conf4_pane

0x9332,	// (0x00018511) list_highlight_pane_cp022

0xd36b,	// (0x0001c54a) list_single_graphic_popup_conf4_pane_g1

0xa5b9,	// (0x00019798) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001ebb3) list_single_graphic_popup_conf4_pane_g

0xd373,	// (0x0001c552) list_single_graphic_popup_conf4_pane_t1

0x1429,	// (0x00010608) popup_vtel_slider_window_ParamLimits

0x1429,	// (0x00010608) popup_vtel_slider_window

0xce2a,	// (0x0001c009) dialer2_ne_pane_t2_ParamLimits

0xce2a,	// (0x0001c009) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001ea94) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001ea94) dialer2_ne_pane_t

0xc04b,	// (0x0001b22a) bg_popup_sub_pane_cp010_ParamLimits

0xc04b,	// (0x0001b22a) bg_popup_sub_pane_cp010

0x6442,	// (0x00015621) popup_vtel_slider_window_g1_ParamLimits

0x6442,	// (0x00015621) popup_vtel_slider_window_g1

0x6455,	// (0x00015634) popup_vtel_slider_window_g2_ParamLimits

0x6455,	// (0x00015634) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001ebb8) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001ebb8) popup_vtel_slider_window_g

0x64ab,	// (0x0001568a) vtel_slider_pane_ParamLimits

0x64ab,	// (0x0001568a) vtel_slider_pane

0x64cd,	// (0x000156ac) vtel_slider_pane_g1_ParamLimits

0x64cd,	// (0x000156ac) vtel_slider_pane_g1

0x64e1,	// (0x000156c0) vtel_slider_pane_g2_ParamLimits

0x64e1,	// (0x000156c0) vtel_slider_pane_g2

0x64f9,	// (0x000156d8) vtel_slider_pane_g3_ParamLimits

0x64f9,	// (0x000156d8) vtel_slider_pane_g3

0x64cd,	// (0x000156ac) vtel_slider_pane_g4_ParamLimits

0x64cd,	// (0x000156ac) vtel_slider_pane_g4

0x650f,	// (0x000156ee) vtel_slider_pane_g5_ParamLimits

0x650f,	// (0x000156ee) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001ebc1) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001ebc1) vtel_slider_pane_g

0x93a2,	// (0x00018581) main_gallery2_pane

0x5b0f,	// (0x00014cee) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b0f,	// (0x00014cee) aid_size_row_itut2_dropdow_list

0x5b9b,	// (0x00014d7a) grid_vitu2_function_top_pane_ParamLimits

0x5b9b,	// (0x00014d7a) grid_vitu2_function_top_pane

0x5c00,	// (0x00014ddf) popup_vitu2_dropdown_list_window_ParamLimits

0x5c00,	// (0x00014ddf) popup_vitu2_dropdown_list_window

0x5c29,	// (0x00014e08) popup_vitu2_match_list_window

0x6533,	// (0x00015712) cell_vitu2_function_top_pane_ParamLimits

0x6533,	// (0x00015712) cell_vitu2_function_top_pane

0x6551,	// (0x00015730) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6551,	// (0x00015730) cell_vitu2_function_top_pane_cp01

0x656f,	// (0x0001574e) cell_vitu2_function_top_wide_pane_ParamLimits

0x656f,	// (0x0001574e) cell_vitu2_function_top_wide_pane

0x93a2,	// (0x00018581) bg_button_pane_cp012

0x658d,	// (0x0001576c) cell_vitu2_function_top_pane_g1

0xd389,	// (0x0001c568) bg_button_pane_cp013_ParamLimits

0xd389,	// (0x0001c568) bg_button_pane_cp013

0x65a1,	// (0x00015780) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65a1,	// (0x00015780) cell_vitu2_function_top_wide_pane_g1

0x93a2,	// (0x00018581) bg_popup_sub_pane_cp20

0x65b9,	// (0x00015798) list_vitu2_match_list_pane

0xd0f4,	// (0x0001c2d3) bg_popup_sub_pane_cp20_g1

0xd0fc,	// (0x0001c2db) bg_popup_sub_pane_cp20_g2

0x9fd2,	// (0x000191b1) bg_popup_sub_pane_cp20_g3

0xd104,	// (0x0001c2e3) bg_popup_sub_pane_cp20_g4

0x9fb2,	// (0x00019191) bg_popup_sub_pane_cp20_g5

0xd3a5,	// (0x0001c584) bg_popup_sub_pane_cp20_g6

0xd114,	// (0x0001c2f3) bg_popup_sub_pane_cp20_g7

0xd11c,	// (0x0001c2fb) bg_popup_sub_pane_cp20_g8

0xd124,	// (0x0001c303) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001ebcc) bg_popup_sub_pane_cp20_g

0xd3ad,	// (0x0001c58c) list_vitu2_match_list_item_pane_ParamLimits

0xd3ad,	// (0x0001c58c) list_vitu2_match_list_item_pane

0xd3bf,	// (0x0001c59e) list_vitu2_match_list_item_pane_t1

0x9332,	// (0x00018511) bg_popup_sub_pane_cp21

0xa44a,	// (0x00019629) grid_vitu2_dropdown_list_pane

0x6624,	// (0x00015803) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6624,	// (0x00015803) cell_vitu2_dropdown_list_char_pane

0x6645,	// (0x00015824) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6645,	// (0x00015824) cell_vitu2_dropdown_list_ctrl_pane

0xd3cd,	// (0x0001c5ac) cell_vitu2_dropdown_list_char_pane_g1

0xd3d6,	// (0x0001c5b5) cell_vitu2_dropdown_list_char_pane_g2

0xd3df,	// (0x0001c5be) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001ebe9) cell_vitu2_dropdown_list_char_pane_g

0x6671,	// (0x00015850) cell_vitu2_dropdown_list_char_pane_t1

0x667f,	// (0x0001585e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x667f,	// (0x0001585e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x668f,	// (0x0001586e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x668f,	// (0x0001586e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66a0,	// (0x0001587f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66a0,	// (0x0001587f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66b0,	// (0x0001588f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66b0,	// (0x0001588f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc4c8,	// (0x0001b6a7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc4c8,	// (0x0001b6a7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001ebf0) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001ebf0) cell_vitu2_dropdown_list_ctrl_pane_g

0x66cc,	// (0x000158ab) aid_size_cell_gallery2_ParamLimits

0x66cc,	// (0x000158ab) aid_size_cell_gallery2

0x66ea,	// (0x000158c9) grid_gallery2_pane_ParamLimits

0x66ea,	// (0x000158c9) grid_gallery2_pane

0x6704,	// (0x000158e3) scroll_pane_cp029_ParamLimits

0x6704,	// (0x000158e3) scroll_pane_cp029

0x6710,	// (0x000158ef) cell_gallery2_pane_ParamLimits

0x6710,	// (0x000158ef) cell_gallery2_pane

0xd3e8,	// (0x0001c5c7) cell_gallery2_pane_g2

0x676c,	// (0x0001594b) cell_gallery2_pane_g3

0xd3f0,	// (0x0001c5cf) cell_gallery2_pane_g4

0xd3f8,	// (0x0001c5d7) cell_gallery2_pane_g5

0xa896,	// (0x00019a75) grid_highlight_pane_cp10

0x5c29,	// (0x00014e08) popup_vitu2_match_list_window_ParamLimits

0x5c3e,	// (0x00014e1d) popup_vitu2_query_window_ParamLimits

0x5c3e,	// (0x00014e1d) popup_vitu2_query_window

0x9332,	// (0x00018511) bg_vitu2_candi_button_pane

0xd3cd,	// (0x0001c5ac) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3d6,	// (0x0001c5b5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3df,	// (0x0001c5be) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6774,	// (0x00015953) bg_button_pane_cp015

0x6788,	// (0x00015967) bg_button_pane_cp016

0x679b,	// (0x0001597a) bg_button_pane_cp017

0xbd4b,	// (0x0001af2a) bg_popup_sub_pane_cp22

0xd400,	// (0x0001c5df) popup_vitu2_query_window_g1

0x67e0,	// (0x000159bf) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001ebfb) popup_vitu2_query_window_g

0x67ff,	// (0x000159de) popup_vitu2_query_window_t1_ParamLimits

0x67ff,	// (0x000159de) popup_vitu2_query_window_t1

0x6834,	// (0x00015a13) popup_vitu2_query_window_t2_ParamLimits

0x6834,	// (0x00015a13) popup_vitu2_query_window_t2

0x6846,	// (0x00015a25) popup_vitu2_query_window_t3_ParamLimits

0x6846,	// (0x00015a25) popup_vitu2_query_window_t3

0x686e,	// (0x00015a4d) popup_vitu2_query_window_t4_ParamLimits

0x686e,	// (0x00015a4d) popup_vitu2_query_window_t4

0x688f,	// (0x00015a6e) popup_vitu2_query_window_t5_ParamLimits

0x688f,	// (0x00015a6e) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001ec02) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001ec02) popup_vitu2_query_window_t

0xd22c,	// (0x0001c40b) main_cset_text_pane

0x614f,	// (0x0001532e) aid_area_touch_slider_ParamLimits

0x616b,	// (0x0001534a) cset_slider_pane_ParamLimits

0x6195,	// (0x00015374) main_cset_slider_pane_g1_ParamLimits

0x61aa,	// (0x00015389) main_cset_slider_pane_g2_ParamLimits

0xd24d,	// (0x0001c42c) main_cset_slider_pane_g3_ParamLimits

0xd24d,	// (0x0001c42c) main_cset_slider_pane_g3

0x61bf,	// (0x0001539e) main_cset_slider_pane_g4_ParamLimits

0x61bf,	// (0x0001539e) main_cset_slider_pane_g4

0x61ce,	// (0x000153ad) main_cset_slider_pane_g5_ParamLimits

0x61ce,	// (0x000153ad) main_cset_slider_pane_g5

0x61da,	// (0x000153b9) main_cset_slider_pane_g6_ParamLimits

0x61da,	// (0x000153b9) main_cset_slider_pane_g6

0xf976,	// (0x0001eb55) main_cset_slider_pane_g_ParamLimits

0xd27d,	// (0x0001c45c) main_cset_slider_pane_t1_ParamLimits

0x6266,	// (0x00015445) main_cset_slider_pane_t2_ParamLimits

0x6280,	// (0x0001545f) main_cset_slider_pane_t3_ParamLimits

0x629a,	// (0x00015479) main_cset_slider_pane_t4_ParamLimits

0x62b4,	// (0x00015493) main_cset_slider_pane_t5_ParamLimits

0x62ce,	// (0x000154ad) main_cset_slider_pane_t6_ParamLimits

0x62e3,	// (0x000154c2) main_cset_slider_pane_t7_ParamLimits

0x630d,	// (0x000154ec) main_cset_slider_pane_t8_ParamLimits

0x630d,	// (0x000154ec) main_cset_slider_pane_t8

0x6335,	// (0x00015514) main_cset_slider_pane_t9_ParamLimits

0x6335,	// (0x00015514) main_cset_slider_pane_t9

0x635d,	// (0x0001553c) main_cset_slider_pane_t10_ParamLimits

0x635d,	// (0x0001553c) main_cset_slider_pane_t10

0x6385,	// (0x00015564) main_cset_slider_pane_t11_ParamLimits

0x6385,	// (0x00015564) main_cset_slider_pane_t11

0x63ad,	// (0x0001558c) main_cset_slider_pane_t12_ParamLimits

0x63ad,	// (0x0001558c) main_cset_slider_pane_t12

0x63ca,	// (0x000155a9) main_cset_slider_pane_t13_ParamLimits

0x63ca,	// (0x000155a9) main_cset_slider_pane_t13

0xf99b,	// (0x0001eb7a) main_cset_slider_pane_t_ParamLimits

0x9332,	// (0x00018511) bg_popup_sub_pane_cp011

0xd40c,	// (0x0001c5eb) main_cset_text_pane_g1

0xd414,	// (0x0001c5f3) main_cset_text_pane_t1

0xd422,	// (0x0001c601) main_cset_text_pane_t2

0xd430,	// (0x0001c60f) main_cset_text_pane_t3

0xd43e,	// (0x0001c61d) main_cset_text_pane_t4

0xd44c,	// (0x0001c62b) main_cset_text_pane_t5

0xd45a,	// (0x0001c639) main_cset_text_pane_t6

0xd468,	// (0x0001c647) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001ec11) main_cset_text_pane_t

0x9332,	// (0x00018511) main_cam4_burst_pane

0x9332,	// (0x00018511) main_cam5_pane

0x608e,	// (0x0001526d) bg_button_pane_cp019

0x6097,	// (0x00015276) bg_button_pane_cp020

0xd259,	// (0x0001c438) main_cset_slider_pane_g7_ParamLimits

0xd259,	// (0x0001c438) main_cset_slider_pane_g7

0xd265,	// (0x0001c444) main_cset_slider_pane_g8_ParamLimits

0xd265,	// (0x0001c444) main_cset_slider_pane_g8

0x61ee,	// (0x000153cd) main_cset_slider_pane_g9_ParamLimits

0x61ee,	// (0x000153cd) main_cset_slider_pane_g9

0x61fa,	// (0x000153d9) main_cset_slider_pane_g10_ParamLimits

0x61fa,	// (0x000153d9) main_cset_slider_pane_g10

0x6206,	// (0x000153e5) main_cset_slider_pane_g11_ParamLimits

0x6206,	// (0x000153e5) main_cset_slider_pane_g11

0x6212,	// (0x000153f1) main_cset_slider_pane_g12_ParamLimits

0x6212,	// (0x000153f1) main_cset_slider_pane_g12

0x621e,	// (0x000153fd) main_cset_slider_pane_g13_ParamLimits

0x621e,	// (0x000153fd) main_cset_slider_pane_g13

0x622a,	// (0x00015409) main_cset_slider_pane_g14_ParamLimits

0x622a,	// (0x00015409) main_cset_slider_pane_g14

0x6236,	// (0x00015415) main_cset_slider_pane_g15_ParamLimits

0x6236,	// (0x00015415) main_cset_slider_pane_g15

0xd2ab,	// (0x0001c48a) main_cset_slider_pane_t14_ParamLimits

0xd2ab,	// (0x0001c48a) main_cset_slider_pane_t14

0xd2e4,	// (0x0001c4c3) main_cset_slider_pane_t15_ParamLimits

0xd2e4,	// (0x0001c4c3) main_cset_slider_pane_t15

0x6906,	// (0x00015ae5) aid_cam4_burst_size_cell_ParamLimits

0x6906,	// (0x00015ae5) aid_cam4_burst_size_cell

0x6926,	// (0x00015b05) grid_cam4_burst_pane_ParamLimits

0x6926,	// (0x00015b05) grid_cam4_burst_pane

0x695e,	// (0x00015b3d) linegrid_cam4_burst_pane_ParamLimits

0x695e,	// (0x00015b3d) linegrid_cam4_burst_pane

0xd476,	// (0x0001c655) scroll_pane_cp30_ParamLimits

0xd476,	// (0x0001c655) scroll_pane_cp30

0x6984,	// (0x00015b63) cell_cam4_burst_pane_ParamLimits

0x6984,	// (0x00015b63) cell_cam4_burst_pane

0xd482,	// (0x0001c661) linegrid_cam4_burst_pane_g1_ParamLimits

0xd482,	// (0x0001c661) linegrid_cam4_burst_pane_g1

0x69d1,	// (0x00015bb0) linegrid_cam4_burst_pane_g2_ParamLimits

0x69d1,	// (0x00015bb0) linegrid_cam4_burst_pane_g2

0xd48f,	// (0x0001c66e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd48f,	// (0x0001c66e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001ec20) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001ec20) linegrid_cam4_burst_pane_g

0x69e2,	// (0x00015bc1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x69e2,	// (0x00015bc1) linegrid_cam4_burst_pane_g3_copy1

0xd49c,	// (0x0001c67b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd49c,	// (0x0001c67b) linegrid_cam4_burst_pane_g4

0x69fc,	// (0x00015bdb) linegrid_cam4_burst_pane_g5_ParamLimits

0x69fc,	// (0x00015bdb) linegrid_cam4_burst_pane_g5

0x6a0d,	// (0x00015bec) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a0d,	// (0x00015bec) linegrid_cam4_burst_pane_g6

0xd4a9,	// (0x0001c688) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4a9,	// (0x0001c688) linegrid_cam4_burst_pane_g7

0x6a24,	// (0x00015c03) cell_cam4_burst_pane_g1

0xd4c2,	// (0x0001c6a1) main_cam5_pane_t1_ParamLimits

0xd4c2,	// (0x0001c6a1) main_cam5_pane_t1

0xd4d4,	// (0x0001c6b3) main_cam5_pane_t2_ParamLimits

0xd4d4,	// (0x0001c6b3) main_cam5_pane_t2

0xd4e6,	// (0x0001c6c5) main_cam5_pane_t3_ParamLimits

0xd4e6,	// (0x0001c6c5) main_cam5_pane_t3

0xd4f8,	// (0x0001c6d7) main_cam5_pane_t4_ParamLimits

0xd4f8,	// (0x0001c6d7) main_cam5_pane_t4

0xd510,	// (0x0001c6ef) main_cam5_pane_t5_ParamLimits

0xd510,	// (0x0001c6ef) main_cam5_pane_t5

0xd524,	// (0x0001c703) main_cam5_pane_t6_ParamLimits

0xd524,	// (0x0001c703) main_cam5_pane_t6

0xd538,	// (0x0001c717) main_cam5_pane_t7_ParamLimits

0xd538,	// (0x0001c717) main_cam5_pane_t7

0xd54a,	// (0x0001c729) main_cam5_pane_t8_ParamLimits

0xd54a,	// (0x0001c729) main_cam5_pane_t8

0xd566,	// (0x0001c745) main_cam5_pane_t9_ParamLimits

0xd566,	// (0x0001c745) main_cam5_pane_t9

0xd578,	// (0x0001c757) main_cam5_pane_t10_ParamLimits

0xd578,	// (0x0001c757) main_cam5_pane_t10

0xd58a,	// (0x0001c769) main_cam5_pane_t11_ParamLimits

0xd58a,	// (0x0001c769) main_cam5_pane_t11

0xd59c,	// (0x0001c77b) main_cam5_pane_t12_ParamLimits

0xd59c,	// (0x0001c77b) main_cam5_pane_t12

0xd5b1,	// (0x0001c790) main_cam5_pane_t13_ParamLimits

0xd5b1,	// (0x0001c790) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001ec2c) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001ec2c) main_cam5_pane_t

0x0288,	// (0x0000f467) popup_scut_keymap_window_ParamLimits

0x0288,	// (0x0000f467) popup_scut_keymap_window

0x6a39,	// (0x00015c18) aid_size_cell_brow_shortcut

0xa896,	// (0x00019a75) bg_popup_window_pane_cp010

0x6a45,	// (0x00015c24) grid_scut_pane

0x6a51,	// (0x00015c30) cell_scut_pane_ParamLimits

0x6a51,	// (0x00015c30) cell_scut_pane

0x6a68,	// (0x00015c47) cell_scut_pane_g1

0xd5ce,	// (0x0001c7ad) cell_scut_pane_t1

0xd5dd,	// (0x0001c7bc) cell_scut_pane_t2

0x6a71,	// (0x00015c50) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001ec47) cell_scut_pane_t

0x467d,	// (0x0001385c) main_mup3_pane_g8_ParamLimits

0x467d,	// (0x0001385c) main_mup3_pane_g8

0x5b27,	// (0x00014d06) area_vitu2_query_pane_ParamLimits

0x5b27,	// (0x00014d06) area_vitu2_query_pane

0x67ae,	// (0x0001598d) input_focus_pane_cp08

0xd5ec,	// (0x0001c7cb) area_vitu2_query_pane_g1

0x6a7f,	// (0x00015c5e) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001ec4e) area_vitu2_query_pane_g

0x6a90,	// (0x00015c6f) area_vitu2_query_pane_t1_ParamLimits

0x6a90,	// (0x00015c6f) area_vitu2_query_pane_t1

0x6aa4,	// (0x00015c83) area_vitu2_query_pane_t2_ParamLimits

0x6aa4,	// (0x00015c83) area_vitu2_query_pane_t2

0x6ab8,	// (0x00015c97) area_vitu2_query_pane_t3_ParamLimits

0x6ab8,	// (0x00015c97) area_vitu2_query_pane_t3

0xd5f8,	// (0x0001c7d7) area_vitu2_query_pane_t4_ParamLimits

0xd5f8,	// (0x0001c7d7) area_vitu2_query_pane_t4

0xd620,	// (0x0001c7ff) area_vitu2_query_pane_t5_ParamLimits

0xd620,	// (0x0001c7ff) area_vitu2_query_pane_t5

0xd648,	// (0x0001c827) area_vitu2_query_pane_t6_ParamLimits

0xd648,	// (0x0001c827) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001ec53) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001ec53) area_vitu2_query_pane_t

0x6ae0,	// (0x00015cbf) bg_button_pane_cp018

0x6aee,	// (0x00015ccd) bg_button_pane_cp021

0x6afa,	// (0x00015cd9) bg_button_pane_cp022

0x6b0b,	// (0x00015cea) input_focus_pane_cp09

0xa6dd,	// (0x000198bc) aid_size_touch_mv_arrow_left

0xa708,	// (0x000198e7) aid_size_touch_mv_arrow_right

0x624e,	// (0x0001542d) main_cset_slider_pane_g16_ParamLimits

0x624e,	// (0x0001542d) main_cset_slider_pane_g16

0x625a,	// (0x00015439) main_cset_slider_pane_g17_ParamLimits

0x625a,	// (0x00015439) main_cset_slider_pane_g17

0x6a24,	// (0x00015c03) cell_cam4_burst_pane_g1_ParamLimits

0x9332,	// (0x00018511) compa_mode_pane

0x6465,	// (0x00015644) popup_vtel_slider_window_g3_ParamLimits

0x6465,	// (0x00015644) popup_vtel_slider_window_g3

0x647c,	// (0x0001565b) popup_vtel_slider_window_g4_ParamLimits

0x647c,	// (0x0001565b) popup_vtel_slider_window_g4

0x6493,	// (0x00015672) popup_vtel_slider_window_t1_ParamLimits

0x6493,	// (0x00015672) popup_vtel_slider_window_t1

0x9332,	// (0x00018511) main_cl_pane

0xbd73,	// (0x0001af52) popup_imed_adjust2_window_ParamLimits

0xbd4b,	// (0x0001af2a) bg_tb_trans_pane_cp05_ParamLimits

0xc7fd,	// (0x0001b9dc) popup_imed_adjust2_window_g1_ParamLimits

0xc80c,	// (0x0001b9eb) popup_imed_adjust2_window_g2_ParamLimits

0xc80c,	// (0x0001b9eb) popup_imed_adjust2_window_g2

0xc818,	// (0x0001b9f7) popup_imed_adjust2_window_g3_ParamLimits

0xc818,	// (0x0001b9f7) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001e9be) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001e9be) popup_imed_adjust2_window_g

0xc824,	// (0x0001ba03) popup_imed_adjust2_window_t1_ParamLimits

0xc83c,	// (0x0001ba1b) slider_imed_adjust_pane_ParamLimits

0xc850,	// (0x0001ba2f) slider_imed_adjust_pane_g1_ParamLimits

0xc860,	// (0x0001ba3f) slider_imed_adjust_pane_g2_ParamLimits

0xc870,	// (0x0001ba4f) slider_imed_adjust_pane_g3_ParamLimits

0xc881,	// (0x0001ba60) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001e9c5) slider_imed_adjust_pane_g_ParamLimits

0x58b0,	// (0x00014a8f) aid_touch_area_cam4_ParamLimits

0x58b0,	// (0x00014a8f) aid_touch_area_cam4

0xcf73,	// (0x0001c152) battery_pane_cp01

0x597f,	// (0x00014b5e) main_camera4_pane_g6_ParamLimits

0x597f,	// (0x00014b5e) main_camera4_pane_g6

0x59a9,	// (0x00014b88) main_camera4_pane_t2_ParamLimits

0x59a9,	// (0x00014b88) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001eac8) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001eac8) main_camera4_pane_t

0x59de,	// (0x00014bbd) aid_touch_area_vid4_ParamLimits

0x59de,	// (0x00014bbd) aid_touch_area_vid4

0x5a32,	// (0x00014c11) main_video4_pane_g5_ParamLimits

0x5a32,	// (0x00014c11) main_video4_pane_g5

0x5a57,	// (0x00014c36) vid4_progress_pane_ParamLimits

0x5a57,	// (0x00014c36) vid4_progress_pane

0xd271,	// (0x0001c450) main_cset_slider_pane_g18_ParamLimits

0xd271,	// (0x0001c450) main_cset_slider_pane_g18

0xd4b6,	// (0x0001c695) cell_cam4_burst_pane_g2_ParamLimits

0xd4b6,	// (0x0001c695) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001ec27) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001ec27) cell_cam4_burst_pane_g

0x9b24,	// (0x00018d03) bg_cl_pane_ParamLimits

0x9b24,	// (0x00018d03) bg_cl_pane

0x6b1c,	// (0x00015cfb) cl_header_pane_ParamLimits

0x6b1c,	// (0x00015cfb) cl_header_pane

0x6b30,	// (0x00015d0f) cl_listscroll_pane_ParamLimits

0x6b30,	// (0x00015d0f) cl_listscroll_pane

0xd694,	// (0x0001c873) bg_cl_pane_g1

0xd69c,	// (0x0001c87b) bg_cl_pane_g2

0xd6a4,	// (0x0001c883) bg_cl_pane_g3

0xd6ac,	// (0x0001c88b) bg_cl_pane_g4

0xd6b4,	// (0x0001c893) bg_cl_pane_g5

0xd6bc,	// (0x0001c89b) bg_cl_pane_g6

0xd6c4,	// (0x0001c8a3) bg_cl_pane_g7

0xd6cc,	// (0x0001c8ab) bg_cl_pane_g8

0xd6d4,	// (0x0001c8b3) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001ec62) bg_cl_pane_g

0x6b40,	// (0x00015d1f) aid_height_cl_leading_ParamLimits

0x6b40,	// (0x00015d1f) aid_height_cl_leading

0x6b4c,	// (0x00015d2b) aid_height_cl_text_ParamLimits

0x6b4c,	// (0x00015d2b) aid_height_cl_text

0x93a2,	// (0x00018581) bg_cl_header_pane_ParamLimits

0x93a2,	// (0x00018581) bg_cl_header_pane

0x6b6b,	// (0x00015d4a) cl_header_pane_g1_ParamLimits

0x6b6b,	// (0x00015d4a) cl_header_pane_g1

0x6b81,	// (0x00015d60) cl_header_pane_t1_ParamLimits

0x6b81,	// (0x00015d60) cl_header_pane_t1

0xd6dc,	// (0x0001c8bb) cl_list_pane

0xd244,	// (0x0001c423) hc_scroll_pane_cp01

0x9fb2,	// (0x00019191) bg_cl_header_pane_g1

0xd0f4,	// (0x0001c2d3) bg_cl_header_pane_g2

0x9fd2,	// (0x000191b1) bg_cl_header_pane_g3

0xd104,	// (0x0001c2e3) bg_cl_header_pane_g4

0xd0fc,	// (0x0001c2db) bg_cl_header_pane_g5

0xd3a5,	// (0x0001c584) bg_cl_header_pane_g6

0xd11c,	// (0x0001c2fb) bg_cl_header_pane_g7

0xd124,	// (0x0001c303) bg_cl_header_pane_g8

0xd114,	// (0x0001c2f3) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001ec75) bg_cl_header_pane_g

0x6b9a,	// (0x00015d79) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b9a,	// (0x00015d79) hc_cl_list_double_graphic_heading_pane

0x6bab,	// (0x00015d8a) hc_cl_list_single_graphic_pane_ParamLimits

0x6bab,	// (0x00015d8a) hc_cl_list_single_graphic_pane

0x6bc4,	// (0x00015da3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6bc4,	// (0x00015da3) hc_cl_list_single_graphic_pane_g1

0x6bd0,	// (0x00015daf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6bd0,	// (0x00015daf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001ec88) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001ec88) hc_cl_list_single_graphic_pane_g

0x6be4,	// (0x00015dc3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6be4,	// (0x00015dc3) hc_cl_list_single_graphic_pane_t1

0x6bc4,	// (0x00015da3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6bc4,	// (0x00015da3) hc_cl_list_double_graphic_heading_pane_g1

0x6bf9,	// (0x00015dd8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6bf9,	// (0x00015dd8) hc_cl_list_double_graphic_heading_pane_g2

0x6c0d,	// (0x00015dec) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c0d,	// (0x00015dec) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001ec8d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001ec8d) hc_cl_list_double_graphic_heading_pane_g

0x6c21,	// (0x00015e00) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c21,	// (0x00015e00) hc_cl_list_double_graphic_heading_pane_t1

0x6c36,	// (0x00015e15) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c36,	// (0x00015e15) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001ec94) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001ec94) hc_cl_list_double_graphic_heading_pane_t

0xd6ed,	// (0x0001c8cc) vid4_progress_pane_g1

0xd6fd,	// (0x0001c8dc) vid4_progress_pane_g2

0x6c4b,	// (0x00015e2a) vid4_progress_pane_g3

0xd70d,	// (0x0001c8ec) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001ec99) vid4_progress_pane_g

0x6c5d,	// (0x00015e3c) vid4_progress_pane_t1

0xd72b,	// (0x0001c90a) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001eca4) vid4_progress_pane_t

0x6c73,	// (0x00015e52) wait_bar_pane_cp07

0xc059,	// (0x0001b238) blid_firmament_pane_ParamLimits

0xc09c,	// (0x0001b27b) popup_blid_sat_info2_window_g1

0xc0c0,	// (0x0001b29f) popup_blid_sat_info2_window_t3

0xc0ce,	// (0x0001b2ad) popup_blid_sat_info2_window_t4

0xc0dc,	// (0x0001b2bb) popup_blid_sat_info2_window_t5

0xc0ea,	// (0x0001b2c9) popup_blid_sat_info2_window_t6

0xc0fa,	// (0x0001b2d9) popup_blid_sat_info2_window_t7

0xc108,	// (0x0001b2e7) popup_blid_sat_info2_window_t8

0xc116,	// (0x0001b2f5) popup_blid_sat_info2_window_t9

0xc124,	// (0x0001b303) popup_blid_sat_info2_window_t10

0xc1e8,	// (0x0001b3c7) aid_firma_cardinal_ParamLimits

0xc1fc,	// (0x0001b3db) blid_firmament_pane_t1_ParamLimits

0xc213,	// (0x0001b3f2) blid_firmament_pane_t2_ParamLimits

0xc22a,	// (0x0001b409) blid_firmament_pane_t3_ParamLimits

0xc241,	// (0x0001b420) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0001e8b2) blid_firmament_pane_t_ParamLimits

0xc258,	// (0x0001b437) blid_sat_info_pane_ParamLimits

0x93a2,	// (0x00018581) main_cam_set_pane_ParamLimits

0x4f41,	// (0x00014120) aid_size_cell_colour_35_ParamLimits

0x4f61,	// (0x00014140) aid_size_cell_colour_112_ParamLimits

0x4f81,	// (0x00014160) aid_size_cell_effect_ParamLimits

0xbd4b,	// (0x0001af2a) bg_tb_trans_pane_cp02_ParamLimits

0xa250,	// (0x0001942f) heading_imed_pane_ParamLimits

0x4fa1,	// (0x00014180) listscroll_imed_pane_ParamLimits

0xb371,	// (0x0001a550) popup_call2_audio_first_window_g5_ParamLimits

0xb371,	// (0x0001a550) popup_call2_audio_first_window_g5

0x555b,	// (0x0001473a) aid_size_touch_image3_arrow_left_ParamLimits

0x555b,	// (0x0001473a) aid_size_touch_image3_arrow_left

0x5587,	// (0x00014766) aid_size_touch_image3_arrow_right_ParamLimits

0x5587,	// (0x00014766) aid_size_touch_image3_arrow_right

0xd740,	// (0x0001c91f) vid4_progress_pane_t3

0x52cd,	// (0x000144ac) main_hwr_training_symbol_option_pane_ParamLimits

0x52cd,	// (0x000144ac) main_hwr_training_symbol_option_pane

0xcaf3,	// (0x0001bcd2) popup_hwr_training_preview_window_ParamLimits

0xcaf3,	// (0x0001bcd2) popup_hwr_training_preview_window

0x52ed,	// (0x000144cc) hwr_training_navi_pane_g5_ParamLimits

0x52ed,	// (0x000144cc) hwr_training_navi_pane_g5

0xd0e2,	// (0x0001c2c1) popup_char_count_window

0x93a2,	// (0x00018581) bg_popup_sub_pane_cp20_ParamLimits

0x65b9,	// (0x00015798) list_vitu2_match_list_pane_ParamLimits

0x65c8,	// (0x000157a7) vitu2_page_scroll_pane_ParamLimits

0x65c8,	// (0x000157a7) vitu2_page_scroll_pane

0xd778,	// (0x0001c957) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd778,	// (0x0001c957) list_single_hwr_training_symbol_option_pane

0xd78b,	// (0x0001c96a) list_single_hwr_training_symbol_option_pane_g1

0xd793,	// (0x0001c972) list_single_hwr_training_symbol_option_pane_t1

0xd7a1,	// (0x0001c980) bg_button_pane_cp023

0xd7aa,	// (0x0001c989) bg_button_pane_cp024

0x6cb3,	// (0x00015e92) vitu2_page_scroll_pane_g1

0x6cbb,	// (0x00015e9a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001ecab) vitu2_page_scroll_pane_g

0x6cc3,	// (0x00015ea2) vitu2_page_scroll_pane_t1

0xc8ad,	// (0x0001ba8c) popup_char_count_window_g1

0xd7dd,	// (0x0001c9bc) popup_char_count_window_g2

0xd7e6,	// (0x0001c9c5) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001ecb0) popup_char_count_window_g

0xd7ef,	// (0x0001c9ce) popup_char_count_window_t1

0x9332,	// (0x00018511) main_vded2_pane

0xc7e9,	// (0x0001b9c8) aid_size_cell_imed_line

0xc7f3,	// (0x0001b9d2) grid_imed_line_width_pane

0xd029,	// (0x0001c208) vid4_indicators_pane_g4

0xd7fd,	// (0x0001c9dc) cell_imed_line_width_pane_ParamLimits

0xd7fd,	// (0x0001c9dc) cell_imed_line_width_pane

0xd811,	// (0x0001c9f0) cell_imed_line_width_pane_g1

0xd81a,	// (0x0001c9f9) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001ecb7) cell_imed_line_width_pane_g

0x6cd2,	// (0x00015eb1) main_vded2_pane_g1_ParamLimits

0x6cd2,	// (0x00015eb1) main_vded2_pane_g1

0x6ce8,	// (0x00015ec7) main_vded2_pane_g2_ParamLimits

0x6ce8,	// (0x00015ec7) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001ecbc) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001ecbc) main_vded2_pane_g

0x6cfa,	// (0x00015ed9) vded2_slider_pane_ParamLimits

0x6cfa,	// (0x00015ed9) vded2_slider_pane

0x6d0a,	// (0x00015ee9) aid_size_touch_vded2_end

0x6d14,	// (0x00015ef3) aid_size_touch_vded2_playhead

0xd822,	// (0x0001ca01) aid_size_touch_vded2_start

0xd82a,	// (0x0001ca09) vded2_slider_bg_pane

0xd833,	// (0x0001ca12) vded2_slider_pane_g1

0xd83c,	// (0x0001ca1b) vded2_slider_pane_g2

0x6d1e,	// (0x00015efd) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001ecc1) vded2_slider_pane_g

0xd844,	// (0x0001ca23) vded2_slider_bg_pane_g1

0xd84d,	// (0x0001ca2c) vded2_slider_bg_pane_g2

0xd856,	// (0x0001ca35) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001ecc8) vded2_slider_bg_pane_g

0x2cd2,	// (0x00011eb1) aid_postcard_touch_down_pane_ParamLimits

0x2cd2,	// (0x00011eb1) aid_postcard_touch_down_pane

0x2ce8,	// (0x00011ec7) aid_postcard_touch_up_pane_ParamLimits

0x2ce8,	// (0x00011ec7) aid_postcard_touch_up_pane

0x9332,	// (0x00018511) main_blid2_pane

0xbd59,	// (0x0001af38) popup_blid2_search_window

0x9332,	// (0x00018511) blid2_gps_pane

0x9332,	// (0x00018511) blid2_navig_pane

0x9332,	// (0x00018511) blid2_search_pane

0x9332,	// (0x00018511) blid2_tripm_pane

0x6d29,	// (0x00015f08) blid2_search_pane_g1_ParamLimits

0x6d29,	// (0x00015f08) blid2_search_pane_g1

0x6d41,	// (0x00015f20) blid2_search_pane_t1_ParamLimits

0x6d41,	// (0x00015f20) blid2_search_pane_t1

0x6d53,	// (0x00015f32) aid_size_cell_blid2_gps_ParamLimits

0x6d53,	// (0x00015f32) aid_size_cell_blid2_gps

0x6d6b,	// (0x00015f4a) blid2_gps_pane_g1_ParamLimits

0x6d6b,	// (0x00015f4a) blid2_gps_pane_g1

0x6d7f,	// (0x00015f5e) grid_blid2_satellite_pane_ParamLimits

0x6d7f,	// (0x00015f5e) grid_blid2_satellite_pane

0x6d99,	// (0x00015f78) blid2_navig_pane_g1_ParamLimits

0x6d99,	// (0x00015f78) blid2_navig_pane_g1

0x6da5,	// (0x00015f84) blid2_navig_pane_t1_ParamLimits

0x6da5,	// (0x00015f84) blid2_navig_pane_t1

0x6dc0,	// (0x00015f9f) blid2_navig_pane_t2_ParamLimits

0x6dc0,	// (0x00015f9f) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001eccf) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001eccf) blid2_navig_pane_t

0x6ddb,	// (0x00015fba) blid2_navig_ring_pane_ParamLimits

0x6ddb,	// (0x00015fba) blid2_navig_ring_pane

0x6df4,	// (0x00015fd3) blid2_speed_pane_ParamLimits

0x6df4,	// (0x00015fd3) blid2_speed_pane

0x6e00,	// (0x00015fdf) blid2_tripm_pane_g1_ParamLimits

0x6e00,	// (0x00015fdf) blid2_tripm_pane_g1

0x6e1b,	// (0x00015ffa) blid2_tripm_pane_g2_ParamLimits

0x6e1b,	// (0x00015ffa) blid2_tripm_pane_g2

0x6e2f,	// (0x0001600e) blid2_tripm_pane_g3_ParamLimits

0x6e2f,	// (0x0001600e) blid2_tripm_pane_g3

0x6e43,	// (0x00016022) blid2_tripm_pane_g4_ParamLimits

0x6e43,	// (0x00016022) blid2_tripm_pane_g4

0x6e57,	// (0x00016036) blid2_tripm_pane_g5_ParamLimits

0x6e57,	// (0x00016036) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001ecd4) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001ecd4) blid2_tripm_pane_g

0x6e7d,	// (0x0001605c) blid2_tripm_pane_t1_ParamLimits

0x6e7d,	// (0x0001605c) blid2_tripm_pane_t1

0x6e98,	// (0x00016077) blid2_tripm_pane_t2_ParamLimits

0x6e98,	// (0x00016077) blid2_tripm_pane_t2

0x6eb1,	// (0x00016090) blid2_tripm_pane_t3_ParamLimits

0x6eb1,	// (0x00016090) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001ece1) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001ece1) blid2_tripm_pane_t

0x6ef8,	// (0x000160d7) cell_blid2_satellite_pane_ParamLimits

0x6ef8,	// (0x000160d7) cell_blid2_satellite_pane

0x6f16,	// (0x000160f5) cell_blid2_satellite_pane_g1

0xd85f,	// (0x0001ca3e) cell_blid2_satellite_pane_t1

0xc268,	// (0x0001b447) blid2_speed_pane_g1

0xd86d,	// (0x0001ca4c) blid2_speed_pane_t1

0xd87b,	// (0x0001ca5a) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001ecea) blid2_speed_pane_t

0xc268,	// (0x0001b447) blid2_navig_ring_pane_g1

0x6f1f,	// (0x000160fe) blid2_navig_ring_pane_g2

0x6f27,	// (0x00016106) blid2_navig_ring_pane_g3

0x6f2f,	// (0x0001610e) blid2_navig_ring_pane_g4

0x6f37,	// (0x00016116) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001ecef) blid2_navig_ring_pane_g

0x9332,	// (0x00018511) bg_popup_window_pane_cp011

0xd889,	// (0x0001ca68) popup_blid2_search_window_g1

0xd891,	// (0x0001ca70) popup_blid2_search_window_t1

0xd89f,	// (0x0001ca7e) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001ecfa) popup_blid2_search_window_t

0x9ec1,	// (0x000190a0) main_browser_pane_g1

0x9b24,	// (0x00018d03) main_browser_pane_ParamLimits

0x93a2,	// (0x00018581) bg_button_pane_cp011_ParamLimits

0x5e2b,	// (0x0001500a) cell_vitu2_function_pane_g1_ParamLimits

0xbd4b,	// (0x0001af2a) bg_popup_sub_pane_cp22_ParamLimits

0x67ae,	// (0x0001598d) input_focus_pane_cp08_ParamLimits

0x67c5,	// (0x000159a4) popup_vitu2_query_button_pane_ParamLimits

0x67c5,	// (0x000159a4) popup_vitu2_query_button_pane

0x67d6,	// (0x000159b5) popup_vitu2_query_input_button_pane

0xd400,	// (0x0001c5df) popup_vitu2_query_window_g1_ParamLimits

0x67e0,	// (0x000159bf) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001ebfb) popup_vitu2_query_window_g_ParamLimits

0x9332,	// (0x00018511) bg_button_pane_cp026

0x6f3f,	// (0x0001611e) popup_vitu2_query_input_button_pane_g1

0x9332,	// (0x00018511) bg_button_pane_cp025

0xd8ad,	// (0x0001ca8c) popup_vitu2_query_button_pane_t1

0x436a,	// (0x00013549) main_mp3_pane_t6

0x4378,	// (0x00013557) popup_slider_window_cp01

0xcf8f,	// (0x0001c16e) cam4_battery_pane

0xcfe8,	// (0x0001c1c7) cam4_battery_pane_cp02

0xd6e5,	// (0x0001c8c4) cam4_battery_pane_cp01

0xd6e5,	// (0x0001c8c4) cam4_battery_pane_cp03

0xc268,	// (0x0001b447) cam4_battery_pane_g1

0xd8bb,	// (0x0001ca9a) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001ecff) cam4_battery_pane_g

0xc132,	// (0x0001b311) popup_blid_sat_info2_window_t11

0xa6dd,	// (0x000198bc) aid_size_touch_mv_arrow_left_ParamLimits

0xa708,	// (0x000198e7) aid_size_touch_mv_arrow_right_ParamLimits

0xa766,	// (0x00019945) navi_pane_g1_ParamLimits

0xa772,	// (0x00019951) navi_pane_g2_ParamLimits

0xa7a0,	// (0x0001997f) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e5c4) navi_pane_g_ParamLimits

0x273c,	// (0x0001191b) navi_pane_mv_t1_ParamLimits

0x4fad,	// (0x0001418c) grid_imed_effect_pane_ParamLimits

0x1326,	// (0x00010505) aid_placing_vt_slider_lsc

0x9e10,	// (0x00018fef) aid_placing_vt_slider_prt

0x93a2,	// (0x00018581) bg_tb_trans_pane_cp01_ParamLimits

0xc3e8,	// (0x0001b5c7) popup_image_details_window_g1_ParamLimits

0xc3fb,	// (0x0001b5da) popup_image_details_window_g2_ParamLimits

0xc410,	// (0x0001b5ef) popup_image_details_window_g3_ParamLimits

0xc410,	// (0x0001b5ef) popup_image_details_window_g3

0xf718,	// (0x0001e8f7) popup_image_details_window_g_ParamLimits

0xc424,	// (0x0001b603) popup_image_details_window_t1_ParamLimits

0xc436,	// (0x0001b615) popup_image_details_window_t2_ParamLimits

0xc44f,	// (0x0001b62e) popup_image_details_window_t3_ParamLimits

0xc463,	// (0x0001b642) popup_image_details_window_t4_ParamLimits

0xc47e,	// (0x0001b65d) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0001e8fe) popup_image_details_window_t_ParamLimits

0x6b58,	// (0x00015d37) cl_header_name_pane_ParamLimits

0x6b58,	// (0x00015d37) cl_header_name_pane

0x6f47,	// (0x00016126) cl_header_name_pane_t1_ParamLimits

0x6f47,	// (0x00016126) cl_header_name_pane_t1

0x6f68,	// (0x00016147) cl_header_name_pane_t2_ParamLimits

0x6f68,	// (0x00016147) cl_header_name_pane_t2

0x6faa,	// (0x00016189) cl_header_name_pane_t3_ParamLimits

0x6faa,	// (0x00016189) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001ed04) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001ed04) cl_header_name_pane_t

0xa82f,	// (0x00019a0e) navi_pane_mv_g2_ParamLimits

0xd073,	// (0x0001c252) field_vitu2_entry_pane_g1_ParamLimits

0xd07f,	// (0x0001c25e) field_vitu2_entry_pane_g2_ParamLimits

0xd08b,	// (0x0001c26a) field_vitu2_entry_pane_g3_ParamLimits

0xd08b,	// (0x0001c26a) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001eafa) field_vitu2_entry_pane_g_ParamLimits

0x5cc6,	// (0x00014ea5) cell_vitu2_itu_pane_g1_ParamLimits

0x5cd6,	// (0x00014eb5) cell_vitu2_itu_pane_g2_ParamLimits

0x5cd6,	// (0x00014eb5) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001eb06) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001eb06) cell_vitu2_itu_pane_g

0x93a2,	// (0x00018581) bg_vkb2_func_pane_cp05_ParamLimits

0x93a2,	// (0x00018581) bg_vkb2_func_pane_cp05

0x93a2,	// (0x00018581) bg_vkb2_func_pane_cp03

0x93a2,	// (0x00018581) bg_vkb2_func_pane_cp04

0x93a2,	// (0x00018581) bg_vkb2_func_pane_cp10_ParamLimits

0x93a2,	// (0x00018581) bg_vkb2_func_pane_cp10

0x6afa,	// (0x00015cd9) bg_vkb2_func_pane_cp08

0x6ae0,	// (0x00015cbf) bg_vkb2_func_pane_cp06

0x6aee,	// (0x00015ccd) bg_vkb2_func_pane_cp07

0xd7b3,	// (0x0001c992) bg_vkb2_func_pane_cp11_ParamLimits

0xd7b3,	// (0x0001c992) bg_vkb2_func_pane_cp11

0xd7c8,	// (0x0001c9a7) bg_vkb2_func_pane_cp12_ParamLimits

0xd7c8,	// (0x0001c9a7) bg_vkb2_func_pane_cp12

0x9332,	// (0x00018511) bg_vkb2_func_pane_cp09

0xd0f4,	// (0x0001c2d3) bg_vkb2_func_pane_g1

0x9fd2,	// (0x000191b1) bg_vkb2_func_pane_g2

0xd0fc,	// (0x0001c2db) bg_vkb2_func_pane_g3

0xd104,	// (0x0001c2e3) bg_vkb2_func_pane_g4

0xd3a5,	// (0x0001c584) bg_vkb2_func_pane_g5

0xd11c,	// (0x0001c2fb) bg_vkb2_func_pane_g6

0xd124,	// (0x0001c303) bg_vkb2_func_pane_g7

0xd114,	// (0x0001c2f3) bg_vkb2_func_pane_g8

0x9fb2,	// (0x00019191) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001ed0b) bg_vkb2_func_pane_g

0x6e6b,	// (0x0001604a) blid2_tripm_pane_g6_ParamLimits

0x6e6b,	// (0x0001604a) blid2_tripm_pane_g6

0xcde4,	// (0x0001bfc3) mp4_progress_pane_g1

0x6ee4,	// (0x000160c3) blid2_tripm_values_pane_ParamLimits

0x6ee4,	// (0x000160c3) blid2_tripm_values_pane

0x6fdb,	// (0x000161ba) blid2_tripm_values_pane_t1

0x6fe9,	// (0x000161c8) blid2_tripm_values_pane_t2

0x6ff7,	// (0x000161d6) blid2_tripm_values_pane_t3

0x7005,	// (0x000161e4) blid2_tripm_values_pane_t4

0x7013,	// (0x000161f2) blid2_tripm_values_pane_t5

0x7021,	// (0x00016200) blid2_tripm_values_pane_t6

0x702f,	// (0x0001620e) blid2_tripm_values_pane_t7

0x703d,	// (0x0001621c) blid2_tripm_values_pane_t8

0x704b,	// (0x0001622a) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001ed1e) blid2_tripm_values_pane_t

0x1368,	// (0x00010547) call_video_pane_t1_ParamLimits

0x1386,	// (0x00010565) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001e44d) call_video_pane_t_ParamLimits

0x2c1f,	// (0x00011dfe) msg_header_pane_g1_ParamLimits

0xaa31,	// (0x00019c10) msg_header_pane_g2_ParamLimits

0xaa31,	// (0x00019c10) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e667) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e667) msg_header_pane_g

0x9b24,	// (0x00018d03) main_clock2_pane_ParamLimits

0x4ca6,	// (0x00013e85) grid_clock2_toolbar_pane_ParamLimits

0x4ca6,	// (0x00013e85) grid_clock2_toolbar_pane

0x4ca6,	// (0x00013e85) listscroll_clock2_pane_ParamLimits

0x4ca6,	// (0x00013e85) listscroll_clock2_pane

0x4d9f,	// (0x00013f7e) main_clock2_pane_t3_ParamLimits

0x4d9f,	// (0x00013f7e) main_clock2_pane_t3

0x4dc3,	// (0x00013fa2) main_clock2_pane_t4_ParamLimits

0x4dc3,	// (0x00013fa2) main_clock2_pane_t4

0xd8c5,	// (0x0001caa4) cell_clock2_toolbar_pane

0xd8cd,	// (0x0001caac) cell_clock2_toolbar_pane_cp01

0xd8cd,	// (0x0001caac) cell_clock2_toolbar_pane_cp02

0xd8d5,	// (0x0001cab4) cell_clock2_toolbar_pane_cp03

0xd8dd,	// (0x0001cabc) list_clock2_pane

0xa653,	// (0x00019832) scroll_pane_cp10

0xd8e5,	// (0x0001cac4) list_single_clock2_pane_ParamLimits

0xd8e5,	// (0x0001cac4) list_single_clock2_pane

0xa896,	// (0x00019a75) list_highlight_pane_cp08

0xd8f2,	// (0x0001cad1) list_single_clock2_pane_t1

0xd900,	// (0x0001cadf) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001ed31) list_single_clock2_pane_t

0x9332,	// (0x00018511) bg_button_pane_cp10

0xd90e,	// (0x0001caed) cell_clock2_toolbar_pane_g1

0x2c5e,	// (0x00011e3d) aid_main_viewer_pane_g1_ParamLimits

0x2c5e,	// (0x00011e3d) aid_main_viewer_pane_g1

0x2c6c,	// (0x00011e4b) aid_main_viewer_pane_g2_ParamLimits

0x2c6c,	// (0x00011e4b) aid_main_viewer_pane_g2

0x2c7a,	// (0x00011e59) aid_main_viewer_pane_g3_ParamLimits

0x2c7a,	// (0x00011e59) aid_main_viewer_pane_g3

0x2c89,	// (0x00011e68) aid_main_viewer_pane_g4_ParamLimits

0x2c89,	// (0x00011e68) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e678) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e678) aid_main_viewer_pane_g

0x3597,	// (0x00012776) main_calc_pane_ParamLimits

0x35ab,	// (0x0001278a) main_dialer2_pane_ParamLimits

0x9332,	// (0x00018511) main_cam6_pane

0x9332,	// (0x00018511) main_vid6_pane

0x4cb2,	// (0x00013e91) listscroll_gen_pane_cp06_ParamLimits

0x4cb2,	// (0x00013e91) listscroll_gen_pane_cp06

0x4de6,	// (0x00013fc5) main_clock2_pane_t5_ParamLimits

0x4de6,	// (0x00013fc5) main_clock2_pane_t5

0x4e42,	// (0x00014021) aid_call2_pane_cp10_ParamLimits

0x4e54,	// (0x00014033) aid_call_pane_cp10_ParamLimits

0xa6d1,	// (0x000198b0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa6d1,	// (0x000198b0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4e66,	// (0x00014045) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4e66,	// (0x00014045) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa6d1,	// (0x000198b0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001e9b3) popup_clock_analogue_window_cp10_g_ParamLimits

0x4e78,	// (0x00014057) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5508,	// (0x000146e7) cell_dialer2_keypad_pane_g2_ParamLimits

0x5508,	// (0x000146e7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001ea99) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001ea99) cell_dialer2_keypad_pane_g

0x5524,	// (0x00014703) cell_dialer2_keypad_pane_t1

0x6141,	// (0x00015320) main_cset_text2_pane_ParamLimits

0x6141,	// (0x00015320) main_cset_text2_pane

0xd5ec,	// (0x0001c7cb) area_vitu2_query_pane_g1_ParamLimits

0x6a7f,	// (0x00015c5e) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001ec4e) area_vitu2_query_pane_g_ParamLimits

0xd670,	// (0x0001c84f) area_vitu2_query_pane_t7_ParamLimits

0xd670,	// (0x0001c84f) area_vitu2_query_pane_t7

0x6ae0,	// (0x00015cbf) bg_button_pane_cp018_ParamLimits

0x6aee,	// (0x00015ccd) bg_button_pane_cp021_ParamLimits

0x6afa,	// (0x00015cd9) bg_button_pane_cp022_ParamLimits

0x6afa,	// (0x00015cd9) bg_vkb2_func_pane_cp08_ParamLimits

0x6ae0,	// (0x00015cbf) bg_vkb2_func_pane_cp06_ParamLimits

0x6aee,	// (0x00015ccd) bg_vkb2_func_pane_cp07_ParamLimits

0x6b0b,	// (0x00015cea) input_focus_pane_cp09_ParamLimits

0xd916,	// (0x0001caf5) cam6_autofocus_pane_ParamLimits

0xd916,	// (0x0001caf5) cam6_autofocus_pane

0x7059,	// (0x00016238) cam6_image_uncrop_pane_ParamLimits

0x7059,	// (0x00016238) cam6_image_uncrop_pane

0x7068,	// (0x00016247) cam6_indi_pane_ParamLimits

0x7068,	// (0x00016247) cam6_indi_pane

0x707e,	// (0x0001625d) cam6_mode_pane_ParamLimits

0x707e,	// (0x0001625d) cam6_mode_pane

0x7090,	// (0x0001626f) cam6_timer_pane_ParamLimits

0x7090,	// (0x0001626f) cam6_timer_pane

0x709c,	// (0x0001627b) cam6_zoom_pane_ParamLimits

0x709c,	// (0x0001627b) cam6_zoom_pane

0x70a8,	// (0x00016287) cam6_mode_pane_g1_ParamLimits

0x70a8,	// (0x00016287) cam6_mode_pane_g1

0x70b8,	// (0x00016297) cam6_mode_pane_g2_ParamLimits

0x70b8,	// (0x00016297) cam6_mode_pane_g2

0x70c8,	// (0x000162a7) cam6_mode_pane_g3_ParamLimits

0x70c8,	// (0x000162a7) cam6_mode_pane_g3

0x70d8,	// (0x000162b7) cam6_mode_pane_g4_ParamLimits

0x70d8,	// (0x000162b7) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001ed36) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001ed36) cam6_mode_pane_g

0xd1de,	// (0x0001c3bd) bg_tb_trans_pane_cp08_ParamLimits

0xd1de,	// (0x0001c3bd) bg_tb_trans_pane_cp08

0xd924,	// (0x0001cb03) cam6_battery_pane_ParamLimits

0xd924,	// (0x0001cb03) cam6_battery_pane

0xd93a,	// (0x0001cb19) cam6_indi_pane_g1_ParamLimits

0xd93a,	// (0x0001cb19) cam6_indi_pane_g1

0xd94c,	// (0x0001cb2b) cam6_indi_pane_g2_ParamLimits

0xd94c,	// (0x0001cb2b) cam6_indi_pane_g2

0xd95e,	// (0x0001cb3d) cam6_indi_pane_g3_ParamLimits

0xd95e,	// (0x0001cb3d) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001ed3f) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001ed3f) cam6_indi_pane_g

0xd970,	// (0x0001cb4f) cam6_indi_pane_t1_ParamLimits

0xd970,	// (0x0001cb4f) cam6_indi_pane_t1

0x70e8,	// (0x000162c7) cam6_autofocus_pane_g1

0x70f0,	// (0x000162cf) cam6_autofocus_pane_g2

0x70f8,	// (0x000162d7) cam6_autofocus_pane_g3

0x7100,	// (0x000162df) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001ed46) cam6_autofocus_pane_g

0xd996,	// (0x0001cb75) cam6_timer_pane_g1

0xd99e,	// (0x0001cb7d) cam6_timer_pane_t1

0xd9ac,	// (0x0001cb8b) cam6_zoom_cont_pane

0xd9b4,	// (0x0001cb93) cam6_zoom_pane_g1

0xd9bc,	// (0x0001cb9b) cam6_zoom_pane_g2

0x7108,	// (0x000162e7) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001ed4f) cam6_zoom_pane_g

0xc268,	// (0x0001b447) cam6_battery_pane_g1

0xc268,	// (0x0001b447) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0001e8bb) cam6_battery_pane_g

0xd9c4,	// (0x0001cba3) cam6_zoom_cont_pane_g1

0xd9cd,	// (0x0001cbac) cam6_zoom_cont_pane_g2

0xd9d6,	// (0x0001cbb5) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001ed56) cam6_zoom_cont_pane_g

0x7125,	// (0x00016304) cam6_mode_pane_cp_ParamLimits

0x7125,	// (0x00016304) cam6_mode_pane_cp

0x709c,	// (0x0001627b) cam6_zoom_pane_cp_ParamLimits

0x709c,	// (0x0001627b) cam6_zoom_pane_cp

0x7137,	// (0x00016316) vid6_image_uncrop_cif_pane_ParamLimits

0x7137,	// (0x00016316) vid6_image_uncrop_cif_pane

0x7147,	// (0x00016326) vid6_image_uncrop_nhd_pane_ParamLimits

0x7147,	// (0x00016326) vid6_image_uncrop_nhd_pane

0x7059,	// (0x00016238) vid6_image_uncrop_vga_pane_ParamLimits

0x7059,	// (0x00016238) vid6_image_uncrop_vga_pane

0x7156,	// (0x00016335) vid6_image_uncrop_wvga_pane_ParamLimits

0x7156,	// (0x00016335) vid6_image_uncrop_wvga_pane

0x7165,	// (0x00016344) vid6_indi_pane_ParamLimits

0x7165,	// (0x00016344) vid6_indi_pane

0xd1de,	// (0x0001c3bd) bg_tb_trans_pane_cp09_ParamLimits

0xd1de,	// (0x0001c3bd) bg_tb_trans_pane_cp09

0xd9ee,	// (0x0001cbcd) cam6_battery_pane_cp_ParamLimits

0xd9ee,	// (0x0001cbcd) cam6_battery_pane_cp

0xd9fa,	// (0x0001cbd9) vid6_indi_pane_g1_ParamLimits

0xd9fa,	// (0x0001cbd9) vid6_indi_pane_g1

0xda0c,	// (0x0001cbeb) vid6_indi_pane_g2_ParamLimits

0xda0c,	// (0x0001cbeb) vid6_indi_pane_g2

0xda1e,	// (0x0001cbfd) vid6_indi_pane_g3_ParamLimits

0xda1e,	// (0x0001cbfd) vid6_indi_pane_g3

0xda33,	// (0x0001cc12) vid6_indi_pane_g4_ParamLimits

0xda33,	// (0x0001cc12) vid6_indi_pane_g4

0xda48,	// (0x0001cc27) vid6_indi_pane_g5_ParamLimits

0xda48,	// (0x0001cc27) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001ed5d) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001ed5d) vid6_indi_pane_g

0xda62,	// (0x0001cc41) vid6_indi_pane_t1_ParamLimits

0xda62,	// (0x0001cc41) vid6_indi_pane_t1

0xda78,	// (0x0001cc57) vid6_indi_pane_t2_ParamLimits

0xda78,	// (0x0001cc57) vid6_indi_pane_t2

0xdaa0,	// (0x0001cc7f) vid6_indi_pane_t3_ParamLimits

0xdaa0,	// (0x0001cc7f) vid6_indi_pane_t3

0xdac8,	// (0x0001cca7) vid6_indi_pane_t4_ParamLimits

0xdac8,	// (0x0001cca7) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001ed68) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001ed68) vid6_indi_pane_t

0xdaec,	// (0x0001cccb) wait_bar_pane_cp08

0x717d,	// (0x0001635c) main_cset_text2_pane_t1_ParamLimits

0x717d,	// (0x0001635c) main_cset_text2_pane_t1

0x7110,	// (0x000162ef) listscroll_gen_pane_cp06_t1_ParamLimits

0x7110,	// (0x000162ef) listscroll_gen_pane_cp06_t1

0x9332,	// (0x00018511) main_cam6_set_pane

0xc4c8,	// (0x0001b6a7) bg_tb_trans_pane_cp06_ParamLimits

0xcf97,	// (0x0001c176) cam4_indicators_pane_g1_ParamLimits

0xcfa8,	// (0x0001c187) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001ead6) cam4_indicators_pane_g_ParamLimits

0xcfc6,	// (0x0001c1a5) cam4_indicators_pane_t1_ParamLimits

0x93a2,	// (0x00018581) bg_tb_trans_pane_cp07_ParamLimits

0xcff0,	// (0x0001c1cf) vid4_indicators_pane_g1_ParamLimits

0xd004,	// (0x0001c1e3) vid4_indicators_pane_g2_ParamLimits

0xd018,	// (0x0001c1f7) vid4_indicators_pane_g3_ParamLimits

0xd029,	// (0x0001c208) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001eae8) vid4_indicators_pane_g_ParamLimits

0xd045,	// (0x0001c224) vid4_indicators_pane_t1_ParamLimits

0xd6ed,	// (0x0001c8cc) vid4_progress_pane_g1_ParamLimits

0xd6fd,	// (0x0001c8dc) vid4_progress_pane_g2_ParamLimits

0x6c4b,	// (0x00015e2a) vid4_progress_pane_g3_ParamLimits

0xd70d,	// (0x0001c8ec) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001ec99) vid4_progress_pane_g_ParamLimits

0x6c5d,	// (0x00015e3c) vid4_progress_pane_t1_ParamLimits

0xd72b,	// (0x0001c90a) vid4_progress_pane_t2_ParamLimits

0xd740,	// (0x0001c91f) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001eca4) vid4_progress_pane_t_ParamLimits

0x6c73,	// (0x00015e52) wait_bar_pane_cp07_ParamLimits

0x719c,	// (0x0001637b) main_cam6_set_pane_g2_ParamLimits

0x719c,	// (0x0001637b) main_cam6_set_pane_g2

0x71c0,	// (0x0001639f) main_cset6_listscroll_pane_ParamLimits

0x71c0,	// (0x0001639f) main_cset6_listscroll_pane

0x71dc,	// (0x000163bb) main_cset6_slider_pane_ParamLimits

0x71dc,	// (0x000163bb) main_cset6_slider_pane

0x71f2,	// (0x000163d1) main_cset6_text2_pane_ParamLimits

0x71f2,	// (0x000163d1) main_cset6_text2_pane

0xdafb,	// (0x0001ccda) main_cset6_text_pane

0xdb03,	// (0x0001cce2) main_cset_list_pane_copy1_ParamLimits

0xdb03,	// (0x0001cce2) main_cset_list_pane_copy1

0xdb13,	// (0x0001ccf2) scroll_pane_cp028_copy1

0x7200,	// (0x000163df) cset_list_set_pane_copy1

0x7212,	// (0x000163f1) aid_position_infowindow_above_copy1

0x721a,	// (0x000163f9) aid_position_infowindow_below_copy1

0x7222,	// (0x00016401) cset_list_set_pane_g1_copy1

0x722a,	// (0x00016409) cset_list_set_pane_g3_copy1_ParamLimits

0x722a,	// (0x00016409) cset_list_set_pane_g3_copy1

0x7239,	// (0x00016418) cset_list_set_pane_t1_copy1_ParamLimits

0x7239,	// (0x00016418) cset_list_set_pane_t1_copy1

0x93a2,	// (0x00018581) list_highlight_pane_cp021_copy1_ParamLimits

0x93a2,	// (0x00018581) list_highlight_pane_cp021_copy1

0xdb1c,	// (0x0001ccfb) cset6_slider_pane_ParamLimits

0xdb1c,	// (0x0001ccfb) cset6_slider_pane

0xdb48,	// (0x0001cd27) main_cset6_slider_pane_g1_ParamLimits

0xdb48,	// (0x0001cd27) main_cset6_slider_pane_g1

0x724e,	// (0x0001642d) main_cset6_slider_pane_g2_ParamLimits

0x724e,	// (0x0001642d) main_cset6_slider_pane_g2

0xdb70,	// (0x0001cd4f) main_cset6_slider_pane_g3_ParamLimits

0xdb70,	// (0x0001cd4f) main_cset6_slider_pane_g3

0x7276,	// (0x00016455) main_cset6_slider_pane_g4_ParamLimits

0x7276,	// (0x00016455) main_cset6_slider_pane_g4

0x7282,	// (0x00016461) main_cset6_slider_pane_g5_ParamLimits

0x7282,	// (0x00016461) main_cset6_slider_pane_g5

0xd259,	// (0x0001c438) main_cset6_slider_pane_g7_ParamLimits

0xd259,	// (0x0001c438) main_cset6_slider_pane_g7

0xd265,	// (0x0001c444) main_cset6_slider_pane_g8_ParamLimits

0xd265,	// (0x0001c444) main_cset6_slider_pane_g8

0x61ee,	// (0x000153cd) main_cset6_slider_pane_g9_ParamLimits

0x61ee,	// (0x000153cd) main_cset6_slider_pane_g9

0x61fa,	// (0x000153d9) main_cset6_slider_pane_g10_ParamLimits

0x61fa,	// (0x000153d9) main_cset6_slider_pane_g10

0x6206,	// (0x000153e5) main_cset6_slider_pane_g11_ParamLimits

0x6206,	// (0x000153e5) main_cset6_slider_pane_g11

0x6212,	// (0x000153f1) main_cset6_slider_pane_g12_ParamLimits

0x6212,	// (0x000153f1) main_cset6_slider_pane_g12

0x621e,	// (0x000153fd) main_cset6_slider_pane_g13_ParamLimits

0x621e,	// (0x000153fd) main_cset6_slider_pane_g13

0x622a,	// (0x00015409) main_cset6_slider_pane_g14_ParamLimits

0x622a,	// (0x00015409) main_cset6_slider_pane_g14

0x728e,	// (0x0001646d) main_cset6_slider_pane_g15_ParamLimits

0x728e,	// (0x0001646d) main_cset6_slider_pane_g15

0x624e,	// (0x0001542d) main_cset6_slider_pane_g16_ParamLimits

0x624e,	// (0x0001542d) main_cset6_slider_pane_g16

0x625a,	// (0x00015439) main_cset6_slider_pane_g17_ParamLimits

0x625a,	// (0x00015439) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001ed71) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001ed71) main_cset6_slider_pane_g

0xdb7c,	// (0x0001cd5b) main_cset6_slider_pane_t1_ParamLimits

0xdb7c,	// (0x0001cd5b) main_cset6_slider_pane_t1

0x72be,	// (0x0001649d) main_cset6_slider_pane_t2_ParamLimits

0x72be,	// (0x0001649d) main_cset6_slider_pane_t2

0x72e9,	// (0x000164c8) main_cset6_slider_pane_t3_ParamLimits

0x72e9,	// (0x000164c8) main_cset6_slider_pane_t3

0x7314,	// (0x000164f3) main_cset6_slider_pane_t4_ParamLimits

0x7314,	// (0x000164f3) main_cset6_slider_pane_t4

0x733f,	// (0x0001651e) main_cset6_slider_pane_t5_ParamLimits

0x733f,	// (0x0001651e) main_cset6_slider_pane_t5

0xdbbd,	// (0x0001cd9c) main_cset6_slider_pane_t7_ParamLimits

0xdbbd,	// (0x0001cd9c) main_cset6_slider_pane_t7

0x736a,	// (0x00016549) main_cset6_slider_pane_t8_ParamLimits

0x736a,	// (0x00016549) main_cset6_slider_pane_t8

0x738e,	// (0x0001656d) main_cset6_slider_pane_t9_ParamLimits

0x738e,	// (0x0001656d) main_cset6_slider_pane_t9

0x73b2,	// (0x00016591) main_cset6_slider_pane_t10_ParamLimits

0x73b2,	// (0x00016591) main_cset6_slider_pane_t10

0x73d6,	// (0x000165b5) main_cset6_slider_pane_t11_ParamLimits

0x73d6,	// (0x000165b5) main_cset6_slider_pane_t11

0xdbf3,	// (0x0001cdd2) main_cset6_slider_pane_t14_ParamLimits

0xdbf3,	// (0x0001cdd2) main_cset6_slider_pane_t14

0xdc2c,	// (0x0001ce0b) main_cset6_slider_pane_t15_ParamLimits

0xdc2c,	// (0x0001ce0b) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001ed96) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001ed96) main_cset6_slider_pane_t

0xd33d,	// (0x0001c51c) cset_slider_pane_g1_copy1

0xd346,	// (0x0001c525) cset_slider_pane_g2_copy1

0xd34f,	// (0x0001c52e) cset_slider_pane_g3_copy1

0x9332,	// (0x00018511) bg_popup_sub_pane_cp011_copy1

0xdc65,	// (0x0001ce44) main_cset_text_pane_g1_copy1

0xd414,	// (0x0001c5f3) main_cset_text_pane_t1_copy1

0xd422,	// (0x0001c601) main_cset_text_pane_t2_copy1

0xd430,	// (0x0001c60f) main_cset_text_pane_t3_copy1

0xd43e,	// (0x0001c61d) main_cset_text_pane_t4_copy1

0xd44c,	// (0x0001c62b) main_cset_text_pane_t5_copy1

0xdc6d,	// (0x0001ce4c) main_cset_text_pane_t6_copy1

0xdc7b,	// (0x0001ce5a) main_cset_text_pane_t7_copy1

0x74c9,	// (0x000166a8) main_cset_text2_pane_t1_copy1

0x93a2,	// (0x00018581) main_ncimui_pane

0x37e7,	// (0x000129c6) popup_query_ncimui_window_ParamLimits

0x37e7,	// (0x000129c6) popup_query_ncimui_window

0xc569,	// (0x0001b748) field_cale_ev2_pane_g4_ParamLimits

0xc569,	// (0x0001b748) field_cale_ev2_pane_g4

0x53e4,	// (0x000145c3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x53e4,	// (0x000145c3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001ea74) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001ea74) cell_video_dialer_keypad_pane_g

0x53fc,	// (0x000145db) cell_video_dialer_keypad_pane_t1

0x9332,	// (0x00018511) bg_popup_window_pane_cp012

0xa514,	// (0x000196f3) heading_pane_cp06

0xdca7,	// (0x0001ce86) ncim_query_content_pane

0x9332,	// (0x00018511) bg_popup_heading_pane_cp01

0xdcaf,	// (0x0001ce8e) ncim_heading_pane_t1

0xdcbd,	// (0x0001ce9c) ncim_indicator_popup_pane

0xdccf,	// (0x0001ceae) ncim_query_button_pane

0xdce3,	// (0x0001cec2) ncim_query_content_pane_t1

0xdcf5,	// (0x0001ced4) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001edda) ncim_query_content_pane_t

0xdd2f,	// (0x0001cf0e) ncim_query_list_pane

0xdd41,	// (0x0001cf20) ncim_query_popup_pane

0xdcbd,	// (0x0001ce9c) ncim_indicator_popup_pane_ParamLimits

0x760d,	// (0x000167ec) ncim_query_content_pane_g1_ParamLimits

0x760d,	// (0x000167ec) ncim_query_content_pane_g1

0xdce3,	// (0x0001cec2) ncim_query_content_pane_t1_ParamLimits

0xdcf5,	// (0x0001ced4) ncim_query_content_pane_t2_ParamLimits

0x7619,	// (0x000167f8) ncim_query_content_pane_t3_ParamLimits

0x7619,	// (0x000167f8) ncim_query_content_pane_t3

0x7641,	// (0x00016820) ncim_query_content_pane_t4_ParamLimits

0x7641,	// (0x00016820) ncim_query_content_pane_t4

0x7669,	// (0x00016848) ncim_query_content_pane_t5_ParamLimits

0x7669,	// (0x00016848) ncim_query_content_pane_t5

0xdd07,	// (0x0001cee6) ncim_query_content_pane_t6_ParamLimits

0xdd07,	// (0x0001cee6) ncim_query_content_pane_t6

0xfbfb,	// (0x0001edda) ncim_query_content_pane_t_ParamLimits

0xdd2f,	// (0x0001cf0e) ncim_query_list_pane_ParamLimits

0xdd41,	// (0x0001cf20) ncim_query_popup_pane_ParamLimits

0xdd55,	// (0x0001cf34) wait_bar_pane_cp04

0x9332,	// (0x00018511) input_focus_pane_cp011

0xdd5d,	// (0x0001cf3c) ncim_query_popup_pane_t1

0xdd6b,	// (0x0001cf4a) ncim_list_query_list_pane_ParamLimits

0xdd6b,	// (0x0001cf4a) ncim_list_query_list_pane

0x9332,	// (0x00018511) bg_button_pane_cp027

0xdd7e,	// (0x0001cf5d) ncim_query_button_pane_g1

0x9332,	// (0x00018511) list_highlight_pane_cp012

0xdd88,	// (0x0001cf67) ncim_list_query_list_pane_g1

0xdd90,	// (0x0001cf6f) ncim_list_query_list_pane_t1

0xcfb7,	// (0x0001c196) cam4_indicators_pane_g3_ParamLimits

0xcfb7,	// (0x0001c196) cam4_indicators_pane_g3

0xd035,	// (0x0001c214) vid4_indicators_pane_g5_ParamLimits

0xd035,	// (0x0001c214) vid4_indicators_pane_g5

0xd71c,	// (0x0001c8fb) vid4_progress_pane_g5_ParamLimits

0xd71c,	// (0x0001c8fb) vid4_progress_pane_g5

0x74fb,	// (0x000166da) main_ncimui_pane_g1

0x7561,	// (0x00016740) ncimui_group_query_pane_ParamLimits

0x7561,	// (0x00016740) ncimui_group_query_pane

0x75a9,	// (0x00016788) ncimui_list_pane_ParamLimits

0x75a9,	// (0x00016788) ncimui_list_pane

0x75d0,	// (0x000167af) ncimui_text_pane_ParamLimits

0x75d0,	// (0x000167af) ncimui_text_pane

0x7691,	// (0x00016870) ncimui_text_pane_t1_ParamLimits

0x7691,	// (0x00016870) ncimui_text_pane_t1

0xdd9e,	// (0x0001cf7d) ncimui_list_single_graphic_pane_ParamLimits

0xdd9e,	// (0x0001cf7d) ncimui_list_single_graphic_pane

0x76af,	// (0x0001688e) ncimui_query_pane_ParamLimits

0x76af,	// (0x0001688e) ncimui_query_pane

0x9332,	// (0x00018511) list_highlight_pane_cp013

0xddae,	// (0x0001cf8d) ncim_list_query_list_pane_t1_copy1

0xdd88,	// (0x0001cf67) ncim_list_single_graphic_pane_g1

0xddbc,	// (0x0001cf9b) ncim_query_button_pane_cp01

0xddc8,	// (0x0001cfa7) ncim_query_entry_pane_ParamLimits

0xddc8,	// (0x0001cfa7) ncim_query_entry_pane

0xdddb,	// (0x0001cfba) ncimui_query_pane_g1

0xdde7,	// (0x0001cfc6) ncimui_query_pane_t1_ParamLimits

0xdde7,	// (0x0001cfc6) ncimui_query_pane_t1

0x93a2,	// (0x00018581) input_focus_pane_cp012

0xde00,	// (0x0001cfdf) ncim_query_entry_pane_t1

0x9b24,	// (0x00018d03) main_im_pane_ParamLimits

0x93a2,	// (0x00018581) main_mobtv_pane_ParamLimits

0x93a2,	// (0x00018581) main_mobtv_pane

0x72a6,	// (0x00016485) main_cset6_slider_pane_g18_ParamLimits

0x72a6,	// (0x00016485) main_cset6_slider_pane_g18

0x72b2,	// (0x00016491) main_cset6_slider_pane_g19_ParamLimits

0x72b2,	// (0x00016491) main_cset6_slider_pane_g19

0xd1ec,	// (0x0001c3cb) bg_main_mobtv_pane_ParamLimits

0xd1ec,	// (0x0001c3cb) bg_main_mobtv_pane

0x76c2,	// (0x000168a1) main_mobtv_info_pane

0x76cb,	// (0x000168aa) main_mobtv_loading_pane_ParamLimits

0x76cb,	// (0x000168aa) main_mobtv_loading_pane

0xde12,	// (0x0001cff1) main_mobtv_pg_channel_list_pane

0xde1c,	// (0x0001cffb) main_mobtv_pg_hdr_pane

0x76d8,	// (0x000168b7) main_mobtv_programe_curr_pane_ParamLimits

0x76d8,	// (0x000168b7) main_mobtv_programe_curr_pane

0x76e5,	// (0x000168c4) main_mobtv_programe_next_pane_ParamLimits

0x76e5,	// (0x000168c4) main_mobtv_programe_next_pane

0xde25,	// (0x0001d004) popup_mobtv_noti_window

0xc268,	// (0x0001b447) main_tv_pg_hdr_pane_g1

0xde2d,	// (0x0001d00c) main_tv_pg_hdr_pane_g2

0xde35,	// (0x0001d014) main_tv_pg_hdr_pane_g3

0xde3d,	// (0x0001d01c) main_tv_pg_hdr_pane_g4

0xde45,	// (0x0001d024) main_tv_pg_hdr_pane_g5

0xde4f,	// (0x0001d02e) main_tv_pg_hdr_pane_g6

0xde59,	// (0x0001d038) main_tv_pg_hdr_pane_g7

0xde63,	// (0x0001d042) main_tv_pg_hdr_pane_g8

0xde6d,	// (0x0001d04c) main_tv_pg_hdr_pane_g9

0xde77,	// (0x0001d056) main_tv_pg_hdr_pane_g10

0xde81,	// (0x0001d060) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001ede7) main_tv_pg_hdr_pane_g

0xde8b,	// (0x0001d06a) main_tv_pg_hdr_pane_t1

0xde99,	// (0x0001d078) main_tv_pg_hdr_pane_t2

0xdea7,	// (0x0001d086) main_tv_pg_hdr_pane_t3

0xdeb7,	// (0x0001d096) main_tv_pg_hdr_pane_t4

0xdec7,	// (0x0001d0a6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001edfe) main_tv_pg_hdr_pane_t

0xded7,	// (0x0001d0b6) single_mobtv_pg_channel_pane_ParamLimits

0xded7,	// (0x0001d0b6) single_mobtv_pg_channel_pane

0xdee9,	// (0x0001d0c8) single_mobtv_pg_channel_table_pane

0xdef2,	// (0x0001d0d1) single_mobtv_pg_channel_thumb_pane

0xdefb,	// (0x0001d0da) single_tv_pg_channel_pane_g1

0xdf04,	// (0x0001d0e3) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001ee09) single_tv_pg_channel_pane_g

0xc4c8,	// (0x0001b6a7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc4c8,	// (0x0001b6a7) bg_single_mobtv_pg_channel_thumb_pane

0xdf0d,	// (0x0001d0ec) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf0d,	// (0x0001d0ec) single_mobtv_pg_channel_thumb_pane_g1

0xdf1b,	// (0x0001d0fa) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf1b,	// (0x0001d0fa) single_mobtv_pg_channel_thumb_pane_g2

0xdf27,	// (0x0001d106) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf27,	// (0x0001d106) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001ee0e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001ee0e) single_mobtv_pg_channel_thumb_pane_g

0xdf33,	// (0x0001d112) single_mobtv_pg_channel_thumb_pane_t1

0xdf41,	// (0x0001d120) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001ee15) single_mobtv_pg_channel_thumb_pane_t

0xc268,	// (0x0001b447) bg_single_mobtv_pg_channel_table_pane_g1

0xc268,	// (0x0001b447) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0001e8bb) bg_single_mobtv_pg_channel_table_pane_g

0xdf4f,	// (0x0001d12e) single_mobtv_pg_channel_table_pane_t1

0xdf5d,	// (0x0001d13c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001ee1a) single_mobtv_pg_channel_table_pane_t

0x76fa,	// (0x000168d9) main_mobtv_info_pane_g1_ParamLimits

0x76fa,	// (0x000168d9) main_mobtv_info_pane_g1

0x7718,	// (0x000168f7) main_mobtv_info_pane_t1_ParamLimits

0x7718,	// (0x000168f7) main_mobtv_info_pane_t1

0x7790,	// (0x0001696f) main_mobtv_info_pane_t2_ParamLimits

0x7790,	// (0x0001696f) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001ee24) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001ee24) main_mobtv_info_pane_t

0x781f,	// (0x000169fe) wait_bar_pane_cp05

0x7831,	// (0x00016a10) main_mobtv_loading_pane_g1_ParamLimits

0x7831,	// (0x00016a10) main_mobtv_loading_pane_g1

0x7844,	// (0x00016a23) main_mobtv_loading_pane_g2_ParamLimits

0x7844,	// (0x00016a23) main_mobtv_loading_pane_g2

0x7850,	// (0x00016a2f) main_mobtv_loading_pane_g3_ParamLimits

0x7850,	// (0x00016a2f) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001ee2b) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001ee2b) main_mobtv_loading_pane_g

0xdf6b,	// (0x0001d14a) main_mobtv_loading_pane_t1_ParamLimits

0xdf6b,	// (0x0001d14a) main_mobtv_loading_pane_t1

0xdf83,	// (0x0001d162) main_mobtv_loading_pane_t2_ParamLimits

0xdf83,	// (0x0001d162) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001ee32) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001ee32) main_mobtv_loading_pane_t

0x7863,	// (0x00016a42) wait_bar_pane_cp06_ParamLimits

0x7863,	// (0x00016a42) wait_bar_pane_cp06

0xdfa7,	// (0x0001d186) main_mobtv_programe_curr_pane_t1

0xdfb5,	// (0x0001d194) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001ee37) main_mobtv_programe_curr_pane_t

0xdfc3,	// (0x0001d1a2) main_mobtv_programe_next_pane_t1

0xdfd1,	// (0x0001d1b0) main_mobtv_programe_next_pane_t2

0xdfdf,	// (0x0001d1be) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001ee3c) main_mobtv_programe_next_pane_t

0x9332,	// (0x00018511) bg_popup_mobtv_noti_window_pane

0xdfed,	// (0x0001d1cc) popup_mobtv_noti_window_g1

0xdff5,	// (0x0001d1d4) popup_mobtv_noti_window_t1

0xe003,	// (0x0001d1e2) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001ee43) popup_mobtv_noti_window_t

0xc268,	// (0x0001b447) bg_popup_mobtv_noti_window_pane_g1

0x9332,	// (0x00018511) sc_clock_pane

0x9332,	// (0x00018511) main_fs_bigclock_pane

0x6ece,	// (0x000160ad) blid2_tripm_pane_t4_ParamLimits

0x6ece,	// (0x000160ad) blid2_tripm_pane_t4

0x7872,	// (0x00016a51) sc_clock_pane_g1_ParamLimits

0x7872,	// (0x00016a51) sc_clock_pane_g1

0x7884,	// (0x00016a63) sc_clock_pane_t1_ParamLimits

0x7884,	// (0x00016a63) sc_clock_pane_t1

0x78a6,	// (0x00016a85) sc_clock_pane_t2_ParamLimits

0x78a6,	// (0x00016a85) sc_clock_pane_t2

0x78be,	// (0x00016a9d) sc_clock_pane_t3_ParamLimits

0x78be,	// (0x00016a9d) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001ee48) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001ee48) sc_clock_pane_t

0x8841,	// (0x00017a20) main_fs_bigclock_indicator_pane_ParamLimits

0x8841,	// (0x00017a20) main_fs_bigclock_indicator_pane

0x795e,	// (0x00016b3d) main_fs_bigclock_pane_g1_ParamLimits

0x795e,	// (0x00016b3d) main_fs_bigclock_pane_g1

0x884d,	// (0x00017a2c) main_fs_bigclock_pane_t1_ParamLimits

0x884d,	// (0x00017a2c) main_fs_bigclock_pane_t1

0x885f,	// (0x00017a3e) main_fs_bigclock_pane_t2_ParamLimits

0x885f,	// (0x00017a3e) main_fs_bigclock_pane_t2

0x8871,	// (0x00017a50) main_fs_bigclock_pane_t3_ParamLimits

0x8871,	// (0x00017a50) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001f04d) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001f04d) main_fs_bigclock_pane_t

0xec51,	// (0x0001de30) main_fs_bigclock_indicator_pane_g1

0xdcd7,	// (0x0001ceb6) ncim_query_content_pane_g2_ParamLimits

0xdcd7,	// (0x0001ceb6) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001edd5) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001edd5) ncim_query_content_pane_g

0x78d7,	// (0x00016ab6) sc_clock_pane_t4_ParamLimits

0x78d7,	// (0x00016ab6) sc_clock_pane_t4

0x93a2,	// (0x00018581) main_radioblah_pane

0xcefd,	// (0x0001c0dc) cell_call4_button_pane_t1_copy1_ParamLimits

0xcefd,	// (0x0001c0dc) cell_call4_button_pane_t1_copy1

0x7513,	// (0x000166f2) main_ncimui_pane_t1_ParamLimits

0x7513,	// (0x000166f2) main_ncimui_pane_t1

0x752d,	// (0x0001670c) main_ncimui_pane_t2_ParamLimits

0x752d,	// (0x0001670c) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001edce) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001edce) main_ncimui_pane_t

0xe148,	// (0x0001d327) main_radioblah_anim_pane_ParamLimits

0xe148,	// (0x0001d327) main_radioblah_anim_pane

0xe159,	// (0x0001d338) main_radioblah_info_pane_ParamLimits

0xe159,	// (0x0001d338) main_radioblah_info_pane

0xe16d,	// (0x0001d34c) main_radioblah_pane_t1_ParamLimits

0xe16d,	// (0x0001d34c) main_radioblah_pane_t1

0xe189,	// (0x0001d368) main_radioblah_pane_t2_ParamLimits

0xe189,	// (0x0001d368) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001ee69) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001ee69) main_radioblah_pane_t

0x79b6,	// (0x00016b95) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79b6,	// (0x00016b95) main_radioblah_rocker_ctrl_pane

0xe1d1,	// (0x0001d3b0) main_radioblah_info_pane_t1_ParamLimits

0xe1d1,	// (0x0001d3b0) main_radioblah_info_pane_t1

0x7a0e,	// (0x00016bed) main_radioblah_info_pane_t2_ParamLimits

0x7a0e,	// (0x00016bed) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001ee72) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001ee72) main_radioblah_info_pane_t

0xc268,	// (0x0001b447) main_radioblah_rocker_ctrl_pane_g1

0x7abe,	// (0x00016c9d) main_radioblah_rocker_ctrl_pane_g2

0x7ac6,	// (0x00016ca5) main_radioblah_rocker_ctrl_pane_g3

0x7ace,	// (0x00016cad) main_radioblah_rocker_ctrl_pane_g4

0x7ad6,	// (0x00016cb5) main_radioblah_rocker_ctrl_pane_g5

0x7ade,	// (0x00016cbd) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001ee7b) main_radioblah_rocker_ctrl_pane_g

0x74c9,	// (0x000166a8) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf87,	// (0x0001c166) cam4_image_uncrop_qvga_pane

0xcfe0,	// (0x0001c1bf) vid4_image_uncrop_qcif_pane

0xd916,	// (0x0001caf5) cam6_image_uncrop_qvga_pane_ParamLimits

0xd916,	// (0x0001caf5) cam6_image_uncrop_qvga_pane

0xd9de,	// (0x0001cbbd) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9de,	// (0x0001cbbd) vid6_image_uncrop_qcif_pane

0x9332,	// (0x00018511) bg_popup_preview_window_pane_cp03

0xdc89,	// (0x0001ce68) list_cset_text2_pane

0xdc91,	// (0x0001ce70) main_cset6_text2_pane_g1

0xdc99,	// (0x0001ce78) main_cset6_text2_pane_t1

0xeaa1,	// (0x0001dc80) list_cset_text2_pane_t1_ParamLimits

0xeaa1,	// (0x0001dc80) list_cset_text2_pane_t1

0x93a2,	// (0x00018581) main_radioblah_pane_ParamLimits

0x780b,	// (0x000169ea) main_mobtv_info_pane_t3_ParamLimits

0x780b,	// (0x000169ea) main_mobtv_info_pane_t3

0x79a4,	// (0x00016b83) main_radioblah_pane_g1

0x79de,	// (0x00016bbd) main_radioblah_info_pane_g1

0x7a63,	// (0x00016c42) main_radioblah_info_pane_t3_ParamLimits

0x7a63,	// (0x00016c42) main_radioblah_info_pane_t3

0x2262,	// (0x00011441) highlight_cell_cale_month_pane_ParamLimits

0x2262,	// (0x00011441) highlight_cell_cale_month_pane

0x9332,	// (0x00018511) main_phob_fisheye_pane

0xc618,	// (0x0001b7f7) scroll_pane_cp0031_ParamLimits

0xc618,	// (0x0001b7f7) scroll_pane_cp0031

0xdaec,	// (0x0001cccb) wait_bar_pane_cp08_ParamLimits

0x7200,	// (0x000163df) cset_list_set_pane_copy1_ParamLimits

0xe20b,	// (0x0001d3ea) highlight_cell_cale_month_pane_g1

0x7ae6,	// (0x00016cc5) highlight_cell_cale_month_pane_t1

0xd6dc,	// (0x0001c8bb) list_gen_pane_cp01

0xd244,	// (0x0001c423) scroll_pane_01

0x7af4,	// (0x00016cd3) list_single_double_fisheye_pane

0x7afd,	// (0x00016cdc) list_double_fisheye_pane_g1_ParamLimits

0x7afd,	// (0x00016cdc) list_double_fisheye_pane_g1

0x7b09,	// (0x00016ce8) list_double_fisheye_pane_g2_ParamLimits

0x7b09,	// (0x00016ce8) list_double_fisheye_pane_g2

0x7b15,	// (0x00016cf4) list_double_fisheye_pane_g3_ParamLimits

0x7b15,	// (0x00016cf4) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001ee88) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001ee88) list_double_fisheye_pane_g

0x7b39,	// (0x00016d18) list_double_fisheye_pane_t1_ParamLimits

0x7b39,	// (0x00016d18) list_double_fisheye_pane_t1

0x7b54,	// (0x00016d33) list_double_fisheye_pane_t2_ParamLimits

0x7b54,	// (0x00016d33) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001ee93) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001ee93) list_double_fisheye_pane_t

0x9332,	// (0x00018511) main_call5_pane

0x7902,	// (0x00016ae1) sc_swipe_pane_ParamLimits

0x7902,	// (0x00016ae1) sc_swipe_pane

0x7b89,	// (0x00016d68) call5_image_pane_ParamLimits

0x7b89,	// (0x00016d68) call5_image_pane

0x7ba6,	// (0x00016d85) call5_swipe_1_pane_ParamLimits

0x7ba6,	// (0x00016d85) call5_swipe_1_pane

0x7bb9,	// (0x00016d98) call5_swipe_2_pane_ParamLimits

0x7bb9,	// (0x00016d98) call5_swipe_2_pane

0x7be4,	// (0x00016dc3) popup_call5_audio_first_window_ParamLimits

0x7be4,	// (0x00016dc3) popup_call5_audio_first_window

0xc4c8,	// (0x0001b6a7) call5_swipe_1_pane_g1_ParamLimits

0xc4c8,	// (0x0001b6a7) call5_swipe_1_pane_g1

0xe213,	// (0x0001d3f2) call5_swipe_1_pane_g2_ParamLimits

0xe213,	// (0x0001d3f2) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001ee98) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001ee98) call5_swipe_1_pane_g

0xe21f,	// (0x0001d3fe) call5_swipe_1_pane_t1_ParamLimits

0xe21f,	// (0x0001d3fe) call5_swipe_1_pane_t1

0xc4c8,	// (0x0001b6a7) call5_swipe_2_pane_g1_ParamLimits

0xc4c8,	// (0x0001b6a7) call5_swipe_2_pane_g1

0xe234,	// (0x0001d413) call5_swipe_2_pane_g2_ParamLimits

0xe234,	// (0x0001d413) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001ee9d) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001ee9d) call5_swipe_2_pane_g

0xe240,	// (0x0001d41f) call5_swipe_2_pane_t1_ParamLimits

0xe240,	// (0x0001d41f) call5_swipe_2_pane_t1

0xe255,	// (0x0001d434) sc_swipe_pane_g1_ParamLimits

0xe255,	// (0x0001d434) sc_swipe_pane_g1

0xe262,	// (0x0001d441) sc_swipe_pane_g2_ParamLimits

0xe262,	// (0x0001d441) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001eea2) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001eea2) sc_swipe_pane_g

0xe26e,	// (0x0001d44d) sc_swipe_pane_t1_ParamLimits

0xe26e,	// (0x0001d44d) sc_swipe_pane_t1

0x9332,	// (0x00018511) main_cmail_launcher_pane

0x7bf5,	// (0x00016dd4) aid_size_cell_cmail_l_ParamLimits

0x7bf5,	// (0x00016dd4) aid_size_cell_cmail_l

0x7c0f,	// (0x00016dee) grid_cmail_l_pane_ParamLimits

0x7c0f,	// (0x00016dee) grid_cmail_l_pane

0x7c2a,	// (0x00016e09) cell_cmail_l_pane_ParamLimits

0x7c2a,	// (0x00016e09) cell_cmail_l_pane

0x7c50,	// (0x00016e2f) cell_cmail_l_pane_g1_ParamLimits

0x7c50,	// (0x00016e2f) cell_cmail_l_pane_g1

0x7c61,	// (0x00016e40) cell_cmail_l_pane_t1_ParamLimits

0x7c61,	// (0x00016e40) cell_cmail_l_pane_t1

0xe283,	// (0x0001d462) cell_cmail_l_pane_t2_ParamLimits

0xe283,	// (0x0001d462) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001eea7) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001eea7) cell_cmail_l_pane_t

0x93a2,	// (0x00018581) grid_highlight_pane_cp018_ParamLimits

0x93a2,	// (0x00018581) grid_highlight_pane_cp018

0x016d,	// (0x0000f34c) main2_pane_ParamLimits

0x016d,	// (0x0000f34c) main2_pane

0x9bfd,	// (0x00018ddc) popup_sp_fs_action_menu_bg_pane_g1

0x9c05,	// (0x00018de4) popup_sp_fs_action_menu_bg_pane_g2

0x9c0d,	// (0x00018dec) popup_sp_fs_action_menu_bg_pane_g3

0x9c15,	// (0x00018df4) popup_sp_fs_action_menu_bg_pane_g4

0x9c1d,	// (0x00018dfc) popup_sp_fs_action_menu_bg_pane_g5

0x9c25,	// (0x00018e04) popup_sp_fs_action_menu_bg_pane_g6

0x9c2d,	// (0x00018e0c) popup_sp_fs_action_menu_bg_pane_g7

0x9c35,	// (0x00018e14) popup_sp_fs_action_menu_bg_pane_g8

0x9c3d,	// (0x00018e1c) popup_sp_fs_action_menu_bg_pane_g9

0x9c45,	// (0x00018e24) popup_sp_fs_action_menu_bg_pane_g10

0x9c45,	// (0x00018e24) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0001e365) popup_sp_fs_action_menu_bg_pane_g

0x119f,	// (0x0001037e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x2_t3_g3_g1

0x11ab,	// (0x0001038a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x11ab,	// (0x0001038a) list_medium_line_x2_t3_g3_g2

0x11b7,	// (0x00010396) list_medium_line_x2_t3_g3_g3_ParamLimits

0x11b7,	// (0x00010396) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001e417) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001e417) list_medium_line_x2_t3_g3_g

0x11c3,	// (0x000103a2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x11c3,	// (0x000103a2) list_medium_line_x2_t3_g3_t1

0x11d8,	// (0x000103b7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x11d8,	// (0x000103b7) list_medium_line_x2_t3_g3_t2

0x11ec,	// (0x000103cb) list_medium_line_x2_t3_g3_t3_ParamLimits

0x11ec,	// (0x000103cb) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001e41e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001e41e) list_medium_line_x2_t3_g3_t

0x119f,	// (0x0001037e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x2_t3_g2_g1

0x11b7,	// (0x00010396) list_medium_line_x2_t3_g2_g2_ParamLimits

0x11b7,	// (0x00010396) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001e425) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001e425) list_medium_line_x2_t3_g2_g

0x1201,	// (0x000103e0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1201,	// (0x000103e0) list_medium_line_x2_t3_g2_t1

0x1217,	// (0x000103f6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1217,	// (0x000103f6) list_medium_line_x2_t3_g2_t2

0x1229,	// (0x00010408) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1229,	// (0x00010408) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001e42a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001e42a) list_medium_line_x2_t3_g2_t

0x119f,	// (0x0001037e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x2_t4_g4_g1

0x1247,	// (0x00010426) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1247,	// (0x00010426) list_medium_line_x2_t4_g4_g2

0x11ab,	// (0x0001038a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x11ab,	// (0x0001038a) list_medium_line_x2_t4_g4_g3

0x1253,	// (0x00010432) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1253,	// (0x00010432) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001e431) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001e431) list_medium_line_x2_t4_g4_g

0x125f,	// (0x0001043e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x125f,	// (0x0001043e) list_medium_line_x2_t4_g4_t1

0x1279,	// (0x00010458) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1279,	// (0x00010458) list_medium_line_x2_t4_g4_t2

0x128e,	// (0x0001046d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x128e,	// (0x0001046d) list_medium_line_x2_t4_g4_t3

0x12a3,	// (0x00010482) list_medium_line_x2_t4_g4_t4_ParamLimits

0x12a3,	// (0x00010482) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001e43a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001e43a) list_medium_line_x2_t4_g4_t

0x119f,	// (0x0001037e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x2_t2_g4_g1

0x1247,	// (0x00010426) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1247,	// (0x00010426) list_medium_line_x2_t2_g4_g2

0x11ab,	// (0x0001038a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x11ab,	// (0x0001038a) list_medium_line_x2_t2_g4_g3

0x11b7,	// (0x00010396) list_medium_line_x2_t2_g4_g4_ParamLimits

0x11b7,	// (0x00010396) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001e4a1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001e4a1) list_medium_line_x2_t2_g4_g

0x2288,	// (0x00011467) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2288,	// (0x00011467) list_medium_line_x2_t2_g4_t1

0x11ec,	// (0x000103cb) list_medium_line_x2_t2_g4_t2_ParamLimits

0x11ec,	// (0x000103cb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001e4aa) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001e4aa) list_medium_line_x2_t2_g4_t

0x119f,	// (0x0001037e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x2_t2_g3_g1

0x11ab,	// (0x0001038a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x11ab,	// (0x0001038a) list_medium_line_x2_t2_g3_g2

0x11b7,	// (0x00010396) list_medium_line_x2_t2_g3_g3_ParamLimits

0x11b7,	// (0x00010396) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001e417) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001e417) list_medium_line_x2_t2_g3_g

0x229d,	// (0x0001147c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x229d,	// (0x0001147c) list_medium_line_x2_t2_g3_t1

0x11ec,	// (0x000103cb) list_medium_line_x2_t2_g3_t2_ParamLimits

0x11ec,	// (0x000103cb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001e4af) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001e4af) list_medium_line_x2_t2_g3_t

0x23dc,	// (0x000115bb) main_sp_fs_list_pane_ParamLimits

0x23dc,	// (0x000115bb) main_sp_fs_list_pane

0xd208,	// (0x0001c3e7) sp_fs_scroll_pane_ParamLimits

0xd208,	// (0x0001c3e7) sp_fs_scroll_pane

0x23e8,	// (0x000115c7) list_medium_line_x2_t3_t1

0x23f8,	// (0x000115d7) list_medium_line_x2_t3_t2

0x2406,	// (0x000115e5) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e4fa) list_medium_line_x2_t3_t

0x2414,	// (0x000115f3) list_medium_line_x3_t4_t1

0x2424,	// (0x00011603) list_medium_line_x3_t4_t2

0x2432,	// (0x00011611) list_medium_line_x3_t4_t3

0x2406,	// (0x000115e5) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e501) list_medium_line_x3_t4_t

0x2440,	// (0x0001161f) list_medium_line_x4_t5_t1

0x2450,	// (0x0001162f) list_medium_line_x4_t5_t2

0x2432,	// (0x00011611) list_medium_line_x4_t5_t3

0x245e,	// (0x0001163d) list_medium_line_x4_t5_t4

0x2406,	// (0x000115e5) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e50a) list_medium_line_x4_t5_t

0x119f,	// (0x0001037e) list_medium_line_t4_g4_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_t4_g4_g1

0x246c,	// (0x0001164b) list_medium_line_t4_g4_g2_ParamLimits

0x246c,	// (0x0001164b) list_medium_line_t4_g4_g2

0x2478,	// (0x00011657) list_medium_line_t4_g4_g3_ParamLimits

0x2478,	// (0x00011657) list_medium_line_t4_g4_g3

0x11b7,	// (0x00010396) list_medium_line_t4_g4_g4_ParamLimits

0x11b7,	// (0x00010396) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e515) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e515) list_medium_line_t4_g4_g

0x2484,	// (0x00011663) list_medium_line_t4_g4_t1_ParamLimits

0x2484,	// (0x00011663) list_medium_line_t4_g4_t1

0x2499,	// (0x00011678) list_medium_line_t4_g4_t2_ParamLimits

0x2499,	// (0x00011678) list_medium_line_t4_g4_t2

0x24af,	// (0x0001168e) list_medium_line_t4_g4_t3_ParamLimits

0x24af,	// (0x0001168e) list_medium_line_t4_g4_t3

0x11ec,	// (0x000103cb) list_medium_line_t4_g4_t4_ParamLimits

0x11ec,	// (0x000103cb) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e51e) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e51e) list_medium_line_t4_g4_t

0x2564,	// (0x00011743) chi_dic_find_pane_g1

0x35bf,	// (0x0001279e) main_tport_pane

0x6525,	// (0x00015704) list_medium_line_plain_t1

0x65d7,	// (0x000157b6) list_medium_line_t2_g2_g1_ParamLimits

0x65d7,	// (0x000157b6) list_medium_line_t2_g2_g1

0x65e3,	// (0x000157c2) list_medium_line_t2_g2_g2_ParamLimits

0x65e3,	// (0x000157c2) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001ebdf) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001ebdf) list_medium_line_t2_g2_g

0x65ef,	// (0x000157ce) list_medium_line_t2_g2_t1_ParamLimits

0x65ef,	// (0x000157ce) list_medium_line_t2_g2_t1

0x6609,	// (0x000157e8) list_medium_line_t2_g2_t2_ParamLimits

0x6609,	// (0x000157e8) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001ebe4) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001ebe4) list_medium_line_t2_g2_t

0xd756,	// (0x0001c935) aid_sp_fs_list_icon_a_sm

0xd75e,	// (0x0001c93d) aid_sp_fs_list_icon_d

0xd766,	// (0x0001c945) aid_sp_fs_text_primary

0xd76f,	// (0x0001c94e) aid_sp_fs_text_secondary

0x6c84,	// (0x00015e63) list_medium_line

0x6c84,	// (0x00015e63) list_medium_line_g2

0x6c84,	// (0x00015e63) list_medium_line_g3

0x6c84,	// (0x00015e63) list_medium_line_plain

0x6c84,	// (0x00015e63) list_medium_line_plain_t2

0x6c84,	// (0x00015e63) list_medium_line_plain_t3

0x6c84,	// (0x00015e63) list_medium_line_right_icon

0x6c84,	// (0x00015e63) list_medium_line_right_iconx2

0x6c84,	// (0x00015e63) list_medium_line_t2

0x6c84,	// (0x00015e63) list_medium_line_t2_g2

0x6c84,	// (0x00015e63) list_medium_line_t2_g3

0x6c84,	// (0x00015e63) list_medium_line_t2_right_icon

0x6c84,	// (0x00015e63) list_medium_line_t2_right_iconx2

0x6c84,	// (0x00015e63) list_medium_line_t3

0x6c84,	// (0x00015e63) list_medium_line_t3_g2

0x6c84,	// (0x00015e63) list_medium_line_t3_g3

0x6c84,	// (0x00015e63) list_medium_line_t3_right_iconx2

0x6c8d,	// (0x00015e6c) list_medium_line_t4_g4

0x6c84,	// (0x00015e63) list_medium_line_x2

0x6c84,	// (0x00015e63) list_medium_line_x2_t2_g2

0x6c84,	// (0x00015e63) list_medium_line_x2_t2_g3

0x6c84,	// (0x00015e63) list_medium_line_x2_t2_g4

0x6c84,	// (0x00015e63) list_medium_line_x2_t3

0x6c84,	// (0x00015e63) list_medium_line_x2_t3_g2

0x6c84,	// (0x00015e63) list_medium_line_x2_t3_g3

0x6c84,	// (0x00015e63) list_medium_line_x2_t3_g4

0x6c84,	// (0x00015e63) list_medium_line_x2_t4_g2

0x6c84,	// (0x00015e63) list_medium_line_x2_t4_g4

0x6c96,	// (0x00015e75) list_medium_line_x3

0x6c96,	// (0x00015e75) list_medium_line_x3_t4

0x6c96,	// (0x00015e75) list_medium_line_x3_t4_g4

0x6c8d,	// (0x00015e6c) list_medium_line_x4_t4

0x6c8d,	// (0x00015e6c) list_medium_line_x4_t4_g7

0x6c8d,	// (0x00015e6c) list_medium_line_x4_t5

0x6c9f,	// (0x00015e7e) list_single_fs_dyc_pane_ParamLimits

0x6c9f,	// (0x00015e7e) list_single_fs_dyc_pane

0x119f,	// (0x0001037e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x4_t4_g7_g1

0x73fa,	// (0x000165d9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x73fa,	// (0x000165d9) list_medium_line_x4_t4_g7_g2

0x7406,	// (0x000165e5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7406,	// (0x000165e5) list_medium_line_x4_t4_g7_g3

0x7415,	// (0x000165f4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7415,	// (0x000165f4) list_medium_line_x4_t4_g7_g4

0x7421,	// (0x00016600) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7421,	// (0x00016600) list_medium_line_x4_t4_g7_g5

0x7430,	// (0x0001660f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7430,	// (0x0001660f) list_medium_line_x4_t4_g7_g6

0x743f,	// (0x0001661e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x743f,	// (0x0001661e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001edaf) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001edaf) list_medium_line_x4_t4_g7_g

0x744b,	// (0x0001662a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x744b,	// (0x0001662a) list_medium_line_x4_t4_g7_t1

0x7460,	// (0x0001663f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7460,	// (0x0001663f) list_medium_line_x4_t4_g7_t2

0x7475,	// (0x00016654) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7475,	// (0x00016654) list_medium_line_x4_t4_g7_t3

0x748a,	// (0x00016669) list_medium_line_x4_t4_g7_t4_ParamLimits

0x748a,	// (0x00016669) list_medium_line_x4_t4_g7_t4

0x749c,	// (0x0001667b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x749c,	// (0x0001667b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001edbe) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001edbe) list_medium_line_x4_t4_g7_t

0x74ae,	// (0x0001668d) list_single_dyc_row_pane_ParamLimits

0x74ae,	// (0x0001668d) list_single_dyc_row_pane

0x7b76,	// (0x00016d55) call5_gesture_pane_ParamLimits

0x7b76,	// (0x00016d55) call5_gesture_pane

0x7bcc,	// (0x00016dab) call5_windows_pane_ParamLimits

0x7bcc,	// (0x00016dab) call5_windows_pane

0x7c77,	// (0x00016e56) call5_swipe_1_pane_cp_ParamLimits

0x7c77,	// (0x00016e56) call5_swipe_1_pane_cp

0x7c83,	// (0x00016e62) call5_swipe_2_pane_cp_ParamLimits

0x7c83,	// (0x00016e62) call5_swipe_2_pane_cp

0xa896,	// (0x00019a75) call5_image_pane_cp

0x7c8f,	// (0x00016e6e) popup_call5_audio_first_window_cp_ParamLimits

0x7c8f,	// (0x00016e6e) popup_call5_audio_first_window_cp

0xe255,	// (0x0001d434) call5_swipe_1_pane_g1_cp_ParamLimits

0xe255,	// (0x0001d434) call5_swipe_1_pane_g1_cp

0xe295,	// (0x0001d474) call5_swipe_1_pane_g2_cp

0xe26e,	// (0x0001d44d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe26e,	// (0x0001d44d) call5_swipe_1_pane_t1_cp

0xe255,	// (0x0001d434) call5_swipe_2_pane_g1_cp_ParamLimits

0xe255,	// (0x0001d434) call5_swipe_2_pane_g1_cp

0xe29d,	// (0x0001d47c) call5_swipe_2_pane_g2_cp

0xe2a5,	// (0x0001d484) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2a5,	// (0x0001d484) call5_swipe_2_pane_t1_cp

0x93a2,	// (0x00018581) main_sp_fs_email_pane

0xe2ba,	// (0x0001d499) main_sp_fs_listscroll_pane_te

0xe2c3,	// (0x0001d4a2) popup_sp_fs_action_menu_pane_ParamLimits

0xe2c3,	// (0x0001d4a2) popup_sp_fs_action_menu_pane

0xc268,	// (0x0001b447) bg_sp_fs_ctrlbar_pane_g1

0xe305,	// (0x0001d4e4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe30e,	// (0x0001d4ed) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe317,	// (0x0001d4f6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc268,	// (0x0001b447) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001eeac) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc04b,	// (0x0001b22a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc04b,	// (0x0001b22a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe320,	// (0x0001d4ff) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe320,	// (0x0001d4ff) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe32c,	// (0x0001d50b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe32c,	// (0x0001d50b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001eeb5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001eeb5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe338,	// (0x0001d517) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe338,	// (0x0001d517) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c9d,	// (0x00016e7c) list_medium_line_t2_right_icon_g1

0x7ca5,	// (0x00016e84) list_medium_line_t2_right_icon_t1

0x7cb5,	// (0x00016e94) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001eeba) list_medium_line_t2_right_icon_t

0xbd4b,	// (0x0001af2a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbd4b,	// (0x0001af2a) bg_sp_fs_ctrlbar_pane

0x7d0f,	// (0x00016eee) main_sp_fs_ctrlbar_button_pane_cp01

0x7d19,	// (0x00016ef8) main_sp_fs_ctrlbar_ddmenu_pane

0xe38a,	// (0x0001d569) main_sp_fs_ctrlbar_pane_g1

0xe396,	// (0x0001d575) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001eebf) main_sp_fs_ctrlbar_pane_g

0xe3a2,	// (0x0001d581) main_sp_fs_ctrlbar_pane_t1

0x7d23,	// (0x00016f02) main_sp_fs_ctrlbar_pane

0x7d47,	// (0x00016f26) main_sp_fs_listscroll_pane_te_cp01

0x7d67,	// (0x00016f46) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d67,	// (0x00016f46) popup_sp_fs_action_menu_pane_cp01

0x93a2,	// (0x00018581) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x93a2,	// (0x00018581) bg_sp_fs_highlight_list_pane_cp01

0xe3d2,	// (0x0001d5b1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3d2,	// (0x0001d5b1) sp_fs_action_menu_list_gene_pane_g1

0xe3e1,	// (0x0001d5c0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3e1,	// (0x0001d5c0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001eec9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001eec9) sp_fs_action_menu_list_gene_pane_g

0xe3ee,	// (0x0001d5cd) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ee,	// (0x0001d5cd) sp_fs_action_menu_list_gene_pane_t1

0xe406,	// (0x0001d5e5) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe406,	// (0x0001d5e5) sp_fs_action_menu_list_gene_pane

0xe423,	// (0x0001d602) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe423,	// (0x0001d602) popup_sp_fs_action_menu_bg_pane

0xe431,	// (0x0001d610) sp_fs_action_menu_list_pane_ParamLimits

0xe431,	// (0x0001d610) sp_fs_action_menu_list_pane

0xe44f,	// (0x0001d62e) sp_fs_scroll_pane_cp01_ParamLimits

0xe44f,	// (0x0001d62e) sp_fs_scroll_pane_cp01

0x7d97,	// (0x00016f76) list_medium_line_plain_t2_t1

0x7da7,	// (0x00016f86) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001eece) list_medium_line_plain_t2_t

0x7db7,	// (0x00016f96) list_medium_line_plain_t3_t1

0x7dc7,	// (0x00016fa6) list_medium_line_plain_t3_t2

0x7dd5,	// (0x00016fb4) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001eed3) list_medium_line_plain_t3_t

0x119f,	// (0x0001037e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x2_t2_g2_g1

0x11b7,	// (0x00010396) list_medium_line_x2_t2_g2_g2_ParamLimits

0x11b7,	// (0x00010396) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001e425) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001e425) list_medium_line_x2_t2_g2_g

0x2484,	// (0x00011663) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2484,	// (0x00011663) list_medium_line_x2_t2_g2_t1

0x11ec,	// (0x000103cb) list_medium_line_x2_t2_g2_t2_ParamLimits

0x11ec,	// (0x000103cb) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001eeda) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001eeda) list_medium_line_x2_t2_g2_t

0x119f,	// (0x0001037e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x2_t4_g2_g1

0x11b7,	// (0x00010396) list_medium_line_x2_t4_g2_g2_ParamLimits

0x11b7,	// (0x00010396) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001e425) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001e425) list_medium_line_x2_t4_g2_g

0x7de3,	// (0x00016fc2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7de3,	// (0x00016fc2) list_medium_line_x2_t4_g2_t1

0x7dfd,	// (0x00016fdc) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7dfd,	// (0x00016fdc) list_medium_line_x2_t4_g2_t2

0x7e12,	// (0x00016ff1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e12,	// (0x00016ff1) list_medium_line_x2_t4_g2_t3

0x11ec,	// (0x000103cb) list_medium_line_x2_t4_g2_t4_ParamLimits

0x11ec,	// (0x000103cb) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001eedf) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001eedf) list_medium_line_x2_t4_g2_t

0x7e27,	// (0x00017006) list_medium_line_t3_right_iconx2_g1

0x7c9d,	// (0x00016e7c) list_medium_line_t3_right_iconx2_g2

0x7e2f,	// (0x0001700e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001eee8) list_medium_line_t3_right_iconx2_g

0x7e39,	// (0x00017018) list_medium_line_t3_right_iconx2_t1

0x7e49,	// (0x00017028) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001eeef) list_medium_line_t3_right_iconx2_t

0x119f,	// (0x0001037e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x3_t4_g4_g1

0x11ab,	// (0x0001038a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x11ab,	// (0x0001038a) list_medium_line_x3_t4_g4_g2

0x246c,	// (0x0001164b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x246c,	// (0x0001164b) list_medium_line_x3_t4_g4_g3

0x7e57,	// (0x00017036) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e57,	// (0x00017036) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001eef4) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001eef4) list_medium_line_x3_t4_g4_g

0x7e63,	// (0x00017042) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e63,	// (0x00017042) list_medium_line_x3_t4_g4_t1

0x7e7a,	// (0x00017059) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e7a,	// (0x00017059) list_medium_line_x3_t4_g4_t2

0x7e95,	// (0x00017074) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7e95,	// (0x00017074) list_medium_line_x3_t4_g4_t3

0x7eaa,	// (0x00017089) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7eaa,	// (0x00017089) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001eefd) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001eefd) list_medium_line_x3_t4_g4_t

0x7ec7,	// (0x000170a6) list_single_dyc_row_text_pane_t1_ParamLimits

0x7ec7,	// (0x000170a6) list_single_dyc_row_text_pane_t1

0x7f10,	// (0x000170ef) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f10,	// (0x000170ef) list_single_dyc_row_text_pane_t2

0xe475,	// (0x0001d654) list_single_dyc_row_text_pane_t3_ParamLimits

0xe475,	// (0x0001d654) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001ef06) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001ef06) list_single_dyc_row_text_pane_t

0xe499,	// (0x0001d678) list_single_dyc_row_pane_g1_ParamLimits

0xe499,	// (0x0001d678) list_single_dyc_row_pane_g1

0xe4a5,	// (0x0001d684) list_single_dyc_row_pane_g2_ParamLimits

0xe4a5,	// (0x0001d684) list_single_dyc_row_pane_g2

0xe4b1,	// (0x0001d690) list_single_dyc_row_pane_g3_ParamLimits

0xe4b1,	// (0x0001d690) list_single_dyc_row_pane_g3

0xe4bd,	// (0x0001d69c) list_single_dyc_row_pane_g4_ParamLimits

0xe4bd,	// (0x0001d69c) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001ef13) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001ef13) list_single_dyc_row_pane_g

0xe4c9,	// (0x0001d6a8) list_single_dyc_row_text_pane_ParamLimits

0xe4c9,	// (0x0001d6a8) list_single_dyc_row_text_pane

0x9332,	// (0x00018511) bg_sp_fs_scroll_pane

0xe4e8,	// (0x0001d6c7) thumb_sp_fs_scroll_pane

0x65d7,	// (0x000157b6) list_medium_line_g1_ParamLimits

0x65d7,	// (0x000157b6) list_medium_line_g1

0x8045,	// (0x00017224) list_medium_line_t1_ParamLimits

0x8045,	// (0x00017224) list_medium_line_t1

0x119f,	// (0x0001037e) list_medium_line_x2_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x2_g1

0x11ab,	// (0x0001038a) list_medium_line_x2_g2_ParamLimits

0x11ab,	// (0x0001038a) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001ef1c) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001ef1c) list_medium_line_x2_g

0xe4f1,	// (0x0001d6d0) list_medium_line_x2_t1_ParamLimits

0xe4f1,	// (0x0001d6d0) list_medium_line_x2_t1

0x119f,	// (0x0001037e) list_medium_line_x3_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x3_g1

0x11ab,	// (0x0001038a) list_medium_line_x3_g2_ParamLimits

0x11ab,	// (0x0001038a) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001ef1c) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001ef1c) list_medium_line_x3_g

0xe4f1,	// (0x0001d6d0) list_medium_line_x3_t1_ParamLimits

0xe4f1,	// (0x0001d6d0) list_medium_line_x3_t1

0xe507,	// (0x0001d6e6) thumb_sp_fs_scroll_pane_g1

0xe510,	// (0x0001d6ef) thumb_sp_fs_scroll_pane_g2

0xe519,	// (0x0001d6f8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ef21) thumb_sp_fs_scroll_pane_g

0xe507,	// (0x0001d6e6) bg_sp_fs_scroll_pane_g1

0xe510,	// (0x0001d6ef) bg_sp_fs_scroll_pane_g2

0xe519,	// (0x0001d6f8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ef21) bg_sp_fs_scroll_pane_g

0x119f,	// (0x0001037e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x119f,	// (0x0001037e) list_medium_line_x2_t3_g4_g1

0x1247,	// (0x00010426) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1247,	// (0x00010426) list_medium_line_x2_t3_g4_g2

0x11ab,	// (0x0001038a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x11ab,	// (0x0001038a) list_medium_line_x2_t3_g4_g3

0x11b7,	// (0x00010396) list_medium_line_x2_t3_g4_g4_ParamLimits

0x11b7,	// (0x00010396) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001e4a1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001e4a1) list_medium_line_x2_t3_g4_g

0x805a,	// (0x00017239) list_medium_line_x2_t3_g4_t1_ParamLimits

0x805a,	// (0x00017239) list_medium_line_x2_t3_g4_t1

0x8074,	// (0x00017253) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8074,	// (0x00017253) list_medium_line_x2_t3_g4_t2

0x11ec,	// (0x000103cb) list_medium_line_x2_t3_g4_t3_ParamLimits

0x11ec,	// (0x000103cb) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001ef28) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001ef28) list_medium_line_x2_t3_g4_t

0x65d7,	// (0x000157b6) list_medium_line_g2_g1_ParamLimits

0x65d7,	// (0x000157b6) list_medium_line_g2_g1

0x65e3,	// (0x000157c2) list_medium_line_g2_g2_ParamLimits

0x65e3,	// (0x000157c2) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001ebdf) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001ebdf) list_medium_line_g2_g

0x808d,	// (0x0001726c) list_medium_line_g2_t1_ParamLimits

0x808d,	// (0x0001726c) list_medium_line_g2_t1

0x65d7,	// (0x000157b6) list_medium_line_t3_g2_g1_ParamLimits

0x65d7,	// (0x000157b6) list_medium_line_t3_g2_g1

0x65e3,	// (0x000157c2) list_medium_line_t3_g2_g2_ParamLimits

0x65e3,	// (0x000157c2) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001ebdf) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001ebdf) list_medium_line_t3_g2_g

0x80a2,	// (0x00017281) list_medium_line_t3_g2_t1_ParamLimits

0x80a2,	// (0x00017281) list_medium_line_t3_g2_t1

0x80b9,	// (0x00017298) list_medium_line_t3_g2_t2_ParamLimits

0x80b9,	// (0x00017298) list_medium_line_t3_g2_t2

0x80ce,	// (0x000172ad) list_medium_line_t3_g2_t3_ParamLimits

0x80ce,	// (0x000172ad) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001ef2f) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001ef2f) list_medium_line_t3_g2_t

0x7c9d,	// (0x00016e7c) list_medium_line_right_icon_g1

0x80e7,	// (0x000172c6) list_medium_line_right_icon_t1

0x65d7,	// (0x000157b6) list_medium_line_t2_g1_ParamLimits

0x65d7,	// (0x000157b6) list_medium_line_t2_g1

0x80f5,	// (0x000172d4) list_medium_line_t2_t1_ParamLimits

0x80f5,	// (0x000172d4) list_medium_line_t2_t1

0x810f,	// (0x000172ee) list_medium_line_t2_t2_ParamLimits

0x810f,	// (0x000172ee) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ef36) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ef36) list_medium_line_t2_t

0x65d7,	// (0x000157b6) list_medium_line_t3_g1_ParamLimits

0x65d7,	// (0x000157b6) list_medium_line_t3_g1

0x8128,	// (0x00017307) list_medium_line_t3_t1_ParamLimits

0x8128,	// (0x00017307) list_medium_line_t3_t1

0x813f,	// (0x0001731e) list_medium_line_t3_t2_ParamLimits

0x813f,	// (0x0001731e) list_medium_line_t3_t2

0x8154,	// (0x00017333) list_medium_line_t3_t3_ParamLimits

0x8154,	// (0x00017333) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ef3b) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ef3b) list_medium_line_t3_t

0x65d7,	// (0x000157b6) list_medium_line_g3_g1_ParamLimits

0x65d7,	// (0x000157b6) list_medium_line_g3_g1

0x8166,	// (0x00017345) list_medium_line_g3_g2_ParamLimits

0x8166,	// (0x00017345) list_medium_line_g3_g2

0x65e3,	// (0x000157c2) list_medium_line_g3_g3_ParamLimits

0x65e3,	// (0x000157c2) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001ef42) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001ef42) list_medium_line_g3_g

0x8172,	// (0x00017351) list_medium_line_g3_t1_ParamLimits

0x8172,	// (0x00017351) list_medium_line_g3_t1

0x65d7,	// (0x000157b6) list_medium_line_t2_g3_g1_ParamLimits

0x65d7,	// (0x000157b6) list_medium_line_t2_g3_g1

0x8166,	// (0x00017345) list_medium_line_t2_g3_g2_ParamLimits

0x8166,	// (0x00017345) list_medium_line_t2_g3_g2

0x65e3,	// (0x000157c2) list_medium_line_t2_g3_g3_ParamLimits

0x65e3,	// (0x000157c2) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001ef42) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001ef42) list_medium_line_t2_g3_g

0x8187,	// (0x00017366) list_medium_line_t2_g3_t1_ParamLimits

0x8187,	// (0x00017366) list_medium_line_t2_g3_t1

0x819e,	// (0x0001737d) list_medium_line_t2_g3_t2_ParamLimits

0x819e,	// (0x0001737d) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001ef49) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001ef49) list_medium_line_t2_g3_t

0x65d7,	// (0x000157b6) list_medium_line_t3_g3_g1_ParamLimits

0x65d7,	// (0x000157b6) list_medium_line_t3_g3_g1

0x8166,	// (0x00017345) list_medium_line_t3_g3_g2_ParamLimits

0x8166,	// (0x00017345) list_medium_line_t3_g3_g2

0x65e3,	// (0x000157c2) list_medium_line_t3_g3_g3_ParamLimits

0x65e3,	// (0x000157c2) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001ef42) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001ef42) list_medium_line_t3_g3_g

0x81b9,	// (0x00017398) list_medium_line_t3_g3_t1_ParamLimits

0x81b9,	// (0x00017398) list_medium_line_t3_g3_t1

0x81cd,	// (0x000173ac) list_medium_line_t3_g3_t2_ParamLimits

0x81cd,	// (0x000173ac) list_medium_line_t3_g3_t2

0x81df,	// (0x000173be) list_medium_line_t3_g3_t3_ParamLimits

0x81df,	// (0x000173be) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001ef4e) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001ef4e) list_medium_line_t3_g3_t

0x7e27,	// (0x00017006) list_medium_line_right_iconx2_g1

0x7c9d,	// (0x00016e7c) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ef55) list_medium_line_right_iconx2_g

0x81f3,	// (0x000173d2) list_medium_line_right_iconx2_t1

0x7e27,	// (0x00017006) list_medium_line_t2_right_iconx2_g1

0x7c9d,	// (0x00016e7c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ef55) list_medium_line_t2_right_iconx2_g

0x8201,	// (0x000173e0) list_medium_line_t2_right_iconx2_t1

0x8211,	// (0x000173f0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001ef5a) list_medium_line_t2_right_iconx2_t

0x8223,	// (0x00017402) list_medium_line_x4_t4_t1

0x8231,	// (0x00017410) list_medium_line_x4_t4_t2

0x8241,	// (0x00017420) list_medium_line_x4_t4_t3

0x8251,	// (0x00017430) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001ef5f) list_medium_line_x4_t4_t

0x82a4,	// (0x00017483) tport_appsw_pane_ParamLimits

0x82a4,	// (0x00017483) tport_appsw_pane

0x82bc,	// (0x0001749b) tport_contact_pane_ParamLimits

0x82bc,	// (0x0001749b) tport_contact_pane

0x82d4,	// (0x000174b3) tport_listscroll_pane_ParamLimits

0x82d4,	// (0x000174b3) tport_listscroll_pane

0x82ee,	// (0x000174cd) cell_tport_appsw_pane_ParamLimits

0x82ee,	// (0x000174cd) cell_tport_appsw_pane

0xd08b,	// (0x0001c26a) tport_appsw_pane_g1_ParamLimits

0xd08b,	// (0x0001c26a) tport_appsw_pane_g1

0xe522,	// (0x0001d701) tport_contact_pane_g1

0xdd5d,	// (0x0001cf3c) tport_contact_pane_t1

0xe52b,	// (0x0001d70a) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001ef68) tport_contact_pane_t

0xe539,	// (0x0001d718) list_tport_pane

0xe542,	// (0x0001d721) scroll_pane_cp_030

0x8336,	// (0x00017515) cell_tport_appsw_pane_g1

0x8346,	// (0x00017525) cell_tport_appsw_pane_t1

0x8354,	// (0x00017533) grid_highlight_pane_cp019

0x835c,	// (0x0001753b) list_tport_double_graphic_pane_ParamLimits

0x835c,	// (0x0001753b) list_tport_double_graphic_pane

0x93a2,	// (0x00018581) list_highlight_pane_cp023_ParamLimits

0x93a2,	// (0x00018581) list_highlight_pane_cp023

0x8369,	// (0x00017548) list_tport_double_graphic_pane_g1_ParamLimits

0x8369,	// (0x00017548) list_tport_double_graphic_pane_g1

0x8376,	// (0x00017555) list_tport_double_graphic_pane_t1_ParamLimits

0x8376,	// (0x00017555) list_tport_double_graphic_pane_t1

0x838b,	// (0x0001756a) list_tport_double_graphic_pane_t2_ParamLimits

0x838b,	// (0x0001756a) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001ef74) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001ef74) list_tport_double_graphic_pane_t

0x9332,	// (0x00018511) main_cale_note_pane

0x5c9e,	// (0x00014e7d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5c9e,	// (0x00014e7d) cell_vitu2_function_top_wide_pane_cp01

0x781f,	// (0x000169fe) wait_bar_pane_cp05_ParamLimits

0x93a2,	// (0x00018581) listscroll_cmail_pane

0xe54b,	// (0x0001d72a) list_cmail_pane

0x839d,	// (0x0001757c) list_cmail_body_pane

0x83b2,	// (0x00017591) list_single_cmail_header_caption_pane

0x83cb,	// (0x000175aa) list_single_cmail_header_detail_pane_ParamLimits

0x83cb,	// (0x000175aa) list_single_cmail_header_detail_pane

0xe55b,	// (0x0001d73a) list_single_cmail_header_caption_pane_t1

0x83f4,	// (0x000175d3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83f4,	// (0x000175d3) list_single_cmail_header_detail_pane_g1

0xe572,	// (0x0001d751) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe572,	// (0x0001d751) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001ef79) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001ef79) list_single_cmail_header_detail_pane_g

0x840c,	// (0x000175eb) list_single_cmail_header_detail_pane_t1_ParamLimits

0x840c,	// (0x000175eb) list_single_cmail_header_detail_pane_t1

0x844a,	// (0x00017629) list_single_cmail_header_editor_pane_bg_ParamLimits

0x844a,	// (0x00017629) list_single_cmail_header_editor_pane_bg

0xe5af,	// (0x0001d78e) list_cmail_body_pane_g1

0xe5b8,	// (0x0001d797) list_cmail_body_pane_t1

0xd0f4,	// (0x0001c2d3) list_single_cmail_header_editor_pane_bg_g1

0x9fd2,	// (0x000191b1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd104,	// (0x0001c2e3) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd0fc,	// (0x0001c2db) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3a5,	// (0x0001c584) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd124,	// (0x0001c303) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd114,	// (0x0001c2f3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd11c,	// (0x0001c2fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9fb2,	// (0x00019191) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8463,	// (0x00017642) calenote_gesture_pane_ParamLimits

0x8463,	// (0x00017642) calenote_gesture_pane

0x8483,	// (0x00017662) calenote_window_pane_ParamLimits

0x8483,	// (0x00017662) calenote_window_pane

0xe5c6,	// (0x0001d7a5) popup_note_window_cp01

0x849f,	// (0x0001767e) calenote_swipe_1_pane_ParamLimits

0x849f,	// (0x0001767e) calenote_swipe_1_pane

0x7c83,	// (0x00016e62) calenote_swipe_2_pane_ParamLimits

0x7c83,	// (0x00016e62) calenote_swipe_2_pane

0xe255,	// (0x0001d434) calenote_swipe_1_pane_g1_ParamLimits

0xe255,	// (0x0001d434) calenote_swipe_1_pane_g1

0xe262,	// (0x0001d441) calenote_swipe_1_pane_g2_ParamLimits

0xe262,	// (0x0001d441) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001eea2) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001eea2) calenote_swipe_1_pane_g

0xe5d8,	// (0x0001d7b7) calenote_swipe_1_pane_t1_ParamLimits

0xe5d8,	// (0x0001d7b7) calenote_swipe_1_pane_t1

0xe255,	// (0x0001d434) calenote_swipe_2_pane_g1_ParamLimits

0xe255,	// (0x0001d434) calenote_swipe_2_pane_g1

0xe5f7,	// (0x0001d7d6) calenote_swipe_2_pane_g2_ParamLimits

0xe5f7,	// (0x0001d7d6) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001ef85) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001ef85) calenote_swipe_2_pane_g

0xe603,	// (0x0001d7e2) calenote_swipe_2_pane_t1_ParamLimits

0xe603,	// (0x0001d7e2) calenote_swipe_2_pane_t1

0x9332,	// (0x00018511) main_mup_navstr_pane

0x4956,	// (0x00013b35) main_mup3_pane_t7_ParamLimits

0x4956,	// (0x00013b35) main_mup3_pane_t7

0xcc40,	// (0x0001be1f) main_mp4_pane_g6_ParamLimits

0xcc40,	// (0x0001be1f) main_mp4_pane_g6

0xce68,	// (0x0001c047) main_image3_pane_t4_ParamLimits

0xce68,	// (0x0001c047) main_image3_pane_t4

0x84b4,	// (0x00017693) popup_navstr_preview_pane_ParamLimits

0x84b4,	// (0x00017693) popup_navstr_preview_pane

0x84c8,	// (0x000176a7) scroll_navstr_pane_ParamLimits

0x84c8,	// (0x000176a7) scroll_navstr_pane

0x9332,	// (0x00018511) bg_popup_preview_window_pane_cp04

0xe62a,	// (0x0001d809) popup_navstr_preview_pane_t1

0x84dc,	// (0x000176bb) scroll_navstr_pane_g1_ParamLimits

0x84dc,	// (0x000176bb) scroll_navstr_pane_g1

0x84f0,	// (0x000176cf) scroll_navstr_pane_t1_ParamLimits

0x84f0,	// (0x000176cf) scroll_navstr_pane_t1

0xe5cf,	// (0x0001d7ae) bg_button_pane_cp014

0xe5cf,	// (0x0001d7ae) bg_button_pane_cp030

0x7b21,	// (0x00016d00) list_double_fisheye_pane_g4_ParamLimits

0x7b21,	// (0x00016d00) list_double_fisheye_pane_g4

0x7b2d,	// (0x00016d0c) list_double_fisheye_pane_g5_ParamLimits

0x7b2d,	// (0x00016d0c) list_double_fisheye_pane_g5

0xd208,	// (0x0001c3e7) sp_fs_scroll_pane_cp03

0xe38a,	// (0x0001d569) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe396,	// (0x0001d575) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001eebf) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3a2,	// (0x0001d581) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe553,	// (0x0001d732) sp_fs_scroll_pane_cp02

0x9cb0,	// (0x00018e8f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9cb0,	// (0x00018e8f) popup_sp_fs_calendar_preview_list_single_pane

0x9332,	// (0x00018511) main_cam6_pano_pane

0x93a2,	// (0x00018581) main_mup3_pane_ParamLimits

0x9332,	// (0x00018511) main_phacti_pane

0x76f2,	// (0x000168d1) bg_button_pane_cp11

0x770c,	// (0x000168eb) main_mobtv_info_pane_g2_ParamLimits

0x770c,	// (0x000168eb) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001ee1f) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001ee1f) main_mobtv_info_pane_g

0x78e9,	// (0x00016ac8) sc_clock_pane_t5_ParamLimits

0x78e9,	// (0x00016ac8) sc_clock_pane_t5

0x79a4,	// (0x00016b83) main_radioblah_pane_g1_ParamLimits

0xe1a1,	// (0x0001d380) main_radioblah_pane_t3_ParamLimits

0xe1a1,	// (0x0001d380) main_radioblah_pane_t3

0xe1b9,	// (0x0001d398) main_radioblah_pane_t4_ParamLimits

0xe1b9,	// (0x0001d398) main_radioblah_pane_t4

0x79cc,	// (0x00016bab) main_radioblah_text_pane_ParamLimits

0x79cc,	// (0x00016bab) main_radioblah_text_pane

0x79de,	// (0x00016bbd) main_radioblah_info_pane_g1_ParamLimits

0x7a77,	// (0x00016c56) main_radioblah_info_pane_t4_ParamLimits

0x7a77,	// (0x00016c56) main_radioblah_info_pane_t4

0x93a2,	// (0x00018581) main_sp_fs_calendar_pane

0x8506,	// (0x000176e5) main_phacti_pane_g1

0x850e,	// (0x000176ed) phacti_note_pane_ParamLimits

0x850e,	// (0x000176ed) phacti_note_pane

0xe641,	// (0x0001d820) phacti_term_pane_ParamLimits

0xe641,	// (0x0001d820) phacti_term_pane

0xe656,	// (0x0001d835) phacti_note_pane_t1_ParamLimits

0xe656,	// (0x0001d835) phacti_note_pane_t1

0xe66d,	// (0x0001d84c) phacti_term_pane_g1

0xe675,	// (0x0001d854) phacti_term_pane_t1_ParamLimits

0xe675,	// (0x0001d854) phacti_term_pane_t1

0xe69f,	// (0x0001d87e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6a7,	// (0x0001d886) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001ef8f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6af,	// (0x0001d88e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6af,	// (0x0001d88e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6c5,	// (0x0001d8a4) aid_popup_sp_fs_bg_corner_pane

0xc268,	// (0x0001b447) popup_sp_fs_calendar_preview_bg_pane_g1

0x9332,	// (0x00018511) popup_sp_fs_calendar_preview_bg_pane

0x1028,	// (0x00010207) popup_sp_fs_calendar_preview_list_pane

0xbd4b,	// (0x0001af2a) bg_main_sp_fs_cale_pane_ParamLimits

0xbd4b,	// (0x0001af2a) bg_main_sp_fs_cale_pane

0xe6d6,	// (0x0001d8b5) listscroll_cale_mrui_pane_ParamLimits

0xe6d6,	// (0x0001d8b5) listscroll_cale_mrui_pane

0xe6eb,	// (0x0001d8ca) listscroll_sp_fs_schedule_track_pane

0xe6f4,	// (0x0001d8d3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe6f4,	// (0x0001d8d3) main_sp_fs_ctrlbar_pane_cp01

0xe707,	// (0x0001d8e6) main_sp_fs_ribbon_pane

0xe70f,	// (0x0001d8ee) popup_sp_fs_cale_preview_window

0x8583,	// (0x00017762) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8583,	// (0x00017762) list_single_sp_fs_schedule_track_pane

0x93a2,	// (0x00018581) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x93a2,	// (0x00018581) bg_sp_fs_highlight_list_pane_cp03

0x8599,	// (0x00017778) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8599,	// (0x00017778) list_single_sp_fs_schedule_track_pane_g1

0x85a5,	// (0x00017784) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85a5,	// (0x00017784) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001ef94) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001ef94) list_single_sp_fs_schedule_track_pane_g

0x85b1,	// (0x00017790) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85b1,	// (0x00017790) list_single_sp_fs_schedule_track_pane_t1

0x85cb,	// (0x000177aa) sp_fs_schedule_track_pane_ParamLimits

0x85cb,	// (0x000177aa) sp_fs_schedule_track_pane

0xe721,	// (0x0001d900) sp_fs_schedule_track_pane_g1

0xe729,	// (0x0001d908) sp_fs_schedule_track_pane_g2

0xe731,	// (0x0001d910) sp_fs_schedule_track_pane_g3

0xe739,	// (0x0001d918) sp_fs_schedule_track_pane_g4

0xe741,	// (0x0001d920) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001ef99) sp_fs_schedule_track_pane_g

0xd0f4,	// (0x0001c2d3) bg_sp_fs_schedule_viewer_highlight_g1

0x9fd2,	// (0x000191b1) bg_sp_fs_schedule_viewer_highlight_g2

0xd0fc,	// (0x0001c2db) bg_sp_fs_schedule_viewer_highlight_g3

0xd104,	// (0x0001c2e3) bg_sp_fs_schedule_viewer_highlight_g4

0xd3a5,	// (0x0001c584) bg_sp_fs_schedule_viewer_highlight_g5

0xd114,	// (0x0001c2f3) bg_sp_fs_schedule_viewer_highlight_g6

0xd11c,	// (0x0001c2fb) bg_sp_fs_schedule_viewer_highlight_g7

0xd124,	// (0x0001c303) bg_sp_fs_schedule_viewer_highlight_g8

0x9fb2,	// (0x00019191) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001efa4) bg_sp_fs_schedule_viewer_highlight_g

0x9332,	// (0x00018511) bg_main_sp_fs_ribbon_pane

0x85dc,	// (0x000177bb) main_sp_fs_ribbon_pane_g1

0xe749,	// (0x0001d928) main_sp_fs_ribbon_pane_t1

0x85e5,	// (0x000177c4) main_sp_fs_ribbon_pane_t2

0xe758,	// (0x0001d937) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001efb7) main_sp_fs_ribbon_pane_t

0xe767,	// (0x0001d946) main_sp_fs_ribbon_scheduler_pane

0xe76f,	// (0x0001d94e) bg_main_sp_fs_ribbon_pane_g1

0xe778,	// (0x0001d957) bg_main_sp_fs_ribbon_pane_g2

0xe781,	// (0x0001d960) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001efbe) bg_main_sp_fs_ribbon_pane_g

0xe789,	// (0x0001d968) main_sp_fs_ribbon_scheduler_pane_g1

0xe792,	// (0x0001d971) main_sp_fs_ribbon_scheduler_pane_g2

0xe79b,	// (0x0001d97a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001efc5) main_sp_fs_ribbon_scheduler_pane_g

0xe7a4,	// (0x0001d983) list_cale_mrui_pane

0x85f4,	// (0x000177d3) sp_fs_scroll_pane_cp07_ParamLimits

0x85f4,	// (0x000177d3) sp_fs_scroll_pane_cp07

0x8610,	// (0x000177ef) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8610,	// (0x000177ef) bg_sp_fs_schedule_viewer_highlight

0xe7b1,	// (0x0001d990) list_single_sp_fs_schedule_track_pane_cp01

0xe7b9,	// (0x0001d998) list_sp_fs_schedule_track_pane

0xe7c1,	// (0x0001d9a0) sp_fs_scroll_pane_cp06_ParamLimits

0xe7c1,	// (0x0001d9a0) sp_fs_scroll_pane_cp06

0xc268,	// (0x0001b447) bgmain_sp_fs_calendar_pane_g1

0x8620,	// (0x000177ff) list_single_cale_mrui_pane_ParamLimits

0x8620,	// (0x000177ff) list_single_cale_mrui_pane

0xe7d3,	// (0x0001d9b2) list_single_cale_mrui_row_pane_ParamLimits

0xe7d3,	// (0x0001d9b2) list_single_cale_mrui_row_pane

0xe7e0,	// (0x0001d9bf) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe7e0,	// (0x0001d9bf) list_single_cale_mrui_row_pane_g1

0xe825,	// (0x0001da04) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe825,	// (0x0001da04) list_single_cale_mrui_row_pane_t1

0x8642,	// (0x00017821) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8642,	// (0x00017821) list_single_cale_mrui_row_pane_t2

0xe837,	// (0x0001da16) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe837,	// (0x0001da16) list_single_cale_mrui_row_pane_t3

0xe866,	// (0x0001da45) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe866,	// (0x0001da45) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001efd3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001efd3) list_single_cale_mrui_row_pane_t

0x86aa,	// (0x00017889) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86aa,	// (0x00017889) list_single_cmail_header_editor_pane_bg_cp01

0x86d0,	// (0x000178af) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86d0,	// (0x000178af) list_single_cmail_header_editor_pane_bg_cp02

0x86f0,	// (0x000178cf) main_radioblah_text_pane_t1_ParamLimits

0x86f0,	// (0x000178cf) main_radioblah_text_pane_t1

0xe895,	// (0x0001da74) cam6_indi_pane_cp01

0xe89d,	// (0x0001da7c) cam6_mode_pane_cp01

0xe8a5,	// (0x0001da84) cam6_pano_pane

0xe8ae,	// (0x0001da8d) cam6_zoom_pane_cp01

0xe8b6,	// (0x0001da95) cam6_pano_image_pane

0xe8c1,	// (0x0001daa0) cam6_pano_pane_g1

0xdf04,	// (0x0001d0e3) cam6_pano_pane_g2

0xe8ca,	// (0x0001daa9) cam6_pano_pane_g3

0xe8d3,	// (0x0001dab2) cam6_pano_pane_g4

0xc89a,	// (0x0001ba79) cam6_pano_pane_g5

0xe8dc,	// (0x0001dabb) cam6_pano_pane_g6

0xe8e6,	// (0x0001dac5) cam6_pano_pane_g7

0xe8ee,	// (0x0001dacd) cam6_pano_pane_g8

0xe8f7,	// (0x0001dad6) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001efdc) cam6_pano_pane_g

0x9332,	// (0x00018511) main_browser_tag_pane

0xe622,	// (0x0001d801) grid_navstr_albumart_pane

0xe902,	// (0x0001dae1) cell_navstr_albumart_pane_ParamLimits

0xe902,	// (0x0001dae1) cell_navstr_albumart_pane

0xaa17,	// (0x00019bf6) cell_navstr_albumart_pane_g1

0xbb5c,	// (0x0001ad3b) cell_navstr_albumart_pane_g2

0xbb6c,	// (0x0001ad4b) cell_navstr_albumart_pane_g3

0xbb64,	// (0x0001ad43) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001efef) cell_navstr_albumart_pane_g

0x870b,	// (0x000178ea) bt_list_pane_ParamLimits

0x870b,	// (0x000178ea) bt_list_pane

0xe924,	// (0x0001db03) bt_list_pane_t1

0xe933,	// (0x0001db12) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001eff8) bt_list_pane_t

0x9332,	// (0x00018511) main_cale_prevew_pane

0x8720,	// (0x000178ff) popup_cale_preview_window_ParamLimits

0x8720,	// (0x000178ff) popup_cale_preview_window

0x93a2,	// (0x00018581) bg_popup_preview_window_pane_cp05_ParamLimits

0x93a2,	// (0x00018581) bg_popup_preview_window_pane_cp05

0xe942,	// (0x0001db21) list_cale_preview_pane_ParamLimits

0xe942,	// (0x0001db21) list_cale_preview_pane

0xe94e,	// (0x0001db2d) list_double_cale_preview_pane_ParamLimits

0xe94e,	// (0x0001db2d) list_double_cale_preview_pane

0xe960,	// (0x0001db3f) list_single_cale_preview_pane_ParamLimits

0xe960,	// (0x0001db3f) list_single_cale_preview_pane

0xe974,	// (0x0001db53) list_single_cale_preview_pane_g1

0xe97c,	// (0x0001db5b) list_single_cale_preview_pane_t1_ParamLimits

0xe97c,	// (0x0001db5b) list_single_cale_preview_pane_t1

0xe991,	// (0x0001db70) list_double_cale_preview_pane_g1

0xe999,	// (0x0001db78) list_double_cale_preview_pane_t1_ParamLimits

0xe999,	// (0x0001db78) list_double_cale_preview_pane_t1

0xe9ae,	// (0x0001db8d) list_double_cale_preview_pane_t2_ParamLimits

0xe9ae,	// (0x0001db8d) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001effd) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001effd) list_double_cale_preview_pane_t

0x9332,	// (0x00018511) main_ezdial_pane

0x93a2,	// (0x00018581) main_sp_fs_email_pane_ParamLimits

0x7cc7,	// (0x00016ea6) cmail_ddmenu_btn01_pane_ParamLimits

0x7cc7,	// (0x00016ea6) cmail_ddmenu_btn01_pane

0x7cda,	// (0x00016eb9) cmail_ddmenu_btn02_pane_ParamLimits

0x7cda,	// (0x00016eb9) cmail_ddmenu_btn02_pane

0x7cfd,	// (0x00016edc) cmail_ddmenu_btn03_pane_ParamLimits

0x7cfd,	// (0x00016edc) cmail_ddmenu_btn03_pane

0x7d23,	// (0x00016f02) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d47,	// (0x00016f26) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x839d,	// (0x0001757c) list_cmail_body_pane_ParamLimits

0xe569,	// (0x0001d748) bg_button_pane_cp12

0xe57e,	// (0x0001d75d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe57e,	// (0x0001d75d) list_single_cmail_header_detail_pane_g3

0xe58b,	// (0x0001d76a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe58b,	// (0x0001d76a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001ef80) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001ef80) list_single_cmail_header_detail_pane_t

0xe68a,	// (0x0001d869) phacti_term_pane_t2_ParamLimits

0xe68a,	// (0x0001d869) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001ef8a) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001ef8a) phacti_term_pane_t

0xe9c6,	// (0x0001dba5) aid_size_list_single_double

0x8739,	// (0x00017918) popup_ezdial_listscroll_window

0x8754,	// (0x00017933) popup_number_entry_window_cp01

0xa896,	// (0x00019a75) bg_popup_call_pane_cp09

0xe9d2,	// (0x0001dbb1) ezdial_list_pane

0xe9da,	// (0x0001dbb9) scroll_pane_cp23

0xbd4b,	// (0x0001af2a) bg_button_pane_cp028_ParamLimits

0xbd4b,	// (0x0001af2a) bg_button_pane_cp028

0x8762,	// (0x00017941) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8762,	// (0x00017941) cmail_ddmenu_btn01_pane_g1

0x876e,	// (0x0001794d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x876e,	// (0x0001794d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001f002) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001f002) cmail_ddmenu_btn01_pane_g

0xe9e2,	// (0x0001dbc1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9e2,	// (0x0001dbc1) cmail_ddmenu_btn01_pane_t1

0xbd4b,	// (0x0001af2a) bg_button_pane_cp029_ParamLimits

0xbd4b,	// (0x0001af2a) bg_button_pane_cp029

0x877a,	// (0x00017959) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x877a,	// (0x00017959) cmail_ddmenu_btn02_pane_g1

0x8792,	// (0x00017971) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8792,	// (0x00017971) cmail_ddmenu_btn02_pane_t1

0x93a2,	// (0x00018581) bg_button_pane_cp031_ParamLimits

0x93a2,	// (0x00018581) bg_button_pane_cp031

0x877a,	// (0x00017959) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x877a,	// (0x00017959) cmail_ddmenu_btn03_pane_g1

0x8792,	// (0x00017971) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8792,	// (0x00017971) cmail_ddmenu_btn03_pane_t1

0x5524,	// (0x00014703) cell_dialer2_keypad_pane_t1_ParamLimits

0x553e,	// (0x0001471d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x553e,	// (0x0001471d) cell_dialer2_keypad_pane_t1_copy1

0x7559,	// (0x00016738) ncimui_group_button_pane

0x93a2,	// (0x00018581) main_sp_fs_calendar_pane_ParamLimits

0x83b2,	// (0x00017591) list_single_cmail_header_caption_pane_ParamLimits

0xe6cd,	// (0x0001d8ac) aid_recal_txt_sm_pane

0x9332,	// (0x00018511) mian_recal_day_pane

0xe70f,	// (0x0001d8ee) popup_sp_fs_cale_preview_window_ParamLimits

0xe9f7,	// (0x0001dbd6) list_recal_day_pane

0xea39,	// (0x0001dc18) list_single_recal_day_pane_ParamLimits

0xea39,	// (0x0001dc18) list_single_recal_day_pane

0xea4b,	// (0x0001dc2a) list_single_recal_day_pane_g1_ParamLimits

0xea4b,	// (0x0001dc2a) list_single_recal_day_pane_g1

0xea57,	// (0x0001dc36) list_single_recal_day_pane_g2_ParamLimits

0xea57,	// (0x0001dc36) list_single_recal_day_pane_g2

0xea67,	// (0x0001dc46) list_single_recal_day_pane_g3_ParamLimits

0xea67,	// (0x0001dc46) list_single_recal_day_pane_g3

0x87b6,	// (0x00017995) list_single_recal_day_pane_g4_ParamLimits

0x87b6,	// (0x00017995) list_single_recal_day_pane_g4

0xea73,	// (0x0001dc52) list_single_recal_day_pane_g5_ParamLimits

0xea73,	// (0x0001dc52) list_single_recal_day_pane_g5

0xea83,	// (0x0001dc62) list_single_recal_day_pane_g6_ParamLimits

0xea83,	// (0x0001dc62) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001f011) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001f011) list_single_recal_day_pane_g

0xeac4,	// (0x0001dca3) list_single_recal_day_pane_t1

0xead6,	// (0x0001dcb5) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001f01c) list_single_recal_day_pane_t

0x87d6,	// (0x000179b5) ncimui_query_button_pane_ParamLimits

0x87d6,	// (0x000179b5) ncimui_query_button_pane

0x87e6,	// (0x000179c5) ncimui_query_button_pane_t1_ParamLimits

0x87e6,	// (0x000179c5) ncimui_query_button_pane_t1

0xeae8,	// (0x0001dcc7) ncimui_query_button_pane_t2_ParamLimits

0xeae8,	// (0x0001dcc7) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001f021) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001f021) ncimui_query_button_pane_t

0x87f9,	// (0x000179d8) query_button_pane_ParamLimits

0x87f9,	// (0x000179d8) query_button_pane

0x9332,	// (0x00018511) bg_button_pane_cp0028

0xeafb,	// (0x0001dcda) query_button_pane_t1

0x35bf,	// (0x0001279e) main_tport_pane_ParamLimits

0x8261,	// (0x00017440) bg_popup_window_pane_cp01_ParamLimits

0x8261,	// (0x00017440) bg_popup_window_pane_cp01

0x827c,	// (0x0001745b) heading_pane_cp08_ParamLimits

0x827c,	// (0x0001745b) heading_pane_cp08

0x828f,	// (0x0001746e) heading_pane_cp07_ParamLimits

0x828f,	// (0x0001746e) heading_pane_cp07

0x8336,	// (0x00017515) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001ef6d) cell_tport_appsw_pane_g

0x2baa,	// (0x00011d89) input_candi_list_open_g1

0xa1cb,	// (0x000193aa) list_cale_time_pane_g6_ParamLimits

0xa1cb,	// (0x000193aa) list_cale_time_pane_g6

0x4382,	// (0x00013561) aid_size_touch_calib_1_ParamLimits

0x4382,	// (0x00013561) aid_size_touch_calib_1

0x4394,	// (0x00013573) aid_size_touch_calib_2_ParamLimits

0x4394,	// (0x00013573) aid_size_touch_calib_2

0x43ac,	// (0x0001358b) aid_size_touch_calib_3_ParamLimits

0x43ac,	// (0x0001358b) aid_size_touch_calib_3

0x43ca,	// (0x000135a9) aid_size_touch_calib_4_ParamLimits

0x43ca,	// (0x000135a9) aid_size_touch_calib_4

0x43e2,	// (0x000135c1) main_touch_calib_button_group_pane_ParamLimits

0x43e2,	// (0x000135c1) main_touch_calib_button_group_pane

0x43fa,	// (0x000135d9) main_touch_calib_pane_g1_ParamLimits

0x440c,	// (0x000135eb) main_touch_calib_pane_g2_ParamLimits

0x441e,	// (0x000135fd) main_touch_calib_pane_g3_ParamLimits

0x4430,	// (0x0001360f) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0001e930) main_touch_calib_pane_g_ParamLimits

0x4442,	// (0x00013621) main_touch_calib_pane_t1_ParamLimits

0x445c,	// (0x0001363b) main_touch_calib_pane_t2_ParamLimits

0x4476,	// (0x00013655) main_touch_calib_pane_t3_ParamLimits

0x448a,	// (0x00013669) main_touch_calib_pane_t4_ParamLimits

0x449e,	// (0x0001367d) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0001e939) main_touch_calib_pane_t_ParamLimits

0xc63c,	// (0x0001b81b) list_single_fp_cale_pane_g3_ParamLimits

0xc63c,	// (0x0001b81b) list_single_fp_cale_pane_g3

0x93a2,	// (0x00018581) bg_button_pane_cp012_ParamLimits

0x93a2,	// (0x00018581) bg_vkb2_func_pane_cp03_ParamLimits

0x658d,	// (0x0001576c) cell_vitu2_function_top_pane_g1_ParamLimits

0x93a2,	// (0x00018581) bg_vkb2_func_pane_cp04_ParamLimits

0x74e7,	// (0x000166c6) main_ncimui_button_group_pane_ParamLimits

0x74e7,	// (0x000166c6) main_ncimui_button_group_pane

0x7547,	// (0x00016726) main_ncimui_pane_t3_ParamLimits

0x7547,	// (0x00016726) main_ncimui_pane_t3

0xe638,	// (0x0001d817) phacti_button_group_pane

0xe9c6,	// (0x0001dba5) aid_size_list_single_double_ParamLimits

0x8739,	// (0x00017918) popup_ezdial_listscroll_window_ParamLimits

0x8754,	// (0x00017933) popup_number_entry_window_cp01_ParamLimits

0x880c,	// (0x000179eb) phacti_button_pane_ParamLimits

0x880c,	// (0x000179eb) phacti_button_pane

0x9332,	// (0x00018511) bg_button_pane_cp14

0xeb09,	// (0x0001dce8) phacti_button_pane_t1

0x881d,	// (0x000179fc) main_touch_calib_button_pane_ParamLimits

0x881d,	// (0x000179fc) main_touch_calib_button_pane

0x9b24,	// (0x00018d03) bg_button_pane_cp18_ParamLimits

0x9b24,	// (0x00018d03) bg_button_pane_cp18

0xeb17,	// (0x0001dcf6) main_touch_calib_button_pane_t1_ParamLimits

0xeb17,	// (0x0001dcf6) main_touch_calib_button_pane_t1

0xeb2d,	// (0x0001dd0c) main_touch_calib_button_pane_t2_ParamLimits

0xeb2d,	// (0x0001dd0c) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001f026) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001f026) main_touch_calib_button_pane_t

0x9332,	// (0x00018511) cell_ncimui_button_pane

0x9332,	// (0x00018511) bg_button_pane_cp032

0xeb4b,	// (0x0001dd2a) cell_ncimui_button_pane_t1

0xce48,	// (0x0001c027) image3_infobar_pane_ParamLimits

0xce48,	// (0x0001c027) image3_infobar_pane

0x7915,	// (0x00016af4) fs_bigclock_status_pane_ParamLimits

0x7915,	// (0x00016af4) fs_bigclock_status_pane

0x7922,	// (0x00016b01) main_fs_bigclock_clock_pane_ParamLimits

0x7922,	// (0x00016b01) main_fs_bigclock_clock_pane

0x7942,	// (0x00016b21) main_fs_bigclock_indi_pane_ParamLimits

0x7942,	// (0x00016b21) main_fs_bigclock_indi_pane

0x796c,	// (0x00016b4b) main_fs_bigclock_swipe_pane_ParamLimits

0x796c,	// (0x00016b4b) main_fs_bigclock_swipe_pane

0x9332,	// (0x00018511) main_fs_clock_dumped_data

0xe011,	// (0x0001d1f0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe011,	// (0x0001d1f0) list_single_fs_bigclock_indicator_pane_g1

0xe02d,	// (0x0001d20c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe02d,	// (0x0001d20c) list_single_fs_bigclock_indicator_pane_g2

0xe047,	// (0x0001d226) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe047,	// (0x0001d226) list_single_fs_bigclock_indicator_pane_g3

0xe061,	// (0x0001d240) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe061,	// (0x0001d240) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001ee53) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001ee53) list_single_fs_bigclock_indicator_pane_g

0xe08c,	// (0x0001d26b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe08c,	// (0x0001d26b) list_single_fs_bigclock_indicator_pane_t1

0xe0b4,	// (0x0001d293) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0b4,	// (0x0001d293) list_single_fs_bigclock_indicator_pane_t2

0xe0dc,	// (0x0001d2bb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0dc,	// (0x0001d2bb) list_single_fs_bigclock_indicator_pane_t3

0xe104,	// (0x0001d2e3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe104,	// (0x0001d2e3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001ee5e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001ee5e) list_single_fs_bigclock_indicator_pane_t

0xeb59,	// (0x0001dd38) image3_infobar_fav_pane_ParamLimits

0xeb59,	// (0x0001dd38) image3_infobar_fav_pane

0xeb69,	// (0x0001dd48) image3_infobar_loc_pane_ParamLimits

0xeb69,	// (0x0001dd48) image3_infobar_loc_pane

0xeb7d,	// (0x0001dd5c) image3_infobar_time_pane_ParamLimits

0xeb7d,	// (0x0001dd5c) image3_infobar_time_pane

0xc268,	// (0x0001b447) image3_infobar_time_pane_g1

0xeb8d,	// (0x0001dd6c) image3_infobar_time_pane_t1

0xc268,	// (0x0001b447) image3_infobar_loc_pane_g1

0xeb9b,	// (0x0001dd7a) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001f02b) image3_infobar_loc_pane_g

0xeba3,	// (0x0001dd82) image3_infobar_loc_pane_t1

0xc268,	// (0x0001b447) image3_infobar_fav_pane_g1

0xebb1,	// (0x0001dd90) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001f030) image3_infobar_fav_pane_g

0xebb9,	// (0x0001dd98) fs_bigclock_status_battery_pane

0xebc2,	// (0x0001dda1) fs_bigclock_status_signal_pane

0xebcb,	// (0x0001ddaa) fs_bigclock_status_title_pane

0xebd4,	// (0x0001ddb3) fs_bigclock_status_signal_pane_g1

0xebdd,	// (0x0001ddbc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001f035) fs_bigclock_status_signal_pane_g

0xebe5,	// (0x0001ddc4) fs_bigclock_status_battery_pane_g1

0xebee,	// (0x0001ddcd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001f03a) fs_bigclock_status_battery_pane_g

0xebf6,	// (0x0001ddd5) fs_bigclock_status_title_pane_t1

0xc268,	// (0x0001b447) main_fs_bigclock_clock_pane_g1

0xec04,	// (0x0001dde3) main_fs_bigclock_clock_pane_g2

0xec0d,	// (0x0001ddec) main_fs_bigclock_clock_pane_g3

0xec0d,	// (0x0001ddec) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001f03f) main_fs_bigclock_clock_pane_g

0xec15,	// (0x0001ddf4) main_fs_bigclock_clock_pane_t1

0x8832,	// (0x00017a11) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001f048) main_fs_bigclock_clock_pane_t

0xec23,	// (0x0001de02) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec23,	// (0x0001de02) list_single_fs_bigclock_indicator_pane

0xec34,	// (0x0001de13) list_single_fs_bigclock_pane_ParamLimits

0xec34,	// (0x0001de13) list_single_fs_bigclock_pane

0xec5a,	// (0x0001de39) main_fs_bigclock_indicator_pane_t1

0xec69,	// (0x0001de48) list_single_fs_bigclock_pane_g1

0xec71,	// (0x0001de50) list_single_fs_bigclock_pane_t1

0xc268,	// (0x0001b447) main_fs_bigclock_swipe_pane_g1

0xecb4,	// (0x0001de93) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001f059) main_fs_bigclock_swipe_pane_g

0xecbc,	// (0x0001de9b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecbc,	// (0x0001de9b) main_fs_bigclock_swipe_pane_t1

0x24c5,	// (0x000116a4) call_type_pane_ParamLimits

0x9332,	// (0x00018511) main_btmg_pane

0xe80c,	// (0x0001d9eb) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe80c,	// (0x0001d9eb) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001efcc) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001efcc) list_single_cale_mrui_row_pane_g

0xea20,	// (0x0001dbff) list_recal_vselct_arw_lo_pane

0xea28,	// (0x0001dc07) list_recal_vselct_arw_up_pane

0xea30,	// (0x0001dc0f) list_recal_vselct_pane

0x8883,	// (0x00017a62) btmg_button_pane

0x888d,	// (0x00017a6c) main_btmg_pane_g1

0x9332,	// (0x00018511) bg_button_pane_cp044

0xecd9,	// (0x0001deb8) btmg_button_pane_t1

0xbd37,	// (0x0001af16) aid_listscroll_gen

0x93a2,	// (0x00018581) main_cntbar_detail_pane

0xe54b,	// (0x0001d72a) list_cmail_folder_pane

0xd208,	// (0x0001c3e7) sp_fs_scroll_pane_cp03_ParamLimits

0x83b2,	// (0x00017591) list_single_fs_dyc_pane_cp01_ParamLimits

0x83b2,	// (0x00017591) list_single_fs_dyc_pane_cp01

0xece7,	// (0x0001dec6) aid_size_cmail_indent

0xecf0,	// (0x0001decf) list_single_dyc_row_pane_cp01

0x88c3,	// (0x00017aa2) cntbar_detail_list_pane_ParamLimits

0x88c3,	// (0x00017aa2) cntbar_detail_list_pane

0x890f,	// (0x00017aee) main_cntbar_detail_cont_pane_ParamLimits

0x890f,	// (0x00017aee) main_cntbar_detail_cont_pane

0xd208,	// (0x0001c3e7) scroll_pane_cp032_ParamLimits

0xd208,	// (0x0001c3e7) scroll_pane_cp032

0x8923,	// (0x00017b02) cntbar_detail_list_event_pane_ParamLimits

0x8923,	// (0x00017b02) cntbar_detail_list_event_pane

0x88d3,	// (0x00017ab2) cntbar_detail_list_shct_pane

0xa020,	// (0x000191ff) aid_list_gen

0xecf9,	// (0x0001ded8) aid_scroll

0xed02,	// (0x0001dee1) aid_size_touch_scroll_bar

0x6c84,	// (0x00015e63) aid_list_double

0xed0b,	// (0x0001deea) aid_list_single

0x6c84,	// (0x00015e63) aid_list_single_lg

0xed14,	// (0x0001def3) aid_list_z_g_a_sm

0xed1c,	// (0x0001defb) aid_list_z_g_d

0xed24,	// (0x0001df03) aid_txt_z_prm

0x8933,	// (0x00017b12) aid_txt_z_prm_cp01

0x8941,	// (0x00017b20) aid_txt_z_sec

0x894f,	// (0x00017b2e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x894f,	// (0x00017b2e) main_cntbar_detail_cont_pane_g1

0x8963,	// (0x00017b42) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8963,	// (0x00017b42) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001f05e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001f05e) main_cntbar_detail_cont_pane_g

0xed32,	// (0x0001df11) main_cntbar_detail_cont_pane_t1

0xed40,	// (0x0001df1f) main_cntbar_detail_cont_pane_t2

0xed4e,	// (0x0001df2d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001f063) main_cntbar_detail_cont_pane_t

0x8973,	// (0x00017b52) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8973,	// (0x00017b52) cell_cntbar_detail_list_shct_pane

0xed5c,	// (0x0001df3b) cntbar_detail_list_shct_pane_g1

0xed65,	// (0x0001df44) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001f06a) cntbar_detail_list_shct_pane_g

0x8987,	// (0x00017b66) cntbar_detail_list_event_pane_g1_ParamLimits

0x8987,	// (0x00017b66) cntbar_detail_list_event_pane_g1

0x8993,	// (0x00017b72) cntbar_detail_list_event_pane_g2_ParamLimits

0x8993,	// (0x00017b72) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001f06f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001f06f) cntbar_detail_list_event_pane_g

0x89ff,	// (0x00017bde) cntbar_detail_list_event_pane_t1_ParamLimits

0x89ff,	// (0x00017bde) cntbar_detail_list_event_pane_t1

0x8a14,	// (0x00017bf3) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a14,	// (0x00017bf3) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001f07c) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001f07c) cntbar_detail_list_event_pane_t

0xc268,	// (0x0001b447) cell_cntbar_detail_list_shct_pane_g1

0xa84e,	// (0x00019a2d) navi_pane_mv_g3

0x93a2,	// (0x00018581) main_cntbar_detail_pane_ParamLimits

0x9332,	// (0x00018511) main_notif_wgt_pane

0xcbda,	// (0x0001bdb9) aid_tch_main_mp4_pane_g4

0xcddc,	// (0x0001bfbb) popup_slider_window_cp02

0xea16,	// (0x0001dbf5) list_recal_day_event_pane

0x8897,	// (0x00017a76) cntbar_detail_btn_pane_ParamLimits

0x8897,	// (0x00017a76) cntbar_detail_btn_pane

0x88ad,	// (0x00017a8c) cntbar_detail_btn_pane_cp01_ParamLimits

0x88ad,	// (0x00017a8c) cntbar_detail_btn_pane_cp01

0x88d3,	// (0x00017ab2) cntbar_detail_list_shct_pane_ParamLimits

0x88e3,	// (0x00017ac2) cntbar_detail_pane_g1_ParamLimits

0x88e3,	// (0x00017ac2) cntbar_detail_pane_g1

0x88f3,	// (0x00017ad2) cntbar_detail_pane_t1_ParamLimits

0x88f3,	// (0x00017ad2) cntbar_detail_pane_t1

0x899f,	// (0x00017b7e) cntbar_detail_list_event_pane_g3_ParamLimits

0x899f,	// (0x00017b7e) cntbar_detail_list_event_pane_g3

0x89b7,	// (0x00017b96) cntbar_detail_list_event_pane_g4_ParamLimits

0x89b7,	// (0x00017b96) cntbar_detail_list_event_pane_g4

0x89cf,	// (0x00017bae) cntbar_detail_list_event_pane_g5_ParamLimits

0x89cf,	// (0x00017bae) cntbar_detail_list_event_pane_g5

0x89e7,	// (0x00017bc6) cntbar_detail_list_event_pane_g6_ParamLimits

0x89e7,	// (0x00017bc6) cntbar_detail_list_event_pane_g6

0x8a29,	// (0x00017c08) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a29,	// (0x00017c08) cntbar_detail_list_event_pane_t3

0x8a3b,	// (0x00017c1a) popup_notif_wgt_window_ParamLimits

0x8a3b,	// (0x00017c1a) popup_notif_wgt_window

0x8a54,	// (0x00017c33) popup_submenu_window_cp01_ParamLimits

0x8a54,	// (0x00017c33) popup_submenu_window_cp01

0xa896,	// (0x00019a75) bg_popup_window_pane_cp10

0xed6e,	// (0x0001df4d) listscroll_notif_wgt_pane

0xed7f,	// (0x0001df5e) list_notif_wgt_window

0xed88,	// (0x0001df67) scroll_pane_cp033

0x8a66,	// (0x00017c45) list_notif_wgt_row_pane_ParamLimits

0x8a66,	// (0x00017c45) list_notif_wgt_row_pane

0xed91,	// (0x0001df70) aid_size_list_notif_wgt_del

0xed9e,	// (0x0001df7d) list_notif_wgt_row_pane_g1

0xedaa,	// (0x0001df89) list_notif_wgt_row_pane_g2

0xedbe,	// (0x0001df9d) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001f083) list_notif_wgt_row_pane_g

0xedcb,	// (0x0001dfaa) list_notif_wgt_row_pane_t1

0xede1,	// (0x0001dfc0) list_notif_wgt_row_pane_t2

0xedf3,	// (0x0001dfd2) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001f08a) list_notif_wgt_row_pane_t

0xd3cd,	// (0x0001c5ac) list_recal_day_event_pane_g1

0xee05,	// (0x0001dfe4) list_recal_day_event_pane_t1

0x9332,	// (0x00018511) bg_button_pane_cp045

0xee14,	// (0x0001dff3) cntbar_detail_btn_pane_t1

0xbd4b,	// (0x0001af2a) main_callh_pane_ParamLimits

0xbd4b,	// (0x0001af2a) main_callh_pane

0x9332,	// (0x00018511) main_coverflow0_pane

0x9332,	// (0x00018511) main_wgtman_pane

0x7984,	// (0x00016b63) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7984,	// (0x00016b63) main_fs_bigclock_unlock_btn_pane

0x832e,	// (0x0001750d) bg_button_pane_cp16

0x833e,	// (0x0001751d) cell_tport_appsw_pane_g3

0x8a76,	// (0x00017c55) cf0_flow_pane_ParamLimits

0x8a76,	// (0x00017c55) cf0_flow_pane

0xee22,	// (0x0001e001) listscroll_cf0_pane

0xee2d,	// (0x0001e00c) main_cf0_pane_g1

0x8a8b,	// (0x00017c6a) main_cf0_pane_t1_ParamLimits

0x8a8b,	// (0x00017c6a) main_cf0_pane_t1

0x8aa2,	// (0x00017c81) main_cf0_pane_t2_ParamLimits

0x8aa2,	// (0x00017c81) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001f096) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001f096) main_cf0_pane_t

0xee3f,	// (0x0001e01e) scroll_pane_cp11

0x8ab9,	// (0x00017c98) cf0_flow_pane_g1

0x8ac1,	// (0x00017ca0) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001f09b) cf0_flow_pane_g

0x8ac9,	// (0x00017ca8) cf0_flow_pane_t1

0x9332,	// (0x00018511) main_call6_pane

0x9332,	// (0x00018511) main_calllock_pane

0x8ad7,	// (0x00017cb6) call6_btn_grp_pane_ParamLimits

0x8ad7,	// (0x00017cb6) call6_btn_grp_pane

0x8af1,	// (0x00017cd0) call6_pane_g1_ParamLimits

0x8af1,	// (0x00017cd0) call6_pane_g1

0x8b06,	// (0x00017ce5) popup_call6_1st_window_ParamLimits

0x8b06,	// (0x00017ce5) popup_call6_1st_window

0x8b17,	// (0x00017cf6) popup_call6_2nd_window_ParamLimits

0x8b17,	// (0x00017cf6) popup_call6_2nd_window

0x8b28,	// (0x00017d07) cell_call6_btn_pane_ParamLimits

0x8b28,	// (0x00017d07) cell_call6_btn_pane

0xa896,	// (0x00019a75) bg_popup_call2_in_pane_cp03

0xee4a,	// (0x0001e029) popup_call6_1st_window_g1

0xee52,	// (0x0001e031) popup_call6_1st_window_g2

0xee5a,	// (0x0001e039) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001f0a0) popup_call6_1st_window_g

0xee62,	// (0x0001e041) popup_call6_1st_window_t1

0xee71,	// (0x0001e050) popup_call6_1st_window_t2

0xee81,	// (0x0001e060) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001f0a7) popup_call6_1st_window_t

0xa896,	// (0x00019a75) bg_popup_call2_in_pane_cp04

0xee4a,	// (0x0001e029) popup_call6_2nd_window_g1

0xee52,	// (0x0001e031) popup_call6_2nd_window_g2

0xee5a,	// (0x0001e039) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001f0a0) popup_call6_2nd_window_g

0xee62,	// (0x0001e041) popup_call6_2nd_window_t1

0x9332,	// (0x00018511) bg_button_pane_cp15

0xee91,	// (0x0001e070) cell_call6_btn_pane_g1

0xee9a,	// (0x0001e079) cell_call6_btn_pane_t1

0x8b3c,	// (0x00017d1b) listscroll_wgtman_pane_ParamLimits

0x8b3c,	// (0x00017d1b) listscroll_wgtman_pane

0x8b5d,	// (0x00017d3c) wgtman_btn_pane_ParamLimits

0x8b5d,	// (0x00017d3c) wgtman_btn_pane

0xa653,	// (0x00019832) aid_scroll_copy1

0xeea9,	// (0x0001e088) list_wgtman_pane

0x8ba0,	// (0x00017d7f) wgtman_btn_pane_g1_ParamLimits

0x8ba0,	// (0x00017d7f) wgtman_btn_pane_g1

0x8bcc,	// (0x00017dab) wgtman_btn_pane_t1_ParamLimits

0x8bcc,	// (0x00017dab) wgtman_btn_pane_t1

0xeeb3,	// (0x0001e092) wgtman_btn_pane_t2_ParamLimits

0xeeb3,	// (0x0001e092) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001f0ae) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001f0ae) wgtman_btn_pane_t

0x8c09,	// (0x00017de8) listrow_wgtman_pane_ParamLimits

0x8c09,	// (0x00017de8) listrow_wgtman_pane

0x8c1c,	// (0x00017dfb) listrow_wgtman_pane_g1

0x8c29,	// (0x00017e08) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001f0b3) listrow_wgtman_pane_g

0x8c47,	// (0x00017e26) listrow_wgtman_pane_t1

0x8c5f,	// (0x00017e3e) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001f0b8) listrow_wgtman_pane_t

0x8c85,	// (0x00017e64) wait_bar_pane_cp09

0xeeca,	// (0x0001e0a9) main_calllock_btn_pane

0xeed4,	// (0x0001e0b3) main_calllock_pane_g1

0x9332,	// (0x00018511) bg_button_pane_cp17

0xeedf,	// (0x0001e0be) main_calllock_btn_pane_g1

0xeee8,	// (0x0001e0c7) main_calllock_btn_pane_t1

0x9332,	// (0x00018511) main_dialer3_pane

0x9332,	// (0x00018511) main_fmrd2_pane

0xc268,	// (0x0001b447) main_fs_bigclock_unlock_btn_pane_g1

0xeeff,	// (0x0001e0de) main_fs_bigclock_unlock_btn_pane_t1

0x8c97,	// (0x00017e76) area_fmrd2_info_pane_ParamLimits

0x8c97,	// (0x00017e76) area_fmrd2_info_pane

0x8ca8,	// (0x00017e87) area_fmrd2_visual_pane_ParamLimits

0x8ca8,	// (0x00017e87) area_fmrd2_visual_pane

0x8cb6,	// (0x00017e95) fmrd2_indi_pane_ParamLimits

0x8cb6,	// (0x00017e95) fmrd2_indi_pane

0x8cc3,	// (0x00017ea2) area_fmrd2_visual_pane_g1

0x8ccb,	// (0x00017eaa) area_fmrd2_visual_pane_t1

0x8cdb,	// (0x00017eba) area_fmrd2_visual_pane_t2

0x8ceb,	// (0x00017eca) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001f0c2) area_fmrd2_visual_pane_t

0x8cfb,	// (0x00017eda) area_fmrd2_info_pane_g1

0x8d03,	// (0x00017ee2) area_fmrd2_info_pane_t1

0x8d13,	// (0x00017ef2) area_fmrd2_info_pane_t2

0x8d23,	// (0x00017f02) area_fmrd2_info_pane_t3

0x8d33,	// (0x00017f12) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001f0c9) area_fmrd2_info_pane_t

0x8d41,	// (0x00017f20) fmrd2_indi_pane_t1

0x8d51,	// (0x00017f30) fmrd2_indi_pane_t2

0x8d61,	// (0x00017f40) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001f0d2) fmrd2_indi_pane_t

0xe070,	// (0x0001d24f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe070,	// (0x0001d24f) list_single_fs_bigclock_indicator_pane_g5

0xe120,	// (0x0001d2ff) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe120,	// (0x0001d2ff) list_single_fs_bigclock_indicator_pane_t5

0x8522,	// (0x00017701) aid_cell_bcale_month_pane_ParamLimits

0x8522,	// (0x00017701) aid_cell_bcale_month_pane

0x8540,	// (0x0001771f) bcale_month_pane_ParamLimits

0x8540,	// (0x0001771f) bcale_month_pane

0x8564,	// (0x00017743) bcale_preview_pane_ParamLimits

0x8564,	// (0x00017743) bcale_preview_pane

0xec71,	// (0x0001de50) list_single_fs_bigclock_pane_t1_ParamLimits

0xec90,	// (0x0001de6f) list_single_fs_bigclock_pane_t2_ParamLimits

0xec90,	// (0x0001de6f) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001f054) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001f054) list_single_fs_bigclock_pane_t

0xeef7,	// (0x0001e0d6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001f0bd) main_fs_bigclock_unlock_btn_pane_g

0x8d71,	// (0x00017f50) aid_dia3_key_size_ParamLimits

0x8d71,	// (0x00017f50) aid_dia3_key_size

0x8d80,	// (0x00017f5f) aid_dia3_listrow_size_ParamLimits

0x8d80,	// (0x00017f5f) aid_dia3_listrow_size

0x8d95,	// (0x00017f74) dia3_keypad_fun_pane_ParamLimits

0x8d95,	// (0x00017f74) dia3_keypad_fun_pane

0x8db1,	// (0x00017f90) dia3_keypad_num_pane_ParamLimits

0x8db1,	// (0x00017f90) dia3_keypad_num_pane

0x8dcc,	// (0x00017fab) dia3_listscroll_pane_ParamLimits

0x8dcc,	// (0x00017fab) dia3_listscroll_pane

0x8ddf,	// (0x00017fbe) dia3_numentry_pane_ParamLimits

0x8ddf,	// (0x00017fbe) dia3_numentry_pane

0xef0d,	// (0x0001e0ec) dia3_list_pane

0xef18,	// (0x0001e0f7) scroll_pane_cp12

0x9332,	// (0x00018511) bg_dia3_numentry_pane

0x8df3,	// (0x00017fd2) dia3_numentry_pane_t1

0x8e02,	// (0x00017fe1) cell_dia3_key_num_pane

0x8e0a,	// (0x00017fe9) cell_dia3_key0_fun_pane_ParamLimits

0x8e0a,	// (0x00017fe9) cell_dia3_key0_fun_pane

0x8e1e,	// (0x00017ffd) cell_dia3_key1_fun_pane_ParamLimits

0x8e1e,	// (0x00017ffd) cell_dia3_key1_fun_pane

0x8e36,	// (0x00018015) dia3_listrow_pane

0xdd7e,	// (0x0001cf5d) bg_dia3_numentry_pane_g1

0x9332,	// (0x00018511) bg_button_pane_cp21

0xef23,	// (0x0001e102) cell_dia3_key_num_pane_t1

0xef31,	// (0x0001e110) cell_dia3_key_num_pane_t2

0xef40,	// (0x0001e11f) cell_dia3_key_num_pane_t3

0xef4f,	// (0x0001e12e) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001f0d9) cell_dia3_key_num_pane_t

0x9332,	// (0x00018511) bg_button_pane_cp19

0x8e48,	// (0x00018027) cell_dia3_key0_fun_pane_g1

0x9332,	// (0x00018511) bg_button_pane_cp20

0x8e50,	// (0x0001802f) cell_dia3_key1_fun_pane_g1

0x8e58,	// (0x00018037) area_left_week_number_pane

0x8e64,	// (0x00018043) area_top_day_name_pane

0x8e77,	// (0x00018056) frame_month_view_pane

0xef5e,	// (0x0001e13d) grid_month_view_pane

0x8e8a,	// (0x00018069) cell_top_day_name_pane_ParamLimits

0x8e8a,	// (0x00018069) cell_top_day_name_pane

0x8eb7,	// (0x00018096) cell_area_left_week_number_pane_ParamLimits

0x8eb7,	// (0x00018096) cell_area_left_week_number_pane

0x8ecb,	// (0x000180aa) cell_month_view_pane_ParamLimits

0x8ecb,	// (0x000180aa) cell_month_view_pane

0xef6c,	// (0x0001e14b) frm_month_g1

0x8ef8,	// (0x000180d7) frm_month_g2

0x8f0b,	// (0x000180ea) frm_month_g3

0x8f1e,	// (0x000180fd) frm_month_g4

0x8f31,	// (0x00018110) frm_month_g5

0x8f44,	// (0x00018123) frm_month_g6

0x8f57,	// (0x00018136) frm_month_g7

0xef79,	// (0x0001e158) frm_month_g8

0x8f6a,	// (0x00018149) frm_month_g9

0x8f7a,	// (0x00018159) frm_month_g10

0x8f8a,	// (0x00018169) frm_month_g11

0x8f9a,	// (0x00018179) frm_month_g12

0x8fac,	// (0x0001818b) frm_month_g13

0x8fbe,	// (0x0001819d) frm_month_g14

0x8fd2,	// (0x000181b1) frm_month_g15

0x8fe6,	// (0x000181c5) frm_month_g16

0x000f,

0xff03,	// (0x0001f0e2) frm_month_g

0xef86,	// (0x0001e165) cell_top_day_name_pane_t1

0x8ffa,	// (0x000181d9) cell_area_left_week_number_pane_g1

0x9006,	// (0x000181e5) cell_area_left_week_number_pane_t1

0xc4c8,	// (0x0001b6a7) cell_month_view_pane_g1

0x9019,	// (0x000181f8) cell_month_view_pane_t1

0x9332,	// (0x00018511) main_fps_pane

0xe352,	// (0x0001d531) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe352,	// (0x0001d531) cmail_ddmenu_btn02_pane_cp1

0xe36e,	// (0x0001d54d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe36e,	// (0x0001d54d) cmail_ddmenu_btn02_pane_cp2

0x8786,	// (0x00017965) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8786,	// (0x00017965) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001f007) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001f007) cmail_ddmenu_btn02_pane_g

0x87a4,	// (0x00017983) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87a4,	// (0x00017983) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001f00c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001f00c) cmail_ddmenu_btn02_pane_t

0x902c,	// (0x0001820b) fps_text_pane_ParamLimits

0x902c,	// (0x0001820b) fps_text_pane

0x9043,	// (0x00018222) main_fps_pane_g1_ParamLimits

0x9043,	// (0x00018222) main_fps_pane_g1

0x905d,	// (0x0001823c) wait_bar_pane_cp010_ParamLimits

0x905d,	// (0x0001823c) wait_bar_pane_cp010

0x906e,	// (0x0001824d) fps_text_pane_t1_ParamLimits

0x906e,	// (0x0001824d) fps_text_pane_t1

0xea8f,	// (0x0001dc6e) cam4_image_uncrop_pane_g1

0xea98,	// (0x0001dc77) cam4_image_uncrop_pane_g2

0x59ca,	// (0x00014ba9) cam4_image_uncrop_pane_g3

0x59d3,	// (0x00014bb2) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001eacd) cam4_image_uncrop_pane_g

0x8e36,	// (0x00018015) dia3_listrow_pane_ParamLimits

0x9332,	// (0x00018511) main_phob2_pane

0x82ff,	// (0x000174de) cell_tport_appsw_pane_cp02_ParamLimits

0x82ff,	// (0x000174de) cell_tport_appsw_pane_cp02

0x8313,	// (0x000174f2) cell_tport_appsw_pane_cp03_ParamLimits

0x8313,	// (0x000174f2) cell_tport_appsw_pane_cp03

0x9332,	// (0x00018511) phob2_contact_card_pane

0x9332,	// (0x00018511) phob2_listscroll_pane

0xef99,	// (0x0001e178) phob2_list_pane

0xefa1,	// (0x0001e180) scroll_pane_cp034

0x9086,	// (0x00018265) phob2_cc_data_pane_ParamLimits

0x9086,	// (0x00018265) phob2_cc_data_pane

0x90a5,	// (0x00018284) phob2_cc_listscroll_pane_ParamLimits

0x90a5,	// (0x00018284) phob2_cc_listscroll_pane

0x90c3,	// (0x000182a2) list_double_large_graphic_phob2_pane_ParamLimits

0x90c3,	// (0x000182a2) list_double_large_graphic_phob2_pane

0x90d6,	// (0x000182b5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x90d6,	// (0x000182b5) list_double_large_graphic_phob2_pane_g1

0x90ec,	// (0x000182cb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x90ec,	// (0x000182cb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001f103) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001f103) list_double_large_graphic_phob2_pane_g

0x90f8,	// (0x000182d7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x90f8,	// (0x000182d7) list_double_large_graphic_phob2_pane_t1

0x910e,	// (0x000182ed) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x910e,	// (0x000182ed) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001f108) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001f108) list_double_large_graphic_phob2_pane_t

0x9332,	// (0x00018511) list_highlight_pane_cp024

0x9123,	// (0x00018302) phob2_cc_button_pane

0x912b,	// (0x0001830a) phob2_cc_data_pane_g1_ParamLimits

0x912b,	// (0x0001830a) phob2_cc_data_pane_g1

0x9140,	// (0x0001831f) phob2_cc_data_pane_g2_ParamLimits

0x9140,	// (0x0001831f) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001f10d) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001f10d) phob2_cc_data_pane_g

0x9150,	// (0x0001832f) phob2_cc_data_pane_t1_ParamLimits

0x9150,	// (0x0001832f) phob2_cc_data_pane_t1

0x9168,	// (0x00018347) phob2_cc_data_pane_t2_ParamLimits

0x9168,	// (0x00018347) phob2_cc_data_pane_t2

0x9180,	// (0x0001835f) phob2_cc_data_pane_t3_ParamLimits

0x9180,	// (0x0001835f) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001f112) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001f112) phob2_cc_data_pane_t

0xefa9,	// (0x0001e188) phob2_cc_list_pane_ParamLimits

0xefa9,	// (0x0001e188) phob2_cc_list_pane

0xd476,	// (0x0001c655) scroll_pane_cp035_ParamLimits

0xd476,	// (0x0001c655) scroll_pane_cp035

0x93a2,	// (0x00018581) bg_button_pane_cp033

0xefb5,	// (0x0001e194) phob2_cc_button_pane_g1

0xefc1,	// (0x0001e1a0) phob2_cc_button_pane_t1

0xefd6,	// (0x0001e1b5) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001f119) phob2_cc_button_pane_t

0x9198,	// (0x00018377) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9198,	// (0x00018377) list_double_large_graphic_phob2_cc_pane

0x91ab,	// (0x0001838a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x91ab,	// (0x0001838a) list_double_large_graphic_phob2_cc_pane_g1

0x91b7,	// (0x00018396) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x91b7,	// (0x00018396) list_double_large_graphic_phob2_cc_pane_g2

0x91c3,	// (0x000183a2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x91c3,	// (0x000183a2) list_double_large_graphic_phob2_cc_pane_g3

0x91cf,	// (0x000183ae) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x91cf,	// (0x000183ae) list_double_large_graphic_phob2_cc_pane_g4

0x91db,	// (0x000183ba) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x91db,	// (0x000183ba) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001f11e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001f11e) list_double_large_graphic_phob2_cc_pane_g

0x91e7,	// (0x000183c6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x91e7,	// (0x000183c6) list_double_large_graphic_phob2_cc_pane_t1

0x9210,	// (0x000183ef) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9210,	// (0x000183ef) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001f129) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001f129) list_double_large_graphic_phob2_cc_pane_t

0xefe8,	// (0x0001e1c7) list_highlight_pane_cp025_ParamLimits

0xefe8,	// (0x0001e1c7) list_highlight_pane_cp025

0x93a2,	// (0x00018581) bg_button_pane_cp033_ParamLimits

0xefb5,	// (0x0001e194) phob2_cc_button_pane_g1_ParamLimits

0xefc1,	// (0x0001e1a0) phob2_cc_button_pane_t1_ParamLimits

0xefd6,	// (0x0001e1b5) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001f119) phob2_cc_button_pane_t_ParamLimits

0x02c8,	// (0x0000f4a7) popup_wgtman_window

0xd244,	// (0x0001c423) scroll_pane_cp038

0x8b82,	// (0x00017d61) wgtman_btn_pane_cp_01_ParamLimits

0x8b82,	// (0x00017d61) wgtman_btn_pane_cp_01

0xeff6,	// (0x0001e1d5) wgtman_content_pane

0xefff,	// (0x0001e1de) wgtman_heading_pane

0x9332,	// (0x00018511) bg_heading_pane_cp02

0xf008,	// (0x0001e1e7) wgtman_heading_pane_g1

0xf010,	// (0x0001e1ef) wgtman_heading_pane_t1

0xf01e,	// (0x0001e1fd) scroll_pane_cp036

0xf026,	// (0x0001e205) wgtman_list_pane

0xeaa1,	// (0x0001dc80) wgtman_list_pane_t1_ParamLimits

0xeaa1,	// (0x0001dc80) wgtman_list_pane_t1

0xcf7b,	// (0x0001c15a) cam4_grid_pane

0x6774,	// (0x00015953) bg_button_pane_cp015_ParamLimits

0x6788,	// (0x00015967) bg_button_pane_cp016_ParamLimits

0x679b,	// (0x0001597a) bg_button_pane_cp017_ParamLimits

0x67f3,	// (0x000159d2) popup_vitu2_query_window_g3_ParamLimits

0x67f3,	// (0x000159d2) popup_vitu2_query_window_g3

0x68b0,	// (0x00015a8f) popup_vitu2_query_window_t6_ParamLimits

0x68b0,	// (0x00015a8f) popup_vitu2_query_window_t6

0x68db,	// (0x00015aba) popup_vitu2_query_window_t7_ParamLimits

0x68db,	// (0x00015aba) popup_vitu2_query_window_t7

0xea8f,	// (0x0001dc6e) cam4_grid_pane_g1

0xea98,	// (0x0001dc77) cam4_grid_pane_g2

0xf02e,	// (0x0001e20d) cam4_grid_pane_g3

0xf037,	// (0x0001e216) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001f12e) cam4_grid_pane_g

0x1326,	// (0x00010505) aid_placing_vt_slider_lsc_ParamLimits

0x1623,	// (0x00010802) vidtel_button_pane_ParamLimits

0x1623,	// (0x00010802) vidtel_button_pane

0xf042,	// (0x0001e221) bg_button_pane_cp034

0x9239,	// (0x00018418) vidtel_button_pane_g1

0xf04c,	// (0x0001e22b) vidtel_button_pane_t1

0xd381,	// (0x0001c560) aid_size_vtel_slider_touch

0xd476,	// (0x0001c655) scroll_pane_cp039

0xddbc,	// (0x0001cf9b) ncim_query_button_pane_cp01_ParamLimits

0xdddb,	// (0x0001cfba) ncimui_query_pane_g1_ParamLimits

0x93a2,	// (0x00018581) input_focus_pane_cp012_ParamLimits

0xde00,	// (0x0001cfdf) ncim_query_entry_pane_t1_ParamLimits

0xd476,	// (0x0001c655) scroll_pane_cp039_ParamLimits

0xa739,	// (0x00019918) navi_pane_bcale_mc_g1

0xa741,	// (0x00019920) navi_pane_bcale_mc_t1

0xe3b7,	// (0x0001d596) main_sp_fs_email_pane_g1

0xe3c3,	// (0x0001d5a2) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001eec4) main_sp_fs_email_pane_g

0xe818,	// (0x0001d9f7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe818,	// (0x0001d9f7) list_single_cale_mrui_row_pane_g3

0x87cc,	// (0x000179ab) list_single_recal_day_pane_g5_event_pane

0xeabc,	// (0x0001dc9b) list_single_recal_day_pane_g7

0xf05a,	// (0x0001e239) list_recal_day_event_pane_cp01

0xf063,	// (0x0001e242) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0001e24a) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0001e252) list_recal_vselct_pane_cp01

0xd3cd,	// (0x0001c5ac) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0001e25c) list_recal_day_event_pane_cp01_t1

0xeac4,	// (0x0001dca3) list_single_recal_day_pane_t1_ParamLimits

0xead6,	// (0x0001dcb5) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001f01c) list_single_recal_day_pane_t_ParamLimits

0x9a1e,	// (0x00018bfd) bg_notes_pane_ParamLimits

0x9ae8,	// (0x00018cc7) list_notes_pane_ParamLimits

0x05fc,	// (0x0000f7db) scroll_pane_cp06_ParamLimits

0x9b24,	// (0x00018d03) main_notes_pane_ParamLimits

0x9332,	// (0x00018511) main_welc_pane

0x9241,	// (0x00018420) main_welc_body_pane_ParamLimits

0x9241,	// (0x00018420) main_welc_body_pane

0x925e,	// (0x0001843d) main_welc_opti_pane_ParamLimits

0x925e,	// (0x0001843d) main_welc_opti_pane

0x92a7,	// (0x00018486) main_welc_pane_t1_ParamLimits

0x92a7,	// (0x00018486) main_welc_pane_t1

0x92c9,	// (0x000184a8) main_welc_body_row_pane_ParamLimits

0x92c9,	// (0x000184a8) main_welc_body_row_pane

0xd1fa,	// (0x0001c3d9) main_welc_opti_row_pane_ParamLimits

0xd1fa,	// (0x0001c3d9) main_welc_opti_row_pane

0xf08b,	// (0x0001e26a) main_welc_opti_row_pane_g1

0x92df,	// (0x000184be) main_welc_opti_row_pane_t1

0xf093,	// (0x0001e272) main_welc_body_row_pane_t1

0xed77,	// (0x0001df56) popup_notif_wgt_heading_pane

0xed91,	// (0x0001df70) aid_size_list_notif_wgt_del_ParamLimits

0xed9e,	// (0x0001df7d) list_notif_wgt_row_pane_g1_ParamLimits

0xedaa,	// (0x0001df89) list_notif_wgt_row_pane_g2_ParamLimits

0xedbe,	// (0x0001df9d) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001f083) list_notif_wgt_row_pane_g_ParamLimits

0xedcb,	// (0x0001dfaa) list_notif_wgt_row_pane_t1_ParamLimits

0xede1,	// (0x0001dfc0) list_notif_wgt_row_pane_t2_ParamLimits

0xedf3,	// (0x0001dfd2) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001f08a) list_notif_wgt_row_pane_t_ParamLimits

0x8c1c,	// (0x00017dfb) listrow_wgtman_pane_g1_ParamLimits

0x8c29,	// (0x00017e08) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001f0b3) listrow_wgtman_pane_g_ParamLimits

0x8c47,	// (0x00017e26) listrow_wgtman_pane_t1_ParamLimits

0x8c5f,	// (0x00017e3e) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001f0b8) listrow_wgtman_pane_t_ParamLimits

0x8c85,	// (0x00017e64) wait_bar_pane_cp09_ParamLimits

0x9332,	// (0x00018511) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0001e281) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0001e289) popup_notif_wgt_heading_pane_t1

0x9332,	// (0x00018511) main_vids_pane

0x9332,	// (0x00018511) vids_listscroll_pane

0x92ee,	// (0x000184cd) scroll_pane_cp040

0x9332,	// (0x00018511) vids_list_pane

0x92f9,	// (0x000184d8) vids_list_double_pane_ParamLimits

0x92f9,	// (0x000184d8) vids_list_double_pane

0x930a,	// (0x000184e9) vids_list_double_pane_g1

0x9313,	// (0x000184f2) vids_list_double_pane_t1

0x9322,	// (0x00018501) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001f13c) vids_list_double_pane_t

0x93a2,	// (0x00018581) main_ncimui_pane_ParamLimits

0x74fb,	// (0x000166da) main_ncimui_pane_g1_ParamLimits

0x7507,	// (0x000166e6) main_ncimui_pane_g2_ParamLimits

0x7507,	// (0x000166e6) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001edc9) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001edc9) main_ncimui_pane_g

0x927d,	// (0x0001845c) main_welc_pane_g1_ParamLimits

0x927d,	// (0x0001845c) main_welc_pane_g1

0x9292,	// (0x00018471) main_welc_pane_g2_ParamLimits

0x9292,	// (0x00018471) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001f137) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001f137) main_welc_pane_g

0x9a1e,	// (0x00018bfd) listscroll_mce_pane_ParamLimits

0xa88e,	// (0x00019a6d) wait_bar_pane_cp10

0xbd3f,	// (0x0001af1e) main_cale_day_pane_ParamLimits

0xbd3f,	// (0x0001af1e) main_cale_week_pane_ParamLimits

0x9a1e,	// (0x00018bfd) main_messa_pane_ParamLimits

0x4cd7,	// (0x00013eb6) main_clock2_btn_pane_ParamLimits

0x4cd7,	// (0x00013eb6) main_clock2_btn_pane

0xc6c4,	// (0x0001b8a3) main_clock2_btn_pane_cp01_ParamLimits

0xc6c4,	// (0x0001b8a3) main_clock2_btn_pane_cp01

0xe7a4,	// (0x0001d983) list_cale_mrui_pane_ParamLimits

0xee37,	// (0x0001e016) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001f091) main_cf0_pane_g

0x8e58,	// (0x00018037) area_left_week_number_pane_ParamLimits

0x8e64,	// (0x00018043) area_top_day_name_pane_ParamLimits

0x8e77,	// (0x00018056) frame_month_view_pane_ParamLimits

0xef5e,	// (0x0001e13d) grid_month_view_pane_ParamLimits

0xef6c,	// (0x0001e14b) frm_month_g1_ParamLimits

0x8ef8,	// (0x000180d7) frm_month_g2_ParamLimits

0x8f0b,	// (0x000180ea) frm_month_g3_ParamLimits

0x8f1e,	// (0x000180fd) frm_month_g4_ParamLimits

0x8f31,	// (0x00018110) frm_month_g5_ParamLimits

0x8f44,	// (0x00018123) frm_month_g6_ParamLimits

0x8f57,	// (0x00018136) frm_month_g7_ParamLimits

0xef79,	// (0x0001e158) frm_month_g8_ParamLimits

0x8f6a,	// (0x00018149) frm_month_g9_ParamLimits

0x8f7a,	// (0x00018159) frm_month_g10_ParamLimits

0x8f8a,	// (0x00018169) frm_month_g11_ParamLimits

0x8f9a,	// (0x00018179) frm_month_g12_ParamLimits

0x8fac,	// (0x0001818b) frm_month_g13_ParamLimits

0x8fbe,	// (0x0001819d) frm_month_g14_ParamLimits

0x8fd2,	// (0x000181b1) frm_month_g15_ParamLimits

0x8fe6,	// (0x000181c5) frm_month_g16_ParamLimits

0xff03,	// (0x0001f0e2) frm_month_g_ParamLimits

0xef86,	// (0x0001e165) cell_top_day_name_pane_t1_ParamLimits

0x8ffa,	// (0x000181d9) cell_area_left_week_number_pane_g1_ParamLimits

0x9006,	// (0x000181e5) cell_area_left_week_number_pane_t1_ParamLimits

0xc4c8,	// (0x0001b6a7) cell_month_view_pane_g1_ParamLimits

0x9019,	// (0x000181f8) cell_month_view_pane_t1_ParamLimits

0x9a16,	// (0x00018bf5) main_clock2_btn_pane_g1

0xf0b8,	// (0x0001e297) main_clock2_btn_pane_t1

0x93a2,	// (0x00018581) listscroll_cmail_pane_ParamLimits

0xe3b7,	// (0x0001d596) main_sp_fs_email_pane_g1_ParamLimits

0xe3c3,	// (0x0001d5a2) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001eec4) main_sp_fs_email_pane_g_ParamLimits

0xe9f7,	// (0x0001dbd6) list_recal_day_pane_ParamLimits

0xea08,	// (0x0001dbe7) mian_recal_day_pane_t1

0x7f86,	// (0x00017165) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f86,	// (0x00017165) list_single_dyc_row_text_pane_t4

0x7fcf,	// (0x000171ae) list_single_dyc_row_text_pane_t5_ParamLimits

0x7fcf,	// (0x000171ae) list_single_dyc_row_text_pane_t5

0xe487,	// (0x0001d666) list_single_dyc_row_text_pane_t6_ParamLimits

0xe487,	// (0x0001d666) list_single_dyc_row_text_pane_t6

0xa1aa,	// (0x00019389) aid_mgn_list_cale_time_pane

0x93a2,	// (0x00018581) main_gallery2_pane_ParamLimits

0xc6da,	// (0x0001b8b9) main_clock2_pane_cp01_t1

0xc6e8,	// (0x0001b8c7) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0001e9a3) main_clock2_pane_cp01_t

0x09b5,	// (0x0000fb94) cale_week_scroll_pane_g16_ParamLimits

0x09b5,	// (0x0000fb94) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
