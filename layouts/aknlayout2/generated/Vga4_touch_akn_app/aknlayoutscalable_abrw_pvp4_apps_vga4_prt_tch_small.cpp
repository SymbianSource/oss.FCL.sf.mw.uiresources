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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005d87e };

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
0x0bee,	// (0x0005e46c) Screen

0x0bfa,	// (0x0005e478) application_window

0x0c4a,	// (0x0005e4c8) area_bottom_pane_ParamLimits

0x0c4a,	// (0x0005e4c8) area_bottom_pane

0x0c7f,	// (0x0005e4fd) area_top_pane_ParamLimits

0x0c7f,	// (0x0005e4fd) area_top_pane

0x9cec,	// (0x0006756a) call_video_uplink_pane_ParamLimits

0x9cec,	// (0x0006756a) call_video_uplink_pane

0x0d0e,	// (0x0005e58c) main_pane_ParamLimits

0x0d0e,	// (0x0005e58c) main_pane

0xc8b1,	// (0x0006a12f) context_pane

0x4634,	// (0x00061eb2) navi_pane

0x4658,	// (0x00061ed6) popup_cale_events_window_ParamLimits

0x4658,	// (0x00061ed6) popup_cale_events_window

0xc8c4,	// (0x0006a142) popup_mup_playback_window

0x4670,	// (0x00061eee) signal_pane

0xa8c3,	// (0x00068141) main_browser_pane

0xb440,	// (0x00068cbe) main_burst_pane

0x44e6,	// (0x00061d64) main_calc_pane

0xc854,	// (0x0006a0d2) main_cale_day_pane

0x1440,	// (0x0005ecbe) main_cale_month_pane

0xc854,	// (0x0006a0d2) main_cale_week_pane

0xb440,	// (0x00068cbe) main_call_pane

0xa11d,	// (0x0006799b) main_call_poc_pane

0xb440,	// (0x00068cbe) main_camera_pane

0xb440,	// (0x00068cbe) main_chi_dic_pane

0xb2c8,	// (0x00068b46) main_clock_pane

0xa11d,	// (0x0006799b) main_fmradio_pane

0xb440,	// (0x00068cbe) main_graph_messa_pane

0xa11d,	// (0x0006799b) main_help_pane

0xa8c3,	// (0x00068141) main_im_pane

0xa7fe,	// (0x0006807c) main_image_pane_ParamLimits

0xa7fe,	// (0x0006807c) main_image_pane

0xa11d,	// (0x0006799b) main_location2_pane

0xb440,	// (0x00068cbe) main_location_pane

0xa7fe,	// (0x0006807c) main_messa_pane

0xa11d,	// (0x0006799b) main_mp2_pane

0xb440,	// (0x00068cbe) main_mp_pane

0xa11d,	// (0x0006799b) main_msg_pane

0xa11d,	// (0x0006799b) main_mup_eq_pane

0xa11d,	// (0x0006799b) main_mup_pane

0xa8c3,	// (0x00068141) main_notes_pane

0xa11d,	// (0x0006799b) main_pec_pane

0xa11d,	// (0x0006799b) main_phob_pane

0xa11d,	// (0x0006799b) main_pinb_pane

0xa11d,	// (0x0006799b) main_postcard_pane

0xa11d,	// (0x0006799b) main_qdial_pane

0xb440,	// (0x00068cbe) main_skin_pane

0xa11d,	// (0x0006799b) main_smil2_pane

0xb440,	// (0x00068cbe) main_smil_pane

0xb440,	// (0x00068cbe) main_video_pane

0xb440,	// (0x00068cbe) main_video_tele_pane

0xa7fe,	// (0x0006807c) main_viewer_pane_ParamLimits

0xa7fe,	// (0x0006807c) main_viewer_pane

0xb440,	// (0x00068cbe) main_vorec_pane

0x451e,	// (0x00061d9c) popup_blid_sat_info_window_ParamLimits

0x451e,	// (0x00061d9c) popup_blid_sat_info_window

0x4538,	// (0x00061db6) popup_dyc_status_message_window_ParamLimits

0x4538,	// (0x00061db6) popup_dyc_status_message_window

0x4548,	// (0x00061dc6) popup_grid_large_graphic_window_ParamLimits

0x4548,	// (0x00061dc6) popup_grid_large_graphic_window

0x45c0,	// (0x00061e3e) popup_loc_request_window_ParamLimits

0x45c0,	// (0x00061e3e) popup_loc_request_window

0x4608,	// (0x00061e86) popup_wml_address_window_ParamLimits

0x4608,	// (0x00061e86) popup_wml_address_window

0x43be,	// (0x00061c3c) call_muted_g1

0x407d,	// (0x000618fb) popup_call_audio_conf_window_ParamLimits

0x407d,	// (0x000618fb) popup_call_audio_conf_window

0x43ce,	// (0x00061c4c) popup_call_audio_first_window_ParamLimits

0x43ce,	// (0x00061c4c) popup_call_audio_first_window

0x440e,	// (0x00061c8c) popup_call_audio_in_window_ParamLimits

0x440e,	// (0x00061c8c) popup_call_audio_in_window

0x4432,	// (0x00061cb0) popup_call_audio_out_window_ParamLimits

0x4432,	// (0x00061cb0) popup_call_audio_out_window

0x4454,	// (0x00061cd2) popup_call_audio_second_window_ParamLimits

0x4454,	// (0x00061cd2) popup_call_audio_second_window

0x4484,	// (0x00061d02) popup_call_audio_wait_window_ParamLimits

0x4484,	// (0x00061d02) popup_call_audio_wait_window

0x44a5,	// (0x00061d23) popup_number_entry_window_ParamLimits

0x44a5,	// (0x00061d23) popup_number_entry_window

0x9d0a,	// (0x00067588) bg_popup_call_pane_cp05_ParamLimits

0x9d0a,	// (0x00067588) bg_popup_call_pane_cp05

0x9d2a,	// (0x000675a8) popup_number_entry_window_t1

0x9d3d,	// (0x000675bb) popup_number_entry_window_t2

0x9d4f,	// (0x000675cd) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0006c94b) popup_number_entry_window_t

0x9d61,	// (0x000675df) text_title_cp2

0x9d74,	// (0x000675f2) bg_popup_call_pane_cp_ParamLimits

0x9d74,	// (0x000675f2) bg_popup_call_pane_cp

0x9d82,	// (0x00067600) call_thumbnail_pane

0x9d8a,	// (0x00067608) popup_call_audio_in_window_g1_ParamLimits

0x9d8a,	// (0x00067608) popup_call_audio_in_window_g1

0x9d96,	// (0x00067614) popup_call_audio_in_window_g2_ParamLimits

0x9d96,	// (0x00067614) popup_call_audio_in_window_g2

0x9da2,	// (0x00067620) popup_call_audio_in_window_g3_ParamLimits

0x9da2,	// (0x00067620) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0006c954) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0006c954) popup_call_audio_in_window_g

0x9dae,	// (0x0006762c) popup_call_audio_in_window_t1_ParamLimits

0x9dae,	// (0x0006762c) popup_call_audio_in_window_t1

0x9dca,	// (0x00067648) popup_call_audio_in_window_t2_ParamLimits

0x9dca,	// (0x00067648) popup_call_audio_in_window_t2

0x9de6,	// (0x00067664) popup_call_audio_in_window_t3_ParamLimits

0x9de6,	// (0x00067664) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0006c95b) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0006c95b) popup_call_audio_in_window_t

0x9d74,	// (0x000675f2) bg_popup_call_pane_cp01_ParamLimits

0x9d74,	// (0x000675f2) bg_popup_call_pane_cp01

0x9d82,	// (0x00067600) call_thumbnail_pane_cp02

0x9df9,	// (0x00067677) call_type_pane_cp022

0x9e01,	// (0x0006767f) popup_call_audio_out_window_g1_ParamLimits

0x9e01,	// (0x0006767f) popup_call_audio_out_window_g1

0x9e13,	// (0x00067691) popup_call_audio_out_window_g2_ParamLimits

0x9e13,	// (0x00067691) popup_call_audio_out_window_g2

0x9e1f,	// (0x0006769d) popup_call_audio_out_window_g3_ParamLimits

0x9e1f,	// (0x0006769d) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0006c962) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0006c962) popup_call_audio_out_window_g

0x9e31,	// (0x000676af) popup_call_audio_out_window_t1_ParamLimits

0x9e31,	// (0x000676af) popup_call_audio_out_window_t1

0x9e49,	// (0x000676c7) popup_call_audio_out_window_t2_ParamLimits

0x9e49,	// (0x000676c7) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0006c969) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0006c969) popup_call_audio_out_window_t

0x9e5e,	// (0x000676dc) bg_popup_call_pane_ParamLimits

0x9e5e,	// (0x000676dc) bg_popup_call_pane

0x0f12,	// (0x0005e790) call_thumbnail_pane_cp_ParamLimits

0x0f12,	// (0x0005e790) call_thumbnail_pane_cp

0x9ee2,	// (0x00067760) call_type_pane_cp01_ParamLimits

0x9ee2,	// (0x00067760) call_type_pane_cp01

0x9f26,	// (0x000677a4) popup_call_audio_first_window_g1_ParamLimits

0x9f26,	// (0x000677a4) popup_call_audio_first_window_g1

0x9f72,	// (0x000677f0) popup_call_audio_first_window_g2_ParamLimits

0x9f72,	// (0x000677f0) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0006c96e) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0006c96e) popup_call_audio_first_window_g

0x9fb6,	// (0x00067834) popup_call_audio_first_window_t1_ParamLimits

0x9fb6,	// (0x00067834) popup_call_audio_first_window_t1

0xa062,	// (0x000678e0) popup_call_audio_first_window_t4_ParamLimits

0xa062,	// (0x000678e0) popup_call_audio_first_window_t4

0xa0ee,	// (0x0006796c) popup_call_audio_first_window_t5_ParamLimits

0xa0ee,	// (0x0006796c) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0006c973) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0006c973) popup_call_audio_first_window_t

0xa11d,	// (0x0006799b) bg_popup_call_pane_cp02

0xa127,	// (0x000679a5) call_type_pane_cp023

0xa12f,	// (0x000679ad) popup_call_audio_wait_window_g1

0xa137,	// (0x000679b5) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0006c97a) popup_call_audio_wait_window_g

0xa13f,	// (0x000679bd) popup_call_audio_wait_window_t3

0xa14d,	// (0x000679cb) bg_popup_call_pane_cp03_ParamLimits

0xa14d,	// (0x000679cb) bg_popup_call_pane_cp03

0xa1ad,	// (0x00067a2b) call_thumbnail_pane_cp011_ParamLimits

0xa1ad,	// (0x00067a2b) call_thumbnail_pane_cp011

0xa1b9,	// (0x00067a37) call_type_pane_cp034_ParamLimits

0xa1b9,	// (0x00067a37) call_type_pane_cp034

0xa1f5,	// (0x00067a73) popup_call_audio_second_window_g1_ParamLimits

0xa1f5,	// (0x00067a73) popup_call_audio_second_window_g1

0xa231,	// (0x00067aaf) popup_call_audio_second_window_g2_ParamLimits

0xa231,	// (0x00067aaf) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0006c97f) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0006c97f) popup_call_audio_second_window_g

0xa26d,	// (0x00067aeb) popup_call_audio_second_window_t1_ParamLimits

0xa26d,	// (0x00067aeb) popup_call_audio_second_window_t1

0xa774,	// (0x00067ff2) popup_call_audio_second_window_t2_ParamLimits

0xa774,	// (0x00067ff2) popup_call_audio_second_window_t2

0xa7aa,	// (0x00068028) popup_call_audio_second_window_t3_ParamLimits

0xa7aa,	// (0x00068028) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0006c984) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0006c984) popup_call_audio_second_window_t

0xa11d,	// (0x0006799b) bg_popup_call_pane_cp04

0xa7e0,	// (0x0006805e) list_conf_pane

0xa7e8,	// (0x00068066) popup_call_audio_conf_window_t1

0xa7f6,	// (0x00068074) call_thumbnail_pane_g1

0xa7fe,	// (0x0006807c) bg_pinb_pane_ParamLimits

0xa7fe,	// (0x0006807c) bg_pinb_pane

0xa80c,	// (0x0006808a) find_pinb_pane

0xa815,	// (0x00068093) listscroll_pinb_pane_ParamLimits

0xa815,	// (0x00068093) listscroll_pinb_pane

0xa824,	// (0x000680a2) pinb_bg_pane_g1

0x0f36,	// (0x0005e7b4) pinb_bg_pane_g2

0x0f42,	// (0x0005e7c0) pinb_bg_pane_g3

0x0f4e,	// (0x0005e7cc) pinb_bg_pane_g4

0x0f5a,	// (0x0005e7d8) pinb_bg_pane_g5

0x0f66,	// (0x0005e7e4) pinb_bg_pane_g6

0x0f71,	// (0x0005e7ef) pinb_bg_pane_g7

0x0f7c,	// (0x0005e7fa) pinb_bg_pane_g8

0x0f87,	// (0x0005e805) pinb_bg_pane_g9

0x0f91,	// (0x0005e80f) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0006c98b) pinb_bg_pane_g

0x0fae,	// (0x0005e82c) grid_pinb_pane

0x0fb9,	// (0x0005e837) list_pinb_pane

0x0fc4,	// (0x0005e842) scroll_pane_cp01_ParamLimits

0x0fc4,	// (0x0005e842) scroll_pane_cp01

0xa82e,	// (0x000680ac) find_pinb_pane_g1_ParamLimits

0xa82e,	// (0x000680ac) find_pinb_pane_g1

0xa846,	// (0x000680c4) find_pinb_pane_t1

0xa858,	// (0x000680d6) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0006c9a5) find_pinb_pane_t

0xa86d,	// (0x000680eb) input_focus_pane_cp01_ParamLimits

0xa86d,	// (0x000680eb) input_focus_pane_cp01

0x0fd6,	// (0x0005e854) cell_pinb_pane_ParamLimits

0x0fd6,	// (0x0005e854) cell_pinb_pane

0x0ffb,	// (0x0005e879) cell_pinb_pane_g1_ParamLimits

0x0ffb,	// (0x0005e879) cell_pinb_pane_g1

0x1010,	// (0x0005e88e) cell_pinb_pane_g2_ParamLimits

0x1010,	// (0x0005e88e) cell_pinb_pane_g2

0xa879,	// (0x000680f7) cell_pinb_pane_g3_ParamLimits

0xa879,	// (0x000680f7) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0006c9aa) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0006c9aa) cell_pinb_pane_g

0xa11d,	// (0x0006799b) grid_highlight_pane_cp01

0x101c,	// (0x0005e89a) list_pinb_item_pane_ParamLimits

0x101c,	// (0x0005e89a) list_pinb_item_pane

0xa11d,	// (0x0006799b) list_highlight_pane_cp02

0x103a,	// (0x0005e8b8) list_pinb_item_pane_g1_ParamLimits

0x103a,	// (0x0005e8b8) list_pinb_item_pane_g1

0x1047,	// (0x0005e8c5) list_pinb_item_pane_g2_ParamLimits

0x1047,	// (0x0005e8c5) list_pinb_item_pane_g2

0x1053,	// (0x0005e8d1) list_pinb_item_pane_g3_ParamLimits

0x1053,	// (0x0005e8d1) list_pinb_item_pane_g3

0x1064,	// (0x0005e8e2) list_pinb_item_pane_g4_ParamLimits

0x1064,	// (0x0005e8e2) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0006c9b1) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0006c9b1) list_pinb_item_pane_g

0x1070,	// (0x0005e8ee) list_pinb_item_pane_t1_ParamLimits

0x1070,	// (0x0005e8ee) list_pinb_item_pane_t1

0x10a1,	// (0x0005e91f) calc_display_pane

0x10bf,	// (0x0005e93d) calc_paper_pane

0x10db,	// (0x0005e959) grid_calc_pane

0xa11d,	// (0x0006799b) bg_list_pane_cp01

0x1107,	// (0x0005e985) clock_g1

0x110f,	// (0x0005e98d) clock_g2

0x0001,

0xf13c,	// (0x0006c9ba) clock_g

0x1119,	// (0x0005e997) clock_t1_ParamLimits

0x1119,	// (0x0005e997) clock_t1

0x112e,	// (0x0005e9ac) clock_t2_ParamLimits

0x112e,	// (0x0005e9ac) clock_t2

0x1140,	// (0x0005e9be) clock_t3_ParamLimits

0x1140,	// (0x0005e9be) clock_t3

0x1152,	// (0x0005e9d0) clock_t4_ParamLimits

0x1152,	// (0x0005e9d0) clock_t4

0x1164,	// (0x0005e9e2) clock_t5_ParamLimits

0x1164,	// (0x0005e9e2) clock_t5

0x1179,	// (0x0005e9f7) clock_t6_ParamLimits

0x1179,	// (0x0005e9f7) clock_t6

0x118b,	// (0x0005ea09) clock_t7_ParamLimits

0x118b,	// (0x0005ea09) clock_t7

0x119d,	// (0x0005ea1b) clock_t8_ParamLimits

0x119d,	// (0x0005ea1b) clock_t8

0x11b3,	// (0x0005ea31) clock_t9_ParamLimits

0x11b3,	// (0x0005ea31) clock_t9

0x0008,

0xf141,	// (0x0006c9bf) clock_t_ParamLimits

0xf141,	// (0x0006c9bf) clock_t

0xa885,	// (0x00068103) popup_clock_analogue_window_cp02

0xa885,	// (0x00068103) popup_clock_digital_window_cp01

0xa88d,	// (0x0006810b) listscroll_help_pane

0xa11d,	// (0x0006799b) phob_pre_status_pane

0xa897,	// (0x00068115) grid_qdial_pane

0xa7fe,	// (0x0006807c) listscroll_mce_pane

0xa7fe,	// (0x0006807c) bg_notes_pane

0xa8a1,	// (0x0006811f) list_notes_pane

0x11c9,	// (0x0005ea47) scroll_pane_cp06

0xa8af,	// (0x0006812d) bg_calc_paper_pane

0x11e2,	// (0x0005ea60) list_calc_pane

0xa8c3,	// (0x00068141) bg_calc_display_pane

0x11fc,	// (0x0005ea7a) calc_display_pane_t1

0x1211,	// (0x0005ea8f) calc_display_pane_t2

0x1226,	// (0x0005eaa4) calc_display_pane_t3

0x0002,

0xf154,	// (0x0006c9d2) calc_display_pane_t

0x1238,	// (0x0005eab6) cell_calc_pane_ParamLimits

0x1238,	// (0x0005eab6) cell_calc_pane

0xa8cf,	// (0x0006814d) bg_calc_paper_pane_g1

0xa8db,	// (0x00068159) bg_calc_paper_pane_g2

0xa8e7,	// (0x00068165) bg_calc_paper_pane_g3

0xa8f3,	// (0x00068171) bg_calc_paper_pane_g4

0xa8ff,	// (0x0006817d) bg_calc_paper_pane_g5

0x1267,	// (0x0005eae5) bg_calc_paper_pane_g6

0x1278,	// (0x0005eaf6) bg_calc_paper_pane_g7

0x1289,	// (0x0005eb07) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0006c9d9) bg_calc_paper_pane_g

0x129c,	// (0x0005eb1a) calc_bg_paper_pane_g9

0x12af,	// (0x0005eb2d) list_calc_item_pane_ParamLimits

0x12af,	// (0x0005eb2d) list_calc_item_pane

0xa90b,	// (0x00068189) list_calc_item_pane_g1

0x12d0,	// (0x0005eb4e) list_calc_item_pane_t1_ParamLimits

0x12d0,	// (0x0005eb4e) list_calc_item_pane_t1

0x12e2,	// (0x0005eb60) list_calc_item_pane_t2_ParamLimits

0x12e2,	// (0x0005eb60) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0006c9ea) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0006c9ea) list_calc_item_pane_t

0xa918,	// (0x00068196) cell_calc_pane_g1

0xa922,	// (0x000681a0) grid_highlight_pane_cp02

0xa944,	// (0x000681c2) bg_calc_display_pane_g1

0x1312,	// (0x0005eb90) bg_calc_display_pane_g2

0xa94d,	// (0x000681cb) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0006c9f4) bg_calc_display_pane_g

0x131c,	// (0x0005eb9a) cell_qdial_pane_ParamLimits

0x131c,	// (0x0005eb9a) cell_qdial_pane

0x1332,	// (0x0005ebb0) cell_qdial_pane_g1_ParamLimits

0x1332,	// (0x0005ebb0) cell_qdial_pane_g1

0x133f,	// (0x0005ebbd) cell_qdial_pane_g2_ParamLimits

0x133f,	// (0x0005ebbd) cell_qdial_pane_g2

0xa956,	// (0x000681d4) cell_qdial_pane_g3_ParamLimits

0xa956,	// (0x000681d4) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0006c9fb) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0006c9fb) cell_qdial_pane_g

0x135d,	// (0x0005ebdb) cell_qdial_pane_t1_ParamLimits

0x135d,	// (0x0005ebdb) cell_qdial_pane_t1

0x1375,	// (0x0005ebf3) cell_qdial_pane_t2_ParamLimits

0x1375,	// (0x0005ebf3) cell_qdial_pane_t2

0x1388,	// (0x0005ec06) cell_qdial_pane_t3_ParamLimits

0x1388,	// (0x0005ec06) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0006ca04) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0006ca04) cell_qdial_pane_t

0xa11d,	// (0x0006799b) grid_highlight_pane_cp04

0xa962,	// (0x000681e0) thumbnail_qdial_pane_ParamLimits

0xa962,	// (0x000681e0) thumbnail_qdial_pane

0xa9be,	// (0x0006823c) list_help_pane

0xa9c7,	// (0x00068245) scroll_pane_cp02

0x139b,	// (0x0005ec19) help_list_pane_t1_ParamLimits

0x139b,	// (0x0005ec19) help_list_pane_t1

0x13c2,	// (0x0005ec40) bg_notes_pane_g2

0x13ca,	// (0x0005ec48) bg_notes_pane_g3

0x13d2,	// (0x0005ec50) notes_bg_pane_g1

0x13da,	// (0x0005ec58) notes_bg_pane_g4

0x13e2,	// (0x0005ec60) notes_bg_pane_g5

0x13ea,	// (0x0005ec68) notes_bg_pane_g6

0x13f2,	// (0x0005ec70) notes_bg_pane_g7

0x13fa,	// (0x0005ec78) notes_bg_pane_g8

0x1402,	// (0x0005ec80) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0006ca22) notes_bg_pane_g

0x140a,	// (0x0005ec88) list_notes_text_pane_ParamLimits

0x140a,	// (0x0005ec88) list_notes_text_pane

0xa9d0,	// (0x0006824e) list_notes_text_pane_g1

0x1432,	// (0x0005ecb0) list_notes_text_pane_t1

0x1440,	// (0x0005ecbe) listscroll_cale_week_pane

0x1476,	// (0x0005ecf4) bg_cale_heading_pane

0xa9ea,	// (0x00068268) bg_cale_pane_cp01

0x149f,	// (0x0005ed1d) cale_week_corner_pane

0x14be,	// (0x0005ed3c) cale_week_day_heading_pane

0x14ec,	// (0x0005ed6a) cale_week_scroll_pane_g1

0x1510,	// (0x0005ed8e) cale_week_scroll_pane_g2

0x1528,	// (0x0005eda6) cale_week_scroll_pane_g3

0x1540,	// (0x0005edbe) cale_week_scroll_pane_g4

0x1558,	// (0x0005edd6) cale_week_scroll_pane_g5

0x1570,	// (0x0005edee) cale_week_scroll_pane_g6

0x1590,	// (0x0005ee0e) cale_week_scroll_pane_g7

0x15b0,	// (0x0005ee2e) cale_week_scroll_pane_g8

0x15d0,	// (0x0005ee4e) cale_week_scroll_pane_g9

0x15ed,	// (0x0005ee6b) cale_week_scroll_pane_g10

0x160a,	// (0x0005ee88) cale_week_scroll_pane_g11

0x1627,	// (0x0005eea5) cale_week_scroll_pane_g12

0x1644,	// (0x0005eec2) cale_week_scroll_pane_g13

0x1669,	// (0x0005eee7) cale_week_scroll_pane_g14

0x1692,	// (0x0005ef10) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0006ca31) cale_week_scroll_pane_g

0x16bb,	// (0x0005ef39) cale_week_time_pane

0x16db,	// (0x0005ef59) grid_cale_week_pane

0xaa1a,	// (0x00068298) scroll_pane_cp08

0x170e,	// (0x0005ef8c) cell_cale_week_pane_ParamLimits

0x170e,	// (0x0005ef8c) cell_cale_week_pane

0x1799,	// (0x0005f017) cale_week_day_heading_pane_t1

0x17e1,	// (0x0005f05f) cale_week_day_heading_pane_t2

0x182e,	// (0x0005f0ac) cale_week_day_heading_pane_t3

0x187b,	// (0x0005f0f9) cale_week_day_heading_pane_t4

0x18c8,	// (0x0005f146) cale_week_day_heading_pane_t5

0x1915,	// (0x0005f193) cale_week_day_heading_pane_t6

0x1962,	// (0x0005f1e0) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0006ca50) cale_week_day_heading_pane_t

0xaa3c,	// (0x000682ba) bg_cale_side_pane

0x19aa,	// (0x0005f228) cale_week_time_pane_t1

0x19ee,	// (0x0005f26c) cale_week_time_pane_t2

0x1a32,	// (0x0005f2b0) cale_week_time_pane_t3

0x1a76,	// (0x0005f2f4) cale_week_time_pane_t4

0x1aba,	// (0x0005f338) cale_week_time_pane_t5

0x1afe,	// (0x0005f37c) cale_week_time_pane_t6

0x1b42,	// (0x0005f3c0) cale_week_time_pane_t7

0x1b8e,	// (0x0005f40c) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0006ca5f) cale_week_time_pane_t

0x1bdc,	// (0x0005f45a) cell_cale_week_pane_g2

0x1bfb,	// (0x0005f479) cell_cale_week_pane_g3_ParamLimits

0x1bfb,	// (0x0005f479) cell_cale_week_pane_g3

0xaa4a,	// (0x000682c8) grid_highlight_pane_cp07

0xaa52,	// (0x000682d0) listscroll_gms_pane

0xaa5c,	// (0x000682da) grid_gms_pane

0xaa65,	// (0x000682e3) listscroll_gms_pane_g1

0xaa6d,	// (0x000682eb) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0006ca70) listscroll_gms_pane_g

0x1c13,	// (0x0005f491) scroll_pane_cp010

0x1c1e,	// (0x0005f49c) cell_gms_pane_ParamLimits

0x1c1e,	// (0x0005f49c) cell_gms_pane

0x1c31,	// (0x0005f4af) cell_gms_pane_g1

0xaa75,	// (0x000682f3) cell_gms_pane_g2

0xaa7d,	// (0x000682fb) cell_gms_pane_g3

0xaa86,	// (0x00068304) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0006ca75) cell_gms_pane_g

0xaa8f,	// (0x0006830d) grid_highlight_pane_cp09

0x4366,	// (0x00061be4) phob_pre_status_pane_g1

0x436e,	// (0x00061bec) phob_pre_status_pane_g2

0x4376,	// (0x00061bf4) phob_pre_status_pane_g3

0x437e,	// (0x00061bfc) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0006ce64) phob_pre_status_pane_g

0x438e,	// (0x00061c0c) phob_pre_status_pane_t1

0x439e,	// (0x00061c1c) phob_pre_status_pane_t2

0x43ae,	// (0x00061c2c) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0006ce6f) phob_pre_status_pane_t

0xa11d,	// (0x0006799b) bg_list_pane_cp05

0x1c41,	// (0x0005f4bf) grid_vorec_pane

0x1c4d,	// (0x0005f4cb) vorec_t1

0x1c5b,	// (0x0005f4d9) vorec_t2

0x1c69,	// (0x0005f4e7) vorec_t3

0x1c77,	// (0x0005f4f5) vorec_t4

0x1c85,	// (0x0005f503) vorec_t5

0x1c93,	// (0x0005f511) vorec_t6

0x0006,

0xf200,	// (0x0006ca7e) vorec_t

0x1caf,	// (0x0005f52d) wait_bar_pane_cp01

0x1cb7,	// (0x0005f535) cell_vorec_pane_ParamLimits

0x1cb7,	// (0x0005f535) cell_vorec_pane

0x1ccc,	// (0x0005f54a) cell_vorec_pane_g1

0xa11d,	// (0x0006799b) grid_highlight_pane_cp05

0x1ce4,	// (0x0005f562) cams_zoom_pane

0x1cf0,	// (0x0005f56e) image_vga_pane

0x1cff,	// (0x0005f57d) main_camera_pane_g1

0x1d0d,	// (0x0005f58b) main_camera_pane_g2

0x1d19,	// (0x0005f597) main_camera_pane_g3

0x1d27,	// (0x0005f5a5) main_camera_pane_g4

0x1d35,	// (0x0005f5b3) main_camera_pane_g5

0x1d43,	// (0x0005f5c1) main_camera_pane_g6

0x1d51,	// (0x0005f5cf) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0006ca8d) main_camera_pane_g

0x1d5f,	// (0x0005f5dd) main_camera_pane_t1

0x1d71,	// (0x0005f5ef) main_camera_pane_t2

0x0001,

0xf220,	// (0x0006ca9e) main_camera_pane_t

0x1d94,	// (0x0005f612) cams_zoom_pane_cp_ParamLimits

0x1d94,	// (0x0005f612) cams_zoom_pane_cp

0x1db8,	// (0x0005f636) image_cif_pane_ParamLimits

0x1db8,	// (0x0005f636) image_cif_pane

0x1dd6,	// (0x0005f654) image_subqcif_pane

0x1de0,	// (0x0005f65e) main_video_pane_g1_ParamLimits

0x1de0,	// (0x0005f65e) main_video_pane_g1

0x1e00,	// (0x0005f67e) main_video_pane_g2_ParamLimits

0x1e00,	// (0x0005f67e) main_video_pane_g2

0x1e30,	// (0x0005f6ae) main_video_pane_g3_ParamLimits

0x1e30,	// (0x0005f6ae) main_video_pane_g3

0x1e59,	// (0x0005f6d7) main_video_pane_g4_ParamLimits

0x1e59,	// (0x0005f6d7) main_video_pane_g4

0x1e82,	// (0x0005f700) main_video_pane_g5_ParamLimits

0x1e82,	// (0x0005f700) main_video_pane_g5

0xaaa3,	// (0x00068321) main_video_pane_g6_ParamLimits

0xaaa3,	// (0x00068321) main_video_pane_g6

0x0006,

0xf225,	// (0x0006caa3) main_video_pane_g_ParamLimits

0xf225,	// (0x0006caa3) main_video_pane_g

0x1ea4,	// (0x0005f722) main_video_pane_t1_ParamLimits

0x1ea4,	// (0x0005f722) main_video_pane_t1

0xaabd,	// (0x0006833b) cams_zoom_pane_g1

0xaac6,	// (0x00068344) cams_zoom_pane_g2

0xaacf,	// (0x0006834d) cams_zoom_pane_g3

0xaad8,	// (0x00068356) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0006cab2) cams_zoom_pane_g

0x1eee,	// (0x0005f76c) grid_cams_pane

0x1efc,	// (0x0005f77a) linegrid_cams_pane

0x1f08,	// (0x0005f786) cell_cams_pane_ParamLimits

0x1f08,	// (0x0005f786) cell_cams_pane

0xaae1,	// (0x0006835f) cams_burst_image_pane

0xaae9,	// (0x00068367) cell_cams_pane_g1

0xa11d,	// (0x0006799b) grid_highlight_pane_cp03

0xa918,	// (0x00068196) mp_bg_pane_g1

0xa11d,	// (0x0006799b) bg_list_pane_cp03

0xc777,	// (0x00069ff5) bg_mp_pane

0xc77f,	// (0x00069ffd) grid_mp_pane

0xc787,	// (0x0006a005) media_player_g1

0xc791,	// (0x0006a00f) media_player_t1

0xc79f,	// (0x0006a01d) media_player_t2

0xc7ad,	// (0x0006a02b) media_player_t3

0xc7bb,	// (0x0006a039) media_player_t4

0xc7c9,	// (0x0006a047) media_player_t5

0xc7d7,	// (0x0006a055) media_player_t6

0xc7e5,	// (0x0006a063) media_player_t7

0x0006,

0xf5d0,	// (0x0006ce4e) media_player_t

0xc7f3,	// (0x0006a071) wait_bar_pane_cp02

0xf5b5,	// (0x0006ce33) main_usb_pane_t

0x435d,	// (0x00061bdb) cell_mp_pane

0xa918,	// (0x00068196) cell_mp_pane_g1

0xa11d,	// (0x0006799b) grid_highlight_pane_cp06

0xaaf1,	// (0x0006836f) grid_skin_colour_pane

0xaaf9,	// (0x00068377) list_highlight_pane_cp03

0x201c,	// (0x0005f89a) skin_g1

0xab01,	// (0x0006837f) skin_t1

0xab10,	// (0x0006838e) skin_t2

0x0001,

0xf269,	// (0x0006cae7) skin_t

0x2026,	// (0x0005f8a4) cell_skin_colour_pane_ParamLimits

0x2026,	// (0x0005f8a4) cell_skin_colour_pane

0xab1e,	// (0x0006839c) cell_skin_colour_pane_g1

0x20a6,	// (0x0005f924) call_video_g1_ParamLimits

0x20a6,	// (0x0005f924) call_video_g1

0x20b6,	// (0x0005f934) call_video_g2_ParamLimits

0x20b6,	// (0x0005f934) call_video_g2

0x0001,

0xf26e,	// (0x0006caec) call_video_g_ParamLimits

0xf26e,	// (0x0006caec) call_video_g

0x2106,	// (0x0005f984) call_video_uplink_pane_cp1_ParamLimits

0x2106,	// (0x0005f984) call_video_uplink_pane_cp1

0xab30,	// (0x000683ae) call_video_uplink_pane_cp2

0x21d4,	// (0x0005fa52) video_down_crop_pane_ParamLimits

0x21d4,	// (0x0005fa52) video_down_crop_pane

0x22c6,	// (0x0005fb44) video_down_pane_ParamLimits

0x22c6,	// (0x0005fb44) video_down_pane

0xab38,	// (0x000683b6) video_down_subqcif_pane_ParamLimits

0xab38,	// (0x000683b6) video_down_subqcif_pane

0xab52,	// (0x000683d0) video_down_subqcif_pane_cp_ParamLimits

0xab52,	// (0x000683d0) video_down_subqcif_pane_cp

0xab7a,	// (0x000683f8) im_reading_pane_ParamLimits

0xab7a,	// (0x000683f8) im_reading_pane

0x23e3,	// (0x0005fc61) im_writing_pane_ParamLimits

0x23e3,	// (0x0005fc61) im_writing_pane

0x2401,	// (0x0005fc7f) im_reading_pane_t1

0xab94,	// (0x00068412) list_im_pane

0xaba5,	// (0x00068423) scroll_pane_cp07

0x2443,	// (0x0005fcc1) im_writing_pane_t1_ParamLimits

0x2443,	// (0x0005fcc1) im_writing_pane_t1

0xabbe,	// (0x0006843c) im_writing_pane_t2_ParamLimits

0xabbe,	// (0x0006843c) im_writing_pane_t2

0x0001,

0xf278,	// (0x0006caf6) im_writing_pane_t_ParamLimits

0xf278,	// (0x0006caf6) im_writing_pane_t

0xa11d,	// (0x0006799b) input_focus_pane_cp04

0xa11d,	// (0x0006799b) input_focus_pane_cp05

0x2455,	// (0x0005fcd3) list_im_single_pane_ParamLimits

0x2455,	// (0x0005fcd3) list_im_single_pane

0x246e,	// (0x0005fcec) list_single_im_pane_t1

0x4321,	// (0x00061b9f) blid_accuracy_pane

0x4329,	// (0x00061ba7) blid_compass_pane

0x4333,	// (0x00061bb1) main_location_t1

0x4341,	// (0x00061bbf) main_location_t2

0x434f,	// (0x00061bcd) main_location_t3

0x0002,

0xf5df,	// (0x0006ce5d) main_location_t

0xa11d,	// (0x0006799b) aid_levels_location

0xa918,	// (0x00068196) blid_accuracy_pane_g1

0xa918,	// (0x00068196) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0006cb58) blid_accuracy_pane_g

0xac06,	// (0x00068484) wml_content_pane

0xac44,	// (0x000684c2) wml_button_pane_ParamLimits

0xac44,	// (0x000684c2) wml_button_pane

0x247d,	// (0x0005fcfb) wml_list_single_large_pane_ParamLimits

0x247d,	// (0x0005fcfb) wml_list_single_large_pane

0x249f,	// (0x0005fd1d) wml_list_single_medium_pane_ParamLimits

0x249f,	// (0x0005fd1d) wml_list_single_medium_pane

0x24c2,	// (0x0005fd40) wml_list_single_small_pane_ParamLimits

0x24c2,	// (0x0005fd40) wml_list_single_small_pane

0xac58,	// (0x000684d6) wml_selection_box_pane_ParamLimits

0xac58,	// (0x000684d6) wml_selection_box_pane

0xac6b,	// (0x000684e9) wml_list_single_pane_t1

0xac7a,	// (0x000684f8) wml_list_single_medium_pane_t1

0xac89,	// (0x00068507) wml_list_single_large_pane_t1

0xac98,	// (0x00068516) input_focus_pane_cp02_ParamLimits

0xac98,	// (0x00068516) input_focus_pane_cp02

0xacab,	// (0x00068529) wml_selection_box_pane_g1

0xacb4,	// (0x00068532) wml_selection_box_pane_t1_ParamLimits

0xacb4,	// (0x00068532) wml_selection_box_pane_t1

0xa7fe,	// (0x0006807c) bg_wml_button_pane_ParamLimits

0xa7fe,	// (0x0006807c) bg_wml_button_pane

0xaccc,	// (0x0006854a) wml_button_pane_g1

0xacd4,	// (0x00068552) wml_button_pane_t1

0xaccc,	// (0x0006854a) wml_button_bg_pane_g1

0xace4,	// (0x00068562) wml_button_bg_pane_g2

0xacec,	// (0x0006856a) wml_button_bg_pane_g3

0xacf4,	// (0x00068572) wml_button_bg_pane_g4

0xacfc,	// (0x0006857a) wml_button_bg_pane_g5

0xad04,	// (0x00068582) wml_button_bg_pane_g6

0xad0c,	// (0x0006858a) wml_button_bg_pane_g7

0xad14,	// (0x00068592) wml_button_bg_pane_g8

0xad1c,	// (0x0006859a) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0006cafb) wml_button_bg_pane_g

0x24ea,	// (0x0005fd68) bg_list_pane_cp02

0xad24,	// (0x000685a2) mce_header_pane_ParamLimits

0xad24,	// (0x000685a2) mce_header_pane

0xad3a,	// (0x000685b8) mce_icon_pane

0xad3a,	// (0x000685b8) mce_image_pane

0xad43,	// (0x000685c1) mce_text_pane_ParamLimits

0xad43,	// (0x000685c1) mce_text_pane

0x24f4,	// (0x0005fd72) scroll_pane_cp03

0xac3c,	// (0x000684ba) scroll_pane_cp04

0xad56,	// (0x000685d4) scroll_pane_cp05_ParamLimits

0xad56,	// (0x000685d4) scroll_pane_cp05

0x24fe,	// (0x0005fd7c) mce_header_field_pane_ParamLimits

0x24fe,	// (0x0005fd7c) mce_header_field_pane

0x2520,	// (0x0005fd9e) mce_header_field_pane_2_ParamLimits

0x2520,	// (0x0005fd9e) mce_header_field_pane_2

0x2536,	// (0x0005fdb4) mce_header_field_pane_3

0x253e,	// (0x0005fdbc) list_single_mce_message_pane_ParamLimits

0x253e,	// (0x0005fdbc) list_single_mce_message_pane

0x255d,	// (0x0005fddb) list_single_mce_smart_pane_ParamLimits

0x255d,	// (0x0005fddb) list_single_mce_smart_pane

0xad62,	// (0x000685e0) input_focus_pane_cp03

0xad6b,	// (0x000685e9) list_header_data_pane

0x2587,	// (0x0005fe05) mce_header_field_pane_t1

0x2597,	// (0x0005fe15) list_single_mce_header_pane_ParamLimits

0x2597,	// (0x0005fe15) list_single_mce_header_pane

0xad73,	// (0x000685f1) list_single_mce_header_pane_t1

0xad82,	// (0x00068600) list_single_mce_message_pane_g1

0xad8a,	// (0x00068608) list_single_mce_message_pane_t1

0x25db,	// (0x0005fe59) bg_cale_heading_pane_cp01_ParamLimits

0x25db,	// (0x0005fe59) bg_cale_heading_pane_cp01

0xad98,	// (0x00068616) bg_cale_pane_cp02_ParamLimits

0xad98,	// (0x00068616) bg_cale_pane_cp02

0x2622,	// (0x0005fea0) cale_month_corner_pane

0x2641,	// (0x0005febf) cale_month_day_heading_pane_ParamLimits

0x2641,	// (0x0005febf) cale_month_day_heading_pane

0x2698,	// (0x0005ff16) cale_month_pane_g1_ParamLimits

0x2698,	// (0x0005ff16) cale_month_pane_g1

0x26d4,	// (0x0005ff52) cale_month_pane_g2_ParamLimits

0x26d4,	// (0x0005ff52) cale_month_pane_g2

0x270c,	// (0x0005ff8a) cale_month_pane_g3_ParamLimits

0x270c,	// (0x0005ff8a) cale_month_pane_g3

0x2760,	// (0x0005ffde) cale_month_pane_g4_ParamLimits

0x2760,	// (0x0005ffde) cale_month_pane_g4

0x27b4,	// (0x00060032) cale_month_pane_g5_ParamLimits

0x27b4,	// (0x00060032) cale_month_pane_g5

0x2808,	// (0x00060086) cale_month_pane_g6_ParamLimits

0x2808,	// (0x00060086) cale_month_pane_g6

0x286c,	// (0x000600ea) cale_month_pane_g7_ParamLimits

0x286c,	// (0x000600ea) cale_month_pane_g7

0x28d0,	// (0x0006014e) cale_month_pane_g8_ParamLimits

0x28d0,	// (0x0006014e) cale_month_pane_g8

0x2934,	// (0x000601b2) cale_month_pane_g9_ParamLimits

0x2934,	// (0x000601b2) cale_month_pane_g9

0x298c,	// (0x0006020a) cale_month_pane_g10_ParamLimits

0x298c,	// (0x0006020a) cale_month_pane_g10

0x29da,	// (0x00060258) cale_month_pane_g11_ParamLimits

0x29da,	// (0x00060258) cale_month_pane_g11

0x2a26,	// (0x000602a4) cale_month_pane_g12_ParamLimits

0x2a26,	// (0x000602a4) cale_month_pane_g12

0x2a76,	// (0x000602f4) cale_month_pane_g13_ParamLimits

0x2a76,	// (0x000602f4) cale_month_pane_g13

0x000c,

0xf290,	// (0x0006cb0e) cale_month_pane_g_ParamLimits

0xf290,	// (0x0006cb0e) cale_month_pane_g

0x2ac6,	// (0x00060344) cale_month_week_pane

0x2ae6,	// (0x00060364) grid_cale_month_pane_ParamLimits

0x2ae6,	// (0x00060364) grid_cale_month_pane

0x2b34,	// (0x000603b2) cale_month_day_heading_pane_t1

0x2bb6,	// (0x00060434) cale_month_day_heading_pane_t2

0x2c43,	// (0x000604c1) cale_month_day_heading_pane_t3

0x2cd0,	// (0x0006054e) cale_month_day_heading_pane_t4

0x2d5d,	// (0x000605db) cale_month_day_heading_pane_t5

0x2df2,	// (0x00060670) cale_month_day_heading_pane_t6

0x2e8f,	// (0x0006070d) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0006cb29) cale_month_day_heading_pane_t

0xaa3c,	// (0x000682ba) bg_cale_side_pane_cp01

0x2f2c,	// (0x000607aa) cale_month_week_pane_t1

0x2f45,	// (0x000607c3) cale_month_week_pane_t2

0x2f5e,	// (0x000607dc) cale_month_week_pane_t3

0x2f77,	// (0x000607f5) cale_month_week_pane_t4

0x2f90,	// (0x0006080e) cale_month_week_pane_t5

0x2fab,	// (0x00060829) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0006cb38) cale_month_week_pane_t

0x2fcc,	// (0x0006084a) cell_cale_month_pane_ParamLimits

0x2fcc,	// (0x0006084a) cell_cale_month_pane

0x3118,	// (0x00060996) cell_cale_month_pane_g1

0x3124,	// (0x000609a2) cell_cale_month_pane_t1_ParamLimits

0x3124,	// (0x000609a2) cell_cale_month_pane_t1

0xaa4a,	// (0x000682c8) grid_highlight_pane_cp08

0xa918,	// (0x00068196) main_smil_g1

0x3144,	// (0x000609c2) smil_status_pane

0xadd7,	// (0x00068655) smil_text_pane

0xc695,	// (0x00069f13) bg_popup_call3_rect_pane_g8

0xc69d,	// (0x00069f1b) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0006cdf1) bg_popup_call3_rect_pane_g

0xc92b,	// (0x0006a1a9) smil_status_volume_pane_g1

0x3157,	// (0x000609d5) smil_status_pane_t1

0x4715,	// (0x00061f93) volume_smil_pane

0xade1,	// (0x0006865f) list_smil_text_pane

0x316e,	// (0x000609ec) scroll_pane_cp011

0x3179,	// (0x000609f7) smil_text_list_pane_t1_ParamLimits

0x3179,	// (0x000609f7) smil_text_list_pane_t1

0x31cb,	// (0x00060a49) aid_volume_smil_ParamLimits

0x31cb,	// (0x00060a49) aid_volume_smil

0xa918,	// (0x00068196) smil_volume_pane_g1

0xa918,	// (0x00068196) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0006cb58) smil_volume_pane_g

0x1440,	// (0x0005ecbe) listscroll_cale_day_pane

0xadeb,	// (0x00068669) bg_cale_pane

0xae03,	// (0x00068681) list_cale_pane

0xae26,	// (0x000686a4) scroll_pane_cp09

0xae37,	// (0x000686b5) cale_bg_pane_g1

0xae3f,	// (0x000686bd) cale_bg_pane_g2

0xae47,	// (0x000686c5) cale_bg_pane_g3

0xae4f,	// (0x000686cd) cale_bg_pane_g4

0xae57,	// (0x000686d5) cale_bg_pane_g5

0xae5f,	// (0x000686dd) cale_bg_pane_g6

0xae67,	// (0x000686e5) cale_bg_pane_g7

0xae6f,	// (0x000686ed) cale_bg_pane_g8

0xae77,	// (0x000686f5) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0006cb5d) cale_bg_pane_g

0x31ed,	// (0x00060a6b) list_cale_time_pane_ParamLimits

0x31ed,	// (0x00060a6b) list_cale_time_pane

0xae87,	// (0x00068705) list_cale_time_pane_g1_ParamLimits

0xae87,	// (0x00068705) list_cale_time_pane_g1

0xae93,	// (0x00068711) list_cale_time_pane_g2_ParamLimits

0xae93,	// (0x00068711) list_cale_time_pane_g2

0x3201,	// (0x00060a7f) list_cale_time_pane_g3_ParamLimits

0x3201,	// (0x00060a7f) list_cale_time_pane_g3

0x320f,	// (0x00060a8d) list_cale_time_pane_g4_ParamLimits

0x320f,	// (0x00060a8d) list_cale_time_pane_g4

0x321d,	// (0x00060a9b) list_cale_time_pane_g5_ParamLimits

0x321d,	// (0x00060a9b) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0006cb70) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0006cb70) list_cale_time_pane_g

0xaead,	// (0x0006872b) list_cale_time_pane_t1_ParamLimits

0xaead,	// (0x0006872b) list_cale_time_pane_t1

0xaed5,	// (0x00068753) list_cale_time_pane_t2_ParamLimits

0xaed5,	// (0x00068753) list_cale_time_pane_t2

0x35e6,	// (0x00060e64) aid_blid_cardinal_pane

0x3628,	// (0x00060ea6) compass_pane_t4

0xaefd,	// (0x0006877b) list_cale_time_pane_t4_ParamLimits

0xaefd,	// (0x0006877b) list_cale_time_pane_t4

0x3636,	// (0x00060eb4) compass_pane_t5

0x3646,	// (0x00060ec4) compass_pane_t6

0x3654,	// (0x00060ed2) compass_pane_t7

0xb378,	// (0x00068bf6) navi_pane_cc_t1

0xb4e7,	// (0x00068d65) aid_phob_thumbnail_center_pane

0x3e1d,	// (0x0006169b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0006cb7d) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0006cb7d) list_cale_time_pane_t

0x9d74,	// (0x000675f2) bg_popup_window_pane_cp02_ParamLimits

0x9d74,	// (0x000675f2) bg_popup_window_pane_cp02

0xaf25,	// (0x000687a3) heading_pane_cp01_ParamLimits

0xaf25,	// (0x000687a3) heading_pane_cp01

0xaf31,	// (0x000687af) loc_req_pane_ParamLimits

0xaf31,	// (0x000687af) loc_req_pane

0xaf41,	// (0x000687bf) loc_type_pane_ParamLimits

0xaf41,	// (0x000687bf) loc_type_pane

0xaf53,	// (0x000687d1) loc_type_pane_t1_ParamLimits

0xaf53,	// (0x000687d1) loc_type_pane_t1

0xaf65,	// (0x000687e3) loc_type_pane_t2_ParamLimits

0xaf65,	// (0x000687e3) loc_type_pane_t2

0xaf77,	// (0x000687f5) loc_type_pane_t3_ParamLimits

0xaf77,	// (0x000687f5) loc_type_pane_t3

0x0002,

0xf306,	// (0x0006cb84) loc_type_pane_t_ParamLimits

0xf306,	// (0x0006cb84) loc_type_pane_t

0xaf89,	// (0x00068807) list_loc_req_pane

0xb000,	// (0x0006887e) scroll_pane_cp012

0x322b,	// (0x00060aa9) list_single_loc_request_popup_menu_pane_ParamLimits

0x322b,	// (0x00060aa9) list_single_loc_request_popup_menu_pane

0xb00b,	// (0x00068889) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb00b,	// (0x00068889) list_single_loc_request_popup_menu_pane_g1

0xb017,	// (0x00068895) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb017,	// (0x00068895) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0006cb8b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0006cb8b) list_single_loc_request_popup_menu_pane_g

0xb023,	// (0x000688a1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb023,	// (0x000688a1) list_single_loc_request_popup_menu_pane_t1

0x323d,	// (0x00060abb) bg_popup_window_pane_cp03_ParamLimits

0x323d,	// (0x00060abb) bg_popup_window_pane_cp03

0x324b,	// (0x00060ac9) heading_loc_req_pane_ParamLimits

0x324b,	// (0x00060ac9) heading_loc_req_pane

0x3257,	// (0x00060ad5) popup_dyc_status_message_window_g1_ParamLimits

0x3257,	// (0x00060ad5) popup_dyc_status_message_window_g1

0x3263,	// (0x00060ae1) popup_dyc_status_message_window_t1_ParamLimits

0x3263,	// (0x00060ae1) popup_dyc_status_message_window_t1

0x3275,	// (0x00060af3) popup_dyc_status_message_window_t2_ParamLimits

0x3275,	// (0x00060af3) popup_dyc_status_message_window_t2

0x3287,	// (0x00060b05) popup_dyc_status_message_window_t3_ParamLimits

0x3287,	// (0x00060b05) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0006cb90) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0006cb90) popup_dyc_status_message_window_t

0xa11d,	// (0x0006799b) bg_heading_pane_cp01

0xb039,	// (0x000688b7) heading_loc_req_pane_g1

0xb041,	// (0x000688bf) heading_loc_req_pane_g2

0xb049,	// (0x000688c7) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0006cb97) heading_loc_req_pane_g

0xb051,	// (0x000688cf) heading_loc_req_pane_t1

0xb061,	// (0x000688df) bg_popup_sub_pane_cp01_ParamLimits

0xb061,	// (0x000688df) bg_popup_sub_pane_cp01

0xb06f,	// (0x000688ed) popup_cale_events_window_g1_ParamLimits

0xb06f,	// (0x000688ed) popup_cale_events_window_g1

0xb08f,	// (0x0006890d) popup_cale_events_window_g2_ParamLimits

0xb08f,	// (0x0006890d) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0006cbcb) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0006cbcb) popup_cale_events_window_g

0xb0af,	// (0x0006892d) popup_cale_events_window_t1_ParamLimits

0xb0af,	// (0x0006892d) popup_cale_events_window_t1

0xb0c1,	// (0x0006893f) popup_cale_events_window_t2_ParamLimits

0xb0c1,	// (0x0006893f) popup_cale_events_window_t2

0xb0ff,	// (0x0006897d) popup_cale_events_window_t3_ParamLimits

0xb0ff,	// (0x0006897d) popup_cale_events_window_t3

0xb139,	// (0x000689b7) popup_cale_events_window_t4_ParamLimits

0xb139,	// (0x000689b7) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0006cbd0) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0006cbd0) popup_cale_events_window_t

0x3382,	// (0x00060c00) call_type_pane

0xb3d8,	// (0x00068c56) popup_call_status_window_g1

0x338e,	// (0x00060c0c) popup_call_status_window_g2

0x339a,	// (0x00060c18) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0006cbd9) popup_call_status_window_g

0xb16f,	// (0x000689ed) call_type_pane_g1

0xb178,	// (0x000689f6) call_type_pane_g2

0x0001,

0xf362,	// (0x0006cbe0) call_type_pane_g

0xa11d,	// (0x0006799b) bg_popup_sub_pane_cp02

0xb181,	// (0x000689ff) listscroll_popup_wml_pane

0xb189,	// (0x00068a07) list_wml_pane

0xb193,	// (0x00068a11) scroll_pane_cp013

0xb19e,	// (0x00068a1c) list_single_graphic_popup_wml_pane_ParamLimits

0xb19e,	// (0x00068a1c) list_single_graphic_popup_wml_pane

0xa918,	// (0x00068196) list_single_graphic_popup_wml_pane_g1

0xb1b2,	// (0x00068a30) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0006cbe5) list_single_graphic_popup_wml_pane_g

0xb1ba,	// (0x00068a38) list_single_graphic_popup_wml_pane_t1

0xb1d0,	// (0x00068a4e) aid_call_pane

0xa7f6,	// (0x00068074) popup_clock_analogue_window_g1

0xa7f6,	// (0x00068074) popup_clock_analogue_window_g2

0x33a6,	// (0x00060c24) popup_clock_analogue_window_g3

0x33a6,	// (0x00060c24) popup_clock_analogue_window_g4

0xa918,	// (0x00068196) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0006cbea) popup_clock_analogue_window_g

0x33ae,	// (0x00060c2c) popup_clock_analogue_window_t1

0x33bc,	// (0x00060c3a) clock_digital_number_pane_ParamLimits

0x33bc,	// (0x00060c3a) clock_digital_number_pane

0x33c8,	// (0x00060c46) clock_digital_number_pane_cp02_ParamLimits

0x33c8,	// (0x00060c46) clock_digital_number_pane_cp02

0x33d4,	// (0x00060c52) clock_digital_number_pane_cp03_ParamLimits

0x33d4,	// (0x00060c52) clock_digital_number_pane_cp03

0x33e0,	// (0x00060c5e) clock_digital_number_pane_cp04_ParamLimits

0x33e0,	// (0x00060c5e) clock_digital_number_pane_cp04

0x33ec,	// (0x00060c6a) clock_digital_separator_pane_ParamLimits

0x33ec,	// (0x00060c6a) clock_digital_separator_pane

0x33f8,	// (0x00060c76) popup_clock_digital_window_t1

0xa918,	// (0x00068196) clock_digital_number_pane_g1

0xa918,	// (0x00068196) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0006cb58) clock_digital_number_pane_g

0xa918,	// (0x00068196) clock_digital_separator_pane_g1

0xa918,	// (0x00068196) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0006cb58) clock_digital_separator_pane_g

0xa11d,	// (0x0006799b) bg_popup_window_pane_cp04

0xb1d8,	// (0x00068a56) heading_pane_cp03

0xb1e0,	// (0x00068a5e) listscroll_popup_gms_pane

0xb1e8,	// (0x00068a66) grid_large_graphic_popup_pane

0xb1f2,	// (0x00068a70) listscroll_popup_gms_pane_g1

0xb1fa,	// (0x00068a78) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0006cbf5) listscroll_popup_gms_pane_g

0xac3c,	// (0x000684ba) scroll_pane_cp014

0x3415,	// (0x00060c93) cell_large_graphic_popup_pane_ParamLimits

0x3415,	// (0x00060c93) cell_large_graphic_popup_pane

0x342f,	// (0x00060cad) cell_large_graphic_popup_pane_g1_ParamLimits

0x342f,	// (0x00060cad) cell_large_graphic_popup_pane_g1

0xb202,	// (0x00068a80) cell_large_graphic_popup_pane_g2_ParamLimits

0xb202,	// (0x00068a80) cell_large_graphic_popup_pane_g2

0xb20e,	// (0x00068a8c) cell_large_graphic_popup_pane_g3_ParamLimits

0xb20e,	// (0x00068a8c) cell_large_graphic_popup_pane_g3

0xb21b,	// (0x00068a99) cell_large_graphic_popup_pane_g4_ParamLimits

0xb21b,	// (0x00068a99) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0006cbfa) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0006cbfa) cell_large_graphic_popup_pane_g

0xb22b,	// (0x00068aa9) grid_highlight_pane_cp010

0xa918,	// (0x00068196) bg_popup_call_pane_g1

0xb235,	// (0x00068ab3) list_single_graphic_popup_conf_pane_ParamLimits

0xb235,	// (0x00068ab3) list_single_graphic_popup_conf_pane

0xb247,	// (0x00068ac5) list_highlight_pane_cp01

0xb250,	// (0x00068ace) list_single_graphic_popup_conf_pane_g1

0xb258,	// (0x00068ad6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0006cc03) list_single_graphic_popup_conf_pane_g

0xb260,	// (0x00068ade) list_single_graphic_popup_conf_pane_t1

0xb26e,	// (0x00068aec) linegrid_cams_pane_g1

0x343b,	// (0x00060cb9) linegrid_cams_pane_g2

0xaa7d,	// (0x000682fb) linegrid_cams_pane_g3

0xb277,	// (0x00068af5) linegrid_cams_pane_g4

0x3444,	// (0x00060cc2) linegrid_cams_pane_g5

0x344d,	// (0x00060ccb) linegrid_cams_pane_g6

0xaa86,	// (0x00068304) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0006cc08) linegrid_cams_pane_g

0xb280,	// (0x00068afe) popup_clock_analogue_window

0xb280,	// (0x00068afe) popup_clock_digital_window

0xa11d,	// (0x0006799b) popup_phob_thumbnail_window

0xa918,	// (0x00068196) call_video_uplink_pane_g1

0xb289,	// (0x00068b07) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0006cc17) call_video_uplink_pane_g

0xb291,	// (0x00068b0f) video_uplink_pane

0xb299,	// (0x00068b17) mce_image_pane_g1

0x3458,	// (0x00060cd6) mce_image_pane_g2

0x3462,	// (0x00060ce0) mce_image_pane_g3

0x346c,	// (0x00060cea) mce_image_pane_g4

0x3474,	// (0x00060cf2) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0006cc1c) mce_image_pane_g

0xb2a3,	// (0x00068b21) control_top_pane_stacon_cp01_ParamLimits

0xb2a3,	// (0x00068b21) control_top_pane_stacon_cp01

0xb2b7,	// (0x00068b35) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b7,	// (0x00068b35) uni_indicator_pane_stacon_cp01

0xb2c8,	// (0x00068b46) bg_popup_sub_pane_cp03

0x347c,	// (0x00060cfa) chi_dic_find_pane

0x3484,	// (0x00060d02) listscroll_chi_dic_pane

0x348d,	// (0x00060d0b) main_pane_chidic_g1

0x34a0,	// (0x00060d1e) chi_dic_find_pane_t1

0xb2d2,	// (0x00068b50) find_chidic_pane

0xb2db,	// (0x00068b59) chi_dic_list_pane_ParamLimits

0xb2db,	// (0x00068b59) chi_dic_list_pane

0xb2ec,	// (0x00068b6a) scroll_pane_cp020

0x34ae,	// (0x00060d2c) find_chidic_pane_t1

0xa11d,	// (0x0006799b) input_focus_pane_cp06

0x34bd,	// (0x00060d3b) list_chi_dic_pane_ParamLimits

0x34bd,	// (0x00060d3b) list_chi_dic_pane

0x34d2,	// (0x00060d50) list_chi_dic_pane_t1_ParamLimits

0x34d2,	// (0x00060d50) list_chi_dic_pane_t1

0xa11d,	// (0x0006799b) list_highlight_pane_cp020

0xb2f4,	// (0x00068b72) bg_cale_heading_pane_g1

0x34e5,	// (0x00060d63) bg_cale_heading_pane_g2

0x34ed,	// (0x00060d6b) bg_cale_heading_pane_g3

0x34f5,	// (0x00060d73) bg_cale_heading_pane_g4

0x34ff,	// (0x00060d7d) bg_cale_heading_pane_g5

0x3509,	// (0x00060d87) bg_cale_heading_pane_g6

0x3511,	// (0x00060d8f) bg_cale_heading_pane_g7

0x3519,	// (0x00060d97) bg_cale_heading_pane_g8

0x3523,	// (0x00060da1) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0006cc27) bg_cale_heading_pane_g

0xb2f4,	// (0x00068b72) bg_cale_side_pane_g1

0x352d,	// (0x00060dab) bg_cale_side_pane_g2

0x3537,	// (0x00060db5) bg_cale_side_pane_g3

0x3541,	// (0x00060dbf) bg_cale_side_pane_g4

0x354b,	// (0x00060dc9) bg_cale_side_pane_g5

0x3555,	// (0x00060dd3) bg_cale_side_pane_g6

0x355f,	// (0x00060ddd) bg_cale_side_pane_g7

0x3569,	// (0x00060de7) bg_cale_side_pane_g8

0x3571,	// (0x00060def) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0006cc3a) bg_cale_side_pane_g

0x3579,	// (0x00060df7) popup_call_status_window_ParamLimits

0x3579,	// (0x00060df7) popup_call_status_window

0xb2fc,	// (0x00068b7a) stacon_top_pane

0xb304,	// (0x00068b82) status_pane_ParamLimits

0xb304,	// (0x00068b82) status_pane

0xb319,	// (0x00068b97) status_small_pane

0xb321,	// (0x00068b9f) control_pane

0xa11d,	// (0x0006799b) stacon_bottom_pane

0xb329,	// (0x00068ba7) list_single_mce_smart_pane_t1_ParamLimits

0xb329,	// (0x00068ba7) list_single_mce_smart_pane_t1

0xb33c,	// (0x00068bba) list_single_mce_smart_pane_t2_ParamLimits

0xb33c,	// (0x00068bba) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0006cc4d) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0006cc4d) list_single_mce_smart_pane_t

0x3585,	// (0x00060e03) compass_pane

0x3590,	// (0x00060e0e) main_location2_pane_t1

0x35a6,	// (0x00060e24) main_location2_pane_t2

0x35bc,	// (0x00060e3a) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0006cc52) main_location2_pane_t

0xb35b,	// (0x00068bd9) compass_pane_g1_ParamLimits

0xb35b,	// (0x00068bd9) compass_pane_g1

0x360a,	// (0x00060e88) compass_pane_t1

0x3619,	// (0x00060e97) compass_pane_t2

0x0005,

0xf3dd,	// (0x0006cc5b) compass_pane_t

0x3664,	// (0x00060ee2) text_secondary_cp61

0xb36f,	// (0x00068bed) navi_pane_cams_g5

0xb392,	// (0x00068c10) navi_pane_im_t1

0xb3a0,	// (0x00068c1e) navi_pane_mp_g1_ParamLimits

0xb3a0,	// (0x00068c1e) navi_pane_mp_g1

0xb3b4,	// (0x00068c32) navi_pane_mp_g2_ParamLimits

0xb3b4,	// (0x00068c32) navi_pane_mp_g2

0xb3c0,	// (0x00068c3e) navi_pane_mp_g3_ParamLimits

0xb3c0,	// (0x00068c3e) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0006cc6f) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0006cc6f) navi_pane_mp_g

0xb3e6,	// (0x00068c64) navi_pane_mp_t1

0xb3f4,	// (0x00068c72) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0006cc76) navi_pane_mp_t

0xb430,	// (0x00068cae) navi_pane_vt_g1

0xb3e6,	// (0x00068c64) navi_pane_vt_t1

0xb438,	// (0x00068cb6) navi_slider_pane

0xb440,	// (0x00068cbe) zooming_pane

0xb448,	// (0x00068cc6) navi_slider_pane_g1

0x3799,	// (0x00061017) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0006cc7d) navi_slider_pane_g

0xb46c,	// (0x00068cea) aid_levels_zoom

0xb474,	// (0x00068cf2) zooming_pane_g1

0xb47c,	// (0x00068cfa) zooming_pane_g2

0xb47c,	// (0x00068cfa) zooming_pane_g3

0x0002,

0xf40e,	// (0x0006cc8c) zooming_pane_g

0xb484,	// (0x00068d02) level_10_zoom

0xb48d,	// (0x00068d0b) level_11_zoom

0xb496,	// (0x00068d14) level_1_zoom

0xb49f,	// (0x00068d1d) level_2_zoom

0xb4a8,	// (0x00068d26) level_3_zoom

0xb4b1,	// (0x00068d2f) level_4_zoom

0xb4ba,	// (0x00068d38) level_5_zoom

0xb4c3,	// (0x00068d41) level_6_zoom

0xb4cc,	// (0x00068d4a) level_7_zoom

0xb4d5,	// (0x00068d53) level_8_zoom

0xb4de,	// (0x00068d5c) level_9_zoom

0xb4ef,	// (0x00068d6d) popup_phob_thumbnail_window_g1

0xb4f7,	// (0x00068d75) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0006cc93) popup_phob_thumbnail_window_g

0xc7fb,	// (0x0006a079) level_1_location

0xc803,	// (0x0006a081) level_2_location

0xc80b,	// (0x0006a089) level_3_location

0xc813,	// (0x0006a091) level_4_location

0xb440,	// (0x00068cbe) level_5_location

0x37ab,	// (0x00061029) mce_icon_pane_g1

0x37b3,	// (0x00061031) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0006cc98) mce_icon_pane_g

0x37bb,	// (0x00061039) main_mup_pane_g1_ParamLimits

0x37bb,	// (0x00061039) main_mup_pane_g1

0x37d3,	// (0x00061051) main_mup_pane_g2_ParamLimits

0x37d3,	// (0x00061051) main_mup_pane_g2

0x37ef,	// (0x0006106d) main_mup_pane_g3_ParamLimits

0x37ef,	// (0x0006106d) main_mup_pane_g3

0x380b,	// (0x00061089) main_mup_pane_g4_ParamLimits

0x380b,	// (0x00061089) main_mup_pane_g4

0x3827,	// (0x000610a5) main_mup_pane_g5_ParamLimits

0x3827,	// (0x000610a5) main_mup_pane_g5

0x3848,	// (0x000610c6) main_mup_pane_g6_ParamLimits

0x3848,	// (0x000610c6) main_mup_pane_g6

0x3868,	// (0x000610e6) main_mup_pane_g7_ParamLimits

0x3868,	// (0x000610e6) main_mup_pane_g7

0x388c,	// (0x0006110a) main_mup_pane_g8_ParamLimits

0x388c,	// (0x0006110a) main_mup_pane_g8

0x38b0,	// (0x0006112e) main_mup_pane_g9_ParamLimits

0x38b0,	// (0x0006112e) main_mup_pane_g9

0x38d3,	// (0x00061151) main_mup_pane_g10_ParamLimits

0x38d3,	// (0x00061151) main_mup_pane_g10

0x38f6,	// (0x00061174) main_mup_pane_g11_ParamLimits

0x38f6,	// (0x00061174) main_mup_pane_g11

0x3916,	// (0x00061194) main_mup_pane_g12_ParamLimits

0x3916,	// (0x00061194) main_mup_pane_g12

0x3924,	// (0x000611a2) main_mup_pane_g13_ParamLimits

0x3924,	// (0x000611a2) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0006cc9d) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0006cc9d) main_mup_pane_g

0x393a,	// (0x000611b8) main_mup_pane_t1_ParamLimits

0x393a,	// (0x000611b8) main_mup_pane_t1

0x3959,	// (0x000611d7) main_mup_pane_t2_ParamLimits

0x3959,	// (0x000611d7) main_mup_pane_t2

0x3973,	// (0x000611f1) main_mup_pane_t3_ParamLimits

0x3973,	// (0x000611f1) main_mup_pane_t3

0x398d,	// (0x0006120b) main_mup_pane_t4_ParamLimits

0x398d,	// (0x0006120b) main_mup_pane_t4

0x399f,	// (0x0006121d) main_mup_pane_t5_ParamLimits

0x399f,	// (0x0006121d) main_mup_pane_t5

0x39b1,	// (0x0006122f) main_mup_pane_t6_ParamLimits

0x39b1,	// (0x0006122f) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0006ccb8) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0006ccb8) main_mup_pane_t

0x39c7,	// (0x00061245) mup_progress_pane_ParamLimits

0x39c7,	// (0x00061245) mup_progress_pane

0x39d3,	// (0x00061251) mup_visualizer_pane_ParamLimits

0x39d3,	// (0x00061251) mup_visualizer_pane

0x3a11,	// (0x0006128f) mup_volume_pane_ParamLimits

0x3a11,	// (0x0006128f) mup_volume_pane

0xb3d8,	// (0x00068c56) mup_visualizer_pane_g1_ParamLimits

0xb3d8,	// (0x00068c56) mup_visualizer_pane_g1

0xb3d8,	// (0x00068c56) mup_visualizer_pane_g2_ParamLimits

0xb3d8,	// (0x00068c56) mup_visualizer_pane_g2

0xb35b,	// (0x00068bd9) mup_visualizer_pane_g3_ParamLimits

0xb35b,	// (0x00068bd9) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0006ccc5) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0006ccc5) mup_visualizer_pane_g

0xa918,	// (0x00068196) mup_volume_pane_g1

0xb507,	// (0x00068d85) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0006cccc) mup_volume_pane_g

0xa918,	// (0x00068196) mup_progress_pane_g1

0xb510,	// (0x00068d8e) mup_progress_pane_g2

0xb519,	// (0x00068d97) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0006ccd1) mup_progress_pane_g

0xa11d,	// (0x0006799b) bg_popup_window_pane_cp05

0xb522,	// (0x00068da0) heading_pane_cp02_ParamLimits

0xb522,	// (0x00068da0) heading_pane_cp02

0xb53e,	// (0x00068dbc) list_popup_blid_pane

0xb546,	// (0x00068dc4) list_blid_sat_info_pane_ParamLimits

0xb546,	// (0x00068dc4) list_blid_sat_info_pane

0xb559,	// (0x00068dd7) list_blid_sat_info_pane_g1

0xb561,	// (0x00068ddf) list_blid_sat_info_pane_t1

0x3b30,	// (0x000613ae) mup_equalizer_pane_ParamLimits

0x3b30,	// (0x000613ae) mup_equalizer_pane

0x3b51,	// (0x000613cf) mup_equalizer_pane_cp1_ParamLimits

0x3b51,	// (0x000613cf) mup_equalizer_pane_cp1

0x3b72,	// (0x000613f0) mup_equalizer_pane_cp2_ParamLimits

0x3b72,	// (0x000613f0) mup_equalizer_pane_cp2

0x3b93,	// (0x00061411) mup_equalizer_pane_cp3_ParamLimits

0x3b93,	// (0x00061411) mup_equalizer_pane_cp3

0x3bb8,	// (0x00061436) mup_equalizer_pane_cp4_ParamLimits

0x3bb8,	// (0x00061436) mup_equalizer_pane_cp4

0x3bdd,	// (0x0006145b) mup_equalizer_pane_cp5

0x3bf5,	// (0x00061473) mup_equalizer_pane_cp6

0x3c0d,	// (0x0006148b) mup_equalizer_pane_cp7

0xc715,	// (0x00069f93) bg_popup_call_poc_act_pane_g9

0xc71d,	// (0x00069f9b) bg_popup_call_poc_act_pane_g10

0xc725,	// (0x00069fa3) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7fe,	// (0x0006807c) mup_scale_pane

0xa918,	// (0x00068196) mup_scale_pane_g1

0xb56f,	// (0x00068ded) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0006cced) mup_scale_pane_g

0xb593,	// (0x00068e11) msg_data_pane

0xb59b,	// (0x00068e19) scroll_pane_cp017

0x3c37,	// (0x000614b5) bg_list_pane_cp04_ParamLimits

0x3c37,	// (0x000614b5) bg_list_pane_cp04

0xb5a3,	// (0x00068e21) msg_data_pane_g1

0x3c5f,	// (0x000614dd) msg_data_pane_g2

0x3c69,	// (0x000614e7) msg_data_pane_g3

0x3c73,	// (0x000614f1) msg_data_pane_g4

0x3c7b,	// (0x000614f9) msg_data_pane_g5

0x3c83,	// (0x00061501) msg_data_pane_g6

0x3c8b,	// (0x00061509) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0006ccfc) msg_data_pane_g

0x3c93,	// (0x00061511) msg_text_pane_ParamLimits

0x3c93,	// (0x00061511) msg_text_pane

0x3cbb,	// (0x00061539) qrid_highlight_pane_cp011_ParamLimits

0x3cbb,	// (0x00061539) qrid_highlight_pane_cp011

0xa11d,	// (0x0006799b) msg_body_pane

0xa11d,	// (0x0006799b) msg_header_pane

0xb5ab,	// (0x00068e29) input_focus_pane_cp07

0xb5c0,	// (0x00068e3e) msg_header_pane_t1_ParamLimits

0xb5c0,	// (0x00068e3e) msg_header_pane_t1

0xa312,	// (0x00067b90) msg_header_pane_t2_ParamLimits

0xa312,	// (0x00067b90) msg_header_pane_t2

0x0001,

0xf492,	// (0x0006cd10) msg_header_pane_t_ParamLimits

0xf492,	// (0x0006cd10) msg_header_pane_t

0xb5d2,	// (0x00068e50) msg_body_pane_g1

0x3cea,	// (0x00061568) msg_body_pane_t1_ParamLimits

0x3cea,	// (0x00061568) msg_body_pane_t1

0xa324,	// (0x00067ba2) msg_body_pane_t2_ParamLimits

0xa324,	// (0x00067ba2) msg_body_pane_t2

0xa336,	// (0x00067bb4) msg_body_pane_t3_ParamLimits

0xa336,	// (0x00067bb4) msg_body_pane_t3

0x0002,

0xf497,	// (0x0006cd15) msg_body_pane_t_ParamLimits

0xf497,	// (0x0006cd15) msg_body_pane_t

0x3d6d,	// (0x000615eb) main_viewer_pane_g1_ParamLimits

0x3d6d,	// (0x000615eb) main_viewer_pane_g1

0x3d79,	// (0x000615f7) main_viewer_pane_g2_ParamLimits

0x3d79,	// (0x000615f7) main_viewer_pane_g2

0x3d85,	// (0x00061603) main_viewer_pane_g3_ParamLimits

0x3d85,	// (0x00061603) main_viewer_pane_g3

0x3d96,	// (0x00061614) main_viewer_pane_g4_ParamLimits

0x3d96,	// (0x00061614) main_viewer_pane_g4

0x3da7,	// (0x00061625) main_viewer_pane_g5_ParamLimits

0x3da7,	// (0x00061625) main_viewer_pane_g5

0x3da7,	// (0x00061625) main_viewer_pane_g7_ParamLimits

0x3da7,	// (0x00061625) main_viewer_pane_g7

0x3db9,	// (0x00061637) main_viewer_pane_g8_ParamLimits

0x3db9,	// (0x00061637) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0006cd25) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0006cd25) main_viewer_pane_g

0xb5da,	// (0x00068e58) viewer_content_pane_ParamLimits

0xb5da,	// (0x00068e58) viewer_content_pane

0x3df1,	// (0x0006166f) main_postcard_pane_g1_ParamLimits

0x3df1,	// (0x0006166f) main_postcard_pane_g1

0x3dff,	// (0x0006167d) main_postcard_pane_g2_ParamLimits

0x3dff,	// (0x0006167d) main_postcard_pane_g2

0x3e0d,	// (0x0006168b) main_postcard_pane_g3_ParamLimits

0x3e0d,	// (0x0006168b) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0006cd36) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0006cd36) main_postcard_pane_g

0x3e1d,	// (0x0006169b) main_postcard_pane_g4

0xc93e,	// (0x0006a1bc) smil_status_volume_pane_g2

0x3e49,	// (0x000616c7) postcard_pane_ParamLimits

0x3e49,	// (0x000616c7) postcard_pane

0xb3d8,	// (0x00068c56) postcard_pane_g1_ParamLimits

0xb3d8,	// (0x00068c56) postcard_pane_g1

0x3e83,	// (0x00061701) postcard_pane_g2_ParamLimits

0x3e83,	// (0x00061701) postcard_pane_g2

0x3e8f,	// (0x0006170d) postcard_pane_g3_ParamLimits

0x3e8f,	// (0x0006170d) postcard_pane_g3

0xb5e8,	// (0x00068e66) postcard_pane_g4_ParamLimits

0xb5e8,	// (0x00068e66) postcard_pane_g4

0x3e9b,	// (0x00061719) postcard_pane_g5_ParamLimits

0x3e9b,	// (0x00061719) postcard_pane_g5

0x3ea7,	// (0x00061725) postcard_pane_g6_ParamLimits

0x3ea7,	// (0x00061725) postcard_pane_g6

0xb5f6,	// (0x00068e74) postcard_pane_g7_ParamLimits

0xb5f6,	// (0x00068e74) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0006cd43) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0006cd43) postcard_pane_g

0x3eb5,	// (0x00061733) main_mp2_pane_g1_ParamLimits

0x3eb5,	// (0x00061733) main_mp2_pane_g1

0x3ec3,	// (0x00061741) main_mp2_pane_g2_ParamLimits

0x3ec3,	// (0x00061741) main_mp2_pane_g2

0x3ecf,	// (0x0006174d) main_mp2_pane_g3_ParamLimits

0x3ecf,	// (0x0006174d) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0006cd52) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0006cd52) main_mp2_pane_g

0x3edb,	// (0x00061759) main_mp2_pane_t1_ParamLimits

0x3edb,	// (0x00061759) main_mp2_pane_t1

0x3ef2,	// (0x00061770) main_mp2_pane_t2_ParamLimits

0x3ef2,	// (0x00061770) main_mp2_pane_t2

0x3f06,	// (0x00061784) main_mp2_pane_t3_ParamLimits

0x3f06,	// (0x00061784) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0006cd59) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0006cd59) main_mp2_pane_t

0xb604,	// (0x00068e82) pec_content_pane_ParamLimits

0xb604,	// (0x00068e82) pec_content_pane

0xac3c,	// (0x000684ba) scroll_pane_cp015

0xb616,	// (0x00068e94) pec_attribute_pane_ParamLimits

0xb616,	// (0x00068e94) pec_attribute_pane

0x3f18,	// (0x00061796) pec_content_pane_g1_ParamLimits

0x3f18,	// (0x00061796) pec_content_pane_g1

0xb626,	// (0x00068ea4) pec_content_pane_t1_ParamLimits

0xb626,	// (0x00068ea4) pec_content_pane_t1

0xb638,	// (0x00068eb6) pec_content_pane_t2_ParamLimits

0xb638,	// (0x00068eb6) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0006cd60) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0006cd60) pec_content_pane_t

0x3f24,	// (0x000617a2) list_single_graphic_pane_cp01_ParamLimits

0x3f24,	// (0x000617a2) list_single_graphic_pane_cp01

0xa7fe,	// (0x0006807c) bg_popup_sub_pane_cp04

0xb64a,	// (0x00068ec8) popup_mup_playback_window_g1

0xb656,	// (0x00068ed4) popup_mup_playback_window_t1

0xb66b,	// (0x00068ee9) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0006cd65) popup_mup_playback_window_t

0xb6a2,	// (0x00068f20) main_image_pane_g1_ParamLimits

0xb6a2,	// (0x00068f20) main_image_pane_g1

0xb6e5,	// (0x00068f63) scroll_pane_cp018_ParamLimits

0xb6e5,	// (0x00068f63) scroll_pane_cp018

0xb6fd,	// (0x00068f7b) scroll_pane_cp016_ParamLimits

0xb6fd,	// (0x00068f7b) scroll_pane_cp016

0x3fb2,	// (0x00061830) smil2_image_pane_ParamLimits

0x3fb2,	// (0x00061830) smil2_image_pane

0x3fe8,	// (0x00061866) smil2_root_pane_ParamLimits

0x3fe8,	// (0x00061866) smil2_root_pane

0x4014,	// (0x00061892) smil2_text_pane_ParamLimits

0x4014,	// (0x00061892) smil2_text_pane

0xa11d,	// (0x0006799b) bg_list_pane_cp06

0xb739,	// (0x00068fb7) grid_radio_pane

0xa11d,	// (0x0006799b) bg_popup_window_pane_cp06

0xb743,	// (0x00068fc1) main_fmradio_pane_t1

0xb1d8,	// (0x00068a56) heading_pane_cp04

0xb751,	// (0x00068fcf) main_fmradio_pane_t2

0xc72d,	// (0x00069fab) popup_cale_lunar_info_window_g1

0xb75f,	// (0x00068fdd) main_fmradio_pane_t3

0xc735,	// (0x00069fb3) popup_cale_lunar_info_window_g2

0xb76f,	// (0x00068fed) main_fmradio_pane_t4

0x0001,

0xb77d,	// (0x00068ffb) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0006ce40) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0006cd7a) main_fmradio_pane_t

0xb78b,	// (0x00069009) wait_bar_pane_cp03

0xb793,	// (0x00069011) cell_fmradio_pane_ParamLimits

0xb793,	// (0x00069011) cell_fmradio_pane

0xb5f6,	// (0x00068e74) cell_fmradio_pane_g1_ParamLimits

0xb5f6,	// (0x00068e74) cell_fmradio_pane_g1

0xa11d,	// (0x0006799b) grid_highlight_pane_cp011

0xb7a8,	// (0x00069026) poc_content_pane_ParamLimits

0xb7a8,	// (0x00069026) poc_content_pane

0xb7ba,	// (0x00069038) scroll_pane_cp019

0x4054,	// (0x000618d2) popup_call_poc_act_window_ParamLimits

0x4054,	// (0x000618d2) popup_call_poc_act_window

0x4061,	// (0x000618df) popup_call_poc_inact_window_ParamLimits

0x4061,	// (0x000618df) popup_call_poc_inact_window

0xf599,	// (0x0006ce17) bg_popup_call_poc_act_pane_g

0xc6a5,	// (0x00069f23) bg_popup_call_poc_inact_pane_g1

0xc6ad,	// (0x00069f2b) bg_popup_call_poc_inact_pane_g2

0xb7c2,	// (0x00069040) popup_call_poc_act_window_g2

0xc6b5,	// (0x00069f33) bg_popup_call_poc_inact_pane_g3

0xc6bd,	// (0x00069f3b) bg_popup_call_poc_inact_pane_g4

0xc6c5,	// (0x00069f43) bg_popup_call_poc_inact_pane_g5

0xb7ca,	// (0x00069048) popup_call_poc_act_window_t1_ParamLimits

0xb7ca,	// (0x00069048) popup_call_poc_act_window_t1

0xb7f2,	// (0x00069070) popup_call_poc_act_window_t2_ParamLimits

0xb7f2,	// (0x00069070) popup_call_poc_act_window_t2

0xb81a,	// (0x00069098) popup_call_poc_act_window_t3_ParamLimits

0xb81a,	// (0x00069098) popup_call_poc_act_window_t3

0xb842,	// (0x000690c0) popup_call_poc_act_window_t4_ParamLimits

0xb842,	// (0x000690c0) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0006cd85) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0006cd85) popup_call_poc_act_window_t

0xc6cd,	// (0x00069f4b) bg_popup_call_poc_inact_pane_g6

0xc6d5,	// (0x00069f53) bg_popup_call_poc_inact_pane_g7

0xc6dd,	// (0x00069f5b) bg_popup_call_poc_inact_pane_g8

0xb854,	// (0x000690d2) popup_call_poc_inact_window_g2

0xc6e5,	// (0x00069f63) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0006ce04) bg_popup_call_poc_inact_pane_g

0xb85c,	// (0x000690da) popup_call_poc_inact_window_t1_ParamLimits

0xb85c,	// (0x000690da) popup_call_poc_inact_window_t1

0xb871,	// (0x000690ef) popup_call_poc_inact_window_t2_ParamLimits

0xb871,	// (0x000690ef) popup_call_poc_inact_window_t2

0xb886,	// (0x00069104) popup_call_poc_inact_window_t3_ParamLimits

0xb886,	// (0x00069104) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0006cd8e) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0006cd8e) popup_call_poc_inact_window_t

0xc8b1,	// (0x0006a12f) context_pane_ParamLimits

0x4670,	// (0x00061eee) signal_pane_ParamLimits

0xb440,	// (0x00068cbe) main_call2_pane

0xc89f,	// (0x0006a11d) popup_phob_thumbnail2_window_ParamLimits

0xc89f,	// (0x0006a11d) popup_phob_thumbnail2_window

0x3d1b,	// (0x00061599) aid_hotspot_pointer_arrow_pane

0x3d23,	// (0x000615a1) aid_hotspot_pointer_hand_pane

0x4386,	// (0x00061c04) phob_pre_status_pane_g5

0x1ce4,	// (0x0005f562) cams_zoom_pane_ParamLimits

0x1cf0,	// (0x0005f56e) image_vga_pane_ParamLimits

0x1cff,	// (0x0005f57d) main_camera_pane_g1_ParamLimits

0x1d0d,	// (0x0005f58b) main_camera_pane_g2_ParamLimits

0x1d19,	// (0x0005f597) main_camera_pane_g3_ParamLimits

0x1d27,	// (0x0005f5a5) main_camera_pane_g4_ParamLimits

0x1d35,	// (0x0005f5b3) main_camera_pane_g5_ParamLimits

0x1d43,	// (0x0005f5c1) main_camera_pane_g6_ParamLimits

0x1d51,	// (0x0005f5cf) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0006ca8d) main_camera_pane_g_ParamLimits

0x1d5f,	// (0x0005f5dd) main_camera_pane_t1_ParamLimits

0x1d71,	// (0x0005f5ef) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0006ca9e) main_camera_pane_t_ParamLimits

0xa7fe,	// (0x0006807c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7fe,	// (0x0006807c) bg_popup_preview_window_pane_cp01

0xb89b,	// (0x00069119) popup_phob_thumbnail2_window_g1_ParamLimits

0xb89b,	// (0x00069119) popup_phob_thumbnail2_window_g1

0xa11d,	// (0x0006799b) call2_cli_visual_pane

0x407d,	// (0x000618fb) popup_call2_audio_conf_window_ParamLimits

0x407d,	// (0x000618fb) popup_call2_audio_conf_window

0x4096,	// (0x00061914) popup_call2_audio_first_window_ParamLimits

0x4096,	// (0x00061914) popup_call2_audio_first_window

0x4134,	// (0x000619b2) popup_call2_audio_in_window_ParamLimits

0x4134,	// (0x000619b2) popup_call2_audio_in_window

0x4178,	// (0x000619f6) popup_call2_audio_out_window_ParamLimits

0x4178,	// (0x000619f6) popup_call2_audio_out_window

0x41e2,	// (0x00061a60) popup_call2_audio_second_window_ParamLimits

0x41e2,	// (0x00061a60) popup_call2_audio_second_window

0x4240,	// (0x00061abe) popup_call2_audio_wait_window_ParamLimits

0x4240,	// (0x00061abe) popup_call2_audio_wait_window

0xa11d,	// (0x0006799b) bg_popup_call2_act_pane_cp03

0xa7e0,	// (0x0006805e) list_conf_pane_cp

0xb8a7,	// (0x00069125) popup_call2_audio_conf_window_t1

0xb8b5,	// (0x00069133) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8b5,	// (0x00069133) list_single_graphic_popup_conf2_pane

0xb247,	// (0x00068ac5) list_highlight_pane_cp04

0xb8c8,	// (0x00069146) list_single_graphic_popup_conf2_pane_g1

0xb258,	// (0x00068ad6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0006cd95) list_single_graphic_popup_conf2_pane_g

0xb8d2,	// (0x00069150) list_single_graphic_popup_conf2_pane_t1

0xb8e0,	// (0x0006915e) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8e0,	// (0x0006915e) bg_popup_call2_act_pane_cp01

0xb96a,	// (0x000691e8) call_type_pane_cp05_ParamLimits

0xb96a,	// (0x000691e8) call_type_pane_cp05

0xb9be,	// (0x0006923c) popup_call2_audio_second_window_g1_ParamLimits

0xb9be,	// (0x0006923c) popup_call2_audio_second_window_g1

0xba12,	// (0x00069290) popup_call2_audio_second_window_g2_ParamLimits

0xba12,	// (0x00069290) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0006cd9a) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0006cd9a) popup_call2_audio_second_window_g

0xba77,	// (0x000692f5) popup_call2_audio_second_window_t1_ParamLimits

0xba77,	// (0x000692f5) popup_call2_audio_second_window_t1

0xbb32,	// (0x000693b0) popup_call2_audio_second_window_t2_ParamLimits

0xbb32,	// (0x000693b0) popup_call2_audio_second_window_t2

0xbb85,	// (0x00069403) popup_call2_audio_second_window_t3_ParamLimits

0xbb85,	// (0x00069403) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0006cda1) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0006cda1) popup_call2_audio_second_window_t

0xa11d,	// (0x0006799b) bg_popup_call2_in_pane_cp02

0xa127,	// (0x000679a5) call_type_pane_cp04

0xa12f,	// (0x000679ad) popup_call2_audio_wait_window_g1

0xa137,	// (0x000679b5) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0006c97a) popup_call2_audio_wait_window_g

0xa13f,	// (0x000679bd) popup_call2_audio_wait_window_t3

0xbc78,	// (0x000694f6) bg_popup_call2_act_pane_ParamLimits

0xbc78,	// (0x000694f6) bg_popup_call2_act_pane

0xbd38,	// (0x000695b6) call_type_pane_cp03_ParamLimits

0xbd38,	// (0x000695b6) call_type_pane_cp03

0xbd9c,	// (0x0006961a) popup_call2_audio_first_window_g1_ParamLimits

0xbd9c,	// (0x0006961a) popup_call2_audio_first_window_g1

0xbe0c,	// (0x0006968a) popup_call2_audio_first_window_g2_ParamLimits

0xbe0c,	// (0x0006968a) popup_call2_audio_first_window_g2

0xb3d8,	// (0x00068c56) popup_call2_audio_first_window_g3_ParamLimits

0xb3d8,	// (0x00068c56) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0006cdaa) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0006cdaa) popup_call2_audio_first_window_g

0xbeea,	// (0x00069768) popup_call2_audio_first_window_t1_ParamLimits

0xbeea,	// (0x00069768) popup_call2_audio_first_window_t1

0xbfed,	// (0x0006986b) popup_call2_audio_first_window_t4_ParamLimits

0xbfed,	// (0x0006986b) popup_call2_audio_first_window_t4

0xc0d0,	// (0x0006994e) popup_call2_audio_first_window_t5_ParamLimits

0xc0d0,	// (0x0006994e) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0006cdb5) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0006cdb5) popup_call2_audio_first_window_t

0xa7f6,	// (0x00068074) bg_popup_call2_act_pane_g1

0xc73f,	// (0x00069fbd) popup_cale_lunar_info_window_t1

0xc74d,	// (0x00069fcb) popup_cale_lunar_info_window_t2

0xc75b,	// (0x00069fd9) popup_cale_lunar_info_window_t3

0xa11d,	// (0x0006799b) bg_popup_call2_bubble_pane

0xc1d1,	// (0x00069a4f) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1d1,	// (0x00069a4f) bg_popup_call2_in_pane_cp01

0x9df9,	// (0x00067677) call_type_pane_cp02

0xc219,	// (0x00069a97) popup_call2_audio_out_window_g1_ParamLimits

0xc219,	// (0x00069a97) popup_call2_audio_out_window_g1

0xc245,	// (0x00069ac3) popup_call2_audio_out_window_g2_ParamLimits

0xc245,	// (0x00069ac3) popup_call2_audio_out_window_g2

0xc26d,	// (0x00069aeb) popup_call2_audio_out_window_g3_ParamLimits

0xc26d,	// (0x00069aeb) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0006cdbe) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0006cdbe) popup_call2_audio_out_window_g

0xc2a8,	// (0x00069b26) popup_call2_audio_out_window_t1_ParamLimits

0xc2a8,	// (0x00069b26) popup_call2_audio_out_window_t1

0xc307,	// (0x00069b85) popup_call2_audio_out_window_t2_ParamLimits

0xc307,	// (0x00069b85) popup_call2_audio_out_window_t2

0xc35b,	// (0x00069bd9) popup_call2_audio_out_window_t3_ParamLimits

0xc35b,	// (0x00069bd9) popup_call2_audio_out_window_t3

0xc371,	// (0x00069bef) popup_call2_audio_out_window_t4_ParamLimits

0xc371,	// (0x00069bef) popup_call2_audio_out_window_t4

0xc387,	// (0x00069c05) popup_call2_audio_out_window_t5_ParamLimits

0xc387,	// (0x00069c05) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0006cdc7) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0006cdc7) popup_call2_audio_out_window_t

0xc3eb,	// (0x00069c69) bg_popup_call2_in_pane_ParamLimits

0xc3eb,	// (0x00069c69) bg_popup_call2_in_pane

0xc447,	// (0x00069cc5) popup_call2_audio_in_window_g1_ParamLimits

0xc447,	// (0x00069cc5) popup_call2_audio_in_window_g1

0xc47f,	// (0x00069cfd) popup_call2_audio_in_window_g2_ParamLimits

0xc47f,	// (0x00069cfd) popup_call2_audio_in_window_g2

0xc4b7,	// (0x00069d35) popup_call2_audio_in_window_g3_ParamLimits

0xc4b7,	// (0x00069d35) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0006cdd4) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0006cdd4) popup_call2_audio_in_window_g

0xc50f,	// (0x00069d8d) popup_call2_audio_in_window_t1_ParamLimits

0xc50f,	// (0x00069d8d) popup_call2_audio_in_window_t1

0xc58f,	// (0x00069e0d) popup_call2_audio_in_window_t2_ParamLimits

0xc58f,	// (0x00069e0d) popup_call2_audio_in_window_t2

0xc60f,	// (0x00069e8d) popup_call2_audio_in_window_t3_ParamLimits

0xc60f,	// (0x00069e8d) popup_call2_audio_in_window_t3

0xc629,	// (0x00069ea7) popup_call2_audio_in_window_t4_ParamLimits

0xc629,	// (0x00069ea7) popup_call2_audio_in_window_t4

0xc63b,	// (0x00069eb9) popup_call2_audio_in_window_t5_ParamLimits

0xc63b,	// (0x00069eb9) popup_call2_audio_in_window_t5

0xc650,	// (0x00069ece) popup_call2_audio_in_window_t6_ParamLimits

0xc650,	// (0x00069ece) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0006cddd) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0006cddd) popup_call2_audio_in_window_t

0xa7f6,	// (0x00068074) bg_popup_call2_in_pane_g1

0xc769,	// (0x00069fe7) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0006ce45) popup_cale_lunar_info_window_t

0xa7fe,	// (0x0006807c) bg_popup_call2_rect_pane_ParamLimits

0xa7fe,	// (0x0006807c) bg_popup_call2_rect_pane

0xa11d,	// (0x0006799b) call2_cli_visual_graphic_pane

0xa11d,	// (0x0006799b) call2_cli_visual_text_pane

0x4708,	// (0x00061f86) smil_status_volume_pane_g3

0x0002,

0xa918,	// (0x00068196) call2_cli_visual_graphic_pane_g1

0xa918,	// (0x00068196) call2_cli_visual_graphic_pane_g2

0xa918,	// (0x00068196) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0006cdea) call2_cli_visual_graphic_pane_g

0xc665,	// (0x00069ee3) bg_popup_call2_rect_pane_g1

0xa9b6,	// (0x00068234) bg_popup_call2_rect_pane_g2

0xc66d,	// (0x00069eeb) bg_popup_call2_rect_pane_g3

0xc675,	// (0x00069ef3) bg_popup_call2_rect_pane_g4

0xc67d,	// (0x00069efb) bg_popup_call2_rect_pane_g5

0xc685,	// (0x00069f03) bg_popup_call2_rect_pane_g6

0xc68d,	// (0x00069f0b) bg_popup_call2_rect_pane_g7

0xc695,	// (0x00069f13) bg_popup_call2_rect_pane_g8

0xc69d,	// (0x00069f1b) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0006cdf1) bg_popup_call2_rect_pane_g

0xc6a5,	// (0x00069f23) bg_popup_call2_bubble_pane_g1

0xc6ad,	// (0x00069f2b) bg_popup_call2_bubble_pane_g2

0xc6b5,	// (0x00069f33) bg_popup_call2_bubble_pane_g3

0xc6bd,	// (0x00069f3b) bg_popup_call2_bubble_pane_g4

0xc6c5,	// (0x00069f43) bg_popup_call2_bubble_pane_g5

0xc6cd,	// (0x00069f4b) bg_popup_call2_bubble_pane_g6

0xc6d5,	// (0x00069f53) bg_popup_call2_bubble_pane_g7

0xc6dd,	// (0x00069f5b) bg_popup_call2_bubble_pane_g8

0xc6e5,	// (0x00069f63) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0006ce04) bg_popup_call2_bubble_pane_g

0x145c,	// (0x0005ecda) aid_cale_week_size_cell_pane

0x1d85,	// (0x0005f603) aid_cams_cif_uncrop_pane_ParamLimits

0x1d85,	// (0x0005f603) aid_cams_cif_uncrop_pane

0x1ee2,	// (0x0005f760) aid_cams_size_cell_ParamLimits

0x1ee2,	// (0x0005f760) aid_cams_size_cell

0x1eee,	// (0x0005f76c) grid_cams_pane_ParamLimits

0x1efc,	// (0x0005f77a) linegrid_cams_pane_ParamLimits

0x20cc,	// (0x0005f94a) call_video_pane_t1

0x20e9,	// (0x0005f967) call_video_pane_t2

0x0001,

0xf273,	// (0x0006caf1) call_video_pane_t

0x25b5,	// (0x0005fe33) aid_cale_month_size_cell_pane_ParamLimits

0x25b5,	// (0x0005fe33) aid_cale_month_size_cell_pane

0xf610,	// (0x0006ce8e) smil_status_volume_pane_g

0x4715,	// (0x00061f93) volume_smil_pane_ParamLimits

0x9cc3,	// (0x00067541) aid_popup2_width_pane

0x1350,	// (0x0005ebce) cell_qdial_pane_g4_ParamLimits

0x1350,	// (0x0005ebce) cell_qdial_pane_g4

0x35e6,	// (0x00060e64) aid_blid_cardinal_pane_ParamLimits

0x35f6,	// (0x00060e74) aid_blid_destination_pane_ParamLimits

0x35f6,	// (0x00060e74) aid_blid_destination_pane

0xa7fe,	// (0x0006807c) bg_popup_call_poc_act_pane_ParamLimits

0xa7fe,	// (0x0006807c) bg_popup_call_poc_act_pane

0xa7fe,	// (0x0006807c) bg_popup_call_poc_inact_pane_ParamLimits

0xa7fe,	// (0x0006807c) bg_popup_call_poc_inact_pane

0xc6ed,	// (0x00069f6b) bg_popup_call_poc_act_pane_g1

0xc6f5,	// (0x00069f73) bg_popup_call_poc_act_pane_g2

0xc6fd,	// (0x00069f7b) bg_popup_call_poc_act_pane_g3

0xc6bd,	// (0x00069f3b) bg_popup_call_poc_act_pane_g4

0xc6c5,	// (0x00069f43) bg_popup_call_poc_act_pane_g5

0xc705,	// (0x00069f83) bg_popup_call_poc_act_pane_g6

0xc6d5,	// (0x00069f53) bg_popup_call_poc_act_pane_g7

0xc70d,	// (0x00069f8b) bg_popup_call_poc_act_pane_g8

0xa11d,	// (0x0006799b) main_usb_pane

0xc876,	// (0x0006a0f4) popup_cale_lunar_info_window

0x2401,	// (0x0005fc7f) im_reading_pane_t1_ParamLimits

0xab94,	// (0x00068412) list_im_pane_ParamLimits

0xaba5,	// (0x00068423) scroll_pane_cp07_ParamLimits

0xa11d,	// (0x0006799b) grid_highlight_pane_cp012

0xa7fe,	// (0x0006807c) mup_scale_pane_ParamLimits

0xb3d8,	// (0x00068c56) main_usb_pane_g1_ParamLimits

0xb3d8,	// (0x00068c56) main_usb_pane_g1

0x42a9,	// (0x00061b27) main_usb_pane_g2_ParamLimits

0x42a9,	// (0x00061b27) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0006ce2e) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0006ce2e) main_usb_pane_g

0x42b5,	// (0x00061b33) main_usb_pane_t1_ParamLimits

0x42b5,	// (0x00061b33) main_usb_pane_t1

0x42c7,	// (0x00061b45) main_usb_pane_t2_ParamLimits

0x42c7,	// (0x00061b45) main_usb_pane_t2

0x42d9,	// (0x00061b57) main_usb_pane_t3_ParamLimits

0x42d9,	// (0x00061b57) main_usb_pane_t3

0x42eb,	// (0x00061b69) main_usb_pane_t4_ParamLimits

0x42eb,	// (0x00061b69) main_usb_pane_t4

0x42fd,	// (0x00061b7b) main_usb_pane_t5_ParamLimits

0x42fd,	// (0x00061b7b) main_usb_pane_t5

0x430f,	// (0x00061b8d) main_usb_pane_t6_ParamLimits

0x430f,	// (0x00061b8d) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0006ce33) main_usb_pane_t_ParamLimits

0x3585,	// (0x00060e03) aid_text_placing

0x3590,	// (0x00060e0e) main_location2_pane_t1_ParamLimits

0x35a6,	// (0x00060e24) main_location2_pane_t2_ParamLimits

0x35bc,	// (0x00060e3a) main_location2_pane_t3_ParamLimits

0x35d2,	// (0x00060e50) main_location2_pane_t4_ParamLimits

0x35d2,	// (0x00060e50) main_location2_pane_t4

0xf3d4,	// (0x0006cc52) main_location2_pane_t_ParamLimits

0xa83a,	// (0x000680b8) find_pinb_pane_g2_ParamLimits

0xa83a,	// (0x000680b8) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0006c9a0) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0006c9a0) find_pinb_pane_g

0xa846,	// (0x000680c4) find_pinb_pane_t1_ParamLimits

0xa858,	// (0x000680d6) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0006c9a5) find_pinb_pane_t_ParamLimits

0xa11d,	// (0x0006799b) main_call3_pane

0x2b34,	// (0x000603b2) cale_month_day_heading_pane_t1_ParamLimits

0x2bb6,	// (0x00060434) cale_month_day_heading_pane_t2_ParamLimits

0x2c43,	// (0x000604c1) cale_month_day_heading_pane_t3_ParamLimits

0x2cd0,	// (0x0006054e) cale_month_day_heading_pane_t4_ParamLimits

0x2d5d,	// (0x000605db) cale_month_day_heading_pane_t5_ParamLimits

0x2df2,	// (0x00060670) cale_month_day_heading_pane_t6_ParamLimits

0x2e8f,	// (0x0006070d) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0006cb29) cale_month_day_heading_pane_t_ParamLimits

0x3165,	// (0x000609e3) smil_status_volume_pane

0x3e67,	// (0x000616e5) postcard_address_pane_ParamLimits

0x3e67,	// (0x000616e5) postcard_address_pane

0x3e75,	// (0x000616f3) postcard_message_pane_ParamLimits

0x3e75,	// (0x000616f3) postcard_message_pane

0x427f,	// (0x00061afd) call2_cli_visual_pane_t1_ParamLimits

0x427f,	// (0x00061afd) call2_cli_visual_pane_t1

0x4874,	// (0x000620f2) postcard_message_pane_t1_ParamLimits

0x4874,	// (0x000620f2) postcard_message_pane_t1

0x485d,	// (0x000620db) postcard_address_pane_t1_ParamLimits

0x485d,	// (0x000620db) postcard_address_pane_t1

0x484e,	// (0x000620cc) popup_call3_audio_in_window_ParamLimits

0x484e,	// (0x000620cc) popup_call3_audio_in_window

0x472c,	// (0x00061faa) bg_popup_call3_in_pane_ParamLimits

0x472c,	// (0x00061faa) bg_popup_call3_in_pane

0x4794,	// (0x00062012) popup_call3_audio_in_window_g1_ParamLimits

0x4794,	// (0x00062012) popup_call3_audio_in_window_g1

0x47ac,	// (0x0006202a) popup_call3_audio_in_window_g2_ParamLimits

0x47ac,	// (0x0006202a) popup_call3_audio_in_window_g2

0x47c4,	// (0x00062042) popup_call3_audio_in_window_g3_ParamLimits

0x47c4,	// (0x00062042) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0006ce95) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0006ce95) popup_call3_audio_in_window_g

0x47ec,	// (0x0006206a) popup_call3_audio_in_window_t1_ParamLimits

0x47ec,	// (0x0006206a) popup_call3_audio_in_window_t1

0x4814,	// (0x00062092) popup_call3_audio_in_window_t2_ParamLimits

0x4814,	// (0x00062092) popup_call3_audio_in_window_t2

0x483c,	// (0x000620ba) popup_call3_audio_in_window_t3_ParamLimits

0x483c,	// (0x000620ba) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0006ce9e) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0006ce9e) popup_call3_audio_in_window_t

0xb440,	// (0x00068cbe) bg_popup_call3_rect_pane

0xc665,	// (0x00069ee3) bg_popup_call3_rect_pane_g1

0xa9b6,	// (0x00068234) bg_popup_call3_rect_pane_g2

0xc66d,	// (0x00069eeb) bg_popup_call3_rect_pane_g3

0xc675,	// (0x00069ef3) bg_popup_call3_rect_pane_g4

0xc67d,	// (0x00069efb) bg_popup_call3_rect_pane_g5

0xc685,	// (0x00069f03) bg_popup_call3_rect_pane_g6

0xc68d,	// (0x00069f0b) bg_popup_call3_rect_pane_g7

0x3a2c,	// (0x000612aa) mup_visualizer_osc_pane

0xb4ff,	// (0x00068d7d) mup_visualizer_spec_pane

0x474c,	// (0x00061fca) call3_video_qcif_pane_ParamLimits

0x474c,	// (0x00061fca) call3_video_qcif_pane

0x475e,	// (0x00061fdc) call3_video_qcif_uncrop_pane_ParamLimits

0x475e,	// (0x00061fdc) call3_video_qcif_uncrop_pane

0x476e,	// (0x00061fec) call3_video_subqcif_pane_ParamLimits

0x476e,	// (0x00061fec) call3_video_subqcif_pane

0x4782,	// (0x00062000) call3_video_subqcif_uncrop_pane_ParamLimits

0x4782,	// (0x00062000) call3_video_subqcif_uncrop_pane

0x47dc,	// (0x0006205a) popup_call3_audio_in_window_g4_ParamLimits

0x47dc,	// (0x0006205a) popup_call3_audio_in_window_g4

0x46f7,	// (0x00061f75) mup_spec_half_pane

0x4700,	// (0x00061f7e) mup_spec_half_pane_cp

0xc911,	// (0x0006a18f) mup_osc_middle_pane

0xc91a,	// (0x0006a198) mup_visualizer_osc_pane_g1

0x46d7,	// (0x00061f55) mup_spec_bar_pane_ParamLimits

0x46d7,	// (0x00061f55) mup_spec_bar_pane

0xc8fe,	// (0x0006a17c) mup_spec_bar_pane_g1

0xc908,	// (0x0006a186) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0006ce89) mup_spec_bar_pane_g

0x145c,	// (0x0005ecda) aid_cale_week_size_cell_pane_ParamLimits

0x1476,	// (0x0005ecf4) bg_cale_heading_pane_ParamLimits

0xa9ea,	// (0x00068268) bg_cale_pane_cp01_ParamLimits

0x149f,	// (0x0005ed1d) cale_week_corner_pane_ParamLimits

0x14be,	// (0x0005ed3c) cale_week_day_heading_pane_ParamLimits

0x14ec,	// (0x0005ed6a) cale_week_scroll_pane_g1_ParamLimits

0x1510,	// (0x0005ed8e) cale_week_scroll_pane_g2_ParamLimits

0x1528,	// (0x0005eda6) cale_week_scroll_pane_g3_ParamLimits

0x1540,	// (0x0005edbe) cale_week_scroll_pane_g4_ParamLimits

0x1558,	// (0x0005edd6) cale_week_scroll_pane_g5_ParamLimits

0x1570,	// (0x0005edee) cale_week_scroll_pane_g6_ParamLimits

0x1590,	// (0x0005ee0e) cale_week_scroll_pane_g7_ParamLimits

0x15b0,	// (0x0005ee2e) cale_week_scroll_pane_g8_ParamLimits

0x15d0,	// (0x0005ee4e) cale_week_scroll_pane_g9_ParamLimits

0x15ed,	// (0x0005ee6b) cale_week_scroll_pane_g10_ParamLimits

0x160a,	// (0x0005ee88) cale_week_scroll_pane_g11_ParamLimits

0x1627,	// (0x0005eea5) cale_week_scroll_pane_g12_ParamLimits

0x1644,	// (0x0005eec2) cale_week_scroll_pane_g13_ParamLimits

0x1669,	// (0x0005eee7) cale_week_scroll_pane_g14_ParamLimits

0x1692,	// (0x0005ef10) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0006ca31) cale_week_scroll_pane_g_ParamLimits

0x16bb,	// (0x0005ef39) cale_week_time_pane_ParamLimits

0x16db,	// (0x0005ef59) grid_cale_week_pane_ParamLimits

0xaa08,	// (0x00068286) listscroll_cale_week_pane_t1

0xaa1a,	// (0x00068298) scroll_pane_cp08_ParamLimits

0x2622,	// (0x0005fea0) cale_month_corner_pane_ParamLimits

0xadc5,	// (0x00068643) cale_month_pane_t1

0x2ac6,	// (0x00060344) cale_month_week_pane_ParamLimits

0xb3d8,	// (0x00068c56) popup_call_status_window_g1_ParamLimits

0x338e,	// (0x00060c0c) popup_call_status_window_g2_ParamLimits

0x339a,	// (0x00060c18) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0006cbd9) popup_call_status_window_g_ParamLimits

0xb1c8,	// (0x00068a46) aid_call2_pane

0x3cdc,	// (0x0006155a) msg_header_pane_g1

0x3e67,	// (0x000616e5) postcard_address2_pane_ParamLimits

0x3e67,	// (0x000616e5) postcard_address2_pane

0x3e75,	// (0x000616f3) postcard_message2_pane_ParamLimits

0x3e75,	// (0x000616f3) postcard_message2_pane

0x467e,	// (0x00061efc) message2_row_pane_ParamLimits

0x467e,	// (0x00061efc) message2_row_pane

0x4698,	// (0x00061f16) address2_row_pane_ParamLimits

0x4698,	// (0x00061f16) address2_row_pane

0xc8cc,	// (0x0006a14a) postcard_message2_row_pane_g1

0xc8d4,	// (0x0006a152) postcard_message2_row_pane_t1

0xc8cc,	// (0x0006a14a) address2_row_pane_g1

0xc8d4,	// (0x0006a152) address2_row_pane_t1

0x1c39,	// (0x0005f4b7) aid_size_cell_vorec

0xa11d,	// (0x0006799b) main_rss_pane

0x46ab,	// (0x00061f29) rss_list_single_pane_ParamLimits

0x46ab,	// (0x00061f29) rss_list_single_pane

0xc8e2,	// (0x0006a160) rss_list_single_pane_t1

0xc8f0,	// (0x0006a16e) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0006ce84) rss_list_single_pane_t

0xa11d,	// (0x0006799b) main_camera2_pane

0xa11d,	// (0x0006799b) main_video2_pane

0x48d8,	// (0x00062156) cams_zoom_pane_cp2_ParamLimits

0x48d8,	// (0x00062156) cams_zoom_pane_cp2

0x48e4,	// (0x00062162) image2_vga_pane_ParamLimits

0x48e4,	// (0x00062162) image2_vga_pane

0x48f3,	// (0x00062171) main_camera2_pane_g1_ParamLimits

0x48f3,	// (0x00062171) main_camera2_pane_g1

0x48ff,	// (0x0006217d) main_camera2_pane_g2_ParamLimits

0x48ff,	// (0x0006217d) main_camera2_pane_g2

0x490b,	// (0x00062189) main_camera2_pane_g3_ParamLimits

0x490b,	// (0x00062189) main_camera2_pane_g3

0x4917,	// (0x00062195) main_camera2_pane_g4_ParamLimits

0x4917,	// (0x00062195) main_camera2_pane_g4

0x4923,	// (0x000621a1) main_camera2_pane_g5_ParamLimits

0x4923,	// (0x000621a1) main_camera2_pane_g5

0x492f,	// (0x000621ad) main_camera2_pane_g6_ParamLimits

0x492f,	// (0x000621ad) main_camera2_pane_g6

0x493b,	// (0x000621b9) main_camera2_pane_g7_ParamLimits

0x493b,	// (0x000621b9) main_camera2_pane_g7

0x4947,	// (0x000621c5) main_camera2_pane_g8_ParamLimits

0x4947,	// (0x000621c5) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0006cea5) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0006cea5) main_camera2_pane_g

0x495f,	// (0x000621dd) main_camera2_pane_t1_ParamLimits

0x495f,	// (0x000621dd) main_camera2_pane_t1

0x4971,	// (0x000621ef) main_camera2_pane_t2_ParamLimits

0x4971,	// (0x000621ef) main_camera2_pane_t2

0x4983,	// (0x00062201) main_camera2_pane_t3_ParamLimits

0x4983,	// (0x00062201) main_camera2_pane_t3

0x4995,	// (0x00062213) main_camera2_pane_t4_ParamLimits

0x4995,	// (0x00062213) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0006ceb8) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0006ceb8) main_camera2_pane_t

0x49f2,	// (0x00062270) cams_zoom_pane_cp4_ParamLimits

0x49f2,	// (0x00062270) cams_zoom_pane_cp4

0x4a02,	// (0x00062280) image2_cif_pane_ParamLimits

0x4a02,	// (0x00062280) image2_cif_pane

0x4a17,	// (0x00062295) image2_subqcif_pane_ParamLimits

0x4a17,	// (0x00062295) image2_subqcif_pane

0x4a26,	// (0x000622a4) main_video2_pane_g1_ParamLimits

0x4a26,	// (0x000622a4) main_video2_pane_g1

0x4a38,	// (0x000622b6) main_video2_pane_g2_ParamLimits

0x4a38,	// (0x000622b6) main_video2_pane_g2

0x4a48,	// (0x000622c6) main_video2_pane_g3_ParamLimits

0x4a48,	// (0x000622c6) main_video2_pane_g3

0x4a58,	// (0x000622d6) main_video2_pane_g4_ParamLimits

0x4a58,	// (0x000622d6) main_video2_pane_g4

0x4a68,	// (0x000622e6) main_video2_pane_g5_ParamLimits

0x4a68,	// (0x000622e6) main_video2_pane_g5

0x4a78,	// (0x000622f6) main_video2_pane_g6_ParamLimits

0x4a78,	// (0x000622f6) main_video2_pane_g6

0x0005,

0xf649,	// (0x0006cec7) main_video2_pane_g_ParamLimits

0xf649,	// (0x0006cec7) main_video2_pane_g

0x4a8a,	// (0x00062308) main_video2_pane_t1_ParamLimits

0x4a8a,	// (0x00062308) main_video2_pane_t1

0x4aa4,	// (0x00062322) main_video2_pane_t2_ParamLimits

0x4aa4,	// (0x00062322) main_video2_pane_t2

0x4aca,	// (0x00062348) main_video2_pane_t3_ParamLimits

0x4aca,	// (0x00062348) main_video2_pane_t3

0x0002,

0xf656,	// (0x0006ced4) main_video2_pane_t_ParamLimits

0xf656,	// (0x0006ced4) main_video2_pane_t

0x43c6,	// (0x00061c44) call_muted_g2

0x0001,

0xf5f8,	// (0x0006ce76) call_muted_g

0xa11d,	// (0x0006799b) main_mup2_pane

0xc951,	// (0x0006a1cf) main_mup2_pane_g1_ParamLimits

0xc951,	// (0x0006a1cf) main_mup2_pane_g1

0x4af0,	// (0x0006236e) main_mup2_pane_g2_ParamLimits

0x4af0,	// (0x0006236e) main_mup2_pane_g2

0x4d82,	// (0x00062600) main_mup_pane_g13_cp1

0x4d8a,	// (0x00062608) mup_volume_pane_cp1

0x4b12,	// (0x00062390) main_mup2_pane_g4_ParamLimits

0x4b12,	// (0x00062390) main_mup2_pane_g4

0x4b27,	// (0x000623a5) main_mup2_pane_g5_ParamLimits

0x4b27,	// (0x000623a5) main_mup2_pane_g5

0x4b3c,	// (0x000623ba) main_mup2_pane_g6_ParamLimits

0x4b3c,	// (0x000623ba) main_mup2_pane_g6

0x4b51,	// (0x000623cf) main_mup2_pane_g7_ParamLimits

0x4b51,	// (0x000623cf) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0006cedb) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0006cedb) main_mup2_pane_g

0x4b6d,	// (0x000623eb) main_mup2_pane_t1_ParamLimits

0x4b6d,	// (0x000623eb) main_mup2_pane_t1

0x4b84,	// (0x00062402) main_mup2_pane_t2_ParamLimits

0x4b84,	// (0x00062402) main_mup2_pane_t2

0x4b9b,	// (0x00062419) main_mup2_pane_t3_ParamLimits

0x4b9b,	// (0x00062419) main_mup2_pane_t3

0x4bb2,	// (0x00062430) main_mup2_pane_t4_ParamLimits

0x4bb2,	// (0x00062430) main_mup2_pane_t4

0x4bcc,	// (0x0006244a) main_mup2_pane_t5_ParamLimits

0x4bcc,	// (0x0006244a) main_mup2_pane_t5

0x4be6,	// (0x00062464) main_mup2_pane_t6_ParamLimits

0x4be6,	// (0x00062464) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0006ceea) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0006ceea) main_mup2_pane_t

0x4c1e,	// (0x0006249c) mup2_visualizer_pane_ParamLimits

0x4c1e,	// (0x0006249c) mup2_visualizer_pane

0x4c54,	// (0x000624d2) mup_progress_pane_cp_ParamLimits

0x4c54,	// (0x000624d2) mup_progress_pane_cp

0x4d6d,	// (0x000625eb) mup_volume_pane_cp_ParamLimits

0x4d6d,	// (0x000625eb) mup_volume_pane_cp

0x4c6d,	// (0x000624eb) mup2_visualizer_pane_g1_ParamLimits

0x4c6d,	// (0x000624eb) mup2_visualizer_pane_g1

0xc95d,	// (0x0006a1db) mup2_visualizer_pane_g2_ParamLimits

0xc95d,	// (0x0006a1db) mup2_visualizer_pane_g2

0x4c82,	// (0x00062500) mup2_visualizer_pane_g3_ParamLimits

0x4c82,	// (0x00062500) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0006cef7) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0006cef7) mup2_visualizer_pane_g

0xb731,	// (0x00068faf) aid_size_cell_fmradio

0x44dc,	// (0x00061d5a) aid_height_parent_landcape

0xac23,	// (0x000684a1) wml_content_pane_cp

0xac2b,	// (0x000684a9) wml_tabs_pane

0xac34,	// (0x000684b2) popup_wml_miniature_window

0xac3c,	// (0x000684ba) scroll_pane_cp021

0xac50,	// (0x000684ce) wml_content_pane_comp8

0xa11d,	// (0x0006799b) bg_popup_sub_pane_cp05

0xc97b,	// (0x0006a1f9) popup_wml_miniature_window_g1

0xc983,	// (0x0006a201) wml_miniature_view_pane

0x4c90,	// (0x0006250e) aid_size_wml_view

0x4c98,	// (0x00062516) wml_miniature_view_pane_g1

0x4ca1,	// (0x0006251f) wml_miniature_view_pane_g2

0x4caa,	// (0x00062528) wml_miniature_view_pane_g3

0x4cb2,	// (0x00062530) wml_miniature_view_pane_g4

0x4cba,	// (0x00062538) wml_miniature_view_pane_g5

0x4cc2,	// (0x00062540) wml_miniature_view_pane_g6

0x4cca,	// (0x00062548) wml_miniature_view_pane_g7

0x4cd2,	// (0x00062550) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0006cefe) wml_miniature_view_pane_g

0xc951,	// (0x0006a1cf) background_graphic_ParamLimits

0xc951,	// (0x0006a1cf) background_graphic

0xc98b,	// (0x0006a209) wml_tabs_2_pane

0xc994,	// (0x0006a212) wml_tabs_3_pane_ParamLimits

0xc994,	// (0x0006a212) wml_tabs_3_pane

0xc9a6,	// (0x0006a224) wml_tabs_4_pane_ParamLimits

0xc9a6,	// (0x0006a224) wml_tabs_4_pane

0xc9bc,	// (0x0006a23a) wml_tabs_5_pane_ParamLimits

0xc9bc,	// (0x0006a23a) wml_tabs_5_pane

0xc9d6,	// (0x0006a254) wml_tabs_pane_g2_ParamLimits

0xc9d6,	// (0x0006a254) wml_tabs_pane_g2

0xc9ea,	// (0x0006a268) wml_tabs_pane_g3_ParamLimits

0xc9ea,	// (0x0006a268) wml_tabs_pane_g3

0x4cda,	// (0x00062558) wml_tabs_2_active_pane_ParamLimits

0x4cda,	// (0x00062558) wml_tabs_2_active_pane

0x4cec,	// (0x0006256a) wml_tabs_2_passive_pane_ParamLimits

0x4cec,	// (0x0006256a) wml_tabs_2_passive_pane

0x4cfe,	// (0x0006257c) wml_tabs_3_active_pane_cp_ParamLimits

0x4cfe,	// (0x0006257c) wml_tabs_3_active_pane_cp

0x4d11,	// (0x0006258f) wml_tabs_3_passive_pane_ParamLimits

0x4d11,	// (0x0006258f) wml_tabs_3_passive_pane

0x4d22,	// (0x000625a0) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d22,	// (0x000625a0) wml_tabs_3_passive_pane_cp

0x4d37,	// (0x000625b5) tabs_4_active_pane

0x4d3f,	// (0x000625bd) tabs_4_passive_pane

0x4d47,	// (0x000625c5) tabs_4_passive_pane_cp

0x4d4f,	// (0x000625cd) tabs_4_passive_pane_cp2

0x42a1,	// (0x00061b1f) aid_height_text

0x39f5,	// (0x00061273) mup_volume_cont_pane_ParamLimits

0x39f5,	// (0x00061273) mup_volume_cont_pane

0x0f9c,	// (0x0005e81a) aid_size_cell_pinb

0x0fa6,	// (0x0005e824) aid_size_list_pinb

0x4c3d,	// (0x000624bb) mup2_volume_cont_pane_ParamLimits

0x4c3d,	// (0x000624bb) mup2_volume_cont_pane

0x4d59,	// (0x000625d7) mup2_volume_cont_pane_g1_ParamLimits

0x4d59,	// (0x000625d7) mup2_volume_cont_pane_g1

0x0c06,	// (0x0005e484) aid_size_cell_touch_ParamLimits

0x0c06,	// (0x0005e484) aid_size_cell_touch

0x0e86,	// (0x0005e704) touch_pane_ParamLimits

0x0e86,	// (0x0005e704) touch_pane

0x9cb1,	// (0x0006752f) main_rss2_pane

0xca07,	// (0x0006a285) listscroll_rss2_pane

0xca10,	// (0x0006a28e) rss2_navigation_pane

0xca18,	// (0x0006a296) list_rss2_pane

0xb2ec,	// (0x00068b6a) scroll_pane_cp22

0xca20,	// (0x0006a29e) rss2_navigation_pane_g1

0xca29,	// (0x0006a2a7) rss2_navigation_pane_g2

0xca31,	// (0x0006a2af) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0006cf0f) rss2_navigation_pane_g

0xca39,	// (0x0006a2b7) rss2_navigation_pane_t1

0x4d92,	// (0x00062610) rss2_list_single_pane_ParamLimits

0x4d92,	// (0x00062610) rss2_list_single_pane

0xca47,	// (0x0006a2c5) rss2_list_single_pane_t2

0xca55,	// (0x0006a2d3) rss2_list_single_pane_t3_ParamLimits

0xca55,	// (0x0006a2d3) rss2_list_single_pane_t3

0xca72,	// (0x0006a2f0) rss2_list_single_pane_t4

0x314f,	// (0x000609cd) smil_status_pane_g1

0xa348,	// (0x00067bc6) main_image2_pane_ParamLimits

0xa348,	// (0x00067bc6) main_image2_pane

0x4953,	// (0x000621d1) main_camera2_pane_g9_ParamLimits

0x4953,	// (0x000621d1) main_camera2_pane_g9

0x49a7,	// (0x00062225) main_camera2_pane_t5_ParamLimits

0x49a7,	// (0x00062225) main_camera2_pane_t5

0x49b9,	// (0x00062237) main_camera2_pane_t6_ParamLimits

0x49b9,	// (0x00062237) main_camera2_pane_t6

0x4db5,	// (0x00062633) main_image2_pane_g1_ParamLimits

0x4db5,	// (0x00062633) main_image2_pane_g1

0x403e,	// (0x000618bc) smil2_video_pane_ParamLimits

0x403e,	// (0x000618bc) smil2_video_pane

0x0c42,	// (0x0005e4c0) aid_zoom_text_primary_cp

0x9d00,	// (0x0006757e) popup_preview_fixed_window

0xab8c,	// (0x0006840a) im_reading_pane_g1

0x489d,	// (0x0006211b) cams2_bc_adjust_pane_cp_ParamLimits

0x489d,	// (0x0006211b) cams2_bc_adjust_pane_cp

0x49e4,	// (0x00062262) cams2_bc_adjust_pane_ParamLimits

0x49e4,	// (0x00062262) cams2_bc_adjust_pane

0xdb25,	// (0x0006b3a3) cams2_bc_adjust_pane_g1

0x4dc1,	// (0x0006263f) cams2_slider_pane

0x4dca,	// (0x00062648) cams2_slider_pane_g1

0x4dd3,	// (0x00062651) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0006cf16) cams2_slider_pane_g

0x10a1,	// (0x0005e91f) calc_display_pane_ParamLimits

0x10bf,	// (0x0005e93d) calc_paper_pane_ParamLimits

0x10db,	// (0x0005e959) grid_calc_pane_ParamLimits

0x33f8,	// (0x00060c76) popup_clock_digital_window_t1_ParamLimits

0xb6ce,	// (0x00068f4c) main_image_pane_t1

0x1087,	// (0x0005e905) aid_size_cell_calc_ParamLimits

0x1087,	// (0x0005e905) aid_size_cell_calc

0x450e,	// (0x00061d8c) popup_blid_sat_info2_window_ParamLimits

0x450e,	// (0x00061d8c) popup_blid_sat_info2_window

0xca88,	// (0x0006a306) aid_size_cell_blid

0xca90,	// (0x0006a30e) bg_popup_window_pane_cp07

0xcab3,	// (0x0006a331) grid_popup_blid_pane

0xcabd,	// (0x0006a33b) heading_pane_cp05_ParamLimits

0xcabd,	// (0x0006a33b) heading_pane_cp05

0xcb87,	// (0x0006a405) cell_popup_blid_pane_ParamLimits

0xcb87,	// (0x0006a405) cell_popup_blid_pane

0xcbb1,	// (0x0006a42f) cell_popup_blid_pane_g1

0xcbb9,	// (0x0006a437) cell_popup_blid_pane_t1

0x4c03,	// (0x00062481) mup2_indicator_pane_ParamLimits

0x4c03,	// (0x00062481) mup2_indicator_pane

0xb440,	// (0x00068cbe) mup2_visualizer_osc_pane

0xc969,	// (0x0006a1e7) mup2_visualizer_spec_pane_ParamLimits

0xc969,	// (0x0006a1e7) mup2_visualizer_spec_pane

0x4ded,	// (0x0006266b) mup2_spec_half_pane

0x4df6,	// (0x00062674) mup2_spec_half_pane_cp

0x4e00,	// (0x0006267e) mup2_spec_bar_pane_ParamLimits

0x4e00,	// (0x0006267e) mup2_spec_bar_pane

0xc8fe,	// (0x0006a17c) mup2_spec_bar_pane_g1

0xc908,	// (0x0006a186) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0006ce89) mup2_spec_bar_pane_g

0x4e1f,	// (0x0006269d) mup2_osc_middle_pane

0xc91a,	// (0x0006a198) mup2_visualizer_osc_pane_g1

0x9d2a,	// (0x000675a8) popup_number_entry_window_t1_ParamLimits

0x9d3d,	// (0x000675bb) popup_number_entry_window_t2_ParamLimits

0x9d4f,	// (0x000675cd) popup_number_entry_window_t3_ParamLimits

0x0edd,	// (0x0005e75b) popup_number_entry_window_t5_ParamLimits

0x0edd,	// (0x0005e75b) popup_number_entry_window_t5

0xf0cd,	// (0x0006c94b) popup_number_entry_window_t_ParamLimits

0x9d61,	// (0x000675df) text_title_cp2_ParamLimits

0x3d2b,	// (0x000615a9) aid_hotspot_pointer_text2_pane

0x3dc5,	// (0x00061643) main_viewer_pane_g9_ParamLimits

0x3dc5,	// (0x00061643) main_viewer_pane_g9

0xadc5,	// (0x00068643) cale_month_pane_t1_ParamLimits

0xadeb,	// (0x00068669) bg_cale_pane_ParamLimits

0xae03,	// (0x00068681) list_cale_pane_ParamLimits

0xae14,	// (0x00068692) listscroll_cale_day_pane_t1

0xae26,	// (0x000686a4) scroll_pane_cp09_ParamLimits

0x3a34,	// (0x000612b2) main_mup_eq_pane_t1_ParamLimits

0x3a34,	// (0x000612b2) main_mup_eq_pane_t1

0x3a50,	// (0x000612ce) main_mup_eq_pane_t2_ParamLimits

0x3a50,	// (0x000612ce) main_mup_eq_pane_t2

0x3a6c,	// (0x000612ea) main_mup_eq_pane_t3_ParamLimits

0x3a6c,	// (0x000612ea) main_mup_eq_pane_t3

0x3a86,	// (0x00061304) main_mup_eq_pane_t4_ParamLimits

0x3a86,	// (0x00061304) main_mup_eq_pane_t4

0x3aa0,	// (0x0006131e) main_mup_eq_pane_t5_ParamLimits

0x3aa0,	// (0x0006131e) main_mup_eq_pane_t5

0x3aba,	// (0x00061338) main_mup_eq_pane_t6_ParamLimits

0x3aba,	// (0x00061338) main_mup_eq_pane_t6

0x3ad0,	// (0x0006134e) main_mup_eq_pane_t7_ParamLimits

0x3ad0,	// (0x0006134e) main_mup_eq_pane_t7

0x3ae6,	// (0x00061364) main_mup_eq_pane_t8_ParamLimits

0x3ae6,	// (0x00061364) main_mup_eq_pane_t8

0x3afc,	// (0x0006137a) main_mup_eq_pane_t9_ParamLimits

0x3afc,	// (0x0006137a) main_mup_eq_pane_t9

0x3b18,	// (0x00061396) main_mup_eq_pane_t10_ParamLimits

0x3b18,	// (0x00061396) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0006ccd8) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0006ccd8) main_mup_eq_pane_t

0x3bdd,	// (0x0006145b) mup_equalizer_pane_cp5_ParamLimits

0x3bf5,	// (0x00061473) mup_equalizer_pane_cp6_ParamLimits

0x3c0d,	// (0x0006148b) mup_equalizer_pane_cp7_ParamLimits

0x9cb1,	// (0x0006752f) main_gallery_pane

0xc923,	// (0x0006a1a1) smil2_volume_pane

0xc92b,	// (0x0006a1a9) smil_status_volume_pane_g1_ParamLimits

0xc93e,	// (0x0006a1bc) smil_status_volume_pane_g2_ParamLimits

0x4708,	// (0x00061f86) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0006ce8e) smil_status_volume_pane_g_ParamLimits

0xca90,	// (0x0006a30e) bg_popup_window_pane_cp07_ParamLimits

0xca9e,	// (0x0006a31c) blid_firmament_pane

0x4e28,	// (0x000626a6) aid_size_cell_gallery_ParamLimits

0x4e28,	// (0x000626a6) aid_size_cell_gallery

0x4e36,	// (0x000626b4) grid_gallery_pane_ParamLimits

0x4e36,	// (0x000626b4) grid_gallery_pane

0x4e46,	// (0x000626c4) cell_gallery_pane_ParamLimits

0x4e46,	// (0x000626c4) cell_gallery_pane

0xcbc7,	// (0x0006a445) bg_cell_gallery_focus_pane_ParamLimits

0xcbc7,	// (0x0006a445) bg_cell_gallery_focus_pane

0xcbd9,	// (0x0006a457) cell_gallery_pane_g1_ParamLimits

0xcbd9,	// (0x0006a457) cell_gallery_pane_g1

0x4e8c,	// (0x0006270a) cell_gallery_pane_g2_ParamLimits

0x4e8c,	// (0x0006270a) cell_gallery_pane_g2

0x4e99,	// (0x00062717) cell_gallery_pane_g3_ParamLimits

0x4e99,	// (0x00062717) cell_gallery_pane_g3

0xcbe5,	// (0x0006a463) cell_gallery_pane_g4_ParamLimits

0xcbe5,	// (0x0006a463) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0006cf3c) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0006cf3c) cell_gallery_pane_g

0xcbf1,	// (0x0006a46f) bg_cell_gallery_focus_pane_g1

0xcbf9,	// (0x0006a477) bg_cell_gallery_focus_pane_g2

0xcc01,	// (0x0006a47f) bg_cell_gallery_focus_pane_g3

0xcc09,	// (0x0006a487) bg_cell_gallery_focus_pane_g4

0xcc11,	// (0x0006a48f) bg_cell_gallery_focus_pane_g5

0xcc19,	// (0x0006a497) bg_cell_gallery_focus_pane_g6

0xcc21,	// (0x0006a49f) bg_cell_gallery_focus_pane_g7

0xcc29,	// (0x0006a4a7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0006cf45) bg_cell_gallery_focus_pane_g

0xcc31,	// (0x0006a4af) aid_firma_cardinal

0xcc45,	// (0x0006a4c3) blid_firmament_pane_t1

0xcc5c,	// (0x0006a4da) blid_firmament_pane_t2

0xcc73,	// (0x0006a4f1) blid_firmament_pane_t3

0xcc8a,	// (0x0006a508) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0006cf56) blid_firmament_pane_t

0xcca1,	// (0x0006a51f) blid_sat_info_pane

0xccb1,	// (0x0006a52f) blid_sat_info_pane_g1

0xccb1,	// (0x0006a52f) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0006cf5f) blid_sat_info_pane_g

0xccbb,	// (0x0006a539) blid_sat_info_pane_t1

0xccc9,	// (0x0006a547) smil2_volume_content_pane

0xccd2,	// (0x0006a550) smil2_volume_pane_g1

0xccda,	// (0x0006a558) smil2_volume_content_pane_g1

0xcce3,	// (0x0006a561) smil2_volume_content_pane_g2

0xccec,	// (0x0006a56a) smil2_volume_content_pane_g3

0xccf5,	// (0x0006a573) smil2_volume_content_pane_g4

0xccfe,	// (0x0006a57c) smil2_volume_content_pane_g5

0xcd07,	// (0x0006a585) smil2_volume_content_pane_g6

0xcd10,	// (0x0006a58e) smil2_volume_content_pane_g7

0xcd19,	// (0x0006a597) smil2_volume_content_pane_g8

0xcd22,	// (0x0006a5a0) smil2_volume_content_pane_g9

0xcd2b,	// (0x0006a5a9) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0006cf64) smil2_volume_content_pane_g

0x1799,	// (0x0005f017) cale_week_day_heading_pane_t1_ParamLimits

0x17e1,	// (0x0005f05f) cale_week_day_heading_pane_t2_ParamLimits

0x182e,	// (0x0005f0ac) cale_week_day_heading_pane_t3_ParamLimits

0x187b,	// (0x0005f0f9) cale_week_day_heading_pane_t4_ParamLimits

0x18c8,	// (0x0005f146) cale_week_day_heading_pane_t5_ParamLimits

0x1915,	// (0x0005f193) cale_week_day_heading_pane_t6_ParamLimits

0x1962,	// (0x0005f1e0) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0006ca50) cale_week_day_heading_pane_t_ParamLimits

0xaa3c,	// (0x000682ba) bg_cale_side_pane_ParamLimits

0x19aa,	// (0x0005f228) cale_week_time_pane_t1_ParamLimits

0x19ee,	// (0x0005f26c) cale_week_time_pane_t2_ParamLimits

0x1a32,	// (0x0005f2b0) cale_week_time_pane_t3_ParamLimits

0x1a76,	// (0x0005f2f4) cale_week_time_pane_t4_ParamLimits

0x1aba,	// (0x0005f338) cale_week_time_pane_t5_ParamLimits

0x1afe,	// (0x0005f37c) cale_week_time_pane_t6_ParamLimits

0x1b42,	// (0x0005f3c0) cale_week_time_pane_t7_ParamLimits

0x1b8e,	// (0x0005f40c) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0006ca5f) cale_week_time_pane_t_ParamLimits

0x1bdc,	// (0x0005f45a) cell_cale_week_pane_g2_ParamLimits

0xaa3c,	// (0x000682ba) bg_cale_side_pane_cp01_ParamLimits

0x2f2c,	// (0x000607aa) cale_month_week_pane_t1_ParamLimits

0x2f45,	// (0x000607c3) cale_month_week_pane_t2_ParamLimits

0x2f5e,	// (0x000607dc) cale_month_week_pane_t3_ParamLimits

0x2f77,	// (0x000607f5) cale_month_week_pane_t4_ParamLimits

0x2f90,	// (0x0006080e) cale_month_week_pane_t5_ParamLimits

0x2fab,	// (0x00060829) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0006cb38) cale_month_week_pane_t_ParamLimits

0x3118,	// (0x00060996) cell_cale_month_pane_g1_ParamLimits

0x9cb1,	// (0x0006752f) main_cale_event_viewer_pane

0x9cb1,	// (0x0006752f) listscroll_cale_event_viewer_pane

0xcd34,	// (0x0006a5b2) list_cale_ev_pane

0xcd3c,	// (0x0006a5ba) scroll_pane_cp023

0x4ea6,	// (0x00062724) field_cale_ev_pane_ParamLimits

0x4ea6,	// (0x00062724) field_cale_ev_pane

0xcd48,	// (0x0006a5c6) field_cale_ev_content_pane_ParamLimits

0xcd48,	// (0x0006a5c6) field_cale_ev_content_pane

0xcd54,	// (0x0006a5d2) field_cale_ev_pane_g1_ParamLimits

0xcd54,	// (0x0006a5d2) field_cale_ev_pane_g1

0xcd60,	// (0x0006a5de) field_cale_ev_pane_g2_ParamLimits

0xcd60,	// (0x0006a5de) field_cale_ev_pane_g2

0xcd78,	// (0x0006a5f6) field_cale_ev_pane_g3_ParamLimits

0xcd78,	// (0x0006a5f6) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0006cf79) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0006cf79) field_cale_ev_pane_g

0xcd90,	// (0x0006a60e) field_cale_ev_pane_t1_ParamLimits

0xcd90,	// (0x0006a60e) field_cale_ev_pane_t1

0x4eca,	// (0x00062748) field_cale_ev_content_pane_t1_ParamLimits

0x4eca,	// (0x00062748) field_cale_ev_content_pane_t1

0x3cd1,	// (0x0006154f) bg_button_pane_cp01

0x1440,	// (0x0005ecbe) listscroll_cale_week_pane_ParamLimits

0x1452,	// (0x0005ecd0) popup_toolbar_window_cp01

0xaa08,	// (0x00068286) listscroll_cale_week_pane_t1_ParamLimits

0x1440,	// (0x0005ecbe) listscroll_cale_day_pane_ParamLimits

0x1452,	// (0x0005ecd0) popup_toolbar_window_cp02

0xae14,	// (0x00068692) listscroll_cale_day_pane_t1_ParamLimits

0x1440,	// (0x0005ecbe) main_cale_month_pane_ParamLimits

0x45f2,	// (0x00061e70) popup_toolbar_window_cp03_ParamLimits

0x45f2,	// (0x00061e70) popup_toolbar_window_cp03

0x3f4e,	// (0x000617cc) main_image_pane_g2_ParamLimits

0x3f4e,	// (0x000617cc) main_image_pane_g2

0x3f5a,	// (0x000617d8) main_image_pane_g3_ParamLimits

0x3f5a,	// (0x000617d8) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0006cd6a) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0006cd6a) main_image_pane_g

0xb6ce,	// (0x00068f4c) main_image_pane_t1_ParamLimits

0x3f66,	// (0x000617e4) main_image_pane_t2_ParamLimits

0x3f66,	// (0x000617e4) main_image_pane_t2

0x3f78,	// (0x000617f6) main_image_pane_t3_ParamLimits

0x3f78,	// (0x000617f6) main_image_pane_t3

0x3f8a,	// (0x00061808) main_image_pane_t4_ParamLimits

0x3f8a,	// (0x00061808) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0006cd71) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0006cd71) main_image_pane_t

0x3f9c,	// (0x0006181a) popup_image_details_window_cp01

0x3fa6,	// (0x00061824) popup_toobar_trans_pane_cp01_ParamLimits

0x3fa6,	// (0x00061824) popup_toobar_trans_pane_cp01

0x4563,	// (0x00061de1) popup_image_details_window_ParamLimits

0x4563,	// (0x00061de1) popup_image_details_window

0xc882,	// (0x0006a100) popup_image_focus_window

0x488f,	// (0x0006210d) camera2_autofocus_pane_ParamLimits

0x488f,	// (0x0006210d) camera2_autofocus_pane

0x9cb1,	// (0x0006752f) bg_popup_sub_pane_cp06

0xcda7,	// (0x0006a625) popup_image_focus_window_g1

0xcdaf,	// (0x0006a62d) popup_image_focus_window_g2

0xcdb7,	// (0x0006a635) popup_image_focus_window_g3

0xcdbf,	// (0x0006a63d) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0006cf80) popup_image_focus_window_g

0xcdc7,	// (0x0006a645) popup_image_focus_window_t1

0xcdd5,	// (0x0006a653) popup_image_focus_window_t2

0xcde5,	// (0x0006a663) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0006cf89) popup_image_focus_window_t

0xcdf3,	// (0x0006a671) camera2_autofocus_pane_g1

0xa348,	// (0x00067bc6) bg_tb_trans_pane_cp01

0xce01,	// (0x0006a67f) popup_image_details_window_g1

0xce14,	// (0x0006a692) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0006cf9b) popup_image_details_window_g

0xce3d,	// (0x0006a6bb) popup_image_details_window_t1

0xce4f,	// (0x0006a6cd) popup_image_details_window_t2

0xce68,	// (0x0006a6e6) popup_image_details_window_t3

0xce7c,	// (0x0006a6fa) popup_image_details_window_t4

0xce97,	// (0x0006a715) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0006cfa2) popup_image_details_window_t

0xa8af,	// (0x0006812d) bg_calc_paper_pane_ParamLimits

0x11d8,	// (0x0005ea56) grid_highlight_pane_cp013

0x11e2,	// (0x0005ea60) list_calc_pane_ParamLimits

0x11f4,	// (0x0005ea72) scroll_pane_cp024

0xa8c3,	// (0x00068141) bg_calc_display_pane_ParamLimits

0x11fc,	// (0x0005ea7a) calc_display_pane_t1_ParamLimits

0x1211,	// (0x0005ea8f) calc_display_pane_t2_ParamLimits

0x1226,	// (0x0005eaa4) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0006c9d2) calc_display_pane_t_ParamLimits

0x12fa,	// (0x0005eb78) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0006c9ef) cell_calc_pane_g

0x1303,	// (0x0005eb81) cell_calc_pane_t1

0xa922,	// (0x000681a0) grid_highlight_pane_cp02_ParamLimits

0xa938,	// (0x000681b6) toolbar_button_pane_cp01_ParamLimits

0xa938,	// (0x000681b6) toolbar_button_pane_cp01

0xb713,	// (0x00068f91) temp_image_control_pane_ParamLimits

0xb713,	// (0x00068f91) temp_image_control_pane

0xa348,	// (0x00067bc6) main_mp3_pane

0xceb1,	// (0x0006a72f) temp_image_control_pane_g1_ParamLimits

0xceb1,	// (0x0006a72f) temp_image_control_pane_g1

0xcebf,	// (0x0006a73d) temp_image_control_pane_g2_ParamLimits

0xcebf,	// (0x0006a73d) temp_image_control_pane_g2

0xced1,	// (0x0006a74f) temp_image_control_pane_g3_ParamLimits

0xced1,	// (0x0006a74f) temp_image_control_pane_g3

0x4f15,	// (0x00062793) temp_image_control_pane_g4_ParamLimits

0x4f15,	// (0x00062793) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0006cfad) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0006cfad) temp_image_control_pane_g

0xceb1,	// (0x0006a72f) main_mp3_pane_g1

0x4f26,	// (0x000627a4) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0006cfb6) main_mp3_pane_g

0xcf14,	// (0x0006a792) main_mp3_pane_t1

0xaa97,	// (0x00068315) main_camera_pane_g8_ParamLimits

0xaa97,	// (0x00068315) main_camera_pane_g8

0x1e98,	// (0x0005f716) main_video_pane_g7_ParamLimits

0x1e98,	// (0x0005f716) main_video_pane_g7

0x49d2,	// (0x00062250) main_camera2_pane_t7_ParamLimits

0x49d2,	// (0x00062250) main_camera2_pane_t7

0xabe3,	// (0x00068461) scroll_pane_cp025_ParamLimits

0xabe3,	// (0x00068461) scroll_pane_cp025

0xabf7,	// (0x00068475) scroll_pane_cp026_ParamLimits

0xabf7,	// (0x00068475) scroll_pane_cp026

0xac06,	// (0x00068484) wml_content_pane_ParamLimits

0x9cb1,	// (0x0006752f) main_touch_calib_pane

0x4fca,	// (0x00062848) main_touch_calib_pane_g1

0x4fd6,	// (0x00062854) main_touch_calib_pane_g2

0x4fe2,	// (0x00062860) main_touch_calib_pane_g3

0x4fee,	// (0x0006286c) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0006cfd4) main_touch_calib_pane_g

0x4ffa,	// (0x00062878) main_touch_calib_pane_t1

0x5011,	// (0x0006288f) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0006cfdd) main_touch_calib_pane_t

0xb367,	// (0x00068be5) mup_progress_pane_cp02

0xb386,	// (0x00068c04) navi_pane_g1

0xb402,	// (0x00068c80) navi_pane_mp_t3

0xa348,	// (0x00067bc6) main_mp3_pane_ParamLimits

0x4634,	// (0x00061eb2) navi_pane_ParamLimits

0xceb1,	// (0x0006a72f) main_mp3_pane_g1_ParamLimits

0x4f26,	// (0x000627a4) main_mp3_pane_g2_ParamLimits

0x4f32,	// (0x000627b0) main_mp3_pane_g3_ParamLimits

0x4f32,	// (0x000627b0) main_mp3_pane_g3

0x4f3e,	// (0x000627bc) main_mp3_pane_g4_ParamLimits

0x4f3e,	// (0x000627bc) main_mp3_pane_g4

0xcee1,	// (0x0006a75f) main_mp3_pane_g5_ParamLimits

0xcee1,	// (0x0006a75f) main_mp3_pane_g5

0xceef,	// (0x0006a76d) main_mp3_pane_g6_ParamLimits

0xceef,	// (0x0006a76d) main_mp3_pane_g6

0xcefc,	// (0x0006a77a) main_mp3_pane_g7_ParamLimits

0xcefc,	// (0x0006a77a) main_mp3_pane_g7

0xcf08,	// (0x0006a786) main_mp3_pane_g8_ParamLimits

0xcf08,	// (0x0006a786) main_mp3_pane_g8

0xf738,	// (0x0006cfb6) main_mp3_pane_g_ParamLimits

0x4f4a,	// (0x000627c8) main_mp3_pane_t2

0x4f5a,	// (0x000627d8) main_mp3_pane_t3

0xcf22,	// (0x0006a7a0) main_mp3_pane_t4

0xcf30,	// (0x0006a7ae) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0006cfc7) main_mp3_pane_t

0xcf3e,	// (0x0006a7bc) mup_progress_pane_cp01

0x0c42,	// (0x0005e4c0) aid_zoom_text_secondary2

0xcd34,	// (0x0006a5b2) list_cale_ev2_pane

0xcd3c,	// (0x0006a5ba) scroll_pane_cp023_ParamLimits

0xe2d7,	// (0x0006bb55) field_cale_ev2_pane_ParamLimits

0xe2d7,	// (0x0006bb55) field_cale_ev2_pane

0x506c,	// (0x000628ea) field_cale_ev2_pane_g1_ParamLimits

0x506c,	// (0x000628ea) field_cale_ev2_pane_g1

0x5078,	// (0x000628f6) field_cale_ev2_pane_g2_ParamLimits

0x5078,	// (0x000628f6) field_cale_ev2_pane_g2

0x5090,	// (0x0006290e) field_cale_ev2_pane_g3_ParamLimits

0x5090,	// (0x0006290e) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0006cfe8) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0006cfe8) field_cale_ev2_pane_g

0x50a8,	// (0x00062926) field_cale_ev2_pane_t1_ParamLimits

0x50a8,	// (0x00062926) field_cale_ev2_pane_t1

0x50bf,	// (0x0006293d) field_cale_ev2_pane_t2_ParamLimits

0x50bf,	// (0x0006293d) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0006cff1) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0006cff1) field_cale_ev2_pane_t

0x3e2d,	// (0x000616ab) main_postcard_pane_g5_ParamLimits

0x3e2d,	// (0x000616ab) main_postcard_pane_g5

0x3e3b,	// (0x000616b9) main_postcard_pane_g6_ParamLimits

0x3e3b,	// (0x000616b9) main_postcard_pane_g6

0x1cd6,	// (0x0005f554) camera2_autofocus_pane_cp_ParamLimits

0x1cd6,	// (0x0005f554) camera2_autofocus_pane_cp

0xa348,	// (0x00067bc6) main_mup3_pane

0x50f4,	// (0x00062972) main_mup3_pane_g1_ParamLimits

0x50f4,	// (0x00062972) main_mup3_pane_g1

0x5115,	// (0x00062993) main_mup3_pane_g2_ParamLimits

0x5115,	// (0x00062993) main_mup3_pane_g2

0x5191,	// (0x00062a0f) main_mup3_pane_g3_ParamLimits

0x5191,	// (0x00062a0f) main_mup3_pane_g3

0x51d6,	// (0x00062a54) main_mup3_pane_g4_ParamLimits

0x51d6,	// (0x00062a54) main_mup3_pane_g4

0x5219,	// (0x00062a97) main_mup3_pane_g5_ParamLimits

0x5219,	// (0x00062a97) main_mup3_pane_g5

0x525e,	// (0x00062adc) main_mup3_pane_g6_ParamLimits

0x525e,	// (0x00062adc) main_mup3_pane_g6

0xcf46,	// (0x0006a7c4) main_mup3_pane_g7_ParamLimits

0xcf46,	// (0x0006a7c4) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0006d001) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0006d001) main_mup3_pane_g

0x52d4,	// (0x00062b52) main_mup3_pane_t1_ParamLimits

0x52d4,	// (0x00062b52) main_mup3_pane_t1

0x533d,	// (0x00062bbb) main_mup3_pane_t2_ParamLimits

0x533d,	// (0x00062bbb) main_mup3_pane_t2

0x5406,	// (0x00062c84) main_mup3_pane_t4_ParamLimits

0x5406,	// (0x00062c84) main_mup3_pane_t4

0x545a,	// (0x00062cd8) main_mup3_pane_t5_ParamLimits

0x545a,	// (0x00062cd8) main_mup3_pane_t5

0x5508,	// (0x00062d86) main_mup3_pane_t6_ParamLimits

0x5508,	// (0x00062d86) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0006d012) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0006d012) main_mup3_pane_t

0x55b4,	// (0x00062e32) mup3_progress_pane_ParamLimits

0x55b4,	// (0x00062e32) mup3_progress_pane

0x562e,	// (0x00062eac) popup_mup3_control_window_ParamLimits

0x562e,	// (0x00062eac) popup_mup3_control_window

0xcf54,	// (0x0006a7d2) popup_mup3_text_window

0x564b,	// (0x00062ec9) mup3_progress_pane_t1

0x566a,	// (0x00062ee8) mup3_progress_pane_t2

0xcf5c,	// (0x0006a7da) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0006d01f) mup3_progress_pane_t

0xcf79,	// (0x0006a7f7) mup_progress_pane_cp03

0x9cb1,	// (0x0006752f) bg_tb_trans_pane_cp04

0x5689,	// (0x00062f07) mup3_volume_pane

0x5691,	// (0x00062f0f) popup_mup3_control_window_g1

0xdb2d,	// (0x0006b3ab) mup3_volume_pane_g1

0xdb36,	// (0x0006b3b4) mup3_volume_pane_g2

0xdb3f,	// (0x0006b3bd) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0006d026) mup3_volume_pane_g

0x9cb1,	// (0x0006752f) bg_tb_trans_pane_cp03

0xcf89,	// (0x0006a807) popup_mup3_text_window_g1

0xcf91,	// (0x0006a80f) popup_mup3_text_window_t1

0xa90b,	// (0x00068189) list_calc_item_pane_g1_ParamLimits

0xc9fe,	// (0x0006a27c) mup_volume_pane_cp_g1

0x502a,	// (0x000628a8) main_touch_calib_pane_t3

0x5040,	// (0x000628be) main_touch_calib_pane_t4

0x5056,	// (0x000628d4) main_touch_calib_pane_t5

0x9cbb,	// (0x00067539) aid_cell_size_toolbar2

0x9cc3,	// (0x00067541) aid_popup3_width_pane

0x0c3a,	// (0x0005e4b8) aid_zoom_text_msg_primary

0x1ca1,	// (0x0005f51f) vorec_t7

0xa8cf,	// (0x0006814d) bg_calc_paper_pane_g1_ParamLimits

0xa8db,	// (0x00068159) bg_calc_paper_pane_g2_ParamLimits

0xa8e7,	// (0x00068165) bg_calc_paper_pane_g3_ParamLimits

0xa8f3,	// (0x00068171) bg_calc_paper_pane_g4_ParamLimits

0xa8ff,	// (0x0006817d) bg_calc_paper_pane_g5_ParamLimits

0x1267,	// (0x0005eae5) bg_calc_paper_pane_g6_ParamLimits

0x1278,	// (0x0005eaf6) bg_calc_paper_pane_g7_ParamLimits

0x1289,	// (0x0005eb07) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0006c9d9) bg_calc_paper_pane_g_ParamLimits

0x129c,	// (0x0005eb1a) calc_bg_paper_pane_g9_ParamLimits

0x1dc7,	// (0x0005f645) image_qvga_pane_ParamLimits

0x1dc7,	// (0x0005f645) image_qvga_pane

0xa7fe,	// (0x0006807c) bg_popup_sub_pane_cp04_ParamLimits

0xb64a,	// (0x00068ec8) popup_mup_playback_window_g1_ParamLimits

0xb656,	// (0x00068ed4) popup_mup_playback_window_t1_ParamLimits

0xb66b,	// (0x00068ee9) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0006cd65) popup_mup_playback_window_t_ParamLimits

0x4b01,	// (0x0006237f) main_mup2_pane_g3_ParamLimits

0x4b01,	// (0x0006237f) main_mup2_pane_g3

0x2172,	// (0x0005f9f0) popup_toolbar_window_cp04

0xba66,	// (0x000692e4) popup_call2_audio_second_window_g3_ParamLimits

0xba66,	// (0x000692e4) popup_call2_audio_second_window_g3

0xbe70,	// (0x000696ee) popup_call2_audio_first_window_g4_ParamLimits

0xbe70,	// (0x000696ee) popup_call2_audio_first_window_g4

0xc4ef,	// (0x00069d6d) popup_call2_audio_in_window_g4_ParamLimits

0xc4ef,	// (0x00069d6d) popup_call2_audio_in_window_g4

0x3f41,	// (0x000617bf) aid_area_sk_bg_cut_ParamLimits

0x3f41,	// (0x000617bf) aid_area_sk_bg_cut

0xb680,	// (0x00068efe) aid_area_sk_bg_cut_2_ParamLimits

0xb680,	// (0x00068efe) aid_area_sk_bg_cut_2

0x4e7c,	// (0x000626fa) aid_placing_details_win

0x4e84,	// (0x00062702) aid_placing_details_win_2

0xcdf3,	// (0x0006a671) camera2_autofocus_pane_g1_ParamLimits

0x0e1c,	// (0x0005e69a) popup_fixed_preview_cale_window_ParamLimits

0x0e1c,	// (0x0005e69a) popup_fixed_preview_cale_window

0xb451,	// (0x00068ccf) navi_slider_pane_g3

0xb45a,	// (0x00068cd8) navi_slider_pane_g4

0xb463,	// (0x00068ce1) navi_slider_pane_g5

0xb451,	// (0x00068ccf) navi_slider_pane_g6

0x37a2,	// (0x00061020) navi_slider_pane_g7

0xb578,	// (0x00068df6) mup_scale_pane_g3

0xb581,	// (0x00068dff) mup_scale_pane_g4

0xb58a,	// (0x00068e08) mup_scale_pane_g5

0x3c25,	// (0x000614a3) mup_scale_pane_g6

0x3c2e,	// (0x000614ac) mup_scale_pane_g7

0xb451,	// (0x00068ccf) cams2_slider_pane_g3

0xca80,	// (0x0006a2fe) cams2_slider_pane_g4

0x4ddc,	// (0x0006265a) cams2_slider_pane_g5

0xb451,	// (0x00068ccf) cams2_slider_pane_g6

0x4de4,	// (0x00062662) cams2_slider_pane_g7

0xccb1,	// (0x0006a52f) camera2_autofocus_pane_cp_g1

0xc854,	// (0x0006a0d2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc854,	// (0x0006a0d2) bg_popup_preview_window_pane_cp02

0xcf9f,	// (0x0006a81d) list_fp_cale_pane_ParamLimits

0xcf9f,	// (0x0006a81d) list_fp_cale_pane

0xcfab,	// (0x0006a829) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfab,	// (0x0006a829) popup_fixed_preview_cale_window_t1

0x569a,	// (0x00062f18) popup_fixed_preview_cale_window_t2_ParamLimits

0x569a,	// (0x00062f18) popup_fixed_preview_cale_window_t2

0x56af,	// (0x00062f2d) popup_fixed_preview_cale_window_t3_ParamLimits

0x56af,	// (0x00062f2d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0006d02d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0006d02d) popup_fixed_preview_cale_window_t

0x56c4,	// (0x00062f42) list_single_fp_cale_pane_ParamLimits

0x56c4,	// (0x00062f42) list_single_fp_cale_pane

0xcfc9,	// (0x0006a847) list_single_fp_cale_pane_g1_ParamLimits

0xcfc9,	// (0x0006a847) list_single_fp_cale_pane_g1

0xcfd5,	// (0x0006a853) list_single_fp_cale_pane_g2_ParamLimits

0xcfd5,	// (0x0006a853) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0006d034) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0006d034) list_single_fp_cale_pane_g

0xcfee,	// (0x0006a86c) list_single_fp_cale_pane_t1_ParamLimits

0xcfee,	// (0x0006a86c) list_single_fp_cale_pane_t1

0xd000,	// (0x0006a87e) list_single_fp_cale_pane_t2_ParamLimits

0xd000,	// (0x0006a87e) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0006d03b) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0006d03b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9cb1,	// (0x0006752f) main_dialer_pane

0x56d4,	// (0x00062f52) aid_cell_size_keypad

0x56de,	// (0x00062f5c) dialer_ne_pane

0x56e8,	// (0x00062f66) grid_dialer_command_1_pane

0x56f0,	// (0x00062f6e) grid_dialer_command_2_pane

0x56f8,	// (0x00062f76) grid_dialer_keypad_pane

0x570c,	// (0x00062f8a) bg_popup_call_pane_cp06_ParamLimits

0x570c,	// (0x00062f8a) bg_popup_call_pane_cp06

0x5718,	// (0x00062f96) dialer_ne_clear_pane_ParamLimits

0x5718,	// (0x00062f96) dialer_ne_clear_pane

0xd033,	// (0x0006a8b1) dialer_ne_pane_g1

0xd03b,	// (0x0006a8b9) dialer_ne_pane_t1_ParamLimits

0xd03b,	// (0x0006a8b9) dialer_ne_pane_t1

0x5724,	// (0x00062fa2) dialer_ne_pane_t2_ParamLimits

0x5724,	// (0x00062fa2) dialer_ne_pane_t2

0x5741,	// (0x00062fbf) dialer_ne_pane_t3_ParamLimits

0x5741,	// (0x00062fbf) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0006d040) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0006d040) dialer_ne_pane_t

0x5765,	// (0x00062fe3) dialer_ne_pane_t3_copy1_ParamLimits

0x5765,	// (0x00062fe3) dialer_ne_pane_t3_copy1

0x5789,	// (0x00063007) cell_dialer_keypad_pane_ParamLimits

0x5789,	// (0x00063007) cell_dialer_keypad_pane

0x57a0,	// (0x0006301e) cell_dialer_command_1_pane_ParamLimits

0x57a0,	// (0x0006301e) cell_dialer_command_1_pane

0x57b6,	// (0x00063034) cell_dialer_command_2_pane_ParamLimits

0x57b6,	// (0x00063034) cell_dialer_command_2_pane

0xd04d,	// (0x0006a8cb) bg_button_pane_cp02_ParamLimits

0xd04d,	// (0x0006a8cb) bg_button_pane_cp02

0x57c5,	// (0x00063043) cell_dialer_keypad_pane_g1_ParamLimits

0x57c5,	// (0x00063043) cell_dialer_keypad_pane_g1

0xd04d,	// (0x0006a8cb) bg_button_pane_cp03_ParamLimits

0xd04d,	// (0x0006a8cb) bg_button_pane_cp03

0x57da,	// (0x00063058) cell_dialer_command_1_pane_g1_ParamLimits

0x57da,	// (0x00063058) cell_dialer_command_1_pane_g1

0xd059,	// (0x0006a8d7) bg_button_pane_cp04

0x57ee,	// (0x0006306c) cell_dialer_command_2_pane_g1

0xb440,	// (0x00068cbe) bg_button_pane_cp06

0xd061,	// (0x0006a8df) dialer_ne_clear_pane_g1

0x36dd,	// (0x00060f5b) navi_pane_g2

0x370b,	// (0x00060f89) navi_pane_g3

0x0002,

0xf3ea,	// (0x0006cc68) navi_pane_g

0x3736,	// (0x00060fb4) navi_pane_mv_g2

0x375d,	// (0x00060fdb) navi_pane_mv_g5

0x3765,	// (0x00060fe3) navi_pane_mv_t1

0xa8c3,	// (0x00068141) main_clock2_pane

0x582c,	// (0x000630aa) main_clock2_list_pane_ParamLimits

0x582c,	// (0x000630aa) main_clock2_list_pane

0x5856,	// (0x000630d4) main_clock2_pane_t1_ParamLimits

0x5856,	// (0x000630d4) main_clock2_pane_t1

0x5878,	// (0x000630f6) main_clock2_pane_t2_ParamLimits

0x5878,	// (0x000630f6) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0006d047) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0006d047) main_clock2_pane_t

0x58d5,	// (0x00063153) popup_clock_analogue_window_cp03_ParamLimits

0x58d5,	// (0x00063153) popup_clock_analogue_window_cp03

0x58f5,	// (0x00063173) popup_clock_digital_window_cp02_ParamLimits

0x58f5,	// (0x00063173) popup_clock_digital_window_cp02

0x5966,	// (0x000631e4) main_clock2_list_single_pane_ParamLimits

0x5966,	// (0x000631e4) main_clock2_list_single_pane

0xb440,	// (0x00068cbe) list_highlight_pane_cp05

0xd07d,	// (0x0006a8fb) main_clock2_list_single_pane_t1

0x2172,	// (0x0005f9f0) popup_toolbar_window_cp04_ParamLimits

0x4ee5,	// (0x00062763) camera2_autofocus_pane_g2_ParamLimits

0x4ee5,	// (0x00062763) camera2_autofocus_pane_g2

0x4ef1,	// (0x0006276f) camera2_autofocus_pane_g3_ParamLimits

0x4ef1,	// (0x0006276f) camera2_autofocus_pane_g3

0x4efd,	// (0x0006277b) camera2_autofocus_pane_g4_ParamLimits

0x4efd,	// (0x0006277b) camera2_autofocus_pane_g4

0x4f09,	// (0x00062787) camera2_autofocus_pane_g5_ParamLimits

0x4f09,	// (0x00062787) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0006cf90) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0006cf90) camera2_autofocus_pane_g

0x50d4,	// (0x00062952) camera2_autofocus_pane_cp_g2

0x50dc,	// (0x0006295a) camera2_autofocus_pane_cp_g3

0x50e4,	// (0x00062962) camera2_autofocus_pane_cp_g4

0x50ec,	// (0x0006296a) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0006cff6) camera2_autofocus_pane_cp_g

0x5704,	// (0x00062f82) popup_dialer_spcha_window

0x9cb1,	// (0x0006752f) bg_popup_sub_pane_cp07

0xd08b,	// (0x0006a909) list_spcha_pane

0xd093,	// (0x0006a911) list_single_spcha_pane_ParamLimits

0xd093,	// (0x0006a911) list_single_spcha_pane

0x9cb1,	// (0x0006752f) list_highlight_pane_cp06

0xd0a4,	// (0x0006a922) list_single_spcha_pane_t1

0xc299,	// (0x00069b17) popup_call2_audio_out_window_g4_ParamLimits

0xc299,	// (0x00069b17) popup_call2_audio_out_window_g4

0x9cb1,	// (0x0006752f) main_imed2_pane

0xc88c,	// (0x0006a10a) popup_imed_adjust2_window

0x4571,	// (0x00061def) popup_imed_trans_window_ParamLimits

0x4571,	// (0x00061def) popup_imed_trans_window

0xcae9,	// (0x0006a367) popup_blid_sat_info2_window_t1

0xcaf7,	// (0x0006a375) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0006cf25) popup_blid_sat_info2_window_t

0x5a10,	// (0x0006328e) aid_size_cell_colour_35

0x5a2a,	// (0x000632a8) aid_size_cell_colour_112

0x5a41,	// (0x000632bf) aid_size_cell_effect

0xa348,	// (0x00067bc6) bg_tb_trans_pane_cp02

0xb3cc,	// (0x00068c4a) heading_imed_pane

0x5a5b,	// (0x000632d9) listscroll_imed_pane

0xd0b2,	// (0x0006a930) heading_imed_pane_g1

0xd0ba,	// (0x0006a938) heading_imed_pane_t1

0xd0c8,	// (0x0006a946) grid_imed_colour_35_pane_ParamLimits

0xd0c8,	// (0x0006a946) grid_imed_colour_35_pane

0x5a67,	// (0x000632e5) grid_imed_effect_pane

0xd0e4,	// (0x0006a962) list_imed_aspect_pane

0x5a77,	// (0x000632f5) scroll_pane_cp027_ParamLimits

0x5a77,	// (0x000632f5) scroll_pane_cp027

0x5a83,	// (0x00063301) cell_imed_effect_pane_ParamLimits

0x5a83,	// (0x00063301) cell_imed_effect_pane

0xd0ec,	// (0x0006a96a) cell_imed_colour_pane_ParamLimits

0xd0ec,	// (0x0006a96a) cell_imed_colour_pane

0xd136,	// (0x0006a9b4) cell_imed_colour_pane_g1_ParamLimits

0xd136,	// (0x0006a9b4) cell_imed_colour_pane_g1

0xd147,	// (0x0006a9c5) hgihlgiht_grid_pane_cp016_ParamLimits

0xd147,	// (0x0006a9c5) hgihlgiht_grid_pane_cp016

0x5a9f,	// (0x0006331d) cell_imed_effect_pane_g1

0x5aa7,	// (0x00063325) grid_highlight_pane_cp017

0xd158,	// (0x0006a9d6) list_imed_single_pane_ParamLimits

0xd158,	// (0x0006a9d6) list_imed_single_pane

0x9cb1,	// (0x0006752f) list_highlight_pane_cp07

0xd16c,	// (0x0006a9ea) list_imed_aspect_pane_comp1_t1

0xc860,	// (0x0006a0de) bg_tb_trans_pane_cp05

0xd18e,	// (0x0006aa0c) popup_imed_adjust2_window_g1

0xd1b5,	// (0x0006aa33) popup_imed_adjust2_window_t1

0xd1cd,	// (0x0006aa4b) slider_imed_adjust_pane

0xd1e1,	// (0x0006aa5f) slider_imed_adjust_pane_g1

0xd1f1,	// (0x0006aa6f) slider_imed_adjust_pane_g2

0xd201,	// (0x0006aa7f) slider_imed_adjust_pane_g3

0xd212,	// (0x0006aa90) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0006d064) slider_imed_adjust_pane_g

0x5ab0,	// (0x0006332e) aid_size_cell_clipart2

0x5abc,	// (0x0006333a) grid_imed_clipart_pane

0xd223,	// (0x0006aaa1) scroll_pane_cp031

0x5ac6,	// (0x00063344) cell_imed_clipart_pane_ParamLimits

0x5ac6,	// (0x00063344) cell_imed_clipart_pane

0x5ae4,	// (0x00063362) cell_imed_clipart_pane_g1

0x9cb1,	// (0x0006752f) grid_highlight_pane_cp014

0x5838,	// (0x000630b6) main_clock2_pane_g1_ParamLimits

0x5838,	// (0x000630b6) main_clock2_pane_g1

0x5911,	// (0x0006318f) aid_call2_pane_cp10

0x5923,	// (0x000631a1) aid_call_pane_cp10

0xb35b,	// (0x00068bd9) popup_clock_analogue_window_cp10_g1

0xb35b,	// (0x00068bd9) popup_clock_analogue_window_cp10_g2

0x5935,	// (0x000631b3) popup_clock_analogue_window_cp10_g3

0x5935,	// (0x000631b3) popup_clock_analogue_window_cp10_g4

0xb35b,	// (0x00068bd9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0006d052) popup_clock_analogue_window_cp10_g

0x5947,	// (0x000631c5) popup_clock_analogue_window_cp10_t1

0x5978,	// (0x000631f6) clock_digital_number_pane_cp10_ParamLimits

0x5978,	// (0x000631f6) clock_digital_number_pane_cp10

0x5990,	// (0x0006320e) clock_digital_number_pane_cp11_ParamLimits

0x5990,	// (0x0006320e) clock_digital_number_pane_cp11

0x59a8,	// (0x00063226) clock_digital_number_pane_cp12_ParamLimits

0x59a8,	// (0x00063226) clock_digital_number_pane_cp12

0x59c0,	// (0x0006323e) clock_digital_number_pane_cp13_ParamLimits

0x59c0,	// (0x0006323e) clock_digital_number_pane_cp13

0x59d8,	// (0x00063256) clock_digital_separator_pane_cp10_ParamLimits

0x59d8,	// (0x00063256) clock_digital_separator_pane_cp10

0x59f0,	// (0x0006326e) popup_clock_digital_window_cp02_t1_ParamLimits

0x59f0,	// (0x0006326e) popup_clock_digital_window_cp02_t1

0xa7f6,	// (0x00068074) clock_digital_number_pane_cp10_g1

0xa7f6,	// (0x00068074) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0006d06d) clock_digital_number_pane_cp10_g

0xa7f6,	// (0x00068074) clock_digital_separator_pane_cp10_g1

0xa7f6,	// (0x00068074) clock_digital_separator_pane_g2_cp10

0xb410,	// (0x00068c8e) navi_pane_vded_g4

0xb419,	// (0x00068c97) navi_pane_vded_g5

0xb422,	// (0x00068ca0) navi_pane_vded_t1

0x9cb1,	// (0x0006752f) main_vded_pane

0x5aed,	// (0x0006336b) main_vded_pane_g1

0x5af9,	// (0x00063377) main_vded_pane_g2

0x5b03,	// (0x00063381) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0006d072) main_vded_pane_g

0x5b0d,	// (0x0006338b) main_vded_pane_t1

0x5b1b,	// (0x00063399) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0006d079) main_vded_pane_t

0x5b29,	// (0x000633a7) vded_slider_pane

0x5b33,	// (0x000633b1) vded_video_pane

0xd22b,	// (0x0006aaa9) vded_video_pane_g1

0x5b3f,	// (0x000633bd) vded_video_pane_g2

0xccb1,	// (0x0006a52f) vded_video_pane_g3

0x0002,

0xf800,	// (0x0006d07e) vded_video_pane_g

0xd235,	// (0x0006aab3) vded_slider_pane_g1

0xc9fe,	// (0x0006a27c) vded_slider_pane_g2

0xd23e,	// (0x0006aabc) vded_slider_pane_g3

0xd247,	// (0x0006aac5) vded_slider_pane_g4

0xd250,	// (0x0006aace) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0006d085) vded_slider_pane_g

0x5622,	// (0x00062ea0) mup3_rocker_pane_ParamLimits

0x5622,	// (0x00062ea0) mup3_rocker_pane

0x5b48,	// (0x000633c6) mup3_control_keys_pane_g1

0x5b50,	// (0x000633ce) mup3_control_keys_pane_g2

0x5b58,	// (0x000633d6) mup3_control_keys_pane_g3

0x5b60,	// (0x000633de) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0006d090) mup3_control_keys_pane_g

0x0e3a,	// (0x0005e6b8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0e3a,	// (0x0005e6b8) popup_toolbar2_fixed_window_cp01

0x563e,	// (0x00062ebc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x563e,	// (0x00062ebc) popup_toolbar2_fixed_window_cp02

0xbbd8,	// (0x00069456) popup_call2_audio_second_window_t4_ParamLimits

0xbbd8,	// (0x00069456) popup_call2_audio_second_window_t4

0xc106,	// (0x00069984) popup_call2_audio_first_window_t6_ParamLimits

0xc106,	// (0x00069984) popup_call2_audio_first_window_t6

0xc39c,	// (0x00069c1a) popup_call2_audio_out_window_t6_ParamLimits

0xc39c,	// (0x00069c1a) popup_call2_audio_out_window_t6

0x9cb1,	// (0x0006752f) main_vitu_pane

0x5b70,	// (0x000633ee) aid_size_cell_itu_ParamLimits

0x5b70,	// (0x000633ee) aid_size_cell_itu

0x0e6c,	// (0x0005e6ea) bg_popup_window_pane_cp08_ParamLimits

0x0e6c,	// (0x0005e6ea) bg_popup_window_pane_cp08

0x5b7e,	// (0x000633fc) field_vitu_entry_pane_ParamLimits

0x5b7e,	// (0x000633fc) field_vitu_entry_pane

0x5b8d,	// (0x0006340b) grid_vitu_function_pane_ParamLimits

0x5b8d,	// (0x0006340b) grid_vitu_function_pane

0x5b9d,	// (0x0006341b) grid_vitu_itu_pane_ParamLimits

0x5b9d,	// (0x0006341b) grid_vitu_itu_pane

0x5bad,	// (0x0006342b) cell_vitu_itu_pane_ParamLimits

0x5bad,	// (0x0006342b) cell_vitu_itu_pane

0x5bc4,	// (0x00063442) cell_vitu_function_pane_ParamLimits

0x5bc4,	// (0x00063442) cell_vitu_function_pane

0xa348,	// (0x00067bc6) bg_popup_sub_pane_cp08_ParamLimits

0xa348,	// (0x00067bc6) bg_popup_sub_pane_cp08

0x5bd8,	// (0x00063456) field_vitu_entry_pane_t1_ParamLimits

0x5bd8,	// (0x00063456) field_vitu_entry_pane_t1

0xd271,	// (0x0006aaef) field_vitu_entry_pane_t2_ParamLimits

0xd271,	// (0x0006aaef) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0006d09e) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0006d09e) field_vitu_entry_pane_t

0xd28e,	// (0x0006ab0c) bg_button_pane_cp05_ParamLimits

0xd28e,	// (0x0006ab0c) bg_button_pane_cp05

0x5bf2,	// (0x00063470) cell_vitu_itu_pane_g1

0x5c0a,	// (0x00063488) cell_vitu_itu_pane_t1_ParamLimits

0x5c0a,	// (0x00063488) cell_vitu_itu_pane_t1

0x5c1c,	// (0x0006349a) cell_vitu_itu_pane_t2_ParamLimits

0x5c1c,	// (0x0006349a) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0006d0a3) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0006d0a3) cell_vitu_itu_pane_t

0xd29c,	// (0x0006ab1a) bg_button_pane_cp07

0x5c5f,	// (0x000634dd) cell_vitu_function_pane_g1

0x10ff,	// (0x0005e97d) main_calc_pane_g1

0x0c2e,	// (0x0005e4ac) aid_visual_content_pane

0x9cb1,	// (0x0006752f) main_vradio_pane

0x5c68,	// (0x000634e6) main_vradio_pane_g1_ParamLimits

0x5c68,	// (0x000634e6) main_vradio_pane_g1

0xd2a6,	// (0x0006ab24) main_vradio_pane_g2_ParamLimits

0xd2a6,	// (0x0006ab24) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0006d0aa) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0006d0aa) main_vradio_pane_g

0x5c76,	// (0x000634f4) main_vradio_pane_t1_ParamLimits

0x5c76,	// (0x000634f4) main_vradio_pane_t1

0x5c88,	// (0x00063506) main_vradio_pane_t2_ParamLimits

0x5c88,	// (0x00063506) main_vradio_pane_t2

0xd2b3,	// (0x0006ab31) main_vradio_pane_t3_ParamLimits

0xd2b3,	// (0x0006ab31) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0006d0af) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0006d0af) main_vradio_pane_t

0x5c9a,	// (0x00063518) vradio_rocker_control_pane_ParamLimits

0x5c9a,	// (0x00063518) vradio_rocker_control_pane

0x5ca6,	// (0x00063524) vradio_station_info_pane_ParamLimits

0x5ca6,	// (0x00063524) vradio_station_info_pane

0xd2c7,	// (0x0006ab45) vradio_frequency_info_pane_ParamLimits

0xd2c7,	// (0x0006ab45) vradio_frequency_info_pane

0xccb1,	// (0x0006a52f) vradio_station_info_pane_g1

0xd2d6,	// (0x0006ab54) vradio_station_info_pane_t1_ParamLimits

0xd2d6,	// (0x0006ab54) vradio_station_info_pane_t1

0xd2f8,	// (0x0006ab76) vradio_station_info_pane_t2_ParamLimits

0xd2f8,	// (0x0006ab76) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0006d0b6) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0006d0b6) vradio_station_info_pane_t

0xd30a,	// (0x0006ab88) vradio_tuning_pane

0xd312,	// (0x0006ab90) vradio_rocker_control_pane_g1

0xd31a,	// (0x0006ab98) vradio_rocker_control_pane_g2

0xd322,	// (0x0006aba0) vradio_rocker_control_pane_g3

0xd32a,	// (0x0006aba8) vradio_rocker_control_pane_g4

0xd332,	// (0x0006abb0) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0006d0bb) vradio_rocker_control_pane_g

0x5cb3,	// (0x00063531) vradio_frequency_info_pane_g1

0xd33a,	// (0x0006abb8) vradio_frequency_info_pane_t1_ParamLimits

0xd33a,	// (0x0006abb8) vradio_frequency_info_pane_t1

0x5cbd,	// (0x0006353b) vradio_tuning_pane_g1

0x5cc8,	// (0x00063546) vradio_tuning_pane_t1

0x9cd7,	// (0x00067555) area_side_right_pane_ParamLimits

0x9cd7,	// (0x00067555) area_side_right_pane

0xc81b,	// (0x0006a099) status_small_pane_g1

0xc823,	// (0x0006a0a1) status_small_pane_g2

0xc82c,	// (0x0006a0aa) status_small_pane_g3

0xc835,	// (0x0006a0b3) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0006ce7b) status_small_pane_g

0xc83e,	// (0x0006a0bc) status_small_pane_t1

0x9cb1,	// (0x0006752f) main_video3_pane

0xd34e,	// (0x0006abcc) cams_zoom_vslider_pane

0xd356,	// (0x0006abd4) image3_wide_pane_ParamLimits

0xd356,	// (0x0006abd4) image3_wide_pane

0xd370,	// (0x0006abee) image3_wide_small_pane

0xd37c,	// (0x0006abfa) main_video3_pane_g1_ParamLimits

0xd37c,	// (0x0006abfa) main_video3_pane_g1

0xd398,	// (0x0006ac16) main_video3_pane_g2_ParamLimits

0xd398,	// (0x0006ac16) main_video3_pane_g2

0x0001,

0xf848,	// (0x0006d0c6) main_video3_pane_g_ParamLimits

0xf848,	// (0x0006d0c6) main_video3_pane_g

0xd3b4,	// (0x0006ac32) main_video3_pane_t1_ParamLimits

0xd3b4,	// (0x0006ac32) main_video3_pane_t1

0xd3df,	// (0x0006ac5d) main_video3_pane_t2_ParamLimits

0xd3df,	// (0x0006ac5d) main_video3_pane_t2

0xd40c,	// (0x0006ac8a) main_video3_pane_t3_ParamLimits

0xd40c,	// (0x0006ac8a) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0006d0cb) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0006d0cb) main_video3_pane_t

0xd439,	// (0x0006acb7) cams_zoom_vslider_pane_g1

0xd442,	// (0x0006acc0) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0006d0d2) cams_zoom_vslider_pane_g

0xd44a,	// (0x0006acc8) small_slider_vertical_pane

0xccb1,	// (0x0006a52f) small_slider_vertical_pane_g1

0xccb1,	// (0x0006a52f) small_slider_vertical_pane_g2

0xd452,	// (0x0006acd0) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0006d0d7) small_slider_vertical_pane_g

0x9cb1,	// (0x0006752f) main_hwr_training_pane

0xd45b,	// (0x0006acd9) hwr_training_instruct_pane_ParamLimits

0xd45b,	// (0x0006acd9) hwr_training_instruct_pane

0x5cd7,	// (0x00063555) hwr_training_navi_pane_ParamLimits

0x5cd7,	// (0x00063555) hwr_training_navi_pane

0x5cf1,	// (0x0006356f) hwr_training_write_pane_ParamLimits

0x5cf1,	// (0x0006356f) hwr_training_write_pane

0x9cb1,	// (0x0006752f) bg_frame_shadow_pane

0xd492,	// (0x0006ad10) hwr_training_write_pane_g1

0xd49a,	// (0x0006ad18) hwr_training_write_pane_g2

0xd4a2,	// (0x0006ad20) hwr_training_write_pane_g3

0xd4aa,	// (0x0006ad28) hwr_training_write_pane_g4

0xd4b2,	// (0x0006ad30) hwr_training_write_pane_g5

0xd4ba,	// (0x0006ad38) hwr_training_write_pane_g6

0xd4c2,	// (0x0006ad40) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0006d0de) hwr_training_write_pane_g

0x5d29,	// (0x000635a7) hwr_training_navi_pane_g1_ParamLimits

0x5d29,	// (0x000635a7) hwr_training_navi_pane_g1

0x5d3b,	// (0x000635b9) hwr_training_navi_pane_g2_ParamLimits

0x5d3b,	// (0x000635b9) hwr_training_navi_pane_g2

0x5d4d,	// (0x000635cb) hwr_training_navi_pane_g3_ParamLimits

0x5d4d,	// (0x000635cb) hwr_training_navi_pane_g3

0x5d5d,	// (0x000635db) hwr_training_navi_pane_g4_ParamLimits

0x5d5d,	// (0x000635db) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0006d0ed) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0006d0ed) hwr_training_navi_pane_g

0x5d77,	// (0x000635f5) hwr_training_navi_pane_t1

0x5d85,	// (0x00063603) list_single_hwr_training_instruct_pane_ParamLimits

0x5d85,	// (0x00063603) list_single_hwr_training_instruct_pane

0xd4ca,	// (0x0006ad48) list_single_hwr_training_instruct_pane_t1

0xcbf1,	// (0x0006a46f) bg_frame_shadow_pane_g1

0xd4d9,	// (0x0006ad57) bg_frame_shadow_pane_g2

0xd4e1,	// (0x0006ad5f) bg_frame_shadow_pane_g3

0xd4e9,	// (0x0006ad67) bg_frame_shadow_pane_g4

0xd4f1,	// (0x0006ad6f) bg_frame_shadow_pane_g5

0xd4f9,	// (0x0006ad77) bg_frame_shadow_pane_g6

0xd501,	// (0x0006ad7f) bg_frame_shadow_pane_g7

0xa98e,	// (0x0006820c) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0006d0f8) bg_frame_shadow_pane_g

0x9cb1,	// (0x0006752f) main_video_tele_dialer_pane

0x5d9e,	// (0x0006361c) aid_size_cell_video_keypad_ParamLimits

0x5d9e,	// (0x0006361c) aid_size_cell_video_keypad

0x5dae,	// (0x0006362c) grid_video_dialer_keypad_pane_ParamLimits

0x5dae,	// (0x0006362c) grid_video_dialer_keypad_pane

0x5de0,	// (0x0006365e) video_down_pane_cp_ParamLimits

0x5de0,	// (0x0006365e) video_down_pane_cp

0x5e08,	// (0x00063686) cell_video_dialer_keypad_pane_ParamLimits

0x5e08,	// (0x00063686) cell_video_dialer_keypad_pane

0xd509,	// (0x0006ad87) bg_button_pane_cp08_ParamLimits

0xd509,	// (0x0006ad87) bg_button_pane_cp08

0x5e1f,	// (0x0006369d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e1f,	// (0x0006369d) cell_video_dialer_keypad_pane_g1

0x5616,	// (0x00062e94) mup3_rocker2_pane_ParamLimits

0x5616,	// (0x00062e94) mup3_rocker2_pane

0xccb1,	// (0x0006a52f) mup3_rocker2_pane_g1

0x44f3,	// (0x00061d71) main_dialer2_pane

0x9cb1,	// (0x0006752f) main_mp4_pane

0x5e5e,	// (0x000636dc) main_mp4_pane_g1_ParamLimits

0x5e5e,	// (0x000636dc) main_mp4_pane_g1

0x5e6c,	// (0x000636ea) main_mp4_pane_g2_ParamLimits

0x5e6c,	// (0x000636ea) main_mp4_pane_g2

0x5e7a,	// (0x000636f8) main_mp4_pane_g3_ParamLimits

0x5e7a,	// (0x000636f8) main_mp4_pane_g3

0x5ecd,	// (0x0006374b) main_mp4_pane_g4_ParamLimits

0x5ecd,	// (0x0006374b) main_mp4_pane_g4

0x5ef5,	// (0x00063773) main_mp4_pane_g5_ParamLimits

0x5ef5,	// (0x00063773) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0006d118) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0006d118) main_mp4_pane_g

0x5f45,	// (0x000637c3) main_mp4_pane_t1_ParamLimits

0x5f45,	// (0x000637c3) main_mp4_pane_t1

0x5fa1,	// (0x0006381f) main_mp4_pane_t2_ParamLimits

0x5fa1,	// (0x0006381f) main_mp4_pane_t2

0xd515,	// (0x0006ad93) main_mp4_pane_t3_ParamLimits

0xd515,	// (0x0006ad93) main_mp4_pane_t3

0x5ff3,	// (0x00063871) main_mp4_pane_t4_ParamLimits

0x5ff3,	// (0x00063871) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0006d125) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0006d125) main_mp4_pane_t

0x6033,	// (0x000638b1) mp4_progress_pane_ParamLimits

0x6033,	// (0x000638b1) mp4_progress_pane

0x607d,	// (0x000638fb) mp4_rocker_pane_ParamLimits

0x607d,	// (0x000638fb) mp4_rocker_pane

0xd53d,	// (0x0006adbb) mp4_progress_pane_t1

0xd556,	// (0x0006add4) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0006d12e) mp4_progress_pane_t

0xd56f,	// (0x0006aded) mup_progress_pane_cp04

0xdb48,	// (0x0006b3c6) mp4_rocker_pane_g1

0x609f,	// (0x0006391d) aid_cell_size_keypad2_ParamLimits

0x609f,	// (0x0006391d) aid_cell_size_keypad2

0x60af,	// (0x0006392d) dialer2_ne_pane_ParamLimits

0x60af,	// (0x0006392d) dialer2_ne_pane

0x60bb,	// (0x00063939) grid_dialer2_keypad_pane_ParamLimits

0x60bb,	// (0x00063939) grid_dialer2_keypad_pane

0xdb52,	// (0x0006b3d0) bg_popup_call_pane_cp07_ParamLimits

0xdb52,	// (0x0006b3d0) bg_popup_call_pane_cp07

0x60c9,	// (0x00063947) dialer2_ne_pane_t1_ParamLimits

0x60c9,	// (0x00063947) dialer2_ne_pane_t1

0x60ee,	// (0x0006396c) cell_dialer2_keypad_pane_ParamLimits

0x60ee,	// (0x0006396c) cell_dialer2_keypad_pane

0xd58d,	// (0x0006ae0b) bg_button_pane_pane_cp04_ParamLimits

0xd58d,	// (0x0006ae0b) bg_button_pane_pane_cp04

0x6105,	// (0x00063983) cell_dialer2_keypad_pane_g1_ParamLimits

0x6105,	// (0x00063983) cell_dialer2_keypad_pane_g1

0x2044,	// (0x0005f8c2) aid_placing_vt_set_content_ParamLimits

0x2044,	// (0x0005f8c2) aid_placing_vt_set_content

0x206c,	// (0x0005f8ea) aid_placing_vt_set_title_ParamLimits

0x206c,	// (0x0005f8ea) aid_placing_vt_set_title

0x9cb1,	// (0x0006752f) main_image3_pane

0x619f,	// (0x00063a1d) area_side_right_pane_cp01_ParamLimits

0x619f,	// (0x00063a1d) area_side_right_pane_cp01

0x61ce,	// (0x00063a4c) main_image3_pane_g1_ParamLimits

0x61ce,	// (0x00063a4c) main_image3_pane_g1

0x61dc,	// (0x00063a5a) main_image3_pane_g2_ParamLimits

0x61dc,	// (0x00063a5a) main_image3_pane_g2

0x61f5,	// (0x00063a73) main_image3_pane_g3_ParamLimits

0x61f5,	// (0x00063a73) main_image3_pane_g3

0x620e,	// (0x00063a8c) main_image3_pane_g4_ParamLimits

0x620e,	// (0x00063a8c) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0006d13d) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0006d13d) main_image3_pane_g

0x6227,	// (0x00063aa5) main_image3_pane_t1_ParamLimits

0x6227,	// (0x00063aa5) main_image3_pane_t1

0x624c,	// (0x00063aca) main_image3_pane_t2_ParamLimits

0x624c,	// (0x00063aca) main_image3_pane_t2

0x626b,	// (0x00063ae9) main_image3_pane_t3_ParamLimits

0x626b,	// (0x00063ae9) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0006d146) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0006d146) main_image3_pane_t

0x0e6c,	// (0x0005e6ea) grid_sctrl_middle_pane_cp01_ParamLimits

0x0e6c,	// (0x0005e6ea) grid_sctrl_middle_pane_cp01

0x62cc,	// (0x00063b4a) cell_sctrl_middle_pane_cp01_ParamLimits

0x62cc,	// (0x00063b4a) cell_sctrl_middle_pane_cp01

0x62dd,	// (0x00063b5b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x62dd,	// (0x00063b5b) cell_sctrl_middle_pane_cp01_g1

0x9cb1,	// (0x0006752f) main_call4_pane

0x62ea,	// (0x00063b68) aid_size_button_call4_ParamLimits

0x62ea,	// (0x00063b68) aid_size_button_call4

0x631c,	// (0x00063b9a) call4_windows_pane_ParamLimits

0x631c,	// (0x00063b9a) call4_windows_pane

0x6338,	// (0x00063bb6) grid_call4_button_pane_ParamLimits

0x6338,	// (0x00063bb6) grid_call4_button_pane

0xd599,	// (0x0006ae17) call4_windows_conf_pane

0x635c,	// (0x00063bda) popup_call4_audio_first_window_ParamLimits

0x635c,	// (0x00063bda) popup_call4_audio_first_window

0x6388,	// (0x00063c06) popup_call4_audio_second_window_ParamLimits

0x6388,	// (0x00063c06) popup_call4_audio_second_window

0xd5d6,	// (0x0006ae54) popup_call4_audio_wait_window_ParamLimits

0xd5d6,	// (0x0006ae54) popup_call4_audio_wait_window

0x639c,	// (0x00063c1a) cell_call4_button_pane_ParamLimits

0x639c,	// (0x00063c1a) cell_call4_button_pane

0x63bf,	// (0x00063c3d) bg_button_pane_cp09_ParamLimits

0x63bf,	// (0x00063c3d) bg_button_pane_cp09

0x63cb,	// (0x00063c49) cell_call4_button_pane_g1_ParamLimits

0x63cb,	// (0x00063c49) cell_call4_button_pane_g1

0x63d8,	// (0x00063c56) cell_call4_button_pane_t1_ParamLimits

0x63d8,	// (0x00063c56) cell_call4_button_pane_t1

0xd61e,	// (0x0006ae9c) popup_call4_audio_conf_window_ParamLimits

0xd61e,	// (0x0006ae9c) popup_call4_audio_conf_window

0x564b,	// (0x00062ec9) mup3_progress_pane_t1_ParamLimits

0x566a,	// (0x00062ee8) mup3_progress_pane_t2_ParamLimits

0xcf5c,	// (0x0006a7da) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0006d01f) mup3_progress_pane_t_ParamLimits

0xcf79,	// (0x0006a7f7) mup_progress_pane_cp03_ParamLimits

0x5b68,	// (0x000633e6) mup3_control_keys_pane_g4_copy1

0x6061,	// (0x000638df) mp4_rocker2_pane_ParamLimits

0x6061,	// (0x000638df) mp4_rocker2_pane

0xd638,	// (0x0006aeb6) mp4_rocker2_pane_g1

0xd640,	// (0x0006aebe) mp4_rocker2_pane_g2

0x63ea,	// (0x00063c68) mp4_rocker2_pane_g3

0x63f2,	// (0x00063c70) mp4_rocker2_pane_g4

0x63fa,	// (0x00063c78) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0006d14f) mp4_rocker2_pane_g

0x9cb1,	// (0x0006752f) main_camera4_pane

0x9cb1,	// (0x0006752f) main_video4_pane

0x5dbc,	// (0x0006363a) main_video_tele_dialer_pane_t1_ParamLimits

0x5dbc,	// (0x0006363a) main_video_tele_dialer_pane_t1

0x5dce,	// (0x0006364c) main_video_tele_dialer_pane_t2_ParamLimits

0x5dce,	// (0x0006364c) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0006d109) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0006d109) main_video_tele_dialer_pane_t

0x641a,	// (0x00063c98) cam4_autofocus_pane_ParamLimits

0x641a,	// (0x00063c98) cam4_autofocus_pane

0x6432,	// (0x00063cb0) cam4_image_uncrop_pane_ParamLimits

0x6432,	// (0x00063cb0) cam4_image_uncrop_pane

0x644b,	// (0x00063cc9) cam4_indicators_pane_ParamLimits

0x644b,	// (0x00063cc9) cam4_indicators_pane

0x6467,	// (0x00063ce5) main_camera4_pane_g1_ParamLimits

0x6467,	// (0x00063ce5) main_camera4_pane_g1

0x6473,	// (0x00063cf1) main_camera4_pane_g2_ParamLimits

0x6473,	// (0x00063cf1) main_camera4_pane_g2

0x6473,	// (0x00063cf1) main_camera4_pane_g3_ParamLimits

0x6473,	// (0x00063cf1) main_camera4_pane_g3

0x647f,	// (0x00063cfd) main_camera4_pane_g4_ParamLimits

0x647f,	// (0x00063cfd) main_camera4_pane_g4

0x648b,	// (0x00063d09) main_camera4_pane_g5_ParamLimits

0x648b,	// (0x00063d09) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0006d15a) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0006d15a) main_camera4_pane_g

0x64a5,	// (0x00063d23) main_camera4_pane_t1_ParamLimits

0x64a5,	// (0x00063d23) main_camera4_pane_t1

0x64ef,	// (0x00063d6d) bg_tb_trans_pane_cp06

0x6505,	// (0x00063d83) cam4_indicators_pane_g1

0x6516,	// (0x00063d94) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0006d175) cam4_indicators_pane_g

0x652e,	// (0x00063dac) cam4_indicators_pane_t1

0x6558,	// (0x00063dd6) main_video4_pane_g1_ParamLimits

0x6558,	// (0x00063dd6) main_video4_pane_g1

0x6564,	// (0x00063de2) main_video4_pane_g2_ParamLimits

0x6564,	// (0x00063de2) main_video4_pane_g2

0x6570,	// (0x00063dee) main_video4_pane_g3_ParamLimits

0x6570,	// (0x00063dee) main_video4_pane_g3

0x657c,	// (0x00063dfa) main_video4_pane_g4_ParamLimits

0x657c,	// (0x00063dfa) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0006d17c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0006d17c) main_video4_pane_g

0x659e,	// (0x00063e1c) vid4_indicators_pane_ParamLimits

0x659e,	// (0x00063e1c) vid4_indicators_pane

0x65bd,	// (0x00063e3b) video4_image_uncrop_cif_pane_ParamLimits

0x65bd,	// (0x00063e3b) video4_image_uncrop_cif_pane

0x65cc,	// (0x00063e4a) video4_image_uncrop_nhd_pane_ParamLimits

0x65cc,	// (0x00063e4a) video4_image_uncrop_nhd_pane

0x6432,	// (0x00063cb0) video4_image_uncrop_vga_pane_ParamLimits

0x6432,	// (0x00063cb0) video4_image_uncrop_vga_pane

0x65db,	// (0x00063e59) bg_tb_trans_pane_cp07

0x65f3,	// (0x00063e71) vid4_indicators_pane_g1

0x6609,	// (0x00063e87) vid4_indicators_pane_g2

0x661d,	// (0x00063e9b) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0006d187) vid4_indicators_pane_g

0x664e,	// (0x00063ecc) vid4_indicators_pane_t1

0x6665,	// (0x00063ee3) cam4_autofocus_pane_g1

0x666d,	// (0x00063eeb) cam4_autofocus_pane_g2

0x6675,	// (0x00063ef3) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0006d192) cam4_autofocus_pane_g

0x667d,	// (0x00063efb) cam4_autofocus_pane_g3_copy1

0x5dec,	// (0x0006366a) video_down_pane_cp_t1

0x5dfa,	// (0x00063678) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0006d10e) video_down_pane_cp_t

0x0e6c,	// (0x0005e6ea) popup_vitu2_window_ParamLimits

0x0e6c,	// (0x0005e6ea) popup_vitu2_window

0x6685,	// (0x00063f03) aid_size_cell2_itu2_ParamLimits

0x6685,	// (0x00063f03) aid_size_cell2_itu2

0x66a7,	// (0x00063f25) aid_size_cell_itu2_ParamLimits

0x66a7,	// (0x00063f25) aid_size_cell_itu2

0x66ed,	// (0x00063f6b) bg_popup_window_pane_cp09_ParamLimits

0x66ed,	// (0x00063f6b) bg_popup_window_pane_cp09

0x66fb,	// (0x00063f79) field_vitu2_entry_pane_ParamLimits

0x66fb,	// (0x00063f79) field_vitu2_entry_pane

0x671b,	// (0x00063f99) grid_vitu2_function_pane_ParamLimits

0x671b,	// (0x00063f99) grid_vitu2_function_pane

0x675f,	// (0x00063fdd) grid_vitu2_itu_pane_ParamLimits

0x675f,	// (0x00063fdd) grid_vitu2_itu_pane

0x67d7,	// (0x00064055) cell_vitu2_itu_pane_ParamLimits

0x67d7,	// (0x00064055) cell_vitu2_itu_pane

0x67ee,	// (0x0006406c) cell_vitu2_function_pane_ParamLimits

0x67ee,	// (0x0006406c) cell_vitu2_function_pane

0xd648,	// (0x0006aec6) bg_popup_call_pane_cp08_ParamLimits

0xd648,	// (0x0006aec6) bg_popup_call_pane_cp08

0xd661,	// (0x0006aedf) field_vitu2_entry_pane_g1

0xd66d,	// (0x0006aeeb) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0006d199) field_vitu2_entry_pane_g

0x6832,	// (0x000640b0) field_vitu2_entry_pane_t1_ParamLimits

0x6832,	// (0x000640b0) field_vitu2_entry_pane_t1

0xa362,	// (0x00067be0) field_vitu2_entry_pane_t2_ParamLimits

0xa362,	// (0x00067be0) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0006d1a0) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0006d1a0) field_vitu2_entry_pane_t

0x6862,	// (0x000640e0) bg_button_pane_cp010_ParamLimits

0x6862,	// (0x000640e0) bg_button_pane_cp010

0x6870,	// (0x000640ee) cell_vitu2_itu_pane_g1

0x6899,	// (0x00064117) cell_vitu2_itu_pane_t1_ParamLimits

0x6899,	// (0x00064117) cell_vitu2_itu_pane_t1

0x0b2b,	// (0x0005e3a9) cell_vitu2_itu_pane_t2_ParamLimits

0x0b2b,	// (0x0005e3a9) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0006d1aa) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0006d1aa) cell_vitu2_itu_pane_t

0x65db,	// (0x00063e59) bg_button_pane_cp011

0x68e5,	// (0x00064163) cell_vitu2_function_pane_g1

0x9cb1,	// (0x0006752f) main_myfav_hc_pane

0x62ad,	// (0x00063b2b) popup_image3_note_pane_ParamLimits

0x62ad,	// (0x00063b2b) popup_image3_note_pane

0x62bb,	// (0x00063b39) popup_image3_tool_bar_pane_ParamLimits

0x62bb,	// (0x00063b39) popup_image3_tool_bar_pane

0x0ba1,	// (0x0005e41f) cell_vitu2_itu_pane_t3_ParamLimits

0x0ba1,	// (0x0005e41f) cell_vitu2_itu_pane_t3

0x9cb1,	// (0x0006752f) bg_popup_trans_pane

0xd68f,	// (0x0006af0d) grid_image3_tool_bar_pane

0xd699,	// (0x0006af17) bg_popup_trans_pane_g1

0xacec,	// (0x0006856a) bg_popup_trans_pane_g2

0xd6a1,	// (0x0006af1f) bg_popup_trans_pane_g3

0xd6a9,	// (0x0006af27) bg_popup_trans_pane_g4

0xd6b1,	// (0x0006af2f) bg_popup_trans_pane_g5

0xd6b9,	// (0x0006af37) bg_popup_trans_pane_g6

0xd6c1,	// (0x0006af3f) bg_popup_trans_pane_g7

0xd6c9,	// (0x0006af47) bg_popup_trans_pane_g8

0xaccc,	// (0x0006854a) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0006d1b1) bg_popup_trans_pane_g

0xd6d1,	// (0x0006af4f) cell_image3_tool_bar_pane_ParamLimits

0xd6d1,	// (0x0006af4f) cell_image3_tool_bar_pane

0xccb1,	// (0x0006a52f) cell_image3_tool_bar_pane_g1

0x9cb1,	// (0x0006752f) bg_popup_trans_pane_cp1

0xd6e7,	// (0x0006af65) popup_image3_note_pane_t1

0xd6f5,	// (0x0006af73) popup_image3_note_pane_t2

0xd703,	// (0x0006af81) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0006d1c4) popup_image3_note_pane_t

0xd713,	// (0x0006af91) popup_image3_note_pane_t3_copy1

0x68f9,	// (0x00064177) bg_myfav_hc_instruction_pane_ParamLimits

0x68f9,	// (0x00064177) bg_myfav_hc_instruction_pane

0x6911,	// (0x0006418f) cell_myfav_contact_pane_ParamLimits

0x6911,	// (0x0006418f) cell_myfav_contact_pane

0x692b,	// (0x000641a9) cell_myfav_contact_pane_cp1_ParamLimits

0x692b,	// (0x000641a9) cell_myfav_contact_pane_cp1

0x6943,	// (0x000641c1) cell_myfav_contact_pane_cp2_ParamLimits

0x6943,	// (0x000641c1) cell_myfav_contact_pane_cp2

0x695b,	// (0x000641d9) cell_myfav_contact_pane_cp3_ParamLimits

0x695b,	// (0x000641d9) cell_myfav_contact_pane_cp3

0x6972,	// (0x000641f0) cell_myfav_contact_pane_cp4_ParamLimits

0x6972,	// (0x000641f0) cell_myfav_contact_pane_cp4

0x6988,	// (0x00064206) cell_myfav_contact_pane_cp5_ParamLimits

0x6988,	// (0x00064206) cell_myfav_contact_pane_cp5

0x699c,	// (0x0006421a) cell_myfav_contact_pane_cp6_ParamLimits

0x699c,	// (0x0006421a) cell_myfav_contact_pane_cp6

0x69b0,	// (0x0006422e) cell_myfav_contact_pane_cp7_ParamLimits

0x69b0,	// (0x0006422e) cell_myfav_contact_pane_cp7

0xd721,	// (0x0006af9f) listscroll_gen_pane_cp05

0x69c8,	// (0x00064246) main_myfav_hc_pane_g1_ParamLimits

0x69c8,	// (0x00064246) main_myfav_hc_pane_g1

0x69e2,	// (0x00064260) main_myfav_hc_pane_g2_ParamLimits

0x69e2,	// (0x00064260) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0006d1cb) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0006d1cb) main_myfav_hc_pane_g

0x6a14,	// (0x00064292) main_myfav_hc_pane_t1_ParamLimits

0x6a14,	// (0x00064292) main_myfav_hc_pane_t1

0xd72a,	// (0x0006afa8) main_myfav_hc_pane_t2_ParamLimits

0xd72a,	// (0x0006afa8) main_myfav_hc_pane_t2

0xd73c,	// (0x0006afba) main_myfav_hc_pane_t3_ParamLimits

0xd73c,	// (0x0006afba) main_myfav_hc_pane_t3

0x6a2b,	// (0x000642a9) main_myfav_hc_pane_t4_ParamLimits

0x6a2b,	// (0x000642a9) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0006d1d2) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0006d1d2) main_myfav_hc_pane_t

0xccb1,	// (0x0006a52f) bg_myfav_hc_instruction_pane_g1

0xd74e,	// (0x0006afcc) cell_myfav_contact_pane_g1_ParamLimits

0xd74e,	// (0x0006afcc) cell_myfav_contact_pane_g1

0xd74e,	// (0x0006afcc) cell_myfav_contact_pane_g2_ParamLimits

0xd74e,	// (0x0006afcc) cell_myfav_contact_pane_g2

0xd75a,	// (0x0006afd8) cell_myfav_contact_pane_g3_ParamLimits

0xd75a,	// (0x0006afd8) cell_myfav_contact_pane_g3

0xcf46,	// (0x0006a7c4) cell_myfav_contact_pane_g4_ParamLimits

0xcf46,	// (0x0006a7c4) cell_myfav_contact_pane_g4

0xd767,	// (0x0006afe5) cell_myfav_contact_pane_g5_ParamLimits

0xd767,	// (0x0006afe5) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0006d1dd) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0006d1dd) cell_myfav_contact_pane_g

0x69fc,	// (0x0006427a) main_myfav_hc_pane_g3_ParamLimits

0x69fc,	// (0x0006427a) main_myfav_hc_pane_g3

0x0d7e,	// (0x0005e5fc) popup_adpt_find_window

0x6a55,	// (0x000642d3) afind_page_pane_ParamLimits

0x6a55,	// (0x000642d3) afind_page_pane

0x6a62,	// (0x000642e0) aid_size_cell_afind_ParamLimits

0x6a62,	// (0x000642e0) aid_size_cell_afind

0x6a7c,	// (0x000642fa) bg_popup_sub_pane_cp09_ParamLimits

0x6a7c,	// (0x000642fa) bg_popup_sub_pane_cp09

0x6a89,	// (0x00064307) find_pane_cp01_ParamLimits

0x6a89,	// (0x00064307) find_pane_cp01

0xd773,	// (0x0006aff1) grid_afind_control_pane_ParamLimits

0xd773,	// (0x0006aff1) grid_afind_control_pane

0x6a96,	// (0x00064314) grid_afind_pane_ParamLimits

0x6a96,	// (0x00064314) grid_afind_pane

0x6ab2,	// (0x00064330) cell_afind_pane_ParamLimits

0x6ab2,	// (0x00064330) cell_afind_pane

0xccb1,	// (0x0006a52f) afind_page_pane_g1

0x6afe,	// (0x0006437c) afind_page_pane_g2

0x6b07,	// (0x00064385) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0006d1e8) afind_page_pane_g

0x6b10,	// (0x0006438e) afind_page_pane_t1

0xd787,	// (0x0006b005) cell_afind_grid_control_pane_ParamLimits

0xd787,	// (0x0006b005) cell_afind_grid_control_pane

0xd58d,	// (0x0006ae0b) bg_button_pane_cp69_ParamLimits

0xd58d,	// (0x0006ae0b) bg_button_pane_cp69

0x6b30,	// (0x000643ae) cell_afind_pane_g1_ParamLimits

0x6b30,	// (0x000643ae) cell_afind_pane_g1

0x6b3d,	// (0x000643bb) cell_afind_pane_t1_ParamLimits

0x6b3d,	// (0x000643bb) cell_afind_pane_t1

0xaae1,	// (0x0006835f) bg_button_pane_cp72

0xd796,	// (0x0006b014) cell_afind_grid_control_pane_g1

0x406e,	// (0x000618ec) aid_image_placing_area_ParamLimits

0x406e,	// (0x000618ec) aid_image_placing_area

0xd259,	// (0x0006aad7) field_vitu_entry_pane_g1_ParamLimits

0xd259,	// (0x0006aad7) field_vitu_entry_pane_g1

0xd265,	// (0x0006aae3) field_vitu_entry_pane_g2_ParamLimits

0xd265,	// (0x0006aae3) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0006d099) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0006d099) field_vitu_entry_pane_g

0x5bf2,	// (0x00063470) cell_vitu_itu_pane_g1_ParamLimits

0x5c42,	// (0x000634c0) cell_vitu_itu_pane_t3_ParamLimits

0x5c42,	// (0x000634c0) cell_vitu_itu_pane_t3

0xd53d,	// (0x0006adbb) mp4_progress_pane_t1_ParamLimits

0xd556,	// (0x0006add4) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0006d12e) mp4_progress_pane_t_ParamLimits

0xd56f,	// (0x0006aded) mup_progress_pane_cp04_ParamLimits

0x6a3f,	// (0x000642bd) main_myfav_hc_pane_t5_ParamLimits

0x6a3f,	// (0x000642bd) main_myfav_hc_pane_t5

0x9ccf,	// (0x0006754d) aid_zoom_text_primary

0x0d7e,	// (0x0005e5fc) popup_adpt_find_window_ParamLimits

0xa348,	// (0x00067bc6) main_cam_set_pane

0x6459,	// (0x00063cd7) cam4_zoom_pane_ParamLimits

0x6459,	// (0x00063cd7) cam4_zoom_pane

0x6b4f,	// (0x000643cd) main_cam_set_pane_g1_ParamLimits

0x6b4f,	// (0x000643cd) main_cam_set_pane_g1

0x6b5d,	// (0x000643db) main_cam_set_pane_g2_ParamLimits

0x6b5d,	// (0x000643db) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0006d1ef) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0006d1ef) main_cam_set_pane_g

0x6b69,	// (0x000643e7) main_cam_set_pane_t1_ParamLimits

0x6b69,	// (0x000643e7) main_cam_set_pane_t1

0x6b85,	// (0x00064403) main_cset_listscroll_pane_ParamLimits

0x6b85,	// (0x00064403) main_cset_listscroll_pane

0x6bb4,	// (0x00064432) main_cset_slider_pane_ParamLimits

0x6bb4,	// (0x00064432) main_cset_slider_pane

0xd7a7,	// (0x0006b025) main_cset_list_pane_ParamLimits

0xd7a7,	// (0x0006b025) main_cset_list_pane

0xd7b7,	// (0x0006b035) scroll_pane_cp028

0x6bd5,	// (0x00064453) aid_area_touch_slider

0x6bf1,	// (0x0006446f) cset_slider_pane

0x6c1b,	// (0x00064499) main_cset_slider_pane_g1

0x6c30,	// (0x000644ae) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0006d1f4) main_cset_slider_pane_g

0xd7f0,	// (0x0006b06e) main_cset_slider_pane_t1

0x6cec,	// (0x0006456a) main_cset_slider_pane_t2

0x6d06,	// (0x00064584) main_cset_slider_pane_t3

0x6d20,	// (0x0006459e) main_cset_slider_pane_t4

0x6d3a,	// (0x000645b8) main_cset_slider_pane_t5

0x6d54,	// (0x000645d2) main_cset_slider_pane_t6

0x6d69,	// (0x000645e7) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0006d219) main_cset_slider_pane_t

0x6e6d,	// (0x000646eb) cset_list_set_pane_ParamLimits

0x6e6d,	// (0x000646eb) cset_list_set_pane

0x6e7e,	// (0x000646fc) aid_position_infowindow_above

0x6e86,	// (0x00064704) aid_position_infowindow_below

0x6e8e,	// (0x0006470c) cset_list_set_pane_g1_ParamLimits

0x6e8e,	// (0x0006470c) cset_list_set_pane_g1

0x6e9a,	// (0x00064718) cset_list_set_pane_g3_ParamLimits

0x6e9a,	// (0x00064718) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0006d238) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0006d238) cset_list_set_pane_g

0x6ea9,	// (0x00064727) cset_list_set_pane_t1_ParamLimits

0x6ea9,	// (0x00064727) cset_list_set_pane_t1

0xa348,	// (0x00067bc6) list_highlight_pane_cp021_ParamLimits

0xa348,	// (0x00067bc6) list_highlight_pane_cp021

0xb578,	// (0x00068df6) cset_slider_pane_g1

0xb58a,	// (0x00068e08) cset_slider_pane_g2

0xb581,	// (0x00068dff) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0006d23d) cset_slider_pane_g

0x6ebe,	// (0x0006473c) aid_area_touch_cam4_zoom

0x6ec6,	// (0x00064744) cam4_zoom_cont_pane

0x6ece,	// (0x0006474c) cam4_zoom_pane_g1

0x6ed6,	// (0x00064754) cam4_zoom_pane_g2

0x6ede,	// (0x0006475c) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0006d244) cam4_zoom_pane_g

0x6ee6,	// (0x00064764) cam4_zoom_cont_pane_g1

0x6eef,	// (0x0006476d) cam4_zoom_cont_pane_g2

0x6ef8,	// (0x00064776) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0006d24b) cam4_zoom_cont_pane_g

0x6304,	// (0x00063b82) call4_image_pane_ParamLimits

0x6304,	// (0x00063b82) call4_image_pane

0xd599,	// (0x0006ae17) call4_windows_conf_pane_ParamLimits

0xd5b4,	// (0x0006ae32) popup_call4_audio_in_window_ParamLimits

0xd5b4,	// (0x0006ae32) popup_call4_audio_in_window

0x9cb1,	// (0x0006752f) bg_popup_call2_act_pane_cp02

0xd616,	// (0x0006ae94) call4_list_conf_pane

0xccb1,	// (0x0006a52f) call4_image_pane_g1

0xccb1,	// (0x0006a52f) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0006cf5f) call4_image_pane_g

0xd890,	// (0x0006b10e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd890,	// (0x0006b10e) list_single_graphic_popup_conf4_pane

0x9cb1,	// (0x0006752f) list_highlight_pane_cp022

0xd8a5,	// (0x0006b123) list_single_graphic_popup_conf4_pane_g1

0xb258,	// (0x00068ad6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0006d252) list_single_graphic_popup_conf4_pane_g

0xd8ad,	// (0x0006b12b) list_single_graphic_popup_conf4_pane_t1

0x21c6,	// (0x0005fa44) popup_vtel_slider_window_ParamLimits

0x21c6,	// (0x0005fa44) popup_vtel_slider_window

0xd57b,	// (0x0006adf9) dialer2_ne_pane_t2_ParamLimits

0xd57b,	// (0x0006adf9) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0006d133) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0006d133) dialer2_ne_pane_t

0xa348,	// (0x00067bc6) bg_popup_sub_pane_cp010_ParamLimits

0xa348,	// (0x00067bc6) bg_popup_sub_pane_cp010

0x6f01,	// (0x0006477f) popup_vtel_slider_window_g1_ParamLimits

0x6f01,	// (0x0006477f) popup_vtel_slider_window_g1

0x6f0d,	// (0x0006478b) popup_vtel_slider_window_g2_ParamLimits

0x6f0d,	// (0x0006478b) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0006d257) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0006d257) popup_vtel_slider_window_g

0x6f55,	// (0x000647d3) vtel_slider_pane_ParamLimits

0x6f55,	// (0x000647d3) vtel_slider_pane

0x6f64,	// (0x000647e2) vtel_slider_pane_g1_ParamLimits

0x6f64,	// (0x000647e2) vtel_slider_pane_g1

0x6f71,	// (0x000647ef) vtel_slider_pane_g2_ParamLimits

0x6f71,	// (0x000647ef) vtel_slider_pane_g2

0x6f7e,	// (0x000647fc) vtel_slider_pane_g3_ParamLimits

0x6f7e,	// (0x000647fc) vtel_slider_pane_g3

0x6f64,	// (0x000647e2) vtel_slider_pane_g4_ParamLimits

0x6f64,	// (0x000647e2) vtel_slider_pane_g4

0x6f8b,	// (0x00064809) vtel_slider_pane_g5_ParamLimits

0x6f8b,	// (0x00064809) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0006d260) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0006d260) vtel_slider_pane_g

0xa348,	// (0x00067bc6) main_gallery2_pane

0x66cd,	// (0x00063f4b) aid_size_row_itut2_dropdow_list_ParamLimits

0x66cd,	// (0x00063f4b) aid_size_row_itut2_dropdow_list

0x673d,	// (0x00063fbb) grid_vitu2_function_top_pane_ParamLimits

0x673d,	// (0x00063fbb) grid_vitu2_function_top_pane

0x678f,	// (0x0006400d) popup_vitu2_dropdown_list_window_ParamLimits

0x678f,	// (0x0006400d) popup_vitu2_dropdown_list_window

0x67b3,	// (0x00064031) popup_vitu2_match_list_window

0x6fa6,	// (0x00064824) cell_vitu2_function_top_pane_ParamLimits

0x6fa6,	// (0x00064824) cell_vitu2_function_top_pane

0x6fc6,	// (0x00064844) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6fc6,	// (0x00064844) cell_vitu2_function_top_pane_cp01

0x6fe4,	// (0x00064862) cell_vitu2_function_top_wide_pane_ParamLimits

0x6fe4,	// (0x00064862) cell_vitu2_function_top_wide_pane

0x65db,	// (0x00063e59) bg_button_pane_cp012

0x7002,	// (0x00064880) cell_vitu2_function_top_pane_g1

0x7016,	// (0x00064894) bg_button_pane_cp013_ParamLimits

0x7016,	// (0x00064894) bg_button_pane_cp013

0x7032,	// (0x000648b0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7032,	// (0x000648b0) cell_vitu2_function_top_wide_pane_g1

0x704a,	// (0x000648c8) bg_popup_sub_pane_cp20

0x7058,	// (0x000648d6) list_vitu2_match_list_pane

0xd699,	// (0x0006af17) bg_popup_sub_pane_cp20_g1

0xd6a1,	// (0x0006af1f) bg_popup_sub_pane_cp20_g2

0xacec,	// (0x0006856a) bg_popup_sub_pane_cp20_g3

0xd6a9,	// (0x0006af27) bg_popup_sub_pane_cp20_g4

0xaccc,	// (0x0006854a) bg_popup_sub_pane_cp20_g5

0xd8c3,	// (0x0006b141) bg_popup_sub_pane_cp20_g6

0xd6b9,	// (0x0006af37) bg_popup_sub_pane_cp20_g7

0xd6c1,	// (0x0006af3f) bg_popup_sub_pane_cp20_g8

0xd6c9,	// (0x0006af47) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0006d26b) bg_popup_sub_pane_cp20_g

0x7070,	// (0x000648ee) list_vitu2_match_list_item_pane_ParamLimits

0x7070,	// (0x000648ee) list_vitu2_match_list_item_pane

0x7082,	// (0x00064900) list_vitu2_match_list_item_pane_t1

0x11d8,	// (0x0005ea56) bg_popup_sub_pane_cp21

0x70d4,	// (0x00064952) grid_vitu2_dropdown_list_pane

0x70dc,	// (0x0006495a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x70dc,	// (0x0006495a) cell_vitu2_dropdown_list_char_pane

0x7101,	// (0x0006497f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7101,	// (0x0006497f) cell_vitu2_dropdown_list_ctrl_pane

0xd8cb,	// (0x0006b149) cell_vitu2_dropdown_list_char_pane_g1

0xd8d4,	// (0x0006b152) cell_vitu2_dropdown_list_char_pane_g2

0xd8dd,	// (0x0006b15b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0006d288) cell_vitu2_dropdown_list_char_pane_g

0x712f,	// (0x000649ad) cell_vitu2_dropdown_list_char_pane_t1

0x713d,	// (0x000649bb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x713d,	// (0x000649bb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x714d,	// (0x000649cb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x714d,	// (0x000649cb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x715e,	// (0x000649dc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x715e,	// (0x000649dc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x716e,	// (0x000649ec) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x716e,	// (0x000649ec) cell_vitu2_dropdown_list_ctrl_pane_g4

0x64ef,	// (0x00063d6d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x64ef,	// (0x00063d6d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0006d28f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0006d28f) cell_vitu2_dropdown_list_ctrl_pane_g

0x7187,	// (0x00064a05) aid_size_cell_gallery2_ParamLimits

0x7187,	// (0x00064a05) aid_size_cell_gallery2

0x71a1,	// (0x00064a1f) grid_gallery2_pane_ParamLimits

0x71a1,	// (0x00064a1f) grid_gallery2_pane

0x5a77,	// (0x000632f5) scroll_pane_cp029_ParamLimits

0x5a77,	// (0x000632f5) scroll_pane_cp029

0x71b8,	// (0x00064a36) cell_gallery2_pane_ParamLimits

0x71b8,	// (0x00064a36) cell_gallery2_pane

0xd8e6,	// (0x0006b164) cell_gallery2_pane_g2

0x7204,	// (0x00064a82) cell_gallery2_pane_g3

0xd8ee,	// (0x0006b16c) cell_gallery2_pane_g4

0xd8f6,	// (0x0006b174) cell_gallery2_pane_g5

0xb440,	// (0x00068cbe) grid_highlight_pane_cp10

0x67b3,	// (0x00064031) popup_vitu2_match_list_window_ParamLimits

0x67c7,	// (0x00064045) popup_vitu2_query_window_ParamLimits

0x67c7,	// (0x00064045) popup_vitu2_query_window

0x11d8,	// (0x0005ea56) bg_vitu2_candi_button_pane

0xd8cb,	// (0x0006b149) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8d4,	// (0x0006b152) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8dd,	// (0x0006b15b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x720c,	// (0x00064a8a) bg_button_pane_cp015

0x721e,	// (0x00064a9c) bg_button_pane_cp016

0x7231,	// (0x00064aaf) bg_button_pane_cp017

0xc860,	// (0x0006a0de) bg_popup_sub_pane_cp22

0xd8fe,	// (0x0006b17c) popup_vitu2_query_window_g1

0x7276,	// (0x00064af4) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0006d29a) popup_vitu2_query_window_g

0x7293,	// (0x00064b11) popup_vitu2_query_window_t1_ParamLimits

0x7293,	// (0x00064b11) popup_vitu2_query_window_t1

0x72c6,	// (0x00064b44) popup_vitu2_query_window_t2_ParamLimits

0x72c6,	// (0x00064b44) popup_vitu2_query_window_t2

0x72d8,	// (0x00064b56) popup_vitu2_query_window_t3_ParamLimits

0x72d8,	// (0x00064b56) popup_vitu2_query_window_t3

0x7300,	// (0x00064b7e) popup_vitu2_query_window_t4_ParamLimits

0x7300,	// (0x00064b7e) popup_vitu2_query_window_t4

0x7323,	// (0x00064ba1) popup_vitu2_query_window_t5_ParamLimits

0x7323,	// (0x00064ba1) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0006d2a1) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0006d2a1) popup_vitu2_query_window_t

0xd79f,	// (0x0006b01d) main_cset_text_pane

0x6bd5,	// (0x00064453) aid_area_touch_slider_ParamLimits

0x6bf1,	// (0x0006446f) cset_slider_pane_ParamLimits

0x6c1b,	// (0x00064499) main_cset_slider_pane_g1_ParamLimits

0x6c30,	// (0x000644ae) main_cset_slider_pane_g2_ParamLimits

0xd7c0,	// (0x0006b03e) main_cset_slider_pane_g3_ParamLimits

0xd7c0,	// (0x0006b03e) main_cset_slider_pane_g3

0x6c45,	// (0x000644c3) main_cset_slider_pane_g4_ParamLimits

0x6c45,	// (0x000644c3) main_cset_slider_pane_g4

0x6c54,	// (0x000644d2) main_cset_slider_pane_g5_ParamLimits

0x6c54,	// (0x000644d2) main_cset_slider_pane_g5

0x6c60,	// (0x000644de) main_cset_slider_pane_g6_ParamLimits

0x6c60,	// (0x000644de) main_cset_slider_pane_g6

0xf976,	// (0x0006d1f4) main_cset_slider_pane_g_ParamLimits

0xd7f0,	// (0x0006b06e) main_cset_slider_pane_t1_ParamLimits

0x6cec,	// (0x0006456a) main_cset_slider_pane_t2_ParamLimits

0x6d06,	// (0x00064584) main_cset_slider_pane_t3_ParamLimits

0x6d20,	// (0x0006459e) main_cset_slider_pane_t4_ParamLimits

0x6d3a,	// (0x000645b8) main_cset_slider_pane_t5_ParamLimits

0x6d54,	// (0x000645d2) main_cset_slider_pane_t6_ParamLimits

0x6d69,	// (0x000645e7) main_cset_slider_pane_t7_ParamLimits

0x6d93,	// (0x00064611) main_cset_slider_pane_t8_ParamLimits

0x6d93,	// (0x00064611) main_cset_slider_pane_t8

0x6dbb,	// (0x00064639) main_cset_slider_pane_t9_ParamLimits

0x6dbb,	// (0x00064639) main_cset_slider_pane_t9

0x6de3,	// (0x00064661) main_cset_slider_pane_t10_ParamLimits

0x6de3,	// (0x00064661) main_cset_slider_pane_t10

0x6e0b,	// (0x00064689) main_cset_slider_pane_t11_ParamLimits

0x6e0b,	// (0x00064689) main_cset_slider_pane_t11

0x6e33,	// (0x000646b1) main_cset_slider_pane_t12_ParamLimits

0x6e33,	// (0x000646b1) main_cset_slider_pane_t12

0x6e50,	// (0x000646ce) main_cset_slider_pane_t13_ParamLimits

0x6e50,	// (0x000646ce) main_cset_slider_pane_t13

0xf99b,	// (0x0006d219) main_cset_slider_pane_t_ParamLimits

0x9cb1,	// (0x0006752f) bg_popup_sub_pane_cp011

0xd90a,	// (0x0006b188) main_cset_text_pane_g1

0xd912,	// (0x0006b190) main_cset_text_pane_t1

0xd920,	// (0x0006b19e) main_cset_text_pane_t2

0xd92e,	// (0x0006b1ac) main_cset_text_pane_t3

0xd93c,	// (0x0006b1ba) main_cset_text_pane_t4

0xd94a,	// (0x0006b1c8) main_cset_text_pane_t5

0xd958,	// (0x0006b1d6) main_cset_text_pane_t6

0xd966,	// (0x0006b1e4) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0006d2b0) main_cset_text_pane_t

0x9cb1,	// (0x0006752f) main_cam4_burst_pane

0x9cb1,	// (0x0006752f) main_cam5_pane

0x6b1e,	// (0x0006439c) bg_button_pane_cp019

0x6b27,	// (0x000643a5) bg_button_pane_cp020

0xd7cc,	// (0x0006b04a) main_cset_slider_pane_g7_ParamLimits

0xd7cc,	// (0x0006b04a) main_cset_slider_pane_g7

0xd7d8,	// (0x0006b056) main_cset_slider_pane_g8_ParamLimits

0xd7d8,	// (0x0006b056) main_cset_slider_pane_g8

0x6c74,	// (0x000644f2) main_cset_slider_pane_g9_ParamLimits

0x6c74,	// (0x000644f2) main_cset_slider_pane_g9

0x6c80,	// (0x000644fe) main_cset_slider_pane_g10_ParamLimits

0x6c80,	// (0x000644fe) main_cset_slider_pane_g10

0x6c8c,	// (0x0006450a) main_cset_slider_pane_g11_ParamLimits

0x6c8c,	// (0x0006450a) main_cset_slider_pane_g11

0x6c98,	// (0x00064516) main_cset_slider_pane_g12_ParamLimits

0x6c98,	// (0x00064516) main_cset_slider_pane_g12

0x6ca4,	// (0x00064522) main_cset_slider_pane_g13_ParamLimits

0x6ca4,	// (0x00064522) main_cset_slider_pane_g13

0x6cb0,	// (0x0006452e) main_cset_slider_pane_g14_ParamLimits

0x6cb0,	// (0x0006452e) main_cset_slider_pane_g14

0x6cbc,	// (0x0006453a) main_cset_slider_pane_g15_ParamLimits

0x6cbc,	// (0x0006453a) main_cset_slider_pane_g15

0xd81e,	// (0x0006b09c) main_cset_slider_pane_t14_ParamLimits

0xd81e,	// (0x0006b09c) main_cset_slider_pane_t14

0xd857,	// (0x0006b0d5) main_cset_slider_pane_t15_ParamLimits

0xd857,	// (0x0006b0d5) main_cset_slider_pane_t15

0x739c,	// (0x00064c1a) aid_cam4_burst_size_cell_ParamLimits

0x739c,	// (0x00064c1a) aid_cam4_burst_size_cell

0x73b8,	// (0x00064c36) grid_cam4_burst_pane_ParamLimits

0x73b8,	// (0x00064c36) grid_cam4_burst_pane

0x73ea,	// (0x00064c68) linegrid_cam4_burst_pane_ParamLimits

0x73ea,	// (0x00064c68) linegrid_cam4_burst_pane

0x7408,	// (0x00064c86) scroll_pane_cp30_ParamLimits

0x7408,	// (0x00064c86) scroll_pane_cp30

0x7414,	// (0x00064c92) cell_cam4_burst_pane_ParamLimits

0x7414,	// (0x00064c92) cell_cam4_burst_pane

0xd974,	// (0x0006b1f2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd974,	// (0x0006b1f2) linegrid_cam4_burst_pane_g1

0x7454,	// (0x00064cd2) linegrid_cam4_burst_pane_g2_ParamLimits

0x7454,	// (0x00064cd2) linegrid_cam4_burst_pane_g2

0xd981,	// (0x0006b1ff) linegrid_cam4_burst_pane_g3_ParamLimits

0xd981,	// (0x0006b1ff) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0006d2bf) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0006d2bf) linegrid_cam4_burst_pane_g

0x7465,	// (0x00064ce3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7465,	// (0x00064ce3) linegrid_cam4_burst_pane_g3_copy1

0xd98e,	// (0x0006b20c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd98e,	// (0x0006b20c) linegrid_cam4_burst_pane_g4

0x747f,	// (0x00064cfd) linegrid_cam4_burst_pane_g5_ParamLimits

0x747f,	// (0x00064cfd) linegrid_cam4_burst_pane_g5

0x7490,	// (0x00064d0e) linegrid_cam4_burst_pane_g6_ParamLimits

0x7490,	// (0x00064d0e) linegrid_cam4_burst_pane_g6

0xd99b,	// (0x0006b219) linegrid_cam4_burst_pane_g7_ParamLimits

0xd99b,	// (0x0006b219) linegrid_cam4_burst_pane_g7

0x74a7,	// (0x00064d25) cell_cam4_burst_pane_g1

0xd9b4,	// (0x0006b232) main_cam5_pane_t1_ParamLimits

0xd9b4,	// (0x0006b232) main_cam5_pane_t1

0xd9c6,	// (0x0006b244) main_cam5_pane_t2_ParamLimits

0xd9c6,	// (0x0006b244) main_cam5_pane_t2

0xd9d8,	// (0x0006b256) main_cam5_pane_t3_ParamLimits

0xd9d8,	// (0x0006b256) main_cam5_pane_t3

0xd9ea,	// (0x0006b268) main_cam5_pane_t4_ParamLimits

0xd9ea,	// (0x0006b268) main_cam5_pane_t4

0xda02,	// (0x0006b280) main_cam5_pane_t5_ParamLimits

0xda02,	// (0x0006b280) main_cam5_pane_t5

0xda16,	// (0x0006b294) main_cam5_pane_t6_ParamLimits

0xda16,	// (0x0006b294) main_cam5_pane_t6

0xda2a,	// (0x0006b2a8) main_cam5_pane_t7_ParamLimits

0xda2a,	// (0x0006b2a8) main_cam5_pane_t7

0xda3c,	// (0x0006b2ba) main_cam5_pane_t8_ParamLimits

0xda3c,	// (0x0006b2ba) main_cam5_pane_t8

0xda5a,	// (0x0006b2d8) main_cam5_pane_t9_ParamLimits

0xda5a,	// (0x0006b2d8) main_cam5_pane_t9

0xda6c,	// (0x0006b2ea) main_cam5_pane_t10_ParamLimits

0xda6c,	// (0x0006b2ea) main_cam5_pane_t10

0xda7e,	// (0x0006b2fc) main_cam5_pane_t11_ParamLimits

0xda7e,	// (0x0006b2fc) main_cam5_pane_t11

0xda92,	// (0x0006b310) main_cam5_pane_t12_ParamLimits

0xda92,	// (0x0006b310) main_cam5_pane_t12

0xdaa9,	// (0x0006b327) main_cam5_pane_t13_ParamLimits

0xdaa9,	// (0x0006b327) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0006d2cb) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0006d2cb) main_cam5_pane_t

0x0e2b,	// (0x0005e6a9) popup_scut_keymap_window_ParamLimits

0x0e2b,	// (0x0005e6a9) popup_scut_keymap_window

0x74ba,	// (0x00064d38) aid_size_cell_brow_shortcut

0xb440,	// (0x00068cbe) bg_popup_window_pane_cp010

0x74c6,	// (0x00064d44) grid_scut_pane

0x74d2,	// (0x00064d50) cell_scut_pane_ParamLimits

0x74d2,	// (0x00064d50) cell_scut_pane

0x74ed,	// (0x00064d6b) cell_scut_pane_g1

0xdacc,	// (0x0006b34a) cell_scut_pane_t1

0xdadb,	// (0x0006b359) cell_scut_pane_t2

0x74f6,	// (0x00064d74) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0006d2e6) cell_scut_pane_t

0x526c,	// (0x00062aea) main_mup3_pane_g8_ParamLimits

0x526c,	// (0x00062aea) main_mup3_pane_g8

0x66dd,	// (0x00063f5b) area_vitu2_query_pane_ParamLimits

0x66dd,	// (0x00063f5b) area_vitu2_query_pane

0x7244,	// (0x00064ac2) input_focus_pane_cp08

0xdaea,	// (0x0006b368) area_vitu2_query_pane_g1

0x7504,	// (0x00064d82) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0006d2ed) area_vitu2_query_pane_g

0x7515,	// (0x00064d93) area_vitu2_query_pane_t1_ParamLimits

0x7515,	// (0x00064d93) area_vitu2_query_pane_t1

0x7529,	// (0x00064da7) area_vitu2_query_pane_t2_ParamLimits

0x7529,	// (0x00064da7) area_vitu2_query_pane_t2

0x753d,	// (0x00064dbb) area_vitu2_query_pane_t3_ParamLimits

0x753d,	// (0x00064dbb) area_vitu2_query_pane_t3

0xa37f,	// (0x00067bfd) area_vitu2_query_pane_t4_ParamLimits

0xa37f,	// (0x00067bfd) area_vitu2_query_pane_t4

0xa3a7,	// (0x00067c25) area_vitu2_query_pane_t5_ParamLimits

0xa3a7,	// (0x00067c25) area_vitu2_query_pane_t5

0xa3cf,	// (0x00067c4d) area_vitu2_query_pane_t6_ParamLimits

0xa3cf,	// (0x00067c4d) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0006d2f2) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0006d2f2) area_vitu2_query_pane_t

0x7565,	// (0x00064de3) bg_button_pane_cp018

0x7573,	// (0x00064df1) bg_button_pane_cp021

0x757f,	// (0x00064dfd) bg_button_pane_cp022

0x7590,	// (0x00064e0e) input_focus_pane_cp09

0x3673,	// (0x00060ef1) aid_size_touch_mv_arrow_left

0x369e,	// (0x00060f1c) aid_size_touch_mv_arrow_right

0x6cd4,	// (0x00064552) main_cset_slider_pane_g16_ParamLimits

0x6cd4,	// (0x00064552) main_cset_slider_pane_g16

0x6ce0,	// (0x0006455e) main_cset_slider_pane_g17_ParamLimits

0x6ce0,	// (0x0006455e) main_cset_slider_pane_g17

0x74a7,	// (0x00064d25) cell_cam4_burst_pane_g1_ParamLimits

0x9cb1,	// (0x0006752f) compa_mode_pane

0x6f19,	// (0x00064797) popup_vtel_slider_window_g3_ParamLimits

0x6f19,	// (0x00064797) popup_vtel_slider_window_g3

0x6f2d,	// (0x000647ab) popup_vtel_slider_window_g4_ParamLimits

0x6f2d,	// (0x000647ab) popup_vtel_slider_window_g4

0x6f41,	// (0x000647bf) popup_vtel_slider_window_t1_ParamLimits

0x6f41,	// (0x000647bf) popup_vtel_slider_window_t1

0x9cb1,	// (0x0006752f) main_cl_pane

0xc88c,	// (0x0006a10a) popup_imed_adjust2_window_ParamLimits

0xc860,	// (0x0006a0de) bg_tb_trans_pane_cp05_ParamLimits

0xd18e,	// (0x0006aa0c) popup_imed_adjust2_window_g1_ParamLimits

0xd19d,	// (0x0006aa1b) popup_imed_adjust2_window_g2_ParamLimits

0xd19d,	// (0x0006aa1b) popup_imed_adjust2_window_g2

0xd1a9,	// (0x0006aa27) popup_imed_adjust2_window_g3_ParamLimits

0xd1a9,	// (0x0006aa27) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0006d05d) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0006d05d) popup_imed_adjust2_window_g

0xd1b5,	// (0x0006aa33) popup_imed_adjust2_window_t1_ParamLimits

0xd1cd,	// (0x0006aa4b) slider_imed_adjust_pane_ParamLimits

0xd1e1,	// (0x0006aa5f) slider_imed_adjust_pane_g1_ParamLimits

0xd1f1,	// (0x0006aa6f) slider_imed_adjust_pane_g2_ParamLimits

0xd201,	// (0x0006aa7f) slider_imed_adjust_pane_g3_ParamLimits

0xd212,	// (0x0006aa90) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0006d064) slider_imed_adjust_pane_g_ParamLimits

0x6402,	// (0x00063c80) aid_touch_area_cam4_ParamLimits

0x6402,	// (0x00063c80) aid_touch_area_cam4

0x6412,	// (0x00063c90) battery_pane_cp01

0x6499,	// (0x00063d17) main_camera4_pane_g6_ParamLimits

0x6499,	// (0x00063d17) main_camera4_pane_g6

0x64b7,	// (0x00063d35) main_camera4_pane_t2_ParamLimits

0x64b7,	// (0x00063d35) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0006d167) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0006d167) main_camera4_pane_t

0x6548,	// (0x00063dc6) aid_touch_area_vid4_ParamLimits

0x6548,	// (0x00063dc6) aid_touch_area_vid4

0x6588,	// (0x00063e06) main_video4_pane_g5_ParamLimits

0x6588,	// (0x00063e06) main_video4_pane_g5

0x65ae,	// (0x00063e2c) vid4_progress_pane_ParamLimits

0x65ae,	// (0x00063e2c) vid4_progress_pane

0xd7e4,	// (0x0006b062) main_cset_slider_pane_g18_ParamLimits

0xd7e4,	// (0x0006b062) main_cset_slider_pane_g18

0xd9a8,	// (0x0006b226) cell_cam4_burst_pane_g2_ParamLimits

0xd9a8,	// (0x0006b226) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0006d2c6) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0006d2c6) cell_cam4_burst_pane_g

0x75a1,	// (0x00064e1f) bg_cl_pane_ParamLimits

0x75a1,	// (0x00064e1f) bg_cl_pane

0x75ad,	// (0x00064e2b) cl_header_pane_ParamLimits

0x75ad,	// (0x00064e2b) cl_header_pane

0x75b9,	// (0x00064e37) cl_listscroll_pane_ParamLimits

0x75b9,	// (0x00064e37) cl_listscroll_pane

0xdaf6,	// (0x0006b374) bg_cl_pane_g1

0xdb60,	// (0x0006b3de) bg_cl_pane_g2

0xdb68,	// (0x0006b3e6) bg_cl_pane_g3

0xdb70,	// (0x0006b3ee) bg_cl_pane_g4

0xdb78,	// (0x0006b3f6) bg_cl_pane_g5

0xdb80,	// (0x0006b3fe) bg_cl_pane_g6

0xdb88,	// (0x0006b406) bg_cl_pane_g7

0xdb90,	// (0x0006b40e) bg_cl_pane_g8

0xdb98,	// (0x0006b416) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0006d301) bg_cl_pane_g

0x75c5,	// (0x00064e43) aid_height_cl_leading_ParamLimits

0x75c5,	// (0x00064e43) aid_height_cl_leading

0x75d1,	// (0x00064e4f) aid_height_cl_text_ParamLimits

0x75d1,	// (0x00064e4f) aid_height_cl_text

0x0e6c,	// (0x0005e6ea) bg_cl_header_pane_ParamLimits

0x0e6c,	// (0x0005e6ea) bg_cl_header_pane

0x75e9,	// (0x00064e67) cl_header_pane_g1_ParamLimits

0x75e9,	// (0x00064e67) cl_header_pane_g1

0x75f6,	// (0x00064e74) cl_header_pane_t1_ParamLimits

0x75f6,	// (0x00064e74) cl_header_pane_t1

0xdba0,	// (0x0006b41e) cl_list_pane

0xd7b7,	// (0x0006b035) hc_scroll_pane_cp01

0xaccc,	// (0x0006854a) bg_cl_header_pane_g1

0xd699,	// (0x0006af17) bg_cl_header_pane_g2

0xacec,	// (0x0006856a) bg_cl_header_pane_g3

0xd6a9,	// (0x0006af27) bg_cl_header_pane_g4

0xd6a1,	// (0x0006af1f) bg_cl_header_pane_g5

0xd8c3,	// (0x0006b141) bg_cl_header_pane_g6

0xd6c1,	// (0x0006af3f) bg_cl_header_pane_g7

0xd6c9,	// (0x0006af47) bg_cl_header_pane_g8

0xd6b9,	// (0x0006af37) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0006d314) bg_cl_header_pane_g

0x7608,	// (0x00064e86) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7608,	// (0x00064e86) hc_cl_list_double_graphic_heading_pane

0x7618,	// (0x00064e96) hc_cl_list_single_graphic_pane_ParamLimits

0x7618,	// (0x00064e96) hc_cl_list_single_graphic_pane

0x762a,	// (0x00064ea8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x762a,	// (0x00064ea8) hc_cl_list_single_graphic_pane_g1

0x7636,	// (0x00064eb4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7636,	// (0x00064eb4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0006d327) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0006d327) hc_cl_list_single_graphic_pane_g

0x764a,	// (0x00064ec8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x764a,	// (0x00064ec8) hc_cl_list_single_graphic_pane_t1

0x762a,	// (0x00064ea8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x762a,	// (0x00064ea8) hc_cl_list_double_graphic_heading_pane_g1

0x765f,	// (0x00064edd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x765f,	// (0x00064edd) hc_cl_list_double_graphic_heading_pane_g2

0x7673,	// (0x00064ef1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7673,	// (0x00064ef1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0006d32c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0006d32c) hc_cl_list_double_graphic_heading_pane_g

0x7687,	// (0x00064f05) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7687,	// (0x00064f05) hc_cl_list_double_graphic_heading_pane_t1

0x769c,	// (0x00064f1a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x769c,	// (0x00064f1a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0006d333) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0006d333) hc_cl_list_double_graphic_heading_pane_t

0x76b9,	// (0x00064f37) vid4_progress_pane_g1

0x76cb,	// (0x00064f49) vid4_progress_pane_g2

0x3db9,	// (0x00061637) vid4_progress_pane_g3

0x76dd,	// (0x00064f5b) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0006d338) vid4_progress_pane_g

0x76fb,	// (0x00064f79) vid4_progress_pane_t1

0x7710,	// (0x00064f8e) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0006d343) vid4_progress_pane_t

0x773b,	// (0x00064fb9) wait_bar_pane_cp07

0xca9e,	// (0x0006a31c) blid_firmament_pane_ParamLimits

0xcae1,	// (0x0006a35f) popup_blid_sat_info2_window_g1

0xcb05,	// (0x0006a383) popup_blid_sat_info2_window_t3

0xcb13,	// (0x0006a391) popup_blid_sat_info2_window_t4

0xcb21,	// (0x0006a39f) popup_blid_sat_info2_window_t5

0xcb2f,	// (0x0006a3ad) popup_blid_sat_info2_window_t6

0xcb3f,	// (0x0006a3bd) popup_blid_sat_info2_window_t7

0xcb4d,	// (0x0006a3cb) popup_blid_sat_info2_window_t8

0xcb5b,	// (0x0006a3d9) popup_blid_sat_info2_window_t9

0xcb69,	// (0x0006a3e7) popup_blid_sat_info2_window_t10

0xcc31,	// (0x0006a4af) aid_firma_cardinal_ParamLimits

0xcc45,	// (0x0006a4c3) blid_firmament_pane_t1_ParamLimits

0xcc5c,	// (0x0006a4da) blid_firmament_pane_t2_ParamLimits

0xcc73,	// (0x0006a4f1) blid_firmament_pane_t3_ParamLimits

0xcc8a,	// (0x0006a508) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0006cf56) blid_firmament_pane_t_ParamLimits

0xcca1,	// (0x0006a51f) blid_sat_info_pane_ParamLimits

0xa348,	// (0x00067bc6) main_cam_set_pane_ParamLimits

0x5a10,	// (0x0006328e) aid_size_cell_colour_35_ParamLimits

0x5a2a,	// (0x000632a8) aid_size_cell_colour_112_ParamLimits

0x5a41,	// (0x000632bf) aid_size_cell_effect_ParamLimits

0xa348,	// (0x00067bc6) bg_tb_trans_pane_cp02_ParamLimits

0xb3cc,	// (0x00068c4a) heading_imed_pane_ParamLimits

0x5a5b,	// (0x000632d9) listscroll_imed_pane_ParamLimits

0xbe82,	// (0x00069700) popup_call2_audio_first_window_g5_ParamLimits

0xbe82,	// (0x00069700) popup_call2_audio_first_window_g5

0x616d,	// (0x000639eb) aid_size_touch_image3_arrow_left_ParamLimits

0x616d,	// (0x000639eb) aid_size_touch_image3_arrow_left

0x6183,	// (0x00063a01) aid_size_touch_image3_arrow_right_ParamLimits

0x6183,	// (0x00063a01) aid_size_touch_image3_arrow_right

0x7726,	// (0x00064fa4) vid4_progress_pane_t3

0x5d09,	// (0x00063587) main_hwr_training_symbol_option_pane_ParamLimits

0x5d09,	// (0x00063587) main_hwr_training_symbol_option_pane

0xd47d,	// (0x0006acfb) popup_hwr_training_preview_window_ParamLimits

0xd47d,	// (0x0006acfb) popup_hwr_training_preview_window

0x5d6a,	// (0x000635e8) hwr_training_navi_pane_g5_ParamLimits

0x5d6a,	// (0x000635e8) hwr_training_navi_pane_g5

0xd687,	// (0x0006af05) popup_char_count_window

0x704a,	// (0x000648c8) bg_popup_sub_pane_cp20_ParamLimits

0x7058,	// (0x000648d6) list_vitu2_match_list_pane_ParamLimits

0x7064,	// (0x000648e2) vitu2_page_scroll_pane_ParamLimits

0x7064,	// (0x000648e2) vitu2_page_scroll_pane

0xdba9,	// (0x0006b427) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdba9,	// (0x0006b427) list_single_hwr_training_symbol_option_pane

0xdbbc,	// (0x0006b43a) list_single_hwr_training_symbol_option_pane_g1

0xdbc4,	// (0x0006b442) list_single_hwr_training_symbol_option_pane_t1

0xdbd2,	// (0x0006b450) bg_button_pane_cp023

0xdbdb,	// (0x0006b459) bg_button_pane_cp024

0x7787,	// (0x00065005) vitu2_page_scroll_pane_g1

0x778f,	// (0x0006500d) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0006d34a) vitu2_page_scroll_pane_g

0x7799,	// (0x00065017) vitu2_page_scroll_pane_t1

0xc9fe,	// (0x0006a27c) popup_char_count_window_g1

0xdc0e,	// (0x0006b48c) popup_char_count_window_g2

0xdc17,	// (0x0006b495) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0006d34f) popup_char_count_window_g

0xdc20,	// (0x0006b49e) popup_char_count_window_t1

0x9cb1,	// (0x0006752f) main_vded2_pane

0xd17a,	// (0x0006a9f8) aid_size_cell_imed_line

0xd184,	// (0x0006aa02) grid_imed_line_width_pane

0x6630,	// (0x00063eae) vid4_indicators_pane_g4

0xdc2e,	// (0x0006b4ac) cell_imed_line_width_pane_ParamLimits

0xdc2e,	// (0x0006b4ac) cell_imed_line_width_pane

0xdc44,	// (0x0006b4c2) cell_imed_line_width_pane_g1

0xdb25,	// (0x0006b3a3) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0006d356) cell_imed_line_width_pane_g

0x77a8,	// (0x00065026) main_vded2_pane_g1_ParamLimits

0x77a8,	// (0x00065026) main_vded2_pane_g1

0x77b7,	// (0x00065035) main_vded2_pane_g2_ParamLimits

0x77b7,	// (0x00065035) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0006d35b) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0006d35b) main_vded2_pane_g

0x77c5,	// (0x00065043) vded2_slider_pane_ParamLimits

0x77c5,	// (0x00065043) vded2_slider_pane

0x77d2,	// (0x00065050) aid_size_touch_vded2_end

0x77dc,	// (0x0006505a) aid_size_touch_vded2_playhead

0xdc4d,	// (0x0006b4cb) aid_size_touch_vded2_start

0xdc55,	// (0x0006b4d3) vded2_slider_bg_pane

0xdc5e,	// (0x0006b4dc) vded2_slider_pane_g1

0xdc67,	// (0x0006b4e5) vded2_slider_pane_g2

0x77e4,	// (0x00065062) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0006d360) vded2_slider_pane_g

0xdb2d,	// (0x0006b3ab) vded2_slider_bg_pane_g1

0xdb36,	// (0x0006b3b4) vded2_slider_bg_pane_g2

0xdb3f,	// (0x0006b3bd) vded2_slider_bg_pane_g3

0x0002,

0xf7a8,	// (0x0006d026) vded2_slider_bg_pane_g

0x3dd1,	// (0x0006164f) aid_postcard_touch_down_pane_ParamLimits

0x3dd1,	// (0x0006164f) aid_postcard_touch_down_pane

0x3de1,	// (0x0006165f) aid_postcard_touch_up_pane_ParamLimits

0x3de1,	// (0x0006165f) aid_postcard_touch_up_pane

0x9cb1,	// (0x0006752f) main_blid2_pane

0xc86e,	// (0x0006a0ec) popup_blid2_search_window

0x9cb1,	// (0x0006752f) blid2_gps_pane

0x9cb1,	// (0x0006752f) blid2_navig_pane

0x9cb1,	// (0x0006752f) blid2_search_pane

0x9cb1,	// (0x0006752f) blid2_tripm_pane

0x77ed,	// (0x0006506b) blid2_search_pane_g1_ParamLimits

0x77ed,	// (0x0006506b) blid2_search_pane_g1

0x77f9,	// (0x00065077) blid2_search_pane_t1_ParamLimits

0x77f9,	// (0x00065077) blid2_search_pane_t1

0x780b,	// (0x00065089) aid_size_cell_blid2_gps_ParamLimits

0x780b,	// (0x00065089) aid_size_cell_blid2_gps

0x781b,	// (0x00065099) blid2_gps_pane_g1_ParamLimits

0x781b,	// (0x00065099) blid2_gps_pane_g1

0x7827,	// (0x000650a5) grid_blid2_satellite_pane_ParamLimits

0x7827,	// (0x000650a5) grid_blid2_satellite_pane

0x7835,	// (0x000650b3) blid2_navig_pane_g1_ParamLimits

0x7835,	// (0x000650b3) blid2_navig_pane_g1

0x7841,	// (0x000650bf) blid2_navig_pane_t1_ParamLimits

0x7841,	// (0x000650bf) blid2_navig_pane_t1

0x7853,	// (0x000650d1) blid2_navig_pane_t2_ParamLimits

0x7853,	// (0x000650d1) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0006d367) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0006d367) blid2_navig_pane_t

0x7865,	// (0x000650e3) blid2_navig_ring_pane_ParamLimits

0x7865,	// (0x000650e3) blid2_navig_ring_pane

0x7875,	// (0x000650f3) blid2_speed_pane_ParamLimits

0x7875,	// (0x000650f3) blid2_speed_pane

0x7881,	// (0x000650ff) blid2_tripm_pane_g1_ParamLimits

0x7881,	// (0x000650ff) blid2_tripm_pane_g1

0x7891,	// (0x0006510f) blid2_tripm_pane_g2_ParamLimits

0x7891,	// (0x0006510f) blid2_tripm_pane_g2

0x789d,	// (0x0006511b) blid2_tripm_pane_g3_ParamLimits

0x789d,	// (0x0006511b) blid2_tripm_pane_g3

0x78a9,	// (0x00065127) blid2_tripm_pane_g4_ParamLimits

0x78a9,	// (0x00065127) blid2_tripm_pane_g4

0x78b5,	// (0x00065133) blid2_tripm_pane_g5_ParamLimits

0x78b5,	// (0x00065133) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0006d36c) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0006d36c) blid2_tripm_pane_g

0x78d1,	// (0x0006514f) blid2_tripm_pane_t1_ParamLimits

0x78d1,	// (0x0006514f) blid2_tripm_pane_t1

0x78e3,	// (0x00065161) blid2_tripm_pane_t2_ParamLimits

0x78e3,	// (0x00065161) blid2_tripm_pane_t2

0x78f5,	// (0x00065173) blid2_tripm_pane_t3_ParamLimits

0x78f5,	// (0x00065173) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0006d379) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0006d379) blid2_tripm_pane_t

0x7927,	// (0x000651a5) cell_blid2_satellite_pane_ParamLimits

0x7927,	// (0x000651a5) cell_blid2_satellite_pane

0x7945,	// (0x000651c3) cell_blid2_satellite_pane_g1

0xdc6f,	// (0x0006b4ed) cell_blid2_satellite_pane_t1

0xccb1,	// (0x0006a52f) blid2_speed_pane_g1

0xdc7d,	// (0x0006b4fb) blid2_speed_pane_t1

0xdc8b,	// (0x0006b509) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0006d382) blid2_speed_pane_t

0xccb1,	// (0x0006a52f) blid2_navig_ring_pane_g1

0x794e,	// (0x000651cc) blid2_navig_ring_pane_g2

0x7956,	// (0x000651d4) blid2_navig_ring_pane_g3

0x795e,	// (0x000651dc) blid2_navig_ring_pane_g4

0x7966,	// (0x000651e4) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0006d387) blid2_navig_ring_pane_g

0x9cb1,	// (0x0006752f) bg_popup_window_pane_cp011

0xdc99,	// (0x0006b517) popup_blid2_search_window_g1

0xdca1,	// (0x0006b51f) popup_blid2_search_window_t1

0xdcaf,	// (0x0006b52d) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0006d392) popup_blid2_search_window_t

0xabdb,	// (0x00068459) main_browser_pane_g1

0xa8c3,	// (0x00068141) main_browser_pane_ParamLimits

0x65db,	// (0x00063e59) bg_button_pane_cp011_ParamLimits

0x68e5,	// (0x00064163) cell_vitu2_function_pane_g1_ParamLimits

0xc860,	// (0x0006a0de) bg_popup_sub_pane_cp22_ParamLimits

0x7244,	// (0x00064ac2) input_focus_pane_cp08_ParamLimits

0x725b,	// (0x00064ad9) popup_vitu2_query_button_pane_ParamLimits

0x725b,	// (0x00064ad9) popup_vitu2_query_button_pane

0x726c,	// (0x00064aea) popup_vitu2_query_input_button_pane

0xd8fe,	// (0x0006b17c) popup_vitu2_query_window_g1_ParamLimits

0x7276,	// (0x00064af4) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0006d29a) popup_vitu2_query_window_g_ParamLimits

0x9cb1,	// (0x0006752f) bg_button_pane_cp026

0x796e,	// (0x000651ec) popup_vitu2_query_input_button_pane_g1

0x9cb1,	// (0x0006752f) bg_button_pane_cp025

0xdcbd,	// (0x0006b53b) popup_vitu2_query_button_pane_t1

0x4f6a,	// (0x000627e8) main_mp3_pane_t6

0x4f7a,	// (0x000627f8) popup_slider_window_cp01

0x64fd,	// (0x00063d7b) cam4_battery_pane

0x65e9,	// (0x00063e67) cam4_battery_pane_cp02

0x76b1,	// (0x00064f2f) cam4_battery_pane_cp01

0x76b1,	// (0x00064f2f) cam4_battery_pane_cp03

0xdb48,	// (0x0006b3c6) cam4_battery_pane_g1

0xccb1,	// (0x0006a52f) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0006d397) cam4_battery_pane_g

0xcb77,	// (0x0006a3f5) popup_blid_sat_info2_window_t11

0x3673,	// (0x00060ef1) aid_size_touch_mv_arrow_left_ParamLimits

0x369e,	// (0x00060f1c) aid_size_touch_mv_arrow_right_ParamLimits

0xb386,	// (0x00068c04) navi_pane_g1_ParamLimits

0x36dd,	// (0x00060f5b) navi_pane_g2_ParamLimits

0x370b,	// (0x00060f89) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0006cc68) navi_pane_g_ParamLimits

0x3765,	// (0x00060fe3) navi_pane_mv_t1_ParamLimits

0x5a67,	// (0x000632e5) grid_imed_effect_pane_ParamLimits

0x208e,	// (0x0005f90c) aid_placing_vt_slider_lsc

0xab26,	// (0x000683a4) aid_placing_vt_slider_prt

0xa348,	// (0x00067bc6) bg_tb_trans_pane_cp01_ParamLimits

0xce01,	// (0x0006a67f) popup_image_details_window_g1_ParamLimits

0xce14,	// (0x0006a692) popup_image_details_window_g2_ParamLimits

0xce29,	// (0x0006a6a7) popup_image_details_window_g3_ParamLimits

0xce29,	// (0x0006a6a7) popup_image_details_window_g3

0xf71d,	// (0x0006cf9b) popup_image_details_window_g_ParamLimits

0xce3d,	// (0x0006a6bb) popup_image_details_window_t1_ParamLimits

0xce4f,	// (0x0006a6cd) popup_image_details_window_t2_ParamLimits

0xce68,	// (0x0006a6e6) popup_image_details_window_t3_ParamLimits

0xce7c,	// (0x0006a6fa) popup_image_details_window_t4_ParamLimits

0xce97,	// (0x0006a715) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0006cfa2) popup_image_details_window_t_ParamLimits

0x75dd,	// (0x00064e5b) cl_header_name_pane_ParamLimits

0x75dd,	// (0x00064e5b) cl_header_name_pane

0x7976,	// (0x000651f4) cl_header_name_pane_t1_ParamLimits

0x7976,	// (0x000651f4) cl_header_name_pane_t1

0x798d,	// (0x0006520b) cl_header_name_pane_t2_ParamLimits

0x798d,	// (0x0006520b) cl_header_name_pane_t2

0x79b7,	// (0x00065235) cl_header_name_pane_t3_ParamLimits

0x79b7,	// (0x00065235) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0006d39c) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0006d39c) cl_header_name_pane_t

0x3736,	// (0x00060fb4) navi_pane_mv_g2_ParamLimits

0xd661,	// (0x0006aedf) field_vitu2_entry_pane_g1_ParamLimits

0xd66d,	// (0x0006aeeb) field_vitu2_entry_pane_g2_ParamLimits

0xd679,	// (0x0006aef7) field_vitu2_entry_pane_g3_ParamLimits

0xd679,	// (0x0006aef7) field_vitu2_entry_pane_g3

0xf91b,	// (0x0006d199) field_vitu2_entry_pane_g_ParamLimits

0x6870,	// (0x000640ee) cell_vitu2_itu_pane_g1_ParamLimits

0x6880,	// (0x000640fe) cell_vitu2_itu_pane_g2_ParamLimits

0x6880,	// (0x000640fe) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0006d1a5) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0006d1a5) cell_vitu2_itu_pane_g

0x65db,	// (0x00063e59) bg_vkb2_func_pane_cp05_ParamLimits

0x65db,	// (0x00063e59) bg_vkb2_func_pane_cp05

0x65db,	// (0x00063e59) bg_vkb2_func_pane_cp03

0x65db,	// (0x00063e59) bg_vkb2_func_pane_cp04

0x65db,	// (0x00063e59) bg_vkb2_func_pane_cp10_ParamLimits

0x65db,	// (0x00063e59) bg_vkb2_func_pane_cp10

0x757f,	// (0x00064dfd) bg_vkb2_func_pane_cp08

0x7565,	// (0x00064de3) bg_vkb2_func_pane_cp06

0x7573,	// (0x00064df1) bg_vkb2_func_pane_cp07

0xdbe4,	// (0x0006b462) bg_vkb2_func_pane_cp11_ParamLimits

0xdbe4,	// (0x0006b462) bg_vkb2_func_pane_cp11

0xdbf9,	// (0x0006b477) bg_vkb2_func_pane_cp12_ParamLimits

0xdbf9,	// (0x0006b477) bg_vkb2_func_pane_cp12

0x9cb1,	// (0x0006752f) bg_vkb2_func_pane_cp09

0xd699,	// (0x0006af17) bg_vkb2_func_pane_g1

0xacec,	// (0x0006856a) bg_vkb2_func_pane_g2

0xd6a1,	// (0x0006af1f) bg_vkb2_func_pane_g3

0xd6a9,	// (0x0006af27) bg_vkb2_func_pane_g4

0xd8c3,	// (0x0006b141) bg_vkb2_func_pane_g5

0xd6c1,	// (0x0006af3f) bg_vkb2_func_pane_g6

0xd6c9,	// (0x0006af47) bg_vkb2_func_pane_g7

0xd6b9,	// (0x0006af37) bg_vkb2_func_pane_g8

0xaccc,	// (0x0006854a) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0006d3a3) bg_vkb2_func_pane_g

0x78c3,	// (0x00065141) blid2_tripm_pane_g6_ParamLimits

0x78c3,	// (0x00065141) blid2_tripm_pane_g6

0xd535,	// (0x0006adb3) mp4_progress_pane_g1

0x791b,	// (0x00065199) blid2_tripm_values_pane_ParamLimits

0x791b,	// (0x00065199) blid2_tripm_values_pane

0x79dc,	// (0x0006525a) blid2_tripm_values_pane_t1

0x79ea,	// (0x00065268) blid2_tripm_values_pane_t2

0x79f8,	// (0x00065276) blid2_tripm_values_pane_t3

0x7a06,	// (0x00065284) blid2_tripm_values_pane_t4

0x7a14,	// (0x00065292) blid2_tripm_values_pane_t5

0x7a22,	// (0x000652a0) blid2_tripm_values_pane_t6

0x7a30,	// (0x000652ae) blid2_tripm_values_pane_t7

0x7a3e,	// (0x000652bc) blid2_tripm_values_pane_t8

0x7a4c,	// (0x000652ca) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0006d3b6) blid2_tripm_values_pane_t

0x20cc,	// (0x0005f94a) call_video_pane_t1_ParamLimits

0x20e9,	// (0x0005f967) call_video_pane_t2_ParamLimits

0xf273,	// (0x0006caf1) call_video_pane_t_ParamLimits

0x3cdc,	// (0x0006155a) msg_header_pane_g1_ParamLimits

0xb5b4,	// (0x00068e32) msg_header_pane_g2_ParamLimits

0xb5b4,	// (0x00068e32) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0006cd0b) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0006cd0b) msg_header_pane_g

0xa8c3,	// (0x00068141) main_clock2_pane_ParamLimits

0x57f6,	// (0x00063074) grid_clock2_toolbar_pane_ParamLimits

0x57f6,	// (0x00063074) grid_clock2_toolbar_pane

0x57f6,	// (0x00063074) listscroll_clock2_pane_ParamLimits

0x57f6,	// (0x00063074) listscroll_clock2_pane

0x589e,	// (0x0006311c) main_clock2_pane_t3_ParamLimits

0x589e,	// (0x0006311c) main_clock2_pane_t3

0x58b0,	// (0x0006312e) main_clock2_pane_t4_ParamLimits

0x58b0,	// (0x0006312e) main_clock2_pane_t4

0xdccb,	// (0x0006b549) cell_clock2_toolbar_pane

0xdcd3,	// (0x0006b551) cell_clock2_toolbar_pane_cp01

0xdcd3,	// (0x0006b551) cell_clock2_toolbar_pane_cp02

0xdcdb,	// (0x0006b559) cell_clock2_toolbar_pane_cp03

0xdce3,	// (0x0006b561) list_clock2_pane

0xb2ec,	// (0x00068b6a) scroll_pane_cp10

0xdceb,	// (0x0006b569) list_single_clock2_pane_ParamLimits

0xdceb,	// (0x0006b569) list_single_clock2_pane

0xb440,	// (0x00068cbe) list_highlight_pane_cp08

0xdcf8,	// (0x0006b576) list_single_clock2_pane_t1

0xdd06,	// (0x0006b584) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0006d3c9) list_single_clock2_pane_t

0x9cb1,	// (0x0006752f) bg_button_pane_cp10

0xdd14,	// (0x0006b592) cell_clock2_toolbar_pane_g1

0x3d33,	// (0x000615b1) aid_main_viewer_pane_g1_ParamLimits

0x3d33,	// (0x000615b1) aid_main_viewer_pane_g1

0x3d3f,	// (0x000615bd) aid_main_viewer_pane_g2_ParamLimits

0x3d3f,	// (0x000615bd) aid_main_viewer_pane_g2

0x3d4b,	// (0x000615c9) aid_main_viewer_pane_g3_ParamLimits

0x3d4b,	// (0x000615c9) aid_main_viewer_pane_g3

0x3d5c,	// (0x000615da) aid_main_viewer_pane_g4_ParamLimits

0x3d5c,	// (0x000615da) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0006cd1c) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0006cd1c) aid_main_viewer_pane_g

0x44e6,	// (0x00061d64) main_calc_pane_ParamLimits

0x44f3,	// (0x00061d71) main_dialer2_pane_ParamLimits

0x9cb1,	// (0x0006752f) main_cam6_pane

0x9cb1,	// (0x0006752f) main_vid6_pane

0x5802,	// (0x00063080) listscroll_gen_pane_cp06_ParamLimits

0x5802,	// (0x00063080) listscroll_gen_pane_cp06

0x58c2,	// (0x00063140) main_clock2_pane_t5_ParamLimits

0x58c2,	// (0x00063140) main_clock2_pane_t5

0x5911,	// (0x0006318f) aid_call2_pane_cp10_ParamLimits

0x5923,	// (0x000631a1) aid_call_pane_cp10_ParamLimits

0xb35b,	// (0x00068bd9) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb35b,	// (0x00068bd9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5935,	// (0x000631b3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5935,	// (0x000631b3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb35b,	// (0x00068bd9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0006d052) popup_clock_analogue_window_cp10_g_ParamLimits

0x5947,	// (0x000631c5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x611a,	// (0x00063998) cell_dialer2_keypad_pane_g2_ParamLimits

0x611a,	// (0x00063998) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0006d138) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0006d138) cell_dialer2_keypad_pane_g

0x6136,	// (0x000639b4) cell_dialer2_keypad_pane_t1

0x6bc2,	// (0x00064440) main_cset_text2_pane_ParamLimits

0x6bc2,	// (0x00064440) main_cset_text2_pane

0xdaea,	// (0x0006b368) area_vitu2_query_pane_g1_ParamLimits

0x7504,	// (0x00064d82) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0006d2ed) area_vitu2_query_pane_g_ParamLimits

0xa3f7,	// (0x00067c75) area_vitu2_query_pane_t7_ParamLimits

0xa3f7,	// (0x00067c75) area_vitu2_query_pane_t7

0x7565,	// (0x00064de3) bg_button_pane_cp018_ParamLimits

0x7573,	// (0x00064df1) bg_button_pane_cp021_ParamLimits

0x757f,	// (0x00064dfd) bg_button_pane_cp022_ParamLimits

0x757f,	// (0x00064dfd) bg_vkb2_func_pane_cp08_ParamLimits

0x7565,	// (0x00064de3) bg_vkb2_func_pane_cp06_ParamLimits

0x7573,	// (0x00064df1) bg_vkb2_func_pane_cp07_ParamLimits

0x7590,	// (0x00064e0e) input_focus_pane_cp09_ParamLimits

0x7a5a,	// (0x000652d8) cam6_autofocus_pane_ParamLimits

0x7a5a,	// (0x000652d8) cam6_autofocus_pane

0x7a7c,	// (0x000652fa) cam6_image_uncrop_pane_ParamLimits

0x7a7c,	// (0x000652fa) cam6_image_uncrop_pane

0x7aa9,	// (0x00065327) cam6_indi_pane_ParamLimits

0x7aa9,	// (0x00065327) cam6_indi_pane

0x7ac3,	// (0x00065341) cam6_mode_pane_ParamLimits

0x7ac3,	// (0x00065341) cam6_mode_pane

0x7ad7,	// (0x00065355) cam6_timer_pane_ParamLimits

0x7ad7,	// (0x00065355) cam6_timer_pane

0x7ae3,	// (0x00065361) cam6_zoom_pane_ParamLimits

0x7ae3,	// (0x00065361) cam6_zoom_pane

0x7aff,	// (0x0006537d) cam6_mode_pane_g1_ParamLimits

0x7aff,	// (0x0006537d) cam6_mode_pane_g1

0x7b0b,	// (0x00065389) cam6_mode_pane_g2_ParamLimits

0x7b0b,	// (0x00065389) cam6_mode_pane_g2

0x7b17,	// (0x00065395) cam6_mode_pane_g3_ParamLimits

0x7b17,	// (0x00065395) cam6_mode_pane_g3

0x7b23,	// (0x000653a1) cam6_mode_pane_g4_ParamLimits

0x7b23,	// (0x000653a1) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0006d3ce) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0006d3ce) cam6_mode_pane_g

0xdb52,	// (0x0006b3d0) bg_tb_trans_pane_cp08_ParamLimits

0xdb52,	// (0x0006b3d0) bg_tb_trans_pane_cp08

0xdd1c,	// (0x0006b59a) cam6_battery_pane_ParamLimits

0xdd1c,	// (0x0006b59a) cam6_battery_pane

0xdd32,	// (0x0006b5b0) cam6_indi_pane_g1_ParamLimits

0xdd32,	// (0x0006b5b0) cam6_indi_pane_g1

0xdd44,	// (0x0006b5c2) cam6_indi_pane_g2_ParamLimits

0xdd44,	// (0x0006b5c2) cam6_indi_pane_g2

0xdd56,	// (0x0006b5d4) cam6_indi_pane_g3_ParamLimits

0xdd56,	// (0x0006b5d4) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0006d3d7) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0006d3d7) cam6_indi_pane_g

0xdd68,	// (0x0006b5e6) cam6_indi_pane_t1_ParamLimits

0xdd68,	// (0x0006b5e6) cam6_indi_pane_t1

0x666d,	// (0x00063eeb) cam6_autofocus_pane_g1

0x6665,	// (0x00063ee3) cam6_autofocus_pane_g2

0x667d,	// (0x00063efb) cam6_autofocus_pane_g3

0x6675,	// (0x00063ef3) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0006d3de) cam6_autofocus_pane_g

0xdd8e,	// (0x0006b60c) cam6_timer_pane_g1

0xdd96,	// (0x0006b614) cam6_timer_pane_t1

0xdda4,	// (0x0006b622) cam6_zoom_cont_pane

0xddac,	// (0x0006b62a) cam6_zoom_pane_g1

0xddb4,	// (0x0006b632) cam6_zoom_pane_g2

0x7b2f,	// (0x000653ad) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0006d3e7) cam6_zoom_pane_g

0xccb1,	// (0x0006a52f) cam6_battery_pane_g1

0xccb1,	// (0x0006a52f) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0006cf5f) cam6_battery_pane_g

0xddbc,	// (0x0006b63a) cam6_zoom_cont_pane_g1

0xddc5,	// (0x0006b643) cam6_zoom_cont_pane_g2

0xddce,	// (0x0006b64c) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0006d3ee) cam6_zoom_cont_pane_g

0x7b4c,	// (0x000653ca) cam6_mode_pane_cp_ParamLimits

0x7b4c,	// (0x000653ca) cam6_mode_pane_cp

0x7b60,	// (0x000653de) cam6_zoom_pane_cp_ParamLimits

0x7b60,	// (0x000653de) cam6_zoom_pane_cp

0x7b7c,	// (0x000653fa) vid6_image_uncrop_cif_pane_ParamLimits

0x7b7c,	// (0x000653fa) vid6_image_uncrop_cif_pane

0x7ba8,	// (0x00065426) vid6_image_uncrop_nhd_pane_ParamLimits

0x7ba8,	// (0x00065426) vid6_image_uncrop_nhd_pane

0x7bc7,	// (0x00065445) vid6_image_uncrop_vga_pane_ParamLimits

0x7bc7,	// (0x00065445) vid6_image_uncrop_vga_pane

0x7be6,	// (0x00065464) vid6_image_uncrop_wvga_pane_ParamLimits

0x7be6,	// (0x00065464) vid6_image_uncrop_wvga_pane

0x7c05,	// (0x00065483) vid6_indi_pane_ParamLimits

0x7c05,	// (0x00065483) vid6_indi_pane

0xdb52,	// (0x0006b3d0) bg_tb_trans_pane_cp09_ParamLimits

0xdb52,	// (0x0006b3d0) bg_tb_trans_pane_cp09

0xdde6,	// (0x0006b664) cam6_battery_pane_cp_ParamLimits

0xdde6,	// (0x0006b664) cam6_battery_pane_cp

0xddf2,	// (0x0006b670) vid6_indi_pane_g1_ParamLimits

0xddf2,	// (0x0006b670) vid6_indi_pane_g1

0xde04,	// (0x0006b682) vid6_indi_pane_g2_ParamLimits

0xde04,	// (0x0006b682) vid6_indi_pane_g2

0xde16,	// (0x0006b694) vid6_indi_pane_g3_ParamLimits

0xde16,	// (0x0006b694) vid6_indi_pane_g3

0xde2d,	// (0x0006b6ab) vid6_indi_pane_g4_ParamLimits

0xde2d,	// (0x0006b6ab) vid6_indi_pane_g4

0xde44,	// (0x0006b6c2) vid6_indi_pane_g5_ParamLimits

0xde44,	// (0x0006b6c2) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0006d3f5) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0006d3f5) vid6_indi_pane_g

0xde5e,	// (0x0006b6dc) vid6_indi_pane_t1_ParamLimits

0xde5e,	// (0x0006b6dc) vid6_indi_pane_t1

0xde74,	// (0x0006b6f2) vid6_indi_pane_t2_ParamLimits

0xde74,	// (0x0006b6f2) vid6_indi_pane_t2

0xde9c,	// (0x0006b71a) vid6_indi_pane_t3_ParamLimits

0xde9c,	// (0x0006b71a) vid6_indi_pane_t3

0xdec4,	// (0x0006b742) vid6_indi_pane_t4_ParamLimits

0xdec4,	// (0x0006b742) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0006d400) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0006d400) vid6_indi_pane_t

0xdee8,	// (0x0006b766) wait_bar_pane_cp08

0x7c2a,	// (0x000654a8) main_cset_text2_pane_t1_ParamLimits

0x7c2a,	// (0x000654a8) main_cset_text2_pane_t1

0x7b37,	// (0x000653b5) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b37,	// (0x000653b5) listscroll_gen_pane_cp06_t1

0x9cb1,	// (0x0006752f) main_cam6_set_pane

0x64ef,	// (0x00063d6d) bg_tb_trans_pane_cp06_ParamLimits

0x6505,	// (0x00063d83) cam4_indicators_pane_g1_ParamLimits

0x6516,	// (0x00063d94) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0006d175) cam4_indicators_pane_g_ParamLimits

0x652e,	// (0x00063dac) cam4_indicators_pane_t1_ParamLimits

0x65db,	// (0x00063e59) bg_tb_trans_pane_cp07_ParamLimits

0x65f3,	// (0x00063e71) vid4_indicators_pane_g1_ParamLimits

0x6609,	// (0x00063e87) vid4_indicators_pane_g2_ParamLimits

0x661d,	// (0x00063e9b) vid4_indicators_pane_g3_ParamLimits

0x6630,	// (0x00063eae) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0006d187) vid4_indicators_pane_g_ParamLimits

0x664e,	// (0x00063ecc) vid4_indicators_pane_t1_ParamLimits

0x76b9,	// (0x00064f37) vid4_progress_pane_g1_ParamLimits

0x76cb,	// (0x00064f49) vid4_progress_pane_g2_ParamLimits

0x3db9,	// (0x00061637) vid4_progress_pane_g3_ParamLimits

0x76dd,	// (0x00064f5b) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0006d338) vid4_progress_pane_g_ParamLimits

0x76fb,	// (0x00064f79) vid4_progress_pane_t1_ParamLimits

0x7710,	// (0x00064f8e) vid4_progress_pane_t2_ParamLimits

0x7726,	// (0x00064fa4) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0006d343) vid4_progress_pane_t_ParamLimits

0x773b,	// (0x00064fb9) wait_bar_pane_cp07_ParamLimits

0x7c51,	// (0x000654cf) main_cam6_set_pane_g2_ParamLimits

0x7c51,	// (0x000654cf) main_cam6_set_pane_g2

0x7c5d,	// (0x000654db) main_cset6_listscroll_pane_ParamLimits

0x7c5d,	// (0x000654db) main_cset6_listscroll_pane

0x7c8a,	// (0x00065508) main_cset6_slider_pane_ParamLimits

0x7c8a,	// (0x00065508) main_cset6_slider_pane

0x7c96,	// (0x00065514) main_cset6_text2_pane_ParamLimits

0x7c96,	// (0x00065514) main_cset6_text2_pane

0xdef7,	// (0x0006b775) main_cset6_text_pane

0xdeff,	// (0x0006b77d) main_cset_list_pane_copy1_ParamLimits

0xdeff,	// (0x0006b77d) main_cset_list_pane_copy1

0xdf0f,	// (0x0006b78d) scroll_pane_cp028_copy1

0x7ca9,	// (0x00065527) cset_list_set_pane_copy1

0x7cb9,	// (0x00065537) aid_position_infowindow_above_copy1

0x7cc1,	// (0x0006553f) aid_position_infowindow_below_copy1

0x7cc9,	// (0x00065547) cset_list_set_pane_g1_copy1

0x7cd1,	// (0x0006554f) cset_list_set_pane_g3_copy1_ParamLimits

0x7cd1,	// (0x0006554f) cset_list_set_pane_g3_copy1

0x7ce0,	// (0x0006555e) cset_list_set_pane_t1_copy1_ParamLimits

0x7ce0,	// (0x0006555e) cset_list_set_pane_t1_copy1

0xa348,	// (0x00067bc6) list_highlight_pane_cp021_copy1_ParamLimits

0xa348,	// (0x00067bc6) list_highlight_pane_cp021_copy1

0xdf18,	// (0x0006b796) cset6_slider_pane_ParamLimits

0xdf18,	// (0x0006b796) cset6_slider_pane

0xdf44,	// (0x0006b7c2) main_cset6_slider_pane_g1_ParamLimits

0xdf44,	// (0x0006b7c2) main_cset6_slider_pane_g1

0x7cf5,	// (0x00065573) main_cset6_slider_pane_g2_ParamLimits

0x7cf5,	// (0x00065573) main_cset6_slider_pane_g2

0xdf6c,	// (0x0006b7ea) main_cset6_slider_pane_g3_ParamLimits

0xdf6c,	// (0x0006b7ea) main_cset6_slider_pane_g3

0x7d1d,	// (0x0006559b) main_cset6_slider_pane_g4_ParamLimits

0x7d1d,	// (0x0006559b) main_cset6_slider_pane_g4

0x7d29,	// (0x000655a7) main_cset6_slider_pane_g5_ParamLimits

0x7d29,	// (0x000655a7) main_cset6_slider_pane_g5

0xd7cc,	// (0x0006b04a) main_cset6_slider_pane_g7_ParamLimits

0xd7cc,	// (0x0006b04a) main_cset6_slider_pane_g7

0xd7d8,	// (0x0006b056) main_cset6_slider_pane_g8_ParamLimits

0xd7d8,	// (0x0006b056) main_cset6_slider_pane_g8

0x7d35,	// (0x000655b3) main_cset6_slider_pane_g9_ParamLimits

0x7d35,	// (0x000655b3) main_cset6_slider_pane_g9

0x7d41,	// (0x000655bf) main_cset6_slider_pane_g10_ParamLimits

0x7d41,	// (0x000655bf) main_cset6_slider_pane_g10

0x7d4d,	// (0x000655cb) main_cset6_slider_pane_g11_ParamLimits

0x7d4d,	// (0x000655cb) main_cset6_slider_pane_g11

0x7d59,	// (0x000655d7) main_cset6_slider_pane_g12_ParamLimits

0x7d59,	// (0x000655d7) main_cset6_slider_pane_g12

0x7d65,	// (0x000655e3) main_cset6_slider_pane_g13_ParamLimits

0x7d65,	// (0x000655e3) main_cset6_slider_pane_g13

0x7d71,	// (0x000655ef) main_cset6_slider_pane_g14_ParamLimits

0x7d71,	// (0x000655ef) main_cset6_slider_pane_g14

0x7d7d,	// (0x000655fb) main_cset6_slider_pane_g15_ParamLimits

0x7d7d,	// (0x000655fb) main_cset6_slider_pane_g15

0x7d95,	// (0x00065613) main_cset6_slider_pane_g16_ParamLimits

0x7d95,	// (0x00065613) main_cset6_slider_pane_g16

0x7da1,	// (0x0006561f) main_cset6_slider_pane_g17_ParamLimits

0x7da1,	// (0x0006561f) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0006d409) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0006d409) main_cset6_slider_pane_g

0xdf78,	// (0x0006b7f6) main_cset6_slider_pane_t1_ParamLimits

0xdf78,	// (0x0006b7f6) main_cset6_slider_pane_t1

0x7dc5,	// (0x00065643) main_cset6_slider_pane_t2_ParamLimits

0x7dc5,	// (0x00065643) main_cset6_slider_pane_t2

0x7df0,	// (0x0006566e) main_cset6_slider_pane_t3_ParamLimits

0x7df0,	// (0x0006566e) main_cset6_slider_pane_t3

0x7e1b,	// (0x00065699) main_cset6_slider_pane_t4_ParamLimits

0x7e1b,	// (0x00065699) main_cset6_slider_pane_t4

0x7e46,	// (0x000656c4) main_cset6_slider_pane_t5_ParamLimits

0x7e46,	// (0x000656c4) main_cset6_slider_pane_t5

0xdfb9,	// (0x0006b837) main_cset6_slider_pane_t7_ParamLimits

0xdfb9,	// (0x0006b837) main_cset6_slider_pane_t7

0x7e71,	// (0x000656ef) main_cset6_slider_pane_t8_ParamLimits

0x7e71,	// (0x000656ef) main_cset6_slider_pane_t8

0x7e95,	// (0x00065713) main_cset6_slider_pane_t9_ParamLimits

0x7e95,	// (0x00065713) main_cset6_slider_pane_t9

0x7eb9,	// (0x00065737) main_cset6_slider_pane_t10_ParamLimits

0x7eb9,	// (0x00065737) main_cset6_slider_pane_t10

0x7edd,	// (0x0006575b) main_cset6_slider_pane_t11_ParamLimits

0x7edd,	// (0x0006575b) main_cset6_slider_pane_t11

0xdfef,	// (0x0006b86d) main_cset6_slider_pane_t14_ParamLimits

0xdfef,	// (0x0006b86d) main_cset6_slider_pane_t14

0xe028,	// (0x0006b8a6) main_cset6_slider_pane_t15_ParamLimits

0xe028,	// (0x0006b8a6) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0006d42e) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0006d42e) main_cset6_slider_pane_t

0xdafe,	// (0x0006b37c) cset_slider_pane_g1_copy1

0xdb07,	// (0x0006b385) cset_slider_pane_g2_copy1

0xdb10,	// (0x0006b38e) cset_slider_pane_g3_copy1

0x9cb1,	// (0x0006752f) bg_popup_sub_pane_cp011_copy1

0xe061,	// (0x0006b8df) main_cset_text_pane_g1_copy1

0xd912,	// (0x0006b190) main_cset_text_pane_t1_copy1

0xd920,	// (0x0006b19e) main_cset_text_pane_t2_copy1

0xd92e,	// (0x0006b1ac) main_cset_text_pane_t3_copy1

0xd93c,	// (0x0006b1ba) main_cset_text_pane_t4_copy1

0xd94a,	// (0x0006b1c8) main_cset_text_pane_t5_copy1

0xe069,	// (0x0006b8e7) main_cset_text_pane_t6_copy1

0xe077,	// (0x0006b8f5) main_cset_text_pane_t7_copy1

0x7fa6,	// (0x00065824) main_cset_text2_pane_t1_copy1

0xa348,	// (0x00067bc6) main_ncimui_pane

0x4538,	// (0x00061db6) popup_query_ncimui_window_ParamLimits

0x4538,	// (0x00061db6) popup_query_ncimui_window

0xa356,	// (0x00067bd4) field_cale_ev2_pane_g4_ParamLimits

0xa356,	// (0x00067bd4) field_cale_ev2_pane_g4

0x5e30,	// (0x000636ae) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e30,	// (0x000636ae) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0006d113) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0006d113) cell_video_dialer_keypad_pane_g

0x5e48,	// (0x000636c6) cell_video_dialer_keypad_pane_t1

0x9cb1,	// (0x0006752f) bg_popup_window_pane_cp012

0xb1d8,	// (0x00068a56) heading_pane_cp06

0xe0a3,	// (0x0006b921) ncim_query_content_pane

0x9cb1,	// (0x0006752f) bg_popup_heading_pane_cp01

0xe0ab,	// (0x0006b929) ncim_heading_pane_t1

0xe0b9,	// (0x0006b937) ncim_indicator_popup_pane

0xe0cb,	// (0x0006b949) ncim_query_button_pane

0xe0e1,	// (0x0006b95f) ncim_query_content_pane_t1

0xe0f3,	// (0x0006b971) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0006d472) ncim_query_content_pane_t

0xe12d,	// (0x0006b9ab) ncim_query_list_pane

0xe13f,	// (0x0006b9bd) ncim_query_popup_pane

0xe0b9,	// (0x0006b937) ncim_indicator_popup_pane_ParamLimits

0x8102,	// (0x00065980) ncim_query_content_pane_g1_ParamLimits

0x8102,	// (0x00065980) ncim_query_content_pane_g1

0xe0e1,	// (0x0006b95f) ncim_query_content_pane_t1_ParamLimits

0xe0f3,	// (0x0006b971) ncim_query_content_pane_t2_ParamLimits

0x810e,	// (0x0006598c) ncim_query_content_pane_t3_ParamLimits

0x810e,	// (0x0006598c) ncim_query_content_pane_t3

0x812b,	// (0x000659a9) ncim_query_content_pane_t4_ParamLimits

0x812b,	// (0x000659a9) ncim_query_content_pane_t4

0x8148,	// (0x000659c6) ncim_query_content_pane_t5_ParamLimits

0x8148,	// (0x000659c6) ncim_query_content_pane_t5

0xe105,	// (0x0006b983) ncim_query_content_pane_t6_ParamLimits

0xe105,	// (0x0006b983) ncim_query_content_pane_t6

0xfbf4,	// (0x0006d472) ncim_query_content_pane_t_ParamLimits

0xe12d,	// (0x0006b9ab) ncim_query_list_pane_ParamLimits

0xe13f,	// (0x0006b9bd) ncim_query_popup_pane_ParamLimits

0xe153,	// (0x0006b9d1) wait_bar_pane_cp04

0x9cb1,	// (0x0006752f) input_focus_pane_cp011

0xe15b,	// (0x0006b9d9) ncim_query_popup_pane_t1

0xe169,	// (0x0006b9e7) ncim_list_query_list_pane_ParamLimits

0xe169,	// (0x0006b9e7) ncim_list_query_list_pane

0x9cb1,	// (0x0006752f) bg_button_pane_cp027

0xe17c,	// (0x0006b9fa) ncim_query_button_pane_g1

0x9cb1,	// (0x0006752f) list_highlight_pane_cp012

0xe186,	// (0x0006ba04) ncim_list_query_list_pane_g1

0xe18e,	// (0x0006ba0c) ncim_list_query_list_pane_t1

0x6522,	// (0x00063da0) cam4_indicators_pane_g3_ParamLimits

0x6522,	// (0x00063da0) cam4_indicators_pane_g3

0x663c,	// (0x00063eba) vid4_indicators_pane_g5_ParamLimits

0x663c,	// (0x00063eba) vid4_indicators_pane_g5

0x76ec,	// (0x00064f6a) vid4_progress_pane_g5_ParamLimits

0x76ec,	// (0x00064f6a) vid4_progress_pane_g5

0x7fd8,	// (0x00065856) main_ncimui_pane_g1

0x8044,	// (0x000658c2) ncimui_group_query_pane_ParamLimits

0x8044,	// (0x000658c2) ncimui_group_query_pane

0x809e,	// (0x0006591c) ncimui_list_pane_ParamLimits

0x809e,	// (0x0006591c) ncimui_list_pane

0x80c5,	// (0x00065943) ncimui_text_pane_ParamLimits

0x80c5,	// (0x00065943) ncimui_text_pane

0x8165,	// (0x000659e3) ncimui_text_pane_t1_ParamLimits

0x8165,	// (0x000659e3) ncimui_text_pane_t1

0xe19c,	// (0x0006ba1a) ncimui_list_single_graphic_pane_ParamLimits

0xe19c,	// (0x0006ba1a) ncimui_list_single_graphic_pane

0x8184,	// (0x00065a02) ncimui_query_pane_ParamLimits

0x8184,	// (0x00065a02) ncimui_query_pane

0x9cb1,	// (0x0006752f) list_highlight_pane_cp013

0xe1ac,	// (0x0006ba2a) ncim_list_query_list_pane_t1_copy1

0xe186,	// (0x0006ba04) ncim_list_single_graphic_pane_g1

0xe1ba,	// (0x0006ba38) ncim_query_button_pane_cp01

0xe1c6,	// (0x0006ba44) ncim_query_entry_pane_ParamLimits

0xe1c6,	// (0x0006ba44) ncim_query_entry_pane

0xe1d9,	// (0x0006ba57) ncimui_query_pane_g1

0xe1e5,	// (0x0006ba63) ncimui_query_pane_t1_ParamLimits

0xe1e5,	// (0x0006ba63) ncimui_query_pane_t1

0xa348,	// (0x00067bc6) input_focus_pane_cp012

0xe1fe,	// (0x0006ba7c) ncim_query_entry_pane_t1

0xa8c3,	// (0x00068141) main_im_pane_ParamLimits

0xa348,	// (0x00067bc6) main_mobtv_pane_ParamLimits

0xa348,	// (0x00067bc6) main_mobtv_pane

0x7dad,	// (0x0006562b) main_cset6_slider_pane_g18_ParamLimits

0x7dad,	// (0x0006562b) main_cset6_slider_pane_g18

0x7db9,	// (0x00065637) main_cset6_slider_pane_g19_ParamLimits

0x7db9,	// (0x00065637) main_cset6_slider_pane_g19

0xd679,	// (0x0006aef7) bg_main_mobtv_pane_ParamLimits

0xd679,	// (0x0006aef7) bg_main_mobtv_pane

0x8197,	// (0x00065a15) main_mobtv_info_pane

0x81a2,	// (0x00065a20) main_mobtv_loading_pane_ParamLimits

0x81a2,	// (0x00065a20) main_mobtv_loading_pane

0xe210,	// (0x0006ba8e) main_mobtv_pg_channel_list_pane

0xe21a,	// (0x0006ba98) main_mobtv_pg_hdr_pane

0x81af,	// (0x00065a2d) main_mobtv_programe_curr_pane_ParamLimits

0x81af,	// (0x00065a2d) main_mobtv_programe_curr_pane

0x81bc,	// (0x00065a3a) main_mobtv_programe_next_pane_ParamLimits

0x81bc,	// (0x00065a3a) main_mobtv_programe_next_pane

0xe223,	// (0x0006baa1) popup_mobtv_noti_window

0xccb1,	// (0x0006a52f) main_tv_pg_hdr_pane_g1

0xe22d,	// (0x0006baab) main_tv_pg_hdr_pane_g2

0xe235,	// (0x0006bab3) main_tv_pg_hdr_pane_g3

0xe23d,	// (0x0006babb) main_tv_pg_hdr_pane_g4

0xe245,	// (0x0006bac3) main_tv_pg_hdr_pane_g5

0xe24f,	// (0x0006bacd) main_tv_pg_hdr_pane_g6

0xe259,	// (0x0006bad7) main_tv_pg_hdr_pane_g7

0xe263,	// (0x0006bae1) main_tv_pg_hdr_pane_g8

0xe26d,	// (0x0006baeb) main_tv_pg_hdr_pane_g9

0xe277,	// (0x0006baf5) main_tv_pg_hdr_pane_g10

0xe281,	// (0x0006baff) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0006d47f) main_tv_pg_hdr_pane_g

0xe28b,	// (0x0006bb09) main_tv_pg_hdr_pane_t1

0xe299,	// (0x0006bb17) main_tv_pg_hdr_pane_t2

0xe2a7,	// (0x0006bb25) main_tv_pg_hdr_pane_t3

0xe2b7,	// (0x0006bb35) main_tv_pg_hdr_pane_t4

0xe2c7,	// (0x0006bb45) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0006d496) main_tv_pg_hdr_pane_t

0xe2f2,	// (0x0006bb70) single_mobtv_pg_channel_pane_ParamLimits

0xe2f2,	// (0x0006bb70) single_mobtv_pg_channel_pane

0xe304,	// (0x0006bb82) single_mobtv_pg_channel_table_pane

0xe30d,	// (0x0006bb8b) single_mobtv_pg_channel_thumb_pane

0xe316,	// (0x0006bb94) single_tv_pg_channel_pane_g1

0xe31f,	// (0x0006bb9d) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0006d4a1) single_tv_pg_channel_pane_g

0xcee1,	// (0x0006a75f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcee1,	// (0x0006a75f) bg_single_mobtv_pg_channel_thumb_pane

0xe328,	// (0x0006bba6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe328,	// (0x0006bba6) single_mobtv_pg_channel_thumb_pane_g1

0xe336,	// (0x0006bbb4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe336,	// (0x0006bbb4) single_mobtv_pg_channel_thumb_pane_g2

0xe342,	// (0x0006bbc0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe342,	// (0x0006bbc0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0006d4a6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0006d4a6) single_mobtv_pg_channel_thumb_pane_g

0xe34e,	// (0x0006bbcc) single_mobtv_pg_channel_thumb_pane_t1

0xe35c,	// (0x0006bbda) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0006d4ad) single_mobtv_pg_channel_thumb_pane_t

0xccb1,	// (0x0006a52f) bg_single_mobtv_pg_channel_table_pane_g1

0xccb1,	// (0x0006a52f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0006cf5f) bg_single_mobtv_pg_channel_table_pane_g

0xe36a,	// (0x0006bbe8) single_mobtv_pg_channel_table_pane_t1

0xe378,	// (0x0006bbf6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0006d4b2) single_mobtv_pg_channel_table_pane_t

0x81d1,	// (0x00065a4f) main_mobtv_info_pane_g1_ParamLimits

0x81d1,	// (0x00065a4f) main_mobtv_info_pane_g1

0x81ed,	// (0x00065a6b) main_mobtv_info_pane_t1_ParamLimits

0x81ed,	// (0x00065a6b) main_mobtv_info_pane_t1

0x8265,	// (0x00065ae3) main_mobtv_info_pane_t2_ParamLimits

0x8265,	// (0x00065ae3) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0006d4bc) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0006d4bc) main_mobtv_info_pane_t

0x82f6,	// (0x00065b74) wait_bar_pane_cp05

0x8308,	// (0x00065b86) main_mobtv_loading_pane_g1_ParamLimits

0x8308,	// (0x00065b86) main_mobtv_loading_pane_g1

0x8314,	// (0x00065b92) main_mobtv_loading_pane_g2_ParamLimits

0x8314,	// (0x00065b92) main_mobtv_loading_pane_g2

0x8320,	// (0x00065b9e) main_mobtv_loading_pane_g3_ParamLimits

0x8320,	// (0x00065b9e) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0006d4c3) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0006d4c3) main_mobtv_loading_pane_g

0xe386,	// (0x0006bc04) main_mobtv_loading_pane_t1_ParamLimits

0xe386,	// (0x0006bc04) main_mobtv_loading_pane_t1

0xe39e,	// (0x0006bc1c) main_mobtv_loading_pane_t2_ParamLimits

0xe39e,	// (0x0006bc1c) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0006d4ca) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0006d4ca) main_mobtv_loading_pane_t

0x832e,	// (0x00065bac) wait_bar_pane_cp06_ParamLimits

0x832e,	// (0x00065bac) wait_bar_pane_cp06

0xe3c2,	// (0x0006bc40) main_mobtv_programe_curr_pane_t1

0xe3d0,	// (0x0006bc4e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0006d4cf) main_mobtv_programe_curr_pane_t

0xe3de,	// (0x0006bc5c) main_mobtv_programe_next_pane_t1

0xe3ec,	// (0x0006bc6a) main_mobtv_programe_next_pane_t2

0xe3fa,	// (0x0006bc78) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0006d4d4) main_mobtv_programe_next_pane_t

0x9cb1,	// (0x0006752f) bg_popup_mobtv_noti_window_pane

0xe408,	// (0x0006bc86) popup_mobtv_noti_window_g1

0xe410,	// (0x0006bc8e) popup_mobtv_noti_window_t1

0xe41e,	// (0x0006bc9c) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0006d4db) popup_mobtv_noti_window_t

0xccb1,	// (0x0006a52f) bg_popup_mobtv_noti_window_pane_g1

0x9cb1,	// (0x0006752f) sc_clock_pane

0x9cb1,	// (0x0006752f) main_fs_bigclock_pane

0x7909,	// (0x00065187) blid2_tripm_pane_t4_ParamLimits

0x7909,	// (0x00065187) blid2_tripm_pane_t4

0x833a,	// (0x00065bb8) sc_clock_pane_g1_ParamLimits

0x833a,	// (0x00065bb8) sc_clock_pane_g1

0x8348,	// (0x00065bc6) sc_clock_pane_t1_ParamLimits

0x8348,	// (0x00065bc6) sc_clock_pane_t1

0x835d,	// (0x00065bdb) sc_clock_pane_t2_ParamLimits

0x835d,	// (0x00065bdb) sc_clock_pane_t2

0x836f,	// (0x00065bed) sc_clock_pane_t3_ParamLimits

0x836f,	// (0x00065bed) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0006d4e0) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0006d4e0) sc_clock_pane_t

0x92af,	// (0x00066b2d) main_fs_bigclock_indicator_pane_ParamLimits

0x92af,	// (0x00066b2d) main_fs_bigclock_indicator_pane

0x83fc,	// (0x00065c7a) main_fs_bigclock_pane_g1_ParamLimits

0x83fc,	// (0x00065c7a) main_fs_bigclock_pane_g1

0x92bb,	// (0x00066b39) main_fs_bigclock_pane_t1_ParamLimits

0x92bb,	// (0x00066b39) main_fs_bigclock_pane_t1

0x92cd,	// (0x00066b4b) main_fs_bigclock_pane_t2_ParamLimits

0x92cd,	// (0x00066b4b) main_fs_bigclock_pane_t2

0x92e1,	// (0x00066b5f) main_fs_bigclock_pane_t3_ParamLimits

0x92e1,	// (0x00066b5f) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0006d6ea) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0006d6ea) main_fs_bigclock_pane_t

0xec6b,	// (0x0006c4e9) main_fs_bigclock_indicator_pane_g1

0xe0d3,	// (0x0006b951) ncim_query_content_pane_g2_ParamLimits

0xe0d3,	// (0x0006b951) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0006d46d) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0006d46d) ncim_query_content_pane_g

0x8381,	// (0x00065bff) sc_clock_pane_t4_ParamLimits

0x8381,	// (0x00065bff) sc_clock_pane_t4

0xa348,	// (0x00067bc6) main_radioblah_pane

0xd5e4,	// (0x0006ae62) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5e4,	// (0x0006ae62) cell_call4_button_pane_t1_copy1

0x7ff4,	// (0x00065872) main_ncimui_pane_t1_ParamLimits

0x7ff4,	// (0x00065872) main_ncimui_pane_t1

0x800e,	// (0x0006588c) main_ncimui_pane_t2_ParamLimits

0x800e,	// (0x0006588c) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0006d466) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0006d466) main_ncimui_pane_t

0xe56a,	// (0x0006bde8) main_radioblah_anim_pane_ParamLimits

0xe56a,	// (0x0006bde8) main_radioblah_anim_pane

0xe57b,	// (0x0006bdf9) main_radioblah_info_pane_ParamLimits

0xe57b,	// (0x0006bdf9) main_radioblah_info_pane

0xe58f,	// (0x0006be0d) main_radioblah_pane_t1_ParamLimits

0xe58f,	// (0x0006be0d) main_radioblah_pane_t1

0xe5ab,	// (0x0006be29) main_radioblah_pane_t2_ParamLimits

0xe5ab,	// (0x0006be29) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0006d501) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0006d501) main_radioblah_pane_t

0x844e,	// (0x00065ccc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x844e,	// (0x00065ccc) main_radioblah_rocker_ctrl_pane

0xe5f3,	// (0x0006be71) main_radioblah_info_pane_t1_ParamLimits

0xe5f3,	// (0x0006be71) main_radioblah_info_pane_t1

0x8497,	// (0x00065d15) main_radioblah_info_pane_t2_ParamLimits

0x8497,	// (0x00065d15) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0006d50a) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0006d50a) main_radioblah_info_pane_t

0xccb1,	// (0x0006a52f) main_radioblah_rocker_ctrl_pane_g1

0x8547,	// (0x00065dc5) main_radioblah_rocker_ctrl_pane_g2

0x854f,	// (0x00065dcd) main_radioblah_rocker_ctrl_pane_g3

0x8557,	// (0x00065dd5) main_radioblah_rocker_ctrl_pane_g4

0x855f,	// (0x00065ddd) main_radioblah_rocker_ctrl_pane_g5

0x8567,	// (0x00065de5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0006d513) main_radioblah_rocker_ctrl_pane_g

0x7fa6,	// (0x00065824) main_cset_text2_pane_t1_copy1_ParamLimits

0x6441,	// (0x00063cbf) cam4_image_uncrop_qvga_pane

0x6594,	// (0x00063e12) vid4_image_uncrop_qcif_pane

0x7a9b,	// (0x00065319) cam6_image_uncrop_qvga_pane_ParamLimits

0x7a9b,	// (0x00065319) cam6_image_uncrop_qvga_pane

0xddd6,	// (0x0006b654) vid6_image_uncrop_qcif_pane_ParamLimits

0xddd6,	// (0x0006b654) vid6_image_uncrop_qcif_pane

0x9cb1,	// (0x0006752f) bg_popup_preview_window_pane_cp03

0xe085,	// (0x0006b903) list_cset_text2_pane

0xe08d,	// (0x0006b90b) main_cset6_text2_pane_g1

0xe095,	// (0x0006b913) main_cset6_text2_pane_t1

0x856f,	// (0x00065ded) list_cset_text2_pane_t1_ParamLimits

0x856f,	// (0x00065ded) list_cset_text2_pane_t1

0xa348,	// (0x00067bc6) main_radioblah_pane_ParamLimits

0x82e2,	// (0x00065b60) main_mobtv_info_pane_t3_ParamLimits

0x82e2,	// (0x00065b60) main_mobtv_info_pane_t3

0x843c,	// (0x00065cba) main_radioblah_pane_g1

0x8467,	// (0x00065ce5) main_radioblah_info_pane_g1

0x84ec,	// (0x00065d6a) main_radioblah_info_pane_t3_ParamLimits

0x84ec,	// (0x00065d6a) main_radioblah_info_pane_t3

0x30c8,	// (0x00060946) highlight_cell_cale_month_pane_ParamLimits

0x30c8,	// (0x00060946) highlight_cell_cale_month_pane

0x9cb1,	// (0x0006752f) main_phob_fisheye_pane

0xcfbd,	// (0x0006a83b) scroll_pane_cp0031_ParamLimits

0xcfbd,	// (0x0006a83b) scroll_pane_cp0031

0xdee8,	// (0x0006b766) wait_bar_pane_cp08_ParamLimits

0x7ca9,	// (0x00065527) cset_list_set_pane_copy1_ParamLimits

0xe62d,	// (0x0006beab) highlight_cell_cale_month_pane_g1

0x8586,	// (0x00065e04) highlight_cell_cale_month_pane_t1

0xdba0,	// (0x0006b41e) list_gen_pane_cp01

0xd7b7,	// (0x0006b035) scroll_pane_01

0x8594,	// (0x00065e12) list_single_double_fisheye_pane

0x859d,	// (0x00065e1b) list_double_fisheye_pane_g1_ParamLimits

0x859d,	// (0x00065e1b) list_double_fisheye_pane_g1

0x85a9,	// (0x00065e27) list_double_fisheye_pane_g2_ParamLimits

0x85a9,	// (0x00065e27) list_double_fisheye_pane_g2

0x85bd,	// (0x00065e3b) list_double_fisheye_pane_g3_ParamLimits

0x85bd,	// (0x00065e3b) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0006d520) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0006d520) list_double_fisheye_pane_g

0x85e6,	// (0x00065e64) list_double_fisheye_pane_t1_ParamLimits

0x85e6,	// (0x00065e64) list_double_fisheye_pane_t1

0x8601,	// (0x00065e7f) list_double_fisheye_pane_t2_ParamLimits

0x8601,	// (0x00065e7f) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0006d52b) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0006d52b) list_double_fisheye_pane_t

0x9cb1,	// (0x0006752f) main_call5_pane

0x83a7,	// (0x00065c25) sc_swipe_pane_ParamLimits

0x83a7,	// (0x00065c25) sc_swipe_pane

0x862f,	// (0x00065ead) call5_image_pane_ParamLimits

0x862f,	// (0x00065ead) call5_image_pane

0x8641,	// (0x00065ebf) call5_swipe_1_pane_ParamLimits

0x8641,	// (0x00065ebf) call5_swipe_1_pane

0x864d,	// (0x00065ecb) call5_swipe_2_pane_ParamLimits

0x864d,	// (0x00065ecb) call5_swipe_2_pane

0x8669,	// (0x00065ee7) popup_call5_audio_first_window_ParamLimits

0x8669,	// (0x00065ee7) popup_call5_audio_first_window

0xcee1,	// (0x0006a75f) call5_swipe_1_pane_g1_ParamLimits

0xcee1,	// (0x0006a75f) call5_swipe_1_pane_g1

0xe635,	// (0x0006beb3) call5_swipe_1_pane_g2_ParamLimits

0xe635,	// (0x0006beb3) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0006d530) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0006d530) call5_swipe_1_pane_g

0xe641,	// (0x0006bebf) call5_swipe_1_pane_t1_ParamLimits

0xe641,	// (0x0006bebf) call5_swipe_1_pane_t1

0xcee1,	// (0x0006a75f) call5_swipe_2_pane_g1_ParamLimits

0xcee1,	// (0x0006a75f) call5_swipe_2_pane_g1

0xe656,	// (0x0006bed4) call5_swipe_2_pane_g2_ParamLimits

0xe656,	// (0x0006bed4) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0006d535) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0006d535) call5_swipe_2_pane_g

0xe662,	// (0x0006bee0) call5_swipe_2_pane_t1_ParamLimits

0xe662,	// (0x0006bee0) call5_swipe_2_pane_t1

0xe677,	// (0x0006bef5) sc_swipe_pane_g1_ParamLimits

0xe677,	// (0x0006bef5) sc_swipe_pane_g1

0xe684,	// (0x0006bf02) sc_swipe_pane_g2_ParamLimits

0xe684,	// (0x0006bf02) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0006d53a) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0006d53a) sc_swipe_pane_g

0xe6b0,	// (0x0006bf2e) sc_swipe_pane_t1_ParamLimits

0xe6b0,	// (0x0006bf2e) sc_swipe_pane_t1

0x9cb1,	// (0x0006752f) main_cmail_launcher_pane

0x8679,	// (0x00065ef7) aid_size_cell_cmail_l_ParamLimits

0x8679,	// (0x00065ef7) aid_size_cell_cmail_l

0x8689,	// (0x00065f07) grid_cmail_l_pane_ParamLimits

0x8689,	// (0x00065f07) grid_cmail_l_pane

0x8699,	// (0x00065f17) cell_cmail_l_pane_ParamLimits

0x8699,	// (0x00065f17) cell_cmail_l_pane

0x86af,	// (0x00065f2d) cell_cmail_l_pane_g1_ParamLimits

0x86af,	// (0x00065f2d) cell_cmail_l_pane_g1

0x86bb,	// (0x00065f39) cell_cmail_l_pane_t1_ParamLimits

0x86bb,	// (0x00065f39) cell_cmail_l_pane_t1

0xe6c5,	// (0x0006bf43) cell_cmail_l_pane_t2_ParamLimits

0xe6c5,	// (0x0006bf43) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0006d53f) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0006d53f) cell_cmail_l_pane_t

0xa348,	// (0x00067bc6) grid_highlight_pane_cp018_ParamLimits

0xa348,	// (0x00067bc6) grid_highlight_pane_cp018

0x0ce3,	// (0x0005e561) main2_pane_ParamLimits

0x0ce3,	// (0x0005e561) main2_pane

0xa96e,	// (0x000681ec) popup_sp_fs_action_menu_bg_pane_g1

0xa976,	// (0x000681f4) popup_sp_fs_action_menu_bg_pane_g2

0xa97e,	// (0x000681fc) popup_sp_fs_action_menu_bg_pane_g3

0xa986,	// (0x00068204) popup_sp_fs_action_menu_bg_pane_g4

0xa98e,	// (0x0006820c) popup_sp_fs_action_menu_bg_pane_g5

0xa996,	// (0x00068214) popup_sp_fs_action_menu_bg_pane_g6

0xa99e,	// (0x0006821c) popup_sp_fs_action_menu_bg_pane_g7

0xa9a6,	// (0x00068224) popup_sp_fs_action_menu_bg_pane_g8

0xa9ae,	// (0x0006822c) popup_sp_fs_action_menu_bg_pane_g9

0xa9b6,	// (0x00068234) popup_sp_fs_action_menu_bg_pane_g10

0xa9b6,	// (0x00068234) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0006ca0b) popup_sp_fs_action_menu_bg_pane_g

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t3_g3_g1

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t3_g3_g2

0xa2fa,	// (0x00067b78) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa2fa,	// (0x00067b78) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0006cabb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0006cabb) list_medium_line_x2_t3_g3_g

0x1f29,	// (0x0005f7a7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1f29,	// (0x0005f7a7) list_medium_line_x2_t3_g3_t1

0x1f3e,	// (0x0005f7bc) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f3e,	// (0x0005f7bc) list_medium_line_x2_t3_g3_t2

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0006cac2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0006cac2) list_medium_line_x2_t3_g3_t

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t3_g2_g1

0xa2fa,	// (0x00067b78) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa2fa,	// (0x00067b78) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0006cac9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0006cac9) list_medium_line_x2_t3_g2_g

0x1f67,	// (0x0005f7e5) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f67,	// (0x0005f7e5) list_medium_line_x2_t3_g2_t1

0x1f7d,	// (0x0005f7fb) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f7d,	// (0x0005f7fb) list_medium_line_x2_t3_g2_t2

0x1f8f,	// (0x0005f80d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f8f,	// (0x0005f80d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0006cace) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0006cace) list_medium_line_x2_t3_g2_t

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t4_g4_g1

0x1fad,	// (0x0005f82b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1fad,	// (0x0005f82b) list_medium_line_x2_t4_g4_g2

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t4_g4_g3

0x1fb9,	// (0x0005f837) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1fb9,	// (0x0005f837) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0006cad5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0006cad5) list_medium_line_x2_t4_g4_g

0x1fc5,	// (0x0005f843) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1fc5,	// (0x0005f843) list_medium_line_x2_t4_g4_t1

0x1fdf,	// (0x0005f85d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1fdf,	// (0x0005f85d) list_medium_line_x2_t4_g4_t2

0x1ff5,	// (0x0005f873) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ff5,	// (0x0005f873) list_medium_line_x2_t4_g4_t3

0x200a,	// (0x0005f888) list_medium_line_x2_t4_g4_t4_ParamLimits

0x200a,	// (0x0005f888) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0006cade) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0006cade) list_medium_line_x2_t4_g4_t

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t2_g4_g1

0x1fad,	// (0x0005f82b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1fad,	// (0x0005f82b) list_medium_line_x2_t2_g4_g2

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t2_g4_g3

0xa2fa,	// (0x00067b78) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa2fa,	// (0x00067b78) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0006cb45) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0006cb45) list_medium_line_x2_t2_g4_g

0x30ee,	// (0x0006096c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30ee,	// (0x0006096c) list_medium_line_x2_t2_g4_t1

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0006cb4e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0006cb4e) list_medium_line_x2_t2_g4_t

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t2_g3_g1

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t2_g3_g2

0xa2fa,	// (0x00067b78) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa2fa,	// (0x00067b78) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0006cabb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0006cabb) list_medium_line_x2_t2_g3_g

0x3103,	// (0x00060981) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3103,	// (0x00060981) list_medium_line_x2_t2_g3_t1

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0006cb53) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0006cb53) list_medium_line_x2_t2_g3_t

0x3299,	// (0x00060b17) main_sp_fs_list_pane_ParamLimits

0x3299,	// (0x00060b17) main_sp_fs_list_pane

0x32a5,	// (0x00060b23) sp_fs_scroll_pane_ParamLimits

0x32a5,	// (0x00060b23) sp_fs_scroll_pane

0x32b1,	// (0x00060b2f) list_medium_line_x2_t3_t1

0x32c1,	// (0x00060b3f) list_medium_line_x2_t3_t2

0x32cf,	// (0x00060b4d) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0006cb9e) list_medium_line_x2_t3_t

0x32dd,	// (0x00060b5b) list_medium_line_x3_t4_t1

0x32ed,	// (0x00060b6b) list_medium_line_x3_t4_t2

0x32fb,	// (0x00060b79) list_medium_line_x3_t4_t3

0x32cf,	// (0x00060b4d) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0006cba5) list_medium_line_x3_t4_t

0x3309,	// (0x00060b87) list_medium_line_x4_t5_t1

0x3319,	// (0x00060b97) list_medium_line_x4_t5_t2

0x32fb,	// (0x00060b79) list_medium_line_x4_t5_t3

0x3327,	// (0x00060ba5) list_medium_line_x4_t5_t4

0x32cf,	// (0x00060b4d) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0006cbae) list_medium_line_x4_t5_t

0xa2ee,	// (0x00067b6c) list_medium_line_t4_g4_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_t4_g4_g1

0xa306,	// (0x00067b84) list_medium_line_t4_g4_g2_ParamLimits

0xa306,	// (0x00067b84) list_medium_line_t4_g4_g2

0x3335,	// (0x00060bb3) list_medium_line_t4_g4_g3_ParamLimits

0x3335,	// (0x00060bb3) list_medium_line_t4_g4_g3

0xa2fa,	// (0x00067b78) list_medium_line_t4_g4_g4_ParamLimits

0xa2fa,	// (0x00067b78) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0006cbb9) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0006cbb9) list_medium_line_t4_g4_g

0x3341,	// (0x00060bbf) list_medium_line_t4_g4_t1_ParamLimits

0x3341,	// (0x00060bbf) list_medium_line_t4_g4_t1

0x3356,	// (0x00060bd4) list_medium_line_t4_g4_t2_ParamLimits

0x3356,	// (0x00060bd4) list_medium_line_t4_g4_t2

0x336c,	// (0x00060bea) list_medium_line_t4_g4_t3_ParamLimits

0x336c,	// (0x00060bea) list_medium_line_t4_g4_t3

0x1f52,	// (0x0005f7d0) list_medium_line_t4_g4_t4_ParamLimits

0x1f52,	// (0x0005f7d0) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0006cbc2) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0006cbc2) list_medium_line_t4_g4_t

0x3495,	// (0x00060d13) chi_dic_find_pane_g1

0x4501,	// (0x00061d7f) main_tport_pane

0x6f98,	// (0x00064816) list_medium_line_plain_t1

0x7090,	// (0x0006490e) list_medium_line_t2_g2_g1_ParamLimits

0x7090,	// (0x0006490e) list_medium_line_t2_g2_g1

0x709c,	// (0x0006491a) list_medium_line_t2_g2_g2_ParamLimits

0x709c,	// (0x0006491a) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0006d27e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0006d27e) list_medium_line_t2_g2_g

0x70a8,	// (0x00064926) list_medium_line_t2_g2_t1_ParamLimits

0x70a8,	// (0x00064926) list_medium_line_t2_g2_t1

0x70bf,	// (0x0006493d) list_medium_line_t2_g2_t2_ParamLimits

0x70bf,	// (0x0006493d) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0006d283) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0006d283) list_medium_line_t2_g2_t

0xa41b,	// (0x00067c99) aid_sp_fs_list_icon_a_sm

0xa423,	// (0x00067ca1) aid_sp_fs_list_icon_d

0xa42b,	// (0x00067ca9) aid_sp_fs_text_primary

0xa434,	// (0x00067cb2) aid_sp_fs_text_secondary

0x774f,	// (0x00064fcd) list_medium_line

0x774f,	// (0x00064fcd) list_medium_line_g2

0x774f,	// (0x00064fcd) list_medium_line_g3

0x774f,	// (0x00064fcd) list_medium_line_plain

0x774f,	// (0x00064fcd) list_medium_line_plain_t2

0x774f,	// (0x00064fcd) list_medium_line_plain_t3

0x774f,	// (0x00064fcd) list_medium_line_right_icon

0x774f,	// (0x00064fcd) list_medium_line_right_iconx2

0x774f,	// (0x00064fcd) list_medium_line_t2

0x774f,	// (0x00064fcd) list_medium_line_t2_g2

0x774f,	// (0x00064fcd) list_medium_line_t2_g3

0x774f,	// (0x00064fcd) list_medium_line_t2_right_icon

0x774f,	// (0x00064fcd) list_medium_line_t2_right_iconx2

0x774f,	// (0x00064fcd) list_medium_line_t3

0x774f,	// (0x00064fcd) list_medium_line_t3_g2

0x774f,	// (0x00064fcd) list_medium_line_t3_g3

0x774f,	// (0x00064fcd) list_medium_line_t3_right_iconx2

0x7758,	// (0x00064fd6) list_medium_line_t4_g4

0x7761,	// (0x00064fdf) list_medium_line_x2

0x7761,	// (0x00064fdf) list_medium_line_x2_t2_g2

0x7761,	// (0x00064fdf) list_medium_line_x2_t2_g3

0x7761,	// (0x00064fdf) list_medium_line_x2_t2_g4

0x7761,	// (0x00064fdf) list_medium_line_x2_t3

0x7761,	// (0x00064fdf) list_medium_line_x2_t3_g2

0x7761,	// (0x00064fdf) list_medium_line_x2_t3_g3

0x7761,	// (0x00064fdf) list_medium_line_x2_t3_g4

0x7761,	// (0x00064fdf) list_medium_line_x2_t4_g2

0x7761,	// (0x00064fdf) list_medium_line_x2_t4_g4

0x776a,	// (0x00064fe8) list_medium_line_x3

0x776a,	// (0x00064fe8) list_medium_line_x3_t4

0x776a,	// (0x00064fe8) list_medium_line_x3_t4_g4

0x7758,	// (0x00064fd6) list_medium_line_x4_t4

0x7758,	// (0x00064fd6) list_medium_line_x4_t4_g7

0x7758,	// (0x00064fd6) list_medium_line_x4_t5

0x7773,	// (0x00064ff1) list_single_fs_dyc_pane_ParamLimits

0x7773,	// (0x00064ff1) list_single_fs_dyc_pane

0xa2ee,	// (0x00067b6c) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x4_t4_g7_g1

0xa43d,	// (0x00067cbb) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa43d,	// (0x00067cbb) list_medium_line_x4_t4_g7_g2

0x7f01,	// (0x0006577f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7f01,	// (0x0006577f) list_medium_line_x4_t4_g7_g3

0x7f10,	// (0x0006578e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7f10,	// (0x0006578e) list_medium_line_x4_t4_g7_g4

0x7f1c,	// (0x0006579a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7f1c,	// (0x0006579a) list_medium_line_x4_t4_g7_g5

0x7f2b,	// (0x000657a9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7f2b,	// (0x000657a9) list_medium_line_x4_t4_g7_g6

0xa449,	// (0x00067cc7) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa449,	// (0x00067cc7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0006d447) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0006d447) list_medium_line_x4_t4_g7_g

0x7f3a,	// (0x000657b8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7f3a,	// (0x000657b8) list_medium_line_x4_t4_g7_t1

0x7f4f,	// (0x000657cd) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7f4f,	// (0x000657cd) list_medium_line_x4_t4_g7_t2

0x7f64,	// (0x000657e2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f64,	// (0x000657e2) list_medium_line_x4_t4_g7_t3

0x7f79,	// (0x000657f7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f79,	// (0x000657f7) list_medium_line_x4_t4_g7_t4

0xa455,	// (0x00067cd3) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa455,	// (0x00067cd3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0006d456) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0006d456) list_medium_line_x4_t4_g7_t

0x7f8b,	// (0x00065809) list_single_dyc_row_pane_ParamLimits

0x7f8b,	// (0x00065809) list_single_dyc_row_pane

0x8623,	// (0x00065ea1) call5_gesture_pane_ParamLimits

0x8623,	// (0x00065ea1) call5_gesture_pane

0x8659,	// (0x00065ed7) call5_windows_pane_ParamLimits

0x8659,	// (0x00065ed7) call5_windows_pane

0x86d1,	// (0x00065f4f) call5_swipe_1_pane_cp_ParamLimits

0x86d1,	// (0x00065f4f) call5_swipe_1_pane_cp

0x86dd,	// (0x00065f5b) call5_swipe_2_pane_cp_ParamLimits

0x86dd,	// (0x00065f5b) call5_swipe_2_pane_cp

0xb440,	// (0x00068cbe) call5_image_pane_cp

0x86e9,	// (0x00065f67) popup_call5_audio_first_window_cp_ParamLimits

0x86e9,	// (0x00065f67) popup_call5_audio_first_window_cp

0xe677,	// (0x0006bef5) call5_swipe_1_pane_g1_cp_ParamLimits

0xe677,	// (0x0006bef5) call5_swipe_1_pane_g1_cp

0xe6d7,	// (0x0006bf55) call5_swipe_1_pane_g2_cp

0xe6b0,	// (0x0006bf2e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b0,	// (0x0006bf2e) call5_swipe_1_pane_t1_cp

0xe677,	// (0x0006bef5) call5_swipe_2_pane_g1_cp_ParamLimits

0xe677,	// (0x0006bef5) call5_swipe_2_pane_g1_cp

0xe6df,	// (0x0006bf5d) call5_swipe_2_pane_g2_cp

0xe6e7,	// (0x0006bf65) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e7,	// (0x0006bf65) call5_swipe_2_pane_t1_cp

0xa348,	// (0x00067bc6) main_sp_fs_email_pane

0xe6fc,	// (0x0006bf7a) main_sp_fs_listscroll_pane_te

0xa467,	// (0x00067ce5) popup_sp_fs_action_menu_pane_ParamLimits

0xa467,	// (0x00067ce5) popup_sp_fs_action_menu_pane

0xccb1,	// (0x0006a52f) bg_sp_fs_ctrlbar_pane_g1

0xd23e,	// (0x0006aabc) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd250,	// (0x0006aace) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd247,	// (0x0006aac5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccb1,	// (0x0006a52f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0006d544) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca90,	// (0x0006a30e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca90,	// (0x0006a30e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe705,	// (0x0006bf83) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe705,	// (0x0006bf83) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe711,	// (0x0006bf8f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe711,	// (0x0006bf8f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0006d54d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0006d54d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71d,	// (0x0006bf9b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71d,	// (0x0006bf9b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x86f7,	// (0x00065f75) list_medium_line_t2_right_icon_g1

0x86ff,	// (0x00065f7d) list_medium_line_t2_right_icon_t1

0x870f,	// (0x00065f8d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0006d552) list_medium_line_t2_right_icon_t

0xc860,	// (0x0006a0de) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc860,	// (0x0006a0de) bg_sp_fs_ctrlbar_pane

0x8776,	// (0x00065ff4) main_sp_fs_ctrlbar_button_pane_cp01

0x877e,	// (0x00065ffc) main_sp_fs_ctrlbar_ddmenu_pane

0xe690,	// (0x0006bf0e) main_sp_fs_ctrlbar_pane_g1

0xe76f,	// (0x0006bfed) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0006d557) main_sp_fs_ctrlbar_pane_g

0xe77b,	// (0x0006bff9) main_sp_fs_ctrlbar_pane_t1

0x8788,	// (0x00066006) main_sp_fs_ctrlbar_pane

0x87a2,	// (0x00066020) main_sp_fs_listscroll_pane_te_cp01

0x87b3,	// (0x00066031) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x87b3,	// (0x00066031) popup_sp_fs_action_menu_pane_cp01

0xa348,	// (0x00067bc6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa348,	// (0x00067bc6) bg_sp_fs_highlight_list_pane_cp01

0xa4ad,	// (0x00067d2b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa4ad,	// (0x00067d2b) sp_fs_action_menu_list_gene_pane_g1

0xe7ab,	// (0x0006c029) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7ab,	// (0x0006c029) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0006d561) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0006d561) sp_fs_action_menu_list_gene_pane_g

0xa4bc,	// (0x00067d3a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa4bc,	// (0x00067d3a) sp_fs_action_menu_list_gene_pane_t1

0xa4d4,	// (0x00067d52) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa4d4,	// (0x00067d52) sp_fs_action_menu_list_gene_pane

0xe7b8,	// (0x0006c036) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7b8,	// (0x0006c036) popup_sp_fs_action_menu_bg_pane

0xa4f7,	// (0x00067d75) sp_fs_action_menu_list_pane_ParamLimits

0xa4f7,	// (0x00067d75) sp_fs_action_menu_list_pane

0xe7c6,	// (0x0006c044) sp_fs_scroll_pane_cp01_ParamLimits

0xe7c6,	// (0x0006c044) sp_fs_scroll_pane_cp01

0x87dd,	// (0x0006605b) list_medium_line_plain_t2_t1

0x87ed,	// (0x0006606b) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0006d566) list_medium_line_plain_t2_t

0x87fb,	// (0x00066079) list_medium_line_plain_t3_t1

0x880b,	// (0x00066089) list_medium_line_plain_t3_t2

0x8819,	// (0x00066097) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0006d56b) list_medium_line_plain_t3_t

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t2_g2_g1

0xa2fa,	// (0x00067b78) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa2fa,	// (0x00067b78) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0006cac9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0006cac9) list_medium_line_x2_t2_g2_g

0x3341,	// (0x00060bbf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3341,	// (0x00060bbf) list_medium_line_x2_t2_g2_t1

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0006d572) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0006d572) list_medium_line_x2_t2_g2_t

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t4_g2_g1

0xa51b,	// (0x00067d99) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa51b,	// (0x00067d99) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0006d577) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0006d577) list_medium_line_x2_t4_g2_g

0x8827,	// (0x000660a5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8827,	// (0x000660a5) list_medium_line_x2_t4_g2_t1

0x8841,	// (0x000660bf) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8841,	// (0x000660bf) list_medium_line_x2_t4_g2_t2

0x8857,	// (0x000660d5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8857,	// (0x000660d5) list_medium_line_x2_t4_g2_t3

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0006d57c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0006d57c) list_medium_line_x2_t4_g2_t

0x886c,	// (0x000660ea) list_medium_line_t3_right_iconx2_g1

0x86f7,	// (0x00065f75) list_medium_line_t3_right_iconx2_g2

0x8874,	// (0x000660f2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0006d585) list_medium_line_t3_right_iconx2_g

0x887e,	// (0x000660fc) list_medium_line_t3_right_iconx2_t1

0x888e,	// (0x0006610c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0006d58c) list_medium_line_t3_right_iconx2_t

0xa2ee,	// (0x00067b6c) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x3_t4_g4_g1

0x1f1d,	// (0x0005f79b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1f1d,	// (0x0005f79b) list_medium_line_x3_t4_g4_g2

0xa306,	// (0x00067b84) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa306,	// (0x00067b84) list_medium_line_x3_t4_g4_g3

0x889c,	// (0x0006611a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x889c,	// (0x0006611a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0006d591) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0006d591) list_medium_line_x3_t4_g4_g

0x88a8,	// (0x00066126) list_medium_line_x3_t4_g4_t1_ParamLimits

0x88a8,	// (0x00066126) list_medium_line_x3_t4_g4_t1

0x88bf,	// (0x0006613d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x88bf,	// (0x0006613d) list_medium_line_x3_t4_g4_t2

0x88d4,	// (0x00066152) list_medium_line_x3_t4_g4_t3_ParamLimits

0x88d4,	// (0x00066152) list_medium_line_x3_t4_g4_t3

0x88e9,	// (0x00066167) list_medium_line_x3_t4_g4_t4_ParamLimits

0x88e9,	// (0x00066167) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0006d59a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0006d59a) list_medium_line_x3_t4_g4_t

0x8906,	// (0x00066184) list_single_dyc_row_text_pane_t1_ParamLimits

0x8906,	// (0x00066184) list_single_dyc_row_text_pane_t1

0x8943,	// (0x000661c1) list_single_dyc_row_text_pane_t2_ParamLimits

0x8943,	// (0x000661c1) list_single_dyc_row_text_pane_t2

0xa52d,	// (0x00067dab) list_single_dyc_row_text_pane_t3_ParamLimits

0xa52d,	// (0x00067dab) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0006d5a3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0006d5a3) list_single_dyc_row_text_pane_t

0xa551,	// (0x00067dcf) list_single_dyc_row_pane_g1_ParamLimits

0xa551,	// (0x00067dcf) list_single_dyc_row_pane_g1

0xa55d,	// (0x00067ddb) list_single_dyc_row_pane_g2_ParamLimits

0xa55d,	// (0x00067ddb) list_single_dyc_row_pane_g2

0xa569,	// (0x00067de7) list_single_dyc_row_pane_g3_ParamLimits

0xa569,	// (0x00067de7) list_single_dyc_row_pane_g3

0xa575,	// (0x00067df3) list_single_dyc_row_pane_g4_ParamLimits

0xa575,	// (0x00067df3) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0006d5b0) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0006d5b0) list_single_dyc_row_pane_g

0xa581,	// (0x00067dff) list_single_dyc_row_text_pane_ParamLimits

0xa581,	// (0x00067dff) list_single_dyc_row_text_pane

0x9cb1,	// (0x0006752f) bg_sp_fs_scroll_pane

0xe7ec,	// (0x0006c06a) thumb_sp_fs_scroll_pane

0x7090,	// (0x0006490e) list_medium_line_g1_ParamLimits

0x7090,	// (0x0006490e) list_medium_line_g1

0x8a6c,	// (0x000662ea) list_medium_line_t1_ParamLimits

0x8a6c,	// (0x000662ea) list_medium_line_t1

0xa2ee,	// (0x00067b6c) list_medium_line_x2_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x2_g1

0x1f1d,	// (0x0005f79b) list_medium_line_x2_g2_ParamLimits

0x1f1d,	// (0x0005f79b) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0006d5b9) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0006d5b9) list_medium_line_x2_g

0xa5a0,	// (0x00067e1e) list_medium_line_x2_t1_ParamLimits

0xa5a0,	// (0x00067e1e) list_medium_line_x2_t1

0xa2ee,	// (0x00067b6c) list_medium_line_x3_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x3_g1

0x1f1d,	// (0x0005f79b) list_medium_line_x3_g2_ParamLimits

0x1f1d,	// (0x0005f79b) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0006d5b9) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0006d5b9) list_medium_line_x3_g

0xa5a0,	// (0x00067e1e) list_medium_line_x3_t1_ParamLimits

0xa5a0,	// (0x00067e1e) list_medium_line_x3_t1

0xe7f5,	// (0x0006c073) thumb_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0006c07c) thumb_sp_fs_scroll_pane_g2

0xe807,	// (0x0006c085) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006d5be) thumb_sp_fs_scroll_pane_g

0xe7f5,	// (0x0006c073) bg_sp_fs_scroll_pane_g1

0xe7fe,	// (0x0006c07c) bg_sp_fs_scroll_pane_g2

0xe807,	// (0x0006c085) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006d5be) bg_sp_fs_scroll_pane_g

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa2ee,	// (0x00067b6c) list_medium_line_x2_t3_g4_g1

0x1fad,	// (0x0005f82b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1fad,	// (0x0005f82b) list_medium_line_x2_t3_g4_g2

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1f1d,	// (0x0005f79b) list_medium_line_x2_t3_g4_g3

0xa2fa,	// (0x00067b78) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa2fa,	// (0x00067b78) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0006cb45) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0006cb45) list_medium_line_x2_t3_g4_g

0x8a81,	// (0x000662ff) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a81,	// (0x000662ff) list_medium_line_x2_t3_g4_t1

0x8a97,	// (0x00066315) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a97,	// (0x00066315) list_medium_line_x2_t3_g4_t2

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f52,	// (0x0005f7d0) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0006d5c5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0006d5c5) list_medium_line_x2_t3_g4_t

0x7090,	// (0x0006490e) list_medium_line_g2_g1_ParamLimits

0x7090,	// (0x0006490e) list_medium_line_g2_g1

0x709c,	// (0x0006491a) list_medium_line_g2_g2_ParamLimits

0x709c,	// (0x0006491a) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0006d27e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0006d27e) list_medium_line_g2_g

0x8ab0,	// (0x0006632e) list_medium_line_g2_t1_ParamLimits

0x8ab0,	// (0x0006632e) list_medium_line_g2_t1

0x7090,	// (0x0006490e) list_medium_line_t3_g2_g1_ParamLimits

0x7090,	// (0x0006490e) list_medium_line_t3_g2_g1

0x709c,	// (0x0006491a) list_medium_line_t3_g2_g2_ParamLimits

0x709c,	// (0x0006491a) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0006d27e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0006d27e) list_medium_line_t3_g2_g

0x8ac5,	// (0x00066343) list_medium_line_t3_g2_t1_ParamLimits

0x8ac5,	// (0x00066343) list_medium_line_t3_g2_t1

0x8adf,	// (0x0006635d) list_medium_line_t3_g2_t2_ParamLimits

0x8adf,	// (0x0006635d) list_medium_line_t3_g2_t2

0x8af5,	// (0x00066373) list_medium_line_t3_g2_t3_ParamLimits

0x8af5,	// (0x00066373) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0006d5cc) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0006d5cc) list_medium_line_t3_g2_t

0x86f7,	// (0x00065f75) list_medium_line_right_icon_g1

0x8b0c,	// (0x0006638a) list_medium_line_right_icon_t1

0x7090,	// (0x0006490e) list_medium_line_t2_g1_ParamLimits

0x7090,	// (0x0006490e) list_medium_line_t2_g1

0x8b1a,	// (0x00066398) list_medium_line_t2_t1_ParamLimits

0x8b1a,	// (0x00066398) list_medium_line_t2_t1

0x8b34,	// (0x000663b2) list_medium_line_t2_t2_ParamLimits

0x8b34,	// (0x000663b2) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0006d5d3) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0006d5d3) list_medium_line_t2_t

0x7090,	// (0x0006490e) list_medium_line_t3_g1_ParamLimits

0x7090,	// (0x0006490e) list_medium_line_t3_g1

0x8b49,	// (0x000663c7) list_medium_line_t3_t1_ParamLimits

0x8b49,	// (0x000663c7) list_medium_line_t3_t1

0x8b60,	// (0x000663de) list_medium_line_t3_t2_ParamLimits

0x8b60,	// (0x000663de) list_medium_line_t3_t2

0x8b75,	// (0x000663f3) list_medium_line_t3_t3_ParamLimits

0x8b75,	// (0x000663f3) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0006d5d8) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0006d5d8) list_medium_line_t3_t

0x7090,	// (0x0006490e) list_medium_line_g3_g1_ParamLimits

0x7090,	// (0x0006490e) list_medium_line_g3_g1

0x8b87,	// (0x00066405) list_medium_line_g3_g2_ParamLimits

0x8b87,	// (0x00066405) list_medium_line_g3_g2

0x709c,	// (0x0006491a) list_medium_line_g3_g3_ParamLimits

0x709c,	// (0x0006491a) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0006d5df) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0006d5df) list_medium_line_g3_g

0x8b93,	// (0x00066411) list_medium_line_g3_t1_ParamLimits

0x8b93,	// (0x00066411) list_medium_line_g3_t1

0x7090,	// (0x0006490e) list_medium_line_t2_g3_g1_ParamLimits

0x7090,	// (0x0006490e) list_medium_line_t2_g3_g1

0x8b87,	// (0x00066405) list_medium_line_t2_g3_g2_ParamLimits

0x8b87,	// (0x00066405) list_medium_line_t2_g3_g2

0x709c,	// (0x0006491a) list_medium_line_t2_g3_g3_ParamLimits

0x709c,	// (0x0006491a) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0006d5df) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0006d5df) list_medium_line_t2_g3_g

0x8ba8,	// (0x00066426) list_medium_line_t2_g3_t1_ParamLimits

0x8ba8,	// (0x00066426) list_medium_line_t2_g3_t1

0x8bbf,	// (0x0006643d) list_medium_line_t2_g3_t2_ParamLimits

0x8bbf,	// (0x0006643d) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0006d5e6) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0006d5e6) list_medium_line_t2_g3_t

0x7090,	// (0x0006490e) list_medium_line_t3_g3_g1_ParamLimits

0x7090,	// (0x0006490e) list_medium_line_t3_g3_g1

0x8b87,	// (0x00066405) list_medium_line_t3_g3_g2_ParamLimits

0x8b87,	// (0x00066405) list_medium_line_t3_g3_g2

0x709c,	// (0x0006491a) list_medium_line_t3_g3_g3_ParamLimits

0x709c,	// (0x0006491a) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0006d5df) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0006d5df) list_medium_line_t3_g3_g

0x8bd4,	// (0x00066452) list_medium_line_t3_g3_t1_ParamLimits

0x8bd4,	// (0x00066452) list_medium_line_t3_g3_t1

0x8be8,	// (0x00066466) list_medium_line_t3_g3_t2_ParamLimits

0x8be8,	// (0x00066466) list_medium_line_t3_g3_t2

0x8bfa,	// (0x00066478) list_medium_line_t3_g3_t3_ParamLimits

0x8bfa,	// (0x00066478) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0006d5eb) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0006d5eb) list_medium_line_t3_g3_t

0x886c,	// (0x000660ea) list_medium_line_right_iconx2_g1

0x86f7,	// (0x00065f75) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006d5f2) list_medium_line_right_iconx2_g

0x8c0e,	// (0x0006648c) list_medium_line_right_iconx2_t1

0x886c,	// (0x000660ea) list_medium_line_t2_right_iconx2_g1

0x86f7,	// (0x00065f75) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006d5f2) list_medium_line_t2_right_iconx2_g

0x8c1c,	// (0x0006649a) list_medium_line_t2_right_iconx2_t1

0x8c2c,	// (0x000664aa) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0006d5f7) list_medium_line_t2_right_iconx2_t

0x8c3a,	// (0x000664b8) list_medium_line_x4_t4_t1

0x8c48,	// (0x000664c6) list_medium_line_x4_t4_t2

0x8c58,	// (0x000664d6) list_medium_line_x4_t4_t3

0x8c68,	// (0x000664e6) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0006d5fc) list_medium_line_x4_t4_t

0x8ca2,	// (0x00066520) tport_appsw_pane_ParamLimits

0x8ca2,	// (0x00066520) tport_appsw_pane

0x8cb0,	// (0x0006652e) tport_contact_pane_ParamLimits

0x8cb0,	// (0x0006652e) tport_contact_pane

0x8cc0,	// (0x0006653e) tport_listscroll_pane_ParamLimits

0x8cc0,	// (0x0006653e) tport_listscroll_pane

0x8cd0,	// (0x0006654e) cell_tport_appsw_pane_ParamLimits

0x8cd0,	// (0x0006654e) cell_tport_appsw_pane

0xcf46,	// (0x0006a7c4) tport_appsw_pane_g1_ParamLimits

0xcf46,	// (0x0006a7c4) tport_appsw_pane_g1

0xe810,	// (0x0006c08e) tport_contact_pane_g1

0xe819,	// (0x0006c097) tport_contact_pane_t1

0xe827,	// (0x0006c0a5) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0006d605) tport_contact_pane_t

0xe835,	// (0x0006c0b3) list_tport_pane

0xe83e,	// (0x0006c0bc) scroll_pane_cp_030

0x8d05,	// (0x00066583) cell_tport_appsw_pane_g1

0x8d15,	// (0x00066593) cell_tport_appsw_pane_t1

0x8d23,	// (0x000665a1) grid_highlight_pane_cp019

0x8d2b,	// (0x000665a9) list_tport_double_graphic_pane_ParamLimits

0x8d2b,	// (0x000665a9) list_tport_double_graphic_pane

0xa348,	// (0x00067bc6) list_highlight_pane_cp023_ParamLimits

0xa348,	// (0x00067bc6) list_highlight_pane_cp023

0x8d38,	// (0x000665b6) list_tport_double_graphic_pane_g1_ParamLimits

0x8d38,	// (0x000665b6) list_tport_double_graphic_pane_g1

0x8d45,	// (0x000665c3) list_tport_double_graphic_pane_t1_ParamLimits

0x8d45,	// (0x000665c3) list_tport_double_graphic_pane_t1

0x8d5a,	// (0x000665d8) list_tport_double_graphic_pane_t2_ParamLimits

0x8d5a,	// (0x000665d8) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0006d611) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0006d611) list_tport_double_graphic_pane_t

0x9cb1,	// (0x0006752f) main_cale_note_pane

0x6817,	// (0x00064095) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6817,	// (0x00064095) cell_vitu2_function_top_wide_pane_cp01

0x82f6,	// (0x00065b74) wait_bar_pane_cp05_ParamLimits

0xa348,	// (0x00067bc6) listscroll_cmail_pane

0xe84f,	// (0x0006c0cd) list_cmail_pane

0x8d76,	// (0x000665f4) list_cmail_body_pane

0x8d8f,	// (0x0006660d) list_single_cmail_header_caption_pane

0x8db0,	// (0x0006662e) list_single_cmail_header_detail_pane_ParamLimits

0x8db0,	// (0x0006662e) list_single_cmail_header_detail_pane

0x8de1,	// (0x0006665f) list_single_cmail_header_caption_pane_t1

0x8dfc,	// (0x0006667a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8dfc,	// (0x0006667a) list_single_cmail_header_detail_pane_g1

0xa5b6,	// (0x00067e34) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa5b6,	// (0x00067e34) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0006d616) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0006d616) list_single_cmail_header_detail_pane_g

0x8e14,	// (0x00066692) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8e14,	// (0x00066692) list_single_cmail_header_detail_pane_t1

0x8e5c,	// (0x000666da) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e5c,	// (0x000666da) list_single_cmail_header_editor_pane_bg

0xe31f,	// (0x0006bb9d) list_cmail_body_pane_g1

0xe873,	// (0x0006c0f1) list_cmail_body_pane_t1

0xd699,	// (0x0006af17) list_single_cmail_header_editor_pane_bg_g1

0xacec,	// (0x0006856a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a9,	// (0x0006af27) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6a1,	// (0x0006af1f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8c3,	// (0x0006b141) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c9,	// (0x0006af47) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b9,	// (0x0006af37) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6c1,	// (0x0006af3f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaccc,	// (0x0006854a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e73,	// (0x000666f1) calenote_gesture_pane_ParamLimits

0x8e73,	// (0x000666f1) calenote_gesture_pane

0x8e8d,	// (0x0006670b) calenote_window_pane_ParamLimits

0x8e8d,	// (0x0006670b) calenote_window_pane

0xe881,	// (0x0006c0ff) popup_note_window_cp01

0x8ea5,	// (0x00066723) calenote_swipe_1_pane_ParamLimits

0x8ea5,	// (0x00066723) calenote_swipe_1_pane

0x86dd,	// (0x00065f5b) calenote_swipe_2_pane_ParamLimits

0x86dd,	// (0x00065f5b) calenote_swipe_2_pane

0xe677,	// (0x0006bef5) calenote_swipe_1_pane_g1_ParamLimits

0xe677,	// (0x0006bef5) calenote_swipe_1_pane_g1

0xe684,	// (0x0006bf02) calenote_swipe_1_pane_g2_ParamLimits

0xe684,	// (0x0006bf02) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0006d53a) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0006d53a) calenote_swipe_1_pane_g

0xe893,	// (0x0006c111) calenote_swipe_1_pane_t1_ParamLimits

0xe893,	// (0x0006c111) calenote_swipe_1_pane_t1

0xe677,	// (0x0006bef5) calenote_swipe_2_pane_g1_ParamLimits

0xe677,	// (0x0006bef5) calenote_swipe_2_pane_g1

0xe8b2,	// (0x0006c130) calenote_swipe_2_pane_g2_ParamLimits

0xe8b2,	// (0x0006c130) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0006d622) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0006d622) calenote_swipe_2_pane_g

0xe8be,	// (0x0006c13c) calenote_swipe_2_pane_t1_ParamLimits

0xe8be,	// (0x0006c13c) calenote_swipe_2_pane_t1

0x9cb1,	// (0x0006752f) main_mup_navstr_pane

0x551a,	// (0x00062d98) main_mup3_pane_t7_ParamLimits

0x551a,	// (0x00062d98) main_mup3_pane_t7

0x5f1d,	// (0x0006379b) main_mp4_pane_g6_ParamLimits

0x5f1d,	// (0x0006379b) main_mp4_pane_g6

0x629b,	// (0x00063b19) main_image3_pane_t4_ParamLimits

0x629b,	// (0x00063b19) main_image3_pane_t4

0x8eb8,	// (0x00066736) popup_navstr_preview_pane_ParamLimits

0x8eb8,	// (0x00066736) popup_navstr_preview_pane

0x8ec4,	// (0x00066742) scroll_navstr_pane_ParamLimits

0x8ec4,	// (0x00066742) scroll_navstr_pane

0x9cb1,	// (0x0006752f) bg_popup_preview_window_pane_cp04

0xe8e5,	// (0x0006c163) popup_navstr_preview_pane_t1

0x8ed0,	// (0x0006674e) scroll_navstr_pane_g1_ParamLimits

0x8ed0,	// (0x0006674e) scroll_navstr_pane_g1

0x8edd,	// (0x0006675b) scroll_navstr_pane_t1_ParamLimits

0x8edd,	// (0x0006675b) scroll_navstr_pane_t1

0xe88a,	// (0x0006c108) bg_button_pane_cp014

0xe88a,	// (0x0006c108) bg_button_pane_cp030

0x85c9,	// (0x00065e47) list_double_fisheye_pane_g4_ParamLimits

0x85c9,	// (0x00065e47) list_double_fisheye_pane_g4

0x85d5,	// (0x00065e53) list_double_fisheye_pane_g5_ParamLimits

0x85d5,	// (0x00065e53) list_double_fisheye_pane_g5

0xe857,	// (0x0006c0d5) sp_fs_scroll_pane_cp03

0xe690,	// (0x0006bf0e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe76f,	// (0x0006bfed) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0006d557) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe77b,	// (0x0006bff9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8d6c,	// (0x000665ea) sp_fs_scroll_pane_cp02

0xa9d9,	// (0x00068257) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9d9,	// (0x00068257) popup_sp_fs_calendar_preview_list_single_pane

0x9cb1,	// (0x0006752f) main_cam6_pano_pane

0xa348,	// (0x00067bc6) main_mup3_pane_ParamLimits

0x9cb1,	// (0x0006752f) main_phacti_pane

0x81c9,	// (0x00065a47) bg_button_pane_cp11

0x81e1,	// (0x00065a5f) main_mobtv_info_pane_g2_ParamLimits

0x81e1,	// (0x00065a5f) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0006d4b7) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0006d4b7) main_mobtv_info_pane_g

0x8393,	// (0x00065c11) sc_clock_pane_t5_ParamLimits

0x8393,	// (0x00065c11) sc_clock_pane_t5

0x843c,	// (0x00065cba) main_radioblah_pane_g1_ParamLimits

0xe5c3,	// (0x0006be41) main_radioblah_pane_t3_ParamLimits

0xe5c3,	// (0x0006be41) main_radioblah_pane_t3

0xe5db,	// (0x0006be59) main_radioblah_pane_t4_ParamLimits

0xe5db,	// (0x0006be59) main_radioblah_pane_t4

0x845a,	// (0x00065cd8) main_radioblah_text_pane_ParamLimits

0x845a,	// (0x00065cd8) main_radioblah_text_pane

0x8467,	// (0x00065ce5) main_radioblah_info_pane_g1_ParamLimits

0x8500,	// (0x00065d7e) main_radioblah_info_pane_t4_ParamLimits

0x8500,	// (0x00065d7e) main_radioblah_info_pane_t4

0xa348,	// (0x00067bc6) main_sp_fs_calendar_pane

0x8eef,	// (0x0006676d) main_phacti_pane_g1

0x8ef7,	// (0x00066775) phacti_note_pane_ParamLimits

0x8ef7,	// (0x00066775) phacti_note_pane

0xe8fc,	// (0x0006c17a) phacti_term_pane_ParamLimits

0xe8fc,	// (0x0006c17a) phacti_term_pane

0xe911,	// (0x0006c18f) phacti_note_pane_t1_ParamLimits

0xe911,	// (0x0006c18f) phacti_note_pane_t1

0xa5e6,	// (0x00067e64) phacti_term_pane_g1

0xa5ee,	// (0x00067e6c) phacti_term_pane_t1_ParamLimits

0xa5ee,	// (0x00067e6c) phacti_term_pane_t1

0xe928,	// (0x0006c1a6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe930,	// (0x0006c1ae) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0006d62c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe938,	// (0x0006c1b6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe938,	// (0x0006c1b6) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe94e,	// (0x0006c1cc) aid_popup_sp_fs_bg_corner_pane

0xccb1,	// (0x0006a52f) popup_sp_fs_calendar_preview_bg_pane_g1

0x9cb1,	// (0x0006752f) popup_sp_fs_calendar_preview_bg_pane

0xe956,	// (0x0006c1d4) popup_sp_fs_calendar_preview_list_pane

0xc860,	// (0x0006a0de) bg_main_sp_fs_cale_pane_ParamLimits

0xc860,	// (0x0006a0de) bg_main_sp_fs_cale_pane

0xa621,	// (0x00067e9f) listscroll_cale_mrui_pane_ParamLimits

0xa621,	// (0x00067e9f) listscroll_cale_mrui_pane

0xa636,	// (0x00067eb4) listscroll_sp_fs_schedule_track_pane

0xa63f,	// (0x00067ebd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa63f,	// (0x00067ebd) main_sp_fs_ctrlbar_pane_cp01

0xe95e,	// (0x0006c1dc) main_sp_fs_ribbon_pane

0xa652,	// (0x00067ed0) popup_sp_fs_cale_preview_window

0x8f56,	// (0x000667d4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f56,	// (0x000667d4) list_single_sp_fs_schedule_track_pane

0x0e6c,	// (0x0005e6ea) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0e6c,	// (0x0005e6ea) bg_sp_fs_highlight_list_pane_cp03

0x8f6b,	// (0x000667e9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f6b,	// (0x000667e9) list_single_sp_fs_schedule_track_pane_g1

0x8f77,	// (0x000667f5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f77,	// (0x000667f5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0006d631) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0006d631) list_single_sp_fs_schedule_track_pane_g

0x8f83,	// (0x00066801) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f83,	// (0x00066801) list_single_sp_fs_schedule_track_pane_t1

0x8fa1,	// (0x0006681f) sp_fs_schedule_track_pane_ParamLimits

0x8fa1,	// (0x0006681f) sp_fs_schedule_track_pane

0xe966,	// (0x0006c1e4) sp_fs_schedule_track_pane_g1

0xe96e,	// (0x0006c1ec) sp_fs_schedule_track_pane_g2

0xe976,	// (0x0006c1f4) sp_fs_schedule_track_pane_g3

0xe97e,	// (0x0006c1fc) sp_fs_schedule_track_pane_g4

0xe986,	// (0x0006c204) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0006d636) sp_fs_schedule_track_pane_g

0xd699,	// (0x0006af17) bg_sp_fs_schedule_viewer_highlight_g1

0xacec,	// (0x0006856a) bg_sp_fs_schedule_viewer_highlight_g2

0xd6a1,	// (0x0006af1f) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a9,	// (0x0006af27) bg_sp_fs_schedule_viewer_highlight_g4

0xd8c3,	// (0x0006b141) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b9,	// (0x0006af37) bg_sp_fs_schedule_viewer_highlight_g6

0xd6c1,	// (0x0006af3f) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c9,	// (0x0006af47) bg_sp_fs_schedule_viewer_highlight_g8

0xaccc,	// (0x0006854a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0006d641) bg_sp_fs_schedule_viewer_highlight_g

0x9cb1,	// (0x0006752f) bg_main_sp_fs_ribbon_pane

0x8fb3,	// (0x00066831) main_sp_fs_ribbon_pane_g1

0xe98e,	// (0x0006c20c) main_sp_fs_ribbon_pane_t1

0x8fbc,	// (0x0006683a) main_sp_fs_ribbon_pane_t2

0xe99d,	// (0x0006c21b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0006d654) main_sp_fs_ribbon_pane_t

0xe9ac,	// (0x0006c22a) main_sp_fs_ribbon_scheduler_pane

0xe9b4,	// (0x0006c232) bg_main_sp_fs_ribbon_pane_g1

0xe9bd,	// (0x0006c23b) bg_main_sp_fs_ribbon_pane_g2

0xe9c6,	// (0x0006c244) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0006d65b) bg_main_sp_fs_ribbon_pane_g

0xe9ce,	// (0x0006c24c) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d7,	// (0x0006c255) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e0,	// (0x0006c25e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0006d662) main_sp_fs_ribbon_scheduler_pane_g

0xe9e9,	// (0x0006c267) list_cale_mrui_pane

0x8fcb,	// (0x00066849) sp_fs_scroll_pane_cp07_ParamLimits

0x8fcb,	// (0x00066849) sp_fs_scroll_pane_cp07

0x8fe7,	// (0x00066865) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fe7,	// (0x00066865) bg_sp_fs_schedule_viewer_highlight

0xe9f6,	// (0x0006c274) list_single_sp_fs_schedule_track_pane_cp01

0xe9fe,	// (0x0006c27c) list_sp_fs_schedule_track_pane

0xea06,	// (0x0006c284) sp_fs_scroll_pane_cp06_ParamLimits

0xea06,	// (0x0006c284) sp_fs_scroll_pane_cp06

0xccb1,	// (0x0006a52f) bgmain_sp_fs_calendar_pane_g1

0x8ff4,	// (0x00066872) list_single_cale_mrui_pane_ParamLimits

0x8ff4,	// (0x00066872) list_single_cale_mrui_pane

0xa664,	// (0x00067ee2) list_single_cale_mrui_row_pane_ParamLimits

0xa664,	// (0x00067ee2) list_single_cale_mrui_row_pane

0xa67a,	// (0x00067ef8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa67a,	// (0x00067ef8) list_single_cale_mrui_row_pane_g1

0xa6b2,	// (0x00067f30) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa6b2,	// (0x00067f30) list_single_cale_mrui_row_pane_t1

0x9009,	// (0x00066887) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9009,	// (0x00066887) list_single_cale_mrui_row_pane_t2

0xa6c4,	// (0x00067f42) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa6c4,	// (0x00067f42) list_single_cale_mrui_row_pane_t3

0xa6f3,	// (0x00067f71) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa6f3,	// (0x00067f71) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0006d670) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0006d670) list_single_cale_mrui_row_pane_t

0x906f,	// (0x000668ed) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x906f,	// (0x000668ed) list_single_cmail_header_editor_pane_bg_cp01

0x9093,	// (0x00066911) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9093,	// (0x00066911) list_single_cmail_header_editor_pane_bg_cp02

0x90af,	// (0x0006692d) main_radioblah_text_pane_t1_ParamLimits

0x90af,	// (0x0006692d) main_radioblah_text_pane_t1

0xea25,	// (0x0006c2a3) cam6_indi_pane_cp01

0xea2d,	// (0x0006c2ab) cam6_mode_pane_cp01

0xea35,	// (0x0006c2b3) cam6_pano_pane

0xea3e,	// (0x0006c2bc) cam6_zoom_pane_cp01

0xea48,	// (0x0006c2c6) cam6_pano_image_pane

0xea51,	// (0x0006c2cf) cam6_pano_pane_g1

0xe31f,	// (0x0006bb9d) cam6_pano_pane_g2

0xea5a,	// (0x0006c2d8) cam6_pano_pane_g3

0xea63,	// (0x0006c2e1) cam6_pano_pane_g4

0xd22b,	// (0x0006aaa9) cam6_pano_pane_g5

0xea6c,	// (0x0006c2ea) cam6_pano_pane_g6

0xea74,	// (0x0006c2f2) cam6_pano_pane_g7

0xea7c,	// (0x0006c2fa) cam6_pano_pane_g8

0xea85,	// (0x0006c303) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0006d679) cam6_pano_pane_g

0x9cb1,	// (0x0006752f) main_browser_tag_pane

0xe8dd,	// (0x0006c15b) grid_navstr_albumart_pane

0xea90,	// (0x0006c30e) cell_navstr_albumart_pane_ParamLimits

0xea90,	// (0x0006c30e) cell_navstr_albumart_pane

0xeaaf,	// (0x0006c32d) cell_navstr_albumart_pane_g1

0xc66d,	// (0x00069eeb) cell_navstr_albumart_pane_g2

0xc67d,	// (0x00069efb) cell_navstr_albumart_pane_g3

0xc675,	// (0x00069ef3) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0006d68c) cell_navstr_albumart_pane_g

0x90c9,	// (0x00066947) bt_list_pane_ParamLimits

0x90c9,	// (0x00066947) bt_list_pane

0x90e2,	// (0x00066960) bt_list_pane_t1

0x90f1,	// (0x0006696f) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0006d695) bt_list_pane_t

0x9cb1,	// (0x0006752f) main_cale_prevew_pane

0x9100,	// (0x0006697e) popup_cale_preview_window_ParamLimits

0x9100,	// (0x0006697e) popup_cale_preview_window

0xa348,	// (0x00067bc6) bg_popup_preview_window_pane_cp05_ParamLimits

0xa348,	// (0x00067bc6) bg_popup_preview_window_pane_cp05

0xeab7,	// (0x0006c335) list_cale_preview_pane_ParamLimits

0xeab7,	// (0x0006c335) list_cale_preview_pane

0x911b,	// (0x00066999) list_double_cale_preview_pane_ParamLimits

0x911b,	// (0x00066999) list_double_cale_preview_pane

0x912f,	// (0x000669ad) list_single_cale_preview_pane_ParamLimits

0x912f,	// (0x000669ad) list_single_cale_preview_pane

0x9147,	// (0x000669c5) list_single_cale_preview_pane_g1

0x914f,	// (0x000669cd) list_single_cale_preview_pane_t1_ParamLimits

0x914f,	// (0x000669cd) list_single_cale_preview_pane_t1

0x9164,	// (0x000669e2) list_double_cale_preview_pane_g1

0x916c,	// (0x000669ea) list_double_cale_preview_pane_t1_ParamLimits

0x916c,	// (0x000669ea) list_double_cale_preview_pane_t1

0x9181,	// (0x000669ff) list_double_cale_preview_pane_t2_ParamLimits

0x9181,	// (0x000669ff) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0006d69a) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0006d69a) list_double_cale_preview_pane_t

0x9cb1,	// (0x0006752f) main_ezdial_pane

0xa348,	// (0x00067bc6) main_sp_fs_email_pane_ParamLimits

0x871d,	// (0x00065f9b) cmail_ddmenu_btn01_pane_ParamLimits

0x871d,	// (0x00065f9b) cmail_ddmenu_btn01_pane

0x873a,	// (0x00065fb8) cmail_ddmenu_btn02_pane_ParamLimits

0x873a,	// (0x00065fb8) cmail_ddmenu_btn02_pane

0x8758,	// (0x00065fd6) cmail_ddmenu_btn03_pane_ParamLimits

0x8758,	// (0x00065fd6) cmail_ddmenu_btn03_pane

0x8788,	// (0x00066006) main_sp_fs_ctrlbar_pane_ParamLimits

0x87a2,	// (0x00066020) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d76,	// (0x000665f4) list_cmail_body_pane_ParamLimits

0x8df1,	// (0x0006666f) bg_button_pane_cp12

0xe866,	// (0x0006c0e4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe866,	// (0x0006c0e4) list_single_cmail_header_detail_pane_g3

0xa5c2,	// (0x00067e40) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa5c2,	// (0x00067e40) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0006d61d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0006d61d) list_single_cmail_header_detail_pane_t

0xa603,	// (0x00067e81) phacti_term_pane_t2_ParamLimits

0xa603,	// (0x00067e81) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0006d627) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0006d627) phacti_term_pane_t

0xeac3,	// (0x0006c341) aid_size_list_single_double

0x9199,	// (0x00066a17) popup_ezdial_listscroll_window

0x91bb,	// (0x00066a39) popup_number_entry_window_cp01

0xb440,	// (0x00068cbe) bg_popup_call_pane_cp09

0xeacf,	// (0x0006c34d) ezdial_list_pane

0xead7,	// (0x0006c355) scroll_pane_cp23

0xca90,	// (0x0006a30e) bg_button_pane_cp028_ParamLimits

0xca90,	// (0x0006a30e) bg_button_pane_cp028

0x91c9,	// (0x00066a47) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x91c9,	// (0x00066a47) cmail_ddmenu_btn01_pane_g1

0x91db,	// (0x00066a59) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91db,	// (0x00066a59) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0006d69f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0006d69f) cmail_ddmenu_btn01_pane_g

0xeadf,	// (0x0006c35d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeadf,	// (0x0006c35d) cmail_ddmenu_btn01_pane_t1

0xc860,	// (0x0006a0de) bg_button_pane_cp029_ParamLimits

0xc860,	// (0x0006a0de) bg_button_pane_cp029

0x91e7,	// (0x00066a65) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91e7,	// (0x00066a65) cmail_ddmenu_btn02_pane_g1

0x91ff,	// (0x00066a7d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91ff,	// (0x00066a7d) cmail_ddmenu_btn02_pane_t1

0x0e6c,	// (0x0005e6ea) bg_button_pane_cp031_ParamLimits

0x0e6c,	// (0x0005e6ea) bg_button_pane_cp031

0x91e7,	// (0x00066a65) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91e7,	// (0x00066a65) cmail_ddmenu_btn03_pane_g1

0x91ff,	// (0x00066a7d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91ff,	// (0x00066a7d) cmail_ddmenu_btn03_pane_t1

0x6136,	// (0x000639b4) cell_dialer2_keypad_pane_t1_ParamLimits

0x6150,	// (0x000639ce) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6150,	// (0x000639ce) cell_dialer2_keypad_pane_t1_copy1

0x803a,	// (0x000658b8) ncimui_group_button_pane

0xa348,	// (0x00067bc6) main_sp_fs_calendar_pane_ParamLimits

0x8d8f,	// (0x0006660d) list_single_cmail_header_caption_pane_ParamLimits

0xa618,	// (0x00067e96) aid_recal_txt_sm_pane

0x9cb1,	// (0x0006752f) mian_recal_day_pane

0xa652,	// (0x00067ed0) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf5,	// (0x0006c373) list_recal_day_pane

0xa73e,	// (0x00067fbc) list_single_recal_day_pane_ParamLimits

0xa73e,	// (0x00067fbc) list_single_recal_day_pane

0xeb1c,	// (0x0006c39a) list_single_recal_day_pane_g1_ParamLimits

0xeb1c,	// (0x0006c39a) list_single_recal_day_pane_g1

0xa750,	// (0x00067fce) list_single_recal_day_pane_g2_ParamLimits

0xa750,	// (0x00067fce) list_single_recal_day_pane_g2

0xa75c,	// (0x00067fda) list_single_recal_day_pane_g3_ParamLimits

0xa75c,	// (0x00067fda) list_single_recal_day_pane_g3

0x9223,	// (0x00066aa1) list_single_recal_day_pane_g4_ParamLimits

0x9223,	// (0x00066aa1) list_single_recal_day_pane_g4

0xa768,	// (0x00067fe6) list_single_recal_day_pane_g5_ParamLimits

0xa768,	// (0x00067fe6) list_single_recal_day_pane_g5

0xaf93,	// (0x00068811) list_single_recal_day_pane_g6_ParamLimits

0xaf93,	// (0x00068811) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0006d6ae) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0006d6ae) list_single_recal_day_pane_g

0xafa7,	// (0x00068825) list_single_recal_day_pane_t1

0xafb9,	// (0x00068837) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0006d6b9) list_single_recal_day_pane_t

0x923b,	// (0x00066ab9) ncimui_query_button_pane_ParamLimits

0x923b,	// (0x00066ab9) ncimui_query_button_pane

0x924b,	// (0x00066ac9) ncimui_query_button_pane_t1_ParamLimits

0x924b,	// (0x00066ac9) ncimui_query_button_pane_t1

0xeb28,	// (0x0006c3a6) ncimui_query_button_pane_t2_ParamLimits

0xeb28,	// (0x0006c3a6) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0006d6be) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0006d6be) ncimui_query_button_pane_t

0x925e,	// (0x00066adc) query_button_pane_ParamLimits

0x925e,	// (0x00066adc) query_button_pane

0x9cb1,	// (0x0006752f) bg_button_pane_cp0028

0xeb3b,	// (0x0006c3b9) query_button_pane_t1

0x4501,	// (0x00061d7f) main_tport_pane_ParamLimits

0x8c78,	// (0x000664f6) bg_popup_window_pane_cp01_ParamLimits

0x8c78,	// (0x000664f6) bg_popup_window_pane_cp01

0x8c86,	// (0x00066504) heading_pane_cp08_ParamLimits

0x8c86,	// (0x00066504) heading_pane_cp08

0x8c94,	// (0x00066512) heading_pane_cp07_ParamLimits

0x8c94,	// (0x00066512) heading_pane_cp07

0x8d05,	// (0x00066583) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0006d60a) cell_tport_appsw_pane_g

0x3c57,	// (0x000614d5) input_candi_list_open_g1

0xaea0,	// (0x0006871e) list_cale_time_pane_g6_ParamLimits

0xaea0,	// (0x0006871e) list_cale_time_pane_g6

0x4f84,	// (0x00062802) aid_size_touch_calib_1_ParamLimits

0x4f84,	// (0x00062802) aid_size_touch_calib_1

0x4f90,	// (0x0006280e) aid_size_touch_calib_2_ParamLimits

0x4f90,	// (0x0006280e) aid_size_touch_calib_2

0x4f9e,	// (0x0006281c) aid_size_touch_calib_3_ParamLimits

0x4f9e,	// (0x0006281c) aid_size_touch_calib_3

0x4fae,	// (0x0006282c) aid_size_touch_calib_4_ParamLimits

0x4fae,	// (0x0006282c) aid_size_touch_calib_4

0x4fbc,	// (0x0006283a) main_touch_calib_button_group_pane_ParamLimits

0x4fbc,	// (0x0006283a) main_touch_calib_button_group_pane

0x4fca,	// (0x00062848) main_touch_calib_pane_g1_ParamLimits

0x4fd6,	// (0x00062854) main_touch_calib_pane_g2_ParamLimits

0x4fe2,	// (0x00062860) main_touch_calib_pane_g3_ParamLimits

0x4fee,	// (0x0006286c) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0006cfd4) main_touch_calib_pane_g_ParamLimits

0x4ffa,	// (0x00062878) main_touch_calib_pane_t1_ParamLimits

0x5011,	// (0x0006288f) main_touch_calib_pane_t2_ParamLimits

0x502a,	// (0x000628a8) main_touch_calib_pane_t3_ParamLimits

0x5040,	// (0x000628be) main_touch_calib_pane_t4_ParamLimits

0x5056,	// (0x000628d4) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0006cfdd) main_touch_calib_pane_t_ParamLimits

0xcfe1,	// (0x0006a85f) list_single_fp_cale_pane_g3_ParamLimits

0xcfe1,	// (0x0006a85f) list_single_fp_cale_pane_g3

0x65db,	// (0x00063e59) bg_button_pane_cp012_ParamLimits

0x65db,	// (0x00063e59) bg_vkb2_func_pane_cp03_ParamLimits

0x7002,	// (0x00064880) cell_vitu2_function_top_pane_g1_ParamLimits

0x65db,	// (0x00063e59) bg_vkb2_func_pane_cp04_ParamLimits

0x7fc0,	// (0x0006583e) main_ncimui_button_group_pane_ParamLimits

0x7fc0,	// (0x0006583e) main_ncimui_button_group_pane

0x8028,	// (0x000658a6) main_ncimui_pane_t3_ParamLimits

0x8028,	// (0x000658a6) main_ncimui_pane_t3

0xe8f3,	// (0x0006c171) phacti_button_group_pane

0xeac3,	// (0x0006c341) aid_size_list_single_double_ParamLimits

0x9199,	// (0x00066a17) popup_ezdial_listscroll_window_ParamLimits

0x91bb,	// (0x00066a39) popup_number_entry_window_cp01_ParamLimits

0x926b,	// (0x00066ae9) phacti_button_pane_ParamLimits

0x926b,	// (0x00066ae9) phacti_button_pane

0x9cb1,	// (0x0006752f) bg_button_pane_cp14

0xeb49,	// (0x0006c3c7) phacti_button_pane_t1

0x927c,	// (0x00066afa) main_touch_calib_button_pane_ParamLimits

0x927c,	// (0x00066afa) main_touch_calib_button_pane

0xa8c3,	// (0x00068141) bg_button_pane_cp18_ParamLimits

0xa8c3,	// (0x00068141) bg_button_pane_cp18

0xeb57,	// (0x0006c3d5) main_touch_calib_button_pane_t1_ParamLimits

0xeb57,	// (0x0006c3d5) main_touch_calib_button_pane_t1

0xeb6d,	// (0x0006c3eb) main_touch_calib_button_pane_t2_ParamLimits

0xeb6d,	// (0x0006c3eb) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0006d6c3) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0006d6c3) main_touch_calib_button_pane_t

0x9cb1,	// (0x0006752f) cell_ncimui_button_pane

0x9cb1,	// (0x0006752f) bg_button_pane_cp032

0xeb8b,	// (0x0006c409) cell_ncimui_button_pane_t1

0x61ac,	// (0x00063a2a) image3_infobar_pane_ParamLimits

0x61ac,	// (0x00063a2a) image3_infobar_pane

0x83b5,	// (0x00065c33) fs_bigclock_status_pane_ParamLimits

0x83b5,	// (0x00065c33) fs_bigclock_status_pane

0x83c2,	// (0x00065c40) main_fs_bigclock_clock_pane_ParamLimits

0x83c2,	// (0x00065c40) main_fs_bigclock_clock_pane

0x83d8,	// (0x00065c56) main_fs_bigclock_indi_pane_ParamLimits

0x83d8,	// (0x00065c56) main_fs_bigclock_indi_pane

0x840a,	// (0x00065c88) main_fs_bigclock_swipe_pane_ParamLimits

0x840a,	// (0x00065c88) main_fs_bigclock_swipe_pane

0x9cb1,	// (0x0006752f) main_fs_clock_dumped_data

0xe42c,	// (0x0006bcaa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe42c,	// (0x0006bcaa) list_single_fs_bigclock_indicator_pane_g1

0xe456,	// (0x0006bcd4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe456,	// (0x0006bcd4) list_single_fs_bigclock_indicator_pane_g2

0xe470,	// (0x0006bcee) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe470,	// (0x0006bcee) list_single_fs_bigclock_indicator_pane_g3

0xe48a,	// (0x0006bd08) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe48a,	// (0x0006bd08) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0006d4eb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0006d4eb) list_single_fs_bigclock_indicator_pane_g

0xe4b5,	// (0x0006bd33) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b5,	// (0x0006bd33) list_single_fs_bigclock_indicator_pane_t1

0xe4dd,	// (0x0006bd5b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4dd,	// (0x0006bd5b) list_single_fs_bigclock_indicator_pane_t2

0xe505,	// (0x0006bd83) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe505,	// (0x0006bd83) list_single_fs_bigclock_indicator_pane_t3

0xe52d,	// (0x0006bdab) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52d,	// (0x0006bdab) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0006d4f6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0006d4f6) list_single_fs_bigclock_indicator_pane_t

0xeb99,	// (0x0006c417) image3_infobar_fav_pane_ParamLimits

0xeb99,	// (0x0006c417) image3_infobar_fav_pane

0xeba9,	// (0x0006c427) image3_infobar_loc_pane_ParamLimits

0xeba9,	// (0x0006c427) image3_infobar_loc_pane

0xebbf,	// (0x0006c43d) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x0006c43d) image3_infobar_time_pane

0xccb1,	// (0x0006a52f) image3_infobar_time_pane_g1

0xebcf,	// (0x0006c44d) image3_infobar_time_pane_t1

0xccb1,	// (0x0006a52f) image3_infobar_loc_pane_g1

0xebdd,	// (0x0006c45b) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0006d6c8) image3_infobar_loc_pane_g

0xebe5,	// (0x0006c463) image3_infobar_loc_pane_t1

0xccb1,	// (0x0006a52f) image3_infobar_fav_pane_g1

0xebf3,	// (0x0006c471) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0006d6cd) image3_infobar_fav_pane_g

0xebfb,	// (0x0006c479) fs_bigclock_status_battery_pane

0xec04,	// (0x0006c482) fs_bigclock_status_signal_pane

0xec0d,	// (0x0006c48b) fs_bigclock_status_title_pane

0xec16,	// (0x0006c494) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x0006c49d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0006d6d2) fs_bigclock_status_signal_pane_g

0xec27,	// (0x0006c4a5) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x0006c4ae) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0006d6d7) fs_bigclock_status_battery_pane_g

0xec38,	// (0x0006c4b6) fs_bigclock_status_title_pane_t1

0xccb1,	// (0x0006a52f) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x0006c4c4) main_fs_bigclock_clock_pane_g2

0xec46,	// (0x0006c4c4) main_fs_bigclock_clock_pane_g3

0xec46,	// (0x0006c4c4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0006d6dc) main_fs_bigclock_clock_pane_g

0xec4e,	// (0x0006c4cc) main_fs_bigclock_clock_pane_t1

0xec5c,	// (0x0006c4da) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0006d6e5) main_fs_bigclock_clock_pane_t

0x928c,	// (0x00066b0a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x928c,	// (0x00066b0a) list_single_fs_bigclock_indicator_pane

0x929d,	// (0x00066b1b) list_single_fs_bigclock_pane_ParamLimits

0x929d,	// (0x00066b1b) list_single_fs_bigclock_pane

0xec74,	// (0x0006c4f2) main_fs_bigclock_indicator_pane_t1

0xec83,	// (0x0006c501) list_single_fs_bigclock_pane_g1

0xec8b,	// (0x0006c509) list_single_fs_bigclock_pane_t1

0xccb1,	// (0x0006a52f) main_fs_bigclock_swipe_pane_g1

0xecce,	// (0x0006c54c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0006d6f6) main_fs_bigclock_swipe_pane_g

0xecd6,	// (0x0006c554) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd6,	// (0x0006c554) main_fs_bigclock_swipe_pane_t1

0x3382,	// (0x00060c00) call_type_pane_ParamLimits

0x9cb1,	// (0x0006752f) main_btmg_pane

0xa6a6,	// (0x00067f24) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa6a6,	// (0x00067f24) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0006d669) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0006d669) list_single_cale_mrui_row_pane_g

0xa72c,	// (0x00067faa) list_recal_vselct_arw_lo_pane

0xeb14,	// (0x0006c392) list_recal_vselct_arw_up_pane

0xa734,	// (0x00067fb2) list_recal_vselct_pane

0x92f3,	// (0x00066b71) btmg_button_pane

0x92ff,	// (0x00066b7d) main_btmg_pane_g1

0x9cb1,	// (0x0006752f) bg_button_pane_cp044

0xecf3,	// (0x0006c571) btmg_button_pane_t1

0xc84c,	// (0x0006a0ca) aid_listscroll_gen

0xa348,	// (0x00067bc6) main_cntbar_detail_pane

0xe847,	// (0x0006c0c5) list_cmail_folder_pane

0xe857,	// (0x0006c0d5) sp_fs_scroll_pane_cp03_ParamLimits

0x9307,	// (0x00066b85) list_single_fs_dyc_pane_cp01_ParamLimits

0x9307,	// (0x00066b85) list_single_fs_dyc_pane_cp01

0xed01,	// (0x0006c57f) aid_size_cmail_indent

0xafcb,	// (0x00068849) list_single_dyc_row_pane_cp01

0x9348,	// (0x00066bc6) cntbar_detail_list_pane_ParamLimits

0x9348,	// (0x00066bc6) cntbar_detail_list_pane

0x9388,	// (0x00066c06) main_cntbar_detail_cont_pane_ParamLimits

0x9388,	// (0x00066c06) main_cntbar_detail_cont_pane

0x32a5,	// (0x00060b23) scroll_pane_cp032_ParamLimits

0x32a5,	// (0x00060b23) scroll_pane_cp032

0x9394,	// (0x00066c12) cntbar_detail_list_event_pane_ParamLimits

0x9394,	// (0x00066c12) cntbar_detail_list_event_pane

0x9356,	// (0x00066bd4) cntbar_detail_list_shct_pane

0xad3a,	// (0x000685b8) aid_list_gen

0xed0a,	// (0x0006c588) aid_scroll

0xed13,	// (0x0006c591) aid_size_touch_scroll_bar

0x7761,	// (0x00064fdf) aid_list_double

0xed1c,	// (0x0006c59a) aid_list_single

0x774f,	// (0x00064fcd) aid_list_single_lg

0xafd4,	// (0x00068852) aid_list_z_g_a_sm

0xafdc,	// (0x0006885a) aid_list_z_g_d

0xafe4,	// (0x00068862) aid_txt_z_prm

0x93a4,	// (0x00066c22) aid_txt_z_prm_cp01

0x93b2,	// (0x00066c30) aid_txt_z_sec

0x93c0,	// (0x00066c3e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93c0,	// (0x00066c3e) main_cntbar_detail_cont_pane_g1

0x93cd,	// (0x00066c4b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93cd,	// (0x00066c4b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0006d6fb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0006d6fb) main_cntbar_detail_cont_pane_g

0xed25,	// (0x0006c5a3) main_cntbar_detail_cont_pane_t1

0xed33,	// (0x0006c5b1) main_cntbar_detail_cont_pane_t2

0xed41,	// (0x0006c5bf) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0006d700) main_cntbar_detail_cont_pane_t

0x93d9,	// (0x00066c57) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93d9,	// (0x00066c57) cell_cntbar_detail_list_shct_pane

0xed4f,	// (0x0006c5cd) cntbar_detail_list_shct_pane_g1

0xed58,	// (0x0006c5d6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0006d707) cntbar_detail_list_shct_pane_g

0x93ed,	// (0x00066c6b) cntbar_detail_list_event_pane_g1_ParamLimits

0x93ed,	// (0x00066c6b) cntbar_detail_list_event_pane_g1

0x93f9,	// (0x00066c77) cntbar_detail_list_event_pane_g2_ParamLimits

0x93f9,	// (0x00066c77) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0006d70c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0006d70c) cntbar_detail_list_event_pane_g

0x9467,	// (0x00066ce5) cntbar_detail_list_event_pane_t1_ParamLimits

0x9467,	// (0x00066ce5) cntbar_detail_list_event_pane_t1

0x947c,	// (0x00066cfa) cntbar_detail_list_event_pane_t2_ParamLimits

0x947c,	// (0x00066cfa) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0006d719) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0006d719) cntbar_detail_list_event_pane_t

0xccb1,	// (0x0006a52f) cell_cntbar_detail_list_shct_pane_g1

0x3755,	// (0x00060fd3) navi_pane_mv_g3

0xa348,	// (0x00067bc6) main_cntbar_detail_pane_ParamLimits

0x9cb1,	// (0x0006752f) main_notif_wgt_pane

0x5e56,	// (0x000636d4) aid_tch_main_mp4_pane_g4

0x6095,	// (0x00063913) popup_slider_window_cp02

0xa722,	// (0x00067fa0) list_recal_day_event_pane

0x9328,	// (0x00066ba6) cntbar_detail_btn_pane_ParamLimits

0x9328,	// (0x00066ba6) cntbar_detail_btn_pane

0x9338,	// (0x00066bb6) cntbar_detail_btn_pane_cp01_ParamLimits

0x9338,	// (0x00066bb6) cntbar_detail_btn_pane_cp01

0x9356,	// (0x00066bd4) cntbar_detail_list_shct_pane_ParamLimits

0x9362,	// (0x00066be0) cntbar_detail_pane_g1_ParamLimits

0x9362,	// (0x00066be0) cntbar_detail_pane_g1

0x9372,	// (0x00066bf0) cntbar_detail_pane_t1_ParamLimits

0x9372,	// (0x00066bf0) cntbar_detail_pane_t1

0x9405,	// (0x00066c83) cntbar_detail_list_event_pane_g3_ParamLimits

0x9405,	// (0x00066c83) cntbar_detail_list_event_pane_g3

0x941d,	// (0x00066c9b) cntbar_detail_list_event_pane_g4_ParamLimits

0x941d,	// (0x00066c9b) cntbar_detail_list_event_pane_g4

0x9435,	// (0x00066cb3) cntbar_detail_list_event_pane_g5_ParamLimits

0x9435,	// (0x00066cb3) cntbar_detail_list_event_pane_g5

0x944d,	// (0x00066ccb) cntbar_detail_list_event_pane_g6_ParamLimits

0x944d,	// (0x00066ccb) cntbar_detail_list_event_pane_g6

0x9491,	// (0x00066d0f) cntbar_detail_list_event_pane_t3_ParamLimits

0x9491,	// (0x00066d0f) cntbar_detail_list_event_pane_t3

0x94a3,	// (0x00066d21) popup_notif_wgt_window_ParamLimits

0x94a3,	// (0x00066d21) popup_notif_wgt_window

0x94b3,	// (0x00066d31) popup_submenu_window_cp01_ParamLimits

0x94b3,	// (0x00066d31) popup_submenu_window_cp01

0xb440,	// (0x00068cbe) bg_popup_window_pane_cp10

0xed61,	// (0x0006c5df) listscroll_notif_wgt_pane

0xed73,	// (0x0006c5f1) list_notif_wgt_window

0xed7c,	// (0x0006c5fa) scroll_pane_cp033

0x94c3,	// (0x00066d41) list_notif_wgt_row_pane_ParamLimits

0x94c3,	// (0x00066d41) list_notif_wgt_row_pane

0xed85,	// (0x0006c603) aid_size_list_notif_wgt_del

0xed92,	// (0x0006c610) list_notif_wgt_row_pane_g1

0xed9e,	// (0x0006c61c) list_notif_wgt_row_pane_g2

0xedaa,	// (0x0006c628) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0006d720) list_notif_wgt_row_pane_g

0xedb7,	// (0x0006c635) list_notif_wgt_row_pane_t1

0xedcc,	// (0x0006c64a) list_notif_wgt_row_pane_t2

0xedde,	// (0x0006c65c) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0006d727) list_notif_wgt_row_pane_t

0xd8dd,	// (0x0006b15b) list_recal_day_event_pane_g1

0xedf0,	// (0x0006c66e) list_recal_day_event_pane_t1

0x9cb1,	// (0x0006752f) bg_button_pane_cp045

0xedff,	// (0x0006c67d) cntbar_detail_btn_pane_t1

0xc860,	// (0x0006a0de) main_callh_pane_ParamLimits

0xc860,	// (0x0006a0de) main_callh_pane

0x9cb1,	// (0x0006752f) main_coverflow0_pane

0x9cb1,	// (0x0006752f) main_wgtman_pane

0x8422,	// (0x00065ca0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8422,	// (0x00065ca0) main_fs_bigclock_unlock_btn_pane

0x8cfd,	// (0x0006657b) bg_button_pane_cp16

0x8d0d,	// (0x0006658b) cell_tport_appsw_pane_g3

0x94d4,	// (0x00066d52) cf0_flow_pane_ParamLimits

0x94d4,	// (0x00066d52) cf0_flow_pane

0xee0d,	// (0x0006c68b) listscroll_cf0_pane

0xee18,	// (0x0006c696) main_cf0_pane_g1

0x94e3,	// (0x00066d61) main_cf0_pane_t1_ParamLimits

0x94e3,	// (0x00066d61) main_cf0_pane_t1

0x94f7,	// (0x00066d75) main_cf0_pane_t2_ParamLimits

0x94f7,	// (0x00066d75) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0006d733) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0006d733) main_cf0_pane_t

0xee2a,	// (0x0006c6a8) scroll_pane_cp11

0x950b,	// (0x00066d89) cf0_flow_pane_g1

0x9513,	// (0x00066d91) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0006d738) cf0_flow_pane_g

0x951b,	// (0x00066d99) cf0_flow_pane_t1

0x9cb1,	// (0x0006752f) main_call6_pane

0x9cb1,	// (0x0006752f) main_calllock_pane

0x9529,	// (0x00066da7) call6_btn_grp_pane_ParamLimits

0x9529,	// (0x00066da7) call6_btn_grp_pane

0x9536,	// (0x00066db4) call6_pane_g1_ParamLimits

0x9536,	// (0x00066db4) call6_pane_g1

0x9546,	// (0x00066dc4) popup_call6_1st_window_ParamLimits

0x9546,	// (0x00066dc4) popup_call6_1st_window

0x9554,	// (0x00066dd2) popup_call6_2nd_window_ParamLimits

0x9554,	// (0x00066dd2) popup_call6_2nd_window

0x9562,	// (0x00066de0) cell_call6_btn_pane_ParamLimits

0x9562,	// (0x00066de0) cell_call6_btn_pane

0xb440,	// (0x00068cbe) bg_popup_call2_in_pane_cp03

0xee35,	// (0x0006c6b3) popup_call6_1st_window_g1

0xee3d,	// (0x0006c6bb) popup_call6_1st_window_g2

0xee45,	// (0x0006c6c3) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0006d73d) popup_call6_1st_window_g

0xee4d,	// (0x0006c6cb) popup_call6_1st_window_t1

0xee5c,	// (0x0006c6da) popup_call6_1st_window_t2

0xee6c,	// (0x0006c6ea) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0006d744) popup_call6_1st_window_t

0xb440,	// (0x00068cbe) bg_popup_call2_in_pane_cp04

0xee35,	// (0x0006c6b3) popup_call6_2nd_window_g1

0xee3d,	// (0x0006c6bb) popup_call6_2nd_window_g2

0xee45,	// (0x0006c6c3) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0006d73d) popup_call6_2nd_window_g

0xee4d,	// (0x0006c6cb) popup_call6_2nd_window_t1

0x9cb1,	// (0x0006752f) bg_button_pane_cp15

0xee7c,	// (0x0006c6fa) cell_call6_btn_pane_g1

0xee85,	// (0x0006c703) cell_call6_btn_pane_t1

0x9571,	// (0x00066def) listscroll_wgtman_pane_ParamLimits

0x9571,	// (0x00066def) listscroll_wgtman_pane

0x958d,	// (0x00066e0b) wgtman_btn_pane_ParamLimits

0x958d,	// (0x00066e0b) wgtman_btn_pane

0xb2ec,	// (0x00068b6a) aid_scroll_copy1

0xee94,	// (0x0006c712) list_wgtman_pane

0x95c2,	// (0x00066e40) wgtman_btn_pane_g1_ParamLimits

0x95c2,	// (0x00066e40) wgtman_btn_pane_g1

0x95ea,	// (0x00066e68) wgtman_btn_pane_t1_ParamLimits

0x95ea,	// (0x00066e68) wgtman_btn_pane_t1

0xee9e,	// (0x0006c71c) wgtman_btn_pane_t2_ParamLimits

0xee9e,	// (0x0006c71c) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0006d74b) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0006d74b) wgtman_btn_pane_t

0x9621,	// (0x00066e9f) listrow_wgtman_pane_ParamLimits

0x9621,	// (0x00066e9f) listrow_wgtman_pane

0x9635,	// (0x00066eb3) listrow_wgtman_pane_g1

0x9642,	// (0x00066ec0) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0006d750) listrow_wgtman_pane_g

0x9660,	// (0x00066ede) listrow_wgtman_pane_t1

0x9678,	// (0x00066ef6) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0006d755) listrow_wgtman_pane_t

0x969e,	// (0x00066f1c) wait_bar_pane_cp09

0xeeb5,	// (0x0006c733) main_calllock_btn_pane

0xeebf,	// (0x0006c73d) main_calllock_pane_g1

0x9cb1,	// (0x0006752f) bg_button_pane_cp17

0xeecb,	// (0x0006c749) main_calllock_btn_pane_g1

0xeed4,	// (0x0006c752) main_calllock_btn_pane_t1

0x9cb1,	// (0x0006752f) main_dialer3_pane

0x9cb1,	// (0x0006752f) main_fmrd2_pane

0xccb1,	// (0x0006a52f) main_fs_bigclock_unlock_btn_pane_g1

0xeeeb,	// (0x0006c769) main_fs_bigclock_unlock_btn_pane_t1

0x96b0,	// (0x00066f2e) area_fmrd2_info_pane_ParamLimits

0x96b0,	// (0x00066f2e) area_fmrd2_info_pane

0x96bc,	// (0x00066f3a) area_fmrd2_visual_pane_ParamLimits

0x96bc,	// (0x00066f3a) area_fmrd2_visual_pane

0x96ca,	// (0x00066f48) fmrd2_indi_pane_ParamLimits

0x96ca,	// (0x00066f48) fmrd2_indi_pane

0x96d7,	// (0x00066f55) area_fmrd2_visual_pane_g1

0x96df,	// (0x00066f5d) area_fmrd2_visual_pane_t1

0x96ef,	// (0x00066f6d) area_fmrd2_visual_pane_t2

0x96ff,	// (0x00066f7d) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0006d75f) area_fmrd2_visual_pane_t

0x970f,	// (0x00066f8d) area_fmrd2_info_pane_g1

0x9717,	// (0x00066f95) area_fmrd2_info_pane_t1

0x9727,	// (0x00066fa5) area_fmrd2_info_pane_t2

0x9737,	// (0x00066fb5) area_fmrd2_info_pane_t3

0x9747,	// (0x00066fc5) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0006d766) area_fmrd2_info_pane_t

0x9757,	// (0x00066fd5) fmrd2_indi_pane_t1

0x9767,	// (0x00066fe5) fmrd2_indi_pane_t2

0x9777,	// (0x00066ff5) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0006d76f) fmrd2_indi_pane_t

0xe499,	// (0x0006bd17) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe499,	// (0x0006bd17) list_single_fs_bigclock_indicator_pane_g5

0xe542,	// (0x0006bdc0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe542,	// (0x0006bdc0) list_single_fs_bigclock_indicator_pane_t5

0x8f0d,	// (0x0006678b) aid_cell_bcale_month_pane_ParamLimits

0x8f0d,	// (0x0006678b) aid_cell_bcale_month_pane

0x8f2b,	// (0x000667a9) bcale_month_pane_ParamLimits

0x8f2b,	// (0x000667a9) bcale_month_pane

0x8f47,	// (0x000667c5) bcale_preview_pane_ParamLimits

0x8f47,	// (0x000667c5) bcale_preview_pane

0xec8b,	// (0x0006c509) list_single_fs_bigclock_pane_t1_ParamLimits

0xecaa,	// (0x0006c528) list_single_fs_bigclock_pane_t2_ParamLimits

0xecaa,	// (0x0006c528) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0006d6f1) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0006d6f1) list_single_fs_bigclock_pane_t

0xeee3,	// (0x0006c761) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0006d75a) main_fs_bigclock_unlock_btn_pane_g

0x9787,	// (0x00067005) aid_dia3_key_size_ParamLimits

0x9787,	// (0x00067005) aid_dia3_key_size

0x9793,	// (0x00067011) aid_dia3_listrow_size_ParamLimits

0x9793,	// (0x00067011) aid_dia3_listrow_size

0x97a3,	// (0x00067021) dia3_keypad_fun_pane_ParamLimits

0x97a3,	// (0x00067021) dia3_keypad_fun_pane

0x97b3,	// (0x00067031) dia3_keypad_num_pane_ParamLimits

0x97b3,	// (0x00067031) dia3_keypad_num_pane

0x97c3,	// (0x00067041) dia3_listscroll_pane_ParamLimits

0x97c3,	// (0x00067041) dia3_listscroll_pane

0x97d1,	// (0x0006704f) dia3_numentry_pane_ParamLimits

0x97d1,	// (0x0006704f) dia3_numentry_pane

0xeef9,	// (0x0006c777) dia3_list_pane

0xef04,	// (0x0006c782) scroll_pane_cp12

0x9cb1,	// (0x0006752f) bg_dia3_numentry_pane

0x97df,	// (0x0006705d) dia3_numentry_pane_t1

0x97ee,	// (0x0006706c) cell_dia3_key_num_pane

0x97f6,	// (0x00067074) cell_dia3_key0_fun_pane_ParamLimits

0x97f6,	// (0x00067074) cell_dia3_key0_fun_pane

0x9803,	// (0x00067081) cell_dia3_key1_fun_pane_ParamLimits

0x9803,	// (0x00067081) cell_dia3_key1_fun_pane

0x9810,	// (0x0006708e) dia3_listrow_pane

0xe17c,	// (0x0006b9fa) bg_dia3_numentry_pane_g1

0x9cb1,	// (0x0006752f) bg_button_pane_cp21

0xef0f,	// (0x0006c78d) cell_dia3_key_num_pane_t1

0xef1d,	// (0x0006c79b) cell_dia3_key_num_pane_t2

0xef2c,	// (0x0006c7aa) cell_dia3_key_num_pane_t3

0xef3b,	// (0x0006c7b9) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0006d776) cell_dia3_key_num_pane_t

0x9cb1,	// (0x0006752f) bg_button_pane_cp19

0x981d,	// (0x0006709b) cell_dia3_key0_fun_pane_g1

0x9cb1,	// (0x0006752f) bg_button_pane_cp20

0x9825,	// (0x000670a3) cell_dia3_key1_fun_pane_g1

0x982d,	// (0x000670ab) area_left_week_number_pane

0x9840,	// (0x000670be) area_top_day_name_pane

0x984e,	// (0x000670cc) frame_month_view_pane

0xef4a,	// (0x0006c7c8) grid_month_view_pane

0x9863,	// (0x000670e1) cell_top_day_name_pane_ParamLimits

0x9863,	// (0x000670e1) cell_top_day_name_pane

0x987f,	// (0x000670fd) cell_area_left_week_number_pane_ParamLimits

0x987f,	// (0x000670fd) cell_area_left_week_number_pane

0x98a0,	// (0x0006711e) cell_month_view_pane_ParamLimits

0x98a0,	// (0x0006711e) cell_month_view_pane

0xef58,	// (0x0006c7d6) frm_month_g1

0x98cc,	// (0x0006714a) frm_month_g2

0x98dd,	// (0x0006715b) frm_month_g3

0x98ee,	// (0x0006716c) frm_month_g4

0x98ff,	// (0x0006717d) frm_month_g5

0x9910,	// (0x0006718e) frm_month_g6

0x9923,	// (0x000671a1) frm_month_g7

0xef65,	// (0x0006c7e3) frm_month_g8

0x9936,	// (0x000671b4) frm_month_g9

0x9943,	// (0x000671c1) frm_month_g10

0x9950,	// (0x000671ce) frm_month_g11

0x995d,	// (0x000671db) frm_month_g12

0x996a,	// (0x000671e8) frm_month_g13

0x9979,	// (0x000671f7) frm_month_g14

0x9988,	// (0x00067206) frm_month_g15

0x9997,	// (0x00067215) frm_month_g16

0x000f,

0xff01,	// (0x0006d77f) frm_month_g

0xef72,	// (0x0006c7f0) cell_top_day_name_pane_t1

0x99a6,	// (0x00067224) cell_area_left_week_number_pane_g1

0x99b5,	// (0x00067233) cell_area_left_week_number_pane_t1

0xcee1,	// (0x0006a75f) cell_month_view_pane_g1

0x99cb,	// (0x00067249) cell_month_view_pane_t1

0x9cb1,	// (0x0006752f) main_fps_pane

0xe737,	// (0x0006bfb5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe737,	// (0x0006bfb5) cmail_ddmenu_btn02_pane_cp1

0xe753,	// (0x0006bfd1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe753,	// (0x0006bfd1) cmail_ddmenu_btn02_pane_cp2

0x91f3,	// (0x00066a71) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91f3,	// (0x00066a71) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0006d6a4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0006d6a4) cmail_ddmenu_btn02_pane_g

0x9211,	// (0x00066a8f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9211,	// (0x00066a8f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0006d6a9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0006d6a9) cmail_ddmenu_btn02_pane_t

0x99e1,	// (0x0006725f) fps_text_pane_ParamLimits

0x99e1,	// (0x0006725f) fps_text_pane

0x99ee,	// (0x0006726c) main_fps_pane_g1_ParamLimits

0x99ee,	// (0x0006726c) main_fps_pane_g1

0x99fa,	// (0x00067278) wait_bar_pane_cp010_ParamLimits

0x99fa,	// (0x00067278) wait_bar_pane_cp010

0x9a06,	// (0x00067284) fps_text_pane_t1_ParamLimits

0x9a06,	// (0x00067284) fps_text_pane_t1

0x64c9,	// (0x00063d47) cam4_image_uncrop_pane_g1

0x64d2,	// (0x00063d50) cam4_image_uncrop_pane_g2

0x64db,	// (0x00063d59) cam4_image_uncrop_pane_g3

0x64e4,	// (0x00063d62) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0006d16c) cam4_image_uncrop_pane_g

0x9810,	// (0x0006708e) dia3_listrow_pane_ParamLimits

0x9cb1,	// (0x0006752f) main_phob2_pane

0x8cdf,	// (0x0006655d) cell_tport_appsw_pane_cp02_ParamLimits

0x8cdf,	// (0x0006655d) cell_tport_appsw_pane_cp02

0x8cee,	// (0x0006656c) cell_tport_appsw_pane_cp03_ParamLimits

0x8cee,	// (0x0006656c) cell_tport_appsw_pane_cp03

0x9cb1,	// (0x0006752f) phob2_contact_card_pane

0x9cb1,	// (0x0006752f) phob2_listscroll_pane

0xef85,	// (0x0006c803) phob2_list_pane

0xef8d,	// (0x0006c80b) scroll_pane_cp034

0x9a1f,	// (0x0006729d) phob2_cc_data_pane_ParamLimits

0x9a1f,	// (0x0006729d) phob2_cc_data_pane

0x9a3b,	// (0x000672b9) phob2_cc_listscroll_pane_ParamLimits

0x9a3b,	// (0x000672b9) phob2_cc_listscroll_pane

0x9a57,	// (0x000672d5) list_double_large_graphic_phob2_pane_ParamLimits

0x9a57,	// (0x000672d5) list_double_large_graphic_phob2_pane

0x9a6f,	// (0x000672ed) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a6f,	// (0x000672ed) list_double_large_graphic_phob2_pane_g1

0x9a85,	// (0x00067303) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a85,	// (0x00067303) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0006d7a0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0006d7a0) list_double_large_graphic_phob2_pane_g

0x9a91,	// (0x0006730f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a91,	// (0x0006730f) list_double_large_graphic_phob2_pane_t1

0x9aa6,	// (0x00067324) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9aa6,	// (0x00067324) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0006d7a5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0006d7a5) list_double_large_graphic_phob2_pane_t

0x9cb1,	// (0x0006752f) list_highlight_pane_cp024

0x9ab8,	// (0x00067336) phob2_cc_button_pane

0x9ac0,	// (0x0006733e) phob2_cc_data_pane_g1_ParamLimits

0x9ac0,	// (0x0006733e) phob2_cc_data_pane_g1

0x9acc,	// (0x0006734a) phob2_cc_data_pane_g2_ParamLimits

0x9acc,	// (0x0006734a) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0006d7aa) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0006d7aa) phob2_cc_data_pane_g

0x9ad8,	// (0x00067356) phob2_cc_data_pane_t1_ParamLimits

0x9ad8,	// (0x00067356) phob2_cc_data_pane_t1

0x9aea,	// (0x00067368) phob2_cc_data_pane_t2_ParamLimits

0x9aea,	// (0x00067368) phob2_cc_data_pane_t2

0x9afc,	// (0x0006737a) phob2_cc_data_pane_t3_ParamLimits

0x9afc,	// (0x0006737a) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0006d7af) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0006d7af) phob2_cc_data_pane_t

0xef95,	// (0x0006c813) phob2_cc_list_pane_ParamLimits

0xef95,	// (0x0006c813) phob2_cc_list_pane

0xdb19,	// (0x0006b397) scroll_pane_cp035_ParamLimits

0xdb19,	// (0x0006b397) scroll_pane_cp035

0xa348,	// (0x00067bc6) bg_button_pane_cp033

0xefa1,	// (0x0006c81f) phob2_cc_button_pane_g1

0xefad,	// (0x0006c82b) phob2_cc_button_pane_t1

0xefc2,	// (0x0006c840) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0006d7b6) phob2_cc_button_pane_t

0x9b0e,	// (0x0006738c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b0e,	// (0x0006738c) list_double_large_graphic_phob2_cc_pane

0x9b2a,	// (0x000673a8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b2a,	// (0x000673a8) list_double_large_graphic_phob2_cc_pane_g1

0x9b3b,	// (0x000673b9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b3b,	// (0x000673b9) list_double_large_graphic_phob2_cc_pane_g2

0x9b4a,	// (0x000673c8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b4a,	// (0x000673c8) list_double_large_graphic_phob2_cc_pane_g3

0x9b59,	// (0x000673d7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b59,	// (0x000673d7) list_double_large_graphic_phob2_cc_pane_g4

0x9b6a,	// (0x000673e8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b6a,	// (0x000673e8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0006d7bb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0006d7bb) list_double_large_graphic_phob2_cc_pane_g

0x9b79,	// (0x000673f7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b79,	// (0x000673f7) list_double_large_graphic_phob2_cc_pane_t1

0x9ba2,	// (0x00067420) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ba2,	// (0x00067420) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0006d7c6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0006d7c6) list_double_large_graphic_phob2_cc_pane_t

0xefd4,	// (0x0006c852) list_highlight_pane_cp025_ParamLimits

0xefd4,	// (0x0006c852) list_highlight_pane_cp025

0xa348,	// (0x00067bc6) bg_button_pane_cp033_ParamLimits

0xefa1,	// (0x0006c81f) phob2_cc_button_pane_g1_ParamLimits

0xefad,	// (0x0006c82b) phob2_cc_button_pane_t1_ParamLimits

0xefc2,	// (0x0006c840) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0006d7b6) phob2_cc_button_pane_t_ParamLimits

0x0e7a,	// (0x0005e6f8) popup_wgtman_window

0xd7b7,	// (0x0006b035) scroll_pane_cp038

0x95aa,	// (0x00066e28) wgtman_btn_pane_cp_01_ParamLimits

0x95aa,	// (0x00066e28) wgtman_btn_pane_cp_01

0xefe2,	// (0x0006c860) wgtman_content_pane

0xefeb,	// (0x0006c869) wgtman_heading_pane

0x9cb1,	// (0x0006752f) bg_heading_pane_cp02

0xeff4,	// (0x0006c872) wgtman_heading_pane_g1

0xeffc,	// (0x0006c87a) wgtman_heading_pane_t1

0xf00a,	// (0x0006c888) scroll_pane_cp036

0xf012,	// (0x0006c890) wgtman_list_pane

0xf01a,	// (0x0006c898) wgtman_list_pane_t1_ParamLimits

0xf01a,	// (0x0006c898) wgtman_list_pane_t1

0x6426,	// (0x00063ca4) cam4_grid_pane

0x720c,	// (0x00064a8a) bg_button_pane_cp015_ParamLimits

0x721e,	// (0x00064a9c) bg_button_pane_cp016_ParamLimits

0x7231,	// (0x00064aaf) bg_button_pane_cp017_ParamLimits

0x7287,	// (0x00064b05) popup_vitu2_query_window_g3_ParamLimits

0x7287,	// (0x00064b05) popup_vitu2_query_window_g3

0x7346,	// (0x00064bc4) popup_vitu2_query_window_t6_ParamLimits

0x7346,	// (0x00064bc4) popup_vitu2_query_window_t6

0x7371,	// (0x00064bef) popup_vitu2_query_window_t7_ParamLimits

0x7371,	// (0x00064bef) popup_vitu2_query_window_t7

0xe69c,	// (0x0006bf1a) cam4_grid_pane_g1

0xe6a5,	// (0x0006bf23) cam4_grid_pane_g2

0xf034,	// (0x0006c8b2) cam4_grid_pane_g3

0xf03d,	// (0x0006c8bb) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0006d7cb) cam4_grid_pane_g

0x208e,	// (0x0005f90c) aid_placing_vt_slider_lsc_ParamLimits

0x23c1,	// (0x0005fc3f) vidtel_button_pane_ParamLimits

0x23c1,	// (0x0005fc3f) vidtel_button_pane

0xf048,	// (0x0006c8c6) bg_button_pane_cp034

0x9bcb,	// (0x00067449) vidtel_button_pane_g1

0xf052,	// (0x0006c8d0) vidtel_button_pane_t1

0xd8bb,	// (0x0006b139) aid_size_vtel_slider_touch

0xdb19,	// (0x0006b397) scroll_pane_cp039

0xe1ba,	// (0x0006ba38) ncim_query_button_pane_cp01_ParamLimits

0xe1d9,	// (0x0006ba57) ncimui_query_pane_g1_ParamLimits

0xa348,	// (0x00067bc6) input_focus_pane_cp012_ParamLimits

0xe1fe,	// (0x0006ba7c) ncim_query_entry_pane_t1_ParamLimits

0xdb19,	// (0x0006b397) scroll_pane_cp039_ParamLimits

0x36c7,	// (0x00060f45) navi_pane_bcale_mc_g1

0x36cf,	// (0x00060f4d) navi_pane_bcale_mc_t1

0xe790,	// (0x0006c00e) main_sp_fs_email_pane_g1

0xe79c,	// (0x0006c01a) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0006d55c) main_sp_fs_email_pane_g

0xea18,	// (0x0006c296) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea18,	// (0x0006c296) list_single_cale_mrui_row_pane_g3

0x9231,	// (0x00066aaf) list_single_recal_day_pane_g5_event_pane

0xaf9f,	// (0x0006881d) list_single_recal_day_pane_g7

0xf060,	// (0x0006c8de) list_recal_day_event_pane_cp01

0xf069,	// (0x0006c8e7) list_recal_vselct_arw_lo_pane_cp01

0xf071,	// (0x0006c8ef) list_recal_vselct_arw_up_pane_cp01

0xf079,	// (0x0006c8f7) list_recal_vselct_pane_cp01

0xd8dd,	// (0x0006b15b) list_recal_day_event_pane_cp01_g1

0xaff2,	// (0x00068870) list_recal_day_event_pane_cp01_t1

0xafa7,	// (0x00068825) list_single_recal_day_pane_t1_ParamLimits

0xafb9,	// (0x00068837) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0006d6b9) list_single_recal_day_pane_t_ParamLimits

0xa7fe,	// (0x0006807c) bg_notes_pane_ParamLimits

0xa8a1,	// (0x0006811f) list_notes_pane_ParamLimits

0x11c9,	// (0x0005ea47) scroll_pane_cp06_ParamLimits

0xa8c3,	// (0x00068141) main_notes_pane_ParamLimits

0x9cb1,	// (0x0006752f) main_welc_pane

0x9bd3,	// (0x00067451) main_welc_body_pane_ParamLimits

0x9bd3,	// (0x00067451) main_welc_body_pane

0x9bee,	// (0x0006746c) main_welc_opti_pane_ParamLimits

0x9bee,	// (0x0006746c) main_welc_opti_pane

0x9c23,	// (0x000674a1) main_welc_pane_t1_ParamLimits

0x9c23,	// (0x000674a1) main_welc_pane_t1

0x9c41,	// (0x000674bf) main_welc_body_row_pane_ParamLimits

0x9c41,	// (0x000674bf) main_welc_body_row_pane

0x9c5b,	// (0x000674d9) main_welc_opti_row_pane_ParamLimits

0x9c5b,	// (0x000674d9) main_welc_opti_row_pane

0xf083,	// (0x0006c901) main_welc_opti_row_pane_g1

0xf08b,	// (0x0006c909) main_welc_opti_row_pane_t1

0xf09a,	// (0x0006c918) main_welc_body_row_pane_t1

0xed6b,	// (0x0006c5e9) popup_notif_wgt_heading_pane

0xed85,	// (0x0006c603) aid_size_list_notif_wgt_del_ParamLimits

0xed92,	// (0x0006c610) list_notif_wgt_row_pane_g1_ParamLimits

0xed9e,	// (0x0006c61c) list_notif_wgt_row_pane_g2_ParamLimits

0xedaa,	// (0x0006c628) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0006d720) list_notif_wgt_row_pane_g_ParamLimits

0xedb7,	// (0x0006c635) list_notif_wgt_row_pane_t1_ParamLimits

0xedcc,	// (0x0006c64a) list_notif_wgt_row_pane_t2_ParamLimits

0xedde,	// (0x0006c65c) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0006d727) list_notif_wgt_row_pane_t_ParamLimits

0x9635,	// (0x00066eb3) listrow_wgtman_pane_g1_ParamLimits

0x9642,	// (0x00066ec0) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0006d750) listrow_wgtman_pane_g_ParamLimits

0x9660,	// (0x00066ede) listrow_wgtman_pane_t1_ParamLimits

0x9678,	// (0x00066ef6) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0006d755) listrow_wgtman_pane_t_ParamLimits

0x969e,	// (0x00066f1c) wait_bar_pane_cp09_ParamLimits

0x9cb1,	// (0x0006752f) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0006c927) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0006c92f) popup_notif_wgt_heading_pane_t1

0x9cb1,	// (0x0006752f) main_vids_pane

0x9cb1,	// (0x0006752f) vids_listscroll_pane

0x9c6c,	// (0x000674ea) scroll_pane_cp040

0x9cb1,	// (0x0006752f) vids_list_pane

0x9c77,	// (0x000674f5) vids_list_double_pane_ParamLimits

0x9c77,	// (0x000674f5) vids_list_double_pane

0x9c8a,	// (0x00067508) vids_list_double_pane_g1

0x9c93,	// (0x00067511) vids_list_double_pane_t1

0x9ca3,	// (0x00067521) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0006d7d9) vids_list_double_pane_t

0xa348,	// (0x00067bc6) main_ncimui_pane_ParamLimits

0x7fd8,	// (0x00065856) main_ncimui_pane_g1_ParamLimits

0x7fe6,	// (0x00065864) main_ncimui_pane_g2_ParamLimits

0x7fe6,	// (0x00065864) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0006d461) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0006d461) main_ncimui_pane_g

0x9c09,	// (0x00067487) main_welc_pane_g1_ParamLimits

0x9c09,	// (0x00067487) main_welc_pane_g1

0x9c15,	// (0x00067493) main_welc_pane_g2_ParamLimits

0x9c15,	// (0x00067493) main_welc_pane_g2

0x0001,

0xff56,	// (0x0006d7d4) main_welc_pane_g_ParamLimits

0xff56,	// (0x0006d7d4) main_welc_pane_g

0xa7fe,	// (0x0006807c) listscroll_mce_pane_ParamLimits

0x3791,	// (0x0006100f) wait_bar_pane_cp10

0xc854,	// (0x0006a0d2) main_cale_day_pane_ParamLimits

0xc854,	// (0x0006a0d2) main_cale_week_pane_ParamLimits

0xa7fe,	// (0x0006807c) main_messa_pane_ParamLimits

0x5820,	// (0x0006309e) main_clock2_btn_pane_ParamLimits

0x5820,	// (0x0006309e) main_clock2_btn_pane

0xd069,	// (0x0006a8e7) main_clock2_btn_pane_cp01_ParamLimits

0xd069,	// (0x0006a8e7) main_clock2_btn_pane_cp01

0xe9e9,	// (0x0006c267) list_cale_mrui_pane_ParamLimits

0xee22,	// (0x0006c6a0) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0006d72e) main_cf0_pane_g

0x982d,	// (0x000670ab) area_left_week_number_pane_ParamLimits

0x9840,	// (0x000670be) area_top_day_name_pane_ParamLimits

0x984e,	// (0x000670cc) frame_month_view_pane_ParamLimits

0xef4a,	// (0x0006c7c8) grid_month_view_pane_ParamLimits

0xef58,	// (0x0006c7d6) frm_month_g1_ParamLimits

0x98cc,	// (0x0006714a) frm_month_g2_ParamLimits

0x98dd,	// (0x0006715b) frm_month_g3_ParamLimits

0x98ee,	// (0x0006716c) frm_month_g4_ParamLimits

0x98ff,	// (0x0006717d) frm_month_g5_ParamLimits

0x9910,	// (0x0006718e) frm_month_g6_ParamLimits

0x9923,	// (0x000671a1) frm_month_g7_ParamLimits

0xef65,	// (0x0006c7e3) frm_month_g8_ParamLimits

0x9936,	// (0x000671b4) frm_month_g9_ParamLimits

0x9943,	// (0x000671c1) frm_month_g10_ParamLimits

0x9950,	// (0x000671ce) frm_month_g11_ParamLimits

0x995d,	// (0x000671db) frm_month_g12_ParamLimits

0x996a,	// (0x000671e8) frm_month_g13_ParamLimits

0x9979,	// (0x000671f7) frm_month_g14_ParamLimits

0x9988,	// (0x00067206) frm_month_g15_ParamLimits

0x9997,	// (0x00067215) frm_month_g16_ParamLimits

0xff01,	// (0x0006d77f) frm_month_g_ParamLimits

0xef72,	// (0x0006c7f0) cell_top_day_name_pane_t1_ParamLimits

0x99a6,	// (0x00067224) cell_area_left_week_number_pane_g1_ParamLimits

0x99b5,	// (0x00067233) cell_area_left_week_number_pane_t1_ParamLimits

0xcee1,	// (0x0006a75f) cell_month_view_pane_g1_ParamLimits

0x99cb,	// (0x00067249) cell_month_view_pane_t1_ParamLimits

0xa7f6,	// (0x00068074) main_clock2_btn_pane_g1

0xf0bf,	// (0x0006c93d) main_clock2_btn_pane_t1

0xa348,	// (0x00067bc6) listscroll_cmail_pane_ParamLimits

0xe790,	// (0x0006c00e) main_sp_fs_email_pane_g1_ParamLimits

0xe79c,	// (0x0006c01a) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0006d55c) main_sp_fs_email_pane_g_ParamLimits

0xeaf5,	// (0x0006c373) list_recal_day_pane_ParamLimits

0xeb06,	// (0x0006c384) mian_recal_day_pane_t1

0x89b9,	// (0x00066237) list_single_dyc_row_text_pane_t4_ParamLimits

0x89b9,	// (0x00066237) list_single_dyc_row_text_pane_t4

0x89f6,	// (0x00066274) list_single_dyc_row_text_pane_t5_ParamLimits

0x89f6,	// (0x00066274) list_single_dyc_row_text_pane_t5

0xa53f,	// (0x00067dbd) list_single_dyc_row_text_pane_t6_ParamLimits

0xa53f,	// (0x00067dbd) list_single_dyc_row_text_pane_t6

0xae7f,	// (0x000686fd) aid_mgn_list_cale_time_pane

0xa348,	// (0x00067bc6) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
