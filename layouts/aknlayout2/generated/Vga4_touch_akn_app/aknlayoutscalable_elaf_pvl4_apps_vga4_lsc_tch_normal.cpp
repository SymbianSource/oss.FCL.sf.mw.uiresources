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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000f832 };

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
0xfbd7,	// (0x0000f409) Screen

0xfbe3,	// (0x0000f415) application_window

0xfc1f,	// (0x0000f451) area_bottom_pane_ParamLimits

0xfc1f,	// (0x0000f451) area_bottom_pane

0xfc58,	// (0x0000f48a) area_top_pane_ParamLimits

0xfc58,	// (0x0000f48a) area_top_pane

0x9557,	// (0x00018d89) call_video_uplink_pane_ParamLimits

0x9557,	// (0x00018d89) call_video_uplink_pane

0xfce6,	// (0x0000f518) main_pane_ParamLimits

0xfce6,	// (0x0000f518) main_pane

0xbdf3,	// (0x0001b625) context_pane

0x388c,	// (0x000130be) navi_pane

0x38bc,	// (0x000130ee) popup_cale_events_window_ParamLimits

0x38bc,	// (0x000130ee) popup_cale_events_window

0xbe06,	// (0x0001b638) popup_mup_playback_window

0x38d4,	// (0x00013106) signal_pane

0x9cd8,	// (0x0001950a) main_browser_pane

0x9f04,	// (0x00019736) main_burst_pane

0x358e,	// (0x00012dc0) main_calc_pane

0xbd96,	// (0x0001b5c8) main_cale_day_pane

0x0336,	// (0x0000fb68) main_cale_month_pane

0xbd96,	// (0x0001b5c8) main_cale_week_pane

0x9f04,	// (0x00019736) main_call_pane

0x9996,	// (0x000191c8) main_call_poc_pane

0x9f04,	// (0x00019736) main_camera_pane

0x9f04,	// (0x00019736) main_chi_dic_pane

0xa783,	// (0x00019fb5) main_clock_pane

0x9996,	// (0x000191c8) main_fmradio_pane

0x9f04,	// (0x00019736) main_graph_messa_pane

0x9996,	// (0x000191c8) main_help_pane

0x9cd8,	// (0x0001950a) main_im_pane

0x9bf1,	// (0x00019423) main_image_pane_ParamLimits

0x9bf1,	// (0x00019423) main_image_pane

0x9996,	// (0x000191c8) main_location2_pane

0x9f04,	// (0x00019736) main_location_pane

0x9bf1,	// (0x00019423) main_messa_pane

0x9996,	// (0x000191c8) main_mp2_pane

0x9f04,	// (0x00019736) main_mp_pane

0x9996,	// (0x000191c8) main_msg_pane

0x9996,	// (0x000191c8) main_mup_eq_pane

0x9996,	// (0x000191c8) main_mup_pane

0x9cd8,	// (0x0001950a) main_notes_pane

0x9996,	// (0x000191c8) main_pec_pane

0x9996,	// (0x000191c8) main_phob_pane

0x9996,	// (0x000191c8) main_pinb_pane

0x9996,	// (0x000191c8) main_postcard_pane

0x9996,	// (0x000191c8) main_qdial_pane

0x9f04,	// (0x00019736) main_skin_pane

0x9996,	// (0x000191c8) main_smil2_pane

0x9f04,	// (0x00019736) main_smil_pane

0x9f04,	// (0x00019736) main_video_pane

0x9f04,	// (0x00019736) main_video_tele_pane

0x9bf1,	// (0x00019423) main_viewer_pane_ParamLimits

0x9bf1,	// (0x00019423) main_viewer_pane

0x9f04,	// (0x00019736) main_vorec_pane

0x35e4,	// (0x00012e16) popup_blid_sat_info_window_ParamLimits

0x35e4,	// (0x00012e16) popup_blid_sat_info_window

0x3648,	// (0x00012e7a) popup_dyc_status_message_window_ParamLimits

0x3648,	// (0x00012e7a) popup_dyc_status_message_window

0x3662,	// (0x00012e94) popup_grid_large_graphic_window_ParamLimits

0x3662,	// (0x00012e94) popup_grid_large_graphic_window

0x3724,	// (0x00012f56) popup_loc_request_window_ParamLimits

0x3724,	// (0x00012f56) popup_loc_request_window

0x3860,	// (0x00013092) popup_wml_address_window_ParamLimits

0x3860,	// (0x00013092) popup_wml_address_window

0x33cc,	// (0x00012bfe) call_muted_g1

0x3060,	// (0x00012892) popup_call_audio_conf_window_ParamLimits

0x3060,	// (0x00012892) popup_call_audio_conf_window

0x33dc,	// (0x00012c0e) popup_call_audio_first_window_ParamLimits

0x33dc,	// (0x00012c0e) popup_call_audio_first_window

0x3452,	// (0x00012c84) popup_call_audio_in_window_ParamLimits

0x3452,	// (0x00012c84) popup_call_audio_in_window

0x348e,	// (0x00012cc0) popup_call_audio_out_window_ParamLimits

0x348e,	// (0x00012cc0) popup_call_audio_out_window

0x34c8,	// (0x00012cfa) popup_call_audio_second_window_ParamLimits

0x34c8,	// (0x00012cfa) popup_call_audio_second_window

0x351e,	// (0x00012d50) popup_call_audio_wait_window_ParamLimits

0x351e,	// (0x00012d50) popup_call_audio_wait_window

0x3553,	// (0x00012d85) popup_number_entry_window_ParamLimits

0x3553,	// (0x00012d85) popup_number_entry_window

0x9583,	// (0x00018db5) bg_popup_call_pane_cp05_ParamLimits

0x9583,	// (0x00018db5) bg_popup_call_pane_cp05

0x95a3,	// (0x00018dd5) popup_number_entry_window_t1

0x95b6,	// (0x00018de8) popup_number_entry_window_t2

0x95c8,	// (0x00018dfa) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001e8fc) popup_number_entry_window_t

0x95da,	// (0x00018e0c) text_title_cp2

0x95ed,	// (0x00018e1f) bg_popup_call_pane_cp_ParamLimits

0x95ed,	// (0x00018e1f) bg_popup_call_pane_cp

0x95fb,	// (0x00018e2d) call_thumbnail_pane

0x9603,	// (0x00018e35) popup_call_audio_in_window_g1_ParamLimits

0x9603,	// (0x00018e35) popup_call_audio_in_window_g1

0x960f,	// (0x00018e41) popup_call_audio_in_window_g2_ParamLimits

0x960f,	// (0x00018e41) popup_call_audio_in_window_g2

0x961b,	// (0x00018e4d) popup_call_audio_in_window_g3_ParamLimits

0x961b,	// (0x00018e4d) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001e905) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001e905) popup_call_audio_in_window_g

0x9627,	// (0x00018e59) popup_call_audio_in_window_t1_ParamLimits

0x9627,	// (0x00018e59) popup_call_audio_in_window_t1

0x9643,	// (0x00018e75) popup_call_audio_in_window_t2_ParamLimits

0x9643,	// (0x00018e75) popup_call_audio_in_window_t2

0x965f,	// (0x00018e91) popup_call_audio_in_window_t3_ParamLimits

0x965f,	// (0x00018e91) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001e90c) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001e90c) popup_call_audio_in_window_t

0x95ed,	// (0x00018e1f) bg_popup_call_pane_cp01_ParamLimits

0x95ed,	// (0x00018e1f) bg_popup_call_pane_cp01

0x95fb,	// (0x00018e2d) call_thumbnail_pane_cp02

0x9672,	// (0x00018ea4) call_type_pane_cp022

0x967a,	// (0x00018eac) popup_call_audio_out_window_g1_ParamLimits

0x967a,	// (0x00018eac) popup_call_audio_out_window_g1

0x968c,	// (0x00018ebe) popup_call_audio_out_window_g2_ParamLimits

0x968c,	// (0x00018ebe) popup_call_audio_out_window_g2

0x9698,	// (0x00018eca) popup_call_audio_out_window_g3_ParamLimits

0x9698,	// (0x00018eca) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001e913) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001e913) popup_call_audio_out_window_g

0x96aa,	// (0x00018edc) popup_call_audio_out_window_t1_ParamLimits

0x96aa,	// (0x00018edc) popup_call_audio_out_window_t1

0x96c2,	// (0x00018ef4) popup_call_audio_out_window_t2_ParamLimits

0x96c2,	// (0x00018ef4) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001e91a) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001e91a) popup_call_audio_out_window_t

0x96d7,	// (0x00018f09) bg_popup_call_pane_ParamLimits

0x96d7,	// (0x00018f09) bg_popup_call_pane

0xfea5,	// (0x0000f6d7) call_thumbnail_pane_cp_ParamLimits

0xfea5,	// (0x0000f6d7) call_thumbnail_pane_cp

0x975b,	// (0x00018f8d) call_type_pane_cp01_ParamLimits

0x975b,	// (0x00018f8d) call_type_pane_cp01

0x979f,	// (0x00018fd1) popup_call_audio_first_window_g1_ParamLimits

0x979f,	// (0x00018fd1) popup_call_audio_first_window_g1

0x97eb,	// (0x0001901d) popup_call_audio_first_window_g2_ParamLimits

0x97eb,	// (0x0001901d) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001e91f) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001e91f) popup_call_audio_first_window_g

0x982f,	// (0x00019061) popup_call_audio_first_window_t1_ParamLimits

0x982f,	// (0x00019061) popup_call_audio_first_window_t1

0x98db,	// (0x0001910d) popup_call_audio_first_window_t4_ParamLimits

0x98db,	// (0x0001910d) popup_call_audio_first_window_t4

0x9967,	// (0x00019199) popup_call_audio_first_window_t5_ParamLimits

0x9967,	// (0x00019199) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001e924) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001e924) popup_call_audio_first_window_t

0x9996,	// (0x000191c8) bg_popup_call_pane_cp02

0x99a0,	// (0x000191d2) call_type_pane_cp023

0x99a8,	// (0x000191da) popup_call_audio_wait_window_g1

0x99b0,	// (0x000191e2) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001e92b) popup_call_audio_wait_window_g

0x99b8,	// (0x000191ea) popup_call_audio_wait_window_t3

0x99c6,	// (0x000191f8) bg_popup_call_pane_cp03_ParamLimits

0x99c6,	// (0x000191f8) bg_popup_call_pane_cp03

0x9a26,	// (0x00019258) call_thumbnail_pane_cp011_ParamLimits

0x9a26,	// (0x00019258) call_thumbnail_pane_cp011

0x9a32,	// (0x00019264) call_type_pane_cp034_ParamLimits

0x9a32,	// (0x00019264) call_type_pane_cp034

0x9a6e,	// (0x000192a0) popup_call_audio_second_window_g1_ParamLimits

0x9a6e,	// (0x000192a0) popup_call_audio_second_window_g1

0x9aaa,	// (0x000192dc) popup_call_audio_second_window_g2_ParamLimits

0x9aaa,	// (0x000192dc) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001e930) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001e930) popup_call_audio_second_window_g

0x9ae6,	// (0x00019318) popup_call_audio_second_window_t1_ParamLimits

0x9ae6,	// (0x00019318) popup_call_audio_second_window_t1

0x9b67,	// (0x00019399) popup_call_audio_second_window_t2_ParamLimits

0x9b67,	// (0x00019399) popup_call_audio_second_window_t2

0x9b9d,	// (0x000193cf) popup_call_audio_second_window_t3_ParamLimits

0x9b9d,	// (0x000193cf) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001e935) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001e935) popup_call_audio_second_window_t

0x9996,	// (0x000191c8) bg_popup_call_pane_cp04

0x9bd3,	// (0x00019405) list_conf_pane

0x9bdb,	// (0x0001940d) popup_call_audio_conf_window_t1

0x9be9,	// (0x0001941b) call_thumbnail_pane_g1

0x9bf1,	// (0x00019423) bg_pinb_pane_ParamLimits

0x9bf1,	// (0x00019423) bg_pinb_pane

0x9bff,	// (0x00019431) find_pinb_pane

0x9c08,	// (0x0001943a) listscroll_pinb_pane_ParamLimits

0x9c08,	// (0x0001943a) listscroll_pinb_pane

0x9c17,	// (0x00019449) pinb_bg_pane_g1

0xfec9,	// (0x0000f6fb) pinb_bg_pane_g2

0xfed5,	// (0x0000f707) pinb_bg_pane_g3

0xfee1,	// (0x0000f713) pinb_bg_pane_g4

0xfeed,	// (0x0000f71f) pinb_bg_pane_g5

0xfef9,	// (0x0000f72b) pinb_bg_pane_g6

0xff04,	// (0x0000f736) pinb_bg_pane_g7

0xff0f,	// (0x0000f741) pinb_bg_pane_g8

0xff1a,	// (0x0000f74c) pinb_bg_pane_g9

0xff24,	// (0x0000f756) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001e93c) pinb_bg_pane_g

0xff41,	// (0x0000f773) grid_pinb_pane

0xff4c,	// (0x0000f77e) list_pinb_pane

0xff57,	// (0x0000f789) scroll_pane_cp01_ParamLimits

0xff57,	// (0x0000f789) scroll_pane_cp01

0x9c21,	// (0x00019453) find_pinb_pane_g1_ParamLimits

0x9c21,	// (0x00019453) find_pinb_pane_g1

0x9c39,	// (0x0001946b) find_pinb_pane_t1

0x9c4b,	// (0x0001947d) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001e956) find_pinb_pane_t

0x9c60,	// (0x00019492) input_focus_pane_cp01_ParamLimits

0x9c60,	// (0x00019492) input_focus_pane_cp01

0xff69,	// (0x0000f79b) cell_pinb_pane_ParamLimits

0xff69,	// (0x0000f79b) cell_pinb_pane

0xff8b,	// (0x0000f7bd) cell_pinb_pane_g1_ParamLimits

0xff8b,	// (0x0000f7bd) cell_pinb_pane_g1

0xffa0,	// (0x0000f7d2) cell_pinb_pane_g2_ParamLimits

0xffa0,	// (0x0000f7d2) cell_pinb_pane_g2

0x9c6c,	// (0x0001949e) cell_pinb_pane_g3_ParamLimits

0x9c6c,	// (0x0001949e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001e95b) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001e95b) cell_pinb_pane_g

0x9996,	// (0x000191c8) grid_highlight_pane_cp01

0xffac,	// (0x0000f7de) list_pinb_item_pane_ParamLimits

0xffac,	// (0x0000f7de) list_pinb_item_pane

0x9996,	// (0x000191c8) list_highlight_pane_cp02

0xffbe,	// (0x0000f7f0) list_pinb_item_pane_g1_ParamLimits

0xffbe,	// (0x0000f7f0) list_pinb_item_pane_g1

0xffcb,	// (0x0000f7fd) list_pinb_item_pane_g2_ParamLimits

0xffcb,	// (0x0000f7fd) list_pinb_item_pane_g2

0xffd7,	// (0x0000f809) list_pinb_item_pane_g3_ParamLimits

0xffd7,	// (0x0000f809) list_pinb_item_pane_g3

0xffe8,	// (0x0000f81a) list_pinb_item_pane_g4_ParamLimits

0xffe8,	// (0x0000f81a) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001e962) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001e962) list_pinb_item_pane_g

0xfff4,	// (0x0000f826) list_pinb_item_pane_t1_ParamLimits

0xfff4,	// (0x0000f826) list_pinb_item_pane_t1

0x0029,	// (0x0000f85b) calc_display_pane

0x0051,	// (0x0000f883) calc_paper_pane

0x0074,	// (0x0000f8a6) grid_calc_pane

0x9996,	// (0x000191c8) bg_list_pane_cp01

0x00a2,	// (0x0000f8d4) clock_g1

0x00aa,	// (0x0000f8dc) clock_g2

0x0001,

0xf139,	// (0x0001e96b) clock_g

0x00b2,	// (0x0000f8e4) clock_t1_ParamLimits

0x00b2,	// (0x0000f8e4) clock_t1

0x00c7,	// (0x0000f8f9) clock_t2_ParamLimits

0x00c7,	// (0x0000f8f9) clock_t2

0x00d9,	// (0x0000f90b) clock_t3_ParamLimits

0x00d9,	// (0x0000f90b) clock_t3

0x00eb,	// (0x0000f91d) clock_t4_ParamLimits

0x00eb,	// (0x0000f91d) clock_t4

0x00fd,	// (0x0000f92f) clock_t5_ParamLimits

0x00fd,	// (0x0000f92f) clock_t5

0x0112,	// (0x0000f944) clock_t6_ParamLimits

0x0112,	// (0x0000f944) clock_t6

0x0124,	// (0x0000f956) clock_t7_ParamLimits

0x0124,	// (0x0000f956) clock_t7

0x0136,	// (0x0000f968) clock_t8_ParamLimits

0x0136,	// (0x0000f968) clock_t8

0x014a,	// (0x0000f97c) clock_t9_ParamLimits

0x014a,	// (0x0000f97c) clock_t9

0x0008,

0xf13e,	// (0x0001e970) clock_t_ParamLimits

0xf13e,	// (0x0001e970) clock_t

0x9c80,	// (0x000194b2) popup_clock_analogue_window_cp02

0x9c80,	// (0x000194b2) popup_clock_digital_window_cp01

0x9c88,	// (0x000194ba) listscroll_help_pane

0x9996,	// (0x000191c8) phob_pre_status_pane

0x9c92,	// (0x000194c4) grid_qdial_pane

0x9bf1,	// (0x00019423) listscroll_mce_pane

0x9bf1,	// (0x00019423) bg_notes_pane

0x9c9c,	// (0x000194ce) list_notes_pane

0x0160,	// (0x0000f992) scroll_pane_cp06

0x9caa,	// (0x000194dc) bg_calc_paper_pane

0x9cbe,	// (0x000194f0) list_calc_pane

0x9cd8,	// (0x0001950a) bg_calc_display_pane

0x0174,	// (0x0000f9a6) calc_display_pane_t1

0x0186,	// (0x0000f9b8) calc_display_pane_t2

0x9ce4,	// (0x00019516) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001e983) calc_display_pane_t

0x0198,	// (0x0000f9ca) cell_calc_pane_ParamLimits

0x0198,	// (0x0000f9ca) cell_calc_pane

0x9cf6,	// (0x00019528) bg_calc_paper_pane_g1

0x9d02,	// (0x00019534) bg_calc_paper_pane_g2

0x9d0e,	// (0x00019540) bg_calc_paper_pane_g3

0x9d1a,	// (0x0001954c) bg_calc_paper_pane_g4

0x9d26,	// (0x00019558) bg_calc_paper_pane_g5

0x01d5,	// (0x0000fa07) bg_calc_paper_pane_g6

0x01e8,	// (0x0000fa1a) bg_calc_paper_pane_g7

0x01fb,	// (0x0000fa2d) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001e98a) bg_calc_paper_pane_g

0x020c,	// (0x0000fa3e) calc_bg_paper_pane_g9

0x021d,	// (0x0000fa4f) list_calc_item_pane_ParamLimits

0x021d,	// (0x0000fa4f) list_calc_item_pane

0x9d32,	// (0x00019564) list_calc_item_pane_g1

0x9d3f,	// (0x00019571) list_calc_item_pane_t1_ParamLimits

0x9d3f,	// (0x00019571) list_calc_item_pane_t1

0x0235,	// (0x0000fa67) list_calc_item_pane_t2_ParamLimits

0x0235,	// (0x0000fa67) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001e99b) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001e99b) list_calc_item_pane_t

0x9d51,	// (0x00019583) cell_calc_pane_g1

0x9d5b,	// (0x0001958d) grid_highlight_pane_cp02

0x9d7d,	// (0x000195af) bg_calc_display_pane_g1

0x9d86,	// (0x000195b8) bg_calc_display_pane_g2

0x9d90,	// (0x000195c2) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001e9a5) bg_calc_display_pane_g

0x0267,	// (0x0000fa99) cell_qdial_pane_ParamLimits

0x0267,	// (0x0000fa99) cell_qdial_pane

0x027b,	// (0x0000faad) cell_qdial_pane_g1_ParamLimits

0x027b,	// (0x0000faad) cell_qdial_pane_g1

0x0291,	// (0x0000fac3) cell_qdial_pane_g2_ParamLimits

0x0291,	// (0x0000fac3) cell_qdial_pane_g2

0x9d99,	// (0x000195cb) cell_qdial_pane_g3_ParamLimits

0x9d99,	// (0x000195cb) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001e9ac) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001e9ac) cell_qdial_pane_g

0x02b8,	// (0x0000faea) cell_qdial_pane_t1_ParamLimits

0x02b8,	// (0x0000faea) cell_qdial_pane_t1

0x02d0,	// (0x0000fb02) cell_qdial_pane_t2_ParamLimits

0x02d0,	// (0x0000fb02) cell_qdial_pane_t2

0x02e3,	// (0x0000fb15) cell_qdial_pane_t3_ParamLimits

0x02e3,	// (0x0000fb15) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001e9b5) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001e9b5) cell_qdial_pane_t

0x9996,	// (0x000191c8) grid_highlight_pane_cp04

0x9da5,	// (0x000195d7) thumbnail_qdial_pane_ParamLimits

0x9da5,	// (0x000195d7) thumbnail_qdial_pane

0x9e01,	// (0x00019633) list_help_pane

0x9e0a,	// (0x0001963c) scroll_pane_cp02

0x02f6,	// (0x0000fb28) help_list_pane_t1_ParamLimits

0x02f6,	// (0x0000fb28) help_list_pane_t1

0x9e13,	// (0x00019645) bg_notes_pane_g2

0x9e1b,	// (0x0001964d) bg_notes_pane_g3

0x9e23,	// (0x00019655) notes_bg_pane_g1

0x9e2b,	// (0x0001965d) notes_bg_pane_g4

0x9e33,	// (0x00019665) notes_bg_pane_g5

0x9e3b,	// (0x0001966d) notes_bg_pane_g6

0x9e43,	// (0x00019675) notes_bg_pane_g7

0x9e4b,	// (0x0001967d) notes_bg_pane_g8

0x9e53,	// (0x00019685) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001e9d3) notes_bg_pane_g

0x0314,	// (0x0000fb46) list_notes_text_pane_ParamLimits

0x0314,	// (0x0000fb46) list_notes_text_pane

0x9e5b,	// (0x0001968d) list_notes_text_pane_g1

0x0328,	// (0x0000fb5a) list_notes_text_pane_t1

0x0336,	// (0x0000fb68) listscroll_cale_week_pane

0x036c,	// (0x0000fb9e) bg_cale_heading_pane

0x0395,	// (0x0000fbc7) bg_cale_pane_cp01

0x03b7,	// (0x0000fbe9) cale_week_corner_pane

0x03d6,	// (0x0000fc08) cale_week_day_heading_pane

0x0404,	// (0x0000fc36) cale_week_scroll_pane_g1

0x0428,	// (0x0000fc5a) cale_week_scroll_pane_g2

0x0440,	// (0x0000fc72) cale_week_scroll_pane_g3

0x0458,	// (0x0000fc8a) cale_week_scroll_pane_g4

0x0474,	// (0x0000fca6) cale_week_scroll_pane_g5

0x0494,	// (0x0000fcc6) cale_week_scroll_pane_g6

0x04b4,	// (0x0000fce6) cale_week_scroll_pane_g7

0x04d8,	// (0x0000fd0a) cale_week_scroll_pane_g8

0x04fc,	// (0x0000fd2e) cale_week_scroll_pane_g9

0x0519,	// (0x0000fd4b) cale_week_scroll_pane_g10

0x0536,	// (0x0000fd68) cale_week_scroll_pane_g11

0x0553,	// (0x0000fd85) cale_week_scroll_pane_g12

0x0570,	// (0x0000fda2) cale_week_scroll_pane_g13

0x058d,	// (0x0000fdbf) cale_week_scroll_pane_g14

0x05b6,	// (0x0000fde8) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001e9e2) cale_week_scroll_pane_g

0x0603,	// (0x0000fe35) cale_week_time_pane

0x0627,	// (0x0000fe59) grid_cale_week_pane

0x9e87,	// (0x000196b9) scroll_pane_cp08

0x065e,	// (0x0000fe90) cell_cale_week_pane_ParamLimits

0x065e,	// (0x0000fe90) cell_cale_week_pane

0x06ee,	// (0x0000ff20) cale_week_day_heading_pane_t1

0x0738,	// (0x0000ff6a) cale_week_day_heading_pane_t2

0x0787,	// (0x0000ffb9) cale_week_day_heading_pane_t3

0x07d6,	// (0x00010008) cale_week_day_heading_pane_t4

0x0825,	// (0x00010057) cale_week_day_heading_pane_t5

0x0878,	// (0x000100aa) cale_week_day_heading_pane_t6

0x08cf,	// (0x00010101) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001ea03) cale_week_day_heading_pane_t

0x9ea9,	// (0x000196db) bg_cale_side_pane

0x0919,	// (0x0001014b) cale_week_time_pane_t1

0x0953,	// (0x00010185) cale_week_time_pane_t2

0x098d,	// (0x000101bf) cale_week_time_pane_t3

0x09c7,	// (0x000101f9) cale_week_time_pane_t4

0x0a01,	// (0x00010233) cale_week_time_pane_t5

0x0a3b,	// (0x0001026d) cale_week_time_pane_t6

0x0a75,	// (0x000102a7) cale_week_time_pane_t7

0x0aaf,	// (0x000102e1) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001ea12) cale_week_time_pane_t

0x0aef,	// (0x00010321) cell_cale_week_pane_g2

0x0b0e,	// (0x00010340) cell_cale_week_pane_g3_ParamLimits

0x0b0e,	// (0x00010340) cell_cale_week_pane_g3

0x9eb7,	// (0x000196e9) grid_highlight_pane_cp07

0x9ebf,	// (0x000196f1) listscroll_gms_pane

0x9ec9,	// (0x000196fb) grid_gms_pane

0x9ed2,	// (0x00019704) listscroll_gms_pane_g1

0x9eda,	// (0x0001970c) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001ea23) listscroll_gms_pane_g

0x0b26,	// (0x00010358) scroll_pane_cp010

0x0b31,	// (0x00010363) cell_gms_pane_ParamLimits

0x0b31,	// (0x00010363) cell_gms_pane

0x0b4b,	// (0x0001037d) cell_gms_pane_g1

0x9ee2,	// (0x00019714) cell_gms_pane_g2

0x9eea,	// (0x0001971c) cell_gms_pane_g3

0x9ef3,	// (0x00019725) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001ea28) cell_gms_pane_g

0x9efc,	// (0x0001972e) grid_highlight_pane_cp09

0x3374,	// (0x00012ba6) phob_pre_status_pane_g1

0x337c,	// (0x00012bae) phob_pre_status_pane_g2

0x3384,	// (0x00012bb6) phob_pre_status_pane_g3

0x338c,	// (0x00012bbe) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0001ee13) phob_pre_status_pane_g

0x339c,	// (0x00012bce) phob_pre_status_pane_t1

0x33ac,	// (0x00012bde) phob_pre_status_pane_t2

0x33bc,	// (0x00012bee) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0001ee1e) phob_pre_status_pane_t

0x9f04,	// (0x00019736) bg_list_pane_cp05

0x0b5b,	// (0x0001038d) grid_vorec_pane

0x0b67,	// (0x00010399) vorec_t1

0x0b75,	// (0x000103a7) vorec_t2

0x0b83,	// (0x000103b5) vorec_t3

0x0b91,	// (0x000103c3) vorec_t4

0x94ee,	// (0x00018d20) vorec_t5

0x94fc,	// (0x00018d2e) vorec_t6

0x0004,

0xf1ff,	// (0x0001ea31) vorec_t

0x950a,	// (0x00018d3c) wait_bar_pane_cp01

0x0bad,	// (0x000103df) cell_vorec_pane_ParamLimits

0x0bad,	// (0x000103df) cell_vorec_pane

0x9f0c,	// (0x0001973e) cell_vorec_pane_g1

0x9996,	// (0x000191c8) grid_highlight_pane_cp05

0x0bd8,	// (0x0001040a) cams_zoom_pane

0x0be7,	// (0x00010419) image_vga_pane

0x0c01,	// (0x00010433) main_camera_pane_g1

0x0c13,	// (0x00010445) main_camera_pane_g2

0x0c23,	// (0x00010455) main_camera_pane_g3

0x0c37,	// (0x00010469) main_camera_pane_g4

0x0c4b,	// (0x0001047d) main_camera_pane_g5

0x0c5f,	// (0x00010491) main_camera_pane_g6

0x0c73,	// (0x000104a5) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001ea3c) main_camera_pane_g

0x0c87,	// (0x000104b9) main_camera_pane_t1

0x0c9d,	// (0x000104cf) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001ea4d) main_camera_pane_t

0x0cdb,	// (0x0001050d) cams_zoom_pane_cp_ParamLimits

0x0cdb,	// (0x0001050d) cams_zoom_pane_cp

0x0d03,	// (0x00010535) image_cif_pane_ParamLimits

0x0d03,	// (0x00010535) image_cif_pane

0x0d3e,	// (0x00010570) image_subqcif_pane

0x0d48,	// (0x0001057a) main_video_pane_g1_ParamLimits

0x0d48,	// (0x0001057a) main_video_pane_g1

0x0d6c,	// (0x0001059e) main_video_pane_g2_ParamLimits

0x0d6c,	// (0x0001059e) main_video_pane_g2

0x0da2,	// (0x000105d4) main_video_pane_g3_ParamLimits

0x0da2,	// (0x000105d4) main_video_pane_g3

0x0dd0,	// (0x00010602) main_video_pane_g4_ParamLimits

0x0dd0,	// (0x00010602) main_video_pane_g4

0x0dfe,	// (0x00010630) main_video_pane_g5_ParamLimits

0x0dfe,	// (0x00010630) main_video_pane_g5

0x9f22,	// (0x00019754) main_video_pane_g6_ParamLimits

0x9f22,	// (0x00019754) main_video_pane_g6

0x0006,

0xf220,	// (0x0001ea52) main_video_pane_g_ParamLimits

0xf220,	// (0x0001ea52) main_video_pane_g

0x0e27,	// (0x00010659) main_video_pane_t1_ParamLimits

0x0e27,	// (0x00010659) main_video_pane_t1

0x9f3c,	// (0x0001976e) cams_zoom_pane_g1

0x9f45,	// (0x00019777) cams_zoom_pane_g2

0x9f4e,	// (0x00019780) cams_zoom_pane_g3

0x9f57,	// (0x00019789) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001ea61) cams_zoom_pane_g

0x0e84,	// (0x000106b6) grid_cams_pane

0x0e9e,	// (0x000106d0) linegrid_cams_pane

0x0eb0,	// (0x000106e2) cell_cams_pane_ParamLimits

0x0eb0,	// (0x000106e2) cell_cams_pane

0x9f60,	// (0x00019792) cams_burst_image_pane

0x9f68,	// (0x0001979a) cell_cams_pane_g1

0x9996,	// (0x000191c8) grid_highlight_pane_cp03

0x9d51,	// (0x00019583) mp_bg_pane_g1

0x9996,	// (0x000191c8) bg_list_pane_cp03

0xbcb9,	// (0x0001b4eb) bg_mp_pane

0xbcc1,	// (0x0001b4f3) grid_mp_pane

0xbcc9,	// (0x0001b4fb) media_player_g1

0xbcd3,	// (0x0001b505) media_player_t1

0xbce1,	// (0x0001b513) media_player_t2

0xbcef,	// (0x0001b521) media_player_t3

0xbcfd,	// (0x0001b52f) media_player_t4

0xbd0b,	// (0x0001b53d) media_player_t5

0xbd19,	// (0x0001b54b) media_player_t6

0xbd27,	// (0x0001b559) media_player_t7

0x0006,

0xf5cb,	// (0x0001edfd) media_player_t

0xbd35,	// (0x0001b567) wait_bar_pane_cp02

0xf5b0,	// (0x0001ede2) main_usb_pane_t

0x336b,	// (0x00012b9d) cell_mp_pane

0x9d51,	// (0x00019583) cell_mp_pane_g1

0x9996,	// (0x000191c8) grid_highlight_pane_cp06

0x9f70,	// (0x000197a2) grid_skin_colour_pane

0x9f78,	// (0x000197aa) list_highlight_pane_cp03

0x0fd6,	// (0x00010808) skin_g1

0x9f80,	// (0x000197b2) skin_t1

0x9f8f,	// (0x000197c1) skin_t2

0x0001,

0xf264,	// (0x0001ea96) skin_t

0x0fde,	// (0x00010810) cell_skin_colour_pane_ParamLimits

0x0fde,	// (0x00010810) cell_skin_colour_pane

0x9f9d,	// (0x000197cf) cell_skin_colour_pane_g1

0x1051,	// (0x00010883) call_video_g1_ParamLimits

0x1051,	// (0x00010883) call_video_g1

0x106d,	// (0x0001089f) call_video_g2_ParamLimits

0x106d,	// (0x0001089f) call_video_g2

0x0001,

0xf269,	// (0x0001ea9b) call_video_g_ParamLimits

0xf269,	// (0x0001ea9b) call_video_g

0x10b2,	// (0x000108e4) call_video_uplink_pane_cp1_ParamLimits

0x10b2,	// (0x000108e4) call_video_uplink_pane_cp1

0x9faf,	// (0x000197e1) call_video_uplink_pane_cp2

0x1153,	// (0x00010985) video_down_crop_pane_ParamLimits

0x1153,	// (0x00010985) video_down_crop_pane

0x123c,	// (0x00010a6e) video_down_pane_ParamLimits

0x123c,	// (0x00010a6e) video_down_pane

0x9fb7,	// (0x000197e9) video_down_subqcif_pane_ParamLimits

0x9fb7,	// (0x000197e9) video_down_subqcif_pane

0x9fd1,	// (0x00019803) video_down_subqcif_pane_cp_ParamLimits

0x9fd1,	// (0x00019803) video_down_subqcif_pane_cp

0x9ff9,	// (0x0001982b) im_reading_pane_ParamLimits

0x9ff9,	// (0x0001982b) im_reading_pane

0x1345,	// (0x00010b77) im_writing_pane_ParamLimits

0x1345,	// (0x00010b77) im_writing_pane

0x1361,	// (0x00010b93) im_reading_pane_t1

0xa013,	// (0x00019845) list_im_pane

0xa024,	// (0x00019856) scroll_pane_cp07

0x139d,	// (0x00010bcf) im_writing_pane_t1_ParamLimits

0x139d,	// (0x00010bcf) im_writing_pane_t1

0xa03d,	// (0x0001986f) im_writing_pane_t2_ParamLimits

0xa03d,	// (0x0001986f) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001eaa5) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001eaa5) im_writing_pane_t

0x9996,	// (0x000191c8) input_focus_pane_cp04

0x9996,	// (0x000191c8) input_focus_pane_cp05

0x13b2,	// (0x00010be4) list_im_single_pane_ParamLimits

0x13b2,	// (0x00010be4) list_im_single_pane

0x13c8,	// (0x00010bfa) list_single_im_pane_t1

0x332b,	// (0x00012b5d) blid_accuracy_pane

0x3333,	// (0x00012b65) blid_compass_pane

0x333d,	// (0x00012b6f) main_location_t1

0x334d,	// (0x00012b7f) main_location_t2

0x335d,	// (0x00012b8f) main_location_t3

0x0002,

0xf5da,	// (0x0001ee0c) main_location_t

0x9996,	// (0x000191c8) aid_levels_location

0x9d51,	// (0x00019583) blid_accuracy_pane_g1

0x9d51,	// (0x00019583) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001eb07) blid_accuracy_pane_g

0xa085,	// (0x000198b7) wml_content_pane

0xa0c3,	// (0x000198f5) wml_button_pane_ParamLimits

0xa0c3,	// (0x000198f5) wml_button_pane

0x13d7,	// (0x00010c09) wml_list_single_large_pane_ParamLimits

0x13d7,	// (0x00010c09) wml_list_single_large_pane

0x13ed,	// (0x00010c1f) wml_list_single_medium_pane_ParamLimits

0x13ed,	// (0x00010c1f) wml_list_single_medium_pane

0x1404,	// (0x00010c36) wml_list_single_small_pane_ParamLimits

0x1404,	// (0x00010c36) wml_list_single_small_pane

0xa0d7,	// (0x00019909) wml_selection_box_pane_ParamLimits

0xa0d7,	// (0x00019909) wml_selection_box_pane

0xa0ea,	// (0x0001991c) wml_list_single_pane_t1

0xa0f9,	// (0x0001992b) wml_list_single_medium_pane_t1

0xa108,	// (0x0001993a) wml_list_single_large_pane_t1

0xa117,	// (0x00019949) input_focus_pane_cp02_ParamLimits

0xa117,	// (0x00019949) input_focus_pane_cp02

0xa12a,	// (0x0001995c) wml_selection_box_pane_g1

0xa133,	// (0x00019965) wml_selection_box_pane_t1_ParamLimits

0xa133,	// (0x00019965) wml_selection_box_pane_t1

0x9bf1,	// (0x00019423) bg_wml_button_pane_ParamLimits

0x9bf1,	// (0x00019423) bg_wml_button_pane

0xa14b,	// (0x0001997d) wml_button_pane_g1

0xa153,	// (0x00019985) wml_button_pane_t1

0xa14b,	// (0x0001997d) wml_button_bg_pane_g1

0xa163,	// (0x00019995) wml_button_bg_pane_g2

0xa16b,	// (0x0001999d) wml_button_bg_pane_g3

0xa173,	// (0x000199a5) wml_button_bg_pane_g4

0xa17b,	// (0x000199ad) wml_button_bg_pane_g5

0xa183,	// (0x000199b5) wml_button_bg_pane_g6

0xa18b,	// (0x000199bd) wml_button_bg_pane_g7

0xa193,	// (0x000199c5) wml_button_bg_pane_g8

0xa19b,	// (0x000199cd) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001eaaa) wml_button_bg_pane_g

0x1420,	// (0x00010c52) bg_list_pane_cp02

0xa1a3,	// (0x000199d5) mce_header_pane_ParamLimits

0xa1a3,	// (0x000199d5) mce_header_pane

0xa1b9,	// (0x000199eb) mce_icon_pane

0xa1b9,	// (0x000199eb) mce_image_pane

0xa1c2,	// (0x000199f4) mce_text_pane_ParamLimits

0xa1c2,	// (0x000199f4) mce_text_pane

0x142a,	// (0x00010c5c) scroll_pane_cp03

0xa0bb,	// (0x000198ed) scroll_pane_cp04

0xa1d5,	// (0x00019a07) scroll_pane_cp05_ParamLimits

0xa1d5,	// (0x00019a07) scroll_pane_cp05

0x1434,	// (0x00010c66) mce_header_field_pane_ParamLimits

0x1434,	// (0x00010c66) mce_header_field_pane

0x144d,	// (0x00010c7f) mce_header_field_pane_2_ParamLimits

0x144d,	// (0x00010c7f) mce_header_field_pane_2

0x1463,	// (0x00010c95) mce_header_field_pane_3

0x146b,	// (0x00010c9d) list_single_mce_message_pane_ParamLimits

0x146b,	// (0x00010c9d) list_single_mce_message_pane

0x1484,	// (0x00010cb6) list_single_mce_smart_pane_ParamLimits

0x1484,	// (0x00010cb6) list_single_mce_smart_pane

0xa1e1,	// (0x00019a13) input_focus_pane_cp03

0xa1ea,	// (0x00019a1c) list_header_data_pane

0x14a8,	// (0x00010cda) mce_header_field_pane_t1

0x14b8,	// (0x00010cea) list_single_mce_header_pane_ParamLimits

0x14b8,	// (0x00010cea) list_single_mce_header_pane

0xa1f2,	// (0x00019a24) list_single_mce_header_pane_t1

0xa201,	// (0x00019a33) list_single_mce_message_pane_g1

0xa209,	// (0x00019a3b) list_single_mce_message_pane_t1

0x14f2,	// (0x00010d24) bg_cale_heading_pane_cp01_ParamLimits

0x14f2,	// (0x00010d24) bg_cale_heading_pane_cp01

0xa217,	// (0x00019a49) bg_cale_pane_cp02_ParamLimits

0xa217,	// (0x00019a49) bg_cale_pane_cp02

0x1539,	// (0x00010d6b) cale_month_corner_pane

0x1558,	// (0x00010d8a) cale_month_day_heading_pane_ParamLimits

0x1558,	// (0x00010d8a) cale_month_day_heading_pane

0x15b7,	// (0x00010de9) cale_month_pane_g1_ParamLimits

0x15b7,	// (0x00010de9) cale_month_pane_g1

0x15f3,	// (0x00010e25) cale_month_pane_g2_ParamLimits

0x15f3,	// (0x00010e25) cale_month_pane_g2

0x162f,	// (0x00010e61) cale_month_pane_g3_ParamLimits

0x162f,	// (0x00010e61) cale_month_pane_g3

0x1683,	// (0x00010eb5) cale_month_pane_g4_ParamLimits

0x1683,	// (0x00010eb5) cale_month_pane_g4

0x16d7,	// (0x00010f09) cale_month_pane_g5_ParamLimits

0x16d7,	// (0x00010f09) cale_month_pane_g5

0x1733,	// (0x00010f65) cale_month_pane_g6_ParamLimits

0x1733,	// (0x00010f65) cale_month_pane_g6

0x1797,	// (0x00010fc9) cale_month_pane_g7_ParamLimits

0x1797,	// (0x00010fc9) cale_month_pane_g7

0x1803,	// (0x00011035) cale_month_pane_g8_ParamLimits

0x1803,	// (0x00011035) cale_month_pane_g8

0x186f,	// (0x000110a1) cale_month_pane_g9_ParamLimits

0x186f,	// (0x000110a1) cale_month_pane_g9

0x18cd,	// (0x000110ff) cale_month_pane_g10_ParamLimits

0x18cd,	// (0x000110ff) cale_month_pane_g10

0x191f,	// (0x00011151) cale_month_pane_g11_ParamLimits

0x191f,	// (0x00011151) cale_month_pane_g11

0x1971,	// (0x000111a3) cale_month_pane_g12_ParamLimits

0x1971,	// (0x000111a3) cale_month_pane_g12

0x19c9,	// (0x000111fb) cale_month_pane_g13_ParamLimits

0x19c9,	// (0x000111fb) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001eabd) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001eabd) cale_month_pane_g

0x1a21,	// (0x00011253) cale_month_week_pane

0x1a45,	// (0x00011277) grid_cale_month_pane_ParamLimits

0x1a45,	// (0x00011277) grid_cale_month_pane

0x1a9b,	// (0x000112cd) cale_month_day_heading_pane_t1

0x1b21,	// (0x00011353) cale_month_day_heading_pane_t2

0x1bb2,	// (0x000113e4) cale_month_day_heading_pane_t3

0x1c43,	// (0x00011475) cale_month_day_heading_pane_t4

0x1cd4,	// (0x00011506) cale_month_day_heading_pane_t5

0x1d75,	// (0x000115a7) cale_month_day_heading_pane_t6

0x1e1a,	// (0x0001164c) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001ead8) cale_month_day_heading_pane_t

0x9ea9,	// (0x000196db) bg_cale_side_pane_cp01

0x1ec3,	// (0x000116f5) cale_month_week_pane_t1

0x1edc,	// (0x0001170e) cale_month_week_pane_t2

0x1ef5,	// (0x00011727) cale_month_week_pane_t3

0x1f0e,	// (0x00011740) cale_month_week_pane_t4

0x1f27,	// (0x00011759) cale_month_week_pane_t5

0x1f40,	// (0x00011772) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001eae7) cale_month_week_pane_t

0x1f5f,	// (0x00011791) cell_cale_month_pane_ParamLimits

0x1f5f,	// (0x00011791) cell_cale_month_pane

0xa256,	// (0x00019a88) cell_cale_month_pane_g1

0x20b3,	// (0x000118e5) cell_cale_month_pane_t1_ParamLimits

0x20b3,	// (0x000118e5) cell_cale_month_pane_t1

0x9eb7,	// (0x000196e9) grid_highlight_pane_cp08

0x9d51,	// (0x00019583) main_smil_g1

0x20d3,	// (0x00011905) smil_status_pane

0xa262,	// (0x00019a94) smil_text_pane

0xbbd7,	// (0x0001b409) bg_popup_call3_rect_pane_g8

0xbbdf,	// (0x0001b411) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001eda0) bg_popup_call3_rect_pane_g

0xbe6d,	// (0x0001b69f) smil_status_volume_pane_g1

0x20e6,	// (0x00011918) smil_status_pane_t1

0xbea0,	// (0x0001b6d2) volume_smil_pane

0xa26c,	// (0x00019a9e) list_smil_text_pane

0x20ff,	// (0x00011931) scroll_pane_cp011

0x210a,	// (0x0001193c) smil_text_list_pane_t1_ParamLimits

0x210a,	// (0x0001193c) smil_text_list_pane_t1

0xa276,	// (0x00019aa8) aid_volume_smil_ParamLimits

0xa276,	// (0x00019aa8) aid_volume_smil

0x9d51,	// (0x00019583) smil_volume_pane_g1

0x9d51,	// (0x00019583) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001eb07) smil_volume_pane_g

0x0336,	// (0x0000fb68) listscroll_cale_day_pane

0xa298,	// (0x00019aca) bg_cale_pane

0xa2b0,	// (0x00019ae2) list_cale_pane

0xa2d3,	// (0x00019b05) scroll_pane_cp09

0xa2e4,	// (0x00019b16) cale_bg_pane_g1

0xa2ec,	// (0x00019b1e) cale_bg_pane_g2

0xa2f4,	// (0x00019b26) cale_bg_pane_g3

0xa2fc,	// (0x00019b2e) cale_bg_pane_g4

0xa304,	// (0x00019b36) cale_bg_pane_g5

0xa30c,	// (0x00019b3e) cale_bg_pane_g6

0xa314,	// (0x00019b46) cale_bg_pane_g7

0xa31c,	// (0x00019b4e) cale_bg_pane_g8

0xa324,	// (0x00019b56) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001eb0c) cale_bg_pane_g

0x2143,	// (0x00011975) list_cale_time_pane_ParamLimits

0x2143,	// (0x00011975) list_cale_time_pane

0xa334,	// (0x00019b66) list_cale_time_pane_g1_ParamLimits

0xa334,	// (0x00019b66) list_cale_time_pane_g1

0xa340,	// (0x00019b72) list_cale_time_pane_g2_ParamLimits

0xa340,	// (0x00019b72) list_cale_time_pane_g2

0x2157,	// (0x00011989) list_cale_time_pane_g3_ParamLimits

0x2157,	// (0x00011989) list_cale_time_pane_g3

0x2165,	// (0x00011997) list_cale_time_pane_g4_ParamLimits

0x2165,	// (0x00011997) list_cale_time_pane_g4

0x2173,	// (0x000119a5) list_cale_time_pane_g5_ParamLimits

0x2173,	// (0x000119a5) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001eb1f) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001eb1f) list_cale_time_pane_g

0xa35a,	// (0x00019b8c) list_cale_time_pane_t1_ParamLimits

0xa35a,	// (0x00019b8c) list_cale_time_pane_t1

0xa382,	// (0x00019bb4) list_cale_time_pane_t2_ParamLimits

0xa382,	// (0x00019bb4) list_cale_time_pane_t2

0x2512,	// (0x00011d44) aid_blid_cardinal_pane

0x2550,	// (0x00011d82) compass_pane_t4

0xa3aa,	// (0x00019bdc) list_cale_time_pane_t4_ParamLimits

0xa3aa,	// (0x00019bdc) list_cale_time_pane_t4

0x255e,	// (0x00011d90) compass_pane_t5

0x256c,	// (0x00011d9e) compass_pane_t6

0x257a,	// (0x00011dac) compass_pane_t7

0xa833,	// (0x0001a065) navi_pane_cc_t1

0xa992,	// (0x0001a1c4) aid_phob_thumbnail_center_pane

0x2cf6,	// (0x00012528) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001eb2c) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001eb2c) list_cale_time_pane_t

0x95ed,	// (0x00018e1f) bg_popup_window_pane_cp02_ParamLimits

0x95ed,	// (0x00018e1f) bg_popup_window_pane_cp02

0xa3d2,	// (0x00019c04) heading_pane_cp01_ParamLimits

0xa3d2,	// (0x00019c04) heading_pane_cp01

0xa3de,	// (0x00019c10) loc_req_pane_ParamLimits

0xa3de,	// (0x00019c10) loc_req_pane

0xa3ee,	// (0x00019c20) loc_type_pane_ParamLimits

0xa3ee,	// (0x00019c20) loc_type_pane

0xa400,	// (0x00019c32) loc_type_pane_t1_ParamLimits

0xa400,	// (0x00019c32) loc_type_pane_t1

0xa412,	// (0x00019c44) loc_type_pane_t2_ParamLimits

0xa412,	// (0x00019c44) loc_type_pane_t2

0xa424,	// (0x00019c56) loc_type_pane_t3_ParamLimits

0xa424,	// (0x00019c56) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001eb33) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001eb33) loc_type_pane_t

0xa436,	// (0x00019c68) list_loc_req_pane

0xa440,	// (0x00019c72) scroll_pane_cp012

0x2181,	// (0x000119b3) list_single_loc_request_popup_menu_pane_ParamLimits

0x2181,	// (0x000119b3) list_single_loc_request_popup_menu_pane

0xa44b,	// (0x00019c7d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa44b,	// (0x00019c7d) list_single_loc_request_popup_menu_pane_g1

0xa457,	// (0x00019c89) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa457,	// (0x00019c89) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001eb3a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001eb3a) list_single_loc_request_popup_menu_pane_g

0xa463,	// (0x00019c95) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa463,	// (0x00019c95) list_single_loc_request_popup_menu_pane_t1

0x9bf1,	// (0x00019423) bg_popup_window_pane_cp03_ParamLimits

0x9bf1,	// (0x00019423) bg_popup_window_pane_cp03

0xa479,	// (0x00019cab) heading_loc_req_pane_ParamLimits

0xa479,	// (0x00019cab) heading_loc_req_pane

0x218e,	// (0x000119c0) popup_dyc_status_message_window_g1_ParamLimits

0x218e,	// (0x000119c0) popup_dyc_status_message_window_g1

0x21a2,	// (0x000119d4) popup_dyc_status_message_window_t1_ParamLimits

0x21a2,	// (0x000119d4) popup_dyc_status_message_window_t1

0x21b7,	// (0x000119e9) popup_dyc_status_message_window_t2_ParamLimits

0x21b7,	// (0x000119e9) popup_dyc_status_message_window_t2

0x21cc,	// (0x000119fe) popup_dyc_status_message_window_t3_ParamLimits

0x21cc,	// (0x000119fe) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001eb3f) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001eb3f) popup_dyc_status_message_window_t

0x9996,	// (0x000191c8) bg_heading_pane_cp01

0xa485,	// (0x00019cb7) heading_loc_req_pane_g1

0xa48d,	// (0x00019cbf) heading_loc_req_pane_g2

0xa495,	// (0x00019cc7) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001eb46) heading_loc_req_pane_g

0xa49d,	// (0x00019ccf) heading_loc_req_pane_t1

0xa4ad,	// (0x00019cdf) bg_popup_sub_pane_cp01_ParamLimits

0xa4ad,	// (0x00019cdf) bg_popup_sub_pane_cp01

0xa4bb,	// (0x00019ced) popup_cale_events_window_g1_ParamLimits

0xa4bb,	// (0x00019ced) popup_cale_events_window_g1

0xa4db,	// (0x00019d0d) popup_cale_events_window_g2_ParamLimits

0xa4db,	// (0x00019d0d) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001eb7a) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001eb7a) popup_cale_events_window_g

0xa4fb,	// (0x00019d2d) popup_cale_events_window_t1_ParamLimits

0xa4fb,	// (0x00019d2d) popup_cale_events_window_t1

0xa50d,	// (0x00019d3f) popup_cale_events_window_t2_ParamLimits

0xa50d,	// (0x00019d3f) popup_cale_events_window_t2

0xa54b,	// (0x00019d7d) popup_cale_events_window_t3_ParamLimits

0xa54b,	// (0x00019d7d) popup_cale_events_window_t3

0xa585,	// (0x00019db7) popup_cale_events_window_t4_ParamLimits

0xa585,	// (0x00019db7) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001eb7f) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001eb7f) popup_cale_events_window_t

0x22d1,	// (0x00011b03) call_type_pane

0x22e1,	// (0x00011b13) popup_call_status_window_g1

0x22f5,	// (0x00011b27) popup_call_status_window_g2

0x2309,	// (0x00011b3b) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001eb88) popup_call_status_window_g

0xa5bb,	// (0x00019ded) call_type_pane_g1

0xa5c4,	// (0x00019df6) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001eb8f) call_type_pane_g

0x9996,	// (0x000191c8) bg_popup_sub_pane_cp02

0xa5cd,	// (0x00019dff) listscroll_popup_wml_pane

0xa5d5,	// (0x00019e07) list_wml_pane

0xa5df,	// (0x00019e11) scroll_pane_cp013

0xa5ea,	// (0x00019e1c) list_single_graphic_popup_wml_pane_ParamLimits

0xa5ea,	// (0x00019e1c) list_single_graphic_popup_wml_pane

0x9d51,	// (0x00019583) list_single_graphic_popup_wml_pane_g1

0xa5fe,	// (0x00019e30) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001eb94) list_single_graphic_popup_wml_pane_g

0xa606,	// (0x00019e38) list_single_graphic_popup_wml_pane_t1

0xa61c,	// (0x00019e4e) aid_call_pane

0x9be9,	// (0x0001941b) popup_clock_analogue_window_g1

0x9be9,	// (0x0001941b) popup_clock_analogue_window_g2

0xa624,	// (0x00019e56) popup_clock_analogue_window_g3

0xa624,	// (0x00019e56) popup_clock_analogue_window_g4

0x9d51,	// (0x00019583) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001eb99) popup_clock_analogue_window_g

0xa62c,	// (0x00019e5e) popup_clock_analogue_window_t1

0xa63a,	// (0x00019e6c) clock_digital_number_pane_ParamLimits

0xa63a,	// (0x00019e6c) clock_digital_number_pane

0xa646,	// (0x00019e78) clock_digital_number_pane_cp02_ParamLimits

0xa646,	// (0x00019e78) clock_digital_number_pane_cp02

0xa652,	// (0x00019e84) clock_digital_number_pane_cp03_ParamLimits

0xa652,	// (0x00019e84) clock_digital_number_pane_cp03

0xa65e,	// (0x00019e90) clock_digital_number_pane_cp04_ParamLimits

0xa65e,	// (0x00019e90) clock_digital_number_pane_cp04

0xa66a,	// (0x00019e9c) clock_digital_separator_pane_ParamLimits

0xa66a,	// (0x00019e9c) clock_digital_separator_pane

0xa676,	// (0x00019ea8) popup_clock_digital_window_t1

0x9d51,	// (0x00019583) clock_digital_number_pane_g1

0x9d51,	// (0x00019583) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001eb07) clock_digital_number_pane_g

0x9d51,	// (0x00019583) clock_digital_separator_pane_g1

0x9d51,	// (0x00019583) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001eb07) clock_digital_separator_pane_g

0x9996,	// (0x000191c8) bg_popup_window_pane_cp04

0xa693,	// (0x00019ec5) heading_pane_cp03

0xa69b,	// (0x00019ecd) listscroll_popup_gms_pane

0xa6a3,	// (0x00019ed5) grid_large_graphic_popup_pane

0xa6ad,	// (0x00019edf) listscroll_popup_gms_pane_g1

0xa6b5,	// (0x00019ee7) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001eba4) listscroll_popup_gms_pane_g

0xa0bb,	// (0x000198ed) scroll_pane_cp014

0x2319,	// (0x00011b4b) cell_large_graphic_popup_pane_ParamLimits

0x2319,	// (0x00011b4b) cell_large_graphic_popup_pane

0x2331,	// (0x00011b63) cell_large_graphic_popup_pane_g1_ParamLimits

0x2331,	// (0x00011b63) cell_large_graphic_popup_pane_g1

0xa6bd,	// (0x00019eef) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6bd,	// (0x00019eef) cell_large_graphic_popup_pane_g2

0xa6c9,	// (0x00019efb) cell_large_graphic_popup_pane_g3_ParamLimits

0xa6c9,	// (0x00019efb) cell_large_graphic_popup_pane_g3

0xa6d6,	// (0x00019f08) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6d6,	// (0x00019f08) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001eba9) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001eba9) cell_large_graphic_popup_pane_g

0xa6e6,	// (0x00019f18) grid_highlight_pane_cp010

0x9d51,	// (0x00019583) bg_popup_call_pane_g1

0xa6f0,	// (0x00019f22) list_single_graphic_popup_conf_pane_ParamLimits

0xa6f0,	// (0x00019f22) list_single_graphic_popup_conf_pane

0xa702,	// (0x00019f34) list_highlight_pane_cp01

0xa70b,	// (0x00019f3d) list_single_graphic_popup_conf_pane_g1

0xa713,	// (0x00019f45) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001ebb2) list_single_graphic_popup_conf_pane_g

0xa71b,	// (0x00019f4d) list_single_graphic_popup_conf_pane_t1

0xa729,	// (0x00019f5b) linegrid_cams_pane_g1

0x233d,	// (0x00011b6f) linegrid_cams_pane_g2

0x9eea,	// (0x0001971c) linegrid_cams_pane_g3

0xa732,	// (0x00019f64) linegrid_cams_pane_g4

0x2346,	// (0x00011b78) linegrid_cams_pane_g5

0x234f,	// (0x00011b81) linegrid_cams_pane_g6

0x9ef3,	// (0x00019725) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001ebb7) linegrid_cams_pane_g

0xa73b,	// (0x00019f6d) popup_clock_analogue_window

0xa73b,	// (0x00019f6d) popup_clock_digital_window

0x9996,	// (0x000191c8) popup_phob_thumbnail_window

0x9d51,	// (0x00019583) call_video_uplink_pane_g1

0xa744,	// (0x00019f76) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001ebc6) call_video_uplink_pane_g

0xa74c,	// (0x00019f7e) video_uplink_pane

0xa754,	// (0x00019f86) mce_image_pane_g1

0x235a,	// (0x00011b8c) mce_image_pane_g2

0x2364,	// (0x00011b96) mce_image_pane_g3

0x236e,	// (0x00011ba0) mce_image_pane_g4

0x2376,	// (0x00011ba8) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001ebcb) mce_image_pane_g

0xa75e,	// (0x00019f90) control_top_pane_stacon_cp01_ParamLimits

0xa75e,	// (0x00019f90) control_top_pane_stacon_cp01

0xa772,	// (0x00019fa4) uni_indicator_pane_stacon_cp01_ParamLimits

0xa772,	// (0x00019fa4) uni_indicator_pane_stacon_cp01

0xa783,	// (0x00019fb5) bg_popup_sub_pane_cp03

0x237e,	// (0x00011bb0) chi_dic_find_pane

0x2386,	// (0x00011bb8) listscroll_chi_dic_pane

0x238f,	// (0x00011bc1) main_pane_chidic_g1

0x23a2,	// (0x00011bd4) chi_dic_find_pane_t1

0xa78d,	// (0x00019fbf) find_chidic_pane

0xa796,	// (0x00019fc8) chi_dic_list_pane_ParamLimits

0xa796,	// (0x00019fc8) chi_dic_list_pane

0xa7a7,	// (0x00019fd9) scroll_pane_cp020

0x23b0,	// (0x00011be2) find_chidic_pane_t1

0x9996,	// (0x000191c8) input_focus_pane_cp06

0xf0b8,	// (0x0001e8ea) list_chi_dic_pane_ParamLimits

0xf0b8,	// (0x0001e8ea) list_chi_dic_pane

0x23bf,	// (0x00011bf1) list_chi_dic_pane_t1_ParamLimits

0x23bf,	// (0x00011bf1) list_chi_dic_pane_t1

0x9996,	// (0x000191c8) list_highlight_pane_cp020

0xa7af,	// (0x00019fe1) bg_cale_heading_pane_g1

0x23d2,	// (0x00011c04) bg_cale_heading_pane_g2

0x23da,	// (0x00011c0c) bg_cale_heading_pane_g3

0x23e2,	// (0x00011c14) bg_cale_heading_pane_g4

0x23ec,	// (0x00011c1e) bg_cale_heading_pane_g5

0x23f6,	// (0x00011c28) bg_cale_heading_pane_g6

0x23fe,	// (0x00011c30) bg_cale_heading_pane_g7

0x2406,	// (0x00011c38) bg_cale_heading_pane_g8

0x2410,	// (0x00011c42) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001ebd6) bg_cale_heading_pane_g

0xa7af,	// (0x00019fe1) bg_cale_side_pane_g1

0x241a,	// (0x00011c4c) bg_cale_side_pane_g2

0x2424,	// (0x00011c56) bg_cale_side_pane_g3

0x242e,	// (0x00011c60) bg_cale_side_pane_g4

0x2438,	// (0x00011c6a) bg_cale_side_pane_g5

0x2442,	// (0x00011c74) bg_cale_side_pane_g6

0x244c,	// (0x00011c7e) bg_cale_side_pane_g7

0x2456,	// (0x00011c88) bg_cale_side_pane_g8

0x245e,	// (0x00011c90) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001ebe9) bg_cale_side_pane_g

0x2466,	// (0x00011c98) popup_call_status_window_ParamLimits

0x2466,	// (0x00011c98) popup_call_status_window

0xa7b7,	// (0x00019fe9) stacon_top_pane

0xa7bf,	// (0x00019ff1) status_pane_ParamLimits

0xa7bf,	// (0x00019ff1) status_pane

0xa7d4,	// (0x0001a006) status_small_pane

0xa7dc,	// (0x0001a00e) control_pane

0x9996,	// (0x000191c8) stacon_bottom_pane

0xa7e4,	// (0x0001a016) list_single_mce_smart_pane_t1_ParamLimits

0xa7e4,	// (0x0001a016) list_single_mce_smart_pane_t1

0xa7f7,	// (0x0001a029) list_single_mce_smart_pane_t2_ParamLimits

0xa7f7,	// (0x0001a029) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001ebfc) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001ebfc) list_single_mce_smart_pane_t

0x24b3,	// (0x00011ce5) compass_pane

0x24be,	// (0x00011cf0) main_location2_pane_t1

0x24d2,	// (0x00011d04) main_location2_pane_t2

0x24e8,	// (0x00011d1a) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001ec01) main_location2_pane_t

0xa816,	// (0x0001a048) compass_pane_g1_ParamLimits

0xa816,	// (0x0001a048) compass_pane_g1

0x2532,	// (0x00011d64) compass_pane_t1

0x2541,	// (0x00011d73) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001ec0a) compass_pane_t

0x2588,	// (0x00011dba) text_secondary_cp61

0xa82a,	// (0x0001a05c) navi_pane_cams_g5

0xa84d,	// (0x0001a07f) navi_pane_im_t1

0xa85b,	// (0x0001a08d) navi_pane_mp_g1_ParamLimits

0xa85b,	// (0x0001a08d) navi_pane_mp_g1

0xa86f,	// (0x0001a0a1) navi_pane_mp_g2_ParamLimits

0xa86f,	// (0x0001a0a1) navi_pane_mp_g2

0xa87b,	// (0x0001a0ad) navi_pane_mp_g3_ParamLimits

0xa87b,	// (0x0001a0ad) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001ec1e) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001ec1e) navi_pane_mp_g

0xa887,	// (0x0001a0b9) navi_pane_mp_t1

0xa895,	// (0x0001a0c7) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001ec25) navi_pane_mp_t

0xa8d1,	// (0x0001a103) navi_pane_vt_g1

0xa887,	// (0x0001a0b9) navi_pane_vt_t1

0xa8d9,	// (0x0001a10b) navi_slider_pane

0x9f04,	// (0x00019736) zooming_pane

0xa8e1,	// (0x0001a113) navi_slider_pane_g1

0xa8ea,	// (0x0001a11c) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001ec2c) navi_slider_pane_g

0xa917,	// (0x0001a149) aid_levels_zoom

0xa91f,	// (0x0001a151) zooming_pane_g1

0xa927,	// (0x0001a159) zooming_pane_g2

0xa927,	// (0x0001a159) zooming_pane_g3

0x0002,

0xf409,	// (0x0001ec3b) zooming_pane_g

0xa92f,	// (0x0001a161) level_10_zoom

0xa938,	// (0x0001a16a) level_11_zoom

0xa941,	// (0x0001a173) level_1_zoom

0xa94a,	// (0x0001a17c) level_2_zoom

0xa953,	// (0x0001a185) level_3_zoom

0xa95c,	// (0x0001a18e) level_4_zoom

0xa965,	// (0x0001a197) level_5_zoom

0xa96e,	// (0x0001a1a0) level_6_zoom

0xa977,	// (0x0001a1a9) level_7_zoom

0xa980,	// (0x0001a1b2) level_8_zoom

0xa989,	// (0x0001a1bb) level_9_zoom

0xa99a,	// (0x0001a1cc) popup_phob_thumbnail_window_g1

0xa9a2,	// (0x0001a1d4) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001ec42) popup_phob_thumbnail_window_g

0xbd3d,	// (0x0001b56f) level_1_location

0xbd45,	// (0x0001b577) level_2_location

0xbd4d,	// (0x0001b57f) level_3_location

0xbd55,	// (0x0001b587) level_4_location

0x9f04,	// (0x00019736) level_5_location

0x26d1,	// (0x00011f03) mce_icon_pane_g1

0x26db,	// (0x00011f0d) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001ec47) mce_icon_pane_g

0x26e3,	// (0x00011f15) main_mup_pane_g1_ParamLimits

0x26e3,	// (0x00011f15) main_mup_pane_g1

0x26f9,	// (0x00011f2b) main_mup_pane_g2_ParamLimits

0x26f9,	// (0x00011f2b) main_mup_pane_g2

0x2711,	// (0x00011f43) main_mup_pane_g3_ParamLimits

0x2711,	// (0x00011f43) main_mup_pane_g3

0x2729,	// (0x00011f5b) main_mup_pane_g4_ParamLimits

0x2729,	// (0x00011f5b) main_mup_pane_g4

0x2741,	// (0x00011f73) main_mup_pane_g5_ParamLimits

0x2741,	// (0x00011f73) main_mup_pane_g5

0x275d,	// (0x00011f8f) main_mup_pane_g6_ParamLimits

0x275d,	// (0x00011f8f) main_mup_pane_g6

0x2777,	// (0x00011fa9) main_mup_pane_g7_ParamLimits

0x2777,	// (0x00011fa9) main_mup_pane_g7

0x2795,	// (0x00011fc7) main_mup_pane_g8_ParamLimits

0x2795,	// (0x00011fc7) main_mup_pane_g8

0x27b3,	// (0x00011fe5) main_mup_pane_g9_ParamLimits

0x27b3,	// (0x00011fe5) main_mup_pane_g9

0x27cf,	// (0x00012001) main_mup_pane_g10_ParamLimits

0x27cf,	// (0x00012001) main_mup_pane_g10

0x27ed,	// (0x0001201f) main_mup_pane_g11_ParamLimits

0x27ed,	// (0x0001201f) main_mup_pane_g11

0x2807,	// (0x00012039) main_mup_pane_g12_ParamLimits

0x2807,	// (0x00012039) main_mup_pane_g12

0x281d,	// (0x0001204f) main_mup_pane_g13_ParamLimits

0x281d,	// (0x0001204f) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001ec4c) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001ec4c) main_mup_pane_g

0x2831,	// (0x00012063) main_mup_pane_t1_ParamLimits

0x2831,	// (0x00012063) main_mup_pane_t1

0x284d,	// (0x0001207f) main_mup_pane_t2_ParamLimits

0x284d,	// (0x0001207f) main_mup_pane_t2

0x2865,	// (0x00012097) main_mup_pane_t3_ParamLimits

0x2865,	// (0x00012097) main_mup_pane_t3

0x287d,	// (0x000120af) main_mup_pane_t4_ParamLimits

0x287d,	// (0x000120af) main_mup_pane_t4

0x289b,	// (0x000120cd) main_mup_pane_t5_ParamLimits

0x289b,	// (0x000120cd) main_mup_pane_t5

0x28b0,	// (0x000120e2) main_mup_pane_t6_ParamLimits

0x28b0,	// (0x000120e2) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001ec67) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001ec67) main_mup_pane_t

0x28c2,	// (0x000120f4) mup_progress_pane_ParamLimits

0x28c2,	// (0x000120f4) mup_progress_pane

0x28ce,	// (0x00012100) mup_visualizer_pane_ParamLimits

0x28ce,	// (0x00012100) mup_visualizer_pane

0x2902,	// (0x00012134) mup_volume_pane_ParamLimits

0x2902,	// (0x00012134) mup_volume_pane

0xa9aa,	// (0x0001a1dc) mup_visualizer_pane_g1_ParamLimits

0xa9aa,	// (0x0001a1dc) mup_visualizer_pane_g1

0xa9aa,	// (0x0001a1dc) mup_visualizer_pane_g2_ParamLimits

0xa9aa,	// (0x0001a1dc) mup_visualizer_pane_g2

0xa816,	// (0x0001a048) mup_visualizer_pane_g3_ParamLimits

0xa816,	// (0x0001a048) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001ec74) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001ec74) mup_visualizer_pane_g

0x9d51,	// (0x00019583) mup_volume_pane_g1

0xa9c0,	// (0x0001a1f2) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001ec7b) mup_volume_pane_g

0x9d51,	// (0x00019583) mup_progress_pane_g1

0xa9c9,	// (0x0001a1fb) mup_progress_pane_g2

0xa9d2,	// (0x0001a204) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001ec80) mup_progress_pane_g

0x9996,	// (0x000191c8) bg_popup_window_pane_cp05

0xa9db,	// (0x0001a20d) heading_pane_cp02_ParamLimits

0xa9db,	// (0x0001a20d) heading_pane_cp02

0xa9f7,	// (0x0001a229) list_popup_blid_pane

0xa9ff,	// (0x0001a231) list_blid_sat_info_pane_ParamLimits

0xa9ff,	// (0x0001a231) list_blid_sat_info_pane

0xaa12,	// (0x0001a244) list_blid_sat_info_pane_g1

0xaa1a,	// (0x0001a24c) list_blid_sat_info_pane_t1

0x2a2c,	// (0x0001225e) mup_equalizer_pane_ParamLimits

0x2a2c,	// (0x0001225e) mup_equalizer_pane

0x2a4d,	// (0x0001227f) mup_equalizer_pane_cp1_ParamLimits

0x2a4d,	// (0x0001227f) mup_equalizer_pane_cp1

0x2a6e,	// (0x000122a0) mup_equalizer_pane_cp2_ParamLimits

0x2a6e,	// (0x000122a0) mup_equalizer_pane_cp2

0x2a93,	// (0x000122c5) mup_equalizer_pane_cp3_ParamLimits

0x2a93,	// (0x000122c5) mup_equalizer_pane_cp3

0x2abc,	// (0x000122ee) mup_equalizer_pane_cp4_ParamLimits

0x2abc,	// (0x000122ee) mup_equalizer_pane_cp4

0x2ae5,	// (0x00012317) mup_equalizer_pane_cp5

0x2afd,	// (0x0001232f) mup_equalizer_pane_cp6

0x2b15,	// (0x00012347) mup_equalizer_pane_cp7

0xbc57,	// (0x0001b489) bg_popup_call_poc_act_pane_g9

0xbc5f,	// (0x0001b491) bg_popup_call_poc_act_pane_g10

0xbc67,	// (0x0001b499) bg_popup_call_poc_act_pane_g11

0x000a,

0x9bf1,	// (0x00019423) mup_scale_pane

0x9d51,	// (0x00019583) mup_scale_pane_g1

0xaa28,	// (0x0001a25a) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001ec9c) mup_scale_pane_g

0xaa4c,	// (0x0001a27e) msg_data_pane

0xaa54,	// (0x0001a286) scroll_pane_cp017

0x2b3f,	// (0x00012371) bg_list_pane_cp04_ParamLimits

0x2b3f,	// (0x00012371) bg_list_pane_cp04

0xaa64,	// (0x0001a296) msg_data_pane_g1

0x2b5f,	// (0x00012391) msg_data_pane_g2

0x2b69,	// (0x0001239b) msg_data_pane_g3

0x2b73,	// (0x000123a5) msg_data_pane_g4

0x2b7b,	// (0x000123ad) msg_data_pane_g5

0x2b83,	// (0x000123b5) msg_data_pane_g6

0x2b8b,	// (0x000123bd) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001ecab) msg_data_pane_g

0x2b93,	// (0x000123c5) msg_text_pane_ParamLimits

0x2b93,	// (0x000123c5) msg_text_pane

0x2bbb,	// (0x000123ed) qrid_highlight_pane_cp011_ParamLimits

0x2bbb,	// (0x000123ed) qrid_highlight_pane_cp011

0x9996,	// (0x000191c8) msg_body_pane

0x9996,	// (0x000191c8) msg_header_pane

0xaa75,	// (0x0001a2a7) input_focus_pane_cp07

0xaa8a,	// (0x0001a2bc) msg_header_pane_t1_ParamLimits

0xaa8a,	// (0x0001a2bc) msg_header_pane_t1

0xaa9c,	// (0x0001a2ce) msg_header_pane_t2_ParamLimits

0xaa9c,	// (0x0001a2ce) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001ecbf) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001ecbf) msg_header_pane_t

0xaaae,	// (0x0001a2e0) msg_body_pane_g1

0x2bdf,	// (0x00012411) msg_body_pane_t1_ParamLimits

0x2bdf,	// (0x00012411) msg_body_pane_t1

0xaab6,	// (0x0001a2e8) msg_body_pane_t2_ParamLimits

0xaab6,	// (0x0001a2e8) msg_body_pane_t2

0xaac8,	// (0x0001a2fa) msg_body_pane_t3_ParamLimits

0xaac8,	// (0x0001a2fa) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001ecc4) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001ecc4) msg_body_pane_t

0x2c4a,	// (0x0001247c) main_viewer_pane_g1_ParamLimits

0x2c4a,	// (0x0001247c) main_viewer_pane_g1

0x2c58,	// (0x0001248a) main_viewer_pane_g2_ParamLimits

0x2c58,	// (0x0001248a) main_viewer_pane_g2

0x2c66,	// (0x00012498) main_viewer_pane_g3_ParamLimits

0x2c66,	// (0x00012498) main_viewer_pane_g3

0x2c75,	// (0x000124a7) main_viewer_pane_g4_ParamLimits

0x2c75,	// (0x000124a7) main_viewer_pane_g4

0xaaf2,	// (0x0001a324) main_viewer_pane_g5_ParamLimits

0xaaf2,	// (0x0001a324) main_viewer_pane_g5

0xaaf2,	// (0x0001a324) main_viewer_pane_g7_ParamLimits

0xaaf2,	// (0x0001a324) main_viewer_pane_g7

0xab04,	// (0x0001a336) main_viewer_pane_g8_ParamLimits

0xab04,	// (0x0001a336) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001ecd4) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001ecd4) main_viewer_pane_g

0xab1c,	// (0x0001a34e) viewer_content_pane_ParamLimits

0xab1c,	// (0x0001a34e) viewer_content_pane

0x2cb3,	// (0x000124e5) main_postcard_pane_g1_ParamLimits

0x2cb3,	// (0x000124e5) main_postcard_pane_g1

0x2cc9,	// (0x000124fb) main_postcard_pane_g2_ParamLimits

0x2cc9,	// (0x000124fb) main_postcard_pane_g2

0x2cdf,	// (0x00012511) main_postcard_pane_g3_ParamLimits

0x2cdf,	// (0x00012511) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001ece5) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001ece5) main_postcard_pane_g

0x2cf6,	// (0x00012528) main_postcard_pane_g4

0xbe80,	// (0x0001b6b2) smil_status_volume_pane_g2

0x2d39,	// (0x0001256b) postcard_pane_ParamLimits

0x2d39,	// (0x0001256b) postcard_pane

0xab2a,	// (0x0001a35c) postcard_pane_g1_ParamLimits

0xab2a,	// (0x0001a35c) postcard_pane_g1

0x2d89,	// (0x000125bb) postcard_pane_g2_ParamLimits

0x2d89,	// (0x000125bb) postcard_pane_g2

0x2d95,	// (0x000125c7) postcard_pane_g3_ParamLimits

0x2d95,	// (0x000125c7) postcard_pane_g3

0xab38,	// (0x0001a36a) postcard_pane_g4_ParamLimits

0xab38,	// (0x0001a36a) postcard_pane_g4

0x2da1,	// (0x000125d3) postcard_pane_g5_ParamLimits

0x2da1,	// (0x000125d3) postcard_pane_g5

0x2db6,	// (0x000125e8) postcard_pane_g6_ParamLimits

0x2db6,	// (0x000125e8) postcard_pane_g6

0xab2a,	// (0x0001a35c) postcard_pane_g7_ParamLimits

0xab2a,	// (0x0001a35c) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001ecf2) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001ecf2) postcard_pane_g

0x2dce,	// (0x00012600) main_mp2_pane_g1_ParamLimits

0x2dce,	// (0x00012600) main_mp2_pane_g1

0x2ddc,	// (0x0001260e) main_mp2_pane_g2_ParamLimits

0x2ddc,	// (0x0001260e) main_mp2_pane_g2

0x2de8,	// (0x0001261a) main_mp2_pane_g3_ParamLimits

0x2de8,	// (0x0001261a) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001ed01) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001ed01) main_mp2_pane_g

0x2df4,	// (0x00012626) main_mp2_pane_t1_ParamLimits

0x2df4,	// (0x00012626) main_mp2_pane_t1

0x2e0b,	// (0x0001263d) main_mp2_pane_t2_ParamLimits

0x2e0b,	// (0x0001263d) main_mp2_pane_t2

0x2e1d,	// (0x0001264f) main_mp2_pane_t3_ParamLimits

0x2e1d,	// (0x0001264f) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001ed08) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001ed08) main_mp2_pane_t

0xab46,	// (0x0001a378) pec_content_pane_ParamLimits

0xab46,	// (0x0001a378) pec_content_pane

0xa0bb,	// (0x000198ed) scroll_pane_cp015

0xab58,	// (0x0001a38a) pec_attribute_pane_ParamLimits

0xab58,	// (0x0001a38a) pec_attribute_pane

0x2e2f,	// (0x00012661) pec_content_pane_g1_ParamLimits

0x2e2f,	// (0x00012661) pec_content_pane_g1

0xab68,	// (0x0001a39a) pec_content_pane_t1_ParamLimits

0xab68,	// (0x0001a39a) pec_content_pane_t1

0xab7a,	// (0x0001a3ac) pec_content_pane_t2_ParamLimits

0xab7a,	// (0x0001a3ac) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001ed0f) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001ed0f) pec_content_pane_t

0x2e3b,	// (0x0001266d) list_single_graphic_pane_cp01_ParamLimits

0x2e3b,	// (0x0001266d) list_single_graphic_pane_cp01

0x9bf1,	// (0x00019423) bg_popup_sub_pane_cp04

0xab8c,	// (0x0001a3be) popup_mup_playback_window_g1

0xab98,	// (0x0001a3ca) popup_mup_playback_window_t1

0xabad,	// (0x0001a3df) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001ed14) popup_mup_playback_window_t

0xabe4,	// (0x0001a416) main_image_pane_g1_ParamLimits

0xabe4,	// (0x0001a416) main_image_pane_g1

0xac27,	// (0x0001a459) scroll_pane_cp018_ParamLimits

0xac27,	// (0x0001a459) scroll_pane_cp018

0xac3f,	// (0x0001a471) scroll_pane_cp016_ParamLimits

0xac3f,	// (0x0001a471) scroll_pane_cp016

0x2f0a,	// (0x0001273c) smil2_image_pane_ParamLimits

0x2f0a,	// (0x0001273c) smil2_image_pane

0x2f40,	// (0x00012772) smil2_root_pane_ParamLimits

0x2f40,	// (0x00012772) smil2_root_pane

0x2f78,	// (0x000127aa) smil2_text_pane_ParamLimits

0x2f78,	// (0x000127aa) smil2_text_pane

0x9996,	// (0x000191c8) bg_list_pane_cp06

0xac7b,	// (0x0001a4ad) grid_radio_pane

0x9996,	// (0x000191c8) bg_popup_window_pane_cp06

0xac85,	// (0x0001a4b7) main_fmradio_pane_t1

0xa693,	// (0x00019ec5) heading_pane_cp04

0xac93,	// (0x0001a4c5) main_fmradio_pane_t2

0xbc6f,	// (0x0001b4a1) popup_cale_lunar_info_window_g1

0xaca1,	// (0x0001a4d3) main_fmradio_pane_t3

0xbc77,	// (0x0001b4a9) popup_cale_lunar_info_window_g2

0xacb1,	// (0x0001a4e3) main_fmradio_pane_t4

0x0001,

0xacbf,	// (0x0001a4f1) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0001edef) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001ed29) main_fmradio_pane_t

0xaccd,	// (0x0001a4ff) wait_bar_pane_cp03

0xacd5,	// (0x0001a507) cell_fmradio_pane_ParamLimits

0xacd5,	// (0x0001a507) cell_fmradio_pane

0xab2a,	// (0x0001a35c) cell_fmradio_pane_g1_ParamLimits

0xab2a,	// (0x0001a35c) cell_fmradio_pane_g1

0x9996,	// (0x000191c8) grid_highlight_pane_cp011

0xacea,	// (0x0001a51c) poc_content_pane_ParamLimits

0xacea,	// (0x0001a51c) poc_content_pane

0xacfc,	// (0x0001a52e) scroll_pane_cp019

0x3008,	// (0x0001283a) popup_call_poc_act_window_ParamLimits

0x3008,	// (0x0001283a) popup_call_poc_act_window

0x302c,	// (0x0001285e) popup_call_poc_inact_window_ParamLimits

0x302c,	// (0x0001285e) popup_call_poc_inact_window

0xf594,	// (0x0001edc6) bg_popup_call_poc_act_pane_g

0xbbe7,	// (0x0001b419) bg_popup_call_poc_inact_pane_g1

0xbbef,	// (0x0001b421) bg_popup_call_poc_inact_pane_g2

0xad04,	// (0x0001a536) popup_call_poc_act_window_g2

0xbbf7,	// (0x0001b429) bg_popup_call_poc_inact_pane_g3

0xbbff,	// (0x0001b431) bg_popup_call_poc_inact_pane_g4

0xbc07,	// (0x0001b439) bg_popup_call_poc_inact_pane_g5

0xad0c,	// (0x0001a53e) popup_call_poc_act_window_t1_ParamLimits

0xad0c,	// (0x0001a53e) popup_call_poc_act_window_t1

0xad34,	// (0x0001a566) popup_call_poc_act_window_t2_ParamLimits

0xad34,	// (0x0001a566) popup_call_poc_act_window_t2

0xad5c,	// (0x0001a58e) popup_call_poc_act_window_t3_ParamLimits

0xad5c,	// (0x0001a58e) popup_call_poc_act_window_t3

0xad84,	// (0x0001a5b6) popup_call_poc_act_window_t4_ParamLimits

0xad84,	// (0x0001a5b6) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001ed34) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001ed34) popup_call_poc_act_window_t

0xbc0f,	// (0x0001b441) bg_popup_call_poc_inact_pane_g6

0xbc17,	// (0x0001b449) bg_popup_call_poc_inact_pane_g7

0xbc1f,	// (0x0001b451) bg_popup_call_poc_inact_pane_g8

0xad96,	// (0x0001a5c8) popup_call_poc_inact_window_g2

0xbc27,	// (0x0001b459) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0001edb3) bg_popup_call_poc_inact_pane_g

0xad9e,	// (0x0001a5d0) popup_call_poc_inact_window_t1_ParamLimits

0xad9e,	// (0x0001a5d0) popup_call_poc_inact_window_t1

0xadb3,	// (0x0001a5e5) popup_call_poc_inact_window_t2_ParamLimits

0xadb3,	// (0x0001a5e5) popup_call_poc_inact_window_t2

0xadc8,	// (0x0001a5fa) popup_call_poc_inact_window_t3_ParamLimits

0xadc8,	// (0x0001a5fa) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001ed3d) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001ed3d) popup_call_poc_inact_window_t

0xbdf3,	// (0x0001b625) context_pane_ParamLimits

0x38d4,	// (0x00013106) signal_pane_ParamLimits

0x9f04,	// (0x00019736) main_call2_pane

0xbde1,	// (0x0001b613) popup_phob_thumbnail2_window_ParamLimits

0xbde1,	// (0x0001b613) popup_phob_thumbnail2_window

0xaada,	// (0x0001a30c) aid_hotspot_pointer_arrow_pane

0xaae2,	// (0x0001a314) aid_hotspot_pointer_hand_pane

0x3394,	// (0x00012bc6) phob_pre_status_pane_g5

0x0bd8,	// (0x0001040a) cams_zoom_pane_ParamLimits

0x0be7,	// (0x00010419) image_vga_pane_ParamLimits

0x0c01,	// (0x00010433) main_camera_pane_g1_ParamLimits

0x0c13,	// (0x00010445) main_camera_pane_g2_ParamLimits

0x0c23,	// (0x00010455) main_camera_pane_g3_ParamLimits

0x0c37,	// (0x00010469) main_camera_pane_g4_ParamLimits

0x0c4b,	// (0x0001047d) main_camera_pane_g5_ParamLimits

0x0c5f,	// (0x00010491) main_camera_pane_g6_ParamLimits

0x0c73,	// (0x000104a5) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001ea3c) main_camera_pane_g_ParamLimits

0x0c87,	// (0x000104b9) main_camera_pane_t1_ParamLimits

0x0c9d,	// (0x000104cf) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001ea4d) main_camera_pane_t_ParamLimits

0x9bf1,	// (0x00019423) bg_popup_preview_window_pane_cp01_ParamLimits

0x9bf1,	// (0x00019423) bg_popup_preview_window_pane_cp01

0xaddd,	// (0x0001a60f) popup_phob_thumbnail2_window_g1_ParamLimits

0xaddd,	// (0x0001a60f) popup_phob_thumbnail2_window_g1

0x9996,	// (0x000191c8) call2_cli_visual_pane

0x3060,	// (0x00012892) popup_call2_audio_conf_window_ParamLimits

0x3060,	// (0x00012892) popup_call2_audio_conf_window

0x3088,	// (0x000128ba) popup_call2_audio_first_window_ParamLimits

0x3088,	// (0x000128ba) popup_call2_audio_first_window

0x311e,	// (0x00012950) popup_call2_audio_in_window_ParamLimits

0x311e,	// (0x00012950) popup_call2_audio_in_window

0x316a,	// (0x0001299c) popup_call2_audio_out_window_ParamLimits

0x316a,	// (0x0001299c) popup_call2_audio_out_window

0x31dc,	// (0x00012a0e) popup_call2_audio_second_window_ParamLimits

0x31dc,	// (0x00012a0e) popup_call2_audio_second_window

0x3242,	// (0x00012a74) popup_call2_audio_wait_window_ParamLimits

0x3242,	// (0x00012a74) popup_call2_audio_wait_window

0x9996,	// (0x000191c8) bg_popup_call2_act_pane_cp03

0x9bd3,	// (0x00019405) list_conf_pane_cp

0xade9,	// (0x0001a61b) popup_call2_audio_conf_window_t1

0xadf7,	// (0x0001a629) list_single_graphic_popup_conf2_pane_ParamLimits

0xadf7,	// (0x0001a629) list_single_graphic_popup_conf2_pane

0xa702,	// (0x00019f34) list_highlight_pane_cp04

0xae0a,	// (0x0001a63c) list_single_graphic_popup_conf2_pane_g1

0xa713,	// (0x00019f45) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001ed44) list_single_graphic_popup_conf2_pane_g

0xae14,	// (0x0001a646) list_single_graphic_popup_conf2_pane_t1

0xae22,	// (0x0001a654) bg_popup_call2_act_pane_cp01_ParamLimits

0xae22,	// (0x0001a654) bg_popup_call2_act_pane_cp01

0xaeac,	// (0x0001a6de) call_type_pane_cp05_ParamLimits

0xaeac,	// (0x0001a6de) call_type_pane_cp05

0xaf00,	// (0x0001a732) popup_call2_audio_second_window_g1_ParamLimits

0xaf00,	// (0x0001a732) popup_call2_audio_second_window_g1

0xaf54,	// (0x0001a786) popup_call2_audio_second_window_g2_ParamLimits

0xaf54,	// (0x0001a786) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001ed49) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001ed49) popup_call2_audio_second_window_g

0xafb9,	// (0x0001a7eb) popup_call2_audio_second_window_t1_ParamLimits

0xafb9,	// (0x0001a7eb) popup_call2_audio_second_window_t1

0xb074,	// (0x0001a8a6) popup_call2_audio_second_window_t2_ParamLimits

0xb074,	// (0x0001a8a6) popup_call2_audio_second_window_t2

0xb0c7,	// (0x0001a8f9) popup_call2_audio_second_window_t3_ParamLimits

0xb0c7,	// (0x0001a8f9) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001ed50) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001ed50) popup_call2_audio_second_window_t

0x9996,	// (0x000191c8) bg_popup_call2_in_pane_cp02

0x99a0,	// (0x000191d2) call_type_pane_cp04

0x99a8,	// (0x000191da) popup_call2_audio_wait_window_g1

0x99b0,	// (0x000191e2) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001e92b) popup_call2_audio_wait_window_g

0x99b8,	// (0x000191ea) popup_call2_audio_wait_window_t3

0xb1ba,	// (0x0001a9ec) bg_popup_call2_act_pane_ParamLimits

0xb1ba,	// (0x0001a9ec) bg_popup_call2_act_pane

0xb27a,	// (0x0001aaac) call_type_pane_cp03_ParamLimits

0xb27a,	// (0x0001aaac) call_type_pane_cp03

0xb2de,	// (0x0001ab10) popup_call2_audio_first_window_g1_ParamLimits

0xb2de,	// (0x0001ab10) popup_call2_audio_first_window_g1

0xb34e,	// (0x0001ab80) popup_call2_audio_first_window_g2_ParamLimits

0xb34e,	// (0x0001ab80) popup_call2_audio_first_window_g2

0xa9aa,	// (0x0001a1dc) popup_call2_audio_first_window_g3_ParamLimits

0xa9aa,	// (0x0001a1dc) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001ed59) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001ed59) popup_call2_audio_first_window_g

0xb42c,	// (0x0001ac5e) popup_call2_audio_first_window_t1_ParamLimits

0xb42c,	// (0x0001ac5e) popup_call2_audio_first_window_t1

0xb52f,	// (0x0001ad61) popup_call2_audio_first_window_t4_ParamLimits

0xb52f,	// (0x0001ad61) popup_call2_audio_first_window_t4

0xb612,	// (0x0001ae44) popup_call2_audio_first_window_t5_ParamLimits

0xb612,	// (0x0001ae44) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001ed64) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001ed64) popup_call2_audio_first_window_t

0x9be9,	// (0x0001941b) bg_popup_call2_act_pane_g1

0xbc81,	// (0x0001b4b3) popup_cale_lunar_info_window_t1

0xbc8f,	// (0x0001b4c1) popup_cale_lunar_info_window_t2

0xbc9d,	// (0x0001b4cf) popup_cale_lunar_info_window_t3

0x9996,	// (0x000191c8) bg_popup_call2_bubble_pane

0xb713,	// (0x0001af45) bg_popup_call2_in_pane_cp01_ParamLimits

0xb713,	// (0x0001af45) bg_popup_call2_in_pane_cp01

0x9672,	// (0x00018ea4) call_type_pane_cp02

0xb75b,	// (0x0001af8d) popup_call2_audio_out_window_g1_ParamLimits

0xb75b,	// (0x0001af8d) popup_call2_audio_out_window_g1

0xb787,	// (0x0001afb9) popup_call2_audio_out_window_g2_ParamLimits

0xb787,	// (0x0001afb9) popup_call2_audio_out_window_g2

0xb7af,	// (0x0001afe1) popup_call2_audio_out_window_g3_ParamLimits

0xb7af,	// (0x0001afe1) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001ed6d) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001ed6d) popup_call2_audio_out_window_g

0xb7ea,	// (0x0001b01c) popup_call2_audio_out_window_t1_ParamLimits

0xb7ea,	// (0x0001b01c) popup_call2_audio_out_window_t1

0xb849,	// (0x0001b07b) popup_call2_audio_out_window_t2_ParamLimits

0xb849,	// (0x0001b07b) popup_call2_audio_out_window_t2

0xb89d,	// (0x0001b0cf) popup_call2_audio_out_window_t3_ParamLimits

0xb89d,	// (0x0001b0cf) popup_call2_audio_out_window_t3

0xb8b3,	// (0x0001b0e5) popup_call2_audio_out_window_t4_ParamLimits

0xb8b3,	// (0x0001b0e5) popup_call2_audio_out_window_t4

0xb8c9,	// (0x0001b0fb) popup_call2_audio_out_window_t5_ParamLimits

0xb8c9,	// (0x0001b0fb) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001ed76) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001ed76) popup_call2_audio_out_window_t

0xb92d,	// (0x0001b15f) bg_popup_call2_in_pane_ParamLimits

0xb92d,	// (0x0001b15f) bg_popup_call2_in_pane

0xb989,	// (0x0001b1bb) popup_call2_audio_in_window_g1_ParamLimits

0xb989,	// (0x0001b1bb) popup_call2_audio_in_window_g1

0xb9c1,	// (0x0001b1f3) popup_call2_audio_in_window_g2_ParamLimits

0xb9c1,	// (0x0001b1f3) popup_call2_audio_in_window_g2

0xb9f9,	// (0x0001b22b) popup_call2_audio_in_window_g3_ParamLimits

0xb9f9,	// (0x0001b22b) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001ed83) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001ed83) popup_call2_audio_in_window_g

0xba51,	// (0x0001b283) popup_call2_audio_in_window_t1_ParamLimits

0xba51,	// (0x0001b283) popup_call2_audio_in_window_t1

0xbad1,	// (0x0001b303) popup_call2_audio_in_window_t2_ParamLimits

0xbad1,	// (0x0001b303) popup_call2_audio_in_window_t2

0xbb51,	// (0x0001b383) popup_call2_audio_in_window_t3_ParamLimits

0xbb51,	// (0x0001b383) popup_call2_audio_in_window_t3

0xbb6b,	// (0x0001b39d) popup_call2_audio_in_window_t4_ParamLimits

0xbb6b,	// (0x0001b39d) popup_call2_audio_in_window_t4

0xbb7d,	// (0x0001b3af) popup_call2_audio_in_window_t5_ParamLimits

0xbb7d,	// (0x0001b3af) popup_call2_audio_in_window_t5

0xbb92,	// (0x0001b3c4) popup_call2_audio_in_window_t6_ParamLimits

0xbb92,	// (0x0001b3c4) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001ed8c) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001ed8c) popup_call2_audio_in_window_t

0x9be9,	// (0x0001941b) bg_popup_call2_in_pane_g1

0xbcab,	// (0x0001b4dd) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0001edf4) popup_cale_lunar_info_window_t

0x9bf1,	// (0x00019423) bg_popup_call2_rect_pane_ParamLimits

0x9bf1,	// (0x00019423) bg_popup_call2_rect_pane

0x9996,	// (0x000191c8) call2_cli_visual_graphic_pane

0x9996,	// (0x000191c8) call2_cli_visual_text_pane

0xbe93,	// (0x0001b6c5) smil_status_volume_pane_g3

0x0002,

0x9d51,	// (0x00019583) call2_cli_visual_graphic_pane_g1

0x9d51,	// (0x00019583) call2_cli_visual_graphic_pane_g2

0x9d51,	// (0x00019583) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001ed99) call2_cli_visual_graphic_pane_g

0xbba7,	// (0x0001b3d9) bg_popup_call2_rect_pane_g1

0x9df9,	// (0x0001962b) bg_popup_call2_rect_pane_g2

0xbbaf,	// (0x0001b3e1) bg_popup_call2_rect_pane_g3

0xbbb7,	// (0x0001b3e9) bg_popup_call2_rect_pane_g4

0xbbbf,	// (0x0001b3f1) bg_popup_call2_rect_pane_g5

0xbbc7,	// (0x0001b3f9) bg_popup_call2_rect_pane_g6

0xbbcf,	// (0x0001b401) bg_popup_call2_rect_pane_g7

0xbbd7,	// (0x0001b409) bg_popup_call2_rect_pane_g8

0xbbdf,	// (0x0001b411) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001eda0) bg_popup_call2_rect_pane_g

0xbbe7,	// (0x0001b419) bg_popup_call2_bubble_pane_g1

0xbbef,	// (0x0001b421) bg_popup_call2_bubble_pane_g2

0xbbf7,	// (0x0001b429) bg_popup_call2_bubble_pane_g3

0xbbff,	// (0x0001b431) bg_popup_call2_bubble_pane_g4

0xbc07,	// (0x0001b439) bg_popup_call2_bubble_pane_g5

0xbc0f,	// (0x0001b441) bg_popup_call2_bubble_pane_g6

0xbc17,	// (0x0001b449) bg_popup_call2_bubble_pane_g7

0xbc1f,	// (0x0001b451) bg_popup_call2_bubble_pane_g8

0xbc27,	// (0x0001b459) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001edb3) bg_popup_call2_bubble_pane_g

0x0352,	// (0x0000fb84) aid_cale_week_size_cell_pane

0x0cb7,	// (0x000104e9) aid_cams_cif_uncrop_pane_ParamLimits

0x0cb7,	// (0x000104e9) aid_cams_cif_uncrop_pane

0x0e70,	// (0x000106a2) aid_cams_size_cell_ParamLimits

0x0e70,	// (0x000106a2) aid_cams_size_cell

0x0e84,	// (0x000106b6) grid_cams_pane_ParamLimits

0x0e9e,	// (0x000106d0) linegrid_cams_pane_ParamLimits

0x107e,	// (0x000108b0) call_video_pane_t1

0x1098,	// (0x000108ca) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001eaa0) call_video_pane_t

0x14cc,	// (0x00010cfe) aid_cale_month_size_cell_pane_ParamLimits

0x14cc,	// (0x00010cfe) aid_cale_month_size_cell_pane

0xf60b,	// (0x0001ee3d) smil_status_volume_pane_g

0xbea0,	// (0x0001b6d2) volume_smil_pane_ParamLimits

0x9526,	// (0x00018d58) aid_popup2_width_pane

0x02a2,	// (0x0000fad4) cell_qdial_pane_g4_ParamLimits

0x02a2,	// (0x0000fad4) cell_qdial_pane_g4

0x2512,	// (0x00011d44) aid_blid_cardinal_pane_ParamLimits

0x251e,	// (0x00011d50) aid_blid_destination_pane_ParamLimits

0x251e,	// (0x00011d50) aid_blid_destination_pane

0x9bf1,	// (0x00019423) bg_popup_call_poc_act_pane_ParamLimits

0x9bf1,	// (0x00019423) bg_popup_call_poc_act_pane

0x9bf1,	// (0x00019423) bg_popup_call_poc_inact_pane_ParamLimits

0x9bf1,	// (0x00019423) bg_popup_call_poc_inact_pane

0xbc2f,	// (0x0001b461) bg_popup_call_poc_act_pane_g1

0xbc37,	// (0x0001b469) bg_popup_call_poc_act_pane_g2

0xbc3f,	// (0x0001b471) bg_popup_call_poc_act_pane_g3

0xbbff,	// (0x0001b431) bg_popup_call_poc_act_pane_g4

0xbc07,	// (0x0001b439) bg_popup_call_poc_act_pane_g5

0xbc47,	// (0x0001b479) bg_popup_call_poc_act_pane_g6

0xbc17,	// (0x0001b449) bg_popup_call_poc_act_pane_g7

0xbc4f,	// (0x0001b481) bg_popup_call_poc_act_pane_g8

0x9996,	// (0x000191c8) main_usb_pane

0xbdb8,	// (0x0001b5ea) popup_cale_lunar_info_window

0x1361,	// (0x00010b93) im_reading_pane_t1_ParamLimits

0xa013,	// (0x00019845) list_im_pane_ParamLimits

0xa024,	// (0x00019856) scroll_pane_cp07_ParamLimits

0x9996,	// (0x000191c8) grid_highlight_pane_cp012

0x9bf1,	// (0x00019423) mup_scale_pane_ParamLimits

0xab2a,	// (0x0001a35c) main_usb_pane_g1_ParamLimits

0xab2a,	// (0x0001a35c) main_usb_pane_g1

0x32a0,	// (0x00012ad2) main_usb_pane_g2_ParamLimits

0x32a0,	// (0x00012ad2) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0001eddd) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0001eddd) main_usb_pane_g

0x32b6,	// (0x00012ae8) main_usb_pane_t1_ParamLimits

0x32b6,	// (0x00012ae8) main_usb_pane_t1

0x32c8,	// (0x00012afa) main_usb_pane_t2_ParamLimits

0x32c8,	// (0x00012afa) main_usb_pane_t2

0x32da,	// (0x00012b0c) main_usb_pane_t3_ParamLimits

0x32da,	// (0x00012b0c) main_usb_pane_t3

0x32ec,	// (0x00012b1e) main_usb_pane_t4_ParamLimits

0x32ec,	// (0x00012b1e) main_usb_pane_t4

0x3301,	// (0x00012b33) main_usb_pane_t5_ParamLimits

0x3301,	// (0x00012b33) main_usb_pane_t5

0x3316,	// (0x00012b48) main_usb_pane_t6_ParamLimits

0x3316,	// (0x00012b48) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0001ede2) main_usb_pane_t_ParamLimits

0x24b3,	// (0x00011ce5) aid_text_placing

0x24be,	// (0x00011cf0) main_location2_pane_t1_ParamLimits

0x24d2,	// (0x00011d04) main_location2_pane_t2_ParamLimits

0x24e8,	// (0x00011d1a) main_location2_pane_t3_ParamLimits

0x24fe,	// (0x00011d30) main_location2_pane_t4_ParamLimits

0x24fe,	// (0x00011d30) main_location2_pane_t4

0xf3cf,	// (0x0001ec01) main_location2_pane_t_ParamLimits

0x9c2d,	// (0x0001945f) find_pinb_pane_g2_ParamLimits

0x9c2d,	// (0x0001945f) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001e951) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001e951) find_pinb_pane_g

0x9c39,	// (0x0001946b) find_pinb_pane_t1_ParamLimits

0x9c4b,	// (0x0001947d) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001e956) find_pinb_pane_t_ParamLimits

0x9996,	// (0x000191c8) main_call3_pane

0x1a9b,	// (0x000112cd) cale_month_day_heading_pane_t1_ParamLimits

0x1b21,	// (0x00011353) cale_month_day_heading_pane_t2_ParamLimits

0x1bb2,	// (0x000113e4) cale_month_day_heading_pane_t3_ParamLimits

0x1c43,	// (0x00011475) cale_month_day_heading_pane_t4_ParamLimits

0x1cd4,	// (0x00011506) cale_month_day_heading_pane_t5_ParamLimits

0x1d75,	// (0x000115a7) cale_month_day_heading_pane_t6_ParamLimits

0x1e1a,	// (0x0001164c) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001ead8) cale_month_day_heading_pane_t_ParamLimits

0x20f6,	// (0x00011928) smil_status_volume_pane

0x2d5d,	// (0x0001258f) postcard_address_pane_ParamLimits

0x2d5d,	// (0x0001258f) postcard_address_pane

0x2d73,	// (0x000125a5) postcard_message_pane_ParamLimits

0x2d73,	// (0x000125a5) postcard_message_pane

0x327c,	// (0x00012aae) call2_cli_visual_pane_t1_ParamLimits

0x327c,	// (0x00012aae) call2_cli_visual_pane_t1

0x3b09,	// (0x0001333b) postcard_message_pane_t1_ParamLimits

0x3b09,	// (0x0001333b) postcard_message_pane_t1

0x3af2,	// (0x00013324) postcard_address_pane_t1_ParamLimits

0x3af2,	// (0x00013324) postcard_address_pane_t1

0x3ade,	// (0x00013310) popup_call3_audio_in_window_ParamLimits

0x3ade,	// (0x00013310) popup_call3_audio_in_window

0x3963,	// (0x00013195) bg_popup_call3_in_pane_ParamLimits

0x3963,	// (0x00013195) bg_popup_call3_in_pane

0x39df,	// (0x00013211) popup_call3_audio_in_window_g1_ParamLimits

0x39df,	// (0x00013211) popup_call3_audio_in_window_g1

0x39ff,	// (0x00013231) popup_call3_audio_in_window_g2_ParamLimits

0x39ff,	// (0x00013231) popup_call3_audio_in_window_g2

0x3a1f,	// (0x00013251) popup_call3_audio_in_window_g3_ParamLimits

0x3a1f,	// (0x00013251) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0001ee44) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0001ee44) popup_call3_audio_in_window_g

0x3a50,	// (0x00013282) popup_call3_audio_in_window_t1_ParamLimits

0x3a50,	// (0x00013282) popup_call3_audio_in_window_t1

0x3a8e,	// (0x000132c0) popup_call3_audio_in_window_t2_ParamLimits

0x3a8e,	// (0x000132c0) popup_call3_audio_in_window_t2

0x3acc,	// (0x000132fe) popup_call3_audio_in_window_t3_ParamLimits

0x3acc,	// (0x000132fe) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0001ee4d) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0001ee4d) popup_call3_audio_in_window_t

0x9f04,	// (0x00019736) bg_popup_call3_rect_pane

0xbba7,	// (0x0001b3d9) bg_popup_call3_rect_pane_g1

0x9df9,	// (0x0001962b) bg_popup_call3_rect_pane_g2

0xbbaf,	// (0x0001b3e1) bg_popup_call3_rect_pane_g3

0xbbb7,	// (0x0001b3e9) bg_popup_call3_rect_pane_g4

0xbbbf,	// (0x0001b3f1) bg_popup_call3_rect_pane_g5

0xbbc7,	// (0x0001b3f9) bg_popup_call3_rect_pane_g6

0xbbcf,	// (0x0001b401) bg_popup_call3_rect_pane_g7

0x2918,	// (0x0001214a) mup_visualizer_osc_pane

0xa9b8,	// (0x0001a1ea) mup_visualizer_spec_pane

0x3993,	// (0x000131c5) call3_video_qcif_pane_ParamLimits

0x3993,	// (0x000131c5) call3_video_qcif_pane

0x39a6,	// (0x000131d8) call3_video_qcif_uncrop_pane_ParamLimits

0x39a6,	// (0x000131d8) call3_video_qcif_uncrop_pane

0x39b6,	// (0x000131e8) call3_video_subqcif_pane_ParamLimits

0x39b6,	// (0x000131e8) call3_video_subqcif_pane

0x39cc,	// (0x000131fe) call3_video_subqcif_uncrop_pane_ParamLimits

0x39cc,	// (0x000131fe) call3_video_subqcif_uncrop_pane

0x3a3f,	// (0x00013271) popup_call3_audio_in_window_g4_ParamLimits

0x3a3f,	// (0x00013271) popup_call3_audio_in_window_g4

0x3952,	// (0x00013184) mup_spec_half_pane

0x395b,	// (0x0001318d) mup_spec_half_pane_cp

0xbe53,	// (0x0001b685) mup_osc_middle_pane

0xbe5c,	// (0x0001b68e) mup_visualizer_osc_pane_g1

0x3932,	// (0x00013164) mup_spec_bar_pane_ParamLimits

0x3932,	// (0x00013164) mup_spec_bar_pane

0xbe40,	// (0x0001b672) mup_spec_bar_pane_g1

0xbe4a,	// (0x0001b67c) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001ee38) mup_spec_bar_pane_g

0x0352,	// (0x0000fb84) aid_cale_week_size_cell_pane_ParamLimits

0x036c,	// (0x0000fb9e) bg_cale_heading_pane_ParamLimits

0x0395,	// (0x0000fbc7) bg_cale_pane_cp01_ParamLimits

0x03b7,	// (0x0000fbe9) cale_week_corner_pane_ParamLimits

0x03d6,	// (0x0000fc08) cale_week_day_heading_pane_ParamLimits

0x0404,	// (0x0000fc36) cale_week_scroll_pane_g1_ParamLimits

0x0428,	// (0x0000fc5a) cale_week_scroll_pane_g2_ParamLimits

0x0440,	// (0x0000fc72) cale_week_scroll_pane_g3_ParamLimits

0x0458,	// (0x0000fc8a) cale_week_scroll_pane_g4_ParamLimits

0x0474,	// (0x0000fca6) cale_week_scroll_pane_g5_ParamLimits

0x0494,	// (0x0000fcc6) cale_week_scroll_pane_g6_ParamLimits

0x04b4,	// (0x0000fce6) cale_week_scroll_pane_g7_ParamLimits

0x04d8,	// (0x0000fd0a) cale_week_scroll_pane_g8_ParamLimits

0x04fc,	// (0x0000fd2e) cale_week_scroll_pane_g9_ParamLimits

0x0519,	// (0x0000fd4b) cale_week_scroll_pane_g10_ParamLimits

0x0536,	// (0x0000fd68) cale_week_scroll_pane_g11_ParamLimits

0x0553,	// (0x0000fd85) cale_week_scroll_pane_g12_ParamLimits

0x0570,	// (0x0000fda2) cale_week_scroll_pane_g13_ParamLimits

0x058d,	// (0x0000fdbf) cale_week_scroll_pane_g14_ParamLimits

0x05b6,	// (0x0000fde8) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001e9e2) cale_week_scroll_pane_g_ParamLimits

0x0603,	// (0x0000fe35) cale_week_time_pane_ParamLimits

0x0627,	// (0x0000fe59) grid_cale_week_pane_ParamLimits

0x9e75,	// (0x000196a7) listscroll_cale_week_pane_t1

0x9e87,	// (0x000196b9) scroll_pane_cp08_ParamLimits

0x1539,	// (0x00010d6b) cale_month_corner_pane_ParamLimits

0xa244,	// (0x00019a76) cale_month_pane_t1

0x1a21,	// (0x00011253) cale_month_week_pane_ParamLimits

0x22e1,	// (0x00011b13) popup_call_status_window_g1_ParamLimits

0x22f5,	// (0x00011b27) popup_call_status_window_g2_ParamLimits

0x2309,	// (0x00011b3b) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001eb88) popup_call_status_window_g_ParamLimits

0xa614,	// (0x00019e46) aid_call2_pane

0x2bd1,	// (0x00012403) msg_header_pane_g1

0x2d5d,	// (0x0001258f) postcard_address2_pane_ParamLimits

0x2d5d,	// (0x0001258f) postcard_address2_pane

0x2d73,	// (0x000125a5) postcard_message2_pane_ParamLimits

0x2d73,	// (0x000125a5) postcard_message2_pane

0x38e2,	// (0x00013114) message2_row_pane_ParamLimits

0x38e2,	// (0x00013114) message2_row_pane

0x38ff,	// (0x00013131) address2_row_pane_ParamLimits

0x38ff,	// (0x00013131) address2_row_pane

0xbe0e,	// (0x0001b640) postcard_message2_row_pane_g1

0xbe16,	// (0x0001b648) postcard_message2_row_pane_t1

0xbe0e,	// (0x0001b640) address2_row_pane_g1

0xbe16,	// (0x0001b648) address2_row_pane_t1

0x0b53,	// (0x00010385) aid_size_cell_vorec

0x9996,	// (0x000191c8) main_rss_pane

0x3912,	// (0x00013144) rss_list_single_pane_ParamLimits

0x3912,	// (0x00013144) rss_list_single_pane

0xbe24,	// (0x0001b656) rss_list_single_pane_t1

0xbe32,	// (0x0001b664) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0001ee33) rss_list_single_pane_t

0x9996,	// (0x000191c8) main_camera2_pane

0x9996,	// (0x000191c8) main_video2_pane

0x3b78,	// (0x000133aa) cams_zoom_pane_cp2_ParamLimits

0x3b78,	// (0x000133aa) cams_zoom_pane_cp2

0x3b8f,	// (0x000133c1) image2_vga_pane_ParamLimits

0x3b8f,	// (0x000133c1) image2_vga_pane

0x3bd7,	// (0x00013409) main_camera2_pane_g1_ParamLimits

0x3bd7,	// (0x00013409) main_camera2_pane_g1

0x3bf7,	// (0x00013429) main_camera2_pane_g2_ParamLimits

0x3bf7,	// (0x00013429) main_camera2_pane_g2

0x3c0e,	// (0x00013440) main_camera2_pane_g3_ParamLimits

0x3c0e,	// (0x00013440) main_camera2_pane_g3

0x3c25,	// (0x00013457) main_camera2_pane_g4_ParamLimits

0x3c25,	// (0x00013457) main_camera2_pane_g4

0x3c3c,	// (0x0001346e) main_camera2_pane_g5_ParamLimits

0x3c3c,	// (0x0001346e) main_camera2_pane_g5

0x3c53,	// (0x00013485) main_camera2_pane_g6_ParamLimits

0x3c53,	// (0x00013485) main_camera2_pane_g6

0x3c6a,	// (0x0001349c) main_camera2_pane_g7_ParamLimits

0x3c6a,	// (0x0001349c) main_camera2_pane_g7

0x3c81,	// (0x000134b3) main_camera2_pane_g8_ParamLimits

0x3c81,	// (0x000134b3) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0001ee54) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0001ee54) main_camera2_pane_g

0x3caf,	// (0x000134e1) main_camera2_pane_t1_ParamLimits

0x3caf,	// (0x000134e1) main_camera2_pane_t1

0x3ce4,	// (0x00013516) main_camera2_pane_t2_ParamLimits

0x3ce4,	// (0x00013516) main_camera2_pane_t2

0x3d01,	// (0x00013533) main_camera2_pane_t3_ParamLimits

0x3d01,	// (0x00013533) main_camera2_pane_t3

0x3d5f,	// (0x00013591) main_camera2_pane_t4_ParamLimits

0x3d5f,	// (0x00013591) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0001ee67) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0001ee67) main_camera2_pane_t

0x3de8,	// (0x0001361a) cams_zoom_pane_cp4_ParamLimits

0x3de8,	// (0x0001361a) cams_zoom_pane_cp4

0x3dfe,	// (0x00013630) image2_cif_pane_ParamLimits

0x3dfe,	// (0x00013630) image2_cif_pane

0x3e29,	// (0x0001365b) image2_subqcif_pane_ParamLimits

0x3e29,	// (0x0001365b) image2_subqcif_pane

0x3e44,	// (0x00013676) main_video2_pane_g1_ParamLimits

0x3e44,	// (0x00013676) main_video2_pane_g1

0x3e5e,	// (0x00013690) main_video2_pane_g2_ParamLimits

0x3e5e,	// (0x00013690) main_video2_pane_g2

0x3e74,	// (0x000136a6) main_video2_pane_g3_ParamLimits

0x3e74,	// (0x000136a6) main_video2_pane_g3

0x3e8a,	// (0x000136bc) main_video2_pane_g4_ParamLimits

0x3e8a,	// (0x000136bc) main_video2_pane_g4

0x3ea0,	// (0x000136d2) main_video2_pane_g5_ParamLimits

0x3ea0,	// (0x000136d2) main_video2_pane_g5

0x3eb6,	// (0x000136e8) main_video2_pane_g6_ParamLimits

0x3eb6,	// (0x000136e8) main_video2_pane_g6

0x0005,

0xf644,	// (0x0001ee76) main_video2_pane_g_ParamLimits

0xf644,	// (0x0001ee76) main_video2_pane_g

0x3ed0,	// (0x00013702) main_video2_pane_t1_ParamLimits

0x3ed0,	// (0x00013702) main_video2_pane_t1

0x3ef4,	// (0x00013726) main_video2_pane_t2_ParamLimits

0x3ef4,	// (0x00013726) main_video2_pane_t2

0x3f44,	// (0x00013776) main_video2_pane_t3_ParamLimits

0x3f44,	// (0x00013776) main_video2_pane_t3

0x0002,

0xf651,	// (0x0001ee83) main_video2_pane_t_ParamLimits

0xf651,	// (0x0001ee83) main_video2_pane_t

0x33d4,	// (0x00012c06) call_muted_g2

0x0001,

0xf5f3,	// (0x0001ee25) call_muted_g

0x9996,	// (0x000191c8) main_mup2_pane

0x3f8c,	// (0x000137be) main_mup2_pane_g1_ParamLimits

0x3f8c,	// (0x000137be) main_mup2_pane_g1

0x3f98,	// (0x000137ca) main_mup2_pane_g2_ParamLimits

0x3f98,	// (0x000137ca) main_mup2_pane_g2

0xbfc1,	// (0x0001b7f3) main_mup_pane_g13_cp1

0xbfc9,	// (0x0001b7fb) mup_volume_pane_cp1

0x3fb6,	// (0x000137e8) main_mup2_pane_g4_ParamLimits

0x3fb6,	// (0x000137e8) main_mup2_pane_g4

0x3fc8,	// (0x000137fa) main_mup2_pane_g5_ParamLimits

0x3fc8,	// (0x000137fa) main_mup2_pane_g5

0x3fda,	// (0x0001380c) main_mup2_pane_g6_ParamLimits

0x3fda,	// (0x0001380c) main_mup2_pane_g6

0x3fec,	// (0x0001381e) main_mup2_pane_g7_ParamLimits

0x3fec,	// (0x0001381e) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0001ee8a) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0001ee8a) main_mup2_pane_g

0x4004,	// (0x00013836) main_mup2_pane_t1_ParamLimits

0x4004,	// (0x00013836) main_mup2_pane_t1

0x401a,	// (0x0001384c) main_mup2_pane_t2_ParamLimits

0x401a,	// (0x0001384c) main_mup2_pane_t2

0x4030,	// (0x00013862) main_mup2_pane_t3_ParamLimits

0x4030,	// (0x00013862) main_mup2_pane_t3

0x4046,	// (0x00013878) main_mup2_pane_t4_ParamLimits

0x4046,	// (0x00013878) main_mup2_pane_t4

0x405e,	// (0x00013890) main_mup2_pane_t5_ParamLimits

0x405e,	// (0x00013890) main_mup2_pane_t5

0x4076,	// (0x000138a8) main_mup2_pane_t6_ParamLimits

0x4076,	// (0x000138a8) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0001ee99) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0001ee99) main_mup2_pane_t

0x40a6,	// (0x000138d8) mup2_visualizer_pane_ParamLimits

0x40a6,	// (0x000138d8) mup2_visualizer_pane

0x40d4,	// (0x00013906) mup_progress_pane_cp_ParamLimits

0x40d4,	// (0x00013906) mup_progress_pane_cp

0xbfa3,	// (0x0001b7d5) mup_volume_pane_cp_ParamLimits

0xbfa3,	// (0x0001b7d5) mup_volume_pane_cp

0x40ea,	// (0x0001391c) mup2_visualizer_pane_g1_ParamLimits

0x40ea,	// (0x0001391c) mup2_visualizer_pane_g1

0xbee2,	// (0x0001b714) mup2_visualizer_pane_g2_ParamLimits

0xbee2,	// (0x0001b714) mup2_visualizer_pane_g2

0x4101,	// (0x00013933) mup2_visualizer_pane_g3_ParamLimits

0x4101,	// (0x00013933) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0001eea6) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0001eea6) mup2_visualizer_pane_g

0xac73,	// (0x0001a4a5) aid_size_cell_fmradio

0x3584,	// (0x00012db6) aid_height_parent_landcape

0xa0a2,	// (0x000198d4) wml_content_pane_cp

0xa0aa,	// (0x000198dc) wml_tabs_pane

0xa0b3,	// (0x000198e5) popup_wml_miniature_window

0xa0bb,	// (0x000198ed) scroll_pane_cp021

0xa0cf,	// (0x00019901) wml_content_pane_comp8

0x9996,	// (0x000191c8) bg_popup_sub_pane_cp05

0xbf00,	// (0x0001b732) popup_wml_miniature_window_g1

0xbf08,	// (0x0001b73a) wml_miniature_view_pane

0x410d,	// (0x0001393f) aid_size_wml_view

0x4115,	// (0x00013947) wml_miniature_view_pane_g1

0x411e,	// (0x00013950) wml_miniature_view_pane_g2

0x4127,	// (0x00013959) wml_miniature_view_pane_g3

0x412f,	// (0x00013961) wml_miniature_view_pane_g4

0x4137,	// (0x00013969) wml_miniature_view_pane_g5

0x413f,	// (0x00013971) wml_miniature_view_pane_g6

0x4147,	// (0x00013979) wml_miniature_view_pane_g7

0x414f,	// (0x00013981) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0001eead) wml_miniature_view_pane_g

0xbf10,	// (0x0001b742) background_graphic_ParamLimits

0xbf10,	// (0x0001b742) background_graphic

0xbf1c,	// (0x0001b74e) wml_tabs_2_pane

0xbf25,	// (0x0001b757) wml_tabs_3_pane_ParamLimits

0xbf25,	// (0x0001b757) wml_tabs_3_pane

0xbf37,	// (0x0001b769) wml_tabs_4_pane_ParamLimits

0xbf37,	// (0x0001b769) wml_tabs_4_pane

0xbf4d,	// (0x0001b77f) wml_tabs_5_pane_ParamLimits

0xbf4d,	// (0x0001b77f) wml_tabs_5_pane

0xbf67,	// (0x0001b799) wml_tabs_pane_g2_ParamLimits

0xbf67,	// (0x0001b799) wml_tabs_pane_g2

0xbf7b,	// (0x0001b7ad) wml_tabs_pane_g3_ParamLimits

0xbf7b,	// (0x0001b7ad) wml_tabs_pane_g3

0x4157,	// (0x00013989) wml_tabs_2_active_pane_ParamLimits

0x4157,	// (0x00013989) wml_tabs_2_active_pane

0x416b,	// (0x0001399d) wml_tabs_2_passive_pane_ParamLimits

0x416b,	// (0x0001399d) wml_tabs_2_passive_pane

0x417f,	// (0x000139b1) wml_tabs_3_active_pane_cp_ParamLimits

0x417f,	// (0x000139b1) wml_tabs_3_active_pane_cp

0x4194,	// (0x000139c6) wml_tabs_3_passive_pane_ParamLimits

0x4194,	// (0x000139c6) wml_tabs_3_passive_pane

0x41a7,	// (0x000139d9) wml_tabs_3_passive_pane_cp_ParamLimits

0x41a7,	// (0x000139d9) wml_tabs_3_passive_pane_cp

0x41be,	// (0x000139f0) tabs_4_active_pane

0x41c6,	// (0x000139f8) tabs_4_passive_pane

0x41d0,	// (0x00013a02) tabs_4_passive_pane_cp

0x41d8,	// (0x00013a0a) tabs_4_passive_pane_cp2

0x3298,	// (0x00012aca) aid_height_text

0x28ea,	// (0x0001211c) mup_volume_cont_pane_ParamLimits

0x28ea,	// (0x0001211c) mup_volume_cont_pane

0xff2f,	// (0x0000f761) aid_size_cell_pinb

0xff39,	// (0x0000f76b) aid_size_list_pinb

0x40c0,	// (0x000138f2) mup2_volume_cont_pane_ParamLimits

0x40c0,	// (0x000138f2) mup2_volume_cont_pane

0xbf8f,	// (0x0001b7c1) mup2_volume_cont_pane_g1_ParamLimits

0xbf8f,	// (0x0001b7c1) mup2_volume_cont_pane_g1

0xfbef,	// (0x0000f421) aid_size_cell_touch_ParamLimits

0xfbef,	// (0x0000f421) aid_size_cell_touch

0xfe1f,	// (0x0000f651) touch_pane_ParamLimits

0xfe1f,	// (0x0000f651) touch_pane

0x9514,	// (0x00018d46) main_rss2_pane

0xbfd1,	// (0x0001b803) listscroll_rss2_pane

0xbfda,	// (0x0001b80c) rss2_navigation_pane

0xbfe2,	// (0x0001b814) list_rss2_pane

0xa7a7,	// (0x00019fd9) scroll_pane_cp22

0xbfea,	// (0x0001b81c) rss2_navigation_pane_g1

0xbff3,	// (0x0001b825) rss2_navigation_pane_g2

0xbffb,	// (0x0001b82d) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0001eebe) rss2_navigation_pane_g

0xc003,	// (0x0001b835) rss2_navigation_pane_t1

0x41e2,	// (0x00013a14) rss2_list_single_pane_ParamLimits

0x41e2,	// (0x00013a14) rss2_list_single_pane

0xc011,	// (0x0001b843) rss2_list_single_pane_t2

0xc01f,	// (0x0001b851) rss2_list_single_pane_t3_ParamLimits

0xc01f,	// (0x0001b851) rss2_list_single_pane_t3

0xc03c,	// (0x0001b86e) rss2_list_single_pane_t4

0x20de,	// (0x00011910) smil_status_pane_g1

0x9575,	// (0x00018da7) main_image2_pane_ParamLimits

0x9575,	// (0x00018da7) main_image2_pane

0x3c98,	// (0x000134ca) main_camera2_pane_g9_ParamLimits

0x3c98,	// (0x000134ca) main_camera2_pane_g9

0x3db4,	// (0x000135e6) main_camera2_pane_t5_ParamLimits

0x3db4,	// (0x000135e6) main_camera2_pane_t5

0xbeb7,	// (0x0001b6e9) main_camera2_pane_t6_ParamLimits

0xbeb7,	// (0x0001b6e9) main_camera2_pane_t6

0x41f8,	// (0x00013a2a) main_image2_pane_g1_ParamLimits

0x41f8,	// (0x00013a2a) main_image2_pane_g1

0x2fb2,	// (0x000127e4) smil2_video_pane_ParamLimits

0x2fb2,	// (0x000127e4) smil2_video_pane

0x9532,	// (0x00018d64) aid_zoom_text_primary_cp

0x956b,	// (0x00018d9d) popup_preview_fixed_window

0xa00b,	// (0x0001983d) im_reading_pane_g1

0x3b6a,	// (0x0001339c) cams2_bc_adjust_pane_cp_ParamLimits

0x3b6a,	// (0x0001339c) cams2_bc_adjust_pane_cp

0x3dda,	// (0x0001360c) cams2_bc_adjust_pane_ParamLimits

0x3dda,	// (0x0001360c) cams2_bc_adjust_pane

0xc04a,	// (0x0001b87c) cams2_bc_adjust_pane_g1

0xc052,	// (0x0001b884) cams2_slider_pane

0xc05b,	// (0x0001b88d) cams2_slider_pane_g1

0xc064,	// (0x0001b896) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0001eec5) cams2_slider_pane_g

0x0029,	// (0x0000f85b) calc_display_pane_ParamLimits

0x0051,	// (0x0000f883) calc_paper_pane_ParamLimits

0x0074,	// (0x0000f8a6) grid_calc_pane_ParamLimits

0xa676,	// (0x00019ea8) popup_clock_digital_window_t1_ParamLimits

0xac10,	// (0x0001a442) main_image_pane_t1

0x000b,	// (0x0000f83d) aid_size_cell_calc_ParamLimits

0x000b,	// (0x0000f83d) aid_size_cell_calc

0x35ca,	// (0x00012dfc) popup_blid_sat_info2_window_ParamLimits

0x35ca,	// (0x00012dfc) popup_blid_sat_info2_window

0xc086,	// (0x0001b8b8) aid_size_cell_blid

0xc08e,	// (0x0001b8c0) bg_popup_window_pane_cp07

0xc0b1,	// (0x0001b8e3) grid_popup_blid_pane

0xc0bb,	// (0x0001b8ed) heading_pane_cp05_ParamLimits

0xc0bb,	// (0x0001b8ed) heading_pane_cp05

0xc185,	// (0x0001b9b7) cell_popup_blid_pane_ParamLimits

0xc185,	// (0x0001b9b7) cell_popup_blid_pane

0xc1af,	// (0x0001b9e1) cell_popup_blid_pane_g1

0xc1b7,	// (0x0001b9e9) cell_popup_blid_pane_t1

0x4090,	// (0x000138c2) mup2_indicator_pane_ParamLimits

0x4090,	// (0x000138c2) mup2_indicator_pane

0x9f04,	// (0x00019736) mup2_visualizer_osc_pane

0xbeee,	// (0x0001b720) mup2_visualizer_spec_pane_ParamLimits

0xbeee,	// (0x0001b720) mup2_visualizer_spec_pane

0x420e,	// (0x00013a40) mup2_spec_half_pane

0x4217,	// (0x00013a49) mup2_spec_half_pane_cp

0x421f,	// (0x00013a51) mup2_spec_bar_pane_ParamLimits

0x421f,	// (0x00013a51) mup2_spec_bar_pane

0xbe40,	// (0x0001b672) mup2_spec_bar_pane_g1

0xbe4a,	// (0x0001b67c) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001ee38) mup2_spec_bar_pane_g

0x423f,	// (0x00013a71) mup2_osc_middle_pane

0xbe5c,	// (0x0001b68e) mup2_visualizer_osc_pane_g1

0x95a3,	// (0x00018dd5) popup_number_entry_window_t1_ParamLimits

0x95b6,	// (0x00018de8) popup_number_entry_window_t2_ParamLimits

0x95c8,	// (0x00018dfa) popup_number_entry_window_t3_ParamLimits

0xfe71,	// (0x0000f6a3) popup_number_entry_window_t5_ParamLimits

0xfe71,	// (0x0000f6a3) popup_number_entry_window_t5

0xf0ca,	// (0x0001e8fc) popup_number_entry_window_t_ParamLimits

0x95da,	// (0x00018e0c) text_title_cp2_ParamLimits

0xaaea,	// (0x0001a31c) aid_hotspot_pointer_text2_pane

0xab10,	// (0x0001a342) main_viewer_pane_g9_ParamLimits

0xab10,	// (0x0001a342) main_viewer_pane_g9

0xa244,	// (0x00019a76) cale_month_pane_t1_ParamLimits

0xa298,	// (0x00019aca) bg_cale_pane_ParamLimits

0xa2b0,	// (0x00019ae2) list_cale_pane_ParamLimits

0xa2c1,	// (0x00019af3) listscroll_cale_day_pane_t1

0xa2d3,	// (0x00019b05) scroll_pane_cp09_ParamLimits

0x2920,	// (0x00012152) main_mup_eq_pane_t1_ParamLimits

0x2920,	// (0x00012152) main_mup_eq_pane_t1

0x293c,	// (0x0001216e) main_mup_eq_pane_t2_ParamLimits

0x293c,	// (0x0001216e) main_mup_eq_pane_t2

0x2958,	// (0x0001218a) main_mup_eq_pane_t3_ParamLimits

0x2958,	// (0x0001218a) main_mup_eq_pane_t3

0x2976,	// (0x000121a8) main_mup_eq_pane_t4_ParamLimits

0x2976,	// (0x000121a8) main_mup_eq_pane_t4

0x2994,	// (0x000121c6) main_mup_eq_pane_t5_ParamLimits

0x2994,	// (0x000121c6) main_mup_eq_pane_t5

0x29b2,	// (0x000121e4) main_mup_eq_pane_t6_ParamLimits

0x29b2,	// (0x000121e4) main_mup_eq_pane_t6

0x29c8,	// (0x000121fa) main_mup_eq_pane_t7_ParamLimits

0x29c8,	// (0x000121fa) main_mup_eq_pane_t7

0x29de,	// (0x00012210) main_mup_eq_pane_t8_ParamLimits

0x29de,	// (0x00012210) main_mup_eq_pane_t8

0x29f4,	// (0x00012226) main_mup_eq_pane_t9_ParamLimits

0x29f4,	// (0x00012226) main_mup_eq_pane_t9

0x2a10,	// (0x00012242) main_mup_eq_pane_t10_ParamLimits

0x2a10,	// (0x00012242) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001ec87) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001ec87) main_mup_eq_pane_t

0x2ae5,	// (0x00012317) mup_equalizer_pane_cp5_ParamLimits

0x2afd,	// (0x0001232f) mup_equalizer_pane_cp6_ParamLimits

0x2b15,	// (0x00012347) mup_equalizer_pane_cp7_ParamLimits

0x9514,	// (0x00018d46) main_gallery_pane

0xbe65,	// (0x0001b697) smil2_volume_pane

0xbe6d,	// (0x0001b69f) smil_status_volume_pane_g1_ParamLimits

0xbe80,	// (0x0001b6b2) smil_status_volume_pane_g2_ParamLimits

0xbe93,	// (0x0001b6c5) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0001ee3d) smil_status_volume_pane_g_ParamLimits

0xc08e,	// (0x0001b8c0) bg_popup_window_pane_cp07_ParamLimits

0xc09c,	// (0x0001b8ce) blid_firmament_pane

0x4248,	// (0x00013a7a) aid_size_cell_gallery_ParamLimits

0x4248,	// (0x00013a7a) aid_size_cell_gallery

0x425e,	// (0x00013a90) grid_gallery_pane_ParamLimits

0x425e,	// (0x00013a90) grid_gallery_pane

0x4279,	// (0x00013aab) cell_gallery_pane_ParamLimits

0x4279,	// (0x00013aab) cell_gallery_pane

0xc1c5,	// (0x0001b9f7) bg_cell_gallery_focus_pane_ParamLimits

0xc1c5,	// (0x0001b9f7) bg_cell_gallery_focus_pane

0xc1d7,	// (0x0001ba09) cell_gallery_pane_g1_ParamLimits

0xc1d7,	// (0x0001ba09) cell_gallery_pane_g1

0x42c4,	// (0x00013af6) cell_gallery_pane_g2_ParamLimits

0x42c4,	// (0x00013af6) cell_gallery_pane_g2

0x42d1,	// (0x00013b03) cell_gallery_pane_g3_ParamLimits

0x42d1,	// (0x00013b03) cell_gallery_pane_g3

0xc1e3,	// (0x0001ba15) cell_gallery_pane_g4_ParamLimits

0xc1e3,	// (0x0001ba15) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0001eeeb) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0001eeeb) cell_gallery_pane_g

0xc1ef,	// (0x0001ba21) bg_cell_gallery_focus_pane_g1

0xc1f7,	// (0x0001ba29) bg_cell_gallery_focus_pane_g2

0xc1ff,	// (0x0001ba31) bg_cell_gallery_focus_pane_g3

0xc207,	// (0x0001ba39) bg_cell_gallery_focus_pane_g4

0xc20f,	// (0x0001ba41) bg_cell_gallery_focus_pane_g5

0xc217,	// (0x0001ba49) bg_cell_gallery_focus_pane_g6

0xc21f,	// (0x0001ba51) bg_cell_gallery_focus_pane_g7

0xc227,	// (0x0001ba59) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0001eef4) bg_cell_gallery_focus_pane_g

0xc22f,	// (0x0001ba61) aid_firma_cardinal

0xc243,	// (0x0001ba75) blid_firmament_pane_t1

0xc25a,	// (0x0001ba8c) blid_firmament_pane_t2

0xc271,	// (0x0001baa3) blid_firmament_pane_t3

0xc288,	// (0x0001baba) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0001ef05) blid_firmament_pane_t

0xc29f,	// (0x0001bad1) blid_sat_info_pane

0xc2af,	// (0x0001bae1) blid_sat_info_pane_g1

0xc2af,	// (0x0001bae1) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0001ef0e) blid_sat_info_pane_g

0xc2b9,	// (0x0001baeb) blid_sat_info_pane_t1

0xc2c7,	// (0x0001baf9) smil2_volume_content_pane

0xc2d0,	// (0x0001bb02) smil2_volume_pane_g1

0xc2d8,	// (0x0001bb0a) smil2_volume_content_pane_g1

0xc2e1,	// (0x0001bb13) smil2_volume_content_pane_g2

0xc2ea,	// (0x0001bb1c) smil2_volume_content_pane_g3

0xc2f3,	// (0x0001bb25) smil2_volume_content_pane_g4

0xc2fc,	// (0x0001bb2e) smil2_volume_content_pane_g5

0xc305,	// (0x0001bb37) smil2_volume_content_pane_g6

0xc30e,	// (0x0001bb40) smil2_volume_content_pane_g7

0xc317,	// (0x0001bb49) smil2_volume_content_pane_g8

0xc320,	// (0x0001bb52) smil2_volume_content_pane_g9

0xc329,	// (0x0001bb5b) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0001ef13) smil2_volume_content_pane_g

0x06ee,	// (0x0000ff20) cale_week_day_heading_pane_t1_ParamLimits

0x0738,	// (0x0000ff6a) cale_week_day_heading_pane_t2_ParamLimits

0x0787,	// (0x0000ffb9) cale_week_day_heading_pane_t3_ParamLimits

0x07d6,	// (0x00010008) cale_week_day_heading_pane_t4_ParamLimits

0x0825,	// (0x00010057) cale_week_day_heading_pane_t5_ParamLimits

0x0878,	// (0x000100aa) cale_week_day_heading_pane_t6_ParamLimits

0x08cf,	// (0x00010101) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001ea03) cale_week_day_heading_pane_t_ParamLimits

0x9ea9,	// (0x000196db) bg_cale_side_pane_ParamLimits

0x0919,	// (0x0001014b) cale_week_time_pane_t1_ParamLimits

0x0953,	// (0x00010185) cale_week_time_pane_t2_ParamLimits

0x098d,	// (0x000101bf) cale_week_time_pane_t3_ParamLimits

0x09c7,	// (0x000101f9) cale_week_time_pane_t4_ParamLimits

0x0a01,	// (0x00010233) cale_week_time_pane_t5_ParamLimits

0x0a3b,	// (0x0001026d) cale_week_time_pane_t6_ParamLimits

0x0a75,	// (0x000102a7) cale_week_time_pane_t7_ParamLimits

0x0aaf,	// (0x000102e1) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001ea12) cale_week_time_pane_t_ParamLimits

0x0aef,	// (0x00010321) cell_cale_week_pane_g2_ParamLimits

0x9ea9,	// (0x000196db) bg_cale_side_pane_cp01_ParamLimits

0x1ec3,	// (0x000116f5) cale_month_week_pane_t1_ParamLimits

0x1edc,	// (0x0001170e) cale_month_week_pane_t2_ParamLimits

0x1ef5,	// (0x00011727) cale_month_week_pane_t3_ParamLimits

0x1f0e,	// (0x00011740) cale_month_week_pane_t4_ParamLimits

0x1f27,	// (0x00011759) cale_month_week_pane_t5_ParamLimits

0x1f40,	// (0x00011772) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001eae7) cale_month_week_pane_t_ParamLimits

0xa256,	// (0x00019a88) cell_cale_month_pane_g1_ParamLimits

0x9514,	// (0x00018d46) main_cale_event_viewer_pane

0x9514,	// (0x00018d46) listscroll_cale_event_viewer_pane

0xc332,	// (0x0001bb64) list_cale_ev_pane

0xc33a,	// (0x0001bb6c) scroll_pane_cp023

0x42de,	// (0x00013b10) field_cale_ev_pane_ParamLimits

0x42de,	// (0x00013b10) field_cale_ev_pane

0xc346,	// (0x0001bb78) field_cale_ev_content_pane_ParamLimits

0xc346,	// (0x0001bb78) field_cale_ev_content_pane

0xc352,	// (0x0001bb84) field_cale_ev_pane_g1_ParamLimits

0xc352,	// (0x0001bb84) field_cale_ev_pane_g1

0xc35e,	// (0x0001bb90) field_cale_ev_pane_g2_ParamLimits

0xc35e,	// (0x0001bb90) field_cale_ev_pane_g2

0xc376,	// (0x0001bba8) field_cale_ev_pane_g3_ParamLimits

0xc376,	// (0x0001bba8) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0001ef28) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0001ef28) field_cale_ev_pane_g

0xc38e,	// (0x0001bbc0) field_cale_ev_pane_t1_ParamLimits

0xc38e,	// (0x0001bbc0) field_cale_ev_pane_t1

0x4302,	// (0x00013b34) field_cale_ev_content_pane_t1_ParamLimits

0x4302,	// (0x00013b34) field_cale_ev_content_pane_t1

0xaa6c,	// (0x0001a29e) bg_button_pane_cp01

0x0336,	// (0x0000fb68) listscroll_cale_week_pane_ParamLimits

0x0348,	// (0x0000fb7a) popup_toolbar_window_cp01

0x9e75,	// (0x000196a7) listscroll_cale_week_pane_t1_ParamLimits

0x0336,	// (0x0000fb68) listscroll_cale_day_pane_ParamLimits

0x0348,	// (0x0000fb7a) popup_toolbar_window_cp02

0xa2c1,	// (0x00019af3) listscroll_cale_day_pane_t1_ParamLimits

0x0336,	// (0x0000fb68) main_cale_month_pane_ParamLimits

0x384a,	// (0x0001307c) popup_toolbar_window_cp03_ParamLimits

0x384a,	// (0x0001307c) popup_toolbar_window_cp03

0x2e70,	// (0x000126a2) main_image_pane_g2_ParamLimits

0x2e70,	// (0x000126a2) main_image_pane_g2

0x2e81,	// (0x000126b3) main_image_pane_g3_ParamLimits

0x2e81,	// (0x000126b3) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001ed19) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001ed19) main_image_pane_g

0xac10,	// (0x0001a442) main_image_pane_t1_ParamLimits

0x2e92,	// (0x000126c4) main_image_pane_t2_ParamLimits

0x2e92,	// (0x000126c4) main_image_pane_t2

0x2ea4,	// (0x000126d6) main_image_pane_t3_ParamLimits

0x2ea4,	// (0x000126d6) main_image_pane_t3

0x2ecc,	// (0x000126fe) main_image_pane_t4_ParamLimits

0x2ecc,	// (0x000126fe) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001ed20) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001ed20) main_image_pane_t

0x2eec,	// (0x0001271e) popup_image_details_window_cp01

0x2ef6,	// (0x00012728) popup_toobar_trans_pane_cp01_ParamLimits

0x2ef6,	// (0x00012728) popup_toobar_trans_pane_cp01

0x36bd,	// (0x00012eef) popup_image_details_window_ParamLimits

0x36bd,	// (0x00012eef) popup_image_details_window

0xbdc4,	// (0x0001b5f6) popup_image_focus_window

0x3b24,	// (0x00013356) camera2_autofocus_pane_ParamLimits

0x3b24,	// (0x00013356) camera2_autofocus_pane

0x9514,	// (0x00018d46) bg_popup_sub_pane_cp06

0xc3a5,	// (0x0001bbd7) popup_image_focus_window_g1

0xc3ad,	// (0x0001bbdf) popup_image_focus_window_g2

0xc3b5,	// (0x0001bbe7) popup_image_focus_window_g3

0xc3bd,	// (0x0001bbef) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0001ef2f) popup_image_focus_window_g

0xc3c5,	// (0x0001bbf7) popup_image_focus_window_t1

0xc3d3,	// (0x0001bc05) popup_image_focus_window_t2

0xc3e3,	// (0x0001bc15) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0001ef38) popup_image_focus_window_t

0xc3f1,	// (0x0001bc23) camera2_autofocus_pane_g1

0x9575,	// (0x00018da7) bg_tb_trans_pane_cp01

0xc3ff,	// (0x0001bc31) popup_image_details_window_g1

0xc412,	// (0x0001bc44) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0001ef4a) popup_image_details_window_g

0xc43b,	// (0x0001bc6d) popup_image_details_window_t1

0xc44d,	// (0x0001bc7f) popup_image_details_window_t2

0xc466,	// (0x0001bc98) popup_image_details_window_t3

0xc47a,	// (0x0001bcac) popup_image_details_window_t4

0xc495,	// (0x0001bcc7) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0001ef51) popup_image_details_window_t

0x9caa,	// (0x000194dc) bg_calc_paper_pane_ParamLimits

0x9514,	// (0x00018d46) grid_highlight_pane_cp013

0x9cbe,	// (0x000194f0) list_calc_pane_ParamLimits

0x9cd0,	// (0x00019502) scroll_pane_cp024

0x9cd8,	// (0x0001950a) bg_calc_display_pane_ParamLimits

0x0174,	// (0x0000f9a6) calc_display_pane_t1_ParamLimits

0x0186,	// (0x0000f9b8) calc_display_pane_t2_ParamLimits

0x9ce4,	// (0x00019516) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001e983) calc_display_pane_t_ParamLimits

0x024f,	// (0x0000fa81) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001e9a0) cell_calc_pane_g

0x0258,	// (0x0000fa8a) cell_calc_pane_t1

0x9d5b,	// (0x0001958d) grid_highlight_pane_cp02_ParamLimits

0x9d71,	// (0x000195a3) toolbar_button_pane_cp01_ParamLimits

0x9d71,	// (0x000195a3) toolbar_button_pane_cp01

0xac55,	// (0x0001a487) temp_image_control_pane_ParamLimits

0xac55,	// (0x0001a487) temp_image_control_pane

0x9575,	// (0x00018da7) main_mp3_pane

0xc4af,	// (0x0001bce1) temp_image_control_pane_g1_ParamLimits

0xc4af,	// (0x0001bce1) temp_image_control_pane_g1

0xc4bd,	// (0x0001bcef) temp_image_control_pane_g2_ParamLimits

0xc4bd,	// (0x0001bcef) temp_image_control_pane_g2

0xc4cf,	// (0x0001bd01) temp_image_control_pane_g3_ParamLimits

0xc4cf,	// (0x0001bd01) temp_image_control_pane_g3

0x4353,	// (0x00013b85) temp_image_control_pane_g4_ParamLimits

0x4353,	// (0x00013b85) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0001ef5c) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0001ef5c) temp_image_control_pane_g

0xc4af,	// (0x0001bce1) main_mp3_pane_g1

0x4366,	// (0x00013b98) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0001ef65) main_mp3_pane_g

0xc512,	// (0x0001bd44) main_mp3_pane_t1

0x9f16,	// (0x00019748) main_camera_pane_g8_ParamLimits

0x9f16,	// (0x00019748) main_camera_pane_g8

0x0e16,	// (0x00010648) main_video_pane_g7_ParamLimits

0x0e16,	// (0x00010648) main_video_pane_g7

0xbed0,	// (0x0001b702) main_camera2_pane_t7_ParamLimits

0xbed0,	// (0x0001b702) main_camera2_pane_t7

0xa062,	// (0x00019894) scroll_pane_cp025_ParamLimits

0xa062,	// (0x00019894) scroll_pane_cp025

0xa076,	// (0x000198a8) scroll_pane_cp026_ParamLimits

0xa076,	// (0x000198a8) scroll_pane_cp026

0xa085,	// (0x000198b7) wml_content_pane_ParamLimits

0x9514,	// (0x00018d46) main_touch_calib_pane

0x4438,	// (0x00013c6a) main_touch_calib_pane_g1

0x444a,	// (0x00013c7c) main_touch_calib_pane_g2

0x445c,	// (0x00013c8e) main_touch_calib_pane_g3

0x446e,	// (0x00013ca0) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0001ef83) main_touch_calib_pane_g

0x4480,	// (0x00013cb2) main_touch_calib_pane_t1

0x449a,	// (0x00013ccc) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0001ef8c) main_touch_calib_pane_t

0xa822,	// (0x0001a054) mup_progress_pane_cp02

0xa841,	// (0x0001a073) navi_pane_g1

0xa8a3,	// (0x0001a0d5) navi_pane_mp_t3

0x9575,	// (0x00018da7) main_mp3_pane_ParamLimits

0x388c,	// (0x000130be) navi_pane_ParamLimits

0xc4af,	// (0x0001bce1) main_mp3_pane_g1_ParamLimits

0x4366,	// (0x00013b98) main_mp3_pane_g2_ParamLimits

0x4372,	// (0x00013ba4) main_mp3_pane_g3_ParamLimits

0x4372,	// (0x00013ba4) main_mp3_pane_g3

0x4380,	// (0x00013bb2) main_mp3_pane_g4_ParamLimits

0x4380,	// (0x00013bb2) main_mp3_pane_g4

0xc4df,	// (0x0001bd11) main_mp3_pane_g5_ParamLimits

0xc4df,	// (0x0001bd11) main_mp3_pane_g5

0xc4ed,	// (0x0001bd1f) main_mp3_pane_g6_ParamLimits

0xc4ed,	// (0x0001bd1f) main_mp3_pane_g6

0xc4fa,	// (0x0001bd2c) main_mp3_pane_g7_ParamLimits

0xc4fa,	// (0x0001bd2c) main_mp3_pane_g7

0xc506,	// (0x0001bd38) main_mp3_pane_g8_ParamLimits

0xc506,	// (0x0001bd38) main_mp3_pane_g8

0xf733,	// (0x0001ef65) main_mp3_pane_g_ParamLimits

0x438c,	// (0x00013bbe) main_mp3_pane_t2

0x439a,	// (0x00013bcc) main_mp3_pane_t3

0xc520,	// (0x0001bd52) main_mp3_pane_t4

0xc52e,	// (0x0001bd60) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0001ef76) main_mp3_pane_t

0xc53c,	// (0x0001bd6e) mup_progress_pane_cp01

0x9532,	// (0x00018d64) aid_zoom_text_secondary2

0xc332,	// (0x0001bb64) list_cale_ev2_pane

0xc33a,	// (0x0001bb6c) scroll_pane_cp023_ParamLimits

0x44f4,	// (0x00013d26) field_cale_ev2_pane_ParamLimits

0x44f4,	// (0x00013d26) field_cale_ev2_pane

0x4518,	// (0x00013d4a) field_cale_ev2_pane_g1_ParamLimits

0x4518,	// (0x00013d4a) field_cale_ev2_pane_g1

0x4524,	// (0x00013d56) field_cale_ev2_pane_g2_ParamLimits

0x4524,	// (0x00013d56) field_cale_ev2_pane_g2

0x453c,	// (0x00013d6e) field_cale_ev2_pane_g3_ParamLimits

0x453c,	// (0x00013d6e) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0001ef97) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0001ef97) field_cale_ev2_pane_g

0x4554,	// (0x00013d86) field_cale_ev2_pane_t1_ParamLimits

0x4554,	// (0x00013d86) field_cale_ev2_pane_t1

0x456b,	// (0x00013d9d) field_cale_ev2_pane_t2_ParamLimits

0x456b,	// (0x00013d9d) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0001efa0) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0001efa0) field_cale_ev2_pane_t

0x2d0d,	// (0x0001253f) main_postcard_pane_g5_ParamLimits

0x2d0d,	// (0x0001253f) main_postcard_pane_g5

0x2d23,	// (0x00012555) main_postcard_pane_g6_ParamLimits

0x2d23,	// (0x00012555) main_postcard_pane_g6

0x0bc2,	// (0x000103f4) camera2_autofocus_pane_cp_ParamLimits

0x0bc2,	// (0x000103f4) camera2_autofocus_pane_cp

0x9575,	// (0x00018da7) main_mup3_pane

0x45a0,	// (0x00013dd2) main_mup3_pane_g1_ParamLimits

0x45a0,	// (0x00013dd2) main_mup3_pane_g1

0x45c2,	// (0x00013df4) main_mup3_pane_g2_ParamLimits

0x45c2,	// (0x00013df4) main_mup3_pane_g2

0x4645,	// (0x00013e77) main_mup3_pane_g3_ParamLimits

0x4645,	// (0x00013e77) main_mup3_pane_g3

0x468d,	// (0x00013ebf) main_mup3_pane_g4_ParamLimits

0x468d,	// (0x00013ebf) main_mup3_pane_g4

0x46d3,	// (0x00013f05) main_mup3_pane_g5_ParamLimits

0x46d3,	// (0x00013f05) main_mup3_pane_g5

0x471b,	// (0x00013f4d) main_mup3_pane_g6_ParamLimits

0x471b,	// (0x00013f4d) main_mup3_pane_g6

0xc550,	// (0x0001bd82) main_mup3_pane_g7_ParamLimits

0xc550,	// (0x0001bd82) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0001efb0) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0001efb0) main_mup3_pane_g

0x479b,	// (0x00013fcd) main_mup3_pane_t1_ParamLimits

0x479b,	// (0x00013fcd) main_mup3_pane_t1

0x4809,	// (0x0001403b) main_mup3_pane_t2_ParamLimits

0x4809,	// (0x0001403b) main_mup3_pane_t2

0x48df,	// (0x00014111) main_mup3_pane_t4_ParamLimits

0x48df,	// (0x00014111) main_mup3_pane_t4

0x493d,	// (0x0001416f) main_mup3_pane_t5_ParamLimits

0x493d,	// (0x0001416f) main_mup3_pane_t5

0x49f7,	// (0x00014229) main_mup3_pane_t6_ParamLimits

0x49f7,	// (0x00014229) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0001efc1) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0001efc1) main_mup3_pane_t

0x4aaf,	// (0x000142e1) mup3_progress_pane_ParamLimits

0x4aaf,	// (0x000142e1) mup3_progress_pane

0x4b41,	// (0x00014373) popup_mup3_control_window_ParamLimits

0x4b41,	// (0x00014373) popup_mup3_control_window

0xc55e,	// (0x0001bd90) popup_mup3_text_window

0x4b77,	// (0x000143a9) mup3_progress_pane_t1

0x4b95,	// (0x000143c7) mup3_progress_pane_t2

0xc566,	// (0x0001bd98) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0001efce) mup3_progress_pane_t

0xc583,	// (0x0001bdb5) mup_progress_pane_cp03

0x9514,	// (0x00018d46) bg_tb_trans_pane_cp04

0x4bb3,	// (0x000143e5) mup3_volume_pane

0x4bbb,	// (0x000143ed) popup_mup3_control_window_g1

0x4bc4,	// (0x000143f6) mup3_volume_pane_g1

0x4bcd,	// (0x000143ff) mup3_volume_pane_g2

0x4bd6,	// (0x00014408) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0001efd5) mup3_volume_pane_g

0x9514,	// (0x00018d46) bg_tb_trans_pane_cp03

0xc593,	// (0x0001bdc5) popup_mup3_text_window_g1

0xc59b,	// (0x0001bdcd) popup_mup3_text_window_t1

0x9d32,	// (0x00019564) list_calc_item_pane_g1_ParamLimits

0xbfb8,	// (0x0001b7ea) mup_volume_pane_cp_g1

0x44b4,	// (0x00013ce6) main_touch_calib_pane_t3

0x44c8,	// (0x00013cfa) main_touch_calib_pane_t4

0x44de,	// (0x00013d10) main_touch_calib_pane_t5

0x951e,	// (0x00018d50) aid_cell_size_toolbar2

0x9526,	// (0x00018d58) aid_popup3_width_pane

0x9532,	// (0x00018d64) aid_zoom_text_msg_primary

0x0b9f,	// (0x000103d1) vorec_t7

0x9cf6,	// (0x00019528) bg_calc_paper_pane_g1_ParamLimits

0x9d02,	// (0x00019534) bg_calc_paper_pane_g2_ParamLimits

0x9d0e,	// (0x00019540) bg_calc_paper_pane_g3_ParamLimits

0x9d1a,	// (0x0001954c) bg_calc_paper_pane_g4_ParamLimits

0x9d26,	// (0x00019558) bg_calc_paper_pane_g5_ParamLimits

0x01d5,	// (0x0000fa07) bg_calc_paper_pane_g6_ParamLimits

0x01e8,	// (0x0000fa1a) bg_calc_paper_pane_g7_ParamLimits

0x01fb,	// (0x0000fa2d) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001e98a) bg_calc_paper_pane_g_ParamLimits

0x020c,	// (0x0000fa3e) calc_bg_paper_pane_g9_ParamLimits

0x0d24,	// (0x00010556) image_qvga_pane_ParamLimits

0x0d24,	// (0x00010556) image_qvga_pane

0x9bf1,	// (0x00019423) bg_popup_sub_pane_cp04_ParamLimits

0xab8c,	// (0x0001a3be) popup_mup_playback_window_g1_ParamLimits

0xab98,	// (0x0001a3ca) popup_mup_playback_window_t1_ParamLimits

0xabad,	// (0x0001a3df) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001ed14) popup_mup_playback_window_t_ParamLimits

0x3fa8,	// (0x000137da) main_mup2_pane_g3_ParamLimits

0x3fa8,	// (0x000137da) main_mup2_pane_g3

0x1117,	// (0x00010949) popup_toolbar_window_cp04

0xafa8,	// (0x0001a7da) popup_call2_audio_second_window_g3_ParamLimits

0xafa8,	// (0x0001a7da) popup_call2_audio_second_window_g3

0xb3b2,	// (0x0001abe4) popup_call2_audio_first_window_g4_ParamLimits

0xb3b2,	// (0x0001abe4) popup_call2_audio_first_window_g4

0xba31,	// (0x0001b263) popup_call2_audio_in_window_g4_ParamLimits

0xba31,	// (0x0001b263) popup_call2_audio_in_window_g4

0x2e52,	// (0x00012684) aid_area_sk_bg_cut_ParamLimits

0x2e52,	// (0x00012684) aid_area_sk_bg_cut

0xabc2,	// (0x0001a3f4) aid_area_sk_bg_cut_2_ParamLimits

0xabc2,	// (0x0001a3f4) aid_area_sk_bg_cut_2

0x42b4,	// (0x00013ae6) aid_placing_details_win

0x42bc,	// (0x00013aee) aid_placing_details_win_2

0xc3f1,	// (0x0001bc23) camera2_autofocus_pane_g1_ParamLimits

0xfdb8,	// (0x0000f5ea) popup_fixed_preview_cale_window_ParamLimits

0xfdb8,	// (0x0000f5ea) popup_fixed_preview_cale_window

0xa8f3,	// (0x0001a125) navi_slider_pane_g3

0xa8fc,	// (0x0001a12e) navi_slider_pane_g4

0xa905,	// (0x0001a137) navi_slider_pane_g5

0xa8f3,	// (0x0001a125) navi_slider_pane_g6

0xa90e,	// (0x0001a140) navi_slider_pane_g7

0xaa31,	// (0x0001a263) mup_scale_pane_g3

0xaa3a,	// (0x0001a26c) mup_scale_pane_g4

0xaa43,	// (0x0001a275) mup_scale_pane_g5

0x2b2d,	// (0x0001235f) mup_scale_pane_g6

0x2b36,	// (0x00012368) mup_scale_pane_g7

0xa8f3,	// (0x0001a125) cams2_slider_pane_g3

0xc06d,	// (0x0001b89f) cams2_slider_pane_g4

0xc075,	// (0x0001b8a7) cams2_slider_pane_g5

0xa8f3,	// (0x0001a125) cams2_slider_pane_g6

0xc07d,	// (0x0001b8af) cams2_slider_pane_g7

0xc2af,	// (0x0001bae1) camera2_autofocus_pane_cp_g1

0xbd96,	// (0x0001b5c8) bg_popup_preview_window_pane_cp02_ParamLimits

0xbd96,	// (0x0001b5c8) bg_popup_preview_window_pane_cp02

0xc5a9,	// (0x0001bddb) list_fp_cale_pane_ParamLimits

0xc5a9,	// (0x0001bddb) list_fp_cale_pane

0xc5b5,	// (0x0001bde7) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5b5,	// (0x0001bde7) popup_fixed_preview_cale_window_t1

0x4bdf,	// (0x00014411) popup_fixed_preview_cale_window_t2_ParamLimits

0x4bdf,	// (0x00014411) popup_fixed_preview_cale_window_t2

0x4bf4,	// (0x00014426) popup_fixed_preview_cale_window_t3_ParamLimits

0x4bf4,	// (0x00014426) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0001efdc) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0001efdc) popup_fixed_preview_cale_window_t

0x4c09,	// (0x0001443b) list_single_fp_cale_pane_ParamLimits

0x4c09,	// (0x0001443b) list_single_fp_cale_pane

0xc5d3,	// (0x0001be05) list_single_fp_cale_pane_g1_ParamLimits

0xc5d3,	// (0x0001be05) list_single_fp_cale_pane_g1

0xc5df,	// (0x0001be11) list_single_fp_cale_pane_g2_ParamLimits

0xc5df,	// (0x0001be11) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0001efe3) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0001efe3) list_single_fp_cale_pane_g

0xc5f8,	// (0x0001be2a) list_single_fp_cale_pane_t1_ParamLimits

0xc5f8,	// (0x0001be2a) list_single_fp_cale_pane_t1

0xc60a,	// (0x0001be3c) list_single_fp_cale_pane_t2_ParamLimits

0xc60a,	// (0x0001be3c) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0001efea) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0001efea) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9514,	// (0x00018d46) main_dialer_pane

0x4c1e,	// (0x00014450) aid_cell_size_keypad

0x4c28,	// (0x0001445a) dialer_ne_pane

0x4c32,	// (0x00014464) grid_dialer_command_1_pane

0x4c3a,	// (0x0001446c) grid_dialer_command_2_pane

0x4c42,	// (0x00014474) grid_dialer_keypad_pane

0x4c54,	// (0x00014486) bg_popup_call_pane_cp06_ParamLimits

0x4c54,	// (0x00014486) bg_popup_call_pane_cp06

0x4c60,	// (0x00014492) dialer_ne_clear_pane_ParamLimits

0x4c60,	// (0x00014492) dialer_ne_clear_pane

0xc63d,	// (0x0001be6f) dialer_ne_pane_g1

0xc645,	// (0x0001be77) dialer_ne_pane_t1_ParamLimits

0xc645,	// (0x0001be77) dialer_ne_pane_t1

0x4c6c,	// (0x0001449e) dialer_ne_pane_t2_ParamLimits

0x4c6c,	// (0x0001449e) dialer_ne_pane_t2

0x4c96,	// (0x000144c8) dialer_ne_pane_t3_ParamLimits

0x4c96,	// (0x000144c8) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0001efef) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0001efef) dialer_ne_pane_t

0x4cc6,	// (0x000144f8) dialer_ne_pane_t3_copy1_ParamLimits

0x4cc6,	// (0x000144f8) dialer_ne_pane_t3_copy1

0x4cf5,	// (0x00014527) cell_dialer_keypad_pane_ParamLimits

0x4cf5,	// (0x00014527) cell_dialer_keypad_pane

0x4d0c,	// (0x0001453e) cell_dialer_command_1_pane_ParamLimits

0x4d0c,	// (0x0001453e) cell_dialer_command_1_pane

0x4d22,	// (0x00014554) cell_dialer_command_2_pane_ParamLimits

0x4d22,	// (0x00014554) cell_dialer_command_2_pane

0xc657,	// (0x0001be89) bg_button_pane_cp02_ParamLimits

0xc657,	// (0x0001be89) bg_button_pane_cp02

0x4d31,	// (0x00014563) cell_dialer_keypad_pane_g1_ParamLimits

0x4d31,	// (0x00014563) cell_dialer_keypad_pane_g1

0xc657,	// (0x0001be89) bg_button_pane_cp03_ParamLimits

0xc657,	// (0x0001be89) bg_button_pane_cp03

0x4d46,	// (0x00014578) cell_dialer_command_1_pane_g1_ParamLimits

0x4d46,	// (0x00014578) cell_dialer_command_1_pane_g1

0xc663,	// (0x0001be95) bg_button_pane_cp04

0x4d5a,	// (0x0001458c) cell_dialer_command_2_pane_g1

0x9f04,	// (0x00019736) bg_button_pane_cp06

0xc66b,	// (0x0001be9d) dialer_ne_clear_pane_g1

0x25ff,	// (0x00011e31) navi_pane_g2

0x262d,	// (0x00011e5f) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001ec17) navi_pane_g

0x2658,	// (0x00011e8a) navi_pane_mv_g2

0x267f,	// (0x00011eb1) navi_pane_mv_g5

0x2687,	// (0x00011eb9) navi_pane_mv_t1

0x9cd8,	// (0x0001950a) main_clock2_pane

0x4da5,	// (0x000145d7) main_clock2_list_pane_ParamLimits

0x4da5,	// (0x000145d7) main_clock2_list_pane

0x4ddd,	// (0x0001460f) main_clock2_pane_t1_ParamLimits

0x4ddd,	// (0x0001460f) main_clock2_pane_t1

0x4e19,	// (0x0001464b) main_clock2_pane_t2_ParamLimits

0x4e19,	// (0x0001464b) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001effb) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001effb) main_clock2_pane_t

0x4eb9,	// (0x000146eb) popup_clock_analogue_window_cp03_ParamLimits

0x4eb9,	// (0x000146eb) popup_clock_analogue_window_cp03

0x4ee0,	// (0x00014712) popup_clock_digital_window_cp02_ParamLimits

0x4ee0,	// (0x00014712) popup_clock_digital_window_cp02

0x4f59,	// (0x0001478b) main_clock2_list_single_pane_ParamLimits

0x4f59,	// (0x0001478b) main_clock2_list_single_pane

0x9f04,	// (0x00019736) list_highlight_pane_cp05

0xc6a7,	// (0x0001bed9) main_clock2_list_single_pane_t1

0x1117,	// (0x00010949) popup_toolbar_window_cp04_ParamLimits

0x4323,	// (0x00013b55) camera2_autofocus_pane_g2_ParamLimits

0x4323,	// (0x00013b55) camera2_autofocus_pane_g2

0x432f,	// (0x00013b61) camera2_autofocus_pane_g3_ParamLimits

0x432f,	// (0x00013b61) camera2_autofocus_pane_g3

0x433b,	// (0x00013b6d) camera2_autofocus_pane_g4_ParamLimits

0x433b,	// (0x00013b6d) camera2_autofocus_pane_g4

0x4347,	// (0x00013b79) camera2_autofocus_pane_g5_ParamLimits

0x4347,	// (0x00013b79) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0001ef3f) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0001ef3f) camera2_autofocus_pane_g

0x4580,	// (0x00013db2) camera2_autofocus_pane_cp_g2

0x4588,	// (0x00013dba) camera2_autofocus_pane_cp_g3

0x4590,	// (0x00013dc2) camera2_autofocus_pane_cp_g4

0x4598,	// (0x00013dca) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0001efa5) camera2_autofocus_pane_cp_g

0x4c4c,	// (0x0001447e) popup_dialer_spcha_window

0x9514,	// (0x00018d46) bg_popup_sub_pane_cp07

0xc6b5,	// (0x0001bee7) list_spcha_pane

0xc6bd,	// (0x0001beef) list_single_spcha_pane_ParamLimits

0xc6bd,	// (0x0001beef) list_single_spcha_pane

0x9514,	// (0x00018d46) list_highlight_pane_cp06

0xc6ce,	// (0x0001bf00) list_single_spcha_pane_t1

0xb7db,	// (0x0001b00d) popup_call2_audio_out_window_g4_ParamLimits

0xb7db,	// (0x0001b00d) popup_call2_audio_out_window_g4

0x9514,	// (0x00018d46) main_imed2_pane

0xbdce,	// (0x0001b600) popup_imed_adjust2_window

0x36d5,	// (0x00012f07) popup_imed_trans_window_ParamLimits

0x36d5,	// (0x00012f07) popup_imed_trans_window

0xc0e7,	// (0x0001b919) popup_blid_sat_info2_window_t1

0xc0f5,	// (0x0001b927) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0001eed4) popup_blid_sat_info2_window_t

0x500f,	// (0x00014841) aid_size_cell_colour_35

0x502f,	// (0x00014861) aid_size_cell_colour_112

0x504f,	// (0x00014881) aid_size_cell_effect

0xbda2,	// (0x0001b5d4) bg_tb_trans_pane_cp02

0xa3d2,	// (0x00019c04) heading_imed_pane

0x506f,	// (0x000148a1) listscroll_imed_pane

0xc6dc,	// (0x0001bf0e) heading_imed_pane_g1

0xc6e4,	// (0x0001bf16) heading_imed_pane_t1

0xc6f2,	// (0x0001bf24) grid_imed_colour_35_pane_ParamLimits

0xc6f2,	// (0x0001bf24) grid_imed_colour_35_pane

0x507b,	// (0x000148ad) grid_imed_effect_pane

0xc70e,	// (0x0001bf40) list_imed_aspect_pane

0x5090,	// (0x000148c2) scroll_pane_cp027_ParamLimits

0x5090,	// (0x000148c2) scroll_pane_cp027

0x50a1,	// (0x000148d3) cell_imed_effect_pane_ParamLimits

0x50a1,	// (0x000148d3) cell_imed_effect_pane

0xc716,	// (0x0001bf48) cell_imed_colour_pane_ParamLimits

0xc716,	// (0x0001bf48) cell_imed_colour_pane

0xc760,	// (0x0001bf92) cell_imed_colour_pane_g1_ParamLimits

0xc760,	// (0x0001bf92) cell_imed_colour_pane_g1

0xc771,	// (0x0001bfa3) hgihlgiht_grid_pane_cp016_ParamLimits

0xc771,	// (0x0001bfa3) hgihlgiht_grid_pane_cp016

0x50cc,	// (0x000148fe) cell_imed_effect_pane_g1

0x50d4,	// (0x00014906) grid_highlight_pane_cp017

0xc782,	// (0x0001bfb4) list_imed_single_pane_ParamLimits

0xc782,	// (0x0001bfb4) list_imed_single_pane

0x9514,	// (0x00018d46) list_highlight_pane_cp07

0xc796,	// (0x0001bfc8) list_imed_aspect_pane_comp1_t1

0xbda2,	// (0x0001b5d4) bg_tb_trans_pane_cp05

0xc7b8,	// (0x0001bfea) popup_imed_adjust2_window_g1

0xc7df,	// (0x0001c011) popup_imed_adjust2_window_t1

0xc7f7,	// (0x0001c029) slider_imed_adjust_pane

0xc80b,	// (0x0001c03d) slider_imed_adjust_pane_g1

0xc81b,	// (0x0001c04d) slider_imed_adjust_pane_g2

0xc82b,	// (0x0001c05d) slider_imed_adjust_pane_g3

0xc83c,	// (0x0001c06e) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001f018) slider_imed_adjust_pane_g

0x50dd,	// (0x0001490f) aid_size_cell_clipart2

0x50e9,	// (0x0001491b) grid_imed_clipart_pane

0xc84d,	// (0x0001c07f) scroll_pane_cp031

0x50f3,	// (0x00014925) cell_imed_clipart_pane_ParamLimits

0x50f3,	// (0x00014925) cell_imed_clipart_pane

0x5110,	// (0x00014942) cell_imed_clipart_pane_g1

0x9514,	// (0x00018d46) grid_highlight_pane_cp014

0x4dba,	// (0x000145ec) main_clock2_pane_g1_ParamLimits

0x4dba,	// (0x000145ec) main_clock2_pane_g1

0x4f00,	// (0x00014732) aid_call2_pane_cp10

0x4f12,	// (0x00014744) aid_call_pane_cp10

0xa816,	// (0x0001a048) popup_clock_analogue_window_cp10_g1

0xa816,	// (0x0001a048) popup_clock_analogue_window_cp10_g2

0x4f24,	// (0x00014756) popup_clock_analogue_window_cp10_g3

0x4f24,	// (0x00014756) popup_clock_analogue_window_cp10_g4

0xa816,	// (0x0001a048) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001f006) popup_clock_analogue_window_cp10_g

0x4f3a,	// (0x0001476c) popup_clock_analogue_window_cp10_t1

0x4f6b,	// (0x0001479d) clock_digital_number_pane_cp10_ParamLimits

0x4f6b,	// (0x0001479d) clock_digital_number_pane_cp10

0x4f85,	// (0x000147b7) clock_digital_number_pane_cp11_ParamLimits

0x4f85,	// (0x000147b7) clock_digital_number_pane_cp11

0x4f9f,	// (0x000147d1) clock_digital_number_pane_cp12_ParamLimits

0x4f9f,	// (0x000147d1) clock_digital_number_pane_cp12

0x4fb9,	// (0x000147eb) clock_digital_number_pane_cp13_ParamLimits

0x4fb9,	// (0x000147eb) clock_digital_number_pane_cp13

0x4fd3,	// (0x00014805) clock_digital_separator_pane_cp10_ParamLimits

0x4fd3,	// (0x00014805) clock_digital_separator_pane_cp10

0x4fed,	// (0x0001481f) popup_clock_digital_window_cp02_t1_ParamLimits

0x4fed,	// (0x0001481f) popup_clock_digital_window_cp02_t1

0x9be9,	// (0x0001941b) clock_digital_number_pane_cp10_g1

0x9be9,	// (0x0001941b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001f021) clock_digital_number_pane_cp10_g

0x9be9,	// (0x0001941b) clock_digital_separator_pane_cp10_g1

0x9be9,	// (0x0001941b) clock_digital_separator_pane_g2_cp10

0xa8b1,	// (0x0001a0e3) navi_pane_vded_g4

0xa8ba,	// (0x0001a0ec) navi_pane_vded_g5

0xa8c3,	// (0x0001a0f5) navi_pane_vded_t1

0x9514,	// (0x00018d46) main_vded_pane

0x5119,	// (0x0001494b) main_vded_pane_g1

0x5125,	// (0x00014957) main_vded_pane_g2

0x5131,	// (0x00014963) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001f026) main_vded_pane_g

0x513d,	// (0x0001496f) main_vded_pane_t1

0x514b,	// (0x0001497d) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001f02d) main_vded_pane_t

0x5159,	// (0x0001498b) vded_slider_pane

0x5163,	// (0x00014995) vded_video_pane

0xc855,	// (0x0001c087) vded_video_pane_g1

0x516d,	// (0x0001499f) vded_video_pane_g2

0xc2af,	// (0x0001bae1) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001f032) vded_video_pane_g

0xc85f,	// (0x0001c091) vded_slider_pane_g1

0xbfb8,	// (0x0001b7ea) vded_slider_pane_g2

0xc868,	// (0x0001c09a) vded_slider_pane_g3

0xc871,	// (0x0001c0a3) vded_slider_pane_g4

0xc87a,	// (0x0001c0ac) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001f039) vded_slider_pane_g

0x4b2b,	// (0x0001435d) mup3_rocker_pane_ParamLimits

0x4b2b,	// (0x0001435d) mup3_rocker_pane

0x5176,	// (0x000149a8) mup3_control_keys_pane_g1

0x517e,	// (0x000149b0) mup3_control_keys_pane_g2

0x5186,	// (0x000149b8) mup3_control_keys_pane_g3

0x518e,	// (0x000149c0) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001f044) mup3_control_keys_pane_g

0xfdef,	// (0x0000f621) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfdef,	// (0x0000f621) popup_toolbar2_fixed_window_cp01

0x4b61,	// (0x00014393) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b61,	// (0x00014393) popup_toolbar2_fixed_window_cp02

0xb11a,	// (0x0001a94c) popup_call2_audio_second_window_t4_ParamLimits

0xb11a,	// (0x0001a94c) popup_call2_audio_second_window_t4

0xb648,	// (0x0001ae7a) popup_call2_audio_first_window_t6_ParamLimits

0xb648,	// (0x0001ae7a) popup_call2_audio_first_window_t6

0xb8de,	// (0x0001b110) popup_call2_audio_out_window_t6_ParamLimits

0xb8de,	// (0x0001b110) popup_call2_audio_out_window_t6

0x9514,	// (0x00018d46) main_vitu_pane

0x519e,	// (0x000149d0) aid_size_cell_itu_ParamLimits

0x519e,	// (0x000149d0) aid_size_cell_itu

0x9575,	// (0x00018da7) bg_popup_window_pane_cp08_ParamLimits

0x9575,	// (0x00018da7) bg_popup_window_pane_cp08

0x51b4,	// (0x000149e6) field_vitu_entry_pane_ParamLimits

0x51b4,	// (0x000149e6) field_vitu_entry_pane

0x51cb,	// (0x000149fd) grid_vitu_function_pane_ParamLimits

0x51cb,	// (0x000149fd) grid_vitu_function_pane

0x51e6,	// (0x00014a18) grid_vitu_itu_pane_ParamLimits

0x51e6,	// (0x00014a18) grid_vitu_itu_pane

0x5204,	// (0x00014a36) cell_vitu_itu_pane_ParamLimits

0x5204,	// (0x00014a36) cell_vitu_itu_pane

0x522a,	// (0x00014a5c) cell_vitu_function_pane_ParamLimits

0x522a,	// (0x00014a5c) cell_vitu_function_pane

0x9575,	// (0x00018da7) bg_popup_sub_pane_cp08_ParamLimits

0x9575,	// (0x00018da7) bg_popup_sub_pane_cp08

0x5245,	// (0x00014a77) field_vitu_entry_pane_t1_ParamLimits

0x5245,	// (0x00014a77) field_vitu_entry_pane_t1

0xc89b,	// (0x0001c0cd) field_vitu_entry_pane_t2_ParamLimits

0xc89b,	// (0x0001c0cd) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001f052) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001f052) field_vitu_entry_pane_t

0xc8b8,	// (0x0001c0ea) bg_button_pane_cp05_ParamLimits

0xc8b8,	// (0x0001c0ea) bg_button_pane_cp05

0x5265,	// (0x00014a97) cell_vitu_itu_pane_g1

0x527d,	// (0x00014aaf) cell_vitu_itu_pane_t1_ParamLimits

0x527d,	// (0x00014aaf) cell_vitu_itu_pane_t1

0x528f,	// (0x00014ac1) cell_vitu_itu_pane_t2_ParamLimits

0x528f,	// (0x00014ac1) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001f057) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001f057) cell_vitu_itu_pane_t

0xc8c6,	// (0x0001c0f8) bg_button_pane_cp07

0x52c4,	// (0x00014af6) cell_vitu_function_pane_g1

0x9c78,	// (0x000194aa) main_calc_pane_g1

0xfc13,	// (0x0000f445) aid_visual_content_pane

0x9514,	// (0x00018d46) main_vradio_pane

0x52cd,	// (0x00014aff) main_vradio_pane_g1_ParamLimits

0x52cd,	// (0x00014aff) main_vradio_pane_g1

0xc8d0,	// (0x0001c102) main_vradio_pane_g2_ParamLimits

0xc8d0,	// (0x0001c102) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001f05e) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001f05e) main_vradio_pane_g

0x52e4,	// (0x00014b16) main_vradio_pane_t1_ParamLimits

0x52e4,	// (0x00014b16) main_vradio_pane_t1

0x52f9,	// (0x00014b2b) main_vradio_pane_t2_ParamLimits

0x52f9,	// (0x00014b2b) main_vradio_pane_t2

0xc8dd,	// (0x0001c10f) main_vradio_pane_t3_ParamLimits

0xc8dd,	// (0x0001c10f) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001f063) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001f063) main_vradio_pane_t

0x530e,	// (0x00014b40) vradio_rocker_control_pane_ParamLimits

0x530e,	// (0x00014b40) vradio_rocker_control_pane

0x5320,	// (0x00014b52) vradio_station_info_pane_ParamLimits

0x5320,	// (0x00014b52) vradio_station_info_pane

0xc8f1,	// (0x0001c123) vradio_frequency_info_pane_ParamLimits

0xc8f1,	// (0x0001c123) vradio_frequency_info_pane

0xc2af,	// (0x0001bae1) vradio_station_info_pane_g1

0xc900,	// (0x0001c132) vradio_station_info_pane_t1_ParamLimits

0xc900,	// (0x0001c132) vradio_station_info_pane_t1

0xc922,	// (0x0001c154) vradio_station_info_pane_t2_ParamLimits

0xc922,	// (0x0001c154) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001f06a) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001f06a) vradio_station_info_pane_t

0xc934,	// (0x0001c166) vradio_tuning_pane

0xc93c,	// (0x0001c16e) vradio_rocker_control_pane_g1

0xc944,	// (0x0001c176) vradio_rocker_control_pane_g2

0xc94c,	// (0x0001c17e) vradio_rocker_control_pane_g3

0xc954,	// (0x0001c186) vradio_rocker_control_pane_g4

0xc95c,	// (0x0001c18e) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001f06f) vradio_rocker_control_pane_g

0x5330,	// (0x00014b62) vradio_frequency_info_pane_g1

0xc964,	// (0x0001c196) vradio_frequency_info_pane_t1_ParamLimits

0xc964,	// (0x0001c196) vradio_frequency_info_pane_t1

0x533a,	// (0x00014b6c) vradio_tuning_pane_g1

0x5345,	// (0x00014b77) vradio_tuning_pane_t1

0x9542,	// (0x00018d74) area_side_right_pane_ParamLimits

0x9542,	// (0x00018d74) area_side_right_pane

0xbd5d,	// (0x0001b58f) status_small_pane_g1

0xbd65,	// (0x0001b597) status_small_pane_g2

0xbd6e,	// (0x0001b5a0) status_small_pane_g3

0xbd77,	// (0x0001b5a9) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0001ee2a) status_small_pane_g

0xbd80,	// (0x0001b5b2) status_small_pane_t1

0x9514,	// (0x00018d46) main_video3_pane

0xc978,	// (0x0001c1aa) cams_zoom_vslider_pane

0xc980,	// (0x0001c1b2) image3_wide_pane_ParamLimits

0xc980,	// (0x0001c1b2) image3_wide_pane

0xc99a,	// (0x0001c1cc) image3_wide_small_pane

0xc9a6,	// (0x0001c1d8) main_video3_pane_g1_ParamLimits

0xc9a6,	// (0x0001c1d8) main_video3_pane_g1

0xc9c2,	// (0x0001c1f4) main_video3_pane_g2_ParamLimits

0xc9c2,	// (0x0001c1f4) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001f07a) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001f07a) main_video3_pane_g

0xc9de,	// (0x0001c210) main_video3_pane_t1_ParamLimits

0xc9de,	// (0x0001c210) main_video3_pane_t1

0xca09,	// (0x0001c23b) main_video3_pane_t2_ParamLimits

0xca09,	// (0x0001c23b) main_video3_pane_t2

0xca36,	// (0x0001c268) main_video3_pane_t3_ParamLimits

0xca36,	// (0x0001c268) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001f07f) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001f07f) main_video3_pane_t

0xca63,	// (0x0001c295) cams_zoom_vslider_pane_g1

0xca6c,	// (0x0001c29e) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001f086) cams_zoom_vslider_pane_g

0xca74,	// (0x0001c2a6) small_slider_vertical_pane

0xc2af,	// (0x0001bae1) small_slider_vertical_pane_g1

0xc2af,	// (0x0001bae1) small_slider_vertical_pane_g2

0xca7c,	// (0x0001c2ae) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001f08b) small_slider_vertical_pane_g

0x9514,	// (0x00018d46) main_hwr_training_pane

0xca85,	// (0x0001c2b7) hwr_training_instruct_pane_ParamLimits

0xca85,	// (0x0001c2b7) hwr_training_instruct_pane

0x5354,	// (0x00014b86) hwr_training_navi_pane_ParamLimits

0x5354,	// (0x00014b86) hwr_training_navi_pane

0x5373,	// (0x00014ba5) hwr_training_write_pane_ParamLimits

0x5373,	// (0x00014ba5) hwr_training_write_pane

0x9514,	// (0x00018d46) bg_frame_shadow_pane

0xcabc,	// (0x0001c2ee) hwr_training_write_pane_g1

0xcac4,	// (0x0001c2f6) hwr_training_write_pane_g2

0xcacc,	// (0x0001c2fe) hwr_training_write_pane_g3

0xcad4,	// (0x0001c306) hwr_training_write_pane_g4

0xcadc,	// (0x0001c30e) hwr_training_write_pane_g5

0xcae4,	// (0x0001c316) hwr_training_write_pane_g6

0xcaec,	// (0x0001c31e) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001f092) hwr_training_write_pane_g

0xcaf4,	// (0x0001c326) hwr_training_navi_pane_g1_ParamLimits

0xcaf4,	// (0x0001c326) hwr_training_navi_pane_g1

0xcb06,	// (0x0001c338) hwr_training_navi_pane_g2_ParamLimits

0xcb06,	// (0x0001c338) hwr_training_navi_pane_g2

0xcb18,	// (0x0001c34a) hwr_training_navi_pane_g3_ParamLimits

0xcb18,	// (0x0001c34a) hwr_training_navi_pane_g3

0xcb28,	// (0x0001c35a) hwr_training_navi_pane_g4_ParamLimits

0xcb28,	// (0x0001c35a) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001f0a1) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001f0a1) hwr_training_navi_pane_g

0xcb35,	// (0x0001c367) hwr_training_navi_pane_t1

0x53bb,	// (0x00014bed) list_single_hwr_training_instruct_pane_ParamLimits

0x53bb,	// (0x00014bed) list_single_hwr_training_instruct_pane

0xcb43,	// (0x0001c375) list_single_hwr_training_instruct_pane_t1

0xc1ef,	// (0x0001ba21) bg_frame_shadow_pane_g1

0xcb52,	// (0x0001c384) bg_frame_shadow_pane_g2

0xcb5a,	// (0x0001c38c) bg_frame_shadow_pane_g3

0xcb62,	// (0x0001c394) bg_frame_shadow_pane_g4

0xcb6a,	// (0x0001c39c) bg_frame_shadow_pane_g5

0xcb72,	// (0x0001c3a4) bg_frame_shadow_pane_g6

0xcb7a,	// (0x0001c3ac) bg_frame_shadow_pane_g7

0x9dd1,	// (0x00019603) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001f0ac) bg_frame_shadow_pane_g

0x9514,	// (0x00018d46) main_video_tele_dialer_pane

0x53d0,	// (0x00014c02) aid_size_cell_video_keypad_ParamLimits

0x53d0,	// (0x00014c02) aid_size_cell_video_keypad

0x53ea,	// (0x00014c1c) grid_video_dialer_keypad_pane_ParamLimits

0x53ea,	// (0x00014c1c) grid_video_dialer_keypad_pane

0x5436,	// (0x00014c68) video_down_pane_cp_ParamLimits

0x5436,	// (0x00014c68) video_down_pane_cp

0x5466,	// (0x00014c98) cell_video_dialer_keypad_pane_ParamLimits

0x5466,	// (0x00014c98) cell_video_dialer_keypad_pane

0xcb82,	// (0x0001c3b4) bg_button_pane_cp08_ParamLimits

0xcb82,	// (0x0001c3b4) bg_button_pane_cp08

0x548a,	// (0x00014cbc) cell_video_dialer_keypad_pane_g1_ParamLimits

0x548a,	// (0x00014cbc) cell_video_dialer_keypad_pane_g1

0x4b15,	// (0x00014347) mup3_rocker2_pane_ParamLimits

0x4b15,	// (0x00014347) mup3_rocker2_pane

0xc2af,	// (0x0001bae1) mup3_rocker2_pane_g1

0x35a2,	// (0x00012dd4) main_dialer2_pane

0x9514,	// (0x00018d46) main_mp4_pane

0xcb96,	// (0x0001c3c8) main_mp4_pane_g1_ParamLimits

0xcb96,	// (0x0001c3c8) main_mp4_pane_g1

0xcb96,	// (0x0001c3c8) main_mp4_pane_g2_ParamLimits

0xcb96,	// (0x0001c3c8) main_mp4_pane_g2

0x54c5,	// (0x00014cf7) main_mp4_pane_g3_ParamLimits

0x54c5,	// (0x00014cf7) main_mp4_pane_g3

0xcba4,	// (0x0001c3d6) main_mp4_pane_g4_ParamLimits

0xcba4,	// (0x0001c3d6) main_mp4_pane_g4

0xcbcc,	// (0x0001c3fe) main_mp4_pane_g5_ParamLimits

0xcbcc,	// (0x0001c3fe) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001f0cc) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001f0cc) main_mp4_pane_g

0xcc1c,	// (0x0001c44e) main_mp4_pane_t1_ParamLimits

0xcc1c,	// (0x0001c44e) main_mp4_pane_t1

0xcc78,	// (0x0001c4aa) main_mp4_pane_t2_ParamLimits

0xcc78,	// (0x0001c4aa) main_mp4_pane_t2

0xccca,	// (0x0001c4fc) main_mp4_pane_t3_ParamLimits

0xccca,	// (0x0001c4fc) main_mp4_pane_t3

0xccea,	// (0x0001c51c) main_mp4_pane_t4_ParamLimits

0xccea,	// (0x0001c51c) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001f0d9) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001f0d9) main_mp4_pane_t

0xcd2a,	// (0x0001c55c) mp4_progress_pane_ParamLimits

0xcd2a,	// (0x0001c55c) mp4_progress_pane

0xcd74,	// (0x0001c5a6) mp4_rocker_pane_ParamLimits

0xcd74,	// (0x0001c5a6) mp4_rocker_pane

0xcd9e,	// (0x0001c5d0) mp4_progress_pane_t1

0xcdb7,	// (0x0001c5e9) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001f0e2) mp4_progress_pane_t

0xcdd0,	// (0x0001c602) mup_progress_pane_cp04

0xc2af,	// (0x0001bae1) mp4_rocker_pane_g1

0x550f,	// (0x00014d41) aid_cell_size_keypad2_ParamLimits

0x550f,	// (0x00014d41) aid_cell_size_keypad2

0x5525,	// (0x00014d57) dialer2_ne_pane_ParamLimits

0x5525,	// (0x00014d57) dialer2_ne_pane

0x553d,	// (0x00014d6f) grid_dialer2_keypad_pane_ParamLimits

0x553d,	// (0x00014d6f) grid_dialer2_keypad_pane

0xc08e,	// (0x0001b8c0) bg_popup_call_pane_cp07_ParamLimits

0xc08e,	// (0x0001b8c0) bg_popup_call_pane_cp07

0x5559,	// (0x00014d8b) dialer2_ne_pane_t1_ParamLimits

0x5559,	// (0x00014d8b) dialer2_ne_pane_t1

0x5594,	// (0x00014dc6) cell_dialer2_keypad_pane_ParamLimits

0x5594,	// (0x00014dc6) cell_dialer2_keypad_pane

0xcdee,	// (0x0001c620) bg_button_pane_pane_cp04_ParamLimits

0xcdee,	// (0x0001c620) bg_button_pane_pane_cp04

0x55b8,	// (0x00014dea) cell_dialer2_keypad_pane_g1_ParamLimits

0x55b8,	// (0x00014dea) cell_dialer2_keypad_pane_g1

0x0ffe,	// (0x00010830) aid_placing_vt_set_content_ParamLimits

0x0ffe,	// (0x00010830) aid_placing_vt_set_content

0x1022,	// (0x00010854) aid_placing_vt_set_title_ParamLimits

0x1022,	// (0x00010854) aid_placing_vt_set_title

0x9514,	// (0x00018d46) main_image3_pane

0x567e,	// (0x00014eb0) area_side_right_pane_cp01_ParamLimits

0x567e,	// (0x00014eb0) area_side_right_pane_cp01

0xcb96,	// (0x0001c3c8) main_image3_pane_g1_ParamLimits

0xcb96,	// (0x0001c3c8) main_image3_pane_g1

0x5697,	// (0x00014ec9) main_image3_pane_g2_ParamLimits

0x5697,	// (0x00014ec9) main_image3_pane_g2

0x56bf,	// (0x00014ef1) main_image3_pane_g3_ParamLimits

0x56bf,	// (0x00014ef1) main_image3_pane_g3

0x56e9,	// (0x00014f1b) main_image3_pane_g4_ParamLimits

0x56e9,	// (0x00014f1b) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001f0f1) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001f0f1) main_image3_pane_g

0x5713,	// (0x00014f45) main_image3_pane_t1_ParamLimits

0x5713,	// (0x00014f45) main_image3_pane_t1

0x576b,	// (0x00014f9d) main_image3_pane_t2_ParamLimits

0x576b,	// (0x00014f9d) main_image3_pane_t2

0x57bd,	// (0x00014fef) main_image3_pane_t3_ParamLimits

0x57bd,	// (0x00014fef) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001f0fa) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001f0fa) main_image3_pane_t

0x9575,	// (0x00018da7) grid_sctrl_middle_pane_cp01_ParamLimits

0x9575,	// (0x00018da7) grid_sctrl_middle_pane_cp01

0x5845,	// (0x00015077) cell_sctrl_middle_pane_cp01_ParamLimits

0x5845,	// (0x00015077) cell_sctrl_middle_pane_cp01

0x5862,	// (0x00015094) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5862,	// (0x00015094) cell_sctrl_middle_pane_cp01_g1

0x9514,	// (0x00018d46) main_call4_pane

0x5877,	// (0x000150a9) aid_size_button_call4_ParamLimits

0x5877,	// (0x000150a9) aid_size_button_call4

0x58aa,	// (0x000150dc) call4_windows_pane_ParamLimits

0x58aa,	// (0x000150dc) call4_windows_pane

0x58cc,	// (0x000150fe) grid_call4_button_pane_ParamLimits

0x58cc,	// (0x000150fe) grid_call4_button_pane

0xce2e,	// (0x0001c660) call4_windows_conf_pane

0x58f7,	// (0x00015129) popup_call4_audio_first_window_ParamLimits

0x58f7,	// (0x00015129) popup_call4_audio_first_window

0x5923,	// (0x00015155) popup_call4_audio_second_window_ParamLimits

0x5923,	// (0x00015155) popup_call4_audio_second_window

0xce6b,	// (0x0001c69d) popup_call4_audio_wait_window_ParamLimits

0xce6b,	// (0x0001c69d) popup_call4_audio_wait_window

0x5939,	// (0x0001516b) cell_call4_button_pane_ParamLimits

0x5939,	// (0x0001516b) cell_call4_button_pane

0x5960,	// (0x00015192) bg_button_pane_cp09_ParamLimits

0x5960,	// (0x00015192) bg_button_pane_cp09

0x596c,	// (0x0001519e) cell_call4_button_pane_g1_ParamLimits

0x596c,	// (0x0001519e) cell_call4_button_pane_g1

0x5992,	// (0x000151c4) cell_call4_button_pane_t1_ParamLimits

0x5992,	// (0x000151c4) cell_call4_button_pane_t1

0xceb3,	// (0x0001c6e5) popup_call4_audio_conf_window_ParamLimits

0xceb3,	// (0x0001c6e5) popup_call4_audio_conf_window

0x4b77,	// (0x000143a9) mup3_progress_pane_t1_ParamLimits

0x4b95,	// (0x000143c7) mup3_progress_pane_t2_ParamLimits

0xc566,	// (0x0001bd98) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0001efce) mup3_progress_pane_t_ParamLimits

0xc583,	// (0x0001bdb5) mup_progress_pane_cp03_ParamLimits

0x5196,	// (0x000149c8) mup3_control_keys_pane_g4_copy1

0xcd58,	// (0x0001c58a) mp4_rocker2_pane_ParamLimits

0xcd58,	// (0x0001c58a) mp4_rocker2_pane

0xcecd,	// (0x0001c6ff) mp4_rocker2_pane_g1

0xced5,	// (0x0001c707) mp4_rocker2_pane_g2

0xcedd,	// (0x0001c70f) mp4_rocker2_pane_g3

0xcee5,	// (0x0001c717) mp4_rocker2_pane_g4

0xceed,	// (0x0001c71f) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001f103) mp4_rocker2_pane_g

0x9514,	// (0x00018d46) main_camera4_pane

0x9514,	// (0x00018d46) main_video4_pane

0x5404,	// (0x00014c36) main_video_tele_dialer_pane_t1_ParamLimits

0x5404,	// (0x00014c36) main_video_tele_dialer_pane_t1

0x541d,	// (0x00014c4f) main_video_tele_dialer_pane_t2_ParamLimits

0x541d,	// (0x00014c4f) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001f0bd) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001f0bd) main_video_tele_dialer_pane_t

0x59d0,	// (0x00015202) cam4_autofocus_pane_ParamLimits

0x59d0,	// (0x00015202) cam4_autofocus_pane

0x59e6,	// (0x00015218) cam4_image_uncrop_pane_ParamLimits

0x59e6,	// (0x00015218) cam4_image_uncrop_pane

0x59ff,	// (0x00015231) cam4_indicators_pane_ParamLimits

0x59ff,	// (0x00015231) cam4_indicators_pane

0x5a2e,	// (0x00015260) main_camera4_pane_g1_ParamLimits

0x5a2e,	// (0x00015260) main_camera4_pane_g1

0x5a40,	// (0x00015272) main_camera4_pane_g2_ParamLimits

0x5a40,	// (0x00015272) main_camera4_pane_g2

0x5a53,	// (0x00015285) main_camera4_pane_g3_ParamLimits

0x5a53,	// (0x00015285) main_camera4_pane_g3

0x5a66,	// (0x00015298) main_camera4_pane_g4_ParamLimits

0x5a66,	// (0x00015298) main_camera4_pane_g4

0x5a79,	// (0x000152ab) main_camera4_pane_g5_ParamLimits

0x5a79,	// (0x000152ab) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001f10e) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001f10e) main_camera4_pane_g

0x5a9d,	// (0x000152cf) main_camera4_pane_t1_ParamLimits

0x5a9d,	// (0x000152cf) main_camera4_pane_t1

0xc4df,	// (0x0001bd11) bg_tb_trans_pane_cp06

0xcf1b,	// (0x0001c74d) cam4_indicators_pane_g1

0xcf2c,	// (0x0001c75e) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001f129) cam4_indicators_pane_g

0xcf44,	// (0x0001c776) cam4_indicators_pane_t1

0x5b01,	// (0x00015333) main_video4_pane_g1_ParamLimits

0x5b01,	// (0x00015333) main_video4_pane_g1

0x5b10,	// (0x00015342) main_video4_pane_g2_ParamLimits

0x5b10,	// (0x00015342) main_video4_pane_g2

0x5b1f,	// (0x00015351) main_video4_pane_g3_ParamLimits

0x5b1f,	// (0x00015351) main_video4_pane_g3

0x5b2e,	// (0x00015360) main_video4_pane_g4_ParamLimits

0x5b2e,	// (0x00015360) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001f130) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001f130) main_video4_pane_g

0x5b4c,	// (0x0001537e) vid4_indicators_pane_ParamLimits

0x5b4c,	// (0x0001537e) vid4_indicators_pane

0x5b7a,	// (0x000153ac) video4_image_uncrop_cif_pane_ParamLimits

0x5b7a,	// (0x000153ac) video4_image_uncrop_cif_pane

0x5b94,	// (0x000153c6) video4_image_uncrop_nhd_pane_ParamLimits

0x5b94,	// (0x000153c6) video4_image_uncrop_nhd_pane

0x59e6,	// (0x00015218) video4_image_uncrop_vga_pane_ParamLimits

0x59e6,	// (0x00015218) video4_image_uncrop_vga_pane

0x9575,	// (0x00018da7) bg_tb_trans_pane_cp07

0xcf72,	// (0x0001c7a4) vid4_indicators_pane_g1

0xcf88,	// (0x0001c7ba) vid4_indicators_pane_g2

0xcf9c,	// (0x0001c7ce) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001f13b) vid4_indicators_pane_g

0xcfcd,	// (0x0001c7ff) vid4_indicators_pane_t1

0x5baa,	// (0x000153dc) cam4_autofocus_pane_g1

0x5bb2,	// (0x000153e4) cam4_autofocus_pane_g2

0x5bba,	// (0x000153ec) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001f146) cam4_autofocus_pane_g

0x5bc2,	// (0x000153f4) cam4_autofocus_pane_g3_copy1

0x544a,	// (0x00014c7c) video_down_pane_cp_t1

0x5458,	// (0x00014c8a) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001f0c2) video_down_pane_cp_t

0x9575,	// (0x00018da7) popup_vitu2_window_ParamLimits

0x9575,	// (0x00018da7) popup_vitu2_window

0x5bca,	// (0x000153fc) aid_size_cell2_itu2_ParamLimits

0x5bca,	// (0x000153fc) aid_size_cell2_itu2

0x5bf0,	// (0x00015422) aid_size_cell_itu2_ParamLimits

0x5bf0,	// (0x00015422) aid_size_cell_itu2

0x5c50,	// (0x00015482) bg_popup_window_pane_cp09_ParamLimits

0x5c50,	// (0x00015482) bg_popup_window_pane_cp09

0x5c5e,	// (0x00015490) field_vitu2_entry_pane_ParamLimits

0x5c5e,	// (0x00015490) field_vitu2_entry_pane

0x5c86,	// (0x000154b8) grid_vitu2_function_pane_ParamLimits

0x5c86,	// (0x000154b8) grid_vitu2_function_pane

0x5cd7,	// (0x00015509) grid_vitu2_itu_pane_ParamLimits

0x5cd7,	// (0x00015509) grid_vitu2_itu_pane

0x5d6b,	// (0x0001559d) cell_vitu2_itu_pane_ParamLimits

0x5d6b,	// (0x0001559d) cell_vitu2_itu_pane

0x5d91,	// (0x000155c3) cell_vitu2_function_pane_ParamLimits

0x5d91,	// (0x000155c3) cell_vitu2_function_pane

0xcfe4,	// (0x0001c816) bg_popup_call_pane_cp08_ParamLimits

0xcfe4,	// (0x0001c816) bg_popup_call_pane_cp08

0xcffb,	// (0x0001c82d) field_vitu2_entry_pane_g1

0xd007,	// (0x0001c839) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001f14d) field_vitu2_entry_pane_g

0x5dd5,	// (0x00015607) field_vitu2_entry_pane_t1_ParamLimits

0x5dd5,	// (0x00015607) field_vitu2_entry_pane_t1

0xd021,	// (0x0001c853) field_vitu2_entry_pane_t2_ParamLimits

0xd021,	// (0x0001c853) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001f154) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001f154) field_vitu2_entry_pane_t

0x5e04,	// (0x00015636) bg_button_pane_cp010_ParamLimits

0x5e04,	// (0x00015636) bg_button_pane_cp010

0xd046,	// (0x0001c878) cell_vitu2_itu_pane_g1

0x5e20,	// (0x00015652) cell_vitu2_itu_pane_t1_ParamLimits

0x5e20,	// (0x00015652) cell_vitu2_itu_pane_t1

0x5e7e,	// (0x000156b0) cell_vitu2_itu_pane_t2_ParamLimits

0x5e7e,	// (0x000156b0) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001f15e) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001f15e) cell_vitu2_itu_pane_t

0x9575,	// (0x00018da7) bg_button_pane_cp011

0x5f6a,	// (0x0001579c) cell_vitu2_function_pane_g1

0x9514,	// (0x00018d46) main_myfav_hc_pane

0x580d,	// (0x0001503f) popup_image3_note_pane_ParamLimits

0x580d,	// (0x0001503f) popup_image3_note_pane

0x5829,	// (0x0001505b) popup_image3_tool_bar_pane_ParamLimits

0x5829,	// (0x0001505b) popup_image3_tool_bar_pane

0x5f0c,	// (0x0001573e) cell_vitu2_itu_pane_t3_ParamLimits

0x5f0c,	// (0x0001573e) cell_vitu2_itu_pane_t3

0x9514,	// (0x00018d46) bg_popup_trans_pane

0xd058,	// (0x0001c88a) grid_image3_tool_bar_pane

0xd062,	// (0x0001c894) bg_popup_trans_pane_g1

0xa16b,	// (0x0001999d) bg_popup_trans_pane_g2

0xd06a,	// (0x0001c89c) bg_popup_trans_pane_g3

0xd072,	// (0x0001c8a4) bg_popup_trans_pane_g4

0xd07a,	// (0x0001c8ac) bg_popup_trans_pane_g5

0xd082,	// (0x0001c8b4) bg_popup_trans_pane_g6

0xd08a,	// (0x0001c8bc) bg_popup_trans_pane_g7

0xd092,	// (0x0001c8c4) bg_popup_trans_pane_g8

0xa14b,	// (0x0001997d) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001f165) bg_popup_trans_pane_g

0xd09a,	// (0x0001c8cc) cell_image3_tool_bar_pane_ParamLimits

0xd09a,	// (0x0001c8cc) cell_image3_tool_bar_pane

0xc2af,	// (0x0001bae1) cell_image3_tool_bar_pane_g1

0x9514,	// (0x00018d46) bg_popup_trans_pane_cp1

0xd0b0,	// (0x0001c8e2) popup_image3_note_pane_t1

0xd0be,	// (0x0001c8f0) popup_image3_note_pane_t2

0xd0cc,	// (0x0001c8fe) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001f178) popup_image3_note_pane_t

0xd0dc,	// (0x0001c90e) popup_image3_note_pane_t3_copy1

0x5f7e,	// (0x000157b0) bg_myfav_hc_instruction_pane_ParamLimits

0x5f7e,	// (0x000157b0) bg_myfav_hc_instruction_pane

0x5f96,	// (0x000157c8) cell_myfav_contact_pane_ParamLimits

0x5f96,	// (0x000157c8) cell_myfav_contact_pane

0x5fb2,	// (0x000157e4) cell_myfav_contact_pane_cp1_ParamLimits

0x5fb2,	// (0x000157e4) cell_myfav_contact_pane_cp1

0x5fca,	// (0x000157fc) cell_myfav_contact_pane_cp2_ParamLimits

0x5fca,	// (0x000157fc) cell_myfav_contact_pane_cp2

0x5fe2,	// (0x00015814) cell_myfav_contact_pane_cp3_ParamLimits

0x5fe2,	// (0x00015814) cell_myfav_contact_pane_cp3

0x5ff9,	// (0x0001582b) cell_myfav_contact_pane_cp4_ParamLimits

0x5ff9,	// (0x0001582b) cell_myfav_contact_pane_cp4

0x6011,	// (0x00015843) cell_myfav_contact_pane_cp5_ParamLimits

0x6011,	// (0x00015843) cell_myfav_contact_pane_cp5

0x6025,	// (0x00015857) cell_myfav_contact_pane_cp6_ParamLimits

0x6025,	// (0x00015857) cell_myfav_contact_pane_cp6

0x603b,	// (0x0001586d) cell_myfav_contact_pane_cp7_ParamLimits

0x603b,	// (0x0001586d) cell_myfav_contact_pane_cp7

0xd0ea,	// (0x0001c91c) listscroll_gen_pane_cp05

0x6053,	// (0x00015885) main_myfav_hc_pane_g1_ParamLimits

0x6053,	// (0x00015885) main_myfav_hc_pane_g1

0x606d,	// (0x0001589f) main_myfav_hc_pane_g2_ParamLimits

0x606d,	// (0x0001589f) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001f17f) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001f17f) main_myfav_hc_pane_g

0x60a1,	// (0x000158d3) main_myfav_hc_pane_t1_ParamLimits

0x60a1,	// (0x000158d3) main_myfav_hc_pane_t1

0xd0f3,	// (0x0001c925) main_myfav_hc_pane_t2_ParamLimits

0xd0f3,	// (0x0001c925) main_myfav_hc_pane_t2

0xd105,	// (0x0001c937) main_myfav_hc_pane_t3_ParamLimits

0xd105,	// (0x0001c937) main_myfav_hc_pane_t3

0x60b8,	// (0x000158ea) main_myfav_hc_pane_t4_ParamLimits

0x60b8,	// (0x000158ea) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001f186) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001f186) main_myfav_hc_pane_t

0xc2af,	// (0x0001bae1) bg_myfav_hc_instruction_pane_g1

0xd117,	// (0x0001c949) cell_myfav_contact_pane_g1_ParamLimits

0xd117,	// (0x0001c949) cell_myfav_contact_pane_g1

0xd117,	// (0x0001c949) cell_myfav_contact_pane_g2_ParamLimits

0xd117,	// (0x0001c949) cell_myfav_contact_pane_g2

0xd123,	// (0x0001c955) cell_myfav_contact_pane_g3_ParamLimits

0xd123,	// (0x0001c955) cell_myfav_contact_pane_g3

0xc550,	// (0x0001bd82) cell_myfav_contact_pane_g4_ParamLimits

0xc550,	// (0x0001bd82) cell_myfav_contact_pane_g4

0xd130,	// (0x0001c962) cell_myfav_contact_pane_g5_ParamLimits

0xd130,	// (0x0001c962) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001f191) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001f191) cell_myfav_contact_pane_g

0x6087,	// (0x000158b9) main_myfav_hc_pane_g3_ParamLimits

0x6087,	// (0x000158b9) main_myfav_hc_pane_g3

0xfd50,	// (0x0000f582) popup_adpt_find_window

0x60e2,	// (0x00015914) afind_page_pane_ParamLimits

0x60e2,	// (0x00015914) afind_page_pane

0x60f7,	// (0x00015929) aid_size_cell_afind_ParamLimits

0x60f7,	// (0x00015929) aid_size_cell_afind

0x6115,	// (0x00015947) bg_popup_sub_pane_cp09_ParamLimits

0x6115,	// (0x00015947) bg_popup_sub_pane_cp09

0x6122,	// (0x00015954) find_pane_cp01_ParamLimits

0x6122,	// (0x00015954) find_pane_cp01

0xd13c,	// (0x0001c96e) grid_afind_control_pane_ParamLimits

0xd13c,	// (0x0001c96e) grid_afind_control_pane

0x612f,	// (0x00015961) grid_afind_pane_ParamLimits

0x612f,	// (0x00015961) grid_afind_pane

0x6151,	// (0x00015983) cell_afind_pane_ParamLimits

0x6151,	// (0x00015983) cell_afind_pane

0xc2af,	// (0x0001bae1) afind_page_pane_g1

0x61ba,	// (0x000159ec) afind_page_pane_g2

0x61c3,	// (0x000159f5) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001f19c) afind_page_pane_g

0x61cc,	// (0x000159fe) afind_page_pane_t1

0xd150,	// (0x0001c982) cell_afind_grid_control_pane_ParamLimits

0xd150,	// (0x0001c982) cell_afind_grid_control_pane

0xcdee,	// (0x0001c620) bg_button_pane_cp69_ParamLimits

0xcdee,	// (0x0001c620) bg_button_pane_cp69

0x61ec,	// (0x00015a1e) cell_afind_pane_g1_ParamLimits

0x61ec,	// (0x00015a1e) cell_afind_pane_g1

0x61f9,	// (0x00015a2b) cell_afind_pane_t1_ParamLimits

0x61f9,	// (0x00015a2b) cell_afind_pane_t1

0x9f60,	// (0x00019792) bg_button_pane_cp72

0xd15f,	// (0x0001c991) cell_afind_grid_control_pane_g1

0x3045,	// (0x00012877) aid_image_placing_area_ParamLimits

0x3045,	// (0x00012877) aid_image_placing_area

0xc883,	// (0x0001c0b5) field_vitu_entry_pane_g1_ParamLimits

0xc883,	// (0x0001c0b5) field_vitu_entry_pane_g1

0xc88f,	// (0x0001c0c1) field_vitu_entry_pane_g2_ParamLimits

0xc88f,	// (0x0001c0c1) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001f04d) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001f04d) field_vitu_entry_pane_g

0x5265,	// (0x00014a97) cell_vitu_itu_pane_g1_ParamLimits

0x52a7,	// (0x00014ad9) cell_vitu_itu_pane_t3_ParamLimits

0x52a7,	// (0x00014ad9) cell_vitu_itu_pane_t3

0xcd9e,	// (0x0001c5d0) mp4_progress_pane_t1_ParamLimits

0xcdb7,	// (0x0001c5e9) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001f0e2) mp4_progress_pane_t_ParamLimits

0xcdd0,	// (0x0001c602) mup_progress_pane_cp04_ParamLimits

0x60cc,	// (0x000158fe) main_myfav_hc_pane_t5_ParamLimits

0x60cc,	// (0x000158fe) main_myfav_hc_pane_t5

0x953a,	// (0x00018d6c) aid_zoom_text_primary

0xfd50,	// (0x0000f582) popup_adpt_find_window_ParamLimits

0x9575,	// (0x00018da7) main_cam_set_pane

0x5a18,	// (0x0001524a) cam4_zoom_pane_ParamLimits

0x5a18,	// (0x0001524a) cam4_zoom_pane

0x620b,	// (0x00015a3d) main_cam_set_pane_g1_ParamLimits

0x620b,	// (0x00015a3d) main_cam_set_pane_g1

0x6219,	// (0x00015a4b) main_cam_set_pane_g2_ParamLimits

0x6219,	// (0x00015a4b) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001f1a3) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001f1a3) main_cam_set_pane_g

0x623a,	// (0x00015a6c) main_cam_set_pane_t1_ParamLimits

0x623a,	// (0x00015a6c) main_cam_set_pane_t1

0x6255,	// (0x00015a87) main_cset_listscroll_pane_ParamLimits

0x6255,	// (0x00015a87) main_cset_listscroll_pane

0x6279,	// (0x00015aab) main_cset_slider_pane_ParamLimits

0x6279,	// (0x00015aab) main_cset_slider_pane

0xd170,	// (0x0001c9a2) main_cset_list_pane_ParamLimits

0xd170,	// (0x0001c9a2) main_cset_list_pane

0xd180,	// (0x0001c9b2) scroll_pane_cp028

0x62a3,	// (0x00015ad5) aid_area_touch_slider

0x62bf,	// (0x00015af1) cset_slider_pane

0x62e9,	// (0x00015b1b) main_cset_slider_pane_g1

0x62fe,	// (0x00015b30) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001f1a8) main_cset_slider_pane_g

0xd1b9,	// (0x0001c9eb) main_cset_slider_pane_t1

0x63c0,	// (0x00015bf2) main_cset_slider_pane_t2

0x63da,	// (0x00015c0c) main_cset_slider_pane_t3

0x63f4,	// (0x00015c26) main_cset_slider_pane_t4

0x640e,	// (0x00015c40) main_cset_slider_pane_t5

0x642c,	// (0x00015c5e) main_cset_slider_pane_t6

0x6441,	// (0x00015c73) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001f1cd) main_cset_slider_pane_t

0x654d,	// (0x00015d7f) cset_list_set_pane_ParamLimits

0x654d,	// (0x00015d7f) cset_list_set_pane

0x6561,	// (0x00015d93) aid_position_infowindow_above

0x6569,	// (0x00015d9b) aid_position_infowindow_below

0x6571,	// (0x00015da3) cset_list_set_pane_g1_ParamLimits

0x6571,	// (0x00015da3) cset_list_set_pane_g1

0x657d,	// (0x00015daf) cset_list_set_pane_g3_ParamLimits

0x657d,	// (0x00015daf) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001f1ec) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001f1ec) cset_list_set_pane_g

0x658c,	// (0x00015dbe) cset_list_set_pane_t1_ParamLimits

0x658c,	// (0x00015dbe) cset_list_set_pane_t1

0x9575,	// (0x00018da7) list_highlight_pane_cp021_ParamLimits

0x9575,	// (0x00018da7) list_highlight_pane_cp021

0xaa31,	// (0x0001a263) cset_slider_pane_g1

0xaa43,	// (0x0001a275) cset_slider_pane_g2

0xaa3a,	// (0x0001a26c) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001f1f1) cset_slider_pane_g

0xd259,	// (0x0001ca8b) aid_area_touch_cam4_zoom

0xd261,	// (0x0001ca93) cam4_zoom_cont_pane

0xd269,	// (0x0001ca9b) cam4_zoom_pane_g1

0xd271,	// (0x0001caa3) cam4_zoom_pane_g2

0x65a1,	// (0x00015dd3) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001f1f8) cam4_zoom_pane_g

0xd279,	// (0x0001caab) cam4_zoom_cont_pane_g1

0xd282,	// (0x0001cab4) cam4_zoom_cont_pane_g2

0xd28b,	// (0x0001cabd) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001f1ff) cam4_zoom_cont_pane_g

0x5895,	// (0x000150c7) call4_image_pane_ParamLimits

0x5895,	// (0x000150c7) call4_image_pane

0xce2e,	// (0x0001c660) call4_windows_conf_pane_ParamLimits

0xce49,	// (0x0001c67b) popup_call4_audio_in_window_ParamLimits

0xce49,	// (0x0001c67b) popup_call4_audio_in_window

0x9514,	// (0x00018d46) bg_popup_call2_act_pane_cp02

0xceab,	// (0x0001c6dd) call4_list_conf_pane

0xc2af,	// (0x0001bae1) call4_image_pane_g1

0xc2af,	// (0x0001bae1) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0001ef0e) call4_image_pane_g

0xd294,	// (0x0001cac6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd294,	// (0x0001cac6) list_single_graphic_popup_conf4_pane

0x9514,	// (0x00018d46) list_highlight_pane_cp022

0xd2a9,	// (0x0001cadb) list_single_graphic_popup_conf4_pane_g1

0xa713,	// (0x00019f45) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001f206) list_single_graphic_popup_conf4_pane_g

0xd2b1,	// (0x0001cae3) list_single_graphic_popup_conf4_pane_t1

0x1139,	// (0x0001096b) popup_vtel_slider_window_ParamLimits

0x1139,	// (0x0001096b) popup_vtel_slider_window

0xcddc,	// (0x0001c60e) dialer2_ne_pane_t2_ParamLimits

0xcddc,	// (0x0001c60e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001f0e7) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001f0e7) dialer2_ne_pane_t

0xc08e,	// (0x0001b8c0) bg_popup_sub_pane_cp010_ParamLimits

0xc08e,	// (0x0001b8c0) bg_popup_sub_pane_cp010

0x65a9,	// (0x00015ddb) popup_vtel_slider_window_g1_ParamLimits

0x65a9,	// (0x00015ddb) popup_vtel_slider_window_g1

0x65bc,	// (0x00015dee) popup_vtel_slider_window_g2_ParamLimits

0x65bc,	// (0x00015dee) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001f20b) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001f20b) popup_vtel_slider_window_g

0x6612,	// (0x00015e44) vtel_slider_pane_ParamLimits

0x6612,	// (0x00015e44) vtel_slider_pane

0x6634,	// (0x00015e66) vtel_slider_pane_g1_ParamLimits

0x6634,	// (0x00015e66) vtel_slider_pane_g1

0x6648,	// (0x00015e7a) vtel_slider_pane_g2_ParamLimits

0x6648,	// (0x00015e7a) vtel_slider_pane_g2

0x6660,	// (0x00015e92) vtel_slider_pane_g3_ParamLimits

0x6660,	// (0x00015e92) vtel_slider_pane_g3

0x6634,	// (0x00015e66) vtel_slider_pane_g4_ParamLimits

0x6634,	// (0x00015e66) vtel_slider_pane_g4

0x6676,	// (0x00015ea8) vtel_slider_pane_g5_ParamLimits

0x6676,	// (0x00015ea8) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001f214) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001f214) vtel_slider_pane_g

0x9575,	// (0x00018da7) main_gallery2_pane

0x5c1c,	// (0x0001544e) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c1c,	// (0x0001544e) aid_size_row_itut2_dropdow_list

0x5cae,	// (0x000154e0) grid_vitu2_function_top_pane_ParamLimits

0x5cae,	// (0x000154e0) grid_vitu2_function_top_pane

0x5d12,	// (0x00015544) popup_vitu2_dropdown_list_window_ParamLimits

0x5d12,	// (0x00015544) popup_vitu2_dropdown_list_window

0x5d3f,	// (0x00015571) popup_vitu2_match_list_window

0x668c,	// (0x00015ebe) cell_vitu2_function_top_pane_ParamLimits

0x668c,	// (0x00015ebe) cell_vitu2_function_top_pane

0x66ac,	// (0x00015ede) cell_vitu2_function_top_pane_cp01_ParamLimits

0x66ac,	// (0x00015ede) cell_vitu2_function_top_pane_cp01

0x66c8,	// (0x00015efa) cell_vitu2_function_top_wide_pane_ParamLimits

0x66c8,	// (0x00015efa) cell_vitu2_function_top_wide_pane

0x9575,	// (0x00018da7) bg_button_pane_cp012

0x66e4,	// (0x00015f16) cell_vitu2_function_top_pane_g1

0xd333,	// (0x0001cb65) bg_button_pane_cp013_ParamLimits

0xd333,	// (0x0001cb65) bg_button_pane_cp013

0x66f8,	// (0x00015f2a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x66f8,	// (0x00015f2a) cell_vitu2_function_top_wide_pane_g1

0x9575,	// (0x00018da7) bg_popup_sub_pane_cp20

0x6710,	// (0x00015f42) list_vitu2_match_list_pane

0xd062,	// (0x0001c894) bg_popup_sub_pane_cp20_g1

0xd06a,	// (0x0001c89c) bg_popup_sub_pane_cp20_g2

0xa16b,	// (0x0001999d) bg_popup_sub_pane_cp20_g3

0xd072,	// (0x0001c8a4) bg_popup_sub_pane_cp20_g4

0xa14b,	// (0x0001997d) bg_popup_sub_pane_cp20_g5

0xd34f,	// (0x0001cb81) bg_popup_sub_pane_cp20_g6

0xd082,	// (0x0001c8b4) bg_popup_sub_pane_cp20_g7

0xd08a,	// (0x0001c8bc) bg_popup_sub_pane_cp20_g8

0xd092,	// (0x0001c8c4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001f21f) bg_popup_sub_pane_cp20_g

0xd357,	// (0x0001cb89) list_vitu2_match_list_item_pane_ParamLimits

0xd357,	// (0x0001cb89) list_vitu2_match_list_item_pane

0xd369,	// (0x0001cb9b) list_vitu2_match_list_item_pane_t1

0x9514,	// (0x00018d46) bg_popup_sub_pane_cp21

0xa5cd,	// (0x00019dff) grid_vitu2_dropdown_list_pane

0x676c,	// (0x00015f9e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x676c,	// (0x00015f9e) cell_vitu2_dropdown_list_char_pane

0x678f,	// (0x00015fc1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x678f,	// (0x00015fc1) cell_vitu2_dropdown_list_ctrl_pane

0xd383,	// (0x0001cbb5) cell_vitu2_dropdown_list_char_pane_g1

0xd38c,	// (0x0001cbbe) cell_vitu2_dropdown_list_char_pane_g2

0xd395,	// (0x0001cbc7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001f23c) cell_vitu2_dropdown_list_char_pane_g

0x67bd,	// (0x00015fef) cell_vitu2_dropdown_list_char_pane_t1

0x67cb,	// (0x00015ffd) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x67cb,	// (0x00015ffd) cell_vitu2_dropdown_list_ctrl_pane_g1

0x67db,	// (0x0001600d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x67db,	// (0x0001600d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x67ec,	// (0x0001601e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x67ec,	// (0x0001601e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x67fc,	// (0x0001602e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x67fc,	// (0x0001602e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc4df,	// (0x0001bd11) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc4df,	// (0x0001bd11) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001f243) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001f243) cell_vitu2_dropdown_list_ctrl_pane_g

0x6818,	// (0x0001604a) aid_size_cell_gallery2_ParamLimits

0x6818,	// (0x0001604a) aid_size_cell_gallery2

0x6836,	// (0x00016068) grid_gallery2_pane_ParamLimits

0x6836,	// (0x00016068) grid_gallery2_pane

0x6850,	// (0x00016082) scroll_pane_cp029_ParamLimits

0x6850,	// (0x00016082) scroll_pane_cp029

0x685c,	// (0x0001608e) cell_gallery2_pane_ParamLimits

0x685c,	// (0x0001608e) cell_gallery2_pane

0xd39e,	// (0x0001cbd0) cell_gallery2_pane_g2

0x68bd,	// (0x000160ef) cell_gallery2_pane_g3

0xd3a6,	// (0x0001cbd8) cell_gallery2_pane_g4

0xd3ae,	// (0x0001cbe0) cell_gallery2_pane_g5

0x9f04,	// (0x00019736) grid_highlight_pane_cp10

0x5d3f,	// (0x00015571) popup_vitu2_match_list_window_ParamLimits

0x5d56,	// (0x00015588) popup_vitu2_query_window_ParamLimits

0x5d56,	// (0x00015588) popup_vitu2_query_window

0x9514,	// (0x00018d46) bg_vitu2_candi_button_pane

0xd383,	// (0x0001cbb5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd38c,	// (0x0001cbbe) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd395,	// (0x0001cbc7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x68c5,	// (0x000160f7) bg_button_pane_cp015

0x68d9,	// (0x0001610b) bg_button_pane_cp016

0x68ec,	// (0x0001611e) bg_button_pane_cp017

0xbda2,	// (0x0001b5d4) bg_popup_sub_pane_cp22

0xd3b6,	// (0x0001cbe8) popup_vitu2_query_window_g1

0x6931,	// (0x00016163) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001f24e) popup_vitu2_query_window_g

0x6950,	// (0x00016182) popup_vitu2_query_window_t1_ParamLimits

0x6950,	// (0x00016182) popup_vitu2_query_window_t1

0x6985,	// (0x000161b7) popup_vitu2_query_window_t2_ParamLimits

0x6985,	// (0x000161b7) popup_vitu2_query_window_t2

0x6997,	// (0x000161c9) popup_vitu2_query_window_t3_ParamLimits

0x6997,	// (0x000161c9) popup_vitu2_query_window_t3

0x69bf,	// (0x000161f1) popup_vitu2_query_window_t4_ParamLimits

0x69bf,	// (0x000161f1) popup_vitu2_query_window_t4

0x69e0,	// (0x00016212) popup_vitu2_query_window_t5_ParamLimits

0x69e0,	// (0x00016212) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001f255) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001f255) popup_vitu2_query_window_t

0xd168,	// (0x0001c99a) main_cset_text_pane

0x62a3,	// (0x00015ad5) aid_area_touch_slider_ParamLimits

0x62bf,	// (0x00015af1) cset_slider_pane_ParamLimits

0x62e9,	// (0x00015b1b) main_cset_slider_pane_g1_ParamLimits

0x62fe,	// (0x00015b30) main_cset_slider_pane_g2_ParamLimits

0xd189,	// (0x0001c9bb) main_cset_slider_pane_g3_ParamLimits

0xd189,	// (0x0001c9bb) main_cset_slider_pane_g3

0x6313,	// (0x00015b45) main_cset_slider_pane_g4_ParamLimits

0x6313,	// (0x00015b45) main_cset_slider_pane_g4

0x6322,	// (0x00015b54) main_cset_slider_pane_g5_ParamLimits

0x6322,	// (0x00015b54) main_cset_slider_pane_g5

0x6330,	// (0x00015b62) main_cset_slider_pane_g6_ParamLimits

0x6330,	// (0x00015b62) main_cset_slider_pane_g6

0xf976,	// (0x0001f1a8) main_cset_slider_pane_g_ParamLimits

0xd1b9,	// (0x0001c9eb) main_cset_slider_pane_t1_ParamLimits

0x63c0,	// (0x00015bf2) main_cset_slider_pane_t2_ParamLimits

0x63da,	// (0x00015c0c) main_cset_slider_pane_t3_ParamLimits

0x63f4,	// (0x00015c26) main_cset_slider_pane_t4_ParamLimits

0x640e,	// (0x00015c40) main_cset_slider_pane_t5_ParamLimits

0x642c,	// (0x00015c5e) main_cset_slider_pane_t6_ParamLimits

0x6441,	// (0x00015c73) main_cset_slider_pane_t7_ParamLimits

0x646f,	// (0x00015ca1) main_cset_slider_pane_t8_ParamLimits

0x646f,	// (0x00015ca1) main_cset_slider_pane_t8

0x6497,	// (0x00015cc9) main_cset_slider_pane_t9_ParamLimits

0x6497,	// (0x00015cc9) main_cset_slider_pane_t9

0x64bf,	// (0x00015cf1) main_cset_slider_pane_t10_ParamLimits

0x64bf,	// (0x00015cf1) main_cset_slider_pane_t10

0x64e7,	// (0x00015d19) main_cset_slider_pane_t11_ParamLimits

0x64e7,	// (0x00015d19) main_cset_slider_pane_t11

0x6511,	// (0x00015d43) main_cset_slider_pane_t12_ParamLimits

0x6511,	// (0x00015d43) main_cset_slider_pane_t12

0x652e,	// (0x00015d60) main_cset_slider_pane_t13_ParamLimits

0x652e,	// (0x00015d60) main_cset_slider_pane_t13

0xf99b,	// (0x0001f1cd) main_cset_slider_pane_t_ParamLimits

0x9514,	// (0x00018d46) bg_popup_sub_pane_cp011

0xd3c2,	// (0x0001cbf4) main_cset_text_pane_g1

0xd3ca,	// (0x0001cbfc) main_cset_text_pane_t1

0xd3d8,	// (0x0001cc0a) main_cset_text_pane_t2

0xd3e6,	// (0x0001cc18) main_cset_text_pane_t3

0xd3f4,	// (0x0001cc26) main_cset_text_pane_t4

0xd402,	// (0x0001cc34) main_cset_text_pane_t5

0xd410,	// (0x0001cc42) main_cset_text_pane_t6

0xd41e,	// (0x0001cc50) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001f264) main_cset_text_pane_t

0x9514,	// (0x00018d46) main_cam4_burst_pane

0x9514,	// (0x00018d46) main_cam5_pane

0x61da,	// (0x00015a0c) bg_button_pane_cp019

0x61e3,	// (0x00015a15) bg_button_pane_cp020

0xd195,	// (0x0001c9c7) main_cset_slider_pane_g7_ParamLimits

0xd195,	// (0x0001c9c7) main_cset_slider_pane_g7

0xd1a1,	// (0x0001c9d3) main_cset_slider_pane_g8_ParamLimits

0xd1a1,	// (0x0001c9d3) main_cset_slider_pane_g8

0x6344,	// (0x00015b76) main_cset_slider_pane_g9_ParamLimits

0x6344,	// (0x00015b76) main_cset_slider_pane_g9

0x6350,	// (0x00015b82) main_cset_slider_pane_g10_ParamLimits

0x6350,	// (0x00015b82) main_cset_slider_pane_g10

0x635c,	// (0x00015b8e) main_cset_slider_pane_g11_ParamLimits

0x635c,	// (0x00015b8e) main_cset_slider_pane_g11

0x6368,	// (0x00015b9a) main_cset_slider_pane_g12_ParamLimits

0x6368,	// (0x00015b9a) main_cset_slider_pane_g12

0x6374,	// (0x00015ba6) main_cset_slider_pane_g13_ParamLimits

0x6374,	// (0x00015ba6) main_cset_slider_pane_g13

0x6380,	// (0x00015bb2) main_cset_slider_pane_g14_ParamLimits

0x6380,	// (0x00015bb2) main_cset_slider_pane_g14

0x638c,	// (0x00015bbe) main_cset_slider_pane_g15_ParamLimits

0x638c,	// (0x00015bbe) main_cset_slider_pane_g15

0xd1e7,	// (0x0001ca19) main_cset_slider_pane_t14_ParamLimits

0xd1e7,	// (0x0001ca19) main_cset_slider_pane_t14

0xd220,	// (0x0001ca52) main_cset_slider_pane_t15_ParamLimits

0xd220,	// (0x0001ca52) main_cset_slider_pane_t15

0x6a57,	// (0x00016289) aid_cam4_burst_size_cell_ParamLimits

0x6a57,	// (0x00016289) aid_cam4_burst_size_cell

0x6a77,	// (0x000162a9) grid_cam4_burst_pane_ParamLimits

0x6a77,	// (0x000162a9) grid_cam4_burst_pane

0x6ab1,	// (0x000162e3) linegrid_cam4_burst_pane_ParamLimits

0x6ab1,	// (0x000162e3) linegrid_cam4_burst_pane

0xd42c,	// (0x0001cc5e) scroll_pane_cp30_ParamLimits

0xd42c,	// (0x0001cc5e) scroll_pane_cp30

0x6ad3,	// (0x00016305) cell_cam4_burst_pane_ParamLimits

0x6ad3,	// (0x00016305) cell_cam4_burst_pane

0xd438,	// (0x0001cc6a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd438,	// (0x0001cc6a) linegrid_cam4_burst_pane_g1

0x6b28,	// (0x0001635a) linegrid_cam4_burst_pane_g2_ParamLimits

0x6b28,	// (0x0001635a) linegrid_cam4_burst_pane_g2

0xd445,	// (0x0001cc77) linegrid_cam4_burst_pane_g3_ParamLimits

0xd445,	// (0x0001cc77) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001f273) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001f273) linegrid_cam4_burst_pane_g

0x6b39,	// (0x0001636b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b39,	// (0x0001636b) linegrid_cam4_burst_pane_g3_copy1

0xd452,	// (0x0001cc84) linegrid_cam4_burst_pane_g4_ParamLimits

0xd452,	// (0x0001cc84) linegrid_cam4_burst_pane_g4

0x6b57,	// (0x00016389) linegrid_cam4_burst_pane_g5_ParamLimits

0x6b57,	// (0x00016389) linegrid_cam4_burst_pane_g5

0x6b68,	// (0x0001639a) linegrid_cam4_burst_pane_g6_ParamLimits

0x6b68,	// (0x0001639a) linegrid_cam4_burst_pane_g6

0xd45f,	// (0x0001cc91) linegrid_cam4_burst_pane_g7_ParamLimits

0xd45f,	// (0x0001cc91) linegrid_cam4_burst_pane_g7

0x6b7f,	// (0x000163b1) cell_cam4_burst_pane_g1

0xd478,	// (0x0001ccaa) main_cam5_pane_t1_ParamLimits

0xd478,	// (0x0001ccaa) main_cam5_pane_t1

0xd48a,	// (0x0001ccbc) main_cam5_pane_t2_ParamLimits

0xd48a,	// (0x0001ccbc) main_cam5_pane_t2

0xd49c,	// (0x0001ccce) main_cam5_pane_t3_ParamLimits

0xd49c,	// (0x0001ccce) main_cam5_pane_t3

0xd4ae,	// (0x0001cce0) main_cam5_pane_t4_ParamLimits

0xd4ae,	// (0x0001cce0) main_cam5_pane_t4

0xd4c6,	// (0x0001ccf8) main_cam5_pane_t5_ParamLimits

0xd4c6,	// (0x0001ccf8) main_cam5_pane_t5

0xd4da,	// (0x0001cd0c) main_cam5_pane_t6_ParamLimits

0xd4da,	// (0x0001cd0c) main_cam5_pane_t6

0xd4ee,	// (0x0001cd20) main_cam5_pane_t7_ParamLimits

0xd4ee,	// (0x0001cd20) main_cam5_pane_t7

0xd500,	// (0x0001cd32) main_cam5_pane_t8_ParamLimits

0xd500,	// (0x0001cd32) main_cam5_pane_t8

0xd51e,	// (0x0001cd50) main_cam5_pane_t9_ParamLimits

0xd51e,	// (0x0001cd50) main_cam5_pane_t9

0xd530,	// (0x0001cd62) main_cam5_pane_t10_ParamLimits

0xd530,	// (0x0001cd62) main_cam5_pane_t10

0xd542,	// (0x0001cd74) main_cam5_pane_t11_ParamLimits

0xd542,	// (0x0001cd74) main_cam5_pane_t11

0xd556,	// (0x0001cd88) main_cam5_pane_t12_ParamLimits

0xd556,	// (0x0001cd88) main_cam5_pane_t12

0xd56d,	// (0x0001cd9f) main_cam5_pane_t13_ParamLimits

0xd56d,	// (0x0001cd9f) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001f27f) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001f27f) main_cam5_pane_t

0xfdd3,	// (0x0000f605) popup_scut_keymap_window_ParamLimits

0xfdd3,	// (0x0000f605) popup_scut_keymap_window

0x6b92,	// (0x000163c4) aid_size_cell_brow_shortcut

0x9f04,	// (0x00019736) bg_popup_window_pane_cp010

0x6b9e,	// (0x000163d0) grid_scut_pane

0x6baa,	// (0x000163dc) cell_scut_pane_ParamLimits

0x6baa,	// (0x000163dc) cell_scut_pane

0x6bc3,	// (0x000163f5) cell_scut_pane_g1

0xd590,	// (0x0001cdc2) cell_scut_pane_t1

0xd59f,	// (0x0001cdd1) cell_scut_pane_t2

0x6bcc,	// (0x000163fe) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001f29a) cell_scut_pane_t

0x472e,	// (0x00013f60) main_mup3_pane_g8_ParamLimits

0x472e,	// (0x00013f60) main_mup3_pane_g8

0x5c38,	// (0x0001546a) area_vitu2_query_pane_ParamLimits

0x5c38,	// (0x0001546a) area_vitu2_query_pane

0x68ff,	// (0x00016131) input_focus_pane_cp08

0xd5ae,	// (0x0001cde0) area_vitu2_query_pane_g1

0x6bda,	// (0x0001640c) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001f2a1) area_vitu2_query_pane_g

0x6beb,	// (0x0001641d) area_vitu2_query_pane_t1_ParamLimits

0x6beb,	// (0x0001641d) area_vitu2_query_pane_t1

0x6bff,	// (0x00016431) area_vitu2_query_pane_t2_ParamLimits

0x6bff,	// (0x00016431) area_vitu2_query_pane_t2

0x6c13,	// (0x00016445) area_vitu2_query_pane_t3_ParamLimits

0x6c13,	// (0x00016445) area_vitu2_query_pane_t3

0xd5ba,	// (0x0001cdec) area_vitu2_query_pane_t4_ParamLimits

0xd5ba,	// (0x0001cdec) area_vitu2_query_pane_t4

0xd5e2,	// (0x0001ce14) area_vitu2_query_pane_t5_ParamLimits

0xd5e2,	// (0x0001ce14) area_vitu2_query_pane_t5

0xd60a,	// (0x0001ce3c) area_vitu2_query_pane_t6_ParamLimits

0xd60a,	// (0x0001ce3c) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001f2a6) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001f2a6) area_vitu2_query_pane_t

0x6c3b,	// (0x0001646d) bg_button_pane_cp018

0x6c49,	// (0x0001647b) bg_button_pane_cp021

0x6c55,	// (0x00016487) bg_button_pane_cp022

0x6c66,	// (0x00016498) input_focus_pane_cp09

0x2597,	// (0x00011dc9) aid_size_touch_mv_arrow_left

0x25c0,	// (0x00011df2) aid_size_touch_mv_arrow_right

0x63a4,	// (0x00015bd6) main_cset_slider_pane_g16_ParamLimits

0x63a4,	// (0x00015bd6) main_cset_slider_pane_g16

0x63b2,	// (0x00015be4) main_cset_slider_pane_g17_ParamLimits

0x63b2,	// (0x00015be4) main_cset_slider_pane_g17

0x6b7f,	// (0x000163b1) cell_cam4_burst_pane_g1_ParamLimits

0x9514,	// (0x00018d46) compa_mode_pane

0x65cc,	// (0x00015dfe) popup_vtel_slider_window_g3_ParamLimits

0x65cc,	// (0x00015dfe) popup_vtel_slider_window_g3

0x65e3,	// (0x00015e15) popup_vtel_slider_window_g4_ParamLimits

0x65e3,	// (0x00015e15) popup_vtel_slider_window_g4

0x65fa,	// (0x00015e2c) popup_vtel_slider_window_t1_ParamLimits

0x65fa,	// (0x00015e2c) popup_vtel_slider_window_t1

0x9514,	// (0x00018d46) main_cl_pane

0xbdce,	// (0x0001b600) popup_imed_adjust2_window_ParamLimits

0xbda2,	// (0x0001b5d4) bg_tb_trans_pane_cp05_ParamLimits

0xc7b8,	// (0x0001bfea) popup_imed_adjust2_window_g1_ParamLimits

0xc7c7,	// (0x0001bff9) popup_imed_adjust2_window_g2_ParamLimits

0xc7c7,	// (0x0001bff9) popup_imed_adjust2_window_g2

0xc7d3,	// (0x0001c005) popup_imed_adjust2_window_g3_ParamLimits

0xc7d3,	// (0x0001c005) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001f011) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001f011) popup_imed_adjust2_window_g

0xc7df,	// (0x0001c011) popup_imed_adjust2_window_t1_ParamLimits

0xc7f7,	// (0x0001c029) slider_imed_adjust_pane_ParamLimits

0xc80b,	// (0x0001c03d) slider_imed_adjust_pane_g1_ParamLimits

0xc81b,	// (0x0001c04d) slider_imed_adjust_pane_g2_ParamLimits

0xc82b,	// (0x0001c05d) slider_imed_adjust_pane_g3_ParamLimits

0xc83c,	// (0x0001c06e) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001f018) slider_imed_adjust_pane_g_ParamLimits

0x59b8,	// (0x000151ea) aid_touch_area_cam4_ParamLimits

0x59b8,	// (0x000151ea) aid_touch_area_cam4

0xcef5,	// (0x0001c727) battery_pane_cp01

0x5a8a,	// (0x000152bc) main_camera4_pane_g6_ParamLimits

0x5a8a,	// (0x000152bc) main_camera4_pane_g6

0x5ab4,	// (0x000152e6) main_camera4_pane_t2_ParamLimits

0x5ab4,	// (0x000152e6) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001f11b) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001f11b) main_camera4_pane_t

0x5ae9,	// (0x0001531b) aid_touch_area_vid4_ParamLimits

0x5ae9,	// (0x0001531b) aid_touch_area_vid4

0x5b3d,	// (0x0001536f) main_video4_pane_g5_ParamLimits

0x5b3d,	// (0x0001536f) main_video4_pane_g5

0x5b62,	// (0x00015394) vid4_progress_pane_ParamLimits

0x5b62,	// (0x00015394) vid4_progress_pane

0xd1ad,	// (0x0001c9df) main_cset_slider_pane_g18_ParamLimits

0xd1ad,	// (0x0001c9df) main_cset_slider_pane_g18

0xd46c,	// (0x0001cc9e) cell_cam4_burst_pane_g2_ParamLimits

0xd46c,	// (0x0001cc9e) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001f27a) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001f27a) cell_cam4_burst_pane_g

0x9cd8,	// (0x0001950a) bg_cl_pane_ParamLimits

0x9cd8,	// (0x0001950a) bg_cl_pane

0x6c77,	// (0x000164a9) cl_header_pane_ParamLimits

0x6c77,	// (0x000164a9) cl_header_pane

0x6c8b,	// (0x000164bd) cl_listscroll_pane_ParamLimits

0x6c8b,	// (0x000164bd) cl_listscroll_pane

0xd656,	// (0x0001ce88) bg_cl_pane_g1

0xd65e,	// (0x0001ce90) bg_cl_pane_g2

0xd666,	// (0x0001ce98) bg_cl_pane_g3

0xd66e,	// (0x0001cea0) bg_cl_pane_g4

0xd676,	// (0x0001cea8) bg_cl_pane_g5

0xd67e,	// (0x0001ceb0) bg_cl_pane_g6

0xd686,	// (0x0001ceb8) bg_cl_pane_g7

0xd68e,	// (0x0001cec0) bg_cl_pane_g8

0xd696,	// (0x0001cec8) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001f2b5) bg_cl_pane_g

0x6c9b,	// (0x000164cd) aid_height_cl_leading_ParamLimits

0x6c9b,	// (0x000164cd) aid_height_cl_leading

0x6ca7,	// (0x000164d9) aid_height_cl_text_ParamLimits

0x6ca7,	// (0x000164d9) aid_height_cl_text

0x9575,	// (0x00018da7) bg_cl_header_pane_ParamLimits

0x9575,	// (0x00018da7) bg_cl_header_pane

0x6cc6,	// (0x000164f8) cl_header_pane_g1_ParamLimits

0x6cc6,	// (0x000164f8) cl_header_pane_g1

0x6cdc,	// (0x0001650e) cl_header_pane_t1_ParamLimits

0x6cdc,	// (0x0001650e) cl_header_pane_t1

0xd69e,	// (0x0001ced0) cl_list_pane

0xd180,	// (0x0001c9b2) hc_scroll_pane_cp01

0xa14b,	// (0x0001997d) bg_cl_header_pane_g1

0xd062,	// (0x0001c894) bg_cl_header_pane_g2

0xa16b,	// (0x0001999d) bg_cl_header_pane_g3

0xd072,	// (0x0001c8a4) bg_cl_header_pane_g4

0xd06a,	// (0x0001c89c) bg_cl_header_pane_g5

0xd34f,	// (0x0001cb81) bg_cl_header_pane_g6

0xd08a,	// (0x0001c8bc) bg_cl_header_pane_g7

0xd092,	// (0x0001c8c4) bg_cl_header_pane_g8

0xd082,	// (0x0001c8b4) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001f2c8) bg_cl_header_pane_g

0x6cf5,	// (0x00016527) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6cf5,	// (0x00016527) hc_cl_list_double_graphic_heading_pane

0x6d08,	// (0x0001653a) hc_cl_list_single_graphic_pane_ParamLimits

0x6d08,	// (0x0001653a) hc_cl_list_single_graphic_pane

0x6d20,	// (0x00016552) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d20,	// (0x00016552) hc_cl_list_single_graphic_pane_g1

0x6d2c,	// (0x0001655e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d2c,	// (0x0001655e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001f2db) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001f2db) hc_cl_list_single_graphic_pane_g

0x6d40,	// (0x00016572) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6d40,	// (0x00016572) hc_cl_list_single_graphic_pane_t1

0x6d20,	// (0x00016552) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d20,	// (0x00016552) hc_cl_list_double_graphic_heading_pane_g1

0x6d55,	// (0x00016587) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6d55,	// (0x00016587) hc_cl_list_double_graphic_heading_pane_g2

0x6d69,	// (0x0001659b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6d69,	// (0x0001659b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001f2e0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001f2e0) hc_cl_list_double_graphic_heading_pane_g

0x6d7d,	// (0x000165af) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d7d,	// (0x000165af) hc_cl_list_double_graphic_heading_pane_t1

0x6d92,	// (0x000165c4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d92,	// (0x000165c4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001f2e7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001f2e7) hc_cl_list_double_graphic_heading_pane_t

0x6da7,	// (0x000165d9) vid4_progress_pane_g1

0x6db9,	// (0x000165eb) vid4_progress_pane_g2

0xab04,	// (0x0001a336) vid4_progress_pane_g3

0xd6af,	// (0x0001cee1) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001f2ec) vid4_progress_pane_g

0xd6cd,	// (0x0001ceff) vid4_progress_pane_t1

0xd6e2,	// (0x0001cf14) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001f2f7) vid4_progress_pane_t

0xd70d,	// (0x0001cf3f) wait_bar_pane_cp07

0xc09c,	// (0x0001b8ce) blid_firmament_pane_ParamLimits

0xc0df,	// (0x0001b911) popup_blid_sat_info2_window_g1

0xc103,	// (0x0001b935) popup_blid_sat_info2_window_t3

0xc111,	// (0x0001b943) popup_blid_sat_info2_window_t4

0xc11f,	// (0x0001b951) popup_blid_sat_info2_window_t5

0xc12d,	// (0x0001b95f) popup_blid_sat_info2_window_t6

0xc13d,	// (0x0001b96f) popup_blid_sat_info2_window_t7

0xc14b,	// (0x0001b97d) popup_blid_sat_info2_window_t8

0xc159,	// (0x0001b98b) popup_blid_sat_info2_window_t9

0xc167,	// (0x0001b999) popup_blid_sat_info2_window_t10

0xc22f,	// (0x0001ba61) aid_firma_cardinal_ParamLimits

0xc243,	// (0x0001ba75) blid_firmament_pane_t1_ParamLimits

0xc25a,	// (0x0001ba8c) blid_firmament_pane_t2_ParamLimits

0xc271,	// (0x0001baa3) blid_firmament_pane_t3_ParamLimits

0xc288,	// (0x0001baba) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0001ef05) blid_firmament_pane_t_ParamLimits

0xc29f,	// (0x0001bad1) blid_sat_info_pane_ParamLimits

0x9575,	// (0x00018da7) main_cam_set_pane_ParamLimits

0x500f,	// (0x00014841) aid_size_cell_colour_35_ParamLimits

0x502f,	// (0x00014861) aid_size_cell_colour_112_ParamLimits

0x504f,	// (0x00014881) aid_size_cell_effect_ParamLimits

0xbda2,	// (0x0001b5d4) bg_tb_trans_pane_cp02_ParamLimits

0xa3d2,	// (0x00019c04) heading_imed_pane_ParamLimits

0x506f,	// (0x000148a1) listscroll_imed_pane_ParamLimits

0xb3c4,	// (0x0001abf6) popup_call2_audio_first_window_g5_ParamLimits

0xb3c4,	// (0x0001abf6) popup_call2_audio_first_window_g5

0x5620,	// (0x00014e52) aid_size_touch_image3_arrow_left_ParamLimits

0x5620,	// (0x00014e52) aid_size_touch_image3_arrow_left

0x564c,	// (0x00014e7e) aid_size_touch_image3_arrow_right_ParamLimits

0x564c,	// (0x00014e7e) aid_size_touch_image3_arrow_right

0xd6f8,	// (0x0001cf2a) vid4_progress_pane_t3

0x538e,	// (0x00014bc0) main_hwr_training_symbol_option_pane_ParamLimits

0x538e,	// (0x00014bc0) main_hwr_training_symbol_option_pane

0xcaa7,	// (0x0001c2d9) popup_hwr_training_preview_window_ParamLimits

0xcaa7,	// (0x0001c2d9) popup_hwr_training_preview_window

0x53ae,	// (0x00014be0) hwr_training_navi_pane_g5_ParamLimits

0x53ae,	// (0x00014be0) hwr_training_navi_pane_g5

0xd03e,	// (0x0001c870) popup_char_count_window

0x9575,	// (0x00018da7) bg_popup_sub_pane_cp20_ParamLimits

0x6710,	// (0x00015f42) list_vitu2_match_list_pane_ParamLimits

0x671f,	// (0x00015f51) vitu2_page_scroll_pane_ParamLimits

0x671f,	// (0x00015f51) vitu2_page_scroll_pane

0xd743,	// (0x0001cf75) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd743,	// (0x0001cf75) list_single_hwr_training_symbol_option_pane

0xd756,	// (0x0001cf88) list_single_hwr_training_symbol_option_pane_g1

0xd75e,	// (0x0001cf90) list_single_hwr_training_symbol_option_pane_t1

0xd76c,	// (0x0001cf9e) bg_button_pane_cp023

0xd775,	// (0x0001cfa7) bg_button_pane_cp024

0x6dfa,	// (0x0001662c) vitu2_page_scroll_pane_g1

0x6e02,	// (0x00016634) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001f2fe) vitu2_page_scroll_pane_g

0x6e0c,	// (0x0001663e) vitu2_page_scroll_pane_t1

0xd7a8,	// (0x0001cfda) popup_char_count_window_g1

0xd7b1,	// (0x0001cfe3) popup_char_count_window_g2

0xd7ba,	// (0x0001cfec) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001f303) popup_char_count_window_g

0xd7c3,	// (0x0001cff5) popup_char_count_window_t1

0x9514,	// (0x00018d46) main_vded2_pane

0xc7a4,	// (0x0001bfd6) aid_size_cell_imed_line

0xc7ae,	// (0x0001bfe0) grid_imed_line_width_pane

0xcfaf,	// (0x0001c7e1) vid4_indicators_pane_g4

0xd7d1,	// (0x0001d003) cell_imed_line_width_pane_ParamLimits

0xd7d1,	// (0x0001d003) cell_imed_line_width_pane

0xd7e7,	// (0x0001d019) cell_imed_line_width_pane_g1

0xd7f0,	// (0x0001d022) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001f30a) cell_imed_line_width_pane_g

0x6e1b,	// (0x0001664d) main_vded2_pane_g1_ParamLimits

0x6e1b,	// (0x0001664d) main_vded2_pane_g1

0x6e36,	// (0x00016668) main_vded2_pane_g2_ParamLimits

0x6e36,	// (0x00016668) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001f30f) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001f30f) main_vded2_pane_g

0x6e48,	// (0x0001667a) vded2_slider_pane_ParamLimits

0x6e48,	// (0x0001667a) vded2_slider_pane

0x6e58,	// (0x0001668a) aid_size_touch_vded2_end

0x6e62,	// (0x00016694) aid_size_touch_vded2_playhead

0xd7f8,	// (0x0001d02a) aid_size_touch_vded2_start

0xd800,	// (0x0001d032) vded2_slider_bg_pane

0xd809,	// (0x0001d03b) vded2_slider_pane_g1

0xd812,	// (0x0001d044) vded2_slider_pane_g2

0x6e6c,	// (0x0001669e) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001f314) vded2_slider_pane_g

0xd2d5,	// (0x0001cb07) vded2_slider_bg_pane_g1

0xd2de,	// (0x0001cb10) vded2_slider_bg_pane_g2

0xd2e7,	// (0x0001cb19) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001f31b) vded2_slider_bg_pane_g

0x2c84,	// (0x000124b6) aid_postcard_touch_down_pane_ParamLimits

0x2c84,	// (0x000124b6) aid_postcard_touch_down_pane

0x2c9c,	// (0x000124ce) aid_postcard_touch_up_pane_ParamLimits

0x2c9c,	// (0x000124ce) aid_postcard_touch_up_pane

0x9514,	// (0x00018d46) main_blid2_pane

0xbdb0,	// (0x0001b5e2) popup_blid2_search_window

0x9514,	// (0x00018d46) blid2_gps_pane

0x9514,	// (0x00018d46) blid2_navig_pane

0x9514,	// (0x00018d46) blid2_search_pane

0x9514,	// (0x00018d46) blid2_tripm_pane

0x6e77,	// (0x000166a9) blid2_search_pane_g1_ParamLimits

0x6e77,	// (0x000166a9) blid2_search_pane_g1

0x6e8a,	// (0x000166bc) blid2_search_pane_t1_ParamLimits

0x6e8a,	// (0x000166bc) blid2_search_pane_t1

0x6e9c,	// (0x000166ce) aid_size_cell_blid2_gps_ParamLimits

0x6e9c,	// (0x000166ce) aid_size_cell_blid2_gps

0x6eb4,	// (0x000166e6) blid2_gps_pane_g1_ParamLimits

0x6eb4,	// (0x000166e6) blid2_gps_pane_g1

0x6ec8,	// (0x000166fa) grid_blid2_satellite_pane_ParamLimits

0x6ec8,	// (0x000166fa) grid_blid2_satellite_pane

0x6ee0,	// (0x00016712) blid2_navig_pane_g1_ParamLimits

0x6ee0,	// (0x00016712) blid2_navig_pane_g1

0x6eec,	// (0x0001671e) blid2_navig_pane_t1_ParamLimits

0x6eec,	// (0x0001671e) blid2_navig_pane_t1

0x6f07,	// (0x00016739) blid2_navig_pane_t2_ParamLimits

0x6f07,	// (0x00016739) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001f322) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001f322) blid2_navig_pane_t

0x6f22,	// (0x00016754) blid2_navig_ring_pane_ParamLimits

0x6f22,	// (0x00016754) blid2_navig_ring_pane

0x6f3d,	// (0x0001676f) blid2_speed_pane_ParamLimits

0x6f3d,	// (0x0001676f) blid2_speed_pane

0x6f49,	// (0x0001677b) blid2_tripm_pane_g1_ParamLimits

0x6f49,	// (0x0001677b) blid2_tripm_pane_g1

0x6f64,	// (0x00016796) blid2_tripm_pane_g2_ParamLimits

0x6f64,	// (0x00016796) blid2_tripm_pane_g2

0x6f78,	// (0x000167aa) blid2_tripm_pane_g3_ParamLimits

0x6f78,	// (0x000167aa) blid2_tripm_pane_g3

0x6f8c,	// (0x000167be) blid2_tripm_pane_g4_ParamLimits

0x6f8c,	// (0x000167be) blid2_tripm_pane_g4

0x6fa0,	// (0x000167d2) blid2_tripm_pane_g5_ParamLimits

0x6fa0,	// (0x000167d2) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001f327) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001f327) blid2_tripm_pane_g

0x6fc6,	// (0x000167f8) blid2_tripm_pane_t1_ParamLimits

0x6fc6,	// (0x000167f8) blid2_tripm_pane_t1

0x6fdf,	// (0x00016811) blid2_tripm_pane_t2_ParamLimits

0x6fdf,	// (0x00016811) blid2_tripm_pane_t2

0x6ff8,	// (0x0001682a) blid2_tripm_pane_t3_ParamLimits

0x6ff8,	// (0x0001682a) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001f334) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001f334) blid2_tripm_pane_t

0x703f,	// (0x00016871) cell_blid2_satellite_pane_ParamLimits

0x703f,	// (0x00016871) cell_blid2_satellite_pane

0x705d,	// (0x0001688f) cell_blid2_satellite_pane_g1

0xd81a,	// (0x0001d04c) cell_blid2_satellite_pane_t1

0xc2af,	// (0x0001bae1) blid2_speed_pane_g1

0xd828,	// (0x0001d05a) blid2_speed_pane_t1

0xd836,	// (0x0001d068) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001f33d) blid2_speed_pane_t

0xc2af,	// (0x0001bae1) blid2_navig_ring_pane_g1

0x7066,	// (0x00016898) blid2_navig_ring_pane_g2

0x706e,	// (0x000168a0) blid2_navig_ring_pane_g3

0x7076,	// (0x000168a8) blid2_navig_ring_pane_g4

0x707e,	// (0x000168b0) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001f342) blid2_navig_ring_pane_g

0x9514,	// (0x00018d46) bg_popup_window_pane_cp011

0xd844,	// (0x0001d076) popup_blid2_search_window_g1

0xd84c,	// (0x0001d07e) popup_blid2_search_window_t1

0xd85a,	// (0x0001d08c) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001f34d) popup_blid2_search_window_t

0xa05a,	// (0x0001988c) main_browser_pane_g1

0x9cd8,	// (0x0001950a) main_browser_pane_ParamLimits

0x9575,	// (0x00018da7) bg_button_pane_cp011_ParamLimits

0x5f6a,	// (0x0001579c) cell_vitu2_function_pane_g1_ParamLimits

0xbda2,	// (0x0001b5d4) bg_popup_sub_pane_cp22_ParamLimits

0x68ff,	// (0x00016131) input_focus_pane_cp08_ParamLimits

0x6916,	// (0x00016148) popup_vitu2_query_button_pane_ParamLimits

0x6916,	// (0x00016148) popup_vitu2_query_button_pane

0x6927,	// (0x00016159) popup_vitu2_query_input_button_pane

0xd3b6,	// (0x0001cbe8) popup_vitu2_query_window_g1_ParamLimits

0x6931,	// (0x00016163) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001f24e) popup_vitu2_query_window_g_ParamLimits

0x9514,	// (0x00018d46) bg_button_pane_cp026

0x7086,	// (0x000168b8) popup_vitu2_query_input_button_pane_g1

0x9514,	// (0x00018d46) bg_button_pane_cp025

0xd868,	// (0x0001d09a) popup_vitu2_query_button_pane_t1

0x43a8,	// (0x00013bda) main_mp3_pane_t6

0x43b6,	// (0x00013be8) popup_slider_window_cp01

0xcf13,	// (0x0001c745) cam4_battery_pane

0xcf68,	// (0x0001c79a) cam4_battery_pane_cp02

0xd6a7,	// (0x0001ced9) cam4_battery_pane_cp01

0xd6a7,	// (0x0001ced9) cam4_battery_pane_cp03

0xc2af,	// (0x0001bae1) cam4_battery_pane_g1

0xd876,	// (0x0001d0a8) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001f352) cam4_battery_pane_g

0xc175,	// (0x0001b9a7) popup_blid_sat_info2_window_t11

0x2597,	// (0x00011dc9) aid_size_touch_mv_arrow_left_ParamLimits

0x25c0,	// (0x00011df2) aid_size_touch_mv_arrow_right_ParamLimits

0xa841,	// (0x0001a073) navi_pane_g1_ParamLimits

0x25ff,	// (0x00011e31) navi_pane_g2_ParamLimits

0x262d,	// (0x00011e5f) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001ec17) navi_pane_g_ParamLimits

0x2687,	// (0x00011eb9) navi_pane_mv_t1_ParamLimits

0x507b,	// (0x000148ad) grid_imed_effect_pane_ParamLimits

0x1041,	// (0x00010873) aid_placing_vt_slider_lsc

0x9fa5,	// (0x000197d7) aid_placing_vt_slider_prt

0x9575,	// (0x00018da7) bg_tb_trans_pane_cp01_ParamLimits

0xc3ff,	// (0x0001bc31) popup_image_details_window_g1_ParamLimits

0xc412,	// (0x0001bc44) popup_image_details_window_g2_ParamLimits

0xc427,	// (0x0001bc59) popup_image_details_window_g3_ParamLimits

0xc427,	// (0x0001bc59) popup_image_details_window_g3

0xf718,	// (0x0001ef4a) popup_image_details_window_g_ParamLimits

0xc43b,	// (0x0001bc6d) popup_image_details_window_t1_ParamLimits

0xc44d,	// (0x0001bc7f) popup_image_details_window_t2_ParamLimits

0xc466,	// (0x0001bc98) popup_image_details_window_t3_ParamLimits

0xc47a,	// (0x0001bcac) popup_image_details_window_t4_ParamLimits

0xc495,	// (0x0001bcc7) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0001ef51) popup_image_details_window_t_ParamLimits

0x6cb3,	// (0x000164e5) cl_header_name_pane_ParamLimits

0x6cb3,	// (0x000164e5) cl_header_name_pane

0x708e,	// (0x000168c0) cl_header_name_pane_t1_ParamLimits

0x708e,	// (0x000168c0) cl_header_name_pane_t1

0x70af,	// (0x000168e1) cl_header_name_pane_t2_ParamLimits

0x70af,	// (0x000168e1) cl_header_name_pane_t2

0x70f1,	// (0x00016923) cl_header_name_pane_t3_ParamLimits

0x70f1,	// (0x00016923) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001f357) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001f357) cl_header_name_pane_t

0x2658,	// (0x00011e8a) navi_pane_mv_g2_ParamLimits

0xcffb,	// (0x0001c82d) field_vitu2_entry_pane_g1_ParamLimits

0xd007,	// (0x0001c839) field_vitu2_entry_pane_g2_ParamLimits

0xd013,	// (0x0001c845) field_vitu2_entry_pane_g3_ParamLimits

0xd013,	// (0x0001c845) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001f14d) field_vitu2_entry_pane_g_ParamLimits

0xd046,	// (0x0001c878) cell_vitu2_itu_pane_g1_ParamLimits

0x5e12,	// (0x00015644) cell_vitu2_itu_pane_g2_ParamLimits

0x5e12,	// (0x00015644) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001f159) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001f159) cell_vitu2_itu_pane_g

0x9575,	// (0x00018da7) bg_vkb2_func_pane_cp05_ParamLimits

0x9575,	// (0x00018da7) bg_vkb2_func_pane_cp05

0x9575,	// (0x00018da7) bg_vkb2_func_pane_cp03

0x9575,	// (0x00018da7) bg_vkb2_func_pane_cp04

0x9575,	// (0x00018da7) bg_vkb2_func_pane_cp10_ParamLimits

0x9575,	// (0x00018da7) bg_vkb2_func_pane_cp10

0x6c55,	// (0x00016487) bg_vkb2_func_pane_cp08

0x6c3b,	// (0x0001646d) bg_vkb2_func_pane_cp06

0x6c49,	// (0x0001647b) bg_vkb2_func_pane_cp07

0xd77e,	// (0x0001cfb0) bg_vkb2_func_pane_cp11_ParamLimits

0xd77e,	// (0x0001cfb0) bg_vkb2_func_pane_cp11

0xd793,	// (0x0001cfc5) bg_vkb2_func_pane_cp12_ParamLimits

0xd793,	// (0x0001cfc5) bg_vkb2_func_pane_cp12

0x9514,	// (0x00018d46) bg_vkb2_func_pane_cp09

0xd062,	// (0x0001c894) bg_vkb2_func_pane_g1

0xa16b,	// (0x0001999d) bg_vkb2_func_pane_g2

0xd06a,	// (0x0001c89c) bg_vkb2_func_pane_g3

0xd072,	// (0x0001c8a4) bg_vkb2_func_pane_g4

0xd34f,	// (0x0001cb81) bg_vkb2_func_pane_g5

0xd08a,	// (0x0001c8bc) bg_vkb2_func_pane_g6

0xd092,	// (0x0001c8c4) bg_vkb2_func_pane_g7

0xd082,	// (0x0001c8b4) bg_vkb2_func_pane_g8

0xa14b,	// (0x0001997d) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001f35e) bg_vkb2_func_pane_g

0x6fb4,	// (0x000167e6) blid2_tripm_pane_g6_ParamLimits

0x6fb4,	// (0x000167e6) blid2_tripm_pane_g6

0xcd96,	// (0x0001c5c8) mp4_progress_pane_g1

0x702b,	// (0x0001685d) blid2_tripm_values_pane_ParamLimits

0x702b,	// (0x0001685d) blid2_tripm_values_pane

0x7122,	// (0x00016954) blid2_tripm_values_pane_t1

0x7130,	// (0x00016962) blid2_tripm_values_pane_t2

0x713e,	// (0x00016970) blid2_tripm_values_pane_t3

0x714c,	// (0x0001697e) blid2_tripm_values_pane_t4

0x715a,	// (0x0001698c) blid2_tripm_values_pane_t5

0x7168,	// (0x0001699a) blid2_tripm_values_pane_t6

0x7176,	// (0x000169a8) blid2_tripm_values_pane_t7

0x7184,	// (0x000169b6) blid2_tripm_values_pane_t8

0x7192,	// (0x000169c4) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001f371) blid2_tripm_values_pane_t

0x107e,	// (0x000108b0) call_video_pane_t1_ParamLimits

0x1098,	// (0x000108ca) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001eaa0) call_video_pane_t_ParamLimits

0x2bd1,	// (0x00012403) msg_header_pane_g1_ParamLimits

0xaa7e,	// (0x0001a2b0) msg_header_pane_g2_ParamLimits

0xaa7e,	// (0x0001a2b0) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001ecba) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001ecba) msg_header_pane_g

0x9cd8,	// (0x0001950a) main_clock2_pane_ParamLimits

0x4d62,	// (0x00014594) grid_clock2_toolbar_pane_ParamLimits

0x4d62,	// (0x00014594) grid_clock2_toolbar_pane

0x4d62,	// (0x00014594) listscroll_clock2_pane_ParamLimits

0x4d62,	// (0x00014594) listscroll_clock2_pane

0x4e59,	// (0x0001468b) main_clock2_pane_t3_ParamLimits

0x4e59,	// (0x0001468b) main_clock2_pane_t3

0x4e7d,	// (0x000146af) main_clock2_pane_t4_ParamLimits

0x4e7d,	// (0x000146af) main_clock2_pane_t4

0xd880,	// (0x0001d0b2) cell_clock2_toolbar_pane

0xd888,	// (0x0001d0ba) cell_clock2_toolbar_pane_cp01

0xd888,	// (0x0001d0ba) cell_clock2_toolbar_pane_cp02

0xd890,	// (0x0001d0c2) cell_clock2_toolbar_pane_cp03

0xd898,	// (0x0001d0ca) list_clock2_pane

0xa7a7,	// (0x00019fd9) scroll_pane_cp10

0xd8a0,	// (0x0001d0d2) list_single_clock2_pane_ParamLimits

0xd8a0,	// (0x0001d0d2) list_single_clock2_pane

0x9f04,	// (0x00019736) list_highlight_pane_cp08

0xd8ad,	// (0x0001d0df) list_single_clock2_pane_t1

0xd8bb,	// (0x0001d0ed) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001f384) list_single_clock2_pane_t

0x9514,	// (0x00018d46) bg_button_pane_cp10

0xd8c9,	// (0x0001d0fb) cell_clock2_toolbar_pane_g1

0x2c10,	// (0x00012442) aid_main_viewer_pane_g1_ParamLimits

0x2c10,	// (0x00012442) aid_main_viewer_pane_g1

0x2c1e,	// (0x00012450) aid_main_viewer_pane_g2_ParamLimits

0x2c1e,	// (0x00012450) aid_main_viewer_pane_g2

0x2c2c,	// (0x0001245e) aid_main_viewer_pane_g3_ParamLimits

0x2c2c,	// (0x0001245e) aid_main_viewer_pane_g3

0x2c3b,	// (0x0001246d) aid_main_viewer_pane_g4_ParamLimits

0x2c3b,	// (0x0001246d) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001eccb) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001eccb) aid_main_viewer_pane_g

0x358e,	// (0x00012dc0) main_calc_pane_ParamLimits

0x35a2,	// (0x00012dd4) main_dialer2_pane_ParamLimits

0x9514,	// (0x00018d46) main_cam6_pane

0x9514,	// (0x00018d46) main_vid6_pane

0x4d6e,	// (0x000145a0) listscroll_gen_pane_cp06_ParamLimits

0x4d6e,	// (0x000145a0) listscroll_gen_pane_cp06

0x4ea0,	// (0x000146d2) main_clock2_pane_t5_ParamLimits

0x4ea0,	// (0x000146d2) main_clock2_pane_t5

0x4f00,	// (0x00014732) aid_call2_pane_cp10_ParamLimits

0x4f12,	// (0x00014744) aid_call_pane_cp10_ParamLimits

0xa816,	// (0x0001a048) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa816,	// (0x0001a048) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f24,	// (0x00014756) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f24,	// (0x00014756) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa816,	// (0x0001a048) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001f006) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f3a,	// (0x0001476c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x55cd,	// (0x00014dff) cell_dialer2_keypad_pane_g2_ParamLimits

0x55cd,	// (0x00014dff) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001f0ec) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001f0ec) cell_dialer2_keypad_pane_g

0x55e9,	// (0x00014e1b) cell_dialer2_keypad_pane_t1

0x6295,	// (0x00015ac7) main_cset_text2_pane_ParamLimits

0x6295,	// (0x00015ac7) main_cset_text2_pane

0xd5ae,	// (0x0001cde0) area_vitu2_query_pane_g1_ParamLimits

0x6bda,	// (0x0001640c) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001f2a1) area_vitu2_query_pane_g_ParamLimits

0xd632,	// (0x0001ce64) area_vitu2_query_pane_t7_ParamLimits

0xd632,	// (0x0001ce64) area_vitu2_query_pane_t7

0x6c3b,	// (0x0001646d) bg_button_pane_cp018_ParamLimits

0x6c49,	// (0x0001647b) bg_button_pane_cp021_ParamLimits

0x6c55,	// (0x00016487) bg_button_pane_cp022_ParamLimits

0x6c55,	// (0x00016487) bg_vkb2_func_pane_cp08_ParamLimits

0x6c3b,	// (0x0001646d) bg_vkb2_func_pane_cp06_ParamLimits

0x6c49,	// (0x0001647b) bg_vkb2_func_pane_cp07_ParamLimits

0x6c66,	// (0x00016498) input_focus_pane_cp09_ParamLimits

0xd8d1,	// (0x0001d103) cam6_autofocus_pane_ParamLimits

0xd8d1,	// (0x0001d103) cam6_autofocus_pane

0x71a0,	// (0x000169d2) cam6_image_uncrop_pane_ParamLimits

0x71a0,	// (0x000169d2) cam6_image_uncrop_pane

0x71af,	// (0x000169e1) cam6_indi_pane_ParamLimits

0x71af,	// (0x000169e1) cam6_indi_pane

0x71c5,	// (0x000169f7) cam6_mode_pane_ParamLimits

0x71c5,	// (0x000169f7) cam6_mode_pane

0x71d7,	// (0x00016a09) cam6_timer_pane_ParamLimits

0x71d7,	// (0x00016a09) cam6_timer_pane

0x71e3,	// (0x00016a15) cam6_zoom_pane_ParamLimits

0x71e3,	// (0x00016a15) cam6_zoom_pane

0x71f1,	// (0x00016a23) cam6_mode_pane_g1_ParamLimits

0x71f1,	// (0x00016a23) cam6_mode_pane_g1

0x7201,	// (0x00016a33) cam6_mode_pane_g2_ParamLimits

0x7201,	// (0x00016a33) cam6_mode_pane_g2

0x7211,	// (0x00016a43) cam6_mode_pane_g3_ParamLimits

0x7211,	// (0x00016a43) cam6_mode_pane_g3

0x7221,	// (0x00016a53) cam6_mode_pane_g4_ParamLimits

0x7221,	// (0x00016a53) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001f389) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001f389) cam6_mode_pane_g

0xd2f0,	// (0x0001cb22) bg_tb_trans_pane_cp08_ParamLimits

0xd2f0,	// (0x0001cb22) bg_tb_trans_pane_cp08

0xd8df,	// (0x0001d111) cam6_battery_pane_ParamLimits

0xd8df,	// (0x0001d111) cam6_battery_pane

0xd8f5,	// (0x0001d127) cam6_indi_pane_g1_ParamLimits

0xd8f5,	// (0x0001d127) cam6_indi_pane_g1

0xd907,	// (0x0001d139) cam6_indi_pane_g2_ParamLimits

0xd907,	// (0x0001d139) cam6_indi_pane_g2

0xd919,	// (0x0001d14b) cam6_indi_pane_g3_ParamLimits

0xd919,	// (0x0001d14b) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001f392) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001f392) cam6_indi_pane_g

0xd92b,	// (0x0001d15d) cam6_indi_pane_t1_ParamLimits

0xd92b,	// (0x0001d15d) cam6_indi_pane_t1

0x5baa,	// (0x000153dc) cam6_autofocus_pane_g1

0x5bb2,	// (0x000153e4) cam6_autofocus_pane_g2

0x5bba,	// (0x000153ec) cam6_autofocus_pane_g3

0x5bc2,	// (0x000153f4) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001f399) cam6_autofocus_pane_g

0xd951,	// (0x0001d183) cam6_timer_pane_g1

0xd959,	// (0x0001d18b) cam6_timer_pane_t1

0xd967,	// (0x0001d199) cam6_zoom_cont_pane

0xd96f,	// (0x0001d1a1) cam6_zoom_pane_g1

0xd977,	// (0x0001d1a9) cam6_zoom_pane_g2

0x7231,	// (0x00016a63) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001f3a2) cam6_zoom_pane_g

0xc2af,	// (0x0001bae1) cam6_battery_pane_g1

0xc2af,	// (0x0001bae1) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0001ef0e) cam6_battery_pane_g

0xd97f,	// (0x0001d1b1) cam6_zoom_cont_pane_g1

0xd988,	// (0x0001d1ba) cam6_zoom_cont_pane_g2

0xd991,	// (0x0001d1c3) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001f3a9) cam6_zoom_cont_pane_g

0x724e,	// (0x00016a80) cam6_mode_pane_cp_ParamLimits

0x724e,	// (0x00016a80) cam6_mode_pane_cp

0x71e3,	// (0x00016a15) cam6_zoom_pane_cp_ParamLimits

0x71e3,	// (0x00016a15) cam6_zoom_pane_cp

0x7260,	// (0x00016a92) vid6_image_uncrop_cif_pane_ParamLimits

0x7260,	// (0x00016a92) vid6_image_uncrop_cif_pane

0x7270,	// (0x00016aa2) vid6_image_uncrop_nhd_pane_ParamLimits

0x7270,	// (0x00016aa2) vid6_image_uncrop_nhd_pane

0x71a0,	// (0x000169d2) vid6_image_uncrop_vga_pane_ParamLimits

0x71a0,	// (0x000169d2) vid6_image_uncrop_vga_pane

0x727f,	// (0x00016ab1) vid6_image_uncrop_wvga_pane_ParamLimits

0x727f,	// (0x00016ab1) vid6_image_uncrop_wvga_pane

0x728e,	// (0x00016ac0) vid6_indi_pane_ParamLimits

0x728e,	// (0x00016ac0) vid6_indi_pane

0xd2f0,	// (0x0001cb22) bg_tb_trans_pane_cp09_ParamLimits

0xd2f0,	// (0x0001cb22) bg_tb_trans_pane_cp09

0xd9a9,	// (0x0001d1db) cam6_battery_pane_cp_ParamLimits

0xd9a9,	// (0x0001d1db) cam6_battery_pane_cp

0xd9b5,	// (0x0001d1e7) vid6_indi_pane_g1_ParamLimits

0xd9b5,	// (0x0001d1e7) vid6_indi_pane_g1

0xd9c7,	// (0x0001d1f9) vid6_indi_pane_g2_ParamLimits

0xd9c7,	// (0x0001d1f9) vid6_indi_pane_g2

0xd9d9,	// (0x0001d20b) vid6_indi_pane_g3_ParamLimits

0xd9d9,	// (0x0001d20b) vid6_indi_pane_g3

0xd9f0,	// (0x0001d222) vid6_indi_pane_g4_ParamLimits

0xd9f0,	// (0x0001d222) vid6_indi_pane_g4

0xda07,	// (0x0001d239) vid6_indi_pane_g5_ParamLimits

0xda07,	// (0x0001d239) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001f3b0) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001f3b0) vid6_indi_pane_g

0xda21,	// (0x0001d253) vid6_indi_pane_t1_ParamLimits

0xda21,	// (0x0001d253) vid6_indi_pane_t1

0xda37,	// (0x0001d269) vid6_indi_pane_t2_ParamLimits

0xda37,	// (0x0001d269) vid6_indi_pane_t2

0xda5f,	// (0x0001d291) vid6_indi_pane_t3_ParamLimits

0xda5f,	// (0x0001d291) vid6_indi_pane_t3

0xda87,	// (0x0001d2b9) vid6_indi_pane_t4_ParamLimits

0xda87,	// (0x0001d2b9) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001f3bb) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001f3bb) vid6_indi_pane_t

0xdaab,	// (0x0001d2dd) wait_bar_pane_cp08

0x72a6,	// (0x00016ad8) main_cset_text2_pane_t1_ParamLimits

0x72a6,	// (0x00016ad8) main_cset_text2_pane_t1

0x7239,	// (0x00016a6b) listscroll_gen_pane_cp06_t1_ParamLimits

0x7239,	// (0x00016a6b) listscroll_gen_pane_cp06_t1

0x9514,	// (0x00018d46) main_cam6_set_pane

0xc4df,	// (0x0001bd11) bg_tb_trans_pane_cp06_ParamLimits

0xcf1b,	// (0x0001c74d) cam4_indicators_pane_g1_ParamLimits

0xcf2c,	// (0x0001c75e) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001f129) cam4_indicators_pane_g_ParamLimits

0xcf44,	// (0x0001c776) cam4_indicators_pane_t1_ParamLimits

0x9575,	// (0x00018da7) bg_tb_trans_pane_cp07_ParamLimits

0xcf72,	// (0x0001c7a4) vid4_indicators_pane_g1_ParamLimits

0xcf88,	// (0x0001c7ba) vid4_indicators_pane_g2_ParamLimits

0xcf9c,	// (0x0001c7ce) vid4_indicators_pane_g3_ParamLimits

0xcfaf,	// (0x0001c7e1) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001f13b) vid4_indicators_pane_g_ParamLimits

0xcfcd,	// (0x0001c7ff) vid4_indicators_pane_t1_ParamLimits

0x6da7,	// (0x000165d9) vid4_progress_pane_g1_ParamLimits

0x6db9,	// (0x000165eb) vid4_progress_pane_g2_ParamLimits

0xab04,	// (0x0001a336) vid4_progress_pane_g3_ParamLimits

0xd6af,	// (0x0001cee1) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001f2ec) vid4_progress_pane_g_ParamLimits

0xd6cd,	// (0x0001ceff) vid4_progress_pane_t1_ParamLimits

0xd6e2,	// (0x0001cf14) vid4_progress_pane_t2_ParamLimits

0xd6f8,	// (0x0001cf2a) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001f2f7) vid4_progress_pane_t_ParamLimits

0xd70d,	// (0x0001cf3f) wait_bar_pane_cp07_ParamLimits

0x72c4,	// (0x00016af6) main_cam6_set_pane_g2_ParamLimits

0x72c4,	// (0x00016af6) main_cam6_set_pane_g2

0x72ea,	// (0x00016b1c) main_cset6_listscroll_pane_ParamLimits

0x72ea,	// (0x00016b1c) main_cset6_listscroll_pane

0x7308,	// (0x00016b3a) main_cset6_slider_pane_ParamLimits

0x7308,	// (0x00016b3a) main_cset6_slider_pane

0x731e,	// (0x00016b50) main_cset6_text2_pane_ParamLimits

0x731e,	// (0x00016b50) main_cset6_text2_pane

0xdaba,	// (0x0001d2ec) main_cset6_text_pane

0xdac2,	// (0x0001d2f4) main_cset_list_pane_copy1_ParamLimits

0xdac2,	// (0x0001d2f4) main_cset_list_pane_copy1

0xdad2,	// (0x0001d304) scroll_pane_cp028_copy1

0x2143,	// (0x00011975) cset_list_set_pane_copy1

0x732c,	// (0x00016b5e) aid_position_infowindow_above_copy1

0x7334,	// (0x00016b66) aid_position_infowindow_below_copy1

0x733c,	// (0x00016b6e) cset_list_set_pane_g1_copy1

0x7344,	// (0x00016b76) cset_list_set_pane_g3_copy1_ParamLimits

0x7344,	// (0x00016b76) cset_list_set_pane_g3_copy1

0x7353,	// (0x00016b85) cset_list_set_pane_t1_copy1_ParamLimits

0x7353,	// (0x00016b85) cset_list_set_pane_t1_copy1

0x9575,	// (0x00018da7) list_highlight_pane_cp021_copy1_ParamLimits

0x9575,	// (0x00018da7) list_highlight_pane_cp021_copy1

0xdadb,	// (0x0001d30d) cset6_slider_pane_ParamLimits

0xdadb,	// (0x0001d30d) cset6_slider_pane

0xdb07,	// (0x0001d339) main_cset6_slider_pane_g1_ParamLimits

0xdb07,	// (0x0001d339) main_cset6_slider_pane_g1

0x7368,	// (0x00016b9a) main_cset6_slider_pane_g2_ParamLimits

0x7368,	// (0x00016b9a) main_cset6_slider_pane_g2

0xdb2f,	// (0x0001d361) main_cset6_slider_pane_g3_ParamLimits

0xdb2f,	// (0x0001d361) main_cset6_slider_pane_g3

0x7390,	// (0x00016bc2) main_cset6_slider_pane_g4_ParamLimits

0x7390,	// (0x00016bc2) main_cset6_slider_pane_g4

0x739c,	// (0x00016bce) main_cset6_slider_pane_g5_ParamLimits

0x739c,	// (0x00016bce) main_cset6_slider_pane_g5

0xd195,	// (0x0001c9c7) main_cset6_slider_pane_g7_ParamLimits

0xd195,	// (0x0001c9c7) main_cset6_slider_pane_g7

0xd1a1,	// (0x0001c9d3) main_cset6_slider_pane_g8_ParamLimits

0xd1a1,	// (0x0001c9d3) main_cset6_slider_pane_g8

0x6344,	// (0x00015b76) main_cset6_slider_pane_g9_ParamLimits

0x6344,	// (0x00015b76) main_cset6_slider_pane_g9

0x6350,	// (0x00015b82) main_cset6_slider_pane_g10_ParamLimits

0x6350,	// (0x00015b82) main_cset6_slider_pane_g10

0x635c,	// (0x00015b8e) main_cset6_slider_pane_g11_ParamLimits

0x635c,	// (0x00015b8e) main_cset6_slider_pane_g11

0x6368,	// (0x00015b9a) main_cset6_slider_pane_g12_ParamLimits

0x6368,	// (0x00015b9a) main_cset6_slider_pane_g12

0x6374,	// (0x00015ba6) main_cset6_slider_pane_g13_ParamLimits

0x6374,	// (0x00015ba6) main_cset6_slider_pane_g13

0x6380,	// (0x00015bb2) main_cset6_slider_pane_g14_ParamLimits

0x6380,	// (0x00015bb2) main_cset6_slider_pane_g14

0x73aa,	// (0x00016bdc) main_cset6_slider_pane_g15_ParamLimits

0x73aa,	// (0x00016bdc) main_cset6_slider_pane_g15

0x63a4,	// (0x00015bd6) main_cset6_slider_pane_g16_ParamLimits

0x63a4,	// (0x00015bd6) main_cset6_slider_pane_g16

0x63b2,	// (0x00015be4) main_cset6_slider_pane_g17_ParamLimits

0x63b2,	// (0x00015be4) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001f3c4) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001f3c4) main_cset6_slider_pane_g

0xdb3b,	// (0x0001d36d) main_cset6_slider_pane_t1_ParamLimits

0xdb3b,	// (0x0001d36d) main_cset6_slider_pane_t1

0x73da,	// (0x00016c0c) main_cset6_slider_pane_t2_ParamLimits

0x73da,	// (0x00016c0c) main_cset6_slider_pane_t2

0x7405,	// (0x00016c37) main_cset6_slider_pane_t3_ParamLimits

0x7405,	// (0x00016c37) main_cset6_slider_pane_t3

0x7430,	// (0x00016c62) main_cset6_slider_pane_t4_ParamLimits

0x7430,	// (0x00016c62) main_cset6_slider_pane_t4

0x745b,	// (0x00016c8d) main_cset6_slider_pane_t5_ParamLimits

0x745b,	// (0x00016c8d) main_cset6_slider_pane_t5

0xdb7c,	// (0x0001d3ae) main_cset6_slider_pane_t7_ParamLimits

0xdb7c,	// (0x0001d3ae) main_cset6_slider_pane_t7

0x7488,	// (0x00016cba) main_cset6_slider_pane_t8_ParamLimits

0x7488,	// (0x00016cba) main_cset6_slider_pane_t8

0x74ac,	// (0x00016cde) main_cset6_slider_pane_t9_ParamLimits

0x74ac,	// (0x00016cde) main_cset6_slider_pane_t9

0x74d0,	// (0x00016d02) main_cset6_slider_pane_t10_ParamLimits

0x74d0,	// (0x00016d02) main_cset6_slider_pane_t10

0x74f4,	// (0x00016d26) main_cset6_slider_pane_t11_ParamLimits

0x74f4,	// (0x00016d26) main_cset6_slider_pane_t11

0xdbb2,	// (0x0001d3e4) main_cset6_slider_pane_t14_ParamLimits

0xdbb2,	// (0x0001d3e4) main_cset6_slider_pane_t14

0xdbeb,	// (0x0001d41d) main_cset6_slider_pane_t15_ParamLimits

0xdbeb,	// (0x0001d41d) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001f3e9) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001f3e9) main_cset6_slider_pane_t

0xd279,	// (0x0001caab) cset_slider_pane_g1_copy1

0xd282,	// (0x0001cab4) cset_slider_pane_g2_copy1

0xd28b,	// (0x0001cabd) cset_slider_pane_g3_copy1

0x9514,	// (0x00018d46) bg_popup_sub_pane_cp011_copy1

0xdc24,	// (0x0001d456) main_cset_text_pane_g1_copy1

0xd3ca,	// (0x0001cbfc) main_cset_text_pane_t1_copy1

0xd3d8,	// (0x0001cc0a) main_cset_text_pane_t2_copy1

0xd3e6,	// (0x0001cc18) main_cset_text_pane_t3_copy1

0xd3f4,	// (0x0001cc26) main_cset_text_pane_t4_copy1

0xd402,	// (0x0001cc34) main_cset_text_pane_t5_copy1

0xdc2c,	// (0x0001d45e) main_cset_text_pane_t6_copy1

0xdc3a,	// (0x0001d46c) main_cset_text_pane_t7_copy1

0x72a6,	// (0x00016ad8) main_cset_text2_pane_t1_copy1

0x9575,	// (0x00018da7) main_ncimui_pane

0x3830,	// (0x00013062) popup_query_ncimui_window_ParamLimits

0x3830,	// (0x00013062) popup_query_ncimui_window

0xc544,	// (0x0001bd76) field_cale_ev2_pane_g4_ParamLimits

0xc544,	// (0x0001bd76) field_cale_ev2_pane_g4

0x549f,	// (0x00014cd1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x549f,	// (0x00014cd1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001f0c7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001f0c7) cell_video_dialer_keypad_pane_g

0x54b7,	// (0x00014ce9) cell_video_dialer_keypad_pane_t1

0x9514,	// (0x00018d46) bg_popup_window_pane_cp012

0xa693,	// (0x00019ec5) heading_pane_cp06

0xdc66,	// (0x0001d498) ncim_query_content_pane

0x9514,	// (0x00018d46) bg_popup_heading_pane_cp01

0xdc6e,	// (0x0001d4a0) ncim_heading_pane_t1

0xdc7c,	// (0x0001d4ae) ncim_indicator_popup_pane

0xdc8e,	// (0x0001d4c0) ncim_query_button_pane

0xdca4,	// (0x0001d4d6) ncim_query_content_pane_t1

0xdcb6,	// (0x0001d4e8) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001f42d) ncim_query_content_pane_t

0xdcf0,	// (0x0001d522) ncim_query_list_pane

0xdd02,	// (0x0001d534) ncim_query_popup_pane

0xdc7c,	// (0x0001d4ae) ncim_indicator_popup_pane_ParamLimits

0x770f,	// (0x00016f41) ncim_query_content_pane_g1_ParamLimits

0x770f,	// (0x00016f41) ncim_query_content_pane_g1

0xdca4,	// (0x0001d4d6) ncim_query_content_pane_t1_ParamLimits

0xdcb6,	// (0x0001d4e8) ncim_query_content_pane_t2_ParamLimits

0x771b,	// (0x00016f4d) ncim_query_content_pane_t3_ParamLimits

0x771b,	// (0x00016f4d) ncim_query_content_pane_t3

0x7743,	// (0x00016f75) ncim_query_content_pane_t4_ParamLimits

0x7743,	// (0x00016f75) ncim_query_content_pane_t4

0x776b,	// (0x00016f9d) ncim_query_content_pane_t5_ParamLimits

0x776b,	// (0x00016f9d) ncim_query_content_pane_t5

0xdcc8,	// (0x0001d4fa) ncim_query_content_pane_t6_ParamLimits

0xdcc8,	// (0x0001d4fa) ncim_query_content_pane_t6

0xfbfb,	// (0x0001f42d) ncim_query_content_pane_t_ParamLimits

0xdcf0,	// (0x0001d522) ncim_query_list_pane_ParamLimits

0xdd02,	// (0x0001d534) ncim_query_popup_pane_ParamLimits

0xdd16,	// (0x0001d548) wait_bar_pane_cp04

0x9514,	// (0x00018d46) input_focus_pane_cp011

0xdd1e,	// (0x0001d550) ncim_query_popup_pane_t1

0xdd2c,	// (0x0001d55e) ncim_list_query_list_pane_ParamLimits

0xdd2c,	// (0x0001d55e) ncim_list_query_list_pane

0x9514,	// (0x00018d46) bg_button_pane_cp027

0xdd3f,	// (0x0001d571) ncim_query_button_pane_g1

0x9514,	// (0x00018d46) list_highlight_pane_cp012

0xdd49,	// (0x0001d57b) ncim_list_query_list_pane_g1

0xdd51,	// (0x0001d583) ncim_list_query_list_pane_t1

0xcf38,	// (0x0001c76a) cam4_indicators_pane_g3_ParamLimits

0xcf38,	// (0x0001c76a) cam4_indicators_pane_g3

0xcfbb,	// (0x0001c7ed) vid4_indicators_pane_g5_ParamLimits

0xcfbb,	// (0x0001c7ed) vid4_indicators_pane_g5

0xd6be,	// (0x0001cef0) vid4_progress_pane_g5_ParamLimits

0xd6be,	// (0x0001cef0) vid4_progress_pane_g5

0x75fd,	// (0x00016e2f) main_ncimui_pane_g1

0x7663,	// (0x00016e95) ncimui_group_query_pane_ParamLimits

0x7663,	// (0x00016e95) ncimui_group_query_pane

0x76ab,	// (0x00016edd) ncimui_list_pane_ParamLimits

0x76ab,	// (0x00016edd) ncimui_list_pane

0x76d2,	// (0x00016f04) ncimui_text_pane_ParamLimits

0x76d2,	// (0x00016f04) ncimui_text_pane

0x7793,	// (0x00016fc5) ncimui_text_pane_t1_ParamLimits

0x7793,	// (0x00016fc5) ncimui_text_pane_t1

0xdd5f,	// (0x0001d591) ncimui_list_single_graphic_pane_ParamLimits

0xdd5f,	// (0x0001d591) ncimui_list_single_graphic_pane

0x77b1,	// (0x00016fe3) ncimui_query_pane_ParamLimits

0x77b1,	// (0x00016fe3) ncimui_query_pane

0x9514,	// (0x00018d46) list_highlight_pane_cp013

0xdd6f,	// (0x0001d5a1) ncim_list_query_list_pane_t1_copy1

0xdd49,	// (0x0001d57b) ncim_list_single_graphic_pane_g1

0xdd7d,	// (0x0001d5af) ncim_query_button_pane_cp01

0xdd89,	// (0x0001d5bb) ncim_query_entry_pane_ParamLimits

0xdd89,	// (0x0001d5bb) ncim_query_entry_pane

0xdd9c,	// (0x0001d5ce) ncimui_query_pane_g1

0xdda8,	// (0x0001d5da) ncimui_query_pane_t1_ParamLimits

0xdda8,	// (0x0001d5da) ncimui_query_pane_t1

0x9575,	// (0x00018da7) input_focus_pane_cp012

0xddc1,	// (0x0001d5f3) ncim_query_entry_pane_t1

0x9cd8,	// (0x0001950a) main_im_pane_ParamLimits

0x9575,	// (0x00018da7) main_mobtv_pane_ParamLimits

0x9575,	// (0x00018da7) main_mobtv_pane

0x73c2,	// (0x00016bf4) main_cset6_slider_pane_g18_ParamLimits

0x73c2,	// (0x00016bf4) main_cset6_slider_pane_g18

0x73ce,	// (0x00016c00) main_cset6_slider_pane_g19_ParamLimits

0x73ce,	// (0x00016c00) main_cset6_slider_pane_g19

0xd2fe,	// (0x0001cb30) bg_main_mobtv_pane_ParamLimits

0xd2fe,	// (0x0001cb30) bg_main_mobtv_pane

0x77c4,	// (0x00016ff6) main_mobtv_info_pane

0x77cf,	// (0x00017001) main_mobtv_loading_pane_ParamLimits

0x77cf,	// (0x00017001) main_mobtv_loading_pane

0xddd3,	// (0x0001d605) main_mobtv_pg_channel_list_pane

0xdddd,	// (0x0001d60f) main_mobtv_pg_hdr_pane

0x77dc,	// (0x0001700e) main_mobtv_programe_curr_pane_ParamLimits

0x77dc,	// (0x0001700e) main_mobtv_programe_curr_pane

0x77e9,	// (0x0001701b) main_mobtv_programe_next_pane_ParamLimits

0x77e9,	// (0x0001701b) main_mobtv_programe_next_pane

0xdde6,	// (0x0001d618) popup_mobtv_noti_window

0xc2af,	// (0x0001bae1) main_tv_pg_hdr_pane_g1

0xddf0,	// (0x0001d622) main_tv_pg_hdr_pane_g2

0xddf8,	// (0x0001d62a) main_tv_pg_hdr_pane_g3

0xde00,	// (0x0001d632) main_tv_pg_hdr_pane_g4

0xde08,	// (0x0001d63a) main_tv_pg_hdr_pane_g5

0xde12,	// (0x0001d644) main_tv_pg_hdr_pane_g6

0xde1c,	// (0x0001d64e) main_tv_pg_hdr_pane_g7

0xde26,	// (0x0001d658) main_tv_pg_hdr_pane_g8

0xde30,	// (0x0001d662) main_tv_pg_hdr_pane_g9

0xde3a,	// (0x0001d66c) main_tv_pg_hdr_pane_g10

0xde44,	// (0x0001d676) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001f43a) main_tv_pg_hdr_pane_g

0xde4e,	// (0x0001d680) main_tv_pg_hdr_pane_t1

0xde5c,	// (0x0001d68e) main_tv_pg_hdr_pane_t2

0xde6a,	// (0x0001d69c) main_tv_pg_hdr_pane_t3

0xde7a,	// (0x0001d6ac) main_tv_pg_hdr_pane_t4

0xde8a,	// (0x0001d6bc) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001f451) main_tv_pg_hdr_pane_t

0xde9a,	// (0x0001d6cc) single_mobtv_pg_channel_pane_ParamLimits

0xde9a,	// (0x0001d6cc) single_mobtv_pg_channel_pane

0xdeac,	// (0x0001d6de) single_mobtv_pg_channel_table_pane

0xdeb5,	// (0x0001d6e7) single_mobtv_pg_channel_thumb_pane

0xdebe,	// (0x0001d6f0) single_tv_pg_channel_pane_g1

0xdec7,	// (0x0001d6f9) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001f45c) single_tv_pg_channel_pane_g

0xc4df,	// (0x0001bd11) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc4df,	// (0x0001bd11) bg_single_mobtv_pg_channel_thumb_pane

0xded0,	// (0x0001d702) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xded0,	// (0x0001d702) single_mobtv_pg_channel_thumb_pane_g1

0xdede,	// (0x0001d710) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdede,	// (0x0001d710) single_mobtv_pg_channel_thumb_pane_g2

0xdeea,	// (0x0001d71c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdeea,	// (0x0001d71c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001f461) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001f461) single_mobtv_pg_channel_thumb_pane_g

0xdef6,	// (0x0001d728) single_mobtv_pg_channel_thumb_pane_t1

0xdf04,	// (0x0001d736) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001f468) single_mobtv_pg_channel_thumb_pane_t

0xc2af,	// (0x0001bae1) bg_single_mobtv_pg_channel_table_pane_g1

0xc2af,	// (0x0001bae1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0001ef0e) bg_single_mobtv_pg_channel_table_pane_g

0xdf12,	// (0x0001d744) single_mobtv_pg_channel_table_pane_t1

0xdf20,	// (0x0001d752) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001f46d) single_mobtv_pg_channel_table_pane_t

0x77fe,	// (0x00017030) main_mobtv_info_pane_g1_ParamLimits

0x77fe,	// (0x00017030) main_mobtv_info_pane_g1

0x781c,	// (0x0001704e) main_mobtv_info_pane_t1_ParamLimits

0x781c,	// (0x0001704e) main_mobtv_info_pane_t1

0x7894,	// (0x000170c6) main_mobtv_info_pane_t2_ParamLimits

0x7894,	// (0x000170c6) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001f477) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001f477) main_mobtv_info_pane_t

0x7923,	// (0x00017155) wait_bar_pane_cp05

0x7935,	// (0x00017167) main_mobtv_loading_pane_g1_ParamLimits

0x7935,	// (0x00017167) main_mobtv_loading_pane_g1

0x7946,	// (0x00017178) main_mobtv_loading_pane_g2_ParamLimits

0x7946,	// (0x00017178) main_mobtv_loading_pane_g2

0x7952,	// (0x00017184) main_mobtv_loading_pane_g3_ParamLimits

0x7952,	// (0x00017184) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001f47e) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001f47e) main_mobtv_loading_pane_g

0xdf2e,	// (0x0001d760) main_mobtv_loading_pane_t1_ParamLimits

0xdf2e,	// (0x0001d760) main_mobtv_loading_pane_t1

0xdf46,	// (0x0001d778) main_mobtv_loading_pane_t2_ParamLimits

0xdf46,	// (0x0001d778) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001f485) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001f485) main_mobtv_loading_pane_t

0x7965,	// (0x00017197) wait_bar_pane_cp06_ParamLimits

0x7965,	// (0x00017197) wait_bar_pane_cp06

0xdf6a,	// (0x0001d79c) main_mobtv_programe_curr_pane_t1

0xdf78,	// (0x0001d7aa) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001f48a) main_mobtv_programe_curr_pane_t

0xdf86,	// (0x0001d7b8) main_mobtv_programe_next_pane_t1

0xdf94,	// (0x0001d7c6) main_mobtv_programe_next_pane_t2

0xdfa2,	// (0x0001d7d4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001f48f) main_mobtv_programe_next_pane_t

0x9514,	// (0x00018d46) bg_popup_mobtv_noti_window_pane

0xdfb0,	// (0x0001d7e2) popup_mobtv_noti_window_g1

0xdfb8,	// (0x0001d7ea) popup_mobtv_noti_window_t1

0xdfc6,	// (0x0001d7f8) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001f496) popup_mobtv_noti_window_t

0xc2af,	// (0x0001bae1) bg_popup_mobtv_noti_window_pane_g1

0x9514,	// (0x00018d46) sc_clock_pane

0x9514,	// (0x00018d46) main_fs_bigclock_pane

0x7015,	// (0x00016847) blid2_tripm_pane_t4_ParamLimits

0x7015,	// (0x00016847) blid2_tripm_pane_t4

0x7974,	// (0x000171a6) sc_clock_pane_g1_ParamLimits

0x7974,	// (0x000171a6) sc_clock_pane_g1

0x7986,	// (0x000171b8) sc_clock_pane_t1_ParamLimits

0x7986,	// (0x000171b8) sc_clock_pane_t1

0x79aa,	// (0x000171dc) sc_clock_pane_t2_ParamLimits

0x79aa,	// (0x000171dc) sc_clock_pane_t2

0x79c2,	// (0x000171f4) sc_clock_pane_t3_ParamLimits

0x79c2,	// (0x000171f4) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001f49b) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001f49b) sc_clock_pane_t

0x89b8,	// (0x000181ea) main_fs_bigclock_indicator_pane_ParamLimits

0x89b8,	// (0x000181ea) main_fs_bigclock_indicator_pane

0x7a7e,	// (0x000172b0) main_fs_bigclock_pane_g1_ParamLimits

0x7a7e,	// (0x000172b0) main_fs_bigclock_pane_g1

0x89c4,	// (0x000181f6) main_fs_bigclock_pane_t1_ParamLimits

0x89c4,	// (0x000181f6) main_fs_bigclock_pane_t1

0x89d6,	// (0x00018208) main_fs_bigclock_pane_t2_ParamLimits

0x89d6,	// (0x00018208) main_fs_bigclock_pane_t2

0x89ea,	// (0x0001821c) main_fs_bigclock_pane_t3_ParamLimits

0x89ea,	// (0x0001821c) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001f6a0) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001f6a0) main_fs_bigclock_pane_t

0xec12,	// (0x0001e444) main_fs_bigclock_indicator_pane_g1

0xdc96,	// (0x0001d4c8) ncim_query_content_pane_g2_ParamLimits

0xdc96,	// (0x0001d4c8) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001f428) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001f428) ncim_query_content_pane_g

0x79d9,	// (0x0001720b) sc_clock_pane_t4_ParamLimits

0x79d9,	// (0x0001720b) sc_clock_pane_t4

0x9575,	// (0x00018da7) main_radioblah_pane

0xce79,	// (0x0001c6ab) cell_call4_button_pane_t1_copy1_ParamLimits

0xce79,	// (0x0001c6ab) cell_call4_button_pane_t1_copy1

0x7615,	// (0x00016e47) main_ncimui_pane_t1_ParamLimits

0x7615,	// (0x00016e47) main_ncimui_pane_t1

0x762f,	// (0x00016e61) main_ncimui_pane_t2_ParamLimits

0x762f,	// (0x00016e61) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001f421) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001f421) main_ncimui_pane_t

0xe119,	// (0x0001d94b) main_radioblah_anim_pane_ParamLimits

0xe119,	// (0x0001d94b) main_radioblah_anim_pane

0xe12a,	// (0x0001d95c) main_radioblah_info_pane_ParamLimits

0xe12a,	// (0x0001d95c) main_radioblah_info_pane

0xe13e,	// (0x0001d970) main_radioblah_pane_t1_ParamLimits

0xe13e,	// (0x0001d970) main_radioblah_pane_t1

0xe15a,	// (0x0001d98c) main_radioblah_pane_t2_ParamLimits

0xe15a,	// (0x0001d98c) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001f4bc) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001f4bc) main_radioblah_pane_t

0x7adb,	// (0x0001730d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7adb,	// (0x0001730d) main_radioblah_rocker_ctrl_pane

0xe1a2,	// (0x0001d9d4) main_radioblah_info_pane_t1_ParamLimits

0xe1a2,	// (0x0001d9d4) main_radioblah_info_pane_t1

0x7b33,	// (0x00017365) main_radioblah_info_pane_t2_ParamLimits

0x7b33,	// (0x00017365) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001f4c5) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001f4c5) main_radioblah_info_pane_t

0xc2af,	// (0x0001bae1) main_radioblah_rocker_ctrl_pane_g1

0x7be3,	// (0x00017415) main_radioblah_rocker_ctrl_pane_g2

0x7beb,	// (0x0001741d) main_radioblah_rocker_ctrl_pane_g3

0x7bf3,	// (0x00017425) main_radioblah_rocker_ctrl_pane_g4

0x7bfb,	// (0x0001742d) main_radioblah_rocker_ctrl_pane_g5

0x7c03,	// (0x00017435) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001f4ce) main_radioblah_rocker_ctrl_pane_g

0x72a6,	// (0x00016ad8) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf09,	// (0x0001c73b) cam4_image_uncrop_qvga_pane

0xcf5e,	// (0x0001c790) vid4_image_uncrop_qcif_pane

0xd8d1,	// (0x0001d103) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8d1,	// (0x0001d103) cam6_image_uncrop_qvga_pane

0xd999,	// (0x0001d1cb) vid6_image_uncrop_qcif_pane_ParamLimits

0xd999,	// (0x0001d1cb) vid6_image_uncrop_qcif_pane

0x9514,	// (0x00018d46) bg_popup_preview_window_pane_cp03

0xdc48,	// (0x0001d47a) list_cset_text2_pane

0xdc50,	// (0x0001d482) main_cset6_text2_pane_g1

0xdc58,	// (0x0001d48a) main_cset6_text2_pane_t1

0x7c0b,	// (0x0001743d) list_cset_text2_pane_t1_ParamLimits

0x7c0b,	// (0x0001743d) list_cset_text2_pane_t1

0x9575,	// (0x00018da7) main_radioblah_pane_ParamLimits

0x790f,	// (0x00017141) main_mobtv_info_pane_t3_ParamLimits

0x790f,	// (0x00017141) main_mobtv_info_pane_t3

0x7ac9,	// (0x000172fb) main_radioblah_pane_g1

0x7b03,	// (0x00017335) main_radioblah_info_pane_g1

0x7b88,	// (0x000173ba) main_radioblah_info_pane_t3_ParamLimits

0x7b88,	// (0x000173ba) main_radioblah_info_pane_t3

0x2063,	// (0x00011895) highlight_cell_cale_month_pane_ParamLimits

0x2063,	// (0x00011895) highlight_cell_cale_month_pane

0x9514,	// (0x00018d46) main_phob_fisheye_pane

0xc5c7,	// (0x0001bdf9) scroll_pane_cp0031_ParamLimits

0xc5c7,	// (0x0001bdf9) scroll_pane_cp0031

0xdaab,	// (0x0001d2dd) wait_bar_pane_cp08_ParamLimits

0x2143,	// (0x00011975) cset_list_set_pane_copy1_ParamLimits

0xe1dc,	// (0x0001da0e) highlight_cell_cale_month_pane_g1

0x7c24,	// (0x00017456) highlight_cell_cale_month_pane_t1

0xd69e,	// (0x0001ced0) list_gen_pane_cp01

0xd180,	// (0x0001c9b2) scroll_pane_01

0x7c32,	// (0x00017464) list_single_double_fisheye_pane

0x7c3b,	// (0x0001746d) list_double_fisheye_pane_g1_ParamLimits

0x7c3b,	// (0x0001746d) list_double_fisheye_pane_g1

0x7c47,	// (0x00017479) list_double_fisheye_pane_g2_ParamLimits

0x7c47,	// (0x00017479) list_double_fisheye_pane_g2

0x7c5b,	// (0x0001748d) list_double_fisheye_pane_g3_ParamLimits

0x7c5b,	// (0x0001748d) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001f4db) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001f4db) list_double_fisheye_pane_g

0x7c84,	// (0x000174b6) list_double_fisheye_pane_t1_ParamLimits

0x7c84,	// (0x000174b6) list_double_fisheye_pane_t1

0x7c9f,	// (0x000174d1) list_double_fisheye_pane_t2_ParamLimits

0x7c9f,	// (0x000174d1) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001f4e6) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001f4e6) list_double_fisheye_pane_t

0x9514,	// (0x00018d46) main_call5_pane

0x7a04,	// (0x00017236) sc_swipe_pane_ParamLimits

0x7a04,	// (0x00017236) sc_swipe_pane

0x7cd4,	// (0x00017506) call5_image_pane_ParamLimits

0x7cd4,	// (0x00017506) call5_image_pane

0x7cf1,	// (0x00017523) call5_swipe_1_pane_ParamLimits

0x7cf1,	// (0x00017523) call5_swipe_1_pane

0x7d04,	// (0x00017536) call5_swipe_2_pane_ParamLimits

0x7d04,	// (0x00017536) call5_swipe_2_pane

0x7d31,	// (0x00017563) popup_call5_audio_first_window_ParamLimits

0x7d31,	// (0x00017563) popup_call5_audio_first_window

0xc4df,	// (0x0001bd11) call5_swipe_1_pane_g1_ParamLimits

0xc4df,	// (0x0001bd11) call5_swipe_1_pane_g1

0xe1e4,	// (0x0001da16) call5_swipe_1_pane_g2_ParamLimits

0xe1e4,	// (0x0001da16) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001f4eb) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001f4eb) call5_swipe_1_pane_g

0xe1f0,	// (0x0001da22) call5_swipe_1_pane_t1_ParamLimits

0xe1f0,	// (0x0001da22) call5_swipe_1_pane_t1

0xc4df,	// (0x0001bd11) call5_swipe_2_pane_g1_ParamLimits

0xc4df,	// (0x0001bd11) call5_swipe_2_pane_g1

0xe205,	// (0x0001da37) call5_swipe_2_pane_g2_ParamLimits

0xe205,	// (0x0001da37) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001f4f0) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001f4f0) call5_swipe_2_pane_g

0xe211,	// (0x0001da43) call5_swipe_2_pane_t1_ParamLimits

0xe211,	// (0x0001da43) call5_swipe_2_pane_t1

0xe226,	// (0x0001da58) sc_swipe_pane_g1_ParamLimits

0xe226,	// (0x0001da58) sc_swipe_pane_g1

0xe233,	// (0x0001da65) sc_swipe_pane_g2_ParamLimits

0xe233,	// (0x0001da65) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001f4f5) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001f4f5) sc_swipe_pane_g

0xe23f,	// (0x0001da71) sc_swipe_pane_t1_ParamLimits

0xe23f,	// (0x0001da71) sc_swipe_pane_t1

0x9514,	// (0x00018d46) main_cmail_launcher_pane

0x7d46,	// (0x00017578) aid_size_cell_cmail_l_ParamLimits

0x7d46,	// (0x00017578) aid_size_cell_cmail_l

0x7d60,	// (0x00017592) grid_cmail_l_pane_ParamLimits

0x7d60,	// (0x00017592) grid_cmail_l_pane

0x7d7b,	// (0x000175ad) cell_cmail_l_pane_ParamLimits

0x7d7b,	// (0x000175ad) cell_cmail_l_pane

0x7da3,	// (0x000175d5) cell_cmail_l_pane_g1_ParamLimits

0x7da3,	// (0x000175d5) cell_cmail_l_pane_g1

0x7daf,	// (0x000175e1) cell_cmail_l_pane_t1_ParamLimits

0x7daf,	// (0x000175e1) cell_cmail_l_pane_t1

0xe254,	// (0x0001da86) cell_cmail_l_pane_t2_ParamLimits

0xe254,	// (0x0001da86) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001f4fa) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001f4fa) cell_cmail_l_pane_t

0x9575,	// (0x00018da7) grid_highlight_pane_cp018_ParamLimits

0x9575,	// (0x00018da7) grid_highlight_pane_cp018

0xfcb5,	// (0x0000f4e7) main2_pane_ParamLimits

0xfcb5,	// (0x0000f4e7) main2_pane

0x9db1,	// (0x000195e3) popup_sp_fs_action_menu_bg_pane_g1

0x9db9,	// (0x000195eb) popup_sp_fs_action_menu_bg_pane_g2

0x9dc1,	// (0x000195f3) popup_sp_fs_action_menu_bg_pane_g3

0x9dc9,	// (0x000195fb) popup_sp_fs_action_menu_bg_pane_g4

0x9dd1,	// (0x00019603) popup_sp_fs_action_menu_bg_pane_g5

0x9dd9,	// (0x0001960b) popup_sp_fs_action_menu_bg_pane_g6

0x9de1,	// (0x00019613) popup_sp_fs_action_menu_bg_pane_g7

0x9de9,	// (0x0001961b) popup_sp_fs_action_menu_bg_pane_g8

0x9df1,	// (0x00019623) popup_sp_fs_action_menu_bg_pane_g9

0x9df9,	// (0x0001962b) popup_sp_fs_action_menu_bg_pane_g10

0x9df9,	// (0x0001962b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001e9bc) popup_sp_fs_action_menu_bg_pane_g

0xd327,	// (0x0001cb59) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x2_t3_g3_g1

0x0ed2,	// (0x00010704) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0ed2,	// (0x00010704) list_medium_line_x2_t3_g3_g2

0x0ede,	// (0x00010710) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0ede,	// (0x00010710) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001ea6a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001ea6a) list_medium_line_x2_t3_g3_g

0x0eea,	// (0x0001071c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0eea,	// (0x0001071c) list_medium_line_x2_t3_g3_t1

0x0eff,	// (0x00010731) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0eff,	// (0x00010731) list_medium_line_x2_t3_g3_t2

0x0f13,	// (0x00010745) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f13,	// (0x00010745) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001ea71) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001ea71) list_medium_line_x2_t3_g3_t

0xd327,	// (0x0001cb59) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x2_t3_g2_g1

0x0ede,	// (0x00010710) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0ede,	// (0x00010710) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001ea78) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001ea78) list_medium_line_x2_t3_g2_g

0x0f28,	// (0x0001075a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f28,	// (0x0001075a) list_medium_line_x2_t3_g2_t1

0x0f3e,	// (0x00010770) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f3e,	// (0x00010770) list_medium_line_x2_t3_g2_t2

0x0f50,	// (0x00010782) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0f50,	// (0x00010782) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001ea7d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001ea7d) list_medium_line_x2_t3_g2_t

0xd327,	// (0x0001cb59) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x2_t4_g4_g1

0x0f6e,	// (0x000107a0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0f6e,	// (0x000107a0) list_medium_line_x2_t4_g4_g2

0x0ed2,	// (0x00010704) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0ed2,	// (0x00010704) list_medium_line_x2_t4_g4_g3

0x0f7a,	// (0x000107ac) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0f7a,	// (0x000107ac) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001ea84) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001ea84) list_medium_line_x2_t4_g4_g

0x0f86,	// (0x000107b8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0f86,	// (0x000107b8) list_medium_line_x2_t4_g4_t1

0x0f9d,	// (0x000107cf) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0f9d,	// (0x000107cf) list_medium_line_x2_t4_g4_t2

0x0fb2,	// (0x000107e4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0fb2,	// (0x000107e4) list_medium_line_x2_t4_g4_t3

0x0fc4,	// (0x000107f6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0fc4,	// (0x000107f6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001ea8d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001ea8d) list_medium_line_x2_t4_g4_t

0xd327,	// (0x0001cb59) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x2_t2_g4_g1

0x0f6e,	// (0x000107a0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0f6e,	// (0x000107a0) list_medium_line_x2_t2_g4_g2

0x0ed2,	// (0x00010704) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0ed2,	// (0x00010704) list_medium_line_x2_t2_g4_g3

0x0ede,	// (0x00010710) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0ede,	// (0x00010710) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001eaf4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001eaf4) list_medium_line_x2_t2_g4_g

0x2089,	// (0x000118bb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2089,	// (0x000118bb) list_medium_line_x2_t2_g4_t1

0x0f13,	// (0x00010745) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f13,	// (0x00010745) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001eafd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001eafd) list_medium_line_x2_t2_g4_t

0xd327,	// (0x0001cb59) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x2_t2_g3_g1

0x0ed2,	// (0x00010704) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0ed2,	// (0x00010704) list_medium_line_x2_t2_g3_g2

0x0ede,	// (0x00010710) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0ede,	// (0x00010710) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001ea6a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001ea6a) list_medium_line_x2_t2_g3_g

0x209e,	// (0x000118d0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x209e,	// (0x000118d0) list_medium_line_x2_t2_g3_t1

0x0f13,	// (0x00010745) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f13,	// (0x00010745) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001eb02) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001eb02) list_medium_line_x2_t2_g3_t

0x21e8,	// (0x00011a1a) main_sp_fs_list_pane_ParamLimits

0x21e8,	// (0x00011a1a) main_sp_fs_list_pane

0x21f4,	// (0x00011a26) sp_fs_scroll_pane_ParamLimits

0x21f4,	// (0x00011a26) sp_fs_scroll_pane

0x2200,	// (0x00011a32) list_medium_line_x2_t3_t1

0x2210,	// (0x00011a42) list_medium_line_x2_t3_t2

0x221e,	// (0x00011a50) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001eb4d) list_medium_line_x2_t3_t

0x222c,	// (0x00011a5e) list_medium_line_x3_t4_t1

0x223c,	// (0x00011a6e) list_medium_line_x3_t4_t2

0x224a,	// (0x00011a7c) list_medium_line_x3_t4_t3

0x221e,	// (0x00011a50) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001eb54) list_medium_line_x3_t4_t

0x2258,	// (0x00011a8a) list_medium_line_x4_t5_t1

0x2268,	// (0x00011a9a) list_medium_line_x4_t5_t2

0x224a,	// (0x00011a7c) list_medium_line_x4_t5_t3

0x2276,	// (0x00011aa8) list_medium_line_x4_t5_t4

0x221e,	// (0x00011a50) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001eb5d) list_medium_line_x4_t5_t

0xd327,	// (0x0001cb59) list_medium_line_t4_g4_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_t4_g4_g1

0x0f7a,	// (0x000107ac) list_medium_line_t4_g4_g2_ParamLimits

0x0f7a,	// (0x000107ac) list_medium_line_t4_g4_g2

0x2284,	// (0x00011ab6) list_medium_line_t4_g4_g3_ParamLimits

0x2284,	// (0x00011ab6) list_medium_line_t4_g4_g3

0x0ede,	// (0x00010710) list_medium_line_t4_g4_g4_ParamLimits

0x0ede,	// (0x00010710) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001eb68) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001eb68) list_medium_line_t4_g4_g

0x2290,	// (0x00011ac2) list_medium_line_t4_g4_t1_ParamLimits

0x2290,	// (0x00011ac2) list_medium_line_t4_g4_t1

0x22a5,	// (0x00011ad7) list_medium_line_t4_g4_t2_ParamLimits

0x22a5,	// (0x00011ad7) list_medium_line_t4_g4_t2

0x22bb,	// (0x00011aed) list_medium_line_t4_g4_t3_ParamLimits

0x22bb,	// (0x00011aed) list_medium_line_t4_g4_t3

0x0f13,	// (0x00010745) list_medium_line_t4_g4_t4_ParamLimits

0x0f13,	// (0x00010745) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001eb71) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001eb71) list_medium_line_t4_g4_t

0x2397,	// (0x00011bc9) chi_dic_find_pane_g1

0x35b6,	// (0x00012de8) main_tport_pane

0xd2c7,	// (0x0001caf9) list_medium_line_plain_t1

0x672e,	// (0x00015f60) list_medium_line_t2_g2_g1_ParamLimits

0x672e,	// (0x00015f60) list_medium_line_t2_g2_g1

0xd377,	// (0x0001cba9) list_medium_line_t2_g2_g2_ParamLimits

0xd377,	// (0x0001cba9) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001f232) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001f232) list_medium_line_t2_g2_g

0x673a,	// (0x00015f6c) list_medium_line_t2_g2_t1_ParamLimits

0x673a,	// (0x00015f6c) list_medium_line_t2_g2_t1

0x6751,	// (0x00015f83) list_medium_line_t2_g2_t2_ParamLimits

0x6751,	// (0x00015f83) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001f237) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001f237) list_medium_line_t2_g2_t

0xd721,	// (0x0001cf53) aid_sp_fs_list_icon_a_sm

0xd729,	// (0x0001cf5b) aid_sp_fs_list_icon_d

0xd731,	// (0x0001cf63) aid_sp_fs_text_primary

0xd73a,	// (0x0001cf6c) aid_sp_fs_text_secondary

0x6dcb,	// (0x000165fd) list_medium_line

0x6dcb,	// (0x000165fd) list_medium_line_g2

0x6dcb,	// (0x000165fd) list_medium_line_g3

0x6dcb,	// (0x000165fd) list_medium_line_plain

0x6dcb,	// (0x000165fd) list_medium_line_plain_t2

0x6dcb,	// (0x000165fd) list_medium_line_plain_t3

0x6dcb,	// (0x000165fd) list_medium_line_right_icon

0x6dcb,	// (0x000165fd) list_medium_line_right_iconx2

0x6dcb,	// (0x000165fd) list_medium_line_t2

0x6dcb,	// (0x000165fd) list_medium_line_t2_g2

0x6dcb,	// (0x000165fd) list_medium_line_t2_g3

0x6dcb,	// (0x000165fd) list_medium_line_t2_right_icon

0x6dcb,	// (0x000165fd) list_medium_line_t2_right_iconx2

0x6dcb,	// (0x000165fd) list_medium_line_t3

0x6dcb,	// (0x000165fd) list_medium_line_t3_g2

0x6dcb,	// (0x000165fd) list_medium_line_t3_g3

0x6dcb,	// (0x000165fd) list_medium_line_t3_right_iconx2

0x6dd4,	// (0x00016606) list_medium_line_t4_g4

0x6dcb,	// (0x000165fd) list_medium_line_x2

0x6dcb,	// (0x000165fd) list_medium_line_x2_t2_g2

0x6dcb,	// (0x000165fd) list_medium_line_x2_t2_g3

0x6dcb,	// (0x000165fd) list_medium_line_x2_t2_g4

0x6dcb,	// (0x000165fd) list_medium_line_x2_t3

0x6dcb,	// (0x000165fd) list_medium_line_x2_t3_g2

0x6dcb,	// (0x000165fd) list_medium_line_x2_t3_g3

0x6dcb,	// (0x000165fd) list_medium_line_x2_t3_g4

0x6dcb,	// (0x000165fd) list_medium_line_x2_t4_g2

0x6dcb,	// (0x000165fd) list_medium_line_x2_t4_g4

0x6ddd,	// (0x0001660f) list_medium_line_x3

0x6ddd,	// (0x0001660f) list_medium_line_x3_t4

0x6ddd,	// (0x0001660f) list_medium_line_x3_t4_g4

0x6dd4,	// (0x00016606) list_medium_line_x4_t4

0x6dd4,	// (0x00016606) list_medium_line_x4_t4_g7

0x6dd4,	// (0x00016606) list_medium_line_x4_t5

0x6de6,	// (0x00016618) list_single_fs_dyc_pane_ParamLimits

0x6de6,	// (0x00016618) list_single_fs_dyc_pane

0xd327,	// (0x0001cb59) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x4_t4_g7_g1

0x751a,	// (0x00016d4c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x751a,	// (0x00016d4c) list_medium_line_x4_t4_g7_g2

0x7526,	// (0x00016d58) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7526,	// (0x00016d58) list_medium_line_x4_t4_g7_g3

0x7535,	// (0x00016d67) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7535,	// (0x00016d67) list_medium_line_x4_t4_g7_g4

0x7541,	// (0x00016d73) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7541,	// (0x00016d73) list_medium_line_x4_t4_g7_g5

0x7550,	// (0x00016d82) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7550,	// (0x00016d82) list_medium_line_x4_t4_g7_g6

0x755f,	// (0x00016d91) list_medium_line_x4_t4_g7_g7_ParamLimits

0x755f,	// (0x00016d91) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001f402) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001f402) list_medium_line_x4_t4_g7_g

0x756b,	// (0x00016d9d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x756b,	// (0x00016d9d) list_medium_line_x4_t4_g7_t1

0x7580,	// (0x00016db2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7580,	// (0x00016db2) list_medium_line_x4_t4_g7_t2

0x7595,	// (0x00016dc7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7595,	// (0x00016dc7) list_medium_line_x4_t4_g7_t3

0x75aa,	// (0x00016ddc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x75aa,	// (0x00016ddc) list_medium_line_x4_t4_g7_t4

0x75bc,	// (0x00016dee) list_medium_line_x4_t4_g7_t5_ParamLimits

0x75bc,	// (0x00016dee) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001f411) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001f411) list_medium_line_x4_t4_g7_t

0x75ce,	// (0x00016e00) list_single_dyc_row_pane_ParamLimits

0x75ce,	// (0x00016e00) list_single_dyc_row_pane

0x7cc1,	// (0x000174f3) call5_gesture_pane_ParamLimits

0x7cc1,	// (0x000174f3) call5_gesture_pane

0x7d17,	// (0x00017549) call5_windows_pane_ParamLimits

0x7d17,	// (0x00017549) call5_windows_pane

0x7dc5,	// (0x000175f7) call5_swipe_1_pane_cp_ParamLimits

0x7dc5,	// (0x000175f7) call5_swipe_1_pane_cp

0x7dd1,	// (0x00017603) call5_swipe_2_pane_cp_ParamLimits

0x7dd1,	// (0x00017603) call5_swipe_2_pane_cp

0x9f04,	// (0x00019736) call5_image_pane_cp

0x7ddd,	// (0x0001760f) popup_call5_audio_first_window_cp_ParamLimits

0x7ddd,	// (0x0001760f) popup_call5_audio_first_window_cp

0xe226,	// (0x0001da58) call5_swipe_1_pane_g1_cp_ParamLimits

0xe226,	// (0x0001da58) call5_swipe_1_pane_g1_cp

0xe266,	// (0x0001da98) call5_swipe_1_pane_g2_cp

0xe23f,	// (0x0001da71) call5_swipe_1_pane_t1_cp_ParamLimits

0xe23f,	// (0x0001da71) call5_swipe_1_pane_t1_cp

0xe226,	// (0x0001da58) call5_swipe_2_pane_g1_cp_ParamLimits

0xe226,	// (0x0001da58) call5_swipe_2_pane_g1_cp

0xe26e,	// (0x0001daa0) call5_swipe_2_pane_g2_cp

0xe276,	// (0x0001daa8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe276,	// (0x0001daa8) call5_swipe_2_pane_t1_cp

0x9575,	// (0x00018da7) main_sp_fs_email_pane

0xe28b,	// (0x0001dabd) main_sp_fs_listscroll_pane_te

0xe294,	// (0x0001dac6) popup_sp_fs_action_menu_pane_ParamLimits

0xe294,	// (0x0001dac6) popup_sp_fs_action_menu_pane

0xc2af,	// (0x0001bae1) bg_sp_fs_ctrlbar_pane_g1

0xc868,	// (0x0001c09a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc87a,	// (0x0001c0ac) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc871,	// (0x0001c0a3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2af,	// (0x0001bae1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001f4ff) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc08e,	// (0x0001b8c0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc08e,	// (0x0001b8c0) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2da,	// (0x0001db0c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2da,	// (0x0001db0c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2e6,	// (0x0001db18) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2e6,	// (0x0001db18) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001f508) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001f508) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2f2,	// (0x0001db24) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2f2,	// (0x0001db24) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe30c,	// (0x0001db3e) list_medium_line_t2_right_icon_g1

0x7deb,	// (0x0001761d) list_medium_line_t2_right_icon_t1

0x7dfb,	// (0x0001762d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001f50d) list_medium_line_t2_right_icon_t

0xbda2,	// (0x0001b5d4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbda2,	// (0x0001b5d4) bg_sp_fs_ctrlbar_pane

0x7e5a,	// (0x0001768c) main_sp_fs_ctrlbar_button_pane_cp01

0x7e64,	// (0x00017696) main_sp_fs_ctrlbar_ddmenu_pane

0xd327,	// (0x0001cb59) main_sp_fs_ctrlbar_pane_g1

0xe34c,	// (0x0001db7e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001f512) main_sp_fs_ctrlbar_pane_g

0xe358,	// (0x0001db8a) main_sp_fs_ctrlbar_pane_t1

0x7e6e,	// (0x000176a0) main_sp_fs_ctrlbar_pane

0x7e92,	// (0x000176c4) main_sp_fs_listscroll_pane_te_cp01

0x7eb2,	// (0x000176e4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7eb2,	// (0x000176e4) popup_sp_fs_action_menu_pane_cp01

0x9575,	// (0x00018da7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9575,	// (0x00018da7) bg_sp_fs_highlight_list_pane_cp01

0xe388,	// (0x0001dbba) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe388,	// (0x0001dbba) sp_fs_action_menu_list_gene_pane_g1

0xe397,	// (0x0001dbc9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe397,	// (0x0001dbc9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001f51c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001f51c) sp_fs_action_menu_list_gene_pane_g

0xe3a4,	// (0x0001dbd6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3a4,	// (0x0001dbd6) sp_fs_action_menu_list_gene_pane_t1

0xe3bc,	// (0x0001dbee) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3bc,	// (0x0001dbee) sp_fs_action_menu_list_gene_pane

0xe3df,	// (0x0001dc11) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3df,	// (0x0001dc11) popup_sp_fs_action_menu_bg_pane

0xe3ed,	// (0x0001dc1f) sp_fs_action_menu_list_pane_ParamLimits

0xe3ed,	// (0x0001dc1f) sp_fs_action_menu_list_pane

0xe411,	// (0x0001dc43) sp_fs_scroll_pane_cp01_ParamLimits

0xe411,	// (0x0001dc43) sp_fs_scroll_pane_cp01

0x7ee8,	// (0x0001771a) list_medium_line_plain_t2_t1

0x7ef8,	// (0x0001772a) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001f521) list_medium_line_plain_t2_t

0x7f08,	// (0x0001773a) list_medium_line_plain_t3_t1

0x7f18,	// (0x0001774a) list_medium_line_plain_t3_t2

0x7f26,	// (0x00017758) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001f526) list_medium_line_plain_t3_t

0xd327,	// (0x0001cb59) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x2_t2_g2_g1

0x0ede,	// (0x00010710) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0ede,	// (0x00010710) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001ea78) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001ea78) list_medium_line_x2_t2_g2_g

0x2290,	// (0x00011ac2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2290,	// (0x00011ac2) list_medium_line_x2_t2_g2_t1

0x0f13,	// (0x00010745) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f13,	// (0x00010745) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001f52d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001f52d) list_medium_line_x2_t2_g2_t

0xd327,	// (0x0001cb59) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x2_t4_g2_g1

0x0ede,	// (0x00010710) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0ede,	// (0x00010710) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001ea78) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001ea78) list_medium_line_x2_t4_g2_g

0x7f34,	// (0x00017766) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f34,	// (0x00017766) list_medium_line_x2_t4_g2_t1

0x7f4e,	// (0x00017780) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f4e,	// (0x00017780) list_medium_line_x2_t4_g2_t2

0x7f64,	// (0x00017796) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f64,	// (0x00017796) list_medium_line_x2_t4_g2_t3

0x0f13,	// (0x00010745) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f13,	// (0x00010745) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001f532) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001f532) list_medium_line_x2_t4_g2_t

0xe437,	// (0x0001dc69) list_medium_line_t3_right_iconx2_g1

0xe30c,	// (0x0001db3e) list_medium_line_t3_right_iconx2_g2

0x7f79,	// (0x000177ab) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001f53b) list_medium_line_t3_right_iconx2_g

0x7f83,	// (0x000177b5) list_medium_line_t3_right_iconx2_t1

0x7f93,	// (0x000177c5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001f542) list_medium_line_t3_right_iconx2_t

0xd327,	// (0x0001cb59) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x3_t4_g4_g1

0x0ed2,	// (0x00010704) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0ed2,	// (0x00010704) list_medium_line_x3_t4_g4_g2

0x0f7a,	// (0x000107ac) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f7a,	// (0x000107ac) list_medium_line_x3_t4_g4_g3

0x7fa1,	// (0x000177d3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7fa1,	// (0x000177d3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001f547) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001f547) list_medium_line_x3_t4_g4_g

0x7fad,	// (0x000177df) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fad,	// (0x000177df) list_medium_line_x3_t4_g4_t1

0x7fc4,	// (0x000177f6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fc4,	// (0x000177f6) list_medium_line_x3_t4_g4_t2

0x7fdf,	// (0x00017811) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7fdf,	// (0x00017811) list_medium_line_x3_t4_g4_t3

0x7ff4,	// (0x00017826) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7ff4,	// (0x00017826) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001f550) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001f550) list_medium_line_x3_t4_g4_t

0x8011,	// (0x00017843) list_single_dyc_row_text_pane_t1_ParamLimits

0x8011,	// (0x00017843) list_single_dyc_row_text_pane_t1

0x805a,	// (0x0001788c) list_single_dyc_row_text_pane_t2_ParamLimits

0x805a,	// (0x0001788c) list_single_dyc_row_text_pane_t2

0xe43f,	// (0x0001dc71) list_single_dyc_row_text_pane_t3_ParamLimits

0xe43f,	// (0x0001dc71) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001f559) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001f559) list_single_dyc_row_text_pane_t

0xe463,	// (0x0001dc95) list_single_dyc_row_pane_g1_ParamLimits

0xe463,	// (0x0001dc95) list_single_dyc_row_pane_g1

0xe46f,	// (0x0001dca1) list_single_dyc_row_pane_g2_ParamLimits

0xe46f,	// (0x0001dca1) list_single_dyc_row_pane_g2

0xe47b,	// (0x0001dcad) list_single_dyc_row_pane_g3_ParamLimits

0xe47b,	// (0x0001dcad) list_single_dyc_row_pane_g3

0xe487,	// (0x0001dcb9) list_single_dyc_row_pane_g4_ParamLimits

0xe487,	// (0x0001dcb9) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001f566) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001f566) list_single_dyc_row_pane_g

0xe493,	// (0x0001dcc5) list_single_dyc_row_text_pane_ParamLimits

0xe493,	// (0x0001dcc5) list_single_dyc_row_text_pane

0x9514,	// (0x00018d46) bg_sp_fs_scroll_pane

0xe4b2,	// (0x0001dce4) thumb_sp_fs_scroll_pane

0x672e,	// (0x00015f60) list_medium_line_g1_ParamLimits

0x672e,	// (0x00015f60) list_medium_line_g1

0xe4bb,	// (0x0001dced) list_medium_line_t1_ParamLimits

0xe4bb,	// (0x0001dced) list_medium_line_t1

0xd327,	// (0x0001cb59) list_medium_line_x2_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x2_g1

0x0ed2,	// (0x00010704) list_medium_line_x2_g2_ParamLimits

0x0ed2,	// (0x00010704) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001f56f) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001f56f) list_medium_line_x2_g

0xe4d0,	// (0x0001dd02) list_medium_line_x2_t1_ParamLimits

0xe4d0,	// (0x0001dd02) list_medium_line_x2_t1

0xd327,	// (0x0001cb59) list_medium_line_x3_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x3_g1

0x0ed2,	// (0x00010704) list_medium_line_x3_g2_ParamLimits

0x0ed2,	// (0x00010704) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001f56f) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001f56f) list_medium_line_x3_g

0xe4d0,	// (0x0001dd02) list_medium_line_x3_t1_ParamLimits

0xe4d0,	// (0x0001dd02) list_medium_line_x3_t1

0xe4e6,	// (0x0001dd18) thumb_sp_fs_scroll_pane_g1

0xe4ef,	// (0x0001dd21) thumb_sp_fs_scroll_pane_g2

0xe4f8,	// (0x0001dd2a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f574) thumb_sp_fs_scroll_pane_g

0xe4e6,	// (0x0001dd18) bg_sp_fs_scroll_pane_g1

0xe4ef,	// (0x0001dd21) bg_sp_fs_scroll_pane_g2

0xe4f8,	// (0x0001dd2a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f574) bg_sp_fs_scroll_pane_g

0xd327,	// (0x0001cb59) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd327,	// (0x0001cb59) list_medium_line_x2_t3_g4_g1

0x0f6e,	// (0x000107a0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0f6e,	// (0x000107a0) list_medium_line_x2_t3_g4_g2

0x0ed2,	// (0x00010704) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0ed2,	// (0x00010704) list_medium_line_x2_t3_g4_g3

0x0ede,	// (0x00010710) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0ede,	// (0x00010710) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001eaf4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001eaf4) list_medium_line_x2_t3_g4_g

0x818f,	// (0x000179c1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x818f,	// (0x000179c1) list_medium_line_x2_t3_g4_t1

0x81a5,	// (0x000179d7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81a5,	// (0x000179d7) list_medium_line_x2_t3_g4_t2

0x0f13,	// (0x00010745) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f13,	// (0x00010745) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001f57b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001f57b) list_medium_line_x2_t3_g4_t

0x672e,	// (0x00015f60) list_medium_line_g2_g1_ParamLimits

0x672e,	// (0x00015f60) list_medium_line_g2_g1

0xd377,	// (0x0001cba9) list_medium_line_g2_g2_ParamLimits

0xd377,	// (0x0001cba9) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001f232) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001f232) list_medium_line_g2_g

0xe501,	// (0x0001dd33) list_medium_line_g2_t1_ParamLimits

0xe501,	// (0x0001dd33) list_medium_line_g2_t1

0x672e,	// (0x00015f60) list_medium_line_t3_g2_g1_ParamLimits

0x672e,	// (0x00015f60) list_medium_line_t3_g2_g1

0xd377,	// (0x0001cba9) list_medium_line_t3_g2_g2_ParamLimits

0xd377,	// (0x0001cba9) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001f232) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001f232) list_medium_line_t3_g2_g

0x81be,	// (0x000179f0) list_medium_line_t3_g2_t1_ParamLimits

0x81be,	// (0x000179f0) list_medium_line_t3_g2_t1

0x81d8,	// (0x00017a0a) list_medium_line_t3_g2_t2_ParamLimits

0x81d8,	// (0x00017a0a) list_medium_line_t3_g2_t2

0x81ee,	// (0x00017a20) list_medium_line_t3_g2_t3_ParamLimits

0x81ee,	// (0x00017a20) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001f582) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001f582) list_medium_line_t3_g2_t

0xe30c,	// (0x0001db3e) list_medium_line_right_icon_g1

0xe516,	// (0x0001dd48) list_medium_line_right_icon_t1

0x672e,	// (0x00015f60) list_medium_line_t2_g1_ParamLimits

0x672e,	// (0x00015f60) list_medium_line_t2_g1

0x8205,	// (0x00017a37) list_medium_line_t2_t1_ParamLimits

0x8205,	// (0x00017a37) list_medium_line_t2_t1

0x821f,	// (0x00017a51) list_medium_line_t2_t2_ParamLimits

0x821f,	// (0x00017a51) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001f589) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001f589) list_medium_line_t2_t

0x672e,	// (0x00015f60) list_medium_line_t3_g1_ParamLimits

0x672e,	// (0x00015f60) list_medium_line_t3_g1

0x8238,	// (0x00017a6a) list_medium_line_t3_t1_ParamLimits

0x8238,	// (0x00017a6a) list_medium_line_t3_t1

0x824f,	// (0x00017a81) list_medium_line_t3_t2_ParamLimits

0x824f,	// (0x00017a81) list_medium_line_t3_t2

0x8264,	// (0x00017a96) list_medium_line_t3_t3_ParamLimits

0x8264,	// (0x00017a96) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001f58e) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001f58e) list_medium_line_t3_t

0x672e,	// (0x00015f60) list_medium_line_g3_g1_ParamLimits

0x672e,	// (0x00015f60) list_medium_line_g3_g1

0xe524,	// (0x0001dd56) list_medium_line_g3_g2_ParamLimits

0xe524,	// (0x0001dd56) list_medium_line_g3_g2

0xd377,	// (0x0001cba9) list_medium_line_g3_g3_ParamLimits

0xd377,	// (0x0001cba9) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001f595) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001f595) list_medium_line_g3_g

0xe530,	// (0x0001dd62) list_medium_line_g3_t1_ParamLimits

0xe530,	// (0x0001dd62) list_medium_line_g3_t1

0x672e,	// (0x00015f60) list_medium_line_t2_g3_g1_ParamLimits

0x672e,	// (0x00015f60) list_medium_line_t2_g3_g1

0xe524,	// (0x0001dd56) list_medium_line_t2_g3_g2_ParamLimits

0xe524,	// (0x0001dd56) list_medium_line_t2_g3_g2

0xd377,	// (0x0001cba9) list_medium_line_t2_g3_g3_ParamLimits

0xd377,	// (0x0001cba9) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001f595) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001f595) list_medium_line_t2_g3_g

0x8276,	// (0x00017aa8) list_medium_line_t2_g3_t1_ParamLimits

0x8276,	// (0x00017aa8) list_medium_line_t2_g3_t1

0x828d,	// (0x00017abf) list_medium_line_t2_g3_t2_ParamLimits

0x828d,	// (0x00017abf) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001f59c) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001f59c) list_medium_line_t2_g3_t

0x672e,	// (0x00015f60) list_medium_line_t3_g3_g1_ParamLimits

0x672e,	// (0x00015f60) list_medium_line_t3_g3_g1

0xe524,	// (0x0001dd56) list_medium_line_t3_g3_g2_ParamLimits

0xe524,	// (0x0001dd56) list_medium_line_t3_g3_g2

0xd377,	// (0x0001cba9) list_medium_line_t3_g3_g3_ParamLimits

0xd377,	// (0x0001cba9) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001f595) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001f595) list_medium_line_t3_g3_g

0x82a6,	// (0x00017ad8) list_medium_line_t3_g3_t1_ParamLimits

0x82a6,	// (0x00017ad8) list_medium_line_t3_g3_t1

0x82bf,	// (0x00017af1) list_medium_line_t3_g3_t2_ParamLimits

0x82bf,	// (0x00017af1) list_medium_line_t3_g3_t2

0x82d5,	// (0x00017b07) list_medium_line_t3_g3_t3_ParamLimits

0x82d5,	// (0x00017b07) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001f5a1) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001f5a1) list_medium_line_t3_g3_t

0xe437,	// (0x0001dc69) list_medium_line_right_iconx2_g1

0xe30c,	// (0x0001db3e) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f5a8) list_medium_line_right_iconx2_g

0xe545,	// (0x0001dd77) list_medium_line_right_iconx2_t1

0xe437,	// (0x0001dc69) list_medium_line_t2_right_iconx2_g1

0xe30c,	// (0x0001db3e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f5a8) list_medium_line_t2_right_iconx2_g

0x82ef,	// (0x00017b21) list_medium_line_t2_right_iconx2_t1

0x82ff,	// (0x00017b31) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001f5ad) list_medium_line_t2_right_iconx2_t

0x8311,	// (0x00017b43) list_medium_line_x4_t4_t1

0x831f,	// (0x00017b51) list_medium_line_x4_t4_t2

0x832f,	// (0x00017b61) list_medium_line_x4_t4_t3

0x833f,	// (0x00017b71) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001f5b2) list_medium_line_x4_t4_t

0x8392,	// (0x00017bc4) tport_appsw_pane_ParamLimits

0x8392,	// (0x00017bc4) tport_appsw_pane

0x83aa,	// (0x00017bdc) tport_contact_pane_ParamLimits

0x83aa,	// (0x00017bdc) tport_contact_pane

0x83c2,	// (0x00017bf4) tport_listscroll_pane_ParamLimits

0x83c2,	// (0x00017bf4) tport_listscroll_pane

0x83dc,	// (0x00017c0e) cell_tport_appsw_pane_ParamLimits

0x83dc,	// (0x00017c0e) cell_tport_appsw_pane

0xd013,	// (0x0001c845) tport_appsw_pane_g1_ParamLimits

0xd013,	// (0x0001c845) tport_appsw_pane_g1

0xe553,	// (0x0001dd85) tport_contact_pane_g1

0xe55c,	// (0x0001dd8e) tport_contact_pane_t1

0xe56a,	// (0x0001dd9c) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001f5bb) tport_contact_pane_t

0xe578,	// (0x0001ddaa) list_tport_pane

0xe581,	// (0x0001ddb3) scroll_pane_cp_030

0x842e,	// (0x00017c60) cell_tport_appsw_pane_g1

0x843e,	// (0x00017c70) cell_tport_appsw_pane_t1

0x844c,	// (0x00017c7e) grid_highlight_pane_cp019

0x8454,	// (0x00017c86) list_tport_double_graphic_pane_ParamLimits

0x8454,	// (0x00017c86) list_tport_double_graphic_pane

0x9575,	// (0x00018da7) list_highlight_pane_cp023_ParamLimits

0x9575,	// (0x00018da7) list_highlight_pane_cp023

0x8461,	// (0x00017c93) list_tport_double_graphic_pane_g1_ParamLimits

0x8461,	// (0x00017c93) list_tport_double_graphic_pane_g1

0x846e,	// (0x00017ca0) list_tport_double_graphic_pane_t1_ParamLimits

0x846e,	// (0x00017ca0) list_tport_double_graphic_pane_t1

0x8483,	// (0x00017cb5) list_tport_double_graphic_pane_t2_ParamLimits

0x8483,	// (0x00017cb5) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001f5c7) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001f5c7) list_tport_double_graphic_pane_t

0x9514,	// (0x00018d46) main_cale_note_pane

0x5dba,	// (0x000155ec) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5dba,	// (0x000155ec) cell_vitu2_function_top_wide_pane_cp01

0x7923,	// (0x00017155) wait_bar_pane_cp05_ParamLimits

0x9575,	// (0x00018da7) listscroll_cmail_pane

0xe592,	// (0x0001ddc4) list_cmail_pane

0x849f,	// (0x00017cd1) list_cmail_body_pane

0xd30c,	// (0x0001cb3e) list_single_cmail_header_caption_pane

0x84b2,	// (0x00017ce4) list_single_cmail_header_detail_pane_ParamLimits

0x84b2,	// (0x00017ce4) list_single_cmail_header_detail_pane

0x84dd,	// (0x00017d0f) list_single_cmail_header_caption_pane_t1

0x84ed,	// (0x00017d1f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84ed,	// (0x00017d1f) list_single_cmail_header_detail_pane_g1

0xe5b2,	// (0x0001dde4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5b2,	// (0x0001dde4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001f5cc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001f5cc) list_single_cmail_header_detail_pane_g

0xe5cb,	// (0x0001ddfd) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5cb,	// (0x0001ddfd) list_single_cmail_header_detail_pane_t1

0xe63d,	// (0x0001de6f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe63d,	// (0x0001de6f) list_single_cmail_header_editor_pane_bg

0xdec7,	// (0x0001d6f9) list_cmail_body_pane_g1

0xe654,	// (0x0001de86) list_cmail_body_pane_t1

0xd062,	// (0x0001c894) list_single_cmail_header_editor_pane_bg_g1

0xa16b,	// (0x0001999d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd072,	// (0x0001c8a4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd06a,	// (0x0001c89c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd34f,	// (0x0001cb81) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd092,	// (0x0001c8c4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd082,	// (0x0001c8b4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd08a,	// (0x0001c8bc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa14b,	// (0x0001997d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8505,	// (0x00017d37) calenote_gesture_pane_ParamLimits

0x8505,	// (0x00017d37) calenote_gesture_pane

0x8525,	// (0x00017d57) calenote_window_pane_ParamLimits

0x8525,	// (0x00017d57) calenote_window_pane

0xe662,	// (0x0001de94) popup_note_window_cp01

0x8541,	// (0x00017d73) calenote_swipe_1_pane_ParamLimits

0x8541,	// (0x00017d73) calenote_swipe_1_pane

0x7dd1,	// (0x00017603) calenote_swipe_2_pane_ParamLimits

0x7dd1,	// (0x00017603) calenote_swipe_2_pane

0xe226,	// (0x0001da58) calenote_swipe_1_pane_g1_ParamLimits

0xe226,	// (0x0001da58) calenote_swipe_1_pane_g1

0xe233,	// (0x0001da65) calenote_swipe_1_pane_g2_ParamLimits

0xe233,	// (0x0001da65) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001f4f5) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001f4f5) calenote_swipe_1_pane_g

0xe674,	// (0x0001dea6) calenote_swipe_1_pane_t1_ParamLimits

0xe674,	// (0x0001dea6) calenote_swipe_1_pane_t1

0xe226,	// (0x0001da58) calenote_swipe_2_pane_g1_ParamLimits

0xe226,	// (0x0001da58) calenote_swipe_2_pane_g1

0xe693,	// (0x0001dec5) calenote_swipe_2_pane_g2_ParamLimits

0xe693,	// (0x0001dec5) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001f5d8) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001f5d8) calenote_swipe_2_pane_g

0xe69f,	// (0x0001ded1) calenote_swipe_2_pane_t1_ParamLimits

0xe69f,	// (0x0001ded1) calenote_swipe_2_pane_t1

0x9514,	// (0x00018d46) main_mup_navstr_pane

0x4a09,	// (0x0001423b) main_mup3_pane_t7_ParamLimits

0x4a09,	// (0x0001423b) main_mup3_pane_t7

0xcbf4,	// (0x0001c426) main_mp4_pane_g6_ParamLimits

0xcbf4,	// (0x0001c426) main_mp4_pane_g6

0xce1c,	// (0x0001c64e) main_image3_pane_t4_ParamLimits

0xce1c,	// (0x0001c64e) main_image3_pane_t4

0x8556,	// (0x00017d88) popup_navstr_preview_pane_ParamLimits

0x8556,	// (0x00017d88) popup_navstr_preview_pane

0x8566,	// (0x00017d98) scroll_navstr_pane_ParamLimits

0x8566,	// (0x00017d98) scroll_navstr_pane

0x9514,	// (0x00018d46) bg_popup_preview_window_pane_cp04

0xe6c6,	// (0x0001def8) popup_navstr_preview_pane_t1

0x857a,	// (0x00017dac) scroll_navstr_pane_g1_ParamLimits

0x857a,	// (0x00017dac) scroll_navstr_pane_g1

0x858e,	// (0x00017dc0) scroll_navstr_pane_t1_ParamLimits

0x858e,	// (0x00017dc0) scroll_navstr_pane_t1

0xe66b,	// (0x0001de9d) bg_button_pane_cp014

0xe66b,	// (0x0001de9d) bg_button_pane_cp030

0x7c67,	// (0x00017499) list_double_fisheye_pane_g4_ParamLimits

0x7c67,	// (0x00017499) list_double_fisheye_pane_g4

0x7c73,	// (0x000174a5) list_double_fisheye_pane_g5_ParamLimits

0x7c73,	// (0x000174a5) list_double_fisheye_pane_g5

0xe59a,	// (0x0001ddcc) sp_fs_scroll_pane_cp03

0xd327,	// (0x0001cb59) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe34c,	// (0x0001db7e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001f512) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe358,	// (0x0001db8a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8495,	// (0x00017cc7) sp_fs_scroll_pane_cp02

0x9e64,	// (0x00019696) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e64,	// (0x00019696) popup_sp_fs_calendar_preview_list_single_pane

0x9514,	// (0x00018d46) main_cam6_pano_pane

0x9575,	// (0x00018da7) main_mup3_pane_ParamLimits

0x9514,	// (0x00018d46) main_phacti_pane

0x77f6,	// (0x00017028) bg_button_pane_cp11

0x7810,	// (0x00017042) main_mobtv_info_pane_g2_ParamLimits

0x7810,	// (0x00017042) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001f472) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001f472) main_mobtv_info_pane_g

0x79eb,	// (0x0001721d) sc_clock_pane_t5_ParamLimits

0x79eb,	// (0x0001721d) sc_clock_pane_t5

0x7ac9,	// (0x000172fb) main_radioblah_pane_g1_ParamLimits

0xe172,	// (0x0001d9a4) main_radioblah_pane_t3_ParamLimits

0xe172,	// (0x0001d9a4) main_radioblah_pane_t3

0xe18a,	// (0x0001d9bc) main_radioblah_pane_t4_ParamLimits

0xe18a,	// (0x0001d9bc) main_radioblah_pane_t4

0x7af1,	// (0x00017323) main_radioblah_text_pane_ParamLimits

0x7af1,	// (0x00017323) main_radioblah_text_pane

0x7b03,	// (0x00017335) main_radioblah_info_pane_g1_ParamLimits

0x7b9c,	// (0x000173ce) main_radioblah_info_pane_t4_ParamLimits

0x7b9c,	// (0x000173ce) main_radioblah_info_pane_t4

0x9575,	// (0x00018da7) main_sp_fs_calendar_pane

0x85a5,	// (0x00017dd7) main_phacti_pane_g1

0x85ad,	// (0x00017ddf) phacti_note_pane_ParamLimits

0x85ad,	// (0x00017ddf) phacti_note_pane

0xe6dd,	// (0x0001df0f) phacti_term_pane_ParamLimits

0xe6dd,	// (0x0001df0f) phacti_term_pane

0xe6f2,	// (0x0001df24) phacti_note_pane_t1_ParamLimits

0xe6f2,	// (0x0001df24) phacti_note_pane_t1

0xe709,	// (0x0001df3b) phacti_term_pane_g1

0xe711,	// (0x0001df43) phacti_term_pane_t1_ParamLimits

0xe711,	// (0x0001df43) phacti_term_pane_t1

0xe73b,	// (0x0001df6d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe743,	// (0x0001df75) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001f5e2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe74b,	// (0x0001df7d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe74b,	// (0x0001df7d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe761,	// (0x0001df93) aid_popup_sp_fs_bg_corner_pane

0xc2af,	// (0x0001bae1) popup_sp_fs_calendar_preview_bg_pane_g1

0x9514,	// (0x00018d46) popup_sp_fs_calendar_preview_bg_pane

0xe769,	// (0x0001df9b) popup_sp_fs_calendar_preview_list_pane

0xbda2,	// (0x0001b5d4) bg_main_sp_fs_cale_pane_ParamLimits

0xbda2,	// (0x0001b5d4) bg_main_sp_fs_cale_pane

0xe77a,	// (0x0001dfac) listscroll_cale_mrui_pane_ParamLimits

0xe77a,	// (0x0001dfac) listscroll_cale_mrui_pane

0xe78f,	// (0x0001dfc1) listscroll_sp_fs_schedule_track_pane

0xe798,	// (0x0001dfca) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe798,	// (0x0001dfca) main_sp_fs_ctrlbar_pane_cp01

0xe7ab,	// (0x0001dfdd) main_sp_fs_ribbon_pane

0xe7b3,	// (0x0001dfe5) popup_sp_fs_cale_preview_window

0x861e,	// (0x00017e50) list_single_sp_fs_schedule_track_pane_ParamLimits

0x861e,	// (0x00017e50) list_single_sp_fs_schedule_track_pane

0x9575,	// (0x00018da7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9575,	// (0x00018da7) bg_sp_fs_highlight_list_pane_cp03

0x8632,	// (0x00017e64) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8632,	// (0x00017e64) list_single_sp_fs_schedule_track_pane_g1

0x863e,	// (0x00017e70) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x863e,	// (0x00017e70) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001f5e7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001f5e7) list_single_sp_fs_schedule_track_pane_g

0x864a,	// (0x00017e7c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x864a,	// (0x00017e7c) list_single_sp_fs_schedule_track_pane_t1

0x866c,	// (0x00017e9e) sp_fs_schedule_track_pane_ParamLimits

0x866c,	// (0x00017e9e) sp_fs_schedule_track_pane

0xe7c5,	// (0x0001dff7) sp_fs_schedule_track_pane_g1

0xe7cd,	// (0x0001dfff) sp_fs_schedule_track_pane_g2

0xe7d5,	// (0x0001e007) sp_fs_schedule_track_pane_g3

0xe7dd,	// (0x0001e00f) sp_fs_schedule_track_pane_g4

0xe7e5,	// (0x0001e017) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001f5ec) sp_fs_schedule_track_pane_g

0xd062,	// (0x0001c894) bg_sp_fs_schedule_viewer_highlight_g1

0xa16b,	// (0x0001999d) bg_sp_fs_schedule_viewer_highlight_g2

0xd06a,	// (0x0001c89c) bg_sp_fs_schedule_viewer_highlight_g3

0xd072,	// (0x0001c8a4) bg_sp_fs_schedule_viewer_highlight_g4

0xd34f,	// (0x0001cb81) bg_sp_fs_schedule_viewer_highlight_g5

0xd082,	// (0x0001c8b4) bg_sp_fs_schedule_viewer_highlight_g6

0xd08a,	// (0x0001c8bc) bg_sp_fs_schedule_viewer_highlight_g7

0xd092,	// (0x0001c8c4) bg_sp_fs_schedule_viewer_highlight_g8

0xa14b,	// (0x0001997d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001f5f7) bg_sp_fs_schedule_viewer_highlight_g

0x9514,	// (0x00018d46) bg_main_sp_fs_ribbon_pane

0x8681,	// (0x00017eb3) main_sp_fs_ribbon_pane_g1

0xe7ed,	// (0x0001e01f) main_sp_fs_ribbon_pane_t1

0x868a,	// (0x00017ebc) main_sp_fs_ribbon_pane_t2

0xe7fc,	// (0x0001e02e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001f60a) main_sp_fs_ribbon_pane_t

0xe80b,	// (0x0001e03d) main_sp_fs_ribbon_scheduler_pane

0xe813,	// (0x0001e045) bg_main_sp_fs_ribbon_pane_g1

0xe81c,	// (0x0001e04e) bg_main_sp_fs_ribbon_pane_g2

0xe825,	// (0x0001e057) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001f611) bg_main_sp_fs_ribbon_pane_g

0xe82d,	// (0x0001e05f) main_sp_fs_ribbon_scheduler_pane_g1

0xe836,	// (0x0001e068) main_sp_fs_ribbon_scheduler_pane_g2

0xe83f,	// (0x0001e071) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001f618) main_sp_fs_ribbon_scheduler_pane_g

0xe848,	// (0x0001e07a) list_cale_mrui_pane

0x8699,	// (0x00017ecb) sp_fs_scroll_pane_cp07_ParamLimits

0x8699,	// (0x00017ecb) sp_fs_scroll_pane_cp07

0x86b5,	// (0x00017ee7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86b5,	// (0x00017ee7) bg_sp_fs_schedule_viewer_highlight

0xe855,	// (0x0001e087) list_single_sp_fs_schedule_track_pane_cp01

0xe85d,	// (0x0001e08f) list_sp_fs_schedule_track_pane

0xe865,	// (0x0001e097) sp_fs_scroll_pane_cp06_ParamLimits

0xe865,	// (0x0001e097) sp_fs_scroll_pane_cp06

0xc2af,	// (0x0001bae1) bgmain_sp_fs_calendar_pane_g1

0x86c7,	// (0x00017ef9) list_single_cale_mrui_pane_ParamLimits

0x86c7,	// (0x00017ef9) list_single_cale_mrui_pane

0xe877,	// (0x0001e0a9) list_single_cale_mrui_row_pane_ParamLimits

0xe877,	// (0x0001e0a9) list_single_cale_mrui_row_pane

0xe88d,	// (0x0001e0bf) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe88d,	// (0x0001e0bf) list_single_cale_mrui_row_pane_g1

0xe8d2,	// (0x0001e104) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8d2,	// (0x0001e104) list_single_cale_mrui_row_pane_t1

0x86dc,	// (0x00017f0e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86dc,	// (0x00017f0e) list_single_cale_mrui_row_pane_t2

0xe8e4,	// (0x0001e116) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8e4,	// (0x0001e116) list_single_cale_mrui_row_pane_t3

0xe913,	// (0x0001e145) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe913,	// (0x0001e145) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001f626) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001f626) list_single_cale_mrui_row_pane_t

0x8744,	// (0x00017f76) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8744,	// (0x00017f76) list_single_cmail_header_editor_pane_bg_cp01

0x876a,	// (0x00017f9c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x876a,	// (0x00017f9c) list_single_cmail_header_editor_pane_bg_cp02

0x878a,	// (0x00017fbc) main_radioblah_text_pane_t1_ParamLimits

0x878a,	// (0x00017fbc) main_radioblah_text_pane_t1

0xe942,	// (0x0001e174) cam6_indi_pane_cp01

0xe94a,	// (0x0001e17c) cam6_mode_pane_cp01

0xe952,	// (0x0001e184) cam6_pano_pane

0xe95b,	// (0x0001e18d) cam6_zoom_pane_cp01

0xe965,	// (0x0001e197) cam6_pano_image_pane

0xe96e,	// (0x0001e1a0) cam6_pano_pane_g1

0xdec7,	// (0x0001d6f9) cam6_pano_pane_g2

0xe977,	// (0x0001e1a9) cam6_pano_pane_g3

0xe980,	// (0x0001e1b2) cam6_pano_pane_g4

0xc855,	// (0x0001c087) cam6_pano_pane_g5

0xe989,	// (0x0001e1bb) cam6_pano_pane_g6

0xe991,	// (0x0001e1c3) cam6_pano_pane_g7

0xe999,	// (0x0001e1cb) cam6_pano_pane_g8

0xe9a2,	// (0x0001e1d4) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001f62f) cam6_pano_pane_g

0x9514,	// (0x00018d46) main_browser_tag_pane

0xe6be,	// (0x0001def0) grid_navstr_albumart_pane

0xe9ad,	// (0x0001e1df) cell_navstr_albumart_pane_ParamLimits

0xe9ad,	// (0x0001e1df) cell_navstr_albumart_pane

0xe9cc,	// (0x0001e1fe) cell_navstr_albumart_pane_g1

0xbbaf,	// (0x0001b3e1) cell_navstr_albumart_pane_g2

0xbbbf,	// (0x0001b3f1) cell_navstr_albumart_pane_g3

0xbbb7,	// (0x0001b3e9) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001f642) cell_navstr_albumart_pane_g

0x87a5,	// (0x00017fd7) bt_list_pane_ParamLimits

0x87a5,	// (0x00017fd7) bt_list_pane

0x87bb,	// (0x00017fed) bt_list_pane_t1

0x87ca,	// (0x00017ffc) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001f64b) bt_list_pane_t

0x9514,	// (0x00018d46) main_cale_prevew_pane

0x87d9,	// (0x0001800b) popup_cale_preview_window_ParamLimits

0x87d9,	// (0x0001800b) popup_cale_preview_window

0x9575,	// (0x00018da7) bg_popup_preview_window_pane_cp05_ParamLimits

0x9575,	// (0x00018da7) bg_popup_preview_window_pane_cp05

0xe9d4,	// (0x0001e206) list_cale_preview_pane_ParamLimits

0xe9d4,	// (0x0001e206) list_cale_preview_pane

0x87f6,	// (0x00018028) list_double_cale_preview_pane_ParamLimits

0x87f6,	// (0x00018028) list_double_cale_preview_pane

0x880a,	// (0x0001803c) list_single_cale_preview_pane_ParamLimits

0x880a,	// (0x0001803c) list_single_cale_preview_pane

0x8822,	// (0x00018054) list_single_cale_preview_pane_g1

0x882a,	// (0x0001805c) list_single_cale_preview_pane_t1_ParamLimits

0x882a,	// (0x0001805c) list_single_cale_preview_pane_t1

0x883f,	// (0x00018071) list_double_cale_preview_pane_g1

0x8847,	// (0x00018079) list_double_cale_preview_pane_t1_ParamLimits

0x8847,	// (0x00018079) list_double_cale_preview_pane_t1

0x885c,	// (0x0001808e) list_double_cale_preview_pane_t2_ParamLimits

0x885c,	// (0x0001808e) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001f650) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001f650) list_double_cale_preview_pane_t

0x9514,	// (0x00018d46) main_ezdial_pane

0x9575,	// (0x00018da7) main_sp_fs_email_pane_ParamLimits

0x7e0d,	// (0x0001763f) cmail_ddmenu_btn01_pane_ParamLimits

0x7e0d,	// (0x0001763f) cmail_ddmenu_btn01_pane

0x7e20,	// (0x00017652) cmail_ddmenu_btn02_pane_ParamLimits

0x7e20,	// (0x00017652) cmail_ddmenu_btn02_pane

0x7e43,	// (0x00017675) cmail_ddmenu_btn03_pane_ParamLimits

0x7e43,	// (0x00017675) cmail_ddmenu_btn03_pane

0x7e6e,	// (0x000176a0) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e92,	// (0x000176c4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x849f,	// (0x00017cd1) list_cmail_body_pane_ParamLimits

0xe5a9,	// (0x0001dddb) bg_button_pane_cp12

0xe5be,	// (0x0001ddf0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5be,	// (0x0001ddf0) list_single_cmail_header_detail_pane_g3

0xe619,	// (0x0001de4b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe619,	// (0x0001de4b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001f5d3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001f5d3) list_single_cmail_header_detail_pane_t

0xe726,	// (0x0001df58) phacti_term_pane_t2_ParamLimits

0xe726,	// (0x0001df58) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001f5dd) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001f5dd) phacti_term_pane_t

0xe9e0,	// (0x0001e212) aid_size_list_single_double

0x8874,	// (0x000180a6) popup_ezdial_listscroll_window

0x8890,	// (0x000180c2) popup_number_entry_window_cp01

0x9f04,	// (0x00019736) bg_popup_call_pane_cp09

0xe9ec,	// (0x0001e21e) ezdial_list_pane

0xe9f4,	// (0x0001e226) scroll_pane_cp23

0xbda2,	// (0x0001b5d4) bg_button_pane_cp028_ParamLimits

0xbda2,	// (0x0001b5d4) bg_button_pane_cp028

0x889e,	// (0x000180d0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x889e,	// (0x000180d0) cmail_ddmenu_btn01_pane_g1

0x88ad,	// (0x000180df) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88ad,	// (0x000180df) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001f655) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001f655) cmail_ddmenu_btn01_pane_g

0xe9fc,	// (0x0001e22e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9fc,	// (0x0001e22e) cmail_ddmenu_btn01_pane_t1

0xbda2,	// (0x0001b5d4) bg_button_pane_cp029_ParamLimits

0xbda2,	// (0x0001b5d4) bg_button_pane_cp029

0x88c3,	// (0x000180f5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88c3,	// (0x000180f5) cmail_ddmenu_btn02_pane_g1

0x88de,	// (0x00018110) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88de,	// (0x00018110) cmail_ddmenu_btn02_pane_t1

0x9575,	// (0x00018da7) bg_button_pane_cp031_ParamLimits

0x9575,	// (0x00018da7) bg_button_pane_cp031

0x88c3,	// (0x000180f5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88c3,	// (0x000180f5) cmail_ddmenu_btn03_pane_g1

0x88de,	// (0x00018110) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88de,	// (0x00018110) cmail_ddmenu_btn03_pane_t1

0x55e9,	// (0x00014e1b) cell_dialer2_keypad_pane_t1_ParamLimits

0x5603,	// (0x00014e35) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5603,	// (0x00014e35) cell_dialer2_keypad_pane_t1_copy1

0x765b,	// (0x00016e8d) ncimui_group_button_pane

0x9575,	// (0x00018da7) main_sp_fs_calendar_pane_ParamLimits

0xd30c,	// (0x0001cb3e) list_single_cmail_header_caption_pane_ParamLimits

0xe771,	// (0x0001dfa3) aid_recal_txt_sm_pane

0x9514,	// (0x00018d46) mian_recal_day_pane

0xe7b3,	// (0x0001dfe5) popup_sp_fs_cale_preview_window_ParamLimits

0xea12,	// (0x0001e244) list_recal_day_pane

0xea55,	// (0x0001e287) list_single_recal_day_pane_ParamLimits

0xea55,	// (0x0001e287) list_single_recal_day_pane

0xea67,	// (0x0001e299) list_single_recal_day_pane_g1_ParamLimits

0xea67,	// (0x0001e299) list_single_recal_day_pane_g1

0xea73,	// (0x0001e2a5) list_single_recal_day_pane_g2_ParamLimits

0xea73,	// (0x0001e2a5) list_single_recal_day_pane_g2

0xea7f,	// (0x0001e2b1) list_single_recal_day_pane_g3_ParamLimits

0xea7f,	// (0x0001e2b1) list_single_recal_day_pane_g3

0x8905,	// (0x00018137) list_single_recal_day_pane_g4_ParamLimits

0x8905,	// (0x00018137) list_single_recal_day_pane_g4

0xea8b,	// (0x0001e2bd) list_single_recal_day_pane_g5_ParamLimits

0xea8b,	// (0x0001e2bd) list_single_recal_day_pane_g5

0xea97,	// (0x0001e2c9) list_single_recal_day_pane_g6_ParamLimits

0xea97,	// (0x0001e2c9) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001f664) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001f664) list_single_recal_day_pane_g

0xeaab,	// (0x0001e2dd) list_single_recal_day_pane_t1

0xeabd,	// (0x0001e2ef) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001f66f) list_single_recal_day_pane_t

0x891d,	// (0x0001814f) ncimui_query_button_pane_ParamLimits

0x891d,	// (0x0001814f) ncimui_query_button_pane

0x892d,	// (0x0001815f) ncimui_query_button_pane_t1_ParamLimits

0x892d,	// (0x0001815f) ncimui_query_button_pane_t1

0xeacf,	// (0x0001e301) ncimui_query_button_pane_t2_ParamLimits

0xeacf,	// (0x0001e301) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001f674) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001f674) ncimui_query_button_pane_t

0x8940,	// (0x00018172) query_button_pane_ParamLimits

0x8940,	// (0x00018172) query_button_pane

0x9514,	// (0x00018d46) bg_button_pane_cp0028

0xeae2,	// (0x0001e314) query_button_pane_t1

0x35b6,	// (0x00012de8) main_tport_pane_ParamLimits

0x834f,	// (0x00017b81) bg_popup_window_pane_cp01_ParamLimits

0x834f,	// (0x00017b81) bg_popup_window_pane_cp01

0x836a,	// (0x00017b9c) heading_pane_cp08_ParamLimits

0x836a,	// (0x00017b9c) heading_pane_cp08

0x837d,	// (0x00017baf) heading_pane_cp07_ParamLimits

0x837d,	// (0x00017baf) heading_pane_cp07

0x842e,	// (0x00017c60) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001f5c0) cell_tport_appsw_pane_g

0xaa5c,	// (0x0001a28e) input_candi_list_open_g1

0xa34d,	// (0x00019b7f) list_cale_time_pane_g6_ParamLimits

0xa34d,	// (0x00019b7f) list_cale_time_pane_g6

0x43c0,	// (0x00013bf2) aid_size_touch_calib_1_ParamLimits

0x43c0,	// (0x00013bf2) aid_size_touch_calib_1

0x43d2,	// (0x00013c04) aid_size_touch_calib_2_ParamLimits

0x43d2,	// (0x00013c04) aid_size_touch_calib_2

0x43ea,	// (0x00013c1c) aid_size_touch_calib_3_ParamLimits

0x43ea,	// (0x00013c1c) aid_size_touch_calib_3

0x4408,	// (0x00013c3a) aid_size_touch_calib_4_ParamLimits

0x4408,	// (0x00013c3a) aid_size_touch_calib_4

0x4420,	// (0x00013c52) main_touch_calib_button_group_pane_ParamLimits

0x4420,	// (0x00013c52) main_touch_calib_button_group_pane

0x4438,	// (0x00013c6a) main_touch_calib_pane_g1_ParamLimits

0x444a,	// (0x00013c7c) main_touch_calib_pane_g2_ParamLimits

0x445c,	// (0x00013c8e) main_touch_calib_pane_g3_ParamLimits

0x446e,	// (0x00013ca0) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0001ef83) main_touch_calib_pane_g_ParamLimits

0x4480,	// (0x00013cb2) main_touch_calib_pane_t1_ParamLimits

0x449a,	// (0x00013ccc) main_touch_calib_pane_t2_ParamLimits

0x44b4,	// (0x00013ce6) main_touch_calib_pane_t3_ParamLimits

0x44c8,	// (0x00013cfa) main_touch_calib_pane_t4_ParamLimits

0x44de,	// (0x00013d10) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0001ef8c) main_touch_calib_pane_t_ParamLimits

0xc5eb,	// (0x0001be1d) list_single_fp_cale_pane_g3_ParamLimits

0xc5eb,	// (0x0001be1d) list_single_fp_cale_pane_g3

0x9575,	// (0x00018da7) bg_button_pane_cp012_ParamLimits

0x9575,	// (0x00018da7) bg_vkb2_func_pane_cp03_ParamLimits

0x66e4,	// (0x00015f16) cell_vitu2_function_top_pane_g1_ParamLimits

0x9575,	// (0x00018da7) bg_vkb2_func_pane_cp04_ParamLimits

0x75e9,	// (0x00016e1b) main_ncimui_button_group_pane_ParamLimits

0x75e9,	// (0x00016e1b) main_ncimui_button_group_pane

0x7649,	// (0x00016e7b) main_ncimui_pane_t3_ParamLimits

0x7649,	// (0x00016e7b) main_ncimui_pane_t3

0xe6d4,	// (0x0001df06) phacti_button_group_pane

0xe9e0,	// (0x0001e212) aid_size_list_single_double_ParamLimits

0x8874,	// (0x000180a6) popup_ezdial_listscroll_window_ParamLimits

0x8890,	// (0x000180c2) popup_number_entry_window_cp01_ParamLimits

0x8953,	// (0x00018185) phacti_button_pane_ParamLimits

0x8953,	// (0x00018185) phacti_button_pane

0x9514,	// (0x00018d46) bg_button_pane_cp14

0xeaf0,	// (0x0001e322) phacti_button_pane_t1

0x8964,	// (0x00018196) main_touch_calib_button_pane_ParamLimits

0x8964,	// (0x00018196) main_touch_calib_button_pane

0x9cd8,	// (0x0001950a) bg_button_pane_cp18_ParamLimits

0x9cd8,	// (0x0001950a) bg_button_pane_cp18

0xeafe,	// (0x0001e330) main_touch_calib_button_pane_t1_ParamLimits

0xeafe,	// (0x0001e330) main_touch_calib_button_pane_t1

0xeb14,	// (0x0001e346) main_touch_calib_button_pane_t2_ParamLimits

0xeb14,	// (0x0001e346) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001f679) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001f679) main_touch_calib_button_pane_t

0x9514,	// (0x00018d46) cell_ncimui_button_pane

0x9514,	// (0x00018d46) bg_button_pane_cp032

0xeb32,	// (0x0001e364) cell_ncimui_button_pane_t1

0xcdfa,	// (0x0001c62c) image3_infobar_pane_ParamLimits

0xcdfa,	// (0x0001c62c) image3_infobar_pane

0x7a17,	// (0x00017249) fs_bigclock_status_pane_ParamLimits

0x7a17,	// (0x00017249) fs_bigclock_status_pane

0x7a24,	// (0x00017256) main_fs_bigclock_clock_pane_ParamLimits

0x7a24,	// (0x00017256) main_fs_bigclock_clock_pane

0x7a4e,	// (0x00017280) main_fs_bigclock_indi_pane_ParamLimits

0x7a4e,	// (0x00017280) main_fs_bigclock_indi_pane

0x7a8c,	// (0x000172be) main_fs_bigclock_swipe_pane_ParamLimits

0x7a8c,	// (0x000172be) main_fs_bigclock_swipe_pane

0x9514,	// (0x00018d46) main_fs_clock_dumped_data

0xdfd4,	// (0x0001d806) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfd4,	// (0x0001d806) list_single_fs_bigclock_indicator_pane_g1

0xdffe,	// (0x0001d830) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdffe,	// (0x0001d830) list_single_fs_bigclock_indicator_pane_g2

0xe018,	// (0x0001d84a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe018,	// (0x0001d84a) list_single_fs_bigclock_indicator_pane_g3

0xe032,	// (0x0001d864) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe032,	// (0x0001d864) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001f4a6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001f4a6) list_single_fs_bigclock_indicator_pane_g

0xe05d,	// (0x0001d88f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe05d,	// (0x0001d88f) list_single_fs_bigclock_indicator_pane_t1

0xe085,	// (0x0001d8b7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe085,	// (0x0001d8b7) list_single_fs_bigclock_indicator_pane_t2

0xe0ad,	// (0x0001d8df) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0ad,	// (0x0001d8df) list_single_fs_bigclock_indicator_pane_t3

0xe0d5,	// (0x0001d907) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0d5,	// (0x0001d907) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001f4b1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001f4b1) list_single_fs_bigclock_indicator_pane_t

0xeb40,	// (0x0001e372) image3_infobar_fav_pane_ParamLimits

0xeb40,	// (0x0001e372) image3_infobar_fav_pane

0xeb50,	// (0x0001e382) image3_infobar_loc_pane_ParamLimits

0xeb50,	// (0x0001e382) image3_infobar_loc_pane

0xeb66,	// (0x0001e398) image3_infobar_time_pane_ParamLimits

0xeb66,	// (0x0001e398) image3_infobar_time_pane

0xc2af,	// (0x0001bae1) image3_infobar_time_pane_g1

0xeb76,	// (0x0001e3a8) image3_infobar_time_pane_t1

0xc2af,	// (0x0001bae1) image3_infobar_loc_pane_g1

0xeb84,	// (0x0001e3b6) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001f67e) image3_infobar_loc_pane_g

0xeb8c,	// (0x0001e3be) image3_infobar_loc_pane_t1

0xc2af,	// (0x0001bae1) image3_infobar_fav_pane_g1

0xeb9a,	// (0x0001e3cc) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001f683) image3_infobar_fav_pane_g

0xeba2,	// (0x0001e3d4) fs_bigclock_status_battery_pane

0xebab,	// (0x0001e3dd) fs_bigclock_status_signal_pane

0xebb4,	// (0x0001e3e6) fs_bigclock_status_title_pane

0xebbd,	// (0x0001e3ef) fs_bigclock_status_signal_pane_g1

0xebc6,	// (0x0001e3f8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001f688) fs_bigclock_status_signal_pane_g

0xebce,	// (0x0001e400) fs_bigclock_status_battery_pane_g1

0xebd7,	// (0x0001e409) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001f68d) fs_bigclock_status_battery_pane_g

0xebdf,	// (0x0001e411) fs_bigclock_status_title_pane_t1

0xc2af,	// (0x0001bae1) main_fs_bigclock_clock_pane_g1

0xebed,	// (0x0001e41f) main_fs_bigclock_clock_pane_g2

0xebf8,	// (0x0001e42a) main_fs_bigclock_clock_pane_g3

0xebf8,	// (0x0001e42a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001f692) main_fs_bigclock_clock_pane_g

0xec04,	// (0x0001e436) main_fs_bigclock_clock_pane_t1

0x8979,	// (0x000181ab) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001f69b) main_fs_bigclock_clock_pane_t

0x8988,	// (0x000181ba) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8988,	// (0x000181ba) list_single_fs_bigclock_indicator_pane

0x8999,	// (0x000181cb) list_single_fs_bigclock_pane_ParamLimits

0x8999,	// (0x000181cb) list_single_fs_bigclock_pane

0xec1b,	// (0x0001e44d) main_fs_bigclock_indicator_pane_t1

0xec2a,	// (0x0001e45c) list_single_fs_bigclock_pane_g1

0xec32,	// (0x0001e464) list_single_fs_bigclock_pane_t1

0xc2af,	// (0x0001bae1) main_fs_bigclock_swipe_pane_g1

0xec75,	// (0x0001e4a7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001f6ac) main_fs_bigclock_swipe_pane_g

0xec7d,	// (0x0001e4af) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec7d,	// (0x0001e4af) main_fs_bigclock_swipe_pane_t1

0x22d1,	// (0x00011b03) call_type_pane_ParamLimits

0x9514,	// (0x00018d46) main_btmg_pane

0xe8b9,	// (0x0001e0eb) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8b9,	// (0x0001e0eb) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001f61f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001f61f) list_single_cale_mrui_row_pane_g

0xea3b,	// (0x0001e26d) list_recal_vselct_arw_lo_pane

0xea43,	// (0x0001e275) list_recal_vselct_arw_up_pane

0xea4b,	// (0x0001e27d) list_recal_vselct_pane

0x89fc,	// (0x0001822e) btmg_button_pane

0x8a06,	// (0x00018238) main_btmg_pane_g1

0x9514,	// (0x00018d46) bg_button_pane_cp044

0xec9a,	// (0x0001e4cc) btmg_button_pane_t1

0xbd8e,	// (0x0001b5c0) aid_listscroll_gen

0x9575,	// (0x00018da7) main_cntbar_detail_pane

0xe58a,	// (0x0001ddbc) list_cmail_folder_pane

0xe59a,	// (0x0001ddcc) sp_fs_scroll_pane_cp03_ParamLimits

0x8a10,	// (0x00018242) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a10,	// (0x00018242) list_single_fs_dyc_pane_cp01

0xeca8,	// (0x0001e4da) aid_size_cmail_indent

0xecb1,	// (0x0001e4e3) list_single_dyc_row_pane_cp01

0x8a58,	// (0x0001828a) cntbar_detail_list_pane_ParamLimits

0x8a58,	// (0x0001828a) cntbar_detail_list_pane

0x8aaa,	// (0x000182dc) main_cntbar_detail_cont_pane_ParamLimits

0x8aaa,	// (0x000182dc) main_cntbar_detail_cont_pane

0x21f4,	// (0x00011a26) scroll_pane_cp032_ParamLimits

0x21f4,	// (0x00011a26) scroll_pane_cp032

0x8abe,	// (0x000182f0) cntbar_detail_list_event_pane_ParamLimits

0x8abe,	// (0x000182f0) cntbar_detail_list_event_pane

0x8a6a,	// (0x0001829c) cntbar_detail_list_shct_pane

0xa1b9,	// (0x000199eb) aid_list_gen

0xecba,	// (0x0001e4ec) aid_scroll

0xecc3,	// (0x0001e4f5) aid_size_touch_scroll_bar

0x6dcb,	// (0x000165fd) aid_list_double

0xeccc,	// (0x0001e4fe) aid_list_single

0x6dcb,	// (0x000165fd) aid_list_single_lg

0xecd5,	// (0x0001e507) aid_list_z_g_a_sm

0xecdd,	// (0x0001e50f) aid_list_z_g_d

0x8ace,	// (0x00018300) aid_txt_z_prm

0x8ade,	// (0x00018310) aid_txt_z_prm_cp01

0x8aec,	// (0x0001831e) aid_txt_z_sec

0x8afa,	// (0x0001832c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8afa,	// (0x0001832c) main_cntbar_detail_cont_pane_g1

0x8b0e,	// (0x00018340) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b0e,	// (0x00018340) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001f6b1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001f6b1) main_cntbar_detail_cont_pane_g

0xece5,	// (0x0001e517) main_cntbar_detail_cont_pane_t1

0xecf3,	// (0x0001e525) main_cntbar_detail_cont_pane_t2

0xed01,	// (0x0001e533) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001f6b6) main_cntbar_detail_cont_pane_t

0x8b1e,	// (0x00018350) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b1e,	// (0x00018350) cell_cntbar_detail_list_shct_pane

0xed0f,	// (0x0001e541) cntbar_detail_list_shct_pane_g1

0xed18,	// (0x0001e54a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001f6bd) cntbar_detail_list_shct_pane_g

0x8b30,	// (0x00018362) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b30,	// (0x00018362) cntbar_detail_list_event_pane_g1

0x8b3c,	// (0x0001836e) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b3c,	// (0x0001836e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001f6c2) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001f6c2) cntbar_detail_list_event_pane_g

0x8baa,	// (0x000183dc) cntbar_detail_list_event_pane_t1_ParamLimits

0x8baa,	// (0x000183dc) cntbar_detail_list_event_pane_t1

0x8bbf,	// (0x000183f1) cntbar_detail_list_event_pane_t2_ParamLimits

0x8bbf,	// (0x000183f1) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001f6cf) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001f6cf) cntbar_detail_list_event_pane_t

0xc2af,	// (0x0001bae1) cell_cntbar_detail_list_shct_pane_g1

0x2677,	// (0x00011ea9) navi_pane_mv_g3

0x9575,	// (0x00018da7) main_cntbar_detail_pane_ParamLimits

0x9514,	// (0x00018d46) main_notif_wgt_pane

0xcb8e,	// (0x0001c3c0) aid_tch_main_mp4_pane_g4

0xcd8c,	// (0x0001c5be) popup_slider_window_cp02

0xea31,	// (0x0001e263) list_recal_day_event_pane

0x8a28,	// (0x0001825a) cntbar_detail_btn_pane_ParamLimits

0x8a28,	// (0x0001825a) cntbar_detail_btn_pane

0x8a40,	// (0x00018272) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a40,	// (0x00018272) cntbar_detail_btn_pane_cp01

0x8a6a,	// (0x0001829c) cntbar_detail_list_shct_pane_ParamLimits

0x8a7a,	// (0x000182ac) cntbar_detail_pane_g1_ParamLimits

0x8a7a,	// (0x000182ac) cntbar_detail_pane_g1

0x8a8e,	// (0x000182c0) cntbar_detail_pane_t1_ParamLimits

0x8a8e,	// (0x000182c0) cntbar_detail_pane_t1

0x8b48,	// (0x0001837a) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b48,	// (0x0001837a) cntbar_detail_list_event_pane_g3

0x8b60,	// (0x00018392) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b60,	// (0x00018392) cntbar_detail_list_event_pane_g4

0x8b78,	// (0x000183aa) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b78,	// (0x000183aa) cntbar_detail_list_event_pane_g5

0x8b90,	// (0x000183c2) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b90,	// (0x000183c2) cntbar_detail_list_event_pane_g6

0x8bd4,	// (0x00018406) cntbar_detail_list_event_pane_t3_ParamLimits

0x8bd4,	// (0x00018406) cntbar_detail_list_event_pane_t3

0x8be6,	// (0x00018418) popup_notif_wgt_window_ParamLimits

0x8be6,	// (0x00018418) popup_notif_wgt_window

0x8bff,	// (0x00018431) popup_submenu_window_cp01_ParamLimits

0x8bff,	// (0x00018431) popup_submenu_window_cp01

0x9f04,	// (0x00019736) bg_popup_window_pane_cp10

0xed21,	// (0x0001e553) listscroll_notif_wgt_pane

0xed33,	// (0x0001e565) list_notif_wgt_window

0xed3c,	// (0x0001e56e) scroll_pane_cp033

0x8c13,	// (0x00018445) list_notif_wgt_row_pane_ParamLimits

0x8c13,	// (0x00018445) list_notif_wgt_row_pane

0xed45,	// (0x0001e577) aid_size_list_notif_wgt_del

0xed52,	// (0x0001e584) list_notif_wgt_row_pane_g1

0xed5e,	// (0x0001e590) list_notif_wgt_row_pane_g2

0xed72,	// (0x0001e5a4) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001f6d6) list_notif_wgt_row_pane_g

0xed7f,	// (0x0001e5b1) list_notif_wgt_row_pane_t1

0xed95,	// (0x0001e5c7) list_notif_wgt_row_pane_t2

0xeda7,	// (0x0001e5d9) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001f6dd) list_notif_wgt_row_pane_t

0xd383,	// (0x0001cbb5) list_recal_day_event_pane_g1

0xedb9,	// (0x0001e5eb) list_recal_day_event_pane_t1

0x9514,	// (0x00018d46) bg_button_pane_cp045

0xedc8,	// (0x0001e5fa) cntbar_detail_btn_pane_t1

0xbda2,	// (0x0001b5d4) main_callh_pane_ParamLimits

0xbda2,	// (0x0001b5d4) main_callh_pane

0x9514,	// (0x00018d46) main_coverflow0_pane

0x9514,	// (0x00018d46) main_wgtman_pane

0x7aa4,	// (0x000172d6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7aa4,	// (0x000172d6) main_fs_bigclock_unlock_btn_pane

0x8426,	// (0x00017c58) bg_button_pane_cp16

0x8436,	// (0x00017c68) cell_tport_appsw_pane_g3

0x8c23,	// (0x00018455) cf0_flow_pane_ParamLimits

0x8c23,	// (0x00018455) cf0_flow_pane

0xedea,	// (0x0001e61c) listscroll_cf0_pane

0xedf5,	// (0x0001e627) main_cf0_pane_g1

0x8c38,	// (0x0001846a) main_cf0_pane_t1_ParamLimits

0x8c38,	// (0x0001846a) main_cf0_pane_t1

0x8c4f,	// (0x00018481) main_cf0_pane_t2_ParamLimits

0x8c4f,	// (0x00018481) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001f6e9) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001f6e9) main_cf0_pane_t

0xee07,	// (0x0001e639) scroll_pane_cp11

0x8c66,	// (0x00018498) cf0_flow_pane_g1

0x8c72,	// (0x000184a4) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001f6ee) cf0_flow_pane_g

0x8c7e,	// (0x000184b0) cf0_flow_pane_t1

0x9514,	// (0x00018d46) main_call6_pane

0x9514,	// (0x00018d46) main_calllock_pane

0x8c90,	// (0x000184c2) call6_btn_grp_pane_ParamLimits

0x8c90,	// (0x000184c2) call6_btn_grp_pane

0x8caa,	// (0x000184dc) call6_pane_g1_ParamLimits

0x8caa,	// (0x000184dc) call6_pane_g1

0x8cc0,	// (0x000184f2) popup_call6_1st_window_ParamLimits

0x8cc0,	// (0x000184f2) popup_call6_1st_window

0x8cd1,	// (0x00018503) popup_call6_2nd_window_ParamLimits

0x8cd1,	// (0x00018503) popup_call6_2nd_window

0x8ce2,	// (0x00018514) cell_call6_btn_pane_ParamLimits

0x8ce2,	// (0x00018514) cell_call6_btn_pane

0x9f04,	// (0x00019736) bg_popup_call2_in_pane_cp03

0xee12,	// (0x0001e644) popup_call6_1st_window_g1

0xee1a,	// (0x0001e64c) popup_call6_1st_window_g2

0xee22,	// (0x0001e654) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001f6f3) popup_call6_1st_window_g

0xee2a,	// (0x0001e65c) popup_call6_1st_window_t1

0xee39,	// (0x0001e66b) popup_call6_1st_window_t2

0xee49,	// (0x0001e67b) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001f6fa) popup_call6_1st_window_t

0x9f04,	// (0x00019736) bg_popup_call2_in_pane_cp04

0xee12,	// (0x0001e644) popup_call6_2nd_window_g1

0xee1a,	// (0x0001e64c) popup_call6_2nd_window_g2

0xee22,	// (0x0001e654) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001f6f3) popup_call6_2nd_window_g

0xee2a,	// (0x0001e65c) popup_call6_2nd_window_t1

0x9514,	// (0x00018d46) bg_button_pane_cp15

0xee59,	// (0x0001e68b) cell_call6_btn_pane_g1

0xee62,	// (0x0001e694) cell_call6_btn_pane_t1

0x8cf6,	// (0x00018528) listscroll_wgtman_pane_ParamLimits

0x8cf6,	// (0x00018528) listscroll_wgtman_pane

0x8d17,	// (0x00018549) wgtman_btn_pane_ParamLimits

0x8d17,	// (0x00018549) wgtman_btn_pane

0xa7a7,	// (0x00019fd9) aid_scroll_copy1

0xee71,	// (0x0001e6a3) list_wgtman_pane

0x8d5a,	// (0x0001858c) wgtman_btn_pane_g1_ParamLimits

0x8d5a,	// (0x0001858c) wgtman_btn_pane_g1

0x8d86,	// (0x000185b8) wgtman_btn_pane_t1_ParamLimits

0x8d86,	// (0x000185b8) wgtman_btn_pane_t1

0xee7b,	// (0x0001e6ad) wgtman_btn_pane_t2_ParamLimits

0xee7b,	// (0x0001e6ad) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001f701) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001f701) wgtman_btn_pane_t

0xd357,	// (0x0001cb89) listrow_wgtman_pane_ParamLimits

0xd357,	// (0x0001cb89) listrow_wgtman_pane

0x8dc3,	// (0x000185f5) listrow_wgtman_pane_g1

0x8dd0,	// (0x00018602) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001f706) listrow_wgtman_pane_g

0x8dee,	// (0x00018620) listrow_wgtman_pane_t1

0x8e06,	// (0x00018638) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001f70b) listrow_wgtman_pane_t

0x8e2c,	// (0x0001865e) wait_bar_pane_cp09

0xee92,	// (0x0001e6c4) main_calllock_btn_pane

0xee9c,	// (0x0001e6ce) main_calllock_pane_g1

0x9514,	// (0x00018d46) bg_button_pane_cp17

0xeea8,	// (0x0001e6da) main_calllock_btn_pane_g1

0xeeb1,	// (0x0001e6e3) main_calllock_btn_pane_t1

0x9514,	// (0x00018d46) main_dialer3_pane

0x9514,	// (0x00018d46) main_fmrd2_pane

0xc2af,	// (0x0001bae1) main_fs_bigclock_unlock_btn_pane_g1

0xeec8,	// (0x0001e6fa) main_fs_bigclock_unlock_btn_pane_t1

0x8e3e,	// (0x00018670) area_fmrd2_info_pane_ParamLimits

0x8e3e,	// (0x00018670) area_fmrd2_info_pane

0x8e4d,	// (0x0001867f) area_fmrd2_visual_pane_ParamLimits

0x8e4d,	// (0x0001867f) area_fmrd2_visual_pane

0x8e5b,	// (0x0001868d) fmrd2_indi_pane_ParamLimits

0x8e5b,	// (0x0001868d) fmrd2_indi_pane

0x8e68,	// (0x0001869a) area_fmrd2_visual_pane_g1

0x8e70,	// (0x000186a2) area_fmrd2_visual_pane_t1

0x8e80,	// (0x000186b2) area_fmrd2_visual_pane_t2

0x8e90,	// (0x000186c2) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001f715) area_fmrd2_visual_pane_t

0x8ea0,	// (0x000186d2) area_fmrd2_info_pane_g1

0x8ea8,	// (0x000186da) area_fmrd2_info_pane_t1

0x8eb8,	// (0x000186ea) area_fmrd2_info_pane_t2

0x8ec8,	// (0x000186fa) area_fmrd2_info_pane_t3

0x8ed8,	// (0x0001870a) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001f71c) area_fmrd2_info_pane_t

0x8ee8,	// (0x0001871a) fmrd2_indi_pane_t1

0x8ef8,	// (0x0001872a) fmrd2_indi_pane_t2

0x8f08,	// (0x0001873a) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001f725) fmrd2_indi_pane_t

0xe041,	// (0x0001d873) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe041,	// (0x0001d873) list_single_fs_bigclock_indicator_pane_g5

0xe0f1,	// (0x0001d923) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0f1,	// (0x0001d923) list_single_fs_bigclock_indicator_pane_t5

0x85c1,	// (0x00017df3) aid_cell_bcale_month_pane_ParamLimits

0x85c1,	// (0x00017df3) aid_cell_bcale_month_pane

0x85df,	// (0x00017e11) bcale_month_pane_ParamLimits

0x85df,	// (0x00017e11) bcale_month_pane

0x8601,	// (0x00017e33) bcale_preview_pane_ParamLimits

0x8601,	// (0x00017e33) bcale_preview_pane

0xec32,	// (0x0001e464) list_single_fs_bigclock_pane_t1_ParamLimits

0xec51,	// (0x0001e483) list_single_fs_bigclock_pane_t2_ParamLimits

0xec51,	// (0x0001e483) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001f6a7) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001f6a7) list_single_fs_bigclock_pane_t

0xeec0,	// (0x0001e6f2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001f710) main_fs_bigclock_unlock_btn_pane_g

0x8f18,	// (0x0001874a) aid_dia3_key_size_ParamLimits

0x8f18,	// (0x0001874a) aid_dia3_key_size

0x8f27,	// (0x00018759) aid_dia3_listrow_size_ParamLimits

0x8f27,	// (0x00018759) aid_dia3_listrow_size

0x8f3c,	// (0x0001876e) dia3_keypad_fun_pane_ParamLimits

0x8f3c,	// (0x0001876e) dia3_keypad_fun_pane

0x8f58,	// (0x0001878a) dia3_keypad_num_pane_ParamLimits

0x8f58,	// (0x0001878a) dia3_keypad_num_pane

0x8f71,	// (0x000187a3) dia3_listscroll_pane_ParamLimits

0x8f71,	// (0x000187a3) dia3_listscroll_pane

0x8f84,	// (0x000187b6) dia3_numentry_pane_ParamLimits

0x8f84,	// (0x000187b6) dia3_numentry_pane

0xeed6,	// (0x0001e708) dia3_list_pane

0xeee1,	// (0x0001e713) scroll_pane_cp12

0x9514,	// (0x00018d46) bg_dia3_numentry_pane

0x8f98,	// (0x000187ca) dia3_numentry_pane_t1

0x8fa7,	// (0x000187d9) cell_dia3_key_num_pane

0x8faf,	// (0x000187e1) cell_dia3_key0_fun_pane_ParamLimits

0x8faf,	// (0x000187e1) cell_dia3_key0_fun_pane

0x8fc3,	// (0x000187f5) cell_dia3_key1_fun_pane_ParamLimits

0x8fc3,	// (0x000187f5) cell_dia3_key1_fun_pane

0x8fdb,	// (0x0001880d) dia3_listrow_pane

0xdd3f,	// (0x0001d571) bg_dia3_numentry_pane_g1

0x9514,	// (0x00018d46) bg_button_pane_cp21

0xeeec,	// (0x0001e71e) cell_dia3_key_num_pane_t1

0xeefa,	// (0x0001e72c) cell_dia3_key_num_pane_t2

0xef09,	// (0x0001e73b) cell_dia3_key_num_pane_t3

0xef18,	// (0x0001e74a) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001f72c) cell_dia3_key_num_pane_t

0x9514,	// (0x00018d46) bg_button_pane_cp19

0x8fed,	// (0x0001881f) cell_dia3_key0_fun_pane_g1

0x9514,	// (0x00018d46) bg_button_pane_cp20

0x8ff5,	// (0x00018827) cell_dia3_key1_fun_pane_g1

0x8ffd,	// (0x0001882f) area_left_week_number_pane

0x900b,	// (0x0001883d) area_top_day_name_pane

0x901e,	// (0x00018850) frame_month_view_pane

0xef27,	// (0x0001e759) grid_month_view_pane

0x9033,	// (0x00018865) cell_top_day_name_pane_ParamLimits

0x9033,	// (0x00018865) cell_top_day_name_pane

0x9062,	// (0x00018894) cell_area_left_week_number_pane_ParamLimits

0x9062,	// (0x00018894) cell_area_left_week_number_pane

0x9076,	// (0x000188a8) cell_month_view_pane_ParamLimits

0x9076,	// (0x000188a8) cell_month_view_pane

0xef35,	// (0x0001e767) frm_month_g1

0x90a5,	// (0x000188d7) frm_month_g2

0x90b8,	// (0x000188ea) frm_month_g3

0x90cb,	// (0x000188fd) frm_month_g4

0x90de,	// (0x00018910) frm_month_g5

0x90f1,	// (0x00018923) frm_month_g6

0x9104,	// (0x00018936) frm_month_g7

0xef42,	// (0x0001e774) frm_month_g8

0x9119,	// (0x0001894b) frm_month_g9

0x9129,	// (0x0001895b) frm_month_g10

0x9139,	// (0x0001896b) frm_month_g11

0x9149,	// (0x0001897b) frm_month_g12

0x915b,	// (0x0001898d) frm_month_g13

0x916f,	// (0x000189a1) frm_month_g14

0x9183,	// (0x000189b5) frm_month_g15

0x9197,	// (0x000189c9) frm_month_g16

0x000f,

0xff03,	// (0x0001f735) frm_month_g

0xef4f,	// (0x0001e781) cell_top_day_name_pane_t1

0x91ab,	// (0x000189dd) cell_area_left_week_number_pane_g1

0x91b7,	// (0x000189e9) cell_area_left_week_number_pane_t1

0xc4df,	// (0x0001bd11) cell_month_view_pane_g1

0x91ca,	// (0x000189fc) cell_month_view_pane_t1

0x9514,	// (0x00018d46) main_fps_pane

0xe314,	// (0x0001db46) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe314,	// (0x0001db46) cmail_ddmenu_btn02_pane_cp1

0xe330,	// (0x0001db62) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe330,	// (0x0001db62) cmail_ddmenu_btn02_pane_cp2

0x88d2,	// (0x00018104) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88d2,	// (0x00018104) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001f65a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001f65a) cmail_ddmenu_btn02_pane_g

0x88f3,	// (0x00018125) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88f3,	// (0x00018125) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001f65f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001f65f) cmail_ddmenu_btn02_pane_t

0x91dd,	// (0x00018a0f) fps_text_pane_ParamLimits

0x91dd,	// (0x00018a0f) fps_text_pane

0x91f4,	// (0x00018a26) main_fps_pane_g1_ParamLimits

0x91f4,	// (0x00018a26) main_fps_pane_g1

0x920c,	// (0x00018a3e) wait_bar_pane_cp010_ParamLimits

0x920c,	// (0x00018a3e) wait_bar_pane_cp010

0x921f,	// (0x00018a51) fps_text_pane_t1_ParamLimits

0x921f,	// (0x00018a51) fps_text_pane_t1

0xedd6,	// (0x0001e608) cam4_image_uncrop_pane_g1

0xeddf,	// (0x0001e611) cam4_image_uncrop_pane_g2

0x5ad5,	// (0x00015307) cam4_image_uncrop_pane_g3

0x5ade,	// (0x00015310) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001f120) cam4_image_uncrop_pane_g

0x8fdb,	// (0x0001880d) dia3_listrow_pane_ParamLimits

0x9514,	// (0x00018d46) main_phob2_pane

0x83f5,	// (0x00017c27) cell_tport_appsw_pane_cp02_ParamLimits

0x83f5,	// (0x00017c27) cell_tport_appsw_pane_cp02

0x8409,	// (0x00017c3b) cell_tport_appsw_pane_cp03_ParamLimits

0x8409,	// (0x00017c3b) cell_tport_appsw_pane_cp03

0x9514,	// (0x00018d46) phob2_contact_card_pane

0x9514,	// (0x00018d46) phob2_listscroll_pane

0xef62,	// (0x0001e794) phob2_list_pane

0xef6a,	// (0x0001e79c) scroll_pane_cp034

0x9237,	// (0x00018a69) phob2_cc_data_pane_ParamLimits

0x9237,	// (0x00018a69) phob2_cc_data_pane

0x9258,	// (0x00018a8a) phob2_cc_listscroll_pane_ParamLimits

0x9258,	// (0x00018a8a) phob2_cc_listscroll_pane

0x927a,	// (0x00018aac) list_double_large_graphic_phob2_pane_ParamLimits

0x927a,	// (0x00018aac) list_double_large_graphic_phob2_pane

0x928e,	// (0x00018ac0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x928e,	// (0x00018ac0) list_double_large_graphic_phob2_pane_g1

0x92a4,	// (0x00018ad6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92a4,	// (0x00018ad6) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001f756) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001f756) list_double_large_graphic_phob2_pane_g

0x92b0,	// (0x00018ae2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92b0,	// (0x00018ae2) list_double_large_graphic_phob2_pane_t1

0x92c5,	// (0x00018af7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92c5,	// (0x00018af7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001f75b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001f75b) list_double_large_graphic_phob2_pane_t

0x9514,	// (0x00018d46) list_highlight_pane_cp024

0x92d7,	// (0x00018b09) phob2_cc_button_pane

0x92df,	// (0x00018b11) phob2_cc_data_pane_g1_ParamLimits

0x92df,	// (0x00018b11) phob2_cc_data_pane_g1

0x92f5,	// (0x00018b27) phob2_cc_data_pane_g2_ParamLimits

0x92f5,	// (0x00018b27) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001f760) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001f760) phob2_cc_data_pane_g

0x9305,	// (0x00018b37) phob2_cc_data_pane_t1_ParamLimits

0x9305,	// (0x00018b37) phob2_cc_data_pane_t1

0x931d,	// (0x00018b4f) phob2_cc_data_pane_t2_ParamLimits

0x931d,	// (0x00018b4f) phob2_cc_data_pane_t2

0x9337,	// (0x00018b69) phob2_cc_data_pane_t3_ParamLimits

0x9337,	// (0x00018b69) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001f765) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001f765) phob2_cc_data_pane_t

0xef72,	// (0x0001e7a4) phob2_cc_list_pane_ParamLimits

0xef72,	// (0x0001e7a4) phob2_cc_list_pane

0xd42c,	// (0x0001cc5e) scroll_pane_cp035_ParamLimits

0xd42c,	// (0x0001cc5e) scroll_pane_cp035

0x9575,	// (0x00018da7) bg_button_pane_cp033

0xef7e,	// (0x0001e7b0) phob2_cc_button_pane_g1

0xef8a,	// (0x0001e7bc) phob2_cc_button_pane_t1

0xef9f,	// (0x0001e7d1) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001f76c) phob2_cc_button_pane_t

0x9351,	// (0x00018b83) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9351,	// (0x00018b83) list_double_large_graphic_phob2_cc_pane

0x9365,	// (0x00018b97) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9365,	// (0x00018b97) list_double_large_graphic_phob2_cc_pane_g1

0x9371,	// (0x00018ba3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9371,	// (0x00018ba3) list_double_large_graphic_phob2_cc_pane_g2

0x937d,	// (0x00018baf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x937d,	// (0x00018baf) list_double_large_graphic_phob2_cc_pane_g3

0x9389,	// (0x00018bbb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9389,	// (0x00018bbb) list_double_large_graphic_phob2_cc_pane_g4

0x9395,	// (0x00018bc7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9395,	// (0x00018bc7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001f771) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001f771) list_double_large_graphic_phob2_cc_pane_g

0x93a1,	// (0x00018bd3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93a1,	// (0x00018bd3) list_double_large_graphic_phob2_cc_pane_t1

0x93ca,	// (0x00018bfc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93ca,	// (0x00018bfc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001f77c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001f77c) list_double_large_graphic_phob2_cc_pane_t

0xefb1,	// (0x0001e7e3) list_highlight_pane_cp025_ParamLimits

0xefb1,	// (0x0001e7e3) list_highlight_pane_cp025

0x9575,	// (0x00018da7) bg_button_pane_cp033_ParamLimits

0xef7e,	// (0x0001e7b0) phob2_cc_button_pane_g1_ParamLimits

0xef8a,	// (0x0001e7bc) phob2_cc_button_pane_t1_ParamLimits

0xef9f,	// (0x0001e7d1) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001f76c) phob2_cc_button_pane_t_ParamLimits

0xfe13,	// (0x0000f645) popup_wgtman_window

0xd180,	// (0x0001c9b2) scroll_pane_cp038

0x8d3c,	// (0x0001856e) wgtman_btn_pane_cp_01_ParamLimits

0x8d3c,	// (0x0001856e) wgtman_btn_pane_cp_01

0xefbf,	// (0x0001e7f1) wgtman_content_pane

0xefc8,	// (0x0001e7fa) wgtman_heading_pane

0x9514,	// (0x00018d46) bg_heading_pane_cp02

0xefd1,	// (0x0001e803) wgtman_heading_pane_g1

0xefd9,	// (0x0001e80b) wgtman_heading_pane_t1

0xefe7,	// (0x0001e819) scroll_pane_cp036

0xefef,	// (0x0001e821) wgtman_list_pane

0xeff7,	// (0x0001e829) wgtman_list_pane_t1_ParamLimits

0xeff7,	// (0x0001e829) wgtman_list_pane_t1

0xcefd,	// (0x0001c72f) cam4_grid_pane

0x68c5,	// (0x000160f7) bg_button_pane_cp015_ParamLimits

0x68d9,	// (0x0001610b) bg_button_pane_cp016_ParamLimits

0x68ec,	// (0x0001611e) bg_button_pane_cp017_ParamLimits

0x6944,	// (0x00016176) popup_vitu2_query_window_g3_ParamLimits

0x6944,	// (0x00016176) popup_vitu2_query_window_g3

0x6a01,	// (0x00016233) popup_vitu2_query_window_t6_ParamLimits

0x6a01,	// (0x00016233) popup_vitu2_query_window_t6

0x6a2c,	// (0x0001625e) popup_vitu2_query_window_t7_ParamLimits

0x6a2c,	// (0x0001625e) popup_vitu2_query_window_t7

0xedd6,	// (0x0001e608) cam4_grid_pane_g1

0xeddf,	// (0x0001e611) cam4_grid_pane_g2

0xf011,	// (0x0001e843) cam4_grid_pane_g3

0xf01a,	// (0x0001e84c) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001f781) cam4_grid_pane_g

0x1041,	// (0x00010873) aid_placing_vt_slider_lsc_ParamLimits

0x132e,	// (0x00010b60) vidtel_button_pane_ParamLimits

0x132e,	// (0x00010b60) vidtel_button_pane

0xf025,	// (0x0001e857) bg_button_pane_cp034

0x93f3,	// (0x00018c25) vidtel_button_pane_g1

0xf02f,	// (0x0001e861) vidtel_button_pane_t1

0xd2bf,	// (0x0001caf1) aid_size_vtel_slider_touch

0xd42c,	// (0x0001cc5e) scroll_pane_cp039

0xdd7d,	// (0x0001d5af) ncim_query_button_pane_cp01_ParamLimits

0xdd9c,	// (0x0001d5ce) ncimui_query_pane_g1_ParamLimits

0x9575,	// (0x00018da7) input_focus_pane_cp012_ParamLimits

0xddc1,	// (0x0001d5f3) ncim_query_entry_pane_t1_ParamLimits

0xd42c,	// (0x0001cc5e) scroll_pane_cp039_ParamLimits

0x25e9,	// (0x00011e1b) navi_pane_bcale_mc_g1

0x25f1,	// (0x00011e23) navi_pane_bcale_mc_t1

0xe36d,	// (0x0001db9f) main_sp_fs_email_pane_g1

0xe379,	// (0x0001dbab) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001f517) main_sp_fs_email_pane_g

0xe8c5,	// (0x0001e0f7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8c5,	// (0x0001e0f7) list_single_cale_mrui_row_pane_g3

0x8913,	// (0x00018145) list_single_recal_day_pane_g5_event_pane

0xeaa3,	// (0x0001e2d5) list_single_recal_day_pane_g7

0xf03d,	// (0x0001e86f) list_recal_day_event_pane_cp01

0xf046,	// (0x0001e878) list_recal_vselct_arw_lo_pane_cp01

0xf04e,	// (0x0001e880) list_recal_vselct_arw_up_pane_cp01

0xf056,	// (0x0001e888) list_recal_vselct_pane_cp01

0xd383,	// (0x0001cbb5) list_recal_day_event_pane_cp01_g1

0xf060,	// (0x0001e892) list_recal_day_event_pane_cp01_t1

0xeaab,	// (0x0001e2dd) list_single_recal_day_pane_t1_ParamLimits

0xeabd,	// (0x0001e2ef) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001f66f) list_single_recal_day_pane_t_ParamLimits

0x9bf1,	// (0x00019423) bg_notes_pane_ParamLimits

0x9c9c,	// (0x000194ce) list_notes_pane_ParamLimits

0x0160,	// (0x0000f992) scroll_pane_cp06_ParamLimits

0x9cd8,	// (0x0001950a) main_notes_pane_ParamLimits

0x9514,	// (0x00018d46) main_welc_pane

0x93fb,	// (0x00018c2d) main_welc_body_pane_ParamLimits

0x93fb,	// (0x00018c2d) main_welc_body_pane

0x941a,	// (0x00018c4c) main_welc_opti_pane_ParamLimits

0x941a,	// (0x00018c4c) main_welc_opti_pane

0x9463,	// (0x00018c95) main_welc_pane_t1_ParamLimits

0x9463,	// (0x00018c95) main_welc_pane_t1

0x9485,	// (0x00018cb7) main_welc_body_row_pane_ParamLimits

0x9485,	// (0x00018cb7) main_welc_body_row_pane

0x9499,	// (0x00018ccb) main_welc_opti_row_pane_ParamLimits

0x9499,	// (0x00018ccb) main_welc_opti_row_pane

0xf06e,	// (0x0001e8a0) main_welc_opti_row_pane_g1

0xf076,	// (0x0001e8a8) main_welc_opti_row_pane_t1

0xf085,	// (0x0001e8b7) main_welc_body_row_pane_t1

0xed2b,	// (0x0001e55d) popup_notif_wgt_heading_pane

0xed45,	// (0x0001e577) aid_size_list_notif_wgt_del_ParamLimits

0xed52,	// (0x0001e584) list_notif_wgt_row_pane_g1_ParamLimits

0xed5e,	// (0x0001e590) list_notif_wgt_row_pane_g2_ParamLimits

0xed72,	// (0x0001e5a4) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001f6d6) list_notif_wgt_row_pane_g_ParamLimits

0xed7f,	// (0x0001e5b1) list_notif_wgt_row_pane_t1_ParamLimits

0xed95,	// (0x0001e5c7) list_notif_wgt_row_pane_t2_ParamLimits

0xeda7,	// (0x0001e5d9) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001f6dd) list_notif_wgt_row_pane_t_ParamLimits

0x8dc3,	// (0x000185f5) listrow_wgtman_pane_g1_ParamLimits

0x8dd0,	// (0x00018602) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001f706) listrow_wgtman_pane_g_ParamLimits

0x8dee,	// (0x00018620) listrow_wgtman_pane_t1_ParamLimits

0x8e06,	// (0x00018638) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001f70b) listrow_wgtman_pane_t_ParamLimits

0x8e2c,	// (0x0001865e) wait_bar_pane_cp09_ParamLimits

0x9514,	// (0x00018d46) bg_popup_heading_pane_cp02

0xf094,	// (0x0001e8c6) popup_notif_wgt_heading_pane_g1

0xf09c,	// (0x0001e8ce) popup_notif_wgt_heading_pane_t1

0x9514,	// (0x00018d46) main_vids_pane

0x9514,	// (0x00018d46) vids_listscroll_pane

0x94a9,	// (0x00018cdb) scroll_pane_cp040

0x9514,	// (0x00018d46) vids_list_pane

0x94b4,	// (0x00018ce6) vids_list_double_pane_ParamLimits

0x94b4,	// (0x00018ce6) vids_list_double_pane

0x94c5,	// (0x00018cf7) vids_list_double_pane_g1

0x94ce,	// (0x00018d00) vids_list_double_pane_t1

0x94de,	// (0x00018d10) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001f78f) vids_list_double_pane_t

0x9575,	// (0x00018da7) main_ncimui_pane_ParamLimits

0x75fd,	// (0x00016e2f) main_ncimui_pane_g1_ParamLimits

0x7609,	// (0x00016e3b) main_ncimui_pane_g2_ParamLimits

0x7609,	// (0x00016e3b) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001f41c) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001f41c) main_ncimui_pane_g

0x9439,	// (0x00018c6b) main_welc_pane_g1_ParamLimits

0x9439,	// (0x00018c6b) main_welc_pane_g1

0x944e,	// (0x00018c80) main_welc_pane_g2_ParamLimits

0x944e,	// (0x00018c80) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001f78a) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001f78a) main_welc_pane_g

0x9bf1,	// (0x00019423) listscroll_mce_pane_ParamLimits

0x26c9,	// (0x00011efb) wait_bar_pane_cp10

0xbd96,	// (0x0001b5c8) main_cale_day_pane_ParamLimits

0xbd96,	// (0x0001b5c8) main_cale_week_pane_ParamLimits

0x9bf1,	// (0x00019423) main_messa_pane_ParamLimits

0x4d93,	// (0x000145c5) main_clock2_btn_pane_ParamLimits

0x4d93,	// (0x000145c5) main_clock2_btn_pane

0xc673,	// (0x0001bea5) main_clock2_btn_pane_cp01_ParamLimits

0xc673,	// (0x0001bea5) main_clock2_btn_pane_cp01

0xe848,	// (0x0001e07a) list_cale_mrui_pane_ParamLimits

0xedff,	// (0x0001e631) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001f6e4) main_cf0_pane_g

0x8ffd,	// (0x0001882f) area_left_week_number_pane_ParamLimits

0x900b,	// (0x0001883d) area_top_day_name_pane_ParamLimits

0x901e,	// (0x00018850) frame_month_view_pane_ParamLimits

0xef27,	// (0x0001e759) grid_month_view_pane_ParamLimits

0xef35,	// (0x0001e767) frm_month_g1_ParamLimits

0x90a5,	// (0x000188d7) frm_month_g2_ParamLimits

0x90b8,	// (0x000188ea) frm_month_g3_ParamLimits

0x90cb,	// (0x000188fd) frm_month_g4_ParamLimits

0x90de,	// (0x00018910) frm_month_g5_ParamLimits

0x90f1,	// (0x00018923) frm_month_g6_ParamLimits

0x9104,	// (0x00018936) frm_month_g7_ParamLimits

0xef42,	// (0x0001e774) frm_month_g8_ParamLimits

0x9119,	// (0x0001894b) frm_month_g9_ParamLimits

0x9129,	// (0x0001895b) frm_month_g10_ParamLimits

0x9139,	// (0x0001896b) frm_month_g11_ParamLimits

0x9149,	// (0x0001897b) frm_month_g12_ParamLimits

0x915b,	// (0x0001898d) frm_month_g13_ParamLimits

0x916f,	// (0x000189a1) frm_month_g14_ParamLimits

0x9183,	// (0x000189b5) frm_month_g15_ParamLimits

0x9197,	// (0x000189c9) frm_month_g16_ParamLimits

0xff03,	// (0x0001f735) frm_month_g_ParamLimits

0xef4f,	// (0x0001e781) cell_top_day_name_pane_t1_ParamLimits

0x91ab,	// (0x000189dd) cell_area_left_week_number_pane_g1_ParamLimits

0x91b7,	// (0x000189e9) cell_area_left_week_number_pane_t1_ParamLimits

0xc4df,	// (0x0001bd11) cell_month_view_pane_g1_ParamLimits

0x91ca,	// (0x000189fc) cell_month_view_pane_t1_ParamLimits

0x9be9,	// (0x0001941b) main_clock2_btn_pane_g1

0xf0aa,	// (0x0001e8dc) main_clock2_btn_pane_t1

0x9575,	// (0x00018da7) listscroll_cmail_pane_ParamLimits

0xe36d,	// (0x0001db9f) main_sp_fs_email_pane_g1_ParamLimits

0xe379,	// (0x0001dbab) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001f517) main_sp_fs_email_pane_g_ParamLimits

0xea12,	// (0x0001e244) list_recal_day_pane_ParamLimits

0xea23,	// (0x0001e255) mian_recal_day_pane_t1

0x80d0,	// (0x00017902) list_single_dyc_row_text_pane_t4_ParamLimits

0x80d0,	// (0x00017902) list_single_dyc_row_text_pane_t4

0x8119,	// (0x0001794b) list_single_dyc_row_text_pane_t5_ParamLimits

0x8119,	// (0x0001794b) list_single_dyc_row_text_pane_t5

0xe451,	// (0x0001dc83) list_single_dyc_row_text_pane_t6_ParamLimits

0xe451,	// (0x0001dc83) list_single_dyc_row_text_pane_t6

0xa32c,	// (0x00019b5e) aid_mgn_list_cale_time_pane

0x9575,	// (0x00018da7) main_gallery2_pane_ParamLimits

0xc687,	// (0x0001beb9) main_clock2_pane_cp01_t1

0xc697,	// (0x0001bec9) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0001eff6) main_clock2_pane_cp01_t

0x05df,	// (0x0000fe11) cale_week_scroll_pane_g16_ParamLimits

0x05df,	// (0x0000fe11) cale_week_scroll_pane_g16

0x9f04,	// (0x00019736) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
