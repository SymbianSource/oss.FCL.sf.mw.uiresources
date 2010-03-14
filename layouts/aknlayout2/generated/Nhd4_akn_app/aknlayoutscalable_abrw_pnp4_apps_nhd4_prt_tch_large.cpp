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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007f674 };

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
0x56e8,	// (0x00084d5c) Screen

0x56f4,	// (0x00084d68) application_window

0x5734,	// (0x00084da8) area_bottom_pane_ParamLimits

0x5734,	// (0x00084da8) area_bottom_pane

0x5769,	// (0x00084ddd) area_top_pane_ParamLimits

0x5769,	// (0x00084ddd) area_top_pane

0xf0bb,	// (0x0008e72f) call_video_uplink_pane_ParamLimits

0xf0bb,	// (0x0008e72f) call_video_uplink_pane

0x57f6,	// (0x00084e6a) main_pane_ParamLimits

0x57f6,	// (0x00084e6a) main_pane

0x13b3,	// (0x00080a27) context_pane

0x89d7,	// (0x0008804b) navi_pane

0x89f7,	// (0x0008806b) popup_cale_events_window_ParamLimits

0x89f7,	// (0x0008806b) popup_cale_events_window

0x13c6,	// (0x00080a3a) popup_mup_playback_window

0x8a0f,	// (0x00088083) signal_pane

0xe1da,	// (0x0008d84e) main_browser_pane

0xec64,	// (0x0008e2d8) main_burst_pane

0x88ad,	// (0x00087f21) main_calc_pane

0xec64,	// (0x0008e2d8) main_cale_day_pane

0xe1da,	// (0x0008d84e) main_cale_month_pane

0xec64,	// (0x0008e2d8) main_cale_week_pane

0xec64,	// (0x0008e2d8) main_call_pane

0xde68,	// (0x0008d4dc) main_call_poc_pane

0xec64,	// (0x0008e2d8) main_camera_pane

0xec64,	// (0x0008e2d8) main_chi_dic_pane

0xeaf3,	// (0x0008e167) main_clock_pane

0xde68,	// (0x0008d4dc) main_fmradio_pane

0xec64,	// (0x0008e2d8) main_graph_messa_pane

0xde68,	// (0x0008d4dc) main_help_pane

0xe1da,	// (0x0008d84e) main_im_pane

0xe0c3,	// (0x0008d737) main_image_pane_ParamLimits

0xe0c3,	// (0x0008d737) main_image_pane

0xde68,	// (0x0008d4dc) main_location2_pane

0xec64,	// (0x0008e2d8) main_location_pane

0xde68,	// (0x0008d4dc) main_messa_pane

0xde68,	// (0x0008d4dc) main_mp2_pane

0xec64,	// (0x0008e2d8) main_mp_pane

0xde68,	// (0x0008d4dc) main_msg_pane

0xde68,	// (0x0008d4dc) main_mup_eq_pane

0xde68,	// (0x0008d4dc) main_mup_pane

0xe1da,	// (0x0008d84e) main_notes_pane

0xde68,	// (0x0008d4dc) main_pec_pane

0xde68,	// (0x0008d4dc) main_phob_pane

0xde68,	// (0x0008d4dc) main_pinb_pane

0xde68,	// (0x0008d4dc) main_postcard_pane

0xde68,	// (0x0008d4dc) main_qdial_pane

0xec64,	// (0x0008e2d8) main_skin_pane

0xde68,	// (0x0008d4dc) main_smil2_pane

0xec64,	// (0x0008e2d8) main_smil_pane

0xec64,	// (0x0008e2d8) main_video_pane

0xec64,	// (0x0008e2d8) main_video_tele_pane

0xe0c3,	// (0x0008d737) main_viewer_pane_ParamLimits

0xe0c3,	// (0x0008d737) main_viewer_pane

0xec64,	// (0x0008e2d8) main_vorec_pane

0x88e3,	// (0x00087f57) popup_blid_sat_info_window_ParamLimits

0x88e3,	// (0x00087f57) popup_blid_sat_info_window

0x88f9,	// (0x00087f6d) popup_dyc_status_message_window_ParamLimits

0x88f9,	// (0x00087f6d) popup_dyc_status_message_window

0x8907,	// (0x00087f7b) popup_grid_large_graphic_window_ParamLimits

0x8907,	// (0x00087f7b) popup_grid_large_graphic_window

0x897b,	// (0x00087fef) popup_loc_request_window_ParamLimits

0x897b,	// (0x00087fef) popup_loc_request_window

0x89af,	// (0x00088023) popup_wml_address_window_ParamLimits

0x89af,	// (0x00088023) popup_wml_address_window

0x8785,	// (0x00087df9) call_muted_g1

0x8444,	// (0x00087ab8) popup_call_audio_conf_window_ParamLimits

0x8444,	// (0x00087ab8) popup_call_audio_conf_window

0x8795,	// (0x00087e09) popup_call_audio_first_window_ParamLimits

0x8795,	// (0x00087e09) popup_call_audio_first_window

0x87d5,	// (0x00087e49) popup_call_audio_in_window_ParamLimits

0x87d5,	// (0x00087e49) popup_call_audio_in_window

0x87f9,	// (0x00087e6d) popup_call_audio_out_window_ParamLimits

0x87f9,	// (0x00087e6d) popup_call_audio_out_window

0x881b,	// (0x00087e8f) popup_call_audio_second_window_ParamLimits

0x881b,	// (0x00087e8f) popup_call_audio_second_window

0x884b,	// (0x00087ebf) popup_call_audio_wait_window_ParamLimits

0x884b,	// (0x00087ebf) popup_call_audio_wait_window

0x886c,	// (0x00087ee0) popup_number_entry_window_ParamLimits

0x886c,	// (0x00087ee0) popup_number_entry_window

0xda57,	// (0x0008d0cb) bg_popup_call_pane_cp05_ParamLimits

0xda57,	// (0x0008d0cb) bg_popup_call_pane_cp05

0xda77,	// (0x0008d0eb) popup_number_entry_window_t1

0xda8a,	// (0x0008d0fe) popup_number_entry_window_t2

0xda9c,	// (0x0008d110) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0008e75b) popup_number_entry_window_t

0xdaae,	// (0x0008d122) text_title_cp2

0xdac1,	// (0x0008d135) bg_popup_call_pane_cp_ParamLimits

0xdac1,	// (0x0008d135) bg_popup_call_pane_cp

0xdacf,	// (0x0008d143) call_thumbnail_pane

0xdad7,	// (0x0008d14b) popup_call_audio_in_window_g1_ParamLimits

0xdad7,	// (0x0008d14b) popup_call_audio_in_window_g1

0xdae3,	// (0x0008d157) popup_call_audio_in_window_g2_ParamLimits

0xdae3,	// (0x0008d157) popup_call_audio_in_window_g2

0xdaef,	// (0x0008d163) popup_call_audio_in_window_g3_ParamLimits

0xdaef,	// (0x0008d163) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0008e764) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0008e764) popup_call_audio_in_window_g

0xdafb,	// (0x0008d16f) popup_call_audio_in_window_t1_ParamLimits

0xdafb,	// (0x0008d16f) popup_call_audio_in_window_t1

0xdb16,	// (0x0008d18a) popup_call_audio_in_window_t2_ParamLimits

0xdb16,	// (0x0008d18a) popup_call_audio_in_window_t2

0xdb31,	// (0x0008d1a5) popup_call_audio_in_window_t3_ParamLimits

0xdb31,	// (0x0008d1a5) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0008e76b) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0008e76b) popup_call_audio_in_window_t

0xdac1,	// (0x0008d135) bg_popup_call_pane_cp01_ParamLimits

0xdac1,	// (0x0008d135) bg_popup_call_pane_cp01

0xdacf,	// (0x0008d143) call_thumbnail_pane_cp02

0xdb44,	// (0x0008d1b8) call_type_pane_cp022

0xdb4c,	// (0x0008d1c0) popup_call_audio_out_window_g1_ParamLimits

0xdb4c,	// (0x0008d1c0) popup_call_audio_out_window_g1

0xdb5e,	// (0x0008d1d2) popup_call_audio_out_window_g2_ParamLimits

0xdb5e,	// (0x0008d1d2) popup_call_audio_out_window_g2

0xdb6a,	// (0x0008d1de) popup_call_audio_out_window_g3_ParamLimits

0xdb6a,	// (0x0008d1de) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0008e772) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0008e772) popup_call_audio_out_window_g

0xdb7c,	// (0x0008d1f0) popup_call_audio_out_window_t1_ParamLimits

0xdb7c,	// (0x0008d1f0) popup_call_audio_out_window_t1

0xdb94,	// (0x0008d208) popup_call_audio_out_window_t2_ParamLimits

0xdb94,	// (0x0008d208) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0008e779) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0008e779) popup_call_audio_out_window_t

0xdba9,	// (0x0008d21d) bg_popup_call_pane_ParamLimits

0xdba9,	// (0x0008d21d) bg_popup_call_pane

0x59e9,	// (0x0008505d) call_thumbnail_pane_cp_ParamLimits

0x59e9,	// (0x0008505d) call_thumbnail_pane_cp

0xdc2d,	// (0x0008d2a1) call_type_pane_cp01_ParamLimits

0xdc2d,	// (0x0008d2a1) call_type_pane_cp01

0xdc71,	// (0x0008d2e5) popup_call_audio_first_window_g1_ParamLimits

0xdc71,	// (0x0008d2e5) popup_call_audio_first_window_g1

0xdcbd,	// (0x0008d331) popup_call_audio_first_window_g2_ParamLimits

0xdcbd,	// (0x0008d331) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0008e77e) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0008e77e) popup_call_audio_first_window_g

0xdd01,	// (0x0008d375) popup_call_audio_first_window_t1_ParamLimits

0xdd01,	// (0x0008d375) popup_call_audio_first_window_t1

0xddad,	// (0x0008d421) popup_call_audio_first_window_t4_ParamLimits

0xddad,	// (0x0008d421) popup_call_audio_first_window_t4

0xde39,	// (0x0008d4ad) popup_call_audio_first_window_t5_ParamLimits

0xde39,	// (0x0008d4ad) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0008e783) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0008e783) popup_call_audio_first_window_t

0xde68,	// (0x0008d4dc) bg_popup_call_pane_cp02

0xde72,	// (0x0008d4e6) call_type_pane_cp023

0xde7a,	// (0x0008d4ee) popup_call_audio_wait_window_g1

0xde82,	// (0x0008d4f6) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0008e78a) popup_call_audio_wait_window_g

0xde8a,	// (0x0008d4fe) popup_call_audio_wait_window_t3

0xde98,	// (0x0008d50c) bg_popup_call_pane_cp03_ParamLimits

0xde98,	// (0x0008d50c) bg_popup_call_pane_cp03

0xdef8,	// (0x0008d56c) call_thumbnail_pane_cp011_ParamLimits

0xdef8,	// (0x0008d56c) call_thumbnail_pane_cp011

0xdf04,	// (0x0008d578) call_type_pane_cp034_ParamLimits

0xdf04,	// (0x0008d578) call_type_pane_cp034

0xdf40,	// (0x0008d5b4) popup_call_audio_second_window_g1_ParamLimits

0xdf40,	// (0x0008d5b4) popup_call_audio_second_window_g1

0xdf7c,	// (0x0008d5f0) popup_call_audio_second_window_g2_ParamLimits

0xdf7c,	// (0x0008d5f0) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0008e78f) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0008e78f) popup_call_audio_second_window_g

0xdfb8,	// (0x0008d62c) popup_call_audio_second_window_t1_ParamLimits

0xdfb8,	// (0x0008d62c) popup_call_audio_second_window_t1

0xe039,	// (0x0008d6ad) popup_call_audio_second_window_t2_ParamLimits

0xe039,	// (0x0008d6ad) popup_call_audio_second_window_t2

0xe06f,	// (0x0008d6e3) popup_call_audio_second_window_t3_ParamLimits

0xe06f,	// (0x0008d6e3) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0008e794) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0008e794) popup_call_audio_second_window_t

0xde68,	// (0x0008d4dc) bg_popup_call_pane_cp04

0xe0a5,	// (0x0008d719) list_conf_pane

0xe0ad,	// (0x0008d721) popup_call_audio_conf_window_t1

0xe0bb,	// (0x0008d72f) call_thumbnail_pane_g1

0xe0c3,	// (0x0008d737) bg_pinb_pane_ParamLimits

0xe0c3,	// (0x0008d737) bg_pinb_pane

0xe0d1,	// (0x0008d745) find_pinb_pane

0xe0da,	// (0x0008d74e) listscroll_pinb_pane_ParamLimits

0xe0da,	// (0x0008d74e) listscroll_pinb_pane

0xe0e9,	// (0x0008d75d) pinb_bg_pane_g1

0x5a0d,	// (0x00085081) pinb_bg_pane_g2

0x5a19,	// (0x0008508d) pinb_bg_pane_g3

0x5a25,	// (0x00085099) pinb_bg_pane_g4

0x5a31,	// (0x000850a5) pinb_bg_pane_g5

0x5a3d,	// (0x000850b1) pinb_bg_pane_g6

0x5a48,	// (0x000850bc) pinb_bg_pane_g7

0x5a53,	// (0x000850c7) pinb_bg_pane_g8

0x5a5e,	// (0x000850d2) pinb_bg_pane_g9

0x5a68,	// (0x000850dc) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0008e79b) pinb_bg_pane_g

0x5a7d,	// (0x000850f1) grid_pinb_pane

0x5a88,	// (0x000850fc) list_pinb_pane

0x5a93,	// (0x00085107) scroll_pane_cp01_ParamLimits

0x5a93,	// (0x00085107) scroll_pane_cp01

0xe0fb,	// (0x0008d76f) find_pinb_pane_g1_ParamLimits

0xe0fb,	// (0x0008d76f) find_pinb_pane_g1

0xe113,	// (0x0008d787) find_pinb_pane_t1

0xe125,	// (0x0008d799) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0008e7b5) find_pinb_pane_t

0xe13a,	// (0x0008d7ae) input_focus_pane_cp01_ParamLimits

0xe13a,	// (0x0008d7ae) input_focus_pane_cp01

0x5aa5,	// (0x00085119) cell_pinb_pane_ParamLimits

0x5aa5,	// (0x00085119) cell_pinb_pane

0x5ad9,	// (0x0008514d) cell_pinb_pane_g1_ParamLimits

0x5ad9,	// (0x0008514d) cell_pinb_pane_g1

0x5aee,	// (0x00085162) cell_pinb_pane_g2_ParamLimits

0x5aee,	// (0x00085162) cell_pinb_pane_g2

0xe146,	// (0x0008d7ba) cell_pinb_pane_g3_ParamLimits

0xe146,	// (0x0008d7ba) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0008e7ba) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0008e7ba) cell_pinb_pane_g

0xde68,	// (0x0008d4dc) grid_highlight_pane_cp01

0x5afa,	// (0x0008516e) list_pinb_item_pane_ParamLimits

0x5afa,	// (0x0008516e) list_pinb_item_pane

0xde68,	// (0x0008d4dc) list_highlight_pane_cp02

0xe152,	// (0x0008d7c6) list_pinb_item_pane_g1_ParamLimits

0xe152,	// (0x0008d7c6) list_pinb_item_pane_g1

0xe15f,	// (0x0008d7d3) list_pinb_item_pane_g2_ParamLimits

0xe15f,	// (0x0008d7d3) list_pinb_item_pane_g2

0x5b27,	// (0x0008519b) list_pinb_item_pane_g3_ParamLimits

0x5b27,	// (0x0008519b) list_pinb_item_pane_g3

0xe16b,	// (0x0008d7df) list_pinb_item_pane_g4_ParamLimits

0xe16b,	// (0x0008d7df) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0008e7c1) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0008e7c1) list_pinb_item_pane_g

0xe177,	// (0x0008d7eb) list_pinb_item_pane_t1_ParamLimits

0xe177,	// (0x0008d7eb) list_pinb_item_pane_t1

0x5b52,	// (0x000851c6) calc_display_pane

0x5b70,	// (0x000851e4) calc_paper_pane

0x5b8c,	// (0x00085200) grid_calc_pane

0xde68,	// (0x0008d4dc) bg_list_pane_cp01

0x5bb8,	// (0x0008522c) clock_g1

0x5bc0,	// (0x00085234) clock_g2

0x0001,

0xf156,	// (0x0008e7ca) clock_g

0x5bca,	// (0x0008523e) clock_t1_ParamLimits

0x5bca,	// (0x0008523e) clock_t1

0x5bdf,	// (0x00085253) clock_t2_ParamLimits

0x5bdf,	// (0x00085253) clock_t2

0x5bf1,	// (0x00085265) clock_t3_ParamLimits

0x5bf1,	// (0x00085265) clock_t3

0x5c03,	// (0x00085277) clock_t4_ParamLimits

0x5c03,	// (0x00085277) clock_t4

0x5c15,	// (0x00085289) clock_t5_ParamLimits

0x5c15,	// (0x00085289) clock_t5

0x5c2a,	// (0x0008529e) clock_t6_ParamLimits

0x5c2a,	// (0x0008529e) clock_t6

0x5c3c,	// (0x000852b0) clock_t7_ParamLimits

0x5c3c,	// (0x000852b0) clock_t7

0x5c4e,	// (0x000852c2) clock_t8_ParamLimits

0x5c4e,	// (0x000852c2) clock_t8

0x5c64,	// (0x000852d8) clock_t9_ParamLimits

0x5c64,	// (0x000852d8) clock_t9

0x0008,

0xf15b,	// (0x0008e7cf) clock_t_ParamLimits

0xf15b,	// (0x0008e7cf) clock_t

0xe18e,	// (0x0008d802) popup_clock_analogue_window_cp02

0xe18e,	// (0x0008d802) popup_clock_digital_window_cp01

0xe196,	// (0x0008d80a) listscroll_help_pane

0xde68,	// (0x0008d4dc) phob_pre_status_pane

0xe1a0,	// (0x0008d814) grid_qdial_pane

0xde68,	// (0x0008d4dc) listscroll_mce_pane

0xe1aa,	// (0x0008d81e) bg_notes_pane

0xe1b8,	// (0x0008d82c) list_notes_pane

0x5c7a,	// (0x000852ee) scroll_pane_cp06

0xe1c6,	// (0x0008d83a) bg_calc_paper_pane

0x5c93,	// (0x00085307) list_calc_pane

0xe1da,	// (0x0008d84e) bg_calc_display_pane

0x5cad,	// (0x00085321) calc_display_pane_t1

0x5cc2,	// (0x00085336) calc_display_pane_t2

0x5cd7,	// (0x0008534b) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0008e7e2) calc_display_pane_t

0x5ce9,	// (0x0008535d) cell_calc_pane_ParamLimits

0x5ce9,	// (0x0008535d) cell_calc_pane

0xe1e6,	// (0x0008d85a) bg_calc_paper_pane_g1

0xe1f2,	// (0x0008d866) bg_calc_paper_pane_g2

0xe1fe,	// (0x0008d872) bg_calc_paper_pane_g3

0xe20a,	// (0x0008d87e) bg_calc_paper_pane_g4

0xe216,	// (0x0008d88a) bg_calc_paper_pane_g5

0x5d16,	// (0x0008538a) bg_calc_paper_pane_g6

0x5d27,	// (0x0008539b) bg_calc_paper_pane_g7

0x5d38,	// (0x000853ac) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0008e7e9) bg_calc_paper_pane_g

0x5d49,	// (0x000853bd) calc_bg_paper_pane_g9

0x5d5a,	// (0x000853ce) list_calc_item_pane_ParamLimits

0x5d5a,	// (0x000853ce) list_calc_item_pane

0xe222,	// (0x0008d896) list_calc_item_pane_g1

0x5d94,	// (0x00085408) list_calc_item_pane_t1_ParamLimits

0x5d94,	// (0x00085408) list_calc_item_pane_t1

0x5da6,	// (0x0008541a) list_calc_item_pane_t2_ParamLimits

0x5da6,	// (0x0008541a) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0008e7fa) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0008e7fa) list_calc_item_pane_t

0xe22f,	// (0x0008d8a3) cell_calc_pane_g1

0xe239,	// (0x0008d8ad) grid_highlight_pane_cp02

0xe25b,	// (0x0008d8cf) bg_calc_display_pane_g1

0x5dd6,	// (0x0008544a) bg_calc_display_pane_g2

0xe264,	// (0x0008d8d8) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0008e804) bg_calc_display_pane_g

0x5de0,	// (0x00085454) cell_qdial_pane_ParamLimits

0x5de0,	// (0x00085454) cell_qdial_pane

0x5df4,	// (0x00085468) cell_qdial_pane_g1_ParamLimits

0x5df4,	// (0x00085468) cell_qdial_pane_g1

0x5e01,	// (0x00085475) cell_qdial_pane_g2_ParamLimits

0x5e01,	// (0x00085475) cell_qdial_pane_g2

0xe26d,	// (0x0008d8e1) cell_qdial_pane_g3_ParamLimits

0xe26d,	// (0x0008d8e1) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0008e80b) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0008e80b) cell_qdial_pane_g

0x5e1f,	// (0x00085493) cell_qdial_pane_t1_ParamLimits

0x5e1f,	// (0x00085493) cell_qdial_pane_t1

0x5e37,	// (0x000854ab) cell_qdial_pane_t2_ParamLimits

0x5e37,	// (0x000854ab) cell_qdial_pane_t2

0x5e4a,	// (0x000854be) cell_qdial_pane_t3_ParamLimits

0x5e4a,	// (0x000854be) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0008e814) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0008e814) cell_qdial_pane_t

0xde68,	// (0x0008d4dc) grid_highlight_pane_cp04

0xe279,	// (0x0008d8ed) thumbnail_qdial_pane_ParamLimits

0xe279,	// (0x0008d8ed) thumbnail_qdial_pane

0xe2d5,	// (0x0008d949) list_help_pane

0xe2de,	// (0x0008d952) scroll_pane_cp02

0x5e5d,	// (0x000854d1) help_list_pane_t1_ParamLimits

0x5e5d,	// (0x000854d1) help_list_pane_t1

0x5e9b,	// (0x0008550f) bg_notes_pane_g2

0x5ea3,	// (0x00085517) bg_notes_pane_g3

0x5eab,	// (0x0008551f) notes_bg_pane_g1

0x5eb3,	// (0x00085527) notes_bg_pane_g4

0x5ebb,	// (0x0008552f) notes_bg_pane_g5

0x5ec3,	// (0x00085537) notes_bg_pane_g6

0x5ecb,	// (0x0008553f) notes_bg_pane_g7

0x5ed3,	// (0x00085547) notes_bg_pane_g8

0x5edb,	// (0x0008554f) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0008e832) notes_bg_pane_g

0x5ee3,	// (0x00085557) list_notes_text_pane_ParamLimits

0x5ee3,	// (0x00085557) list_notes_text_pane

0xe2e7,	// (0x0008d95b) list_notes_text_pane_g1

0x5f37,	// (0x000855ab) list_notes_text_pane_t1

0xe1da,	// (0x0008d84e) listscroll_cale_week_pane

0x5f62,	// (0x000855d6) bg_cale_heading_pane

0xe301,	// (0x0008d975) bg_cale_pane_cp01

0x5f7e,	// (0x000855f2) cale_week_corner_pane

0x5f8f,	// (0x00085603) cale_week_day_heading_pane

0x5fab,	// (0x0008561f) cale_week_scroll_pane_g1

0x5fc4,	// (0x00085638) cale_week_scroll_pane_g2

0x5fd5,	// (0x00085649) cale_week_scroll_pane_g3

0x5fe6,	// (0x0008565a) cale_week_scroll_pane_g4

0x5ff7,	// (0x0008566b) cale_week_scroll_pane_g5

0x6008,	// (0x0008567c) cale_week_scroll_pane_g6

0x6019,	// (0x0008568d) cale_week_scroll_pane_g7

0x602c,	// (0x000856a0) cale_week_scroll_pane_g8

0x603f,	// (0x000856b3) cale_week_scroll_pane_g9

0x6050,	// (0x000856c4) cale_week_scroll_pane_g10

0x6061,	// (0x000856d5) cale_week_scroll_pane_g11

0x6072,	// (0x000856e6) cale_week_scroll_pane_g12

0x608b,	// (0x000856ff) cale_week_scroll_pane_g13

0x60a4,	// (0x00085718) cale_week_scroll_pane_g14

0x60bd,	// (0x00085731) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0008e841) cale_week_scroll_pane_g

0x60d6,	// (0x0008574a) cale_week_time_pane

0x60e9,	// (0x0008575d) grid_cale_week_pane

0x6106,	// (0x0008577a) scroll_pane_cp08

0x6120,	// (0x00085794) cell_cale_week_pane_ParamLimits

0x6120,	// (0x00085794) cell_cale_week_pane

0x6170,	// (0x000857e4) cale_week_day_heading_pane_t1

0x6184,	// (0x000857f8) cale_week_day_heading_pane_t2

0x6198,	// (0x0008580c) cale_week_day_heading_pane_t3

0x61ac,	// (0x00085820) cale_week_day_heading_pane_t4

0x61c0,	// (0x00085834) cale_week_day_heading_pane_t5

0x61d4,	// (0x00085848) cale_week_day_heading_pane_t6

0x61e8,	// (0x0008585c) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0008e860) cale_week_day_heading_pane_t

0xe32c,	// (0x0008d9a0) bg_cale_side_pane

0x61fc,	// (0x00085870) cale_week_time_pane_t1

0x6214,	// (0x00085888) cale_week_time_pane_t2

0x622c,	// (0x000858a0) cale_week_time_pane_t3

0x6244,	// (0x000858b8) cale_week_time_pane_t4

0x625c,	// (0x000858d0) cale_week_time_pane_t5

0x6274,	// (0x000858e8) cale_week_time_pane_t6

0x6294,	// (0x00085908) cale_week_time_pane_t7

0x62b4,	// (0x00085928) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0008e86f) cale_week_time_pane_t

0x62d4,	// (0x00085948) cell_cale_week_pane_g2

0x62e5,	// (0x00085959) cell_cale_week_pane_g3_ParamLimits

0x62e5,	// (0x00085959) cell_cale_week_pane_g3

0xe33a,	// (0x0008d9ae) grid_highlight_pane_cp07

0xe342,	// (0x0008d9b6) listscroll_gms_pane

0xe34c,	// (0x0008d9c0) grid_gms_pane

0xe355,	// (0x0008d9c9) listscroll_gms_pane_g1

0xe35d,	// (0x0008d9d1) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0008e880) listscroll_gms_pane_g

0x62fd,	// (0x00085971) scroll_pane_cp010

0x6308,	// (0x0008597c) cell_gms_pane_ParamLimits

0x6308,	// (0x0008597c) cell_gms_pane

0x631a,	// (0x0008598e) cell_gms_pane_g1

0xe365,	// (0x0008d9d9) cell_gms_pane_g2

0xe2e7,	// (0x0008d95b) cell_gms_pane_g3

0xe36d,	// (0x0008d9e1) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0008e885) cell_gms_pane_g

0xe376,	// (0x0008d9ea) grid_highlight_pane_cp09

0x872d,	// (0x00087da1) phob_pre_status_pane_g1

0x8735,	// (0x00087da9) phob_pre_status_pane_g2

0x873d,	// (0x00087db1) phob_pre_status_pane_g3

0x8745,	// (0x00087db9) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0008ec74) phob_pre_status_pane_g

0x8755,	// (0x00087dc9) phob_pre_status_pane_t1

0x8765,	// (0x00087dd9) phob_pre_status_pane_t2

0x8775,	// (0x00087de9) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0008ec7f) phob_pre_status_pane_t

0xde68,	// (0x0008d4dc) bg_list_pane_cp05

0x632a,	// (0x0008599e) grid_vorec_pane

0x6332,	// (0x000859a6) vorec_t1

0x6340,	// (0x000859b4) vorec_t2

0x634e,	// (0x000859c2) vorec_t3

0x635c,	// (0x000859d0) vorec_t4

0x636a,	// (0x000859de) vorec_t5

0x6378,	// (0x000859ec) vorec_t6

0x0006,

0xf21a,	// (0x0008e88e) vorec_t

0x6394,	// (0x00085a08) wait_bar_pane_cp01

0xe37e,	// (0x0008d9f2) cell_vorec_pane_ParamLimits

0xe37e,	// (0x0008d9f2) cell_vorec_pane

0xe391,	// (0x0008da05) cell_vorec_pane_g1

0xde68,	// (0x0008d4dc) grid_highlight_pane_cp05

0x63ac,	// (0x00085a20) cams_zoom_pane

0x63b8,	// (0x00085a2c) image_vga_pane

0x63c7,	// (0x00085a3b) main_camera_pane_g1

0x63d5,	// (0x00085a49) main_camera_pane_g2

0x63e3,	// (0x00085a57) main_camera_pane_g3

0x63ef,	// (0x00085a63) main_camera_pane_g4

0x63fb,	// (0x00085a6f) main_camera_pane_g5

0x6407,	// (0x00085a7b) main_camera_pane_g6

0x6413,	// (0x00085a87) main_camera_pane_g7

0x0007,

0xf229,	// (0x0008e89d) main_camera_pane_g

0x641f,	// (0x00085a93) main_camera_pane_t1

0x6431,	// (0x00085aa5) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0008e8ae) main_camera_pane_t

0x6452,	// (0x00085ac6) cams_zoom_pane_cp_ParamLimits

0x6452,	// (0x00085ac6) cams_zoom_pane_cp

0x6476,	// (0x00085aea) image_cif_pane_ParamLimits

0x6476,	// (0x00085aea) image_cif_pane

0x6494,	// (0x00085b08) image_subqcif_pane

0x649c,	// (0x00085b10) main_video_pane_g1_ParamLimits

0x649c,	// (0x00085b10) main_video_pane_g1

0x64bc,	// (0x00085b30) main_video_pane_g2_ParamLimits

0x64bc,	// (0x00085b30) main_video_pane_g2

0x64ee,	// (0x00085b62) main_video_pane_g3_ParamLimits

0x64ee,	// (0x00085b62) main_video_pane_g3

0x6519,	// (0x00085b8d) main_video_pane_g4_ParamLimits

0x6519,	// (0x00085b8d) main_video_pane_g4

0x6544,	// (0x00085bb8) main_video_pane_g5_ParamLimits

0x6544,	// (0x00085bb8) main_video_pane_g5

0xe3a7,	// (0x0008da1b) main_video_pane_g6_ParamLimits

0xe3a7,	// (0x0008da1b) main_video_pane_g6

0x0006,

0xf23f,	// (0x0008e8b3) main_video_pane_g_ParamLimits

0xf23f,	// (0x0008e8b3) main_video_pane_g

0x6568,	// (0x00085bdc) main_video_pane_t1_ParamLimits

0x6568,	// (0x00085bdc) main_video_pane_t1

0xe3c1,	// (0x0008da35) cams_zoom_pane_g1

0xe3ca,	// (0x0008da3e) cams_zoom_pane_g2

0xe3d3,	// (0x0008da47) cams_zoom_pane_g3

0xe3dc,	// (0x0008da50) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0008e8c2) cams_zoom_pane_g

0x65b2,	// (0x00085c26) grid_cams_pane

0x65c0,	// (0x00085c34) linegrid_cams_pane

0x65ce,	// (0x00085c42) cell_cams_pane_ParamLimits

0x65ce,	// (0x00085c42) cell_cams_pane

0xe3e5,	// (0x0008da59) cams_burst_image_pane

0xe3ed,	// (0x0008da61) cell_cams_pane_g1

0xde68,	// (0x0008d4dc) grid_highlight_pane_cp03

0xe22f,	// (0x0008d8a3) mp_bg_pane_g1

0xde68,	// (0x0008d4dc) bg_list_pane_cp03

0x128b,	// (0x000808ff) bg_mp_pane

0x1293,	// (0x00080907) grid_mp_pane

0x129b,	// (0x0008090f) media_player_g1

0x12a3,	// (0x00080917) media_player_t1

0x12b1,	// (0x00080925) media_player_t2

0x12bf,	// (0x00080933) media_player_t3

0x12cd,	// (0x00080941) media_player_t4

0x12db,	// (0x0008094f) media_player_t5

0x12e9,	// (0x0008095d) media_player_t6

0x12f7,	// (0x0008096b) media_player_t7

0x0006,

0xf5ea,	// (0x0008ec5e) media_player_t

0x1305,	// (0x00080979) wait_bar_pane_cp02

0xf5cf,	// (0x0008ec43) main_usb_pane_t

0x8724,	// (0x00087d98) cell_mp_pane

0xe22f,	// (0x0008d8a3) cell_mp_pane_g1

0xde68,	// (0x0008d4dc) grid_highlight_pane_cp06

0xe3f5,	// (0x0008da69) grid_skin_colour_pane

0xe3fd,	// (0x0008da71) list_highlight_pane_cp03

0x6631,	// (0x00085ca5) skin_g1

0xe405,	// (0x0008da79) skin_t1

0xe414,	// (0x0008da88) skin_t2

0x0001,

0xf283,	// (0x0008e8f7) skin_t

0x663b,	// (0x00085caf) cell_skin_colour_pane_ParamLimits

0x663b,	// (0x00085caf) cell_skin_colour_pane

0xe422,	// (0x0008da96) cell_skin_colour_pane_g1

0x66bf,	// (0x00085d33) call_video_g1_ParamLimits

0x66bf,	// (0x00085d33) call_video_g1

0x66cf,	// (0x00085d43) call_video_g2_ParamLimits

0x66cf,	// (0x00085d43) call_video_g2

0x0001,

0xf288,	// (0x0008e8fc) call_video_g_ParamLimits

0xf288,	// (0x0008e8fc) call_video_g

0x6729,	// (0x00085d9d) call_video_uplink_pane_cp1_ParamLimits

0x6729,	// (0x00085d9d) call_video_uplink_pane_cp1

0xe434,	// (0x0008daa8) call_video_uplink_pane_cp2

0x67f5,	// (0x00085e69) video_down_crop_pane_ParamLimits

0x67f5,	// (0x00085e69) video_down_crop_pane

0x68e7,	// (0x00085f5b) video_down_pane_ParamLimits

0x68e7,	// (0x00085f5b) video_down_pane

0xe43c,	// (0x0008dab0) video_down_subqcif_pane_ParamLimits

0xe43c,	// (0x0008dab0) video_down_subqcif_pane

0xe454,	// (0x0008dac8) video_down_subqcif_pane_cp_ParamLimits

0xe454,	// (0x0008dac8) video_down_subqcif_pane_cp

0xe47a,	// (0x0008daee) im_reading_pane_ParamLimits

0xe47a,	// (0x0008daee) im_reading_pane

0x6a09,	// (0x0008607d) im_writing_pane_ParamLimits

0x6a09,	// (0x0008607d) im_writing_pane

0x6a27,	// (0x0008609b) im_reading_pane_t1

0xe494,	// (0x0008db08) list_im_pane

0xe4a5,	// (0x0008db19) scroll_pane_cp07

0x6a87,	// (0x000860fb) im_writing_pane_t1_ParamLimits

0x6a87,	// (0x000860fb) im_writing_pane_t1

0xe4be,	// (0x0008db32) im_writing_pane_t2_ParamLimits

0xe4be,	// (0x0008db32) im_writing_pane_t2

0x0001,

0xf292,	// (0x0008e906) im_writing_pane_t_ParamLimits

0xf292,	// (0x0008e906) im_writing_pane_t

0xde68,	// (0x0008d4dc) input_focus_pane_cp04

0xde68,	// (0x0008d4dc) input_focus_pane_cp05

0x6a99,	// (0x0008610d) list_im_single_pane_ParamLimits

0x6a99,	// (0x0008610d) list_im_single_pane

0x6ac5,	// (0x00086139) list_single_im_pane_t1

0x86e8,	// (0x00087d5c) blid_accuracy_pane

0x86f0,	// (0x00087d64) blid_compass_pane

0x86fa,	// (0x00087d6e) main_location_t1

0x8708,	// (0x00087d7c) main_location_t2

0x8716,	// (0x00087d8a) main_location_t3

0x0002,

0xf5f9,	// (0x0008ec6d) main_location_t

0xde68,	// (0x0008d4dc) aid_levels_location

0xe22f,	// (0x0008d8a3) blid_accuracy_pane_g1

0xe22f,	// (0x0008d8a3) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0008e968) blid_accuracy_pane_g

0xe506,	// (0x0008db7a) wml_content_pane

0xe544,	// (0x0008dbb8) wml_button_pane_ParamLimits

0xe544,	// (0x0008dbb8) wml_button_pane

0x6ad4,	// (0x00086148) wml_list_single_large_pane_ParamLimits

0x6ad4,	// (0x00086148) wml_list_single_large_pane

0x6b06,	// (0x0008617a) wml_list_single_medium_pane_ParamLimits

0x6b06,	// (0x0008617a) wml_list_single_medium_pane

0x6b3f,	// (0x000861b3) wml_list_single_small_pane_ParamLimits

0x6b3f,	// (0x000861b3) wml_list_single_small_pane

0xe558,	// (0x0008dbcc) wml_selection_box_pane_ParamLimits

0xe558,	// (0x0008dbcc) wml_selection_box_pane

0xe56b,	// (0x0008dbdf) wml_list_single_pane_t1

0xe57a,	// (0x0008dbee) wml_list_single_medium_pane_t1

0xe589,	// (0x0008dbfd) wml_list_single_large_pane_t1

0xe598,	// (0x0008dc0c) input_focus_pane_cp02_ParamLimits

0xe598,	// (0x0008dc0c) input_focus_pane_cp02

0xe5ab,	// (0x0008dc1f) wml_selection_box_pane_g1

0xe5b4,	// (0x0008dc28) wml_selection_box_pane_t1_ParamLimits

0xe5b4,	// (0x0008dc28) wml_selection_box_pane_t1

0xe0c3,	// (0x0008d737) bg_wml_button_pane_ParamLimits

0xe0c3,	// (0x0008d737) bg_wml_button_pane

0xe5cc,	// (0x0008dc40) wml_button_pane_g1

0xe5d4,	// (0x0008dc48) wml_button_pane_t1

0xe5cc,	// (0x0008dc40) wml_button_bg_pane_g1

0xe5e4,	// (0x0008dc58) wml_button_bg_pane_g2

0xe5ec,	// (0x0008dc60) wml_button_bg_pane_g3

0xe5f4,	// (0x0008dc68) wml_button_bg_pane_g4

0xe5fc,	// (0x0008dc70) wml_button_bg_pane_g5

0xe604,	// (0x0008dc78) wml_button_bg_pane_g6

0xe60c,	// (0x0008dc80) wml_button_bg_pane_g7

0xe614,	// (0x0008dc88) wml_button_bg_pane_g8

0xe61c,	// (0x0008dc90) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0008e90b) wml_button_bg_pane_g

0x6b87,	// (0x000861fb) bg_list_pane_cp02

0xe624,	// (0x0008dc98) mce_header_pane_ParamLimits

0xe624,	// (0x0008dc98) mce_header_pane

0xe63a,	// (0x0008dcae) mce_icon_pane

0xe63a,	// (0x0008dcae) mce_image_pane

0xe643,	// (0x0008dcb7) mce_text_pane_ParamLimits

0xe643,	// (0x0008dcb7) mce_text_pane

0x6b91,	// (0x00086205) scroll_pane_cp03

0xe53c,	// (0x0008dbb0) scroll_pane_cp04

0xe656,	// (0x0008dcca) scroll_pane_cp05_ParamLimits

0xe656,	// (0x0008dcca) scroll_pane_cp05

0x6b9b,	// (0x0008620f) mce_header_field_pane_ParamLimits

0x6b9b,	// (0x0008620f) mce_header_field_pane

0x6bbb,	// (0x0008622f) mce_header_field_pane_2_ParamLimits

0x6bbb,	// (0x0008622f) mce_header_field_pane_2

0x6bd1,	// (0x00086245) mce_header_field_pane_3

0x6bd9,	// (0x0008624d) list_single_mce_message_pane_ParamLimits

0x6bd9,	// (0x0008624d) list_single_mce_message_pane

0x6c09,	// (0x0008627d) list_single_mce_smart_pane_ParamLimits

0x6c09,	// (0x0008627d) list_single_mce_smart_pane

0xe662,	// (0x0008dcd6) input_focus_pane_cp03

0xe66b,	// (0x0008dcdf) list_header_data_pane

0x6c44,	// (0x000862b8) mce_header_field_pane_t1

0x6c54,	// (0x000862c8) list_single_mce_header_pane_ParamLimits

0x6c54,	// (0x000862c8) list_single_mce_header_pane

0xe673,	// (0x0008dce7) list_single_mce_header_pane_t1

0xe682,	// (0x0008dcf6) list_single_mce_message_pane_g1

0xe68a,	// (0x0008dcfe) list_single_mce_message_pane_t1

0x6ca6,	// (0x0008631a) bg_cale_heading_pane_cp01_ParamLimits

0x6ca6,	// (0x0008631a) bg_cale_heading_pane_cp01

0xe698,	// (0x0008dd0c) bg_cale_pane_cp02_ParamLimits

0xe698,	// (0x0008dd0c) bg_cale_pane_cp02

0x6cd9,	// (0x0008634d) cale_month_corner_pane

0x6cef,	// (0x00086363) cale_month_day_heading_pane_ParamLimits

0x6cef,	// (0x00086363) cale_month_day_heading_pane

0x6d32,	// (0x000863a6) cale_month_pane_g1_ParamLimits

0x6d32,	// (0x000863a6) cale_month_pane_g1

0x6d5e,	// (0x000863d2) cale_month_pane_g2_ParamLimits

0x6d5e,	// (0x000863d2) cale_month_pane_g2

0x6d81,	// (0x000863f5) cale_month_pane_g3_ParamLimits

0x6d81,	// (0x000863f5) cale_month_pane_g3

0x6dbd,	// (0x00086431) cale_month_pane_g4_ParamLimits

0x6dbd,	// (0x00086431) cale_month_pane_g4

0x6df9,	// (0x0008646d) cale_month_pane_g5_ParamLimits

0x6df9,	// (0x0008646d) cale_month_pane_g5

0x6e35,	// (0x000864a9) cale_month_pane_g6_ParamLimits

0x6e35,	// (0x000864a9) cale_month_pane_g6

0x6e71,	// (0x000864e5) cale_month_pane_g7_ParamLimits

0x6e71,	// (0x000864e5) cale_month_pane_g7

0x6ebd,	// (0x00086531) cale_month_pane_g8_ParamLimits

0x6ebd,	// (0x00086531) cale_month_pane_g8

0x6f09,	// (0x0008657d) cale_month_pane_g9_ParamLimits

0x6f09,	// (0x0008657d) cale_month_pane_g9

0x6f4f,	// (0x000865c3) cale_month_pane_g10_ParamLimits

0x6f4f,	// (0x000865c3) cale_month_pane_g10

0x6f95,	// (0x00086609) cale_month_pane_g11_ParamLimits

0x6f95,	// (0x00086609) cale_month_pane_g11

0x6fd3,	// (0x00086647) cale_month_pane_g12_ParamLimits

0x6fd3,	// (0x00086647) cale_month_pane_g12

0x7011,	// (0x00086685) cale_month_pane_g13_ParamLimits

0x7011,	// (0x00086685) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0008e91e) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0008e91e) cale_month_pane_g

0x704f,	// (0x000866c3) cale_month_week_pane

0x7062,	// (0x000866d6) grid_cale_month_pane_ParamLimits

0x7062,	// (0x000866d6) grid_cale_month_pane

0x70a0,	// (0x00086714) cale_month_day_heading_pane_t1

0x70fe,	// (0x00086772) cale_month_day_heading_pane_t2

0x7163,	// (0x000867d7) cale_month_day_heading_pane_t3

0x71c8,	// (0x0008683c) cale_month_day_heading_pane_t4

0x722d,	// (0x000868a1) cale_month_day_heading_pane_t5

0x7292,	// (0x00086906) cale_month_day_heading_pane_t6

0x72ff,	// (0x00086973) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0008e939) cale_month_day_heading_pane_t

0xe32c,	// (0x0008d9a0) bg_cale_side_pane_cp01

0x7374,	// (0x000869e8) cale_month_week_pane_t1

0x738b,	// (0x000869ff) cale_month_week_pane_t2

0x73a2,	// (0x00086a16) cale_month_week_pane_t3

0x73b9,	// (0x00086a2d) cale_month_week_pane_t4

0x73d0,	// (0x00086a44) cale_month_week_pane_t5

0x73ef,	// (0x00086a63) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0008e948) cale_month_week_pane_t

0x740e,	// (0x00086a82) cell_cale_month_pane_ParamLimits

0x740e,	// (0x00086a82) cell_cale_month_pane

0x74dc,	// (0x00086b50) cell_cale_month_pane_g1

0x74e8,	// (0x00086b5c) cell_cale_month_pane_t1_ParamLimits

0x74e8,	// (0x00086b5c) cell_cale_month_pane_t1

0xe33a,	// (0x0008d9ae) grid_highlight_pane_cp08

0xe22f,	// (0x0008d8a3) main_smil_g1

0x7504,	// (0x00086b78) smil_status_pane

0xe6cd,	// (0x0008dd41) smil_text_pane

0x11a3,	// (0x00080817) bg_popup_call3_rect_pane_g8

0x11ab,	// (0x0008081f) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0008ec01) bg_popup_call3_rect_pane_g

0x1440,	// (0x00080ab4) smil_status_volume_pane_g1

0xe6d7,	// (0x0008dd4b) smil_status_pane_t1

0x8ace,	// (0x00088142) volume_smil_pane

0xe6ee,	// (0x0008dd62) list_smil_text_pane

0x7517,	// (0x00086b8b) scroll_pane_cp011

0x7522,	// (0x00086b96) smil_text_list_pane_t1_ParamLimits

0x7522,	// (0x00086b96) smil_text_list_pane_t1

0x75cd,	// (0x00086c41) aid_volume_smil_ParamLimits

0x75cd,	// (0x00086c41) aid_volume_smil

0xe22f,	// (0x0008d8a3) smil_volume_pane_g1

0xe22f,	// (0x0008d8a3) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0008e968) smil_volume_pane_g

0xe1da,	// (0x0008d84e) listscroll_cale_day_pane

0xe6f8,	// (0x0008dd6c) bg_cale_pane

0xe710,	// (0x0008dd84) list_cale_pane

0xe721,	// (0x0008dd95) scroll_pane_cp09

0xe732,	// (0x0008dda6) cale_bg_pane_g1

0xe73a,	// (0x0008ddae) cale_bg_pane_g2

0xe742,	// (0x0008ddb6) cale_bg_pane_g3

0xe74a,	// (0x0008ddbe) cale_bg_pane_g4

0xe752,	// (0x0008ddc6) cale_bg_pane_g5

0xe75a,	// (0x0008ddce) cale_bg_pane_g6

0xe762,	// (0x0008ddd6) cale_bg_pane_g7

0xe76a,	// (0x0008ddde) cale_bg_pane_g8

0xe772,	// (0x0008dde6) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0008e96d) cale_bg_pane_g

0x75ef,	// (0x00086c63) list_cale_time_pane_ParamLimits

0x75ef,	// (0x00086c63) list_cale_time_pane

0x7610,	// (0x00086c84) list_cale_time_pane_g1_ParamLimits

0x7610,	// (0x00086c84) list_cale_time_pane_g1

0xe77a,	// (0x0008ddee) list_cale_time_pane_g2_ParamLimits

0xe77a,	// (0x0008ddee) list_cale_time_pane_g2

0x761c,	// (0x00086c90) list_cale_time_pane_g3_ParamLimits

0x761c,	// (0x00086c90) list_cale_time_pane_g3

0x7638,	// (0x00086cac) list_cale_time_pane_g4_ParamLimits

0x7638,	// (0x00086cac) list_cale_time_pane_g4

0x7646,	// (0x00086cba) list_cale_time_pane_g5_ParamLimits

0x7646,	// (0x00086cba) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0008e980) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0008e980) list_cale_time_pane_g

0x7654,	// (0x00086cc8) list_cale_time_pane_t1_ParamLimits

0x7654,	// (0x00086cc8) list_cale_time_pane_t1

0x767c,	// (0x00086cf0) list_cale_time_pane_t2_ParamLimits

0x767c,	// (0x00086cf0) list_cale_time_pane_t2

0x79d6,	// (0x0008704a) aid_blid_cardinal_pane

0x7a18,	// (0x0008708c) compass_pane_t4

0x76a4,	// (0x00086d18) list_cale_time_pane_t4_ParamLimits

0x76a4,	// (0x00086d18) list_cale_time_pane_t4

0x7a26,	// (0x0008709a) compass_pane_t5

0x7a36,	// (0x000870aa) compass_pane_t6

0x7a44,	// (0x000870b8) compass_pane_t7

0xebb6,	// (0x0008e22a) navi_pane_cc_t1

0xed0b,	// (0x0008e37f) aid_phob_thumbnail_center_pane

0x81de,	// (0x00087852) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0008e98d) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0008e98d) list_cale_time_pane_t

0xdac1,	// (0x0008d135) bg_popup_window_pane_cp02_ParamLimits

0xdac1,	// (0x0008d135) bg_popup_window_pane_cp02

0xe794,	// (0x0008de08) heading_pane_cp01_ParamLimits

0xe794,	// (0x0008de08) heading_pane_cp01

0xe7a0,	// (0x0008de14) loc_req_pane_ParamLimits

0xe7a0,	// (0x0008de14) loc_req_pane

0xe7b0,	// (0x0008de24) loc_type_pane_ParamLimits

0xe7b0,	// (0x0008de24) loc_type_pane

0xe7c2,	// (0x0008de36) loc_type_pane_t1_ParamLimits

0xe7c2,	// (0x0008de36) loc_type_pane_t1

0xe7d4,	// (0x0008de48) loc_type_pane_t2_ParamLimits

0xe7d4,	// (0x0008de48) loc_type_pane_t2

0xe7e6,	// (0x0008de5a) loc_type_pane_t3_ParamLimits

0xe7e6,	// (0x0008de5a) loc_type_pane_t3

0x0002,

0xf320,	// (0x0008e994) loc_type_pane_t_ParamLimits

0xf320,	// (0x0008e994) loc_type_pane_t

0xe7f8,	// (0x0008de6c) list_loc_req_pane

0xe802,	// (0x0008de76) scroll_pane_cp012

0x76cc,	// (0x00086d40) list_single_loc_request_popup_menu_pane_ParamLimits

0x76cc,	// (0x00086d40) list_single_loc_request_popup_menu_pane

0xe80d,	// (0x0008de81) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe80d,	// (0x0008de81) list_single_loc_request_popup_menu_pane_g1

0xe819,	// (0x0008de8d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe819,	// (0x0008de8d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0008e99b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0008e99b) list_single_loc_request_popup_menu_pane_g

0xe825,	// (0x0008de99) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe825,	// (0x0008de99) list_single_loc_request_popup_menu_pane_t1

0x76de,	// (0x00086d52) bg_popup_window_pane_cp03_ParamLimits

0x76de,	// (0x00086d52) bg_popup_window_pane_cp03

0x76ec,	// (0x00086d60) heading_loc_req_pane_ParamLimits

0x76ec,	// (0x00086d60) heading_loc_req_pane

0x76f8,	// (0x00086d6c) popup_dyc_status_message_window_g1_ParamLimits

0x76f8,	// (0x00086d6c) popup_dyc_status_message_window_g1

0x7704,	// (0x00086d78) popup_dyc_status_message_window_t1_ParamLimits

0x7704,	// (0x00086d78) popup_dyc_status_message_window_t1

0x7716,	// (0x00086d8a) popup_dyc_status_message_window_t2_ParamLimits

0x7716,	// (0x00086d8a) popup_dyc_status_message_window_t2

0x7728,	// (0x00086d9c) popup_dyc_status_message_window_t3_ParamLimits

0x7728,	// (0x00086d9c) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0008e9a0) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0008e9a0) popup_dyc_status_message_window_t

0xde68,	// (0x0008d4dc) bg_heading_pane_cp01

0xe83b,	// (0x0008deaf) heading_loc_req_pane_g1

0xe843,	// (0x0008deb7) heading_loc_req_pane_g2

0xe84b,	// (0x0008debf) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0008e9a7) heading_loc_req_pane_g

0xe853,	// (0x0008dec7) heading_loc_req_pane_t1

0xe862,	// (0x0008ded6) bg_popup_sub_pane_cp01_ParamLimits

0xe862,	// (0x0008ded6) bg_popup_sub_pane_cp01

0xe870,	// (0x0008dee4) popup_cale_events_window_g1_ParamLimits

0xe870,	// (0x0008dee4) popup_cale_events_window_g1

0xe890,	// (0x0008df04) popup_cale_events_window_g2_ParamLimits

0xe890,	// (0x0008df04) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0008e9db) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0008e9db) popup_cale_events_window_g

0xe8b0,	// (0x0008df24) popup_cale_events_window_t1_ParamLimits

0xe8b0,	// (0x0008df24) popup_cale_events_window_t1

0xe8c2,	// (0x0008df36) popup_cale_events_window_t2_ParamLimits

0xe8c2,	// (0x0008df36) popup_cale_events_window_t2

0xe900,	// (0x0008df74) popup_cale_events_window_t3_ParamLimits

0xe900,	// (0x0008df74) popup_cale_events_window_t3

0xe93a,	// (0x0008dfae) popup_cale_events_window_t4_ParamLimits

0xe93a,	// (0x0008dfae) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0008e9e0) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0008e9e0) popup_cale_events_window_t

0x77ac,	// (0x00086e20) call_type_pane

0xe970,	// (0x0008dfe4) popup_call_status_window_g1

0x77b8,	// (0x00086e2c) popup_call_status_window_g2

0x77c4,	// (0x00086e38) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0008e9e9) popup_call_status_window_g

0xe97e,	// (0x0008dff2) call_type_pane_g1

0xe987,	// (0x0008dffb) call_type_pane_g2

0x0001,

0xf37c,	// (0x0008e9f0) call_type_pane_g

0xde68,	// (0x0008d4dc) bg_popup_sub_pane_cp02

0xe990,	// (0x0008e004) listscroll_popup_wml_pane

0xe998,	// (0x0008e00c) list_wml_pane

0xe9a2,	// (0x0008e016) scroll_pane_cp013

0xe9ad,	// (0x0008e021) list_single_graphic_popup_wml_pane_ParamLimits

0xe9ad,	// (0x0008e021) list_single_graphic_popup_wml_pane

0xe22f,	// (0x0008d8a3) list_single_graphic_popup_wml_pane_g1

0xe9c1,	// (0x0008e035) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0008e9f5) list_single_graphic_popup_wml_pane_g

0xe9c9,	// (0x0008e03d) list_single_graphic_popup_wml_pane_t1

0xe9df,	// (0x0008e053) aid_call_pane

0xe0bb,	// (0x0008d72f) popup_clock_analogue_window_g1

0xe0bb,	// (0x0008d72f) popup_clock_analogue_window_g2

0x77d0,	// (0x00086e44) popup_clock_analogue_window_g3

0x77d0,	// (0x00086e44) popup_clock_analogue_window_g4

0xe22f,	// (0x0008d8a3) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0008e9fa) popup_clock_analogue_window_g

0x77d8,	// (0x00086e4c) popup_clock_analogue_window_t1

0x77e6,	// (0x00086e5a) clock_digital_number_pane_ParamLimits

0x77e6,	// (0x00086e5a) clock_digital_number_pane

0x77f2,	// (0x00086e66) clock_digital_number_pane_cp02_ParamLimits

0x77f2,	// (0x00086e66) clock_digital_number_pane_cp02

0x77fe,	// (0x00086e72) clock_digital_number_pane_cp03_ParamLimits

0x77fe,	// (0x00086e72) clock_digital_number_pane_cp03

0x780a,	// (0x00086e7e) clock_digital_number_pane_cp04_ParamLimits

0x780a,	// (0x00086e7e) clock_digital_number_pane_cp04

0x7816,	// (0x00086e8a) clock_digital_separator_pane_ParamLimits

0x7816,	// (0x00086e8a) clock_digital_separator_pane

0x7822,	// (0x00086e96) popup_clock_digital_window_t1

0xe22f,	// (0x0008d8a3) clock_digital_number_pane_g1

0xe22f,	// (0x0008d8a3) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0008e968) clock_digital_number_pane_g

0xe22f,	// (0x0008d8a3) clock_digital_separator_pane_g1

0xe22f,	// (0x0008d8a3) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0008e968) clock_digital_separator_pane_g

0xde68,	// (0x0008d4dc) bg_popup_window_pane_cp04

0xe9e7,	// (0x0008e05b) heading_pane_cp03

0xe9ef,	// (0x0008e063) listscroll_popup_gms_pane

0xe9f7,	// (0x0008e06b) grid_large_graphic_popup_pane

0xea01,	// (0x0008e075) listscroll_popup_gms_pane_g1

0xea09,	// (0x0008e07d) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0008ea05) listscroll_popup_gms_pane_g

0xe53c,	// (0x0008dbb0) scroll_pane_cp014

0xea11,	// (0x0008e085) cell_large_graphic_popup_pane_ParamLimits

0xea11,	// (0x0008e085) cell_large_graphic_popup_pane

0xea29,	// (0x0008e09d) cell_large_graphic_popup_pane_g1_ParamLimits

0xea29,	// (0x0008e09d) cell_large_graphic_popup_pane_g1

0xea35,	// (0x0008e0a9) cell_large_graphic_popup_pane_g2_ParamLimits

0xea35,	// (0x0008e0a9) cell_large_graphic_popup_pane_g2

0xea41,	// (0x0008e0b5) cell_large_graphic_popup_pane_g3_ParamLimits

0xea41,	// (0x0008e0b5) cell_large_graphic_popup_pane_g3

0xea4e,	// (0x0008e0c2) cell_large_graphic_popup_pane_g4_ParamLimits

0xea4e,	// (0x0008e0c2) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0008ea0a) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0008ea0a) cell_large_graphic_popup_pane_g

0xea5e,	// (0x0008e0d2) grid_highlight_pane_cp010

0xe22f,	// (0x0008d8a3) bg_popup_call_pane_g1

0xea68,	// (0x0008e0dc) list_single_graphic_popup_conf_pane_ParamLimits

0xea68,	// (0x0008e0dc) list_single_graphic_popup_conf_pane

0xea7a,	// (0x0008e0ee) list_highlight_pane_cp01

0xea83,	// (0x0008e0f7) list_single_graphic_popup_conf_pane_g1

0xea8b,	// (0x0008e0ff) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0008ea13) list_single_graphic_popup_conf_pane_g

0xea93,	// (0x0008e107) list_single_graphic_popup_conf_pane_t1

0xeaa1,	// (0x0008e115) linegrid_cams_pane_g1

0x783f,	// (0x00086eb3) linegrid_cams_pane_g2

0xe2e7,	// (0x0008d95b) linegrid_cams_pane_g3

0xeaaa,	// (0x0008e11e) linegrid_cams_pane_g4

0x7848,	// (0x00086ebc) linegrid_cams_pane_g5

0x7851,	// (0x00086ec5) linegrid_cams_pane_g6

0xe36d,	// (0x0008d9e1) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0008ea18) linegrid_cams_pane_g

0xeab3,	// (0x0008e127) popup_clock_analogue_window

0xeab3,	// (0x0008e127) popup_clock_digital_window

0xde68,	// (0x0008d4dc) popup_phob_thumbnail_window

0xe22f,	// (0x0008d8a3) call_video_uplink_pane_g1

0xeabc,	// (0x0008e130) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0008ea27) call_video_uplink_pane_g

0xe33a,	// (0x0008d9ae) video_uplink_pane

0xeac4,	// (0x0008e138) mce_image_pane_g1

0x785a,	// (0x00086ece) mce_image_pane_g2

0x7862,	// (0x00086ed6) mce_image_pane_g3

0x786a,	// (0x00086ede) mce_image_pane_g4

0x7872,	// (0x00086ee6) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0008ea2c) mce_image_pane_g

0xeace,	// (0x0008e142) control_top_pane_stacon_cp01_ParamLimits

0xeace,	// (0x0008e142) control_top_pane_stacon_cp01

0xeae2,	// (0x0008e156) uni_indicator_pane_stacon_cp01_ParamLimits

0xeae2,	// (0x0008e156) uni_indicator_pane_stacon_cp01

0xeaf3,	// (0x0008e167) bg_popup_sub_pane_cp03

0x787a,	// (0x00086eee) chi_dic_find_pane

0x7882,	// (0x00086ef6) listscroll_chi_dic_pane

0x788b,	// (0x00086eff) main_pane_chidic_g1

0x789e,	// (0x00086f12) chi_dic_find_pane_t1

0xeafd,	// (0x0008e171) find_chidic_pane

0xeb06,	// (0x0008e17a) chi_dic_list_pane_ParamLimits

0xeb06,	// (0x0008e17a) chi_dic_list_pane

0xeb17,	// (0x0008e18b) scroll_pane_cp020

0x78ac,	// (0x00086f20) find_chidic_pane_t1

0xde68,	// (0x0008d4dc) input_focus_pane_cp06

0x78bb,	// (0x00086f2f) list_chi_dic_pane_ParamLimits

0x78bb,	// (0x00086f2f) list_chi_dic_pane

0xeb1f,	// (0x0008e193) list_chi_dic_pane_t1_ParamLimits

0xeb1f,	// (0x0008e193) list_chi_dic_pane_t1

0xde68,	// (0x0008d4dc) list_highlight_pane_cp020

0xeb32,	// (0x0008e1a6) bg_cale_heading_pane_g1

0x78dc,	// (0x00086f50) bg_cale_heading_pane_g2

0x78e4,	// (0x00086f58) bg_cale_heading_pane_g3

0x78ec,	// (0x00086f60) bg_cale_heading_pane_g4

0x78f6,	// (0x00086f6a) bg_cale_heading_pane_g5

0x7900,	// (0x00086f74) bg_cale_heading_pane_g6

0x7908,	// (0x00086f7c) bg_cale_heading_pane_g7

0x7910,	// (0x00086f84) bg_cale_heading_pane_g8

0x791a,	// (0x00086f8e) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0008ea37) bg_cale_heading_pane_g

0xeb32,	// (0x0008e1a6) bg_cale_side_pane_g1

0x7924,	// (0x00086f98) bg_cale_side_pane_g2

0x792e,	// (0x00086fa2) bg_cale_side_pane_g3

0x7938,	// (0x00086fac) bg_cale_side_pane_g4

0x7942,	// (0x00086fb6) bg_cale_side_pane_g5

0x794c,	// (0x00086fc0) bg_cale_side_pane_g6

0x7956,	// (0x00086fca) bg_cale_side_pane_g7

0x7960,	// (0x00086fd4) bg_cale_side_pane_g8

0x7968,	// (0x00086fdc) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0008ea4a) bg_cale_side_pane_g

0x7970,	// (0x00086fe4) popup_call_status_window_ParamLimits

0x7970,	// (0x00086fe4) popup_call_status_window

0xeb3a,	// (0x0008e1ae) stacon_top_pane

0xeb42,	// (0x0008e1b6) status_pane_ParamLimits

0xeb42,	// (0x0008e1b6) status_pane

0xeb57,	// (0x0008e1cb) status_small_pane

0xeb5f,	// (0x0008e1d3) control_pane

0xde68,	// (0x0008d4dc) stacon_bottom_pane

0xeb67,	// (0x0008e1db) list_single_mce_smart_pane_t1_ParamLimits

0xeb67,	// (0x0008e1db) list_single_mce_smart_pane_t1

0xeb7a,	// (0x0008e1ee) list_single_mce_smart_pane_t2_ParamLimits

0xeb7a,	// (0x0008e1ee) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0008ea5d) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0008ea5d) list_single_mce_smart_pane_t

0x797c,	// (0x00086ff0) compass_pane

0x7988,	// (0x00086ffc) main_location2_pane_t1

0x799c,	// (0x00087010) main_location2_pane_t2

0x79b0,	// (0x00087024) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0008ea62) main_location2_pane_t

0xeb99,	// (0x0008e20d) compass_pane_g1_ParamLimits

0xeb99,	// (0x0008e20d) compass_pane_g1

0x79fa,	// (0x0008706e) compass_pane_t1

0x7a09,	// (0x0008707d) compass_pane_t2

0x0005,

0xf3f7,	// (0x0008ea6b) compass_pane_t

0x7a54,	// (0x000870c8) text_secondary_cp61

0xebad,	// (0x0008e221) navi_pane_cams_g5

0xebd0,	// (0x0008e244) navi_pane_im_t1

0xebde,	// (0x0008e252) navi_pane_mp_g1_ParamLimits

0xebde,	// (0x0008e252) navi_pane_mp_g1

0xebf2,	// (0x0008e266) navi_pane_mp_g2_ParamLimits

0xebf2,	// (0x0008e266) navi_pane_mp_g2

0xebfe,	// (0x0008e272) navi_pane_mp_g3_ParamLimits

0xebfe,	// (0x0008e272) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0008ea7f) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0008ea7f) navi_pane_mp_g

0xec0a,	// (0x0008e27e) navi_pane_mp_t1

0xec18,	// (0x0008e28c) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0008ea86) navi_pane_mp_t

0xec54,	// (0x0008e2c8) navi_pane_vt_g1

0xec0a,	// (0x0008e27e) navi_pane_vt_t1

0xec5c,	// (0x0008e2d0) navi_slider_pane

0xec64,	// (0x0008e2d8) zooming_pane

0xec6c,	// (0x0008e2e0) navi_slider_pane_g1

0x7b81,	// (0x000871f5) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0008ea8d) navi_slider_pane_g

0xec90,	// (0x0008e304) aid_levels_zoom

0xec98,	// (0x0008e30c) zooming_pane_g1

0xeca0,	// (0x0008e314) zooming_pane_g2

0xeca0,	// (0x0008e314) zooming_pane_g3

0x0002,

0xf428,	// (0x0008ea9c) zooming_pane_g

0xeca8,	// (0x0008e31c) level_10_zoom

0xecb1,	// (0x0008e325) level_11_zoom

0xecba,	// (0x0008e32e) level_1_zoom

0xecc3,	// (0x0008e337) level_2_zoom

0xeccc,	// (0x0008e340) level_3_zoom

0xecd5,	// (0x0008e349) level_4_zoom

0xecde,	// (0x0008e352) level_5_zoom

0xece7,	// (0x0008e35b) level_6_zoom

0xecf0,	// (0x0008e364) level_7_zoom

0xecf9,	// (0x0008e36d) level_8_zoom

0xed02,	// (0x0008e376) level_9_zoom

0xed13,	// (0x0008e387) popup_phob_thumbnail_window_g1

0xed1b,	// (0x0008e38f) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0008eaa3) popup_phob_thumbnail_window_g

0x130d,	// (0x00080981) level_1_location

0x1315,	// (0x00080989) level_2_location

0x131d,	// (0x00080991) level_3_location

0x1325,	// (0x00080999) level_4_location

0xec64,	// (0x0008e2d8) level_5_location

0x7b93,	// (0x00087207) mce_icon_pane_g1

0x7b9b,	// (0x0008720f) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0008eaa8) mce_icon_pane_g

0x7ba3,	// (0x00087217) main_mup_pane_g1_ParamLimits

0x7ba3,	// (0x00087217) main_mup_pane_g1

0x7bbb,	// (0x0008722f) main_mup_pane_g2_ParamLimits

0x7bbb,	// (0x0008722f) main_mup_pane_g2

0x7bd7,	// (0x0008724b) main_mup_pane_g3_ParamLimits

0x7bd7,	// (0x0008724b) main_mup_pane_g3

0x7bf3,	// (0x00087267) main_mup_pane_g4_ParamLimits

0x7bf3,	// (0x00087267) main_mup_pane_g4

0x7c0f,	// (0x00087283) main_mup_pane_g5_ParamLimits

0x7c0f,	// (0x00087283) main_mup_pane_g5

0x7c30,	// (0x000872a4) main_mup_pane_g6_ParamLimits

0x7c30,	// (0x000872a4) main_mup_pane_g6

0x7c4c,	// (0x000872c0) main_mup_pane_g7_ParamLimits

0x7c4c,	// (0x000872c0) main_mup_pane_g7

0x7c68,	// (0x000872dc) main_mup_pane_g8_ParamLimits

0x7c68,	// (0x000872dc) main_mup_pane_g8

0x7c84,	// (0x000872f8) main_mup_pane_g9_ParamLimits

0x7c84,	// (0x000872f8) main_mup_pane_g9

0x7ca3,	// (0x00087317) main_mup_pane_g10_ParamLimits

0x7ca3,	// (0x00087317) main_mup_pane_g10

0x7cc2,	// (0x00087336) main_mup_pane_g11_ParamLimits

0x7cc2,	// (0x00087336) main_mup_pane_g11

0x7cda,	// (0x0008734e) main_mup_pane_g12_ParamLimits

0x7cda,	// (0x0008734e) main_mup_pane_g12

0x7ce8,	// (0x0008735c) main_mup_pane_g13_ParamLimits

0x7ce8,	// (0x0008735c) main_mup_pane_g13

0x000c,

0xf439,	// (0x0008eaad) main_mup_pane_g_ParamLimits

0xf439,	// (0x0008eaad) main_mup_pane_g

0x7cfe,	// (0x00087372) main_mup_pane_t1_ParamLimits

0x7cfe,	// (0x00087372) main_mup_pane_t1

0x7d1b,	// (0x0008738f) main_mup_pane_t2_ParamLimits

0x7d1b,	// (0x0008738f) main_mup_pane_t2

0x7d35,	// (0x000873a9) main_mup_pane_t3_ParamLimits

0x7d35,	// (0x000873a9) main_mup_pane_t3

0x7d4f,	// (0x000873c3) main_mup_pane_t4_ParamLimits

0x7d4f,	// (0x000873c3) main_mup_pane_t4

0x7d61,	// (0x000873d5) main_mup_pane_t5_ParamLimits

0x7d61,	// (0x000873d5) main_mup_pane_t5

0x7d73,	// (0x000873e7) main_mup_pane_t6_ParamLimits

0x7d73,	// (0x000873e7) main_mup_pane_t6

0x0005,

0xf454,	// (0x0008eac8) main_mup_pane_t_ParamLimits

0xf454,	// (0x0008eac8) main_mup_pane_t

0x7d89,	// (0x000873fd) mup_progress_pane_ParamLimits

0x7d89,	// (0x000873fd) mup_progress_pane

0x7d95,	// (0x00087409) mup_visualizer_pane_ParamLimits

0x7d95,	// (0x00087409) mup_visualizer_pane

0x7dd3,	// (0x00087447) mup_volume_pane_ParamLimits

0x7dd3,	// (0x00087447) mup_volume_pane

0xe970,	// (0x0008dfe4) mup_visualizer_pane_g1_ParamLimits

0xe970,	// (0x0008dfe4) mup_visualizer_pane_g1

0xe970,	// (0x0008dfe4) mup_visualizer_pane_g2_ParamLimits

0xe970,	// (0x0008dfe4) mup_visualizer_pane_g2

0xeb99,	// (0x0008e20d) mup_visualizer_pane_g3_ParamLimits

0xeb99,	// (0x0008e20d) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0008ead5) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0008ead5) mup_visualizer_pane_g

0xe22f,	// (0x0008d8a3) mup_volume_pane_g1

0xed2b,	// (0x0008e39f) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0008eadc) mup_volume_pane_g

0xe22f,	// (0x0008d8a3) mup_progress_pane_g1

0xed34,	// (0x0008e3a8) mup_progress_pane_g2

0xed3d,	// (0x0008e3b1) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0008eae1) mup_progress_pane_g

0xde68,	// (0x0008d4dc) bg_popup_window_pane_cp05

0xed46,	// (0x0008e3ba) heading_pane_cp02_ParamLimits

0xed46,	// (0x0008e3ba) heading_pane_cp02

0xed60,	// (0x0008e3d4) list_popup_blid_pane

0xed68,	// (0x0008e3dc) list_blid_sat_info_pane_ParamLimits

0xed68,	// (0x0008e3dc) list_blid_sat_info_pane

0xed7b,	// (0x0008e3ef) list_blid_sat_info_pane_g1

0xed83,	// (0x0008e3f7) list_blid_sat_info_pane_t1

0x7ede,	// (0x00087552) mup_equalizer_pane_ParamLimits

0x7ede,	// (0x00087552) mup_equalizer_pane

0x7eff,	// (0x00087573) mup_equalizer_pane_cp1_ParamLimits

0x7eff,	// (0x00087573) mup_equalizer_pane_cp1

0x7f20,	// (0x00087594) mup_equalizer_pane_cp2_ParamLimits

0x7f20,	// (0x00087594) mup_equalizer_pane_cp2

0x7f41,	// (0x000875b5) mup_equalizer_pane_cp3_ParamLimits

0x7f41,	// (0x000875b5) mup_equalizer_pane_cp3

0x7f62,	// (0x000875d6) mup_equalizer_pane_cp4_ParamLimits

0x7f62,	// (0x000875d6) mup_equalizer_pane_cp4

0x7f83,	// (0x000875f7) mup_equalizer_pane_cp5

0x7f99,	// (0x0008760d) mup_equalizer_pane_cp6

0x7fb1,	// (0x00087625) mup_equalizer_pane_cp7

0x122b,	// (0x0008089f) bg_popup_call_poc_act_pane_g9

0x1233,	// (0x000808a7) bg_popup_call_poc_act_pane_g10

0x123b,	// (0x000808af) bg_popup_call_poc_act_pane_g11

0x000a,

0xe0c3,	// (0x0008d737) mup_scale_pane

0xe22f,	// (0x0008d8a3) mup_scale_pane_g1

0xed91,	// (0x0008e405) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0008eafd) mup_scale_pane_g

0xedb5,	// (0x0008e429) msg_data_pane

0xedbd,	// (0x0008e431) scroll_pane_cp017

0x7fdb,	// (0x0008764f) bg_list_pane_cp04_ParamLimits

0x7fdb,	// (0x0008764f) bg_list_pane_cp04

0xedc5,	// (0x0008e439) msg_data_pane_g1

0x7ffb,	// (0x0008766f) msg_data_pane_g2

0x7862,	// (0x00086ed6) msg_data_pane_g3

0x8003,	// (0x00087677) msg_data_pane_g4

0x800b,	// (0x0008767f) msg_data_pane_g5

0x8013,	// (0x00087687) msg_data_pane_g6

0x801b,	// (0x0008768f) msg_data_pane_g7

0x0006,

0xf498,	// (0x0008eb0c) msg_data_pane_g

0x8023,	// (0x00087697) msg_text_pane_ParamLimits

0x8023,	// (0x00087697) msg_text_pane

0x806d,	// (0x000876e1) qrid_highlight_pane_cp011_ParamLimits

0x806d,	// (0x000876e1) qrid_highlight_pane_cp011

0xde68,	// (0x0008d4dc) msg_body_pane

0xde68,	// (0x0008d4dc) msg_header_pane

0xedd6,	// (0x0008e44a) input_focus_pane_cp07

0x8097,	// (0x0008770b) msg_header_pane_t1_ParamLimits

0x8097,	// (0x0008770b) msg_header_pane_t1

0x02d8,	// (0x0007f94c) msg_header_pane_t2_ParamLimits

0x02d8,	// (0x0007f94c) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0008eb20) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0008eb20) msg_header_pane_t

0xedeb,	// (0x0008e45f) msg_body_pane_g1

0x80ab,	// (0x0008771f) msg_body_pane_t1_ParamLimits

0x80ab,	// (0x0008771f) msg_body_pane_t1

0x02ea,	// (0x0007f95e) msg_body_pane_t2_ParamLimits

0x02ea,	// (0x0007f95e) msg_body_pane_t2

0x02fc,	// (0x0007f970) msg_body_pane_t3_ParamLimits

0x02fc,	// (0x0007f970) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0008eb25) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0008eb25) msg_body_pane_t

0x812e,	// (0x000877a2) main_viewer_pane_g1_ParamLimits

0x812e,	// (0x000877a2) main_viewer_pane_g1

0x813a,	// (0x000877ae) main_viewer_pane_g2_ParamLimits

0x813a,	// (0x000877ae) main_viewer_pane_g2

0x8146,	// (0x000877ba) main_viewer_pane_g3_ParamLimits

0x8146,	// (0x000877ba) main_viewer_pane_g3

0x8157,	// (0x000877cb) main_viewer_pane_g4_ParamLimits

0x8157,	// (0x000877cb) main_viewer_pane_g4

0x8168,	// (0x000877dc) main_viewer_pane_g5_ParamLimits

0x8168,	// (0x000877dc) main_viewer_pane_g5

0x8168,	// (0x000877dc) main_viewer_pane_g7_ParamLimits

0x8168,	// (0x000877dc) main_viewer_pane_g7

0x817a,	// (0x000877ee) main_viewer_pane_g8_ParamLimits

0x817a,	// (0x000877ee) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0008eb35) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0008eb35) main_viewer_pane_g

0xedf3,	// (0x0008e467) viewer_content_pane_ParamLimits

0xedf3,	// (0x0008e467) viewer_content_pane

0x81b2,	// (0x00087826) main_postcard_pane_g1_ParamLimits

0x81b2,	// (0x00087826) main_postcard_pane_g1

0x81c0,	// (0x00087834) main_postcard_pane_g2_ParamLimits

0x81c0,	// (0x00087834) main_postcard_pane_g2

0x81ce,	// (0x00087842) main_postcard_pane_g3_ParamLimits

0x81ce,	// (0x00087842) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0008eb46) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0008eb46) main_postcard_pane_g

0x81de,	// (0x00087852) main_postcard_pane_g4

0x142d,	// (0x00080aa1) smil_status_volume_pane_g2

0x820a,	// (0x0008787e) postcard_pane_ParamLimits

0x820a,	// (0x0008787e) postcard_pane

0xe970,	// (0x0008dfe4) postcard_pane_g1_ParamLimits

0xe970,	// (0x0008dfe4) postcard_pane_g1

0x823c,	// (0x000878b0) postcard_pane_g2_ParamLimits

0x823c,	// (0x000878b0) postcard_pane_g2

0x8248,	// (0x000878bc) postcard_pane_g3_ParamLimits

0x8248,	// (0x000878bc) postcard_pane_g3

0xee01,	// (0x0008e475) postcard_pane_g4_ParamLimits

0xee01,	// (0x0008e475) postcard_pane_g4

0x8254,	// (0x000878c8) postcard_pane_g5_ParamLimits

0x8254,	// (0x000878c8) postcard_pane_g5

0x8260,	// (0x000878d4) postcard_pane_g6_ParamLimits

0x8260,	// (0x000878d4) postcard_pane_g6

0xee0f,	// (0x0008e483) postcard_pane_g7_ParamLimits

0xee0f,	// (0x0008e483) postcard_pane_g7

0x0006,

0xf4df,	// (0x0008eb53) postcard_pane_g_ParamLimits

0xf4df,	// (0x0008eb53) postcard_pane_g

0x826c,	// (0x000878e0) main_mp2_pane_g1_ParamLimits

0x826c,	// (0x000878e0) main_mp2_pane_g1

0x8278,	// (0x000878ec) main_mp2_pane_g2_ParamLimits

0x8278,	// (0x000878ec) main_mp2_pane_g2

0x8284,	// (0x000878f8) main_mp2_pane_g3_ParamLimits

0x8284,	// (0x000878f8) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0008eb62) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0008eb62) main_mp2_pane_g

0x8290,	// (0x00087904) main_mp2_pane_t1_ParamLimits

0x8290,	// (0x00087904) main_mp2_pane_t1

0x82a7,	// (0x0008791b) main_mp2_pane_t2_ParamLimits

0x82a7,	// (0x0008791b) main_mp2_pane_t2

0x82b9,	// (0x0008792d) main_mp2_pane_t3_ParamLimits

0x82b9,	// (0x0008792d) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0008eb69) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0008eb69) main_mp2_pane_t

0xee1d,	// (0x0008e491) pec_content_pane_ParamLimits

0xee1d,	// (0x0008e491) pec_content_pane

0xe53c,	// (0x0008dbb0) scroll_pane_cp015

0xee2f,	// (0x0008e4a3) pec_attribute_pane_ParamLimits

0xee2f,	// (0x0008e4a3) pec_attribute_pane

0x82cb,	// (0x0008793f) pec_content_pane_g1_ParamLimits

0x82cb,	// (0x0008793f) pec_content_pane_g1

0xee3f,	// (0x0008e4b3) pec_content_pane_t1_ParamLimits

0xee3f,	// (0x0008e4b3) pec_content_pane_t1

0xee51,	// (0x0008e4c5) pec_content_pane_t2_ParamLimits

0xee51,	// (0x0008e4c5) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0008eb70) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0008eb70) pec_content_pane_t

0x82d7,	// (0x0008794b) list_single_graphic_pane_cp01_ParamLimits

0x82d7,	// (0x0008794b) list_single_graphic_pane_cp01

0xe0c3,	// (0x0008d737) bg_popup_sub_pane_cp04

0xee63,	// (0x0008e4d7) popup_mup_playback_window_g1

0xee6f,	// (0x0008e4e3) popup_mup_playback_window_t1

0xee84,	// (0x0008e4f8) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0008eb75) popup_mup_playback_window_t

0xeebb,	// (0x0008e52f) main_image_pane_g1_ParamLimits

0xeebb,	// (0x0008e52f) main_image_pane_g1

0xeefe,	// (0x0008e572) scroll_pane_cp018_ParamLimits

0xeefe,	// (0x0008e572) scroll_pane_cp018

0xef16,	// (0x0008e58a) scroll_pane_cp016_ParamLimits

0xef16,	// (0x0008e58a) scroll_pane_cp016

0x837b,	// (0x000879ef) smil2_image_pane_ParamLimits

0x837b,	// (0x000879ef) smil2_image_pane

0x83af,	// (0x00087a23) smil2_root_pane_ParamLimits

0x83af,	// (0x00087a23) smil2_root_pane

0x83db,	// (0x00087a4f) smil2_text_pane_ParamLimits

0x83db,	// (0x00087a4f) smil2_text_pane

0xde68,	// (0x0008d4dc) bg_list_pane_cp06

0xef52,	// (0x0008e5c6) grid_radio_pane

0xde68,	// (0x0008d4dc) bg_popup_window_pane_cp06

0xef5a,	// (0x0008e5ce) main_fmradio_pane_t1

0xe9e7,	// (0x0008e05b) heading_pane_cp04

0xef68,	// (0x0008e5dc) main_fmradio_pane_t2

0x1243,	// (0x000808b7) popup_cale_lunar_info_window_g1

0xef76,	// (0x0008e5ea) main_fmradio_pane_t3

0x124b,	// (0x000808bf) popup_cale_lunar_info_window_g2

0xef84,	// (0x0008e5f8) main_fmradio_pane_t4

0x0001,

0xef92,	// (0x0008e606) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0008ec50) popup_cale_lunar_info_window_g

0xf516,	// (0x0008eb8a) main_fmradio_pane_t

0xefa0,	// (0x0008e614) wait_bar_pane_cp03

0xefa8,	// (0x0008e61c) cell_fmradio_pane_ParamLimits

0xefa8,	// (0x0008e61c) cell_fmradio_pane

0xee0f,	// (0x0008e483) cell_fmradio_pane_g1_ParamLimits

0xee0f,	// (0x0008e483) cell_fmradio_pane_g1

0xde68,	// (0x0008d4dc) grid_highlight_pane_cp011

0xefbb,	// (0x0008e62f) poc_content_pane_ParamLimits

0xefbb,	// (0x0008e62f) poc_content_pane

0xefcd,	// (0x0008e641) scroll_pane_cp019

0x841b,	// (0x00087a8f) popup_call_poc_act_window_ParamLimits

0x841b,	// (0x00087a8f) popup_call_poc_act_window

0x8428,	// (0x00087a9c) popup_call_poc_inact_window_ParamLimits

0x8428,	// (0x00087a9c) popup_call_poc_inact_window

0xf5b3,	// (0x0008ec27) bg_popup_call_poc_act_pane_g

0x11b3,	// (0x00080827) bg_popup_call_poc_inact_pane_g1

0x11bb,	// (0x0008082f) bg_popup_call_poc_inact_pane_g2

0xefd5,	// (0x0008e649) popup_call_poc_act_window_g2

0x11c3,	// (0x00080837) bg_popup_call_poc_inact_pane_g3

0x11cb,	// (0x0008083f) bg_popup_call_poc_inact_pane_g4

0x11d3,	// (0x00080847) bg_popup_call_poc_inact_pane_g5

0xefdd,	// (0x0008e651) popup_call_poc_act_window_t1_ParamLimits

0xefdd,	// (0x0008e651) popup_call_poc_act_window_t1

0xf005,	// (0x0008e679) popup_call_poc_act_window_t2_ParamLimits

0xf005,	// (0x0008e679) popup_call_poc_act_window_t2

0xf02d,	// (0x0008e6a1) popup_call_poc_act_window_t3_ParamLimits

0xf02d,	// (0x0008e6a1) popup_call_poc_act_window_t3

0x0350,	// (0x0007f9c4) popup_call_poc_act_window_t4_ParamLimits

0x0350,	// (0x0007f9c4) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0008eb95) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0008eb95) popup_call_poc_act_window_t

0x11db,	// (0x0008084f) bg_popup_call_poc_inact_pane_g6

0x11e3,	// (0x00080857) bg_popup_call_poc_inact_pane_g7

0x11eb,	// (0x0008085f) bg_popup_call_poc_inact_pane_g8

0x0362,	// (0x0007f9d6) popup_call_poc_inact_window_g2

0x11f3,	// (0x00080867) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0008ec14) bg_popup_call_poc_inact_pane_g

0x036a,	// (0x0007f9de) popup_call_poc_inact_window_t1_ParamLimits

0x036a,	// (0x0007f9de) popup_call_poc_inact_window_t1

0x037f,	// (0x0007f9f3) popup_call_poc_inact_window_t2_ParamLimits

0x037f,	// (0x0007f9f3) popup_call_poc_inact_window_t2

0x0394,	// (0x0007fa08) popup_call_poc_inact_window_t3_ParamLimits

0x0394,	// (0x0007fa08) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0008eb9e) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0008eb9e) popup_call_poc_inact_window_t

0x13b3,	// (0x00080a27) context_pane_ParamLimits

0x8a0f,	// (0x00088083) signal_pane_ParamLimits

0xec64,	// (0x0008e2d8) main_call2_pane

0x13a1,	// (0x00080a15) popup_phob_thumbnail2_window_ParamLimits

0x13a1,	// (0x00080a15) popup_phob_thumbnail2_window

0x80dc,	// (0x00087750) aid_hotspot_pointer_arrow_pane

0x80e4,	// (0x00087758) aid_hotspot_pointer_hand_pane

0x874d,	// (0x00087dc1) phob_pre_status_pane_g5

0x63ac,	// (0x00085a20) cams_zoom_pane_ParamLimits

0x63b8,	// (0x00085a2c) image_vga_pane_ParamLimits

0x63c7,	// (0x00085a3b) main_camera_pane_g1_ParamLimits

0x63d5,	// (0x00085a49) main_camera_pane_g2_ParamLimits

0x63e3,	// (0x00085a57) main_camera_pane_g3_ParamLimits

0x63ef,	// (0x00085a63) main_camera_pane_g4_ParamLimits

0x63fb,	// (0x00085a6f) main_camera_pane_g5_ParamLimits

0x6407,	// (0x00085a7b) main_camera_pane_g6_ParamLimits

0x6413,	// (0x00085a87) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0008e89d) main_camera_pane_g_ParamLimits

0x641f,	// (0x00085a93) main_camera_pane_t1_ParamLimits

0x6431,	// (0x00085aa5) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0008e8ae) main_camera_pane_t_ParamLimits

0xe0c3,	// (0x0008d737) bg_popup_preview_window_pane_cp01_ParamLimits

0xe0c3,	// (0x0008d737) bg_popup_preview_window_pane_cp01

0x03a9,	// (0x0007fa1d) popup_phob_thumbnail2_window_g1_ParamLimits

0x03a9,	// (0x0007fa1d) popup_phob_thumbnail2_window_g1

0xde68,	// (0x0008d4dc) call2_cli_visual_pane

0x8444,	// (0x00087ab8) popup_call2_audio_conf_window_ParamLimits

0x8444,	// (0x00087ab8) popup_call2_audio_conf_window

0x8459,	// (0x00087acd) popup_call2_audio_first_window_ParamLimits

0x8459,	// (0x00087acd) popup_call2_audio_first_window

0x84f7,	// (0x00087b6b) popup_call2_audio_in_window_ParamLimits

0x84f7,	// (0x00087b6b) popup_call2_audio_in_window

0x8539,	// (0x00087bad) popup_call2_audio_out_window_ParamLimits

0x8539,	// (0x00087bad) popup_call2_audio_out_window

0x859b,	// (0x00087c0f) popup_call2_audio_second_window_ParamLimits

0x859b,	// (0x00087c0f) popup_call2_audio_second_window

0x85f9,	// (0x00087c6d) popup_call2_audio_wait_window_ParamLimits

0x85f9,	// (0x00087c6d) popup_call2_audio_wait_window

0xde68,	// (0x0008d4dc) bg_popup_call2_act_pane_cp03

0xe0a5,	// (0x0008d719) list_conf_pane_cp

0x03b5,	// (0x0007fa29) popup_call2_audio_conf_window_t1

0x03c3,	// (0x0007fa37) list_single_graphic_popup_conf2_pane_ParamLimits

0x03c3,	// (0x0007fa37) list_single_graphic_popup_conf2_pane

0xea7a,	// (0x0008e0ee) list_highlight_pane_cp04

0x03d6,	// (0x0007fa4a) list_single_graphic_popup_conf2_pane_g1

0xea8b,	// (0x0008e0ff) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0008eba5) list_single_graphic_popup_conf2_pane_g

0x03e0,	// (0x0007fa54) list_single_graphic_popup_conf2_pane_t1

0x03ee,	// (0x0007fa62) bg_popup_call2_act_pane_cp01_ParamLimits

0x03ee,	// (0x0007fa62) bg_popup_call2_act_pane_cp01

0x0478,	// (0x0007faec) call_type_pane_cp05_ParamLimits

0x0478,	// (0x0007faec) call_type_pane_cp05

0x04cc,	// (0x0007fb40) popup_call2_audio_second_window_g1_ParamLimits

0x04cc,	// (0x0007fb40) popup_call2_audio_second_window_g1

0x0520,	// (0x0007fb94) popup_call2_audio_second_window_g2_ParamLimits

0x0520,	// (0x0007fb94) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0008ebaa) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0008ebaa) popup_call2_audio_second_window_g

0x0585,	// (0x0007fbf9) popup_call2_audio_second_window_t1_ParamLimits

0x0585,	// (0x0007fbf9) popup_call2_audio_second_window_t1

0x0640,	// (0x0007fcb4) popup_call2_audio_second_window_t2_ParamLimits

0x0640,	// (0x0007fcb4) popup_call2_audio_second_window_t2

0x0693,	// (0x0007fd07) popup_call2_audio_second_window_t3_ParamLimits

0x0693,	// (0x0007fd07) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0008ebb1) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0008ebb1) popup_call2_audio_second_window_t

0xde68,	// (0x0008d4dc) bg_popup_call2_in_pane_cp02

0xde72,	// (0x0008d4e6) call_type_pane_cp04

0xde7a,	// (0x0008d4ee) popup_call2_audio_wait_window_g1

0xde82,	// (0x0008d4f6) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0008e78a) popup_call2_audio_wait_window_g

0xde8a,	// (0x0008d4fe) popup_call2_audio_wait_window_t3

0x0786,	// (0x0007fdfa) bg_popup_call2_act_pane_ParamLimits

0x0786,	// (0x0007fdfa) bg_popup_call2_act_pane

0x0846,	// (0x0007feba) call_type_pane_cp03_ParamLimits

0x0846,	// (0x0007feba) call_type_pane_cp03

0x08aa,	// (0x0007ff1e) popup_call2_audio_first_window_g1_ParamLimits

0x08aa,	// (0x0007ff1e) popup_call2_audio_first_window_g1

0x091a,	// (0x0007ff8e) popup_call2_audio_first_window_g2_ParamLimits

0x091a,	// (0x0007ff8e) popup_call2_audio_first_window_g2

0xe970,	// (0x0008dfe4) popup_call2_audio_first_window_g3_ParamLimits

0xe970,	// (0x0008dfe4) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0008ebba) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0008ebba) popup_call2_audio_first_window_g

0x09f8,	// (0x0008006c) popup_call2_audio_first_window_t1_ParamLimits

0x09f8,	// (0x0008006c) popup_call2_audio_first_window_t1

0x0afb,	// (0x0008016f) popup_call2_audio_first_window_t4_ParamLimits

0x0afb,	// (0x0008016f) popup_call2_audio_first_window_t4

0x0bde,	// (0x00080252) popup_call2_audio_first_window_t5_ParamLimits

0x0bde,	// (0x00080252) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0008ebc5) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0008ebc5) popup_call2_audio_first_window_t

0xe0bb,	// (0x0008d72f) bg_popup_call2_act_pane_g1

0x1253,	// (0x000808c7) popup_cale_lunar_info_window_t1

0x1261,	// (0x000808d5) popup_cale_lunar_info_window_t2

0x126f,	// (0x000808e3) popup_cale_lunar_info_window_t3

0xde68,	// (0x0008d4dc) bg_popup_call2_bubble_pane

0x0cdf,	// (0x00080353) bg_popup_call2_in_pane_cp01_ParamLimits

0x0cdf,	// (0x00080353) bg_popup_call2_in_pane_cp01

0xdb44,	// (0x0008d1b8) call_type_pane_cp02

0x0d27,	// (0x0008039b) popup_call2_audio_out_window_g1_ParamLimits

0x0d27,	// (0x0008039b) popup_call2_audio_out_window_g1

0x0d53,	// (0x000803c7) popup_call2_audio_out_window_g2_ParamLimits

0x0d53,	// (0x000803c7) popup_call2_audio_out_window_g2

0x0d7b,	// (0x000803ef) popup_call2_audio_out_window_g3_ParamLimits

0x0d7b,	// (0x000803ef) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0008ebce) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0008ebce) popup_call2_audio_out_window_g

0x0db6,	// (0x0008042a) popup_call2_audio_out_window_t1_ParamLimits

0x0db6,	// (0x0008042a) popup_call2_audio_out_window_t1

0x0e15,	// (0x00080489) popup_call2_audio_out_window_t2_ParamLimits

0x0e15,	// (0x00080489) popup_call2_audio_out_window_t2

0x0e69,	// (0x000804dd) popup_call2_audio_out_window_t3_ParamLimits

0x0e69,	// (0x000804dd) popup_call2_audio_out_window_t3

0x0e7f,	// (0x000804f3) popup_call2_audio_out_window_t4_ParamLimits

0x0e7f,	// (0x000804f3) popup_call2_audio_out_window_t4

0x0e95,	// (0x00080509) popup_call2_audio_out_window_t5_ParamLimits

0x0e95,	// (0x00080509) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0008ebd7) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0008ebd7) popup_call2_audio_out_window_t

0x0ef9,	// (0x0008056d) bg_popup_call2_in_pane_ParamLimits

0x0ef9,	// (0x0008056d) bg_popup_call2_in_pane

0x0f55,	// (0x000805c9) popup_call2_audio_in_window_g1_ParamLimits

0x0f55,	// (0x000805c9) popup_call2_audio_in_window_g1

0x0f8d,	// (0x00080601) popup_call2_audio_in_window_g2_ParamLimits

0x0f8d,	// (0x00080601) popup_call2_audio_in_window_g2

0x0fc5,	// (0x00080639) popup_call2_audio_in_window_g3_ParamLimits

0x0fc5,	// (0x00080639) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0008ebe4) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0008ebe4) popup_call2_audio_in_window_g

0x101d,	// (0x00080691) popup_call2_audio_in_window_t1_ParamLimits

0x101d,	// (0x00080691) popup_call2_audio_in_window_t1

0x109d,	// (0x00080711) popup_call2_audio_in_window_t2_ParamLimits

0x109d,	// (0x00080711) popup_call2_audio_in_window_t2

0x111d,	// (0x00080791) popup_call2_audio_in_window_t3_ParamLimits

0x111d,	// (0x00080791) popup_call2_audio_in_window_t3

0x1137,	// (0x000807ab) popup_call2_audio_in_window_t4_ParamLimits

0x1137,	// (0x000807ab) popup_call2_audio_in_window_t4

0x1149,	// (0x000807bd) popup_call2_audio_in_window_t5_ParamLimits

0x1149,	// (0x000807bd) popup_call2_audio_in_window_t5

0x115e,	// (0x000807d2) popup_call2_audio_in_window_t6_ParamLimits

0x115e,	// (0x000807d2) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0008ebed) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0008ebed) popup_call2_audio_in_window_t

0xe0bb,	// (0x0008d72f) bg_popup_call2_in_pane_g1

0x127d,	// (0x000808f1) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0008ec55) popup_cale_lunar_info_window_t

0xe0c3,	// (0x0008d737) bg_popup_call2_rect_pane_ParamLimits

0xe0c3,	// (0x0008d737) bg_popup_call2_rect_pane

0xde68,	// (0x0008d4dc) call2_cli_visual_graphic_pane

0xde68,	// (0x0008d4dc) call2_cli_visual_text_pane

0x8ac1,	// (0x00088135) smil_status_volume_pane_g3

0x0002,

0xe22f,	// (0x0008d8a3) call2_cli_visual_graphic_pane_g1

0xe22f,	// (0x0008d8a3) call2_cli_visual_graphic_pane_g2

0xe22f,	// (0x0008d8a3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0008ebfa) call2_cli_visual_graphic_pane_g

0x1173,	// (0x000807e7) bg_popup_call2_rect_pane_g1

0xe2cd,	// (0x0008d941) bg_popup_call2_rect_pane_g2

0x117b,	// (0x000807ef) bg_popup_call2_rect_pane_g3

0x1183,	// (0x000807f7) bg_popup_call2_rect_pane_g4

0x118b,	// (0x000807ff) bg_popup_call2_rect_pane_g5

0x1193,	// (0x00080807) bg_popup_call2_rect_pane_g6

0x119b,	// (0x0008080f) bg_popup_call2_rect_pane_g7

0x11a3,	// (0x00080817) bg_popup_call2_rect_pane_g8

0x11ab,	// (0x0008081f) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0008ec01) bg_popup_call2_rect_pane_g

0x11b3,	// (0x00080827) bg_popup_call2_bubble_pane_g1

0x11bb,	// (0x0008082f) bg_popup_call2_bubble_pane_g2

0x11c3,	// (0x00080837) bg_popup_call2_bubble_pane_g3

0x11cb,	// (0x0008083f) bg_popup_call2_bubble_pane_g4

0x11d3,	// (0x00080847) bg_popup_call2_bubble_pane_g5

0x11db,	// (0x0008084f) bg_popup_call2_bubble_pane_g6

0x11e3,	// (0x00080857) bg_popup_call2_bubble_pane_g7

0x11eb,	// (0x0008085f) bg_popup_call2_bubble_pane_g8

0x11f3,	// (0x00080867) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0008ec14) bg_popup_call2_bubble_pane_g

0x5f4f,	// (0x000855c3) aid_cale_week_size_cell_pane

0x6443,	// (0x00085ab7) aid_cams_cif_uncrop_pane_ParamLimits

0x6443,	// (0x00085ab7) aid_cams_cif_uncrop_pane

0x65a6,	// (0x00085c1a) aid_cams_size_cell_ParamLimits

0x65a6,	// (0x00085c1a) aid_cams_size_cell

0x65b2,	// (0x00085c26) grid_cams_pane_ParamLimits

0x65c0,	// (0x00085c34) linegrid_cams_pane_ParamLimits

0x66e7,	// (0x00085d5b) call_video_pane_t1

0x6708,	// (0x00085d7c) call_video_pane_t2

0x0001,

0xf28d,	// (0x0008e901) call_video_pane_t

0x6c88,	// (0x000862fc) aid_cale_month_size_cell_pane_ParamLimits

0x6c88,	// (0x000862fc) aid_cale_month_size_cell_pane

0xf62a,	// (0x0008ec9e) smil_status_volume_pane_g

0x8ace,	// (0x00088142) volume_smil_pane_ParamLimits

0xf073,	// (0x0008e6e7) aid_popup2_width_pane

0x5e12,	// (0x00085486) cell_qdial_pane_g4_ParamLimits

0x5e12,	// (0x00085486) cell_qdial_pane_g4

0x79d6,	// (0x0008704a) aid_blid_cardinal_pane_ParamLimits

0x79e6,	// (0x0008705a) aid_blid_destination_pane_ParamLimits

0x79e6,	// (0x0008705a) aid_blid_destination_pane

0xe0c3,	// (0x0008d737) bg_popup_call_poc_act_pane_ParamLimits

0xe0c3,	// (0x0008d737) bg_popup_call_poc_act_pane

0xe0c3,	// (0x0008d737) bg_popup_call_poc_inact_pane_ParamLimits

0xe0c3,	// (0x0008d737) bg_popup_call_poc_inact_pane

0x1203,	// (0x00080877) bg_popup_call_poc_act_pane_g1

0x120b,	// (0x0008087f) bg_popup_call_poc_act_pane_g2

0x1213,	// (0x00080887) bg_popup_call_poc_act_pane_g3

0x11cb,	// (0x0008083f) bg_popup_call_poc_act_pane_g4

0x11d3,	// (0x00080847) bg_popup_call_poc_act_pane_g5

0x121b,	// (0x0008088f) bg_popup_call_poc_act_pane_g6

0x11e3,	// (0x00080857) bg_popup_call_poc_act_pane_g7

0x1223,	// (0x00080897) bg_popup_call_poc_act_pane_g8

0xde68,	// (0x0008d4dc) main_usb_pane

0x137c,	// (0x000809f0) popup_cale_lunar_info_window

0x6a27,	// (0x0008609b) im_reading_pane_t1_ParamLimits

0xe494,	// (0x0008db08) list_im_pane_ParamLimits

0xe4a5,	// (0x0008db19) scroll_pane_cp07_ParamLimits

0xde68,	// (0x0008d4dc) grid_highlight_pane_cp012

0xe0c3,	// (0x0008d737) mup_scale_pane_ParamLimits

0xe970,	// (0x0008dfe4) main_usb_pane_g1_ParamLimits

0xe970,	// (0x0008dfe4) main_usb_pane_g1

0x8670,	// (0x00087ce4) main_usb_pane_g2_ParamLimits

0x8670,	// (0x00087ce4) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0008ec3e) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0008ec3e) main_usb_pane_g

0x867c,	// (0x00087cf0) main_usb_pane_t1_ParamLimits

0x867c,	// (0x00087cf0) main_usb_pane_t1

0x868e,	// (0x00087d02) main_usb_pane_t2_ParamLimits

0x868e,	// (0x00087d02) main_usb_pane_t2

0x86a0,	// (0x00087d14) main_usb_pane_t3_ParamLimits

0x86a0,	// (0x00087d14) main_usb_pane_t3

0x86b2,	// (0x00087d26) main_usb_pane_t4_ParamLimits

0x86b2,	// (0x00087d26) main_usb_pane_t4

0x86c4,	// (0x00087d38) main_usb_pane_t5_ParamLimits

0x86c4,	// (0x00087d38) main_usb_pane_t5

0x86d6,	// (0x00087d4a) main_usb_pane_t6_ParamLimits

0x86d6,	// (0x00087d4a) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0008ec43) main_usb_pane_t_ParamLimits

0x797c,	// (0x00086ff0) aid_text_placing

0x7988,	// (0x00086ffc) main_location2_pane_t1_ParamLimits

0x799c,	// (0x00087010) main_location2_pane_t2_ParamLimits

0x79b0,	// (0x00087024) main_location2_pane_t3_ParamLimits

0x79c4,	// (0x00087038) main_location2_pane_t4_ParamLimits

0x79c4,	// (0x00087038) main_location2_pane_t4

0xf3ee,	// (0x0008ea62) main_location2_pane_t_ParamLimits

0xe107,	// (0x0008d77b) find_pinb_pane_g2_ParamLimits

0xe107,	// (0x0008d77b) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0008e7b0) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0008e7b0) find_pinb_pane_g

0xe113,	// (0x0008d787) find_pinb_pane_t1_ParamLimits

0xe125,	// (0x0008d799) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0008e7b5) find_pinb_pane_t_ParamLimits

0xde68,	// (0x0008d4dc) main_call3_pane

0x70a0,	// (0x00086714) cale_month_day_heading_pane_t1_ParamLimits

0x70fe,	// (0x00086772) cale_month_day_heading_pane_t2_ParamLimits

0x7163,	// (0x000867d7) cale_month_day_heading_pane_t3_ParamLimits

0x71c8,	// (0x0008683c) cale_month_day_heading_pane_t4_ParamLimits

0x722d,	// (0x000868a1) cale_month_day_heading_pane_t5_ParamLimits

0x7292,	// (0x00086906) cale_month_day_heading_pane_t6_ParamLimits

0x72ff,	// (0x00086973) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0008e939) cale_month_day_heading_pane_t_ParamLimits

0xe6e5,	// (0x0008dd59) smil_status_volume_pane

0x8224,	// (0x00087898) postcard_address_pane_ParamLimits

0x8224,	// (0x00087898) postcard_address_pane

0x8230,	// (0x000878a4) postcard_message_pane_ParamLimits

0x8230,	// (0x000878a4) postcard_message_pane

0x8638,	// (0x00087cac) call2_cli_visual_pane_t1_ParamLimits

0x8638,	// (0x00087cac) call2_cli_visual_pane_t1

0x8c21,	// (0x00088295) postcard_message_pane_t1_ParamLimits

0x8c21,	// (0x00088295) postcard_message_pane_t1

0x8c0a,	// (0x0008827e) postcard_address_pane_t1_ParamLimits

0x8c0a,	// (0x0008827e) postcard_address_pane_t1

0x8bfb,	// (0x0008826f) popup_call3_audio_in_window_ParamLimits

0x8bfb,	// (0x0008826f) popup_call3_audio_in_window

0x8ae3,	// (0x00088157) bg_popup_call3_in_pane_ParamLimits

0x8ae3,	// (0x00088157) bg_popup_call3_in_pane

0x8b41,	// (0x000881b5) popup_call3_audio_in_window_g1_ParamLimits

0x8b41,	// (0x000881b5) popup_call3_audio_in_window_g1

0x8b59,	// (0x000881cd) popup_call3_audio_in_window_g2_ParamLimits

0x8b59,	// (0x000881cd) popup_call3_audio_in_window_g2

0x8b71,	// (0x000881e5) popup_call3_audio_in_window_g3_ParamLimits

0x8b71,	// (0x000881e5) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0008eca5) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0008eca5) popup_call3_audio_in_window_g

0x8b99,	// (0x0008820d) popup_call3_audio_in_window_t1_ParamLimits

0x8b99,	// (0x0008820d) popup_call3_audio_in_window_t1

0x8bc1,	// (0x00088235) popup_call3_audio_in_window_t2_ParamLimits

0x8bc1,	// (0x00088235) popup_call3_audio_in_window_t2

0x8be9,	// (0x0008825d) popup_call3_audio_in_window_t3_ParamLimits

0x8be9,	// (0x0008825d) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0008ecae) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0008ecae) popup_call3_audio_in_window_t

0xec64,	// (0x0008e2d8) bg_popup_call3_rect_pane

0x1173,	// (0x000807e7) bg_popup_call3_rect_pane_g1

0xe2cd,	// (0x0008d941) bg_popup_call3_rect_pane_g2

0x117b,	// (0x000807ef) bg_popup_call3_rect_pane_g3

0x1183,	// (0x000807f7) bg_popup_call3_rect_pane_g4

0x118b,	// (0x000807ff) bg_popup_call3_rect_pane_g5

0x1193,	// (0x00080807) bg_popup_call3_rect_pane_g6

0x119b,	// (0x0008080f) bg_popup_call3_rect_pane_g7

0x7dee,	// (0x00087462) mup_visualizer_osc_pane

0xed23,	// (0x0008e397) mup_visualizer_spec_pane

0x8b03,	// (0x00088177) call3_video_qcif_pane_ParamLimits

0x8b03,	// (0x00088177) call3_video_qcif_pane

0x8b13,	// (0x00088187) call3_video_qcif_uncrop_pane_ParamLimits

0x8b13,	// (0x00088187) call3_video_qcif_uncrop_pane

0x8b1f,	// (0x00088193) call3_video_subqcif_pane_ParamLimits

0x8b1f,	// (0x00088193) call3_video_subqcif_pane

0x8b31,	// (0x000881a5) call3_video_subqcif_uncrop_pane_ParamLimits

0x8b31,	// (0x000881a5) call3_video_subqcif_uncrop_pane

0x8b89,	// (0x000881fd) popup_call3_audio_in_window_g4_ParamLimits

0x8b89,	// (0x000881fd) popup_call3_audio_in_window_g4

0x8aae,	// (0x00088122) mup_spec_half_pane

0x8ab7,	// (0x0008812b) mup_spec_half_pane_cp

0x1413,	// (0x00080a87) mup_osc_middle_pane

0x141c,	// (0x00080a90) mup_visualizer_osc_pane_g1

0x8a8f,	// (0x00088103) mup_spec_bar_pane_ParamLimits

0x8a8f,	// (0x00088103) mup_spec_bar_pane

0x1400,	// (0x00080a74) mup_spec_bar_pane_g1

0x140a,	// (0x00080a7e) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0008ec99) mup_spec_bar_pane_g

0x5f4f,	// (0x000855c3) aid_cale_week_size_cell_pane_ParamLimits

0x5f62,	// (0x000855d6) bg_cale_heading_pane_ParamLimits

0xe301,	// (0x0008d975) bg_cale_pane_cp01_ParamLimits

0x5f7e,	// (0x000855f2) cale_week_corner_pane_ParamLimits

0x5f8f,	// (0x00085603) cale_week_day_heading_pane_ParamLimits

0x5fab,	// (0x0008561f) cale_week_scroll_pane_g1_ParamLimits

0x5fc4,	// (0x00085638) cale_week_scroll_pane_g2_ParamLimits

0x5fd5,	// (0x00085649) cale_week_scroll_pane_g3_ParamLimits

0x5fe6,	// (0x0008565a) cale_week_scroll_pane_g4_ParamLimits

0x5ff7,	// (0x0008566b) cale_week_scroll_pane_g5_ParamLimits

0x6008,	// (0x0008567c) cale_week_scroll_pane_g6_ParamLimits

0x6019,	// (0x0008568d) cale_week_scroll_pane_g7_ParamLimits

0x602c,	// (0x000856a0) cale_week_scroll_pane_g8_ParamLimits

0x603f,	// (0x000856b3) cale_week_scroll_pane_g9_ParamLimits

0x6050,	// (0x000856c4) cale_week_scroll_pane_g10_ParamLimits

0x6061,	// (0x000856d5) cale_week_scroll_pane_g11_ParamLimits

0x6072,	// (0x000856e6) cale_week_scroll_pane_g12_ParamLimits

0x608b,	// (0x000856ff) cale_week_scroll_pane_g13_ParamLimits

0x60a4,	// (0x00085718) cale_week_scroll_pane_g14_ParamLimits

0x60bd,	// (0x00085731) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0008e841) cale_week_scroll_pane_g_ParamLimits

0x60d6,	// (0x0008574a) cale_week_time_pane_ParamLimits

0x60e9,	// (0x0008575d) grid_cale_week_pane_ParamLimits

0xe31a,	// (0x0008d98e) listscroll_cale_week_pane_t1

0x6106,	// (0x0008577a) scroll_pane_cp08_ParamLimits

0x6cd9,	// (0x0008634d) cale_month_corner_pane_ParamLimits

0xe6bb,	// (0x0008dd2f) cale_month_pane_t1

0x704f,	// (0x000866c3) cale_month_week_pane_ParamLimits

0xe970,	// (0x0008dfe4) popup_call_status_window_g1_ParamLimits

0x77b8,	// (0x00086e2c) popup_call_status_window_g2_ParamLimits

0x77c4,	// (0x00086e38) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0008e9e9) popup_call_status_window_g_ParamLimits

0xe9d7,	// (0x0008e04b) aid_call2_pane

0x8089,	// (0x000876fd) msg_header_pane_g1

0x8224,	// (0x00087898) postcard_address2_pane_ParamLimits

0x8224,	// (0x00087898) postcard_address2_pane

0x8230,	// (0x000878a4) postcard_message2_pane_ParamLimits

0x8230,	// (0x000878a4) postcard_message2_pane

0x8a1d,	// (0x00088091) message2_row_pane_ParamLimits

0x8a1d,	// (0x00088091) message2_row_pane

0x8a3a,	// (0x000880ae) address2_row_pane_ParamLimits

0x8a3a,	// (0x000880ae) address2_row_pane

0x13ce,	// (0x00080a42) postcard_message2_row_pane_g1

0x13d6,	// (0x00080a4a) postcard_message2_row_pane_t1

0x13ce,	// (0x00080a42) address2_row_pane_g1

0x13d6,	// (0x00080a4a) address2_row_pane_t1

0x6322,	// (0x00085996) aid_size_cell_vorec

0xde68,	// (0x0008d4dc) main_rss_pane

0x8a4d,	// (0x000880c1) rss_list_single_pane_ParamLimits

0x8a4d,	// (0x000880c1) rss_list_single_pane

0x13e4,	// (0x00080a58) rss_list_single_pane_t1

0x13f2,	// (0x00080a66) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0008ec94) rss_list_single_pane_t

0xde68,	// (0x0008d4dc) main_camera2_pane

0xde68,	// (0x0008d4dc) main_video2_pane

0x8c85,	// (0x000882f9) cams_zoom_pane_cp2_ParamLimits

0x8c85,	// (0x000882f9) cams_zoom_pane_cp2

0x8c91,	// (0x00088305) image2_vga_pane_ParamLimits

0x8c91,	// (0x00088305) image2_vga_pane

0x8ca0,	// (0x00088314) main_camera2_pane_g1_ParamLimits

0x8ca0,	// (0x00088314) main_camera2_pane_g1

0x8cac,	// (0x00088320) main_camera2_pane_g2_ParamLimits

0x8cac,	// (0x00088320) main_camera2_pane_g2

0x8cb8,	// (0x0008832c) main_camera2_pane_g3_ParamLimits

0x8cb8,	// (0x0008832c) main_camera2_pane_g3

0x8cc4,	// (0x00088338) main_camera2_pane_g4_ParamLimits

0x8cc4,	// (0x00088338) main_camera2_pane_g4

0x8cd0,	// (0x00088344) main_camera2_pane_g5_ParamLimits

0x8cd0,	// (0x00088344) main_camera2_pane_g5

0x8cdc,	// (0x00088350) main_camera2_pane_g6_ParamLimits

0x8cdc,	// (0x00088350) main_camera2_pane_g6

0x8ce8,	// (0x0008835c) main_camera2_pane_g7_ParamLimits

0x8ce8,	// (0x0008835c) main_camera2_pane_g7

0x8cf4,	// (0x00088368) main_camera2_pane_g8_ParamLimits

0x8cf4,	// (0x00088368) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0008ecb5) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0008ecb5) main_camera2_pane_g

0x8d0c,	// (0x00088380) main_camera2_pane_t1_ParamLimits

0x8d0c,	// (0x00088380) main_camera2_pane_t1

0x8d1e,	// (0x00088392) main_camera2_pane_t2_ParamLimits

0x8d1e,	// (0x00088392) main_camera2_pane_t2

0x8d30,	// (0x000883a4) main_camera2_pane_t3_ParamLimits

0x8d30,	// (0x000883a4) main_camera2_pane_t3

0x8d42,	// (0x000883b6) main_camera2_pane_t4_ParamLimits

0x8d42,	// (0x000883b6) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0008ecc8) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0008ecc8) main_camera2_pane_t

0x8da4,	// (0x00088418) cams_zoom_pane_cp4_ParamLimits

0x8da4,	// (0x00088418) cams_zoom_pane_cp4

0x8db4,	// (0x00088428) image2_cif_pane_ParamLimits

0x8db4,	// (0x00088428) image2_cif_pane

0x8dc9,	// (0x0008843d) image2_subqcif_pane_ParamLimits

0x8dc9,	// (0x0008843d) image2_subqcif_pane

0x8dd8,	// (0x0008844c) main_video2_pane_g1_ParamLimits

0x8dd8,	// (0x0008844c) main_video2_pane_g1

0x8dea,	// (0x0008845e) main_video2_pane_g2_ParamLimits

0x8dea,	// (0x0008845e) main_video2_pane_g2

0x8dfa,	// (0x0008846e) main_video2_pane_g3_ParamLimits

0x8dfa,	// (0x0008846e) main_video2_pane_g3

0x8e0a,	// (0x0008847e) main_video2_pane_g4_ParamLimits

0x8e0a,	// (0x0008847e) main_video2_pane_g4

0x8e1a,	// (0x0008848e) main_video2_pane_g5_ParamLimits

0x8e1a,	// (0x0008848e) main_video2_pane_g5

0x8e2a,	// (0x0008849e) main_video2_pane_g6_ParamLimits

0x8e2a,	// (0x0008849e) main_video2_pane_g6

0x0005,

0xf663,	// (0x0008ecd7) main_video2_pane_g_ParamLimits

0xf663,	// (0x0008ecd7) main_video2_pane_g

0x8e3c,	// (0x000884b0) main_video2_pane_t1_ParamLimits

0x8e3c,	// (0x000884b0) main_video2_pane_t1

0x8e56,	// (0x000884ca) main_video2_pane_t2_ParamLimits

0x8e56,	// (0x000884ca) main_video2_pane_t2

0x8e7c,	// (0x000884f0) main_video2_pane_t3_ParamLimits

0x8e7c,	// (0x000884f0) main_video2_pane_t3

0x0002,

0xf670,	// (0x0008ece4) main_video2_pane_t_ParamLimits

0xf670,	// (0x0008ece4) main_video2_pane_t

0x878d,	// (0x00087e01) call_muted_g2

0x0001,

0xf612,	// (0x0008ec86) call_muted_g

0xde68,	// (0x0008d4dc) main_mup2_pane

0x14d3,	// (0x00080b47) main_mup2_pane_g1_ParamLimits

0x14d3,	// (0x00080b47) main_mup2_pane_g1

0x8ea2,	// (0x00088516) main_mup2_pane_g2_ParamLimits

0x8ea2,	// (0x00088516) main_mup2_pane_g2

0x9124,	// (0x00088798) main_mup_pane_g13_cp1

0x912c,	// (0x000887a0) mup_volume_pane_cp1

0x8ec2,	// (0x00088536) main_mup2_pane_g4_ParamLimits

0x8ec2,	// (0x00088536) main_mup2_pane_g4

0x8ed7,	// (0x0008854b) main_mup2_pane_g5_ParamLimits

0x8ed7,	// (0x0008854b) main_mup2_pane_g5

0x8eec,	// (0x00088560) main_mup2_pane_g6_ParamLimits

0x8eec,	// (0x00088560) main_mup2_pane_g6

0x8f01,	// (0x00088575) main_mup2_pane_g7_ParamLimits

0x8f01,	// (0x00088575) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0008eceb) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0008eceb) main_mup2_pane_g

0x8f1d,	// (0x00088591) main_mup2_pane_t1_ParamLimits

0x8f1d,	// (0x00088591) main_mup2_pane_t1

0x8f34,	// (0x000885a8) main_mup2_pane_t2_ParamLimits

0x8f34,	// (0x000885a8) main_mup2_pane_t2

0x8f4b,	// (0x000885bf) main_mup2_pane_t3_ParamLimits

0x8f4b,	// (0x000885bf) main_mup2_pane_t3

0x8f62,	// (0x000885d6) main_mup2_pane_t4_ParamLimits

0x8f62,	// (0x000885d6) main_mup2_pane_t4

0x8f7c,	// (0x000885f0) main_mup2_pane_t5_ParamLimits

0x8f7c,	// (0x000885f0) main_mup2_pane_t5

0x8f96,	// (0x0008860a) main_mup2_pane_t6_ParamLimits

0x8f96,	// (0x0008860a) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0008ecfa) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0008ecfa) main_mup2_pane_t

0x8fce,	// (0x00088642) mup2_visualizer_pane_ParamLimits

0x8fce,	// (0x00088642) mup2_visualizer_pane

0x9004,	// (0x00088678) mup_progress_pane_cp_ParamLimits

0x9004,	// (0x00088678) mup_progress_pane_cp

0x910f,	// (0x00088783) mup_volume_pane_cp_ParamLimits

0x910f,	// (0x00088783) mup_volume_pane_cp

0x901b,	// (0x0008868f) mup2_visualizer_pane_g1_ParamLimits

0x901b,	// (0x0008868f) mup2_visualizer_pane_g1

0x14a5,	// (0x00080b19) mup2_visualizer_pane_g2_ParamLimits

0x14a5,	// (0x00080b19) mup2_visualizer_pane_g2

0x9030,	// (0x000886a4) mup2_visualizer_pane_g3_ParamLimits

0x9030,	// (0x000886a4) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0008ed07) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0008ed07) mup2_visualizer_pane_g

0xef4a,	// (0x0008e5be) aid_size_cell_fmradio

0x88a3,	// (0x00087f17) aid_height_parent_landcape

0xe523,	// (0x0008db97) wml_content_pane_cp

0xe52b,	// (0x0008db9f) wml_tabs_pane

0xe534,	// (0x0008dba8) popup_wml_miniature_window

0xe53c,	// (0x0008dbb0) scroll_pane_cp021

0xe550,	// (0x0008dbc4) wml_content_pane_comp8

0xde68,	// (0x0008d4dc) bg_popup_sub_pane_cp05

0x14c3,	// (0x00080b37) popup_wml_miniature_window_g1

0x14cb,	// (0x00080b3f) wml_miniature_view_pane

0x903e,	// (0x000886b2) aid_size_wml_view

0x9046,	// (0x000886ba) wml_miniature_view_pane_g1

0x904f,	// (0x000886c3) wml_miniature_view_pane_g2

0x9058,	// (0x000886cc) wml_miniature_view_pane_g3

0x9060,	// (0x000886d4) wml_miniature_view_pane_g4

0x9068,	// (0x000886dc) wml_miniature_view_pane_g5

0x9070,	// (0x000886e4) wml_miniature_view_pane_g6

0x9078,	// (0x000886ec) wml_miniature_view_pane_g7

0x9080,	// (0x000886f4) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0008ed0e) wml_miniature_view_pane_g

0x14d3,	// (0x00080b47) background_graphic_ParamLimits

0x14d3,	// (0x00080b47) background_graphic

0x14df,	// (0x00080b53) wml_tabs_2_pane

0x14e8,	// (0x00080b5c) wml_tabs_3_pane_ParamLimits

0x14e8,	// (0x00080b5c) wml_tabs_3_pane

0x14fa,	// (0x00080b6e) wml_tabs_4_pane_ParamLimits

0x14fa,	// (0x00080b6e) wml_tabs_4_pane

0x1510,	// (0x00080b84) wml_tabs_5_pane_ParamLimits

0x1510,	// (0x00080b84) wml_tabs_5_pane

0x152a,	// (0x00080b9e) wml_tabs_pane_g2_ParamLimits

0x152a,	// (0x00080b9e) wml_tabs_pane_g2

0x153e,	// (0x00080bb2) wml_tabs_pane_g3_ParamLimits

0x153e,	// (0x00080bb2) wml_tabs_pane_g3

0x9088,	// (0x000886fc) wml_tabs_2_active_pane_ParamLimits

0x9088,	// (0x000886fc) wml_tabs_2_active_pane

0x9098,	// (0x0008870c) wml_tabs_2_passive_pane_ParamLimits

0x9098,	// (0x0008870c) wml_tabs_2_passive_pane

0x90a8,	// (0x0008871c) wml_tabs_3_active_pane_cp_ParamLimits

0x90a8,	// (0x0008871c) wml_tabs_3_active_pane_cp

0x90b9,	// (0x0008872d) wml_tabs_3_passive_pane_ParamLimits

0x90b9,	// (0x0008872d) wml_tabs_3_passive_pane

0x90ca,	// (0x0008873e) wml_tabs_3_passive_pane_cp_ParamLimits

0x90ca,	// (0x0008873e) wml_tabs_3_passive_pane_cp

0x90db,	// (0x0008874f) tabs_4_active_pane

0x90e3,	// (0x00088757) tabs_4_passive_pane

0x90eb,	// (0x0008875f) tabs_4_passive_pane_cp

0x90f3,	// (0x00088767) tabs_4_passive_pane_cp2

0x11fb,	// (0x0008086f) aid_height_text

0x7db7,	// (0x0008742b) mup_volume_cont_pane_ParamLimits

0x7db7,	// (0x0008742b) mup_volume_cont_pane

0x5a73,	// (0x000850e7) aid_size_cell_pinb

0xe0f3,	// (0x0008d767) aid_size_list_pinb

0x8fed,	// (0x00088661) mup2_volume_cont_pane_ParamLimits

0x8fed,	// (0x00088661) mup2_volume_cont_pane

0x90fb,	// (0x0008876f) mup2_volume_cont_pane_g1_ParamLimits

0x90fb,	// (0x0008876f) mup2_volume_cont_pane_g1

0x5700,	// (0x00084d74) aid_size_cell_touch_ParamLimits

0x5700,	// (0x00084d74) aid_size_cell_touch

0x5953,	// (0x00084fc7) touch_pane_ParamLimits

0x5953,	// (0x00084fc7) touch_pane

0xf061,	// (0x0008e6d5) main_rss2_pane

0x155b,	// (0x00080bcf) listscroll_rss2_pane

0x1564,	// (0x00080bd8) rss2_navigation_pane

0x156c,	// (0x00080be0) list_rss2_pane

0xeb17,	// (0x0008e18b) scroll_pane_cp22

0x1574,	// (0x00080be8) rss2_navigation_pane_g1

0x157d,	// (0x00080bf1) rss2_navigation_pane_g2

0x1585,	// (0x00080bf9) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0008ed1f) rss2_navigation_pane_g

0x158d,	// (0x00080c01) rss2_navigation_pane_t1

0x9134,	// (0x000887a8) rss2_list_single_pane_ParamLimits

0x9134,	// (0x000887a8) rss2_list_single_pane

0x159b,	// (0x00080c0f) rss2_list_single_pane_t2

0x15a9,	// (0x00080c1d) rss2_list_single_pane_t3_ParamLimits

0x15a9,	// (0x00080c1d) rss2_list_single_pane_t3

0x15c6,	// (0x00080c3a) rss2_list_single_pane_t4

0x750f,	// (0x00086b83) smil_status_pane_g1

0xf0d9,	// (0x0008e74d) main_image2_pane_ParamLimits

0xf0d9,	// (0x0008e74d) main_image2_pane

0x8d00,	// (0x00088374) main_camera2_pane_g9_ParamLimits

0x8d00,	// (0x00088374) main_camera2_pane_g9

0x8d54,	// (0x000883c8) main_camera2_pane_t5_ParamLimits

0x8d54,	// (0x000883c8) main_camera2_pane_t5

0x8d66,	// (0x000883da) main_camera2_pane_t6_ParamLimits

0x8d66,	// (0x000883da) main_camera2_pane_t6

0x9170,	// (0x000887e4) main_image2_pane_g1_ParamLimits

0x9170,	// (0x000887e4) main_image2_pane_g1

0x8405,	// (0x00087a79) smil2_video_pane_ParamLimits

0x8405,	// (0x00087a79) smil2_video_pane

0xf08f,	// (0x0008e703) aid_zoom_text_primary_cp

0xf0cf,	// (0x0008e743) popup_preview_fixed_window

0xe48c,	// (0x0008db00) im_reading_pane_g1

0x8c4a,	// (0x000882be) cams2_bc_adjust_pane_cp_ParamLimits

0x8c4a,	// (0x000882be) cams2_bc_adjust_pane_cp

0x8d96,	// (0x0008840a) cams2_bc_adjust_pane_ParamLimits

0x8d96,	// (0x0008840a) cams2_bc_adjust_pane

0x2919,	// (0x00081f8d) cams2_bc_adjust_pane_g1

0x917c,	// (0x000887f0) cams2_slider_pane

0x9185,	// (0x000887f9) cams2_slider_pane_g1

0x918e,	// (0x00088802) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0008ed26) cams2_slider_pane_g

0x5b52,	// (0x000851c6) calc_display_pane_ParamLimits

0x5b70,	// (0x000851e4) calc_paper_pane_ParamLimits

0x5b8c,	// (0x00085200) grid_calc_pane_ParamLimits

0x7822,	// (0x00086e96) popup_clock_digital_window_t1_ParamLimits

0xeee7,	// (0x0008e55b) main_image_pane_t1

0x5b38,	// (0x000851ac) aid_size_cell_calc_ParamLimits

0x5b38,	// (0x000851ac) aid_size_cell_calc

0x88d5,	// (0x00087f49) popup_blid_sat_info2_window_ParamLimits

0x88d5,	// (0x00087f49) popup_blid_sat_info2_window

0x15dc,	// (0x00080c50) aid_size_cell_blid

0x15e4,	// (0x00080c58) bg_popup_window_pane_cp07

0x1607,	// (0x00080c7b) grid_popup_blid_pane

0x1611,	// (0x00080c85) heading_pane_cp05_ParamLimits

0x1611,	// (0x00080c85) heading_pane_cp05

0x16db,	// (0x00080d4f) cell_popup_blid_pane_ParamLimits

0x16db,	// (0x00080d4f) cell_popup_blid_pane

0x1701,	// (0x00080d75) cell_popup_blid_pane_g1

0x1709,	// (0x00080d7d) cell_popup_blid_pane_t1

0x8fb3,	// (0x00088627) mup2_indicator_pane_ParamLimits

0x8fb3,	// (0x00088627) mup2_indicator_pane

0xec64,	// (0x0008e2d8) mup2_visualizer_osc_pane

0x14b1,	// (0x00080b25) mup2_visualizer_spec_pane_ParamLimits

0x14b1,	// (0x00080b25) mup2_visualizer_spec_pane

0x91a8,	// (0x0008881c) mup2_spec_half_pane

0x91b1,	// (0x00088825) mup2_spec_half_pane_cp

0x91bb,	// (0x0008882f) mup2_spec_bar_pane_ParamLimits

0x91bb,	// (0x0008882f) mup2_spec_bar_pane

0x1400,	// (0x00080a74) mup2_spec_bar_pane_g1

0x140a,	// (0x00080a7e) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0008ec99) mup2_spec_bar_pane_g

0x91da,	// (0x0008884e) mup2_osc_middle_pane

0x141c,	// (0x00080a90) mup2_visualizer_osc_pane_g1

0xda77,	// (0x0008d0eb) popup_number_entry_window_t1_ParamLimits

0xda8a,	// (0x0008d0fe) popup_number_entry_window_t2_ParamLimits

0xda9c,	// (0x0008d110) popup_number_entry_window_t3_ParamLimits

0x59aa,	// (0x0008501e) popup_number_entry_window_t5_ParamLimits

0x59aa,	// (0x0008501e) popup_number_entry_window_t5

0xf0e7,	// (0x0008e75b) popup_number_entry_window_t_ParamLimits

0xdaae,	// (0x0008d122) text_title_cp2_ParamLimits

0x80ec,	// (0x00087760) aid_hotspot_pointer_text2_pane

0x8186,	// (0x000877fa) main_viewer_pane_g9_ParamLimits

0x8186,	// (0x000877fa) main_viewer_pane_g9

0xe6bb,	// (0x0008dd2f) cale_month_pane_t1_ParamLimits

0xe6f8,	// (0x0008dd6c) bg_cale_pane_ParamLimits

0xe710,	// (0x0008dd84) list_cale_pane_ParamLimits

0xe31a,	// (0x0008d98e) listscroll_cale_day_pane_t1

0xe721,	// (0x0008dd95) scroll_pane_cp09_ParamLimits

0x7df6,	// (0x0008746a) main_mup_eq_pane_t1_ParamLimits

0x7df6,	// (0x0008746a) main_mup_eq_pane_t1

0x7e10,	// (0x00087484) main_mup_eq_pane_t2_ParamLimits

0x7e10,	// (0x00087484) main_mup_eq_pane_t2

0x7e28,	// (0x0008749c) main_mup_eq_pane_t3_ParamLimits

0x7e28,	// (0x0008749c) main_mup_eq_pane_t3

0x7e40,	// (0x000874b4) main_mup_eq_pane_t4_ParamLimits

0x7e40,	// (0x000874b4) main_mup_eq_pane_t4

0x7e58,	// (0x000874cc) main_mup_eq_pane_t5_ParamLimits

0x7e58,	// (0x000874cc) main_mup_eq_pane_t5

0x7e70,	// (0x000874e4) main_mup_eq_pane_t6_ParamLimits

0x7e70,	// (0x000874e4) main_mup_eq_pane_t6

0x7e84,	// (0x000874f8) main_mup_eq_pane_t7_ParamLimits

0x7e84,	// (0x000874f8) main_mup_eq_pane_t7

0x7e98,	// (0x0008750c) main_mup_eq_pane_t8_ParamLimits

0x7e98,	// (0x0008750c) main_mup_eq_pane_t8

0x7eae,	// (0x00087522) main_mup_eq_pane_t9_ParamLimits

0x7eae,	// (0x00087522) main_mup_eq_pane_t9

0x7ec6,	// (0x0008753a) main_mup_eq_pane_t10_ParamLimits

0x7ec6,	// (0x0008753a) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0008eae8) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0008eae8) main_mup_eq_pane_t

0x7f83,	// (0x000875f7) mup_equalizer_pane_cp5_ParamLimits

0x7f99,	// (0x0008760d) mup_equalizer_pane_cp6_ParamLimits

0x7fb1,	// (0x00087625) mup_equalizer_pane_cp7_ParamLimits

0xf061,	// (0x0008e6d5) main_gallery_pane

0x1425,	// (0x00080a99) smil2_volume_pane

0x1440,	// (0x00080ab4) smil_status_volume_pane_g1_ParamLimits

0x142d,	// (0x00080aa1) smil_status_volume_pane_g2_ParamLimits

0x8ac1,	// (0x00088135) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0008ec9e) smil_status_volume_pane_g_ParamLimits

0x15e4,	// (0x00080c58) bg_popup_window_pane_cp07_ParamLimits

0x15f2,	// (0x00080c66) blid_firmament_pane

0x91e3,	// (0x00088857) aid_size_cell_gallery_ParamLimits

0x91e3,	// (0x00088857) aid_size_cell_gallery

0x91f1,	// (0x00088865) grid_gallery_pane_ParamLimits

0x91f1,	// (0x00088865) grid_gallery_pane

0x9201,	// (0x00088875) cell_gallery_pane_ParamLimits

0x9201,	// (0x00088875) cell_gallery_pane

0x1717,	// (0x00080d8b) bg_cell_gallery_focus_pane_ParamLimits

0x1717,	// (0x00080d8b) bg_cell_gallery_focus_pane

0x1729,	// (0x00080d9d) cell_gallery_pane_g1_ParamLimits

0x1729,	// (0x00080d9d) cell_gallery_pane_g1

0x924f,	// (0x000888c3) cell_gallery_pane_g2_ParamLimits

0x924f,	// (0x000888c3) cell_gallery_pane_g2

0x925c,	// (0x000888d0) cell_gallery_pane_g3_ParamLimits

0x925c,	// (0x000888d0) cell_gallery_pane_g3

0x1735,	// (0x00080da9) cell_gallery_pane_g4_ParamLimits

0x1735,	// (0x00080da9) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0008ed4c) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0008ed4c) cell_gallery_pane_g

0x1741,	// (0x00080db5) bg_cell_gallery_focus_pane_g1

0x1749,	// (0x00080dbd) bg_cell_gallery_focus_pane_g2

0x1751,	// (0x00080dc5) bg_cell_gallery_focus_pane_g3

0x1759,	// (0x00080dcd) bg_cell_gallery_focus_pane_g4

0x1761,	// (0x00080dd5) bg_cell_gallery_focus_pane_g5

0x1769,	// (0x00080ddd) bg_cell_gallery_focus_pane_g6

0x1771,	// (0x00080de5) bg_cell_gallery_focus_pane_g7

0x1779,	// (0x00080ded) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0008ed55) bg_cell_gallery_focus_pane_g

0x1781,	// (0x00080df5) aid_firma_cardinal

0x1795,	// (0x00080e09) blid_firmament_pane_t1

0x17ac,	// (0x00080e20) blid_firmament_pane_t2

0x17c3,	// (0x00080e37) blid_firmament_pane_t3

0x17da,	// (0x00080e4e) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0008ed66) blid_firmament_pane_t

0x17f1,	// (0x00080e65) blid_sat_info_pane

0x1801,	// (0x00080e75) blid_sat_info_pane_g1

0x1801,	// (0x00080e75) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0008ed6f) blid_sat_info_pane_g

0x180b,	// (0x00080e7f) blid_sat_info_pane_t1

0x1819,	// (0x00080e8d) smil2_volume_content_pane

0x1822,	// (0x00080e96) smil2_volume_pane_g1

0x182a,	// (0x00080e9e) smil2_volume_content_pane_g1

0x1833,	// (0x00080ea7) smil2_volume_content_pane_g2

0x183c,	// (0x00080eb0) smil2_volume_content_pane_g3

0x1845,	// (0x00080eb9) smil2_volume_content_pane_g4

0x184e,	// (0x00080ec2) smil2_volume_content_pane_g5

0x1857,	// (0x00080ecb) smil2_volume_content_pane_g6

0x1860,	// (0x00080ed4) smil2_volume_content_pane_g7

0x1869,	// (0x00080edd) smil2_volume_content_pane_g8

0x1872,	// (0x00080ee6) smil2_volume_content_pane_g9

0x187b,	// (0x00080eef) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0008ed74) smil2_volume_content_pane_g

0x6170,	// (0x000857e4) cale_week_day_heading_pane_t1_ParamLimits

0x6184,	// (0x000857f8) cale_week_day_heading_pane_t2_ParamLimits

0x6198,	// (0x0008580c) cale_week_day_heading_pane_t3_ParamLimits

0x61ac,	// (0x00085820) cale_week_day_heading_pane_t4_ParamLimits

0x61c0,	// (0x00085834) cale_week_day_heading_pane_t5_ParamLimits

0x61d4,	// (0x00085848) cale_week_day_heading_pane_t6_ParamLimits

0x61e8,	// (0x0008585c) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0008e860) cale_week_day_heading_pane_t_ParamLimits

0xe32c,	// (0x0008d9a0) bg_cale_side_pane_ParamLimits

0x61fc,	// (0x00085870) cale_week_time_pane_t1_ParamLimits

0x6214,	// (0x00085888) cale_week_time_pane_t2_ParamLimits

0x622c,	// (0x000858a0) cale_week_time_pane_t3_ParamLimits

0x6244,	// (0x000858b8) cale_week_time_pane_t4_ParamLimits

0x625c,	// (0x000858d0) cale_week_time_pane_t5_ParamLimits

0x6274,	// (0x000858e8) cale_week_time_pane_t6_ParamLimits

0x6294,	// (0x00085908) cale_week_time_pane_t7_ParamLimits

0x62b4,	// (0x00085928) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0008e86f) cale_week_time_pane_t_ParamLimits

0x62d4,	// (0x00085948) cell_cale_week_pane_g2_ParamLimits

0xe32c,	// (0x0008d9a0) bg_cale_side_pane_cp01_ParamLimits

0x7374,	// (0x000869e8) cale_month_week_pane_t1_ParamLimits

0x738b,	// (0x000869ff) cale_month_week_pane_t2_ParamLimits

0x73a2,	// (0x00086a16) cale_month_week_pane_t3_ParamLimits

0x73b9,	// (0x00086a2d) cale_month_week_pane_t4_ParamLimits

0x73d0,	// (0x00086a44) cale_month_week_pane_t5_ParamLimits

0x73ef,	// (0x00086a63) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0008e948) cale_month_week_pane_t_ParamLimits

0x74dc,	// (0x00086b50) cell_cale_month_pane_g1_ParamLimits

0xf061,	// (0x0008e6d5) main_cale_event_viewer_pane

0xf061,	// (0x0008e6d5) listscroll_cale_event_viewer_pane

0x1884,	// (0x00080ef8) list_cale_ev_pane

0x188c,	// (0x00080f00) scroll_pane_cp023

0x1898,	// (0x00080f0c) field_cale_ev_pane_ParamLimits

0x1898,	// (0x00080f0c) field_cale_ev_pane

0x18b2,	// (0x00080f26) field_cale_ev_content_pane_ParamLimits

0x18b2,	// (0x00080f26) field_cale_ev_content_pane

0x18be,	// (0x00080f32) field_cale_ev_pane_g1_ParamLimits

0x18be,	// (0x00080f32) field_cale_ev_pane_g1

0x18ca,	// (0x00080f3e) field_cale_ev_pane_g2_ParamLimits

0x18ca,	// (0x00080f3e) field_cale_ev_pane_g2

0x18e2,	// (0x00080f56) field_cale_ev_pane_g3_ParamLimits

0x18e2,	// (0x00080f56) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0008ed89) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0008ed89) field_cale_ev_pane_g

0x18fa,	// (0x00080f6e) field_cale_ev_pane_t1_ParamLimits

0x18fa,	// (0x00080f6e) field_cale_ev_pane_t1

0x1911,	// (0x00080f85) field_cale_ev_content_pane_t1_ParamLimits

0x1911,	// (0x00080f85) field_cale_ev_content_pane_t1

0xedcd,	// (0x0008e441) bg_button_pane_cp01

0xe1da,	// (0x0008d84e) listscroll_cale_week_pane_ParamLimits

0x5f45,	// (0x000855b9) popup_toolbar_window_cp01

0xe31a,	// (0x0008d98e) listscroll_cale_week_pane_t1_ParamLimits

0xe1da,	// (0x0008d84e) listscroll_cale_day_pane_ParamLimits

0x5f45,	// (0x000855b9) popup_toolbar_window_cp02

0xe31a,	// (0x0008d98e) listscroll_cale_day_pane_t1_ParamLimits

0xe1da,	// (0x0008d84e) main_cale_month_pane_ParamLimits

0x8999,	// (0x0008800d) popup_toolbar_window_cp03_ParamLimits

0x8999,	// (0x0008800d) popup_toolbar_window_cp03

0x8317,	// (0x0008798b) main_image_pane_g2_ParamLimits

0x8317,	// (0x0008798b) main_image_pane_g2

0x8323,	// (0x00087997) main_image_pane_g3_ParamLimits

0x8323,	// (0x00087997) main_image_pane_g3

0x0002,

0xf506,	// (0x0008eb7a) main_image_pane_g_ParamLimits

0xf506,	// (0x0008eb7a) main_image_pane_g

0xeee7,	// (0x0008e55b) main_image_pane_t1_ParamLimits

0x832f,	// (0x000879a3) main_image_pane_t2_ParamLimits

0x832f,	// (0x000879a3) main_image_pane_t2

0x8341,	// (0x000879b5) main_image_pane_t3_ParamLimits

0x8341,	// (0x000879b5) main_image_pane_t3

0x8353,	// (0x000879c7) main_image_pane_t4_ParamLimits

0x8353,	// (0x000879c7) main_image_pane_t4

0x0003,

0xf50d,	// (0x0008eb81) main_image_pane_t_ParamLimits

0xf50d,	// (0x0008eb81) main_image_pane_t

0x8365,	// (0x000879d9) popup_image_details_window_cp01

0x836f,	// (0x000879e3) popup_toobar_trans_pane_cp01_ParamLimits

0x836f,	// (0x000879e3) popup_toobar_trans_pane_cp01

0x891e,	// (0x00087f92) popup_image_details_window_ParamLimits

0x891e,	// (0x00087f92) popup_image_details_window

0x1386,	// (0x000809fa) popup_image_focus_window

0x8c3c,	// (0x000882b0) camera2_autofocus_pane_ParamLimits

0x8c3c,	// (0x000882b0) camera2_autofocus_pane

0xf061,	// (0x0008e6d5) bg_popup_sub_pane_cp06

0x192e,	// (0x00080fa2) popup_image_focus_window_g1

0x1936,	// (0x00080faa) popup_image_focus_window_g2

0x193e,	// (0x00080fb2) popup_image_focus_window_g3

0x1946,	// (0x00080fba) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0008ed90) popup_image_focus_window_g

0x194e,	// (0x00080fc2) popup_image_focus_window_t1

0x195c,	// (0x00080fd0) popup_image_focus_window_t2

0x196c,	// (0x00080fe0) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0008ed99) popup_image_focus_window_t

0x197a,	// (0x00080fee) camera2_autofocus_pane_g1

0xf0d9,	// (0x0008e74d) bg_tb_trans_pane_cp01

0x1988,	// (0x00080ffc) popup_image_details_window_g1

0x199b,	// (0x0008100f) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0008edab) popup_image_details_window_g

0x19c4,	// (0x00081038) popup_image_details_window_t1

0x19d6,	// (0x0008104a) popup_image_details_window_t2

0x19ef,	// (0x00081063) popup_image_details_window_t3

0x1a03,	// (0x00081077) popup_image_details_window_t4

0x1a1e,	// (0x00081092) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0008edb2) popup_image_details_window_t

0xe1c6,	// (0x0008d83a) bg_calc_paper_pane_ParamLimits

0x5c89,	// (0x000852fd) grid_highlight_pane_cp013

0x5c93,	// (0x00085307) list_calc_pane_ParamLimits

0x5ca5,	// (0x00085319) scroll_pane_cp024

0xe1da,	// (0x0008d84e) bg_calc_display_pane_ParamLimits

0x5cad,	// (0x00085321) calc_display_pane_t1_ParamLimits

0x5cc2,	// (0x00085336) calc_display_pane_t2_ParamLimits

0x5cd7,	// (0x0008534b) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0008e7e2) calc_display_pane_t_ParamLimits

0x5dbe,	// (0x00085432) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0008e7ff) cell_calc_pane_g

0x5dc7,	// (0x0008543b) cell_calc_pane_t1

0xe239,	// (0x0008d8ad) grid_highlight_pane_cp02_ParamLimits

0xe24f,	// (0x0008d8c3) toolbar_button_pane_cp01_ParamLimits

0xe24f,	// (0x0008d8c3) toolbar_button_pane_cp01

0xef2c,	// (0x0008e5a0) temp_image_control_pane_ParamLimits

0xef2c,	// (0x0008e5a0) temp_image_control_pane

0xf0d9,	// (0x0008e74d) main_mp3_pane

0x1a38,	// (0x000810ac) temp_image_control_pane_g1_ParamLimits

0x1a38,	// (0x000810ac) temp_image_control_pane_g1

0x1a46,	// (0x000810ba) temp_image_control_pane_g2_ParamLimits

0x1a46,	// (0x000810ba) temp_image_control_pane_g2

0x1a58,	// (0x000810cc) temp_image_control_pane_g3_ParamLimits

0x1a58,	// (0x000810cc) temp_image_control_pane_g3

0x9299,	// (0x0008890d) temp_image_control_pane_g4_ParamLimits

0x9299,	// (0x0008890d) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0008edbd) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0008edbd) temp_image_control_pane_g

0x1a38,	// (0x000810ac) main_mp3_pane_g1

0x92aa,	// (0x0008891e) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0008edc6) main_mp3_pane_g

0x1a9b,	// (0x0008110f) main_mp3_pane_t1

0xe39b,	// (0x0008da0f) main_camera_pane_g8_ParamLimits

0xe39b,	// (0x0008da0f) main_camera_pane_g8

0x655c,	// (0x00085bd0) main_video_pane_g7_ParamLimits

0x655c,	// (0x00085bd0) main_video_pane_g7

0x8d84,	// (0x000883f8) main_camera2_pane_t7_ParamLimits

0x8d84,	// (0x000883f8) main_camera2_pane_t7

0xe4e3,	// (0x0008db57) scroll_pane_cp025_ParamLimits

0xe4e3,	// (0x0008db57) scroll_pane_cp025

0xe4f7,	// (0x0008db6b) scroll_pane_cp026_ParamLimits

0xe4f7,	// (0x0008db6b) scroll_pane_cp026

0xe506,	// (0x0008db7a) wml_content_pane_ParamLimits

0xf061,	// (0x0008e6d5) main_touch_calib_pane

0x934e,	// (0x000889c2) main_touch_calib_pane_g1

0x935a,	// (0x000889ce) main_touch_calib_pane_g2

0x9366,	// (0x000889da) main_touch_calib_pane_g3

0x9372,	// (0x000889e6) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0008ede4) main_touch_calib_pane_g

0x937e,	// (0x000889f2) main_touch_calib_pane_t1

0x9395,	// (0x00088a09) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0008eded) main_touch_calib_pane_t

0xeba5,	// (0x0008e219) mup_progress_pane_cp02

0xebc4,	// (0x0008e238) navi_pane_g1

0xec26,	// (0x0008e29a) navi_pane_mp_t3

0xf0d9,	// (0x0008e74d) main_mp3_pane_ParamLimits

0x89d7,	// (0x0008804b) navi_pane_ParamLimits

0x1a38,	// (0x000810ac) main_mp3_pane_g1_ParamLimits

0x92aa,	// (0x0008891e) main_mp3_pane_g2_ParamLimits

0x92b6,	// (0x0008892a) main_mp3_pane_g3_ParamLimits

0x92b6,	// (0x0008892a) main_mp3_pane_g3

0x92c2,	// (0x00088936) main_mp3_pane_g4_ParamLimits

0x92c2,	// (0x00088936) main_mp3_pane_g4

0x1a68,	// (0x000810dc) main_mp3_pane_g5_ParamLimits

0x1a68,	// (0x000810dc) main_mp3_pane_g5

0x1a76,	// (0x000810ea) main_mp3_pane_g6_ParamLimits

0x1a76,	// (0x000810ea) main_mp3_pane_g6

0x1a83,	// (0x000810f7) main_mp3_pane_g7_ParamLimits

0x1a83,	// (0x000810f7) main_mp3_pane_g7

0x1a8f,	// (0x00081103) main_mp3_pane_g8_ParamLimits

0x1a8f,	// (0x00081103) main_mp3_pane_g8

0xf752,	// (0x0008edc6) main_mp3_pane_g_ParamLimits

0x92ce,	// (0x00088942) main_mp3_pane_t2

0x92de,	// (0x00088952) main_mp3_pane_t3

0x1aa9,	// (0x0008111d) main_mp3_pane_t4

0x1ab7,	// (0x0008112b) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0008edd7) main_mp3_pane_t

0x1ac5,	// (0x00081139) mup_progress_pane_cp01

0xf08f,	// (0x0008e703) aid_zoom_text_secondary2

0x1884,	// (0x00080ef8) list_cale_ev2_pane

0x188c,	// (0x00080f00) scroll_pane_cp023_ParamLimits

0x93e8,	// (0x00088a5c) field_cale_ev2_pane_ParamLimits

0x93e8,	// (0x00088a5c) field_cale_ev2_pane

0x941c,	// (0x00088a90) field_cale_ev2_pane_g1_ParamLimits

0x941c,	// (0x00088a90) field_cale_ev2_pane_g1

0x9428,	// (0x00088a9c) field_cale_ev2_pane_g2_ParamLimits

0x9428,	// (0x00088a9c) field_cale_ev2_pane_g2

0x9440,	// (0x00088ab4) field_cale_ev2_pane_g3_ParamLimits

0x9440,	// (0x00088ab4) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0008edf8) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0008edf8) field_cale_ev2_pane_g

0x1acd,	// (0x00081141) field_cale_ev2_pane_t1_ParamLimits

0x1acd,	// (0x00081141) field_cale_ev2_pane_t1

0x1ae4,	// (0x00081158) field_cale_ev2_pane_t2_ParamLimits

0x1ae4,	// (0x00081158) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0008ee01) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0008ee01) field_cale_ev2_pane_t

0x81ee,	// (0x00087862) main_postcard_pane_g5_ParamLimits

0x81ee,	// (0x00087862) main_postcard_pane_g5

0x81fc,	// (0x00087870) main_postcard_pane_g6_ParamLimits

0x81fc,	// (0x00087870) main_postcard_pane_g6

0x639c,	// (0x00085a10) camera2_autofocus_pane_cp_ParamLimits

0x639c,	// (0x00085a10) camera2_autofocus_pane_cp

0xf0d9,	// (0x0008e74d) main_mup3_pane

0x9478,	// (0x00088aec) main_mup3_pane_g1_ParamLimits

0x9478,	// (0x00088aec) main_mup3_pane_g1

0x9499,	// (0x00088b0d) main_mup3_pane_g2_ParamLimits

0x9499,	// (0x00088b0d) main_mup3_pane_g2

0x9518,	// (0x00088b8c) main_mup3_pane_g3_ParamLimits

0x9518,	// (0x00088b8c) main_mup3_pane_g3

0x955b,	// (0x00088bcf) main_mup3_pane_g4_ParamLimits

0x955b,	// (0x00088bcf) main_mup3_pane_g4

0x959e,	// (0x00088c12) main_mup3_pane_g5_ParamLimits

0x959e,	// (0x00088c12) main_mup3_pane_g5

0x95e3,	// (0x00088c57) main_mup3_pane_g6_ParamLimits

0x95e3,	// (0x00088c57) main_mup3_pane_g6

0x1af9,	// (0x0008116d) main_mup3_pane_g7_ParamLimits

0x1af9,	// (0x0008116d) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0008ee11) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0008ee11) main_mup3_pane_g

0x9659,	// (0x00088ccd) main_mup3_pane_t1_ParamLimits

0x9659,	// (0x00088ccd) main_mup3_pane_t1

0x96c8,	// (0x00088d3c) main_mup3_pane_t2_ParamLimits

0x96c8,	// (0x00088d3c) main_mup3_pane_t2

0x9791,	// (0x00088e05) main_mup3_pane_t4_ParamLimits

0x9791,	// (0x00088e05) main_mup3_pane_t4

0x97e5,	// (0x00088e59) main_mup3_pane_t5_ParamLimits

0x97e5,	// (0x00088e59) main_mup3_pane_t5

0x9895,	// (0x00088f09) main_mup3_pane_t6_ParamLimits

0x9895,	// (0x00088f09) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0008ee22) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0008ee22) main_mup3_pane_t

0x9941,	// (0x00088fb5) mup3_progress_pane_ParamLimits

0x9941,	// (0x00088fb5) mup3_progress_pane

0x99b5,	// (0x00089029) popup_mup3_control_window_ParamLimits

0x99b5,	// (0x00089029) popup_mup3_control_window

0x1b07,	// (0x0008117b) popup_mup3_text_window

0x99ce,	// (0x00089042) mup3_progress_pane_t1

0x99ed,	// (0x00089061) mup3_progress_pane_t2

0x1b0f,	// (0x00081183) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0008ee2f) mup3_progress_pane_t

0x1b2c,	// (0x000811a0) mup_progress_pane_cp03

0xf061,	// (0x0008e6d5) bg_tb_trans_pane_cp04

0x9a0c,	// (0x00089080) mup3_volume_pane

0x9a14,	// (0x00089088) popup_mup3_control_window_g1

0x9a1d,	// (0x00089091) mup3_volume_pane_g1

0x9a26,	// (0x0008909a) mup3_volume_pane_g2

0x9a2f,	// (0x000890a3) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0008ee36) mup3_volume_pane_g

0xf061,	// (0x0008e6d5) bg_tb_trans_pane_cp03

0x1b3c,	// (0x000811b0) popup_mup3_text_window_g1

0x1b44,	// (0x000811b8) popup_mup3_text_window_t1

0xe222,	// (0x0008d896) list_calc_item_pane_g1_ParamLimits

0x1552,	// (0x00080bc6) mup_volume_pane_cp_g1

0x93ac,	// (0x00088a20) main_touch_calib_pane_t3

0x93c0,	// (0x00088a34) main_touch_calib_pane_t4

0x93d4,	// (0x00088a48) main_touch_calib_pane_t5

0xf06b,	// (0x0008e6df) aid_cell_size_toolbar2

0xf073,	// (0x0008e6e7) aid_popup3_width_pane

0xf07f,	// (0x0008e6f3) aid_zoom_text_msg_primary

0x6386,	// (0x000859fa) vorec_t7

0xe1e6,	// (0x0008d85a) bg_calc_paper_pane_g1_ParamLimits

0xe1f2,	// (0x0008d866) bg_calc_paper_pane_g2_ParamLimits

0xe1fe,	// (0x0008d872) bg_calc_paper_pane_g3_ParamLimits

0xe20a,	// (0x0008d87e) bg_calc_paper_pane_g4_ParamLimits

0xe216,	// (0x0008d88a) bg_calc_paper_pane_g5_ParamLimits

0x5d16,	// (0x0008538a) bg_calc_paper_pane_g6_ParamLimits

0x5d27,	// (0x0008539b) bg_calc_paper_pane_g7_ParamLimits

0x5d38,	// (0x000853ac) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0008e7e9) bg_calc_paper_pane_g_ParamLimits

0x5d49,	// (0x000853bd) calc_bg_paper_pane_g9_ParamLimits

0x6485,	// (0x00085af9) image_qvga_pane_ParamLimits

0x6485,	// (0x00085af9) image_qvga_pane

0xe0c3,	// (0x0008d737) bg_popup_sub_pane_cp04_ParamLimits

0xee63,	// (0x0008e4d7) popup_mup_playback_window_g1_ParamLimits

0xee6f,	// (0x0008e4e3) popup_mup_playback_window_t1_ParamLimits

0xee84,	// (0x0008e4f8) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0008eb75) popup_mup_playback_window_t_ParamLimits

0x8eb3,	// (0x00088527) main_mup2_pane_g3_ParamLimits

0x8eb3,	// (0x00088527) main_mup2_pane_g3

0x6795,	// (0x00085e09) popup_toolbar_window_cp04

0x0574,	// (0x0007fbe8) popup_call2_audio_second_window_g3_ParamLimits

0x0574,	// (0x0007fbe8) popup_call2_audio_second_window_g3

0x097e,	// (0x0007fff2) popup_call2_audio_first_window_g4_ParamLimits

0x097e,	// (0x0007fff2) popup_call2_audio_first_window_g4

0x0ffd,	// (0x00080671) popup_call2_audio_in_window_g4_ParamLimits

0x0ffd,	// (0x00080671) popup_call2_audio_in_window_g4

0x830a,	// (0x0008797e) aid_area_sk_bg_cut_ParamLimits

0x830a,	// (0x0008797e) aid_area_sk_bg_cut

0xee99,	// (0x0008e50d) aid_area_sk_bg_cut_2_ParamLimits

0xee99,	// (0x0008e50d) aid_area_sk_bg_cut_2

0x923f,	// (0x000888b3) aid_placing_details_win

0x9247,	// (0x000888bb) aid_placing_details_win_2

0x197a,	// (0x00080fee) camera2_autofocus_pane_g1_ParamLimits

0x5901,	// (0x00084f75) popup_fixed_preview_cale_window_ParamLimits

0x5901,	// (0x00084f75) popup_fixed_preview_cale_window

0xec75,	// (0x0008e2e9) navi_slider_pane_g3

0xec7e,	// (0x0008e2f2) navi_slider_pane_g4

0xec87,	// (0x0008e2fb) navi_slider_pane_g5

0xec75,	// (0x0008e2e9) navi_slider_pane_g6

0x7b8a,	// (0x000871fe) navi_slider_pane_g7

0xed9a,	// (0x0008e40e) mup_scale_pane_g3

0xeda3,	// (0x0008e417) mup_scale_pane_g4

0xedac,	// (0x0008e420) mup_scale_pane_g5

0x7fc9,	// (0x0008763d) mup_scale_pane_g6

0x7fd2,	// (0x00087646) mup_scale_pane_g7

0xec75,	// (0x0008e2e9) cams2_slider_pane_g3

0x15d4,	// (0x00080c48) cams2_slider_pane_g4

0x9197,	// (0x0008880b) cams2_slider_pane_g5

0xec75,	// (0x0008e2e9) cams2_slider_pane_g6

0x919f,	// (0x00088813) cams2_slider_pane_g7

0x1801,	// (0x00080e75) camera2_autofocus_pane_cp_g1

0x1b52,	// (0x000811c6) bg_popup_preview_window_pane_cp02_ParamLimits

0x1b52,	// (0x000811c6) bg_popup_preview_window_pane_cp02

0x1b5e,	// (0x000811d2) list_fp_cale_pane_ParamLimits

0x1b5e,	// (0x000811d2) list_fp_cale_pane

0x1b6a,	// (0x000811de) popup_fixed_preview_cale_window_t1_ParamLimits

0x1b6a,	// (0x000811de) popup_fixed_preview_cale_window_t1

0x9a38,	// (0x000890ac) popup_fixed_preview_cale_window_t2_ParamLimits

0x9a38,	// (0x000890ac) popup_fixed_preview_cale_window_t2

0x9a4d,	// (0x000890c1) popup_fixed_preview_cale_window_t3_ParamLimits

0x9a4d,	// (0x000890c1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0008ee3d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0008ee3d) popup_fixed_preview_cale_window_t

0x9a62,	// (0x000890d6) list_single_fp_cale_pane_ParamLimits

0x9a62,	// (0x000890d6) list_single_fp_cale_pane

0x1b88,	// (0x000811fc) list_single_fp_cale_pane_g1_ParamLimits

0x1b88,	// (0x000811fc) list_single_fp_cale_pane_g1

0x1b94,	// (0x00081208) list_single_fp_cale_pane_g2_ParamLimits

0x1b94,	// (0x00081208) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0008ee44) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0008ee44) list_single_fp_cale_pane_g

0x1bad,	// (0x00081221) list_single_fp_cale_pane_t1_ParamLimits

0x1bad,	// (0x00081221) list_single_fp_cale_pane_t1

0x1bbf,	// (0x00081233) list_single_fp_cale_pane_t2_ParamLimits

0x1bbf,	// (0x00081233) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0008ee4b) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0008ee4b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf061,	// (0x0008e6d5) main_dialer_pane

0x9a77,	// (0x000890eb) aid_cell_size_keypad

0x9a81,	// (0x000890f5) dialer_ne_pane

0x9a8b,	// (0x000890ff) grid_dialer_command_1_pane

0x9a93,	// (0x00089107) grid_dialer_command_2_pane

0x9a9b,	// (0x0008910f) grid_dialer_keypad_pane

0x9aaf,	// (0x00089123) bg_popup_call_pane_cp06_ParamLimits

0x9aaf,	// (0x00089123) bg_popup_call_pane_cp06

0x9abb,	// (0x0008912f) dialer_ne_clear_pane_ParamLimits

0x9abb,	// (0x0008912f) dialer_ne_clear_pane

0x1bf2,	// (0x00081266) dialer_ne_pane_g1

0x1bfa,	// (0x0008126e) dialer_ne_pane_t1_ParamLimits

0x1bfa,	// (0x0008126e) dialer_ne_pane_t1

0x9ac7,	// (0x0008913b) dialer_ne_pane_t2_ParamLimits

0x9ac7,	// (0x0008913b) dialer_ne_pane_t2

0x9ae4,	// (0x00089158) dialer_ne_pane_t3_ParamLimits

0x9ae4,	// (0x00089158) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0008ee50) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0008ee50) dialer_ne_pane_t

0x9b08,	// (0x0008917c) dialer_ne_pane_t3_copy1_ParamLimits

0x9b08,	// (0x0008917c) dialer_ne_pane_t3_copy1

0x9b2c,	// (0x000891a0) cell_dialer_keypad_pane_ParamLimits

0x9b2c,	// (0x000891a0) cell_dialer_keypad_pane

0x9b43,	// (0x000891b7) cell_dialer_command_1_pane_ParamLimits

0x9b43,	// (0x000891b7) cell_dialer_command_1_pane

0x9b59,	// (0x000891cd) cell_dialer_command_2_pane_ParamLimits

0x9b59,	// (0x000891cd) cell_dialer_command_2_pane

0x1c0c,	// (0x00081280) bg_button_pane_cp02_ParamLimits

0x1c0c,	// (0x00081280) bg_button_pane_cp02

0x9b68,	// (0x000891dc) cell_dialer_keypad_pane_g1_ParamLimits

0x9b68,	// (0x000891dc) cell_dialer_keypad_pane_g1

0x1c0c,	// (0x00081280) bg_button_pane_cp03_ParamLimits

0x1c0c,	// (0x00081280) bg_button_pane_cp03

0x9b7d,	// (0x000891f1) cell_dialer_command_1_pane_g1_ParamLimits

0x9b7d,	// (0x000891f1) cell_dialer_command_1_pane_g1

0x1c18,	// (0x0008128c) bg_button_pane_cp04

0x9b91,	// (0x00089205) cell_dialer_command_2_pane_g1

0xec64,	// (0x0008e2d8) bg_button_pane_cp06

0x1c20,	// (0x00081294) dialer_ne_clear_pane_g1

0x7acd,	// (0x00087141) navi_pane_g2

0x7afb,	// (0x0008716f) navi_pane_g3

0x0002,

0xf404,	// (0x0008ea78) navi_pane_g

0x7b26,	// (0x0008719a) navi_pane_mv_g2

0x7b4d,	// (0x000871c1) navi_pane_mv_g5

0x7b55,	// (0x000871c9) navi_pane_mv_t1

0xe1da,	// (0x0008d84e) main_clock2_pane

0x9bc4,	// (0x00089238) main_clock2_list_pane_ParamLimits

0x9bc4,	// (0x00089238) main_clock2_list_pane

0x9bee,	// (0x00089262) main_clock2_pane_t1_ParamLimits

0x9bee,	// (0x00089262) main_clock2_pane_t1

0x9c12,	// (0x00089286) main_clock2_pane_t2_ParamLimits

0x9c12,	// (0x00089286) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0008ee57) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0008ee57) main_clock2_pane_t

0x9c6d,	// (0x000892e1) popup_clock_analogue_window_cp03_ParamLimits

0x9c6d,	// (0x000892e1) popup_clock_analogue_window_cp03

0x9c8d,	// (0x00089301) popup_clock_digital_window_cp02_ParamLimits

0x9c8d,	// (0x00089301) popup_clock_digital_window_cp02

0x9d02,	// (0x00089376) main_clock2_list_single_pane_ParamLimits

0x9d02,	// (0x00089376) main_clock2_list_single_pane

0xec64,	// (0x0008e2d8) list_highlight_pane_cp05

0x1c28,	// (0x0008129c) main_clock2_list_single_pane_t1

0x6795,	// (0x00085e09) popup_toolbar_window_cp04_ParamLimits

0x9269,	// (0x000888dd) camera2_autofocus_pane_g2_ParamLimits

0x9269,	// (0x000888dd) camera2_autofocus_pane_g2

0x9275,	// (0x000888e9) camera2_autofocus_pane_g3_ParamLimits

0x9275,	// (0x000888e9) camera2_autofocus_pane_g3

0x9281,	// (0x000888f5) camera2_autofocus_pane_g4_ParamLimits

0x9281,	// (0x000888f5) camera2_autofocus_pane_g4

0x928d,	// (0x00088901) camera2_autofocus_pane_g5_ParamLimits

0x928d,	// (0x00088901) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0008eda0) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0008eda0) camera2_autofocus_pane_g

0x9458,	// (0x00088acc) camera2_autofocus_pane_cp_g2

0x9460,	// (0x00088ad4) camera2_autofocus_pane_cp_g3

0x9468,	// (0x00088adc) camera2_autofocus_pane_cp_g4

0x9470,	// (0x00088ae4) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0008ee06) camera2_autofocus_pane_cp_g

0x9aa7,	// (0x0008911b) popup_dialer_spcha_window

0xf061,	// (0x0008e6d5) bg_popup_sub_pane_cp07

0x1c36,	// (0x000812aa) list_spcha_pane

0x1c3e,	// (0x000812b2) list_single_spcha_pane_ParamLimits

0x1c3e,	// (0x000812b2) list_single_spcha_pane

0xf061,	// (0x0008e6d5) list_highlight_pane_cp06

0x1c4f,	// (0x000812c3) list_single_spcha_pane_t1

0x0da7,	// (0x0008041b) popup_call2_audio_out_window_g4_ParamLimits

0x0da7,	// (0x0008041b) popup_call2_audio_out_window_g4

0xf061,	// (0x0008e6d5) main_imed2_pane

0x138e,	// (0x00080a02) popup_imed_adjust2_window

0x892c,	// (0x00087fa0) popup_imed_trans_window_ParamLimits

0x892c,	// (0x00087fa0) popup_imed_trans_window

0x163d,	// (0x00080cb1) popup_blid_sat_info2_window_t1

0x164b,	// (0x00080cbf) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0008ed35) popup_blid_sat_info2_window_t

0x9dac,	// (0x00089420) aid_size_cell_colour_35

0x9dc6,	// (0x0008943a) aid_size_cell_colour_112

0x9ddd,	// (0x00089451) aid_size_cell_effect

0xf0d9,	// (0x0008e74d) bg_tb_trans_pane_cp02

0xf055,	// (0x0008e6c9) heading_imed_pane

0x9df7,	// (0x0008946b) listscroll_imed_pane

0x1c5d,	// (0x000812d1) heading_imed_pane_g1

0x1c65,	// (0x000812d9) heading_imed_pane_t1

0x1c73,	// (0x000812e7) grid_imed_colour_35_pane_ParamLimits

0x1c73,	// (0x000812e7) grid_imed_colour_35_pane

0x9e03,	// (0x00089477) grid_imed_effect_pane

0x1c8e,	// (0x00081302) list_imed_aspect_pane

0x9e13,	// (0x00089487) scroll_pane_cp027_ParamLimits

0x9e13,	// (0x00089487) scroll_pane_cp027

0x9e1f,	// (0x00089493) cell_imed_effect_pane_ParamLimits

0x9e1f,	// (0x00089493) cell_imed_effect_pane

0x1c96,	// (0x0008130a) cell_imed_colour_pane_ParamLimits

0x1c96,	// (0x0008130a) cell_imed_colour_pane

0x1cd8,	// (0x0008134c) cell_imed_colour_pane_g1_ParamLimits

0x1cd8,	// (0x0008134c) cell_imed_colour_pane_g1

0x1ce9,	// (0x0008135d) hgihlgiht_grid_pane_cp016_ParamLimits

0x1ce9,	// (0x0008135d) hgihlgiht_grid_pane_cp016

0x9e37,	// (0x000894ab) cell_imed_effect_pane_g1

0x9e3f,	// (0x000894b3) grid_highlight_pane_cp017

0x1cfa,	// (0x0008136e) list_imed_single_pane_ParamLimits

0x1cfa,	// (0x0008136e) list_imed_single_pane

0xf061,	// (0x0008e6d5) list_highlight_pane_cp07

0x1d11,	// (0x00081385) list_imed_aspect_pane_comp1_t1

0x1366,	// (0x000809da) bg_tb_trans_pane_cp05

0x1d33,	// (0x000813a7) popup_imed_adjust2_window_g1

0x1d5a,	// (0x000813ce) popup_imed_adjust2_window_t1

0x1d72,	// (0x000813e6) slider_imed_adjust_pane

0x1d86,	// (0x000813fa) slider_imed_adjust_pane_g1

0x1d96,	// (0x0008140a) slider_imed_adjust_pane_g2

0x1da6,	// (0x0008141a) slider_imed_adjust_pane_g3

0x1db7,	// (0x0008142b) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0008ee74) slider_imed_adjust_pane_g

0x9e48,	// (0x000894bc) aid_size_cell_clipart2

0x9e54,	// (0x000894c8) grid_imed_clipart_pane

0x1dc8,	// (0x0008143c) scroll_pane_cp031

0x9e5e,	// (0x000894d2) cell_imed_clipart_pane_ParamLimits

0x9e5e,	// (0x000894d2) cell_imed_clipart_pane

0x9e85,	// (0x000894f9) cell_imed_clipart_pane_g1

0xf061,	// (0x0008e6d5) grid_highlight_pane_cp014

0x9bd0,	// (0x00089244) main_clock2_pane_g1_ParamLimits

0x9bd0,	// (0x00089244) main_clock2_pane_g1

0x9ca9,	// (0x0008931d) aid_call2_pane_cp10

0x9cbb,	// (0x0008932f) aid_call_pane_cp10

0xeb99,	// (0x0008e20d) popup_clock_analogue_window_cp10_g1

0xeb99,	// (0x0008e20d) popup_clock_analogue_window_cp10_g2

0x9ccd,	// (0x00089341) popup_clock_analogue_window_cp10_g3

0x9ccd,	// (0x00089341) popup_clock_analogue_window_cp10_g4

0xeb99,	// (0x0008e20d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0008ee62) popup_clock_analogue_window_cp10_g

0x9ce3,	// (0x00089357) popup_clock_analogue_window_cp10_t1

0x9d14,	// (0x00089388) clock_digital_number_pane_cp10_ParamLimits

0x9d14,	// (0x00089388) clock_digital_number_pane_cp10

0x9d2c,	// (0x000893a0) clock_digital_number_pane_cp11_ParamLimits

0x9d2c,	// (0x000893a0) clock_digital_number_pane_cp11

0x9d44,	// (0x000893b8) clock_digital_number_pane_cp12_ParamLimits

0x9d44,	// (0x000893b8) clock_digital_number_pane_cp12

0x9d5c,	// (0x000893d0) clock_digital_number_pane_cp13_ParamLimits

0x9d5c,	// (0x000893d0) clock_digital_number_pane_cp13

0x9d74,	// (0x000893e8) clock_digital_separator_pane_cp10_ParamLimits

0x9d74,	// (0x000893e8) clock_digital_separator_pane_cp10

0x9d8c,	// (0x00089400) popup_clock_digital_window_cp02_t1_ParamLimits

0x9d8c,	// (0x00089400) popup_clock_digital_window_cp02_t1

0xe0bb,	// (0x0008d72f) clock_digital_number_pane_cp10_g1

0xe0bb,	// (0x0008d72f) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0008ee7d) clock_digital_number_pane_cp10_g

0xe0bb,	// (0x0008d72f) clock_digital_separator_pane_cp10_g1

0xe0bb,	// (0x0008d72f) clock_digital_separator_pane_g2_cp10

0xec34,	// (0x0008e2a8) navi_pane_vded_g4

0xec3d,	// (0x0008e2b1) navi_pane_vded_g5

0xec46,	// (0x0008e2ba) navi_pane_vded_t1

0xf061,	// (0x0008e6d5) main_vded_pane

0x9e8e,	// (0x00089502) main_vded_pane_g1

0x9e9a,	// (0x0008950e) main_vded_pane_g2

0x9ea4,	// (0x00089518) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0008ee82) main_vded_pane_g

0x9eae,	// (0x00089522) main_vded_pane_t1

0x9ebc,	// (0x00089530) main_vded_pane_t2

0x0001,

0xf815,	// (0x0008ee89) main_vded_pane_t

0x9eca,	// (0x0008953e) vded_slider_pane

0x9ed4,	// (0x00089548) vded_video_pane

0x1dd0,	// (0x00081444) vded_video_pane_g1

0x9ede,	// (0x00089552) vded_video_pane_g2

0x1801,	// (0x00080e75) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0008ee8e) vded_video_pane_g

0x1dda,	// (0x0008144e) vded_slider_pane_g1

0x1552,	// (0x00080bc6) vded_slider_pane_g2

0x1de3,	// (0x00081457) vded_slider_pane_g3

0x1dec,	// (0x00081460) vded_slider_pane_g4

0x1df5,	// (0x00081469) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0008ee95) vded_slider_pane_g

0x99a7,	// (0x0008901b) mup3_rocker_pane_ParamLimits

0x99a7,	// (0x0008901b) mup3_rocker_pane

0x9ee7,	// (0x0008955b) mup3_control_keys_pane_g1

0x9eef,	// (0x00089563) mup3_control_keys_pane_g2

0x9ef7,	// (0x0008956b) mup3_control_keys_pane_g3

0x9eff,	// (0x00089573) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0008eea0) mup3_control_keys_pane_g

0x591f,	// (0x00084f93) popup_toolbar2_fixed_window_cp01_ParamLimits

0x591f,	// (0x00084f93) popup_toolbar2_fixed_window_cp01

0x99c1,	// (0x00089035) popup_toolbar2_fixed_window_cp02_ParamLimits

0x99c1,	// (0x00089035) popup_toolbar2_fixed_window_cp02

0x06e6,	// (0x0007fd5a) popup_call2_audio_second_window_t4_ParamLimits

0x06e6,	// (0x0007fd5a) popup_call2_audio_second_window_t4

0x0c14,	// (0x00080288) popup_call2_audio_first_window_t6_ParamLimits

0x0c14,	// (0x00080288) popup_call2_audio_first_window_t6

0x0eaa,	// (0x0008051e) popup_call2_audio_out_window_t6_ParamLimits

0x0eaa,	// (0x0008051e) popup_call2_audio_out_window_t6

0xf061,	// (0x0008e6d5) main_vitu_pane

0x9f0f,	// (0x00089583) aid_size_cell_itu_ParamLimits

0x9f0f,	// (0x00089583) aid_size_cell_itu

0x222f,	// (0x000818a3) bg_popup_window_pane_cp08_ParamLimits

0x222f,	// (0x000818a3) bg_popup_window_pane_cp08

0x9f1d,	// (0x00089591) field_vitu_entry_pane_ParamLimits

0x9f1d,	// (0x00089591) field_vitu_entry_pane

0x9f2c,	// (0x000895a0) grid_vitu_function_pane_ParamLimits

0x9f2c,	// (0x000895a0) grid_vitu_function_pane

0x9f3c,	// (0x000895b0) grid_vitu_itu_pane_ParamLimits

0x9f3c,	// (0x000895b0) grid_vitu_itu_pane

0x9f4c,	// (0x000895c0) cell_vitu_itu_pane_ParamLimits

0x9f4c,	// (0x000895c0) cell_vitu_itu_pane

0x9f61,	// (0x000895d5) cell_vitu_function_pane_ParamLimits

0x9f61,	// (0x000895d5) cell_vitu_function_pane

0xf0d9,	// (0x0008e74d) bg_popup_sub_pane_cp08_ParamLimits

0xf0d9,	// (0x0008e74d) bg_popup_sub_pane_cp08

0x9f75,	// (0x000895e9) field_vitu_entry_pane_t1_ParamLimits

0x9f75,	// (0x000895e9) field_vitu_entry_pane_t1

0x1e16,	// (0x0008148a) field_vitu_entry_pane_t2_ParamLimits

0x1e16,	// (0x0008148a) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0008eeae) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0008eeae) field_vitu_entry_pane_t

0x1e33,	// (0x000814a7) bg_button_pane_cp05_ParamLimits

0x1e33,	// (0x000814a7) bg_button_pane_cp05

0x9f93,	// (0x00089607) cell_vitu_itu_pane_g1

0x9fab,	// (0x0008961f) cell_vitu_itu_pane_t1_ParamLimits

0x9fab,	// (0x0008961f) cell_vitu_itu_pane_t1

0x9fbd,	// (0x00089631) cell_vitu_itu_pane_t2_ParamLimits

0x9fbd,	// (0x00089631) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0008eeb3) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0008eeb3) cell_vitu_itu_pane_t

0x1e41,	// (0x000814b5) bg_button_pane_cp07

0x9ff2,	// (0x00089666) cell_vitu_function_pane_g1

0x5bb0,	// (0x00085224) main_calc_pane_g1

0x5728,	// (0x00084d9c) aid_visual_content_pane

0xf061,	// (0x0008e6d5) main_vradio_pane

0x9ffb,	// (0x0008966f) main_vradio_pane_g1_ParamLimits

0x9ffb,	// (0x0008966f) main_vradio_pane_g1

0x1e4b,	// (0x000814bf) main_vradio_pane_g2_ParamLimits

0x1e4b,	// (0x000814bf) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0008eeba) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0008eeba) main_vradio_pane_g

0xa00b,	// (0x0008967f) main_vradio_pane_t1_ParamLimits

0xa00b,	// (0x0008967f) main_vradio_pane_t1

0xa01d,	// (0x00089691) main_vradio_pane_t2_ParamLimits

0xa01d,	// (0x00089691) main_vradio_pane_t2

0x1e58,	// (0x000814cc) main_vradio_pane_t3_ParamLimits

0x1e58,	// (0x000814cc) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0008eebf) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0008eebf) main_vradio_pane_t

0xa02f,	// (0x000896a3) vradio_rocker_control_pane_ParamLimits

0xa02f,	// (0x000896a3) vradio_rocker_control_pane

0xa03b,	// (0x000896af) vradio_station_info_pane_ParamLimits

0xa03b,	// (0x000896af) vradio_station_info_pane

0x1e6c,	// (0x000814e0) vradio_frequency_info_pane_ParamLimits

0x1e6c,	// (0x000814e0) vradio_frequency_info_pane

0x1801,	// (0x00080e75) vradio_station_info_pane_g1

0x1e7b,	// (0x000814ef) vradio_station_info_pane_t1_ParamLimits

0x1e7b,	// (0x000814ef) vradio_station_info_pane_t1

0x1e9d,	// (0x00081511) vradio_station_info_pane_t2_ParamLimits

0x1e9d,	// (0x00081511) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0008eec6) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0008eec6) vradio_station_info_pane_t

0x1eaf,	// (0x00081523) vradio_tuning_pane

0x1eb7,	// (0x0008152b) vradio_rocker_control_pane_g1

0x1ebf,	// (0x00081533) vradio_rocker_control_pane_g2

0x1ec7,	// (0x0008153b) vradio_rocker_control_pane_g3

0x1ecf,	// (0x00081543) vradio_rocker_control_pane_g4

0x1ed7,	// (0x0008154b) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0008eecb) vradio_rocker_control_pane_g

0xa04a,	// (0x000896be) vradio_frequency_info_pane_g1

0x1edf,	// (0x00081553) vradio_frequency_info_pane_t1_ParamLimits

0x1edf,	// (0x00081553) vradio_frequency_info_pane_t1

0xa054,	// (0x000896c8) vradio_tuning_pane_g1

0xa05d,	// (0x000896d1) vradio_tuning_pane_t1

0xf097,	// (0x0008e70b) area_side_right_pane_ParamLimits

0xf097,	// (0x0008e70b) area_side_right_pane

0x132d,	// (0x000809a1) status_small_pane_g1

0x1335,	// (0x000809a9) status_small_pane_g2

0x133e,	// (0x000809b2) status_small_pane_g3

0x1347,	// (0x000809bb) status_small_pane_g4

0x0003,

0xf617,	// (0x0008ec8b) status_small_pane_g

0x1350,	// (0x000809c4) status_small_pane_t1

0xf061,	// (0x0008e6d5) main_video3_pane

0x1ef3,	// (0x00081567) cams_zoom_vslider_pane

0x1efb,	// (0x0008156f) image3_wide_pane_ParamLimits

0x1efb,	// (0x0008156f) image3_wide_pane

0x1f15,	// (0x00081589) image3_wide_small_pane

0x1f21,	// (0x00081595) main_video3_pane_g1_ParamLimits

0x1f21,	// (0x00081595) main_video3_pane_g1

0x1f3d,	// (0x000815b1) main_video3_pane_g2_ParamLimits

0x1f3d,	// (0x000815b1) main_video3_pane_g2

0x0001,

0xf862,	// (0x0008eed6) main_video3_pane_g_ParamLimits

0xf862,	// (0x0008eed6) main_video3_pane_g

0x1f59,	// (0x000815cd) main_video3_pane_t1_ParamLimits

0x1f59,	// (0x000815cd) main_video3_pane_t1

0x1f84,	// (0x000815f8) main_video3_pane_t2_ParamLimits

0x1f84,	// (0x000815f8) main_video3_pane_t2

0x1faf,	// (0x00081623) main_video3_pane_t3_ParamLimits

0x1faf,	// (0x00081623) main_video3_pane_t3

0x0002,

0xf867,	// (0x0008eedb) main_video3_pane_t_ParamLimits

0xf867,	// (0x0008eedb) main_video3_pane_t

0x1fdc,	// (0x00081650) cams_zoom_vslider_pane_g1

0x1fe5,	// (0x00081659) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0008eee2) cams_zoom_vslider_pane_g

0x1fed,	// (0x00081661) small_slider_vertical_pane

0x1801,	// (0x00080e75) small_slider_vertical_pane_g1

0x1801,	// (0x00080e75) small_slider_vertical_pane_g2

0x1ff5,	// (0x00081669) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0008eee7) small_slider_vertical_pane_g

0xf061,	// (0x0008e6d5) main_hwr_training_pane

0x1ffe,	// (0x00081672) hwr_training_instruct_pane_ParamLimits

0x1ffe,	// (0x00081672) hwr_training_instruct_pane

0xa06c,	// (0x000896e0) hwr_training_navi_pane_ParamLimits

0xa06c,	// (0x000896e0) hwr_training_navi_pane

0xa086,	// (0x000896fa) hwr_training_write_pane_ParamLimits

0xa086,	// (0x000896fa) hwr_training_write_pane

0xf061,	// (0x0008e6d5) bg_frame_shadow_pane

0x2035,	// (0x000816a9) hwr_training_write_pane_g1

0x203d,	// (0x000816b1) hwr_training_write_pane_g2

0x2045,	// (0x000816b9) hwr_training_write_pane_g3

0x204d,	// (0x000816c1) hwr_training_write_pane_g4

0x2055,	// (0x000816c9) hwr_training_write_pane_g5

0x205d,	// (0x000816d1) hwr_training_write_pane_g6

0x2065,	// (0x000816d9) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0008eeee) hwr_training_write_pane_g

0xa0be,	// (0x00089732) hwr_training_navi_pane_g1_ParamLimits

0xa0be,	// (0x00089732) hwr_training_navi_pane_g1

0xa0d0,	// (0x00089744) hwr_training_navi_pane_g2_ParamLimits

0xa0d0,	// (0x00089744) hwr_training_navi_pane_g2

0xa0e2,	// (0x00089756) hwr_training_navi_pane_g3_ParamLimits

0xa0e2,	// (0x00089756) hwr_training_navi_pane_g3

0xa0f2,	// (0x00089766) hwr_training_navi_pane_g4_ParamLimits

0xa0f2,	// (0x00089766) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0008eefd) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0008eefd) hwr_training_navi_pane_g

0xa10c,	// (0x00089780) hwr_training_navi_pane_t1

0xa11a,	// (0x0008978e) list_single_hwr_training_instruct_pane_ParamLimits

0xa11a,	// (0x0008978e) list_single_hwr_training_instruct_pane

0x206d,	// (0x000816e1) list_single_hwr_training_instruct_pane_t1

0x1741,	// (0x00080db5) bg_frame_shadow_pane_g1

0x207c,	// (0x000816f0) bg_frame_shadow_pane_g2

0x2084,	// (0x000816f8) bg_frame_shadow_pane_g3

0x208c,	// (0x00081700) bg_frame_shadow_pane_g4

0x2094,	// (0x00081708) bg_frame_shadow_pane_g5

0x209c,	// (0x00081710) bg_frame_shadow_pane_g6

0x20a4,	// (0x00081718) bg_frame_shadow_pane_g7

0xe2a5,	// (0x0008d919) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0008ef08) bg_frame_shadow_pane_g

0xf061,	// (0x0008e6d5) main_video_tele_dialer_pane

0xa150,	// (0x000897c4) aid_size_cell_video_keypad_ParamLimits

0xa150,	// (0x000897c4) aid_size_cell_video_keypad

0xa160,	// (0x000897d4) grid_video_dialer_keypad_pane_ParamLimits

0xa160,	// (0x000897d4) grid_video_dialer_keypad_pane

0xa192,	// (0x00089806) video_down_pane_cp_ParamLimits

0xa192,	// (0x00089806) video_down_pane_cp

0xa1ba,	// (0x0008982e) cell_video_dialer_keypad_pane_ParamLimits

0xa1ba,	// (0x0008982e) cell_video_dialer_keypad_pane

0x20ac,	// (0x00081720) bg_button_pane_cp08_ParamLimits

0x20ac,	// (0x00081720) bg_button_pane_cp08

0xa1cf,	// (0x00089843) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa1cf,	// (0x00089843) cell_video_dialer_keypad_pane_g1

0x999b,	// (0x0008900f) mup3_rocker2_pane_ParamLimits

0x999b,	// (0x0008900f) mup3_rocker2_pane

0x1801,	// (0x00080e75) mup3_rocker2_pane_g1

0x88ba,	// (0x00087f2e) main_dialer2_pane

0xf061,	// (0x0008e6d5) main_mp4_pane

0xa20e,	// (0x00089882) main_mp4_pane_g1_ParamLimits

0xa20e,	// (0x00089882) main_mp4_pane_g1

0xa21c,	// (0x00089890) main_mp4_pane_g2_ParamLimits

0xa21c,	// (0x00089890) main_mp4_pane_g2

0xa22a,	// (0x0008989e) main_mp4_pane_g3_ParamLimits

0xa22a,	// (0x0008989e) main_mp4_pane_g3

0xa26f,	// (0x000898e3) main_mp4_pane_g4_ParamLimits

0xa26f,	// (0x000898e3) main_mp4_pane_g4

0xa297,	// (0x0008990b) main_mp4_pane_g5_ParamLimits

0xa297,	// (0x0008990b) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0008ef28) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0008ef28) main_mp4_pane_g

0xa2e7,	// (0x0008995b) main_mp4_pane_t1_ParamLimits

0xa2e7,	// (0x0008995b) main_mp4_pane_t1

0xa343,	// (0x000899b7) main_mp4_pane_t2_ParamLimits

0xa343,	// (0x000899b7) main_mp4_pane_t2

0x20b8,	// (0x0008172c) main_mp4_pane_t3_ParamLimits

0x20b8,	// (0x0008172c) main_mp4_pane_t3

0xa395,	// (0x00089a09) main_mp4_pane_t4_ParamLimits

0xa395,	// (0x00089a09) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0008ef35) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0008ef35) main_mp4_pane_t

0xa3d9,	// (0x00089a4d) mp4_progress_pane_ParamLimits

0xa3d9,	// (0x00089a4d) mp4_progress_pane

0xa423,	// (0x00089a97) mp4_rocker_pane_ParamLimits

0xa423,	// (0x00089a97) mp4_rocker_pane

0x20e0,	// (0x00081754) mp4_progress_pane_t1

0x20f9,	// (0x0008176d) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0008ef3e) mp4_progress_pane_t

0x2112,	// (0x00081786) mup_progress_pane_cp04

0x29ba,	// (0x0008202e) mp4_rocker_pane_g1

0xa443,	// (0x00089ab7) aid_cell_size_keypad2_ParamLimits

0xa443,	// (0x00089ab7) aid_cell_size_keypad2

0xa453,	// (0x00089ac7) dialer2_ne_pane_ParamLimits

0xa453,	// (0x00089ac7) dialer2_ne_pane

0xa461,	// (0x00089ad5) grid_dialer2_keypad_pane_ParamLimits

0xa461,	// (0x00089ad5) grid_dialer2_keypad_pane

0x2a15,	// (0x00082089) bg_popup_call_pane_cp07_ParamLimits

0x2a15,	// (0x00082089) bg_popup_call_pane_cp07

0xa471,	// (0x00089ae5) dialer2_ne_pane_t1_ParamLimits

0xa471,	// (0x00089ae5) dialer2_ne_pane_t1

0xa496,	// (0x00089b0a) cell_dialer2_keypad_pane_ParamLimits

0xa496,	// (0x00089b0a) cell_dialer2_keypad_pane

0x2130,	// (0x000817a4) bg_button_pane_pane_cp04_ParamLimits

0x2130,	// (0x000817a4) bg_button_pane_pane_cp04

0xa4ad,	// (0x00089b21) cell_dialer2_keypad_pane_g1_ParamLimits

0xa4ad,	// (0x00089b21) cell_dialer2_keypad_pane_g1

0x6657,	// (0x00085ccb) aid_placing_vt_set_content_ParamLimits

0x6657,	// (0x00085ccb) aid_placing_vt_set_content

0x6683,	// (0x00085cf7) aid_placing_vt_set_title_ParamLimits

0x6683,	// (0x00085cf7) aid_placing_vt_set_title

0xf061,	// (0x0008e6d5) main_image3_pane

0xa547,	// (0x00089bbb) area_side_right_pane_cp01_ParamLimits

0xa547,	// (0x00089bbb) area_side_right_pane_cp01

0xa574,	// (0x00089be8) main_image3_pane_g1_ParamLimits

0xa574,	// (0x00089be8) main_image3_pane_g1

0xa582,	// (0x00089bf6) main_image3_pane_g2_ParamLimits

0xa582,	// (0x00089bf6) main_image3_pane_g2

0xa59b,	// (0x00089c0f) main_image3_pane_g3_ParamLimits

0xa59b,	// (0x00089c0f) main_image3_pane_g3

0xa5b4,	// (0x00089c28) main_image3_pane_g4_ParamLimits

0xa5b4,	// (0x00089c28) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0008ef4d) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0008ef4d) main_image3_pane_g

0xa5cd,	// (0x00089c41) main_image3_pane_t1_ParamLimits

0xa5cd,	// (0x00089c41) main_image3_pane_t1

0xa5f2,	// (0x00089c66) main_image3_pane_t2_ParamLimits

0xa5f2,	// (0x00089c66) main_image3_pane_t2

0xa611,	// (0x00089c85) main_image3_pane_t3_ParamLimits

0xa611,	// (0x00089c85) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0008ef56) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0008ef56) main_image3_pane_t

0x222f,	// (0x000818a3) grid_sctrl_middle_pane_cp01_ParamLimits

0x222f,	// (0x000818a3) grid_sctrl_middle_pane_cp01

0xa672,	// (0x00089ce6) cell_sctrl_middle_pane_cp01_ParamLimits

0xa672,	// (0x00089ce6) cell_sctrl_middle_pane_cp01

0xa683,	// (0x00089cf7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa683,	// (0x00089cf7) cell_sctrl_middle_pane_cp01_g1

0xf061,	// (0x0008e6d5) main_call4_pane

0xa690,	// (0x00089d04) aid_size_button_call4_ParamLimits

0xa690,	// (0x00089d04) aid_size_button_call4

0xa6c0,	// (0x00089d34) call4_windows_pane_ParamLimits

0xa6c0,	// (0x00089d34) call4_windows_pane

0xa6da,	// (0x00089d4e) grid_call4_button_pane_ParamLimits

0xa6da,	// (0x00089d4e) grid_call4_button_pane

0x213c,	// (0x000817b0) call4_windows_conf_pane

0x2151,	// (0x000817c5) popup_call4_audio_first_window_ParamLimits

0x2151,	// (0x000817c5) popup_call4_audio_first_window

0x219d,	// (0x00081811) popup_call4_audio_second_window_ParamLimits

0x219d,	// (0x00081811) popup_call4_audio_second_window

0x21b1,	// (0x00081825) popup_call4_audio_wait_window_ParamLimits

0x21b1,	// (0x00081825) popup_call4_audio_wait_window

0xa6fe,	// (0x00089d72) cell_call4_button_pane_ParamLimits

0xa6fe,	// (0x00089d72) cell_call4_button_pane

0xa723,	// (0x00089d97) bg_button_pane_cp09_ParamLimits

0xa723,	// (0x00089d97) bg_button_pane_cp09

0xa72f,	// (0x00089da3) cell_call4_button_pane_g1_ParamLimits

0xa72f,	// (0x00089da3) cell_call4_button_pane_g1

0xa73c,	// (0x00089db0) cell_call4_button_pane_t1_ParamLimits

0xa73c,	// (0x00089db0) cell_call4_button_pane_t1

0x21f9,	// (0x0008186d) popup_call4_audio_conf_window_ParamLimits

0x21f9,	// (0x0008186d) popup_call4_audio_conf_window

0x99ce,	// (0x00089042) mup3_progress_pane_t1_ParamLimits

0x99ed,	// (0x00089061) mup3_progress_pane_t2_ParamLimits

0x1b0f,	// (0x00081183) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0008ee2f) mup3_progress_pane_t_ParamLimits

0x1b2c,	// (0x000811a0) mup_progress_pane_cp03_ParamLimits

0x9f07,	// (0x0008957b) mup3_control_keys_pane_g4_copy1

0xa407,	// (0x00089a7b) mp4_rocker2_pane_ParamLimits

0xa407,	// (0x00089a7b) mp4_rocker2_pane

0x2215,	// (0x00081889) mp4_rocker2_pane_g1

0x220d,	// (0x00081881) mp4_rocker2_pane_g2

0xa74e,	// (0x00089dc2) mp4_rocker2_pane_g3

0xa756,	// (0x00089dca) mp4_rocker2_pane_g4

0xa75e,	// (0x00089dd2) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0008ef5f) mp4_rocker2_pane_g

0xf061,	// (0x0008e6d5) main_camera4_pane

0xf061,	// (0x0008e6d5) main_video4_pane

0xa16e,	// (0x000897e2) main_video_tele_dialer_pane_t1_ParamLimits

0xa16e,	// (0x000897e2) main_video_tele_dialer_pane_t1

0xa180,	// (0x000897f4) main_video_tele_dialer_pane_t2_ParamLimits

0xa180,	// (0x000897f4) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0008ef19) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0008ef19) main_video_tele_dialer_pane_t

0xa77e,	// (0x00089df2) cam4_autofocus_pane_ParamLimits

0xa77e,	// (0x00089df2) cam4_autofocus_pane

0xa798,	// (0x00089e0c) cam4_image_uncrop_pane_ParamLimits

0xa798,	// (0x00089e0c) cam4_image_uncrop_pane

0xa7af,	// (0x00089e23) cam4_indicators_pane_ParamLimits

0xa7af,	// (0x00089e23) cam4_indicators_pane

0xa7cb,	// (0x00089e3f) main_camera4_pane_g1_ParamLimits

0xa7cb,	// (0x00089e3f) main_camera4_pane_g1

0xa7d7,	// (0x00089e4b) main_camera4_pane_g2_ParamLimits

0xa7d7,	// (0x00089e4b) main_camera4_pane_g2

0xa7d7,	// (0x00089e4b) main_camera4_pane_g3_ParamLimits

0xa7d7,	// (0x00089e4b) main_camera4_pane_g3

0xa7e3,	// (0x00089e57) main_camera4_pane_g4_ParamLimits

0xa7e3,	// (0x00089e57) main_camera4_pane_g4

0xa7ef,	// (0x00089e63) main_camera4_pane_g5_ParamLimits

0xa7ef,	// (0x00089e63) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0008ef6a) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0008ef6a) main_camera4_pane_g

0xa809,	// (0x00089e7d) main_camera4_pane_t1_ParamLimits

0xa809,	// (0x00089e7d) main_camera4_pane_t1

0xa851,	// (0x00089ec5) bg_tb_trans_pane_cp06

0xa867,	// (0x00089edb) cam4_indicators_pane_g1

0xa878,	// (0x00089eec) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0008ef85) cam4_indicators_pane_g

0xa896,	// (0x00089f0a) cam4_indicators_pane_t1

0xa8c0,	// (0x00089f34) main_video4_pane_g1_ParamLimits

0xa8c0,	// (0x00089f34) main_video4_pane_g1

0xa8cc,	// (0x00089f40) main_video4_pane_g2_ParamLimits

0xa8cc,	// (0x00089f40) main_video4_pane_g2

0xa8d8,	// (0x00089f4c) main_video4_pane_g3_ParamLimits

0xa8d8,	// (0x00089f4c) main_video4_pane_g3

0xa8e4,	// (0x00089f58) main_video4_pane_g4_ParamLimits

0xa8e4,	// (0x00089f58) main_video4_pane_g4

0x0004,

0xf918,	// (0x0008ef8c) main_video4_pane_g_ParamLimits

0xf918,	// (0x0008ef8c) main_video4_pane_g

0xa904,	// (0x00089f78) vid4_indicators_pane_ParamLimits

0xa904,	// (0x00089f78) vid4_indicators_pane

0xa922,	// (0x00089f96) video4_image_uncrop_cif_pane_ParamLimits

0xa922,	// (0x00089f96) video4_image_uncrop_cif_pane

0xa931,	// (0x00089fa5) video4_image_uncrop_nhd_pane_ParamLimits

0xa931,	// (0x00089fa5) video4_image_uncrop_nhd_pane

0xa798,	// (0x00089e0c) video4_image_uncrop_vga_pane_ParamLimits

0xa798,	// (0x00089e0c) video4_image_uncrop_vga_pane

0xa93e,	// (0x00089fb2) bg_tb_trans_pane_cp07

0xa867,	// (0x00089edb) vid4_indicators_pane_g1

0xa954,	// (0x00089fc8) vid4_indicators_pane_g2

0xa965,	// (0x00089fd9) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0008ef97) vid4_indicators_pane_g

0xa992,	// (0x0008a006) vid4_indicators_pane_t1

0xa9ab,	// (0x0008a01f) cam4_autofocus_pane_g1

0xa9b3,	// (0x0008a027) cam4_autofocus_pane_g2

0xa9bb,	// (0x0008a02f) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0008efa2) cam4_autofocus_pane_g

0xa9c3,	// (0x0008a037) cam4_autofocus_pane_g3_copy1

0xa19e,	// (0x00089812) video_down_pane_cp_t1

0xa1ac,	// (0x00089820) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0008ef1e) video_down_pane_cp_t

0x222f,	// (0x000818a3) popup_vitu2_window_ParamLimits

0x222f,	// (0x000818a3) popup_vitu2_window

0xa9cb,	// (0x0008a03f) aid_size_cell2_itu2_ParamLimits

0xa9cb,	// (0x0008a03f) aid_size_cell2_itu2

0xa9ed,	// (0x0008a061) aid_size_cell_itu2_ParamLimits

0xa9ed,	// (0x0008a061) aid_size_cell_itu2

0xaa31,	// (0x0008a0a5) bg_popup_window_pane_cp09_ParamLimits

0xaa31,	// (0x0008a0a5) bg_popup_window_pane_cp09

0xaa3f,	// (0x0008a0b3) field_vitu2_entry_pane_ParamLimits

0xaa3f,	// (0x0008a0b3) field_vitu2_entry_pane

0xaa5f,	// (0x0008a0d3) grid_vitu2_function_pane_ParamLimits

0xaa5f,	// (0x0008a0d3) grid_vitu2_function_pane

0xaaa3,	// (0x0008a117) grid_vitu2_itu_pane_ParamLimits

0xaaa3,	// (0x0008a117) grid_vitu2_itu_pane

0xab19,	// (0x0008a18d) cell_vitu2_itu_pane_ParamLimits

0xab19,	// (0x0008a18d) cell_vitu2_itu_pane

0xab2e,	// (0x0008a1a2) cell_vitu2_function_pane_ParamLimits

0xab2e,	// (0x0008a1a2) cell_vitu2_function_pane

0x223d,	// (0x000818b1) bg_popup_call_pane_cp08_ParamLimits

0x223d,	// (0x000818b1) bg_popup_call_pane_cp08

0x2256,	// (0x000818ca) field_vitu2_entry_pane_g1

0x2262,	// (0x000818d6) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0008efa9) field_vitu2_entry_pane_g

0xab6f,	// (0x0008a1e3) field_vitu2_entry_pane_t1_ParamLimits

0xab6f,	// (0x0008a1e3) field_vitu2_entry_pane_t1

0x227c,	// (0x000818f0) field_vitu2_entry_pane_t2_ParamLimits

0x227c,	// (0x000818f0) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0008efb0) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0008efb0) field_vitu2_entry_pane_t

0xab9f,	// (0x0008a213) bg_button_pane_cp010_ParamLimits

0xab9f,	// (0x0008a213) bg_button_pane_cp010

0xabad,	// (0x0008a221) cell_vitu2_itu_pane_g1

0xabcb,	// (0x0008a23f) cell_vitu2_itu_pane_t1_ParamLimits

0xabcb,	// (0x0008a23f) cell_vitu2_itu_pane_t1

0x562d,	// (0x00084ca1) cell_vitu2_itu_pane_t2_ParamLimits

0x562d,	// (0x00084ca1) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0008efba) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0008efba) cell_vitu2_itu_pane_t

0xa93e,	// (0x00089fb2) bg_button_pane_cp011

0xac1d,	// (0x0008a291) cell_vitu2_function_pane_g1

0xf061,	// (0x0008e6d5) main_myfav_hc_pane

0xa653,	// (0x00089cc7) popup_image3_note_pane_ParamLimits

0xa653,	// (0x00089cc7) popup_image3_note_pane

0xa661,	// (0x00089cd5) popup_image3_tool_bar_pane_ParamLimits

0xa661,	// (0x00089cd5) popup_image3_tool_bar_pane

0x569b,	// (0x00084d0f) cell_vitu2_itu_pane_t3_ParamLimits

0x569b,	// (0x00084d0f) cell_vitu2_itu_pane_t3

0xf061,	// (0x0008e6d5) bg_popup_trans_pane

0x22a1,	// (0x00081915) grid_image3_tool_bar_pane

0x22ab,	// (0x0008191f) bg_popup_trans_pane_g1

0xe5ec,	// (0x0008dc60) bg_popup_trans_pane_g2

0x22b3,	// (0x00081927) bg_popup_trans_pane_g3

0x22bb,	// (0x0008192f) bg_popup_trans_pane_g4

0x22c3,	// (0x00081937) bg_popup_trans_pane_g5

0x22cb,	// (0x0008193f) bg_popup_trans_pane_g6

0x22d3,	// (0x00081947) bg_popup_trans_pane_g7

0x22db,	// (0x0008194f) bg_popup_trans_pane_g8

0xe5cc,	// (0x0008dc40) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0008efc1) bg_popup_trans_pane_g

0x22e3,	// (0x00081957) cell_image3_tool_bar_pane_ParamLimits

0x22e3,	// (0x00081957) cell_image3_tool_bar_pane

0x1801,	// (0x00080e75) cell_image3_tool_bar_pane_g1

0xf061,	// (0x0008e6d5) bg_popup_trans_pane_cp1

0x22f7,	// (0x0008196b) popup_image3_note_pane_t1

0x2305,	// (0x00081979) popup_image3_note_pane_t2

0x2313,	// (0x00081987) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0008efd4) popup_image3_note_pane_t

0x2321,	// (0x00081995) popup_image3_note_pane_t3_copy1

0xac31,	// (0x0008a2a5) bg_myfav_hc_instruction_pane_ParamLimits

0xac31,	// (0x0008a2a5) bg_myfav_hc_instruction_pane

0xac49,	// (0x0008a2bd) cell_myfav_contact_pane_ParamLimits

0xac49,	// (0x0008a2bd) cell_myfav_contact_pane

0xac63,	// (0x0008a2d7) cell_myfav_contact_pane_cp1_ParamLimits

0xac63,	// (0x0008a2d7) cell_myfav_contact_pane_cp1

0xac7b,	// (0x0008a2ef) cell_myfav_contact_pane_cp2_ParamLimits

0xac7b,	// (0x0008a2ef) cell_myfav_contact_pane_cp2

0xac93,	// (0x0008a307) cell_myfav_contact_pane_cp3_ParamLimits

0xac93,	// (0x0008a307) cell_myfav_contact_pane_cp3

0xacaa,	// (0x0008a31e) cell_myfav_contact_pane_cp4_ParamLimits

0xacaa,	// (0x0008a31e) cell_myfav_contact_pane_cp4

0xacc0,	// (0x0008a334) cell_myfav_contact_pane_cp5_ParamLimits

0xacc0,	// (0x0008a334) cell_myfav_contact_pane_cp5

0xacd4,	// (0x0008a348) cell_myfav_contact_pane_cp6_ParamLimits

0xacd4,	// (0x0008a348) cell_myfav_contact_pane_cp6

0xace8,	// (0x0008a35c) cell_myfav_contact_pane_cp7_ParamLimits

0xace8,	// (0x0008a35c) cell_myfav_contact_pane_cp7

0x232f,	// (0x000819a3) listscroll_gen_pane_cp05

0xad00,	// (0x0008a374) main_myfav_hc_pane_g1_ParamLimits

0xad00,	// (0x0008a374) main_myfav_hc_pane_g1

0xad18,	// (0x0008a38c) main_myfav_hc_pane_g2_ParamLimits

0xad18,	// (0x0008a38c) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0008efdb) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0008efdb) main_myfav_hc_pane_g

0xad48,	// (0x0008a3bc) main_myfav_hc_pane_t1_ParamLimits

0xad48,	// (0x0008a3bc) main_myfav_hc_pane_t1

0x2338,	// (0x000819ac) main_myfav_hc_pane_t2_ParamLimits

0x2338,	// (0x000819ac) main_myfav_hc_pane_t2

0x234a,	// (0x000819be) main_myfav_hc_pane_t3_ParamLimits

0x234a,	// (0x000819be) main_myfav_hc_pane_t3

0xad5f,	// (0x0008a3d3) main_myfav_hc_pane_t4_ParamLimits

0xad5f,	// (0x0008a3d3) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0008efe2) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0008efe2) main_myfav_hc_pane_t

0x1801,	// (0x00080e75) bg_myfav_hc_instruction_pane_g1

0x235c,	// (0x000819d0) cell_myfav_contact_pane_g1_ParamLimits

0x235c,	// (0x000819d0) cell_myfav_contact_pane_g1

0x235c,	// (0x000819d0) cell_myfav_contact_pane_g2_ParamLimits

0x235c,	// (0x000819d0) cell_myfav_contact_pane_g2

0x2368,	// (0x000819dc) cell_myfav_contact_pane_g3_ParamLimits

0x2368,	// (0x000819dc) cell_myfav_contact_pane_g3

0x1af9,	// (0x0008116d) cell_myfav_contact_pane_g4_ParamLimits

0x1af9,	// (0x0008116d) cell_myfav_contact_pane_g4

0x2375,	// (0x000819e9) cell_myfav_contact_pane_g5_ParamLimits

0x2375,	// (0x000819e9) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0008efed) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0008efed) cell_myfav_contact_pane_g

0xad30,	// (0x0008a3a4) main_myfav_hc_pane_g3_ParamLimits

0xad30,	// (0x0008a3a4) main_myfav_hc_pane_g3

0x5864,	// (0x00084ed8) popup_adpt_find_window

0xad89,	// (0x0008a3fd) afind_page_pane_ParamLimits

0xad89,	// (0x0008a3fd) afind_page_pane

0xad96,	// (0x0008a40a) aid_size_cell_afind_ParamLimits

0xad96,	// (0x0008a40a) aid_size_cell_afind

0xadb0,	// (0x0008a424) bg_popup_sub_pane_cp09_ParamLimits

0xadb0,	// (0x0008a424) bg_popup_sub_pane_cp09

0xadbd,	// (0x0008a431) find_pane_cp01_ParamLimits

0xadbd,	// (0x0008a431) find_pane_cp01

0x2381,	// (0x000819f5) grid_afind_control_pane_ParamLimits

0x2381,	// (0x000819f5) grid_afind_control_pane

0xadca,	// (0x0008a43e) grid_afind_pane_ParamLimits

0xadca,	// (0x0008a43e) grid_afind_pane

0xade6,	// (0x0008a45a) cell_afind_pane_ParamLimits

0xade6,	// (0x0008a45a) cell_afind_pane

0x1801,	// (0x00080e75) afind_page_pane_g1

0xae2e,	// (0x0008a4a2) afind_page_pane_g2

0xae37,	// (0x0008a4ab) afind_page_pane_g3

0x0002,

0xf984,	// (0x0008eff8) afind_page_pane_g

0xae40,	// (0x0008a4b4) afind_page_pane_t1

0x2395,	// (0x00081a09) cell_afind_grid_control_pane_ParamLimits

0x2395,	// (0x00081a09) cell_afind_grid_control_pane

0x2130,	// (0x000817a4) bg_button_pane_cp69_ParamLimits

0x2130,	// (0x000817a4) bg_button_pane_cp69

0xae57,	// (0x0008a4cb) cell_afind_pane_g1_ParamLimits

0xae57,	// (0x0008a4cb) cell_afind_pane_g1

0xae64,	// (0x0008a4d8) cell_afind_pane_t1_ParamLimits

0xae64,	// (0x0008a4d8) cell_afind_pane_t1

0xe3e5,	// (0x0008da59) bg_button_pane_cp72

0x23a4,	// (0x00081a18) cell_afind_grid_control_pane_g1

0x8435,	// (0x00087aa9) aid_image_placing_area_ParamLimits

0x8435,	// (0x00087aa9) aid_image_placing_area

0x1dfe,	// (0x00081472) field_vitu_entry_pane_g1_ParamLimits

0x1dfe,	// (0x00081472) field_vitu_entry_pane_g1

0x1e0a,	// (0x0008147e) field_vitu_entry_pane_g2_ParamLimits

0x1e0a,	// (0x0008147e) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0008eea9) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0008eea9) field_vitu_entry_pane_g

0x9f93,	// (0x00089607) cell_vitu_itu_pane_g1_ParamLimits

0x9fd5,	// (0x00089649) cell_vitu_itu_pane_t3_ParamLimits

0x9fd5,	// (0x00089649) cell_vitu_itu_pane_t3

0x20e0,	// (0x00081754) mp4_progress_pane_t1_ParamLimits

0x20f9,	// (0x0008176d) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0008ef3e) mp4_progress_pane_t_ParamLimits

0x2112,	// (0x00081786) mup_progress_pane_cp04_ParamLimits

0xad73,	// (0x0008a3e7) main_myfav_hc_pane_t5_ParamLimits

0xad73,	// (0x0008a3e7) main_myfav_hc_pane_t5

0xf087,	// (0x0008e6fb) aid_zoom_text_primary

0x5864,	// (0x00084ed8) popup_adpt_find_window_ParamLimits

0xf0d9,	// (0x0008e74d) main_cam_set_pane

0xa7bd,	// (0x00089e31) cam4_zoom_pane_ParamLimits

0xa7bd,	// (0x00089e31) cam4_zoom_pane

0xae76,	// (0x0008a4ea) main_cam_set_pane_g1_ParamLimits

0xae76,	// (0x0008a4ea) main_cam_set_pane_g1

0xae84,	// (0x0008a4f8) main_cam_set_pane_g2_ParamLimits

0xae84,	// (0x0008a4f8) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0008efff) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0008efff) main_cam_set_pane_g

0xae90,	// (0x0008a504) main_cam_set_pane_t1_ParamLimits

0xae90,	// (0x0008a504) main_cam_set_pane_t1

0xaeac,	// (0x0008a520) main_cset_listscroll_pane_ParamLimits

0xaeac,	// (0x0008a520) main_cset_listscroll_pane

0xaed7,	// (0x0008a54b) main_cset_slider_pane_ParamLimits

0xaed7,	// (0x0008a54b) main_cset_slider_pane

0x23b5,	// (0x00081a29) main_cset_list_pane_ParamLimits

0x23b5,	// (0x00081a29) main_cset_list_pane

0x23c5,	// (0x00081a39) scroll_pane_cp028

0xaef6,	// (0x0008a56a) aid_area_touch_slider

0xaf12,	// (0x0008a586) cset_slider_pane

0xaf3c,	// (0x0008a5b0) main_cset_slider_pane_g1

0xaf51,	// (0x0008a5c5) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0008f004) main_cset_slider_pane_g

0x23fe,	// (0x00081a72) main_cset_slider_pane_t1

0xb019,	// (0x0008a68d) main_cset_slider_pane_t2

0xb033,	// (0x0008a6a7) main_cset_slider_pane_t3

0xb04d,	// (0x0008a6c1) main_cset_slider_pane_t4

0xb06b,	// (0x0008a6df) main_cset_slider_pane_t5

0xb08d,	// (0x0008a701) main_cset_slider_pane_t6

0xb0a4,	// (0x0008a718) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0008f029) main_cset_slider_pane_t

0xb1b2,	// (0x0008a826) cset_list_set_pane_ParamLimits

0xb1b2,	// (0x0008a826) cset_list_set_pane

0xb1cf,	// (0x0008a843) aid_position_infowindow_above

0xb1d7,	// (0x0008a84b) aid_position_infowindow_below

0xb1df,	// (0x0008a853) cset_list_set_pane_g1_ParamLimits

0xb1df,	// (0x0008a853) cset_list_set_pane_g1

0x2c1b,	// (0x0008228f) cset_list_set_pane_g3_ParamLimits

0x2c1b,	// (0x0008228f) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0008f048) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0008f048) cset_list_set_pane_g

0x2c2a,	// (0x0008229e) cset_list_set_pane_t1_ParamLimits

0x2c2a,	// (0x0008229e) cset_list_set_pane_t1

0xf0d9,	// (0x0008e74d) list_highlight_pane_cp021_ParamLimits

0xf0d9,	// (0x0008e74d) list_highlight_pane_cp021

0xed9a,	// (0x0008e40e) cset_slider_pane_g1

0xedac,	// (0x0008e420) cset_slider_pane_g2

0xeda3,	// (0x0008e417) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0008f04d) cset_slider_pane_g

0xb1eb,	// (0x0008a85f) aid_area_touch_cam4_zoom

0xb1f3,	// (0x0008a867) cam4_zoom_cont_pane

0xb1fb,	// (0x0008a86f) cam4_zoom_pane_g1

0xb203,	// (0x0008a877) cam4_zoom_pane_g2

0xb20b,	// (0x0008a87f) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0008f054) cam4_zoom_pane_g

0xb213,	// (0x0008a887) cam4_zoom_cont_pane_g1

0xb21c,	// (0x0008a890) cam4_zoom_cont_pane_g2

0xb225,	// (0x0008a899) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0008f05b) cam4_zoom_cont_pane_g

0xa6aa,	// (0x00089d1e) call4_image_pane_ParamLimits

0xa6aa,	// (0x00089d1e) call4_image_pane

0x213c,	// (0x000817b0) call4_windows_conf_pane_ParamLimits

0x217b,	// (0x000817ef) popup_call4_audio_in_window_ParamLimits

0x217b,	// (0x000817ef) popup_call4_audio_in_window

0xf061,	// (0x0008e6d5) bg_popup_call2_act_pane_cp02

0x21f1,	// (0x00081865) call4_list_conf_pane

0x1801,	// (0x00080e75) call4_image_pane_g1

0x1801,	// (0x00080e75) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0008ed6f) call4_image_pane_g

0x24b9,	// (0x00081b2d) list_single_graphic_popup_conf4_pane_ParamLimits

0x24b9,	// (0x00081b2d) list_single_graphic_popup_conf4_pane

0xf061,	// (0x0008e6d5) list_highlight_pane_cp022

0x24cc,	// (0x00081b40) list_single_graphic_popup_conf4_pane_g1

0xea8b,	// (0x0008e0ff) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0008f062) list_single_graphic_popup_conf4_pane_g

0x24d4,	// (0x00081b48) list_single_graphic_popup_conf4_pane_t1

0x67e7,	// (0x00085e5b) popup_vtel_slider_window_ParamLimits

0x67e7,	// (0x00085e5b) popup_vtel_slider_window

0x211e,	// (0x00081792) dialer2_ne_pane_t2_ParamLimits

0x211e,	// (0x00081792) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0008ef43) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0008ef43) dialer2_ne_pane_t

0xf0d9,	// (0x0008e74d) bg_popup_sub_pane_cp010_ParamLimits

0xf0d9,	// (0x0008e74d) bg_popup_sub_pane_cp010

0xb22e,	// (0x0008a8a2) popup_vtel_slider_window_g1_ParamLimits

0xb22e,	// (0x0008a8a2) popup_vtel_slider_window_g1

0xb23a,	// (0x0008a8ae) popup_vtel_slider_window_g2_ParamLimits

0xb23a,	// (0x0008a8ae) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0008f067) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0008f067) popup_vtel_slider_window_g

0xb282,	// (0x0008a8f6) vtel_slider_pane_ParamLimits

0xb282,	// (0x0008a8f6) vtel_slider_pane

0xb291,	// (0x0008a905) vtel_slider_pane_g1_ParamLimits

0xb291,	// (0x0008a905) vtel_slider_pane_g1

0xb29e,	// (0x0008a912) vtel_slider_pane_g2_ParamLimits

0xb29e,	// (0x0008a912) vtel_slider_pane_g2

0xb2ab,	// (0x0008a91f) vtel_slider_pane_g3_ParamLimits

0xb2ab,	// (0x0008a91f) vtel_slider_pane_g3

0xb291,	// (0x0008a905) vtel_slider_pane_g4_ParamLimits

0xb291,	// (0x0008a905) vtel_slider_pane_g4

0xb2b8,	// (0x0008a92c) vtel_slider_pane_g5_ParamLimits

0xb2b8,	// (0x0008a92c) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0008f070) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0008f070) vtel_slider_pane_g

0xf061,	// (0x0008e6d5) main_gallery2_pane

0xaa13,	// (0x0008a087) aid_size_row_itut2_dropdow_list_ParamLimits

0xaa13,	// (0x0008a087) aid_size_row_itut2_dropdow_list

0xaa81,	// (0x0008a0f5) grid_vitu2_function_top_pane_ParamLimits

0xaa81,	// (0x0008a0f5) grid_vitu2_function_top_pane

0xaad7,	// (0x0008a14b) popup_vitu2_dropdown_list_window_ParamLimits

0xaad7,	// (0x0008a14b) popup_vitu2_dropdown_list_window

0xaaf7,	// (0x0008a16b) popup_vitu2_match_list_window

0xb2c5,	// (0x0008a939) cell_vitu2_function_top_pane_ParamLimits

0xb2c5,	// (0x0008a939) cell_vitu2_function_top_pane

0xb2e5,	// (0x0008a959) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb2e5,	// (0x0008a959) cell_vitu2_function_top_pane_cp01

0xb303,	// (0x0008a977) cell_vitu2_function_top_wide_pane_ParamLimits

0xb303,	// (0x0008a977) cell_vitu2_function_top_wide_pane

0xa93e,	// (0x00089fb2) bg_button_pane_cp012

0xb321,	// (0x0008a995) cell_vitu2_function_top_pane_g1

0xb330,	// (0x0008a9a4) bg_button_pane_cp013_ParamLimits

0xb330,	// (0x0008a9a4) bg_button_pane_cp013

0xb34c,	// (0x0008a9c0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb34c,	// (0x0008a9c0) cell_vitu2_function_top_wide_pane_g1

0xb364,	// (0x0008a9d8) bg_popup_sub_pane_cp20

0xb372,	// (0x0008a9e6) list_vitu2_match_list_pane

0x22ab,	// (0x0008191f) bg_popup_sub_pane_cp20_g1

0x22b3,	// (0x00081927) bg_popup_sub_pane_cp20_g2

0xe5ec,	// (0x0008dc60) bg_popup_sub_pane_cp20_g3

0x22bb,	// (0x0008192f) bg_popup_sub_pane_cp20_g4

0xe5cc,	// (0x0008dc40) bg_popup_sub_pane_cp20_g5

0x24f8,	// (0x00081b6c) bg_popup_sub_pane_cp20_g6

0x22cb,	// (0x0008193f) bg_popup_sub_pane_cp20_g7

0x22d3,	// (0x00081947) bg_popup_sub_pane_cp20_g8

0x22db,	// (0x0008194f) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0008f07b) bg_popup_sub_pane_cp20_g

0xb38a,	// (0x0008a9fe) list_vitu2_match_list_item_pane_ParamLimits

0xb38a,	// (0x0008a9fe) list_vitu2_match_list_item_pane

0xb39c,	// (0x0008aa10) list_vitu2_match_list_item_pane_t1

0x5c89,	// (0x000852fd) bg_popup_sub_pane_cp21

0xb3d9,	// (0x0008aa4d) grid_vitu2_dropdown_list_pane

0xb3e1,	// (0x0008aa55) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb3e1,	// (0x0008aa55) cell_vitu2_dropdown_list_char_pane

0xb402,	// (0x0008aa76) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb402,	// (0x0008aa76) cell_vitu2_dropdown_list_ctrl_pane

0x252a,	// (0x00081b9e) cell_vitu2_dropdown_list_char_pane_g1

0x2521,	// (0x00081b95) cell_vitu2_dropdown_list_char_pane_g2

0x2518,	// (0x00081b8c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0008f098) cell_vitu2_dropdown_list_char_pane_g

0xb42e,	// (0x0008aaa2) cell_vitu2_dropdown_list_char_pane_t1

0xb43c,	// (0x0008aab0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb43c,	// (0x0008aab0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb44c,	// (0x0008aac0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb44c,	// (0x0008aac0) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb45d,	// (0x0008aad1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb45d,	// (0x0008aad1) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb46d,	// (0x0008aae1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb46d,	// (0x0008aae1) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa851,	// (0x00089ec5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa851,	// (0x00089ec5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0008f09f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0008f09f) cell_vitu2_dropdown_list_ctrl_pane_g

0xb489,	// (0x0008aafd) aid_size_cell_gallery2_ParamLimits

0xb489,	// (0x0008aafd) aid_size_cell_gallery2

0xb497,	// (0x0008ab0b) grid_gallery2_pane_ParamLimits

0xb497,	// (0x0008ab0b) grid_gallery2_pane

0xb4a6,	// (0x0008ab1a) scroll_pane_cp029_ParamLimits

0xb4a6,	// (0x0008ab1a) scroll_pane_cp029

0xb4b2,	// (0x0008ab26) cell_gallery2_pane_ParamLimits

0xb4b2,	// (0x0008ab26) cell_gallery2_pane

0x2533,	// (0x00081ba7) cell_gallery2_pane_g2

0xb4e3,	// (0x0008ab57) cell_gallery2_pane_g3

0x253d,	// (0x00081bb1) cell_gallery2_pane_g4

0x2545,	// (0x00081bb9) cell_gallery2_pane_g5

0xec64,	// (0x0008e2d8) grid_highlight_pane_cp10

0xaaf7,	// (0x0008a16b) popup_vitu2_match_list_window_ParamLimits

0xab09,	// (0x0008a17d) popup_vitu2_query_window_ParamLimits

0xab09,	// (0x0008a17d) popup_vitu2_query_window

0x5c89,	// (0x000852fd) bg_vitu2_candi_button_pane

0x252a,	// (0x00081b9e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2521,	// (0x00081b95) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2518,	// (0x00081b8c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb4eb,	// (0x0008ab5f) bg_button_pane_cp015

0xb4fd,	// (0x0008ab71) bg_button_pane_cp016

0xb510,	// (0x0008ab84) bg_button_pane_cp017

0x1366,	// (0x000809da) bg_popup_sub_pane_cp22

0x254d,	// (0x00081bc1) popup_vitu2_query_window_g1

0xb555,	// (0x0008abc9) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0008f0aa) popup_vitu2_query_window_g

0xb572,	// (0x0008abe6) popup_vitu2_query_window_t1_ParamLimits

0xb572,	// (0x0008abe6) popup_vitu2_query_window_t1

0xb5a5,	// (0x0008ac19) popup_vitu2_query_window_t2_ParamLimits

0xb5a5,	// (0x0008ac19) popup_vitu2_query_window_t2

0xb5b7,	// (0x0008ac2b) popup_vitu2_query_window_t3_ParamLimits

0xb5b7,	// (0x0008ac2b) popup_vitu2_query_window_t3

0xb5df,	// (0x0008ac53) popup_vitu2_query_window_t4_ParamLimits

0xb5df,	// (0x0008ac53) popup_vitu2_query_window_t4

0xb600,	// (0x0008ac74) popup_vitu2_query_window_t5_ParamLimits

0xb600,	// (0x0008ac74) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0008f0b1) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0008f0b1) popup_vitu2_query_window_t

0x23ad,	// (0x00081a21) main_cset_text_pane

0xaef6,	// (0x0008a56a) aid_area_touch_slider_ParamLimits

0xaf12,	// (0x0008a586) cset_slider_pane_ParamLimits

0xaf3c,	// (0x0008a5b0) main_cset_slider_pane_g1_ParamLimits

0xaf51,	// (0x0008a5c5) main_cset_slider_pane_g2_ParamLimits

0x23ce,	// (0x00081a42) main_cset_slider_pane_g3_ParamLimits

0x23ce,	// (0x00081a42) main_cset_slider_pane_g3

0xaf66,	// (0x0008a5da) main_cset_slider_pane_g4_ParamLimits

0xaf66,	// (0x0008a5da) main_cset_slider_pane_g4

0xaf75,	// (0x0008a5e9) main_cset_slider_pane_g5_ParamLimits

0xaf75,	// (0x0008a5e9) main_cset_slider_pane_g5

0xaf83,	// (0x0008a5f7) main_cset_slider_pane_g6_ParamLimits

0xaf83,	// (0x0008a5f7) main_cset_slider_pane_g6

0xf990,	// (0x0008f004) main_cset_slider_pane_g_ParamLimits

0x23fe,	// (0x00081a72) main_cset_slider_pane_t1_ParamLimits

0xb019,	// (0x0008a68d) main_cset_slider_pane_t2_ParamLimits

0xb033,	// (0x0008a6a7) main_cset_slider_pane_t3_ParamLimits

0xb04d,	// (0x0008a6c1) main_cset_slider_pane_t4_ParamLimits

0xb06b,	// (0x0008a6df) main_cset_slider_pane_t5_ParamLimits

0xb08d,	// (0x0008a701) main_cset_slider_pane_t6_ParamLimits

0xb0a4,	// (0x0008a718) main_cset_slider_pane_t7_ParamLimits

0xb0d2,	// (0x0008a746) main_cset_slider_pane_t8_ParamLimits

0xb0d2,	// (0x0008a746) main_cset_slider_pane_t8

0xb0fa,	// (0x0008a76e) main_cset_slider_pane_t9_ParamLimits

0xb0fa,	// (0x0008a76e) main_cset_slider_pane_t9

0xb122,	// (0x0008a796) main_cset_slider_pane_t10_ParamLimits

0xb122,	// (0x0008a796) main_cset_slider_pane_t10

0xb14a,	// (0x0008a7be) main_cset_slider_pane_t11_ParamLimits

0xb14a,	// (0x0008a7be) main_cset_slider_pane_t11

0xb174,	// (0x0008a7e8) main_cset_slider_pane_t12_ParamLimits

0xb174,	// (0x0008a7e8) main_cset_slider_pane_t12

0xb193,	// (0x0008a807) main_cset_slider_pane_t13_ParamLimits

0xb193,	// (0x0008a807) main_cset_slider_pane_t13

0xf9b5,	// (0x0008f029) main_cset_slider_pane_t_ParamLimits

0xf061,	// (0x0008e6d5) bg_popup_sub_pane_cp011

0x2559,	// (0x00081bcd) main_cset_text_pane_g1

0x2561,	// (0x00081bd5) main_cset_text_pane_t1

0x256f,	// (0x00081be3) main_cset_text_pane_t2

0x257d,	// (0x00081bf1) main_cset_text_pane_t3

0x258b,	// (0x00081bff) main_cset_text_pane_t4

0x2599,	// (0x00081c0d) main_cset_text_pane_t5

0x25a7,	// (0x00081c1b) main_cset_text_pane_t6

0x25b5,	// (0x00081c29) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0008f0c0) main_cset_text_pane_t

0xf061,	// (0x0008e6d5) main_cam4_burst_pane

0xf061,	// (0x0008e6d5) main_cam5_pane

0xe6e5,	// (0x0008dd59) bg_button_pane_cp019

0xae4e,	// (0x0008a4c2) bg_button_pane_cp020

0x23da,	// (0x00081a4e) main_cset_slider_pane_g7_ParamLimits

0x23da,	// (0x00081a4e) main_cset_slider_pane_g7

0x23e6,	// (0x00081a5a) main_cset_slider_pane_g8_ParamLimits

0x23e6,	// (0x00081a5a) main_cset_slider_pane_g8

0xaf99,	// (0x0008a60d) main_cset_slider_pane_g9_ParamLimits

0xaf99,	// (0x0008a60d) main_cset_slider_pane_g9

0xafa5,	// (0x0008a619) main_cset_slider_pane_g10_ParamLimits

0xafa5,	// (0x0008a619) main_cset_slider_pane_g10

0xafb1,	// (0x0008a625) main_cset_slider_pane_g11_ParamLimits

0xafb1,	// (0x0008a625) main_cset_slider_pane_g11

0xafbd,	// (0x0008a631) main_cset_slider_pane_g12_ParamLimits

0xafbd,	// (0x0008a631) main_cset_slider_pane_g12

0xafc9,	// (0x0008a63d) main_cset_slider_pane_g13_ParamLimits

0xafc9,	// (0x0008a63d) main_cset_slider_pane_g13

0xafd7,	// (0x0008a64b) main_cset_slider_pane_g14_ParamLimits

0xafd7,	// (0x0008a64b) main_cset_slider_pane_g14

0xafe5,	// (0x0008a659) main_cset_slider_pane_g15_ParamLimits

0xafe5,	// (0x0008a659) main_cset_slider_pane_g15

0x242c,	// (0x00081aa0) main_cset_slider_pane_t14_ParamLimits

0x242c,	// (0x00081aa0) main_cset_slider_pane_t14

0x2465,	// (0x00081ad9) main_cset_slider_pane_t15_ParamLimits

0x2465,	// (0x00081ad9) main_cset_slider_pane_t15

0xb677,	// (0x0008aceb) aid_cam4_burst_size_cell_ParamLimits

0xb677,	// (0x0008aceb) aid_cam4_burst_size_cell

0xb693,	// (0x0008ad07) grid_cam4_burst_pane_ParamLimits

0xb693,	// (0x0008ad07) grid_cam4_burst_pane

0xb6c3,	// (0x0008ad37) linegrid_cam4_burst_pane_ParamLimits

0xb6c3,	// (0x0008ad37) linegrid_cam4_burst_pane

0xb6e5,	// (0x0008ad59) scroll_pane_cp30_ParamLimits

0xb6e5,	// (0x0008ad59) scroll_pane_cp30

0xb6f1,	// (0x0008ad65) cell_cam4_burst_pane_ParamLimits

0xb6f1,	// (0x0008ad65) cell_cam4_burst_pane

0x25cf,	// (0x00081c43) linegrid_cam4_burst_pane_g1_ParamLimits

0x25cf,	// (0x00081c43) linegrid_cam4_burst_pane_g1

0xb72d,	// (0x0008ada1) linegrid_cam4_burst_pane_g2_ParamLimits

0xb72d,	// (0x0008ada1) linegrid_cam4_burst_pane_g2

0x25dc,	// (0x00081c50) linegrid_cam4_burst_pane_g3_ParamLimits

0x25dc,	// (0x00081c50) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0008f0cf) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0008f0cf) linegrid_cam4_burst_pane_g

0xb73e,	// (0x0008adb2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb73e,	// (0x0008adb2) linegrid_cam4_burst_pane_g3_copy1

0x25e9,	// (0x00081c5d) linegrid_cam4_burst_pane_g4_ParamLimits

0x25e9,	// (0x00081c5d) linegrid_cam4_burst_pane_g4

0xb758,	// (0x0008adcc) linegrid_cam4_burst_pane_g5_ParamLimits

0xb758,	// (0x0008adcc) linegrid_cam4_burst_pane_g5

0xb769,	// (0x0008addd) linegrid_cam4_burst_pane_g6_ParamLimits

0xb769,	// (0x0008addd) linegrid_cam4_burst_pane_g6

0x25f6,	// (0x00081c6a) linegrid_cam4_burst_pane_g7_ParamLimits

0x25f6,	// (0x00081c6a) linegrid_cam4_burst_pane_g7

0xb77a,	// (0x0008adee) cell_cam4_burst_pane_g1

0x260f,	// (0x00081c83) main_cam5_pane_t1_ParamLimits

0x260f,	// (0x00081c83) main_cam5_pane_t1

0x2621,	// (0x00081c95) main_cam5_pane_t2_ParamLimits

0x2621,	// (0x00081c95) main_cam5_pane_t2

0x2633,	// (0x00081ca7) main_cam5_pane_t3_ParamLimits

0x2633,	// (0x00081ca7) main_cam5_pane_t3

0x2645,	// (0x00081cb9) main_cam5_pane_t4_ParamLimits

0x2645,	// (0x00081cb9) main_cam5_pane_t4

0x265b,	// (0x00081ccf) main_cam5_pane_t5_ParamLimits

0x265b,	// (0x00081ccf) main_cam5_pane_t5

0x266d,	// (0x00081ce1) main_cam5_pane_t6_ParamLimits

0x266d,	// (0x00081ce1) main_cam5_pane_t6

0x2681,	// (0x00081cf5) main_cam5_pane_t7_ParamLimits

0x2681,	// (0x00081cf5) main_cam5_pane_t7

0x2693,	// (0x00081d07) main_cam5_pane_t8_ParamLimits

0x2693,	// (0x00081d07) main_cam5_pane_t8

0x26af,	// (0x00081d23) main_cam5_pane_t9_ParamLimits

0x26af,	// (0x00081d23) main_cam5_pane_t9

0x26c1,	// (0x00081d35) main_cam5_pane_t10_ParamLimits

0x26c1,	// (0x00081d35) main_cam5_pane_t10

0x26d3,	// (0x00081d47) main_cam5_pane_t11_ParamLimits

0x26d3,	// (0x00081d47) main_cam5_pane_t11

0x26e5,	// (0x00081d59) main_cam5_pane_t12_ParamLimits

0x26e5,	// (0x00081d59) main_cam5_pane_t12

0x26fa,	// (0x00081d6e) main_cam5_pane_t13_ParamLimits

0x26fa,	// (0x00081d6e) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x0008f0db) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x0008f0db) main_cam5_pane_t

0x5910,	// (0x00084f84) popup_scut_keymap_window_ParamLimits

0x5910,	// (0x00084f84) popup_scut_keymap_window

0xb78d,	// (0x0008ae01) aid_size_cell_brow_shortcut

0xec64,	// (0x0008e2d8) bg_popup_window_pane_cp010

0xb799,	// (0x0008ae0d) grid_scut_pane

0xb7a5,	// (0x0008ae19) cell_scut_pane_ParamLimits

0xb7a5,	// (0x0008ae19) cell_scut_pane

0xb7bc,	// (0x0008ae30) cell_scut_pane_g1

0x2717,	// (0x00081d8b) cell_scut_pane_t1

0x2726,	// (0x00081d9a) cell_scut_pane_t2

0xb7c5,	// (0x0008ae39) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x0008f0f6) cell_scut_pane_t

0x95f1,	// (0x00088c65) main_mup3_pane_g8_ParamLimits

0x95f1,	// (0x00088c65) main_mup3_pane_g8

0xaa21,	// (0x0008a095) area_vitu2_query_pane_ParamLimits

0xaa21,	// (0x0008a095) area_vitu2_query_pane

0xb523,	// (0x0008ab97) input_focus_pane_cp08

0x2735,	// (0x00081da9) area_vitu2_query_pane_g1

0xb7d3,	// (0x0008ae47) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x0008f0fd) area_vitu2_query_pane_g

0xb7e4,	// (0x0008ae58) area_vitu2_query_pane_t1_ParamLimits

0xb7e4,	// (0x0008ae58) area_vitu2_query_pane_t1

0xb7f8,	// (0x0008ae6c) area_vitu2_query_pane_t2_ParamLimits

0xb7f8,	// (0x0008ae6c) area_vitu2_query_pane_t2

0xb80c,	// (0x0008ae80) area_vitu2_query_pane_t3_ParamLimits

0xb80c,	// (0x0008ae80) area_vitu2_query_pane_t3

0x2741,	// (0x00081db5) area_vitu2_query_pane_t4_ParamLimits

0x2741,	// (0x00081db5) area_vitu2_query_pane_t4

0x2769,	// (0x00081ddd) area_vitu2_query_pane_t5_ParamLimits

0x2769,	// (0x00081ddd) area_vitu2_query_pane_t5

0x2791,	// (0x00081e05) area_vitu2_query_pane_t6_ParamLimits

0x2791,	// (0x00081e05) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0008f102) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0008f102) area_vitu2_query_pane_t

0xb834,	// (0x0008aea8) bg_button_pane_cp018

0xb842,	// (0x0008aeb6) bg_button_pane_cp021

0xb84e,	// (0x0008aec2) bg_button_pane_cp022

0xb85f,	// (0x0008aed3) input_focus_pane_cp09

0x7a63,	// (0x000870d7) aid_size_touch_mv_arrow_left

0x7a8e,	// (0x00087102) aid_size_touch_mv_arrow_right

0xaffd,	// (0x0008a671) main_cset_slider_pane_g16_ParamLimits

0xaffd,	// (0x0008a671) main_cset_slider_pane_g16

0xb00b,	// (0x0008a67f) main_cset_slider_pane_g17_ParamLimits

0xb00b,	// (0x0008a67f) main_cset_slider_pane_g17

0xb77a,	// (0x0008adee) cell_cam4_burst_pane_g1_ParamLimits

0xf061,	// (0x0008e6d5) compa_mode_pane

0xb246,	// (0x0008a8ba) popup_vtel_slider_window_g3_ParamLimits

0xb246,	// (0x0008a8ba) popup_vtel_slider_window_g3

0xb25a,	// (0x0008a8ce) popup_vtel_slider_window_g4_ParamLimits

0xb25a,	// (0x0008a8ce) popup_vtel_slider_window_g4

0xb26e,	// (0x0008a8e2) popup_vtel_slider_window_t1_ParamLimits

0xb26e,	// (0x0008a8e2) popup_vtel_slider_window_t1

0xf061,	// (0x0008e6d5) main_cl_pane

0x138e,	// (0x00080a02) popup_imed_adjust2_window_ParamLimits

0x1366,	// (0x000809da) bg_tb_trans_pane_cp05_ParamLimits

0x1d33,	// (0x000813a7) popup_imed_adjust2_window_g1_ParamLimits

0x1d42,	// (0x000813b6) popup_imed_adjust2_window_g2_ParamLimits

0x1d42,	// (0x000813b6) popup_imed_adjust2_window_g2

0x1d4e,	// (0x000813c2) popup_imed_adjust2_window_g3_ParamLimits

0x1d4e,	// (0x000813c2) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0008ee6d) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0008ee6d) popup_imed_adjust2_window_g

0x1d5a,	// (0x000813ce) popup_imed_adjust2_window_t1_ParamLimits

0x1d72,	// (0x000813e6) slider_imed_adjust_pane_ParamLimits

0x1d86,	// (0x000813fa) slider_imed_adjust_pane_g1_ParamLimits

0x1d96,	// (0x0008140a) slider_imed_adjust_pane_g2_ParamLimits

0x1da6,	// (0x0008141a) slider_imed_adjust_pane_g3_ParamLimits

0x1db7,	// (0x0008142b) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0008ee74) slider_imed_adjust_pane_g_ParamLimits

0xa766,	// (0x00089dda) aid_touch_area_cam4_ParamLimits

0xa766,	// (0x00089dda) aid_touch_area_cam4

0xa776,	// (0x00089dea) battery_pane_cp01

0xa7fd,	// (0x00089e71) main_camera4_pane_g6_ParamLimits

0xa7fd,	// (0x00089e71) main_camera4_pane_g6

0xa81b,	// (0x00089e8f) main_camera4_pane_t2_ParamLimits

0xa81b,	// (0x00089e8f) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0008ef77) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0008ef77) main_camera4_pane_t

0xa8b0,	// (0x00089f24) aid_touch_area_vid4_ParamLimits

0xa8b0,	// (0x00089f24) aid_touch_area_vid4

0xa8f0,	// (0x00089f64) main_video4_pane_g5_ParamLimits

0xa8f0,	// (0x00089f64) main_video4_pane_g5

0xa912,	// (0x00089f86) vid4_progress_pane_ParamLimits

0xa912,	// (0x00089f86) vid4_progress_pane

0x23f2,	// (0x00081a66) main_cset_slider_pane_g18_ParamLimits

0x23f2,	// (0x00081a66) main_cset_slider_pane_g18

0x2603,	// (0x00081c77) cell_cam4_burst_pane_g2_ParamLimits

0x2603,	// (0x00081c77) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0008f0d6) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0008f0d6) cell_cam4_burst_pane_g

0xb870,	// (0x0008aee4) bg_cl_pane_ParamLimits

0xb870,	// (0x0008aee4) bg_cl_pane

0xb87c,	// (0x0008aef0) cl_header_pane_ParamLimits

0xb87c,	// (0x0008aef0) cl_header_pane

0xb888,	// (0x0008aefc) cl_listscroll_pane_ParamLimits

0xb888,	// (0x0008aefc) cl_listscroll_pane

0x27dd,	// (0x00081e51) bg_cl_pane_g1

0x27e5,	// (0x00081e59) bg_cl_pane_g2

0x27ed,	// (0x00081e61) bg_cl_pane_g3

0x27f5,	// (0x00081e69) bg_cl_pane_g4

0x27fd,	// (0x00081e71) bg_cl_pane_g5

0x2805,	// (0x00081e79) bg_cl_pane_g6

0x280d,	// (0x00081e81) bg_cl_pane_g7

0x2815,	// (0x00081e89) bg_cl_pane_g8

0x281d,	// (0x00081e91) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0008f111) bg_cl_pane_g

0xb894,	// (0x0008af08) aid_height_cl_leading_ParamLimits

0xb894,	// (0x0008af08) aid_height_cl_leading

0xb8a0,	// (0x0008af14) aid_height_cl_text_ParamLimits

0xb8a0,	// (0x0008af14) aid_height_cl_text

0x222f,	// (0x000818a3) bg_cl_header_pane_ParamLimits

0x222f,	// (0x000818a3) bg_cl_header_pane

0xb8b8,	// (0x0008af2c) cl_header_pane_g1_ParamLimits

0xb8b8,	// (0x0008af2c) cl_header_pane_g1

0xb8c5,	// (0x0008af39) cl_header_pane_t1_ParamLimits

0xb8c5,	// (0x0008af39) cl_header_pane_t1

0x2825,	// (0x00081e99) cl_list_pane

0x23c5,	// (0x00081a39) hc_scroll_pane_cp01

0xe5cc,	// (0x0008dc40) bg_cl_header_pane_g1

0x22ab,	// (0x0008191f) bg_cl_header_pane_g2

0xe5ec,	// (0x0008dc60) bg_cl_header_pane_g3

0x22bb,	// (0x0008192f) bg_cl_header_pane_g4

0x22b3,	// (0x00081927) bg_cl_header_pane_g5

0x24f8,	// (0x00081b6c) bg_cl_header_pane_g6

0x22d3,	// (0x00081947) bg_cl_header_pane_g7

0x22db,	// (0x0008194f) bg_cl_header_pane_g8

0x22cb,	// (0x0008193f) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0008f124) bg_cl_header_pane_g

0xb8d7,	// (0x0008af4b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb8d7,	// (0x0008af4b) hc_cl_list_double_graphic_heading_pane

0xb8ee,	// (0x0008af62) hc_cl_list_single_graphic_pane_ParamLimits

0xb8ee,	// (0x0008af62) hc_cl_list_single_graphic_pane

0xb90e,	// (0x0008af82) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb90e,	// (0x0008af82) hc_cl_list_single_graphic_pane_g1

0xb91a,	// (0x0008af8e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb91a,	// (0x0008af8e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0008f137) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0008f137) hc_cl_list_single_graphic_pane_g

0xb92e,	// (0x0008afa2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb92e,	// (0x0008afa2) hc_cl_list_single_graphic_pane_t1

0xb90e,	// (0x0008af82) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb90e,	// (0x0008af82) hc_cl_list_double_graphic_heading_pane_g1

0xb943,	// (0x0008afb7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb943,	// (0x0008afb7) hc_cl_list_double_graphic_heading_pane_g2

0xb957,	// (0x0008afcb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb957,	// (0x0008afcb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x0008f13c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x0008f13c) hc_cl_list_double_graphic_heading_pane_g

0xb96b,	// (0x0008afdf) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb96b,	// (0x0008afdf) hc_cl_list_double_graphic_heading_pane_t1

0xb980,	// (0x0008aff4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb980,	// (0x0008aff4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0008f143) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0008f143) hc_cl_list_double_graphic_heading_pane_t

0xb99d,	// (0x0008b011) vid4_progress_pane_g1

0xb9ad,	// (0x0008b021) vid4_progress_pane_g2

0xe80d,	// (0x0008de81) vid4_progress_pane_g3

0xa878,	// (0x00089eec) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0008f148) vid4_progress_pane_g

0xb9bd,	// (0x0008b031) vid4_progress_pane_t1

0xb9d2,	// (0x0008b046) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x0008f153) vid4_progress_pane_t

0xb9fd,	// (0x0008b071) wait_bar_pane_cp07

0x15f2,	// (0x00080c66) blid_firmament_pane_ParamLimits

0x1635,	// (0x00080ca9) popup_blid_sat_info2_window_g1

0x1659,	// (0x00080ccd) popup_blid_sat_info2_window_t3

0x1667,	// (0x00080cdb) popup_blid_sat_info2_window_t4

0x1675,	// (0x00080ce9) popup_blid_sat_info2_window_t5

0x1683,	// (0x00080cf7) popup_blid_sat_info2_window_t6

0x1693,	// (0x00080d07) popup_blid_sat_info2_window_t7

0x16a1,	// (0x00080d15) popup_blid_sat_info2_window_t8

0x16af,	// (0x00080d23) popup_blid_sat_info2_window_t9

0x16bd,	// (0x00080d31) popup_blid_sat_info2_window_t10

0x1781,	// (0x00080df5) aid_firma_cardinal_ParamLimits

0x1795,	// (0x00080e09) blid_firmament_pane_t1_ParamLimits

0x17ac,	// (0x00080e20) blid_firmament_pane_t2_ParamLimits

0x17c3,	// (0x00080e37) blid_firmament_pane_t3_ParamLimits

0x17da,	// (0x00080e4e) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0008ed66) blid_firmament_pane_t_ParamLimits

0x17f1,	// (0x00080e65) blid_sat_info_pane_ParamLimits

0xf0d9,	// (0x0008e74d) main_cam_set_pane_ParamLimits

0x9dac,	// (0x00089420) aid_size_cell_colour_35_ParamLimits

0x9dc6,	// (0x0008943a) aid_size_cell_colour_112_ParamLimits

0x9ddd,	// (0x00089451) aid_size_cell_effect_ParamLimits

0xf0d9,	// (0x0008e74d) bg_tb_trans_pane_cp02_ParamLimits

0xf055,	// (0x0008e6c9) heading_imed_pane_ParamLimits

0x9df7,	// (0x0008946b) listscroll_imed_pane_ParamLimits

0x0990,	// (0x00080004) popup_call2_audio_first_window_g5_ParamLimits

0x0990,	// (0x00080004) popup_call2_audio_first_window_g5

0xa515,	// (0x00089b89) aid_size_touch_image3_arrow_left_ParamLimits

0xa515,	// (0x00089b89) aid_size_touch_image3_arrow_left

0xa52b,	// (0x00089b9f) aid_size_touch_image3_arrow_right_ParamLimits

0xa52b,	// (0x00089b9f) aid_size_touch_image3_arrow_right

0xb9e8,	// (0x0008b05c) vid4_progress_pane_t3

0xa09e,	// (0x00089712) main_hwr_training_symbol_option_pane_ParamLimits

0xa09e,	// (0x00089712) main_hwr_training_symbol_option_pane

0x2020,	// (0x00081694) popup_hwr_training_preview_window_ParamLimits

0x2020,	// (0x00081694) popup_hwr_training_preview_window

0xa0ff,	// (0x00089773) hwr_training_navi_pane_g5_ParamLimits

0xa0ff,	// (0x00089773) hwr_training_navi_pane_g5

0x2299,	// (0x0008190d) popup_char_count_window

0xb364,	// (0x0008a9d8) bg_popup_sub_pane_cp20_ParamLimits

0xb372,	// (0x0008a9e6) list_vitu2_match_list_pane_ParamLimits

0xb37e,	// (0x0008a9f2) vitu2_page_scroll_pane_ParamLimits

0xb37e,	// (0x0008a9f2) vitu2_page_scroll_pane

0x2877,	// (0x00081eeb) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2877,	// (0x00081eeb) list_single_hwr_training_symbol_option_pane

0x288a,	// (0x00081efe) list_single_hwr_training_symbol_option_pane_g1

0x2892,	// (0x00081f06) list_single_hwr_training_symbol_option_pane_t1

0x28a0,	// (0x00081f14) bg_button_pane_cp023

0x28a9,	// (0x00081f1d) bg_button_pane_cp024

0xba0d,	// (0x0008b081) vitu2_page_scroll_pane_g1

0xba15,	// (0x0008b089) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0008f15a) vitu2_page_scroll_pane_g

0xba1d,	// (0x0008b091) vitu2_page_scroll_pane_t1

0x1552,	// (0x00080bc6) popup_char_count_window_g1

0x28dc,	// (0x00081f50) popup_char_count_window_g2

0x28e5,	// (0x00081f59) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0008f15f) popup_char_count_window_g

0x28ee,	// (0x00081f62) popup_char_count_window_t1

0xf061,	// (0x0008e6d5) main_vded2_pane

0x1d1f,	// (0x00081393) aid_size_cell_imed_line

0x1d29,	// (0x0008139d) grid_imed_line_width_pane

0xa976,	// (0x00089fea) vid4_indicators_pane_g4

0x28fc,	// (0x00081f70) cell_imed_line_width_pane_ParamLimits

0x28fc,	// (0x00081f70) cell_imed_line_width_pane

0x2910,	// (0x00081f84) cell_imed_line_width_pane_g1

0x2919,	// (0x00081f8d) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0008f166) cell_imed_line_width_pane_g

0xba2c,	// (0x0008b0a0) main_vded2_pane_g1_ParamLimits

0xba2c,	// (0x0008b0a0) main_vded2_pane_g1

0xba39,	// (0x0008b0ad) main_vded2_pane_g2_ParamLimits

0xba39,	// (0x0008b0ad) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0008f16b) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0008f16b) main_vded2_pane_g

0xba47,	// (0x0008b0bb) vded2_slider_pane_ParamLimits

0xba47,	// (0x0008b0bb) vded2_slider_pane

0xba54,	// (0x0008b0c8) aid_size_touch_vded2_end

0xba5e,	// (0x0008b0d2) aid_size_touch_vded2_playhead

0x2921,	// (0x00081f95) aid_size_touch_vded2_start

0x2929,	// (0x00081f9d) vded2_slider_bg_pane

0x2932,	// (0x00081fa6) vded2_slider_pane_g1

0x293b,	// (0x00081faf) vded2_slider_pane_g2

0xba66,	// (0x0008b0da) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x0008f170) vded2_slider_pane_g

0x2943,	// (0x00081fb7) vded2_slider_bg_pane_g1

0x294c,	// (0x00081fc0) vded2_slider_bg_pane_g2

0x2955,	// (0x00081fc9) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0008f177) vded2_slider_bg_pane_g

0x8192,	// (0x00087806) aid_postcard_touch_down_pane_ParamLimits

0x8192,	// (0x00087806) aid_postcard_touch_down_pane

0x81a2,	// (0x00087816) aid_postcard_touch_up_pane_ParamLimits

0x81a2,	// (0x00087816) aid_postcard_touch_up_pane

0xf061,	// (0x0008e6d5) main_blid2_pane

0x1374,	// (0x000809e8) popup_blid2_search_window

0xf061,	// (0x0008e6d5) blid2_gps_pane

0xf061,	// (0x0008e6d5) blid2_navig_pane

0xf061,	// (0x0008e6d5) blid2_search_pane

0xf061,	// (0x0008e6d5) blid2_tripm_pane

0xba6f,	// (0x0008b0e3) blid2_search_pane_g1_ParamLimits

0xba6f,	// (0x0008b0e3) blid2_search_pane_g1

0xba7f,	// (0x0008b0f3) blid2_search_pane_t1_ParamLimits

0xba7f,	// (0x0008b0f3) blid2_search_pane_t1

0xba91,	// (0x0008b105) aid_size_cell_blid2_gps_ParamLimits

0xba91,	// (0x0008b105) aid_size_cell_blid2_gps

0xbaa1,	// (0x0008b115) blid2_gps_pane_g1_ParamLimits

0xbaa1,	// (0x0008b115) blid2_gps_pane_g1

0xbaad,	// (0x0008b121) grid_blid2_satellite_pane_ParamLimits

0xbaad,	// (0x0008b121) grid_blid2_satellite_pane

0xbabd,	// (0x0008b131) blid2_navig_pane_g1_ParamLimits

0xbabd,	// (0x0008b131) blid2_navig_pane_g1

0xbac9,	// (0x0008b13d) blid2_navig_pane_t1_ParamLimits

0xbac9,	// (0x0008b13d) blid2_navig_pane_t1

0xbadb,	// (0x0008b14f) blid2_navig_pane_t2_ParamLimits

0xbadb,	// (0x0008b14f) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x0008f17e) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x0008f17e) blid2_navig_pane_t

0xbaed,	// (0x0008b161) blid2_navig_ring_pane_ParamLimits

0xbaed,	// (0x0008b161) blid2_navig_ring_pane

0xbafd,	// (0x0008b171) blid2_speed_pane_ParamLimits

0xbafd,	// (0x0008b171) blid2_speed_pane

0xbb09,	// (0x0008b17d) blid2_tripm_pane_g1_ParamLimits

0xbb09,	// (0x0008b17d) blid2_tripm_pane_g1

0xbb19,	// (0x0008b18d) blid2_tripm_pane_g2_ParamLimits

0xbb19,	// (0x0008b18d) blid2_tripm_pane_g2

0xbb25,	// (0x0008b199) blid2_tripm_pane_g3_ParamLimits

0xbb25,	// (0x0008b199) blid2_tripm_pane_g3

0xbb31,	// (0x0008b1a5) blid2_tripm_pane_g4_ParamLimits

0xbb31,	// (0x0008b1a5) blid2_tripm_pane_g4

0xbb3d,	// (0x0008b1b1) blid2_tripm_pane_g5_ParamLimits

0xbb3d,	// (0x0008b1b1) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x0008f183) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x0008f183) blid2_tripm_pane_g

0xbb59,	// (0x0008b1cd) blid2_tripm_pane_t1_ParamLimits

0xbb59,	// (0x0008b1cd) blid2_tripm_pane_t1

0xbb6d,	// (0x0008b1e1) blid2_tripm_pane_t2_ParamLimits

0xbb6d,	// (0x0008b1e1) blid2_tripm_pane_t2

0xbb81,	// (0x0008b1f5) blid2_tripm_pane_t3_ParamLimits

0xbb81,	// (0x0008b1f5) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x0008f190) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x0008f190) blid2_tripm_pane_t

0xbbb3,	// (0x0008b227) cell_blid2_satellite_pane_ParamLimits

0xbbb3,	// (0x0008b227) cell_blid2_satellite_pane

0xbbcd,	// (0x0008b241) cell_blid2_satellite_pane_g1

0x295e,	// (0x00081fd2) cell_blid2_satellite_pane_t1

0x1801,	// (0x00080e75) blid2_speed_pane_g1

0x296c,	// (0x00081fe0) blid2_speed_pane_t1

0x297a,	// (0x00081fee) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0008f199) blid2_speed_pane_t

0x1801,	// (0x00080e75) blid2_navig_ring_pane_g1

0xbbd6,	// (0x0008b24a) blid2_navig_ring_pane_g2

0xbbde,	// (0x0008b252) blid2_navig_ring_pane_g3

0xbbe6,	// (0x0008b25a) blid2_navig_ring_pane_g4

0xbbee,	// (0x0008b262) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x0008f19e) blid2_navig_ring_pane_g

0xf061,	// (0x0008e6d5) bg_popup_window_pane_cp011

0x2988,	// (0x00081ffc) popup_blid2_search_window_g1

0x2990,	// (0x00082004) popup_blid2_search_window_t1

0x299e,	// (0x00082012) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0008f1a9) popup_blid2_search_window_t

0xe4db,	// (0x0008db4f) main_browser_pane_g1

0xe1da,	// (0x0008d84e) main_browser_pane_ParamLimits

0xa93e,	// (0x00089fb2) bg_button_pane_cp011_ParamLimits

0xac1d,	// (0x0008a291) cell_vitu2_function_pane_g1_ParamLimits

0x1366,	// (0x000809da) bg_popup_sub_pane_cp22_ParamLimits

0xb523,	// (0x0008ab97) input_focus_pane_cp08_ParamLimits

0xb53a,	// (0x0008abae) popup_vitu2_query_button_pane_ParamLimits

0xb53a,	// (0x0008abae) popup_vitu2_query_button_pane

0xb54b,	// (0x0008abbf) popup_vitu2_query_input_button_pane

0x254d,	// (0x00081bc1) popup_vitu2_query_window_g1_ParamLimits

0xb555,	// (0x0008abc9) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0008f0aa) popup_vitu2_query_window_g_ParamLimits

0xf061,	// (0x0008e6d5) bg_button_pane_cp026

0xbbf6,	// (0x0008b26a) popup_vitu2_query_input_button_pane_g1

0xf061,	// (0x0008e6d5) bg_button_pane_cp025

0x29ac,	// (0x00082020) popup_vitu2_query_button_pane_t1

0x92ee,	// (0x00088962) main_mp3_pane_t6

0x92fe,	// (0x00088972) popup_slider_window_cp01

0xa85f,	// (0x00089ed3) cam4_battery_pane

0xa94c,	// (0x00089fc0) cam4_battery_pane_cp02

0xb995,	// (0x0008b009) cam4_battery_pane_cp01

0xb995,	// (0x0008b009) cam4_battery_pane_cp03

0x29ba,	// (0x0008202e) cam4_battery_pane_g1

0x1801,	// (0x00080e75) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x0008f1ae) cam4_battery_pane_g

0x16cb,	// (0x00080d3f) popup_blid_sat_info2_window_t11

0x7a63,	// (0x000870d7) aid_size_touch_mv_arrow_left_ParamLimits

0x7a8e,	// (0x00087102) aid_size_touch_mv_arrow_right_ParamLimits

0xebc4,	// (0x0008e238) navi_pane_g1_ParamLimits

0x7acd,	// (0x00087141) navi_pane_g2_ParamLimits

0x7afb,	// (0x0008716f) navi_pane_g3_ParamLimits

0xf404,	// (0x0008ea78) navi_pane_g_ParamLimits

0x7b55,	// (0x000871c9) navi_pane_mv_t1_ParamLimits

0x9e03,	// (0x00089477) grid_imed_effect_pane_ParamLimits

0x66a7,	// (0x00085d1b) aid_placing_vt_slider_lsc

0xe42a,	// (0x0008da9e) aid_placing_vt_slider_prt

0xf0d9,	// (0x0008e74d) bg_tb_trans_pane_cp01_ParamLimits

0x1988,	// (0x00080ffc) popup_image_details_window_g1_ParamLimits

0x199b,	// (0x0008100f) popup_image_details_window_g2_ParamLimits

0x19b0,	// (0x00081024) popup_image_details_window_g3_ParamLimits

0x19b0,	// (0x00081024) popup_image_details_window_g3

0xf737,	// (0x0008edab) popup_image_details_window_g_ParamLimits

0x19c4,	// (0x00081038) popup_image_details_window_t1_ParamLimits

0x19d6,	// (0x0008104a) popup_image_details_window_t2_ParamLimits

0x19ef,	// (0x00081063) popup_image_details_window_t3_ParamLimits

0x1a03,	// (0x00081077) popup_image_details_window_t4_ParamLimits

0x1a1e,	// (0x00081092) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0008edb2) popup_image_details_window_t_ParamLimits

0xb8ac,	// (0x0008af20) cl_header_name_pane_ParamLimits

0xb8ac,	// (0x0008af20) cl_header_name_pane

0xbbfe,	// (0x0008b272) cl_header_name_pane_t1_ParamLimits

0xbbfe,	// (0x0008b272) cl_header_name_pane_t1

0xbc15,	// (0x0008b289) cl_header_name_pane_t2_ParamLimits

0xbc15,	// (0x0008b289) cl_header_name_pane_t2

0xbc3f,	// (0x0008b2b3) cl_header_name_pane_t3_ParamLimits

0xbc3f,	// (0x0008b2b3) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x0008f1b3) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x0008f1b3) cl_header_name_pane_t

0x7b26,	// (0x0008719a) navi_pane_mv_g2_ParamLimits

0x2256,	// (0x000818ca) field_vitu2_entry_pane_g1_ParamLimits

0x2262,	// (0x000818d6) field_vitu2_entry_pane_g2_ParamLimits

0x226e,	// (0x000818e2) field_vitu2_entry_pane_g3_ParamLimits

0x226e,	// (0x000818e2) field_vitu2_entry_pane_g3

0xf935,	// (0x0008efa9) field_vitu2_entry_pane_g_ParamLimits

0xabad,	// (0x0008a221) cell_vitu2_itu_pane_g1_ParamLimits

0xabbd,	// (0x0008a231) cell_vitu2_itu_pane_g2_ParamLimits

0xabbd,	// (0x0008a231) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0008efb5) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0008efb5) cell_vitu2_itu_pane_g

0xa93e,	// (0x00089fb2) bg_vkb2_func_pane_cp05_ParamLimits

0xa93e,	// (0x00089fb2) bg_vkb2_func_pane_cp05

0xa93e,	// (0x00089fb2) bg_vkb2_func_pane_cp03

0xa93e,	// (0x00089fb2) bg_vkb2_func_pane_cp04

0xa93e,	// (0x00089fb2) bg_vkb2_func_pane_cp10_ParamLimits

0xa93e,	// (0x00089fb2) bg_vkb2_func_pane_cp10

0xb84e,	// (0x0008aec2) bg_vkb2_func_pane_cp08

0xb834,	// (0x0008aea8) bg_vkb2_func_pane_cp06

0xb842,	// (0x0008aeb6) bg_vkb2_func_pane_cp07

0x28b2,	// (0x00081f26) bg_vkb2_func_pane_cp11_ParamLimits

0x28b2,	// (0x00081f26) bg_vkb2_func_pane_cp11

0x28c7,	// (0x00081f3b) bg_vkb2_func_pane_cp12_ParamLimits

0x28c7,	// (0x00081f3b) bg_vkb2_func_pane_cp12

0xf061,	// (0x0008e6d5) bg_vkb2_func_pane_cp09

0x22ab,	// (0x0008191f) bg_vkb2_func_pane_g1

0xe5ec,	// (0x0008dc60) bg_vkb2_func_pane_g2

0x22b3,	// (0x00081927) bg_vkb2_func_pane_g3

0x22bb,	// (0x0008192f) bg_vkb2_func_pane_g4

0x24f8,	// (0x00081b6c) bg_vkb2_func_pane_g5

0x22d3,	// (0x00081947) bg_vkb2_func_pane_g6

0x22db,	// (0x0008194f) bg_vkb2_func_pane_g7

0x22cb,	// (0x0008193f) bg_vkb2_func_pane_g8

0xe5cc,	// (0x0008dc40) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x0008f1ba) bg_vkb2_func_pane_g

0xbb4b,	// (0x0008b1bf) blid2_tripm_pane_g6_ParamLimits

0xbb4b,	// (0x0008b1bf) blid2_tripm_pane_g6

0x20d8,	// (0x0008174c) mp4_progress_pane_g1

0xbba7,	// (0x0008b21b) blid2_tripm_values_pane_ParamLimits

0xbba7,	// (0x0008b21b) blid2_tripm_values_pane

0xbc64,	// (0x0008b2d8) blid2_tripm_values_pane_t1

0xbc72,	// (0x0008b2e6) blid2_tripm_values_pane_t2

0xbc80,	// (0x0008b2f4) blid2_tripm_values_pane_t3

0xbc8e,	// (0x0008b302) blid2_tripm_values_pane_t4

0xbc9c,	// (0x0008b310) blid2_tripm_values_pane_t5

0xbcaa,	// (0x0008b31e) blid2_tripm_values_pane_t6

0xbcb8,	// (0x0008b32c) blid2_tripm_values_pane_t7

0xbcc6,	// (0x0008b33a) blid2_tripm_values_pane_t8

0xbcd4,	// (0x0008b348) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x0008f1cd) blid2_tripm_values_pane_t

0x66e7,	// (0x00085d5b) call_video_pane_t1_ParamLimits

0x6708,	// (0x00085d7c) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0008e901) call_video_pane_t_ParamLimits

0x8089,	// (0x000876fd) msg_header_pane_g1_ParamLimits

0xeddf,	// (0x0008e453) msg_header_pane_g2_ParamLimits

0xeddf,	// (0x0008e453) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0008eb1b) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0008eb1b) msg_header_pane_g

0xe1da,	// (0x0008d84e) main_clock2_pane_ParamLimits

0x9b99,	// (0x0008920d) grid_clock2_toolbar_pane_ParamLimits

0x9b99,	// (0x0008920d) grid_clock2_toolbar_pane

0x9b99,	// (0x0008920d) listscroll_clock2_pane_ParamLimits

0x9b99,	// (0x0008920d) listscroll_clock2_pane

0x9c36,	// (0x000892aa) main_clock2_pane_t3_ParamLimits

0x9c36,	// (0x000892aa) main_clock2_pane_t3

0x9c48,	// (0x000892bc) main_clock2_pane_t4_ParamLimits

0x9c48,	// (0x000892bc) main_clock2_pane_t4

0x29c4,	// (0x00082038) cell_clock2_toolbar_pane

0x29cc,	// (0x00082040) cell_clock2_toolbar_pane_cp01

0x29cc,	// (0x00082040) cell_clock2_toolbar_pane_cp02

0x29d4,	// (0x00082048) cell_clock2_toolbar_pane_cp03

0x29dc,	// (0x00082050) list_clock2_pane

0xeb17,	// (0x0008e18b) scroll_pane_cp10

0x29e4,	// (0x00082058) list_single_clock2_pane_ParamLimits

0x29e4,	// (0x00082058) list_single_clock2_pane

0xec64,	// (0x0008e2d8) list_highlight_pane_cp08

0x29f1,	// (0x00082065) list_single_clock2_pane_t1

0x29ff,	// (0x00082073) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x0008f1e0) list_single_clock2_pane_t

0xf061,	// (0x0008e6d5) bg_button_pane_cp10

0x2a0d,	// (0x00082081) cell_clock2_toolbar_pane_g1

0x80f4,	// (0x00087768) aid_main_viewer_pane_g1_ParamLimits

0x80f4,	// (0x00087768) aid_main_viewer_pane_g1

0x8100,	// (0x00087774) aid_main_viewer_pane_g2_ParamLimits

0x8100,	// (0x00087774) aid_main_viewer_pane_g2

0x810c,	// (0x00087780) aid_main_viewer_pane_g3_ParamLimits

0x810c,	// (0x00087780) aid_main_viewer_pane_g3

0x811d,	// (0x00087791) aid_main_viewer_pane_g4_ParamLimits

0x811d,	// (0x00087791) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0008eb2c) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0008eb2c) aid_main_viewer_pane_g

0x88ad,	// (0x00087f21) main_calc_pane_ParamLimits

0x88ba,	// (0x00087f2e) main_dialer2_pane_ParamLimits

0xf061,	// (0x0008e6d5) main_cam6_pane

0xf061,	// (0x0008e6d5) main_vid6_pane

0x9ba5,	// (0x00089219) listscroll_gen_pane_cp06_ParamLimits

0x9ba5,	// (0x00089219) listscroll_gen_pane_cp06

0x9c5a,	// (0x000892ce) main_clock2_pane_t5_ParamLimits

0x9c5a,	// (0x000892ce) main_clock2_pane_t5

0x9ca9,	// (0x0008931d) aid_call2_pane_cp10_ParamLimits

0x9cbb,	// (0x0008932f) aid_call_pane_cp10_ParamLimits

0xeb99,	// (0x0008e20d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeb99,	// (0x0008e20d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9ccd,	// (0x00089341) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9ccd,	// (0x00089341) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeb99,	// (0x0008e20d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0008ee62) popup_clock_analogue_window_cp10_g_ParamLimits

0x9ce3,	// (0x00089357) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa4c2,	// (0x00089b36) cell_dialer2_keypad_pane_g2_ParamLimits

0xa4c2,	// (0x00089b36) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0008ef48) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0008ef48) cell_dialer2_keypad_pane_g

0xa4de,	// (0x00089b52) cell_dialer2_keypad_pane_t1

0xaee3,	// (0x0008a557) main_cset_text2_pane_ParamLimits

0xaee3,	// (0x0008a557) main_cset_text2_pane

0x2735,	// (0x00081da9) area_vitu2_query_pane_g1_ParamLimits

0xb7d3,	// (0x0008ae47) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x0008f0fd) area_vitu2_query_pane_g_ParamLimits

0x27b9,	// (0x00081e2d) area_vitu2_query_pane_t7_ParamLimits

0x27b9,	// (0x00081e2d) area_vitu2_query_pane_t7

0xb834,	// (0x0008aea8) bg_button_pane_cp018_ParamLimits

0xb842,	// (0x0008aeb6) bg_button_pane_cp021_ParamLimits

0xb84e,	// (0x0008aec2) bg_button_pane_cp022_ParamLimits

0xb84e,	// (0x0008aec2) bg_vkb2_func_pane_cp08_ParamLimits

0xb834,	// (0x0008aea8) bg_vkb2_func_pane_cp06_ParamLimits

0xb842,	// (0x0008aeb6) bg_vkb2_func_pane_cp07_ParamLimits

0xb85f,	// (0x0008aed3) input_focus_pane_cp09_ParamLimits

0xbce2,	// (0x0008b356) cam6_autofocus_pane_ParamLimits

0xbce2,	// (0x0008b356) cam6_autofocus_pane

0xbd04,	// (0x0008b378) cam6_image_uncrop_pane_ParamLimits

0xbd04,	// (0x0008b378) cam6_image_uncrop_pane

0xbd31,	// (0x0008b3a5) cam6_indi_pane_ParamLimits

0xbd31,	// (0x0008b3a5) cam6_indi_pane

0xbd4b,	// (0x0008b3bf) cam6_mode_pane_ParamLimits

0xbd4b,	// (0x0008b3bf) cam6_mode_pane

0xbd5f,	// (0x0008b3d3) cam6_timer_pane_ParamLimits

0xbd5f,	// (0x0008b3d3) cam6_timer_pane

0xbd6b,	// (0x0008b3df) cam6_zoom_pane_ParamLimits

0xbd6b,	// (0x0008b3df) cam6_zoom_pane

0xbd83,	// (0x0008b3f7) cam6_mode_pane_g1_ParamLimits

0xbd83,	// (0x0008b3f7) cam6_mode_pane_g1

0xbd8f,	// (0x0008b403) cam6_mode_pane_g2_ParamLimits

0xbd8f,	// (0x0008b403) cam6_mode_pane_g2

0xbd9b,	// (0x0008b40f) cam6_mode_pane_g3_ParamLimits

0xbd9b,	// (0x0008b40f) cam6_mode_pane_g3

0xbda7,	// (0x0008b41b) cam6_mode_pane_g4_ParamLimits

0xbda7,	// (0x0008b41b) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x0008f1e5) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x0008f1e5) cam6_mode_pane_g

0x2a15,	// (0x00082089) bg_tb_trans_pane_cp08_ParamLimits

0x2a15,	// (0x00082089) bg_tb_trans_pane_cp08

0x2a23,	// (0x00082097) cam6_battery_pane_ParamLimits

0x2a23,	// (0x00082097) cam6_battery_pane

0x2a39,	// (0x000820ad) cam6_indi_pane_g1_ParamLimits

0x2a39,	// (0x000820ad) cam6_indi_pane_g1

0x2a4b,	// (0x000820bf) cam6_indi_pane_g2_ParamLimits

0x2a4b,	// (0x000820bf) cam6_indi_pane_g2

0x2a5d,	// (0x000820d1) cam6_indi_pane_g3_ParamLimits

0x2a5d,	// (0x000820d1) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x0008f1ee) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0008f1ee) cam6_indi_pane_g

0x2a6f,	// (0x000820e3) cam6_indi_pane_t1_ParamLimits

0x2a6f,	// (0x000820e3) cam6_indi_pane_t1

0xa9b3,	// (0x0008a027) cam6_autofocus_pane_g1

0xa9ab,	// (0x0008a01f) cam6_autofocus_pane_g2

0xa9c3,	// (0x0008a037) cam6_autofocus_pane_g3

0xa9bb,	// (0x0008a02f) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x0008f1f5) cam6_autofocus_pane_g

0x2a95,	// (0x00082109) cam6_timer_pane_g1

0x2a9d,	// (0x00082111) cam6_timer_pane_t1

0x2aab,	// (0x0008211f) cam6_zoom_cont_pane

0x2ab3,	// (0x00082127) cam6_zoom_pane_g1

0x2abb,	// (0x0008212f) cam6_zoom_pane_g2

0xbdb3,	// (0x0008b427) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x0008f1fe) cam6_zoom_pane_g

0x1801,	// (0x00080e75) cam6_battery_pane_g1

0x1801,	// (0x00080e75) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0008ed6f) cam6_battery_pane_g

0x2ac3,	// (0x00082137) cam6_zoom_cont_pane_g1

0x2acc,	// (0x00082140) cam6_zoom_cont_pane_g2

0x2ad5,	// (0x00082149) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x0008f205) cam6_zoom_cont_pane_g

0xbdd0,	// (0x0008b444) cam6_mode_pane_cp_ParamLimits

0xbdd0,	// (0x0008b444) cam6_mode_pane_cp

0xbde4,	// (0x0008b458) cam6_zoom_pane_cp_ParamLimits

0xbde4,	// (0x0008b458) cam6_zoom_pane_cp

0xbdfc,	// (0x0008b470) vid6_image_uncrop_cif_pane_ParamLimits

0xbdfc,	// (0x0008b470) vid6_image_uncrop_cif_pane

0xbe28,	// (0x0008b49c) vid6_image_uncrop_nhd_pane_ParamLimits

0xbe28,	// (0x0008b49c) vid6_image_uncrop_nhd_pane

0xbe45,	// (0x0008b4b9) vid6_image_uncrop_vga_pane_ParamLimits

0xbe45,	// (0x0008b4b9) vid6_image_uncrop_vga_pane

0xbe64,	// (0x0008b4d8) vid6_image_uncrop_wvga_pane_ParamLimits

0xbe64,	// (0x0008b4d8) vid6_image_uncrop_wvga_pane

0xbe81,	// (0x0008b4f5) vid6_indi_pane_ParamLimits

0xbe81,	// (0x0008b4f5) vid6_indi_pane

0x2a15,	// (0x00082089) bg_tb_trans_pane_cp09_ParamLimits

0x2a15,	// (0x00082089) bg_tb_trans_pane_cp09

0x2aed,	// (0x00082161) cam6_battery_pane_cp_ParamLimits

0x2aed,	// (0x00082161) cam6_battery_pane_cp

0x2af9,	// (0x0008216d) vid6_indi_pane_g1_ParamLimits

0x2af9,	// (0x0008216d) vid6_indi_pane_g1

0x2b0b,	// (0x0008217f) vid6_indi_pane_g2_ParamLimits

0x2b0b,	// (0x0008217f) vid6_indi_pane_g2

0x2b1d,	// (0x00082191) vid6_indi_pane_g3_ParamLimits

0x2b1d,	// (0x00082191) vid6_indi_pane_g3

0x2b32,	// (0x000821a6) vid6_indi_pane_g4_ParamLimits

0x2b32,	// (0x000821a6) vid6_indi_pane_g4

0x2b47,	// (0x000821bb) vid6_indi_pane_g5_ParamLimits

0x2b47,	// (0x000821bb) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x0008f20c) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x0008f20c) vid6_indi_pane_g

0x2b61,	// (0x000821d5) vid6_indi_pane_t1_ParamLimits

0x2b61,	// (0x000821d5) vid6_indi_pane_t1

0x2b77,	// (0x000821eb) vid6_indi_pane_t2_ParamLimits

0x2b77,	// (0x000821eb) vid6_indi_pane_t2

0x2b9f,	// (0x00082213) vid6_indi_pane_t3_ParamLimits

0x2b9f,	// (0x00082213) vid6_indi_pane_t3

0x2bc7,	// (0x0008223b) vid6_indi_pane_t4_ParamLimits

0x2bc7,	// (0x0008223b) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x0008f217) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x0008f217) vid6_indi_pane_t

0x2beb,	// (0x0008225f) wait_bar_pane_cp08

0xbea4,	// (0x0008b518) main_cset_text2_pane_t1_ParamLimits

0xbea4,	// (0x0008b518) main_cset_text2_pane_t1

0xbdbb,	// (0x0008b42f) listscroll_gen_pane_cp06_t1_ParamLimits

0xbdbb,	// (0x0008b42f) listscroll_gen_pane_cp06_t1

0xf061,	// (0x0008e6d5) main_cam6_set_pane

0xa851,	// (0x00089ec5) bg_tb_trans_pane_cp06_ParamLimits

0xa867,	// (0x00089edb) cam4_indicators_pane_g1_ParamLimits

0xa878,	// (0x00089eec) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0008ef85) cam4_indicators_pane_g_ParamLimits

0xa896,	// (0x00089f0a) cam4_indicators_pane_t1_ParamLimits

0xa93e,	// (0x00089fb2) bg_tb_trans_pane_cp07_ParamLimits

0xa867,	// (0x00089edb) vid4_indicators_pane_g1_ParamLimits

0xa954,	// (0x00089fc8) vid4_indicators_pane_g2_ParamLimits

0xa965,	// (0x00089fd9) vid4_indicators_pane_g3_ParamLimits

0xa976,	// (0x00089fea) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0008ef97) vid4_indicators_pane_g_ParamLimits

0xa992,	// (0x0008a006) vid4_indicators_pane_t1_ParamLimits

0xb99d,	// (0x0008b011) vid4_progress_pane_g1_ParamLimits

0xb9ad,	// (0x0008b021) vid4_progress_pane_g2_ParamLimits

0xe80d,	// (0x0008de81) vid4_progress_pane_g3_ParamLimits

0xa878,	// (0x00089eec) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0008f148) vid4_progress_pane_g_ParamLimits

0xb9bd,	// (0x0008b031) vid4_progress_pane_t1_ParamLimits

0xb9d2,	// (0x0008b046) vid4_progress_pane_t2_ParamLimits

0xb9e8,	// (0x0008b05c) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x0008f153) vid4_progress_pane_t_ParamLimits

0xb9fd,	// (0x0008b071) wait_bar_pane_cp07_ParamLimits

0xbee2,	// (0x0008b556) main_cam6_set_pane_g2_ParamLimits

0xbee2,	// (0x0008b556) main_cam6_set_pane_g2

0xbeee,	// (0x0008b562) main_cset6_listscroll_pane_ParamLimits

0xbeee,	// (0x0008b562) main_cset6_listscroll_pane

0xbf19,	// (0x0008b58d) main_cset6_slider_pane_ParamLimits

0xbf19,	// (0x0008b58d) main_cset6_slider_pane

0xbf25,	// (0x0008b599) main_cset6_text2_pane_ParamLimits

0xbf25,	// (0x0008b599) main_cset6_text2_pane

0x2bfa,	// (0x0008226e) main_cset6_text_pane

0x2c02,	// (0x00082276) main_cset_list_pane_copy1_ParamLimits

0x2c02,	// (0x00082276) main_cset_list_pane_copy1

0x2c12,	// (0x00082286) scroll_pane_cp028_copy1

0xbf38,	// (0x0008b5ac) cset_list_set_pane_copy1

0xbf52,	// (0x0008b5c6) aid_position_infowindow_above_copy1

0xbf5a,	// (0x0008b5ce) aid_position_infowindow_below_copy1

0x4740,	// (0x00083db4) cset_list_set_pane_g1_copy1

0x2c1b,	// (0x0008228f) cset_list_set_pane_g3_copy1_ParamLimits

0x2c1b,	// (0x0008228f) cset_list_set_pane_g3_copy1

0x2c2a,	// (0x0008229e) cset_list_set_pane_t1_copy1_ParamLimits

0x2c2a,	// (0x0008229e) cset_list_set_pane_t1_copy1

0xf0d9,	// (0x0008e74d) list_highlight_pane_cp021_copy1_ParamLimits

0xf0d9,	// (0x0008e74d) list_highlight_pane_cp021_copy1

0x2c3f,	// (0x000822b3) cset6_slider_pane_ParamLimits

0x2c3f,	// (0x000822b3) cset6_slider_pane

0x2c6b,	// (0x000822df) main_cset6_slider_pane_g1_ParamLimits

0x2c6b,	// (0x000822df) main_cset6_slider_pane_g1

0xbf62,	// (0x0008b5d6) main_cset6_slider_pane_g2_ParamLimits

0xbf62,	// (0x0008b5d6) main_cset6_slider_pane_g2

0x23da,	// (0x00081a4e) main_cset6_slider_pane_g3_ParamLimits

0x23da,	// (0x00081a4e) main_cset6_slider_pane_g3

0xbf8a,	// (0x0008b5fe) main_cset6_slider_pane_g4_ParamLimits

0xbf8a,	// (0x0008b5fe) main_cset6_slider_pane_g4

0xbf96,	// (0x0008b60a) main_cset6_slider_pane_g5_ParamLimits

0xbf96,	// (0x0008b60a) main_cset6_slider_pane_g5

0x23da,	// (0x00081a4e) main_cset6_slider_pane_g7_ParamLimits

0x23da,	// (0x00081a4e) main_cset6_slider_pane_g7

0x23e6,	// (0x00081a5a) main_cset6_slider_pane_g8_ParamLimits

0x23e6,	// (0x00081a5a) main_cset6_slider_pane_g8

0xbfa4,	// (0x0008b618) main_cset6_slider_pane_g9_ParamLimits

0xbfa4,	// (0x0008b618) main_cset6_slider_pane_g9

0xbfb0,	// (0x0008b624) main_cset6_slider_pane_g10_ParamLimits

0xbfb0,	// (0x0008b624) main_cset6_slider_pane_g10

0xbf8a,	// (0x0008b5fe) main_cset6_slider_pane_g11_ParamLimits

0xbf8a,	// (0x0008b5fe) main_cset6_slider_pane_g11

0xbfbc,	// (0x0008b630) main_cset6_slider_pane_g12_ParamLimits

0xbfbc,	// (0x0008b630) main_cset6_slider_pane_g12

0xbfc8,	// (0x0008b63c) main_cset6_slider_pane_g13_ParamLimits

0xbfc8,	// (0x0008b63c) main_cset6_slider_pane_g13

0xbfd6,	// (0x0008b64a) main_cset6_slider_pane_g14_ParamLimits

0xbfd6,	// (0x0008b64a) main_cset6_slider_pane_g14

0xbfe4,	// (0x0008b658) main_cset6_slider_pane_g15_ParamLimits

0xbfe4,	// (0x0008b658) main_cset6_slider_pane_g15

0xbf96,	// (0x0008b60a) main_cset6_slider_pane_g16_ParamLimits

0xbf96,	// (0x0008b60a) main_cset6_slider_pane_g16

0xbffc,	// (0x0008b670) main_cset6_slider_pane_g17_ParamLimits

0xbffc,	// (0x0008b670) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x0008f220) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x0008f220) main_cset6_slider_pane_g

0x2c93,	// (0x00082307) main_cset6_slider_pane_t1_ParamLimits

0x2c93,	// (0x00082307) main_cset6_slider_pane_t1

0xc00a,	// (0x0008b67e) main_cset6_slider_pane_t2_ParamLimits

0xc00a,	// (0x0008b67e) main_cset6_slider_pane_t2

0xc035,	// (0x0008b6a9) main_cset6_slider_pane_t3_ParamLimits

0xc035,	// (0x0008b6a9) main_cset6_slider_pane_t3

0xc060,	// (0x0008b6d4) main_cset6_slider_pane_t4_ParamLimits

0xc060,	// (0x0008b6d4) main_cset6_slider_pane_t4

0xc08d,	// (0x0008b701) main_cset6_slider_pane_t5_ParamLimits

0xc08d,	// (0x0008b701) main_cset6_slider_pane_t5

0x2cd4,	// (0x00082348) main_cset6_slider_pane_t7_ParamLimits

0x2cd4,	// (0x00082348) main_cset6_slider_pane_t7

0xc0ba,	// (0x0008b72e) main_cset6_slider_pane_t8_ParamLimits

0xc0ba,	// (0x0008b72e) main_cset6_slider_pane_t8

0xc0de,	// (0x0008b752) main_cset6_slider_pane_t9_ParamLimits

0xc0de,	// (0x0008b752) main_cset6_slider_pane_t9

0xc102,	// (0x0008b776) main_cset6_slider_pane_t10_ParamLimits

0xc102,	// (0x0008b776) main_cset6_slider_pane_t10

0xc126,	// (0x0008b79a) main_cset6_slider_pane_t11_ParamLimits

0xc126,	// (0x0008b79a) main_cset6_slider_pane_t11

0x2d0a,	// (0x0008237e) main_cset6_slider_pane_t14_ParamLimits

0x2d0a,	// (0x0008237e) main_cset6_slider_pane_t14

0x2d43,	// (0x000823b7) main_cset6_slider_pane_t15_ParamLimits

0x2d43,	// (0x000823b7) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x0008f245) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x0008f245) main_cset6_slider_pane_t

0x249e,	// (0x00081b12) cset_slider_pane_g1_copy1

0x24a7,	// (0x00081b1b) cset_slider_pane_g2_copy1

0x24b0,	// (0x00081b24) cset_slider_pane_g3_copy1

0xf061,	// (0x0008e6d5) bg_popup_sub_pane_cp011_copy1

0x2559,	// (0x00081bcd) main_cset_text_pane_g1_copy1

0x2561,	// (0x00081bd5) main_cset_text_pane_t1_copy1

0x256f,	// (0x00081be3) main_cset_text_pane_t2_copy1

0x257d,	// (0x00081bf1) main_cset_text_pane_t3_copy1

0x258b,	// (0x00081bff) main_cset_text_pane_t4_copy1

0x2599,	// (0x00081c0d) main_cset_text_pane_t5_copy1

0x25a7,	// (0x00081c1b) main_cset_text_pane_t6_copy1

0x25b5,	// (0x00081c29) main_cset_text_pane_t7_copy1

0xc14c,	// (0x0008b7c0) main_cset_text2_pane_t1_copy1

0xf061,	// (0x0008e6d5) main_ncimui_pane

0x88f9,	// (0x00087f6d) popup_query_ncimui_window_ParamLimits

0x88f9,	// (0x00087f6d) popup_query_ncimui_window

0x4335,	// (0x000839a9) field_cale_ev2_pane_g4_ParamLimits

0x4335,	// (0x000839a9) field_cale_ev2_pane_g4

0xa1e0,	// (0x00089854) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa1e0,	// (0x00089854) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0008ef23) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0008ef23) cell_video_dialer_keypad_pane_g

0xa1f8,	// (0x0008986c) cell_video_dialer_keypad_pane_t1

0xf061,	// (0x0008e6d5) bg_popup_window_pane_cp012

0xe9e7,	// (0x0008e05b) heading_pane_cp06

0x2e6b,	// (0x000824df) ncim_query_content_pane

0xf061,	// (0x0008e6d5) bg_popup_heading_pane_cp01

0x2e73,	// (0x000824e7) ncim_heading_pane_t1

0x2e81,	// (0x000824f5) ncim_indicator_popup_pane

0x2e93,	// (0x00082507) ncim_query_button_pane

0x2ea7,	// (0x0008251b) ncim_query_content_pane_t1

0x2eb9,	// (0x0008252d) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0008f284) ncim_query_content_pane_t

0x2ef3,	// (0x00082567) ncim_query_list_pane

0x2f05,	// (0x00082579) ncim_query_popup_pane

0x2e81,	// (0x000824f5) ncim_indicator_popup_pane_ParamLimits

0xc279,	// (0x0008b8ed) ncim_query_content_pane_g1_ParamLimits

0xc279,	// (0x0008b8ed) ncim_query_content_pane_g1

0x2ea7,	// (0x0008251b) ncim_query_content_pane_t1_ParamLimits

0x2eb9,	// (0x0008252d) ncim_query_content_pane_t2_ParamLimits

0xc285,	// (0x0008b8f9) ncim_query_content_pane_t3_ParamLimits

0xc285,	// (0x0008b8f9) ncim_query_content_pane_t3

0xc2a2,	// (0x0008b916) ncim_query_content_pane_t4_ParamLimits

0xc2a2,	// (0x0008b916) ncim_query_content_pane_t4

0xc2bf,	// (0x0008b933) ncim_query_content_pane_t5_ParamLimits

0xc2bf,	// (0x0008b933) ncim_query_content_pane_t5

0x2ecb,	// (0x0008253f) ncim_query_content_pane_t6_ParamLimits

0x2ecb,	// (0x0008253f) ncim_query_content_pane_t6

0xfc10,	// (0x0008f284) ncim_query_content_pane_t_ParamLimits

0x2ef3,	// (0x00082567) ncim_query_list_pane_ParamLimits

0x2f05,	// (0x00082579) ncim_query_popup_pane_ParamLimits

0x2f19,	// (0x0008258d) wait_bar_pane_cp04

0xf061,	// (0x0008e6d5) input_focus_pane_cp011

0x2f21,	// (0x00082595) ncim_query_popup_pane_t1

0x2f2f,	// (0x000825a3) ncim_list_query_list_pane_ParamLimits

0x2f2f,	// (0x000825a3) ncim_list_query_list_pane

0xf061,	// (0x0008e6d5) bg_button_pane_cp027

0x2f42,	// (0x000825b6) ncim_query_button_pane_g1

0xf061,	// (0x0008e6d5) list_highlight_pane_cp012

0x2f4c,	// (0x000825c0) ncim_list_query_list_pane_g1

0x2f54,	// (0x000825c8) ncim_list_query_list_pane_t1

0xa887,	// (0x00089efb) cam4_indicators_pane_g3_ParamLimits

0xa887,	// (0x00089efb) cam4_indicators_pane_g3

0xa982,	// (0x00089ff6) vid4_indicators_pane_g5_ParamLimits

0xa982,	// (0x00089ff6) vid4_indicators_pane_g5

0xa887,	// (0x00089efb) vid4_progress_pane_g5_ParamLimits

0xa887,	// (0x00089efb) vid4_progress_pane_g5

0xc192,	// (0x0008b806) main_ncimui_pane_g1

0xc1e8,	// (0x0008b85c) ncimui_group_query_pane_ParamLimits

0xc1e8,	// (0x0008b85c) ncimui_group_query_pane

0xc224,	// (0x0008b898) ncimui_list_pane_ParamLimits

0xc224,	// (0x0008b898) ncimui_list_pane

0xc245,	// (0x0008b8b9) ncimui_text_pane_ParamLimits

0xc245,	// (0x0008b8b9) ncimui_text_pane

0xc2dc,	// (0x0008b950) ncimui_text_pane_t1_ParamLimits

0xc2dc,	// (0x0008b950) ncimui_text_pane_t1

0x2f62,	// (0x000825d6) ncimui_list_single_graphic_pane_ParamLimits

0x2f62,	// (0x000825d6) ncimui_list_single_graphic_pane

0xc2fb,	// (0x0008b96f) ncimui_query_pane_ParamLimits

0xc2fb,	// (0x0008b96f) ncimui_query_pane

0xf061,	// (0x0008e6d5) list_highlight_pane_cp013

0x2f72,	// (0x000825e6) ncim_list_query_list_pane_t1_copy1

0x2f4c,	// (0x000825c0) ncim_list_single_graphic_pane_g1

0x2f80,	// (0x000825f4) ncim_query_button_pane_cp01

0x2f8c,	// (0x00082600) ncim_query_entry_pane_ParamLimits

0x2f8c,	// (0x00082600) ncim_query_entry_pane

0x2f9f,	// (0x00082613) ncimui_query_pane_g1

0x2fab,	// (0x0008261f) ncimui_query_pane_t1_ParamLimits

0x2fab,	// (0x0008261f) ncimui_query_pane_t1

0xf0d9,	// (0x0008e74d) input_focus_pane_cp012

0x2fc4,	// (0x00082638) ncim_query_entry_pane_t1

0xe1da,	// (0x0008d84e) main_im_pane_ParamLimits

0xf0d9,	// (0x0008e74d) main_mobtv_pane_ParamLimits

0xf0d9,	// (0x0008e74d) main_mobtv_pane

0xbfa4,	// (0x0008b618) main_cset6_slider_pane_g18_ParamLimits

0xbfa4,	// (0x0008b618) main_cset6_slider_pane_g18

0xbfc8,	// (0x0008b63c) main_cset6_slider_pane_g19_ParamLimits

0xbfc8,	// (0x0008b63c) main_cset6_slider_pane_g19

0x226e,	// (0x000818e2) bg_main_mobtv_pane_ParamLimits

0x226e,	// (0x000818e2) bg_main_mobtv_pane

0xc30e,	// (0x0008b982) main_mobtv_info_pane

0xc319,	// (0x0008b98d) main_mobtv_loading_pane_ParamLimits

0xc319,	// (0x0008b98d) main_mobtv_loading_pane

0x2fd6,	// (0x0008264a) main_mobtv_pg_channel_list_pane

0x2fe0,	// (0x00082654) main_mobtv_pg_hdr_pane

0xc326,	// (0x0008b99a) main_mobtv_programe_curr_pane_ParamLimits

0xc326,	// (0x0008b99a) main_mobtv_programe_curr_pane

0xc333,	// (0x0008b9a7) main_mobtv_programe_next_pane_ParamLimits

0xc333,	// (0x0008b9a7) main_mobtv_programe_next_pane

0x2fe9,	// (0x0008265d) popup_mobtv_noti_window

0x1801,	// (0x00080e75) main_tv_pg_hdr_pane_g1

0x2ff1,	// (0x00082665) main_tv_pg_hdr_pane_g2

0x2ff9,	// (0x0008266d) main_tv_pg_hdr_pane_g3

0x3001,	// (0x00082675) main_tv_pg_hdr_pane_g4

0x3009,	// (0x0008267d) main_tv_pg_hdr_pane_g5

0x3013,	// (0x00082687) main_tv_pg_hdr_pane_g6

0x301d,	// (0x00082691) main_tv_pg_hdr_pane_g7

0x3027,	// (0x0008269b) main_tv_pg_hdr_pane_g8

0x3031,	// (0x000826a5) main_tv_pg_hdr_pane_g9

0x303b,	// (0x000826af) main_tv_pg_hdr_pane_g10

0x3045,	// (0x000826b9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x0008f291) main_tv_pg_hdr_pane_g

0x304f,	// (0x000826c3) main_tv_pg_hdr_pane_t1

0x305d,	// (0x000826d1) main_tv_pg_hdr_pane_t2

0x306b,	// (0x000826df) main_tv_pg_hdr_pane_t3

0x307b,	// (0x000826ef) main_tv_pg_hdr_pane_t4

0x308b,	// (0x000826ff) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0008f2a8) main_tv_pg_hdr_pane_t

0x309b,	// (0x0008270f) single_mobtv_pg_channel_pane_ParamLimits

0x309b,	// (0x0008270f) single_mobtv_pg_channel_pane

0x30ad,	// (0x00082721) single_mobtv_pg_channel_table_pane

0x30b6,	// (0x0008272a) single_mobtv_pg_channel_thumb_pane

0x30bf,	// (0x00082733) single_tv_pg_channel_pane_g1

0x30c8,	// (0x0008273c) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x0008f2b3) single_tv_pg_channel_pane_g

0x1a68,	// (0x000810dc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1a68,	// (0x000810dc) bg_single_mobtv_pg_channel_thumb_pane

0x30d1,	// (0x00082745) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x30d1,	// (0x00082745) single_mobtv_pg_channel_thumb_pane_g1

0x30df,	// (0x00082753) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x30df,	// (0x00082753) single_mobtv_pg_channel_thumb_pane_g2

0x30eb,	// (0x0008275f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x30eb,	// (0x0008275f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x0008f2b8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x0008f2b8) single_mobtv_pg_channel_thumb_pane_g

0x30f7,	// (0x0008276b) single_mobtv_pg_channel_thumb_pane_t1

0x3105,	// (0x00082779) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x0008f2bf) single_mobtv_pg_channel_thumb_pane_t

0x1801,	// (0x00080e75) bg_single_mobtv_pg_channel_table_pane_g1

0x1801,	// (0x00080e75) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0008ed6f) bg_single_mobtv_pg_channel_table_pane_g

0x3113,	// (0x00082787) single_mobtv_pg_channel_table_pane_t1

0x3121,	// (0x00082795) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0008f2c4) single_mobtv_pg_channel_table_pane_t

0xc348,	// (0x0008b9bc) main_mobtv_info_pane_g1_ParamLimits

0xc348,	// (0x0008b9bc) main_mobtv_info_pane_g1

0xc364,	// (0x0008b9d8) main_mobtv_info_pane_t1_ParamLimits

0xc364,	// (0x0008b9d8) main_mobtv_info_pane_t1

0xc3dc,	// (0x0008ba50) main_mobtv_info_pane_t2_ParamLimits

0xc3dc,	// (0x0008ba50) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x0008f2ce) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x0008f2ce) main_mobtv_info_pane_t

0xc46b,	// (0x0008badf) wait_bar_pane_cp05

0xc47d,	// (0x0008baf1) main_mobtv_loading_pane_g1_ParamLimits

0xc47d,	// (0x0008baf1) main_mobtv_loading_pane_g1

0xc48b,	// (0x0008baff) main_mobtv_loading_pane_g2_ParamLimits

0xc48b,	// (0x0008baff) main_mobtv_loading_pane_g2

0xc497,	// (0x0008bb0b) main_mobtv_loading_pane_g3_ParamLimits

0xc497,	// (0x0008bb0b) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0008f2d5) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0008f2d5) main_mobtv_loading_pane_g

0x312f,	// (0x000827a3) main_mobtv_loading_pane_t1_ParamLimits

0x312f,	// (0x000827a3) main_mobtv_loading_pane_t1

0x3147,	// (0x000827bb) main_mobtv_loading_pane_t2_ParamLimits

0x3147,	// (0x000827bb) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x0008f2dc) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x0008f2dc) main_mobtv_loading_pane_t

0xc4a5,	// (0x0008bb19) wait_bar_pane_cp06_ParamLimits

0xc4a5,	// (0x0008bb19) wait_bar_pane_cp06

0x316b,	// (0x000827df) main_mobtv_programe_curr_pane_t1

0x3179,	// (0x000827ed) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x0008f2e1) main_mobtv_programe_curr_pane_t

0x3187,	// (0x000827fb) main_mobtv_programe_next_pane_t1

0x3195,	// (0x00082809) main_mobtv_programe_next_pane_t2

0x31a3,	// (0x00082817) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x0008f2e6) main_mobtv_programe_next_pane_t

0xf061,	// (0x0008e6d5) bg_popup_mobtv_noti_window_pane

0x31b1,	// (0x00082825) popup_mobtv_noti_window_g1

0x31b9,	// (0x0008282d) popup_mobtv_noti_window_t1

0x31c7,	// (0x0008283b) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x0008f2ed) popup_mobtv_noti_window_t

0x1801,	// (0x00080e75) bg_popup_mobtv_noti_window_pane_g1

0xf061,	// (0x0008e6d5) sc_clock_pane

0xf061,	// (0x0008e6d5) main_fs_bigclock_pane

0xbb95,	// (0x0008b209) blid2_tripm_pane_t4_ParamLimits

0xbb95,	// (0x0008b209) blid2_tripm_pane_t4

0xc4b1,	// (0x0008bb25) sc_clock_pane_g1_ParamLimits

0xc4b1,	// (0x0008bb25) sc_clock_pane_g1

0xc4bf,	// (0x0008bb33) sc_clock_pane_t1_ParamLimits

0xc4bf,	// (0x0008bb33) sc_clock_pane_t1

0xc4d2,	// (0x0008bb46) sc_clock_pane_t2_ParamLimits

0xc4d2,	// (0x0008bb46) sc_clock_pane_t2

0xc4e4,	// (0x0008bb58) sc_clock_pane_t3_ParamLimits

0xc4e4,	// (0x0008bb58) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x0008f2f2) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x0008f2f2) sc_clock_pane_t

0xd196,	// (0x0008c80a) main_fs_bigclock_indicator_pane_ParamLimits

0xd196,	// (0x0008c80a) main_fs_bigclock_indicator_pane

0xc570,	// (0x0008bbe4) main_fs_bigclock_pane_g1_ParamLimits

0xc570,	// (0x0008bbe4) main_fs_bigclock_pane_g1

0xd1a2,	// (0x0008c816) main_fs_bigclock_pane_t1_ParamLimits

0xd1a2,	// (0x0008c816) main_fs_bigclock_pane_t1

0xd1b4,	// (0x0008c828) main_fs_bigclock_pane_t2_ParamLimits

0xd1b4,	// (0x0008c828) main_fs_bigclock_pane_t2

0xd1c6,	// (0x0008c83a) main_fs_bigclock_pane_t3_ParamLimits

0xd1c6,	// (0x0008c83a) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0008f4f6) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0008f4f6) main_fs_bigclock_pane_t

0x3e78,	// (0x000834ec) main_fs_bigclock_indicator_pane_g1

0x2e9b,	// (0x0008250f) ncim_query_content_pane_g2_ParamLimits

0x2e9b,	// (0x0008250f) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x0008f27f) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x0008f27f) ncim_query_content_pane_g

0xc4f8,	// (0x0008bb6c) sc_clock_pane_t4_ParamLimits

0xc4f8,	// (0x0008bb6c) sc_clock_pane_t4

0xf0d9,	// (0x0008e74d) main_radioblah_pane

0x21bf,	// (0x00081833) cell_call4_button_pane_t1_copy1_ParamLimits

0x21bf,	// (0x00081833) cell_call4_button_pane_t1_copy1

0xc19a,	// (0x0008b80e) main_ncimui_pane_t1_ParamLimits

0xc19a,	// (0x0008b80e) main_ncimui_pane_t1

0xc1b4,	// (0x0008b828) main_ncimui_pane_t2_ParamLimits

0xc1b4,	// (0x0008b828) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0008f278) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0008f278) main_ncimui_pane_t

0x3310,	// (0x00082984) main_radioblah_anim_pane_ParamLimits

0x3310,	// (0x00082984) main_radioblah_anim_pane

0x3321,	// (0x00082995) main_radioblah_info_pane_ParamLimits

0x3321,	// (0x00082995) main_radioblah_info_pane

0x3335,	// (0x000829a9) main_radioblah_pane_t1_ParamLimits

0x3335,	// (0x000829a9) main_radioblah_pane_t1

0x3351,	// (0x000829c5) main_radioblah_pane_t2_ParamLimits

0x3351,	// (0x000829c5) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x0008f313) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x0008f313) main_radioblah_pane_t

0xc5c2,	// (0x0008bc36) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc5c2,	// (0x0008bc36) main_radioblah_rocker_ctrl_pane

0x3399,	// (0x00082a0d) main_radioblah_info_pane_t1_ParamLimits

0x3399,	// (0x00082a0d) main_radioblah_info_pane_t1

0xc607,	// (0x0008bc7b) main_radioblah_info_pane_t2_ParamLimits

0xc607,	// (0x0008bc7b) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x0008f31c) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x0008f31c) main_radioblah_info_pane_t

0x1801,	// (0x00080e75) main_radioblah_rocker_ctrl_pane_g1

0xc6b7,	// (0x0008bd2b) main_radioblah_rocker_ctrl_pane_g2

0xc6bf,	// (0x0008bd33) main_radioblah_rocker_ctrl_pane_g3

0xc6c7,	// (0x0008bd3b) main_radioblah_rocker_ctrl_pane_g4

0xc6cf,	// (0x0008bd43) main_radioblah_rocker_ctrl_pane_g5

0xc6d7,	// (0x0008bd4b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x0008f325) main_radioblah_rocker_ctrl_pane_g

0xc14c,	// (0x0008b7c0) main_cset_text2_pane_t1_copy1_ParamLimits

0xa7a7,	// (0x00089e1b) cam4_image_uncrop_qvga_pane

0xa8fc,	// (0x00089f70) vid4_image_uncrop_qcif_pane

0xbd23,	// (0x0008b397) cam6_image_uncrop_qvga_pane_ParamLimits

0xbd23,	// (0x0008b397) cam6_image_uncrop_qvga_pane

0x2add,	// (0x00082151) vid6_image_uncrop_qcif_pane_ParamLimits

0x2add,	// (0x00082151) vid6_image_uncrop_qcif_pane

0xf061,	// (0x0008e6d5) bg_popup_preview_window_pane_cp03

0x2e4d,	// (0x000824c1) list_cset_text2_pane

0x2e55,	// (0x000824c9) main_cset6_text2_pane_g1

0x2e5d,	// (0x000824d1) main_cset6_text2_pane_t1

0xc6df,	// (0x0008bd53) list_cset_text2_pane_t1_ParamLimits

0xc6df,	// (0x0008bd53) list_cset_text2_pane_t1

0xf0d9,	// (0x0008e74d) main_radioblah_pane_ParamLimits

0xc457,	// (0x0008bacb) main_mobtv_info_pane_t3_ParamLimits

0xc457,	// (0x0008bacb) main_mobtv_info_pane_t3

0xc5b0,	// (0x0008bc24) main_radioblah_pane_g1

0xc5db,	// (0x0008bc4f) main_radioblah_info_pane_g1

0xc65c,	// (0x0008bcd0) main_radioblah_info_pane_t3_ParamLimits

0xc65c,	// (0x0008bcd0) main_radioblah_info_pane_t3

0x74be,	// (0x00086b32) highlight_cell_cale_month_pane_ParamLimits

0x74be,	// (0x00086b32) highlight_cell_cale_month_pane

0xf061,	// (0x0008e6d5) main_phob_fisheye_pane

0x1b7c,	// (0x000811f0) scroll_pane_cp0031_ParamLimits

0x1b7c,	// (0x000811f0) scroll_pane_cp0031

0x2beb,	// (0x0008225f) wait_bar_pane_cp08_ParamLimits

0xbf38,	// (0x0008b5ac) cset_list_set_pane_copy1_ParamLimits

0x33d3,	// (0x00082a47) highlight_cell_cale_month_pane_g1

0xc70a,	// (0x0008bd7e) highlight_cell_cale_month_pane_t1

0x2825,	// (0x00081e99) list_gen_pane_cp01

0x23c5,	// (0x00081a39) scroll_pane_01

0x478f,	// (0x00083e03) list_single_double_fisheye_pane

0x33db,	// (0x00082a4f) list_double_fisheye_pane_g1_ParamLimits

0x33db,	// (0x00082a4f) list_double_fisheye_pane_g1

0x4748,	// (0x00083dbc) list_double_fisheye_pane_g2_ParamLimits

0x4748,	// (0x00083dbc) list_double_fisheye_pane_g2

0x4798,	// (0x00083e0c) list_double_fisheye_pane_g3_ParamLimits

0x4798,	// (0x00083e0c) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x0008f332) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x0008f332) list_double_fisheye_pane_g

0x33f3,	// (0x00082a67) list_double_fisheye_pane_t1_ParamLimits

0x33f3,	// (0x00082a67) list_double_fisheye_pane_t1

0x340e,	// (0x00082a82) list_double_fisheye_pane_t2_ParamLimits

0x340e,	// (0x00082a82) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x0008f33d) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x0008f33d) list_double_fisheye_pane_t

0xf061,	// (0x0008e6d5) main_call5_pane

0xc51e,	// (0x0008bb92) sc_swipe_pane_ParamLimits

0xc51e,	// (0x0008bb92) sc_swipe_pane

0xc724,	// (0x0008bd98) call5_image_pane_ParamLimits

0xc724,	// (0x0008bd98) call5_image_pane

0xc734,	// (0x0008bda8) call5_swipe_1_pane_ParamLimits

0xc734,	// (0x0008bda8) call5_swipe_1_pane

0xc740,	// (0x0008bdb4) call5_swipe_2_pane_ParamLimits

0xc740,	// (0x0008bdb4) call5_swipe_2_pane

0xc75a,	// (0x0008bdce) popup_call5_audio_first_window_ParamLimits

0xc75a,	// (0x0008bdce) popup_call5_audio_first_window

0x1a68,	// (0x000810dc) call5_swipe_1_pane_g1_ParamLimits

0x1a68,	// (0x000810dc) call5_swipe_1_pane_g1

0x3430,	// (0x00082aa4) call5_swipe_1_pane_g2_ParamLimits

0x3430,	// (0x00082aa4) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0008f342) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0008f342) call5_swipe_1_pane_g

0x343c,	// (0x00082ab0) call5_swipe_1_pane_t1_ParamLimits

0x343c,	// (0x00082ab0) call5_swipe_1_pane_t1

0x1a68,	// (0x000810dc) call5_swipe_2_pane_g1_ParamLimits

0x1a68,	// (0x000810dc) call5_swipe_2_pane_g1

0x3451,	// (0x00082ac5) call5_swipe_2_pane_g2_ParamLimits

0x3451,	// (0x00082ac5) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x0008f347) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x0008f347) call5_swipe_2_pane_g

0x345d,	// (0x00082ad1) call5_swipe_2_pane_t1_ParamLimits

0x345d,	// (0x00082ad1) call5_swipe_2_pane_t1

0x3472,	// (0x00082ae6) sc_swipe_pane_g1_ParamLimits

0x3472,	// (0x00082ae6) sc_swipe_pane_g1

0x347f,	// (0x00082af3) sc_swipe_pane_g2_ParamLimits

0x347f,	// (0x00082af3) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x0008f34c) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x0008f34c) sc_swipe_pane_g

0x348b,	// (0x00082aff) sc_swipe_pane_t1_ParamLimits

0x348b,	// (0x00082aff) sc_swipe_pane_t1

0xf061,	// (0x0008e6d5) main_cmail_launcher_pane

0xc768,	// (0x0008bddc) aid_size_cell_cmail_l_ParamLimits

0xc768,	// (0x0008bddc) aid_size_cell_cmail_l

0xc778,	// (0x0008bdec) grid_cmail_l_pane_ParamLimits

0xc778,	// (0x0008bdec) grid_cmail_l_pane

0xc788,	// (0x0008bdfc) cell_cmail_l_pane_ParamLimits

0xc788,	// (0x0008bdfc) cell_cmail_l_pane

0xc79c,	// (0x0008be10) cell_cmail_l_pane_g1_ParamLimits

0xc79c,	// (0x0008be10) cell_cmail_l_pane_g1

0xc7a8,	// (0x0008be1c) cell_cmail_l_pane_t1_ParamLimits

0xc7a8,	// (0x0008be1c) cell_cmail_l_pane_t1

0x34a0,	// (0x00082b14) cell_cmail_l_pane_t2_ParamLimits

0x34a0,	// (0x00082b14) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x0008f351) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x0008f351) cell_cmail_l_pane_t

0xf0d9,	// (0x0008e74d) grid_highlight_pane_cp018_ParamLimits

0xf0d9,	// (0x0008e74d) grid_highlight_pane_cp018

0x57cd,	// (0x00084e41) main2_pane_ParamLimits

0x57cd,	// (0x00084e41) main2_pane

0xe285,	// (0x0008d8f9) popup_sp_fs_action_menu_bg_pane_g1

0xe28d,	// (0x0008d901) popup_sp_fs_action_menu_bg_pane_g2

0xe295,	// (0x0008d909) popup_sp_fs_action_menu_bg_pane_g3

0xe29d,	// (0x0008d911) popup_sp_fs_action_menu_bg_pane_g4

0xe2a5,	// (0x0008d919) popup_sp_fs_action_menu_bg_pane_g5

0xe2ad,	// (0x0008d921) popup_sp_fs_action_menu_bg_pane_g6

0xe2b5,	// (0x0008d929) popup_sp_fs_action_menu_bg_pane_g7

0xe2bd,	// (0x0008d931) popup_sp_fs_action_menu_bg_pane_g8

0xe2c5,	// (0x0008d939) popup_sp_fs_action_menu_bg_pane_g9

0xe2cd,	// (0x0008d941) popup_sp_fs_action_menu_bg_pane_g10

0xe2cd,	// (0x0008d941) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0008e81b) popup_sp_fs_action_menu_bg_pane_g

0x00ca,	// (0x0007f73e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x2_t3_g3_g1

0x00d6,	// (0x0007f74a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x00d6,	// (0x0007f74a) list_medium_line_x2_t3_g3_g2

0x00e2,	// (0x0007f756) list_medium_line_x2_t3_g3_g3_ParamLimits

0x00e2,	// (0x0007f756) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0008e8cb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0008e8cb) list_medium_line_x2_t3_g3_g

0x00ee,	// (0x0007f762) list_medium_line_x2_t3_g3_t1_ParamLimits

0x00ee,	// (0x0007f762) list_medium_line_x2_t3_g3_t1

0x65e1,	// (0x00085c55) list_medium_line_x2_t3_g3_t2_ParamLimits

0x65e1,	// (0x00085c55) list_medium_line_x2_t3_g3_t2

0x0103,	// (0x0007f777) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0103,	// (0x0007f777) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0008e8d2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0008e8d2) list_medium_line_x2_t3_g3_t

0x00ca,	// (0x0007f73e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x2_t3_g2_g1

0x00e2,	// (0x0007f756) list_medium_line_x2_t3_g2_g2_ParamLimits

0x00e2,	// (0x0007f756) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0008e8d9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0008e8d9) list_medium_line_x2_t3_g2_g

0x0118,	// (0x0007f78c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0118,	// (0x0007f78c) list_medium_line_x2_t3_g2_t1

0x012e,	// (0x0007f7a2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x012e,	// (0x0007f7a2) list_medium_line_x2_t3_g2_t2

0x0140,	// (0x0007f7b4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0140,	// (0x0007f7b4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0008e8de) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0008e8de) list_medium_line_x2_t3_g2_t

0x00ca,	// (0x0007f73e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x2_t4_g4_g1

0x015e,	// (0x0007f7d2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x015e,	// (0x0007f7d2) list_medium_line_x2_t4_g4_g2

0x00d6,	// (0x0007f74a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x00d6,	// (0x0007f74a) list_medium_line_x2_t4_g4_g3

0x016a,	// (0x0007f7de) list_medium_line_x2_t4_g4_g4_ParamLimits

0x016a,	// (0x0007f7de) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0008e8e5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0008e8e5) list_medium_line_x2_t4_g4_g

0x65f3,	// (0x00085c67) list_medium_line_x2_t4_g4_t1_ParamLimits

0x65f3,	// (0x00085c67) list_medium_line_x2_t4_g4_t1

0x660a,	// (0x00085c7e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x660a,	// (0x00085c7e) list_medium_line_x2_t4_g4_t2

0x661f,	// (0x00085c93) list_medium_line_x2_t4_g4_t3_ParamLimits

0x661f,	// (0x00085c93) list_medium_line_x2_t4_g4_t3

0x0176,	// (0x0007f7ea) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0176,	// (0x0007f7ea) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0008e8ee) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0008e8ee) list_medium_line_x2_t4_g4_t

0x00ca,	// (0x0007f73e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x2_t2_g4_g1

0x015e,	// (0x0007f7d2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x015e,	// (0x0007f7d2) list_medium_line_x2_t2_g4_g2

0x00d6,	// (0x0007f74a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x00d6,	// (0x0007f74a) list_medium_line_x2_t2_g4_g3

0x00e2,	// (0x0007f756) list_medium_line_x2_t2_g4_g4_ParamLimits

0x00e2,	// (0x0007f756) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0008e955) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0008e955) list_medium_line_x2_t2_g4_g

0x0188,	// (0x0007f7fc) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0188,	// (0x0007f7fc) list_medium_line_x2_t2_g4_t1

0x0103,	// (0x0007f777) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0103,	// (0x0007f777) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0008e95e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0008e95e) list_medium_line_x2_t2_g4_t

0x00ca,	// (0x0007f73e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x2_t2_g3_g1

0x00d6,	// (0x0007f74a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x00d6,	// (0x0007f74a) list_medium_line_x2_t2_g3_g2

0x00e2,	// (0x0007f756) list_medium_line_x2_t2_g3_g3_ParamLimits

0x00e2,	// (0x0007f756) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0008e8cb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0008e8cb) list_medium_line_x2_t2_g3_g

0x019d,	// (0x0007f811) list_medium_line_x2_t2_g3_t1_ParamLimits

0x019d,	// (0x0007f811) list_medium_line_x2_t2_g3_t1

0x0103,	// (0x0007f777) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0103,	// (0x0007f777) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0008e963) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0008e963) list_medium_line_x2_t2_g3_t

0x773a,	// (0x00086dae) main_sp_fs_list_pane_ParamLimits

0x773a,	// (0x00086dae) main_sp_fs_list_pane

0x7746,	// (0x00086dba) sp_fs_scroll_pane_ParamLimits

0x7746,	// (0x00086dba) sp_fs_scroll_pane

0x7752,	// (0x00086dc6) list_medium_line_x2_t3_t1

0x7762,	// (0x00086dd6) list_medium_line_x2_t3_t2

0x01e0,	// (0x0007f854) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0008e9ae) list_medium_line_x2_t3_t

0x7770,	// (0x00086de4) list_medium_line_x3_t4_t1

0x7780,	// (0x00086df4) list_medium_line_x3_t4_t2

0x01ee,	// (0x0007f862) list_medium_line_x3_t4_t3

0x01e0,	// (0x0007f854) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0008e9b5) list_medium_line_x3_t4_t

0x778e,	// (0x00086e02) list_medium_line_x4_t5_t1

0x779e,	// (0x00086e12) list_medium_line_x4_t5_t2

0x01ee,	// (0x0007f862) list_medium_line_x4_t5_t3

0x01fc,	// (0x0007f870) list_medium_line_x4_t5_t4

0x01e0,	// (0x0007f854) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0008e9be) list_medium_line_x4_t5_t

0x00ca,	// (0x0007f73e) list_medium_line_t4_g4_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_t4_g4_g1

0x016a,	// (0x0007f7de) list_medium_line_t4_g4_g2_ParamLimits

0x016a,	// (0x0007f7de) list_medium_line_t4_g4_g2

0x020a,	// (0x0007f87e) list_medium_line_t4_g4_g3_ParamLimits

0x020a,	// (0x0007f87e) list_medium_line_t4_g4_g3

0x00e2,	// (0x0007f756) list_medium_line_t4_g4_g4_ParamLimits

0x00e2,	// (0x0007f756) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0008e9c9) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0008e9c9) list_medium_line_t4_g4_g

0x0216,	// (0x0007f88a) list_medium_line_t4_g4_t1_ParamLimits

0x0216,	// (0x0007f88a) list_medium_line_t4_g4_t1

0x022b,	// (0x0007f89f) list_medium_line_t4_g4_t2_ParamLimits

0x022b,	// (0x0007f89f) list_medium_line_t4_g4_t2

0x0241,	// (0x0007f8b5) list_medium_line_t4_g4_t3_ParamLimits

0x0241,	// (0x0007f8b5) list_medium_line_t4_g4_t3

0x0103,	// (0x0007f777) list_medium_line_t4_g4_t4_ParamLimits

0x0103,	// (0x0007f777) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0008e9d2) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0008e9d2) list_medium_line_t4_g4_t

0x7893,	// (0x00086f07) chi_dic_find_pane_g1

0x88c8,	// (0x00087f3c) main_tport_pane

0x24ea,	// (0x00081b5e) list_medium_line_plain_t1

0x2500,	// (0x00081b74) list_medium_line_t2_g2_g1_ParamLimits

0x2500,	// (0x00081b74) list_medium_line_t2_g2_g1

0x250c,	// (0x00081b80) list_medium_line_t2_g2_g2_ParamLimits

0x250c,	// (0x00081b80) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0008f08e) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0008f08e) list_medium_line_t2_g2_g

0xb3aa,	// (0x0008aa1e) list_medium_line_t2_g2_t1_ParamLimits

0xb3aa,	// (0x0008aa1e) list_medium_line_t2_g2_t1

0xb3c4,	// (0x0008aa38) list_medium_line_t2_g2_t2_ParamLimits

0xb3c4,	// (0x0008aa38) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0008f093) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0008f093) list_medium_line_t2_g2_t

0x282e,	// (0x00081ea2) aid_sp_fs_list_icon_a_sm

0x4721,	// (0x00083d95) aid_sp_fs_list_icon_d

0x2836,	// (0x00081eaa) aid_sp_fs_text_primary

0x283f,	// (0x00081eb3) aid_sp_fs_text_secondary

0x2848,	// (0x00081ebc) list_medium_line

0x2848,	// (0x00081ebc) list_medium_line_g2

0x2848,	// (0x00081ebc) list_medium_line_g3

0x2848,	// (0x00081ebc) list_medium_line_plain

0x2848,	// (0x00081ebc) list_medium_line_plain_t2

0x2848,	// (0x00081ebc) list_medium_line_plain_t3

0x2848,	// (0x00081ebc) list_medium_line_right_icon

0x2848,	// (0x00081ebc) list_medium_line_right_iconx2

0x2848,	// (0x00081ebc) list_medium_line_t2

0x2848,	// (0x00081ebc) list_medium_line_t2_g2

0x2848,	// (0x00081ebc) list_medium_line_t2_g3

0x2848,	// (0x00081ebc) list_medium_line_t2_right_icon

0x2848,	// (0x00081ebc) list_medium_line_t2_right_iconx2

0x2848,	// (0x00081ebc) list_medium_line_t3

0x2848,	// (0x00081ebc) list_medium_line_t3_g2

0x2848,	// (0x00081ebc) list_medium_line_t3_g3

0x2848,	// (0x00081ebc) list_medium_line_t3_right_iconx2

0x2851,	// (0x00081ec5) list_medium_line_t4_g4

0x4729,	// (0x00083d9d) list_medium_line_x2

0x4729,	// (0x00083d9d) list_medium_line_x2_t2_g2

0x4729,	// (0x00083d9d) list_medium_line_x2_t2_g3

0x4729,	// (0x00083d9d) list_medium_line_x2_t2_g4

0x4729,	// (0x00083d9d) list_medium_line_x2_t3

0x4729,	// (0x00083d9d) list_medium_line_x2_t3_g2

0x4729,	// (0x00083d9d) list_medium_line_x2_t3_g3

0x4729,	// (0x00083d9d) list_medium_line_x2_t3_g4

0x4729,	// (0x00083d9d) list_medium_line_x2_t4_g2

0x4729,	// (0x00083d9d) list_medium_line_x2_t4_g4

0x285a,	// (0x00081ece) list_medium_line_x3

0x285a,	// (0x00081ece) list_medium_line_x3_t4

0x285a,	// (0x00081ece) list_medium_line_x3_t4_g4

0x2851,	// (0x00081ec5) list_medium_line_x4_t4

0x2851,	// (0x00081ec5) list_medium_line_x4_t4_g7

0x2851,	// (0x00081ec5) list_medium_line_x4_t5

0x2863,	// (0x00081ed7) list_single_fs_dyc_pane_ParamLimits

0x2863,	// (0x00081ed7) list_single_fs_dyc_pane

0x00ca,	// (0x0007f73e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x4_t4_g7_g1

0x2d7c,	// (0x000823f0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2d7c,	// (0x000823f0) list_medium_line_x4_t4_g7_g2

0x2d88,	// (0x000823fc) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2d88,	// (0x000823fc) list_medium_line_x4_t4_g7_g3

0x2d97,	// (0x0008240b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2d97,	// (0x0008240b) list_medium_line_x4_t4_g7_g4

0x2da3,	// (0x00082417) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2da3,	// (0x00082417) list_medium_line_x4_t4_g7_g5

0x2db2,	// (0x00082426) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2db2,	// (0x00082426) list_medium_line_x4_t4_g7_g6

0x2dc1,	// (0x00082435) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2dc1,	// (0x00082435) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x0008f25e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x0008f25e) list_medium_line_x4_t4_g7_g

0x2dcd,	// (0x00082441) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2dcd,	// (0x00082441) list_medium_line_x4_t4_g7_t1

0x2de2,	// (0x00082456) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2de2,	// (0x00082456) list_medium_line_x4_t4_g7_t2

0x2df7,	// (0x0008246b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2df7,	// (0x0008246b) list_medium_line_x4_t4_g7_t3

0x2e0c,	// (0x00082480) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2e0c,	// (0x00082480) list_medium_line_x4_t4_g7_t4

0x2e1e,	// (0x00082492) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2e1e,	// (0x00082492) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x0008f26d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x0008f26d) list_medium_line_x4_t4_g7_t

0x2e30,	// (0x000824a4) list_single_dyc_row_pane_ParamLimits

0x2e30,	// (0x000824a4) list_single_dyc_row_pane

0xc718,	// (0x0008bd8c) call5_gesture_pane_ParamLimits

0xc718,	// (0x0008bd8c) call5_gesture_pane

0xc74c,	// (0x0008bdc0) call5_windows_pane_ParamLimits

0xc74c,	// (0x0008bdc0) call5_windows_pane

0xc7be,	// (0x0008be32) call5_swipe_1_pane_cp_ParamLimits

0xc7be,	// (0x0008be32) call5_swipe_1_pane_cp

0xc7ca,	// (0x0008be3e) call5_swipe_2_pane_cp_ParamLimits

0xc7ca,	// (0x0008be3e) call5_swipe_2_pane_cp

0xec64,	// (0x0008e2d8) call5_image_pane_cp

0xc7d6,	// (0x0008be4a) popup_call5_audio_first_window_cp_ParamLimits

0xc7d6,	// (0x0008be4a) popup_call5_audio_first_window_cp

0x3472,	// (0x00082ae6) call5_swipe_1_pane_g1_cp_ParamLimits

0x3472,	// (0x00082ae6) call5_swipe_1_pane_g1_cp

0x34b2,	// (0x00082b26) call5_swipe_1_pane_g2_cp

0x348b,	// (0x00082aff) call5_swipe_1_pane_t1_cp_ParamLimits

0x348b,	// (0x00082aff) call5_swipe_1_pane_t1_cp

0x3472,	// (0x00082ae6) call5_swipe_2_pane_g1_cp_ParamLimits

0x3472,	// (0x00082ae6) call5_swipe_2_pane_g1_cp

0x34ba,	// (0x00082b2e) call5_swipe_2_pane_g2_cp

0x34c2,	// (0x00082b36) call5_swipe_2_pane_t1_cp_ParamLimits

0x34c2,	// (0x00082b36) call5_swipe_2_pane_t1_cp

0xf0d9,	// (0x0008e74d) main_sp_fs_email_pane

0x34d7,	// (0x00082b4b) main_sp_fs_listscroll_pane_te

0x34e0,	// (0x00082b54) popup_sp_fs_action_menu_pane_ParamLimits

0x34e0,	// (0x00082b54) popup_sp_fs_action_menu_pane

0x1801,	// (0x00080e75) bg_sp_fs_ctrlbar_pane_g1

0x3522,	// (0x00082b96) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x352b,	// (0x00082b9f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3534,	// (0x00082ba8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1801,	// (0x00080e75) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x0008f356) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x15e4,	// (0x00080c58) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x15e4,	// (0x00080c58) bg_sp_fs_ctrlbar_ddmenu_pane

0x353d,	// (0x00082bb1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x353d,	// (0x00082bb1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3549,	// (0x00082bbd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3549,	// (0x00082bbd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x0008f35f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x0008f35f) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3555,	// (0x00082bc9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3555,	// (0x00082bc9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x356f,	// (0x00082be3) list_medium_line_t2_right_icon_g1

0xc7e2,	// (0x0008be56) list_medium_line_t2_right_icon_t1

0xc7f2,	// (0x0008be66) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x0008f364) list_medium_line_t2_right_icon_t

0x1366,	// (0x000809da) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1366,	// (0x000809da) bg_sp_fs_ctrlbar_pane

0xc857,	// (0x0008becb) main_sp_fs_ctrlbar_button_pane_cp01

0xc85f,	// (0x0008bed3) main_sp_fs_ctrlbar_ddmenu_pane

0x35af,	// (0x00082c23) main_sp_fs_ctrlbar_pane_g1

0x35bb,	// (0x00082c2f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0008f369) main_sp_fs_ctrlbar_pane_g

0x35c7,	// (0x00082c3b) main_sp_fs_ctrlbar_pane_t1

0xc869,	// (0x0008bedd) main_sp_fs_ctrlbar_pane

0xc883,	// (0x0008bef7) main_sp_fs_listscroll_pane_te_cp01

0xc894,	// (0x0008bf08) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc894,	// (0x0008bf08) popup_sp_fs_action_menu_pane_cp01

0xf0d9,	// (0x0008e74d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0d9,	// (0x0008e74d) bg_sp_fs_highlight_list_pane_cp01

0x35ec,	// (0x00082c60) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x35ec,	// (0x00082c60) sp_fs_action_menu_list_gene_pane_g1

0x35fb,	// (0x00082c6f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x35fb,	// (0x00082c6f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0008f373) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0008f373) sp_fs_action_menu_list_gene_pane_g

0x3608,	// (0x00082c7c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3608,	// (0x00082c7c) sp_fs_action_menu_list_gene_pane_t1

0x3620,	// (0x00082c94) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3620,	// (0x00082c94) sp_fs_action_menu_list_gene_pane

0x363f,	// (0x00082cb3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x363f,	// (0x00082cb3) popup_sp_fs_action_menu_bg_pane

0x364d,	// (0x00082cc1) sp_fs_action_menu_list_pane_ParamLimits

0x364d,	// (0x00082cc1) sp_fs_action_menu_list_pane

0x366d,	// (0x00082ce1) sp_fs_scroll_pane_cp01_ParamLimits

0x366d,	// (0x00082ce1) sp_fs_scroll_pane_cp01

0xc8ac,	// (0x0008bf20) list_medium_line_plain_t2_t1

0xc8bc,	// (0x0008bf30) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0008f378) list_medium_line_plain_t2_t

0xc8ca,	// (0x0008bf3e) list_medium_line_plain_t3_t1

0xc8da,	// (0x0008bf4e) list_medium_line_plain_t3_t2

0xc8e8,	// (0x0008bf5c) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0008f37d) list_medium_line_plain_t3_t

0x00ca,	// (0x0007f73e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x2_t2_g2_g1

0x00e2,	// (0x0007f756) list_medium_line_x2_t2_g2_g2_ParamLimits

0x00e2,	// (0x0007f756) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0008e8d9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0008e8d9) list_medium_line_x2_t2_g2_g

0x0216,	// (0x0007f88a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0216,	// (0x0007f88a) list_medium_line_x2_t2_g2_t1

0x0103,	// (0x0007f777) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0103,	// (0x0007f777) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0008f384) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0008f384) list_medium_line_x2_t2_g2_t

0x00ca,	// (0x0007f73e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x2_t4_g2_g1

0x3693,	// (0x00082d07) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3693,	// (0x00082d07) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0008f389) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0008f389) list_medium_line_x2_t4_g2_g

0xc8f6,	// (0x0008bf6a) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc8f6,	// (0x0008bf6a) list_medium_line_x2_t4_g2_t1

0xc90d,	// (0x0008bf81) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc90d,	// (0x0008bf81) list_medium_line_x2_t4_g2_t2

0xc922,	// (0x0008bf96) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc922,	// (0x0008bf96) list_medium_line_x2_t4_g2_t3

0x0103,	// (0x0007f777) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0103,	// (0x0007f777) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0008f38e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0008f38e) list_medium_line_x2_t4_g2_t

0x36a5,	// (0x00082d19) list_medium_line_t3_right_iconx2_g1

0x356f,	// (0x00082be3) list_medium_line_t3_right_iconx2_g2

0xc934,	// (0x0008bfa8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0008f397) list_medium_line_t3_right_iconx2_g

0xc93c,	// (0x0008bfb0) list_medium_line_t3_right_iconx2_t1

0xc94c,	// (0x0008bfc0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0008f39e) list_medium_line_t3_right_iconx2_t

0x00ca,	// (0x0007f73e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x3_t4_g4_g1

0x00d6,	// (0x0007f74a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x00d6,	// (0x0007f74a) list_medium_line_x3_t4_g4_g2

0x016a,	// (0x0007f7de) list_medium_line_x3_t4_g4_g3_ParamLimits

0x016a,	// (0x0007f7de) list_medium_line_x3_t4_g4_g3

0x36ad,	// (0x00082d21) list_medium_line_x3_t4_g4_g4_ParamLimits

0x36ad,	// (0x00082d21) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0008f3a3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0008f3a3) list_medium_line_x3_t4_g4_g

0xc95a,	// (0x0008bfce) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc95a,	// (0x0008bfce) list_medium_line_x3_t4_g4_t1

0xc971,	// (0x0008bfe5) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc971,	// (0x0008bfe5) list_medium_line_x3_t4_g4_t2

0x36b9,	// (0x00082d2d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x36b9,	// (0x00082d2d) list_medium_line_x3_t4_g4_t3

0x36ce,	// (0x00082d42) list_medium_line_x3_t4_g4_t4_ParamLimits

0x36ce,	// (0x00082d42) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0008f3ac) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0008f3ac) list_medium_line_x3_t4_g4_t

0xc986,	// (0x0008bffa) list_single_dyc_row_text_pane_t1_ParamLimits

0xc986,	// (0x0008bffa) list_single_dyc_row_text_pane_t1

0xc9bd,	// (0x0008c031) list_single_dyc_row_text_pane_t2_ParamLimits

0xc9bd,	// (0x0008c031) list_single_dyc_row_text_pane_t2

0x36eb,	// (0x00082d5f) list_single_dyc_row_text_pane_t3_ParamLimits

0x36eb,	// (0x00082d5f) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0008f3b5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0008f3b5) list_single_dyc_row_text_pane_t

0x36fd,	// (0x00082d71) list_single_dyc_row_pane_g1_ParamLimits

0x36fd,	// (0x00082d71) list_single_dyc_row_pane_g1

0x3709,	// (0x00082d7d) list_single_dyc_row_pane_g2_ParamLimits

0x3709,	// (0x00082d7d) list_single_dyc_row_pane_g2

0x3715,	// (0x00082d89) list_single_dyc_row_pane_g3_ParamLimits

0x3715,	// (0x00082d89) list_single_dyc_row_pane_g3

0x3721,	// (0x00082d95) list_single_dyc_row_pane_g4_ParamLimits

0x3721,	// (0x00082d95) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0008f3bc) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0008f3bc) list_single_dyc_row_pane_g

0x372d,	// (0x00082da1) list_single_dyc_row_text_pane_ParamLimits

0x372d,	// (0x00082da1) list_single_dyc_row_text_pane

0xf061,	// (0x0008e6d5) bg_sp_fs_scroll_pane

0x374c,	// (0x00082dc0) thumb_sp_fs_scroll_pane

0x2500,	// (0x00081b74) list_medium_line_g1_ParamLimits

0x2500,	// (0x00081b74) list_medium_line_g1

0x3755,	// (0x00082dc9) list_medium_line_t1_ParamLimits

0x3755,	// (0x00082dc9) list_medium_line_t1

0x00ca,	// (0x0007f73e) list_medium_line_x2_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x2_g1

0x00d6,	// (0x0007f74a) list_medium_line_x2_g2_ParamLimits

0x00d6,	// (0x0007f74a) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0008f3c5) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0008f3c5) list_medium_line_x2_g

0x376a,	// (0x00082dde) list_medium_line_x2_t1_ParamLimits

0x376a,	// (0x00082dde) list_medium_line_x2_t1

0x00ca,	// (0x0007f73e) list_medium_line_x3_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x3_g1

0x00d6,	// (0x0007f74a) list_medium_line_x3_g2_ParamLimits

0x00d6,	// (0x0007f74a) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0008f3c5) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0008f3c5) list_medium_line_x3_g

0x376a,	// (0x00082dde) list_medium_line_x3_t1_ParamLimits

0x376a,	// (0x00082dde) list_medium_line_x3_t1

0x3780,	// (0x00082df4) thumb_sp_fs_scroll_pane_g1

0x3789,	// (0x00082dfd) thumb_sp_fs_scroll_pane_g2

0x3792,	// (0x00082e06) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008f3ca) thumb_sp_fs_scroll_pane_g

0x3780,	// (0x00082df4) bg_sp_fs_scroll_pane_g1

0x3789,	// (0x00082dfd) bg_sp_fs_scroll_pane_g2

0x3792,	// (0x00082e06) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008f3ca) bg_sp_fs_scroll_pane_g

0x00ca,	// (0x0007f73e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x00ca,	// (0x0007f73e) list_medium_line_x2_t3_g4_g1

0x015e,	// (0x0007f7d2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x015e,	// (0x0007f7d2) list_medium_line_x2_t3_g4_g2

0x00d6,	// (0x0007f74a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x00d6,	// (0x0007f74a) list_medium_line_x2_t3_g4_g3

0x00e2,	// (0x0007f756) list_medium_line_x2_t3_g4_g4_ParamLimits

0x00e2,	// (0x0007f756) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0008e955) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0008e955) list_medium_line_x2_t3_g4_g

0xca17,	// (0x0008c08b) list_medium_line_x2_t3_g4_t1_ParamLimits

0xca17,	// (0x0008c08b) list_medium_line_x2_t3_g4_t1

0xca2d,	// (0x0008c0a1) list_medium_line_x2_t3_g4_t2_ParamLimits

0xca2d,	// (0x0008c0a1) list_medium_line_x2_t3_g4_t2

0x0103,	// (0x0007f777) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0103,	// (0x0007f777) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0008f3d1) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0008f3d1) list_medium_line_x2_t3_g4_t

0x2500,	// (0x00081b74) list_medium_line_g2_g1_ParamLimits

0x2500,	// (0x00081b74) list_medium_line_g2_g1

0x250c,	// (0x00081b80) list_medium_line_g2_g2_ParamLimits

0x250c,	// (0x00081b80) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0008f08e) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0008f08e) list_medium_line_g2_g

0x379b,	// (0x00082e0f) list_medium_line_g2_t1_ParamLimits

0x379b,	// (0x00082e0f) list_medium_line_g2_t1

0x2500,	// (0x00081b74) list_medium_line_t3_g2_g1_ParamLimits

0x2500,	// (0x00081b74) list_medium_line_t3_g2_g1

0x250c,	// (0x00081b80) list_medium_line_t3_g2_g2_ParamLimits

0x250c,	// (0x00081b80) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0008f08e) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0008f08e) list_medium_line_t3_g2_g

0xca46,	// (0x0008c0ba) list_medium_line_t3_g2_t1_ParamLimits

0xca46,	// (0x0008c0ba) list_medium_line_t3_g2_t1

0xca60,	// (0x0008c0d4) list_medium_line_t3_g2_t2_ParamLimits

0xca60,	// (0x0008c0d4) list_medium_line_t3_g2_t2

0xca75,	// (0x0008c0e9) list_medium_line_t3_g2_t3_ParamLimits

0xca75,	// (0x0008c0e9) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0008f3d8) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0008f3d8) list_medium_line_t3_g2_t

0x356f,	// (0x00082be3) list_medium_line_right_icon_g1

0x37b0,	// (0x00082e24) list_medium_line_right_icon_t1

0x2500,	// (0x00081b74) list_medium_line_t2_g1_ParamLimits

0x2500,	// (0x00081b74) list_medium_line_t2_g1

0xca8b,	// (0x0008c0ff) list_medium_line_t2_t1_ParamLimits

0xca8b,	// (0x0008c0ff) list_medium_line_t2_t1

0xcaa5,	// (0x0008c119) list_medium_line_t2_t2_ParamLimits

0xcaa5,	// (0x0008c119) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0008f3df) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0008f3df) list_medium_line_t2_t

0x2500,	// (0x00081b74) list_medium_line_t3_g1_ParamLimits

0x2500,	// (0x00081b74) list_medium_line_t3_g1

0xcaba,	// (0x0008c12e) list_medium_line_t3_t1_ParamLimits

0xcaba,	// (0x0008c12e) list_medium_line_t3_t1

0xcad1,	// (0x0008c145) list_medium_line_t3_t2_ParamLimits

0xcad1,	// (0x0008c145) list_medium_line_t3_t2

0xcae6,	// (0x0008c15a) list_medium_line_t3_t3_ParamLimits

0xcae6,	// (0x0008c15a) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0008f3e4) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0008f3e4) list_medium_line_t3_t

0x2500,	// (0x00081b74) list_medium_line_g3_g1_ParamLimits

0x2500,	// (0x00081b74) list_medium_line_g3_g1

0x37be,	// (0x00082e32) list_medium_line_g3_g2_ParamLimits

0x37be,	// (0x00082e32) list_medium_line_g3_g2

0x250c,	// (0x00081b80) list_medium_line_g3_g3_ParamLimits

0x250c,	// (0x00081b80) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0008f3eb) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0008f3eb) list_medium_line_g3_g

0x37ca,	// (0x00082e3e) list_medium_line_g3_t1_ParamLimits

0x37ca,	// (0x00082e3e) list_medium_line_g3_t1

0x2500,	// (0x00081b74) list_medium_line_t2_g3_g1_ParamLimits

0x2500,	// (0x00081b74) list_medium_line_t2_g3_g1

0x37be,	// (0x00082e32) list_medium_line_t2_g3_g2_ParamLimits

0x37be,	// (0x00082e32) list_medium_line_t2_g3_g2

0x250c,	// (0x00081b80) list_medium_line_t2_g3_g3_ParamLimits

0x250c,	// (0x00081b80) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0008f3eb) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0008f3eb) list_medium_line_t2_g3_g

0xcaf8,	// (0x0008c16c) list_medium_line_t2_g3_t1_ParamLimits

0xcaf8,	// (0x0008c16c) list_medium_line_t2_g3_t1

0xcb0f,	// (0x0008c183) list_medium_line_t2_g3_t2_ParamLimits

0xcb0f,	// (0x0008c183) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0008f3f2) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0008f3f2) list_medium_line_t2_g3_t

0x2500,	// (0x00081b74) list_medium_line_t3_g3_g1_ParamLimits

0x2500,	// (0x00081b74) list_medium_line_t3_g3_g1

0x37be,	// (0x00082e32) list_medium_line_t3_g3_g2_ParamLimits

0x37be,	// (0x00082e32) list_medium_line_t3_g3_g2

0x250c,	// (0x00081b80) list_medium_line_t3_g3_g3_ParamLimits

0x250c,	// (0x00081b80) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0008f3eb) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0008f3eb) list_medium_line_t3_g3_g

0xcb24,	// (0x0008c198) list_medium_line_t3_g3_t1_ParamLimits

0xcb24,	// (0x0008c198) list_medium_line_t3_g3_t1

0xcb38,	// (0x0008c1ac) list_medium_line_t3_g3_t2_ParamLimits

0xcb38,	// (0x0008c1ac) list_medium_line_t3_g3_t2

0xcb4a,	// (0x0008c1be) list_medium_line_t3_g3_t3_ParamLimits

0xcb4a,	// (0x0008c1be) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0008f3f7) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0008f3f7) list_medium_line_t3_g3_t

0x36a5,	// (0x00082d19) list_medium_line_right_iconx2_g1

0x356f,	// (0x00082be3) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008f3fe) list_medium_line_right_iconx2_g

0x37df,	// (0x00082e53) list_medium_line_right_iconx2_t1

0x36a5,	// (0x00082d19) list_medium_line_t2_right_iconx2_g1

0x356f,	// (0x00082be3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008f3fe) list_medium_line_t2_right_iconx2_g

0xcb5c,	// (0x0008c1d0) list_medium_line_t2_right_iconx2_t1

0xcb6c,	// (0x0008c1e0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0008f403) list_medium_line_t2_right_iconx2_t

0x37ed,	// (0x00082e61) list_medium_line_x4_t4_t1

0xcb7a,	// (0x0008c1ee) list_medium_line_x4_t4_t2

0xcb8a,	// (0x0008c1fe) list_medium_line_x4_t4_t3

0xcb9a,	// (0x0008c20e) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0008f408) list_medium_line_x4_t4_t

0xcbd3,	// (0x0008c247) tport_appsw_pane_ParamLimits

0xcbd3,	// (0x0008c247) tport_appsw_pane

0xcbdf,	// (0x0008c253) tport_contact_pane_ParamLimits

0xcbdf,	// (0x0008c253) tport_contact_pane

0xcbef,	// (0x0008c263) tport_listscroll_pane_ParamLimits

0xcbef,	// (0x0008c263) tport_listscroll_pane

0xcbff,	// (0x0008c273) cell_tport_appsw_pane_ParamLimits

0xcbff,	// (0x0008c273) cell_tport_appsw_pane

0x1af9,	// (0x0008116d) tport_appsw_pane_g1_ParamLimits

0x1af9,	// (0x0008116d) tport_appsw_pane_g1

0x37fb,	// (0x00082e6f) tport_contact_pane_g1

0x3804,	// (0x00082e78) tport_contact_pane_t1

0x3812,	// (0x00082e86) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0008f411) tport_contact_pane_t

0x3820,	// (0x00082e94) list_tport_pane

0x3829,	// (0x00082e9d) scroll_pane_cp_030

0x383a,	// (0x00082eae) cell_tport_appsw_pane_g1

0x384a,	// (0x00082ebe) cell_tport_appsw_pane_t1

0xf061,	// (0x0008e6d5) grid_highlight_pane_cp019

0xcc2a,	// (0x0008c29e) list_tport_double_graphic_pane_ParamLimits

0xcc2a,	// (0x0008c29e) list_tport_double_graphic_pane

0xf0d9,	// (0x0008e74d) list_highlight_pane_cp023_ParamLimits

0xf0d9,	// (0x0008e74d) list_highlight_pane_cp023

0xcc3d,	// (0x0008c2b1) list_tport_double_graphic_pane_g1_ParamLimits

0xcc3d,	// (0x0008c2b1) list_tport_double_graphic_pane_g1

0xcc4a,	// (0x0008c2be) list_tport_double_graphic_pane_t1_ParamLimits

0xcc4a,	// (0x0008c2be) list_tport_double_graphic_pane_t1

0xcc5f,	// (0x0008c2d3) list_tport_double_graphic_pane_t2_ParamLimits

0xcc5f,	// (0x0008c2d3) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0008f41d) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0008f41d) list_tport_double_graphic_pane_t

0xf061,	// (0x0008e6d5) main_cale_note_pane

0xab55,	// (0x0008a1c9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xab55,	// (0x0008a1c9) cell_vitu2_function_top_wide_pane_cp01

0xc46b,	// (0x0008badf) wait_bar_pane_cp05_ParamLimits

0xf061,	// (0x0008e6d5) listscroll_cmail_pane

0x3860,	// (0x00082ed4) list_cmail_pane

0xcc7b,	// (0x0008c2ef) list_cmail_body_pane

0xcc9f,	// (0x0008c313) list_single_cmail_header_caption_pane

0xcccd,	// (0x0008c341) list_single_cmail_header_detail_pane_ParamLimits

0xcccd,	// (0x0008c341) list_single_cmail_header_detail_pane

0xcd05,	// (0x0008c379) list_single_cmail_header_caption_pane_t1

0xcd15,	// (0x0008c389) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcd15,	// (0x0008c389) list_single_cmail_header_detail_pane_g1

0x476d,	// (0x00083de1) list_single_cmail_header_detail_pane_g2_ParamLimits

0x476d,	// (0x00083de1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0008f422) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0008f422) list_single_cmail_header_detail_pane_g

0x388d,	// (0x00082f01) list_single_cmail_header_detail_pane_t1_ParamLimits

0x388d,	// (0x00082f01) list_single_cmail_header_detail_pane_t1

0x38bf,	// (0x00082f33) list_single_cmail_header_editor_pane_bg_ParamLimits

0x38bf,	// (0x00082f33) list_single_cmail_header_editor_pane_bg

0x38d1,	// (0x00082f45) list_cmail_body_pane_g1

0x38da,	// (0x00082f4e) list_cmail_body_pane_t1

0x22ab,	// (0x0008191f) list_single_cmail_header_editor_pane_bg_g1

0xe5ec,	// (0x0008dc60) list_single_cmail_header_editor_pane_bg_g1_copy1

0x22bb,	// (0x0008192f) list_single_cmail_header_editor_pane_bg_g1_copy2

0x22b3,	// (0x00081927) list_single_cmail_header_editor_pane_bg_g1_copy3

0x24f8,	// (0x00081b6c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x22db,	// (0x0008194f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x22cb,	// (0x0008193f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x22d3,	// (0x00081947) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe5cc,	// (0x0008dc40) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcd53,	// (0x0008c3c7) calenote_gesture_pane_ParamLimits

0xcd53,	// (0x0008c3c7) calenote_gesture_pane

0xcd6d,	// (0x0008c3e1) calenote_window_pane_ParamLimits

0xcd6d,	// (0x0008c3e1) calenote_window_pane

0x38e8,	// (0x00082f5c) popup_note_window_cp01

0xcd85,	// (0x0008c3f9) calenote_swipe_1_pane_ParamLimits

0xcd85,	// (0x0008c3f9) calenote_swipe_1_pane

0xc7ca,	// (0x0008be3e) calenote_swipe_2_pane_ParamLimits

0xc7ca,	// (0x0008be3e) calenote_swipe_2_pane

0x3472,	// (0x00082ae6) calenote_swipe_1_pane_g1_ParamLimits

0x3472,	// (0x00082ae6) calenote_swipe_1_pane_g1

0x347f,	// (0x00082af3) calenote_swipe_1_pane_g2_ParamLimits

0x347f,	// (0x00082af3) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x0008f34c) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x0008f34c) calenote_swipe_1_pane_g

0x38fa,	// (0x00082f6e) calenote_swipe_1_pane_t1_ParamLimits

0x38fa,	// (0x00082f6e) calenote_swipe_1_pane_t1

0x3472,	// (0x00082ae6) calenote_swipe_2_pane_g1_ParamLimits

0x3472,	// (0x00082ae6) calenote_swipe_2_pane_g1

0x3919,	// (0x00082f8d) calenote_swipe_2_pane_g2_ParamLimits

0x3919,	// (0x00082f8d) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0008f42e) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0008f42e) calenote_swipe_2_pane_g

0x3925,	// (0x00082f99) calenote_swipe_2_pane_t1_ParamLimits

0x3925,	// (0x00082f99) calenote_swipe_2_pane_t1

0xf061,	// (0x0008e6d5) main_mup_navstr_pane

0x98a7,	// (0x00088f1b) main_mup3_pane_t7_ParamLimits

0x98a7,	// (0x00088f1b) main_mup3_pane_t7

0xa2bf,	// (0x00089933) main_mp4_pane_g6_ParamLimits

0xa2bf,	// (0x00089933) main_mp4_pane_g6

0xa641,	// (0x00089cb5) main_image3_pane_t4_ParamLimits

0xa641,	// (0x00089cb5) main_image3_pane_t4

0xcd98,	// (0x0008c40c) popup_navstr_preview_pane_ParamLimits

0xcd98,	// (0x0008c40c) popup_navstr_preview_pane

0xcda4,	// (0x0008c418) scroll_navstr_pane_ParamLimits

0xcda4,	// (0x0008c418) scroll_navstr_pane

0xf061,	// (0x0008e6d5) bg_popup_preview_window_pane_cp04

0x394c,	// (0x00082fc0) popup_navstr_preview_pane_t1

0xcdb0,	// (0x0008c424) scroll_navstr_pane_g1_ParamLimits

0xcdb0,	// (0x0008c424) scroll_navstr_pane_g1

0xcdbd,	// (0x0008c431) scroll_navstr_pane_t1_ParamLimits

0xcdbd,	// (0x0008c431) scroll_navstr_pane_t1

0x38f1,	// (0x00082f65) bg_button_pane_cp014

0x38f1,	// (0x00082f65) bg_button_pane_cp030

0x33e7,	// (0x00082a5b) list_double_fisheye_pane_g4_ParamLimits

0x33e7,	// (0x00082a5b) list_double_fisheye_pane_g4

0x475c,	// (0x00083dd0) list_double_fisheye_pane_g5_ParamLimits

0x475c,	// (0x00083dd0) list_double_fisheye_pane_g5

0x3868,	// (0x00082edc) sp_fs_scroll_pane_cp03

0x35af,	// (0x00082c23) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x35bb,	// (0x00082c2f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0008f369) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x35c7,	// (0x00082c3b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcc71,	// (0x0008c2e5) sp_fs_scroll_pane_cp02

0xe2f0,	// (0x0008d964) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe2f0,	// (0x0008d964) popup_sp_fs_calendar_preview_list_single_pane

0xf061,	// (0x0008e6d5) main_cam6_pano_pane

0xf0d9,	// (0x0008e74d) main_mup3_pane_ParamLimits

0xf061,	// (0x0008e6d5) main_phacti_pane

0xc340,	// (0x0008b9b4) bg_button_pane_cp11

0xc358,	// (0x0008b9cc) main_mobtv_info_pane_g2_ParamLimits

0xc358,	// (0x0008b9cc) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0008f2c9) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0008f2c9) main_mobtv_info_pane_g

0xc50a,	// (0x0008bb7e) sc_clock_pane_t5_ParamLimits

0xc50a,	// (0x0008bb7e) sc_clock_pane_t5

0xc5b0,	// (0x0008bc24) main_radioblah_pane_g1_ParamLimits

0x3369,	// (0x000829dd) main_radioblah_pane_t3_ParamLimits

0x3369,	// (0x000829dd) main_radioblah_pane_t3

0x3381,	// (0x000829f5) main_radioblah_pane_t4_ParamLimits

0x3381,	// (0x000829f5) main_radioblah_pane_t4

0xc5ce,	// (0x0008bc42) main_radioblah_text_pane_ParamLimits

0xc5ce,	// (0x0008bc42) main_radioblah_text_pane

0xc5db,	// (0x0008bc4f) main_radioblah_info_pane_g1_ParamLimits

0xc670,	// (0x0008bce4) main_radioblah_info_pane_t4_ParamLimits

0xc670,	// (0x0008bce4) main_radioblah_info_pane_t4

0xf0d9,	// (0x0008e74d) main_sp_fs_calendar_pane

0xcdcf,	// (0x0008c443) main_phacti_pane_g1

0xcdd7,	// (0x0008c44b) phacti_note_pane_ParamLimits

0xcdd7,	// (0x0008c44b) phacti_note_pane

0x3963,	// (0x00082fd7) phacti_term_pane_ParamLimits

0x3963,	// (0x00082fd7) phacti_term_pane

0x3978,	// (0x00082fec) phacti_note_pane_t1_ParamLimits

0x3978,	// (0x00082fec) phacti_note_pane_t1

0x398f,	// (0x00083003) phacti_term_pane_g1

0x3997,	// (0x0008300b) phacti_term_pane_t1_ParamLimits

0x3997,	// (0x0008300b) phacti_term_pane_t1

0x39c1,	// (0x00083035) popup_sp_fs_calendar_preview_list_single_pane_g1

0x39c9,	// (0x0008303d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0008f438) popup_sp_fs_calendar_preview_list_single_pane_g

0x39d1,	// (0x00083045) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x39d1,	// (0x00083045) popup_sp_fs_calendar_preview_list_single_pane_t1

0x39e7,	// (0x0008305b) aid_popup_sp_fs_bg_corner_pane

0x1801,	// (0x00080e75) popup_sp_fs_calendar_preview_bg_pane_g1

0xf061,	// (0x0008e6d5) popup_sp_fs_calendar_preview_bg_pane

0x39ef,	// (0x00083063) popup_sp_fs_calendar_preview_list_pane

0xf0d9,	// (0x0008e74d) bg_main_sp_fs_cale_pane_ParamLimits

0xf0d9,	// (0x0008e74d) bg_main_sp_fs_cale_pane

0x3a00,	// (0x00083074) listscroll_cale_mrui_pane_ParamLimits

0x3a00,	// (0x00083074) listscroll_cale_mrui_pane

0x3a14,	// (0x00083088) listscroll_sp_fs_schedule_track_pane

0x3a1d,	// (0x00083091) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3a1d,	// (0x00083091) main_sp_fs_ctrlbar_pane_cp01

0x3a2e,	// (0x000830a2) main_sp_fs_ribbon_pane

0x3a36,	// (0x000830aa) popup_sp_fs_cale_preview_window

0xce1a,	// (0x0008c48e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xce1a,	// (0x0008c48e) list_single_sp_fs_schedule_track_pane

0x222f,	// (0x000818a3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x222f,	// (0x000818a3) bg_sp_fs_highlight_list_pane_cp03

0xce42,	// (0x0008c4b6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xce42,	// (0x0008c4b6) list_single_sp_fs_schedule_track_pane_g1

0xce4e,	// (0x0008c4c2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xce4e,	// (0x0008c4c2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0008f43d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0008f43d) list_single_sp_fs_schedule_track_pane_g

0xce5a,	// (0x0008c4ce) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xce5a,	// (0x0008c4ce) list_single_sp_fs_schedule_track_pane_t1

0xce72,	// (0x0008c4e6) sp_fs_schedule_track_pane_ParamLimits

0xce72,	// (0x0008c4e6) sp_fs_schedule_track_pane

0x3a48,	// (0x000830bc) sp_fs_schedule_track_pane_g1

0x3a50,	// (0x000830c4) sp_fs_schedule_track_pane_g2

0x3a58,	// (0x000830cc) sp_fs_schedule_track_pane_g3

0x3a60,	// (0x000830d4) sp_fs_schedule_track_pane_g4

0x3a68,	// (0x000830dc) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0008f442) sp_fs_schedule_track_pane_g

0x22ab,	// (0x0008191f) bg_sp_fs_schedule_viewer_highlight_g1

0xe5ec,	// (0x0008dc60) bg_sp_fs_schedule_viewer_highlight_g2

0x22b3,	// (0x00081927) bg_sp_fs_schedule_viewer_highlight_g3

0x22bb,	// (0x0008192f) bg_sp_fs_schedule_viewer_highlight_g4

0x24f8,	// (0x00081b6c) bg_sp_fs_schedule_viewer_highlight_g5

0x22cb,	// (0x0008193f) bg_sp_fs_schedule_viewer_highlight_g6

0x22d3,	// (0x00081947) bg_sp_fs_schedule_viewer_highlight_g7

0x22db,	// (0x0008194f) bg_sp_fs_schedule_viewer_highlight_g8

0xe5cc,	// (0x0008dc40) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0008f44d) bg_sp_fs_schedule_viewer_highlight_g

0xf061,	// (0x0008e6d5) bg_main_sp_fs_ribbon_pane

0xce82,	// (0x0008c4f6) main_sp_fs_ribbon_pane_g1

0x3a70,	// (0x000830e4) main_sp_fs_ribbon_pane_t1

0xce8d,	// (0x0008c501) main_sp_fs_ribbon_pane_t2

0x3a7f,	// (0x000830f3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0008f460) main_sp_fs_ribbon_pane_t

0x3a8e,	// (0x00083102) main_sp_fs_ribbon_scheduler_pane

0x3a96,	// (0x0008310a) bg_main_sp_fs_ribbon_pane_g1

0x3a9f,	// (0x00083113) bg_main_sp_fs_ribbon_pane_g2

0x3aa8,	// (0x0008311c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0008f467) bg_main_sp_fs_ribbon_pane_g

0x3ab0,	// (0x00083124) main_sp_fs_ribbon_scheduler_pane_g1

0x3ab9,	// (0x0008312d) main_sp_fs_ribbon_scheduler_pane_g2

0x3ac2,	// (0x00083136) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0008f46e) main_sp_fs_ribbon_scheduler_pane_g

0x3acb,	// (0x0008313f) list_cale_mrui_pane

0xce9e,	// (0x0008c512) sp_fs_scroll_pane_cp07_ParamLimits

0xce9e,	// (0x0008c512) sp_fs_scroll_pane_cp07

0xceb4,	// (0x0008c528) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xceb4,	// (0x0008c528) bg_sp_fs_schedule_viewer_highlight

0x3ad4,	// (0x00083148) list_single_sp_fs_schedule_track_pane_cp01

0x3adc,	// (0x00083150) list_sp_fs_schedule_track_pane

0x3ae4,	// (0x00083158) sp_fs_scroll_pane_cp06_ParamLimits

0x3ae4,	// (0x00083158) sp_fs_scroll_pane_cp06

0x1801,	// (0x00080e75) bgmain_sp_fs_calendar_pane_g1

0xcec1,	// (0x0008c535) list_single_cale_mrui_pane_ParamLimits

0xcec1,	// (0x0008c535) list_single_cale_mrui_pane

0x3af6,	// (0x0008316a) list_single_cale_mrui_row_pane_ParamLimits

0x3af6,	// (0x0008316a) list_single_cale_mrui_row_pane

0x3b03,	// (0x00083177) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3b03,	// (0x00083177) list_single_cale_mrui_row_pane_g1

0x3b48,	// (0x000831bc) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3b48,	// (0x000831bc) list_single_cale_mrui_row_pane_t1

0xcef0,	// (0x0008c564) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcef0,	// (0x0008c564) list_single_cale_mrui_row_pane_t2

0x3b5a,	// (0x000831ce) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3b5a,	// (0x000831ce) list_single_cale_mrui_row_pane_t3

0x3b89,	// (0x000831fd) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3b89,	// (0x000831fd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x0008f47c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x0008f47c) list_single_cale_mrui_row_pane_t

0xcf56,	// (0x0008c5ca) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcf56,	// (0x0008c5ca) list_single_cmail_header_editor_pane_bg_cp01

0xcf78,	// (0x0008c5ec) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcf78,	// (0x0008c5ec) list_single_cmail_header_editor_pane_bg_cp02

0xcf94,	// (0x0008c608) main_radioblah_text_pane_t1_ParamLimits

0xcf94,	// (0x0008c608) main_radioblah_text_pane_t1

0x3bb8,	// (0x0008322c) cam6_indi_pane_cp01

0x3bc0,	// (0x00083234) cam6_mode_pane_cp01

0x3bc8,	// (0x0008323c) cam6_pano_pane

0x3bd1,	// (0x00083245) cam6_zoom_pane_cp01

0x3bd9,	// (0x0008324d) cam6_pano_image_pane

0x3be4,	// (0x00083258) cam6_pano_pane_g1

0x30c8,	// (0x0008273c) cam6_pano_pane_g2

0x3bed,	// (0x00083261) cam6_pano_pane_g3

0x3bf6,	// (0x0008326a) cam6_pano_pane_g4

0x1dd0,	// (0x00081444) cam6_pano_pane_g5

0x3bff,	// (0x00083273) cam6_pano_pane_g6

0x3c09,	// (0x0008327d) cam6_pano_pane_g7

0x3c11,	// (0x00083285) cam6_pano_pane_g8

0x3c1a,	// (0x0008328e) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x0008f485) cam6_pano_pane_g

0xf061,	// (0x0008e6d5) main_browser_tag_pane

0x3944,	// (0x00082fb8) grid_navstr_albumart_pane

0x3c25,	// (0x00083299) cell_navstr_albumart_pane_ParamLimits

0x3c25,	// (0x00083299) cell_navstr_albumart_pane

0xedc5,	// (0x0008e439) cell_navstr_albumart_pane_g1

0x117b,	// (0x000807ef) cell_navstr_albumart_pane_g2

0x118b,	// (0x000807ff) cell_navstr_albumart_pane_g3

0x1183,	// (0x000807f7) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x0008f498) cell_navstr_albumart_pane_g

0xcfb1,	// (0x0008c625) bt_list_pane_ParamLimits

0xcfb1,	// (0x0008c625) bt_list_pane

0xcfd8,	// (0x0008c64c) bt_list_pane_t1

0xcfe7,	// (0x0008c65b) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x0008f4a1) bt_list_pane_t

0xf061,	// (0x0008e6d5) main_cale_prevew_pane

0xcff6,	// (0x0008c66a) popup_cale_preview_window_ParamLimits

0xcff6,	// (0x0008c66a) popup_cale_preview_window

0xf0d9,	// (0x0008e74d) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0d9,	// (0x0008e74d) bg_popup_preview_window_pane_cp05

0x3c47,	// (0x000832bb) list_cale_preview_pane_ParamLimits

0x3c47,	// (0x000832bb) list_cale_preview_pane

0xd00d,	// (0x0008c681) list_double_cale_preview_pane_ParamLimits

0xd00d,	// (0x0008c681) list_double_cale_preview_pane

0xd01f,	// (0x0008c693) list_single_cale_preview_pane_ParamLimits

0xd01f,	// (0x0008c693) list_single_cale_preview_pane

0xd033,	// (0x0008c6a7) list_single_cale_preview_pane_g1

0xd03b,	// (0x0008c6af) list_single_cale_preview_pane_t1_ParamLimits

0xd03b,	// (0x0008c6af) list_single_cale_preview_pane_t1

0xd050,	// (0x0008c6c4) list_double_cale_preview_pane_g1

0xd058,	// (0x0008c6cc) list_double_cale_preview_pane_t1_ParamLimits

0xd058,	// (0x0008c6cc) list_double_cale_preview_pane_t1

0xd06d,	// (0x0008c6e1) list_double_cale_preview_pane_t2_ParamLimits

0xd06d,	// (0x0008c6e1) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x0008f4a6) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x0008f4a6) list_double_cale_preview_pane_t

0xf061,	// (0x0008e6d5) main_ezdial_pane

0xf0d9,	// (0x0008e74d) main_sp_fs_email_pane_ParamLimits

0xc800,	// (0x0008be74) cmail_ddmenu_btn01_pane_ParamLimits

0xc800,	// (0x0008be74) cmail_ddmenu_btn01_pane

0xc81d,	// (0x0008be91) cmail_ddmenu_btn02_pane_ParamLimits

0xc81d,	// (0x0008be91) cmail_ddmenu_btn02_pane

0xc83b,	// (0x0008beaf) cmail_ddmenu_btn03_pane_ParamLimits

0xc83b,	// (0x0008beaf) cmail_ddmenu_btn03_pane

0xc869,	// (0x0008bedd) main_sp_fs_ctrlbar_pane_ParamLimits

0xc883,	// (0x0008bef7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcc7b,	// (0x0008c2ef) list_cmail_body_pane_ParamLimits

0x3877,	// (0x00082eeb) bg_button_pane_cp12

0x3880,	// (0x00082ef4) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3880,	// (0x00082ef4) list_single_cmail_header_detail_pane_g3

0xcd2d,	// (0x0008c3a1) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcd2d,	// (0x0008c3a1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0008f429) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0008f429) list_single_cmail_header_detail_pane_t

0x39ac,	// (0x00083020) phacti_term_pane_t2_ParamLimits

0x39ac,	// (0x00083020) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0008f433) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0008f433) phacti_term_pane_t

0x3c53,	// (0x000832c7) aid_size_list_single_double

0xd085,	// (0x0008c6f9) popup_ezdial_listscroll_window

0xd0a8,	// (0x0008c71c) popup_number_entry_window_cp01

0xec64,	// (0x0008e2d8) bg_popup_call_pane_cp09

0x3c5f,	// (0x000832d3) ezdial_list_pane

0x3c67,	// (0x000832db) scroll_pane_cp23

0x15e4,	// (0x00080c58) bg_button_pane_cp028_ParamLimits

0x15e4,	// (0x00080c58) bg_button_pane_cp028

0xd0b6,	// (0x0008c72a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd0b6,	// (0x0008c72a) cmail_ddmenu_btn01_pane_g1

0xd0c8,	// (0x0008c73c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd0c8,	// (0x0008c73c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x0008f4ab) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x0008f4ab) cmail_ddmenu_btn01_pane_g

0x3c6f,	// (0x000832e3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3c6f,	// (0x000832e3) cmail_ddmenu_btn01_pane_t1

0x1366,	// (0x000809da) bg_button_pane_cp029_ParamLimits

0x1366,	// (0x000809da) bg_button_pane_cp029

0xd0c8,	// (0x0008c73c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd0c8,	// (0x0008c73c) cmail_ddmenu_btn02_pane_g1

0xd0e0,	// (0x0008c754) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd0e0,	// (0x0008c754) cmail_ddmenu_btn02_pane_t1

0x222f,	// (0x000818a3) bg_button_pane_cp031_ParamLimits

0x222f,	// (0x000818a3) bg_button_pane_cp031

0xd0c8,	// (0x0008c73c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd0c8,	// (0x0008c73c) cmail_ddmenu_btn03_pane_g1

0xd0e0,	// (0x0008c754) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd0e0,	// (0x0008c754) cmail_ddmenu_btn03_pane_t1

0xa4de,	// (0x00089b52) cell_dialer2_keypad_pane_t1_ParamLimits

0xa4f8,	// (0x00089b6c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa4f8,	// (0x00089b6c) cell_dialer2_keypad_pane_t1_copy1

0xc1e0,	// (0x0008b854) ncimui_group_button_pane

0xf0d9,	// (0x0008e74d) main_sp_fs_calendar_pane_ParamLimits

0xcc9f,	// (0x0008c313) list_single_cmail_header_caption_pane_ParamLimits

0x39f7,	// (0x0008306b) aid_recal_txt_sm_pane

0xf061,	// (0x0008e6d5) mian_recal_day_pane

0x3a36,	// (0x000830aa) popup_sp_fs_cale_preview_window_ParamLimits

0xf061,	// (0x0008e6d5) list_recal_day_pane

0x3c9e,	// (0x00083312) list_single_recal_day_pane_ParamLimits

0x3c9e,	// (0x00083312) list_single_recal_day_pane

0x3cb0,	// (0x00083324) list_single_recal_day_pane_g1_ParamLimits

0x3cb0,	// (0x00083324) list_single_recal_day_pane_g1

0x3cbc,	// (0x00083330) list_single_recal_day_pane_g2_ParamLimits

0x3cbc,	// (0x00083330) list_single_recal_day_pane_g2

0x3ccc,	// (0x00083340) list_single_recal_day_pane_g3_ParamLimits

0x3ccc,	// (0x00083340) list_single_recal_day_pane_g3

0xd104,	// (0x0008c778) list_single_recal_day_pane_g4_ParamLimits

0xd104,	// (0x0008c778) list_single_recal_day_pane_g4

0x3cd8,	// (0x0008334c) list_single_recal_day_pane_g5_ParamLimits

0x3cd8,	// (0x0008334c) list_single_recal_day_pane_g5

0x3ce8,	// (0x0008335c) list_single_recal_day_pane_g6_ParamLimits

0x3ce8,	// (0x0008335c) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x0008f4ba) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x0008f4ba) list_single_recal_day_pane_g

0x3cff,	// (0x00083373) list_single_recal_day_pane_t1

0x3d11,	// (0x00083385) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0008f4c5) list_single_recal_day_pane_t

0xd124,	// (0x0008c798) ncimui_query_button_pane_ParamLimits

0xd124,	// (0x0008c798) ncimui_query_button_pane

0xd134,	// (0x0008c7a8) ncimui_query_button_pane_t1_ParamLimits

0xd134,	// (0x0008c7a8) ncimui_query_button_pane_t1

0x3d26,	// (0x0008339a) ncimui_query_button_pane_t2_ParamLimits

0x3d26,	// (0x0008339a) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0008f4ca) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0008f4ca) ncimui_query_button_pane_t

0xd147,	// (0x0008c7bb) query_button_pane_ParamLimits

0xd147,	// (0x0008c7bb) query_button_pane

0xf061,	// (0x0008e6d5) bg_button_pane_cp0028

0x3d39,	// (0x000833ad) query_button_pane_t1

0x88c8,	// (0x00087f3c) main_tport_pane_ParamLimits

0xcbaa,	// (0x0008c21e) bg_popup_window_pane_cp01_ParamLimits

0xcbaa,	// (0x0008c21e) bg_popup_window_pane_cp01

0xcbb7,	// (0x0008c22b) heading_pane_cp08_ParamLimits

0xcbb7,	// (0x0008c22b) heading_pane_cp08

0xcbc5,	// (0x0008c239) heading_pane_cp07_ParamLimits

0xcbc5,	// (0x0008c239) heading_pane_cp07

0x383a,	// (0x00082eae) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0008f416) cell_tport_appsw_pane_g

0x7ff3,	// (0x00087667) input_candi_list_open_g1

0xe787,	// (0x0008ddfb) list_cale_time_pane_g6_ParamLimits

0xe787,	// (0x0008ddfb) list_cale_time_pane_g6

0x9308,	// (0x0008897c) aid_size_touch_calib_1_ParamLimits

0x9308,	// (0x0008897c) aid_size_touch_calib_1

0x9314,	// (0x00088988) aid_size_touch_calib_2_ParamLimits

0x9314,	// (0x00088988) aid_size_touch_calib_2

0x9322,	// (0x00088996) aid_size_touch_calib_3_ParamLimits

0x9322,	// (0x00088996) aid_size_touch_calib_3

0x9332,	// (0x000889a6) aid_size_touch_calib_4_ParamLimits

0x9332,	// (0x000889a6) aid_size_touch_calib_4

0x9340,	// (0x000889b4) main_touch_calib_button_group_pane_ParamLimits

0x9340,	// (0x000889b4) main_touch_calib_button_group_pane

0x934e,	// (0x000889c2) main_touch_calib_pane_g1_ParamLimits

0x935a,	// (0x000889ce) main_touch_calib_pane_g2_ParamLimits

0x9366,	// (0x000889da) main_touch_calib_pane_g3_ParamLimits

0x9372,	// (0x000889e6) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0008ede4) main_touch_calib_pane_g_ParamLimits

0x937e,	// (0x000889f2) main_touch_calib_pane_t1_ParamLimits

0x9395,	// (0x00088a09) main_touch_calib_pane_t2_ParamLimits

0x93ac,	// (0x00088a20) main_touch_calib_pane_t3_ParamLimits

0x93c0,	// (0x00088a34) main_touch_calib_pane_t4_ParamLimits

0x93d4,	// (0x00088a48) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0008eded) main_touch_calib_pane_t_ParamLimits

0x1ba0,	// (0x00081214) list_single_fp_cale_pane_g3_ParamLimits

0x1ba0,	// (0x00081214) list_single_fp_cale_pane_g3

0xa93e,	// (0x00089fb2) bg_button_pane_cp012_ParamLimits

0xa93e,	// (0x00089fb2) bg_vkb2_func_pane_cp03_ParamLimits

0xb321,	// (0x0008a995) cell_vitu2_function_top_pane_g1_ParamLimits

0xa93e,	// (0x00089fb2) bg_vkb2_func_pane_cp04_ParamLimits

0xc17e,	// (0x0008b7f2) main_ncimui_button_group_pane_ParamLimits

0xc17e,	// (0x0008b7f2) main_ncimui_button_group_pane

0xc1ce,	// (0x0008b842) main_ncimui_pane_t3_ParamLimits

0xc1ce,	// (0x0008b842) main_ncimui_pane_t3

0x395a,	// (0x00082fce) phacti_button_group_pane

0x3c53,	// (0x000832c7) aid_size_list_single_double_ParamLimits

0xd085,	// (0x0008c6f9) popup_ezdial_listscroll_window_ParamLimits

0xd0a8,	// (0x0008c71c) popup_number_entry_window_cp01_ParamLimits

0xd154,	// (0x0008c7c8) phacti_button_pane_ParamLimits

0xd154,	// (0x0008c7c8) phacti_button_pane

0xf061,	// (0x0008e6d5) bg_button_pane_cp14

0x3d47,	// (0x000833bb) phacti_button_pane_t1

0xd165,	// (0x0008c7d9) main_touch_calib_button_pane_ParamLimits

0xd165,	// (0x0008c7d9) main_touch_calib_button_pane

0xe1da,	// (0x0008d84e) bg_button_pane_cp18_ParamLimits

0xe1da,	// (0x0008d84e) bg_button_pane_cp18

0x3d55,	// (0x000833c9) main_touch_calib_button_pane_t1_ParamLimits

0x3d55,	// (0x000833c9) main_touch_calib_button_pane_t1

0x3d6b,	// (0x000833df) main_touch_calib_button_pane_t2_ParamLimits

0x3d6b,	// (0x000833df) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0008f4cf) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0008f4cf) main_touch_calib_button_pane_t

0xf061,	// (0x0008e6d5) cell_ncimui_button_pane

0xf061,	// (0x0008e6d5) bg_button_pane_cp032

0x3d89,	// (0x000833fd) cell_ncimui_button_pane_t1

0xa554,	// (0x00089bc8) image3_infobar_pane_ParamLimits

0xa554,	// (0x00089bc8) image3_infobar_pane

0xc52c,	// (0x0008bba0) fs_bigclock_status_pane_ParamLimits

0xc52c,	// (0x0008bba0) fs_bigclock_status_pane

0xc539,	// (0x0008bbad) main_fs_bigclock_clock_pane_ParamLimits

0xc539,	// (0x0008bbad) main_fs_bigclock_clock_pane

0xc54f,	// (0x0008bbc3) main_fs_bigclock_indi_pane_ParamLimits

0xc54f,	// (0x0008bbc3) main_fs_bigclock_indi_pane

0xc57e,	// (0x0008bbf2) main_fs_bigclock_swipe_pane_ParamLimits

0xc57e,	// (0x0008bbf2) main_fs_bigclock_swipe_pane

0xf061,	// (0x0008e6d5) main_fs_clock_dumped_data

0x31d5,	// (0x00082849) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x31d5,	// (0x00082849) list_single_fs_bigclock_indicator_pane_g1

0x31fe,	// (0x00082872) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x31fe,	// (0x00082872) list_single_fs_bigclock_indicator_pane_g2

0x3218,	// (0x0008288c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3218,	// (0x0008288c) list_single_fs_bigclock_indicator_pane_g3

0x3232,	// (0x000828a6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3232,	// (0x000828a6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x0008f2fd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x0008f2fd) list_single_fs_bigclock_indicator_pane_g

0x325b,	// (0x000828cf) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x325b,	// (0x000828cf) list_single_fs_bigclock_indicator_pane_t1

0x3283,	// (0x000828f7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3283,	// (0x000828f7) list_single_fs_bigclock_indicator_pane_t2

0x32ab,	// (0x0008291f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x32ab,	// (0x0008291f) list_single_fs_bigclock_indicator_pane_t3

0x32d3,	// (0x00082947) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x32d3,	// (0x00082947) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x0008f308) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x0008f308) list_single_fs_bigclock_indicator_pane_t

0x3d97,	// (0x0008340b) image3_infobar_fav_pane_ParamLimits

0x3d97,	// (0x0008340b) image3_infobar_fav_pane

0x3da7,	// (0x0008341b) image3_infobar_loc_pane_ParamLimits

0x3da7,	// (0x0008341b) image3_infobar_loc_pane

0x3dbb,	// (0x0008342f) image3_infobar_time_pane_ParamLimits

0x3dbb,	// (0x0008342f) image3_infobar_time_pane

0x1801,	// (0x00080e75) image3_infobar_time_pane_g1

0x3dcb,	// (0x0008343f) image3_infobar_time_pane_t1

0x1801,	// (0x00080e75) image3_infobar_loc_pane_g1

0x3dd9,	// (0x0008344d) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0008f4d4) image3_infobar_loc_pane_g

0x3de1,	// (0x00083455) image3_infobar_loc_pane_t1

0x1801,	// (0x00080e75) image3_infobar_fav_pane_g1

0x3def,	// (0x00083463) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0008f4d9) image3_infobar_fav_pane_g

0x3df7,	// (0x0008346b) fs_bigclock_status_battery_pane

0x3e00,	// (0x00083474) fs_bigclock_status_signal_pane

0x3e09,	// (0x0008347d) fs_bigclock_status_title_pane

0x3e12,	// (0x00083486) fs_bigclock_status_signal_pane_g1

0x3e1b,	// (0x0008348f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0008f4de) fs_bigclock_status_signal_pane_g

0x3e23,	// (0x00083497) fs_bigclock_status_battery_pane_g1

0x3e2c,	// (0x000834a0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0008f4e3) fs_bigclock_status_battery_pane_g

0x3e34,	// (0x000834a8) fs_bigclock_status_title_pane_t1

0x1801,	// (0x00080e75) main_fs_bigclock_clock_pane_g1

0x3e42,	// (0x000834b6) main_fs_bigclock_clock_pane_g2

0x3e42,	// (0x000834b6) main_fs_bigclock_clock_pane_g3

0x3e42,	// (0x000834b6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0008f4e8) main_fs_bigclock_clock_pane_g

0x3e4a,	// (0x000834be) main_fs_bigclock_clock_pane_t1

0x3e58,	// (0x000834cc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0008f4f1) main_fs_bigclock_clock_pane_t

0x3e67,	// (0x000834db) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3e67,	// (0x000834db) list_single_fs_bigclock_indicator_pane

0xd175,	// (0x0008c7e9) list_single_fs_bigclock_pane_ParamLimits

0xd175,	// (0x0008c7e9) list_single_fs_bigclock_pane

0x3e81,	// (0x000834f5) main_fs_bigclock_indicator_pane_t1

0x3e90,	// (0x00083504) list_single_fs_bigclock_pane_g1

0x3e98,	// (0x0008350c) list_single_fs_bigclock_pane_t1

0x1801,	// (0x00080e75) main_fs_bigclock_swipe_pane_g1

0x3edb,	// (0x0008354f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0008f502) main_fs_bigclock_swipe_pane_g

0x3ee3,	// (0x00083557) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3ee3,	// (0x00083557) main_fs_bigclock_swipe_pane_t1

0x77ac,	// (0x00086e20) call_type_pane_ParamLimits

0xf061,	// (0x0008e6d5) main_btmg_pane

0x3b2f,	// (0x000831a3) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3b2f,	// (0x000831a3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x0008f475) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0008f475) list_single_cale_mrui_row_pane_g

0x3c8e,	// (0x00083302) list_recal_vselct_arw_lo_pane

0x3c96,	// (0x0008330a) list_recal_vselct_arw_up_pane

0x47a4,	// (0x00083e18) list_recal_vselct_pane

0x3f00,	// (0x00083574) btmg_button_pane

0xd1d8,	// (0x0008c84c) main_btmg_pane_g1

0xf061,	// (0x0008e6d5) bg_button_pane_cp044

0x3f0a,	// (0x0008357e) btmg_button_pane_t1

0x135e,	// (0x000809d2) aid_listscroll_gen

0xf0d9,	// (0x0008e74d) main_cntbar_detail_pane

0x3858,	// (0x00082ecc) list_cmail_folder_pane

0x3868,	// (0x00082edc) sp_fs_scroll_pane_cp03_ParamLimits

0xd1e0,	// (0x0008c854) list_single_fs_dyc_pane_cp01_ParamLimits

0xd1e0,	// (0x0008c854) list_single_fs_dyc_pane_cp01

0x3f18,	// (0x0008358c) aid_size_cmail_indent

0x3f21,	// (0x00083595) list_single_dyc_row_pane_cp01

0xd22c,	// (0x0008c8a0) cntbar_detail_list_pane_ParamLimits

0xd22c,	// (0x0008c8a0) cntbar_detail_list_pane

0xd266,	// (0x0008c8da) main_cntbar_detail_cont_pane_ParamLimits

0xd266,	// (0x0008c8da) main_cntbar_detail_cont_pane

0x7746,	// (0x00086dba) scroll_pane_cp032_ParamLimits

0x7746,	// (0x00086dba) scroll_pane_cp032

0xd272,	// (0x0008c8e6) cntbar_detail_list_event_pane_ParamLimits

0xd272,	// (0x0008c8e6) cntbar_detail_list_event_pane

0xd238,	// (0x0008c8ac) cntbar_detail_list_shct_pane

0xe63a,	// (0x0008dcae) aid_list_gen

0x3f2a,	// (0x0008359e) aid_scroll

0x3f33,	// (0x000835a7) aid_size_touch_scroll_bar

0x4729,	// (0x00083d9d) aid_list_double

0x3f45,	// (0x000835b9) aid_list_single

0x3f4e,	// (0x000835c2) aid_list_single_lg

0x3f57,	// (0x000835cb) aid_list_z_g_a_sm

0x4779,	// (0x00083ded) aid_list_z_g_d

0x3f5f,	// (0x000835d3) aid_txt_z_prm

0xd286,	// (0x0008c8fa) aid_txt_z_prm_cp01

0xd294,	// (0x0008c908) aid_txt_z_sec

0xd2a2,	// (0x0008c916) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd2a2,	// (0x0008c916) main_cntbar_detail_cont_pane_g1

0xd2af,	// (0x0008c923) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd2af,	// (0x0008c923) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0008f507) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0008f507) main_cntbar_detail_cont_pane_g

0x3f6d,	// (0x000835e1) main_cntbar_detail_cont_pane_t1

0x3f7b,	// (0x000835ef) main_cntbar_detail_cont_pane_t2

0x3f89,	// (0x000835fd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0008f50c) main_cntbar_detail_cont_pane_t

0xd2bb,	// (0x0008c92f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd2bb,	// (0x0008c92f) cell_cntbar_detail_list_shct_pane

0x3f97,	// (0x0008360b) cntbar_detail_list_shct_pane_g1

0x3fa0,	// (0x00083614) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0008f513) cntbar_detail_list_shct_pane_g

0xd2cf,	// (0x0008c943) cntbar_detail_list_event_pane_g1_ParamLimits

0xd2cf,	// (0x0008c943) cntbar_detail_list_event_pane_g1

0xd2db,	// (0x0008c94f) cntbar_detail_list_event_pane_g2_ParamLimits

0xd2db,	// (0x0008c94f) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0008f518) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0008f518) cntbar_detail_list_event_pane_g

0xd347,	// (0x0008c9bb) cntbar_detail_list_event_pane_t1_ParamLimits

0xd347,	// (0x0008c9bb) cntbar_detail_list_event_pane_t1

0xd35c,	// (0x0008c9d0) cntbar_detail_list_event_pane_t2_ParamLimits

0xd35c,	// (0x0008c9d0) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0008f525) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0008f525) cntbar_detail_list_event_pane_t

0x1801,	// (0x00080e75) cell_cntbar_detail_list_shct_pane_g1

0x7b45,	// (0x000871b9) navi_pane_mv_g3

0xf0d9,	// (0x0008e74d) main_cntbar_detail_pane_ParamLimits

0xf061,	// (0x0008e6d5) main_notif_wgt_pane

0xa206,	// (0x0008987a) aid_tch_main_mp4_pane_g4

0xa43b,	// (0x00089aaf) popup_slider_window_cp02

0x3c84,	// (0x000832f8) list_recal_day_event_pane

0xd20c,	// (0x0008c880) cntbar_detail_btn_pane_ParamLimits

0xd20c,	// (0x0008c880) cntbar_detail_btn_pane

0xd21c,	// (0x0008c890) cntbar_detail_btn_pane_cp01_ParamLimits

0xd21c,	// (0x0008c890) cntbar_detail_btn_pane_cp01

0xd238,	// (0x0008c8ac) cntbar_detail_list_shct_pane_ParamLimits

0xd244,	// (0x0008c8b8) cntbar_detail_pane_g1_ParamLimits

0xd244,	// (0x0008c8b8) cntbar_detail_pane_g1

0xd250,	// (0x0008c8c4) cntbar_detail_pane_t1_ParamLimits

0xd250,	// (0x0008c8c4) cntbar_detail_pane_t1

0xd2e7,	// (0x0008c95b) cntbar_detail_list_event_pane_g3_ParamLimits

0xd2e7,	// (0x0008c95b) cntbar_detail_list_event_pane_g3

0xd2ff,	// (0x0008c973) cntbar_detail_list_event_pane_g4_ParamLimits

0xd2ff,	// (0x0008c973) cntbar_detail_list_event_pane_g4

0xd317,	// (0x0008c98b) cntbar_detail_list_event_pane_g5_ParamLimits

0xd317,	// (0x0008c98b) cntbar_detail_list_event_pane_g5

0xd32f,	// (0x0008c9a3) cntbar_detail_list_event_pane_g6_ParamLimits

0xd32f,	// (0x0008c9a3) cntbar_detail_list_event_pane_g6

0xd371,	// (0x0008c9e5) cntbar_detail_list_event_pane_t3_ParamLimits

0xd371,	// (0x0008c9e5) cntbar_detail_list_event_pane_t3

0xd383,	// (0x0008c9f7) popup_notif_wgt_window_ParamLimits

0xd383,	// (0x0008c9f7) popup_notif_wgt_window

0xd393,	// (0x0008ca07) popup_submenu_window_cp01_ParamLimits

0xd393,	// (0x0008ca07) popup_submenu_window_cp01

0xec64,	// (0x0008e2d8) bg_popup_window_pane_cp10

0x3fa9,	// (0x0008361d) listscroll_notif_wgt_pane

0x3fb3,	// (0x00083627) list_notif_wgt_window

0x3fbc,	// (0x00083630) scroll_pane_cp033

0x3fc5,	// (0x00083639) list_notif_wgt_row_pane_ParamLimits

0x3fc5,	// (0x00083639) list_notif_wgt_row_pane

0x3fd9,	// (0x0008364d) aid_size_list_notif_wgt_del

0x3fe2,	// (0x00083656) list_notif_wgt_row_pane_g1

0x3fea,	// (0x0008365e) list_notif_wgt_row_pane_g2

0x3ff2,	// (0x00083666) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0008f52c) list_notif_wgt_row_pane_g

0x3ffb,	// (0x0008366f) list_notif_wgt_row_pane_t1

0x4009,	// (0x0008367d) list_notif_wgt_row_pane_t2

0x4017,	// (0x0008368b) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0008f533) list_notif_wgt_row_pane_t

0x2518,	// (0x00081b8c) list_recal_day_event_pane_g1

0x4025,	// (0x00083699) list_recal_day_event_pane_t1

0xf061,	// (0x0008e6d5) bg_button_pane_cp045

0x4034,	// (0x000836a8) cntbar_detail_btn_pane_t1

0x1366,	// (0x000809da) main_callh_pane_ParamLimits

0x1366,	// (0x000809da) main_callh_pane

0xf061,	// (0x0008e6d5) main_coverflow0_pane

0xf061,	// (0x0008e6d5) main_wgtman_pane

0xc596,	// (0x0008bc0a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc596,	// (0x0008bc0a) main_fs_bigclock_unlock_btn_pane

0x3832,	// (0x00082ea6) bg_button_pane_cp16

0x3842,	// (0x00082eb6) cell_tport_appsw_pane_g3

0xd3a1,	// (0x0008ca15) cf0_flow_pane_ParamLimits

0xd3a1,	// (0x0008ca15) cf0_flow_pane

0x4042,	// (0x000836b6) listscroll_cf0_pane

0x404b,	// (0x000836bf) main_cf0_pane_g1

0xd3b0,	// (0x0008ca24) main_cf0_pane_t1_ParamLimits

0xd3b0,	// (0x0008ca24) main_cf0_pane_t1

0xd3c4,	// (0x0008ca38) main_cf0_pane_t2_ParamLimits

0xd3c4,	// (0x0008ca38) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0008f53a) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0008f53a) main_cf0_pane_t

0x4055,	// (0x000836c9) scroll_pane_cp11

0xd3d8,	// (0x0008ca4c) cf0_flow_pane_g1

0xd3e0,	// (0x0008ca54) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0008f53f) cf0_flow_pane_g

0xd3e8,	// (0x0008ca5c) cf0_flow_pane_t1

0xf061,	// (0x0008e6d5) main_call6_pane

0xf061,	// (0x0008e6d5) main_calllock_pane

0xd3f6,	// (0x0008ca6a) call6_btn_grp_pane_ParamLimits

0xd3f6,	// (0x0008ca6a) call6_btn_grp_pane

0xd405,	// (0x0008ca79) call6_pane_g1_ParamLimits

0xd405,	// (0x0008ca79) call6_pane_g1

0xd414,	// (0x0008ca88) popup_call6_1st_window_ParamLimits

0xd414,	// (0x0008ca88) popup_call6_1st_window

0xd422,	// (0x0008ca96) popup_call6_2nd_window_ParamLimits

0xd422,	// (0x0008ca96) popup_call6_2nd_window

0xd430,	// (0x0008caa4) cell_call6_btn_pane_ParamLimits

0xd430,	// (0x0008caa4) cell_call6_btn_pane

0xec64,	// (0x0008e2d8) bg_popup_call2_in_pane_cp03

0x4060,	// (0x000836d4) popup_call6_1st_window_g1

0x4068,	// (0x000836dc) popup_call6_1st_window_g2

0x4070,	// (0x000836e4) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0008f544) popup_call6_1st_window_g

0x4078,	// (0x000836ec) popup_call6_1st_window_t1

0x4087,	// (0x000836fb) popup_call6_1st_window_t2

0x4097,	// (0x0008370b) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0008f54b) popup_call6_1st_window_t

0xec64,	// (0x0008e2d8) bg_popup_call2_in_pane_cp04

0x4060,	// (0x000836d4) popup_call6_2nd_window_g1

0x4068,	// (0x000836dc) popup_call6_2nd_window_g2

0x4070,	// (0x000836e4) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0008f544) popup_call6_2nd_window_g

0x4078,	// (0x000836ec) popup_call6_2nd_window_t1

0xf061,	// (0x0008e6d5) bg_button_pane_cp15

0x40a7,	// (0x0008371b) cell_call6_btn_pane_g1

0x40b0,	// (0x00083724) cell_call6_btn_pane_t1

0xd43f,	// (0x0008cab3) listscroll_wgtman_pane_ParamLimits

0xd43f,	// (0x0008cab3) listscroll_wgtman_pane

0xd45d,	// (0x0008cad1) wgtman_btn_pane_ParamLimits

0xd45d,	// (0x0008cad1) wgtman_btn_pane

0xeb17,	// (0x0008e18b) aid_scroll_copy1

0x40bf,	// (0x00083733) list_wgtman_pane

0xd492,	// (0x0008cb06) wgtman_btn_pane_g1_ParamLimits

0xd492,	// (0x0008cb06) wgtman_btn_pane_g1

0xd4ba,	// (0x0008cb2e) wgtman_btn_pane_t1_ParamLimits

0xd4ba,	// (0x0008cb2e) wgtman_btn_pane_t1

0x40c9,	// (0x0008373d) wgtman_btn_pane_t2_ParamLimits

0x40c9,	// (0x0008373d) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0008f552) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0008f552) wgtman_btn_pane_t

0xd4f1,	// (0x0008cb65) listrow_wgtman_pane_ParamLimits

0xd4f1,	// (0x0008cb65) listrow_wgtman_pane

0xd50d,	// (0x0008cb81) listrow_wgtman_pane_g1

0xd516,	// (0x0008cb8a) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0008f557) listrow_wgtman_pane_g

0xd520,	// (0x0008cb94) listrow_wgtman_pane_t1

0xd52e,	// (0x0008cba2) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0008f55c) listrow_wgtman_pane_t

0xd53c,	// (0x0008cbb0) wait_bar_pane_cp09

0x40e0,	// (0x00083754) main_calllock_btn_pane

0x40ea,	// (0x0008375e) main_calllock_pane_g1

0xf061,	// (0x0008e6d5) bg_button_pane_cp17

0x40f5,	// (0x00083769) main_calllock_btn_pane_g1

0x40fe,	// (0x00083772) main_calllock_btn_pane_t1

0xf061,	// (0x0008e6d5) main_dialer3_pane

0xf061,	// (0x0008e6d5) main_fmrd2_pane

0x1801,	// (0x00080e75) main_fs_bigclock_unlock_btn_pane_g1

0x4115,	// (0x00083789) main_fs_bigclock_unlock_btn_pane_t1

0xd544,	// (0x0008cbb8) area_fmrd2_info_pane_ParamLimits

0xd544,	// (0x0008cbb8) area_fmrd2_info_pane

0xd552,	// (0x0008cbc6) area_fmrd2_visual_pane_ParamLimits

0xd552,	// (0x0008cbc6) area_fmrd2_visual_pane

0xd560,	// (0x0008cbd4) fmrd2_indi_pane_ParamLimits

0xd560,	// (0x0008cbd4) fmrd2_indi_pane

0xd56d,	// (0x0008cbe1) area_fmrd2_visual_pane_g1

0xd575,	// (0x0008cbe9) area_fmrd2_visual_pane_t1

0xd585,	// (0x0008cbf9) area_fmrd2_visual_pane_t2

0xd595,	// (0x0008cc09) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0008f566) area_fmrd2_visual_pane_t

0xd5a5,	// (0x0008cc19) area_fmrd2_info_pane_g1

0xd5ad,	// (0x0008cc21) area_fmrd2_info_pane_t1

0xd5bd,	// (0x0008cc31) area_fmrd2_info_pane_t2

0xd5cd,	// (0x0008cc41) area_fmrd2_info_pane_t3

0xd5dd,	// (0x0008cc51) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0008f56d) area_fmrd2_info_pane_t

0xd5eb,	// (0x0008cc5f) fmrd2_indi_pane_t1

0xd5fb,	// (0x0008cc6f) fmrd2_indi_pane_t2

0xd60b,	// (0x0008cc7f) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0008f576) fmrd2_indi_pane_t

0x3241,	// (0x000828b5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3241,	// (0x000828b5) list_single_fs_bigclock_indicator_pane_g5

0x32e8,	// (0x0008295c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x32e8,	// (0x0008295c) list_single_fs_bigclock_indicator_pane_t5

0xcded,	// (0x0008c461) aid_cell_bcale_month_pane_ParamLimits

0xcded,	// (0x0008c461) aid_cell_bcale_month_pane

0xcdf9,	// (0x0008c46d) bcale_month_pane_ParamLimits

0xcdf9,	// (0x0008c46d) bcale_month_pane

0xce09,	// (0x0008c47d) bcale_preview_pane_ParamLimits

0xce09,	// (0x0008c47d) bcale_preview_pane

0x3e98,	// (0x0008350c) list_single_fs_bigclock_pane_t1_ParamLimits

0x3eb7,	// (0x0008352b) list_single_fs_bigclock_pane_t2_ParamLimits

0x3eb7,	// (0x0008352b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0008f4fd) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0008f4fd) list_single_fs_bigclock_pane_t

0x410d,	// (0x00083781) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0008f561) main_fs_bigclock_unlock_btn_pane_g

0xd619,	// (0x0008cc8d) aid_dia3_key_size_ParamLimits

0xd619,	// (0x0008cc8d) aid_dia3_key_size

0xd625,	// (0x0008cc99) aid_dia3_listrow_size_ParamLimits

0xd625,	// (0x0008cc99) aid_dia3_listrow_size

0xd635,	// (0x0008cca9) dia3_keypad_fun_pane_ParamLimits

0xd635,	// (0x0008cca9) dia3_keypad_fun_pane

0xd647,	// (0x0008ccbb) dia3_keypad_num_pane_ParamLimits

0xd647,	// (0x0008ccbb) dia3_keypad_num_pane

0xd659,	// (0x0008cccd) dia3_listscroll_pane_ParamLimits

0xd659,	// (0x0008cccd) dia3_listscroll_pane

0xd667,	// (0x0008ccdb) dia3_numentry_pane_ParamLimits

0xd667,	// (0x0008ccdb) dia3_numentry_pane

0x4123,	// (0x00083797) dia3_list_pane

0x412e,	// (0x000837a2) scroll_pane_cp12

0xf061,	// (0x0008e6d5) bg_dia3_numentry_pane

0xd675,	// (0x0008cce9) dia3_numentry_pane_t1

0xd684,	// (0x0008ccf8) cell_dia3_key_num_pane

0xd68c,	// (0x0008cd00) cell_dia3_key0_fun_pane_ParamLimits

0xd68c,	// (0x0008cd00) cell_dia3_key0_fun_pane

0xd699,	// (0x0008cd0d) cell_dia3_key1_fun_pane_ParamLimits

0xd699,	// (0x0008cd0d) cell_dia3_key1_fun_pane

0xd6a6,	// (0x0008cd1a) dia3_listrow_pane

0x2f42,	// (0x000825b6) bg_dia3_numentry_pane_g1

0xf061,	// (0x0008e6d5) bg_button_pane_cp21

0x4139,	// (0x000837ad) cell_dia3_key_num_pane_t1

0x4147,	// (0x000837bb) cell_dia3_key_num_pane_t2

0x4156,	// (0x000837ca) cell_dia3_key_num_pane_t3

0x4165,	// (0x000837d9) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0008f57d) cell_dia3_key_num_pane_t

0xf061,	// (0x0008e6d5) bg_button_pane_cp19

0xd6b3,	// (0x0008cd27) cell_dia3_key0_fun_pane_g1

0xf061,	// (0x0008e6d5) bg_button_pane_cp20

0xd6bb,	// (0x0008cd2f) cell_dia3_key1_fun_pane_g1

0xd6c3,	// (0x0008cd37) area_left_week_number_pane

0xd6cc,	// (0x0008cd40) area_top_day_name_pane

0xd6d5,	// (0x0008cd49) frame_month_view_pane

0xd6e1,	// (0x0008cd55) grid_month_view_pane

0xd6eb,	// (0x0008cd5f) cell_top_day_name_pane_ParamLimits

0xd6eb,	// (0x0008cd5f) cell_top_day_name_pane

0xd705,	// (0x0008cd79) cell_area_left_week_number_pane_ParamLimits

0xd705,	// (0x0008cd79) cell_area_left_week_number_pane

0xd719,	// (0x0008cd8d) cell_month_view_pane_ParamLimits

0xd719,	// (0x0008cd8d) cell_month_view_pane

0x417d,	// (0x000837f1) frm_month_g1

0xd736,	// (0x0008cdaa) frm_month_g2

0xd740,	// (0x0008cdb4) frm_month_g3

0xd74a,	// (0x0008cdbe) frm_month_g4

0xd754,	// (0x0008cdc8) frm_month_g5

0xd75e,	// (0x0008cdd2) frm_month_g6

0xd768,	// (0x0008cddc) frm_month_g7

0x4186,	// (0x000837fa) frm_month_g8

0xd774,	// (0x0008cde8) frm_month_g9

0xd77d,	// (0x0008cdf1) frm_month_g10

0xd786,	// (0x0008cdfa) frm_month_g11

0xd78f,	// (0x0008ce03) frm_month_g12

0xd798,	// (0x0008ce0c) frm_month_g13

0xd7a1,	// (0x0008ce15) frm_month_g14

0xd7aa,	// (0x0008ce1e) frm_month_g15

0xd7b5,	// (0x0008ce29) frm_month_g16

0x000f,

0xff12,	// (0x0008f586) frm_month_g

0xd7c0,	// (0x0008ce34) cell_top_day_name_pane_t1

0xd7cf,	// (0x0008ce43) cell_area_left_week_number_pane_g1

0xd7c0,	// (0x0008ce34) cell_area_left_week_number_pane_t1

0x1801,	// (0x00080e75) cell_month_view_pane_g1

0xd7d7,	// (0x0008ce4b) cell_month_view_pane_t1

0xf061,	// (0x0008e6d5) main_fps_pane

0x3577,	// (0x00082beb) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3577,	// (0x00082beb) cmail_ddmenu_btn02_pane_cp1

0x3593,	// (0x00082c07) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3593,	// (0x00082c07) cmail_ddmenu_btn02_pane_cp2

0xd0d4,	// (0x0008c748) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd0d4,	// (0x0008c748) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x0008f4b0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x0008f4b0) cmail_ddmenu_btn02_pane_g

0xd0f2,	// (0x0008c766) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd0f2,	// (0x0008c766) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x0008f4b5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x0008f4b5) cmail_ddmenu_btn02_pane_t

0xd7e6,	// (0x0008ce5a) fps_text_pane_ParamLimits

0xd7e6,	// (0x0008ce5a) fps_text_pane

0xd7f3,	// (0x0008ce67) main_fps_pane_g1_ParamLimits

0xd7f3,	// (0x0008ce67) main_fps_pane_g1

0xd801,	// (0x0008ce75) wait_bar_pane_cp010_ParamLimits

0xd801,	// (0x0008ce75) wait_bar_pane_cp010

0xd80d,	// (0x0008ce81) fps_text_pane_t1_ParamLimits

0xd80d,	// (0x0008ce81) fps_text_pane_t1

0xa82d,	// (0x00089ea1) cam4_image_uncrop_pane_g1

0xa836,	// (0x00089eaa) cam4_image_uncrop_pane_g2

0xa83f,	// (0x00089eb3) cam4_image_uncrop_pane_g3

0xa848,	// (0x00089ebc) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0008ef7c) cam4_image_uncrop_pane_g

0xd6a6,	// (0x0008cd1a) dia3_listrow_pane_ParamLimits

0xf061,	// (0x0008e6d5) main_phob2_pane

0xcc0c,	// (0x0008c280) cell_tport_appsw_pane_cp02_ParamLimits

0xcc0c,	// (0x0008c280) cell_tport_appsw_pane_cp02

0xcc1b,	// (0x0008c28f) cell_tport_appsw_pane_cp03_ParamLimits

0xcc1b,	// (0x0008c28f) cell_tport_appsw_pane_cp03

0xf061,	// (0x0008e6d5) phob2_contact_card_pane

0xf061,	// (0x0008e6d5) phob2_listscroll_pane

0x418f,	// (0x00083803) phob2_list_pane

0x4197,	// (0x0008380b) scroll_pane_cp034

0xd826,	// (0x0008ce9a) phob2_cc_data_pane_ParamLimits

0xd826,	// (0x0008ce9a) phob2_cc_data_pane

0xd840,	// (0x0008ceb4) phob2_cc_listscroll_pane_ParamLimits

0xd840,	// (0x0008ceb4) phob2_cc_listscroll_pane

0xd85a,	// (0x0008cece) list_double_large_graphic_phob2_pane_ParamLimits

0xd85a,	// (0x0008cece) list_double_large_graphic_phob2_pane

0xd87d,	// (0x0008cef1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd87d,	// (0x0008cef1) list_double_large_graphic_phob2_pane_g1

0xd88a,	// (0x0008cefe) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd88a,	// (0x0008cefe) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0008f5a7) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0008f5a7) list_double_large_graphic_phob2_pane_g

0xd896,	// (0x0008cf0a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd896,	// (0x0008cf0a) list_double_large_graphic_phob2_pane_t1

0xd8ab,	// (0x0008cf1f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd8ab,	// (0x0008cf1f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0008f5ac) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0008f5ac) list_double_large_graphic_phob2_pane_t

0xf061,	// (0x0008e6d5) list_highlight_pane_cp024

0x419f,	// (0x00083813) phob2_cc_button_pane

0xd8bd,	// (0x0008cf31) phob2_cc_data_pane_g1_ParamLimits

0xd8bd,	// (0x0008cf31) phob2_cc_data_pane_g1

0xd8c9,	// (0x0008cf3d) phob2_cc_data_pane_g2_ParamLimits

0xd8c9,	// (0x0008cf3d) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0008f5b1) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0008f5b1) phob2_cc_data_pane_g

0xd8d5,	// (0x0008cf49) phob2_cc_data_pane_t1_ParamLimits

0xd8d5,	// (0x0008cf49) phob2_cc_data_pane_t1

0xd8e7,	// (0x0008cf5b) phob2_cc_data_pane_t2_ParamLimits

0xd8e7,	// (0x0008cf5b) phob2_cc_data_pane_t2

0xd8f9,	// (0x0008cf6d) phob2_cc_data_pane_t3_ParamLimits

0xd8f9,	// (0x0008cf6d) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0008f5b6) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0008f5b6) phob2_cc_data_pane_t

0x41a7,	// (0x0008381b) phob2_cc_list_pane_ParamLimits

0x41a7,	// (0x0008381b) phob2_cc_list_pane

0x25c3,	// (0x00081c37) scroll_pane_cp035_ParamLimits

0x25c3,	// (0x00081c37) scroll_pane_cp035

0xf0d9,	// (0x0008e74d) bg_button_pane_cp033

0x41b3,	// (0x00083827) phob2_cc_button_pane_g1

0x41bf,	// (0x00083833) phob2_cc_button_pane_t1

0x41d4,	// (0x00083848) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0008f5bd) phob2_cc_button_pane_t

0xd90b,	// (0x0008cf7f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd90b,	// (0x0008cf7f) list_double_large_graphic_phob2_cc_pane

0xd93b,	// (0x0008cfaf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd93b,	// (0x0008cfaf) list_double_large_graphic_phob2_cc_pane_g1

0xd94c,	// (0x0008cfc0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd94c,	// (0x0008cfc0) list_double_large_graphic_phob2_cc_pane_g2

0xd95b,	// (0x0008cfcf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd95b,	// (0x0008cfcf) list_double_large_graphic_phob2_cc_pane_g3

0xd96a,	// (0x0008cfde) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd96a,	// (0x0008cfde) list_double_large_graphic_phob2_cc_pane_g4

0xd97b,	// (0x0008cfef) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd97b,	// (0x0008cfef) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0008f5c2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0008f5c2) list_double_large_graphic_phob2_cc_pane_g

0xd98a,	// (0x0008cffe) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd98a,	// (0x0008cffe) list_double_large_graphic_phob2_cc_pane_t1

0xd9b3,	// (0x0008d027) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd9b3,	// (0x0008d027) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0008f5cd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0008f5cd) list_double_large_graphic_phob2_cc_pane_t

0x41e6,	// (0x0008385a) list_highlight_pane_cp025_ParamLimits

0x41e6,	// (0x0008385a) list_highlight_pane_cp025

0xf0d9,	// (0x0008e74d) bg_button_pane_cp033_ParamLimits

0x41b3,	// (0x00083827) phob2_cc_button_pane_g1_ParamLimits

0x41bf,	// (0x00083833) phob2_cc_button_pane_t1_ParamLimits

0x41d4,	// (0x00083848) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0008f5bd) phob2_cc_button_pane_t_ParamLimits

0x5947,	// (0x00084fbb) popup_wgtman_window

0x23c5,	// (0x00081a39) scroll_pane_cp038

0xd47a,	// (0x0008caee) wgtman_btn_pane_cp_01_ParamLimits

0xd47a,	// (0x0008caee) wgtman_btn_pane_cp_01

0x41f4,	// (0x00083868) wgtman_content_pane

0x3f3c,	// (0x000835b0) wgtman_heading_pane

0xf061,	// (0x0008e6d5) bg_heading_pane_cp02

0x41fd,	// (0x00083871) wgtman_heading_pane_g1

0x4205,	// (0x00083879) wgtman_heading_pane_t1

0x4213,	// (0x00083887) scroll_pane_cp036

0x421b,	// (0x0008388f) wgtman_list_pane

0x4223,	// (0x00083897) wgtman_list_pane_t1_ParamLimits

0x4223,	// (0x00083897) wgtman_list_pane_t1

0xa78c,	// (0x00089e00) cam4_grid_pane

0xb4eb,	// (0x0008ab5f) bg_button_pane_cp015_ParamLimits

0xb4fd,	// (0x0008ab71) bg_button_pane_cp016_ParamLimits

0xb510,	// (0x0008ab84) bg_button_pane_cp017_ParamLimits

0xb566,	// (0x0008abda) popup_vitu2_query_window_g3_ParamLimits

0xb566,	// (0x0008abda) popup_vitu2_query_window_g3

0xb621,	// (0x0008ac95) popup_vitu2_query_window_t6_ParamLimits

0xb621,	// (0x0008ac95) popup_vitu2_query_window_t6

0xb64c,	// (0x0008acc0) popup_vitu2_query_window_t7_ParamLimits

0xb64c,	// (0x0008acc0) popup_vitu2_query_window_t7

0x221d,	// (0x00081891) cam4_grid_pane_g1

0x2226,	// (0x0008189a) cam4_grid_pane_g2

0x4245,	// (0x000838b9) cam4_grid_pane_g3

0x424e,	// (0x000838c2) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0008f5d2) cam4_grid_pane_g

0x66a7,	// (0x00085d1b) aid_placing_vt_slider_lsc_ParamLimits

0x69e7,	// (0x0008605b) vidtel_button_pane_ParamLimits

0x69e7,	// (0x0008605b) vidtel_button_pane

0x4259,	// (0x000838cd) bg_button_pane_cp034

0xd9dc,	// (0x0008d050) vidtel_button_pane_g1

0x4263,	// (0x000838d7) vidtel_button_pane_t1

0x24e2,	// (0x00081b56) aid_size_vtel_slider_touch

0x25c3,	// (0x00081c37) scroll_pane_cp039

0x2f80,	// (0x000825f4) ncim_query_button_pane_cp01_ParamLimits

0x2f9f,	// (0x00082613) ncimui_query_pane_g1_ParamLimits

0xf0d9,	// (0x0008e74d) input_focus_pane_cp012_ParamLimits

0x2fc4,	// (0x00082638) ncim_query_entry_pane_t1_ParamLimits

0x25c3,	// (0x00081c37) scroll_pane_cp039_ParamLimits

0x7ab7,	// (0x0008712b) navi_pane_bcale_mc_g1

0x7abf,	// (0x00087133) navi_pane_bcale_mc_t1

0x35dc,	// (0x00082c50) main_sp_fs_email_pane_g1

0x35e4,	// (0x00082c58) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x0008f36e) main_sp_fs_email_pane_g

0x3b3b,	// (0x000831af) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3b3b,	// (0x000831af) list_single_cale_mrui_row_pane_g3

0xd11a,	// (0x0008c78e) list_single_recal_day_pane_g5_event_pane

0x3cf7,	// (0x0008336b) list_single_recal_day_pane_g7

0x4271,	// (0x000838e5) list_recal_day_event_pane_cp01

0x427a,	// (0x000838ee) list_recal_vselct_arw_lo_pane_cp01

0x4282,	// (0x000838f6) list_recal_vselct_arw_up_pane_cp01

0x428a,	// (0x000838fe) list_recal_vselct_pane_cp01

0x2518,	// (0x00081b8c) list_recal_day_event_pane_cp01_g1

0x4294,	// (0x00083908) list_recal_day_event_pane_cp01_t1

0x3cff,	// (0x00083373) list_single_recal_day_pane_t1_ParamLimits

0x3d11,	// (0x00083385) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x0008f4c5) list_single_recal_day_pane_t_ParamLimits

0xe1aa,	// (0x0008d81e) bg_notes_pane_ParamLimits

0xe1b8,	// (0x0008d82c) list_notes_pane_ParamLimits

0x5c7a,	// (0x000852ee) scroll_pane_cp06_ParamLimits

0xe1da,	// (0x0008d84e) main_notes_pane_ParamLimits

0xf061,	// (0x0008e6d5) main_welc_pane

0xd9e4,	// (0x0008d058) main_welc_body_pane_ParamLimits

0xd9e4,	// (0x0008d058) main_welc_body_pane

0xd9f2,	// (0x0008d066) main_welc_opti_pane_ParamLimits

0xd9f2,	// (0x0008d066) main_welc_opti_pane

0xda01,	// (0x0008d075) main_welc_pane_t1_ParamLimits

0xda01,	// (0x0008d075) main_welc_pane_t1

0xda15,	// (0x0008d089) main_welc_body_row_pane_ParamLimits

0xda15,	// (0x0008d089) main_welc_body_row_pane

0xda46,	// (0x0008d0ba) main_welc_opti_row_pane_ParamLimits

0xda46,	// (0x0008d0ba) main_welc_opti_row_pane

0x42a2,	// (0x00083916) main_welc_opti_row_pane_g1

0x42aa,	// (0x0008391e) main_welc_opti_row_pane_t1

0x42b9,	// (0x0008392d) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
