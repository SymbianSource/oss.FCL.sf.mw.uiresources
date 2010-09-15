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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00083927 };

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
0x0d9e,	// (0x000846c5) Screen

0x0daa,	// (0x000846d1) application_window

0x0de6,	// (0x0008470d) area_bottom_pane_ParamLimits

0x0de6,	// (0x0008470d) area_bottom_pane

0x0e1f,	// (0x00084746) area_top_pane_ParamLimits

0x0e1f,	// (0x00084746) area_top_pane

0xa699,	// (0x0008dfc0) call_video_uplink_pane_ParamLimits

0xa699,	// (0x0008dfc0) call_video_uplink_pane

0x0ead,	// (0x000847d4) main_pane_ParamLimits

0x0ead,	// (0x000847d4) main_pane

0xbad6,	// (0x0008f3fd) context_pane

0x4fc8,	// (0x000888ef) navi_pane

0x4ffa,	// (0x00088921) popup_cale_events_window_ParamLimits

0x4ffa,	// (0x00088921) popup_cale_events_window

0xbae9,	// (0x0008f410) popup_mup_playback_window

0x5012,	// (0x00088939) signal_pane

0x18f5,	// (0x0008521c) main_browser_pane

0x21c2,	// (0x00085ae9) main_burst_pane

0x4d30,	// (0x00088657) main_calc_pane

0xba76,	// (0x0008f39d) main_cale_day_pane

0x1bba,	// (0x000854e1) main_cale_month_pane

0xba76,	// (0x0008f39d) main_cale_week_pane

0x21c2,	// (0x00085ae9) main_call_pane

0x1449,	// (0x00084d70) main_call_poc_pane

0x21c2,	// (0x00085ae9) main_camera_pane

0x21c2,	// (0x00085ae9) main_chi_dic_pane

0x3ae2,	// (0x00087409) main_clock_pane

0x1449,	// (0x00084d70) main_fmradio_pane

0x21c2,	// (0x00085ae9) main_graph_messa_pane

0x1449,	// (0x00084d70) main_help_pane

0x18f5,	// (0x0008521c) main_im_pane

0x16a4,	// (0x00084fcb) main_image_pane_ParamLimits

0x16a4,	// (0x00084fcb) main_image_pane

0x1449,	// (0x00084d70) main_location2_pane

0x21c2,	// (0x00085ae9) main_location_pane

0x16a4,	// (0x00084fcb) main_messa_pane

0x1449,	// (0x00084d70) main_mp2_pane

0x21c2,	// (0x00085ae9) main_mp_pane

0x1449,	// (0x00084d70) main_msg_pane

0x1449,	// (0x00084d70) main_mup_eq_pane

0x1449,	// (0x00084d70) main_mup_pane

0x18f5,	// (0x0008521c) main_notes_pane

0x1449,	// (0x00084d70) main_pec_pane

0x1449,	// (0x00084d70) main_phob_pane

0x1449,	// (0x00084d70) main_pinb_pane

0x1449,	// (0x00084d70) main_postcard_pane

0x1449,	// (0x00084d70) main_qdial_pane

0x21c2,	// (0x00085ae9) main_skin_pane

0x1449,	// (0x00084d70) main_smil2_pane

0x21c2,	// (0x00085ae9) main_smil_pane

0x21c2,	// (0x00085ae9) main_video_pane

0x21c2,	// (0x00085ae9) main_video_tele_pane

0x16a4,	// (0x00084fcb) main_viewer_pane_ParamLimits

0x16a4,	// (0x00084fcb) main_viewer_pane

0x21c2,	// (0x00085ae9) main_vorec_pane

0x4d84,	// (0x000886ab) popup_blid_sat_info_window_ParamLimits

0x4d84,	// (0x000886ab) popup_blid_sat_info_window

0x4ddc,	// (0x00088703) popup_dyc_status_message_window_ParamLimits

0x4ddc,	// (0x00088703) popup_dyc_status_message_window

0x4df4,	// (0x0008871b) popup_grid_large_graphic_window_ParamLimits

0x4df4,	// (0x0008871b) popup_grid_large_graphic_window

0x4ea4,	// (0x000887cb) popup_loc_request_window_ParamLimits

0x4ea4,	// (0x000887cb) popup_loc_request_window

0x4fa0,	// (0x000888c7) popup_wml_address_window_ParamLimits

0x4fa0,	// (0x000888c7) popup_wml_address_window

0x4b6a,	// (0x00088491) call_muted_g1

0x47dd,	// (0x00088104) popup_call_audio_conf_window_ParamLimits

0x47dd,	// (0x00088104) popup_call_audio_conf_window

0x4b7e,	// (0x000884a5) popup_call_audio_first_window_ParamLimits

0x4b7e,	// (0x000884a5) popup_call_audio_first_window

0x4bf4,	// (0x0008851b) popup_call_audio_in_window_ParamLimits

0x4bf4,	// (0x0008851b) popup_call_audio_in_window

0x4c30,	// (0x00088557) popup_call_audio_out_window_ParamLimits

0x4c30,	// (0x00088557) popup_call_audio_out_window

0x4c6a,	// (0x00088591) popup_call_audio_second_window_ParamLimits

0x4c6a,	// (0x00088591) popup_call_audio_second_window

0x4cc0,	// (0x000885e7) popup_call_audio_wait_window_ParamLimits

0x4cc0,	// (0x000885e7) popup_call_audio_wait_window

0x4cf5,	// (0x0008861c) popup_number_entry_window_ParamLimits

0x4cf5,	// (0x0008861c) popup_number_entry_window

0xeddd,	// (0x00092704) bg_popup_call_pane_cp05_ParamLimits

0xeddd,	// (0x00092704) bg_popup_call_pane_cp05

0xedfd,	// (0x00092724) popup_number_entry_window_t1

0xee10,	// (0x00092737) popup_number_entry_window_t2

0xee22,	// (0x00092749) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0009296c) popup_number_entry_window_t

0x1069,	// (0x00084990) text_title_cp2

0x107c,	// (0x000849a3) bg_popup_call_pane_cp_ParamLimits

0x107c,	// (0x000849a3) bg_popup_call_pane_cp

0x108a,	// (0x000849b1) call_thumbnail_pane

0x1092,	// (0x000849b9) popup_call_audio_in_window_g1_ParamLimits

0x1092,	// (0x000849b9) popup_call_audio_in_window_g1

0x109e,	// (0x000849c5) popup_call_audio_in_window_g2_ParamLimits

0x109e,	// (0x000849c5) popup_call_audio_in_window_g2

0x10aa,	// (0x000849d1) popup_call_audio_in_window_g3_ParamLimits

0x10aa,	// (0x000849d1) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x00092975) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x00092975) popup_call_audio_in_window_g

0x10b6,	// (0x000849dd) popup_call_audio_in_window_t1_ParamLimits

0x10b6,	// (0x000849dd) popup_call_audio_in_window_t1

0x10d2,	// (0x000849f9) popup_call_audio_in_window_t2_ParamLimits

0x10d2,	// (0x000849f9) popup_call_audio_in_window_t2

0x10ee,	// (0x00084a15) popup_call_audio_in_window_t3_ParamLimits

0x10ee,	// (0x00084a15) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0009297c) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0009297c) popup_call_audio_in_window_t

0x107c,	// (0x000849a3) bg_popup_call_pane_cp01_ParamLimits

0x107c,	// (0x000849a3) bg_popup_call_pane_cp01

0x108a,	// (0x000849b1) call_thumbnail_pane_cp02

0x1101,	// (0x00084a28) call_type_pane_cp022

0x1109,	// (0x00084a30) popup_call_audio_out_window_g1_ParamLimits

0x1109,	// (0x00084a30) popup_call_audio_out_window_g1

0x111b,	// (0x00084a42) popup_call_audio_out_window_g2_ParamLimits

0x111b,	// (0x00084a42) popup_call_audio_out_window_g2

0x1127,	// (0x00084a4e) popup_call_audio_out_window_g3_ParamLimits

0x1127,	// (0x00084a4e) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x00092983) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x00092983) popup_call_audio_out_window_g

0x1139,	// (0x00084a60) popup_call_audio_out_window_t1_ParamLimits

0x1139,	// (0x00084a60) popup_call_audio_out_window_t1

0x1151,	// (0x00084a78) popup_call_audio_out_window_t2_ParamLimits

0x1151,	// (0x00084a78) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0009298a) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0009298a) popup_call_audio_out_window_t

0x1166,	// (0x00084a8d) bg_popup_call_pane_ParamLimits

0x1166,	// (0x00084a8d) bg_popup_call_pane

0x11ea,	// (0x00084b11) call_thumbnail_pane_cp_ParamLimits

0x11ea,	// (0x00084b11) call_thumbnail_pane_cp

0x120e,	// (0x00084b35) call_type_pane_cp01_ParamLimits

0x120e,	// (0x00084b35) call_type_pane_cp01

0x1252,	// (0x00084b79) popup_call_audio_first_window_g1_ParamLimits

0x1252,	// (0x00084b79) popup_call_audio_first_window_g1

0x129e,	// (0x00084bc5) popup_call_audio_first_window_g2_ParamLimits

0x129e,	// (0x00084bc5) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0009298f) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0009298f) popup_call_audio_first_window_g

0x12e2,	// (0x00084c09) popup_call_audio_first_window_t1_ParamLimits

0x12e2,	// (0x00084c09) popup_call_audio_first_window_t1

0x138e,	// (0x00084cb5) popup_call_audio_first_window_t4_ParamLimits

0x138e,	// (0x00084cb5) popup_call_audio_first_window_t4

0x141a,	// (0x00084d41) popup_call_audio_first_window_t5_ParamLimits

0x141a,	// (0x00084d41) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x00092994) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x00092994) popup_call_audio_first_window_t

0x1449,	// (0x00084d70) bg_popup_call_pane_cp02

0x1453,	// (0x00084d7a) call_type_pane_cp023

0x145b,	// (0x00084d82) popup_call_audio_wait_window_g1

0x1463,	// (0x00084d8a) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0009299b) popup_call_audio_wait_window_g

0x146b,	// (0x00084d92) popup_call_audio_wait_window_t3

0x1479,	// (0x00084da0) bg_popup_call_pane_cp03_ParamLimits

0x1479,	// (0x00084da0) bg_popup_call_pane_cp03

0x14d9,	// (0x00084e00) call_thumbnail_pane_cp011_ParamLimits

0x14d9,	// (0x00084e00) call_thumbnail_pane_cp011

0x14e5,	// (0x00084e0c) call_type_pane_cp034_ParamLimits

0x14e5,	// (0x00084e0c) call_type_pane_cp034

0x1521,	// (0x00084e48) popup_call_audio_second_window_g1_ParamLimits

0x1521,	// (0x00084e48) popup_call_audio_second_window_g1

0x155d,	// (0x00084e84) popup_call_audio_second_window_g2_ParamLimits

0x155d,	// (0x00084e84) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x000929a0) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x000929a0) popup_call_audio_second_window_g

0x1599,	// (0x00084ec0) popup_call_audio_second_window_t1_ParamLimits

0x1599,	// (0x00084ec0) popup_call_audio_second_window_t1

0x161a,	// (0x00084f41) popup_call_audio_second_window_t2_ParamLimits

0x161a,	// (0x00084f41) popup_call_audio_second_window_t2

0x1650,	// (0x00084f77) popup_call_audio_second_window_t3_ParamLimits

0x1650,	// (0x00084f77) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x000929a5) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x000929a5) popup_call_audio_second_window_t

0x1449,	// (0x00084d70) bg_popup_call_pane_cp04

0x1686,	// (0x00084fad) list_conf_pane

0x168e,	// (0x00084fb5) popup_call_audio_conf_window_t1

0x169c,	// (0x00084fc3) call_thumbnail_pane_g1

0x16a4,	// (0x00084fcb) bg_pinb_pane_ParamLimits

0x16a4,	// (0x00084fcb) bg_pinb_pane

0x16b2,	// (0x00084fd9) find_pinb_pane

0x16a4,	// (0x00084fcb) listscroll_pinb_pane_ParamLimits

0x16a4,	// (0x00084fcb) listscroll_pinb_pane

0x16bc,	// (0x00084fe3) pinb_bg_pane_g1

0x16bc,	// (0x00084fe3) pinb_bg_pane_g2

0x16bc,	// (0x00084fe3) pinb_bg_pane_g3

0x16bc,	// (0x00084fe3) pinb_bg_pane_g4

0x16bc,	// (0x00084fe3) pinb_bg_pane_g5

0x16bc,	// (0x00084fe3) pinb_bg_pane_g6

0x16bc,	// (0x00084fe3) pinb_bg_pane_g7

0x16bc,	// (0x00084fe3) pinb_bg_pane_g8

0x16bc,	// (0x00084fe3) pinb_bg_pane_g9

0x16bc,	// (0x00084fe3) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x000929ac) pinb_bg_pane_g

0xedc5,	// (0x000926ec) grid_pinb_pane

0xedc5,	// (0x000926ec) list_pinb_pane

0xedcf,	// (0x000926f6) scroll_pane_cp01_ParamLimits

0xedcf,	// (0x000926f6) scroll_pane_cp01

0x16c6,	// (0x00084fed) find_pinb_pane_g1_ParamLimits

0x16c6,	// (0x00084fed) find_pinb_pane_g1

0x16de,	// (0x00085005) find_pinb_pane_t1

0x16f0,	// (0x00085017) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x000929c6) find_pinb_pane_t

0x1705,	// (0x0008502c) input_focus_pane_cp01_ParamLimits

0x1705,	// (0x0008502c) input_focus_pane_cp01

0x1711,	// (0x00085038) cell_pinb_pane_ParamLimits

0x1711,	// (0x00085038) cell_pinb_pane

0x171f,	// (0x00085046) cell_pinb_pane_g1_ParamLimits

0x171f,	// (0x00085046) cell_pinb_pane_g1

0x172d,	// (0x00085054) cell_pinb_pane_g2_ParamLimits

0x172d,	// (0x00085054) cell_pinb_pane_g2

0x172d,	// (0x00085054) cell_pinb_pane_g3_ParamLimits

0x172d,	// (0x00085054) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x000929cb) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x000929cb) cell_pinb_pane_g

0x1449,	// (0x00084d70) grid_highlight_pane_cp01

0x1711,	// (0x00085038) list_pinb_item_pane_ParamLimits

0x1711,	// (0x00085038) list_pinb_item_pane

0xedc5,	// (0x000926ec) list_highlight_pane_cp02

0x173b,	// (0x00085062) list_pinb_item_pane_g1_ParamLimits

0x173b,	// (0x00085062) list_pinb_item_pane_g1

0x172d,	// (0x00085054) list_pinb_item_pane_g2_ParamLimits

0x172d,	// (0x00085054) list_pinb_item_pane_g2

0x171f,	// (0x00085046) list_pinb_item_pane_g3_ParamLimits

0x171f,	// (0x00085046) list_pinb_item_pane_g3

0x172d,	// (0x00085054) list_pinb_item_pane_g4_ParamLimits

0x172d,	// (0x00085054) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x000929d2) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x000929d2) list_pinb_item_pane_g

0x1749,	// (0x00085070) list_pinb_item_pane_t1_ParamLimits

0x1749,	// (0x00085070) list_pinb_item_pane_t1

0x177b,	// (0x000850a2) calc_display_pane

0x17a0,	// (0x000850c7) calc_paper_pane

0x17c3,	// (0x000850ea) grid_calc_pane

0x1449,	// (0x00084d70) bg_list_pane_cp01

0x17f1,	// (0x00085118) clock_g1

0x17f9,	// (0x00085120) clock_g2

0x0001,

0xf0b4,	// (0x000929db) clock_g

0x1801,	// (0x00085128) clock_t1_ParamLimits

0x1801,	// (0x00085128) clock_t1

0x1816,	// (0x0008513d) clock_t2_ParamLimits

0x1816,	// (0x0008513d) clock_t2

0x1828,	// (0x0008514f) clock_t3_ParamLimits

0x1828,	// (0x0008514f) clock_t3

0x183a,	// (0x00085161) clock_t4_ParamLimits

0x183a,	// (0x00085161) clock_t4

0x184c,	// (0x00085173) clock_t5_ParamLimits

0x184c,	// (0x00085173) clock_t5

0x1861,	// (0x00085188) clock_t6_ParamLimits

0x1861,	// (0x00085188) clock_t6

0x1873,	// (0x0008519a) clock_t7_ParamLimits

0x1873,	// (0x0008519a) clock_t7

0x1885,	// (0x000851ac) clock_t8_ParamLimits

0x1885,	// (0x000851ac) clock_t8

0x1899,	// (0x000851c0) clock_t9_ParamLimits

0x1899,	// (0x000851c0) clock_t9

0x0008,

0xf0b9,	// (0x000929e0) clock_t_ParamLimits

0xf0b9,	// (0x000929e0) clock_t

0x18ad,	// (0x000851d4) popup_clock_analogue_window_cp02

0x18ad,	// (0x000851d4) popup_clock_digital_window_cp01

0x1449,	// (0x00084d70) listscroll_help_pane

0x1449,	// (0x00084d70) phob_pre_status_pane

0x18b5,	// (0x000851dc) grid_qdial_pane

0x16a4,	// (0x00084fcb) listscroll_mce_pane

0x16a4,	// (0x00084fcb) bg_notes_pane

0x18bf,	// (0x000851e6) list_notes_pane

0x18cd,	// (0x000851f4) scroll_pane_cp06

0x18e1,	// (0x00085208) bg_calc_paper_pane

0xa6bf,	// (0x0008dfe6) list_calc_pane

0x18f5,	// (0x0008521c) bg_calc_display_pane

0x1901,	// (0x00085228) calc_display_pane_t1

0x1913,	// (0x0008523a) calc_display_pane_t2

0xa6d9,	// (0x0008e000) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x000929f3) calc_display_pane_t

0x1925,	// (0x0008524c) cell_calc_pane_ParamLimits

0x1925,	// (0x0008524c) cell_calc_pane

0x195a,	// (0x00085281) bg_calc_paper_pane_g1

0x1966,	// (0x0008528d) bg_calc_paper_pane_g2

0x1972,	// (0x00085299) bg_calc_paper_pane_g3

0x197e,	// (0x000852a5) bg_calc_paper_pane_g4

0x198a,	// (0x000852b1) bg_calc_paper_pane_g5

0x1996,	// (0x000852bd) bg_calc_paper_pane_g6

0x19a5,	// (0x000852cc) bg_calc_paper_pane_g7

0x19b4,	// (0x000852db) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x000929fa) bg_calc_paper_pane_g

0x19c7,	// (0x000852ee) calc_bg_paper_pane_g9

0x19da,	// (0x00085301) list_calc_item_pane_ParamLimits

0x19da,	// (0x00085301) list_calc_item_pane

0x19ef,	// (0x00085316) list_calc_item_pane_g1

0xa6eb,	// (0x0008e012) list_calc_item_pane_t1_ParamLimits

0xa6eb,	// (0x0008e012) list_calc_item_pane_t1

0x19fc,	// (0x00085323) list_calc_item_pane_t2_ParamLimits

0x19fc,	// (0x00085323) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x00092a0b) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x00092a0b) list_calc_item_pane_t

0x16bc,	// (0x00084fe3) cell_calc_pane_g1

0x1a2e,	// (0x00085355) grid_highlight_pane_cp02

0x1a50,	// (0x00085377) bg_calc_display_pane_g1

0x1a59,	// (0x00085380) bg_calc_display_pane_g2

0xa6fd,	// (0x0008e024) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x00092a15) bg_calc_display_pane_g

0x1a63,	// (0x0008538a) cell_qdial_pane_ParamLimits

0x1a63,	// (0x0008538a) cell_qdial_pane

0x1a77,	// (0x0008539e) cell_qdial_pane_g1_ParamLimits

0x1a77,	// (0x0008539e) cell_qdial_pane_g1

0x1a8d,	// (0x000853b4) cell_qdial_pane_g2_ParamLimits

0x1a8d,	// (0x000853b4) cell_qdial_pane_g2

0x1a9d,	// (0x000853c4) cell_qdial_pane_g3_ParamLimits

0x1a9d,	// (0x000853c4) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x00092a1c) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x00092a1c) cell_qdial_pane_g

0x1abf,	// (0x000853e6) cell_qdial_pane_t1_ParamLimits

0x1abf,	// (0x000853e6) cell_qdial_pane_t1

0x1ad7,	// (0x000853fe) cell_qdial_pane_t2_ParamLimits

0x1ad7,	// (0x000853fe) cell_qdial_pane_t2

0x1aea,	// (0x00085411) cell_qdial_pane_t3_ParamLimits

0x1aea,	// (0x00085411) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x00092a25) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x00092a25) cell_qdial_pane_t

0x1449,	// (0x00084d70) grid_highlight_pane_cp04

0x1afd,	// (0x00085424) thumbnail_qdial_pane_ParamLimits

0x1afd,	// (0x00085424) thumbnail_qdial_pane

0x1b59,	// (0x00085480) list_help_pane

0x1b62,	// (0x00085489) scroll_pane_cp02

0x1b6b,	// (0x00085492) help_list_pane_t1_ParamLimits

0x1b6b,	// (0x00085492) help_list_pane_t1

0xa706,	// (0x0008e02d) bg_notes_pane_g2

0xa70e,	// (0x0008e035) bg_notes_pane_g3

0xa716,	// (0x0008e03d) notes_bg_pane_g1

0xa71e,	// (0x0008e045) notes_bg_pane_g4

0xa726,	// (0x0008e04d) notes_bg_pane_g5

0xa72e,	// (0x0008e055) notes_bg_pane_g6

0xa736,	// (0x0008e05d) notes_bg_pane_g7

0xa73e,	// (0x0008e065) notes_bg_pane_g8

0xa746,	// (0x0008e06d) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x00092a43) notes_bg_pane_g

0x1b8a,	// (0x000854b1) list_notes_text_pane_ParamLimits

0x1b8a,	// (0x000854b1) list_notes_text_pane

0x1ba0,	// (0x000854c7) list_notes_text_pane_g1

0xa74e,	// (0x0008e075) list_notes_text_pane_t1

0x1bba,	// (0x000854e1) listscroll_cale_week_pane

0x1bef,	// (0x00085516) bg_cale_heading_pane

0x1c07,	// (0x0008552e) bg_cale_pane_cp01

0x1c24,	// (0x0008554b) cale_week_corner_pane

0x1c43,	// (0x0008556a) cale_week_day_heading_pane

0x1c60,	// (0x00085587) cale_week_scroll_pane_g1

0x1c73,	// (0x0008559a) cale_week_scroll_pane_g2

0x1c8b,	// (0x000855b2) cale_week_scroll_pane_g3

0x1ca3,	// (0x000855ca) cale_week_scroll_pane_g4

0x1cbb,	// (0x000855e2) cale_week_scroll_pane_g5

0x1cdb,	// (0x00085602) cale_week_scroll_pane_g6

0x1cfb,	// (0x00085622) cale_week_scroll_pane_g7

0x1d1b,	// (0x00085642) cale_week_scroll_pane_g8

0x1d3f,	// (0x00085666) cale_week_scroll_pane_g9

0x1d57,	// (0x0008567e) cale_week_scroll_pane_g10

0x1d6f,	// (0x00085696) cale_week_scroll_pane_g11

0x1d87,	// (0x000856ae) cale_week_scroll_pane_g12

0x1d9f,	// (0x000856c6) cale_week_scroll_pane_g13

0x1d9f,	// (0x000856c6) cale_week_scroll_pane_g14

0x1d9f,	// (0x000856c6) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x00092a52) cale_week_scroll_pane_g

0x1ddb,	// (0x00085702) cale_week_time_pane

0x1dff,	// (0x00085726) grid_cale_week_pane

0x1e37,	// (0x0008575e) scroll_pane_cp08

0x1e54,	// (0x0008577b) cell_cale_week_pane_ParamLimits

0x1e54,	// (0x0008577b) cell_cale_week_pane

0x1ee2,	// (0x00085809) cale_week_day_heading_pane_t1

0x1f0c,	// (0x00085833) cale_week_day_heading_pane_t2

0x1f3b,	// (0x00085862) cale_week_day_heading_pane_t3

0x1f6a,	// (0x00085891) cale_week_day_heading_pane_t4

0x1f99,	// (0x000858c0) cale_week_day_heading_pane_t5

0x1fd0,	// (0x000858f7) cale_week_day_heading_pane_t6

0x2007,	// (0x0008592e) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x00092a73) cale_week_day_heading_pane_t

0x2031,	// (0x00085958) bg_cale_side_pane

0x203f,	// (0x00085966) cale_week_time_pane_t1

0x2059,	// (0x00085980) cale_week_time_pane_t2

0x2073,	// (0x0008599a) cale_week_time_pane_t3

0x208d,	// (0x000859b4) cale_week_time_pane_t4

0x20a7,	// (0x000859ce) cale_week_time_pane_t5

0x20c1,	// (0x000859e8) cale_week_time_pane_t6

0x20db,	// (0x00085a02) cale_week_time_pane_t7

0x20f5,	// (0x00085a1c) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x00092a82) cale_week_time_pane_t

0x2115,	// (0x00085a3c) cell_cale_week_pane_g2

0x2139,	// (0x00085a60) cell_cale_week_pane_g3_ParamLimits

0x2139,	// (0x00085a60) cell_cale_week_pane_g3

0x2151,	// (0x00085a78) grid_highlight_pane_cp07

0x2159,	// (0x00085a80) listscroll_gms_pane

0x2163,	// (0x00085a8a) grid_gms_pane

0x216c,	// (0x00085a93) listscroll_gms_pane_g1

0x2174,	// (0x00085a9b) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x00092a93) listscroll_gms_pane_g

0x217c,	// (0x00085aa3) scroll_pane_cp010

0x2187,	// (0x00085aae) cell_gms_pane_ParamLimits

0x2187,	// (0x00085aae) cell_gms_pane

0x2199,	// (0x00085ac0) cell_gms_pane_g1

0x21a1,	// (0x00085ac8) cell_gms_pane_g2

0x1ba0,	// (0x000854c7) cell_gms_pane_g3

0x21a9,	// (0x00085ad0) cell_gms_pane_g4

0x0003,

0xf171,	// (0x00092a98) cell_gms_pane_g

0x21b2,	// (0x00085ad9) grid_highlight_pane_cp09

0x4af2,	// (0x00088419) phob_pre_status_pane_g1

0x4afa,	// (0x00088421) phob_pre_status_pane_g2

0x4b02,	// (0x00088429) phob_pre_status_pane_g3

0x4b0a,	// (0x00088431) phob_pre_status_pane_g4

0x0004,

0xf548,	// (0x00092e6f) phob_pre_status_pane_g

0x4b1a,	// (0x00088441) phob_pre_status_pane_t1

0x4b28,	// (0x0008844f) phob_pre_status_pane_t2

0x4b38,	// (0x0008845f) phob_pre_status_pane_t3

0x0002,

0xf553,	// (0x00092e7a) phob_pre_status_pane_t

0x21c2,	// (0x00085ae9) bg_list_pane_cp05

0x21ca,	// (0x00085af1) grid_vorec_pane

0x21d2,	// (0x00085af9) vorec_t1

0x21e0,	// (0x00085b07) vorec_t2

0x21ee,	// (0x00085b15) vorec_t3

0x21fc,	// (0x00085b23) vorec_t4

0xeb79,	// (0x000924a0) vorec_t5

0x98bb,	// (0x0008d1e2) vorec_t6

0x0004,

0xf17a,	// (0x00092aa1) vorec_t

0x98c9,	// (0x0008d1f0) wait_bar_pane_cp01

0x2218,	// (0x00085b3f) cell_vorec_pane_ParamLimits

0x2218,	// (0x00085b3f) cell_vorec_pane

0xa75c,	// (0x0008e083) cell_vorec_pane_g1

0x1449,	// (0x00084d70) grid_highlight_pane_cp05

0xedcf,	// (0x000926f6) cams_zoom_pane

0xedcf,	// (0x000926f6) image_vga_pane

0x171f,	// (0x00085046) main_camera_pane_g1

0x171f,	// (0x00085046) main_camera_pane_g2

0x171f,	// (0x00085046) main_camera_pane_g3

0x171f,	// (0x00085046) main_camera_pane_g4

0x171f,	// (0x00085046) main_camera_pane_g5

0x171f,	// (0x00085046) main_camera_pane_g6

0x171f,	// (0x00085046) main_camera_pane_g7

0x0007,

0xf185,	// (0x00092aac) main_camera_pane_g

0x222b,	// (0x00085b52) main_camera_pane_t1

0x222b,	// (0x00085b52) main_camera_pane_t2

0x0001,

0xf196,	// (0x00092abd) main_camera_pane_t

0x2253,	// (0x00085b7a) cams_zoom_pane_cp_ParamLimits

0x2253,	// (0x00085b7a) cams_zoom_pane_cp

0x2287,	// (0x00085bae) image_cif_pane_ParamLimits

0x2287,	// (0x00085bae) image_cif_pane

0xedc5,	// (0x000926ec) image_subqcif_pane

0x2299,	// (0x00085bc0) main_video_pane_g1_ParamLimits

0x2299,	// (0x00085bc0) main_video_pane_g1

0x22c7,	// (0x00085bee) main_video_pane_g2_ParamLimits

0x22c7,	// (0x00085bee) main_video_pane_g2

0x2301,	// (0x00085c28) main_video_pane_g3_ParamLimits

0x2301,	// (0x00085c28) main_video_pane_g3

0x2301,	// (0x00085c28) main_video_pane_g4_ParamLimits

0x2301,	// (0x00085c28) main_video_pane_g4

0x2335,	// (0x00085c5c) main_video_pane_g5_ParamLimits

0x2335,	// (0x00085c5c) main_video_pane_g5

0x2343,	// (0x00085c6a) main_video_pane_g6_ParamLimits

0x2343,	// (0x00085c6a) main_video_pane_g6

0x0006,

0xf19b,	// (0x00092ac2) main_video_pane_g_ParamLimits

0xf19b,	// (0x00092ac2) main_video_pane_g

0x236b,	// (0x00085c92) main_video_pane_t1_ParamLimits

0x236b,	// (0x00085c92) main_video_pane_t1

0x23af,	// (0x00085cd6) cams_zoom_pane_g1

0x23af,	// (0x00085cd6) cams_zoom_pane_g2

0x23af,	// (0x00085cd6) cams_zoom_pane_g3

0x23af,	// (0x00085cd6) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x00092ad1) cams_zoom_pane_g

0x23cd,	// (0x00085cf4) grid_cams_pane

0x23e7,	// (0x00085d0e) linegrid_cams_pane

0x23fa,	// (0x00085d21) cell_cams_pane_ParamLimits

0x23fa,	// (0x00085d21) cell_cams_pane

0x241a,	// (0x00085d41) cams_burst_image_pane

0x2422,	// (0x00085d49) cell_cams_pane_g1

0x1449,	// (0x00084d70) grid_highlight_pane_cp03

0x16bc,	// (0x00084fe3) mp_bg_pane_g1

0xedc5,	// (0x000926ec) bg_list_pane_cp03

0xedc5,	// (0x000926ec) bg_mp_pane

0xedc5,	// (0x000926ec) grid_mp_pane

0x23af,	// (0x00085cd6) media_player_g1

0x37f0,	// (0x00087117) media_player_t1

0x37f0,	// (0x00087117) media_player_t2

0x37f0,	// (0x00087117) media_player_t3

0x37f0,	// (0x00087117) media_player_t4

0x37f0,	// (0x00087117) media_player_t5

0x37f0,	// (0x00087117) media_player_t6

0x37f0,	// (0x00087117) media_player_t7

0x0006,

0xf532,	// (0x00092e59) media_player_t

0xedc5,	// (0x000926ec) wait_bar_pane_cp02

0xf517,	// (0x00092e3e) main_usb_pane_t

0x3ae2,	// (0x00087409) cell_mp_pane

0x16bc,	// (0x00084fe3) cell_mp_pane_g1

0x1449,	// (0x00084d70) grid_highlight_pane_cp06

0x242a,	// (0x00085d51) grid_skin_colour_pane

0x2432,	// (0x00085d59) list_highlight_pane_cp03

0x243a,	// (0x00085d61) skin_g1

0x2442,	// (0x00085d69) skin_t1

0x2451,	// (0x00085d78) skin_t2

0x0001,

0xf1d8,	// (0x00092aff) skin_t

0x245f,	// (0x00085d86) cell_skin_colour_pane_ParamLimits

0x245f,	// (0x00085d86) cell_skin_colour_pane

0x247f,	// (0x00085da6) cell_skin_colour_pane_g1

0x24ea,	// (0x00085e11) call_video_g1_ParamLimits

0x24ea,	// (0x00085e11) call_video_g1

0x2506,	// (0x00085e2d) call_video_g2_ParamLimits

0x2506,	// (0x00085e2d) call_video_g2

0x0001,

0xf1dd,	// (0x00092b04) call_video_g_ParamLimits

0xf1dd,	// (0x00092b04) call_video_g

0x2558,	// (0x00085e7f) call_video_uplink_pane_cp1_ParamLimits

0x2558,	// (0x00085e7f) call_video_uplink_pane_cp1

0x25bd,	// (0x00085ee4) call_video_uplink_pane_cp2

0x25ff,	// (0x00085f26) video_down_crop_pane_ParamLimits

0x25ff,	// (0x00085f26) video_down_crop_pane

0x26e8,	// (0x0008600f) video_down_pane_ParamLimits

0x26e8,	// (0x0008600f) video_down_pane

0x27df,	// (0x00086106) video_down_subqcif_pane_ParamLimits

0x27df,	// (0x00086106) video_down_subqcif_pane

0x27f7,	// (0x0008611e) video_down_subqcif_pane_cp_ParamLimits

0x27f7,	// (0x0008611e) video_down_subqcif_pane_cp

0x2836,	// (0x0008615d) im_reading_pane_ParamLimits

0x2836,	// (0x0008615d) im_reading_pane

0x2848,	// (0x0008616f) im_writing_pane_ParamLimits

0x2848,	// (0x0008616f) im_writing_pane

0x2866,	// (0x0008618d) im_reading_pane_t1

0x28a0,	// (0x000861c7) list_im_pane

0x28b1,	// (0x000861d8) scroll_pane_cp07

0x28ca,	// (0x000861f1) im_writing_pane_t1_ParamLimits

0x28ca,	// (0x000861f1) im_writing_pane_t1

0x28df,	// (0x00086206) im_writing_pane_t2_ParamLimits

0x28df,	// (0x00086206) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x00092b0e) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x00092b0e) im_writing_pane_t

0x1449,	// (0x00084d70) input_focus_pane_cp04

0x1449,	// (0x00084d70) input_focus_pane_cp05

0x28fc,	// (0x00086223) list_im_single_pane_ParamLimits

0x28fc,	// (0x00086223) list_im_single_pane

0x2911,	// (0x00086238) list_single_im_pane_t1

0x21c2,	// (0x00085ae9) blid_accuracy_pane

0x21c2,	// (0x00085ae9) blid_compass_pane

0xba2e,	// (0x0008f355) main_location_t1

0xba2e,	// (0x0008f355) main_location_t2

0xba2e,	// (0x0008f355) main_location_t3

0x0002,

0xf541,	// (0x00092e68) main_location_t

0x1449,	// (0x00084d70) aid_levels_location

0x16bc,	// (0x00084fe3) blid_accuracy_pane_g1

0x16bc,	// (0x00084fe3) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00092b5d) blid_accuracy_pane_g

0x294b,	// (0x00086272) wml_content_pane

0x2989,	// (0x000862b0) wml_button_pane_ParamLimits

0x2989,	// (0x000862b0) wml_button_pane

0x299d,	// (0x000862c4) wml_list_single_large_pane_ParamLimits

0x299d,	// (0x000862c4) wml_list_single_large_pane

0x29b2,	// (0x000862d9) wml_list_single_medium_pane_ParamLimits

0x29b2,	// (0x000862d9) wml_list_single_medium_pane

0x29c9,	// (0x000862f0) wml_list_single_small_pane_ParamLimits

0x29c9,	// (0x000862f0) wml_list_single_small_pane

0x29e2,	// (0x00086309) wml_selection_box_pane_ParamLimits

0x29e2,	// (0x00086309) wml_selection_box_pane

0x29f5,	// (0x0008631c) wml_list_single_pane_t1

0x2a04,	// (0x0008632b) wml_list_single_medium_pane_t1

0x2a13,	// (0x0008633a) wml_list_single_large_pane_t1

0x2a22,	// (0x00086349) input_focus_pane_cp02_ParamLimits

0x2a22,	// (0x00086349) input_focus_pane_cp02

0x2a35,	// (0x0008635c) wml_selection_box_pane_g1

0x2a3e,	// (0x00086365) wml_selection_box_pane_t1_ParamLimits

0x2a3e,	// (0x00086365) wml_selection_box_pane_t1

0x16a4,	// (0x00084fcb) bg_wml_button_pane_ParamLimits

0x16a4,	// (0x00084fcb) bg_wml_button_pane

0x2a56,	// (0x0008637d) wml_button_pane_g1

0x2a5e,	// (0x00086385) wml_button_pane_t1

0x2a56,	// (0x0008637d) wml_button_bg_pane_g1

0x2a6e,	// (0x00086395) wml_button_bg_pane_g2

0x2a76,	// (0x0008639d) wml_button_bg_pane_g3

0x2a7e,	// (0x000863a5) wml_button_bg_pane_g4

0x2a86,	// (0x000863ad) wml_button_bg_pane_g5

0x2a8e,	// (0x000863b5) wml_button_bg_pane_g6

0x2a96,	// (0x000863bd) wml_button_bg_pane_g7

0x2a9e,	// (0x000863c5) wml_button_bg_pane_g8

0x2aa6,	// (0x000863cd) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x00092b13) wml_button_bg_pane_g

0x2aae,	// (0x000863d5) bg_list_pane_cp02

0x2ab6,	// (0x000863dd) mce_header_pane_ParamLimits

0x2ab6,	// (0x000863dd) mce_header_pane

0x2acc,	// (0x000863f3) mce_icon_pane

0x2acc,	// (0x000863f3) mce_image_pane

0x2ad5,	// (0x000863fc) mce_text_pane_ParamLimits

0x2ad5,	// (0x000863fc) mce_text_pane

0x2ae8,	// (0x0008640f) scroll_pane_cp03

0x2981,	// (0x000862a8) scroll_pane_cp04

0x2af2,	// (0x00086419) scroll_pane_cp05_ParamLimits

0x2af2,	// (0x00086419) scroll_pane_cp05

0x2afe,	// (0x00086425) mce_header_field_pane_ParamLimits

0x2afe,	// (0x00086425) mce_header_field_pane

0x2b15,	// (0x0008643c) mce_header_field_pane_2_ParamLimits

0x2b15,	// (0x0008643c) mce_header_field_pane_2

0x2b2b,	// (0x00086452) mce_header_field_pane_3

0x2b33,	// (0x0008645a) list_single_mce_message_pane_ParamLimits

0x2b33,	// (0x0008645a) list_single_mce_message_pane

0x2b49,	// (0x00086470) list_single_mce_smart_pane_ParamLimits

0x2b49,	// (0x00086470) list_single_mce_smart_pane

0x2b6a,	// (0x00086491) input_focus_pane_cp03

0x2b73,	// (0x0008649a) list_header_data_pane

0x2b7b,	// (0x000864a2) mce_header_field_pane_t1

0x2b8b,	// (0x000864b2) list_single_mce_header_pane_ParamLimits

0x2b8b,	// (0x000864b2) list_single_mce_header_pane

0x2b9f,	// (0x000864c6) list_single_mce_header_pane_t1

0x2bae,	// (0x000864d5) list_single_mce_message_pane_g1

0x2bb6,	// (0x000864dd) list_single_mce_message_pane_t1

0x2bea,	// (0x00086511) bg_cale_heading_pane_cp01_ParamLimits

0x2bea,	// (0x00086511) bg_cale_heading_pane_cp01

0x2c24,	// (0x0008654b) bg_cale_pane_cp02_ParamLimits

0x2c24,	// (0x0008654b) bg_cale_pane_cp02

0x2c51,	// (0x00086578) cale_month_corner_pane

0x2c70,	// (0x00086597) cale_month_day_heading_pane_ParamLimits

0x2c70,	// (0x00086597) cale_month_day_heading_pane

0x2cc2,	// (0x000865e9) cale_month_pane_g1_ParamLimits

0x2cc2,	// (0x000865e9) cale_month_pane_g1

0x2cf1,	// (0x00086618) cale_month_pane_g2_ParamLimits

0x2cf1,	// (0x00086618) cale_month_pane_g2

0x2d21,	// (0x00086648) cale_month_pane_g3_ParamLimits

0x2d21,	// (0x00086648) cale_month_pane_g3

0x2d5d,	// (0x00086684) cale_month_pane_g4_ParamLimits

0x2d5d,	// (0x00086684) cale_month_pane_g4

0x2d99,	// (0x000866c0) cale_month_pane_g5_ParamLimits

0x2d99,	// (0x000866c0) cale_month_pane_g5

0x2de1,	// (0x00086708) cale_month_pane_g6_ParamLimits

0x2de1,	// (0x00086708) cale_month_pane_g6

0x2e2d,	// (0x00086754) cale_month_pane_g7_ParamLimits

0x2e2d,	// (0x00086754) cale_month_pane_g7

0x2e7d,	// (0x000867a4) cale_month_pane_g8_ParamLimits

0x2e7d,	// (0x000867a4) cale_month_pane_g8

0x2ed1,	// (0x000867f8) cale_month_pane_g9_ParamLimits

0x2ed1,	// (0x000867f8) cale_month_pane_g9

0x2f23,	// (0x0008684a) cale_month_pane_g10_ParamLimits

0x2f23,	// (0x0008684a) cale_month_pane_g10

0x2f75,	// (0x0008689c) cale_month_pane_g11_ParamLimits

0x2f75,	// (0x0008689c) cale_month_pane_g11

0x2fc7,	// (0x000868ee) cale_month_pane_g12_ParamLimits

0x2fc7,	// (0x000868ee) cale_month_pane_g12

0x3019,	// (0x00086940) cale_month_pane_g13_ParamLimits

0x3019,	// (0x00086940) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x00092b26) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x00092b26) cale_month_pane_g

0x307d,	// (0x000869a4) cale_month_week_pane

0x30a1,	// (0x000869c8) grid_cale_month_pane_ParamLimits

0x30a1,	// (0x000869c8) grid_cale_month_pane

0x30ea,	// (0x00086a11) cale_month_day_heading_pane_t1

0x312c,	// (0x00086a53) cale_month_day_heading_pane_t2

0x3161,	// (0x00086a88) cale_month_day_heading_pane_t3

0x3196,	// (0x00086abd) cale_month_day_heading_pane_t4

0x31d3,	// (0x00086afa) cale_month_day_heading_pane_t5

0x3218,	// (0x00086b3f) cale_month_day_heading_pane_t6

0x325d,	// (0x00086b84) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x00092b41) cale_month_day_heading_pane_t

0x2031,	// (0x00085958) bg_cale_side_pane_cp01

0x32aa,	// (0x00086bd1) cale_month_week_pane_t1

0x32c3,	// (0x00086bea) cale_month_week_pane_t2

0x32dc,	// (0x00086c03) cale_month_week_pane_t3

0x32f5,	// (0x00086c1c) cale_month_week_pane_t4

0x330e,	// (0x00086c35) cale_month_week_pane_t5

0x3327,	// (0x00086c4e) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x00092b50) cale_month_week_pane_t

0x3340,	// (0x00086c67) cell_cale_month_pane_ParamLimits

0x3340,	// (0x00086c67) cell_cale_month_pane

0xa766,	// (0x0008e08d) cell_cale_month_pane_g1

0x346e,	// (0x00086d95) cell_cale_month_pane_t1_ParamLimits

0x346e,	// (0x00086d95) cell_cale_month_pane_t1

0x2151,	// (0x00085a78) grid_highlight_pane_cp08

0x16bc,	// (0x00084fe3) main_smil_g1

0x349a,	// (0x00086dc1) smil_status_pane

0x34a5,	// (0x00086dcc) smil_text_pane

0xb906,	// (0x0008f22d) bg_popup_call3_rect_pane_g8

0xb90e,	// (0x0008f235) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x00092de9) bg_popup_call3_rect_pane_g

0xbb4b,	// (0x0008f472) smil_status_volume_pane_g1

0x34b9,	// (0x00086de0) smil_status_pane_t1

0xbb7e,	// (0x0008f4a5) volume_smil_pane

0x34d0,	// (0x00086df7) list_smil_text_pane

0x34da,	// (0x00086e01) scroll_pane_cp011

0x34e5,	// (0x00086e0c) smil_text_list_pane_t1_ParamLimits

0x34e5,	// (0x00086e0c) smil_text_list_pane_t1

0xa772,	// (0x0008e099) aid_volume_smil_ParamLimits

0xa772,	// (0x0008e099) aid_volume_smil

0x16bc,	// (0x00084fe3) smil_volume_pane_g1

0x16bc,	// (0x00084fe3) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00092b5d) smil_volume_pane_g

0x1bba,	// (0x000854e1) listscroll_cale_day_pane

0x3529,	// (0x00086e50) bg_cale_pane

0x3541,	// (0x00086e68) list_cale_pane

0x3564,	// (0x00086e8b) scroll_pane_cp09

0x3575,	// (0x00086e9c) cale_bg_pane_g1

0x357d,	// (0x00086ea4) cale_bg_pane_g2

0x3585,	// (0x00086eac) cale_bg_pane_g3

0x358d,	// (0x00086eb4) cale_bg_pane_g4

0x3595,	// (0x00086ebc) cale_bg_pane_g5

0x359d,	// (0x00086ec4) cale_bg_pane_g6

0x35a5,	// (0x00086ecc) cale_bg_pane_g7

0x35ad,	// (0x00086ed4) cale_bg_pane_g8

0x35b5,	// (0x00086edc) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00092b62) cale_bg_pane_g

0x35c5,	// (0x00086eec) list_cale_time_pane_ParamLimits

0x35c5,	// (0x00086eec) list_cale_time_pane

0x35db,	// (0x00086f02) list_cale_time_pane_g1_ParamLimits

0x35db,	// (0x00086f02) list_cale_time_pane_g1

0x35e7,	// (0x00086f0e) list_cale_time_pane_g2_ParamLimits

0x35e7,	// (0x00086f0e) list_cale_time_pane_g2

0x35f4,	// (0x00086f1b) list_cale_time_pane_g3_ParamLimits

0x35f4,	// (0x00086f1b) list_cale_time_pane_g3

0x3602,	// (0x00086f29) list_cale_time_pane_g4_ParamLimits

0x3602,	// (0x00086f29) list_cale_time_pane_g4

0x3610,	// (0x00086f37) list_cale_time_pane_g5_ParamLimits

0x3610,	// (0x00086f37) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00092b75) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00092b75) list_cale_time_pane_g

0x362b,	// (0x00086f52) list_cale_time_pane_t1_ParamLimits

0x362b,	// (0x00086f52) list_cale_time_pane_t1

0x3653,	// (0x00086f7a) list_cale_time_pane_t2_ParamLimits

0x3653,	// (0x00086f7a) list_cale_time_pane_t2

0x3cfb,	// (0x00087622) aid_blid_cardinal_pane

0x3d45,	// (0x0008766c) compass_pane_t4

0x367b,	// (0x00086fa2) list_cale_time_pane_t4_ParamLimits

0x367b,	// (0x00086fa2) list_cale_time_pane_t4

0x3d53,	// (0x0008767a) compass_pane_t5

0x3d61,	// (0x00087688) compass_pane_t6

0x3d6f,	// (0x00087696) compass_pane_t7

0x3e07,	// (0x0008772e) navi_pane_cc_t1

0x4026,	// (0x0008794d) aid_phob_thumbnail_center_pane

0x4462,	// (0x00087d89) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00092b82) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00092b82) list_cale_time_pane_t

0x107c,	// (0x000849a3) bg_popup_window_pane_cp02_ParamLimits

0x107c,	// (0x000849a3) bg_popup_window_pane_cp02

0x36a3,	// (0x00086fca) heading_pane_cp01_ParamLimits

0x36a3,	// (0x00086fca) heading_pane_cp01

0x36af,	// (0x00086fd6) loc_req_pane_ParamLimits

0x36af,	// (0x00086fd6) loc_req_pane

0x36bf,	// (0x00086fe6) loc_type_pane_ParamLimits

0x36bf,	// (0x00086fe6) loc_type_pane

0x36d1,	// (0x00086ff8) loc_type_pane_t1_ParamLimits

0x36d1,	// (0x00086ff8) loc_type_pane_t1

0x36e3,	// (0x0008700a) loc_type_pane_t2_ParamLimits

0x36e3,	// (0x0008700a) loc_type_pane_t2

0x36f5,	// (0x0008701c) loc_type_pane_t3_ParamLimits

0x36f5,	// (0x0008701c) loc_type_pane_t3

0x0002,

0xf262,	// (0x00092b89) loc_type_pane_t_ParamLimits

0xf262,	// (0x00092b89) loc_type_pane_t

0x3707,	// (0x0008702e) list_loc_req_pane

0x3711,	// (0x00087038) scroll_pane_cp012

0x371c,	// (0x00087043) list_single_loc_request_popup_menu_pane_ParamLimits

0x371c,	// (0x00087043) list_single_loc_request_popup_menu_pane

0x3729,	// (0x00087050) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3729,	// (0x00087050) list_single_loc_request_popup_menu_pane_g1

0x3735,	// (0x0008705c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3735,	// (0x0008705c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00092b90) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00092b90) list_single_loc_request_popup_menu_pane_g

0x3741,	// (0x00087068) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3741,	// (0x00087068) list_single_loc_request_popup_menu_pane_t1

0x16a4,	// (0x00084fcb) bg_popup_window_pane_cp03_ParamLimits

0x16a4,	// (0x00084fcb) bg_popup_window_pane_cp03

0x3757,	// (0x0008707e) heading_loc_req_pane_ParamLimits

0x3757,	// (0x0008707e) heading_loc_req_pane

0x3763,	// (0x0008708a) popup_dyc_status_message_window_g1_ParamLimits

0x3763,	// (0x0008708a) popup_dyc_status_message_window_g1

0x3777,	// (0x0008709e) popup_dyc_status_message_window_t1_ParamLimits

0x3777,	// (0x0008709e) popup_dyc_status_message_window_t1

0x378c,	// (0x000870b3) popup_dyc_status_message_window_t2_ParamLimits

0x378c,	// (0x000870b3) popup_dyc_status_message_window_t2

0x37a1,	// (0x000870c8) popup_dyc_status_message_window_t3_ParamLimits

0x37a1,	// (0x000870c8) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00092b95) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00092b95) popup_dyc_status_message_window_t

0x1449,	// (0x00084d70) bg_heading_pane_cp01

0x37bd,	// (0x000870e4) heading_loc_req_pane_g1

0x37c5,	// (0x000870ec) heading_loc_req_pane_g2

0x37cd,	// (0x000870f4) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00092b9c) heading_loc_req_pane_g

0x37d5,	// (0x000870fc) heading_loc_req_pane_t1

0x3800,	// (0x00087127) bg_popup_sub_pane_cp01_ParamLimits

0x3800,	// (0x00087127) bg_popup_sub_pane_cp01

0x380e,	// (0x00087135) popup_cale_events_window_g1_ParamLimits

0x380e,	// (0x00087135) popup_cale_events_window_g1

0x382e,	// (0x00087155) popup_cale_events_window_g2_ParamLimits

0x382e,	// (0x00087155) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00092bbe) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00092bbe) popup_cale_events_window_g

0x384e,	// (0x00087175) popup_cale_events_window_t1_ParamLimits

0x384e,	// (0x00087175) popup_cale_events_window_t1

0x3860,	// (0x00087187) popup_cale_events_window_t2_ParamLimits

0x3860,	// (0x00087187) popup_cale_events_window_t2

0x389e,	// (0x000871c5) popup_cale_events_window_t3_ParamLimits

0x389e,	// (0x000871c5) popup_cale_events_window_t3

0x38d8,	// (0x000871ff) popup_cale_events_window_t4_ParamLimits

0x38d8,	// (0x000871ff) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x00092bc3) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x00092bc3) popup_cale_events_window_t

0x390e,	// (0x00087235) call_type_pane

0x391e,	// (0x00087245) popup_call_status_window_g1

0x3932,	// (0x00087259) popup_call_status_window_g2

0x3946,	// (0x0008726d) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00092bcc) popup_call_status_window_g

0x3955,	// (0x0008727c) call_type_pane_g1

0x395e,	// (0x00087285) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00092bd3) call_type_pane_g

0x1449,	// (0x00084d70) bg_popup_sub_pane_cp02

0x3967,	// (0x0008728e) listscroll_popup_wml_pane

0x396f,	// (0x00087296) list_wml_pane

0x3979,	// (0x000872a0) scroll_pane_cp013

0x3984,	// (0x000872ab) list_single_graphic_popup_wml_pane_ParamLimits

0x3984,	// (0x000872ab) list_single_graphic_popup_wml_pane

0x16bc,	// (0x00084fe3) list_single_graphic_popup_wml_pane_g1

0x3998,	// (0x000872bf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x00092bd8) list_single_graphic_popup_wml_pane_g

0x39a0,	// (0x000872c7) list_single_graphic_popup_wml_pane_t1

0x39b6,	// (0x000872dd) aid_call_pane

0x169c,	// (0x00084fc3) popup_clock_analogue_window_g1

0x169c,	// (0x00084fc3) popup_clock_analogue_window_g2

0xa7a0,	// (0x0008e0c7) popup_clock_analogue_window_g3

0xa7a0,	// (0x0008e0c7) popup_clock_analogue_window_g4

0x16bc,	// (0x00084fe3) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00092bdd) popup_clock_analogue_window_g

0xa7a8,	// (0x0008e0cf) popup_clock_analogue_window_t1

0xa7b6,	// (0x0008e0dd) clock_digital_number_pane_ParamLimits

0xa7b6,	// (0x0008e0dd) clock_digital_number_pane

0xa7c2,	// (0x0008e0e9) clock_digital_number_pane_cp02_ParamLimits

0xa7c2,	// (0x0008e0e9) clock_digital_number_pane_cp02

0xa7ce,	// (0x0008e0f5) clock_digital_number_pane_cp03_ParamLimits

0xa7ce,	// (0x0008e0f5) clock_digital_number_pane_cp03

0xa7da,	// (0x0008e101) clock_digital_number_pane_cp04_ParamLimits

0xa7da,	// (0x0008e101) clock_digital_number_pane_cp04

0xa7e6,	// (0x0008e10d) clock_digital_separator_pane_ParamLimits

0xa7e6,	// (0x0008e10d) clock_digital_separator_pane

0xa7f2,	// (0x0008e119) popup_clock_digital_window_t1

0x16bc,	// (0x00084fe3) clock_digital_number_pane_g1

0x16bc,	// (0x00084fe3) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00092b5d) clock_digital_number_pane_g

0x16bc,	// (0x00084fe3) clock_digital_separator_pane_g1

0x16bc,	// (0x00084fe3) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00092b5d) clock_digital_separator_pane_g

0x1449,	// (0x00084d70) bg_popup_window_pane_cp04

0x39be,	// (0x000872e5) heading_pane_cp03

0x21c2,	// (0x00085ae9) listscroll_popup_gms_pane

0x1449,	// (0x00084d70) grid_large_graphic_popup_pane

0x39c7,	// (0x000872ee) listscroll_popup_gms_pane_g1

0x39d0,	// (0x000872f7) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x00092be8) listscroll_popup_gms_pane_g

0x39d9,	// (0x00087300) scroll_pane_cp014

0x1711,	// (0x00085038) cell_large_graphic_popup_pane_ParamLimits

0x1711,	// (0x00085038) cell_large_graphic_popup_pane

0x171f,	// (0x00085046) cell_large_graphic_popup_pane_g1_ParamLimits

0x171f,	// (0x00085046) cell_large_graphic_popup_pane_g1

0x39e2,	// (0x00087309) cell_large_graphic_popup_pane_g2_ParamLimits

0x39e2,	// (0x00087309) cell_large_graphic_popup_pane_g2

0x39f0,	// (0x00087317) cell_large_graphic_popup_pane_g3_ParamLimits

0x39f0,	// (0x00087317) cell_large_graphic_popup_pane_g3

0x39fe,	// (0x00087325) cell_large_graphic_popup_pane_g4_ParamLimits

0x39fe,	// (0x00087325) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00092bed) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00092bed) cell_large_graphic_popup_pane_g

0x1449,	// (0x00084d70) grid_highlight_pane_cp010

0x16bc,	// (0x00084fe3) bg_popup_call_pane_g1

0x3a0f,	// (0x00087336) list_single_graphic_popup_conf_pane_ParamLimits

0x3a0f,	// (0x00087336) list_single_graphic_popup_conf_pane

0x3a22,	// (0x00087349) list_highlight_pane_cp01

0x3a2b,	// (0x00087352) list_single_graphic_popup_conf_pane_g1

0x3a33,	// (0x0008735a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00092bf6) list_single_graphic_popup_conf_pane_g

0x3a3b,	// (0x00087362) list_single_graphic_popup_conf_pane_t1

0x3a49,	// (0x00087370) linegrid_cams_pane_g1

0x3a52,	// (0x00087379) linegrid_cams_pane_g2

0x1ba0,	// (0x000854c7) linegrid_cams_pane_g3

0x3a5b,	// (0x00087382) linegrid_cams_pane_g4

0x3a64,	// (0x0008738b) linegrid_cams_pane_g5

0x3a6d,	// (0x00087394) linegrid_cams_pane_g6

0x21a9,	// (0x00085ad0) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00092bfb) linegrid_cams_pane_g

0x3a78,	// (0x0008739f) popup_clock_analogue_window

0x3a78,	// (0x0008739f) popup_clock_digital_window

0x1449,	// (0x00084d70) popup_phob_thumbnail_window

0x16bc,	// (0x00084fe3) call_video_uplink_pane_g1

0x3a81,	// (0x000873a8) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x00092c0a) call_video_uplink_pane_g

0x3a89,	// (0x000873b0) video_uplink_pane

0x3a91,	// (0x000873b8) mce_image_pane_g1

0x3a9b,	// (0x000873c2) mce_image_pane_g2

0x3aa3,	// (0x000873ca) mce_image_pane_g3

0x3aab,	// (0x000873d2) mce_image_pane_g4

0x3ab5,	// (0x000873dc) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00092c0f) mce_image_pane_g

0x3abd,	// (0x000873e4) control_top_pane_stacon_cp01_ParamLimits

0x3abd,	// (0x000873e4) control_top_pane_stacon_cp01

0x3ad1,	// (0x000873f8) uni_indicator_pane_stacon_cp01_ParamLimits

0x3ad1,	// (0x000873f8) uni_indicator_pane_stacon_cp01

0x3ae2,	// (0x00087409) bg_popup_sub_pane_cp03

0x3aec,	// (0x00087413) chi_dic_find_pane

0x3af4,	// (0x0008741b) listscroll_chi_dic_pane

0x3afd,	// (0x00087424) main_pane_chidic_g1

0x3b10,	// (0x00087437) chi_dic_find_pane_t1

0x3b1e,	// (0x00087445) find_chidic_pane

0x3b27,	// (0x0008744e) chi_dic_list_pane_ParamLimits

0x3b27,	// (0x0008744e) chi_dic_list_pane

0x3b38,	// (0x0008745f) scroll_pane_cp020

0x3b40,	// (0x00087467) find_chidic_pane_t1

0x1449,	// (0x00084d70) input_focus_pane_cp06

0x3b4f,	// (0x00087476) list_chi_dic_pane_ParamLimits

0x3b4f,	// (0x00087476) list_chi_dic_pane

0x3b61,	// (0x00087488) list_chi_dic_pane_t1_ParamLimits

0x3b61,	// (0x00087488) list_chi_dic_pane_t1

0x1449,	// (0x00084d70) list_highlight_pane_cp020

0x3b74,	// (0x0008749b) bg_cale_heading_pane_g1

0x3b7c,	// (0x000874a3) bg_cale_heading_pane_g2

0x3b84,	// (0x000874ab) bg_cale_heading_pane_g3

0x3b8c,	// (0x000874b3) bg_cale_heading_pane_g4

0x3b96,	// (0x000874bd) bg_cale_heading_pane_g5

0x3ba0,	// (0x000874c7) bg_cale_heading_pane_g6

0x3ba8,	// (0x000874cf) bg_cale_heading_pane_g7

0x3bb0,	// (0x000874d7) bg_cale_heading_pane_g8

0x3bba,	// (0x000874e1) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x00092c1a) bg_cale_heading_pane_g

0x3b74,	// (0x0008749b) bg_cale_side_pane_g1

0x3bc4,	// (0x000874eb) bg_cale_side_pane_g2

0x3bcc,	// (0x000874f3) bg_cale_side_pane_g3

0x3bd4,	// (0x000874fb) bg_cale_side_pane_g4

0x3bdc,	// (0x00087503) bg_cale_side_pane_g5

0x3be4,	// (0x0008750b) bg_cale_side_pane_g6

0x3bec,	// (0x00087513) bg_cale_side_pane_g7

0x3bf4,	// (0x0008751b) bg_cale_side_pane_g8

0x3bfc,	// (0x00087523) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00092c2d) bg_cale_side_pane_g

0x3c04,	// (0x0008752b) popup_call_status_window_ParamLimits

0x3c04,	// (0x0008752b) popup_call_status_window

0x3c4b,	// (0x00087572) stacon_top_pane

0x3c53,	// (0x0008757a) status_pane_ParamLimits

0x3c53,	// (0x0008757a) status_pane

0x3c68,	// (0x0008758f) status_small_pane

0x3c70,	// (0x00087597) control_pane

0x1449,	// (0x00084d70) stacon_bottom_pane

0x3c78,	// (0x0008759f) list_single_mce_smart_pane_t1_ParamLimits

0x3c78,	// (0x0008759f) list_single_mce_smart_pane_t1

0x3c8b,	// (0x000875b2) list_single_mce_smart_pane_t2_ParamLimits

0x3c8b,	// (0x000875b2) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00092c40) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00092c40) list_single_mce_smart_pane_t

0x3caa,	// (0x000875d1) compass_pane

0x3cb3,	// (0x000875da) main_location2_pane_t1

0x3cc5,	// (0x000875ec) main_location2_pane_t2

0x3cd7,	// (0x000875fe) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00092c45) main_location2_pane_t

0x3d1b,	// (0x00087642) compass_pane_g1_ParamLimits

0x3d1b,	// (0x00087642) compass_pane_g1

0x3d27,	// (0x0008764e) compass_pane_t1

0x3d36,	// (0x0008765d) compass_pane_t2

0x0005,

0xf327,	// (0x00092c4e) compass_pane_t

0x3d7d,	// (0x000876a4) text_secondary_cp61

0x3dfe,	// (0x00087725) navi_pane_cams_g5

0x3e7a,	// (0x000877a1) navi_pane_im_t1

0x3e88,	// (0x000877af) navi_pane_mp_g1_ParamLimits

0x3e88,	// (0x000877af) navi_pane_mp_g1

0x3e9c,	// (0x000877c3) navi_pane_mp_g2_ParamLimits

0x3e9c,	// (0x000877c3) navi_pane_mp_g2

0x3ea8,	// (0x000877cf) navi_pane_mp_g3_ParamLimits

0x3ea8,	// (0x000877cf) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00092c62) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00092c62) navi_pane_mp_g

0x3eb4,	// (0x000877db) navi_pane_mp_t1

0x3ec2,	// (0x000877e9) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00092c69) navi_pane_mp_t

0x3f6f,	// (0x00087896) navi_pane_vt_g1

0x3eb4,	// (0x000877db) navi_pane_vt_t1

0x3f77,	// (0x0008789e) navi_slider_pane

0x21c2,	// (0x00085ae9) zooming_pane

0x3f87,	// (0x000878ae) navi_slider_pane_g1

0xa80f,	// (0x0008e136) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00092c70) navi_slider_pane_g

0x3fab,	// (0x000878d2) aid_levels_zoom

0x3fb3,	// (0x000878da) zooming_pane_g1

0x3fbb,	// (0x000878e2) zooming_pane_g2

0x3fbb,	// (0x000878e2) zooming_pane_g3

0x0002,

0xf358,	// (0x00092c7f) zooming_pane_g

0x3fc3,	// (0x000878ea) level_10_zoom

0x3fcc,	// (0x000878f3) level_11_zoom

0x3fd5,	// (0x000878fc) level_1_zoom

0x3fde,	// (0x00087905) level_2_zoom

0x3fe7,	// (0x0008790e) level_3_zoom

0x3ff0,	// (0x00087917) level_4_zoom

0x3ff9,	// (0x00087920) level_5_zoom

0x4002,	// (0x00087929) level_6_zoom

0x400b,	// (0x00087932) level_7_zoom

0x4014,	// (0x0008793b) level_8_zoom

0x401d,	// (0x00087944) level_9_zoom

0x402e,	// (0x00087955) popup_phob_thumbnail_window_g1

0x4036,	// (0x0008795d) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00092c86) popup_phob_thumbnail_window_g

0x4b48,	// (0x0008846f) level_1_location

0x4b50,	// (0x00088477) level_2_location

0x4b58,	// (0x0008847f) level_3_location

0x4b60,	// (0x00088487) level_4_location

0x21c2,	// (0x00085ae9) level_5_location

0x403e,	// (0x00087965) mce_icon_pane_g1

0x4048,	// (0x0008796f) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00092c8b) mce_icon_pane_g

0x4050,	// (0x00087977) main_mup_pane_g1_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g1

0x4050,	// (0x00087977) main_mup_pane_g2_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g2

0x4050,	// (0x00087977) main_mup_pane_g3_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g3

0x4050,	// (0x00087977) main_mup_pane_g4_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g4

0x4050,	// (0x00087977) main_mup_pane_g5_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g5

0x4050,	// (0x00087977) main_mup_pane_g6_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g6

0x4050,	// (0x00087977) main_mup_pane_g7_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g7

0x4050,	// (0x00087977) main_mup_pane_g8_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g8

0x4050,	// (0x00087977) main_mup_pane_g9_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g9

0x4050,	// (0x00087977) main_mup_pane_g10_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g10

0x4050,	// (0x00087977) main_mup_pane_g11_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g11

0x171f,	// (0x00085046) main_mup_pane_g12_ParamLimits

0x171f,	// (0x00085046) main_mup_pane_g12

0x4050,	// (0x00087977) main_mup_pane_g13_ParamLimits

0x4050,	// (0x00087977) main_mup_pane_g13

0x000c,

0xf369,	// (0x00092c90) main_mup_pane_g_ParamLimits

0xf369,	// (0x00092c90) main_mup_pane_g

0x405e,	// (0x00087985) main_mup_pane_t1_ParamLimits

0x405e,	// (0x00087985) main_mup_pane_t1

0x405e,	// (0x00087985) main_mup_pane_t2_ParamLimits

0x405e,	// (0x00087985) main_mup_pane_t2

0x405e,	// (0x00087985) main_mup_pane_t3_ParamLimits

0x405e,	// (0x00087985) main_mup_pane_t3

0x222b,	// (0x00085b52) main_mup_pane_t4_ParamLimits

0x222b,	// (0x00085b52) main_mup_pane_t4

0x222b,	// (0x00085b52) main_mup_pane_t5_ParamLimits

0x222b,	// (0x00085b52) main_mup_pane_t5

0x4072,	// (0x00087999) main_mup_pane_t6_ParamLimits

0x4072,	// (0x00087999) main_mup_pane_t6

0x0005,

0xf384,	// (0x00092cab) main_mup_pane_t_ParamLimits

0xf384,	// (0x00092cab) main_mup_pane_t

0x1711,	// (0x00085038) mup_progress_pane_ParamLimits

0x1711,	// (0x00085038) mup_progress_pane

0x4086,	// (0x000879ad) mup_visualizer_pane_ParamLimits

0x4086,	// (0x000879ad) mup_visualizer_pane

0x4086,	// (0x000879ad) mup_volume_pane_ParamLimits

0x4086,	// (0x000879ad) mup_volume_pane

0x172d,	// (0x00085054) mup_visualizer_pane_g1_ParamLimits

0x172d,	// (0x00085054) mup_visualizer_pane_g1

0x4094,	// (0x000879bb) mup_visualizer_pane_g2_ParamLimits

0x4094,	// (0x000879bb) mup_visualizer_pane_g2

0x171f,	// (0x00085046) mup_visualizer_pane_g3_ParamLimits

0x171f,	// (0x00085046) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x00092cb8) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x00092cb8) mup_visualizer_pane_g

0x23af,	// (0x00085cd6) mup_volume_pane_g1

0x23af,	// (0x00085cd6) mup_volume_pane_g2

0x0001,

0xf398,	// (0x00092cbf) mup_volume_pane_g

0x23af,	// (0x00085cd6) mup_progress_pane_g1

0x23af,	// (0x00085cd6) mup_progress_pane_g2

0x23af,	// (0x00085cd6) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x00092cc4) mup_progress_pane_g

0x1449,	// (0x00084d70) bg_popup_window_pane_cp05

0x40a2,	// (0x000879c9) heading_pane_cp02_ParamLimits

0x40a2,	// (0x000879c9) heading_pane_cp02

0x40bc,	// (0x000879e3) list_popup_blid_pane

0x40c4,	// (0x000879eb) list_blid_sat_info_pane_ParamLimits

0x40c4,	// (0x000879eb) list_blid_sat_info_pane

0x40d7,	// (0x000879fe) list_blid_sat_info_pane_g1

0x40df,	// (0x00087a06) list_blid_sat_info_pane_t1

0x41e5,	// (0x00087b0c) mup_equalizer_pane_ParamLimits

0x41e5,	// (0x00087b0c) mup_equalizer_pane

0x41fe,	// (0x00087b25) mup_equalizer_pane_cp1_ParamLimits

0x41fe,	// (0x00087b25) mup_equalizer_pane_cp1

0x421b,	// (0x00087b42) mup_equalizer_pane_cp2_ParamLimits

0x421b,	// (0x00087b42) mup_equalizer_pane_cp2

0x4238,	// (0x00087b5f) mup_equalizer_pane_cp3_ParamLimits

0x4238,	// (0x00087b5f) mup_equalizer_pane_cp3

0x4259,	// (0x00087b80) mup_equalizer_pane_cp4_ParamLimits

0x4259,	// (0x00087b80) mup_equalizer_pane_cp4

0x427a,	// (0x00087ba1) mup_equalizer_pane_cp5

0x428e,	// (0x00087bb5) mup_equalizer_pane_cp6

0x42a2,	// (0x00087bc9) mup_equalizer_pane_cp7

0xb986,	// (0x0008f2ad) bg_popup_call_poc_act_pane_g9

0xb98e,	// (0x0008f2b5) bg_popup_call_poc_act_pane_g10

0xb996,	// (0x0008f2bd) bg_popup_call_poc_act_pane_g11

0x000a,

0x16a4,	// (0x00084fcb) mup_scale_pane

0x16bc,	// (0x00084fe3) mup_scale_pane_g1

0x42b6,	// (0x00087bdd) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x00092ce0) mup_scale_pane_g

0x42ec,	// (0x00087c13) msg_data_pane

0x42f4,	// (0x00087c1b) scroll_pane_cp017

0x05cb,	// (0x00083ef2) bg_list_pane_cp04_ParamLimits

0x05cb,	// (0x00083ef2) bg_list_pane_cp04

0x42fc,	// (0x00087c23) msg_data_pane_g1

0x4304,	// (0x00087c2b) msg_data_pane_g2

0x430c,	// (0x00087c33) msg_data_pane_g3

0x4314,	// (0x00087c3b) msg_data_pane_g4

0x431c,	// (0x00087c43) msg_data_pane_g5

0x4324,	// (0x00087c4b) msg_data_pane_g6

0x432c,	// (0x00087c53) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x00092cef) msg_data_pane_g

0x05e3,	// (0x00083f0a) msg_text_pane_ParamLimits

0x05e3,	// (0x00083f0a) msg_text_pane

0x4334,	// (0x00087c5b) qrid_highlight_pane_cp011_ParamLimits

0x4334,	// (0x00087c5b) qrid_highlight_pane_cp011

0x1449,	// (0x00084d70) msg_body_pane

0x1449,	// (0x00084d70) msg_header_pane

0x4353,	// (0x00087c7a) input_focus_pane_cp07

0xa829,	// (0x0008e150) msg_header_pane_t1_ParamLimits

0xa829,	// (0x0008e150) msg_header_pane_t1

0xa83f,	// (0x0008e166) msg_header_pane_t2_ParamLimits

0xa83f,	// (0x0008e166) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x00092d03) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x00092d03) msg_header_pane_t

0x4368,	// (0x00087c8f) msg_body_pane_g1

0xa856,	// (0x0008e17d) msg_body_pane_t1_ParamLimits

0xa856,	// (0x0008e17d) msg_body_pane_t1

0xa887,	// (0x0008e1ae) msg_body_pane_t2_ParamLimits

0xa887,	// (0x0008e1ae) msg_body_pane_t2

0xa899,	// (0x0008e1c0) msg_body_pane_t3_ParamLimits

0xa899,	// (0x0008e1c0) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x00092d08) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x00092d08) msg_body_pane_t

0x43aa,	// (0x00087cd1) main_viewer_pane_g1_ParamLimits

0x43aa,	// (0x00087cd1) main_viewer_pane_g1

0x43b8,	// (0x00087cdf) main_viewer_pane_g2_ParamLimits

0x43b8,	// (0x00087cdf) main_viewer_pane_g2

0x43c6,	// (0x00087ced) main_viewer_pane_g3_ParamLimits

0x43c6,	// (0x00087ced) main_viewer_pane_g3

0x43d5,	// (0x00087cfc) main_viewer_pane_g4_ParamLimits

0x43d5,	// (0x00087cfc) main_viewer_pane_g4

0xa8c3,	// (0x0008e1ea) main_viewer_pane_g5_ParamLimits

0xa8c3,	// (0x0008e1ea) main_viewer_pane_g5

0xa8c3,	// (0x0008e1ea) main_viewer_pane_g7_ParamLimits

0xa8c3,	// (0x0008e1ea) main_viewer_pane_g7

0xa8d5,	// (0x0008e1fc) main_viewer_pane_g8_ParamLimits

0xa8d5,	// (0x0008e1fc) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x00092d18) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x00092d18) main_viewer_pane_g

0x43e4,	// (0x00087d0b) viewer_content_pane_ParamLimits

0x43e4,	// (0x00087d0b) viewer_content_pane

0x441f,	// (0x00087d46) main_postcard_pane_g1_ParamLimits

0x441f,	// (0x00087d46) main_postcard_pane_g1

0x4435,	// (0x00087d5c) main_postcard_pane_g2_ParamLimits

0x4435,	// (0x00087d5c) main_postcard_pane_g2

0x444b,	// (0x00087d72) main_postcard_pane_g3_ParamLimits

0x444b,	// (0x00087d72) main_postcard_pane_g3

0x0005,

0xf402,	// (0x00092d29) main_postcard_pane_g_ParamLimits

0xf402,	// (0x00092d29) main_postcard_pane_g

0x4462,	// (0x00087d89) main_postcard_pane_g4

0xbb5e,	// (0x0008f485) smil_status_volume_pane_g2

0x44a5,	// (0x00087dcc) postcard_pane_ParamLimits

0x44a5,	// (0x00087dcc) postcard_pane

0x44e7,	// (0x00087e0e) postcard_pane_g1_ParamLimits

0x44e7,	// (0x00087e0e) postcard_pane_g1

0x44f5,	// (0x00087e1c) postcard_pane_g2_ParamLimits

0x44f5,	// (0x00087e1c) postcard_pane_g2

0x4501,	// (0x00087e28) postcard_pane_g3_ParamLimits

0x4501,	// (0x00087e28) postcard_pane_g3

0x450d,	// (0x00087e34) postcard_pane_g4_ParamLimits

0x450d,	// (0x00087e34) postcard_pane_g4

0x451b,	// (0x00087e42) postcard_pane_g5_ParamLimits

0x451b,	// (0x00087e42) postcard_pane_g5

0x4530,	// (0x00087e57) postcard_pane_g6_ParamLimits

0x4530,	// (0x00087e57) postcard_pane_g6

0x44e7,	// (0x00087e0e) postcard_pane_g7_ParamLimits

0x44e7,	// (0x00087e0e) postcard_pane_g7

0x0006,

0xf40f,	// (0x00092d36) postcard_pane_g_ParamLimits

0xf40f,	// (0x00092d36) postcard_pane_g

0x4544,	// (0x00087e6b) main_mp2_pane_g1_ParamLimits

0x4544,	// (0x00087e6b) main_mp2_pane_g1

0x4550,	// (0x00087e77) main_mp2_pane_g2_ParamLimits

0x4550,	// (0x00087e77) main_mp2_pane_g2

0x455c,	// (0x00087e83) main_mp2_pane_g3_ParamLimits

0x455c,	// (0x00087e83) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x00092d45) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x00092d45) main_mp2_pane_g

0x4568,	// (0x00087e8f) main_mp2_pane_t1_ParamLimits

0x4568,	// (0x00087e8f) main_mp2_pane_t1

0x457d,	// (0x00087ea4) main_mp2_pane_t2_ParamLimits

0x457d,	// (0x00087ea4) main_mp2_pane_t2

0x458f,	// (0x00087eb6) main_mp2_pane_t3_ParamLimits

0x458f,	// (0x00087eb6) main_mp2_pane_t3

0x0002,

0xf425,	// (0x00092d4c) main_mp2_pane_t_ParamLimits

0xf425,	// (0x00092d4c) main_mp2_pane_t

0x45a1,	// (0x00087ec8) pec_content_pane_ParamLimits

0x45a1,	// (0x00087ec8) pec_content_pane

0x2981,	// (0x000862a8) scroll_pane_cp015

0x45b3,	// (0x00087eda) pec_attribute_pane_ParamLimits

0x45b3,	// (0x00087eda) pec_attribute_pane

0x45c3,	// (0x00087eea) pec_content_pane_g1_ParamLimits

0x45c3,	// (0x00087eea) pec_content_pane_g1

0xa8ed,	// (0x0008e214) pec_content_pane_t1_ParamLimits

0xa8ed,	// (0x0008e214) pec_content_pane_t1

0xa8ff,	// (0x0008e226) pec_content_pane_t2_ParamLimits

0xa8ff,	// (0x0008e226) pec_content_pane_t2

0x0001,

0xf42c,	// (0x00092d53) pec_content_pane_t_ParamLimits

0xf42c,	// (0x00092d53) pec_content_pane_t

0x45cf,	// (0x00087ef6) list_single_graphic_pane_cp01_ParamLimits

0x45cf,	// (0x00087ef6) list_single_graphic_pane_cp01

0x16a4,	// (0x00084fcb) bg_popup_sub_pane_cp04

0xa911,	// (0x0008e238) popup_mup_playback_window_g1

0xa91d,	// (0x0008e244) popup_mup_playback_window_t1

0xa932,	// (0x0008e259) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x00092d58) popup_mup_playback_window_t

0xa969,	// (0x0008e290) main_image_pane_g1_ParamLimits

0xa969,	// (0x0008e290) main_image_pane_g1

0xa9ac,	// (0x0008e2d3) scroll_pane_cp018_ParamLimits

0xa9ac,	// (0x0008e2d3) scroll_pane_cp018

0xa9c4,	// (0x0008e2eb) scroll_pane_cp016_ParamLimits

0xa9c4,	// (0x0008e2eb) scroll_pane_cp016

0x469d,	// (0x00087fc4) smil2_image_pane_ParamLimits

0x469d,	// (0x00087fc4) smil2_image_pane

0x46cd,	// (0x00087ff4) smil2_root_pane_ParamLimits

0x46cd,	// (0x00087ff4) smil2_root_pane

0x4705,	// (0x0008802c) smil2_text_pane_ParamLimits

0x4705,	// (0x0008802c) smil2_text_pane

0x1449,	// (0x00084d70) bg_list_pane_cp06

0xaa00,	// (0x0008e327) grid_radio_pane

0x1449,	// (0x00084d70) bg_popup_window_pane_cp06

0xaa08,	// (0x0008e32f) main_fmradio_pane_t1

0xb9de,	// (0x0008f305) heading_pane_cp04

0xaa16,	// (0x0008e33d) main_fmradio_pane_t2

0xb9e6,	// (0x0008f30d) popup_cale_lunar_info_window_g1

0xaa24,	// (0x0008e34b) main_fmradio_pane_t3

0xb9ee,	// (0x0008f315) popup_cale_lunar_info_window_g2

0xaa32,	// (0x0008e359) main_fmradio_pane_t4

0x0001,

0xaa40,	// (0x0008e367) main_fmradio_pane_t5

0x0004,

0xf524,	// (0x00092e4b) popup_cale_lunar_info_window_g

0xf446,	// (0x00092d6d) main_fmradio_pane_t

0xaa4e,	// (0x0008e375) wait_bar_pane_cp03

0xaa56,	// (0x0008e37d) cell_fmradio_pane_ParamLimits

0xaa56,	// (0x0008e37d) cell_fmradio_pane

0x44e7,	// (0x00087e0e) cell_fmradio_pane_g1_ParamLimits

0x44e7,	// (0x00087e0e) cell_fmradio_pane_g1

0x1449,	// (0x00084d70) grid_highlight_pane_cp011

0xaa69,	// (0x0008e390) poc_content_pane_ParamLimits

0xaa69,	// (0x0008e390) poc_content_pane

0xaa7b,	// (0x0008e3a2) scroll_pane_cp019

0x4785,	// (0x000880ac) popup_call_poc_act_window_ParamLimits

0x4785,	// (0x000880ac) popup_call_poc_act_window

0x47a9,	// (0x000880d0) popup_call_poc_inact_window_ParamLimits

0x47a9,	// (0x000880d0) popup_call_poc_inact_window

0xf4e8,	// (0x00092e0f) bg_popup_call_poc_act_pane_g

0xb99e,	// (0x0008f2c5) bg_popup_call_poc_inact_pane_g1

0xb9a6,	// (0x0008f2cd) bg_popup_call_poc_inact_pane_g2

0xaa83,	// (0x0008e3aa) popup_call_poc_act_window_g2

0xb9ae,	// (0x0008f2d5) bg_popup_call_poc_inact_pane_g3

0xb92e,	// (0x0008f255) bg_popup_call_poc_inact_pane_g4

0xb9b6,	// (0x0008f2dd) bg_popup_call_poc_inact_pane_g5

0xaa8b,	// (0x0008e3b2) popup_call_poc_act_window_t1_ParamLimits

0xaa8b,	// (0x0008e3b2) popup_call_poc_act_window_t1

0xaab3,	// (0x0008e3da) popup_call_poc_act_window_t2_ParamLimits

0xaab3,	// (0x0008e3da) popup_call_poc_act_window_t2

0xaadb,	// (0x0008e402) popup_call_poc_act_window_t3_ParamLimits

0xaadb,	// (0x0008e402) popup_call_poc_act_window_t3

0xab03,	// (0x0008e42a) popup_call_poc_act_window_t4_ParamLimits

0xab03,	// (0x0008e42a) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x00092d78) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x00092d78) popup_call_poc_act_window_t

0xb9be,	// (0x0008f2e5) bg_popup_call_poc_inact_pane_g6

0xb9c6,	// (0x0008f2ed) bg_popup_call_poc_inact_pane_g7

0xb9ce,	// (0x0008f2f5) bg_popup_call_poc_inact_pane_g8

0xab15,	// (0x0008e43c) popup_call_poc_inact_window_g2

0xb9d6,	// (0x0008f2fd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ff,	// (0x00092e26) bg_popup_call_poc_inact_pane_g

0xab1d,	// (0x0008e444) popup_call_poc_inact_window_t1_ParamLimits

0xab1d,	// (0x0008e444) popup_call_poc_inact_window_t1

0xab32,	// (0x0008e459) popup_call_poc_inact_window_t2_ParamLimits

0xab32,	// (0x0008e459) popup_call_poc_inact_window_t2

0xab47,	// (0x0008e46e) popup_call_poc_inact_window_t3_ParamLimits

0xab47,	// (0x0008e46e) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x00092d81) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x00092d81) popup_call_poc_inact_window_t

0xbad6,	// (0x0008f3fd) context_pane_ParamLimits

0x5012,	// (0x00088939) signal_pane_ParamLimits

0x21c2,	// (0x00085ae9) main_call2_pane

0xbaaf,	// (0x0008f3d6) popup_phob_thumbnail2_window_ParamLimits

0xbaaf,	// (0x0008f3d6) popup_phob_thumbnail2_window

0xa8ab,	// (0x0008e1d2) aid_hotspot_pointer_arrow_pane

0xa8b3,	// (0x0008e1da) aid_hotspot_pointer_hand_pane

0x4b12,	// (0x00088439) phob_pre_status_pane_g5

0xedcf,	// (0x000926f6) cams_zoom_pane_ParamLimits

0xedcf,	// (0x000926f6) image_vga_pane_ParamLimits

0x171f,	// (0x00085046) main_camera_pane_g1_ParamLimits

0x171f,	// (0x00085046) main_camera_pane_g2_ParamLimits

0x171f,	// (0x00085046) main_camera_pane_g3_ParamLimits

0x171f,	// (0x00085046) main_camera_pane_g4_ParamLimits

0x171f,	// (0x00085046) main_camera_pane_g5_ParamLimits

0x171f,	// (0x00085046) main_camera_pane_g6_ParamLimits

0x171f,	// (0x00085046) main_camera_pane_g7_ParamLimits

0xf185,	// (0x00092aac) main_camera_pane_g_ParamLimits

0x222b,	// (0x00085b52) main_camera_pane_t1_ParamLimits

0x222b,	// (0x00085b52) main_camera_pane_t2_ParamLimits

0xf196,	// (0x00092abd) main_camera_pane_t_ParamLimits

0x16a4,	// (0x00084fcb) bg_popup_preview_window_pane_cp01_ParamLimits

0x16a4,	// (0x00084fcb) bg_popup_preview_window_pane_cp01

0xab5c,	// (0x0008e483) popup_phob_thumbnail2_window_g1_ParamLimits

0xab5c,	// (0x0008e483) popup_phob_thumbnail2_window_g1

0x1449,	// (0x00084d70) call2_cli_visual_pane

0x47dd,	// (0x00088104) popup_call2_audio_conf_window_ParamLimits

0x47dd,	// (0x00088104) popup_call2_audio_conf_window

0x47fd,	// (0x00088124) popup_call2_audio_first_window_ParamLimits

0x47fd,	// (0x00088124) popup_call2_audio_first_window

0x4893,	// (0x000881ba) popup_call2_audio_in_window_ParamLimits

0x4893,	// (0x000881ba) popup_call2_audio_in_window

0x48db,	// (0x00088202) popup_call2_audio_out_window_ParamLimits

0x48db,	// (0x00088202) popup_call2_audio_out_window

0x4945,	// (0x0008826c) popup_call2_audio_second_window_ParamLimits

0x4945,	// (0x0008826c) popup_call2_audio_second_window

0x49ab,	// (0x000882d2) popup_call2_audio_wait_window_ParamLimits

0x49ab,	// (0x000882d2) popup_call2_audio_wait_window

0x1449,	// (0x00084d70) bg_popup_call2_act_pane_cp03

0x1686,	// (0x00084fad) list_conf_pane_cp

0xab68,	// (0x0008e48f) popup_call2_audio_conf_window_t1

0xab76,	// (0x0008e49d) list_single_graphic_popup_conf2_pane_ParamLimits

0xab76,	// (0x0008e49d) list_single_graphic_popup_conf2_pane

0x3a22,	// (0x00087349) list_highlight_pane_cp04

0xab89,	// (0x0008e4b0) list_single_graphic_popup_conf2_pane_g1

0x3a33,	// (0x0008735a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x00092d88) list_single_graphic_popup_conf2_pane_g

0xab93,	// (0x0008e4ba) list_single_graphic_popup_conf2_pane_t1

0xaba1,	// (0x0008e4c8) bg_popup_call2_act_pane_cp01_ParamLimits

0xaba1,	// (0x0008e4c8) bg_popup_call2_act_pane_cp01

0xac2b,	// (0x0008e552) call_type_pane_cp05_ParamLimits

0xac2b,	// (0x0008e552) call_type_pane_cp05

0xac7f,	// (0x0008e5a6) popup_call2_audio_second_window_g1_ParamLimits

0xac7f,	// (0x0008e5a6) popup_call2_audio_second_window_g1

0xacd3,	// (0x0008e5fa) popup_call2_audio_second_window_g2_ParamLimits

0xacd3,	// (0x0008e5fa) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x00092d8d) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x00092d8d) popup_call2_audio_second_window_g

0xad38,	// (0x0008e65f) popup_call2_audio_second_window_t1_ParamLimits

0xad38,	// (0x0008e65f) popup_call2_audio_second_window_t1

0xadf3,	// (0x0008e71a) popup_call2_audio_second_window_t2_ParamLimits

0xadf3,	// (0x0008e71a) popup_call2_audio_second_window_t2

0xae46,	// (0x0008e76d) popup_call2_audio_second_window_t3_ParamLimits

0xae46,	// (0x0008e76d) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x00092d94) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x00092d94) popup_call2_audio_second_window_t

0x1449,	// (0x00084d70) bg_popup_call2_in_pane_cp02

0x1453,	// (0x00084d7a) call_type_pane_cp04

0x49e5,	// (0x0008830c) popup_call2_audio_wait_window_g1

0x49ed,	// (0x00088314) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x00092d9d) popup_call2_audio_wait_window_g

0x146b,	// (0x00084d92) popup_call2_audio_wait_window_t3

0xaf39,	// (0x0008e860) bg_popup_call2_act_pane_ParamLimits

0xaf39,	// (0x0008e860) bg_popup_call2_act_pane

0xaff9,	// (0x0008e920) call_type_pane_cp03_ParamLimits

0xaff9,	// (0x0008e920) call_type_pane_cp03

0xb05d,	// (0x0008e984) popup_call2_audio_first_window_g1_ParamLimits

0xb05d,	// (0x0008e984) popup_call2_audio_first_window_g1

0xb0cd,	// (0x0008e9f4) popup_call2_audio_first_window_g2_ParamLimits

0xb0cd,	// (0x0008e9f4) popup_call2_audio_first_window_g2

0xb131,	// (0x0008ea58) popup_call2_audio_first_window_g3_ParamLimits

0xb131,	// (0x0008ea58) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x00092da2) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x00092da2) popup_call2_audio_first_window_g

0xb1b9,	// (0x0008eae0) popup_call2_audio_first_window_t1_ParamLimits

0xb1b9,	// (0x0008eae0) popup_call2_audio_first_window_t1

0xb2bc,	// (0x0008ebe3) popup_call2_audio_first_window_t4_ParamLimits

0xb2bc,	// (0x0008ebe3) popup_call2_audio_first_window_t4

0xb39f,	// (0x0008ecc6) popup_call2_audio_first_window_t5_ParamLimits

0xb39f,	// (0x0008ecc6) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x00092dad) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x00092dad) popup_call2_audio_first_window_t

0x169c,	// (0x00084fc3) bg_popup_call2_act_pane_g1

0xb9f6,	// (0x0008f31d) popup_cale_lunar_info_window_t1

0xba04,	// (0x0008f32b) popup_cale_lunar_info_window_t2

0xba12,	// (0x0008f339) popup_cale_lunar_info_window_t3

0x1449,	// (0x00084d70) bg_popup_call2_bubble_pane

0xb4a0,	// (0x0008edc7) bg_popup_call2_in_pane_cp01_ParamLimits

0xb4a0,	// (0x0008edc7) bg_popup_call2_in_pane_cp01

0x1101,	// (0x00084a28) call_type_pane_cp02

0x49f5,	// (0x0008831c) popup_call2_audio_out_window_g1_ParamLimits

0x49f5,	// (0x0008831c) popup_call2_audio_out_window_g1

0xb4e8,	// (0x0008ee0f) popup_call2_audio_out_window_g2_ParamLimits

0xb4e8,	// (0x0008ee0f) popup_call2_audio_out_window_g2

0x4a21,	// (0x00088348) popup_call2_audio_out_window_g3_ParamLimits

0x4a21,	// (0x00088348) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x00092db6) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x00092db6) popup_call2_audio_out_window_g

0xb51f,	// (0x0008ee46) popup_call2_audio_out_window_t1_ParamLimits

0xb51f,	// (0x0008ee46) popup_call2_audio_out_window_t1

0xb57e,	// (0x0008eea5) popup_call2_audio_out_window_t2_ParamLimits

0xb57e,	// (0x0008eea5) popup_call2_audio_out_window_t2

0xb5d2,	// (0x0008eef9) popup_call2_audio_out_window_t3_ParamLimits

0xb5d2,	// (0x0008eef9) popup_call2_audio_out_window_t3

0xb5e8,	// (0x0008ef0f) popup_call2_audio_out_window_t4_ParamLimits

0xb5e8,	// (0x0008ef0f) popup_call2_audio_out_window_t4

0xb5fe,	// (0x0008ef25) popup_call2_audio_out_window_t5_ParamLimits

0xb5fe,	// (0x0008ef25) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x00092dbf) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x00092dbf) popup_call2_audio_out_window_t

0xb662,	// (0x0008ef89) bg_popup_call2_in_pane_ParamLimits

0xb662,	// (0x0008ef89) bg_popup_call2_in_pane

0xb6be,	// (0x0008efe5) popup_call2_audio_in_window_g1_ParamLimits

0xb6be,	// (0x0008efe5) popup_call2_audio_in_window_g1

0xb6f6,	// (0x0008f01d) popup_call2_audio_in_window_g2_ParamLimits

0xb6f6,	// (0x0008f01d) popup_call2_audio_in_window_g2

0xb72e,	// (0x0008f055) popup_call2_audio_in_window_g3_ParamLimits

0xb72e,	// (0x0008f055) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x00092dcc) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x00092dcc) popup_call2_audio_in_window_g

0xb786,	// (0x0008f0ad) popup_call2_audio_in_window_t1_ParamLimits

0xb786,	// (0x0008f0ad) popup_call2_audio_in_window_t1

0xb806,	// (0x0008f12d) popup_call2_audio_in_window_t2_ParamLimits

0xb806,	// (0x0008f12d) popup_call2_audio_in_window_t2

0xb886,	// (0x0008f1ad) popup_call2_audio_in_window_t3_ParamLimits

0xb886,	// (0x0008f1ad) popup_call2_audio_in_window_t3

0xb8a0,	// (0x0008f1c7) popup_call2_audio_in_window_t4_ParamLimits

0xb8a0,	// (0x0008f1c7) popup_call2_audio_in_window_t4

0xb8b2,	// (0x0008f1d9) popup_call2_audio_in_window_t5_ParamLimits

0xb8b2,	// (0x0008f1d9) popup_call2_audio_in_window_t5

0xb8c4,	// (0x0008f1eb) popup_call2_audio_in_window_t6_ParamLimits

0xb8c4,	// (0x0008f1eb) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x00092dd5) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x00092dd5) popup_call2_audio_in_window_t

0x169c,	// (0x00084fc3) bg_popup_call2_in_pane_g1

0xba20,	// (0x0008f347) popup_cale_lunar_info_window_t4

0x0003,

0xf529,	// (0x00092e50) popup_cale_lunar_info_window_t

0x16a4,	// (0x00084fcb) bg_popup_call2_rect_pane_ParamLimits

0x16a4,	// (0x00084fcb) bg_popup_call2_rect_pane

0x1449,	// (0x00084d70) call2_cli_visual_graphic_pane

0x1449,	// (0x00084d70) call2_cli_visual_text_pane

0xbb71,	// (0x0008f498) smil_status_volume_pane_g3

0x0002,

0x16bc,	// (0x00084fe3) call2_cli_visual_graphic_pane_g1

0x16bc,	// (0x00084fe3) call2_cli_visual_graphic_pane_g2

0x16bc,	// (0x00084fe3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x00092de2) call2_cli_visual_graphic_pane_g

0xb8d6,	// (0x0008f1fd) bg_popup_call2_rect_pane_g1

0x1b51,	// (0x00085478) bg_popup_call2_rect_pane_g2

0xb8de,	// (0x0008f205) bg_popup_call2_rect_pane_g3

0xb8e6,	// (0x0008f20d) bg_popup_call2_rect_pane_g4

0xb8ee,	// (0x0008f215) bg_popup_call2_rect_pane_g5

0xb8f6,	// (0x0008f21d) bg_popup_call2_rect_pane_g6

0xb8fe,	// (0x0008f225) bg_popup_call2_rect_pane_g7

0xb906,	// (0x0008f22d) bg_popup_call2_rect_pane_g8

0xb90e,	// (0x0008f235) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x00092de9) bg_popup_call2_rect_pane_g

0xb916,	// (0x0008f23d) bg_popup_call2_bubble_pane_g1

0xb91e,	// (0x0008f245) bg_popup_call2_bubble_pane_g2

0xb926,	// (0x0008f24d) bg_popup_call2_bubble_pane_g3

0xb92e,	// (0x0008f255) bg_popup_call2_bubble_pane_g4

0xb936,	// (0x0008f25d) bg_popup_call2_bubble_pane_g5

0xb93e,	// (0x0008f265) bg_popup_call2_bubble_pane_g6

0xb946,	// (0x0008f26d) bg_popup_call2_bubble_pane_g7

0xb94e,	// (0x0008f275) bg_popup_call2_bubble_pane_g8

0xb956,	// (0x0008f27d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x00092dfc) bg_popup_call2_bubble_pane_g

0x1bd5,	// (0x000854fc) aid_cale_week_size_cell_pane

0x223f,	// (0x00085b66) aid_cams_cif_uncrop_pane_ParamLimits

0x223f,	// (0x00085b66) aid_cams_cif_uncrop_pane

0x23b9,	// (0x00085ce0) aid_cams_size_cell_ParamLimits

0x23b9,	// (0x00085ce0) aid_cams_size_cell

0x23cd,	// (0x00085cf4) grid_cams_pane_ParamLimits

0x23e7,	// (0x00085d0e) linegrid_cams_pane_ParamLimits

0x251c,	// (0x00085e43) call_video_pane_t1

0x253a,	// (0x00085e61) call_video_pane_t2

0x0001,

0xf1e2,	// (0x00092b09) call_video_pane_t

0x2bc4,	// (0x000864eb) aid_cale_month_size_cell_pane_ParamLimits

0x2bc4,	// (0x000864eb) aid_cale_month_size_cell_pane

0xf56d,	// (0x00092e94) smil_status_volume_pane_g

0xbb7e,	// (0x0008f4a5) volume_smil_pane_ParamLimits

0xa652,	// (0x0008df79) aid_popup2_width_pane

0x1aa9,	// (0x000853d0) cell_qdial_pane_g4_ParamLimits

0x1aa9,	// (0x000853d0) cell_qdial_pane_g4

0x3cfb,	// (0x00087622) aid_blid_cardinal_pane_ParamLimits

0x3d07,	// (0x0008762e) aid_blid_destination_pane_ParamLimits

0x3d07,	// (0x0008762e) aid_blid_destination_pane

0x16a4,	// (0x00084fcb) bg_popup_call_poc_act_pane_ParamLimits

0x16a4,	// (0x00084fcb) bg_popup_call_poc_act_pane

0x16a4,	// (0x00084fcb) bg_popup_call_poc_inact_pane_ParamLimits

0x16a4,	// (0x00084fcb) bg_popup_call_poc_inact_pane

0xb95e,	// (0x0008f285) bg_popup_call_poc_act_pane_g1

0xb966,	// (0x0008f28d) bg_popup_call_poc_act_pane_g2

0xb96e,	// (0x0008f295) bg_popup_call_poc_act_pane_g3

0xb92e,	// (0x0008f255) bg_popup_call_poc_act_pane_g4

0xb936,	// (0x0008f25d) bg_popup_call_poc_act_pane_g5

0xb976,	// (0x0008f29d) bg_popup_call_poc_act_pane_g6

0xb946,	// (0x0008f26d) bg_popup_call_poc_act_pane_g7

0xb97e,	// (0x0008f2a5) bg_popup_call_poc_act_pane_g8

0x1449,	// (0x00084d70) main_usb_pane

0xba8a,	// (0x0008f3b1) popup_cale_lunar_info_window

0x2866,	// (0x0008618d) im_reading_pane_t1_ParamLimits

0x28a0,	// (0x000861c7) list_im_pane_ParamLimits

0x28b1,	// (0x000861d8) scroll_pane_cp07_ParamLimits

0x1449,	// (0x00084d70) grid_highlight_pane_cp012

0x16a4,	// (0x00084fcb) mup_scale_pane_ParamLimits

0x44e7,	// (0x00087e0e) main_usb_pane_g1_ParamLimits

0x44e7,	// (0x00087e0e) main_usb_pane_g1

0x4a70,	// (0x00088397) main_usb_pane_g2_ParamLimits

0x4a70,	// (0x00088397) main_usb_pane_g2

0x0001,

0xf512,	// (0x00092e39) main_usb_pane_g_ParamLimits

0xf512,	// (0x00092e39) main_usb_pane_g

0x4a86,	// (0x000883ad) main_usb_pane_t1_ParamLimits

0x4a86,	// (0x000883ad) main_usb_pane_t1

0x4a98,	// (0x000883bf) main_usb_pane_t2_ParamLimits

0x4a98,	// (0x000883bf) main_usb_pane_t2

0x4aaa,	// (0x000883d1) main_usb_pane_t3_ParamLimits

0x4aaa,	// (0x000883d1) main_usb_pane_t3

0x4abc,	// (0x000883e3) main_usb_pane_t4_ParamLimits

0x4abc,	// (0x000883e3) main_usb_pane_t4

0x4ace,	// (0x000883f5) main_usb_pane_t5_ParamLimits

0x4ace,	// (0x000883f5) main_usb_pane_t5

0x4ae0,	// (0x00088407) main_usb_pane_t6_ParamLimits

0x4ae0,	// (0x00088407) main_usb_pane_t6

0x0005,

0xf517,	// (0x00092e3e) main_usb_pane_t_ParamLimits

0x3caa,	// (0x000875d1) aid_text_placing

0x3cb3,	// (0x000875da) main_location2_pane_t1_ParamLimits

0x3cc5,	// (0x000875ec) main_location2_pane_t2_ParamLimits

0x3cd7,	// (0x000875fe) main_location2_pane_t3_ParamLimits

0x3ce9,	// (0x00087610) main_location2_pane_t4_ParamLimits

0x3ce9,	// (0x00087610) main_location2_pane_t4

0xf31e,	// (0x00092c45) main_location2_pane_t_ParamLimits

0x16d2,	// (0x00084ff9) find_pinb_pane_g2_ParamLimits

0x16d2,	// (0x00084ff9) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x000929c1) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x000929c1) find_pinb_pane_g

0x16de,	// (0x00085005) find_pinb_pane_t1_ParamLimits

0x16f0,	// (0x00085017) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x000929c6) find_pinb_pane_t_ParamLimits

0x1449,	// (0x00084d70) main_call3_pane

0x30ea,	// (0x00086a11) cale_month_day_heading_pane_t1_ParamLimits

0x312c,	// (0x00086a53) cale_month_day_heading_pane_t2_ParamLimits

0x3161,	// (0x00086a88) cale_month_day_heading_pane_t3_ParamLimits

0x3196,	// (0x00086abd) cale_month_day_heading_pane_t4_ParamLimits

0x31d3,	// (0x00086afa) cale_month_day_heading_pane_t5_ParamLimits

0x3218,	// (0x00086b3f) cale_month_day_heading_pane_t6_ParamLimits

0x325d,	// (0x00086b84) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x00092b41) cale_month_day_heading_pane_t_ParamLimits

0x34c7,	// (0x00086dee) smil_status_volume_pane

0x44c3,	// (0x00087dea) postcard_address_pane_ParamLimits

0x44c3,	// (0x00087dea) postcard_address_pane

0x44d5,	// (0x00087dfc) postcard_message_pane_ParamLimits

0x44d5,	// (0x00087dfc) postcard_message_pane

0x4a4d,	// (0x00088374) call2_cli_visual_pane_t1_ParamLimits

0x4a4d,	// (0x00088374) call2_cli_visual_pane_t1

0xbbab,	// (0x0008f4d2) postcard_message_pane_t1_ParamLimits

0xbbab,	// (0x0008f4d2) postcard_message_pane_t1

0xbb93,	// (0x0008f4ba) postcard_address_pane_t1_ParamLimits

0xbb93,	// (0x0008f4ba) postcard_address_pane_t1

0x51c5,	// (0x00088aec) popup_call3_audio_in_window_ParamLimits

0x51c5,	// (0x00088aec) popup_call3_audio_in_window

0x5050,	// (0x00088977) bg_popup_call3_in_pane_ParamLimits

0x5050,	// (0x00088977) bg_popup_call3_in_pane

0x50c6,	// (0x000889ed) popup_call3_audio_in_window_g1_ParamLimits

0x50c6,	// (0x000889ed) popup_call3_audio_in_window_g1

0x50e6,	// (0x00088a0d) popup_call3_audio_in_window_g2_ParamLimits

0x50e6,	// (0x00088a0d) popup_call3_audio_in_window_g2

0x5106,	// (0x00088a2d) popup_call3_audio_in_window_g3_ParamLimits

0x5106,	// (0x00088a2d) popup_call3_audio_in_window_g3

0x0003,

0xf574,	// (0x00092e9b) popup_call3_audio_in_window_g_ParamLimits

0xf574,	// (0x00092e9b) popup_call3_audio_in_window_g

0x5137,	// (0x00088a5e) popup_call3_audio_in_window_t1_ParamLimits

0x5137,	// (0x00088a5e) popup_call3_audio_in_window_t1

0x5175,	// (0x00088a9c) popup_call3_audio_in_window_t2_ParamLimits

0x5175,	// (0x00088a9c) popup_call3_audio_in_window_t2

0x51b3,	// (0x00088ada) popup_call3_audio_in_window_t3_ParamLimits

0x51b3,	// (0x00088ada) popup_call3_audio_in_window_t3

0x0002,

0xf57d,	// (0x00092ea4) popup_call3_audio_in_window_t_ParamLimits

0xf57d,	// (0x00092ea4) popup_call3_audio_in_window_t

0x21c2,	// (0x00085ae9) bg_popup_call3_rect_pane

0xb8d6,	// (0x0008f1fd) bg_popup_call3_rect_pane_g1

0x1b51,	// (0x00085478) bg_popup_call3_rect_pane_g2

0xb8de,	// (0x0008f205) bg_popup_call3_rect_pane_g3

0xb8e6,	// (0x0008f20d) bg_popup_call3_rect_pane_g4

0xb8ee,	// (0x0008f215) bg_popup_call3_rect_pane_g5

0xb8f6,	// (0x0008f21d) bg_popup_call3_rect_pane_g6

0xb8fe,	// (0x0008f225) bg_popup_call3_rect_pane_g7

0xedc5,	// (0x000926ec) mup_visualizer_osc_pane

0xedc5,	// (0x000926ec) mup_visualizer_spec_pane

0x5080,	// (0x000889a7) call3_video_qcif_pane_ParamLimits

0x5080,	// (0x000889a7) call3_video_qcif_pane

0x5093,	// (0x000889ba) call3_video_qcif_uncrop_pane_ParamLimits

0x5093,	// (0x000889ba) call3_video_qcif_uncrop_pane

0x50a1,	// (0x000889c8) call3_video_subqcif_pane_ParamLimits

0x50a1,	// (0x000889c8) call3_video_subqcif_pane

0x50b5,	// (0x000889dc) call3_video_subqcif_uncrop_pane_ParamLimits

0x50b5,	// (0x000889dc) call3_video_subqcif_uncrop_pane

0x5126,	// (0x00088a4d) popup_call3_audio_in_window_g4_ParamLimits

0x5126,	// (0x00088a4d) popup_call3_audio_in_window_g4

0xedc5,	// (0x000926ec) mup_spec_half_pane

0xedc5,	// (0x000926ec) mup_spec_half_pane_cp

0xedc5,	// (0x000926ec) mup_osc_middle_pane

0x23af,	// (0x00085cd6) mup_visualizer_osc_pane_g1

0xbb24,	// (0x0008f44b) mup_spec_bar_pane_ParamLimits

0xbb24,	// (0x0008f44b) mup_spec_bar_pane

0x23af,	// (0x00085cd6) mup_spec_bar_pane_g1

0x23af,	// (0x00085cd6) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x00092cbf) mup_spec_bar_pane_g

0x1bd5,	// (0x000854fc) aid_cale_week_size_cell_pane_ParamLimits

0x1bef,	// (0x00085516) bg_cale_heading_pane_ParamLimits

0x1c07,	// (0x0008552e) bg_cale_pane_cp01_ParamLimits

0x1c24,	// (0x0008554b) cale_week_corner_pane_ParamLimits

0x1c43,	// (0x0008556a) cale_week_day_heading_pane_ParamLimits

0x1c60,	// (0x00085587) cale_week_scroll_pane_g1_ParamLimits

0x1c73,	// (0x0008559a) cale_week_scroll_pane_g2_ParamLimits

0x1c8b,	// (0x000855b2) cale_week_scroll_pane_g3_ParamLimits

0x1ca3,	// (0x000855ca) cale_week_scroll_pane_g4_ParamLimits

0x1cbb,	// (0x000855e2) cale_week_scroll_pane_g5_ParamLimits

0x1cdb,	// (0x00085602) cale_week_scroll_pane_g6_ParamLimits

0x1cfb,	// (0x00085622) cale_week_scroll_pane_g7_ParamLimits

0x1d1b,	// (0x00085642) cale_week_scroll_pane_g8_ParamLimits

0x1d3f,	// (0x00085666) cale_week_scroll_pane_g9_ParamLimits

0x1d57,	// (0x0008567e) cale_week_scroll_pane_g10_ParamLimits

0x1d6f,	// (0x00085696) cale_week_scroll_pane_g11_ParamLimits

0x1d87,	// (0x000856ae) cale_week_scroll_pane_g12_ParamLimits

0x1d9f,	// (0x000856c6) cale_week_scroll_pane_g13_ParamLimits

0x1d9f,	// (0x000856c6) cale_week_scroll_pane_g14_ParamLimits

0x1d9f,	// (0x000856c6) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x00092a52) cale_week_scroll_pane_g_ParamLimits

0x1ddb,	// (0x00085702) cale_week_time_pane_ParamLimits

0x1dff,	// (0x00085726) grid_cale_week_pane_ParamLimits

0x1e25,	// (0x0008574c) listscroll_cale_week_pane_t1

0x1e37,	// (0x0008575e) scroll_pane_cp08_ParamLimits

0x2c51,	// (0x00086578) cale_month_corner_pane_ParamLimits

0x306b,	// (0x00086992) cale_month_pane_t1

0x307d,	// (0x000869a4) cale_month_week_pane_ParamLimits

0x391e,	// (0x00087245) popup_call_status_window_g1_ParamLimits

0x3932,	// (0x00087259) popup_call_status_window_g2_ParamLimits

0x3946,	// (0x0008726d) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00092bcc) popup_call_status_window_g_ParamLimits

0x39ae,	// (0x000872d5) aid_call2_pane

0x060e,	// (0x00083f35) msg_header_pane_g1

0x44c3,	// (0x00087dea) postcard_address2_pane_ParamLimits

0x44c3,	// (0x00087dea) postcard_address2_pane

0x44d5,	// (0x00087dfc) postcard_message2_pane_ParamLimits

0x44d5,	// (0x00087dfc) postcard_message2_pane

0x5020,	// (0x00088947) message2_row_pane_ParamLimits

0x5020,	// (0x00088947) message2_row_pane

0x503d,	// (0x00088964) address2_row_pane_ParamLimits

0x503d,	// (0x00088964) address2_row_pane

0xbaf1,	// (0x0008f418) postcard_message2_row_pane_g1

0xbaf9,	// (0x0008f420) postcard_message2_row_pane_t1

0xbaf1,	// (0x0008f418) address2_row_pane_g1

0xbaf9,	// (0x0008f420) address2_row_pane_t1

0x21ba,	// (0x00085ae1) aid_size_cell_vorec

0x1449,	// (0x00084d70) main_rss_pane

0xbb07,	// (0x0008f42e) rss_list_single_pane_ParamLimits

0xbb07,	// (0x0008f42e) rss_list_single_pane

0xbb15,	// (0x0008f43c) rss_list_single_pane_t1

0xbb15,	// (0x0008f43c) rss_list_single_pane_t2

0x0001,

0xf568,	// (0x00092e8f) rss_list_single_pane_t

0x1449,	// (0x00084d70) main_camera2_pane

0x1449,	// (0x00084d70) main_video2_pane

0xbbc7,	// (0x0008f4ee) cams_zoom_pane_cp2_ParamLimits

0xbbc7,	// (0x0008f4ee) cams_zoom_pane_cp2

0xbbc7,	// (0x0008f4ee) image2_vga_pane_ParamLimits

0xbbc7,	// (0x0008f4ee) image2_vga_pane

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g1_ParamLimits

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g1

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g2_ParamLimits

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g2

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g3_ParamLimits

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g3

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g4_ParamLimits

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g4

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g5_ParamLimits

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g5

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g6_ParamLimits

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g6

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g7_ParamLimits

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g7

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g8_ParamLimits

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g8

0x0008,

0xf584,	// (0x00092eab) main_camera2_pane_g_ParamLimits

0xf584,	// (0x00092eab) main_camera2_pane_g

0x51e7,	// (0x00088b0e) main_camera2_pane_t1_ParamLimits

0x51e7,	// (0x00088b0e) main_camera2_pane_t1

0x51e7,	// (0x00088b0e) main_camera2_pane_t2_ParamLimits

0x51e7,	// (0x00088b0e) main_camera2_pane_t2

0x51e7,	// (0x00088b0e) main_camera2_pane_t3_ParamLimits

0x51e7,	// (0x00088b0e) main_camera2_pane_t3

0x51e7,	// (0x00088b0e) main_camera2_pane_t4_ParamLimits

0x51e7,	// (0x00088b0e) main_camera2_pane_t4

0x0006,

0xf597,	// (0x00092ebe) main_camera2_pane_t_ParamLimits

0xf597,	// (0x00092ebe) main_camera2_pane_t

0xbbf7,	// (0x0008f51e) cams_zoom_pane_cp4_ParamLimits

0xbbf7,	// (0x0008f51e) cams_zoom_pane_cp4

0xbc05,	// (0x0008f52c) image2_cif_pane_ParamLimits

0xbc05,	// (0x0008f52c) image2_cif_pane

0xedcf,	// (0x000926f6) image2_subqcif_pane_ParamLimits

0xedcf,	// (0x000926f6) image2_subqcif_pane

0x51fb,	// (0x00088b22) main_video2_pane_g1_ParamLimits

0x51fb,	// (0x00088b22) main_video2_pane_g1

0x51fb,	// (0x00088b22) main_video2_pane_g2_ParamLimits

0x51fb,	// (0x00088b22) main_video2_pane_g2

0x51fb,	// (0x00088b22) main_video2_pane_g3_ParamLimits

0x51fb,	// (0x00088b22) main_video2_pane_g3

0x51fb,	// (0x00088b22) main_video2_pane_g4_ParamLimits

0x51fb,	// (0x00088b22) main_video2_pane_g4

0x51fb,	// (0x00088b22) main_video2_pane_g5_ParamLimits

0x51fb,	// (0x00088b22) main_video2_pane_g5

0x51fb,	// (0x00088b22) main_video2_pane_g6_ParamLimits

0x51fb,	// (0x00088b22) main_video2_pane_g6

0x0005,

0xf5a6,	// (0x00092ecd) main_video2_pane_g_ParamLimits

0xf5a6,	// (0x00092ecd) main_video2_pane_g

0x5209,	// (0x00088b30) main_video2_pane_t1_ParamLimits

0x5209,	// (0x00088b30) main_video2_pane_t1

0x5209,	// (0x00088b30) main_video2_pane_t2_ParamLimits

0x5209,	// (0x00088b30) main_video2_pane_t2

0x5209,	// (0x00088b30) main_video2_pane_t3_ParamLimits

0x5209,	// (0x00088b30) main_video2_pane_t3

0x0002,

0xf5b3,	// (0x00092eda) main_video2_pane_t_ParamLimits

0xf5b3,	// (0x00092eda) main_video2_pane_t

0x4b74,	// (0x0008849b) call_muted_g2

0x0001,

0xf55a,	// (0x00092e81) call_muted_g

0x1449,	// (0x00084d70) main_mup2_pane

0x4050,	// (0x00087977) main_mup2_pane_g1_ParamLimits

0x4050,	// (0x00087977) main_mup2_pane_g1

0x4050,	// (0x00087977) main_mup2_pane_g2_ParamLimits

0x4050,	// (0x00087977) main_mup2_pane_g2

0x23af,	// (0x00085cd6) main_mup_pane_g13_cp1

0xedc5,	// (0x000926ec) mup_volume_pane_cp1

0x4050,	// (0x00087977) main_mup2_pane_g4_ParamLimits

0x4050,	// (0x00087977) main_mup2_pane_g4

0x4050,	// (0x00087977) main_mup2_pane_g5_ParamLimits

0x4050,	// (0x00087977) main_mup2_pane_g5

0x4050,	// (0x00087977) main_mup2_pane_g6_ParamLimits

0x4050,	// (0x00087977) main_mup2_pane_g6

0x4050,	// (0x00087977) main_mup2_pane_g7_ParamLimits

0x4050,	// (0x00087977) main_mup2_pane_g7

0x0006,

0xf5ba,	// (0x00092ee1) main_mup2_pane_g_ParamLimits

0xf5ba,	// (0x00092ee1) main_mup2_pane_g

0x405e,	// (0x00087985) main_mup2_pane_t1_ParamLimits

0x405e,	// (0x00087985) main_mup2_pane_t1

0x405e,	// (0x00087985) main_mup2_pane_t2_ParamLimits

0x405e,	// (0x00087985) main_mup2_pane_t2

0x405e,	// (0x00087985) main_mup2_pane_t3_ParamLimits

0x405e,	// (0x00087985) main_mup2_pane_t3

0x405e,	// (0x00087985) main_mup2_pane_t4_ParamLimits

0x405e,	// (0x00087985) main_mup2_pane_t4

0x405e,	// (0x00087985) main_mup2_pane_t5_ParamLimits

0x405e,	// (0x00087985) main_mup2_pane_t5

0x405e,	// (0x00087985) main_mup2_pane_t6_ParamLimits

0x405e,	// (0x00087985) main_mup2_pane_t6

0x0005,

0xf5c9,	// (0x00092ef0) main_mup2_pane_t_ParamLimits

0xf5c9,	// (0x00092ef0) main_mup2_pane_t

0x4086,	// (0x000879ad) mup2_visualizer_pane_ParamLimits

0x4086,	// (0x000879ad) mup2_visualizer_pane

0x4086,	// (0x000879ad) mup_progress_pane_cp_ParamLimits

0x4086,	// (0x000879ad) mup_progress_pane_cp

0xbc13,	// (0x0008f53a) mup_volume_pane_cp_ParamLimits

0xbc13,	// (0x0008f53a) mup_volume_pane_cp

0x171f,	// (0x00085046) mup2_visualizer_pane_g1_ParamLimits

0x171f,	// (0x00085046) mup2_visualizer_pane_g1

0x172d,	// (0x00085054) mup2_visualizer_pane_g2_ParamLimits

0x172d,	// (0x00085054) mup2_visualizer_pane_g2

0x172d,	// (0x00085054) mup2_visualizer_pane_g3_ParamLimits

0x172d,	// (0x00085054) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x000929cb) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x000929cb) mup2_visualizer_pane_g

0xa9f8,	// (0x0008e31f) aid_size_cell_fmradio

0x4d26,	// (0x0008864d) aid_height_parent_landcape

0x2968,	// (0x0008628f) wml_content_pane_cp

0x2970,	// (0x00086297) wml_tabs_pane

0x2979,	// (0x000862a0) popup_wml_miniature_window

0x2981,	// (0x000862a8) scroll_pane_cp021

0x2995,	// (0x000862bc) wml_content_pane_comp8

0x1449,	// (0x00084d70) bg_popup_sub_pane_cp05

0xbc29,	// (0x0008f550) popup_wml_miniature_window_g1

0xbc31,	// (0x0008f558) wml_miniature_view_pane

0x521d,	// (0x00088b44) aid_size_wml_view

0x5225,	// (0x00088b4c) wml_miniature_view_pane_g1

0x522e,	// (0x00088b55) wml_miniature_view_pane_g2

0x5237,	// (0x00088b5e) wml_miniature_view_pane_g3

0x523f,	// (0x00088b66) wml_miniature_view_pane_g4

0x5247,	// (0x00088b6e) wml_miniature_view_pane_g5

0x524f,	// (0x00088b76) wml_miniature_view_pane_g6

0x5257,	// (0x00088b7e) wml_miniature_view_pane_g7

0x525f,	// (0x00088b86) wml_miniature_view_pane_g8

0x0007,

0xf5d6,	// (0x00092efd) wml_miniature_view_pane_g

0xbc39,	// (0x0008f560) background_graphic_ParamLimits

0xbc39,	// (0x0008f560) background_graphic

0xbc45,	// (0x0008f56c) wml_tabs_2_pane

0xbc4e,	// (0x0008f575) wml_tabs_3_pane_ParamLimits

0xbc4e,	// (0x0008f575) wml_tabs_3_pane

0xbc60,	// (0x0008f587) wml_tabs_4_pane_ParamLimits

0xbc60,	// (0x0008f587) wml_tabs_4_pane

0xbc76,	// (0x0008f59d) wml_tabs_5_pane_ParamLimits

0xbc76,	// (0x0008f59d) wml_tabs_5_pane

0xbc90,	// (0x0008f5b7) wml_tabs_pane_g2_ParamLimits

0xbc90,	// (0x0008f5b7) wml_tabs_pane_g2

0xbca5,	// (0x0008f5cc) wml_tabs_pane_g3_ParamLimits

0xbca5,	// (0x0008f5cc) wml_tabs_pane_g3

0xbcba,	// (0x0008f5e1) wml_tabs_2_active_pane_ParamLimits

0xbcba,	// (0x0008f5e1) wml_tabs_2_active_pane

0xbcba,	// (0x0008f5e1) wml_tabs_2_passive_pane_ParamLimits

0xbcba,	// (0x0008f5e1) wml_tabs_2_passive_pane

0x5267,	// (0x00088b8e) wml_tabs_3_active_pane_cp_ParamLimits

0x5267,	// (0x00088b8e) wml_tabs_3_active_pane_cp

0x527c,	// (0x00088ba3) wml_tabs_3_passive_pane_ParamLimits

0x527c,	// (0x00088ba3) wml_tabs_3_passive_pane

0x528f,	// (0x00088bb6) wml_tabs_3_passive_pane_cp_ParamLimits

0x528f,	// (0x00088bb6) wml_tabs_3_passive_pane_cp

0x52a6,	// (0x00088bcd) tabs_4_active_pane

0x52ae,	// (0x00088bd5) tabs_4_passive_pane

0x52b8,	// (0x00088bdf) tabs_4_passive_pane_cp

0x52c0,	// (0x00088be7) tabs_4_passive_pane_cp2

0x4a68,	// (0x0008838f) aid_height_text

0x4086,	// (0x000879ad) mup_volume_cont_pane_ParamLimits

0x4086,	// (0x000879ad) mup_volume_cont_pane

0xedc5,	// (0x000926ec) aid_size_cell_pinb

0xedc5,	// (0x000926ec) aid_size_list_pinb

0x4086,	// (0x000879ad) mup2_volume_cont_pane_ParamLimits

0x4086,	// (0x000879ad) mup2_volume_cont_pane

0xbcc8,	// (0x0008f5ef) mup2_volume_cont_pane_g1_ParamLimits

0xbcc8,	// (0x0008f5ef) mup2_volume_cont_pane_g1

0x0db6,	// (0x000846dd) aid_size_cell_touch_ParamLimits

0x0db6,	// (0x000846dd) aid_size_cell_touch

0x0fe2,	// (0x00084909) touch_pane_ParamLimits

0x0fe2,	// (0x00084909) touch_pane

0xedc5,	// (0x000926ec) main_rss2_pane

0xbce7,	// (0x0008f60e) listscroll_rss2_pane

0xbcf0,	// (0x0008f617) rss2_navigation_pane

0xbcf8,	// (0x0008f61f) list_rss2_pane

0x3b38,	// (0x0008745f) scroll_pane_cp22

0xbd00,	// (0x0008f627) rss2_navigation_pane_g1

0xbd09,	// (0x0008f630) rss2_navigation_pane_g2

0xbd11,	// (0x0008f638) rss2_navigation_pane_g3

0x0002,

0xf5e7,	// (0x00092f0e) rss2_navigation_pane_g

0xbd19,	// (0x0008f640) rss2_navigation_pane_t1

0x52ca,	// (0x00088bf1) rss2_list_single_pane_ParamLimits

0x52ca,	// (0x00088bf1) rss2_list_single_pane

0xbd27,	// (0x0008f64e) rss2_list_single_pane_t2

0xbd35,	// (0x0008f65c) rss2_list_single_pane_t3_ParamLimits

0xbd35,	// (0x0008f65c) rss2_list_single_pane_t3

0xbd52,	// (0x0008f679) rss2_list_single_pane_t4

0x34af,	// (0x00086dd6) smil_status_pane_g1

0xedcf,	// (0x000926f6) main_image2_pane_ParamLimits

0xedcf,	// (0x000926f6) main_image2_pane

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g9_ParamLimits

0xbbd5,	// (0x0008f4fc) main_camera2_pane_g9

0x51e7,	// (0x00088b0e) main_camera2_pane_t5_ParamLimits

0x51e7,	// (0x00088b0e) main_camera2_pane_t5

0xbbe3,	// (0x0008f50a) main_camera2_pane_t6_ParamLimits

0xbbe3,	// (0x0008f50a) main_camera2_pane_t6

0x52e0,	// (0x00088c07) main_image2_pane_g1_ParamLimits

0x52e0,	// (0x00088c07) main_image2_pane_g1

0x473b,	// (0x00088062) smil2_video_pane_ParamLimits

0x473b,	// (0x00088062) smil2_video_pane

0xa66e,	// (0x0008df95) aid_zoom_text_primary_cp

0xa6ad,	// (0x0008dfd4) popup_preview_fixed_window

0x285e,	// (0x00086185) im_reading_pane_g1

0x51d9,	// (0x00088b00) cams2_bc_adjust_pane_cp_ParamLimits

0x51d9,	// (0x00088b00) cams2_bc_adjust_pane_cp

0x4086,	// (0x000879ad) cams2_bc_adjust_pane_ParamLimits

0x4086,	// (0x000879ad) cams2_bc_adjust_pane

0x23af,	// (0x00085cd6) cams2_bc_adjust_pane_g1

0xedc5,	// (0x000926ec) cams2_slider_pane

0x23af,	// (0x00085cd6) cams2_slider_pane_g1

0x23af,	// (0x00085cd6) cams2_slider_pane_g2

0x0006,

0xf5ee,	// (0x00092f15) cams2_slider_pane_g

0x177b,	// (0x000850a2) calc_display_pane_ParamLimits

0x17a0,	// (0x000850c7) calc_paper_pane_ParamLimits

0x17c3,	// (0x000850ea) grid_calc_pane_ParamLimits

0xa7f2,	// (0x0008e119) popup_clock_digital_window_t1_ParamLimits

0xa995,	// (0x0008e2bc) main_image_pane_t1

0x175d,	// (0x00085084) aid_size_cell_calc_ParamLimits

0x175d,	// (0x00085084) aid_size_cell_calc

0x4d6c,	// (0x00088693) popup_blid_sat_info2_window_ParamLimits

0x4d6c,	// (0x00088693) popup_blid_sat_info2_window

0xbd60,	// (0x0008f687) aid_size_cell_blid

0xbc05,	// (0x0008f52c) bg_popup_window_pane_cp07

0xbd7d,	// (0x0008f6a4) grid_popup_blid_pane

0xbd87,	// (0x0008f6ae) heading_pane_cp05_ParamLimits

0xbd87,	// (0x0008f6ae) heading_pane_cp05

0xbe51,	// (0x0008f778) cell_popup_blid_pane_ParamLimits

0xbe51,	// (0x0008f778) cell_popup_blid_pane

0xbe75,	// (0x0008f79c) cell_popup_blid_pane_g1

0xbe7d,	// (0x0008f7a4) cell_popup_blid_pane_t1

0x4086,	// (0x000879ad) mup2_indicator_pane_ParamLimits

0x4086,	// (0x000879ad) mup2_indicator_pane

0xedc5,	// (0x000926ec) mup2_visualizer_osc_pane

0xbc13,	// (0x0008f53a) mup2_visualizer_spec_pane_ParamLimits

0xbc13,	// (0x0008f53a) mup2_visualizer_spec_pane

0xedc5,	// (0x000926ec) mup2_spec_half_pane

0xedc5,	// (0x000926ec) mup2_spec_half_pane_cp

0xbe8b,	// (0x0008f7b2) mup2_spec_bar_pane_ParamLimits

0xbe8b,	// (0x0008f7b2) mup2_spec_bar_pane

0x23af,	// (0x00085cd6) mup2_spec_bar_pane_g1

0xbeaa,	// (0x0008f7d1) mup2_spec_bar_pane_g2

0x0001,

0xf614,	// (0x00092f3b) mup2_spec_bar_pane_g

0xedc5,	// (0x000926ec) mup2_osc_middle_pane

0x23af,	// (0x00085cd6) mup2_visualizer_osc_pane_g1

0xedfd,	// (0x00092724) popup_number_entry_window_t1_ParamLimits

0xee10,	// (0x00092737) popup_number_entry_window_t2_ParamLimits

0xee22,	// (0x00092749) popup_number_entry_window_t3_ParamLimits

0x1034,	// (0x0008495b) popup_number_entry_window_t5_ParamLimits

0x1034,	// (0x0008495b) popup_number_entry_window_t5

0xf045,	// (0x0009296c) popup_number_entry_window_t_ParamLimits

0x1069,	// (0x00084990) text_title_cp2_ParamLimits

0xa8bb,	// (0x0008e1e2) aid_hotspot_pointer_text2_pane

0xa8e1,	// (0x0008e208) main_viewer_pane_g9_ParamLimits

0xa8e1,	// (0x0008e208) main_viewer_pane_g9

0x306b,	// (0x00086992) cale_month_pane_t1_ParamLimits

0x3529,	// (0x00086e50) bg_cale_pane_ParamLimits

0x3541,	// (0x00086e68) list_cale_pane_ParamLimits

0x3552,	// (0x00086e79) listscroll_cale_day_pane_t1

0x3564,	// (0x00086e8b) scroll_pane_cp09_ParamLimits

0x40ed,	// (0x00087a14) main_mup_eq_pane_t1_ParamLimits

0x40ed,	// (0x00087a14) main_mup_eq_pane_t1

0x4107,	// (0x00087a2e) main_mup_eq_pane_t2_ParamLimits

0x4107,	// (0x00087a2e) main_mup_eq_pane_t2

0x4121,	// (0x00087a48) main_mup_eq_pane_t3_ParamLimits

0x4121,	// (0x00087a48) main_mup_eq_pane_t3

0x413d,	// (0x00087a64) main_mup_eq_pane_t4_ParamLimits

0x413d,	// (0x00087a64) main_mup_eq_pane_t4

0x4159,	// (0x00087a80) main_mup_eq_pane_t5_ParamLimits

0x4159,	// (0x00087a80) main_mup_eq_pane_t5

0x4175,	// (0x00087a9c) main_mup_eq_pane_t6_ParamLimits

0x4175,	// (0x00087a9c) main_mup_eq_pane_t6

0x4189,	// (0x00087ab0) main_mup_eq_pane_t7_ParamLimits

0x4189,	// (0x00087ab0) main_mup_eq_pane_t7

0x419d,	// (0x00087ac4) main_mup_eq_pane_t8_ParamLimits

0x419d,	// (0x00087ac4) main_mup_eq_pane_t8

0x41b1,	// (0x00087ad8) main_mup_eq_pane_t9_ParamLimits

0x41b1,	// (0x00087ad8) main_mup_eq_pane_t9

0x41cb,	// (0x00087af2) main_mup_eq_pane_t10_ParamLimits

0x41cb,	// (0x00087af2) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x00092ccb) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x00092ccb) main_mup_eq_pane_t

0x427a,	// (0x00087ba1) mup_equalizer_pane_cp5_ParamLimits

0x428e,	// (0x00087bb5) mup_equalizer_pane_cp6_ParamLimits

0x42a2,	// (0x00087bc9) mup_equalizer_pane_cp7_ParamLimits

0xedc5,	// (0x000926ec) main_gallery_pane

0xbb43,	// (0x0008f46a) smil2_volume_pane

0xbb4b,	// (0x0008f472) smil_status_volume_pane_g1_ParamLimits

0xbb5e,	// (0x0008f485) smil_status_volume_pane_g2_ParamLimits

0xbb71,	// (0x0008f498) smil_status_volume_pane_g3_ParamLimits

0xf56d,	// (0x00092e94) smil_status_volume_pane_g_ParamLimits

0xbc05,	// (0x0008f52c) bg_popup_window_pane_cp07_ParamLimits

0xbd68,	// (0x0008f68f) blid_firmament_pane

0xedcf,	// (0x000926f6) aid_size_cell_gallery_ParamLimits

0xedcf,	// (0x000926f6) aid_size_cell_gallery

0xedcf,	// (0x000926f6) grid_gallery_pane_ParamLimits

0xedcf,	// (0x000926f6) grid_gallery_pane

0xbc05,	// (0x0008f52c) cell_gallery_pane_ParamLimits

0xbc05,	// (0x0008f52c) cell_gallery_pane

0xedcf,	// (0x000926f6) bg_cell_gallery_focus_pane_ParamLimits

0xedcf,	// (0x000926f6) bg_cell_gallery_focus_pane

0x171f,	// (0x00085046) cell_gallery_pane_g1_ParamLimits

0x171f,	// (0x00085046) cell_gallery_pane_g1

0x171f,	// (0x00085046) cell_gallery_pane_g2_ParamLimits

0x171f,	// (0x00085046) cell_gallery_pane_g2

0x171f,	// (0x00085046) cell_gallery_pane_g3_ParamLimits

0x171f,	// (0x00085046) cell_gallery_pane_g3

0x172d,	// (0x00085054) cell_gallery_pane_g4_ParamLimits

0x172d,	// (0x00085054) cell_gallery_pane_g4

0x0003,

0xf619,	// (0x00092f40) cell_gallery_pane_g_ParamLimits

0xf619,	// (0x00092f40) cell_gallery_pane_g

0xbeb4,	// (0x0008f7db) bg_cell_gallery_focus_pane_g1

0xbebc,	// (0x0008f7e3) bg_cell_gallery_focus_pane_g2

0xbec4,	// (0x0008f7eb) bg_cell_gallery_focus_pane_g3

0xbecc,	// (0x0008f7f3) bg_cell_gallery_focus_pane_g4

0xbed4,	// (0x0008f7fb) bg_cell_gallery_focus_pane_g5

0xbedc,	// (0x0008f803) bg_cell_gallery_focus_pane_g6

0xbee4,	// (0x0008f80b) bg_cell_gallery_focus_pane_g7

0xbeec,	// (0x0008f813) bg_cell_gallery_focus_pane_g8

0x0007,

0xf622,	// (0x00092f49) bg_cell_gallery_focus_pane_g

0xbef4,	// (0x0008f81b) aid_firma_cardinal

0xbf08,	// (0x0008f82f) blid_firmament_pane_t1

0xbf1f,	// (0x0008f846) blid_firmament_pane_t2

0xbf36,	// (0x0008f85d) blid_firmament_pane_t3

0xbf4d,	// (0x0008f874) blid_firmament_pane_t4

0x0003,

0xf633,	// (0x00092f5a) blid_firmament_pane_t

0xbf64,	// (0x0008f88b) blid_sat_info_pane

0x23af,	// (0x00085cd6) blid_sat_info_pane_g1

0x23af,	// (0x00085cd6) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x00092cbf) blid_sat_info_pane_g

0xbf74,	// (0x0008f89b) blid_sat_info_pane_t1

0xbf82,	// (0x0008f8a9) smil2_volume_content_pane

0xbf8b,	// (0x0008f8b2) smil2_volume_pane_g1

0x1a50,	// (0x00085377) smil2_volume_content_pane_g1

0xbf93,	// (0x0008f8ba) smil2_volume_content_pane_g2

0xbf9c,	// (0x0008f8c3) smil2_volume_content_pane_g3

0xbfa5,	// (0x0008f8cc) smil2_volume_content_pane_g4

0xbfae,	// (0x0008f8d5) smil2_volume_content_pane_g5

0xbfb7,	// (0x0008f8de) smil2_volume_content_pane_g6

0xbfc0,	// (0x0008f8e7) smil2_volume_content_pane_g7

0xbfc9,	// (0x0008f8f0) smil2_volume_content_pane_g8

0xbfd2,	// (0x0008f8f9) smil2_volume_content_pane_g9

0xbfdb,	// (0x0008f902) smil2_volume_content_pane_g10

0x0009,

0xf63c,	// (0x00092f63) smil2_volume_content_pane_g

0x1ee2,	// (0x00085809) cale_week_day_heading_pane_t1_ParamLimits

0x1f0c,	// (0x00085833) cale_week_day_heading_pane_t2_ParamLimits

0x1f3b,	// (0x00085862) cale_week_day_heading_pane_t3_ParamLimits

0x1f6a,	// (0x00085891) cale_week_day_heading_pane_t4_ParamLimits

0x1f99,	// (0x000858c0) cale_week_day_heading_pane_t5_ParamLimits

0x1fd0,	// (0x000858f7) cale_week_day_heading_pane_t6_ParamLimits

0x2007,	// (0x0008592e) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x00092a73) cale_week_day_heading_pane_t_ParamLimits

0x2031,	// (0x00085958) bg_cale_side_pane_ParamLimits

0x203f,	// (0x00085966) cale_week_time_pane_t1_ParamLimits

0x2059,	// (0x00085980) cale_week_time_pane_t2_ParamLimits

0x2073,	// (0x0008599a) cale_week_time_pane_t3_ParamLimits

0x208d,	// (0x000859b4) cale_week_time_pane_t4_ParamLimits

0x20a7,	// (0x000859ce) cale_week_time_pane_t5_ParamLimits

0x20c1,	// (0x000859e8) cale_week_time_pane_t6_ParamLimits

0x20db,	// (0x00085a02) cale_week_time_pane_t7_ParamLimits

0x20f5,	// (0x00085a1c) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x00092a82) cale_week_time_pane_t_ParamLimits

0x2115,	// (0x00085a3c) cell_cale_week_pane_g2_ParamLimits

0x2031,	// (0x00085958) bg_cale_side_pane_cp01_ParamLimits

0x32aa,	// (0x00086bd1) cale_month_week_pane_t1_ParamLimits

0x32c3,	// (0x00086bea) cale_month_week_pane_t2_ParamLimits

0x32dc,	// (0x00086c03) cale_month_week_pane_t3_ParamLimits

0x32f5,	// (0x00086c1c) cale_month_week_pane_t4_ParamLimits

0x330e,	// (0x00086c35) cale_month_week_pane_t5_ParamLimits

0x3327,	// (0x00086c4e) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x00092b50) cale_month_week_pane_t_ParamLimits

0xa766,	// (0x0008e08d) cell_cale_month_pane_g1_ParamLimits

0xedc5,	// (0x000926ec) main_cale_event_viewer_pane

0xedc5,	// (0x000926ec) listscroll_cale_event_viewer_pane

0xbfe4,	// (0x0008f90b) list_cale_ev_pane

0xbfec,	// (0x0008f913) scroll_pane_cp023

0xbff8,	// (0x0008f91f) field_cale_ev_pane_ParamLimits

0xbff8,	// (0x0008f91f) field_cale_ev_pane

0xc016,	// (0x0008f93d) field_cale_ev_content_pane_ParamLimits

0xc016,	// (0x0008f93d) field_cale_ev_content_pane

0xc022,	// (0x0008f949) field_cale_ev_pane_g1_ParamLimits

0xc022,	// (0x0008f949) field_cale_ev_pane_g1

0xc02e,	// (0x0008f955) field_cale_ev_pane_g2_ParamLimits

0xc02e,	// (0x0008f955) field_cale_ev_pane_g2

0xc046,	// (0x0008f96d) field_cale_ev_pane_g3_ParamLimits

0xc046,	// (0x0008f96d) field_cale_ev_pane_g3

0x0002,

0xf651,	// (0x00092f78) field_cale_ev_pane_g_ParamLimits

0xf651,	// (0x00092f78) field_cale_ev_pane_g

0xc05e,	// (0x0008f985) field_cale_ev_pane_t1_ParamLimits

0xc05e,	// (0x0008f985) field_cale_ev_pane_t1

0xc075,	// (0x0008f99c) field_cale_ev_content_pane_t1_ParamLimits

0xc075,	// (0x0008f99c) field_cale_ev_content_pane_t1

0x434a,	// (0x00087c71) bg_button_pane_cp01

0x1bba,	// (0x000854e1) listscroll_cale_week_pane_ParamLimits

0x1bcc,	// (0x000854f3) popup_toolbar_window_cp01

0x1e25,	// (0x0008574c) listscroll_cale_week_pane_t1_ParamLimits

0x1bba,	// (0x000854e1) listscroll_cale_day_pane_ParamLimits

0x1bcc,	// (0x000854f3) popup_toolbar_window_cp02

0x3552,	// (0x00086e79) listscroll_cale_day_pane_t1_ParamLimits

0x1bba,	// (0x000854e1) main_cale_month_pane_ParamLimits

0xbac1,	// (0x0008f3e8) popup_toolbar_window_cp03_ParamLimits

0xbac1,	// (0x0008f3e8) popup_toolbar_window_cp03

0x4603,	// (0x00087f2a) main_image_pane_g2_ParamLimits

0x4603,	// (0x00087f2a) main_image_pane_g2

0x4614,	// (0x00087f3b) main_image_pane_g3_ParamLimits

0x4614,	// (0x00087f3b) main_image_pane_g3

0x0002,

0xf436,	// (0x00092d5d) main_image_pane_g_ParamLimits

0xf436,	// (0x00092d5d) main_image_pane_g

0xa995,	// (0x0008e2bc) main_image_pane_t1_ParamLimits

0x4625,	// (0x00087f4c) main_image_pane_t2_ParamLimits

0x4625,	// (0x00087f4c) main_image_pane_t2

0x4637,	// (0x00087f5e) main_image_pane_t3_ParamLimits

0x4637,	// (0x00087f5e) main_image_pane_t3

0x465f,	// (0x00087f86) main_image_pane_t4_ParamLimits

0x465f,	// (0x00087f86) main_image_pane_t4

0x0003,

0xf43d,	// (0x00092d64) main_image_pane_t_ParamLimits

0xf43d,	// (0x00092d64) main_image_pane_t

0x467f,	// (0x00087fa6) popup_image_details_window_cp01

0x4689,	// (0x00087fb0) popup_toobar_trans_pane_cp01_ParamLimits

0x4689,	// (0x00087fb0) popup_toobar_trans_pane_cp01

0x4e3d,	// (0x00088764) popup_image_details_window_ParamLimits

0x4e3d,	// (0x00088764) popup_image_details_window

0xba94,	// (0x0008f3bb) popup_image_focus_window

0xbbc7,	// (0x0008f4ee) camera2_autofocus_pane_ParamLimits

0xbbc7,	// (0x0008f4ee) camera2_autofocus_pane

0xedc5,	// (0x000926ec) bg_popup_sub_pane_cp06

0xc093,	// (0x0008f9ba) popup_image_focus_window_g1

0xc09b,	// (0x0008f9c2) popup_image_focus_window_g2

0xc0a3,	// (0x0008f9ca) popup_image_focus_window_g3

0xc0ab,	// (0x0008f9d2) popup_image_focus_window_g4

0x0003,

0xf658,	// (0x00092f7f) popup_image_focus_window_g

0xc0b3,	// (0x0008f9da) popup_image_focus_window_t1

0xc0c1,	// (0x0008f9e8) popup_image_focus_window_t2

0xc0d1,	// (0x0008f9f8) popup_image_focus_window_t3

0x0002,

0xf661,	// (0x00092f88) popup_image_focus_window_t

0x171f,	// (0x00085046) camera2_autofocus_pane_g1

0xedcf,	// (0x000926f6) bg_tb_trans_pane_cp01

0xc0df,	// (0x0008fa06) popup_image_details_window_g1

0xc0f2,	// (0x0008fa19) popup_image_details_window_g2

0x0002,

0xf673,	// (0x00092f9a) popup_image_details_window_g

0xc11b,	// (0x0008fa42) popup_image_details_window_t1

0xc12d,	// (0x0008fa54) popup_image_details_window_t2

0xc146,	// (0x0008fa6d) popup_image_details_window_t3

0xc15a,	// (0x0008fa81) popup_image_details_window_t4

0xc175,	// (0x0008fa9c) popup_image_details_window_t5

0x0004,

0xf67a,	// (0x00092fa1) popup_image_details_window_t

0x18e1,	// (0x00085208) bg_calc_paper_pane_ParamLimits

0xedc5,	// (0x000926ec) grid_highlight_pane_cp013

0xa6bf,	// (0x0008dfe6) list_calc_pane_ParamLimits

0xa6d1,	// (0x0008dff8) scroll_pane_cp024

0x18f5,	// (0x0008521c) bg_calc_display_pane_ParamLimits

0x1901,	// (0x00085228) calc_display_pane_t1_ParamLimits

0x1913,	// (0x0008523a) calc_display_pane_t2_ParamLimits

0xa6d9,	// (0x0008e000) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x000929f3) calc_display_pane_t_ParamLimits

0x1a16,	// (0x0008533d) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x00092a10) cell_calc_pane_g

0x1a1f,	// (0x00085346) cell_calc_pane_t1

0x1a2e,	// (0x00085355) grid_highlight_pane_cp02_ParamLimits

0x1a44,	// (0x0008536b) toolbar_button_pane_cp01_ParamLimits

0x1a44,	// (0x0008536b) toolbar_button_pane_cp01

0xa9da,	// (0x0008e301) temp_image_control_pane_ParamLimits

0xa9da,	// (0x0008e301) temp_image_control_pane

0xedcf,	// (0x000926f6) main_mp3_pane

0xc18f,	// (0x0008fab6) temp_image_control_pane_g1_ParamLimits

0xc18f,	// (0x0008fab6) temp_image_control_pane_g1

0xc19d,	// (0x0008fac4) temp_image_control_pane_g2_ParamLimits

0xc19d,	// (0x0008fac4) temp_image_control_pane_g2

0xc1af,	// (0x0008fad6) temp_image_control_pane_g3_ParamLimits

0xc1af,	// (0x0008fad6) temp_image_control_pane_g3

0x52f6,	// (0x00088c1d) temp_image_control_pane_g4_ParamLimits

0x52f6,	// (0x00088c1d) temp_image_control_pane_g4

0x0003,

0xf685,	// (0x00092fac) temp_image_control_pane_g_ParamLimits

0xf685,	// (0x00092fac) temp_image_control_pane_g

0xc18f,	// (0x0008fab6) main_mp3_pane_g1

0x5309,	// (0x00088c30) main_mp3_pane_g2

0x0007,

0xf68e,	// (0x00092fb5) main_mp3_pane_g

0xc1e4,	// (0x0008fb0b) main_mp3_pane_t1

0x172d,	// (0x00085054) main_camera_pane_g8_ParamLimits

0x172d,	// (0x00085054) main_camera_pane_g8

0x235d,	// (0x00085c84) main_video_pane_g7_ParamLimits

0x235d,	// (0x00085c84) main_video_pane_g7

0x4072,	// (0x00087999) main_camera2_pane_t7_ParamLimits

0x4072,	// (0x00087999) main_camera2_pane_t7

0x2928,	// (0x0008624f) scroll_pane_cp025_ParamLimits

0x2928,	// (0x0008624f) scroll_pane_cp025

0x293c,	// (0x00086263) scroll_pane_cp026_ParamLimits

0x293c,	// (0x00086263) scroll_pane_cp026

0x294b,	// (0x00086272) wml_content_pane_ParamLimits

0xedc5,	// (0x000926ec) main_touch_calib_pane

0x53dd,	// (0x00088d04) main_touch_calib_pane_g1

0x53ef,	// (0x00088d16) main_touch_calib_pane_g2

0x5401,	// (0x00088d28) main_touch_calib_pane_g3

0x5413,	// (0x00088d3a) main_touch_calib_pane_g4

0x0003,

0xf6ac,	// (0x00092fd3) main_touch_calib_pane_g

0x5425,	// (0x00088d4c) main_touch_calib_pane_t1

0x543f,	// (0x00088d66) main_touch_calib_pane_t2

0x0004,

0xf6b5,	// (0x00092fdc) main_touch_calib_pane_t

0x3de0,	// (0x00087707) mup_progress_pane_cp02

0x3e15,	// (0x0008773c) navi_pane_g1

0x3ed0,	// (0x000877f7) navi_pane_mp_t3

0xedcf,	// (0x000926f6) main_mp3_pane_ParamLimits

0x4fc8,	// (0x000888ef) navi_pane_ParamLimits

0xc18f,	// (0x0008fab6) main_mp3_pane_g1_ParamLimits

0x5309,	// (0x00088c30) main_mp3_pane_g2_ParamLimits

0x5317,	// (0x00088c3e) main_mp3_pane_g3_ParamLimits

0x5317,	// (0x00088c3e) main_mp3_pane_g3

0x5325,	// (0x00088c4c) main_mp3_pane_g4_ParamLimits

0x5325,	// (0x00088c4c) main_mp3_pane_g4

0x171f,	// (0x00085046) main_mp3_pane_g5_ParamLimits

0x171f,	// (0x00085046) main_mp3_pane_g5

0xc1bf,	// (0x0008fae6) main_mp3_pane_g6_ParamLimits

0xc1bf,	// (0x0008fae6) main_mp3_pane_g6

0xc1cc,	// (0x0008faf3) main_mp3_pane_g7_ParamLimits

0xc1cc,	// (0x0008faf3) main_mp3_pane_g7

0xc1d8,	// (0x0008faff) main_mp3_pane_g8_ParamLimits

0xc1d8,	// (0x0008faff) main_mp3_pane_g8

0xf68e,	// (0x00092fb5) main_mp3_pane_g_ParamLimits

0x5331,	// (0x00088c58) main_mp3_pane_t2

0x533f,	// (0x00088c66) main_mp3_pane_t3

0xc1f2,	// (0x0008fb19) main_mp3_pane_t4

0xc200,	// (0x0008fb27) main_mp3_pane_t5

0x0005,

0xf69f,	// (0x00092fc6) main_mp3_pane_t

0xc20e,	// (0x0008fb35) mup_progress_pane_cp01

0xa66e,	// (0x0008df95) aid_zoom_text_secondary2

0xbfe4,	// (0x0008f90b) list_cale_ev2_pane

0xbfec,	// (0x0008f913) scroll_pane_cp023_ParamLimits

0x5495,	// (0x00088dbc) field_cale_ev2_pane_ParamLimits

0x5495,	// (0x00088dbc) field_cale_ev2_pane

0xc216,	// (0x0008fb3d) field_cale_ev2_pane_g1_ParamLimits

0xc216,	// (0x0008fb3d) field_cale_ev2_pane_g1

0xc222,	// (0x0008fb49) field_cale_ev2_pane_g2_ParamLimits

0xc222,	// (0x0008fb49) field_cale_ev2_pane_g2

0xc23a,	// (0x0008fb61) field_cale_ev2_pane_g3_ParamLimits

0xc23a,	// (0x0008fb61) field_cale_ev2_pane_g3

0x0003,

0xf6c0,	// (0x00092fe7) field_cale_ev2_pane_g_ParamLimits

0xf6c0,	// (0x00092fe7) field_cale_ev2_pane_g

0xc25e,	// (0x0008fb85) field_cale_ev2_pane_t1_ParamLimits

0xc25e,	// (0x0008fb85) field_cale_ev2_pane_t1

0xc275,	// (0x0008fb9c) field_cale_ev2_pane_t2_ParamLimits

0xc275,	// (0x0008fb9c) field_cale_ev2_pane_t2

0x0001,

0xf6c9,	// (0x00092ff0) field_cale_ev2_pane_t_ParamLimits

0xf6c9,	// (0x00092ff0) field_cale_ev2_pane_t

0x4479,	// (0x00087da0) main_postcard_pane_g5_ParamLimits

0x4479,	// (0x00087da0) main_postcard_pane_g5

0x448f,	// (0x00087db6) main_postcard_pane_g6_ParamLimits

0x448f,	// (0x00087db6) main_postcard_pane_g6

0xedcf,	// (0x000926f6) camera2_autofocus_pane_cp_ParamLimits

0xedcf,	// (0x000926f6) camera2_autofocus_pane_cp

0xedcf,	// (0x000926f6) main_mup3_pane

0x54fa,	// (0x00088e21) main_mup3_pane_g1_ParamLimits

0x54fa,	// (0x00088e21) main_mup3_pane_g1

0x551c,	// (0x00088e43) main_mup3_pane_g2_ParamLimits

0x551c,	// (0x00088e43) main_mup3_pane_g2

0x559c,	// (0x00088ec3) main_mup3_pane_g3_ParamLimits

0x559c,	// (0x00088ec3) main_mup3_pane_g3

0x55e2,	// (0x00088f09) main_mup3_pane_g4_ParamLimits

0x55e2,	// (0x00088f09) main_mup3_pane_g4

0x5628,	// (0x00088f4f) main_mup3_pane_g5_ParamLimits

0x5628,	// (0x00088f4f) main_mup3_pane_g5

0x566e,	// (0x00088f95) main_mup3_pane_g6_ParamLimits

0x566e,	// (0x00088f95) main_mup3_pane_g6

0x172d,	// (0x00085054) main_mup3_pane_g7_ParamLimits

0x172d,	// (0x00085054) main_mup3_pane_g7

0x0007,

0xf6d9,	// (0x00093000) main_mup3_pane_g_ParamLimits

0xf6d9,	// (0x00093000) main_mup3_pane_g

0x56ec,	// (0x00089013) main_mup3_pane_t1_ParamLimits

0x56ec,	// (0x00089013) main_mup3_pane_t1

0x5760,	// (0x00089087) main_mup3_pane_t2_ParamLimits

0x5760,	// (0x00089087) main_mup3_pane_t2

0x5834,	// (0x0008915b) main_mup3_pane_t4_ParamLimits

0x5834,	// (0x0008915b) main_mup3_pane_t4

0x588a,	// (0x000891b1) main_mup3_pane_t5_ParamLimits

0x588a,	// (0x000891b1) main_mup3_pane_t5

0x5946,	// (0x0008926d) main_mup3_pane_t6_ParamLimits

0x5946,	// (0x0008926d) main_mup3_pane_t6

0x0005,

0xf6ea,	// (0x00093011) main_mup3_pane_t_ParamLimits

0xf6ea,	// (0x00093011) main_mup3_pane_t

0x59fe,	// (0x00089325) mup3_progress_pane_ParamLimits

0x59fe,	// (0x00089325) mup3_progress_pane

0x5a8a,	// (0x000893b1) popup_mup3_control_window_ParamLimits

0x5a8a,	// (0x000893b1) popup_mup3_control_window

0xc28a,	// (0x0008fbb1) popup_mup3_text_window

0x5abc,	// (0x000893e3) mup3_progress_pane_t1

0x5adb,	// (0x00089402) mup3_progress_pane_t2

0xc292,	// (0x0008fbb9) mup3_progress_pane_t3

0x0002,

0xf6f7,	// (0x0009301e) mup3_progress_pane_t

0xc2af,	// (0x0008fbd6) mup_progress_pane_cp03

0xedc5,	// (0x000926ec) bg_tb_trans_pane_cp04

0x5afa,	// (0x00089421) mup3_volume_pane

0x5b02,	// (0x00089429) popup_mup3_control_window_g1

0x5b0b,	// (0x00089432) mup3_volume_pane_g1

0x5b14,	// (0x0008943b) mup3_volume_pane_g2

0x5b1d,	// (0x00089444) mup3_volume_pane_g3

0x0002,

0xf6fe,	// (0x00093025) mup3_volume_pane_g

0xedc5,	// (0x000926ec) bg_tb_trans_pane_cp03

0xc2bf,	// (0x0008fbe6) popup_mup3_text_window_g1

0xc2c7,	// (0x0008fbee) popup_mup3_text_window_t1

0x19ef,	// (0x00085316) list_calc_item_pane_g1_ParamLimits

0xbcde,	// (0x0008f605) mup_volume_pane_cp_g1

0x5459,	// (0x00088d80) main_touch_calib_pane_t3

0x546d,	// (0x00088d94) main_touch_calib_pane_t4

0x5481,	// (0x00088da8) main_touch_calib_pane_t5

0xa64a,	// (0x0008df71) aid_cell_size_toolbar2

0xa652,	// (0x0008df79) aid_popup3_width_pane

0xa65e,	// (0x0008df85) aid_zoom_text_msg_primary

0x220a,	// (0x00085b31) vorec_t7

0x195a,	// (0x00085281) bg_calc_paper_pane_g1_ParamLimits

0x1966,	// (0x0008528d) bg_calc_paper_pane_g2_ParamLimits

0x1972,	// (0x00085299) bg_calc_paper_pane_g3_ParamLimits

0x197e,	// (0x000852a5) bg_calc_paper_pane_g4_ParamLimits

0x198a,	// (0x000852b1) bg_calc_paper_pane_g5_ParamLimits

0x1996,	// (0x000852bd) bg_calc_paper_pane_g6_ParamLimits

0x19a5,	// (0x000852cc) bg_calc_paper_pane_g7_ParamLimits

0x19b4,	// (0x000852db) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x000929fa) bg_calc_paper_pane_g_ParamLimits

0x19c7,	// (0x000852ee) calc_bg_paper_pane_g9_ParamLimits

0xedcf,	// (0x000926f6) image_qvga_pane_ParamLimits

0xedcf,	// (0x000926f6) image_qvga_pane

0x16a4,	// (0x00084fcb) bg_popup_sub_pane_cp04_ParamLimits

0xa911,	// (0x0008e238) popup_mup_playback_window_g1_ParamLimits

0xa91d,	// (0x0008e244) popup_mup_playback_window_t1_ParamLimits

0xa932,	// (0x0008e259) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x00092d58) popup_mup_playback_window_t_ParamLimits

0x172d,	// (0x00085054) main_mup2_pane_g3_ParamLimits

0x172d,	// (0x00085054) main_mup2_pane_g3

0x25c5,	// (0x00085eec) popup_toolbar_window_cp04

0xad27,	// (0x0008e64e) popup_call2_audio_second_window_g3_ParamLimits

0xad27,	// (0x0008e64e) popup_call2_audio_second_window_g3

0xb13f,	// (0x0008ea66) popup_call2_audio_first_window_g4_ParamLimits

0xb13f,	// (0x0008ea66) popup_call2_audio_first_window_g4

0xb766,	// (0x0008f08d) popup_call2_audio_in_window_g4_ParamLimits

0xb766,	// (0x0008f08d) popup_call2_audio_in_window_g4

0x45e5,	// (0x00087f0c) aid_area_sk_bg_cut_ParamLimits

0x45e5,	// (0x00087f0c) aid_area_sk_bg_cut

0xa947,	// (0x0008e26e) aid_area_sk_bg_cut_2_ParamLimits

0xa947,	// (0x0008e26e) aid_area_sk_bg_cut_2

0xedc5,	// (0x000926ec) aid_placing_details_win

0xedc5,	// (0x000926ec) aid_placing_details_win_2

0x171f,	// (0x00085046) camera2_autofocus_pane_g1_ParamLimits

0x0f7b,	// (0x000848a2) popup_fixed_preview_cale_window_ParamLimits

0x0f7b,	// (0x000848a2) popup_fixed_preview_cale_window

0x3f90,	// (0x000878b7) navi_slider_pane_g3

0x3f99,	// (0x000878c0) navi_slider_pane_g4

0x3fa2,	// (0x000878c9) navi_slider_pane_g5

0x3f90,	// (0x000878b7) navi_slider_pane_g6

0xa818,	// (0x0008e13f) navi_slider_pane_g7

0x42bf,	// (0x00087be6) mup_scale_pane_g3

0x42c8,	// (0x00087bef) mup_scale_pane_g4

0x42d1,	// (0x00087bf8) mup_scale_pane_g5

0x42da,	// (0x00087c01) mup_scale_pane_g6

0x42e3,	// (0x00087c0a) mup_scale_pane_g7

0x23af,	// (0x00085cd6) cams2_slider_pane_g3

0x23af,	// (0x00085cd6) cams2_slider_pane_g4

0x23af,	// (0x00085cd6) cams2_slider_pane_g5

0x23af,	// (0x00085cd6) cams2_slider_pane_g6

0x23af,	// (0x00085cd6) cams2_slider_pane_g7

0x23af,	// (0x00085cd6) camera2_autofocus_pane_cp_g1

0xba76,	// (0x0008f39d) bg_popup_preview_window_pane_cp02_ParamLimits

0xba76,	// (0x0008f39d) bg_popup_preview_window_pane_cp02

0xc2d5,	// (0x0008fbfc) list_fp_cale_pane_ParamLimits

0xc2d5,	// (0x0008fbfc) list_fp_cale_pane

0xc2e1,	// (0x0008fc08) popup_fixed_preview_cale_window_t1_ParamLimits

0xc2e1,	// (0x0008fc08) popup_fixed_preview_cale_window_t1

0x5b26,	// (0x0008944d) popup_fixed_preview_cale_window_t2_ParamLimits

0x5b26,	// (0x0008944d) popup_fixed_preview_cale_window_t2

0x5b3b,	// (0x00089462) popup_fixed_preview_cale_window_t3_ParamLimits

0x5b3b,	// (0x00089462) popup_fixed_preview_cale_window_t3

0x0002,

0xf705,	// (0x0009302c) popup_fixed_preview_cale_window_t_ParamLimits

0xf705,	// (0x0009302c) popup_fixed_preview_cale_window_t

0x5b50,	// (0x00089477) list_single_fp_cale_pane_ParamLimits

0x5b50,	// (0x00089477) list_single_fp_cale_pane

0xc2ff,	// (0x0008fc26) list_single_fp_cale_pane_g1_ParamLimits

0xc2ff,	// (0x0008fc26) list_single_fp_cale_pane_g1

0xc30b,	// (0x0008fc32) list_single_fp_cale_pane_g2_ParamLimits

0xc30b,	// (0x0008fc32) list_single_fp_cale_pane_g2

0x0002,

0xf70c,	// (0x00093033) list_single_fp_cale_pane_g_ParamLimits

0xf70c,	// (0x00093033) list_single_fp_cale_pane_g

0xc324,	// (0x0008fc4b) list_single_fp_cale_pane_t1_ParamLimits

0xc324,	// (0x0008fc4b) list_single_fp_cale_pane_t1

0xc336,	// (0x0008fc5d) list_single_fp_cale_pane_t2_ParamLimits

0xc336,	// (0x0008fc5d) list_single_fp_cale_pane_t2

0x0001,

0xf713,	// (0x0009303a) list_single_fp_cale_pane_t_ParamLimits

0xf713,	// (0x0009303a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xedc5,	// (0x000926ec) main_dialer_pane

0xedc5,	// (0x000926ec) aid_cell_size_keypad

0xedc5,	// (0x000926ec) dialer_ne_pane

0xedc5,	// (0x000926ec) grid_dialer_command_1_pane

0xedc5,	// (0x000926ec) grid_dialer_command_2_pane

0xedc5,	// (0x000926ec) grid_dialer_keypad_pane

0x5b66,	// (0x0008948d) bg_popup_call_pane_cp06_ParamLimits

0x5b66,	// (0x0008948d) bg_popup_call_pane_cp06

0x5b66,	// (0x0008948d) dialer_ne_clear_pane_ParamLimits

0x5b66,	// (0x0008948d) dialer_ne_clear_pane

0x23af,	// (0x00085cd6) dialer_ne_pane_g1

0x4072,	// (0x00087999) dialer_ne_pane_t1_ParamLimits

0x4072,	// (0x00087999) dialer_ne_pane_t1

0x5b74,	// (0x0008949b) dialer_ne_pane_t2_ParamLimits

0x5b74,	// (0x0008949b) dialer_ne_pane_t2

0x5b9c,	// (0x000894c3) dialer_ne_pane_t3_ParamLimits

0x5b9c,	// (0x000894c3) dialer_ne_pane_t3

0x0002,

0xf718,	// (0x0009303f) dialer_ne_pane_t_ParamLimits

0xf718,	// (0x0009303f) dialer_ne_pane_t

0x5b9c,	// (0x000894c3) dialer_ne_pane_t3_copy1_ParamLimits

0x5b9c,	// (0x000894c3) dialer_ne_pane_t3_copy1

0xc369,	// (0x0008fc90) cell_dialer_keypad_pane_ParamLimits

0xc369,	// (0x0008fc90) cell_dialer_keypad_pane

0xedcf,	// (0x000926f6) cell_dialer_command_1_pane_ParamLimits

0xedcf,	// (0x000926f6) cell_dialer_command_1_pane

0xc380,	// (0x0008fca7) cell_dialer_command_2_pane_ParamLimits

0xc380,	// (0x0008fca7) cell_dialer_command_2_pane

0xedcf,	// (0x000926f6) bg_button_pane_cp02_ParamLimits

0xedcf,	// (0x000926f6) bg_button_pane_cp02

0x171f,	// (0x00085046) cell_dialer_keypad_pane_g1_ParamLimits

0x171f,	// (0x00085046) cell_dialer_keypad_pane_g1

0xedcf,	// (0x000926f6) bg_button_pane_cp03_ParamLimits

0xedcf,	// (0x000926f6) bg_button_pane_cp03

0x171f,	// (0x00085046) cell_dialer_command_1_pane_g1_ParamLimits

0x171f,	// (0x00085046) cell_dialer_command_1_pane_g1

0xedc5,	// (0x000926ec) bg_button_pane_cp04

0x23af,	// (0x00085cd6) cell_dialer_command_2_pane_g1

0xedc5,	// (0x000926ec) bg_button_pane_cp06

0x23af,	// (0x00085cd6) dialer_ne_clear_pane_g1

0x3e21,	// (0x00087748) navi_pane_g2

0x3e4f,	// (0x00087776) navi_pane_g3

0x0002,

0xf334,	// (0x00092c5b) navi_pane_g

0x3ede,	// (0x00087805) navi_pane_mv_g2

0x3f05,	// (0x0008782c) navi_pane_mv_g5

0x3f0d,	// (0x00087834) navi_pane_mv_t1

0x18f5,	// (0x0008521c) main_clock2_pane

0xedcf,	// (0x000926f6) main_clock2_list_pane_ParamLimits

0xedcf,	// (0x000926f6) main_clock2_list_pane

0x5c32,	// (0x00089559) main_clock2_pane_t1_ParamLimits

0x5c32,	// (0x00089559) main_clock2_pane_t1

0x5c6d,	// (0x00089594) main_clock2_pane_t2_ParamLimits

0x5c6d,	// (0x00089594) main_clock2_pane_t2

0x0004,

0xf724,	// (0x0009304b) main_clock2_pane_t_ParamLimits

0xf724,	// (0x0009304b) main_clock2_pane_t

0x5d0d,	// (0x00089634) popup_clock_analogue_window_cp03_ParamLimits

0x5d0d,	// (0x00089634) popup_clock_analogue_window_cp03

0x5d32,	// (0x00089659) popup_clock_digital_window_cp02_ParamLimits

0x5d32,	// (0x00089659) popup_clock_digital_window_cp02

0x5dab,	// (0x000896d2) main_clock2_list_single_pane_ParamLimits

0x5dab,	// (0x000896d2) main_clock2_list_single_pane

0x21c2,	// (0x00085ae9) list_highlight_pane_cp05

0xc3c3,	// (0x0008fcea) main_clock2_list_single_pane_t1

0x25c5,	// (0x00085eec) popup_toolbar_window_cp04_ParamLimits

0x172d,	// (0x00085054) camera2_autofocus_pane_g2_ParamLimits

0x172d,	// (0x00085054) camera2_autofocus_pane_g2

0x172d,	// (0x00085054) camera2_autofocus_pane_g3_ParamLimits

0x172d,	// (0x00085054) camera2_autofocus_pane_g3

0x172d,	// (0x00085054) camera2_autofocus_pane_g4_ParamLimits

0x172d,	// (0x00085054) camera2_autofocus_pane_g4

0x172d,	// (0x00085054) camera2_autofocus_pane_g5_ParamLimits

0x172d,	// (0x00085054) camera2_autofocus_pane_g5

0x0004,

0xf668,	// (0x00092f8f) camera2_autofocus_pane_g_ParamLimits

0xf668,	// (0x00092f8f) camera2_autofocus_pane_g

0x54b6,	// (0x00088ddd) camera2_autofocus_pane_cp_g2

0x54be,	// (0x00088de5) camera2_autofocus_pane_cp_g3

0x54c6,	// (0x00088ded) camera2_autofocus_pane_cp_g4

0x54ce,	// (0x00088df5) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ce,	// (0x00092ff5) camera2_autofocus_pane_cp_g

0xedc5,	// (0x000926ec) popup_dialer_spcha_window

0xedc5,	// (0x000926ec) bg_popup_sub_pane_cp07

0xedc5,	// (0x000926ec) list_spcha_pane

0xc3d1,	// (0x0008fcf8) list_single_spcha_pane_ParamLimits

0xc3d1,	// (0x0008fcf8) list_single_spcha_pane

0xedc5,	// (0x000926ec) list_highlight_pane_cp06

0x37f0,	// (0x00087117) list_single_spcha_pane_t1

0xb510,	// (0x0008ee37) popup_call2_audio_out_window_g4_ParamLimits

0xb510,	// (0x0008ee37) popup_call2_audio_out_window_g4

0xedc5,	// (0x000926ec) main_imed2_pane

0xba9c,	// (0x0008f3c3) popup_imed_adjust2_window

0x4e55,	// (0x0008877c) popup_imed_trans_window_ParamLimits

0x4e55,	// (0x0008877c) popup_imed_trans_window

0xbdb3,	// (0x0008f6da) popup_blid_sat_info2_window_t1

0xbdc1,	// (0x0008f6e8) popup_blid_sat_info2_window_t2

0x000a,

0xf5fd,	// (0x00092f24) popup_blid_sat_info2_window_t

0x5e5c,	// (0x00089783) aid_size_cell_colour_35

0x5e7c,	// (0x000897a3) aid_size_cell_colour_112

0x5e9c,	// (0x000897c3) aid_size_cell_effect

0x4086,	// (0x000879ad) bg_tb_trans_pane_cp02

0x36a3,	// (0x00086fca) heading_imed_pane

0x5ebc,	// (0x000897e3) listscroll_imed_pane

0xc3e3,	// (0x0008fd0a) heading_imed_pane_g1

0xc3eb,	// (0x0008fd12) heading_imed_pane_t1

0xc3f9,	// (0x0008fd20) grid_imed_colour_35_pane_ParamLimits

0xc3f9,	// (0x0008fd20) grid_imed_colour_35_pane

0x5ec8,	// (0x000897ef) grid_imed_effect_pane

0xc411,	// (0x0008fd38) list_imed_aspect_pane

0x5ede,	// (0x00089805) scroll_pane_cp027_ParamLimits

0x5ede,	// (0x00089805) scroll_pane_cp027

0x5eef,	// (0x00089816) cell_imed_effect_pane_ParamLimits

0x5eef,	// (0x00089816) cell_imed_effect_pane

0xc419,	// (0x0008fd40) cell_imed_colour_pane_ParamLimits

0xc419,	// (0x0008fd40) cell_imed_colour_pane

0xc45b,	// (0x0008fd82) cell_imed_colour_pane_g1_ParamLimits

0xc45b,	// (0x0008fd82) cell_imed_colour_pane_g1

0xc46c,	// (0x0008fd93) hgihlgiht_grid_pane_cp016_ParamLimits

0xc46c,	// (0x0008fd93) hgihlgiht_grid_pane_cp016

0x5f16,	// (0x0008983d) cell_imed_effect_pane_g1

0x5f1e,	// (0x00089845) grid_highlight_pane_cp017

0xc47d,	// (0x0008fda4) list_imed_single_pane_ParamLimits

0xc47d,	// (0x0008fda4) list_imed_single_pane

0xedc5,	// (0x000926ec) list_highlight_pane_cp07

0xc492,	// (0x0008fdb9) list_imed_aspect_pane_comp1_t1

0x4086,	// (0x000879ad) bg_tb_trans_pane_cp05

0xc4b4,	// (0x0008fddb) popup_imed_adjust2_window_g1

0xc4db,	// (0x0008fe02) popup_imed_adjust2_window_t1

0xc4f3,	// (0x0008fe1a) slider_imed_adjust_pane

0xc507,	// (0x0008fe2e) slider_imed_adjust_pane_g1

0xc517,	// (0x0008fe3e) slider_imed_adjust_pane_g2

0xc527,	// (0x0008fe4e) slider_imed_adjust_pane_g3

0xc538,	// (0x0008fe5f) slider_imed_adjust_pane_g4

0x0003,

0xf741,	// (0x00093068) slider_imed_adjust_pane_g

0x5f27,	// (0x0008984e) aid_size_cell_clipart2

0x5f33,	// (0x0008985a) grid_imed_clipart_pane

0xc549,	// (0x0008fe70) scroll_pane_cp031

0x5f3d,	// (0x00089864) cell_imed_clipart_pane_ParamLimits

0x5f3d,	// (0x00089864) cell_imed_clipart_pane

0x5f5f,	// (0x00089886) cell_imed_clipart_pane_g1

0xedc5,	// (0x000926ec) grid_highlight_pane_cp014

0x5c0e,	// (0x00089535) main_clock2_pane_g1_ParamLimits

0x5c0e,	// (0x00089535) main_clock2_pane_g1

0x5d52,	// (0x00089679) aid_call2_pane_cp10

0x5d64,	// (0x0008968b) aid_call_pane_cp10

0x3d1b,	// (0x00087642) popup_clock_analogue_window_cp10_g1

0x3d1b,	// (0x00087642) popup_clock_analogue_window_cp10_g2

0x5d76,	// (0x0008969d) popup_clock_analogue_window_cp10_g3

0x5d76,	// (0x0008969d) popup_clock_analogue_window_cp10_g4

0x3d1b,	// (0x00087642) popup_clock_analogue_window_cp10_g5

0x0004,

0xf72f,	// (0x00093056) popup_clock_analogue_window_cp10_g

0x5d8c,	// (0x000896b3) popup_clock_analogue_window_cp10_t1

0x5dbd,	// (0x000896e4) clock_digital_number_pane_cp10_ParamLimits

0x5dbd,	// (0x000896e4) clock_digital_number_pane_cp10

0x5dd5,	// (0x000896fc) clock_digital_number_pane_cp11_ParamLimits

0x5dd5,	// (0x000896fc) clock_digital_number_pane_cp11

0x5ded,	// (0x00089714) clock_digital_number_pane_cp12_ParamLimits

0x5ded,	// (0x00089714) clock_digital_number_pane_cp12

0x5e07,	// (0x0008972e) clock_digital_number_pane_cp13_ParamLimits

0x5e07,	// (0x0008972e) clock_digital_number_pane_cp13

0x5e21,	// (0x00089748) clock_digital_separator_pane_cp10_ParamLimits

0x5e21,	// (0x00089748) clock_digital_separator_pane_cp10

0x5e3b,	// (0x00089762) popup_clock_digital_window_cp02_t1_ParamLimits

0x5e3b,	// (0x00089762) popup_clock_digital_window_cp02_t1

0x169c,	// (0x00084fc3) clock_digital_number_pane_cp10_g1

0x169c,	// (0x00084fc3) clock_digital_number_pane_cp10_g2

0x0001,

0xf74a,	// (0x00093071) clock_digital_number_pane_cp10_g

0x169c,	// (0x00084fc3) clock_digital_separator_pane_cp10_g1

0x169c,	// (0x00084fc3) clock_digital_separator_pane_g2_cp10

0x3f4f,	// (0x00087876) navi_pane_vded_g4

0x3f58,	// (0x0008787f) navi_pane_vded_g5

0x3f61,	// (0x00087888) navi_pane_vded_t1

0xedc5,	// (0x000926ec) main_vded_pane

0x5f68,	// (0x0008988f) main_vded_pane_g1

0x5f72,	// (0x00089899) main_vded_pane_g2

0x5f7c,	// (0x000898a3) main_vded_pane_g3

0x0002,

0xf74f,	// (0x00093076) main_vded_pane_g

0x5f86,	// (0x000898ad) main_vded_pane_t1

0x5f94,	// (0x000898bb) main_vded_pane_t2

0x0001,

0xf756,	// (0x0009307d) main_vded_pane_t

0x5fa2,	// (0x000898c9) vded_slider_pane

0x5faa,	// (0x000898d1) vded_video_pane

0xc551,	// (0x0008fe78) vded_video_pane_g1

0x5fb2,	// (0x000898d9) vded_video_pane_g2

0x23af,	// (0x00085cd6) vded_video_pane_g3

0x0002,

0xf75b,	// (0x00093082) vded_video_pane_g

0xc55b,	// (0x0008fe82) vded_slider_pane_g1

0xbcde,	// (0x0008f605) vded_slider_pane_g2

0xc564,	// (0x0008fe8b) vded_slider_pane_g3

0xc56d,	// (0x0008fe94) vded_slider_pane_g4

0xc576,	// (0x0008fe9d) vded_slider_pane_g5

0x0004,

0xf762,	// (0x00093089) vded_slider_pane_g

0x5a72,	// (0x00089399) mup3_rocker_pane_ParamLimits

0x5a72,	// (0x00089399) mup3_rocker_pane

0x5fbb,	// (0x000898e2) mup3_control_keys_pane_g1

0x5fc3,	// (0x000898ea) mup3_control_keys_pane_g2

0x5fcb,	// (0x000898f2) mup3_control_keys_pane_g3

0x5fd3,	// (0x000898fa) mup3_control_keys_pane_g4

0x0003,

0xf76d,	// (0x00093094) mup3_control_keys_pane_g

0x0fb2,	// (0x000848d9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fb2,	// (0x000848d9) popup_toolbar2_fixed_window_cp01

0x5aa6,	// (0x000893cd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5aa6,	// (0x000893cd) popup_toolbar2_fixed_window_cp02

0xae99,	// (0x0008e7c0) popup_call2_audio_second_window_t4_ParamLimits

0xae99,	// (0x0008e7c0) popup_call2_audio_second_window_t4

0xb3d5,	// (0x0008ecfc) popup_call2_audio_first_window_t6_ParamLimits

0xb3d5,	// (0x0008ecfc) popup_call2_audio_first_window_t6

0xb613,	// (0x0008ef3a) popup_call2_audio_out_window_t6_ParamLimits

0xb613,	// (0x0008ef3a) popup_call2_audio_out_window_t6

0xedc5,	// (0x000926ec) main_vitu_pane

0xedcf,	// (0x000926f6) aid_size_cell_itu_ParamLimits

0xedcf,	// (0x000926f6) aid_size_cell_itu

0xedcf,	// (0x000926f6) bg_popup_window_pane_cp08_ParamLimits

0xedcf,	// (0x000926f6) bg_popup_window_pane_cp08

0xedcf,	// (0x000926f6) field_vitu_entry_pane_ParamLimits

0xedcf,	// (0x000926f6) field_vitu_entry_pane

0xedcf,	// (0x000926f6) grid_vitu_function_pane_ParamLimits

0xedcf,	// (0x000926f6) grid_vitu_function_pane

0xedcf,	// (0x000926f6) grid_vitu_itu_pane_ParamLimits

0xedcf,	// (0x000926f6) grid_vitu_itu_pane

0xedcf,	// (0x000926f6) cell_vitu_itu_pane_ParamLimits

0xedcf,	// (0x000926f6) cell_vitu_itu_pane

0xedcf,	// (0x000926f6) cell_vitu_function_pane_ParamLimits

0xedcf,	// (0x000926f6) cell_vitu_function_pane

0xedcf,	// (0x000926f6) bg_popup_sub_pane_cp08_ParamLimits

0xedcf,	// (0x000926f6) bg_popup_sub_pane_cp08

0x222b,	// (0x00085b52) field_vitu_entry_pane_t1_ParamLimits

0x222b,	// (0x00085b52) field_vitu_entry_pane_t1

0xc57f,	// (0x0008fea6) field_vitu_entry_pane_t2_ParamLimits

0xc57f,	// (0x0008fea6) field_vitu_entry_pane_t2

0x0001,

0xf776,	// (0x0009309d) field_vitu_entry_pane_t_ParamLimits

0xf776,	// (0x0009309d) field_vitu_entry_pane_t

0xbc05,	// (0x0008f52c) bg_button_pane_cp05_ParamLimits

0xbc05,	// (0x0008f52c) bg_button_pane_cp05

0xc59c,	// (0x0008fec3) cell_vitu_itu_pane_g1

0x405e,	// (0x00087985) cell_vitu_itu_pane_t1_ParamLimits

0x405e,	// (0x00087985) cell_vitu_itu_pane_t1

0x405e,	// (0x00087985) cell_vitu_itu_pane_t2_ParamLimits

0x405e,	// (0x00087985) cell_vitu_itu_pane_t2

0x0002,

0xf77b,	// (0x000930a2) cell_vitu_itu_pane_t_ParamLimits

0xf77b,	// (0x000930a2) cell_vitu_itu_pane_t

0xedc5,	// (0x000926ec) bg_button_pane_cp07

0x23af,	// (0x00085cd6) cell_vitu_function_pane_g1

0xa6b7,	// (0x0008dfde) main_calc_pane_g1

0x0dda,	// (0x00084701) aid_visual_content_pane

0xedc5,	// (0x000926ec) main_vradio_pane

0x171f,	// (0x00085046) main_vradio_pane_g1_ParamLimits

0x171f,	// (0x00085046) main_vradio_pane_g1

0x172d,	// (0x00085054) main_vradio_pane_g2_ParamLimits

0x172d,	// (0x00085054) main_vradio_pane_g2

0x0001,

0xf782,	// (0x000930a9) main_vradio_pane_g_ParamLimits

0xf782,	// (0x000930a9) main_vradio_pane_g

0x222b,	// (0x00085b52) main_vradio_pane_t1_ParamLimits

0x222b,	// (0x00085b52) main_vradio_pane_t1

0x222b,	// (0x00085b52) main_vradio_pane_t2_ParamLimits

0x222b,	// (0x00085b52) main_vradio_pane_t2

0x4072,	// (0x00087999) main_vradio_pane_t3_ParamLimits

0x4072,	// (0x00087999) main_vradio_pane_t3

0x0002,

0xf787,	// (0x000930ae) main_vradio_pane_t_ParamLimits

0xf787,	// (0x000930ae) main_vradio_pane_t

0xedcf,	// (0x000926f6) vradio_rocker_control_pane_ParamLimits

0xedcf,	// (0x000926f6) vradio_rocker_control_pane

0xedcf,	// (0x000926f6) vradio_station_info_pane_ParamLimits

0xedcf,	// (0x000926f6) vradio_station_info_pane

0xedcf,	// (0x000926f6) vradio_frequency_info_pane_ParamLimits

0xedcf,	// (0x000926f6) vradio_frequency_info_pane

0x23af,	// (0x00085cd6) vradio_station_info_pane_g1

0x405e,	// (0x00087985) vradio_station_info_pane_t1_ParamLimits

0x405e,	// (0x00087985) vradio_station_info_pane_t1

0x4072,	// (0x00087999) vradio_station_info_pane_t2_ParamLimits

0x4072,	// (0x00087999) vradio_station_info_pane_t2

0x0001,

0xf78e,	// (0x000930b5) vradio_station_info_pane_t_ParamLimits

0xf78e,	// (0x000930b5) vradio_station_info_pane_t

0xedc5,	// (0x000926ec) vradio_tuning_pane

0x5fe3,	// (0x0008990a) vradio_rocker_control_pane_g1

0xc5b8,	// (0x0008fedf) vradio_rocker_control_pane_g2

0x5fed,	// (0x00089914) vradio_rocker_control_pane_g3

0x5ff7,	// (0x0008991e) vradio_rocker_control_pane_g4

0x6001,	// (0x00089928) vradio_rocker_control_pane_g5

0x0004,

0xf793,	// (0x000930ba) vradio_rocker_control_pane_g

0x23af,	// (0x00085cd6) vradio_frequency_info_pane_g1

0x222b,	// (0x00085b52) vradio_frequency_info_pane_t1_ParamLimits

0x222b,	// (0x00085b52) vradio_frequency_info_pane_t1

0x600b,	// (0x00089932) vradio_tuning_pane_g1

0x6016,	// (0x0008993d) vradio_tuning_pane_t1

0xa676,	// (0x0008df9d) area_side_right_pane_ParamLimits

0xa676,	// (0x0008df9d) area_side_right_pane

0xba3d,	// (0x0008f364) status_small_pane_g1

0xba45,	// (0x0008f36c) status_small_pane_g2

0xba4e,	// (0x0008f375) status_small_pane_g3

0xba57,	// (0x0008f37e) status_small_pane_g4

0x0003,

0xf55f,	// (0x00092e86) status_small_pane_g

0xba60,	// (0x0008f387) status_small_pane_t1

0xedc5,	// (0x000926ec) main_video3_pane

0xc5c0,	// (0x0008fee7) cams_zoom_vslider_pane

0xc5c8,	// (0x0008feef) image3_wide_pane_ParamLimits

0xc5c8,	// (0x0008feef) image3_wide_pane

0xc5e2,	// (0x0008ff09) image3_wide_small_pane

0xc5ee,	// (0x0008ff15) main_video3_pane_g1_ParamLimits

0xc5ee,	// (0x0008ff15) main_video3_pane_g1

0xc60a,	// (0x0008ff31) main_video3_pane_g2_ParamLimits

0xc60a,	// (0x0008ff31) main_video3_pane_g2

0x0001,

0xf79e,	// (0x000930c5) main_video3_pane_g_ParamLimits

0xf79e,	// (0x000930c5) main_video3_pane_g

0xc626,	// (0x0008ff4d) main_video3_pane_t1_ParamLimits

0xc626,	// (0x0008ff4d) main_video3_pane_t1

0xc651,	// (0x0008ff78) main_video3_pane_t2_ParamLimits

0xc651,	// (0x0008ff78) main_video3_pane_t2

0xc67c,	// (0x0008ffa3) main_video3_pane_t3_ParamLimits

0xc67c,	// (0x0008ffa3) main_video3_pane_t3

0x0002,

0xf7a3,	// (0x000930ca) main_video3_pane_t_ParamLimits

0xf7a3,	// (0x000930ca) main_video3_pane_t

0xc6a9,	// (0x0008ffd0) cams_zoom_vslider_pane_g1

0xc6b2,	// (0x0008ffd9) cams_zoom_vslider_pane_g2

0x0001,

0xf7aa,	// (0x000930d1) cams_zoom_vslider_pane_g

0xc6ba,	// (0x0008ffe1) small_slider_vertical_pane

0x23af,	// (0x00085cd6) small_slider_vertical_pane_g1

0x23af,	// (0x00085cd6) small_slider_vertical_pane_g2

0xc6c2,	// (0x0008ffe9) small_slider_vertical_pane_g3

0x0002,

0xf7af,	// (0x000930d6) small_slider_vertical_pane_g

0xedc5,	// (0x000926ec) main_hwr_training_pane

0xc6cb,	// (0x0008fff2) hwr_training_instruct_pane_ParamLimits

0xc6cb,	// (0x0008fff2) hwr_training_instruct_pane

0x6025,	// (0x0008994c) hwr_training_navi_pane_ParamLimits

0x6025,	// (0x0008994c) hwr_training_navi_pane

0x6044,	// (0x0008996b) hwr_training_write_pane_ParamLimits

0x6044,	// (0x0008996b) hwr_training_write_pane

0xedc5,	// (0x000926ec) bg_frame_shadow_pane

0xc702,	// (0x00090029) hwr_training_write_pane_g1

0xc70a,	// (0x00090031) hwr_training_write_pane_g2

0xc712,	// (0x00090039) hwr_training_write_pane_g3

0xc71a,	// (0x00090041) hwr_training_write_pane_g4

0xc722,	// (0x00090049) hwr_training_write_pane_g5

0xc72a,	// (0x00090051) hwr_training_write_pane_g6

0xc732,	// (0x00090059) hwr_training_write_pane_g7

0x0006,

0xf7b6,	// (0x000930dd) hwr_training_write_pane_g

0xc73a,	// (0x00090061) hwr_training_navi_pane_g1_ParamLimits

0xc73a,	// (0x00090061) hwr_training_navi_pane_g1

0xc74c,	// (0x00090073) hwr_training_navi_pane_g2_ParamLimits

0xc74c,	// (0x00090073) hwr_training_navi_pane_g2

0xc75e,	// (0x00090085) hwr_training_navi_pane_g3_ParamLimits

0xc75e,	// (0x00090085) hwr_training_navi_pane_g3

0xc76e,	// (0x00090095) hwr_training_navi_pane_g4_ParamLimits

0xc76e,	// (0x00090095) hwr_training_navi_pane_g4

0x0004,

0xf7c5,	// (0x000930ec) hwr_training_navi_pane_g_ParamLimits

0xf7c5,	// (0x000930ec) hwr_training_navi_pane_g

0xc77b,	// (0x000900a2) hwr_training_navi_pane_t1

0x608e,	// (0x000899b5) list_single_hwr_training_instruct_pane_ParamLimits

0x608e,	// (0x000899b5) list_single_hwr_training_instruct_pane

0xc789,	// (0x000900b0) list_single_hwr_training_instruct_pane_t1

0xbeb4,	// (0x0008f7db) bg_frame_shadow_pane_g1

0xc798,	// (0x000900bf) bg_frame_shadow_pane_g2

0xc7a0,	// (0x000900c7) bg_frame_shadow_pane_g3

0xc7a8,	// (0x000900cf) bg_frame_shadow_pane_g4

0xc7b0,	// (0x000900d7) bg_frame_shadow_pane_g5

0xc7b8,	// (0x000900df) bg_frame_shadow_pane_g6

0xc7c0,	// (0x000900e7) bg_frame_shadow_pane_g7

0x1b29,	// (0x00085450) bg_frame_shadow_pane_g8

0x0007,

0xf7d0,	// (0x000930f7) bg_frame_shadow_pane_g

0xedc5,	// (0x000926ec) main_video_tele_dialer_pane

0x60a4,	// (0x000899cb) aid_size_cell_video_keypad_ParamLimits

0x60a4,	// (0x000899cb) aid_size_cell_video_keypad

0x60be,	// (0x000899e5) grid_video_dialer_keypad_pane_ParamLimits

0x60be,	// (0x000899e5) grid_video_dialer_keypad_pane

0x610c,	// (0x00089a33) video_down_pane_cp_ParamLimits

0x610c,	// (0x00089a33) video_down_pane_cp

0x613e,	// (0x00089a65) cell_video_dialer_keypad_pane_ParamLimits

0x613e,	// (0x00089a65) cell_video_dialer_keypad_pane

0xc7c8,	// (0x000900ef) bg_button_pane_cp08_ParamLimits

0xc7c8,	// (0x000900ef) bg_button_pane_cp08

0x6160,	// (0x00089a87) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6160,	// (0x00089a87) cell_video_dialer_keypad_pane_g1

0x5a5c,	// (0x00089383) mup3_rocker2_pane_ParamLimits

0x5a5c,	// (0x00089383) mup3_rocker2_pane

0x23af,	// (0x00085cd6) mup3_rocker2_pane_g1

0x4d44,	// (0x0008866b) main_dialer2_pane

0xedc5,	// (0x000926ec) main_mp4_pane

0xc7f2,	// (0x00090119) main_mp4_pane_g1_ParamLimits

0xc7f2,	// (0x00090119) main_mp4_pane_g1

0xc7f2,	// (0x00090119) main_mp4_pane_g2_ParamLimits

0xc7f2,	// (0x00090119) main_mp4_pane_g2

0x619a,	// (0x00089ac1) main_mp4_pane_g3_ParamLimits

0x619a,	// (0x00089ac1) main_mp4_pane_g3

0xc800,	// (0x00090127) main_mp4_pane_g4_ParamLimits

0xc800,	// (0x00090127) main_mp4_pane_g4

0xc82e,	// (0x00090155) main_mp4_pane_g5_ParamLimits

0xc82e,	// (0x00090155) main_mp4_pane_g5

0x0007,

0xf7f0,	// (0x00093117) main_mp4_pane_g_ParamLimits

0xf7f0,	// (0x00093117) main_mp4_pane_g

0xc8a2,	// (0x000901c9) main_mp4_pane_t1_ParamLimits

0xc8a2,	// (0x000901c9) main_mp4_pane_t1

0xc8fe,	// (0x00090225) main_mp4_pane_t2_ParamLimits

0xc8fe,	// (0x00090225) main_mp4_pane_t2

0xc950,	// (0x00090277) main_mp4_pane_t3_ParamLimits

0xc950,	// (0x00090277) main_mp4_pane_t3

0xc976,	// (0x0009029d) main_mp4_pane_t4_ParamLimits

0xc976,	// (0x0009029d) main_mp4_pane_t4

0x0003,

0xf801,	// (0x00093128) main_mp4_pane_t_ParamLimits

0xf801,	// (0x00093128) main_mp4_pane_t

0xc9ba,	// (0x000902e1) mp4_progress_pane_ParamLimits

0xc9ba,	// (0x000902e1) mp4_progress_pane

0xca04,	// (0x0009032b) mp4_rocker_pane_ParamLimits

0xca04,	// (0x0009032b) mp4_rocker_pane

0xca2c,	// (0x00090353) mp4_progress_pane_t1

0xca45,	// (0x0009036c) mp4_progress_pane_t2

0x0001,

0xf80a,	// (0x00093131) mp4_progress_pane_t

0xca5e,	// (0x00090385) mup_progress_pane_cp04

0x23af,	// (0x00085cd6) mp4_rocker_pane_g1

0x61d6,	// (0x00089afd) aid_cell_size_keypad2_ParamLimits

0x61d6,	// (0x00089afd) aid_cell_size_keypad2

0x61ec,	// (0x00089b13) dialer2_ne_pane_ParamLimits

0x61ec,	// (0x00089b13) dialer2_ne_pane

0x6206,	// (0x00089b2d) grid_dialer2_keypad_pane_ParamLimits

0x6206,	// (0x00089b2d) grid_dialer2_keypad_pane

0xbc05,	// (0x0008f52c) bg_popup_call_pane_cp07_ParamLimits

0xbc05,	// (0x0008f52c) bg_popup_call_pane_cp07

0x6222,	// (0x00089b49) dialer2_ne_pane_t1_ParamLimits

0x6222,	// (0x00089b49) dialer2_ne_pane_t1

0x625e,	// (0x00089b85) cell_dialer2_keypad_pane_ParamLimits

0x625e,	// (0x00089b85) cell_dialer2_keypad_pane

0xca83,	// (0x000903aa) bg_button_pane_pane_cp04_ParamLimits

0xca83,	// (0x000903aa) bg_button_pane_pane_cp04

0x6280,	// (0x00089ba7) cell_dialer2_keypad_pane_g1_ParamLimits

0x6280,	// (0x00089ba7) cell_dialer2_keypad_pane_g1

0x2487,	// (0x00085dae) aid_placing_vt_set_content_ParamLimits

0x2487,	// (0x00085dae) aid_placing_vt_set_content

0x24af,	// (0x00085dd6) aid_placing_vt_set_title_ParamLimits

0x24af,	// (0x00085dd6) aid_placing_vt_set_title

0xedc5,	// (0x000926ec) main_image3_pane

0x6346,	// (0x00089c6d) area_side_right_pane_cp01_ParamLimits

0x6346,	// (0x00089c6d) area_side_right_pane_cp01

0xc7f2,	// (0x00090119) main_image3_pane_g1_ParamLimits

0xc7f2,	// (0x00090119) main_image3_pane_g1

0x635d,	// (0x00089c84) main_image3_pane_g2_ParamLimits

0x635d,	// (0x00089c84) main_image3_pane_g2

0x6385,	// (0x00089cac) main_image3_pane_g3_ParamLimits

0x6385,	// (0x00089cac) main_image3_pane_g3

0x63af,	// (0x00089cd6) main_image3_pane_g4_ParamLimits

0x63af,	// (0x00089cd6) main_image3_pane_g4

0x0003,

0xf819,	// (0x00093140) main_image3_pane_g_ParamLimits

0xf819,	// (0x00093140) main_image3_pane_g

0x63d9,	// (0x00089d00) main_image3_pane_t1_ParamLimits

0x63d9,	// (0x00089d00) main_image3_pane_t1

0x6431,	// (0x00089d58) main_image3_pane_t2_ParamLimits

0x6431,	// (0x00089d58) main_image3_pane_t2

0x6483,	// (0x00089daa) main_image3_pane_t3_ParamLimits

0x6483,	// (0x00089daa) main_image3_pane_t3

0x0003,

0xf822,	// (0x00093149) main_image3_pane_t_ParamLimits

0xf822,	// (0x00093149) main_image3_pane_t

0xedcf,	// (0x000926f6) grid_sctrl_middle_pane_cp01_ParamLimits

0xedcf,	// (0x000926f6) grid_sctrl_middle_pane_cp01

0x650b,	// (0x00089e32) cell_sctrl_middle_pane_cp01_ParamLimits

0x650b,	// (0x00089e32) cell_sctrl_middle_pane_cp01

0x6528,	// (0x00089e4f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6528,	// (0x00089e4f) cell_sctrl_middle_pane_cp01_g1

0xedc5,	// (0x000926ec) main_call4_pane

0x653e,	// (0x00089e65) aid_size_button_call4_ParamLimits

0x653e,	// (0x00089e65) aid_size_button_call4

0x6571,	// (0x00089e98) call4_windows_pane_ParamLimits

0x6571,	// (0x00089e98) call4_windows_pane

0x6590,	// (0x00089eb7) grid_call4_button_pane_ParamLimits

0x6590,	// (0x00089eb7) grid_call4_button_pane

0x65c3,	// (0x00089eea) call4_windows_conf_pane

0x65d8,	// (0x00089eff) popup_call4_audio_first_window_ParamLimits

0x65d8,	// (0x00089eff) popup_call4_audio_first_window

0x6628,	// (0x00089f4f) popup_call4_audio_second_window_ParamLimits

0x6628,	// (0x00089f4f) popup_call4_audio_second_window

0x663f,	// (0x00089f66) popup_call4_audio_wait_window_ParamLimits

0x663f,	// (0x00089f66) popup_call4_audio_wait_window

0x664d,	// (0x00089f74) cell_call4_button_pane_ParamLimits

0x664d,	// (0x00089f74) cell_call4_button_pane

0x6672,	// (0x00089f99) bg_button_pane_cp09_ParamLimits

0x6672,	// (0x00089f99) bg_button_pane_cp09

0x667e,	// (0x00089fa5) cell_call4_button_pane_g1_ParamLimits

0x667e,	// (0x00089fa5) cell_call4_button_pane_g1

0x66a4,	// (0x00089fcb) cell_call4_button_pane_t1_ParamLimits

0x66a4,	// (0x00089fcb) cell_call4_button_pane_t1

0xcafb,	// (0x00090422) popup_call4_audio_conf_window_ParamLimits

0xcafb,	// (0x00090422) popup_call4_audio_conf_window

0x5abc,	// (0x000893e3) mup3_progress_pane_t1_ParamLimits

0x5adb,	// (0x00089402) mup3_progress_pane_t2_ParamLimits

0xc292,	// (0x0008fbb9) mup3_progress_pane_t3_ParamLimits

0xf6f7,	// (0x0009301e) mup3_progress_pane_t_ParamLimits

0xc2af,	// (0x0008fbd6) mup_progress_pane_cp03_ParamLimits

0x5fdb,	// (0x00089902) mup3_control_keys_pane_g4_copy1

0xc9e8,	// (0x0009030f) mp4_rocker2_pane_ParamLimits

0xc9e8,	// (0x0009030f) mp4_rocker2_pane

0xcb0f,	// (0x00090436) mp4_rocker2_pane_g1

0xcb17,	// (0x0009043e) mp4_rocker2_pane_g2

0xcb1f,	// (0x00090446) mp4_rocker2_pane_g3

0xcb27,	// (0x0009044e) mp4_rocker2_pane_g4

0xcb2f,	// (0x00090456) mp4_rocker2_pane_g5

0x0004,

0xf82b,	// (0x00093152) mp4_rocker2_pane_g

0xedc5,	// (0x000926ec) main_camera4_pane

0xedc5,	// (0x000926ec) main_video4_pane

0x60da,	// (0x00089a01) main_video_tele_dialer_pane_t1_ParamLimits

0x60da,	// (0x00089a01) main_video_tele_dialer_pane_t1

0x60f3,	// (0x00089a1a) main_video_tele_dialer_pane_t2_ParamLimits

0x60f3,	// (0x00089a1a) main_video_tele_dialer_pane_t2

0x0001,

0xf7e1,	// (0x00093108) main_video_tele_dialer_pane_t_ParamLimits

0xf7e1,	// (0x00093108) main_video_tele_dialer_pane_t

0x66e6,	// (0x0008a00d) cam4_autofocus_pane_ParamLimits

0x66e6,	// (0x0008a00d) cam4_autofocus_pane

0x66fc,	// (0x0008a023) cam4_image_uncrop_pane_ParamLimits

0x66fc,	// (0x0008a023) cam4_image_uncrop_pane

0x6716,	// (0x0008a03d) cam4_indicators_pane_ParamLimits

0x6716,	// (0x0008a03d) cam4_indicators_pane

0x6741,	// (0x0008a068) main_camera4_pane_g1_ParamLimits

0x6741,	// (0x0008a068) main_camera4_pane_g1

0x6753,	// (0x0008a07a) main_camera4_pane_g2_ParamLimits

0x6753,	// (0x0008a07a) main_camera4_pane_g2

0x6766,	// (0x0008a08d) main_camera4_pane_g3_ParamLimits

0x6766,	// (0x0008a08d) main_camera4_pane_g3

0x6779,	// (0x0008a0a0) main_camera4_pane_g4_ParamLimits

0x6779,	// (0x0008a0a0) main_camera4_pane_g4

0x678c,	// (0x0008a0b3) main_camera4_pane_g5_ParamLimits

0x678c,	// (0x0008a0b3) main_camera4_pane_g5

0x0005,

0xf836,	// (0x0009315d) main_camera4_pane_g_ParamLimits

0xf836,	// (0x0009315d) main_camera4_pane_g

0x67b0,	// (0x0008a0d7) main_camera4_pane_t1_ParamLimits

0x67b0,	// (0x0008a0d7) main_camera4_pane_t1

0x171f,	// (0x00085046) bg_tb_trans_pane_cp06

0xcb6d,	// (0x00090494) cam4_indicators_pane_g1

0xcb7e,	// (0x000904a5) cam4_indicators_pane_g2

0x0002,

0xf851,	// (0x00093178) cam4_indicators_pane_g

0xcb96,	// (0x000904bd) cam4_indicators_pane_t1

0x6814,	// (0x0008a13b) main_video4_pane_g1_ParamLimits

0x6814,	// (0x0008a13b) main_video4_pane_g1

0x6823,	// (0x0008a14a) main_video4_pane_g2_ParamLimits

0x6823,	// (0x0008a14a) main_video4_pane_g2

0x6832,	// (0x0008a159) main_video4_pane_g3_ParamLimits

0x6832,	// (0x0008a159) main_video4_pane_g3

0x6841,	// (0x0008a168) main_video4_pane_g4_ParamLimits

0x6841,	// (0x0008a168) main_video4_pane_g4

0x0004,

0xf858,	// (0x0009317f) main_video4_pane_g_ParamLimits

0xf858,	// (0x0009317f) main_video4_pane_g

0x685f,	// (0x0008a186) vid4_indicators_pane_ParamLimits

0x685f,	// (0x0008a186) vid4_indicators_pane

0x688d,	// (0x0008a1b4) video4_image_uncrop_cif_pane_ParamLimits

0x688d,	// (0x0008a1b4) video4_image_uncrop_cif_pane

0x68a7,	// (0x0008a1ce) video4_image_uncrop_nhd_pane_ParamLimits

0x68a7,	// (0x0008a1ce) video4_image_uncrop_nhd_pane

0x66fc,	// (0x0008a023) video4_image_uncrop_vga_pane_ParamLimits

0x66fc,	// (0x0008a023) video4_image_uncrop_vga_pane

0xedcf,	// (0x000926f6) bg_tb_trans_pane_cp07

0xcbc0,	// (0x000904e7) vid4_indicators_pane_g1

0xcbd4,	// (0x000904fb) vid4_indicators_pane_g2

0xcbe8,	// (0x0009050f) vid4_indicators_pane_g3

0x0004,

0xf863,	// (0x0009318a) vid4_indicators_pane_g

0xcc15,	// (0x0009053c) vid4_indicators_pane_t1

0x68bb,	// (0x0008a1e2) cam4_autofocus_pane_g1

0x68c3,	// (0x0008a1ea) cam4_autofocus_pane_g2

0x68cb,	// (0x0008a1f2) cam4_autofocus_pane_g3

0x0002,

0xf86e,	// (0x00093195) cam4_autofocus_pane_g

0x68d3,	// (0x0008a1fa) cam4_autofocus_pane_g3_copy1

0x6122,	// (0x00089a49) video_down_pane_cp_t1

0x6130,	// (0x00089a57) video_down_pane_cp_t2

0x0001,

0xf7e6,	// (0x0009310d) video_down_pane_cp_t

0xedcf,	// (0x000926f6) popup_vitu2_window_ParamLimits

0xedcf,	// (0x000926f6) popup_vitu2_window

0x68db,	// (0x0008a202) aid_size_cell2_itu2_ParamLimits

0x68db,	// (0x0008a202) aid_size_cell2_itu2

0x6901,	// (0x0008a228) aid_size_cell_itu2_ParamLimits

0x6901,	// (0x0008a228) aid_size_cell_itu2

0x5b66,	// (0x0008948d) bg_popup_window_pane_cp09_ParamLimits

0x5b66,	// (0x0008948d) bg_popup_window_pane_cp09

0x695d,	// (0x0008a284) field_vitu2_entry_pane_ParamLimits

0x695d,	// (0x0008a284) field_vitu2_entry_pane

0x6983,	// (0x0008a2aa) grid_vitu2_function_pane_ParamLimits

0x6983,	// (0x0008a2aa) grid_vitu2_function_pane

0x69d4,	// (0x0008a2fb) grid_vitu2_itu_pane_ParamLimits

0x69d4,	// (0x0008a2fb) grid_vitu2_itu_pane

0x6a6a,	// (0x0008a391) cell_vitu2_itu_pane_ParamLimits

0x6a6a,	// (0x0008a391) cell_vitu2_itu_pane

0x6a96,	// (0x0008a3bd) cell_vitu2_function_pane_ParamLimits

0x6a96,	// (0x0008a3bd) cell_vitu2_function_pane

0xcc2c,	// (0x00090553) bg_popup_call_pane_cp08_ParamLimits

0xcc2c,	// (0x00090553) bg_popup_call_pane_cp08

0xcc43,	// (0x0009056a) field_vitu2_entry_pane_g1

0xcc4f,	// (0x00090576) field_vitu2_entry_pane_g2

0x0002,

0xf875,	// (0x0009319c) field_vitu2_entry_pane_g

0x061c,	// (0x00083f43) field_vitu2_entry_pane_t1_ParamLimits

0x061c,	// (0x00083f43) field_vitu2_entry_pane_t1

0xcc5b,	// (0x00090582) field_vitu2_entry_pane_t2_ParamLimits

0xcc5b,	// (0x00090582) field_vitu2_entry_pane_t2

0x0001,

0xf87c,	// (0x000931a3) field_vitu2_entry_pane_t_ParamLimits

0xf87c,	// (0x000931a3) field_vitu2_entry_pane_t

0x6ad5,	// (0x0008a3fc) bg_button_pane_cp010_ParamLimits

0x6ad5,	// (0x0008a3fc) bg_button_pane_cp010

0x6ae3,	// (0x0008a40a) cell_vitu2_itu_pane_g1

0x6b09,	// (0x0008a430) cell_vitu2_itu_pane_t1_ParamLimits

0x6b09,	// (0x0008a430) cell_vitu2_itu_pane_t1

0x064c,	// (0x00083f73) cell_vitu2_itu_pane_t2_ParamLimits

0x064c,	// (0x00083f73) cell_vitu2_itu_pane_t2

0x0002,

0xf886,	// (0x000931ad) cell_vitu2_itu_pane_t_ParamLimits

0xf886,	// (0x000931ad) cell_vitu2_itu_pane_t

0xedcf,	// (0x000926f6) bg_button_pane_cp011

0x6b67,	// (0x0008a48e) cell_vitu2_function_pane_g1

0xedc5,	// (0x000926ec) main_myfav_hc_pane

0x64d3,	// (0x00089dfa) popup_image3_note_pane_ParamLimits

0x64d3,	// (0x00089dfa) popup_image3_note_pane

0x64ef,	// (0x00089e16) popup_image3_tool_bar_pane_ParamLimits

0x64ef,	// (0x00089e16) popup_image3_tool_bar_pane

0x06da,	// (0x00084001) cell_vitu2_itu_pane_t3_ParamLimits

0x06da,	// (0x00084001) cell_vitu2_itu_pane_t3

0xedc5,	// (0x000926ec) bg_popup_trans_pane

0xcc80,	// (0x000905a7) grid_image3_tool_bar_pane

0xcc8a,	// (0x000905b1) bg_popup_trans_pane_g1

0x2a76,	// (0x0008639d) bg_popup_trans_pane_g2

0xcc92,	// (0x000905b9) bg_popup_trans_pane_g3

0xcc9a,	// (0x000905c1) bg_popup_trans_pane_g4

0xcca2,	// (0x000905c9) bg_popup_trans_pane_g5

0xccaa,	// (0x000905d1) bg_popup_trans_pane_g6

0xccb2,	// (0x000905d9) bg_popup_trans_pane_g7

0xccba,	// (0x000905e1) bg_popup_trans_pane_g8

0x2a56,	// (0x0008637d) bg_popup_trans_pane_g9

0x0008,

0xf88d,	// (0x000931b4) bg_popup_trans_pane_g

0xccc2,	// (0x000905e9) cell_image3_tool_bar_pane_ParamLimits

0xccc2,	// (0x000905e9) cell_image3_tool_bar_pane

0x23af,	// (0x00085cd6) cell_image3_tool_bar_pane_g1

0xedc5,	// (0x000926ec) bg_popup_trans_pane_cp1

0xccd6,	// (0x000905fd) popup_image3_note_pane_t1

0xcce4,	// (0x0009060b) popup_image3_note_pane_t2

0xccf2,	// (0x00090619) popup_image3_note_pane_t3

0x0002,

0xf8a0,	// (0x000931c7) popup_image3_note_pane_t

0xcd00,	// (0x00090627) popup_image3_note_pane_t3_copy1

0x6b7a,	// (0x0008a4a1) bg_myfav_hc_instruction_pane_ParamLimits

0x6b7a,	// (0x0008a4a1) bg_myfav_hc_instruction_pane

0x6b8e,	// (0x0008a4b5) cell_myfav_contact_pane_ParamLimits

0x6b8e,	// (0x0008a4b5) cell_myfav_contact_pane

0x6bac,	// (0x0008a4d3) cell_myfav_contact_pane_cp1_ParamLimits

0x6bac,	// (0x0008a4d3) cell_myfav_contact_pane_cp1

0x6bc4,	// (0x0008a4eb) cell_myfav_contact_pane_cp2_ParamLimits

0x6bc4,	// (0x0008a4eb) cell_myfav_contact_pane_cp2

0x6bdc,	// (0x0008a503) cell_myfav_contact_pane_cp3_ParamLimits

0x6bdc,	// (0x0008a503) cell_myfav_contact_pane_cp3

0x6bf3,	// (0x0008a51a) cell_myfav_contact_pane_cp4_ParamLimits

0x6bf3,	// (0x0008a51a) cell_myfav_contact_pane_cp4

0x6c0b,	// (0x0008a532) cell_myfav_contact_pane_cp5_ParamLimits

0x6c0b,	// (0x0008a532) cell_myfav_contact_pane_cp5

0x6c1f,	// (0x0008a546) cell_myfav_contact_pane_cp6_ParamLimits

0x6c1f,	// (0x0008a546) cell_myfav_contact_pane_cp6

0x6c35,	// (0x0008a55c) cell_myfav_contact_pane_cp7_ParamLimits

0x6c35,	// (0x0008a55c) cell_myfav_contact_pane_cp7

0xcd0e,	// (0x00090635) listscroll_gen_pane_cp05

0x6c4f,	// (0x0008a576) main_myfav_hc_pane_g1_ParamLimits

0x6c4f,	// (0x0008a576) main_myfav_hc_pane_g1

0x6c69,	// (0x0008a590) main_myfav_hc_pane_g2_ParamLimits

0x6c69,	// (0x0008a590) main_myfav_hc_pane_g2

0x0002,

0xf8a7,	// (0x000931ce) main_myfav_hc_pane_g_ParamLimits

0xf8a7,	// (0x000931ce) main_myfav_hc_pane_g

0x6c9b,	// (0x0008a5c2) main_myfav_hc_pane_t1_ParamLimits

0x6c9b,	// (0x0008a5c2) main_myfav_hc_pane_t1

0xcd17,	// (0x0009063e) main_myfav_hc_pane_t2_ParamLimits

0xcd17,	// (0x0009063e) main_myfav_hc_pane_t2

0xcd29,	// (0x00090650) main_myfav_hc_pane_t3_ParamLimits

0xcd29,	// (0x00090650) main_myfav_hc_pane_t3

0x6cb2,	// (0x0008a5d9) main_myfav_hc_pane_t4_ParamLimits

0x6cb2,	// (0x0008a5d9) main_myfav_hc_pane_t4

0x0004,

0xf8ae,	// (0x000931d5) main_myfav_hc_pane_t_ParamLimits

0xf8ae,	// (0x000931d5) main_myfav_hc_pane_t

0x23af,	// (0x00085cd6) bg_myfav_hc_instruction_pane_g1

0xcd3b,	// (0x00090662) cell_myfav_contact_pane_g1_ParamLimits

0xcd3b,	// (0x00090662) cell_myfav_contact_pane_g1

0xcd3b,	// (0x00090662) cell_myfav_contact_pane_g2_ParamLimits

0xcd3b,	// (0x00090662) cell_myfav_contact_pane_g2

0xcd47,	// (0x0009066e) cell_myfav_contact_pane_g3_ParamLimits

0xcd47,	// (0x0009066e) cell_myfav_contact_pane_g3

0x172d,	// (0x00085054) cell_myfav_contact_pane_g4_ParamLimits

0x172d,	// (0x00085054) cell_myfav_contact_pane_g4

0xcd54,	// (0x0009067b) cell_myfav_contact_pane_g5_ParamLimits

0xcd54,	// (0x0009067b) cell_myfav_contact_pane_g5

0x0004,

0xf8b9,	// (0x000931e0) cell_myfav_contact_pane_g_ParamLimits

0xf8b9,	// (0x000931e0) cell_myfav_contact_pane_g

0x6c83,	// (0x0008a5aa) main_myfav_hc_pane_g3_ParamLimits

0x6c83,	// (0x0008a5aa) main_myfav_hc_pane_g3

0x0f15,	// (0x0008483c) popup_adpt_find_window

0x6cda,	// (0x0008a601) afind_page_pane_ParamLimits

0x6cda,	// (0x0008a601) afind_page_pane

0x6cf0,	// (0x0008a617) aid_size_cell_afind_ParamLimits

0x6cf0,	// (0x0008a617) aid_size_cell_afind

0x6d0e,	// (0x0008a635) bg_popup_sub_pane_cp09_ParamLimits

0x6d0e,	// (0x0008a635) bg_popup_sub_pane_cp09

0x6d20,	// (0x0008a647) find_pane_cp01_ParamLimits

0x6d20,	// (0x0008a647) find_pane_cp01

0xcd60,	// (0x00090687) grid_afind_control_pane_ParamLimits

0xcd60,	// (0x00090687) grid_afind_control_pane

0x6d34,	// (0x0008a65b) grid_afind_pane_ParamLimits

0x6d34,	// (0x0008a65b) grid_afind_pane

0x6d56,	// (0x0008a67d) cell_afind_pane_ParamLimits

0x6d56,	// (0x0008a67d) cell_afind_pane

0x23af,	// (0x00085cd6) afind_page_pane_g1

0x6dbd,	// (0x0008a6e4) afind_page_pane_g2

0x6dc5,	// (0x0008a6ec) afind_page_pane_g3

0x0002,

0xf8c4,	// (0x000931eb) afind_page_pane_g

0x6dcd,	// (0x0008a6f4) afind_page_pane_t1

0xcd86,	// (0x000906ad) cell_afind_grid_control_pane_ParamLimits

0xcd86,	// (0x000906ad) cell_afind_grid_control_pane

0xca83,	// (0x000903aa) bg_button_pane_cp69_ParamLimits

0xca83,	// (0x000903aa) bg_button_pane_cp69

0x6ddb,	// (0x0008a702) cell_afind_pane_g1_ParamLimits

0x6ddb,	// (0x0008a702) cell_afind_pane_g1

0x6de8,	// (0x0008a70f) cell_afind_pane_t1_ParamLimits

0x6de8,	// (0x0008a70f) cell_afind_pane_t1

0x241a,	// (0x00085d41) bg_button_pane_cp72

0xcd95,	// (0x000906bc) cell_afind_grid_control_pane_g1

0x47c2,	// (0x000880e9) aid_image_placing_area_ParamLimits

0x47c2,	// (0x000880e9) aid_image_placing_area

0x171f,	// (0x00085046) field_vitu_entry_pane_g1_ParamLimits

0x171f,	// (0x00085046) field_vitu_entry_pane_g1

0x171f,	// (0x00085046) field_vitu_entry_pane_g2_ParamLimits

0x171f,	// (0x00085046) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x00092ae8) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x00092ae8) field_vitu_entry_pane_g

0xc59c,	// (0x0008fec3) cell_vitu_itu_pane_g1_ParamLimits

0xc57f,	// (0x0008fea6) cell_vitu_itu_pane_t3_ParamLimits

0xc57f,	// (0x0008fea6) cell_vitu_itu_pane_t3

0xca2c,	// (0x00090353) mp4_progress_pane_t1_ParamLimits

0xca45,	// (0x0009036c) mp4_progress_pane_t2_ParamLimits

0xf80a,	// (0x00093131) mp4_progress_pane_t_ParamLimits

0xca5e,	// (0x00090385) mup_progress_pane_cp04_ParamLimits

0x6cc6,	// (0x0008a5ed) main_myfav_hc_pane_t5_ParamLimits

0x6cc6,	// (0x0008a5ed) main_myfav_hc_pane_t5

0xa666,	// (0x0008df8d) aid_zoom_text_primary

0x0f15,	// (0x0008483c) popup_adpt_find_window_ParamLimits

0xedcf,	// (0x000926f6) main_cam_set_pane

0x672d,	// (0x0008a054) cam4_zoom_pane_ParamLimits

0x672d,	// (0x0008a054) cam4_zoom_pane

0x6dfa,	// (0x0008a721) main_cam_set_pane_g1_ParamLimits

0x6dfa,	// (0x0008a721) main_cam_set_pane_g1

0x6e08,	// (0x0008a72f) main_cam_set_pane_g2_ParamLimits

0x6e08,	// (0x0008a72f) main_cam_set_pane_g2

0x0001,

0xf8cb,	// (0x000931f2) main_cam_set_pane_g_ParamLimits

0xf8cb,	// (0x000931f2) main_cam_set_pane_g

0x6e29,	// (0x0008a750) main_cam_set_pane_t1_ParamLimits

0x6e29,	// (0x0008a750) main_cam_set_pane_t1

0x6e44,	// (0x0008a76b) main_cset_listscroll_pane_ParamLimits

0x6e44,	// (0x0008a76b) main_cset_listscroll_pane

0x6e6a,	// (0x0008a791) main_cset_slider_pane_ParamLimits

0x6e6a,	// (0x0008a791) main_cset_slider_pane

0xcda6,	// (0x000906cd) main_cset_list_pane_ParamLimits

0xcda6,	// (0x000906cd) main_cset_list_pane

0xcdb6,	// (0x000906dd) scroll_pane_cp028

0x6e90,	// (0x0008a7b7) aid_area_touch_slider

0x6eac,	// (0x0008a7d3) cset_slider_pane

0x6ecf,	// (0x0008a7f6) main_cset_slider_pane_g1

0x6ee4,	// (0x0008a80b) main_cset_slider_pane_g2

0x0011,

0xf8d0,	// (0x000931f7) main_cset_slider_pane_g

0xce07,	// (0x0009072e) main_cset_slider_pane_t1

0x6f88,	// (0x0008a8af) main_cset_slider_pane_t2

0x6fa2,	// (0x0008a8c9) main_cset_slider_pane_t3

0x6fbc,	// (0x0008a8e3) main_cset_slider_pane_t4

0x6fd6,	// (0x0008a8fd) main_cset_slider_pane_t5

0x6ff0,	// (0x0008a917) main_cset_slider_pane_t6

0x7005,	// (0x0008a92c) main_cset_slider_pane_t7

0x000e,

0xf8f5,	// (0x0009321c) main_cset_slider_pane_t

0x7109,	// (0x0008aa30) cset_list_set_pane_ParamLimits

0x7109,	// (0x0008aa30) cset_list_set_pane

0xcea1,	// (0x000907c8) aid_position_infowindow_above

0xcea9,	// (0x000907d0) aid_position_infowindow_below

0x711b,	// (0x0008aa42) cset_list_set_pane_g1_ParamLimits

0x711b,	// (0x0008aa42) cset_list_set_pane_g1

0x0738,	// (0x0008405f) cset_list_set_pane_g3_ParamLimits

0x0738,	// (0x0008405f) cset_list_set_pane_g3

0x0001,

0xf914,	// (0x0009323b) cset_list_set_pane_g_ParamLimits

0xf914,	// (0x0009323b) cset_list_set_pane_g

0x0747,	// (0x0008406e) cset_list_set_pane_t1_ParamLimits

0x0747,	// (0x0008406e) cset_list_set_pane_t1

0xedcf,	// (0x000926f6) list_highlight_pane_cp021_ParamLimits

0xedcf,	// (0x000926f6) list_highlight_pane_cp021

0x42bf,	// (0x00087be6) cset_slider_pane_g1

0x42d1,	// (0x00087bf8) cset_slider_pane_g2

0x42c8,	// (0x00087bef) cset_slider_pane_g3

0x0002,

0xf919,	// (0x00093240) cset_slider_pane_g

0xe509,	// (0x00091e30) aid_area_touch_cam4_zoom

0xe511,	// (0x00091e38) cam4_zoom_cont_pane

0xe519,	// (0x00091e40) cam4_zoom_pane_g1

0xe521,	// (0x00091e48) cam4_zoom_pane_g2

0x7127,	// (0x0008aa4e) cam4_zoom_pane_g3

0x0002,

0xf920,	// (0x00093247) cam4_zoom_pane_g

0xc6c2,	// (0x0008ffe9) cam4_zoom_cont_pane_g1

0xceb1,	// (0x000907d8) cam4_zoom_cont_pane_g2

0xceba,	// (0x000907e1) cam4_zoom_cont_pane_g3

0x0002,

0xf927,	// (0x0009324e) cam4_zoom_cont_pane_g

0x655c,	// (0x00089e83) call4_image_pane_ParamLimits

0x655c,	// (0x00089e83) call4_image_pane

0x65c3,	// (0x00089eea) call4_windows_conf_pane_ParamLimits

0x6606,	// (0x00089f2d) popup_call4_audio_in_window_ParamLimits

0x6606,	// (0x00089f2d) popup_call4_audio_in_window

0xedc5,	// (0x000926ec) bg_popup_call2_act_pane_cp02

0xcaf3,	// (0x0009041a) call4_list_conf_pane

0x23af,	// (0x00085cd6) call4_image_pane_g1

0x23af,	// (0x00085cd6) call4_image_pane_g2

0x0001,

0xf398,	// (0x00092cbf) call4_image_pane_g

0xcec3,	// (0x000907ea) list_single_graphic_popup_conf4_pane_ParamLimits

0xcec3,	// (0x000907ea) list_single_graphic_popup_conf4_pane

0xedc5,	// (0x000926ec) list_highlight_pane_cp022

0xced6,	// (0x000907fd) list_single_graphic_popup_conf4_pane_g1

0x3a33,	// (0x0008735a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf92e,	// (0x00093255) list_single_graphic_popup_conf4_pane_g

0xcede,	// (0x00090805) list_single_graphic_popup_conf4_pane_t1

0x25e5,	// (0x00085f0c) popup_vtel_slider_window_ParamLimits

0x25e5,	// (0x00085f0c) popup_vtel_slider_window

0xca71,	// (0x00090398) dialer2_ne_pane_t2_ParamLimits

0xca71,	// (0x00090398) dialer2_ne_pane_t2

0x0001,

0xf80f,	// (0x00093136) dialer2_ne_pane_t_ParamLimits

0xf80f,	// (0x00093136) dialer2_ne_pane_t

0xbc05,	// (0x0008f52c) bg_popup_sub_pane_cp010_ParamLimits

0xbc05,	// (0x0008f52c) bg_popup_sub_pane_cp010

0x712f,	// (0x0008aa56) popup_vtel_slider_window_g1_ParamLimits

0x712f,	// (0x0008aa56) popup_vtel_slider_window_g1

0x7142,	// (0x0008aa69) popup_vtel_slider_window_g2_ParamLimits

0x7142,	// (0x0008aa69) popup_vtel_slider_window_g2

0x0003,

0xf933,	// (0x0009325a) popup_vtel_slider_window_g_ParamLimits

0xf933,	// (0x0009325a) popup_vtel_slider_window_g

0x7198,	// (0x0008aabf) vtel_slider_pane_ParamLimits

0x7198,	// (0x0008aabf) vtel_slider_pane

0x71ba,	// (0x0008aae1) vtel_slider_pane_g1_ParamLimits

0x71ba,	// (0x0008aae1) vtel_slider_pane_g1

0x71ce,	// (0x0008aaf5) vtel_slider_pane_g2_ParamLimits

0x71ce,	// (0x0008aaf5) vtel_slider_pane_g2

0x71e6,	// (0x0008ab0d) vtel_slider_pane_g3_ParamLimits

0x71e6,	// (0x0008ab0d) vtel_slider_pane_g3

0x71ba,	// (0x0008aae1) vtel_slider_pane_g4_ParamLimits

0x71ba,	// (0x0008aae1) vtel_slider_pane_g4

0x71fc,	// (0x0008ab23) vtel_slider_pane_g5_ParamLimits

0x71fc,	// (0x0008ab23) vtel_slider_pane_g5

0x0004,

0xf93c,	// (0x00093263) vtel_slider_pane_g_ParamLimits

0xf93c,	// (0x00093263) vtel_slider_pane_g

0xedcf,	// (0x000926f6) main_gallery2_pane

0x692d,	// (0x0008a254) aid_size_row_itut2_dropdow_list_ParamLimits

0x692d,	// (0x0008a254) aid_size_row_itut2_dropdow_list

0x69ab,	// (0x0008a2d2) grid_vitu2_function_top_pane_ParamLimits

0x69ab,	// (0x0008a2d2) grid_vitu2_function_top_pane

0x6a15,	// (0x0008a33c) popup_vitu2_dropdown_list_window_ParamLimits

0x6a15,	// (0x0008a33c) popup_vitu2_dropdown_list_window

0x6a3c,	// (0x0008a363) popup_vitu2_match_list_window

0x7212,	// (0x0008ab39) cell_vitu2_function_top_pane_ParamLimits

0x7212,	// (0x0008ab39) cell_vitu2_function_top_pane

0x722a,	// (0x0008ab51) cell_vitu2_function_top_pane_cp01_ParamLimits

0x722a,	// (0x0008ab51) cell_vitu2_function_top_pane_cp01

0x7246,	// (0x0008ab6d) cell_vitu2_function_top_wide_pane_ParamLimits

0x7246,	// (0x0008ab6d) cell_vitu2_function_top_wide_pane

0xedcf,	// (0x000926f6) bg_button_pane_cp012

0x7264,	// (0x0008ab8b) cell_vitu2_function_top_pane_g1

0xe529,	// (0x00091e50) bg_button_pane_cp013_ParamLimits

0xe529,	// (0x00091e50) bg_button_pane_cp013

0x7278,	// (0x0008ab9f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7278,	// (0x0008ab9f) cell_vitu2_function_top_wide_pane_g1

0xedcf,	// (0x000926f6) bg_popup_sub_pane_cp20

0x7290,	// (0x0008abb7) list_vitu2_match_list_pane

0xcc8a,	// (0x000905b1) bg_popup_sub_pane_cp20_g1

0xcc92,	// (0x000905b9) bg_popup_sub_pane_cp20_g2

0x2a76,	// (0x0008639d) bg_popup_sub_pane_cp20_g3

0xcc9a,	// (0x000905c1) bg_popup_sub_pane_cp20_g4

0x2a56,	// (0x0008637d) bg_popup_sub_pane_cp20_g5

0xcef4,	// (0x0009081b) bg_popup_sub_pane_cp20_g6

0xccaa,	// (0x000905d1) bg_popup_sub_pane_cp20_g7

0xccb2,	// (0x000905d9) bg_popup_sub_pane_cp20_g8

0xccba,	// (0x000905e1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf947,	// (0x0009326e) bg_popup_sub_pane_cp20_g

0xe545,	// (0x00091e6c) list_vitu2_match_list_item_pane_ParamLimits

0xe545,	// (0x00091e6c) list_vitu2_match_list_item_pane

0xe557,	// (0x00091e7e) list_vitu2_match_list_item_pane_t1

0xedc5,	// (0x000926ec) bg_popup_sub_pane_cp21

0x21c2,	// (0x00085ae9) grid_vitu2_dropdown_list_pane

0x72a8,	// (0x0008abcf) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x72a8,	// (0x0008abcf) cell_vitu2_dropdown_list_char_pane

0x72c8,	// (0x0008abef) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x72c8,	// (0x0008abef) cell_vitu2_dropdown_list_ctrl_pane

0xcefc,	// (0x00090823) cell_vitu2_dropdown_list_char_pane_g1

0xcf05,	// (0x0009082c) cell_vitu2_dropdown_list_char_pane_g2

0xcf0e,	// (0x00090835) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95a,	// (0x00093281) cell_vitu2_dropdown_list_char_pane_g

0x72f0,	// (0x0008ac17) cell_vitu2_dropdown_list_char_pane_t1

0x72fe,	// (0x0008ac25) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x72fe,	// (0x0008ac25) cell_vitu2_dropdown_list_ctrl_pane_g1

0x730b,	// (0x0008ac32) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x730b,	// (0x0008ac32) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7318,	// (0x0008ac3f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7318,	// (0x0008ac3f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7325,	// (0x0008ac4c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7325,	// (0x0008ac4c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x171f,	// (0x00085046) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x171f,	// (0x00085046) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf961,	// (0x00093288) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf961,	// (0x00093288) cell_vitu2_dropdown_list_ctrl_pane_g

0x7341,	// (0x0008ac68) aid_size_cell_gallery2_ParamLimits

0x7341,	// (0x0008ac68) aid_size_cell_gallery2

0x735f,	// (0x0008ac86) grid_gallery2_pane_ParamLimits

0x735f,	// (0x0008ac86) grid_gallery2_pane

0x7379,	// (0x0008aca0) scroll_pane_cp029_ParamLimits

0x7379,	// (0x0008aca0) scroll_pane_cp029

0x738a,	// (0x0008acb1) cell_gallery2_pane_ParamLimits

0x738a,	// (0x0008acb1) cell_gallery2_pane

0xcf17,	// (0x0009083e) cell_gallery2_pane_g2

0x73e9,	// (0x0008ad10) cell_gallery2_pane_g3

0xcf1f,	// (0x00090846) cell_gallery2_pane_g4

0xcf27,	// (0x0009084e) cell_gallery2_pane_g5

0x21c2,	// (0x00085ae9) grid_highlight_pane_cp10

0x6a3c,	// (0x0008a363) popup_vitu2_match_list_window_ParamLimits

0x6a51,	// (0x0008a378) popup_vitu2_query_window_ParamLimits

0x6a51,	// (0x0008a378) popup_vitu2_query_window

0xedc5,	// (0x000926ec) bg_vitu2_candi_button_pane

0xcefc,	// (0x00090823) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcf05,	// (0x0009082c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcf0e,	// (0x00090835) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x075c,	// (0x00084083) bg_button_pane_cp015

0x73f1,	// (0x0008ad18) bg_button_pane_cp016

0x73fd,	// (0x0008ad24) bg_button_pane_cp017

0x4086,	// (0x000879ad) bg_popup_sub_pane_cp22

0xcf2f,	// (0x00090856) popup_vitu2_query_window_g1

0x7418,	// (0x0008ad3f) popup_vitu2_query_window_g2

0x0002,

0xf96c,	// (0x00093293) popup_vitu2_query_window_g

0x0790,	// (0x000840b7) popup_vitu2_query_window_t1_ParamLimits

0x0790,	// (0x000840b7) popup_vitu2_query_window_t1

0x07c3,	// (0x000840ea) popup_vitu2_query_window_t2_ParamLimits

0x07c3,	// (0x000840ea) popup_vitu2_query_window_t2

0x07d5,	// (0x000840fc) popup_vitu2_query_window_t3_ParamLimits

0x07d5,	// (0x000840fc) popup_vitu2_query_window_t3

0x743a,	// (0x0008ad61) popup_vitu2_query_window_t4_ParamLimits

0x743a,	// (0x0008ad61) popup_vitu2_query_window_t4

0x744e,	// (0x0008ad75) popup_vitu2_query_window_t5_ParamLimits

0x744e,	// (0x0008ad75) popup_vitu2_query_window_t5

0x0006,

0xf973,	// (0x0009329a) popup_vitu2_query_window_t_ParamLimits

0xf973,	// (0x0009329a) popup_vitu2_query_window_t

0xcd9e,	// (0x000906c5) main_cset_text_pane

0x6e90,	// (0x0008a7b7) aid_area_touch_slider_ParamLimits

0x6eac,	// (0x0008a7d3) cset_slider_pane_ParamLimits

0x6ecf,	// (0x0008a7f6) main_cset_slider_pane_g1_ParamLimits

0x6ee4,	// (0x0008a80b) main_cset_slider_pane_g2_ParamLimits

0xcdbf,	// (0x000906e6) main_cset_slider_pane_g3_ParamLimits

0xcdbf,	// (0x000906e6) main_cset_slider_pane_g3

0x6ef9,	// (0x0008a820) main_cset_slider_pane_g4_ParamLimits

0x6ef9,	// (0x0008a820) main_cset_slider_pane_g4

0x6f08,	// (0x0008a82f) main_cset_slider_pane_g5_ParamLimits

0x6f08,	// (0x0008a82f) main_cset_slider_pane_g5

0x6f14,	// (0x0008a83b) main_cset_slider_pane_g6_ParamLimits

0x6f14,	// (0x0008a83b) main_cset_slider_pane_g6

0xf8d0,	// (0x000931f7) main_cset_slider_pane_g_ParamLimits

0xce07,	// (0x0009072e) main_cset_slider_pane_t1_ParamLimits

0x6f88,	// (0x0008a8af) main_cset_slider_pane_t2_ParamLimits

0x6fa2,	// (0x0008a8c9) main_cset_slider_pane_t3_ParamLimits

0x6fbc,	// (0x0008a8e3) main_cset_slider_pane_t4_ParamLimits

0x6fd6,	// (0x0008a8fd) main_cset_slider_pane_t5_ParamLimits

0x6ff0,	// (0x0008a917) main_cset_slider_pane_t6_ParamLimits

0x7005,	// (0x0008a92c) main_cset_slider_pane_t7_ParamLimits

0x702f,	// (0x0008a956) main_cset_slider_pane_t8_ParamLimits

0x702f,	// (0x0008a956) main_cset_slider_pane_t8

0x7057,	// (0x0008a97e) main_cset_slider_pane_t9_ParamLimits

0x7057,	// (0x0008a97e) main_cset_slider_pane_t9

0x707f,	// (0x0008a9a6) main_cset_slider_pane_t10_ParamLimits

0x707f,	// (0x0008a9a6) main_cset_slider_pane_t10

0x70a7,	// (0x0008a9ce) main_cset_slider_pane_t11_ParamLimits

0x70a7,	// (0x0008a9ce) main_cset_slider_pane_t11

0x70cf,	// (0x0008a9f6) main_cset_slider_pane_t12_ParamLimits

0x70cf,	// (0x0008a9f6) main_cset_slider_pane_t12

0x70ec,	// (0x0008aa13) main_cset_slider_pane_t13_ParamLimits

0x70ec,	// (0x0008aa13) main_cset_slider_pane_t13

0xf8f5,	// (0x0009321c) main_cset_slider_pane_t_ParamLimits

0xedc5,	// (0x000926ec) bg_popup_sub_pane_cp011

0xcf3b,	// (0x00090862) main_cset_text_pane_g1

0xcf43,	// (0x0009086a) main_cset_text_pane_t1

0xcf51,	// (0x00090878) main_cset_text_pane_t2

0xcf5f,	// (0x00090886) main_cset_text_pane_t3

0xcf6d,	// (0x00090894) main_cset_text_pane_t4

0xcf7b,	// (0x000908a2) main_cset_text_pane_t5

0xcf89,	// (0x000908b0) main_cset_text_pane_t6

0xcf97,	// (0x000908be) main_cset_text_pane_t7

0x0006,

0xf982,	// (0x000932a9) main_cset_text_pane_t

0xedc5,	// (0x000926ec) main_cam4_burst_pane

0xedc5,	// (0x000926ec) main_cam5_pane

0xcd74,	// (0x0009069b) bg_button_pane_cp019

0xcd7d,	// (0x000906a4) bg_button_pane_cp020

0xcdcb,	// (0x000906f2) main_cset_slider_pane_g7_ParamLimits

0xcdcb,	// (0x000906f2) main_cset_slider_pane_g7

0xcdd7,	// (0x000906fe) main_cset_slider_pane_g8_ParamLimits

0xcdd7,	// (0x000906fe) main_cset_slider_pane_g8

0x6f28,	// (0x0008a84f) main_cset_slider_pane_g9_ParamLimits

0x6f28,	// (0x0008a84f) main_cset_slider_pane_g9

0x6f34,	// (0x0008a85b) main_cset_slider_pane_g10_ParamLimits

0x6f34,	// (0x0008a85b) main_cset_slider_pane_g10

0x6f40,	// (0x0008a867) main_cset_slider_pane_g11_ParamLimits

0x6f40,	// (0x0008a867) main_cset_slider_pane_g11

0x6f4c,	// (0x0008a873) main_cset_slider_pane_g12_ParamLimits

0x6f4c,	// (0x0008a873) main_cset_slider_pane_g12

0x6f58,	// (0x0008a87f) main_cset_slider_pane_g13_ParamLimits

0x6f58,	// (0x0008a87f) main_cset_slider_pane_g13

0x6f64,	// (0x0008a88b) main_cset_slider_pane_g14_ParamLimits

0x6f64,	// (0x0008a88b) main_cset_slider_pane_g14

0x6f70,	// (0x0008a897) main_cset_slider_pane_g15_ParamLimits

0x6f70,	// (0x0008a897) main_cset_slider_pane_g15

0xce2f,	// (0x00090756) main_cset_slider_pane_t14_ParamLimits

0xce2f,	// (0x00090756) main_cset_slider_pane_t14

0xce68,	// (0x0009078f) main_cset_slider_pane_t15_ParamLimits

0xce68,	// (0x0009078f) main_cset_slider_pane_t15

0x7462,	// (0x0008ad89) aid_cam4_burst_size_cell_ParamLimits

0x7462,	// (0x0008ad89) aid_cam4_burst_size_cell

0x7482,	// (0x0008ada9) grid_cam4_burst_pane_ParamLimits

0x7482,	// (0x0008ada9) grid_cam4_burst_pane

0x74ba,	// (0x0008ade1) linegrid_cam4_burst_pane_ParamLimits

0x74ba,	// (0x0008ade1) linegrid_cam4_burst_pane

0xcfa5,	// (0x000908cc) scroll_pane_cp30_ParamLimits

0xcfa5,	// (0x000908cc) scroll_pane_cp30

0x74de,	// (0x0008ae05) cell_cam4_burst_pane_ParamLimits

0x74de,	// (0x0008ae05) cell_cam4_burst_pane

0xcfb1,	// (0x000908d8) linegrid_cam4_burst_pane_g1_ParamLimits

0xcfb1,	// (0x000908d8) linegrid_cam4_burst_pane_g1

0x752b,	// (0x0008ae52) linegrid_cam4_burst_pane_g2_ParamLimits

0x752b,	// (0x0008ae52) linegrid_cam4_burst_pane_g2

0xcfbe,	// (0x000908e5) linegrid_cam4_burst_pane_g3_ParamLimits

0xcfbe,	// (0x000908e5) linegrid_cam4_burst_pane_g3

0x0002,

0xf991,	// (0x000932b8) linegrid_cam4_burst_pane_g_ParamLimits

0xf991,	// (0x000932b8) linegrid_cam4_burst_pane_g

0x753c,	// (0x0008ae63) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x753c,	// (0x0008ae63) linegrid_cam4_burst_pane_g3_copy1

0xcfcb,	// (0x000908f2) linegrid_cam4_burst_pane_g4_ParamLimits

0xcfcb,	// (0x000908f2) linegrid_cam4_burst_pane_g4

0x7556,	// (0x0008ae7d) linegrid_cam4_burst_pane_g5_ParamLimits

0x7556,	// (0x0008ae7d) linegrid_cam4_burst_pane_g5

0x7567,	// (0x0008ae8e) linegrid_cam4_burst_pane_g6_ParamLimits

0x7567,	// (0x0008ae8e) linegrid_cam4_burst_pane_g6

0xcfd8,	// (0x000908ff) linegrid_cam4_burst_pane_g7_ParamLimits

0xcfd8,	// (0x000908ff) linegrid_cam4_burst_pane_g7

0x757e,	// (0x0008aea5) cell_cam4_burst_pane_g1

0xcff1,	// (0x00090918) main_cam5_pane_t1_ParamLimits

0xcff1,	// (0x00090918) main_cam5_pane_t1

0xd003,	// (0x0009092a) main_cam5_pane_t2_ParamLimits

0xd003,	// (0x0009092a) main_cam5_pane_t2

0xd015,	// (0x0009093c) main_cam5_pane_t3_ParamLimits

0xd015,	// (0x0009093c) main_cam5_pane_t3

0xd027,	// (0x0009094e) main_cam5_pane_t4_ParamLimits

0xd027,	// (0x0009094e) main_cam5_pane_t4

0xd03f,	// (0x00090966) main_cam5_pane_t5_ParamLimits

0xd03f,	// (0x00090966) main_cam5_pane_t5

0xd053,	// (0x0009097a) main_cam5_pane_t6_ParamLimits

0xd053,	// (0x0009097a) main_cam5_pane_t6

0xd067,	// (0x0009098e) main_cam5_pane_t7_ParamLimits

0xd067,	// (0x0009098e) main_cam5_pane_t7

0xd079,	// (0x000909a0) main_cam5_pane_t8_ParamLimits

0xd079,	// (0x000909a0) main_cam5_pane_t8

0xd095,	// (0x000909bc) main_cam5_pane_t9_ParamLimits

0xd095,	// (0x000909bc) main_cam5_pane_t9

0xd0a7,	// (0x000909ce) main_cam5_pane_t10_ParamLimits

0xd0a7,	// (0x000909ce) main_cam5_pane_t10

0xd0b9,	// (0x000909e0) main_cam5_pane_t11_ParamLimits

0xd0b9,	// (0x000909e0) main_cam5_pane_t11

0xd0cb,	// (0x000909f2) main_cam5_pane_t12_ParamLimits

0xd0cb,	// (0x000909f2) main_cam5_pane_t12

0xd0e0,	// (0x00090a07) main_cam5_pane_t13_ParamLimits

0xd0e0,	// (0x00090a07) main_cam5_pane_t13

0x000c,

0xf99d,	// (0x000932c4) main_cam5_pane_t_ParamLimits

0xf99d,	// (0x000932c4) main_cam5_pane_t

0x0f96,	// (0x000848bd) popup_scut_keymap_window_ParamLimits

0x0f96,	// (0x000848bd) popup_scut_keymap_window

0x7591,	// (0x0008aeb8) aid_size_cell_brow_shortcut

0x21c2,	// (0x00085ae9) bg_popup_window_pane_cp010

0x759d,	// (0x0008aec4) grid_scut_pane

0x75a9,	// (0x0008aed0) cell_scut_pane_ParamLimits

0x75a9,	// (0x0008aed0) cell_scut_pane

0x75c0,	// (0x0008aee7) cell_scut_pane_g1

0xd0fd,	// (0x00090a24) cell_scut_pane_t1

0xd10c,	// (0x00090a33) cell_scut_pane_t2

0x75c9,	// (0x0008aef0) cell_scut_pane_t3

0x0002,

0xf9b8,	// (0x000932df) cell_scut_pane_t

0x567f,	// (0x00088fa6) main_mup3_pane_g8_ParamLimits

0x567f,	// (0x00088fa6) main_mup3_pane_g8

0x6945,	// (0x0008a26c) area_vitu2_query_pane_ParamLimits

0x6945,	// (0x0008a26c) area_vitu2_query_pane

0x076d,	// (0x00084094) input_focus_pane_cp08

0xd11b,	// (0x00090a42) area_vitu2_query_pane_g1

0x0853,	// (0x0008417a) area_vitu2_query_pane_g2

0x0001,

0xf9bf,	// (0x000932e6) area_vitu2_query_pane_g

0x75d7,	// (0x0008aefe) area_vitu2_query_pane_t1_ParamLimits

0x75d7,	// (0x0008aefe) area_vitu2_query_pane_t1

0x75eb,	// (0x0008af12) area_vitu2_query_pane_t2_ParamLimits

0x75eb,	// (0x0008af12) area_vitu2_query_pane_t2

0x0862,	// (0x00084189) area_vitu2_query_pane_t3_ParamLimits

0x0862,	// (0x00084189) area_vitu2_query_pane_t3

0xd127,	// (0x00090a4e) area_vitu2_query_pane_t4_ParamLimits

0xd127,	// (0x00090a4e) area_vitu2_query_pane_t4

0xd14f,	// (0x00090a76) area_vitu2_query_pane_t5_ParamLimits

0xd14f,	// (0x00090a76) area_vitu2_query_pane_t5

0xd177,	// (0x00090a9e) area_vitu2_query_pane_t6_ParamLimits

0xd177,	// (0x00090a9e) area_vitu2_query_pane_t6

0x0006,

0xf9c4,	// (0x000932eb) area_vitu2_query_pane_t_ParamLimits

0xf9c4,	// (0x000932eb) area_vitu2_query_pane_t

0x75ff,	// (0x0008af26) bg_button_pane_cp018

0x760b,	// (0x0008af32) bg_button_pane_cp021

0x088a,	// (0x000841b1) bg_button_pane_cp022

0x08a9,	// (0x000841d0) input_focus_pane_cp09

0x3d8c,	// (0x000876b3) aid_size_touch_mv_arrow_left

0x3db7,	// (0x000876de) aid_size_touch_mv_arrow_right

0xcde3,	// (0x0009070a) main_cset_slider_pane_g16_ParamLimits

0xcde3,	// (0x0009070a) main_cset_slider_pane_g16

0xcdef,	// (0x00090716) main_cset_slider_pane_g17_ParamLimits

0xcdef,	// (0x00090716) main_cset_slider_pane_g17

0x757e,	// (0x0008aea5) cell_cam4_burst_pane_g1_ParamLimits

0xedc5,	// (0x000926ec) compa_mode_pane

0x7152,	// (0x0008aa79) popup_vtel_slider_window_g3_ParamLimits

0x7152,	// (0x0008aa79) popup_vtel_slider_window_g3

0x7169,	// (0x0008aa90) popup_vtel_slider_window_g4_ParamLimits

0x7169,	// (0x0008aa90) popup_vtel_slider_window_g4

0x7180,	// (0x0008aaa7) popup_vtel_slider_window_t1_ParamLimits

0x7180,	// (0x0008aaa7) popup_vtel_slider_window_t1

0xedc5,	// (0x000926ec) main_cl_pane

0xba9c,	// (0x0008f3c3) popup_imed_adjust2_window_ParamLimits

0x4086,	// (0x000879ad) bg_tb_trans_pane_cp05_ParamLimits

0xc4b4,	// (0x0008fddb) popup_imed_adjust2_window_g1_ParamLimits

0xc4c3,	// (0x0008fdea) popup_imed_adjust2_window_g2_ParamLimits

0xc4c3,	// (0x0008fdea) popup_imed_adjust2_window_g2

0xc4cf,	// (0x0008fdf6) popup_imed_adjust2_window_g3_ParamLimits

0xc4cf,	// (0x0008fdf6) popup_imed_adjust2_window_g3

0x0002,

0xf73a,	// (0x00093061) popup_imed_adjust2_window_g_ParamLimits

0xf73a,	// (0x00093061) popup_imed_adjust2_window_g

0xc4db,	// (0x0008fe02) popup_imed_adjust2_window_t1_ParamLimits

0xc4f3,	// (0x0008fe1a) slider_imed_adjust_pane_ParamLimits

0xc507,	// (0x0008fe2e) slider_imed_adjust_pane_g1_ParamLimits

0xc517,	// (0x0008fe3e) slider_imed_adjust_pane_g2_ParamLimits

0xc527,	// (0x0008fe4e) slider_imed_adjust_pane_g3_ParamLimits

0xc538,	// (0x0008fe5f) slider_imed_adjust_pane_g4_ParamLimits

0xf741,	// (0x00093068) slider_imed_adjust_pane_g_ParamLimits

0x66ce,	// (0x00089ff5) aid_touch_area_cam4_ParamLimits

0x66ce,	// (0x00089ff5) aid_touch_area_cam4

0xcb37,	// (0x0009045e) battery_pane_cp01

0x679d,	// (0x0008a0c4) main_camera4_pane_g6_ParamLimits

0x679d,	// (0x0008a0c4) main_camera4_pane_g6

0x67c7,	// (0x0008a0ee) main_camera4_pane_t2_ParamLimits

0x67c7,	// (0x0008a0ee) main_camera4_pane_t2

0x0001,

0xf843,	// (0x0009316a) main_camera4_pane_t_ParamLimits

0xf843,	// (0x0009316a) main_camera4_pane_t

0x67fc,	// (0x0008a123) aid_touch_area_vid4_ParamLimits

0x67fc,	// (0x0008a123) aid_touch_area_vid4

0x6850,	// (0x0008a177) main_video4_pane_g5_ParamLimits

0x6850,	// (0x0008a177) main_video4_pane_g5

0x6875,	// (0x0008a19c) vid4_progress_pane_ParamLimits

0x6875,	// (0x0008a19c) vid4_progress_pane

0xcdfb,	// (0x00090722) main_cset_slider_pane_g18_ParamLimits

0xcdfb,	// (0x00090722) main_cset_slider_pane_g18

0xcfe5,	// (0x0009090c) cell_cam4_burst_pane_g2_ParamLimits

0xcfe5,	// (0x0009090c) cell_cam4_burst_pane_g2

0x0001,

0xf998,	// (0x000932bf) cell_cam4_burst_pane_g_ParamLimits

0xf998,	// (0x000932bf) cell_cam4_burst_pane_g

0x18f5,	// (0x0008521c) bg_cl_pane_ParamLimits

0x18f5,	// (0x0008521c) bg_cl_pane

0x7617,	// (0x0008af3e) cl_header_pane_ParamLimits

0x7617,	// (0x0008af3e) cl_header_pane

0x762b,	// (0x0008af52) cl_listscroll_pane_ParamLimits

0x762b,	// (0x0008af52) cl_listscroll_pane

0xd1c3,	// (0x00090aea) bg_cl_pane_g1

0xd1cb,	// (0x00090af2) bg_cl_pane_g2

0xd1d3,	// (0x00090afa) bg_cl_pane_g3

0xd1db,	// (0x00090b02) bg_cl_pane_g4

0xd1e3,	// (0x00090b0a) bg_cl_pane_g5

0xd1eb,	// (0x00090b12) bg_cl_pane_g6

0xd1f3,	// (0x00090b1a) bg_cl_pane_g7

0xd1fb,	// (0x00090b22) bg_cl_pane_g8

0xd203,	// (0x00090b2a) bg_cl_pane_g9

0x0008,

0xf9d3,	// (0x000932fa) bg_cl_pane_g

0x763b,	// (0x0008af62) aid_height_cl_leading_ParamLimits

0x763b,	// (0x0008af62) aid_height_cl_leading

0x7647,	// (0x0008af6e) aid_height_cl_text_ParamLimits

0x7647,	// (0x0008af6e) aid_height_cl_text

0xedcf,	// (0x000926f6) bg_cl_header_pane_ParamLimits

0xedcf,	// (0x000926f6) bg_cl_header_pane

0x7666,	// (0x0008af8d) cl_header_pane_g1_ParamLimits

0x7666,	// (0x0008af8d) cl_header_pane_g1

0x767c,	// (0x0008afa3) cl_header_pane_t1_ParamLimits

0x767c,	// (0x0008afa3) cl_header_pane_t1

0xd20b,	// (0x00090b32) cl_list_pane

0xcdb6,	// (0x000906dd) hc_scroll_pane_cp01

0x2a56,	// (0x0008637d) bg_cl_header_pane_g1

0xcc8a,	// (0x000905b1) bg_cl_header_pane_g2

0x2a76,	// (0x0008639d) bg_cl_header_pane_g3

0xcc9a,	// (0x000905c1) bg_cl_header_pane_g4

0xcc92,	// (0x000905b9) bg_cl_header_pane_g5

0xcef4,	// (0x0009081b) bg_cl_header_pane_g6

0xccb2,	// (0x000905d9) bg_cl_header_pane_g7

0xccba,	// (0x000905e1) bg_cl_header_pane_g8

0xccaa,	// (0x000905d1) bg_cl_header_pane_g9

0x0008,

0xf9e6,	// (0x0009330d) bg_cl_header_pane_g

0x7695,	// (0x0008afbc) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7695,	// (0x0008afbc) hc_cl_list_double_graphic_heading_pane

0x76a6,	// (0x0008afcd) hc_cl_list_single_graphic_pane_ParamLimits

0x76a6,	// (0x0008afcd) hc_cl_list_single_graphic_pane

0x76bf,	// (0x0008afe6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76bf,	// (0x0008afe6) hc_cl_list_single_graphic_pane_g1

0x76cb,	// (0x0008aff2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76cb,	// (0x0008aff2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9f9,	// (0x00093320) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9f9,	// (0x00093320) hc_cl_list_single_graphic_pane_g

0x76df,	// (0x0008b006) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76df,	// (0x0008b006) hc_cl_list_single_graphic_pane_t1

0x76bf,	// (0x0008afe6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76bf,	// (0x0008afe6) hc_cl_list_double_graphic_heading_pane_g1

0x76f4,	// (0x0008b01b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76f4,	// (0x0008b01b) hc_cl_list_double_graphic_heading_pane_g2

0x7708,	// (0x0008b02f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7708,	// (0x0008b02f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9fe,	// (0x00093325) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9fe,	// (0x00093325) hc_cl_list_double_graphic_heading_pane_g

0x771c,	// (0x0008b043) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x771c,	// (0x0008b043) hc_cl_list_double_graphic_heading_pane_t1

0x7731,	// (0x0008b058) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7731,	// (0x0008b058) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa05,	// (0x0009332c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa05,	// (0x0009332c) hc_cl_list_double_graphic_heading_pane_t

0xe56d,	// (0x00091e94) vid4_progress_pane_g1

0xe57d,	// (0x00091ea4) vid4_progress_pane_g2

0x7746,	// (0x0008b06d) vid4_progress_pane_g3

0xe58d,	// (0x00091eb4) vid4_progress_pane_g4

0x0004,

0xfa0a,	// (0x00093331) vid4_progress_pane_g

0x7758,	// (0x0008b07f) vid4_progress_pane_t1

0xe5a5,	// (0x00091ecc) vid4_progress_pane_t2

0x0002,

0xfa15,	// (0x0009333c) vid4_progress_pane_t

0x776e,	// (0x0008b095) wait_bar_pane_cp07

0xbd68,	// (0x0008f68f) blid_firmament_pane_ParamLimits

0xbdab,	// (0x0008f6d2) popup_blid_sat_info2_window_g1

0xbdcf,	// (0x0008f6f6) popup_blid_sat_info2_window_t3

0xbddd,	// (0x0008f704) popup_blid_sat_info2_window_t4

0xbdeb,	// (0x0008f712) popup_blid_sat_info2_window_t5

0xbdf9,	// (0x0008f720) popup_blid_sat_info2_window_t6

0xbe09,	// (0x0008f730) popup_blid_sat_info2_window_t7

0xbe17,	// (0x0008f73e) popup_blid_sat_info2_window_t8

0xbe25,	// (0x0008f74c) popup_blid_sat_info2_window_t9

0xbe33,	// (0x0008f75a) popup_blid_sat_info2_window_t10

0xbef4,	// (0x0008f81b) aid_firma_cardinal_ParamLimits

0xbf08,	// (0x0008f82f) blid_firmament_pane_t1_ParamLimits

0xbf1f,	// (0x0008f846) blid_firmament_pane_t2_ParamLimits

0xbf36,	// (0x0008f85d) blid_firmament_pane_t3_ParamLimits

0xbf4d,	// (0x0008f874) blid_firmament_pane_t4_ParamLimits

0xf633,	// (0x00092f5a) blid_firmament_pane_t_ParamLimits

0xbf64,	// (0x0008f88b) blid_sat_info_pane_ParamLimits

0xedcf,	// (0x000926f6) main_cam_set_pane_ParamLimits

0x5e5c,	// (0x00089783) aid_size_cell_colour_35_ParamLimits

0x5e7c,	// (0x000897a3) aid_size_cell_colour_112_ParamLimits

0x5e9c,	// (0x000897c3) aid_size_cell_effect_ParamLimits

0x4086,	// (0x000879ad) bg_tb_trans_pane_cp02_ParamLimits

0x36a3,	// (0x00086fca) heading_imed_pane_ParamLimits

0x5ebc,	// (0x000897e3) listscroll_imed_pane_ParamLimits

0xb151,	// (0x0008ea78) popup_call2_audio_first_window_g5_ParamLimits

0xb151,	// (0x0008ea78) popup_call2_audio_first_window_g5

0x62e8,	// (0x00089c0f) aid_size_touch_image3_arrow_left_ParamLimits

0x62e8,	// (0x00089c0f) aid_size_touch_image3_arrow_left

0x6314,	// (0x00089c3b) aid_size_touch_image3_arrow_right_ParamLimits

0x6314,	// (0x00089c3b) aid_size_touch_image3_arrow_right

0xe5ba,	// (0x00091ee1) vid4_progress_pane_t3

0x605f,	// (0x00089986) main_hwr_training_symbol_option_pane_ParamLimits

0x605f,	// (0x00089986) main_hwr_training_symbol_option_pane

0xc6ed,	// (0x00090014) popup_hwr_training_preview_window_ParamLimits

0xc6ed,	// (0x00090014) popup_hwr_training_preview_window

0x607f,	// (0x000899a6) hwr_training_navi_pane_g5_ParamLimits

0x607f,	// (0x000899a6) hwr_training_navi_pane_g5

0xcc78,	// (0x0009059f) popup_char_count_window

0xedcf,	// (0x000926f6) bg_popup_sub_pane_cp20_ParamLimits

0x7290,	// (0x0008abb7) list_vitu2_match_list_pane_ParamLimits

0x729c,	// (0x0008abc3) vitu2_page_scroll_pane_ParamLimits

0x729c,	// (0x0008abc3) vitu2_page_scroll_pane

0xd225,	// (0x00090b4c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd225,	// (0x00090b4c) list_single_hwr_training_symbol_option_pane

0xd238,	// (0x00090b5f) list_single_hwr_training_symbol_option_pane_g1

0xd240,	// (0x00090b67) list_single_hwr_training_symbol_option_pane_t1

0xd24e,	// (0x00090b75) bg_button_pane_cp023

0xd257,	// (0x00090b7e) bg_button_pane_cp024

0xd28a,	// (0x00090bb1) vitu2_page_scroll_pane_g1

0xd292,	// (0x00090bb9) vitu2_page_scroll_pane_g2

0x0001,

0xfa1c,	// (0x00093343) vitu2_page_scroll_pane_g

0xd29a,	// (0x00090bc1) vitu2_page_scroll_pane_t1

0x1a50,	// (0x00085377) popup_char_count_window_g1

0xd2a9,	// (0x00090bd0) popup_char_count_window_g2

0xa6fd,	// (0x0008e024) popup_char_count_window_g3

0x0002,

0xfa21,	// (0x00093348) popup_char_count_window_g

0xd2b2,	// (0x00090bd9) popup_char_count_window_t1

0xedc5,	// (0x000926ec) main_vded2_pane

0xc4a0,	// (0x0008fdc7) aid_size_cell_imed_line

0xc4aa,	// (0x0008fdd1) grid_imed_line_width_pane

0xcbf9,	// (0x00090520) vid4_indicators_pane_g4

0xd2c0,	// (0x00090be7) cell_imed_line_width_pane_ParamLimits

0xd2c0,	// (0x00090be7) cell_imed_line_width_pane

0xd2d4,	// (0x00090bfb) cell_imed_line_width_pane_g1

0xd2dd,	// (0x00090c04) cell_imed_line_width_pane_g2

0x0001,

0xfa28,	// (0x0009334f) cell_imed_line_width_pane_g

0x777f,	// (0x0008b0a6) main_vded2_pane_g1_ParamLimits

0x777f,	// (0x0008b0a6) main_vded2_pane_g1

0x7795,	// (0x0008b0bc) main_vded2_pane_g2_ParamLimits

0x7795,	// (0x0008b0bc) main_vded2_pane_g2

0x0001,

0xfa2d,	// (0x00093354) main_vded2_pane_g_ParamLimits

0xfa2d,	// (0x00093354) main_vded2_pane_g

0x77a7,	// (0x0008b0ce) vded2_slider_pane_ParamLimits

0x77a7,	// (0x0008b0ce) vded2_slider_pane

0x77b7,	// (0x0008b0de) aid_size_touch_vded2_end

0x77c1,	// (0x0008b0e8) aid_size_touch_vded2_playhead

0xd2e5,	// (0x00090c0c) aid_size_touch_vded2_start

0xd2ed,	// (0x00090c14) vded2_slider_bg_pane

0xd2f6,	// (0x00090c1d) vded2_slider_pane_g1

0xd2ff,	// (0x00090c26) vded2_slider_pane_g2

0x77cb,	// (0x0008b0f2) vded2_slider_pane_g3

0x0002,

0xfa32,	// (0x00093359) vded2_slider_pane_g

0xd307,	// (0x00090c2e) vded2_slider_bg_pane_g1

0xd310,	// (0x00090c37) vded2_slider_bg_pane_g2

0xd319,	// (0x00090c40) vded2_slider_bg_pane_g3

0x0002,

0xfa39,	// (0x00093360) vded2_slider_bg_pane_g

0x43f2,	// (0x00087d19) aid_postcard_touch_down_pane_ParamLimits

0x43f2,	// (0x00087d19) aid_postcard_touch_down_pane

0x4408,	// (0x00087d2f) aid_postcard_touch_up_pane_ParamLimits

0x4408,	// (0x00087d2f) aid_postcard_touch_up_pane

0xedc5,	// (0x000926ec) main_blid2_pane

0xba82,	// (0x0008f3a9) popup_blid2_search_window

0xedc5,	// (0x000926ec) blid2_gps_pane

0xedc5,	// (0x000926ec) blid2_navig_pane

0xedc5,	// (0x000926ec) blid2_search_pane

0xedc5,	// (0x000926ec) blid2_tripm_pane

0x77d6,	// (0x0008b0fd) blid2_search_pane_g1_ParamLimits

0x77d6,	// (0x0008b0fd) blid2_search_pane_g1

0x77ee,	// (0x0008b115) blid2_search_pane_t1_ParamLimits

0x77ee,	// (0x0008b115) blid2_search_pane_t1

0x7800,	// (0x0008b127) aid_size_cell_blid2_gps_ParamLimits

0x7800,	// (0x0008b127) aid_size_cell_blid2_gps

0x7818,	// (0x0008b13f) blid2_gps_pane_g1_ParamLimits

0x7818,	// (0x0008b13f) blid2_gps_pane_g1

0x782c,	// (0x0008b153) grid_blid2_satellite_pane_ParamLimits

0x782c,	// (0x0008b153) grid_blid2_satellite_pane

0x7846,	// (0x0008b16d) blid2_navig_pane_g1_ParamLimits

0x7846,	// (0x0008b16d) blid2_navig_pane_g1

0x7852,	// (0x0008b179) blid2_navig_pane_t1_ParamLimits

0x7852,	// (0x0008b179) blid2_navig_pane_t1

0x786d,	// (0x0008b194) blid2_navig_pane_t2_ParamLimits

0x786d,	// (0x0008b194) blid2_navig_pane_t2

0x0001,

0xfa40,	// (0x00093367) blid2_navig_pane_t_ParamLimits

0xfa40,	// (0x00093367) blid2_navig_pane_t

0x7888,	// (0x0008b1af) blid2_navig_ring_pane_ParamLimits

0x7888,	// (0x0008b1af) blid2_navig_ring_pane

0x78a1,	// (0x0008b1c8) blid2_speed_pane_ParamLimits

0x78a1,	// (0x0008b1c8) blid2_speed_pane

0x78ad,	// (0x0008b1d4) blid2_tripm_pane_g1_ParamLimits

0x78ad,	// (0x0008b1d4) blid2_tripm_pane_g1

0x78c8,	// (0x0008b1ef) blid2_tripm_pane_g2_ParamLimits

0x78c8,	// (0x0008b1ef) blid2_tripm_pane_g2

0x78dc,	// (0x0008b203) blid2_tripm_pane_g3_ParamLimits

0x78dc,	// (0x0008b203) blid2_tripm_pane_g3

0x78f0,	// (0x0008b217) blid2_tripm_pane_g4_ParamLimits

0x78f0,	// (0x0008b217) blid2_tripm_pane_g4

0x7904,	// (0x0008b22b) blid2_tripm_pane_g5_ParamLimits

0x7904,	// (0x0008b22b) blid2_tripm_pane_g5

0x0005,

0xfa45,	// (0x0009336c) blid2_tripm_pane_g_ParamLimits

0xfa45,	// (0x0009336c) blid2_tripm_pane_g

0x792a,	// (0x0008b251) blid2_tripm_pane_t1_ParamLimits

0x792a,	// (0x0008b251) blid2_tripm_pane_t1

0x7945,	// (0x0008b26c) blid2_tripm_pane_t2_ParamLimits

0x7945,	// (0x0008b26c) blid2_tripm_pane_t2

0x795e,	// (0x0008b285) blid2_tripm_pane_t3_ParamLimits

0x795e,	// (0x0008b285) blid2_tripm_pane_t3

0x0003,

0xfa52,	// (0x00093379) blid2_tripm_pane_t_ParamLimits

0xfa52,	// (0x00093379) blid2_tripm_pane_t

0x79a5,	// (0x0008b2cc) cell_blid2_satellite_pane_ParamLimits

0x79a5,	// (0x0008b2cc) cell_blid2_satellite_pane

0x79c3,	// (0x0008b2ea) cell_blid2_satellite_pane_g1

0xd322,	// (0x00090c49) cell_blid2_satellite_pane_t1

0x23af,	// (0x00085cd6) blid2_speed_pane_g1

0xd330,	// (0x00090c57) blid2_speed_pane_t1

0xd33e,	// (0x00090c65) blid2_speed_pane_t2

0x0001,

0xfa5b,	// (0x00093382) blid2_speed_pane_t

0x23af,	// (0x00085cd6) blid2_navig_ring_pane_g1

0x79cc,	// (0x0008b2f3) blid2_navig_ring_pane_g2

0x79d4,	// (0x0008b2fb) blid2_navig_ring_pane_g3

0x79dc,	// (0x0008b303) blid2_navig_ring_pane_g4

0x79e4,	// (0x0008b30b) blid2_navig_ring_pane_g5

0x0004,

0xfa60,	// (0x00093387) blid2_navig_ring_pane_g

0xedc5,	// (0x000926ec) bg_popup_window_pane_cp011

0xd34c,	// (0x00090c73) popup_blid2_search_window_g1

0xd354,	// (0x00090c7b) popup_blid2_search_window_t1

0xd362,	// (0x00090c89) popup_blid2_search_window_t2

0x0001,

0xfa6b,	// (0x00093392) popup_blid2_search_window_t

0x2920,	// (0x00086247) main_browser_pane_g1

0x18f5,	// (0x0008521c) main_browser_pane_ParamLimits

0xedcf,	// (0x000926f6) bg_button_pane_cp011_ParamLimits

0x6b67,	// (0x0008a48e) cell_vitu2_function_pane_g1_ParamLimits

0x4086,	// (0x000879ad) bg_popup_sub_pane_cp22_ParamLimits

0x076d,	// (0x00084094) input_focus_pane_cp08_ParamLimits

0x7409,	// (0x0008ad30) popup_vitu2_query_button_pane_ParamLimits

0x7409,	// (0x0008ad30) popup_vitu2_query_button_pane

0x0788,	// (0x000840af) popup_vitu2_query_input_button_pane

0xcf2f,	// (0x00090856) popup_vitu2_query_window_g1_ParamLimits

0x7418,	// (0x0008ad3f) popup_vitu2_query_window_g2_ParamLimits

0xf96c,	// (0x00093293) popup_vitu2_query_window_g_ParamLimits

0xedc5,	// (0x000926ec) bg_button_pane_cp026

0x79ec,	// (0x0008b313) popup_vitu2_query_input_button_pane_g1

0xedc5,	// (0x000926ec) bg_button_pane_cp025

0xd370,	// (0x00090c97) popup_vitu2_query_button_pane_t1

0x534d,	// (0x00088c74) main_mp3_pane_t6

0x535b,	// (0x00088c82) popup_slider_window_cp01

0xcb65,	// (0x0009048c) cam4_battery_pane

0xcbb8,	// (0x000904df) cam4_battery_pane_cp02

0xe565,	// (0x00091e8c) cam4_battery_pane_cp01

0xe565,	// (0x00091e8c) cam4_battery_pane_cp03

0x23af,	// (0x00085cd6) cam4_battery_pane_g1

0xd37e,	// (0x00090ca5) cam4_battery_pane_g2

0x0001,

0xfa70,	// (0x00093397) cam4_battery_pane_g

0xbe41,	// (0x0008f768) popup_blid_sat_info2_window_t11

0x3d8c,	// (0x000876b3) aid_size_touch_mv_arrow_left_ParamLimits

0x3db7,	// (0x000876de) aid_size_touch_mv_arrow_right_ParamLimits

0x3e15,	// (0x0008773c) navi_pane_g1_ParamLimits

0x3e21,	// (0x00087748) navi_pane_g2_ParamLimits

0x3e4f,	// (0x00087776) navi_pane_g3_ParamLimits

0xf334,	// (0x00092c5b) navi_pane_g_ParamLimits

0x3f0d,	// (0x00087834) navi_pane_mv_t1_ParamLimits

0x5ec8,	// (0x000897ef) grid_imed_effect_pane_ParamLimits

0x24d0,	// (0x00085df7) aid_placing_vt_slider_lsc

0x24e0,	// (0x00085e07) aid_placing_vt_slider_prt

0xedcf,	// (0x000926f6) bg_tb_trans_pane_cp01_ParamLimits

0xc0df,	// (0x0008fa06) popup_image_details_window_g1_ParamLimits

0xc0f2,	// (0x0008fa19) popup_image_details_window_g2_ParamLimits

0xc107,	// (0x0008fa2e) popup_image_details_window_g3_ParamLimits

0xc107,	// (0x0008fa2e) popup_image_details_window_g3

0xf673,	// (0x00092f9a) popup_image_details_window_g_ParamLimits

0xc11b,	// (0x0008fa42) popup_image_details_window_t1_ParamLimits

0xc12d,	// (0x0008fa54) popup_image_details_window_t2_ParamLimits

0xc146,	// (0x0008fa6d) popup_image_details_window_t3_ParamLimits

0xc15a,	// (0x0008fa81) popup_image_details_window_t4_ParamLimits

0xc175,	// (0x0008fa9c) popup_image_details_window_t5_ParamLimits

0xf67a,	// (0x00092fa1) popup_image_details_window_t_ParamLimits

0x7653,	// (0x0008af7a) cl_header_name_pane_ParamLimits

0x7653,	// (0x0008af7a) cl_header_name_pane

0x79f4,	// (0x0008b31b) cl_header_name_pane_t1_ParamLimits

0x79f4,	// (0x0008b31b) cl_header_name_pane_t1

0x7a15,	// (0x0008b33c) cl_header_name_pane_t2_ParamLimits

0x7a15,	// (0x0008b33c) cl_header_name_pane_t2

0x7a57,	// (0x0008b37e) cl_header_name_pane_t3_ParamLimits

0x7a57,	// (0x0008b37e) cl_header_name_pane_t3

0x0002,

0xfa75,	// (0x0009339c) cl_header_name_pane_t_ParamLimits

0xfa75,	// (0x0009339c) cl_header_name_pane_t

0x3ede,	// (0x00087805) navi_pane_mv_g2_ParamLimits

0xcc43,	// (0x0009056a) field_vitu2_entry_pane_g1_ParamLimits

0xcc4f,	// (0x00090576) field_vitu2_entry_pane_g2_ParamLimits

0x4050,	// (0x00087977) field_vitu2_entry_pane_g3_ParamLimits

0x4050,	// (0x00087977) field_vitu2_entry_pane_g3

0xf875,	// (0x0009319c) field_vitu2_entry_pane_g_ParamLimits

0x6ae3,	// (0x0008a40a) cell_vitu2_itu_pane_g1_ParamLimits

0x6afb,	// (0x0008a422) cell_vitu2_itu_pane_g2_ParamLimits

0x6afb,	// (0x0008a422) cell_vitu2_itu_pane_g2

0x0001,

0xf881,	// (0x000931a8) cell_vitu2_itu_pane_g_ParamLimits

0xf881,	// (0x000931a8) cell_vitu2_itu_pane_g

0xedcf,	// (0x000926f6) bg_vkb2_func_pane_cp05_ParamLimits

0xedcf,	// (0x000926f6) bg_vkb2_func_pane_cp05

0xedcf,	// (0x000926f6) bg_vkb2_func_pane_cp03

0xedcf,	// (0x000926f6) bg_vkb2_func_pane_cp04

0xedcf,	// (0x000926f6) bg_vkb2_func_pane_cp10_ParamLimits

0xedcf,	// (0x000926f6) bg_vkb2_func_pane_cp10

0x0899,	// (0x000841c0) bg_vkb2_func_pane_cp08

0x75ff,	// (0x0008af26) bg_vkb2_func_pane_cp06

0x760b,	// (0x0008af32) bg_vkb2_func_pane_cp07

0xd260,	// (0x00090b87) bg_vkb2_func_pane_cp11_ParamLimits

0xd260,	// (0x00090b87) bg_vkb2_func_pane_cp11

0xd275,	// (0x00090b9c) bg_vkb2_func_pane_cp12_ParamLimits

0xd275,	// (0x00090b9c) bg_vkb2_func_pane_cp12

0xedc5,	// (0x000926ec) bg_vkb2_func_pane_cp09

0xcc8a,	// (0x000905b1) bg_vkb2_func_pane_g1

0x2a76,	// (0x0008639d) bg_vkb2_func_pane_g2

0xcc92,	// (0x000905b9) bg_vkb2_func_pane_g3

0xcc9a,	// (0x000905c1) bg_vkb2_func_pane_g4

0xcef4,	// (0x0009081b) bg_vkb2_func_pane_g5

0xccb2,	// (0x000905d9) bg_vkb2_func_pane_g6

0xccba,	// (0x000905e1) bg_vkb2_func_pane_g7

0xccaa,	// (0x000905d1) bg_vkb2_func_pane_g8

0x2a56,	// (0x0008637d) bg_vkb2_func_pane_g9

0x0008,

0xfa7c,	// (0x000933a3) bg_vkb2_func_pane_g

0x7918,	// (0x0008b23f) blid2_tripm_pane_g6_ParamLimits

0x7918,	// (0x0008b23f) blid2_tripm_pane_g6

0xca24,	// (0x0009034b) mp4_progress_pane_g1

0x7991,	// (0x0008b2b8) blid2_tripm_values_pane_ParamLimits

0x7991,	// (0x0008b2b8) blid2_tripm_values_pane

0x7a88,	// (0x0008b3af) blid2_tripm_values_pane_t1

0x7a96,	// (0x0008b3bd) blid2_tripm_values_pane_t2

0x7aa4,	// (0x0008b3cb) blid2_tripm_values_pane_t3

0x7ab2,	// (0x0008b3d9) blid2_tripm_values_pane_t4

0x7ac0,	// (0x0008b3e7) blid2_tripm_values_pane_t5

0x7ace,	// (0x0008b3f5) blid2_tripm_values_pane_t6

0x7adc,	// (0x0008b403) blid2_tripm_values_pane_t7

0x7aea,	// (0x0008b411) blid2_tripm_values_pane_t8

0x7af8,	// (0x0008b41f) blid2_tripm_values_pane_t9

0x0008,

0xfa8f,	// (0x000933b6) blid2_tripm_values_pane_t

0x251c,	// (0x00085e43) call_video_pane_t1_ParamLimits

0x253a,	// (0x00085e61) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x00092b09) call_video_pane_t_ParamLimits

0x060e,	// (0x00083f35) msg_header_pane_g1_ParamLimits

0x435c,	// (0x00087c83) msg_header_pane_g2_ParamLimits

0x435c,	// (0x00087c83) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x00092cfe) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x00092cfe) msg_header_pane_g

0x18f5,	// (0x0008521c) main_clock2_pane_ParamLimits

0x5bc9,	// (0x000894f0) grid_clock2_toolbar_pane_ParamLimits

0x5bc9,	// (0x000894f0) grid_clock2_toolbar_pane

0x5bc9,	// (0x000894f0) listscroll_clock2_pane_ParamLimits

0x5bc9,	// (0x000894f0) listscroll_clock2_pane

0x5cad,	// (0x000895d4) main_clock2_pane_t3_ParamLimits

0x5cad,	// (0x000895d4) main_clock2_pane_t3

0x5cd1,	// (0x000895f8) main_clock2_pane_t4_ParamLimits

0x5cd1,	// (0x000895f8) main_clock2_pane_t4

0xd388,	// (0x00090caf) cell_clock2_toolbar_pane

0xd390,	// (0x00090cb7) cell_clock2_toolbar_pane_cp01

0xd390,	// (0x00090cb7) cell_clock2_toolbar_pane_cp02

0xd398,	// (0x00090cbf) cell_clock2_toolbar_pane_cp03

0xd3a0,	// (0x00090cc7) list_clock2_pane

0x3b38,	// (0x0008745f) scroll_pane_cp10

0xd3a8,	// (0x00090ccf) list_single_clock2_pane_ParamLimits

0xd3a8,	// (0x00090ccf) list_single_clock2_pane

0x21c2,	// (0x00085ae9) list_highlight_pane_cp08

0xd3b5,	// (0x00090cdc) list_single_clock2_pane_t1

0xd3c3,	// (0x00090cea) list_single_clock2_pane_t2

0x0001,

0xfaa2,	// (0x000933c9) list_single_clock2_pane_t

0xedc5,	// (0x000926ec) bg_button_pane_cp10

0xd3d1,	// (0x00090cf8) cell_clock2_toolbar_pane_g1

0x4370,	// (0x00087c97) aid_main_viewer_pane_g1_ParamLimits

0x4370,	// (0x00087c97) aid_main_viewer_pane_g1

0x437e,	// (0x00087ca5) aid_main_viewer_pane_g2_ParamLimits

0x437e,	// (0x00087ca5) aid_main_viewer_pane_g2

0x438c,	// (0x00087cb3) aid_main_viewer_pane_g3_ParamLimits

0x438c,	// (0x00087cb3) aid_main_viewer_pane_g3

0x439b,	// (0x00087cc2) aid_main_viewer_pane_g4_ParamLimits

0x439b,	// (0x00087cc2) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x00092d0f) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x00092d0f) aid_main_viewer_pane_g

0x4d30,	// (0x00088657) main_calc_pane_ParamLimits

0x4d44,	// (0x0008866b) main_dialer2_pane_ParamLimits

0xedc5,	// (0x000926ec) main_cam6_pane

0xedc5,	// (0x000926ec) main_vid6_pane

0x5bd5,	// (0x000894fc) listscroll_gen_pane_cp06_ParamLimits

0x5bd5,	// (0x000894fc) listscroll_gen_pane_cp06

0x5cf4,	// (0x0008961b) main_clock2_pane_t5_ParamLimits

0x5cf4,	// (0x0008961b) main_clock2_pane_t5

0x5d52,	// (0x00089679) aid_call2_pane_cp10_ParamLimits

0x5d64,	// (0x0008968b) aid_call_pane_cp10_ParamLimits

0x3d1b,	// (0x00087642) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3d1b,	// (0x00087642) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5d76,	// (0x0008969d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5d76,	// (0x0008969d) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3d1b,	// (0x00087642) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf72f,	// (0x00093056) popup_clock_analogue_window_cp10_g_ParamLimits

0x5d8c,	// (0x000896b3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6295,	// (0x00089bbc) cell_dialer2_keypad_pane_g2_ParamLimits

0x6295,	// (0x00089bbc) cell_dialer2_keypad_pane_g2

0x0001,

0xf814,	// (0x0009313b) cell_dialer2_keypad_pane_g_ParamLimits

0xf814,	// (0x0009313b) cell_dialer2_keypad_pane_g

0x62b1,	// (0x00089bd8) cell_dialer2_keypad_pane_t1

0x6e82,	// (0x0008a7a9) main_cset_text2_pane_ParamLimits

0x6e82,	// (0x0008a7a9) main_cset_text2_pane

0xd11b,	// (0x00090a42) area_vitu2_query_pane_g1_ParamLimits

0x0853,	// (0x0008417a) area_vitu2_query_pane_g2_ParamLimits

0xf9bf,	// (0x000932e6) area_vitu2_query_pane_g_ParamLimits

0xd19f,	// (0x00090ac6) area_vitu2_query_pane_t7_ParamLimits

0xd19f,	// (0x00090ac6) area_vitu2_query_pane_t7

0x75ff,	// (0x0008af26) bg_button_pane_cp018_ParamLimits

0x760b,	// (0x0008af32) bg_button_pane_cp021_ParamLimits

0x088a,	// (0x000841b1) bg_button_pane_cp022_ParamLimits

0x0899,	// (0x000841c0) bg_vkb2_func_pane_cp08_ParamLimits

0x75ff,	// (0x0008af26) bg_vkb2_func_pane_cp06_ParamLimits

0x760b,	// (0x0008af32) bg_vkb2_func_pane_cp07_ParamLimits

0x08a9,	// (0x000841d0) input_focus_pane_cp09_ParamLimits

0x7b06,	// (0x0008b42d) cam6_autofocus_pane_ParamLimits

0x7b06,	// (0x0008b42d) cam6_autofocus_pane

0x7b12,	// (0x0008b439) cam6_image_uncrop_pane_ParamLimits

0x7b12,	// (0x0008b439) cam6_image_uncrop_pane

0x7b22,	// (0x0008b449) cam6_indi_pane_ParamLimits

0x7b22,	// (0x0008b449) cam6_indi_pane

0x7b38,	// (0x0008b45f) cam6_mode_pane_ParamLimits

0x7b38,	// (0x0008b45f) cam6_mode_pane

0x7b4a,	// (0x0008b471) cam6_timer_pane_ParamLimits

0x7b4a,	// (0x0008b471) cam6_timer_pane

0x7b56,	// (0x0008b47d) cam6_zoom_pane_ParamLimits

0x7b56,	// (0x0008b47d) cam6_zoom_pane

0x7b63,	// (0x0008b48a) cam6_mode_pane_g1_ParamLimits

0x7b63,	// (0x0008b48a) cam6_mode_pane_g1

0x7b73,	// (0x0008b49a) cam6_mode_pane_g2_ParamLimits

0x7b73,	// (0x0008b49a) cam6_mode_pane_g2

0x7b83,	// (0x0008b4aa) cam6_mode_pane_g3_ParamLimits

0x7b83,	// (0x0008b4aa) cam6_mode_pane_g3

0x7b93,	// (0x0008b4ba) cam6_mode_pane_g4_ParamLimits

0x7b93,	// (0x0008b4ba) cam6_mode_pane_g4

0x0003,

0xfaa7,	// (0x000933ce) cam6_mode_pane_g_ParamLimits

0xfaa7,	// (0x000933ce) cam6_mode_pane_g

0xbbf7,	// (0x0008f51e) bg_tb_trans_pane_cp08_ParamLimits

0xbbf7,	// (0x0008f51e) bg_tb_trans_pane_cp08

0xd3d9,	// (0x00090d00) cam6_battery_pane_ParamLimits

0xd3d9,	// (0x00090d00) cam6_battery_pane

0xd3ef,	// (0x00090d16) cam6_indi_pane_g1_ParamLimits

0xd3ef,	// (0x00090d16) cam6_indi_pane_g1

0xd401,	// (0x00090d28) cam6_indi_pane_g2_ParamLimits

0xd401,	// (0x00090d28) cam6_indi_pane_g2

0xd413,	// (0x00090d3a) cam6_indi_pane_g3_ParamLimits

0xd413,	// (0x00090d3a) cam6_indi_pane_g3

0x0002,

0xfab0,	// (0x000933d7) cam6_indi_pane_g_ParamLimits

0xfab0,	// (0x000933d7) cam6_indi_pane_g

0xd425,	// (0x00090d4c) cam6_indi_pane_t1_ParamLimits

0xd425,	// (0x00090d4c) cam6_indi_pane_t1

0x68bb,	// (0x0008a1e2) cam6_autofocus_pane_g1

0x68c3,	// (0x0008a1ea) cam6_autofocus_pane_g2

0x68cb,	// (0x0008a1f2) cam6_autofocus_pane_g3

0x68d3,	// (0x0008a1fa) cam6_autofocus_pane_g4

0x0003,

0xfab7,	// (0x000933de) cam6_autofocus_pane_g

0xd44b,	// (0x00090d72) cam6_timer_pane_g1

0xd453,	// (0x00090d7a) cam6_timer_pane_t1

0xd461,	// (0x00090d88) cam6_zoom_cont_pane

0xd469,	// (0x00090d90) cam6_zoom_pane_g1

0xd472,	// (0x00090d99) cam6_zoom_pane_g2

0x7ba3,	// (0x0008b4ca) cam6_zoom_pane_g3

0x0002,

0xfac0,	// (0x000933e7) cam6_zoom_pane_g

0x23af,	// (0x00085cd6) cam6_battery_pane_g1

0x23af,	// (0x00085cd6) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x00092cbf) cam6_battery_pane_g

0xd469,	// (0x00090d90) cam6_zoom_cont_pane_g1

0xd472,	// (0x00090d99) cam6_zoom_cont_pane_g2

0xd47b,	// (0x00090da2) cam6_zoom_cont_pane_g3

0x0002,

0xfac7,	// (0x000933ee) cam6_zoom_cont_pane_g

0x7bc1,	// (0x0008b4e8) cam6_mode_pane_cp_ParamLimits

0x7bc1,	// (0x0008b4e8) cam6_mode_pane_cp

0x7bd3,	// (0x0008b4fa) cam6_zoom_pane_cp_ParamLimits

0x7bd3,	// (0x0008b4fa) cam6_zoom_pane_cp

0x7bdf,	// (0x0008b506) vid6_image_uncrop_cif_pane_ParamLimits

0x7bdf,	// (0x0008b506) vid6_image_uncrop_cif_pane

0x7bef,	// (0x0008b516) vid6_image_uncrop_nhd_pane_ParamLimits

0x7bef,	// (0x0008b516) vid6_image_uncrop_nhd_pane

0x7bfe,	// (0x0008b525) vid6_image_uncrop_vga_pane_ParamLimits

0x7bfe,	// (0x0008b525) vid6_image_uncrop_vga_pane

0x7c0d,	// (0x0008b534) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c0d,	// (0x0008b534) vid6_image_uncrop_wvga_pane

0x7c1c,	// (0x0008b543) vid6_indi_pane_ParamLimits

0x7c1c,	// (0x0008b543) vid6_indi_pane

0xbbf7,	// (0x0008f51e) bg_tb_trans_pane_cp09_ParamLimits

0xbbf7,	// (0x0008f51e) bg_tb_trans_pane_cp09

0xd493,	// (0x00090dba) cam6_battery_pane_cp_ParamLimits

0xd493,	// (0x00090dba) cam6_battery_pane_cp

0xd49f,	// (0x00090dc6) vid6_indi_pane_g1_ParamLimits

0xd49f,	// (0x00090dc6) vid6_indi_pane_g1

0xd4b1,	// (0x00090dd8) vid6_indi_pane_g2_ParamLimits

0xd4b1,	// (0x00090dd8) vid6_indi_pane_g2

0xd4c3,	// (0x00090dea) vid6_indi_pane_g3_ParamLimits

0xd4c3,	// (0x00090dea) vid6_indi_pane_g3

0xd4d8,	// (0x00090dff) vid6_indi_pane_g4_ParamLimits

0xd4d8,	// (0x00090dff) vid6_indi_pane_g4

0xd4ed,	// (0x00090e14) vid6_indi_pane_g5_ParamLimits

0xd4ed,	// (0x00090e14) vid6_indi_pane_g5

0x0004,

0xface,	// (0x000933f5) vid6_indi_pane_g_ParamLimits

0xface,	// (0x000933f5) vid6_indi_pane_g

0xd507,	// (0x00090e2e) vid6_indi_pane_t1_ParamLimits

0xd507,	// (0x00090e2e) vid6_indi_pane_t1

0xd51d,	// (0x00090e44) vid6_indi_pane_t2_ParamLimits

0xd51d,	// (0x00090e44) vid6_indi_pane_t2

0xd545,	// (0x00090e6c) vid6_indi_pane_t3_ParamLimits

0xd545,	// (0x00090e6c) vid6_indi_pane_t3

0xd56d,	// (0x00090e94) vid6_indi_pane_t4_ParamLimits

0xd56d,	// (0x00090e94) vid6_indi_pane_t4

0x0003,

0xfad9,	// (0x00093400) vid6_indi_pane_t_ParamLimits

0xfad9,	// (0x00093400) vid6_indi_pane_t

0xd591,	// (0x00090eb8) wait_bar_pane_cp08

0x7c34,	// (0x0008b55b) main_cset_text2_pane_t1_ParamLimits

0x7c34,	// (0x0008b55b) main_cset_text2_pane_t1

0x7bac,	// (0x0008b4d3) listscroll_gen_pane_cp06_t1_ParamLimits

0x7bac,	// (0x0008b4d3) listscroll_gen_pane_cp06_t1

0xedc5,	// (0x000926ec) main_cam6_set_pane

0x171f,	// (0x00085046) bg_tb_trans_pane_cp06_ParamLimits

0xcb6d,	// (0x00090494) cam4_indicators_pane_g1_ParamLimits

0xcb7e,	// (0x000904a5) cam4_indicators_pane_g2_ParamLimits

0xf851,	// (0x00093178) cam4_indicators_pane_g_ParamLimits

0xcb96,	// (0x000904bd) cam4_indicators_pane_t1_ParamLimits

0xedcf,	// (0x000926f6) bg_tb_trans_pane_cp07_ParamLimits

0xcbc0,	// (0x000904e7) vid4_indicators_pane_g1_ParamLimits

0xcbd4,	// (0x000904fb) vid4_indicators_pane_g2_ParamLimits

0xcbe8,	// (0x0009050f) vid4_indicators_pane_g3_ParamLimits

0xcbf9,	// (0x00090520) vid4_indicators_pane_g4_ParamLimits

0xf863,	// (0x0009318a) vid4_indicators_pane_g_ParamLimits

0xcc15,	// (0x0009053c) vid4_indicators_pane_t1_ParamLimits

0xe56d,	// (0x00091e94) vid4_progress_pane_g1_ParamLimits

0xe57d,	// (0x00091ea4) vid4_progress_pane_g2_ParamLimits

0x7746,	// (0x0008b06d) vid4_progress_pane_g3_ParamLimits

0xe58d,	// (0x00091eb4) vid4_progress_pane_g4_ParamLimits

0xfa0a,	// (0x00093331) vid4_progress_pane_g_ParamLimits

0x7758,	// (0x0008b07f) vid4_progress_pane_t1_ParamLimits

0xe5a5,	// (0x00091ecc) vid4_progress_pane_t2_ParamLimits

0xe5ba,	// (0x00091ee1) vid4_progress_pane_t3_ParamLimits

0xfa15,	// (0x0009333c) vid4_progress_pane_t_ParamLimits

0x776e,	// (0x0008b095) wait_bar_pane_cp07_ParamLimits

0x7c52,	// (0x0008b579) main_cam6_set_pane_g2_ParamLimits

0x7c52,	// (0x0008b579) main_cam6_set_pane_g2

0x7c76,	// (0x0008b59d) main_cset6_listscroll_pane_ParamLimits

0x7c76,	// (0x0008b59d) main_cset6_listscroll_pane

0x7c92,	// (0x0008b5b9) main_cset6_slider_pane_ParamLimits

0x7c92,	// (0x0008b5b9) main_cset6_slider_pane

0x7ca8,	// (0x0008b5cf) main_cset6_text2_pane_ParamLimits

0x7ca8,	// (0x0008b5cf) main_cset6_text2_pane

0xd5a0,	// (0x00090ec7) main_cset6_text_pane

0xd5a8,	// (0x00090ecf) main_cset_list_pane_copy1_ParamLimits

0xd5a8,	// (0x00090ecf) main_cset_list_pane_copy1

0xd5b8,	// (0x00090edf) scroll_pane_cp028_copy1

0x7cb6,	// (0x0008b5dd) cset_list_set_pane_copy1

0x7cc8,	// (0x0008b5ef) aid_position_infowindow_above_copy1

0x7cd0,	// (0x0008b5f7) aid_position_infowindow_below_copy1

0xe5e6,	// (0x00091f0d) cset_list_set_pane_g1_copy1

0xd5c1,	// (0x00090ee8) cset_list_set_pane_g3_copy1_ParamLimits

0xd5c1,	// (0x00090ee8) cset_list_set_pane_g3_copy1

0xd5d0,	// (0x00090ef7) cset_list_set_pane_t1_copy1_ParamLimits

0xd5d0,	// (0x00090ef7) cset_list_set_pane_t1_copy1

0xedcf,	// (0x000926f6) list_highlight_pane_cp021_copy1_ParamLimits

0xedcf,	// (0x000926f6) list_highlight_pane_cp021_copy1

0xd5e5,	// (0x00090f0c) cset6_slider_pane_ParamLimits

0xd5e5,	// (0x00090f0c) cset6_slider_pane

0xd611,	// (0x00090f38) main_cset6_slider_pane_g1_ParamLimits

0xd611,	// (0x00090f38) main_cset6_slider_pane_g1

0x7cd8,	// (0x0008b5ff) main_cset6_slider_pane_g2_ParamLimits

0x7cd8,	// (0x0008b5ff) main_cset6_slider_pane_g2

0xd639,	// (0x00090f60) main_cset6_slider_pane_g3_ParamLimits

0xd639,	// (0x00090f60) main_cset6_slider_pane_g3

0x7d00,	// (0x0008b627) main_cset6_slider_pane_g4_ParamLimits

0x7d00,	// (0x0008b627) main_cset6_slider_pane_g4

0xd645,	// (0x00090f6c) main_cset6_slider_pane_g5_ParamLimits

0xd645,	// (0x00090f6c) main_cset6_slider_pane_g5

0xcdcb,	// (0x000906f2) main_cset6_slider_pane_g7_ParamLimits

0xcdcb,	// (0x000906f2) main_cset6_slider_pane_g7

0xcdd7,	// (0x000906fe) main_cset6_slider_pane_g8_ParamLimits

0xcdd7,	// (0x000906fe) main_cset6_slider_pane_g8

0x6f28,	// (0x0008a84f) main_cset6_slider_pane_g9_ParamLimits

0x6f28,	// (0x0008a84f) main_cset6_slider_pane_g9

0x6f34,	// (0x0008a85b) main_cset6_slider_pane_g10_ParamLimits

0x6f34,	// (0x0008a85b) main_cset6_slider_pane_g10

0x6f40,	// (0x0008a867) main_cset6_slider_pane_g11_ParamLimits

0x6f40,	// (0x0008a867) main_cset6_slider_pane_g11

0x6f4c,	// (0x0008a873) main_cset6_slider_pane_g12_ParamLimits

0x6f4c,	// (0x0008a873) main_cset6_slider_pane_g12

0x6f58,	// (0x0008a87f) main_cset6_slider_pane_g13_ParamLimits

0x6f58,	// (0x0008a87f) main_cset6_slider_pane_g13

0x6f64,	// (0x0008a88b) main_cset6_slider_pane_g14_ParamLimits

0x6f64,	// (0x0008a88b) main_cset6_slider_pane_g14

0x7d0c,	// (0x0008b633) main_cset6_slider_pane_g15_ParamLimits

0x7d0c,	// (0x0008b633) main_cset6_slider_pane_g15

0xcde3,	// (0x0009070a) main_cset6_slider_pane_g16_ParamLimits

0xcde3,	// (0x0009070a) main_cset6_slider_pane_g16

0xcdef,	// (0x00090716) main_cset6_slider_pane_g17_ParamLimits

0xcdef,	// (0x00090716) main_cset6_slider_pane_g17

0x0011,

0xfae2,	// (0x00093409) main_cset6_slider_pane_g_ParamLimits

0xfae2,	// (0x00093409) main_cset6_slider_pane_g

0xd651,	// (0x00090f78) main_cset6_slider_pane_t1_ParamLimits

0xd651,	// (0x00090f78) main_cset6_slider_pane_t1

0x7d3c,	// (0x0008b663) main_cset6_slider_pane_t2_ParamLimits

0x7d3c,	// (0x0008b663) main_cset6_slider_pane_t2

0x7d67,	// (0x0008b68e) main_cset6_slider_pane_t3_ParamLimits

0x7d67,	// (0x0008b68e) main_cset6_slider_pane_t3

0x7d92,	// (0x0008b6b9) main_cset6_slider_pane_t4_ParamLimits

0x7d92,	// (0x0008b6b9) main_cset6_slider_pane_t4

0x7dbd,	// (0x0008b6e4) main_cset6_slider_pane_t5_ParamLimits

0x7dbd,	// (0x0008b6e4) main_cset6_slider_pane_t5

0xd692,	// (0x00090fb9) main_cset6_slider_pane_t7_ParamLimits

0xd692,	// (0x00090fb9) main_cset6_slider_pane_t7

0x7de8,	// (0x0008b70f) main_cset6_slider_pane_t8_ParamLimits

0x7de8,	// (0x0008b70f) main_cset6_slider_pane_t8

0x7e0c,	// (0x0008b733) main_cset6_slider_pane_t9_ParamLimits

0x7e0c,	// (0x0008b733) main_cset6_slider_pane_t9

0x7e30,	// (0x0008b757) main_cset6_slider_pane_t10_ParamLimits

0x7e30,	// (0x0008b757) main_cset6_slider_pane_t10

0x7e54,	// (0x0008b77b) main_cset6_slider_pane_t11_ParamLimits

0x7e54,	// (0x0008b77b) main_cset6_slider_pane_t11

0xd6c8,	// (0x00090fef) main_cset6_slider_pane_t14_ParamLimits

0xd6c8,	// (0x00090fef) main_cset6_slider_pane_t14

0xd701,	// (0x00091028) main_cset6_slider_pane_t15_ParamLimits

0xd701,	// (0x00091028) main_cset6_slider_pane_t15

0x000b,

0xfb07,	// (0x0009342e) main_cset6_slider_pane_t_ParamLimits

0xfb07,	// (0x0009342e) main_cset6_slider_pane_t

0xc6c2,	// (0x0008ffe9) cset_slider_pane_g1_copy1

0xceb1,	// (0x000907d8) cset_slider_pane_g2_copy1

0xceba,	// (0x000907e1) cset_slider_pane_g3_copy1

0xedc5,	// (0x000926ec) bg_popup_sub_pane_cp011_copy1

0xd743,	// (0x0009106a) main_cset_text_pane_g1_copy1

0xcf43,	// (0x0009086a) main_cset_text_pane_t1_copy1

0xcf51,	// (0x00090878) main_cset_text_pane_t2_copy1

0xcf5f,	// (0x00090886) main_cset_text_pane_t3_copy1

0xcf6d,	// (0x00090894) main_cset_text_pane_t4_copy1

0xcf7b,	// (0x000908a2) main_cset_text_pane_t5_copy1

0xd74b,	// (0x00091072) main_cset_text_pane_t6_copy1

0xd759,	// (0x00091080) main_cset_text_pane_t7_copy1

0x7c34,	// (0x0008b55b) main_cset_text2_pane_t1_copy1

0xedcf,	// (0x000926f6) main_ncimui_pane

0x4f88,	// (0x000888af) popup_query_ncimui_window_ParamLimits

0x4f88,	// (0x000888af) popup_query_ncimui_window

0xc252,	// (0x0008fb79) field_cale_ev2_pane_g4_ParamLimits

0xc252,	// (0x0008fb79) field_cale_ev2_pane_g4

0x6174,	// (0x00089a9b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6174,	// (0x00089a9b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7eb,	// (0x00093112) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7eb,	// (0x00093112) cell_video_dialer_keypad_pane_g

0x618c,	// (0x00089ab3) cell_video_dialer_keypad_pane_t1

0xedc5,	// (0x000926ec) bg_popup_window_pane_cp012

0xb9de,	// (0x0008f305) heading_pane_cp06

0xd785,	// (0x000910ac) ncim_query_content_pane

0xedc5,	// (0x000926ec) bg_popup_heading_pane_cp01

0xd78d,	// (0x000910b4) ncim_heading_pane_t1

0xd79b,	// (0x000910c2) ncim_indicator_popup_pane

0xd7ad,	// (0x000910d4) ncim_query_button_pane

0xd7c1,	// (0x000910e8) ncim_query_content_pane_t1

0xd7d3,	// (0x000910fa) ncim_query_content_pane_t2

0x0005,

0xfb4b,	// (0x00093472) ncim_query_content_pane_t

0xd80d,	// (0x00091134) ncim_query_list_pane

0xd81f,	// (0x00091146) ncim_query_popup_pane

0xd79b,	// (0x000910c2) ncim_indicator_popup_pane_ParamLimits

0x7fa1,	// (0x0008b8c8) ncim_query_content_pane_g1_ParamLimits

0x7fa1,	// (0x0008b8c8) ncim_query_content_pane_g1

0xd7c1,	// (0x000910e8) ncim_query_content_pane_t1_ParamLimits

0xd7d3,	// (0x000910fa) ncim_query_content_pane_t2_ParamLimits

0x7fad,	// (0x0008b8d4) ncim_query_content_pane_t3_ParamLimits

0x7fad,	// (0x0008b8d4) ncim_query_content_pane_t3

0x7fd5,	// (0x0008b8fc) ncim_query_content_pane_t4_ParamLimits

0x7fd5,	// (0x0008b8fc) ncim_query_content_pane_t4

0x7ffd,	// (0x0008b924) ncim_query_content_pane_t5_ParamLimits

0x7ffd,	// (0x0008b924) ncim_query_content_pane_t5

0xd7e5,	// (0x0009110c) ncim_query_content_pane_t6_ParamLimits

0xd7e5,	// (0x0009110c) ncim_query_content_pane_t6

0xfb4b,	// (0x00093472) ncim_query_content_pane_t_ParamLimits

0xd80d,	// (0x00091134) ncim_query_list_pane_ParamLimits

0xd81f,	// (0x00091146) ncim_query_popup_pane_ParamLimits

0xd833,	// (0x0009115a) wait_bar_pane_cp04

0xedc5,	// (0x000926ec) input_focus_pane_cp011

0xd83b,	// (0x00091162) ncim_query_popup_pane_t1

0xd849,	// (0x00091170) ncim_list_query_list_pane_ParamLimits

0xd849,	// (0x00091170) ncim_list_query_list_pane

0xedc5,	// (0x000926ec) bg_button_pane_cp027

0xd856,	// (0x0009117d) ncim_query_button_pane_g1

0xedc5,	// (0x000926ec) list_highlight_pane_cp012

0xd860,	// (0x00091187) ncim_list_query_list_pane_g1

0xd868,	// (0x0009118f) ncim_list_query_list_pane_t1

0xcb8a,	// (0x000904b1) cam4_indicators_pane_g3_ParamLimits

0xcb8a,	// (0x000904b1) cam4_indicators_pane_g3

0xcc05,	// (0x0009052c) vid4_indicators_pane_g5_ParamLimits

0xcc05,	// (0x0009052c) vid4_indicators_pane_g5

0xe599,	// (0x00091ec0) vid4_progress_pane_g5_ParamLimits

0xe599,	// (0x00091ec0) vid4_progress_pane_g5

0x7e8c,	// (0x0008b7b3) main_ncimui_pane_g1

0x7ef5,	// (0x0008b81c) ncimui_group_query_pane_ParamLimits

0x7ef5,	// (0x0008b81c) ncimui_group_query_pane

0x7f3d,	// (0x0008b864) ncimui_list_pane_ParamLimits

0x7f3d,	// (0x0008b864) ncimui_list_pane

0x7f64,	// (0x0008b88b) ncimui_text_pane_ParamLimits

0x7f64,	// (0x0008b88b) ncimui_text_pane

0x8025,	// (0x0008b94c) ncimui_text_pane_t1_ParamLimits

0x8025,	// (0x0008b94c) ncimui_text_pane_t1

0xd876,	// (0x0009119d) ncimui_list_single_graphic_pane_ParamLimits

0xd876,	// (0x0009119d) ncimui_list_single_graphic_pane

0x8043,	// (0x0008b96a) ncimui_query_pane_ParamLimits

0x8043,	// (0x0008b96a) ncimui_query_pane

0xedc5,	// (0x000926ec) list_highlight_pane_cp013

0xd886,	// (0x000911ad) ncim_list_query_list_pane_t1_copy1

0xd894,	// (0x000911bb) ncim_list_single_graphic_pane_g1

0x8056,	// (0x0008b97d) ncim_query_button_pane_cp01

0x8062,	// (0x0008b989) ncim_query_entry_pane_ParamLimits

0x8062,	// (0x0008b989) ncim_query_entry_pane

0x8075,	// (0x0008b99c) ncimui_query_pane_g1

0x8081,	// (0x0008b9a8) ncimui_query_pane_t1_ParamLimits

0x8081,	// (0x0008b9a8) ncimui_query_pane_t1

0xedcf,	// (0x000926f6) input_focus_pane_cp012

0xd89c,	// (0x000911c3) ncim_query_entry_pane_t1

0x18f5,	// (0x0008521c) main_im_pane_ParamLimits

0xedcf,	// (0x000926f6) main_mobtv_pane_ParamLimits

0xedcf,	// (0x000926f6) main_mobtv_pane

0x7d24,	// (0x0008b64b) main_cset6_slider_pane_g18_ParamLimits

0x7d24,	// (0x0008b64b) main_cset6_slider_pane_g18

0x7d30,	// (0x0008b657) main_cset6_slider_pane_g19_ParamLimits

0x7d30,	// (0x0008b657) main_cset6_slider_pane_g19

0x173b,	// (0x00085062) bg_main_mobtv_pane_ParamLimits

0x173b,	// (0x00085062) bg_main_mobtv_pane

0x809a,	// (0x0008b9c1) main_mobtv_info_pane

0x80a3,	// (0x0008b9ca) main_mobtv_loading_pane_ParamLimits

0x80a3,	// (0x0008b9ca) main_mobtv_loading_pane

0xd8ae,	// (0x000911d5) main_mobtv_pg_channel_list_pane

0xd8b8,	// (0x000911df) main_mobtv_pg_hdr_pane

0x80b0,	// (0x0008b9d7) main_mobtv_programe_curr_pane_ParamLimits

0x80b0,	// (0x0008b9d7) main_mobtv_programe_curr_pane

0x80bd,	// (0x0008b9e4) main_mobtv_programe_next_pane_ParamLimits

0x80bd,	// (0x0008b9e4) main_mobtv_programe_next_pane

0xd8c1,	// (0x000911e8) popup_mobtv_noti_window

0x23af,	// (0x00085cd6) main_tv_pg_hdr_pane_g1

0xd8c9,	// (0x000911f0) main_tv_pg_hdr_pane_g2

0xd8d1,	// (0x000911f8) main_tv_pg_hdr_pane_g3

0xd8d9,	// (0x00091200) main_tv_pg_hdr_pane_g4

0xd8e1,	// (0x00091208) main_tv_pg_hdr_pane_g5

0xd8eb,	// (0x00091212) main_tv_pg_hdr_pane_g6

0xd8f5,	// (0x0009121c) main_tv_pg_hdr_pane_g7

0xd8ff,	// (0x00091226) main_tv_pg_hdr_pane_g8

0xd909,	// (0x00091230) main_tv_pg_hdr_pane_g9

0xd913,	// (0x0009123a) main_tv_pg_hdr_pane_g10

0xd91d,	// (0x00091244) main_tv_pg_hdr_pane_g11

0x000a,

0xfb58,	// (0x0009347f) main_tv_pg_hdr_pane_g

0xd927,	// (0x0009124e) main_tv_pg_hdr_pane_t1

0xd935,	// (0x0009125c) main_tv_pg_hdr_pane_t2

0xd943,	// (0x0009126a) main_tv_pg_hdr_pane_t3

0xd953,	// (0x0009127a) main_tv_pg_hdr_pane_t4

0xd963,	// (0x0009128a) main_tv_pg_hdr_pane_t5

0x0004,

0xfb6f,	// (0x00093496) main_tv_pg_hdr_pane_t

0xd973,	// (0x0009129a) single_mobtv_pg_channel_pane_ParamLimits

0xd973,	// (0x0009129a) single_mobtv_pg_channel_pane

0xd985,	// (0x000912ac) single_mobtv_pg_channel_table_pane

0x34c7,	// (0x00086dee) single_mobtv_pg_channel_thumb_pane

0xd98e,	// (0x000912b5) single_tv_pg_channel_pane_g1

0xd997,	// (0x000912be) single_tv_pg_channel_pane_g2

0x0001,

0xfb7a,	// (0x000934a1) single_tv_pg_channel_pane_g

0x171f,	// (0x00085046) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x171f,	// (0x00085046) bg_single_mobtv_pg_channel_thumb_pane

0xd9a0,	// (0x000912c7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd9a0,	// (0x000912c7) single_mobtv_pg_channel_thumb_pane_g1

0xd9ae,	// (0x000912d5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd9ae,	// (0x000912d5) single_mobtv_pg_channel_thumb_pane_g2

0xd9ba,	// (0x000912e1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd9ba,	// (0x000912e1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb7f,	// (0x000934a6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb7f,	// (0x000934a6) single_mobtv_pg_channel_thumb_pane_g

0xd9c6,	// (0x000912ed) single_mobtv_pg_channel_thumb_pane_t1

0xd9d4,	// (0x000912fb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb86,	// (0x000934ad) single_mobtv_pg_channel_thumb_pane_t

0x23af,	// (0x00085cd6) bg_single_mobtv_pg_channel_table_pane_g1

0x23af,	// (0x00085cd6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x00092cbf) bg_single_mobtv_pg_channel_table_pane_g

0xd9e2,	// (0x00091309) single_mobtv_pg_channel_table_pane_t1

0xd9f0,	// (0x00091317) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb8b,	// (0x000934b2) single_mobtv_pg_channel_table_pane_t

0x80d2,	// (0x0008b9f9) main_mobtv_info_pane_g1_ParamLimits

0x80d2,	// (0x0008b9f9) main_mobtv_info_pane_g1

0x80f0,	// (0x0008ba17) main_mobtv_info_pane_t1_ParamLimits

0x80f0,	// (0x0008ba17) main_mobtv_info_pane_t1

0x8168,	// (0x0008ba8f) main_mobtv_info_pane_t2_ParamLimits

0x8168,	// (0x0008ba8f) main_mobtv_info_pane_t2

0x0002,

0xfb95,	// (0x000934bc) main_mobtv_info_pane_t_ParamLimits

0xfb95,	// (0x000934bc) main_mobtv_info_pane_t

0x81f7,	// (0x0008bb1e) wait_bar_pane_cp05

0x8209,	// (0x0008bb30) main_mobtv_loading_pane_g1_ParamLimits

0x8209,	// (0x0008bb30) main_mobtv_loading_pane_g1

0x821c,	// (0x0008bb43) main_mobtv_loading_pane_g2_ParamLimits

0x821c,	// (0x0008bb43) main_mobtv_loading_pane_g2

0x8228,	// (0x0008bb4f) main_mobtv_loading_pane_g3_ParamLimits

0x8228,	// (0x0008bb4f) main_mobtv_loading_pane_g3

0x0002,

0xfb9c,	// (0x000934c3) main_mobtv_loading_pane_g_ParamLimits

0xfb9c,	// (0x000934c3) main_mobtv_loading_pane_g

0xd9fe,	// (0x00091325) main_mobtv_loading_pane_t1_ParamLimits

0xd9fe,	// (0x00091325) main_mobtv_loading_pane_t1

0xda16,	// (0x0009133d) main_mobtv_loading_pane_t2_ParamLimits

0xda16,	// (0x0009133d) main_mobtv_loading_pane_t2

0x0001,

0xfba3,	// (0x000934ca) main_mobtv_loading_pane_t_ParamLimits

0xfba3,	// (0x000934ca) main_mobtv_loading_pane_t

0x823b,	// (0x0008bb62) wait_bar_pane_cp06_ParamLimits

0x823b,	// (0x0008bb62) wait_bar_pane_cp06

0xda3a,	// (0x00091361) main_mobtv_programe_curr_pane_t1

0xda48,	// (0x0009136f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfba8,	// (0x000934cf) main_mobtv_programe_curr_pane_t

0xda56,	// (0x0009137d) main_mobtv_programe_next_pane_t1

0xda64,	// (0x0009138b) main_mobtv_programe_next_pane_t2

0xda72,	// (0x00091399) main_mobtv_programe_next_pane_t3

0x0002,

0xfbad,	// (0x000934d4) main_mobtv_programe_next_pane_t

0xedc5,	// (0x000926ec) bg_popup_mobtv_noti_window_pane

0xda80,	// (0x000913a7) popup_mobtv_noti_window_g1

0xda88,	// (0x000913af) popup_mobtv_noti_window_t1

0xda96,	// (0x000913bd) popup_mobtv_noti_window_t2

0x0001,

0xfbb4,	// (0x000934db) popup_mobtv_noti_window_t

0x23af,	// (0x00085cd6) bg_popup_mobtv_noti_window_pane_g1

0xedc5,	// (0x000926ec) sc_clock_pane

0xedc5,	// (0x000926ec) main_fs_bigclock_pane

0x797b,	// (0x0008b2a2) blid2_tripm_pane_t4_ParamLimits

0x797b,	// (0x0008b2a2) blid2_tripm_pane_t4

0x824a,	// (0x0008bb71) sc_clock_pane_g1_ParamLimits

0x824a,	// (0x0008bb71) sc_clock_pane_g1

0x825c,	// (0x0008bb83) sc_clock_pane_t1_ParamLimits

0x825c,	// (0x0008bb83) sc_clock_pane_t1

0x827e,	// (0x0008bba5) sc_clock_pane_t2_ParamLimits

0x827e,	// (0x0008bba5) sc_clock_pane_t2

0x8296,	// (0x0008bbbd) sc_clock_pane_t3_ParamLimits

0x8296,	// (0x0008bbbd) sc_clock_pane_t3

0x0004,

0xfbb9,	// (0x000934e0) sc_clock_pane_t_ParamLimits

0xfbb9,	// (0x000934e0) sc_clock_pane_t

0x8c71,	// (0x0008c598) main_fs_bigclock_indicator_pane_ParamLimits

0x8c71,	// (0x0008c598) main_fs_bigclock_indicator_pane

0x833c,	// (0x0008bc63) main_fs_bigclock_pane_g1_ParamLimits

0x833c,	// (0x0008bc63) main_fs_bigclock_pane_g1

0x8c7d,	// (0x0008c5a4) main_fs_bigclock_pane_t1_ParamLimits

0x8c7d,	// (0x0008c5a4) main_fs_bigclock_pane_t1

0x8c8f,	// (0x0008c5b6) main_fs_bigclock_pane_t2_ParamLimits

0x8c8f,	// (0x0008c5b6) main_fs_bigclock_pane_t2

0x8ca3,	// (0x0008c5ca) main_fs_bigclock_pane_t3_ParamLimits

0x8ca3,	// (0x0008c5ca) main_fs_bigclock_pane_t3

0x0002,

0xfd4a,	// (0x00093671) main_fs_bigclock_pane_t_ParamLimits

0xfd4a,	// (0x00093671) main_fs_bigclock_pane_t

0xe744,	// (0x0009206b) main_fs_bigclock_indicator_pane_g1

0xd7b5,	// (0x000910dc) ncim_query_content_pane_g2_ParamLimits

0xd7b5,	// (0x000910dc) ncim_query_content_pane_g2

0x0001,

0xfb46,	// (0x0009346d) ncim_query_content_pane_g_ParamLimits

0xfb46,	// (0x0009346d) ncim_query_content_pane_g

0x82af,	// (0x0008bbd6) sc_clock_pane_t4_ParamLimits

0x82af,	// (0x0008bbd6) sc_clock_pane_t4

0xedcf,	// (0x000926f6) main_radioblah_pane

0xcac1,	// (0x000903e8) cell_call4_button_pane_t1_copy1_ParamLimits

0xcac1,	// (0x000903e8) cell_call4_button_pane_t1_copy1

0x7ea4,	// (0x0008b7cb) main_ncimui_pane_t1_ParamLimits

0x7ea4,	// (0x0008b7cb) main_ncimui_pane_t1

0x7ebe,	// (0x0008b7e5) main_ncimui_pane_t2_ParamLimits

0x7ebe,	// (0x0008b7e5) main_ncimui_pane_t2

0x0002,

0xfb3f,	// (0x00093466) main_ncimui_pane_t_ParamLimits

0xfb3f,	// (0x00093466) main_ncimui_pane_t

0xdbdc,	// (0x00091503) main_radioblah_anim_pane_ParamLimits

0xdbdc,	// (0x00091503) main_radioblah_anim_pane

0xdbed,	// (0x00091514) main_radioblah_info_pane_ParamLimits

0xdbed,	// (0x00091514) main_radioblah_info_pane

0xdc01,	// (0x00091528) main_radioblah_pane_t1_ParamLimits

0xdc01,	// (0x00091528) main_radioblah_pane_t1

0xdc1d,	// (0x00091544) main_radioblah_pane_t2_ParamLimits

0xdc1d,	// (0x00091544) main_radioblah_pane_t2

0x0003,

0xfbda,	// (0x00093501) main_radioblah_pane_t_ParamLimits

0xfbda,	// (0x00093501) main_radioblah_pane_t

0x839b,	// (0x0008bcc2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x839b,	// (0x0008bcc2) main_radioblah_rocker_ctrl_pane

0xdc65,	// (0x0009158c) main_radioblah_info_pane_t1_ParamLimits

0xdc65,	// (0x0009158c) main_radioblah_info_pane_t1

0x83f3,	// (0x0008bd1a) main_radioblah_info_pane_t2_ParamLimits

0x83f3,	// (0x0008bd1a) main_radioblah_info_pane_t2

0x0003,

0xfbe3,	// (0x0009350a) main_radioblah_info_pane_t_ParamLimits

0xfbe3,	// (0x0009350a) main_radioblah_info_pane_t

0x23af,	// (0x00085cd6) main_radioblah_rocker_ctrl_pane_g1

0x84a3,	// (0x0008bdca) main_radioblah_rocker_ctrl_pane_g2

0x84ab,	// (0x0008bdd2) main_radioblah_rocker_ctrl_pane_g3

0x84b3,	// (0x0008bdda) main_radioblah_rocker_ctrl_pane_g4

0x84bb,	// (0x0008bde2) main_radioblah_rocker_ctrl_pane_g5

0x84c3,	// (0x0008bdea) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbec,	// (0x00093513) main_radioblah_rocker_ctrl_pane_g

0x7c34,	// (0x0008b55b) main_cset_text2_pane_t1_copy1_ParamLimits

0xcb4b,	// (0x00090472) cam4_image_uncrop_qvga_pane

0xcbb0,	// (0x000904d7) vid4_image_uncrop_qcif_pane

0xe5d8,	// (0x00091eff) cam6_image_uncrop_qvga_pane_ParamLimits

0xe5d8,	// (0x00091eff) cam6_image_uncrop_qvga_pane

0xd483,	// (0x00090daa) vid6_image_uncrop_qcif_pane_ParamLimits

0xd483,	// (0x00090daa) vid6_image_uncrop_qcif_pane

0xedc5,	// (0x000926ec) bg_popup_preview_window_pane_cp03

0xd767,	// (0x0009108e) list_cset_text2_pane

0xd76f,	// (0x00091096) main_cset6_text2_pane_g1

0xd777,	// (0x0009109e) main_cset6_text2_pane_t1

0xdc9f,	// (0x000915c6) list_cset_text2_pane_t1_ParamLimits

0xdc9f,	// (0x000915c6) list_cset_text2_pane_t1

0xedcf,	// (0x000926f6) main_radioblah_pane_ParamLimits

0x81e3,	// (0x0008bb0a) main_mobtv_info_pane_t3_ParamLimits

0x81e3,	// (0x0008bb0a) main_mobtv_info_pane_t3

0x8389,	// (0x0008bcb0) main_radioblah_pane_g1

0x83c3,	// (0x0008bcea) main_radioblah_info_pane_g1

0x8448,	// (0x0008bd6f) main_radioblah_info_pane_t3_ParamLimits

0x8448,	// (0x0008bd6f) main_radioblah_info_pane_t3

0x3448,	// (0x00086d6f) highlight_cell_cale_month_pane_ParamLimits

0x3448,	// (0x00086d6f) highlight_cell_cale_month_pane

0xedc5,	// (0x000926ec) main_phob_fisheye_pane

0xc2f3,	// (0x0008fc1a) scroll_pane_cp0031_ParamLimits

0xc2f3,	// (0x0008fc1a) scroll_pane_cp0031

0xd591,	// (0x00090eb8) wait_bar_pane_cp08_ParamLimits

0x7cb6,	// (0x0008b5dd) cset_list_set_pane_copy1_ParamLimits

0xdcba,	// (0x000915e1) highlight_cell_cale_month_pane_g1

0x84cb,	// (0x0008bdf2) highlight_cell_cale_month_pane_t1

0xd20b,	// (0x00090b32) list_gen_pane_cp01

0xcdb6,	// (0x000906dd) scroll_pane_01

0x84d9,	// (0x0008be00) list_single_double_fisheye_pane

0xdcc2,	// (0x000915e9) list_double_fisheye_pane_g1_ParamLimits

0xdcc2,	// (0x000915e9) list_double_fisheye_pane_g1

0xdcce,	// (0x000915f5) list_double_fisheye_pane_g2_ParamLimits

0xdcce,	// (0x000915f5) list_double_fisheye_pane_g2

0x84e2,	// (0x0008be09) list_double_fisheye_pane_g3_ParamLimits

0x84e2,	// (0x0008be09) list_double_fisheye_pane_g3

0x0004,

0xfbf9,	// (0x00093520) list_double_fisheye_pane_g_ParamLimits

0xfbf9,	// (0x00093520) list_double_fisheye_pane_g

0x08ea,	// (0x00084211) list_double_fisheye_pane_t1_ParamLimits

0x08ea,	// (0x00084211) list_double_fisheye_pane_t1

0x0905,	// (0x0008422c) list_double_fisheye_pane_t2_ParamLimits

0x0905,	// (0x0008422c) list_double_fisheye_pane_t2

0x0001,

0xfc04,	// (0x0009352b) list_double_fisheye_pane_t_ParamLimits

0xfc04,	// (0x0009352b) list_double_fisheye_pane_t

0xedc5,	// (0x000926ec) main_call5_pane

0x82da,	// (0x0008bc01) sc_swipe_pane_ParamLimits

0x82da,	// (0x0008bc01) sc_swipe_pane

0x8501,	// (0x0008be28) call5_image_pane_ParamLimits

0x8501,	// (0x0008be28) call5_image_pane

0x851e,	// (0x0008be45) call5_swipe_1_pane_ParamLimits

0x851e,	// (0x0008be45) call5_swipe_1_pane

0x8531,	// (0x0008be58) call5_swipe_2_pane_ParamLimits

0x8531,	// (0x0008be58) call5_swipe_2_pane

0x855c,	// (0x0008be83) popup_call5_audio_first_window_ParamLimits

0x855c,	// (0x0008be83) popup_call5_audio_first_window

0x171f,	// (0x00085046) call5_swipe_1_pane_g1_ParamLimits

0x171f,	// (0x00085046) call5_swipe_1_pane_g1

0xdcff,	// (0x00091626) call5_swipe_1_pane_g2_ParamLimits

0xdcff,	// (0x00091626) call5_swipe_1_pane_g2

0x0001,

0xfc09,	// (0x00093530) call5_swipe_1_pane_g_ParamLimits

0xfc09,	// (0x00093530) call5_swipe_1_pane_g

0xdd0b,	// (0x00091632) call5_swipe_1_pane_t1_ParamLimits

0xdd0b,	// (0x00091632) call5_swipe_1_pane_t1

0x171f,	// (0x00085046) call5_swipe_2_pane_g1_ParamLimits

0x171f,	// (0x00085046) call5_swipe_2_pane_g1

0xdd20,	// (0x00091647) call5_swipe_2_pane_g2_ParamLimits

0xdd20,	// (0x00091647) call5_swipe_2_pane_g2

0x0001,

0xfc0e,	// (0x00093535) call5_swipe_2_pane_g_ParamLimits

0xfc0e,	// (0x00093535) call5_swipe_2_pane_g

0xdd2c,	// (0x00091653) call5_swipe_2_pane_t1_ParamLimits

0xdd2c,	// (0x00091653) call5_swipe_2_pane_t1

0xdd41,	// (0x00091668) sc_swipe_pane_g1_ParamLimits

0xdd41,	// (0x00091668) sc_swipe_pane_g1

0xdd4e,	// (0x00091675) sc_swipe_pane_g2_ParamLimits

0xdd4e,	// (0x00091675) sc_swipe_pane_g2

0x0001,

0xfc13,	// (0x0009353a) sc_swipe_pane_g_ParamLimits

0xfc13,	// (0x0009353a) sc_swipe_pane_g

0xdd5a,	// (0x00091681) sc_swipe_pane_t1_ParamLimits

0xdd5a,	// (0x00091681) sc_swipe_pane_t1

0xedc5,	// (0x000926ec) main_cmail_launcher_pane

0x856d,	// (0x0008be94) aid_size_cell_cmail_l_ParamLimits

0x856d,	// (0x0008be94) aid_size_cell_cmail_l

0x857b,	// (0x0008bea2) grid_cmail_l_pane_ParamLimits

0x857b,	// (0x0008bea2) grid_cmail_l_pane

0x8595,	// (0x0008bebc) cell_cmail_l_pane_ParamLimits

0x8595,	// (0x0008bebc) cell_cmail_l_pane

0xdd6f,	// (0x00091696) cell_cmail_l_pane_g1_ParamLimits

0xdd6f,	// (0x00091696) cell_cmail_l_pane_g1

0xdd7b,	// (0x000916a2) cell_cmail_l_pane_t1_ParamLimits

0xdd7b,	// (0x000916a2) cell_cmail_l_pane_t1

0xdd91,	// (0x000916b8) cell_cmail_l_pane_t2_ParamLimits

0xdd91,	// (0x000916b8) cell_cmail_l_pane_t2

0x0001,

0xfc18,	// (0x0009353f) cell_cmail_l_pane_t_ParamLimits

0xfc18,	// (0x0009353f) cell_cmail_l_pane_t

0xedcf,	// (0x000926f6) grid_highlight_pane_cp018_ParamLimits

0xedcf,	// (0x000926f6) grid_highlight_pane_cp018

0x0e7c,	// (0x000847a3) main2_pane_ParamLimits

0x0e7c,	// (0x000847a3) main2_pane

0x1b09,	// (0x00085430) popup_sp_fs_action_menu_bg_pane_g1

0x1b11,	// (0x00085438) popup_sp_fs_action_menu_bg_pane_g2

0x1b19,	// (0x00085440) popup_sp_fs_action_menu_bg_pane_g3

0x1b21,	// (0x00085448) popup_sp_fs_action_menu_bg_pane_g4

0x1b29,	// (0x00085450) popup_sp_fs_action_menu_bg_pane_g5

0x1b31,	// (0x00085458) popup_sp_fs_action_menu_bg_pane_g6

0x1b39,	// (0x00085460) popup_sp_fs_action_menu_bg_pane_g7

0x1b41,	// (0x00085468) popup_sp_fs_action_menu_bg_pane_g8

0x1b49,	// (0x00085470) popup_sp_fs_action_menu_bg_pane_g9

0x1b51,	// (0x00085478) popup_sp_fs_action_menu_bg_pane_g10

0x1b51,	// (0x00085478) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x00092a2c) popup_sp_fs_action_menu_bg_pane_g

0x171f,	// (0x00085046) list_medium_line_x2_t3_g3_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t3_g3_g1

0x171f,	// (0x00085046) list_medium_line_x2_t3_g3_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t3_g3_g2

0x171f,	// (0x00085046) list_medium_line_x2_t3_g3_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x00092ada) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x00092ada) list_medium_line_x2_t3_g3_g

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g3_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g3_t1

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g3_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g3_t2

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g3_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x00092ae1) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x00092ae1) list_medium_line_x2_t3_g3_t

0x171f,	// (0x00085046) list_medium_line_x2_t3_g2_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t3_g2_g1

0x171f,	// (0x00085046) list_medium_line_x2_t3_g2_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x00092ae8) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x00092ae8) list_medium_line_x2_t3_g2_g

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g2_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g2_t1

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g2_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g2_t2

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g2_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x00092ae1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x00092ae1) list_medium_line_x2_t3_g2_t

0x171f,	// (0x00085046) list_medium_line_x2_t4_g4_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t4_g4_g1

0x171f,	// (0x00085046) list_medium_line_x2_t4_g4_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t4_g4_g2

0x171f,	// (0x00085046) list_medium_line_x2_t4_g4_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t4_g4_g3

0x171f,	// (0x00085046) list_medium_line_x2_t4_g4_g4_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x00092aed) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x00092aed) list_medium_line_x2_t4_g4_g

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g4_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g4_t1

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g4_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g4_t2

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g4_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g4_t3

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g4_t4_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x00092af6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x00092af6) list_medium_line_x2_t4_g4_t

0x171f,	// (0x00085046) list_medium_line_x2_t2_g4_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t2_g4_g1

0x171f,	// (0x00085046) list_medium_line_x2_t2_g4_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t2_g4_g2

0x171f,	// (0x00085046) list_medium_line_x2_t2_g4_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t2_g4_g3

0x171f,	// (0x00085046) list_medium_line_x2_t2_g4_g4_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x00092aed) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x00092aed) list_medium_line_x2_t2_g4_g

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g4_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g4_t1

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g4_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x00092abd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x00092abd) list_medium_line_x2_t2_g4_t

0x171f,	// (0x00085046) list_medium_line_x2_t2_g3_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t2_g3_g1

0x171f,	// (0x00085046) list_medium_line_x2_t2_g3_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t2_g3_g2

0x171f,	// (0x00085046) list_medium_line_x2_t2_g3_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x00092ada) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x00092ada) list_medium_line_x2_t2_g3_g

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g3_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g3_t1

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g3_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x00092abd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x00092abd) list_medium_line_x2_t2_g3_t

0x37e4,	// (0x0008710b) main_sp_fs_list_pane_ParamLimits

0x37e4,	// (0x0008710b) main_sp_fs_list_pane

0xa794,	// (0x0008e0bb) sp_fs_scroll_pane_ParamLimits

0xa794,	// (0x0008e0bb) sp_fs_scroll_pane

0x37f0,	// (0x00087117) list_medium_line_x2_t3_t1

0x37f0,	// (0x00087117) list_medium_line_x2_t3_t2

0x37f0,	// (0x00087117) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x00092ba3) list_medium_line_x2_t3_t

0x37f0,	// (0x00087117) list_medium_line_x3_t4_t1

0x37f0,	// (0x00087117) list_medium_line_x3_t4_t2

0x37f0,	// (0x00087117) list_medium_line_x3_t4_t3

0x37f0,	// (0x00087117) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00092baa) list_medium_line_x3_t4_t

0x37f0,	// (0x00087117) list_medium_line_x4_t5_t1

0x37f0,	// (0x00087117) list_medium_line_x4_t5_t2

0x37f0,	// (0x00087117) list_medium_line_x4_t5_t3

0x37f0,	// (0x00087117) list_medium_line_x4_t5_t4

0x37f0,	// (0x00087117) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x00092bb3) list_medium_line_x4_t5_t

0x171f,	// (0x00085046) list_medium_line_t4_g4_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t4_g4_g1

0x171f,	// (0x00085046) list_medium_line_t4_g4_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t4_g4_g2

0x171f,	// (0x00085046) list_medium_line_t4_g4_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t4_g4_g3

0x171f,	// (0x00085046) list_medium_line_t4_g4_g4_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x00092aed) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x00092aed) list_medium_line_t4_g4_g

0x222b,	// (0x00085b52) list_medium_line_t4_g4_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t4_g4_t1

0x222b,	// (0x00085b52) list_medium_line_t4_g4_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t4_g4_t2

0x222b,	// (0x00085b52) list_medium_line_t4_g4_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t4_g4_t3

0x222b,	// (0x00085b52) list_medium_line_t4_g4_t4_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x00092af6) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x00092af6) list_medium_line_t4_g4_t

0x3b05,	// (0x0008742c) chi_dic_find_pane_g1

0x4d58,	// (0x0008867f) main_tport_pane

0x37f0,	// (0x00087117) list_medium_line_plain_t1

0x171f,	// (0x00085046) list_medium_line_t2_g2_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t2_g2_g1

0x171f,	// (0x00085046) list_medium_line_t2_g2_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x00092ae8) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x00092ae8) list_medium_line_t2_g2_g

0x222b,	// (0x00085b52) list_medium_line_t2_g2_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t2_g2_t1

0x222b,	// (0x00085b52) list_medium_line_t2_g2_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x00092abd) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x00092abd) list_medium_line_t2_g2_t

0xd214,	// (0x00090b3b) aid_sp_fs_list_icon_a_sm

0xe5d0,	// (0x00091ef7) aid_sp_fs_list_icon_d

0xd21c,	// (0x00090b43) aid_sp_fs_text_primary

0xee34,	// (0x0009275b) aid_sp_fs_text_secondary

0xedc5,	// (0x000926ec) list_medium_line

0xedc5,	// (0x000926ec) list_medium_line_g2

0xedc5,	// (0x000926ec) list_medium_line_g3

0xedc5,	// (0x000926ec) list_medium_line_plain

0xedc5,	// (0x000926ec) list_medium_line_plain_t2

0xedc5,	// (0x000926ec) list_medium_line_plain_t3

0xedc5,	// (0x000926ec) list_medium_line_right_icon

0xedc5,	// (0x000926ec) list_medium_line_right_iconx2

0xedc5,	// (0x000926ec) list_medium_line_t2

0xedc5,	// (0x000926ec) list_medium_line_t2_g2

0xedc5,	// (0x000926ec) list_medium_line_t2_g3

0xedc5,	// (0x000926ec) list_medium_line_t2_right_icon

0xedc5,	// (0x000926ec) list_medium_line_t2_right_iconx2

0xedc5,	// (0x000926ec) list_medium_line_t3

0xedc5,	// (0x000926ec) list_medium_line_t3_g2

0xedc5,	// (0x000926ec) list_medium_line_t3_g3

0xedc5,	// (0x000926ec) list_medium_line_t3_right_iconx2

0xedc5,	// (0x000926ec) list_medium_line_t4_g4

0xedc5,	// (0x000926ec) list_medium_line_x2

0xedc5,	// (0x000926ec) list_medium_line_x2_t2_g2

0xedc5,	// (0x000926ec) list_medium_line_x2_t2_g3

0xedc5,	// (0x000926ec) list_medium_line_x2_t2_g4

0xedc5,	// (0x000926ec) list_medium_line_x2_t3

0xedc5,	// (0x000926ec) list_medium_line_x2_t3_g2

0xedc5,	// (0x000926ec) list_medium_line_x2_t3_g3

0xedc5,	// (0x000926ec) list_medium_line_x2_t3_g4

0xedc5,	// (0x000926ec) list_medium_line_x2_t4_g2

0xedc5,	// (0x000926ec) list_medium_line_x2_t4_g4

0xedc5,	// (0x000926ec) list_medium_line_x3

0xedc5,	// (0x000926ec) list_medium_line_x3_t4

0xedc5,	// (0x000926ec) list_medium_line_x3_t4_g4

0xedc5,	// (0x000926ec) list_medium_line_x4_t4

0xedc5,	// (0x000926ec) list_medium_line_x4_t4_g7

0xedc5,	// (0x000926ec) list_medium_line_x4_t5

0x08b9,	// (0x000841e0) list_single_fs_dyc_pane_ParamLimits

0x08b9,	// (0x000841e0) list_single_fs_dyc_pane

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g1

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g2

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g3

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g4_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g4

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g5_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g5

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g6_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x4_t4_g7_g6

0x172d,	// (0x00085054) list_medium_line_x4_t4_g7_g7_ParamLimits

0x172d,	// (0x00085054) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb20,	// (0x00093447) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb20,	// (0x00093447) list_medium_line_x4_t4_g7_g

0x222b,	// (0x00085b52) list_medium_line_x4_t4_g7_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x4_t4_g7_t1

0x222b,	// (0x00085b52) list_medium_line_x4_t4_g7_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x4_t4_g7_t2

0x222b,	// (0x00085b52) list_medium_line_x4_t4_g7_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x4_t4_g7_t3

0x4072,	// (0x00087999) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4072,	// (0x00087999) list_medium_line_x4_t4_g7_t4

0x4072,	// (0x00087999) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4072,	// (0x00087999) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb2f,	// (0x00093456) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb2f,	// (0x00093456) list_medium_line_x4_t4_g7_t

0x08cd,	// (0x000841f4) list_single_dyc_row_pane_ParamLimits

0x08cd,	// (0x000841f4) list_single_dyc_row_pane

0x84ee,	// (0x0008be15) call5_gesture_pane_ParamLimits

0x84ee,	// (0x0008be15) call5_gesture_pane

0x8544,	// (0x0008be6b) call5_windows_pane_ParamLimits

0x8544,	// (0x0008be6b) call5_windows_pane

0x85af,	// (0x0008bed6) call5_swipe_1_pane_cp_ParamLimits

0x85af,	// (0x0008bed6) call5_swipe_1_pane_cp

0x85bb,	// (0x0008bee2) call5_swipe_2_pane_cp_ParamLimits

0x85bb,	// (0x0008bee2) call5_swipe_2_pane_cp

0x21c2,	// (0x00085ae9) call5_image_pane_cp

0x85c7,	// (0x0008beee) popup_call5_audio_first_window_cp_ParamLimits

0x85c7,	// (0x0008beee) popup_call5_audio_first_window_cp

0xdd41,	// (0x00091668) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd41,	// (0x00091668) call5_swipe_1_pane_g1_cp

0xddae,	// (0x000916d5) call5_swipe_1_pane_g2_cp

0xdd5a,	// (0x00091681) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd5a,	// (0x00091681) call5_swipe_1_pane_t1_cp

0xdd41,	// (0x00091668) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd41,	// (0x00091668) call5_swipe_2_pane_g1_cp

0xddb6,	// (0x000916dd) call5_swipe_2_pane_g2_cp

0xddbe,	// (0x000916e5) call5_swipe_2_pane_t1_cp_ParamLimits

0xddbe,	// (0x000916e5) call5_swipe_2_pane_t1_cp

0xedcf,	// (0x000926f6) main_sp_fs_email_pane

0xddd3,	// (0x000916fa) main_sp_fs_listscroll_pane_te

0x85d5,	// (0x0008befc) popup_sp_fs_action_menu_pane_ParamLimits

0x85d5,	// (0x0008befc) popup_sp_fs_action_menu_pane

0x23af,	// (0x00085cd6) bg_sp_fs_ctrlbar_pane_g1

0xdddc,	// (0x00091703) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdde5,	// (0x0009170c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xba57,	// (0x0008f37e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x23af,	// (0x00085cd6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc1d,	// (0x00093544) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbc05,	// (0x0008f52c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbc05,	// (0x0008f52c) bg_sp_fs_ctrlbar_ddmenu_pane

0xddee,	// (0x00091715) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xddee,	// (0x00091715) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xddfa,	// (0x00091721) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xddfa,	// (0x00091721) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc26,	// (0x0009354d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc26,	// (0x0009354d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde06,	// (0x0009172d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde06,	// (0x0009172d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x23af,	// (0x00085cd6) list_medium_line_t2_right_icon_g1

0x37f0,	// (0x00087117) list_medium_line_t2_right_icon_t1

0x37f0,	// (0x00087117) list_medium_line_t2_right_icon_t2

0x0001,

0xfc2b,	// (0x00093552) list_medium_line_t2_right_icon_t

0x4086,	// (0x000879ad) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4086,	// (0x000879ad) bg_sp_fs_ctrlbar_pane

0x865f,	// (0x0008bf86) main_sp_fs_ctrlbar_button_pane_cp01

0x8669,	// (0x0008bf90) main_sp_fs_ctrlbar_ddmenu_pane

0xde58,	// (0x0009177f) main_sp_fs_ctrlbar_pane_g1

0xde64,	// (0x0009178b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc30,	// (0x00093557) main_sp_fs_ctrlbar_pane_g

0x86a7,	// (0x0008bfce) main_sp_fs_ctrlbar_pane_t1

0x86e6,	// (0x0008c00d) main_sp_fs_ctrlbar_pane

0x870a,	// (0x0008c031) main_sp_fs_listscroll_pane_te_cp01

0x0927,	// (0x0008424e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0927,	// (0x0008424e) popup_sp_fs_action_menu_pane_cp01

0xedcf,	// (0x000926f6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xedcf,	// (0x000926f6) bg_sp_fs_highlight_list_pane_cp01

0xde8b,	// (0x000917b2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xde8b,	// (0x000917b2) sp_fs_action_menu_list_gene_pane_g1

0xde9a,	// (0x000917c1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xde9a,	// (0x000917c1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc3e,	// (0x00093565) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc3e,	// (0x00093565) sp_fs_action_menu_list_gene_pane_g

0xdea7,	// (0x000917ce) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdea7,	// (0x000917ce) sp_fs_action_menu_list_gene_pane_t1

0xdebf,	// (0x000917e6) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdebf,	// (0x000917e6) sp_fs_action_menu_list_gene_pane

0xdede,	// (0x00091805) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdede,	// (0x00091805) popup_sp_fs_action_menu_bg_pane

0xdeec,	// (0x00091813) sp_fs_action_menu_list_pane_ParamLimits

0xdeec,	// (0x00091813) sp_fs_action_menu_list_pane

0x094c,	// (0x00084273) sp_fs_scroll_pane_cp01_ParamLimits

0x094c,	// (0x00084273) sp_fs_scroll_pane_cp01

0x37f0,	// (0x00087117) list_medium_line_plain_t2_t1

0x37f0,	// (0x00087117) list_medium_line_plain_t2_t2

0x0001,

0xfc2b,	// (0x00093552) list_medium_line_plain_t2_t

0x37f0,	// (0x00087117) list_medium_line_plain_t3_t1

0x37f0,	// (0x00087117) list_medium_line_plain_t3_t2

0x37f0,	// (0x00087117) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x00092ba3) list_medium_line_plain_t3_t

0x171f,	// (0x00085046) list_medium_line_x2_t2_g2_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t2_g2_g1

0x171f,	// (0x00085046) list_medium_line_x2_t2_g2_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x00092ae8) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x00092ae8) list_medium_line_x2_t2_g2_g

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g2_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g2_t1

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g2_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x00092abd) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x00092abd) list_medium_line_x2_t2_g2_t

0x171f,	// (0x00085046) list_medium_line_x2_t4_g2_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t4_g2_g1

0x171f,	// (0x00085046) list_medium_line_x2_t4_g2_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x00092ae8) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x00092ae8) list_medium_line_x2_t4_g2_g

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g2_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g2_t1

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g2_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g2_t2

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g2_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g2_t3

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g2_t4_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x00092af6) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x00092af6) list_medium_line_x2_t4_g2_t

0x23af,	// (0x00085cd6) list_medium_line_t3_right_iconx2_g1

0x23af,	// (0x00085cd6) list_medium_line_t3_right_iconx2_g2

0x23af,	// (0x00085cd6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x00092cc4) list_medium_line_t3_right_iconx2_g

0x37f0,	// (0x00087117) list_medium_line_t3_right_iconx2_t1

0x37f0,	// (0x00087117) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc2b,	// (0x00093552) list_medium_line_t3_right_iconx2_t

0x171f,	// (0x00085046) list_medium_line_x3_t4_g4_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x3_t4_g4_g1

0x171f,	// (0x00085046) list_medium_line_x3_t4_g4_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x3_t4_g4_g2

0x171f,	// (0x00085046) list_medium_line_x3_t4_g4_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x3_t4_g4_g3

0x171f,	// (0x00085046) list_medium_line_x3_t4_g4_g4_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x00092aed) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x00092aed) list_medium_line_x3_t4_g4_g

0x222b,	// (0x00085b52) list_medium_line_x3_t4_g4_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x3_t4_g4_t1

0x222b,	// (0x00085b52) list_medium_line_x3_t4_g4_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x3_t4_g4_t2

0x222b,	// (0x00085b52) list_medium_line_x3_t4_g4_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x3_t4_g4_t3

0x222b,	// (0x00085b52) list_medium_line_x3_t4_g4_t4_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x00092af6) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x00092af6) list_medium_line_x3_t4_g4_t

0x0972,	// (0x00084299) list_single_dyc_row_text_pane_t1_ParamLimits

0x0972,	// (0x00084299) list_single_dyc_row_text_pane_t1

0x09bb,	// (0x000842e2) list_single_dyc_row_text_pane_t2_ParamLimits

0x09bb,	// (0x000842e2) list_single_dyc_row_text_pane_t2

0xdf0c,	// (0x00091833) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf0c,	// (0x00091833) list_single_dyc_row_text_pane_t3

0x0005,

0xfc43,	// (0x0009356a) list_single_dyc_row_text_pane_t_ParamLimits

0xfc43,	// (0x0009356a) list_single_dyc_row_text_pane_t

0xdf30,	// (0x00091857) list_single_dyc_row_pane_g1_ParamLimits

0xdf30,	// (0x00091857) list_single_dyc_row_pane_g1

0xdf3c,	// (0x00091863) list_single_dyc_row_pane_g2_ParamLimits

0xdf3c,	// (0x00091863) list_single_dyc_row_pane_g2

0xdf48,	// (0x0009186f) list_single_dyc_row_pane_g3_ParamLimits

0xdf48,	// (0x0009186f) list_single_dyc_row_pane_g3

0xdf54,	// (0x0009187b) list_single_dyc_row_pane_g4_ParamLimits

0xdf54,	// (0x0009187b) list_single_dyc_row_pane_g4

0x0003,

0xfc50,	// (0x00093577) list_single_dyc_row_pane_g_ParamLimits

0xfc50,	// (0x00093577) list_single_dyc_row_pane_g

0xdf60,	// (0x00091887) list_single_dyc_row_text_pane_ParamLimits

0xdf60,	// (0x00091887) list_single_dyc_row_text_pane

0xedc5,	// (0x000926ec) bg_sp_fs_scroll_pane

0xdf7f,	// (0x000918a6) thumb_sp_fs_scroll_pane

0x171f,	// (0x00085046) list_medium_line_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_g1

0x222b,	// (0x00085b52) list_medium_line_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t1

0x171f,	// (0x00085046) list_medium_line_x2_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_g1

0x171f,	// (0x00085046) list_medium_line_x2_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x00092ae8) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x00092ae8) list_medium_line_x2_g

0x222b,	// (0x00085b52) list_medium_line_x2_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t1

0x171f,	// (0x00085046) list_medium_line_x3_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x3_g1

0xdf88,	// (0x000918af) list_medium_line_x3_g2_ParamLimits

0xdf88,	// (0x000918af) list_medium_line_x3_g2

0x0001,

0xfc59,	// (0x00093580) list_medium_line_x3_g_ParamLimits

0xfc59,	// (0x00093580) list_medium_line_x3_g

0xdf96,	// (0x000918bd) list_medium_line_x3_t1_ParamLimits

0xdf96,	// (0x000918bd) list_medium_line_x3_t1

0xdfaa,	// (0x000918d1) thumb_sp_fs_scroll_pane_g1

0xdfb3,	// (0x000918da) thumb_sp_fs_scroll_pane_g2

0xdfbc,	// (0x000918e3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc5e,	// (0x00093585) thumb_sp_fs_scroll_pane_g

0xdfaa,	// (0x000918d1) bg_sp_fs_scroll_pane_g1

0xdfb3,	// (0x000918da) bg_sp_fs_scroll_pane_g2

0xdfbc,	// (0x000918e3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc5e,	// (0x00093585) bg_sp_fs_scroll_pane_g

0x171f,	// (0x00085046) list_medium_line_x2_t3_g4_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t3_g4_g1

0x171f,	// (0x00085046) list_medium_line_x2_t3_g4_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t3_g4_g2

0x171f,	// (0x00085046) list_medium_line_x2_t3_g4_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t3_g4_g3

0x171f,	// (0x00085046) list_medium_line_x2_t3_g4_g4_ParamLimits

0x171f,	// (0x00085046) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x00092aed) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x00092aed) list_medium_line_x2_t3_g4_g

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g4_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g4_t1

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g4_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g4_t2

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g4_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x00092ae1) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x00092ae1) list_medium_line_x2_t3_g4_t

0x171f,	// (0x00085046) list_medium_line_g2_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_g2_g1

0x171f,	// (0x00085046) list_medium_line_g2_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x00092ae8) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x00092ae8) list_medium_line_g2_g

0x222b,	// (0x00085b52) list_medium_line_g2_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_g2_t1

0x171f,	// (0x00085046) list_medium_line_t3_g2_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t3_g2_g1

0x171f,	// (0x00085046) list_medium_line_t3_g2_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x00092ae8) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x00092ae8) list_medium_line_t3_g2_g

0x222b,	// (0x00085b52) list_medium_line_t3_g2_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t3_g2_t1

0x222b,	// (0x00085b52) list_medium_line_t3_g2_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t3_g2_t2

0x222b,	// (0x00085b52) list_medium_line_t3_g2_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x00092ae1) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x00092ae1) list_medium_line_t3_g2_t

0x23af,	// (0x00085cd6) list_medium_line_right_icon_g1

0x37f0,	// (0x00087117) list_medium_line_right_icon_t1

0x171f,	// (0x00085046) list_medium_line_t2_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t2_g1

0x222b,	// (0x00085b52) list_medium_line_t2_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t2_t1

0x222b,	// (0x00085b52) list_medium_line_t2_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x00092abd) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x00092abd) list_medium_line_t2_t

0x171f,	// (0x00085046) list_medium_line_t3_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t3_g1

0x222b,	// (0x00085b52) list_medium_line_t3_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t3_t1

0x222b,	// (0x00085b52) list_medium_line_t3_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t3_t2

0x222b,	// (0x00085b52) list_medium_line_t3_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x00092ae1) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x00092ae1) list_medium_line_t3_t

0x171f,	// (0x00085046) list_medium_line_g3_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_g3_g1

0x171f,	// (0x00085046) list_medium_line_g3_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_g3_g2

0x171f,	// (0x00085046) list_medium_line_g3_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x00092ada) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x00092ada) list_medium_line_g3_g

0x222b,	// (0x00085b52) list_medium_line_g3_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_g3_t1

0x171f,	// (0x00085046) list_medium_line_t2_g3_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t2_g3_g1

0x171f,	// (0x00085046) list_medium_line_t2_g3_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t2_g3_g2

0x171f,	// (0x00085046) list_medium_line_t2_g3_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x00092ada) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x00092ada) list_medium_line_t2_g3_g

0x222b,	// (0x00085b52) list_medium_line_t2_g3_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t2_g3_t1

0x222b,	// (0x00085b52) list_medium_line_t2_g3_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x00092abd) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x00092abd) list_medium_line_t2_g3_t

0x171f,	// (0x00085046) list_medium_line_t3_g3_g1_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t3_g3_g1

0x171f,	// (0x00085046) list_medium_line_t3_g3_g2_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t3_g3_g2

0x171f,	// (0x00085046) list_medium_line_t3_g3_g3_ParamLimits

0x171f,	// (0x00085046) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x00092ada) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x00092ada) list_medium_line_t3_g3_g

0x222b,	// (0x00085b52) list_medium_line_t3_g3_t1_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t3_g3_t1

0x222b,	// (0x00085b52) list_medium_line_t3_g3_t2_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t3_g3_t2

0x222b,	// (0x00085b52) list_medium_line_t3_g3_t3_ParamLimits

0x222b,	// (0x00085b52) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x00092ae1) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x00092ae1) list_medium_line_t3_g3_t

0x23af,	// (0x00085cd6) list_medium_line_right_iconx2_g1

0x23af,	// (0x00085cd6) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x00092cbf) list_medium_line_right_iconx2_g

0x37f0,	// (0x00087117) list_medium_line_right_iconx2_t1

0x23af,	// (0x00085cd6) list_medium_line_t2_right_iconx2_g1

0x23af,	// (0x00085cd6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x00092cbf) list_medium_line_t2_right_iconx2_g

0x37f0,	// (0x00087117) list_medium_line_t2_right_iconx2_t1

0x37f0,	// (0x00087117) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc2b,	// (0x00093552) list_medium_line_t2_right_iconx2_t

0x37f0,	// (0x00087117) list_medium_line_x4_t4_t1

0x37f0,	// (0x00087117) list_medium_line_x4_t4_t2

0x37f0,	// (0x00087117) list_medium_line_x4_t4_t3

0x37f0,	// (0x00087117) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00092baa) list_medium_line_x4_t4_t

0x876d,	// (0x0008c094) tport_appsw_pane_ParamLimits

0x876d,	// (0x0008c094) tport_appsw_pane

0x8785,	// (0x0008c0ac) tport_contact_pane_ParamLimits

0x8785,	// (0x0008c0ac) tport_contact_pane

0x879d,	// (0x0008c0c4) tport_listscroll_pane_ParamLimits

0x879d,	// (0x0008c0c4) tport_listscroll_pane

0x87b7,	// (0x0008c0de) cell_tport_appsw_pane_ParamLimits

0x87b7,	// (0x0008c0de) cell_tport_appsw_pane

0x4050,	// (0x00087977) tport_appsw_pane_g1_ParamLimits

0x4050,	// (0x00087977) tport_appsw_pane_g1

0xdfc5,	// (0x000918ec) tport_contact_pane_g1

0xdfce,	// (0x000918f5) tport_contact_pane_t1

0xdfdc,	// (0x00091903) tport_contact_pane_t2

0x0001,

0xfc65,	// (0x0009358c) tport_contact_pane_t

0xdfea,	// (0x00091911) list_tport_pane

0xdff3,	// (0x0009191a) scroll_pane_cp_030

0x87ff,	// (0x0008c126) cell_tport_appsw_pane_g1

0x880f,	// (0x0008c136) cell_tport_appsw_pane_t1

0x881d,	// (0x0008c144) grid_highlight_pane_cp019

0x8825,	// (0x0008c14c) list_tport_double_graphic_pane_ParamLimits

0x8825,	// (0x0008c14c) list_tport_double_graphic_pane

0xedcf,	// (0x000926f6) list_highlight_pane_cp023_ParamLimits

0xedcf,	// (0x000926f6) list_highlight_pane_cp023

0x8832,	// (0x0008c159) list_tport_double_graphic_pane_g1_ParamLimits

0x8832,	// (0x0008c159) list_tport_double_graphic_pane_g1

0x883f,	// (0x0008c166) list_tport_double_graphic_pane_t1_ParamLimits

0x883f,	// (0x0008c166) list_tport_double_graphic_pane_t1

0x8854,	// (0x0008c17b) list_tport_double_graphic_pane_t2_ParamLimits

0x8854,	// (0x0008c17b) list_tport_double_graphic_pane_t2

0x0001,

0xfc71,	// (0x00093598) list_tport_double_graphic_pane_t_ParamLimits

0xfc71,	// (0x00093598) list_tport_double_graphic_pane_t

0xedc5,	// (0x000926ec) main_cale_note_pane

0x6abb,	// (0x0008a3e2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6abb,	// (0x0008a3e2) cell_vitu2_function_top_wide_pane_cp01

0x81f7,	// (0x0008bb1e) wait_bar_pane_cp05_ParamLimits

0xedcf,	// (0x000926f6) listscroll_cmail_pane

0xe004,	// (0x0009192b) list_cmail_pane

0x8866,	// (0x0008c18d) list_cmail_body_pane

0x887c,	// (0x0008c1a3) list_single_cmail_header_caption_pane

0x8893,	// (0x0008c1ba) list_single_cmail_header_detail_pane_ParamLimits

0x8893,	// (0x0008c1ba) list_single_cmail_header_detail_pane

0xe01b,	// (0x00091942) list_single_cmail_header_caption_pane_t1

0x0af0,	// (0x00084417) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0af0,	// (0x00084417) list_single_cmail_header_detail_pane_g1

0xe5ee,	// (0x00091f15) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5ee,	// (0x00091f15) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc76,	// (0x0009359d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc76,	// (0x0009359d) list_single_cmail_header_detail_pane_g

0x0b08,	// (0x0008442f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0b08,	// (0x0008442f) list_single_cmail_header_detail_pane_t1

0x0b46,	// (0x0008446d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0b46,	// (0x0008446d) list_single_cmail_header_editor_pane_bg

0xd997,	// (0x000912be) list_cmail_body_pane_g1

0xe063,	// (0x0009198a) list_cmail_body_pane_t1

0xcc8a,	// (0x000905b1) list_single_cmail_header_editor_pane_bg_g1

0x2a76,	// (0x0008639d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcc9a,	// (0x000905c1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcc92,	// (0x000905b9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcef4,	// (0x0009081b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xccba,	// (0x000905e1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xccaa,	// (0x000905d1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xccb2,	// (0x000905d9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2a56,	// (0x0008637d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88c1,	// (0x0008c1e8) calenote_gesture_pane_ParamLimits

0x88c1,	// (0x0008c1e8) calenote_gesture_pane

0x88e1,	// (0x0008c208) calenote_window_pane_ParamLimits

0x88e1,	// (0x0008c208) calenote_window_pane

0xe071,	// (0x00091998) popup_note_window_cp01

0x88fd,	// (0x0008c224) calenote_swipe_1_pane_ParamLimits

0x88fd,	// (0x0008c224) calenote_swipe_1_pane

0x85bb,	// (0x0008bee2) calenote_swipe_2_pane_ParamLimits

0x85bb,	// (0x0008bee2) calenote_swipe_2_pane

0xdd41,	// (0x00091668) calenote_swipe_1_pane_g1_ParamLimits

0xdd41,	// (0x00091668) calenote_swipe_1_pane_g1

0xdd4e,	// (0x00091675) calenote_swipe_1_pane_g2_ParamLimits

0xdd4e,	// (0x00091675) calenote_swipe_1_pane_g2

0x0001,

0xfc13,	// (0x0009353a) calenote_swipe_1_pane_g_ParamLimits

0xfc13,	// (0x0009353a) calenote_swipe_1_pane_g

0xe083,	// (0x000919aa) calenote_swipe_1_pane_t1_ParamLimits

0xe083,	// (0x000919aa) calenote_swipe_1_pane_t1

0xdd41,	// (0x00091668) calenote_swipe_2_pane_g1_ParamLimits

0xdd41,	// (0x00091668) calenote_swipe_2_pane_g1

0xe0a2,	// (0x000919c9) calenote_swipe_2_pane_g2_ParamLimits

0xe0a2,	// (0x000919c9) calenote_swipe_2_pane_g2

0x0001,

0xfc82,	// (0x000935a9) calenote_swipe_2_pane_g_ParamLimits

0xfc82,	// (0x000935a9) calenote_swipe_2_pane_g

0xe0ae,	// (0x000919d5) calenote_swipe_2_pane_t1_ParamLimits

0xe0ae,	// (0x000919d5) calenote_swipe_2_pane_t1

0xedc5,	// (0x000926ec) main_mup_navstr_pane

0x5958,	// (0x0008927f) main_mup3_pane_t7_ParamLimits

0x5958,	// (0x0008927f) main_mup3_pane_t7

0xc85c,	// (0x00090183) main_mp4_pane_g6_ParamLimits

0xc85c,	// (0x00090183) main_mp4_pane_g6

0xcaaf,	// (0x000903d6) main_image3_pane_t4_ParamLimits

0xcaaf,	// (0x000903d6) main_image3_pane_t4

0x8912,	// (0x0008c239) popup_navstr_preview_pane_ParamLimits

0x8912,	// (0x0008c239) popup_navstr_preview_pane

0x8926,	// (0x0008c24d) scroll_navstr_pane_ParamLimits

0x8926,	// (0x0008c24d) scroll_navstr_pane

0xedc5,	// (0x000926ec) bg_popup_preview_window_pane_cp04

0xe0d5,	// (0x000919fc) popup_navstr_preview_pane_t1

0x893a,	// (0x0008c261) scroll_navstr_pane_g1_ParamLimits

0x893a,	// (0x0008c261) scroll_navstr_pane_g1

0x894e,	// (0x0008c275) scroll_navstr_pane_t1_ParamLimits

0x894e,	// (0x0008c275) scroll_navstr_pane_t1

0xe07a,	// (0x000919a1) bg_button_pane_cp014

0xe07a,	// (0x000919a1) bg_button_pane_cp030

0xdce2,	// (0x00091609) list_double_fisheye_pane_g4_ParamLimits

0xdce2,	// (0x00091609) list_double_fisheye_pane_g4

0xdcee,	// (0x00091615) list_double_fisheye_pane_g5_ParamLimits

0xdcee,	// (0x00091615) list_double_fisheye_pane_g5

0xa794,	// (0x0008e0bb) sp_fs_scroll_pane_cp03

0xde58,	// (0x0009177f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde64,	// (0x0009178b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc30,	// (0x00093557) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x86a7,	// (0x0008bfce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe013,	// (0x0009193a) sp_fs_scroll_pane_cp02

0x1ba9,	// (0x000854d0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1ba9,	// (0x000854d0) popup_sp_fs_calendar_preview_list_single_pane

0xedc5,	// (0x000926ec) main_cam6_pano_pane

0xedcf,	// (0x000926f6) main_mup3_pane_ParamLimits

0xedc5,	// (0x000926ec) main_phacti_pane

0x80ca,	// (0x0008b9f1) bg_button_pane_cp11

0x80e4,	// (0x0008ba0b) main_mobtv_info_pane_g2_ParamLimits

0x80e4,	// (0x0008ba0b) main_mobtv_info_pane_g2

0x0001,

0xfb90,	// (0x000934b7) main_mobtv_info_pane_g_ParamLimits

0xfb90,	// (0x000934b7) main_mobtv_info_pane_g

0x82c1,	// (0x0008bbe8) sc_clock_pane_t5_ParamLimits

0x82c1,	// (0x0008bbe8) sc_clock_pane_t5

0x8389,	// (0x0008bcb0) main_radioblah_pane_g1_ParamLimits

0xdc35,	// (0x0009155c) main_radioblah_pane_t3_ParamLimits

0xdc35,	// (0x0009155c) main_radioblah_pane_t3

0xdc4d,	// (0x00091574) main_radioblah_pane_t4_ParamLimits

0xdc4d,	// (0x00091574) main_radioblah_pane_t4

0x83b1,	// (0x0008bcd8) main_radioblah_text_pane_ParamLimits

0x83b1,	// (0x0008bcd8) main_radioblah_text_pane

0x83c3,	// (0x0008bcea) main_radioblah_info_pane_g1_ParamLimits

0x845c,	// (0x0008bd83) main_radioblah_info_pane_t4_ParamLimits

0x845c,	// (0x0008bd83) main_radioblah_info_pane_t4

0xedcf,	// (0x000926f6) main_sp_fs_calendar_pane

0x8965,	// (0x0008c28c) main_phacti_pane_g1

0x896d,	// (0x0008c294) phacti_note_pane_ParamLimits

0x896d,	// (0x0008c294) phacti_note_pane

0xe0ec,	// (0x00091a13) phacti_term_pane_ParamLimits

0xe0ec,	// (0x00091a13) phacti_term_pane

0xe101,	// (0x00091a28) phacti_note_pane_t1_ParamLimits

0xe101,	// (0x00091a28) phacti_note_pane_t1

0xe118,	// (0x00091a3f) phacti_term_pane_g1

0xe120,	// (0x00091a47) phacti_term_pane_t1_ParamLimits

0xe120,	// (0x00091a47) phacti_term_pane_t1

0xe14a,	// (0x00091a71) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe152,	// (0x00091a79) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc8c,	// (0x000935b3) popup_sp_fs_calendar_preview_list_single_pane_g

0xe15a,	// (0x00091a81) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe15a,	// (0x00091a81) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe170,	// (0x00091a97) aid_popup_sp_fs_bg_corner_pane

0x23af,	// (0x00085cd6) popup_sp_fs_calendar_preview_bg_pane_g1

0xedc5,	// (0x000926ec) popup_sp_fs_calendar_preview_bg_pane

0xe178,	// (0x00091a9f) popup_sp_fs_calendar_preview_list_pane

0x4086,	// (0x000879ad) bg_main_sp_fs_cale_pane_ParamLimits

0x4086,	// (0x000879ad) bg_main_sp_fs_cale_pane

0xe189,	// (0x00091ab0) listscroll_cale_mrui_pane_ParamLimits

0xe189,	// (0x00091ab0) listscroll_cale_mrui_pane

0xe19e,	// (0x00091ac5) listscroll_sp_fs_schedule_track_pane

0xe1a7,	// (0x00091ace) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe1a7,	// (0x00091ace) main_sp_fs_ctrlbar_pane_cp01

0xe1ba,	// (0x00091ae1) main_sp_fs_ribbon_pane

0xe1c2,	// (0x00091ae9) popup_sp_fs_cale_preview_window

0x89e2,	// (0x0008c309) list_single_sp_fs_schedule_track_pane_ParamLimits

0x89e2,	// (0x0008c309) list_single_sp_fs_schedule_track_pane

0xedcf,	// (0x000926f6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xedcf,	// (0x000926f6) bg_sp_fs_highlight_list_pane_cp03

0x89f6,	// (0x0008c31d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x89f6,	// (0x0008c31d) list_single_sp_fs_schedule_track_pane_g1

0x8a02,	// (0x0008c329) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a02,	// (0x0008c329) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc91,	// (0x000935b8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc91,	// (0x000935b8) list_single_sp_fs_schedule_track_pane_g

0x8a0e,	// (0x0008c335) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a0e,	// (0x0008c335) list_single_sp_fs_schedule_track_pane_t1

0x8a28,	// (0x0008c34f) sp_fs_schedule_track_pane_ParamLimits

0x8a28,	// (0x0008c34f) sp_fs_schedule_track_pane

0xe1d4,	// (0x00091afb) sp_fs_schedule_track_pane_g1

0xe1dc,	// (0x00091b03) sp_fs_schedule_track_pane_g2

0xe1e4,	// (0x00091b0b) sp_fs_schedule_track_pane_g3

0xe1ec,	// (0x00091b13) sp_fs_schedule_track_pane_g4

0xe1f4,	// (0x00091b1b) sp_fs_schedule_track_pane_g5

0x0004,

0xfc96,	// (0x000935bd) sp_fs_schedule_track_pane_g

0xcc8a,	// (0x000905b1) bg_sp_fs_schedule_viewer_highlight_g1

0x2a76,	// (0x0008639d) bg_sp_fs_schedule_viewer_highlight_g2

0xcc92,	// (0x000905b9) bg_sp_fs_schedule_viewer_highlight_g3

0xcc9a,	// (0x000905c1) bg_sp_fs_schedule_viewer_highlight_g4

0xcef4,	// (0x0009081b) bg_sp_fs_schedule_viewer_highlight_g5

0xccaa,	// (0x000905d1) bg_sp_fs_schedule_viewer_highlight_g6

0xccb2,	// (0x000905d9) bg_sp_fs_schedule_viewer_highlight_g7

0xccba,	// (0x000905e1) bg_sp_fs_schedule_viewer_highlight_g8

0x2a56,	// (0x0008637d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfca1,	// (0x000935c8) bg_sp_fs_schedule_viewer_highlight_g

0xedc5,	// (0x000926ec) bg_main_sp_fs_ribbon_pane

0x8a39,	// (0x0008c360) main_sp_fs_ribbon_pane_g1

0xe1fc,	// (0x00091b23) main_sp_fs_ribbon_pane_t1

0x8a42,	// (0x0008c369) main_sp_fs_ribbon_pane_t2

0xe20b,	// (0x00091b32) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcb4,	// (0x000935db) main_sp_fs_ribbon_pane_t

0xe21a,	// (0x00091b41) main_sp_fs_ribbon_scheduler_pane

0xe222,	// (0x00091b49) bg_main_sp_fs_ribbon_pane_g1

0xe22b,	// (0x00091b52) bg_main_sp_fs_ribbon_pane_g2

0xe234,	// (0x00091b5b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcbb,	// (0x000935e2) bg_main_sp_fs_ribbon_pane_g

0xe23c,	// (0x00091b63) main_sp_fs_ribbon_scheduler_pane_g1

0xe245,	// (0x00091b6c) main_sp_fs_ribbon_scheduler_pane_g2

0xe24e,	// (0x00091b75) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcc2,	// (0x000935e9) main_sp_fs_ribbon_scheduler_pane_g

0xe257,	// (0x00091b7e) list_cale_mrui_pane

0x8a51,	// (0x0008c378) sp_fs_scroll_pane_cp07_ParamLimits

0x8a51,	// (0x0008c378) sp_fs_scroll_pane_cp07

0x8a6d,	// (0x0008c394) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8a6d,	// (0x0008c394) bg_sp_fs_schedule_viewer_highlight

0xe264,	// (0x00091b8b) list_single_sp_fs_schedule_track_pane_cp01

0xe26c,	// (0x00091b93) list_sp_fs_schedule_track_pane

0xe274,	// (0x00091b9b) sp_fs_scroll_pane_cp06_ParamLimits

0xe274,	// (0x00091b9b) sp_fs_scroll_pane_cp06

0x23af,	// (0x00085cd6) bgmain_sp_fs_calendar_pane_g1

0x0b5f,	// (0x00084486) list_single_cale_mrui_pane_ParamLimits

0x0b5f,	// (0x00084486) list_single_cale_mrui_pane

0xe286,	// (0x00091bad) list_single_cale_mrui_row_pane_ParamLimits

0xe286,	// (0x00091bad) list_single_cale_mrui_row_pane

0xe293,	// (0x00091bba) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe293,	// (0x00091bba) list_single_cale_mrui_row_pane_g1

0xe2d8,	// (0x00091bff) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe2d8,	// (0x00091bff) list_single_cale_mrui_row_pane_t1

0x0b80,	// (0x000844a7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0b80,	// (0x000844a7) list_single_cale_mrui_row_pane_t2

0xe2ea,	// (0x00091c11) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe2ea,	// (0x00091c11) list_single_cale_mrui_row_pane_t3

0xe319,	// (0x00091c40) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe319,	// (0x00091c40) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcd0,	// (0x000935f7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcd0,	// (0x000935f7) list_single_cale_mrui_row_pane_t

0x0be8,	// (0x0008450f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0be8,	// (0x0008450f) list_single_cmail_header_editor_pane_bg_cp01

0x0c16,	// (0x0008453d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0c16,	// (0x0008453d) list_single_cmail_header_editor_pane_bg_cp02

0x8a7d,	// (0x0008c3a4) main_radioblah_text_pane_t1_ParamLimits

0x8a7d,	// (0x0008c3a4) main_radioblah_text_pane_t1

0xe348,	// (0x00091c6f) cam6_indi_pane_cp01

0xe350,	// (0x00091c77) cam6_mode_pane_cp01

0xe358,	// (0x00091c7f) cam6_pano_pane

0xe361,	// (0x00091c88) cam6_zoom_pane_cp01

0xe369,	// (0x00091c90) cam6_pano_image_pane

0xe374,	// (0x00091c9b) cam6_pano_pane_g1

0xd997,	// (0x000912be) cam6_pano_pane_g2

0xe37d,	// (0x00091ca4) cam6_pano_pane_g3

0xe386,	// (0x00091cad) cam6_pano_pane_g4

0xc551,	// (0x0008fe78) cam6_pano_pane_g5

0xe38f,	// (0x00091cb6) cam6_pano_pane_g6

0xe399,	// (0x00091cc0) cam6_pano_pane_g7

0xe3a1,	// (0x00091cc8) cam6_pano_pane_g8

0xe3aa,	// (0x00091cd1) cam6_pano_pane_g9

0x0008,

0xfcd9,	// (0x00093600) cam6_pano_pane_g

0xedc5,	// (0x000926ec) main_browser_tag_pane

0xe0cd,	// (0x000919f4) grid_navstr_albumart_pane

0xe3b5,	// (0x00091cdc) cell_navstr_albumart_pane_ParamLimits

0xe3b5,	// (0x00091cdc) cell_navstr_albumart_pane

0xe3d5,	// (0x00091cfc) cell_navstr_albumart_pane_g1

0xb8de,	// (0x0008f205) cell_navstr_albumart_pane_g2

0xb8ee,	// (0x0008f215) cell_navstr_albumart_pane_g3

0xb8e6,	// (0x0008f20d) cell_navstr_albumart_pane_g4

0x0003,

0xfcec,	// (0x00093613) cell_navstr_albumart_pane_g

0x8a98,	// (0x0008c3bf) bt_list_pane_ParamLimits

0x8a98,	// (0x0008c3bf) bt_list_pane

0x8aac,	// (0x0008c3d3) bt_list_pane_t1

0x8abb,	// (0x0008c3e2) bt_list_pane_t2

0x0001,

0xfcf5,	// (0x0009361c) bt_list_pane_t

0xedc5,	// (0x000926ec) main_cale_prevew_pane

0x8aca,	// (0x0008c3f1) popup_cale_preview_window_ParamLimits

0x8aca,	// (0x0008c3f1) popup_cale_preview_window

0xedcf,	// (0x000926f6) bg_popup_preview_window_pane_cp05_ParamLimits

0xedcf,	// (0x000926f6) bg_popup_preview_window_pane_cp05

0xe3dd,	// (0x00091d04) list_cale_preview_pane_ParamLimits

0xe3dd,	// (0x00091d04) list_cale_preview_pane

0x8ae3,	// (0x0008c40a) list_double_cale_preview_pane_ParamLimits

0x8ae3,	// (0x0008c40a) list_double_cale_preview_pane

0xccc2,	// (0x000905e9) list_single_cale_preview_pane_ParamLimits

0xccc2,	// (0x000905e9) list_single_cale_preview_pane

0x8af5,	// (0x0008c41c) list_single_cale_preview_pane_g1

0x8afd,	// (0x0008c424) list_single_cale_preview_pane_t1_ParamLimits

0x8afd,	// (0x0008c424) list_single_cale_preview_pane_t1

0x8b12,	// (0x0008c439) list_double_cale_preview_pane_g1

0x8b1a,	// (0x0008c441) list_double_cale_preview_pane_t1_ParamLimits

0x8b1a,	// (0x0008c441) list_double_cale_preview_pane_t1

0x8b2f,	// (0x0008c456) list_double_cale_preview_pane_t2_ParamLimits

0x8b2f,	// (0x0008c456) list_double_cale_preview_pane_t2

0x0001,

0xfcfa,	// (0x00093621) list_double_cale_preview_pane_t_ParamLimits

0xfcfa,	// (0x00093621) list_double_cale_preview_pane_t

0xedc5,	// (0x000926ec) main_ezdial_pane

0xedcf,	// (0x000926f6) main_sp_fs_email_pane_ParamLimits

0x8617,	// (0x0008bf3e) cmail_ddmenu_btn01_pane_ParamLimits

0x8617,	// (0x0008bf3e) cmail_ddmenu_btn01_pane

0x862a,	// (0x0008bf51) cmail_ddmenu_btn02_pane_ParamLimits

0x862a,	// (0x0008bf51) cmail_ddmenu_btn02_pane

0x864d,	// (0x0008bf74) cmail_ddmenu_btn03_pane_ParamLimits

0x864d,	// (0x0008bf74) cmail_ddmenu_btn03_pane

0x86e6,	// (0x0008c00d) main_sp_fs_ctrlbar_pane_ParamLimits

0x870a,	// (0x0008c031) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8866,	// (0x0008c18d) list_cmail_body_pane_ParamLimits

0xe029,	// (0x00091950) bg_button_pane_cp12

0xe032,	// (0x00091959) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe032,	// (0x00091959) list_single_cmail_header_detail_pane_g3

0xe03f,	// (0x00091966) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe03f,	// (0x00091966) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc7d,	// (0x000935a4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc7d,	// (0x000935a4) list_single_cmail_header_detail_pane_t

0xe135,	// (0x00091a5c) phacti_term_pane_t2_ParamLimits

0xe135,	// (0x00091a5c) phacti_term_pane_t2

0x0001,

0xfc87,	// (0x000935ae) phacti_term_pane_t_ParamLimits

0xfc87,	// (0x000935ae) phacti_term_pane_t

0xe3e9,	// (0x00091d10) aid_size_list_single_double

0x8b47,	// (0x0008c46e) popup_ezdial_listscroll_window

0x8b63,	// (0x0008c48a) popup_number_entry_window_cp01

0x21c2,	// (0x00085ae9) bg_popup_call_pane_cp09

0xe3f5,	// (0x00091d1c) ezdial_list_pane

0xe3fd,	// (0x00091d24) scroll_pane_cp23

0x4086,	// (0x000879ad) bg_button_pane_cp028_ParamLimits

0x4086,	// (0x000879ad) bg_button_pane_cp028

0x8b71,	// (0x0008c498) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8b71,	// (0x0008c498) cmail_ddmenu_btn01_pane_g1

0x8b7d,	// (0x0008c4a4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8b7d,	// (0x0008c4a4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcff,	// (0x00093626) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcff,	// (0x00093626) cmail_ddmenu_btn01_pane_g

0xe405,	// (0x00091d2c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe405,	// (0x00091d2c) cmail_ddmenu_btn01_pane_t1

0x4086,	// (0x000879ad) bg_button_pane_cp029_ParamLimits

0x4086,	// (0x000879ad) bg_button_pane_cp029

0x8b89,	// (0x0008c4b0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8b89,	// (0x0008c4b0) cmail_ddmenu_btn02_pane_g1

0x8ba1,	// (0x0008c4c8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8ba1,	// (0x0008c4c8) cmail_ddmenu_btn02_pane_t1

0xedcf,	// (0x000926f6) bg_button_pane_cp031_ParamLimits

0xedcf,	// (0x000926f6) bg_button_pane_cp031

0x8b89,	// (0x0008c4b0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8b89,	// (0x0008c4b0) cmail_ddmenu_btn03_pane_g1

0x8ba1,	// (0x0008c4c8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8ba1,	// (0x0008c4c8) cmail_ddmenu_btn03_pane_t1

0x62b1,	// (0x00089bd8) cell_dialer2_keypad_pane_t1_ParamLimits

0x62cb,	// (0x00089bf2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x62cb,	// (0x00089bf2) cell_dialer2_keypad_pane_t1_copy1

0x7eed,	// (0x0008b814) ncimui_group_button_pane

0xedcf,	// (0x000926f6) main_sp_fs_calendar_pane_ParamLimits

0x887c,	// (0x0008c1a3) list_single_cmail_header_caption_pane_ParamLimits

0xe180,	// (0x00091aa7) aid_recal_txt_sm_pane

0xedc5,	// (0x000926ec) mian_recal_day_pane

0xe1c2,	// (0x00091ae9) popup_sp_fs_cale_preview_window_ParamLimits

0xe41a,	// (0x00091d41) list_recal_day_pane

0xe45c,	// (0x00091d83) list_single_recal_day_pane_ParamLimits

0xe45c,	// (0x00091d83) list_single_recal_day_pane

0xe46e,	// (0x00091d95) list_single_recal_day_pane_g1_ParamLimits

0xe46e,	// (0x00091d95) list_single_recal_day_pane_g1

0xe47a,	// (0x00091da1) list_single_recal_day_pane_g2_ParamLimits

0xe47a,	// (0x00091da1) list_single_recal_day_pane_g2

0xe486,	// (0x00091dad) list_single_recal_day_pane_g3_ParamLimits

0xe486,	// (0x00091dad) list_single_recal_day_pane_g3

0x0c36,	// (0x0008455d) list_single_recal_day_pane_g4_ParamLimits

0x0c36,	// (0x0008455d) list_single_recal_day_pane_g4

0xe492,	// (0x00091db9) list_single_recal_day_pane_g5_ParamLimits

0xe492,	// (0x00091db9) list_single_recal_day_pane_g5

0xe49e,	// (0x00091dc5) list_single_recal_day_pane_g6_ParamLimits

0xe49e,	// (0x00091dc5) list_single_recal_day_pane_g6

0x0004,

0xfd0e,	// (0x00093635) list_single_recal_day_pane_g_ParamLimits

0xfd0e,	// (0x00093635) list_single_recal_day_pane_g

0xe4b2,	// (0x00091dd9) list_single_recal_day_pane_t1

0xe4c4,	// (0x00091deb) list_single_recal_day_pane_t2

0x0001,

0xfd19,	// (0x00093640) list_single_recal_day_pane_t

0x8bc5,	// (0x0008c4ec) ncimui_query_button_pane_ParamLimits

0x8bc5,	// (0x0008c4ec) ncimui_query_button_pane

0x8bd5,	// (0x0008c4fc) ncimui_query_button_pane_t1_ParamLimits

0x8bd5,	// (0x0008c4fc) ncimui_query_button_pane_t1

0xe5fa,	// (0x00091f21) ncimui_query_button_pane_t2_ParamLimits

0xe5fa,	// (0x00091f21) ncimui_query_button_pane_t2

0x0001,

0xfd1e,	// (0x00093645) ncimui_query_button_pane_t_ParamLimits

0xfd1e,	// (0x00093645) ncimui_query_button_pane_t

0x8be8,	// (0x0008c50f) query_button_pane_ParamLimits

0x8be8,	// (0x0008c50f) query_button_pane

0xedc5,	// (0x000926ec) bg_button_pane_cp0028

0xe60d,	// (0x00091f34) query_button_pane_t1

0x4d58,	// (0x0008867f) main_tport_pane_ParamLimits

0x872a,	// (0x0008c051) bg_popup_window_pane_cp01_ParamLimits

0x872a,	// (0x0008c051) bg_popup_window_pane_cp01

0x8745,	// (0x0008c06c) heading_pane_cp08_ParamLimits

0x8745,	// (0x0008c06c) heading_pane_cp08

0x8758,	// (0x0008c07f) heading_pane_cp07_ParamLimits

0x8758,	// (0x0008c07f) heading_pane_cp07

0x87ff,	// (0x0008c126) cell_tport_appsw_pane_g2

0x0002,

0xfc6a,	// (0x00093591) cell_tport_appsw_pane_g

0xa821,	// (0x0008e148) input_candi_list_open_g1

0x361e,	// (0x00086f45) list_cale_time_pane_g6_ParamLimits

0x361e,	// (0x00086f45) list_cale_time_pane_g6

0x5365,	// (0x00088c8c) aid_size_touch_calib_1_ParamLimits

0x5365,	// (0x00088c8c) aid_size_touch_calib_1

0x5377,	// (0x00088c9e) aid_size_touch_calib_2_ParamLimits

0x5377,	// (0x00088c9e) aid_size_touch_calib_2

0x538f,	// (0x00088cb6) aid_size_touch_calib_3_ParamLimits

0x538f,	// (0x00088cb6) aid_size_touch_calib_3

0x53ad,	// (0x00088cd4) aid_size_touch_calib_4_ParamLimits

0x53ad,	// (0x00088cd4) aid_size_touch_calib_4

0x53c5,	// (0x00088cec) main_touch_calib_button_group_pane_ParamLimits

0x53c5,	// (0x00088cec) main_touch_calib_button_group_pane

0x53dd,	// (0x00088d04) main_touch_calib_pane_g1_ParamLimits

0x53ef,	// (0x00088d16) main_touch_calib_pane_g2_ParamLimits

0x5401,	// (0x00088d28) main_touch_calib_pane_g3_ParamLimits

0x5413,	// (0x00088d3a) main_touch_calib_pane_g4_ParamLimits

0xf6ac,	// (0x00092fd3) main_touch_calib_pane_g_ParamLimits

0x5425,	// (0x00088d4c) main_touch_calib_pane_t1_ParamLimits

0x543f,	// (0x00088d66) main_touch_calib_pane_t2_ParamLimits

0x5459,	// (0x00088d80) main_touch_calib_pane_t3_ParamLimits

0x546d,	// (0x00088d94) main_touch_calib_pane_t4_ParamLimits

0x5481,	// (0x00088da8) main_touch_calib_pane_t5_ParamLimits

0xf6b5,	// (0x00092fdc) main_touch_calib_pane_t_ParamLimits

0xc317,	// (0x0008fc3e) list_single_fp_cale_pane_g3_ParamLimits

0xc317,	// (0x0008fc3e) list_single_fp_cale_pane_g3

0xedcf,	// (0x000926f6) bg_button_pane_cp012_ParamLimits

0xedcf,	// (0x000926f6) bg_vkb2_func_pane_cp03_ParamLimits

0x7264,	// (0x0008ab8b) cell_vitu2_function_top_pane_g1_ParamLimits

0xedcf,	// (0x000926f6) bg_vkb2_func_pane_cp04_ParamLimits

0x7e78,	// (0x0008b79f) main_ncimui_button_group_pane_ParamLimits

0x7e78,	// (0x0008b79f) main_ncimui_button_group_pane

0x7ed8,	// (0x0008b7ff) main_ncimui_pane_t3_ParamLimits

0x7ed8,	// (0x0008b7ff) main_ncimui_pane_t3

0xe0e3,	// (0x00091a0a) phacti_button_group_pane

0xe3e9,	// (0x00091d10) aid_size_list_single_double_ParamLimits

0x8b47,	// (0x0008c46e) popup_ezdial_listscroll_window_ParamLimits

0x8b63,	// (0x0008c48a) popup_number_entry_window_cp01_ParamLimits

0x8bfb,	// (0x0008c522) phacti_button_pane_ParamLimits

0x8bfb,	// (0x0008c522) phacti_button_pane

0xedc5,	// (0x000926ec) bg_button_pane_cp14

0xe61b,	// (0x00091f42) phacti_button_pane_t1

0x8c0c,	// (0x0008c533) main_touch_calib_button_pane_ParamLimits

0x8c0c,	// (0x0008c533) main_touch_calib_button_pane

0x18f5,	// (0x0008521c) bg_button_pane_cp18_ParamLimits

0x18f5,	// (0x0008521c) bg_button_pane_cp18

0xe629,	// (0x00091f50) main_touch_calib_button_pane_t1_ParamLimits

0xe629,	// (0x00091f50) main_touch_calib_button_pane_t1

0xe63f,	// (0x00091f66) main_touch_calib_button_pane_t2_ParamLimits

0xe63f,	// (0x00091f66) main_touch_calib_button_pane_t2

0x0001,

0xfd23,	// (0x0009364a) main_touch_calib_button_pane_t_ParamLimits

0xfd23,	// (0x0009364a) main_touch_calib_button_pane_t

0xedc5,	// (0x000926ec) cell_ncimui_button_pane

0xedc5,	// (0x000926ec) bg_button_pane_cp032

0xe65d,	// (0x00091f84) cell_ncimui_button_pane_t1

0xca8f,	// (0x000903b6) image3_infobar_pane_ParamLimits

0xca8f,	// (0x000903b6) image3_infobar_pane

0x82ed,	// (0x0008bc14) fs_bigclock_status_pane_ParamLimits

0x82ed,	// (0x0008bc14) fs_bigclock_status_pane

0x82fa,	// (0x0008bc21) main_fs_bigclock_clock_pane_ParamLimits

0x82fa,	// (0x0008bc21) main_fs_bigclock_clock_pane

0x8318,	// (0x0008bc3f) main_fs_bigclock_indi_pane_ParamLimits

0x8318,	// (0x0008bc3f) main_fs_bigclock_indi_pane

0x834a,	// (0x0008bc71) main_fs_bigclock_swipe_pane_ParamLimits

0x834a,	// (0x0008bc71) main_fs_bigclock_swipe_pane

0xedc5,	// (0x000926ec) main_fs_clock_dumped_data

0xdaa4,	// (0x000913cb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdaa4,	// (0x000913cb) list_single_fs_bigclock_indicator_pane_g1

0xdac0,	// (0x000913e7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdac0,	// (0x000913e7) list_single_fs_bigclock_indicator_pane_g2

0xdada,	// (0x00091401) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdada,	// (0x00091401) list_single_fs_bigclock_indicator_pane_g3

0xdaf4,	// (0x0009141b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdaf4,	// (0x0009141b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc4,	// (0x000934eb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc4,	// (0x000934eb) list_single_fs_bigclock_indicator_pane_g

0xdb1f,	// (0x00091446) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdb1f,	// (0x00091446) list_single_fs_bigclock_indicator_pane_t1

0xdb47,	// (0x0009146e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdb47,	// (0x0009146e) list_single_fs_bigclock_indicator_pane_t2

0xdb6f,	// (0x00091496) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdb6f,	// (0x00091496) list_single_fs_bigclock_indicator_pane_t3

0xdb97,	// (0x000914be) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdb97,	// (0x000914be) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbcf,	// (0x000934f6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbcf,	// (0x000934f6) list_single_fs_bigclock_indicator_pane_t

0xe66b,	// (0x00091f92) image3_infobar_fav_pane_ParamLimits

0xe66b,	// (0x00091f92) image3_infobar_fav_pane

0xe67b,	// (0x00091fa2) image3_infobar_loc_pane_ParamLimits

0xe67b,	// (0x00091fa2) image3_infobar_loc_pane

0xe68f,	// (0x00091fb6) image3_infobar_time_pane_ParamLimits

0xe68f,	// (0x00091fb6) image3_infobar_time_pane

0x23af,	// (0x00085cd6) image3_infobar_time_pane_g1

0xe69f,	// (0x00091fc6) image3_infobar_time_pane_t1

0x23af,	// (0x00085cd6) image3_infobar_loc_pane_g1

0xe6ad,	// (0x00091fd4) image3_infobar_loc_pane_g2

0x0001,

0xfd28,	// (0x0009364f) image3_infobar_loc_pane_g

0xe6b5,	// (0x00091fdc) image3_infobar_loc_pane_t1

0x23af,	// (0x00085cd6) image3_infobar_fav_pane_g1

0xe6c3,	// (0x00091fea) image3_infobar_fav_pane_g2

0x0001,

0xfd2d,	// (0x00093654) image3_infobar_fav_pane_g

0xe6cb,	// (0x00091ff2) fs_bigclock_status_battery_pane

0xe6d4,	// (0x00091ffb) fs_bigclock_status_signal_pane

0xe6dd,	// (0x00092004) fs_bigclock_status_title_pane

0xe6e6,	// (0x0009200d) fs_bigclock_status_signal_pane_g1

0xe6ef,	// (0x00092016) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd32,	// (0x00093659) fs_bigclock_status_signal_pane_g

0xe6f7,	// (0x0009201e) fs_bigclock_status_battery_pane_g1

0xe700,	// (0x00092027) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd37,	// (0x0009365e) fs_bigclock_status_battery_pane_g

0xe708,	// (0x0009202f) fs_bigclock_status_title_pane_t1

0x8c21,	// (0x0008c548) main_fs_bigclock_clock_pane_g1

0x8c21,	// (0x0008c548) main_fs_bigclock_clock_pane_g2

0x8c32,	// (0x0008c559) main_fs_bigclock_clock_pane_g3

0x8c32,	// (0x0008c559) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd3c,	// (0x00093663) main_fs_bigclock_clock_pane_g

0x8c45,	// (0x0008c56c) main_fs_bigclock_clock_pane_t1

0x8c5b,	// (0x0008c582) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd45,	// (0x0009366c) main_fs_bigclock_clock_pane_t

0xe716,	// (0x0009203d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe716,	// (0x0009203d) list_single_fs_bigclock_indicator_pane

0xe727,	// (0x0009204e) list_single_fs_bigclock_pane_ParamLimits

0xe727,	// (0x0009204e) list_single_fs_bigclock_pane

0xe74d,	// (0x00092074) main_fs_bigclock_indicator_pane_t1

0xe75c,	// (0x00092083) list_single_fs_bigclock_pane_g1

0xe764,	// (0x0009208b) list_single_fs_bigclock_pane_t1

0x23af,	// (0x00085cd6) main_fs_bigclock_swipe_pane_g1

0xe7a7,	// (0x000920ce) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd56,	// (0x0009367d) main_fs_bigclock_swipe_pane_g

0xe7af,	// (0x000920d6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7af,	// (0x000920d6) main_fs_bigclock_swipe_pane_t1

0x390e,	// (0x00087235) call_type_pane_ParamLimits

0xedc5,	// (0x000926ec) main_btmg_pane

0xe2bf,	// (0x00091be6) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2bf,	// (0x00091be6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcc9,	// (0x000935f0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcc9,	// (0x000935f0) list_single_cale_mrui_row_pane_g

0xe443,	// (0x00091d6a) list_recal_vselct_arw_lo_pane

0xe44b,	// (0x00091d72) list_recal_vselct_arw_up_pane

0xe453,	// (0x00091d7a) list_recal_vselct_pane

0x8cb5,	// (0x0008c5dc) btmg_button_pane

0x8cbf,	// (0x0008c5e6) main_btmg_pane_g1

0xedc5,	// (0x000926ec) bg_button_pane_cp044

0xe7cc,	// (0x000920f3) btmg_button_pane_t1

0xba6e,	// (0x0008f395) aid_listscroll_gen

0xedcf,	// (0x000926f6) main_cntbar_detail_pane

0xdffc,	// (0x00091923) list_cmail_folder_pane

0xa794,	// (0x0008e0bb) sp_fs_scroll_pane_cp03_ParamLimits

0x0c4e,	// (0x00084575) list_single_fs_dyc_pane_cp01_ParamLimits

0x0c4e,	// (0x00084575) list_single_fs_dyc_pane_cp01

0xe7da,	// (0x00092101) aid_size_cmail_indent

0xe4d6,	// (0x00091dfd) list_single_dyc_row_pane_cp01

0x8cfb,	// (0x0008c622) cntbar_detail_list_pane_ParamLimits

0x8cfb,	// (0x0008c622) cntbar_detail_list_pane

0x8d47,	// (0x0008c66e) main_cntbar_detail_cont_pane_ParamLimits

0x8d47,	// (0x0008c66e) main_cntbar_detail_cont_pane

0xa794,	// (0x0008e0bb) scroll_pane_cp032_ParamLimits

0xa794,	// (0x0008e0bb) scroll_pane_cp032

0xee3d,	// (0x00092764) cntbar_detail_list_event_pane_ParamLimits

0xee3d,	// (0x00092764) cntbar_detail_list_event_pane

0x8d0b,	// (0x0008c632) cntbar_detail_list_shct_pane

0x2acc,	// (0x000863f3) aid_list_gen

0xe7e3,	// (0x0009210a) aid_scroll

0xe7ec,	// (0x00092113) aid_size_touch_scroll_bar

0x84d9,	// (0x0008be00) aid_list_double

0x8d5b,	// (0x0008c682) aid_list_single

0x8d64,	// (0x0008c68b) aid_list_single_lg

0x0c64,	// (0x0008458b) aid_list_z_g_a_sm

0x8d6d,	// (0x0008c694) aid_list_z_g_d

0x0c6c,	// (0x00084593) aid_txt_z_prm

0x0c7a,	// (0x000845a1) aid_txt_z_prm_cp01

0x0c88,	// (0x000845af) aid_txt_z_sec

0x8d75,	// (0x0008c69c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8d75,	// (0x0008c69c) main_cntbar_detail_cont_pane_g1

0x8d89,	// (0x0008c6b0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8d89,	// (0x0008c6b0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd5b,	// (0x00093682) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd5b,	// (0x00093682) main_cntbar_detail_cont_pane_g

0xe7f5,	// (0x0009211c) main_cntbar_detail_cont_pane_t1

0xe803,	// (0x0009212a) main_cntbar_detail_cont_pane_t2

0xe811,	// (0x00092138) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd60,	// (0x00093687) main_cntbar_detail_cont_pane_t

0x8d99,	// (0x0008c6c0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d99,	// (0x0008c6c0) cell_cntbar_detail_list_shct_pane

0xe81f,	// (0x00092146) cntbar_detail_list_shct_pane_g1

0xe828,	// (0x0009214f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd67,	// (0x0009368e) cntbar_detail_list_shct_pane_g

0x8dad,	// (0x0008c6d4) cntbar_detail_list_event_pane_g1_ParamLimits

0x8dad,	// (0x0008c6d4) cntbar_detail_list_event_pane_g1

0x8db9,	// (0x0008c6e0) cntbar_detail_list_event_pane_g2_ParamLimits

0x8db9,	// (0x0008c6e0) cntbar_detail_list_event_pane_g2

0x0005,

0xfd6c,	// (0x00093693) cntbar_detail_list_event_pane_g_ParamLimits

0xfd6c,	// (0x00093693) cntbar_detail_list_event_pane_g

0x8e25,	// (0x0008c74c) cntbar_detail_list_event_pane_t1_ParamLimits

0x8e25,	// (0x0008c74c) cntbar_detail_list_event_pane_t1

0x8e3a,	// (0x0008c761) cntbar_detail_list_event_pane_t2_ParamLimits

0x8e3a,	// (0x0008c761) cntbar_detail_list_event_pane_t2

0x0002,

0xfd79,	// (0x000936a0) cntbar_detail_list_event_pane_t_ParamLimits

0xfd79,	// (0x000936a0) cntbar_detail_list_event_pane_t

0x23af,	// (0x00085cd6) cell_cntbar_detail_list_shct_pane_g1

0x3efd,	// (0x00087824) navi_pane_mv_g3

0xedcf,	// (0x000926f6) main_cntbar_detail_pane_ParamLimits

0xedc5,	// (0x000926ec) main_notif_wgt_pane

0xc7ea,	// (0x00090111) aid_tch_main_mp4_pane_g4

0xca1c,	// (0x00090343) popup_slider_window_cp02

0xe439,	// (0x00091d60) list_recal_day_event_pane

0x8cc9,	// (0x0008c5f0) cntbar_detail_btn_pane_ParamLimits

0x8cc9,	// (0x0008c5f0) cntbar_detail_btn_pane

0x8ce2,	// (0x0008c609) cntbar_detail_btn_pane_cp01_ParamLimits

0x8ce2,	// (0x0008c609) cntbar_detail_btn_pane_cp01

0x8d0b,	// (0x0008c632) cntbar_detail_list_shct_pane_ParamLimits

0x8d1b,	// (0x0008c642) cntbar_detail_pane_g1_ParamLimits

0x8d1b,	// (0x0008c642) cntbar_detail_pane_g1

0x8d2b,	// (0x0008c652) cntbar_detail_pane_t1_ParamLimits

0x8d2b,	// (0x0008c652) cntbar_detail_pane_t1

0x8dc5,	// (0x0008c6ec) cntbar_detail_list_event_pane_g3_ParamLimits

0x8dc5,	// (0x0008c6ec) cntbar_detail_list_event_pane_g3

0x8ddd,	// (0x0008c704) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ddd,	// (0x0008c704) cntbar_detail_list_event_pane_g4

0x8df5,	// (0x0008c71c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8df5,	// (0x0008c71c) cntbar_detail_list_event_pane_g5

0x8e0d,	// (0x0008c734) cntbar_detail_list_event_pane_g6_ParamLimits

0x8e0d,	// (0x0008c734) cntbar_detail_list_event_pane_g6

0x8e4f,	// (0x0008c776) cntbar_detail_list_event_pane_t3_ParamLimits

0x8e4f,	// (0x0008c776) cntbar_detail_list_event_pane_t3

0x8e61,	// (0x0008c788) popup_notif_wgt_window_ParamLimits

0x8e61,	// (0x0008c788) popup_notif_wgt_window

0x8e7a,	// (0x0008c7a1) popup_submenu_window_cp01_ParamLimits

0x8e7a,	// (0x0008c7a1) popup_submenu_window_cp01

0x21c2,	// (0x00085ae9) bg_popup_window_pane_cp10

0xe831,	// (0x00092158) listscroll_notif_wgt_pane

0xe843,	// (0x0009216a) list_notif_wgt_window

0xe84c,	// (0x00092173) scroll_pane_cp033

0x8e8c,	// (0x0008c7b3) list_notif_wgt_row_pane_ParamLimits

0x8e8c,	// (0x0008c7b3) list_notif_wgt_row_pane

0xe855,	// (0x0009217c) aid_size_list_notif_wgt_del

0xe862,	// (0x00092189) list_notif_wgt_row_pane_g1

0xe86e,	// (0x00092195) list_notif_wgt_row_pane_g2

0xe87d,	// (0x000921a4) list_notif_wgt_row_pane_g3

0x0002,

0xfd80,	// (0x000936a7) list_notif_wgt_row_pane_g

0xe88a,	// (0x000921b1) list_notif_wgt_row_pane_t1

0xe8a0,	// (0x000921c7) list_notif_wgt_row_pane_t2

0xe8b2,	// (0x000921d9) list_notif_wgt_row_pane_t3

0x0002,

0xfd87,	// (0x000936ae) list_notif_wgt_row_pane_t

0xcefc,	// (0x00090823) list_recal_day_event_pane_g1

0xe8c4,	// (0x000921eb) list_recal_day_event_pane_t1

0xedc5,	// (0x000926ec) bg_button_pane_cp045

0x8e9c,	// (0x0008c7c3) cntbar_detail_btn_pane_t1

0x4086,	// (0x000879ad) main_callh_pane_ParamLimits

0x4086,	// (0x000879ad) main_callh_pane

0xedc5,	// (0x000926ec) main_coverflow0_pane

0xedc5,	// (0x000926ec) main_wgtman_pane

0x8362,	// (0x0008bc89) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8362,	// (0x0008bc89) main_fs_bigclock_unlock_btn_pane

0x87f7,	// (0x0008c11e) bg_button_pane_cp16

0x8807,	// (0x0008c12e) cell_tport_appsw_pane_g3

0x8eaa,	// (0x0008c7d1) cf0_flow_pane_ParamLimits

0x8eaa,	// (0x0008c7d1) cf0_flow_pane

0xe8d3,	// (0x000921fa) listscroll_cf0_pane

0xe8de,	// (0x00092205) main_cf0_pane_g1

0x8ebf,	// (0x0008c7e6) main_cf0_pane_t1_ParamLimits

0x8ebf,	// (0x0008c7e6) main_cf0_pane_t1

0x8ed6,	// (0x0008c7fd) main_cf0_pane_t2_ParamLimits

0x8ed6,	// (0x0008c7fd) main_cf0_pane_t2

0x0001,

0xfd93,	// (0x000936ba) main_cf0_pane_t_ParamLimits

0xfd93,	// (0x000936ba) main_cf0_pane_t

0xe8f0,	// (0x00092217) scroll_pane_cp11

0x8eed,	// (0x0008c814) cf0_flow_pane_g1

0x8ef5,	// (0x0008c81c) cf0_flow_pane_g2

0x0001,

0xfd98,	// (0x000936bf) cf0_flow_pane_g

0x8efd,	// (0x0008c824) cf0_flow_pane_t1

0xedc5,	// (0x000926ec) main_call6_pane

0xedc5,	// (0x000926ec) main_calllock_pane

0x8f0b,	// (0x0008c832) call6_btn_grp_pane_ParamLimits

0x8f0b,	// (0x0008c832) call6_btn_grp_pane

0x8f25,	// (0x0008c84c) call6_pane_g1_ParamLimits

0x8f25,	// (0x0008c84c) call6_pane_g1

0x8f3b,	// (0x0008c862) popup_call6_1st_window_ParamLimits

0x8f3b,	// (0x0008c862) popup_call6_1st_window

0x8f4c,	// (0x0008c873) popup_call6_2nd_window_ParamLimits

0x8f4c,	// (0x0008c873) popup_call6_2nd_window

0x8f5d,	// (0x0008c884) cell_call6_btn_pane_ParamLimits

0x8f5d,	// (0x0008c884) cell_call6_btn_pane

0x21c2,	// (0x00085ae9) bg_popup_call2_in_pane_cp03

0xe8fb,	// (0x00092222) popup_call6_1st_window_g1

0xe903,	// (0x0009222a) popup_call6_1st_window_g2

0xe90b,	// (0x00092232) popup_call6_1st_window_g3

0x0002,

0xfd9d,	// (0x000936c4) popup_call6_1st_window_g

0xe913,	// (0x0009223a) popup_call6_1st_window_t1

0xe922,	// (0x00092249) popup_call6_1st_window_t2

0xe930,	// (0x00092257) popup_call6_1st_window_t3

0x0002,

0xfda4,	// (0x000936cb) popup_call6_1st_window_t

0x21c2,	// (0x00085ae9) bg_popup_call2_in_pane_cp04

0xe93e,	// (0x00092265) popup_call6_2nd_window_g1

0xe946,	// (0x0009226d) popup_call6_2nd_window_g2

0xe94e,	// (0x00092275) popup_call6_2nd_window_g3

0x0002,

0xfdab,	// (0x000936d2) popup_call6_2nd_window_g

0xe956,	// (0x0009227d) popup_call6_2nd_window_t1

0xedc5,	// (0x000926ec) bg_button_pane_cp15

0xe965,	// (0x0009228c) cell_call6_btn_pane_g1

0xee4d,	// (0x00092774) cell_call6_btn_pane_t1

0x8f71,	// (0x0008c898) listscroll_wgtman_pane_ParamLimits

0x8f71,	// (0x0008c898) listscroll_wgtman_pane

0x8f92,	// (0x0008c8b9) wgtman_btn_pane_ParamLimits

0x8f92,	// (0x0008c8b9) wgtman_btn_pane

0x3b38,	// (0x0008745f) aid_scroll_copy1

0xe96e,	// (0x00092295) list_wgtman_pane

0x8fd5,	// (0x0008c8fc) wgtman_btn_pane_g1_ParamLimits

0x8fd5,	// (0x0008c8fc) wgtman_btn_pane_g1

0x9001,	// (0x0008c928) wgtman_btn_pane_t1_ParamLimits

0x9001,	// (0x0008c928) wgtman_btn_pane_t1

0xe978,	// (0x0009229f) wgtman_btn_pane_t2_ParamLimits

0xe978,	// (0x0009229f) wgtman_btn_pane_t2

0x0001,

0xfdb2,	// (0x000936d9) wgtman_btn_pane_t_ParamLimits

0xfdb2,	// (0x000936d9) wgtman_btn_pane_t

0x903e,	// (0x0008c965) listrow_wgtman_pane_ParamLimits

0x903e,	// (0x0008c965) listrow_wgtman_pane

0x9051,	// (0x0008c978) listrow_wgtman_pane_g1

0x905e,	// (0x0008c985) listrow_wgtman_pane_g2

0x0001,

0xfdb7,	// (0x000936de) listrow_wgtman_pane_g

0x0c96,	// (0x000845bd) listrow_wgtman_pane_t1

0x0cae,	// (0x000845d5) listrow_wgtman_pane_t2

0x0001,

0xfdbc,	// (0x000936e3) listrow_wgtman_pane_t

0x0cd4,	// (0x000845fb) wait_bar_pane_cp09

0xe98f,	// (0x000922b6) main_calllock_btn_pane

0xe999,	// (0x000922c0) main_calllock_pane_g1

0xedc5,	// (0x000926ec) bg_button_pane_cp17

0xe965,	// (0x0009228c) main_calllock_btn_pane_g1

0xe9a1,	// (0x000922c8) main_calllock_btn_pane_t1

0xedc5,	// (0x000926ec) main_dialer3_pane

0xedc5,	// (0x000926ec) main_fmrd2_pane

0x23af,	// (0x00085cd6) main_fs_bigclock_unlock_btn_pane_g1

0x9084,	// (0x0008c9ab) main_fs_bigclock_unlock_btn_pane_t1

0x9092,	// (0x0008c9b9) area_fmrd2_info_pane_ParamLimits

0x9092,	// (0x0008c9b9) area_fmrd2_info_pane

0x90a3,	// (0x0008c9ca) area_fmrd2_visual_pane_ParamLimits

0x90a3,	// (0x0008c9ca) area_fmrd2_visual_pane

0x90b1,	// (0x0008c9d8) fmrd2_indi_pane_ParamLimits

0x90b1,	// (0x0008c9d8) fmrd2_indi_pane

0x90be,	// (0x0008c9e5) area_fmrd2_visual_pane_g1

0x90c6,	// (0x0008c9ed) area_fmrd2_visual_pane_t1

0x90d6,	// (0x0008c9fd) area_fmrd2_visual_pane_t2

0x90e6,	// (0x0008ca0d) area_fmrd2_visual_pane_t3

0x0002,

0xfdc6,	// (0x000936ed) area_fmrd2_visual_pane_t

0x90f6,	// (0x0008ca1d) area_fmrd2_info_pane_g1

0x90fe,	// (0x0008ca25) area_fmrd2_info_pane_t1

0x910e,	// (0x0008ca35) area_fmrd2_info_pane_t2

0x911e,	// (0x0008ca45) area_fmrd2_info_pane_t3

0x912e,	// (0x0008ca55) area_fmrd2_info_pane_t4

0x0003,

0xfdcd,	// (0x000936f4) area_fmrd2_info_pane_t

0x913c,	// (0x0008ca63) fmrd2_indi_pane_t1

0x914c,	// (0x0008ca73) fmrd2_indi_pane_t2

0x915c,	// (0x0008ca83) fmrd2_indi_pane_t3

0x0002,

0xfdd6,	// (0x000936fd) fmrd2_indi_pane_t

0xdb03,	// (0x0009142a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb03,	// (0x0009142a) list_single_fs_bigclock_indicator_pane_g5

0xdbb4,	// (0x000914db) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdbb4,	// (0x000914db) list_single_fs_bigclock_indicator_pane_t5

0x8981,	// (0x0008c2a8) aid_cell_bcale_month_pane_ParamLimits

0x8981,	// (0x0008c2a8) aid_cell_bcale_month_pane

0x899f,	// (0x0008c2c6) bcale_month_pane_ParamLimits

0x899f,	// (0x0008c2c6) bcale_month_pane

0x89c3,	// (0x0008c2ea) bcale_preview_pane_ParamLimits

0x89c3,	// (0x0008c2ea) bcale_preview_pane

0xe764,	// (0x0009208b) list_single_fs_bigclock_pane_t1_ParamLimits

0xe783,	// (0x000920aa) list_single_fs_bigclock_pane_t2_ParamLimits

0xe783,	// (0x000920aa) list_single_fs_bigclock_pane_t2

0x0001,

0xfd51,	// (0x00093678) list_single_fs_bigclock_pane_t_ParamLimits

0xfd51,	// (0x00093678) list_single_fs_bigclock_pane_t

0x907c,	// (0x0008c9a3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc1,	// (0x000936e8) main_fs_bigclock_unlock_btn_pane_g

0x916c,	// (0x0008ca93) aid_dia3_key_size_ParamLimits

0x916c,	// (0x0008ca93) aid_dia3_key_size

0x917b,	// (0x0008caa2) aid_dia3_listrow_size_ParamLimits

0x917b,	// (0x0008caa2) aid_dia3_listrow_size

0x9190,	// (0x0008cab7) dia3_keypad_fun_pane_ParamLimits

0x9190,	// (0x0008cab7) dia3_keypad_fun_pane

0x91ac,	// (0x0008cad3) dia3_keypad_num_pane_ParamLimits

0x91ac,	// (0x0008cad3) dia3_keypad_num_pane

0x91c7,	// (0x0008caee) dia3_listscroll_pane_ParamLimits

0x91c7,	// (0x0008caee) dia3_listscroll_pane

0x91da,	// (0x0008cb01) dia3_numentry_pane_ParamLimits

0x91da,	// (0x0008cb01) dia3_numentry_pane

0xe9b0,	// (0x000922d7) dia3_list_pane

0xe9bb,	// (0x000922e2) scroll_pane_cp12

0xedc5,	// (0x000926ec) bg_dia3_numentry_pane

0x91f2,	// (0x0008cb19) dia3_numentry_pane_t1

0x9201,	// (0x0008cb28) cell_dia3_key_num_pane

0x9209,	// (0x0008cb30) cell_dia3_key0_fun_pane_ParamLimits

0x9209,	// (0x0008cb30) cell_dia3_key0_fun_pane

0x921d,	// (0x0008cb44) cell_dia3_key1_fun_pane_ParamLimits

0x921d,	// (0x0008cb44) cell_dia3_key1_fun_pane

0x9235,	// (0x0008cb5c) dia3_listrow_pane

0xd856,	// (0x0009117d) bg_dia3_numentry_pane_g1

0xedc5,	// (0x000926ec) bg_button_pane_cp21

0xe9c6,	// (0x000922ed) cell_dia3_key_num_pane_t1

0xe9d4,	// (0x000922fb) cell_dia3_key_num_pane_t2

0xe9e3,	// (0x0009230a) cell_dia3_key_num_pane_t3

0xe9f2,	// (0x00092319) cell_dia3_key_num_pane_t4

0x0003,

0xfddd,	// (0x00093704) cell_dia3_key_num_pane_t

0xedc5,	// (0x000926ec) bg_button_pane_cp19

0x9247,	// (0x0008cb6e) cell_dia3_key0_fun_pane_g1

0xedc5,	// (0x000926ec) bg_button_pane_cp20

0x924f,	// (0x0008cb76) cell_dia3_key1_fun_pane_g1

0x9257,	// (0x0008cb7e) area_left_week_number_pane

0x9263,	// (0x0008cb8a) area_top_day_name_pane

0x9276,	// (0x0008cb9d) frame_month_view_pane

0xea01,	// (0x00092328) grid_month_view_pane

0x9289,	// (0x0008cbb0) cell_top_day_name_pane_ParamLimits

0x9289,	// (0x0008cbb0) cell_top_day_name_pane

0x92b6,	// (0x0008cbdd) cell_area_left_week_number_pane_ParamLimits

0x92b6,	// (0x0008cbdd) cell_area_left_week_number_pane

0x92ca,	// (0x0008cbf1) cell_month_view_pane_ParamLimits

0x92ca,	// (0x0008cbf1) cell_month_view_pane

0xea0f,	// (0x00092336) frm_month_g1

0x92f7,	// (0x0008cc1e) frm_month_g2

0x930a,	// (0x0008cc31) frm_month_g3

0x931d,	// (0x0008cc44) frm_month_g4

0x9330,	// (0x0008cc57) frm_month_g5

0x9343,	// (0x0008cc6a) frm_month_g6

0x9356,	// (0x0008cc7d) frm_month_g7

0xea1c,	// (0x00092343) frm_month_g8

0x9369,	// (0x0008cc90) frm_month_g9

0x9379,	// (0x0008cca0) frm_month_g10

0x9389,	// (0x0008ccb0) frm_month_g11

0x9399,	// (0x0008ccc0) frm_month_g12

0x93ab,	// (0x0008ccd2) frm_month_g13

0x93bd,	// (0x0008cce4) frm_month_g14

0x93d1,	// (0x0008ccf8) frm_month_g15

0x93e5,	// (0x0008cd0c) frm_month_g16

0x000f,

0xfde6,	// (0x0009370d) frm_month_g

0xea29,	// (0x00092350) cell_top_day_name_pane_t1

0x93f9,	// (0x0008cd20) cell_area_left_week_number_pane_g1

0x9405,	// (0x0008cd2c) cell_area_left_week_number_pane_t1

0x171f,	// (0x00085046) cell_month_view_pane_g1

0x9418,	// (0x0008cd3f) cell_month_view_pane_t1

0xedc5,	// (0x000926ec) main_fps_pane

0xde20,	// (0x00091747) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde20,	// (0x00091747) cmail_ddmenu_btn02_pane_cp1

0xde3c,	// (0x00091763) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde3c,	// (0x00091763) cmail_ddmenu_btn02_pane_cp2

0x8b95,	// (0x0008c4bc) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8b95,	// (0x0008c4bc) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd04,	// (0x0009362b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd04,	// (0x0009362b) cmail_ddmenu_btn02_pane_g

0x8bb3,	// (0x0008c4da) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8bb3,	// (0x0008c4da) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd09,	// (0x00093630) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd09,	// (0x00093630) cmail_ddmenu_btn02_pane_t

0x942b,	// (0x0008cd52) fps_text_pane_ParamLimits

0x942b,	// (0x0008cd52) fps_text_pane

0x9442,	// (0x0008cd69) main_fps_pane_g1_ParamLimits

0x9442,	// (0x0008cd69) main_fps_pane_g1

0x945c,	// (0x0008cd83) wait_bar_pane_cp010_ParamLimits

0x945c,	// (0x0008cd83) wait_bar_pane_cp010

0x946d,	// (0x0008cd94) fps_text_pane_t1_ParamLimits

0x946d,	// (0x0008cd94) fps_text_pane_t1

0xcb53,	// (0x0009047a) cam4_image_uncrop_pane_g1

0xcb5c,	// (0x00090483) cam4_image_uncrop_pane_g2

0x67e8,	// (0x0008a10f) cam4_image_uncrop_pane_g3

0x67f1,	// (0x0008a118) cam4_image_uncrop_pane_g4

0x0003,

0xf848,	// (0x0009316f) cam4_image_uncrop_pane_g

0x9235,	// (0x0008cb5c) dia3_listrow_pane_ParamLimits

0xedc5,	// (0x000926ec) main_phob2_pane

0x87c8,	// (0x0008c0ef) cell_tport_appsw_pane_cp02_ParamLimits

0x87c8,	// (0x0008c0ef) cell_tport_appsw_pane_cp02

0x87dc,	// (0x0008c103) cell_tport_appsw_pane_cp03_ParamLimits

0x87dc,	// (0x0008c103) cell_tport_appsw_pane_cp03

0xedc5,	// (0x000926ec) phob2_contact_card_pane

0xedc5,	// (0x000926ec) phob2_listscroll_pane

0xea3c,	// (0x00092363) phob2_list_pane

0xea44,	// (0x0009236b) scroll_pane_cp034

0x9485,	// (0x0008cdac) phob2_cc_data_pane_ParamLimits

0x9485,	// (0x0008cdac) phob2_cc_data_pane

0x94a4,	// (0x0008cdcb) phob2_cc_listscroll_pane_ParamLimits

0x94a4,	// (0x0008cdcb) phob2_cc_listscroll_pane

0x903e,	// (0x0008c965) list_double_large_graphic_phob2_pane_ParamLimits

0x903e,	// (0x0008c965) list_double_large_graphic_phob2_pane

0x94c2,	// (0x0008cde9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x94c2,	// (0x0008cde9) list_double_large_graphic_phob2_pane_g1

0x0ce6,	// (0x0008460d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0ce6,	// (0x0008460d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe07,	// (0x0009372e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe07,	// (0x0009372e) list_double_large_graphic_phob2_pane_g

0x0cfe,	// (0x00084625) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0cfe,	// (0x00084625) list_double_large_graphic_phob2_pane_t1

0x0d13,	// (0x0008463a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0d13,	// (0x0008463a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe10,	// (0x00093737) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe10,	// (0x00093737) list_double_large_graphic_phob2_pane_t

0xedc5,	// (0x000926ec) list_highlight_pane_cp024

0xea4c,	// (0x00092373) phob2_cc_button_pane

0x94dd,	// (0x0008ce04) phob2_cc_data_pane_g1_ParamLimits

0x94dd,	// (0x0008ce04) phob2_cc_data_pane_g1

0x94f4,	// (0x0008ce1b) phob2_cc_data_pane_g2_ParamLimits

0x94f4,	// (0x0008ce1b) phob2_cc_data_pane_g2

0x0001,

0xfe15,	// (0x0009373c) phob2_cc_data_pane_g_ParamLimits

0xfe15,	// (0x0009373c) phob2_cc_data_pane_g

0x9506,	// (0x0008ce2d) phob2_cc_data_pane_t1_ParamLimits

0x9506,	// (0x0008ce2d) phob2_cc_data_pane_t1

0x951e,	// (0x0008ce45) phob2_cc_data_pane_t2_ParamLimits

0x951e,	// (0x0008ce45) phob2_cc_data_pane_t2

0x9536,	// (0x0008ce5d) phob2_cc_data_pane_t3_ParamLimits

0x9536,	// (0x0008ce5d) phob2_cc_data_pane_t3

0x0002,

0xfe1a,	// (0x00093741) phob2_cc_data_pane_t_ParamLimits

0xfe1a,	// (0x00093741) phob2_cc_data_pane_t

0xea54,	// (0x0009237b) phob2_cc_list_pane_ParamLimits

0xea54,	// (0x0009237b) phob2_cc_list_pane

0xcfa5,	// (0x000908cc) scroll_pane_cp035_ParamLimits

0xcfa5,	// (0x000908cc) scroll_pane_cp035

0xedcf,	// (0x000926f6) bg_button_pane_cp033

0xea60,	// (0x00092387) phob2_cc_button_pane_g1

0xea6c,	// (0x00092393) phob2_cc_button_pane_t1

0xea81,	// (0x000923a8) phob2_cc_button_pane_t2

0x0001,

0xfe21,	// (0x00093748) phob2_cc_button_pane_t

0x954e,	// (0x0008ce75) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x954e,	// (0x0008ce75) list_double_large_graphic_phob2_cc_pane

0x9580,	// (0x0008cea7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9580,	// (0x0008cea7) list_double_large_graphic_phob2_cc_pane_g1

0x0d28,	// (0x0008464f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0d28,	// (0x0008464f) list_double_large_graphic_phob2_cc_pane_g2

0x958c,	// (0x0008ceb3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x958c,	// (0x0008ceb3) list_double_large_graphic_phob2_cc_pane_g3

0x0d34,	// (0x0008465b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0d34,	// (0x0008465b) list_double_large_graphic_phob2_cc_pane_g4

0x0d40,	// (0x00084667) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0d40,	// (0x00084667) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe26,	// (0x0009374d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe26,	// (0x0009374d) list_double_large_graphic_phob2_cc_pane_g

0x0d4c,	// (0x00084673) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0d4c,	// (0x00084673) list_double_large_graphic_phob2_cc_pane_t1

0x0d75,	// (0x0008469c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0d75,	// (0x0008469c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe31,	// (0x00093758) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe31,	// (0x00093758) list_double_large_graphic_phob2_cc_pane_t

0xea93,	// (0x000923ba) list_highlight_pane_cp025_ParamLimits

0xea93,	// (0x000923ba) list_highlight_pane_cp025

0xedcf,	// (0x000926f6) bg_button_pane_cp033_ParamLimits

0xea60,	// (0x00092387) phob2_cc_button_pane_g1_ParamLimits

0xea6c,	// (0x00092393) phob2_cc_button_pane_t1_ParamLimits

0xea81,	// (0x000923a8) phob2_cc_button_pane_t2_ParamLimits

0xfe21,	// (0x00093748) phob2_cc_button_pane_t_ParamLimits

0x0fd6,	// (0x000848fd) popup_wgtman_window

0xcdb6,	// (0x000906dd) scroll_pane_cp038

0x8fb7,	// (0x0008c8de) wgtman_btn_pane_cp_01_ParamLimits

0x8fb7,	// (0x0008c8de) wgtman_btn_pane_cp_01

0xeaa1,	// (0x000923c8) wgtman_content_pane

0xeaaa,	// (0x000923d1) wgtman_heading_pane

0xedc5,	// (0x000926ec) bg_heading_pane_cp02

0xeab3,	// (0x000923da) wgtman_heading_pane_g1

0xeabb,	// (0x000923e2) wgtman_heading_pane_t1

0xeac9,	// (0x000923f0) scroll_pane_cp036

0xead1,	// (0x000923f8) wgtman_list_pane

0xdc9f,	// (0x000915c6) wgtman_list_pane_t1_ParamLimits

0xdc9f,	// (0x000915c6) wgtman_list_pane_t1

0xcb3f,	// (0x00090466) cam4_grid_pane

0x075c,	// (0x00084083) bg_button_pane_cp015_ParamLimits

0x73f1,	// (0x0008ad18) bg_button_pane_cp016_ParamLimits

0x73fd,	// (0x0008ad24) bg_button_pane_cp017_ParamLimits

0x742e,	// (0x0008ad55) popup_vitu2_query_window_g3_ParamLimits

0x742e,	// (0x0008ad55) popup_vitu2_query_window_g3

0x07fd,	// (0x00084124) popup_vitu2_query_window_t6_ParamLimits

0x07fd,	// (0x00084124) popup_vitu2_query_window_t6

0x0828,	// (0x0008414f) popup_vitu2_query_window_t7_ParamLimits

0x0828,	// (0x0008414f) popup_vitu2_query_window_t7

0xcb53,	// (0x0009047a) cam4_grid_pane_g1

0xcb5c,	// (0x00090483) cam4_grid_pane_g2

0xead9,	// (0x00092400) cam4_grid_pane_g3

0xeae2,	// (0x00092409) cam4_grid_pane_g4

0x0003,

0xfe36,	// (0x0009375d) cam4_grid_pane_g

0x24d0,	// (0x00085df7) aid_placing_vt_slider_lsc_ParamLimits

0x281d,	// (0x00086144) vidtel_button_pane_ParamLimits

0x281d,	// (0x00086144) vidtel_button_pane

0xedc5,	// (0x000926ec) bg_button_pane_cp034

0xeaed,	// (0x00092414) vidtel_button_pane_g1

0xeaf5,	// (0x0009241c) vidtel_button_pane_t1

0xceec,	// (0x00090813) aid_size_vtel_slider_touch

0xcfa5,	// (0x000908cc) scroll_pane_cp039

0x8056,	// (0x0008b97d) ncim_query_button_pane_cp01_ParamLimits

0x8075,	// (0x0008b99c) ncimui_query_pane_g1_ParamLimits

0xedcf,	// (0x000926f6) input_focus_pane_cp012_ParamLimits

0xd89c,	// (0x000911c3) ncim_query_entry_pane_t1_ParamLimits

0xcfa5,	// (0x000908cc) scroll_pane_cp039_ParamLimits

0x3de8,	// (0x0008770f) navi_pane_bcale_mc_g1

0x3df0,	// (0x00087717) navi_pane_bcale_mc_t1

0xde70,	// (0x00091797) main_sp_fs_email_pane_g1

0xde7c,	// (0x000917a3) main_sp_fs_email_pane_g2

0x0001,

0xfc39,	// (0x00093560) main_sp_fs_email_pane_g

0xe2cb,	// (0x00091bf2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe2cb,	// (0x00091bf2) list_single_cale_mrui_row_pane_g3

0x0c44,	// (0x0008456b) list_single_recal_day_pane_g5_event_pane

0xe4aa,	// (0x00091dd1) list_single_recal_day_pane_g7

0xeb0b,	// (0x00092432) list_recal_day_event_pane_cp01

0xeb14,	// (0x0009243b) list_recal_vselct_arw_lo_pane_cp01

0xeb1c,	// (0x00092443) list_recal_vselct_arw_up_pane_cp01

0xeb24,	// (0x0009244b) list_recal_vselct_pane_cp01

0xcefc,	// (0x00090823) list_recal_day_event_pane_cp01_g1

0xe4df,	// (0x00091e06) list_recal_day_event_pane_cp01_t1

0xe4b2,	// (0x00091dd9) list_single_recal_day_pane_t1_ParamLimits

0xe4c4,	// (0x00091deb) list_single_recal_day_pane_t2_ParamLimits

0xfd19,	// (0x00093640) list_single_recal_day_pane_t_ParamLimits

0x16a4,	// (0x00084fcb) bg_notes_pane_ParamLimits

0x18bf,	// (0x000851e6) list_notes_pane_ParamLimits

0x18cd,	// (0x000851f4) scroll_pane_cp06_ParamLimits

0x18f5,	// (0x0008521c) main_notes_pane_ParamLimits

0xedcf,	// (0x000926f6) main_welc_pane

0x95c5,	// (0x0008ceec) main_welc_body_pane_ParamLimits

0x95c5,	// (0x0008ceec) main_welc_body_pane

0x95e2,	// (0x0008cf09) main_welc_opti_pane_ParamLimits

0x95e2,	// (0x0008cf09) main_welc_opti_pane

0x965b,	// (0x0008cf82) main_welc_pane_t1_ParamLimits

0x965b,	// (0x0008cf82) main_welc_pane_t1

0x9853,	// (0x0008d17a) main_welc_body_row_pane_ParamLimits

0x9853,	// (0x0008d17a) main_welc_body_row_pane

0x1711,	// (0x00085038) main_welc_opti_row_pane_ParamLimits

0x1711,	// (0x00085038) main_welc_opti_row_pane

0xeb3e,	// (0x00092465) main_welc_opti_row_pane_g1

0x9868,	// (0x0008d18f) main_welc_opti_row_pane_t1

0xeb46,	// (0x0009246d) main_welc_body_row_pane_t1

0xe83b,	// (0x00092162) popup_notif_wgt_heading_pane

0xe855,	// (0x0009217c) aid_size_list_notif_wgt_del_ParamLimits

0xe862,	// (0x00092189) list_notif_wgt_row_pane_g1_ParamLimits

0xe86e,	// (0x00092195) list_notif_wgt_row_pane_g2_ParamLimits

0xe87d,	// (0x000921a4) list_notif_wgt_row_pane_g3_ParamLimits

0xfd80,	// (0x000936a7) list_notif_wgt_row_pane_g_ParamLimits

0xe88a,	// (0x000921b1) list_notif_wgt_row_pane_t1_ParamLimits

0xe8a0,	// (0x000921c7) list_notif_wgt_row_pane_t2_ParamLimits

0xe8b2,	// (0x000921d9) list_notif_wgt_row_pane_t3_ParamLimits

0xfd87,	// (0x000936ae) list_notif_wgt_row_pane_t_ParamLimits

0x9051,	// (0x0008c978) listrow_wgtman_pane_g1_ParamLimits

0x905e,	// (0x0008c985) listrow_wgtman_pane_g2_ParamLimits

0xfdb7,	// (0x000936de) listrow_wgtman_pane_g_ParamLimits

0x0c96,	// (0x000845bd) listrow_wgtman_pane_t1_ParamLimits

0x0cae,	// (0x000845d5) listrow_wgtman_pane_t2_ParamLimits

0xfdbc,	// (0x000936e3) listrow_wgtman_pane_t_ParamLimits

0x0cd4,	// (0x000845fb) wait_bar_pane_cp09_ParamLimits

0xedc5,	// (0x000926ec) bg_popup_heading_pane_cp02

0xeb55,	// (0x0009247c) popup_notif_wgt_heading_pane_g1

0xeb5d,	// (0x00092484) popup_notif_wgt_heading_pane_t1

0xedc5,	// (0x000926ec) main_vids_pane

0xedc5,	// (0x000926ec) vids_listscroll_pane

0x9877,	// (0x0008d19e) scroll_pane_cp040

0xedc5,	// (0x000926ec) vids_list_pane

0x9882,	// (0x0008d1a9) vids_list_double_pane_ParamLimits

0x9882,	// (0x0008d1a9) vids_list_double_pane

0x9893,	// (0x0008d1ba) vids_list_double_pane_g1

0x989c,	// (0x0008d1c3) vids_list_double_pane_t1

0x98ab,	// (0x0008d1d2) vids_list_double_pane_t2

0x0001,

0xfe55,	// (0x0009377c) vids_list_double_pane_t

0xedcf,	// (0x000926f6) main_ncimui_pane_ParamLimits

0x7e8c,	// (0x0008b7b3) main_ncimui_pane_g1_ParamLimits

0x7e98,	// (0x0008b7bf) main_ncimui_pane_g2_ParamLimits

0x7e98,	// (0x0008b7bf) main_ncimui_pane_g2

0x0001,

0xfb3a,	// (0x00093461) main_ncimui_pane_g_ParamLimits

0xfb3a,	// (0x00093461) main_ncimui_pane_g

0x95fd,	// (0x0008cf24) main_welc_pane_g1_ParamLimits

0x95fd,	// (0x0008cf24) main_welc_pane_g1

0x9612,	// (0x0008cf39) main_welc_pane_g2_ParamLimits

0x9612,	// (0x0008cf39) main_welc_pane_g2

0x0003,

0xfe3f,	// (0x00093766) main_welc_pane_g_ParamLimits

0xfe3f,	// (0x00093766) main_welc_pane_g

0x16a4,	// (0x00084fcb) listscroll_mce_pane_ParamLimits

0x3f7f,	// (0x000878a6) wait_bar_pane_cp10

0xba76,	// (0x0008f39d) main_cale_day_pane_ParamLimits

0xba76,	// (0x0008f39d) main_cale_week_pane_ParamLimits

0x16a4,	// (0x00084fcb) main_messa_pane_ParamLimits

0x5bfa,	// (0x00089521) main_clock2_btn_pane_ParamLimits

0x5bfa,	// (0x00089521) main_clock2_btn_pane

0xc391,	// (0x0008fcb8) main_clock2_btn_pane_cp01_ParamLimits

0xc391,	// (0x0008fcb8) main_clock2_btn_pane_cp01

0xe257,	// (0x00091b7e) list_cale_mrui_pane_ParamLimits

0xe8e8,	// (0x0009220f) main_cf0_pane_g2

0x0001,

0xfd8e,	// (0x000936b5) main_cf0_pane_g

0x9257,	// (0x0008cb7e) area_left_week_number_pane_ParamLimits

0x9263,	// (0x0008cb8a) area_top_day_name_pane_ParamLimits

0x9276,	// (0x0008cb9d) frame_month_view_pane_ParamLimits

0xea01,	// (0x00092328) grid_month_view_pane_ParamLimits

0xea0f,	// (0x00092336) frm_month_g1_ParamLimits

0x92f7,	// (0x0008cc1e) frm_month_g2_ParamLimits

0x930a,	// (0x0008cc31) frm_month_g3_ParamLimits

0x931d,	// (0x0008cc44) frm_month_g4_ParamLimits

0x9330,	// (0x0008cc57) frm_month_g5_ParamLimits

0x9343,	// (0x0008cc6a) frm_month_g6_ParamLimits

0x9356,	// (0x0008cc7d) frm_month_g7_ParamLimits

0xea1c,	// (0x00092343) frm_month_g8_ParamLimits

0x9369,	// (0x0008cc90) frm_month_g9_ParamLimits

0x9379,	// (0x0008cca0) frm_month_g10_ParamLimits

0x9389,	// (0x0008ccb0) frm_month_g11_ParamLimits

0x9399,	// (0x0008ccc0) frm_month_g12_ParamLimits

0x93ab,	// (0x0008ccd2) frm_month_g13_ParamLimits

0x93bd,	// (0x0008cce4) frm_month_g14_ParamLimits

0x93d1,	// (0x0008ccf8) frm_month_g15_ParamLimits

0x93e5,	// (0x0008cd0c) frm_month_g16_ParamLimits

0xfde6,	// (0x0009370d) frm_month_g_ParamLimits

0xea29,	// (0x00092350) cell_top_day_name_pane_t1_ParamLimits

0x93f9,	// (0x0008cd20) cell_area_left_week_number_pane_g1_ParamLimits

0x9405,	// (0x0008cd2c) cell_area_left_week_number_pane_t1_ParamLimits

0x171f,	// (0x00085046) cell_month_view_pane_g1_ParamLimits

0x9418,	// (0x0008cd3f) cell_month_view_pane_t1_ParamLimits

0x169c,	// (0x00084fc3) main_clock2_btn_pane_g1

0xeb6b,	// (0x00092492) main_clock2_btn_pane_t1

0xedcf,	// (0x000926f6) listscroll_cmail_pane_ParamLimits

0xde70,	// (0x00091797) main_sp_fs_email_pane_g1_ParamLimits

0xde7c,	// (0x000917a3) main_sp_fs_email_pane_g2_ParamLimits

0xfc39,	// (0x00093560) main_sp_fs_email_pane_g_ParamLimits

0xe41a,	// (0x00091d41) list_recal_day_pane_ParamLimits

0xe42b,	// (0x00091d52) mian_recal_day_pane_t1

0x0a31,	// (0x00084358) list_single_dyc_row_text_pane_t4_ParamLimits

0x0a31,	// (0x00084358) list_single_dyc_row_text_pane_t4

0x0a7a,	// (0x000843a1) list_single_dyc_row_text_pane_t5_ParamLimits

0x0a7a,	// (0x000843a1) list_single_dyc_row_text_pane_t5

0xdf1e,	// (0x00091845) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf1e,	// (0x00091845) list_single_dyc_row_text_pane_t6

0x35bd,	// (0x00086ee4) aid_mgn_list_cale_time_pane

0xedcf,	// (0x000926f6) main_gallery2_pane_ParamLimits

0xc3a7,	// (0x0008fcce) main_clock2_pane_cp01_t1

0xc3b5,	// (0x0008fcdc) main_clock2_pane_cp01_t3

0x0001,

0xf71f,	// (0x00093046) main_clock2_pane_cp01_t

0x1db7,	// (0x000856de) cale_week_scroll_pane_g16_ParamLimits

0x1db7,	// (0x000856de) cale_week_scroll_pane_g16

0x21c2,	// (0x00085ae9) vorec_slider_pane

0xeaf5,	// (0x0009241c) vidtel_button_pane_t1_ParamLimits

0x8c21,	// (0x0008c548) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8c21,	// (0x0008c548) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8c32,	// (0x0008c559) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8c32,	// (0x0008c559) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd3c,	// (0x00093663) main_fs_bigclock_clock_pane_g_ParamLimits

0x8c45,	// (0x0008c56c) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8c5b,	// (0x0008c582) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd45,	// (0x0009366c) main_fs_bigclock_clock_pane_t_ParamLimits

0x54d6,	// (0x00088dfd) main_mup3_lyrics_pane_ParamLimits

0x54d6,	// (0x00088dfd) main_mup3_lyrics_pane

0x98d3,	// (0x0008d1fa) main_mup3_lyrics_pane_t1_ParamLimits

0x98d3,	// (0x0008d1fa) main_mup3_lyrics_pane_t1

0xc7d4,	// (0x000900fb) aid_main_mp4_pane_t1_area

0xc7de,	// (0x00090105) aid_main_mp4_pane_t2_area

0xc88a,	// (0x000901b1) main_mp4_pane_g7_ParamLimits

0xc88a,	// (0x000901b1) main_mp4_pane_g7

0xc896,	// (0x000901bd) main_mp4_pane_g8_ParamLimits

0xc896,	// (0x000901bd) main_mp4_pane_g8

0x65b9,	// (0x00089ee0) aid_call6_pane_g1_size

0x9569,	// (0x0008ce90) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9569,	// (0x0008ce90) list_double_large_graphic_phob2_other_pane

0x3b74,	// (0x0008749b) list_double_large_graphic_phob2_other_pane_g1

0xedc5,	// (0x000926ec) list_highlight_pane_cp026

0xedcf,	// (0x000926f6) main_welc_pane_ParamLimits

0x8673,	// (0x0008bf9a) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8673,	// (0x0008bf9a) main_sp_fs_ctrlbar_pane_g3

0x868d,	// (0x0008bfb4) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x868d,	// (0x0008bfb4) main_sp_fs_ctrlbar_pane_g4

0x86c1,	// (0x0008bfe8) toolbar2_fixed_button_pane_cp01

0x86cc,	// (0x0008bff3) toolbar2_fixed_button_pane_cp02

0x86d9,	// (0x0008c000) toolbar2_fixed_button_pane_cp03

0x95ab,	// (0x0008ced2) list_welc_entry_pane_ParamLimits

0x95ab,	// (0x0008ced2) list_welc_entry_pane

0x9627,	// (0x0008cf4e) main_welc_pane_g3_ParamLimits

0x9627,	// (0x0008cf4e) main_welc_pane_g3

0x9679,	// (0x0008cfa0) main_welc_pane_t2_ParamLimits

0x9679,	// (0x0008cfa0) main_welc_pane_t2

0x9694,	// (0x0008cfbb) main_welc_pane_t3_ParamLimits

0x9694,	// (0x0008cfbb) main_welc_pane_t3

0x0005,

0xfe48,	// (0x0009376f) main_welc_pane_t_ParamLimits

0xfe48,	// (0x0009376f) main_welc_pane_t

0x97c4,	// (0x0008d0eb) welc_button_pane_ParamLimits

0x97c4,	// (0x0008d0eb) welc_button_pane

0x983e,	// (0x0008d165) welc_service_logo_pane_ParamLimits

0x983e,	// (0x0008d165) welc_service_logo_pane

0x98ef,	// (0x0008d216) list_single_welc_entry_pane_ParamLimits

0x98ef,	// (0x0008d216) list_single_welc_entry_pane

0x9900,	// (0x0008d227) list_single_welc_entry_pane_g1

0x9908,	// (0x0008d22f) list_single_welc_entry_pane_t1

0x9916,	// (0x0008d23d) list_single_welc_entry_pane_t2

0x0001,

0xfe5a,	// (0x00093781) list_single_welc_entry_pane_t

0xedc5,	// (0x000926ec) bg_button_pane_cp035

0x9924,	// (0x0008d24b) welc_button_pane_t1

0xeb87,	// (0x000924ae) welc_service_logo_pane_g1

0xeb90,	// (0x000924b7) welc_service_logo_pane_g2

0x0001,

0x0568,	// (0x00083e8f) welc_service_logo_pane_g

0xedc5,	// (0x000926ec) main_int_radio_pane

0xd73a,	// (0x00091061) list_single_fs_dyc_pane_g1

0x0cf2,	// (0x00084619) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0cf2,	// (0x00084619) list_double_large_graphic_phob2_pane_g3

0x94cf,	// (0x0008cdf6) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x94cf,	// (0x0008cdf6) list_double_large_graphic_phob2_pane_g4

0x9932,	// (0x0008d259) main_int_radio1_pane_ParamLimits

0x9932,	// (0x0008d259) main_int_radio1_pane

0xeb99,	// (0x000924c0) find_pane_cp02

0x994f,	// (0x0008d276) input_focus_pane_cp12_ParamLimits

0x994f,	// (0x0008d276) input_focus_pane_cp12

0x995f,	// (0x0008d286) input_focus_pane_cp13_ParamLimits

0x995f,	// (0x0008d286) input_focus_pane_cp13

0x9973,	// (0x0008d29a) input_focus_pane_cp14_ParamLimits

0x9973,	// (0x0008d29a) input_focus_pane_cp14

0xeba2,	// (0x000924c9) int_radio1_listscroll_pane

0x9987,	// (0x0008d2ae) main_int_radio1_pane_g1_ParamLimits

0x9987,	// (0x0008d2ae) main_int_radio1_pane_g1

0x999f,	// (0x0008d2c6) main_int_radio1_pane_t1_ParamLimits

0x999f,	// (0x0008d2c6) main_int_radio1_pane_t1

0x99ba,	// (0x0008d2e1) main_int_radio1_pane_t2_ParamLimits

0x99ba,	// (0x0008d2e1) main_int_radio1_pane_t2

0x99d5,	// (0x0008d2fc) main_int_radio1_pane_t3_ParamLimits

0x99d5,	// (0x0008d2fc) main_int_radio1_pane_t3

0x99f0,	// (0x0008d317) main_int_radio1_pane_t4_ParamLimits

0x99f0,	// (0x0008d317) main_int_radio1_pane_t4

0xebac,	// (0x000924d3) main_int_radio1_pane_t5_ParamLimits

0xebac,	// (0x000924d3) main_int_radio1_pane_t5

0x9a02,	// (0x0008d329) main_int_radio1_pane_t6_ParamLimits

0x9a02,	// (0x0008d329) main_int_radio1_pane_t6

0x9a17,	// (0x0008d33e) main_int_radio1_pane_t7_ParamLimits

0x9a17,	// (0x0008d33e) main_int_radio1_pane_t7

0x9a2c,	// (0x0008d353) main_int_radio1_pane_t8_ParamLimits

0x9a2c,	// (0x0008d353) main_int_radio1_pane_t8

0x9a4b,	// (0x0008d372) main_int_radio1_pane_t9_ParamLimits

0x9a4b,	// (0x0008d372) main_int_radio1_pane_t9

0x9a5d,	// (0x0008d384) main_int_radio1_pane_t10_ParamLimits

0x9a5d,	// (0x0008d384) main_int_radio1_pane_t10

0x9a83,	// (0x0008d3aa) main_int_radio1_pane_t11_ParamLimits

0x9a83,	// (0x0008d3aa) main_int_radio1_pane_t11

0x9aa9,	// (0x0008d3d0) main_int_radio1_pane_t12_ParamLimits

0x9aa9,	// (0x0008d3d0) main_int_radio1_pane_t12

0x000b,

0xfe5f,	// (0x00093786) main_int_radio1_pane_t_ParamLimits

0xfe5f,	// (0x00093786) main_int_radio1_pane_t

0xebbe,	// (0x000924e5) int_radio_list_pane

0xea44,	// (0x0009236b) scroll_pane_cp037

0xebc6,	// (0x000924ed) list_double_large_graphic_int_radio_pane_ParamLimits

0xebc6,	// (0x000924ed) list_double_large_graphic_int_radio_pane

0xebdf,	// (0x00092506) list_double_large_graphic_int_radio_pane_g1

0xe4ed,	// (0x00091e14) list_double_large_graphic_int_radio_pane_t1

0xe4fb,	// (0x00091e22) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe78,	// (0x0009379f) list_double_large_graphic_int_radio_pane_t

0xedc5,	// (0x000926ec) list_highlight_pane_cp027

0xeb2e,	// (0x00092455) main_button_pane_4

0x963a,	// (0x0008cf61) main_welc_pane_g4_ParamLimits

0x963a,	// (0x0008cf61) main_welc_pane_g4

0x96ad,	// (0x0008cfd4) main_welc_pane_t4_ParamLimits

0x96ad,	// (0x0008cfd4) main_welc_pane_t4

0x96c4,	// (0x0008cfeb) main_welc_pane_t5_ParamLimits

0x96c4,	// (0x0008cfeb) main_welc_pane_t5

0x9701,	// (0x0008d028) main_welc_pane_t6_ParamLimits

0x9701,	// (0x0008d028) main_welc_pane_t6

0x97db,	// (0x0008d102) welc_button_pane_2_ParamLimits

0x97db,	// (0x0008d102) welc_button_pane_2

0x97f7,	// (0x0008d11e) welc_button_pane_3_ParamLimits

0x97f7,	// (0x0008d11e) welc_button_pane_3

0xeb36,	// (0x0009245d) welc_button_pane_4

0x9816,	// (0x0008d13d) welc_button_pane_5_ParamLimits

0x9816,	// (0x0008d13d) welc_button_pane_5

0x0dda,	// (0x00084701) main_popup_welc_pane

0xebf7,	// (0x0009251e) main_welc_sk_g3

0xec01,	// (0x00092528) main_welc_sk_g4

0xec0b,	// (0x00092532) main_welc_sk_t3

0xec1b,	// (0x00092542) main_welc_sk_t4

0xec2b,	// (0x00092552) popup_welc_pane_t4

0xec39,	// (0x00092560) popup_welc_pane_t5

0xec47,	// (0x0009256e) popup_welc_pane_t6

0xedc5,	// (0x000926ec) main_acti_pane

0xedc5,	// (0x000926ec) main_sso_pane

0x9abb,	// (0x0008d3e2) sso_body_pane_ParamLimits

0x9abb,	// (0x0008d3e2) sso_body_pane

0x9acf,	// (0x0008d3f6) sso_logo_pane_ParamLimits

0x9acf,	// (0x0008d3f6) sso_logo_pane

0x9aff,	// (0x0008d426) sso_sk_pane_ParamLimits

0x9aff,	// (0x0008d426) sso_sk_pane

0x23af,	// (0x00085cd6) main_sso_logo_pane_g1

0x9b11,	// (0x0008d438) sso_sk_pane_t1_ParamLimits

0x9b11,	// (0x0008d438) sso_sk_pane_t1

0x9b2b,	// (0x0008d452) sso_sk_pane_t2_ParamLimits

0x9b2b,	// (0x0008d452) sso_sk_pane_t2

0x0001,

0xfe7d,	// (0x000937a4) sso_sk_pane_t_ParamLimits

0xfe7d,	// (0x000937a4) sso_sk_pane_t

0xec85,	// (0x000925ac) aid_sso_gap

0xec8e,	// (0x000925b5) aid_sso_txt1

0xec98,	// (0x000925bf) aid_sso_txt2

0xeca2,	// (0x000925c9) aid_sso_txt3

0x0002,

0x0590,	// (0x00083eb7) aid_sso_txt

0xecac,	// (0x000925d3) aid_sso_widget

0x9b95,	// (0x0008d4bc) sso_btn_pane_ParamLimits

0x9b95,	// (0x0008d4bc) sso_btn_pane

0x9c1d,	// (0x0008d544) sso_option_pane_ParamLimits

0x9c1d,	// (0x0008d544) sso_option_pane

0x9c9d,	// (0x0008d5c4) sso_query_pane_ParamLimits

0x9c9d,	// (0x0008d5c4) sso_query_pane

0x9cf3,	// (0x0008d61a) sso_query_pane_cp01_ParamLimits

0x9cf3,	// (0x0008d61a) sso_query_pane_cp01

0x9d4b,	// (0x0008d672) sso_t_hdr_pane_ParamLimits

0x9d4b,	// (0x0008d672) sso_t_hdr_pane

0x9d75,	// (0x0008d69c) sso_t_nml_pane_ParamLimits

0x9d75,	// (0x0008d69c) sso_t_nml_pane

0xecb6,	// (0x000925dd) sso_t_sub_pane

0x9adc,	// (0x0008d403) sso_popup_window_ParamLimits

0x9adc,	// (0x0008d403) sso_popup_window

0x9b41,	// (0x0008d468) sso_apps_pane_ParamLimits

0x9b41,	// (0x0008d468) sso_apps_pane

0x9b6b,	// (0x0008d492) sso_body_pane_g1

0x9b75,	// (0x0008d49c) sso_body_pane_t1

0x9b85,	// (0x0008d4ac) sso_body_pane_t2

0x0001,

0xfe82,	// (0x000937a9) sso_body_pane_t

0x9be7,	// (0x0008d50e) sso_btn_pane_cp01_ParamLimits

0x9be7,	// (0x0008d50e) sso_btn_pane_cp01

0x9c71,	// (0x0008d598) sso_prog_pane_ParamLimits

0x9c71,	// (0x0008d598) sso_prog_pane

0x9dcb,	// (0x0008d6f2) sso_t_hdr_pane_t1_ParamLimits

0x9dcb,	// (0x0008d6f2) sso_t_hdr_pane_t1

0xeccb,	// (0x000925f2) input_focus_pane_cp10_ParamLimits

0xeccb,	// (0x000925f2) input_focus_pane_cp10

0xece5,	// (0x0009260c) sso_query_pane_t1_ParamLimits

0xece5,	// (0x0009260c) sso_query_pane_t1

0xecf8,	// (0x0009261f) sso_query_pane_t2_ParamLimits

0xecf8,	// (0x0009261f) sso_query_pane_t2

0xed13,	// (0x0009263a) sso_query_pane_t3_ParamLimits

0xed13,	// (0x0009263a) sso_query_pane_t3

0xed3d,	// (0x00092664) sso_query_pane_t4_ParamLimits

0xed3d,	// (0x00092664) sso_query_pane_t4

0x0003,

0x059c,	// (0x00083ec3) sso_query_pane_t_ParamLimits

0x059c,	// (0x00083ec3) sso_query_pane_t

0xedc5,	// (0x000926ec) bg_button_pane_cp22

0xebe8,	// (0x0009250f) sso_btn_pane_t1

0x9dde,	// (0x0008d705) sso_t_nml_pane_t1_ParamLimits

0x9dde,	// (0x0008d705) sso_t_nml_pane_t1

0xed61,	// (0x00092688) sso_option_row_pane_ParamLimits

0xed61,	// (0x00092688) sso_option_row_pane

0xed74,	// (0x0009269b) sso_t_sub_pane_t1_ParamLimits

0xed74,	// (0x0009269b) sso_t_sub_pane_t1

0xedcf,	// (0x000926f6) bg_popup_window_pane_cp11_ParamLimits

0xedcf,	// (0x000926f6) bg_popup_window_pane_cp11

0xed91,	// (0x000926b8) popup_sk_window_cp01_ParamLimits

0xed91,	// (0x000926b8) popup_sk_window_cp01

0xed9e,	// (0x000926c5) sso_popup_body_pane_ParamLimits

0xed9e,	// (0x000926c5) sso_popup_body_pane

0xedab,	// (0x000926d2) scroll_pane_cp21_ParamLimits

0xedab,	// (0x000926d2) scroll_pane_cp21

0xedb8,	// (0x000926df) sso_popup_body_t_pane_ParamLimits

0xedb8,	// (0x000926df) sso_popup_body_t_pane

0xee5c,	// (0x00092783) sso_popup_body_t_hdr_pane_ParamLimits

0xee5c,	// (0x00092783) sso_popup_body_t_hdr_pane

0xee6f,	// (0x00092796) sso_popup_body_t_nml_pane_ParamLimits

0xee6f,	// (0x00092796) sso_popup_body_t_nml_pane

0xee8d,	// (0x000927b4) sso_popup_body_t_sub_pane_ParamLimits

0xee8d,	// (0x000927b4) sso_popup_body_t_sub_pane

0xeeb0,	// (0x000927d7) sso_popup_body_t_hdr_pane_t1

0x9df9,	// (0x0008d720) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9df9,	// (0x0008d720) sso_popup_body_t_nml_pane_t1

0xeec0,	// (0x000927e7) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeec0,	// (0x000927e7) sso_popup_body_t_sub_pane_t1

0x23af,	// (0x00085cd6) sso_prog_pane_g1

0x9e33,	// (0x0008d75a) sso_apps_pane_comp1_ParamLimits

0x9e33,	// (0x0008d75a) sso_apps_pane_comp1

0xeee5,	// (0x0009280c) sso_apps_pane_comp1_g1

0xeeed,	// (0x00092814) sso_apps_pane_comp1_t1

0xef09,	// (0x00092830) sso_option_row_pane_g1

0xef11,	// (0x00092838) sso_option_row_pane_t1

0x9598,	// (0x0008cebf) bg_welc_area_ParamLimits

0x9598,	// (0x0008cebf) bg_welc_area

0x973f,	// (0x0008d066) sso_t_hdr_pane_a_t1_ParamLimits

0x973f,	// (0x0008d066) sso_t_hdr_pane_a_t1

0x975a,	// (0x0008d081) sso_t_nml_pane_a_t1_ParamLimits

0x975a,	// (0x0008d081) sso_t_nml_pane_a_t1

0x9789,	// (0x0008d0b0) sso_t_sub_pane_a_t1_ParamLimits

0x9789,	// (0x0008d0b0) sso_t_sub_pane_a_t1

0xebe8,	// (0x0009250f) sso_btn_pane_t1_copy1

0xedc5,	// (0x000926ec) welc_button_pane_2_comp1

0xec55,	// (0x0009257c) sso_t_hdr_pane_p_t1

0xec65,	// (0x0009258c) sso_t_nml_pane_p_t1

0xec75,	// (0x0009259c) sso_t_sub_pane_p_t1

0xe004,	// (0x0009192b) list_cmail_pane_ParamLimits

0x982c,	// (0x0008d153) welc_button_pane_cp01_ParamLimits

0x982c,	// (0x0008d153) welc_button_pane_cp01

0xedc5,	// (0x000926ec) main_att_pane

0xeefb,	// (0x00092822) input_focus_pane_cp10_t1

0xef11,	// (0x00092838) sso_option_row_pane_t1_ParamLimits

0x9e4d,	// (0x0008d774) main_att_body_pane_ParamLimits

0x9e4d,	// (0x0008d774) main_att_body_pane

0x9e82,	// (0x0008d7a9) att_btn_pane_ParamLimits

0x9e82,	// (0x0008d7a9) att_btn_pane

0x9ea7,	// (0x0008d7ce) att_btn_pane_cp01_ParamLimits

0x9ea7,	// (0x0008d7ce) att_btn_pane_cp01

0x9ec7,	// (0x0008d7ee) att_li_srv_pane_ParamLimits

0x9ec7,	// (0x0008d7ee) att_li_srv_pane

0x9ee4,	// (0x0008d80b) att_opt_pane_ParamLimits

0x9ee4,	// (0x0008d80b) att_opt_pane

0x9f30,	// (0x0008d857) att_query_pane_ParamLimits

0x9f30,	// (0x0008d857) att_query_pane

0x9f7c,	// (0x0008d8a3) att_query_pane_cp01_ParamLimits

0x9f7c,	// (0x0008d8a3) att_query_pane_cp01

0x9fc8,	// (0x0008d8ef) att_t_hdr_pane_ParamLimits

0x9fc8,	// (0x0008d8ef) att_t_hdr_pane

0xa020,	// (0x0008d947) att_t_nml_pane_ParamLimits

0xa020,	// (0x0008d947) att_t_nml_pane

0xa059,	// (0x0008d980) att_t_nml_pane_cp01_ParamLimits

0xa059,	// (0x0008d980) att_t_nml_pane_cp01

0xa085,	// (0x0008d9ac) att_t_nmlb_pane_ParamLimits

0xa085,	// (0x0008d9ac) att_t_nmlb_pane

0xa0a2,	// (0x0008d9c9) att_term_pane_ParamLimits

0xa0a2,	// (0x0008d9c9) att_term_pane

0xa0ee,	// (0x0008da15) main_att_body_pane_g1_ParamLimits

0xa0ee,	// (0x0008da15) main_att_body_pane_g1

0xef27,	// (0x0009284e) att_t_hdr_pane_t1_ParamLimits

0xef27,	// (0x0009284e) att_t_hdr_pane_t1

0xef40,	// (0x00092867) att_t_nml_pane_t1_ParamLimits

0xef40,	// (0x00092867) att_t_nml_pane_t1

0xef65,	// (0x0009288c) att_btn_pane_t1

0xedc5,	// (0x000926ec) bg_button_pane_cp23

0xa125,	// (0x0008da4c) att_li_srv_row_pane_ParamLimits

0xa125,	// (0x0008da4c) att_li_srv_row_pane

0xef75,	// (0x0009289c) att_t_nmlb_pane_t1_ParamLimits

0xef75,	// (0x0009289c) att_t_nmlb_pane_t1

0xef8e,	// (0x000928b5) att_query_pane_t1

0xef9d,	// (0x000928c4) att_query_pane_t2

0xefac,	// (0x000928d3) att_query_pane_t3

0x0002,

0x05a5,	// (0x00083ecc) att_query_pane_t

0xefbb,	// (0x000928e2) input_focus_pane_cp11

0xefc4,	// (0x000928eb) att_term_pane_t1_ParamLimits

0xefc4,	// (0x000928eb) att_term_pane_t1

0xedc5,	// (0x000926ec) att_opt_row_pane

0xefe1,	// (0x00092908) att_opt_row_pane_g1

0xefe9,	// (0x00092910) att_opt_row_pane_t1_ParamLimits

0xefe9,	// (0x00092910) att_opt_row_pane_t1

0xa135,	// (0x0008da5c) att_li_srv_row_pane_g1

0xa13d,	// (0x0008da64) att_li_srv_row_pane_t1

0xa152,	// (0x0008da79) att_li_srv_row_pane_t2

0x0001,

0xfe87,	// (0x000937ae) att_li_srv_row_pane_t

0xedc5,	// (0x000926ec) main_call7_pane

0xedc5,	// (0x000926ec) main_vod_pane

0xecb6,	// (0x000925dd) sso_t_sub_pane_ParamLimits

0x9e63,	// (0x0008d78a) att_btn_emg_pane_ParamLimits

0x9e63,	// (0x0008d78a) att_btn_emg_pane

0xa13d,	// (0x0008da64) att_li_srv_row_pane_t1_ParamLimits

0xa152,	// (0x0008da79) att_li_srv_row_pane_t2_ParamLimits

0xfe87,	// (0x000937ae) att_li_srv_row_pane_t_ParamLimits

0xf002,	// (0x00092929) att_btn_close_pane_g1

0xedc5,	// (0x000926ec) bg_button_pane_cp24

0xa167,	// (0x0008da8e) main_vod_body_pane_ParamLimits

0xa167,	// (0x0008da8e) main_vod_body_pane

0xa17b,	// (0x0008daa2) main_vod_body_pane_g1_ParamLimits

0xa17b,	// (0x0008daa2) main_vod_body_pane_g1

0xa1af,	// (0x0008dad6) scroll_pane_cp24_ParamLimits

0xa1af,	// (0x0008dad6) scroll_pane_cp24

0xa1fd,	// (0x0008db24) vod_btn_pane_ParamLimits

0xa1fd,	// (0x0008db24) vod_btn_pane

0xa241,	// (0x0008db68) vod_det_pane_ParamLimits

0xa241,	// (0x0008db68) vod_det_pane

0xa271,	// (0x0008db98) vod_logo_g1_ParamLimits

0xa271,	// (0x0008db98) vod_logo_g1

0xa2af,	// (0x0008dbd6) vod_opt_pane_ParamLimits

0xa2af,	// (0x0008dbd6) vod_opt_pane

0xa2e2,	// (0x0008dc09) vod_opt_pane_cp01_ParamLimits

0xa2e2,	// (0x0008dc09) vod_opt_pane_cp01

0xa30e,	// (0x0008dc35) vod_query_pane_ParamLimits

0xa30e,	// (0x0008dc35) vod_query_pane

0xa33b,	// (0x0008dc62) vod_query_pane_cp01_ParamLimits

0xa33b,	// (0x0008dc62) vod_query_pane_cp01

0xa347,	// (0x0008dc6e) vod_t_nml_pane_ParamLimits

0xa347,	// (0x0008dc6e) vod_t_nml_pane

0xa3f0,	// (0x0008dd17) vod_t_nml_pane_cp01_ParamLimits

0xa3f0,	// (0x0008dd17) vod_t_nml_pane_cp01

0xa42c,	// (0x0008dd53) vod_t_sub_pane_ParamLimits

0xa42c,	// (0x0008dd53) vod_t_sub_pane

0xa461,	// (0x0008dd88) vod_t_sub_pane_cp01_ParamLimits

0xa461,	// (0x0008dd88) vod_t_sub_pane_cp01

0xefbb,	// (0x000928e2) vod_query_field_pane

0xef8e,	// (0x000928b5) vod_query_pane_t1

0xedc5,	// (0x000926ec) bg_button_pane_cp25

0xf00a,	// (0x00092931) sso_btn_pane_t1_copy2

0xa48d,	// (0x0008ddb4) vod_t_nml_pane_t1_ParamLimits

0xa48d,	// (0x0008ddb4) vod_t_nml_pane_t1

0xf01a,	// (0x00092941) vod_opt_row_pane_ParamLimits

0xf01a,	// (0x00092941) vod_opt_row_pane

0xf02c,	// (0x00092953) vod_t_sub_pane_t1_ParamLimits

0xf02c,	// (0x00092953) vod_t_sub_pane_t1

0xa4bc,	// (0x0008dde3) vod_det_cell_pane_ParamLimits

0xa4bc,	// (0x0008dde3) vod_det_cell_pane

0xedc5,	// (0x000926ec) input_focus_pane_cp15

0xa4d0,	// (0x0008ddf7) vod_query_field_pane_t1

0xa4de,	// (0x0008de05) vod_opt_row_pane_g1_ParamLimits

0xa4de,	// (0x0008de05) vod_opt_row_pane_g1

0xa4ea,	// (0x0008de11) vod_opt_row_pane_t1_ParamLimits

0xa4ea,	// (0x0008de11) vod_opt_row_pane_t1

0xa50f,	// (0x0008de36) vod_det_cell_field_pane

0xa518,	// (0x0008de3f) vod_det_cell_pane_g1

0xef8e,	// (0x000928b5) vod_det_cell_pane_t1

0xedc5,	// (0x000926ec) input_focus_pane_cp16

0xa4d0,	// (0x0008ddf7) vod_det_cell_field_pane_t1

0x8f0b,	// (0x0008c832) call7_btn_grp_pane_ParamLimits

0x8f0b,	// (0x0008c832) call7_btn_grp_pane

0xa520,	// (0x0008de47) call7_bubble_pane_ParamLimits

0xa520,	// (0x0008de47) call7_bubble_pane

0xa537,	// (0x0008de5e) cell_call7_btn_pane_ParamLimits

0xa537,	// (0x0008de5e) cell_call7_btn_pane

0xa54b,	// (0x0008de72) call7_pane_g1_ParamLimits

0xa54b,	// (0x0008de72) call7_pane_g1

0xa55a,	// (0x0008de81) call7_windows_conf_pane_ParamLimits

0xa55a,	// (0x0008de81) call7_windows_conf_pane

0xa574,	// (0x0008de9b) popup_call7_1st_window_ParamLimits

0xa574,	// (0x0008de9b) popup_call7_1st_window

0xa585,	// (0x0008deac) popup_call7_2nd_window_ParamLimits

0xa585,	// (0x0008deac) popup_call7_2nd_window

0xa596,	// (0x0008debd) popup_call7_3rd_window_ParamLimits

0xa596,	// (0x0008debd) popup_call7_3rd_window

0xedc5,	// (0x000926ec) bg_button_pane_cp26

0xe965,	// (0x0009228c) cell_call7_btn_pane_g1

0xee4d,	// (0x00092774) cell_call7_btn_pane_t1

0xedc5,	// (0x000926ec) bg_popup_window_pane_cp12

0xa5a7,	// (0x0008dece) popup_call7_1st_window_g1

0xa5af,	// (0x0008ded6) popup_call7_1st_window_g2

0xa5b7,	// (0x0008dede) popup_call7_1st_window_g3

0x0002,

0xfe8c,	// (0x000937b3) popup_call7_1st_window_g

0xa5bf,	// (0x0008dee6) popup_call7_1st_window_t1

0xa5ce,	// (0x0008def5) popup_call7_1st_window_t2

0xa5dc,	// (0x0008df03) popup_call7_1st_window_t3

0x0002,

0xfe93,	// (0x000937ba) popup_call7_1st_window_t

0xedc5,	// (0x000926ec) bg_popup_window_pane_cp13

0xa5ea,	// (0x0008df11) popup_call7_2nd_window_g1

0xa5f2,	// (0x0008df19) popup_call7_2nd_window_g2

0xa5fa,	// (0x0008df21) popup_call7_2nd_window_g3

0x0002,

0xfe9a,	// (0x000937c1) popup_call7_2nd_window_g

0xa602,	// (0x0008df29) popup_call7_2nd_window_t1

0xedc5,	// (0x000926ec) bg_popup_window_pane_cp14

0xa611,	// (0x0008df38) call7_list_conf_pane

0xa619,	// (0x0008df40) call7_list_conf_row_pane_ParamLimits

0xa619,	// (0x0008df40) call7_list_conf_row_pane

0xa62c,	// (0x0008df53) call7_list_conf_row_pane_g1

0xa634,	// (0x0008df5b) call7_list_conf_row_pane_g2

0x0001,

0xfea1,	// (0x000937c8) call7_list_conf_row_pane_g

0xa63c,	// (0x0008df63) call7_list_conf_row_pane_t1

0xedc5,	// (0x000926ec) list_highlight_pane_cp22
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
