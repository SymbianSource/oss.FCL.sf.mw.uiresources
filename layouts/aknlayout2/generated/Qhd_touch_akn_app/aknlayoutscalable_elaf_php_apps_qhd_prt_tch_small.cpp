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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003cdfb };

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
0x2228,	// (0x0003f023) Screen

0x2234,	// (0x0003f02f) application_window

0x2290,	// (0x0003f08b) area_bottom_pane_ParamLimits

0x2290,	// (0x0003f08b) area_bottom_pane

0x22e9,	// (0x0003f0e4) area_top_pane_ParamLimits

0x22e9,	// (0x0003f0e4) area_top_pane

0x234d,	// (0x0003f148) call_video_uplink_pane_ParamLimits

0x234d,	// (0x0003f148) call_video_uplink_pane

0x238c,	// (0x0003f187) main_pane_ParamLimits

0x238c,	// (0x0003f187) main_pane

0xc846,	// (0x00049641) context_pane

0x56a4,	// (0x0004249f) navi_pane

0x56ca,	// (0x000424c5) popup_cale_events_window_ParamLimits

0x56ca,	// (0x000424c5) popup_cale_events_window

0xc859,	// (0x00049654) popup_mup_playback_window

0x56e2,	// (0x000424dd) signal_pane

0xa801,	// (0x000475fc) main_browser_pane

0xa9c6,	// (0x000477c1) main_burst_pane

0x5530,	// (0x0004232b) main_calc_pane

0xc82c,	// (0x00049627) main_cale_day_pane

0x2ac9,	// (0x0003f8c4) main_cale_month_pane

0xc82c,	// (0x00049627) main_cale_week_pane

0xa9c6,	// (0x000477c1) main_call_pane

0xa4ad,	// (0x000472a8) main_call_poc_pane

0xa9c6,	// (0x000477c1) main_camera_pane

0xa9c6,	// (0x000477c1) main_chi_dic_pane

0xb1c5,	// (0x00047fc0) main_clock_pane

0xa4ad,	// (0x000472a8) main_fmradio_pane

0xa9c6,	// (0x000477c1) main_graph_messa_pane

0xa4ad,	// (0x000472a8) main_help_pane

0xa801,	// (0x000475fc) main_im_pane

0xa73c,	// (0x00047537) main_image_pane_ParamLimits

0xa73c,	// (0x00047537) main_image_pane

0xa4ad,	// (0x000472a8) main_location2_pane

0xa9c6,	// (0x000477c1) main_location_pane

0xa73c,	// (0x00047537) main_messa_pane

0xa4ad,	// (0x000472a8) main_mp2_pane

0xa9c6,	// (0x000477c1) main_mp_pane

0xa4ad,	// (0x000472a8) main_msg_pane

0xa4ad,	// (0x000472a8) main_mup_eq_pane

0xa4ad,	// (0x000472a8) main_mup_pane

0xa801,	// (0x000475fc) main_notes_pane

0xa4ad,	// (0x000472a8) main_pec_pane

0xa4ad,	// (0x000472a8) main_phob_pane

0xa4ad,	// (0x000472a8) main_pinb_pane

0xa4ad,	// (0x000472a8) main_postcard_pane

0xa4ad,	// (0x000472a8) main_qdial_pane

0xa9c6,	// (0x000477c1) main_skin_pane

0xa4ad,	// (0x000472a8) main_smil2_pane

0xa9c6,	// (0x000477c1) main_smil_pane

0xa9c6,	// (0x000477c1) main_video_pane

0xa9c6,	// (0x000477c1) main_video_tele_pane

0xa73c,	// (0x00047537) main_viewer_pane_ParamLimits

0xa73c,	// (0x00047537) main_viewer_pane

0xa9c6,	// (0x000477c1) main_vorec_pane

0x556e,	// (0x00042369) popup_blid_sat_info_window_ParamLimits

0x556e,	// (0x00042369) popup_blid_sat_info_window

0x558e,	// (0x00042389) popup_dyc_status_message_window_ParamLimits

0x558e,	// (0x00042389) popup_dyc_status_message_window

0x559e,	// (0x00042399) popup_grid_large_graphic_window_ParamLimits

0x559e,	// (0x00042399) popup_grid_large_graphic_window

0x562f,	// (0x0004242a) popup_loc_request_window_ParamLimits

0x562f,	// (0x0004242a) popup_loc_request_window

0x567c,	// (0x00042477) popup_wml_address_window_ParamLimits

0x567c,	// (0x00042477) popup_wml_address_window

0x5408,	// (0x00042203) call_muted_g1

0x50ca,	// (0x00041ec5) popup_call_audio_conf_window_ParamLimits

0x50ca,	// (0x00041ec5) popup_call_audio_conf_window

0x5418,	// (0x00042213) popup_call_audio_first_window_ParamLimits

0x5418,	// (0x00042213) popup_call_audio_first_window

0x5458,	// (0x00042253) popup_call_audio_in_window_ParamLimits

0x5458,	// (0x00042253) popup_call_audio_in_window

0x547c,	// (0x00042277) popup_call_audio_out_window_ParamLimits

0x547c,	// (0x00042277) popup_call_audio_out_window

0x549e,	// (0x00042299) popup_call_audio_second_window_ParamLimits

0x549e,	// (0x00042299) popup_call_audio_second_window

0x54ce,	// (0x000422c9) popup_call_audio_wait_window_ParamLimits

0x54ce,	// (0x000422c9) popup_call_audio_wait_window

0x54ef,	// (0x000422ea) popup_number_entry_window_ParamLimits

0x54ef,	// (0x000422ea) popup_number_entry_window

0xa09a,	// (0x00046e95) bg_popup_call_pane_cp05_ParamLimits

0xa09a,	// (0x00046e95) bg_popup_call_pane_cp05

0xa0ba,	// (0x00046eb5) popup_number_entry_window_t1

0xa0cd,	// (0x00046ec8) popup_number_entry_window_t2

0xa0df,	// (0x00046eda) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0004bec5) popup_number_entry_window_t

0xa0f1,	// (0x00046eec) text_title_cp2

0xa104,	// (0x00046eff) bg_popup_call_pane_cp_ParamLimits

0xa104,	// (0x00046eff) bg_popup_call_pane_cp

0xa112,	// (0x00046f0d) call_thumbnail_pane

0xa11a,	// (0x00046f15) popup_call_audio_in_window_g1_ParamLimits

0xa11a,	// (0x00046f15) popup_call_audio_in_window_g1

0xa126,	// (0x00046f21) popup_call_audio_in_window_g2_ParamLimits

0xa126,	// (0x00046f21) popup_call_audio_in_window_g2

0xa132,	// (0x00046f2d) popup_call_audio_in_window_g3_ParamLimits

0xa132,	// (0x00046f2d) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0004bece) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0004bece) popup_call_audio_in_window_g

0xa13e,	// (0x00046f39) popup_call_audio_in_window_t1_ParamLimits

0xa13e,	// (0x00046f39) popup_call_audio_in_window_t1

0xa15a,	// (0x00046f55) popup_call_audio_in_window_t2_ParamLimits

0xa15a,	// (0x00046f55) popup_call_audio_in_window_t2

0xa176,	// (0x00046f71) popup_call_audio_in_window_t3_ParamLimits

0xa176,	// (0x00046f71) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0004bed5) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0004bed5) popup_call_audio_in_window_t

0xa104,	// (0x00046eff) bg_popup_call_pane_cp01_ParamLimits

0xa104,	// (0x00046eff) bg_popup_call_pane_cp01

0xa112,	// (0x00046f0d) call_thumbnail_pane_cp02

0xa189,	// (0x00046f84) call_type_pane_cp022

0xa191,	// (0x00046f8c) popup_call_audio_out_window_g1_ParamLimits

0xa191,	// (0x00046f8c) popup_call_audio_out_window_g1

0xa1a3,	// (0x00046f9e) popup_call_audio_out_window_g2_ParamLimits

0xa1a3,	// (0x00046f9e) popup_call_audio_out_window_g2

0xa1af,	// (0x00046faa) popup_call_audio_out_window_g3_ParamLimits

0xa1af,	// (0x00046faa) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0004bedc) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0004bedc) popup_call_audio_out_window_g

0xa1c1,	// (0x00046fbc) popup_call_audio_out_window_t1_ParamLimits

0xa1c1,	// (0x00046fbc) popup_call_audio_out_window_t1

0xa1d9,	// (0x00046fd4) popup_call_audio_out_window_t2_ParamLimits

0xa1d9,	// (0x00046fd4) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0004bee3) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0004bee3) popup_call_audio_out_window_t

0xa1ee,	// (0x00046fe9) bg_popup_call_pane_ParamLimits

0xa1ee,	// (0x00046fe9) bg_popup_call_pane

0x258d,	// (0x0003f388) call_thumbnail_pane_cp_ParamLimits

0x258d,	// (0x0003f388) call_thumbnail_pane_cp

0xa272,	// (0x0004706d) call_type_pane_cp01_ParamLimits

0xa272,	// (0x0004706d) call_type_pane_cp01

0xa2b6,	// (0x000470b1) popup_call_audio_first_window_g1_ParamLimits

0xa2b6,	// (0x000470b1) popup_call_audio_first_window_g1

0xa302,	// (0x000470fd) popup_call_audio_first_window_g2_ParamLimits

0xa302,	// (0x000470fd) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0004bee8) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0004bee8) popup_call_audio_first_window_g

0xa346,	// (0x00047141) popup_call_audio_first_window_t1_ParamLimits

0xa346,	// (0x00047141) popup_call_audio_first_window_t1

0xa3f2,	// (0x000471ed) popup_call_audio_first_window_t4_ParamLimits

0xa3f2,	// (0x000471ed) popup_call_audio_first_window_t4

0xa47e,	// (0x00047279) popup_call_audio_first_window_t5_ParamLimits

0xa47e,	// (0x00047279) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0004beed) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0004beed) popup_call_audio_first_window_t

0xa4ad,	// (0x000472a8) bg_popup_call_pane_cp02

0xa4b7,	// (0x000472b2) call_type_pane_cp023

0xa4bf,	// (0x000472ba) popup_call_audio_wait_window_g1

0xa4c7,	// (0x000472c2) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004bef4) popup_call_audio_wait_window_g

0xa4cf,	// (0x000472ca) popup_call_audio_wait_window_t3

0xa4dd,	// (0x000472d8) bg_popup_call_pane_cp03_ParamLimits

0xa4dd,	// (0x000472d8) bg_popup_call_pane_cp03

0xa53d,	// (0x00047338) call_thumbnail_pane_cp011_ParamLimits

0xa53d,	// (0x00047338) call_thumbnail_pane_cp011

0xa549,	// (0x00047344) call_type_pane_cp034_ParamLimits

0xa549,	// (0x00047344) call_type_pane_cp034

0xa585,	// (0x00047380) popup_call_audio_second_window_g1_ParamLimits

0xa585,	// (0x00047380) popup_call_audio_second_window_g1

0xa5c1,	// (0x000473bc) popup_call_audio_second_window_g2_ParamLimits

0xa5c1,	// (0x000473bc) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0004bef9) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0004bef9) popup_call_audio_second_window_g

0xa631,	// (0x0004742c) popup_call_audio_second_window_t1_ParamLimits

0xa631,	// (0x0004742c) popup_call_audio_second_window_t1

0xa6b2,	// (0x000474ad) popup_call_audio_second_window_t2_ParamLimits

0xa6b2,	// (0x000474ad) popup_call_audio_second_window_t2

0xa6e8,	// (0x000474e3) popup_call_audio_second_window_t3_ParamLimits

0xa6e8,	// (0x000474e3) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0004befe) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0004befe) popup_call_audio_second_window_t

0xa4ad,	// (0x000472a8) bg_popup_call_pane_cp04

0xa71e,	// (0x00047519) list_conf_pane

0xa726,	// (0x00047521) popup_call_audio_conf_window_t1

0xa734,	// (0x0004752f) call_thumbnail_pane_g1

0xa73c,	// (0x00047537) bg_pinb_pane_ParamLimits

0xa73c,	// (0x00047537) bg_pinb_pane

0xa74a,	// (0x00047545) find_pinb_pane

0xa753,	// (0x0004754e) listscroll_pinb_pane_ParamLimits

0xa753,	// (0x0004754e) listscroll_pinb_pane

0xa762,	// (0x0004755d) pinb_bg_pane_g1

0x25b1,	// (0x0003f3ac) pinb_bg_pane_g2

0x25bd,	// (0x0003f3b8) pinb_bg_pane_g3

0x25c9,	// (0x0003f3c4) pinb_bg_pane_g4

0x25d5,	// (0x0003f3d0) pinb_bg_pane_g5

0x25e1,	// (0x0003f3dc) pinb_bg_pane_g6

0x25ec,	// (0x0003f3e7) pinb_bg_pane_g7

0x25f7,	// (0x0003f3f2) pinb_bg_pane_g8

0x2602,	// (0x0003f3fd) pinb_bg_pane_g9

0x260c,	// (0x0003f407) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0004bf05) pinb_bg_pane_g

0x2629,	// (0x0003f424) grid_pinb_pane

0x2634,	// (0x0003f42f) list_pinb_pane

0x263f,	// (0x0003f43a) scroll_pane_cp01_ParamLimits

0x263f,	// (0x0003f43a) scroll_pane_cp01

0xa76c,	// (0x00047567) find_pinb_pane_g1_ParamLimits

0xa76c,	// (0x00047567) find_pinb_pane_g1

0xa784,	// (0x0004757f) find_pinb_pane_t1

0xa796,	// (0x00047591) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0004bf1f) find_pinb_pane_t

0xa7ab,	// (0x000475a6) input_focus_pane_cp01_ParamLimits

0xa7ab,	// (0x000475a6) input_focus_pane_cp01

0x2651,	// (0x0003f44c) cell_pinb_pane_ParamLimits

0x2651,	// (0x0003f44c) cell_pinb_pane

0x2679,	// (0x0003f474) cell_pinb_pane_g1_ParamLimits

0x2679,	// (0x0003f474) cell_pinb_pane_g1

0x268e,	// (0x0003f489) cell_pinb_pane_g2_ParamLimits

0x268e,	// (0x0003f489) cell_pinb_pane_g2

0xa7b7,	// (0x000475b2) cell_pinb_pane_g3_ParamLimits

0xa7b7,	// (0x000475b2) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0004bf24) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0004bf24) cell_pinb_pane_g

0xa4ad,	// (0x000472a8) grid_highlight_pane_cp01

0x269a,	// (0x0003f495) list_pinb_item_pane_ParamLimits

0x269a,	// (0x0003f495) list_pinb_item_pane

0xa4ad,	// (0x000472a8) list_highlight_pane_cp02

0x26c0,	// (0x0003f4bb) list_pinb_item_pane_g1_ParamLimits

0x26c0,	// (0x0003f4bb) list_pinb_item_pane_g1

0x26cd,	// (0x0003f4c8) list_pinb_item_pane_g2_ParamLimits

0x26cd,	// (0x0003f4c8) list_pinb_item_pane_g2

0x26d9,	// (0x0003f4d4) list_pinb_item_pane_g3_ParamLimits

0x26d9,	// (0x0003f4d4) list_pinb_item_pane_g3

0x26ea,	// (0x0003f4e5) list_pinb_item_pane_g4_ParamLimits

0x26ea,	// (0x0003f4e5) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0004bf2b) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0004bf2b) list_pinb_item_pane_g

0x26f6,	// (0x0003f4f1) list_pinb_item_pane_t1_ParamLimits

0x26f6,	// (0x0003f4f1) list_pinb_item_pane_t1

0x2727,	// (0x0003f522) calc_display_pane

0x2745,	// (0x0003f540) calc_paper_pane

0x2761,	// (0x0003f55c) grid_calc_pane

0xa4ad,	// (0x000472a8) bg_list_pane_cp01

0x278d,	// (0x0003f588) clock_g1

0x2795,	// (0x0003f590) clock_g2

0x0001,

0xf139,	// (0x0004bf34) clock_g

0x279f,	// (0x0003f59a) clock_t1_ParamLimits

0x279f,	// (0x0003f59a) clock_t1

0x27b4,	// (0x0003f5af) clock_t2_ParamLimits

0x27b4,	// (0x0003f5af) clock_t2

0x27c6,	// (0x0003f5c1) clock_t3_ParamLimits

0x27c6,	// (0x0003f5c1) clock_t3

0x27d8,	// (0x0003f5d3) clock_t4_ParamLimits

0x27d8,	// (0x0003f5d3) clock_t4

0x27ea,	// (0x0003f5e5) clock_t5_ParamLimits

0x27ea,	// (0x0003f5e5) clock_t5

0x27ff,	// (0x0003f5fa) clock_t6_ParamLimits

0x27ff,	// (0x0003f5fa) clock_t6

0x2811,	// (0x0003f60c) clock_t7_ParamLimits

0x2811,	// (0x0003f60c) clock_t7

0x2823,	// (0x0003f61e) clock_t8_ParamLimits

0x2823,	// (0x0003f61e) clock_t8

0x2839,	// (0x0003f634) clock_t9_ParamLimits

0x2839,	// (0x0003f634) clock_t9

0x0008,

0xf13e,	// (0x0004bf39) clock_t_ParamLimits

0xf13e,	// (0x0004bf39) clock_t

0xa7c3,	// (0x000475be) popup_clock_analogue_window_cp02

0xa7c3,	// (0x000475be) popup_clock_digital_window_cp01

0xa7cb,	// (0x000475c6) listscroll_help_pane

0xa4ad,	// (0x000472a8) phob_pre_status_pane

0xa7d5,	// (0x000475d0) grid_qdial_pane

0xa73c,	// (0x00047537) listscroll_mce_pane

0xa73c,	// (0x00047537) bg_notes_pane

0xa7df,	// (0x000475da) list_notes_pane

0x284f,	// (0x0003f64a) scroll_pane_cp06

0xa7ed,	// (0x000475e8) bg_calc_paper_pane

0x285e,	// (0x0003f659) list_calc_pane

0xa801,	// (0x000475fc) bg_calc_display_pane

0x2878,	// (0x0003f673) calc_display_pane_t1

0x288d,	// (0x0003f688) calc_display_pane_t2

0x28a2,	// (0x0003f69d) calc_display_pane_t3

0x0002,

0xf151,	// (0x0004bf4c) calc_display_pane_t

0x28b4,	// (0x0003f6af) cell_calc_pane_ParamLimits

0x28b4,	// (0x0003f6af) cell_calc_pane

0xa80d,	// (0x00047608) bg_calc_paper_pane_g1

0xa819,	// (0x00047614) bg_calc_paper_pane_g2

0xa825,	// (0x00047620) bg_calc_paper_pane_g3

0xa831,	// (0x0004762c) bg_calc_paper_pane_g4

0xa83d,	// (0x00047638) bg_calc_paper_pane_g5

0x28e1,	// (0x0003f6dc) bg_calc_paper_pane_g6

0x28f2,	// (0x0003f6ed) bg_calc_paper_pane_g7

0x2903,	// (0x0003f6fe) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0004bf53) bg_calc_paper_pane_g

0x2914,	// (0x0003f70f) calc_bg_paper_pane_g9

0x2925,	// (0x0003f720) list_calc_item_pane_ParamLimits

0x2925,	// (0x0003f720) list_calc_item_pane

0xa849,	// (0x00047644) list_calc_item_pane_g1

0x2954,	// (0x0003f74f) list_calc_item_pane_t1_ParamLimits

0x2954,	// (0x0003f74f) list_calc_item_pane_t1

0x2966,	// (0x0003f761) list_calc_item_pane_t2_ParamLimits

0x2966,	// (0x0003f761) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0004bf64) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0004bf64) list_calc_item_pane_t

0xa856,	// (0x00047651) cell_calc_pane_g1

0xa860,	// (0x0004765b) grid_highlight_pane_cp02

0xcbb8,	// (0x000499b3) bg_calc_display_pane_g1

0x2996,	// (0x0003f791) bg_calc_display_pane_g2

0x29a0,	// (0x0003f79b) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0004bf6e) bg_calc_display_pane_g

0x29a9,	// (0x0003f7a4) cell_qdial_pane_ParamLimits

0x29a9,	// (0x0003f7a4) cell_qdial_pane

0x29bd,	// (0x0003f7b8) cell_qdial_pane_g1_ParamLimits

0x29bd,	// (0x0003f7b8) cell_qdial_pane_g1

0x29ca,	// (0x0003f7c5) cell_qdial_pane_g2_ParamLimits

0x29ca,	// (0x0003f7c5) cell_qdial_pane_g2

0xa882,	// (0x0004767d) cell_qdial_pane_g3_ParamLimits

0xa882,	// (0x0004767d) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0004bf75) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0004bf75) cell_qdial_pane_g

0x29e8,	// (0x0003f7e3) cell_qdial_pane_t1_ParamLimits

0x29e8,	// (0x0003f7e3) cell_qdial_pane_t1

0x2a00,	// (0x0003f7fb) cell_qdial_pane_t2_ParamLimits

0x2a00,	// (0x0003f7fb) cell_qdial_pane_t2

0x2a13,	// (0x0003f80e) cell_qdial_pane_t3_ParamLimits

0x2a13,	// (0x0003f80e) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0004bf7e) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0004bf7e) cell_qdial_pane_t

0xa4ad,	// (0x000472a8) grid_highlight_pane_cp04

0xa88e,	// (0x00047689) thumbnail_qdial_pane_ParamLimits

0xa88e,	// (0x00047689) thumbnail_qdial_pane

0xa8ea,	// (0x000476e5) list_help_pane

0xa8f3,	// (0x000476ee) scroll_pane_cp02

0x2a26,	// (0x0003f821) help_list_pane_t1_ParamLimits

0x2a26,	// (0x0003f821) help_list_pane_t1

0x2a59,	// (0x0003f854) bg_notes_pane_g2

0x2a61,	// (0x0003f85c) bg_notes_pane_g3

0x2a69,	// (0x0003f864) notes_bg_pane_g1

0x2a71,	// (0x0003f86c) notes_bg_pane_g4

0x2a79,	// (0x0003f874) notes_bg_pane_g5

0x2a81,	// (0x0003f87c) notes_bg_pane_g6

0x2a89,	// (0x0003f884) notes_bg_pane_g7

0x2a91,	// (0x0003f88c) notes_bg_pane_g8

0x2a99,	// (0x0003f894) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0004bf9c) notes_bg_pane_g

0x2aa1,	// (0x0003f89c) list_notes_text_pane_ParamLimits

0x2aa1,	// (0x0003f89c) list_notes_text_pane

0xa8fc,	// (0x000476f7) list_notes_text_pane_g1

0x0e9d,	// (0x0003dc98) list_notes_text_pane_t1

0x2ac9,	// (0x0003f8c4) listscroll_cale_week_pane

0x2aee,	// (0x0003f8e9) bg_cale_heading_pane

0xa91f,	// (0x0004771a) bg_cale_pane_cp01

0x2b10,	// (0x0003f90b) cale_week_corner_pane

0x2b2a,	// (0x0003f925) cale_week_day_heading_pane

0x2b4c,	// (0x0003f947) cale_week_scroll_pane_g1

0x2b69,	// (0x0003f964) cale_week_scroll_pane_g2

0x2b7c,	// (0x0003f977) cale_week_scroll_pane_g3

0x2b8f,	// (0x0003f98a) cale_week_scroll_pane_g4

0x2ba2,	// (0x0003f99d) cale_week_scroll_pane_g5

0x2bb5,	// (0x0003f9b0) cale_week_scroll_pane_g6

0x2bc8,	// (0x0003f9c3) cale_week_scroll_pane_g7

0x2bdb,	// (0x0003f9d6) cale_week_scroll_pane_g8

0x2bf0,	// (0x0003f9eb) cale_week_scroll_pane_g9

0x2c03,	// (0x0003f9fe) cale_week_scroll_pane_g10

0x2c16,	// (0x0003fa11) cale_week_scroll_pane_g11

0x2c29,	// (0x0003fa24) cale_week_scroll_pane_g12

0x2c40,	// (0x0003fa3b) cale_week_scroll_pane_g13

0x2c5b,	// (0x0003fa56) cale_week_scroll_pane_g14

0x2c76,	// (0x0003fa71) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0004bfab) cale_week_scroll_pane_g

0x2ca6,	// (0x0003faa1) cale_week_time_pane

0x2cbb,	// (0x0003fab6) grid_cale_week_pane

0xa94e,	// (0x00047749) scroll_pane_cp08

0x2cda,	// (0x0003fad5) cell_cale_week_pane_ParamLimits

0x2cda,	// (0x0003fad5) cell_cale_week_pane

0x2d3c,	// (0x0003fb37) cale_week_day_heading_pane_t1

0x2d77,	// (0x0003fb72) cale_week_day_heading_pane_t2

0x2db2,	// (0x0003fbad) cale_week_day_heading_pane_t3

0x2ded,	// (0x0003fbe8) cale_week_day_heading_pane_t4

0x2e28,	// (0x0003fc23) cale_week_day_heading_pane_t5

0x2e63,	// (0x0003fc5e) cale_week_day_heading_pane_t6

0x2e9e,	// (0x0003fc99) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0004bfcc) cale_week_day_heading_pane_t

0xa96b,	// (0x00047766) bg_cale_side_pane

0x2ed9,	// (0x0003fcd4) cale_week_time_pane_t1

0x2ef3,	// (0x0003fcee) cale_week_time_pane_t2

0x2f0d,	// (0x0003fd08) cale_week_time_pane_t3

0x2f27,	// (0x0003fd22) cale_week_time_pane_t4

0x2f41,	// (0x0003fd3c) cale_week_time_pane_t5

0x2f5b,	// (0x0003fd56) cale_week_time_pane_t6

0x2f7b,	// (0x0003fd76) cale_week_time_pane_t7

0x2f9d,	// (0x0003fd98) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0004bfdb) cale_week_time_pane_t

0x2fc1,	// (0x0003fdbc) cell_cale_week_pane_g2

0x2fe5,	// (0x0003fde0) cell_cale_week_pane_g3_ParamLimits

0x2fe5,	// (0x0003fde0) cell_cale_week_pane_g3

0xa979,	// (0x00047774) grid_highlight_pane_cp07

0xa981,	// (0x0004777c) listscroll_gms_pane

0xa98b,	// (0x00047786) grid_gms_pane

0xa994,	// (0x0004778f) listscroll_gms_pane_g1

0xa99c,	// (0x00047797) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0004bfec) listscroll_gms_pane_g

0x2ffd,	// (0x0003fdf8) scroll_pane_cp010

0x3008,	// (0x0003fe03) cell_gms_pane_ParamLimits

0x3008,	// (0x0003fe03) cell_gms_pane

0x301b,	// (0x0003fe16) cell_gms_pane_g1

0xa9a4,	// (0x0004779f) cell_gms_pane_g2

0xa9ac,	// (0x000477a7) cell_gms_pane_g3

0xa9b5,	// (0x000477b0) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0004bff1) cell_gms_pane_g

0xa9be,	// (0x000477b9) grid_highlight_pane_cp09

0x53b0,	// (0x000421ab) phob_pre_status_pane_g1

0x53b8,	// (0x000421b3) phob_pre_status_pane_g2

0x53c0,	// (0x000421bb) phob_pre_status_pane_g3

0x53c8,	// (0x000421c3) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004c3dc) phob_pre_status_pane_g

0x53d8,	// (0x000421d3) phob_pre_status_pane_t1

0x53e8,	// (0x000421e3) phob_pre_status_pane_t2

0x53f8,	// (0x000421f3) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0004c3e7) phob_pre_status_pane_t

0xa9c6,	// (0x000477c1) bg_list_pane_cp05

0x302b,	// (0x0003fe26) grid_vorec_pane

0x3035,	// (0x0003fe30) vorec_t1

0x3043,	// (0x0003fe3e) vorec_t2

0x3051,	// (0x0003fe4c) vorec_t3

0x305f,	// (0x0003fe5a) vorec_t4

0xa06a,	// (0x00046e65) vorec_t5

0xa078,	// (0x00046e73) vorec_t6

0x0004,

0xf1ff,	// (0x0004bffa) vorec_t

0xa086,	// (0x00046e81) wait_bar_pane_cp01

0x307b,	// (0x0003fe76) cell_vorec_pane_ParamLimits

0x307b,	// (0x0003fe76) cell_vorec_pane

0x308e,	// (0x0003fe89) cell_vorec_pane_g1

0xa4ad,	// (0x000472a8) grid_highlight_pane_cp05

0x30a8,	// (0x0003fea3) cams_zoom_pane

0x30b4,	// (0x0003feaf) image_vga_pane

0x30c3,	// (0x0003febe) main_camera_pane_g1

0x30d1,	// (0x0003fecc) main_camera_pane_g2

0x30dd,	// (0x0003fed8) main_camera_pane_g3

0x30e9,	// (0x0003fee4) main_camera_pane_g4

0x30f5,	// (0x0003fef0) main_camera_pane_g5

0x3101,	// (0x0003fefc) main_camera_pane_g6

0x310d,	// (0x0003ff08) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004c005) main_camera_pane_g

0x3119,	// (0x0003ff14) main_camera_pane_t1

0x312b,	// (0x0003ff26) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004c016) main_camera_pane_t

0x314c,	// (0x0003ff47) cams_zoom_pane_cp_ParamLimits

0x314c,	// (0x0003ff47) cams_zoom_pane_cp

0x3170,	// (0x0003ff6b) image_cif_pane_ParamLimits

0x3170,	// (0x0003ff6b) image_cif_pane

0x318e,	// (0x0003ff89) image_subqcif_pane

0x3196,	// (0x0003ff91) main_video_pane_g1_ParamLimits

0x3196,	// (0x0003ff91) main_video_pane_g1

0x31b6,	// (0x0003ffb1) main_video_pane_g2_ParamLimits

0x31b6,	// (0x0003ffb1) main_video_pane_g2

0x31e6,	// (0x0003ffe1) main_video_pane_g3_ParamLimits

0x31e6,	// (0x0003ffe1) main_video_pane_g3

0x320f,	// (0x0004000a) main_video_pane_g4_ParamLimits

0x320f,	// (0x0004000a) main_video_pane_g4

0x3238,	// (0x00040033) main_video_pane_g5_ParamLimits

0x3238,	// (0x00040033) main_video_pane_g5

0xa9da,	// (0x000477d5) main_video_pane_g6_ParamLimits

0xa9da,	// (0x000477d5) main_video_pane_g6

0x0006,

0xf220,	// (0x0004c01b) main_video_pane_g_ParamLimits

0xf220,	// (0x0004c01b) main_video_pane_g

0x325a,	// (0x00040055) main_video_pane_t1_ParamLimits

0x325a,	// (0x00040055) main_video_pane_t1

0xa9f4,	// (0x000477ef) cams_zoom_pane_g1

0xa9fd,	// (0x000477f8) cams_zoom_pane_g2

0xaa06,	// (0x00047801) cams_zoom_pane_g3

0xaa0f,	// (0x0004780a) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004c02a) cams_zoom_pane_g

0x32a4,	// (0x0004009f) grid_cams_pane

0x32b2,	// (0x000400ad) linegrid_cams_pane

0x32c0,	// (0x000400bb) cell_cams_pane_ParamLimits

0x32c0,	// (0x000400bb) cell_cams_pane

0xaa18,	// (0x00047813) cams_burst_image_pane

0xaa20,	// (0x0004781b) cell_cams_pane_g1

0xa4ad,	// (0x000472a8) grid_highlight_pane_cp03

0xa856,	// (0x00047651) mp_bg_pane_g1

0xa4ad,	// (0x000472a8) bg_list_pane_cp03

0xc751,	// (0x0004954c) bg_mp_pane

0xc759,	// (0x00049554) grid_mp_pane

0xc761,	// (0x0004955c) media_player_g1

0xc769,	// (0x00049564) media_player_t1

0xc777,	// (0x00049572) media_player_t2

0xc785,	// (0x00049580) media_player_t3

0xc793,	// (0x0004958e) media_player_t4

0xc7a1,	// (0x0004959c) media_player_t5

0xc7af,	// (0x000495aa) media_player_t6

0xc7bd,	// (0x000495b8) media_player_t7

0x0006,

0xf5cb,	// (0x0004c3c6) media_player_t

0xc7cb,	// (0x000495c6) wait_bar_pane_cp02

0xf5b0,	// (0x0004c3ab) main_usb_pane_t

0x53a7,	// (0x000421a2) cell_mp_pane

0xa856,	// (0x00047651) cell_mp_pane_g1

0xa4ad,	// (0x000472a8) grid_highlight_pane_cp06

0xaa28,	// (0x00047823) grid_skin_colour_pane

0xaa30,	// (0x0004782b) list_highlight_pane_cp03

0x32d3,	// (0x000400ce) skin_g1

0xaa38,	// (0x00047833) skin_t1

0xaa47,	// (0x00047842) skin_t2

0x0001,

0xf264,	// (0x0004c05f) skin_t

0x32dd,	// (0x000400d8) cell_skin_colour_pane_ParamLimits

0x32dd,	// (0x000400d8) cell_skin_colour_pane

0xaa55,	// (0x00047850) cell_skin_colour_pane_g1

0x3361,	// (0x0004015c) call_video_g1_ParamLimits

0x3361,	// (0x0004015c) call_video_g1

0x3371,	// (0x0004016c) call_video_g2_ParamLimits

0x3371,	// (0x0004016c) call_video_g2

0x0001,

0xf269,	// (0x0004c064) call_video_g_ParamLimits

0xf269,	// (0x0004c064) call_video_g

0x33cb,	// (0x000401c6) call_video_uplink_pane_cp1_ParamLimits

0x33cb,	// (0x000401c6) call_video_uplink_pane_cp1

0xaa67,	// (0x00047862) call_video_uplink_pane_cp2

0x3497,	// (0x00040292) video_down_crop_pane_ParamLimits

0x3497,	// (0x00040292) video_down_crop_pane

0x3595,	// (0x00040390) video_down_pane_ParamLimits

0x3595,	// (0x00040390) video_down_pane

0xaa6f,	// (0x0004786a) video_down_subqcif_pane_ParamLimits

0xaa6f,	// (0x0004786a) video_down_subqcif_pane

0xaa87,	// (0x00047882) video_down_subqcif_pane_cp_ParamLimits

0xaa87,	// (0x00047882) video_down_subqcif_pane_cp

0xaaad,	// (0x000478a8) im_reading_pane_ParamLimits

0xaaad,	// (0x000478a8) im_reading_pane

0x36b5,	// (0x000404b0) im_writing_pane_ParamLimits

0x36b5,	// (0x000404b0) im_writing_pane

0x36d3,	// (0x000404ce) im_reading_pane_t1

0xaac7,	// (0x000478c2) list_im_pane

0xaad8,	// (0x000478d3) scroll_pane_cp07

0x3727,	// (0x00040522) im_writing_pane_t1_ParamLimits

0x3727,	// (0x00040522) im_writing_pane_t1

0xaaf1,	// (0x000478ec) im_writing_pane_t2_ParamLimits

0xaaf1,	// (0x000478ec) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004c06e) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004c06e) im_writing_pane_t

0xa4ad,	// (0x000472a8) input_focus_pane_cp04

0xa4ad,	// (0x000472a8) input_focus_pane_cp05

0x373c,	// (0x00040537) list_im_single_pane_ParamLimits

0x373c,	// (0x00040537) list_im_single_pane

0x3760,	// (0x0004055b) list_single_im_pane_t1

0x536b,	// (0x00042166) blid_accuracy_pane

0x5373,	// (0x0004216e) blid_compass_pane

0x537d,	// (0x00042178) main_location_t1

0x538b,	// (0x00042186) main_location_t2

0x5399,	// (0x00042194) main_location_t3

0x0002,

0xf5da,	// (0x0004c3d5) main_location_t

0xa4ad,	// (0x000472a8) aid_levels_location

0xa856,	// (0x00047651) blid_accuracy_pane_g1

0xa856,	// (0x00047651) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d0) blid_accuracy_pane_g

0xab39,	// (0x00047934) wml_content_pane

0xab77,	// (0x00047972) wml_button_pane_ParamLimits

0xab77,	// (0x00047972) wml_button_pane

0x376f,	// (0x0004056a) wml_list_single_large_pane_ParamLimits

0x376f,	// (0x0004056a) wml_list_single_large_pane

0x3799,	// (0x00040594) wml_list_single_medium_pane_ParamLimits

0x3799,	// (0x00040594) wml_list_single_medium_pane

0x37ca,	// (0x000405c5) wml_list_single_small_pane_ParamLimits

0x37ca,	// (0x000405c5) wml_list_single_small_pane

0xab8b,	// (0x00047986) wml_selection_box_pane_ParamLimits

0xab8b,	// (0x00047986) wml_selection_box_pane

0xab9e,	// (0x00047999) wml_list_single_pane_t1

0xabad,	// (0x000479a8) wml_list_single_medium_pane_t1

0xabbc,	// (0x000479b7) wml_list_single_large_pane_t1

0xabcb,	// (0x000479c6) input_focus_pane_cp02_ParamLimits

0xabcb,	// (0x000479c6) input_focus_pane_cp02

0xabde,	// (0x000479d9) wml_selection_box_pane_g1

0xabe7,	// (0x000479e2) wml_selection_box_pane_t1_ParamLimits

0xabe7,	// (0x000479e2) wml_selection_box_pane_t1

0xa73c,	// (0x00047537) bg_wml_button_pane_ParamLimits

0xa73c,	// (0x00047537) bg_wml_button_pane

0xabff,	// (0x000479fa) wml_button_pane_g1

0xac07,	// (0x00047a02) wml_button_pane_t1

0xabff,	// (0x000479fa) wml_button_bg_pane_g1

0xac17,	// (0x00047a12) wml_button_bg_pane_g2

0xac1f,	// (0x00047a1a) wml_button_bg_pane_g3

0xac27,	// (0x00047a22) wml_button_bg_pane_g4

0xac2f,	// (0x00047a2a) wml_button_bg_pane_g5

0xac37,	// (0x00047a32) wml_button_bg_pane_g6

0xac3f,	// (0x00047a3a) wml_button_bg_pane_g7

0xac47,	// (0x00047a42) wml_button_bg_pane_g8

0xac4f,	// (0x00047a4a) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004c073) wml_button_bg_pane_g

0x3804,	// (0x000405ff) bg_list_pane_cp02

0xac57,	// (0x00047a52) mce_header_pane_ParamLimits

0xac57,	// (0x00047a52) mce_header_pane

0xac6d,	// (0x00047a68) mce_icon_pane

0xac6d,	// (0x00047a68) mce_image_pane

0xac76,	// (0x00047a71) mce_text_pane_ParamLimits

0xac76,	// (0x00047a71) mce_text_pane

0x380e,	// (0x00040609) scroll_pane_cp03

0xab6f,	// (0x0004796a) scroll_pane_cp04

0xac89,	// (0x00047a84) scroll_pane_cp05_ParamLimits

0xac89,	// (0x00047a84) scroll_pane_cp05

0x3818,	// (0x00040613) mce_header_field_pane_ParamLimits

0x3818,	// (0x00040613) mce_header_field_pane

0x3838,	// (0x00040633) mce_header_field_pane_2_ParamLimits

0x3838,	// (0x00040633) mce_header_field_pane_2

0x384e,	// (0x00040649) mce_header_field_pane_3

0x3856,	// (0x00040651) list_single_mce_message_pane_ParamLimits

0x3856,	// (0x00040651) list_single_mce_message_pane

0x3881,	// (0x0004067c) list_single_mce_smart_pane_ParamLimits

0x3881,	// (0x0004067c) list_single_mce_smart_pane

0xac95,	// (0x00047a90) input_focus_pane_cp03

0xac9e,	// (0x00047a99) list_header_data_pane

0x38b7,	// (0x000406b2) mce_header_field_pane_t1

0x38c5,	// (0x000406c0) list_single_mce_header_pane_ParamLimits

0x38c5,	// (0x000406c0) list_single_mce_header_pane

0xaca6,	// (0x00047aa1) list_single_mce_header_pane_t1

0xacb5,	// (0x00047ab0) list_single_mce_message_pane_g1

0xacbd,	// (0x00047ab8) list_single_mce_message_pane_t1

0x3917,	// (0x00040712) bg_cale_heading_pane_cp01_ParamLimits

0x3917,	// (0x00040712) bg_cale_heading_pane_cp01

0xaccb,	// (0x00047ac6) bg_cale_pane_cp02_ParamLimits

0xaccb,	// (0x00047ac6) bg_cale_pane_cp02

0x395a,	// (0x00040755) cale_month_corner_pane

0x3974,	// (0x0004076f) cale_month_day_heading_pane_ParamLimits

0x3974,	// (0x0004076f) cale_month_day_heading_pane

0x39cf,	// (0x000407ca) cale_month_pane_g1_ParamLimits

0x39cf,	// (0x000407ca) cale_month_pane_g1

0x3a07,	// (0x00040802) cale_month_pane_g2_ParamLimits

0x3a07,	// (0x00040802) cale_month_pane_g2

0x3a30,	// (0x0004082b) cale_month_pane_g3_ParamLimits

0x3a30,	// (0x0004082b) cale_month_pane_g3

0x3a7c,	// (0x00040877) cale_month_pane_g4_ParamLimits

0x3a7c,	// (0x00040877) cale_month_pane_g4

0x3ac8,	// (0x000408c3) cale_month_pane_g5_ParamLimits

0x3ac8,	// (0x000408c3) cale_month_pane_g5

0x3b14,	// (0x0004090f) cale_month_pane_g6_ParamLimits

0x3b14,	// (0x0004090f) cale_month_pane_g6

0x3b60,	// (0x0004095b) cale_month_pane_g7_ParamLimits

0x3b60,	// (0x0004095b) cale_month_pane_g7

0x3bc4,	// (0x000409bf) cale_month_pane_g8_ParamLimits

0x3bc4,	// (0x000409bf) cale_month_pane_g8

0x3c28,	// (0x00040a23) cale_month_pane_g9_ParamLimits

0x3c28,	// (0x00040a23) cale_month_pane_g9

0x3c86,	// (0x00040a81) cale_month_pane_g10_ParamLimits

0x3c86,	// (0x00040a81) cale_month_pane_g10

0x3ce2,	// (0x00040add) cale_month_pane_g11_ParamLimits

0x3ce2,	// (0x00040add) cale_month_pane_g11

0x3d36,	// (0x00040b31) cale_month_pane_g12_ParamLimits

0x3d36,	// (0x00040b31) cale_month_pane_g12

0x3d8c,	// (0x00040b87) cale_month_pane_g13_ParamLimits

0x3d8c,	// (0x00040b87) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004c086) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004c086) cale_month_pane_g

0x3de2,	// (0x00040bdd) cale_month_week_pane

0x3df7,	// (0x00040bf2) grid_cale_month_pane_ParamLimits

0x3df7,	// (0x00040bf2) grid_cale_month_pane

0x3e45,	// (0x00040c40) cale_month_day_heading_pane_t1

0x3ecb,	// (0x00040cc6) cale_month_day_heading_pane_t2

0x3f5c,	// (0x00040d57) cale_month_day_heading_pane_t3

0x3fed,	// (0x00040de8) cale_month_day_heading_pane_t4

0x407e,	// (0x00040e79) cale_month_day_heading_pane_t5

0x410f,	// (0x00040f0a) cale_month_day_heading_pane_t6

0x41a0,	// (0x00040f9b) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004c0a1) cale_month_day_heading_pane_t

0xa96b,	// (0x00047766) bg_cale_side_pane_cp01

0x4249,	// (0x00041044) cale_month_week_pane_t1

0x4262,	// (0x0004105d) cale_month_week_pane_t2

0x427b,	// (0x00041076) cale_month_week_pane_t3

0x4294,	// (0x0004108f) cale_month_week_pane_t4

0x42ad,	// (0x000410a8) cale_month_week_pane_t5

0x42ce,	// (0x000410c9) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004c0b0) cale_month_week_pane_t

0x42ef,	// (0x000410ea) cell_cale_month_pane_ParamLimits

0x42ef,	// (0x000410ea) cell_cale_month_pane

0x4411,	// (0x0004120c) cell_cale_month_pane_g1

0x441d,	// (0x00041218) cell_cale_month_pane_t1_ParamLimits

0x441d,	// (0x00041218) cell_cale_month_pane_t1

0xa979,	// (0x00047774) grid_highlight_pane_cp08

0xa856,	// (0x00047651) main_smil_g1

0x4449,	// (0x00041244) smil_status_pane

0xad0a,	// (0x00047b05) smil_text_pane

0xc671,	// (0x0004946c) bg_popup_call3_rect_pane_g8

0xc679,	// (0x00049474) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004c369) bg_popup_call3_rect_pane_g

0xc8c0,	// (0x000496bb) smil_status_volume_pane_g1

0xad14,	// (0x00047b0f) smil_status_pane_t1

0x5795,	// (0x00042590) volume_smil_pane

0xad2b,	// (0x00047b26) list_smil_text_pane

0x445c,	// (0x00041257) scroll_pane_cp011

0x4467,	// (0x00041262) smil_text_list_pane_t1_ParamLimits

0x4467,	// (0x00041262) smil_text_list_pane_t1

0x44df,	// (0x000412da) aid_volume_smil_ParamLimits

0x44df,	// (0x000412da) aid_volume_smil

0xa856,	// (0x00047651) smil_volume_pane_g1

0xa856,	// (0x00047651) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d0) smil_volume_pane_g

0x2ac9,	// (0x0003f8c4) listscroll_cale_day_pane

0xad35,	// (0x00047b30) bg_cale_pane

0xad4d,	// (0x00047b48) list_cale_pane

0xad70,	// (0x00047b6b) scroll_pane_cp09

0xad81,	// (0x00047b7c) cale_bg_pane_g1

0xad89,	// (0x00047b84) cale_bg_pane_g2

0xad91,	// (0x00047b8c) cale_bg_pane_g3

0xad99,	// (0x00047b94) cale_bg_pane_g4

0xada1,	// (0x00047b9c) cale_bg_pane_g5

0xada9,	// (0x00047ba4) cale_bg_pane_g6

0xadb1,	// (0x00047bac) cale_bg_pane_g7

0xadb9,	// (0x00047bb4) cale_bg_pane_g8

0xadc1,	// (0x00047bbc) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004c0d5) cale_bg_pane_g

0x4509,	// (0x00041304) list_cale_time_pane_ParamLimits

0x4509,	// (0x00041304) list_cale_time_pane

0xadc9,	// (0x00047bc4) list_cale_time_pane_g1_ParamLimits

0xadc9,	// (0x00047bc4) list_cale_time_pane_g1

0xadd5,	// (0x00047bd0) list_cale_time_pane_g2_ParamLimits

0xadd5,	// (0x00047bd0) list_cale_time_pane_g2

0x452b,	// (0x00041326) list_cale_time_pane_g3_ParamLimits

0x452b,	// (0x00041326) list_cale_time_pane_g3

0x4539,	// (0x00041334) list_cale_time_pane_g4_ParamLimits

0x4539,	// (0x00041334) list_cale_time_pane_g4

0x4547,	// (0x00041342) list_cale_time_pane_g5_ParamLimits

0x4547,	// (0x00041342) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004c0e8) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004c0e8) list_cale_time_pane_g

0xadef,	// (0x00047bea) list_cale_time_pane_t1_ParamLimits

0xadef,	// (0x00047bea) list_cale_time_pane_t1

0xae17,	// (0x00047c12) list_cale_time_pane_t2_ParamLimits

0xae17,	// (0x00047c12) list_cale_time_pane_t2

0x480e,	// (0x00041609) aid_blid_cardinal_pane

0x4850,	// (0x0004164b) compass_pane_t4

0xae3f,	// (0x00047c3a) list_cale_time_pane_t4_ParamLimits

0xae3f,	// (0x00047c3a) list_cale_time_pane_t4

0x485e,	// (0x00041659) compass_pane_t5

0x486e,	// (0x00041669) compass_pane_t6

0x487c,	// (0x00041677) compass_pane_t7

0xb30a,	// (0x00048105) navi_pane_cc_t1

0xb4e7,	// (0x000482e2) aid_phob_thumbnail_center_pane

0x4e71,	// (0x00041c6c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004c0f5) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004c0f5) list_cale_time_pane_t

0xa104,	// (0x00046eff) bg_popup_window_pane_cp02_ParamLimits

0xa104,	// (0x00046eff) bg_popup_window_pane_cp02

0xae67,	// (0x00047c62) heading_pane_cp01_ParamLimits

0xae67,	// (0x00047c62) heading_pane_cp01

0xae73,	// (0x00047c6e) loc_req_pane_ParamLimits

0xae73,	// (0x00047c6e) loc_req_pane

0xae83,	// (0x00047c7e) loc_type_pane_ParamLimits

0xae83,	// (0x00047c7e) loc_type_pane

0xae95,	// (0x00047c90) loc_type_pane_t1_ParamLimits

0xae95,	// (0x00047c90) loc_type_pane_t1

0xaea7,	// (0x00047ca2) loc_type_pane_t2_ParamLimits

0xaea7,	// (0x00047ca2) loc_type_pane_t2

0xaeb9,	// (0x00047cb4) loc_type_pane_t3_ParamLimits

0xaeb9,	// (0x00047cb4) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004c0fc) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004c0fc) loc_type_pane_t

0xaecb,	// (0x00047cc6) list_loc_req_pane

0xaed5,	// (0x00047cd0) scroll_pane_cp012

0x4555,	// (0x00041350) list_single_loc_request_popup_menu_pane_ParamLimits

0x4555,	// (0x00041350) list_single_loc_request_popup_menu_pane

0xaee0,	// (0x00047cdb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaee0,	// (0x00047cdb) list_single_loc_request_popup_menu_pane_g1

0xaeec,	// (0x00047ce7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaeec,	// (0x00047ce7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004c103) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004c103) list_single_loc_request_popup_menu_pane_g

0xaef8,	// (0x00047cf3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaef8,	// (0x00047cf3) list_single_loc_request_popup_menu_pane_t1

0x4567,	// (0x00041362) bg_popup_window_pane_cp03_ParamLimits

0x4567,	// (0x00041362) bg_popup_window_pane_cp03

0x4575,	// (0x00041370) heading_loc_req_pane_ParamLimits

0x4575,	// (0x00041370) heading_loc_req_pane

0x4581,	// (0x0004137c) popup_dyc_status_message_window_g1_ParamLimits

0x4581,	// (0x0004137c) popup_dyc_status_message_window_g1

0x458d,	// (0x00041388) popup_dyc_status_message_window_t1_ParamLimits

0x458d,	// (0x00041388) popup_dyc_status_message_window_t1

0x459f,	// (0x0004139a) popup_dyc_status_message_window_t2_ParamLimits

0x459f,	// (0x0004139a) popup_dyc_status_message_window_t2

0x45b1,	// (0x000413ac) popup_dyc_status_message_window_t3_ParamLimits

0x45b1,	// (0x000413ac) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004c108) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004c108) popup_dyc_status_message_window_t

0xa4ad,	// (0x000472a8) bg_heading_pane_cp01

0xaf0e,	// (0x00047d09) heading_loc_req_pane_g1

0xaf16,	// (0x00047d11) heading_loc_req_pane_g2

0xaf1e,	// (0x00047d19) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004c10f) heading_loc_req_pane_g

0xaf26,	// (0x00047d21) heading_loc_req_pane_t1

0xaf35,	// (0x00047d30) bg_popup_sub_pane_cp01_ParamLimits

0xaf35,	// (0x00047d30) bg_popup_sub_pane_cp01

0xaf43,	// (0x00047d3e) popup_cale_events_window_g1_ParamLimits

0xaf43,	// (0x00047d3e) popup_cale_events_window_g1

0xaf63,	// (0x00047d5e) popup_cale_events_window_g2_ParamLimits

0xaf63,	// (0x00047d5e) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004c143) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004c143) popup_cale_events_window_g

0xaf83,	// (0x00047d7e) popup_cale_events_window_t1_ParamLimits

0xaf83,	// (0x00047d7e) popup_cale_events_window_t1

0xaf95,	// (0x00047d90) popup_cale_events_window_t2_ParamLimits

0xaf95,	// (0x00047d90) popup_cale_events_window_t2

0xafd3,	// (0x00047dce) popup_cale_events_window_t3_ParamLimits

0xafd3,	// (0x00047dce) popup_cale_events_window_t3

0xb00d,	// (0x00047e08) popup_cale_events_window_t4_ParamLimits

0xb00d,	// (0x00047e08) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004c148) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004c148) popup_cale_events_window_t

0x45db,	// (0x000413d6) call_type_pane

0xb0a0,	// (0x00047e9b) popup_call_status_window_g1

0x45e7,	// (0x000413e2) popup_call_status_window_g2

0x45f3,	// (0x000413ee) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004c151) popup_call_status_window_g

0xb043,	// (0x00047e3e) call_type_pane_g1

0xb04c,	// (0x00047e47) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004c158) call_type_pane_g

0xa4ad,	// (0x000472a8) bg_popup_sub_pane_cp02

0xb055,	// (0x00047e50) listscroll_popup_wml_pane

0xb05d,	// (0x00047e58) list_wml_pane

0xb067,	// (0x00047e62) scroll_pane_cp013

0xb072,	// (0x00047e6d) list_single_graphic_popup_wml_pane_ParamLimits

0xb072,	// (0x00047e6d) list_single_graphic_popup_wml_pane

0xa856,	// (0x00047651) list_single_graphic_popup_wml_pane_g1

0xb0ae,	// (0x00047ea9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004c15d) list_single_graphic_popup_wml_pane_g

0xb0b6,	// (0x00047eb1) list_single_graphic_popup_wml_pane_t1

0xb0cc,	// (0x00047ec7) aid_call_pane

0xa734,	// (0x0004752f) popup_clock_analogue_window_g1

0xa734,	// (0x0004752f) popup_clock_analogue_window_g2

0x45ff,	// (0x000413fa) popup_clock_analogue_window_g3

0x45ff,	// (0x000413fa) popup_clock_analogue_window_g4

0xa856,	// (0x00047651) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004c162) popup_clock_analogue_window_g

0x4607,	// (0x00041402) popup_clock_analogue_window_t1

0x4615,	// (0x00041410) clock_digital_number_pane_ParamLimits

0x4615,	// (0x00041410) clock_digital_number_pane

0x4621,	// (0x0004141c) clock_digital_number_pane_cp02_ParamLimits

0x4621,	// (0x0004141c) clock_digital_number_pane_cp02

0x462d,	// (0x00041428) clock_digital_number_pane_cp03_ParamLimits

0x462d,	// (0x00041428) clock_digital_number_pane_cp03

0x4639,	// (0x00041434) clock_digital_number_pane_cp04_ParamLimits

0x4639,	// (0x00041434) clock_digital_number_pane_cp04

0x4649,	// (0x00041444) clock_digital_separator_pane_ParamLimits

0x4649,	// (0x00041444) clock_digital_separator_pane

0x4655,	// (0x00041450) popup_clock_digital_window_t1

0xa856,	// (0x00047651) clock_digital_number_pane_g1

0xa856,	// (0x00047651) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d0) clock_digital_number_pane_g

0xa856,	// (0x00047651) clock_digital_separator_pane_g1

0xa856,	// (0x00047651) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d0) clock_digital_separator_pane_g

0xa4ad,	// (0x000472a8) bg_popup_window_pane_cp04

0xb0d4,	// (0x00047ecf) heading_pane_cp03

0xb0dc,	// (0x00047ed7) listscroll_popup_gms_pane

0xb0e4,	// (0x00047edf) grid_large_graphic_popup_pane

0xb0ee,	// (0x00047ee9) listscroll_popup_gms_pane_g1

0xb0f6,	// (0x00047ef1) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004c16d) listscroll_popup_gms_pane_g

0xab6f,	// (0x0004796a) scroll_pane_cp014

0x4672,	// (0x0004146d) cell_large_graphic_popup_pane_ParamLimits

0x4672,	// (0x0004146d) cell_large_graphic_popup_pane

0x468a,	// (0x00041485) cell_large_graphic_popup_pane_g1_ParamLimits

0x468a,	// (0x00041485) cell_large_graphic_popup_pane_g1

0xb0fe,	// (0x00047ef9) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0fe,	// (0x00047ef9) cell_large_graphic_popup_pane_g2

0xb10a,	// (0x00047f05) cell_large_graphic_popup_pane_g3_ParamLimits

0xb10a,	// (0x00047f05) cell_large_graphic_popup_pane_g3

0xb117,	// (0x00047f12) cell_large_graphic_popup_pane_g4_ParamLimits

0xb117,	// (0x00047f12) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004c172) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004c172) cell_large_graphic_popup_pane_g

0xb127,	// (0x00047f22) grid_highlight_pane_cp010

0xa856,	// (0x00047651) bg_popup_call_pane_g1

0xb131,	// (0x00047f2c) list_single_graphic_popup_conf_pane_ParamLimits

0xb131,	// (0x00047f2c) list_single_graphic_popup_conf_pane

0xb144,	// (0x00047f3f) list_highlight_pane_cp01

0xb14d,	// (0x00047f48) list_single_graphic_popup_conf_pane_g1

0xb155,	// (0x00047f50) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004c17b) list_single_graphic_popup_conf_pane_g

0xb15d,	// (0x00047f58) list_single_graphic_popup_conf_pane_t1

0xb16b,	// (0x00047f66) linegrid_cams_pane_g1

0x4696,	// (0x00041491) linegrid_cams_pane_g2

0xa9ac,	// (0x000477a7) linegrid_cams_pane_g3

0xb174,	// (0x00047f6f) linegrid_cams_pane_g4

0x469f,	// (0x0004149a) linegrid_cams_pane_g5

0x46a8,	// (0x000414a3) linegrid_cams_pane_g6

0xa9b5,	// (0x000477b0) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004c180) linegrid_cams_pane_g

0xb17d,	// (0x00047f78) popup_clock_analogue_window

0xb17d,	// (0x00047f78) popup_clock_digital_window

0xa4ad,	// (0x000472a8) popup_phob_thumbnail_window

0xa856,	// (0x00047651) call_video_uplink_pane_g1

0xb186,	// (0x00047f81) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004c18f) call_video_uplink_pane_g

0xb18e,	// (0x00047f89) video_uplink_pane

0xb196,	// (0x00047f91) mce_image_pane_g1

0x46b1,	// (0x000414ac) mce_image_pane_g2

0x46bb,	// (0x000414b6) mce_image_pane_g3

0x46c3,	// (0x000414be) mce_image_pane_g4

0x46cb,	// (0x000414c6) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004c194) mce_image_pane_g

0xb1a0,	// (0x00047f9b) control_top_pane_stacon_cp01_ParamLimits

0xb1a0,	// (0x00047f9b) control_top_pane_stacon_cp01

0xb1b4,	// (0x00047faf) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1b4,	// (0x00047faf) uni_indicator_pane_stacon_cp01

0xb1c5,	// (0x00047fc0) bg_popup_sub_pane_cp03

0xb1cf,	// (0x00047fca) chi_dic_find_pane

0x46d3,	// (0x000414ce) listscroll_chi_dic_pane

0xb1d7,	// (0x00047fd2) main_pane_chidic_g1

0xb1df,	// (0x00047fda) chi_dic_find_pane_t1

0xb1ed,	// (0x00047fe8) find_chidic_pane

0xb1f6,	// (0x00047ff1) chi_dic_list_pane_ParamLimits

0xb1f6,	// (0x00047ff1) chi_dic_list_pane

0xb207,	// (0x00048002) scroll_pane_cp020

0xb20f,	// (0x0004800a) find_chidic_pane_t1

0xa4ad,	// (0x000472a8) input_focus_pane_cp06

0x46e7,	// (0x000414e2) list_chi_dic_pane_ParamLimits

0x46e7,	// (0x000414e2) list_chi_dic_pane

0x4701,	// (0x000414fc) list_chi_dic_pane_t1_ParamLimits

0x4701,	// (0x000414fc) list_chi_dic_pane_t1

0xa4ad,	// (0x000472a8) list_highlight_pane_cp020

0xb21e,	// (0x00048019) bg_cale_heading_pane_g1

0x4714,	// (0x0004150f) bg_cale_heading_pane_g2

0x471c,	// (0x00041517) bg_cale_heading_pane_g3

0x4724,	// (0x0004151f) bg_cale_heading_pane_g4

0x472e,	// (0x00041529) bg_cale_heading_pane_g5

0x4738,	// (0x00041533) bg_cale_heading_pane_g6

0x4740,	// (0x0004153b) bg_cale_heading_pane_g7

0x4748,	// (0x00041543) bg_cale_heading_pane_g8

0x4752,	// (0x0004154d) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004c19f) bg_cale_heading_pane_g

0xb21e,	// (0x00048019) bg_cale_side_pane_g1

0x475c,	// (0x00041557) bg_cale_side_pane_g2

0x4766,	// (0x00041561) bg_cale_side_pane_g3

0x4770,	// (0x0004156b) bg_cale_side_pane_g4

0x477a,	// (0x00041575) bg_cale_side_pane_g5

0x4784,	// (0x0004157f) bg_cale_side_pane_g6

0x478e,	// (0x00041589) bg_cale_side_pane_g7

0x4798,	// (0x00041593) bg_cale_side_pane_g8

0x47a0,	// (0x0004159b) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004c1b2) bg_cale_side_pane_g

0x47a8,	// (0x000415a3) popup_call_status_window_ParamLimits

0x47a8,	// (0x000415a3) popup_call_status_window

0xb226,	// (0x00048021) stacon_top_pane

0xb22e,	// (0x00048029) status_pane_ParamLimits

0xb22e,	// (0x00048029) status_pane

0xb243,	// (0x0004803e) status_small_pane

0xb24b,	// (0x00048046) control_pane

0xa4ad,	// (0x000472a8) stacon_bottom_pane

0xb253,	// (0x0004804e) list_single_mce_smart_pane_t1_ParamLimits

0xb253,	// (0x0004804e) list_single_mce_smart_pane_t1

0xb266,	// (0x00048061) list_single_mce_smart_pane_t2_ParamLimits

0xb266,	// (0x00048061) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004c1c5) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004c1c5) list_single_mce_smart_pane_t

0x47b4,	// (0x000415af) compass_pane

0x47c0,	// (0x000415bb) main_location2_pane_t1

0x47d4,	// (0x000415cf) main_location2_pane_t2

0x47e8,	// (0x000415e3) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004c1ca) main_location2_pane_t

0xb285,	// (0x00048080) compass_pane_g1_ParamLimits

0xb285,	// (0x00048080) compass_pane_g1

0x4832,	// (0x0004162d) compass_pane_t1

0x4841,	// (0x0004163c) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004c1d3) compass_pane_t

0x488c,	// (0x00041687) text_secondary_cp61

0xb301,	// (0x000480fc) navi_pane_cams_g5

0xb37d,	// (0x00048178) navi_pane_im_t1

0xb38b,	// (0x00048186) navi_pane_mp_g1_ParamLimits

0xb38b,	// (0x00048186) navi_pane_mp_g1

0xb39f,	// (0x0004819a) navi_pane_mp_g2_ParamLimits

0xb39f,	// (0x0004819a) navi_pane_mp_g2

0xb3ab,	// (0x000481a6) navi_pane_mp_g3_ParamLimits

0xb3ab,	// (0x000481a6) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004c1e7) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004c1e7) navi_pane_mp_g

0xb3b7,	// (0x000481b2) navi_pane_mp_t1

0xb3c5,	// (0x000481c0) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004c1ee) navi_pane_mp_t

0xb430,	// (0x0004822b) navi_pane_vt_g1

0xb3b7,	// (0x000481b2) navi_pane_vt_t1

0xb438,	// (0x00048233) navi_slider_pane

0xa9c6,	// (0x000477c1) zooming_pane

0xb448,	// (0x00048243) navi_slider_pane_g1

0x48c7,	// (0x000416c2) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004c1f5) navi_slider_pane_g

0xb46c,	// (0x00048267) aid_levels_zoom

0xb474,	// (0x0004826f) zooming_pane_g1

0xb47c,	// (0x00048277) zooming_pane_g2

0xb47c,	// (0x00048277) zooming_pane_g3

0x0002,

0xf409,	// (0x0004c204) zooming_pane_g

0xb484,	// (0x0004827f) level_10_zoom

0xb48d,	// (0x00048288) level_11_zoom

0xb496,	// (0x00048291) level_1_zoom

0xb49f,	// (0x0004829a) level_2_zoom

0xb4a8,	// (0x000482a3) level_3_zoom

0xb4b1,	// (0x000482ac) level_4_zoom

0xb4ba,	// (0x000482b5) level_5_zoom

0xb4c3,	// (0x000482be) level_6_zoom

0xb4cc,	// (0x000482c7) level_7_zoom

0xb4d5,	// (0x000482d0) level_8_zoom

0xb4de,	// (0x000482d9) level_9_zoom

0xb4ef,	// (0x000482ea) popup_phob_thumbnail_window_g1

0xb4f7,	// (0x000482f2) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004c20b) popup_phob_thumbnail_window_g

0xc7d3,	// (0x000495ce) level_1_location

0xc7db,	// (0x000495d6) level_2_location

0xc7e3,	// (0x000495de) level_3_location

0xc7eb,	// (0x000495e6) level_4_location

0xa9c6,	// (0x000477c1) level_5_location

0x48d9,	// (0x000416d4) mce_icon_pane_g1

0x48e1,	// (0x000416dc) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004c210) mce_icon_pane_g

0x48e9,	// (0x000416e4) main_mup_pane_g1_ParamLimits

0x48e9,	// (0x000416e4) main_mup_pane_g1

0x4901,	// (0x000416fc) main_mup_pane_g2_ParamLimits

0x4901,	// (0x000416fc) main_mup_pane_g2

0x491d,	// (0x00041718) main_mup_pane_g3_ParamLimits

0x491d,	// (0x00041718) main_mup_pane_g3

0x4939,	// (0x00041734) main_mup_pane_g4_ParamLimits

0x4939,	// (0x00041734) main_mup_pane_g4

0x4955,	// (0x00041750) main_mup_pane_g5_ParamLimits

0x4955,	// (0x00041750) main_mup_pane_g5

0x4976,	// (0x00041771) main_mup_pane_g6_ParamLimits

0x4976,	// (0x00041771) main_mup_pane_g6

0x4992,	// (0x0004178d) main_mup_pane_g7_ParamLimits

0x4992,	// (0x0004178d) main_mup_pane_g7

0x49ae,	// (0x000417a9) main_mup_pane_g8_ParamLimits

0x49ae,	// (0x000417a9) main_mup_pane_g8

0x49ce,	// (0x000417c9) main_mup_pane_g9_ParamLimits

0x49ce,	// (0x000417c9) main_mup_pane_g9

0x49ed,	// (0x000417e8) main_mup_pane_g10_ParamLimits

0x49ed,	// (0x000417e8) main_mup_pane_g10

0x4a0c,	// (0x00041807) main_mup_pane_g11_ParamLimits

0x4a0c,	// (0x00041807) main_mup_pane_g11

0x4a24,	// (0x0004181f) main_mup_pane_g12_ParamLimits

0x4a24,	// (0x0004181f) main_mup_pane_g12

0x4a32,	// (0x0004182d) main_mup_pane_g13_ParamLimits

0x4a32,	// (0x0004182d) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004c215) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004c215) main_mup_pane_g

0x4a48,	// (0x00041843) main_mup_pane_t1_ParamLimits

0x4a48,	// (0x00041843) main_mup_pane_t1

0x4a65,	// (0x00041860) main_mup_pane_t2_ParamLimits

0x4a65,	// (0x00041860) main_mup_pane_t2

0x4a7f,	// (0x0004187a) main_mup_pane_t3_ParamLimits

0x4a7f,	// (0x0004187a) main_mup_pane_t3

0x4a99,	// (0x00041894) main_mup_pane_t4_ParamLimits

0x4a99,	// (0x00041894) main_mup_pane_t4

0x4aab,	// (0x000418a6) main_mup_pane_t5_ParamLimits

0x4aab,	// (0x000418a6) main_mup_pane_t5

0x4abd,	// (0x000418b8) main_mup_pane_t6_ParamLimits

0x4abd,	// (0x000418b8) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004c230) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004c230) main_mup_pane_t

0x4ad3,	// (0x000418ce) mup_progress_pane_ParamLimits

0x4ad3,	// (0x000418ce) mup_progress_pane

0x4adf,	// (0x000418da) mup_visualizer_pane_ParamLimits

0x4adf,	// (0x000418da) mup_visualizer_pane

0x4b19,	// (0x00041914) mup_volume_pane_ParamLimits

0x4b19,	// (0x00041914) mup_volume_pane

0xb0a0,	// (0x00047e9b) mup_visualizer_pane_g1_ParamLimits

0xb0a0,	// (0x00047e9b) mup_visualizer_pane_g1

0xb0a0,	// (0x00047e9b) mup_visualizer_pane_g2_ParamLimits

0xb0a0,	// (0x00047e9b) mup_visualizer_pane_g2

0xb285,	// (0x00048080) mup_visualizer_pane_g3_ParamLimits

0xb285,	// (0x00048080) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004c23d) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004c23d) mup_visualizer_pane_g

0xa856,	// (0x00047651) mup_volume_pane_g1

0xb507,	// (0x00048302) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004c244) mup_volume_pane_g

0xa856,	// (0x00047651) mup_progress_pane_g1

0xb510,	// (0x0004830b) mup_progress_pane_g2

0xb519,	// (0x00048314) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004c249) mup_progress_pane_g

0xa4ad,	// (0x000472a8) bg_popup_window_pane_cp05

0xb522,	// (0x0004831d) heading_pane_cp02_ParamLimits

0xb522,	// (0x0004831d) heading_pane_cp02

0xb53c,	// (0x00048337) list_popup_blid_pane

0xb544,	// (0x0004833f) list_blid_sat_info_pane_ParamLimits

0xb544,	// (0x0004833f) list_blid_sat_info_pane

0xb557,	// (0x00048352) list_blid_sat_info_pane_g1

0xb55f,	// (0x0004835a) list_blid_sat_info_pane_t1

0x4c26,	// (0x00041a21) mup_equalizer_pane_ParamLimits

0x4c26,	// (0x00041a21) mup_equalizer_pane

0x4c47,	// (0x00041a42) mup_equalizer_pane_cp1_ParamLimits

0x4c47,	// (0x00041a42) mup_equalizer_pane_cp1

0x4c68,	// (0x00041a63) mup_equalizer_pane_cp2_ParamLimits

0x4c68,	// (0x00041a63) mup_equalizer_pane_cp2

0x4c89,	// (0x00041a84) mup_equalizer_pane_cp3_ParamLimits

0x4c89,	// (0x00041a84) mup_equalizer_pane_cp3

0x4caa,	// (0x00041aa5) mup_equalizer_pane_cp4_ParamLimits

0x4caa,	// (0x00041aa5) mup_equalizer_pane_cp4

0x4ccb,	// (0x00041ac6) mup_equalizer_pane_cp5

0x4ce1,	// (0x00041adc) mup_equalizer_pane_cp6

0x4cf9,	// (0x00041af4) mup_equalizer_pane_cp7

0xc6f1,	// (0x000494ec) bg_popup_call_poc_act_pane_g9

0xc6f9,	// (0x000494f4) bg_popup_call_poc_act_pane_g10

0xc701,	// (0x000494fc) bg_popup_call_poc_act_pane_g11

0x000a,

0xa73c,	// (0x00047537) mup_scale_pane

0xa856,	// (0x00047651) mup_scale_pane_g1

0xb56d,	// (0x00048368) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004c265) mup_scale_pane_g

0xb591,	// (0x0004838c) msg_data_pane

0xb599,	// (0x00048394) scroll_pane_cp017

0x10b8,	// (0x0003deb3) bg_list_pane_cp04_ParamLimits

0x10b8,	// (0x0003deb3) bg_list_pane_cp04

0xb5a1,	// (0x0004839c) msg_data_pane_g1

0x4d23,	// (0x00041b1e) msg_data_pane_g2

0x4d2d,	// (0x00041b28) msg_data_pane_g3

0x4d35,	// (0x00041b30) msg_data_pane_g4

0x4d3d,	// (0x00041b38) msg_data_pane_g5

0x4d45,	// (0x00041b40) msg_data_pane_g6

0x4d4d,	// (0x00041b48) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004c274) msg_data_pane_g

0x10dc,	// (0x0003ded7) msg_text_pane_ParamLimits

0x10dc,	// (0x0003ded7) msg_text_pane

0x4d55,	// (0x00041b50) qrid_highlight_pane_cp011_ParamLimits

0x4d55,	// (0x00041b50) qrid_highlight_pane_cp011

0xa4ad,	// (0x000472a8) msg_body_pane

0xa4ad,	// (0x000472a8) msg_header_pane

0xb5b2,	// (0x000483ad) input_focus_pane_cp07

0x1128,	// (0x0003df23) msg_header_pane_t1_ParamLimits

0x1128,	// (0x0003df23) msg_header_pane_t1

0x113a,	// (0x0003df35) msg_header_pane_t2_ParamLimits

0x113a,	// (0x0003df35) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004c288) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004c288) msg_header_pane_t

0xb5c7,	// (0x000483c2) msg_body_pane_g1

0x114c,	// (0x0003df47) msg_body_pane_t1_ParamLimits

0x114c,	// (0x0003df47) msg_body_pane_t1

0x117d,	// (0x0003df78) msg_body_pane_t2_ParamLimits

0x117d,	// (0x0003df78) msg_body_pane_t2

0x118f,	// (0x0003df8a) msg_body_pane_t3_ParamLimits

0x118f,	// (0x0003df8a) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004c28d) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004c28d) msg_body_pane_t

0x4dc1,	// (0x00041bbc) main_viewer_pane_g1_ParamLimits

0x4dc1,	// (0x00041bbc) main_viewer_pane_g1

0x4dcd,	// (0x00041bc8) main_viewer_pane_g2_ParamLimits

0x4dcd,	// (0x00041bc8) main_viewer_pane_g2

0x4dd9,	// (0x00041bd4) main_viewer_pane_g3_ParamLimits

0x4dd9,	// (0x00041bd4) main_viewer_pane_g3

0x4dea,	// (0x00041be5) main_viewer_pane_g4_ParamLimits

0x4dea,	// (0x00041be5) main_viewer_pane_g4

0x4dfb,	// (0x00041bf6) main_viewer_pane_g5_ParamLimits

0x4dfb,	// (0x00041bf6) main_viewer_pane_g5

0x4dfb,	// (0x00041bf6) main_viewer_pane_g7_ParamLimits

0x4dfb,	// (0x00041bf6) main_viewer_pane_g7

0x4e0d,	// (0x00041c08) main_viewer_pane_g8_ParamLimits

0x4e0d,	// (0x00041c08) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004c29d) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004c29d) main_viewer_pane_g

0xb5cf,	// (0x000483ca) viewer_content_pane_ParamLimits

0xb5cf,	// (0x000483ca) viewer_content_pane

0x4e45,	// (0x00041c40) main_postcard_pane_g1_ParamLimits

0x4e45,	// (0x00041c40) main_postcard_pane_g1

0x4e53,	// (0x00041c4e) main_postcard_pane_g2_ParamLimits

0x4e53,	// (0x00041c4e) main_postcard_pane_g2

0x4e61,	// (0x00041c5c) main_postcard_pane_g3_ParamLimits

0x4e61,	// (0x00041c5c) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004c2ae) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004c2ae) main_postcard_pane_g

0x4e71,	// (0x00041c6c) main_postcard_pane_g4

0xc8d3,	// (0x000496ce) smil_status_volume_pane_g2

0x4e9d,	// (0x00041c98) postcard_pane_ParamLimits

0x4e9d,	// (0x00041c98) postcard_pane

0xb0a0,	// (0x00047e9b) postcard_pane_g1_ParamLimits

0xb0a0,	// (0x00047e9b) postcard_pane_g1

0x4ecf,	// (0x00041cca) postcard_pane_g2_ParamLimits

0x4ecf,	// (0x00041cca) postcard_pane_g2

0x4edb,	// (0x00041cd6) postcard_pane_g3_ParamLimits

0x4edb,	// (0x00041cd6) postcard_pane_g3

0xb5dd,	// (0x000483d8) postcard_pane_g4_ParamLimits

0xb5dd,	// (0x000483d8) postcard_pane_g4

0x4ee7,	// (0x00041ce2) postcard_pane_g5_ParamLimits

0x4ee7,	// (0x00041ce2) postcard_pane_g5

0x4ef3,	// (0x00041cee) postcard_pane_g6_ParamLimits

0x4ef3,	// (0x00041cee) postcard_pane_g6

0xb5eb,	// (0x000483e6) postcard_pane_g7_ParamLimits

0xb5eb,	// (0x000483e6) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004c2bb) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004c2bb) postcard_pane_g

0x4eff,	// (0x00041cfa) main_mp2_pane_g1_ParamLimits

0x4eff,	// (0x00041cfa) main_mp2_pane_g1

0x4f0b,	// (0x00041d06) main_mp2_pane_g2_ParamLimits

0x4f0b,	// (0x00041d06) main_mp2_pane_g2

0x4f17,	// (0x00041d12) main_mp2_pane_g3_ParamLimits

0x4f17,	// (0x00041d12) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004c2ca) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004c2ca) main_mp2_pane_g

0x4f23,	// (0x00041d1e) main_mp2_pane_t1_ParamLimits

0x4f23,	// (0x00041d1e) main_mp2_pane_t1

0x4f3a,	// (0x00041d35) main_mp2_pane_t2_ParamLimits

0x4f3a,	// (0x00041d35) main_mp2_pane_t2

0x4f4e,	// (0x00041d49) main_mp2_pane_t3_ParamLimits

0x4f4e,	// (0x00041d49) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004c2d1) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004c2d1) main_mp2_pane_t

0xb5f9,	// (0x000483f4) pec_content_pane_ParamLimits

0xb5f9,	// (0x000483f4) pec_content_pane

0xab6f,	// (0x0004796a) scroll_pane_cp015

0xb60b,	// (0x00048406) pec_attribute_pane_ParamLimits

0xb60b,	// (0x00048406) pec_attribute_pane

0x4f60,	// (0x00041d5b) pec_content_pane_g1_ParamLimits

0x4f60,	// (0x00041d5b) pec_content_pane_g1

0xb61b,	// (0x00048416) pec_content_pane_t1_ParamLimits

0xb61b,	// (0x00048416) pec_content_pane_t1

0xb62d,	// (0x00048428) pec_content_pane_t2_ParamLimits

0xb62d,	// (0x00048428) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004c2d8) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004c2d8) pec_content_pane_t

0x4f6c,	// (0x00041d67) list_single_graphic_pane_cp01_ParamLimits

0x4f6c,	// (0x00041d67) list_single_graphic_pane_cp01

0xa73c,	// (0x00047537) bg_popup_sub_pane_cp04

0xb63f,	// (0x0004843a) popup_mup_playback_window_g1

0xb64b,	// (0x00048446) popup_mup_playback_window_t1

0xb660,	// (0x0004845b) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004c2dd) popup_mup_playback_window_t

0xb697,	// (0x00048492) main_image_pane_g1_ParamLimits

0xb697,	// (0x00048492) main_image_pane_g1

0xb6da,	// (0x000484d5) scroll_pane_cp018_ParamLimits

0xb6da,	// (0x000484d5) scroll_pane_cp018

0xb6f2,	// (0x000484ed) scroll_pane_cp016_ParamLimits

0xb6f2,	// (0x000484ed) scroll_pane_cp016

0x5005,	// (0x00041e00) smil2_image_pane_ParamLimits

0x5005,	// (0x00041e00) smil2_image_pane

0x5035,	// (0x00041e30) smil2_root_pane_ParamLimits

0x5035,	// (0x00041e30) smil2_root_pane

0x5061,	// (0x00041e5c) smil2_text_pane_ParamLimits

0x5061,	// (0x00041e5c) smil2_text_pane

0xa4ad,	// (0x000472a8) bg_list_pane_cp06

0xb72e,	// (0x00048529) grid_radio_pane

0xa4ad,	// (0x000472a8) bg_popup_window_pane_cp06

0xb736,	// (0x00048531) main_fmradio_pane_t1

0xb0d4,	// (0x00047ecf) heading_pane_cp04

0xb744,	// (0x0004853f) main_fmradio_pane_t2

0xc709,	// (0x00049504) popup_cale_lunar_info_window_g1

0xb752,	// (0x0004854d) main_fmradio_pane_t3

0xc711,	// (0x0004950c) popup_cale_lunar_info_window_g2

0xb760,	// (0x0004855b) main_fmradio_pane_t4

0x0001,

0xb76e,	// (0x00048569) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004c3b8) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004c2f2) main_fmradio_pane_t

0xb77c,	// (0x00048577) wait_bar_pane_cp03

0xb784,	// (0x0004857f) cell_fmradio_pane_ParamLimits

0xb784,	// (0x0004857f) cell_fmradio_pane

0xb5eb,	// (0x000483e6) cell_fmradio_pane_g1_ParamLimits

0xb5eb,	// (0x000483e6) cell_fmradio_pane_g1

0xa4ad,	// (0x000472a8) grid_highlight_pane_cp011

0xb797,	// (0x00048592) poc_content_pane_ParamLimits

0xb797,	// (0x00048592) poc_content_pane

0xb7a9,	// (0x000485a4) scroll_pane_cp019

0x50a1,	// (0x00041e9c) popup_call_poc_act_window_ParamLimits

0x50a1,	// (0x00041e9c) popup_call_poc_act_window

0x50ae,	// (0x00041ea9) popup_call_poc_inact_window_ParamLimits

0x50ae,	// (0x00041ea9) popup_call_poc_inact_window

0xf594,	// (0x0004c38f) bg_popup_call_poc_act_pane_g

0xc681,	// (0x0004947c) bg_popup_call_poc_inact_pane_g1

0xc689,	// (0x00049484) bg_popup_call_poc_inact_pane_g2

0xb7b1,	// (0x000485ac) popup_call_poc_act_window_g2

0xc691,	// (0x0004948c) bg_popup_call_poc_inact_pane_g3

0xc699,	// (0x00049494) bg_popup_call_poc_inact_pane_g4

0xc6a1,	// (0x0004949c) bg_popup_call_poc_inact_pane_g5

0xb7b9,	// (0x000485b4) popup_call_poc_act_window_t1_ParamLimits

0xb7b9,	// (0x000485b4) popup_call_poc_act_window_t1

0xb7e1,	// (0x000485dc) popup_call_poc_act_window_t2_ParamLimits

0xb7e1,	// (0x000485dc) popup_call_poc_act_window_t2

0xb809,	// (0x00048604) popup_call_poc_act_window_t3_ParamLimits

0xb809,	// (0x00048604) popup_call_poc_act_window_t3

0xb831,	// (0x0004862c) popup_call_poc_act_window_t4_ParamLimits

0xb831,	// (0x0004862c) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004c2fd) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004c2fd) popup_call_poc_act_window_t

0xc6a9,	// (0x000494a4) bg_popup_call_poc_inact_pane_g6

0xc6b1,	// (0x000494ac) bg_popup_call_poc_inact_pane_g7

0xc6b9,	// (0x000494b4) bg_popup_call_poc_inact_pane_g8

0xb843,	// (0x0004863e) popup_call_poc_inact_window_g2

0xc6c1,	// (0x000494bc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0004c37c) bg_popup_call_poc_inact_pane_g

0xb84b,	// (0x00048646) popup_call_poc_inact_window_t1_ParamLimits

0xb84b,	// (0x00048646) popup_call_poc_inact_window_t1

0xb860,	// (0x0004865b) popup_call_poc_inact_window_t2_ParamLimits

0xb860,	// (0x0004865b) popup_call_poc_inact_window_t2

0xb875,	// (0x00048670) popup_call_poc_inact_window_t3_ParamLimits

0xb875,	// (0x00048670) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004c306) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004c306) popup_call_poc_inact_window_t

0xc846,	// (0x00049641) context_pane_ParamLimits

0x56e2,	// (0x000424dd) signal_pane_ParamLimits

0xa9c6,	// (0x000477c1) main_call2_pane

0x5655,	// (0x00042450) popup_phob_thumbnail2_window_ParamLimits

0x5655,	// (0x00042450) popup_phob_thumbnail2_window

0x4d6f,	// (0x00041b6a) aid_hotspot_pointer_arrow_pane

0x4d77,	// (0x00041b72) aid_hotspot_pointer_hand_pane

0x53d0,	// (0x000421cb) phob_pre_status_pane_g5

0x30a8,	// (0x0003fea3) cams_zoom_pane_ParamLimits

0x30b4,	// (0x0003feaf) image_vga_pane_ParamLimits

0x30c3,	// (0x0003febe) main_camera_pane_g1_ParamLimits

0x30d1,	// (0x0003fecc) main_camera_pane_g2_ParamLimits

0x30dd,	// (0x0003fed8) main_camera_pane_g3_ParamLimits

0x30e9,	// (0x0003fee4) main_camera_pane_g4_ParamLimits

0x30f5,	// (0x0003fef0) main_camera_pane_g5_ParamLimits

0x3101,	// (0x0003fefc) main_camera_pane_g6_ParamLimits

0x310d,	// (0x0003ff08) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004c005) main_camera_pane_g_ParamLimits

0x3119,	// (0x0003ff14) main_camera_pane_t1_ParamLimits

0x312b,	// (0x0003ff26) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004c016) main_camera_pane_t_ParamLimits

0xa73c,	// (0x00047537) bg_popup_preview_window_pane_cp01_ParamLimits

0xa73c,	// (0x00047537) bg_popup_preview_window_pane_cp01

0xb88a,	// (0x00048685) popup_phob_thumbnail2_window_g1_ParamLimits

0xb88a,	// (0x00048685) popup_phob_thumbnail2_window_g1

0xa4ad,	// (0x000472a8) call2_cli_visual_pane

0x50ca,	// (0x00041ec5) popup_call2_audio_conf_window_ParamLimits

0x50ca,	// (0x00041ec5) popup_call2_audio_conf_window

0x50df,	// (0x00041eda) popup_call2_audio_first_window_ParamLimits

0x50df,	// (0x00041eda) popup_call2_audio_first_window

0x517d,	// (0x00041f78) popup_call2_audio_in_window_ParamLimits

0x517d,	// (0x00041f78) popup_call2_audio_in_window

0x51bf,	// (0x00041fba) popup_call2_audio_out_window_ParamLimits

0x51bf,	// (0x00041fba) popup_call2_audio_out_window

0x5221,	// (0x0004201c) popup_call2_audio_second_window_ParamLimits

0x5221,	// (0x0004201c) popup_call2_audio_second_window

0x527f,	// (0x0004207a) popup_call2_audio_wait_window_ParamLimits

0x527f,	// (0x0004207a) popup_call2_audio_wait_window

0xa4ad,	// (0x000472a8) bg_popup_call2_act_pane_cp03

0xa71e,	// (0x00047519) list_conf_pane_cp

0xb896,	// (0x00048691) popup_call2_audio_conf_window_t1

0xb131,	// (0x00047f2c) list_single_graphic_popup_conf2_pane_ParamLimits

0xb131,	// (0x00047f2c) list_single_graphic_popup_conf2_pane

0xb144,	// (0x00047f3f) list_highlight_pane_cp04

0xb8a4,	// (0x0004869f) list_single_graphic_popup_conf2_pane_g1

0xb155,	// (0x00047f50) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004c30d) list_single_graphic_popup_conf2_pane_g

0xb8ae,	// (0x000486a9) list_single_graphic_popup_conf2_pane_t1

0xb8bc,	// (0x000486b7) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8bc,	// (0x000486b7) bg_popup_call2_act_pane_cp01

0xb946,	// (0x00048741) call_type_pane_cp05_ParamLimits

0xb946,	// (0x00048741) call_type_pane_cp05

0xb99a,	// (0x00048795) popup_call2_audio_second_window_g1_ParamLimits

0xb99a,	// (0x00048795) popup_call2_audio_second_window_g1

0xb9ee,	// (0x000487e9) popup_call2_audio_second_window_g2_ParamLimits

0xb9ee,	// (0x000487e9) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004c312) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004c312) popup_call2_audio_second_window_g

0xba53,	// (0x0004884e) popup_call2_audio_second_window_t1_ParamLimits

0xba53,	// (0x0004884e) popup_call2_audio_second_window_t1

0xbb0e,	// (0x00048909) popup_call2_audio_second_window_t2_ParamLimits

0xbb0e,	// (0x00048909) popup_call2_audio_second_window_t2

0xbb61,	// (0x0004895c) popup_call2_audio_second_window_t3_ParamLimits

0xbb61,	// (0x0004895c) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004c319) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004c319) popup_call2_audio_second_window_t

0xa4ad,	// (0x000472a8) bg_popup_call2_in_pane_cp02

0xa4b7,	// (0x000472b2) call_type_pane_cp04

0xa4bf,	// (0x000472ba) popup_call2_audio_wait_window_g1

0xa4c7,	// (0x000472c2) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004bef4) popup_call2_audio_wait_window_g

0xa4cf,	// (0x000472ca) popup_call2_audio_wait_window_t3

0xbc54,	// (0x00048a4f) bg_popup_call2_act_pane_ParamLimits

0xbc54,	// (0x00048a4f) bg_popup_call2_act_pane

0xbd14,	// (0x00048b0f) call_type_pane_cp03_ParamLimits

0xbd14,	// (0x00048b0f) call_type_pane_cp03

0xbd78,	// (0x00048b73) popup_call2_audio_first_window_g1_ParamLimits

0xbd78,	// (0x00048b73) popup_call2_audio_first_window_g1

0xbde8,	// (0x00048be3) popup_call2_audio_first_window_g2_ParamLimits

0xbde8,	// (0x00048be3) popup_call2_audio_first_window_g2

0xb0a0,	// (0x00047e9b) popup_call2_audio_first_window_g3_ParamLimits

0xb0a0,	// (0x00047e9b) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004c322) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004c322) popup_call2_audio_first_window_g

0xbec6,	// (0x00048cc1) popup_call2_audio_first_window_t1_ParamLimits

0xbec6,	// (0x00048cc1) popup_call2_audio_first_window_t1

0xbfc9,	// (0x00048dc4) popup_call2_audio_first_window_t4_ParamLimits

0xbfc9,	// (0x00048dc4) popup_call2_audio_first_window_t4

0xc0ac,	// (0x00048ea7) popup_call2_audio_first_window_t5_ParamLimits

0xc0ac,	// (0x00048ea7) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004c32d) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004c32d) popup_call2_audio_first_window_t

0xa734,	// (0x0004752f) bg_popup_call2_act_pane_g1

0xc719,	// (0x00049514) popup_cale_lunar_info_window_t1

0xc727,	// (0x00049522) popup_cale_lunar_info_window_t2

0xc735,	// (0x00049530) popup_cale_lunar_info_window_t3

0xa4ad,	// (0x000472a8) bg_popup_call2_bubble_pane

0xc1ad,	// (0x00048fa8) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1ad,	// (0x00048fa8) bg_popup_call2_in_pane_cp01

0xa189,	// (0x00046f84) call_type_pane_cp02

0xc1f5,	// (0x00048ff0) popup_call2_audio_out_window_g1_ParamLimits

0xc1f5,	// (0x00048ff0) popup_call2_audio_out_window_g1

0xc221,	// (0x0004901c) popup_call2_audio_out_window_g2_ParamLimits

0xc221,	// (0x0004901c) popup_call2_audio_out_window_g2

0xc249,	// (0x00049044) popup_call2_audio_out_window_g3_ParamLimits

0xc249,	// (0x00049044) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004c336) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004c336) popup_call2_audio_out_window_g

0xc284,	// (0x0004907f) popup_call2_audio_out_window_t1_ParamLimits

0xc284,	// (0x0004907f) popup_call2_audio_out_window_t1

0xc2e3,	// (0x000490de) popup_call2_audio_out_window_t2_ParamLimits

0xc2e3,	// (0x000490de) popup_call2_audio_out_window_t2

0xc337,	// (0x00049132) popup_call2_audio_out_window_t3_ParamLimits

0xc337,	// (0x00049132) popup_call2_audio_out_window_t3

0xc34d,	// (0x00049148) popup_call2_audio_out_window_t4_ParamLimits

0xc34d,	// (0x00049148) popup_call2_audio_out_window_t4

0xc363,	// (0x0004915e) popup_call2_audio_out_window_t5_ParamLimits

0xc363,	// (0x0004915e) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004c33f) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004c33f) popup_call2_audio_out_window_t

0xc3c7,	// (0x000491c2) bg_popup_call2_in_pane_ParamLimits

0xc3c7,	// (0x000491c2) bg_popup_call2_in_pane

0xc423,	// (0x0004921e) popup_call2_audio_in_window_g1_ParamLimits

0xc423,	// (0x0004921e) popup_call2_audio_in_window_g1

0xc45b,	// (0x00049256) popup_call2_audio_in_window_g2_ParamLimits

0xc45b,	// (0x00049256) popup_call2_audio_in_window_g2

0xc493,	// (0x0004928e) popup_call2_audio_in_window_g3_ParamLimits

0xc493,	// (0x0004928e) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004c34c) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004c34c) popup_call2_audio_in_window_g

0xc4eb,	// (0x000492e6) popup_call2_audio_in_window_t1_ParamLimits

0xc4eb,	// (0x000492e6) popup_call2_audio_in_window_t1

0xc56b,	// (0x00049366) popup_call2_audio_in_window_t2_ParamLimits

0xc56b,	// (0x00049366) popup_call2_audio_in_window_t2

0xc5eb,	// (0x000493e6) popup_call2_audio_in_window_t3_ParamLimits

0xc5eb,	// (0x000493e6) popup_call2_audio_in_window_t3

0xc605,	// (0x00049400) popup_call2_audio_in_window_t4_ParamLimits

0xc605,	// (0x00049400) popup_call2_audio_in_window_t4

0xc617,	// (0x00049412) popup_call2_audio_in_window_t5_ParamLimits

0xc617,	// (0x00049412) popup_call2_audio_in_window_t5

0xc62c,	// (0x00049427) popup_call2_audio_in_window_t6_ParamLimits

0xc62c,	// (0x00049427) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004c355) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004c355) popup_call2_audio_in_window_t

0xa734,	// (0x0004752f) bg_popup_call2_in_pane_g1

0xc743,	// (0x0004953e) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004c3bd) popup_cale_lunar_info_window_t

0xa73c,	// (0x00047537) bg_popup_call2_rect_pane_ParamLimits

0xa73c,	// (0x00047537) bg_popup_call2_rect_pane

0xa4ad,	// (0x000472a8) call2_cli_visual_graphic_pane

0xa4ad,	// (0x000472a8) call2_cli_visual_text_pane

0x5788,	// (0x00042583) smil_status_volume_pane_g3

0x0002,

0xa856,	// (0x00047651) call2_cli_visual_graphic_pane_g1

0xa856,	// (0x00047651) call2_cli_visual_graphic_pane_g2

0xa856,	// (0x00047651) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004c362) call2_cli_visual_graphic_pane_g

0xc641,	// (0x0004943c) bg_popup_call2_rect_pane_g1

0xa8e2,	// (0x000476dd) bg_popup_call2_rect_pane_g2

0xc649,	// (0x00049444) bg_popup_call2_rect_pane_g3

0xc651,	// (0x0004944c) bg_popup_call2_rect_pane_g4

0xc659,	// (0x00049454) bg_popup_call2_rect_pane_g5

0xc661,	// (0x0004945c) bg_popup_call2_rect_pane_g6

0xc669,	// (0x00049464) bg_popup_call2_rect_pane_g7

0xc671,	// (0x0004946c) bg_popup_call2_rect_pane_g8

0xc679,	// (0x00049474) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004c369) bg_popup_call2_rect_pane_g

0xc681,	// (0x0004947c) bg_popup_call2_bubble_pane_g1

0xc689,	// (0x00049484) bg_popup_call2_bubble_pane_g2

0xc691,	// (0x0004948c) bg_popup_call2_bubble_pane_g3

0xc699,	// (0x00049494) bg_popup_call2_bubble_pane_g4

0xc6a1,	// (0x0004949c) bg_popup_call2_bubble_pane_g5

0xc6a9,	// (0x000494a4) bg_popup_call2_bubble_pane_g6

0xc6b1,	// (0x000494ac) bg_popup_call2_bubble_pane_g7

0xc6b9,	// (0x000494b4) bg_popup_call2_bubble_pane_g8

0xc6c1,	// (0x000494bc) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004c37c) bg_popup_call2_bubble_pane_g

0x2ad9,	// (0x0003f8d4) aid_cale_week_size_cell_pane

0x313d,	// (0x0003ff38) aid_cams_cif_uncrop_pane_ParamLimits

0x313d,	// (0x0003ff38) aid_cams_cif_uncrop_pane

0x3298,	// (0x00040093) aid_cams_size_cell_ParamLimits

0x3298,	// (0x00040093) aid_cams_size_cell

0x32a4,	// (0x0004009f) grid_cams_pane_ParamLimits

0x32b2,	// (0x000400ad) linegrid_cams_pane_ParamLimits

0x3389,	// (0x00040184) call_video_pane_t1

0x33aa,	// (0x000401a5) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004c069) call_video_pane_t

0x38f1,	// (0x000406ec) aid_cale_month_size_cell_pane_ParamLimits

0x38f1,	// (0x000406ec) aid_cale_month_size_cell_pane

0xf60b,	// (0x0004c406) smil_status_volume_pane_g

0x5795,	// (0x00042590) volume_smil_pane_ParamLimits

0x2248,	// (0x0003f043) aid_popup2_width_pane

0x29db,	// (0x0003f7d6) cell_qdial_pane_g4_ParamLimits

0x29db,	// (0x0003f7d6) cell_qdial_pane_g4

0x480e,	// (0x00041609) aid_blid_cardinal_pane_ParamLimits

0x481e,	// (0x00041619) aid_blid_destination_pane_ParamLimits

0x481e,	// (0x00041619) aid_blid_destination_pane

0xa73c,	// (0x00047537) bg_popup_call_poc_act_pane_ParamLimits

0xa73c,	// (0x00047537) bg_popup_call_poc_act_pane

0xa73c,	// (0x00047537) bg_popup_call_poc_inact_pane_ParamLimits

0xa73c,	// (0x00047537) bg_popup_call_poc_inact_pane

0xc6c9,	// (0x000494c4) bg_popup_call_poc_act_pane_g1

0xc6d1,	// (0x000494cc) bg_popup_call_poc_act_pane_g2

0xc6d9,	// (0x000494d4) bg_popup_call_poc_act_pane_g3

0xc699,	// (0x00049494) bg_popup_call_poc_act_pane_g4

0xc6a1,	// (0x0004949c) bg_popup_call_poc_act_pane_g5

0xc6e1,	// (0x000494dc) bg_popup_call_poc_act_pane_g6

0xc6b1,	// (0x000494ac) bg_popup_call_poc_act_pane_g7

0xc6e9,	// (0x000494e4) bg_popup_call_poc_act_pane_g8

0xa4ad,	// (0x000472a8) main_usb_pane

0x5584,	// (0x0004237f) popup_cale_lunar_info_window

0x36d3,	// (0x000404ce) im_reading_pane_t1_ParamLimits

0xaac7,	// (0x000478c2) list_im_pane_ParamLimits

0xaad8,	// (0x000478d3) scroll_pane_cp07_ParamLimits

0xa4ad,	// (0x000472a8) grid_highlight_pane_cp012

0xa73c,	// (0x00047537) mup_scale_pane_ParamLimits

0xb0a0,	// (0x00047e9b) main_usb_pane_g1_ParamLimits

0xb0a0,	// (0x00047e9b) main_usb_pane_g1

0x52f3,	// (0x000420ee) main_usb_pane_g2_ParamLimits

0x52f3,	// (0x000420ee) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0004c3a6) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0004c3a6) main_usb_pane_g

0x52ff,	// (0x000420fa) main_usb_pane_t1_ParamLimits

0x52ff,	// (0x000420fa) main_usb_pane_t1

0x5311,	// (0x0004210c) main_usb_pane_t2_ParamLimits

0x5311,	// (0x0004210c) main_usb_pane_t2

0x5323,	// (0x0004211e) main_usb_pane_t3_ParamLimits

0x5323,	// (0x0004211e) main_usb_pane_t3

0x5335,	// (0x00042130) main_usb_pane_t4_ParamLimits

0x5335,	// (0x00042130) main_usb_pane_t4

0x5347,	// (0x00042142) main_usb_pane_t5_ParamLimits

0x5347,	// (0x00042142) main_usb_pane_t5

0x5359,	// (0x00042154) main_usb_pane_t6_ParamLimits

0x5359,	// (0x00042154) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004c3ab) main_usb_pane_t_ParamLimits

0x47b4,	// (0x000415af) aid_text_placing

0x47c0,	// (0x000415bb) main_location2_pane_t1_ParamLimits

0x47d4,	// (0x000415cf) main_location2_pane_t2_ParamLimits

0x47e8,	// (0x000415e3) main_location2_pane_t3_ParamLimits

0x47fc,	// (0x000415f7) main_location2_pane_t4_ParamLimits

0x47fc,	// (0x000415f7) main_location2_pane_t4

0xf3cf,	// (0x0004c1ca) main_location2_pane_t_ParamLimits

0xa778,	// (0x00047573) find_pinb_pane_g2_ParamLimits

0xa778,	// (0x00047573) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0004bf1a) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0004bf1a) find_pinb_pane_g

0xa784,	// (0x0004757f) find_pinb_pane_t1_ParamLimits

0xa796,	// (0x00047591) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0004bf1f) find_pinb_pane_t_ParamLimits

0xa4ad,	// (0x000472a8) main_call3_pane

0x3e45,	// (0x00040c40) cale_month_day_heading_pane_t1_ParamLimits

0x3ecb,	// (0x00040cc6) cale_month_day_heading_pane_t2_ParamLimits

0x3f5c,	// (0x00040d57) cale_month_day_heading_pane_t3_ParamLimits

0x3fed,	// (0x00040de8) cale_month_day_heading_pane_t4_ParamLimits

0x407e,	// (0x00040e79) cale_month_day_heading_pane_t5_ParamLimits

0x410f,	// (0x00040f0a) cale_month_day_heading_pane_t6_ParamLimits

0x41a0,	// (0x00040f9b) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004c0a1) cale_month_day_heading_pane_t_ParamLimits

0xad22,	// (0x00047b1d) smil_status_volume_pane

0x4eb7,	// (0x00041cb2) postcard_address_pane_ParamLimits

0x4eb7,	// (0x00041cb2) postcard_address_pane

0x4ec3,	// (0x00041cbe) postcard_message_pane_ParamLimits

0x4ec3,	// (0x00041cbe) postcard_message_pane

0x52be,	// (0x000420b9) call2_cli_visual_pane_t1_ParamLimits

0x52be,	// (0x000420b9) call2_cli_visual_pane_t1

0x58ec,	// (0x000426e7) postcard_message_pane_t1_ParamLimits

0x58ec,	// (0x000426e7) postcard_message_pane_t1

0x58d5,	// (0x000426d0) postcard_address_pane_t1_ParamLimits

0x58d5,	// (0x000426d0) postcard_address_pane_t1

0x58c6,	// (0x000426c1) popup_call3_audio_in_window_ParamLimits

0x58c6,	// (0x000426c1) popup_call3_audio_in_window

0x57aa,	// (0x000425a5) bg_popup_call3_in_pane_ParamLimits

0x57aa,	// (0x000425a5) bg_popup_call3_in_pane

0x580c,	// (0x00042607) popup_call3_audio_in_window_g1_ParamLimits

0x580c,	// (0x00042607) popup_call3_audio_in_window_g1

0x5824,	// (0x0004261f) popup_call3_audio_in_window_g2_ParamLimits

0x5824,	// (0x0004261f) popup_call3_audio_in_window_g2

0x583c,	// (0x00042637) popup_call3_audio_in_window_g3_ParamLimits

0x583c,	// (0x00042637) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004c40d) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004c40d) popup_call3_audio_in_window_g

0x5864,	// (0x0004265f) popup_call3_audio_in_window_t1_ParamLimits

0x5864,	// (0x0004265f) popup_call3_audio_in_window_t1

0x588c,	// (0x00042687) popup_call3_audio_in_window_t2_ParamLimits

0x588c,	// (0x00042687) popup_call3_audio_in_window_t2

0x58b4,	// (0x000426af) popup_call3_audio_in_window_t3_ParamLimits

0x58b4,	// (0x000426af) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0004c416) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0004c416) popup_call3_audio_in_window_t

0xa9c6,	// (0x000477c1) bg_popup_call3_rect_pane

0xc641,	// (0x0004943c) bg_popup_call3_rect_pane_g1

0xa8e2,	// (0x000476dd) bg_popup_call3_rect_pane_g2

0xc649,	// (0x00049444) bg_popup_call3_rect_pane_g3

0xc651,	// (0x0004944c) bg_popup_call3_rect_pane_g4

0xc659,	// (0x00049454) bg_popup_call3_rect_pane_g5

0xc661,	// (0x0004945c) bg_popup_call3_rect_pane_g6

0xc669,	// (0x00049464) bg_popup_call3_rect_pane_g7

0x4b34,	// (0x0004192f) mup_visualizer_osc_pane

0xb4ff,	// (0x000482fa) mup_visualizer_spec_pane

0x57ca,	// (0x000425c5) call3_video_qcif_pane_ParamLimits

0x57ca,	// (0x000425c5) call3_video_qcif_pane

0x57dc,	// (0x000425d7) call3_video_qcif_uncrop_pane_ParamLimits

0x57dc,	// (0x000425d7) call3_video_qcif_uncrop_pane

0x57ea,	// (0x000425e5) call3_video_subqcif_pane_ParamLimits

0x57ea,	// (0x000425e5) call3_video_subqcif_pane

0x57fc,	// (0x000425f7) call3_video_subqcif_uncrop_pane_ParamLimits

0x57fc,	// (0x000425f7) call3_video_subqcif_uncrop_pane

0x5854,	// (0x0004264f) popup_call3_audio_in_window_g4_ParamLimits

0x5854,	// (0x0004264f) popup_call3_audio_in_window_g4

0x5777,	// (0x00042572) mup_spec_half_pane

0x5780,	// (0x0004257b) mup_spec_half_pane_cp

0xc8a6,	// (0x000496a1) mup_osc_middle_pane

0xc8af,	// (0x000496aa) mup_visualizer_osc_pane_g1

0x5758,	// (0x00042553) mup_spec_bar_pane_ParamLimits

0x5758,	// (0x00042553) mup_spec_bar_pane

0xc893,	// (0x0004968e) mup_spec_bar_pane_g1

0xc89d,	// (0x00049698) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004c401) mup_spec_bar_pane_g

0x2ad9,	// (0x0003f8d4) aid_cale_week_size_cell_pane_ParamLimits

0x2aee,	// (0x0003f8e9) bg_cale_heading_pane_ParamLimits

0xa91f,	// (0x0004771a) bg_cale_pane_cp01_ParamLimits

0x2b10,	// (0x0003f90b) cale_week_corner_pane_ParamLimits

0x2b2a,	// (0x0003f925) cale_week_day_heading_pane_ParamLimits

0x2b4c,	// (0x0003f947) cale_week_scroll_pane_g1_ParamLimits

0x2b69,	// (0x0003f964) cale_week_scroll_pane_g2_ParamLimits

0x2b7c,	// (0x0003f977) cale_week_scroll_pane_g3_ParamLimits

0x2b8f,	// (0x0003f98a) cale_week_scroll_pane_g4_ParamLimits

0x2ba2,	// (0x0003f99d) cale_week_scroll_pane_g5_ParamLimits

0x2bb5,	// (0x0003f9b0) cale_week_scroll_pane_g6_ParamLimits

0x2bc8,	// (0x0003f9c3) cale_week_scroll_pane_g7_ParamLimits

0x2bdb,	// (0x0003f9d6) cale_week_scroll_pane_g8_ParamLimits

0x2bf0,	// (0x0003f9eb) cale_week_scroll_pane_g9_ParamLimits

0x2c03,	// (0x0003f9fe) cale_week_scroll_pane_g10_ParamLimits

0x2c16,	// (0x0003fa11) cale_week_scroll_pane_g11_ParamLimits

0x2c29,	// (0x0003fa24) cale_week_scroll_pane_g12_ParamLimits

0x2c40,	// (0x0003fa3b) cale_week_scroll_pane_g13_ParamLimits

0x2c5b,	// (0x0003fa56) cale_week_scroll_pane_g14_ParamLimits

0x2c76,	// (0x0003fa71) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0004bfab) cale_week_scroll_pane_g_ParamLimits

0x2ca6,	// (0x0003faa1) cale_week_time_pane_ParamLimits

0x2cbb,	// (0x0003fab6) grid_cale_week_pane_ParamLimits

0xa93c,	// (0x00047737) listscroll_cale_week_pane_t1

0xa94e,	// (0x00047749) scroll_pane_cp08_ParamLimits

0x395a,	// (0x00040755) cale_month_corner_pane_ParamLimits

0xacf8,	// (0x00047af3) cale_month_pane_t1

0x3de2,	// (0x00040bdd) cale_month_week_pane_ParamLimits

0xb0a0,	// (0x00047e9b) popup_call_status_window_g1_ParamLimits

0x45e7,	// (0x000413e2) popup_call_status_window_g2_ParamLimits

0x45f3,	// (0x000413ee) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004c151) popup_call_status_window_g_ParamLimits

0xb0c4,	// (0x00047ebf) aid_call2_pane

0x111c,	// (0x0003df17) msg_header_pane_g1

0x4eb7,	// (0x00041cb2) postcard_address2_pane_ParamLimits

0x4eb7,	// (0x00041cb2) postcard_address2_pane

0x4ec3,	// (0x00041cbe) postcard_message2_pane_ParamLimits

0x4ec3,	// (0x00041cbe) postcard_message2_pane

0x56f0,	// (0x000424eb) message2_row_pane_ParamLimits

0x56f0,	// (0x000424eb) message2_row_pane

0x570b,	// (0x00042506) address2_row_pane_ParamLimits

0x570b,	// (0x00042506) address2_row_pane

0xc861,	// (0x0004965c) postcard_message2_row_pane_g1

0xc869,	// (0x00049664) postcard_message2_row_pane_t1

0xc861,	// (0x0004965c) address2_row_pane_g1

0xc869,	// (0x00049664) address2_row_pane_t1

0x3023,	// (0x0003fe1e) aid_size_cell_vorec

0xa4ad,	// (0x000472a8) main_rss_pane

0x571e,	// (0x00042519) rss_list_single_pane_ParamLimits

0x571e,	// (0x00042519) rss_list_single_pane

0xc877,	// (0x00049672) rss_list_single_pane_t1

0xc885,	// (0x00049680) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004c3fc) rss_list_single_pane_t

0xa4ad,	// (0x000472a8) main_camera2_pane

0xa4ad,	// (0x000472a8) main_video2_pane

0x5950,	// (0x0004274b) cams_zoom_pane_cp2_ParamLimits

0x5950,	// (0x0004274b) cams_zoom_pane_cp2

0x595c,	// (0x00042757) image2_vga_pane_ParamLimits

0x595c,	// (0x00042757) image2_vga_pane

0x596b,	// (0x00042766) main_camera2_pane_g1_ParamLimits

0x596b,	// (0x00042766) main_camera2_pane_g1

0x5977,	// (0x00042772) main_camera2_pane_g2_ParamLimits

0x5977,	// (0x00042772) main_camera2_pane_g2

0x5983,	// (0x0004277e) main_camera2_pane_g3_ParamLimits

0x5983,	// (0x0004277e) main_camera2_pane_g3

0x598f,	// (0x0004278a) main_camera2_pane_g4_ParamLimits

0x598f,	// (0x0004278a) main_camera2_pane_g4

0x599b,	// (0x00042796) main_camera2_pane_g5_ParamLimits

0x599b,	// (0x00042796) main_camera2_pane_g5

0x59a7,	// (0x000427a2) main_camera2_pane_g6_ParamLimits

0x59a7,	// (0x000427a2) main_camera2_pane_g6

0x59b3,	// (0x000427ae) main_camera2_pane_g7_ParamLimits

0x59b3,	// (0x000427ae) main_camera2_pane_g7

0x59bf,	// (0x000427ba) main_camera2_pane_g8_ParamLimits

0x59bf,	// (0x000427ba) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004c41d) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004c41d) main_camera2_pane_g

0x59d7,	// (0x000427d2) main_camera2_pane_t1_ParamLimits

0x59d7,	// (0x000427d2) main_camera2_pane_t1

0x59e9,	// (0x000427e4) main_camera2_pane_t2_ParamLimits

0x59e9,	// (0x000427e4) main_camera2_pane_t2

0x59fb,	// (0x000427f6) main_camera2_pane_t3_ParamLimits

0x59fb,	// (0x000427f6) main_camera2_pane_t3

0x5a0d,	// (0x00042808) main_camera2_pane_t4_ParamLimits

0x5a0d,	// (0x00042808) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0004c430) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0004c430) main_camera2_pane_t

0x5a6f,	// (0x0004286a) cams_zoom_pane_cp4_ParamLimits

0x5a6f,	// (0x0004286a) cams_zoom_pane_cp4

0x5a7f,	// (0x0004287a) image2_cif_pane_ParamLimits

0x5a7f,	// (0x0004287a) image2_cif_pane

0x5a94,	// (0x0004288f) image2_subqcif_pane_ParamLimits

0x5a94,	// (0x0004288f) image2_subqcif_pane

0x5aa3,	// (0x0004289e) main_video2_pane_g1_ParamLimits

0x5aa3,	// (0x0004289e) main_video2_pane_g1

0x5ab5,	// (0x000428b0) main_video2_pane_g2_ParamLimits

0x5ab5,	// (0x000428b0) main_video2_pane_g2

0x5ac5,	// (0x000428c0) main_video2_pane_g3_ParamLimits

0x5ac5,	// (0x000428c0) main_video2_pane_g3

0x5ad5,	// (0x000428d0) main_video2_pane_g4_ParamLimits

0x5ad5,	// (0x000428d0) main_video2_pane_g4

0x5ae5,	// (0x000428e0) main_video2_pane_g5_ParamLimits

0x5ae5,	// (0x000428e0) main_video2_pane_g5

0x5af5,	// (0x000428f0) main_video2_pane_g6_ParamLimits

0x5af5,	// (0x000428f0) main_video2_pane_g6

0x0005,

0xf644,	// (0x0004c43f) main_video2_pane_g_ParamLimits

0xf644,	// (0x0004c43f) main_video2_pane_g

0x5b07,	// (0x00042902) main_video2_pane_t1_ParamLimits

0x5b07,	// (0x00042902) main_video2_pane_t1

0x5b21,	// (0x0004291c) main_video2_pane_t2_ParamLimits

0x5b21,	// (0x0004291c) main_video2_pane_t2

0x5b47,	// (0x00042942) main_video2_pane_t3_ParamLimits

0x5b47,	// (0x00042942) main_video2_pane_t3

0x0002,

0xf651,	// (0x0004c44c) main_video2_pane_t_ParamLimits

0xf651,	// (0x0004c44c) main_video2_pane_t

0x5410,	// (0x0004220b) call_muted_g2

0x0001,

0xf5f3,	// (0x0004c3ee) call_muted_g

0xa4ad,	// (0x000472a8) main_mup2_pane

0xc8e6,	// (0x000496e1) main_mup2_pane_g1_ParamLimits

0xc8e6,	// (0x000496e1) main_mup2_pane_g1

0x5b6d,	// (0x00042968) main_mup2_pane_g2_ParamLimits

0x5b6d,	// (0x00042968) main_mup2_pane_g2

0x5def,	// (0x00042bea) main_mup_pane_g13_cp1

0x5df7,	// (0x00042bf2) mup_volume_pane_cp1

0x5b8d,	// (0x00042988) main_mup2_pane_g4_ParamLimits

0x5b8d,	// (0x00042988) main_mup2_pane_g4

0x5ba2,	// (0x0004299d) main_mup2_pane_g5_ParamLimits

0x5ba2,	// (0x0004299d) main_mup2_pane_g5

0x5bb7,	// (0x000429b2) main_mup2_pane_g6_ParamLimits

0x5bb7,	// (0x000429b2) main_mup2_pane_g6

0x5bcc,	// (0x000429c7) main_mup2_pane_g7_ParamLimits

0x5bcc,	// (0x000429c7) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0004c453) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0004c453) main_mup2_pane_g

0x5be8,	// (0x000429e3) main_mup2_pane_t1_ParamLimits

0x5be8,	// (0x000429e3) main_mup2_pane_t1

0x5bff,	// (0x000429fa) main_mup2_pane_t2_ParamLimits

0x5bff,	// (0x000429fa) main_mup2_pane_t2

0x5c16,	// (0x00042a11) main_mup2_pane_t3_ParamLimits

0x5c16,	// (0x00042a11) main_mup2_pane_t3

0x5c2d,	// (0x00042a28) main_mup2_pane_t4_ParamLimits

0x5c2d,	// (0x00042a28) main_mup2_pane_t4

0x5c47,	// (0x00042a42) main_mup2_pane_t5_ParamLimits

0x5c47,	// (0x00042a42) main_mup2_pane_t5

0x5c61,	// (0x00042a5c) main_mup2_pane_t6_ParamLimits

0x5c61,	// (0x00042a5c) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0004c462) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0004c462) main_mup2_pane_t

0x5c99,	// (0x00042a94) mup2_visualizer_pane_ParamLimits

0x5c99,	// (0x00042a94) mup2_visualizer_pane

0x5ccf,	// (0x00042aca) mup_progress_pane_cp_ParamLimits

0x5ccf,	// (0x00042aca) mup_progress_pane_cp

0x5dda,	// (0x00042bd5) mup_volume_pane_cp_ParamLimits

0x5dda,	// (0x00042bd5) mup_volume_pane_cp

0x5ce6,	// (0x00042ae1) mup2_visualizer_pane_g1_ParamLimits

0x5ce6,	// (0x00042ae1) mup2_visualizer_pane_g1

0xc8f2,	// (0x000496ed) mup2_visualizer_pane_g2_ParamLimits

0xc8f2,	// (0x000496ed) mup2_visualizer_pane_g2

0x5cfb,	// (0x00042af6) mup2_visualizer_pane_g3_ParamLimits

0x5cfb,	// (0x00042af6) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0004c46f) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0004c46f) mup2_visualizer_pane_g

0xb726,	// (0x00048521) aid_size_cell_fmradio

0x5526,	// (0x00042321) aid_height_parent_landcape

0xab56,	// (0x00047951) wml_content_pane_cp

0xab5e,	// (0x00047959) wml_tabs_pane

0xab67,	// (0x00047962) popup_wml_miniature_window

0xab6f,	// (0x0004796a) scroll_pane_cp021

0xab83,	// (0x0004797e) wml_content_pane_comp8

0xa4ad,	// (0x000472a8) bg_popup_sub_pane_cp05

0xc910,	// (0x0004970b) popup_wml_miniature_window_g1

0xc918,	// (0x00049713) wml_miniature_view_pane

0x5d09,	// (0x00042b04) aid_size_wml_view

0x5d11,	// (0x00042b0c) wml_miniature_view_pane_g1

0x5d1a,	// (0x00042b15) wml_miniature_view_pane_g2

0x5d23,	// (0x00042b1e) wml_miniature_view_pane_g3

0x5d2b,	// (0x00042b26) wml_miniature_view_pane_g4

0x5d33,	// (0x00042b2e) wml_miniature_view_pane_g5

0x5d3b,	// (0x00042b36) wml_miniature_view_pane_g6

0x5d43,	// (0x00042b3e) wml_miniature_view_pane_g7

0x5d4b,	// (0x00042b46) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0004c476) wml_miniature_view_pane_g

0xc8e6,	// (0x000496e1) background_graphic_ParamLimits

0xc8e6,	// (0x000496e1) background_graphic

0xc920,	// (0x0004971b) wml_tabs_2_pane

0xc929,	// (0x00049724) wml_tabs_3_pane_ParamLimits

0xc929,	// (0x00049724) wml_tabs_3_pane

0xc93b,	// (0x00049736) wml_tabs_4_pane_ParamLimits

0xc93b,	// (0x00049736) wml_tabs_4_pane

0xc951,	// (0x0004974c) wml_tabs_5_pane_ParamLimits

0xc951,	// (0x0004974c) wml_tabs_5_pane

0xc96b,	// (0x00049766) wml_tabs_pane_g2_ParamLimits

0xc96b,	// (0x00049766) wml_tabs_pane_g2

0xc97f,	// (0x0004977a) wml_tabs_pane_g3_ParamLimits

0xc97f,	// (0x0004977a) wml_tabs_pane_g3

0x5d53,	// (0x00042b4e) wml_tabs_2_active_pane_ParamLimits

0x5d53,	// (0x00042b4e) wml_tabs_2_active_pane

0x5d63,	// (0x00042b5e) wml_tabs_2_passive_pane_ParamLimits

0x5d63,	// (0x00042b5e) wml_tabs_2_passive_pane

0x5d73,	// (0x00042b6e) wml_tabs_3_active_pane_cp_ParamLimits

0x5d73,	// (0x00042b6e) wml_tabs_3_active_pane_cp

0x5d84,	// (0x00042b7f) wml_tabs_3_passive_pane_ParamLimits

0x5d84,	// (0x00042b7f) wml_tabs_3_passive_pane

0x5d95,	// (0x00042b90) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d95,	// (0x00042b90) wml_tabs_3_passive_pane_cp

0x5da6,	// (0x00042ba1) tabs_4_active_pane

0x5dae,	// (0x00042ba9) tabs_4_passive_pane

0x5db6,	// (0x00042bb1) tabs_4_passive_pane_cp

0x5dbe,	// (0x00042bb9) tabs_4_passive_pane_cp2

0x52eb,	// (0x000420e6) aid_height_text

0x4b01,	// (0x000418fc) mup_volume_cont_pane_ParamLimits

0x4b01,	// (0x000418fc) mup_volume_cont_pane

0x2617,	// (0x0003f412) aid_size_cell_pinb

0x2621,	// (0x0003f41c) aid_size_list_pinb

0x5cb8,	// (0x00042ab3) mup2_volume_cont_pane_ParamLimits

0x5cb8,	// (0x00042ab3) mup2_volume_cont_pane

0x5dc6,	// (0x00042bc1) mup2_volume_cont_pane_g1_ParamLimits

0x5dc6,	// (0x00042bc1) mup2_volume_cont_pane_g1

0x2254,	// (0x0003f04f) aid_size_cell_touch_ParamLimits

0x2254,	// (0x0003f04f) aid_size_cell_touch

0x24fd,	// (0x0003f2f8) touch_pane_ParamLimits

0x24fd,	// (0x0003f2f8) touch_pane

0xa090,	// (0x00046e8b) main_rss2_pane

0xc99c,	// (0x00049797) listscroll_rss2_pane

0xc9a5,	// (0x000497a0) rss2_navigation_pane

0xc9ad,	// (0x000497a8) list_rss2_pane

0xb207,	// (0x00048002) scroll_pane_cp22

0xc9b5,	// (0x000497b0) rss2_navigation_pane_g1

0xc9be,	// (0x000497b9) rss2_navigation_pane_g2

0xc9c6,	// (0x000497c1) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0004c487) rss2_navigation_pane_g

0xc9ce,	// (0x000497c9) rss2_navigation_pane_t1

0x5dff,	// (0x00042bfa) rss2_list_single_pane_ParamLimits

0x5dff,	// (0x00042bfa) rss2_list_single_pane

0xc9dc,	// (0x000497d7) rss2_list_single_pane_t2

0xc9ea,	// (0x000497e5) rss2_list_single_pane_t3_ParamLimits

0xc9ea,	// (0x000497e5) rss2_list_single_pane_t3

0xca07,	// (0x00049802) rss2_list_single_pane_t4

0x4454,	// (0x0004124f) smil_status_pane_g1

0xb086,	// (0x00047e81) main_image2_pane_ParamLimits

0xb086,	// (0x00047e81) main_image2_pane

0x59cb,	// (0x000427c6) main_camera2_pane_g9_ParamLimits

0x59cb,	// (0x000427c6) main_camera2_pane_g9

0x5a1f,	// (0x0004281a) main_camera2_pane_t5_ParamLimits

0x5a1f,	// (0x0004281a) main_camera2_pane_t5

0x5a31,	// (0x0004282c) main_camera2_pane_t6_ParamLimits

0x5a31,	// (0x0004282c) main_camera2_pane_t6

0x5e30,	// (0x00042c2b) main_image2_pane_g1_ParamLimits

0x5e30,	// (0x00042c2b) main_image2_pane_g1

0x508b,	// (0x00041e86) smil2_video_pane_ParamLimits

0x508b,	// (0x00041e86) smil2_video_pane

0x0e95,	// (0x0003dc90) aid_zoom_text_primary_cp

0x24a6,	// (0x0003f2a1) popup_preview_fixed_window

0xaabf,	// (0x000478ba) im_reading_pane_g1

0x5915,	// (0x00042710) cams2_bc_adjust_pane_cp_ParamLimits

0x5915,	// (0x00042710) cams2_bc_adjust_pane_cp

0x5a61,	// (0x0004285c) cams2_bc_adjust_pane_ParamLimits

0x5a61,	// (0x0004285c) cams2_bc_adjust_pane

0x5e3c,	// (0x00042c37) cams2_bc_adjust_pane_g1

0x5e44,	// (0x00042c3f) cams2_slider_pane

0x5e4d,	// (0x00042c48) cams2_slider_pane_g1

0x5e56,	// (0x00042c51) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0004c48e) cams2_slider_pane_g

0x2727,	// (0x0003f522) calc_display_pane_ParamLimits

0x2745,	// (0x0003f540) calc_paper_pane_ParamLimits

0x2761,	// (0x0003f55c) grid_calc_pane_ParamLimits

0x4655,	// (0x00041450) popup_clock_digital_window_t1_ParamLimits

0xb6c3,	// (0x000484be) main_image_pane_t1

0x270d,	// (0x0003f508) aid_size_cell_calc_ParamLimits

0x270d,	// (0x0003f508) aid_size_cell_calc

0x5560,	// (0x0004235b) popup_blid_sat_info2_window_ParamLimits

0x5560,	// (0x0004235b) popup_blid_sat_info2_window

0xca1d,	// (0x00049818) aid_size_cell_blid

0xca25,	// (0x00049820) bg_popup_window_pane_cp07

0xca48,	// (0x00049843) grid_popup_blid_pane

0xca52,	// (0x0004984d) heading_pane_cp05_ParamLimits

0xca52,	// (0x0004984d) heading_pane_cp05

0xcb1c,	// (0x00049917) cell_popup_blid_pane_ParamLimits

0xcb1c,	// (0x00049917) cell_popup_blid_pane

0xcb40,	// (0x0004993b) cell_popup_blid_pane_g1

0xcb48,	// (0x00049943) cell_popup_blid_pane_t1

0x5c7e,	// (0x00042a79) mup2_indicator_pane_ParamLimits

0x5c7e,	// (0x00042a79) mup2_indicator_pane

0xa9c6,	// (0x000477c1) mup2_visualizer_osc_pane

0xc8fe,	// (0x000496f9) mup2_visualizer_spec_pane_ParamLimits

0xc8fe,	// (0x000496f9) mup2_visualizer_spec_pane

0x5e70,	// (0x00042c6b) mup2_spec_half_pane

0x5e79,	// (0x00042c74) mup2_spec_half_pane_cp

0x5e83,	// (0x00042c7e) mup2_spec_bar_pane_ParamLimits

0x5e83,	// (0x00042c7e) mup2_spec_bar_pane

0xc893,	// (0x0004968e) mup2_spec_bar_pane_g1

0xc89d,	// (0x00049698) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004c401) mup2_spec_bar_pane_g

0x5ea2,	// (0x00042c9d) mup2_osc_middle_pane

0xc8af,	// (0x000496aa) mup2_visualizer_osc_pane_g1

0xa0ba,	// (0x00046eb5) popup_number_entry_window_t1_ParamLimits

0xa0cd,	// (0x00046ec8) popup_number_entry_window_t2_ParamLimits

0xa0df,	// (0x00046eda) popup_number_entry_window_t3_ParamLimits

0x2554,	// (0x0003f34f) popup_number_entry_window_t5_ParamLimits

0x2554,	// (0x0003f34f) popup_number_entry_window_t5

0xf0ca,	// (0x0004bec5) popup_number_entry_window_t_ParamLimits

0xa0f1,	// (0x00046eec) text_title_cp2_ParamLimits

0x4d7f,	// (0x00041b7a) aid_hotspot_pointer_text2_pane

0x4e19,	// (0x00041c14) main_viewer_pane_g9_ParamLimits

0x4e19,	// (0x00041c14) main_viewer_pane_g9

0xacf8,	// (0x00047af3) cale_month_pane_t1_ParamLimits

0xad35,	// (0x00047b30) bg_cale_pane_ParamLimits

0xad4d,	// (0x00047b48) list_cale_pane_ParamLimits

0xad5e,	// (0x00047b59) listscroll_cale_day_pane_t1

0xad70,	// (0x00047b6b) scroll_pane_cp09_ParamLimits

0x4b3c,	// (0x00041937) main_mup_eq_pane_t1_ParamLimits

0x4b3c,	// (0x00041937) main_mup_eq_pane_t1

0x4b56,	// (0x00041951) main_mup_eq_pane_t2_ParamLimits

0x4b56,	// (0x00041951) main_mup_eq_pane_t2

0x4b70,	// (0x0004196b) main_mup_eq_pane_t3_ParamLimits

0x4b70,	// (0x0004196b) main_mup_eq_pane_t3

0x4b88,	// (0x00041983) main_mup_eq_pane_t4_ParamLimits

0x4b88,	// (0x00041983) main_mup_eq_pane_t4

0x4ba0,	// (0x0004199b) main_mup_eq_pane_t5_ParamLimits

0x4ba0,	// (0x0004199b) main_mup_eq_pane_t5

0x4bb8,	// (0x000419b3) main_mup_eq_pane_t6_ParamLimits

0x4bb8,	// (0x000419b3) main_mup_eq_pane_t6

0x4bcc,	// (0x000419c7) main_mup_eq_pane_t7_ParamLimits

0x4bcc,	// (0x000419c7) main_mup_eq_pane_t7

0x4be0,	// (0x000419db) main_mup_eq_pane_t8_ParamLimits

0x4be0,	// (0x000419db) main_mup_eq_pane_t8

0x4bf6,	// (0x000419f1) main_mup_eq_pane_t9_ParamLimits

0x4bf6,	// (0x000419f1) main_mup_eq_pane_t9

0x4c0e,	// (0x00041a09) main_mup_eq_pane_t10_ParamLimits

0x4c0e,	// (0x00041a09) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004c250) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004c250) main_mup_eq_pane_t

0x4ccb,	// (0x00041ac6) mup_equalizer_pane_cp5_ParamLimits

0x4ce1,	// (0x00041adc) mup_equalizer_pane_cp6_ParamLimits

0x4cf9,	// (0x00041af4) mup_equalizer_pane_cp7_ParamLimits

0xa090,	// (0x00046e8b) main_gallery_pane

0xc8b8,	// (0x000496b3) smil2_volume_pane

0xc8c0,	// (0x000496bb) smil_status_volume_pane_g1_ParamLimits

0xc8d3,	// (0x000496ce) smil_status_volume_pane_g2_ParamLimits

0x5788,	// (0x00042583) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0004c406) smil_status_volume_pane_g_ParamLimits

0xca25,	// (0x00049820) bg_popup_window_pane_cp07_ParamLimits

0xca33,	// (0x0004982e) blid_firmament_pane

0x5eab,	// (0x00042ca6) aid_size_cell_gallery_ParamLimits

0x5eab,	// (0x00042ca6) aid_size_cell_gallery

0x5eb9,	// (0x00042cb4) grid_gallery_pane_ParamLimits

0x5eb9,	// (0x00042cb4) grid_gallery_pane

0x5ec9,	// (0x00042cc4) cell_gallery_pane_ParamLimits

0x5ec9,	// (0x00042cc4) cell_gallery_pane

0xcb56,	// (0x00049951) bg_cell_gallery_focus_pane_ParamLimits

0xcb56,	// (0x00049951) bg_cell_gallery_focus_pane

0xcb68,	// (0x00049963) cell_gallery_pane_g1_ParamLimits

0xcb68,	// (0x00049963) cell_gallery_pane_g1

0x5f17,	// (0x00042d12) cell_gallery_pane_g2_ParamLimits

0x5f17,	// (0x00042d12) cell_gallery_pane_g2

0x5f24,	// (0x00042d1f) cell_gallery_pane_g3_ParamLimits

0x5f24,	// (0x00042d1f) cell_gallery_pane_g3

0xcb74,	// (0x0004996f) cell_gallery_pane_g4_ParamLimits

0xcb74,	// (0x0004996f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0004c4b4) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0004c4b4) cell_gallery_pane_g

0xcb80,	// (0x0004997b) bg_cell_gallery_focus_pane_g1

0xcb88,	// (0x00049983) bg_cell_gallery_focus_pane_g2

0xcb90,	// (0x0004998b) bg_cell_gallery_focus_pane_g3

0xcb98,	// (0x00049993) bg_cell_gallery_focus_pane_g4

0xcba0,	// (0x0004999b) bg_cell_gallery_focus_pane_g5

0xcba8,	// (0x000499a3) bg_cell_gallery_focus_pane_g6

0xcbb0,	// (0x000499ab) bg_cell_gallery_focus_pane_g7

0xcbc1,	// (0x000499bc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004c4bd) bg_cell_gallery_focus_pane_g

0xcbc9,	// (0x000499c4) aid_firma_cardinal

0xcbdd,	// (0x000499d8) blid_firmament_pane_t1

0xcbf4,	// (0x000499ef) blid_firmament_pane_t2

0xcc0b,	// (0x00049a06) blid_firmament_pane_t3

0xcc22,	// (0x00049a1d) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0004c4ce) blid_firmament_pane_t

0xcc39,	// (0x00049a34) blid_sat_info_pane

0xcc49,	// (0x00049a44) blid_sat_info_pane_g1

0xcc49,	// (0x00049a44) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0004c4d7) blid_sat_info_pane_g

0xcc53,	// (0x00049a4e) blid_sat_info_pane_t1

0xcc61,	// (0x00049a5c) smil2_volume_content_pane

0xcc6a,	// (0x00049a65) smil2_volume_pane_g1

0xcbb8,	// (0x000499b3) smil2_volume_content_pane_g1

0xcc72,	// (0x00049a6d) smil2_volume_content_pane_g2

0xcc7b,	// (0x00049a76) smil2_volume_content_pane_g3

0xcc84,	// (0x00049a7f) smil2_volume_content_pane_g4

0xcc8d,	// (0x00049a88) smil2_volume_content_pane_g5

0xcc96,	// (0x00049a91) smil2_volume_content_pane_g6

0xcc9f,	// (0x00049a9a) smil2_volume_content_pane_g7

0xcca8,	// (0x00049aa3) smil2_volume_content_pane_g8

0xccb1,	// (0x00049aac) smil2_volume_content_pane_g9

0xccba,	// (0x00049ab5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004c4dc) smil2_volume_content_pane_g

0x2d3c,	// (0x0003fb37) cale_week_day_heading_pane_t1_ParamLimits

0x2d77,	// (0x0003fb72) cale_week_day_heading_pane_t2_ParamLimits

0x2db2,	// (0x0003fbad) cale_week_day_heading_pane_t3_ParamLimits

0x2ded,	// (0x0003fbe8) cale_week_day_heading_pane_t4_ParamLimits

0x2e28,	// (0x0003fc23) cale_week_day_heading_pane_t5_ParamLimits

0x2e63,	// (0x0003fc5e) cale_week_day_heading_pane_t6_ParamLimits

0x2e9e,	// (0x0003fc99) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0004bfcc) cale_week_day_heading_pane_t_ParamLimits

0xa96b,	// (0x00047766) bg_cale_side_pane_ParamLimits

0x2ed9,	// (0x0003fcd4) cale_week_time_pane_t1_ParamLimits

0x2ef3,	// (0x0003fcee) cale_week_time_pane_t2_ParamLimits

0x2f0d,	// (0x0003fd08) cale_week_time_pane_t3_ParamLimits

0x2f27,	// (0x0003fd22) cale_week_time_pane_t4_ParamLimits

0x2f41,	// (0x0003fd3c) cale_week_time_pane_t5_ParamLimits

0x2f5b,	// (0x0003fd56) cale_week_time_pane_t6_ParamLimits

0x2f7b,	// (0x0003fd76) cale_week_time_pane_t7_ParamLimits

0x2f9d,	// (0x0003fd98) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0004bfdb) cale_week_time_pane_t_ParamLimits

0x2fc1,	// (0x0003fdbc) cell_cale_week_pane_g2_ParamLimits

0xa96b,	// (0x00047766) bg_cale_side_pane_cp01_ParamLimits

0x4249,	// (0x00041044) cale_month_week_pane_t1_ParamLimits

0x4262,	// (0x0004105d) cale_month_week_pane_t2_ParamLimits

0x427b,	// (0x00041076) cale_month_week_pane_t3_ParamLimits

0x4294,	// (0x0004108f) cale_month_week_pane_t4_ParamLimits

0x42ad,	// (0x000410a8) cale_month_week_pane_t5_ParamLimits

0x42ce,	// (0x000410c9) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004c0b0) cale_month_week_pane_t_ParamLimits

0x4411,	// (0x0004120c) cell_cale_month_pane_g1_ParamLimits

0xa090,	// (0x00046e8b) main_cale_event_viewer_pane

0xa090,	// (0x00046e8b) listscroll_cale_event_viewer_pane

0xccc3,	// (0x00049abe) list_cale_ev_pane

0xcccb,	// (0x00049ac6) scroll_pane_cp023

0xccd7,	// (0x00049ad2) field_cale_ev_pane_ParamLimits

0xccd7,	// (0x00049ad2) field_cale_ev_pane

0xccf5,	// (0x00049af0) field_cale_ev_content_pane_ParamLimits

0xccf5,	// (0x00049af0) field_cale_ev_content_pane

0xcd01,	// (0x00049afc) field_cale_ev_pane_g1_ParamLimits

0xcd01,	// (0x00049afc) field_cale_ev_pane_g1

0xcd0d,	// (0x00049b08) field_cale_ev_pane_g2_ParamLimits

0xcd0d,	// (0x00049b08) field_cale_ev_pane_g2

0xcd25,	// (0x00049b20) field_cale_ev_pane_g3_ParamLimits

0xcd25,	// (0x00049b20) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0004c4f1) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0004c4f1) field_cale_ev_pane_g

0xcd3d,	// (0x00049b38) field_cale_ev_pane_t1_ParamLimits

0xcd3d,	// (0x00049b38) field_cale_ev_pane_t1

0xcd54,	// (0x00049b4f) field_cale_ev_content_pane_t1_ParamLimits

0xcd54,	// (0x00049b4f) field_cale_ev_content_pane_t1

0xb5a9,	// (0x000483a4) bg_button_pane_cp01

0x2ac9,	// (0x0003f8c4) listscroll_cale_week_pane_ParamLimits

0xa916,	// (0x00047711) popup_toolbar_window_cp01

0xa93c,	// (0x00047737) listscroll_cale_week_pane_t1_ParamLimits

0x2ac9,	// (0x0003f8c4) listscroll_cale_day_pane_ParamLimits

0xa916,	// (0x00047711) popup_toolbar_window_cp02

0xad5e,	// (0x00047b59) listscroll_cale_day_pane_t1_ParamLimits

0x2ac9,	// (0x0003f8c4) main_cale_month_pane_ParamLimits

0x5667,	// (0x00042462) popup_toolbar_window_cp03_ParamLimits

0x5667,	// (0x00042462) popup_toolbar_window_cp03

0x4fa1,	// (0x00041d9c) main_image_pane_g2_ParamLimits

0x4fa1,	// (0x00041d9c) main_image_pane_g2

0x4fad,	// (0x00041da8) main_image_pane_g3_ParamLimits

0x4fad,	// (0x00041da8) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004c2e2) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004c2e2) main_image_pane_g

0xb6c3,	// (0x000484be) main_image_pane_t1_ParamLimits

0x4fb9,	// (0x00041db4) main_image_pane_t2_ParamLimits

0x4fb9,	// (0x00041db4) main_image_pane_t2

0x4fcb,	// (0x00041dc6) main_image_pane_t3_ParamLimits

0x4fcb,	// (0x00041dc6) main_image_pane_t3

0x4fdd,	// (0x00041dd8) main_image_pane_t4_ParamLimits

0x4fdd,	// (0x00041dd8) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004c2e9) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004c2e9) main_image_pane_t

0x4fef,	// (0x00041dea) popup_image_details_window_cp01

0x4ff9,	// (0x00041df4) popup_toobar_trans_pane_cp01_ParamLimits

0x4ff9,	// (0x00041df4) popup_toobar_trans_pane_cp01

0x55b7,	// (0x000423b2) popup_image_details_window_ParamLimits

0x55b7,	// (0x000423b2) popup_image_details_window

0x55c5,	// (0x000423c0) popup_image_focus_window

0x5907,	// (0x00042702) camera2_autofocus_pane_ParamLimits

0x5907,	// (0x00042702) camera2_autofocus_pane

0xa090,	// (0x00046e8b) bg_popup_sub_pane_cp06

0xcd72,	// (0x00049b6d) popup_image_focus_window_g1

0xcd7a,	// (0x00049b75) popup_image_focus_window_g2

0xcd82,	// (0x00049b7d) popup_image_focus_window_g3

0xcd8a,	// (0x00049b85) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004c4f8) popup_image_focus_window_g

0xcd92,	// (0x00049b8d) popup_image_focus_window_t1

0xcda0,	// (0x00049b9b) popup_image_focus_window_t2

0xcdb0,	// (0x00049bab) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0004c501) popup_image_focus_window_t

0xcdbe,	// (0x00049bb9) camera2_autofocus_pane_g1

0xb086,	// (0x00047e81) bg_tb_trans_pane_cp01

0xcdcc,	// (0x00049bc7) popup_image_details_window_g1

0xcddf,	// (0x00049bda) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0004c513) popup_image_details_window_g

0xce08,	// (0x00049c03) popup_image_details_window_t1

0xce1a,	// (0x00049c15) popup_image_details_window_t2

0xce33,	// (0x00049c2e) popup_image_details_window_t3

0xce47,	// (0x00049c42) popup_image_details_window_t4

0xce62,	// (0x00049c5d) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004c51a) popup_image_details_window_t

0xa7ed,	// (0x000475e8) bg_calc_paper_pane_ParamLimits

0xa090,	// (0x00046e8b) grid_highlight_pane_cp013

0x285e,	// (0x0003f659) list_calc_pane_ParamLimits

0x2870,	// (0x0003f66b) scroll_pane_cp024

0xa801,	// (0x000475fc) bg_calc_display_pane_ParamLimits

0x2878,	// (0x0003f673) calc_display_pane_t1_ParamLimits

0x288d,	// (0x0003f688) calc_display_pane_t2_ParamLimits

0x28a2,	// (0x0003f69d) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0004bf4c) calc_display_pane_t_ParamLimits

0x297e,	// (0x0003f779) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0004bf69) cell_calc_pane_g

0x2987,	// (0x0003f782) cell_calc_pane_t1

0xa860,	// (0x0004765b) grid_highlight_pane_cp02_ParamLimits

0xa876,	// (0x00047671) toolbar_button_pane_cp01_ParamLimits

0xa876,	// (0x00047671) toolbar_button_pane_cp01

0xb708,	// (0x00048503) temp_image_control_pane_ParamLimits

0xb708,	// (0x00048503) temp_image_control_pane

0xb086,	// (0x00047e81) main_mp3_pane

0xce7c,	// (0x00049c77) temp_image_control_pane_g1_ParamLimits

0xce7c,	// (0x00049c77) temp_image_control_pane_g1

0xce8a,	// (0x00049c85) temp_image_control_pane_g2_ParamLimits

0xce8a,	// (0x00049c85) temp_image_control_pane_g2

0xce9c,	// (0x00049c97) temp_image_control_pane_g3_ParamLimits

0xce9c,	// (0x00049c97) temp_image_control_pane_g3

0x5f61,	// (0x00042d5c) temp_image_control_pane_g4_ParamLimits

0x5f61,	// (0x00042d5c) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0004c525) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0004c525) temp_image_control_pane_g

0xce7c,	// (0x00049c77) main_mp3_pane_g1

0x5f72,	// (0x00042d6d) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0004c52e) main_mp3_pane_g

0xcedf,	// (0x00049cda) main_mp3_pane_t1

0xa9ce,	// (0x000477c9) main_camera_pane_g8_ParamLimits

0xa9ce,	// (0x000477c9) main_camera_pane_g8

0x324e,	// (0x00040049) main_video_pane_g7_ParamLimits

0x324e,	// (0x00040049) main_video_pane_g7

0x5a4f,	// (0x0004284a) main_camera2_pane_t7_ParamLimits

0x5a4f,	// (0x0004284a) main_camera2_pane_t7

0xab16,	// (0x00047911) scroll_pane_cp025_ParamLimits

0xab16,	// (0x00047911) scroll_pane_cp025

0xab2a,	// (0x00047925) scroll_pane_cp026_ParamLimits

0xab2a,	// (0x00047925) scroll_pane_cp026

0xab39,	// (0x00047934) wml_content_pane_ParamLimits

0xa090,	// (0x00046e8b) main_touch_calib_pane

0x6016,	// (0x00042e11) main_touch_calib_pane_g1

0x6022,	// (0x00042e1d) main_touch_calib_pane_g2

0x602e,	// (0x00042e29) main_touch_calib_pane_g3

0x603a,	// (0x00042e35) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0004c54c) main_touch_calib_pane_g

0x6046,	// (0x00042e41) main_touch_calib_pane_t1

0x605f,	// (0x00042e5a) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0004c555) main_touch_calib_pane_t

0xb2e3,	// (0x000480de) mup_progress_pane_cp02

0xb318,	// (0x00048113) navi_pane_g1

0xb3d3,	// (0x000481ce) navi_pane_mp_t3

0xb086,	// (0x00047e81) main_mp3_pane_ParamLimits

0x56a4,	// (0x0004249f) navi_pane_ParamLimits

0xce7c,	// (0x00049c77) main_mp3_pane_g1_ParamLimits

0x5f72,	// (0x00042d6d) main_mp3_pane_g2_ParamLimits

0x5f7e,	// (0x00042d79) main_mp3_pane_g3_ParamLimits

0x5f7e,	// (0x00042d79) main_mp3_pane_g3

0x5f8a,	// (0x00042d85) main_mp3_pane_g4_ParamLimits

0x5f8a,	// (0x00042d85) main_mp3_pane_g4

0xceac,	// (0x00049ca7) main_mp3_pane_g5_ParamLimits

0xceac,	// (0x00049ca7) main_mp3_pane_g5

0xceba,	// (0x00049cb5) main_mp3_pane_g6_ParamLimits

0xceba,	// (0x00049cb5) main_mp3_pane_g6

0xcec7,	// (0x00049cc2) main_mp3_pane_g7_ParamLimits

0xcec7,	// (0x00049cc2) main_mp3_pane_g7

0xced3,	// (0x00049cce) main_mp3_pane_g8_ParamLimits

0xced3,	// (0x00049cce) main_mp3_pane_g8

0xf733,	// (0x0004c52e) main_mp3_pane_g_ParamLimits

0x5f96,	// (0x00042d91) main_mp3_pane_t2

0x5fa6,	// (0x00042da1) main_mp3_pane_t3

0xceed,	// (0x00049ce8) main_mp3_pane_t4

0xcefb,	// (0x00049cf6) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0004c53f) main_mp3_pane_t

0xcf09,	// (0x00049d04) mup_progress_pane_cp01

0x0e95,	// (0x0003dc90) aid_zoom_text_secondary2

0xccc3,	// (0x00049abe) list_cale_ev2_pane

0xcccb,	// (0x00049ac6) scroll_pane_cp023_ParamLimits

0x60ba,	// (0x00042eb5) field_cale_ev2_pane_ParamLimits

0x60ba,	// (0x00042eb5) field_cale_ev2_pane

0x11a1,	// (0x0003df9c) field_cale_ev2_pane_g1_ParamLimits

0x11a1,	// (0x0003df9c) field_cale_ev2_pane_g1

0x11ad,	// (0x0003dfa8) field_cale_ev2_pane_g2_ParamLimits

0x11ad,	// (0x0003dfa8) field_cale_ev2_pane_g2

0x11c5,	// (0x0003dfc0) field_cale_ev2_pane_g3_ParamLimits

0x11c5,	// (0x0003dfc0) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0004c560) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0004c560) field_cale_ev2_pane_g

0x11e9,	// (0x0003dfe4) field_cale_ev2_pane_t1_ParamLimits

0x11e9,	// (0x0003dfe4) field_cale_ev2_pane_t1

0x1200,	// (0x0003dffb) field_cale_ev2_pane_t2_ParamLimits

0x1200,	// (0x0003dffb) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0004c569) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0004c569) field_cale_ev2_pane_t

0x4e81,	// (0x00041c7c) main_postcard_pane_g5_ParamLimits

0x4e81,	// (0x00041c7c) main_postcard_pane_g5

0x4e8f,	// (0x00041c8a) main_postcard_pane_g6_ParamLimits

0x4e8f,	// (0x00041c8a) main_postcard_pane_g6

0x3098,	// (0x0003fe93) camera2_autofocus_pane_cp_ParamLimits

0x3098,	// (0x0003fe93) camera2_autofocus_pane_cp

0xb086,	// (0x00047e81) main_mup3_pane

0x60e3,	// (0x00042ede) main_mup3_pane_g1_ParamLimits

0x60e3,	// (0x00042ede) main_mup3_pane_g1

0x6104,	// (0x00042eff) main_mup3_pane_g2_ParamLimits

0x6104,	// (0x00042eff) main_mup3_pane_g2

0x617c,	// (0x00042f77) main_mup3_pane_g3_ParamLimits

0x617c,	// (0x00042f77) main_mup3_pane_g3

0x61bf,	// (0x00042fba) main_mup3_pane_g4_ParamLimits

0x61bf,	// (0x00042fba) main_mup3_pane_g4

0x6202,	// (0x00042ffd) main_mup3_pane_g5_ParamLimits

0x6202,	// (0x00042ffd) main_mup3_pane_g5

0x6245,	// (0x00043040) main_mup3_pane_g6_ParamLimits

0x6245,	// (0x00043040) main_mup3_pane_g6

0xcf31,	// (0x00049d2c) main_mup3_pane_g7_ParamLimits

0xcf31,	// (0x00049d2c) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0004c579) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0004c579) main_mup3_pane_g

0x62bb,	// (0x000430b6) main_mup3_pane_t1_ParamLimits

0x62bb,	// (0x000430b6) main_mup3_pane_t1

0x632a,	// (0x00043125) main_mup3_pane_t2_ParamLimits

0x632a,	// (0x00043125) main_mup3_pane_t2

0x63f3,	// (0x000431ee) main_mup3_pane_t4_ParamLimits

0x63f3,	// (0x000431ee) main_mup3_pane_t4

0x6441,	// (0x0004323c) main_mup3_pane_t5_ParamLimits

0x6441,	// (0x0004323c) main_mup3_pane_t5

0x64f1,	// (0x000432ec) main_mup3_pane_t6_ParamLimits

0x64f1,	// (0x000432ec) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0004c58a) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0004c58a) main_mup3_pane_t

0x659d,	// (0x00043398) mup3_progress_pane_ParamLimits

0x659d,	// (0x00043398) mup3_progress_pane

0x661b,	// (0x00043416) popup_mup3_control_window_ParamLimits

0x661b,	// (0x00043416) popup_mup3_control_window

0xcf3f,	// (0x00049d3a) popup_mup3_text_window

0x6634,	// (0x0004342f) mup3_progress_pane_t1

0x6653,	// (0x0004344e) mup3_progress_pane_t2

0xcf47,	// (0x00049d42) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0004c597) mup3_progress_pane_t

0xcf64,	// (0x00049d5f) mup_progress_pane_cp03

0xa090,	// (0x00046e8b) bg_tb_trans_pane_cp04

0x6672,	// (0x0004346d) mup3_volume_pane

0x667a,	// (0x00043475) popup_mup3_control_window_g1

0x6683,	// (0x0004347e) mup3_volume_pane_g1

0x668c,	// (0x00043487) mup3_volume_pane_g2

0x6695,	// (0x00043490) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0004c59e) mup3_volume_pane_g

0xa090,	// (0x00046e8b) bg_tb_trans_pane_cp03

0xcf74,	// (0x00049d6f) popup_mup3_text_window_g1

0xcf7c,	// (0x00049d77) popup_mup3_text_window_t1

0xa849,	// (0x00047644) list_calc_item_pane_g1_ParamLimits

0xc993,	// (0x0004978e) mup_volume_pane_cp_g1

0x6078,	// (0x00042e73) main_touch_calib_pane_t3

0x608e,	// (0x00042e89) main_touch_calib_pane_t4

0x60a4,	// (0x00042e9f) main_touch_calib_pane_t5

0x2240,	// (0x0003f03b) aid_cell_size_toolbar2

0x2248,	// (0x0003f043) aid_popup3_width_pane

0x0e8d,	// (0x0003dc88) aid_zoom_text_msg_primary

0x306d,	// (0x0003fe68) vorec_t7

0xa80d,	// (0x00047608) bg_calc_paper_pane_g1_ParamLimits

0xa819,	// (0x00047614) bg_calc_paper_pane_g2_ParamLimits

0xa825,	// (0x00047620) bg_calc_paper_pane_g3_ParamLimits

0xa831,	// (0x0004762c) bg_calc_paper_pane_g4_ParamLimits

0xa83d,	// (0x00047638) bg_calc_paper_pane_g5_ParamLimits

0x28e1,	// (0x0003f6dc) bg_calc_paper_pane_g6_ParamLimits

0x28f2,	// (0x0003f6ed) bg_calc_paper_pane_g7_ParamLimits

0x2903,	// (0x0003f6fe) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0004bf53) bg_calc_paper_pane_g_ParamLimits

0x2914,	// (0x0003f70f) calc_bg_paper_pane_g9_ParamLimits

0x317f,	// (0x0003ff7a) image_qvga_pane_ParamLimits

0x317f,	// (0x0003ff7a) image_qvga_pane

0xa73c,	// (0x00047537) bg_popup_sub_pane_cp04_ParamLimits

0xb63f,	// (0x0004843a) popup_mup_playback_window_g1_ParamLimits

0xb64b,	// (0x00048446) popup_mup_playback_window_t1_ParamLimits

0xb660,	// (0x0004845b) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004c2dd) popup_mup_playback_window_t_ParamLimits

0x5b7e,	// (0x00042979) main_mup2_pane_g3_ParamLimits

0x5b7e,	// (0x00042979) main_mup2_pane_g3

0x3437,	// (0x00040232) popup_toolbar_window_cp04

0xba42,	// (0x0004883d) popup_call2_audio_second_window_g3_ParamLimits

0xba42,	// (0x0004883d) popup_call2_audio_second_window_g3

0xbe4c,	// (0x00048c47) popup_call2_audio_first_window_g4_ParamLimits

0xbe4c,	// (0x00048c47) popup_call2_audio_first_window_g4

0xc4cb,	// (0x000492c6) popup_call2_audio_in_window_g4_ParamLimits

0xc4cb,	// (0x000492c6) popup_call2_audio_in_window_g4

0x4f94,	// (0x00041d8f) aid_area_sk_bg_cut_ParamLimits

0x4f94,	// (0x00041d8f) aid_area_sk_bg_cut

0xb675,	// (0x00048470) aid_area_sk_bg_cut_2_ParamLimits

0xb675,	// (0x00048470) aid_area_sk_bg_cut_2

0x5f07,	// (0x00042d02) aid_placing_details_win

0x5f0f,	// (0x00042d0a) aid_placing_details_win_2

0xcdbe,	// (0x00049bb9) camera2_autofocus_pane_g1_ParamLimits

0x2497,	// (0x0003f292) popup_fixed_preview_cale_window_ParamLimits

0x2497,	// (0x0003f292) popup_fixed_preview_cale_window

0xb451,	// (0x0004824c) navi_slider_pane_g3

0xb45a,	// (0x00048255) navi_slider_pane_g4

0xb463,	// (0x0004825e) navi_slider_pane_g5

0xb451,	// (0x0004824c) navi_slider_pane_g6

0x48d0,	// (0x000416cb) navi_slider_pane_g7

0xb576,	// (0x00048371) mup_scale_pane_g3

0xb57f,	// (0x0004837a) mup_scale_pane_g4

0xb588,	// (0x00048383) mup_scale_pane_g5

0x4d11,	// (0x00041b0c) mup_scale_pane_g6

0x4d1a,	// (0x00041b15) mup_scale_pane_g7

0xb451,	// (0x0004824c) cams2_slider_pane_g3

0xca15,	// (0x00049810) cams2_slider_pane_g4

0x5e5f,	// (0x00042c5a) cams2_slider_pane_g5

0xb451,	// (0x0004824c) cams2_slider_pane_g6

0x5e67,	// (0x00042c62) cams2_slider_pane_g7

0xcc49,	// (0x00049a44) camera2_autofocus_pane_cp_g1

0xc82c,	// (0x00049627) bg_popup_preview_window_pane_cp02_ParamLimits

0xc82c,	// (0x00049627) bg_popup_preview_window_pane_cp02

0xcf8a,	// (0x00049d85) list_fp_cale_pane_ParamLimits

0xcf8a,	// (0x00049d85) list_fp_cale_pane

0xcf96,	// (0x00049d91) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf96,	// (0x00049d91) popup_fixed_preview_cale_window_t1

0x669e,	// (0x00043499) popup_fixed_preview_cale_window_t2_ParamLimits

0x669e,	// (0x00043499) popup_fixed_preview_cale_window_t2

0x66b3,	// (0x000434ae) popup_fixed_preview_cale_window_t3_ParamLimits

0x66b3,	// (0x000434ae) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0004c5a5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0004c5a5) popup_fixed_preview_cale_window_t

0x66c8,	// (0x000434c3) list_single_fp_cale_pane_ParamLimits

0x66c8,	// (0x000434c3) list_single_fp_cale_pane

0xcfb4,	// (0x00049daf) list_single_fp_cale_pane_g1_ParamLimits

0xcfb4,	// (0x00049daf) list_single_fp_cale_pane_g1

0xcfc0,	// (0x00049dbb) list_single_fp_cale_pane_g2_ParamLimits

0xcfc0,	// (0x00049dbb) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004c5ac) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004c5ac) list_single_fp_cale_pane_g

0xcfd9,	// (0x00049dd4) list_single_fp_cale_pane_t1_ParamLimits

0xcfd9,	// (0x00049dd4) list_single_fp_cale_pane_t1

0xcfeb,	// (0x00049de6) list_single_fp_cale_pane_t2_ParamLimits

0xcfeb,	// (0x00049de6) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0004c5b3) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0004c5b3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa090,	// (0x00046e8b) main_dialer_pane

0x66db,	// (0x000434d6) aid_cell_size_keypad

0x66e5,	// (0x000434e0) dialer_ne_pane

0x66ef,	// (0x000434ea) grid_dialer_command_1_pane

0x66f7,	// (0x000434f2) grid_dialer_command_2_pane

0x66ff,	// (0x000434fa) grid_dialer_keypad_pane

0x6711,	// (0x0004350c) bg_popup_call_pane_cp06_ParamLimits

0x6711,	// (0x0004350c) bg_popup_call_pane_cp06

0x671d,	// (0x00043518) dialer_ne_clear_pane_ParamLimits

0x671d,	// (0x00043518) dialer_ne_clear_pane

0xd01e,	// (0x00049e19) dialer_ne_pane_g1

0xd026,	// (0x00049e21) dialer_ne_pane_t1_ParamLimits

0xd026,	// (0x00049e21) dialer_ne_pane_t1

0x6729,	// (0x00043524) dialer_ne_pane_t2_ParamLimits

0x6729,	// (0x00043524) dialer_ne_pane_t2

0x6746,	// (0x00043541) dialer_ne_pane_t3_ParamLimits

0x6746,	// (0x00043541) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004c5b8) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004c5b8) dialer_ne_pane_t

0x676a,	// (0x00043565) dialer_ne_pane_t3_copy1_ParamLimits

0x676a,	// (0x00043565) dialer_ne_pane_t3_copy1

0x678e,	// (0x00043589) cell_dialer_keypad_pane_ParamLimits

0x678e,	// (0x00043589) cell_dialer_keypad_pane

0x67a5,	// (0x000435a0) cell_dialer_command_1_pane_ParamLimits

0x67a5,	// (0x000435a0) cell_dialer_command_1_pane

0x67bb,	// (0x000435b6) cell_dialer_command_2_pane_ParamLimits

0x67bb,	// (0x000435b6) cell_dialer_command_2_pane

0xd038,	// (0x00049e33) bg_button_pane_cp02_ParamLimits

0xd038,	// (0x00049e33) bg_button_pane_cp02

0x67ca,	// (0x000435c5) cell_dialer_keypad_pane_g1_ParamLimits

0x67ca,	// (0x000435c5) cell_dialer_keypad_pane_g1

0xd038,	// (0x00049e33) bg_button_pane_cp03_ParamLimits

0xd038,	// (0x00049e33) bg_button_pane_cp03

0x67df,	// (0x000435da) cell_dialer_command_1_pane_g1_ParamLimits

0x67df,	// (0x000435da) cell_dialer_command_1_pane_g1

0xd044,	// (0x00049e3f) bg_button_pane_cp04

0x67f3,	// (0x000435ee) cell_dialer_command_2_pane_g1

0xa9c6,	// (0x000477c1) bg_button_pane_cp06

0xd04c,	// (0x00049e47) dialer_ne_clear_pane_g1

0xb324,	// (0x0004811f) navi_pane_g2

0xb352,	// (0x0004814d) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004c1e0) navi_pane_g

0xb3e1,	// (0x000481dc) navi_pane_mv_g2

0xb408,	// (0x00048203) navi_pane_mv_g5

0x489b,	// (0x00041696) navi_pane_mv_t1

0xa801,	// (0x000475fc) main_clock2_pane

0x6831,	// (0x0004362c) main_clock2_list_pane_ParamLimits

0x6831,	// (0x0004362c) main_clock2_list_pane

0x6859,	// (0x00043654) main_clock2_pane_t1_ParamLimits

0x6859,	// (0x00043654) main_clock2_pane_t1

0x687b,	// (0x00043676) main_clock2_pane_t2_ParamLimits

0x687b,	// (0x00043676) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004c5c4) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004c5c4) main_clock2_pane_t

0x68d6,	// (0x000436d1) popup_clock_analogue_window_cp03_ParamLimits

0x68d6,	// (0x000436d1) popup_clock_analogue_window_cp03

0x68f4,	// (0x000436ef) popup_clock_digital_window_cp02_ParamLimits

0x68f4,	// (0x000436ef) popup_clock_digital_window_cp02

0x6961,	// (0x0004375c) main_clock2_list_single_pane_ParamLimits

0x6961,	// (0x0004375c) main_clock2_list_single_pane

0xa9c6,	// (0x000477c1) list_highlight_pane_cp05

0xd08a,	// (0x00049e85) main_clock2_list_single_pane_t1

0x3437,	// (0x00040232) popup_toolbar_window_cp04_ParamLimits

0x5f31,	// (0x00042d2c) camera2_autofocus_pane_g2_ParamLimits

0x5f31,	// (0x00042d2c) camera2_autofocus_pane_g2

0x5f3d,	// (0x00042d38) camera2_autofocus_pane_g3_ParamLimits

0x5f3d,	// (0x00042d38) camera2_autofocus_pane_g3

0x5f49,	// (0x00042d44) camera2_autofocus_pane_g4_ParamLimits

0x5f49,	// (0x00042d44) camera2_autofocus_pane_g4

0x5f55,	// (0x00042d50) camera2_autofocus_pane_g5_ParamLimits

0x5f55,	// (0x00042d50) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004c508) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004c508) camera2_autofocus_pane_g

0xcf11,	// (0x00049d0c) camera2_autofocus_pane_cp_g2

0xcf19,	// (0x00049d14) camera2_autofocus_pane_cp_g3

0xcf21,	// (0x00049d1c) camera2_autofocus_pane_cp_g4

0xcf29,	// (0x00049d24) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0004c56e) camera2_autofocus_pane_cp_g

0x6709,	// (0x00043504) popup_dialer_spcha_window

0xa090,	// (0x00046e8b) bg_popup_sub_pane_cp07

0xd098,	// (0x00049e93) list_spcha_pane

0xd0a0,	// (0x00049e9b) list_single_spcha_pane_ParamLimits

0xd0a0,	// (0x00049e9b) list_single_spcha_pane

0xa090,	// (0x00046e8b) list_highlight_pane_cp06

0xd0b1,	// (0x00049eac) list_single_spcha_pane_t1

0xc275,	// (0x00049070) popup_call2_audio_out_window_g4_ParamLimits

0xc275,	// (0x00049070) popup_call2_audio_out_window_g4

0xa090,	// (0x00046e8b) main_imed2_pane

0x55cd,	// (0x000423c8) popup_imed_adjust2_window

0x55e0,	// (0x000423db) popup_imed_trans_window_ParamLimits

0x55e0,	// (0x000423db) popup_imed_trans_window

0xca7e,	// (0x00049879) popup_blid_sat_info2_window_t1

0xca8c,	// (0x00049887) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0004c49d) popup_blid_sat_info2_window_t

0x6a0b,	// (0x00043806) aid_size_cell_colour_35

0x6a25,	// (0x00043820) aid_size_cell_colour_112

0x6a3c,	// (0x00043837) aid_size_cell_effect

0xb086,	// (0x00047e81) bg_tb_trans_pane_cp02

0xb094,	// (0x00047e8f) heading_imed_pane

0x6a56,	// (0x00043851) listscroll_imed_pane

0xd0bf,	// (0x00049eba) heading_imed_pane_g1

0xd0c7,	// (0x00049ec2) heading_imed_pane_t1

0xd0d5,	// (0x00049ed0) grid_imed_colour_35_pane_ParamLimits

0xd0d5,	// (0x00049ed0) grid_imed_colour_35_pane

0x6a62,	// (0x0004385d) grid_imed_effect_pane

0xd0ec,	// (0x00049ee7) list_imed_aspect_pane

0x6a72,	// (0x0004386d) scroll_pane_cp027_ParamLimits

0x6a72,	// (0x0004386d) scroll_pane_cp027

0x6a7e,	// (0x00043879) cell_imed_effect_pane_ParamLimits

0x6a7e,	// (0x00043879) cell_imed_effect_pane

0xd0f4,	// (0x00049eef) cell_imed_colour_pane_ParamLimits

0xd0f4,	// (0x00049eef) cell_imed_colour_pane

0xd136,	// (0x00049f31) cell_imed_colour_pane_g1_ParamLimits

0xd136,	// (0x00049f31) cell_imed_colour_pane_g1

0xd147,	// (0x00049f42) hgihlgiht_grid_pane_cp016_ParamLimits

0xd147,	// (0x00049f42) hgihlgiht_grid_pane_cp016

0x6a96,	// (0x00043891) cell_imed_effect_pane_g1

0x6a9e,	// (0x00043899) grid_highlight_pane_cp017

0xd158,	// (0x00049f53) list_imed_single_pane_ParamLimits

0xd158,	// (0x00049f53) list_imed_single_pane

0xa090,	// (0x00046e8b) list_highlight_pane_cp07

0xd16d,	// (0x00049f68) list_imed_aspect_pane_comp1_t1

0xc838,	// (0x00049633) bg_tb_trans_pane_cp05

0xd18f,	// (0x00049f8a) popup_imed_adjust2_window_g1

0xd1b6,	// (0x00049fb1) popup_imed_adjust2_window_t1

0xd1ce,	// (0x00049fc9) slider_imed_adjust_pane

0xd1e2,	// (0x00049fdd) slider_imed_adjust_pane_g1

0xd1f2,	// (0x00049fed) slider_imed_adjust_pane_g2

0xd202,	// (0x00049ffd) slider_imed_adjust_pane_g3

0xd213,	// (0x0004a00e) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004c5e1) slider_imed_adjust_pane_g

0x6aa7,	// (0x000438a2) aid_size_cell_clipart2

0x6ab3,	// (0x000438ae) grid_imed_clipart_pane

0xd224,	// (0x0004a01f) scroll_pane_cp031

0x6abd,	// (0x000438b8) cell_imed_clipart_pane_ParamLimits

0x6abd,	// (0x000438b8) cell_imed_clipart_pane

0x6adf,	// (0x000438da) cell_imed_clipart_pane_g1

0xa090,	// (0x00046e8b) grid_highlight_pane_cp014

0x683d,	// (0x00043638) main_clock2_pane_g1_ParamLimits

0x683d,	// (0x00043638) main_clock2_pane_g1

0x690c,	// (0x00043707) aid_call2_pane_cp10

0x691e,	// (0x00043719) aid_call_pane_cp10

0xb285,	// (0x00048080) popup_clock_analogue_window_cp10_g1

0xb285,	// (0x00048080) popup_clock_analogue_window_cp10_g2

0x6930,	// (0x0004372b) popup_clock_analogue_window_cp10_g3

0x6930,	// (0x0004372b) popup_clock_analogue_window_cp10_g4

0xb285,	// (0x00048080) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004c5cf) popup_clock_analogue_window_cp10_g

0x6942,	// (0x0004373d) popup_clock_analogue_window_cp10_t1

0x6973,	// (0x0004376e) clock_digital_number_pane_cp10_ParamLimits

0x6973,	// (0x0004376e) clock_digital_number_pane_cp10

0x698b,	// (0x00043786) clock_digital_number_pane_cp11_ParamLimits

0x698b,	// (0x00043786) clock_digital_number_pane_cp11

0x69a3,	// (0x0004379e) clock_digital_number_pane_cp12_ParamLimits

0x69a3,	// (0x0004379e) clock_digital_number_pane_cp12

0x69bb,	// (0x000437b6) clock_digital_number_pane_cp13_ParamLimits

0x69bb,	// (0x000437b6) clock_digital_number_pane_cp13

0x69d3,	// (0x000437ce) clock_digital_separator_pane_cp10_ParamLimits

0x69d3,	// (0x000437ce) clock_digital_separator_pane_cp10

0x69eb,	// (0x000437e6) popup_clock_digital_window_cp02_t1_ParamLimits

0x69eb,	// (0x000437e6) popup_clock_digital_window_cp02_t1

0xa734,	// (0x0004752f) clock_digital_number_pane_cp10_g1

0xa734,	// (0x0004752f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004c5ea) clock_digital_number_pane_cp10_g

0xa734,	// (0x0004752f) clock_digital_separator_pane_cp10_g1

0xa734,	// (0x0004752f) clock_digital_separator_pane_g2_cp10

0xb410,	// (0x0004820b) navi_pane_vded_g4

0xb419,	// (0x00048214) navi_pane_vded_g5

0xb422,	// (0x0004821d) navi_pane_vded_t1

0xa090,	// (0x00046e8b) main_vded_pane

0x6ae8,	// (0x000438e3) main_vded_pane_g1

0x6af4,	// (0x000438ef) main_vded_pane_g2

0x6afe,	// (0x000438f9) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004c5ef) main_vded_pane_g

0x6b08,	// (0x00043903) main_vded_pane_t1

0x6b16,	// (0x00043911) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004c5f6) main_vded_pane_t

0x6b24,	// (0x0004391f) vded_slider_pane

0x6b2e,	// (0x00043929) vded_video_pane

0xd22c,	// (0x0004a027) vded_video_pane_g1

0x6b38,	// (0x00043933) vded_video_pane_g2

0xcc49,	// (0x00049a44) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004c5fb) vded_video_pane_g

0xd236,	// (0x0004a031) vded_slider_pane_g1

0xc993,	// (0x0004978e) vded_slider_pane_g2

0xd23f,	// (0x0004a03a) vded_slider_pane_g3

0xd248,	// (0x0004a043) vded_slider_pane_g4

0xd251,	// (0x0004a04c) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004c602) vded_slider_pane_g

0x660d,	// (0x00043408) mup3_rocker_pane_ParamLimits

0x660d,	// (0x00043408) mup3_rocker_pane

0x6b41,	// (0x0004393c) mup3_control_keys_pane_g1

0x6b49,	// (0x00043944) mup3_control_keys_pane_g2

0x6b51,	// (0x0004394c) mup3_control_keys_pane_g3

0x6b59,	// (0x00043954) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004c60d) mup3_control_keys_pane_g

0x24bf,	// (0x0003f2ba) popup_toolbar2_fixed_window_cp01_ParamLimits

0x24bf,	// (0x0003f2ba) popup_toolbar2_fixed_window_cp01

0x6627,	// (0x00043422) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6627,	// (0x00043422) popup_toolbar2_fixed_window_cp02

0xbbb4,	// (0x000489af) popup_call2_audio_second_window_t4_ParamLimits

0xbbb4,	// (0x000489af) popup_call2_audio_second_window_t4

0xc0e2,	// (0x00048edd) popup_call2_audio_first_window_t6_ParamLimits

0xc0e2,	// (0x00048edd) popup_call2_audio_first_window_t6

0xc378,	// (0x00049173) popup_call2_audio_out_window_t6_ParamLimits

0xc378,	// (0x00049173) popup_call2_audio_out_window_t6

0xa090,	// (0x00046e8b) main_vitu_pane

0x6b69,	// (0x00043964) aid_size_cell_itu_ParamLimits

0x6b69,	// (0x00043964) aid_size_cell_itu

0xd8c9,	// (0x0004a6c4) bg_popup_window_pane_cp08_ParamLimits

0xd8c9,	// (0x0004a6c4) bg_popup_window_pane_cp08

0x6b77,	// (0x00043972) field_vitu_entry_pane_ParamLimits

0x6b77,	// (0x00043972) field_vitu_entry_pane

0x6b86,	// (0x00043981) grid_vitu_function_pane_ParamLimits

0x6b86,	// (0x00043981) grid_vitu_function_pane

0x6b96,	// (0x00043991) grid_vitu_itu_pane_ParamLimits

0x6b96,	// (0x00043991) grid_vitu_itu_pane

0x6ba6,	// (0x000439a1) cell_vitu_itu_pane_ParamLimits

0x6ba6,	// (0x000439a1) cell_vitu_itu_pane

0x6bbb,	// (0x000439b6) cell_vitu_function_pane_ParamLimits

0x6bbb,	// (0x000439b6) cell_vitu_function_pane

0xb086,	// (0x00047e81) bg_popup_sub_pane_cp08_ParamLimits

0xb086,	// (0x00047e81) bg_popup_sub_pane_cp08

0x6bcd,	// (0x000439c8) field_vitu_entry_pane_t1_ParamLimits

0x6bcd,	// (0x000439c8) field_vitu_entry_pane_t1

0xd272,	// (0x0004a06d) field_vitu_entry_pane_t2_ParamLimits

0xd272,	// (0x0004a06d) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004c61b) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004c61b) field_vitu_entry_pane_t

0xd28f,	// (0x0004a08a) bg_button_pane_cp05_ParamLimits

0xd28f,	// (0x0004a08a) bg_button_pane_cp05

0x6be9,	// (0x000439e4) cell_vitu_itu_pane_g1

0x6c01,	// (0x000439fc) cell_vitu_itu_pane_t1_ParamLimits

0x6c01,	// (0x000439fc) cell_vitu_itu_pane_t1

0x6c13,	// (0x00043a0e) cell_vitu_itu_pane_t2_ParamLimits

0x6c13,	// (0x00043a0e) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004c620) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004c620) cell_vitu_itu_pane_t

0xd29d,	// (0x0004a098) bg_button_pane_cp07

0x6c48,	// (0x00043a43) cell_vitu_function_pane_g1

0x2785,	// (0x0003f580) main_calc_pane_g1

0x227c,	// (0x0003f077) aid_visual_content_pane

0xa090,	// (0x00046e8b) main_vradio_pane

0x6c51,	// (0x00043a4c) main_vradio_pane_g1_ParamLimits

0x6c51,	// (0x00043a4c) main_vradio_pane_g1

0xd2a7,	// (0x0004a0a2) main_vradio_pane_g2_ParamLimits

0xd2a7,	// (0x0004a0a2) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004c627) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004c627) main_vradio_pane_g

0x6c61,	// (0x00043a5c) main_vradio_pane_t1_ParamLimits

0x6c61,	// (0x00043a5c) main_vradio_pane_t1

0x6c73,	// (0x00043a6e) main_vradio_pane_t2_ParamLimits

0x6c73,	// (0x00043a6e) main_vradio_pane_t2

0xd2b4,	// (0x0004a0af) main_vradio_pane_t3_ParamLimits

0xd2b4,	// (0x0004a0af) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004c62c) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004c62c) main_vradio_pane_t

0x6c85,	// (0x00043a80) vradio_rocker_control_pane_ParamLimits

0x6c85,	// (0x00043a80) vradio_rocker_control_pane

0x6c91,	// (0x00043a8c) vradio_station_info_pane_ParamLimits

0x6c91,	// (0x00043a8c) vradio_station_info_pane

0xd2c8,	// (0x0004a0c3) vradio_frequency_info_pane_ParamLimits

0xd2c8,	// (0x0004a0c3) vradio_frequency_info_pane

0xcc49,	// (0x00049a44) vradio_station_info_pane_g1

0xd2d7,	// (0x0004a0d2) vradio_station_info_pane_t1_ParamLimits

0xd2d7,	// (0x0004a0d2) vradio_station_info_pane_t1

0xd2f9,	// (0x0004a0f4) vradio_station_info_pane_t2_ParamLimits

0xd2f9,	// (0x0004a0f4) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004c633) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004c633) vradio_station_info_pane_t

0xd30b,	// (0x0004a106) vradio_tuning_pane

0xd313,	// (0x0004a10e) vradio_rocker_control_pane_g1

0xd31b,	// (0x0004a116) vradio_rocker_control_pane_g2

0xd323,	// (0x0004a11e) vradio_rocker_control_pane_g3

0xd32b,	// (0x0004a126) vradio_rocker_control_pane_g4

0xd333,	// (0x0004a12e) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004c638) vradio_rocker_control_pane_g

0x6ca0,	// (0x00043a9b) vradio_frequency_info_pane_g1

0xd33b,	// (0x0004a136) vradio_frequency_info_pane_t1_ParamLimits

0xd33b,	// (0x0004a136) vradio_frequency_info_pane_t1

0x6caa,	// (0x00043aa5) vradio_tuning_pane_g1

0x6cb3,	// (0x00043aae) vradio_tuning_pane_t1

0x22c5,	// (0x0003f0c0) area_side_right_pane_ParamLimits

0x22c5,	// (0x0003f0c0) area_side_right_pane

0xc7f3,	// (0x000495ee) status_small_pane_g1

0xc7fb,	// (0x000495f6) status_small_pane_g2

0xc804,	// (0x000495ff) status_small_pane_g3

0xc80d,	// (0x00049608) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0004c3f3) status_small_pane_g

0xc816,	// (0x00049611) status_small_pane_t1

0xa090,	// (0x00046e8b) main_video3_pane

0xd34f,	// (0x0004a14a) cams_zoom_vslider_pane

0xd357,	// (0x0004a152) image3_wide_pane_ParamLimits

0xd357,	// (0x0004a152) image3_wide_pane

0xd371,	// (0x0004a16c) image3_wide_small_pane

0xd37d,	// (0x0004a178) main_video3_pane_g1_ParamLimits

0xd37d,	// (0x0004a178) main_video3_pane_g1

0xd399,	// (0x0004a194) main_video3_pane_g2_ParamLimits

0xd399,	// (0x0004a194) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004c643) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004c643) main_video3_pane_g

0xd3b5,	// (0x0004a1b0) main_video3_pane_t1_ParamLimits

0xd3b5,	// (0x0004a1b0) main_video3_pane_t1

0xd3e0,	// (0x0004a1db) main_video3_pane_t2_ParamLimits

0xd3e0,	// (0x0004a1db) main_video3_pane_t2

0xd40b,	// (0x0004a206) main_video3_pane_t3_ParamLimits

0xd40b,	// (0x0004a206) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004c648) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004c648) main_video3_pane_t

0xd438,	// (0x0004a233) cams_zoom_vslider_pane_g1

0xd441,	// (0x0004a23c) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004c64f) cams_zoom_vslider_pane_g

0xd449,	// (0x0004a244) small_slider_vertical_pane

0xcc49,	// (0x00049a44) small_slider_vertical_pane_g1

0xcc49,	// (0x00049a44) small_slider_vertical_pane_g2

0xd451,	// (0x0004a24c) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004c654) small_slider_vertical_pane_g

0xa090,	// (0x00046e8b) main_hwr_training_pane

0xd45a,	// (0x0004a255) hwr_training_instruct_pane_ParamLimits

0xd45a,	// (0x0004a255) hwr_training_instruct_pane

0x6cc2,	// (0x00043abd) hwr_training_navi_pane_ParamLimits

0x6cc2,	// (0x00043abd) hwr_training_navi_pane

0x6cdc,	// (0x00043ad7) hwr_training_write_pane_ParamLimits

0x6cdc,	// (0x00043ad7) hwr_training_write_pane

0xa090,	// (0x00046e8b) bg_frame_shadow_pane

0xd49d,	// (0x0004a298) hwr_training_write_pane_g1

0xd4a5,	// (0x0004a2a0) hwr_training_write_pane_g2

0xd4ad,	// (0x0004a2a8) hwr_training_write_pane_g3

0xd4b5,	// (0x0004a2b0) hwr_training_write_pane_g4

0xd4bd,	// (0x0004a2b8) hwr_training_write_pane_g5

0xd4c5,	// (0x0004a2c0) hwr_training_write_pane_g6

0xd4cd,	// (0x0004a2c8) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004c65b) hwr_training_write_pane_g

0x6d14,	// (0x00043b0f) hwr_training_navi_pane_g1_ParamLimits

0x6d14,	// (0x00043b0f) hwr_training_navi_pane_g1

0x6d26,	// (0x00043b21) hwr_training_navi_pane_g2_ParamLimits

0x6d26,	// (0x00043b21) hwr_training_navi_pane_g2

0x6d38,	// (0x00043b33) hwr_training_navi_pane_g3_ParamLimits

0x6d38,	// (0x00043b33) hwr_training_navi_pane_g3

0x6d48,	// (0x00043b43) hwr_training_navi_pane_g4_ParamLimits

0x6d48,	// (0x00043b43) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004c66a) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004c66a) hwr_training_navi_pane_g

0x6d62,	// (0x00043b5d) hwr_training_navi_pane_t1

0x6d70,	// (0x00043b6b) list_single_hwr_training_instruct_pane_ParamLimits

0x6d70,	// (0x00043b6b) list_single_hwr_training_instruct_pane

0xd4d5,	// (0x0004a2d0) list_single_hwr_training_instruct_pane_t1

0xcb80,	// (0x0004997b) bg_frame_shadow_pane_g1

0xd4e4,	// (0x0004a2df) bg_frame_shadow_pane_g2

0xd4ec,	// (0x0004a2e7) bg_frame_shadow_pane_g3

0xd4f4,	// (0x0004a2ef) bg_frame_shadow_pane_g4

0xd4fc,	// (0x0004a2f7) bg_frame_shadow_pane_g5

0xd504,	// (0x0004a2ff) bg_frame_shadow_pane_g6

0xd50c,	// (0x0004a307) bg_frame_shadow_pane_g7

0xa8ba,	// (0x000476b5) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004c675) bg_frame_shadow_pane_g

0xa090,	// (0x00046e8b) main_video_tele_dialer_pane

0x6d95,	// (0x00043b90) aid_size_cell_video_keypad_ParamLimits

0x6d95,	// (0x00043b90) aid_size_cell_video_keypad

0x6da5,	// (0x00043ba0) grid_video_dialer_keypad_pane_ParamLimits

0x6da5,	// (0x00043ba0) grid_video_dialer_keypad_pane

0x6dd9,	// (0x00043bd4) video_down_pane_cp_ParamLimits

0x6dd9,	// (0x00043bd4) video_down_pane_cp

0x6e03,	// (0x00043bfe) cell_video_dialer_keypad_pane_ParamLimits

0x6e03,	// (0x00043bfe) cell_video_dialer_keypad_pane

0xd514,	// (0x0004a30f) bg_button_pane_cp08_ParamLimits

0xd514,	// (0x0004a30f) bg_button_pane_cp08

0x6e18,	// (0x00043c13) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6e18,	// (0x00043c13) cell_video_dialer_keypad_pane_g1

0x6601,	// (0x000433fc) mup3_rocker2_pane_ParamLimits

0x6601,	// (0x000433fc) mup3_rocker2_pane

0xcc49,	// (0x00049a44) mup3_rocker2_pane_g1

0x553d,	// (0x00042338) main_dialer2_pane

0xa090,	// (0x00046e8b) main_mp4_pane

0x6e57,	// (0x00043c52) main_mp4_pane_g1_ParamLimits

0x6e57,	// (0x00043c52) main_mp4_pane_g1

0x6e65,	// (0x00043c60) main_mp4_pane_g2_ParamLimits

0x6e65,	// (0x00043c60) main_mp4_pane_g2

0x6e73,	// (0x00043c6e) main_mp4_pane_g3_ParamLimits

0x6e73,	// (0x00043c6e) main_mp4_pane_g3

0x6eb8,	// (0x00043cb3) main_mp4_pane_g4_ParamLimits

0x6eb8,	// (0x00043cb3) main_mp4_pane_g4

0x6ee0,	// (0x00043cdb) main_mp4_pane_g5_ParamLimits

0x6ee0,	// (0x00043cdb) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004c695) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004c695) main_mp4_pane_g

0x6f30,	// (0x00043d2b) main_mp4_pane_t1_ParamLimits

0x6f30,	// (0x00043d2b) main_mp4_pane_t1

0x6f8c,	// (0x00043d87) main_mp4_pane_t2_ParamLimits

0x6f8c,	// (0x00043d87) main_mp4_pane_t2

0xd520,	// (0x0004a31b) main_mp4_pane_t3_ParamLimits

0xd520,	// (0x0004a31b) main_mp4_pane_t3

0x6fde,	// (0x00043dd9) main_mp4_pane_t4_ParamLimits

0x6fde,	// (0x00043dd9) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004c6a2) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004c6a2) main_mp4_pane_t

0x7022,	// (0x00043e1d) mp4_progress_pane_ParamLimits

0x7022,	// (0x00043e1d) mp4_progress_pane

0x706c,	// (0x00043e67) mp4_rocker_pane_ParamLimits

0x706c,	// (0x00043e67) mp4_rocker_pane

0xd548,	// (0x0004a343) mp4_progress_pane_t1

0xd561,	// (0x0004a35c) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004c6ab) mp4_progress_pane_t

0xd57a,	// (0x0004a375) mup_progress_pane_cp04

0xcc49,	// (0x00049a44) mp4_rocker_pane_g1

0x708c,	// (0x00043e87) aid_cell_size_keypad2_ParamLimits

0x708c,	// (0x00043e87) aid_cell_size_keypad2

0x709c,	// (0x00043e97) dialer2_ne_pane_ParamLimits

0x709c,	// (0x00043e97) dialer2_ne_pane

0x70aa,	// (0x00043ea5) grid_dialer2_keypad_pane_ParamLimits

0x70aa,	// (0x00043ea5) grid_dialer2_keypad_pane

0xd8d7,	// (0x0004a6d2) bg_popup_call_pane_cp07_ParamLimits

0xd8d7,	// (0x0004a6d2) bg_popup_call_pane_cp07

0x70ba,	// (0x00043eb5) dialer2_ne_pane_t1_ParamLimits

0x70ba,	// (0x00043eb5) dialer2_ne_pane_t1

0x70df,	// (0x00043eda) cell_dialer2_keypad_pane_ParamLimits

0x70df,	// (0x00043eda) cell_dialer2_keypad_pane

0xd598,	// (0x0004a393) bg_button_pane_pane_cp04_ParamLimits

0xd598,	// (0x0004a393) bg_button_pane_pane_cp04

0x70f4,	// (0x00043eef) cell_dialer2_keypad_pane_g1_ParamLimits

0x70f4,	// (0x00043eef) cell_dialer2_keypad_pane_g1

0x32f9,	// (0x000400f4) aid_placing_vt_set_content_ParamLimits

0x32f9,	// (0x000400f4) aid_placing_vt_set_content

0x3325,	// (0x00040120) aid_placing_vt_set_title_ParamLimits

0x3325,	// (0x00040120) aid_placing_vt_set_title

0xa090,	// (0x00046e8b) main_image3_pane

0x718e,	// (0x00043f89) area_side_right_pane_cp01_ParamLimits

0x718e,	// (0x00043f89) area_side_right_pane_cp01

0xa5fd,	// (0x000473f8) main_image3_pane_g1_ParamLimits

0xa5fd,	// (0x000473f8) main_image3_pane_g1

0x71bb,	// (0x00043fb6) main_image3_pane_g2_ParamLimits

0x71bb,	// (0x00043fb6) main_image3_pane_g2

0x71d4,	// (0x00043fcf) main_image3_pane_g3_ParamLimits

0x71d4,	// (0x00043fcf) main_image3_pane_g3

0x71ed,	// (0x00043fe8) main_image3_pane_g4_ParamLimits

0x71ed,	// (0x00043fe8) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004c6ba) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004c6ba) main_image3_pane_g

0x7206,	// (0x00044001) main_image3_pane_t1_ParamLimits

0x7206,	// (0x00044001) main_image3_pane_t1

0x722b,	// (0x00044026) main_image3_pane_t2_ParamLimits

0x722b,	// (0x00044026) main_image3_pane_t2

0x724a,	// (0x00044045) main_image3_pane_t3_ParamLimits

0x724a,	// (0x00044045) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004c6c3) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004c6c3) main_image3_pane_t

0xd8c9,	// (0x0004a6c4) grid_sctrl_middle_pane_cp01_ParamLimits

0xd8c9,	// (0x0004a6c4) grid_sctrl_middle_pane_cp01

0x72ab,	// (0x000440a6) cell_sctrl_middle_pane_cp01_ParamLimits

0x72ab,	// (0x000440a6) cell_sctrl_middle_pane_cp01

0x72bc,	// (0x000440b7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x72bc,	// (0x000440b7) cell_sctrl_middle_pane_cp01_g1

0xa090,	// (0x00046e8b) main_call4_pane

0x72c9,	// (0x000440c4) aid_size_button_call4_ParamLimits

0x72c9,	// (0x000440c4) aid_size_button_call4

0x72f9,	// (0x000440f4) call4_windows_pane_ParamLimits

0x72f9,	// (0x000440f4) call4_windows_pane

0x7313,	// (0x0004410e) grid_call4_button_pane_ParamLimits

0x7313,	// (0x0004410e) grid_call4_button_pane

0xd5a4,	// (0x0004a39f) call4_windows_conf_pane

0xd5bb,	// (0x0004a3b6) popup_call4_audio_first_window_ParamLimits

0xd5bb,	// (0x0004a3b6) popup_call4_audio_first_window

0xd607,	// (0x0004a402) popup_call4_audio_second_window_ParamLimits

0xd607,	// (0x0004a402) popup_call4_audio_second_window

0xd61b,	// (0x0004a416) popup_call4_audio_wait_window_ParamLimits

0xd61b,	// (0x0004a416) popup_call4_audio_wait_window

0x7337,	// (0x00044132) cell_call4_button_pane_ParamLimits

0x7337,	// (0x00044132) cell_call4_button_pane

0x735c,	// (0x00044157) bg_button_pane_cp09_ParamLimits

0x735c,	// (0x00044157) bg_button_pane_cp09

0x7368,	// (0x00044163) cell_call4_button_pane_g1_ParamLimits

0x7368,	// (0x00044163) cell_call4_button_pane_g1

0x7375,	// (0x00044170) cell_call4_button_pane_t1_ParamLimits

0x7375,	// (0x00044170) cell_call4_button_pane_t1

0xd663,	// (0x0004a45e) popup_call4_audio_conf_window_ParamLimits

0xd663,	// (0x0004a45e) popup_call4_audio_conf_window

0x6634,	// (0x0004342f) mup3_progress_pane_t1_ParamLimits

0x6653,	// (0x0004344e) mup3_progress_pane_t2_ParamLimits

0xcf47,	// (0x00049d42) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0004c597) mup3_progress_pane_t_ParamLimits

0xcf64,	// (0x00049d5f) mup_progress_pane_cp03_ParamLimits

0x6b61,	// (0x0004395c) mup3_control_keys_pane_g4_copy1

0x7050,	// (0x00043e4b) mp4_rocker2_pane_ParamLimits

0x7050,	// (0x00043e4b) mp4_rocker2_pane

0xd677,	// (0x0004a472) mp4_rocker2_pane_g1

0xd67f,	// (0x0004a47a) mp4_rocker2_pane_g2

0x7387,	// (0x00044182) mp4_rocker2_pane_g3

0x738f,	// (0x0004418a) mp4_rocker2_pane_g4

0x7397,	// (0x00044192) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004c6cc) mp4_rocker2_pane_g

0xa090,	// (0x00046e8b) main_camera4_pane

0xa090,	// (0x00046e8b) main_video4_pane

0x6db5,	// (0x00043bb0) main_video_tele_dialer_pane_t1_ParamLimits

0x6db5,	// (0x00043bb0) main_video_tele_dialer_pane_t1

0x6dc7,	// (0x00043bc2) main_video_tele_dialer_pane_t2_ParamLimits

0x6dc7,	// (0x00043bc2) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004c686) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004c686) main_video_tele_dialer_pane_t

0x73b7,	// (0x000441b2) cam4_autofocus_pane_ParamLimits

0x73b7,	// (0x000441b2) cam4_autofocus_pane

0x73d1,	// (0x000441cc) cam4_image_uncrop_pane_ParamLimits

0x73d1,	// (0x000441cc) cam4_image_uncrop_pane

0x73e8,	// (0x000441e3) cam4_indicators_pane_ParamLimits

0x73e8,	// (0x000441e3) cam4_indicators_pane

0x7404,	// (0x000441ff) main_camera4_pane_g1_ParamLimits

0x7404,	// (0x000441ff) main_camera4_pane_g1

0x7410,	// (0x0004420b) main_camera4_pane_g2_ParamLimits

0x7410,	// (0x0004420b) main_camera4_pane_g2

0x7410,	// (0x0004420b) main_camera4_pane_g3_ParamLimits

0x7410,	// (0x0004420b) main_camera4_pane_g3

0x741c,	// (0x00044217) main_camera4_pane_g4_ParamLimits

0x741c,	// (0x00044217) main_camera4_pane_g4

0x7428,	// (0x00044223) main_camera4_pane_g5_ParamLimits

0x7428,	// (0x00044223) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004c6d7) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004c6d7) main_camera4_pane_g

0x7442,	// (0x0004423d) main_camera4_pane_t1_ParamLimits

0x7442,	// (0x0004423d) main_camera4_pane_t1

0xceac,	// (0x00049ca7) bg_tb_trans_pane_cp06

0x7492,	// (0x0004428d) cam4_indicators_pane_g1

0x74a3,	// (0x0004429e) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004c6f2) cam4_indicators_pane_g

0x74c1,	// (0x000442bc) cam4_indicators_pane_t1

0x74eb,	// (0x000442e6) main_video4_pane_g1_ParamLimits

0x74eb,	// (0x000442e6) main_video4_pane_g1

0x74f7,	// (0x000442f2) main_video4_pane_g2_ParamLimits

0x74f7,	// (0x000442f2) main_video4_pane_g2

0x7503,	// (0x000442fe) main_video4_pane_g3_ParamLimits

0x7503,	// (0x000442fe) main_video4_pane_g3

0x750f,	// (0x0004430a) main_video4_pane_g4_ParamLimits

0x750f,	// (0x0004430a) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004c6f9) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004c6f9) main_video4_pane_g

0x752f,	// (0x0004432a) vid4_indicators_pane_ParamLimits

0x752f,	// (0x0004432a) vid4_indicators_pane

0x754e,	// (0x00044349) video4_image_uncrop_cif_pane_ParamLimits

0x754e,	// (0x00044349) video4_image_uncrop_cif_pane

0x755d,	// (0x00044358) video4_image_uncrop_nhd_pane_ParamLimits

0x755d,	// (0x00044358) video4_image_uncrop_nhd_pane

0x73d1,	// (0x000441cc) video4_image_uncrop_vga_pane_ParamLimits

0x73d1,	// (0x000441cc) video4_image_uncrop_vga_pane

0xb086,	// (0x00047e81) bg_tb_trans_pane_cp07

0x7574,	// (0x0004436f) vid4_indicators_pane_g1

0x7588,	// (0x00044383) vid4_indicators_pane_g2

0x759c,	// (0x00044397) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004c704) vid4_indicators_pane_g

0x75cb,	// (0x000443c6) vid4_indicators_pane_t1

0x75e2,	// (0x000443dd) cam4_autofocus_pane_g1

0x75ea,	// (0x000443e5) cam4_autofocus_pane_g2

0x75f2,	// (0x000443ed) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004c70f) cam4_autofocus_pane_g

0x75fa,	// (0x000443f5) cam4_autofocus_pane_g3_copy1

0x6de7,	// (0x00043be2) video_down_pane_cp_t1

0x6df5,	// (0x00043bf0) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004c68b) video_down_pane_cp_t

0xd8c9,	// (0x0004a6c4) popup_vitu2_window_ParamLimits

0xd8c9,	// (0x0004a6c4) popup_vitu2_window

0x7602,	// (0x000443fd) aid_size_cell2_itu2_ParamLimits

0x7602,	// (0x000443fd) aid_size_cell2_itu2

0x7624,	// (0x0004441f) aid_size_cell_itu2_ParamLimits

0x7624,	// (0x0004441f) aid_size_cell_itu2

0xd8d7,	// (0x0004a6d2) bg_popup_window_pane_cp09_ParamLimits

0xd8d7,	// (0x0004a6d2) bg_popup_window_pane_cp09

0x7668,	// (0x00044463) field_vitu2_entry_pane_ParamLimits

0x7668,	// (0x00044463) field_vitu2_entry_pane

0x7688,	// (0x00044483) grid_vitu2_function_pane_ParamLimits

0x7688,	// (0x00044483) grid_vitu2_function_pane

0x76cc,	// (0x000444c7) grid_vitu2_itu_pane_ParamLimits

0x76cc,	// (0x000444c7) grid_vitu2_itu_pane

0x7748,	// (0x00044543) cell_vitu2_itu_pane_ParamLimits

0x7748,	// (0x00044543) cell_vitu2_itu_pane

0x7761,	// (0x0004455c) cell_vitu2_function_pane_ParamLimits

0x7761,	// (0x0004455c) cell_vitu2_function_pane

0xd687,	// (0x0004a482) bg_popup_call_pane_cp08_ParamLimits

0xd687,	// (0x0004a482) bg_popup_call_pane_cp08

0xd69e,	// (0x0004a499) field_vitu2_entry_pane_g1

0xd6aa,	// (0x0004a4a5) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004c716) field_vitu2_entry_pane_g

0x1215,	// (0x0003e010) field_vitu2_entry_pane_t1_ParamLimits

0x1215,	// (0x0003e010) field_vitu2_entry_pane_t1

0x1247,	// (0x0003e042) field_vitu2_entry_pane_t2_ParamLimits

0x1247,	// (0x0003e042) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004c71d) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004c71d) field_vitu2_entry_pane_t

0x77a2,	// (0x0004459d) bg_button_pane_cp010_ParamLimits

0x77a2,	// (0x0004459d) bg_button_pane_cp010

0x77b0,	// (0x000445ab) cell_vitu2_itu_pane_g1

0x77d0,	// (0x000445cb) cell_vitu2_itu_pane_t1_ParamLimits

0x77d0,	// (0x000445cb) cell_vitu2_itu_pane_t1

0x1264,	// (0x0003e05f) cell_vitu2_itu_pane_t2_ParamLimits

0x1264,	// (0x0003e05f) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004c727) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004c727) cell_vitu2_itu_pane_t

0xb086,	// (0x00047e81) bg_button_pane_cp011

0x781c,	// (0x00044617) cell_vitu2_function_pane_g1

0xa090,	// (0x00046e8b) main_myfav_hc_pane

0x728c,	// (0x00044087) popup_image3_note_pane_ParamLimits

0x728c,	// (0x00044087) popup_image3_note_pane

0x729a,	// (0x00044095) popup_image3_tool_bar_pane_ParamLimits

0x729a,	// (0x00044095) popup_image3_tool_bar_pane

0x12da,	// (0x0003e0d5) cell_vitu2_itu_pane_t3_ParamLimits

0x12da,	// (0x0003e0d5) cell_vitu2_itu_pane_t3

0xa090,	// (0x00046e8b) bg_popup_trans_pane

0xd6cc,	// (0x0004a4c7) grid_image3_tool_bar_pane

0xd6d6,	// (0x0004a4d1) bg_popup_trans_pane_g1

0xac1f,	// (0x00047a1a) bg_popup_trans_pane_g2

0xd6de,	// (0x0004a4d9) bg_popup_trans_pane_g3

0xd6e6,	// (0x0004a4e1) bg_popup_trans_pane_g4

0xd6ee,	// (0x0004a4e9) bg_popup_trans_pane_g5

0xd6f6,	// (0x0004a4f1) bg_popup_trans_pane_g6

0xd6fe,	// (0x0004a4f9) bg_popup_trans_pane_g7

0xd706,	// (0x0004a501) bg_popup_trans_pane_g8

0xabff,	// (0x000479fa) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004c72e) bg_popup_trans_pane_g

0xd70e,	// (0x0004a509) cell_image3_tool_bar_pane_ParamLimits

0xd70e,	// (0x0004a509) cell_image3_tool_bar_pane

0xcc49,	// (0x00049a44) cell_image3_tool_bar_pane_g1

0xa090,	// (0x00046e8b) bg_popup_trans_pane_cp1

0xd722,	// (0x0004a51d) popup_image3_note_pane_t1

0xd730,	// (0x0004a52b) popup_image3_note_pane_t2

0xd73e,	// (0x0004a539) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004c741) popup_image3_note_pane_t

0xd74c,	// (0x0004a547) popup_image3_note_pane_t3_copy1

0x7830,	// (0x0004462b) bg_myfav_hc_instruction_pane_ParamLimits

0x7830,	// (0x0004462b) bg_myfav_hc_instruction_pane

0x7848,	// (0x00044643) cell_myfav_contact_pane_ParamLimits

0x7848,	// (0x00044643) cell_myfav_contact_pane

0x7862,	// (0x0004465d) cell_myfav_contact_pane_cp1_ParamLimits

0x7862,	// (0x0004465d) cell_myfav_contact_pane_cp1

0x787a,	// (0x00044675) cell_myfav_contact_pane_cp2_ParamLimits

0x787a,	// (0x00044675) cell_myfav_contact_pane_cp2

0x7892,	// (0x0004468d) cell_myfav_contact_pane_cp3_ParamLimits

0x7892,	// (0x0004468d) cell_myfav_contact_pane_cp3

0x78a9,	// (0x000446a4) cell_myfav_contact_pane_cp4_ParamLimits

0x78a9,	// (0x000446a4) cell_myfav_contact_pane_cp4

0x78bf,	// (0x000446ba) cell_myfav_contact_pane_cp5_ParamLimits

0x78bf,	// (0x000446ba) cell_myfav_contact_pane_cp5

0x78d3,	// (0x000446ce) cell_myfav_contact_pane_cp6_ParamLimits

0x78d3,	// (0x000446ce) cell_myfav_contact_pane_cp6

0x78e7,	// (0x000446e2) cell_myfav_contact_pane_cp7_ParamLimits

0x78e7,	// (0x000446e2) cell_myfav_contact_pane_cp7

0xd75a,	// (0x0004a555) listscroll_gen_pane_cp05

0x78ff,	// (0x000446fa) main_myfav_hc_pane_g1_ParamLimits

0x78ff,	// (0x000446fa) main_myfav_hc_pane_g1

0x7915,	// (0x00044710) main_myfav_hc_pane_g2_ParamLimits

0x7915,	// (0x00044710) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004c748) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004c748) main_myfav_hc_pane_g

0x7943,	// (0x0004473e) main_myfav_hc_pane_t1_ParamLimits

0x7943,	// (0x0004473e) main_myfav_hc_pane_t1

0xd763,	// (0x0004a55e) main_myfav_hc_pane_t2_ParamLimits

0xd763,	// (0x0004a55e) main_myfav_hc_pane_t2

0xd775,	// (0x0004a570) main_myfav_hc_pane_t3_ParamLimits

0xd775,	// (0x0004a570) main_myfav_hc_pane_t3

0x795a,	// (0x00044755) main_myfav_hc_pane_t4_ParamLimits

0x795a,	// (0x00044755) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004c74f) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004c74f) main_myfav_hc_pane_t

0xcc49,	// (0x00049a44) bg_myfav_hc_instruction_pane_g1

0xd787,	// (0x0004a582) cell_myfav_contact_pane_g1_ParamLimits

0xd787,	// (0x0004a582) cell_myfav_contact_pane_g1

0xd787,	// (0x0004a582) cell_myfav_contact_pane_g2_ParamLimits

0xd787,	// (0x0004a582) cell_myfav_contact_pane_g2

0xd793,	// (0x0004a58e) cell_myfav_contact_pane_g3_ParamLimits

0xd793,	// (0x0004a58e) cell_myfav_contact_pane_g3

0xcf31,	// (0x00049d2c) cell_myfav_contact_pane_g4_ParamLimits

0xcf31,	// (0x00049d2c) cell_myfav_contact_pane_g4

0xd7a0,	// (0x0004a59b) cell_myfav_contact_pane_g5_ParamLimits

0xd7a0,	// (0x0004a59b) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004c75a) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004c75a) cell_myfav_contact_pane_g

0x792b,	// (0x00044726) main_myfav_hc_pane_g3_ParamLimits

0x792b,	// (0x00044726) main_myfav_hc_pane_g3

0x23fa,	// (0x0003f1f5) popup_adpt_find_window

0x7984,	// (0x0004477f) afind_page_pane_ParamLimits

0x7984,	// (0x0004477f) afind_page_pane

0x7991,	// (0x0004478c) aid_size_cell_afind_ParamLimits

0x7991,	// (0x0004478c) aid_size_cell_afind

0x79ab,	// (0x000447a6) bg_popup_sub_pane_cp09_ParamLimits

0x79ab,	// (0x000447a6) bg_popup_sub_pane_cp09

0x79b8,	// (0x000447b3) find_pane_cp01_ParamLimits

0x79b8,	// (0x000447b3) find_pane_cp01

0xd7ac,	// (0x0004a5a7) grid_afind_control_pane_ParamLimits

0xd7ac,	// (0x0004a5a7) grid_afind_control_pane

0x79c5,	// (0x000447c0) grid_afind_pane_ParamLimits

0x79c5,	// (0x000447c0) grid_afind_pane

0x79e1,	// (0x000447dc) cell_afind_pane_ParamLimits

0x79e1,	// (0x000447dc) cell_afind_pane

0xcc49,	// (0x00049a44) afind_page_pane_g1

0x7a29,	// (0x00044824) afind_page_pane_g2

0x7a32,	// (0x0004482d) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004c765) afind_page_pane_g

0x7a3b,	// (0x00044836) afind_page_pane_t1

0xd7c0,	// (0x0004a5bb) cell_afind_grid_control_pane_ParamLimits

0xd7c0,	// (0x0004a5bb) cell_afind_grid_control_pane

0xd598,	// (0x0004a393) bg_button_pane_cp69_ParamLimits

0xd598,	// (0x0004a393) bg_button_pane_cp69

0x7a5b,	// (0x00044856) cell_afind_pane_g1_ParamLimits

0x7a5b,	// (0x00044856) cell_afind_pane_g1

0x7a68,	// (0x00044863) cell_afind_pane_t1_ParamLimits

0x7a68,	// (0x00044863) cell_afind_pane_t1

0xaa18,	// (0x00047813) bg_button_pane_cp72

0xd7cf,	// (0x0004a5ca) cell_afind_grid_control_pane_g1

0x50bb,	// (0x00041eb6) aid_image_placing_area_ParamLimits

0x50bb,	// (0x00041eb6) aid_image_placing_area

0xd25a,	// (0x0004a055) field_vitu_entry_pane_g1_ParamLimits

0xd25a,	// (0x0004a055) field_vitu_entry_pane_g1

0xd266,	// (0x0004a061) field_vitu_entry_pane_g2_ParamLimits

0xd266,	// (0x0004a061) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004c616) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004c616) field_vitu_entry_pane_g

0x6be9,	// (0x000439e4) cell_vitu_itu_pane_g1_ParamLimits

0x6c2b,	// (0x00043a26) cell_vitu_itu_pane_t3_ParamLimits

0x6c2b,	// (0x00043a26) cell_vitu_itu_pane_t3

0xd548,	// (0x0004a343) mp4_progress_pane_t1_ParamLimits

0xd561,	// (0x0004a35c) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004c6ab) mp4_progress_pane_t_ParamLimits

0xd57a,	// (0x0004a375) mup_progress_pane_cp04_ParamLimits

0x796e,	// (0x00044769) main_myfav_hc_pane_t5_ParamLimits

0x796e,	// (0x00044769) main_myfav_hc_pane_t5

0x2288,	// (0x0003f083) aid_zoom_text_primary

0x23fa,	// (0x0003f1f5) popup_adpt_find_window_ParamLimits

0xb086,	// (0x00047e81) main_cam_set_pane

0x73f6,	// (0x000441f1) cam4_zoom_pane_ParamLimits

0x73f6,	// (0x000441f1) cam4_zoom_pane

0x7a7a,	// (0x00044875) main_cam_set_pane_g1_ParamLimits

0x7a7a,	// (0x00044875) main_cam_set_pane_g1

0x7a88,	// (0x00044883) main_cam_set_pane_g2_ParamLimits

0x7a88,	// (0x00044883) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004c76c) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004c76c) main_cam_set_pane_g

0x7a94,	// (0x0004488f) main_cam_set_pane_t1_ParamLimits

0x7a94,	// (0x0004488f) main_cam_set_pane_t1

0x7ab0,	// (0x000448ab) main_cset_listscroll_pane_ParamLimits

0x7ab0,	// (0x000448ab) main_cset_listscroll_pane

0x7adb,	// (0x000448d6) main_cset_slider_pane_ParamLimits

0x7adb,	// (0x000448d6) main_cset_slider_pane

0xd7e0,	// (0x0004a5db) main_cset_list_pane_ParamLimits

0xd7e0,	// (0x0004a5db) main_cset_list_pane

0xd7f0,	// (0x0004a5eb) scroll_pane_cp028

0x7afa,	// (0x000448f5) aid_area_touch_slider

0x7b16,	// (0x00044911) cset_slider_pane

0x7b40,	// (0x0004493b) main_cset_slider_pane_g1

0x7b55,	// (0x00044950) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004c771) main_cset_slider_pane_g

0xd829,	// (0x0004a624) main_cset_slider_pane_t1

0x7c17,	// (0x00044a12) main_cset_slider_pane_t2

0x7c31,	// (0x00044a2c) main_cset_slider_pane_t3

0x7c4b,	// (0x00044a46) main_cset_slider_pane_t4

0x7c65,	// (0x00044a60) main_cset_slider_pane_t5

0x7c83,	// (0x00044a7e) main_cset_slider_pane_t6

0x7c9a,	// (0x00044a95) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004c796) main_cset_slider_pane_t

0x7da6,	// (0x00044ba1) cset_list_set_pane_ParamLimits

0x7da6,	// (0x00044ba1) cset_list_set_pane

0x7dbc,	// (0x00044bb7) aid_position_infowindow_above

0x7dc4,	// (0x00044bbf) aid_position_infowindow_below

0x132c,	// (0x0003e127) cset_list_set_pane_g1_ParamLimits

0x132c,	// (0x0003e127) cset_list_set_pane_g1

0x1338,	// (0x0003e133) cset_list_set_pane_g3_ParamLimits

0x1338,	// (0x0003e133) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004c7b5) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004c7b5) cset_list_set_pane_g

0x1347,	// (0x0003e142) cset_list_set_pane_t1_ParamLimits

0x1347,	// (0x0003e142) cset_list_set_pane_t1

0xb086,	// (0x00047e81) list_highlight_pane_cp021_ParamLimits

0xb086,	// (0x00047e81) list_highlight_pane_cp021

0xb576,	// (0x00048371) cset_slider_pane_g1

0xb588,	// (0x00048383) cset_slider_pane_g2

0xb57f,	// (0x0004837a) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004c7ba) cset_slider_pane_g

0x7dcc,	// (0x00044bc7) aid_area_touch_cam4_zoom

0x7dd4,	// (0x00044bcf) cam4_zoom_cont_pane

0x7ddc,	// (0x00044bd7) cam4_zoom_pane_g1

0x7de4,	// (0x00044bdf) cam4_zoom_pane_g2

0x7dec,	// (0x00044be7) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004c7c1) cam4_zoom_pane_g

0xd8e5,	// (0x0004a6e0) cam4_zoom_cont_pane_g1

0xd8ee,	// (0x0004a6e9) cam4_zoom_cont_pane_g2

0xd8f7,	// (0x0004a6f2) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004c7c8) cam4_zoom_cont_pane_g

0x72e3,	// (0x000440de) call4_image_pane_ParamLimits

0x72e3,	// (0x000440de) call4_image_pane

0xd5a4,	// (0x0004a39f) call4_windows_conf_pane_ParamLimits

0xd5e5,	// (0x0004a3e0) popup_call4_audio_in_window_ParamLimits

0xd5e5,	// (0x0004a3e0) popup_call4_audio_in_window

0xa090,	// (0x00046e8b) bg_popup_call2_act_pane_cp02

0xd65b,	// (0x0004a456) call4_list_conf_pane

0xcc49,	// (0x00049a44) call4_image_pane_g1

0xcc49,	// (0x00049a44) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0004c4d7) call4_image_pane_g

0xd900,	// (0x0004a6fb) list_single_graphic_popup_conf4_pane_ParamLimits

0xd900,	// (0x0004a6fb) list_single_graphic_popup_conf4_pane

0xa090,	// (0x00046e8b) list_highlight_pane_cp022

0xd913,	// (0x0004a70e) list_single_graphic_popup_conf4_pane_g1

0xb155,	// (0x00047f50) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004c7cf) list_single_graphic_popup_conf4_pane_g

0xd91b,	// (0x0004a716) list_single_graphic_popup_conf4_pane_t1

0x3489,	// (0x00040284) popup_vtel_slider_window_ParamLimits

0x3489,	// (0x00040284) popup_vtel_slider_window

0xd586,	// (0x0004a381) dialer2_ne_pane_t2_ParamLimits

0xd586,	// (0x0004a381) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004c6b0) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004c6b0) dialer2_ne_pane_t

0xb086,	// (0x00047e81) bg_popup_sub_pane_cp010_ParamLimits

0xb086,	// (0x00047e81) bg_popup_sub_pane_cp010

0x7df4,	// (0x00044bef) popup_vtel_slider_window_g1_ParamLimits

0x7df4,	// (0x00044bef) popup_vtel_slider_window_g1

0x7e00,	// (0x00044bfb) popup_vtel_slider_window_g2_ParamLimits

0x7e00,	// (0x00044bfb) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004c7d4) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004c7d4) popup_vtel_slider_window_g

0x7e48,	// (0x00044c43) vtel_slider_pane_ParamLimits

0x7e48,	// (0x00044c43) vtel_slider_pane

0x7e57,	// (0x00044c52) vtel_slider_pane_g1_ParamLimits

0x7e57,	// (0x00044c52) vtel_slider_pane_g1

0x7e64,	// (0x00044c5f) vtel_slider_pane_g2_ParamLimits

0x7e64,	// (0x00044c5f) vtel_slider_pane_g2

0x7e71,	// (0x00044c6c) vtel_slider_pane_g3_ParamLimits

0x7e71,	// (0x00044c6c) vtel_slider_pane_g3

0x7e57,	// (0x00044c52) vtel_slider_pane_g4_ParamLimits

0x7e57,	// (0x00044c52) vtel_slider_pane_g4

0x7e7e,	// (0x00044c79) vtel_slider_pane_g5_ParamLimits

0x7e7e,	// (0x00044c79) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004c7dd) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004c7dd) vtel_slider_pane_g

0xb086,	// (0x00047e81) main_gallery2_pane

0x764a,	// (0x00044445) aid_size_row_itut2_dropdow_list_ParamLimits

0x764a,	// (0x00044445) aid_size_row_itut2_dropdow_list

0x76aa,	// (0x000444a5) grid_vitu2_function_top_pane_ParamLimits

0x76aa,	// (0x000444a5) grid_vitu2_function_top_pane

0x7704,	// (0x000444ff) popup_vitu2_dropdown_list_window_ParamLimits

0x7704,	// (0x000444ff) popup_vitu2_dropdown_list_window

0x7724,	// (0x0004451f) popup_vitu2_match_list_window

0x7e8b,	// (0x00044c86) cell_vitu2_function_top_pane_ParamLimits

0x7e8b,	// (0x00044c86) cell_vitu2_function_top_pane

0x7ea5,	// (0x00044ca0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7ea5,	// (0x00044ca0) cell_vitu2_function_top_pane_cp01

0x7ec1,	// (0x00044cbc) cell_vitu2_function_top_wide_pane_ParamLimits

0x7ec1,	// (0x00044cbc) cell_vitu2_function_top_wide_pane

0xb086,	// (0x00047e81) bg_button_pane_cp012

0x7edd,	// (0x00044cd8) cell_vitu2_function_top_pane_g1

0x7ef1,	// (0x00044cec) bg_button_pane_cp013_ParamLimits

0x7ef1,	// (0x00044cec) bg_button_pane_cp013

0x7f0d,	// (0x00044d08) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7f0d,	// (0x00044d08) cell_vitu2_function_top_wide_pane_g1

0xd8c9,	// (0x0004a6c4) bg_popup_sub_pane_cp20

0x7f25,	// (0x00044d20) list_vitu2_match_list_pane

0xd6d6,	// (0x0004a4d1) bg_popup_sub_pane_cp20_g1

0xd6de,	// (0x0004a4d9) bg_popup_sub_pane_cp20_g2

0xac1f,	// (0x00047a1a) bg_popup_sub_pane_cp20_g3

0xd6e6,	// (0x0004a4e1) bg_popup_sub_pane_cp20_g4

0xabff,	// (0x000479fa) bg_popup_sub_pane_cp20_g5

0xd931,	// (0x0004a72c) bg_popup_sub_pane_cp20_g6

0xd6f6,	// (0x0004a4f1) bg_popup_sub_pane_cp20_g7

0xd6fe,	// (0x0004a4f9) bg_popup_sub_pane_cp20_g8

0xd706,	// (0x0004a501) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004c7e8) bg_popup_sub_pane_cp20_g

0x7f3d,	// (0x00044d38) list_vitu2_match_list_item_pane_ParamLimits

0x7f3d,	// (0x00044d38) list_vitu2_match_list_item_pane

0x7f4f,	// (0x00044d4a) list_vitu2_match_list_item_pane_t1

0xa090,	// (0x00046e8b) bg_popup_sub_pane_cp21

0xb055,	// (0x00047e50) grid_vitu2_dropdown_list_pane

0x7f5d,	// (0x00044d58) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f5d,	// (0x00044d58) cell_vitu2_dropdown_list_char_pane

0x7f7e,	// (0x00044d79) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7f7e,	// (0x00044d79) cell_vitu2_dropdown_list_ctrl_pane

0xd939,	// (0x0004a734) cell_vitu2_dropdown_list_char_pane_g1

0xd942,	// (0x0004a73d) cell_vitu2_dropdown_list_char_pane_g2

0xd94b,	// (0x0004a746) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004c805) cell_vitu2_dropdown_list_char_pane_g

0x7faa,	// (0x00044da5) cell_vitu2_dropdown_list_char_pane_t1

0x7fb8,	// (0x00044db3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7fb8,	// (0x00044db3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7fc8,	// (0x00044dc3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7fc8,	// (0x00044dc3) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7fd9,	// (0x00044dd4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7fd9,	// (0x00044dd4) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7fe9,	// (0x00044de4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7fe9,	// (0x00044de4) cell_vitu2_dropdown_list_ctrl_pane_g4

0xceac,	// (0x00049ca7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xceac,	// (0x00049ca7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004c80c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004c80c) cell_vitu2_dropdown_list_ctrl_pane_g

0x8005,	// (0x00044e00) aid_size_cell_gallery2_ParamLimits

0x8005,	// (0x00044e00) aid_size_cell_gallery2

0x801f,	// (0x00044e1a) grid_gallery2_pane_ParamLimits

0x801f,	// (0x00044e1a) grid_gallery2_pane

0x6a72,	// (0x0004386d) scroll_pane_cp029_ParamLimits

0x6a72,	// (0x0004386d) scroll_pane_cp029

0x8036,	// (0x00044e31) cell_gallery2_pane_ParamLimits

0x8036,	// (0x00044e31) cell_gallery2_pane

0xd954,	// (0x0004a74f) cell_gallery2_pane_g2

0xe9cb,	// (0x0004b7c6) cell_gallery2_pane_g3

0xd95c,	// (0x0004a757) cell_gallery2_pane_g4

0xd964,	// (0x0004a75f) cell_gallery2_pane_g5

0xa9c6,	// (0x000477c1) grid_highlight_pane_cp10

0x7724,	// (0x0004451f) popup_vitu2_match_list_window_ParamLimits

0x7738,	// (0x00044533) popup_vitu2_query_window_ParamLimits

0x7738,	// (0x00044533) popup_vitu2_query_window

0xa090,	// (0x00046e8b) bg_vitu2_candi_button_pane

0xd939,	// (0x0004a734) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd942,	// (0x0004a73d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd94b,	// (0x0004a746) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x13b2,	// (0x0003e1ad) bg_button_pane_cp015

0x8088,	// (0x00044e83) bg_button_pane_cp016

0x809b,	// (0x00044e96) bg_button_pane_cp017

0xc838,	// (0x00049633) bg_popup_sub_pane_cp22

0xd96c,	// (0x0004a767) popup_vitu2_query_window_g1

0x13e5,	// (0x0003e1e0) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004c817) popup_vitu2_query_window_g

0x1402,	// (0x0003e1fd) popup_vitu2_query_window_t1_ParamLimits

0x1402,	// (0x0003e1fd) popup_vitu2_query_window_t1

0x1435,	// (0x0003e230) popup_vitu2_query_window_t2_ParamLimits

0x1435,	// (0x0003e230) popup_vitu2_query_window_t2

0x1447,	// (0x0003e242) popup_vitu2_query_window_t3_ParamLimits

0x1447,	// (0x0003e242) popup_vitu2_query_window_t3

0x80bf,	// (0x00044eba) popup_vitu2_query_window_t4_ParamLimits

0x80bf,	// (0x00044eba) popup_vitu2_query_window_t4

0x80e0,	// (0x00044edb) popup_vitu2_query_window_t5_ParamLimits

0x80e0,	// (0x00044edb) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004c81e) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004c81e) popup_vitu2_query_window_t

0xd7d8,	// (0x0004a5d3) main_cset_text_pane

0x7afa,	// (0x000448f5) aid_area_touch_slider_ParamLimits

0x7b16,	// (0x00044911) cset_slider_pane_ParamLimits

0x7b40,	// (0x0004493b) main_cset_slider_pane_g1_ParamLimits

0x7b55,	// (0x00044950) main_cset_slider_pane_g2_ParamLimits

0xd7f9,	// (0x0004a5f4) main_cset_slider_pane_g3_ParamLimits

0xd7f9,	// (0x0004a5f4) main_cset_slider_pane_g3

0x7b6a,	// (0x00044965) main_cset_slider_pane_g4_ParamLimits

0x7b6a,	// (0x00044965) main_cset_slider_pane_g4

0x7b79,	// (0x00044974) main_cset_slider_pane_g5_ParamLimits

0x7b79,	// (0x00044974) main_cset_slider_pane_g5

0x7b87,	// (0x00044982) main_cset_slider_pane_g6_ParamLimits

0x7b87,	// (0x00044982) main_cset_slider_pane_g6

0xf976,	// (0x0004c771) main_cset_slider_pane_g_ParamLimits

0xd829,	// (0x0004a624) main_cset_slider_pane_t1_ParamLimits

0x7c17,	// (0x00044a12) main_cset_slider_pane_t2_ParamLimits

0x7c31,	// (0x00044a2c) main_cset_slider_pane_t3_ParamLimits

0x7c4b,	// (0x00044a46) main_cset_slider_pane_t4_ParamLimits

0x7c65,	// (0x00044a60) main_cset_slider_pane_t5_ParamLimits

0x7c83,	// (0x00044a7e) main_cset_slider_pane_t6_ParamLimits

0x7c9a,	// (0x00044a95) main_cset_slider_pane_t7_ParamLimits

0x7cc8,	// (0x00044ac3) main_cset_slider_pane_t8_ParamLimits

0x7cc8,	// (0x00044ac3) main_cset_slider_pane_t8

0x7cf0,	// (0x00044aeb) main_cset_slider_pane_t9_ParamLimits

0x7cf0,	// (0x00044aeb) main_cset_slider_pane_t9

0x7d18,	// (0x00044b13) main_cset_slider_pane_t10_ParamLimits

0x7d18,	// (0x00044b13) main_cset_slider_pane_t10

0x7d40,	// (0x00044b3b) main_cset_slider_pane_t11_ParamLimits

0x7d40,	// (0x00044b3b) main_cset_slider_pane_t11

0x7d6a,	// (0x00044b65) main_cset_slider_pane_t12_ParamLimits

0x7d6a,	// (0x00044b65) main_cset_slider_pane_t12

0x7d87,	// (0x00044b82) main_cset_slider_pane_t13_ParamLimits

0x7d87,	// (0x00044b82) main_cset_slider_pane_t13

0xf99b,	// (0x0004c796) main_cset_slider_pane_t_ParamLimits

0xa090,	// (0x00046e8b) bg_popup_sub_pane_cp011

0xd978,	// (0x0004a773) main_cset_text_pane_g1

0xd980,	// (0x0004a77b) main_cset_text_pane_t1

0xd98e,	// (0x0004a789) main_cset_text_pane_t2

0xd99c,	// (0x0004a797) main_cset_text_pane_t3

0xd9aa,	// (0x0004a7a5) main_cset_text_pane_t4

0xd9b8,	// (0x0004a7b3) main_cset_text_pane_t5

0xd9c6,	// (0x0004a7c1) main_cset_text_pane_t6

0xd9d4,	// (0x0004a7cf) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004c82d) main_cset_text_pane_t

0xa090,	// (0x00046e8b) main_cam4_burst_pane

0xa090,	// (0x00046e8b) main_cam5_pane

0x7a49,	// (0x00044844) bg_button_pane_cp019

0x7a52,	// (0x0004484d) bg_button_pane_cp020

0xd805,	// (0x0004a600) main_cset_slider_pane_g7_ParamLimits

0xd805,	// (0x0004a600) main_cset_slider_pane_g7

0xd811,	// (0x0004a60c) main_cset_slider_pane_g8_ParamLimits

0xd811,	// (0x0004a60c) main_cset_slider_pane_g8

0x7b9b,	// (0x00044996) main_cset_slider_pane_g9_ParamLimits

0x7b9b,	// (0x00044996) main_cset_slider_pane_g9

0x7ba7,	// (0x000449a2) main_cset_slider_pane_g10_ParamLimits

0x7ba7,	// (0x000449a2) main_cset_slider_pane_g10

0x7bb3,	// (0x000449ae) main_cset_slider_pane_g11_ParamLimits

0x7bb3,	// (0x000449ae) main_cset_slider_pane_g11

0x7bbf,	// (0x000449ba) main_cset_slider_pane_g12_ParamLimits

0x7bbf,	// (0x000449ba) main_cset_slider_pane_g12

0x7bcb,	// (0x000449c6) main_cset_slider_pane_g13_ParamLimits

0x7bcb,	// (0x000449c6) main_cset_slider_pane_g13

0x7bd7,	// (0x000449d2) main_cset_slider_pane_g14_ParamLimits

0x7bd7,	// (0x000449d2) main_cset_slider_pane_g14

0x7be3,	// (0x000449de) main_cset_slider_pane_g15_ParamLimits

0x7be3,	// (0x000449de) main_cset_slider_pane_g15

0xd857,	// (0x0004a652) main_cset_slider_pane_t14_ParamLimits

0xd857,	// (0x0004a652) main_cset_slider_pane_t14

0xd890,	// (0x0004a68b) main_cset_slider_pane_t15_ParamLimits

0xd890,	// (0x0004a68b) main_cset_slider_pane_t15

0x8101,	// (0x00044efc) aid_cam4_burst_size_cell_ParamLimits

0x8101,	// (0x00044efc) aid_cam4_burst_size_cell

0x811d,	// (0x00044f18) grid_cam4_burst_pane_ParamLimits

0x811d,	// (0x00044f18) grid_cam4_burst_pane

0x814d,	// (0x00044f48) linegrid_cam4_burst_pane_ParamLimits

0x814d,	// (0x00044f48) linegrid_cam4_burst_pane

0x816d,	// (0x00044f68) scroll_pane_cp30_ParamLimits

0x816d,	// (0x00044f68) scroll_pane_cp30

0x8179,	// (0x00044f74) cell_cam4_burst_pane_ParamLimits

0x8179,	// (0x00044f74) cell_cam4_burst_pane

0xd9e2,	// (0x0004a7dd) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9e2,	// (0x0004a7dd) linegrid_cam4_burst_pane_g1

0x81b5,	// (0x00044fb0) linegrid_cam4_burst_pane_g2_ParamLimits

0x81b5,	// (0x00044fb0) linegrid_cam4_burst_pane_g2

0xd9ef,	// (0x0004a7ea) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9ef,	// (0x0004a7ea) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004c83c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004c83c) linegrid_cam4_burst_pane_g

0x81c6,	// (0x00044fc1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x81c6,	// (0x00044fc1) linegrid_cam4_burst_pane_g3_copy1

0xd9fc,	// (0x0004a7f7) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9fc,	// (0x0004a7f7) linegrid_cam4_burst_pane_g4

0x81e0,	// (0x00044fdb) linegrid_cam4_burst_pane_g5_ParamLimits

0x81e0,	// (0x00044fdb) linegrid_cam4_burst_pane_g5

0x81f1,	// (0x00044fec) linegrid_cam4_burst_pane_g6_ParamLimits

0x81f1,	// (0x00044fec) linegrid_cam4_burst_pane_g6

0xda09,	// (0x0004a804) linegrid_cam4_burst_pane_g7_ParamLimits

0xda09,	// (0x0004a804) linegrid_cam4_burst_pane_g7

0x8202,	// (0x00044ffd) cell_cam4_burst_pane_g1

0xda22,	// (0x0004a81d) main_cam5_pane_t1_ParamLimits

0xda22,	// (0x0004a81d) main_cam5_pane_t1

0xda34,	// (0x0004a82f) main_cam5_pane_t2_ParamLimits

0xda34,	// (0x0004a82f) main_cam5_pane_t2

0xda46,	// (0x0004a841) main_cam5_pane_t3_ParamLimits

0xda46,	// (0x0004a841) main_cam5_pane_t3

0xda58,	// (0x0004a853) main_cam5_pane_t4_ParamLimits

0xda58,	// (0x0004a853) main_cam5_pane_t4

0xda70,	// (0x0004a86b) main_cam5_pane_t5_ParamLimits

0xda70,	// (0x0004a86b) main_cam5_pane_t5

0xda84,	// (0x0004a87f) main_cam5_pane_t6_ParamLimits

0xda84,	// (0x0004a87f) main_cam5_pane_t6

0xda98,	// (0x0004a893) main_cam5_pane_t7_ParamLimits

0xda98,	// (0x0004a893) main_cam5_pane_t7

0xdaaa,	// (0x0004a8a5) main_cam5_pane_t8_ParamLimits

0xdaaa,	// (0x0004a8a5) main_cam5_pane_t8

0xdac6,	// (0x0004a8c1) main_cam5_pane_t9_ParamLimits

0xdac6,	// (0x0004a8c1) main_cam5_pane_t9

0xdad8,	// (0x0004a8d3) main_cam5_pane_t10_ParamLimits

0xdad8,	// (0x0004a8d3) main_cam5_pane_t10

0xdaea,	// (0x0004a8e5) main_cam5_pane_t11_ParamLimits

0xdaea,	// (0x0004a8e5) main_cam5_pane_t11

0xdafc,	// (0x0004a8f7) main_cam5_pane_t12_ParamLimits

0xdafc,	// (0x0004a8f7) main_cam5_pane_t12

0xdb11,	// (0x0004a90c) main_cam5_pane_t13_ParamLimits

0xdb11,	// (0x0004a90c) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004c848) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004c848) main_cam5_pane_t

0x24b0,	// (0x0003f2ab) popup_scut_keymap_window_ParamLimits

0x24b0,	// (0x0003f2ab) popup_scut_keymap_window

0x8215,	// (0x00045010) aid_size_cell_brow_shortcut

0xa9c6,	// (0x000477c1) bg_popup_window_pane_cp010

0x8221,	// (0x0004501c) grid_scut_pane

0x822d,	// (0x00045028) cell_scut_pane_ParamLimits

0x822d,	// (0x00045028) cell_scut_pane

0x8244,	// (0x0004503f) cell_scut_pane_g1

0xdb2e,	// (0x0004a929) cell_scut_pane_t1

0xdb3d,	// (0x0004a938) cell_scut_pane_t2

0x824d,	// (0x00045048) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004c863) cell_scut_pane_t

0x6253,	// (0x0004304e) main_mup3_pane_g8_ParamLimits

0x6253,	// (0x0004304e) main_mup3_pane_g8

0x7658,	// (0x00044453) area_vitu2_query_pane_ParamLimits

0x7658,	// (0x00044453) area_vitu2_query_pane

0x13c4,	// (0x0003e1bf) input_focus_pane_cp08

0xdb4c,	// (0x0004a947) area_vitu2_query_pane_g1

0x14c5,	// (0x0003e2c0) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004c86a) area_vitu2_query_pane_g

0x825b,	// (0x00045056) area_vitu2_query_pane_t1_ParamLimits

0x825b,	// (0x00045056) area_vitu2_query_pane_t1

0x826f,	// (0x0004506a) area_vitu2_query_pane_t2_ParamLimits

0x826f,	// (0x0004506a) area_vitu2_query_pane_t2

0x14d6,	// (0x0003e2d1) area_vitu2_query_pane_t3_ParamLimits

0x14d6,	// (0x0003e2d1) area_vitu2_query_pane_t3

0x14fe,	// (0x0003e2f9) area_vitu2_query_pane_t4_ParamLimits

0x14fe,	// (0x0003e2f9) area_vitu2_query_pane_t4

0x1526,	// (0x0003e321) area_vitu2_query_pane_t5_ParamLimits

0x1526,	// (0x0003e321) area_vitu2_query_pane_t5

0x154e,	// (0x0003e349) area_vitu2_query_pane_t6_ParamLimits

0x154e,	// (0x0003e349) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004c86f) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004c86f) area_vitu2_query_pane_t

0x8283,	// (0x0004507e) bg_button_pane_cp018

0x8291,	// (0x0004508c) bg_button_pane_cp021

0x159a,	// (0x0003e395) bg_button_pane_cp022

0x15ab,	// (0x0003e3a6) input_focus_pane_cp09

0xb291,	// (0x0004808c) aid_size_touch_mv_arrow_left

0xb2ba,	// (0x000480b5) aid_size_touch_mv_arrow_right

0x7bfb,	// (0x000449f6) main_cset_slider_pane_g16_ParamLimits

0x7bfb,	// (0x000449f6) main_cset_slider_pane_g16

0x7c09,	// (0x00044a04) main_cset_slider_pane_g17_ParamLimits

0x7c09,	// (0x00044a04) main_cset_slider_pane_g17

0x8202,	// (0x00044ffd) cell_cam4_burst_pane_g1_ParamLimits

0xa090,	// (0x00046e8b) compa_mode_pane

0x7e0c,	// (0x00044c07) popup_vtel_slider_window_g3_ParamLimits

0x7e0c,	// (0x00044c07) popup_vtel_slider_window_g3

0x7e20,	// (0x00044c1b) popup_vtel_slider_window_g4_ParamLimits

0x7e20,	// (0x00044c1b) popup_vtel_slider_window_g4

0x7e34,	// (0x00044c2f) popup_vtel_slider_window_t1_ParamLimits

0x7e34,	// (0x00044c2f) popup_vtel_slider_window_t1

0xa090,	// (0x00046e8b) main_cl_pane

0x55cd,	// (0x000423c8) popup_imed_adjust2_window_ParamLimits

0xc838,	// (0x00049633) bg_tb_trans_pane_cp05_ParamLimits

0xd18f,	// (0x00049f8a) popup_imed_adjust2_window_g1_ParamLimits

0xd19e,	// (0x00049f99) popup_imed_adjust2_window_g2_ParamLimits

0xd19e,	// (0x00049f99) popup_imed_adjust2_window_g2

0xd1aa,	// (0x00049fa5) popup_imed_adjust2_window_g3_ParamLimits

0xd1aa,	// (0x00049fa5) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004c5da) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004c5da) popup_imed_adjust2_window_g

0xd1b6,	// (0x00049fb1) popup_imed_adjust2_window_t1_ParamLimits

0xd1ce,	// (0x00049fc9) slider_imed_adjust_pane_ParamLimits

0xd1e2,	// (0x00049fdd) slider_imed_adjust_pane_g1_ParamLimits

0xd1f2,	// (0x00049fed) slider_imed_adjust_pane_g2_ParamLimits

0xd202,	// (0x00049ffd) slider_imed_adjust_pane_g3_ParamLimits

0xd213,	// (0x0004a00e) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004c5e1) slider_imed_adjust_pane_g_ParamLimits

0x739f,	// (0x0004419a) aid_touch_area_cam4_ParamLimits

0x739f,	// (0x0004419a) aid_touch_area_cam4

0x73af,	// (0x000441aa) battery_pane_cp01

0x7436,	// (0x00044231) main_camera4_pane_g6_ParamLimits

0x7436,	// (0x00044231) main_camera4_pane_g6

0x7454,	// (0x0004424f) main_camera4_pane_t2_ParamLimits

0x7454,	// (0x0004424f) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004c6e4) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004c6e4) main_camera4_pane_t

0x74db,	// (0x000442d6) aid_touch_area_vid4_ParamLimits

0x74db,	// (0x000442d6) aid_touch_area_vid4

0x751b,	// (0x00044316) main_video4_pane_g5_ParamLimits

0x751b,	// (0x00044316) main_video4_pane_g5

0x753f,	// (0x0004433a) vid4_progress_pane_ParamLimits

0x753f,	// (0x0004433a) vid4_progress_pane

0xd81d,	// (0x0004a618) main_cset_slider_pane_g18_ParamLimits

0xd81d,	// (0x0004a618) main_cset_slider_pane_g18

0xda16,	// (0x0004a811) cell_cam4_burst_pane_g2_ParamLimits

0xda16,	// (0x0004a811) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004c843) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004c843) cell_cam4_burst_pane_g

0x829d,	// (0x00045098) bg_cl_pane_ParamLimits

0x829d,	// (0x00045098) bg_cl_pane

0x82a9,	// (0x000450a4) cl_header_pane_ParamLimits

0x82a9,	// (0x000450a4) cl_header_pane

0x82b5,	// (0x000450b0) cl_listscroll_pane_ParamLimits

0x82b5,	// (0x000450b0) cl_listscroll_pane

0xdb58,	// (0x0004a953) bg_cl_pane_g1

0xdb60,	// (0x0004a95b) bg_cl_pane_g2

0xdb68,	// (0x0004a963) bg_cl_pane_g3

0xdb70,	// (0x0004a96b) bg_cl_pane_g4

0xdb78,	// (0x0004a973) bg_cl_pane_g5

0xdb80,	// (0x0004a97b) bg_cl_pane_g6

0xdb88,	// (0x0004a983) bg_cl_pane_g7

0xdb90,	// (0x0004a98b) bg_cl_pane_g8

0xdb98,	// (0x0004a993) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004c87e) bg_cl_pane_g

0x82c1,	// (0x000450bc) aid_height_cl_leading_ParamLimits

0x82c1,	// (0x000450bc) aid_height_cl_leading

0x82cd,	// (0x000450c8) aid_height_cl_text_ParamLimits

0x82cd,	// (0x000450c8) aid_height_cl_text

0xd8c9,	// (0x0004a6c4) bg_cl_header_pane_ParamLimits

0xd8c9,	// (0x0004a6c4) bg_cl_header_pane

0x82e5,	// (0x000450e0) cl_header_pane_g1_ParamLimits

0x82e5,	// (0x000450e0) cl_header_pane_g1

0x82f2,	// (0x000450ed) cl_header_pane_t1_ParamLimits

0x82f2,	// (0x000450ed) cl_header_pane_t1

0xdba0,	// (0x0004a99b) cl_list_pane

0xd7f0,	// (0x0004a5eb) hc_scroll_pane_cp01

0xabff,	// (0x000479fa) bg_cl_header_pane_g1

0xd6d6,	// (0x0004a4d1) bg_cl_header_pane_g2

0xac1f,	// (0x00047a1a) bg_cl_header_pane_g3

0xd6e6,	// (0x0004a4e1) bg_cl_header_pane_g4

0xd6de,	// (0x0004a4d9) bg_cl_header_pane_g5

0xd931,	// (0x0004a72c) bg_cl_header_pane_g6

0xd6fe,	// (0x0004a4f9) bg_cl_header_pane_g7

0xd706,	// (0x0004a501) bg_cl_header_pane_g8

0xd6f6,	// (0x0004a4f1) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004c891) bg_cl_header_pane_g

0x8304,	// (0x000450ff) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8304,	// (0x000450ff) hc_cl_list_double_graphic_heading_pane

0x8315,	// (0x00045110) hc_cl_list_single_graphic_pane_ParamLimits

0x8315,	// (0x00045110) hc_cl_list_single_graphic_pane

0x832e,	// (0x00045129) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x832e,	// (0x00045129) hc_cl_list_single_graphic_pane_g1

0x833a,	// (0x00045135) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x833a,	// (0x00045135) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004c8a4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004c8a4) hc_cl_list_single_graphic_pane_g

0x834e,	// (0x00045149) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x834e,	// (0x00045149) hc_cl_list_single_graphic_pane_t1

0x832e,	// (0x00045129) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x832e,	// (0x00045129) hc_cl_list_double_graphic_heading_pane_g1

0x8363,	// (0x0004515e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8363,	// (0x0004515e) hc_cl_list_double_graphic_heading_pane_g2

0x8377,	// (0x00045172) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8377,	// (0x00045172) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004c8a9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004c8a9) hc_cl_list_double_graphic_heading_pane_g

0x838b,	// (0x00045186) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x838b,	// (0x00045186) hc_cl_list_double_graphic_heading_pane_t1

0x83a0,	// (0x0004519b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x83a0,	// (0x0004519b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004c8b0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004c8b0) hc_cl_list_double_graphic_heading_pane_t

0x83bd,	// (0x000451b8) vid4_progress_pane_g1

0x83cd,	// (0x000451c8) vid4_progress_pane_g2

0x83dd,	// (0x000451d8) vid4_progress_pane_g3

0x83ef,	// (0x000451ea) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004c8b5) vid4_progress_pane_g

0x8407,	// (0x00045202) vid4_progress_pane_t1

0x841d,	// (0x00045218) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004c8c0) vid4_progress_pane_t

0x8447,	// (0x00045242) wait_bar_pane_cp07

0xca33,	// (0x0004982e) blid_firmament_pane_ParamLimits

0xca76,	// (0x00049871) popup_blid_sat_info2_window_g1

0xca9a,	// (0x00049895) popup_blid_sat_info2_window_t3

0xcaa8,	// (0x000498a3) popup_blid_sat_info2_window_t4

0xcab6,	// (0x000498b1) popup_blid_sat_info2_window_t5

0xcac4,	// (0x000498bf) popup_blid_sat_info2_window_t6

0xcad4,	// (0x000498cf) popup_blid_sat_info2_window_t7

0xcae2,	// (0x000498dd) popup_blid_sat_info2_window_t8

0xcaf0,	// (0x000498eb) popup_blid_sat_info2_window_t9

0xcafe,	// (0x000498f9) popup_blid_sat_info2_window_t10

0xcbc9,	// (0x000499c4) aid_firma_cardinal_ParamLimits

0xcbdd,	// (0x000499d8) blid_firmament_pane_t1_ParamLimits

0xcbf4,	// (0x000499ef) blid_firmament_pane_t2_ParamLimits

0xcc0b,	// (0x00049a06) blid_firmament_pane_t3_ParamLimits

0xcc22,	// (0x00049a1d) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0004c4ce) blid_firmament_pane_t_ParamLimits

0xcc39,	// (0x00049a34) blid_sat_info_pane_ParamLimits

0xb086,	// (0x00047e81) main_cam_set_pane_ParamLimits

0x6a0b,	// (0x00043806) aid_size_cell_colour_35_ParamLimits

0x6a25,	// (0x00043820) aid_size_cell_colour_112_ParamLimits

0x6a3c,	// (0x00043837) aid_size_cell_effect_ParamLimits

0xb086,	// (0x00047e81) bg_tb_trans_pane_cp02_ParamLimits

0xb094,	// (0x00047e8f) heading_imed_pane_ParamLimits

0x6a56,	// (0x00043851) listscroll_imed_pane_ParamLimits

0xbe5e,	// (0x00048c59) popup_call2_audio_first_window_g5_ParamLimits

0xbe5e,	// (0x00048c59) popup_call2_audio_first_window_g5

0x715c,	// (0x00043f57) aid_size_touch_image3_arrow_left_ParamLimits

0x715c,	// (0x00043f57) aid_size_touch_image3_arrow_left

0x7172,	// (0x00043f6d) aid_size_touch_image3_arrow_right_ParamLimits

0x7172,	// (0x00043f6d) aid_size_touch_image3_arrow_right

0x8432,	// (0x0004522d) vid4_progress_pane_t3

0x6cf4,	// (0x00043aef) main_hwr_training_symbol_option_pane_ParamLimits

0x6cf4,	// (0x00043aef) main_hwr_training_symbol_option_pane

0xd488,	// (0x0004a283) popup_hwr_training_preview_window_ParamLimits

0xd488,	// (0x0004a283) popup_hwr_training_preview_window

0x6d55,	// (0x00043b50) hwr_training_navi_pane_g5_ParamLimits

0x6d55,	// (0x00043b50) hwr_training_navi_pane_g5

0xd6c4,	// (0x0004a4bf) popup_char_count_window

0xd8c9,	// (0x0004a6c4) bg_popup_sub_pane_cp20_ParamLimits

0x7f25,	// (0x00044d20) list_vitu2_match_list_pane_ParamLimits

0x7f31,	// (0x00044d2c) vitu2_page_scroll_pane_ParamLimits

0x7f31,	// (0x00044d2c) vitu2_page_scroll_pane

0xdba9,	// (0x0004a9a4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdba9,	// (0x0004a9a4) list_single_hwr_training_symbol_option_pane

0xdbbc,	// (0x0004a9b7) list_single_hwr_training_symbol_option_pane_g1

0xdbc4,	// (0x0004a9bf) list_single_hwr_training_symbol_option_pane_t1

0xdbd2,	// (0x0004a9cd) bg_button_pane_cp023

0xdbdb,	// (0x0004a9d6) bg_button_pane_cp024

0x846c,	// (0x00045267) vitu2_page_scroll_pane_g1

0x8474,	// (0x0004526f) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004c8c7) vitu2_page_scroll_pane_g

0x847c,	// (0x00045277) vitu2_page_scroll_pane_t1

0xc993,	// (0x0004978e) popup_char_count_window_g1

0xdc2c,	// (0x0004aa27) popup_char_count_window_g2

0xdc35,	// (0x0004aa30) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004c8cc) popup_char_count_window_g

0xdc3e,	// (0x0004aa39) popup_char_count_window_t1

0xa090,	// (0x00046e8b) main_vded2_pane

0xd17b,	// (0x00049f76) aid_size_cell_imed_line

0xd185,	// (0x00049f80) grid_imed_line_width_pane

0x75ad,	// (0x000443a8) vid4_indicators_pane_g4

0xdc4c,	// (0x0004aa47) cell_imed_line_width_pane_ParamLimits

0xdc4c,	// (0x0004aa47) cell_imed_line_width_pane

0xdc60,	// (0x0004aa5b) cell_imed_line_width_pane_g1

0xdbf9,	// (0x0004a9f4) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004c8d3) cell_imed_line_width_pane_g

0x848b,	// (0x00045286) main_vded2_pane_g1_ParamLimits

0x848b,	// (0x00045286) main_vded2_pane_g1

0x8498,	// (0x00045293) main_vded2_pane_g2_ParamLimits

0x8498,	// (0x00045293) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004c8d8) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004c8d8) main_vded2_pane_g

0x84a6,	// (0x000452a1) vded2_slider_pane_ParamLimits

0x84a6,	// (0x000452a1) vded2_slider_pane

0x84b3,	// (0x000452ae) aid_size_touch_vded2_end

0x84bd,	// (0x000452b8) aid_size_touch_vded2_playhead

0xdc69,	// (0x0004aa64) aid_size_touch_vded2_start

0xdc71,	// (0x0004aa6c) vded2_slider_bg_pane

0xdc7a,	// (0x0004aa75) vded2_slider_pane_g1

0xdc83,	// (0x0004aa7e) vded2_slider_pane_g2

0x84c5,	// (0x000452c0) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004c8dd) vded2_slider_pane_g

0xdc8b,	// (0x0004aa86) vded2_slider_bg_pane_g1

0xdc94,	// (0x0004aa8f) vded2_slider_bg_pane_g2

0xdc9d,	// (0x0004aa98) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0004c8e4) vded2_slider_bg_pane_g

0x4e25,	// (0x00041c20) aid_postcard_touch_down_pane_ParamLimits

0x4e25,	// (0x00041c20) aid_postcard_touch_down_pane

0x4e35,	// (0x00041c30) aid_postcard_touch_up_pane_ParamLimits

0x4e35,	// (0x00041c30) aid_postcard_touch_up_pane

0xa090,	// (0x00046e8b) main_blid2_pane

0x5558,	// (0x00042353) popup_blid2_search_window

0xa090,	// (0x00046e8b) blid2_gps_pane

0xa090,	// (0x00046e8b) blid2_navig_pane

0xa090,	// (0x00046e8b) blid2_search_pane

0xa090,	// (0x00046e8b) blid2_tripm_pane

0x84ce,	// (0x000452c9) blid2_search_pane_g1_ParamLimits

0x84ce,	// (0x000452c9) blid2_search_pane_g1

0x84de,	// (0x000452d9) blid2_search_pane_t1_ParamLimits

0x84de,	// (0x000452d9) blid2_search_pane_t1

0x84f0,	// (0x000452eb) aid_size_cell_blid2_gps_ParamLimits

0x84f0,	// (0x000452eb) aid_size_cell_blid2_gps

0x8500,	// (0x000452fb) blid2_gps_pane_g1_ParamLimits

0x8500,	// (0x000452fb) blid2_gps_pane_g1

0x850c,	// (0x00045307) grid_blid2_satellite_pane_ParamLimits

0x850c,	// (0x00045307) grid_blid2_satellite_pane

0x851c,	// (0x00045317) blid2_navig_pane_g1_ParamLimits

0x851c,	// (0x00045317) blid2_navig_pane_g1

0x8528,	// (0x00045323) blid2_navig_pane_t1_ParamLimits

0x8528,	// (0x00045323) blid2_navig_pane_t1

0x853a,	// (0x00045335) blid2_navig_pane_t2_ParamLimits

0x853a,	// (0x00045335) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0004c8eb) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0004c8eb) blid2_navig_pane_t

0x854c,	// (0x00045347) blid2_navig_ring_pane_ParamLimits

0x854c,	// (0x00045347) blid2_navig_ring_pane

0x855c,	// (0x00045357) blid2_speed_pane_ParamLimits

0x855c,	// (0x00045357) blid2_speed_pane

0x8568,	// (0x00045363) blid2_tripm_pane_g1_ParamLimits

0x8568,	// (0x00045363) blid2_tripm_pane_g1

0x8578,	// (0x00045373) blid2_tripm_pane_g2_ParamLimits

0x8578,	// (0x00045373) blid2_tripm_pane_g2

0x8584,	// (0x0004537f) blid2_tripm_pane_g3_ParamLimits

0x8584,	// (0x0004537f) blid2_tripm_pane_g3

0x8590,	// (0x0004538b) blid2_tripm_pane_g4_ParamLimits

0x8590,	// (0x0004538b) blid2_tripm_pane_g4

0x859c,	// (0x00045397) blid2_tripm_pane_g5_ParamLimits

0x859c,	// (0x00045397) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0004c8f0) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0004c8f0) blid2_tripm_pane_g

0x85b8,	// (0x000453b3) blid2_tripm_pane_t1_ParamLimits

0x85b8,	// (0x000453b3) blid2_tripm_pane_t1

0x85cc,	// (0x000453c7) blid2_tripm_pane_t2_ParamLimits

0x85cc,	// (0x000453c7) blid2_tripm_pane_t2

0x85de,	// (0x000453d9) blid2_tripm_pane_t3_ParamLimits

0x85de,	// (0x000453d9) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0004c8fd) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0004c8fd) blid2_tripm_pane_t

0x8610,	// (0x0004540b) cell_blid2_satellite_pane_ParamLimits

0x8610,	// (0x0004540b) cell_blid2_satellite_pane

0x862a,	// (0x00045425) cell_blid2_satellite_pane_g1

0xdca6,	// (0x0004aaa1) cell_blid2_satellite_pane_t1

0xcc49,	// (0x00049a44) blid2_speed_pane_g1

0xdcb4,	// (0x0004aaaf) blid2_speed_pane_t1

0xdcc2,	// (0x0004aabd) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0004c906) blid2_speed_pane_t

0xcc49,	// (0x00049a44) blid2_navig_ring_pane_g1

0x8633,	// (0x0004542e) blid2_navig_ring_pane_g2

0x863b,	// (0x00045436) blid2_navig_ring_pane_g3

0x8643,	// (0x0004543e) blid2_navig_ring_pane_g4

0x864b,	// (0x00045446) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0004c90b) blid2_navig_ring_pane_g

0xa090,	// (0x00046e8b) bg_popup_window_pane_cp011

0xdcd0,	// (0x0004aacb) popup_blid2_search_window_g1

0xdcd8,	// (0x0004aad3) popup_blid2_search_window_t1

0xdce6,	// (0x0004aae1) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0004c916) popup_blid2_search_window_t

0xab0e,	// (0x00047909) main_browser_pane_g1

0xa801,	// (0x000475fc) main_browser_pane_ParamLimits

0xb086,	// (0x00047e81) bg_button_pane_cp011_ParamLimits

0x781c,	// (0x00044617) cell_vitu2_function_pane_g1_ParamLimits

0xc838,	// (0x00049633) bg_popup_sub_pane_cp22_ParamLimits

0x13c4,	// (0x0003e1bf) input_focus_pane_cp08_ParamLimits

0x80ae,	// (0x00044ea9) popup_vitu2_query_button_pane_ParamLimits

0x80ae,	// (0x00044ea9) popup_vitu2_query_button_pane

0x13db,	// (0x0003e1d6) popup_vitu2_query_input_button_pane

0xd96c,	// (0x0004a767) popup_vitu2_query_window_g1_ParamLimits

0x13e5,	// (0x0003e1e0) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004c817) popup_vitu2_query_window_g_ParamLimits

0xa090,	// (0x00046e8b) bg_button_pane_cp026

0x8653,	// (0x0004544e) popup_vitu2_query_input_button_pane_g1

0xa090,	// (0x00046e8b) bg_button_pane_cp025

0xdcf4,	// (0x0004aaef) popup_vitu2_query_button_pane_t1

0x5fb6,	// (0x00042db1) main_mp3_pane_t6

0x5fc6,	// (0x00042dc1) popup_slider_window_cp01

0x748a,	// (0x00044285) cam4_battery_pane

0x756a,	// (0x00044365) cam4_battery_pane_cp02

0x83b5,	// (0x000451b0) cam4_battery_pane_cp01

0x83b5,	// (0x000451b0) cam4_battery_pane_cp03

0xcc49,	// (0x00049a44) cam4_battery_pane_g1

0xdc01,	// (0x0004a9fc) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0004c91b) cam4_battery_pane_g

0xcb0c,	// (0x00049907) popup_blid_sat_info2_window_t11

0xb291,	// (0x0004808c) aid_size_touch_mv_arrow_left_ParamLimits

0xb2ba,	// (0x000480b5) aid_size_touch_mv_arrow_right_ParamLimits

0xb318,	// (0x00048113) navi_pane_g1_ParamLimits

0xb324,	// (0x0004811f) navi_pane_g2_ParamLimits

0xb352,	// (0x0004814d) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004c1e0) navi_pane_g_ParamLimits

0x489b,	// (0x00041696) navi_pane_mv_t1_ParamLimits

0x6a62,	// (0x0004385d) grid_imed_effect_pane_ParamLimits

0x3349,	// (0x00040144) aid_placing_vt_slider_lsc

0xaa5d,	// (0x00047858) aid_placing_vt_slider_prt

0xb086,	// (0x00047e81) bg_tb_trans_pane_cp01_ParamLimits

0xcdcc,	// (0x00049bc7) popup_image_details_window_g1_ParamLimits

0xcddf,	// (0x00049bda) popup_image_details_window_g2_ParamLimits

0xcdf4,	// (0x00049bef) popup_image_details_window_g3_ParamLimits

0xcdf4,	// (0x00049bef) popup_image_details_window_g3

0xf718,	// (0x0004c513) popup_image_details_window_g_ParamLimits

0xce08,	// (0x00049c03) popup_image_details_window_t1_ParamLimits

0xce1a,	// (0x00049c15) popup_image_details_window_t2_ParamLimits

0xce33,	// (0x00049c2e) popup_image_details_window_t3_ParamLimits

0xce47,	// (0x00049c42) popup_image_details_window_t4_ParamLimits

0xce62,	// (0x00049c5d) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004c51a) popup_image_details_window_t_ParamLimits

0x82d9,	// (0x000450d4) cl_header_name_pane_ParamLimits

0x82d9,	// (0x000450d4) cl_header_name_pane

0x865b,	// (0x00045456) cl_header_name_pane_t1_ParamLimits

0x865b,	// (0x00045456) cl_header_name_pane_t1

0x8672,	// (0x0004546d) cl_header_name_pane_t2_ParamLimits

0x8672,	// (0x0004546d) cl_header_name_pane_t2

0x869c,	// (0x00045497) cl_header_name_pane_t3_ParamLimits

0x869c,	// (0x00045497) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0004c920) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0004c920) cl_header_name_pane_t

0xb3e1,	// (0x000481dc) navi_pane_mv_g2_ParamLimits

0xd69e,	// (0x0004a499) field_vitu2_entry_pane_g1_ParamLimits

0xd6aa,	// (0x0004a4a5) field_vitu2_entry_pane_g2_ParamLimits

0xd6b6,	// (0x0004a4b1) field_vitu2_entry_pane_g3_ParamLimits

0xd6b6,	// (0x0004a4b1) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004c716) field_vitu2_entry_pane_g_ParamLimits

0x77b0,	// (0x000445ab) cell_vitu2_itu_pane_g1_ParamLimits

0x77c2,	// (0x000445bd) cell_vitu2_itu_pane_g2_ParamLimits

0x77c2,	// (0x000445bd) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004c722) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004c722) cell_vitu2_itu_pane_g

0xb086,	// (0x00047e81) bg_vkb2_func_pane_cp05_ParamLimits

0xb086,	// (0x00047e81) bg_vkb2_func_pane_cp05

0xb086,	// (0x00047e81) bg_vkb2_func_pane_cp03

0xb086,	// (0x00047e81) bg_vkb2_func_pane_cp04

0xb086,	// (0x00047e81) bg_vkb2_func_pane_cp10_ParamLimits

0xb086,	// (0x00047e81) bg_vkb2_func_pane_cp10

0x159a,	// (0x0003e395) bg_vkb2_func_pane_cp08

0x8283,	// (0x0004507e) bg_vkb2_func_pane_cp06

0x8291,	// (0x0004508c) bg_vkb2_func_pane_cp07

0xdbe4,	// (0x0004a9df) bg_vkb2_func_pane_cp11_ParamLimits

0xdbe4,	// (0x0004a9df) bg_vkb2_func_pane_cp11

0xdc17,	// (0x0004aa12) bg_vkb2_func_pane_cp12_ParamLimits

0xdc17,	// (0x0004aa12) bg_vkb2_func_pane_cp12

0xa090,	// (0x00046e8b) bg_vkb2_func_pane_cp09

0xd6d6,	// (0x0004a4d1) bg_vkb2_func_pane_g1

0xac1f,	// (0x00047a1a) bg_vkb2_func_pane_g2

0xd6de,	// (0x0004a4d9) bg_vkb2_func_pane_g3

0xd6e6,	// (0x0004a4e1) bg_vkb2_func_pane_g4

0xd931,	// (0x0004a72c) bg_vkb2_func_pane_g5

0xd6fe,	// (0x0004a4f9) bg_vkb2_func_pane_g6

0xd706,	// (0x0004a501) bg_vkb2_func_pane_g7

0xd6f6,	// (0x0004a4f1) bg_vkb2_func_pane_g8

0xabff,	// (0x000479fa) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0004c927) bg_vkb2_func_pane_g

0x85aa,	// (0x000453a5) blid2_tripm_pane_g6_ParamLimits

0x85aa,	// (0x000453a5) blid2_tripm_pane_g6

0xd540,	// (0x0004a33b) mp4_progress_pane_g1

0x8604,	// (0x000453ff) blid2_tripm_values_pane_ParamLimits

0x8604,	// (0x000453ff) blid2_tripm_values_pane

0x86c1,	// (0x000454bc) blid2_tripm_values_pane_t1

0x86cf,	// (0x000454ca) blid2_tripm_values_pane_t2

0x86dd,	// (0x000454d8) blid2_tripm_values_pane_t3

0x86eb,	// (0x000454e6) blid2_tripm_values_pane_t4

0x86f9,	// (0x000454f4) blid2_tripm_values_pane_t5

0x8707,	// (0x00045502) blid2_tripm_values_pane_t6

0x8715,	// (0x00045510) blid2_tripm_values_pane_t7

0x8723,	// (0x0004551e) blid2_tripm_values_pane_t8

0x8731,	// (0x0004552c) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0004c93a) blid2_tripm_values_pane_t

0x3389,	// (0x00040184) call_video_pane_t1_ParamLimits

0x33aa,	// (0x000401a5) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004c069) call_video_pane_t_ParamLimits

0x111c,	// (0x0003df17) msg_header_pane_g1_ParamLimits

0xb5bb,	// (0x000483b6) msg_header_pane_g2_ParamLimits

0xb5bb,	// (0x000483b6) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004c283) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004c283) msg_header_pane_g

0xa801,	// (0x000475fc) main_clock2_pane_ParamLimits

0x67fb,	// (0x000435f6) grid_clock2_toolbar_pane_ParamLimits

0x67fb,	// (0x000435f6) grid_clock2_toolbar_pane

0x67fb,	// (0x000435f6) listscroll_clock2_pane_ParamLimits

0x67fb,	// (0x000435f6) listscroll_clock2_pane

0x689f,	// (0x0004369a) main_clock2_pane_t3_ParamLimits

0x689f,	// (0x0004369a) main_clock2_pane_t3

0x68b1,	// (0x000436ac) main_clock2_pane_t4_ParamLimits

0x68b1,	// (0x000436ac) main_clock2_pane_t4

0xdd02,	// (0x0004aafd) cell_clock2_toolbar_pane

0xdd0a,	// (0x0004ab05) cell_clock2_toolbar_pane_cp01

0xdd0a,	// (0x0004ab05) cell_clock2_toolbar_pane_cp02

0xdd12,	// (0x0004ab0d) cell_clock2_toolbar_pane_cp03

0xdd1a,	// (0x0004ab15) list_clock2_pane

0xb207,	// (0x00048002) scroll_pane_cp10

0xdd22,	// (0x0004ab1d) list_single_clock2_pane_ParamLimits

0xdd22,	// (0x0004ab1d) list_single_clock2_pane

0xa9c6,	// (0x000477c1) list_highlight_pane_cp08

0xdd2f,	// (0x0004ab2a) list_single_clock2_pane_t1

0xdd3d,	// (0x0004ab38) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0004c94d) list_single_clock2_pane_t

0xa090,	// (0x00046e8b) bg_button_pane_cp10

0xdd4b,	// (0x0004ab46) cell_clock2_toolbar_pane_g1

0x4d87,	// (0x00041b82) aid_main_viewer_pane_g1_ParamLimits

0x4d87,	// (0x00041b82) aid_main_viewer_pane_g1

0x4d93,	// (0x00041b8e) aid_main_viewer_pane_g2_ParamLimits

0x4d93,	// (0x00041b8e) aid_main_viewer_pane_g2

0x4d9f,	// (0x00041b9a) aid_main_viewer_pane_g3_ParamLimits

0x4d9f,	// (0x00041b9a) aid_main_viewer_pane_g3

0x4db0,	// (0x00041bab) aid_main_viewer_pane_g4_ParamLimits

0x4db0,	// (0x00041bab) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004c294) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004c294) aid_main_viewer_pane_g

0x5530,	// (0x0004232b) main_calc_pane_ParamLimits

0x553d,	// (0x00042338) main_dialer2_pane_ParamLimits

0xa090,	// (0x00046e8b) main_cam6_pane

0xa090,	// (0x00046e8b) main_vid6_pane

0x6807,	// (0x00043602) listscroll_gen_pane_cp06_ParamLimits

0x6807,	// (0x00043602) listscroll_gen_pane_cp06

0x68c3,	// (0x000436be) main_clock2_pane_t5_ParamLimits

0x68c3,	// (0x000436be) main_clock2_pane_t5

0x690c,	// (0x00043707) aid_call2_pane_cp10_ParamLimits

0x691e,	// (0x00043719) aid_call_pane_cp10_ParamLimits

0xb285,	// (0x00048080) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb285,	// (0x00048080) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6930,	// (0x0004372b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6930,	// (0x0004372b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb285,	// (0x00048080) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004c5cf) popup_clock_analogue_window_cp10_g_ParamLimits

0x6942,	// (0x0004373d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7109,	// (0x00043f04) cell_dialer2_keypad_pane_g2_ParamLimits

0x7109,	// (0x00043f04) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004c6b5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004c6b5) cell_dialer2_keypad_pane_g

0x7125,	// (0x00043f20) cell_dialer2_keypad_pane_t1

0x7ae7,	// (0x000448e2) main_cset_text2_pane_ParamLimits

0x7ae7,	// (0x000448e2) main_cset_text2_pane

0xdb4c,	// (0x0004a947) area_vitu2_query_pane_g1_ParamLimits

0x14c5,	// (0x0003e2c0) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004c86a) area_vitu2_query_pane_g_ParamLimits

0x1576,	// (0x0003e371) area_vitu2_query_pane_t7_ParamLimits

0x1576,	// (0x0003e371) area_vitu2_query_pane_t7

0x8283,	// (0x0004507e) bg_button_pane_cp018_ParamLimits

0x8291,	// (0x0004508c) bg_button_pane_cp021_ParamLimits

0x159a,	// (0x0003e395) bg_button_pane_cp022_ParamLimits

0x159a,	// (0x0003e395) bg_vkb2_func_pane_cp08_ParamLimits

0x8283,	// (0x0004507e) bg_vkb2_func_pane_cp06_ParamLimits

0x8291,	// (0x0004508c) bg_vkb2_func_pane_cp07_ParamLimits

0x15ab,	// (0x0003e3a6) input_focus_pane_cp09_ParamLimits

0x873f,	// (0x0004553a) cam6_autofocus_pane_ParamLimits

0x873f,	// (0x0004553a) cam6_autofocus_pane

0x8761,	// (0x0004555c) cam6_image_uncrop_pane_ParamLimits

0x8761,	// (0x0004555c) cam6_image_uncrop_pane

0x878e,	// (0x00045589) cam6_indi_pane_ParamLimits

0x878e,	// (0x00045589) cam6_indi_pane

0x87a8,	// (0x000455a3) cam6_mode_pane_ParamLimits

0x87a8,	// (0x000455a3) cam6_mode_pane

0x87bc,	// (0x000455b7) cam6_timer_pane_ParamLimits

0x87bc,	// (0x000455b7) cam6_timer_pane

0x87c8,	// (0x000455c3) cam6_zoom_pane_ParamLimits

0x87c8,	// (0x000455c3) cam6_zoom_pane

0x87e0,	// (0x000455db) cam6_mode_pane_g1_ParamLimits

0x87e0,	// (0x000455db) cam6_mode_pane_g1

0x87ec,	// (0x000455e7) cam6_mode_pane_g2_ParamLimits

0x87ec,	// (0x000455e7) cam6_mode_pane_g2

0x87f8,	// (0x000455f3) cam6_mode_pane_g3_ParamLimits

0x87f8,	// (0x000455f3) cam6_mode_pane_g3

0x8804,	// (0x000455ff) cam6_mode_pane_g4_ParamLimits

0x8804,	// (0x000455ff) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0004c952) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0004c952) cam6_mode_pane_g

0xd8d7,	// (0x0004a6d2) bg_tb_trans_pane_cp08_ParamLimits

0xd8d7,	// (0x0004a6d2) bg_tb_trans_pane_cp08

0xdd53,	// (0x0004ab4e) cam6_battery_pane_ParamLimits

0xdd53,	// (0x0004ab4e) cam6_battery_pane

0xdd69,	// (0x0004ab64) cam6_indi_pane_g1_ParamLimits

0xdd69,	// (0x0004ab64) cam6_indi_pane_g1

0xdd7b,	// (0x0004ab76) cam6_indi_pane_g2_ParamLimits

0xdd7b,	// (0x0004ab76) cam6_indi_pane_g2

0xdd8d,	// (0x0004ab88) cam6_indi_pane_g3_ParamLimits

0xdd8d,	// (0x0004ab88) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0004c95b) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0004c95b) cam6_indi_pane_g

0xdd9f,	// (0x0004ab9a) cam6_indi_pane_t1_ParamLimits

0xdd9f,	// (0x0004ab9a) cam6_indi_pane_t1

0x75e2,	// (0x000443dd) cam6_autofocus_pane_g1

0x75ea,	// (0x000443e5) cam6_autofocus_pane_g2

0x75f2,	// (0x000443ed) cam6_autofocus_pane_g3

0x75fa,	// (0x000443f5) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0004c962) cam6_autofocus_pane_g

0xddc5,	// (0x0004abc0) cam6_timer_pane_g1

0xddcd,	// (0x0004abc8) cam6_timer_pane_t1

0xdddb,	// (0x0004abd6) cam6_zoom_cont_pane

0xdde3,	// (0x0004abde) cam6_zoom_pane_g1

0xddeb,	// (0x0004abe6) cam6_zoom_pane_g2

0x8810,	// (0x0004560b) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0004c96b) cam6_zoom_pane_g

0xcc49,	// (0x00049a44) cam6_battery_pane_g1

0xcc49,	// (0x00049a44) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0004c4d7) cam6_battery_pane_g

0xddf3,	// (0x0004abee) cam6_zoom_cont_pane_g1

0xddfc,	// (0x0004abf7) cam6_zoom_cont_pane_g2

0xde05,	// (0x0004ac00) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0004c972) cam6_zoom_cont_pane_g

0x882d,	// (0x00045628) cam6_mode_pane_cp_ParamLimits

0x882d,	// (0x00045628) cam6_mode_pane_cp

0x87c8,	// (0x000455c3) cam6_zoom_pane_cp_ParamLimits

0x87c8,	// (0x000455c3) cam6_zoom_pane_cp

0x8841,	// (0x0004563c) vid6_image_uncrop_cif_pane_ParamLimits

0x8841,	// (0x0004563c) vid6_image_uncrop_cif_pane

0x886d,	// (0x00045668) vid6_image_uncrop_nhd_pane_ParamLimits

0x886d,	// (0x00045668) vid6_image_uncrop_nhd_pane

0x8761,	// (0x0004555c) vid6_image_uncrop_vga_pane_ParamLimits

0x8761,	// (0x0004555c) vid6_image_uncrop_vga_pane

0x888a,	// (0x00045685) vid6_image_uncrop_wvga_pane_ParamLimits

0x888a,	// (0x00045685) vid6_image_uncrop_wvga_pane

0x88a7,	// (0x000456a2) vid6_indi_pane_ParamLimits

0x88a7,	// (0x000456a2) vid6_indi_pane

0xd8d7,	// (0x0004a6d2) bg_tb_trans_pane_cp09_ParamLimits

0xd8d7,	// (0x0004a6d2) bg_tb_trans_pane_cp09

0xde1d,	// (0x0004ac18) cam6_battery_pane_cp_ParamLimits

0xde1d,	// (0x0004ac18) cam6_battery_pane_cp

0xde29,	// (0x0004ac24) vid6_indi_pane_g1_ParamLimits

0xde29,	// (0x0004ac24) vid6_indi_pane_g1

0xde3b,	// (0x0004ac36) vid6_indi_pane_g2_ParamLimits

0xde3b,	// (0x0004ac36) vid6_indi_pane_g2

0xde4d,	// (0x0004ac48) vid6_indi_pane_g3_ParamLimits

0xde4d,	// (0x0004ac48) vid6_indi_pane_g3

0xde62,	// (0x0004ac5d) vid6_indi_pane_g4_ParamLimits

0xde62,	// (0x0004ac5d) vid6_indi_pane_g4

0xde77,	// (0x0004ac72) vid6_indi_pane_g5_ParamLimits

0xde77,	// (0x0004ac72) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0004c979) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0004c979) vid6_indi_pane_g

0xde91,	// (0x0004ac8c) vid6_indi_pane_t1_ParamLimits

0xde91,	// (0x0004ac8c) vid6_indi_pane_t1

0xdea7,	// (0x0004aca2) vid6_indi_pane_t2_ParamLimits

0xdea7,	// (0x0004aca2) vid6_indi_pane_t2

0xdecf,	// (0x0004acca) vid6_indi_pane_t3_ParamLimits

0xdecf,	// (0x0004acca) vid6_indi_pane_t3

0xdef7,	// (0x0004acf2) vid6_indi_pane_t4_ParamLimits

0xdef7,	// (0x0004acf2) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0004c984) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0004c984) vid6_indi_pane_t

0xdf1b,	// (0x0004ad16) wait_bar_pane_cp08

0x88cc,	// (0x000456c7) main_cset_text2_pane_t1_ParamLimits

0x88cc,	// (0x000456c7) main_cset_text2_pane_t1

0x8818,	// (0x00045613) listscroll_gen_pane_cp06_t1_ParamLimits

0x8818,	// (0x00045613) listscroll_gen_pane_cp06_t1

0xa090,	// (0x00046e8b) main_cam6_set_pane

0xceac,	// (0x00049ca7) bg_tb_trans_pane_cp06_ParamLimits

0x7492,	// (0x0004428d) cam4_indicators_pane_g1_ParamLimits

0x74a3,	// (0x0004429e) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004c6f2) cam4_indicators_pane_g_ParamLimits

0x74c1,	// (0x000442bc) cam4_indicators_pane_t1_ParamLimits

0xb086,	// (0x00047e81) bg_tb_trans_pane_cp07_ParamLimits

0x7574,	// (0x0004436f) vid4_indicators_pane_g1_ParamLimits

0x7588,	// (0x00044383) vid4_indicators_pane_g2_ParamLimits

0x759c,	// (0x00044397) vid4_indicators_pane_g3_ParamLimits

0x75ad,	// (0x000443a8) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004c704) vid4_indicators_pane_g_ParamLimits

0x75cb,	// (0x000443c6) vid4_indicators_pane_t1_ParamLimits

0x83bd,	// (0x000451b8) vid4_progress_pane_g1_ParamLimits

0x83cd,	// (0x000451c8) vid4_progress_pane_g2_ParamLimits

0x83dd,	// (0x000451d8) vid4_progress_pane_g3_ParamLimits

0x83ef,	// (0x000451ea) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004c8b5) vid4_progress_pane_g_ParamLimits

0x8407,	// (0x00045202) vid4_progress_pane_t1_ParamLimits

0x841d,	// (0x00045218) vid4_progress_pane_t2_ParamLimits

0x8432,	// (0x0004522d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004c8c0) vid4_progress_pane_t_ParamLimits

0x8447,	// (0x00045242) wait_bar_pane_cp07_ParamLimits

0x88ff,	// (0x000456fa) main_cam6_set_pane_g2_ParamLimits

0x88ff,	// (0x000456fa) main_cam6_set_pane_g2

0x890b,	// (0x00045706) main_cset6_listscroll_pane_ParamLimits

0x890b,	// (0x00045706) main_cset6_listscroll_pane

0x8936,	// (0x00045731) main_cset6_slider_pane_ParamLimits

0x8936,	// (0x00045731) main_cset6_slider_pane

0x8942,	// (0x0004573d) main_cset6_text2_pane_ParamLimits

0x8942,	// (0x0004573d) main_cset6_text2_pane

0xdf2a,	// (0x0004ad25) main_cset6_text_pane

0xdf32,	// (0x0004ad2d) main_cset_list_pane_copy1_ParamLimits

0xdf32,	// (0x0004ad2d) main_cset_list_pane_copy1

0xdf42,	// (0x0004ad3d) scroll_pane_cp028_copy1

0x8955,	// (0x00045750) cset_list_set_pane_copy1

0x8968,	// (0x00045763) aid_position_infowindow_above_copy1

0x8970,	// (0x0004576b) aid_position_infowindow_below_copy1

0x15fb,	// (0x0003e3f6) cset_list_set_pane_g1_copy1

0x1338,	// (0x0003e133) cset_list_set_pane_g3_copy1_ParamLimits

0x1338,	// (0x0003e133) cset_list_set_pane_g3_copy1

0x1347,	// (0x0003e142) cset_list_set_pane_t1_copy1_ParamLimits

0x1347,	// (0x0003e142) cset_list_set_pane_t1_copy1

0xb086,	// (0x00047e81) list_highlight_pane_cp021_copy1_ParamLimits

0xb086,	// (0x00047e81) list_highlight_pane_cp021_copy1

0xdf4b,	// (0x0004ad46) cset6_slider_pane_ParamLimits

0xdf4b,	// (0x0004ad46) cset6_slider_pane

0xdf77,	// (0x0004ad72) main_cset6_slider_pane_g1_ParamLimits

0xdf77,	// (0x0004ad72) main_cset6_slider_pane_g1

0x8978,	// (0x00045773) main_cset6_slider_pane_g2_ParamLimits

0x8978,	// (0x00045773) main_cset6_slider_pane_g2

0xdf9f,	// (0x0004ad9a) main_cset6_slider_pane_g3_ParamLimits

0xdf9f,	// (0x0004ad9a) main_cset6_slider_pane_g3

0x89a0,	// (0x0004579b) main_cset6_slider_pane_g4_ParamLimits

0x89a0,	// (0x0004579b) main_cset6_slider_pane_g4

0x89ac,	// (0x000457a7) main_cset6_slider_pane_g5_ParamLimits

0x89ac,	// (0x000457a7) main_cset6_slider_pane_g5

0xd805,	// (0x0004a600) main_cset6_slider_pane_g7_ParamLimits

0xd805,	// (0x0004a600) main_cset6_slider_pane_g7

0xd811,	// (0x0004a60c) main_cset6_slider_pane_g8_ParamLimits

0xd811,	// (0x0004a60c) main_cset6_slider_pane_g8

0x89ba,	// (0x000457b5) main_cset6_slider_pane_g9_ParamLimits

0x89ba,	// (0x000457b5) main_cset6_slider_pane_g9

0x89c6,	// (0x000457c1) main_cset6_slider_pane_g10_ParamLimits

0x89c6,	// (0x000457c1) main_cset6_slider_pane_g10

0x89d2,	// (0x000457cd) main_cset6_slider_pane_g11_ParamLimits

0x89d2,	// (0x000457cd) main_cset6_slider_pane_g11

0x89de,	// (0x000457d9) main_cset6_slider_pane_g12_ParamLimits

0x89de,	// (0x000457d9) main_cset6_slider_pane_g12

0x89ea,	// (0x000457e5) main_cset6_slider_pane_g13_ParamLimits

0x89ea,	// (0x000457e5) main_cset6_slider_pane_g13

0x89f6,	// (0x000457f1) main_cset6_slider_pane_g14_ParamLimits

0x89f6,	// (0x000457f1) main_cset6_slider_pane_g14

0x8a02,	// (0x000457fd) main_cset6_slider_pane_g15_ParamLimits

0x8a02,	// (0x000457fd) main_cset6_slider_pane_g15

0x8a1a,	// (0x00045815) main_cset6_slider_pane_g16_ParamLimits

0x8a1a,	// (0x00045815) main_cset6_slider_pane_g16

0x8a28,	// (0x00045823) main_cset6_slider_pane_g17_ParamLimits

0x8a28,	// (0x00045823) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0004c98d) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0004c98d) main_cset6_slider_pane_g

0xdfab,	// (0x0004ada6) main_cset6_slider_pane_t1_ParamLimits

0xdfab,	// (0x0004ada6) main_cset6_slider_pane_t1

0x8a4e,	// (0x00045849) main_cset6_slider_pane_t2_ParamLimits

0x8a4e,	// (0x00045849) main_cset6_slider_pane_t2

0x8a79,	// (0x00045874) main_cset6_slider_pane_t3_ParamLimits

0x8a79,	// (0x00045874) main_cset6_slider_pane_t3

0x8aa4,	// (0x0004589f) main_cset6_slider_pane_t4_ParamLimits

0x8aa4,	// (0x0004589f) main_cset6_slider_pane_t4

0x8acf,	// (0x000458ca) main_cset6_slider_pane_t5_ParamLimits

0x8acf,	// (0x000458ca) main_cset6_slider_pane_t5

0xdfec,	// (0x0004ade7) main_cset6_slider_pane_t7_ParamLimits

0xdfec,	// (0x0004ade7) main_cset6_slider_pane_t7

0x8afc,	// (0x000458f7) main_cset6_slider_pane_t8_ParamLimits

0x8afc,	// (0x000458f7) main_cset6_slider_pane_t8

0x8b20,	// (0x0004591b) main_cset6_slider_pane_t9_ParamLimits

0x8b20,	// (0x0004591b) main_cset6_slider_pane_t9

0x8b44,	// (0x0004593f) main_cset6_slider_pane_t10_ParamLimits

0x8b44,	// (0x0004593f) main_cset6_slider_pane_t10

0x8b68,	// (0x00045963) main_cset6_slider_pane_t11_ParamLimits

0x8b68,	// (0x00045963) main_cset6_slider_pane_t11

0xe022,	// (0x0004ae1d) main_cset6_slider_pane_t14_ParamLimits

0xe022,	// (0x0004ae1d) main_cset6_slider_pane_t14

0xe05b,	// (0x0004ae56) main_cset6_slider_pane_t15_ParamLimits

0xe05b,	// (0x0004ae56) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0004c9b2) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0004c9b2) main_cset6_slider_pane_t

0xd8e5,	// (0x0004a6e0) cset_slider_pane_g1_copy1

0xd8ee,	// (0x0004a6e9) cset_slider_pane_g2_copy1

0xd8f7,	// (0x0004a6f2) cset_slider_pane_g3_copy1

0xa090,	// (0x00046e8b) bg_popup_sub_pane_cp011_copy1

0xe094,	// (0x0004ae8f) main_cset_text_pane_g1_copy1

0xd980,	// (0x0004a77b) main_cset_text_pane_t1_copy1

0xd98e,	// (0x0004a789) main_cset_text_pane_t2_copy1

0xd99c,	// (0x0004a797) main_cset_text_pane_t3_copy1

0xd9aa,	// (0x0004a7a5) main_cset_text_pane_t4_copy1

0xd9b8,	// (0x0004a7b3) main_cset_text_pane_t5_copy1

0xe09c,	// (0x0004ae97) main_cset_text_pane_t6_copy1

0xe0aa,	// (0x0004aea5) main_cset_text_pane_t7_copy1

0x8b8c,	// (0x00045987) main_cset_text2_pane_t1_copy1

0xb086,	// (0x00047e81) main_ncimui_pane

0x558e,	// (0x00042389) popup_query_ncimui_window_ParamLimits

0x558e,	// (0x00042389) popup_query_ncimui_window

0x11dd,	// (0x0003dfd8) field_cale_ev2_pane_g4_ParamLimits

0x11dd,	// (0x0003dfd8) field_cale_ev2_pane_g4

0x6e29,	// (0x00043c24) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e29,	// (0x00043c24) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004c690) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004c690) cell_video_dialer_keypad_pane_g

0x6e41,	// (0x00043c3c) cell_video_dialer_keypad_pane_t1

0xa090,	// (0x00046e8b) bg_popup_window_pane_cp012

0xb0d4,	// (0x00047ecf) heading_pane_cp06

0xe0d6,	// (0x0004aed1) ncim_query_content_pane

0xa090,	// (0x00046e8b) bg_popup_heading_pane_cp01

0xe0de,	// (0x0004aed9) ncim_heading_pane_t1

0xe0ec,	// (0x0004aee7) ncim_indicator_popup_pane

0xe0fe,	// (0x0004aef9) ncim_query_button_pane

0xe112,	// (0x0004af0d) ncim_query_content_pane_t1

0xe124,	// (0x0004af1f) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0004c9f6) ncim_query_content_pane_t

0xe15e,	// (0x0004af59) ncim_query_list_pane

0xe170,	// (0x0004af6b) ncim_query_popup_pane

0xe0ec,	// (0x0004aee7) ncim_indicator_popup_pane_ParamLimits

0x8cdf,	// (0x00045ada) ncim_query_content_pane_g1_ParamLimits

0x8cdf,	// (0x00045ada) ncim_query_content_pane_g1

0xe112,	// (0x0004af0d) ncim_query_content_pane_t1_ParamLimits

0xe124,	// (0x0004af1f) ncim_query_content_pane_t2_ParamLimits

0x8ceb,	// (0x00045ae6) ncim_query_content_pane_t3_ParamLimits

0x8ceb,	// (0x00045ae6) ncim_query_content_pane_t3

0x8d08,	// (0x00045b03) ncim_query_content_pane_t4_ParamLimits

0x8d08,	// (0x00045b03) ncim_query_content_pane_t4

0x8d25,	// (0x00045b20) ncim_query_content_pane_t5_ParamLimits

0x8d25,	// (0x00045b20) ncim_query_content_pane_t5

0xe136,	// (0x0004af31) ncim_query_content_pane_t6_ParamLimits

0xe136,	// (0x0004af31) ncim_query_content_pane_t6

0xfbfb,	// (0x0004c9f6) ncim_query_content_pane_t_ParamLimits

0xe15e,	// (0x0004af59) ncim_query_list_pane_ParamLimits

0xe170,	// (0x0004af6b) ncim_query_popup_pane_ParamLimits

0xe184,	// (0x0004af7f) wait_bar_pane_cp04

0xa090,	// (0x00046e8b) input_focus_pane_cp011

0xe18c,	// (0x0004af87) ncim_query_popup_pane_t1

0xe19a,	// (0x0004af95) ncim_list_query_list_pane_ParamLimits

0xe19a,	// (0x0004af95) ncim_list_query_list_pane

0xa090,	// (0x00046e8b) bg_button_pane_cp027

0xe1a7,	// (0x0004afa2) ncim_query_button_pane_g1

0xa090,	// (0x00046e8b) list_highlight_pane_cp012

0xe1b1,	// (0x0004afac) ncim_list_query_list_pane_g1

0xe1b9,	// (0x0004afb4) ncim_list_query_list_pane_t1

0x74b2,	// (0x000442ad) cam4_indicators_pane_g3_ParamLimits

0x74b2,	// (0x000442ad) cam4_indicators_pane_g3

0x75b9,	// (0x000443b4) vid4_indicators_pane_g5_ParamLimits

0x75b9,	// (0x000443b4) vid4_indicators_pane_g5

0x83fb,	// (0x000451f6) vid4_progress_pane_g5_ParamLimits

0x83fb,	// (0x000451f6) vid4_progress_pane_g5

0x8bcb,	// (0x000459c6) main_ncimui_pane_g1

0x8c33,	// (0x00045a2e) ncimui_group_query_pane_ParamLimits

0x8c33,	// (0x00045a2e) ncimui_group_query_pane

0x8c7b,	// (0x00045a76) ncimui_list_pane_ParamLimits

0x8c7b,	// (0x00045a76) ncimui_list_pane

0x8ca2,	// (0x00045a9d) ncimui_text_pane_ParamLimits

0x8ca2,	// (0x00045a9d) ncimui_text_pane

0x8d42,	// (0x00045b3d) ncimui_text_pane_t1_ParamLimits

0x8d42,	// (0x00045b3d) ncimui_text_pane_t1

0xe1c7,	// (0x0004afc2) ncimui_list_single_graphic_pane_ParamLimits

0xe1c7,	// (0x0004afc2) ncimui_list_single_graphic_pane

0x8d61,	// (0x00045b5c) ncimui_query_pane_ParamLimits

0x8d61,	// (0x00045b5c) ncimui_query_pane

0xa090,	// (0x00046e8b) list_highlight_pane_cp013

0xe1d7,	// (0x0004afd2) ncim_list_query_list_pane_t1_copy1

0xe1b1,	// (0x0004afac) ncim_list_single_graphic_pane_g1

0xe1e5,	// (0x0004afe0) ncim_query_button_pane_cp01

0xe1f1,	// (0x0004afec) ncim_query_entry_pane_ParamLimits

0xe1f1,	// (0x0004afec) ncim_query_entry_pane

0xe204,	// (0x0004afff) ncimui_query_pane_g1

0xe210,	// (0x0004b00b) ncimui_query_pane_t1_ParamLimits

0xe210,	// (0x0004b00b) ncimui_query_pane_t1

0xb086,	// (0x00047e81) input_focus_pane_cp012

0xe229,	// (0x0004b024) ncim_query_entry_pane_t1

0xa801,	// (0x000475fc) main_im_pane_ParamLimits

0xb086,	// (0x00047e81) main_mobtv_pane_ParamLimits

0xb086,	// (0x00047e81) main_mobtv_pane

0x8a36,	// (0x00045831) main_cset6_slider_pane_g18_ParamLimits

0x8a36,	// (0x00045831) main_cset6_slider_pane_g18

0x8a42,	// (0x0004583d) main_cset6_slider_pane_g19_ParamLimits

0x8a42,	// (0x0004583d) main_cset6_slider_pane_g19

0xd6b6,	// (0x0004a4b1) bg_main_mobtv_pane_ParamLimits

0xd6b6,	// (0x0004a4b1) bg_main_mobtv_pane

0x8d74,	// (0x00045b6f) main_mobtv_info_pane

0x8d7f,	// (0x00045b7a) main_mobtv_loading_pane_ParamLimits

0x8d7f,	// (0x00045b7a) main_mobtv_loading_pane

0xe23b,	// (0x0004b036) main_mobtv_pg_channel_list_pane

0xe245,	// (0x0004b040) main_mobtv_pg_hdr_pane

0x8d8c,	// (0x00045b87) main_mobtv_programe_curr_pane_ParamLimits

0x8d8c,	// (0x00045b87) main_mobtv_programe_curr_pane

0x8d99,	// (0x00045b94) main_mobtv_programe_next_pane_ParamLimits

0x8d99,	// (0x00045b94) main_mobtv_programe_next_pane

0xe24e,	// (0x0004b049) popup_mobtv_noti_window

0xcc49,	// (0x00049a44) main_tv_pg_hdr_pane_g1

0xe256,	// (0x0004b051) main_tv_pg_hdr_pane_g2

0xe25e,	// (0x0004b059) main_tv_pg_hdr_pane_g3

0xe266,	// (0x0004b061) main_tv_pg_hdr_pane_g4

0xe26e,	// (0x0004b069) main_tv_pg_hdr_pane_g5

0xe278,	// (0x0004b073) main_tv_pg_hdr_pane_g6

0xe282,	// (0x0004b07d) main_tv_pg_hdr_pane_g7

0xe28c,	// (0x0004b087) main_tv_pg_hdr_pane_g8

0xe296,	// (0x0004b091) main_tv_pg_hdr_pane_g9

0xe2a0,	// (0x0004b09b) main_tv_pg_hdr_pane_g10

0xe2aa,	// (0x0004b0a5) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0004ca03) main_tv_pg_hdr_pane_g

0xe2b4,	// (0x0004b0af) main_tv_pg_hdr_pane_t1

0xe2c2,	// (0x0004b0bd) main_tv_pg_hdr_pane_t2

0xe2d0,	// (0x0004b0cb) main_tv_pg_hdr_pane_t3

0xe2e0,	// (0x0004b0db) main_tv_pg_hdr_pane_t4

0xe2f0,	// (0x0004b0eb) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0004ca1a) main_tv_pg_hdr_pane_t

0xe300,	// (0x0004b0fb) single_mobtv_pg_channel_pane_ParamLimits

0xe300,	// (0x0004b0fb) single_mobtv_pg_channel_pane

0xe312,	// (0x0004b10d) single_mobtv_pg_channel_table_pane

0xe31b,	// (0x0004b116) single_mobtv_pg_channel_thumb_pane

0xe324,	// (0x0004b11f) single_tv_pg_channel_pane_g1

0xe32d,	// (0x0004b128) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0004ca25) single_tv_pg_channel_pane_g

0xceac,	// (0x00049ca7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceac,	// (0x00049ca7) bg_single_mobtv_pg_channel_thumb_pane

0xe336,	// (0x0004b131) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe336,	// (0x0004b131) single_mobtv_pg_channel_thumb_pane_g1

0xe344,	// (0x0004b13f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe344,	// (0x0004b13f) single_mobtv_pg_channel_thumb_pane_g2

0xe350,	// (0x0004b14b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe350,	// (0x0004b14b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0004ca2a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0004ca2a) single_mobtv_pg_channel_thumb_pane_g

0xe35c,	// (0x0004b157) single_mobtv_pg_channel_thumb_pane_t1

0xe36a,	// (0x0004b165) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0004ca31) single_mobtv_pg_channel_thumb_pane_t

0xcc49,	// (0x00049a44) bg_single_mobtv_pg_channel_table_pane_g1

0xcc49,	// (0x00049a44) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0004c4d7) bg_single_mobtv_pg_channel_table_pane_g

0xe378,	// (0x0004b173) single_mobtv_pg_channel_table_pane_t1

0xe386,	// (0x0004b181) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0004ca36) single_mobtv_pg_channel_table_pane_t

0x8dae,	// (0x00045ba9) main_mobtv_info_pane_g1_ParamLimits

0x8dae,	// (0x00045ba9) main_mobtv_info_pane_g1

0x8dca,	// (0x00045bc5) main_mobtv_info_pane_t1_ParamLimits

0x8dca,	// (0x00045bc5) main_mobtv_info_pane_t1

0x8e42,	// (0x00045c3d) main_mobtv_info_pane_t2_ParamLimits

0x8e42,	// (0x00045c3d) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0004ca40) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0004ca40) main_mobtv_info_pane_t

0x8ed1,	// (0x00045ccc) wait_bar_pane_cp05

0x8ee3,	// (0x00045cde) main_mobtv_loading_pane_g1_ParamLimits

0x8ee3,	// (0x00045cde) main_mobtv_loading_pane_g1

0x8ef1,	// (0x00045cec) main_mobtv_loading_pane_g2_ParamLimits

0x8ef1,	// (0x00045cec) main_mobtv_loading_pane_g2

0x8efd,	// (0x00045cf8) main_mobtv_loading_pane_g3_ParamLimits

0x8efd,	// (0x00045cf8) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0004ca47) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0004ca47) main_mobtv_loading_pane_g

0xe394,	// (0x0004b18f) main_mobtv_loading_pane_t1_ParamLimits

0xe394,	// (0x0004b18f) main_mobtv_loading_pane_t1

0xe3ac,	// (0x0004b1a7) main_mobtv_loading_pane_t2_ParamLimits

0xe3ac,	// (0x0004b1a7) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0004ca4e) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0004ca4e) main_mobtv_loading_pane_t

0x8f0b,	// (0x00045d06) wait_bar_pane_cp06_ParamLimits

0x8f0b,	// (0x00045d06) wait_bar_pane_cp06

0xe3d0,	// (0x0004b1cb) main_mobtv_programe_curr_pane_t1

0xe3de,	// (0x0004b1d9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0004ca53) main_mobtv_programe_curr_pane_t

0xe3ec,	// (0x0004b1e7) main_mobtv_programe_next_pane_t1

0xe3fa,	// (0x0004b1f5) main_mobtv_programe_next_pane_t2

0xe408,	// (0x0004b203) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0004ca58) main_mobtv_programe_next_pane_t

0xa090,	// (0x00046e8b) bg_popup_mobtv_noti_window_pane

0xe416,	// (0x0004b211) popup_mobtv_noti_window_g1

0xe41e,	// (0x0004b219) popup_mobtv_noti_window_t1

0xe42c,	// (0x0004b227) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0004ca5f) popup_mobtv_noti_window_t

0xcc49,	// (0x00049a44) bg_popup_mobtv_noti_window_pane_g1

0xa090,	// (0x00046e8b) sc_clock_pane

0xa090,	// (0x00046e8b) main_fs_bigclock_pane

0x85f2,	// (0x000453ed) blid2_tripm_pane_t4_ParamLimits

0x85f2,	// (0x000453ed) blid2_tripm_pane_t4

0x8f17,	// (0x00045d12) sc_clock_pane_g1_ParamLimits

0x8f17,	// (0x00045d12) sc_clock_pane_g1

0x8f25,	// (0x00045d20) sc_clock_pane_t1_ParamLimits

0x8f25,	// (0x00045d20) sc_clock_pane_t1

0x8f38,	// (0x00045d33) sc_clock_pane_t2_ParamLimits

0x8f38,	// (0x00045d33) sc_clock_pane_t2

0x8f4a,	// (0x00045d45) sc_clock_pane_t3_ParamLimits

0x8f4a,	// (0x00045d45) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0004ca64) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0004ca64) sc_clock_pane_t

0x97a7,	// (0x000465a2) main_fs_bigclock_indicator_pane_ParamLimits

0x97a7,	// (0x000465a2) main_fs_bigclock_indicator_pane

0x8fd3,	// (0x00045dce) main_fs_bigclock_pane_g1_ParamLimits

0x8fd3,	// (0x00045dce) main_fs_bigclock_pane_g1

0x97b3,	// (0x000465ae) main_fs_bigclock_pane_t1_ParamLimits

0x97b3,	// (0x000465ae) main_fs_bigclock_pane_t1

0x97c5,	// (0x000465c0) main_fs_bigclock_pane_t2_ParamLimits

0x97c5,	// (0x000465c0) main_fs_bigclock_pane_t2

0x97d9,	// (0x000465d4) main_fs_bigclock_pane_t3_ParamLimits

0x97d9,	// (0x000465d4) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004cc6e) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004cc6e) main_fs_bigclock_pane_t

0xec87,	// (0x0004ba82) main_fs_bigclock_indicator_pane_g1

0xe106,	// (0x0004af01) ncim_query_content_pane_g2_ParamLimits

0xe106,	// (0x0004af01) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0004c9f1) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0004c9f1) ncim_query_content_pane_g

0x8f5e,	// (0x00045d59) sc_clock_pane_t4_ParamLimits

0x8f5e,	// (0x00045d59) sc_clock_pane_t4

0xb086,	// (0x00047e81) main_radioblah_pane

0xd629,	// (0x0004a424) cell_call4_button_pane_t1_copy1_ParamLimits

0xd629,	// (0x0004a424) cell_call4_button_pane_t1_copy1

0x8be5,	// (0x000459e0) main_ncimui_pane_t1_ParamLimits

0x8be5,	// (0x000459e0) main_ncimui_pane_t1

0x8bff,	// (0x000459fa) main_ncimui_pane_t2_ParamLimits

0x8bff,	// (0x000459fa) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0004c9ea) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0004c9ea) main_ncimui_pane_t

0xe570,	// (0x0004b36b) main_radioblah_anim_pane_ParamLimits

0xe570,	// (0x0004b36b) main_radioblah_anim_pane

0xe581,	// (0x0004b37c) main_radioblah_info_pane_ParamLimits

0xe581,	// (0x0004b37c) main_radioblah_info_pane

0xe595,	// (0x0004b390) main_radioblah_pane_t1_ParamLimits

0xe595,	// (0x0004b390) main_radioblah_pane_t1

0xe5b1,	// (0x0004b3ac) main_radioblah_pane_t2_ParamLimits

0xe5b1,	// (0x0004b3ac) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0004ca85) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0004ca85) main_radioblah_pane_t

0x9025,	// (0x00045e20) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9025,	// (0x00045e20) main_radioblah_rocker_ctrl_pane

0xe5f9,	// (0x0004b3f4) main_radioblah_info_pane_t1_ParamLimits

0xe5f9,	// (0x0004b3f4) main_radioblah_info_pane_t1

0x906a,	// (0x00045e65) main_radioblah_info_pane_t2_ParamLimits

0x906a,	// (0x00045e65) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0004ca8e) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0004ca8e) main_radioblah_info_pane_t

0xcc49,	// (0x00049a44) main_radioblah_rocker_ctrl_pane_g1

0x911a,	// (0x00045f15) main_radioblah_rocker_ctrl_pane_g2

0x9122,	// (0x00045f1d) main_radioblah_rocker_ctrl_pane_g3

0x912a,	// (0x00045f25) main_radioblah_rocker_ctrl_pane_g4

0x9132,	// (0x00045f2d) main_radioblah_rocker_ctrl_pane_g5

0x913a,	// (0x00045f35) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0004ca97) main_radioblah_rocker_ctrl_pane_g

0x8b8c,	// (0x00045987) main_cset_text2_pane_t1_copy1_ParamLimits

0x73e0,	// (0x000441db) cam4_image_uncrop_qvga_pane

0x7527,	// (0x00044322) vid4_image_uncrop_qcif_pane

0x8780,	// (0x0004557b) cam6_image_uncrop_qvga_pane_ParamLimits

0x8780,	// (0x0004557b) cam6_image_uncrop_qvga_pane

0xde0d,	// (0x0004ac08) vid6_image_uncrop_qcif_pane_ParamLimits

0xde0d,	// (0x0004ac08) vid6_image_uncrop_qcif_pane

0xa090,	// (0x00046e8b) bg_popup_preview_window_pane_cp03

0xe0b8,	// (0x0004aeb3) list_cset_text2_pane

0xe0c0,	// (0x0004aebb) main_cset6_text2_pane_g1

0xe0c8,	// (0x0004aec3) main_cset6_text2_pane_t1

0x9142,	// (0x00045f3d) list_cset_text2_pane_t1_ParamLimits

0x9142,	// (0x00045f3d) list_cset_text2_pane_t1

0xb086,	// (0x00047e81) main_radioblah_pane_ParamLimits

0x8ebd,	// (0x00045cb8) main_mobtv_info_pane_t3_ParamLimits

0x8ebd,	// (0x00045cb8) main_mobtv_info_pane_t3

0x9013,	// (0x00045e0e) main_radioblah_pane_g1

0x903e,	// (0x00045e39) main_radioblah_info_pane_g1

0x90bf,	// (0x00045eba) main_radioblah_info_pane_t3_ParamLimits

0x90bf,	// (0x00045eba) main_radioblah_info_pane_t3

0x43eb,	// (0x000411e6) highlight_cell_cale_month_pane_ParamLimits

0x43eb,	// (0x000411e6) highlight_cell_cale_month_pane

0xa090,	// (0x00046e8b) main_phob_fisheye_pane

0xcfa8,	// (0x00049da3) scroll_pane_cp0031_ParamLimits

0xcfa8,	// (0x00049da3) scroll_pane_cp0031

0xdf1b,	// (0x0004ad16) wait_bar_pane_cp08_ParamLimits

0x8955,	// (0x00045750) cset_list_set_pane_copy1_ParamLimits

0xe633,	// (0x0004b42e) highlight_cell_cale_month_pane_g1

0x915f,	// (0x00045f5a) highlight_cell_cale_month_pane_t1

0xdba0,	// (0x0004a99b) list_gen_pane_cp01

0xd7f0,	// (0x0004a5eb) scroll_pane_01

0x916d,	// (0x00045f68) list_single_double_fisheye_pane

0x16d4,	// (0x0003e4cf) list_double_fisheye_pane_g1_ParamLimits

0x16d4,	// (0x0003e4cf) list_double_fisheye_pane_g1

0x16e0,	// (0x0003e4db) list_double_fisheye_pane_g2_ParamLimits

0x16e0,	// (0x0003e4db) list_double_fisheye_pane_g2

0x9176,	// (0x00045f71) list_double_fisheye_pane_g3_ParamLimits

0x9176,	// (0x00045f71) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0004caa4) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0004caa4) list_double_fisheye_pane_g

0x1711,	// (0x0003e50c) list_double_fisheye_pane_t1_ParamLimits

0x1711,	// (0x0003e50c) list_double_fisheye_pane_t1

0x172c,	// (0x0003e527) list_double_fisheye_pane_t2_ParamLimits

0x172c,	// (0x0003e527) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0004caaf) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0004caaf) list_double_fisheye_pane_t

0xa090,	// (0x00046e8b) main_call5_pane

0x8f84,	// (0x00045d7f) sc_swipe_pane_ParamLimits

0x8f84,	// (0x00045d7f) sc_swipe_pane

0x918e,	// (0x00045f89) call5_image_pane_ParamLimits

0x918e,	// (0x00045f89) call5_image_pane

0x919e,	// (0x00045f99) call5_swipe_1_pane_ParamLimits

0x919e,	// (0x00045f99) call5_swipe_1_pane

0x91aa,	// (0x00045fa5) call5_swipe_2_pane_ParamLimits

0x91aa,	// (0x00045fa5) call5_swipe_2_pane

0x91c4,	// (0x00045fbf) popup_call5_audio_first_window_ParamLimits

0x91c4,	// (0x00045fbf) popup_call5_audio_first_window

0xceac,	// (0x00049ca7) call5_swipe_1_pane_g1_ParamLimits

0xceac,	// (0x00049ca7) call5_swipe_1_pane_g1

0xe63b,	// (0x0004b436) call5_swipe_1_pane_g2_ParamLimits

0xe63b,	// (0x0004b436) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0004cab4) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0004cab4) call5_swipe_1_pane_g

0xe647,	// (0x0004b442) call5_swipe_1_pane_t1_ParamLimits

0xe647,	// (0x0004b442) call5_swipe_1_pane_t1

0xceac,	// (0x00049ca7) call5_swipe_2_pane_g1_ParamLimits

0xceac,	// (0x00049ca7) call5_swipe_2_pane_g1

0xe65c,	// (0x0004b457) call5_swipe_2_pane_g2_ParamLimits

0xe65c,	// (0x0004b457) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0004cab9) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0004cab9) call5_swipe_2_pane_g

0xe668,	// (0x0004b463) call5_swipe_2_pane_t1_ParamLimits

0xe668,	// (0x0004b463) call5_swipe_2_pane_t1

0xe67d,	// (0x0004b478) sc_swipe_pane_g1_ParamLimits

0xe67d,	// (0x0004b478) sc_swipe_pane_g1

0xe68a,	// (0x0004b485) sc_swipe_pane_g2_ParamLimits

0xe68a,	// (0x0004b485) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0004cabe) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0004cabe) sc_swipe_pane_g

0xe696,	// (0x0004b491) sc_swipe_pane_t1_ParamLimits

0xe696,	// (0x0004b491) sc_swipe_pane_t1

0xa090,	// (0x00046e8b) main_cmail_launcher_pane

0x91d2,	// (0x00045fcd) aid_size_cell_cmail_l_ParamLimits

0x91d2,	// (0x00045fcd) aid_size_cell_cmail_l

0x91e2,	// (0x00045fdd) grid_cmail_l_pane_ParamLimits

0x91e2,	// (0x00045fdd) grid_cmail_l_pane

0x91f2,	// (0x00045fed) cell_cmail_l_pane_ParamLimits

0x91f2,	// (0x00045fed) cell_cmail_l_pane

0x9206,	// (0x00046001) cell_cmail_l_pane_g1_ParamLimits

0x9206,	// (0x00046001) cell_cmail_l_pane_g1

0x9212,	// (0x0004600d) cell_cmail_l_pane_t1_ParamLimits

0x9212,	// (0x0004600d) cell_cmail_l_pane_t1

0xe6ab,	// (0x0004b4a6) cell_cmail_l_pane_t2_ParamLimits

0xe6ab,	// (0x0004b4a6) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0004cac3) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0004cac3) cell_cmail_l_pane_t

0xb086,	// (0x00047e81) grid_highlight_pane_cp018_ParamLimits

0xb086,	// (0x00047e81) grid_highlight_pane_cp018

0x2361,	// (0x0003f15c) main2_pane_ParamLimits

0x2361,	// (0x0003f15c) main2_pane

0xa89a,	// (0x00047695) popup_sp_fs_action_menu_bg_pane_g1

0xa8a2,	// (0x0004769d) popup_sp_fs_action_menu_bg_pane_g2

0xa8aa,	// (0x000476a5) popup_sp_fs_action_menu_bg_pane_g3

0xa8b2,	// (0x000476ad) popup_sp_fs_action_menu_bg_pane_g4

0xa8ba,	// (0x000476b5) popup_sp_fs_action_menu_bg_pane_g5

0xa8c2,	// (0x000476bd) popup_sp_fs_action_menu_bg_pane_g6

0xa8ca,	// (0x000476c5) popup_sp_fs_action_menu_bg_pane_g7

0xa8d2,	// (0x000476cd) popup_sp_fs_action_menu_bg_pane_g8

0xa8da,	// (0x000476d5) popup_sp_fs_action_menu_bg_pane_g9

0xa8e2,	// (0x000476dd) popup_sp_fs_action_menu_bg_pane_g10

0xa8e2,	// (0x000476dd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0004bf85) popup_sp_fs_action_menu_bg_pane_g

0x0eab,	// (0x0003dca6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x2_t3_g3_g1

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t3_g3_g2

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004c033) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004c033) list_medium_line_x2_t3_g3_g

0x0ecf,	// (0x0003dcca) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ecf,	// (0x0003dcca) list_medium_line_x2_t3_g3_t1

0x0ee4,	// (0x0003dcdf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ee4,	// (0x0003dcdf) list_medium_line_x2_t3_g3_t2

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004c03a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004c03a) list_medium_line_x2_t3_g3_t

0x0eab,	// (0x0003dca6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x2_t3_g2_g1

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004c041) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004c041) list_medium_line_x2_t3_g2_g

0x0f0b,	// (0x0003dd06) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f0b,	// (0x0003dd06) list_medium_line_x2_t3_g2_t1

0x0f21,	// (0x0003dd1c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f21,	// (0x0003dd1c) list_medium_line_x2_t3_g2_t2

0x0f33,	// (0x0003dd2e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0f33,	// (0x0003dd2e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004c046) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004c046) list_medium_line_x2_t3_g2_t

0x0eab,	// (0x0003dca6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x2_t4_g4_g1

0x0f50,	// (0x0003dd4b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0f50,	// (0x0003dd4b) list_medium_line_x2_t4_g4_g2

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t4_g4_g3

0x0f5c,	// (0x0003dd57) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0f5c,	// (0x0003dd57) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004c04d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004c04d) list_medium_line_x2_t4_g4_g

0x0f68,	// (0x0003dd63) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0f68,	// (0x0003dd63) list_medium_line_x2_t4_g4_t1

0x0f82,	// (0x0003dd7d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0f82,	// (0x0003dd7d) list_medium_line_x2_t4_g4_t2

0x0f98,	// (0x0003dd93) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0f98,	// (0x0003dd93) list_medium_line_x2_t4_g4_t3

0x0fad,	// (0x0003dda8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0fad,	// (0x0003dda8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004c056) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004c056) list_medium_line_x2_t4_g4_t

0x0eab,	// (0x0003dca6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x2_t2_g4_g1

0x0f50,	// (0x0003dd4b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0f50,	// (0x0003dd4b) list_medium_line_x2_t2_g4_g2

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t2_g4_g3

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004c0bd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004c0bd) list_medium_line_x2_t2_g4_g

0x0fbf,	// (0x0003ddba) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0fbf,	// (0x0003ddba) list_medium_line_x2_t2_g4_t1

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004c0c6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004c0c6) list_medium_line_x2_t2_g4_t

0x0eab,	// (0x0003dca6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x2_t2_g3_g1

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t2_g3_g2

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004c033) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004c033) list_medium_line_x2_t2_g3_g

0x0fd4,	// (0x0003ddcf) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0fd4,	// (0x0003ddcf) list_medium_line_x2_t2_g3_t1

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004c0cb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004c0cb) list_medium_line_x2_t2_g3_t

0x45c3,	// (0x000413be) main_sp_fs_list_pane_ParamLimits

0x45c3,	// (0x000413be) main_sp_fs_list_pane

0x45cf,	// (0x000413ca) sp_fs_scroll_pane_ParamLimits

0x45cf,	// (0x000413ca) sp_fs_scroll_pane

0x0fe9,	// (0x0003dde4) list_medium_line_x2_t3_t1

0x0ff9,	// (0x0003ddf4) list_medium_line_x2_t3_t2

0x1007,	// (0x0003de02) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004c116) list_medium_line_x2_t3_t

0x1015,	// (0x0003de10) list_medium_line_x3_t4_t1

0x1025,	// (0x0003de20) list_medium_line_x3_t4_t2

0x1033,	// (0x0003de2e) list_medium_line_x3_t4_t3

0x1007,	// (0x0003de02) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004c11d) list_medium_line_x3_t4_t

0x1041,	// (0x0003de3c) list_medium_line_x4_t5_t1

0x1051,	// (0x0003de4c) list_medium_line_x4_t5_t2

0x1033,	// (0x0003de2e) list_medium_line_x4_t5_t3

0x105f,	// (0x0003de5a) list_medium_line_x4_t5_t4

0x1007,	// (0x0003de02) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004c126) list_medium_line_x4_t5_t

0x0eab,	// (0x0003dca6) list_medium_line_t4_g4_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_t4_g4_g1

0x0f5c,	// (0x0003dd57) list_medium_line_t4_g4_g2_ParamLimits

0x0f5c,	// (0x0003dd57) list_medium_line_t4_g4_g2

0x106d,	// (0x0003de68) list_medium_line_t4_g4_g3_ParamLimits

0x106d,	// (0x0003de68) list_medium_line_t4_g4_g3

0x0ec3,	// (0x0003dcbe) list_medium_line_t4_g4_g4_ParamLimits

0x0ec3,	// (0x0003dcbe) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004c131) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004c131) list_medium_line_t4_g4_g

0x1079,	// (0x0003de74) list_medium_line_t4_g4_t1_ParamLimits

0x1079,	// (0x0003de74) list_medium_line_t4_g4_t1

0x108e,	// (0x0003de89) list_medium_line_t4_g4_t2_ParamLimits

0x108e,	// (0x0003de89) list_medium_line_t4_g4_t2

0x10a3,	// (0x0003de9e) list_medium_line_t4_g4_t3_ParamLimits

0x10a3,	// (0x0003de9e) list_medium_line_t4_g4_t3

0x0ef6,	// (0x0003dcf1) list_medium_line_t4_g4_t4_ParamLimits

0x0ef6,	// (0x0003dcf1) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004c13a) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004c13a) list_medium_line_t4_g4_t

0x46dc,	// (0x000414d7) chi_dic_find_pane_g1

0x554b,	// (0x00042346) main_tport_pane

0x135c,	// (0x0003e157) list_medium_line_plain_t1

0x136a,	// (0x0003e165) list_medium_line_t2_g2_g1_ParamLimits

0x136a,	// (0x0003e165) list_medium_line_t2_g2_g1

0x1376,	// (0x0003e171) list_medium_line_t2_g2_g2_ParamLimits

0x1376,	// (0x0003e171) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004c7fb) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004c7fb) list_medium_line_t2_g2_g

0x1382,	// (0x0003e17d) list_medium_line_t2_g2_t1_ParamLimits

0x1382,	// (0x0003e17d) list_medium_line_t2_g2_t1

0x139c,	// (0x0003e197) list_medium_line_t2_g2_t2_ParamLimits

0x139c,	// (0x0003e197) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004c800) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004c800) list_medium_line_t2_g2_t

0x15bc,	// (0x0003e3b7) aid_sp_fs_list_icon_a_sm

0x15c4,	// (0x0003e3bf) aid_sp_fs_list_icon_d

0x15cc,	// (0x0003e3c7) aid_sp_fs_text_primary

0xe866,	// (0x0004b661) aid_sp_fs_text_secondary

0x845a,	// (0x00045255) list_medium_line

0x845a,	// (0x00045255) list_medium_line_g2

0x845a,	// (0x00045255) list_medium_line_g3

0x845a,	// (0x00045255) list_medium_line_plain

0x845a,	// (0x00045255) list_medium_line_plain_t2

0x845a,	// (0x00045255) list_medium_line_plain_t3

0x845a,	// (0x00045255) list_medium_line_right_icon

0x845a,	// (0x00045255) list_medium_line_right_iconx2

0x845a,	// (0x00045255) list_medium_line_t2

0x845a,	// (0x00045255) list_medium_line_t2_g2

0x845a,	// (0x00045255) list_medium_line_t2_g3

0x845a,	// (0x00045255) list_medium_line_t2_right_icon

0x845a,	// (0x00045255) list_medium_line_t2_right_iconx2

0x845a,	// (0x00045255) list_medium_line_t3

0x845a,	// (0x00045255) list_medium_line_t3_g2

0x845a,	// (0x00045255) list_medium_line_t3_g3

0x845a,	// (0x00045255) list_medium_line_t3_right_iconx2

0x15d5,	// (0x0003e3d0) list_medium_line_t4_g4

0x8463,	// (0x0004525e) list_medium_line_x2

0x8463,	// (0x0004525e) list_medium_line_x2_t2_g2

0x8463,	// (0x0004525e) list_medium_line_x2_t2_g3

0x8463,	// (0x0004525e) list_medium_line_x2_t2_g4

0x8463,	// (0x0004525e) list_medium_line_x2_t3

0x8463,	// (0x0004525e) list_medium_line_x2_t3_g2

0x8463,	// (0x0004525e) list_medium_line_x2_t3_g3

0x8463,	// (0x0004525e) list_medium_line_x2_t3_g4

0x8463,	// (0x0004525e) list_medium_line_x2_t4_g2

0x8463,	// (0x0004525e) list_medium_line_x2_t4_g4

0x15de,	// (0x0003e3d9) list_medium_line_x3

0x15de,	// (0x0003e3d9) list_medium_line_x3_t4

0x15de,	// (0x0003e3d9) list_medium_line_x3_t4_g4

0x15d5,	// (0x0003e3d0) list_medium_line_x4_t4

0x15d5,	// (0x0003e3d0) list_medium_line_x4_t4_g7

0x15d5,	// (0x0003e3d0) list_medium_line_x4_t5

0x15e7,	// (0x0003e3e2) list_single_fs_dyc_pane_ParamLimits

0x15e7,	// (0x0003e3e2) list_single_fs_dyc_pane

0x0eab,	// (0x0003dca6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x4_t4_g7_g1

0x1603,	// (0x0003e3fe) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1603,	// (0x0003e3fe) list_medium_line_x4_t4_g7_g2

0x160f,	// (0x0003e40a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x160f,	// (0x0003e40a) list_medium_line_x4_t4_g7_g3

0x161e,	// (0x0003e419) list_medium_line_x4_t4_g7_g4_ParamLimits

0x161e,	// (0x0003e419) list_medium_line_x4_t4_g7_g4

0x162a,	// (0x0003e425) list_medium_line_x4_t4_g7_g5_ParamLimits

0x162a,	// (0x0003e425) list_medium_line_x4_t4_g7_g5

0x1639,	// (0x0003e434) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1639,	// (0x0003e434) list_medium_line_x4_t4_g7_g6

0x1648,	// (0x0003e443) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1648,	// (0x0003e443) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0004c9cb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0004c9cb) list_medium_line_x4_t4_g7_g

0x1654,	// (0x0003e44f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1654,	// (0x0003e44f) list_medium_line_x4_t4_g7_t1

0x1669,	// (0x0003e464) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1669,	// (0x0003e464) list_medium_line_x4_t4_g7_t2

0x167e,	// (0x0003e479) list_medium_line_x4_t4_g7_t3_ParamLimits

0x167e,	// (0x0003e479) list_medium_line_x4_t4_g7_t3

0x1693,	// (0x0003e48e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1693,	// (0x0003e48e) list_medium_line_x4_t4_g7_t4

0x16a5,	// (0x0003e4a0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x16a5,	// (0x0003e4a0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0004c9da) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0004c9da) list_medium_line_x4_t4_g7_t

0x16b7,	// (0x0003e4b2) list_single_dyc_row_pane_ParamLimits

0x16b7,	// (0x0003e4b2) list_single_dyc_row_pane

0x9182,	// (0x00045f7d) call5_gesture_pane_ParamLimits

0x9182,	// (0x00045f7d) call5_gesture_pane

0x91b6,	// (0x00045fb1) call5_windows_pane_ParamLimits

0x91b6,	// (0x00045fb1) call5_windows_pane

0x9228,	// (0x00046023) call5_swipe_1_pane_cp_ParamLimits

0x9228,	// (0x00046023) call5_swipe_1_pane_cp

0x9234,	// (0x0004602f) call5_swipe_2_pane_cp_ParamLimits

0x9234,	// (0x0004602f) call5_swipe_2_pane_cp

0xa9c6,	// (0x000477c1) call5_image_pane_cp

0x9240,	// (0x0004603b) popup_call5_audio_first_window_cp_ParamLimits

0x9240,	// (0x0004603b) popup_call5_audio_first_window_cp

0xe67d,	// (0x0004b478) call5_swipe_1_pane_g1_cp_ParamLimits

0xe67d,	// (0x0004b478) call5_swipe_1_pane_g1_cp

0xe6bd,	// (0x0004b4b8) call5_swipe_1_pane_g2_cp

0xe696,	// (0x0004b491) call5_swipe_1_pane_t1_cp_ParamLimits

0xe696,	// (0x0004b491) call5_swipe_1_pane_t1_cp

0xe67d,	// (0x0004b478) call5_swipe_2_pane_g1_cp_ParamLimits

0xe67d,	// (0x0004b478) call5_swipe_2_pane_g1_cp

0xe6c5,	// (0x0004b4c0) call5_swipe_2_pane_g2_cp

0xe6cd,	// (0x0004b4c8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cd,	// (0x0004b4c8) call5_swipe_2_pane_t1_cp

0xb086,	// (0x00047e81) main_sp_fs_email_pane

0xe6e2,	// (0x0004b4dd) main_sp_fs_listscroll_pane_te

0x174e,	// (0x0003e549) popup_sp_fs_action_menu_pane_ParamLimits

0x174e,	// (0x0003e549) popup_sp_fs_action_menu_pane

0xcc49,	// (0x00049a44) bg_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x0004b4e6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f4,	// (0x0004b4ef) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fd,	// (0x0004b4f8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc49,	// (0x00049a44) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0004cac8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca25,	// (0x00049820) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca25,	// (0x00049820) bg_sp_fs_ctrlbar_ddmenu_pane

0xe706,	// (0x0004b501) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe706,	// (0x0004b501) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe712,	// (0x0004b50d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe712,	// (0x0004b50d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0004cad1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0004cad1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71e,	// (0x0004b519) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71e,	// (0x0004b519) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1790,	// (0x0003e58b) list_medium_line_t2_right_icon_g1

0x1798,	// (0x0003e593) list_medium_line_t2_right_icon_t1

0x17a8,	// (0x0003e5a3) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0004cad6) list_medium_line_t2_right_icon_t

0xc838,	// (0x00049633) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc838,	// (0x00049633) bg_sp_fs_ctrlbar_pane

0x92a5,	// (0x000460a0) main_sp_fs_ctrlbar_button_pane_cp01

0x92ad,	// (0x000460a8) main_sp_fs_ctrlbar_ddmenu_pane

0xe770,	// (0x0004b56b) main_sp_fs_ctrlbar_pane_g1

0xe77c,	// (0x0004b577) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0004cadb) main_sp_fs_ctrlbar_pane_g

0xe788,	// (0x0004b583) main_sp_fs_ctrlbar_pane_t1

0x92b7,	// (0x000460b2) main_sp_fs_ctrlbar_pane

0x92cd,	// (0x000460c8) main_sp_fs_listscroll_pane_te_cp01

0x17b6,	// (0x0003e5b1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x17b6,	// (0x0003e5b1) popup_sp_fs_action_menu_pane_cp01

0xb086,	// (0x00047e81) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb086,	// (0x00047e81) bg_sp_fs_highlight_list_pane_cp01

0x17e0,	// (0x0003e5db) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x17e0,	// (0x0003e5db) sp_fs_action_menu_list_gene_pane_g1

0xe7b8,	// (0x0004b5b3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7b8,	// (0x0004b5b3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0004cae5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0004cae5) sp_fs_action_menu_list_gene_pane_g

0x17ef,	// (0x0003e5ea) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x17ef,	// (0x0003e5ea) sp_fs_action_menu_list_gene_pane_t1

0x1807,	// (0x0003e602) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1807,	// (0x0003e602) sp_fs_action_menu_list_gene_pane

0xe7c5,	// (0x0004b5c0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7c5,	// (0x0004b5c0) popup_sp_fs_action_menu_bg_pane

0x1826,	// (0x0003e621) sp_fs_action_menu_list_pane_ParamLimits

0x1826,	// (0x0003e621) sp_fs_action_menu_list_pane

0xa60b,	// (0x00047406) sp_fs_scroll_pane_cp01_ParamLimits

0xa60b,	// (0x00047406) sp_fs_scroll_pane_cp01

0x1846,	// (0x0003e641) list_medium_line_plain_t2_t1

0x1856,	// (0x0003e651) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004caea) list_medium_line_plain_t2_t

0x1864,	// (0x0003e65f) list_medium_line_plain_t3_t1

0x1874,	// (0x0003e66f) list_medium_line_plain_t3_t2

0x1882,	// (0x0003e67d) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0004caef) list_medium_line_plain_t3_t

0x0eab,	// (0x0003dca6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x2_t2_g2_g1

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004c041) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004c041) list_medium_line_x2_t2_g2_g

0x1079,	// (0x0003de74) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1079,	// (0x0003de74) list_medium_line_x2_t2_g2_t1

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0004caf6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0004caf6) list_medium_line_x2_t2_g2_t

0x0eab,	// (0x0003dca6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x2_t4_g2_g1

0x1890,	// (0x0003e68b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1890,	// (0x0003e68b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004cafb) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004cafb) list_medium_line_x2_t4_g2_g

0x18a2,	// (0x0003e69d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x18a2,	// (0x0003e69d) list_medium_line_x2_t4_g2_t1

0x18bc,	// (0x0003e6b7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x18bc,	// (0x0003e6b7) list_medium_line_x2_t4_g2_t2

0x18d2,	// (0x0003e6cd) list_medium_line_x2_t4_g2_t3_ParamLimits

0x18d2,	// (0x0003e6cd) list_medium_line_x2_t4_g2_t3

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0004cb00) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0004cb00) list_medium_line_x2_t4_g2_t

0x18e7,	// (0x0003e6e2) list_medium_line_t3_right_iconx2_g1

0x1790,	// (0x0003e58b) list_medium_line_t3_right_iconx2_g2

0x18ef,	// (0x0003e6ea) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004cb09) list_medium_line_t3_right_iconx2_g

0x18f7,	// (0x0003e6f2) list_medium_line_t3_right_iconx2_t1

0x1907,	// (0x0003e702) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0004cb10) list_medium_line_t3_right_iconx2_t

0x0eab,	// (0x0003dca6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x3_t4_g4_g1

0x0eb7,	// (0x0003dcb2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0eb7,	// (0x0003dcb2) list_medium_line_x3_t4_g4_g2

0x0f5c,	// (0x0003dd57) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f5c,	// (0x0003dd57) list_medium_line_x3_t4_g4_g3

0x1915,	// (0x0003e710) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1915,	// (0x0003e710) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0004cb15) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0004cb15) list_medium_line_x3_t4_g4_g

0x1921,	// (0x0003e71c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1921,	// (0x0003e71c) list_medium_line_x3_t4_g4_t1

0x1938,	// (0x0003e733) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1938,	// (0x0003e733) list_medium_line_x3_t4_g4_t2

0x108e,	// (0x0003de89) list_medium_line_x3_t4_g4_t3_ParamLimits

0x108e,	// (0x0003de89) list_medium_line_x3_t4_g4_t3

0x194d,	// (0x0003e748) list_medium_line_x3_t4_g4_t4_ParamLimits

0x194d,	// (0x0003e748) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0004cb1e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0004cb1e) list_medium_line_x3_t4_g4_t

0x196a,	// (0x0003e765) list_single_dyc_row_text_pane_t1_ParamLimits

0x196a,	// (0x0003e765) list_single_dyc_row_text_pane_t1

0x19a1,	// (0x0003e79c) list_single_dyc_row_text_pane_t2_ParamLimits

0x19a1,	// (0x0003e79c) list_single_dyc_row_text_pane_t2

0x1a17,	// (0x0003e812) list_single_dyc_row_text_pane_t3_ParamLimits

0x1a17,	// (0x0003e812) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0004cb27) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0004cb27) list_single_dyc_row_text_pane_t

0x1ae8,	// (0x0003e8e3) list_single_dyc_row_pane_g1_ParamLimits

0x1ae8,	// (0x0003e8e3) list_single_dyc_row_pane_g1

0x1af4,	// (0x0003e8ef) list_single_dyc_row_pane_g2_ParamLimits

0x1af4,	// (0x0003e8ef) list_single_dyc_row_pane_g2

0x1b00,	// (0x0003e8fb) list_single_dyc_row_pane_g3_ParamLimits

0x1b00,	// (0x0003e8fb) list_single_dyc_row_pane_g3

0x1b0c,	// (0x0003e907) list_single_dyc_row_pane_g4_ParamLimits

0x1b0c,	// (0x0003e907) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004cb34) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004cb34) list_single_dyc_row_pane_g

0x1b18,	// (0x0003e913) list_single_dyc_row_text_pane_ParamLimits

0x1b18,	// (0x0003e913) list_single_dyc_row_text_pane

0xa090,	// (0x00046e8b) bg_sp_fs_scroll_pane

0xe7d3,	// (0x0004b5ce) thumb_sp_fs_scroll_pane

0x136a,	// (0x0003e165) list_medium_line_g1_ParamLimits

0x136a,	// (0x0003e165) list_medium_line_g1

0x1b37,	// (0x0003e932) list_medium_line_t1_ParamLimits

0x1b37,	// (0x0003e932) list_medium_line_t1

0x0eab,	// (0x0003dca6) list_medium_line_x2_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x2_g1

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_g2_ParamLimits

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004cb3d) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004cb3d) list_medium_line_x2_g

0x1b4c,	// (0x0003e947) list_medium_line_x2_t1_ParamLimits

0x1b4c,	// (0x0003e947) list_medium_line_x2_t1

0x0eab,	// (0x0003dca6) list_medium_line_x3_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x3_g1

0x0eb7,	// (0x0003dcb2) list_medium_line_x3_g2_ParamLimits

0x0eb7,	// (0x0003dcb2) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004cb3d) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004cb3d) list_medium_line_x3_g

0x1b4c,	// (0x0003e947) list_medium_line_x3_t1_ParamLimits

0x1b4c,	// (0x0003e947) list_medium_line_x3_t1

0xe7dc,	// (0x0004b5d7) thumb_sp_fs_scroll_pane_g1

0xe7e5,	// (0x0004b5e0) thumb_sp_fs_scroll_pane_g2

0xe7ee,	// (0x0004b5e9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004cb42) thumb_sp_fs_scroll_pane_g

0xe7dc,	// (0x0004b5d7) bg_sp_fs_scroll_pane_g1

0xe7e5,	// (0x0004b5e0) bg_sp_fs_scroll_pane_g2

0xe7ee,	// (0x0004b5e9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004cb42) bg_sp_fs_scroll_pane_g

0x0eab,	// (0x0003dca6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0eab,	// (0x0003dca6) list_medium_line_x2_t3_g4_g1

0x0f50,	// (0x0003dd4b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0f50,	// (0x0003dd4b) list_medium_line_x2_t3_g4_g2

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0eb7,	// (0x0003dcb2) list_medium_line_x2_t3_g4_g3

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0ec3,	// (0x0003dcbe) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004c0bd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004c0bd) list_medium_line_x2_t3_g4_g

0x1b62,	// (0x0003e95d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1b62,	// (0x0003e95d) list_medium_line_x2_t3_g4_t1

0x1b78,	// (0x0003e973) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1b78,	// (0x0003e973) list_medium_line_x2_t3_g4_t2

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ef6,	// (0x0003dcf1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004cb49) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004cb49) list_medium_line_x2_t3_g4_t

0x136a,	// (0x0003e165) list_medium_line_g2_g1_ParamLimits

0x136a,	// (0x0003e165) list_medium_line_g2_g1

0x1376,	// (0x0003e171) list_medium_line_g2_g2_ParamLimits

0x1376,	// (0x0003e171) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004c7fb) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004c7fb) list_medium_line_g2_g

0x1b91,	// (0x0003e98c) list_medium_line_g2_t1_ParamLimits

0x1b91,	// (0x0003e98c) list_medium_line_g2_t1

0x136a,	// (0x0003e165) list_medium_line_t3_g2_g1_ParamLimits

0x136a,	// (0x0003e165) list_medium_line_t3_g2_g1

0x1376,	// (0x0003e171) list_medium_line_t3_g2_g2_ParamLimits

0x1376,	// (0x0003e171) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004c7fb) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004c7fb) list_medium_line_t3_g2_g

0x1ba6,	// (0x0003e9a1) list_medium_line_t3_g2_t1_ParamLimits

0x1ba6,	// (0x0003e9a1) list_medium_line_t3_g2_t1

0x1bc0,	// (0x0003e9bb) list_medium_line_t3_g2_t2_ParamLimits

0x1bc0,	// (0x0003e9bb) list_medium_line_t3_g2_t2

0x1bd6,	// (0x0003e9d1) list_medium_line_t3_g2_t3_ParamLimits

0x1bd6,	// (0x0003e9d1) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004cb50) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004cb50) list_medium_line_t3_g2_t

0x1790,	// (0x0003e58b) list_medium_line_right_icon_g1

0x1beb,	// (0x0003e9e6) list_medium_line_right_icon_t1

0x136a,	// (0x0003e165) list_medium_line_t2_g1_ParamLimits

0x136a,	// (0x0003e165) list_medium_line_t2_g1

0x1bf9,	// (0x0003e9f4) list_medium_line_t2_t1_ParamLimits

0x1bf9,	// (0x0003e9f4) list_medium_line_t2_t1

0x1c13,	// (0x0003ea0e) list_medium_line_t2_t2_ParamLimits

0x1c13,	// (0x0003ea0e) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004cb57) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004cb57) list_medium_line_t2_t

0x136a,	// (0x0003e165) list_medium_line_t3_g1_ParamLimits

0x136a,	// (0x0003e165) list_medium_line_t3_g1

0x1c28,	// (0x0003ea23) list_medium_line_t3_t1_ParamLimits

0x1c28,	// (0x0003ea23) list_medium_line_t3_t1

0x1c42,	// (0x0003ea3d) list_medium_line_t3_t2_ParamLimits

0x1c42,	// (0x0003ea3d) list_medium_line_t3_t2

0x1c58,	// (0x0003ea53) list_medium_line_t3_t3_ParamLimits

0x1c58,	// (0x0003ea53) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004cb5c) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004cb5c) list_medium_line_t3_t

0x136a,	// (0x0003e165) list_medium_line_g3_g1_ParamLimits

0x136a,	// (0x0003e165) list_medium_line_g3_g1

0x1c6d,	// (0x0003ea68) list_medium_line_g3_g2_ParamLimits

0x1c6d,	// (0x0003ea68) list_medium_line_g3_g2

0x1376,	// (0x0003e171) list_medium_line_g3_g3_ParamLimits

0x1376,	// (0x0003e171) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004cb63) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004cb63) list_medium_line_g3_g

0x1c79,	// (0x0003ea74) list_medium_line_g3_t1_ParamLimits

0x1c79,	// (0x0003ea74) list_medium_line_g3_t1

0x136a,	// (0x0003e165) list_medium_line_t2_g3_g1_ParamLimits

0x136a,	// (0x0003e165) list_medium_line_t2_g3_g1

0x1c6d,	// (0x0003ea68) list_medium_line_t2_g3_g2_ParamLimits

0x1c6d,	// (0x0003ea68) list_medium_line_t2_g3_g2

0x1376,	// (0x0003e171) list_medium_line_t2_g3_g3_ParamLimits

0x1376,	// (0x0003e171) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004cb63) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004cb63) list_medium_line_t2_g3_g

0x1c8e,	// (0x0003ea89) list_medium_line_t2_g3_t1_ParamLimits

0x1c8e,	// (0x0003ea89) list_medium_line_t2_g3_t1

0x1ca8,	// (0x0003eaa3) list_medium_line_t2_g3_t2_ParamLimits

0x1ca8,	// (0x0003eaa3) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004cb6a) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004cb6a) list_medium_line_t2_g3_t

0x136a,	// (0x0003e165) list_medium_line_t3_g3_g1_ParamLimits

0x136a,	// (0x0003e165) list_medium_line_t3_g3_g1

0x1c6d,	// (0x0003ea68) list_medium_line_t3_g3_g2_ParamLimits

0x1c6d,	// (0x0003ea68) list_medium_line_t3_g3_g2

0x1376,	// (0x0003e171) list_medium_line_t3_g3_g3_ParamLimits

0x1376,	// (0x0003e171) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004cb63) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004cb63) list_medium_line_t3_g3_g

0x1cbe,	// (0x0003eab9) list_medium_line_t3_g3_t1_ParamLimits

0x1cbe,	// (0x0003eab9) list_medium_line_t3_g3_t1

0x1cd2,	// (0x0003eacd) list_medium_line_t3_g3_t2_ParamLimits

0x1cd2,	// (0x0003eacd) list_medium_line_t3_g3_t2

0x1ce4,	// (0x0003eadf) list_medium_line_t3_g3_t3_ParamLimits

0x1ce4,	// (0x0003eadf) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004cb6f) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004cb6f) list_medium_line_t3_g3_t

0x18e7,	// (0x0003e6e2) list_medium_line_right_iconx2_g1

0x1790,	// (0x0003e58b) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004cb76) list_medium_line_right_iconx2_g

0x1cf6,	// (0x0003eaf1) list_medium_line_right_iconx2_t1

0x18e7,	// (0x0003e6e2) list_medium_line_t2_right_iconx2_g1

0x1790,	// (0x0003e58b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004cb76) list_medium_line_t2_right_iconx2_g

0x1d04,	// (0x0003eaff) list_medium_line_t2_right_iconx2_t1

0x1d14,	// (0x0003eb0f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004cb7b) list_medium_line_t2_right_iconx2_t

0x1d22,	// (0x0003eb1d) list_medium_line_x4_t4_t1

0x1d30,	// (0x0003eb2b) list_medium_line_x4_t4_t2

0x1d40,	// (0x0003eb3b) list_medium_line_x4_t4_t3

0x1d50,	// (0x0003eb4b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004cb80) list_medium_line_x4_t4_t

0x9308,	// (0x00046103) tport_appsw_pane_ParamLimits

0x9308,	// (0x00046103) tport_appsw_pane

0x9316,	// (0x00046111) tport_contact_pane_ParamLimits

0x9316,	// (0x00046111) tport_contact_pane

0x9326,	// (0x00046121) tport_listscroll_pane_ParamLimits

0x9326,	// (0x00046121) tport_listscroll_pane

0x9336,	// (0x00046131) cell_tport_appsw_pane_ParamLimits

0x9336,	// (0x00046131) cell_tport_appsw_pane

0xcf31,	// (0x00049d2c) tport_appsw_pane_g1_ParamLimits

0xcf31,	// (0x00049d2c) tport_appsw_pane_g1

0xe7f7,	// (0x0004b5f2) tport_contact_pane_g1

0xe18c,	// (0x0004af87) tport_contact_pane_t1

0xe800,	// (0x0004b5fb) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004cb89) tport_contact_pane_t

0xe80e,	// (0x0004b609) list_tport_pane

0xe817,	// (0x0004b612) scroll_pane_cp_030

0x9369,	// (0x00046164) cell_tport_appsw_pane_g1

0x9379,	// (0x00046174) cell_tport_appsw_pane_t1

0x9387,	// (0x00046182) grid_highlight_pane_cp019

0x938f,	// (0x0004618a) list_tport_double_graphic_pane_ParamLimits

0x938f,	// (0x0004618a) list_tport_double_graphic_pane

0xb086,	// (0x00047e81) list_highlight_pane_cp023_ParamLimits

0xb086,	// (0x00047e81) list_highlight_pane_cp023

0x93a0,	// (0x0004619b) list_tport_double_graphic_pane_g1_ParamLimits

0x93a0,	// (0x0004619b) list_tport_double_graphic_pane_g1

0x93ad,	// (0x000461a8) list_tport_double_graphic_pane_t1_ParamLimits

0x93ad,	// (0x000461a8) list_tport_double_graphic_pane_t1

0x93c2,	// (0x000461bd) list_tport_double_graphic_pane_t2_ParamLimits

0x93c2,	// (0x000461bd) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004cb95) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004cb95) list_tport_double_graphic_pane_t

0xa090,	// (0x00046e8b) main_cale_note_pane

0x7788,	// (0x00044583) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7788,	// (0x00044583) cell_vitu2_function_top_wide_pane_cp01

0x8ed1,	// (0x00045ccc) wait_bar_pane_cp05_ParamLimits

0xb086,	// (0x00047e81) listscroll_cmail_pane

0xe820,	// (0x0004b61b) list_cmail_pane

0x93d4,	// (0x000461cf) list_cmail_body_pane

0x93f4,	// (0x000461ef) list_single_cmail_header_caption_pane

0x941f,	// (0x0004621a) list_single_cmail_header_detail_pane_ParamLimits

0x941f,	// (0x0004621a) list_single_cmail_header_detail_pane

0xe830,	// (0x0004b62b) list_single_cmail_header_caption_pane_t1

0x1d60,	// (0x0003eb5b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1d60,	// (0x0003eb5b) list_single_cmail_header_detail_pane_g1

0x1d76,	// (0x0003eb71) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1d76,	// (0x0003eb71) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004cb9a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004cb9a) list_single_cmail_header_detail_pane_g

0x1d82,	// (0x0003eb7d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1d82,	// (0x0003eb7d) list_single_cmail_header_detail_pane_t1

0x1de2,	// (0x0003ebdd) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1de2,	// (0x0003ebdd) list_single_cmail_header_editor_pane_bg

0xe32d,	// (0x0004b128) list_cmail_body_pane_g1

0xe86f,	// (0x0004b66a) list_cmail_body_pane_t1

0xd6d6,	// (0x0004a4d1) list_single_cmail_header_editor_pane_bg_g1

0xac1f,	// (0x00047a1a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6e6,	// (0x0004a4e1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6de,	// (0x0004a4d9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd931,	// (0x0004a72c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd706,	// (0x0004a501) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6f6,	// (0x0004a4f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6fe,	// (0x0004a4f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabff,	// (0x000479fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9455,	// (0x00046250) calenote_gesture_pane_ParamLimits

0x9455,	// (0x00046250) calenote_gesture_pane

0x946f,	// (0x0004626a) calenote_window_pane_ParamLimits

0x946f,	// (0x0004626a) calenote_window_pane

0xe87d,	// (0x0004b678) popup_note_window_cp01

0x9487,	// (0x00046282) calenote_swipe_1_pane_ParamLimits

0x9487,	// (0x00046282) calenote_swipe_1_pane

0x9234,	// (0x0004602f) calenote_swipe_2_pane_ParamLimits

0x9234,	// (0x0004602f) calenote_swipe_2_pane

0xe67d,	// (0x0004b478) calenote_swipe_1_pane_g1_ParamLimits

0xe67d,	// (0x0004b478) calenote_swipe_1_pane_g1

0xe68a,	// (0x0004b485) calenote_swipe_1_pane_g2_ParamLimits

0xe68a,	// (0x0004b485) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0004cabe) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0004cabe) calenote_swipe_1_pane_g

0xe88f,	// (0x0004b68a) calenote_swipe_1_pane_t1_ParamLimits

0xe88f,	// (0x0004b68a) calenote_swipe_1_pane_t1

0xe67d,	// (0x0004b478) calenote_swipe_2_pane_g1_ParamLimits

0xe67d,	// (0x0004b478) calenote_swipe_2_pane_g1

0xe8ae,	// (0x0004b6a9) calenote_swipe_2_pane_g2_ParamLimits

0xe8ae,	// (0x0004b6a9) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004cba6) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004cba6) calenote_swipe_2_pane_g

0xe8ba,	// (0x0004b6b5) calenote_swipe_2_pane_t1_ParamLimits

0xe8ba,	// (0x0004b6b5) calenote_swipe_2_pane_t1

0xa090,	// (0x00046e8b) main_mup_navstr_pane

0x6503,	// (0x000432fe) main_mup3_pane_t7_ParamLimits

0x6503,	// (0x000432fe) main_mup3_pane_t7

0x6f08,	// (0x00043d03) main_mp4_pane_g6_ParamLimits

0x6f08,	// (0x00043d03) main_mp4_pane_g6

0x727a,	// (0x00044075) main_image3_pane_t4_ParamLimits

0x727a,	// (0x00044075) main_image3_pane_t4

0x949a,	// (0x00046295) popup_navstr_preview_pane_ParamLimits

0x949a,	// (0x00046295) popup_navstr_preview_pane

0x94a6,	// (0x000462a1) scroll_navstr_pane_ParamLimits

0x94a6,	// (0x000462a1) scroll_navstr_pane

0xa090,	// (0x00046e8b) bg_popup_preview_window_pane_cp04

0xe8e1,	// (0x0004b6dc) popup_navstr_preview_pane_t1

0x94b2,	// (0x000462ad) scroll_navstr_pane_g1_ParamLimits

0x94b2,	// (0x000462ad) scroll_navstr_pane_g1

0x94bf,	// (0x000462ba) scroll_navstr_pane_t1_ParamLimits

0x94bf,	// (0x000462ba) scroll_navstr_pane_t1

0xe886,	// (0x0004b681) bg_button_pane_cp014

0xe886,	// (0x0004b681) bg_button_pane_cp030

0x16f4,	// (0x0003e4ef) list_double_fisheye_pane_g4_ParamLimits

0x16f4,	// (0x0003e4ef) list_double_fisheye_pane_g4

0x1700,	// (0x0003e4fb) list_double_fisheye_pane_g5_ParamLimits

0x1700,	// (0x0003e4fb) list_double_fisheye_pane_g5

0xd47c,	// (0x0004a277) sp_fs_scroll_pane_cp03

0xe770,	// (0x0004b56b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe77c,	// (0x0004b577) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0004cadb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe788,	// (0x0004b583) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe828,	// (0x0004b623) sp_fs_scroll_pane_cp02

0xa905,	// (0x00047700) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa905,	// (0x00047700) popup_sp_fs_calendar_preview_list_single_pane

0xa090,	// (0x00046e8b) main_cam6_pano_pane

0xb086,	// (0x00047e81) main_mup3_pane_ParamLimits

0xa090,	// (0x00046e8b) main_phacti_pane

0x8da6,	// (0x00045ba1) bg_button_pane_cp11

0x8dbe,	// (0x00045bb9) main_mobtv_info_pane_g2_ParamLimits

0x8dbe,	// (0x00045bb9) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0004ca3b) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0004ca3b) main_mobtv_info_pane_g

0x8f70,	// (0x00045d6b) sc_clock_pane_t5_ParamLimits

0x8f70,	// (0x00045d6b) sc_clock_pane_t5

0x9013,	// (0x00045e0e) main_radioblah_pane_g1_ParamLimits

0xe5c9,	// (0x0004b3c4) main_radioblah_pane_t3_ParamLimits

0xe5c9,	// (0x0004b3c4) main_radioblah_pane_t3

0xe5e1,	// (0x0004b3dc) main_radioblah_pane_t4_ParamLimits

0xe5e1,	// (0x0004b3dc) main_radioblah_pane_t4

0x9031,	// (0x00045e2c) main_radioblah_text_pane_ParamLimits

0x9031,	// (0x00045e2c) main_radioblah_text_pane

0x903e,	// (0x00045e39) main_radioblah_info_pane_g1_ParamLimits

0x90d3,	// (0x00045ece) main_radioblah_info_pane_t4_ParamLimits

0x90d3,	// (0x00045ece) main_radioblah_info_pane_t4

0xb086,	// (0x00047e81) main_sp_fs_calendar_pane

0x94d1,	// (0x000462cc) main_phacti_pane_g1

0x94d9,	// (0x000462d4) phacti_note_pane_ParamLimits

0x94d9,	// (0x000462d4) phacti_note_pane

0xe8f8,	// (0x0004b6f3) phacti_term_pane_ParamLimits

0xe8f8,	// (0x0004b6f3) phacti_term_pane

0xe90d,	// (0x0004b708) phacti_note_pane_t1_ParamLimits

0xe90d,	// (0x0004b708) phacti_note_pane_t1

0x1df9,	// (0x0003ebf4) phacti_term_pane_g1

0x1e01,	// (0x0003ebfc) phacti_term_pane_t1_ParamLimits

0x1e01,	// (0x0003ebfc) phacti_term_pane_t1

0xe924,	// (0x0004b71f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa20,	// (0x0004781b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004cbb0) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x0004b727) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x0004b727) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x0004b73d) aid_popup_sp_fs_bg_corner_pane

0xcc49,	// (0x00049a44) popup_sp_fs_calendar_preview_bg_pane_g1

0xa090,	// (0x00046e8b) popup_sp_fs_calendar_preview_bg_pane

0xe94a,	// (0x0004b745) popup_sp_fs_calendar_preview_list_pane

0xc838,	// (0x00049633) bg_main_sp_fs_cale_pane_ParamLimits

0xc838,	// (0x00049633) bg_main_sp_fs_cale_pane

0x1e34,	// (0x0003ec2f) listscroll_cale_mrui_pane_ParamLimits

0x1e34,	// (0x0003ec2f) listscroll_cale_mrui_pane

0x1e49,	// (0x0003ec44) listscroll_sp_fs_schedule_track_pane

0x1e52,	// (0x0003ec4d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1e52,	// (0x0003ec4d) main_sp_fs_ctrlbar_pane_cp01

0xe952,	// (0x0004b74d) main_sp_fs_ribbon_pane

0x1e65,	// (0x0003ec60) popup_sp_fs_cale_preview_window

0x953c,	// (0x00046337) list_single_sp_fs_schedule_track_pane_ParamLimits

0x953c,	// (0x00046337) list_single_sp_fs_schedule_track_pane

0xd8c9,	// (0x0004a6c4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd8c9,	// (0x0004a6c4) bg_sp_fs_highlight_list_pane_cp03

0x955e,	// (0x00046359) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x955e,	// (0x00046359) list_single_sp_fs_schedule_track_pane_g1

0x956a,	// (0x00046365) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x956a,	// (0x00046365) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004cbb5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004cbb5) list_single_sp_fs_schedule_track_pane_g

0x9576,	// (0x00046371) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9576,	// (0x00046371) list_single_sp_fs_schedule_track_pane_t1

0x958e,	// (0x00046389) sp_fs_schedule_track_pane_ParamLimits

0x958e,	// (0x00046389) sp_fs_schedule_track_pane

0xe95a,	// (0x0004b755) sp_fs_schedule_track_pane_g1

0xe962,	// (0x0004b75d) sp_fs_schedule_track_pane_g2

0xe96a,	// (0x0004b765) sp_fs_schedule_track_pane_g3

0xe972,	// (0x0004b76d) sp_fs_schedule_track_pane_g4

0xe97a,	// (0x0004b775) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004cbba) sp_fs_schedule_track_pane_g

0xd6d6,	// (0x0004a4d1) bg_sp_fs_schedule_viewer_highlight_g1

0xac1f,	// (0x00047a1a) bg_sp_fs_schedule_viewer_highlight_g2

0xd6de,	// (0x0004a4d9) bg_sp_fs_schedule_viewer_highlight_g3

0xd6e6,	// (0x0004a4e1) bg_sp_fs_schedule_viewer_highlight_g4

0xd931,	// (0x0004a72c) bg_sp_fs_schedule_viewer_highlight_g5

0xd6f6,	// (0x0004a4f1) bg_sp_fs_schedule_viewer_highlight_g6

0xd6fe,	// (0x0004a4f9) bg_sp_fs_schedule_viewer_highlight_g7

0xd706,	// (0x0004a501) bg_sp_fs_schedule_viewer_highlight_g8

0xabff,	// (0x000479fa) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004cbc5) bg_sp_fs_schedule_viewer_highlight_g

0xa090,	// (0x00046e8b) bg_main_sp_fs_ribbon_pane

0x959e,	// (0x00046399) main_sp_fs_ribbon_pane_g1

0xe982,	// (0x0004b77d) main_sp_fs_ribbon_pane_t1

0x95a7,	// (0x000463a2) main_sp_fs_ribbon_pane_t2

0xe991,	// (0x0004b78c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004cbd8) main_sp_fs_ribbon_pane_t

0xe9a0,	// (0x0004b79b) main_sp_fs_ribbon_scheduler_pane

0xe9a8,	// (0x0004b7a3) bg_main_sp_fs_ribbon_pane_g1

0xe9b1,	// (0x0004b7ac) bg_main_sp_fs_ribbon_pane_g2

0xe9ba,	// (0x0004b7b5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004cbdf) bg_main_sp_fs_ribbon_pane_g

0xe9c2,	// (0x0004b7bd) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d3,	// (0x0004b7ce) main_sp_fs_ribbon_scheduler_pane_g2

0xe9dc,	// (0x0004b7d7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004cbe6) main_sp_fs_ribbon_scheduler_pane_g

0xe9e5,	// (0x0004b7e0) list_cale_mrui_pane

0x95b6,	// (0x000463b1) sp_fs_scroll_pane_cp07_ParamLimits

0x95b6,	// (0x000463b1) sp_fs_scroll_pane_cp07

0x95d2,	// (0x000463cd) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x95d2,	// (0x000463cd) bg_sp_fs_schedule_viewer_highlight

0xe9f2,	// (0x0004b7ed) list_single_sp_fs_schedule_track_pane_cp01

0xe9fa,	// (0x0004b7f5) list_sp_fs_schedule_track_pane

0xea02,	// (0x0004b7fd) sp_fs_scroll_pane_cp06_ParamLimits

0xea02,	// (0x0004b7fd) sp_fs_scroll_pane_cp06

0xcc49,	// (0x00049a44) bgmain_sp_fs_calendar_pane_g1

0x1e77,	// (0x0003ec72) list_single_cale_mrui_pane_ParamLimits

0x1e77,	// (0x0003ec72) list_single_cale_mrui_pane

0x1ea5,	// (0x0003eca0) list_single_cale_mrui_row_pane_ParamLimits

0x1ea5,	// (0x0003eca0) list_single_cale_mrui_row_pane

0x1eb2,	// (0x0003ecad) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1eb2,	// (0x0003ecad) list_single_cale_mrui_row_pane_g1

0x1eea,	// (0x0003ece5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1eea,	// (0x0003ece5) list_single_cale_mrui_row_pane_t1

0x1efc,	// (0x0003ecf7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1efc,	// (0x0003ecf7) list_single_cale_mrui_row_pane_t2

0x1f62,	// (0x0003ed5d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1f62,	// (0x0003ed5d) list_single_cale_mrui_row_pane_t3

0x1f91,	// (0x0003ed8c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1f91,	// (0x0003ed8c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004cbf4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004cbf4) list_single_cale_mrui_row_pane_t

0x1fc0,	// (0x0003edbb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1fc0,	// (0x0003edbb) list_single_cmail_header_editor_pane_bg_cp01

0x1fe0,	// (0x0003eddb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1fe0,	// (0x0003eddb) list_single_cmail_header_editor_pane_bg_cp02

0x95df,	// (0x000463da) main_radioblah_text_pane_t1_ParamLimits

0x95df,	// (0x000463da) main_radioblah_text_pane_t1

0xea21,	// (0x0004b81c) cam6_indi_pane_cp01

0xea29,	// (0x0004b824) cam6_mode_pane_cp01

0xea31,	// (0x0004b82c) cam6_pano_pane

0xea3a,	// (0x0004b835) cam6_zoom_pane_cp01

0xea42,	// (0x0004b83d) cam6_pano_image_pane

0xea4d,	// (0x0004b848) cam6_pano_pane_g1

0xe32d,	// (0x0004b128) cam6_pano_pane_g2

0xea56,	// (0x0004b851) cam6_pano_pane_g3

0xea5f,	// (0x0004b85a) cam6_pano_pane_g4

0xd22c,	// (0x0004a027) cam6_pano_pane_g5

0xea68,	// (0x0004b863) cam6_pano_pane_g6

0xe9cb,	// (0x0004b7c6) cam6_pano_pane_g7

0xea72,	// (0x0004b86d) cam6_pano_pane_g8

0xea7b,	// (0x0004b876) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004cbfd) cam6_pano_pane_g

0xa090,	// (0x00046e8b) main_browser_tag_pane

0xe8d9,	// (0x0004b6d4) grid_navstr_albumart_pane

0xea86,	// (0x0004b881) cell_navstr_albumart_pane_ParamLimits

0xea86,	// (0x0004b881) cell_navstr_albumart_pane

0xeaa6,	// (0x0004b8a1) cell_navstr_albumart_pane_g1

0xc649,	// (0x00049444) cell_navstr_albumart_pane_g2

0xc659,	// (0x00049454) cell_navstr_albumart_pane_g3

0xc651,	// (0x0004944c) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004cc10) cell_navstr_albumart_pane_g

0x95fa,	// (0x000463f5) bt_list_pane_ParamLimits

0x95fa,	// (0x000463f5) bt_list_pane

0x961a,	// (0x00046415) bt_list_pane_t1

0x9629,	// (0x00046424) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004cc19) bt_list_pane_t

0xa090,	// (0x00046e8b) main_cale_prevew_pane

0x9638,	// (0x00046433) popup_cale_preview_window_ParamLimits

0x9638,	// (0x00046433) popup_cale_preview_window

0xb086,	// (0x00047e81) bg_popup_preview_window_pane_cp05_ParamLimits

0xb086,	// (0x00047e81) bg_popup_preview_window_pane_cp05

0xeaae,	// (0x0004b8a9) list_cale_preview_pane_ParamLimits

0xeaae,	// (0x0004b8a9) list_cale_preview_pane

0x9651,	// (0x0004644c) list_double_cale_preview_pane_ParamLimits

0x9651,	// (0x0004644c) list_double_cale_preview_pane

0x9663,	// (0x0004645e) list_single_cale_preview_pane_ParamLimits

0x9663,	// (0x0004645e) list_single_cale_preview_pane

0x9679,	// (0x00046474) list_single_cale_preview_pane_g1

0x9681,	// (0x0004647c) list_single_cale_preview_pane_t1_ParamLimits

0x9681,	// (0x0004647c) list_single_cale_preview_pane_t1

0x9696,	// (0x00046491) list_double_cale_preview_pane_g1

0x969e,	// (0x00046499) list_double_cale_preview_pane_t1_ParamLimits

0x969e,	// (0x00046499) list_double_cale_preview_pane_t1

0x96b3,	// (0x000464ae) list_double_cale_preview_pane_t2_ParamLimits

0x96b3,	// (0x000464ae) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004cc1e) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004cc1e) list_double_cale_preview_pane_t

0xa090,	// (0x00046e8b) main_ezdial_pane

0xb086,	// (0x00047e81) main_sp_fs_email_pane_ParamLimits

0x924e,	// (0x00046049) cmail_ddmenu_btn01_pane_ParamLimits

0x924e,	// (0x00046049) cmail_ddmenu_btn01_pane

0x926b,	// (0x00046066) cmail_ddmenu_btn02_pane_ParamLimits

0x926b,	// (0x00046066) cmail_ddmenu_btn02_pane

0x9289,	// (0x00046084) cmail_ddmenu_btn03_pane_ParamLimits

0x9289,	// (0x00046084) cmail_ddmenu_btn03_pane

0x92b7,	// (0x000460b2) main_sp_fs_ctrlbar_pane_ParamLimits

0x92cd,	// (0x000460c8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x93d4,	// (0x000461cf) list_cmail_body_pane_ParamLimits

0xe83e,	// (0x0004b639) bg_button_pane_cp12

0xe847,	// (0x0004b642) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe847,	// (0x0004b642) list_single_cmail_header_detail_pane_g3

0x1dbe,	// (0x0003ebb9) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1dbe,	// (0x0003ebb9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004cba1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004cba1) list_single_cmail_header_detail_pane_t

0x1e16,	// (0x0003ec11) phacti_term_pane_t2_ParamLimits

0x1e16,	// (0x0003ec11) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004cbab) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004cbab) phacti_term_pane_t

0xeaba,	// (0x0004b8b5) aid_size_list_single_double

0x96cb,	// (0x000464c6) popup_ezdial_listscroll_window

0x96ec,	// (0x000464e7) popup_number_entry_window_cp01

0xa9c6,	// (0x000477c1) bg_popup_call_pane_cp09

0xeac6,	// (0x0004b8c1) ezdial_list_pane

0xeace,	// (0x0004b8c9) scroll_pane_cp23

0xca25,	// (0x00049820) bg_button_pane_cp028_ParamLimits

0xca25,	// (0x00049820) bg_button_pane_cp028

0x96fa,	// (0x000464f5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x96fa,	// (0x000464f5) cmail_ddmenu_btn01_pane_g1

0x970a,	// (0x00046505) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x970a,	// (0x00046505) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004cc23) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004cc23) cmail_ddmenu_btn01_pane_g

0xead6,	// (0x0004b8d1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead6,	// (0x0004b8d1) cmail_ddmenu_btn01_pane_t1

0xc838,	// (0x00049633) bg_button_pane_cp029_ParamLimits

0xc838,	// (0x00049633) bg_button_pane_cp029

0x970a,	// (0x00046505) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x970a,	// (0x00046505) cmail_ddmenu_btn02_pane_g1

0x9723,	// (0x0004651e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9723,	// (0x0004651e) cmail_ddmenu_btn02_pane_t1

0xd8c9,	// (0x0004a6c4) bg_button_pane_cp031_ParamLimits

0xd8c9,	// (0x0004a6c4) bg_button_pane_cp031

0x970a,	// (0x00046505) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x970a,	// (0x00046505) cmail_ddmenu_btn03_pane_g1

0x9723,	// (0x0004651e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9723,	// (0x0004651e) cmail_ddmenu_btn03_pane_t1

0x7125,	// (0x00043f20) cell_dialer2_keypad_pane_t1_ParamLimits

0x713f,	// (0x00043f3a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x713f,	// (0x00043f3a) cell_dialer2_keypad_pane_t1_copy1

0x8c2b,	// (0x00045a26) ncimui_group_button_pane

0xb086,	// (0x00047e81) main_sp_fs_calendar_pane_ParamLimits

0x93f4,	// (0x000461ef) list_single_cmail_header_caption_pane_ParamLimits

0x1e2b,	// (0x0003ec26) aid_recal_txt_sm_pane

0xa090,	// (0x00046e8b) mian_recal_day_pane

0x1e65,	// (0x0003ec60) popup_sp_fs_cale_preview_window_ParamLimits

0xeaeb,	// (0x0004b8e6) list_recal_day_pane

0x2017,	// (0x0003ee12) list_single_recal_day_pane_ParamLimits

0x2017,	// (0x0003ee12) list_single_recal_day_pane

0xeb12,	// (0x0004b90d) list_single_recal_day_pane_g1_ParamLimits

0xeb12,	// (0x0004b90d) list_single_recal_day_pane_g1

0x2029,	// (0x0003ee24) list_single_recal_day_pane_g2_ParamLimits

0x2029,	// (0x0003ee24) list_single_recal_day_pane_g2

0x2035,	// (0x0003ee30) list_single_recal_day_pane_g3_ParamLimits

0x2035,	// (0x0003ee30) list_single_recal_day_pane_g3

0x2041,	// (0x0003ee3c) list_single_recal_day_pane_g4_ParamLimits

0x2041,	// (0x0003ee3c) list_single_recal_day_pane_g4

0x204f,	// (0x0003ee4a) list_single_recal_day_pane_g5_ParamLimits

0x204f,	// (0x0003ee4a) list_single_recal_day_pane_g5

0x2065,	// (0x0003ee60) list_single_recal_day_pane_g6_ParamLimits

0x2065,	// (0x0003ee60) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004cc32) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004cc32) list_single_recal_day_pane_g

0x2079,	// (0x0003ee74) list_single_recal_day_pane_t1

0x208b,	// (0x0003ee86) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004cc3d) list_single_recal_day_pane_t

0x9747,	// (0x00046542) ncimui_query_button_pane_ParamLimits

0x9747,	// (0x00046542) ncimui_query_button_pane

0x9757,	// (0x00046552) ncimui_query_button_pane_t1_ParamLimits

0x9757,	// (0x00046552) ncimui_query_button_pane_t1

0xeb1e,	// (0x0004b919) ncimui_query_button_pane_t2_ParamLimits

0xeb1e,	// (0x0004b919) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004cc42) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004cc42) ncimui_query_button_pane_t

0x976a,	// (0x00046565) query_button_pane_ParamLimits

0x976a,	// (0x00046565) query_button_pane

0xa090,	// (0x00046e8b) bg_button_pane_cp0028

0xeb31,	// (0x0004b92c) query_button_pane_t1

0x554b,	// (0x00042346) main_tport_pane_ParamLimits

0x92de,	// (0x000460d9) bg_popup_window_pane_cp01_ParamLimits

0x92de,	// (0x000460d9) bg_popup_window_pane_cp01

0x92ec,	// (0x000460e7) heading_pane_cp08_ParamLimits

0x92ec,	// (0x000460e7) heading_pane_cp08

0x92fa,	// (0x000460f5) heading_pane_cp07_ParamLimits

0x92fa,	// (0x000460f5) heading_pane_cp07

0x9369,	// (0x00046164) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004cb8e) cell_tport_appsw_pane_g

0x10d4,	// (0x0003decf) input_candi_list_open_g1

0xade2,	// (0x00047bdd) list_cale_time_pane_g6_ParamLimits

0xade2,	// (0x00047bdd) list_cale_time_pane_g6

0x5fd0,	// (0x00042dcb) aid_size_touch_calib_1_ParamLimits

0x5fd0,	// (0x00042dcb) aid_size_touch_calib_1

0x5fdc,	// (0x00042dd7) aid_size_touch_calib_2_ParamLimits

0x5fdc,	// (0x00042dd7) aid_size_touch_calib_2

0x5fea,	// (0x00042de5) aid_size_touch_calib_3_ParamLimits

0x5fea,	// (0x00042de5) aid_size_touch_calib_3

0x5ffa,	// (0x00042df5) aid_size_touch_calib_4_ParamLimits

0x5ffa,	// (0x00042df5) aid_size_touch_calib_4

0x6008,	// (0x00042e03) main_touch_calib_button_group_pane_ParamLimits

0x6008,	// (0x00042e03) main_touch_calib_button_group_pane

0x6016,	// (0x00042e11) main_touch_calib_pane_g1_ParamLimits

0x6022,	// (0x00042e1d) main_touch_calib_pane_g2_ParamLimits

0x602e,	// (0x00042e29) main_touch_calib_pane_g3_ParamLimits

0x603a,	// (0x00042e35) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0004c54c) main_touch_calib_pane_g_ParamLimits

0x6046,	// (0x00042e41) main_touch_calib_pane_t1_ParamLimits

0x605f,	// (0x00042e5a) main_touch_calib_pane_t2_ParamLimits

0x6078,	// (0x00042e73) main_touch_calib_pane_t3_ParamLimits

0x608e,	// (0x00042e89) main_touch_calib_pane_t4_ParamLimits

0x60a4,	// (0x00042e9f) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0004c555) main_touch_calib_pane_t_ParamLimits

0xcfcc,	// (0x00049dc7) list_single_fp_cale_pane_g3_ParamLimits

0xcfcc,	// (0x00049dc7) list_single_fp_cale_pane_g3

0xb086,	// (0x00047e81) bg_button_pane_cp012_ParamLimits

0xb086,	// (0x00047e81) bg_vkb2_func_pane_cp03_ParamLimits

0x7edd,	// (0x00044cd8) cell_vitu2_function_top_pane_g1_ParamLimits

0xb086,	// (0x00047e81) bg_vkb2_func_pane_cp04_ParamLimits

0x8bb3,	// (0x000459ae) main_ncimui_button_group_pane_ParamLimits

0x8bb3,	// (0x000459ae) main_ncimui_button_group_pane

0x8c19,	// (0x00045a14) main_ncimui_pane_t3_ParamLimits

0x8c19,	// (0x00045a14) main_ncimui_pane_t3

0xe8ef,	// (0x0004b6ea) phacti_button_group_pane

0xeaba,	// (0x0004b8b5) aid_size_list_single_double_ParamLimits

0x96cb,	// (0x000464c6) popup_ezdial_listscroll_window_ParamLimits

0x96ec,	// (0x000464e7) popup_number_entry_window_cp01_ParamLimits

0x9777,	// (0x00046572) phacti_button_pane_ParamLimits

0x9777,	// (0x00046572) phacti_button_pane

0xa090,	// (0x00046e8b) bg_button_pane_cp14

0xeb3f,	// (0x0004b93a) phacti_button_pane_t1

0x9788,	// (0x00046583) main_touch_calib_button_pane_ParamLimits

0x9788,	// (0x00046583) main_touch_calib_button_pane

0xa801,	// (0x000475fc) bg_button_pane_cp18_ParamLimits

0xa801,	// (0x000475fc) bg_button_pane_cp18

0xeb4d,	// (0x0004b948) main_touch_calib_button_pane_t1_ParamLimits

0xeb4d,	// (0x0004b948) main_touch_calib_button_pane_t1

0xeb63,	// (0x0004b95e) main_touch_calib_button_pane_t2_ParamLimits

0xeb63,	// (0x0004b95e) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004cc47) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004cc47) main_touch_calib_button_pane_t

0xa090,	// (0x00046e8b) cell_ncimui_button_pane

0xa090,	// (0x00046e8b) bg_button_pane_cp032

0xeb81,	// (0x0004b97c) cell_ncimui_button_pane_t1

0x719b,	// (0x00043f96) image3_infobar_pane_ParamLimits

0x719b,	// (0x00043f96) image3_infobar_pane

0x8f92,	// (0x00045d8d) fs_bigclock_status_pane_ParamLimits

0x8f92,	// (0x00045d8d) fs_bigclock_status_pane

0x8f9f,	// (0x00045d9a) main_fs_bigclock_clock_pane_ParamLimits

0x8f9f,	// (0x00045d9a) main_fs_bigclock_clock_pane

0x8fb9,	// (0x00045db4) main_fs_bigclock_indi_pane_ParamLimits

0x8fb9,	// (0x00045db4) main_fs_bigclock_indi_pane

0x8fe1,	// (0x00045ddc) main_fs_bigclock_swipe_pane_ParamLimits

0x8fe1,	// (0x00045ddc) main_fs_bigclock_swipe_pane

0xa090,	// (0x00046e8b) main_fs_clock_dumped_data

0xe43a,	// (0x0004b235) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe43a,	// (0x0004b235) list_single_fs_bigclock_indicator_pane_g1

0xe455,	// (0x0004b250) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe455,	// (0x0004b250) list_single_fs_bigclock_indicator_pane_g2

0xe46f,	// (0x0004b26a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46f,	// (0x0004b26a) list_single_fs_bigclock_indicator_pane_g3

0xe489,	// (0x0004b284) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe489,	// (0x0004b284) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0004ca6f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0004ca6f) list_single_fs_bigclock_indicator_pane_g

0xe4b4,	// (0x0004b2af) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b4,	// (0x0004b2af) list_single_fs_bigclock_indicator_pane_t1

0xe4dc,	// (0x0004b2d7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4dc,	// (0x0004b2d7) list_single_fs_bigclock_indicator_pane_t2

0xe504,	// (0x0004b2ff) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe504,	// (0x0004b2ff) list_single_fs_bigclock_indicator_pane_t3

0xe52c,	// (0x0004b327) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52c,	// (0x0004b327) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0004ca7a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0004ca7a) list_single_fs_bigclock_indicator_pane_t

0xeb8f,	// (0x0004b98a) image3_infobar_fav_pane_ParamLimits

0xeb8f,	// (0x0004b98a) image3_infobar_fav_pane

0xeb9f,	// (0x0004b99a) image3_infobar_loc_pane_ParamLimits

0xeb9f,	// (0x0004b99a) image3_infobar_loc_pane

0xebb3,	// (0x0004b9ae) image3_infobar_time_pane_ParamLimits

0xebb3,	// (0x0004b9ae) image3_infobar_time_pane

0xcc49,	// (0x00049a44) image3_infobar_time_pane_g1

0xebc3,	// (0x0004b9be) image3_infobar_time_pane_t1

0xcc49,	// (0x00049a44) image3_infobar_loc_pane_g1

0xebd1,	// (0x0004b9cc) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004cc4c) image3_infobar_loc_pane_g

0xebd9,	// (0x0004b9d4) image3_infobar_loc_pane_t1

0xcc49,	// (0x00049a44) image3_infobar_fav_pane_g1

0xebe7,	// (0x0004b9e2) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004cc51) image3_infobar_fav_pane_g

0xebef,	// (0x0004b9ea) fs_bigclock_status_battery_pane

0xebf8,	// (0x0004b9f3) fs_bigclock_status_signal_pane

0xec01,	// (0x0004b9fc) fs_bigclock_status_title_pane

0xec0a,	// (0x0004ba05) fs_bigclock_status_signal_pane_g1

0xec13,	// (0x0004ba0e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004cc56) fs_bigclock_status_signal_pane_g

0xec1b,	// (0x0004ba16) fs_bigclock_status_battery_pane_g1

0xec24,	// (0x0004ba1f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004cc5b) fs_bigclock_status_battery_pane_g

0xec2c,	// (0x0004ba27) fs_bigclock_status_title_pane_t1

0xcc49,	// (0x00049a44) main_fs_bigclock_clock_pane_g1

0xec3a,	// (0x0004ba35) main_fs_bigclock_clock_pane_g2

0xec43,	// (0x0004ba3e) main_fs_bigclock_clock_pane_g3

0xec43,	// (0x0004ba3e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004cc60) main_fs_bigclock_clock_pane_g

0xec4b,	// (0x0004ba46) main_fs_bigclock_clock_pane_t1

0x9798,	// (0x00046593) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004cc69) main_fs_bigclock_clock_pane_t

0xec59,	// (0x0004ba54) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec59,	// (0x0004ba54) list_single_fs_bigclock_indicator_pane

0xec6a,	// (0x0004ba65) list_single_fs_bigclock_pane_ParamLimits

0xec6a,	// (0x0004ba65) list_single_fs_bigclock_pane

0xec90,	// (0x0004ba8b) main_fs_bigclock_indicator_pane_t1

0xec9f,	// (0x0004ba9a) list_single_fs_bigclock_pane_g1

0xeca7,	// (0x0004baa2) list_single_fs_bigclock_pane_t1

0xcc49,	// (0x00049a44) main_fs_bigclock_swipe_pane_g1

0xecea,	// (0x0004bae5) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004cc7a) main_fs_bigclock_swipe_pane_g

0xecf2,	// (0x0004baed) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf2,	// (0x0004baed) main_fs_bigclock_swipe_pane_t1

0x45db,	// (0x000413d6) call_type_pane_ParamLimits

0xa090,	// (0x00046e8b) main_btmg_pane

0x1ede,	// (0x0003ecd9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1ede,	// (0x0003ecd9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004cbed) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004cbed) list_single_cale_mrui_row_pane_g

0x2006,	// (0x0003ee01) list_recal_vselct_arw_lo_pane

0xeb0a,	// (0x0004b905) list_recal_vselct_arw_up_pane

0x200e,	// (0x0003ee09) list_recal_vselct_pane

0x97eb,	// (0x000465e6) btmg_button_pane

0x97f7,	// (0x000465f2) main_btmg_pane_g1

0xa090,	// (0x00046e8b) bg_button_pane_cp044

0xed0f,	// (0x0004bb0a) btmg_button_pane_t1

0xc824,	// (0x0004961f) aid_listscroll_gen

0xb086,	// (0x00047e81) main_cntbar_detail_pane

0xe820,	// (0x0004b61b) list_cmail_folder_pane

0xd47c,	// (0x0004a277) sp_fs_scroll_pane_cp03_ParamLimits

0x209d,	// (0x0003ee98) list_single_fs_dyc_pane_cp01_ParamLimits

0x209d,	// (0x0003ee98) list_single_fs_dyc_pane_cp01

0xed1d,	// (0x0004bb18) aid_size_cmail_indent

0x20c9,	// (0x0003eec4) list_single_dyc_row_pane_cp01

0x981f,	// (0x0004661a) cntbar_detail_list_pane_ParamLimits

0x981f,	// (0x0004661a) cntbar_detail_list_pane

0x9859,	// (0x00046654) main_cntbar_detail_cont_pane_ParamLimits

0x9859,	// (0x00046654) main_cntbar_detail_cont_pane

0x45cf,	// (0x000413ca) scroll_pane_cp032_ParamLimits

0x45cf,	// (0x000413ca) scroll_pane_cp032

0x9865,	// (0x00046660) cntbar_detail_list_event_pane_ParamLimits

0x9865,	// (0x00046660) cntbar_detail_list_event_pane

0x982b,	// (0x00046626) cntbar_detail_list_shct_pane

0xac6d,	// (0x00047a68) aid_list_gen

0xed26,	// (0x0004bb21) aid_scroll

0xed2f,	// (0x0004bb2a) aid_size_touch_scroll_bar

0x8463,	// (0x0004525e) aid_list_double

0x20d2,	// (0x0003eecd) aid_list_single

0x845a,	// (0x00045255) aid_list_single_lg

0x20db,	// (0x0003eed6) aid_list_z_g_a_sm

0x20e3,	// (0x0003eede) aid_list_z_g_d

0x20eb,	// (0x0003eee6) aid_txt_z_prm

0x20f9,	// (0x0003eef4) aid_txt_z_prm_cp01

0x2107,	// (0x0003ef02) aid_txt_z_sec

0x9879,	// (0x00046674) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9879,	// (0x00046674) main_cntbar_detail_cont_pane_g1

0x9886,	// (0x00046681) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9886,	// (0x00046681) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004cc7f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004cc7f) main_cntbar_detail_cont_pane_g

0xed38,	// (0x0004bb33) main_cntbar_detail_cont_pane_t1

0xed46,	// (0x0004bb41) main_cntbar_detail_cont_pane_t2

0xed54,	// (0x0004bb4f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004cc84) main_cntbar_detail_cont_pane_t

0x9892,	// (0x0004668d) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9892,	// (0x0004668d) cell_cntbar_detail_list_shct_pane

0xed62,	// (0x0004bb5d) cntbar_detail_list_shct_pane_g1

0xed6b,	// (0x0004bb66) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004cc8b) cntbar_detail_list_shct_pane_g

0x98a6,	// (0x000466a1) cntbar_detail_list_event_pane_g1_ParamLimits

0x98a6,	// (0x000466a1) cntbar_detail_list_event_pane_g1

0x98b2,	// (0x000466ad) cntbar_detail_list_event_pane_g2_ParamLimits

0x98b2,	// (0x000466ad) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004cc90) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004cc90) cntbar_detail_list_event_pane_g

0x991e,	// (0x00046719) cntbar_detail_list_event_pane_t1_ParamLimits

0x991e,	// (0x00046719) cntbar_detail_list_event_pane_t1

0x9933,	// (0x0004672e) cntbar_detail_list_event_pane_t2_ParamLimits

0x9933,	// (0x0004672e) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004cc9d) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004cc9d) cntbar_detail_list_event_pane_t

0xcc49,	// (0x00049a44) cell_cntbar_detail_list_shct_pane_g1

0xb400,	// (0x000481fb) navi_pane_mv_g3

0xb086,	// (0x00047e81) main_cntbar_detail_pane_ParamLimits

0xa090,	// (0x00046e8b) main_notif_wgt_pane

0x6e4f,	// (0x00043c4a) aid_tch_main_mp4_pane_g4

0x7084,	// (0x00043e7f) popup_slider_window_cp02

0x1ffc,	// (0x0003edf7) list_recal_day_event_pane

0x97ff,	// (0x000465fa) cntbar_detail_btn_pane_ParamLimits

0x97ff,	// (0x000465fa) cntbar_detail_btn_pane

0x980f,	// (0x0004660a) cntbar_detail_btn_pane_cp01_ParamLimits

0x980f,	// (0x0004660a) cntbar_detail_btn_pane_cp01

0x982b,	// (0x00046626) cntbar_detail_list_shct_pane_ParamLimits

0x9837,	// (0x00046632) cntbar_detail_pane_g1_ParamLimits

0x9837,	// (0x00046632) cntbar_detail_pane_g1

0x9843,	// (0x0004663e) cntbar_detail_pane_t1_ParamLimits

0x9843,	// (0x0004663e) cntbar_detail_pane_t1

0x98be,	// (0x000466b9) cntbar_detail_list_event_pane_g3_ParamLimits

0x98be,	// (0x000466b9) cntbar_detail_list_event_pane_g3

0x98d6,	// (0x000466d1) cntbar_detail_list_event_pane_g4_ParamLimits

0x98d6,	// (0x000466d1) cntbar_detail_list_event_pane_g4

0x98ee,	// (0x000466e9) cntbar_detail_list_event_pane_g5_ParamLimits

0x98ee,	// (0x000466e9) cntbar_detail_list_event_pane_g5

0x9906,	// (0x00046701) cntbar_detail_list_event_pane_g6_ParamLimits

0x9906,	// (0x00046701) cntbar_detail_list_event_pane_g6

0x9948,	// (0x00046743) cntbar_detail_list_event_pane_t3_ParamLimits

0x9948,	// (0x00046743) cntbar_detail_list_event_pane_t3

0x995a,	// (0x00046755) popup_notif_wgt_window_ParamLimits

0x995a,	// (0x00046755) popup_notif_wgt_window

0x996a,	// (0x00046765) popup_submenu_window_cp01_ParamLimits

0x996a,	// (0x00046765) popup_submenu_window_cp01

0xa9c6,	// (0x000477c1) bg_popup_window_pane_cp10

0xed74,	// (0x0004bb6f) listscroll_notif_wgt_pane

0xed86,	// (0x0004bb81) list_notif_wgt_window

0xed8f,	// (0x0004bb8a) scroll_pane_cp033

0x997c,	// (0x00046777) list_notif_wgt_row_pane_ParamLimits

0x997c,	// (0x00046777) list_notif_wgt_row_pane

0xed98,	// (0x0004bb93) aid_size_list_notif_wgt_del

0xeda5,	// (0x0004bba0) list_notif_wgt_row_pane_g1

0xedb1,	// (0x0004bbac) list_notif_wgt_row_pane_g2

0xedc5,	// (0x0004bbc0) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004cca4) list_notif_wgt_row_pane_g

0xedd2,	// (0x0004bbcd) list_notif_wgt_row_pane_t1

0xede8,	// (0x0004bbe3) list_notif_wgt_row_pane_t2

0xedfa,	// (0x0004bbf5) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004ccab) list_notif_wgt_row_pane_t

0xd939,	// (0x0004a734) list_recal_day_event_pane_g1

0xee0c,	// (0x0004bc07) list_recal_day_event_pane_t1

0xa090,	// (0x00046e8b) bg_button_pane_cp045

0x998e,	// (0x00046789) cntbar_detail_btn_pane_t1

0xc838,	// (0x00049633) main_callh_pane_ParamLimits

0xc838,	// (0x00049633) main_callh_pane

0xa090,	// (0x00046e8b) main_coverflow0_pane

0xa090,	// (0x00046e8b) main_wgtman_pane

0x8ff9,	// (0x00045df4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8ff9,	// (0x00045df4) main_fs_bigclock_unlock_btn_pane

0x9361,	// (0x0004615c) bg_button_pane_cp16

0x9371,	// (0x0004616c) cell_tport_appsw_pane_g3

0x999c,	// (0x00046797) cf0_flow_pane_ParamLimits

0x999c,	// (0x00046797) cf0_flow_pane

0xee1b,	// (0x0004bc16) listscroll_cf0_pane

0xee26,	// (0x0004bc21) main_cf0_pane_g1

0x99ab,	// (0x000467a6) main_cf0_pane_t1_ParamLimits

0x99ab,	// (0x000467a6) main_cf0_pane_t1

0x99bf,	// (0x000467ba) main_cf0_pane_t2_ParamLimits

0x99bf,	// (0x000467ba) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004ccb7) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004ccb7) main_cf0_pane_t

0xee38,	// (0x0004bc33) scroll_pane_cp11

0x99d3,	// (0x000467ce) cf0_flow_pane_g1

0x99db,	// (0x000467d6) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004ccbc) cf0_flow_pane_g

0x99e3,	// (0x000467de) cf0_flow_pane_t1

0xa090,	// (0x00046e8b) main_call6_pane

0xa090,	// (0x00046e8b) main_calllock_pane

0x99f1,	// (0x000467ec) call6_btn_grp_pane_ParamLimits

0x99f1,	// (0x000467ec) call6_btn_grp_pane

0x9a00,	// (0x000467fb) call6_pane_g1_ParamLimits

0x9a00,	// (0x000467fb) call6_pane_g1

0x9a0f,	// (0x0004680a) popup_call6_1st_window_ParamLimits

0x9a0f,	// (0x0004680a) popup_call6_1st_window

0x9a1d,	// (0x00046818) popup_call6_2nd_window_ParamLimits

0x9a1d,	// (0x00046818) popup_call6_2nd_window

0x9a2b,	// (0x00046826) cell_call6_btn_pane_ParamLimits

0x9a2b,	// (0x00046826) cell_call6_btn_pane

0xa9c6,	// (0x000477c1) bg_popup_call2_in_pane_cp03

0xee43,	// (0x0004bc3e) popup_call6_1st_window_g1

0xee4b,	// (0x0004bc46) popup_call6_1st_window_g2

0xee53,	// (0x0004bc4e) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004ccc1) popup_call6_1st_window_g

0xee5b,	// (0x0004bc56) popup_call6_1st_window_t1

0xee6a,	// (0x0004bc65) popup_call6_1st_window_t2

0xee7a,	// (0x0004bc75) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004ccc8) popup_call6_1st_window_t

0xa9c6,	// (0x000477c1) bg_popup_call2_in_pane_cp04

0xee43,	// (0x0004bc3e) popup_call6_2nd_window_g1

0xee4b,	// (0x0004bc46) popup_call6_2nd_window_g2

0xee53,	// (0x0004bc4e) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004ccc1) popup_call6_2nd_window_g

0xee5b,	// (0x0004bc56) popup_call6_2nd_window_t1

0xa090,	// (0x00046e8b) bg_button_pane_cp15

0xee8a,	// (0x0004bc85) cell_call6_btn_pane_g1

0xee93,	// (0x0004bc8e) cell_call6_btn_pane_t1

0x9a3a,	// (0x00046835) listscroll_wgtman_pane_ParamLimits

0x9a3a,	// (0x00046835) listscroll_wgtman_pane

0x9a56,	// (0x00046851) wgtman_btn_pane_ParamLimits

0x9a56,	// (0x00046851) wgtman_btn_pane

0xb207,	// (0x00048002) aid_scroll_copy1

0xeea2,	// (0x0004bc9d) list_wgtman_pane

0x9a8b,	// (0x00046886) wgtman_btn_pane_g1_ParamLimits

0x9a8b,	// (0x00046886) wgtman_btn_pane_g1

0x9ab3,	// (0x000468ae) wgtman_btn_pane_t1_ParamLimits

0x9ab3,	// (0x000468ae) wgtman_btn_pane_t1

0xeeac,	// (0x0004bca7) wgtman_btn_pane_t2_ParamLimits

0xeeac,	// (0x0004bca7) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004cccf) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004cccf) wgtman_btn_pane_t

0x9aea,	// (0x000468e5) listrow_wgtman_pane_ParamLimits

0x9aea,	// (0x000468e5) listrow_wgtman_pane

0x9b05,	// (0x00046900) listrow_wgtman_pane_g1

0x9b12,	// (0x0004690d) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004ccd4) listrow_wgtman_pane_g

0x2115,	// (0x0003ef10) listrow_wgtman_pane_t1

0x212d,	// (0x0003ef28) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004ccd9) listrow_wgtman_pane_t

0x2153,	// (0x0003ef4e) wait_bar_pane_cp09

0xeec3,	// (0x0004bcbe) main_calllock_btn_pane

0xeecd,	// (0x0004bcc8) main_calllock_pane_g1

0xa090,	// (0x00046e8b) bg_button_pane_cp17

0xeed9,	// (0x0004bcd4) main_calllock_btn_pane_g1

0xeee2,	// (0x0004bcdd) main_calllock_btn_pane_t1

0xa090,	// (0x00046e8b) main_dialer3_pane

0xa090,	// (0x00046e8b) main_fmrd2_pane

0xcc49,	// (0x00049a44) main_fs_bigclock_unlock_btn_pane_g1

0xeef9,	// (0x0004bcf4) main_fs_bigclock_unlock_btn_pane_t1

0x9b30,	// (0x0004692b) area_fmrd2_info_pane_ParamLimits

0x9b30,	// (0x0004692b) area_fmrd2_info_pane

0x9b3e,	// (0x00046939) area_fmrd2_visual_pane_ParamLimits

0x9b3e,	// (0x00046939) area_fmrd2_visual_pane

0x9b4c,	// (0x00046947) fmrd2_indi_pane_ParamLimits

0x9b4c,	// (0x00046947) fmrd2_indi_pane

0x9b59,	// (0x00046954) area_fmrd2_visual_pane_g1

0x9b61,	// (0x0004695c) area_fmrd2_visual_pane_t1

0x9b71,	// (0x0004696c) area_fmrd2_visual_pane_t2

0x9b81,	// (0x0004697c) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004cce3) area_fmrd2_visual_pane_t

0x9b91,	// (0x0004698c) area_fmrd2_info_pane_g1

0x9b99,	// (0x00046994) area_fmrd2_info_pane_t1

0x9ba9,	// (0x000469a4) area_fmrd2_info_pane_t2

0x9bb9,	// (0x000469b4) area_fmrd2_info_pane_t3

0x9bc9,	// (0x000469c4) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004ccea) area_fmrd2_info_pane_t

0x9bd7,	// (0x000469d2) fmrd2_indi_pane_t1

0x9be7,	// (0x000469e2) fmrd2_indi_pane_t2

0x9bf7,	// (0x000469f2) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004ccf3) fmrd2_indi_pane_t

0xe498,	// (0x0004b293) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe498,	// (0x0004b293) list_single_fs_bigclock_indicator_pane_g5

0xe548,	// (0x0004b343) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe548,	// (0x0004b343) list_single_fs_bigclock_indicator_pane_t5

0x94ef,	// (0x000462ea) aid_cell_bcale_month_pane_ParamLimits

0x94ef,	// (0x000462ea) aid_cell_bcale_month_pane

0x950d,	// (0x00046308) bcale_month_pane_ParamLimits

0x950d,	// (0x00046308) bcale_month_pane

0x952b,	// (0x00046326) bcale_preview_pane_ParamLimits

0x952b,	// (0x00046326) bcale_preview_pane

0xeca7,	// (0x0004baa2) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc6,	// (0x0004bac1) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc6,	// (0x0004bac1) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004cc75) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004cc75) list_single_fs_bigclock_pane_t

0xeef1,	// (0x0004bcec) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004ccde) main_fs_bigclock_unlock_btn_pane_g

0x9c05,	// (0x00046a00) aid_dia3_key_size_ParamLimits

0x9c05,	// (0x00046a00) aid_dia3_key_size

0x9c11,	// (0x00046a0c) aid_dia3_listrow_size_ParamLimits

0x9c11,	// (0x00046a0c) aid_dia3_listrow_size

0x9c21,	// (0x00046a1c) dia3_keypad_fun_pane_ParamLimits

0x9c21,	// (0x00046a1c) dia3_keypad_fun_pane

0x9c33,	// (0x00046a2e) dia3_keypad_num_pane_ParamLimits

0x9c33,	// (0x00046a2e) dia3_keypad_num_pane

0x9c45,	// (0x00046a40) dia3_listscroll_pane_ParamLimits

0x9c45,	// (0x00046a40) dia3_listscroll_pane

0x9c53,	// (0x00046a4e) dia3_numentry_pane_ParamLimits

0x9c53,	// (0x00046a4e) dia3_numentry_pane

0xef07,	// (0x0004bd02) dia3_list_pane

0xef12,	// (0x0004bd0d) scroll_pane_cp12

0xa090,	// (0x00046e8b) bg_dia3_numentry_pane

0x9c61,	// (0x00046a5c) dia3_numentry_pane_t1

0x9c70,	// (0x00046a6b) cell_dia3_key_num_pane

0x9c78,	// (0x00046a73) cell_dia3_key0_fun_pane_ParamLimits

0x9c78,	// (0x00046a73) cell_dia3_key0_fun_pane

0x9c85,	// (0x00046a80) cell_dia3_key1_fun_pane_ParamLimits

0x9c85,	// (0x00046a80) cell_dia3_key1_fun_pane

0x9c92,	// (0x00046a8d) dia3_listrow_pane

0xe1a7,	// (0x0004afa2) bg_dia3_numentry_pane_g1

0xa090,	// (0x00046e8b) bg_button_pane_cp21

0xef1d,	// (0x0004bd18) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0004bd26) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0004bd35) cell_dia3_key_num_pane_t3

0xef49,	// (0x0004bd44) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004ccfa) cell_dia3_key_num_pane_t

0xa090,	// (0x00046e8b) bg_button_pane_cp19

0x9c9f,	// (0x00046a9a) cell_dia3_key0_fun_pane_g1

0xa090,	// (0x00046e8b) bg_button_pane_cp20

0x9ca7,	// (0x00046aa2) cell_dia3_key1_fun_pane_g1

0x9caf,	// (0x00046aaa) area_left_week_number_pane

0x9cc2,	// (0x00046abd) area_top_day_name_pane

0x9cd0,	// (0x00046acb) frame_month_view_pane

0xef58,	// (0x0004bd53) grid_month_view_pane

0x9ce5,	// (0x00046ae0) cell_top_day_name_pane_ParamLimits

0x9ce5,	// (0x00046ae0) cell_top_day_name_pane

0x9cff,	// (0x00046afa) cell_area_left_week_number_pane_ParamLimits

0x9cff,	// (0x00046afa) cell_area_left_week_number_pane

0x9d22,	// (0x00046b1d) cell_month_view_pane_ParamLimits

0x9d22,	// (0x00046b1d) cell_month_view_pane

0xef66,	// (0x0004bd61) frm_month_g1

0x9d4e,	// (0x00046b49) frm_month_g2

0x9d5f,	// (0x00046b5a) frm_month_g3

0x9d70,	// (0x00046b6b) frm_month_g4

0x9d81,	// (0x00046b7c) frm_month_g5

0x9d94,	// (0x00046b8f) frm_month_g6

0x9da7,	// (0x00046ba2) frm_month_g7

0xef73,	// (0x0004bd6e) frm_month_g8

0x9dba,	// (0x00046bb5) frm_month_g9

0x9dc7,	// (0x00046bc2) frm_month_g10

0x9dd4,	// (0x00046bcf) frm_month_g11

0x9de1,	// (0x00046bdc) frm_month_g12

0x9dee,	// (0x00046be9) frm_month_g13

0x9dfb,	// (0x00046bf6) frm_month_g14

0x9e0a,	// (0x00046c05) frm_month_g15

0x9e19,	// (0x00046c14) frm_month_g16

0x000f,

0xff08,	// (0x0004cd03) frm_month_g

0xef80,	// (0x0004bd7b) cell_top_day_name_pane_t1

0x9e28,	// (0x00046c23) cell_area_left_week_number_pane_g1

0x9e37,	// (0x00046c32) cell_area_left_week_number_pane_t1

0xceac,	// (0x00049ca7) cell_month_view_pane_g1

0x9e4d,	// (0x00046c48) cell_month_view_pane_t1

0xa090,	// (0x00046e8b) main_fps_pane

0xe738,	// (0x0004b533) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe738,	// (0x0004b533) cmail_ddmenu_btn02_pane_cp1

0xe754,	// (0x0004b54f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe754,	// (0x0004b54f) cmail_ddmenu_btn02_pane_cp2

0x9716,	// (0x00046511) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9716,	// (0x00046511) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004cc28) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004cc28) cmail_ddmenu_btn02_pane_g

0x9735,	// (0x00046530) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9735,	// (0x00046530) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004cc2d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004cc2d) cmail_ddmenu_btn02_pane_t

0x9e63,	// (0x00046c5e) fps_text_pane_ParamLimits

0x9e63,	// (0x00046c5e) fps_text_pane

0x9e70,	// (0x00046c6b) main_fps_pane_g1_ParamLimits

0x9e70,	// (0x00046c6b) main_fps_pane_g1

0x9e7e,	// (0x00046c79) wait_bar_pane_cp010_ParamLimits

0x9e7e,	// (0x00046c79) wait_bar_pane_cp010

0x9e8a,	// (0x00046c85) fps_text_pane_t1_ParamLimits

0x9e8a,	// (0x00046c85) fps_text_pane_t1

0x7466,	// (0x00044261) cam4_image_uncrop_pane_g1

0x746f,	// (0x0004426a) cam4_image_uncrop_pane_g2

0x7478,	// (0x00044273) cam4_image_uncrop_pane_g3

0x7481,	// (0x0004427c) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004c6e9) cam4_image_uncrop_pane_g

0x9c92,	// (0x00046a8d) dia3_listrow_pane_ParamLimits

0xa090,	// (0x00046e8b) main_phob2_pane

0x9343,	// (0x0004613e) cell_tport_appsw_pane_cp02_ParamLimits

0x9343,	// (0x0004613e) cell_tport_appsw_pane_cp02

0x9352,	// (0x0004614d) cell_tport_appsw_pane_cp03_ParamLimits

0x9352,	// (0x0004614d) cell_tport_appsw_pane_cp03

0xa090,	// (0x00046e8b) phob2_contact_card_pane

0xa090,	// (0x00046e8b) phob2_listscroll_pane

0xef93,	// (0x0004bd8e) phob2_list_pane

0xef9b,	// (0x0004bd96) scroll_pane_cp034

0x9ea3,	// (0x00046c9e) phob2_cc_data_pane_ParamLimits

0x9ea3,	// (0x00046c9e) phob2_cc_data_pane

0x9ebd,	// (0x00046cb8) phob2_cc_listscroll_pane_ParamLimits

0x9ebd,	// (0x00046cb8) phob2_cc_listscroll_pane

0x9aea,	// (0x000468e5) list_double_large_graphic_phob2_pane_ParamLimits

0x9aea,	// (0x000468e5) list_double_large_graphic_phob2_pane

0x9ed7,	// (0x00046cd2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9ed7,	// (0x00046cd2) list_double_large_graphic_phob2_pane_g1

0x2165,	// (0x0003ef60) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2165,	// (0x0003ef60) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004cd24) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004cd24) list_double_large_graphic_phob2_pane_g

0x2171,	// (0x0003ef6c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2171,	// (0x0003ef6c) list_double_large_graphic_phob2_pane_t1

0x2186,	// (0x0003ef81) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2186,	// (0x0003ef81) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004cd29) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004cd29) list_double_large_graphic_phob2_pane_t

0xa090,	// (0x00046e8b) list_highlight_pane_cp024

0x9eed,	// (0x00046ce8) phob2_cc_button_pane

0x9ef5,	// (0x00046cf0) phob2_cc_data_pane_g1_ParamLimits

0x9ef5,	// (0x00046cf0) phob2_cc_data_pane_g1

0x9f01,	// (0x00046cfc) phob2_cc_data_pane_g2_ParamLimits

0x9f01,	// (0x00046cfc) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004cd2e) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004cd2e) phob2_cc_data_pane_g

0x9f0d,	// (0x00046d08) phob2_cc_data_pane_t1_ParamLimits

0x9f0d,	// (0x00046d08) phob2_cc_data_pane_t1

0x9f1f,	// (0x00046d1a) phob2_cc_data_pane_t2_ParamLimits

0x9f1f,	// (0x00046d1a) phob2_cc_data_pane_t2

0x9f31,	// (0x00046d2c) phob2_cc_data_pane_t3_ParamLimits

0x9f31,	// (0x00046d2c) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004cd33) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004cd33) phob2_cc_data_pane_t

0xefa3,	// (0x0004bd9e) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0004bd9e) phob2_cc_list_pane

0xdc0b,	// (0x0004aa06) scroll_pane_cp035_ParamLimits

0xdc0b,	// (0x0004aa06) scroll_pane_cp035

0xb086,	// (0x00047e81) bg_button_pane_cp033

0xefaf,	// (0x0004bdaa) phob2_cc_button_pane_g1

0xefbb,	// (0x0004bdb6) phob2_cc_button_pane_t1

0xefd0,	// (0x0004bdcb) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004cd3a) phob2_cc_button_pane_t

0x9f43,	// (0x00046d3e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f43,	// (0x00046d3e) list_double_large_graphic_phob2_cc_pane

0x9f6a,	// (0x00046d65) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f6a,	// (0x00046d65) list_double_large_graphic_phob2_cc_pane_g1

0x2198,	// (0x0003ef93) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x2198,	// (0x0003ef93) list_double_large_graphic_phob2_cc_pane_g2

0x21a4,	// (0x0003ef9f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x21a4,	// (0x0003ef9f) list_double_large_graphic_phob2_cc_pane_g3

0x21b0,	// (0x0003efab) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x21b0,	// (0x0003efab) list_double_large_graphic_phob2_cc_pane_g4

0x21bc,	// (0x0003efb7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x21bc,	// (0x0003efb7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004cd3f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004cd3f) list_double_large_graphic_phob2_cc_pane_g

0x21c8,	// (0x0003efc3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x21c8,	// (0x0003efc3) list_double_large_graphic_phob2_cc_pane_t1

0x21f1,	// (0x0003efec) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x21f1,	// (0x0003efec) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004cd4a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004cd4a) list_double_large_graphic_phob2_cc_pane_t

0xefe2,	// (0x0004bddd) list_highlight_pane_cp025_ParamLimits

0xefe2,	// (0x0004bddd) list_highlight_pane_cp025

0xb086,	// (0x00047e81) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0004bdaa) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0004bdb6) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0004bdcb) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004cd3a) phob2_cc_button_pane_t_ParamLimits

0x24f1,	// (0x0003f2ec) popup_wgtman_window

0xd7f0,	// (0x0004a5eb) scroll_pane_cp038

0x9a73,	// (0x0004686e) wgtman_btn_pane_cp_01_ParamLimits

0x9a73,	// (0x0004686e) wgtman_btn_pane_cp_01

0xeff0,	// (0x0004bdeb) wgtman_content_pane

0xeff9,	// (0x0004bdf4) wgtman_heading_pane

0xa090,	// (0x00046e8b) bg_heading_pane_cp02

0xf002,	// (0x0004bdfd) wgtman_heading_pane_g1

0xf00a,	// (0x0004be05) wgtman_heading_pane_t1

0xf018,	// (0x0004be13) scroll_pane_cp036

0xf020,	// (0x0004be1b) wgtman_list_pane

0xf028,	// (0x0004be23) wgtman_list_pane_t1_ParamLimits

0xf028,	// (0x0004be23) wgtman_list_pane_t1

0x73c5,	// (0x000441c0) cam4_grid_pane

0x13b2,	// (0x0003e1ad) bg_button_pane_cp015_ParamLimits

0x8088,	// (0x00044e83) bg_button_pane_cp016_ParamLimits

0x809b,	// (0x00044e96) bg_button_pane_cp017_ParamLimits

0x13f6,	// (0x0003e1f1) popup_vitu2_query_window_g3_ParamLimits

0x13f6,	// (0x0003e1f1) popup_vitu2_query_window_g3

0x146f,	// (0x0003e26a) popup_vitu2_query_window_t6_ParamLimits

0x146f,	// (0x0003e26a) popup_vitu2_query_window_t6

0x149a,	// (0x0003e295) popup_vitu2_query_window_t7_ParamLimits

0x149a,	// (0x0003e295) popup_vitu2_query_window_t7

0xe854,	// (0x0004b64f) cam4_grid_pane_g1

0xe85d,	// (0x0004b658) cam4_grid_pane_g2

0xf042,	// (0x0004be3d) cam4_grid_pane_g3

0xf04b,	// (0x0004be46) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004cd4f) cam4_grid_pane_g

0x3349,	// (0x00040144) aid_placing_vt_slider_lsc_ParamLimits

0x3695,	// (0x00040490) vidtel_button_pane_ParamLimits

0x3695,	// (0x00040490) vidtel_button_pane

0xa090,	// (0x00046e8b) bg_button_pane_cp034

0x9f7b,	// (0x00046d76) vidtel_button_pane_g1

0xf056,	// (0x0004be51) vidtel_button_pane_t1

0xd929,	// (0x0004a724) aid_size_vtel_slider_touch

0xdc0b,	// (0x0004aa06) scroll_pane_cp039

0xe1e5,	// (0x0004afe0) ncim_query_button_pane_cp01_ParamLimits

0xe204,	// (0x0004afff) ncimui_query_pane_g1_ParamLimits

0xb086,	// (0x00047e81) input_focus_pane_cp012_ParamLimits

0xe229,	// (0x0004b024) ncim_query_entry_pane_t1_ParamLimits

0xdc0b,	// (0x0004aa06) scroll_pane_cp039_ParamLimits

0xb2eb,	// (0x000480e6) navi_pane_bcale_mc_g1

0xb2f3,	// (0x000480ee) navi_pane_bcale_mc_t1

0xe79d,	// (0x0004b598) main_sp_fs_email_pane_g1

0xe7a9,	// (0x0004b5a4) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0004cae0) main_sp_fs_email_pane_g

0xea14,	// (0x0004b80f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea14,	// (0x0004b80f) list_single_cale_mrui_row_pane_g3

0x205b,	// (0x0003ee56) list_single_recal_day_pane_g5_event_pane

0x2071,	// (0x0003ee6c) list_single_recal_day_pane_g7

0xf06c,	// (0x0004be67) list_recal_day_event_pane_cp01

0xf075,	// (0x0004be70) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0004be78) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0004be80) list_recal_vselct_pane_cp01

0xd939,	// (0x0004a734) list_recal_day_event_pane_cp01_g1

0x221a,	// (0x0003f015) list_recal_day_event_pane_cp01_t1

0x2079,	// (0x0003ee74) list_single_recal_day_pane_t1_ParamLimits

0x208b,	// (0x0003ee86) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004cc3d) list_single_recal_day_pane_t_ParamLimits

0xa73c,	// (0x00047537) bg_notes_pane_ParamLimits

0xa7df,	// (0x000475da) list_notes_pane_ParamLimits

0x284f,	// (0x0003f64a) scroll_pane_cp06_ParamLimits

0xa801,	// (0x000475fc) main_notes_pane_ParamLimits

0xa090,	// (0x00046e8b) main_welc_pane

0x9f83,	// (0x00046d7e) main_welc_body_pane_ParamLimits

0x9f83,	// (0x00046d7e) main_welc_body_pane

0x9f9d,	// (0x00046d98) main_welc_opti_pane_ParamLimits

0x9f9d,	// (0x00046d98) main_welc_opti_pane

0x9fd0,	// (0x00046dcb) main_welc_pane_t1_ParamLimits

0x9fd0,	// (0x00046dcb) main_welc_pane_t1

0x9fea,	// (0x00046de5) main_welc_body_row_pane_ParamLimits

0x9fea,	// (0x00046de5) main_welc_body_row_pane

0xd8c9,	// (0x0004a6c4) main_welc_opti_row_pane_ParamLimits

0xd8c9,	// (0x0004a6c4) main_welc_opti_row_pane

0xf08f,	// (0x0004be8a) main_welc_opti_row_pane_g1

0xa00f,	// (0x00046e0a) main_welc_opti_row_pane_t1

0xf097,	// (0x0004be92) main_welc_body_row_pane_t1

0xed7e,	// (0x0004bb79) popup_notif_wgt_heading_pane

0xed98,	// (0x0004bb93) aid_size_list_notif_wgt_del_ParamLimits

0xeda5,	// (0x0004bba0) list_notif_wgt_row_pane_g1_ParamLimits

0xedb1,	// (0x0004bbac) list_notif_wgt_row_pane_g2_ParamLimits

0xedc5,	// (0x0004bbc0) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004cca4) list_notif_wgt_row_pane_g_ParamLimits

0xedd2,	// (0x0004bbcd) list_notif_wgt_row_pane_t1_ParamLimits

0xede8,	// (0x0004bbe3) list_notif_wgt_row_pane_t2_ParamLimits

0xedfa,	// (0x0004bbf5) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004ccab) list_notif_wgt_row_pane_t_ParamLimits

0x9b05,	// (0x00046900) listrow_wgtman_pane_g1_ParamLimits

0x9b12,	// (0x0004690d) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004ccd4) listrow_wgtman_pane_g_ParamLimits

0x2115,	// (0x0003ef10) listrow_wgtman_pane_t1_ParamLimits

0x212d,	// (0x0003ef28) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004ccd9) listrow_wgtman_pane_t_ParamLimits

0x2153,	// (0x0003ef4e) wait_bar_pane_cp09_ParamLimits

0xa090,	// (0x00046e8b) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0004bea1) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0004bea9) popup_notif_wgt_heading_pane_t1

0xa090,	// (0x00046e8b) main_vids_pane

0xa090,	// (0x00046e8b) vids_listscroll_pane

0xa01e,	// (0x00046e19) scroll_pane_cp040

0xa090,	// (0x00046e8b) vids_list_pane

0xa029,	// (0x00046e24) vids_list_double_pane_ParamLimits

0xa029,	// (0x00046e24) vids_list_double_pane

0xa043,	// (0x00046e3e) vids_list_double_pane_g1

0xa04c,	// (0x00046e47) vids_list_double_pane_t1

0xa05c,	// (0x00046e57) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004cd5d) vids_list_double_pane_t

0xb086,	// (0x00047e81) main_ncimui_pane_ParamLimits

0x8bcb,	// (0x000459c6) main_ncimui_pane_g1_ParamLimits

0x8bd7,	// (0x000459d2) main_ncimui_pane_g2_ParamLimits

0x8bd7,	// (0x000459d2) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0004c9e5) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0004c9e5) main_ncimui_pane_g

0x9fb6,	// (0x00046db1) main_welc_pane_g1_ParamLimits

0x9fb6,	// (0x00046db1) main_welc_pane_g1

0x9fc2,	// (0x00046dbd) main_welc_pane_g2_ParamLimits

0x9fc2,	// (0x00046dbd) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004cd58) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004cd58) main_welc_pane_g

0xa73c,	// (0x00047537) listscroll_mce_pane_ParamLimits

0xb440,	// (0x0004823b) wait_bar_pane_cp10

0xc82c,	// (0x00049627) main_cale_day_pane_ParamLimits

0xc82c,	// (0x00049627) main_cale_week_pane_ParamLimits

0xa73c,	// (0x00047537) main_messa_pane_ParamLimits

0x6825,	// (0x00043620) main_clock2_btn_pane_ParamLimits

0x6825,	// (0x00043620) main_clock2_btn_pane

0xd054,	// (0x00049e4f) main_clock2_btn_pane_cp01_ParamLimits

0xd054,	// (0x00049e4f) main_clock2_btn_pane_cp01

0xe9e5,	// (0x0004b7e0) list_cale_mrui_pane_ParamLimits

0xee30,	// (0x0004bc2b) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004ccb2) main_cf0_pane_g

0x9caf,	// (0x00046aaa) area_left_week_number_pane_ParamLimits

0x9cc2,	// (0x00046abd) area_top_day_name_pane_ParamLimits

0x9cd0,	// (0x00046acb) frame_month_view_pane_ParamLimits

0xef58,	// (0x0004bd53) grid_month_view_pane_ParamLimits

0xef66,	// (0x0004bd61) frm_month_g1_ParamLimits

0x9d4e,	// (0x00046b49) frm_month_g2_ParamLimits

0x9d5f,	// (0x00046b5a) frm_month_g3_ParamLimits

0x9d70,	// (0x00046b6b) frm_month_g4_ParamLimits

0x9d81,	// (0x00046b7c) frm_month_g5_ParamLimits

0x9d94,	// (0x00046b8f) frm_month_g6_ParamLimits

0x9da7,	// (0x00046ba2) frm_month_g7_ParamLimits

0xef73,	// (0x0004bd6e) frm_month_g8_ParamLimits

0x9dba,	// (0x00046bb5) frm_month_g9_ParamLimits

0x9dc7,	// (0x00046bc2) frm_month_g10_ParamLimits

0x9dd4,	// (0x00046bcf) frm_month_g11_ParamLimits

0x9de1,	// (0x00046bdc) frm_month_g12_ParamLimits

0x9dee,	// (0x00046be9) frm_month_g13_ParamLimits

0x9dfb,	// (0x00046bf6) frm_month_g14_ParamLimits

0x9e0a,	// (0x00046c05) frm_month_g15_ParamLimits

0x9e19,	// (0x00046c14) frm_month_g16_ParamLimits

0xff08,	// (0x0004cd03) frm_month_g_ParamLimits

0xef80,	// (0x0004bd7b) cell_top_day_name_pane_t1_ParamLimits

0x9e28,	// (0x00046c23) cell_area_left_week_number_pane_g1_ParamLimits

0x9e37,	// (0x00046c32) cell_area_left_week_number_pane_t1_ParamLimits

0xceac,	// (0x00049ca7) cell_month_view_pane_g1_ParamLimits

0x9e4d,	// (0x00046c48) cell_month_view_pane_t1_ParamLimits

0xa734,	// (0x0004752f) main_clock2_btn_pane_g1

0xf0bc,	// (0x0004beb7) main_clock2_btn_pane_t1

0xb086,	// (0x00047e81) listscroll_cmail_pane_ParamLimits

0xe79d,	// (0x0004b598) main_sp_fs_email_pane_g1_ParamLimits

0xe7a9,	// (0x0004b5a4) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0004cae0) main_sp_fs_email_pane_g_ParamLimits

0xeaeb,	// (0x0004b8e6) list_recal_day_pane_ParamLimits

0xeafc,	// (0x0004b8f7) mian_recal_day_pane_t1

0x1a29,	// (0x0003e824) list_single_dyc_row_text_pane_t4_ParamLimits

0x1a29,	// (0x0003e824) list_single_dyc_row_text_pane_t4

0x1a60,	// (0x0003e85b) list_single_dyc_row_text_pane_t5_ParamLimits

0x1a60,	// (0x0003e85b) list_single_dyc_row_text_pane_t5

0x1ad6,	// (0x0003e8d1) list_single_dyc_row_text_pane_t6_ParamLimits

0x1ad6,	// (0x0003e8d1) list_single_dyc_row_text_pane_t6

0x4501,	// (0x000412fc) aid_mgn_list_cale_time_pane

0xb086,	// (0x00047e81) main_gallery2_pane_ParamLimits

0xd06a,	// (0x00049e65) main_clock2_pane_cp01_t1

0xd07a,	// (0x00049e75) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0004c5bf) main_clock2_pane_cp01_t

0x2c91,	// (0x0003fa8c) cale_week_scroll_pane_g16_ParamLimits

0x2c91,	// (0x0003fa8c) cale_week_scroll_pane_g16

0xa9c6,	// (0x000477c1) vorec_slider_pane

0xf056,	// (0x0004be51) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
