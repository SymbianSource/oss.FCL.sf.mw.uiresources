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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003be93 };

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
0x3402,	// (0x0003f295) Screen

0x340e,	// (0x0003f2a1) application_window

0x344a,	// (0x0003f2dd) area_bottom_pane_ParamLimits

0x344a,	// (0x0003f2dd) area_bottom_pane

0x3483,	// (0x0003f316) area_top_pane_ParamLimits

0x3483,	// (0x0003f316) area_top_pane

0x0932,	// (0x0003c7c5) call_video_uplink_pane_ParamLimits

0x0932,	// (0x0003c7c5) call_video_uplink_pane

0x34fd,	// (0x0003f390) main_pane_ParamLimits

0x34fd,	// (0x0003f390) main_pane

0xc36a,	// (0x000481fd) context_pane

0x73e3,	// (0x00043276) navi_pane

0x740b,	// (0x0004329e) popup_cale_events_window_ParamLimits

0x740b,	// (0x0004329e) popup_cale_events_window

0xc37d,	// (0x00048210) popup_mup_playback_window

0x7423,	// (0x000432b6) signal_pane

0x10cb,	// (0x0003cf5e) main_browser_pane

0x1b5b,	// (0x0003d9ee) main_burst_pane

0x7143,	// (0x00042fd6) main_calc_pane

0x1b5b,	// (0x0003d9ee) main_cale_day_pane

0x10cb,	// (0x0003cf5e) main_cale_month_pane

0x1b5b,	// (0x0003d9ee) main_cale_week_pane

0x1b5b,	// (0x0003d9ee) main_call_pane

0x0d61,	// (0x0003cbf4) main_call_poc_pane

0x1b5b,	// (0x0003d9ee) main_camera_pane

0x1b5b,	// (0x0003d9ee) main_chi_dic_pane

0x19ea,	// (0x0003d87d) main_clock_pane

0x0d61,	// (0x0003cbf4) main_fmradio_pane

0x1b5b,	// (0x0003d9ee) main_graph_messa_pane

0x0d61,	// (0x0003cbf4) main_help_pane

0x10cb,	// (0x0003cf5e) main_im_pane

0x0fbc,	// (0x0003ce4f) main_image_pane_ParamLimits

0x0fbc,	// (0x0003ce4f) main_image_pane

0x0d61,	// (0x0003cbf4) main_location2_pane

0x1b5b,	// (0x0003d9ee) main_location_pane

0x0d61,	// (0x0003cbf4) main_messa_pane

0x0d61,	// (0x0003cbf4) main_mp2_pane

0x1b5b,	// (0x0003d9ee) main_mp_pane

0x0d61,	// (0x0003cbf4) main_msg_pane

0x0d61,	// (0x0003cbf4) main_mup_eq_pane

0x0d61,	// (0x0003cbf4) main_mup_pane

0x1b5b,	// (0x0003d9ee) main_notes_pane

0x0d61,	// (0x0003cbf4) main_pec_pane

0x0d61,	// (0x0003cbf4) main_phob_pane

0x0d61,	// (0x0003cbf4) main_pinb_pane

0x0d61,	// (0x0003cbf4) main_postcard_pane

0x0d61,	// (0x0003cbf4) main_qdial_pane

0x1b5b,	// (0x0003d9ee) main_skin_pane

0x0d61,	// (0x0003cbf4) main_smil2_pane

0x1b5b,	// (0x0003d9ee) main_smil_pane

0x1b5b,	// (0x0003d9ee) main_video_pane

0x1b5b,	// (0x0003d9ee) main_video_tele_pane

0x0fbc,	// (0x0003ce4f) main_viewer_pane_ParamLimits

0x0fbc,	// (0x0003ce4f) main_viewer_pane

0x1b5b,	// (0x0003d9ee) main_vorec_pane

0x7197,	// (0x0004302a) popup_blid_sat_info_window_ParamLimits

0x7197,	// (0x0004302a) popup_blid_sat_info_window

0x71ef,	// (0x00043082) popup_dyc_status_message_window_ParamLimits

0x71ef,	// (0x00043082) popup_dyc_status_message_window

0x7207,	// (0x0004309a) popup_grid_large_graphic_window_ParamLimits

0x7207,	// (0x0004309a) popup_grid_large_graphic_window

0x72bd,	// (0x00043150) popup_loc_request_window_ParamLimits

0x72bd,	// (0x00043150) popup_loc_request_window

0x73bb,	// (0x0004324e) popup_wml_address_window_ParamLimits

0x73bb,	// (0x0004324e) popup_wml_address_window

0x6f7d,	// (0x00042e10) call_muted_g1

0x5e2f,	// (0x00041cc2) popup_call_audio_conf_window_ParamLimits

0x5e2f,	// (0x00041cc2) popup_call_audio_conf_window

0x6f91,	// (0x00042e24) popup_call_audio_first_window_ParamLimits

0x6f91,	// (0x00042e24) popup_call_audio_first_window

0x7007,	// (0x00042e9a) popup_call_audio_in_window_ParamLimits

0x7007,	// (0x00042e9a) popup_call_audio_in_window

0x7043,	// (0x00042ed6) popup_call_audio_out_window_ParamLimits

0x7043,	// (0x00042ed6) popup_call_audio_out_window

0x707d,	// (0x00042f10) popup_call_audio_second_window_ParamLimits

0x707d,	// (0x00042f10) popup_call_audio_second_window

0x70d3,	// (0x00042f66) popup_call_audio_wait_window_ParamLimits

0x70d3,	// (0x00042f66) popup_call_audio_wait_window

0x7108,	// (0x00042f9b) popup_number_entry_window_ParamLimits

0x7108,	// (0x00042f9b) popup_number_entry_window

0x0950,	// (0x0003c7e3) bg_popup_call_pane_cp05_ParamLimits

0x0950,	// (0x0003c7e3) bg_popup_call_pane_cp05

0x0970,	// (0x0003c803) popup_number_entry_window_t1

0x0983,	// (0x0003c816) popup_number_entry_window_t2

0x0995,	// (0x0003c828) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0004afc2) popup_number_entry_window_t

0x09a7,	// (0x0003c83a) text_title_cp2

0x09ba,	// (0x0003c84d) bg_popup_call_pane_cp_ParamLimits

0x09ba,	// (0x0003c84d) bg_popup_call_pane_cp

0x09c8,	// (0x0003c85b) call_thumbnail_pane

0x09d0,	// (0x0003c863) popup_call_audio_in_window_g1_ParamLimits

0x09d0,	// (0x0003c863) popup_call_audio_in_window_g1

0x09dc,	// (0x0003c86f) popup_call_audio_in_window_g2_ParamLimits

0x09dc,	// (0x0003c86f) popup_call_audio_in_window_g2

0x09e8,	// (0x0003c87b) popup_call_audio_in_window_g3_ParamLimits

0x09e8,	// (0x0003c87b) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0004afcb) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0004afcb) popup_call_audio_in_window_g

0x09f4,	// (0x0003c887) popup_call_audio_in_window_t1_ParamLimits

0x09f4,	// (0x0003c887) popup_call_audio_in_window_t1

0x0a0f,	// (0x0003c8a2) popup_call_audio_in_window_t2_ParamLimits

0x0a0f,	// (0x0003c8a2) popup_call_audio_in_window_t2

0x0a2a,	// (0x0003c8bd) popup_call_audio_in_window_t3_ParamLimits

0x0a2a,	// (0x0003c8bd) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0004afd2) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0004afd2) popup_call_audio_in_window_t

0x09ba,	// (0x0003c84d) bg_popup_call_pane_cp01_ParamLimits

0x09ba,	// (0x0003c84d) bg_popup_call_pane_cp01

0x09c8,	// (0x0003c85b) call_thumbnail_pane_cp02

0x0a3d,	// (0x0003c8d0) call_type_pane_cp022

0x0a45,	// (0x0003c8d8) popup_call_audio_out_window_g1_ParamLimits

0x0a45,	// (0x0003c8d8) popup_call_audio_out_window_g1

0x0a57,	// (0x0003c8ea) popup_call_audio_out_window_g2_ParamLimits

0x0a57,	// (0x0003c8ea) popup_call_audio_out_window_g2

0x0a63,	// (0x0003c8f6) popup_call_audio_out_window_g3_ParamLimits

0x0a63,	// (0x0003c8f6) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0004afd9) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0004afd9) popup_call_audio_out_window_g

0x0a75,	// (0x0003c908) popup_call_audio_out_window_t1_ParamLimits

0x0a75,	// (0x0003c908) popup_call_audio_out_window_t1

0x0a8d,	// (0x0003c920) popup_call_audio_out_window_t2_ParamLimits

0x0a8d,	// (0x0003c920) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0004afe0) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0004afe0) popup_call_audio_out_window_t

0x0aa2,	// (0x0003c935) bg_popup_call_pane_ParamLimits

0x0aa2,	// (0x0003c935) bg_popup_call_pane

0x36ad,	// (0x0003f540) call_thumbnail_pane_cp_ParamLimits

0x36ad,	// (0x0003f540) call_thumbnail_pane_cp

0x0b26,	// (0x0003c9b9) call_type_pane_cp01_ParamLimits

0x0b26,	// (0x0003c9b9) call_type_pane_cp01

0x0b6a,	// (0x0003c9fd) popup_call_audio_first_window_g1_ParamLimits

0x0b6a,	// (0x0003c9fd) popup_call_audio_first_window_g1

0x0bb6,	// (0x0003ca49) popup_call_audio_first_window_g2_ParamLimits

0x0bb6,	// (0x0003ca49) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0004afe5) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0004afe5) popup_call_audio_first_window_g

0x0bfa,	// (0x0003ca8d) popup_call_audio_first_window_t1_ParamLimits

0x0bfa,	// (0x0003ca8d) popup_call_audio_first_window_t1

0x0ca6,	// (0x0003cb39) popup_call_audio_first_window_t4_ParamLimits

0x0ca6,	// (0x0003cb39) popup_call_audio_first_window_t4

0x0d32,	// (0x0003cbc5) popup_call_audio_first_window_t5_ParamLimits

0x0d32,	// (0x0003cbc5) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0004afea) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0004afea) popup_call_audio_first_window_t

0x0d61,	// (0x0003cbf4) bg_popup_call_pane_cp02

0x0d6b,	// (0x0003cbfe) call_type_pane_cp023

0x0d73,	// (0x0003cc06) popup_call_audio_wait_window_g1

0x0d7b,	// (0x0003cc0e) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0004aff1) popup_call_audio_wait_window_g

0x0d83,	// (0x0003cc16) popup_call_audio_wait_window_t3

0x0d91,	// (0x0003cc24) bg_popup_call_pane_cp03_ParamLimits

0x0d91,	// (0x0003cc24) bg_popup_call_pane_cp03

0x0df1,	// (0x0003cc84) call_thumbnail_pane_cp011_ParamLimits

0x0df1,	// (0x0003cc84) call_thumbnail_pane_cp011

0x0dfd,	// (0x0003cc90) call_type_pane_cp034_ParamLimits

0x0dfd,	// (0x0003cc90) call_type_pane_cp034

0x0e39,	// (0x0003cccc) popup_call_audio_second_window_g1_ParamLimits

0x0e39,	// (0x0003cccc) popup_call_audio_second_window_g1

0x0e75,	// (0x0003cd08) popup_call_audio_second_window_g2_ParamLimits

0x0e75,	// (0x0003cd08) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0004aff6) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0004aff6) popup_call_audio_second_window_g

0x0eb1,	// (0x0003cd44) popup_call_audio_second_window_t1_ParamLimits

0x0eb1,	// (0x0003cd44) popup_call_audio_second_window_t1

0x0f32,	// (0x0003cdc5) popup_call_audio_second_window_t2_ParamLimits

0x0f32,	// (0x0003cdc5) popup_call_audio_second_window_t2

0x0f68,	// (0x0003cdfb) popup_call_audio_second_window_t3_ParamLimits

0x0f68,	// (0x0003cdfb) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0004affb) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0004affb) popup_call_audio_second_window_t

0x0d61,	// (0x0003cbf4) bg_popup_call_pane_cp04

0x0f9e,	// (0x0003ce31) list_conf_pane

0x0fa6,	// (0x0003ce39) popup_call_audio_conf_window_t1

0x0fb4,	// (0x0003ce47) call_thumbnail_pane_g1

0x0fbc,	// (0x0003ce4f) bg_pinb_pane_ParamLimits

0x0fbc,	// (0x0003ce4f) bg_pinb_pane

0x0fca,	// (0x0003ce5d) find_pinb_pane

0x0fd3,	// (0x0003ce66) listscroll_pinb_pane_ParamLimits

0x0fd3,	// (0x0003ce66) listscroll_pinb_pane

0x0fe2,	// (0x0003ce75) pinb_bg_pane_g1

0x36d1,	// (0x0003f564) pinb_bg_pane_g2

0x36dd,	// (0x0003f570) pinb_bg_pane_g3

0x36e9,	// (0x0003f57c) pinb_bg_pane_g4

0x36f5,	// (0x0003f588) pinb_bg_pane_g5

0x3701,	// (0x0003f594) pinb_bg_pane_g6

0x370c,	// (0x0003f59f) pinb_bg_pane_g7

0x3717,	// (0x0003f5aa) pinb_bg_pane_g8

0x3722,	// (0x0003f5b5) pinb_bg_pane_g9

0x372c,	// (0x0003f5bf) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0004b002) pinb_bg_pane_g

0x3741,	// (0x0003f5d4) grid_pinb_pane

0x374a,	// (0x0003f5dd) list_pinb_pane

0x3753,	// (0x0003f5e6) scroll_pane_cp01_ParamLimits

0x3753,	// (0x0003f5e6) scroll_pane_cp01

0x0ff4,	// (0x0003ce87) find_pinb_pane_g1_ParamLimits

0x0ff4,	// (0x0003ce87) find_pinb_pane_g1

0x100c,	// (0x0003ce9f) find_pinb_pane_t1

0x101e,	// (0x0003ceb1) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0004b01c) find_pinb_pane_t

0x1033,	// (0x0003cec6) input_focus_pane_cp01_ParamLimits

0x1033,	// (0x0003cec6) input_focus_pane_cp01

0x3765,	// (0x0003f5f8) cell_pinb_pane_ParamLimits

0x3765,	// (0x0003f5f8) cell_pinb_pane

0x3797,	// (0x0003f62a) cell_pinb_pane_g1_ParamLimits

0x3797,	// (0x0003f62a) cell_pinb_pane_g1

0x37a7,	// (0x0003f63a) cell_pinb_pane_g2_ParamLimits

0x37a7,	// (0x0003f63a) cell_pinb_pane_g2

0x103f,	// (0x0003ced2) cell_pinb_pane_g3_ParamLimits

0x103f,	// (0x0003ced2) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0004b021) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0004b021) cell_pinb_pane_g

0x0d61,	// (0x0003cbf4) grid_highlight_pane_cp01

0x37b3,	// (0x0003f646) list_pinb_item_pane_ParamLimits

0x37b3,	// (0x0003f646) list_pinb_item_pane

0x0d61,	// (0x0003cbf4) list_highlight_pane_cp02

0x104b,	// (0x0003cede) list_pinb_item_pane_g1_ParamLimits

0x104b,	// (0x0003cede) list_pinb_item_pane_g1

0x1058,	// (0x0003ceeb) list_pinb_item_pane_g2_ParamLimits

0x1058,	// (0x0003ceeb) list_pinb_item_pane_g2

0x37c7,	// (0x0003f65a) list_pinb_item_pane_g3_ParamLimits

0x37c7,	// (0x0003f65a) list_pinb_item_pane_g3

0x1064,	// (0x0003cef7) list_pinb_item_pane_g4_ParamLimits

0x1064,	// (0x0003cef7) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0004b028) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0004b028) list_pinb_item_pane_g

0x1070,	// (0x0003cf03) list_pinb_item_pane_t1_ParamLimits

0x1070,	// (0x0003cf03) list_pinb_item_pane_t1

0x37f6,	// (0x0003f689) calc_display_pane

0x381c,	// (0x0003f6af) calc_paper_pane

0x383f,	// (0x0003f6d2) grid_calc_pane

0x0d61,	// (0x0003cbf4) bg_list_pane_cp01

0x386b,	// (0x0003f6fe) clock_g1

0x3873,	// (0x0003f706) clock_g2

0x0001,

0xf19e,	// (0x0004b031) clock_g

0x387b,	// (0x0003f70e) clock_t1_ParamLimits

0x387b,	// (0x0003f70e) clock_t1

0x3890,	// (0x0003f723) clock_t2_ParamLimits

0x3890,	// (0x0003f723) clock_t2

0x38a2,	// (0x0003f735) clock_t3_ParamLimits

0x38a2,	// (0x0003f735) clock_t3

0x38b4,	// (0x0003f747) clock_t4_ParamLimits

0x38b4,	// (0x0003f747) clock_t4

0x38c6,	// (0x0003f759) clock_t5_ParamLimits

0x38c6,	// (0x0003f759) clock_t5

0x38db,	// (0x0003f76e) clock_t6_ParamLimits

0x38db,	// (0x0003f76e) clock_t6

0x38ed,	// (0x0003f780) clock_t7_ParamLimits

0x38ed,	// (0x0003f780) clock_t7

0x38ff,	// (0x0003f792) clock_t8_ParamLimits

0x38ff,	// (0x0003f792) clock_t8

0x3913,	// (0x0003f7a6) clock_t9_ParamLimits

0x3913,	// (0x0003f7a6) clock_t9

0x0008,

0xf1a3,	// (0x0004b036) clock_t_ParamLimits

0xf1a3,	// (0x0004b036) clock_t

0x1087,	// (0x0003cf1a) popup_clock_analogue_window_cp02

0x1087,	// (0x0003cf1a) popup_clock_digital_window_cp01

0x108f,	// (0x0003cf22) listscroll_help_pane

0x0d61,	// (0x0003cbf4) phob_pre_status_pane

0x1099,	// (0x0003cf2c) grid_qdial_pane

0x0d61,	// (0x0003cbf4) listscroll_mce_pane

0x10a3,	// (0x0003cf36) bg_notes_pane

0x10ad,	// (0x0003cf40) list_notes_pane

0x3927,	// (0x0003f7ba) scroll_pane_cp06

0x10b7,	// (0x0003cf4a) bg_calc_paper_pane

0xbe38,	// (0x00047ccb) list_calc_pane

0x10cb,	// (0x0003cf5e) bg_calc_display_pane

0x3932,	// (0x0003f7c5) calc_display_pane_t1

0x3944,	// (0x0003f7d7) calc_display_pane_t2

0xbe52,	// (0x00047ce5) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0004b049) calc_display_pane_t

0x3956,	// (0x0003f7e9) cell_calc_pane_ParamLimits

0x3956,	// (0x0003f7e9) cell_calc_pane

0x10d7,	// (0x0003cf6a) bg_calc_paper_pane_g1

0x10e3,	// (0x0003cf76) bg_calc_paper_pane_g2

0x10ef,	// (0x0003cf82) bg_calc_paper_pane_g3

0x10fb,	// (0x0003cf8e) bg_calc_paper_pane_g4

0x1107,	// (0x0003cf9a) bg_calc_paper_pane_g5

0x398b,	// (0x0003f81e) bg_calc_paper_pane_g6

0x399a,	// (0x0003f82d) bg_calc_paper_pane_g7

0x39a9,	// (0x0003f83c) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0004b050) bg_calc_paper_pane_g

0x39bc,	// (0x0003f84f) calc_bg_paper_pane_g9

0x39cf,	// (0x0003f862) list_calc_item_pane_ParamLimits

0x39cf,	// (0x0003f862) list_calc_item_pane

0x1113,	// (0x0003cfa6) list_calc_item_pane_g1

0xbe64,	// (0x00047cf7) list_calc_item_pane_t1_ParamLimits

0xbe64,	// (0x00047cf7) list_calc_item_pane_t1

0x39e5,	// (0x0003f878) list_calc_item_pane_t2_ParamLimits

0x39e5,	// (0x0003f878) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0004b061) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0004b061) list_calc_item_pane_t

0x1120,	// (0x0003cfb3) cell_calc_pane_g1

0x112a,	// (0x0003cfbd) grid_highlight_pane_cp02

0x114c,	// (0x0003cfdf) bg_calc_display_pane_g1

0xbe76,	// (0x00047d09) bg_calc_display_pane_g2

0x1155,	// (0x0003cfe8) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0004b06b) bg_calc_display_pane_g

0x3a19,	// (0x0003f8ac) cell_qdial_pane_ParamLimits

0x3a19,	// (0x0003f8ac) cell_qdial_pane

0x3a2d,	// (0x0003f8c0) cell_qdial_pane_g1_ParamLimits

0x3a2d,	// (0x0003f8c0) cell_qdial_pane_g1

0x3a43,	// (0x0003f8d6) cell_qdial_pane_g2_ParamLimits

0x3a43,	// (0x0003f8d6) cell_qdial_pane_g2

0x115e,	// (0x0003cff1) cell_qdial_pane_g3_ParamLimits

0x115e,	// (0x0003cff1) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0004b072) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0004b072) cell_qdial_pane_g

0x3a6a,	// (0x0003f8fd) cell_qdial_pane_t1_ParamLimits

0x3a6a,	// (0x0003f8fd) cell_qdial_pane_t1

0x3a82,	// (0x0003f915) cell_qdial_pane_t2_ParamLimits

0x3a82,	// (0x0003f915) cell_qdial_pane_t2

0x3a95,	// (0x0003f928) cell_qdial_pane_t3_ParamLimits

0x3a95,	// (0x0003f928) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0004b07b) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0004b07b) cell_qdial_pane_t

0x0d61,	// (0x0003cbf4) grid_highlight_pane_cp04

0x116a,	// (0x0003cffd) thumbnail_qdial_pane_ParamLimits

0x116a,	// (0x0003cffd) thumbnail_qdial_pane

0x11c6,	// (0x0003d059) list_help_pane

0x11cf,	// (0x0003d062) scroll_pane_cp02

0x3aa8,	// (0x0003f93b) help_list_pane_t1_ParamLimits

0x3aa8,	// (0x0003f93b) help_list_pane_t1

0xbe80,	// (0x00047d13) bg_notes_pane_g2

0xbe88,	// (0x00047d1b) bg_notes_pane_g3

0xbe90,	// (0x00047d23) notes_bg_pane_g1

0xbe98,	// (0x00047d2b) notes_bg_pane_g4

0xbea0,	// (0x00047d33) notes_bg_pane_g5

0xbea8,	// (0x00047d3b) notes_bg_pane_g6

0xbeb0,	// (0x00047d43) notes_bg_pane_g7

0xbeb8,	// (0x00047d4b) notes_bg_pane_g8

0xbec0,	// (0x00047d53) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0004b099) notes_bg_pane_g

0x3ac8,	// (0x0003f95b) list_notes_text_pane_ParamLimits

0x3ac8,	// (0x0003f95b) list_notes_text_pane

0x11d8,	// (0x0003d06b) list_notes_text_pane_g1

0x2ac4,	// (0x0003e957) list_notes_text_pane_t1

0x10cb,	// (0x0003cf5e) listscroll_cale_week_pane

0x3afc,	// (0x0003f98f) bg_cale_heading_pane

0x11f2,	// (0x0003d085) bg_cale_pane_cp01

0x3b14,	// (0x0003f9a7) cale_week_corner_pane

0x3b25,	// (0x0003f9b8) cale_week_day_heading_pane

0x3b3d,	// (0x0003f9d0) cale_week_scroll_pane_g1

0x3b52,	// (0x0003f9e5) cale_week_scroll_pane_g2

0x3b63,	// (0x0003f9f6) cale_week_scroll_pane_g3

0x3b74,	// (0x0003fa07) cale_week_scroll_pane_g4

0x3b85,	// (0x0003fa18) cale_week_scroll_pane_g5

0x3b96,	// (0x0003fa29) cale_week_scroll_pane_g6

0x3ba7,	// (0x0003fa3a) cale_week_scroll_pane_g7

0x3bb8,	// (0x0003fa4b) cale_week_scroll_pane_g8

0x3bc9,	// (0x0003fa5c) cale_week_scroll_pane_g9

0x3bda,	// (0x0003fa6d) cale_week_scroll_pane_g10

0x3beb,	// (0x0003fa7e) cale_week_scroll_pane_g11

0x3bfc,	// (0x0003fa8f) cale_week_scroll_pane_g12

0x3c0d,	// (0x0003faa0) cale_week_scroll_pane_g13

0x3c1e,	// (0x0003fab1) cale_week_scroll_pane_g14

0x3c2f,	// (0x0003fac2) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0004b0a8) cale_week_scroll_pane_g

0x3c40,	// (0x0003fad3) cale_week_time_pane

0x3c51,	// (0x0003fae4) grid_cale_week_pane

0x3c64,	// (0x0003faf7) scroll_pane_cp08

0x3c7e,	// (0x0003fb11) cell_cale_week_pane_ParamLimits

0x3c7e,	// (0x0003fb11) cell_cale_week_pane

0x3cba,	// (0x0003fb4d) cale_week_day_heading_pane_t1

0x3cce,	// (0x0003fb61) cale_week_day_heading_pane_t2

0x3ce2,	// (0x0003fb75) cale_week_day_heading_pane_t3

0x3cf6,	// (0x0003fb89) cale_week_day_heading_pane_t4

0x3d0a,	// (0x0003fb9d) cale_week_day_heading_pane_t5

0x3d1e,	// (0x0003fbb1) cale_week_day_heading_pane_t6

0x3d32,	// (0x0003fbc5) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0004b0c7) cale_week_day_heading_pane_t

0x121d,	// (0x0003d0b0) bg_cale_side_pane

0x3d46,	// (0x0003fbd9) cale_week_time_pane_t1

0x3d5e,	// (0x0003fbf1) cale_week_time_pane_t2

0x3d76,	// (0x0003fc09) cale_week_time_pane_t3

0x3d8e,	// (0x0003fc21) cale_week_time_pane_t4

0x3da6,	// (0x0003fc39) cale_week_time_pane_t5

0x3dbe,	// (0x0003fc51) cale_week_time_pane_t6

0x3dd6,	// (0x0003fc69) cale_week_time_pane_t7

0x3dee,	// (0x0003fc81) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0004b0d6) cale_week_time_pane_t

0x3e06,	// (0x0003fc99) cell_cale_week_pane_g2

0x3e22,	// (0x0003fcb5) cell_cale_week_pane_g3_ParamLimits

0x3e22,	// (0x0003fcb5) cell_cale_week_pane_g3

0x122b,	// (0x0003d0be) grid_highlight_pane_cp07

0x1233,	// (0x0003d0c6) listscroll_gms_pane

0x123d,	// (0x0003d0d0) grid_gms_pane

0x1246,	// (0x0003d0d9) listscroll_gms_pane_g1

0x124e,	// (0x0003d0e1) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0004b0e7) listscroll_gms_pane_g

0x3e3a,	// (0x0003fccd) scroll_pane_cp010

0x3e45,	// (0x0003fcd8) cell_gms_pane_ParamLimits

0x3e45,	// (0x0003fcd8) cell_gms_pane

0x3e58,	// (0x0003fceb) cell_gms_pane_g1

0x1256,	// (0x0003d0e9) cell_gms_pane_g2

0x11d8,	// (0x0003d06b) cell_gms_pane_g3

0x125e,	// (0x0003d0f1) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0004b0ec) cell_gms_pane_g

0x1267,	// (0x0003d0fa) grid_highlight_pane_cp09

0x6f25,	// (0x00042db8) phob_pre_status_pane_g1

0x6f2d,	// (0x00042dc0) phob_pre_status_pane_g2

0x6f35,	// (0x00042dc8) phob_pre_status_pane_g3

0x6f3d,	// (0x00042dd0) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0004b4db) phob_pre_status_pane_g

0x6f4f,	// (0x00042de2) phob_pre_status_pane_t1

0x6f5d,	// (0x00042df0) phob_pre_status_pane_t2

0x6f6d,	// (0x00042e00) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0004b4e6) phob_pre_status_pane_t

0x0d61,	// (0x0003cbf4) bg_list_pane_cp05

0xbed0,	// (0x00047d63) grid_vorec_pane

0xbed8,	// (0x00047d6b) vorec_t1

0xbee6,	// (0x00047d79) vorec_t2

0xbef4,	// (0x00047d87) vorec_t3

0xbf02,	// (0x00047d95) vorec_t4

0xbf10,	// (0x00047da3) vorec_t5

0xbf1e,	// (0x00047db1) vorec_t6

0x0006,

0xf262,	// (0x0004b0f5) vorec_t

0xbf3a,	// (0x00047dcd) wait_bar_pane_cp01

0x126f,	// (0x0003d102) cell_vorec_pane_ParamLimits

0x126f,	// (0x0003d102) cell_vorec_pane

0x1282,	// (0x0003d115) cell_vorec_pane_g1

0x0d61,	// (0x0003cbf4) grid_highlight_pane_cp05

0x3e78,	// (0x0003fd0b) cams_zoom_pane

0x3e87,	// (0x0003fd1a) image_vga_pane

0x3ea1,	// (0x0003fd34) main_camera_pane_g1

0x3eb3,	// (0x0003fd46) main_camera_pane_g2

0x3ec5,	// (0x0003fd58) main_camera_pane_g3

0x3ed7,	// (0x0003fd6a) main_camera_pane_g4

0x3ee9,	// (0x0003fd7c) main_camera_pane_g5

0x3efb,	// (0x0003fd8e) main_camera_pane_g6

0x3f0d,	// (0x0003fda0) main_camera_pane_g7

0x0007,

0xf271,	// (0x0004b104) main_camera_pane_g

0x3f1f,	// (0x0003fdb2) main_camera_pane_t1

0x3f35,	// (0x0003fdc8) main_camera_pane_t2

0x0001,

0xf282,	// (0x0004b115) main_camera_pane_t

0x3f71,	// (0x0003fe04) cams_zoom_pane_cp_ParamLimits

0x3f71,	// (0x0003fe04) cams_zoom_pane_cp

0x3f99,	// (0x0003fe2c) image_cif_pane_ParamLimits

0x3f99,	// (0x0003fe2c) image_cif_pane

0x3fd4,	// (0x0003fe67) image_subqcif_pane

0x3fdc,	// (0x0003fe6f) main_video_pane_g1_ParamLimits

0x3fdc,	// (0x0003fe6f) main_video_pane_g1

0x4000,	// (0x0003fe93) main_video_pane_g2_ParamLimits

0x4000,	// (0x0003fe93) main_video_pane_g2

0x4036,	// (0x0003fec9) main_video_pane_g3_ParamLimits

0x4036,	// (0x0003fec9) main_video_pane_g3

0x4066,	// (0x0003fef9) main_video_pane_g4_ParamLimits

0x4066,	// (0x0003fef9) main_video_pane_g4

0x4096,	// (0x0003ff29) main_video_pane_g5_ParamLimits

0x4096,	// (0x0003ff29) main_video_pane_g5

0x1298,	// (0x0003d12b) main_video_pane_g6_ParamLimits

0x1298,	// (0x0003d12b) main_video_pane_g6

0x0006,

0xf287,	// (0x0004b11a) main_video_pane_g_ParamLimits

0xf287,	// (0x0004b11a) main_video_pane_g

0x40c1,	// (0x0003ff54) main_video_pane_t1_ParamLimits

0x40c1,	// (0x0003ff54) main_video_pane_t1

0x12b2,	// (0x0003d145) cams_zoom_pane_g1

0x12bb,	// (0x0003d14e) cams_zoom_pane_g2

0x12c4,	// (0x0003d157) cams_zoom_pane_g3

0x12cd,	// (0x0003d160) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0004b129) cams_zoom_pane_g

0x411e,	// (0x0003ffb1) grid_cams_pane

0x4138,	// (0x0003ffcb) linegrid_cams_pane

0x414b,	// (0x0003ffde) cell_cams_pane_ParamLimits

0x414b,	// (0x0003ffde) cell_cams_pane

0x12d6,	// (0x0003d169) cams_burst_image_pane

0x12de,	// (0x0003d171) cell_cams_pane_g1

0x0d61,	// (0x0003cbf4) grid_highlight_pane_cp03

0x1120,	// (0x0003cfb3) mp_bg_pane_g1

0x0d61,	// (0x0003cbf4) bg_list_pane_cp03

0xc242,	// (0x000480d5) bg_mp_pane

0xc24a,	// (0x000480dd) grid_mp_pane

0xc252,	// (0x000480e5) media_player_g1

0xc25a,	// (0x000480ed) media_player_t1

0xc268,	// (0x000480fb) media_player_t2

0xc276,	// (0x00048109) media_player_t3

0xc284,	// (0x00048117) media_player_t4

0xc292,	// (0x00048125) media_player_t5

0xc2a0,	// (0x00048133) media_player_t6

0xc2ae,	// (0x00048141) media_player_t7

0x0006,

0xf632,	// (0x0004b4c5) media_player_t

0xc2bc,	// (0x0004814f) wait_bar_pane_cp02

0xf617,	// (0x0004b4aa) main_usb_pane_t

0x6f1c,	// (0x00042daf) cell_mp_pane

0x1120,	// (0x0003cfb3) cell_mp_pane_g1

0x0d61,	// (0x0003cbf4) grid_highlight_pane_cp06

0x12e6,	// (0x0003d179) grid_skin_colour_pane

0x12ee,	// (0x0003d181) list_highlight_pane_cp03

0x416b,	// (0x0003fffe) skin_g1

0x12f6,	// (0x0003d189) skin_t1

0x1305,	// (0x0003d198) skin_t2

0x0001,

0xf2cb,	// (0x0004b15e) skin_t

0x4173,	// (0x00040006) cell_skin_colour_pane_ParamLimits

0x4173,	// (0x00040006) cell_skin_colour_pane

0x1313,	// (0x0003d1a6) cell_skin_colour_pane_g1

0x41d9,	// (0x0004006c) call_video_g1_ParamLimits

0x41d9,	// (0x0004006c) call_video_g1

0x41f5,	// (0x00040088) call_video_g2_ParamLimits

0x41f5,	// (0x00040088) call_video_g2

0x0001,

0xf2d0,	// (0x0004b163) call_video_g_ParamLimits

0xf2d0,	// (0x0004b163) call_video_g

0x422f,	// (0x000400c2) call_video_uplink_pane_cp1_ParamLimits

0x422f,	// (0x000400c2) call_video_uplink_pane_cp1

0x132d,	// (0x0003d1c0) call_video_uplink_pane_cp2

0x42ad,	// (0x00040140) video_down_crop_pane_ParamLimits

0x42ad,	// (0x00040140) video_down_crop_pane

0x4373,	// (0x00040206) video_down_pane_ParamLimits

0x4373,	// (0x00040206) video_down_pane

0x1335,	// (0x0003d1c8) video_down_subqcif_pane_ParamLimits

0x1335,	// (0x0003d1c8) video_down_subqcif_pane

0x134d,	// (0x0003d1e0) video_down_subqcif_pane_cp_ParamLimits

0x134d,	// (0x0003d1e0) video_down_subqcif_pane_cp

0x1371,	// (0x0003d204) im_reading_pane_ParamLimits

0x1371,	// (0x0003d204) im_reading_pane

0x4444,	// (0x000402d7) im_writing_pane_ParamLimits

0x4444,	// (0x000402d7) im_writing_pane

0x445a,	// (0x000402ed) im_reading_pane_t1

0x138b,	// (0x0003d21e) list_im_pane

0x139c,	// (0x0003d22f) scroll_pane_cp07

0x4496,	// (0x00040329) im_writing_pane_t1_ParamLimits

0x4496,	// (0x00040329) im_writing_pane_t1

0x13b5,	// (0x0003d248) im_writing_pane_t2_ParamLimits

0x13b5,	// (0x0003d248) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0004b16d) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0004b16d) im_writing_pane_t

0x0d61,	// (0x0003cbf4) input_focus_pane_cp04

0x0d61,	// (0x0003cbf4) input_focus_pane_cp05

0x44ab,	// (0x0004033e) list_im_single_pane_ParamLimits

0x44ab,	// (0x0004033e) list_im_single_pane

0x44c1,	// (0x00040354) list_single_im_pane_t1

0x6edc,	// (0x00042d6f) blid_accuracy_pane

0x6ee4,	// (0x00042d77) blid_compass_pane

0x6eee,	// (0x00042d81) main_location_t1

0x6efe,	// (0x00042d91) main_location_t2

0x6f0e,	// (0x00042da1) main_location_t3

0x0002,

0xf641,	// (0x0004b4d4) main_location_t

0x0d61,	// (0x0003cbf4) aid_levels_location

0x1120,	// (0x0003cfb3) blid_accuracy_pane_g1

0x1120,	// (0x0003cfb3) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0004b1cf) blid_accuracy_pane_g

0x13fd,	// (0x0003d290) wml_content_pane

0x143b,	// (0x0003d2ce) wml_button_pane_ParamLimits

0x143b,	// (0x0003d2ce) wml_button_pane

0x44d0,	// (0x00040363) wml_list_single_large_pane_ParamLimits

0x44d0,	// (0x00040363) wml_list_single_large_pane

0x44e7,	// (0x0004037a) wml_list_single_medium_pane_ParamLimits

0x44e7,	// (0x0004037a) wml_list_single_medium_pane

0x44ff,	// (0x00040392) wml_list_single_small_pane_ParamLimits

0x44ff,	// (0x00040392) wml_list_single_small_pane

0x144f,	// (0x0003d2e2) wml_selection_box_pane_ParamLimits

0x144f,	// (0x0003d2e2) wml_selection_box_pane

0x1462,	// (0x0003d2f5) wml_list_single_pane_t1

0x1471,	// (0x0003d304) wml_list_single_medium_pane_t1

0x1480,	// (0x0003d313) wml_list_single_large_pane_t1

0x148f,	// (0x0003d322) input_focus_pane_cp02_ParamLimits

0x148f,	// (0x0003d322) input_focus_pane_cp02

0x14a2,	// (0x0003d335) wml_selection_box_pane_g1

0x14ab,	// (0x0003d33e) wml_selection_box_pane_t1_ParamLimits

0x14ab,	// (0x0003d33e) wml_selection_box_pane_t1

0x0fbc,	// (0x0003ce4f) bg_wml_button_pane_ParamLimits

0x0fbc,	// (0x0003ce4f) bg_wml_button_pane

0x14c3,	// (0x0003d356) wml_button_pane_g1

0x14cb,	// (0x0003d35e) wml_button_pane_t1

0x14c3,	// (0x0003d356) wml_button_bg_pane_g1

0x14db,	// (0x0003d36e) wml_button_bg_pane_g2

0x14e3,	// (0x0003d376) wml_button_bg_pane_g3

0x14eb,	// (0x0003d37e) wml_button_bg_pane_g4

0x14f3,	// (0x0003d386) wml_button_bg_pane_g5

0x14fb,	// (0x0003d38e) wml_button_bg_pane_g6

0x1503,	// (0x0003d396) wml_button_bg_pane_g7

0x150b,	// (0x0003d39e) wml_button_bg_pane_g8

0x1513,	// (0x0003d3a6) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0004b172) wml_button_bg_pane_g

0x451d,	// (0x000403b0) bg_list_pane_cp02

0x151b,	// (0x0003d3ae) mce_header_pane_ParamLimits

0x151b,	// (0x0003d3ae) mce_header_pane

0x1531,	// (0x0003d3c4) mce_icon_pane

0x1531,	// (0x0003d3c4) mce_image_pane

0x153a,	// (0x0003d3cd) mce_text_pane_ParamLimits

0x153a,	// (0x0003d3cd) mce_text_pane

0x4525,	// (0x000403b8) scroll_pane_cp03

0x1433,	// (0x0003d2c6) scroll_pane_cp04

0x154d,	// (0x0003d3e0) scroll_pane_cp05_ParamLimits

0x154d,	// (0x0003d3e0) scroll_pane_cp05

0x452f,	// (0x000403c2) mce_header_field_pane_ParamLimits

0x452f,	// (0x000403c2) mce_header_field_pane

0x4546,	// (0x000403d9) mce_header_field_pane_2_ParamLimits

0x4546,	// (0x000403d9) mce_header_field_pane_2

0x455c,	// (0x000403ef) mce_header_field_pane_3

0x4564,	// (0x000403f7) list_single_mce_message_pane_ParamLimits

0x4564,	// (0x000403f7) list_single_mce_message_pane

0x457c,	// (0x0004040f) list_single_mce_smart_pane_ParamLimits

0x457c,	// (0x0004040f) list_single_mce_smart_pane

0x1559,	// (0x0003d3ec) input_focus_pane_cp03

0x1562,	// (0x0003d3f5) list_header_data_pane

0x459f,	// (0x00040432) mce_header_field_pane_t1

0x45af,	// (0x00040442) list_single_mce_header_pane_ParamLimits

0x45af,	// (0x00040442) list_single_mce_header_pane

0x156a,	// (0x0003d3fd) list_single_mce_header_pane_t1

0x1579,	// (0x0003d40c) list_single_mce_message_pane_g1

0x1581,	// (0x0003d414) list_single_mce_message_pane_t1

0x45e1,	// (0x00040474) bg_cale_heading_pane_cp01_ParamLimits

0x45e1,	// (0x00040474) bg_cale_heading_pane_cp01

0x158f,	// (0x0003d422) bg_cale_pane_cp02_ParamLimits

0x158f,	// (0x0003d422) bg_cale_pane_cp02

0x4604,	// (0x00040497) cale_month_corner_pane

0x461a,	// (0x000404ad) cale_month_day_heading_pane_ParamLimits

0x461a,	// (0x000404ad) cale_month_day_heading_pane

0x4645,	// (0x000404d8) cale_month_pane_g1_ParamLimits

0x4645,	// (0x000404d8) cale_month_pane_g1

0x4661,	// (0x000404f4) cale_month_pane_g2_ParamLimits

0x4661,	// (0x000404f4) cale_month_pane_g2

0x467a,	// (0x0004050d) cale_month_pane_g3_ParamLimits

0x467a,	// (0x0004050d) cale_month_pane_g3

0x46a6,	// (0x00040539) cale_month_pane_g4_ParamLimits

0x46a6,	// (0x00040539) cale_month_pane_g4

0x46d2,	// (0x00040565) cale_month_pane_g5_ParamLimits

0x46d2,	// (0x00040565) cale_month_pane_g5

0x46fe,	// (0x00040591) cale_month_pane_g6_ParamLimits

0x46fe,	// (0x00040591) cale_month_pane_g6

0x472a,	// (0x000405bd) cale_month_pane_g7_ParamLimits

0x472a,	// (0x000405bd) cale_month_pane_g7

0x4756,	// (0x000405e9) cale_month_pane_g8_ParamLimits

0x4756,	// (0x000405e9) cale_month_pane_g8

0x478a,	// (0x0004061d) cale_month_pane_g9_ParamLimits

0x478a,	// (0x0004061d) cale_month_pane_g9

0x47bc,	// (0x0004064f) cale_month_pane_g10_ParamLimits

0x47bc,	// (0x0004064f) cale_month_pane_g10

0x47ee,	// (0x00040681) cale_month_pane_g11_ParamLimits

0x47ee,	// (0x00040681) cale_month_pane_g11

0x4820,	// (0x000406b3) cale_month_pane_g12_ParamLimits

0x4820,	// (0x000406b3) cale_month_pane_g12

0x4852,	// (0x000406e5) cale_month_pane_g13_ParamLimits

0x4852,	// (0x000406e5) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0004b185) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0004b185) cale_month_pane_g

0x4884,	// (0x00040717) cale_month_week_pane

0x4895,	// (0x00040728) grid_cale_month_pane_ParamLimits

0x4895,	// (0x00040728) grid_cale_month_pane

0x48bb,	// (0x0004074e) cale_month_day_heading_pane_t1

0x4919,	// (0x000407ac) cale_month_day_heading_pane_t2

0x497e,	// (0x00040811) cale_month_day_heading_pane_t3

0x49e3,	// (0x00040876) cale_month_day_heading_pane_t4

0x4a48,	// (0x000408db) cale_month_day_heading_pane_t5

0x4aad,	// (0x00040940) cale_month_day_heading_pane_t6

0x4b12,	// (0x000409a5) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0004b1a0) cale_month_day_heading_pane_t

0x121d,	// (0x0003d0b0) bg_cale_side_pane_cp01

0x4b77,	// (0x00040a0a) cale_month_week_pane_t1

0x4b8e,	// (0x00040a21) cale_month_week_pane_t2

0x4ba5,	// (0x00040a38) cale_month_week_pane_t3

0x4bbc,	// (0x00040a4f) cale_month_week_pane_t4

0x4bd3,	// (0x00040a66) cale_month_week_pane_t5

0x4bea,	// (0x00040a7d) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0004b1af) cale_month_week_pane_t

0x4c01,	// (0x00040a94) cell_cale_month_pane_ParamLimits

0x4c01,	// (0x00040a94) cell_cale_month_pane

0xc00c,	// (0x00047e9f) cell_cale_month_pane_g1

0x4ca7,	// (0x00040b3a) cell_cale_month_pane_t1_ParamLimits

0x4ca7,	// (0x00040b3a) cell_cale_month_pane_t1

0x122b,	// (0x0003d0be) grid_highlight_pane_cp08

0x1120,	// (0x0003cfb3) main_smil_g1

0x4cc3,	// (0x00040b56) smil_status_pane

0x15c4,	// (0x0003d457) smil_text_pane

0x6e42,	// (0x00042cd5) bg_popup_call3_rect_pane_g8

0x6e4a,	// (0x00042cdd) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0004b468) bg_popup_call3_rect_pane_g

0xc3e4,	// (0x00048277) smil_status_volume_pane_g1

0x15ce,	// (0x0003d461) smil_status_pane_t1

0xc417,	// (0x000482aa) volume_smil_pane

0x15e5,	// (0x0003d478) list_smil_text_pane

0x4cd8,	// (0x00040b6b) scroll_pane_cp011

0x4ce3,	// (0x00040b76) smil_text_list_pane_t1_ParamLimits

0x4ce3,	// (0x00040b76) smil_text_list_pane_t1

0xc018,	// (0x00047eab) aid_volume_smil_ParamLimits

0xc018,	// (0x00047eab) aid_volume_smil

0x1120,	// (0x0003cfb3) smil_volume_pane_g1

0x1120,	// (0x0003cfb3) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0004b1cf) smil_volume_pane_g

0x10cb,	// (0x0003cf5e) listscroll_cale_day_pane

0x15ef,	// (0x0003d482) bg_cale_pane

0x1607,	// (0x0003d49a) list_cale_pane

0x1618,	// (0x0003d4ab) scroll_pane_cp09

0x1629,	// (0x0003d4bc) cale_bg_pane_g1

0x1631,	// (0x0003d4c4) cale_bg_pane_g2

0x1639,	// (0x0003d4cc) cale_bg_pane_g3

0x1641,	// (0x0003d4d4) cale_bg_pane_g4

0x1649,	// (0x0003d4dc) cale_bg_pane_g5

0x1651,	// (0x0003d4e4) cale_bg_pane_g6

0x1659,	// (0x0003d4ec) cale_bg_pane_g7

0x1661,	// (0x0003d4f4) cale_bg_pane_g8

0x1669,	// (0x0003d4fc) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0004b1d4) cale_bg_pane_g

0x4d37,	// (0x00040bca) list_cale_time_pane_ParamLimits

0x4d37,	// (0x00040bca) list_cale_time_pane

0x4d4c,	// (0x00040bdf) list_cale_time_pane_g1_ParamLimits

0x4d4c,	// (0x00040bdf) list_cale_time_pane_g1

0x1671,	// (0x0003d504) list_cale_time_pane_g2_ParamLimits

0x1671,	// (0x0003d504) list_cale_time_pane_g2

0x4d58,	// (0x00040beb) list_cale_time_pane_g3_ParamLimits

0x4d58,	// (0x00040beb) list_cale_time_pane_g3

0x4d74,	// (0x00040c07) list_cale_time_pane_g4_ParamLimits

0x4d74,	// (0x00040c07) list_cale_time_pane_g4

0x4d82,	// (0x00040c15) list_cale_time_pane_g5_ParamLimits

0x4d82,	// (0x00040c15) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0004b1e7) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0004b1e7) list_cale_time_pane_g

0x4d90,	// (0x00040c23) list_cale_time_pane_t1_ParamLimits

0x4d90,	// (0x00040c23) list_cale_time_pane_t1

0x4db8,	// (0x00040c4b) list_cale_time_pane_t2_ParamLimits

0x4db8,	// (0x00040c4b) list_cale_time_pane_t2

0x5099,	// (0x00040f2c) aid_blid_cardinal_pane

0x50d7,	// (0x00040f6a) compass_pane_t4

0x4de0,	// (0x00040c73) list_cale_time_pane_t4_ParamLimits

0x4de0,	// (0x00040c73) list_cale_time_pane_t4

0x50e5,	// (0x00040f78) compass_pane_t5

0x50f3,	// (0x00040f86) compass_pane_t6

0x5101,	// (0x00040f94) compass_pane_t7

0x1aad,	// (0x0003d940) navi_pane_cc_t1

0x1c02,	// (0x0003da95) aid_phob_thumbnail_center_pane

0x5831,	// (0x000416c4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0004b1f4) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0004b1f4) list_cale_time_pane_t

0x09ba,	// (0x0003c84d) bg_popup_window_pane_cp02_ParamLimits

0x09ba,	// (0x0003c84d) bg_popup_window_pane_cp02

0x168b,	// (0x0003d51e) heading_pane_cp01_ParamLimits

0x168b,	// (0x0003d51e) heading_pane_cp01

0x1697,	// (0x0003d52a) loc_req_pane_ParamLimits

0x1697,	// (0x0003d52a) loc_req_pane

0x16a7,	// (0x0003d53a) loc_type_pane_ParamLimits

0x16a7,	// (0x0003d53a) loc_type_pane

0x16b9,	// (0x0003d54c) loc_type_pane_t1_ParamLimits

0x16b9,	// (0x0003d54c) loc_type_pane_t1

0x16cb,	// (0x0003d55e) loc_type_pane_t2_ParamLimits

0x16cb,	// (0x0003d55e) loc_type_pane_t2

0x16dd,	// (0x0003d570) loc_type_pane_t3_ParamLimits

0x16dd,	// (0x0003d570) loc_type_pane_t3

0x0002,

0xf368,	// (0x0004b1fb) loc_type_pane_t_ParamLimits

0xf368,	// (0x0004b1fb) loc_type_pane_t

0x16ef,	// (0x0003d582) list_loc_req_pane

0x16f9,	// (0x0003d58c) scroll_pane_cp012

0x4e08,	// (0x00040c9b) list_single_loc_request_popup_menu_pane_ParamLimits

0x4e08,	// (0x00040c9b) list_single_loc_request_popup_menu_pane

0x1704,	// (0x0003d597) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1704,	// (0x0003d597) list_single_loc_request_popup_menu_pane_g1

0x1710,	// (0x0003d5a3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1710,	// (0x0003d5a3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0004b202) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0004b202) list_single_loc_request_popup_menu_pane_g

0x171c,	// (0x0003d5af) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x171c,	// (0x0003d5af) list_single_loc_request_popup_menu_pane_t1

0x0fbc,	// (0x0003ce4f) bg_popup_window_pane_cp03_ParamLimits

0x0fbc,	// (0x0003ce4f) bg_popup_window_pane_cp03

0x4e15,	// (0x00040ca8) heading_loc_req_pane_ParamLimits

0x4e15,	// (0x00040ca8) heading_loc_req_pane

0x4e21,	// (0x00040cb4) popup_dyc_status_message_window_g1_ParamLimits

0x4e21,	// (0x00040cb4) popup_dyc_status_message_window_g1

0x4e35,	// (0x00040cc8) popup_dyc_status_message_window_t1_ParamLimits

0x4e35,	// (0x00040cc8) popup_dyc_status_message_window_t1

0x4e4a,	// (0x00040cdd) popup_dyc_status_message_window_t2_ParamLimits

0x4e4a,	// (0x00040cdd) popup_dyc_status_message_window_t2

0x4e5f,	// (0x00040cf2) popup_dyc_status_message_window_t3_ParamLimits

0x4e5f,	// (0x00040cf2) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0004b207) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0004b207) popup_dyc_status_message_window_t

0x0d61,	// (0x0003cbf4) bg_heading_pane_cp01

0x1732,	// (0x0003d5c5) heading_loc_req_pane_g1

0x173a,	// (0x0003d5cd) heading_loc_req_pane_g2

0x1742,	// (0x0003d5d5) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0004b20e) heading_loc_req_pane_g

0x174a,	// (0x0003d5dd) heading_loc_req_pane_t1

0x1759,	// (0x0003d5ec) bg_popup_sub_pane_cp01_ParamLimits

0x1759,	// (0x0003d5ec) bg_popup_sub_pane_cp01

0x1767,	// (0x0003d5fa) popup_cale_events_window_g1_ParamLimits

0x1767,	// (0x0003d5fa) popup_cale_events_window_g1

0x1787,	// (0x0003d61a) popup_cale_events_window_g2_ParamLimits

0x1787,	// (0x0003d61a) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0004b242) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0004b242) popup_cale_events_window_g

0x17a7,	// (0x0003d63a) popup_cale_events_window_t1_ParamLimits

0x17a7,	// (0x0003d63a) popup_cale_events_window_t1

0x17b9,	// (0x0003d64c) popup_cale_events_window_t2_ParamLimits

0x17b9,	// (0x0003d64c) popup_cale_events_window_t2

0x17f7,	// (0x0003d68a) popup_cale_events_window_t3_ParamLimits

0x17f7,	// (0x0003d68a) popup_cale_events_window_t3

0x1831,	// (0x0003d6c4) popup_cale_events_window_t4_ParamLimits

0x1831,	// (0x0003d6c4) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0004b247) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0004b247) popup_cale_events_window_t

0x4e93,	// (0x00040d26) call_type_pane

0x4ea3,	// (0x00040d36) popup_call_status_window_g1

0x4eb7,	// (0x00040d4a) popup_call_status_window_g2

0x4ecb,	// (0x00040d5e) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0004b250) popup_call_status_window_g

0x1875,	// (0x0003d708) call_type_pane_g1

0x187e,	// (0x0003d711) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0004b257) call_type_pane_g

0x0d61,	// (0x0003cbf4) bg_popup_sub_pane_cp02

0x1887,	// (0x0003d71a) listscroll_popup_wml_pane

0x188f,	// (0x0003d722) list_wml_pane

0x1899,	// (0x0003d72c) scroll_pane_cp013

0x18a4,	// (0x0003d737) list_single_graphic_popup_wml_pane_ParamLimits

0x18a4,	// (0x0003d737) list_single_graphic_popup_wml_pane

0x1120,	// (0x0003cfb3) list_single_graphic_popup_wml_pane_g1

0x18b8,	// (0x0003d74b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0004b25c) list_single_graphic_popup_wml_pane_g

0x18c0,	// (0x0003d753) list_single_graphic_popup_wml_pane_t1

0x18d6,	// (0x0003d769) aid_call_pane

0x0fb4,	// (0x0003ce47) popup_clock_analogue_window_g1

0x0fb4,	// (0x0003ce47) popup_clock_analogue_window_g2

0xc0af,	// (0x00047f42) popup_clock_analogue_window_g3

0xc0af,	// (0x00047f42) popup_clock_analogue_window_g4

0x1120,	// (0x0003cfb3) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0004b261) popup_clock_analogue_window_g

0xc0b7,	// (0x00047f4a) popup_clock_analogue_window_t1

0xc0c5,	// (0x00047f58) clock_digital_number_pane_ParamLimits

0xc0c5,	// (0x00047f58) clock_digital_number_pane

0xc0d1,	// (0x00047f64) clock_digital_number_pane_cp02_ParamLimits

0xc0d1,	// (0x00047f64) clock_digital_number_pane_cp02

0xc0dd,	// (0x00047f70) clock_digital_number_pane_cp03_ParamLimits

0xc0dd,	// (0x00047f70) clock_digital_number_pane_cp03

0xc0e9,	// (0x00047f7c) clock_digital_number_pane_cp04_ParamLimits

0xc0e9,	// (0x00047f7c) clock_digital_number_pane_cp04

0xc0f5,	// (0x00047f88) clock_digital_separator_pane_ParamLimits

0xc0f5,	// (0x00047f88) clock_digital_separator_pane

0xc101,	// (0x00047f94) popup_clock_digital_window_t1

0x1120,	// (0x0003cfb3) clock_digital_number_pane_g1

0x1120,	// (0x0003cfb3) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0004b1cf) clock_digital_number_pane_g

0x1120,	// (0x0003cfb3) clock_digital_separator_pane_g1

0x1120,	// (0x0003cfb3) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0004b1cf) clock_digital_separator_pane_g

0x0d61,	// (0x0003cbf4) bg_popup_window_pane_cp04

0x18de,	// (0x0003d771) heading_pane_cp03

0x18e6,	// (0x0003d779) listscroll_popup_gms_pane

0x18ee,	// (0x0003d781) grid_large_graphic_popup_pane

0x18f8,	// (0x0003d78b) listscroll_popup_gms_pane_g1

0x1900,	// (0x0003d793) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0004b26c) listscroll_popup_gms_pane_g

0x1433,	// (0x0003d2c6) scroll_pane_cp014

0x1908,	// (0x0003d79b) cell_large_graphic_popup_pane_ParamLimits

0x1908,	// (0x0003d79b) cell_large_graphic_popup_pane

0x1920,	// (0x0003d7b3) cell_large_graphic_popup_pane_g1_ParamLimits

0x1920,	// (0x0003d7b3) cell_large_graphic_popup_pane_g1

0x192c,	// (0x0003d7bf) cell_large_graphic_popup_pane_g2_ParamLimits

0x192c,	// (0x0003d7bf) cell_large_graphic_popup_pane_g2

0x1938,	// (0x0003d7cb) cell_large_graphic_popup_pane_g3_ParamLimits

0x1938,	// (0x0003d7cb) cell_large_graphic_popup_pane_g3

0x1945,	// (0x0003d7d8) cell_large_graphic_popup_pane_g4_ParamLimits

0x1945,	// (0x0003d7d8) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0004b271) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0004b271) cell_large_graphic_popup_pane_g

0x1955,	// (0x0003d7e8) grid_highlight_pane_cp010

0x1120,	// (0x0003cfb3) bg_popup_call_pane_g1

0x195f,	// (0x0003d7f2) list_single_graphic_popup_conf_pane_ParamLimits

0x195f,	// (0x0003d7f2) list_single_graphic_popup_conf_pane

0x1971,	// (0x0003d804) list_highlight_pane_cp01

0x197a,	// (0x0003d80d) list_single_graphic_popup_conf_pane_g1

0x1982,	// (0x0003d815) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0004b27a) list_single_graphic_popup_conf_pane_g

0x198a,	// (0x0003d81d) list_single_graphic_popup_conf_pane_t1

0x1998,	// (0x0003d82b) linegrid_cams_pane_g1

0x4edb,	// (0x00040d6e) linegrid_cams_pane_g2

0x11d8,	// (0x0003d06b) linegrid_cams_pane_g3

0x19a1,	// (0x0003d834) linegrid_cams_pane_g4

0x4ee4,	// (0x00040d77) linegrid_cams_pane_g5

0x4eed,	// (0x00040d80) linegrid_cams_pane_g6

0x125e,	// (0x0003d0f1) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0004b27f) linegrid_cams_pane_g

0x19aa,	// (0x0003d83d) popup_clock_analogue_window

0x19aa,	// (0x0003d83d) popup_clock_digital_window

0x0d61,	// (0x0003cbf4) popup_phob_thumbnail_window

0x1120,	// (0x0003cfb3) call_video_uplink_pane_g1

0x19b3,	// (0x0003d846) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0004b28e) call_video_uplink_pane_g

0x122b,	// (0x0003d0be) video_uplink_pane

0x19bb,	// (0x0003d84e) mce_image_pane_g1

0x4ef8,	// (0x00040d8b) mce_image_pane_g2

0x4f00,	// (0x00040d93) mce_image_pane_g3

0x4f08,	// (0x00040d9b) mce_image_pane_g4

0x4f10,	// (0x00040da3) mce_image_pane_g5

0x0004,

0xf400,	// (0x0004b293) mce_image_pane_g

0x19c5,	// (0x0003d858) control_top_pane_stacon_cp01_ParamLimits

0x19c5,	// (0x0003d858) control_top_pane_stacon_cp01

0x19d9,	// (0x0003d86c) uni_indicator_pane_stacon_cp01_ParamLimits

0x19d9,	// (0x0003d86c) uni_indicator_pane_stacon_cp01

0x19ea,	// (0x0003d87d) bg_popup_sub_pane_cp03

0x4f18,	// (0x00040dab) chi_dic_find_pane

0x4f20,	// (0x00040db3) listscroll_chi_dic_pane

0x4f29,	// (0x00040dbc) main_pane_chidic_g1

0x4f3c,	// (0x00040dcf) chi_dic_find_pane_t1

0x19f4,	// (0x0003d887) find_chidic_pane

0x19fd,	// (0x0003d890) chi_dic_list_pane_ParamLimits

0x19fd,	// (0x0003d890) chi_dic_list_pane

0x1a0e,	// (0x0003d8a1) scroll_pane_cp020

0x4f4a,	// (0x00040ddd) find_chidic_pane_t1

0x0d61,	// (0x0003cbf4) input_focus_pane_cp06

0x4f59,	// (0x00040dec) list_chi_dic_pane_ParamLimits

0x4f59,	// (0x00040dec) list_chi_dic_pane

0x1a16,	// (0x0003d8a9) list_chi_dic_pane_t1_ParamLimits

0x1a16,	// (0x0003d8a9) list_chi_dic_pane_t1

0x0d61,	// (0x0003cbf4) list_highlight_pane_cp020

0x1a29,	// (0x0003d8bc) bg_cale_heading_pane_g1

0x4f6d,	// (0x00040e00) bg_cale_heading_pane_g2

0x4f75,	// (0x00040e08) bg_cale_heading_pane_g3

0x4f7d,	// (0x00040e10) bg_cale_heading_pane_g4

0x4f87,	// (0x00040e1a) bg_cale_heading_pane_g5

0x4f91,	// (0x00040e24) bg_cale_heading_pane_g6

0x4f99,	// (0x00040e2c) bg_cale_heading_pane_g7

0x4fa1,	// (0x00040e34) bg_cale_heading_pane_g8

0x4fab,	// (0x00040e3e) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0004b29e) bg_cale_heading_pane_g

0x1a29,	// (0x0003d8bc) bg_cale_side_pane_g1

0x4fb5,	// (0x00040e48) bg_cale_side_pane_g2

0x4fbd,	// (0x00040e50) bg_cale_side_pane_g3

0x4fc5,	// (0x00040e58) bg_cale_side_pane_g4

0x4fcd,	// (0x00040e60) bg_cale_side_pane_g5

0x4fd5,	// (0x00040e68) bg_cale_side_pane_g6

0x4fdd,	// (0x00040e70) bg_cale_side_pane_g7

0x4fe5,	// (0x00040e78) bg_cale_side_pane_g8

0x4fed,	// (0x00040e80) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0004b2b1) bg_cale_side_pane_g

0x4ff5,	// (0x00040e88) popup_call_status_window_ParamLimits

0x4ff5,	// (0x00040e88) popup_call_status_window

0x1a31,	// (0x0003d8c4) stacon_top_pane

0x1a39,	// (0x0003d8cc) status_pane_ParamLimits

0x1a39,	// (0x0003d8cc) status_pane

0x1a4e,	// (0x0003d8e1) status_small_pane

0x1a56,	// (0x0003d8e9) control_pane

0x0d61,	// (0x0003cbf4) stacon_bottom_pane

0x1a5e,	// (0x0003d8f1) list_single_mce_smart_pane_t1_ParamLimits

0x1a5e,	// (0x0003d8f1) list_single_mce_smart_pane_t1

0x1a71,	// (0x0003d904) list_single_mce_smart_pane_t2_ParamLimits

0x1a71,	// (0x0003d904) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0004b2c4) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0004b2c4) list_single_mce_smart_pane_t

0x503e,	// (0x00040ed1) compass_pane

0x5047,	// (0x00040eda) main_location2_pane_t1

0x505b,	// (0x00040eee) main_location2_pane_t2

0x506f,	// (0x00040f02) main_location2_pane_t3

0x0003,

0xf436,	// (0x0004b2c9) main_location2_pane_t

0x1a90,	// (0x0003d923) compass_pane_g1_ParamLimits

0x1a90,	// (0x0003d923) compass_pane_g1

0x50b9,	// (0x00040f4c) compass_pane_t1

0x50c8,	// (0x00040f5b) compass_pane_t2

0x0005,

0xf43f,	// (0x0004b2d2) compass_pane_t

0x510f,	// (0x00040fa2) text_secondary_cp61

0x1aa4,	// (0x0003d937) navi_pane_cams_g5

0x1ac7,	// (0x0003d95a) navi_pane_im_t1

0x1ad5,	// (0x0003d968) navi_pane_mp_g1_ParamLimits

0x1ad5,	// (0x0003d968) navi_pane_mp_g1

0x1ae9,	// (0x0003d97c) navi_pane_mp_g2_ParamLimits

0x1ae9,	// (0x0003d97c) navi_pane_mp_g2

0x1af5,	// (0x0003d988) navi_pane_mp_g3_ParamLimits

0x1af5,	// (0x0003d988) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0004b2e6) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0004b2e6) navi_pane_mp_g

0x1b01,	// (0x0003d994) navi_pane_mp_t1

0x1b0f,	// (0x0003d9a2) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0004b2ed) navi_pane_mp_t

0x1b4b,	// (0x0003d9de) navi_pane_vt_g1

0x1b01,	// (0x0003d994) navi_pane_vt_t1

0x1b53,	// (0x0003d9e6) navi_slider_pane

0x1b5b,	// (0x0003d9ee) zooming_pane

0x1b63,	// (0x0003d9f6) navi_slider_pane_g1

0xc11e,	// (0x00047fb1) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0004b2f4) navi_slider_pane_g

0x1b87,	// (0x0003da1a) aid_levels_zoom

0x1b8f,	// (0x0003da22) zooming_pane_g1

0x1b97,	// (0x0003da2a) zooming_pane_g2

0x1b97,	// (0x0003da2a) zooming_pane_g3

0x0002,

0xf470,	// (0x0004b303) zooming_pane_g

0x1b9f,	// (0x0003da32) level_10_zoom

0x1ba8,	// (0x0003da3b) level_11_zoom

0x1bb1,	// (0x0003da44) level_1_zoom

0x1bba,	// (0x0003da4d) level_2_zoom

0x1bc3,	// (0x0003da56) level_3_zoom

0x1bcc,	// (0x0003da5f) level_4_zoom

0x1bd5,	// (0x0003da68) level_5_zoom

0x1bde,	// (0x0003da71) level_6_zoom

0x1be7,	// (0x0003da7a) level_7_zoom

0x1bf0,	// (0x0003da83) level_8_zoom

0x1bf9,	// (0x0003da8c) level_9_zoom

0x1c0a,	// (0x0003da9d) popup_phob_thumbnail_window_g1

0x1c12,	// (0x0003daa5) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0004b30a) popup_phob_thumbnail_window_g

0xc2c4,	// (0x00048157) level_1_location

0xc2cc,	// (0x0004815f) level_2_location

0xc2d4,	// (0x00048167) level_3_location

0xc2dc,	// (0x0004816f) level_4_location

0x1b5b,	// (0x0003d9ee) level_5_location

0x5238,	// (0x000410cb) mce_icon_pane_g1

0x5240,	// (0x000410d3) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0004b30f) mce_icon_pane_g

0x5248,	// (0x000410db) main_mup_pane_g1_ParamLimits

0x5248,	// (0x000410db) main_mup_pane_g1

0x525e,	// (0x000410f1) main_mup_pane_g2_ParamLimits

0x525e,	// (0x000410f1) main_mup_pane_g2

0x5276,	// (0x00041109) main_mup_pane_g3_ParamLimits

0x5276,	// (0x00041109) main_mup_pane_g3

0x528e,	// (0x00041121) main_mup_pane_g4_ParamLimits

0x528e,	// (0x00041121) main_mup_pane_g4

0x52a6,	// (0x00041139) main_mup_pane_g5_ParamLimits

0x52a6,	// (0x00041139) main_mup_pane_g5

0x52c2,	// (0x00041155) main_mup_pane_g6_ParamLimits

0x52c2,	// (0x00041155) main_mup_pane_g6

0x52da,	// (0x0004116d) main_mup_pane_g7_ParamLimits

0x52da,	// (0x0004116d) main_mup_pane_g7

0x52f2,	// (0x00041185) main_mup_pane_g8_ParamLimits

0x52f2,	// (0x00041185) main_mup_pane_g8

0x530a,	// (0x0004119d) main_mup_pane_g9_ParamLimits

0x530a,	// (0x0004119d) main_mup_pane_g9

0x5324,	// (0x000411b7) main_mup_pane_g10_ParamLimits

0x5324,	// (0x000411b7) main_mup_pane_g10

0x533e,	// (0x000411d1) main_mup_pane_g11_ParamLimits

0x533e,	// (0x000411d1) main_mup_pane_g11

0x5352,	// (0x000411e5) main_mup_pane_g12_ParamLimits

0x5352,	// (0x000411e5) main_mup_pane_g12

0x5368,	// (0x000411fb) main_mup_pane_g13_ParamLimits

0x5368,	// (0x000411fb) main_mup_pane_g13

0x000c,

0xf481,	// (0x0004b314) main_mup_pane_g_ParamLimits

0xf481,	// (0x0004b314) main_mup_pane_g

0x537c,	// (0x0004120f) main_mup_pane_t1_ParamLimits

0x537c,	// (0x0004120f) main_mup_pane_t1

0x5396,	// (0x00041229) main_mup_pane_t2_ParamLimits

0x5396,	// (0x00041229) main_mup_pane_t2

0x53ae,	// (0x00041241) main_mup_pane_t3_ParamLimits

0x53ae,	// (0x00041241) main_mup_pane_t3

0x53c6,	// (0x00041259) main_mup_pane_t4_ParamLimits

0x53c6,	// (0x00041259) main_mup_pane_t4

0x53e4,	// (0x00041277) main_mup_pane_t5_ParamLimits

0x53e4,	// (0x00041277) main_mup_pane_t5

0x53f9,	// (0x0004128c) main_mup_pane_t6_ParamLimits

0x53f9,	// (0x0004128c) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0004b32f) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0004b32f) main_mup_pane_t

0x540b,	// (0x0004129e) mup_progress_pane_ParamLimits

0x540b,	// (0x0004129e) mup_progress_pane

0x5417,	// (0x000412aa) mup_visualizer_pane_ParamLimits

0x5417,	// (0x000412aa) mup_visualizer_pane

0x544b,	// (0x000412de) mup_volume_pane_ParamLimits

0x544b,	// (0x000412de) mup_volume_pane

0x1867,	// (0x0003d6fa) mup_visualizer_pane_g1_ParamLimits

0x1867,	// (0x0003d6fa) mup_visualizer_pane_g1

0x1867,	// (0x0003d6fa) mup_visualizer_pane_g2_ParamLimits

0x1867,	// (0x0003d6fa) mup_visualizer_pane_g2

0x1a90,	// (0x0003d923) mup_visualizer_pane_g3_ParamLimits

0x1a90,	// (0x0003d923) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0004b33c) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0004b33c) mup_visualizer_pane_g

0x1120,	// (0x0003cfb3) mup_volume_pane_g1

0x1c22,	// (0x0003dab5) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0004b343) mup_volume_pane_g

0x1120,	// (0x0003cfb3) mup_progress_pane_g1

0x1c2b,	// (0x0003dabe) mup_progress_pane_g2

0x1c34,	// (0x0003dac7) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0004b348) mup_progress_pane_g

0x0d61,	// (0x0003cbf4) bg_popup_window_pane_cp05

0x1c3d,	// (0x0003dad0) heading_pane_cp02_ParamLimits

0x1c3d,	// (0x0003dad0) heading_pane_cp02

0x1c57,	// (0x0003daea) list_popup_blid_pane

0x1c5f,	// (0x0003daf2) list_blid_sat_info_pane_ParamLimits

0x1c5f,	// (0x0003daf2) list_blid_sat_info_pane

0x5469,	// (0x000412fc) list_blid_sat_info_pane_g1

0x5471,	// (0x00041304) list_blid_sat_info_pane_t1

0x5577,	// (0x0004140a) mup_equalizer_pane_ParamLimits

0x5577,	// (0x0004140a) mup_equalizer_pane

0x5590,	// (0x00041423) mup_equalizer_pane_cp1_ParamLimits

0x5590,	// (0x00041423) mup_equalizer_pane_cp1

0x55ad,	// (0x00041440) mup_equalizer_pane_cp2_ParamLimits

0x55ad,	// (0x00041440) mup_equalizer_pane_cp2

0x55ca,	// (0x0004145d) mup_equalizer_pane_cp3_ParamLimits

0x55ca,	// (0x0004145d) mup_equalizer_pane_cp3

0x55eb,	// (0x0004147e) mup_equalizer_pane_cp4_ParamLimits

0x55eb,	// (0x0004147e) mup_equalizer_pane_cp4

0x560c,	// (0x0004149f) mup_equalizer_pane_cp5

0x5620,	// (0x000414b3) mup_equalizer_pane_cp6

0x5634,	// (0x000414c7) mup_equalizer_pane_cp7

0xc1e2,	// (0x00048075) bg_popup_call_poc_act_pane_g9

0xc1ea,	// (0x0004807d) bg_popup_call_poc_act_pane_g10

0xc1f2,	// (0x00048085) bg_popup_call_poc_act_pane_g11

0x000a,

0x0fbc,	// (0x0003ce4f) mup_scale_pane

0x1120,	// (0x0003cfb3) mup_scale_pane_g1

0x5648,	// (0x000414db) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0004b364) mup_scale_pane_g

0x567e,	// (0x00041511) msg_data_pane

0x5686,	// (0x00041519) scroll_pane_cp017

0x2b84,	// (0x0003ea17) bg_list_pane_cp04_ParamLimits

0x2b84,	// (0x0003ea17) bg_list_pane_cp04

0x5696,	// (0x00041529) msg_data_pane_g1

0x569e,	// (0x00041531) msg_data_pane_g2

0x4f00,	// (0x00040d93) msg_data_pane_g3

0x56a6,	// (0x00041539) msg_data_pane_g4

0x56ae,	// (0x00041541) msg_data_pane_g5

0x56b6,	// (0x00041549) msg_data_pane_g6

0x56be,	// (0x00041551) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0004b373) msg_data_pane_g

0x56c6,	// (0x00041559) msg_text_pane_ParamLimits

0x56c6,	// (0x00041559) msg_text_pane

0x56ef,	// (0x00041582) qrid_highlight_pane_cp011_ParamLimits

0x56ef,	// (0x00041582) qrid_highlight_pane_cp011

0x0d61,	// (0x0003cbf4) msg_body_pane

0x0d61,	// (0x0003cbf4) msg_header_pane

0x570e,	// (0x000415a1) input_focus_pane_cp07

0x5723,	// (0x000415b6) msg_header_pane_t1_ParamLimits

0x5723,	// (0x000415b6) msg_header_pane_t1

0x2baa,	// (0x0003ea3d) msg_header_pane_t2_ParamLimits

0x2baa,	// (0x0003ea3d) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0004b387) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0004b387) msg_header_pane_t

0x5737,	// (0x000415ca) msg_body_pane_g1

0x2bbc,	// (0x0003ea4f) msg_body_pane_t1_ParamLimits

0x2bbc,	// (0x0003ea4f) msg_body_pane_t1

0x2bed,	// (0x0003ea80) msg_body_pane_t2_ParamLimits

0x2bed,	// (0x0003ea80) msg_body_pane_t2

0x2bff,	// (0x0003ea92) msg_body_pane_t3_ParamLimits

0x2bff,	// (0x0003ea92) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0004b38c) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0004b38c) msg_body_pane_t

0x5779,	// (0x0004160c) main_viewer_pane_g1_ParamLimits

0x5779,	// (0x0004160c) main_viewer_pane_g1

0x5787,	// (0x0004161a) main_viewer_pane_g2_ParamLimits

0x5787,	// (0x0004161a) main_viewer_pane_g2

0x5795,	// (0x00041628) main_viewer_pane_g3_ParamLimits

0x5795,	// (0x00041628) main_viewer_pane_g3

0x57a4,	// (0x00041637) main_viewer_pane_g4_ParamLimits

0x57a4,	// (0x00041637) main_viewer_pane_g4

0xc148,	// (0x00047fdb) main_viewer_pane_g5_ParamLimits

0xc148,	// (0x00047fdb) main_viewer_pane_g5

0xc148,	// (0x00047fdb) main_viewer_pane_g7_ParamLimits

0xc148,	// (0x00047fdb) main_viewer_pane_g7

0xc15a,	// (0x00047fed) main_viewer_pane_g8_ParamLimits

0xc15a,	// (0x00047fed) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0004b39c) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0004b39c) main_viewer_pane_g

0x57b3,	// (0x00041646) viewer_content_pane_ParamLimits

0x57b3,	// (0x00041646) viewer_content_pane

0x57ee,	// (0x00041681) main_postcard_pane_g1_ParamLimits

0x57ee,	// (0x00041681) main_postcard_pane_g1

0x5804,	// (0x00041697) main_postcard_pane_g2_ParamLimits

0x5804,	// (0x00041697) main_postcard_pane_g2

0x581a,	// (0x000416ad) main_postcard_pane_g3_ParamLimits

0x581a,	// (0x000416ad) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0004b3ad) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0004b3ad) main_postcard_pane_g

0x5831,	// (0x000416c4) main_postcard_pane_g4

0xc3f7,	// (0x0004828a) smil_status_volume_pane_g2

0x5874,	// (0x00041707) postcard_pane_ParamLimits

0x5874,	// (0x00041707) postcard_pane

0x58b6,	// (0x00041749) postcard_pane_g1_ParamLimits

0x58b6,	// (0x00041749) postcard_pane_g1

0x58c4,	// (0x00041757) postcard_pane_g2_ParamLimits

0x58c4,	// (0x00041757) postcard_pane_g2

0x58d0,	// (0x00041763) postcard_pane_g3_ParamLimits

0x58d0,	// (0x00041763) postcard_pane_g3

0x58dc,	// (0x0004176f) postcard_pane_g4_ParamLimits

0x58dc,	// (0x0004176f) postcard_pane_g4

0x58ea,	// (0x0004177d) postcard_pane_g5_ParamLimits

0x58ea,	// (0x0004177d) postcard_pane_g5

0x58ff,	// (0x00041792) postcard_pane_g6_ParamLimits

0x58ff,	// (0x00041792) postcard_pane_g6

0x58b6,	// (0x00041749) postcard_pane_g7_ParamLimits

0x58b6,	// (0x00041749) postcard_pane_g7

0x0006,

0xf527,	// (0x0004b3ba) postcard_pane_g_ParamLimits

0xf527,	// (0x0004b3ba) postcard_pane_g

0x5913,	// (0x000417a6) main_mp2_pane_g1_ParamLimits

0x5913,	// (0x000417a6) main_mp2_pane_g1

0x591f,	// (0x000417b2) main_mp2_pane_g2_ParamLimits

0x591f,	// (0x000417b2) main_mp2_pane_g2

0x592b,	// (0x000417be) main_mp2_pane_g3_ParamLimits

0x592b,	// (0x000417be) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0004b3c9) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0004b3c9) main_mp2_pane_g

0x5937,	// (0x000417ca) main_mp2_pane_t1_ParamLimits

0x5937,	// (0x000417ca) main_mp2_pane_t1

0x594c,	// (0x000417df) main_mp2_pane_t2_ParamLimits

0x594c,	// (0x000417df) main_mp2_pane_t2

0x595e,	// (0x000417f1) main_mp2_pane_t3_ParamLimits

0x595e,	// (0x000417f1) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0004b3d0) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0004b3d0) main_mp2_pane_t

0x5970,	// (0x00041803) pec_content_pane_ParamLimits

0x5970,	// (0x00041803) pec_content_pane

0x1433,	// (0x0003d2c6) scroll_pane_cp015

0x5982,	// (0x00041815) pec_attribute_pane_ParamLimits

0x5982,	// (0x00041815) pec_attribute_pane

0x5992,	// (0x00041825) pec_content_pane_g1_ParamLimits

0x5992,	// (0x00041825) pec_content_pane_g1

0x59a0,	// (0x00041833) pec_content_pane_t1_ParamLimits

0x59a0,	// (0x00041833) pec_content_pane_t1

0x59b2,	// (0x00041845) pec_content_pane_t2_ParamLimits

0x59b2,	// (0x00041845) pec_content_pane_t2

0x0001,

0xf544,	// (0x0004b3d7) pec_content_pane_t_ParamLimits

0xf544,	// (0x0004b3d7) pec_content_pane_t

0x59c4,	// (0x00041857) list_single_graphic_pane_cp01_ParamLimits

0x59c4,	// (0x00041857) list_single_graphic_pane_cp01

0x0fbc,	// (0x0003ce4f) bg_popup_sub_pane_cp04

0x59dc,	// (0x0004186f) popup_mup_playback_window_g1

0x59e8,	// (0x0004187b) popup_mup_playback_window_t1

0x59fd,	// (0x00041890) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0004b3dc) popup_mup_playback_window_t

0x5a52,	// (0x000418e5) main_image_pane_g1_ParamLimits

0x5a52,	// (0x000418e5) main_image_pane_g1

0x5b2f,	// (0x000419c2) scroll_pane_cp018_ParamLimits

0x5b2f,	// (0x000419c2) scroll_pane_cp018

0x5b47,	// (0x000419da) scroll_pane_cp016_ParamLimits

0x5b47,	// (0x000419da) scroll_pane_cp016

0x5b7b,	// (0x00041a0e) smil2_image_pane_ParamLimits

0x5b7b,	// (0x00041a0e) smil2_image_pane

0x5baf,	// (0x00041a42) smil2_root_pane_ParamLimits

0x5baf,	// (0x00041a42) smil2_root_pane

0x5be7,	// (0x00041a7a) smil2_text_pane_ParamLimits

0x5be7,	// (0x00041a7a) smil2_text_pane

0x0d61,	// (0x0003cbf4) bg_list_pane_cp06

0x5c6f,	// (0x00041b02) grid_radio_pane

0x0d61,	// (0x0003cbf4) bg_popup_window_pane_cp06

0x5c77,	// (0x00041b0a) main_fmradio_pane_t1

0x18de,	// (0x0003d771) heading_pane_cp04

0x5c85,	// (0x00041b18) main_fmradio_pane_t2

0xc1fa,	// (0x0004808d) popup_cale_lunar_info_window_g1

0x5c93,	// (0x00041b26) main_fmradio_pane_t3

0xc202,	// (0x00048095) popup_cale_lunar_info_window_g2

0x5ca1,	// (0x00041b34) main_fmradio_pane_t4

0x0001,

0x5caf,	// (0x00041b42) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0004b4b7) popup_cale_lunar_info_window_g

0xf55e,	// (0x0004b3f1) main_fmradio_pane_t

0x5cbd,	// (0x00041b50) wait_bar_pane_cp03

0x5cc5,	// (0x00041b58) cell_fmradio_pane_ParamLimits

0x5cc5,	// (0x00041b58) cell_fmradio_pane

0x58b6,	// (0x00041749) cell_fmradio_pane_g1_ParamLimits

0x58b6,	// (0x00041749) cell_fmradio_pane_g1

0x0d61,	// (0x0003cbf4) grid_highlight_pane_cp011

0x5cd8,	// (0x00041b6b) poc_content_pane_ParamLimits

0x5cd8,	// (0x00041b6b) poc_content_pane

0x5cea,	// (0x00041b7d) scroll_pane_cp019

0x5cf2,	// (0x00041b85) popup_call_poc_act_window_ParamLimits

0x5cf2,	// (0x00041b85) popup_call_poc_act_window

0x5d16,	// (0x00041ba9) popup_call_poc_inact_window_ParamLimits

0x5d16,	// (0x00041ba9) popup_call_poc_inact_window

0xf5fb,	// (0x0004b48e) bg_popup_call_poc_act_pane_g

0xc172,	// (0x00048005) bg_popup_call_poc_inact_pane_g1

0xc17a,	// (0x0004800d) bg_popup_call_poc_inact_pane_g2

0x5d2f,	// (0x00041bc2) popup_call_poc_act_window_g2

0xc182,	// (0x00048015) bg_popup_call_poc_inact_pane_g3

0xc18a,	// (0x0004801d) bg_popup_call_poc_inact_pane_g4

0xc192,	// (0x00048025) bg_popup_call_poc_inact_pane_g5

0x5d37,	// (0x00041bca) popup_call_poc_act_window_t1_ParamLimits

0x5d37,	// (0x00041bca) popup_call_poc_act_window_t1

0x5d5f,	// (0x00041bf2) popup_call_poc_act_window_t2_ParamLimits

0x5d5f,	// (0x00041bf2) popup_call_poc_act_window_t2

0x5d87,	// (0x00041c1a) popup_call_poc_act_window_t3_ParamLimits

0x5d87,	// (0x00041c1a) popup_call_poc_act_window_t3

0x5daf,	// (0x00041c42) popup_call_poc_act_window_t4_ParamLimits

0x5daf,	// (0x00041c42) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0004b3fc) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0004b3fc) popup_call_poc_act_window_t

0xc19a,	// (0x0004802d) bg_popup_call_poc_inact_pane_g6

0xc1a2,	// (0x00048035) bg_popup_call_poc_inact_pane_g7

0xc1aa,	// (0x0004803d) bg_popup_call_poc_inact_pane_g8

0x5dc1,	// (0x00041c54) popup_call_poc_inact_window_g2

0xc1b2,	// (0x00048045) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0004b47b) bg_popup_call_poc_inact_pane_g

0x5dc9,	// (0x00041c5c) popup_call_poc_inact_window_t1_ParamLimits

0x5dc9,	// (0x00041c5c) popup_call_poc_inact_window_t1

0x5dde,	// (0x00041c71) popup_call_poc_inact_window_t2_ParamLimits

0x5dde,	// (0x00041c71) popup_call_poc_inact_window_t2

0x5df3,	// (0x00041c86) popup_call_poc_inact_window_t3_ParamLimits

0x5df3,	// (0x00041c86) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0004b405) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0004b405) popup_call_poc_inact_window_t

0xc36a,	// (0x000481fd) context_pane_ParamLimits

0x7423,	// (0x000432b6) signal_pane_ParamLimits

0x1b5b,	// (0x0003d9ee) main_call2_pane

0xc358,	// (0x000481eb) popup_phob_thumbnail2_window_ParamLimits

0xc358,	// (0x000481eb) popup_phob_thumbnail2_window

0xc130,	// (0x00047fc3) aid_hotspot_pointer_arrow_pane

0xc138,	// (0x00047fcb) aid_hotspot_pointer_hand_pane

0x6f47,	// (0x00042dda) phob_pre_status_pane_g5

0x3e78,	// (0x0003fd0b) cams_zoom_pane_ParamLimits

0x3e87,	// (0x0003fd1a) image_vga_pane_ParamLimits

0x3ea1,	// (0x0003fd34) main_camera_pane_g1_ParamLimits

0x3eb3,	// (0x0003fd46) main_camera_pane_g2_ParamLimits

0x3ec5,	// (0x0003fd58) main_camera_pane_g3_ParamLimits

0x3ed7,	// (0x0003fd6a) main_camera_pane_g4_ParamLimits

0x3ee9,	// (0x0003fd7c) main_camera_pane_g5_ParamLimits

0x3efb,	// (0x0003fd8e) main_camera_pane_g6_ParamLimits

0x3f0d,	// (0x0003fda0) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0004b104) main_camera_pane_g_ParamLimits

0x3f1f,	// (0x0003fdb2) main_camera_pane_t1_ParamLimits

0x3f35,	// (0x0003fdc8) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0004b115) main_camera_pane_t_ParamLimits

0x0fbc,	// (0x0003ce4f) bg_popup_preview_window_pane_cp01_ParamLimits

0x0fbc,	// (0x0003ce4f) bg_popup_preview_window_pane_cp01

0x5e08,	// (0x00041c9b) popup_phob_thumbnail2_window_g1_ParamLimits

0x5e08,	// (0x00041c9b) popup_phob_thumbnail2_window_g1

0x0d61,	// (0x0003cbf4) call2_cli_visual_pane

0x5e2f,	// (0x00041cc2) popup_call2_audio_conf_window_ParamLimits

0x5e2f,	// (0x00041cc2) popup_call2_audio_conf_window

0x5e4f,	// (0x00041ce2) popup_call2_audio_first_window_ParamLimits

0x5e4f,	// (0x00041ce2) popup_call2_audio_first_window

0x5ee5,	// (0x00041d78) popup_call2_audio_in_window_ParamLimits

0x5ee5,	// (0x00041d78) popup_call2_audio_in_window

0x5f2d,	// (0x00041dc0) popup_call2_audio_out_window_ParamLimits

0x5f2d,	// (0x00041dc0) popup_call2_audio_out_window

0x5f97,	// (0x00041e2a) popup_call2_audio_second_window_ParamLimits

0x5f97,	// (0x00041e2a) popup_call2_audio_second_window

0x5ffd,	// (0x00041e90) popup_call2_audio_wait_window_ParamLimits

0x5ffd,	// (0x00041e90) popup_call2_audio_wait_window

0x0d61,	// (0x0003cbf4) bg_popup_call2_act_pane_cp03

0x0f9e,	// (0x0003ce31) list_conf_pane_cp

0x6037,	// (0x00041eca) popup_call2_audio_conf_window_t1

0x6045,	// (0x00041ed8) list_single_graphic_popup_conf2_pane_ParamLimits

0x6045,	// (0x00041ed8) list_single_graphic_popup_conf2_pane

0x1971,	// (0x0003d804) list_highlight_pane_cp04

0x6058,	// (0x00041eeb) list_single_graphic_popup_conf2_pane_g1

0x1982,	// (0x0003d815) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0004b40c) list_single_graphic_popup_conf2_pane_g

0x6062,	// (0x00041ef5) list_single_graphic_popup_conf2_pane_t1

0x6070,	// (0x00041f03) bg_popup_call2_act_pane_cp01_ParamLimits

0x6070,	// (0x00041f03) bg_popup_call2_act_pane_cp01

0x60fa,	// (0x00041f8d) call_type_pane_cp05_ParamLimits

0x60fa,	// (0x00041f8d) call_type_pane_cp05

0x614e,	// (0x00041fe1) popup_call2_audio_second_window_g1_ParamLimits

0x614e,	// (0x00041fe1) popup_call2_audio_second_window_g1

0x61a2,	// (0x00042035) popup_call2_audio_second_window_g2_ParamLimits

0x61a2,	// (0x00042035) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0004b411) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0004b411) popup_call2_audio_second_window_g

0x6207,	// (0x0004209a) popup_call2_audio_second_window_t1_ParamLimits

0x6207,	// (0x0004209a) popup_call2_audio_second_window_t1

0x62c2,	// (0x00042155) popup_call2_audio_second_window_t2_ParamLimits

0x62c2,	// (0x00042155) popup_call2_audio_second_window_t2

0x6315,	// (0x000421a8) popup_call2_audio_second_window_t3_ParamLimits

0x6315,	// (0x000421a8) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0004b418) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0004b418) popup_call2_audio_second_window_t

0x0d61,	// (0x0003cbf4) bg_popup_call2_in_pane_cp02

0x0d6b,	// (0x0003cbfe) call_type_pane_cp04

0x0d73,	// (0x0003cc06) popup_call2_audio_wait_window_g1

0x0d7b,	// (0x0003cc0e) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0004aff1) popup_call2_audio_wait_window_g

0x0d83,	// (0x0003cc16) popup_call2_audio_wait_window_t3

0x6408,	// (0x0004229b) bg_popup_call2_act_pane_ParamLimits

0x6408,	// (0x0004229b) bg_popup_call2_act_pane

0x64c8,	// (0x0004235b) call_type_pane_cp03_ParamLimits

0x64c8,	// (0x0004235b) call_type_pane_cp03

0x652c,	// (0x000423bf) popup_call2_audio_first_window_g1_ParamLimits

0x652c,	// (0x000423bf) popup_call2_audio_first_window_g1

0x659c,	// (0x0004242f) popup_call2_audio_first_window_g2_ParamLimits

0x659c,	// (0x0004242f) popup_call2_audio_first_window_g2

0x1867,	// (0x0003d6fa) popup_call2_audio_first_window_g3_ParamLimits

0x1867,	// (0x0003d6fa) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0004b421) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0004b421) popup_call2_audio_first_window_g

0x667a,	// (0x0004250d) popup_call2_audio_first_window_t1_ParamLimits

0x667a,	// (0x0004250d) popup_call2_audio_first_window_t1

0x677d,	// (0x00042610) popup_call2_audio_first_window_t4_ParamLimits

0x677d,	// (0x00042610) popup_call2_audio_first_window_t4

0x6860,	// (0x000426f3) popup_call2_audio_first_window_t5_ParamLimits

0x6860,	// (0x000426f3) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0004b42c) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0004b42c) popup_call2_audio_first_window_t

0x0fb4,	// (0x0003ce47) bg_popup_call2_act_pane_g1

0xc20a,	// (0x0004809d) popup_cale_lunar_info_window_t1

0xc218,	// (0x000480ab) popup_cale_lunar_info_window_t2

0xc226,	// (0x000480b9) popup_cale_lunar_info_window_t3

0x0d61,	// (0x0003cbf4) bg_popup_call2_bubble_pane

0x6961,	// (0x000427f4) bg_popup_call2_in_pane_cp01_ParamLimits

0x6961,	// (0x000427f4) bg_popup_call2_in_pane_cp01

0x0a3d,	// (0x0003c8d0) call_type_pane_cp02

0x69a9,	// (0x0004283c) popup_call2_audio_out_window_g1_ParamLimits

0x69a9,	// (0x0004283c) popup_call2_audio_out_window_g1

0x69d5,	// (0x00042868) popup_call2_audio_out_window_g2_ParamLimits

0x69d5,	// (0x00042868) popup_call2_audio_out_window_g2

0x69fd,	// (0x00042890) popup_call2_audio_out_window_g3_ParamLimits

0x69fd,	// (0x00042890) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0004b435) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0004b435) popup_call2_audio_out_window_g

0x6a38,	// (0x000428cb) popup_call2_audio_out_window_t1_ParamLimits

0x6a38,	// (0x000428cb) popup_call2_audio_out_window_t1

0x6a97,	// (0x0004292a) popup_call2_audio_out_window_t2_ParamLimits

0x6a97,	// (0x0004292a) popup_call2_audio_out_window_t2

0x6aeb,	// (0x0004297e) popup_call2_audio_out_window_t3_ParamLimits

0x6aeb,	// (0x0004297e) popup_call2_audio_out_window_t3

0x6b01,	// (0x00042994) popup_call2_audio_out_window_t4_ParamLimits

0x6b01,	// (0x00042994) popup_call2_audio_out_window_t4

0x6b17,	// (0x000429aa) popup_call2_audio_out_window_t5_ParamLimits

0x6b17,	// (0x000429aa) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0004b43e) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0004b43e) popup_call2_audio_out_window_t

0x6b7b,	// (0x00042a0e) bg_popup_call2_in_pane_ParamLimits

0x6b7b,	// (0x00042a0e) bg_popup_call2_in_pane

0x6bd7,	// (0x00042a6a) popup_call2_audio_in_window_g1_ParamLimits

0x6bd7,	// (0x00042a6a) popup_call2_audio_in_window_g1

0x6c0f,	// (0x00042aa2) popup_call2_audio_in_window_g2_ParamLimits

0x6c0f,	// (0x00042aa2) popup_call2_audio_in_window_g2

0x6c47,	// (0x00042ada) popup_call2_audio_in_window_g3_ParamLimits

0x6c47,	// (0x00042ada) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0004b44b) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0004b44b) popup_call2_audio_in_window_g

0x6c9f,	// (0x00042b32) popup_call2_audio_in_window_t1_ParamLimits

0x6c9f,	// (0x00042b32) popup_call2_audio_in_window_t1

0x6d1f,	// (0x00042bb2) popup_call2_audio_in_window_t2_ParamLimits

0x6d1f,	// (0x00042bb2) popup_call2_audio_in_window_t2

0x6d9f,	// (0x00042c32) popup_call2_audio_in_window_t3_ParamLimits

0x6d9f,	// (0x00042c32) popup_call2_audio_in_window_t3

0x6db9,	// (0x00042c4c) popup_call2_audio_in_window_t4_ParamLimits

0x6db9,	// (0x00042c4c) popup_call2_audio_in_window_t4

0x6dcb,	// (0x00042c5e) popup_call2_audio_in_window_t5_ParamLimits

0x6dcb,	// (0x00042c5e) popup_call2_audio_in_window_t5

0x6de0,	// (0x00042c73) popup_call2_audio_in_window_t6_ParamLimits

0x6de0,	// (0x00042c73) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0004b454) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0004b454) popup_call2_audio_in_window_t

0x0fb4,	// (0x0003ce47) bg_popup_call2_in_pane_g1

0xc234,	// (0x000480c7) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0004b4bc) popup_cale_lunar_info_window_t

0x0fbc,	// (0x0003ce4f) bg_popup_call2_rect_pane_ParamLimits

0x0fbc,	// (0x0003ce4f) bg_popup_call2_rect_pane

0x0d61,	// (0x0003cbf4) call2_cli_visual_graphic_pane

0x0d61,	// (0x0003cbf4) call2_cli_visual_text_pane

0xc40a,	// (0x0004829d) smil_status_volume_pane_g3

0x0002,

0x1120,	// (0x0003cfb3) call2_cli_visual_graphic_pane_g1

0x1120,	// (0x0003cfb3) call2_cli_visual_graphic_pane_g2

0x1120,	// (0x0003cfb3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0004b461) call2_cli_visual_graphic_pane_g

0x6e12,	// (0x00042ca5) bg_popup_call2_rect_pane_g1

0x11be,	// (0x0003d051) bg_popup_call2_rect_pane_g2

0x6e1a,	// (0x00042cad) bg_popup_call2_rect_pane_g3

0x6e22,	// (0x00042cb5) bg_popup_call2_rect_pane_g4

0x6e2a,	// (0x00042cbd) bg_popup_call2_rect_pane_g5

0x6e32,	// (0x00042cc5) bg_popup_call2_rect_pane_g6

0x6e3a,	// (0x00042ccd) bg_popup_call2_rect_pane_g7

0x6e42,	// (0x00042cd5) bg_popup_call2_rect_pane_g8

0x6e4a,	// (0x00042cdd) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0004b468) bg_popup_call2_rect_pane_g

0xc172,	// (0x00048005) bg_popup_call2_bubble_pane_g1

0xc17a,	// (0x0004800d) bg_popup_call2_bubble_pane_g2

0xc182,	// (0x00048015) bg_popup_call2_bubble_pane_g3

0xc18a,	// (0x0004801d) bg_popup_call2_bubble_pane_g4

0xc192,	// (0x00048025) bg_popup_call2_bubble_pane_g5

0xc19a,	// (0x0004802d) bg_popup_call2_bubble_pane_g6

0xc1a2,	// (0x00048035) bg_popup_call2_bubble_pane_g7

0xc1aa,	// (0x0004803d) bg_popup_call2_bubble_pane_g8

0xc1b2,	// (0x00048045) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0004b47b) bg_popup_call2_bubble_pane_g

0x3ae9,	// (0x0003f97c) aid_cale_week_size_cell_pane

0x3f4d,	// (0x0003fde0) aid_cams_cif_uncrop_pane_ParamLimits

0x3f4d,	// (0x0003fde0) aid_cams_cif_uncrop_pane

0x410a,	// (0x0003ff9d) aid_cams_size_cell_ParamLimits

0x410a,	// (0x0003ff9d) aid_cams_size_cell

0x411e,	// (0x0003ffb1) grid_cams_pane_ParamLimits

0x4138,	// (0x0003ffcb) linegrid_cams_pane_ParamLimits

0x4207,	// (0x0004009a) call_video_pane_t1

0x421b,	// (0x000400ae) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0004b168) call_video_pane_t

0x45c3,	// (0x00040456) aid_cale_month_size_cell_pane_ParamLimits

0x45c3,	// (0x00040456) aid_cale_month_size_cell_pane

0xf672,	// (0x0004b505) smil_status_volume_pane_g

0xc417,	// (0x000482aa) volume_smil_pane_ParamLimits

0x08fa,	// (0x0003c78d) aid_popup2_width_pane

0x3a54,	// (0x0003f8e7) cell_qdial_pane_g4_ParamLimits

0x3a54,	// (0x0003f8e7) cell_qdial_pane_g4

0x5099,	// (0x00040f2c) aid_blid_cardinal_pane_ParamLimits

0x50a5,	// (0x00040f38) aid_blid_destination_pane_ParamLimits

0x50a5,	// (0x00040f38) aid_blid_destination_pane

0x0fbc,	// (0x0003ce4f) bg_popup_call_poc_act_pane_ParamLimits

0x0fbc,	// (0x0003ce4f) bg_popup_call_poc_act_pane

0x0fbc,	// (0x0003ce4f) bg_popup_call_poc_inact_pane_ParamLimits

0x0fbc,	// (0x0003ce4f) bg_popup_call_poc_inact_pane

0xc1ba,	// (0x0004804d) bg_popup_call_poc_act_pane_g1

0xc1c2,	// (0x00048055) bg_popup_call_poc_act_pane_g2

0xc1ca,	// (0x0004805d) bg_popup_call_poc_act_pane_g3

0xc18a,	// (0x0004801d) bg_popup_call_poc_act_pane_g4

0xc192,	// (0x00048025) bg_popup_call_poc_act_pane_g5

0xc1d2,	// (0x00048065) bg_popup_call_poc_act_pane_g6

0xc1a2,	// (0x00048035) bg_popup_call_poc_act_pane_g7

0xc1da,	// (0x0004806d) bg_popup_call_poc_act_pane_g8

0x0d61,	// (0x0003cbf4) main_usb_pane

0xc333,	// (0x000481c6) popup_cale_lunar_info_window

0x445a,	// (0x000402ed) im_reading_pane_t1_ParamLimits

0x138b,	// (0x0003d21e) list_im_pane_ParamLimits

0x139c,	// (0x0003d22f) scroll_pane_cp07_ParamLimits

0x0d61,	// (0x0003cbf4) grid_highlight_pane_cp012

0x0fbc,	// (0x0003ce4f) mup_scale_pane_ParamLimits

0x58b6,	// (0x00041749) main_usb_pane_g1_ParamLimits

0x58b6,	// (0x00041749) main_usb_pane_g1

0x6e5a,	// (0x00042ced) main_usb_pane_g2_ParamLimits

0x6e5a,	// (0x00042ced) main_usb_pane_g2

0x0001,

0xf612,	// (0x0004b4a5) main_usb_pane_g_ParamLimits

0xf612,	// (0x0004b4a5) main_usb_pane_g

0x6e70,	// (0x00042d03) main_usb_pane_t1_ParamLimits

0x6e70,	// (0x00042d03) main_usb_pane_t1

0x6e82,	// (0x00042d15) main_usb_pane_t2_ParamLimits

0x6e82,	// (0x00042d15) main_usb_pane_t2

0x6e94,	// (0x00042d27) main_usb_pane_t3_ParamLimits

0x6e94,	// (0x00042d27) main_usb_pane_t3

0x6ea6,	// (0x00042d39) main_usb_pane_t4_ParamLimits

0x6ea6,	// (0x00042d39) main_usb_pane_t4

0x6eb8,	// (0x00042d4b) main_usb_pane_t5_ParamLimits

0x6eb8,	// (0x00042d4b) main_usb_pane_t5

0x6eca,	// (0x00042d5d) main_usb_pane_t6_ParamLimits

0x6eca,	// (0x00042d5d) main_usb_pane_t6

0x0005,

0xf617,	// (0x0004b4aa) main_usb_pane_t_ParamLimits

0x503e,	// (0x00040ed1) aid_text_placing

0x5047,	// (0x00040eda) main_location2_pane_t1_ParamLimits

0x505b,	// (0x00040eee) main_location2_pane_t2_ParamLimits

0x506f,	// (0x00040f02) main_location2_pane_t3_ParamLimits

0x5085,	// (0x00040f18) main_location2_pane_t4_ParamLimits

0x5085,	// (0x00040f18) main_location2_pane_t4

0xf436,	// (0x0004b2c9) main_location2_pane_t_ParamLimits

0x1000,	// (0x0003ce93) find_pinb_pane_g2_ParamLimits

0x1000,	// (0x0003ce93) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0004b017) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0004b017) find_pinb_pane_g

0x100c,	// (0x0003ce9f) find_pinb_pane_t1_ParamLimits

0x101e,	// (0x0003ceb1) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0004b01c) find_pinb_pane_t_ParamLimits

0x0d61,	// (0x0003cbf4) main_call3_pane

0x48bb,	// (0x0004074e) cale_month_day_heading_pane_t1_ParamLimits

0x4919,	// (0x000407ac) cale_month_day_heading_pane_t2_ParamLimits

0x497e,	// (0x00040811) cale_month_day_heading_pane_t3_ParamLimits

0x49e3,	// (0x00040876) cale_month_day_heading_pane_t4_ParamLimits

0x4a48,	// (0x000408db) cale_month_day_heading_pane_t5_ParamLimits

0x4aad,	// (0x00040940) cale_month_day_heading_pane_t6_ParamLimits

0x4b12,	// (0x000409a5) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0004b1a0) cale_month_day_heading_pane_t_ParamLimits

0x15dc,	// (0x0003d46f) smil_status_volume_pane

0x5892,	// (0x00041725) postcard_address_pane_ParamLimits

0x5892,	// (0x00041725) postcard_address_pane

0x58a4,	// (0x00041737) postcard_message_pane_ParamLimits

0x58a4,	// (0x00041737) postcard_message_pane

0x6df5,	// (0x00042c88) call2_cli_visual_pane_t1_ParamLimits

0x6df5,	// (0x00042c88) call2_cli_visual_pane_t1

0x7651,	// (0x000434e4) postcard_message_pane_t1_ParamLimits

0x7651,	// (0x000434e4) postcard_message_pane_t1

0x763a,	// (0x000434cd) postcard_address_pane_t1_ParamLimits

0x763a,	// (0x000434cd) postcard_address_pane_t1

0x7626,	// (0x000434b9) popup_call3_audio_in_window_ParamLimits

0x7626,	// (0x000434b9) popup_call3_audio_in_window

0x74b5,	// (0x00043348) bg_popup_call3_in_pane_ParamLimits

0x74b5,	// (0x00043348) bg_popup_call3_in_pane

0x7527,	// (0x000433ba) popup_call3_audio_in_window_g1_ParamLimits

0x7527,	// (0x000433ba) popup_call3_audio_in_window_g1

0x7547,	// (0x000433da) popup_call3_audio_in_window_g2_ParamLimits

0x7547,	// (0x000433da) popup_call3_audio_in_window_g2

0x7567,	// (0x000433fa) popup_call3_audio_in_window_g3_ParamLimits

0x7567,	// (0x000433fa) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0004b50c) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0004b50c) popup_call3_audio_in_window_g

0x7598,	// (0x0004342b) popup_call3_audio_in_window_t1_ParamLimits

0x7598,	// (0x0004342b) popup_call3_audio_in_window_t1

0x75d6,	// (0x00043469) popup_call3_audio_in_window_t2_ParamLimits

0x75d6,	// (0x00043469) popup_call3_audio_in_window_t2

0x7614,	// (0x000434a7) popup_call3_audio_in_window_t3_ParamLimits

0x7614,	// (0x000434a7) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0004b515) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0004b515) popup_call3_audio_in_window_t

0x1b5b,	// (0x0003d9ee) bg_popup_call3_rect_pane

0x6e12,	// (0x00042ca5) bg_popup_call3_rect_pane_g1

0x11be,	// (0x0003d051) bg_popup_call3_rect_pane_g2

0x6e1a,	// (0x00042cad) bg_popup_call3_rect_pane_g3

0x6e22,	// (0x00042cb5) bg_popup_call3_rect_pane_g4

0x6e2a,	// (0x00042cbd) bg_popup_call3_rect_pane_g5

0x6e32,	// (0x00042cc5) bg_popup_call3_rect_pane_g6

0x6e3a,	// (0x00042ccd) bg_popup_call3_rect_pane_g7

0x5461,	// (0x000412f4) mup_visualizer_osc_pane

0x1c1a,	// (0x0003daad) mup_visualizer_spec_pane

0x74e5,	// (0x00043378) call3_video_qcif_pane_ParamLimits

0x74e5,	// (0x00043378) call3_video_qcif_pane

0x74f6,	// (0x00043389) call3_video_qcif_uncrop_pane_ParamLimits

0x74f6,	// (0x00043389) call3_video_qcif_uncrop_pane

0x7502,	// (0x00043395) call3_video_subqcif_pane_ParamLimits

0x7502,	// (0x00043395) call3_video_subqcif_pane

0x7516,	// (0x000433a9) call3_video_subqcif_uncrop_pane_ParamLimits

0x7516,	// (0x000433a9) call3_video_subqcif_uncrop_pane

0x7587,	// (0x0004341a) popup_call3_audio_in_window_g4_ParamLimits

0x7587,	// (0x0004341a) popup_call3_audio_in_window_g4

0x74a4,	// (0x00043337) mup_spec_half_pane

0x74ad,	// (0x00043340) mup_spec_half_pane_cp

0xc3ca,	// (0x0004825d) mup_osc_middle_pane

0xc3d3,	// (0x00048266) mup_visualizer_osc_pane_g1

0x7484,	// (0x00043317) mup_spec_bar_pane_ParamLimits

0x7484,	// (0x00043317) mup_spec_bar_pane

0xc3b7,	// (0x0004824a) mup_spec_bar_pane_g1

0xc3c1,	// (0x00048254) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0004b500) mup_spec_bar_pane_g

0x3ae9,	// (0x0003f97c) aid_cale_week_size_cell_pane_ParamLimits

0x3afc,	// (0x0003f98f) bg_cale_heading_pane_ParamLimits

0x11f2,	// (0x0003d085) bg_cale_pane_cp01_ParamLimits

0x3b14,	// (0x0003f9a7) cale_week_corner_pane_ParamLimits

0x3b25,	// (0x0003f9b8) cale_week_day_heading_pane_ParamLimits

0x3b3d,	// (0x0003f9d0) cale_week_scroll_pane_g1_ParamLimits

0x3b52,	// (0x0003f9e5) cale_week_scroll_pane_g2_ParamLimits

0x3b63,	// (0x0003f9f6) cale_week_scroll_pane_g3_ParamLimits

0x3b74,	// (0x0003fa07) cale_week_scroll_pane_g4_ParamLimits

0x3b85,	// (0x0003fa18) cale_week_scroll_pane_g5_ParamLimits

0x3b96,	// (0x0003fa29) cale_week_scroll_pane_g6_ParamLimits

0x3ba7,	// (0x0003fa3a) cale_week_scroll_pane_g7_ParamLimits

0x3bb8,	// (0x0003fa4b) cale_week_scroll_pane_g8_ParamLimits

0x3bc9,	// (0x0003fa5c) cale_week_scroll_pane_g9_ParamLimits

0x3bda,	// (0x0003fa6d) cale_week_scroll_pane_g10_ParamLimits

0x3beb,	// (0x0003fa7e) cale_week_scroll_pane_g11_ParamLimits

0x3bfc,	// (0x0003fa8f) cale_week_scroll_pane_g12_ParamLimits

0x3c0d,	// (0x0003faa0) cale_week_scroll_pane_g13_ParamLimits

0x3c1e,	// (0x0003fab1) cale_week_scroll_pane_g14_ParamLimits

0x3c2f,	// (0x0003fac2) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0004b0a8) cale_week_scroll_pane_g_ParamLimits

0x3c40,	// (0x0003fad3) cale_week_time_pane_ParamLimits

0x3c51,	// (0x0003fae4) grid_cale_week_pane_ParamLimits

0x120b,	// (0x0003d09e) listscroll_cale_week_pane_t1

0x3c64,	// (0x0003faf7) scroll_pane_cp08_ParamLimits

0x4604,	// (0x00040497) cale_month_corner_pane_ParamLimits

0x15b2,	// (0x0003d445) cale_month_pane_t1

0x4884,	// (0x00040717) cale_month_week_pane_ParamLimits

0x4ea3,	// (0x00040d36) popup_call_status_window_g1_ParamLimits

0x4eb7,	// (0x00040d4a) popup_call_status_window_g2_ParamLimits

0x4ecb,	// (0x00040d5e) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0004b250) popup_call_status_window_g_ParamLimits

0x18ce,	// (0x0003d761) aid_call2_pane

0x2b9c,	// (0x0003ea2f) msg_header_pane_g1

0x5892,	// (0x00041725) postcard_address2_pane_ParamLimits

0x5892,	// (0x00041725) postcard_address2_pane

0x58a4,	// (0x00041737) postcard_message2_pane_ParamLimits

0x58a4,	// (0x00041737) postcard_message2_pane

0x7431,	// (0x000432c4) message2_row_pane_ParamLimits

0x7431,	// (0x000432c4) message2_row_pane

0x7450,	// (0x000432e3) address2_row_pane_ParamLimits

0x7450,	// (0x000432e3) address2_row_pane

0xc385,	// (0x00048218) postcard_message2_row_pane_g1

0xc38d,	// (0x00048220) postcard_message2_row_pane_t1

0xc385,	// (0x00048218) address2_row_pane_g1

0xc38d,	// (0x00048220) address2_row_pane_t1

0xbec8,	// (0x00047d5b) aid_size_cell_vorec

0x0d61,	// (0x0003cbf4) main_rss_pane

0x7463,	// (0x000432f6) rss_list_single_pane_ParamLimits

0x7463,	// (0x000432f6) rss_list_single_pane

0xc39b,	// (0x0004822e) rss_list_single_pane_t1

0xc3a9,	// (0x0004823c) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0004b4fb) rss_list_single_pane_t

0x0d61,	// (0x0003cbf4) main_camera2_pane

0x0d61,	// (0x0003cbf4) main_video2_pane

0x76ca,	// (0x0004355d) cams_zoom_pane_cp2_ParamLimits

0x76ca,	// (0x0004355d) cams_zoom_pane_cp2

0x76ea,	// (0x0004357d) image2_vga_pane_ParamLimits

0x76ea,	// (0x0004357d) image2_vga_pane

0x773b,	// (0x000435ce) main_camera2_pane_g1_ParamLimits

0x773b,	// (0x000435ce) main_camera2_pane_g1

0x775b,	// (0x000435ee) main_camera2_pane_g2_ParamLimits

0x775b,	// (0x000435ee) main_camera2_pane_g2

0x777b,	// (0x0004360e) main_camera2_pane_g3_ParamLimits

0x777b,	// (0x0004360e) main_camera2_pane_g3

0x779b,	// (0x0004362e) main_camera2_pane_g4_ParamLimits

0x779b,	// (0x0004362e) main_camera2_pane_g4

0x77bb,	// (0x0004364e) main_camera2_pane_g5_ParamLimits

0x77bb,	// (0x0004364e) main_camera2_pane_g5

0x77db,	// (0x0004366e) main_camera2_pane_g6_ParamLimits

0x77db,	// (0x0004366e) main_camera2_pane_g6

0x77fb,	// (0x0004368e) main_camera2_pane_g7_ParamLimits

0x77fb,	// (0x0004368e) main_camera2_pane_g7

0x781b,	// (0x000436ae) main_camera2_pane_g8_ParamLimits

0x781b,	// (0x000436ae) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0004b51c) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0004b51c) main_camera2_pane_g

0x785b,	// (0x000436ee) main_camera2_pane_t1_ParamLimits

0x785b,	// (0x000436ee) main_camera2_pane_t1

0x7890,	// (0x00043723) main_camera2_pane_t2_ParamLimits

0x7890,	// (0x00043723) main_camera2_pane_t2

0x78b6,	// (0x00043749) main_camera2_pane_t3_ParamLimits

0x78b6,	// (0x00043749) main_camera2_pane_t3

0x7914,	// (0x000437a7) main_camera2_pane_t4_ParamLimits

0x7914,	// (0x000437a7) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0004b52f) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0004b52f) main_camera2_pane_t

0x79a6,	// (0x00043839) cams_zoom_pane_cp4_ParamLimits

0x79a6,	// (0x00043839) cams_zoom_pane_cp4

0x79bc,	// (0x0004384f) image2_cif_pane_ParamLimits

0x79bc,	// (0x0004384f) image2_cif_pane

0x79e7,	// (0x0004387a) image2_subqcif_pane_ParamLimits

0x79e7,	// (0x0004387a) image2_subqcif_pane

0x7a01,	// (0x00043894) main_video2_pane_g1_ParamLimits

0x7a01,	// (0x00043894) main_video2_pane_g1

0x7a1b,	// (0x000438ae) main_video2_pane_g2_ParamLimits

0x7a1b,	// (0x000438ae) main_video2_pane_g2

0x7a31,	// (0x000438c4) main_video2_pane_g3_ParamLimits

0x7a31,	// (0x000438c4) main_video2_pane_g3

0x7a47,	// (0x000438da) main_video2_pane_g4_ParamLimits

0x7a47,	// (0x000438da) main_video2_pane_g4

0x7a5d,	// (0x000438f0) main_video2_pane_g5_ParamLimits

0x7a5d,	// (0x000438f0) main_video2_pane_g5

0x7a73,	// (0x00043906) main_video2_pane_g6_ParamLimits

0x7a73,	// (0x00043906) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0004b53e) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0004b53e) main_video2_pane_g

0x7a8d,	// (0x00043920) main_video2_pane_t1_ParamLimits

0x7a8d,	// (0x00043920) main_video2_pane_t1

0x7ab1,	// (0x00043944) main_video2_pane_t2_ParamLimits

0x7ab1,	// (0x00043944) main_video2_pane_t2

0x7aff,	// (0x00043992) main_video2_pane_t3_ParamLimits

0x7aff,	// (0x00043992) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0004b54b) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0004b54b) main_video2_pane_t

0x6f87,	// (0x00042e1a) call_muted_g2

0x0001,

0xf65a,	// (0x0004b4ed) call_muted_g

0x0d61,	// (0x0003cbf4) main_mup2_pane

0x7b47,	// (0x000439da) main_mup2_pane_g1_ParamLimits

0x7b47,	// (0x000439da) main_mup2_pane_g1

0x7b53,	// (0x000439e6) main_mup2_pane_g2_ParamLimits

0x7b53,	// (0x000439e6) main_mup2_pane_g2

0xc53b,	// (0x000483ce) main_mup_pane_g13_cp1

0xc543,	// (0x000483d6) mup_volume_pane_cp1

0x7b6f,	// (0x00043a02) main_mup2_pane_g4_ParamLimits

0x7b6f,	// (0x00043a02) main_mup2_pane_g4

0x7b81,	// (0x00043a14) main_mup2_pane_g5_ParamLimits

0x7b81,	// (0x00043a14) main_mup2_pane_g5

0x7b93,	// (0x00043a26) main_mup2_pane_g6_ParamLimits

0x7b93,	// (0x00043a26) main_mup2_pane_g6

0x7ba5,	// (0x00043a38) main_mup2_pane_g7_ParamLimits

0x7ba5,	// (0x00043a38) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0004b552) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0004b552) main_mup2_pane_g

0x7bbd,	// (0x00043a50) main_mup2_pane_t1_ParamLimits

0x7bbd,	// (0x00043a50) main_mup2_pane_t1

0x7bd3,	// (0x00043a66) main_mup2_pane_t2_ParamLimits

0x7bd3,	// (0x00043a66) main_mup2_pane_t2

0x7be9,	// (0x00043a7c) main_mup2_pane_t3_ParamLimits

0x7be9,	// (0x00043a7c) main_mup2_pane_t3

0x7bff,	// (0x00043a92) main_mup2_pane_t4_ParamLimits

0x7bff,	// (0x00043a92) main_mup2_pane_t4

0x7c17,	// (0x00043aaa) main_mup2_pane_t5_ParamLimits

0x7c17,	// (0x00043aaa) main_mup2_pane_t5

0x7c2f,	// (0x00043ac2) main_mup2_pane_t6_ParamLimits

0x7c2f,	// (0x00043ac2) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0004b561) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0004b561) main_mup2_pane_t

0x7c5f,	// (0x00043af2) mup2_visualizer_pane_ParamLimits

0x7c5f,	// (0x00043af2) mup2_visualizer_pane

0x7c8d,	// (0x00043b20) mup_progress_pane_cp_ParamLimits

0x7c8d,	// (0x00043b20) mup_progress_pane_cp

0xc51d,	// (0x000483b0) mup_volume_pane_cp_ParamLimits

0xc51d,	// (0x000483b0) mup_volume_pane_cp

0x7ca1,	// (0x00043b34) mup2_visualizer_pane_g1_ParamLimits

0x7ca1,	// (0x00043b34) mup2_visualizer_pane_g1

0xc45c,	// (0x000482ef) mup2_visualizer_pane_g2_ParamLimits

0xc45c,	// (0x000482ef) mup2_visualizer_pane_g2

0x7cb8,	// (0x00043b4b) mup2_visualizer_pane_g3_ParamLimits

0x7cb8,	// (0x00043b4b) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0004b56e) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0004b56e) mup2_visualizer_pane_g

0x5c67,	// (0x00041afa) aid_size_cell_fmradio

0x7139,	// (0x00042fcc) aid_height_parent_landcape

0x141a,	// (0x0003d2ad) wml_content_pane_cp

0x1422,	// (0x0003d2b5) wml_tabs_pane

0x142b,	// (0x0003d2be) popup_wml_miniature_window

0x1433,	// (0x0003d2c6) scroll_pane_cp021

0x1447,	// (0x0003d2da) wml_content_pane_comp8

0x0d61,	// (0x0003cbf4) bg_popup_sub_pane_cp05

0xc47a,	// (0x0004830d) popup_wml_miniature_window_g1

0xc482,	// (0x00048315) wml_miniature_view_pane

0x7cc4,	// (0x00043b57) aid_size_wml_view

0x7ccc,	// (0x00043b5f) wml_miniature_view_pane_g1

0x7cd5,	// (0x00043b68) wml_miniature_view_pane_g2

0x7cde,	// (0x00043b71) wml_miniature_view_pane_g3

0x7ce6,	// (0x00043b79) wml_miniature_view_pane_g4

0x7cee,	// (0x00043b81) wml_miniature_view_pane_g5

0x7cf6,	// (0x00043b89) wml_miniature_view_pane_g6

0x7cfe,	// (0x00043b91) wml_miniature_view_pane_g7

0x7d06,	// (0x00043b99) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0004b575) wml_miniature_view_pane_g

0xc48a,	// (0x0004831d) background_graphic_ParamLimits

0xc48a,	// (0x0004831d) background_graphic

0xc496,	// (0x00048329) wml_tabs_2_pane

0xc49f,	// (0x00048332) wml_tabs_3_pane_ParamLimits

0xc49f,	// (0x00048332) wml_tabs_3_pane

0xc4b1,	// (0x00048344) wml_tabs_4_pane_ParamLimits

0xc4b1,	// (0x00048344) wml_tabs_4_pane

0xc4c7,	// (0x0004835a) wml_tabs_5_pane_ParamLimits

0xc4c7,	// (0x0004835a) wml_tabs_5_pane

0xc4e1,	// (0x00048374) wml_tabs_pane_g2_ParamLimits

0xc4e1,	// (0x00048374) wml_tabs_pane_g2

0xc4f5,	// (0x00048388) wml_tabs_pane_g3_ParamLimits

0xc4f5,	// (0x00048388) wml_tabs_pane_g3

0x7d0e,	// (0x00043ba1) wml_tabs_2_active_pane_ParamLimits

0x7d0e,	// (0x00043ba1) wml_tabs_2_active_pane

0x7d22,	// (0x00043bb5) wml_tabs_2_passive_pane_ParamLimits

0x7d22,	// (0x00043bb5) wml_tabs_2_passive_pane

0x7d36,	// (0x00043bc9) wml_tabs_3_active_pane_cp_ParamLimits

0x7d36,	// (0x00043bc9) wml_tabs_3_active_pane_cp

0x7d4b,	// (0x00043bde) wml_tabs_3_passive_pane_ParamLimits

0x7d4b,	// (0x00043bde) wml_tabs_3_passive_pane

0x7d5e,	// (0x00043bf1) wml_tabs_3_passive_pane_cp_ParamLimits

0x7d5e,	// (0x00043bf1) wml_tabs_3_passive_pane_cp

0x7d75,	// (0x00043c08) tabs_4_active_pane

0x7d7d,	// (0x00043c10) tabs_4_passive_pane

0x7d87,	// (0x00043c1a) tabs_4_passive_pane_cp

0x7d8f,	// (0x00043c22) tabs_4_passive_pane_cp2

0x6e52,	// (0x00042ce5) aid_height_text

0x5433,	// (0x000412c6) mup_volume_cont_pane_ParamLimits

0x5433,	// (0x000412c6) mup_volume_cont_pane

0x3737,	// (0x0003f5ca) aid_size_cell_pinb

0x0fec,	// (0x0003ce7f) aid_size_list_pinb

0x7c79,	// (0x00043b0c) mup2_volume_cont_pane_ParamLimits

0x7c79,	// (0x00043b0c) mup2_volume_cont_pane

0xc509,	// (0x0004839c) mup2_volume_cont_pane_g1_ParamLimits

0xc509,	// (0x0004839c) mup2_volume_cont_pane_g1

0x341a,	// (0x0003f2ad) aid_size_cell_touch_ParamLimits

0x341a,	// (0x0003f2ad) aid_size_cell_touch

0x3626,	// (0x0003f4b9) touch_pane_ParamLimits

0x3626,	// (0x0003f4b9) touch_pane

0x08e8,	// (0x0003c77b) main_rss2_pane

0xc54b,	// (0x000483de) listscroll_rss2_pane

0xc554,	// (0x000483e7) rss2_navigation_pane

0xc55c,	// (0x000483ef) list_rss2_pane

0x1a0e,	// (0x0003d8a1) scroll_pane_cp22

0xc564,	// (0x000483f7) rss2_navigation_pane_g1

0xc56d,	// (0x00048400) rss2_navigation_pane_g2

0xc575,	// (0x00048408) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0004b586) rss2_navigation_pane_g

0xc57d,	// (0x00048410) rss2_navigation_pane_t1

0x7d99,	// (0x00043c2c) rss2_list_single_pane_ParamLimits

0x7d99,	// (0x00043c2c) rss2_list_single_pane

0xc58b,	// (0x0004841e) rss2_list_single_pane_t2

0xc599,	// (0x0004842c) rss2_list_single_pane_t3_ParamLimits

0xc599,	// (0x0004842c) rss2_list_single_pane_t3

0xc5b6,	// (0x00048449) rss2_list_single_pane_t4

0x4cce,	// (0x00040b61) smil_status_pane_g1

0x1c72,	// (0x0003db05) main_image2_pane_ParamLimits

0x1c72,	// (0x0003db05) main_image2_pane

0x783b,	// (0x000436ce) main_camera2_pane_g9_ParamLimits

0x783b,	// (0x000436ce) main_camera2_pane_g9

0x7969,	// (0x000437fc) main_camera2_pane_t5_ParamLimits

0x7969,	// (0x000437fc) main_camera2_pane_t5

0xc42c,	// (0x000482bf) main_camera2_pane_t6_ParamLimits

0xc42c,	// (0x000482bf) main_camera2_pane_t6

0x7db1,	// (0x00043c44) main_image2_pane_g1_ParamLimits

0x7db1,	// (0x00043c44) main_image2_pane_g1

0x5c1d,	// (0x00041ab0) smil2_video_pane_ParamLimits

0x5c1d,	// (0x00041ab0) smil2_video_pane

0xbe28,	// (0x00047cbb) aid_zoom_text_primary_cp

0x0946,	// (0x0003c7d9) popup_preview_fixed_window

0x1383,	// (0x0003d216) im_reading_pane_g1

0x76b2,	// (0x00043545) cams2_bc_adjust_pane_cp_ParamLimits

0x76b2,	// (0x00043545) cams2_bc_adjust_pane_cp

0x7998,	// (0x0004382b) cams2_bc_adjust_pane_ParamLimits

0x7998,	// (0x0004382b) cams2_bc_adjust_pane

0xc5c4,	// (0x00048457) cams2_bc_adjust_pane_g1

0xc5cc,	// (0x0004845f) cams2_slider_pane

0xc5d5,	// (0x00048468) cams2_slider_pane_g1

0xc5de,	// (0x00048471) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0004b58d) cams2_slider_pane_g

0x37f6,	// (0x0003f689) calc_display_pane_ParamLimits

0x381c,	// (0x0003f6af) calc_paper_pane_ParamLimits

0x383f,	// (0x0003f6d2) grid_calc_pane_ParamLimits

0xc101,	// (0x00047f94) popup_clock_digital_window_t1_ParamLimits

0x5aa0,	// (0x00041933) main_image_pane_t1

0x37d8,	// (0x0003f66b) aid_size_cell_calc_ParamLimits

0x37d8,	// (0x0003f66b) aid_size_cell_calc

0x717f,	// (0x00043012) popup_blid_sat_info2_window_ParamLimits

0x717f,	// (0x00043012) popup_blid_sat_info2_window

0xc600,	// (0x00048493) aid_size_cell_blid

0xc608,	// (0x0004849b) bg_popup_window_pane_cp07

0xc62b,	// (0x000484be) grid_popup_blid_pane

0xc635,	// (0x000484c8) heading_pane_cp05_ParamLimits

0xc635,	// (0x000484c8) heading_pane_cp05

0xc6ff,	// (0x00048592) cell_popup_blid_pane_ParamLimits

0xc6ff,	// (0x00048592) cell_popup_blid_pane

0xc725,	// (0x000485b8) cell_popup_blid_pane_g1

0xc72d,	// (0x000485c0) cell_popup_blid_pane_t1

0x7c49,	// (0x00043adc) mup2_indicator_pane_ParamLimits

0x7c49,	// (0x00043adc) mup2_indicator_pane

0x1b5b,	// (0x0003d9ee) mup2_visualizer_osc_pane

0xc468,	// (0x000482fb) mup2_visualizer_spec_pane_ParamLimits

0xc468,	// (0x000482fb) mup2_visualizer_spec_pane

0x7dc7,	// (0x00043c5a) mup2_spec_half_pane

0x7dd0,	// (0x00043c63) mup2_spec_half_pane_cp

0x7dd8,	// (0x00043c6b) mup2_spec_bar_pane_ParamLimits

0x7dd8,	// (0x00043c6b) mup2_spec_bar_pane

0xc3b7,	// (0x0004824a) mup2_spec_bar_pane_g1

0xc3c1,	// (0x00048254) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0004b500) mup2_spec_bar_pane_g

0x7df8,	// (0x00043c8b) mup2_osc_middle_pane

0xc3d3,	// (0x00048266) mup2_visualizer_osc_pane_g1

0x0970,	// (0x0003c803) popup_number_entry_window_t1_ParamLimits

0x0983,	// (0x0003c816) popup_number_entry_window_t2_ParamLimits

0x0995,	// (0x0003c828) popup_number_entry_window_t3_ParamLimits

0x3678,	// (0x0003f50b) popup_number_entry_window_t5_ParamLimits

0x3678,	// (0x0003f50b) popup_number_entry_window_t5

0xf12f,	// (0x0004afc2) popup_number_entry_window_t_ParamLimits

0x09a7,	// (0x0003c83a) text_title_cp2_ParamLimits

0xc140,	// (0x00047fd3) aid_hotspot_pointer_text2_pane

0xc166,	// (0x00047ff9) main_viewer_pane_g9_ParamLimits

0xc166,	// (0x00047ff9) main_viewer_pane_g9

0x15b2,	// (0x0003d445) cale_month_pane_t1_ParamLimits

0x15ef,	// (0x0003d482) bg_cale_pane_ParamLimits

0x1607,	// (0x0003d49a) list_cale_pane_ParamLimits

0x120b,	// (0x0003d09e) listscroll_cale_day_pane_t1

0x1618,	// (0x0003d4ab) scroll_pane_cp09_ParamLimits

0x547f,	// (0x00041312) main_mup_eq_pane_t1_ParamLimits

0x547f,	// (0x00041312) main_mup_eq_pane_t1

0x5499,	// (0x0004132c) main_mup_eq_pane_t2_ParamLimits

0x5499,	// (0x0004132c) main_mup_eq_pane_t2

0x54b3,	// (0x00041346) main_mup_eq_pane_t3_ParamLimits

0x54b3,	// (0x00041346) main_mup_eq_pane_t3

0x54cf,	// (0x00041362) main_mup_eq_pane_t4_ParamLimits

0x54cf,	// (0x00041362) main_mup_eq_pane_t4

0x54eb,	// (0x0004137e) main_mup_eq_pane_t5_ParamLimits

0x54eb,	// (0x0004137e) main_mup_eq_pane_t5

0x5507,	// (0x0004139a) main_mup_eq_pane_t6_ParamLimits

0x5507,	// (0x0004139a) main_mup_eq_pane_t6

0x551b,	// (0x000413ae) main_mup_eq_pane_t7_ParamLimits

0x551b,	// (0x000413ae) main_mup_eq_pane_t7

0x552f,	// (0x000413c2) main_mup_eq_pane_t8_ParamLimits

0x552f,	// (0x000413c2) main_mup_eq_pane_t8

0x5543,	// (0x000413d6) main_mup_eq_pane_t9_ParamLimits

0x5543,	// (0x000413d6) main_mup_eq_pane_t9

0x555d,	// (0x000413f0) main_mup_eq_pane_t10_ParamLimits

0x555d,	// (0x000413f0) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0004b34f) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0004b34f) main_mup_eq_pane_t

0x560c,	// (0x0004149f) mup_equalizer_pane_cp5_ParamLimits

0x5620,	// (0x000414b3) mup_equalizer_pane_cp6_ParamLimits

0x5634,	// (0x000414c7) mup_equalizer_pane_cp7_ParamLimits

0x08e8,	// (0x0003c77b) main_gallery_pane

0xc3dc,	// (0x0004826f) smil2_volume_pane

0xc3e4,	// (0x00048277) smil_status_volume_pane_g1_ParamLimits

0xc3f7,	// (0x0004828a) smil_status_volume_pane_g2_ParamLimits

0xc40a,	// (0x0004829d) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0004b505) smil_status_volume_pane_g_ParamLimits

0xc608,	// (0x0004849b) bg_popup_window_pane_cp07_ParamLimits

0xc616,	// (0x000484a9) blid_firmament_pane

0x7e01,	// (0x00043c94) aid_size_cell_gallery_ParamLimits

0x7e01,	// (0x00043c94) aid_size_cell_gallery

0x7e17,	// (0x00043caa) grid_gallery_pane_ParamLimits

0x7e17,	// (0x00043caa) grid_gallery_pane

0x7e30,	// (0x00043cc3) cell_gallery_pane_ParamLimits

0x7e30,	// (0x00043cc3) cell_gallery_pane

0xc73b,	// (0x000485ce) bg_cell_gallery_focus_pane_ParamLimits

0xc73b,	// (0x000485ce) bg_cell_gallery_focus_pane

0xc74d,	// (0x000485e0) cell_gallery_pane_g1_ParamLimits

0xc74d,	// (0x000485e0) cell_gallery_pane_g1

0x7e79,	// (0x00043d0c) cell_gallery_pane_g2_ParamLimits

0x7e79,	// (0x00043d0c) cell_gallery_pane_g2

0x7e86,	// (0x00043d19) cell_gallery_pane_g3_ParamLimits

0x7e86,	// (0x00043d19) cell_gallery_pane_g3

0xc759,	// (0x000485ec) cell_gallery_pane_g4_ParamLimits

0xc759,	// (0x000485ec) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0004b5b3) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0004b5b3) cell_gallery_pane_g

0xc765,	// (0x000485f8) bg_cell_gallery_focus_pane_g1

0xc76d,	// (0x00048600) bg_cell_gallery_focus_pane_g2

0xc775,	// (0x00048608) bg_cell_gallery_focus_pane_g3

0xc77d,	// (0x00048610) bg_cell_gallery_focus_pane_g4

0xc785,	// (0x00048618) bg_cell_gallery_focus_pane_g5

0xc78d,	// (0x00048620) bg_cell_gallery_focus_pane_g6

0xc795,	// (0x00048628) bg_cell_gallery_focus_pane_g7

0xc79d,	// (0x00048630) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0004b5bc) bg_cell_gallery_focus_pane_g

0xc7a5,	// (0x00048638) aid_firma_cardinal

0xc7b9,	// (0x0004864c) blid_firmament_pane_t1

0xc7d0,	// (0x00048663) blid_firmament_pane_t2

0xc7e7,	// (0x0004867a) blid_firmament_pane_t3

0xc7fe,	// (0x00048691) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0004b5cd) blid_firmament_pane_t

0xc815,	// (0x000486a8) blid_sat_info_pane

0xc825,	// (0x000486b8) blid_sat_info_pane_g1

0xc825,	// (0x000486b8) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0004b5d6) blid_sat_info_pane_g

0xc82f,	// (0x000486c2) blid_sat_info_pane_t1

0xc83d,	// (0x000486d0) smil2_volume_content_pane

0xc846,	// (0x000486d9) smil2_volume_pane_g1

0xc84e,	// (0x000486e1) smil2_volume_content_pane_g1

0xc857,	// (0x000486ea) smil2_volume_content_pane_g2

0xc860,	// (0x000486f3) smil2_volume_content_pane_g3

0xc869,	// (0x000486fc) smil2_volume_content_pane_g4

0xc872,	// (0x00048705) smil2_volume_content_pane_g5

0xc87b,	// (0x0004870e) smil2_volume_content_pane_g6

0xc884,	// (0x00048717) smil2_volume_content_pane_g7

0xc88d,	// (0x00048720) smil2_volume_content_pane_g8

0xc896,	// (0x00048729) smil2_volume_content_pane_g9

0xc89f,	// (0x00048732) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0004b5db) smil2_volume_content_pane_g

0x3cba,	// (0x0003fb4d) cale_week_day_heading_pane_t1_ParamLimits

0x3cce,	// (0x0003fb61) cale_week_day_heading_pane_t2_ParamLimits

0x3ce2,	// (0x0003fb75) cale_week_day_heading_pane_t3_ParamLimits

0x3cf6,	// (0x0003fb89) cale_week_day_heading_pane_t4_ParamLimits

0x3d0a,	// (0x0003fb9d) cale_week_day_heading_pane_t5_ParamLimits

0x3d1e,	// (0x0003fbb1) cale_week_day_heading_pane_t6_ParamLimits

0x3d32,	// (0x0003fbc5) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0004b0c7) cale_week_day_heading_pane_t_ParamLimits

0x121d,	// (0x0003d0b0) bg_cale_side_pane_ParamLimits

0x3d46,	// (0x0003fbd9) cale_week_time_pane_t1_ParamLimits

0x3d5e,	// (0x0003fbf1) cale_week_time_pane_t2_ParamLimits

0x3d76,	// (0x0003fc09) cale_week_time_pane_t3_ParamLimits

0x3d8e,	// (0x0003fc21) cale_week_time_pane_t4_ParamLimits

0x3da6,	// (0x0003fc39) cale_week_time_pane_t5_ParamLimits

0x3dbe,	// (0x0003fc51) cale_week_time_pane_t6_ParamLimits

0x3dd6,	// (0x0003fc69) cale_week_time_pane_t7_ParamLimits

0x3dee,	// (0x0003fc81) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0004b0d6) cale_week_time_pane_t_ParamLimits

0x3e06,	// (0x0003fc99) cell_cale_week_pane_g2_ParamLimits

0x121d,	// (0x0003d0b0) bg_cale_side_pane_cp01_ParamLimits

0x4b77,	// (0x00040a0a) cale_month_week_pane_t1_ParamLimits

0x4b8e,	// (0x00040a21) cale_month_week_pane_t2_ParamLimits

0x4ba5,	// (0x00040a38) cale_month_week_pane_t3_ParamLimits

0x4bbc,	// (0x00040a4f) cale_month_week_pane_t4_ParamLimits

0x4bd3,	// (0x00040a66) cale_month_week_pane_t5_ParamLimits

0x4bea,	// (0x00040a7d) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0004b1af) cale_month_week_pane_t_ParamLimits

0xc00c,	// (0x00047e9f) cell_cale_month_pane_g1_ParamLimits

0x08e8,	// (0x0003c77b) main_cale_event_viewer_pane

0x08e8,	// (0x0003c77b) listscroll_cale_event_viewer_pane

0xc8a8,	// (0x0004873b) list_cale_ev_pane

0xc8b0,	// (0x00048743) scroll_pane_cp023

0xc8bc,	// (0x0004874f) field_cale_ev_pane_ParamLimits

0xc8bc,	// (0x0004874f) field_cale_ev_pane

0xc8d6,	// (0x00048769) field_cale_ev_content_pane_ParamLimits

0xc8d6,	// (0x00048769) field_cale_ev_content_pane

0xc8e2,	// (0x00048775) field_cale_ev_pane_g1_ParamLimits

0xc8e2,	// (0x00048775) field_cale_ev_pane_g1

0xc8ee,	// (0x00048781) field_cale_ev_pane_g2_ParamLimits

0xc8ee,	// (0x00048781) field_cale_ev_pane_g2

0xc906,	// (0x00048799) field_cale_ev_pane_g3_ParamLimits

0xc906,	// (0x00048799) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0004b5f0) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0004b5f0) field_cale_ev_pane_g

0xc91e,	// (0x000487b1) field_cale_ev_pane_t1_ParamLimits

0xc91e,	// (0x000487b1) field_cale_ev_pane_t1

0xc935,	// (0x000487c8) field_cale_ev_content_pane_t1_ParamLimits

0xc935,	// (0x000487c8) field_cale_ev_content_pane_t1

0x5705,	// (0x00041598) bg_button_pane_cp01

0x10cb,	// (0x0003cf5e) listscroll_cale_week_pane_ParamLimits

0x3adf,	// (0x0003f972) popup_toolbar_window_cp01

0x120b,	// (0x0003d09e) listscroll_cale_week_pane_t1_ParamLimits

0x10cb,	// (0x0003cf5e) listscroll_cale_day_pane_ParamLimits

0x4d2d,	// (0x00040bc0) popup_toolbar_window_cp02

0x120b,	// (0x0003d09e) listscroll_cale_day_pane_t1_ParamLimits

0x10cb,	// (0x0003cf5e) main_cale_month_pane_ParamLimits

0x73a5,	// (0x00043238) popup_toolbar_window_cp03_ParamLimits

0x73a5,	// (0x00043238) popup_toolbar_window_cp03

0x5a7e,	// (0x00041911) main_image_pane_g2_ParamLimits

0x5a7e,	// (0x00041911) main_image_pane_g2

0x5a8f,	// (0x00041922) main_image_pane_g3_ParamLimits

0x5a8f,	// (0x00041922) main_image_pane_g3

0x0002,

0xf54e,	// (0x0004b3e1) main_image_pane_g_ParamLimits

0xf54e,	// (0x0004b3e1) main_image_pane_g

0x5aa0,	// (0x00041933) main_image_pane_t1_ParamLimits

0x5ab7,	// (0x0004194a) main_image_pane_t2_ParamLimits

0x5ab7,	// (0x0004194a) main_image_pane_t2

0x5ac9,	// (0x0004195c) main_image_pane_t3_ParamLimits

0x5ac9,	// (0x0004195c) main_image_pane_t3

0x5af1,	// (0x00041984) main_image_pane_t4_ParamLimits

0x5af1,	// (0x00041984) main_image_pane_t4

0x0003,

0xf555,	// (0x0004b3e8) main_image_pane_t_ParamLimits

0xf555,	// (0x0004b3e8) main_image_pane_t

0x5b11,	// (0x000419a4) popup_image_details_window_cp01

0x5b1b,	// (0x000419ae) popup_toobar_trans_pane_cp01_ParamLimits

0x5b1b,	// (0x000419ae) popup_toobar_trans_pane_cp01

0x7256,	// (0x000430e9) popup_image_details_window_ParamLimits

0x7256,	// (0x000430e9) popup_image_details_window

0xc33d,	// (0x000481d0) popup_image_focus_window

0x766c,	// (0x000434ff) camera2_autofocus_pane_ParamLimits

0x766c,	// (0x000434ff) camera2_autofocus_pane

0x08e8,	// (0x0003c77b) bg_popup_sub_pane_cp06

0xc952,	// (0x000487e5) popup_image_focus_window_g1

0xc95a,	// (0x000487ed) popup_image_focus_window_g2

0xc962,	// (0x000487f5) popup_image_focus_window_g3

0xc96a,	// (0x000487fd) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0004b5f7) popup_image_focus_window_g

0xc972,	// (0x00048805) popup_image_focus_window_t1

0xc980,	// (0x00048813) popup_image_focus_window_t2

0xc990,	// (0x00048823) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0004b600) popup_image_focus_window_t

0xc99e,	// (0x00048831) camera2_autofocus_pane_g1

0x1c72,	// (0x0003db05) bg_tb_trans_pane_cp01

0xc9ac,	// (0x0004883f) popup_image_details_window_g1

0xc9bf,	// (0x00048852) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0004b612) popup_image_details_window_g

0xc9e8,	// (0x0004887b) popup_image_details_window_t1

0xc9fa,	// (0x0004888d) popup_image_details_window_t2

0xca13,	// (0x000488a6) popup_image_details_window_t3

0xca27,	// (0x000488ba) popup_image_details_window_t4

0xca42,	// (0x000488d5) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0004b619) popup_image_details_window_t

0x10b7,	// (0x0003cf4a) bg_calc_paper_pane_ParamLimits

0x08e8,	// (0x0003c77b) grid_highlight_pane_cp013

0xbe38,	// (0x00047ccb) list_calc_pane_ParamLimits

0xbe4a,	// (0x00047cdd) scroll_pane_cp024

0x10cb,	// (0x0003cf5e) bg_calc_display_pane_ParamLimits

0x3932,	// (0x0003f7c5) calc_display_pane_t1_ParamLimits

0x3944,	// (0x0003f7d7) calc_display_pane_t2_ParamLimits

0xbe52,	// (0x00047ce5) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0004b049) calc_display_pane_t_ParamLimits

0x3a01,	// (0x0003f894) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0004b066) cell_calc_pane_g

0x3a0a,	// (0x0003f89d) cell_calc_pane_t1

0x112a,	// (0x0003cfbd) grid_highlight_pane_cp02_ParamLimits

0x1140,	// (0x0003cfd3) toolbar_button_pane_cp01_ParamLimits

0x1140,	// (0x0003cfd3) toolbar_button_pane_cp01

0x5b5d,	// (0x000419f0) temp_image_control_pane_ParamLimits

0x5b5d,	// (0x000419f0) temp_image_control_pane

0x1c72,	// (0x0003db05) main_mp3_pane

0xca5c,	// (0x000488ef) temp_image_control_pane_g1_ParamLimits

0xca5c,	// (0x000488ef) temp_image_control_pane_g1

0xca6a,	// (0x000488fd) temp_image_control_pane_g2_ParamLimits

0xca6a,	// (0x000488fd) temp_image_control_pane_g2

0xca7c,	// (0x0004890f) temp_image_control_pane_g3_ParamLimits

0xca7c,	// (0x0004890f) temp_image_control_pane_g3

0x7ec3,	// (0x00043d56) temp_image_control_pane_g4_ParamLimits

0x7ec3,	// (0x00043d56) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0004b624) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0004b624) temp_image_control_pane_g

0xca5c,	// (0x000488ef) main_mp3_pane_g1

0x7ed6,	// (0x00043d69) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0004b62d) main_mp3_pane_g

0xcabf,	// (0x00048952) main_mp3_pane_t1

0x128c,	// (0x0003d11f) main_camera_pane_g8_ParamLimits

0x128c,	// (0x0003d11f) main_camera_pane_g8

0x40b0,	// (0x0003ff43) main_video_pane_g7_ParamLimits

0x40b0,	// (0x0003ff43) main_video_pane_g7

0xc44a,	// (0x000482dd) main_camera2_pane_t7_ParamLimits

0xc44a,	// (0x000482dd) main_camera2_pane_t7

0x13da,	// (0x0003d26d) scroll_pane_cp025_ParamLimits

0x13da,	// (0x0003d26d) scroll_pane_cp025

0x13ee,	// (0x0003d281) scroll_pane_cp026_ParamLimits

0x13ee,	// (0x0003d281) scroll_pane_cp026

0x13fd,	// (0x0003d290) wml_content_pane_ParamLimits

0x08e8,	// (0x0003c77b) main_touch_calib_pane

0x7fa1,	// (0x00043e34) main_touch_calib_pane_g1

0x7fad,	// (0x00043e40) main_touch_calib_pane_g2

0x7fb9,	// (0x00043e4c) main_touch_calib_pane_g3

0x7fc5,	// (0x00043e58) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0004b64b) main_touch_calib_pane_g

0x7fd1,	// (0x00043e64) main_touch_calib_pane_t1

0x7feb,	// (0x00043e7e) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0004b654) main_touch_calib_pane_t

0x1a9c,	// (0x0003d92f) mup_progress_pane_cp02

0x1abb,	// (0x0003d94e) navi_pane_g1

0x1b1d,	// (0x0003d9b0) navi_pane_mp_t3

0x1c72,	// (0x0003db05) main_mp3_pane_ParamLimits

0x73e3,	// (0x00043276) navi_pane_ParamLimits

0xca5c,	// (0x000488ef) main_mp3_pane_g1_ParamLimits

0x7ed6,	// (0x00043d69) main_mp3_pane_g2_ParamLimits

0x7ee4,	// (0x00043d77) main_mp3_pane_g3_ParamLimits

0x7ee4,	// (0x00043d77) main_mp3_pane_g3

0x7ef2,	// (0x00043d85) main_mp3_pane_g4_ParamLimits

0x7ef2,	// (0x00043d85) main_mp3_pane_g4

0xca8c,	// (0x0004891f) main_mp3_pane_g5_ParamLimits

0xca8c,	// (0x0004891f) main_mp3_pane_g5

0xca9a,	// (0x0004892d) main_mp3_pane_g6_ParamLimits

0xca9a,	// (0x0004892d) main_mp3_pane_g6

0xcaa7,	// (0x0004893a) main_mp3_pane_g7_ParamLimits

0xcaa7,	// (0x0004893a) main_mp3_pane_g7

0xcab3,	// (0x00048946) main_mp3_pane_g8_ParamLimits

0xcab3,	// (0x00048946) main_mp3_pane_g8

0xf79a,	// (0x0004b62d) main_mp3_pane_g_ParamLimits

0x7f00,	// (0x00043d93) main_mp3_pane_t2

0x7f0e,	// (0x00043da1) main_mp3_pane_t3

0xcacd,	// (0x00048960) main_mp3_pane_t4

0xcadb,	// (0x0004896e) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0004b63e) main_mp3_pane_t

0xcae9,	// (0x0004897c) mup_progress_pane_cp01

0xbe28,	// (0x00047cbb) aid_zoom_text_secondary2

0xc8a8,	// (0x0004873b) list_cale_ev2_pane

0xc8b0,	// (0x00048743) scroll_pane_cp023_ParamLimits

0x8041,	// (0x00043ed4) field_cale_ev2_pane_ParamLimits

0x8041,	// (0x00043ed4) field_cale_ev2_pane

0xcaf1,	// (0x00048984) field_cale_ev2_pane_g1_ParamLimits

0xcaf1,	// (0x00048984) field_cale_ev2_pane_g1

0xcafd,	// (0x00048990) field_cale_ev2_pane_g2_ParamLimits

0xcafd,	// (0x00048990) field_cale_ev2_pane_g2

0xcb15,	// (0x000489a8) field_cale_ev2_pane_g3_ParamLimits

0xcb15,	// (0x000489a8) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0004b65f) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0004b65f) field_cale_ev2_pane_g

0x2c11,	// (0x0003eaa4) field_cale_ev2_pane_t1_ParamLimits

0x2c11,	// (0x0003eaa4) field_cale_ev2_pane_t1

0x2c28,	// (0x0003eabb) field_cale_ev2_pane_t2_ParamLimits

0x2c28,	// (0x0003eabb) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0004b668) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0004b668) field_cale_ev2_pane_t

0x5848,	// (0x000416db) main_postcard_pane_g5_ParamLimits

0x5848,	// (0x000416db) main_postcard_pane_g5

0x585e,	// (0x000416f1) main_postcard_pane_g6_ParamLimits

0x585e,	// (0x000416f1) main_postcard_pane_g6

0x3e60,	// (0x0003fcf3) camera2_autofocus_pane_cp_ParamLimits

0x3e60,	// (0x0003fcf3) camera2_autofocus_pane_cp

0x1c72,	// (0x0003db05) main_mup3_pane

0x8087,	// (0x00043f1a) main_mup3_pane_g1_ParamLimits

0x8087,	// (0x00043f1a) main_mup3_pane_g1

0x80a9,	// (0x00043f3c) main_mup3_pane_g2_ParamLimits

0x80a9,	// (0x00043f3c) main_mup3_pane_g2

0x812a,	// (0x00043fbd) main_mup3_pane_g3_ParamLimits

0x812a,	// (0x00043fbd) main_mup3_pane_g3

0x816c,	// (0x00043fff) main_mup3_pane_g4_ParamLimits

0x816c,	// (0x00043fff) main_mup3_pane_g4

0x81ae,	// (0x00044041) main_mup3_pane_g5_ParamLimits

0x81ae,	// (0x00044041) main_mup3_pane_g5

0x81f2,	// (0x00044085) main_mup3_pane_g6_ParamLimits

0x81f2,	// (0x00044085) main_mup3_pane_g6

0xcb39,	// (0x000489cc) main_mup3_pane_g7_ParamLimits

0xcb39,	// (0x000489cc) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0004b678) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0004b678) main_mup3_pane_g

0x826e,	// (0x00044101) main_mup3_pane_t1_ParamLimits

0x826e,	// (0x00044101) main_mup3_pane_t1

0x82e2,	// (0x00044175) main_mup3_pane_t2_ParamLimits

0x82e2,	// (0x00044175) main_mup3_pane_t2

0x83b6,	// (0x00044249) main_mup3_pane_t4_ParamLimits

0x83b6,	// (0x00044249) main_mup3_pane_t4

0x8410,	// (0x000442a3) main_mup3_pane_t5_ParamLimits

0x8410,	// (0x000442a3) main_mup3_pane_t5

0x84c4,	// (0x00044357) main_mup3_pane_t6_ParamLimits

0x84c4,	// (0x00044357) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0004b689) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0004b689) main_mup3_pane_t

0x8578,	// (0x0004440b) mup3_progress_pane_ParamLimits

0x8578,	// (0x0004440b) mup3_progress_pane

0x85f4,	// (0x00044487) popup_mup3_control_window_ParamLimits

0x85f4,	// (0x00044487) popup_mup3_control_window

0xcb47,	// (0x000489da) popup_mup3_text_window

0x8626,	// (0x000444b9) mup3_progress_pane_t1

0x863d,	// (0x000444d0) mup3_progress_pane_t2

0xcb4f,	// (0x000489e2) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0004b696) mup3_progress_pane_t

0xcb66,	// (0x000489f9) mup_progress_pane_cp03

0x08e8,	// (0x0003c77b) bg_tb_trans_pane_cp04

0x8654,	// (0x000444e7) mup3_volume_pane

0x865c,	// (0x000444ef) popup_mup3_control_window_g1

0x8665,	// (0x000444f8) mup3_volume_pane_g1

0x866e,	// (0x00044501) mup3_volume_pane_g2

0x8677,	// (0x0004450a) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0004b69d) mup3_volume_pane_g

0x08e8,	// (0x0003c77b) bg_tb_trans_pane_cp03

0xcb76,	// (0x00048a09) popup_mup3_text_window_g1

0xcb7e,	// (0x00048a11) popup_mup3_text_window_t1

0x1113,	// (0x0003cfa6) list_calc_item_pane_g1_ParamLimits

0xc532,	// (0x000483c5) mup_volume_pane_cp_g1

0x8005,	// (0x00043e98) main_touch_calib_pane_t3

0x8019,	// (0x00043eac) main_touch_calib_pane_t4

0x802d,	// (0x00043ec0) main_touch_calib_pane_t5

0x08f2,	// (0x0003c785) aid_cell_size_toolbar2

0x08fa,	// (0x0003c78d) aid_popup3_width_pane

0xbe20,	// (0x00047cb3) aid_zoom_text_msg_primary

0xbf2c,	// (0x00047dbf) vorec_t7

0x10d7,	// (0x0003cf6a) bg_calc_paper_pane_g1_ParamLimits

0x10e3,	// (0x0003cf76) bg_calc_paper_pane_g2_ParamLimits

0x10ef,	// (0x0003cf82) bg_calc_paper_pane_g3_ParamLimits

0x10fb,	// (0x0003cf8e) bg_calc_paper_pane_g4_ParamLimits

0x1107,	// (0x0003cf9a) bg_calc_paper_pane_g5_ParamLimits

0x398b,	// (0x0003f81e) bg_calc_paper_pane_g6_ParamLimits

0x399a,	// (0x0003f82d) bg_calc_paper_pane_g7_ParamLimits

0x39a9,	// (0x0003f83c) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0004b050) bg_calc_paper_pane_g_ParamLimits

0x39bc,	// (0x0003f84f) calc_bg_paper_pane_g9_ParamLimits

0x3fba,	// (0x0003fe4d) image_qvga_pane_ParamLimits

0x3fba,	// (0x0003fe4d) image_qvga_pane

0x0fbc,	// (0x0003ce4f) bg_popup_sub_pane_cp04_ParamLimits

0x59dc,	// (0x0004186f) popup_mup_playback_window_g1_ParamLimits

0x59e8,	// (0x0004187b) popup_mup_playback_window_t1_ParamLimits

0x59fd,	// (0x00041890) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0004b3dc) popup_mup_playback_window_t_ParamLimits

0x7b63,	// (0x000439f6) main_mup2_pane_g3_ParamLimits

0x7b63,	// (0x000439f6) main_mup2_pane_g3

0x4273,	// (0x00040106) popup_toolbar_window_cp04

0x61f6,	// (0x00042089) popup_call2_audio_second_window_g3_ParamLimits

0x61f6,	// (0x00042089) popup_call2_audio_second_window_g3

0x6600,	// (0x00042493) popup_call2_audio_first_window_g4_ParamLimits

0x6600,	// (0x00042493) popup_call2_audio_first_window_g4

0x6c7f,	// (0x00042b12) popup_call2_audio_in_window_g4_ParamLimits

0x6c7f,	// (0x00042b12) popup_call2_audio_in_window_g4

0x5a12,	// (0x000418a5) aid_area_sk_bg_cut_ParamLimits

0x5a12,	// (0x000418a5) aid_area_sk_bg_cut

0x5a30,	// (0x000418c3) aid_area_sk_bg_cut_2_ParamLimits

0x5a30,	// (0x000418c3) aid_area_sk_bg_cut_2

0x7e69,	// (0x00043cfc) aid_placing_details_win

0x7e71,	// (0x00043d04) aid_placing_details_win_2

0xc99e,	// (0x00048831) camera2_autofocus_pane_g1_ParamLimits

0x35d1,	// (0x0003f464) popup_fixed_preview_cale_window_ParamLimits

0x35d1,	// (0x0003f464) popup_fixed_preview_cale_window

0x1b6c,	// (0x0003d9ff) navi_slider_pane_g3

0x1b75,	// (0x0003da08) navi_slider_pane_g4

0x1b7e,	// (0x0003da11) navi_slider_pane_g5

0x1b6c,	// (0x0003d9ff) navi_slider_pane_g6

0xc127,	// (0x00047fba) navi_slider_pane_g7

0x5651,	// (0x000414e4) mup_scale_pane_g3

0x565a,	// (0x000414ed) mup_scale_pane_g4

0x5663,	// (0x000414f6) mup_scale_pane_g5

0x566c,	// (0x000414ff) mup_scale_pane_g6

0x5675,	// (0x00041508) mup_scale_pane_g7

0x1b6c,	// (0x0003d9ff) cams2_slider_pane_g3

0xc5e7,	// (0x0004847a) cams2_slider_pane_g4

0xc5ef,	// (0x00048482) cams2_slider_pane_g5

0x1b6c,	// (0x0003d9ff) cams2_slider_pane_g6

0xc5f7,	// (0x0004848a) cams2_slider_pane_g7

0xc825,	// (0x000486b8) camera2_autofocus_pane_cp_g1

0xcb8c,	// (0x00048a1f) bg_popup_preview_window_pane_cp02_ParamLimits

0xcb8c,	// (0x00048a1f) bg_popup_preview_window_pane_cp02

0xcb98,	// (0x00048a2b) list_fp_cale_pane_ParamLimits

0xcb98,	// (0x00048a2b) list_fp_cale_pane

0xcba4,	// (0x00048a37) popup_fixed_preview_cale_window_t1_ParamLimits

0xcba4,	// (0x00048a37) popup_fixed_preview_cale_window_t1

0x8680,	// (0x00044513) popup_fixed_preview_cale_window_t2_ParamLimits

0x8680,	// (0x00044513) popup_fixed_preview_cale_window_t2

0x8695,	// (0x00044528) popup_fixed_preview_cale_window_t3_ParamLimits

0x8695,	// (0x00044528) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0004b6a4) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0004b6a4) popup_fixed_preview_cale_window_t

0x86aa,	// (0x0004453d) list_single_fp_cale_pane_ParamLimits

0x86aa,	// (0x0004453d) list_single_fp_cale_pane

0xcbc2,	// (0x00048a55) list_single_fp_cale_pane_g1_ParamLimits

0xcbc2,	// (0x00048a55) list_single_fp_cale_pane_g1

0xcbce,	// (0x00048a61) list_single_fp_cale_pane_g2_ParamLimits

0xcbce,	// (0x00048a61) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0004b6ab) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0004b6ab) list_single_fp_cale_pane_g

0xcbe7,	// (0x00048a7a) list_single_fp_cale_pane_t1_ParamLimits

0xcbe7,	// (0x00048a7a) list_single_fp_cale_pane_t1

0xcbf9,	// (0x00048a8c) list_single_fp_cale_pane_t2_ParamLimits

0xcbf9,	// (0x00048a8c) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0004b6b2) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0004b6b2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x08e8,	// (0x0003c77b) main_dialer_pane

0x86c2,	// (0x00044555) aid_cell_size_keypad

0x86cc,	// (0x0004455f) dialer_ne_pane

0x86d4,	// (0x00044567) grid_dialer_command_1_pane

0x86dc,	// (0x0004456f) grid_dialer_command_2_pane

0x86e4,	// (0x00044577) grid_dialer_keypad_pane

0x86f6,	// (0x00044589) bg_popup_call_pane_cp06_ParamLimits

0x86f6,	// (0x00044589) bg_popup_call_pane_cp06

0x8702,	// (0x00044595) dialer_ne_clear_pane_ParamLimits

0x8702,	// (0x00044595) dialer_ne_clear_pane

0xcc2c,	// (0x00048abf) dialer_ne_pane_g1

0xcc34,	// (0x00048ac7) dialer_ne_pane_t1_ParamLimits

0xcc34,	// (0x00048ac7) dialer_ne_pane_t1

0x870e,	// (0x000445a1) dialer_ne_pane_t2_ParamLimits

0x870e,	// (0x000445a1) dialer_ne_pane_t2

0x8738,	// (0x000445cb) dialer_ne_pane_t3_ParamLimits

0x8738,	// (0x000445cb) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0004b6b7) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0004b6b7) dialer_ne_pane_t

0x8768,	// (0x000445fb) dialer_ne_pane_t3_copy1_ParamLimits

0x8768,	// (0x000445fb) dialer_ne_pane_t3_copy1

0x8797,	// (0x0004462a) cell_dialer_keypad_pane_ParamLimits

0x8797,	// (0x0004462a) cell_dialer_keypad_pane

0x87ae,	// (0x00044641) cell_dialer_command_1_pane_ParamLimits

0x87ae,	// (0x00044641) cell_dialer_command_1_pane

0x87c4,	// (0x00044657) cell_dialer_command_2_pane_ParamLimits

0x87c4,	// (0x00044657) cell_dialer_command_2_pane

0xcc46,	// (0x00048ad9) bg_button_pane_cp02_ParamLimits

0xcc46,	// (0x00048ad9) bg_button_pane_cp02

0x87d3,	// (0x00044666) cell_dialer_keypad_pane_g1_ParamLimits

0x87d3,	// (0x00044666) cell_dialer_keypad_pane_g1

0xcc46,	// (0x00048ad9) bg_button_pane_cp03_ParamLimits

0xcc46,	// (0x00048ad9) bg_button_pane_cp03

0x87e8,	// (0x0004467b) cell_dialer_command_1_pane_g1_ParamLimits

0x87e8,	// (0x0004467b) cell_dialer_command_1_pane_g1

0xcc52,	// (0x00048ae5) bg_button_pane_cp04

0x87fc,	// (0x0004468f) cell_dialer_command_2_pane_g1

0x1b5b,	// (0x0003d9ee) bg_button_pane_cp06

0xcc5a,	// (0x00048aed) dialer_ne_clear_pane_g1

0x5170,	// (0x00041003) navi_pane_g2

0x519e,	// (0x00041031) navi_pane_g3

0x0002,

0xf44c,	// (0x0004b2df) navi_pane_g

0x51c7,	// (0x0004105a) navi_pane_mv_g2

0x51ee,	// (0x00041081) navi_pane_mv_g5

0x51f6,	// (0x00041089) navi_pane_mv_t1

0x10cb,	// (0x0003cf5e) main_clock2_pane

0x882f,	// (0x000446c2) main_clock2_list_pane_ParamLimits

0x882f,	// (0x000446c2) main_clock2_list_pane

0x8865,	// (0x000446f8) main_clock2_pane_t1_ParamLimits

0x8865,	// (0x000446f8) main_clock2_pane_t1

0x88a3,	// (0x00044736) main_clock2_pane_t2_ParamLimits

0x88a3,	// (0x00044736) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0004b6be) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0004b6be) main_clock2_pane_t

0x892d,	// (0x000447c0) popup_clock_analogue_window_cp03_ParamLimits

0x892d,	// (0x000447c0) popup_clock_analogue_window_cp03

0x8954,	// (0x000447e7) popup_clock_digital_window_cp02_ParamLimits

0x8954,	// (0x000447e7) popup_clock_digital_window_cp02

0x89c9,	// (0x0004485c) main_clock2_list_single_pane_ParamLimits

0x89c9,	// (0x0004485c) main_clock2_list_single_pane

0x1b5b,	// (0x0003d9ee) list_highlight_pane_cp05

0xcc62,	// (0x00048af5) main_clock2_list_single_pane_t1

0x4273,	// (0x00040106) popup_toolbar_window_cp04_ParamLimits

0x7e93,	// (0x00043d26) camera2_autofocus_pane_g2_ParamLimits

0x7e93,	// (0x00043d26) camera2_autofocus_pane_g2

0x7e9f,	// (0x00043d32) camera2_autofocus_pane_g3_ParamLimits

0x7e9f,	// (0x00043d32) camera2_autofocus_pane_g3

0x7eab,	// (0x00043d3e) camera2_autofocus_pane_g4_ParamLimits

0x7eab,	// (0x00043d3e) camera2_autofocus_pane_g4

0x7eb7,	// (0x00043d4a) camera2_autofocus_pane_g5_ParamLimits

0x7eb7,	// (0x00043d4a) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0004b607) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0004b607) camera2_autofocus_pane_g

0x8067,	// (0x00043efa) camera2_autofocus_pane_cp_g2

0x806f,	// (0x00043f02) camera2_autofocus_pane_cp_g3

0x8077,	// (0x00043f0a) camera2_autofocus_pane_cp_g4

0x807f,	// (0x00043f12) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0004b66d) camera2_autofocus_pane_cp_g

0x86ee,	// (0x00044581) popup_dialer_spcha_window

0x08e8,	// (0x0003c77b) bg_popup_sub_pane_cp07

0xcc70,	// (0x00048b03) list_spcha_pane

0xcc78,	// (0x00048b0b) list_single_spcha_pane_ParamLimits

0xcc78,	// (0x00048b0b) list_single_spcha_pane

0x08e8,	// (0x0003c77b) list_highlight_pane_cp06

0xcc89,	// (0x00048b1c) list_single_spcha_pane_t1

0x6a29,	// (0x000428bc) popup_call2_audio_out_window_g4_ParamLimits

0x6a29,	// (0x000428bc) popup_call2_audio_out_window_g4

0x08e8,	// (0x0003c77b) main_imed2_pane

0xc345,	// (0x000481d8) popup_imed_adjust2_window

0x726e,	// (0x00043101) popup_imed_trans_window_ParamLimits

0x726e,	// (0x00043101) popup_imed_trans_window

0xc661,	// (0x000484f4) popup_blid_sat_info2_window_t1

0xc66f,	// (0x00048502) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0004b59c) popup_blid_sat_info2_window_t

0x8a73,	// (0x00044906) aid_size_cell_colour_35

0x8a93,	// (0x00044926) aid_size_cell_colour_112

0x8ab3,	// (0x00044946) aid_size_cell_effect

0xc31d,	// (0x000481b0) bg_tb_trans_pane_cp02

0x168b,	// (0x0003d51e) heading_imed_pane

0x8ad3,	// (0x00044966) listscroll_imed_pane

0xcc97,	// (0x00048b2a) heading_imed_pane_g1

0xcc9f,	// (0x00048b32) heading_imed_pane_t1

0xccad,	// (0x00048b40) grid_imed_colour_35_pane_ParamLimits

0xccad,	// (0x00048b40) grid_imed_colour_35_pane

0x8adf,	// (0x00044972) grid_imed_effect_pane

0xccc8,	// (0x00048b5b) list_imed_aspect_pane

0x8af4,	// (0x00044987) scroll_pane_cp027_ParamLimits

0x8af4,	// (0x00044987) scroll_pane_cp027

0x8b05,	// (0x00044998) cell_imed_effect_pane_ParamLimits

0x8b05,	// (0x00044998) cell_imed_effect_pane

0xccd0,	// (0x00048b63) cell_imed_colour_pane_ParamLimits

0xccd0,	// (0x00048b63) cell_imed_colour_pane

0xcd12,	// (0x00048ba5) cell_imed_colour_pane_g1_ParamLimits

0xcd12,	// (0x00048ba5) cell_imed_colour_pane_g1

0xcd23,	// (0x00048bb6) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd23,	// (0x00048bb6) hgihlgiht_grid_pane_cp016

0x8b2c,	// (0x000449bf) cell_imed_effect_pane_g1

0x8b34,	// (0x000449c7) grid_highlight_pane_cp017

0x3ac8,	// (0x0003f95b) list_imed_single_pane_ParamLimits

0x3ac8,	// (0x0003f95b) list_imed_single_pane

0x08e8,	// (0x0003c77b) list_highlight_pane_cp07

0xcd34,	// (0x00048bc7) list_imed_aspect_pane_comp1_t1

0xc31d,	// (0x000481b0) bg_tb_trans_pane_cp05

0xcd56,	// (0x00048be9) popup_imed_adjust2_window_g1

0xcd7d,	// (0x00048c10) popup_imed_adjust2_window_t1

0xcd95,	// (0x00048c28) slider_imed_adjust_pane

0xcda9,	// (0x00048c3c) slider_imed_adjust_pane_g1

0xcdb9,	// (0x00048c4c) slider_imed_adjust_pane_g2

0xcdc9,	// (0x00048c5c) slider_imed_adjust_pane_g3

0xcdda,	// (0x00048c6d) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0004b6db) slider_imed_adjust_pane_g

0x8b3d,	// (0x000449d0) aid_size_cell_clipart2

0x8b49,	// (0x000449dc) grid_imed_clipart_pane

0xcdeb,	// (0x00048c7e) scroll_pane_cp031

0x8b53,	// (0x000449e6) cell_imed_clipart_pane_ParamLimits

0x8b53,	// (0x000449e6) cell_imed_clipart_pane

0x8b7a,	// (0x00044a0d) cell_imed_clipart_pane_g1

0x08e8,	// (0x0003c77b) grid_highlight_pane_cp014

0x8844,	// (0x000446d7) main_clock2_pane_g1_ParamLimits

0x8844,	// (0x000446d7) main_clock2_pane_g1

0x8974,	// (0x00044807) aid_call2_pane_cp10

0x8986,	// (0x00044819) aid_call_pane_cp10

0x1a90,	// (0x0003d923) popup_clock_analogue_window_cp10_g1

0x1a90,	// (0x0003d923) popup_clock_analogue_window_cp10_g2

0x8998,	// (0x0004482b) popup_clock_analogue_window_cp10_g3

0x8998,	// (0x0004482b) popup_clock_analogue_window_cp10_g4

0x1a90,	// (0x0003d923) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0004b6c9) popup_clock_analogue_window_cp10_g

0x89aa,	// (0x0004483d) popup_clock_analogue_window_cp10_t1

0x89db,	// (0x0004486e) clock_digital_number_pane_cp10_ParamLimits

0x89db,	// (0x0004486e) clock_digital_number_pane_cp10

0x89f3,	// (0x00044886) clock_digital_number_pane_cp11_ParamLimits

0x89f3,	// (0x00044886) clock_digital_number_pane_cp11

0x8a0b,	// (0x0004489e) clock_digital_number_pane_cp12_ParamLimits

0x8a0b,	// (0x0004489e) clock_digital_number_pane_cp12

0x8a23,	// (0x000448b6) clock_digital_number_pane_cp13_ParamLimits

0x8a23,	// (0x000448b6) clock_digital_number_pane_cp13

0x8a3b,	// (0x000448ce) clock_digital_separator_pane_cp10_ParamLimits

0x8a3b,	// (0x000448ce) clock_digital_separator_pane_cp10

0x8a53,	// (0x000448e6) popup_clock_digital_window_cp02_t1_ParamLimits

0x8a53,	// (0x000448e6) popup_clock_digital_window_cp02_t1

0x0fb4,	// (0x0003ce47) clock_digital_number_pane_cp10_g1

0x0fb4,	// (0x0003ce47) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0004b6e4) clock_digital_number_pane_cp10_g

0x0fb4,	// (0x0003ce47) clock_digital_separator_pane_cp10_g1

0x0fb4,	// (0x0003ce47) clock_digital_separator_pane_g2_cp10

0x1b2b,	// (0x0003d9be) navi_pane_vded_g4

0x1b34,	// (0x0003d9c7) navi_pane_vded_g5

0x1b3d,	// (0x0003d9d0) navi_pane_vded_t1

0x08e8,	// (0x0003c77b) main_vded_pane

0x8b83,	// (0x00044a16) main_vded_pane_g1

0x8b8f,	// (0x00044a22) main_vded_pane_g2

0x8b99,	// (0x00044a2c) main_vded_pane_g3

0x0002,

0xf856,	// (0x0004b6e9) main_vded_pane_g

0x8ba3,	// (0x00044a36) main_vded_pane_t1

0x8bb1,	// (0x00044a44) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0004b6f0) main_vded_pane_t

0x8bbf,	// (0x00044a52) vded_slider_pane

0x8bc9,	// (0x00044a5c) vded_video_pane

0xcdf3,	// (0x00048c86) vded_video_pane_g1

0x8bd3,	// (0x00044a66) vded_video_pane_g2

0xc825,	// (0x000486b8) vded_video_pane_g3

0x0002,

0xf862,	// (0x0004b6f5) vded_video_pane_g

0xcdfd,	// (0x00048c90) vded_slider_pane_g1

0xc532,	// (0x000483c5) vded_slider_pane_g2

0xce06,	// (0x00048c99) vded_slider_pane_g3

0xce0f,	// (0x00048ca2) vded_slider_pane_g4

0xce18,	// (0x00048cab) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0004b6fc) vded_slider_pane_g

0x85dc,	// (0x0004446f) mup3_rocker_pane_ParamLimits

0x85dc,	// (0x0004446f) mup3_rocker_pane

0x8bdc,	// (0x00044a6f) mup3_control_keys_pane_g1

0x8be4,	// (0x00044a77) mup3_control_keys_pane_g2

0x8bec,	// (0x00044a7f) mup3_control_keys_pane_g3

0x8bf4,	// (0x00044a87) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0004b707) mup3_control_keys_pane_g

0x3608,	// (0x0003f49b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3608,	// (0x0003f49b) popup_toolbar2_fixed_window_cp01

0x8610,	// (0x000444a3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8610,	// (0x000444a3) popup_toolbar2_fixed_window_cp02

0x6368,	// (0x000421fb) popup_call2_audio_second_window_t4_ParamLimits

0x6368,	// (0x000421fb) popup_call2_audio_second_window_t4

0x6896,	// (0x00042729) popup_call2_audio_first_window_t6_ParamLimits

0x6896,	// (0x00042729) popup_call2_audio_first_window_t6

0x6b2c,	// (0x000429bf) popup_call2_audio_out_window_t6_ParamLimits

0x6b2c,	// (0x000429bf) popup_call2_audio_out_window_t6

0x08e8,	// (0x0003c77b) main_vitu_pane

0x8c04,	// (0x00044a97) aid_size_cell_itu_ParamLimits

0x8c04,	// (0x00044a97) aid_size_cell_itu

0x1c72,	// (0x0003db05) bg_popup_window_pane_cp08_ParamLimits

0x1c72,	// (0x0003db05) bg_popup_window_pane_cp08

0x8c1a,	// (0x00044aad) field_vitu_entry_pane_ParamLimits

0x8c1a,	// (0x00044aad) field_vitu_entry_pane

0x8c31,	// (0x00044ac4) grid_vitu_function_pane_ParamLimits

0x8c31,	// (0x00044ac4) grid_vitu_function_pane

0x8c4c,	// (0x00044adf) grid_vitu_itu_pane_ParamLimits

0x8c4c,	// (0x00044adf) grid_vitu_itu_pane

0x8c6a,	// (0x00044afd) cell_vitu_itu_pane_ParamLimits

0x8c6a,	// (0x00044afd) cell_vitu_itu_pane

0x8c8e,	// (0x00044b21) cell_vitu_function_pane_ParamLimits

0x8c8e,	// (0x00044b21) cell_vitu_function_pane

0x1c72,	// (0x0003db05) bg_popup_sub_pane_cp08_ParamLimits

0x1c72,	// (0x0003db05) bg_popup_sub_pane_cp08

0x8ca9,	// (0x00044b3c) field_vitu_entry_pane_t1_ParamLimits

0x8ca9,	// (0x00044b3c) field_vitu_entry_pane_t1

0xce39,	// (0x00048ccc) field_vitu_entry_pane_t2_ParamLimits

0xce39,	// (0x00048ccc) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0004b715) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0004b715) field_vitu_entry_pane_t

0xce56,	// (0x00048ce9) bg_button_pane_cp05_ParamLimits

0xce56,	// (0x00048ce9) bg_button_pane_cp05

0x8cc9,	// (0x00044b5c) cell_vitu_itu_pane_g1

0x8ce1,	// (0x00044b74) cell_vitu_itu_pane_t1_ParamLimits

0x8ce1,	// (0x00044b74) cell_vitu_itu_pane_t1

0x8cf3,	// (0x00044b86) cell_vitu_itu_pane_t2_ParamLimits

0x8cf3,	// (0x00044b86) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0004b71a) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0004b71a) cell_vitu_itu_pane_t

0xce64,	// (0x00048cf7) bg_button_pane_cp07

0x8d28,	// (0x00044bbb) cell_vitu_function_pane_g1

0xbe30,	// (0x00047cc3) main_calc_pane_g1

0x343e,	// (0x0003f2d1) aid_visual_content_pane

0x08e8,	// (0x0003c77b) main_vradio_pane

0x8d31,	// (0x00044bc4) main_vradio_pane_g1_ParamLimits

0x8d31,	// (0x00044bc4) main_vradio_pane_g1

0xce6e,	// (0x00048d01) main_vradio_pane_g2_ParamLimits

0xce6e,	// (0x00048d01) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0004b721) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0004b721) main_vradio_pane_g

0x8d4a,	// (0x00044bdd) main_vradio_pane_t1_ParamLimits

0x8d4a,	// (0x00044bdd) main_vradio_pane_t1

0x8d5f,	// (0x00044bf2) main_vradio_pane_t2_ParamLimits

0x8d5f,	// (0x00044bf2) main_vradio_pane_t2

0xce7b,	// (0x00048d0e) main_vradio_pane_t3_ParamLimits

0xce7b,	// (0x00048d0e) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0004b726) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0004b726) main_vradio_pane_t

0x8d74,	// (0x00044c07) vradio_rocker_control_pane_ParamLimits

0x8d74,	// (0x00044c07) vradio_rocker_control_pane

0x8d86,	// (0x00044c19) vradio_station_info_pane_ParamLimits

0x8d86,	// (0x00044c19) vradio_station_info_pane

0xce8f,	// (0x00048d22) vradio_frequency_info_pane_ParamLimits

0xce8f,	// (0x00048d22) vradio_frequency_info_pane

0xc825,	// (0x000486b8) vradio_station_info_pane_g1

0xce9e,	// (0x00048d31) vradio_station_info_pane_t1_ParamLimits

0xce9e,	// (0x00048d31) vradio_station_info_pane_t1

0xcec0,	// (0x00048d53) vradio_station_info_pane_t2_ParamLimits

0xcec0,	// (0x00048d53) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0004b72d) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0004b72d) vradio_station_info_pane_t

0xced2,	// (0x00048d65) vradio_tuning_pane

0xceda,	// (0x00048d6d) vradio_rocker_control_pane_g1

0xcee2,	// (0x00048d75) vradio_rocker_control_pane_g2

0xceea,	// (0x00048d7d) vradio_rocker_control_pane_g3

0xcef2,	// (0x00048d85) vradio_rocker_control_pane_g4

0xcefa,	// (0x00048d8d) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0004b732) vradio_rocker_control_pane_g

0x8d98,	// (0x00044c2b) vradio_frequency_info_pane_g1

0xcf02,	// (0x00048d95) vradio_frequency_info_pane_t1_ParamLimits

0xcf02,	// (0x00048d95) vradio_frequency_info_pane_t1

0x8da2,	// (0x00044c35) vradio_tuning_pane_g1

0x8dad,	// (0x00044c40) vradio_tuning_pane_t1

0x090e,	// (0x0003c7a1) area_side_right_pane_ParamLimits

0x090e,	// (0x0003c7a1) area_side_right_pane

0xc2e4,	// (0x00048177) status_small_pane_g1

0xc2ec,	// (0x0004817f) status_small_pane_g2

0xc2f5,	// (0x00048188) status_small_pane_g3

0xc2fe,	// (0x00048191) status_small_pane_g4

0x0003,

0xf65f,	// (0x0004b4f2) status_small_pane_g

0xc307,	// (0x0004819a) status_small_pane_t1

0x08e8,	// (0x0003c77b) main_video3_pane

0xcf16,	// (0x00048da9) cams_zoom_vslider_pane

0xcf1e,	// (0x00048db1) image3_wide_pane_ParamLimits

0xcf1e,	// (0x00048db1) image3_wide_pane

0xcf38,	// (0x00048dcb) image3_wide_small_pane

0xcf44,	// (0x00048dd7) main_video3_pane_g1_ParamLimits

0xcf44,	// (0x00048dd7) main_video3_pane_g1

0xcf60,	// (0x00048df3) main_video3_pane_g2_ParamLimits

0xcf60,	// (0x00048df3) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0004b73d) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0004b73d) main_video3_pane_g

0xcf7c,	// (0x00048e0f) main_video3_pane_t1_ParamLimits

0xcf7c,	// (0x00048e0f) main_video3_pane_t1

0xcfa7,	// (0x00048e3a) main_video3_pane_t2_ParamLimits

0xcfa7,	// (0x00048e3a) main_video3_pane_t2

0xcfd2,	// (0x00048e65) main_video3_pane_t3_ParamLimits

0xcfd2,	// (0x00048e65) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0004b742) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0004b742) main_video3_pane_t

0xcfff,	// (0x00048e92) cams_zoom_vslider_pane_g1

0xd008,	// (0x00048e9b) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0004b749) cams_zoom_vslider_pane_g

0xd010,	// (0x00048ea3) small_slider_vertical_pane

0xc825,	// (0x000486b8) small_slider_vertical_pane_g1

0xc825,	// (0x000486b8) small_slider_vertical_pane_g2

0xd018,	// (0x00048eab) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0004b74e) small_slider_vertical_pane_g

0x08e8,	// (0x0003c77b) main_hwr_training_pane

0xd021,	// (0x00048eb4) hwr_training_instruct_pane_ParamLimits

0xd021,	// (0x00048eb4) hwr_training_instruct_pane

0x8dbc,	// (0x00044c4f) hwr_training_navi_pane_ParamLimits

0x8dbc,	// (0x00044c4f) hwr_training_navi_pane

0x8ddb,	// (0x00044c6e) hwr_training_write_pane_ParamLimits

0x8ddb,	// (0x00044c6e) hwr_training_write_pane

0x08e8,	// (0x0003c77b) bg_frame_shadow_pane

0xd058,	// (0x00048eeb) hwr_training_write_pane_g1

0xd060,	// (0x00048ef3) hwr_training_write_pane_g2

0xd068,	// (0x00048efb) hwr_training_write_pane_g3

0xd070,	// (0x00048f03) hwr_training_write_pane_g4

0xd078,	// (0x00048f0b) hwr_training_write_pane_g5

0xd080,	// (0x00048f13) hwr_training_write_pane_g6

0xd088,	// (0x00048f1b) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0004b755) hwr_training_write_pane_g

0xeda6,	// (0x0004ac39) hwr_training_navi_pane_g1_ParamLimits

0xeda6,	// (0x0004ac39) hwr_training_navi_pane_g1

0xedb8,	// (0x0004ac4b) hwr_training_navi_pane_g2_ParamLimits

0xedb8,	// (0x0004ac4b) hwr_training_navi_pane_g2

0xedca,	// (0x0004ac5d) hwr_training_navi_pane_g3_ParamLimits

0xedca,	// (0x0004ac5d) hwr_training_navi_pane_g3

0xedda,	// (0x0004ac6d) hwr_training_navi_pane_g4_ParamLimits

0xedda,	// (0x0004ac6d) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0004b764) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0004b764) hwr_training_navi_pane_g

0xede7,	// (0x0004ac7a) hwr_training_navi_pane_t1

0x8e25,	// (0x00044cb8) list_single_hwr_training_instruct_pane_ParamLimits

0x8e25,	// (0x00044cb8) list_single_hwr_training_instruct_pane

0xd090,	// (0x00048f23) list_single_hwr_training_instruct_pane_t1

0xc765,	// (0x000485f8) bg_frame_shadow_pane_g1

0xd09f,	// (0x00048f32) bg_frame_shadow_pane_g2

0xd0a7,	// (0x00048f3a) bg_frame_shadow_pane_g3

0xd0af,	// (0x00048f42) bg_frame_shadow_pane_g4

0xd0b7,	// (0x00048f4a) bg_frame_shadow_pane_g5

0xd0bf,	// (0x00048f52) bg_frame_shadow_pane_g6

0xd0c7,	// (0x00048f5a) bg_frame_shadow_pane_g7

0x1196,	// (0x0003d029) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0004b76f) bg_frame_shadow_pane_g

0x08e8,	// (0x0003c77b) main_video_tele_dialer_pane

0x8e42,	// (0x00044cd5) aid_size_cell_video_keypad_ParamLimits

0x8e42,	// (0x00044cd5) aid_size_cell_video_keypad

0x8e5c,	// (0x00044cef) grid_video_dialer_keypad_pane_ParamLimits

0x8e5c,	// (0x00044cef) grid_video_dialer_keypad_pane

0x8ea8,	// (0x00044d3b) video_down_pane_cp_ParamLimits

0x8ea8,	// (0x00044d3b) video_down_pane_cp

0x8edc,	// (0x00044d6f) cell_video_dialer_keypad_pane_ParamLimits

0x8edc,	// (0x00044d6f) cell_video_dialer_keypad_pane

0xd0cf,	// (0x00048f62) bg_button_pane_cp08_ParamLimits

0xd0cf,	// (0x00048f62) bg_button_pane_cp08

0x8efe,	// (0x00044d91) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8efe,	// (0x00044d91) cell_video_dialer_keypad_pane_g1

0x85c6,	// (0x00044459) mup3_rocker2_pane_ParamLimits

0x85c6,	// (0x00044459) mup3_rocker2_pane

0xc825,	// (0x000486b8) mup3_rocker2_pane_g1

0x7157,	// (0x00042fea) main_dialer2_pane

0x08e8,	// (0x0003c77b) main_mp4_pane

0xedfd,	// (0x0004ac90) main_mp4_pane_g1_ParamLimits

0xedfd,	// (0x0004ac90) main_mp4_pane_g1

0xedfd,	// (0x0004ac90) main_mp4_pane_g2_ParamLimits

0xedfd,	// (0x0004ac90) main_mp4_pane_g2

0x8f39,	// (0x00044dcc) main_mp4_pane_g3_ParamLimits

0x8f39,	// (0x00044dcc) main_mp4_pane_g3

0xee0b,	// (0x0004ac9e) main_mp4_pane_g4_ParamLimits

0xee0b,	// (0x0004ac9e) main_mp4_pane_g4

0xee25,	// (0x0004acb8) main_mp4_pane_g5_ParamLimits

0xee25,	// (0x0004acb8) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0004b78f) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0004b78f) main_mp4_pane_g

0xee59,	// (0x0004acec) main_mp4_pane_t1_ParamLimits

0xee59,	// (0x0004acec) main_mp4_pane_t1

0xeeb5,	// (0x0004ad48) main_mp4_pane_t2_ParamLimits

0xeeb5,	// (0x0004ad48) main_mp4_pane_t2

0xd0db,	// (0x00048f6e) main_mp4_pane_t3_ParamLimits

0xd0db,	// (0x00048f6e) main_mp4_pane_t3

0xef07,	// (0x0004ad9a) main_mp4_pane_t4_ParamLimits

0xef07,	// (0x0004ad9a) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0004b79c) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0004b79c) main_mp4_pane_t

0xef4b,	// (0x0004adde) mp4_progress_pane_ParamLimits

0xef4b,	// (0x0004adde) mp4_progress_pane

0xef95,	// (0x0004ae28) mp4_rocker_pane_ParamLimits

0xef95,	// (0x0004ae28) mp4_rocker_pane

0xd103,	// (0x00048f96) mp4_progress_pane_t1

0xd11c,	// (0x00048faf) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0004b7a5) mp4_progress_pane_t

0xd135,	// (0x00048fc8) mup_progress_pane_cp04

0xc825,	// (0x000486b8) mp4_rocker_pane_g1

0x8f75,	// (0x00044e08) aid_cell_size_keypad2_ParamLimits

0x8f75,	// (0x00044e08) aid_cell_size_keypad2

0x8f8b,	// (0x00044e1e) dialer2_ne_pane_ParamLimits

0x8f8b,	// (0x00044e1e) dialer2_ne_pane

0x8fa5,	// (0x00044e38) grid_dialer2_keypad_pane_ParamLimits

0x8fa5,	// (0x00044e38) grid_dialer2_keypad_pane

0xc608,	// (0x0004849b) bg_popup_call_pane_cp07_ParamLimits

0xc608,	// (0x0004849b) bg_popup_call_pane_cp07

0x8fc3,	// (0x00044e56) dialer2_ne_pane_t1_ParamLimits

0x8fc3,	// (0x00044e56) dialer2_ne_pane_t1

0x9002,	// (0x00044e95) cell_dialer2_keypad_pane_ParamLimits

0x9002,	// (0x00044e95) cell_dialer2_keypad_pane

0xd153,	// (0x00048fe6) bg_button_pane_pane_cp04_ParamLimits

0xd153,	// (0x00048fe6) bg_button_pane_pane_cp04

0x9026,	// (0x00044eb9) cell_dialer2_keypad_pane_g1_ParamLimits

0x9026,	// (0x00044eb9) cell_dialer2_keypad_pane_g1

0x4193,	// (0x00040026) aid_placing_vt_set_content_ParamLimits

0x4193,	// (0x00040026) aid_placing_vt_set_content

0x41b9,	// (0x0004004c) aid_placing_vt_set_title_ParamLimits

0x41b9,	// (0x0004004c) aid_placing_vt_set_title

0x08e8,	// (0x0003c77b) main_image3_pane

0x90ec,	// (0x00044f7f) area_side_right_pane_cp01_ParamLimits

0x90ec,	// (0x00044f7f) area_side_right_pane_cp01

0xedfd,	// (0x0004ac90) main_image3_pane_g1_ParamLimits

0xedfd,	// (0x0004ac90) main_image3_pane_g1

0x9103,	// (0x00044f96) main_image3_pane_g2_ParamLimits

0x9103,	// (0x00044f96) main_image3_pane_g2

0x912b,	// (0x00044fbe) main_image3_pane_g3_ParamLimits

0x912b,	// (0x00044fbe) main_image3_pane_g3

0x9155,	// (0x00044fe8) main_image3_pane_g4_ParamLimits

0x9155,	// (0x00044fe8) main_image3_pane_g4

0x0003,

0xf921,	// (0x0004b7b4) main_image3_pane_g_ParamLimits

0xf921,	// (0x0004b7b4) main_image3_pane_g

0x917f,	// (0x00045012) main_image3_pane_t1_ParamLimits

0x917f,	// (0x00045012) main_image3_pane_t1

0x91d7,	// (0x0004506a) main_image3_pane_t2_ParamLimits

0x91d7,	// (0x0004506a) main_image3_pane_t2

0x9229,	// (0x000450bc) main_image3_pane_t3_ParamLimits

0x9229,	// (0x000450bc) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0004b7bd) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0004b7bd) main_image3_pane_t

0x1c72,	// (0x0003db05) grid_sctrl_middle_pane_cp01_ParamLimits

0x1c72,	// (0x0003db05) grid_sctrl_middle_pane_cp01

0x92b1,	// (0x00045144) cell_sctrl_middle_pane_cp01_ParamLimits

0x92b1,	// (0x00045144) cell_sctrl_middle_pane_cp01

0x92ce,	// (0x00045161) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x92ce,	// (0x00045161) cell_sctrl_middle_pane_cp01_g1

0x08e8,	// (0x0003c77b) main_call4_pane

0x92e4,	// (0x00045177) aid_size_button_call4_ParamLimits

0x92e4,	// (0x00045177) aid_size_button_call4

0x9315,	// (0x000451a8) call4_windows_pane_ParamLimits

0x9315,	// (0x000451a8) call4_windows_pane

0x9335,	// (0x000451c8) grid_call4_button_pane_ParamLimits

0x9335,	// (0x000451c8) grid_call4_button_pane

0xd15f,	// (0x00048ff2) call4_windows_conf_pane

0xd174,	// (0x00049007) popup_call4_audio_first_window_ParamLimits

0xd174,	// (0x00049007) popup_call4_audio_first_window

0xd1c0,	// (0x00049053) popup_call4_audio_second_window_ParamLimits

0xd1c0,	// (0x00049053) popup_call4_audio_second_window

0xd1d4,	// (0x00049067) popup_call4_audio_wait_window_ParamLimits

0xd1d4,	// (0x00049067) popup_call4_audio_wait_window

0x9362,	// (0x000451f5) cell_call4_button_pane_ParamLimits

0x9362,	// (0x000451f5) cell_call4_button_pane

0x938b,	// (0x0004521e) bg_button_pane_cp09_ParamLimits

0x938b,	// (0x0004521e) bg_button_pane_cp09

0x9397,	// (0x0004522a) cell_call4_button_pane_g1_ParamLimits

0x9397,	// (0x0004522a) cell_call4_button_pane_g1

0x93bd,	// (0x00045250) cell_call4_button_pane_t1_ParamLimits

0x93bd,	// (0x00045250) cell_call4_button_pane_t1

0xd21c,	// (0x000490af) popup_call4_audio_conf_window_ParamLimits

0xd21c,	// (0x000490af) popup_call4_audio_conf_window

0x8626,	// (0x000444b9) mup3_progress_pane_t1_ParamLimits

0x863d,	// (0x000444d0) mup3_progress_pane_t2_ParamLimits

0xcb4f,	// (0x000489e2) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0004b696) mup3_progress_pane_t_ParamLimits

0xcb66,	// (0x000489f9) mup_progress_pane_cp03_ParamLimits

0x8bfc,	// (0x00044a8f) mup3_control_keys_pane_g4_copy1

0xef79,	// (0x0004ae0c) mp4_rocker2_pane_ParamLimits

0xef79,	// (0x0004ae0c) mp4_rocker2_pane

0xd230,	// (0x000490c3) mp4_rocker2_pane_g1

0xd238,	// (0x000490cb) mp4_rocker2_pane_g2

0xefe7,	// (0x0004ae7a) mp4_rocker2_pane_g3

0xefef,	// (0x0004ae82) mp4_rocker2_pane_g4

0xeff7,	// (0x0004ae8a) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0004b7c6) mp4_rocker2_pane_g

0x08e8,	// (0x0003c77b) main_camera4_pane

0x08e8,	// (0x0003c77b) main_video4_pane

0x8e78,	// (0x00044d0b) main_video_tele_dialer_pane_t1_ParamLimits

0x8e78,	// (0x00044d0b) main_video_tele_dialer_pane_t1

0x8e90,	// (0x00044d23) main_video_tele_dialer_pane_t2_ParamLimits

0x8e90,	// (0x00044d23) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0004b780) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0004b780) main_video_tele_dialer_pane_t

0x93ff,	// (0x00045292) cam4_autofocus_pane_ParamLimits

0x93ff,	// (0x00045292) cam4_autofocus_pane

0x9415,	// (0x000452a8) cam4_image_uncrop_pane_ParamLimits

0x9415,	// (0x000452a8) cam4_image_uncrop_pane

0x942f,	// (0x000452c2) cam4_indicators_pane_ParamLimits

0x942f,	// (0x000452c2) cam4_indicators_pane

0x945a,	// (0x000452ed) main_camera4_pane_g1_ParamLimits

0x945a,	// (0x000452ed) main_camera4_pane_g1

0x9466,	// (0x000452f9) main_camera4_pane_g2_ParamLimits

0x9466,	// (0x000452f9) main_camera4_pane_g2

0x9472,	// (0x00045305) main_camera4_pane_g3_ParamLimits

0x9472,	// (0x00045305) main_camera4_pane_g3

0x947e,	// (0x00045311) main_camera4_pane_g4_ParamLimits

0x947e,	// (0x00045311) main_camera4_pane_g4

0x948a,	// (0x0004531d) main_camera4_pane_g5_ParamLimits

0x948a,	// (0x0004531d) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0004b7d1) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0004b7d1) main_camera4_pane_g

0x94a7,	// (0x0004533a) main_camera4_pane_t1_ParamLimits

0x94a7,	// (0x0004533a) main_camera4_pane_t1

0xcb39,	// (0x000489cc) bg_tb_trans_pane_cp06

0x94df,	// (0x00045372) cam4_indicators_pane_g1

0x94ec,	// (0x0004537f) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0004b7e3) cam4_indicators_pane_g

0x9504,	// (0x00045397) cam4_indicators_pane_t1

0x952e,	// (0x000453c1) main_video4_pane_g1_ParamLimits

0x952e,	// (0x000453c1) main_video4_pane_g1

0x9540,	// (0x000453d3) main_video4_pane_g2_ParamLimits

0x9540,	// (0x000453d3) main_video4_pane_g2

0x9554,	// (0x000453e7) main_video4_pane_g3_ParamLimits

0x9554,	// (0x000453e7) main_video4_pane_g3

0x9564,	// (0x000453f7) main_video4_pane_g4_ParamLimits

0x9564,	// (0x000453f7) main_video4_pane_g4

0x0004,

0xf957,	// (0x0004b7ea) main_video4_pane_g_ParamLimits

0xf957,	// (0x0004b7ea) main_video4_pane_g

0x9584,	// (0x00045417) vid4_indicators_pane_ParamLimits

0x9584,	// (0x00045417) vid4_indicators_pane

0x95b6,	// (0x00045449) video4_image_uncrop_cif_pane_ParamLimits

0x95b6,	// (0x00045449) video4_image_uncrop_cif_pane

0x95d0,	// (0x00045463) video4_image_uncrop_nhd_pane_ParamLimits

0x95d0,	// (0x00045463) video4_image_uncrop_nhd_pane

0x9415,	// (0x000452a8) video4_image_uncrop_vga_pane_ParamLimits

0x9415,	// (0x000452a8) video4_image_uncrop_vga_pane

0xd240,	// (0x000490d3) bg_tb_trans_pane_cp07

0x94df,	// (0x00045372) vid4_indicators_pane_g1

0x95e4,	// (0x00045477) vid4_indicators_pane_g2

0x95f1,	// (0x00045484) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0004b7f5) vid4_indicators_pane_g

0x960a,	// (0x0004549d) vid4_indicators_pane_t1

0x961c,	// (0x000454af) cam4_autofocus_pane_g1

0x9624,	// (0x000454b7) cam4_autofocus_pane_g2

0x962c,	// (0x000454bf) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0004b800) cam4_autofocus_pane_g

0x9634,	// (0x000454c7) cam4_autofocus_pane_g3_copy1

0x8ec0,	// (0x00044d53) video_down_pane_cp_t1

0x8ece,	// (0x00044d61) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0004b785) video_down_pane_cp_t

0x1c72,	// (0x0003db05) popup_vitu2_window_ParamLimits

0x1c72,	// (0x0003db05) popup_vitu2_window

0x963c,	// (0x000454cf) aid_size_cell2_itu2_ParamLimits

0x963c,	// (0x000454cf) aid_size_cell2_itu2

0x9662,	// (0x000454f5) aid_size_cell_itu2_ParamLimits

0x9662,	// (0x000454f5) aid_size_cell_itu2

0x96be,	// (0x00045551) bg_popup_window_pane_cp09_ParamLimits

0x96be,	// (0x00045551) bg_popup_window_pane_cp09

0x96cc,	// (0x0004555f) field_vitu2_entry_pane_ParamLimits

0x96cc,	// (0x0004555f) field_vitu2_entry_pane

0x96f2,	// (0x00045585) grid_vitu2_function_pane_ParamLimits

0x96f2,	// (0x00045585) grid_vitu2_function_pane

0x9743,	// (0x000455d6) grid_vitu2_itu_pane_ParamLimits

0x9743,	// (0x000455d6) grid_vitu2_itu_pane

0x97d4,	// (0x00045667) cell_vitu2_itu_pane_ParamLimits

0x97d4,	// (0x00045667) cell_vitu2_itu_pane

0x97f8,	// (0x0004568b) cell_vitu2_function_pane_ParamLimits

0x97f8,	// (0x0004568b) cell_vitu2_function_pane

0xd24e,	// (0x000490e1) bg_popup_call_pane_cp08_ParamLimits

0xd24e,	// (0x000490e1) bg_popup_call_pane_cp08

0xd267,	// (0x000490fa) field_vitu2_entry_pane_g1

0xd273,	// (0x00049106) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0004b807) field_vitu2_entry_pane_g

0x2c3d,	// (0x0003ead0) field_vitu2_entry_pane_t1_ParamLimits

0x2c3d,	// (0x0003ead0) field_vitu2_entry_pane_t1

0xd28d,	// (0x00049120) field_vitu2_entry_pane_t2_ParamLimits

0xd28d,	// (0x00049120) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0004b80e) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0004b80e) field_vitu2_entry_pane_t

0x9837,	// (0x000456ca) bg_button_pane_cp010_ParamLimits

0x9837,	// (0x000456ca) bg_button_pane_cp010

0x9845,	// (0x000456d8) cell_vitu2_itu_pane_g1

0x9863,	// (0x000456f6) cell_vitu2_itu_pane_t1_ParamLimits

0x9863,	// (0x000456f6) cell_vitu2_itu_pane_t1

0x2c5c,	// (0x0003eaef) cell_vitu2_itu_pane_t2_ParamLimits

0x2c5c,	// (0x0003eaef) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0004b818) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0004b818) cell_vitu2_itu_pane_t

0x1c72,	// (0x0003db05) bg_button_pane_cp011

0x98c9,	// (0x0004575c) cell_vitu2_function_pane_g1

0x08e8,	// (0x0003c77b) main_myfav_hc_pane

0x9279,	// (0x0004510c) popup_image3_note_pane_ParamLimits

0x9279,	// (0x0004510c) popup_image3_note_pane

0x9295,	// (0x00045128) popup_image3_tool_bar_pane_ParamLimits

0x9295,	// (0x00045128) popup_image3_tool_bar_pane

0x2ce0,	// (0x0003eb73) cell_vitu2_itu_pane_t3_ParamLimits

0x2ce0,	// (0x0003eb73) cell_vitu2_itu_pane_t3

0x08e8,	// (0x0003c77b) bg_popup_trans_pane

0xd2b2,	// (0x00049145) grid_image3_tool_bar_pane

0xd2bc,	// (0x0004914f) bg_popup_trans_pane_g1

0x14e3,	// (0x0003d376) bg_popup_trans_pane_g2

0xd2c4,	// (0x00049157) bg_popup_trans_pane_g3

0xd2cc,	// (0x0004915f) bg_popup_trans_pane_g4

0xd2d4,	// (0x00049167) bg_popup_trans_pane_g5

0xd2dc,	// (0x0004916f) bg_popup_trans_pane_g6

0xd2e4,	// (0x00049177) bg_popup_trans_pane_g7

0xd2ec,	// (0x0004917f) bg_popup_trans_pane_g8

0x14c3,	// (0x0003d356) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0004b81f) bg_popup_trans_pane_g

0xd2f4,	// (0x00049187) cell_image3_tool_bar_pane_ParamLimits

0xd2f4,	// (0x00049187) cell_image3_tool_bar_pane

0xc825,	// (0x000486b8) cell_image3_tool_bar_pane_g1

0x08e8,	// (0x0003c77b) bg_popup_trans_pane_cp1

0xd308,	// (0x0004919b) popup_image3_note_pane_t1

0xd316,	// (0x000491a9) popup_image3_note_pane_t2

0xd324,	// (0x000491b7) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0004b832) popup_image3_note_pane_t

0xd332,	// (0x000491c5) popup_image3_note_pane_t3_copy1

0x98dd,	// (0x00045770) bg_myfav_hc_instruction_pane_ParamLimits

0x98dd,	// (0x00045770) bg_myfav_hc_instruction_pane

0x98f3,	// (0x00045786) cell_myfav_contact_pane_ParamLimits

0x98f3,	// (0x00045786) cell_myfav_contact_pane

0x990f,	// (0x000457a2) cell_myfav_contact_pane_cp1_ParamLimits

0x990f,	// (0x000457a2) cell_myfav_contact_pane_cp1

0x9927,	// (0x000457ba) cell_myfav_contact_pane_cp2_ParamLimits

0x9927,	// (0x000457ba) cell_myfav_contact_pane_cp2

0x993f,	// (0x000457d2) cell_myfav_contact_pane_cp3_ParamLimits

0x993f,	// (0x000457d2) cell_myfav_contact_pane_cp3

0x9956,	// (0x000457e9) cell_myfav_contact_pane_cp4_ParamLimits

0x9956,	// (0x000457e9) cell_myfav_contact_pane_cp4

0x996e,	// (0x00045801) cell_myfav_contact_pane_cp5_ParamLimits

0x996e,	// (0x00045801) cell_myfav_contact_pane_cp5

0x9982,	// (0x00045815) cell_myfav_contact_pane_cp6_ParamLimits

0x9982,	// (0x00045815) cell_myfav_contact_pane_cp6

0x9998,	// (0x0004582b) cell_myfav_contact_pane_cp7_ParamLimits

0x9998,	// (0x0004582b) cell_myfav_contact_pane_cp7

0xd340,	// (0x000491d3) listscroll_gen_pane_cp05

0x99b2,	// (0x00045845) main_myfav_hc_pane_g1_ParamLimits

0x99b2,	// (0x00045845) main_myfav_hc_pane_g1

0x99cc,	// (0x0004585f) main_myfav_hc_pane_g2_ParamLimits

0x99cc,	// (0x0004585f) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0004b839) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0004b839) main_myfav_hc_pane_g

0x99fe,	// (0x00045891) main_myfav_hc_pane_t1_ParamLimits

0x99fe,	// (0x00045891) main_myfav_hc_pane_t1

0xd349,	// (0x000491dc) main_myfav_hc_pane_t2_ParamLimits

0xd349,	// (0x000491dc) main_myfav_hc_pane_t2

0xd35b,	// (0x000491ee) main_myfav_hc_pane_t3_ParamLimits

0xd35b,	// (0x000491ee) main_myfav_hc_pane_t3

0x9a15,	// (0x000458a8) main_myfav_hc_pane_t4_ParamLimits

0x9a15,	// (0x000458a8) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0004b840) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0004b840) main_myfav_hc_pane_t

0xc825,	// (0x000486b8) bg_myfav_hc_instruction_pane_g1

0xd36d,	// (0x00049200) cell_myfav_contact_pane_g1_ParamLimits

0xd36d,	// (0x00049200) cell_myfav_contact_pane_g1

0xd36d,	// (0x00049200) cell_myfav_contact_pane_g2_ParamLimits

0xd36d,	// (0x00049200) cell_myfav_contact_pane_g2

0xd379,	// (0x0004920c) cell_myfav_contact_pane_g3_ParamLimits

0xd379,	// (0x0004920c) cell_myfav_contact_pane_g3

0xcb39,	// (0x000489cc) cell_myfav_contact_pane_g4_ParamLimits

0xcb39,	// (0x000489cc) cell_myfav_contact_pane_g4

0xd386,	// (0x00049219) cell_myfav_contact_pane_g5_ParamLimits

0xd386,	// (0x00049219) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0004b84b) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0004b84b) cell_myfav_contact_pane_g

0x99e6,	// (0x00045879) main_myfav_hc_pane_g3_ParamLimits

0x99e6,	// (0x00045879) main_myfav_hc_pane_g3

0x3569,	// (0x0003f3fc) popup_adpt_find_window

0x9a3d,	// (0x000458d0) afind_page_pane_ParamLimits

0x9a3d,	// (0x000458d0) afind_page_pane

0x9a52,	// (0x000458e5) aid_size_cell_afind_ParamLimits

0x9a52,	// (0x000458e5) aid_size_cell_afind

0x9a70,	// (0x00045903) bg_popup_sub_pane_cp09_ParamLimits

0x9a70,	// (0x00045903) bg_popup_sub_pane_cp09

0x9a7d,	// (0x00045910) find_pane_cp01_ParamLimits

0x9a7d,	// (0x00045910) find_pane_cp01

0xd392,	// (0x00049225) grid_afind_control_pane_ParamLimits

0xd392,	// (0x00049225) grid_afind_control_pane

0x9a8a,	// (0x0004591d) grid_afind_pane_ParamLimits

0x9a8a,	// (0x0004591d) grid_afind_pane

0x9aac,	// (0x0004593f) cell_afind_pane_ParamLimits

0x9aac,	// (0x0004593f) cell_afind_pane

0xc825,	// (0x000486b8) afind_page_pane_g1

0x9b0d,	// (0x000459a0) afind_page_pane_g2

0x9b16,	// (0x000459a9) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0004b856) afind_page_pane_g

0x9b1f,	// (0x000459b2) afind_page_pane_t1

0xd3a6,	// (0x00049239) cell_afind_grid_control_pane_ParamLimits

0xd3a6,	// (0x00049239) cell_afind_grid_control_pane

0xd153,	// (0x00048fe6) bg_button_pane_cp69_ParamLimits

0xd153,	// (0x00048fe6) bg_button_pane_cp69

0x9b3f,	// (0x000459d2) cell_afind_pane_g1_ParamLimits

0x9b3f,	// (0x000459d2) cell_afind_pane_g1

0x9b4c,	// (0x000459df) cell_afind_pane_t1_ParamLimits

0x9b4c,	// (0x000459df) cell_afind_pane_t1

0x12d6,	// (0x0003d169) bg_button_pane_cp72

0xd3b5,	// (0x00049248) cell_afind_grid_control_pane_g1

0x5e14,	// (0x00041ca7) aid_image_placing_area_ParamLimits

0x5e14,	// (0x00041ca7) aid_image_placing_area

0xce21,	// (0x00048cb4) field_vitu_entry_pane_g1_ParamLimits

0xce21,	// (0x00048cb4) field_vitu_entry_pane_g1

0xce2d,	// (0x00048cc0) field_vitu_entry_pane_g2_ParamLimits

0xce2d,	// (0x00048cc0) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0004b710) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0004b710) field_vitu_entry_pane_g

0x8cc9,	// (0x00044b5c) cell_vitu_itu_pane_g1_ParamLimits

0x8d0b,	// (0x00044b9e) cell_vitu_itu_pane_t3_ParamLimits

0x8d0b,	// (0x00044b9e) cell_vitu_itu_pane_t3

0xd103,	// (0x00048f96) mp4_progress_pane_t1_ParamLimits

0xd11c,	// (0x00048faf) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0004b7a5) mp4_progress_pane_t_ParamLimits

0xd135,	// (0x00048fc8) mup_progress_pane_cp04_ParamLimits

0x9a29,	// (0x000458bc) main_myfav_hc_pane_t5_ParamLimits

0x9a29,	// (0x000458bc) main_myfav_hc_pane_t5

0x0906,	// (0x0003c799) aid_zoom_text_primary

0x3569,	// (0x0003f3fc) popup_adpt_find_window_ParamLimits

0x1c72,	// (0x0003db05) main_cam_set_pane

0x9446,	// (0x000452d9) cam4_zoom_pane_ParamLimits

0x9446,	// (0x000452d9) cam4_zoom_pane

0x9b5e,	// (0x000459f1) main_cam_set_pane_g1_ParamLimits

0x9b5e,	// (0x000459f1) main_cam_set_pane_g1

0x9b6c,	// (0x000459ff) main_cam_set_pane_g2_ParamLimits

0x9b6c,	// (0x000459ff) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0004b85d) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0004b85d) main_cam_set_pane_g

0x9b8f,	// (0x00045a22) main_cam_set_pane_t1_ParamLimits

0x9b8f,	// (0x00045a22) main_cam_set_pane_t1

0x9baa,	// (0x00045a3d) main_cset_listscroll_pane_ParamLimits

0x9baa,	// (0x00045a3d) main_cset_listscroll_pane

0x9bcc,	// (0x00045a5f) main_cset_slider_pane_ParamLimits

0x9bcc,	// (0x00045a5f) main_cset_slider_pane

0xd3c6,	// (0x00049259) main_cset_list_pane_ParamLimits

0xd3c6,	// (0x00049259) main_cset_list_pane

0xd3d6,	// (0x00049269) scroll_pane_cp028

0x9bf2,	// (0x00045a85) aid_area_touch_slider

0x9c0e,	// (0x00045aa1) cset_slider_pane

0x9c38,	// (0x00045acb) main_cset_slider_pane_g1

0x9c4d,	// (0x00045ae0) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0004b862) main_cset_slider_pane_g

0xd40f,	// (0x000492a2) main_cset_slider_pane_t1

0x9d09,	// (0x00045b9c) main_cset_slider_pane_t2

0x9d23,	// (0x00045bb6) main_cset_slider_pane_t3

0x9d3d,	// (0x00045bd0) main_cset_slider_pane_t4

0x9d57,	// (0x00045bea) main_cset_slider_pane_t5

0x9d73,	// (0x00045c06) main_cset_slider_pane_t6

0x9d88,	// (0x00045c1b) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0004b887) main_cset_slider_pane_t

0x9e8c,	// (0x00045d1f) cset_list_set_pane_ParamLimits

0x9e8c,	// (0x00045d1f) cset_list_set_pane

0x9ea0,	// (0x00045d33) aid_position_infowindow_above

0x9ea8,	// (0x00045d3b) aid_position_infowindow_below

0x2d38,	// (0x0003ebcb) cset_list_set_pane_g1_ParamLimits

0x2d38,	// (0x0003ebcb) cset_list_set_pane_g1

0x2d44,	// (0x0003ebd7) cset_list_set_pane_g3_ParamLimits

0x2d44,	// (0x0003ebd7) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0004b8a6) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0004b8a6) cset_list_set_pane_g

0x2d53,	// (0x0003ebe6) cset_list_set_pane_t1_ParamLimits

0x2d53,	// (0x0003ebe6) cset_list_set_pane_t1

0x1c72,	// (0x0003db05) list_highlight_pane_cp021_ParamLimits

0x1c72,	// (0x0003db05) list_highlight_pane_cp021

0x5651,	// (0x000414e4) cset_slider_pane_g1

0x5663,	// (0x000414f6) cset_slider_pane_g2

0x565a,	// (0x000414ed) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0004b8ab) cset_slider_pane_g

0xf027,	// (0x0004aeba) aid_area_touch_cam4_zoom

0xf02f,	// (0x0004aec2) cam4_zoom_cont_pane

0xf037,	// (0x0004aeca) cam4_zoom_pane_g1

0xf03f,	// (0x0004aed2) cam4_zoom_pane_g2

0x9eb0,	// (0x00045d43) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0004b8b2) cam4_zoom_pane_g

0xd4af,	// (0x00049342) cam4_zoom_cont_pane_g1

0xd4b8,	// (0x0004934b) cam4_zoom_cont_pane_g2

0xd4c1,	// (0x00049354) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0004b8b9) cam4_zoom_cont_pane_g

0x9302,	// (0x00045195) call4_image_pane_ParamLimits

0x9302,	// (0x00045195) call4_image_pane

0xd15f,	// (0x00048ff2) call4_windows_conf_pane_ParamLimits

0xd19e,	// (0x00049031) popup_call4_audio_in_window_ParamLimits

0xd19e,	// (0x00049031) popup_call4_audio_in_window

0x08e8,	// (0x0003c77b) bg_popup_call2_act_pane_cp02

0xd214,	// (0x000490a7) call4_list_conf_pane

0xc825,	// (0x000486b8) call4_image_pane_g1

0xc825,	// (0x000486b8) call4_image_pane_g2

0x0001,

0xf743,	// (0x0004b5d6) call4_image_pane_g

0xd4ca,	// (0x0004935d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4ca,	// (0x0004935d) list_single_graphic_popup_conf4_pane

0x08e8,	// (0x0003c77b) list_highlight_pane_cp022

0xd4dd,	// (0x00049370) list_single_graphic_popup_conf4_pane_g1

0x1982,	// (0x0003d815) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0004b8c0) list_single_graphic_popup_conf4_pane_g

0xd4e5,	// (0x00049378) list_single_graphic_popup_conf4_pane_t1

0x4293,	// (0x00040126) popup_vtel_slider_window_ParamLimits

0x4293,	// (0x00040126) popup_vtel_slider_window

0xd141,	// (0x00048fd4) dialer2_ne_pane_t2_ParamLimits

0xd141,	// (0x00048fd4) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0004b7aa) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0004b7aa) dialer2_ne_pane_t

0xc608,	// (0x0004849b) bg_popup_sub_pane_cp010_ParamLimits

0xc608,	// (0x0004849b) bg_popup_sub_pane_cp010

0x9eb8,	// (0x00045d4b) popup_vtel_slider_window_g1_ParamLimits

0x9eb8,	// (0x00045d4b) popup_vtel_slider_window_g1

0x9ecb,	// (0x00045d5e) popup_vtel_slider_window_g2_ParamLimits

0x9ecb,	// (0x00045d5e) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0004b8c5) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0004b8c5) popup_vtel_slider_window_g

0x9f21,	// (0x00045db4) vtel_slider_pane_ParamLimits

0x9f21,	// (0x00045db4) vtel_slider_pane

0x9f43,	// (0x00045dd6) vtel_slider_pane_g1_ParamLimits

0x9f43,	// (0x00045dd6) vtel_slider_pane_g1

0x9f57,	// (0x00045dea) vtel_slider_pane_g2_ParamLimits

0x9f57,	// (0x00045dea) vtel_slider_pane_g2

0x9f6f,	// (0x00045e02) vtel_slider_pane_g3_ParamLimits

0x9f6f,	// (0x00045e02) vtel_slider_pane_g3

0x9f43,	// (0x00045dd6) vtel_slider_pane_g4_ParamLimits

0x9f43,	// (0x00045dd6) vtel_slider_pane_g4

0x9f85,	// (0x00045e18) vtel_slider_pane_g5_ParamLimits

0x9f85,	// (0x00045e18) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0004b8ce) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0004b8ce) vtel_slider_pane_g

0x08e8,	// (0x0003c77b) main_gallery2_pane

0x968e,	// (0x00045521) aid_size_row_itut2_dropdow_list_ParamLimits

0x968e,	// (0x00045521) aid_size_row_itut2_dropdow_list

0x971a,	// (0x000455ad) grid_vitu2_function_top_pane_ParamLimits

0x971a,	// (0x000455ad) grid_vitu2_function_top_pane

0x977f,	// (0x00045612) popup_vitu2_dropdown_list_window_ParamLimits

0x977f,	// (0x00045612) popup_vitu2_dropdown_list_window

0x97a8,	// (0x0004563b) popup_vitu2_match_list_window

0x9f9b,	// (0x00045e2e) cell_vitu2_function_top_pane_ParamLimits

0x9f9b,	// (0x00045e2e) cell_vitu2_function_top_pane

0x9fb9,	// (0x00045e4c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9fb9,	// (0x00045e4c) cell_vitu2_function_top_pane_cp01

0x9fd7,	// (0x00045e6a) cell_vitu2_function_top_wide_pane_ParamLimits

0x9fd7,	// (0x00045e6a) cell_vitu2_function_top_wide_pane

0x1c72,	// (0x0003db05) bg_button_pane_cp012

0x9ff5,	// (0x00045e88) cell_vitu2_function_top_pane_g1

0xf047,	// (0x0004aeda) bg_button_pane_cp013_ParamLimits

0xf047,	// (0x0004aeda) bg_button_pane_cp013

0xa009,	// (0x00045e9c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa009,	// (0x00045e9c) cell_vitu2_function_top_wide_pane_g1

0x1c72,	// (0x0003db05) bg_popup_sub_pane_cp20

0xa021,	// (0x00045eb4) list_vitu2_match_list_pane

0xd2bc,	// (0x0004914f) bg_popup_sub_pane_cp20_g1

0xd2c4,	// (0x00049157) bg_popup_sub_pane_cp20_g2

0x14e3,	// (0x0003d376) bg_popup_sub_pane_cp20_g3

0xd2cc,	// (0x0004915f) bg_popup_sub_pane_cp20_g4

0x14c3,	// (0x0003d356) bg_popup_sub_pane_cp20_g5

0xd501,	// (0x00049394) bg_popup_sub_pane_cp20_g6

0xd2dc,	// (0x0004916f) bg_popup_sub_pane_cp20_g7

0xd2e4,	// (0x00049177) bg_popup_sub_pane_cp20_g8

0xd2ec,	// (0x0004917f) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0004b8d9) bg_popup_sub_pane_cp20_g

0xf063,	// (0x0004aef6) list_vitu2_match_list_item_pane_ParamLimits

0xf063,	// (0x0004aef6) list_vitu2_match_list_item_pane

0xf075,	// (0x0004af08) list_vitu2_match_list_item_pane_t1

0x08e8,	// (0x0003c77b) bg_popup_sub_pane_cp21

0x1887,	// (0x0003d71a) grid_vitu2_dropdown_list_pane

0xa03f,	// (0x00045ed2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa03f,	// (0x00045ed2) cell_vitu2_dropdown_list_char_pane

0xa060,	// (0x00045ef3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa060,	// (0x00045ef3) cell_vitu2_dropdown_list_ctrl_pane

0xd521,	// (0x000493b4) cell_vitu2_dropdown_list_char_pane_g1

0xd52a,	// (0x000493bd) cell_vitu2_dropdown_list_char_pane_g2

0xd533,	// (0x000493c6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0004b8f6) cell_vitu2_dropdown_list_char_pane_g

0xa08c,	// (0x00045f1f) cell_vitu2_dropdown_list_char_pane_t1

0xa09a,	// (0x00045f2d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa09a,	// (0x00045f2d) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa0aa,	// (0x00045f3d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa0aa,	// (0x00045f3d) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa0bb,	// (0x00045f4e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa0bb,	// (0x00045f4e) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa0cb,	// (0x00045f5e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa0cb,	// (0x00045f5e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xca8c,	// (0x0004891f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xca8c,	// (0x0004891f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0004b8fd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0004b8fd) cell_vitu2_dropdown_list_ctrl_pane_g

0xa0e7,	// (0x00045f7a) aid_size_cell_gallery2_ParamLimits

0xa0e7,	// (0x00045f7a) aid_size_cell_gallery2

0xa0fd,	// (0x00045f90) grid_gallery2_pane_ParamLimits

0xa0fd,	// (0x00045f90) grid_gallery2_pane

0xa111,	// (0x00045fa4) scroll_pane_cp029_ParamLimits

0xa111,	// (0x00045fa4) scroll_pane_cp029

0xa11d,	// (0x00045fb0) cell_gallery2_pane_ParamLimits

0xa11d,	// (0x00045fb0) cell_gallery2_pane

0xd53c,	// (0x000493cf) cell_gallery2_pane_g2

0xa153,	// (0x00045fe6) cell_gallery2_pane_g3

0xd546,	// (0x000493d9) cell_gallery2_pane_g4

0xd54e,	// (0x000493e1) cell_gallery2_pane_g5

0x1b5b,	// (0x0003d9ee) grid_highlight_pane_cp10

0x97a8,	// (0x0004563b) popup_vitu2_match_list_window_ParamLimits

0x97bd,	// (0x00045650) popup_vitu2_query_window_ParamLimits

0x97bd,	// (0x00045650) popup_vitu2_query_window

0x08e8,	// (0x0003c77b) bg_vitu2_candi_button_pane

0xd521,	// (0x000493b4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd52a,	// (0x000493bd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd533,	// (0x000493c6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2d99,	// (0x0003ec2c) bg_button_pane_cp015

0xa15b,	// (0x00045fee) bg_button_pane_cp016

0xa165,	// (0x00045ff8) bg_button_pane_cp017

0x1c72,	// (0x0003db05) bg_popup_sub_pane_cp22

0xd556,	// (0x000493e9) popup_vitu2_query_window_g1

0x2db0,	// (0x0003ec43) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0004b908) popup_vitu2_query_window_g

0x2dbe,	// (0x0003ec51) popup_vitu2_query_window_t1_ParamLimits

0x2dbe,	// (0x0003ec51) popup_vitu2_query_window_t1

0x2de6,	// (0x0003ec79) popup_vitu2_query_window_t2_ParamLimits

0x2de6,	// (0x0003ec79) popup_vitu2_query_window_t2

0x2df8,	// (0x0003ec8b) popup_vitu2_query_window_t3_ParamLimits

0x2df8,	// (0x0003ec8b) popup_vitu2_query_window_t3

0xa180,	// (0x00046013) popup_vitu2_query_window_t4_ParamLimits

0xa180,	// (0x00046013) popup_vitu2_query_window_t4

0xa194,	// (0x00046027) popup_vitu2_query_window_t5_ParamLimits

0xa194,	// (0x00046027) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0004b90d) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0004b90d) popup_vitu2_query_window_t

0xd3be,	// (0x00049251) main_cset_text_pane

0x9bf2,	// (0x00045a85) aid_area_touch_slider_ParamLimits

0x9c0e,	// (0x00045aa1) cset_slider_pane_ParamLimits

0x9c38,	// (0x00045acb) main_cset_slider_pane_g1_ParamLimits

0x9c4d,	// (0x00045ae0) main_cset_slider_pane_g2_ParamLimits

0xd3df,	// (0x00049272) main_cset_slider_pane_g3_ParamLimits

0xd3df,	// (0x00049272) main_cset_slider_pane_g3

0x9c62,	// (0x00045af5) main_cset_slider_pane_g4_ParamLimits

0x9c62,	// (0x00045af5) main_cset_slider_pane_g4

0x9c71,	// (0x00045b04) main_cset_slider_pane_g5_ParamLimits

0x9c71,	// (0x00045b04) main_cset_slider_pane_g5

0x9c7d,	// (0x00045b10) main_cset_slider_pane_g6_ParamLimits

0x9c7d,	// (0x00045b10) main_cset_slider_pane_g6

0xf9cf,	// (0x0004b862) main_cset_slider_pane_g_ParamLimits

0xd40f,	// (0x000492a2) main_cset_slider_pane_t1_ParamLimits

0x9d09,	// (0x00045b9c) main_cset_slider_pane_t2_ParamLimits

0x9d23,	// (0x00045bb6) main_cset_slider_pane_t3_ParamLimits

0x9d3d,	// (0x00045bd0) main_cset_slider_pane_t4_ParamLimits

0x9d57,	// (0x00045bea) main_cset_slider_pane_t5_ParamLimits

0x9d73,	// (0x00045c06) main_cset_slider_pane_t6_ParamLimits

0x9d88,	// (0x00045c1b) main_cset_slider_pane_t7_ParamLimits

0x9db2,	// (0x00045c45) main_cset_slider_pane_t8_ParamLimits

0x9db2,	// (0x00045c45) main_cset_slider_pane_t8

0x9dda,	// (0x00045c6d) main_cset_slider_pane_t9_ParamLimits

0x9dda,	// (0x00045c6d) main_cset_slider_pane_t9

0x9e02,	// (0x00045c95) main_cset_slider_pane_t10_ParamLimits

0x9e02,	// (0x00045c95) main_cset_slider_pane_t10

0x9e2a,	// (0x00045cbd) main_cset_slider_pane_t11_ParamLimits

0x9e2a,	// (0x00045cbd) main_cset_slider_pane_t11

0x9e52,	// (0x00045ce5) main_cset_slider_pane_t12_ParamLimits

0x9e52,	// (0x00045ce5) main_cset_slider_pane_t12

0x9e6f,	// (0x00045d02) main_cset_slider_pane_t13_ParamLimits

0x9e6f,	// (0x00045d02) main_cset_slider_pane_t13

0xf9f4,	// (0x0004b887) main_cset_slider_pane_t_ParamLimits

0x08e8,	// (0x0003c77b) bg_popup_sub_pane_cp011

0xd562,	// (0x000493f5) main_cset_text_pane_g1

0xd56a,	// (0x000493fd) main_cset_text_pane_t1

0xd578,	// (0x0004940b) main_cset_text_pane_t2

0xd586,	// (0x00049419) main_cset_text_pane_t3

0xd594,	// (0x00049427) main_cset_text_pane_t4

0xd5a2,	// (0x00049435) main_cset_text_pane_t5

0xd5b0,	// (0x00049443) main_cset_text_pane_t6

0xd5be,	// (0x00049451) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0004b918) main_cset_text_pane_t

0x08e8,	// (0x0003c77b) main_cam4_burst_pane

0x08e8,	// (0x0003c77b) main_cam5_pane

0x9b2d,	// (0x000459c0) bg_button_pane_cp019

0x9b36,	// (0x000459c9) bg_button_pane_cp020

0xd3eb,	// (0x0004927e) main_cset_slider_pane_g7_ParamLimits

0xd3eb,	// (0x0004927e) main_cset_slider_pane_g7

0xd3f7,	// (0x0004928a) main_cset_slider_pane_g8_ParamLimits

0xd3f7,	// (0x0004928a) main_cset_slider_pane_g8

0x9c91,	// (0x00045b24) main_cset_slider_pane_g9_ParamLimits

0x9c91,	// (0x00045b24) main_cset_slider_pane_g9

0x9c9d,	// (0x00045b30) main_cset_slider_pane_g10_ParamLimits

0x9c9d,	// (0x00045b30) main_cset_slider_pane_g10

0x9ca9,	// (0x00045b3c) main_cset_slider_pane_g11_ParamLimits

0x9ca9,	// (0x00045b3c) main_cset_slider_pane_g11

0x9cb5,	// (0x00045b48) main_cset_slider_pane_g12_ParamLimits

0x9cb5,	// (0x00045b48) main_cset_slider_pane_g12

0x9cc1,	// (0x00045b54) main_cset_slider_pane_g13_ParamLimits

0x9cc1,	// (0x00045b54) main_cset_slider_pane_g13

0x9ccd,	// (0x00045b60) main_cset_slider_pane_g14_ParamLimits

0x9ccd,	// (0x00045b60) main_cset_slider_pane_g14

0x9cd9,	// (0x00045b6c) main_cset_slider_pane_g15_ParamLimits

0x9cd9,	// (0x00045b6c) main_cset_slider_pane_g15

0xd43d,	// (0x000492d0) main_cset_slider_pane_t14_ParamLimits

0xd43d,	// (0x000492d0) main_cset_slider_pane_t14

0xd476,	// (0x00049309) main_cset_slider_pane_t15_ParamLimits

0xd476,	// (0x00049309) main_cset_slider_pane_t15

0xa1a8,	// (0x0004603b) aid_cam4_burst_size_cell_ParamLimits

0xa1a8,	// (0x0004603b) aid_cam4_burst_size_cell

0xa1c8,	// (0x0004605b) grid_cam4_burst_pane_ParamLimits

0xa1c8,	// (0x0004605b) grid_cam4_burst_pane

0xa200,	// (0x00046093) linegrid_cam4_burst_pane_ParamLimits

0xa200,	// (0x00046093) linegrid_cam4_burst_pane

0xa226,	// (0x000460b9) scroll_pane_cp30_ParamLimits

0xa226,	// (0x000460b9) scroll_pane_cp30

0xa232,	// (0x000460c5) cell_cam4_burst_pane_ParamLimits

0xa232,	// (0x000460c5) cell_cam4_burst_pane

0xd5cc,	// (0x0004945f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5cc,	// (0x0004945f) linegrid_cam4_burst_pane_g1

0xa27f,	// (0x00046112) linegrid_cam4_burst_pane_g2_ParamLimits

0xa27f,	// (0x00046112) linegrid_cam4_burst_pane_g2

0xd5d9,	// (0x0004946c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5d9,	// (0x0004946c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0004b927) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0004b927) linegrid_cam4_burst_pane_g

0xa290,	// (0x00046123) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa290,	// (0x00046123) linegrid_cam4_burst_pane_g3_copy1

0xd5e6,	// (0x00049479) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5e6,	// (0x00049479) linegrid_cam4_burst_pane_g4

0xa2aa,	// (0x0004613d) linegrid_cam4_burst_pane_g5_ParamLimits

0xa2aa,	// (0x0004613d) linegrid_cam4_burst_pane_g5

0xa2bb,	// (0x0004614e) linegrid_cam4_burst_pane_g6_ParamLimits

0xa2bb,	// (0x0004614e) linegrid_cam4_burst_pane_g6

0xd5f3,	// (0x00049486) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5f3,	// (0x00049486) linegrid_cam4_burst_pane_g7

0xa2d2,	// (0x00046165) cell_cam4_burst_pane_g1

0xd60c,	// (0x0004949f) main_cam5_pane_t1_ParamLimits

0xd60c,	// (0x0004949f) main_cam5_pane_t1

0xd61e,	// (0x000494b1) main_cam5_pane_t2_ParamLimits

0xd61e,	// (0x000494b1) main_cam5_pane_t2

0xd630,	// (0x000494c3) main_cam5_pane_t3_ParamLimits

0xd630,	// (0x000494c3) main_cam5_pane_t3

0xd642,	// (0x000494d5) main_cam5_pane_t4_ParamLimits

0xd642,	// (0x000494d5) main_cam5_pane_t4

0xd658,	// (0x000494eb) main_cam5_pane_t5_ParamLimits

0xd658,	// (0x000494eb) main_cam5_pane_t5

0xd66a,	// (0x000494fd) main_cam5_pane_t6_ParamLimits

0xd66a,	// (0x000494fd) main_cam5_pane_t6

0xd67e,	// (0x00049511) main_cam5_pane_t7_ParamLimits

0xd67e,	// (0x00049511) main_cam5_pane_t7

0xd690,	// (0x00049523) main_cam5_pane_t8_ParamLimits

0xd690,	// (0x00049523) main_cam5_pane_t8

0xd6ac,	// (0x0004953f) main_cam5_pane_t9_ParamLimits

0xd6ac,	// (0x0004953f) main_cam5_pane_t9

0xd6be,	// (0x00049551) main_cam5_pane_t10_ParamLimits

0xd6be,	// (0x00049551) main_cam5_pane_t10

0xd6d0,	// (0x00049563) main_cam5_pane_t11_ParamLimits

0xd6d0,	// (0x00049563) main_cam5_pane_t11

0xd6e2,	// (0x00049575) main_cam5_pane_t12_ParamLimits

0xd6e2,	// (0x00049575) main_cam5_pane_t12

0xd6f7,	// (0x0004958a) main_cam5_pane_t13_ParamLimits

0xd6f7,	// (0x0004958a) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0004b933) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0004b933) main_cam5_pane_t

0x35ec,	// (0x0003f47f) popup_scut_keymap_window_ParamLimits

0x35ec,	// (0x0003f47f) popup_scut_keymap_window

0xa2e5,	// (0x00046178) aid_size_cell_brow_shortcut

0x1b5b,	// (0x0003d9ee) bg_popup_window_pane_cp010

0xa2f1,	// (0x00046184) grid_scut_pane

0xa2fd,	// (0x00046190) cell_scut_pane_ParamLimits

0xa2fd,	// (0x00046190) cell_scut_pane

0xa314,	// (0x000461a7) cell_scut_pane_g1

0xd714,	// (0x000495a7) cell_scut_pane_t1

0xd723,	// (0x000495b6) cell_scut_pane_t2

0xa31d,	// (0x000461b0) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0004b94e) cell_scut_pane_t

0x8205,	// (0x00044098) main_mup3_pane_g8_ParamLimits

0x8205,	// (0x00044098) main_mup3_pane_g8

0x96a6,	// (0x00045539) area_vitu2_query_pane_ParamLimits

0x96a6,	// (0x00045539) area_vitu2_query_pane

0x2da3,	// (0x0003ec36) input_focus_pane_cp08

0xd732,	// (0x000495c5) area_vitu2_query_pane_g1

0x2e20,	// (0x0003ecb3) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0004b955) area_vitu2_query_pane_g

0xa32b,	// (0x000461be) area_vitu2_query_pane_t1_ParamLimits

0xa32b,	// (0x000461be) area_vitu2_query_pane_t1

0xa33f,	// (0x000461d2) area_vitu2_query_pane_t2_ParamLimits

0xa33f,	// (0x000461d2) area_vitu2_query_pane_t2

0x2e31,	// (0x0003ecc4) area_vitu2_query_pane_t3_ParamLimits

0x2e31,	// (0x0003ecc4) area_vitu2_query_pane_t3

0xd73e,	// (0x000495d1) area_vitu2_query_pane_t4_ParamLimits

0xd73e,	// (0x000495d1) area_vitu2_query_pane_t4

0xd766,	// (0x000495f9) area_vitu2_query_pane_t5_ParamLimits

0xd766,	// (0x000495f9) area_vitu2_query_pane_t5

0xd78e,	// (0x00049621) area_vitu2_query_pane_t6_ParamLimits

0xd78e,	// (0x00049621) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0004b95a) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0004b95a) area_vitu2_query_pane_t

0xa353,	// (0x000461e6) bg_button_pane_cp018

0xa361,	// (0x000461f4) bg_button_pane_cp021

0x2e59,	// (0x0003ecec) bg_button_pane_cp022

0x2e6a,	// (0x0003ecfd) input_focus_pane_cp09

0x511e,	// (0x00040fb1) aid_size_touch_mv_arrow_left

0x5147,	// (0x00040fda) aid_size_touch_mv_arrow_right

0x9cf1,	// (0x00045b84) main_cset_slider_pane_g16_ParamLimits

0x9cf1,	// (0x00045b84) main_cset_slider_pane_g16

0x9cfd,	// (0x00045b90) main_cset_slider_pane_g17_ParamLimits

0x9cfd,	// (0x00045b90) main_cset_slider_pane_g17

0xa2d2,	// (0x00046165) cell_cam4_burst_pane_g1_ParamLimits

0x08e8,	// (0x0003c77b) compa_mode_pane

0x9edb,	// (0x00045d6e) popup_vtel_slider_window_g3_ParamLimits

0x9edb,	// (0x00045d6e) popup_vtel_slider_window_g3

0x9ef2,	// (0x00045d85) popup_vtel_slider_window_g4_ParamLimits

0x9ef2,	// (0x00045d85) popup_vtel_slider_window_g4

0x9f09,	// (0x00045d9c) popup_vtel_slider_window_t1_ParamLimits

0x9f09,	// (0x00045d9c) popup_vtel_slider_window_t1

0x08e8,	// (0x0003c77b) main_cl_pane

0xc345,	// (0x000481d8) popup_imed_adjust2_window_ParamLimits

0xc31d,	// (0x000481b0) bg_tb_trans_pane_cp05_ParamLimits

0xcd56,	// (0x00048be9) popup_imed_adjust2_window_g1_ParamLimits

0xcd65,	// (0x00048bf8) popup_imed_adjust2_window_g2_ParamLimits

0xcd65,	// (0x00048bf8) popup_imed_adjust2_window_g2

0xcd71,	// (0x00048c04) popup_imed_adjust2_window_g3_ParamLimits

0xcd71,	// (0x00048c04) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0004b6d4) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0004b6d4) popup_imed_adjust2_window_g

0xcd7d,	// (0x00048c10) popup_imed_adjust2_window_t1_ParamLimits

0xcd95,	// (0x00048c28) slider_imed_adjust_pane_ParamLimits

0xcda9,	// (0x00048c3c) slider_imed_adjust_pane_g1_ParamLimits

0xcdb9,	// (0x00048c4c) slider_imed_adjust_pane_g2_ParamLimits

0xcdc9,	// (0x00048c5c) slider_imed_adjust_pane_g3_ParamLimits

0xcdda,	// (0x00048c6d) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0004b6db) slider_imed_adjust_pane_g_ParamLimits

0x93e7,	// (0x0004527a) aid_touch_area_cam4_ParamLimits

0x93e7,	// (0x0004527a) aid_touch_area_cam4

0xefff,	// (0x0004ae92) battery_pane_cp01

0x949b,	// (0x0004532e) main_camera4_pane_g6_ParamLimits

0x949b,	// (0x0004532e) main_camera4_pane_g6

0x94be,	// (0x00045351) main_camera4_pane_t2_ParamLimits

0x94be,	// (0x00045351) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0004b7de) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0004b7de) main_camera4_pane_t

0x9516,	// (0x000453a9) aid_touch_area_vid4_ParamLimits

0x9516,	// (0x000453a9) aid_touch_area_vid4

0x9574,	// (0x00045407) main_video4_pane_g5_ParamLimits

0x9574,	// (0x00045407) main_video4_pane_g5

0x959b,	// (0x0004542e) vid4_progress_pane_ParamLimits

0x959b,	// (0x0004542e) vid4_progress_pane

0xd403,	// (0x00049296) main_cset_slider_pane_g18_ParamLimits

0xd403,	// (0x00049296) main_cset_slider_pane_g18

0xd600,	// (0x00049493) cell_cam4_burst_pane_g2_ParamLimits

0xd600,	// (0x00049493) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0004b92e) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0004b92e) cell_cam4_burst_pane_g

0x10cb,	// (0x0003cf5e) bg_cl_pane_ParamLimits

0x10cb,	// (0x0003cf5e) bg_cl_pane

0xa36d,	// (0x00046200) cl_header_pane_ParamLimits

0xa36d,	// (0x00046200) cl_header_pane

0xa381,	// (0x00046214) cl_listscroll_pane_ParamLimits

0xa381,	// (0x00046214) cl_listscroll_pane

0xd7da,	// (0x0004966d) bg_cl_pane_g1

0xd7e2,	// (0x00049675) bg_cl_pane_g2

0xd7ea,	// (0x0004967d) bg_cl_pane_g3

0xd7f2,	// (0x00049685) bg_cl_pane_g4

0xd7fa,	// (0x0004968d) bg_cl_pane_g5

0xd802,	// (0x00049695) bg_cl_pane_g6

0xd80a,	// (0x0004969d) bg_cl_pane_g7

0xd812,	// (0x000496a5) bg_cl_pane_g8

0xd81a,	// (0x000496ad) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0004b969) bg_cl_pane_g

0xa391,	// (0x00046224) aid_height_cl_leading_ParamLimits

0xa391,	// (0x00046224) aid_height_cl_leading

0xa39d,	// (0x00046230) aid_height_cl_text_ParamLimits

0xa39d,	// (0x00046230) aid_height_cl_text

0x1c72,	// (0x0003db05) bg_cl_header_pane_ParamLimits

0x1c72,	// (0x0003db05) bg_cl_header_pane

0xa3bc,	// (0x0004624f) cl_header_pane_g1_ParamLimits

0xa3bc,	// (0x0004624f) cl_header_pane_g1

0xa3d2,	// (0x00046265) cl_header_pane_t1_ParamLimits

0xa3d2,	// (0x00046265) cl_header_pane_t1

0xd822,	// (0x000496b5) cl_list_pane

0xd3d6,	// (0x00049269) hc_scroll_pane_cp01

0x14c3,	// (0x0003d356) bg_cl_header_pane_g1

0xd2bc,	// (0x0004914f) bg_cl_header_pane_g2

0x14e3,	// (0x0003d376) bg_cl_header_pane_g3

0xd2cc,	// (0x0004915f) bg_cl_header_pane_g4

0xd2c4,	// (0x00049157) bg_cl_header_pane_g5

0xd501,	// (0x00049394) bg_cl_header_pane_g6

0xd2e4,	// (0x00049177) bg_cl_header_pane_g7

0xd2ec,	// (0x0004917f) bg_cl_header_pane_g8

0xd2dc,	// (0x0004916f) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0004b97c) bg_cl_header_pane_g

0xa3eb,	// (0x0004627e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa3eb,	// (0x0004627e) hc_cl_list_double_graphic_heading_pane

0xa3ff,	// (0x00046292) hc_cl_list_single_graphic_pane_ParamLimits

0xa3ff,	// (0x00046292) hc_cl_list_single_graphic_pane

0xa419,	// (0x000462ac) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa419,	// (0x000462ac) hc_cl_list_single_graphic_pane_g1

0xa425,	// (0x000462b8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa425,	// (0x000462b8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0004b98f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0004b98f) hc_cl_list_single_graphic_pane_g

0xa439,	// (0x000462cc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa439,	// (0x000462cc) hc_cl_list_single_graphic_pane_t1

0xa419,	// (0x000462ac) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa419,	// (0x000462ac) hc_cl_list_double_graphic_heading_pane_g1

0xa44e,	// (0x000462e1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa44e,	// (0x000462e1) hc_cl_list_double_graphic_heading_pane_g2

0xa462,	// (0x000462f5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa462,	// (0x000462f5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0004b994) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0004b994) hc_cl_list_double_graphic_heading_pane_g

0xa476,	// (0x00046309) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa476,	// (0x00046309) hc_cl_list_double_graphic_heading_pane_t1

0xa48b,	// (0x0004631e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa48b,	// (0x0004631e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0004b99b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0004b99b) hc_cl_list_double_graphic_heading_pane_t

0xf08b,	// (0x0004af1e) vid4_progress_pane_g1

0xf097,	// (0x0004af2a) vid4_progress_pane_g2

0xf0a3,	// (0x0004af36) vid4_progress_pane_g3

0xf0b2,	// (0x0004af45) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0004b9a0) vid4_progress_pane_g

0xf0d0,	// (0x0004af63) vid4_progress_pane_t1

0xf0e6,	// (0x0004af79) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0004b9ab) vid4_progress_pane_t

0xf111,	// (0x0004afa4) wait_bar_pane_cp07

0xc616,	// (0x000484a9) blid_firmament_pane_ParamLimits

0xc659,	// (0x000484ec) popup_blid_sat_info2_window_g1

0xc67d,	// (0x00048510) popup_blid_sat_info2_window_t3

0xc68b,	// (0x0004851e) popup_blid_sat_info2_window_t4

0xc699,	// (0x0004852c) popup_blid_sat_info2_window_t5

0xc6a7,	// (0x0004853a) popup_blid_sat_info2_window_t6

0xc6b7,	// (0x0004854a) popup_blid_sat_info2_window_t7

0xc6c5,	// (0x00048558) popup_blid_sat_info2_window_t8

0xc6d3,	// (0x00048566) popup_blid_sat_info2_window_t9

0xc6e1,	// (0x00048574) popup_blid_sat_info2_window_t10

0xc7a5,	// (0x00048638) aid_firma_cardinal_ParamLimits

0xc7b9,	// (0x0004864c) blid_firmament_pane_t1_ParamLimits

0xc7d0,	// (0x00048663) blid_firmament_pane_t2_ParamLimits

0xc7e7,	// (0x0004867a) blid_firmament_pane_t3_ParamLimits

0xc7fe,	// (0x00048691) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0004b5cd) blid_firmament_pane_t_ParamLimits

0xc815,	// (0x000486a8) blid_sat_info_pane_ParamLimits

0x1c72,	// (0x0003db05) main_cam_set_pane_ParamLimits

0x8a73,	// (0x00044906) aid_size_cell_colour_35_ParamLimits

0x8a93,	// (0x00044926) aid_size_cell_colour_112_ParamLimits

0x8ab3,	// (0x00044946) aid_size_cell_effect_ParamLimits

0xc31d,	// (0x000481b0) bg_tb_trans_pane_cp02_ParamLimits

0x168b,	// (0x0003d51e) heading_imed_pane_ParamLimits

0x8ad3,	// (0x00044966) listscroll_imed_pane_ParamLimits

0x6612,	// (0x000424a5) popup_call2_audio_first_window_g5_ParamLimits

0x6612,	// (0x000424a5) popup_call2_audio_first_window_g5

0x908e,	// (0x00044f21) aid_size_touch_image3_arrow_left_ParamLimits

0x908e,	// (0x00044f21) aid_size_touch_image3_arrow_left

0x90ba,	// (0x00044f4d) aid_size_touch_image3_arrow_right_ParamLimits

0x90ba,	// (0x00044f4d) aid_size_touch_image3_arrow_right

0xf0fc,	// (0x0004af8f) vid4_progress_pane_t3

0x8df6,	// (0x00044c89) main_hwr_training_symbol_option_pane_ParamLimits

0x8df6,	// (0x00044c89) main_hwr_training_symbol_option_pane

0xd043,	// (0x00048ed6) popup_hwr_training_preview_window_ParamLimits

0xd043,	// (0x00048ed6) popup_hwr_training_preview_window

0x8e16,	// (0x00044ca9) hwr_training_navi_pane_g5_ParamLimits

0x8e16,	// (0x00044ca9) hwr_training_navi_pane_g5

0xd2aa,	// (0x0004913d) popup_char_count_window

0x1c72,	// (0x0003db05) bg_popup_sub_pane_cp20_ParamLimits

0xa021,	// (0x00045eb4) list_vitu2_match_list_pane_ParamLimits

0xa030,	// (0x00045ec3) vitu2_page_scroll_pane_ParamLimits

0xa030,	// (0x00045ec3) vitu2_page_scroll_pane

0xd885,	// (0x00049718) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd885,	// (0x00049718) list_single_hwr_training_symbol_option_pane

0xd898,	// (0x0004972b) list_single_hwr_training_symbol_option_pane_g1

0xd8a0,	// (0x00049733) list_single_hwr_training_symbol_option_pane_t1

0xd8ae,	// (0x00049741) bg_button_pane_cp023

0xd8b7,	// (0x0004974a) bg_button_pane_cp024

0xa4aa,	// (0x0004633d) vitu2_page_scroll_pane_g1

0xa4b2,	// (0x00046345) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0004b9b2) vitu2_page_scroll_pane_g

0xa4ba,	// (0x0004634d) vitu2_page_scroll_pane_t1

0xc532,	// (0x000483c5) popup_char_count_window_g1

0xd8ea,	// (0x0004977d) popup_char_count_window_g2

0xd8f3,	// (0x00049786) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0004b9b7) popup_char_count_window_g

0xd8fc,	// (0x0004978f) popup_char_count_window_t1

0x08e8,	// (0x0003c77b) main_vded2_pane

0xcd42,	// (0x00048bd5) aid_size_cell_imed_line

0xcd4c,	// (0x00048bdf) grid_imed_line_width_pane

0x95fe,	// (0x00045491) vid4_indicators_pane_g4

0xd90a,	// (0x0004979d) cell_imed_line_width_pane_ParamLimits

0xd90a,	// (0x0004979d) cell_imed_line_width_pane

0xd91e,	// (0x000497b1) cell_imed_line_width_pane_g1

0xd927,	// (0x000497ba) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0004b9be) cell_imed_line_width_pane_g

0xa4c9,	// (0x0004635c) main_vded2_pane_g1_ParamLimits

0xa4c9,	// (0x0004635c) main_vded2_pane_g1

0xa4df,	// (0x00046372) main_vded2_pane_g2_ParamLimits

0xa4df,	// (0x00046372) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0004b9c3) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0004b9c3) main_vded2_pane_g

0xa4f1,	// (0x00046384) vded2_slider_pane_ParamLimits

0xa4f1,	// (0x00046384) vded2_slider_pane

0xa501,	// (0x00046394) aid_size_touch_vded2_end

0xa50b,	// (0x0004639e) aid_size_touch_vded2_playhead

0xd92f,	// (0x000497c2) aid_size_touch_vded2_start

0xd937,	// (0x000497ca) vded2_slider_bg_pane

0xd940,	// (0x000497d3) vded2_slider_pane_g1

0xd949,	// (0x000497dc) vded2_slider_pane_g2

0xa515,	// (0x000463a8) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0004b9c8) vded2_slider_pane_g

0xd951,	// (0x000497e4) vded2_slider_bg_pane_g1

0xd95a,	// (0x000497ed) vded2_slider_bg_pane_g2

0xd963,	// (0x000497f6) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0004b9cf) vded2_slider_bg_pane_g

0x57c1,	// (0x00041654) aid_postcard_touch_down_pane_ParamLimits

0x57c1,	// (0x00041654) aid_postcard_touch_down_pane

0x57d7,	// (0x0004166a) aid_postcard_touch_up_pane_ParamLimits

0x57d7,	// (0x0004166a) aid_postcard_touch_up_pane

0x08e8,	// (0x0003c77b) main_blid2_pane

0xc32b,	// (0x000481be) popup_blid2_search_window

0x08e8,	// (0x0003c77b) blid2_gps_pane

0x08e8,	// (0x0003c77b) blid2_navig_pane

0x08e8,	// (0x0003c77b) blid2_search_pane

0x08e8,	// (0x0003c77b) blid2_tripm_pane

0xa520,	// (0x000463b3) blid2_search_pane_g1_ParamLimits

0xa520,	// (0x000463b3) blid2_search_pane_g1

0xa538,	// (0x000463cb) blid2_search_pane_t1_ParamLimits

0xa538,	// (0x000463cb) blid2_search_pane_t1

0xa54a,	// (0x000463dd) aid_size_cell_blid2_gps_ParamLimits

0xa54a,	// (0x000463dd) aid_size_cell_blid2_gps

0xa562,	// (0x000463f5) blid2_gps_pane_g1_ParamLimits

0xa562,	// (0x000463f5) blid2_gps_pane_g1

0xa576,	// (0x00046409) grid_blid2_satellite_pane_ParamLimits

0xa576,	// (0x00046409) grid_blid2_satellite_pane

0xa590,	// (0x00046423) blid2_navig_pane_g1_ParamLimits

0xa590,	// (0x00046423) blid2_navig_pane_g1

0xa59c,	// (0x0004642f) blid2_navig_pane_t1_ParamLimits

0xa59c,	// (0x0004642f) blid2_navig_pane_t1

0xa5b7,	// (0x0004644a) blid2_navig_pane_t2_ParamLimits

0xa5b7,	// (0x0004644a) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0004b9d6) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0004b9d6) blid2_navig_pane_t

0xa5d2,	// (0x00046465) blid2_navig_ring_pane_ParamLimits

0xa5d2,	// (0x00046465) blid2_navig_ring_pane

0xa5eb,	// (0x0004647e) blid2_speed_pane_ParamLimits

0xa5eb,	// (0x0004647e) blid2_speed_pane

0xa5f7,	// (0x0004648a) blid2_tripm_pane_g1_ParamLimits

0xa5f7,	// (0x0004648a) blid2_tripm_pane_g1

0xa612,	// (0x000464a5) blid2_tripm_pane_g2_ParamLimits

0xa612,	// (0x000464a5) blid2_tripm_pane_g2

0xa626,	// (0x000464b9) blid2_tripm_pane_g3_ParamLimits

0xa626,	// (0x000464b9) blid2_tripm_pane_g3

0xa63a,	// (0x000464cd) blid2_tripm_pane_g4_ParamLimits

0xa63a,	// (0x000464cd) blid2_tripm_pane_g4

0xa64e,	// (0x000464e1) blid2_tripm_pane_g5_ParamLimits

0xa64e,	// (0x000464e1) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0004b9db) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0004b9db) blid2_tripm_pane_g

0xa674,	// (0x00046507) blid2_tripm_pane_t1_ParamLimits

0xa674,	// (0x00046507) blid2_tripm_pane_t1

0xa68f,	// (0x00046522) blid2_tripm_pane_t2_ParamLimits

0xa68f,	// (0x00046522) blid2_tripm_pane_t2

0xa6aa,	// (0x0004653d) blid2_tripm_pane_t3_ParamLimits

0xa6aa,	// (0x0004653d) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0004b9e8) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0004b9e8) blid2_tripm_pane_t

0xa6f1,	// (0x00046584) cell_blid2_satellite_pane_ParamLimits

0xa6f1,	// (0x00046584) cell_blid2_satellite_pane

0xa70f,	// (0x000465a2) cell_blid2_satellite_pane_g1

0xd96c,	// (0x000497ff) cell_blid2_satellite_pane_t1

0xc825,	// (0x000486b8) blid2_speed_pane_g1

0xd97a,	// (0x0004980d) blid2_speed_pane_t1

0xd988,	// (0x0004981b) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0004b9f1) blid2_speed_pane_t

0xc825,	// (0x000486b8) blid2_navig_ring_pane_g1

0xa718,	// (0x000465ab) blid2_navig_ring_pane_g2

0xa720,	// (0x000465b3) blid2_navig_ring_pane_g3

0xa728,	// (0x000465bb) blid2_navig_ring_pane_g4

0xa730,	// (0x000465c3) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0004b9f6) blid2_navig_ring_pane_g

0x08e8,	// (0x0003c77b) bg_popup_window_pane_cp011

0xd996,	// (0x00049829) popup_blid2_search_window_g1

0xd99e,	// (0x00049831) popup_blid2_search_window_t1

0xd9ac,	// (0x0004983f) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0004ba01) popup_blid2_search_window_t

0x13d2,	// (0x0003d265) main_browser_pane_g1

0x10cb,	// (0x0003cf5e) main_browser_pane_ParamLimits

0x1c72,	// (0x0003db05) bg_button_pane_cp011_ParamLimits

0x98c9,	// (0x0004575c) cell_vitu2_function_pane_g1_ParamLimits

0x1c72,	// (0x0003db05) bg_popup_sub_pane_cp22_ParamLimits

0x2da3,	// (0x0003ec36) input_focus_pane_cp08_ParamLimits

0xa16f,	// (0x00046002) popup_vitu2_query_button_pane_ParamLimits

0xa16f,	// (0x00046002) popup_vitu2_query_button_pane

0x2d99,	// (0x0003ec2c) popup_vitu2_query_input_button_pane

0xd556,	// (0x000493e9) popup_vitu2_query_window_g1_ParamLimits

0x2db0,	// (0x0003ec43) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0004b908) popup_vitu2_query_window_g_ParamLimits

0x08e8,	// (0x0003c77b) bg_button_pane_cp026

0xa738,	// (0x000465cb) popup_vitu2_query_input_button_pane_g1

0x08e8,	// (0x0003c77b) bg_button_pane_cp025

0xd9ba,	// (0x0004984d) popup_vitu2_query_button_pane_t1

0x7f1c,	// (0x00043daf) main_mp3_pane_t6

0x7f2a,	// (0x00043dbd) popup_slider_window_cp01

0xf00f,	// (0x0004aea2) cam4_battery_pane

0xf01f,	// (0x0004aeb2) cam4_battery_pane_cp02

0xa4a0,	// (0x00046333) cam4_battery_pane_cp01

0xf083,	// (0x0004af16) cam4_battery_pane_cp03

0xc825,	// (0x000486b8) cam4_battery_pane_g1

0xd9c8,	// (0x0004985b) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0004ba06) cam4_battery_pane_g

0xc6ef,	// (0x00048582) popup_blid_sat_info2_window_t11

0x511e,	// (0x00040fb1) aid_size_touch_mv_arrow_left_ParamLimits

0x5147,	// (0x00040fda) aid_size_touch_mv_arrow_right_ParamLimits

0x1abb,	// (0x0003d94e) navi_pane_g1_ParamLimits

0x5170,	// (0x00041003) navi_pane_g2_ParamLimits

0x519e,	// (0x00041031) navi_pane_g3_ParamLimits

0xf44c,	// (0x0004b2df) navi_pane_g_ParamLimits

0x51f6,	// (0x00041089) navi_pane_mv_t1_ParamLimits

0x8adf,	// (0x00044972) grid_imed_effect_pane_ParamLimits

0x131b,	// (0x0003d1ae) aid_placing_vt_slider_lsc

0x1323,	// (0x0003d1b6) aid_placing_vt_slider_prt

0x1c72,	// (0x0003db05) bg_tb_trans_pane_cp01_ParamLimits

0xc9ac,	// (0x0004883f) popup_image_details_window_g1_ParamLimits

0xc9bf,	// (0x00048852) popup_image_details_window_g2_ParamLimits

0xc9d4,	// (0x00048867) popup_image_details_window_g3_ParamLimits

0xc9d4,	// (0x00048867) popup_image_details_window_g3

0xf77f,	// (0x0004b612) popup_image_details_window_g_ParamLimits

0xc9e8,	// (0x0004887b) popup_image_details_window_t1_ParamLimits

0xc9fa,	// (0x0004888d) popup_image_details_window_t2_ParamLimits

0xca13,	// (0x000488a6) popup_image_details_window_t3_ParamLimits

0xca27,	// (0x000488ba) popup_image_details_window_t4_ParamLimits

0xca42,	// (0x000488d5) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0004b619) popup_image_details_window_t_ParamLimits

0xa3a9,	// (0x0004623c) cl_header_name_pane_ParamLimits

0xa3a9,	// (0x0004623c) cl_header_name_pane

0xa740,	// (0x000465d3) cl_header_name_pane_t1_ParamLimits

0xa740,	// (0x000465d3) cl_header_name_pane_t1

0xa761,	// (0x000465f4) cl_header_name_pane_t2_ParamLimits

0xa761,	// (0x000465f4) cl_header_name_pane_t2

0xa7a3,	// (0x00046636) cl_header_name_pane_t3_ParamLimits

0xa7a3,	// (0x00046636) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0004ba0b) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0004ba0b) cl_header_name_pane_t

0x51c7,	// (0x0004105a) navi_pane_mv_g2_ParamLimits

0xd267,	// (0x000490fa) field_vitu2_entry_pane_g1_ParamLimits

0xd273,	// (0x00049106) field_vitu2_entry_pane_g2_ParamLimits

0xd27f,	// (0x00049112) field_vitu2_entry_pane_g3_ParamLimits

0xd27f,	// (0x00049112) field_vitu2_entry_pane_g3

0xf974,	// (0x0004b807) field_vitu2_entry_pane_g_ParamLimits

0x9845,	// (0x000456d8) cell_vitu2_itu_pane_g1_ParamLimits

0x9855,	// (0x000456e8) cell_vitu2_itu_pane_g2_ParamLimits

0x9855,	// (0x000456e8) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0004b813) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0004b813) cell_vitu2_itu_pane_g

0x1c72,	// (0x0003db05) bg_vkb2_func_pane_cp05_ParamLimits

0x1c72,	// (0x0003db05) bg_vkb2_func_pane_cp05

0x1c72,	// (0x0003db05) bg_vkb2_func_pane_cp03

0x1c72,	// (0x0003db05) bg_vkb2_func_pane_cp04

0x1c72,	// (0x0003db05) bg_vkb2_func_pane_cp10_ParamLimits

0x1c72,	// (0x0003db05) bg_vkb2_func_pane_cp10

0x2e59,	// (0x0003ecec) bg_vkb2_func_pane_cp08

0xa353,	// (0x000461e6) bg_vkb2_func_pane_cp06

0xa361,	// (0x000461f4) bg_vkb2_func_pane_cp07

0xd8c0,	// (0x00049753) bg_vkb2_func_pane_cp11_ParamLimits

0xd8c0,	// (0x00049753) bg_vkb2_func_pane_cp11

0xd8d5,	// (0x00049768) bg_vkb2_func_pane_cp12_ParamLimits

0xd8d5,	// (0x00049768) bg_vkb2_func_pane_cp12

0x08e8,	// (0x0003c77b) bg_vkb2_func_pane_cp09

0xd2bc,	// (0x0004914f) bg_vkb2_func_pane_g1

0x14e3,	// (0x0003d376) bg_vkb2_func_pane_g2

0xd2c4,	// (0x00049157) bg_vkb2_func_pane_g3

0xd2cc,	// (0x0004915f) bg_vkb2_func_pane_g4

0xd501,	// (0x00049394) bg_vkb2_func_pane_g5

0xd2e4,	// (0x00049177) bg_vkb2_func_pane_g6

0xd2ec,	// (0x0004917f) bg_vkb2_func_pane_g7

0xd2dc,	// (0x0004916f) bg_vkb2_func_pane_g8

0x14c3,	// (0x0003d356) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0004ba12) bg_vkb2_func_pane_g

0xa662,	// (0x000464f5) blid2_tripm_pane_g6_ParamLimits

0xa662,	// (0x000464f5) blid2_tripm_pane_g6

0xd0fb,	// (0x00048f8e) mp4_progress_pane_g1

0xa6dd,	// (0x00046570) blid2_tripm_values_pane_ParamLimits

0xa6dd,	// (0x00046570) blid2_tripm_values_pane

0xa7d4,	// (0x00046667) blid2_tripm_values_pane_t1

0xa7e2,	// (0x00046675) blid2_tripm_values_pane_t2

0xa7f0,	// (0x00046683) blid2_tripm_values_pane_t3

0xa7fe,	// (0x00046691) blid2_tripm_values_pane_t4

0xa80c,	// (0x0004669f) blid2_tripm_values_pane_t5

0xa81a,	// (0x000466ad) blid2_tripm_values_pane_t6

0xa828,	// (0x000466bb) blid2_tripm_values_pane_t7

0xa836,	// (0x000466c9) blid2_tripm_values_pane_t8

0xa844,	// (0x000466d7) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0004ba25) blid2_tripm_values_pane_t

0x4207,	// (0x0004009a) call_video_pane_t1_ParamLimits

0x421b,	// (0x000400ae) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0004b168) call_video_pane_t_ParamLimits

0x2b9c,	// (0x0003ea2f) msg_header_pane_g1_ParamLimits

0x5717,	// (0x000415aa) msg_header_pane_g2_ParamLimits

0x5717,	// (0x000415aa) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0004b382) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0004b382) msg_header_pane_g

0x10cb,	// (0x0003cf5e) main_clock2_pane_ParamLimits

0x8804,	// (0x00044697) grid_clock2_toolbar_pane_ParamLimits

0x8804,	// (0x00044697) grid_clock2_toolbar_pane

0x8804,	// (0x00044697) listscroll_clock2_pane_ParamLimits

0x8804,	// (0x00044697) listscroll_clock2_pane

0x88e1,	// (0x00044774) main_clock2_pane_t3_ParamLimits

0x88e1,	// (0x00044774) main_clock2_pane_t3

0x88fc,	// (0x0004478f) main_clock2_pane_t4_ParamLimits

0x88fc,	// (0x0004478f) main_clock2_pane_t4

0xd9d2,	// (0x00049865) cell_clock2_toolbar_pane

0xd9da,	// (0x0004986d) cell_clock2_toolbar_pane_cp01

0xd9da,	// (0x0004986d) cell_clock2_toolbar_pane_cp02

0xd9e2,	// (0x00049875) cell_clock2_toolbar_pane_cp03

0xd9ea,	// (0x0004987d) list_clock2_pane

0x1a0e,	// (0x0003d8a1) scroll_pane_cp10

0xd9f2,	// (0x00049885) list_single_clock2_pane_ParamLimits

0xd9f2,	// (0x00049885) list_single_clock2_pane

0x1b5b,	// (0x0003d9ee) list_highlight_pane_cp08

0xd9ff,	// (0x00049892) list_single_clock2_pane_t1

0xda0d,	// (0x000498a0) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0004ba38) list_single_clock2_pane_t

0x08e8,	// (0x0003c77b) bg_button_pane_cp10

0xda1b,	// (0x000498ae) cell_clock2_toolbar_pane_g1

0x573f,	// (0x000415d2) aid_main_viewer_pane_g1_ParamLimits

0x573f,	// (0x000415d2) aid_main_viewer_pane_g1

0x574d,	// (0x000415e0) aid_main_viewer_pane_g2_ParamLimits

0x574d,	// (0x000415e0) aid_main_viewer_pane_g2

0x575b,	// (0x000415ee) aid_main_viewer_pane_g3_ParamLimits

0x575b,	// (0x000415ee) aid_main_viewer_pane_g3

0x576a,	// (0x000415fd) aid_main_viewer_pane_g4_ParamLimits

0x576a,	// (0x000415fd) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0004b393) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0004b393) aid_main_viewer_pane_g

0x7143,	// (0x00042fd6) main_calc_pane_ParamLimits

0x7157,	// (0x00042fea) main_dialer2_pane_ParamLimits

0x08e8,	// (0x0003c77b) main_cam6_pane

0x08e8,	// (0x0003c77b) main_vid6_pane

0x8810,	// (0x000446a3) listscroll_gen_pane_cp06_ParamLimits

0x8810,	// (0x000446a3) listscroll_gen_pane_cp06

0x8917,	// (0x000447aa) main_clock2_pane_t5_ParamLimits

0x8917,	// (0x000447aa) main_clock2_pane_t5

0x8974,	// (0x00044807) aid_call2_pane_cp10_ParamLimits

0x8986,	// (0x00044819) aid_call_pane_cp10_ParamLimits

0x1a90,	// (0x0003d923) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1a90,	// (0x0003d923) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8998,	// (0x0004482b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8998,	// (0x0004482b) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1a90,	// (0x0003d923) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0004b6c9) popup_clock_analogue_window_cp10_g_ParamLimits

0x89aa,	// (0x0004483d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x903b,	// (0x00044ece) cell_dialer2_keypad_pane_g2_ParamLimits

0x903b,	// (0x00044ece) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0004b7af) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0004b7af) cell_dialer2_keypad_pane_g

0x9057,	// (0x00044eea) cell_dialer2_keypad_pane_t1

0x9be4,	// (0x00045a77) main_cset_text2_pane_ParamLimits

0x9be4,	// (0x00045a77) main_cset_text2_pane

0xd732,	// (0x000495c5) area_vitu2_query_pane_g1_ParamLimits

0x2e20,	// (0x0003ecb3) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0004b955) area_vitu2_query_pane_g_ParamLimits

0xd7b6,	// (0x00049649) area_vitu2_query_pane_t7_ParamLimits

0xd7b6,	// (0x00049649) area_vitu2_query_pane_t7

0xa353,	// (0x000461e6) bg_button_pane_cp018_ParamLimits

0xa361,	// (0x000461f4) bg_button_pane_cp021_ParamLimits

0x2e59,	// (0x0003ecec) bg_button_pane_cp022_ParamLimits

0x2e59,	// (0x0003ecec) bg_vkb2_func_pane_cp08_ParamLimits

0xa353,	// (0x000461e6) bg_vkb2_func_pane_cp06_ParamLimits

0xa361,	// (0x000461f4) bg_vkb2_func_pane_cp07_ParamLimits

0x2e6a,	// (0x0003ecfd) input_focus_pane_cp09_ParamLimits

0xf121,	// (0x0004afb4) cam6_autofocus_pane_ParamLimits

0xf121,	// (0x0004afb4) cam6_autofocus_pane

0xa852,	// (0x000466e5) cam6_image_uncrop_pane_ParamLimits

0xa852,	// (0x000466e5) cam6_image_uncrop_pane

0xa861,	// (0x000466f4) cam6_indi_pane_ParamLimits

0xa861,	// (0x000466f4) cam6_indi_pane

0xa877,	// (0x0004670a) cam6_mode_pane_ParamLimits

0xa877,	// (0x0004670a) cam6_mode_pane

0xa889,	// (0x0004671c) cam6_timer_pane_ParamLimits

0xa889,	// (0x0004671c) cam6_timer_pane

0xa895,	// (0x00046728) cam6_zoom_pane_ParamLimits

0xa895,	// (0x00046728) cam6_zoom_pane

0xa8a1,	// (0x00046734) cam6_mode_pane_g1_ParamLimits

0xa8a1,	// (0x00046734) cam6_mode_pane_g1

0xa8b1,	// (0x00046744) cam6_mode_pane_g2_ParamLimits

0xa8b1,	// (0x00046744) cam6_mode_pane_g2

0xa8c1,	// (0x00046754) cam6_mode_pane_g3_ParamLimits

0xa8c1,	// (0x00046754) cam6_mode_pane_g3

0xa8d1,	// (0x00046764) cam6_mode_pane_g4_ParamLimits

0xa8d1,	// (0x00046764) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0004ba3d) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0004ba3d) cam6_mode_pane_g

0xda23,	// (0x000498b6) bg_tb_trans_pane_cp08_ParamLimits

0xda23,	// (0x000498b6) bg_tb_trans_pane_cp08

0xda31,	// (0x000498c4) cam6_battery_pane_ParamLimits

0xda31,	// (0x000498c4) cam6_battery_pane

0xda47,	// (0x000498da) cam6_indi_pane_g1_ParamLimits

0xda47,	// (0x000498da) cam6_indi_pane_g1

0xda59,	// (0x000498ec) cam6_indi_pane_g2_ParamLimits

0xda59,	// (0x000498ec) cam6_indi_pane_g2

0xda6b,	// (0x000498fe) cam6_indi_pane_g3_ParamLimits

0xda6b,	// (0x000498fe) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0004ba46) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0004ba46) cam6_indi_pane_g

0xda7d,	// (0x00049910) cam6_indi_pane_t1_ParamLimits

0xda7d,	// (0x00049910) cam6_indi_pane_t1

0xa8e1,	// (0x00046774) cam6_autofocus_pane_g1

0xa8e9,	// (0x0004677c) cam6_autofocus_pane_g2

0xa8f1,	// (0x00046784) cam6_autofocus_pane_g3

0xa8f9,	// (0x0004678c) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0004ba4d) cam6_autofocus_pane_g

0xdaa3,	// (0x00049936) cam6_timer_pane_g1

0xdaab,	// (0x0004993e) cam6_timer_pane_t1

0xdab9,	// (0x0004994c) cam6_zoom_cont_pane

0xdac1,	// (0x00049954) cam6_zoom_pane_g1

0xdac9,	// (0x0004995c) cam6_zoom_pane_g2

0xa901,	// (0x00046794) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0004ba56) cam6_zoom_pane_g

0xc825,	// (0x000486b8) cam6_battery_pane_g1

0xc825,	// (0x000486b8) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0004b5d6) cam6_battery_pane_g

0xdad1,	// (0x00049964) cam6_zoom_cont_pane_g1

0xdada,	// (0x0004996d) cam6_zoom_cont_pane_g2

0xdae3,	// (0x00049976) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0004ba5d) cam6_zoom_cont_pane_g

0xa91e,	// (0x000467b1) cam6_mode_pane_cp_ParamLimits

0xa91e,	// (0x000467b1) cam6_mode_pane_cp

0xa895,	// (0x00046728) cam6_zoom_pane_cp_ParamLimits

0xa895,	// (0x00046728) cam6_zoom_pane_cp

0xa930,	// (0x000467c3) vid6_image_uncrop_cif_pane_ParamLimits

0xa930,	// (0x000467c3) vid6_image_uncrop_cif_pane

0xa940,	// (0x000467d3) vid6_image_uncrop_nhd_pane_ParamLimits

0xa940,	// (0x000467d3) vid6_image_uncrop_nhd_pane

0xa852,	// (0x000466e5) vid6_image_uncrop_vga_pane_ParamLimits

0xa852,	// (0x000466e5) vid6_image_uncrop_vga_pane

0xa94f,	// (0x000467e2) vid6_image_uncrop_wvga_pane_ParamLimits

0xa94f,	// (0x000467e2) vid6_image_uncrop_wvga_pane

0xa95e,	// (0x000467f1) vid6_indi_pane_ParamLimits

0xa95e,	// (0x000467f1) vid6_indi_pane

0xda23,	// (0x000498b6) bg_tb_trans_pane_cp09_ParamLimits

0xda23,	// (0x000498b6) bg_tb_trans_pane_cp09

0xdafb,	// (0x0004998e) cam6_battery_pane_cp_ParamLimits

0xdafb,	// (0x0004998e) cam6_battery_pane_cp

0xdb07,	// (0x0004999a) vid6_indi_pane_g1_ParamLimits

0xdb07,	// (0x0004999a) vid6_indi_pane_g1

0xdb19,	// (0x000499ac) vid6_indi_pane_g2_ParamLimits

0xdb19,	// (0x000499ac) vid6_indi_pane_g2

0xdb2b,	// (0x000499be) vid6_indi_pane_g3_ParamLimits

0xdb2b,	// (0x000499be) vid6_indi_pane_g3

0xdb40,	// (0x000499d3) vid6_indi_pane_g4_ParamLimits

0xdb40,	// (0x000499d3) vid6_indi_pane_g4

0xdb55,	// (0x000499e8) vid6_indi_pane_g5_ParamLimits

0xdb55,	// (0x000499e8) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0004ba64) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0004ba64) vid6_indi_pane_g

0xdb6f,	// (0x00049a02) vid6_indi_pane_t1_ParamLimits

0xdb6f,	// (0x00049a02) vid6_indi_pane_t1

0xdb85,	// (0x00049a18) vid6_indi_pane_t2_ParamLimits

0xdb85,	// (0x00049a18) vid6_indi_pane_t2

0xdbad,	// (0x00049a40) vid6_indi_pane_t3_ParamLimits

0xdbad,	// (0x00049a40) vid6_indi_pane_t3

0xdbd5,	// (0x00049a68) vid6_indi_pane_t4_ParamLimits

0xdbd5,	// (0x00049a68) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0004ba6f) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0004ba6f) vid6_indi_pane_t

0xdbf9,	// (0x00049a8c) wait_bar_pane_cp08

0xa976,	// (0x00046809) main_cset_text2_pane_t1_ParamLimits

0xa976,	// (0x00046809) main_cset_text2_pane_t1

0xa909,	// (0x0004679c) listscroll_gen_pane_cp06_t1_ParamLimits

0xa909,	// (0x0004679c) listscroll_gen_pane_cp06_t1

0x08e8,	// (0x0003c77b) main_cam6_set_pane

0xcb39,	// (0x000489cc) bg_tb_trans_pane_cp06_ParamLimits

0x94df,	// (0x00045372) cam4_indicators_pane_g1_ParamLimits

0x94ec,	// (0x0004537f) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0004b7e3) cam4_indicators_pane_g_ParamLimits

0x9504,	// (0x00045397) cam4_indicators_pane_t1_ParamLimits

0xd240,	// (0x000490d3) bg_tb_trans_pane_cp07_ParamLimits

0x94df,	// (0x00045372) vid4_indicators_pane_g1_ParamLimits

0x95e4,	// (0x00045477) vid4_indicators_pane_g2_ParamLimits

0x95f1,	// (0x00045484) vid4_indicators_pane_g3_ParamLimits

0x95fe,	// (0x00045491) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0004b7f5) vid4_indicators_pane_g_ParamLimits

0x960a,	// (0x0004549d) vid4_indicators_pane_t1_ParamLimits

0xf08b,	// (0x0004af1e) vid4_progress_pane_g1_ParamLimits

0xf097,	// (0x0004af2a) vid4_progress_pane_g2_ParamLimits

0xf0a3,	// (0x0004af36) vid4_progress_pane_g3_ParamLimits

0xf0b2,	// (0x0004af45) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0004b9a0) vid4_progress_pane_g_ParamLimits

0xf0d0,	// (0x0004af63) vid4_progress_pane_t1_ParamLimits

0xf0e6,	// (0x0004af79) vid4_progress_pane_t2_ParamLimits

0xf0fc,	// (0x0004af8f) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0004b9ab) vid4_progress_pane_t_ParamLimits

0xf111,	// (0x0004afa4) wait_bar_pane_cp07_ParamLimits

0xa996,	// (0x00046829) main_cam6_set_pane_g2_ParamLimits

0xa996,	// (0x00046829) main_cam6_set_pane_g2

0xa9ba,	// (0x0004684d) main_cset6_listscroll_pane_ParamLimits

0xa9ba,	// (0x0004684d) main_cset6_listscroll_pane

0xa9d6,	// (0x00046869) main_cset6_slider_pane_ParamLimits

0xa9d6,	// (0x00046869) main_cset6_slider_pane

0xa9ec,	// (0x0004687f) main_cset6_text2_pane_ParamLimits

0xa9ec,	// (0x0004687f) main_cset6_text2_pane

0xdc08,	// (0x00049a9b) main_cset6_text_pane

0xdc10,	// (0x00049aa3) main_cset_list_pane_copy1_ParamLimits

0xdc10,	// (0x00049aa3) main_cset_list_pane_copy1

0xdc20,	// (0x00049ab3) scroll_pane_cp028_copy1

0xa9fa,	// (0x0004688d) cset_list_set_pane_copy1

0xaa0d,	// (0x000468a0) aid_position_infowindow_above_copy1

0xaa15,	// (0x000468a8) aid_position_infowindow_below_copy1

0x2e7b,	// (0x0003ed0e) cset_list_set_pane_g1_copy1

0xdc29,	// (0x00049abc) cset_list_set_pane_g3_copy1_ParamLimits

0xdc29,	// (0x00049abc) cset_list_set_pane_g3_copy1

0x2d53,	// (0x0003ebe6) cset_list_set_pane_t1_copy1_ParamLimits

0x2d53,	// (0x0003ebe6) cset_list_set_pane_t1_copy1

0x1c72,	// (0x0003db05) list_highlight_pane_cp021_copy1_ParamLimits

0x1c72,	// (0x0003db05) list_highlight_pane_cp021_copy1

0xdc38,	// (0x00049acb) cset6_slider_pane_ParamLimits

0xdc38,	// (0x00049acb) cset6_slider_pane

0xdc64,	// (0x00049af7) main_cset6_slider_pane_g1_ParamLimits

0xdc64,	// (0x00049af7) main_cset6_slider_pane_g1

0xaa1d,	// (0x000468b0) main_cset6_slider_pane_g2_ParamLimits

0xaa1d,	// (0x000468b0) main_cset6_slider_pane_g2

0xd3eb,	// (0x0004927e) main_cset6_slider_pane_g3_ParamLimits

0xd3eb,	// (0x0004927e) main_cset6_slider_pane_g3

0x9ca9,	// (0x00045b3c) main_cset6_slider_pane_g4_ParamLimits

0x9ca9,	// (0x00045b3c) main_cset6_slider_pane_g4

0x9cf1,	// (0x00045b84) main_cset6_slider_pane_g5_ParamLimits

0x9cf1,	// (0x00045b84) main_cset6_slider_pane_g5

0xd3eb,	// (0x0004927e) main_cset6_slider_pane_g7_ParamLimits

0xd3eb,	// (0x0004927e) main_cset6_slider_pane_g7

0xd3f7,	// (0x0004928a) main_cset6_slider_pane_g8_ParamLimits

0xd3f7,	// (0x0004928a) main_cset6_slider_pane_g8

0x9c91,	// (0x00045b24) main_cset6_slider_pane_g9_ParamLimits

0x9c91,	// (0x00045b24) main_cset6_slider_pane_g9

0x9c9d,	// (0x00045b30) main_cset6_slider_pane_g10_ParamLimits

0x9c9d,	// (0x00045b30) main_cset6_slider_pane_g10

0x9ca9,	// (0x00045b3c) main_cset6_slider_pane_g11_ParamLimits

0x9ca9,	// (0x00045b3c) main_cset6_slider_pane_g11

0x9cb5,	// (0x00045b48) main_cset6_slider_pane_g12_ParamLimits

0x9cb5,	// (0x00045b48) main_cset6_slider_pane_g12

0x9cc1,	// (0x00045b54) main_cset6_slider_pane_g13_ParamLimits

0x9cc1,	// (0x00045b54) main_cset6_slider_pane_g13

0x9ccd,	// (0x00045b60) main_cset6_slider_pane_g14_ParamLimits

0x9ccd,	// (0x00045b60) main_cset6_slider_pane_g14

0xaa45,	// (0x000468d8) main_cset6_slider_pane_g15_ParamLimits

0xaa45,	// (0x000468d8) main_cset6_slider_pane_g15

0x9cf1,	// (0x00045b84) main_cset6_slider_pane_g16_ParamLimits

0x9cf1,	// (0x00045b84) main_cset6_slider_pane_g16

0x9cfd,	// (0x00045b90) main_cset6_slider_pane_g17_ParamLimits

0x9cfd,	// (0x00045b90) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0004ba78) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0004ba78) main_cset6_slider_pane_g

0xdc8c,	// (0x00049b1f) main_cset6_slider_pane_t1_ParamLimits

0xdc8c,	// (0x00049b1f) main_cset6_slider_pane_t1

0xaa5d,	// (0x000468f0) main_cset6_slider_pane_t2_ParamLimits

0xaa5d,	// (0x000468f0) main_cset6_slider_pane_t2

0xaa88,	// (0x0004691b) main_cset6_slider_pane_t3_ParamLimits

0xaa88,	// (0x0004691b) main_cset6_slider_pane_t3

0xaab3,	// (0x00046946) main_cset6_slider_pane_t4_ParamLimits

0xaab3,	// (0x00046946) main_cset6_slider_pane_t4

0xaade,	// (0x00046971) main_cset6_slider_pane_t5_ParamLimits

0xaade,	// (0x00046971) main_cset6_slider_pane_t5

0xdccd,	// (0x00049b60) main_cset6_slider_pane_t7_ParamLimits

0xdccd,	// (0x00049b60) main_cset6_slider_pane_t7

0xab09,	// (0x0004699c) main_cset6_slider_pane_t8_ParamLimits

0xab09,	// (0x0004699c) main_cset6_slider_pane_t8

0xab2d,	// (0x000469c0) main_cset6_slider_pane_t9_ParamLimits

0xab2d,	// (0x000469c0) main_cset6_slider_pane_t9

0xab51,	// (0x000469e4) main_cset6_slider_pane_t10_ParamLimits

0xab51,	// (0x000469e4) main_cset6_slider_pane_t10

0xab75,	// (0x00046a08) main_cset6_slider_pane_t11_ParamLimits

0xab75,	// (0x00046a08) main_cset6_slider_pane_t11

0xdd03,	// (0x00049b96) main_cset6_slider_pane_t14_ParamLimits

0xdd03,	// (0x00049b96) main_cset6_slider_pane_t14

0xdd3c,	// (0x00049bcf) main_cset6_slider_pane_t15_ParamLimits

0xdd3c,	// (0x00049bcf) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0004ba9d) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0004ba9d) main_cset6_slider_pane_t

0xd4af,	// (0x00049342) cset_slider_pane_g1_copy1

0xd4b8,	// (0x0004934b) cset_slider_pane_g2_copy1

0xd4c1,	// (0x00049354) cset_slider_pane_g3_copy1

0x08e8,	// (0x0003c77b) bg_popup_sub_pane_cp011_copy1

0xd562,	// (0x000493f5) main_cset_text_pane_g1_copy1

0xd56a,	// (0x000493fd) main_cset_text_pane_t1_copy1

0xd578,	// (0x0004940b) main_cset_text_pane_t2_copy1

0xd586,	// (0x00049419) main_cset_text_pane_t3_copy1

0xd594,	// (0x00049427) main_cset_text_pane_t4_copy1

0xd5a2,	// (0x00049435) main_cset_text_pane_t5_copy1

0xd5b0,	// (0x00049443) main_cset_text_pane_t6_copy1

0xd5be,	// (0x00049451) main_cset_text_pane_t7_copy1

0xa976,	// (0x00046809) main_cset_text2_pane_t1_copy1

0x08e8,	// (0x0003c77b) main_ncimui_pane

0x738d,	// (0x00043220) popup_query_ncimui_window_ParamLimits

0x738d,	// (0x00043220) popup_query_ncimui_window

0xcb2d,	// (0x000489c0) field_cale_ev2_pane_g4_ParamLimits

0xcb2d,	// (0x000489c0) field_cale_ev2_pane_g4

0x8f13,	// (0x00044da6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8f13,	// (0x00044da6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0004b78a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0004b78a) cell_video_dialer_keypad_pane_g

0x8f2b,	// (0x00044dbe) cell_video_dialer_keypad_pane_t1

0x08e8,	// (0x0003c77b) bg_popup_window_pane_cp012

0x18de,	// (0x0003d771) heading_pane_cp06

0xde64,	// (0x00049cf7) ncim_query_content_pane

0x08e8,	// (0x0003c77b) bg_popup_heading_pane_cp01

0xde6c,	// (0x00049cff) ncim_heading_pane_t1

0xde7a,	// (0x00049d0d) ncim_indicator_popup_pane

0xde8c,	// (0x00049d1f) ncim_query_button_pane

0xdea0,	// (0x00049d33) ncim_query_content_pane_t1

0xdeb2,	// (0x00049d45) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0004badc) ncim_query_content_pane_t

0xdeec,	// (0x00049d7f) ncim_query_list_pane

0xdefe,	// (0x00049d91) ncim_query_popup_pane

0xde7a,	// (0x00049d0d) ncim_indicator_popup_pane_ParamLimits

0xac5f,	// (0x00046af2) ncim_query_content_pane_g1_ParamLimits

0xac5f,	// (0x00046af2) ncim_query_content_pane_g1

0xdea0,	// (0x00049d33) ncim_query_content_pane_t1_ParamLimits

0xdeb2,	// (0x00049d45) ncim_query_content_pane_t2_ParamLimits

0xac6b,	// (0x00046afe) ncim_query_content_pane_t3_ParamLimits

0xac6b,	// (0x00046afe) ncim_query_content_pane_t3

0xac93,	// (0x00046b26) ncim_query_content_pane_t4_ParamLimits

0xac93,	// (0x00046b26) ncim_query_content_pane_t4

0xacbb,	// (0x00046b4e) ncim_query_content_pane_t5_ParamLimits

0xacbb,	// (0x00046b4e) ncim_query_content_pane_t5

0xdec4,	// (0x00049d57) ncim_query_content_pane_t6_ParamLimits

0xdec4,	// (0x00049d57) ncim_query_content_pane_t6

0xfc49,	// (0x0004badc) ncim_query_content_pane_t_ParamLimits

0xdeec,	// (0x00049d7f) ncim_query_list_pane_ParamLimits

0xdefe,	// (0x00049d91) ncim_query_popup_pane_ParamLimits

0xdf12,	// (0x00049da5) wait_bar_pane_cp04

0x08e8,	// (0x0003c77b) input_focus_pane_cp011

0xdf1a,	// (0x00049dad) ncim_query_popup_pane_t1

0xdf28,	// (0x00049dbb) ncim_list_query_list_pane_ParamLimits

0xdf28,	// (0x00049dbb) ncim_list_query_list_pane

0x08e8,	// (0x0003c77b) bg_button_pane_cp027

0xdf3b,	// (0x00049dce) ncim_query_button_pane_g1

0x08e8,	// (0x0003c77b) list_highlight_pane_cp012

0xdf45,	// (0x00049dd8) ncim_list_query_list_pane_g1

0xdf4d,	// (0x00049de0) ncim_list_query_list_pane_t1

0x94f8,	// (0x0004538b) cam4_indicators_pane_g3_ParamLimits

0x94f8,	// (0x0004538b) cam4_indicators_pane_g3

0x94f8,	// (0x0004538b) vid4_indicators_pane_g5_ParamLimits

0x94f8,	// (0x0004538b) vid4_indicators_pane_g5

0xf0c1,	// (0x0004af54) vid4_progress_pane_g5_ParamLimits

0xf0c1,	// (0x0004af54) vid4_progress_pane_g5

0xaba7,	// (0x00046a3a) main_ncimui_pane_g1

0xabed,	// (0x00046a80) ncimui_group_query_pane_ParamLimits

0xabed,	// (0x00046a80) ncimui_group_query_pane

0xac21,	// (0x00046ab4) ncimui_list_pane_ParamLimits

0xac21,	// (0x00046ab4) ncimui_list_pane

0xac3b,	// (0x00046ace) ncimui_text_pane_ParamLimits

0xac3b,	// (0x00046ace) ncimui_text_pane

0xace3,	// (0x00046b76) ncimui_text_pane_t1_ParamLimits

0xace3,	// (0x00046b76) ncimui_text_pane_t1

0xdf5b,	// (0x00049dee) ncimui_list_single_graphic_pane_ParamLimits

0xdf5b,	// (0x00049dee) ncimui_list_single_graphic_pane

0xad00,	// (0x00046b93) ncimui_query_pane_ParamLimits

0xad00,	// (0x00046b93) ncimui_query_pane

0x08e8,	// (0x0003c77b) list_highlight_pane_cp013

0xdf6b,	// (0x00049dfe) ncim_list_query_list_pane_t1_copy1

0xdf45,	// (0x00049dd8) ncim_list_single_graphic_pane_g1

0xdf79,	// (0x00049e0c) ncim_query_button_pane_cp01

0xdf81,	// (0x00049e14) ncim_query_entry_pane_ParamLimits

0xdf81,	// (0x00049e14) ncim_query_entry_pane

0xdf91,	// (0x00049e24) ncimui_query_pane_g1

0xdf99,	// (0x00049e2c) ncimui_query_pane_t1_ParamLimits

0xdf99,	// (0x00049e2c) ncimui_query_pane_t1

0x08e8,	// (0x0003c77b) input_focus_pane_cp012

0xdf1a,	// (0x00049dad) ncim_query_entry_pane_t1

0x10cb,	// (0x0003cf5e) main_im_pane_ParamLimits

0x1c72,	// (0x0003db05) main_mobtv_pane_ParamLimits

0x1c72,	// (0x0003db05) main_mobtv_pane

0x9c91,	// (0x00045b24) main_cset6_slider_pane_g18_ParamLimits

0x9c91,	// (0x00045b24) main_cset6_slider_pane_g18

0x9cc1,	// (0x00045b54) main_cset6_slider_pane_g19_ParamLimits

0x9cc1,	// (0x00045b54) main_cset6_slider_pane_g19

0xdfaf,	// (0x00049e42) bg_main_mobtv_pane_ParamLimits

0xdfaf,	// (0x00049e42) bg_main_mobtv_pane

0xad10,	// (0x00046ba3) main_mobtv_info_pane

0xad19,	// (0x00046bac) main_mobtv_loading_pane_ParamLimits

0xad19,	// (0x00046bac) main_mobtv_loading_pane

0xdfbd,	// (0x00049e50) main_mobtv_pg_channel_list_pane

0xdfc7,	// (0x00049e5a) main_mobtv_pg_hdr_pane

0xad26,	// (0x00046bb9) main_mobtv_programe_curr_pane_ParamLimits

0xad26,	// (0x00046bb9) main_mobtv_programe_curr_pane

0xad33,	// (0x00046bc6) main_mobtv_programe_next_pane_ParamLimits

0xad33,	// (0x00046bc6) main_mobtv_programe_next_pane

0xdfd0,	// (0x00049e63) popup_mobtv_noti_window

0xc825,	// (0x000486b8) main_tv_pg_hdr_pane_g1

0xdfd8,	// (0x00049e6b) main_tv_pg_hdr_pane_g2

0xdfe0,	// (0x00049e73) main_tv_pg_hdr_pane_g3

0xdfe8,	// (0x00049e7b) main_tv_pg_hdr_pane_g4

0xdff0,	// (0x00049e83) main_tv_pg_hdr_pane_g5

0xdffa,	// (0x00049e8d) main_tv_pg_hdr_pane_g6

0xe004,	// (0x00049e97) main_tv_pg_hdr_pane_g7

0xe00e,	// (0x00049ea1) main_tv_pg_hdr_pane_g8

0xe018,	// (0x00049eab) main_tv_pg_hdr_pane_g9

0xe022,	// (0x00049eb5) main_tv_pg_hdr_pane_g10

0xe02c,	// (0x00049ebf) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0004bae9) main_tv_pg_hdr_pane_g

0xe036,	// (0x00049ec9) main_tv_pg_hdr_pane_t1

0xe044,	// (0x00049ed7) main_tv_pg_hdr_pane_t2

0xe052,	// (0x00049ee5) main_tv_pg_hdr_pane_t3

0xe062,	// (0x00049ef5) main_tv_pg_hdr_pane_t4

0xe072,	// (0x00049f05) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0004bb00) main_tv_pg_hdr_pane_t

0xe082,	// (0x00049f15) single_mobtv_pg_channel_pane_ParamLimits

0xe082,	// (0x00049f15) single_mobtv_pg_channel_pane

0xe094,	// (0x00049f27) single_mobtv_pg_channel_table_pane

0xe09d,	// (0x00049f30) single_mobtv_pg_channel_thumb_pane

0xe0a6,	// (0x00049f39) single_tv_pg_channel_pane_g1

0xe0af,	// (0x00049f42) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0004bb0b) single_tv_pg_channel_pane_g

0xca8c,	// (0x0004891f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca8c,	// (0x0004891f) bg_single_mobtv_pg_channel_thumb_pane

0xe0b8,	// (0x00049f4b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0b8,	// (0x00049f4b) single_mobtv_pg_channel_thumb_pane_g1

0xe0c6,	// (0x00049f59) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0c6,	// (0x00049f59) single_mobtv_pg_channel_thumb_pane_g2

0xe0d2,	// (0x00049f65) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0d2,	// (0x00049f65) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0004bb10) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0004bb10) single_mobtv_pg_channel_thumb_pane_g

0xe0de,	// (0x00049f71) single_mobtv_pg_channel_thumb_pane_t1

0xe0ec,	// (0x00049f7f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0004bb17) single_mobtv_pg_channel_thumb_pane_t

0xc825,	// (0x000486b8) bg_single_mobtv_pg_channel_table_pane_g1

0xc825,	// (0x000486b8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0004b5d6) bg_single_mobtv_pg_channel_table_pane_g

0xe0fa,	// (0x00049f8d) single_mobtv_pg_channel_table_pane_t1

0xe108,	// (0x00049f9b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0004bb1c) single_mobtv_pg_channel_table_pane_t

0xad48,	// (0x00046bdb) main_mobtv_info_pane_g1_ParamLimits

0xad48,	// (0x00046bdb) main_mobtv_info_pane_g1

0xad66,	// (0x00046bf9) main_mobtv_info_pane_t1_ParamLimits

0xad66,	// (0x00046bf9) main_mobtv_info_pane_t1

0xadde,	// (0x00046c71) main_mobtv_info_pane_t2_ParamLimits

0xadde,	// (0x00046c71) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0004bb26) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0004bb26) main_mobtv_info_pane_t

0xae6d,	// (0x00046d00) wait_bar_pane_cp05

0xae7f,	// (0x00046d12) main_mobtv_loading_pane_g1_ParamLimits

0xae7f,	// (0x00046d12) main_mobtv_loading_pane_g1

0xae92,	// (0x00046d25) main_mobtv_loading_pane_g2_ParamLimits

0xae92,	// (0x00046d25) main_mobtv_loading_pane_g2

0xae9e,	// (0x00046d31) main_mobtv_loading_pane_g3_ParamLimits

0xae9e,	// (0x00046d31) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0004bb2d) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0004bb2d) main_mobtv_loading_pane_g

0xe116,	// (0x00049fa9) main_mobtv_loading_pane_t1_ParamLimits

0xe116,	// (0x00049fa9) main_mobtv_loading_pane_t1

0xe12e,	// (0x00049fc1) main_mobtv_loading_pane_t2_ParamLimits

0xe12e,	// (0x00049fc1) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0004bb34) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0004bb34) main_mobtv_loading_pane_t

0xaeb1,	// (0x00046d44) wait_bar_pane_cp06_ParamLimits

0xaeb1,	// (0x00046d44) wait_bar_pane_cp06

0xe152,	// (0x00049fe5) main_mobtv_programe_curr_pane_t1

0xe160,	// (0x00049ff3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0004bb39) main_mobtv_programe_curr_pane_t

0xe16e,	// (0x0004a001) main_mobtv_programe_next_pane_t1

0xe17c,	// (0x0004a00f) main_mobtv_programe_next_pane_t2

0xe18a,	// (0x0004a01d) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0004bb3e) main_mobtv_programe_next_pane_t

0x08e8,	// (0x0003c77b) bg_popup_mobtv_noti_window_pane

0xe198,	// (0x0004a02b) popup_mobtv_noti_window_g1

0xe1a0,	// (0x0004a033) popup_mobtv_noti_window_t1

0xe1ae,	// (0x0004a041) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0004bb45) popup_mobtv_noti_window_t

0xc825,	// (0x000486b8) bg_popup_mobtv_noti_window_pane_g1

0x08e8,	// (0x0003c77b) sc_clock_pane

0x08e8,	// (0x0003c77b) main_fs_bigclock_pane

0xa6c7,	// (0x0004655a) blid2_tripm_pane_t4_ParamLimits

0xa6c7,	// (0x0004655a) blid2_tripm_pane_t4

0xaec0,	// (0x00046d53) sc_clock_pane_g1_ParamLimits

0xaec0,	// (0x00046d53) sc_clock_pane_g1

0xaed2,	// (0x00046d65) sc_clock_pane_t1_ParamLimits

0xaed2,	// (0x00046d65) sc_clock_pane_t1

0xaef4,	// (0x00046d87) sc_clock_pane_t2_ParamLimits

0xaef4,	// (0x00046d87) sc_clock_pane_t2

0xaf0c,	// (0x00046d9f) sc_clock_pane_t3_ParamLimits

0xaf0c,	// (0x00046d9f) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0004bb4a) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0004bb4a) sc_clock_pane_t

0xb7b7,	// (0x0004764a) main_fs_bigclock_indicator_pane_ParamLimits

0xb7b7,	// (0x0004764a) main_fs_bigclock_indicator_pane

0xca5c,	// (0x000488ef) main_fs_bigclock_pane_g1_ParamLimits

0xca5c,	// (0x000488ef) main_fs_bigclock_pane_g1

0xb7c3,	// (0x00047656) main_fs_bigclock_pane_t1_ParamLimits

0xb7c3,	// (0x00047656) main_fs_bigclock_pane_t1

0xb7d5,	// (0x00047668) main_fs_bigclock_pane_t2_ParamLimits

0xb7d5,	// (0x00047668) main_fs_bigclock_pane_t2

0xb7e7,	// (0x0004767a) main_fs_bigclock_pane_t3_ParamLimits

0xb7e7,	// (0x0004767a) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0004bd49) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0004bd49) main_fs_bigclock_pane_t

0x00b7,	// (0x0003bf4a) main_fs_bigclock_indicator_pane_g1

0xde94,	// (0x00049d27) ncim_query_content_pane_g2_ParamLimits

0xde94,	// (0x00049d27) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0004bad7) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0004bad7) ncim_query_content_pane_g

0xaf23,	// (0x00046db6) sc_clock_pane_t4_ParamLimits

0xaf23,	// (0x00046db6) sc_clock_pane_t4

0x1c72,	// (0x0003db05) main_radioblah_pane

0xd1e2,	// (0x00049075) cell_call4_button_pane_t1_copy1_ParamLimits

0xd1e2,	// (0x00049075) cell_call4_button_pane_t1_copy1

0xabaf,	// (0x00046a42) main_ncimui_pane_t1_ParamLimits

0xabaf,	// (0x00046a42) main_ncimui_pane_t1

0xabc1,	// (0x00046a54) main_ncimui_pane_t2_ParamLimits

0xabc1,	// (0x00046a54) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0004bad0) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0004bad0) main_ncimui_pane_t

0xe2de,	// (0x0004a171) main_radioblah_anim_pane_ParamLimits

0xe2de,	// (0x0004a171) main_radioblah_anim_pane

0xe2ef,	// (0x0004a182) main_radioblah_info_pane_ParamLimits

0xe2ef,	// (0x0004a182) main_radioblah_info_pane

0xe303,	// (0x0004a196) main_radioblah_pane_t1_ParamLimits

0xe303,	// (0x0004a196) main_radioblah_pane_t1

0xe31f,	// (0x0004a1b2) main_radioblah_pane_t2_ParamLimits

0xe31f,	// (0x0004a1b2) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0004bb6b) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0004bb6b) main_radioblah_pane_t

0xafcc,	// (0x00046e5f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xafcc,	// (0x00046e5f) main_radioblah_rocker_ctrl_pane

0xe367,	// (0x0004a1fa) main_radioblah_info_pane_t1_ParamLimits

0xe367,	// (0x0004a1fa) main_radioblah_info_pane_t1

0xb024,	// (0x00046eb7) main_radioblah_info_pane_t2_ParamLimits

0xb024,	// (0x00046eb7) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0004bb74) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0004bb74) main_radioblah_info_pane_t

0xc825,	// (0x000486b8) main_radioblah_rocker_ctrl_pane_g1

0xb0d6,	// (0x00046f69) main_radioblah_rocker_ctrl_pane_g2

0xb0de,	// (0x00046f71) main_radioblah_rocker_ctrl_pane_g3

0xb0e6,	// (0x00046f79) main_radioblah_rocker_ctrl_pane_g4

0xb0ee,	// (0x00046f81) main_radioblah_rocker_ctrl_pane_g5

0xb0f6,	// (0x00046f89) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0004bb7d) main_radioblah_rocker_ctrl_pane_g

0xa976,	// (0x00046809) main_cset_text2_pane_t1_copy1_ParamLimits

0xf007,	// (0x0004ae9a) cam4_image_uncrop_qvga_pane

0xf017,	// (0x0004aeaa) vid4_image_uncrop_qcif_pane

0xf121,	// (0x0004afb4) cam6_image_uncrop_qvga_pane_ParamLimits

0xf121,	// (0x0004afb4) cam6_image_uncrop_qvga_pane

0xdaeb,	// (0x0004997e) vid6_image_uncrop_qcif_pane_ParamLimits

0xdaeb,	// (0x0004997e) vid6_image_uncrop_qcif_pane

0x08e8,	// (0x0003c77b) bg_popup_preview_window_pane_cp03

0xde46,	// (0x00049cd9) list_cset_text2_pane

0xde4e,	// (0x00049ce1) main_cset6_text2_pane_g1

0xde56,	// (0x00049ce9) main_cset6_text2_pane_t1

0xb0fe,	// (0x00046f91) list_cset_text2_pane_t1_ParamLimits

0xb0fe,	// (0x00046f91) list_cset_text2_pane_t1

0x1c72,	// (0x0003db05) main_radioblah_pane_ParamLimits

0xae59,	// (0x00046cec) main_mobtv_info_pane_t3_ParamLimits

0xae59,	// (0x00046cec) main_mobtv_info_pane_t3

0xafba,	// (0x00046e4d) main_radioblah_pane_g1

0xaff4,	// (0x00046e87) main_radioblah_info_pane_g1

0xb07b,	// (0x00046f0e) main_radioblah_info_pane_t3_ParamLimits

0xb07b,	// (0x00046f0e) main_radioblah_info_pane_t3

0x4c89,	// (0x00040b1c) highlight_cell_cale_month_pane_ParamLimits

0x4c89,	// (0x00040b1c) highlight_cell_cale_month_pane

0x08e8,	// (0x0003c77b) main_phob_fisheye_pane

0xcbb6,	// (0x00048a49) scroll_pane_cp0031_ParamLimits

0xcbb6,	// (0x00048a49) scroll_pane_cp0031

0xdbf9,	// (0x00049a8c) wait_bar_pane_cp08_ParamLimits

0xa9fa,	// (0x0004688d) cset_list_set_pane_copy1_ParamLimits

0xe3a1,	// (0x0004a234) highlight_cell_cale_month_pane_g1

0xb11b,	// (0x00046fae) highlight_cell_cale_month_pane_t1

0xd822,	// (0x000496b5) list_gen_pane_cp01

0xd3d6,	// (0x00049269) scroll_pane_01

0xb129,	// (0x00046fbc) list_single_double_fisheye_pane

0x2e83,	// (0x0003ed16) list_double_fisheye_pane_g1_ParamLimits

0x2e83,	// (0x0003ed16) list_double_fisheye_pane_g1

0x2e8f,	// (0x0003ed22) list_double_fisheye_pane_g2_ParamLimits

0x2e8f,	// (0x0003ed22) list_double_fisheye_pane_g2

0xb132,	// (0x00046fc5) list_double_fisheye_pane_g3_ParamLimits

0xb132,	// (0x00046fc5) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0004bb8a) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0004bb8a) list_double_fisheye_pane_g

0x2ec0,	// (0x0003ed53) list_double_fisheye_pane_t1_ParamLimits

0x2ec0,	// (0x0003ed53) list_double_fisheye_pane_t1

0x2edb,	// (0x0003ed6e) list_double_fisheye_pane_t2_ParamLimits

0x2edb,	// (0x0003ed6e) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0004bb95) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0004bb95) list_double_fisheye_pane_t

0x08e8,	// (0x0003c77b) main_call5_pane

0xaf4e,	// (0x00046de1) sc_swipe_pane_ParamLimits

0xaf4e,	// (0x00046de1) sc_swipe_pane

0xb151,	// (0x00046fe4) call5_image_pane_ParamLimits

0xb151,	// (0x00046fe4) call5_image_pane

0xb16e,	// (0x00047001) call5_swipe_1_pane_ParamLimits

0xb16e,	// (0x00047001) call5_swipe_1_pane

0xb181,	// (0x00047014) call5_swipe_2_pane_ParamLimits

0xb181,	// (0x00047014) call5_swipe_2_pane

0xb1ac,	// (0x0004703f) popup_call5_audio_first_window_ParamLimits

0xb1ac,	// (0x0004703f) popup_call5_audio_first_window

0xca8c,	// (0x0004891f) call5_swipe_1_pane_g1_ParamLimits

0xca8c,	// (0x0004891f) call5_swipe_1_pane_g1

0xe3a9,	// (0x0004a23c) call5_swipe_1_pane_g2_ParamLimits

0xe3a9,	// (0x0004a23c) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0004bb9a) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0004bb9a) call5_swipe_1_pane_g

0xe3b5,	// (0x0004a248) call5_swipe_1_pane_t1_ParamLimits

0xe3b5,	// (0x0004a248) call5_swipe_1_pane_t1

0xca8c,	// (0x0004891f) call5_swipe_2_pane_g1_ParamLimits

0xca8c,	// (0x0004891f) call5_swipe_2_pane_g1

0xe3ca,	// (0x0004a25d) call5_swipe_2_pane_g2_ParamLimits

0xe3ca,	// (0x0004a25d) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0004bb9f) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0004bb9f) call5_swipe_2_pane_g

0xe3d6,	// (0x0004a269) call5_swipe_2_pane_t1_ParamLimits

0xe3d6,	// (0x0004a269) call5_swipe_2_pane_t1

0xe3eb,	// (0x0004a27e) sc_swipe_pane_g1_ParamLimits

0xe3eb,	// (0x0004a27e) sc_swipe_pane_g1

0xe3f8,	// (0x0004a28b) sc_swipe_pane_g2_ParamLimits

0xe3f8,	// (0x0004a28b) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0004bba4) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0004bba4) sc_swipe_pane_g

0xe404,	// (0x0004a297) sc_swipe_pane_t1_ParamLimits

0xe404,	// (0x0004a297) sc_swipe_pane_t1

0x08e8,	// (0x0003c77b) main_cmail_launcher_pane

0xb1bd,	// (0x00047050) aid_size_cell_cmail_l_ParamLimits

0xb1bd,	// (0x00047050) aid_size_cell_cmail_l

0xb1d7,	// (0x0004706a) grid_cmail_l_pane_ParamLimits

0xb1d7,	// (0x0004706a) grid_cmail_l_pane

0xb1f2,	// (0x00047085) cell_cmail_l_pane_ParamLimits

0xb1f2,	// (0x00047085) cell_cmail_l_pane

0xb218,	// (0x000470ab) cell_cmail_l_pane_g1_ParamLimits

0xb218,	// (0x000470ab) cell_cmail_l_pane_g1

0xb224,	// (0x000470b7) cell_cmail_l_pane_t1_ParamLimits

0xb224,	// (0x000470b7) cell_cmail_l_pane_t1

0xe419,	// (0x0004a2ac) cell_cmail_l_pane_t2_ParamLimits

0xe419,	// (0x0004a2ac) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0004bba9) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0004bba9) cell_cmail_l_pane_t

0x1c72,	// (0x0003db05) grid_highlight_pane_cp018_ParamLimits

0x1c72,	// (0x0003db05) grid_highlight_pane_cp018

0x34e0,	// (0x0003f373) main2_pane_ParamLimits

0x34e0,	// (0x0003f373) main2_pane

0x1176,	// (0x0003d009) popup_sp_fs_action_menu_bg_pane_g1

0x117e,	// (0x0003d011) popup_sp_fs_action_menu_bg_pane_g2

0x1186,	// (0x0003d019) popup_sp_fs_action_menu_bg_pane_g3

0x118e,	// (0x0003d021) popup_sp_fs_action_menu_bg_pane_g4

0x1196,	// (0x0003d029) popup_sp_fs_action_menu_bg_pane_g5

0x119e,	// (0x0003d031) popup_sp_fs_action_menu_bg_pane_g6

0x11a6,	// (0x0003d039) popup_sp_fs_action_menu_bg_pane_g7

0x11ae,	// (0x0003d041) popup_sp_fs_action_menu_bg_pane_g8

0x11b6,	// (0x0003d049) popup_sp_fs_action_menu_bg_pane_g9

0x11be,	// (0x0003d051) popup_sp_fs_action_menu_bg_pane_g10

0x11be,	// (0x0003d051) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0004b082) popup_sp_fs_action_menu_bg_pane_g

0xbf42,	// (0x00047dd5) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x2_t3_g3_g1

0xbf4e,	// (0x00047de1) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbf4e,	// (0x00047de1) list_medium_line_x2_t3_g3_g2

0xbf5a,	// (0x00047ded) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbf5a,	// (0x00047ded) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0004b132) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0004b132) list_medium_line_x2_t3_g3_g

0xbf66,	// (0x00047df9) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbf66,	// (0x00047df9) list_medium_line_x2_t3_g3_t1

0x2ad2,	// (0x0003e965) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2ad2,	// (0x0003e965) list_medium_line_x2_t3_g3_t2

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0004b139) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0004b139) list_medium_line_x2_t3_g3_t

0xbf42,	// (0x00047dd5) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x2_t3_g2_g1

0xbf5a,	// (0x00047ded) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbf5a,	// (0x00047ded) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0004b140) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0004b140) list_medium_line_x2_t3_g2_g

0xbf90,	// (0x00047e23) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbf90,	// (0x00047e23) list_medium_line_x2_t3_g2_t1

0xbfa6,	// (0x00047e39) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbfa6,	// (0x00047e39) list_medium_line_x2_t3_g2_t2

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0004b145) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0004b145) list_medium_line_x2_t3_g2_t

0xbf42,	// (0x00047dd5) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x2_t4_g4_g1

0xbfb8,	// (0x00047e4b) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbfb8,	// (0x00047e4b) list_medium_line_x2_t4_g4_g2

0xbf4e,	// (0x00047de1) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbf4e,	// (0x00047de1) list_medium_line_x2_t4_g4_g3

0xbfc4,	// (0x00047e57) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbfc4,	// (0x00047e57) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0004b14c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0004b14c) list_medium_line_x2_t4_g4_g

0x2ae6,	// (0x0003e979) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2ae6,	// (0x0003e979) list_medium_line_x2_t4_g4_t1

0x2b00,	// (0x0003e993) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2b00,	// (0x0003e993) list_medium_line_x2_t4_g4_t2

0x2b15,	// (0x0003e9a8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2b15,	// (0x0003e9a8) list_medium_line_x2_t4_g4_t3

0xbfd0,	// (0x00047e63) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbfd0,	// (0x00047e63) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0004b155) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0004b155) list_medium_line_x2_t4_g4_t

0xbf42,	// (0x00047dd5) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x2_t2_g4_g1

0xbfb8,	// (0x00047e4b) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbfb8,	// (0x00047e4b) list_medium_line_x2_t2_g4_g2

0xbf4e,	// (0x00047de1) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbf4e,	// (0x00047de1) list_medium_line_x2_t2_g4_g3

0xbf5a,	// (0x00047ded) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbf5a,	// (0x00047ded) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0004b1bc) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0004b1bc) list_medium_line_x2_t2_g4_g

0xbfe2,	// (0x00047e75) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbfe2,	// (0x00047e75) list_medium_line_x2_t2_g4_t1

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0004b1c5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0004b1c5) list_medium_line_x2_t2_g4_t

0xbf42,	// (0x00047dd5) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x2_t2_g3_g1

0xbf4e,	// (0x00047de1) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbf4e,	// (0x00047de1) list_medium_line_x2_t2_g3_g2

0xbf5a,	// (0x00047ded) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbf5a,	// (0x00047ded) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0004b132) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0004b132) list_medium_line_x2_t2_g3_g

0xbff7,	// (0x00047e8a) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbff7,	// (0x00047e8a) list_medium_line_x2_t2_g3_t1

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0004b1ca) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0004b1ca) list_medium_line_x2_t2_g3_t

0x4e7b,	// (0x00040d0e) main_sp_fs_list_pane_ParamLimits

0x4e7b,	// (0x00040d0e) main_sp_fs_list_pane

0x4e87,	// (0x00040d1a) sp_fs_scroll_pane_ParamLimits

0x4e87,	// (0x00040d1a) sp_fs_scroll_pane

0x2b2a,	// (0x0003e9bd) list_medium_line_x2_t3_t1

0x2b3a,	// (0x0003e9cd) list_medium_line_x2_t3_t2

0xc03a,	// (0x00047ecd) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0004b215) list_medium_line_x2_t3_t

0x2b48,	// (0x0003e9db) list_medium_line_x3_t4_t1

0x2b58,	// (0x0003e9eb) list_medium_line_x3_t4_t2

0xc048,	// (0x00047edb) list_medium_line_x3_t4_t3

0xc03a,	// (0x00047ecd) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0004b21c) list_medium_line_x3_t4_t

0x2b66,	// (0x0003e9f9) list_medium_line_x4_t5_t1

0x2b76,	// (0x0003ea09) list_medium_line_x4_t5_t2

0xc048,	// (0x00047edb) list_medium_line_x4_t5_t3

0xc056,	// (0x00047ee9) list_medium_line_x4_t5_t4

0xc03a,	// (0x00047ecd) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0004b225) list_medium_line_x4_t5_t

0xbf42,	// (0x00047dd5) list_medium_line_t4_g4_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_t4_g4_g1

0xbfc4,	// (0x00047e57) list_medium_line_t4_g4_g2_ParamLimits

0xbfc4,	// (0x00047e57) list_medium_line_t4_g4_g2

0xc064,	// (0x00047ef7) list_medium_line_t4_g4_g3_ParamLimits

0xc064,	// (0x00047ef7) list_medium_line_t4_g4_g3

0xbf5a,	// (0x00047ded) list_medium_line_t4_g4_g4_ParamLimits

0xbf5a,	// (0x00047ded) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0004b230) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0004b230) list_medium_line_t4_g4_g

0xc070,	// (0x00047f03) list_medium_line_t4_g4_t1_ParamLimits

0xc070,	// (0x00047f03) list_medium_line_t4_g4_t1

0xc085,	// (0x00047f18) list_medium_line_t4_g4_t2_ParamLimits

0xc085,	// (0x00047f18) list_medium_line_t4_g4_t2

0xc09a,	// (0x00047f2d) list_medium_line_t4_g4_t3_ParamLimits

0xc09a,	// (0x00047f2d) list_medium_line_t4_g4_t3

0xbf7b,	// (0x00047e0e) list_medium_line_t4_g4_t4_ParamLimits

0xbf7b,	// (0x00047e0e) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0004b239) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0004b239) list_medium_line_t4_g4_t

0x4f31,	// (0x00040dc4) chi_dic_find_pane_g1

0x716b,	// (0x00042ffe) main_tport_pane

0xd4f3,	// (0x00049386) list_medium_line_plain_t1

0xd509,	// (0x0004939c) list_medium_line_t2_g2_g1_ParamLimits

0xd509,	// (0x0004939c) list_medium_line_t2_g2_g1

0xd515,	// (0x000493a8) list_medium_line_t2_g2_g2_ParamLimits

0xd515,	// (0x000493a8) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0004b8ec) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0004b8ec) list_medium_line_t2_g2_g

0x2d68,	// (0x0003ebfb) list_medium_line_t2_g2_t1_ParamLimits

0x2d68,	// (0x0003ebfb) list_medium_line_t2_g2_t1

0x2d82,	// (0x0003ec15) list_medium_line_t2_g2_t2_ParamLimits

0x2d82,	// (0x0003ec15) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0004b8f1) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0004b8f1) list_medium_line_t2_g2_t

0xd82b,	// (0x000496be) aid_sp_fs_list_icon_a_sm

0xd833,	// (0x000496c6) aid_sp_fs_list_icon_d

0xd83b,	// (0x000496ce) aid_sp_fs_text_primary

0xd844,	// (0x000496d7) aid_sp_fs_text_secondary

0xd84d,	// (0x000496e0) list_medium_line

0xd84d,	// (0x000496e0) list_medium_line_g2

0xd84d,	// (0x000496e0) list_medium_line_g3

0xd84d,	// (0x000496e0) list_medium_line_plain

0xd84d,	// (0x000496e0) list_medium_line_plain_t2

0xd84d,	// (0x000496e0) list_medium_line_plain_t3

0xd84d,	// (0x000496e0) list_medium_line_right_icon

0xd84d,	// (0x000496e0) list_medium_line_right_iconx2

0xd84d,	// (0x000496e0) list_medium_line_t2

0xd84d,	// (0x000496e0) list_medium_line_t2_g2

0xd84d,	// (0x000496e0) list_medium_line_t2_g3

0xd84d,	// (0x000496e0) list_medium_line_t2_right_icon

0xd84d,	// (0x000496e0) list_medium_line_t2_right_iconx2

0xd84d,	// (0x000496e0) list_medium_line_t3

0xd84d,	// (0x000496e0) list_medium_line_t3_g2

0xd84d,	// (0x000496e0) list_medium_line_t3_g3

0xd84d,	// (0x000496e0) list_medium_line_t3_right_iconx2

0xd856,	// (0x000496e9) list_medium_line_t4_g4

0xd85f,	// (0x000496f2) list_medium_line_x2

0xd85f,	// (0x000496f2) list_medium_line_x2_t2_g2

0xd85f,	// (0x000496f2) list_medium_line_x2_t2_g3

0xd85f,	// (0x000496f2) list_medium_line_x2_t2_g4

0xd85f,	// (0x000496f2) list_medium_line_x2_t3

0xd85f,	// (0x000496f2) list_medium_line_x2_t3_g2

0xd85f,	// (0x000496f2) list_medium_line_x2_t3_g3

0xd85f,	// (0x000496f2) list_medium_line_x2_t3_g4

0xd85f,	// (0x000496f2) list_medium_line_x2_t4_g2

0xd85f,	// (0x000496f2) list_medium_line_x2_t4_g4

0xd868,	// (0x000496fb) list_medium_line_x3

0xd868,	// (0x000496fb) list_medium_line_x3_t4

0xd868,	// (0x000496fb) list_medium_line_x3_t4_g4

0xd856,	// (0x000496e9) list_medium_line_x4_t4

0xd856,	// (0x000496e9) list_medium_line_x4_t4_g7

0xd856,	// (0x000496e9) list_medium_line_x4_t5

0xd871,	// (0x00049704) list_single_fs_dyc_pane_ParamLimits

0xd871,	// (0x00049704) list_single_fs_dyc_pane

0xbf42,	// (0x00047dd5) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x4_t4_g7_g1

0xdd75,	// (0x00049c08) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdd75,	// (0x00049c08) list_medium_line_x4_t4_g7_g2

0xdd81,	// (0x00049c14) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdd81,	// (0x00049c14) list_medium_line_x4_t4_g7_g3

0xdd90,	// (0x00049c23) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdd90,	// (0x00049c23) list_medium_line_x4_t4_g7_g4

0xdd9c,	// (0x00049c2f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdd9c,	// (0x00049c2f) list_medium_line_x4_t4_g7_g5

0xddab,	// (0x00049c3e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xddab,	// (0x00049c3e) list_medium_line_x4_t4_g7_g6

0xddba,	// (0x00049c4d) list_medium_line_x4_t4_g7_g7_ParamLimits

0xddba,	// (0x00049c4d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0004bab6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0004bab6) list_medium_line_x4_t4_g7_g

0xddc6,	// (0x00049c59) list_medium_line_x4_t4_g7_t1_ParamLimits

0xddc6,	// (0x00049c59) list_medium_line_x4_t4_g7_t1

0xdddb,	// (0x00049c6e) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdddb,	// (0x00049c6e) list_medium_line_x4_t4_g7_t2

0xddf0,	// (0x00049c83) list_medium_line_x4_t4_g7_t3_ParamLimits

0xddf0,	// (0x00049c83) list_medium_line_x4_t4_g7_t3

0xde05,	// (0x00049c98) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde05,	// (0x00049c98) list_medium_line_x4_t4_g7_t4

0xde17,	// (0x00049caa) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde17,	// (0x00049caa) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0004bac5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0004bac5) list_medium_line_x4_t4_g7_t

0xde29,	// (0x00049cbc) list_single_dyc_row_pane_ParamLimits

0xde29,	// (0x00049cbc) list_single_dyc_row_pane

0xb13e,	// (0x00046fd1) call5_gesture_pane_ParamLimits

0xb13e,	// (0x00046fd1) call5_gesture_pane

0xb194,	// (0x00047027) call5_windows_pane_ParamLimits

0xb194,	// (0x00047027) call5_windows_pane

0xb23a,	// (0x000470cd) call5_swipe_1_pane_cp_ParamLimits

0xb23a,	// (0x000470cd) call5_swipe_1_pane_cp

0xb246,	// (0x000470d9) call5_swipe_2_pane_cp_ParamLimits

0xb246,	// (0x000470d9) call5_swipe_2_pane_cp

0x1b5b,	// (0x0003d9ee) call5_image_pane_cp

0xb252,	// (0x000470e5) popup_call5_audio_first_window_cp_ParamLimits

0xb252,	// (0x000470e5) popup_call5_audio_first_window_cp

0xe3eb,	// (0x0004a27e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3eb,	// (0x0004a27e) call5_swipe_1_pane_g1_cp

0xe42b,	// (0x0004a2be) call5_swipe_1_pane_g2_cp

0xe404,	// (0x0004a297) call5_swipe_1_pane_t1_cp_ParamLimits

0xe404,	// (0x0004a297) call5_swipe_1_pane_t1_cp

0xe3eb,	// (0x0004a27e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3eb,	// (0x0004a27e) call5_swipe_2_pane_g1_cp

0xe433,	// (0x0004a2c6) call5_swipe_2_pane_g2_cp

0xe43b,	// (0x0004a2ce) call5_swipe_2_pane_t1_cp_ParamLimits

0xe43b,	// (0x0004a2ce) call5_swipe_2_pane_t1_cp

0x1c72,	// (0x0003db05) main_sp_fs_email_pane

0xe450,	// (0x0004a2e3) main_sp_fs_listscroll_pane_te

0xe459,	// (0x0004a2ec) popup_sp_fs_action_menu_pane_ParamLimits

0xe459,	// (0x0004a2ec) popup_sp_fs_action_menu_pane

0xc825,	// (0x000486b8) bg_sp_fs_ctrlbar_pane_g1

0xe499,	// (0x0004a32c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4a2,	// (0x0004a335) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe4ab,	// (0x0004a33e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc825,	// (0x000486b8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0004bbae) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc608,	// (0x0004849b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc608,	// (0x0004849b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe4b4,	// (0x0004a347) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe4b4,	// (0x0004a347) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4c0,	// (0x0004a353) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe4c0,	// (0x0004a353) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0004bbb7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0004bbb7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe4cc,	// (0x0004a35f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe4cc,	// (0x0004a35f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe4e6,	// (0x0004a379) list_medium_line_t2_right_icon_g1

0x2efd,	// (0x0003ed90) list_medium_line_t2_right_icon_t1

0x2f0d,	// (0x0003eda0) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0004bbbc) list_medium_line_t2_right_icon_t

0xc31d,	// (0x000481b0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc31d,	// (0x000481b0) bg_sp_fs_ctrlbar_pane

0xb2a6,	// (0x00047139) main_sp_fs_ctrlbar_button_pane_cp01

0xb2ae,	// (0x00047141) main_sp_fs_ctrlbar_ddmenu_pane

0x1c80,	// (0x0003db13) main_sp_fs_ctrlbar_pane_g1

0xe526,	// (0x0004a3b9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0004bbc1) main_sp_fs_ctrlbar_pane_g

0xe532,	// (0x0004a3c5) main_sp_fs_ctrlbar_pane_t1

0x2f1d,	// (0x0003edb0) main_sp_fs_ctrlbar_pane

0x2f41,	// (0x0003edd4) main_sp_fs_listscroll_pane_te_cp01

0x2f61,	// (0x0003edf4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2f61,	// (0x0003edf4) popup_sp_fs_action_menu_pane_cp01

0x1c72,	// (0x0003db05) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1c72,	// (0x0003db05) bg_sp_fs_highlight_list_pane_cp01

0xe547,	// (0x0004a3da) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe547,	// (0x0004a3da) sp_fs_action_menu_list_gene_pane_g1

0xe556,	// (0x0004a3e9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe556,	// (0x0004a3e9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0004bbc6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0004bbc6) sp_fs_action_menu_list_gene_pane_g

0xe563,	// (0x0004a3f6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe563,	// (0x0004a3f6) sp_fs_action_menu_list_gene_pane_t1

0xe57b,	// (0x0004a40e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe57b,	// (0x0004a40e) sp_fs_action_menu_list_gene_pane

0xe598,	// (0x0004a42b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe598,	// (0x0004a42b) popup_sp_fs_action_menu_bg_pane

0xe5a6,	// (0x0004a439) sp_fs_action_menu_list_pane_ParamLimits

0xe5a6,	// (0x0004a439) sp_fs_action_menu_list_pane

0xe5c4,	// (0x0004a457) sp_fs_scroll_pane_cp01_ParamLimits

0xe5c4,	// (0x0004a457) sp_fs_scroll_pane_cp01

0x2f7b,	// (0x0003ee0e) list_medium_line_plain_t2_t1

0x2f8b,	// (0x0003ee1e) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0004bbcb) list_medium_line_plain_t2_t

0x2f9b,	// (0x0003ee2e) list_medium_line_plain_t3_t1

0x2fab,	// (0x0003ee3e) list_medium_line_plain_t3_t2

0x2fb9,	// (0x0003ee4c) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0004bbd0) list_medium_line_plain_t3_t

0xbf42,	// (0x00047dd5) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x2_t2_g2_g1

0xbf5a,	// (0x00047ded) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbf5a,	// (0x00047ded) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0004b140) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0004b140) list_medium_line_x2_t2_g2_g

0xc070,	// (0x00047f03) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc070,	// (0x00047f03) list_medium_line_x2_t2_g2_t1

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0004bbd7) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0004bbd7) list_medium_line_x2_t2_g2_t

0xbf42,	// (0x00047dd5) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x2_t4_g2_g1

0xe5ea,	// (0x0004a47d) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe5ea,	// (0x0004a47d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0004bbdc) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0004bbdc) list_medium_line_x2_t4_g2_g

0x2fc7,	// (0x0003ee5a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2fc7,	// (0x0003ee5a) list_medium_line_x2_t4_g2_t1

0x2fde,	// (0x0003ee71) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2fde,	// (0x0003ee71) list_medium_line_x2_t4_g2_t2

0x2ff3,	// (0x0003ee86) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2ff3,	// (0x0003ee86) list_medium_line_x2_t4_g2_t3

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0004bbe1) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0004bbe1) list_medium_line_x2_t4_g2_t

0xe5fc,	// (0x0004a48f) list_medium_line_t3_right_iconx2_g1

0xe4e6,	// (0x0004a379) list_medium_line_t3_right_iconx2_g2

0x3005,	// (0x0003ee98) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0004bbea) list_medium_line_t3_right_iconx2_g

0x300f,	// (0x0003eea2) list_medium_line_t3_right_iconx2_t1

0x301f,	// (0x0003eeb2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0004bbf1) list_medium_line_t3_right_iconx2_t

0xbf42,	// (0x00047dd5) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x3_t4_g4_g1

0xbf4e,	// (0x00047de1) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbf4e,	// (0x00047de1) list_medium_line_x3_t4_g4_g2

0xbfc4,	// (0x00047e57) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbfc4,	// (0x00047e57) list_medium_line_x3_t4_g4_g3

0xe604,	// (0x0004a497) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe604,	// (0x0004a497) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0004bbf6) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0004bbf6) list_medium_line_x3_t4_g4_g

0x302d,	// (0x0003eec0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x302d,	// (0x0003eec0) list_medium_line_x3_t4_g4_t1

0x3044,	// (0x0003eed7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3044,	// (0x0003eed7) list_medium_line_x3_t4_g4_t2

0xc085,	// (0x00047f18) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc085,	// (0x00047f18) list_medium_line_x3_t4_g4_t3

0xe610,	// (0x0004a4a3) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe610,	// (0x0004a4a3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0004bbff) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0004bbff) list_medium_line_x3_t4_g4_t

0x305d,	// (0x0003eef0) list_single_dyc_row_text_pane_t1_ParamLimits

0x305d,	// (0x0003eef0) list_single_dyc_row_text_pane_t1

0x30a6,	// (0x0003ef39) list_single_dyc_row_text_pane_t2_ParamLimits

0x30a6,	// (0x0003ef39) list_single_dyc_row_text_pane_t2

0xe62d,	// (0x0004a4c0) list_single_dyc_row_text_pane_t3_ParamLimits

0xe62d,	// (0x0004a4c0) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0004bc08) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0004bc08) list_single_dyc_row_text_pane_t

0xe63f,	// (0x0004a4d2) list_single_dyc_row_pane_g1_ParamLimits

0xe63f,	// (0x0004a4d2) list_single_dyc_row_pane_g1

0xe64b,	// (0x0004a4de) list_single_dyc_row_pane_g2_ParamLimits

0xe64b,	// (0x0004a4de) list_single_dyc_row_pane_g2

0xe657,	// (0x0004a4ea) list_single_dyc_row_pane_g3_ParamLimits

0xe657,	// (0x0004a4ea) list_single_dyc_row_pane_g3

0xe663,	// (0x0004a4f6) list_single_dyc_row_pane_g4_ParamLimits

0xe663,	// (0x0004a4f6) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0004bc0f) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0004bc0f) list_single_dyc_row_pane_g

0xe66f,	// (0x0004a502) list_single_dyc_row_text_pane_ParamLimits

0xe66f,	// (0x0004a502) list_single_dyc_row_text_pane

0x08e8,	// (0x0003c77b) bg_sp_fs_scroll_pane

0xe68e,	// (0x0004a521) thumb_sp_fs_scroll_pane

0xd509,	// (0x0004939c) list_medium_line_g1_ParamLimits

0xd509,	// (0x0004939c) list_medium_line_g1

0xe697,	// (0x0004a52a) list_medium_line_t1_ParamLimits

0xe697,	// (0x0004a52a) list_medium_line_t1

0xbf42,	// (0x00047dd5) list_medium_line_x2_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x2_g1

0xbf4e,	// (0x00047de1) list_medium_line_x2_g2_ParamLimits

0xbf4e,	// (0x00047de1) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0004bc18) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0004bc18) list_medium_line_x2_g

0xe6ac,	// (0x0004a53f) list_medium_line_x2_t1_ParamLimits

0xe6ac,	// (0x0004a53f) list_medium_line_x2_t1

0xbf42,	// (0x00047dd5) list_medium_line_x3_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x3_g1

0xbf4e,	// (0x00047de1) list_medium_line_x3_g2_ParamLimits

0xbf4e,	// (0x00047de1) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0004bc18) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0004bc18) list_medium_line_x3_g

0xe6ac,	// (0x0004a53f) list_medium_line_x3_t1_ParamLimits

0xe6ac,	// (0x0004a53f) list_medium_line_x3_t1

0xe6c2,	// (0x0004a555) thumb_sp_fs_scroll_pane_g1

0xe6cb,	// (0x0004a55e) thumb_sp_fs_scroll_pane_g2

0xe6d4,	// (0x0004a567) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0004bc1d) thumb_sp_fs_scroll_pane_g

0xe6c2,	// (0x0004a555) bg_sp_fs_scroll_pane_g1

0xe6cb,	// (0x0004a55e) bg_sp_fs_scroll_pane_g2

0xe6d4,	// (0x0004a567) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0004bc1d) bg_sp_fs_scroll_pane_g

0xbf42,	// (0x00047dd5) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbf42,	// (0x00047dd5) list_medium_line_x2_t3_g4_g1

0xbfb8,	// (0x00047e4b) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbfb8,	// (0x00047e4b) list_medium_line_x2_t3_g4_g2

0xbf4e,	// (0x00047de1) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbf4e,	// (0x00047de1) list_medium_line_x2_t3_g4_g3

0xbf5a,	// (0x00047ded) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbf5a,	// (0x00047ded) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0004b1bc) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0004b1bc) list_medium_line_x2_t3_g4_g

0x3100,	// (0x0003ef93) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3100,	// (0x0003ef93) list_medium_line_x2_t3_g4_t1

0x3116,	// (0x0003efa9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3116,	// (0x0003efa9) list_medium_line_x2_t3_g4_t2

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbf7b,	// (0x00047e0e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0004bc24) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0004bc24) list_medium_line_x2_t3_g4_t

0xd509,	// (0x0004939c) list_medium_line_g2_g1_ParamLimits

0xd509,	// (0x0004939c) list_medium_line_g2_g1

0xd515,	// (0x000493a8) list_medium_line_g2_g2_ParamLimits

0xd515,	// (0x000493a8) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0004b8ec) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0004b8ec) list_medium_line_g2_g

0xe6dd,	// (0x0004a570) list_medium_line_g2_t1_ParamLimits

0xe6dd,	// (0x0004a570) list_medium_line_g2_t1

0xd509,	// (0x0004939c) list_medium_line_t3_g2_g1_ParamLimits

0xd509,	// (0x0004939c) list_medium_line_t3_g2_g1

0xd515,	// (0x000493a8) list_medium_line_t3_g2_g2_ParamLimits

0xd515,	// (0x000493a8) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0004b8ec) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0004b8ec) list_medium_line_t3_g2_g

0x312f,	// (0x0003efc2) list_medium_line_t3_g2_t1_ParamLimits

0x312f,	// (0x0003efc2) list_medium_line_t3_g2_t1

0x3146,	// (0x0003efd9) list_medium_line_t3_g2_t2_ParamLimits

0x3146,	// (0x0003efd9) list_medium_line_t3_g2_t2

0x315b,	// (0x0003efee) list_medium_line_t3_g2_t3_ParamLimits

0x315b,	// (0x0003efee) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0004bc2b) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0004bc2b) list_medium_line_t3_g2_t

0xe4e6,	// (0x0004a379) list_medium_line_right_icon_g1

0xe6f2,	// (0x0004a585) list_medium_line_right_icon_t1

0xd509,	// (0x0004939c) list_medium_line_t2_g1_ParamLimits

0xd509,	// (0x0004939c) list_medium_line_t2_g1

0x3174,	// (0x0003f007) list_medium_line_t2_t1_ParamLimits

0x3174,	// (0x0003f007) list_medium_line_t2_t1

0x318b,	// (0x0003f01e) list_medium_line_t2_t2_ParamLimits

0x318b,	// (0x0003f01e) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0004bc32) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0004bc32) list_medium_line_t2_t

0xd509,	// (0x0004939c) list_medium_line_t3_g1_ParamLimits

0xd509,	// (0x0004939c) list_medium_line_t3_g1

0x319d,	// (0x0003f030) list_medium_line_t3_t1_ParamLimits

0x319d,	// (0x0003f030) list_medium_line_t3_t1

0x31b4,	// (0x0003f047) list_medium_line_t3_t2_ParamLimits

0x31b4,	// (0x0003f047) list_medium_line_t3_t2

0x31c9,	// (0x0003f05c) list_medium_line_t3_t3_ParamLimits

0x31c9,	// (0x0003f05c) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0004bc37) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0004bc37) list_medium_line_t3_t

0xd509,	// (0x0004939c) list_medium_line_g3_g1_ParamLimits

0xd509,	// (0x0004939c) list_medium_line_g3_g1

0xe700,	// (0x0004a593) list_medium_line_g3_g2_ParamLimits

0xe700,	// (0x0004a593) list_medium_line_g3_g2

0xd515,	// (0x000493a8) list_medium_line_g3_g3_ParamLimits

0xd515,	// (0x000493a8) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0004bc3e) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0004bc3e) list_medium_line_g3_g

0xe70c,	// (0x0004a59f) list_medium_line_g3_t1_ParamLimits

0xe70c,	// (0x0004a59f) list_medium_line_g3_t1

0xd509,	// (0x0004939c) list_medium_line_t2_g3_g1_ParamLimits

0xd509,	// (0x0004939c) list_medium_line_t2_g3_g1

0xe700,	// (0x0004a593) list_medium_line_t2_g3_g2_ParamLimits

0xe700,	// (0x0004a593) list_medium_line_t2_g3_g2

0xd515,	// (0x000493a8) list_medium_line_t2_g3_g3_ParamLimits

0xd515,	// (0x000493a8) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0004bc3e) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0004bc3e) list_medium_line_t2_g3_g

0x31db,	// (0x0003f06e) list_medium_line_t2_g3_t1_ParamLimits

0x31db,	// (0x0003f06e) list_medium_line_t2_g3_t1

0x31f5,	// (0x0003f088) list_medium_line_t2_g3_t2_ParamLimits

0x31f5,	// (0x0003f088) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0004bc45) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0004bc45) list_medium_line_t2_g3_t

0xd509,	// (0x0004939c) list_medium_line_t3_g3_g1_ParamLimits

0xd509,	// (0x0004939c) list_medium_line_t3_g3_g1

0xe700,	// (0x0004a593) list_medium_line_t3_g3_g2_ParamLimits

0xe700,	// (0x0004a593) list_medium_line_t3_g3_g2

0xd515,	// (0x000493a8) list_medium_line_t3_g3_g3_ParamLimits

0xd515,	// (0x000493a8) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0004bc3e) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0004bc3e) list_medium_line_t3_g3_g

0x320c,	// (0x0003f09f) list_medium_line_t3_g3_t1_ParamLimits

0x320c,	// (0x0003f09f) list_medium_line_t3_g3_t1

0x3220,	// (0x0003f0b3) list_medium_line_t3_g3_t2_ParamLimits

0x3220,	// (0x0003f0b3) list_medium_line_t3_g3_t2

0x3232,	// (0x0003f0c5) list_medium_line_t3_g3_t3_ParamLimits

0x3232,	// (0x0003f0c5) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0004bc4a) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0004bc4a) list_medium_line_t3_g3_t

0xe5fc,	// (0x0004a48f) list_medium_line_right_iconx2_g1

0xe4e6,	// (0x0004a379) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0004bc51) list_medium_line_right_iconx2_g

0xe721,	// (0x0004a5b4) list_medium_line_right_iconx2_t1

0xe5fc,	// (0x0004a48f) list_medium_line_t2_right_iconx2_g1

0xe4e6,	// (0x0004a379) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0004bc51) list_medium_line_t2_right_iconx2_g

0x3246,	// (0x0003f0d9) list_medium_line_t2_right_iconx2_t1

0x3256,	// (0x0003f0e9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0004bc56) list_medium_line_t2_right_iconx2_t

0xe72f,	// (0x0004a5c2) list_medium_line_x4_t4_t1

0x3264,	// (0x0003f0f7) list_medium_line_x4_t4_t2

0x3274,	// (0x0003f107) list_medium_line_x4_t4_t3

0x3284,	// (0x0003f117) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0004bc5b) list_medium_line_x4_t4_t

0xb2fb,	// (0x0004718e) tport_appsw_pane_ParamLimits

0xb2fb,	// (0x0004718e) tport_appsw_pane

0xb30c,	// (0x0004719f) tport_contact_pane_ParamLimits

0xb30c,	// (0x0004719f) tport_contact_pane

0xb325,	// (0x000471b8) tport_listscroll_pane_ParamLimits

0xb325,	// (0x000471b8) tport_listscroll_pane

0xb340,	// (0x000471d3) cell_tport_appsw_pane_ParamLimits

0xb340,	// (0x000471d3) cell_tport_appsw_pane

0xd27f,	// (0x00049112) tport_appsw_pane_g1_ParamLimits

0xd27f,	// (0x00049112) tport_appsw_pane_g1

0xe73d,	// (0x0004a5d0) tport_contact_pane_g1

0xe746,	// (0x0004a5d9) tport_contact_pane_t1

0xe754,	// (0x0004a5e7) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0004bc64) tport_contact_pane_t

0xe762,	// (0x0004a5f5) list_tport_pane

0xe76b,	// (0x0004a5fe) scroll_pane_cp_030

0xb35b,	// (0x000471ee) cell_tport_appsw_pane_g1

0xe774,	// (0x0004a607) cell_tport_appsw_pane_t1

0x08e8,	// (0x0003c77b) grid_highlight_pane_cp019

0xb373,	// (0x00047206) list_tport_double_graphic_pane_ParamLimits

0xb373,	// (0x00047206) list_tport_double_graphic_pane

0x1c72,	// (0x0003db05) list_highlight_pane_cp023_ParamLimits

0x1c72,	// (0x0003db05) list_highlight_pane_cp023

0xb380,	// (0x00047213) list_tport_double_graphic_pane_g1_ParamLimits

0xb380,	// (0x00047213) list_tport_double_graphic_pane_g1

0xb38d,	// (0x00047220) list_tport_double_graphic_pane_t1_ParamLimits

0xb38d,	// (0x00047220) list_tport_double_graphic_pane_t1

0xb3a2,	// (0x00047235) list_tport_double_graphic_pane_t2_ParamLimits

0xb3a2,	// (0x00047235) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0004bc70) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0004bc70) list_tport_double_graphic_pane_t

0x08e8,	// (0x0003c77b) main_cale_note_pane

0x981d,	// (0x000456b0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x981d,	// (0x000456b0) cell_vitu2_function_top_wide_pane_cp01

0xae6d,	// (0x00046d00) wait_bar_pane_cp05_ParamLimits

0x08e8,	// (0x0003c77b) listscroll_cmail_pane

0xe78a,	// (0x0004a61d) list_cmail_pane

0xb3be,	// (0x00047251) list_cmail_body_pane

0xb3d6,	// (0x00047269) list_single_cmail_header_caption_pane

0xb3f2,	// (0x00047285) list_single_cmail_header_detail_pane_ParamLimits

0xb3f2,	// (0x00047285) list_single_cmail_header_detail_pane

0xb41e,	// (0x000472b1) list_single_cmail_header_caption_pane_t1

0x3294,	// (0x0003f127) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3294,	// (0x0003f127) list_single_cmail_header_detail_pane_g1

0xe7aa,	// (0x0004a63d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe7aa,	// (0x0004a63d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0004bc75) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0004bc75) list_single_cmail_header_detail_pane_g

0xe7c3,	// (0x0004a656) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe7c3,	// (0x0004a656) list_single_cmail_header_detail_pane_t1

0xe7f5,	// (0x0004a688) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe7f5,	// (0x0004a688) list_single_cmail_header_editor_pane_bg

0xe807,	// (0x0004a69a) list_cmail_body_pane_g1

0xe810,	// (0x0004a6a3) list_cmail_body_pane_t1

0xd2bc,	// (0x0004914f) list_single_cmail_header_editor_pane_bg_g1

0x14e3,	// (0x0003d376) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2cc,	// (0x0004915f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2c4,	// (0x00049157) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd501,	// (0x00049394) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2ec,	// (0x0004917f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2dc,	// (0x0004916f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2e4,	// (0x00049177) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x14c3,	// (0x0003d356) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb42e,	// (0x000472c1) calenote_gesture_pane_ParamLimits

0xb42e,	// (0x000472c1) calenote_gesture_pane

0xb44e,	// (0x000472e1) calenote_window_pane_ParamLimits

0xb44e,	// (0x000472e1) calenote_window_pane

0xe81e,	// (0x0004a6b1) popup_note_window_cp01

0xb46a,	// (0x000472fd) calenote_swipe_1_pane_ParamLimits

0xb46a,	// (0x000472fd) calenote_swipe_1_pane

0xb246,	// (0x000470d9) calenote_swipe_2_pane_ParamLimits

0xb246,	// (0x000470d9) calenote_swipe_2_pane

0xe3eb,	// (0x0004a27e) calenote_swipe_1_pane_g1_ParamLimits

0xe3eb,	// (0x0004a27e) calenote_swipe_1_pane_g1

0xe3f8,	// (0x0004a28b) calenote_swipe_1_pane_g2_ParamLimits

0xe3f8,	// (0x0004a28b) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0004bba4) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0004bba4) calenote_swipe_1_pane_g

0xe830,	// (0x0004a6c3) calenote_swipe_1_pane_t1_ParamLimits

0xe830,	// (0x0004a6c3) calenote_swipe_1_pane_t1

0xe3eb,	// (0x0004a27e) calenote_swipe_2_pane_g1_ParamLimits

0xe3eb,	// (0x0004a27e) calenote_swipe_2_pane_g1

0xe84f,	// (0x0004a6e2) calenote_swipe_2_pane_g2_ParamLimits

0xe84f,	// (0x0004a6e2) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0004bc81) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0004bc81) calenote_swipe_2_pane_g

0xe85b,	// (0x0004a6ee) calenote_swipe_2_pane_t1_ParamLimits

0xe85b,	// (0x0004a6ee) calenote_swipe_2_pane_t1

0x08e8,	// (0x0003c77b) main_mup_navstr_pane

0x84d6,	// (0x00044369) main_mup3_pane_t7_ParamLimits

0x84d6,	// (0x00044369) main_mup3_pane_t7

0xee3f,	// (0x0004acd2) main_mp4_pane_g6_ParamLimits

0xee3f,	// (0x0004acd2) main_mp4_pane_g6

0xefd5,	// (0x0004ae68) main_image3_pane_t4_ParamLimits

0xefd5,	// (0x0004ae68) main_image3_pane_t4

0xb47f,	// (0x00047312) popup_navstr_preview_pane_ParamLimits

0xb47f,	// (0x00047312) popup_navstr_preview_pane

0xb493,	// (0x00047326) scroll_navstr_pane_ParamLimits

0xb493,	// (0x00047326) scroll_navstr_pane

0x08e8,	// (0x0003c77b) bg_popup_preview_window_pane_cp04

0xe882,	// (0x0004a715) popup_navstr_preview_pane_t1

0xb4a7,	// (0x0004733a) scroll_navstr_pane_g1_ParamLimits

0xb4a7,	// (0x0004733a) scroll_navstr_pane_g1

0xb4bb,	// (0x0004734e) scroll_navstr_pane_t1_ParamLimits

0xb4bb,	// (0x0004734e) scroll_navstr_pane_t1

0xe827,	// (0x0004a6ba) bg_button_pane_cp014

0xe827,	// (0x0004a6ba) bg_button_pane_cp030

0x2ea3,	// (0x0003ed36) list_double_fisheye_pane_g4_ParamLimits

0x2ea3,	// (0x0003ed36) list_double_fisheye_pane_g4

0x2eaf,	// (0x0003ed42) list_double_fisheye_pane_g5_ParamLimits

0x2eaf,	// (0x0003ed42) list_double_fisheye_pane_g5

0xe792,	// (0x0004a625) sp_fs_scroll_pane_cp03

0x1c80,	// (0x0003db13) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe526,	// (0x0004a3b9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0004bbc1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe532,	// (0x0004a3c5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb3b4,	// (0x00047247) sp_fs_scroll_pane_cp02

0x11e1,	// (0x0003d074) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x11e1,	// (0x0003d074) popup_sp_fs_calendar_preview_list_single_pane

0x08e8,	// (0x0003c77b) main_cam6_pano_pane

0x1c72,	// (0x0003db05) main_mup3_pane_ParamLimits

0x08e8,	// (0x0003c77b) main_phacti_pane

0xad40,	// (0x00046bd3) bg_button_pane_cp11

0xad5a,	// (0x00046bed) main_mobtv_info_pane_g2_ParamLimits

0xad5a,	// (0x00046bed) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0004bb21) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0004bb21) main_mobtv_info_pane_g

0xaf35,	// (0x00046dc8) sc_clock_pane_t5_ParamLimits

0xaf35,	// (0x00046dc8) sc_clock_pane_t5

0xafba,	// (0x00046e4d) main_radioblah_pane_g1_ParamLimits

0xe337,	// (0x0004a1ca) main_radioblah_pane_t3_ParamLimits

0xe337,	// (0x0004a1ca) main_radioblah_pane_t3

0xe34f,	// (0x0004a1e2) main_radioblah_pane_t4_ParamLimits

0xe34f,	// (0x0004a1e2) main_radioblah_pane_t4

0xafe2,	// (0x00046e75) main_radioblah_text_pane_ParamLimits

0xafe2,	// (0x00046e75) main_radioblah_text_pane

0xaff4,	// (0x00046e87) main_radioblah_info_pane_g1_ParamLimits

0xb08f,	// (0x00046f22) main_radioblah_info_pane_t4_ParamLimits

0xb08f,	// (0x00046f22) main_radioblah_info_pane_t4

0x1c72,	// (0x0003db05) main_sp_fs_calendar_pane

0xb4d1,	// (0x00047364) main_phacti_pane_g1

0xb4d9,	// (0x0004736c) phacti_note_pane_ParamLimits

0xb4d9,	// (0x0004736c) phacti_note_pane

0xe899,	// (0x0004a72c) phacti_term_pane_ParamLimits

0xe899,	// (0x0004a72c) phacti_term_pane

0xe8ae,	// (0x0004a741) phacti_note_pane_t1_ParamLimits

0xe8ae,	// (0x0004a741) phacti_note_pane_t1

0xe8c5,	// (0x0004a758) phacti_term_pane_g1

0xe8cd,	// (0x0004a760) phacti_term_pane_t1_ParamLimits

0xe8cd,	// (0x0004a760) phacti_term_pane_t1

0xe8f7,	// (0x0004a78a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8ff,	// (0x0004a792) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0004bc8b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe907,	// (0x0004a79a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe907,	// (0x0004a79a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe91d,	// (0x0004a7b0) aid_popup_sp_fs_bg_corner_pane

0xc825,	// (0x000486b8) popup_sp_fs_calendar_preview_bg_pane_g1

0x08e8,	// (0x0003c77b) popup_sp_fs_calendar_preview_bg_pane

0xe925,	// (0x0004a7b8) popup_sp_fs_calendar_preview_list_pane

0x1c72,	// (0x0003db05) bg_main_sp_fs_cale_pane_ParamLimits

0x1c72,	// (0x0003db05) bg_main_sp_fs_cale_pane

0xe92d,	// (0x0004a7c0) listscroll_cale_mrui_pane_ParamLimits

0xe92d,	// (0x0004a7c0) listscroll_cale_mrui_pane

0xe941,	// (0x0004a7d4) listscroll_sp_fs_schedule_track_pane

0xe94a,	// (0x0004a7dd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe94a,	// (0x0004a7dd) main_sp_fs_ctrlbar_pane_cp01

0xe95b,	// (0x0004a7ee) main_sp_fs_ribbon_pane

0xe963,	// (0x0004a7f6) popup_sp_fs_cale_preview_window

0xb534,	// (0x000473c7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb534,	// (0x000473c7) list_single_sp_fs_schedule_track_pane

0x1c72,	// (0x0003db05) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1c72,	// (0x0003db05) bg_sp_fs_highlight_list_pane_cp03

0xb54a,	// (0x000473dd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb54a,	// (0x000473dd) list_single_sp_fs_schedule_track_pane_g1

0xb556,	// (0x000473e9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb556,	// (0x000473e9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0004bc90) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0004bc90) list_single_sp_fs_schedule_track_pane_g

0xb562,	// (0x000473f5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb562,	// (0x000473f5) list_single_sp_fs_schedule_track_pane_t1

0xb57c,	// (0x0004740f) sp_fs_schedule_track_pane_ParamLimits

0xb57c,	// (0x0004740f) sp_fs_schedule_track_pane

0xe975,	// (0x0004a808) sp_fs_schedule_track_pane_g1

0xe97d,	// (0x0004a810) sp_fs_schedule_track_pane_g2

0xe985,	// (0x0004a818) sp_fs_schedule_track_pane_g3

0xe98d,	// (0x0004a820) sp_fs_schedule_track_pane_g4

0xe995,	// (0x0004a828) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0004bc95) sp_fs_schedule_track_pane_g

0xd2bc,	// (0x0004914f) bg_sp_fs_schedule_viewer_highlight_g1

0x14e3,	// (0x0003d376) bg_sp_fs_schedule_viewer_highlight_g2

0xd2c4,	// (0x00049157) bg_sp_fs_schedule_viewer_highlight_g3

0xd2cc,	// (0x0004915f) bg_sp_fs_schedule_viewer_highlight_g4

0xd501,	// (0x00049394) bg_sp_fs_schedule_viewer_highlight_g5

0xd2dc,	// (0x0004916f) bg_sp_fs_schedule_viewer_highlight_g6

0xd2e4,	// (0x00049177) bg_sp_fs_schedule_viewer_highlight_g7

0xd2ec,	// (0x0004917f) bg_sp_fs_schedule_viewer_highlight_g8

0x14c3,	// (0x0003d356) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0004bca0) bg_sp_fs_schedule_viewer_highlight_g

0x08e8,	// (0x0003c77b) bg_main_sp_fs_ribbon_pane

0xb58d,	// (0x00047420) main_sp_fs_ribbon_pane_g1

0xe99d,	// (0x0004a830) main_sp_fs_ribbon_pane_t1

0xb596,	// (0x00047429) main_sp_fs_ribbon_pane_t2

0xe9ac,	// (0x0004a83f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0004bcb3) main_sp_fs_ribbon_pane_t

0xe9bb,	// (0x0004a84e) main_sp_fs_ribbon_scheduler_pane

0xe9c3,	// (0x0004a856) bg_main_sp_fs_ribbon_pane_g1

0xe9cc,	// (0x0004a85f) bg_main_sp_fs_ribbon_pane_g2

0xe9d5,	// (0x0004a868) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0004bcba) bg_main_sp_fs_ribbon_pane_g

0xe9dd,	// (0x0004a870) main_sp_fs_ribbon_scheduler_pane_g1

0xe9e6,	// (0x0004a879) main_sp_fs_ribbon_scheduler_pane_g2

0xe9ef,	// (0x0004a882) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0004bcc1) main_sp_fs_ribbon_scheduler_pane_g

0xe9f8,	// (0x0004a88b) list_cale_mrui_pane

0xb5a5,	// (0x00047438) sp_fs_scroll_pane_cp07_ParamLimits

0xb5a5,	// (0x00047438) sp_fs_scroll_pane_cp07

0xb5bb,	// (0x0004744e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb5bb,	// (0x0004744e) bg_sp_fs_schedule_viewer_highlight

0xea01,	// (0x0004a894) list_single_sp_fs_schedule_track_pane_cp01

0xea09,	// (0x0004a89c) list_sp_fs_schedule_track_pane

0xea11,	// (0x0004a8a4) sp_fs_scroll_pane_cp06_ParamLimits

0xea11,	// (0x0004a8a4) sp_fs_scroll_pane_cp06

0xc825,	// (0x000486b8) bgmain_sp_fs_calendar_pane_g1

0x32d2,	// (0x0003f165) list_single_cale_mrui_pane_ParamLimits

0x32d2,	// (0x0003f165) list_single_cale_mrui_pane

0xea23,	// (0x0004a8b6) list_single_cale_mrui_row_pane_ParamLimits

0xea23,	// (0x0004a8b6) list_single_cale_mrui_row_pane

0xea30,	// (0x0004a8c3) list_single_cale_mrui_row_pane_g1_ParamLimits

0xea30,	// (0x0004a8c3) list_single_cale_mrui_row_pane_g1

0xea68,	// (0x0004a8fb) list_single_cale_mrui_row_pane_t1_ParamLimits

0xea68,	// (0x0004a8fb) list_single_cale_mrui_row_pane_t1

0x32f5,	// (0x0003f188) list_single_cale_mrui_row_pane_t2_ParamLimits

0x32f5,	// (0x0003f188) list_single_cale_mrui_row_pane_t2

0xea7a,	// (0x0004a90d) list_single_cale_mrui_row_pane_t3_ParamLimits

0xea7a,	// (0x0004a90d) list_single_cale_mrui_row_pane_t3

0xeaa9,	// (0x0004a93c) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeaa9,	// (0x0004a93c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0004bccd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0004bccd) list_single_cale_mrui_row_pane_t

0x335d,	// (0x0003f1f0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x335d,	// (0x0003f1f0) list_single_cmail_header_editor_pane_bg_cp01

0x3383,	// (0x0003f216) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3383,	// (0x0003f216) list_single_cmail_header_editor_pane_bg_cp02

0xb5cb,	// (0x0004745e) main_radioblah_text_pane_t1_ParamLimits

0xb5cb,	// (0x0004745e) main_radioblah_text_pane_t1

0xead8,	// (0x0004a96b) cam6_indi_pane_cp01

0xeae0,	// (0x0004a973) cam6_mode_pane_cp01

0xeae8,	// (0x0004a97b) cam6_pano_pane

0xeaf1,	// (0x0004a984) cam6_zoom_pane_cp01

0xeaf9,	// (0x0004a98c) cam6_pano_image_pane

0xeb04,	// (0x0004a997) cam6_pano_pane_g1

0xe0af,	// (0x00049f42) cam6_pano_pane_g2

0xeb0d,	// (0x0004a9a0) cam6_pano_pane_g3

0xeb16,	// (0x0004a9a9) cam6_pano_pane_g4

0xcdf3,	// (0x00048c86) cam6_pano_pane_g5

0xeb1f,	// (0x0004a9b2) cam6_pano_pane_g6

0xeb29,	// (0x0004a9bc) cam6_pano_pane_g7

0xeb31,	// (0x0004a9c4) cam6_pano_pane_g8

0xeb3a,	// (0x0004a9cd) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0004bcd6) cam6_pano_pane_g

0x08e8,	// (0x0003c77b) main_browser_tag_pane

0xe87a,	// (0x0004a70d) grid_navstr_albumart_pane

0xeb45,	// (0x0004a9d8) cell_navstr_albumart_pane_ParamLimits

0xeb45,	// (0x0004a9d8) cell_navstr_albumart_pane

0x5696,	// (0x00041529) cell_navstr_albumart_pane_g1

0x6e1a,	// (0x00042cad) cell_navstr_albumart_pane_g2

0x6e2a,	// (0x00042cbd) cell_navstr_albumart_pane_g3

0x6e22,	// (0x00042cb5) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0004bce9) cell_navstr_albumart_pane_g

0xb5e6,	// (0x00047479) bt_list_pane_ParamLimits

0xb5e6,	// (0x00047479) bt_list_pane

0xb5fb,	// (0x0004748e) bt_list_pane_t1

0xb60a,	// (0x0004749d) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0004bcf2) bt_list_pane_t

0x08e8,	// (0x0003c77b) main_cale_prevew_pane

0xb619,	// (0x000474ac) popup_cale_preview_window_ParamLimits

0xb619,	// (0x000474ac) popup_cale_preview_window

0x1c72,	// (0x0003db05) bg_popup_preview_window_pane_cp05_ParamLimits

0x1c72,	// (0x0003db05) bg_popup_preview_window_pane_cp05

0xeb67,	// (0x0004a9fa) list_cale_preview_pane_ParamLimits

0xeb67,	// (0x0004a9fa) list_cale_preview_pane

0xb62e,	// (0x000474c1) list_double_cale_preview_pane_ParamLimits

0xb62e,	// (0x000474c1) list_double_cale_preview_pane

0xb640,	// (0x000474d3) list_single_cale_preview_pane_ParamLimits

0xb640,	// (0x000474d3) list_single_cale_preview_pane

0xb654,	// (0x000474e7) list_single_cale_preview_pane_g1

0xb65c,	// (0x000474ef) list_single_cale_preview_pane_t1_ParamLimits

0xb65c,	// (0x000474ef) list_single_cale_preview_pane_t1

0xb671,	// (0x00047504) list_double_cale_preview_pane_g1

0xb679,	// (0x0004750c) list_double_cale_preview_pane_t1_ParamLimits

0xb679,	// (0x0004750c) list_double_cale_preview_pane_t1

0xb68e,	// (0x00047521) list_double_cale_preview_pane_t2_ParamLimits

0xb68e,	// (0x00047521) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0004bcf7) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0004bcf7) list_double_cale_preview_pane_t

0x08e8,	// (0x0003c77b) main_ezdial_pane

0x1c72,	// (0x0003db05) main_sp_fs_email_pane_ParamLimits

0xb25e,	// (0x000470f1) cmail_ddmenu_btn01_pane_ParamLimits

0xb25e,	// (0x000470f1) cmail_ddmenu_btn01_pane

0xb271,	// (0x00047104) cmail_ddmenu_btn02_pane_ParamLimits

0xb271,	// (0x00047104) cmail_ddmenu_btn02_pane

0xb294,	// (0x00047127) cmail_ddmenu_btn03_pane_ParamLimits

0xb294,	// (0x00047127) cmail_ddmenu_btn03_pane

0x2f1d,	// (0x0003edb0) main_sp_fs_ctrlbar_pane_ParamLimits

0x2f41,	// (0x0003edd4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb3be,	// (0x00047251) list_cmail_body_pane_ParamLimits

0xe7a1,	// (0x0004a634) bg_button_pane_cp12

0xe7b6,	// (0x0004a649) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7b6,	// (0x0004a649) list_single_cmail_header_detail_pane_g3

0x32ac,	// (0x0003f13f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x32ac,	// (0x0003f13f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0004bc7c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0004bc7c) list_single_cmail_header_detail_pane_t

0xe8e2,	// (0x0004a775) phacti_term_pane_t2_ParamLimits

0xe8e2,	// (0x0004a775) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0004bc86) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0004bc86) phacti_term_pane_t

0xeb73,	// (0x0004aa06) aid_size_list_single_double

0xb6a6,	// (0x00047539) popup_ezdial_listscroll_window

0xb6c2,	// (0x00047555) popup_number_entry_window_cp01

0x1b5b,	// (0x0003d9ee) bg_popup_call_pane_cp09

0xeb7f,	// (0x0004aa12) ezdial_list_pane

0xeb87,	// (0x0004aa1a) scroll_pane_cp23

0xc31d,	// (0x000481b0) bg_button_pane_cp028_ParamLimits

0xc31d,	// (0x000481b0) bg_button_pane_cp028

0xb6d0,	// (0x00047563) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb6d0,	// (0x00047563) cmail_ddmenu_btn01_pane_g1

0xb6dc,	// (0x0004756f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb6dc,	// (0x0004756f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0004bcfc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0004bcfc) cmail_ddmenu_btn01_pane_g

0xeb8f,	// (0x0004aa22) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb8f,	// (0x0004aa22) cmail_ddmenu_btn01_pane_t1

0xc31d,	// (0x000481b0) bg_button_pane_cp029_ParamLimits

0xc31d,	// (0x000481b0) bg_button_pane_cp029

0xb6e8,	// (0x0004757b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb6e8,	// (0x0004757b) cmail_ddmenu_btn02_pane_g1

0xb700,	// (0x00047593) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb700,	// (0x00047593) cmail_ddmenu_btn02_pane_t1

0x1c72,	// (0x0003db05) bg_button_pane_cp031_ParamLimits

0x1c72,	// (0x0003db05) bg_button_pane_cp031

0xb6e8,	// (0x0004757b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb6e8,	// (0x0004757b) cmail_ddmenu_btn03_pane_g1

0xb700,	// (0x00047593) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb700,	// (0x00047593) cmail_ddmenu_btn03_pane_t1

0x9057,	// (0x00044eea) cell_dialer2_keypad_pane_t1_ParamLimits

0x9071,	// (0x00044f04) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9071,	// (0x00044f04) cell_dialer2_keypad_pane_t1_copy1

0xabe5,	// (0x00046a78) ncimui_group_button_pane

0x1c72,	// (0x0003db05) main_sp_fs_calendar_pane_ParamLimits

0xb3d6,	// (0x00047269) list_single_cmail_header_caption_pane_ParamLimits

0xd844,	// (0x000496d7) aid_recal_txt_sm_pane

0x08e8,	// (0x0003c77b) mian_recal_day_pane

0xe963,	// (0x0004a7f6) popup_sp_fs_cale_preview_window_ParamLimits

0x08e8,	// (0x0003c77b) list_recal_day_pane

0xebbd,	// (0x0004aa50) list_single_recal_day_pane_ParamLimits

0xebbd,	// (0x0004aa50) list_single_recal_day_pane

0xebcf,	// (0x0004aa62) list_single_recal_day_pane_g1_ParamLimits

0xebcf,	// (0x0004aa62) list_single_recal_day_pane_g1

0xebdb,	// (0x0004aa6e) list_single_recal_day_pane_g2_ParamLimits

0xebdb,	// (0x0004aa6e) list_single_recal_day_pane_g2

0xebea,	// (0x0004aa7d) list_single_recal_day_pane_g3_ParamLimits

0xebea,	// (0x0004aa7d) list_single_recal_day_pane_g3

0xb724,	// (0x000475b7) list_single_recal_day_pane_g4_ParamLimits

0xb724,	// (0x000475b7) list_single_recal_day_pane_g4

0xebf6,	// (0x0004aa89) list_single_recal_day_pane_g5_ParamLimits

0xebf6,	// (0x0004aa89) list_single_recal_day_pane_g5

0xec05,	// (0x0004aa98) list_single_recal_day_pane_g6_ParamLimits

0xec05,	// (0x0004aa98) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0004bd0b) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0004bd0b) list_single_recal_day_pane_g

0xec11,	// (0x0004aaa4) list_single_recal_day_pane_t1

0xec1f,	// (0x0004aab2) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0004bd18) list_single_recal_day_pane_t

0xb737,	// (0x000475ca) ncimui_query_button_pane_ParamLimits

0xb737,	// (0x000475ca) ncimui_query_button_pane

0xb747,	// (0x000475da) ncimui_query_button_pane_t1_ParamLimits

0xb747,	// (0x000475da) ncimui_query_button_pane_t1

0xec2d,	// (0x0004aac0) ncimui_query_button_pane_t2_ParamLimits

0xec2d,	// (0x0004aac0) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0004bd1d) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0004bd1d) ncimui_query_button_pane_t

0xb75a,	// (0x000475ed) query_button_pane_ParamLimits

0xb75a,	// (0x000475ed) query_button_pane

0x08e8,	// (0x0003c77b) bg_button_pane_cp0028

0xec40,	// (0x0004aad3) query_button_pane_t1

0x716b,	// (0x00042ffe) main_tport_pane_ParamLimits

0xb2b8,	// (0x0004714b) bg_popup_window_pane_cp01_ParamLimits

0xb2b8,	// (0x0004714b) bg_popup_window_pane_cp01

0xb2d2,	// (0x00047165) heading_pane_cp08_ParamLimits

0xb2d2,	// (0x00047165) heading_pane_cp08

0xb2e6,	// (0x00047179) heading_pane_cp07_ParamLimits

0xb2e6,	// (0x00047179) heading_pane_cp07

0xb363,	// (0x000471f6) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0004bc69) cell_tport_appsw_pane_g

0x568e,	// (0x00041521) input_candi_list_open_g1

0x167e,	// (0x0003d511) list_cale_time_pane_g6_ParamLimits

0x167e,	// (0x0003d511) list_cale_time_pane_g6

0x7f34,	// (0x00043dc7) aid_size_touch_calib_1_ParamLimits

0x7f34,	// (0x00043dc7) aid_size_touch_calib_1

0x7f40,	// (0x00043dd3) aid_size_touch_calib_2_ParamLimits

0x7f40,	// (0x00043dd3) aid_size_touch_calib_2

0x7f56,	// (0x00043de9) aid_size_touch_calib_3_ParamLimits

0x7f56,	// (0x00043de9) aid_size_touch_calib_3

0x7f74,	// (0x00043e07) aid_size_touch_calib_4_ParamLimits

0x7f74,	// (0x00043e07) aid_size_touch_calib_4

0x7f8a,	// (0x00043e1d) main_touch_calib_button_group_pane_ParamLimits

0x7f8a,	// (0x00043e1d) main_touch_calib_button_group_pane

0x7fa1,	// (0x00043e34) main_touch_calib_pane_g1_ParamLimits

0x7fad,	// (0x00043e40) main_touch_calib_pane_g2_ParamLimits

0x7fb9,	// (0x00043e4c) main_touch_calib_pane_g3_ParamLimits

0x7fc5,	// (0x00043e58) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0004b64b) main_touch_calib_pane_g_ParamLimits

0x7fd1,	// (0x00043e64) main_touch_calib_pane_t1_ParamLimits

0x7feb,	// (0x00043e7e) main_touch_calib_pane_t2_ParamLimits

0x8005,	// (0x00043e98) main_touch_calib_pane_t3_ParamLimits

0x8019,	// (0x00043eac) main_touch_calib_pane_t4_ParamLimits

0x802d,	// (0x00043ec0) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0004b654) main_touch_calib_pane_t_ParamLimits

0xcbda,	// (0x00048a6d) list_single_fp_cale_pane_g3_ParamLimits

0xcbda,	// (0x00048a6d) list_single_fp_cale_pane_g3

0x1c72,	// (0x0003db05) bg_button_pane_cp012_ParamLimits

0x1c72,	// (0x0003db05) bg_vkb2_func_pane_cp03_ParamLimits

0x9ff5,	// (0x00045e88) cell_vitu2_function_top_pane_g1_ParamLimits

0x1c72,	// (0x0003db05) bg_vkb2_func_pane_cp04_ParamLimits

0xab99,	// (0x00046a2c) main_ncimui_button_group_pane_ParamLimits

0xab99,	// (0x00046a2c) main_ncimui_button_group_pane

0xabd3,	// (0x00046a66) main_ncimui_pane_t3_ParamLimits

0xabd3,	// (0x00046a66) main_ncimui_pane_t3

0xe890,	// (0x0004a723) phacti_button_group_pane

0xeb73,	// (0x0004aa06) aid_size_list_single_double_ParamLimits

0xb6a6,	// (0x00047539) popup_ezdial_listscroll_window_ParamLimits

0xb6c2,	// (0x00047555) popup_number_entry_window_cp01_ParamLimits

0xb76d,	// (0x00047600) phacti_button_pane_ParamLimits

0xb76d,	// (0x00047600) phacti_button_pane

0x08e8,	// (0x0003c77b) bg_button_pane_cp14

0xec4e,	// (0x0004aae1) phacti_button_pane_t1

0xb77e,	// (0x00047611) main_touch_calib_button_pane_ParamLimits

0xb77e,	// (0x00047611) main_touch_calib_button_pane

0x10cb,	// (0x0003cf5e) bg_button_pane_cp18_ParamLimits

0x10cb,	// (0x0003cf5e) bg_button_pane_cp18

0xec5c,	// (0x0004aaef) main_touch_calib_button_pane_t1_ParamLimits

0xec5c,	// (0x0004aaef) main_touch_calib_button_pane_t1

0xec72,	// (0x0004ab05) main_touch_calib_button_pane_t2_ParamLimits

0xec72,	// (0x0004ab05) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0004bd22) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0004bd22) main_touch_calib_button_pane_t

0x08e8,	// (0x0003c77b) cell_ncimui_button_pane

0x08e8,	// (0x0003c77b) bg_button_pane_cp032

0xec90,	// (0x0004ab23) cell_ncimui_button_pane_t1

0xefb5,	// (0x0004ae48) image3_infobar_pane_ParamLimits

0xefb5,	// (0x0004ae48) image3_infobar_pane

0xaf61,	// (0x00046df4) fs_bigclock_status_pane_ParamLimits

0xaf61,	// (0x00046df4) fs_bigclock_status_pane

0xaf6e,	// (0x00046e01) main_fs_bigclock_clock_pane_ParamLimits

0xaf6e,	// (0x00046e01) main_fs_bigclock_clock_pane

0xaf81,	// (0x00046e14) main_fs_bigclock_indi_pane_ParamLimits

0xaf81,	// (0x00046e14) main_fs_bigclock_indi_pane

0xaf99,	// (0x00046e2c) main_fs_bigclock_swipe_pane_ParamLimits

0xaf99,	// (0x00046e2c) main_fs_bigclock_swipe_pane

0x08e8,	// (0x0003c77b) main_fs_clock_dumped_data

0xe1bc,	// (0x0004a04f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1bc,	// (0x0004a04f) list_single_fs_bigclock_indicator_pane_g1

0xe1da,	// (0x0004a06d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1da,	// (0x0004a06d) list_single_fs_bigclock_indicator_pane_g2

0xe1f4,	// (0x0004a087) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe1f4,	// (0x0004a087) list_single_fs_bigclock_indicator_pane_g3

0xe20e,	// (0x0004a0a1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe20e,	// (0x0004a0a1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0004bb55) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0004bb55) list_single_fs_bigclock_indicator_pane_g

0xe234,	// (0x0004a0c7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe234,	// (0x0004a0c7) list_single_fs_bigclock_indicator_pane_t1

0xe25c,	// (0x0004a0ef) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe25c,	// (0x0004a0ef) list_single_fs_bigclock_indicator_pane_t2

0xe284,	// (0x0004a117) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe284,	// (0x0004a117) list_single_fs_bigclock_indicator_pane_t3

0xe2ac,	// (0x0004a13f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2ac,	// (0x0004a13f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0004bb60) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0004bb60) list_single_fs_bigclock_indicator_pane_t

0xec9e,	// (0x0004ab31) image3_infobar_fav_pane_ParamLimits

0xec9e,	// (0x0004ab31) image3_infobar_fav_pane

0xecae,	// (0x0004ab41) image3_infobar_loc_pane_ParamLimits

0xecae,	// (0x0004ab41) image3_infobar_loc_pane

0xecc2,	// (0x0004ab55) image3_infobar_time_pane_ParamLimits

0xecc2,	// (0x0004ab55) image3_infobar_time_pane

0xc825,	// (0x000486b8) image3_infobar_time_pane_g1

0xecd2,	// (0x0004ab65) image3_infobar_time_pane_t1

0xc825,	// (0x000486b8) image3_infobar_loc_pane_g1

0xece0,	// (0x0004ab73) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0004bd27) image3_infobar_loc_pane_g

0xece8,	// (0x0004ab7b) image3_infobar_loc_pane_t1

0xc825,	// (0x000486b8) image3_infobar_fav_pane_g1

0xecf6,	// (0x0004ab89) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0004bd2c) image3_infobar_fav_pane_g

0xecfe,	// (0x0004ab91) fs_bigclock_status_battery_pane

0xed07,	// (0x0004ab9a) fs_bigclock_status_signal_pane

0xed10,	// (0x0004aba3) fs_bigclock_status_title_pane

0xed19,	// (0x0004abac) fs_bigclock_status_signal_pane_g1

0xed22,	// (0x0004abb5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0004bd31) fs_bigclock_status_signal_pane_g

0xed2a,	// (0x0004abbd) fs_bigclock_status_battery_pane_g1

0xed33,	// (0x0004abc6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0004bd36) fs_bigclock_status_battery_pane_g

0xed3b,	// (0x0004abce) fs_bigclock_status_title_pane_t1

0xc825,	// (0x000486b8) main_fs_bigclock_clock_pane_g1

0xed49,	// (0x0004abdc) main_fs_bigclock_clock_pane_g2

0xed49,	// (0x0004abdc) main_fs_bigclock_clock_pane_g3

0xed49,	// (0x0004abdc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0004bd3b) main_fs_bigclock_clock_pane_g

0xed51,	// (0x0004abe4) main_fs_bigclock_clock_pane_t1

0xed5f,	// (0x0004abf2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0004bd44) main_fs_bigclock_clock_pane_t

0xed6e,	// (0x0004ac01) list_single_fs_bigclock_indicator_pane_ParamLimits

0xed6e,	// (0x0004ac01) list_single_fs_bigclock_indicator_pane

0xb793,	// (0x00047626) list_single_fs_bigclock_pane_ParamLimits

0xb793,	// (0x00047626) list_single_fs_bigclock_pane

0x00c0,	// (0x0003bf53) main_fs_bigclock_indicator_pane_t1

0x00cf,	// (0x0003bf62) list_single_fs_bigclock_pane_g1

0x00d7,	// (0x0003bf6a) list_single_fs_bigclock_pane_t1

0xc825,	// (0x000486b8) main_fs_bigclock_swipe_pane_g1

0x0115,	// (0x0003bfa8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0004bd55) main_fs_bigclock_swipe_pane_g

0x011d,	// (0x0003bfb0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x011d,	// (0x0003bfb0) main_fs_bigclock_swipe_pane_t1

0x4e93,	// (0x00040d26) call_type_pane_ParamLimits

0x08e8,	// (0x0003c77b) main_btmg_pane

0xea5c,	// (0x0004a8ef) list_single_cale_mrui_row_pane_g2_ParamLimits

0xea5c,	// (0x0004a8ef) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0004bcc8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0004bcc8) list_single_cale_mrui_row_pane_g

0xebad,	// (0x0004aa40) list_recal_vselct_arw_lo_pane

0xebb5,	// (0x0004aa48) list_recal_vselct_arw_up_pane

0xd83b,	// (0x000496ce) list_recal_vselct_pane

0x013a,	// (0x0003bfcd) btmg_button_pane

0xb7f9,	// (0x0004768c) main_btmg_pane_g1

0x08e8,	// (0x0003c77b) bg_button_pane_cp044

0x014c,	// (0x0003bfdf) btmg_button_pane_t1

0xc315,	// (0x000481a8) aid_listscroll_gen

0x1c72,	// (0x0003db05) main_cntbar_detail_pane

0xe782,	// (0x0004a615) list_cmail_folder_pane

0xe792,	// (0x0004a625) sp_fs_scroll_pane_cp03_ParamLimits

0x33a3,	// (0x0003f236) list_single_fs_dyc_pane_cp01_ParamLimits

0x33a3,	// (0x0003f236) list_single_fs_dyc_pane_cp01

0x015a,	// (0x0003bfed) aid_size_cmail_indent

0xed7f,	// (0x0004ac12) list_single_dyc_row_pane_cp01

0xb82f,	// (0x000476c2) cntbar_detail_list_pane_ParamLimits

0xb82f,	// (0x000476c2) cntbar_detail_list_pane

0xb87b,	// (0x0004770e) main_cntbar_detail_cont_pane_ParamLimits

0xb87b,	// (0x0004770e) main_cntbar_detail_cont_pane

0x4e87,	// (0x00040d1a) scroll_pane_cp032_ParamLimits

0x4e87,	// (0x00040d1a) scroll_pane_cp032

0xb88f,	// (0x00047722) cntbar_detail_list_event_pane_ParamLimits

0xb88f,	// (0x00047722) cntbar_detail_list_event_pane

0xb83f,	// (0x000476d2) cntbar_detail_list_shct_pane

0x1531,	// (0x0003d3c4) aid_list_gen

0x01dd,	// (0x0003c070) aid_scroll

0x01e6,	// (0x0003c079) aid_size_touch_scroll_bar

0xb89f,	// (0x00047732) aid_list_double

0x01ef,	// (0x0003c082) aid_list_single

0xb8a8,	// (0x0004773b) aid_list_single_lg

0xed88,	// (0x0004ac1b) aid_list_z_g_a_sm

0xed90,	// (0x0004ac23) aid_list_z_g_d

0xed98,	// (0x0004ac2b) aid_txt_z_prm

0x33c2,	// (0x0003f255) aid_txt_z_prm_cp01

0x33d0,	// (0x0003f263) aid_txt_z_sec

0xb8b1,	// (0x00047744) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb8b1,	// (0x00047744) main_cntbar_detail_cont_pane_g1

0xb8c5,	// (0x00047758) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb8c5,	// (0x00047758) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0004bd5a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0004bd5a) main_cntbar_detail_cont_pane_g

0x0211,	// (0x0003c0a4) main_cntbar_detail_cont_pane_t1

0x021f,	// (0x0003c0b2) main_cntbar_detail_cont_pane_t2

0x022d,	// (0x0003c0c0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0004bd5f) main_cntbar_detail_cont_pane_t

0xb8d5,	// (0x00047768) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb8d5,	// (0x00047768) cell_cntbar_detail_list_shct_pane

0x024f,	// (0x0003c0e2) cntbar_detail_list_shct_pane_g1

0x0258,	// (0x0003c0eb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0004bd66) cntbar_detail_list_shct_pane_g

0xb8e9,	// (0x0004777c) cntbar_detail_list_event_pane_g1_ParamLimits

0xb8e9,	// (0x0004777c) cntbar_detail_list_event_pane_g1

0xb8f5,	// (0x00047788) cntbar_detail_list_event_pane_g2_ParamLimits

0xb8f5,	// (0x00047788) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0004bd6b) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0004bd6b) cntbar_detail_list_event_pane_g

0xb961,	// (0x000477f4) cntbar_detail_list_event_pane_t1_ParamLimits

0xb961,	// (0x000477f4) cntbar_detail_list_event_pane_t1

0xb976,	// (0x00047809) cntbar_detail_list_event_pane_t2_ParamLimits

0xb976,	// (0x00047809) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0004bd78) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0004bd78) cntbar_detail_list_event_pane_t

0xc825,	// (0x000486b8) cell_cntbar_detail_list_shct_pane_g1

0x51e6,	// (0x00041079) navi_pane_mv_g3

0x1c72,	// (0x0003db05) main_cntbar_detail_pane_ParamLimits

0x08e8,	// (0x0003c77b) main_notif_wgt_pane

0xedf5,	// (0x0004ac88) aid_tch_main_mp4_pane_g4

0xefad,	// (0x0004ae40) popup_slider_window_cp02

0xeba4,	// (0x0004aa37) list_recal_day_event_pane

0xb803,	// (0x00047696) cntbar_detail_btn_pane_ParamLimits

0xb803,	// (0x00047696) cntbar_detail_btn_pane

0xb819,	// (0x000476ac) cntbar_detail_btn_pane_cp01_ParamLimits

0xb819,	// (0x000476ac) cntbar_detail_btn_pane_cp01

0xb83f,	// (0x000476d2) cntbar_detail_list_shct_pane_ParamLimits

0xb84f,	// (0x000476e2) cntbar_detail_pane_g1_ParamLimits

0xb84f,	// (0x000476e2) cntbar_detail_pane_g1

0xb85f,	// (0x000476f2) cntbar_detail_pane_t1_ParamLimits

0xb85f,	// (0x000476f2) cntbar_detail_pane_t1

0xb901,	// (0x00047794) cntbar_detail_list_event_pane_g3_ParamLimits

0xb901,	// (0x00047794) cntbar_detail_list_event_pane_g3

0xb919,	// (0x000477ac) cntbar_detail_list_event_pane_g4_ParamLimits

0xb919,	// (0x000477ac) cntbar_detail_list_event_pane_g4

0xb931,	// (0x000477c4) cntbar_detail_list_event_pane_g5_ParamLimits

0xb931,	// (0x000477c4) cntbar_detail_list_event_pane_g5

0xb949,	// (0x000477dc) cntbar_detail_list_event_pane_g6_ParamLimits

0xb949,	// (0x000477dc) cntbar_detail_list_event_pane_g6

0xb98b,	// (0x0004781e) cntbar_detail_list_event_pane_t3_ParamLimits

0xb98b,	// (0x0004781e) cntbar_detail_list_event_pane_t3

0xb99d,	// (0x00047830) popup_notif_wgt_window_ParamLimits

0xb99d,	// (0x00047830) popup_notif_wgt_window

0xb9b6,	// (0x00047849) popup_submenu_window_cp01_ParamLimits

0xb9b6,	// (0x00047849) popup_submenu_window_cp01

0x1b5b,	// (0x0003d9ee) bg_popup_window_pane_cp10

0x0333,	// (0x0003c1c6) listscroll_notif_wgt_pane

0x033d,	// (0x0003c1d0) list_notif_wgt_window

0x0346,	// (0x0003c1d9) scroll_pane_cp033

0x034f,	// (0x0003c1e2) list_notif_wgt_row_pane_ParamLimits

0x034f,	// (0x0003c1e2) list_notif_wgt_row_pane

0x0363,	// (0x0003c1f6) aid_size_list_notif_wgt_del

0x036c,	// (0x0003c1ff) list_notif_wgt_row_pane_g1

0x0374,	// (0x0003c207) list_notif_wgt_row_pane_g2

0x037c,	// (0x0003c20f) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0004bd7f) list_notif_wgt_row_pane_g

0x0385,	// (0x0003c218) list_notif_wgt_row_pane_t1

0x0393,	// (0x0003c226) list_notif_wgt_row_pane_t2

0x03a1,	// (0x0003c234) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0004bd86) list_notif_wgt_row_pane_t

0xd521,	// (0x000493b4) list_recal_day_event_pane_g1

0x03af,	// (0x0003c242) list_recal_day_event_pane_t1

0x08e8,	// (0x0003c77b) bg_button_pane_cp045

0x03be,	// (0x0003c251) cntbar_detail_btn_pane_t1

0xc31d,	// (0x000481b0) main_callh_pane_ParamLimits

0xc31d,	// (0x000481b0) main_callh_pane

0x08e8,	// (0x0003c77b) main_coverflow0_pane

0x08e8,	// (0x0003c77b) main_wgtman_pane

0xafa7,	// (0x00046e3a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xafa7,	// (0x00046e3a) main_fs_bigclock_unlock_btn_pane

0xb353,	// (0x000471e6) bg_button_pane_cp16

0xb36b,	// (0x000471fe) cell_tport_appsw_pane_g3

0xb9c8,	// (0x0004785b) cf0_flow_pane_ParamLimits

0xb9c8,	// (0x0004785b) cf0_flow_pane

0x03db,	// (0x0003c26e) listscroll_cf0_pane

0x03e4,	// (0x0003c277) main_cf0_pane_g1

0xb9dd,	// (0x00047870) main_cf0_pane_t1_ParamLimits

0xb9dd,	// (0x00047870) main_cf0_pane_t1

0xb9f5,	// (0x00047888) main_cf0_pane_t2_ParamLimits

0xb9f5,	// (0x00047888) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0004bd8d) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0004bd8d) main_cf0_pane_t

0x0416,	// (0x0003c2a9) scroll_pane_cp11

0xba0d,	// (0x000478a0) cf0_flow_pane_g1

0xba15,	// (0x000478a8) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0004bd92) cf0_flow_pane_g

0xba1d,	// (0x000478b0) cf0_flow_pane_t1

0x08e8,	// (0x0003c77b) main_call6_pane

0x08e8,	// (0x0003c77b) main_calllock_pane

0xba2b,	// (0x000478be) call6_btn_grp_pane_ParamLimits

0xba2b,	// (0x000478be) call6_btn_grp_pane

0xba45,	// (0x000478d8) call6_pane_g1_ParamLimits

0xba45,	// (0x000478d8) call6_pane_g1

0xba5a,	// (0x000478ed) popup_call6_1st_window_ParamLimits

0xba5a,	// (0x000478ed) popup_call6_1st_window

0xba6b,	// (0x000478fe) popup_call6_2nd_window_ParamLimits

0xba6b,	// (0x000478fe) popup_call6_2nd_window

0xba7c,	// (0x0004790f) cell_call6_btn_pane_ParamLimits

0xba7c,	// (0x0004790f) cell_call6_btn_pane

0x1b5b,	// (0x0003d9ee) bg_popup_call2_in_pane_cp03

0x0488,	// (0x0003c31b) popup_call6_1st_window_g1

0x0490,	// (0x0003c323) popup_call6_1st_window_g2

0x0498,	// (0x0003c32b) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0004bd97) popup_call6_1st_window_g

0x04a0,	// (0x0003c333) popup_call6_1st_window_t1

0x04af,	// (0x0003c342) popup_call6_1st_window_t2

0x04bf,	// (0x0003c352) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0004bd9e) popup_call6_1st_window_t

0x1b5b,	// (0x0003d9ee) bg_popup_call2_in_pane_cp04

0x0488,	// (0x0003c31b) popup_call6_2nd_window_g1

0x0490,	// (0x0003c323) popup_call6_2nd_window_g2

0x0498,	// (0x0003c32b) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0004bd97) popup_call6_2nd_window_g

0x04a0,	// (0x0003c333) popup_call6_2nd_window_t1

0x08e8,	// (0x0003c77b) bg_button_pane_cp15

0x04cf,	// (0x0003c362) cell_call6_btn_pane_g1

0x04d8,	// (0x0003c36b) cell_call6_btn_pane_t1

0xba90,	// (0x00047923) listscroll_wgtman_pane_ParamLimits

0xba90,	// (0x00047923) listscroll_wgtman_pane

0xbaa8,	// (0x0004793b) wgtman_btn_pane_ParamLimits

0xbaa8,	// (0x0004793b) wgtman_btn_pane

0x1a0e,	// (0x0003d8a1) aid_scroll_copy1

0x0504,	// (0x0003c397) list_wgtman_pane

0xbac1,	// (0x00047954) wgtman_btn_pane_g1_ParamLimits

0xbac1,	// (0x00047954) wgtman_btn_pane_g1

0xbad5,	// (0x00047968) wgtman_btn_pane_t1_ParamLimits

0xbad5,	// (0x00047968) wgtman_btn_pane_t1

0x052c,	// (0x0003c3bf) wgtman_btn_pane_t2_ParamLimits

0x052c,	// (0x0003c3bf) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0004bda5) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0004bda5) wgtman_btn_pane_t

0xbaf0,	// (0x00047983) listrow_wgtman_pane_ParamLimits

0xbaf0,	// (0x00047983) listrow_wgtman_pane

0xbb03,	// (0x00047996) listrow_wgtman_pane_g1

0xbb0c,	// (0x0004799f) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0004bdaa) listrow_wgtman_pane_g

0x33de,	// (0x0003f271) listrow_wgtman_pane_t1

0x33ec,	// (0x0003f27f) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0004bdaf) listrow_wgtman_pane_t

0x33fa,	// (0x0003f28d) wait_bar_pane_cp09

0x056d,	// (0x0003c400) main_calllock_btn_pane

0x0577,	// (0x0003c40a) main_calllock_pane_g1

0x08e8,	// (0x0003c77b) bg_button_pane_cp17

0x0582,	// (0x0003c415) main_calllock_btn_pane_g1

0x058b,	// (0x0003c41e) main_calllock_btn_pane_t1

0x08e8,	// (0x0003c77b) main_dialer3_pane

0x08e8,	// (0x0003c77b) main_fmrd2_pane

0xc825,	// (0x000486b8) main_fs_bigclock_unlock_btn_pane_g1

0x05a2,	// (0x0003c435) main_fs_bigclock_unlock_btn_pane_t1

0xbb16,	// (0x000479a9) area_fmrd2_info_pane_ParamLimits

0xbb16,	// (0x000479a9) area_fmrd2_info_pane

0xbb28,	// (0x000479bb) area_fmrd2_visual_pane_ParamLimits

0xbb28,	// (0x000479bb) area_fmrd2_visual_pane

0xbb36,	// (0x000479c9) fmrd2_indi_pane_ParamLimits

0xbb36,	// (0x000479c9) fmrd2_indi_pane

0xbb43,	// (0x000479d6) area_fmrd2_visual_pane_g1

0xbb4b,	// (0x000479de) area_fmrd2_visual_pane_t1

0xbb5b,	// (0x000479ee) area_fmrd2_visual_pane_t2

0xbb6b,	// (0x000479fe) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0004bdb9) area_fmrd2_visual_pane_t

0xbb7b,	// (0x00047a0e) area_fmrd2_info_pane_g1

0xbb83,	// (0x00047a16) area_fmrd2_info_pane_t1

0xbb93,	// (0x00047a26) area_fmrd2_info_pane_t2

0xbba3,	// (0x00047a36) area_fmrd2_info_pane_t3

0xbbb3,	// (0x00047a46) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0004bdc0) area_fmrd2_info_pane_t

0xbbc1,	// (0x00047a54) fmrd2_indi_pane_t1

0xbbd1,	// (0x00047a64) fmrd2_indi_pane_t2

0xbbe1,	// (0x00047a74) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0004bdc9) fmrd2_indi_pane_t

0xe21d,	// (0x0004a0b0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe21d,	// (0x0004a0b0) list_single_fs_bigclock_indicator_pane_g5

0xe2c1,	// (0x0004a154) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2c1,	// (0x0004a154) list_single_fs_bigclock_indicator_pane_t5

0xb4ed,	// (0x00047380) aid_cell_bcale_month_pane_ParamLimits

0xb4ed,	// (0x00047380) aid_cell_bcale_month_pane

0xb4ff,	// (0x00047392) bcale_month_pane_ParamLimits

0xb4ff,	// (0x00047392) bcale_month_pane

0xb519,	// (0x000473ac) bcale_preview_pane_ParamLimits

0xb519,	// (0x000473ac) bcale_preview_pane

0x00d7,	// (0x0003bf6a) list_single_fs_bigclock_pane_t1_ParamLimits

0x00f1,	// (0x0003bf84) list_single_fs_bigclock_pane_t2_ParamLimits

0x00f1,	// (0x0003bf84) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0004bd50) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0004bd50) list_single_fs_bigclock_pane_t

0x059a,	// (0x0003c42d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0004bdb4) main_fs_bigclock_unlock_btn_pane_g

0xbbf1,	// (0x00047a84) aid_dia3_key_size_ParamLimits

0xbbf1,	// (0x00047a84) aid_dia3_key_size

0xbc00,	// (0x00047a93) aid_dia3_listrow_size_ParamLimits

0xbc00,	// (0x00047a93) aid_dia3_listrow_size

0xbc0e,	// (0x00047aa1) dia3_keypad_fun_pane_ParamLimits

0xbc0e,	// (0x00047aa1) dia3_keypad_fun_pane

0xbc28,	// (0x00047abb) dia3_keypad_num_pane_ParamLimits

0xbc28,	// (0x00047abb) dia3_keypad_num_pane

0xbc41,	// (0x00047ad4) dia3_listscroll_pane_ParamLimits

0xbc41,	// (0x00047ad4) dia3_listscroll_pane

0xbc54,	// (0x00047ae7) dia3_numentry_pane_ParamLimits

0xbc54,	// (0x00047ae7) dia3_numentry_pane

0x06dc,	// (0x0003c56f) dia3_list_pane

0x06e7,	// (0x0003c57a) scroll_pane_cp12

0x08e8,	// (0x0003c77b) bg_dia3_numentry_pane

0x06f2,	// (0x0003c585) dia3_numentry_pane_t1

0xbc65,	// (0x00047af8) cell_dia3_key_num_pane

0xbc6d,	// (0x00047b00) cell_dia3_key0_fun_pane_ParamLimits

0xbc6d,	// (0x00047b00) cell_dia3_key0_fun_pane

0xbc81,	// (0x00047b14) cell_dia3_key1_fun_pane_ParamLimits

0xbc81,	// (0x00047b14) cell_dia3_key1_fun_pane

0xd8ae,	// (0x00049741) dia3_listrow_pane

0xdf3b,	// (0x00049dce) bg_dia3_numentry_pane_g1

0x08e8,	// (0x0003c77b) bg_button_pane_cp21

0x072c,	// (0x0003c5bf) cell_dia3_key_num_pane_t1

0x073a,	// (0x0003c5cd) cell_dia3_key_num_pane_t2

0x0749,	// (0x0003c5dc) cell_dia3_key_num_pane_t3

0x0758,	// (0x0003c5eb) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0004bdd0) cell_dia3_key_num_pane_t

0x08e8,	// (0x0003c77b) bg_button_pane_cp19

0xbc99,	// (0x00047b2c) cell_dia3_key0_fun_pane_g1

0x08e8,	// (0x0003c77b) bg_button_pane_cp20

0xbca1,	// (0x00047b34) cell_dia3_key1_fun_pane_g1

0xbca9,	// (0x00047b3c) area_left_week_number_pane

0xbcb2,	// (0x00047b45) area_top_day_name_pane

0xbcbb,	// (0x00047b4e) frame_month_view_pane

0xbcc7,	// (0x00047b5a) grid_month_view_pane

0xbcd1,	// (0x00047b64) cell_top_day_name_pane_ParamLimits

0xbcd1,	// (0x00047b64) cell_top_day_name_pane

0xbce9,	// (0x00047b7c) cell_area_left_week_number_pane_ParamLimits

0xbce9,	// (0x00047b7c) cell_area_left_week_number_pane

0xbcfd,	// (0x00047b90) cell_month_view_pane_ParamLimits

0xbcfd,	// (0x00047b90) cell_month_view_pane

0x07e8,	// (0x0003c67b) frm_month_g1

0xbd18,	// (0x00047bab) frm_month_g2

0xbd22,	// (0x00047bb5) frm_month_g3

0xbd2c,	// (0x00047bbf) frm_month_g4

0xbd36,	// (0x00047bc9) frm_month_g5

0xbd40,	// (0x00047bd3) frm_month_g6

0xbd4a,	// (0x00047bdd) frm_month_g7

0x082d,	// (0x0003c6c0) frm_month_g8

0xbd56,	// (0x00047be9) frm_month_g9

0xbd5f,	// (0x00047bf2) frm_month_g10

0xbd68,	// (0x00047bfb) frm_month_g11

0xbd71,	// (0x00047c04) frm_month_g12

0xbd7a,	// (0x00047c0d) frm_month_g13

0xbd83,	// (0x00047c16) frm_month_g14

0xbd8c,	// (0x00047c1f) frm_month_g15

0xbd95,	// (0x00047c28) frm_month_g16

0x000f,

0xff46,	// (0x0004bdd9) frm_month_g

0xbda0,	// (0x00047c33) cell_top_day_name_pane_t1

0xbdaf,	// (0x00047c42) cell_area_left_week_number_pane_g1

0xbda0,	// (0x00047c33) cell_area_left_week_number_pane_t1

0xc825,	// (0x000486b8) cell_month_view_pane_g1

0xbdb7,	// (0x00047c4a) cell_month_view_pane_t1

0x08e8,	// (0x0003c77b) main_fps_pane

0xe4ee,	// (0x0004a381) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe4ee,	// (0x0004a381) cmail_ddmenu_btn02_pane_cp1

0xe50a,	// (0x0004a39d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe50a,	// (0x0004a39d) cmail_ddmenu_btn02_pane_cp2

0xb6f4,	// (0x00047587) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb6f4,	// (0x00047587) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0004bd01) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0004bd01) cmail_ddmenu_btn02_pane_g

0xb712,	// (0x000475a5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb712,	// (0x000475a5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0004bd06) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0004bd06) cmail_ddmenu_btn02_pane_t

0xbdc6,	// (0x00047c59) fps_text_pane_ParamLimits

0xbdc6,	// (0x00047c59) fps_text_pane

0xbddd,	// (0x00047c70) main_fps_pane_g1_ParamLimits

0xbddd,	// (0x00047c70) main_fps_pane_g1

0xbdf7,	// (0x00047c8a) wait_bar_pane_cp010_ParamLimits

0xbdf7,	// (0x00047c8a) wait_bar_pane_cp010

0xbe08,	// (0x00047c9b) fps_text_pane_t1_ParamLimits

0xbe08,	// (0x00047c9b) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
