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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003e459 };

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
0x1f26,	// (0x0004037f) Screen

0x1f32,	// (0x0004038b) application_window

0x1f72,	// (0x000403cb) area_bottom_pane_ParamLimits

0x1f72,	// (0x000403cb) area_bottom_pane

0x1fa7,	// (0x00040400) area_top_pane_ParamLimits

0x1fa7,	// (0x00040400) area_top_pane

0xa16a,	// (0x000485c3) call_video_uplink_pane_ParamLimits

0xa16a,	// (0x000485c3) call_video_uplink_pane

0x2036,	// (0x0004048f) main_pane_ParamLimits

0x2036,	// (0x0004048f) main_pane

0xc873,	// (0x0004accc) context_pane

0x5722,	// (0x00043b7b) navi_pane

0x5746,	// (0x00043b9f) popup_cale_events_window_ParamLimits

0x5746,	// (0x00043b9f) popup_cale_events_window

0xc886,	// (0x0004acdf) popup_mup_playback_window

0x575e,	// (0x00043bb7) signal_pane

0xa8bb,	// (0x00048d14) main_browser_pane

0xb3ed,	// (0x00049846) main_burst_pane

0x55d4,	// (0x00043a2d) main_calc_pane

0xc816,	// (0x0004ac6f) main_cale_day_pane

0x2750,	// (0x00040ba9) main_cale_month_pane

0xc816,	// (0x0004ac6f) main_cale_week_pane

0xb3ed,	// (0x00049846) main_call_pane

0xa59b,	// (0x000489f4) main_call_poc_pane

0xb3ed,	// (0x00049846) main_camera_pane

0xb3ed,	// (0x00049846) main_chi_dic_pane

0xb28f,	// (0x000496e8) main_clock_pane

0xa59b,	// (0x000489f4) main_fmradio_pane

0xb3ed,	// (0x00049846) main_graph_messa_pane

0xa59b,	// (0x000489f4) main_help_pane

0xa8bb,	// (0x00048d14) main_im_pane

0xa7f6,	// (0x00048c4f) main_image_pane_ParamLimits

0xa7f6,	// (0x00048c4f) main_image_pane

0xa59b,	// (0x000489f4) main_location2_pane

0xb3ed,	// (0x00049846) main_location_pane

0xa7f6,	// (0x00048c4f) main_messa_pane

0xa59b,	// (0x000489f4) main_mp2_pane

0xb3ed,	// (0x00049846) main_mp_pane

0xa59b,	// (0x000489f4) main_msg_pane

0xa59b,	// (0x000489f4) main_mup_eq_pane

0xa59b,	// (0x000489f4) main_mup_pane

0xa8bb,	// (0x00048d14) main_notes_pane

0xa59b,	// (0x000489f4) main_pec_pane

0xa59b,	// (0x000489f4) main_phob_pane

0xa59b,	// (0x000489f4) main_pinb_pane

0xa59b,	// (0x000489f4) main_postcard_pane

0xa59b,	// (0x000489f4) main_qdial_pane

0xb3ed,	// (0x00049846) main_skin_pane

0xa59b,	// (0x000489f4) main_smil2_pane

0xb3ed,	// (0x00049846) main_smil_pane

0xb3ed,	// (0x00049846) main_video_pane

0xb3ed,	// (0x00049846) main_video_tele_pane

0xa7f6,	// (0x00048c4f) main_viewer_pane_ParamLimits

0xa7f6,	// (0x00048c4f) main_viewer_pane

0xb3ed,	// (0x00049846) main_vorec_pane

0x560c,	// (0x00043a65) popup_blid_sat_info_window_ParamLimits

0x560c,	// (0x00043a65) popup_blid_sat_info_window

0x5626,	// (0x00043a7f) popup_dyc_status_message_window_ParamLimits

0x5626,	// (0x00043a7f) popup_dyc_status_message_window

0x5636,	// (0x00043a8f) popup_grid_large_graphic_window_ParamLimits

0x5636,	// (0x00043a8f) popup_grid_large_graphic_window

0x56ae,	// (0x00043b07) popup_loc_request_window_ParamLimits

0x56ae,	// (0x00043b07) popup_loc_request_window

0x56f6,	// (0x00043b4f) popup_wml_address_window_ParamLimits

0x56f6,	// (0x00043b4f) popup_wml_address_window

0x54ac,	// (0x00043905) call_muted_g1

0x516b,	// (0x000435c4) popup_call_audio_conf_window_ParamLimits

0x516b,	// (0x000435c4) popup_call_audio_conf_window

0x54bc,	// (0x00043915) popup_call_audio_first_window_ParamLimits

0x54bc,	// (0x00043915) popup_call_audio_first_window

0x54fc,	// (0x00043955) popup_call_audio_in_window_ParamLimits

0x54fc,	// (0x00043955) popup_call_audio_in_window

0x5520,	// (0x00043979) popup_call_audio_out_window_ParamLimits

0x5520,	// (0x00043979) popup_call_audio_out_window

0x5542,	// (0x0004399b) popup_call_audio_second_window_ParamLimits

0x5542,	// (0x0004399b) popup_call_audio_second_window

0x5572,	// (0x000439cb) popup_call_audio_wait_window_ParamLimits

0x5572,	// (0x000439cb) popup_call_audio_wait_window

0x5593,	// (0x000439ec) popup_number_entry_window_ParamLimits

0x5593,	// (0x000439ec) popup_number_entry_window

0xa188,	// (0x000485e1) bg_popup_call_pane_cp05_ParamLimits

0xa188,	// (0x000485e1) bg_popup_call_pane_cp05

0xa1a8,	// (0x00048601) popup_number_entry_window_t1

0xa1bb,	// (0x00048614) popup_number_entry_window_t2

0xa1cd,	// (0x00048626) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0004d51f) popup_number_entry_window_t

0xa1df,	// (0x00048638) text_title_cp2

0xa1f2,	// (0x0004864b) bg_popup_call_pane_cp_ParamLimits

0xa1f2,	// (0x0004864b) bg_popup_call_pane_cp

0xa200,	// (0x00048659) call_thumbnail_pane

0xa208,	// (0x00048661) popup_call_audio_in_window_g1_ParamLimits

0xa208,	// (0x00048661) popup_call_audio_in_window_g1

0xa214,	// (0x0004866d) popup_call_audio_in_window_g2_ParamLimits

0xa214,	// (0x0004866d) popup_call_audio_in_window_g2

0xa220,	// (0x00048679) popup_call_audio_in_window_g3_ParamLimits

0xa220,	// (0x00048679) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0004d528) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0004d528) popup_call_audio_in_window_g

0xa22c,	// (0x00048685) popup_call_audio_in_window_t1_ParamLimits

0xa22c,	// (0x00048685) popup_call_audio_in_window_t1

0xa248,	// (0x000486a1) popup_call_audio_in_window_t2_ParamLimits

0xa248,	// (0x000486a1) popup_call_audio_in_window_t2

0xa264,	// (0x000486bd) popup_call_audio_in_window_t3_ParamLimits

0xa264,	// (0x000486bd) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0004d52f) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0004d52f) popup_call_audio_in_window_t

0xa1f2,	// (0x0004864b) bg_popup_call_pane_cp01_ParamLimits

0xa1f2,	// (0x0004864b) bg_popup_call_pane_cp01

0xa200,	// (0x00048659) call_thumbnail_pane_cp02

0xa277,	// (0x000486d0) call_type_pane_cp022

0xa27f,	// (0x000486d8) popup_call_audio_out_window_g1_ParamLimits

0xa27f,	// (0x000486d8) popup_call_audio_out_window_g1

0xa291,	// (0x000486ea) popup_call_audio_out_window_g2_ParamLimits

0xa291,	// (0x000486ea) popup_call_audio_out_window_g2

0xa29d,	// (0x000486f6) popup_call_audio_out_window_g3_ParamLimits

0xa29d,	// (0x000486f6) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0004d536) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0004d536) popup_call_audio_out_window_g

0xa2af,	// (0x00048708) popup_call_audio_out_window_t1_ParamLimits

0xa2af,	// (0x00048708) popup_call_audio_out_window_t1

0xa2c7,	// (0x00048720) popup_call_audio_out_window_t2_ParamLimits

0xa2c7,	// (0x00048720) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0004d53d) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0004d53d) popup_call_audio_out_window_t

0xa2dc,	// (0x00048735) bg_popup_call_pane_ParamLimits

0xa2dc,	// (0x00048735) bg_popup_call_pane

0x223a,	// (0x00040693) call_thumbnail_pane_cp_ParamLimits

0x223a,	// (0x00040693) call_thumbnail_pane_cp

0xa360,	// (0x000487b9) call_type_pane_cp01_ParamLimits

0xa360,	// (0x000487b9) call_type_pane_cp01

0xa3a4,	// (0x000487fd) popup_call_audio_first_window_g1_ParamLimits

0xa3a4,	// (0x000487fd) popup_call_audio_first_window_g1

0xa3f0,	// (0x00048849) popup_call_audio_first_window_g2_ParamLimits

0xa3f0,	// (0x00048849) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0004d542) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0004d542) popup_call_audio_first_window_g

0xa434,	// (0x0004888d) popup_call_audio_first_window_t1_ParamLimits

0xa434,	// (0x0004888d) popup_call_audio_first_window_t1

0xa4e0,	// (0x00048939) popup_call_audio_first_window_t4_ParamLimits

0xa4e0,	// (0x00048939) popup_call_audio_first_window_t4

0xa56c,	// (0x000489c5) popup_call_audio_first_window_t5_ParamLimits

0xa56c,	// (0x000489c5) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0004d547) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0004d547) popup_call_audio_first_window_t

0xa59b,	// (0x000489f4) bg_popup_call_pane_cp02

0xa5a5,	// (0x000489fe) call_type_pane_cp023

0xa5ad,	// (0x00048a06) popup_call_audio_wait_window_g1

0xa5b5,	// (0x00048a0e) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004d54e) popup_call_audio_wait_window_g

0xa5bd,	// (0x00048a16) popup_call_audio_wait_window_t3

0xa5cb,	// (0x00048a24) bg_popup_call_pane_cp03_ParamLimits

0xa5cb,	// (0x00048a24) bg_popup_call_pane_cp03

0xa62b,	// (0x00048a84) call_thumbnail_pane_cp011_ParamLimits

0xa62b,	// (0x00048a84) call_thumbnail_pane_cp011

0xa637,	// (0x00048a90) call_type_pane_cp034_ParamLimits

0xa637,	// (0x00048a90) call_type_pane_cp034

0xa673,	// (0x00048acc) popup_call_audio_second_window_g1_ParamLimits

0xa673,	// (0x00048acc) popup_call_audio_second_window_g1

0xa6af,	// (0x00048b08) popup_call_audio_second_window_g2_ParamLimits

0xa6af,	// (0x00048b08) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0004d553) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0004d553) popup_call_audio_second_window_g

0xa6eb,	// (0x00048b44) popup_call_audio_second_window_t1_ParamLimits

0xa6eb,	// (0x00048b44) popup_call_audio_second_window_t1

0xa76c,	// (0x00048bc5) popup_call_audio_second_window_t2_ParamLimits

0xa76c,	// (0x00048bc5) popup_call_audio_second_window_t2

0xa7a2,	// (0x00048bfb) popup_call_audio_second_window_t3_ParamLimits

0xa7a2,	// (0x00048bfb) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0004d558) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0004d558) popup_call_audio_second_window_t

0xa59b,	// (0x000489f4) bg_popup_call_pane_cp04

0xa7d8,	// (0x00048c31) list_conf_pane

0xa7e0,	// (0x00048c39) popup_call_audio_conf_window_t1

0xa7ee,	// (0x00048c47) call_thumbnail_pane_g1

0xa7f6,	// (0x00048c4f) bg_pinb_pane_ParamLimits

0xa7f6,	// (0x00048c4f) bg_pinb_pane

0xa804,	// (0x00048c5d) find_pinb_pane

0xa80d,	// (0x00048c66) listscroll_pinb_pane_ParamLimits

0xa80d,	// (0x00048c66) listscroll_pinb_pane

0xa81c,	// (0x00048c75) pinb_bg_pane_g1

0x225e,	// (0x000406b7) pinb_bg_pane_g2

0x226a,	// (0x000406c3) pinb_bg_pane_g3

0x2276,	// (0x000406cf) pinb_bg_pane_g4

0x2282,	// (0x000406db) pinb_bg_pane_g5

0x228e,	// (0x000406e7) pinb_bg_pane_g6

0x2299,	// (0x000406f2) pinb_bg_pane_g7

0x22a4,	// (0x000406fd) pinb_bg_pane_g8

0x22af,	// (0x00040708) pinb_bg_pane_g9

0x22b9,	// (0x00040712) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0004d55f) pinb_bg_pane_g

0x22d6,	// (0x0004072f) grid_pinb_pane

0x22e1,	// (0x0004073a) list_pinb_pane

0x22ec,	// (0x00040745) scroll_pane_cp01_ParamLimits

0x22ec,	// (0x00040745) scroll_pane_cp01

0xa826,	// (0x00048c7f) find_pinb_pane_g1_ParamLimits

0xa826,	// (0x00048c7f) find_pinb_pane_g1

0xa83e,	// (0x00048c97) find_pinb_pane_t1

0xa850,	// (0x00048ca9) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0004d579) find_pinb_pane_t

0xa865,	// (0x00048cbe) input_focus_pane_cp01_ParamLimits

0xa865,	// (0x00048cbe) input_focus_pane_cp01

0x22fe,	// (0x00040757) cell_pinb_pane_ParamLimits

0x22fe,	// (0x00040757) cell_pinb_pane

0x2323,	// (0x0004077c) cell_pinb_pane_g1_ParamLimits

0x2323,	// (0x0004077c) cell_pinb_pane_g1

0x2338,	// (0x00040791) cell_pinb_pane_g2_ParamLimits

0x2338,	// (0x00040791) cell_pinb_pane_g2

0xa871,	// (0x00048cca) cell_pinb_pane_g3_ParamLimits

0xa871,	// (0x00048cca) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0004d57e) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0004d57e) cell_pinb_pane_g

0xa59b,	// (0x000489f4) grid_highlight_pane_cp01

0x2344,	// (0x0004079d) list_pinb_item_pane_ParamLimits

0x2344,	// (0x0004079d) list_pinb_item_pane

0xa59b,	// (0x000489f4) list_highlight_pane_cp02

0x2362,	// (0x000407bb) list_pinb_item_pane_g1_ParamLimits

0x2362,	// (0x000407bb) list_pinb_item_pane_g1

0x236f,	// (0x000407c8) list_pinb_item_pane_g2_ParamLimits

0x236f,	// (0x000407c8) list_pinb_item_pane_g2

0x237b,	// (0x000407d4) list_pinb_item_pane_g3_ParamLimits

0x237b,	// (0x000407d4) list_pinb_item_pane_g3

0x238c,	// (0x000407e5) list_pinb_item_pane_g4_ParamLimits

0x238c,	// (0x000407e5) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0004d585) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0004d585) list_pinb_item_pane_g

0x2398,	// (0x000407f1) list_pinb_item_pane_t1_ParamLimits

0x2398,	// (0x000407f1) list_pinb_item_pane_t1

0x23c9,	// (0x00040822) calc_display_pane

0x23e7,	// (0x00040840) calc_paper_pane

0x2403,	// (0x0004085c) grid_calc_pane

0xa59b,	// (0x000489f4) bg_list_pane_cp01

0x242f,	// (0x00040888) clock_g1

0x2437,	// (0x00040890) clock_g2

0x0001,

0xf135,	// (0x0004d58e) clock_g

0x2441,	// (0x0004089a) clock_t1_ParamLimits

0x2441,	// (0x0004089a) clock_t1

0x2456,	// (0x000408af) clock_t2_ParamLimits

0x2456,	// (0x000408af) clock_t2

0x2468,	// (0x000408c1) clock_t3_ParamLimits

0x2468,	// (0x000408c1) clock_t3

0x247a,	// (0x000408d3) clock_t4_ParamLimits

0x247a,	// (0x000408d3) clock_t4

0x248c,	// (0x000408e5) clock_t5_ParamLimits

0x248c,	// (0x000408e5) clock_t5

0x24a1,	// (0x000408fa) clock_t6_ParamLimits

0x24a1,	// (0x000408fa) clock_t6

0x24b3,	// (0x0004090c) clock_t7_ParamLimits

0x24b3,	// (0x0004090c) clock_t7

0x24c5,	// (0x0004091e) clock_t8_ParamLimits

0x24c5,	// (0x0004091e) clock_t8

0x24db,	// (0x00040934) clock_t9_ParamLimits

0x24db,	// (0x00040934) clock_t9

0x0008,

0xf13a,	// (0x0004d593) clock_t_ParamLimits

0xf13a,	// (0x0004d593) clock_t

0xa87d,	// (0x00048cd6) popup_clock_analogue_window_cp02

0xa87d,	// (0x00048cd6) popup_clock_digital_window_cp01

0xa885,	// (0x00048cde) listscroll_help_pane

0xa59b,	// (0x000489f4) phob_pre_status_pane

0xa88f,	// (0x00048ce8) grid_qdial_pane

0xa7f6,	// (0x00048c4f) listscroll_mce_pane

0xa7f6,	// (0x00048c4f) bg_notes_pane

0xa899,	// (0x00048cf2) list_notes_pane

0x24f1,	// (0x0004094a) scroll_pane_cp06

0xa8a7,	// (0x00048d00) bg_calc_paper_pane

0x2500,	// (0x00040959) list_calc_pane

0xa8bb,	// (0x00048d14) bg_calc_display_pane

0x251a,	// (0x00040973) calc_display_pane_t1

0x252f,	// (0x00040988) calc_display_pane_t2

0x2544,	// (0x0004099d) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0004d5a6) calc_display_pane_t

0x2556,	// (0x000409af) cell_calc_pane_ParamLimits

0x2556,	// (0x000409af) cell_calc_pane

0xa8c7,	// (0x00048d20) bg_calc_paper_pane_g1

0xa8d3,	// (0x00048d2c) bg_calc_paper_pane_g2

0xa8df,	// (0x00048d38) bg_calc_paper_pane_g3

0xa8eb,	// (0x00048d44) bg_calc_paper_pane_g4

0xa8f7,	// (0x00048d50) bg_calc_paper_pane_g5

0x2585,	// (0x000409de) bg_calc_paper_pane_g6

0x2596,	// (0x000409ef) bg_calc_paper_pane_g7

0x25a7,	// (0x00040a00) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0004d5ad) bg_calc_paper_pane_g

0x25ba,	// (0x00040a13) calc_bg_paper_pane_g9

0x25cd,	// (0x00040a26) list_calc_item_pane_ParamLimits

0x25cd,	// (0x00040a26) list_calc_item_pane

0xa903,	// (0x00048d5c) list_calc_item_pane_g1

0x25ee,	// (0x00040a47) list_calc_item_pane_t1_ParamLimits

0x25ee,	// (0x00040a47) list_calc_item_pane_t1

0x2600,	// (0x00040a59) list_calc_item_pane_t2_ParamLimits

0x2600,	// (0x00040a59) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0004d5be) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0004d5be) list_calc_item_pane_t

0xa910,	// (0x00048d69) cell_calc_pane_g1

0xa91a,	// (0x00048d73) grid_highlight_pane_cp02

0xa93c,	// (0x00048d95) bg_calc_display_pane_g1

0x2630,	// (0x00040a89) bg_calc_display_pane_g2

0xa945,	// (0x00048d9e) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0004d5c8) bg_calc_display_pane_g

0x263a,	// (0x00040a93) cell_qdial_pane_ParamLimits

0x263a,	// (0x00040a93) cell_qdial_pane

0x2650,	// (0x00040aa9) cell_qdial_pane_g1_ParamLimits

0x2650,	// (0x00040aa9) cell_qdial_pane_g1

0x265d,	// (0x00040ab6) cell_qdial_pane_g2_ParamLimits

0x265d,	// (0x00040ab6) cell_qdial_pane_g2

0xa94e,	// (0x00048da7) cell_qdial_pane_g3_ParamLimits

0xa94e,	// (0x00048da7) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0004d5cf) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0004d5cf) cell_qdial_pane_g

0x267b,	// (0x00040ad4) cell_qdial_pane_t1_ParamLimits

0x267b,	// (0x00040ad4) cell_qdial_pane_t1

0x2693,	// (0x00040aec) cell_qdial_pane_t2_ParamLimits

0x2693,	// (0x00040aec) cell_qdial_pane_t2

0x26a6,	// (0x00040aff) cell_qdial_pane_t3_ParamLimits

0x26a6,	// (0x00040aff) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0004d5d8) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0004d5d8) cell_qdial_pane_t

0xa59b,	// (0x000489f4) grid_highlight_pane_cp04

0xa95a,	// (0x00048db3) thumbnail_qdial_pane_ParamLimits

0xa95a,	// (0x00048db3) thumbnail_qdial_pane

0xa9e4,	// (0x00048e3d) list_help_pane

0xa9ed,	// (0x00048e46) scroll_pane_cp02

0x26b9,	// (0x00040b12) help_list_pane_t1_ParamLimits

0x26b9,	// (0x00040b12) help_list_pane_t1

0x26e0,	// (0x00040b39) bg_notes_pane_g2

0x26e8,	// (0x00040b41) bg_notes_pane_g3

0x26f0,	// (0x00040b49) notes_bg_pane_g1

0x26f8,	// (0x00040b51) notes_bg_pane_g4

0x2700,	// (0x00040b59) notes_bg_pane_g5

0x2708,	// (0x00040b61) notes_bg_pane_g6

0x2710,	// (0x00040b69) notes_bg_pane_g7

0x2718,	// (0x00040b71) notes_bg_pane_g8

0x2720,	// (0x00040b79) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0004d5f6) notes_bg_pane_g

0x2728,	// (0x00040b81) list_notes_text_pane_ParamLimits

0x2728,	// (0x00040b81) list_notes_text_pane

0xa9f6,	// (0x00048e4f) list_notes_text_pane_g1

0x0b75,	// (0x0003efce) list_notes_text_pane_t1

0x2750,	// (0x00040ba9) listscroll_cale_week_pane

0x2786,	// (0x00040bdf) bg_cale_heading_pane

0xaa10,	// (0x00048e69) bg_cale_pane_cp01

0x27af,	// (0x00040c08) cale_week_corner_pane

0x27ce,	// (0x00040c27) cale_week_day_heading_pane

0x27fc,	// (0x00040c55) cale_week_scroll_pane_g1

0x2820,	// (0x00040c79) cale_week_scroll_pane_g2

0x2838,	// (0x00040c91) cale_week_scroll_pane_g3

0x2850,	// (0x00040ca9) cale_week_scroll_pane_g4

0x2868,	// (0x00040cc1) cale_week_scroll_pane_g5

0x2880,	// (0x00040cd9) cale_week_scroll_pane_g6

0x28a0,	// (0x00040cf9) cale_week_scroll_pane_g7

0x28c0,	// (0x00040d19) cale_week_scroll_pane_g8

0x28e0,	// (0x00040d39) cale_week_scroll_pane_g9

0x28fd,	// (0x00040d56) cale_week_scroll_pane_g10

0x291a,	// (0x00040d73) cale_week_scroll_pane_g11

0x2937,	// (0x00040d90) cale_week_scroll_pane_g12

0x2954,	// (0x00040dad) cale_week_scroll_pane_g13

0x2979,	// (0x00040dd2) cale_week_scroll_pane_g14

0x29a2,	// (0x00040dfb) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0004d605) cale_week_scroll_pane_g

0x29eb,	// (0x00040e44) cale_week_time_pane

0x2a0b,	// (0x00040e64) grid_cale_week_pane

0xaa40,	// (0x00048e99) scroll_pane_cp08

0x2a3e,	// (0x00040e97) cell_cale_week_pane_ParamLimits

0x2a3e,	// (0x00040e97) cell_cale_week_pane

0x2ace,	// (0x00040f27) cale_week_day_heading_pane_t1

0x2b16,	// (0x00040f6f) cale_week_day_heading_pane_t2

0x2b63,	// (0x00040fbc) cale_week_day_heading_pane_t3

0x2bb0,	// (0x00041009) cale_week_day_heading_pane_t4

0x2bfd,	// (0x00041056) cale_week_day_heading_pane_t5

0x2c4a,	// (0x000410a3) cale_week_day_heading_pane_t6

0x2c97,	// (0x000410f0) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0004d626) cale_week_day_heading_pane_t

0xaa62,	// (0x00048ebb) bg_cale_side_pane

0x2cdf,	// (0x00041138) cale_week_time_pane_t1

0x2d23,	// (0x0004117c) cale_week_time_pane_t2

0x2d67,	// (0x000411c0) cale_week_time_pane_t3

0x2dab,	// (0x00041204) cale_week_time_pane_t4

0x2def,	// (0x00041248) cale_week_time_pane_t5

0x2e33,	// (0x0004128c) cale_week_time_pane_t6

0x2e77,	// (0x000412d0) cale_week_time_pane_t7

0x2ec3,	// (0x0004131c) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0004d635) cale_week_time_pane_t

0x2f11,	// (0x0004136a) cell_cale_week_pane_g2

0x2f35,	// (0x0004138e) cell_cale_week_pane_g3_ParamLimits

0x2f35,	// (0x0004138e) cell_cale_week_pane_g3

0xaa70,	// (0x00048ec9) grid_highlight_pane_cp07

0xaa78,	// (0x00048ed1) listscroll_gms_pane

0xaa82,	// (0x00048edb) grid_gms_pane

0xaa8b,	// (0x00048ee4) listscroll_gms_pane_g1

0xaa93,	// (0x00048eec) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0004d646) listscroll_gms_pane_g

0x2f4d,	// (0x000413a6) scroll_pane_cp010

0x2f58,	// (0x000413b1) cell_gms_pane_ParamLimits

0x2f58,	// (0x000413b1) cell_gms_pane

0x2f6b,	// (0x000413c4) cell_gms_pane_g1

0xaa9b,	// (0x00048ef4) cell_gms_pane_g2

0xaaa3,	// (0x00048efc) cell_gms_pane_g3

0xaaac,	// (0x00048f05) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0004d64b) cell_gms_pane_g

0xaab5,	// (0x00048f0e) grid_highlight_pane_cp09

0x5454,	// (0x000438ad) phob_pre_status_pane_g1

0x545c,	// (0x000438b5) phob_pre_status_pane_g2

0x5464,	// (0x000438bd) phob_pre_status_pane_g3

0x546c,	// (0x000438c5) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004da3a) phob_pre_status_pane_g

0x547c,	// (0x000438d5) phob_pre_status_pane_t1

0x548c,	// (0x000438e5) phob_pre_status_pane_t2

0x549c,	// (0x000438f5) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0004da45) phob_pre_status_pane_t

0xa59b,	// (0x000489f4) bg_list_pane_cp05

0x2f7b,	// (0x000413d4) grid_vorec_pane

0x2f87,	// (0x000413e0) vorec_t1

0x2f95,	// (0x000413ee) vorec_t2

0x2fa3,	// (0x000413fc) vorec_t3

0x2fb1,	// (0x0004140a) vorec_t4

0x2fbf,	// (0x00041418) vorec_t5

0x2fcd,	// (0x00041426) vorec_t6

0x0006,

0xf1fb,	// (0x0004d654) vorec_t

0x2fe9,	// (0x00041442) wait_bar_pane_cp01

0x2ff1,	// (0x0004144a) cell_vorec_pane_ParamLimits

0x2ff1,	// (0x0004144a) cell_vorec_pane

0x3006,	// (0x0004145f) cell_vorec_pane_g1

0xa59b,	// (0x000489f4) grid_highlight_pane_cp05

0x301e,	// (0x00041477) cams_zoom_pane

0x302a,	// (0x00041483) image_vga_pane

0x3039,	// (0x00041492) main_camera_pane_g1

0x3047,	// (0x000414a0) main_camera_pane_g2

0x3053,	// (0x000414ac) main_camera_pane_g3

0x3061,	// (0x000414ba) main_camera_pane_g4

0x306f,	// (0x000414c8) main_camera_pane_g5

0x307d,	// (0x000414d6) main_camera_pane_g6

0x308b,	// (0x000414e4) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004d663) main_camera_pane_g

0x3099,	// (0x000414f2) main_camera_pane_t1

0x30ab,	// (0x00041504) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004d674) main_camera_pane_t

0x30ce,	// (0x00041527) cams_zoom_pane_cp_ParamLimits

0x30ce,	// (0x00041527) cams_zoom_pane_cp

0x30f2,	// (0x0004154b) image_cif_pane_ParamLimits

0x30f2,	// (0x0004154b) image_cif_pane

0x3110,	// (0x00041569) image_subqcif_pane

0x311a,	// (0x00041573) main_video_pane_g1_ParamLimits

0x311a,	// (0x00041573) main_video_pane_g1

0x313a,	// (0x00041593) main_video_pane_g2_ParamLimits

0x313a,	// (0x00041593) main_video_pane_g2

0x316a,	// (0x000415c3) main_video_pane_g3_ParamLimits

0x316a,	// (0x000415c3) main_video_pane_g3

0x3193,	// (0x000415ec) main_video_pane_g4_ParamLimits

0x3193,	// (0x000415ec) main_video_pane_g4

0x31bc,	// (0x00041615) main_video_pane_g5_ParamLimits

0x31bc,	// (0x00041615) main_video_pane_g5

0xaac9,	// (0x00048f22) main_video_pane_g6_ParamLimits

0xaac9,	// (0x00048f22) main_video_pane_g6

0x0006,

0xf220,	// (0x0004d679) main_video_pane_g_ParamLimits

0xf220,	// (0x0004d679) main_video_pane_g

0x31de,	// (0x00041637) main_video_pane_t1_ParamLimits

0x31de,	// (0x00041637) main_video_pane_t1

0xaae3,	// (0x00048f3c) cams_zoom_pane_g1

0xaaec,	// (0x00048f45) cams_zoom_pane_g2

0xaaf5,	// (0x00048f4e) cams_zoom_pane_g3

0xaafe,	// (0x00048f57) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004d688) cams_zoom_pane_g

0x3228,	// (0x00041681) grid_cams_pane

0x3236,	// (0x0004168f) linegrid_cams_pane

0x3242,	// (0x0004169b) cell_cams_pane_ParamLimits

0x3242,	// (0x0004169b) cell_cams_pane

0xab07,	// (0x00048f60) cams_burst_image_pane

0xab0f,	// (0x00048f68) cell_cams_pane_g1

0xa59b,	// (0x000489f4) grid_highlight_pane_cp03

0xa910,	// (0x00048d69) mp_bg_pane_g1

0xa59b,	// (0x000489f4) bg_list_pane_cp03

0xc739,	// (0x0004ab92) bg_mp_pane

0xc741,	// (0x0004ab9a) grid_mp_pane

0xc749,	// (0x0004aba2) media_player_g1

0xc753,	// (0x0004abac) media_player_t1

0xc761,	// (0x0004abba) media_player_t2

0xc76f,	// (0x0004abc8) media_player_t3

0xc77d,	// (0x0004abd6) media_player_t4

0xc78b,	// (0x0004abe4) media_player_t5

0xc799,	// (0x0004abf2) media_player_t6

0xc7a7,	// (0x0004ac00) media_player_t7

0x0006,

0xf5cb,	// (0x0004da24) media_player_t

0xc7b5,	// (0x0004ac0e) wait_bar_pane_cp02

0xf5b0,	// (0x0004da09) main_usb_pane_t

0x544b,	// (0x000438a4) cell_mp_pane

0xa910,	// (0x00048d69) cell_mp_pane_g1

0xa59b,	// (0x000489f4) grid_highlight_pane_cp06

0xab17,	// (0x00048f70) grid_skin_colour_pane

0xab1f,	// (0x00048f78) list_highlight_pane_cp03

0x3257,	// (0x000416b0) skin_g1

0xab27,	// (0x00048f80) skin_t1

0xab36,	// (0x00048f8f) skin_t2

0x0001,

0xf264,	// (0x0004d6bd) skin_t

0x3261,	// (0x000416ba) cell_skin_colour_pane_ParamLimits

0x3261,	// (0x000416ba) cell_skin_colour_pane

0xab44,	// (0x00048f9d) cell_skin_colour_pane_g1

0x32e1,	// (0x0004173a) call_video_g1_ParamLimits

0x32e1,	// (0x0004173a) call_video_g1

0x32f1,	// (0x0004174a) call_video_g2_ParamLimits

0x32f1,	// (0x0004174a) call_video_g2

0x0001,

0xf269,	// (0x0004d6c2) call_video_g_ParamLimits

0xf269,	// (0x0004d6c2) call_video_g

0x3341,	// (0x0004179a) call_video_uplink_pane_cp1_ParamLimits

0x3341,	// (0x0004179a) call_video_uplink_pane_cp1

0xab56,	// (0x00048faf) call_video_uplink_pane_cp2

0x340f,	// (0x00041868) video_down_crop_pane_ParamLimits

0x340f,	// (0x00041868) video_down_crop_pane

0x3501,	// (0x0004195a) video_down_pane_ParamLimits

0x3501,	// (0x0004195a) video_down_pane

0xab5e,	// (0x00048fb7) video_down_subqcif_pane_ParamLimits

0xab5e,	// (0x00048fb7) video_down_subqcif_pane

0xab78,	// (0x00048fd1) video_down_subqcif_pane_cp_ParamLimits

0xab78,	// (0x00048fd1) video_down_subqcif_pane_cp

0xaba0,	// (0x00048ff9) im_reading_pane_ParamLimits

0xaba0,	// (0x00048ff9) im_reading_pane

0x361e,	// (0x00041a77) im_writing_pane_ParamLimits

0x361e,	// (0x00041a77) im_writing_pane

0x363c,	// (0x00041a95) im_reading_pane_t1

0xabba,	// (0x00049013) list_im_pane

0xabcb,	// (0x00049024) scroll_pane_cp07

0x367e,	// (0x00041ad7) im_writing_pane_t1_ParamLimits

0x367e,	// (0x00041ad7) im_writing_pane_t1

0xabe4,	// (0x0004903d) im_writing_pane_t2_ParamLimits

0xabe4,	// (0x0004903d) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004d6cc) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004d6cc) im_writing_pane_t

0xa59b,	// (0x000489f4) input_focus_pane_cp04

0xa59b,	// (0x000489f4) input_focus_pane_cp05

0x3690,	// (0x00041ae9) list_im_single_pane_ParamLimits

0x3690,	// (0x00041ae9) list_im_single_pane

0x36a9,	// (0x00041b02) list_single_im_pane_t1

0x540f,	// (0x00043868) blid_accuracy_pane

0x5417,	// (0x00043870) blid_compass_pane

0x5421,	// (0x0004387a) main_location_t1

0x542f,	// (0x00043888) main_location_t2

0x543d,	// (0x00043896) main_location_t3

0x0002,

0xf5da,	// (0x0004da33) main_location_t

0xa59b,	// (0x000489f4) aid_levels_location

0xa910,	// (0x00048d69) blid_accuracy_pane_g1

0xa910,	// (0x00048d69) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004d72e) blid_accuracy_pane_g

0xac2c,	// (0x00049085) wml_content_pane

0xac6a,	// (0x000490c3) wml_button_pane_ParamLimits

0xac6a,	// (0x000490c3) wml_button_pane

0x36b8,	// (0x00041b11) wml_list_single_large_pane_ParamLimits

0x36b8,	// (0x00041b11) wml_list_single_large_pane

0x36da,	// (0x00041b33) wml_list_single_medium_pane_ParamLimits

0x36da,	// (0x00041b33) wml_list_single_medium_pane

0x36fd,	// (0x00041b56) wml_list_single_small_pane_ParamLimits

0x36fd,	// (0x00041b56) wml_list_single_small_pane

0xac7e,	// (0x000490d7) wml_selection_box_pane_ParamLimits

0xac7e,	// (0x000490d7) wml_selection_box_pane

0xac91,	// (0x000490ea) wml_list_single_pane_t1

0xaca0,	// (0x000490f9) wml_list_single_medium_pane_t1

0xacaf,	// (0x00049108) wml_list_single_large_pane_t1

0xacbe,	// (0x00049117) input_focus_pane_cp02_ParamLimits

0xacbe,	// (0x00049117) input_focus_pane_cp02

0xacd1,	// (0x0004912a) wml_selection_box_pane_g1

0xacda,	// (0x00049133) wml_selection_box_pane_t1_ParamLimits

0xacda,	// (0x00049133) wml_selection_box_pane_t1

0xa7f6,	// (0x00048c4f) bg_wml_button_pane_ParamLimits

0xa7f6,	// (0x00048c4f) bg_wml_button_pane

0xacf2,	// (0x0004914b) wml_button_pane_g1

0xacfa,	// (0x00049153) wml_button_pane_t1

0xacf2,	// (0x0004914b) wml_button_bg_pane_g1

0xad0a,	// (0x00049163) wml_button_bg_pane_g2

0xad12,	// (0x0004916b) wml_button_bg_pane_g3

0xad1a,	// (0x00049173) wml_button_bg_pane_g4

0xad22,	// (0x0004917b) wml_button_bg_pane_g5

0xad2a,	// (0x00049183) wml_button_bg_pane_g6

0xad32,	// (0x0004918b) wml_button_bg_pane_g7

0xad3a,	// (0x00049193) wml_button_bg_pane_g8

0xad42,	// (0x0004919b) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004d6d1) wml_button_bg_pane_g

0x3725,	// (0x00041b7e) bg_list_pane_cp02

0xad4a,	// (0x000491a3) mce_header_pane_ParamLimits

0xad4a,	// (0x000491a3) mce_header_pane

0xad60,	// (0x000491b9) mce_icon_pane

0xad60,	// (0x000491b9) mce_image_pane

0xad69,	// (0x000491c2) mce_text_pane_ParamLimits

0xad69,	// (0x000491c2) mce_text_pane

0x372f,	// (0x00041b88) scroll_pane_cp03

0xac62,	// (0x000490bb) scroll_pane_cp04

0xad7c,	// (0x000491d5) scroll_pane_cp05_ParamLimits

0xad7c,	// (0x000491d5) scroll_pane_cp05

0x3739,	// (0x00041b92) mce_header_field_pane_ParamLimits

0x3739,	// (0x00041b92) mce_header_field_pane

0x375b,	// (0x00041bb4) mce_header_field_pane_2_ParamLimits

0x375b,	// (0x00041bb4) mce_header_field_pane_2

0x3771,	// (0x00041bca) mce_header_field_pane_3

0x3779,	// (0x00041bd2) list_single_mce_message_pane_ParamLimits

0x3779,	// (0x00041bd2) list_single_mce_message_pane

0x3798,	// (0x00041bf1) list_single_mce_smart_pane_ParamLimits

0x3798,	// (0x00041bf1) list_single_mce_smart_pane

0xad88,	// (0x000491e1) input_focus_pane_cp03

0xad91,	// (0x000491ea) list_header_data_pane

0x37c2,	// (0x00041c1b) mce_header_field_pane_t1

0x37d2,	// (0x00041c2b) list_single_mce_header_pane_ParamLimits

0x37d2,	// (0x00041c2b) list_single_mce_header_pane

0xad99,	// (0x000491f2) list_single_mce_header_pane_t1

0xada8,	// (0x00049201) list_single_mce_message_pane_g1

0xadb0,	// (0x00049209) list_single_mce_message_pane_t1

0x3816,	// (0x00041c6f) bg_cale_heading_pane_cp01_ParamLimits

0x3816,	// (0x00041c6f) bg_cale_heading_pane_cp01

0xadbe,	// (0x00049217) bg_cale_pane_cp02_ParamLimits

0xadbe,	// (0x00049217) bg_cale_pane_cp02

0x385d,	// (0x00041cb6) cale_month_corner_pane

0x387c,	// (0x00041cd5) cale_month_day_heading_pane_ParamLimits

0x387c,	// (0x00041cd5) cale_month_day_heading_pane

0x38d3,	// (0x00041d2c) cale_month_pane_g1_ParamLimits

0x38d3,	// (0x00041d2c) cale_month_pane_g1

0x390f,	// (0x00041d68) cale_month_pane_g2_ParamLimits

0x390f,	// (0x00041d68) cale_month_pane_g2

0x3947,	// (0x00041da0) cale_month_pane_g3_ParamLimits

0x3947,	// (0x00041da0) cale_month_pane_g3

0x399b,	// (0x00041df4) cale_month_pane_g4_ParamLimits

0x399b,	// (0x00041df4) cale_month_pane_g4

0x39ef,	// (0x00041e48) cale_month_pane_g5_ParamLimits

0x39ef,	// (0x00041e48) cale_month_pane_g5

0x3a43,	// (0x00041e9c) cale_month_pane_g6_ParamLimits

0x3a43,	// (0x00041e9c) cale_month_pane_g6

0x3aa7,	// (0x00041f00) cale_month_pane_g7_ParamLimits

0x3aa7,	// (0x00041f00) cale_month_pane_g7

0x3b0b,	// (0x00041f64) cale_month_pane_g8_ParamLimits

0x3b0b,	// (0x00041f64) cale_month_pane_g8

0x3b6f,	// (0x00041fc8) cale_month_pane_g9_ParamLimits

0x3b6f,	// (0x00041fc8) cale_month_pane_g9

0x3bc7,	// (0x00042020) cale_month_pane_g10_ParamLimits

0x3bc7,	// (0x00042020) cale_month_pane_g10

0x3c15,	// (0x0004206e) cale_month_pane_g11_ParamLimits

0x3c15,	// (0x0004206e) cale_month_pane_g11

0x3c61,	// (0x000420ba) cale_month_pane_g12_ParamLimits

0x3c61,	// (0x000420ba) cale_month_pane_g12

0x3cb1,	// (0x0004210a) cale_month_pane_g13_ParamLimits

0x3cb1,	// (0x0004210a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004d6e4) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004d6e4) cale_month_pane_g

0x3d01,	// (0x0004215a) cale_month_week_pane

0x3d21,	// (0x0004217a) grid_cale_month_pane_ParamLimits

0x3d21,	// (0x0004217a) grid_cale_month_pane

0x3d6f,	// (0x000421c8) cale_month_day_heading_pane_t1

0x3df1,	// (0x0004224a) cale_month_day_heading_pane_t2

0x3e7e,	// (0x000422d7) cale_month_day_heading_pane_t3

0x3f0b,	// (0x00042364) cale_month_day_heading_pane_t4

0x3f98,	// (0x000423f1) cale_month_day_heading_pane_t5

0x402d,	// (0x00042486) cale_month_day_heading_pane_t6

0x40ca,	// (0x00042523) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004d6ff) cale_month_day_heading_pane_t

0xaa62,	// (0x00048ebb) bg_cale_side_pane_cp01

0x4167,	// (0x000425c0) cale_month_week_pane_t1

0x4180,	// (0x000425d9) cale_month_week_pane_t2

0x4199,	// (0x000425f2) cale_month_week_pane_t3

0x41b2,	// (0x0004260b) cale_month_week_pane_t4

0x41cb,	// (0x00042624) cale_month_week_pane_t5

0x41e6,	// (0x0004263f) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004d70e) cale_month_week_pane_t

0x4207,	// (0x00042660) cell_cale_month_pane_ParamLimits

0x4207,	// (0x00042660) cell_cale_month_pane

0x4329,	// (0x00042782) cell_cale_month_pane_g1

0x4335,	// (0x0004278e) cell_cale_month_pane_t1_ParamLimits

0x4335,	// (0x0004278e) cell_cale_month_pane_t1

0xaa70,	// (0x00048ec9) grid_highlight_pane_cp08

0xa910,	// (0x00048d69) main_smil_g1

0x4355,	// (0x000427ae) smil_status_pane

0xadfd,	// (0x00049256) smil_text_pane

0xc657,	// (0x0004aab0) bg_popup_call3_rect_pane_g8

0xc65f,	// (0x0004aab8) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004d9c7) bg_popup_call3_rect_pane_g

0xc8ed,	// (0x0004ad46) smil_status_volume_pane_g1

0x4368,	// (0x000427c1) smil_status_pane_t1

0x5803,	// (0x00043c5c) volume_smil_pane

0xae07,	// (0x00049260) list_smil_text_pane

0x437f,	// (0x000427d8) scroll_pane_cp011

0x438a,	// (0x000427e3) smil_text_list_pane_t1_ParamLimits

0x438a,	// (0x000427e3) smil_text_list_pane_t1

0x43dc,	// (0x00042835) aid_volume_smil_ParamLimits

0x43dc,	// (0x00042835) aid_volume_smil

0xa910,	// (0x00048d69) smil_volume_pane_g1

0xa910,	// (0x00048d69) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004d72e) smil_volume_pane_g

0x2750,	// (0x00040ba9) listscroll_cale_day_pane

0xae11,	// (0x0004926a) bg_cale_pane

0xae29,	// (0x00049282) list_cale_pane

0xae4c,	// (0x000492a5) scroll_pane_cp09

0xae5d,	// (0x000492b6) cale_bg_pane_g1

0xae65,	// (0x000492be) cale_bg_pane_g2

0xae6d,	// (0x000492c6) cale_bg_pane_g3

0xae75,	// (0x000492ce) cale_bg_pane_g4

0xae7d,	// (0x000492d6) cale_bg_pane_g5

0xae85,	// (0x000492de) cale_bg_pane_g6

0xae8d,	// (0x000492e6) cale_bg_pane_g7

0xae95,	// (0x000492ee) cale_bg_pane_g8

0xae9d,	// (0x000492f6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004d733) cale_bg_pane_g

0x43fe,	// (0x00042857) list_cale_time_pane_ParamLimits

0x43fe,	// (0x00042857) list_cale_time_pane

0xaead,	// (0x00049306) list_cale_time_pane_g1_ParamLimits

0xaead,	// (0x00049306) list_cale_time_pane_g1

0xaeb9,	// (0x00049312) list_cale_time_pane_g2_ParamLimits

0xaeb9,	// (0x00049312) list_cale_time_pane_g2

0x4412,	// (0x0004286b) list_cale_time_pane_g3_ParamLimits

0x4412,	// (0x0004286b) list_cale_time_pane_g3

0x4420,	// (0x00042879) list_cale_time_pane_g4_ParamLimits

0x4420,	// (0x00042879) list_cale_time_pane_g4

0x442e,	// (0x00042887) list_cale_time_pane_g5_ParamLimits

0x442e,	// (0x00042887) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004d746) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004d746) list_cale_time_pane_g

0xaed3,	// (0x0004932c) list_cale_time_pane_t1_ParamLimits

0xaed3,	// (0x0004932c) list_cale_time_pane_t1

0xaefb,	// (0x00049354) list_cale_time_pane_t2_ParamLimits

0xaefb,	// (0x00049354) list_cale_time_pane_t2

0x4726,	// (0x00042b7f) aid_blid_cardinal_pane

0x4768,	// (0x00042bc1) compass_pane_t4

0xaf23,	// (0x0004937c) list_cale_time_pane_t4_ParamLimits

0xaf23,	// (0x0004937c) list_cale_time_pane_t4

0x4776,	// (0x00042bcf) compass_pane_t5

0x4786,	// (0x00042bdf) compass_pane_t6

0x4794,	// (0x00042bed) compass_pane_t7

0xb33f,	// (0x00049798) navi_pane_cc_t1

0xb494,	// (0x000498ed) aid_phob_thumbnail_center_pane

0x4f0b,	// (0x00043364) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004d753) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004d753) list_cale_time_pane_t

0xa1f2,	// (0x0004864b) bg_popup_window_pane_cp02_ParamLimits

0xa1f2,	// (0x0004864b) bg_popup_window_pane_cp02

0xaf4b,	// (0x000493a4) heading_pane_cp01_ParamLimits

0xaf4b,	// (0x000493a4) heading_pane_cp01

0xaf57,	// (0x000493b0) loc_req_pane_ParamLimits

0xaf57,	// (0x000493b0) loc_req_pane

0xaf67,	// (0x000493c0) loc_type_pane_ParamLimits

0xaf67,	// (0x000493c0) loc_type_pane

0xaf79,	// (0x000493d2) loc_type_pane_t1_ParamLimits

0xaf79,	// (0x000493d2) loc_type_pane_t1

0xaf8b,	// (0x000493e4) loc_type_pane_t2_ParamLimits

0xaf8b,	// (0x000493e4) loc_type_pane_t2

0xaf9d,	// (0x000493f6) loc_type_pane_t3_ParamLimits

0xaf9d,	// (0x000493f6) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004d75a) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004d75a) loc_type_pane_t

0xafaf,	// (0x00049408) list_loc_req_pane

0xafb9,	// (0x00049412) scroll_pane_cp012

0x443c,	// (0x00042895) list_single_loc_request_popup_menu_pane_ParamLimits

0x443c,	// (0x00042895) list_single_loc_request_popup_menu_pane

0xafc4,	// (0x0004941d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafc4,	// (0x0004941d) list_single_loc_request_popup_menu_pane_g1

0xafd0,	// (0x00049429) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafd0,	// (0x00049429) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004d761) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004d761) list_single_loc_request_popup_menu_pane_g

0xafdc,	// (0x00049435) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafdc,	// (0x00049435) list_single_loc_request_popup_menu_pane_t1

0x444e,	// (0x000428a7) bg_popup_window_pane_cp03_ParamLimits

0x444e,	// (0x000428a7) bg_popup_window_pane_cp03

0x445c,	// (0x000428b5) heading_loc_req_pane_ParamLimits

0x445c,	// (0x000428b5) heading_loc_req_pane

0x4468,	// (0x000428c1) popup_dyc_status_message_window_g1_ParamLimits

0x4468,	// (0x000428c1) popup_dyc_status_message_window_g1

0x4474,	// (0x000428cd) popup_dyc_status_message_window_t1_ParamLimits

0x4474,	// (0x000428cd) popup_dyc_status_message_window_t1

0x4486,	// (0x000428df) popup_dyc_status_message_window_t2_ParamLimits

0x4486,	// (0x000428df) popup_dyc_status_message_window_t2

0x4498,	// (0x000428f1) popup_dyc_status_message_window_t3_ParamLimits

0x4498,	// (0x000428f1) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004d766) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004d766) popup_dyc_status_message_window_t

0xa59b,	// (0x000489f4) bg_heading_pane_cp01

0xaff2,	// (0x0004944b) heading_loc_req_pane_g1

0xaffa,	// (0x00049453) heading_loc_req_pane_g2

0xb002,	// (0x0004945b) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004d76d) heading_loc_req_pane_g

0xb00a,	// (0x00049463) heading_loc_req_pane_t1

0xb01a,	// (0x00049473) bg_popup_sub_pane_cp01_ParamLimits

0xb01a,	// (0x00049473) bg_popup_sub_pane_cp01

0xb028,	// (0x00049481) popup_cale_events_window_g1_ParamLimits

0xb028,	// (0x00049481) popup_cale_events_window_g1

0xb048,	// (0x000494a1) popup_cale_events_window_g2_ParamLimits

0xb048,	// (0x000494a1) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004d7a1) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004d7a1) popup_cale_events_window_g

0xb068,	// (0x000494c1) popup_cale_events_window_t1_ParamLimits

0xb068,	// (0x000494c1) popup_cale_events_window_t1

0xb07a,	// (0x000494d3) popup_cale_events_window_t2_ParamLimits

0xb07a,	// (0x000494d3) popup_cale_events_window_t2

0xb0b8,	// (0x00049511) popup_cale_events_window_t3_ParamLimits

0xb0b8,	// (0x00049511) popup_cale_events_window_t3

0xb0f2,	// (0x0004954b) popup_cale_events_window_t4_ParamLimits

0xb0f2,	// (0x0004954b) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004d7a6) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004d7a6) popup_cale_events_window_t

0x44c2,	// (0x0004291b) call_type_pane

0xb239,	// (0x00049692) popup_call_status_window_g1

0x44ce,	// (0x00042927) popup_call_status_window_g2

0x44da,	// (0x00042933) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004d7af) popup_call_status_window_g

0xb128,	// (0x00049581) call_type_pane_g1

0xb131,	// (0x0004958a) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004d7b6) call_type_pane_g

0xa59b,	// (0x000489f4) bg_popup_sub_pane_cp02

0xb13a,	// (0x00049593) listscroll_popup_wml_pane

0xb142,	// (0x0004959b) list_wml_pane

0xb14c,	// (0x000495a5) scroll_pane_cp013

0xb157,	// (0x000495b0) list_single_graphic_popup_wml_pane_ParamLimits

0xb157,	// (0x000495b0) list_single_graphic_popup_wml_pane

0xa910,	// (0x00048d69) list_single_graphic_popup_wml_pane_g1

0xb16b,	// (0x000495c4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004d7bb) list_single_graphic_popup_wml_pane_g

0xb173,	// (0x000495cc) list_single_graphic_popup_wml_pane_t1

0xb189,	// (0x000495e2) aid_call_pane

0xa7ee,	// (0x00048c47) popup_clock_analogue_window_g1

0xa7ee,	// (0x00048c47) popup_clock_analogue_window_g2

0x44e6,	// (0x0004293f) popup_clock_analogue_window_g3

0x44e6,	// (0x0004293f) popup_clock_analogue_window_g4

0xa910,	// (0x00048d69) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004d7c0) popup_clock_analogue_window_g

0x44ee,	// (0x00042947) popup_clock_analogue_window_t1

0x44fc,	// (0x00042955) clock_digital_number_pane_ParamLimits

0x44fc,	// (0x00042955) clock_digital_number_pane

0x4508,	// (0x00042961) clock_digital_number_pane_cp02_ParamLimits

0x4508,	// (0x00042961) clock_digital_number_pane_cp02

0x4514,	// (0x0004296d) clock_digital_number_pane_cp03_ParamLimits

0x4514,	// (0x0004296d) clock_digital_number_pane_cp03

0x4520,	// (0x00042979) clock_digital_number_pane_cp04_ParamLimits

0x4520,	// (0x00042979) clock_digital_number_pane_cp04

0x452c,	// (0x00042985) clock_digital_separator_pane_ParamLimits

0x452c,	// (0x00042985) clock_digital_separator_pane

0x4538,	// (0x00042991) popup_clock_digital_window_t1

0xa910,	// (0x00048d69) clock_digital_number_pane_g1

0xa910,	// (0x00048d69) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004d72e) clock_digital_number_pane_g

0xa910,	// (0x00048d69) clock_digital_separator_pane_g1

0xa910,	// (0x00048d69) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004d72e) clock_digital_separator_pane_g

0xa59b,	// (0x000489f4) bg_popup_window_pane_cp04

0xb191,	// (0x000495ea) heading_pane_cp03

0xb199,	// (0x000495f2) listscroll_popup_gms_pane

0xb1a1,	// (0x000495fa) grid_large_graphic_popup_pane

0xb1ab,	// (0x00049604) listscroll_popup_gms_pane_g1

0xb1b3,	// (0x0004960c) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004d7cb) listscroll_popup_gms_pane_g

0xac62,	// (0x000490bb) scroll_pane_cp014

0x4555,	// (0x000429ae) cell_large_graphic_popup_pane_ParamLimits

0x4555,	// (0x000429ae) cell_large_graphic_popup_pane

0x456f,	// (0x000429c8) cell_large_graphic_popup_pane_g1_ParamLimits

0x456f,	// (0x000429c8) cell_large_graphic_popup_pane_g1

0xb1bb,	// (0x00049614) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1bb,	// (0x00049614) cell_large_graphic_popup_pane_g2

0xb1c7,	// (0x00049620) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1c7,	// (0x00049620) cell_large_graphic_popup_pane_g3

0xb1d4,	// (0x0004962d) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1d4,	// (0x0004962d) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004d7d0) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004d7d0) cell_large_graphic_popup_pane_g

0xb1e4,	// (0x0004963d) grid_highlight_pane_cp010

0xa910,	// (0x00048d69) bg_popup_call_pane_g1

0xb1ee,	// (0x00049647) list_single_graphic_popup_conf_pane_ParamLimits

0xb1ee,	// (0x00049647) list_single_graphic_popup_conf_pane

0xb200,	// (0x00049659) list_highlight_pane_cp01

0xb209,	// (0x00049662) list_single_graphic_popup_conf_pane_g1

0xb211,	// (0x0004966a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004d7d9) list_single_graphic_popup_conf_pane_g

0xb219,	// (0x00049672) list_single_graphic_popup_conf_pane_t1

0xb227,	// (0x00049680) linegrid_cams_pane_g1

0x457b,	// (0x000429d4) linegrid_cams_pane_g2

0xaaa3,	// (0x00048efc) linegrid_cams_pane_g3

0xb230,	// (0x00049689) linegrid_cams_pane_g4

0x4584,	// (0x000429dd) linegrid_cams_pane_g5

0x458d,	// (0x000429e6) linegrid_cams_pane_g6

0xaaac,	// (0x00048f05) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004d7de) linegrid_cams_pane_g

0xb247,	// (0x000496a0) popup_clock_analogue_window

0xb247,	// (0x000496a0) popup_clock_digital_window

0xa59b,	// (0x000489f4) popup_phob_thumbnail_window

0xa910,	// (0x00048d69) call_video_uplink_pane_g1

0xb250,	// (0x000496a9) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004d7ed) call_video_uplink_pane_g

0xb258,	// (0x000496b1) video_uplink_pane

0xb260,	// (0x000496b9) mce_image_pane_g1

0x4598,	// (0x000429f1) mce_image_pane_g2

0x45a2,	// (0x000429fb) mce_image_pane_g3

0x45ac,	// (0x00042a05) mce_image_pane_g4

0x45b4,	// (0x00042a0d) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004d7f2) mce_image_pane_g

0xb26a,	// (0x000496c3) control_top_pane_stacon_cp01_ParamLimits

0xb26a,	// (0x000496c3) control_top_pane_stacon_cp01

0xb27e,	// (0x000496d7) uni_indicator_pane_stacon_cp01_ParamLimits

0xb27e,	// (0x000496d7) uni_indicator_pane_stacon_cp01

0xb28f,	// (0x000496e8) bg_popup_sub_pane_cp03

0x45bc,	// (0x00042a15) chi_dic_find_pane

0x45c4,	// (0x00042a1d) listscroll_chi_dic_pane

0x45cd,	// (0x00042a26) main_pane_chidic_g1

0x45e0,	// (0x00042a39) chi_dic_find_pane_t1

0xb299,	// (0x000496f2) find_chidic_pane

0xb2a2,	// (0x000496fb) chi_dic_list_pane_ParamLimits

0xb2a2,	// (0x000496fb) chi_dic_list_pane

0xb2b3,	// (0x0004970c) scroll_pane_cp020

0x45ee,	// (0x00042a47) find_chidic_pane_t1

0xa59b,	// (0x000489f4) input_focus_pane_cp06

0x45fd,	// (0x00042a56) list_chi_dic_pane_ParamLimits

0x45fd,	// (0x00042a56) list_chi_dic_pane

0x4612,	// (0x00042a6b) list_chi_dic_pane_t1_ParamLimits

0x4612,	// (0x00042a6b) list_chi_dic_pane_t1

0xa59b,	// (0x000489f4) list_highlight_pane_cp020

0xb2bb,	// (0x00049714) bg_cale_heading_pane_g1

0x4625,	// (0x00042a7e) bg_cale_heading_pane_g2

0x462d,	// (0x00042a86) bg_cale_heading_pane_g3

0x4635,	// (0x00042a8e) bg_cale_heading_pane_g4

0x463f,	// (0x00042a98) bg_cale_heading_pane_g5

0x4649,	// (0x00042aa2) bg_cale_heading_pane_g6

0x4651,	// (0x00042aaa) bg_cale_heading_pane_g7

0x4659,	// (0x00042ab2) bg_cale_heading_pane_g8

0x4663,	// (0x00042abc) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004d7fd) bg_cale_heading_pane_g

0xb2bb,	// (0x00049714) bg_cale_side_pane_g1

0x466d,	// (0x00042ac6) bg_cale_side_pane_g2

0x4677,	// (0x00042ad0) bg_cale_side_pane_g3

0x4681,	// (0x00042ada) bg_cale_side_pane_g4

0x468b,	// (0x00042ae4) bg_cale_side_pane_g5

0x4695,	// (0x00042aee) bg_cale_side_pane_g6

0x469f,	// (0x00042af8) bg_cale_side_pane_g7

0x46a9,	// (0x00042b02) bg_cale_side_pane_g8

0x46b1,	// (0x00042b0a) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004d810) bg_cale_side_pane_g

0x46b9,	// (0x00042b12) popup_call_status_window_ParamLimits

0x46b9,	// (0x00042b12) popup_call_status_window

0xb2c3,	// (0x0004971c) stacon_top_pane

0xb2cb,	// (0x00049724) status_pane_ParamLimits

0xb2cb,	// (0x00049724) status_pane

0xb2e0,	// (0x00049739) status_small_pane

0xb2e8,	// (0x00049741) control_pane

0xa59b,	// (0x000489f4) stacon_bottom_pane

0xb2f0,	// (0x00049749) list_single_mce_smart_pane_t1_ParamLimits

0xb2f0,	// (0x00049749) list_single_mce_smart_pane_t1

0xb303,	// (0x0004975c) list_single_mce_smart_pane_t2_ParamLimits

0xb303,	// (0x0004975c) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004d823) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004d823) list_single_mce_smart_pane_t

0x46c5,	// (0x00042b1e) compass_pane

0x46d0,	// (0x00042b29) main_location2_pane_t1

0x46e6,	// (0x00042b3f) main_location2_pane_t2

0x46fc,	// (0x00042b55) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004d828) main_location2_pane_t

0xb322,	// (0x0004977b) compass_pane_g1_ParamLimits

0xb322,	// (0x0004977b) compass_pane_g1

0x474a,	// (0x00042ba3) compass_pane_t1

0x4759,	// (0x00042bb2) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004d831) compass_pane_t

0x47a4,	// (0x00042bfd) text_secondary_cp61

0xb336,	// (0x0004978f) navi_pane_cams_g5

0xb359,	// (0x000497b2) navi_pane_im_t1

0xb367,	// (0x000497c0) navi_pane_mp_g1_ParamLimits

0xb367,	// (0x000497c0) navi_pane_mp_g1

0xb37b,	// (0x000497d4) navi_pane_mp_g2_ParamLimits

0xb37b,	// (0x000497d4) navi_pane_mp_g2

0xb387,	// (0x000497e0) navi_pane_mp_g3_ParamLimits

0xb387,	// (0x000497e0) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004d845) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004d845) navi_pane_mp_g

0xb393,	// (0x000497ec) navi_pane_mp_t1

0xb3a1,	// (0x000497fa) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004d84c) navi_pane_mp_t

0xb3dd,	// (0x00049836) navi_pane_vt_g1

0xb393,	// (0x000497ec) navi_pane_vt_t1

0xb3e5,	// (0x0004983e) navi_slider_pane

0xb3ed,	// (0x00049846) zooming_pane

0xb3f5,	// (0x0004984e) navi_slider_pane_g1

0x48d9,	// (0x00042d32) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004d853) navi_slider_pane_g

0xb419,	// (0x00049872) aid_levels_zoom

0xb421,	// (0x0004987a) zooming_pane_g1

0xb429,	// (0x00049882) zooming_pane_g2

0xb429,	// (0x00049882) zooming_pane_g3

0x0002,

0xf409,	// (0x0004d862) zooming_pane_g

0xb431,	// (0x0004988a) level_10_zoom

0xb43a,	// (0x00049893) level_11_zoom

0xb443,	// (0x0004989c) level_1_zoom

0xb44c,	// (0x000498a5) level_2_zoom

0xb455,	// (0x000498ae) level_3_zoom

0xb45e,	// (0x000498b7) level_4_zoom

0xb467,	// (0x000498c0) level_5_zoom

0xb470,	// (0x000498c9) level_6_zoom

0xb479,	// (0x000498d2) level_7_zoom

0xb482,	// (0x000498db) level_8_zoom

0xb48b,	// (0x000498e4) level_9_zoom

0xb49c,	// (0x000498f5) popup_phob_thumbnail_window_g1

0xb4a4,	// (0x000498fd) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004d869) popup_phob_thumbnail_window_g

0xc7bd,	// (0x0004ac16) level_1_location

0xc7c5,	// (0x0004ac1e) level_2_location

0xc7cd,	// (0x0004ac26) level_3_location

0xc7d5,	// (0x0004ac2e) level_4_location

0xb3ed,	// (0x00049846) level_5_location

0x48eb,	// (0x00042d44) mce_icon_pane_g1

0x48f3,	// (0x00042d4c) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004d86e) mce_icon_pane_g

0x48fb,	// (0x00042d54) main_mup_pane_g1_ParamLimits

0x48fb,	// (0x00042d54) main_mup_pane_g1

0x4913,	// (0x00042d6c) main_mup_pane_g2_ParamLimits

0x4913,	// (0x00042d6c) main_mup_pane_g2

0x492f,	// (0x00042d88) main_mup_pane_g3_ParamLimits

0x492f,	// (0x00042d88) main_mup_pane_g3

0x494b,	// (0x00042da4) main_mup_pane_g4_ParamLimits

0x494b,	// (0x00042da4) main_mup_pane_g4

0x4967,	// (0x00042dc0) main_mup_pane_g5_ParamLimits

0x4967,	// (0x00042dc0) main_mup_pane_g5

0x4988,	// (0x00042de1) main_mup_pane_g6_ParamLimits

0x4988,	// (0x00042de1) main_mup_pane_g6

0x49a8,	// (0x00042e01) main_mup_pane_g7_ParamLimits

0x49a8,	// (0x00042e01) main_mup_pane_g7

0x49cc,	// (0x00042e25) main_mup_pane_g8_ParamLimits

0x49cc,	// (0x00042e25) main_mup_pane_g8

0x49f0,	// (0x00042e49) main_mup_pane_g9_ParamLimits

0x49f0,	// (0x00042e49) main_mup_pane_g9

0x4a13,	// (0x00042e6c) main_mup_pane_g10_ParamLimits

0x4a13,	// (0x00042e6c) main_mup_pane_g10

0x4a36,	// (0x00042e8f) main_mup_pane_g11_ParamLimits

0x4a36,	// (0x00042e8f) main_mup_pane_g11

0x4a56,	// (0x00042eaf) main_mup_pane_g12_ParamLimits

0x4a56,	// (0x00042eaf) main_mup_pane_g12

0x4a64,	// (0x00042ebd) main_mup_pane_g13_ParamLimits

0x4a64,	// (0x00042ebd) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004d873) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004d873) main_mup_pane_g

0x4a7a,	// (0x00042ed3) main_mup_pane_t1_ParamLimits

0x4a7a,	// (0x00042ed3) main_mup_pane_t1

0x4a99,	// (0x00042ef2) main_mup_pane_t2_ParamLimits

0x4a99,	// (0x00042ef2) main_mup_pane_t2

0x4ab3,	// (0x00042f0c) main_mup_pane_t3_ParamLimits

0x4ab3,	// (0x00042f0c) main_mup_pane_t3

0x4acd,	// (0x00042f26) main_mup_pane_t4_ParamLimits

0x4acd,	// (0x00042f26) main_mup_pane_t4

0x4adf,	// (0x00042f38) main_mup_pane_t5_ParamLimits

0x4adf,	// (0x00042f38) main_mup_pane_t5

0x4af1,	// (0x00042f4a) main_mup_pane_t6_ParamLimits

0x4af1,	// (0x00042f4a) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004d88e) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004d88e) main_mup_pane_t

0x4b07,	// (0x00042f60) mup_progress_pane_ParamLimits

0x4b07,	// (0x00042f60) mup_progress_pane

0x4b13,	// (0x00042f6c) mup_visualizer_pane_ParamLimits

0x4b13,	// (0x00042f6c) mup_visualizer_pane

0x4b51,	// (0x00042faa) mup_volume_pane_ParamLimits

0x4b51,	// (0x00042faa) mup_volume_pane

0xb239,	// (0x00049692) mup_visualizer_pane_g1_ParamLimits

0xb239,	// (0x00049692) mup_visualizer_pane_g1

0xb239,	// (0x00049692) mup_visualizer_pane_g2_ParamLimits

0xb239,	// (0x00049692) mup_visualizer_pane_g2

0xb322,	// (0x0004977b) mup_visualizer_pane_g3_ParamLimits

0xb322,	// (0x0004977b) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004d89b) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004d89b) mup_visualizer_pane_g

0xa910,	// (0x00048d69) mup_volume_pane_g1

0xb4b4,	// (0x0004990d) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004d8a2) mup_volume_pane_g

0xa910,	// (0x00048d69) mup_progress_pane_g1

0xb4bd,	// (0x00049916) mup_progress_pane_g2

0xb4c6,	// (0x0004991f) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004d8a7) mup_progress_pane_g

0xa59b,	// (0x000489f4) bg_popup_window_pane_cp05

0xb4cf,	// (0x00049928) heading_pane_cp02_ParamLimits

0xb4cf,	// (0x00049928) heading_pane_cp02

0xb4eb,	// (0x00049944) list_popup_blid_pane

0xb4f3,	// (0x0004994c) list_blid_sat_info_pane_ParamLimits

0xb4f3,	// (0x0004994c) list_blid_sat_info_pane

0xb506,	// (0x0004995f) list_blid_sat_info_pane_g1

0xb50e,	// (0x00049967) list_blid_sat_info_pane_t1

0x4c70,	// (0x000430c9) mup_equalizer_pane_ParamLimits

0x4c70,	// (0x000430c9) mup_equalizer_pane

0x4c91,	// (0x000430ea) mup_equalizer_pane_cp1_ParamLimits

0x4c91,	// (0x000430ea) mup_equalizer_pane_cp1

0x4cb2,	// (0x0004310b) mup_equalizer_pane_cp2_ParamLimits

0x4cb2,	// (0x0004310b) mup_equalizer_pane_cp2

0x4cd3,	// (0x0004312c) mup_equalizer_pane_cp3_ParamLimits

0x4cd3,	// (0x0004312c) mup_equalizer_pane_cp3

0x4cf8,	// (0x00043151) mup_equalizer_pane_cp4_ParamLimits

0x4cf8,	// (0x00043151) mup_equalizer_pane_cp4

0x4d1d,	// (0x00043176) mup_equalizer_pane_cp5

0x4d35,	// (0x0004318e) mup_equalizer_pane_cp6

0x4d4d,	// (0x000431a6) mup_equalizer_pane_cp7

0xc6d7,	// (0x0004ab30) bg_popup_call_poc_act_pane_g9

0xc6df,	// (0x0004ab38) bg_popup_call_poc_act_pane_g10

0xc6e7,	// (0x0004ab40) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7f6,	// (0x00048c4f) mup_scale_pane

0xa910,	// (0x00048d69) mup_scale_pane_g1

0xb51c,	// (0x00049975) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004d8c3) mup_scale_pane_g

0xb540,	// (0x00049999) msg_data_pane

0xb548,	// (0x000499a1) scroll_pane_cp017

0x4d77,	// (0x000431d0) bg_list_pane_cp04_ParamLimits

0x4d77,	// (0x000431d0) bg_list_pane_cp04

0xb550,	// (0x000499a9) msg_data_pane_g1

0x4d97,	// (0x000431f0) msg_data_pane_g2

0x4da1,	// (0x000431fa) msg_data_pane_g3

0x4dab,	// (0x00043204) msg_data_pane_g4

0x4db3,	// (0x0004320c) msg_data_pane_g5

0x4dbb,	// (0x00043214) msg_data_pane_g6

0x4dc3,	// (0x0004321c) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004d8d2) msg_data_pane_g

0x4dcb,	// (0x00043224) msg_text_pane_ParamLimits

0x4dcb,	// (0x00043224) msg_text_pane

0x4df3,	// (0x0004324c) qrid_highlight_pane_cp011_ParamLimits

0x4df3,	// (0x0004324c) qrid_highlight_pane_cp011

0xa59b,	// (0x000489f4) msg_body_pane

0xa59b,	// (0x000489f4) msg_header_pane

0xb561,	// (0x000499ba) input_focus_pane_cp07

0xb576,	// (0x000499cf) msg_header_pane_t1_ParamLimits

0xb576,	// (0x000499cf) msg_header_pane_t1

0x0db7,	// (0x0003f210) msg_header_pane_t2_ParamLimits

0x0db7,	// (0x0003f210) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004d8e6) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004d8e6) msg_header_pane_t

0xb588,	// (0x000499e1) msg_body_pane_g1

0x0dc9,	// (0x0003f222) msg_body_pane_t1_ParamLimits

0x0dc9,	// (0x0003f222) msg_body_pane_t1

0x0dfa,	// (0x0003f253) msg_body_pane_t2_ParamLimits

0x0dfa,	// (0x0003f253) msg_body_pane_t2

0x0e0c,	// (0x0003f265) msg_body_pane_t3_ParamLimits

0x0e0c,	// (0x0003f265) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004d8eb) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004d8eb) msg_body_pane_t

0x4e5b,	// (0x000432b4) main_viewer_pane_g1_ParamLimits

0x4e5b,	// (0x000432b4) main_viewer_pane_g1

0x4e67,	// (0x000432c0) main_viewer_pane_g2_ParamLimits

0x4e67,	// (0x000432c0) main_viewer_pane_g2

0x4e73,	// (0x000432cc) main_viewer_pane_g3_ParamLimits

0x4e73,	// (0x000432cc) main_viewer_pane_g3

0x4e84,	// (0x000432dd) main_viewer_pane_g4_ParamLimits

0x4e84,	// (0x000432dd) main_viewer_pane_g4

0x4e95,	// (0x000432ee) main_viewer_pane_g5_ParamLimits

0x4e95,	// (0x000432ee) main_viewer_pane_g5

0x4e95,	// (0x000432ee) main_viewer_pane_g7_ParamLimits

0x4e95,	// (0x000432ee) main_viewer_pane_g7

0x4ea7,	// (0x00043300) main_viewer_pane_g8_ParamLimits

0x4ea7,	// (0x00043300) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004d8fb) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004d8fb) main_viewer_pane_g

0xb590,	// (0x000499e9) viewer_content_pane_ParamLimits

0xb590,	// (0x000499e9) viewer_content_pane

0x4edf,	// (0x00043338) main_postcard_pane_g1_ParamLimits

0x4edf,	// (0x00043338) main_postcard_pane_g1

0x4eed,	// (0x00043346) main_postcard_pane_g2_ParamLimits

0x4eed,	// (0x00043346) main_postcard_pane_g2

0x4efb,	// (0x00043354) main_postcard_pane_g3_ParamLimits

0x4efb,	// (0x00043354) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004d90c) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004d90c) main_postcard_pane_g

0x4f0b,	// (0x00043364) main_postcard_pane_g4

0xc900,	// (0x0004ad59) smil_status_volume_pane_g2

0x4f37,	// (0x00043390) postcard_pane_ParamLimits

0x4f37,	// (0x00043390) postcard_pane

0xb239,	// (0x00049692) postcard_pane_g1_ParamLimits

0xb239,	// (0x00049692) postcard_pane_g1

0x4f71,	// (0x000433ca) postcard_pane_g2_ParamLimits

0x4f71,	// (0x000433ca) postcard_pane_g2

0x4f7d,	// (0x000433d6) postcard_pane_g3_ParamLimits

0x4f7d,	// (0x000433d6) postcard_pane_g3

0xb59e,	// (0x000499f7) postcard_pane_g4_ParamLimits

0xb59e,	// (0x000499f7) postcard_pane_g4

0x4f89,	// (0x000433e2) postcard_pane_g5_ParamLimits

0x4f89,	// (0x000433e2) postcard_pane_g5

0x4f95,	// (0x000433ee) postcard_pane_g6_ParamLimits

0x4f95,	// (0x000433ee) postcard_pane_g6

0xb5ac,	// (0x00049a05) postcard_pane_g7_ParamLimits

0xb5ac,	// (0x00049a05) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004d919) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004d919) postcard_pane_g

0x4fa3,	// (0x000433fc) main_mp2_pane_g1_ParamLimits

0x4fa3,	// (0x000433fc) main_mp2_pane_g1

0x4fb1,	// (0x0004340a) main_mp2_pane_g2_ParamLimits

0x4fb1,	// (0x0004340a) main_mp2_pane_g2

0x4fbd,	// (0x00043416) main_mp2_pane_g3_ParamLimits

0x4fbd,	// (0x00043416) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004d928) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004d928) main_mp2_pane_g

0x4fc9,	// (0x00043422) main_mp2_pane_t1_ParamLimits

0x4fc9,	// (0x00043422) main_mp2_pane_t1

0x4fe0,	// (0x00043439) main_mp2_pane_t2_ParamLimits

0x4fe0,	// (0x00043439) main_mp2_pane_t2

0x4ff4,	// (0x0004344d) main_mp2_pane_t3_ParamLimits

0x4ff4,	// (0x0004344d) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004d92f) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004d92f) main_mp2_pane_t

0xb5ba,	// (0x00049a13) pec_content_pane_ParamLimits

0xb5ba,	// (0x00049a13) pec_content_pane

0xac62,	// (0x000490bb) scroll_pane_cp015

0xb5cc,	// (0x00049a25) pec_attribute_pane_ParamLimits

0xb5cc,	// (0x00049a25) pec_attribute_pane

0x5006,	// (0x0004345f) pec_content_pane_g1_ParamLimits

0x5006,	// (0x0004345f) pec_content_pane_g1

0xb5dc,	// (0x00049a35) pec_content_pane_t1_ParamLimits

0xb5dc,	// (0x00049a35) pec_content_pane_t1

0xb5ee,	// (0x00049a47) pec_content_pane_t2_ParamLimits

0xb5ee,	// (0x00049a47) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004d936) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004d936) pec_content_pane_t

0x5012,	// (0x0004346b) list_single_graphic_pane_cp01_ParamLimits

0x5012,	// (0x0004346b) list_single_graphic_pane_cp01

0xa7f6,	// (0x00048c4f) bg_popup_sub_pane_cp04

0xb600,	// (0x00049a59) popup_mup_playback_window_g1

0xb60c,	// (0x00049a65) popup_mup_playback_window_t1

0xb621,	// (0x00049a7a) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004d93b) popup_mup_playback_window_t

0xb658,	// (0x00049ab1) main_image_pane_g1_ParamLimits

0xb658,	// (0x00049ab1) main_image_pane_g1

0xb69b,	// (0x00049af4) scroll_pane_cp018_ParamLimits

0xb69b,	// (0x00049af4) scroll_pane_cp018

0xb6b3,	// (0x00049b0c) scroll_pane_cp016_ParamLimits

0xb6b3,	// (0x00049b0c) scroll_pane_cp016

0x50a0,	// (0x000434f9) smil2_image_pane_ParamLimits

0x50a0,	// (0x000434f9) smil2_image_pane

0x50d6,	// (0x0004352f) smil2_root_pane_ParamLimits

0x50d6,	// (0x0004352f) smil2_root_pane

0x5102,	// (0x0004355b) smil2_text_pane_ParamLimits

0x5102,	// (0x0004355b) smil2_text_pane

0xa59b,	// (0x000489f4) bg_list_pane_cp06

0xb6ef,	// (0x00049b48) grid_radio_pane

0xa59b,	// (0x000489f4) bg_popup_window_pane_cp06

0xb6f9,	// (0x00049b52) main_fmradio_pane_t1

0xb191,	// (0x000495ea) heading_pane_cp04

0xb707,	// (0x00049b60) main_fmradio_pane_t2

0xc6ef,	// (0x0004ab48) popup_cale_lunar_info_window_g1

0xb715,	// (0x00049b6e) main_fmradio_pane_t3

0xc6f7,	// (0x0004ab50) popup_cale_lunar_info_window_g2

0xb725,	// (0x00049b7e) main_fmradio_pane_t4

0x0001,

0xb733,	// (0x00049b8c) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004da16) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004d950) main_fmradio_pane_t

0xb741,	// (0x00049b9a) wait_bar_pane_cp03

0xb749,	// (0x00049ba2) cell_fmradio_pane_ParamLimits

0xb749,	// (0x00049ba2) cell_fmradio_pane

0xb5ac,	// (0x00049a05) cell_fmradio_pane_g1_ParamLimits

0xb5ac,	// (0x00049a05) cell_fmradio_pane_g1

0xa59b,	// (0x000489f4) grid_highlight_pane_cp011

0xb75e,	// (0x00049bb7) poc_content_pane_ParamLimits

0xb75e,	// (0x00049bb7) poc_content_pane

0xb770,	// (0x00049bc9) scroll_pane_cp019

0x5142,	// (0x0004359b) popup_call_poc_act_window_ParamLimits

0x5142,	// (0x0004359b) popup_call_poc_act_window

0x514f,	// (0x000435a8) popup_call_poc_inact_window_ParamLimits

0x514f,	// (0x000435a8) popup_call_poc_inact_window

0xf594,	// (0x0004d9ed) bg_popup_call_poc_act_pane_g

0xc667,	// (0x0004aac0) bg_popup_call_poc_inact_pane_g1

0xc66f,	// (0x0004aac8) bg_popup_call_poc_inact_pane_g2

0xb778,	// (0x00049bd1) popup_call_poc_act_window_g2

0xc677,	// (0x0004aad0) bg_popup_call_poc_inact_pane_g3

0xc67f,	// (0x0004aad8) bg_popup_call_poc_inact_pane_g4

0xc687,	// (0x0004aae0) bg_popup_call_poc_inact_pane_g5

0xb780,	// (0x00049bd9) popup_call_poc_act_window_t1_ParamLimits

0xb780,	// (0x00049bd9) popup_call_poc_act_window_t1

0xb7a8,	// (0x00049c01) popup_call_poc_act_window_t2_ParamLimits

0xb7a8,	// (0x00049c01) popup_call_poc_act_window_t2

0xb7d0,	// (0x00049c29) popup_call_poc_act_window_t3_ParamLimits

0xb7d0,	// (0x00049c29) popup_call_poc_act_window_t3

0xb7f8,	// (0x00049c51) popup_call_poc_act_window_t4_ParamLimits

0xb7f8,	// (0x00049c51) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004d95b) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004d95b) popup_call_poc_act_window_t

0xc68f,	// (0x0004aae8) bg_popup_call_poc_inact_pane_g6

0xc697,	// (0x0004aaf0) bg_popup_call_poc_inact_pane_g7

0xc69f,	// (0x0004aaf8) bg_popup_call_poc_inact_pane_g8

0xb80a,	// (0x00049c63) popup_call_poc_inact_window_g2

0xc6a7,	// (0x0004ab00) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0004d9da) bg_popup_call_poc_inact_pane_g

0xb812,	// (0x00049c6b) popup_call_poc_inact_window_t1_ParamLimits

0xb812,	// (0x00049c6b) popup_call_poc_inact_window_t1

0xb827,	// (0x00049c80) popup_call_poc_inact_window_t2_ParamLimits

0xb827,	// (0x00049c80) popup_call_poc_inact_window_t2

0xb83c,	// (0x00049c95) popup_call_poc_inact_window_t3_ParamLimits

0xb83c,	// (0x00049c95) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004d964) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004d964) popup_call_poc_inact_window_t

0xc873,	// (0x0004accc) context_pane_ParamLimits

0x575e,	// (0x00043bb7) signal_pane_ParamLimits

0xb3ed,	// (0x00049846) main_call2_pane

0xc861,	// (0x0004acba) popup_phob_thumbnail2_window_ParamLimits

0xc861,	// (0x0004acba) popup_phob_thumbnail2_window

0x4e09,	// (0x00043262) aid_hotspot_pointer_arrow_pane

0x4e11,	// (0x0004326a) aid_hotspot_pointer_hand_pane

0x5474,	// (0x000438cd) phob_pre_status_pane_g5

0x301e,	// (0x00041477) cams_zoom_pane_ParamLimits

0x302a,	// (0x00041483) image_vga_pane_ParamLimits

0x3039,	// (0x00041492) main_camera_pane_g1_ParamLimits

0x3047,	// (0x000414a0) main_camera_pane_g2_ParamLimits

0x3053,	// (0x000414ac) main_camera_pane_g3_ParamLimits

0x3061,	// (0x000414ba) main_camera_pane_g4_ParamLimits

0x306f,	// (0x000414c8) main_camera_pane_g5_ParamLimits

0x307d,	// (0x000414d6) main_camera_pane_g6_ParamLimits

0x308b,	// (0x000414e4) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004d663) main_camera_pane_g_ParamLimits

0x3099,	// (0x000414f2) main_camera_pane_t1_ParamLimits

0x30ab,	// (0x00041504) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004d674) main_camera_pane_t_ParamLimits

0xa7f6,	// (0x00048c4f) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7f6,	// (0x00048c4f) bg_popup_preview_window_pane_cp01

0xb851,	// (0x00049caa) popup_phob_thumbnail2_window_g1_ParamLimits

0xb851,	// (0x00049caa) popup_phob_thumbnail2_window_g1

0xa59b,	// (0x000489f4) call2_cli_visual_pane

0x516b,	// (0x000435c4) popup_call2_audio_conf_window_ParamLimits

0x516b,	// (0x000435c4) popup_call2_audio_conf_window

0x5184,	// (0x000435dd) popup_call2_audio_first_window_ParamLimits

0x5184,	// (0x000435dd) popup_call2_audio_first_window

0x5222,	// (0x0004367b) popup_call2_audio_in_window_ParamLimits

0x5222,	// (0x0004367b) popup_call2_audio_in_window

0x5266,	// (0x000436bf) popup_call2_audio_out_window_ParamLimits

0x5266,	// (0x000436bf) popup_call2_audio_out_window

0x52d0,	// (0x00043729) popup_call2_audio_second_window_ParamLimits

0x52d0,	// (0x00043729) popup_call2_audio_second_window

0x532e,	// (0x00043787) popup_call2_audio_wait_window_ParamLimits

0x532e,	// (0x00043787) popup_call2_audio_wait_window

0xa59b,	// (0x000489f4) bg_popup_call2_act_pane_cp03

0xa7d8,	// (0x00048c31) list_conf_pane_cp

0xb85d,	// (0x00049cb6) popup_call2_audio_conf_window_t1

0xb86b,	// (0x00049cc4) list_single_graphic_popup_conf2_pane_ParamLimits

0xb86b,	// (0x00049cc4) list_single_graphic_popup_conf2_pane

0xb200,	// (0x00049659) list_highlight_pane_cp04

0xb87e,	// (0x00049cd7) list_single_graphic_popup_conf2_pane_g1

0xb211,	// (0x0004966a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004d96b) list_single_graphic_popup_conf2_pane_g

0xb888,	// (0x00049ce1) list_single_graphic_popup_conf2_pane_t1

0xb896,	// (0x00049cef) bg_popup_call2_act_pane_cp01_ParamLimits

0xb896,	// (0x00049cef) bg_popup_call2_act_pane_cp01

0xb920,	// (0x00049d79) call_type_pane_cp05_ParamLimits

0xb920,	// (0x00049d79) call_type_pane_cp05

0xb974,	// (0x00049dcd) popup_call2_audio_second_window_g1_ParamLimits

0xb974,	// (0x00049dcd) popup_call2_audio_second_window_g1

0xb9c8,	// (0x00049e21) popup_call2_audio_second_window_g2_ParamLimits

0xb9c8,	// (0x00049e21) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004d970) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004d970) popup_call2_audio_second_window_g

0xba2d,	// (0x00049e86) popup_call2_audio_second_window_t1_ParamLimits

0xba2d,	// (0x00049e86) popup_call2_audio_second_window_t1

0xbaf4,	// (0x00049f4d) popup_call2_audio_second_window_t2_ParamLimits

0xbaf4,	// (0x00049f4d) popup_call2_audio_second_window_t2

0xbb47,	// (0x00049fa0) popup_call2_audio_second_window_t3_ParamLimits

0xbb47,	// (0x00049fa0) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004d977) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004d977) popup_call2_audio_second_window_t

0xa59b,	// (0x000489f4) bg_popup_call2_in_pane_cp02

0xa5a5,	// (0x000489fe) call_type_pane_cp04

0xa5ad,	// (0x00048a06) popup_call2_audio_wait_window_g1

0xa5b5,	// (0x00048a0e) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004d54e) popup_call2_audio_wait_window_g

0xa5bd,	// (0x00048a16) popup_call2_audio_wait_window_t3

0xbc3a,	// (0x0004a093) bg_popup_call2_act_pane_ParamLimits

0xbc3a,	// (0x0004a093) bg_popup_call2_act_pane

0xbcfa,	// (0x0004a153) call_type_pane_cp03_ParamLimits

0xbcfa,	// (0x0004a153) call_type_pane_cp03

0xbd5e,	// (0x0004a1b7) popup_call2_audio_first_window_g1_ParamLimits

0xbd5e,	// (0x0004a1b7) popup_call2_audio_first_window_g1

0xbdce,	// (0x0004a227) popup_call2_audio_first_window_g2_ParamLimits

0xbdce,	// (0x0004a227) popup_call2_audio_first_window_g2

0xb239,	// (0x00049692) popup_call2_audio_first_window_g3_ParamLimits

0xb239,	// (0x00049692) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004d980) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004d980) popup_call2_audio_first_window_g

0xbeac,	// (0x0004a305) popup_call2_audio_first_window_t1_ParamLimits

0xbeac,	// (0x0004a305) popup_call2_audio_first_window_t1

0xbfaf,	// (0x0004a408) popup_call2_audio_first_window_t4_ParamLimits

0xbfaf,	// (0x0004a408) popup_call2_audio_first_window_t4

0xc092,	// (0x0004a4eb) popup_call2_audio_first_window_t5_ParamLimits

0xc092,	// (0x0004a4eb) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004d98b) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004d98b) popup_call2_audio_first_window_t

0xa7ee,	// (0x00048c47) bg_popup_call2_act_pane_g1

0xc701,	// (0x0004ab5a) popup_cale_lunar_info_window_t1

0xc70f,	// (0x0004ab68) popup_cale_lunar_info_window_t2

0xc71d,	// (0x0004ab76) popup_cale_lunar_info_window_t3

0xa59b,	// (0x000489f4) bg_popup_call2_bubble_pane

0xc193,	// (0x0004a5ec) bg_popup_call2_in_pane_cp01_ParamLimits

0xc193,	// (0x0004a5ec) bg_popup_call2_in_pane_cp01

0xa277,	// (0x000486d0) call_type_pane_cp02

0xc1db,	// (0x0004a634) popup_call2_audio_out_window_g1_ParamLimits

0xc1db,	// (0x0004a634) popup_call2_audio_out_window_g1

0xc207,	// (0x0004a660) popup_call2_audio_out_window_g2_ParamLimits

0xc207,	// (0x0004a660) popup_call2_audio_out_window_g2

0xc22f,	// (0x0004a688) popup_call2_audio_out_window_g3_ParamLimits

0xc22f,	// (0x0004a688) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004d994) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004d994) popup_call2_audio_out_window_g

0xc26a,	// (0x0004a6c3) popup_call2_audio_out_window_t1_ParamLimits

0xc26a,	// (0x0004a6c3) popup_call2_audio_out_window_t1

0xc2c9,	// (0x0004a722) popup_call2_audio_out_window_t2_ParamLimits

0xc2c9,	// (0x0004a722) popup_call2_audio_out_window_t2

0xc31d,	// (0x0004a776) popup_call2_audio_out_window_t3_ParamLimits

0xc31d,	// (0x0004a776) popup_call2_audio_out_window_t3

0xc333,	// (0x0004a78c) popup_call2_audio_out_window_t4_ParamLimits

0xc333,	// (0x0004a78c) popup_call2_audio_out_window_t4

0xc349,	// (0x0004a7a2) popup_call2_audio_out_window_t5_ParamLimits

0xc349,	// (0x0004a7a2) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004d99d) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004d99d) popup_call2_audio_out_window_t

0xc3ad,	// (0x0004a806) bg_popup_call2_in_pane_ParamLimits

0xc3ad,	// (0x0004a806) bg_popup_call2_in_pane

0xc409,	// (0x0004a862) popup_call2_audio_in_window_g1_ParamLimits

0xc409,	// (0x0004a862) popup_call2_audio_in_window_g1

0xc441,	// (0x0004a89a) popup_call2_audio_in_window_g2_ParamLimits

0xc441,	// (0x0004a89a) popup_call2_audio_in_window_g2

0xc479,	// (0x0004a8d2) popup_call2_audio_in_window_g3_ParamLimits

0xc479,	// (0x0004a8d2) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004d9aa) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004d9aa) popup_call2_audio_in_window_g

0xc4d1,	// (0x0004a92a) popup_call2_audio_in_window_t1_ParamLimits

0xc4d1,	// (0x0004a92a) popup_call2_audio_in_window_t1

0xc551,	// (0x0004a9aa) popup_call2_audio_in_window_t2_ParamLimits

0xc551,	// (0x0004a9aa) popup_call2_audio_in_window_t2

0xc5d1,	// (0x0004aa2a) popup_call2_audio_in_window_t3_ParamLimits

0xc5d1,	// (0x0004aa2a) popup_call2_audio_in_window_t3

0xc5eb,	// (0x0004aa44) popup_call2_audio_in_window_t4_ParamLimits

0xc5eb,	// (0x0004aa44) popup_call2_audio_in_window_t4

0xc5fd,	// (0x0004aa56) popup_call2_audio_in_window_t5_ParamLimits

0xc5fd,	// (0x0004aa56) popup_call2_audio_in_window_t5

0xc612,	// (0x0004aa6b) popup_call2_audio_in_window_t6_ParamLimits

0xc612,	// (0x0004aa6b) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004d9b3) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004d9b3) popup_call2_audio_in_window_t

0xa7ee,	// (0x00048c47) bg_popup_call2_in_pane_g1

0xc72b,	// (0x0004ab84) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004da1b) popup_cale_lunar_info_window_t

0xa7f6,	// (0x00048c4f) bg_popup_call2_rect_pane_ParamLimits

0xa7f6,	// (0x00048c4f) bg_popup_call2_rect_pane

0xa59b,	// (0x000489f4) call2_cli_visual_graphic_pane

0xa59b,	// (0x000489f4) call2_cli_visual_text_pane

0x57f6,	// (0x00043c4f) smil_status_volume_pane_g3

0x0002,

0xa910,	// (0x00048d69) call2_cli_visual_graphic_pane_g1

0xa910,	// (0x00048d69) call2_cli_visual_graphic_pane_g2

0xa910,	// (0x00048d69) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004d9c0) call2_cli_visual_graphic_pane_g

0xc627,	// (0x0004aa80) bg_popup_call2_rect_pane_g1

0xa9dc,	// (0x00048e35) bg_popup_call2_rect_pane_g2

0xc62f,	// (0x0004aa88) bg_popup_call2_rect_pane_g3

0xc637,	// (0x0004aa90) bg_popup_call2_rect_pane_g4

0xc63f,	// (0x0004aa98) bg_popup_call2_rect_pane_g5

0xc647,	// (0x0004aaa0) bg_popup_call2_rect_pane_g6

0xc64f,	// (0x0004aaa8) bg_popup_call2_rect_pane_g7

0xc657,	// (0x0004aab0) bg_popup_call2_rect_pane_g8

0xc65f,	// (0x0004aab8) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004d9c7) bg_popup_call2_rect_pane_g

0xc667,	// (0x0004aac0) bg_popup_call2_bubble_pane_g1

0xc66f,	// (0x0004aac8) bg_popup_call2_bubble_pane_g2

0xc677,	// (0x0004aad0) bg_popup_call2_bubble_pane_g3

0xc67f,	// (0x0004aad8) bg_popup_call2_bubble_pane_g4

0xc687,	// (0x0004aae0) bg_popup_call2_bubble_pane_g5

0xc68f,	// (0x0004aae8) bg_popup_call2_bubble_pane_g6

0xc697,	// (0x0004aaf0) bg_popup_call2_bubble_pane_g7

0xc69f,	// (0x0004aaf8) bg_popup_call2_bubble_pane_g8

0xc6a7,	// (0x0004ab00) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004d9da) bg_popup_call2_bubble_pane_g

0x276c,	// (0x00040bc5) aid_cale_week_size_cell_pane

0x30bf,	// (0x00041518) aid_cams_cif_uncrop_pane_ParamLimits

0x30bf,	// (0x00041518) aid_cams_cif_uncrop_pane

0x321c,	// (0x00041675) aid_cams_size_cell_ParamLimits

0x321c,	// (0x00041675) aid_cams_size_cell

0x3228,	// (0x00041681) grid_cams_pane_ParamLimits

0x3236,	// (0x0004168f) linegrid_cams_pane_ParamLimits

0x3307,	// (0x00041760) call_video_pane_t1

0x3324,	// (0x0004177d) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004d6c7) call_video_pane_t

0x37f0,	// (0x00041c49) aid_cale_month_size_cell_pane_ParamLimits

0x37f0,	// (0x00041c49) aid_cale_month_size_cell_pane

0xf60b,	// (0x0004da64) smil_status_volume_pane_g

0x5803,	// (0x00043c5c) volume_smil_pane_ParamLimits

0xa141,	// (0x0004859a) aid_popup2_width_pane

0x266e,	// (0x00040ac7) cell_qdial_pane_g4_ParamLimits

0x266e,	// (0x00040ac7) cell_qdial_pane_g4

0x4726,	// (0x00042b7f) aid_blid_cardinal_pane_ParamLimits

0x4736,	// (0x00042b8f) aid_blid_destination_pane_ParamLimits

0x4736,	// (0x00042b8f) aid_blid_destination_pane

0xa7f6,	// (0x00048c4f) bg_popup_call_poc_act_pane_ParamLimits

0xa7f6,	// (0x00048c4f) bg_popup_call_poc_act_pane

0xa7f6,	// (0x00048c4f) bg_popup_call_poc_inact_pane_ParamLimits

0xa7f6,	// (0x00048c4f) bg_popup_call_poc_inact_pane

0xc6af,	// (0x0004ab08) bg_popup_call_poc_act_pane_g1

0xc6b7,	// (0x0004ab10) bg_popup_call_poc_act_pane_g2

0xc6bf,	// (0x0004ab18) bg_popup_call_poc_act_pane_g3

0xc67f,	// (0x0004aad8) bg_popup_call_poc_act_pane_g4

0xc687,	// (0x0004aae0) bg_popup_call_poc_act_pane_g5

0xc6c7,	// (0x0004ab20) bg_popup_call_poc_act_pane_g6

0xc697,	// (0x0004aaf0) bg_popup_call_poc_act_pane_g7

0xc6cf,	// (0x0004ab28) bg_popup_call_poc_act_pane_g8

0xa59b,	// (0x000489f4) main_usb_pane

0xc838,	// (0x0004ac91) popup_cale_lunar_info_window

0x363c,	// (0x00041a95) im_reading_pane_t1_ParamLimits

0xabba,	// (0x00049013) list_im_pane_ParamLimits

0xabcb,	// (0x00049024) scroll_pane_cp07_ParamLimits

0xa59b,	// (0x000489f4) grid_highlight_pane_cp012

0xa7f6,	// (0x00048c4f) mup_scale_pane_ParamLimits

0xb239,	// (0x00049692) main_usb_pane_g1_ParamLimits

0xb239,	// (0x00049692) main_usb_pane_g1

0x5397,	// (0x000437f0) main_usb_pane_g2_ParamLimits

0x5397,	// (0x000437f0) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0004da04) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0004da04) main_usb_pane_g

0x53a3,	// (0x000437fc) main_usb_pane_t1_ParamLimits

0x53a3,	// (0x000437fc) main_usb_pane_t1

0x53b5,	// (0x0004380e) main_usb_pane_t2_ParamLimits

0x53b5,	// (0x0004380e) main_usb_pane_t2

0x53c7,	// (0x00043820) main_usb_pane_t3_ParamLimits

0x53c7,	// (0x00043820) main_usb_pane_t3

0x53d9,	// (0x00043832) main_usb_pane_t4_ParamLimits

0x53d9,	// (0x00043832) main_usb_pane_t4

0x53eb,	// (0x00043844) main_usb_pane_t5_ParamLimits

0x53eb,	// (0x00043844) main_usb_pane_t5

0x53fd,	// (0x00043856) main_usb_pane_t6_ParamLimits

0x53fd,	// (0x00043856) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004da09) main_usb_pane_t_ParamLimits

0x46c5,	// (0x00042b1e) aid_text_placing

0x46d0,	// (0x00042b29) main_location2_pane_t1_ParamLimits

0x46e6,	// (0x00042b3f) main_location2_pane_t2_ParamLimits

0x46fc,	// (0x00042b55) main_location2_pane_t3_ParamLimits

0x4712,	// (0x00042b6b) main_location2_pane_t4_ParamLimits

0x4712,	// (0x00042b6b) main_location2_pane_t4

0xf3cf,	// (0x0004d828) main_location2_pane_t_ParamLimits

0xa832,	// (0x00048c8b) find_pinb_pane_g2_ParamLimits

0xa832,	// (0x00048c8b) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0004d574) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0004d574) find_pinb_pane_g

0xa83e,	// (0x00048c97) find_pinb_pane_t1_ParamLimits

0xa850,	// (0x00048ca9) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0004d579) find_pinb_pane_t_ParamLimits

0xa59b,	// (0x000489f4) main_call3_pane

0x3d6f,	// (0x000421c8) cale_month_day_heading_pane_t1_ParamLimits

0x3df1,	// (0x0004224a) cale_month_day_heading_pane_t2_ParamLimits

0x3e7e,	// (0x000422d7) cale_month_day_heading_pane_t3_ParamLimits

0x3f0b,	// (0x00042364) cale_month_day_heading_pane_t4_ParamLimits

0x3f98,	// (0x000423f1) cale_month_day_heading_pane_t5_ParamLimits

0x402d,	// (0x00042486) cale_month_day_heading_pane_t6_ParamLimits

0x40ca,	// (0x00042523) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004d6ff) cale_month_day_heading_pane_t_ParamLimits

0x4376,	// (0x000427cf) smil_status_volume_pane

0x4f55,	// (0x000433ae) postcard_address_pane_ParamLimits

0x4f55,	// (0x000433ae) postcard_address_pane

0x4f63,	// (0x000433bc) postcard_message_pane_ParamLimits

0x4f63,	// (0x000433bc) postcard_message_pane

0x536d,	// (0x000437c6) call2_cli_visual_pane_t1_ParamLimits

0x536d,	// (0x000437c6) call2_cli_visual_pane_t1

0x5962,	// (0x00043dbb) postcard_message_pane_t1_ParamLimits

0x5962,	// (0x00043dbb) postcard_message_pane_t1

0x594b,	// (0x00043da4) postcard_address_pane_t1_ParamLimits

0x594b,	// (0x00043da4) postcard_address_pane_t1

0x593c,	// (0x00043d95) popup_call3_audio_in_window_ParamLimits

0x593c,	// (0x00043d95) popup_call3_audio_in_window

0x581a,	// (0x00043c73) bg_popup_call3_in_pane_ParamLimits

0x581a,	// (0x00043c73) bg_popup_call3_in_pane

0x5882,	// (0x00043cdb) popup_call3_audio_in_window_g1_ParamLimits

0x5882,	// (0x00043cdb) popup_call3_audio_in_window_g1

0x589a,	// (0x00043cf3) popup_call3_audio_in_window_g2_ParamLimits

0x589a,	// (0x00043cf3) popup_call3_audio_in_window_g2

0x58b2,	// (0x00043d0b) popup_call3_audio_in_window_g3_ParamLimits

0x58b2,	// (0x00043d0b) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004da6b) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004da6b) popup_call3_audio_in_window_g

0x58da,	// (0x00043d33) popup_call3_audio_in_window_t1_ParamLimits

0x58da,	// (0x00043d33) popup_call3_audio_in_window_t1

0x5902,	// (0x00043d5b) popup_call3_audio_in_window_t2_ParamLimits

0x5902,	// (0x00043d5b) popup_call3_audio_in_window_t2

0x592a,	// (0x00043d83) popup_call3_audio_in_window_t3_ParamLimits

0x592a,	// (0x00043d83) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0004da74) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0004da74) popup_call3_audio_in_window_t

0xb3ed,	// (0x00049846) bg_popup_call3_rect_pane

0xc627,	// (0x0004aa80) bg_popup_call3_rect_pane_g1

0xa9dc,	// (0x00048e35) bg_popup_call3_rect_pane_g2

0xc62f,	// (0x0004aa88) bg_popup_call3_rect_pane_g3

0xc637,	// (0x0004aa90) bg_popup_call3_rect_pane_g4

0xc63f,	// (0x0004aa98) bg_popup_call3_rect_pane_g5

0xc647,	// (0x0004aaa0) bg_popup_call3_rect_pane_g6

0xc64f,	// (0x0004aaa8) bg_popup_call3_rect_pane_g7

0x4b6c,	// (0x00042fc5) mup_visualizer_osc_pane

0xb4ac,	// (0x00049905) mup_visualizer_spec_pane

0x583a,	// (0x00043c93) call3_video_qcif_pane_ParamLimits

0x583a,	// (0x00043c93) call3_video_qcif_pane

0x584c,	// (0x00043ca5) call3_video_qcif_uncrop_pane_ParamLimits

0x584c,	// (0x00043ca5) call3_video_qcif_uncrop_pane

0x585c,	// (0x00043cb5) call3_video_subqcif_pane_ParamLimits

0x585c,	// (0x00043cb5) call3_video_subqcif_pane

0x5870,	// (0x00043cc9) call3_video_subqcif_uncrop_pane_ParamLimits

0x5870,	// (0x00043cc9) call3_video_subqcif_uncrop_pane

0x58ca,	// (0x00043d23) popup_call3_audio_in_window_g4_ParamLimits

0x58ca,	// (0x00043d23) popup_call3_audio_in_window_g4

0x57e5,	// (0x00043c3e) mup_spec_half_pane

0x57ee,	// (0x00043c47) mup_spec_half_pane_cp

0xc8d3,	// (0x0004ad2c) mup_osc_middle_pane

0xc8dc,	// (0x0004ad35) mup_visualizer_osc_pane_g1

0x57c5,	// (0x00043c1e) mup_spec_bar_pane_ParamLimits

0x57c5,	// (0x00043c1e) mup_spec_bar_pane

0xc8c0,	// (0x0004ad19) mup_spec_bar_pane_g1

0xc8ca,	// (0x0004ad23) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004da5f) mup_spec_bar_pane_g

0x276c,	// (0x00040bc5) aid_cale_week_size_cell_pane_ParamLimits

0x2786,	// (0x00040bdf) bg_cale_heading_pane_ParamLimits

0xaa10,	// (0x00048e69) bg_cale_pane_cp01_ParamLimits

0x27af,	// (0x00040c08) cale_week_corner_pane_ParamLimits

0x27ce,	// (0x00040c27) cale_week_day_heading_pane_ParamLimits

0x27fc,	// (0x00040c55) cale_week_scroll_pane_g1_ParamLimits

0x2820,	// (0x00040c79) cale_week_scroll_pane_g2_ParamLimits

0x2838,	// (0x00040c91) cale_week_scroll_pane_g3_ParamLimits

0x2850,	// (0x00040ca9) cale_week_scroll_pane_g4_ParamLimits

0x2868,	// (0x00040cc1) cale_week_scroll_pane_g5_ParamLimits

0x2880,	// (0x00040cd9) cale_week_scroll_pane_g6_ParamLimits

0x28a0,	// (0x00040cf9) cale_week_scroll_pane_g7_ParamLimits

0x28c0,	// (0x00040d19) cale_week_scroll_pane_g8_ParamLimits

0x28e0,	// (0x00040d39) cale_week_scroll_pane_g9_ParamLimits

0x28fd,	// (0x00040d56) cale_week_scroll_pane_g10_ParamLimits

0x291a,	// (0x00040d73) cale_week_scroll_pane_g11_ParamLimits

0x2937,	// (0x00040d90) cale_week_scroll_pane_g12_ParamLimits

0x2954,	// (0x00040dad) cale_week_scroll_pane_g13_ParamLimits

0x2979,	// (0x00040dd2) cale_week_scroll_pane_g14_ParamLimits

0x29a2,	// (0x00040dfb) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0004d605) cale_week_scroll_pane_g_ParamLimits

0x29eb,	// (0x00040e44) cale_week_time_pane_ParamLimits

0x2a0b,	// (0x00040e64) grid_cale_week_pane_ParamLimits

0xaa2e,	// (0x00048e87) listscroll_cale_week_pane_t1

0xaa40,	// (0x00048e99) scroll_pane_cp08_ParamLimits

0x385d,	// (0x00041cb6) cale_month_corner_pane_ParamLimits

0xadeb,	// (0x00049244) cale_month_pane_t1

0x3d01,	// (0x0004215a) cale_month_week_pane_ParamLimits

0xb239,	// (0x00049692) popup_call_status_window_g1_ParamLimits

0x44ce,	// (0x00042927) popup_call_status_window_g2_ParamLimits

0x44da,	// (0x00042933) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004d7af) popup_call_status_window_g_ParamLimits

0xb181,	// (0x000495da) aid_call2_pane

0x0da9,	// (0x0003f202) msg_header_pane_g1

0x4f55,	// (0x000433ae) postcard_address2_pane_ParamLimits

0x4f55,	// (0x000433ae) postcard_address2_pane

0x4f63,	// (0x000433bc) postcard_message2_pane_ParamLimits

0x4f63,	// (0x000433bc) postcard_message2_pane

0x576c,	// (0x00043bc5) message2_row_pane_ParamLimits

0x576c,	// (0x00043bc5) message2_row_pane

0x5786,	// (0x00043bdf) address2_row_pane_ParamLimits

0x5786,	// (0x00043bdf) address2_row_pane

0xc88e,	// (0x0004ace7) postcard_message2_row_pane_g1

0xc896,	// (0x0004acef) postcard_message2_row_pane_t1

0xc88e,	// (0x0004ace7) address2_row_pane_g1

0xc896,	// (0x0004acef) address2_row_pane_t1

0x2f73,	// (0x000413cc) aid_size_cell_vorec

0xa59b,	// (0x000489f4) main_rss_pane

0x5799,	// (0x00043bf2) rss_list_single_pane_ParamLimits

0x5799,	// (0x00043bf2) rss_list_single_pane

0xc8a4,	// (0x0004acfd) rss_list_single_pane_t1

0xc8b2,	// (0x0004ad0b) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004da5a) rss_list_single_pane_t

0xa59b,	// (0x000489f4) main_camera2_pane

0xa59b,	// (0x000489f4) main_video2_pane

0x59c6,	// (0x00043e1f) cams_zoom_pane_cp2_ParamLimits

0x59c6,	// (0x00043e1f) cams_zoom_pane_cp2

0x59d2,	// (0x00043e2b) image2_vga_pane_ParamLimits

0x59d2,	// (0x00043e2b) image2_vga_pane

0x59e1,	// (0x00043e3a) main_camera2_pane_g1_ParamLimits

0x59e1,	// (0x00043e3a) main_camera2_pane_g1

0x59ed,	// (0x00043e46) main_camera2_pane_g2_ParamLimits

0x59ed,	// (0x00043e46) main_camera2_pane_g2

0x59f9,	// (0x00043e52) main_camera2_pane_g3_ParamLimits

0x59f9,	// (0x00043e52) main_camera2_pane_g3

0x5a05,	// (0x00043e5e) main_camera2_pane_g4_ParamLimits

0x5a05,	// (0x00043e5e) main_camera2_pane_g4

0x5a11,	// (0x00043e6a) main_camera2_pane_g5_ParamLimits

0x5a11,	// (0x00043e6a) main_camera2_pane_g5

0x5a1d,	// (0x00043e76) main_camera2_pane_g6_ParamLimits

0x5a1d,	// (0x00043e76) main_camera2_pane_g6

0x5a29,	// (0x00043e82) main_camera2_pane_g7_ParamLimits

0x5a29,	// (0x00043e82) main_camera2_pane_g7

0x5a35,	// (0x00043e8e) main_camera2_pane_g8_ParamLimits

0x5a35,	// (0x00043e8e) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004da7b) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004da7b) main_camera2_pane_g

0x5a4d,	// (0x00043ea6) main_camera2_pane_t1_ParamLimits

0x5a4d,	// (0x00043ea6) main_camera2_pane_t1

0x5a5f,	// (0x00043eb8) main_camera2_pane_t2_ParamLimits

0x5a5f,	// (0x00043eb8) main_camera2_pane_t2

0x5a71,	// (0x00043eca) main_camera2_pane_t3_ParamLimits

0x5a71,	// (0x00043eca) main_camera2_pane_t3

0x5a83,	// (0x00043edc) main_camera2_pane_t4_ParamLimits

0x5a83,	// (0x00043edc) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0004da8e) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0004da8e) main_camera2_pane_t

0x5ae0,	// (0x00043f39) cams_zoom_pane_cp4_ParamLimits

0x5ae0,	// (0x00043f39) cams_zoom_pane_cp4

0x5af0,	// (0x00043f49) image2_cif_pane_ParamLimits

0x5af0,	// (0x00043f49) image2_cif_pane

0x5b05,	// (0x00043f5e) image2_subqcif_pane_ParamLimits

0x5b05,	// (0x00043f5e) image2_subqcif_pane

0x5b14,	// (0x00043f6d) main_video2_pane_g1_ParamLimits

0x5b14,	// (0x00043f6d) main_video2_pane_g1

0x5b26,	// (0x00043f7f) main_video2_pane_g2_ParamLimits

0x5b26,	// (0x00043f7f) main_video2_pane_g2

0x5b36,	// (0x00043f8f) main_video2_pane_g3_ParamLimits

0x5b36,	// (0x00043f8f) main_video2_pane_g3

0x5b46,	// (0x00043f9f) main_video2_pane_g4_ParamLimits

0x5b46,	// (0x00043f9f) main_video2_pane_g4

0x5b56,	// (0x00043faf) main_video2_pane_g5_ParamLimits

0x5b56,	// (0x00043faf) main_video2_pane_g5

0x5b66,	// (0x00043fbf) main_video2_pane_g6_ParamLimits

0x5b66,	// (0x00043fbf) main_video2_pane_g6

0x0005,

0xf644,	// (0x0004da9d) main_video2_pane_g_ParamLimits

0xf644,	// (0x0004da9d) main_video2_pane_g

0x5b78,	// (0x00043fd1) main_video2_pane_t1_ParamLimits

0x5b78,	// (0x00043fd1) main_video2_pane_t1

0x5b92,	// (0x00043feb) main_video2_pane_t2_ParamLimits

0x5b92,	// (0x00043feb) main_video2_pane_t2

0x5bb8,	// (0x00044011) main_video2_pane_t3_ParamLimits

0x5bb8,	// (0x00044011) main_video2_pane_t3

0x0002,

0xf651,	// (0x0004daaa) main_video2_pane_t_ParamLimits

0xf651,	// (0x0004daaa) main_video2_pane_t

0x54b4,	// (0x0004390d) call_muted_g2

0x0001,

0xf5f3,	// (0x0004da4c) call_muted_g

0xa59b,	// (0x000489f4) main_mup2_pane

0xc913,	// (0x0004ad6c) main_mup2_pane_g1_ParamLimits

0xc913,	// (0x0004ad6c) main_mup2_pane_g1

0x5bde,	// (0x00044037) main_mup2_pane_g2_ParamLimits

0x5bde,	// (0x00044037) main_mup2_pane_g2

0x5e70,	// (0x000442c9) main_mup_pane_g13_cp1

0x5e78,	// (0x000442d1) mup_volume_pane_cp1

0x5c00,	// (0x00044059) main_mup2_pane_g4_ParamLimits

0x5c00,	// (0x00044059) main_mup2_pane_g4

0x5c15,	// (0x0004406e) main_mup2_pane_g5_ParamLimits

0x5c15,	// (0x0004406e) main_mup2_pane_g5

0x5c2a,	// (0x00044083) main_mup2_pane_g6_ParamLimits

0x5c2a,	// (0x00044083) main_mup2_pane_g6

0x5c3f,	// (0x00044098) main_mup2_pane_g7_ParamLimits

0x5c3f,	// (0x00044098) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0004dab1) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0004dab1) main_mup2_pane_g

0x5c5b,	// (0x000440b4) main_mup2_pane_t1_ParamLimits

0x5c5b,	// (0x000440b4) main_mup2_pane_t1

0x5c72,	// (0x000440cb) main_mup2_pane_t2_ParamLimits

0x5c72,	// (0x000440cb) main_mup2_pane_t2

0x5c89,	// (0x000440e2) main_mup2_pane_t3_ParamLimits

0x5c89,	// (0x000440e2) main_mup2_pane_t3

0x5ca0,	// (0x000440f9) main_mup2_pane_t4_ParamLimits

0x5ca0,	// (0x000440f9) main_mup2_pane_t4

0x5cba,	// (0x00044113) main_mup2_pane_t5_ParamLimits

0x5cba,	// (0x00044113) main_mup2_pane_t5

0x5cd4,	// (0x0004412d) main_mup2_pane_t6_ParamLimits

0x5cd4,	// (0x0004412d) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0004dac0) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0004dac0) main_mup2_pane_t

0x5d0c,	// (0x00044165) mup2_visualizer_pane_ParamLimits

0x5d0c,	// (0x00044165) mup2_visualizer_pane

0x5d42,	// (0x0004419b) mup_progress_pane_cp_ParamLimits

0x5d42,	// (0x0004419b) mup_progress_pane_cp

0x5e5b,	// (0x000442b4) mup_volume_pane_cp_ParamLimits

0x5e5b,	// (0x000442b4) mup_volume_pane_cp

0x5d5b,	// (0x000441b4) mup2_visualizer_pane_g1_ParamLimits

0x5d5b,	// (0x000441b4) mup2_visualizer_pane_g1

0xc91f,	// (0x0004ad78) mup2_visualizer_pane_g2_ParamLimits

0xc91f,	// (0x0004ad78) mup2_visualizer_pane_g2

0x5d70,	// (0x000441c9) mup2_visualizer_pane_g3_ParamLimits

0x5d70,	// (0x000441c9) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0004dacd) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0004dacd) mup2_visualizer_pane_g

0xb6e7,	// (0x00049b40) aid_size_cell_fmradio

0x55ca,	// (0x00043a23) aid_height_parent_landcape

0xac49,	// (0x000490a2) wml_content_pane_cp

0xac51,	// (0x000490aa) wml_tabs_pane

0xac5a,	// (0x000490b3) popup_wml_miniature_window

0xac62,	// (0x000490bb) scroll_pane_cp021

0xac76,	// (0x000490cf) wml_content_pane_comp8

0xa59b,	// (0x000489f4) bg_popup_sub_pane_cp05

0xc93d,	// (0x0004ad96) popup_wml_miniature_window_g1

0xc945,	// (0x0004ad9e) wml_miniature_view_pane

0x5d7e,	// (0x000441d7) aid_size_wml_view

0x5d86,	// (0x000441df) wml_miniature_view_pane_g1

0x5d8f,	// (0x000441e8) wml_miniature_view_pane_g2

0x5d98,	// (0x000441f1) wml_miniature_view_pane_g3

0x5da0,	// (0x000441f9) wml_miniature_view_pane_g4

0x5da8,	// (0x00044201) wml_miniature_view_pane_g5

0x5db0,	// (0x00044209) wml_miniature_view_pane_g6

0x5db8,	// (0x00044211) wml_miniature_view_pane_g7

0x5dc0,	// (0x00044219) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0004dad4) wml_miniature_view_pane_g

0xc913,	// (0x0004ad6c) background_graphic_ParamLimits

0xc913,	// (0x0004ad6c) background_graphic

0xc94d,	// (0x0004ada6) wml_tabs_2_pane

0xc956,	// (0x0004adaf) wml_tabs_3_pane_ParamLimits

0xc956,	// (0x0004adaf) wml_tabs_3_pane

0xc968,	// (0x0004adc1) wml_tabs_4_pane_ParamLimits

0xc968,	// (0x0004adc1) wml_tabs_4_pane

0xc97e,	// (0x0004add7) wml_tabs_5_pane_ParamLimits

0xc97e,	// (0x0004add7) wml_tabs_5_pane

0xc998,	// (0x0004adf1) wml_tabs_pane_g2_ParamLimits

0xc998,	// (0x0004adf1) wml_tabs_pane_g2

0xc9ac,	// (0x0004ae05) wml_tabs_pane_g3_ParamLimits

0xc9ac,	// (0x0004ae05) wml_tabs_pane_g3

0x5dc8,	// (0x00044221) wml_tabs_2_active_pane_ParamLimits

0x5dc8,	// (0x00044221) wml_tabs_2_active_pane

0x5dda,	// (0x00044233) wml_tabs_2_passive_pane_ParamLimits

0x5dda,	// (0x00044233) wml_tabs_2_passive_pane

0x5dec,	// (0x00044245) wml_tabs_3_active_pane_cp_ParamLimits

0x5dec,	// (0x00044245) wml_tabs_3_active_pane_cp

0x5dff,	// (0x00044258) wml_tabs_3_passive_pane_ParamLimits

0x5dff,	// (0x00044258) wml_tabs_3_passive_pane

0x5e10,	// (0x00044269) wml_tabs_3_passive_pane_cp_ParamLimits

0x5e10,	// (0x00044269) wml_tabs_3_passive_pane_cp

0x5e25,	// (0x0004427e) tabs_4_active_pane

0x5e2d,	// (0x00044286) tabs_4_passive_pane

0x5e35,	// (0x0004428e) tabs_4_passive_pane_cp

0x5e3d,	// (0x00044296) tabs_4_passive_pane_cp2

0x538f,	// (0x000437e8) aid_height_text

0x4b35,	// (0x00042f8e) mup_volume_cont_pane_ParamLimits

0x4b35,	// (0x00042f8e) mup_volume_cont_pane

0x22c4,	// (0x0004071d) aid_size_cell_pinb

0x22ce,	// (0x00040727) aid_size_list_pinb

0x5d2b,	// (0x00044184) mup2_volume_cont_pane_ParamLimits

0x5d2b,	// (0x00044184) mup2_volume_cont_pane

0x5e47,	// (0x000442a0) mup2_volume_cont_pane_g1_ParamLimits

0x5e47,	// (0x000442a0) mup2_volume_cont_pane_g1

0x1f3e,	// (0x00040397) aid_size_cell_touch_ParamLimits

0x1f3e,	// (0x00040397) aid_size_cell_touch

0x21ae,	// (0x00040607) touch_pane_ParamLimits

0x21ae,	// (0x00040607) touch_pane

0xa12f,	// (0x00048588) main_rss2_pane

0xc9c9,	// (0x0004ae22) listscroll_rss2_pane

0xc9d2,	// (0x0004ae2b) rss2_navigation_pane

0xc9da,	// (0x0004ae33) list_rss2_pane

0xb2b3,	// (0x0004970c) scroll_pane_cp22

0xc9e2,	// (0x0004ae3b) rss2_navigation_pane_g1

0xc9eb,	// (0x0004ae44) rss2_navigation_pane_g2

0xc9f3,	// (0x0004ae4c) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0004dae5) rss2_navigation_pane_g

0xc9fb,	// (0x0004ae54) rss2_navigation_pane_t1

0x5e80,	// (0x000442d9) rss2_list_single_pane_ParamLimits

0x5e80,	// (0x000442d9) rss2_list_single_pane

0xca09,	// (0x0004ae62) rss2_list_single_pane_t2

0xca17,	// (0x0004ae70) rss2_list_single_pane_t3_ParamLimits

0xca17,	// (0x0004ae70) rss2_list_single_pane_t3

0xca34,	// (0x0004ae8d) rss2_list_single_pane_t4

0x4360,	// (0x000427b9) smil_status_pane_g1

0xa986,	// (0x00048ddf) main_image2_pane_ParamLimits

0xa986,	// (0x00048ddf) main_image2_pane

0x5a41,	// (0x00043e9a) main_camera2_pane_g9_ParamLimits

0x5a41,	// (0x00043e9a) main_camera2_pane_g9

0x5a95,	// (0x00043eee) main_camera2_pane_t5_ParamLimits

0x5a95,	// (0x00043eee) main_camera2_pane_t5

0x5aa7,	// (0x00043f00) main_camera2_pane_t6_ParamLimits

0x5aa7,	// (0x00043f00) main_camera2_pane_t6

0x5ea3,	// (0x000442fc) main_image2_pane_g1_ParamLimits

0x5ea3,	// (0x000442fc) main_image2_pane_g1

0x512c,	// (0x00043585) smil2_video_pane_ParamLimits

0x512c,	// (0x00043585) smil2_video_pane

0x0b6d,	// (0x0003efc6) aid_zoom_text_primary_cp

0xa17e,	// (0x000485d7) popup_preview_fixed_window

0xabb2,	// (0x0004900b) im_reading_pane_g1

0x598b,	// (0x00043de4) cams2_bc_adjust_pane_cp_ParamLimits

0x598b,	// (0x00043de4) cams2_bc_adjust_pane_cp

0x5ad2,	// (0x00043f2b) cams2_bc_adjust_pane_ParamLimits

0x5ad2,	// (0x00043f2b) cams2_bc_adjust_pane

0x5eaf,	// (0x00044308) cams2_bc_adjust_pane_g1

0x5eb7,	// (0x00044310) cams2_slider_pane

0x5ec0,	// (0x00044319) cams2_slider_pane_g1

0x5ec9,	// (0x00044322) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0004daec) cams2_slider_pane_g

0x23c9,	// (0x00040822) calc_display_pane_ParamLimits

0x23e7,	// (0x00040840) calc_paper_pane_ParamLimits

0x2403,	// (0x0004085c) grid_calc_pane_ParamLimits

0x4538,	// (0x00042991) popup_clock_digital_window_t1_ParamLimits

0xb684,	// (0x00049add) main_image_pane_t1

0x23af,	// (0x00040808) aid_size_cell_calc_ParamLimits

0x23af,	// (0x00040808) aid_size_cell_calc

0x55fc,	// (0x00043a55) popup_blid_sat_info2_window_ParamLimits

0x55fc,	// (0x00043a55) popup_blid_sat_info2_window

0xca4a,	// (0x0004aea3) aid_size_cell_blid

0xca52,	// (0x0004aeab) bg_popup_window_pane_cp07

0xca75,	// (0x0004aece) grid_popup_blid_pane

0xca7f,	// (0x0004aed8) heading_pane_cp05_ParamLimits

0xca7f,	// (0x0004aed8) heading_pane_cp05

0xcb49,	// (0x0004afa2) cell_popup_blid_pane_ParamLimits

0xcb49,	// (0x0004afa2) cell_popup_blid_pane

0xcb73,	// (0x0004afcc) cell_popup_blid_pane_g1

0xcb8f,	// (0x0004afe8) cell_popup_blid_pane_t1

0x5cf1,	// (0x0004414a) mup2_indicator_pane_ParamLimits

0x5cf1,	// (0x0004414a) mup2_indicator_pane

0xb3ed,	// (0x00049846) mup2_visualizer_osc_pane

0xc92b,	// (0x0004ad84) mup2_visualizer_spec_pane_ParamLimits

0xc92b,	// (0x0004ad84) mup2_visualizer_spec_pane

0x5ee3,	// (0x0004433c) mup2_spec_half_pane

0x5eec,	// (0x00044345) mup2_spec_half_pane_cp

0x5ef6,	// (0x0004434f) mup2_spec_bar_pane_ParamLimits

0x5ef6,	// (0x0004434f) mup2_spec_bar_pane

0xc8c0,	// (0x0004ad19) mup2_spec_bar_pane_g1

0xc8ca,	// (0x0004ad23) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004da5f) mup2_spec_bar_pane_g

0x5f15,	// (0x0004436e) mup2_osc_middle_pane

0xc8dc,	// (0x0004ad35) mup2_visualizer_osc_pane_g1

0xa1a8,	// (0x00048601) popup_number_entry_window_t1_ParamLimits

0xa1bb,	// (0x00048614) popup_number_entry_window_t2_ParamLimits

0xa1cd,	// (0x00048626) popup_number_entry_window_t3_ParamLimits

0x2205,	// (0x0004065e) popup_number_entry_window_t5_ParamLimits

0x2205,	// (0x0004065e) popup_number_entry_window_t5

0xf0c6,	// (0x0004d51f) popup_number_entry_window_t_ParamLimits

0xa1df,	// (0x00048638) text_title_cp2_ParamLimits

0x4e19,	// (0x00043272) aid_hotspot_pointer_text2_pane

0x4eb3,	// (0x0004330c) main_viewer_pane_g9_ParamLimits

0x4eb3,	// (0x0004330c) main_viewer_pane_g9

0xadeb,	// (0x00049244) cale_month_pane_t1_ParamLimits

0xae11,	// (0x0004926a) bg_cale_pane_ParamLimits

0xae29,	// (0x00049282) list_cale_pane_ParamLimits

0xae3a,	// (0x00049293) listscroll_cale_day_pane_t1

0xae4c,	// (0x000492a5) scroll_pane_cp09_ParamLimits

0x4b74,	// (0x00042fcd) main_mup_eq_pane_t1_ParamLimits

0x4b74,	// (0x00042fcd) main_mup_eq_pane_t1

0x4b90,	// (0x00042fe9) main_mup_eq_pane_t2_ParamLimits

0x4b90,	// (0x00042fe9) main_mup_eq_pane_t2

0x4bac,	// (0x00043005) main_mup_eq_pane_t3_ParamLimits

0x4bac,	// (0x00043005) main_mup_eq_pane_t3

0x4bc6,	// (0x0004301f) main_mup_eq_pane_t4_ParamLimits

0x4bc6,	// (0x0004301f) main_mup_eq_pane_t4

0x4be0,	// (0x00043039) main_mup_eq_pane_t5_ParamLimits

0x4be0,	// (0x00043039) main_mup_eq_pane_t5

0x4bfa,	// (0x00043053) main_mup_eq_pane_t6_ParamLimits

0x4bfa,	// (0x00043053) main_mup_eq_pane_t6

0x4c10,	// (0x00043069) main_mup_eq_pane_t7_ParamLimits

0x4c10,	// (0x00043069) main_mup_eq_pane_t7

0x4c26,	// (0x0004307f) main_mup_eq_pane_t8_ParamLimits

0x4c26,	// (0x0004307f) main_mup_eq_pane_t8

0x4c3c,	// (0x00043095) main_mup_eq_pane_t9_ParamLimits

0x4c3c,	// (0x00043095) main_mup_eq_pane_t9

0x4c58,	// (0x000430b1) main_mup_eq_pane_t10_ParamLimits

0x4c58,	// (0x000430b1) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004d8ae) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004d8ae) main_mup_eq_pane_t

0x4d1d,	// (0x00043176) mup_equalizer_pane_cp5_ParamLimits

0x4d35,	// (0x0004318e) mup_equalizer_pane_cp6_ParamLimits

0x4d4d,	// (0x000431a6) mup_equalizer_pane_cp7_ParamLimits

0xa12f,	// (0x00048588) main_gallery_pane

0xc8e5,	// (0x0004ad3e) smil2_volume_pane

0xc8ed,	// (0x0004ad46) smil_status_volume_pane_g1_ParamLimits

0xc900,	// (0x0004ad59) smil_status_volume_pane_g2_ParamLimits

0x57f6,	// (0x00043c4f) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0004da64) smil_status_volume_pane_g_ParamLimits

0xca52,	// (0x0004aeab) bg_popup_window_pane_cp07_ParamLimits

0xca60,	// (0x0004aeb9) blid_firmament_pane

0x5f1e,	// (0x00044377) aid_size_cell_gallery_ParamLimits

0x5f1e,	// (0x00044377) aid_size_cell_gallery

0x5f2c,	// (0x00044385) grid_gallery_pane_ParamLimits

0x5f2c,	// (0x00044385) grid_gallery_pane

0x5f3c,	// (0x00044395) cell_gallery_pane_ParamLimits

0x5f3c,	// (0x00044395) cell_gallery_pane

0xcb9d,	// (0x0004aff6) bg_cell_gallery_focus_pane_ParamLimits

0xcb9d,	// (0x0004aff6) bg_cell_gallery_focus_pane

0xcbaf,	// (0x0004b008) cell_gallery_pane_g1_ParamLimits

0xcbaf,	// (0x0004b008) cell_gallery_pane_g1

0x5f82,	// (0x000443db) cell_gallery_pane_g2_ParamLimits

0x5f82,	// (0x000443db) cell_gallery_pane_g2

0x5f8f,	// (0x000443e8) cell_gallery_pane_g3_ParamLimits

0x5f8f,	// (0x000443e8) cell_gallery_pane_g3

0xcbbb,	// (0x0004b014) cell_gallery_pane_g4_ParamLimits

0xcbbb,	// (0x0004b014) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0004db12) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0004db12) cell_gallery_pane_g

0xcbc7,	// (0x0004b020) bg_cell_gallery_focus_pane_g1

0xcbcf,	// (0x0004b028) bg_cell_gallery_focus_pane_g2

0xcbd7,	// (0x0004b030) bg_cell_gallery_focus_pane_g3

0xcbdf,	// (0x0004b038) bg_cell_gallery_focus_pane_g4

0xcbe7,	// (0x0004b040) bg_cell_gallery_focus_pane_g5

0xcbef,	// (0x0004b048) bg_cell_gallery_focus_pane_g6

0xcbf7,	// (0x0004b050) bg_cell_gallery_focus_pane_g7

0xcbff,	// (0x0004b058) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004db1b) bg_cell_gallery_focus_pane_g

0xcc07,	// (0x0004b060) aid_firma_cardinal

0xcc1b,	// (0x0004b074) blid_firmament_pane_t1

0xcc32,	// (0x0004b08b) blid_firmament_pane_t2

0xcc49,	// (0x0004b0a2) blid_firmament_pane_t3

0xcc60,	// (0x0004b0b9) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0004db2c) blid_firmament_pane_t

0xcc77,	// (0x0004b0d0) blid_sat_info_pane

0xcc87,	// (0x0004b0e0) blid_sat_info_pane_g1

0xcc87,	// (0x0004b0e0) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0004db35) blid_sat_info_pane_g

0xcc91,	// (0x0004b0ea) blid_sat_info_pane_t1

0xcc9f,	// (0x0004b0f8) smil2_volume_content_pane

0xcca8,	// (0x0004b101) smil2_volume_pane_g1

0xccb0,	// (0x0004b109) smil2_volume_content_pane_g1

0xccb9,	// (0x0004b112) smil2_volume_content_pane_g2

0xccc2,	// (0x0004b11b) smil2_volume_content_pane_g3

0xcccb,	// (0x0004b124) smil2_volume_content_pane_g4

0xccd4,	// (0x0004b12d) smil2_volume_content_pane_g5

0xccdd,	// (0x0004b136) smil2_volume_content_pane_g6

0xcce6,	// (0x0004b13f) smil2_volume_content_pane_g7

0xccef,	// (0x0004b148) smil2_volume_content_pane_g8

0xccf8,	// (0x0004b151) smil2_volume_content_pane_g9

0xcd01,	// (0x0004b15a) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004db3a) smil2_volume_content_pane_g

0x2ace,	// (0x00040f27) cale_week_day_heading_pane_t1_ParamLimits

0x2b16,	// (0x00040f6f) cale_week_day_heading_pane_t2_ParamLimits

0x2b63,	// (0x00040fbc) cale_week_day_heading_pane_t3_ParamLimits

0x2bb0,	// (0x00041009) cale_week_day_heading_pane_t4_ParamLimits

0x2bfd,	// (0x00041056) cale_week_day_heading_pane_t5_ParamLimits

0x2c4a,	// (0x000410a3) cale_week_day_heading_pane_t6_ParamLimits

0x2c97,	// (0x000410f0) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0004d626) cale_week_day_heading_pane_t_ParamLimits

0xaa62,	// (0x00048ebb) bg_cale_side_pane_ParamLimits

0x2cdf,	// (0x00041138) cale_week_time_pane_t1_ParamLimits

0x2d23,	// (0x0004117c) cale_week_time_pane_t2_ParamLimits

0x2d67,	// (0x000411c0) cale_week_time_pane_t3_ParamLimits

0x2dab,	// (0x00041204) cale_week_time_pane_t4_ParamLimits

0x2def,	// (0x00041248) cale_week_time_pane_t5_ParamLimits

0x2e33,	// (0x0004128c) cale_week_time_pane_t6_ParamLimits

0x2e77,	// (0x000412d0) cale_week_time_pane_t7_ParamLimits

0x2ec3,	// (0x0004131c) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0004d635) cale_week_time_pane_t_ParamLimits

0x2f11,	// (0x0004136a) cell_cale_week_pane_g2_ParamLimits

0xaa62,	// (0x00048ebb) bg_cale_side_pane_cp01_ParamLimits

0x4167,	// (0x000425c0) cale_month_week_pane_t1_ParamLimits

0x4180,	// (0x000425d9) cale_month_week_pane_t2_ParamLimits

0x4199,	// (0x000425f2) cale_month_week_pane_t3_ParamLimits

0x41b2,	// (0x0004260b) cale_month_week_pane_t4_ParamLimits

0x41cb,	// (0x00042624) cale_month_week_pane_t5_ParamLimits

0x41e6,	// (0x0004263f) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004d70e) cale_month_week_pane_t_ParamLimits

0x4329,	// (0x00042782) cell_cale_month_pane_g1_ParamLimits

0xa12f,	// (0x00048588) main_cale_event_viewer_pane

0xa12f,	// (0x00048588) listscroll_cale_event_viewer_pane

0xcd0a,	// (0x0004b163) list_cale_ev_pane

0xcd12,	// (0x0004b16b) scroll_pane_cp023

0x5f9c,	// (0x000443f5) field_cale_ev_pane_ParamLimits

0x5f9c,	// (0x000443f5) field_cale_ev_pane

0xcd1e,	// (0x0004b177) field_cale_ev_content_pane_ParamLimits

0xcd1e,	// (0x0004b177) field_cale_ev_content_pane

0xcd2a,	// (0x0004b183) field_cale_ev_pane_g1_ParamLimits

0xcd2a,	// (0x0004b183) field_cale_ev_pane_g1

0xcd36,	// (0x0004b18f) field_cale_ev_pane_g2_ParamLimits

0xcd36,	// (0x0004b18f) field_cale_ev_pane_g2

0xcd4e,	// (0x0004b1a7) field_cale_ev_pane_g3_ParamLimits

0xcd4e,	// (0x0004b1a7) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0004db4f) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0004db4f) field_cale_ev_pane_g

0xcd66,	// (0x0004b1bf) field_cale_ev_pane_t1_ParamLimits

0xcd66,	// (0x0004b1bf) field_cale_ev_pane_t1

0x5fc0,	// (0x00044419) field_cale_ev_content_pane_t1_ParamLimits

0x5fc0,	// (0x00044419) field_cale_ev_content_pane_t1

0xb558,	// (0x000499b1) bg_button_pane_cp01

0x2750,	// (0x00040ba9) listscroll_cale_week_pane_ParamLimits

0x2762,	// (0x00040bbb) popup_toolbar_window_cp01

0xaa2e,	// (0x00048e87) listscroll_cale_week_pane_t1_ParamLimits

0x2750,	// (0x00040ba9) listscroll_cale_day_pane_ParamLimits

0x2762,	// (0x00040bbb) popup_toolbar_window_cp02

0xae3a,	// (0x00049293) listscroll_cale_day_pane_t1_ParamLimits

0x2750,	// (0x00040ba9) main_cale_month_pane_ParamLimits

0x56e0,	// (0x00043b39) popup_toolbar_window_cp03_ParamLimits

0x56e0,	// (0x00043b39) popup_toolbar_window_cp03

0x503c,	// (0x00043495) main_image_pane_g2_ParamLimits

0x503c,	// (0x00043495) main_image_pane_g2

0x5048,	// (0x000434a1) main_image_pane_g3_ParamLimits

0x5048,	// (0x000434a1) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004d940) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004d940) main_image_pane_g

0xb684,	// (0x00049add) main_image_pane_t1_ParamLimits

0x5054,	// (0x000434ad) main_image_pane_t2_ParamLimits

0x5054,	// (0x000434ad) main_image_pane_t2

0x5066,	// (0x000434bf) main_image_pane_t3_ParamLimits

0x5066,	// (0x000434bf) main_image_pane_t3

0x5078,	// (0x000434d1) main_image_pane_t4_ParamLimits

0x5078,	// (0x000434d1) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004d947) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004d947) main_image_pane_t

0x508a,	// (0x000434e3) popup_image_details_window_cp01

0x5094,	// (0x000434ed) popup_toobar_trans_pane_cp01_ParamLimits

0x5094,	// (0x000434ed) popup_toobar_trans_pane_cp01

0x5651,	// (0x00043aaa) popup_image_details_window_ParamLimits

0x5651,	// (0x00043aaa) popup_image_details_window

0xc844,	// (0x0004ac9d) popup_image_focus_window

0x597d,	// (0x00043dd6) camera2_autofocus_pane_ParamLimits

0x597d,	// (0x00043dd6) camera2_autofocus_pane

0xa12f,	// (0x00048588) bg_popup_sub_pane_cp06

0xcd7d,	// (0x0004b1d6) popup_image_focus_window_g1

0xcd85,	// (0x0004b1de) popup_image_focus_window_g2

0xcd8d,	// (0x0004b1e6) popup_image_focus_window_g3

0xcd95,	// (0x0004b1ee) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004db56) popup_image_focus_window_g

0xcd9d,	// (0x0004b1f6) popup_image_focus_window_t1

0xcdab,	// (0x0004b204) popup_image_focus_window_t2

0xcdbb,	// (0x0004b214) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0004db5f) popup_image_focus_window_t

0xcdc9,	// (0x0004b222) camera2_autofocus_pane_g1

0xa986,	// (0x00048ddf) bg_tb_trans_pane_cp01

0xcdd7,	// (0x0004b230) popup_image_details_window_g1

0xcdea,	// (0x0004b243) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0004db71) popup_image_details_window_g

0xce13,	// (0x0004b26c) popup_image_details_window_t1

0xce25,	// (0x0004b27e) popup_image_details_window_t2

0xce3e,	// (0x0004b297) popup_image_details_window_t3

0xce52,	// (0x0004b2ab) popup_image_details_window_t4

0xce6d,	// (0x0004b2c6) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004db78) popup_image_details_window_t

0xa8a7,	// (0x00048d00) bg_calc_paper_pane_ParamLimits

0xa12f,	// (0x00048588) grid_highlight_pane_cp013

0x2500,	// (0x00040959) list_calc_pane_ParamLimits

0x2512,	// (0x0004096b) scroll_pane_cp024

0xa8bb,	// (0x00048d14) bg_calc_display_pane_ParamLimits

0x251a,	// (0x00040973) calc_display_pane_t1_ParamLimits

0x252f,	// (0x00040988) calc_display_pane_t2_ParamLimits

0x2544,	// (0x0004099d) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0004d5a6) calc_display_pane_t_ParamLimits

0x2618,	// (0x00040a71) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0004d5c3) cell_calc_pane_g

0x2621,	// (0x00040a7a) cell_calc_pane_t1

0xa91a,	// (0x00048d73) grid_highlight_pane_cp02_ParamLimits

0xa930,	// (0x00048d89) toolbar_button_pane_cp01_ParamLimits

0xa930,	// (0x00048d89) toolbar_button_pane_cp01

0xb6c9,	// (0x00049b22) temp_image_control_pane_ParamLimits

0xb6c9,	// (0x00049b22) temp_image_control_pane

0xa986,	// (0x00048ddf) main_mp3_pane

0xce87,	// (0x0004b2e0) temp_image_control_pane_g1_ParamLimits

0xce87,	// (0x0004b2e0) temp_image_control_pane_g1

0xce95,	// (0x0004b2ee) temp_image_control_pane_g2_ParamLimits

0xce95,	// (0x0004b2ee) temp_image_control_pane_g2

0xcea7,	// (0x0004b300) temp_image_control_pane_g3_ParamLimits

0xcea7,	// (0x0004b300) temp_image_control_pane_g3

0x600b,	// (0x00044464) temp_image_control_pane_g4_ParamLimits

0x600b,	// (0x00044464) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0004db83) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0004db83) temp_image_control_pane_g

0xce87,	// (0x0004b2e0) main_mp3_pane_g1

0x601c,	// (0x00044475) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0004db8c) main_mp3_pane_g

0xceea,	// (0x0004b343) main_mp3_pane_t1

0xaabd,	// (0x00048f16) main_camera_pane_g8_ParamLimits

0xaabd,	// (0x00048f16) main_camera_pane_g8

0x31d2,	// (0x0004162b) main_video_pane_g7_ParamLimits

0x31d2,	// (0x0004162b) main_video_pane_g7

0x5ac0,	// (0x00043f19) main_camera2_pane_t7_ParamLimits

0x5ac0,	// (0x00043f19) main_camera2_pane_t7

0xac09,	// (0x00049062) scroll_pane_cp025_ParamLimits

0xac09,	// (0x00049062) scroll_pane_cp025

0xac1d,	// (0x00049076) scroll_pane_cp026_ParamLimits

0xac1d,	// (0x00049076) scroll_pane_cp026

0xac2c,	// (0x00049085) wml_content_pane_ParamLimits

0xa12f,	// (0x00048588) main_touch_calib_pane

0x60c0,	// (0x00044519) main_touch_calib_pane_g1

0x60cc,	// (0x00044525) main_touch_calib_pane_g2

0x60d8,	// (0x00044531) main_touch_calib_pane_g3

0x60e4,	// (0x0004453d) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0004dbaa) main_touch_calib_pane_g

0x60f0,	// (0x00044549) main_touch_calib_pane_t1

0x6107,	// (0x00044560) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0004dbb3) main_touch_calib_pane_t

0xb32e,	// (0x00049787) mup_progress_pane_cp02

0xb34d,	// (0x000497a6) navi_pane_g1

0xb3af,	// (0x00049808) navi_pane_mp_t3

0xa986,	// (0x00048ddf) main_mp3_pane_ParamLimits

0x5722,	// (0x00043b7b) navi_pane_ParamLimits

0xce87,	// (0x0004b2e0) main_mp3_pane_g1_ParamLimits

0x601c,	// (0x00044475) main_mp3_pane_g2_ParamLimits

0x6028,	// (0x00044481) main_mp3_pane_g3_ParamLimits

0x6028,	// (0x00044481) main_mp3_pane_g3

0x6034,	// (0x0004448d) main_mp3_pane_g4_ParamLimits

0x6034,	// (0x0004448d) main_mp3_pane_g4

0xceb7,	// (0x0004b310) main_mp3_pane_g5_ParamLimits

0xceb7,	// (0x0004b310) main_mp3_pane_g5

0xcec5,	// (0x0004b31e) main_mp3_pane_g6_ParamLimits

0xcec5,	// (0x0004b31e) main_mp3_pane_g6

0xced2,	// (0x0004b32b) main_mp3_pane_g7_ParamLimits

0xced2,	// (0x0004b32b) main_mp3_pane_g7

0xcede,	// (0x0004b337) main_mp3_pane_g8_ParamLimits

0xcede,	// (0x0004b337) main_mp3_pane_g8

0xf733,	// (0x0004db8c) main_mp3_pane_g_ParamLimits

0x6040,	// (0x00044499) main_mp3_pane_t2

0x6050,	// (0x000444a9) main_mp3_pane_t3

0xcef8,	// (0x0004b351) main_mp3_pane_t4

0xcf06,	// (0x0004b35f) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0004db9d) main_mp3_pane_t

0xcf14,	// (0x0004b36d) mup_progress_pane_cp01

0x0b6d,	// (0x0003efc6) aid_zoom_text_secondary2

0xcd0a,	// (0x0004b163) list_cale_ev2_pane

0xcd12,	// (0x0004b16b) scroll_pane_cp023_ParamLimits

0xd3d5,	// (0x0004b82e) field_cale_ev2_pane_ParamLimits

0xd3d5,	// (0x0004b82e) field_cale_ev2_pane

0x0e1e,	// (0x0003f277) field_cale_ev2_pane_g1_ParamLimits

0x0e1e,	// (0x0003f277) field_cale_ev2_pane_g1

0x0e2a,	// (0x0003f283) field_cale_ev2_pane_g2_ParamLimits

0x0e2a,	// (0x0003f283) field_cale_ev2_pane_g2

0x0e42,	// (0x0003f29b) field_cale_ev2_pane_g3_ParamLimits

0x0e42,	// (0x0003f29b) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0004dbbe) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0004dbbe) field_cale_ev2_pane_g

0x0e66,	// (0x0003f2bf) field_cale_ev2_pane_t1_ParamLimits

0x0e66,	// (0x0003f2bf) field_cale_ev2_pane_t1

0x0e7d,	// (0x0003f2d6) field_cale_ev2_pane_t2_ParamLimits

0x0e7d,	// (0x0003f2d6) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0004dbc7) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0004dbc7) field_cale_ev2_pane_t

0x4f1b,	// (0x00043374) main_postcard_pane_g5_ParamLimits

0x4f1b,	// (0x00043374) main_postcard_pane_g5

0x4f29,	// (0x00043382) main_postcard_pane_g6_ParamLimits

0x4f29,	// (0x00043382) main_postcard_pane_g6

0x3010,	// (0x00041469) camera2_autofocus_pane_cp_ParamLimits

0x3010,	// (0x00041469) camera2_autofocus_pane_cp

0xa986,	// (0x00048ddf) main_mup3_pane

0x6182,	// (0x000445db) main_mup3_pane_g1_ParamLimits

0x6182,	// (0x000445db) main_mup3_pane_g1

0x61a3,	// (0x000445fc) main_mup3_pane_g2_ParamLimits

0x61a3,	// (0x000445fc) main_mup3_pane_g2

0x621f,	// (0x00044678) main_mup3_pane_g3_ParamLimits

0x621f,	// (0x00044678) main_mup3_pane_g3

0x6264,	// (0x000446bd) main_mup3_pane_g4_ParamLimits

0x6264,	// (0x000446bd) main_mup3_pane_g4

0x62a7,	// (0x00044700) main_mup3_pane_g5_ParamLimits

0x62a7,	// (0x00044700) main_mup3_pane_g5

0x62ec,	// (0x00044745) main_mup3_pane_g6_ParamLimits

0x62ec,	// (0x00044745) main_mup3_pane_g6

0xcf1c,	// (0x0004b375) main_mup3_pane_g7_ParamLimits

0xcf1c,	// (0x0004b375) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0004dbd7) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0004dbd7) main_mup3_pane_g

0x6362,	// (0x000447bb) main_mup3_pane_t1_ParamLimits

0x6362,	// (0x000447bb) main_mup3_pane_t1

0x63cb,	// (0x00044824) main_mup3_pane_t2_ParamLimits

0x63cb,	// (0x00044824) main_mup3_pane_t2

0x6494,	// (0x000448ed) main_mup3_pane_t4_ParamLimits

0x6494,	// (0x000448ed) main_mup3_pane_t4

0x64e8,	// (0x00044941) main_mup3_pane_t5_ParamLimits

0x64e8,	// (0x00044941) main_mup3_pane_t5

0x6596,	// (0x000449ef) main_mup3_pane_t6_ParamLimits

0x6596,	// (0x000449ef) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0004dbe8) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0004dbe8) main_mup3_pane_t

0x6642,	// (0x00044a9b) mup3_progress_pane_ParamLimits

0x6642,	// (0x00044a9b) mup3_progress_pane

0x66bc,	// (0x00044b15) popup_mup3_control_window_ParamLimits

0x66bc,	// (0x00044b15) popup_mup3_control_window

0xcf2a,	// (0x0004b383) popup_mup3_text_window

0x66d9,	// (0x00044b32) mup3_progress_pane_t1

0x66f8,	// (0x00044b51) mup3_progress_pane_t2

0xcf32,	// (0x0004b38b) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0004dbf5) mup3_progress_pane_t

0xcf4f,	// (0x0004b3a8) mup_progress_pane_cp03

0xa12f,	// (0x00048588) bg_tb_trans_pane_cp04

0x6717,	// (0x00044b70) mup3_volume_pane

0x671f,	// (0x00044b78) popup_mup3_control_window_g1

0xd3f0,	// (0x0004b849) mup3_volume_pane_g1

0xd3f9,	// (0x0004b852) mup3_volume_pane_g2

0xd402,	// (0x0004b85b) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0004dbfc) mup3_volume_pane_g

0xa12f,	// (0x00048588) bg_tb_trans_pane_cp03

0xcf5f,	// (0x0004b3b8) popup_mup3_text_window_g1

0xcf67,	// (0x0004b3c0) popup_mup3_text_window_t1

0xa903,	// (0x00048d5c) list_calc_item_pane_g1_ParamLimits

0xc9c0,	// (0x0004ae19) mup_volume_pane_cp_g1

0x6120,	// (0x00044579) main_touch_calib_pane_t3

0x6136,	// (0x0004458f) main_touch_calib_pane_t4

0x614c,	// (0x000445a5) main_touch_calib_pane_t5

0xa139,	// (0x00048592) aid_cell_size_toolbar2

0xa141,	// (0x0004859a) aid_popup3_width_pane

0x0b65,	// (0x0003efbe) aid_zoom_text_msg_primary

0x2fdb,	// (0x00041434) vorec_t7

0xa8c7,	// (0x00048d20) bg_calc_paper_pane_g1_ParamLimits

0xa8d3,	// (0x00048d2c) bg_calc_paper_pane_g2_ParamLimits

0xa8df,	// (0x00048d38) bg_calc_paper_pane_g3_ParamLimits

0xa8eb,	// (0x00048d44) bg_calc_paper_pane_g4_ParamLimits

0xa8f7,	// (0x00048d50) bg_calc_paper_pane_g5_ParamLimits

0x2585,	// (0x000409de) bg_calc_paper_pane_g6_ParamLimits

0x2596,	// (0x000409ef) bg_calc_paper_pane_g7_ParamLimits

0x25a7,	// (0x00040a00) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0004d5ad) bg_calc_paper_pane_g_ParamLimits

0x25ba,	// (0x00040a13) calc_bg_paper_pane_g9_ParamLimits

0x3101,	// (0x0004155a) image_qvga_pane_ParamLimits

0x3101,	// (0x0004155a) image_qvga_pane

0xa7f6,	// (0x00048c4f) bg_popup_sub_pane_cp04_ParamLimits

0xb600,	// (0x00049a59) popup_mup_playback_window_g1_ParamLimits

0xb60c,	// (0x00049a65) popup_mup_playback_window_t1_ParamLimits

0xb621,	// (0x00049a7a) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004d93b) popup_mup_playback_window_t_ParamLimits

0x5bef,	// (0x00044048) main_mup2_pane_g3_ParamLimits

0x5bef,	// (0x00044048) main_mup2_pane_g3

0x33ad,	// (0x00041806) popup_toolbar_window_cp04

0xba1c,	// (0x00049e75) popup_call2_audio_second_window_g3_ParamLimits

0xba1c,	// (0x00049e75) popup_call2_audio_second_window_g3

0xbe32,	// (0x0004a28b) popup_call2_audio_first_window_g4_ParamLimits

0xbe32,	// (0x0004a28b) popup_call2_audio_first_window_g4

0xc4b1,	// (0x0004a90a) popup_call2_audio_in_window_g4_ParamLimits

0xc4b1,	// (0x0004a90a) popup_call2_audio_in_window_g4

0x502f,	// (0x00043488) aid_area_sk_bg_cut_ParamLimits

0x502f,	// (0x00043488) aid_area_sk_bg_cut

0xb636,	// (0x00049a8f) aid_area_sk_bg_cut_2_ParamLimits

0xb636,	// (0x00049a8f) aid_area_sk_bg_cut_2

0x5f72,	// (0x000443cb) aid_placing_details_win

0x5f7a,	// (0x000443d3) aid_placing_details_win_2

0xcdc9,	// (0x0004b222) camera2_autofocus_pane_g1_ParamLimits

0x2144,	// (0x0004059d) popup_fixed_preview_cale_window_ParamLimits

0x2144,	// (0x0004059d) popup_fixed_preview_cale_window

0xb3fe,	// (0x00049857) navi_slider_pane_g3

0xb407,	// (0x00049860) navi_slider_pane_g4

0xb410,	// (0x00049869) navi_slider_pane_g5

0xb3fe,	// (0x00049857) navi_slider_pane_g6

0x48e2,	// (0x00042d3b) navi_slider_pane_g7

0xb525,	// (0x0004997e) mup_scale_pane_g3

0xb52e,	// (0x00049987) mup_scale_pane_g4

0xb537,	// (0x00049990) mup_scale_pane_g5

0x4d65,	// (0x000431be) mup_scale_pane_g6

0x4d6e,	// (0x000431c7) mup_scale_pane_g7

0xb3fe,	// (0x00049857) cams2_slider_pane_g3

0xca42,	// (0x0004ae9b) cams2_slider_pane_g4

0x5ed2,	// (0x0004432b) cams2_slider_pane_g5

0xb3fe,	// (0x00049857) cams2_slider_pane_g6

0x5eda,	// (0x00044333) cams2_slider_pane_g7

0xcc87,	// (0x0004b0e0) camera2_autofocus_pane_cp_g1

0xc816,	// (0x0004ac6f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc816,	// (0x0004ac6f) bg_popup_preview_window_pane_cp02

0xcf75,	// (0x0004b3ce) list_fp_cale_pane_ParamLimits

0xcf75,	// (0x0004b3ce) list_fp_cale_pane

0xcf81,	// (0x0004b3da) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf81,	// (0x0004b3da) popup_fixed_preview_cale_window_t1

0x6728,	// (0x00044b81) popup_fixed_preview_cale_window_t2_ParamLimits

0x6728,	// (0x00044b81) popup_fixed_preview_cale_window_t2

0x673d,	// (0x00044b96) popup_fixed_preview_cale_window_t3_ParamLimits

0x673d,	// (0x00044b96) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0004dc03) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0004dc03) popup_fixed_preview_cale_window_t

0x6752,	// (0x00044bab) list_single_fp_cale_pane_ParamLimits

0x6752,	// (0x00044bab) list_single_fp_cale_pane

0xcf9f,	// (0x0004b3f8) list_single_fp_cale_pane_g1_ParamLimits

0xcf9f,	// (0x0004b3f8) list_single_fp_cale_pane_g1

0xcfab,	// (0x0004b404) list_single_fp_cale_pane_g2_ParamLimits

0xcfab,	// (0x0004b404) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004dc0a) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004dc0a) list_single_fp_cale_pane_g

0xcfc4,	// (0x0004b41d) list_single_fp_cale_pane_t1_ParamLimits

0xcfc4,	// (0x0004b41d) list_single_fp_cale_pane_t1

0xcfd6,	// (0x0004b42f) list_single_fp_cale_pane_t2_ParamLimits

0xcfd6,	// (0x0004b42f) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0004dc11) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0004dc11) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa12f,	// (0x00048588) main_dialer_pane

0x6762,	// (0x00044bbb) aid_cell_size_keypad

0x676c,	// (0x00044bc5) dialer_ne_pane

0x6776,	// (0x00044bcf) grid_dialer_command_1_pane

0x677e,	// (0x00044bd7) grid_dialer_command_2_pane

0x6786,	// (0x00044bdf) grid_dialer_keypad_pane

0x679a,	// (0x00044bf3) bg_popup_call_pane_cp06_ParamLimits

0x679a,	// (0x00044bf3) bg_popup_call_pane_cp06

0x67a6,	// (0x00044bff) dialer_ne_clear_pane_ParamLimits

0x67a6,	// (0x00044bff) dialer_ne_clear_pane

0xd009,	// (0x0004b462) dialer_ne_pane_g1

0xd011,	// (0x0004b46a) dialer_ne_pane_t1_ParamLimits

0xd011,	// (0x0004b46a) dialer_ne_pane_t1

0x67b2,	// (0x00044c0b) dialer_ne_pane_t2_ParamLimits

0x67b2,	// (0x00044c0b) dialer_ne_pane_t2

0x67cf,	// (0x00044c28) dialer_ne_pane_t3_ParamLimits

0x67cf,	// (0x00044c28) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004dc16) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004dc16) dialer_ne_pane_t

0x67f3,	// (0x00044c4c) dialer_ne_pane_t3_copy1_ParamLimits

0x67f3,	// (0x00044c4c) dialer_ne_pane_t3_copy1

0x6817,	// (0x00044c70) cell_dialer_keypad_pane_ParamLimits

0x6817,	// (0x00044c70) cell_dialer_keypad_pane

0x682e,	// (0x00044c87) cell_dialer_command_1_pane_ParamLimits

0x682e,	// (0x00044c87) cell_dialer_command_1_pane

0x6844,	// (0x00044c9d) cell_dialer_command_2_pane_ParamLimits

0x6844,	// (0x00044c9d) cell_dialer_command_2_pane

0xd023,	// (0x0004b47c) bg_button_pane_cp02_ParamLimits

0xd023,	// (0x0004b47c) bg_button_pane_cp02

0x6853,	// (0x00044cac) cell_dialer_keypad_pane_g1_ParamLimits

0x6853,	// (0x00044cac) cell_dialer_keypad_pane_g1

0xd023,	// (0x0004b47c) bg_button_pane_cp03_ParamLimits

0xd023,	// (0x0004b47c) bg_button_pane_cp03

0x6868,	// (0x00044cc1) cell_dialer_command_1_pane_g1_ParamLimits

0x6868,	// (0x00044cc1) cell_dialer_command_1_pane_g1

0xd02f,	// (0x0004b488) bg_button_pane_cp04

0x687c,	// (0x00044cd5) cell_dialer_command_2_pane_g1

0xb3ed,	// (0x00049846) bg_button_pane_cp06

0xd037,	// (0x0004b490) dialer_ne_clear_pane_g1

0x481d,	// (0x00042c76) navi_pane_g2

0x484b,	// (0x00042ca4) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004d83e) navi_pane_g

0x4876,	// (0x00042ccf) navi_pane_mv_g2

0x489d,	// (0x00042cf6) navi_pane_mv_g5

0x48a5,	// (0x00042cfe) navi_pane_mv_t1

0xa8bb,	// (0x00048d14) main_clock2_pane

0x68ba,	// (0x00044d13) main_clock2_list_pane_ParamLimits

0x68ba,	// (0x00044d13) main_clock2_list_pane

0x68e4,	// (0x00044d3d) main_clock2_pane_t1_ParamLimits

0x68e4,	// (0x00044d3d) main_clock2_pane_t1

0x6906,	// (0x00044d5f) main_clock2_pane_t2_ParamLimits

0x6906,	// (0x00044d5f) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004dc22) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004dc22) main_clock2_pane_t

0x6963,	// (0x00044dbc) popup_clock_analogue_window_cp03_ParamLimits

0x6963,	// (0x00044dbc) popup_clock_analogue_window_cp03

0x6983,	// (0x00044ddc) popup_clock_digital_window_cp02_ParamLimits

0x6983,	// (0x00044ddc) popup_clock_digital_window_cp02

0x69f4,	// (0x00044e4d) main_clock2_list_single_pane_ParamLimits

0x69f4,	// (0x00044e4d) main_clock2_list_single_pane

0xb3ed,	// (0x00049846) list_highlight_pane_cp05

0xd073,	// (0x0004b4cc) main_clock2_list_single_pane_t1

0x33ad,	// (0x00041806) popup_toolbar_window_cp04_ParamLimits

0x5fdb,	// (0x00044434) camera2_autofocus_pane_g2_ParamLimits

0x5fdb,	// (0x00044434) camera2_autofocus_pane_g2

0x5fe7,	// (0x00044440) camera2_autofocus_pane_g3_ParamLimits

0x5fe7,	// (0x00044440) camera2_autofocus_pane_g3

0x5ff3,	// (0x0004444c) camera2_autofocus_pane_g4_ParamLimits

0x5ff3,	// (0x0004444c) camera2_autofocus_pane_g4

0x5fff,	// (0x00044458) camera2_autofocus_pane_g5_ParamLimits

0x5fff,	// (0x00044458) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004db66) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004db66) camera2_autofocus_pane_g

0x6162,	// (0x000445bb) camera2_autofocus_pane_cp_g2

0x616a,	// (0x000445c3) camera2_autofocus_pane_cp_g3

0x6172,	// (0x000445cb) camera2_autofocus_pane_cp_g4

0x617a,	// (0x000445d3) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0004dbcc) camera2_autofocus_pane_cp_g

0x6792,	// (0x00044beb) popup_dialer_spcha_window

0xa12f,	// (0x00048588) bg_popup_sub_pane_cp07

0xd081,	// (0x0004b4da) list_spcha_pane

0xd089,	// (0x0004b4e2) list_single_spcha_pane_ParamLimits

0xd089,	// (0x0004b4e2) list_single_spcha_pane

0xa12f,	// (0x00048588) list_highlight_pane_cp06

0xd09a,	// (0x0004b4f3) list_single_spcha_pane_t1

0xc25b,	// (0x0004a6b4) popup_call2_audio_out_window_g4_ParamLimits

0xc25b,	// (0x0004a6b4) popup_call2_audio_out_window_g4

0xa12f,	// (0x00048588) main_imed2_pane

0xc84e,	// (0x0004aca7) popup_imed_adjust2_window

0x565f,	// (0x00043ab8) popup_imed_trans_window_ParamLimits

0x565f,	// (0x00043ab8) popup_imed_trans_window

0xcaab,	// (0x0004af04) popup_blid_sat_info2_window_t1

0xcab9,	// (0x0004af12) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0004dafb) popup_blid_sat_info2_window_t

0x6a9e,	// (0x00044ef7) aid_size_cell_colour_35

0x6ab8,	// (0x00044f11) aid_size_cell_colour_112

0x6acf,	// (0x00044f28) aid_size_cell_effect

0xa986,	// (0x00048ddf) bg_tb_trans_pane_cp02

0xbae8,	// (0x00049f41) heading_imed_pane

0x6ae9,	// (0x00044f42) listscroll_imed_pane

0xd0a8,	// (0x0004b501) heading_imed_pane_g1

0xd0b0,	// (0x0004b509) heading_imed_pane_t1

0xd0be,	// (0x0004b517) grid_imed_colour_35_pane_ParamLimits

0xd0be,	// (0x0004b517) grid_imed_colour_35_pane

0x6af5,	// (0x00044f4e) grid_imed_effect_pane

0xd0da,	// (0x0004b533) list_imed_aspect_pane

0x6b05,	// (0x00044f5e) scroll_pane_cp027_ParamLimits

0x6b05,	// (0x00044f5e) scroll_pane_cp027

0x6b11,	// (0x00044f6a) cell_imed_effect_pane_ParamLimits

0x6b11,	// (0x00044f6a) cell_imed_effect_pane

0xd0e2,	// (0x0004b53b) cell_imed_colour_pane_ParamLimits

0xd0e2,	// (0x0004b53b) cell_imed_colour_pane

0xd12c,	// (0x0004b585) cell_imed_colour_pane_g1_ParamLimits

0xd12c,	// (0x0004b585) cell_imed_colour_pane_g1

0xd13d,	// (0x0004b596) hgihlgiht_grid_pane_cp016_ParamLimits

0xd13d,	// (0x0004b596) hgihlgiht_grid_pane_cp016

0x6b2d,	// (0x00044f86) cell_imed_effect_pane_g1

0x6b35,	// (0x00044f8e) grid_highlight_pane_cp017

0xd14e,	// (0x0004b5a7) list_imed_single_pane_ParamLimits

0xd14e,	// (0x0004b5a7) list_imed_single_pane

0xa12f,	// (0x00048588) list_highlight_pane_cp07

0xd162,	// (0x0004b5bb) list_imed_aspect_pane_comp1_t1

0xc822,	// (0x0004ac7b) bg_tb_trans_pane_cp05

0xd184,	// (0x0004b5dd) popup_imed_adjust2_window_g1

0xd1ab,	// (0x0004b604) popup_imed_adjust2_window_t1

0xd1c3,	// (0x0004b61c) slider_imed_adjust_pane

0xd1d7,	// (0x0004b630) slider_imed_adjust_pane_g1

0xd1e7,	// (0x0004b640) slider_imed_adjust_pane_g2

0xd1f7,	// (0x0004b650) slider_imed_adjust_pane_g3

0xd208,	// (0x0004b661) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004dc3f) slider_imed_adjust_pane_g

0x6b3e,	// (0x00044f97) aid_size_cell_clipart2

0x6b4a,	// (0x00044fa3) grid_imed_clipart_pane

0xd219,	// (0x0004b672) scroll_pane_cp031

0x6b54,	// (0x00044fad) cell_imed_clipart_pane_ParamLimits

0x6b54,	// (0x00044fad) cell_imed_clipart_pane

0x6b72,	// (0x00044fcb) cell_imed_clipart_pane_g1

0xa12f,	// (0x00048588) grid_highlight_pane_cp014

0x68c6,	// (0x00044d1f) main_clock2_pane_g1_ParamLimits

0x68c6,	// (0x00044d1f) main_clock2_pane_g1

0x699f,	// (0x00044df8) aid_call2_pane_cp10

0x69b1,	// (0x00044e0a) aid_call_pane_cp10

0xb322,	// (0x0004977b) popup_clock_analogue_window_cp10_g1

0xb322,	// (0x0004977b) popup_clock_analogue_window_cp10_g2

0x69c3,	// (0x00044e1c) popup_clock_analogue_window_cp10_g3

0x69c3,	// (0x00044e1c) popup_clock_analogue_window_cp10_g4

0xb322,	// (0x0004977b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004dc2d) popup_clock_analogue_window_cp10_g

0x69d5,	// (0x00044e2e) popup_clock_analogue_window_cp10_t1

0x6a06,	// (0x00044e5f) clock_digital_number_pane_cp10_ParamLimits

0x6a06,	// (0x00044e5f) clock_digital_number_pane_cp10

0x6a1e,	// (0x00044e77) clock_digital_number_pane_cp11_ParamLimits

0x6a1e,	// (0x00044e77) clock_digital_number_pane_cp11

0x6a36,	// (0x00044e8f) clock_digital_number_pane_cp12_ParamLimits

0x6a36,	// (0x00044e8f) clock_digital_number_pane_cp12

0x6a4e,	// (0x00044ea7) clock_digital_number_pane_cp13_ParamLimits

0x6a4e,	// (0x00044ea7) clock_digital_number_pane_cp13

0x6a66,	// (0x00044ebf) clock_digital_separator_pane_cp10_ParamLimits

0x6a66,	// (0x00044ebf) clock_digital_separator_pane_cp10

0x6a7e,	// (0x00044ed7) popup_clock_digital_window_cp02_t1_ParamLimits

0x6a7e,	// (0x00044ed7) popup_clock_digital_window_cp02_t1

0xa7ee,	// (0x00048c47) clock_digital_number_pane_cp10_g1

0xa7ee,	// (0x00048c47) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004dc48) clock_digital_number_pane_cp10_g

0xa7ee,	// (0x00048c47) clock_digital_separator_pane_cp10_g1

0xa7ee,	// (0x00048c47) clock_digital_separator_pane_g2_cp10

0xb3bd,	// (0x00049816) navi_pane_vded_g4

0xb3c6,	// (0x0004981f) navi_pane_vded_g5

0xb3cf,	// (0x00049828) navi_pane_vded_t1

0xa12f,	// (0x00048588) main_vded_pane

0x6b7b,	// (0x00044fd4) main_vded_pane_g1

0x6b87,	// (0x00044fe0) main_vded_pane_g2

0x6b91,	// (0x00044fea) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004dc4d) main_vded_pane_g

0x6b9b,	// (0x00044ff4) main_vded_pane_t1

0x6ba9,	// (0x00045002) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004dc54) main_vded_pane_t

0x6bb7,	// (0x00045010) vded_slider_pane

0x6bc1,	// (0x0004501a) vded_video_pane

0xd221,	// (0x0004b67a) vded_video_pane_g1

0x6bcd,	// (0x00045026) vded_video_pane_g2

0xcc87,	// (0x0004b0e0) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004dc59) vded_video_pane_g

0xd22b,	// (0x0004b684) vded_slider_pane_g1

0xc9c0,	// (0x0004ae19) vded_slider_pane_g2

0xd234,	// (0x0004b68d) vded_slider_pane_g3

0xd23d,	// (0x0004b696) vded_slider_pane_g4

0xd246,	// (0x0004b69f) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004dc60) vded_slider_pane_g

0x66b0,	// (0x00044b09) mup3_rocker_pane_ParamLimits

0x66b0,	// (0x00044b09) mup3_rocker_pane

0x6bd6,	// (0x0004502f) mup3_control_keys_pane_g1

0x6bde,	// (0x00045037) mup3_control_keys_pane_g2

0x6be6,	// (0x0004503f) mup3_control_keys_pane_g3

0x6bee,	// (0x00045047) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004dc6b) mup3_control_keys_pane_g

0x2162,	// (0x000405bb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2162,	// (0x000405bb) popup_toolbar2_fixed_window_cp01

0x66cc,	// (0x00044b25) popup_toolbar2_fixed_window_cp02_ParamLimits

0x66cc,	// (0x00044b25) popup_toolbar2_fixed_window_cp02

0xbb9a,	// (0x00049ff3) popup_call2_audio_second_window_t4_ParamLimits

0xbb9a,	// (0x00049ff3) popup_call2_audio_second_window_t4

0xc0c8,	// (0x0004a521) popup_call2_audio_first_window_t6_ParamLimits

0xc0c8,	// (0x0004a521) popup_call2_audio_first_window_t6

0xc35e,	// (0x0004a7b7) popup_call2_audio_out_window_t6_ParamLimits

0xc35e,	// (0x0004a7b7) popup_call2_audio_out_window_t6

0xa12f,	// (0x00048588) main_vitu_pane

0x6bfe,	// (0x00045057) aid_size_cell_itu_ParamLimits

0x6bfe,	// (0x00045057) aid_size_cell_itu

0x2194,	// (0x000405ed) bg_popup_window_pane_cp08_ParamLimits

0x2194,	// (0x000405ed) bg_popup_window_pane_cp08

0x6c0c,	// (0x00045065) field_vitu_entry_pane_ParamLimits

0x6c0c,	// (0x00045065) field_vitu_entry_pane

0x6c1b,	// (0x00045074) grid_vitu_function_pane_ParamLimits

0x6c1b,	// (0x00045074) grid_vitu_function_pane

0x6c2b,	// (0x00045084) grid_vitu_itu_pane_ParamLimits

0x6c2b,	// (0x00045084) grid_vitu_itu_pane

0x6c3b,	// (0x00045094) cell_vitu_itu_pane_ParamLimits

0x6c3b,	// (0x00045094) cell_vitu_itu_pane

0x6c52,	// (0x000450ab) cell_vitu_function_pane_ParamLimits

0x6c52,	// (0x000450ab) cell_vitu_function_pane

0xa986,	// (0x00048ddf) bg_popup_sub_pane_cp08_ParamLimits

0xa986,	// (0x00048ddf) bg_popup_sub_pane_cp08

0x6c66,	// (0x000450bf) field_vitu_entry_pane_t1_ParamLimits

0x6c66,	// (0x000450bf) field_vitu_entry_pane_t1

0xd267,	// (0x0004b6c0) field_vitu_entry_pane_t2_ParamLimits

0xd267,	// (0x0004b6c0) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004dc79) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004dc79) field_vitu_entry_pane_t

0xd284,	// (0x0004b6dd) bg_button_pane_cp05_ParamLimits

0xd284,	// (0x0004b6dd) bg_button_pane_cp05

0x6c80,	// (0x000450d9) cell_vitu_itu_pane_g1

0x6c98,	// (0x000450f1) cell_vitu_itu_pane_t1_ParamLimits

0x6c98,	// (0x000450f1) cell_vitu_itu_pane_t1

0x6caa,	// (0x00045103) cell_vitu_itu_pane_t2_ParamLimits

0x6caa,	// (0x00045103) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004dc7e) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004dc7e) cell_vitu_itu_pane_t

0xd292,	// (0x0004b6eb) bg_button_pane_cp07

0x6ced,	// (0x00045146) cell_vitu_function_pane_g1

0x2427,	// (0x00040880) main_calc_pane_g1

0x1f66,	// (0x000403bf) aid_visual_content_pane

0xa12f,	// (0x00048588) main_vradio_pane

0x6cf6,	// (0x0004514f) main_vradio_pane_g1_ParamLimits

0x6cf6,	// (0x0004514f) main_vradio_pane_g1

0xd29c,	// (0x0004b6f5) main_vradio_pane_g2_ParamLimits

0xd29c,	// (0x0004b6f5) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004dc85) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004dc85) main_vradio_pane_g

0x6d04,	// (0x0004515d) main_vradio_pane_t1_ParamLimits

0x6d04,	// (0x0004515d) main_vradio_pane_t1

0x6d16,	// (0x0004516f) main_vradio_pane_t2_ParamLimits

0x6d16,	// (0x0004516f) main_vradio_pane_t2

0xd2a9,	// (0x0004b702) main_vradio_pane_t3_ParamLimits

0xd2a9,	// (0x0004b702) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004dc8a) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004dc8a) main_vradio_pane_t

0x6d28,	// (0x00045181) vradio_rocker_control_pane_ParamLimits

0x6d28,	// (0x00045181) vradio_rocker_control_pane

0x6d34,	// (0x0004518d) vradio_station_info_pane_ParamLimits

0x6d34,	// (0x0004518d) vradio_station_info_pane

0xd2bd,	// (0x0004b716) vradio_frequency_info_pane_ParamLimits

0xd2bd,	// (0x0004b716) vradio_frequency_info_pane

0xcc87,	// (0x0004b0e0) vradio_station_info_pane_g1

0xd2cc,	// (0x0004b725) vradio_station_info_pane_t1_ParamLimits

0xd2cc,	// (0x0004b725) vradio_station_info_pane_t1

0xd2ee,	// (0x0004b747) vradio_station_info_pane_t2_ParamLimits

0xd2ee,	// (0x0004b747) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004dc91) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004dc91) vradio_station_info_pane_t

0xd300,	// (0x0004b759) vradio_tuning_pane

0xd308,	// (0x0004b761) vradio_rocker_control_pane_g1

0xd310,	// (0x0004b769) vradio_rocker_control_pane_g2

0xd318,	// (0x0004b771) vradio_rocker_control_pane_g3

0xd320,	// (0x0004b779) vradio_rocker_control_pane_g4

0xd328,	// (0x0004b781) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004dc96) vradio_rocker_control_pane_g

0x6d41,	// (0x0004519a) vradio_frequency_info_pane_g1

0xd330,	// (0x0004b789) vradio_frequency_info_pane_t1_ParamLimits

0xd330,	// (0x0004b789) vradio_frequency_info_pane_t1

0x6d4b,	// (0x000451a4) vradio_tuning_pane_g1

0x6d56,	// (0x000451af) vradio_tuning_pane_t1

0xa155,	// (0x000485ae) area_side_right_pane_ParamLimits

0xa155,	// (0x000485ae) area_side_right_pane

0xc7dd,	// (0x0004ac36) status_small_pane_g1

0xc7e5,	// (0x0004ac3e) status_small_pane_g2

0xc7ee,	// (0x0004ac47) status_small_pane_g3

0xc7f7,	// (0x0004ac50) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0004da51) status_small_pane_g

0xc800,	// (0x0004ac59) status_small_pane_t1

0xa12f,	// (0x00048588) main_video3_pane

0xd344,	// (0x0004b79d) cams_zoom_vslider_pane

0xd34c,	// (0x0004b7a5) image3_wide_pane_ParamLimits

0xd34c,	// (0x0004b7a5) image3_wide_pane

0xd366,	// (0x0004b7bf) image3_wide_small_pane

0xd372,	// (0x0004b7cb) main_video3_pane_g1_ParamLimits

0xd372,	// (0x0004b7cb) main_video3_pane_g1

0xd38e,	// (0x0004b7e7) main_video3_pane_g2_ParamLimits

0xd38e,	// (0x0004b7e7) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004dca1) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004dca1) main_video3_pane_g

0xd3aa,	// (0x0004b803) main_video3_pane_t1_ParamLimits

0xd3aa,	// (0x0004b803) main_video3_pane_t1

0xd40b,	// (0x0004b864) main_video3_pane_t2_ParamLimits

0xd40b,	// (0x0004b864) main_video3_pane_t2

0xd438,	// (0x0004b891) main_video3_pane_t3_ParamLimits

0xd438,	// (0x0004b891) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004dca6) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004dca6) main_video3_pane_t

0xd465,	// (0x0004b8be) cams_zoom_vslider_pane_g1

0xd46e,	// (0x0004b8c7) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004dcad) cams_zoom_vslider_pane_g

0xd476,	// (0x0004b8cf) small_slider_vertical_pane

0xcc87,	// (0x0004b0e0) small_slider_vertical_pane_g1

0xcc87,	// (0x0004b0e0) small_slider_vertical_pane_g2

0xd47e,	// (0x0004b8d7) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004dcb2) small_slider_vertical_pane_g

0xa12f,	// (0x00048588) main_hwr_training_pane

0xd487,	// (0x0004b8e0) hwr_training_instruct_pane_ParamLimits

0xd487,	// (0x0004b8e0) hwr_training_instruct_pane

0x6d65,	// (0x000451be) hwr_training_navi_pane_ParamLimits

0x6d65,	// (0x000451be) hwr_training_navi_pane

0x6d7f,	// (0x000451d8) hwr_training_write_pane_ParamLimits

0x6d7f,	// (0x000451d8) hwr_training_write_pane

0xa12f,	// (0x00048588) bg_frame_shadow_pane

0xd4be,	// (0x0004b917) hwr_training_write_pane_g1

0xd4c6,	// (0x0004b91f) hwr_training_write_pane_g2

0xd4ce,	// (0x0004b927) hwr_training_write_pane_g3

0xd4d6,	// (0x0004b92f) hwr_training_write_pane_g4

0xd4de,	// (0x0004b937) hwr_training_write_pane_g5

0xd4e6,	// (0x0004b93f) hwr_training_write_pane_g6

0xd4ee,	// (0x0004b947) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004dcb9) hwr_training_write_pane_g

0x6db7,	// (0x00045210) hwr_training_navi_pane_g1_ParamLimits

0x6db7,	// (0x00045210) hwr_training_navi_pane_g1

0x6dc9,	// (0x00045222) hwr_training_navi_pane_g2_ParamLimits

0x6dc9,	// (0x00045222) hwr_training_navi_pane_g2

0x6ddb,	// (0x00045234) hwr_training_navi_pane_g3_ParamLimits

0x6ddb,	// (0x00045234) hwr_training_navi_pane_g3

0x6deb,	// (0x00045244) hwr_training_navi_pane_g4_ParamLimits

0x6deb,	// (0x00045244) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004dcc8) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004dcc8) hwr_training_navi_pane_g

0x6e05,	// (0x0004525e) hwr_training_navi_pane_t1

0x6e13,	// (0x0004526c) list_single_hwr_training_instruct_pane_ParamLimits

0x6e13,	// (0x0004526c) list_single_hwr_training_instruct_pane

0xd4f6,	// (0x0004b94f) list_single_hwr_training_instruct_pane_t1

0xcbc7,	// (0x0004b020) bg_frame_shadow_pane_g1

0xd505,	// (0x0004b95e) bg_frame_shadow_pane_g2

0xd50d,	// (0x0004b966) bg_frame_shadow_pane_g3

0xd515,	// (0x0004b96e) bg_frame_shadow_pane_g4

0xd51d,	// (0x0004b976) bg_frame_shadow_pane_g5

0xd525,	// (0x0004b97e) bg_frame_shadow_pane_g6

0xd52d,	// (0x0004b986) bg_frame_shadow_pane_g7

0xa9b4,	// (0x00048e0d) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004dcd3) bg_frame_shadow_pane_g

0xa12f,	// (0x00048588) main_video_tele_dialer_pane

0x6e2c,	// (0x00045285) aid_size_cell_video_keypad_ParamLimits

0x6e2c,	// (0x00045285) aid_size_cell_video_keypad

0x6e3c,	// (0x00045295) grid_video_dialer_keypad_pane_ParamLimits

0x6e3c,	// (0x00045295) grid_video_dialer_keypad_pane

0x6e6e,	// (0x000452c7) video_down_pane_cp_ParamLimits

0x6e6e,	// (0x000452c7) video_down_pane_cp

0x6e96,	// (0x000452ef) cell_video_dialer_keypad_pane_ParamLimits

0x6e96,	// (0x000452ef) cell_video_dialer_keypad_pane

0xd535,	// (0x0004b98e) bg_button_pane_cp08_ParamLimits

0xd535,	// (0x0004b98e) bg_button_pane_cp08

0x6ead,	// (0x00045306) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ead,	// (0x00045306) cell_video_dialer_keypad_pane_g1

0x66a4,	// (0x00044afd) mup3_rocker2_pane_ParamLimits

0x66a4,	// (0x00044afd) mup3_rocker2_pane

0xcc87,	// (0x0004b0e0) mup3_rocker2_pane_g1

0x55e1,	// (0x00043a3a) main_dialer2_pane

0xa12f,	// (0x00048588) main_mp4_pane

0x6eec,	// (0x00045345) main_mp4_pane_g1_ParamLimits

0x6eec,	// (0x00045345) main_mp4_pane_g1

0x6efa,	// (0x00045353) main_mp4_pane_g2_ParamLimits

0x6efa,	// (0x00045353) main_mp4_pane_g2

0x6f08,	// (0x00045361) main_mp4_pane_g3_ParamLimits

0x6f08,	// (0x00045361) main_mp4_pane_g3

0x6f5b,	// (0x000453b4) main_mp4_pane_g4_ParamLimits

0x6f5b,	// (0x000453b4) main_mp4_pane_g4

0x6f83,	// (0x000453dc) main_mp4_pane_g5_ParamLimits

0x6f83,	// (0x000453dc) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004dcf3) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004dcf3) main_mp4_pane_g

0x6fd3,	// (0x0004542c) main_mp4_pane_t1_ParamLimits

0x6fd3,	// (0x0004542c) main_mp4_pane_t1

0x702f,	// (0x00045488) main_mp4_pane_t2_ParamLimits

0x702f,	// (0x00045488) main_mp4_pane_t2

0xd541,	// (0x0004b99a) main_mp4_pane_t3_ParamLimits

0xd541,	// (0x0004b99a) main_mp4_pane_t3

0x7081,	// (0x000454da) main_mp4_pane_t4_ParamLimits

0x7081,	// (0x000454da) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004dd00) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004dd00) main_mp4_pane_t

0x70c1,	// (0x0004551a) mp4_progress_pane_ParamLimits

0x70c1,	// (0x0004551a) mp4_progress_pane

0x710b,	// (0x00045564) mp4_rocker_pane_ParamLimits

0x710b,	// (0x00045564) mp4_rocker_pane

0xd569,	// (0x0004b9c2) mp4_progress_pane_t1

0xd582,	// (0x0004b9db) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004dd09) mp4_progress_pane_t

0xd59b,	// (0x0004b9f4) mup_progress_pane_cp04

0xcc87,	// (0x0004b0e0) mp4_rocker_pane_g1

0x712d,	// (0x00045586) aid_cell_size_keypad2_ParamLimits

0x712d,	// (0x00045586) aid_cell_size_keypad2

0x713d,	// (0x00045596) dialer2_ne_pane_ParamLimits

0x713d,	// (0x00045596) dialer2_ne_pane

0x7149,	// (0x000455a2) grid_dialer2_keypad_pane_ParamLimits

0x7149,	// (0x000455a2) grid_dialer2_keypad_pane

0xd5a7,	// (0x0004ba00) bg_popup_call_pane_cp07_ParamLimits

0xd5a7,	// (0x0004ba00) bg_popup_call_pane_cp07

0x7157,	// (0x000455b0) dialer2_ne_pane_t1_ParamLimits

0x7157,	// (0x000455b0) dialer2_ne_pane_t1

0x717c,	// (0x000455d5) cell_dialer2_keypad_pane_ParamLimits

0x717c,	// (0x000455d5) cell_dialer2_keypad_pane

0xd5c7,	// (0x0004ba20) bg_button_pane_pane_cp04_ParamLimits

0xd5c7,	// (0x0004ba20) bg_button_pane_pane_cp04

0x7193,	// (0x000455ec) cell_dialer2_keypad_pane_g1_ParamLimits

0x7193,	// (0x000455ec) cell_dialer2_keypad_pane_g1

0x327f,	// (0x000416d8) aid_placing_vt_set_content_ParamLimits

0x327f,	// (0x000416d8) aid_placing_vt_set_content

0x32a7,	// (0x00041700) aid_placing_vt_set_title_ParamLimits

0x32a7,	// (0x00041700) aid_placing_vt_set_title

0xa12f,	// (0x00048588) main_image3_pane

0x722d,	// (0x00045686) area_side_right_pane_cp01_ParamLimits

0x722d,	// (0x00045686) area_side_right_pane_cp01

0xa994,	// (0x00048ded) main_image3_pane_g1_ParamLimits

0xa994,	// (0x00048ded) main_image3_pane_g1

0x725c,	// (0x000456b5) main_image3_pane_g2_ParamLimits

0x725c,	// (0x000456b5) main_image3_pane_g2

0x7275,	// (0x000456ce) main_image3_pane_g3_ParamLimits

0x7275,	// (0x000456ce) main_image3_pane_g3

0x728e,	// (0x000456e7) main_image3_pane_g4_ParamLimits

0x728e,	// (0x000456e7) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004dd18) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004dd18) main_image3_pane_g

0x72a7,	// (0x00045700) main_image3_pane_t1_ParamLimits

0x72a7,	// (0x00045700) main_image3_pane_t1

0x72cc,	// (0x00045725) main_image3_pane_t2_ParamLimits

0x72cc,	// (0x00045725) main_image3_pane_t2

0x72eb,	// (0x00045744) main_image3_pane_t3_ParamLimits

0x72eb,	// (0x00045744) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004dd21) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004dd21) main_image3_pane_t

0x2194,	// (0x000405ed) grid_sctrl_middle_pane_cp01_ParamLimits

0x2194,	// (0x000405ed) grid_sctrl_middle_pane_cp01

0x734c,	// (0x000457a5) cell_sctrl_middle_pane_cp01_ParamLimits

0x734c,	// (0x000457a5) cell_sctrl_middle_pane_cp01

0x735d,	// (0x000457b6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x735d,	// (0x000457b6) cell_sctrl_middle_pane_cp01_g1

0xa12f,	// (0x00048588) main_call4_pane

0x736a,	// (0x000457c3) aid_size_button_call4_ParamLimits

0x736a,	// (0x000457c3) aid_size_button_call4

0x739c,	// (0x000457f5) call4_windows_pane_ParamLimits

0x739c,	// (0x000457f5) call4_windows_pane

0x73b8,	// (0x00045811) grid_call4_button_pane_ParamLimits

0x73b8,	// (0x00045811) grid_call4_button_pane

0xd5d3,	// (0x0004ba2c) call4_windows_conf_pane

0x73dc,	// (0x00045835) popup_call4_audio_first_window_ParamLimits

0x73dc,	// (0x00045835) popup_call4_audio_first_window

0x7408,	// (0x00045861) popup_call4_audio_second_window_ParamLimits

0x7408,	// (0x00045861) popup_call4_audio_second_window

0xd610,	// (0x0004ba69) popup_call4_audio_wait_window_ParamLimits

0xd610,	// (0x0004ba69) popup_call4_audio_wait_window

0x741c,	// (0x00045875) cell_call4_button_pane_ParamLimits

0x741c,	// (0x00045875) cell_call4_button_pane

0x743f,	// (0x00045898) bg_button_pane_cp09_ParamLimits

0x743f,	// (0x00045898) bg_button_pane_cp09

0x744b,	// (0x000458a4) cell_call4_button_pane_g1_ParamLimits

0x744b,	// (0x000458a4) cell_call4_button_pane_g1

0x7458,	// (0x000458b1) cell_call4_button_pane_t1_ParamLimits

0x7458,	// (0x000458b1) cell_call4_button_pane_t1

0xd658,	// (0x0004bab1) popup_call4_audio_conf_window_ParamLimits

0xd658,	// (0x0004bab1) popup_call4_audio_conf_window

0x66d9,	// (0x00044b32) mup3_progress_pane_t1_ParamLimits

0x66f8,	// (0x00044b51) mup3_progress_pane_t2_ParamLimits

0xcf32,	// (0x0004b38b) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0004dbf5) mup3_progress_pane_t_ParamLimits

0xcf4f,	// (0x0004b3a8) mup_progress_pane_cp03_ParamLimits

0x6bf6,	// (0x0004504f) mup3_control_keys_pane_g4_copy1

0x70ef,	// (0x00045548) mp4_rocker2_pane_ParamLimits

0x70ef,	// (0x00045548) mp4_rocker2_pane

0xd672,	// (0x0004bacb) mp4_rocker2_pane_g1

0xd67a,	// (0x0004bad3) mp4_rocker2_pane_g2

0x746a,	// (0x000458c3) mp4_rocker2_pane_g3

0x7472,	// (0x000458cb) mp4_rocker2_pane_g4

0x747a,	// (0x000458d3) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004dd2a) mp4_rocker2_pane_g

0xa12f,	// (0x00048588) main_camera4_pane

0xa12f,	// (0x00048588) main_video4_pane

0x6e4a,	// (0x000452a3) main_video_tele_dialer_pane_t1_ParamLimits

0x6e4a,	// (0x000452a3) main_video_tele_dialer_pane_t1

0x6e5c,	// (0x000452b5) main_video_tele_dialer_pane_t2_ParamLimits

0x6e5c,	// (0x000452b5) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004dce4) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004dce4) main_video_tele_dialer_pane_t

0x749a,	// (0x000458f3) cam4_autofocus_pane_ParamLimits

0x749a,	// (0x000458f3) cam4_autofocus_pane

0x74b2,	// (0x0004590b) cam4_image_uncrop_pane_ParamLimits

0x74b2,	// (0x0004590b) cam4_image_uncrop_pane

0x74cb,	// (0x00045924) cam4_indicators_pane_ParamLimits

0x74cb,	// (0x00045924) cam4_indicators_pane

0x74e7,	// (0x00045940) main_camera4_pane_g1_ParamLimits

0x74e7,	// (0x00045940) main_camera4_pane_g1

0x74f3,	// (0x0004594c) main_camera4_pane_g2_ParamLimits

0x74f3,	// (0x0004594c) main_camera4_pane_g2

0x74f3,	// (0x0004594c) main_camera4_pane_g3_ParamLimits

0x74f3,	// (0x0004594c) main_camera4_pane_g3

0x74ff,	// (0x00045958) main_camera4_pane_g4_ParamLimits

0x74ff,	// (0x00045958) main_camera4_pane_g4

0x750b,	// (0x00045964) main_camera4_pane_g5_ParamLimits

0x750b,	// (0x00045964) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004dd35) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004dd35) main_camera4_pane_g

0x7525,	// (0x0004597e) main_camera4_pane_t1_ParamLimits

0x7525,	// (0x0004597e) main_camera4_pane_t1

0xceb7,	// (0x0004b310) bg_tb_trans_pane_cp06

0x7577,	// (0x000459d0) cam4_indicators_pane_g1

0x7588,	// (0x000459e1) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004dd50) cam4_indicators_pane_g

0x75a0,	// (0x000459f9) cam4_indicators_pane_t1

0x75ca,	// (0x00045a23) main_video4_pane_g1_ParamLimits

0x75ca,	// (0x00045a23) main_video4_pane_g1

0x75d6,	// (0x00045a2f) main_video4_pane_g2_ParamLimits

0x75d6,	// (0x00045a2f) main_video4_pane_g2

0x75e2,	// (0x00045a3b) main_video4_pane_g3_ParamLimits

0x75e2,	// (0x00045a3b) main_video4_pane_g3

0x75ee,	// (0x00045a47) main_video4_pane_g4_ParamLimits

0x75ee,	// (0x00045a47) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004dd57) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004dd57) main_video4_pane_g

0x7610,	// (0x00045a69) vid4_indicators_pane_ParamLimits

0x7610,	// (0x00045a69) vid4_indicators_pane

0x762f,	// (0x00045a88) video4_image_uncrop_cif_pane_ParamLimits

0x762f,	// (0x00045a88) video4_image_uncrop_cif_pane

0x763e,	// (0x00045a97) video4_image_uncrop_nhd_pane_ParamLimits

0x763e,	// (0x00045a97) video4_image_uncrop_nhd_pane

0x74b2,	// (0x0004590b) video4_image_uncrop_vga_pane_ParamLimits

0x74b2,	// (0x0004590b) video4_image_uncrop_vga_pane

0xa986,	// (0x00048ddf) bg_tb_trans_pane_cp07

0x7657,	// (0x00045ab0) vid4_indicators_pane_g1

0x766d,	// (0x00045ac6) vid4_indicators_pane_g2

0x7681,	// (0x00045ada) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004dd62) vid4_indicators_pane_g

0x76b2,	// (0x00045b0b) vid4_indicators_pane_t1

0x76c9,	// (0x00045b22) cam4_autofocus_pane_g1

0x76d1,	// (0x00045b2a) cam4_autofocus_pane_g2

0x76d9,	// (0x00045b32) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004dd6d) cam4_autofocus_pane_g

0x76e1,	// (0x00045b3a) cam4_autofocus_pane_g3_copy1

0x6e7a,	// (0x000452d3) video_down_pane_cp_t1

0x6e88,	// (0x000452e1) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004dce9) video_down_pane_cp_t

0x2194,	// (0x000405ed) popup_vitu2_window_ParamLimits

0x2194,	// (0x000405ed) popup_vitu2_window

0x76e9,	// (0x00045b42) aid_size_cell2_itu2_ParamLimits

0x76e9,	// (0x00045b42) aid_size_cell2_itu2

0x770b,	// (0x00045b64) aid_size_cell_itu2_ParamLimits

0x770b,	// (0x00045b64) aid_size_cell_itu2

0xd5a7,	// (0x0004ba00) bg_popup_window_pane_cp09_ParamLimits

0xd5a7,	// (0x0004ba00) bg_popup_window_pane_cp09

0x7751,	// (0x00045baa) field_vitu2_entry_pane_ParamLimits

0x7751,	// (0x00045baa) field_vitu2_entry_pane

0x7771,	// (0x00045bca) grid_vitu2_function_pane_ParamLimits

0x7771,	// (0x00045bca) grid_vitu2_function_pane

0x77b5,	// (0x00045c0e) grid_vitu2_itu_pane_ParamLimits

0x77b5,	// (0x00045c0e) grid_vitu2_itu_pane

0x7829,	// (0x00045c82) cell_vitu2_itu_pane_ParamLimits

0x7829,	// (0x00045c82) cell_vitu2_itu_pane

0x7840,	// (0x00045c99) cell_vitu2_function_pane_ParamLimits

0x7840,	// (0x00045c99) cell_vitu2_function_pane

0xd682,	// (0x0004badb) bg_popup_call_pane_cp08_ParamLimits

0xd682,	// (0x0004badb) bg_popup_call_pane_cp08

0xd699,	// (0x0004baf2) field_vitu2_entry_pane_g1

0xd6a5,	// (0x0004bafe) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004dd74) field_vitu2_entry_pane_g

0x0e92,	// (0x0003f2eb) field_vitu2_entry_pane_t1_ParamLimits

0x0e92,	// (0x0003f2eb) field_vitu2_entry_pane_t1

0x0ebd,	// (0x0003f316) field_vitu2_entry_pane_t2_ParamLimits

0x0ebd,	// (0x0003f316) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004dd7b) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004dd7b) field_vitu2_entry_pane_t

0x7884,	// (0x00045cdd) bg_button_pane_cp010_ParamLimits

0x7884,	// (0x00045cdd) bg_button_pane_cp010

0x7892,	// (0x00045ceb) cell_vitu2_itu_pane_g1

0x78bb,	// (0x00045d14) cell_vitu2_itu_pane_t1_ParamLimits

0x78bb,	// (0x00045d14) cell_vitu2_itu_pane_t1

0x0eda,	// (0x0003f333) cell_vitu2_itu_pane_t2_ParamLimits

0x0eda,	// (0x0003f333) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004dd85) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004dd85) cell_vitu2_itu_pane_t

0xa986,	// (0x00048ddf) bg_button_pane_cp011

0x7907,	// (0x00045d60) cell_vitu2_function_pane_g1

0xa12f,	// (0x00048588) main_myfav_hc_pane

0x732d,	// (0x00045786) popup_image3_note_pane_ParamLimits

0x732d,	// (0x00045786) popup_image3_note_pane

0x733b,	// (0x00045794) popup_image3_tool_bar_pane_ParamLimits

0x733b,	// (0x00045794) popup_image3_tool_bar_pane

0x0f48,	// (0x0003f3a1) cell_vitu2_itu_pane_t3_ParamLimits

0x0f48,	// (0x0003f3a1) cell_vitu2_itu_pane_t3

0xa12f,	// (0x00048588) bg_popup_trans_pane

0xd6c7,	// (0x0004bb20) grid_image3_tool_bar_pane

0xd6d1,	// (0x0004bb2a) bg_popup_trans_pane_g1

0xad12,	// (0x0004916b) bg_popup_trans_pane_g2

0xd6d9,	// (0x0004bb32) bg_popup_trans_pane_g3

0xd6e1,	// (0x0004bb3a) bg_popup_trans_pane_g4

0xd6e9,	// (0x0004bb42) bg_popup_trans_pane_g5

0xd6f1,	// (0x0004bb4a) bg_popup_trans_pane_g6

0xd6f9,	// (0x0004bb52) bg_popup_trans_pane_g7

0xd701,	// (0x0004bb5a) bg_popup_trans_pane_g8

0xacf2,	// (0x0004914b) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004dd8c) bg_popup_trans_pane_g

0xd709,	// (0x0004bb62) cell_image3_tool_bar_pane_ParamLimits

0xd709,	// (0x0004bb62) cell_image3_tool_bar_pane

0xcc87,	// (0x0004b0e0) cell_image3_tool_bar_pane_g1

0xa12f,	// (0x00048588) bg_popup_trans_pane_cp1

0xd71f,	// (0x0004bb78) popup_image3_note_pane_t1

0xd72d,	// (0x0004bb86) popup_image3_note_pane_t2

0xd73b,	// (0x0004bb94) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004dd9f) popup_image3_note_pane_t

0xd74b,	// (0x0004bba4) popup_image3_note_pane_t3_copy1

0x791b,	// (0x00045d74) bg_myfav_hc_instruction_pane_ParamLimits

0x791b,	// (0x00045d74) bg_myfav_hc_instruction_pane

0x7933,	// (0x00045d8c) cell_myfav_contact_pane_ParamLimits

0x7933,	// (0x00045d8c) cell_myfav_contact_pane

0x794d,	// (0x00045da6) cell_myfav_contact_pane_cp1_ParamLimits

0x794d,	// (0x00045da6) cell_myfav_contact_pane_cp1

0x7965,	// (0x00045dbe) cell_myfav_contact_pane_cp2_ParamLimits

0x7965,	// (0x00045dbe) cell_myfav_contact_pane_cp2

0x797d,	// (0x00045dd6) cell_myfav_contact_pane_cp3_ParamLimits

0x797d,	// (0x00045dd6) cell_myfav_contact_pane_cp3

0x7994,	// (0x00045ded) cell_myfav_contact_pane_cp4_ParamLimits

0x7994,	// (0x00045ded) cell_myfav_contact_pane_cp4

0x79aa,	// (0x00045e03) cell_myfav_contact_pane_cp5_ParamLimits

0x79aa,	// (0x00045e03) cell_myfav_contact_pane_cp5

0x79be,	// (0x00045e17) cell_myfav_contact_pane_cp6_ParamLimits

0x79be,	// (0x00045e17) cell_myfav_contact_pane_cp6

0x79d2,	// (0x00045e2b) cell_myfav_contact_pane_cp7_ParamLimits

0x79d2,	// (0x00045e2b) cell_myfav_contact_pane_cp7

0xd759,	// (0x0004bbb2) listscroll_gen_pane_cp05

0x79ea,	// (0x00045e43) main_myfav_hc_pane_g1_ParamLimits

0x79ea,	// (0x00045e43) main_myfav_hc_pane_g1

0x7a04,	// (0x00045e5d) main_myfav_hc_pane_g2_ParamLimits

0x7a04,	// (0x00045e5d) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004dda6) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004dda6) main_myfav_hc_pane_g

0x7a36,	// (0x00045e8f) main_myfav_hc_pane_t1_ParamLimits

0x7a36,	// (0x00045e8f) main_myfav_hc_pane_t1

0xd762,	// (0x0004bbbb) main_myfav_hc_pane_t2_ParamLimits

0xd762,	// (0x0004bbbb) main_myfav_hc_pane_t2

0xd774,	// (0x0004bbcd) main_myfav_hc_pane_t3_ParamLimits

0xd774,	// (0x0004bbcd) main_myfav_hc_pane_t3

0x7a4d,	// (0x00045ea6) main_myfav_hc_pane_t4_ParamLimits

0x7a4d,	// (0x00045ea6) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004ddad) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004ddad) main_myfav_hc_pane_t

0xcc87,	// (0x0004b0e0) bg_myfav_hc_instruction_pane_g1

0xd786,	// (0x0004bbdf) cell_myfav_contact_pane_g1_ParamLimits

0xd786,	// (0x0004bbdf) cell_myfav_contact_pane_g1

0xd786,	// (0x0004bbdf) cell_myfav_contact_pane_g2_ParamLimits

0xd786,	// (0x0004bbdf) cell_myfav_contact_pane_g2

0xd792,	// (0x0004bbeb) cell_myfav_contact_pane_g3_ParamLimits

0xd792,	// (0x0004bbeb) cell_myfav_contact_pane_g3

0xcf1c,	// (0x0004b375) cell_myfav_contact_pane_g4_ParamLimits

0xcf1c,	// (0x0004b375) cell_myfav_contact_pane_g4

0xd79f,	// (0x0004bbf8) cell_myfav_contact_pane_g5_ParamLimits

0xd79f,	// (0x0004bbf8) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004ddb8) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004ddb8) cell_myfav_contact_pane_g

0x7a1e,	// (0x00045e77) main_myfav_hc_pane_g3_ParamLimits

0x7a1e,	// (0x00045e77) main_myfav_hc_pane_g3

0x20a6,	// (0x000404ff) popup_adpt_find_window

0x7a77,	// (0x00045ed0) afind_page_pane_ParamLimits

0x7a77,	// (0x00045ed0) afind_page_pane

0x7a84,	// (0x00045edd) aid_size_cell_afind_ParamLimits

0x7a84,	// (0x00045edd) aid_size_cell_afind

0x7a9e,	// (0x00045ef7) bg_popup_sub_pane_cp09_ParamLimits

0x7a9e,	// (0x00045ef7) bg_popup_sub_pane_cp09

0x7aab,	// (0x00045f04) find_pane_cp01_ParamLimits

0x7aab,	// (0x00045f04) find_pane_cp01

0xd7ab,	// (0x0004bc04) grid_afind_control_pane_ParamLimits

0xd7ab,	// (0x0004bc04) grid_afind_control_pane

0x7ab8,	// (0x00045f11) grid_afind_pane_ParamLimits

0x7ab8,	// (0x00045f11) grid_afind_pane

0x7ad4,	// (0x00045f2d) cell_afind_pane_ParamLimits

0x7ad4,	// (0x00045f2d) cell_afind_pane

0xcc87,	// (0x0004b0e0) afind_page_pane_g1

0x7b20,	// (0x00045f79) afind_page_pane_g2

0x7b29,	// (0x00045f82) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004ddc3) afind_page_pane_g

0x7b32,	// (0x00045f8b) afind_page_pane_t1

0xd7bf,	// (0x0004bc18) cell_afind_grid_control_pane_ParamLimits

0xd7bf,	// (0x0004bc18) cell_afind_grid_control_pane

0xd5c7,	// (0x0004ba20) bg_button_pane_cp69_ParamLimits

0xd5c7,	// (0x0004ba20) bg_button_pane_cp69

0x7b52,	// (0x00045fab) cell_afind_pane_g1_ParamLimits

0x7b52,	// (0x00045fab) cell_afind_pane_g1

0x7b5f,	// (0x00045fb8) cell_afind_pane_t1_ParamLimits

0x7b5f,	// (0x00045fb8) cell_afind_pane_t1

0xab07,	// (0x00048f60) bg_button_pane_cp72

0xd7ce,	// (0x0004bc27) cell_afind_grid_control_pane_g1

0x515c,	// (0x000435b5) aid_image_placing_area_ParamLimits

0x515c,	// (0x000435b5) aid_image_placing_area

0xd24f,	// (0x0004b6a8) field_vitu_entry_pane_g1_ParamLimits

0xd24f,	// (0x0004b6a8) field_vitu_entry_pane_g1

0xd25b,	// (0x0004b6b4) field_vitu_entry_pane_g2_ParamLimits

0xd25b,	// (0x0004b6b4) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004dc74) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004dc74) field_vitu_entry_pane_g

0x6c80,	// (0x000450d9) cell_vitu_itu_pane_g1_ParamLimits

0x6cd0,	// (0x00045129) cell_vitu_itu_pane_t3_ParamLimits

0x6cd0,	// (0x00045129) cell_vitu_itu_pane_t3

0xd569,	// (0x0004b9c2) mp4_progress_pane_t1_ParamLimits

0xd582,	// (0x0004b9db) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004dd09) mp4_progress_pane_t_ParamLimits

0xd59b,	// (0x0004b9f4) mup_progress_pane_cp04_ParamLimits

0x7a61,	// (0x00045eba) main_myfav_hc_pane_t5_ParamLimits

0x7a61,	// (0x00045eba) main_myfav_hc_pane_t5

0xa14d,	// (0x000485a6) aid_zoom_text_primary

0x20a6,	// (0x000404ff) popup_adpt_find_window_ParamLimits

0xa986,	// (0x00048ddf) main_cam_set_pane

0x74d9,	// (0x00045932) cam4_zoom_pane_ParamLimits

0x74d9,	// (0x00045932) cam4_zoom_pane

0x7b71,	// (0x00045fca) main_cam_set_pane_g1_ParamLimits

0x7b71,	// (0x00045fca) main_cam_set_pane_g1

0x7b7f,	// (0x00045fd8) main_cam_set_pane_g2_ParamLimits

0x7b7f,	// (0x00045fd8) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004ddca) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004ddca) main_cam_set_pane_g

0x7b8b,	// (0x00045fe4) main_cam_set_pane_t1_ParamLimits

0x7b8b,	// (0x00045fe4) main_cam_set_pane_t1

0x7ba7,	// (0x00046000) main_cset_listscroll_pane_ParamLimits

0x7ba7,	// (0x00046000) main_cset_listscroll_pane

0x7bd6,	// (0x0004602f) main_cset_slider_pane_ParamLimits

0x7bd6,	// (0x0004602f) main_cset_slider_pane

0xd7df,	// (0x0004bc38) main_cset_list_pane_ParamLimits

0xd7df,	// (0x0004bc38) main_cset_list_pane

0xd7ef,	// (0x0004bc48) scroll_pane_cp028

0x7bf7,	// (0x00046050) aid_area_touch_slider

0x7c13,	// (0x0004606c) cset_slider_pane

0x7c3d,	// (0x00046096) main_cset_slider_pane_g1

0x7c52,	// (0x000460ab) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004ddcf) main_cset_slider_pane_g

0xd828,	// (0x0004bc81) main_cset_slider_pane_t1

0x7d0e,	// (0x00046167) main_cset_slider_pane_t2

0x7d28,	// (0x00046181) main_cset_slider_pane_t3

0x7d42,	// (0x0004619b) main_cset_slider_pane_t4

0x7d5c,	// (0x000461b5) main_cset_slider_pane_t5

0x7d76,	// (0x000461cf) main_cset_slider_pane_t6

0x7d8b,	// (0x000461e4) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004ddf4) main_cset_slider_pane_t

0x7e8f,	// (0x000462e8) cset_list_set_pane_ParamLimits

0x7e8f,	// (0x000462e8) cset_list_set_pane

0x7ea0,	// (0x000462f9) aid_position_infowindow_above

0x7ea8,	// (0x00046301) aid_position_infowindow_below

0x0f95,	// (0x0003f3ee) cset_list_set_pane_g1_ParamLimits

0x0f95,	// (0x0003f3ee) cset_list_set_pane_g1

0x0fa1,	// (0x0003f3fa) cset_list_set_pane_g3_ParamLimits

0x0fa1,	// (0x0003f3fa) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004de13) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004de13) cset_list_set_pane_g

0x0fb0,	// (0x0003f409) cset_list_set_pane_t1_ParamLimits

0x0fb0,	// (0x0003f409) cset_list_set_pane_t1

0xa986,	// (0x00048ddf) list_highlight_pane_cp021_ParamLimits

0xa986,	// (0x00048ddf) list_highlight_pane_cp021

0xb525,	// (0x0004997e) cset_slider_pane_g1

0xb537,	// (0x00049990) cset_slider_pane_g2

0xb52e,	// (0x00049987) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004de18) cset_slider_pane_g

0x7eb0,	// (0x00046309) aid_area_touch_cam4_zoom

0x7eb8,	// (0x00046311) cam4_zoom_cont_pane

0x7ec0,	// (0x00046319) cam4_zoom_pane_g1

0x7ec8,	// (0x00046321) cam4_zoom_pane_g2

0x7ed0,	// (0x00046329) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004de1f) cam4_zoom_pane_g

0xd8c8,	// (0x0004bd21) cam4_zoom_cont_pane_g1

0xd8d1,	// (0x0004bd2a) cam4_zoom_cont_pane_g2

0xd8da,	// (0x0004bd33) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004de26) cam4_zoom_cont_pane_g

0x7384,	// (0x000457dd) call4_image_pane_ParamLimits

0x7384,	// (0x000457dd) call4_image_pane

0xd5d3,	// (0x0004ba2c) call4_windows_conf_pane_ParamLimits

0xd5ee,	// (0x0004ba47) popup_call4_audio_in_window_ParamLimits

0xd5ee,	// (0x0004ba47) popup_call4_audio_in_window

0xa12f,	// (0x00048588) bg_popup_call2_act_pane_cp02

0xd650,	// (0x0004baa9) call4_list_conf_pane

0xcc87,	// (0x0004b0e0) call4_image_pane_g1

0xcc87,	// (0x0004b0e0) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0004db35) call4_image_pane_g

0xd8e3,	// (0x0004bd3c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8e3,	// (0x0004bd3c) list_single_graphic_popup_conf4_pane

0xa12f,	// (0x00048588) list_highlight_pane_cp022

0xd8f8,	// (0x0004bd51) list_single_graphic_popup_conf4_pane_g1

0xb211,	// (0x0004966a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004de2d) list_single_graphic_popup_conf4_pane_g

0xd900,	// (0x0004bd59) list_single_graphic_popup_conf4_pane_t1

0x3401,	// (0x0004185a) popup_vtel_slider_window_ParamLimits

0x3401,	// (0x0004185a) popup_vtel_slider_window

0xd5b5,	// (0x0004ba0e) dialer2_ne_pane_t2_ParamLimits

0xd5b5,	// (0x0004ba0e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004dd0e) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004dd0e) dialer2_ne_pane_t

0xa986,	// (0x00048ddf) bg_popup_sub_pane_cp010_ParamLimits

0xa986,	// (0x00048ddf) bg_popup_sub_pane_cp010

0x7ed8,	// (0x00046331) popup_vtel_slider_window_g1_ParamLimits

0x7ed8,	// (0x00046331) popup_vtel_slider_window_g1

0x7ee4,	// (0x0004633d) popup_vtel_slider_window_g2_ParamLimits

0x7ee4,	// (0x0004633d) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004de32) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004de32) popup_vtel_slider_window_g

0x7f2c,	// (0x00046385) vtel_slider_pane_ParamLimits

0x7f2c,	// (0x00046385) vtel_slider_pane

0x7f3b,	// (0x00046394) vtel_slider_pane_g1_ParamLimits

0x7f3b,	// (0x00046394) vtel_slider_pane_g1

0x7f48,	// (0x000463a1) vtel_slider_pane_g2_ParamLimits

0x7f48,	// (0x000463a1) vtel_slider_pane_g2

0x7f55,	// (0x000463ae) vtel_slider_pane_g3_ParamLimits

0x7f55,	// (0x000463ae) vtel_slider_pane_g3

0x7f3b,	// (0x00046394) vtel_slider_pane_g4_ParamLimits

0x7f3b,	// (0x00046394) vtel_slider_pane_g4

0x7f62,	// (0x000463bb) vtel_slider_pane_g5_ParamLimits

0x7f62,	// (0x000463bb) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004de3b) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004de3b) vtel_slider_pane_g

0xa986,	// (0x00048ddf) main_gallery2_pane

0x7731,	// (0x00045b8a) aid_size_row_itut2_dropdow_list_ParamLimits

0x7731,	// (0x00045b8a) aid_size_row_itut2_dropdow_list

0x7793,	// (0x00045bec) grid_vitu2_function_top_pane_ParamLimits

0x7793,	// (0x00045bec) grid_vitu2_function_top_pane

0x77e5,	// (0x00045c3e) popup_vitu2_dropdown_list_window_ParamLimits

0x77e5,	// (0x00045c3e) popup_vitu2_dropdown_list_window

0x7805,	// (0x00045c5e) popup_vitu2_match_list_window

0x7f6f,	// (0x000463c8) cell_vitu2_function_top_pane_ParamLimits

0x7f6f,	// (0x000463c8) cell_vitu2_function_top_pane

0x7f8f,	// (0x000463e8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7f8f,	// (0x000463e8) cell_vitu2_function_top_pane_cp01

0x7fad,	// (0x00046406) cell_vitu2_function_top_wide_pane_ParamLimits

0x7fad,	// (0x00046406) cell_vitu2_function_top_wide_pane

0xa986,	// (0x00048ddf) bg_button_pane_cp012

0x7fcb,	// (0x00046424) cell_vitu2_function_top_pane_g1

0x7fde,	// (0x00046437) bg_button_pane_cp013_ParamLimits

0x7fde,	// (0x00046437) bg_button_pane_cp013

0x7ffa,	// (0x00046453) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7ffa,	// (0x00046453) cell_vitu2_function_top_wide_pane_g1

0x2194,	// (0x000405ed) bg_popup_sub_pane_cp20

0x8012,	// (0x0004646b) list_vitu2_match_list_pane

0xd6d1,	// (0x0004bb2a) bg_popup_sub_pane_cp20_g1

0xd6d9,	// (0x0004bb32) bg_popup_sub_pane_cp20_g2

0xad12,	// (0x0004916b) bg_popup_sub_pane_cp20_g3

0xd6e1,	// (0x0004bb3a) bg_popup_sub_pane_cp20_g4

0xacf2,	// (0x0004914b) bg_popup_sub_pane_cp20_g5

0xd916,	// (0x0004bd6f) bg_popup_sub_pane_cp20_g6

0xd6f1,	// (0x0004bb4a) bg_popup_sub_pane_cp20_g7

0xd6f9,	// (0x0004bb52) bg_popup_sub_pane_cp20_g8

0xd701,	// (0x0004bb5a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004de46) bg_popup_sub_pane_cp20_g

0xa9a2,	// (0x00048dfb) list_vitu2_match_list_item_pane_ParamLimits

0xa9a2,	// (0x00048dfb) list_vitu2_match_list_item_pane

0x802a,	// (0x00046483) list_vitu2_match_list_item_pane_t1

0xa12f,	// (0x00048588) bg_popup_sub_pane_cp21

0xb13a,	// (0x00049593) grid_vitu2_dropdown_list_pane

0x8038,	// (0x00046491) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8038,	// (0x00046491) cell_vitu2_dropdown_list_char_pane

0x805d,	// (0x000464b6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x805d,	// (0x000464b6) cell_vitu2_dropdown_list_ctrl_pane

0xd91e,	// (0x0004bd77) cell_vitu2_dropdown_list_char_pane_g1

0xd927,	// (0x0004bd80) cell_vitu2_dropdown_list_char_pane_g2

0xd930,	// (0x0004bd89) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004de63) cell_vitu2_dropdown_list_char_pane_g

0x808b,	// (0x000464e4) cell_vitu2_dropdown_list_char_pane_t1

0x8099,	// (0x000464f2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8099,	// (0x000464f2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x80a9,	// (0x00046502) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x80a9,	// (0x00046502) cell_vitu2_dropdown_list_ctrl_pane_g2

0x80ba,	// (0x00046513) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x80ba,	// (0x00046513) cell_vitu2_dropdown_list_ctrl_pane_g3

0x80ca,	// (0x00046523) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x80ca,	// (0x00046523) cell_vitu2_dropdown_list_ctrl_pane_g4

0xceb7,	// (0x0004b310) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xceb7,	// (0x0004b310) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004de6a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004de6a) cell_vitu2_dropdown_list_ctrl_pane_g

0x80e3,	// (0x0004653c) aid_size_cell_gallery2_ParamLimits

0x80e3,	// (0x0004653c) aid_size_cell_gallery2

0x80fd,	// (0x00046556) grid_gallery2_pane_ParamLimits

0x80fd,	// (0x00046556) grid_gallery2_pane

0x6b05,	// (0x00044f5e) scroll_pane_cp029_ParamLimits

0x6b05,	// (0x00044f5e) scroll_pane_cp029

0x8114,	// (0x0004656d) cell_gallery2_pane_ParamLimits

0x8114,	// (0x0004656d) cell_gallery2_pane

0xd939,	// (0x0004bd92) cell_gallery2_pane_g2

0x8160,	// (0x000465b9) cell_gallery2_pane_g3

0xd941,	// (0x0004bd9a) cell_gallery2_pane_g4

0xd949,	// (0x0004bda2) cell_gallery2_pane_g5

0xb3ed,	// (0x00049846) grid_highlight_pane_cp10

0x7805,	// (0x00045c5e) popup_vitu2_match_list_window_ParamLimits

0x7819,	// (0x00045c72) popup_vitu2_query_window_ParamLimits

0x7819,	// (0x00045c72) popup_vitu2_query_window

0xa12f,	// (0x00048588) bg_vitu2_candi_button_pane

0xd91e,	// (0x0004bd77) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd927,	// (0x0004bd80) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd930,	// (0x0004bd89) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1017,	// (0x0003f470) bg_button_pane_cp015

0x8168,	// (0x000465c1) bg_button_pane_cp016

0x817b,	// (0x000465d4) bg_button_pane_cp017

0xc822,	// (0x0004ac7b) bg_popup_sub_pane_cp22

0xd951,	// (0x0004bdaa) popup_vitu2_query_window_g1

0x104a,	// (0x0003f4a3) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004de75) popup_vitu2_query_window_g

0x1067,	// (0x0003f4c0) popup_vitu2_query_window_t1_ParamLimits

0x1067,	// (0x0003f4c0) popup_vitu2_query_window_t1

0x109a,	// (0x0003f4f3) popup_vitu2_query_window_t2_ParamLimits

0x109a,	// (0x0003f4f3) popup_vitu2_query_window_t2

0x10ac,	// (0x0003f505) popup_vitu2_query_window_t3_ParamLimits

0x10ac,	// (0x0003f505) popup_vitu2_query_window_t3

0x819f,	// (0x000465f8) popup_vitu2_query_window_t4_ParamLimits

0x819f,	// (0x000465f8) popup_vitu2_query_window_t4

0x81c2,	// (0x0004661b) popup_vitu2_query_window_t5_ParamLimits

0x81c2,	// (0x0004661b) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004de7c) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004de7c) popup_vitu2_query_window_t

0xd7d7,	// (0x0004bc30) main_cset_text_pane

0x7bf7,	// (0x00046050) aid_area_touch_slider_ParamLimits

0x7c13,	// (0x0004606c) cset_slider_pane_ParamLimits

0x7c3d,	// (0x00046096) main_cset_slider_pane_g1_ParamLimits

0x7c52,	// (0x000460ab) main_cset_slider_pane_g2_ParamLimits

0xd7f8,	// (0x0004bc51) main_cset_slider_pane_g3_ParamLimits

0xd7f8,	// (0x0004bc51) main_cset_slider_pane_g3

0x7c67,	// (0x000460c0) main_cset_slider_pane_g4_ParamLimits

0x7c67,	// (0x000460c0) main_cset_slider_pane_g4

0x7c76,	// (0x000460cf) main_cset_slider_pane_g5_ParamLimits

0x7c76,	// (0x000460cf) main_cset_slider_pane_g5

0x7c82,	// (0x000460db) main_cset_slider_pane_g6_ParamLimits

0x7c82,	// (0x000460db) main_cset_slider_pane_g6

0xf976,	// (0x0004ddcf) main_cset_slider_pane_g_ParamLimits

0xd828,	// (0x0004bc81) main_cset_slider_pane_t1_ParamLimits

0x7d0e,	// (0x00046167) main_cset_slider_pane_t2_ParamLimits

0x7d28,	// (0x00046181) main_cset_slider_pane_t3_ParamLimits

0x7d42,	// (0x0004619b) main_cset_slider_pane_t4_ParamLimits

0x7d5c,	// (0x000461b5) main_cset_slider_pane_t5_ParamLimits

0x7d76,	// (0x000461cf) main_cset_slider_pane_t6_ParamLimits

0x7d8b,	// (0x000461e4) main_cset_slider_pane_t7_ParamLimits

0x7db5,	// (0x0004620e) main_cset_slider_pane_t8_ParamLimits

0x7db5,	// (0x0004620e) main_cset_slider_pane_t8

0x7ddd,	// (0x00046236) main_cset_slider_pane_t9_ParamLimits

0x7ddd,	// (0x00046236) main_cset_slider_pane_t9

0x7e05,	// (0x0004625e) main_cset_slider_pane_t10_ParamLimits

0x7e05,	// (0x0004625e) main_cset_slider_pane_t10

0x7e2d,	// (0x00046286) main_cset_slider_pane_t11_ParamLimits

0x7e2d,	// (0x00046286) main_cset_slider_pane_t11

0x7e55,	// (0x000462ae) main_cset_slider_pane_t12_ParamLimits

0x7e55,	// (0x000462ae) main_cset_slider_pane_t12

0x7e72,	// (0x000462cb) main_cset_slider_pane_t13_ParamLimits

0x7e72,	// (0x000462cb) main_cset_slider_pane_t13

0xf99b,	// (0x0004ddf4) main_cset_slider_pane_t_ParamLimits

0xa12f,	// (0x00048588) bg_popup_sub_pane_cp011

0xd95d,	// (0x0004bdb6) main_cset_text_pane_g1

0xd965,	// (0x0004bdbe) main_cset_text_pane_t1

0xd973,	// (0x0004bdcc) main_cset_text_pane_t2

0xd981,	// (0x0004bdda) main_cset_text_pane_t3

0xd98f,	// (0x0004bde8) main_cset_text_pane_t4

0xd99d,	// (0x0004bdf6) main_cset_text_pane_t5

0xd9ab,	// (0x0004be04) main_cset_text_pane_t6

0xd9b9,	// (0x0004be12) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004de8b) main_cset_text_pane_t

0xa12f,	// (0x00048588) main_cam4_burst_pane

0xa12f,	// (0x00048588) main_cam5_pane

0x7b40,	// (0x00045f99) bg_button_pane_cp019

0x7b49,	// (0x00045fa2) bg_button_pane_cp020

0xd804,	// (0x0004bc5d) main_cset_slider_pane_g7_ParamLimits

0xd804,	// (0x0004bc5d) main_cset_slider_pane_g7

0xd810,	// (0x0004bc69) main_cset_slider_pane_g8_ParamLimits

0xd810,	// (0x0004bc69) main_cset_slider_pane_g8

0x7c96,	// (0x000460ef) main_cset_slider_pane_g9_ParamLimits

0x7c96,	// (0x000460ef) main_cset_slider_pane_g9

0x7ca2,	// (0x000460fb) main_cset_slider_pane_g10_ParamLimits

0x7ca2,	// (0x000460fb) main_cset_slider_pane_g10

0x7cae,	// (0x00046107) main_cset_slider_pane_g11_ParamLimits

0x7cae,	// (0x00046107) main_cset_slider_pane_g11

0x7cba,	// (0x00046113) main_cset_slider_pane_g12_ParamLimits

0x7cba,	// (0x00046113) main_cset_slider_pane_g12

0x7cc6,	// (0x0004611f) main_cset_slider_pane_g13_ParamLimits

0x7cc6,	// (0x0004611f) main_cset_slider_pane_g13

0x7cd2,	// (0x0004612b) main_cset_slider_pane_g14_ParamLimits

0x7cd2,	// (0x0004612b) main_cset_slider_pane_g14

0x7cde,	// (0x00046137) main_cset_slider_pane_g15_ParamLimits

0x7cde,	// (0x00046137) main_cset_slider_pane_g15

0xd856,	// (0x0004bcaf) main_cset_slider_pane_t14_ParamLimits

0xd856,	// (0x0004bcaf) main_cset_slider_pane_t14

0xd88f,	// (0x0004bce8) main_cset_slider_pane_t15_ParamLimits

0xd88f,	// (0x0004bce8) main_cset_slider_pane_t15

0x81e5,	// (0x0004663e) aid_cam4_burst_size_cell_ParamLimits

0x81e5,	// (0x0004663e) aid_cam4_burst_size_cell

0x8201,	// (0x0004665a) grid_cam4_burst_pane_ParamLimits

0x8201,	// (0x0004665a) grid_cam4_burst_pane

0x8233,	// (0x0004668c) linegrid_cam4_burst_pane_ParamLimits

0x8233,	// (0x0004668c) linegrid_cam4_burst_pane

0x8251,	// (0x000466aa) scroll_pane_cp30_ParamLimits

0x8251,	// (0x000466aa) scroll_pane_cp30

0x825d,	// (0x000466b6) cell_cam4_burst_pane_ParamLimits

0x825d,	// (0x000466b6) cell_cam4_burst_pane

0xd9c7,	// (0x0004be20) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c7,	// (0x0004be20) linegrid_cam4_burst_pane_g1

0x829d,	// (0x000466f6) linegrid_cam4_burst_pane_g2_ParamLimits

0x829d,	// (0x000466f6) linegrid_cam4_burst_pane_g2

0xd9d4,	// (0x0004be2d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d4,	// (0x0004be2d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004de9a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004de9a) linegrid_cam4_burst_pane_g

0x82ae,	// (0x00046707) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x82ae,	// (0x00046707) linegrid_cam4_burst_pane_g3_copy1

0xd9e1,	// (0x0004be3a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e1,	// (0x0004be3a) linegrid_cam4_burst_pane_g4

0x82c8,	// (0x00046721) linegrid_cam4_burst_pane_g5_ParamLimits

0x82c8,	// (0x00046721) linegrid_cam4_burst_pane_g5

0x82d9,	// (0x00046732) linegrid_cam4_burst_pane_g6_ParamLimits

0x82d9,	// (0x00046732) linegrid_cam4_burst_pane_g6

0xd9ee,	// (0x0004be47) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9ee,	// (0x0004be47) linegrid_cam4_burst_pane_g7

0x82f0,	// (0x00046749) cell_cam4_burst_pane_g1

0xda07,	// (0x0004be60) main_cam5_pane_t1_ParamLimits

0xda07,	// (0x0004be60) main_cam5_pane_t1

0xda19,	// (0x0004be72) main_cam5_pane_t2_ParamLimits

0xda19,	// (0x0004be72) main_cam5_pane_t2

0xda2b,	// (0x0004be84) main_cam5_pane_t3_ParamLimits

0xda2b,	// (0x0004be84) main_cam5_pane_t3

0xda3d,	// (0x0004be96) main_cam5_pane_t4_ParamLimits

0xda3d,	// (0x0004be96) main_cam5_pane_t4

0xda55,	// (0x0004beae) main_cam5_pane_t5_ParamLimits

0xda55,	// (0x0004beae) main_cam5_pane_t5

0xda69,	// (0x0004bec2) main_cam5_pane_t6_ParamLimits

0xda69,	// (0x0004bec2) main_cam5_pane_t6

0xda7d,	// (0x0004bed6) main_cam5_pane_t7_ParamLimits

0xda7d,	// (0x0004bed6) main_cam5_pane_t7

0xda8f,	// (0x0004bee8) main_cam5_pane_t8_ParamLimits

0xda8f,	// (0x0004bee8) main_cam5_pane_t8

0xdaad,	// (0x0004bf06) main_cam5_pane_t9_ParamLimits

0xdaad,	// (0x0004bf06) main_cam5_pane_t9

0xdabf,	// (0x0004bf18) main_cam5_pane_t10_ParamLimits

0xdabf,	// (0x0004bf18) main_cam5_pane_t10

0xdad1,	// (0x0004bf2a) main_cam5_pane_t11_ParamLimits

0xdad1,	// (0x0004bf2a) main_cam5_pane_t11

0xdae5,	// (0x0004bf3e) main_cam5_pane_t12_ParamLimits

0xdae5,	// (0x0004bf3e) main_cam5_pane_t12

0xdafc,	// (0x0004bf55) main_cam5_pane_t13_ParamLimits

0xdafc,	// (0x0004bf55) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004dea6) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004dea6) main_cam5_pane_t

0x2153,	// (0x000405ac) popup_scut_keymap_window_ParamLimits

0x2153,	// (0x000405ac) popup_scut_keymap_window

0x8303,	// (0x0004675c) aid_size_cell_brow_shortcut

0xb3ed,	// (0x00049846) bg_popup_window_pane_cp010

0x830f,	// (0x00046768) grid_scut_pane

0x831b,	// (0x00046774) cell_scut_pane_ParamLimits

0x831b,	// (0x00046774) cell_scut_pane

0x8336,	// (0x0004678f) cell_scut_pane_g1

0xdb1f,	// (0x0004bf78) cell_scut_pane_t1

0xdb2e,	// (0x0004bf87) cell_scut_pane_t2

0x833f,	// (0x00046798) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004dec1) cell_scut_pane_t

0x62fa,	// (0x00044753) main_mup3_pane_g8_ParamLimits

0x62fa,	// (0x00044753) main_mup3_pane_g8

0x7741,	// (0x00045b9a) area_vitu2_query_pane_ParamLimits

0x7741,	// (0x00045b9a) area_vitu2_query_pane

0x1029,	// (0x0003f482) input_focus_pane_cp08

0xdb3d,	// (0x0004bf96) area_vitu2_query_pane_g1

0x112a,	// (0x0003f583) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004dec8) area_vitu2_query_pane_g

0x834d,	// (0x000467a6) area_vitu2_query_pane_t1_ParamLimits

0x834d,	// (0x000467a6) area_vitu2_query_pane_t1

0x8361,	// (0x000467ba) area_vitu2_query_pane_t2_ParamLimits

0x8361,	// (0x000467ba) area_vitu2_query_pane_t2

0x113b,	// (0x0003f594) area_vitu2_query_pane_t3_ParamLimits

0x113b,	// (0x0003f594) area_vitu2_query_pane_t3

0x1163,	// (0x0003f5bc) area_vitu2_query_pane_t4_ParamLimits

0x1163,	// (0x0003f5bc) area_vitu2_query_pane_t4

0x118b,	// (0x0003f5e4) area_vitu2_query_pane_t5_ParamLimits

0x118b,	// (0x0003f5e4) area_vitu2_query_pane_t5

0x11b3,	// (0x0003f60c) area_vitu2_query_pane_t6_ParamLimits

0x11b3,	// (0x0003f60c) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004decd) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004decd) area_vitu2_query_pane_t

0x8375,	// (0x000467ce) bg_button_pane_cp018

0x8383,	// (0x000467dc) bg_button_pane_cp021

0x11ff,	// (0x0003f658) bg_button_pane_cp022

0x1210,	// (0x0003f669) input_focus_pane_cp09

0x47b3,	// (0x00042c0c) aid_size_touch_mv_arrow_left

0x47de,	// (0x00042c37) aid_size_touch_mv_arrow_right

0x7cf6,	// (0x0004614f) main_cset_slider_pane_g16_ParamLimits

0x7cf6,	// (0x0004614f) main_cset_slider_pane_g16

0x7d02,	// (0x0004615b) main_cset_slider_pane_g17_ParamLimits

0x7d02,	// (0x0004615b) main_cset_slider_pane_g17

0x82f0,	// (0x00046749) cell_cam4_burst_pane_g1_ParamLimits

0xa12f,	// (0x00048588) compa_mode_pane

0x7ef0,	// (0x00046349) popup_vtel_slider_window_g3_ParamLimits

0x7ef0,	// (0x00046349) popup_vtel_slider_window_g3

0x7f04,	// (0x0004635d) popup_vtel_slider_window_g4_ParamLimits

0x7f04,	// (0x0004635d) popup_vtel_slider_window_g4

0x7f18,	// (0x00046371) popup_vtel_slider_window_t1_ParamLimits

0x7f18,	// (0x00046371) popup_vtel_slider_window_t1

0xa12f,	// (0x00048588) main_cl_pane

0xc84e,	// (0x0004aca7) popup_imed_adjust2_window_ParamLimits

0xc822,	// (0x0004ac7b) bg_tb_trans_pane_cp05_ParamLimits

0xd184,	// (0x0004b5dd) popup_imed_adjust2_window_g1_ParamLimits

0xd193,	// (0x0004b5ec) popup_imed_adjust2_window_g2_ParamLimits

0xd193,	// (0x0004b5ec) popup_imed_adjust2_window_g2

0xd19f,	// (0x0004b5f8) popup_imed_adjust2_window_g3_ParamLimits

0xd19f,	// (0x0004b5f8) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004dc38) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004dc38) popup_imed_adjust2_window_g

0xd1ab,	// (0x0004b604) popup_imed_adjust2_window_t1_ParamLimits

0xd1c3,	// (0x0004b61c) slider_imed_adjust_pane_ParamLimits

0xd1d7,	// (0x0004b630) slider_imed_adjust_pane_g1_ParamLimits

0xd1e7,	// (0x0004b640) slider_imed_adjust_pane_g2_ParamLimits

0xd1f7,	// (0x0004b650) slider_imed_adjust_pane_g3_ParamLimits

0xd208,	// (0x0004b661) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004dc3f) slider_imed_adjust_pane_g_ParamLimits

0x7482,	// (0x000458db) aid_touch_area_cam4_ParamLimits

0x7482,	// (0x000458db) aid_touch_area_cam4

0x7492,	// (0x000458eb) battery_pane_cp01

0x7519,	// (0x00045972) main_camera4_pane_g6_ParamLimits

0x7519,	// (0x00045972) main_camera4_pane_g6

0x7537,	// (0x00045990) main_camera4_pane_t2_ParamLimits

0x7537,	// (0x00045990) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004dd42) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004dd42) main_camera4_pane_t

0x75ba,	// (0x00045a13) aid_touch_area_vid4_ParamLimits

0x75ba,	// (0x00045a13) aid_touch_area_vid4

0x75fa,	// (0x00045a53) main_video4_pane_g5_ParamLimits

0x75fa,	// (0x00045a53) main_video4_pane_g5

0x7620,	// (0x00045a79) vid4_progress_pane_ParamLimits

0x7620,	// (0x00045a79) vid4_progress_pane

0xd81c,	// (0x0004bc75) main_cset_slider_pane_g18_ParamLimits

0xd81c,	// (0x0004bc75) main_cset_slider_pane_g18

0xd9fb,	// (0x0004be54) cell_cam4_burst_pane_g2_ParamLimits

0xd9fb,	// (0x0004be54) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004dea1) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004dea1) cell_cam4_burst_pane_g

0x838f,	// (0x000467e8) bg_cl_pane_ParamLimits

0x838f,	// (0x000467e8) bg_cl_pane

0x839b,	// (0x000467f4) cl_header_pane_ParamLimits

0x839b,	// (0x000467f4) cl_header_pane

0x83a7,	// (0x00046800) cl_listscroll_pane_ParamLimits

0x83a7,	// (0x00046800) cl_listscroll_pane

0xdb5f,	// (0x0004bfb8) bg_cl_pane_g1

0xdb67,	// (0x0004bfc0) bg_cl_pane_g2

0xdb6f,	// (0x0004bfc8) bg_cl_pane_g3

0xdb77,	// (0x0004bfd0) bg_cl_pane_g4

0xdb7f,	// (0x0004bfd8) bg_cl_pane_g5

0xdb87,	// (0x0004bfe0) bg_cl_pane_g6

0xdb8f,	// (0x0004bfe8) bg_cl_pane_g7

0xdb97,	// (0x0004bff0) bg_cl_pane_g8

0xdb9f,	// (0x0004bff8) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004dedc) bg_cl_pane_g

0x83b3,	// (0x0004680c) aid_height_cl_leading_ParamLimits

0x83b3,	// (0x0004680c) aid_height_cl_leading

0x83bf,	// (0x00046818) aid_height_cl_text_ParamLimits

0x83bf,	// (0x00046818) aid_height_cl_text

0x2194,	// (0x000405ed) bg_cl_header_pane_ParamLimits

0x2194,	// (0x000405ed) bg_cl_header_pane

0x83d7,	// (0x00046830) cl_header_pane_g1_ParamLimits

0x83d7,	// (0x00046830) cl_header_pane_g1

0x83e4,	// (0x0004683d) cl_header_pane_t1_ParamLimits

0x83e4,	// (0x0004683d) cl_header_pane_t1

0xdba7,	// (0x0004c000) cl_list_pane

0xd7ef,	// (0x0004bc48) hc_scroll_pane_cp01

0xacf2,	// (0x0004914b) bg_cl_header_pane_g1

0xd6d1,	// (0x0004bb2a) bg_cl_header_pane_g2

0xad12,	// (0x0004916b) bg_cl_header_pane_g3

0xd6e1,	// (0x0004bb3a) bg_cl_header_pane_g4

0xd6d9,	// (0x0004bb32) bg_cl_header_pane_g5

0xd916,	// (0x0004bd6f) bg_cl_header_pane_g6

0xd6f9,	// (0x0004bb52) bg_cl_header_pane_g7

0xd701,	// (0x0004bb5a) bg_cl_header_pane_g8

0xd6f1,	// (0x0004bb4a) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004deef) bg_cl_header_pane_g

0x83f6,	// (0x0004684f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x83f6,	// (0x0004684f) hc_cl_list_double_graphic_heading_pane

0x8406,	// (0x0004685f) hc_cl_list_single_graphic_pane_ParamLimits

0x8406,	// (0x0004685f) hc_cl_list_single_graphic_pane

0x8418,	// (0x00046871) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8418,	// (0x00046871) hc_cl_list_single_graphic_pane_g1

0x8424,	// (0x0004687d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8424,	// (0x0004687d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004df02) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004df02) hc_cl_list_single_graphic_pane_g

0x8438,	// (0x00046891) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8438,	// (0x00046891) hc_cl_list_single_graphic_pane_t1

0x8418,	// (0x00046871) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8418,	// (0x00046871) hc_cl_list_double_graphic_heading_pane_g1

0x844d,	// (0x000468a6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x844d,	// (0x000468a6) hc_cl_list_double_graphic_heading_pane_g2

0x8461,	// (0x000468ba) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8461,	// (0x000468ba) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004df07) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004df07) hc_cl_list_double_graphic_heading_pane_g

0x8475,	// (0x000468ce) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8475,	// (0x000468ce) hc_cl_list_double_graphic_heading_pane_t1

0x848a,	// (0x000468e3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x848a,	// (0x000468e3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004df0e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004df0e) hc_cl_list_double_graphic_heading_pane_t

0x84a7,	// (0x00046900) vid4_progress_pane_g1

0x84b9,	// (0x00046912) vid4_progress_pane_g2

0x4ea7,	// (0x00043300) vid4_progress_pane_g3

0x84cb,	// (0x00046924) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004df13) vid4_progress_pane_g

0x84e9,	// (0x00046942) vid4_progress_pane_t1

0x84fe,	// (0x00046957) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004df1e) vid4_progress_pane_t

0x8529,	// (0x00046982) wait_bar_pane_cp07

0xca60,	// (0x0004aeb9) blid_firmament_pane_ParamLimits

0xcaa3,	// (0x0004aefc) popup_blid_sat_info2_window_g1

0xcac7,	// (0x0004af20) popup_blid_sat_info2_window_t3

0xcad5,	// (0x0004af2e) popup_blid_sat_info2_window_t4

0xcae3,	// (0x0004af3c) popup_blid_sat_info2_window_t5

0xcaf1,	// (0x0004af4a) popup_blid_sat_info2_window_t6

0xcb01,	// (0x0004af5a) popup_blid_sat_info2_window_t7

0xcb0f,	// (0x0004af68) popup_blid_sat_info2_window_t8

0xcb1d,	// (0x0004af76) popup_blid_sat_info2_window_t9

0xcb2b,	// (0x0004af84) popup_blid_sat_info2_window_t10

0xcc07,	// (0x0004b060) aid_firma_cardinal_ParamLimits

0xcc1b,	// (0x0004b074) blid_firmament_pane_t1_ParamLimits

0xcc32,	// (0x0004b08b) blid_firmament_pane_t2_ParamLimits

0xcc49,	// (0x0004b0a2) blid_firmament_pane_t3_ParamLimits

0xcc60,	// (0x0004b0b9) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0004db2c) blid_firmament_pane_t_ParamLimits

0xcc77,	// (0x0004b0d0) blid_sat_info_pane_ParamLimits

0xa986,	// (0x00048ddf) main_cam_set_pane_ParamLimits

0x6a9e,	// (0x00044ef7) aid_size_cell_colour_35_ParamLimits

0x6ab8,	// (0x00044f11) aid_size_cell_colour_112_ParamLimits

0x6acf,	// (0x00044f28) aid_size_cell_effect_ParamLimits

0xa986,	// (0x00048ddf) bg_tb_trans_pane_cp02_ParamLimits

0xbae8,	// (0x00049f41) heading_imed_pane_ParamLimits

0x6ae9,	// (0x00044f42) listscroll_imed_pane_ParamLimits

0xbe44,	// (0x0004a29d) popup_call2_audio_first_window_g5_ParamLimits

0xbe44,	// (0x0004a29d) popup_call2_audio_first_window_g5

0x71fb,	// (0x00045654) aid_size_touch_image3_arrow_left_ParamLimits

0x71fb,	// (0x00045654) aid_size_touch_image3_arrow_left

0x7211,	// (0x0004566a) aid_size_touch_image3_arrow_right_ParamLimits

0x7211,	// (0x0004566a) aid_size_touch_image3_arrow_right

0x8514,	// (0x0004696d) vid4_progress_pane_t3

0x6d97,	// (0x000451f0) main_hwr_training_symbol_option_pane_ParamLimits

0x6d97,	// (0x000451f0) main_hwr_training_symbol_option_pane

0xd4a9,	// (0x0004b902) popup_hwr_training_preview_window_ParamLimits

0xd4a9,	// (0x0004b902) popup_hwr_training_preview_window

0x6df8,	// (0x00045251) hwr_training_navi_pane_g5_ParamLimits

0x6df8,	// (0x00045251) hwr_training_navi_pane_g5

0xd6bf,	// (0x0004bb18) popup_char_count_window

0x2194,	// (0x000405ed) bg_popup_sub_pane_cp20_ParamLimits

0x8012,	// (0x0004646b) list_vitu2_match_list_pane_ParamLimits

0x801e,	// (0x00046477) vitu2_page_scroll_pane_ParamLimits

0x801e,	// (0x00046477) vitu2_page_scroll_pane

0xdbb0,	// (0x0004c009) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbb0,	// (0x0004c009) list_single_hwr_training_symbol_option_pane

0xdbc3,	// (0x0004c01c) list_single_hwr_training_symbol_option_pane_g1

0xdbcb,	// (0x0004c024) list_single_hwr_training_symbol_option_pane_t1

0xdbd9,	// (0x0004c032) bg_button_pane_cp023

0xdbe2,	// (0x0004c03b) bg_button_pane_cp024

0x8546,	// (0x0004699f) vitu2_page_scroll_pane_g1

0x854e,	// (0x000469a7) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004df25) vitu2_page_scroll_pane_g

0x8558,	// (0x000469b1) vitu2_page_scroll_pane_t1

0xc9c0,	// (0x0004ae19) popup_char_count_window_g1

0xdc15,	// (0x0004c06e) popup_char_count_window_g2

0xdc1e,	// (0x0004c077) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004df2a) popup_char_count_window_g

0xdc27,	// (0x0004c080) popup_char_count_window_t1

0xa12f,	// (0x00048588) main_vded2_pane

0xd170,	// (0x0004b5c9) aid_size_cell_imed_line

0xd17a,	// (0x0004b5d3) grid_imed_line_width_pane

0x7694,	// (0x00045aed) vid4_indicators_pane_g4

0xdc35,	// (0x0004c08e) cell_imed_line_width_pane_ParamLimits

0xdc35,	// (0x0004c08e) cell_imed_line_width_pane

0xdc4b,	// (0x0004c0a4) cell_imed_line_width_pane_g1

0xcb7b,	// (0x0004afd4) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004df31) cell_imed_line_width_pane_g

0x8567,	// (0x000469c0) main_vded2_pane_g1_ParamLimits

0x8567,	// (0x000469c0) main_vded2_pane_g1

0x8576,	// (0x000469cf) main_vded2_pane_g2_ParamLimits

0x8576,	// (0x000469cf) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004df36) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004df36) main_vded2_pane_g

0x8584,	// (0x000469dd) vded2_slider_pane_ParamLimits

0x8584,	// (0x000469dd) vded2_slider_pane

0x8591,	// (0x000469ea) aid_size_touch_vded2_end

0x859b,	// (0x000469f4) aid_size_touch_vded2_playhead

0xdc54,	// (0x0004c0ad) aid_size_touch_vded2_start

0xdc5c,	// (0x0004c0b5) vded2_slider_bg_pane

0xdc65,	// (0x0004c0be) vded2_slider_pane_g1

0xdc6e,	// (0x0004c0c7) vded2_slider_pane_g2

0x85a3,	// (0x000469fc) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004df3b) vded2_slider_pane_g

0xd3f0,	// (0x0004b849) vded2_slider_bg_pane_g1

0xd3f9,	// (0x0004b852) vded2_slider_bg_pane_g2

0xd402,	// (0x0004b85b) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0004dbfc) vded2_slider_bg_pane_g

0x4ebf,	// (0x00043318) aid_postcard_touch_down_pane_ParamLimits

0x4ebf,	// (0x00043318) aid_postcard_touch_down_pane

0x4ecf,	// (0x00043328) aid_postcard_touch_up_pane_ParamLimits

0x4ecf,	// (0x00043328) aid_postcard_touch_up_pane

0xa12f,	// (0x00048588) main_blid2_pane

0xc830,	// (0x0004ac89) popup_blid2_search_window

0xa12f,	// (0x00048588) blid2_gps_pane

0xa12f,	// (0x00048588) blid2_navig_pane

0xa12f,	// (0x00048588) blid2_search_pane

0xa12f,	// (0x00048588) blid2_tripm_pane

0x85ac,	// (0x00046a05) blid2_search_pane_g1_ParamLimits

0x85ac,	// (0x00046a05) blid2_search_pane_g1

0x85b8,	// (0x00046a11) blid2_search_pane_t1_ParamLimits

0x85b8,	// (0x00046a11) blid2_search_pane_t1

0x85ca,	// (0x00046a23) aid_size_cell_blid2_gps_ParamLimits

0x85ca,	// (0x00046a23) aid_size_cell_blid2_gps

0x85da,	// (0x00046a33) blid2_gps_pane_g1_ParamLimits

0x85da,	// (0x00046a33) blid2_gps_pane_g1

0x85e6,	// (0x00046a3f) grid_blid2_satellite_pane_ParamLimits

0x85e6,	// (0x00046a3f) grid_blid2_satellite_pane

0x85f4,	// (0x00046a4d) blid2_navig_pane_g1_ParamLimits

0x85f4,	// (0x00046a4d) blid2_navig_pane_g1

0x8600,	// (0x00046a59) blid2_navig_pane_t1_ParamLimits

0x8600,	// (0x00046a59) blid2_navig_pane_t1

0x8612,	// (0x00046a6b) blid2_navig_pane_t2_ParamLimits

0x8612,	// (0x00046a6b) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0004df42) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0004df42) blid2_navig_pane_t

0x8624,	// (0x00046a7d) blid2_navig_ring_pane_ParamLimits

0x8624,	// (0x00046a7d) blid2_navig_ring_pane

0x8634,	// (0x00046a8d) blid2_speed_pane_ParamLimits

0x8634,	// (0x00046a8d) blid2_speed_pane

0x8640,	// (0x00046a99) blid2_tripm_pane_g1_ParamLimits

0x8640,	// (0x00046a99) blid2_tripm_pane_g1

0x8650,	// (0x00046aa9) blid2_tripm_pane_g2_ParamLimits

0x8650,	// (0x00046aa9) blid2_tripm_pane_g2

0x865c,	// (0x00046ab5) blid2_tripm_pane_g3_ParamLimits

0x865c,	// (0x00046ab5) blid2_tripm_pane_g3

0x8668,	// (0x00046ac1) blid2_tripm_pane_g4_ParamLimits

0x8668,	// (0x00046ac1) blid2_tripm_pane_g4

0x8674,	// (0x00046acd) blid2_tripm_pane_g5_ParamLimits

0x8674,	// (0x00046acd) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0004df47) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0004df47) blid2_tripm_pane_g

0x8690,	// (0x00046ae9) blid2_tripm_pane_t1_ParamLimits

0x8690,	// (0x00046ae9) blid2_tripm_pane_t1

0x86a2,	// (0x00046afb) blid2_tripm_pane_t2_ParamLimits

0x86a2,	// (0x00046afb) blid2_tripm_pane_t2

0x86b4,	// (0x00046b0d) blid2_tripm_pane_t3_ParamLimits

0x86b4,	// (0x00046b0d) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0004df54) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0004df54) blid2_tripm_pane_t

0x86e6,	// (0x00046b3f) cell_blid2_satellite_pane_ParamLimits

0x86e6,	// (0x00046b3f) cell_blid2_satellite_pane

0x8704,	// (0x00046b5d) cell_blid2_satellite_pane_g1

0xdc76,	// (0x0004c0cf) cell_blid2_satellite_pane_t1

0xcc87,	// (0x0004b0e0) blid2_speed_pane_g1

0xdc84,	// (0x0004c0dd) blid2_speed_pane_t1

0xdc92,	// (0x0004c0eb) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0004df5d) blid2_speed_pane_t

0xcc87,	// (0x0004b0e0) blid2_navig_ring_pane_g1

0x870d,	// (0x00046b66) blid2_navig_ring_pane_g2

0x8715,	// (0x00046b6e) blid2_navig_ring_pane_g3

0x871d,	// (0x00046b76) blid2_navig_ring_pane_g4

0x8725,	// (0x00046b7e) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0004df62) blid2_navig_ring_pane_g

0xa12f,	// (0x00048588) bg_popup_window_pane_cp011

0xdca0,	// (0x0004c0f9) popup_blid2_search_window_g1

0xdca8,	// (0x0004c101) popup_blid2_search_window_t1

0xdcb6,	// (0x0004c10f) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0004df6d) popup_blid2_search_window_t

0xac01,	// (0x0004905a) main_browser_pane_g1

0xa8bb,	// (0x00048d14) main_browser_pane_ParamLimits

0xa986,	// (0x00048ddf) bg_button_pane_cp011_ParamLimits

0x7907,	// (0x00045d60) cell_vitu2_function_pane_g1_ParamLimits

0xc822,	// (0x0004ac7b) bg_popup_sub_pane_cp22_ParamLimits

0x1029,	// (0x0003f482) input_focus_pane_cp08_ParamLimits

0x818e,	// (0x000465e7) popup_vitu2_query_button_pane_ParamLimits

0x818e,	// (0x000465e7) popup_vitu2_query_button_pane

0x1040,	// (0x0003f499) popup_vitu2_query_input_button_pane

0xd951,	// (0x0004bdaa) popup_vitu2_query_window_g1_ParamLimits

0x104a,	// (0x0003f4a3) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004de75) popup_vitu2_query_window_g_ParamLimits

0xa12f,	// (0x00048588) bg_button_pane_cp026

0x872d,	// (0x00046b86) popup_vitu2_query_input_button_pane_g1

0xa12f,	// (0x00048588) bg_button_pane_cp025

0xdcc4,	// (0x0004c11d) popup_vitu2_query_button_pane_t1

0x6060,	// (0x000444b9) main_mp3_pane_t6

0x6070,	// (0x000444c9) popup_slider_window_cp01

0x756f,	// (0x000459c8) cam4_battery_pane

0x764d,	// (0x00045aa6) cam4_battery_pane_cp02

0x849f,	// (0x000468f8) cam4_battery_pane_cp01

0x849f,	// (0x000468f8) cam4_battery_pane_cp03

0xcc87,	// (0x0004b0e0) cam4_battery_pane_g1

0xdb49,	// (0x0004bfa2) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0004df72) cam4_battery_pane_g

0xcb39,	// (0x0004af92) popup_blid_sat_info2_window_t11

0x47b3,	// (0x00042c0c) aid_size_touch_mv_arrow_left_ParamLimits

0x47de,	// (0x00042c37) aid_size_touch_mv_arrow_right_ParamLimits

0xb34d,	// (0x000497a6) navi_pane_g1_ParamLimits

0x481d,	// (0x00042c76) navi_pane_g2_ParamLimits

0x484b,	// (0x00042ca4) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004d83e) navi_pane_g_ParamLimits

0x48a5,	// (0x00042cfe) navi_pane_mv_t1_ParamLimits

0x6af5,	// (0x00044f4e) grid_imed_effect_pane_ParamLimits

0x32c9,	// (0x00041722) aid_placing_vt_slider_lsc

0xab4c,	// (0x00048fa5) aid_placing_vt_slider_prt

0xa986,	// (0x00048ddf) bg_tb_trans_pane_cp01_ParamLimits

0xcdd7,	// (0x0004b230) popup_image_details_window_g1_ParamLimits

0xcdea,	// (0x0004b243) popup_image_details_window_g2_ParamLimits

0xcdff,	// (0x0004b258) popup_image_details_window_g3_ParamLimits

0xcdff,	// (0x0004b258) popup_image_details_window_g3

0xf718,	// (0x0004db71) popup_image_details_window_g_ParamLimits

0xce13,	// (0x0004b26c) popup_image_details_window_t1_ParamLimits

0xce25,	// (0x0004b27e) popup_image_details_window_t2_ParamLimits

0xce3e,	// (0x0004b297) popup_image_details_window_t3_ParamLimits

0xce52,	// (0x0004b2ab) popup_image_details_window_t4_ParamLimits

0xce6d,	// (0x0004b2c6) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004db78) popup_image_details_window_t_ParamLimits

0x83cb,	// (0x00046824) cl_header_name_pane_ParamLimits

0x83cb,	// (0x00046824) cl_header_name_pane

0x8735,	// (0x00046b8e) cl_header_name_pane_t1_ParamLimits

0x8735,	// (0x00046b8e) cl_header_name_pane_t1

0x874c,	// (0x00046ba5) cl_header_name_pane_t2_ParamLimits

0x874c,	// (0x00046ba5) cl_header_name_pane_t2

0x8776,	// (0x00046bcf) cl_header_name_pane_t3_ParamLimits

0x8776,	// (0x00046bcf) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0004df77) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0004df77) cl_header_name_pane_t

0x4876,	// (0x00042ccf) navi_pane_mv_g2_ParamLimits

0xd699,	// (0x0004baf2) field_vitu2_entry_pane_g1_ParamLimits

0xd6a5,	// (0x0004bafe) field_vitu2_entry_pane_g2_ParamLimits

0xd6b1,	// (0x0004bb0a) field_vitu2_entry_pane_g3_ParamLimits

0xd6b1,	// (0x0004bb0a) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004dd74) field_vitu2_entry_pane_g_ParamLimits

0x7892,	// (0x00045ceb) cell_vitu2_itu_pane_g1_ParamLimits

0x78a2,	// (0x00045cfb) cell_vitu2_itu_pane_g2_ParamLimits

0x78a2,	// (0x00045cfb) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004dd80) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004dd80) cell_vitu2_itu_pane_g

0xa986,	// (0x00048ddf) bg_vkb2_func_pane_cp05_ParamLimits

0xa986,	// (0x00048ddf) bg_vkb2_func_pane_cp05

0xa986,	// (0x00048ddf) bg_vkb2_func_pane_cp03

0xa986,	// (0x00048ddf) bg_vkb2_func_pane_cp04

0xa986,	// (0x00048ddf) bg_vkb2_func_pane_cp10_ParamLimits

0xa986,	// (0x00048ddf) bg_vkb2_func_pane_cp10

0x11ff,	// (0x0003f658) bg_vkb2_func_pane_cp08

0x8375,	// (0x000467ce) bg_vkb2_func_pane_cp06

0x8383,	// (0x000467dc) bg_vkb2_func_pane_cp07

0xdbeb,	// (0x0004c044) bg_vkb2_func_pane_cp11_ParamLimits

0xdbeb,	// (0x0004c044) bg_vkb2_func_pane_cp11

0xdc00,	// (0x0004c059) bg_vkb2_func_pane_cp12_ParamLimits

0xdc00,	// (0x0004c059) bg_vkb2_func_pane_cp12

0xa12f,	// (0x00048588) bg_vkb2_func_pane_cp09

0xd6d1,	// (0x0004bb2a) bg_vkb2_func_pane_g1

0xad12,	// (0x0004916b) bg_vkb2_func_pane_g2

0xd6d9,	// (0x0004bb32) bg_vkb2_func_pane_g3

0xd6e1,	// (0x0004bb3a) bg_vkb2_func_pane_g4

0xd916,	// (0x0004bd6f) bg_vkb2_func_pane_g5

0xd6f9,	// (0x0004bb52) bg_vkb2_func_pane_g6

0xd701,	// (0x0004bb5a) bg_vkb2_func_pane_g7

0xd6f1,	// (0x0004bb4a) bg_vkb2_func_pane_g8

0xacf2,	// (0x0004914b) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0004df7e) bg_vkb2_func_pane_g

0x8682,	// (0x00046adb) blid2_tripm_pane_g6_ParamLimits

0x8682,	// (0x00046adb) blid2_tripm_pane_g6

0xd561,	// (0x0004b9ba) mp4_progress_pane_g1

0x86da,	// (0x00046b33) blid2_tripm_values_pane_ParamLimits

0x86da,	// (0x00046b33) blid2_tripm_values_pane

0x879b,	// (0x00046bf4) blid2_tripm_values_pane_t1

0x87a9,	// (0x00046c02) blid2_tripm_values_pane_t2

0x87b7,	// (0x00046c10) blid2_tripm_values_pane_t3

0x87c5,	// (0x00046c1e) blid2_tripm_values_pane_t4

0x87d3,	// (0x00046c2c) blid2_tripm_values_pane_t5

0x87e1,	// (0x00046c3a) blid2_tripm_values_pane_t6

0x87ef,	// (0x00046c48) blid2_tripm_values_pane_t7

0x87fd,	// (0x00046c56) blid2_tripm_values_pane_t8

0x880b,	// (0x00046c64) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0004df91) blid2_tripm_values_pane_t

0x3307,	// (0x00041760) call_video_pane_t1_ParamLimits

0x3324,	// (0x0004177d) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004d6c7) call_video_pane_t_ParamLimits

0x0da9,	// (0x0003f202) msg_header_pane_g1_ParamLimits

0xb56a,	// (0x000499c3) msg_header_pane_g2_ParamLimits

0xb56a,	// (0x000499c3) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004d8e1) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004d8e1) msg_header_pane_g

0xa8bb,	// (0x00048d14) main_clock2_pane_ParamLimits

0x6884,	// (0x00044cdd) grid_clock2_toolbar_pane_ParamLimits

0x6884,	// (0x00044cdd) grid_clock2_toolbar_pane

0x6884,	// (0x00044cdd) listscroll_clock2_pane_ParamLimits

0x6884,	// (0x00044cdd) listscroll_clock2_pane

0x692c,	// (0x00044d85) main_clock2_pane_t3_ParamLimits

0x692c,	// (0x00044d85) main_clock2_pane_t3

0x693e,	// (0x00044d97) main_clock2_pane_t4_ParamLimits

0x693e,	// (0x00044d97) main_clock2_pane_t4

0xdcd2,	// (0x0004c12b) cell_clock2_toolbar_pane

0xdcda,	// (0x0004c133) cell_clock2_toolbar_pane_cp01

0xdcda,	// (0x0004c133) cell_clock2_toolbar_pane_cp02

0xdce2,	// (0x0004c13b) cell_clock2_toolbar_pane_cp03

0xdcea,	// (0x0004c143) list_clock2_pane

0xb2b3,	// (0x0004970c) scroll_pane_cp10

0xdcf2,	// (0x0004c14b) list_single_clock2_pane_ParamLimits

0xdcf2,	// (0x0004c14b) list_single_clock2_pane

0xb3ed,	// (0x00049846) list_highlight_pane_cp08

0xdcff,	// (0x0004c158) list_single_clock2_pane_t1

0xdd0d,	// (0x0004c166) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0004dfa4) list_single_clock2_pane_t

0xa12f,	// (0x00048588) bg_button_pane_cp10

0xdd1b,	// (0x0004c174) cell_clock2_toolbar_pane_g1

0x4e21,	// (0x0004327a) aid_main_viewer_pane_g1_ParamLimits

0x4e21,	// (0x0004327a) aid_main_viewer_pane_g1

0x4e2d,	// (0x00043286) aid_main_viewer_pane_g2_ParamLimits

0x4e2d,	// (0x00043286) aid_main_viewer_pane_g2

0x4e39,	// (0x00043292) aid_main_viewer_pane_g3_ParamLimits

0x4e39,	// (0x00043292) aid_main_viewer_pane_g3

0x4e4a,	// (0x000432a3) aid_main_viewer_pane_g4_ParamLimits

0x4e4a,	// (0x000432a3) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004d8f2) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004d8f2) aid_main_viewer_pane_g

0x55d4,	// (0x00043a2d) main_calc_pane_ParamLimits

0x55e1,	// (0x00043a3a) main_dialer2_pane_ParamLimits

0xa12f,	// (0x00048588) main_cam6_pane

0xa12f,	// (0x00048588) main_vid6_pane

0x6890,	// (0x00044ce9) listscroll_gen_pane_cp06_ParamLimits

0x6890,	// (0x00044ce9) listscroll_gen_pane_cp06

0x6950,	// (0x00044da9) main_clock2_pane_t5_ParamLimits

0x6950,	// (0x00044da9) main_clock2_pane_t5

0x699f,	// (0x00044df8) aid_call2_pane_cp10_ParamLimits

0x69b1,	// (0x00044e0a) aid_call_pane_cp10_ParamLimits

0xb322,	// (0x0004977b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb322,	// (0x0004977b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x69c3,	// (0x00044e1c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x69c3,	// (0x00044e1c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb322,	// (0x0004977b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004dc2d) popup_clock_analogue_window_cp10_g_ParamLimits

0x69d5,	// (0x00044e2e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x71a8,	// (0x00045601) cell_dialer2_keypad_pane_g2_ParamLimits

0x71a8,	// (0x00045601) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004dd13) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004dd13) cell_dialer2_keypad_pane_g

0x71c4,	// (0x0004561d) cell_dialer2_keypad_pane_t1

0x7be4,	// (0x0004603d) main_cset_text2_pane_ParamLimits

0x7be4,	// (0x0004603d) main_cset_text2_pane

0xdb3d,	// (0x0004bf96) area_vitu2_query_pane_g1_ParamLimits

0x112a,	// (0x0003f583) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004dec8) area_vitu2_query_pane_g_ParamLimits

0x11db,	// (0x0003f634) area_vitu2_query_pane_t7_ParamLimits

0x11db,	// (0x0003f634) area_vitu2_query_pane_t7

0x8375,	// (0x000467ce) bg_button_pane_cp018_ParamLimits

0x8383,	// (0x000467dc) bg_button_pane_cp021_ParamLimits

0x11ff,	// (0x0003f658) bg_button_pane_cp022_ParamLimits

0x11ff,	// (0x0003f658) bg_vkb2_func_pane_cp08_ParamLimits

0x8375,	// (0x000467ce) bg_vkb2_func_pane_cp06_ParamLimits

0x8383,	// (0x000467dc) bg_vkb2_func_pane_cp07_ParamLimits

0x1210,	// (0x0003f669) input_focus_pane_cp09_ParamLimits

0x8819,	// (0x00046c72) cam6_autofocus_pane_ParamLimits

0x8819,	// (0x00046c72) cam6_autofocus_pane

0x883b,	// (0x00046c94) cam6_image_uncrop_pane_ParamLimits

0x883b,	// (0x00046c94) cam6_image_uncrop_pane

0x8868,	// (0x00046cc1) cam6_indi_pane_ParamLimits

0x8868,	// (0x00046cc1) cam6_indi_pane

0x8882,	// (0x00046cdb) cam6_mode_pane_ParamLimits

0x8882,	// (0x00046cdb) cam6_mode_pane

0x8896,	// (0x00046cef) cam6_timer_pane_ParamLimits

0x8896,	// (0x00046cef) cam6_timer_pane

0x88a2,	// (0x00046cfb) cam6_zoom_pane_ParamLimits

0x88a2,	// (0x00046cfb) cam6_zoom_pane

0x88be,	// (0x00046d17) cam6_mode_pane_g1_ParamLimits

0x88be,	// (0x00046d17) cam6_mode_pane_g1

0x88ca,	// (0x00046d23) cam6_mode_pane_g2_ParamLimits

0x88ca,	// (0x00046d23) cam6_mode_pane_g2

0x88d6,	// (0x00046d2f) cam6_mode_pane_g3_ParamLimits

0x88d6,	// (0x00046d2f) cam6_mode_pane_g3

0x88e2,	// (0x00046d3b) cam6_mode_pane_g4_ParamLimits

0x88e2,	// (0x00046d3b) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0004dfa9) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0004dfa9) cam6_mode_pane_g

0xd5a7,	// (0x0004ba00) bg_tb_trans_pane_cp08_ParamLimits

0xd5a7,	// (0x0004ba00) bg_tb_trans_pane_cp08

0xdd23,	// (0x0004c17c) cam6_battery_pane_ParamLimits

0xdd23,	// (0x0004c17c) cam6_battery_pane

0xdd39,	// (0x0004c192) cam6_indi_pane_g1_ParamLimits

0xdd39,	// (0x0004c192) cam6_indi_pane_g1

0xdd4b,	// (0x0004c1a4) cam6_indi_pane_g2_ParamLimits

0xdd4b,	// (0x0004c1a4) cam6_indi_pane_g2

0xdd5d,	// (0x0004c1b6) cam6_indi_pane_g3_ParamLimits

0xdd5d,	// (0x0004c1b6) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0004dfb2) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0004dfb2) cam6_indi_pane_g

0xdd6f,	// (0x0004c1c8) cam6_indi_pane_t1_ParamLimits

0xdd6f,	// (0x0004c1c8) cam6_indi_pane_t1

0x76c9,	// (0x00045b22) cam6_autofocus_pane_g1

0x76d1,	// (0x00045b2a) cam6_autofocus_pane_g2

0x76d9,	// (0x00045b32) cam6_autofocus_pane_g3

0x76e1,	// (0x00045b3a) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0004dfb9) cam6_autofocus_pane_g

0xdd95,	// (0x0004c1ee) cam6_timer_pane_g1

0xdd9d,	// (0x0004c1f6) cam6_timer_pane_t1

0xddab,	// (0x0004c204) cam6_zoom_cont_pane

0xddb3,	// (0x0004c20c) cam6_zoom_pane_g1

0xddbb,	// (0x0004c214) cam6_zoom_pane_g2

0x88ee,	// (0x00046d47) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0004dfc2) cam6_zoom_pane_g

0xcc87,	// (0x0004b0e0) cam6_battery_pane_g1

0xcc87,	// (0x0004b0e0) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0004db35) cam6_battery_pane_g

0xddc3,	// (0x0004c21c) cam6_zoom_cont_pane_g1

0xddcc,	// (0x0004c225) cam6_zoom_cont_pane_g2

0xddd5,	// (0x0004c22e) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0004dfc9) cam6_zoom_cont_pane_g

0x890b,	// (0x00046d64) cam6_mode_pane_cp_ParamLimits

0x890b,	// (0x00046d64) cam6_mode_pane_cp

0x88a2,	// (0x00046cfb) cam6_zoom_pane_cp_ParamLimits

0x88a2,	// (0x00046cfb) cam6_zoom_pane_cp

0x891f,	// (0x00046d78) vid6_image_uncrop_cif_pane_ParamLimits

0x891f,	// (0x00046d78) vid6_image_uncrop_cif_pane

0x894b,	// (0x00046da4) vid6_image_uncrop_nhd_pane_ParamLimits

0x894b,	// (0x00046da4) vid6_image_uncrop_nhd_pane

0x883b,	// (0x00046c94) vid6_image_uncrop_vga_pane_ParamLimits

0x883b,	// (0x00046c94) vid6_image_uncrop_vga_pane

0x896a,	// (0x00046dc3) vid6_image_uncrop_wvga_pane_ParamLimits

0x896a,	// (0x00046dc3) vid6_image_uncrop_wvga_pane

0x8989,	// (0x00046de2) vid6_indi_pane_ParamLimits

0x8989,	// (0x00046de2) vid6_indi_pane

0xd5a7,	// (0x0004ba00) bg_tb_trans_pane_cp09_ParamLimits

0xd5a7,	// (0x0004ba00) bg_tb_trans_pane_cp09

0xdded,	// (0x0004c246) cam6_battery_pane_cp_ParamLimits

0xdded,	// (0x0004c246) cam6_battery_pane_cp

0xddf9,	// (0x0004c252) vid6_indi_pane_g1_ParamLimits

0xddf9,	// (0x0004c252) vid6_indi_pane_g1

0xde0b,	// (0x0004c264) vid6_indi_pane_g2_ParamLimits

0xde0b,	// (0x0004c264) vid6_indi_pane_g2

0xde1d,	// (0x0004c276) vid6_indi_pane_g3_ParamLimits

0xde1d,	// (0x0004c276) vid6_indi_pane_g3

0xde34,	// (0x0004c28d) vid6_indi_pane_g4_ParamLimits

0xde34,	// (0x0004c28d) vid6_indi_pane_g4

0xde4b,	// (0x0004c2a4) vid6_indi_pane_g5_ParamLimits

0xde4b,	// (0x0004c2a4) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0004dfd0) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0004dfd0) vid6_indi_pane_g

0xde65,	// (0x0004c2be) vid6_indi_pane_t1_ParamLimits

0xde65,	// (0x0004c2be) vid6_indi_pane_t1

0xde7b,	// (0x0004c2d4) vid6_indi_pane_t2_ParamLimits

0xde7b,	// (0x0004c2d4) vid6_indi_pane_t2

0xdea3,	// (0x0004c2fc) vid6_indi_pane_t3_ParamLimits

0xdea3,	// (0x0004c2fc) vid6_indi_pane_t3

0xdecb,	// (0x0004c324) vid6_indi_pane_t4_ParamLimits

0xdecb,	// (0x0004c324) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0004dfdb) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0004dfdb) vid6_indi_pane_t

0xdeef,	// (0x0004c348) wait_bar_pane_cp08

0x89ae,	// (0x00046e07) main_cset_text2_pane_t1_ParamLimits

0x89ae,	// (0x00046e07) main_cset_text2_pane_t1

0x88f6,	// (0x00046d4f) listscroll_gen_pane_cp06_t1_ParamLimits

0x88f6,	// (0x00046d4f) listscroll_gen_pane_cp06_t1

0xa12f,	// (0x00048588) main_cam6_set_pane

0xceb7,	// (0x0004b310) bg_tb_trans_pane_cp06_ParamLimits

0x7577,	// (0x000459d0) cam4_indicators_pane_g1_ParamLimits

0x7588,	// (0x000459e1) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004dd50) cam4_indicators_pane_g_ParamLimits

0x75a0,	// (0x000459f9) cam4_indicators_pane_t1_ParamLimits

0xa986,	// (0x00048ddf) bg_tb_trans_pane_cp07_ParamLimits

0x7657,	// (0x00045ab0) vid4_indicators_pane_g1_ParamLimits

0x766d,	// (0x00045ac6) vid4_indicators_pane_g2_ParamLimits

0x7681,	// (0x00045ada) vid4_indicators_pane_g3_ParamLimits

0x7694,	// (0x00045aed) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004dd62) vid4_indicators_pane_g_ParamLimits

0x76b2,	// (0x00045b0b) vid4_indicators_pane_t1_ParamLimits

0x84a7,	// (0x00046900) vid4_progress_pane_g1_ParamLimits

0x84b9,	// (0x00046912) vid4_progress_pane_g2_ParamLimits

0x4ea7,	// (0x00043300) vid4_progress_pane_g3_ParamLimits

0x84cb,	// (0x00046924) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004df13) vid4_progress_pane_g_ParamLimits

0x84e9,	// (0x00046942) vid4_progress_pane_t1_ParamLimits

0x84fe,	// (0x00046957) vid4_progress_pane_t2_ParamLimits

0x8514,	// (0x0004696d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004df1e) vid4_progress_pane_t_ParamLimits

0x8529,	// (0x00046982) wait_bar_pane_cp07_ParamLimits

0x89d5,	// (0x00046e2e) main_cam6_set_pane_g2_ParamLimits

0x89d5,	// (0x00046e2e) main_cam6_set_pane_g2

0x89e1,	// (0x00046e3a) main_cset6_listscroll_pane_ParamLimits

0x89e1,	// (0x00046e3a) main_cset6_listscroll_pane

0x8a0e,	// (0x00046e67) main_cset6_slider_pane_ParamLimits

0x8a0e,	// (0x00046e67) main_cset6_slider_pane

0x8a1a,	// (0x00046e73) main_cset6_text2_pane_ParamLimits

0x8a1a,	// (0x00046e73) main_cset6_text2_pane

0xdefe,	// (0x0004c357) main_cset6_text_pane

0xdf06,	// (0x0004c35f) main_cset_list_pane_copy1_ParamLimits

0xdf06,	// (0x0004c35f) main_cset_list_pane_copy1

0xdf16,	// (0x0004c36f) scroll_pane_cp028_copy1

0x8a2d,	// (0x00046e86) cset_list_set_pane_copy1

0x8a3d,	// (0x00046e96) aid_position_infowindow_above_copy1

0x8a45,	// (0x00046e9e) aid_position_infowindow_below_copy1

0x1272,	// (0x0003f6cb) cset_list_set_pane_g1_copy1

0x127a,	// (0x0003f6d3) cset_list_set_pane_g3_copy1_ParamLimits

0x127a,	// (0x0003f6d3) cset_list_set_pane_g3_copy1

0x1289,	// (0x0003f6e2) cset_list_set_pane_t1_copy1_ParamLimits

0x1289,	// (0x0003f6e2) cset_list_set_pane_t1_copy1

0xa986,	// (0x00048ddf) list_highlight_pane_cp021_copy1_ParamLimits

0xa986,	// (0x00048ddf) list_highlight_pane_cp021_copy1

0xdf1f,	// (0x0004c378) cset6_slider_pane_ParamLimits

0xdf1f,	// (0x0004c378) cset6_slider_pane

0xdf4b,	// (0x0004c3a4) main_cset6_slider_pane_g1_ParamLimits

0xdf4b,	// (0x0004c3a4) main_cset6_slider_pane_g1

0x8a4d,	// (0x00046ea6) main_cset6_slider_pane_g2_ParamLimits

0x8a4d,	// (0x00046ea6) main_cset6_slider_pane_g2

0xdf73,	// (0x0004c3cc) main_cset6_slider_pane_g3_ParamLimits

0xdf73,	// (0x0004c3cc) main_cset6_slider_pane_g3

0x8a75,	// (0x00046ece) main_cset6_slider_pane_g4_ParamLimits

0x8a75,	// (0x00046ece) main_cset6_slider_pane_g4

0x8a81,	// (0x00046eda) main_cset6_slider_pane_g5_ParamLimits

0x8a81,	// (0x00046eda) main_cset6_slider_pane_g5

0xd804,	// (0x0004bc5d) main_cset6_slider_pane_g7_ParamLimits

0xd804,	// (0x0004bc5d) main_cset6_slider_pane_g7

0xd810,	// (0x0004bc69) main_cset6_slider_pane_g8_ParamLimits

0xd810,	// (0x0004bc69) main_cset6_slider_pane_g8

0x8a8d,	// (0x00046ee6) main_cset6_slider_pane_g9_ParamLimits

0x8a8d,	// (0x00046ee6) main_cset6_slider_pane_g9

0x8a99,	// (0x00046ef2) main_cset6_slider_pane_g10_ParamLimits

0x8a99,	// (0x00046ef2) main_cset6_slider_pane_g10

0x8aa5,	// (0x00046efe) main_cset6_slider_pane_g11_ParamLimits

0x8aa5,	// (0x00046efe) main_cset6_slider_pane_g11

0x8ab1,	// (0x00046f0a) main_cset6_slider_pane_g12_ParamLimits

0x8ab1,	// (0x00046f0a) main_cset6_slider_pane_g12

0x8abd,	// (0x00046f16) main_cset6_slider_pane_g13_ParamLimits

0x8abd,	// (0x00046f16) main_cset6_slider_pane_g13

0x8ac9,	// (0x00046f22) main_cset6_slider_pane_g14_ParamLimits

0x8ac9,	// (0x00046f22) main_cset6_slider_pane_g14

0x8ad5,	// (0x00046f2e) main_cset6_slider_pane_g15_ParamLimits

0x8ad5,	// (0x00046f2e) main_cset6_slider_pane_g15

0x8aed,	// (0x00046f46) main_cset6_slider_pane_g16_ParamLimits

0x8aed,	// (0x00046f46) main_cset6_slider_pane_g16

0x8af9,	// (0x00046f52) main_cset6_slider_pane_g17_ParamLimits

0x8af9,	// (0x00046f52) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0004dfe4) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0004dfe4) main_cset6_slider_pane_g

0xdf7f,	// (0x0004c3d8) main_cset6_slider_pane_t1_ParamLimits

0xdf7f,	// (0x0004c3d8) main_cset6_slider_pane_t1

0x8b1d,	// (0x00046f76) main_cset6_slider_pane_t2_ParamLimits

0x8b1d,	// (0x00046f76) main_cset6_slider_pane_t2

0x8b48,	// (0x00046fa1) main_cset6_slider_pane_t3_ParamLimits

0x8b48,	// (0x00046fa1) main_cset6_slider_pane_t3

0x8b73,	// (0x00046fcc) main_cset6_slider_pane_t4_ParamLimits

0x8b73,	// (0x00046fcc) main_cset6_slider_pane_t4

0x8b9e,	// (0x00046ff7) main_cset6_slider_pane_t5_ParamLimits

0x8b9e,	// (0x00046ff7) main_cset6_slider_pane_t5

0xdfc0,	// (0x0004c419) main_cset6_slider_pane_t7_ParamLimits

0xdfc0,	// (0x0004c419) main_cset6_slider_pane_t7

0x8bc9,	// (0x00047022) main_cset6_slider_pane_t8_ParamLimits

0x8bc9,	// (0x00047022) main_cset6_slider_pane_t8

0x8bed,	// (0x00047046) main_cset6_slider_pane_t9_ParamLimits

0x8bed,	// (0x00047046) main_cset6_slider_pane_t9

0x8c11,	// (0x0004706a) main_cset6_slider_pane_t10_ParamLimits

0x8c11,	// (0x0004706a) main_cset6_slider_pane_t10

0x8c35,	// (0x0004708e) main_cset6_slider_pane_t11_ParamLimits

0x8c35,	// (0x0004708e) main_cset6_slider_pane_t11

0xdff6,	// (0x0004c44f) main_cset6_slider_pane_t14_ParamLimits

0xdff6,	// (0x0004c44f) main_cset6_slider_pane_t14

0xe02f,	// (0x0004c488) main_cset6_slider_pane_t15_ParamLimits

0xe02f,	// (0x0004c488) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0004e009) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0004e009) main_cset6_slider_pane_t

0xd8c8,	// (0x0004bd21) cset_slider_pane_g1_copy1

0xd8d1,	// (0x0004bd2a) cset_slider_pane_g2_copy1

0xd8da,	// (0x0004bd33) cset_slider_pane_g3_copy1

0xa12f,	// (0x00048588) bg_popup_sub_pane_cp011_copy1

0xe068,	// (0x0004c4c1) main_cset_text_pane_g1_copy1

0xd965,	// (0x0004bdbe) main_cset_text_pane_t1_copy1

0xd973,	// (0x0004bdcc) main_cset_text_pane_t2_copy1

0xd981,	// (0x0004bdda) main_cset_text_pane_t3_copy1

0xd98f,	// (0x0004bde8) main_cset_text_pane_t4_copy1

0xd99d,	// (0x0004bdf6) main_cset_text_pane_t5_copy1

0xe070,	// (0x0004c4c9) main_cset_text_pane_t6_copy1

0xe07e,	// (0x0004c4d7) main_cset_text_pane_t7_copy1

0x8c59,	// (0x000470b2) main_cset_text2_pane_t1_copy1

0xa986,	// (0x00048ddf) main_ncimui_pane

0x5626,	// (0x00043a7f) popup_query_ncimui_window_ParamLimits

0x5626,	// (0x00043a7f) popup_query_ncimui_window

0x0e5a,	// (0x0003f2b3) field_cale_ev2_pane_g4_ParamLimits

0x0e5a,	// (0x0003f2b3) field_cale_ev2_pane_g4

0x6ebe,	// (0x00045317) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6ebe,	// (0x00045317) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004dcee) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004dcee) cell_video_dialer_keypad_pane_g

0x6ed6,	// (0x0004532f) cell_video_dialer_keypad_pane_t1

0xa12f,	// (0x00048588) bg_popup_window_pane_cp012

0xb191,	// (0x000495ea) heading_pane_cp06

0xe0aa,	// (0x0004c503) ncim_query_content_pane

0xa12f,	// (0x00048588) bg_popup_heading_pane_cp01

0xe0b2,	// (0x0004c50b) ncim_heading_pane_t1

0xe0c0,	// (0x0004c519) ncim_indicator_popup_pane

0xe0d2,	// (0x0004c52b) ncim_query_button_pane

0xe0e8,	// (0x0004c541) ncim_query_content_pane_t1

0xe0fa,	// (0x0004c553) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0004e04d) ncim_query_content_pane_t

0xe134,	// (0x0004c58d) ncim_query_list_pane

0xe146,	// (0x0004c59f) ncim_query_popup_pane

0xe0c0,	// (0x0004c519) ncim_indicator_popup_pane_ParamLimits

0x8db5,	// (0x0004720e) ncim_query_content_pane_g1_ParamLimits

0x8db5,	// (0x0004720e) ncim_query_content_pane_g1

0xe0e8,	// (0x0004c541) ncim_query_content_pane_t1_ParamLimits

0xe0fa,	// (0x0004c553) ncim_query_content_pane_t2_ParamLimits

0x8dc1,	// (0x0004721a) ncim_query_content_pane_t3_ParamLimits

0x8dc1,	// (0x0004721a) ncim_query_content_pane_t3

0x8dde,	// (0x00047237) ncim_query_content_pane_t4_ParamLimits

0x8dde,	// (0x00047237) ncim_query_content_pane_t4

0x8dfb,	// (0x00047254) ncim_query_content_pane_t5_ParamLimits

0x8dfb,	// (0x00047254) ncim_query_content_pane_t5

0xe10c,	// (0x0004c565) ncim_query_content_pane_t6_ParamLimits

0xe10c,	// (0x0004c565) ncim_query_content_pane_t6

0xfbf4,	// (0x0004e04d) ncim_query_content_pane_t_ParamLimits

0xe134,	// (0x0004c58d) ncim_query_list_pane_ParamLimits

0xe146,	// (0x0004c59f) ncim_query_popup_pane_ParamLimits

0xe15a,	// (0x0004c5b3) wait_bar_pane_cp04

0xa12f,	// (0x00048588) input_focus_pane_cp011

0xe162,	// (0x0004c5bb) ncim_query_popup_pane_t1

0xe170,	// (0x0004c5c9) ncim_list_query_list_pane_ParamLimits

0xe170,	// (0x0004c5c9) ncim_list_query_list_pane

0xa12f,	// (0x00048588) bg_button_pane_cp027

0xe183,	// (0x0004c5dc) ncim_query_button_pane_g1

0xa12f,	// (0x00048588) list_highlight_pane_cp012

0xe18d,	// (0x0004c5e6) ncim_list_query_list_pane_g1

0xe195,	// (0x0004c5ee) ncim_list_query_list_pane_t1

0x7594,	// (0x000459ed) cam4_indicators_pane_g3_ParamLimits

0x7594,	// (0x000459ed) cam4_indicators_pane_g3

0x76a0,	// (0x00045af9) vid4_indicators_pane_g5_ParamLimits

0x76a0,	// (0x00045af9) vid4_indicators_pane_g5

0x84da,	// (0x00046933) vid4_progress_pane_g5_ParamLimits

0x84da,	// (0x00046933) vid4_progress_pane_g5

0x8c8b,	// (0x000470e4) main_ncimui_pane_g1

0x8cf7,	// (0x00047150) ncimui_group_query_pane_ParamLimits

0x8cf7,	// (0x00047150) ncimui_group_query_pane

0x8d51,	// (0x000471aa) ncimui_list_pane_ParamLimits

0x8d51,	// (0x000471aa) ncimui_list_pane

0x8d78,	// (0x000471d1) ncimui_text_pane_ParamLimits

0x8d78,	// (0x000471d1) ncimui_text_pane

0x8e18,	// (0x00047271) ncimui_text_pane_t1_ParamLimits

0x8e18,	// (0x00047271) ncimui_text_pane_t1

0xe1a3,	// (0x0004c5fc) ncimui_list_single_graphic_pane_ParamLimits

0xe1a3,	// (0x0004c5fc) ncimui_list_single_graphic_pane

0x8e37,	// (0x00047290) ncimui_query_pane_ParamLimits

0x8e37,	// (0x00047290) ncimui_query_pane

0xa12f,	// (0x00048588) list_highlight_pane_cp013

0xe1b3,	// (0x0004c60c) ncim_list_query_list_pane_t1_copy1

0xe18d,	// (0x0004c5e6) ncim_list_single_graphic_pane_g1

0xe1c1,	// (0x0004c61a) ncim_query_button_pane_cp01

0xe1cd,	// (0x0004c626) ncim_query_entry_pane_ParamLimits

0xe1cd,	// (0x0004c626) ncim_query_entry_pane

0xe1e0,	// (0x0004c639) ncimui_query_pane_g1

0xe1ec,	// (0x0004c645) ncimui_query_pane_t1_ParamLimits

0xe1ec,	// (0x0004c645) ncimui_query_pane_t1

0xa986,	// (0x00048ddf) input_focus_pane_cp012

0xe205,	// (0x0004c65e) ncim_query_entry_pane_t1

0xa8bb,	// (0x00048d14) main_im_pane_ParamLimits

0xa986,	// (0x00048ddf) main_mobtv_pane_ParamLimits

0xa986,	// (0x00048ddf) main_mobtv_pane

0x8b05,	// (0x00046f5e) main_cset6_slider_pane_g18_ParamLimits

0x8b05,	// (0x00046f5e) main_cset6_slider_pane_g18

0x8b11,	// (0x00046f6a) main_cset6_slider_pane_g19_ParamLimits

0x8b11,	// (0x00046f6a) main_cset6_slider_pane_g19

0xd6b1,	// (0x0004bb0a) bg_main_mobtv_pane_ParamLimits

0xd6b1,	// (0x0004bb0a) bg_main_mobtv_pane

0x8e4a,	// (0x000472a3) main_mobtv_info_pane

0x8e55,	// (0x000472ae) main_mobtv_loading_pane_ParamLimits

0x8e55,	// (0x000472ae) main_mobtv_loading_pane

0xe217,	// (0x0004c670) main_mobtv_pg_channel_list_pane

0xe221,	// (0x0004c67a) main_mobtv_pg_hdr_pane

0x8e62,	// (0x000472bb) main_mobtv_programe_curr_pane_ParamLimits

0x8e62,	// (0x000472bb) main_mobtv_programe_curr_pane

0x8e6f,	// (0x000472c8) main_mobtv_programe_next_pane_ParamLimits

0x8e6f,	// (0x000472c8) main_mobtv_programe_next_pane

0xe22a,	// (0x0004c683) popup_mobtv_noti_window

0xcc87,	// (0x0004b0e0) main_tv_pg_hdr_pane_g1

0xe234,	// (0x0004c68d) main_tv_pg_hdr_pane_g2

0xe23c,	// (0x0004c695) main_tv_pg_hdr_pane_g3

0xe244,	// (0x0004c69d) main_tv_pg_hdr_pane_g4

0xe24c,	// (0x0004c6a5) main_tv_pg_hdr_pane_g5

0xe256,	// (0x0004c6af) main_tv_pg_hdr_pane_g6

0xe260,	// (0x0004c6b9) main_tv_pg_hdr_pane_g7

0xe26a,	// (0x0004c6c3) main_tv_pg_hdr_pane_g8

0xe274,	// (0x0004c6cd) main_tv_pg_hdr_pane_g9

0xe27e,	// (0x0004c6d7) main_tv_pg_hdr_pane_g10

0xe288,	// (0x0004c6e1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0004e05a) main_tv_pg_hdr_pane_g

0xe292,	// (0x0004c6eb) main_tv_pg_hdr_pane_t1

0xe2a0,	// (0x0004c6f9) main_tv_pg_hdr_pane_t2

0xe2ae,	// (0x0004c707) main_tv_pg_hdr_pane_t3

0xe2be,	// (0x0004c717) main_tv_pg_hdr_pane_t4

0xe2ce,	// (0x0004c727) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0004e071) main_tv_pg_hdr_pane_t

0xe2de,	// (0x0004c737) single_mobtv_pg_channel_pane_ParamLimits

0xe2de,	// (0x0004c737) single_mobtv_pg_channel_pane

0xe2f0,	// (0x0004c749) single_mobtv_pg_channel_table_pane

0xe2f9,	// (0x0004c752) single_mobtv_pg_channel_thumb_pane

0xe302,	// (0x0004c75b) single_tv_pg_channel_pane_g1

0xe30b,	// (0x0004c764) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0004e07c) single_tv_pg_channel_pane_g

0xceb7,	// (0x0004b310) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb7,	// (0x0004b310) bg_single_mobtv_pg_channel_thumb_pane

0xe314,	// (0x0004c76d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe314,	// (0x0004c76d) single_mobtv_pg_channel_thumb_pane_g1

0xe322,	// (0x0004c77b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe322,	// (0x0004c77b) single_mobtv_pg_channel_thumb_pane_g2

0xe32e,	// (0x0004c787) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe32e,	// (0x0004c787) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0004e081) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0004e081) single_mobtv_pg_channel_thumb_pane_g

0xe33a,	// (0x0004c793) single_mobtv_pg_channel_thumb_pane_t1

0xe348,	// (0x0004c7a1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0004e088) single_mobtv_pg_channel_thumb_pane_t

0xcc87,	// (0x0004b0e0) bg_single_mobtv_pg_channel_table_pane_g1

0xcc87,	// (0x0004b0e0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0004db35) bg_single_mobtv_pg_channel_table_pane_g

0xe356,	// (0x0004c7af) single_mobtv_pg_channel_table_pane_t1

0xe364,	// (0x0004c7bd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0004e08d) single_mobtv_pg_channel_table_pane_t

0x8e84,	// (0x000472dd) main_mobtv_info_pane_g1_ParamLimits

0x8e84,	// (0x000472dd) main_mobtv_info_pane_g1

0x8ea0,	// (0x000472f9) main_mobtv_info_pane_t1_ParamLimits

0x8ea0,	// (0x000472f9) main_mobtv_info_pane_t1

0x8f18,	// (0x00047371) main_mobtv_info_pane_t2_ParamLimits

0x8f18,	// (0x00047371) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0004e097) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0004e097) main_mobtv_info_pane_t

0x8fa9,	// (0x00047402) wait_bar_pane_cp05

0x8fbb,	// (0x00047414) main_mobtv_loading_pane_g1_ParamLimits

0x8fbb,	// (0x00047414) main_mobtv_loading_pane_g1

0x8fc7,	// (0x00047420) main_mobtv_loading_pane_g2_ParamLimits

0x8fc7,	// (0x00047420) main_mobtv_loading_pane_g2

0x8fd3,	// (0x0004742c) main_mobtv_loading_pane_g3_ParamLimits

0x8fd3,	// (0x0004742c) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0004e09e) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0004e09e) main_mobtv_loading_pane_g

0xe372,	// (0x0004c7cb) main_mobtv_loading_pane_t1_ParamLimits

0xe372,	// (0x0004c7cb) main_mobtv_loading_pane_t1

0xe38a,	// (0x0004c7e3) main_mobtv_loading_pane_t2_ParamLimits

0xe38a,	// (0x0004c7e3) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0004e0a5) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0004e0a5) main_mobtv_loading_pane_t

0x8fe1,	// (0x0004743a) wait_bar_pane_cp06_ParamLimits

0x8fe1,	// (0x0004743a) wait_bar_pane_cp06

0xe3ae,	// (0x0004c807) main_mobtv_programe_curr_pane_t1

0xe3bc,	// (0x0004c815) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0004e0aa) main_mobtv_programe_curr_pane_t

0xe3ca,	// (0x0004c823) main_mobtv_programe_next_pane_t1

0xe3d8,	// (0x0004c831) main_mobtv_programe_next_pane_t2

0xe3e6,	// (0x0004c83f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0004e0af) main_mobtv_programe_next_pane_t

0xa12f,	// (0x00048588) bg_popup_mobtv_noti_window_pane

0xe3f4,	// (0x0004c84d) popup_mobtv_noti_window_g1

0xe3fc,	// (0x0004c855) popup_mobtv_noti_window_t1

0xe40a,	// (0x0004c863) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0004e0b6) popup_mobtv_noti_window_t

0xcc87,	// (0x0004b0e0) bg_popup_mobtv_noti_window_pane_g1

0xa12f,	// (0x00048588) sc_clock_pane

0xa12f,	// (0x00048588) main_fs_bigclock_pane

0x86c8,	// (0x00046b21) blid2_tripm_pane_t4_ParamLimits

0x86c8,	// (0x00046b21) blid2_tripm_pane_t4

0x8fed,	// (0x00047446) sc_clock_pane_g1_ParamLimits

0x8fed,	// (0x00047446) sc_clock_pane_g1

0x8ffb,	// (0x00047454) sc_clock_pane_t1_ParamLimits

0x8ffb,	// (0x00047454) sc_clock_pane_t1

0x9010,	// (0x00047469) sc_clock_pane_t2_ParamLimits

0x9010,	// (0x00047469) sc_clock_pane_t2

0x9022,	// (0x0004747b) sc_clock_pane_t3_ParamLimits

0x9022,	// (0x0004747b) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0004e0bb) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0004e0bb) sc_clock_pane_t

0x987d,	// (0x00047cd6) main_fs_bigclock_indicator_pane_ParamLimits

0x987d,	// (0x00047cd6) main_fs_bigclock_indicator_pane

0x90b5,	// (0x0004750e) main_fs_bigclock_pane_g1_ParamLimits

0x90b5,	// (0x0004750e) main_fs_bigclock_pane_g1

0x9889,	// (0x00047ce2) main_fs_bigclock_pane_t1_ParamLimits

0x9889,	// (0x00047ce2) main_fs_bigclock_pane_t1

0x989b,	// (0x00047cf4) main_fs_bigclock_pane_t2_ParamLimits

0x989b,	// (0x00047cf4) main_fs_bigclock_pane_t2

0x98af,	// (0x00047d08) main_fs_bigclock_pane_t3_ParamLimits

0x98af,	// (0x00047d08) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0004e2c5) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0004e2c5) main_fs_bigclock_pane_t

0xec5b,	// (0x0004d0b4) main_fs_bigclock_indicator_pane_g1

0xe0da,	// (0x0004c533) ncim_query_content_pane_g2_ParamLimits

0xe0da,	// (0x0004c533) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0004e048) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0004e048) ncim_query_content_pane_g

0x9034,	// (0x0004748d) sc_clock_pane_t4_ParamLimits

0x9034,	// (0x0004748d) sc_clock_pane_t4

0xa986,	// (0x00048ddf) main_radioblah_pane

0xd61e,	// (0x0004ba77) cell_call4_button_pane_t1_copy1_ParamLimits

0xd61e,	// (0x0004ba77) cell_call4_button_pane_t1_copy1

0x8ca7,	// (0x00047100) main_ncimui_pane_t1_ParamLimits

0x8ca7,	// (0x00047100) main_ncimui_pane_t1

0x8cc1,	// (0x0004711a) main_ncimui_pane_t2_ParamLimits

0x8cc1,	// (0x0004711a) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0004e041) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0004e041) main_ncimui_pane_t

0xe55d,	// (0x0004c9b6) main_radioblah_anim_pane_ParamLimits

0xe55d,	// (0x0004c9b6) main_radioblah_anim_pane

0xe56e,	// (0x0004c9c7) main_radioblah_info_pane_ParamLimits

0xe56e,	// (0x0004c9c7) main_radioblah_info_pane

0xe582,	// (0x0004c9db) main_radioblah_pane_t1_ParamLimits

0xe582,	// (0x0004c9db) main_radioblah_pane_t1

0xe59e,	// (0x0004c9f7) main_radioblah_pane_t2_ParamLimits

0xe59e,	// (0x0004c9f7) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0004e0dc) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0004e0dc) main_radioblah_pane_t

0x9107,	// (0x00047560) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9107,	// (0x00047560) main_radioblah_rocker_ctrl_pane

0xe5e6,	// (0x0004ca3f) main_radioblah_info_pane_t1_ParamLimits

0xe5e6,	// (0x0004ca3f) main_radioblah_info_pane_t1

0x9150,	// (0x000475a9) main_radioblah_info_pane_t2_ParamLimits

0x9150,	// (0x000475a9) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0004e0e5) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0004e0e5) main_radioblah_info_pane_t

0xcc87,	// (0x0004b0e0) main_radioblah_rocker_ctrl_pane_g1

0x9200,	// (0x00047659) main_radioblah_rocker_ctrl_pane_g2

0x9208,	// (0x00047661) main_radioblah_rocker_ctrl_pane_g3

0x9210,	// (0x00047669) main_radioblah_rocker_ctrl_pane_g4

0x9218,	// (0x00047671) main_radioblah_rocker_ctrl_pane_g5

0x9220,	// (0x00047679) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0004e0ee) main_radioblah_rocker_ctrl_pane_g

0x8c59,	// (0x000470b2) main_cset_text2_pane_t1_copy1_ParamLimits

0x74c1,	// (0x0004591a) cam4_image_uncrop_qvga_pane

0x7606,	// (0x00045a5f) vid4_image_uncrop_qcif_pane

0x885a,	// (0x00046cb3) cam6_image_uncrop_qvga_pane_ParamLimits

0x885a,	// (0x00046cb3) cam6_image_uncrop_qvga_pane

0xdddd,	// (0x0004c236) vid6_image_uncrop_qcif_pane_ParamLimits

0xdddd,	// (0x0004c236) vid6_image_uncrop_qcif_pane

0xa12f,	// (0x00048588) bg_popup_preview_window_pane_cp03

0xe08c,	// (0x0004c4e5) list_cset_text2_pane

0xe094,	// (0x0004c4ed) main_cset6_text2_pane_g1

0xe09c,	// (0x0004c4f5) main_cset6_text2_pane_t1

0x9228,	// (0x00047681) list_cset_text2_pane_t1_ParamLimits

0x9228,	// (0x00047681) list_cset_text2_pane_t1

0xa986,	// (0x00048ddf) main_radioblah_pane_ParamLimits

0x8f95,	// (0x000473ee) main_mobtv_info_pane_t3_ParamLimits

0x8f95,	// (0x000473ee) main_mobtv_info_pane_t3

0x90f5,	// (0x0004754e) main_radioblah_pane_g1

0x9120,	// (0x00047579) main_radioblah_info_pane_g1

0x91a5,	// (0x000475fe) main_radioblah_info_pane_t3_ParamLimits

0x91a5,	// (0x000475fe) main_radioblah_info_pane_t3

0x4303,	// (0x0004275c) highlight_cell_cale_month_pane_ParamLimits

0x4303,	// (0x0004275c) highlight_cell_cale_month_pane

0xa12f,	// (0x00048588) main_phob_fisheye_pane

0xcf93,	// (0x0004b3ec) scroll_pane_cp0031_ParamLimits

0xcf93,	// (0x0004b3ec) scroll_pane_cp0031

0xdeef,	// (0x0004c348) wait_bar_pane_cp08_ParamLimits

0x8a2d,	// (0x00046e86) cset_list_set_pane_copy1_ParamLimits

0xe620,	// (0x0004ca79) highlight_cell_cale_month_pane_g1

0x923f,	// (0x00047698) highlight_cell_cale_month_pane_t1

0xdba7,	// (0x0004c000) list_gen_pane_cp01

0xd7ef,	// (0x0004bc48) scroll_pane_01

0x136d,	// (0x0003f7c6) list_single_double_fisheye_pane

0x1376,	// (0x0003f7cf) list_double_fisheye_pane_g1_ParamLimits

0x1376,	// (0x0003f7cf) list_double_fisheye_pane_g1

0x1382,	// (0x0003f7db) list_double_fisheye_pane_g2_ParamLimits

0x1382,	// (0x0003f7db) list_double_fisheye_pane_g2

0x1396,	// (0x0003f7ef) list_double_fisheye_pane_g3_ParamLimits

0x1396,	// (0x0003f7ef) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0004e0fb) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0004e0fb) list_double_fisheye_pane_g

0x13bf,	// (0x0003f818) list_double_fisheye_pane_t1_ParamLimits

0x13bf,	// (0x0003f818) list_double_fisheye_pane_t1

0x13da,	// (0x0003f833) list_double_fisheye_pane_t2_ParamLimits

0x13da,	// (0x0003f833) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0004e106) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0004e106) list_double_fisheye_pane_t

0xa12f,	// (0x00048588) main_call5_pane

0x905a,	// (0x000474b3) sc_swipe_pane_ParamLimits

0x905a,	// (0x000474b3) sc_swipe_pane

0x9259,	// (0x000476b2) call5_image_pane_ParamLimits

0x9259,	// (0x000476b2) call5_image_pane

0x926b,	// (0x000476c4) call5_swipe_1_pane_ParamLimits

0x926b,	// (0x000476c4) call5_swipe_1_pane

0x9277,	// (0x000476d0) call5_swipe_2_pane_ParamLimits

0x9277,	// (0x000476d0) call5_swipe_2_pane

0x9293,	// (0x000476ec) popup_call5_audio_first_window_ParamLimits

0x9293,	// (0x000476ec) popup_call5_audio_first_window

0xceb7,	// (0x0004b310) call5_swipe_1_pane_g1_ParamLimits

0xceb7,	// (0x0004b310) call5_swipe_1_pane_g1

0xe628,	// (0x0004ca81) call5_swipe_1_pane_g2_ParamLimits

0xe628,	// (0x0004ca81) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0004e10b) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0004e10b) call5_swipe_1_pane_g

0xe634,	// (0x0004ca8d) call5_swipe_1_pane_t1_ParamLimits

0xe634,	// (0x0004ca8d) call5_swipe_1_pane_t1

0xceb7,	// (0x0004b310) call5_swipe_2_pane_g1_ParamLimits

0xceb7,	// (0x0004b310) call5_swipe_2_pane_g1

0xe649,	// (0x0004caa2) call5_swipe_2_pane_g2_ParamLimits

0xe649,	// (0x0004caa2) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0004e110) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0004e110) call5_swipe_2_pane_g

0xe655,	// (0x0004caae) call5_swipe_2_pane_t1_ParamLimits

0xe655,	// (0x0004caae) call5_swipe_2_pane_t1

0xe66a,	// (0x0004cac3) sc_swipe_pane_g1_ParamLimits

0xe66a,	// (0x0004cac3) sc_swipe_pane_g1

0xe677,	// (0x0004cad0) sc_swipe_pane_g2_ParamLimits

0xe677,	// (0x0004cad0) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0004e115) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0004e115) sc_swipe_pane_g

0xe683,	// (0x0004cadc) sc_swipe_pane_t1_ParamLimits

0xe683,	// (0x0004cadc) sc_swipe_pane_t1

0xa12f,	// (0x00048588) main_cmail_launcher_pane

0x92a3,	// (0x000476fc) aid_size_cell_cmail_l_ParamLimits

0x92a3,	// (0x000476fc) aid_size_cell_cmail_l

0x92b3,	// (0x0004770c) grid_cmail_l_pane_ParamLimits

0x92b3,	// (0x0004770c) grid_cmail_l_pane

0x92c3,	// (0x0004771c) cell_cmail_l_pane_ParamLimits

0x92c3,	// (0x0004771c) cell_cmail_l_pane

0x92d9,	// (0x00047732) cell_cmail_l_pane_g1_ParamLimits

0x92d9,	// (0x00047732) cell_cmail_l_pane_g1

0x92e5,	// (0x0004773e) cell_cmail_l_pane_t1_ParamLimits

0x92e5,	// (0x0004773e) cell_cmail_l_pane_t1

0xe698,	// (0x0004caf1) cell_cmail_l_pane_t2_ParamLimits

0xe698,	// (0x0004caf1) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0004e11a) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0004e11a) cell_cmail_l_pane_t

0xa986,	// (0x00048ddf) grid_highlight_pane_cp018_ParamLimits

0xa986,	// (0x00048ddf) grid_highlight_pane_cp018

0x200b,	// (0x00040464) main2_pane_ParamLimits

0x200b,	// (0x00040464) main2_pane

0xa966,	// (0x00048dbf) popup_sp_fs_action_menu_bg_pane_g1

0xa96e,	// (0x00048dc7) popup_sp_fs_action_menu_bg_pane_g2

0xa976,	// (0x00048dcf) popup_sp_fs_action_menu_bg_pane_g3

0xa97e,	// (0x00048dd7) popup_sp_fs_action_menu_bg_pane_g4

0xa9b4,	// (0x00048e0d) popup_sp_fs_action_menu_bg_pane_g5

0xa9bc,	// (0x00048e15) popup_sp_fs_action_menu_bg_pane_g6

0xa9c4,	// (0x00048e1d) popup_sp_fs_action_menu_bg_pane_g7

0xa9cc,	// (0x00048e25) popup_sp_fs_action_menu_bg_pane_g8

0xa9d4,	// (0x00048e2d) popup_sp_fs_action_menu_bg_pane_g9

0xa9dc,	// (0x00048e35) popup_sp_fs_action_menu_bg_pane_g10

0xa9dc,	// (0x00048e35) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0004d5df) popup_sp_fs_action_menu_bg_pane_g

0x0b83,	// (0x0003efdc) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x2_t3_g3_g1

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t3_g3_g2

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004d691) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004d691) list_medium_line_x2_t3_g3_g

0x0ba7,	// (0x0003f000) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ba7,	// (0x0003f000) list_medium_line_x2_t3_g3_t1

0x0bbc,	// (0x0003f015) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0bbc,	// (0x0003f015) list_medium_line_x2_t3_g3_t2

0x0bd0,	// (0x0003f029) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0bd0,	// (0x0003f029) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004d698) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004d698) list_medium_line_x2_t3_g3_t

0x0b83,	// (0x0003efdc) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x2_t3_g2_g1

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004d69f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004d69f) list_medium_line_x2_t3_g2_g

0x0be5,	// (0x0003f03e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0be5,	// (0x0003f03e) list_medium_line_x2_t3_g2_t1

0x0bfb,	// (0x0003f054) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0bfb,	// (0x0003f054) list_medium_line_x2_t3_g2_t2

0x0c0d,	// (0x0003f066) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0c0d,	// (0x0003f066) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004d6a4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004d6a4) list_medium_line_x2_t3_g2_t

0x0b83,	// (0x0003efdc) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x2_t4_g4_g1

0x0c2b,	// (0x0003f084) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0c2b,	// (0x0003f084) list_medium_line_x2_t4_g4_g2

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t4_g4_g3

0x0c37,	// (0x0003f090) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0c37,	// (0x0003f090) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004d6ab) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004d6ab) list_medium_line_x2_t4_g4_g

0x0c43,	// (0x0003f09c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0c43,	// (0x0003f09c) list_medium_line_x2_t4_g4_t1

0x0c5d,	// (0x0003f0b6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c5d,	// (0x0003f0b6) list_medium_line_x2_t4_g4_t2

0x0c73,	// (0x0003f0cc) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0c73,	// (0x0003f0cc) list_medium_line_x2_t4_g4_t3

0x0c88,	// (0x0003f0e1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0c88,	// (0x0003f0e1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004d6b4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004d6b4) list_medium_line_x2_t4_g4_t

0x0b83,	// (0x0003efdc) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x2_t2_g4_g1

0x0c2b,	// (0x0003f084) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0c2b,	// (0x0003f084) list_medium_line_x2_t2_g4_g2

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t2_g4_g3

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004d71b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004d71b) list_medium_line_x2_t2_g4_g

0x0c9a,	// (0x0003f0f3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0c9a,	// (0x0003f0f3) list_medium_line_x2_t2_g4_t1

0x0bd0,	// (0x0003f029) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0bd0,	// (0x0003f029) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004d724) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004d724) list_medium_line_x2_t2_g4_t

0x0b83,	// (0x0003efdc) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x2_t2_g3_g1

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t2_g3_g2

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004d691) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004d691) list_medium_line_x2_t2_g3_g

0x0caf,	// (0x0003f108) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0caf,	// (0x0003f108) list_medium_line_x2_t2_g3_t1

0x0bd0,	// (0x0003f029) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0bd0,	// (0x0003f029) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004d729) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004d729) list_medium_line_x2_t2_g3_t

0x44aa,	// (0x00042903) main_sp_fs_list_pane_ParamLimits

0x44aa,	// (0x00042903) main_sp_fs_list_pane

0x44b6,	// (0x0004290f) sp_fs_scroll_pane_ParamLimits

0x44b6,	// (0x0004290f) sp_fs_scroll_pane

0x0cc4,	// (0x0003f11d) list_medium_line_x2_t3_t1

0x0cd4,	// (0x0003f12d) list_medium_line_x2_t3_t2

0x0ce2,	// (0x0003f13b) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004d774) list_medium_line_x2_t3_t

0x0cf0,	// (0x0003f149) list_medium_line_x3_t4_t1

0x0d00,	// (0x0003f159) list_medium_line_x3_t4_t2

0x0d0e,	// (0x0003f167) list_medium_line_x3_t4_t3

0x0ce2,	// (0x0003f13b) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004d77b) list_medium_line_x3_t4_t

0x0d1c,	// (0x0003f175) list_medium_line_x4_t5_t1

0x0d2c,	// (0x0003f185) list_medium_line_x4_t5_t2

0x0d0e,	// (0x0003f167) list_medium_line_x4_t5_t3

0x0d3a,	// (0x0003f193) list_medium_line_x4_t5_t4

0x0ce2,	// (0x0003f13b) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004d784) list_medium_line_x4_t5_t

0x0b83,	// (0x0003efdc) list_medium_line_t4_g4_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_t4_g4_g1

0x0d48,	// (0x0003f1a1) list_medium_line_t4_g4_g2_ParamLimits

0x0d48,	// (0x0003f1a1) list_medium_line_t4_g4_g2

0x0d54,	// (0x0003f1ad) list_medium_line_t4_g4_g3_ParamLimits

0x0d54,	// (0x0003f1ad) list_medium_line_t4_g4_g3

0x0b9b,	// (0x0003eff4) list_medium_line_t4_g4_g4_ParamLimits

0x0b9b,	// (0x0003eff4) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004d78f) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004d78f) list_medium_line_t4_g4_g

0x0d60,	// (0x0003f1b9) list_medium_line_t4_g4_t1_ParamLimits

0x0d60,	// (0x0003f1b9) list_medium_line_t4_g4_t1

0x0d75,	// (0x0003f1ce) list_medium_line_t4_g4_t2_ParamLimits

0x0d75,	// (0x0003f1ce) list_medium_line_t4_g4_t2

0x0d8b,	// (0x0003f1e4) list_medium_line_t4_g4_t3_ParamLimits

0x0d8b,	// (0x0003f1e4) list_medium_line_t4_g4_t3

0x0bd0,	// (0x0003f029) list_medium_line_t4_g4_t4_ParamLimits

0x0bd0,	// (0x0003f029) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004d798) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004d798) list_medium_line_t4_g4_t

0x45d5,	// (0x00042a2e) chi_dic_find_pane_g1

0x55ef,	// (0x00043a48) main_tport_pane

0x0fc5,	// (0x0003f41e) list_medium_line_plain_t1

0x0fd3,	// (0x0003f42c) list_medium_line_t2_g2_g1_ParamLimits

0x0fd3,	// (0x0003f42c) list_medium_line_t2_g2_g1

0x0fdf,	// (0x0003f438) list_medium_line_t2_g2_g2_ParamLimits

0x0fdf,	// (0x0003f438) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004de59) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004de59) list_medium_line_t2_g2_g

0x0feb,	// (0x0003f444) list_medium_line_t2_g2_t1_ParamLimits

0x0feb,	// (0x0003f444) list_medium_line_t2_g2_t1

0x1002,	// (0x0003f45b) list_medium_line_t2_g2_t2_ParamLimits

0x1002,	// (0x0003f45b) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004de5e) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004de5e) list_medium_line_t2_g2_t

0x1221,	// (0x0003f67a) aid_sp_fs_list_icon_a_sm

0x1229,	// (0x0003f682) aid_sp_fs_list_icon_d

0x1231,	// (0x0003f68a) aid_sp_fs_text_primary

0x123a,	// (0x0003f693) aid_sp_fs_text_secondary

0x1243,	// (0x0003f69c) list_medium_line

0x1243,	// (0x0003f69c) list_medium_line_g2

0x1243,	// (0x0003f69c) list_medium_line_g3

0x1243,	// (0x0003f69c) list_medium_line_plain

0x1243,	// (0x0003f69c) list_medium_line_plain_t2

0x1243,	// (0x0003f69c) list_medium_line_plain_t3

0x1243,	// (0x0003f69c) list_medium_line_right_icon

0x1243,	// (0x0003f69c) list_medium_line_right_iconx2

0x1243,	// (0x0003f69c) list_medium_line_t2

0x1243,	// (0x0003f69c) list_medium_line_t2_g2

0x1243,	// (0x0003f69c) list_medium_line_t2_g3

0x1243,	// (0x0003f69c) list_medium_line_t2_right_icon

0x1243,	// (0x0003f69c) list_medium_line_t2_right_iconx2

0x1243,	// (0x0003f69c) list_medium_line_t3

0x1243,	// (0x0003f69c) list_medium_line_t3_g2

0x1243,	// (0x0003f69c) list_medium_line_t3_g3

0x1243,	// (0x0003f69c) list_medium_line_t3_right_iconx2

0x124c,	// (0x0003f6a5) list_medium_line_t4_g4

0x853d,	// (0x00046996) list_medium_line_x2

0x853d,	// (0x00046996) list_medium_line_x2_t2_g2

0x853d,	// (0x00046996) list_medium_line_x2_t2_g3

0x853d,	// (0x00046996) list_medium_line_x2_t2_g4

0x853d,	// (0x00046996) list_medium_line_x2_t3

0x853d,	// (0x00046996) list_medium_line_x2_t3_g2

0x853d,	// (0x00046996) list_medium_line_x2_t3_g3

0x853d,	// (0x00046996) list_medium_line_x2_t3_g4

0x853d,	// (0x00046996) list_medium_line_x2_t4_g2

0x853d,	// (0x00046996) list_medium_line_x2_t4_g4

0x1255,	// (0x0003f6ae) list_medium_line_x3

0x1255,	// (0x0003f6ae) list_medium_line_x3_t4

0x1255,	// (0x0003f6ae) list_medium_line_x3_t4_g4

0x124c,	// (0x0003f6a5) list_medium_line_x4_t4

0x124c,	// (0x0003f6a5) list_medium_line_x4_t4_g7

0x124c,	// (0x0003f6a5) list_medium_line_x4_t5

0x125e,	// (0x0003f6b7) list_single_fs_dyc_pane_ParamLimits

0x125e,	// (0x0003f6b7) list_single_fs_dyc_pane

0x0b83,	// (0x0003efdc) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x4_t4_g7_g1

0x129e,	// (0x0003f6f7) list_medium_line_x4_t4_g7_g2_ParamLimits

0x129e,	// (0x0003f6f7) list_medium_line_x4_t4_g7_g2

0x12aa,	// (0x0003f703) list_medium_line_x4_t4_g7_g3_ParamLimits

0x12aa,	// (0x0003f703) list_medium_line_x4_t4_g7_g3

0x12b9,	// (0x0003f712) list_medium_line_x4_t4_g7_g4_ParamLimits

0x12b9,	// (0x0003f712) list_medium_line_x4_t4_g7_g4

0x12c5,	// (0x0003f71e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x12c5,	// (0x0003f71e) list_medium_line_x4_t4_g7_g5

0x12d4,	// (0x0003f72d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x12d4,	// (0x0003f72d) list_medium_line_x4_t4_g7_g6

0x12e3,	// (0x0003f73c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x12e3,	// (0x0003f73c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0004e022) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0004e022) list_medium_line_x4_t4_g7_g

0x12ef,	// (0x0003f748) list_medium_line_x4_t4_g7_t1_ParamLimits

0x12ef,	// (0x0003f748) list_medium_line_x4_t4_g7_t1

0x1304,	// (0x0003f75d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1304,	// (0x0003f75d) list_medium_line_x4_t4_g7_t2

0x1319,	// (0x0003f772) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1319,	// (0x0003f772) list_medium_line_x4_t4_g7_t3

0x132e,	// (0x0003f787) list_medium_line_x4_t4_g7_t4_ParamLimits

0x132e,	// (0x0003f787) list_medium_line_x4_t4_g7_t4

0x1340,	// (0x0003f799) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1340,	// (0x0003f799) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0004e031) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0004e031) list_medium_line_x4_t4_g7_t

0x1352,	// (0x0003f7ab) list_single_dyc_row_pane_ParamLimits

0x1352,	// (0x0003f7ab) list_single_dyc_row_pane

0x924d,	// (0x000476a6) call5_gesture_pane_ParamLimits

0x924d,	// (0x000476a6) call5_gesture_pane

0x9283,	// (0x000476dc) call5_windows_pane_ParamLimits

0x9283,	// (0x000476dc) call5_windows_pane

0x92fb,	// (0x00047754) call5_swipe_1_pane_cp_ParamLimits

0x92fb,	// (0x00047754) call5_swipe_1_pane_cp

0x9307,	// (0x00047760) call5_swipe_2_pane_cp_ParamLimits

0x9307,	// (0x00047760) call5_swipe_2_pane_cp

0xb3ed,	// (0x00049846) call5_image_pane_cp

0x9313,	// (0x0004776c) popup_call5_audio_first_window_cp_ParamLimits

0x9313,	// (0x0004776c) popup_call5_audio_first_window_cp

0xe66a,	// (0x0004cac3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe66a,	// (0x0004cac3) call5_swipe_1_pane_g1_cp

0xe6aa,	// (0x0004cb03) call5_swipe_1_pane_g2_cp

0xe683,	// (0x0004cadc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe683,	// (0x0004cadc) call5_swipe_1_pane_t1_cp

0xe66a,	// (0x0004cac3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe66a,	// (0x0004cac3) call5_swipe_2_pane_g1_cp

0xe6b2,	// (0x0004cb0b) call5_swipe_2_pane_g2_cp

0xe6ba,	// (0x0004cb13) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6ba,	// (0x0004cb13) call5_swipe_2_pane_t1_cp

0xa986,	// (0x00048ddf) main_sp_fs_email_pane

0xe6cf,	// (0x0004cb28) main_sp_fs_listscroll_pane_te

0x13fc,	// (0x0003f855) popup_sp_fs_action_menu_pane_ParamLimits

0x13fc,	// (0x0003f855) popup_sp_fs_action_menu_pane

0xcc87,	// (0x0004b0e0) bg_sp_fs_ctrlbar_pane_g1

0xd234,	// (0x0004b68d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd246,	// (0x0004b69f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd23d,	// (0x0004b696) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc87,	// (0x0004b0e0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0004e11f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca52,	// (0x0004aeab) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca52,	// (0x0004aeab) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6d8,	// (0x0004cb31) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6d8,	// (0x0004cb31) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e4,	// (0x0004cb3d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e4,	// (0x0004cb3d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0004e128) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0004e128) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f0,	// (0x0004cb49) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f0,	// (0x0004cb49) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1442,	// (0x0003f89b) list_medium_line_t2_right_icon_g1

0x144a,	// (0x0003f8a3) list_medium_line_t2_right_icon_t1

0x145a,	// (0x0003f8b3) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0004e12d) list_medium_line_t2_right_icon_t

0xc822,	// (0x0004ac7b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc822,	// (0x0004ac7b) bg_sp_fs_ctrlbar_pane

0x937a,	// (0x000477d3) main_sp_fs_ctrlbar_button_pane_cp01

0x9382,	// (0x000477db) main_sp_fs_ctrlbar_ddmenu_pane

0xcb83,	// (0x0004afdc) main_sp_fs_ctrlbar_pane_g1

0xe742,	// (0x0004cb9b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0004e132) main_sp_fs_ctrlbar_pane_g

0xe74e,	// (0x0004cba7) main_sp_fs_ctrlbar_pane_t1

0x1468,	// (0x0003f8c1) main_sp_fs_ctrlbar_pane

0x1482,	// (0x0003f8db) main_sp_fs_listscroll_pane_te_cp01

0x1493,	// (0x0003f8ec) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1493,	// (0x0003f8ec) popup_sp_fs_action_menu_pane_cp01

0xa986,	// (0x00048ddf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa986,	// (0x00048ddf) bg_sp_fs_highlight_list_pane_cp01

0x14bd,	// (0x0003f916) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x14bd,	// (0x0003f916) sp_fs_action_menu_list_gene_pane_g1

0xe77e,	// (0x0004cbd7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe77e,	// (0x0004cbd7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0004e13c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0004e13c) sp_fs_action_menu_list_gene_pane_g

0x14cc,	// (0x0003f925) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x14cc,	// (0x0003f925) sp_fs_action_menu_list_gene_pane_t1

0x14e4,	// (0x0003f93d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x14e4,	// (0x0003f93d) sp_fs_action_menu_list_gene_pane

0xe78b,	// (0x0004cbe4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe78b,	// (0x0004cbe4) popup_sp_fs_action_menu_bg_pane

0x1507,	// (0x0003f960) sp_fs_action_menu_list_pane_ParamLimits

0x1507,	// (0x0003f960) sp_fs_action_menu_list_pane

0xe799,	// (0x0004cbf2) sp_fs_scroll_pane_cp01_ParamLimits

0xe799,	// (0x0004cbf2) sp_fs_scroll_pane_cp01

0x152b,	// (0x0003f984) list_medium_line_plain_t2_t1

0x153b,	// (0x0003f994) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0004e141) list_medium_line_plain_t2_t

0x1549,	// (0x0003f9a2) list_medium_line_plain_t3_t1

0x1559,	// (0x0003f9b2) list_medium_line_plain_t3_t2

0x1567,	// (0x0003f9c0) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0004e146) list_medium_line_plain_t3_t

0x0b83,	// (0x0003efdc) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x2_t2_g2_g1

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004d69f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004d69f) list_medium_line_x2_t2_g2_g

0x0d60,	// (0x0003f1b9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0d60,	// (0x0003f1b9) list_medium_line_x2_t2_g2_t1

0x0bd0,	// (0x0003f029) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0bd0,	// (0x0003f029) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0004e14d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0004e14d) list_medium_line_x2_t2_g2_t

0x0b83,	// (0x0003efdc) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x2_t4_g2_g1

0x1575,	// (0x0003f9ce) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1575,	// (0x0003f9ce) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0004e152) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0004e152) list_medium_line_x2_t4_g2_g

0x1587,	// (0x0003f9e0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1587,	// (0x0003f9e0) list_medium_line_x2_t4_g2_t1

0x15a1,	// (0x0003f9fa) list_medium_line_x2_t4_g2_t2_ParamLimits

0x15a1,	// (0x0003f9fa) list_medium_line_x2_t4_g2_t2

0x15b7,	// (0x0003fa10) list_medium_line_x2_t4_g2_t3_ParamLimits

0x15b7,	// (0x0003fa10) list_medium_line_x2_t4_g2_t3

0x0bd0,	// (0x0003f029) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0bd0,	// (0x0003f029) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0004e157) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0004e157) list_medium_line_x2_t4_g2_t

0x15cc,	// (0x0003fa25) list_medium_line_t3_right_iconx2_g1

0x1442,	// (0x0003f89b) list_medium_line_t3_right_iconx2_g2

0x15d4,	// (0x0003fa2d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0004e160) list_medium_line_t3_right_iconx2_g

0x15de,	// (0x0003fa37) list_medium_line_t3_right_iconx2_t1

0x15ee,	// (0x0003fa47) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0004e167) list_medium_line_t3_right_iconx2_t

0x0b83,	// (0x0003efdc) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x3_t4_g4_g1

0x0b8f,	// (0x0003efe8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0b8f,	// (0x0003efe8) list_medium_line_x3_t4_g4_g2

0x0d48,	// (0x0003f1a1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d48,	// (0x0003f1a1) list_medium_line_x3_t4_g4_g3

0x15fc,	// (0x0003fa55) list_medium_line_x3_t4_g4_g4_ParamLimits

0x15fc,	// (0x0003fa55) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0004e16c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0004e16c) list_medium_line_x3_t4_g4_g

0x1608,	// (0x0003fa61) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1608,	// (0x0003fa61) list_medium_line_x3_t4_g4_t1

0x161f,	// (0x0003fa78) list_medium_line_x3_t4_g4_t2_ParamLimits

0x161f,	// (0x0003fa78) list_medium_line_x3_t4_g4_t2

0x1634,	// (0x0003fa8d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1634,	// (0x0003fa8d) list_medium_line_x3_t4_g4_t3

0x1649,	// (0x0003faa2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1649,	// (0x0003faa2) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0004e175) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0004e175) list_medium_line_x3_t4_g4_t

0x1666,	// (0x0003fabf) list_single_dyc_row_text_pane_t1_ParamLimits

0x1666,	// (0x0003fabf) list_single_dyc_row_text_pane_t1

0x16a3,	// (0x0003fafc) list_single_dyc_row_text_pane_t2_ParamLimits

0x16a3,	// (0x0003fafc) list_single_dyc_row_text_pane_t2

0x1719,	// (0x0003fb72) list_single_dyc_row_text_pane_t3_ParamLimits

0x1719,	// (0x0003fb72) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0004e17e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0004e17e) list_single_dyc_row_text_pane_t

0x17f0,	// (0x0003fc49) list_single_dyc_row_pane_g1_ParamLimits

0x17f0,	// (0x0003fc49) list_single_dyc_row_pane_g1

0x17fc,	// (0x0003fc55) list_single_dyc_row_pane_g2_ParamLimits

0x17fc,	// (0x0003fc55) list_single_dyc_row_pane_g2

0x1808,	// (0x0003fc61) list_single_dyc_row_pane_g3_ParamLimits

0x1808,	// (0x0003fc61) list_single_dyc_row_pane_g3

0x1814,	// (0x0003fc6d) list_single_dyc_row_pane_g4_ParamLimits

0x1814,	// (0x0003fc6d) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0004e18b) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0004e18b) list_single_dyc_row_pane_g

0x1820,	// (0x0003fc79) list_single_dyc_row_text_pane_ParamLimits

0x1820,	// (0x0003fc79) list_single_dyc_row_text_pane

0xa12f,	// (0x00048588) bg_sp_fs_scroll_pane

0xe7bf,	// (0x0004cc18) thumb_sp_fs_scroll_pane

0x0fd3,	// (0x0003f42c) list_medium_line_g1_ParamLimits

0x0fd3,	// (0x0003f42c) list_medium_line_g1

0x183f,	// (0x0003fc98) list_medium_line_t1_ParamLimits

0x183f,	// (0x0003fc98) list_medium_line_t1

0x0b83,	// (0x0003efdc) list_medium_line_x2_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x2_g1

0x0b8f,	// (0x0003efe8) list_medium_line_x2_g2_ParamLimits

0x0b8f,	// (0x0003efe8) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0004e194) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0004e194) list_medium_line_x2_g

0x1854,	// (0x0003fcad) list_medium_line_x2_t1_ParamLimits

0x1854,	// (0x0003fcad) list_medium_line_x2_t1

0x0b83,	// (0x0003efdc) list_medium_line_x3_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x3_g1

0x0b8f,	// (0x0003efe8) list_medium_line_x3_g2_ParamLimits

0x0b8f,	// (0x0003efe8) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0004e194) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0004e194) list_medium_line_x3_g

0x1854,	// (0x0003fcad) list_medium_line_x3_t1_ParamLimits

0x1854,	// (0x0003fcad) list_medium_line_x3_t1

0xe7c8,	// (0x0004cc21) thumb_sp_fs_scroll_pane_g1

0xe7d1,	// (0x0004cc2a) thumb_sp_fs_scroll_pane_g2

0xe7da,	// (0x0004cc33) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004e199) thumb_sp_fs_scroll_pane_g

0xe7c8,	// (0x0004cc21) bg_sp_fs_scroll_pane_g1

0xe7d1,	// (0x0004cc2a) bg_sp_fs_scroll_pane_g2

0xe7da,	// (0x0004cc33) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004e199) bg_sp_fs_scroll_pane_g

0x0b83,	// (0x0003efdc) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b83,	// (0x0003efdc) list_medium_line_x2_t3_g4_g1

0x0c2b,	// (0x0003f084) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0c2b,	// (0x0003f084) list_medium_line_x2_t3_g4_g2

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0b8f,	// (0x0003efe8) list_medium_line_x2_t3_g4_g3

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b9b,	// (0x0003eff4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004d71b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004d71b) list_medium_line_x2_t3_g4_g

0x186a,	// (0x0003fcc3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x186a,	// (0x0003fcc3) list_medium_line_x2_t3_g4_t1

0x1880,	// (0x0003fcd9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1880,	// (0x0003fcd9) list_medium_line_x2_t3_g4_t2

0x0bd0,	// (0x0003f029) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0bd0,	// (0x0003f029) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0004e1a0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0004e1a0) list_medium_line_x2_t3_g4_t

0x0fd3,	// (0x0003f42c) list_medium_line_g2_g1_ParamLimits

0x0fd3,	// (0x0003f42c) list_medium_line_g2_g1

0x0fdf,	// (0x0003f438) list_medium_line_g2_g2_ParamLimits

0x0fdf,	// (0x0003f438) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004de59) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004de59) list_medium_line_g2_g

0x1899,	// (0x0003fcf2) list_medium_line_g2_t1_ParamLimits

0x1899,	// (0x0003fcf2) list_medium_line_g2_t1

0x0fd3,	// (0x0003f42c) list_medium_line_t3_g2_g1_ParamLimits

0x0fd3,	// (0x0003f42c) list_medium_line_t3_g2_g1

0x0fdf,	// (0x0003f438) list_medium_line_t3_g2_g2_ParamLimits

0x0fdf,	// (0x0003f438) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004de59) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004de59) list_medium_line_t3_g2_g

0x18ae,	// (0x0003fd07) list_medium_line_t3_g2_t1_ParamLimits

0x18ae,	// (0x0003fd07) list_medium_line_t3_g2_t1

0x18c8,	// (0x0003fd21) list_medium_line_t3_g2_t2_ParamLimits

0x18c8,	// (0x0003fd21) list_medium_line_t3_g2_t2

0x18de,	// (0x0003fd37) list_medium_line_t3_g2_t3_ParamLimits

0x18de,	// (0x0003fd37) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0004e1a7) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0004e1a7) list_medium_line_t3_g2_t

0x1442,	// (0x0003f89b) list_medium_line_right_icon_g1

0x18f5,	// (0x0003fd4e) list_medium_line_right_icon_t1

0x0fd3,	// (0x0003f42c) list_medium_line_t2_g1_ParamLimits

0x0fd3,	// (0x0003f42c) list_medium_line_t2_g1

0x1903,	// (0x0003fd5c) list_medium_line_t2_t1_ParamLimits

0x1903,	// (0x0003fd5c) list_medium_line_t2_t1

0x191d,	// (0x0003fd76) list_medium_line_t2_t2_ParamLimits

0x191d,	// (0x0003fd76) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0004e1ae) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0004e1ae) list_medium_line_t2_t

0x0fd3,	// (0x0003f42c) list_medium_line_t3_g1_ParamLimits

0x0fd3,	// (0x0003f42c) list_medium_line_t3_g1

0x1932,	// (0x0003fd8b) list_medium_line_t3_t1_ParamLimits

0x1932,	// (0x0003fd8b) list_medium_line_t3_t1

0x1949,	// (0x0003fda2) list_medium_line_t3_t2_ParamLimits

0x1949,	// (0x0003fda2) list_medium_line_t3_t2

0x195e,	// (0x0003fdb7) list_medium_line_t3_t3_ParamLimits

0x195e,	// (0x0003fdb7) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0004e1b3) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0004e1b3) list_medium_line_t3_t

0x0fd3,	// (0x0003f42c) list_medium_line_g3_g1_ParamLimits

0x0fd3,	// (0x0003f42c) list_medium_line_g3_g1

0x1970,	// (0x0003fdc9) list_medium_line_g3_g2_ParamLimits

0x1970,	// (0x0003fdc9) list_medium_line_g3_g2

0x0fdf,	// (0x0003f438) list_medium_line_g3_g3_ParamLimits

0x0fdf,	// (0x0003f438) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0004e1ba) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0004e1ba) list_medium_line_g3_g

0x197c,	// (0x0003fdd5) list_medium_line_g3_t1_ParamLimits

0x197c,	// (0x0003fdd5) list_medium_line_g3_t1

0x0fd3,	// (0x0003f42c) list_medium_line_t2_g3_g1_ParamLimits

0x0fd3,	// (0x0003f42c) list_medium_line_t2_g3_g1

0x1970,	// (0x0003fdc9) list_medium_line_t2_g3_g2_ParamLimits

0x1970,	// (0x0003fdc9) list_medium_line_t2_g3_g2

0x0fdf,	// (0x0003f438) list_medium_line_t2_g3_g3_ParamLimits

0x0fdf,	// (0x0003f438) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0004e1ba) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0004e1ba) list_medium_line_t2_g3_g

0x1991,	// (0x0003fdea) list_medium_line_t2_g3_t1_ParamLimits

0x1991,	// (0x0003fdea) list_medium_line_t2_g3_t1

0x19a8,	// (0x0003fe01) list_medium_line_t2_g3_t2_ParamLimits

0x19a8,	// (0x0003fe01) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0004e1c1) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0004e1c1) list_medium_line_t2_g3_t

0x0fd3,	// (0x0003f42c) list_medium_line_t3_g3_g1_ParamLimits

0x0fd3,	// (0x0003f42c) list_medium_line_t3_g3_g1

0x1970,	// (0x0003fdc9) list_medium_line_t3_g3_g2_ParamLimits

0x1970,	// (0x0003fdc9) list_medium_line_t3_g3_g2

0x0fdf,	// (0x0003f438) list_medium_line_t3_g3_g3_ParamLimits

0x0fdf,	// (0x0003f438) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0004e1ba) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0004e1ba) list_medium_line_t3_g3_g

0x19bd,	// (0x0003fe16) list_medium_line_t3_g3_t1_ParamLimits

0x19bd,	// (0x0003fe16) list_medium_line_t3_g3_t1

0x19d1,	// (0x0003fe2a) list_medium_line_t3_g3_t2_ParamLimits

0x19d1,	// (0x0003fe2a) list_medium_line_t3_g3_t2

0x19e3,	// (0x0003fe3c) list_medium_line_t3_g3_t3_ParamLimits

0x19e3,	// (0x0003fe3c) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0004e1c6) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0004e1c6) list_medium_line_t3_g3_t

0x15cc,	// (0x0003fa25) list_medium_line_right_iconx2_g1

0x1442,	// (0x0003f89b) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004e1cd) list_medium_line_right_iconx2_g

0x19f7,	// (0x0003fe50) list_medium_line_right_iconx2_t1

0x15cc,	// (0x0003fa25) list_medium_line_t2_right_iconx2_g1

0x1442,	// (0x0003f89b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004e1cd) list_medium_line_t2_right_iconx2_g

0x1a05,	// (0x0003fe5e) list_medium_line_t2_right_iconx2_t1

0x1a15,	// (0x0003fe6e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0004e1d2) list_medium_line_t2_right_iconx2_t

0x1a23,	// (0x0003fe7c) list_medium_line_x4_t4_t1

0x1a31,	// (0x0003fe8a) list_medium_line_x4_t4_t2

0x1a41,	// (0x0003fe9a) list_medium_line_x4_t4_t3

0x1a51,	// (0x0003feaa) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0004e1d7) list_medium_line_x4_t4_t

0x93b6,	// (0x0004780f) tport_appsw_pane_ParamLimits

0x93b6,	// (0x0004780f) tport_appsw_pane

0x93c4,	// (0x0004781d) tport_contact_pane_ParamLimits

0x93c4,	// (0x0004781d) tport_contact_pane

0x93d4,	// (0x0004782d) tport_listscroll_pane_ParamLimits

0x93d4,	// (0x0004782d) tport_listscroll_pane

0x93e4,	// (0x0004783d) cell_tport_appsw_pane_ParamLimits

0x93e4,	// (0x0004783d) cell_tport_appsw_pane

0xcf1c,	// (0x0004b375) tport_appsw_pane_g1_ParamLimits

0xcf1c,	// (0x0004b375) tport_appsw_pane_g1

0xe7e3,	// (0x0004cc3c) tport_contact_pane_g1

0xe7ec,	// (0x0004cc45) tport_contact_pane_t1

0xe7fa,	// (0x0004cc53) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0004e1e0) tport_contact_pane_t

0xe808,	// (0x0004cc61) list_tport_pane

0xe811,	// (0x0004cc6a) scroll_pane_cp_030

0x9419,	// (0x00047872) cell_tport_appsw_pane_g1

0x9429,	// (0x00047882) cell_tport_appsw_pane_t1

0x9437,	// (0x00047890) grid_highlight_pane_cp019

0x943f,	// (0x00047898) list_tport_double_graphic_pane_ParamLimits

0x943f,	// (0x00047898) list_tport_double_graphic_pane

0xa986,	// (0x00048ddf) list_highlight_pane_cp023_ParamLimits

0xa986,	// (0x00048ddf) list_highlight_pane_cp023

0x944c,	// (0x000478a5) list_tport_double_graphic_pane_g1_ParamLimits

0x944c,	// (0x000478a5) list_tport_double_graphic_pane_g1

0x9459,	// (0x000478b2) list_tport_double_graphic_pane_t1_ParamLimits

0x9459,	// (0x000478b2) list_tport_double_graphic_pane_t1

0x946e,	// (0x000478c7) list_tport_double_graphic_pane_t2_ParamLimits

0x946e,	// (0x000478c7) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0004e1ec) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0004e1ec) list_tport_double_graphic_pane_t

0xa12f,	// (0x00048588) main_cale_note_pane

0x7869,	// (0x00045cc2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7869,	// (0x00045cc2) cell_vitu2_function_top_wide_pane_cp01

0x8fa9,	// (0x00047402) wait_bar_pane_cp05_ParamLimits

0xa986,	// (0x00048ddf) listscroll_cmail_pane

0xe822,	// (0x0004cc7b) list_cmail_pane

0x948a,	// (0x000478e3) list_cmail_body_pane

0x94a3,	// (0x000478fc) list_single_cmail_header_caption_pane

0x94c4,	// (0x0004791d) list_single_cmail_header_detail_pane_ParamLimits

0x94c4,	// (0x0004791d) list_single_cmail_header_detail_pane

0x94f5,	// (0x0004794e) list_single_cmail_header_caption_pane_t1

0x1a61,	// (0x0003feba) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1a61,	// (0x0003feba) list_single_cmail_header_detail_pane_g1

0x1a79,	// (0x0003fed2) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1a79,	// (0x0003fed2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0004e1f1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0004e1f1) list_single_cmail_header_detail_pane_g

0x1a85,	// (0x0003fede) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1a85,	// (0x0003fede) list_single_cmail_header_detail_pane_t1

0x1af1,	// (0x0003ff4a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1af1,	// (0x0003ff4a) list_single_cmail_header_editor_pane_bg

0xe30b,	// (0x0004c764) list_cmail_body_pane_g1

0xe84f,	// (0x0004cca8) list_cmail_body_pane_t1

0xd6d1,	// (0x0004bb2a) list_single_cmail_header_editor_pane_bg_g1

0xad12,	// (0x0004916b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6e1,	// (0x0004bb3a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6d9,	// (0x0004bb32) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd916,	// (0x0004bd6f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd701,	// (0x0004bb5a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6f1,	// (0x0004bb4a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6f9,	// (0x0004bb52) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacf2,	// (0x0004914b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9505,	// (0x0004795e) calenote_gesture_pane_ParamLimits

0x9505,	// (0x0004795e) calenote_gesture_pane

0x951f,	// (0x00047978) calenote_window_pane_ParamLimits

0x951f,	// (0x00047978) calenote_window_pane

0xe85d,	// (0x0004ccb6) popup_note_window_cp01

0x9537,	// (0x00047990) calenote_swipe_1_pane_ParamLimits

0x9537,	// (0x00047990) calenote_swipe_1_pane

0x9307,	// (0x00047760) calenote_swipe_2_pane_ParamLimits

0x9307,	// (0x00047760) calenote_swipe_2_pane

0xe66a,	// (0x0004cac3) calenote_swipe_1_pane_g1_ParamLimits

0xe66a,	// (0x0004cac3) calenote_swipe_1_pane_g1

0xe677,	// (0x0004cad0) calenote_swipe_1_pane_g2_ParamLimits

0xe677,	// (0x0004cad0) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0004e115) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0004e115) calenote_swipe_1_pane_g

0xe86f,	// (0x0004ccc8) calenote_swipe_1_pane_t1_ParamLimits

0xe86f,	// (0x0004ccc8) calenote_swipe_1_pane_t1

0xe66a,	// (0x0004cac3) calenote_swipe_2_pane_g1_ParamLimits

0xe66a,	// (0x0004cac3) calenote_swipe_2_pane_g1

0xe88e,	// (0x0004cce7) calenote_swipe_2_pane_g2_ParamLimits

0xe88e,	// (0x0004cce7) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0004e1fd) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0004e1fd) calenote_swipe_2_pane_g

0xe89a,	// (0x0004ccf3) calenote_swipe_2_pane_t1_ParamLimits

0xe89a,	// (0x0004ccf3) calenote_swipe_2_pane_t1

0xa12f,	// (0x00048588) main_mup_navstr_pane

0x65a8,	// (0x00044a01) main_mup3_pane_t7_ParamLimits

0x65a8,	// (0x00044a01) main_mup3_pane_t7

0x6fab,	// (0x00045404) main_mp4_pane_g6_ParamLimits

0x6fab,	// (0x00045404) main_mp4_pane_g6

0x731b,	// (0x00045774) main_image3_pane_t4_ParamLimits

0x731b,	// (0x00045774) main_image3_pane_t4

0x954a,	// (0x000479a3) popup_navstr_preview_pane_ParamLimits

0x954a,	// (0x000479a3) popup_navstr_preview_pane

0x9556,	// (0x000479af) scroll_navstr_pane_ParamLimits

0x9556,	// (0x000479af) scroll_navstr_pane

0xa12f,	// (0x00048588) bg_popup_preview_window_pane_cp04

0xe8c1,	// (0x0004cd1a) popup_navstr_preview_pane_t1

0x9562,	// (0x000479bb) scroll_navstr_pane_g1_ParamLimits

0x9562,	// (0x000479bb) scroll_navstr_pane_g1

0x956f,	// (0x000479c8) scroll_navstr_pane_t1_ParamLimits

0x956f,	// (0x000479c8) scroll_navstr_pane_t1

0xe866,	// (0x0004ccbf) bg_button_pane_cp014

0xe866,	// (0x0004ccbf) bg_button_pane_cp030

0x13a2,	// (0x0003f7fb) list_double_fisheye_pane_g4_ParamLimits

0x13a2,	// (0x0003f7fb) list_double_fisheye_pane_g4

0x13ae,	// (0x0003f807) list_double_fisheye_pane_g5_ParamLimits

0x13ae,	// (0x0003f807) list_double_fisheye_pane_g5

0xe82a,	// (0x0004cc83) sp_fs_scroll_pane_cp03

0xcb83,	// (0x0004afdc) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe742,	// (0x0004cb9b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0004e132) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe74e,	// (0x0004cba7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9480,	// (0x000478d9) sp_fs_scroll_pane_cp02

0xa9ff,	// (0x00048e58) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9ff,	// (0x00048e58) popup_sp_fs_calendar_preview_list_single_pane

0xa12f,	// (0x00048588) main_cam6_pano_pane

0xa986,	// (0x00048ddf) main_mup3_pane_ParamLimits

0xa12f,	// (0x00048588) main_phacti_pane

0x8e7c,	// (0x000472d5) bg_button_pane_cp11

0x8e94,	// (0x000472ed) main_mobtv_info_pane_g2_ParamLimits

0x8e94,	// (0x000472ed) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0004e092) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0004e092) main_mobtv_info_pane_g

0x9046,	// (0x0004749f) sc_clock_pane_t5_ParamLimits

0x9046,	// (0x0004749f) sc_clock_pane_t5

0x90f5,	// (0x0004754e) main_radioblah_pane_g1_ParamLimits

0xe5b6,	// (0x0004ca0f) main_radioblah_pane_t3_ParamLimits

0xe5b6,	// (0x0004ca0f) main_radioblah_pane_t3

0xe5ce,	// (0x0004ca27) main_radioblah_pane_t4_ParamLimits

0xe5ce,	// (0x0004ca27) main_radioblah_pane_t4

0x9113,	// (0x0004756c) main_radioblah_text_pane_ParamLimits

0x9113,	// (0x0004756c) main_radioblah_text_pane

0x9120,	// (0x00047579) main_radioblah_info_pane_g1_ParamLimits

0x91b9,	// (0x00047612) main_radioblah_info_pane_t4_ParamLimits

0x91b9,	// (0x00047612) main_radioblah_info_pane_t4

0xa986,	// (0x00048ddf) main_sp_fs_calendar_pane

0x9581,	// (0x000479da) main_phacti_pane_g1

0x9589,	// (0x000479e2) phacti_note_pane_ParamLimits

0x9589,	// (0x000479e2) phacti_note_pane

0xe8d8,	// (0x0004cd31) phacti_term_pane_ParamLimits

0xe8d8,	// (0x0004cd31) phacti_term_pane

0xe8ed,	// (0x0004cd46) phacti_note_pane_t1_ParamLimits

0xe8ed,	// (0x0004cd46) phacti_note_pane_t1

0x1b08,	// (0x0003ff61) phacti_term_pane_g1

0x1b10,	// (0x0003ff69) phacti_term_pane_t1_ParamLimits

0x1b10,	// (0x0003ff69) phacti_term_pane_t1

0xe904,	// (0x0004cd5d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe90c,	// (0x0004cd65) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0004e207) popup_sp_fs_calendar_preview_list_single_pane_g

0xe914,	// (0x0004cd6d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe914,	// (0x0004cd6d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe92a,	// (0x0004cd83) aid_popup_sp_fs_bg_corner_pane

0xcc87,	// (0x0004b0e0) popup_sp_fs_calendar_preview_bg_pane_g1

0xa12f,	// (0x00048588) popup_sp_fs_calendar_preview_bg_pane

0xe932,	// (0x0004cd8b) popup_sp_fs_calendar_preview_list_pane

0xc822,	// (0x0004ac7b) bg_main_sp_fs_cale_pane_ParamLimits

0xc822,	// (0x0004ac7b) bg_main_sp_fs_cale_pane

0x1b43,	// (0x0003ff9c) listscroll_cale_mrui_pane_ParamLimits

0x1b43,	// (0x0003ff9c) listscroll_cale_mrui_pane

0x1b58,	// (0x0003ffb1) listscroll_sp_fs_schedule_track_pane

0x1b61,	// (0x0003ffba) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1b61,	// (0x0003ffba) main_sp_fs_ctrlbar_pane_cp01

0xe93a,	// (0x0004cd93) main_sp_fs_ribbon_pane

0x1b74,	// (0x0003ffcd) popup_sp_fs_cale_preview_window

0x95e8,	// (0x00047a41) list_single_sp_fs_schedule_track_pane_ParamLimits

0x95e8,	// (0x00047a41) list_single_sp_fs_schedule_track_pane

0x2194,	// (0x000405ed) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2194,	// (0x000405ed) bg_sp_fs_highlight_list_pane_cp03

0x95fd,	// (0x00047a56) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x95fd,	// (0x00047a56) list_single_sp_fs_schedule_track_pane_g1

0x9609,	// (0x00047a62) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9609,	// (0x00047a62) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0004e20c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0004e20c) list_single_sp_fs_schedule_track_pane_g

0x9615,	// (0x00047a6e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9615,	// (0x00047a6e) list_single_sp_fs_schedule_track_pane_t1

0x9633,	// (0x00047a8c) sp_fs_schedule_track_pane_ParamLimits

0x9633,	// (0x00047a8c) sp_fs_schedule_track_pane

0xe942,	// (0x0004cd9b) sp_fs_schedule_track_pane_g1

0xe94a,	// (0x0004cda3) sp_fs_schedule_track_pane_g2

0xe952,	// (0x0004cdab) sp_fs_schedule_track_pane_g3

0xe95a,	// (0x0004cdb3) sp_fs_schedule_track_pane_g4

0xe962,	// (0x0004cdbb) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0004e211) sp_fs_schedule_track_pane_g

0xd6d1,	// (0x0004bb2a) bg_sp_fs_schedule_viewer_highlight_g1

0xad12,	// (0x0004916b) bg_sp_fs_schedule_viewer_highlight_g2

0xd6d9,	// (0x0004bb32) bg_sp_fs_schedule_viewer_highlight_g3

0xd6e1,	// (0x0004bb3a) bg_sp_fs_schedule_viewer_highlight_g4

0xd916,	// (0x0004bd6f) bg_sp_fs_schedule_viewer_highlight_g5

0xd6f1,	// (0x0004bb4a) bg_sp_fs_schedule_viewer_highlight_g6

0xd6f9,	// (0x0004bb52) bg_sp_fs_schedule_viewer_highlight_g7

0xd701,	// (0x0004bb5a) bg_sp_fs_schedule_viewer_highlight_g8

0xacf2,	// (0x0004914b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0004e21c) bg_sp_fs_schedule_viewer_highlight_g

0xa12f,	// (0x00048588) bg_main_sp_fs_ribbon_pane

0x9645,	// (0x00047a9e) main_sp_fs_ribbon_pane_g1

0xe96a,	// (0x0004cdc3) main_sp_fs_ribbon_pane_t1

0x964e,	// (0x00047aa7) main_sp_fs_ribbon_pane_t2

0xe979,	// (0x0004cdd2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0004e22f) main_sp_fs_ribbon_pane_t

0xe988,	// (0x0004cde1) main_sp_fs_ribbon_scheduler_pane

0xe990,	// (0x0004cde9) bg_main_sp_fs_ribbon_pane_g1

0xe999,	// (0x0004cdf2) bg_main_sp_fs_ribbon_pane_g2

0xe9a2,	// (0x0004cdfb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0004e236) bg_main_sp_fs_ribbon_pane_g

0xe9aa,	// (0x0004ce03) main_sp_fs_ribbon_scheduler_pane_g1

0xe9b3,	// (0x0004ce0c) main_sp_fs_ribbon_scheduler_pane_g2

0xe9bc,	// (0x0004ce15) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0004e23d) main_sp_fs_ribbon_scheduler_pane_g

0xe9c5,	// (0x0004ce1e) list_cale_mrui_pane

0x965d,	// (0x00047ab6) sp_fs_scroll_pane_cp07_ParamLimits

0x965d,	// (0x00047ab6) sp_fs_scroll_pane_cp07

0x9679,	// (0x00047ad2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9679,	// (0x00047ad2) bg_sp_fs_schedule_viewer_highlight

0xe9d2,	// (0x0004ce2b) list_single_sp_fs_schedule_track_pane_cp01

0xe9da,	// (0x0004ce33) list_sp_fs_schedule_track_pane

0xe9e2,	// (0x0004ce3b) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e2,	// (0x0004ce3b) sp_fs_scroll_pane_cp06

0xcc87,	// (0x0004b0e0) bgmain_sp_fs_calendar_pane_g1

0x1b86,	// (0x0003ffdf) list_single_cale_mrui_pane_ParamLimits

0x1b86,	// (0x0003ffdf) list_single_cale_mrui_pane

0x1b9b,	// (0x0003fff4) list_single_cale_mrui_row_pane_ParamLimits

0x1b9b,	// (0x0003fff4) list_single_cale_mrui_row_pane

0x1bb1,	// (0x0004000a) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1bb1,	// (0x0004000a) list_single_cale_mrui_row_pane_g1

0x1be9,	// (0x00040042) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1be9,	// (0x00040042) list_single_cale_mrui_row_pane_t1

0x1bfb,	// (0x00040054) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1bfb,	// (0x00040054) list_single_cale_mrui_row_pane_t2

0x1c61,	// (0x000400ba) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1c61,	// (0x000400ba) list_single_cale_mrui_row_pane_t3

0x1c90,	// (0x000400e9) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1c90,	// (0x000400e9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0004e24b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0004e24b) list_single_cale_mrui_row_pane_t

0x1cbf,	// (0x00040118) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1cbf,	// (0x00040118) list_single_cmail_header_editor_pane_bg_cp01

0x1ce3,	// (0x0004013c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1ce3,	// (0x0004013c) list_single_cmail_header_editor_pane_bg_cp02

0x9686,	// (0x00047adf) main_radioblah_text_pane_t1_ParamLimits

0x9686,	// (0x00047adf) main_radioblah_text_pane_t1

0xea01,	// (0x0004ce5a) cam6_indi_pane_cp01

0xea09,	// (0x0004ce62) cam6_mode_pane_cp01

0xea11,	// (0x0004ce6a) cam6_pano_pane

0xea1a,	// (0x0004ce73) cam6_zoom_pane_cp01

0xea24,	// (0x0004ce7d) cam6_pano_image_pane

0xea2d,	// (0x0004ce86) cam6_pano_pane_g1

0xe30b,	// (0x0004c764) cam6_pano_pane_g2

0xea36,	// (0x0004ce8f) cam6_pano_pane_g3

0xea3f,	// (0x0004ce98) cam6_pano_pane_g4

0xd221,	// (0x0004b67a) cam6_pano_pane_g5

0xea48,	// (0x0004cea1) cam6_pano_pane_g6

0xea50,	// (0x0004cea9) cam6_pano_pane_g7

0xea58,	// (0x0004ceb1) cam6_pano_pane_g8

0xea61,	// (0x0004ceba) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0004e254) cam6_pano_pane_g

0xa12f,	// (0x00048588) main_browser_tag_pane

0xe8b9,	// (0x0004cd12) grid_navstr_albumart_pane

0xea6c,	// (0x0004cec5) cell_navstr_albumart_pane_ParamLimits

0xea6c,	// (0x0004cec5) cell_navstr_albumart_pane

0xea8b,	// (0x0004cee4) cell_navstr_albumart_pane_g1

0xc62f,	// (0x0004aa88) cell_navstr_albumart_pane_g2

0xc63f,	// (0x0004aa98) cell_navstr_albumart_pane_g3

0xc637,	// (0x0004aa90) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0004e267) cell_navstr_albumart_pane_g

0x96a0,	// (0x00047af9) bt_list_pane_ParamLimits

0x96a0,	// (0x00047af9) bt_list_pane

0x96b9,	// (0x00047b12) bt_list_pane_t1

0x96c8,	// (0x00047b21) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0004e270) bt_list_pane_t

0xa12f,	// (0x00048588) main_cale_prevew_pane

0x96d7,	// (0x00047b30) popup_cale_preview_window_ParamLimits

0x96d7,	// (0x00047b30) popup_cale_preview_window

0xa986,	// (0x00048ddf) bg_popup_preview_window_pane_cp05_ParamLimits

0xa986,	// (0x00048ddf) bg_popup_preview_window_pane_cp05

0xea93,	// (0x0004ceec) list_cale_preview_pane_ParamLimits

0xea93,	// (0x0004ceec) list_cale_preview_pane

0x96f2,	// (0x00047b4b) list_double_cale_preview_pane_ParamLimits

0x96f2,	// (0x00047b4b) list_double_cale_preview_pane

0x9706,	// (0x00047b5f) list_single_cale_preview_pane_ParamLimits

0x9706,	// (0x00047b5f) list_single_cale_preview_pane

0x971e,	// (0x00047b77) list_single_cale_preview_pane_g1

0x9726,	// (0x00047b7f) list_single_cale_preview_pane_t1_ParamLimits

0x9726,	// (0x00047b7f) list_single_cale_preview_pane_t1

0x973b,	// (0x00047b94) list_double_cale_preview_pane_g1

0x9743,	// (0x00047b9c) list_double_cale_preview_pane_t1_ParamLimits

0x9743,	// (0x00047b9c) list_double_cale_preview_pane_t1

0x9758,	// (0x00047bb1) list_double_cale_preview_pane_t2_ParamLimits

0x9758,	// (0x00047bb1) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0004e275) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0004e275) list_double_cale_preview_pane_t

0xa12f,	// (0x00048588) main_ezdial_pane

0xa986,	// (0x00048ddf) main_sp_fs_email_pane_ParamLimits

0x9321,	// (0x0004777a) cmail_ddmenu_btn01_pane_ParamLimits

0x9321,	// (0x0004777a) cmail_ddmenu_btn01_pane

0x933e,	// (0x00047797) cmail_ddmenu_btn02_pane_ParamLimits

0x933e,	// (0x00047797) cmail_ddmenu_btn02_pane

0x935c,	// (0x000477b5) cmail_ddmenu_btn03_pane_ParamLimits

0x935c,	// (0x000477b5) cmail_ddmenu_btn03_pane

0x1468,	// (0x0003f8c1) main_sp_fs_ctrlbar_pane_ParamLimits

0x1482,	// (0x0003f8db) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x948a,	// (0x000478e3) list_cmail_body_pane_ParamLimits

0xe839,	// (0x0004cc92) bg_button_pane_cp12

0xe842,	// (0x0004cc9b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe842,	// (0x0004cc9b) list_single_cmail_header_detail_pane_g3

0x1acd,	// (0x0003ff26) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1acd,	// (0x0003ff26) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0004e1f8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0004e1f8) list_single_cmail_header_detail_pane_t

0x1b25,	// (0x0003ff7e) phacti_term_pane_t2_ParamLimits

0x1b25,	// (0x0003ff7e) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0004e202) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0004e202) phacti_term_pane_t

0xea9f,	// (0x0004cef8) aid_size_list_single_double

0x9770,	// (0x00047bc9) popup_ezdial_listscroll_window

0x9792,	// (0x00047beb) popup_number_entry_window_cp01

0xb3ed,	// (0x00049846) bg_popup_call_pane_cp09

0xeaab,	// (0x0004cf04) ezdial_list_pane

0xeab3,	// (0x0004cf0c) scroll_pane_cp23

0xca52,	// (0x0004aeab) bg_button_pane_cp028_ParamLimits

0xca52,	// (0x0004aeab) bg_button_pane_cp028

0x97a0,	// (0x00047bf9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97a0,	// (0x00047bf9) cmail_ddmenu_btn01_pane_g1

0x97b2,	// (0x00047c0b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97b2,	// (0x00047c0b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0004e27a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0004e27a) cmail_ddmenu_btn01_pane_g

0xeabb,	// (0x0004cf14) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeabb,	// (0x0004cf14) cmail_ddmenu_btn01_pane_t1

0xc822,	// (0x0004ac7b) bg_button_pane_cp029_ParamLimits

0xc822,	// (0x0004ac7b) bg_button_pane_cp029

0x97be,	// (0x00047c17) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97be,	// (0x00047c17) cmail_ddmenu_btn02_pane_g1

0x97d6,	// (0x00047c2f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97d6,	// (0x00047c2f) cmail_ddmenu_btn02_pane_t1

0x2194,	// (0x000405ed) bg_button_pane_cp031_ParamLimits

0x2194,	// (0x000405ed) bg_button_pane_cp031

0x97be,	// (0x00047c17) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97be,	// (0x00047c17) cmail_ddmenu_btn03_pane_g1

0x97d6,	// (0x00047c2f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97d6,	// (0x00047c2f) cmail_ddmenu_btn03_pane_t1

0x71c4,	// (0x0004561d) cell_dialer2_keypad_pane_t1_ParamLimits

0x71de,	// (0x00045637) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x71de,	// (0x00045637) cell_dialer2_keypad_pane_t1_copy1

0x8ced,	// (0x00047146) ncimui_group_button_pane

0xa986,	// (0x00048ddf) main_sp_fs_calendar_pane_ParamLimits

0x94a3,	// (0x000478fc) list_single_cmail_header_caption_pane_ParamLimits

0x1b3a,	// (0x0003ff93) aid_recal_txt_sm_pane

0xa12f,	// (0x00048588) mian_recal_day_pane

0x1b74,	// (0x0003ffcd) popup_sp_fs_cale_preview_window_ParamLimits

0xead1,	// (0x0004cf2a) list_recal_day_pane

0x1d1b,	// (0x00040174) list_single_recal_day_pane_ParamLimits

0x1d1b,	// (0x00040174) list_single_recal_day_pane

0xeaf8,	// (0x0004cf51) list_single_recal_day_pane_g1_ParamLimits

0xeaf8,	// (0x0004cf51) list_single_recal_day_pane_g1

0x1d2d,	// (0x00040186) list_single_recal_day_pane_g2_ParamLimits

0x1d2d,	// (0x00040186) list_single_recal_day_pane_g2

0x1d39,	// (0x00040192) list_single_recal_day_pane_g3_ParamLimits

0x1d39,	// (0x00040192) list_single_recal_day_pane_g3

0x1d45,	// (0x0004019e) list_single_recal_day_pane_g4_ParamLimits

0x1d45,	// (0x0004019e) list_single_recal_day_pane_g4

0x1d53,	// (0x000401ac) list_single_recal_day_pane_g5_ParamLimits

0x1d53,	// (0x000401ac) list_single_recal_day_pane_g5

0x1d69,	// (0x000401c2) list_single_recal_day_pane_g6_ParamLimits

0x1d69,	// (0x000401c2) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0004e289) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0004e289) list_single_recal_day_pane_g

0x1d7d,	// (0x000401d6) list_single_recal_day_pane_t1

0x1d8f,	// (0x000401e8) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0004e294) list_single_recal_day_pane_t

0x97fa,	// (0x00047c53) ncimui_query_button_pane_ParamLimits

0x97fa,	// (0x00047c53) ncimui_query_button_pane

0x980a,	// (0x00047c63) ncimui_query_button_pane_t1_ParamLimits

0x980a,	// (0x00047c63) ncimui_query_button_pane_t1

0xeb04,	// (0x0004cf5d) ncimui_query_button_pane_t2_ParamLimits

0xeb04,	// (0x0004cf5d) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0004e299) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0004e299) ncimui_query_button_pane_t

0x981d,	// (0x00047c76) query_button_pane_ParamLimits

0x981d,	// (0x00047c76) query_button_pane

0xa12f,	// (0x00048588) bg_button_pane_cp0028

0xeb17,	// (0x0004cf70) query_button_pane_t1

0x55ef,	// (0x00043a48) main_tport_pane_ParamLimits

0x938c,	// (0x000477e5) bg_popup_window_pane_cp01_ParamLimits

0x938c,	// (0x000477e5) bg_popup_window_pane_cp01

0x939a,	// (0x000477f3) heading_pane_cp08_ParamLimits

0x939a,	// (0x000477f3) heading_pane_cp08

0x93a8,	// (0x00047801) heading_pane_cp07_ParamLimits

0x93a8,	// (0x00047801) heading_pane_cp07

0x9419,	// (0x00047872) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0004e1e5) cell_tport_appsw_pane_g

0x0da1,	// (0x0003f1fa) input_candi_list_open_g1

0xaec6,	// (0x0004931f) list_cale_time_pane_g6_ParamLimits

0xaec6,	// (0x0004931f) list_cale_time_pane_g6

0x607a,	// (0x000444d3) aid_size_touch_calib_1_ParamLimits

0x607a,	// (0x000444d3) aid_size_touch_calib_1

0x6086,	// (0x000444df) aid_size_touch_calib_2_ParamLimits

0x6086,	// (0x000444df) aid_size_touch_calib_2

0x6094,	// (0x000444ed) aid_size_touch_calib_3_ParamLimits

0x6094,	// (0x000444ed) aid_size_touch_calib_3

0x60a4,	// (0x000444fd) aid_size_touch_calib_4_ParamLimits

0x60a4,	// (0x000444fd) aid_size_touch_calib_4

0x60b2,	// (0x0004450b) main_touch_calib_button_group_pane_ParamLimits

0x60b2,	// (0x0004450b) main_touch_calib_button_group_pane

0x60c0,	// (0x00044519) main_touch_calib_pane_g1_ParamLimits

0x60cc,	// (0x00044525) main_touch_calib_pane_g2_ParamLimits

0x60d8,	// (0x00044531) main_touch_calib_pane_g3_ParamLimits

0x60e4,	// (0x0004453d) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0004dbaa) main_touch_calib_pane_g_ParamLimits

0x60f0,	// (0x00044549) main_touch_calib_pane_t1_ParamLimits

0x6107,	// (0x00044560) main_touch_calib_pane_t2_ParamLimits

0x6120,	// (0x00044579) main_touch_calib_pane_t3_ParamLimits

0x6136,	// (0x0004458f) main_touch_calib_pane_t4_ParamLimits

0x614c,	// (0x000445a5) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0004dbb3) main_touch_calib_pane_t_ParamLimits

0xcfb7,	// (0x0004b410) list_single_fp_cale_pane_g3_ParamLimits

0xcfb7,	// (0x0004b410) list_single_fp_cale_pane_g3

0xa986,	// (0x00048ddf) bg_button_pane_cp012_ParamLimits

0xa986,	// (0x00048ddf) bg_vkb2_func_pane_cp03_ParamLimits

0x7fcb,	// (0x00046424) cell_vitu2_function_top_pane_g1_ParamLimits

0xa986,	// (0x00048ddf) bg_vkb2_func_pane_cp04_ParamLimits

0x8c73,	// (0x000470cc) main_ncimui_button_group_pane_ParamLimits

0x8c73,	// (0x000470cc) main_ncimui_button_group_pane

0x8cdb,	// (0x00047134) main_ncimui_pane_t3_ParamLimits

0x8cdb,	// (0x00047134) main_ncimui_pane_t3

0xe8cf,	// (0x0004cd28) phacti_button_group_pane

0xea9f,	// (0x0004cef8) aid_size_list_single_double_ParamLimits

0x9770,	// (0x00047bc9) popup_ezdial_listscroll_window_ParamLimits

0x9792,	// (0x00047beb) popup_number_entry_window_cp01_ParamLimits

0x982a,	// (0x00047c83) phacti_button_pane_ParamLimits

0x982a,	// (0x00047c83) phacti_button_pane

0xa12f,	// (0x00048588) bg_button_pane_cp14

0xeb25,	// (0x0004cf7e) phacti_button_pane_t1

0x983b,	// (0x00047c94) main_touch_calib_button_pane_ParamLimits

0x983b,	// (0x00047c94) main_touch_calib_button_pane

0xa8bb,	// (0x00048d14) bg_button_pane_cp18_ParamLimits

0xa8bb,	// (0x00048d14) bg_button_pane_cp18

0xeb33,	// (0x0004cf8c) main_touch_calib_button_pane_t1_ParamLimits

0xeb33,	// (0x0004cf8c) main_touch_calib_button_pane_t1

0xeb5d,	// (0x0004cfb6) main_touch_calib_button_pane_t2_ParamLimits

0xeb5d,	// (0x0004cfb6) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0004e29e) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0004e29e) main_touch_calib_button_pane_t

0xa12f,	// (0x00048588) cell_ncimui_button_pane

0xa12f,	// (0x00048588) bg_button_pane_cp032

0xeb7b,	// (0x0004cfd4) cell_ncimui_button_pane_t1

0x723a,	// (0x00045693) image3_infobar_pane_ParamLimits

0x723a,	// (0x00045693) image3_infobar_pane

0x9068,	// (0x000474c1) fs_bigclock_status_pane_ParamLimits

0x9068,	// (0x000474c1) fs_bigclock_status_pane

0x9075,	// (0x000474ce) main_fs_bigclock_clock_pane_ParamLimits

0x9075,	// (0x000474ce) main_fs_bigclock_clock_pane

0x9091,	// (0x000474ea) main_fs_bigclock_indi_pane_ParamLimits

0x9091,	// (0x000474ea) main_fs_bigclock_indi_pane

0x90c3,	// (0x0004751c) main_fs_bigclock_swipe_pane_ParamLimits

0x90c3,	// (0x0004751c) main_fs_bigclock_swipe_pane

0xa12f,	// (0x00048588) main_fs_clock_dumped_data

0xe418,	// (0x0004c871) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe418,	// (0x0004c871) list_single_fs_bigclock_indicator_pane_g1

0xe442,	// (0x0004c89b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe442,	// (0x0004c89b) list_single_fs_bigclock_indicator_pane_g2

0xe45c,	// (0x0004c8b5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe45c,	// (0x0004c8b5) list_single_fs_bigclock_indicator_pane_g3

0xe476,	// (0x0004c8cf) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe476,	// (0x0004c8cf) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0004e0c6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0004e0c6) list_single_fs_bigclock_indicator_pane_g

0xe4a1,	// (0x0004c8fa) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4a1,	// (0x0004c8fa) list_single_fs_bigclock_indicator_pane_t1

0xe4c9,	// (0x0004c922) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4c9,	// (0x0004c922) list_single_fs_bigclock_indicator_pane_t2

0xe4f1,	// (0x0004c94a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4f1,	// (0x0004c94a) list_single_fs_bigclock_indicator_pane_t3

0xe519,	// (0x0004c972) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe519,	// (0x0004c972) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0004e0d1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0004e0d1) list_single_fs_bigclock_indicator_pane_t

0xeb89,	// (0x0004cfe2) image3_infobar_fav_pane_ParamLimits

0xeb89,	// (0x0004cfe2) image3_infobar_fav_pane

0xeb99,	// (0x0004cff2) image3_infobar_loc_pane_ParamLimits

0xeb99,	// (0x0004cff2) image3_infobar_loc_pane

0xebaf,	// (0x0004d008) image3_infobar_time_pane_ParamLimits

0xebaf,	// (0x0004d008) image3_infobar_time_pane

0xcc87,	// (0x0004b0e0) image3_infobar_time_pane_g1

0xebbf,	// (0x0004d018) image3_infobar_time_pane_t1

0xcc87,	// (0x0004b0e0) image3_infobar_loc_pane_g1

0xebcd,	// (0x0004d026) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0004e2a3) image3_infobar_loc_pane_g

0xebd5,	// (0x0004d02e) image3_infobar_loc_pane_t1

0xcc87,	// (0x0004b0e0) image3_infobar_fav_pane_g1

0xebe3,	// (0x0004d03c) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0004e2a8) image3_infobar_fav_pane_g

0xebeb,	// (0x0004d044) fs_bigclock_status_battery_pane

0xebf4,	// (0x0004d04d) fs_bigclock_status_signal_pane

0xebfd,	// (0x0004d056) fs_bigclock_status_title_pane

0xec06,	// (0x0004d05f) fs_bigclock_status_signal_pane_g1

0xec0f,	// (0x0004d068) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0004e2ad) fs_bigclock_status_signal_pane_g

0xec17,	// (0x0004d070) fs_bigclock_status_battery_pane_g1

0xec20,	// (0x0004d079) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0004e2b2) fs_bigclock_status_battery_pane_g

0xec28,	// (0x0004d081) fs_bigclock_status_title_pane_t1

0xcc87,	// (0x0004b0e0) main_fs_bigclock_clock_pane_g1

0xec36,	// (0x0004d08f) main_fs_bigclock_clock_pane_g2

0xec41,	// (0x0004d09a) main_fs_bigclock_clock_pane_g3

0xec41,	// (0x0004d09a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0004e2b7) main_fs_bigclock_clock_pane_g

0xec4d,	// (0x0004d0a6) main_fs_bigclock_clock_pane_t1

0x984b,	// (0x00047ca4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0004e2c0) main_fs_bigclock_clock_pane_t

0x985a,	// (0x00047cb3) list_single_fs_bigclock_indicator_pane_ParamLimits

0x985a,	// (0x00047cb3) list_single_fs_bigclock_indicator_pane

0x986b,	// (0x00047cc4) list_single_fs_bigclock_pane_ParamLimits

0x986b,	// (0x00047cc4) list_single_fs_bigclock_pane

0xec64,	// (0x0004d0bd) main_fs_bigclock_indicator_pane_t1

0xec73,	// (0x0004d0cc) list_single_fs_bigclock_pane_g1

0xec7b,	// (0x0004d0d4) list_single_fs_bigclock_pane_t1

0xcc87,	// (0x0004b0e0) main_fs_bigclock_swipe_pane_g1

0xecbe,	// (0x0004d117) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0004e2d1) main_fs_bigclock_swipe_pane_g

0xecc6,	// (0x0004d11f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc6,	// (0x0004d11f) main_fs_bigclock_swipe_pane_t1

0x44c2,	// (0x0004291b) call_type_pane_ParamLimits

0xa12f,	// (0x00048588) main_btmg_pane

0x1bdd,	// (0x00040036) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1bdd,	// (0x00040036) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0004e244) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0004e244) list_single_cale_mrui_row_pane_g

0x1d09,	// (0x00040162) list_recal_vselct_arw_lo_pane

0xeaf0,	// (0x0004cf49) list_recal_vselct_arw_up_pane

0x1d11,	// (0x0004016a) list_recal_vselct_pane

0x98c1,	// (0x00047d1a) btmg_button_pane

0x98cd,	// (0x00047d26) main_btmg_pane_g1

0xa12f,	// (0x00048588) bg_button_pane_cp044

0xece3,	// (0x0004d13c) btmg_button_pane_t1

0xc80e,	// (0x0004ac67) aid_listscroll_gen

0xa986,	// (0x00048ddf) main_cntbar_detail_pane

0xe81a,	// (0x0004cc73) list_cmail_folder_pane

0xe82a,	// (0x0004cc83) sp_fs_scroll_pane_cp03_ParamLimits

0x1da1,	// (0x000401fa) list_single_fs_dyc_pane_cp01_ParamLimits

0x1da1,	// (0x000401fa) list_single_fs_dyc_pane_cp01

0xecf1,	// (0x0004d14a) aid_size_cmail_indent

0x1dc2,	// (0x0004021b) list_single_dyc_row_pane_cp01

0x98f5,	// (0x00047d4e) cntbar_detail_list_pane_ParamLimits

0x98f5,	// (0x00047d4e) cntbar_detail_list_pane

0x9935,	// (0x00047d8e) main_cntbar_detail_cont_pane_ParamLimits

0x9935,	// (0x00047d8e) main_cntbar_detail_cont_pane

0x44b6,	// (0x0004290f) scroll_pane_cp032_ParamLimits

0x44b6,	// (0x0004290f) scroll_pane_cp032

0x9941,	// (0x00047d9a) cntbar_detail_list_event_pane_ParamLimits

0x9941,	// (0x00047d9a) cntbar_detail_list_event_pane

0x9903,	// (0x00047d5c) cntbar_detail_list_shct_pane

0xad60,	// (0x000491b9) aid_list_gen

0xecfa,	// (0x0004d153) aid_scroll

0xed03,	// (0x0004d15c) aid_size_touch_scroll_bar

0x853d,	// (0x00046996) aid_list_double

0xed0c,	// (0x0004d165) aid_list_single

0x1243,	// (0x0003f69c) aid_list_single_lg

0x1dcb,	// (0x00040224) aid_list_z_g_a_sm

0x1dd3,	// (0x0004022c) aid_list_z_g_d

0x1ddb,	// (0x00040234) aid_txt_z_prm

0x1de9,	// (0x00040242) aid_txt_z_prm_cp01

0x1df7,	// (0x00040250) aid_txt_z_sec

0x9951,	// (0x00047daa) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9951,	// (0x00047daa) main_cntbar_detail_cont_pane_g1

0x995e,	// (0x00047db7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x995e,	// (0x00047db7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0004e2d6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0004e2d6) main_cntbar_detail_cont_pane_g

0xed15,	// (0x0004d16e) main_cntbar_detail_cont_pane_t1

0xed23,	// (0x0004d17c) main_cntbar_detail_cont_pane_t2

0xed31,	// (0x0004d18a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0004e2db) main_cntbar_detail_cont_pane_t

0x996a,	// (0x00047dc3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x996a,	// (0x00047dc3) cell_cntbar_detail_list_shct_pane

0xed3f,	// (0x0004d198) cntbar_detail_list_shct_pane_g1

0xed48,	// (0x0004d1a1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0004e2e2) cntbar_detail_list_shct_pane_g

0x997e,	// (0x00047dd7) cntbar_detail_list_event_pane_g1_ParamLimits

0x997e,	// (0x00047dd7) cntbar_detail_list_event_pane_g1

0x998a,	// (0x00047de3) cntbar_detail_list_event_pane_g2_ParamLimits

0x998a,	// (0x00047de3) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0004e2e7) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0004e2e7) cntbar_detail_list_event_pane_g

0x99f8,	// (0x00047e51) cntbar_detail_list_event_pane_t1_ParamLimits

0x99f8,	// (0x00047e51) cntbar_detail_list_event_pane_t1

0x9a0d,	// (0x00047e66) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a0d,	// (0x00047e66) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0004e2f4) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0004e2f4) cntbar_detail_list_event_pane_t

0xcc87,	// (0x0004b0e0) cell_cntbar_detail_list_shct_pane_g1

0x4895,	// (0x00042cee) navi_pane_mv_g3

0xa986,	// (0x00048ddf) main_cntbar_detail_pane_ParamLimits

0xa12f,	// (0x00048588) main_notif_wgt_pane

0x6ee4,	// (0x0004533d) aid_tch_main_mp4_pane_g4

0x7123,	// (0x0004557c) popup_slider_window_cp02

0x1cff,	// (0x00040158) list_recal_day_event_pane

0x98d5,	// (0x00047d2e) cntbar_detail_btn_pane_ParamLimits

0x98d5,	// (0x00047d2e) cntbar_detail_btn_pane

0x98e5,	// (0x00047d3e) cntbar_detail_btn_pane_cp01_ParamLimits

0x98e5,	// (0x00047d3e) cntbar_detail_btn_pane_cp01

0x9903,	// (0x00047d5c) cntbar_detail_list_shct_pane_ParamLimits

0x990f,	// (0x00047d68) cntbar_detail_pane_g1_ParamLimits

0x990f,	// (0x00047d68) cntbar_detail_pane_g1

0x991f,	// (0x00047d78) cntbar_detail_pane_t1_ParamLimits

0x991f,	// (0x00047d78) cntbar_detail_pane_t1

0x9996,	// (0x00047def) cntbar_detail_list_event_pane_g3_ParamLimits

0x9996,	// (0x00047def) cntbar_detail_list_event_pane_g3

0x99ae,	// (0x00047e07) cntbar_detail_list_event_pane_g4_ParamLimits

0x99ae,	// (0x00047e07) cntbar_detail_list_event_pane_g4

0x99c6,	// (0x00047e1f) cntbar_detail_list_event_pane_g5_ParamLimits

0x99c6,	// (0x00047e1f) cntbar_detail_list_event_pane_g5

0x99de,	// (0x00047e37) cntbar_detail_list_event_pane_g6_ParamLimits

0x99de,	// (0x00047e37) cntbar_detail_list_event_pane_g6

0x9a22,	// (0x00047e7b) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a22,	// (0x00047e7b) cntbar_detail_list_event_pane_t3

0x9a34,	// (0x00047e8d) popup_notif_wgt_window_ParamLimits

0x9a34,	// (0x00047e8d) popup_notif_wgt_window

0x9a44,	// (0x00047e9d) popup_submenu_window_cp01_ParamLimits

0x9a44,	// (0x00047e9d) popup_submenu_window_cp01

0xb3ed,	// (0x00049846) bg_popup_window_pane_cp10

0xed51,	// (0x0004d1aa) listscroll_notif_wgt_pane

0xed63,	// (0x0004d1bc) list_notif_wgt_window

0xed6c,	// (0x0004d1c5) scroll_pane_cp033

0x9a54,	// (0x00047ead) list_notif_wgt_row_pane_ParamLimits

0x9a54,	// (0x00047ead) list_notif_wgt_row_pane

0xed75,	// (0x0004d1ce) aid_size_list_notif_wgt_del

0xed82,	// (0x0004d1db) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0004d1e7) list_notif_wgt_row_pane_g2

0xeda2,	// (0x0004d1fb) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0004e2fb) list_notif_wgt_row_pane_g

0xedaf,	// (0x0004d208) list_notif_wgt_row_pane_t1

0xedc5,	// (0x0004d21e) list_notif_wgt_row_pane_t2

0xedd7,	// (0x0004d230) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0004e302) list_notif_wgt_row_pane_t

0xd91e,	// (0x0004bd77) list_recal_day_event_pane_g1

0xede9,	// (0x0004d242) list_recal_day_event_pane_t1

0xa12f,	// (0x00048588) bg_button_pane_cp045

0xedf8,	// (0x0004d251) cntbar_detail_btn_pane_t1

0xc822,	// (0x0004ac7b) main_callh_pane_ParamLimits

0xc822,	// (0x0004ac7b) main_callh_pane

0xa12f,	// (0x00048588) main_coverflow0_pane

0xa12f,	// (0x00048588) main_wgtman_pane

0x90db,	// (0x00047534) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x90db,	// (0x00047534) main_fs_bigclock_unlock_btn_pane

0x9411,	// (0x0004786a) bg_button_pane_cp16

0x9421,	// (0x0004787a) cell_tport_appsw_pane_g3

0x9a65,	// (0x00047ebe) cf0_flow_pane_ParamLimits

0x9a65,	// (0x00047ebe) cf0_flow_pane

0xee06,	// (0x0004d25f) listscroll_cf0_pane

0xee11,	// (0x0004d26a) main_cf0_pane_g1

0x9a74,	// (0x00047ecd) main_cf0_pane_t1_ParamLimits

0x9a74,	// (0x00047ecd) main_cf0_pane_t1

0x9a88,	// (0x00047ee1) main_cf0_pane_t2_ParamLimits

0x9a88,	// (0x00047ee1) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0004e30e) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0004e30e) main_cf0_pane_t

0xee23,	// (0x0004d27c) scroll_pane_cp11

0x9a9c,	// (0x00047ef5) cf0_flow_pane_g1

0x9aa4,	// (0x00047efd) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0004e313) cf0_flow_pane_g

0x9aac,	// (0x00047f05) cf0_flow_pane_t1

0xa12f,	// (0x00048588) main_call6_pane

0xa12f,	// (0x00048588) main_calllock_pane

0x9aba,	// (0x00047f13) call6_btn_grp_pane_ParamLimits

0x9aba,	// (0x00047f13) call6_btn_grp_pane

0x9ac7,	// (0x00047f20) call6_pane_g1_ParamLimits

0x9ac7,	// (0x00047f20) call6_pane_g1

0x9ad7,	// (0x00047f30) popup_call6_1st_window_ParamLimits

0x9ad7,	// (0x00047f30) popup_call6_1st_window

0x9ae5,	// (0x00047f3e) popup_call6_2nd_window_ParamLimits

0x9ae5,	// (0x00047f3e) popup_call6_2nd_window

0x9af3,	// (0x00047f4c) cell_call6_btn_pane_ParamLimits

0x9af3,	// (0x00047f4c) cell_call6_btn_pane

0xb3ed,	// (0x00049846) bg_popup_call2_in_pane_cp03

0xee2e,	// (0x0004d287) popup_call6_1st_window_g1

0xee36,	// (0x0004d28f) popup_call6_1st_window_g2

0xee3e,	// (0x0004d297) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0004e318) popup_call6_1st_window_g

0xee46,	// (0x0004d29f) popup_call6_1st_window_t1

0xee55,	// (0x0004d2ae) popup_call6_1st_window_t2

0xee65,	// (0x0004d2be) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0004e31f) popup_call6_1st_window_t

0xb3ed,	// (0x00049846) bg_popup_call2_in_pane_cp04

0xee2e,	// (0x0004d287) popup_call6_2nd_window_g1

0xee36,	// (0x0004d28f) popup_call6_2nd_window_g2

0xee3e,	// (0x0004d297) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0004e318) popup_call6_2nd_window_g

0xee46,	// (0x0004d29f) popup_call6_2nd_window_t1

0xa12f,	// (0x00048588) bg_button_pane_cp15

0xee75,	// (0x0004d2ce) cell_call6_btn_pane_g1

0xee7e,	// (0x0004d2d7) cell_call6_btn_pane_t1

0x9b02,	// (0x00047f5b) listscroll_wgtman_pane_ParamLimits

0x9b02,	// (0x00047f5b) listscroll_wgtman_pane

0x9b1e,	// (0x00047f77) wgtman_btn_pane_ParamLimits

0x9b1e,	// (0x00047f77) wgtman_btn_pane

0xb2b3,	// (0x0004970c) aid_scroll_copy1

0xee8d,	// (0x0004d2e6) list_wgtman_pane

0x9b53,	// (0x00047fac) wgtman_btn_pane_g1_ParamLimits

0x9b53,	// (0x00047fac) wgtman_btn_pane_g1

0x9b7b,	// (0x00047fd4) wgtman_btn_pane_t1_ParamLimits

0x9b7b,	// (0x00047fd4) wgtman_btn_pane_t1

0xee97,	// (0x0004d2f0) wgtman_btn_pane_t2_ParamLimits

0xee97,	// (0x0004d2f0) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0004e326) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0004e326) wgtman_btn_pane_t

0x9bb2,	// (0x0004800b) listrow_wgtman_pane_ParamLimits

0x9bb2,	// (0x0004800b) listrow_wgtman_pane

0x9bc6,	// (0x0004801f) listrow_wgtman_pane_g1

0x9bd3,	// (0x0004802c) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0004e32b) listrow_wgtman_pane_g

0x1e05,	// (0x0004025e) listrow_wgtman_pane_t1

0x1e1d,	// (0x00040276) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0004e330) listrow_wgtman_pane_t

0x1e43,	// (0x0004029c) wait_bar_pane_cp09

0xeeae,	// (0x0004d307) main_calllock_btn_pane

0xeeb8,	// (0x0004d311) main_calllock_pane_g1

0xa12f,	// (0x00048588) bg_button_pane_cp17

0xeec4,	// (0x0004d31d) main_calllock_btn_pane_g1

0xeecd,	// (0x0004d326) main_calllock_btn_pane_t1

0xa12f,	// (0x00048588) main_dialer3_pane

0xa12f,	// (0x00048588) main_fmrd2_pane

0xcc87,	// (0x0004b0e0) main_fs_bigclock_unlock_btn_pane_g1

0xeee4,	// (0x0004d33d) main_fs_bigclock_unlock_btn_pane_t1

0x9bf1,	// (0x0004804a) area_fmrd2_info_pane_ParamLimits

0x9bf1,	// (0x0004804a) area_fmrd2_info_pane

0x9bfd,	// (0x00048056) area_fmrd2_visual_pane_ParamLimits

0x9bfd,	// (0x00048056) area_fmrd2_visual_pane

0x9c0b,	// (0x00048064) fmrd2_indi_pane_ParamLimits

0x9c0b,	// (0x00048064) fmrd2_indi_pane

0x9c18,	// (0x00048071) area_fmrd2_visual_pane_g1

0x9c20,	// (0x00048079) area_fmrd2_visual_pane_t1

0x9c30,	// (0x00048089) area_fmrd2_visual_pane_t2

0x9c40,	// (0x00048099) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0004e33a) area_fmrd2_visual_pane_t

0x9c50,	// (0x000480a9) area_fmrd2_info_pane_g1

0x9c58,	// (0x000480b1) area_fmrd2_info_pane_t1

0x9c68,	// (0x000480c1) area_fmrd2_info_pane_t2

0x9c78,	// (0x000480d1) area_fmrd2_info_pane_t3

0x9c88,	// (0x000480e1) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0004e341) area_fmrd2_info_pane_t

0x9c98,	// (0x000480f1) fmrd2_indi_pane_t1

0x9ca8,	// (0x00048101) fmrd2_indi_pane_t2

0x9cb8,	// (0x00048111) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0004e34a) fmrd2_indi_pane_t

0xe485,	// (0x0004c8de) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe485,	// (0x0004c8de) list_single_fs_bigclock_indicator_pane_g5

0xe535,	// (0x0004c98e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe535,	// (0x0004c98e) list_single_fs_bigclock_indicator_pane_t5

0x959f,	// (0x000479f8) aid_cell_bcale_month_pane_ParamLimits

0x959f,	// (0x000479f8) aid_cell_bcale_month_pane

0x95bd,	// (0x00047a16) bcale_month_pane_ParamLimits

0x95bd,	// (0x00047a16) bcale_month_pane

0x95d9,	// (0x00047a32) bcale_preview_pane_ParamLimits

0x95d9,	// (0x00047a32) bcale_preview_pane

0xec7b,	// (0x0004d0d4) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9a,	// (0x0004d0f3) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9a,	// (0x0004d0f3) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0004e2cc) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004e2cc) list_single_fs_bigclock_pane_t

0xeedc,	// (0x0004d335) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0004e335) main_fs_bigclock_unlock_btn_pane_g

0x9cc8,	// (0x00048121) aid_dia3_key_size_ParamLimits

0x9cc8,	// (0x00048121) aid_dia3_key_size

0x9cd4,	// (0x0004812d) aid_dia3_listrow_size_ParamLimits

0x9cd4,	// (0x0004812d) aid_dia3_listrow_size

0x9ce4,	// (0x0004813d) dia3_keypad_fun_pane_ParamLimits

0x9ce4,	// (0x0004813d) dia3_keypad_fun_pane

0x9cf4,	// (0x0004814d) dia3_keypad_num_pane_ParamLimits

0x9cf4,	// (0x0004814d) dia3_keypad_num_pane

0x9d04,	// (0x0004815d) dia3_listscroll_pane_ParamLimits

0x9d04,	// (0x0004815d) dia3_listscroll_pane

0x9d12,	// (0x0004816b) dia3_numentry_pane_ParamLimits

0x9d12,	// (0x0004816b) dia3_numentry_pane

0xeef2,	// (0x0004d34b) dia3_list_pane

0xeefd,	// (0x0004d356) scroll_pane_cp12

0xa12f,	// (0x00048588) bg_dia3_numentry_pane

0x9d20,	// (0x00048179) dia3_numentry_pane_t1

0x9d2f,	// (0x00048188) cell_dia3_key_num_pane

0x9d37,	// (0x00048190) cell_dia3_key0_fun_pane_ParamLimits

0x9d37,	// (0x00048190) cell_dia3_key0_fun_pane

0x9d44,	// (0x0004819d) cell_dia3_key1_fun_pane_ParamLimits

0x9d44,	// (0x0004819d) cell_dia3_key1_fun_pane

0x9d51,	// (0x000481aa) dia3_listrow_pane

0xe183,	// (0x0004c5dc) bg_dia3_numentry_pane_g1

0xa12f,	// (0x00048588) bg_button_pane_cp21

0xef08,	// (0x0004d361) cell_dia3_key_num_pane_t1

0xef16,	// (0x0004d36f) cell_dia3_key_num_pane_t2

0xef25,	// (0x0004d37e) cell_dia3_key_num_pane_t3

0xef34,	// (0x0004d38d) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0004e351) cell_dia3_key_num_pane_t

0xa12f,	// (0x00048588) bg_button_pane_cp19

0x9d5e,	// (0x000481b7) cell_dia3_key0_fun_pane_g1

0xa12f,	// (0x00048588) bg_button_pane_cp20

0x9d66,	// (0x000481bf) cell_dia3_key1_fun_pane_g1

0x9d6e,	// (0x000481c7) area_left_week_number_pane

0x9d81,	// (0x000481da) area_top_day_name_pane

0x9d8f,	// (0x000481e8) frame_month_view_pane

0xef43,	// (0x0004d39c) grid_month_view_pane

0x9da4,	// (0x000481fd) cell_top_day_name_pane_ParamLimits

0x9da4,	// (0x000481fd) cell_top_day_name_pane

0x9dc0,	// (0x00048219) cell_area_left_week_number_pane_ParamLimits

0x9dc0,	// (0x00048219) cell_area_left_week_number_pane

0x9de1,	// (0x0004823a) cell_month_view_pane_ParamLimits

0x9de1,	// (0x0004823a) cell_month_view_pane

0xef51,	// (0x0004d3aa) frm_month_g1

0x9e0d,	// (0x00048266) frm_month_g2

0x9e1e,	// (0x00048277) frm_month_g3

0x9e2f,	// (0x00048288) frm_month_g4

0x9e40,	// (0x00048299) frm_month_g5

0x9e51,	// (0x000482aa) frm_month_g6

0x9e64,	// (0x000482bd) frm_month_g7

0xef5e,	// (0x0004d3b7) frm_month_g8

0x9e77,	// (0x000482d0) frm_month_g9

0x9e84,	// (0x000482dd) frm_month_g10

0x9e91,	// (0x000482ea) frm_month_g11

0x9e9e,	// (0x000482f7) frm_month_g12

0x9eab,	// (0x00048304) frm_month_g13

0x9eba,	// (0x00048313) frm_month_g14

0x9ec9,	// (0x00048322) frm_month_g15

0x9ed8,	// (0x00048331) frm_month_g16

0x000f,

0xff01,	// (0x0004e35a) frm_month_g

0xef6b,	// (0x0004d3c4) cell_top_day_name_pane_t1

0x9ee7,	// (0x00048340) cell_area_left_week_number_pane_g1

0x9ef6,	// (0x0004834f) cell_area_left_week_number_pane_t1

0xceb7,	// (0x0004b310) cell_month_view_pane_g1

0x9f0c,	// (0x00048365) cell_month_view_pane_t1

0xa12f,	// (0x00048588) main_fps_pane

0xe70a,	// (0x0004cb63) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe70a,	// (0x0004cb63) cmail_ddmenu_btn02_pane_cp1

0xe726,	// (0x0004cb7f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe726,	// (0x0004cb7f) cmail_ddmenu_btn02_pane_cp2

0x97ca,	// (0x00047c23) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97ca,	// (0x00047c23) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0004e27f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0004e27f) cmail_ddmenu_btn02_pane_g

0x97e8,	// (0x00047c41) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97e8,	// (0x00047c41) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0004e284) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0004e284) cmail_ddmenu_btn02_pane_t

0x9f22,	// (0x0004837b) fps_text_pane_ParamLimits

0x9f22,	// (0x0004837b) fps_text_pane

0x9f2f,	// (0x00048388) main_fps_pane_g1_ParamLimits

0x9f2f,	// (0x00048388) main_fps_pane_g1

0x9f3b,	// (0x00048394) wait_bar_pane_cp010_ParamLimits

0x9f3b,	// (0x00048394) wait_bar_pane_cp010

0x9f47,	// (0x000483a0) fps_text_pane_t1_ParamLimits

0x9f47,	// (0x000483a0) fps_text_pane_t1

0x7549,	// (0x000459a2) cam4_image_uncrop_pane_g1

0x7552,	// (0x000459ab) cam4_image_uncrop_pane_g2

0x755b,	// (0x000459b4) cam4_image_uncrop_pane_g3

0x7564,	// (0x000459bd) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004dd47) cam4_image_uncrop_pane_g

0x9d51,	// (0x000481aa) dia3_listrow_pane_ParamLimits

0xa12f,	// (0x00048588) main_phob2_pane

0x93f3,	// (0x0004784c) cell_tport_appsw_pane_cp02_ParamLimits

0x93f3,	// (0x0004784c) cell_tport_appsw_pane_cp02

0x9402,	// (0x0004785b) cell_tport_appsw_pane_cp03_ParamLimits

0x9402,	// (0x0004785b) cell_tport_appsw_pane_cp03

0xa12f,	// (0x00048588) phob2_contact_card_pane

0xa12f,	// (0x00048588) phob2_listscroll_pane

0xef7e,	// (0x0004d3d7) phob2_list_pane

0xef86,	// (0x0004d3df) scroll_pane_cp034

0x9f60,	// (0x000483b9) phob2_cc_data_pane_ParamLimits

0x9f60,	// (0x000483b9) phob2_cc_data_pane

0x9f7c,	// (0x000483d5) phob2_cc_listscroll_pane_ParamLimits

0x9f7c,	// (0x000483d5) phob2_cc_listscroll_pane

0x9f98,	// (0x000483f1) list_double_large_graphic_phob2_pane_ParamLimits

0x9f98,	// (0x000483f1) list_double_large_graphic_phob2_pane

0x9fb0,	// (0x00048409) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fb0,	// (0x00048409) list_double_large_graphic_phob2_pane_g1

0x1e55,	// (0x000402ae) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1e55,	// (0x000402ae) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0004e37b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0004e37b) list_double_large_graphic_phob2_pane_g

0x1e61,	// (0x000402ba) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1e61,	// (0x000402ba) list_double_large_graphic_phob2_pane_t1

0x1e76,	// (0x000402cf) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1e76,	// (0x000402cf) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0004e380) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0004e380) list_double_large_graphic_phob2_pane_t

0xa12f,	// (0x00048588) list_highlight_pane_cp024

0x9fc6,	// (0x0004841f) phob2_cc_button_pane

0x9fce,	// (0x00048427) phob2_cc_data_pane_g1_ParamLimits

0x9fce,	// (0x00048427) phob2_cc_data_pane_g1

0x9fda,	// (0x00048433) phob2_cc_data_pane_g2_ParamLimits

0x9fda,	// (0x00048433) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0004e385) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0004e385) phob2_cc_data_pane_g

0x9fe6,	// (0x0004843f) phob2_cc_data_pane_t1_ParamLimits

0x9fe6,	// (0x0004843f) phob2_cc_data_pane_t1

0x9ff8,	// (0x00048451) phob2_cc_data_pane_t2_ParamLimits

0x9ff8,	// (0x00048451) phob2_cc_data_pane_t2

0xa00a,	// (0x00048463) phob2_cc_data_pane_t3_ParamLimits

0xa00a,	// (0x00048463) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0004e38a) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0004e38a) phob2_cc_data_pane_t

0xef8e,	// (0x0004d3e7) phob2_cc_list_pane_ParamLimits

0xef8e,	// (0x0004d3e7) phob2_cc_list_pane

0xdb53,	// (0x0004bfac) scroll_pane_cp035_ParamLimits

0xdb53,	// (0x0004bfac) scroll_pane_cp035

0xa986,	// (0x00048ddf) bg_button_pane_cp033

0xef9a,	// (0x0004d3f3) phob2_cc_button_pane_g1

0xefa6,	// (0x0004d3ff) phob2_cc_button_pane_t1

0xefbb,	// (0x0004d414) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0004e391) phob2_cc_button_pane_t

0xa01c,	// (0x00048475) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa01c,	// (0x00048475) list_double_large_graphic_phob2_cc_pane

0xa038,	// (0x00048491) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa038,	// (0x00048491) list_double_large_graphic_phob2_cc_pane_g1

0x1e88,	// (0x000402e1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1e88,	// (0x000402e1) list_double_large_graphic_phob2_cc_pane_g2

0x1e97,	// (0x000402f0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1e97,	// (0x000402f0) list_double_large_graphic_phob2_cc_pane_g3

0x1ea6,	// (0x000402ff) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1ea6,	// (0x000402ff) list_double_large_graphic_phob2_cc_pane_g4

0x1eb7,	// (0x00040310) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1eb7,	// (0x00040310) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0004e396) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0004e396) list_double_large_graphic_phob2_cc_pane_g

0x1ec6,	// (0x0004031f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1ec6,	// (0x0004031f) list_double_large_graphic_phob2_cc_pane_t1

0x1eef,	// (0x00040348) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1eef,	// (0x00040348) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0004e3a1) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0004e3a1) list_double_large_graphic_phob2_cc_pane_t

0xefcd,	// (0x0004d426) list_highlight_pane_cp025_ParamLimits

0xefcd,	// (0x0004d426) list_highlight_pane_cp025

0xa986,	// (0x00048ddf) bg_button_pane_cp033_ParamLimits

0xef9a,	// (0x0004d3f3) phob2_cc_button_pane_g1_ParamLimits

0xefa6,	// (0x0004d3ff) phob2_cc_button_pane_t1_ParamLimits

0xefbb,	// (0x0004d414) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0004e391) phob2_cc_button_pane_t_ParamLimits

0x21a2,	// (0x000405fb) popup_wgtman_window

0xd7ef,	// (0x0004bc48) scroll_pane_cp038

0x9b3b,	// (0x00047f94) wgtman_btn_pane_cp_01_ParamLimits

0x9b3b,	// (0x00047f94) wgtman_btn_pane_cp_01

0xefdb,	// (0x0004d434) wgtman_content_pane

0xefe4,	// (0x0004d43d) wgtman_heading_pane

0xa12f,	// (0x00048588) bg_heading_pane_cp02

0xefed,	// (0x0004d446) wgtman_heading_pane_g1

0xeff5,	// (0x0004d44e) wgtman_heading_pane_t1

0xf003,	// (0x0004d45c) scroll_pane_cp036

0xf00b,	// (0x0004d464) wgtman_list_pane

0xf013,	// (0x0004d46c) wgtman_list_pane_t1_ParamLimits

0xf013,	// (0x0004d46c) wgtman_list_pane_t1

0x74a6,	// (0x000458ff) cam4_grid_pane

0x1017,	// (0x0003f470) bg_button_pane_cp015_ParamLimits

0x8168,	// (0x000465c1) bg_button_pane_cp016_ParamLimits

0x817b,	// (0x000465d4) bg_button_pane_cp017_ParamLimits

0x105b,	// (0x0003f4b4) popup_vitu2_query_window_g3_ParamLimits

0x105b,	// (0x0003f4b4) popup_vitu2_query_window_g3

0x10d4,	// (0x0003f52d) popup_vitu2_query_window_t6_ParamLimits

0x10d4,	// (0x0003f52d) popup_vitu2_query_window_t6

0x10ff,	// (0x0003f558) popup_vitu2_query_window_t7_ParamLimits

0x10ff,	// (0x0003f558) popup_vitu2_query_window_t7

0xeb49,	// (0x0004cfa2) cam4_grid_pane_g1

0xeb52,	// (0x0004cfab) cam4_grid_pane_g2

0xf02d,	// (0x0004d486) cam4_grid_pane_g3

0xf036,	// (0x0004d48f) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0004e3a6) cam4_grid_pane_g

0x32c9,	// (0x00041722) aid_placing_vt_slider_lsc_ParamLimits

0x35fc,	// (0x00041a55) vidtel_button_pane_ParamLimits

0x35fc,	// (0x00041a55) vidtel_button_pane

0xf041,	// (0x0004d49a) bg_button_pane_cp034

0xa049,	// (0x000484a2) vidtel_button_pane_g1

0xf04b,	// (0x0004d4a4) vidtel_button_pane_t1

0xd90e,	// (0x0004bd67) aid_size_vtel_slider_touch

0xdb53,	// (0x0004bfac) scroll_pane_cp039

0xe1c1,	// (0x0004c61a) ncim_query_button_pane_cp01_ParamLimits

0xe1e0,	// (0x0004c639) ncimui_query_pane_g1_ParamLimits

0xa986,	// (0x00048ddf) input_focus_pane_cp012_ParamLimits

0xe205,	// (0x0004c65e) ncim_query_entry_pane_t1_ParamLimits

0xdb53,	// (0x0004bfac) scroll_pane_cp039_ParamLimits

0x4807,	// (0x00042c60) navi_pane_bcale_mc_g1

0x480f,	// (0x00042c68) navi_pane_bcale_mc_t1

0xe763,	// (0x0004cbbc) main_sp_fs_email_pane_g1

0xe76f,	// (0x0004cbc8) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0004e137) main_sp_fs_email_pane_g

0xe9f4,	// (0x0004ce4d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f4,	// (0x0004ce4d) list_single_cale_mrui_row_pane_g3

0x1d5f,	// (0x000401b8) list_single_recal_day_pane_g5_event_pane

0x1d75,	// (0x000401ce) list_single_recal_day_pane_g7

0xf059,	// (0x0004d4b2) list_recal_day_event_pane_cp01

0xf062,	// (0x0004d4bb) list_recal_vselct_arw_lo_pane_cp01

0xf06a,	// (0x0004d4c3) list_recal_vselct_arw_up_pane_cp01

0xf072,	// (0x0004d4cb) list_recal_vselct_pane_cp01

0xd91e,	// (0x0004bd77) list_recal_day_event_pane_cp01_g1

0x1f18,	// (0x00040371) list_recal_day_event_pane_cp01_t1

0x1d7d,	// (0x000401d6) list_single_recal_day_pane_t1_ParamLimits

0x1d8f,	// (0x000401e8) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0004e294) list_single_recal_day_pane_t_ParamLimits

0xa7f6,	// (0x00048c4f) bg_notes_pane_ParamLimits

0xa899,	// (0x00048cf2) list_notes_pane_ParamLimits

0x24f1,	// (0x0004094a) scroll_pane_cp06_ParamLimits

0xa8bb,	// (0x00048d14) main_notes_pane_ParamLimits

0xa12f,	// (0x00048588) main_welc_pane

0xa051,	// (0x000484aa) main_welc_body_pane_ParamLimits

0xa051,	// (0x000484aa) main_welc_body_pane

0xa06c,	// (0x000484c5) main_welc_opti_pane_ParamLimits

0xa06c,	// (0x000484c5) main_welc_opti_pane

0xa0a1,	// (0x000484fa) main_welc_pane_t1_ParamLimits

0xa0a1,	// (0x000484fa) main_welc_pane_t1

0xa0bf,	// (0x00048518) main_welc_body_row_pane_ParamLimits

0xa0bf,	// (0x00048518) main_welc_body_row_pane

0xa0d9,	// (0x00048532) main_welc_opti_row_pane_ParamLimits

0xa0d9,	// (0x00048532) main_welc_opti_row_pane

0xf07c,	// (0x0004d4d5) main_welc_opti_row_pane_g1

0xf084,	// (0x0004d4dd) main_welc_opti_row_pane_t1

0xf093,	// (0x0004d4ec) main_welc_body_row_pane_t1

0xed5b,	// (0x0004d1b4) popup_notif_wgt_heading_pane

0xed75,	// (0x0004d1ce) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0004d1db) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0004d1e7) list_notif_wgt_row_pane_g2_ParamLimits

0xeda2,	// (0x0004d1fb) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0004e2fb) list_notif_wgt_row_pane_g_ParamLimits

0xedaf,	// (0x0004d208) list_notif_wgt_row_pane_t1_ParamLimits

0xedc5,	// (0x0004d21e) list_notif_wgt_row_pane_t2_ParamLimits

0xedd7,	// (0x0004d230) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0004e302) list_notif_wgt_row_pane_t_ParamLimits

0x9bc6,	// (0x0004801f) listrow_wgtman_pane_g1_ParamLimits

0x9bd3,	// (0x0004802c) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0004e32b) listrow_wgtman_pane_g_ParamLimits

0x1e05,	// (0x0004025e) listrow_wgtman_pane_t1_ParamLimits

0x1e1d,	// (0x00040276) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0004e330) listrow_wgtman_pane_t_ParamLimits

0x1e43,	// (0x0004029c) wait_bar_pane_cp09_ParamLimits

0xa12f,	// (0x00048588) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0004d4fb) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0004d503) popup_notif_wgt_heading_pane_t1

0xa12f,	// (0x00048588) main_vids_pane

0xa12f,	// (0x00048588) vids_listscroll_pane

0xa0ea,	// (0x00048543) scroll_pane_cp040

0xa12f,	// (0x00048588) vids_list_pane

0xa0f5,	// (0x0004854e) vids_list_double_pane_ParamLimits

0xa0f5,	// (0x0004854e) vids_list_double_pane

0xa108,	// (0x00048561) vids_list_double_pane_g1

0xa111,	// (0x0004856a) vids_list_double_pane_t1

0xa121,	// (0x0004857a) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0004e3b4) vids_list_double_pane_t

0xa986,	// (0x00048ddf) main_ncimui_pane_ParamLimits

0x8c8b,	// (0x000470e4) main_ncimui_pane_g1_ParamLimits

0x8c99,	// (0x000470f2) main_ncimui_pane_g2_ParamLimits

0x8c99,	// (0x000470f2) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0004e03c) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0004e03c) main_ncimui_pane_g

0xa087,	// (0x000484e0) main_welc_pane_g1_ParamLimits

0xa087,	// (0x000484e0) main_welc_pane_g1

0xa093,	// (0x000484ec) main_welc_pane_g2_ParamLimits

0xa093,	// (0x000484ec) main_welc_pane_g2

0x0001,

0xff56,	// (0x0004e3af) main_welc_pane_g_ParamLimits

0xff56,	// (0x0004e3af) main_welc_pane_g

0xa7f6,	// (0x00048c4f) listscroll_mce_pane_ParamLimits

0x48d1,	// (0x00042d2a) wait_bar_pane_cp10

0xc816,	// (0x0004ac6f) main_cale_day_pane_ParamLimits

0xc816,	// (0x0004ac6f) main_cale_week_pane_ParamLimits

0xa7f6,	// (0x00048c4f) main_messa_pane_ParamLimits

0x68ae,	// (0x00044d07) main_clock2_btn_pane_ParamLimits

0x68ae,	// (0x00044d07) main_clock2_btn_pane

0xd03f,	// (0x0004b498) main_clock2_btn_pane_cp01_ParamLimits

0xd03f,	// (0x0004b498) main_clock2_btn_pane_cp01

0xe9c5,	// (0x0004ce1e) list_cale_mrui_pane_ParamLimits

0xee1b,	// (0x0004d274) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0004e309) main_cf0_pane_g

0x9d6e,	// (0x000481c7) area_left_week_number_pane_ParamLimits

0x9d81,	// (0x000481da) area_top_day_name_pane_ParamLimits

0x9d8f,	// (0x000481e8) frame_month_view_pane_ParamLimits

0xef43,	// (0x0004d39c) grid_month_view_pane_ParamLimits

0xef51,	// (0x0004d3aa) frm_month_g1_ParamLimits

0x9e0d,	// (0x00048266) frm_month_g2_ParamLimits

0x9e1e,	// (0x00048277) frm_month_g3_ParamLimits

0x9e2f,	// (0x00048288) frm_month_g4_ParamLimits

0x9e40,	// (0x00048299) frm_month_g5_ParamLimits

0x9e51,	// (0x000482aa) frm_month_g6_ParamLimits

0x9e64,	// (0x000482bd) frm_month_g7_ParamLimits

0xef5e,	// (0x0004d3b7) frm_month_g8_ParamLimits

0x9e77,	// (0x000482d0) frm_month_g9_ParamLimits

0x9e84,	// (0x000482dd) frm_month_g10_ParamLimits

0x9e91,	// (0x000482ea) frm_month_g11_ParamLimits

0x9e9e,	// (0x000482f7) frm_month_g12_ParamLimits

0x9eab,	// (0x00048304) frm_month_g13_ParamLimits

0x9eba,	// (0x00048313) frm_month_g14_ParamLimits

0x9ec9,	// (0x00048322) frm_month_g15_ParamLimits

0x9ed8,	// (0x00048331) frm_month_g16_ParamLimits

0xff01,	// (0x0004e35a) frm_month_g_ParamLimits

0xef6b,	// (0x0004d3c4) cell_top_day_name_pane_t1_ParamLimits

0x9ee7,	// (0x00048340) cell_area_left_week_number_pane_g1_ParamLimits

0x9ef6,	// (0x0004834f) cell_area_left_week_number_pane_t1_ParamLimits

0xceb7,	// (0x0004b310) cell_month_view_pane_g1_ParamLimits

0x9f0c,	// (0x00048365) cell_month_view_pane_t1_ParamLimits

0xa7ee,	// (0x00048c47) main_clock2_btn_pane_g1

0xf0b8,	// (0x0004d511) main_clock2_btn_pane_t1

0xa986,	// (0x00048ddf) listscroll_cmail_pane_ParamLimits

0xe763,	// (0x0004cbbc) main_sp_fs_email_pane_g1_ParamLimits

0xe76f,	// (0x0004cbc8) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0004e137) main_sp_fs_email_pane_g_ParamLimits

0xead1,	// (0x0004cf2a) list_recal_day_pane_ParamLimits

0xeae2,	// (0x0004cf3b) mian_recal_day_pane_t1

0x172b,	// (0x0003fb84) list_single_dyc_row_text_pane_t4_ParamLimits

0x172b,	// (0x0003fb84) list_single_dyc_row_text_pane_t4

0x1768,	// (0x0003fbc1) list_single_dyc_row_text_pane_t5_ParamLimits

0x1768,	// (0x0003fbc1) list_single_dyc_row_text_pane_t5

0x17de,	// (0x0003fc37) list_single_dyc_row_text_pane_t6_ParamLimits

0x17de,	// (0x0003fc37) list_single_dyc_row_text_pane_t6

0xaea5,	// (0x000492fe) aid_mgn_list_cale_time_pane

0xa986,	// (0x00048ddf) main_gallery2_pane_ParamLimits

0xd053,	// (0x0004b4ac) main_clock2_pane_cp01_t1

0xd063,	// (0x0004b4bc) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0004dc1d) main_clock2_pane_cp01_t

0x29cb,	// (0x00040e24) cale_week_scroll_pane_g16_ParamLimits

0x29cb,	// (0x00040e24) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
