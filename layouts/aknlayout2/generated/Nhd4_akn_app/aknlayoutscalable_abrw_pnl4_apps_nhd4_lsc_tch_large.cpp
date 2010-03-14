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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0008eaf4 };

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
0x0bc3,	// (0x0008f6b7) Screen

0x0bcf,	// (0x0008f6c3) application_window

0x0c0b,	// (0x0008f6ff) area_bottom_pane_ParamLimits

0x0c0b,	// (0x0008f6ff) area_bottom_pane

0x0c44,	// (0x0008f738) area_top_pane_ParamLimits

0x0c44,	// (0x0008f738) area_top_pane

0xee1f,	// (0x0009d913) call_video_uplink_pane_ParamLimits

0xee1f,	// (0x0009d913) call_video_uplink_pane

0x0cb9,	// (0x0008f7ad) main_pane_ParamLimits

0x0cb9,	// (0x0008f7ad) main_pane

0xa632,	// (0x00099126) context_pane

0x4af8,	// (0x000935ec) navi_pane

0x4b20,	// (0x00093614) popup_cale_events_window_ParamLimits

0x4b20,	// (0x00093614) popup_cale_events_window

0xa645,	// (0x00099139) popup_mup_playback_window

0x4b38,	// (0x0009362c) signal_pane

0xe1da,	// (0x0009ccce) main_browser_pane

0xec64,	// (0x0009d758) main_burst_pane

0x4858,	// (0x0009334c) main_calc_pane

0xec64,	// (0x0009d758) main_cale_day_pane

0xe1da,	// (0x0009ccce) main_cale_month_pane

0xec64,	// (0x0009d758) main_cale_week_pane

0xec64,	// (0x0009d758) main_call_pane

0xde68,	// (0x0009c95c) main_call_poc_pane

0xec64,	// (0x0009d758) main_camera_pane

0xec64,	// (0x0009d758) main_chi_dic_pane

0xeaf3,	// (0x0009d5e7) main_clock_pane

0xde68,	// (0x0009c95c) main_fmradio_pane

0xec64,	// (0x0009d758) main_graph_messa_pane

0xde68,	// (0x0009c95c) main_help_pane

0xe1da,	// (0x0009ccce) main_im_pane

0xe0c3,	// (0x0009cbb7) main_image_pane_ParamLimits

0xe0c3,	// (0x0009cbb7) main_image_pane

0xde68,	// (0x0009c95c) main_location2_pane

0xec64,	// (0x0009d758) main_location_pane

0xde68,	// (0x0009c95c) main_messa_pane

0xde68,	// (0x0009c95c) main_mp2_pane

0xec64,	// (0x0009d758) main_mp_pane

0xde68,	// (0x0009c95c) main_msg_pane

0xde68,	// (0x0009c95c) main_mup_eq_pane

0xde68,	// (0x0009c95c) main_mup_pane

0xe1da,	// (0x0009ccce) main_notes_pane

0xde68,	// (0x0009c95c) main_pec_pane

0xde68,	// (0x0009c95c) main_phob_pane

0xde68,	// (0x0009c95c) main_pinb_pane

0xde68,	// (0x0009c95c) main_postcard_pane

0xde68,	// (0x0009c95c) main_qdial_pane

0xec64,	// (0x0009d758) main_skin_pane

0xde68,	// (0x0009c95c) main_smil2_pane

0xec64,	// (0x0009d758) main_smil_pane

0xec64,	// (0x0009d758) main_video_pane

0xec64,	// (0x0009d758) main_video_tele_pane

0xe0c3,	// (0x0009cbb7) main_viewer_pane_ParamLimits

0xe0c3,	// (0x0009cbb7) main_viewer_pane

0xec64,	// (0x0009d758) main_vorec_pane

0x48ac,	// (0x000933a0) popup_blid_sat_info_window_ParamLimits

0x48ac,	// (0x000933a0) popup_blid_sat_info_window

0x4904,	// (0x000933f8) popup_dyc_status_message_window_ParamLimits

0x4904,	// (0x000933f8) popup_dyc_status_message_window

0x491c,	// (0x00093410) popup_grid_large_graphic_window_ParamLimits

0x491c,	// (0x00093410) popup_grid_large_graphic_window

0x49d2,	// (0x000934c6) popup_loc_request_window_ParamLimits

0x49d2,	// (0x000934c6) popup_loc_request_window

0x4ad0,	// (0x000935c4) popup_wml_address_window_ParamLimits

0x4ad0,	// (0x000935c4) popup_wml_address_window

0x4692,	// (0x00093186) call_muted_g1

0x3772,	// (0x00092266) popup_call_audio_conf_window_ParamLimits

0x3772,	// (0x00092266) popup_call_audio_conf_window

0x46a6,	// (0x0009319a) popup_call_audio_first_window_ParamLimits

0x46a6,	// (0x0009319a) popup_call_audio_first_window

0x471c,	// (0x00093210) popup_call_audio_in_window_ParamLimits

0x471c,	// (0x00093210) popup_call_audio_in_window

0x4758,	// (0x0009324c) popup_call_audio_out_window_ParamLimits

0x4758,	// (0x0009324c) popup_call_audio_out_window

0x4792,	// (0x00093286) popup_call_audio_second_window_ParamLimits

0x4792,	// (0x00093286) popup_call_audio_second_window

0x47e8,	// (0x000932dc) popup_call_audio_wait_window_ParamLimits

0x47e8,	// (0x000932dc) popup_call_audio_wait_window

0x481d,	// (0x00093311) popup_number_entry_window_ParamLimits

0x481d,	// (0x00093311) popup_number_entry_window

0xd7f7,	// (0x0009c2eb) bg_popup_call_pane_cp05_ParamLimits

0xd7f7,	// (0x0009c2eb) bg_popup_call_pane_cp05

0xd817,	// (0x0009c30b) popup_number_entry_window_t1

0xd82a,	// (0x0009c31e) popup_number_entry_window_t2

0xd83c,	// (0x0009c330) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0009dbdb) popup_number_entry_window_t

0xd84e,	// (0x0009c342) text_title_cp2

0xd861,	// (0x0009c355) bg_popup_call_pane_cp_ParamLimits

0xd861,	// (0x0009c355) bg_popup_call_pane_cp

0xd86f,	// (0x0009c363) call_thumbnail_pane

0xd877,	// (0x0009c36b) popup_call_audio_in_window_g1_ParamLimits

0xd877,	// (0x0009c36b) popup_call_audio_in_window_g1

0xd883,	// (0x0009c377) popup_call_audio_in_window_g2_ParamLimits

0xd883,	// (0x0009c377) popup_call_audio_in_window_g2

0xd88f,	// (0x0009c383) popup_call_audio_in_window_g3_ParamLimits

0xd88f,	// (0x0009c383) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0009dbe4) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0009dbe4) popup_call_audio_in_window_g

0xd89b,	// (0x0009c38f) popup_call_audio_in_window_t1_ParamLimits

0xd89b,	// (0x0009c38f) popup_call_audio_in_window_t1

0xd8b6,	// (0x0009c3aa) popup_call_audio_in_window_t2_ParamLimits

0xd8b6,	// (0x0009c3aa) popup_call_audio_in_window_t2

0xd8d1,	// (0x0009c3c5) popup_call_audio_in_window_t3_ParamLimits

0xd8d1,	// (0x0009c3c5) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0009dbeb) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0009dbeb) popup_call_audio_in_window_t

0xd861,	// (0x0009c355) bg_popup_call_pane_cp01_ParamLimits

0xd861,	// (0x0009c355) bg_popup_call_pane_cp01

0xd86f,	// (0x0009c363) call_thumbnail_pane_cp02

0xd8e4,	// (0x0009c3d8) call_type_pane_cp022

0xd8ec,	// (0x0009c3e0) popup_call_audio_out_window_g1_ParamLimits

0xd8ec,	// (0x0009c3e0) popup_call_audio_out_window_g1

0xd8fe,	// (0x0009c3f2) popup_call_audio_out_window_g2_ParamLimits

0xd8fe,	// (0x0009c3f2) popup_call_audio_out_window_g2

0xd90a,	// (0x0009c3fe) popup_call_audio_out_window_g3_ParamLimits

0xd90a,	// (0x0009c3fe) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0009dbf2) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0009dbf2) popup_call_audio_out_window_g

0xd91c,	// (0x0009c410) popup_call_audio_out_window_t1_ParamLimits

0xd91c,	// (0x0009c410) popup_call_audio_out_window_t1

0xdb94,	// (0x0009c688) popup_call_audio_out_window_t2_ParamLimits

0xdb94,	// (0x0009c688) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0009dbf9) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0009dbf9) popup_call_audio_out_window_t

0xdba9,	// (0x0009c69d) bg_popup_call_pane_ParamLimits

0xdba9,	// (0x0009c69d) bg_popup_call_pane

0x0e71,	// (0x0008f965) call_thumbnail_pane_cp_ParamLimits

0x0e71,	// (0x0008f965) call_thumbnail_pane_cp

0xdc2d,	// (0x0009c721) call_type_pane_cp01_ParamLimits

0xdc2d,	// (0x0009c721) call_type_pane_cp01

0xdc71,	// (0x0009c765) popup_call_audio_first_window_g1_ParamLimits

0xdc71,	// (0x0009c765) popup_call_audio_first_window_g1

0xdcbd,	// (0x0009c7b1) popup_call_audio_first_window_g2_ParamLimits

0xdcbd,	// (0x0009c7b1) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0009dbfe) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0009dbfe) popup_call_audio_first_window_g

0xdd01,	// (0x0009c7f5) popup_call_audio_first_window_t1_ParamLimits

0xdd01,	// (0x0009c7f5) popup_call_audio_first_window_t1

0xddad,	// (0x0009c8a1) popup_call_audio_first_window_t4_ParamLimits

0xddad,	// (0x0009c8a1) popup_call_audio_first_window_t4

0xde39,	// (0x0009c92d) popup_call_audio_first_window_t5_ParamLimits

0xde39,	// (0x0009c92d) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0009dc03) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0009dc03) popup_call_audio_first_window_t

0xde68,	// (0x0009c95c) bg_popup_call_pane_cp02

0xde72,	// (0x0009c966) call_type_pane_cp023

0xde7a,	// (0x0009c96e) popup_call_audio_wait_window_g1

0xde82,	// (0x0009c976) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0009dc0a) popup_call_audio_wait_window_g

0xde8a,	// (0x0009c97e) popup_call_audio_wait_window_t3

0xde98,	// (0x0009c98c) bg_popup_call_pane_cp03_ParamLimits

0xde98,	// (0x0009c98c) bg_popup_call_pane_cp03

0xdef8,	// (0x0009c9ec) call_thumbnail_pane_cp011_ParamLimits

0xdef8,	// (0x0009c9ec) call_thumbnail_pane_cp011

0xdf04,	// (0x0009c9f8) call_type_pane_cp034_ParamLimits

0xdf04,	// (0x0009c9f8) call_type_pane_cp034

0xdf40,	// (0x0009ca34) popup_call_audio_second_window_g1_ParamLimits

0xdf40,	// (0x0009ca34) popup_call_audio_second_window_g1

0xdf7c,	// (0x0009ca70) popup_call_audio_second_window_g2_ParamLimits

0xdf7c,	// (0x0009ca70) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0009dc0f) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0009dc0f) popup_call_audio_second_window_g

0xdfb8,	// (0x0009caac) popup_call_audio_second_window_t1_ParamLimits

0xdfb8,	// (0x0009caac) popup_call_audio_second_window_t1

0xe039,	// (0x0009cb2d) popup_call_audio_second_window_t2_ParamLimits

0xe039,	// (0x0009cb2d) popup_call_audio_second_window_t2

0xe06f,	// (0x0009cb63) popup_call_audio_second_window_t3_ParamLimits

0xe06f,	// (0x0009cb63) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0009dc14) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0009dc14) popup_call_audio_second_window_t

0xde68,	// (0x0009c95c) bg_popup_call_pane_cp04

0xe0a5,	// (0x0009cb99) list_conf_pane

0xe0ad,	// (0x0009cba1) popup_call_audio_conf_window_t1

0xe0bb,	// (0x0009cbaf) call_thumbnail_pane_g1

0xe0c3,	// (0x0009cbb7) bg_pinb_pane_ParamLimits

0xe0c3,	// (0x0009cbb7) bg_pinb_pane

0xe0d1,	// (0x0009cbc5) find_pinb_pane

0xe0da,	// (0x0009cbce) listscroll_pinb_pane_ParamLimits

0xe0da,	// (0x0009cbce) listscroll_pinb_pane

0xe0e9,	// (0x0009cbdd) pinb_bg_pane_g1

0x0e95,	// (0x0008f989) pinb_bg_pane_g2

0x0ea1,	// (0x0008f995) pinb_bg_pane_g3

0x0ead,	// (0x0008f9a1) pinb_bg_pane_g4

0x0eb9,	// (0x0008f9ad) pinb_bg_pane_g5

0x0ec5,	// (0x0008f9b9) pinb_bg_pane_g6

0x0ed0,	// (0x0008f9c4) pinb_bg_pane_g7

0x0edb,	// (0x0008f9cf) pinb_bg_pane_g8

0x0ee6,	// (0x0008f9da) pinb_bg_pane_g9

0x0ef0,	// (0x0008f9e4) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0009dc1b) pinb_bg_pane_g

0x0f05,	// (0x0008f9f9) grid_pinb_pane

0x0f0e,	// (0x0008fa02) list_pinb_pane

0x0f17,	// (0x0008fa0b) scroll_pane_cp01_ParamLimits

0x0f17,	// (0x0008fa0b) scroll_pane_cp01

0xe0fb,	// (0x0009cbef) find_pinb_pane_g1_ParamLimits

0xe0fb,	// (0x0009cbef) find_pinb_pane_g1

0xe113,	// (0x0009cc07) find_pinb_pane_t1

0xe125,	// (0x0009cc19) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0009dc35) find_pinb_pane_t

0xe13a,	// (0x0009cc2e) input_focus_pane_cp01_ParamLimits

0xe13a,	// (0x0009cc2e) input_focus_pane_cp01

0x0f29,	// (0x0008fa1d) cell_pinb_pane_ParamLimits

0x0f29,	// (0x0008fa1d) cell_pinb_pane

0x0f5b,	// (0x0008fa4f) cell_pinb_pane_g1_ParamLimits

0x0f5b,	// (0x0008fa4f) cell_pinb_pane_g1

0x0f6b,	// (0x0008fa5f) cell_pinb_pane_g2_ParamLimits

0x0f6b,	// (0x0008fa5f) cell_pinb_pane_g2

0xe146,	// (0x0009cc3a) cell_pinb_pane_g3_ParamLimits

0xe146,	// (0x0009cc3a) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0009dc3a) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0009dc3a) cell_pinb_pane_g

0xde68,	// (0x0009c95c) grid_highlight_pane_cp01

0x0f77,	// (0x0008fa6b) list_pinb_item_pane_ParamLimits

0x0f77,	// (0x0008fa6b) list_pinb_item_pane

0xde68,	// (0x0009c95c) list_highlight_pane_cp02

0xe152,	// (0x0009cc46) list_pinb_item_pane_g1_ParamLimits

0xe152,	// (0x0009cc46) list_pinb_item_pane_g1

0xe15f,	// (0x0009cc53) list_pinb_item_pane_g2_ParamLimits

0xe15f,	// (0x0009cc53) list_pinb_item_pane_g2

0x0f8b,	// (0x0008fa7f) list_pinb_item_pane_g3_ParamLimits

0x0f8b,	// (0x0008fa7f) list_pinb_item_pane_g3

0xe16b,	// (0x0009cc5f) list_pinb_item_pane_g4_ParamLimits

0xe16b,	// (0x0009cc5f) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0009dc41) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0009dc41) list_pinb_item_pane_g

0xe177,	// (0x0009cc6b) list_pinb_item_pane_t1_ParamLimits

0xe177,	// (0x0009cc6b) list_pinb_item_pane_t1

0x0fba,	// (0x0008faae) calc_display_pane

0x0fe2,	// (0x0008fad6) calc_paper_pane

0x1005,	// (0x0008faf9) grid_calc_pane

0xde68,	// (0x0009c95c) bg_list_pane_cp01

0x1033,	// (0x0008fb27) clock_g1

0x103b,	// (0x0008fb2f) clock_g2

0x0001,

0xf156,	// (0x0009dc4a) clock_g

0x1043,	// (0x0008fb37) clock_t1_ParamLimits

0x1043,	// (0x0008fb37) clock_t1

0x1058,	// (0x0008fb4c) clock_t2_ParamLimits

0x1058,	// (0x0008fb4c) clock_t2

0x106a,	// (0x0008fb5e) clock_t3_ParamLimits

0x106a,	// (0x0008fb5e) clock_t3

0x107c,	// (0x0008fb70) clock_t4_ParamLimits

0x107c,	// (0x0008fb70) clock_t4

0x108e,	// (0x0008fb82) clock_t5_ParamLimits

0x108e,	// (0x0008fb82) clock_t5

0x10a3,	// (0x0008fb97) clock_t6_ParamLimits

0x10a3,	// (0x0008fb97) clock_t6

0x10b5,	// (0x0008fba9) clock_t7_ParamLimits

0x10b5,	// (0x0008fba9) clock_t7

0x10c7,	// (0x0008fbbb) clock_t8_ParamLimits

0x10c7,	// (0x0008fbbb) clock_t8

0x10db,	// (0x0008fbcf) clock_t9_ParamLimits

0x10db,	// (0x0008fbcf) clock_t9

0x0008,

0xf15b,	// (0x0009dc4f) clock_t_ParamLimits

0xf15b,	// (0x0009dc4f) clock_t

0xe18e,	// (0x0009cc82) popup_clock_analogue_window_cp02

0xe18e,	// (0x0009cc82) popup_clock_digital_window_cp01

0xe196,	// (0x0009cc8a) listscroll_help_pane

0xde68,	// (0x0009c95c) phob_pre_status_pane

0xe1a0,	// (0x0009cc94) grid_qdial_pane

0xde68,	// (0x0009c95c) listscroll_mce_pane

0xe1aa,	// (0x0009cc9e) bg_notes_pane

0xe1b8,	// (0x0009ccac) list_notes_pane

0x10ef,	// (0x0008fbe3) scroll_pane_cp06

0xe1c6,	// (0x0009ccba) bg_calc_paper_pane

0xa011,	// (0x00098b05) list_calc_pane

0xe1da,	// (0x0009ccce) bg_calc_display_pane

0x1103,	// (0x0008fbf7) calc_display_pane_t1

0x1115,	// (0x0008fc09) calc_display_pane_t2

0xa02b,	// (0x00098b1f) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0009dc62) calc_display_pane_t

0x1127,	// (0x0008fc1b) cell_calc_pane_ParamLimits

0x1127,	// (0x0008fc1b) cell_calc_pane

0xe1e6,	// (0x0009ccda) bg_calc_paper_pane_g1

0xe1f2,	// (0x0009cce6) bg_calc_paper_pane_g2

0xe1fe,	// (0x0009ccf2) bg_calc_paper_pane_g3

0xe20a,	// (0x0009ccfe) bg_calc_paper_pane_g4

0xe216,	// (0x0009cd0a) bg_calc_paper_pane_g5

0x115e,	// (0x0008fc52) bg_calc_paper_pane_g6

0x116f,	// (0x0008fc63) bg_calc_paper_pane_g7

0x1180,	// (0x0008fc74) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0009dc69) bg_calc_paper_pane_g

0x1193,	// (0x0008fc87) calc_bg_paper_pane_g9

0x11a6,	// (0x0008fc9a) list_calc_item_pane_ParamLimits

0x11a6,	// (0x0008fc9a) list_calc_item_pane

0xe222,	// (0x0009cd16) list_calc_item_pane_g1

0xa03d,	// (0x00098b31) list_calc_item_pane_t1_ParamLimits

0xa03d,	// (0x00098b31) list_calc_item_pane_t1

0x11be,	// (0x0008fcb2) list_calc_item_pane_t2_ParamLimits

0x11be,	// (0x0008fcb2) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0009dc7a) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0009dc7a) list_calc_item_pane_t

0xe22f,	// (0x0009cd23) cell_calc_pane_g1

0xe239,	// (0x0009cd2d) grid_highlight_pane_cp02

0xe25b,	// (0x0009cd4f) bg_calc_display_pane_g1

0xa04f,	// (0x00098b43) bg_calc_display_pane_g2

0xe264,	// (0x0009cd58) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0009dc84) bg_calc_display_pane_g

0x11f0,	// (0x0008fce4) cell_qdial_pane_ParamLimits

0x11f0,	// (0x0008fce4) cell_qdial_pane

0x1204,	// (0x0008fcf8) cell_qdial_pane_g1_ParamLimits

0x1204,	// (0x0008fcf8) cell_qdial_pane_g1

0x121a,	// (0x0008fd0e) cell_qdial_pane_g2_ParamLimits

0x121a,	// (0x0008fd0e) cell_qdial_pane_g2

0xe26d,	// (0x0009cd61) cell_qdial_pane_g3_ParamLimits

0xe26d,	// (0x0009cd61) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0009dc8b) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0009dc8b) cell_qdial_pane_g

0x1241,	// (0x0008fd35) cell_qdial_pane_t1_ParamLimits

0x1241,	// (0x0008fd35) cell_qdial_pane_t1

0x1259,	// (0x0008fd4d) cell_qdial_pane_t2_ParamLimits

0x1259,	// (0x0008fd4d) cell_qdial_pane_t2

0x126c,	// (0x0008fd60) cell_qdial_pane_t3_ParamLimits

0x126c,	// (0x0008fd60) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0009dc94) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0009dc94) cell_qdial_pane_t

0xde68,	// (0x0009c95c) grid_highlight_pane_cp04

0xe279,	// (0x0009cd6d) thumbnail_qdial_pane_ParamLimits

0xe279,	// (0x0009cd6d) thumbnail_qdial_pane

0xe2d5,	// (0x0009cdc9) list_help_pane

0xe2de,	// (0x0009cdd2) scroll_pane_cp02

0x127f,	// (0x0008fd73) help_list_pane_t1_ParamLimits

0x127f,	// (0x0008fd73) help_list_pane_t1

0xa059,	// (0x00098b4d) bg_notes_pane_g2

0xa061,	// (0x00098b55) bg_notes_pane_g3

0xa069,	// (0x00098b5d) notes_bg_pane_g1

0xa071,	// (0x00098b65) notes_bg_pane_g4

0xa079,	// (0x00098b6d) notes_bg_pane_g5

0xa081,	// (0x00098b75) notes_bg_pane_g6

0xa089,	// (0x00098b7d) notes_bg_pane_g7

0xa091,	// (0x00098b85) notes_bg_pane_g8

0xa099,	// (0x00098b8d) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0009dcb2) notes_bg_pane_g

0x129f,	// (0x0008fd93) list_notes_text_pane_ParamLimits

0x129f,	// (0x0008fd93) list_notes_text_pane

0xe2e7,	// (0x0009cddb) list_notes_text_pane_g1

0x12b6,	// (0x0008fdaa) list_notes_text_pane_t1

0xe1da,	// (0x0009ccce) listscroll_cale_week_pane

0x12e1,	// (0x0008fdd5) bg_cale_heading_pane

0xe301,	// (0x0009cdf5) bg_cale_pane_cp01

0x12f9,	// (0x0008fded) cale_week_corner_pane

0x130a,	// (0x0008fdfe) cale_week_day_heading_pane

0x1322,	// (0x0008fe16) cale_week_scroll_pane_g1

0x1337,	// (0x0008fe2b) cale_week_scroll_pane_g2

0x1348,	// (0x0008fe3c) cale_week_scroll_pane_g3

0x1359,	// (0x0008fe4d) cale_week_scroll_pane_g4

0x136a,	// (0x0008fe5e) cale_week_scroll_pane_g5

0x137d,	// (0x0008fe71) cale_week_scroll_pane_g6

0x1390,	// (0x0008fe84) cale_week_scroll_pane_g7

0x13a3,	// (0x0008fe97) cale_week_scroll_pane_g8

0x13b6,	// (0x0008feaa) cale_week_scroll_pane_g9

0x13c7,	// (0x0008febb) cale_week_scroll_pane_g10

0x13d8,	// (0x0008fecc) cale_week_scroll_pane_g11

0x13e9,	// (0x0008fedd) cale_week_scroll_pane_g12

0x13fa,	// (0x0008feee) cale_week_scroll_pane_g13

0x140b,	// (0x0008feff) cale_week_scroll_pane_g14

0x141c,	// (0x0008ff10) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0009dcc1) cale_week_scroll_pane_g

0x1431,	// (0x0008ff25) cale_week_time_pane

0x1444,	// (0x0008ff38) grid_cale_week_pane

0x1459,	// (0x0008ff4d) scroll_pane_cp08

0x1473,	// (0x0008ff67) cell_cale_week_pane_ParamLimits

0x1473,	// (0x0008ff67) cell_cale_week_pane

0x14b3,	// (0x0008ffa7) cale_week_day_heading_pane_t1

0x14c7,	// (0x0008ffbb) cale_week_day_heading_pane_t2

0x14db,	// (0x0008ffcf) cale_week_day_heading_pane_t3

0x14ef,	// (0x0008ffe3) cale_week_day_heading_pane_t4

0x1503,	// (0x0008fff7) cale_week_day_heading_pane_t5

0x1517,	// (0x0009000b) cale_week_day_heading_pane_t6

0x152d,	// (0x00090021) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0009dce0) cale_week_day_heading_pane_t

0xe32c,	// (0x0009ce20) bg_cale_side_pane

0x1541,	// (0x00090035) cale_week_time_pane_t1

0x1559,	// (0x0009004d) cale_week_time_pane_t2

0x1571,	// (0x00090065) cale_week_time_pane_t3

0x1589,	// (0x0009007d) cale_week_time_pane_t4

0x15a1,	// (0x00090095) cale_week_time_pane_t5

0x15b9,	// (0x000900ad) cale_week_time_pane_t6

0x15d1,	// (0x000900c5) cale_week_time_pane_t7

0x15e9,	// (0x000900dd) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0009dcef) cale_week_time_pane_t

0x1601,	// (0x000900f5) cell_cale_week_pane_g2

0x161a,	// (0x0009010e) cell_cale_week_pane_g3_ParamLimits

0x161a,	// (0x0009010e) cell_cale_week_pane_g3

0xe33a,	// (0x0009ce2e) grid_highlight_pane_cp07

0xe342,	// (0x0009ce36) listscroll_gms_pane

0xe34c,	// (0x0009ce40) grid_gms_pane

0xe355,	// (0x0009ce49) listscroll_gms_pane_g1

0xe35d,	// (0x0009ce51) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0009dd00) listscroll_gms_pane_g

0x1632,	// (0x00090126) scroll_pane_cp010

0x163d,	// (0x00090131) cell_gms_pane_ParamLimits

0x163d,	// (0x00090131) cell_gms_pane

0x164f,	// (0x00090143) cell_gms_pane_g1

0xe365,	// (0x0009ce59) cell_gms_pane_g2

0xe2e7,	// (0x0009cddb) cell_gms_pane_g3

0xe36d,	// (0x0009ce61) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0009dd05) cell_gms_pane_g

0xe376,	// (0x0009ce6a) grid_highlight_pane_cp09

0x463a,	// (0x0009312e) phob_pre_status_pane_g1

0x4642,	// (0x00093136) phob_pre_status_pane_g2

0x464a,	// (0x0009313e) phob_pre_status_pane_g3

0x4652,	// (0x00093146) phob_pre_status_pane_g4

0x0004,

0xf5f9,	// (0x0009e0ed) phob_pre_status_pane_g

0x4664,	// (0x00093158) phob_pre_status_pane_t1

0x4672,	// (0x00093166) phob_pre_status_pane_t2

0x4682,	// (0x00093176) phob_pre_status_pane_t3

0x0002,

0xf604,	// (0x0009e0f8) phob_pre_status_pane_t

0xde68,	// (0x0009c95c) bg_list_pane_cp05

0xa0a9,	// (0x00098b9d) grid_vorec_pane

0xa0b1,	// (0x00098ba5) vorec_t1

0xa0bf,	// (0x00098bb3) vorec_t2

0xa0cd,	// (0x00098bc1) vorec_t3

0xa0db,	// (0x00098bcf) vorec_t4

0xa0e9,	// (0x00098bdd) vorec_t5

0xa0f7,	// (0x00098beb) vorec_t6

0x0006,

0xf21a,	// (0x0009dd0e) vorec_t

0xa113,	// (0x00098c07) wait_bar_pane_cp01

0xe37e,	// (0x0009ce72) cell_vorec_pane_ParamLimits

0xe37e,	// (0x0009ce72) cell_vorec_pane

0xe391,	// (0x0009ce85) cell_vorec_pane_g1

0xde68,	// (0x0009c95c) grid_highlight_pane_cp05

0x166f,	// (0x00090163) cams_zoom_pane

0x167e,	// (0x00090172) image_vga_pane

0x1698,	// (0x0009018c) main_camera_pane_g1

0x16aa,	// (0x0009019e) main_camera_pane_g2

0x16bc,	// (0x000901b0) main_camera_pane_g3

0x16ce,	// (0x000901c2) main_camera_pane_g4

0x16e0,	// (0x000901d4) main_camera_pane_g5

0x16f2,	// (0x000901e6) main_camera_pane_g6

0x1704,	// (0x000901f8) main_camera_pane_g7

0x0007,

0xf229,	// (0x0009dd1d) main_camera_pane_g

0x1716,	// (0x0009020a) main_camera_pane_t1

0x172c,	// (0x00090220) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0009dd2e) main_camera_pane_t

0x1768,	// (0x0009025c) cams_zoom_pane_cp_ParamLimits

0x1768,	// (0x0009025c) cams_zoom_pane_cp

0x1790,	// (0x00090284) image_cif_pane_ParamLimits

0x1790,	// (0x00090284) image_cif_pane

0x17cb,	// (0x000902bf) image_subqcif_pane

0x17d3,	// (0x000902c7) main_video_pane_g1_ParamLimits

0x17d3,	// (0x000902c7) main_video_pane_g1

0x17f7,	// (0x000902eb) main_video_pane_g2_ParamLimits

0x17f7,	// (0x000902eb) main_video_pane_g2

0x182d,	// (0x00090321) main_video_pane_g3_ParamLimits

0x182d,	// (0x00090321) main_video_pane_g3

0x185d,	// (0x00090351) main_video_pane_g4_ParamLimits

0x185d,	// (0x00090351) main_video_pane_g4

0x188d,	// (0x00090381) main_video_pane_g5_ParamLimits

0x188d,	// (0x00090381) main_video_pane_g5

0xe3a7,	// (0x0009ce9b) main_video_pane_g6_ParamLimits

0xe3a7,	// (0x0009ce9b) main_video_pane_g6

0x0006,

0xf23f,	// (0x0009dd33) main_video_pane_g_ParamLimits

0xf23f,	// (0x0009dd33) main_video_pane_g

0x18b8,	// (0x000903ac) main_video_pane_t1_ParamLimits

0x18b8,	// (0x000903ac) main_video_pane_t1

0xe3c1,	// (0x0009ceb5) cams_zoom_pane_g1

0xe3ca,	// (0x0009cebe) cams_zoom_pane_g2

0xe3d3,	// (0x0009cec7) cams_zoom_pane_g3

0xe3dc,	// (0x0009ced0) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0009dd42) cams_zoom_pane_g

0x1915,	// (0x00090409) grid_cams_pane

0x192f,	// (0x00090423) linegrid_cams_pane

0x1942,	// (0x00090436) cell_cams_pane_ParamLimits

0x1942,	// (0x00090436) cell_cams_pane

0xe3e5,	// (0x0009ced9) cams_burst_image_pane

0xe3ed,	// (0x0009cee1) cell_cams_pane_g1

0xde68,	// (0x0009c95c) grid_highlight_pane_cp03

0xe22f,	// (0x0009cd23) mp_bg_pane_g1

0xde68,	// (0x0009c95c) bg_list_pane_cp03

0xa50a,	// (0x00098ffe) bg_mp_pane

0xa512,	// (0x00099006) grid_mp_pane

0xa51a,	// (0x0009900e) media_player_g1

0xa522,	// (0x00099016) media_player_t1

0xa530,	// (0x00099024) media_player_t2

0xa53e,	// (0x00099032) media_player_t3

0xa54c,	// (0x00099040) media_player_t4

0xa55a,	// (0x0009904e) media_player_t5

0xa568,	// (0x0009905c) media_player_t6

0xa576,	// (0x0009906a) media_player_t7

0x0006,

0xf5e3,	// (0x0009e0d7) media_player_t

0xa584,	// (0x00099078) wait_bar_pane_cp02

0xf5c8,	// (0x0009e0bc) main_usb_pane_t

0x4631,	// (0x00093125) cell_mp_pane

0xe22f,	// (0x0009cd23) cell_mp_pane_g1

0xde68,	// (0x0009c95c) grid_highlight_pane_cp06

0xe3f5,	// (0x0009cee9) grid_skin_colour_pane

0xe3fd,	// (0x0009cef1) list_highlight_pane_cp03

0x1a72,	// (0x00090566) skin_g1

0xe405,	// (0x0009cef9) skin_t1

0xe414,	// (0x0009cf08) skin_t2

0x0001,

0xf283,	// (0x0009dd77) skin_t

0x1a7a,	// (0x0009056e) cell_skin_colour_pane_ParamLimits

0x1a7a,	// (0x0009056e) cell_skin_colour_pane

0xe422,	// (0x0009cf16) cell_skin_colour_pane_g1

0x1af3,	// (0x000905e7) call_video_g1_ParamLimits

0x1af3,	// (0x000905e7) call_video_g1

0x1b0f,	// (0x00090603) call_video_g2_ParamLimits

0x1b0f,	// (0x00090603) call_video_g2

0x0001,

0xf288,	// (0x0009dd7c) call_video_g_ParamLimits

0xf288,	// (0x0009dd7c) call_video_g

0x1b61,	// (0x00090655) call_video_uplink_pane_cp1_ParamLimits

0x1b61,	// (0x00090655) call_video_uplink_pane_cp1

0xe434,	// (0x0009cf28) call_video_uplink_pane_cp2

0x1c00,	// (0x000906f4) video_down_crop_pane_ParamLimits

0x1c00,	// (0x000906f4) video_down_crop_pane

0x1ce9,	// (0x000907dd) video_down_pane_ParamLimits

0x1ce9,	// (0x000907dd) video_down_pane

0xe43c,	// (0x0009cf30) video_down_subqcif_pane_ParamLimits

0xe43c,	// (0x0009cf30) video_down_subqcif_pane

0xe454,	// (0x0009cf48) video_down_subqcif_pane_cp_ParamLimits

0xe454,	// (0x0009cf48) video_down_subqcif_pane_cp

0xe47a,	// (0x0009cf6e) im_reading_pane_ParamLimits

0xe47a,	// (0x0009cf6e) im_reading_pane

0x1df7,	// (0x000908eb) im_writing_pane_ParamLimits

0x1df7,	// (0x000908eb) im_writing_pane

0x1e0d,	// (0x00090901) im_reading_pane_t1

0xe494,	// (0x0009cf88) list_im_pane

0xe4a5,	// (0x0009cf99) scroll_pane_cp07

0x1e49,	// (0x0009093d) im_writing_pane_t1_ParamLimits

0x1e49,	// (0x0009093d) im_writing_pane_t1

0xe4be,	// (0x0009cfb2) im_writing_pane_t2_ParamLimits

0xe4be,	// (0x0009cfb2) im_writing_pane_t2

0x0001,

0xf292,	// (0x0009dd86) im_writing_pane_t_ParamLimits

0xf292,	// (0x0009dd86) im_writing_pane_t

0xde68,	// (0x0009c95c) input_focus_pane_cp04

0xde68,	// (0x0009c95c) input_focus_pane_cp05

0x1e5e,	// (0x00090952) list_im_single_pane_ParamLimits

0x1e5e,	// (0x00090952) list_im_single_pane

0x1e74,	// (0x00090968) list_single_im_pane_t1

0x45f1,	// (0x000930e5) blid_accuracy_pane

0x45f9,	// (0x000930ed) blid_compass_pane

0x4603,	// (0x000930f7) main_location_t1

0x4613,	// (0x00093107) main_location_t2

0x4623,	// (0x00093117) main_location_t3

0x0002,

0xf5f2,	// (0x0009e0e6) main_location_t

0xde68,	// (0x0009c95c) aid_levels_location

0xe22f,	// (0x0009cd23) blid_accuracy_pane_g1

0xe22f,	// (0x0009cd23) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0009dde8) blid_accuracy_pane_g

0xe506,	// (0x0009cffa) wml_content_pane

0xe544,	// (0x0009d038) wml_button_pane_ParamLimits

0xe544,	// (0x0009d038) wml_button_pane

0x1e83,	// (0x00090977) wml_list_single_large_pane_ParamLimits

0x1e83,	// (0x00090977) wml_list_single_large_pane

0x1e9a,	// (0x0009098e) wml_list_single_medium_pane_ParamLimits

0x1e9a,	// (0x0009098e) wml_list_single_medium_pane

0x1eb2,	// (0x000909a6) wml_list_single_small_pane_ParamLimits

0x1eb2,	// (0x000909a6) wml_list_single_small_pane

0xe558,	// (0x0009d04c) wml_selection_box_pane_ParamLimits

0xe558,	// (0x0009d04c) wml_selection_box_pane

0xe56b,	// (0x0009d05f) wml_list_single_pane_t1

0xe57a,	// (0x0009d06e) wml_list_single_medium_pane_t1

0xe589,	// (0x0009d07d) wml_list_single_large_pane_t1

0xe598,	// (0x0009d08c) input_focus_pane_cp02_ParamLimits

0xe598,	// (0x0009d08c) input_focus_pane_cp02

0xe5ab,	// (0x0009d09f) wml_selection_box_pane_g1

0xe5b4,	// (0x0009d0a8) wml_selection_box_pane_t1_ParamLimits

0xe5b4,	// (0x0009d0a8) wml_selection_box_pane_t1

0xe0c3,	// (0x0009cbb7) bg_wml_button_pane_ParamLimits

0xe0c3,	// (0x0009cbb7) bg_wml_button_pane

0xe5cc,	// (0x0009d0c0) wml_button_pane_g1

0xe5d4,	// (0x0009d0c8) wml_button_pane_t1

0xe5cc,	// (0x0009d0c0) wml_button_bg_pane_g1

0xe5e4,	// (0x0009d0d8) wml_button_bg_pane_g2

0xe5ec,	// (0x0009d0e0) wml_button_bg_pane_g3

0xe5f4,	// (0x0009d0e8) wml_button_bg_pane_g4

0xe5fc,	// (0x0009d0f0) wml_button_bg_pane_g5

0xe604,	// (0x0009d0f8) wml_button_bg_pane_g6

0xe60c,	// (0x0009d100) wml_button_bg_pane_g7

0xe614,	// (0x0009d108) wml_button_bg_pane_g8

0xe61c,	// (0x0009d110) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0009dd8b) wml_button_bg_pane_g

0x1ed0,	// (0x000909c4) bg_list_pane_cp02

0xe624,	// (0x0009d118) mce_header_pane_ParamLimits

0xe624,	// (0x0009d118) mce_header_pane

0xe63a,	// (0x0009d12e) mce_icon_pane

0xe63a,	// (0x0009d12e) mce_image_pane

0xe643,	// (0x0009d137) mce_text_pane_ParamLimits

0xe643,	// (0x0009d137) mce_text_pane

0x1ed8,	// (0x000909cc) scroll_pane_cp03

0xe53c,	// (0x0009d030) scroll_pane_cp04

0xe656,	// (0x0009d14a) scroll_pane_cp05_ParamLimits

0xe656,	// (0x0009d14a) scroll_pane_cp05

0x1ee2,	// (0x000909d6) mce_header_field_pane_ParamLimits

0x1ee2,	// (0x000909d6) mce_header_field_pane

0x1ef9,	// (0x000909ed) mce_header_field_pane_2_ParamLimits

0x1ef9,	// (0x000909ed) mce_header_field_pane_2

0x1f0f,	// (0x00090a03) mce_header_field_pane_3

0x1f17,	// (0x00090a0b) list_single_mce_message_pane_ParamLimits

0x1f17,	// (0x00090a0b) list_single_mce_message_pane

0x1f2f,	// (0x00090a23) list_single_mce_smart_pane_ParamLimits

0x1f2f,	// (0x00090a23) list_single_mce_smart_pane

0xe662,	// (0x0009d156) input_focus_pane_cp03

0xe66b,	// (0x0009d15f) list_header_data_pane

0x1f52,	// (0x00090a46) mce_header_field_pane_t1

0x1f62,	// (0x00090a56) list_single_mce_header_pane_ParamLimits

0x1f62,	// (0x00090a56) list_single_mce_header_pane

0xe673,	// (0x0009d167) list_single_mce_header_pane_t1

0xe682,	// (0x0009d176) list_single_mce_message_pane_g1

0xe68a,	// (0x0009d17e) list_single_mce_message_pane_t1

0x1f94,	// (0x00090a88) bg_cale_heading_pane_cp01_ParamLimits

0x1f94,	// (0x00090a88) bg_cale_heading_pane_cp01

0xe698,	// (0x0009d18c) bg_cale_pane_cp02_ParamLimits

0xe698,	// (0x0009d18c) bg_cale_pane_cp02

0x1fb7,	// (0x00090aab) cale_month_corner_pane

0x1fcd,	// (0x00090ac1) cale_month_day_heading_pane_ParamLimits

0x1fcd,	// (0x00090ac1) cale_month_day_heading_pane

0x2000,	// (0x00090af4) cale_month_pane_g1_ParamLimits

0x2000,	// (0x00090af4) cale_month_pane_g1

0x201c,	// (0x00090b10) cale_month_pane_g2_ParamLimits

0x201c,	// (0x00090b10) cale_month_pane_g2

0x2037,	// (0x00090b2b) cale_month_pane_g3_ParamLimits

0x2037,	// (0x00090b2b) cale_month_pane_g3

0x2063,	// (0x00090b57) cale_month_pane_g4_ParamLimits

0x2063,	// (0x00090b57) cale_month_pane_g4

0x208f,	// (0x00090b83) cale_month_pane_g5_ParamLimits

0x208f,	// (0x00090b83) cale_month_pane_g5

0x20c3,	// (0x00090bb7) cale_month_pane_g6_ParamLimits

0x20c3,	// (0x00090bb7) cale_month_pane_g6

0x20ff,	// (0x00090bf3) cale_month_pane_g7_ParamLimits

0x20ff,	// (0x00090bf3) cale_month_pane_g7

0x213b,	// (0x00090c2f) cale_month_pane_g8_ParamLimits

0x213b,	// (0x00090c2f) cale_month_pane_g8

0x2177,	// (0x00090c6b) cale_month_pane_g9_ParamLimits

0x2177,	// (0x00090c6b) cale_month_pane_g9

0x21b1,	// (0x00090ca5) cale_month_pane_g10_ParamLimits

0x21b1,	// (0x00090ca5) cale_month_pane_g10

0x21eb,	// (0x00090cdf) cale_month_pane_g11_ParamLimits

0x21eb,	// (0x00090cdf) cale_month_pane_g11

0x2225,	// (0x00090d19) cale_month_pane_g12_ParamLimits

0x2225,	// (0x00090d19) cale_month_pane_g12

0x225f,	// (0x00090d53) cale_month_pane_g13_ParamLimits

0x225f,	// (0x00090d53) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0009dd9e) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0009dd9e) cale_month_pane_g

0x2299,	// (0x00090d8d) cale_month_week_pane

0x22ac,	// (0x00090da0) grid_cale_month_pane_ParamLimits

0x22ac,	// (0x00090da0) grid_cale_month_pane

0x22da,	// (0x00090dce) cale_month_day_heading_pane_t1

0x2338,	// (0x00090e2c) cale_month_day_heading_pane_t2

0x239d,	// (0x00090e91) cale_month_day_heading_pane_t3

0x2402,	// (0x00090ef6) cale_month_day_heading_pane_t4

0x2467,	// (0x00090f5b) cale_month_day_heading_pane_t5

0x24dc,	// (0x00090fd0) cale_month_day_heading_pane_t6

0x2551,	// (0x00091045) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0009ddb9) cale_month_day_heading_pane_t

0xe32c,	// (0x0009ce20) bg_cale_side_pane_cp01

0x25c6,	// (0x000910ba) cale_month_week_pane_t1

0x25dd,	// (0x000910d1) cale_month_week_pane_t2

0x25f4,	// (0x000910e8) cale_month_week_pane_t3

0x260b,	// (0x000910ff) cale_month_week_pane_t4

0x2622,	// (0x00091116) cale_month_week_pane_t5

0x2639,	// (0x0009112d) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0009ddc8) cale_month_week_pane_t

0x2650,	// (0x00091144) cell_cale_month_pane_ParamLimits

0x2650,	// (0x00091144) cell_cale_month_pane

0xa11b,	// (0x00098c0f) cell_cale_month_pane_g1

0x2750,	// (0x00091244) cell_cale_month_pane_t1_ParamLimits

0x2750,	// (0x00091244) cell_cale_month_pane_t1

0xe33a,	// (0x0009ce2e) grid_highlight_pane_cp08

0xe22f,	// (0x0009cd23) main_smil_g1

0x276c,	// (0x00091260) smil_status_pane

0xe6cd,	// (0x0009d1c1) smil_text_pane

0xa422,	// (0x00098f16) bg_popup_call3_rect_pane_g8

0xa42a,	// (0x00098f1e) bg_popup_call3_rect_pane_g9

0x0008,

0xf586,	// (0x0009e07a) bg_popup_call3_rect_pane_g

0xa6ac,	// (0x000991a0) smil_status_volume_pane_g1

0xe6d7,	// (0x0009d1cb) smil_status_pane_t1

0xa6df,	// (0x000991d3) volume_smil_pane

0xe6ee,	// (0x0009d1e2) list_smil_text_pane

0x2781,	// (0x00091275) scroll_pane_cp011

0x278c,	// (0x00091280) smil_text_list_pane_t1_ParamLimits

0x278c,	// (0x00091280) smil_text_list_pane_t1

0xa127,	// (0x00098c1b) aid_volume_smil_ParamLimits

0xa127,	// (0x00098c1b) aid_volume_smil

0xe22f,	// (0x0009cd23) smil_volume_pane_g1

0xe22f,	// (0x0009cd23) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0009dde8) smil_volume_pane_g

0xe1da,	// (0x0009ccce) listscroll_cale_day_pane

0xe6f8,	// (0x0009d1ec) bg_cale_pane

0xe710,	// (0x0009d204) list_cale_pane

0xe721,	// (0x0009d215) scroll_pane_cp09

0xe732,	// (0x0009d226) cale_bg_pane_g1

0xe73a,	// (0x0009d22e) cale_bg_pane_g2

0xe742,	// (0x0009d236) cale_bg_pane_g3

0xe74a,	// (0x0009d23e) cale_bg_pane_g4

0xe752,	// (0x0009d246) cale_bg_pane_g5

0xe75a,	// (0x0009d24e) cale_bg_pane_g6

0xe762,	// (0x0009d256) cale_bg_pane_g7

0xe76a,	// (0x0009d25e) cale_bg_pane_g8

0xe772,	// (0x0009d266) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0009dded) cale_bg_pane_g

0x27e0,	// (0x000912d4) list_cale_time_pane_ParamLimits

0x27e0,	// (0x000912d4) list_cale_time_pane

0x27f5,	// (0x000912e9) list_cale_time_pane_g1_ParamLimits

0x27f5,	// (0x000912e9) list_cale_time_pane_g1

0xe77a,	// (0x0009d26e) list_cale_time_pane_g2_ParamLimits

0xe77a,	// (0x0009d26e) list_cale_time_pane_g2

0x2801,	// (0x000912f5) list_cale_time_pane_g3_ParamLimits

0x2801,	// (0x000912f5) list_cale_time_pane_g3

0x281d,	// (0x00091311) list_cale_time_pane_g4_ParamLimits

0x281d,	// (0x00091311) list_cale_time_pane_g4

0x282b,	// (0x0009131f) list_cale_time_pane_g5_ParamLimits

0x282b,	// (0x0009131f) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0009de00) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0009de00) list_cale_time_pane_g

0x2839,	// (0x0009132d) list_cale_time_pane_t1_ParamLimits

0x2839,	// (0x0009132d) list_cale_time_pane_t1

0x2861,	// (0x00091355) list_cale_time_pane_t2_ParamLimits

0x2861,	// (0x00091355) list_cale_time_pane_t2

0x2c05,	// (0x000916f9) aid_blid_cardinal_pane

0x2c43,	// (0x00091737) compass_pane_t4

0x2889,	// (0x0009137d) list_cale_time_pane_t4_ParamLimits

0x2889,	// (0x0009137d) list_cale_time_pane_t4

0x2c51,	// (0x00091745) compass_pane_t5

0x2c5f,	// (0x00091753) compass_pane_t6

0x2c6d,	// (0x00091761) compass_pane_t7

0xebb6,	// (0x0009d6aa) navi_pane_cc_t1

0xed0b,	// (0x0009d7ff) aid_phob_thumbnail_center_pane

0x33c8,	// (0x00091ebc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0009de0d) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0009de0d) list_cale_time_pane_t

0xd861,	// (0x0009c355) bg_popup_window_pane_cp02_ParamLimits

0xd861,	// (0x0009c355) bg_popup_window_pane_cp02

0xe794,	// (0x0009d288) heading_pane_cp01_ParamLimits

0xe794,	// (0x0009d288) heading_pane_cp01

0xe7a0,	// (0x0009d294) loc_req_pane_ParamLimits

0xe7a0,	// (0x0009d294) loc_req_pane

0xe7b0,	// (0x0009d2a4) loc_type_pane_ParamLimits

0xe7b0,	// (0x0009d2a4) loc_type_pane

0xe7c2,	// (0x0009d2b6) loc_type_pane_t1_ParamLimits

0xe7c2,	// (0x0009d2b6) loc_type_pane_t1

0xe7d4,	// (0x0009d2c8) loc_type_pane_t2_ParamLimits

0xe7d4,	// (0x0009d2c8) loc_type_pane_t2

0xe7e6,	// (0x0009d2da) loc_type_pane_t3_ParamLimits

0xe7e6,	// (0x0009d2da) loc_type_pane_t3

0x0002,

0xf320,	// (0x0009de14) loc_type_pane_t_ParamLimits

0xf320,	// (0x0009de14) loc_type_pane_t

0xe7f8,	// (0x0009d2ec) list_loc_req_pane

0xe802,	// (0x0009d2f6) scroll_pane_cp012

0x28b1,	// (0x000913a5) list_single_loc_request_popup_menu_pane_ParamLimits

0x28b1,	// (0x000913a5) list_single_loc_request_popup_menu_pane

0xe80d,	// (0x0009d301) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe80d,	// (0x0009d301) list_single_loc_request_popup_menu_pane_g1

0xe819,	// (0x0009d30d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe819,	// (0x0009d30d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0009de1b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0009de1b) list_single_loc_request_popup_menu_pane_g

0xe825,	// (0x0009d319) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe825,	// (0x0009d319) list_single_loc_request_popup_menu_pane_t1

0xe0c3,	// (0x0009cbb7) bg_popup_window_pane_cp03_ParamLimits

0xe0c3,	// (0x0009cbb7) bg_popup_window_pane_cp03

0xee4b,	// (0x0009d93f) heading_loc_req_pane_ParamLimits

0xee4b,	// (0x0009d93f) heading_loc_req_pane

0x28be,	// (0x000913b2) popup_dyc_status_message_window_g1_ParamLimits

0x28be,	// (0x000913b2) popup_dyc_status_message_window_g1

0x28d2,	// (0x000913c6) popup_dyc_status_message_window_t1_ParamLimits

0x28d2,	// (0x000913c6) popup_dyc_status_message_window_t1

0x28e7,	// (0x000913db) popup_dyc_status_message_window_t2_ParamLimits

0x28e7,	// (0x000913db) popup_dyc_status_message_window_t2

0x28fc,	// (0x000913f0) popup_dyc_status_message_window_t3_ParamLimits

0x28fc,	// (0x000913f0) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0009de20) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0009de20) popup_dyc_status_message_window_t

0xde68,	// (0x0009c95c) bg_heading_pane_cp01

0xe83b,	// (0x0009d32f) heading_loc_req_pane_g1

0xe843,	// (0x0009d337) heading_loc_req_pane_g2

0xe84b,	// (0x0009d33f) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0009de27) heading_loc_req_pane_g

0xe853,	// (0x0009d347) heading_loc_req_pane_t1

0xe862,	// (0x0009d356) bg_popup_sub_pane_cp01_ParamLimits

0xe862,	// (0x0009d356) bg_popup_sub_pane_cp01

0xe870,	// (0x0009d364) popup_cale_events_window_g1_ParamLimits

0xe870,	// (0x0009d364) popup_cale_events_window_g1

0xe890,	// (0x0009d384) popup_cale_events_window_g2_ParamLimits

0xe890,	// (0x0009d384) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0009de5b) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0009de5b) popup_cale_events_window_g

0xe8b0,	// (0x0009d3a4) popup_cale_events_window_t1_ParamLimits

0xe8b0,	// (0x0009d3a4) popup_cale_events_window_t1

0xe8c2,	// (0x0009d3b6) popup_cale_events_window_t2_ParamLimits

0xe8c2,	// (0x0009d3b6) popup_cale_events_window_t2

0xe900,	// (0x0009d3f4) popup_cale_events_window_t3_ParamLimits

0xe900,	// (0x0009d3f4) popup_cale_events_window_t3

0xe93a,	// (0x0009d42e) popup_cale_events_window_t4_ParamLimits

0xe93a,	// (0x0009d42e) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0009de60) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0009de60) popup_cale_events_window_t

0x2a01,	// (0x000914f5) call_type_pane

0x2a11,	// (0x00091505) popup_call_status_window_g1

0x2a25,	// (0x00091519) popup_call_status_window_g2

0x2a39,	// (0x0009152d) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0009de69) popup_call_status_window_g

0xe970,	// (0x0009d464) call_type_pane_g1

0xe979,	// (0x0009d46d) call_type_pane_g2

0x0001,

0xf37c,	// (0x0009de70) call_type_pane_g

0xde68,	// (0x0009c95c) bg_popup_sub_pane_cp02

0xe982,	// (0x0009d476) listscroll_popup_wml_pane

0xe98a,	// (0x0009d47e) list_wml_pane

0xe994,	// (0x0009d488) scroll_pane_cp013

0xe99f,	// (0x0009d493) list_single_graphic_popup_wml_pane_ParamLimits

0xe99f,	// (0x0009d493) list_single_graphic_popup_wml_pane

0xe22f,	// (0x0009cd23) list_single_graphic_popup_wml_pane_g1

0xe9b3,	// (0x0009d4a7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0009de75) list_single_graphic_popup_wml_pane_g

0xe9bb,	// (0x0009d4af) list_single_graphic_popup_wml_pane_t1

0xe9d1,	// (0x0009d4c5) aid_call_pane

0xe0bb,	// (0x0009cbaf) popup_clock_analogue_window_g1

0xe0bb,	// (0x0009cbaf) popup_clock_analogue_window_g2

0xa149,	// (0x00098c3d) popup_clock_analogue_window_g3

0xa149,	// (0x00098c3d) popup_clock_analogue_window_g4

0xe22f,	// (0x0009cd23) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0009de7a) popup_clock_analogue_window_g

0xa151,	// (0x00098c45) popup_clock_analogue_window_t1

0xa15f,	// (0x00098c53) clock_digital_number_pane_ParamLimits

0xa15f,	// (0x00098c53) clock_digital_number_pane

0xa16b,	// (0x00098c5f) clock_digital_number_pane_cp02_ParamLimits

0xa16b,	// (0x00098c5f) clock_digital_number_pane_cp02

0xa177,	// (0x00098c6b) clock_digital_number_pane_cp03_ParamLimits

0xa177,	// (0x00098c6b) clock_digital_number_pane_cp03

0xa183,	// (0x00098c77) clock_digital_number_pane_cp04_ParamLimits

0xa183,	// (0x00098c77) clock_digital_number_pane_cp04

0xa18f,	// (0x00098c83) clock_digital_separator_pane_ParamLimits

0xa18f,	// (0x00098c83) clock_digital_separator_pane

0xa19b,	// (0x00098c8f) popup_clock_digital_window_t1

0xe22f,	// (0x0009cd23) clock_digital_number_pane_g1

0xe22f,	// (0x0009cd23) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0009dde8) clock_digital_number_pane_g

0xe22f,	// (0x0009cd23) clock_digital_separator_pane_g1

0xe22f,	// (0x0009cd23) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0009dde8) clock_digital_separator_pane_g

0xde68,	// (0x0009c95c) bg_popup_window_pane_cp04

0xe9d9,	// (0x0009d4cd) heading_pane_cp03

0xe9e1,	// (0x0009d4d5) listscroll_popup_gms_pane

0xe9e9,	// (0x0009d4dd) grid_large_graphic_popup_pane

0xe9f3,	// (0x0009d4e7) listscroll_popup_gms_pane_g1

0xe9fb,	// (0x0009d4ef) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0009de85) listscroll_popup_gms_pane_g

0xe53c,	// (0x0009d030) scroll_pane_cp014

0xea03,	// (0x0009d4f7) cell_large_graphic_popup_pane_ParamLimits

0xea03,	// (0x0009d4f7) cell_large_graphic_popup_pane

0xea29,	// (0x0009d51d) cell_large_graphic_popup_pane_g1_ParamLimits

0xea29,	// (0x0009d51d) cell_large_graphic_popup_pane_g1

0xea35,	// (0x0009d529) cell_large_graphic_popup_pane_g2_ParamLimits

0xea35,	// (0x0009d529) cell_large_graphic_popup_pane_g2

0xea41,	// (0x0009d535) cell_large_graphic_popup_pane_g3_ParamLimits

0xea41,	// (0x0009d535) cell_large_graphic_popup_pane_g3

0xea4e,	// (0x0009d542) cell_large_graphic_popup_pane_g4_ParamLimits

0xea4e,	// (0x0009d542) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0009de8a) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0009de8a) cell_large_graphic_popup_pane_g

0xea5e,	// (0x0009d552) grid_highlight_pane_cp010

0xe22f,	// (0x0009cd23) bg_popup_call_pane_g1

0xea68,	// (0x0009d55c) list_single_graphic_popup_conf_pane_ParamLimits

0xea68,	// (0x0009d55c) list_single_graphic_popup_conf_pane

0xea7a,	// (0x0009d56e) list_highlight_pane_cp01

0xea83,	// (0x0009d577) list_single_graphic_popup_conf_pane_g1

0xea8b,	// (0x0009d57f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0009de93) list_single_graphic_popup_conf_pane_g

0xea93,	// (0x0009d587) list_single_graphic_popup_conf_pane_t1

0xeaa1,	// (0x0009d595) linegrid_cams_pane_g1

0x2a49,	// (0x0009153d) linegrid_cams_pane_g2

0xe2e7,	// (0x0009cddb) linegrid_cams_pane_g3

0xeaaa,	// (0x0009d59e) linegrid_cams_pane_g4

0x2a52,	// (0x00091546) linegrid_cams_pane_g5

0x2a5b,	// (0x0009154f) linegrid_cams_pane_g6

0xe36d,	// (0x0009ce61) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0009de98) linegrid_cams_pane_g

0xeab3,	// (0x0009d5a7) popup_clock_analogue_window

0xeab3,	// (0x0009d5a7) popup_clock_digital_window

0xde68,	// (0x0009c95c) popup_phob_thumbnail_window

0xe22f,	// (0x0009cd23) call_video_uplink_pane_g1

0xeabc,	// (0x0009d5b0) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0009dea7) call_video_uplink_pane_g

0xe33a,	// (0x0009ce2e) video_uplink_pane

0xeac4,	// (0x0009d5b8) mce_image_pane_g1

0x2a66,	// (0x0009155a) mce_image_pane_g2

0x2a6e,	// (0x00091562) mce_image_pane_g3

0x2a76,	// (0x0009156a) mce_image_pane_g4

0x2a7e,	// (0x00091572) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0009deac) mce_image_pane_g

0xeace,	// (0x0009d5c2) control_top_pane_stacon_cp01_ParamLimits

0xeace,	// (0x0009d5c2) control_top_pane_stacon_cp01

0xeae2,	// (0x0009d5d6) uni_indicator_pane_stacon_cp01_ParamLimits

0xeae2,	// (0x0009d5d6) uni_indicator_pane_stacon_cp01

0xeaf3,	// (0x0009d5e7) bg_popup_sub_pane_cp03

0x2a86,	// (0x0009157a) chi_dic_find_pane

0x2a8e,	// (0x00091582) listscroll_chi_dic_pane

0x2a97,	// (0x0009158b) main_pane_chidic_g1

0x2aaa,	// (0x0009159e) chi_dic_find_pane_t1

0xeafd,	// (0x0009d5f1) find_chidic_pane

0xeb06,	// (0x0009d5fa) chi_dic_list_pane_ParamLimits

0xeb06,	// (0x0009d5fa) chi_dic_list_pane

0xeb17,	// (0x0009d60b) scroll_pane_cp020

0x2ab8,	// (0x000915ac) find_chidic_pane_t1

0xde68,	// (0x0009c95c) input_focus_pane_cp06

0x2ac7,	// (0x000915bb) list_chi_dic_pane_ParamLimits

0x2ac7,	// (0x000915bb) list_chi_dic_pane

0xeb1f,	// (0x0009d613) list_chi_dic_pane_t1_ParamLimits

0xeb1f,	// (0x0009d613) list_chi_dic_pane_t1

0xde68,	// (0x0009c95c) list_highlight_pane_cp020

0xeb32,	// (0x0009d626) bg_cale_heading_pane_g1

0x2adb,	// (0x000915cf) bg_cale_heading_pane_g2

0x2ae3,	// (0x000915d7) bg_cale_heading_pane_g3

0x2aeb,	// (0x000915df) bg_cale_heading_pane_g4

0x2af5,	// (0x000915e9) bg_cale_heading_pane_g5

0x2aff,	// (0x000915f3) bg_cale_heading_pane_g6

0x2b07,	// (0x000915fb) bg_cale_heading_pane_g7

0x2b0f,	// (0x00091603) bg_cale_heading_pane_g8

0x2b19,	// (0x0009160d) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0009deb7) bg_cale_heading_pane_g

0xeb32,	// (0x0009d626) bg_cale_side_pane_g1

0x2b23,	// (0x00091617) bg_cale_side_pane_g2

0x2b2b,	// (0x0009161f) bg_cale_side_pane_g3

0x2b33,	// (0x00091627) bg_cale_side_pane_g4

0x2b3b,	// (0x0009162f) bg_cale_side_pane_g5

0x2b43,	// (0x00091637) bg_cale_side_pane_g6

0x2b4b,	// (0x0009163f) bg_cale_side_pane_g7

0x2b53,	// (0x00091647) bg_cale_side_pane_g8

0x2b5b,	// (0x0009164f) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0009deca) bg_cale_side_pane_g

0x2b63,	// (0x00091657) popup_call_status_window_ParamLimits

0x2b63,	// (0x00091657) popup_call_status_window

0xeb3a,	// (0x0009d62e) stacon_top_pane

0xeb42,	// (0x0009d636) status_pane_ParamLimits

0xeb42,	// (0x0009d636) status_pane

0xeb57,	// (0x0009d64b) status_small_pane

0xeb5f,	// (0x0009d653) control_pane

0xde68,	// (0x0009c95c) stacon_bottom_pane

0xeb67,	// (0x0009d65b) list_single_mce_smart_pane_t1_ParamLimits

0xeb67,	// (0x0009d65b) list_single_mce_smart_pane_t1

0xeb7a,	// (0x0009d66e) list_single_mce_smart_pane_t2_ParamLimits

0xeb7a,	// (0x0009d66e) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0009dedd) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0009dedd) list_single_mce_smart_pane_t

0x2baa,	// (0x0009169e) compass_pane

0x2bb3,	// (0x000916a7) main_location2_pane_t1

0x2bc7,	// (0x000916bb) main_location2_pane_t2

0x2bdb,	// (0x000916cf) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0009dee2) main_location2_pane_t

0xeb99,	// (0x0009d68d) compass_pane_g1_ParamLimits

0xeb99,	// (0x0009d68d) compass_pane_g1

0x2c25,	// (0x00091719) compass_pane_t1

0x2c34,	// (0x00091728) compass_pane_t2

0x0005,

0xf3f7,	// (0x0009deeb) compass_pane_t

0x2c7b,	// (0x0009176f) text_secondary_cp61

0xebad,	// (0x0009d6a1) navi_pane_cams_g5

0xebd0,	// (0x0009d6c4) navi_pane_im_t1

0xebde,	// (0x0009d6d2) navi_pane_mp_g1_ParamLimits

0xebde,	// (0x0009d6d2) navi_pane_mp_g1

0xebf2,	// (0x0009d6e6) navi_pane_mp_g2_ParamLimits

0xebf2,	// (0x0009d6e6) navi_pane_mp_g2

0xebfe,	// (0x0009d6f2) navi_pane_mp_g3_ParamLimits

0xebfe,	// (0x0009d6f2) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0009deff) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0009deff) navi_pane_mp_g

0xec0a,	// (0x0009d6fe) navi_pane_mp_t1

0xec18,	// (0x0009d70c) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0009df06) navi_pane_mp_t

0xec54,	// (0x0009d748) navi_pane_vt_g1

0xec0a,	// (0x0009d6fe) navi_pane_vt_t1

0xec5c,	// (0x0009d750) navi_slider_pane

0xec64,	// (0x0009d758) zooming_pane

0xec6c,	// (0x0009d760) navi_slider_pane_g1

0xa1b8,	// (0x00098cac) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0009df0d) navi_slider_pane_g

0xec90,	// (0x0009d784) aid_levels_zoom

0xec98,	// (0x0009d78c) zooming_pane_g1

0xeca0,	// (0x0009d794) zooming_pane_g2

0xeca0,	// (0x0009d794) zooming_pane_g3

0x0002,

0xf428,	// (0x0009df1c) zooming_pane_g

0xeca8,	// (0x0009d79c) level_10_zoom

0xecb1,	// (0x0009d7a5) level_11_zoom

0xecba,	// (0x0009d7ae) level_1_zoom

0xecc3,	// (0x0009d7b7) level_2_zoom

0xeccc,	// (0x0009d7c0) level_3_zoom

0xecd5,	// (0x0009d7c9) level_4_zoom

0xecde,	// (0x0009d7d2) level_5_zoom

0xece7,	// (0x0009d7db) level_6_zoom

0xecf0,	// (0x0009d7e4) level_7_zoom

0xecf9,	// (0x0009d7ed) level_8_zoom

0xed02,	// (0x0009d7f6) level_9_zoom

0xed13,	// (0x0009d807) popup_phob_thumbnail_window_g1

0xed1b,	// (0x0009d80f) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0009df23) popup_phob_thumbnail_window_g

0xa58c,	// (0x00099080) level_1_location

0xa594,	// (0x00099088) level_2_location

0xa59c,	// (0x00099090) level_3_location

0xa5a4,	// (0x00099098) level_4_location

0xec64,	// (0x0009d758) level_5_location

0x2dba,	// (0x000918ae) mce_icon_pane_g1

0x2dc2,	// (0x000918b6) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0009df28) mce_icon_pane_g

0x2dca,	// (0x000918be) main_mup_pane_g1_ParamLimits

0x2dca,	// (0x000918be) main_mup_pane_g1

0x2de0,	// (0x000918d4) main_mup_pane_g2_ParamLimits

0x2de0,	// (0x000918d4) main_mup_pane_g2

0x2df8,	// (0x000918ec) main_mup_pane_g3_ParamLimits

0x2df8,	// (0x000918ec) main_mup_pane_g3

0x2e10,	// (0x00091904) main_mup_pane_g4_ParamLimits

0x2e10,	// (0x00091904) main_mup_pane_g4

0x2e28,	// (0x0009191c) main_mup_pane_g5_ParamLimits

0x2e28,	// (0x0009191c) main_mup_pane_g5

0x2e44,	// (0x00091938) main_mup_pane_g6_ParamLimits

0x2e44,	// (0x00091938) main_mup_pane_g6

0x2e5c,	// (0x00091950) main_mup_pane_g7_ParamLimits

0x2e5c,	// (0x00091950) main_mup_pane_g7

0x2e74,	// (0x00091968) main_mup_pane_g8_ParamLimits

0x2e74,	// (0x00091968) main_mup_pane_g8

0x2e8c,	// (0x00091980) main_mup_pane_g9_ParamLimits

0x2e8c,	// (0x00091980) main_mup_pane_g9

0x2ea6,	// (0x0009199a) main_mup_pane_g10_ParamLimits

0x2ea6,	// (0x0009199a) main_mup_pane_g10

0x2ec0,	// (0x000919b4) main_mup_pane_g11_ParamLimits

0x2ec0,	// (0x000919b4) main_mup_pane_g11

0x2ed4,	// (0x000919c8) main_mup_pane_g12_ParamLimits

0x2ed4,	// (0x000919c8) main_mup_pane_g12

0x2eea,	// (0x000919de) main_mup_pane_g13_ParamLimits

0x2eea,	// (0x000919de) main_mup_pane_g13

0x000c,

0xf439,	// (0x0009df2d) main_mup_pane_g_ParamLimits

0xf439,	// (0x0009df2d) main_mup_pane_g

0x2efe,	// (0x000919f2) main_mup_pane_t1_ParamLimits

0x2efe,	// (0x000919f2) main_mup_pane_t1

0x2f18,	// (0x00091a0c) main_mup_pane_t2_ParamLimits

0x2f18,	// (0x00091a0c) main_mup_pane_t2

0x2f30,	// (0x00091a24) main_mup_pane_t3_ParamLimits

0x2f30,	// (0x00091a24) main_mup_pane_t3

0x2f48,	// (0x00091a3c) main_mup_pane_t4_ParamLimits

0x2f48,	// (0x00091a3c) main_mup_pane_t4

0x2f66,	// (0x00091a5a) main_mup_pane_t5_ParamLimits

0x2f66,	// (0x00091a5a) main_mup_pane_t5

0x2f7b,	// (0x00091a6f) main_mup_pane_t6_ParamLimits

0x2f7b,	// (0x00091a6f) main_mup_pane_t6

0x0005,

0xf454,	// (0x0009df48) main_mup_pane_t_ParamLimits

0xf454,	// (0x0009df48) main_mup_pane_t

0x2f8d,	// (0x00091a81) mup_progress_pane_ParamLimits

0x2f8d,	// (0x00091a81) mup_progress_pane

0x2f99,	// (0x00091a8d) mup_visualizer_pane_ParamLimits

0x2f99,	// (0x00091a8d) mup_visualizer_pane

0x2fcd,	// (0x00091ac1) mup_volume_pane_ParamLimits

0x2fcd,	// (0x00091ac1) mup_volume_pane

0xea1b,	// (0x0009d50f) mup_visualizer_pane_g1_ParamLimits

0xea1b,	// (0x0009d50f) mup_visualizer_pane_g1

0xea1b,	// (0x0009d50f) mup_visualizer_pane_g2_ParamLimits

0xea1b,	// (0x0009d50f) mup_visualizer_pane_g2

0xeb99,	// (0x0009d68d) mup_visualizer_pane_g3_ParamLimits

0xeb99,	// (0x0009d68d) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0009df55) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0009df55) mup_visualizer_pane_g

0xe22f,	// (0x0009cd23) mup_volume_pane_g1

0xed2b,	// (0x0009d81f) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0009df5c) mup_volume_pane_g

0xe22f,	// (0x0009cd23) mup_progress_pane_g1

0xed34,	// (0x0009d828) mup_progress_pane_g2

0xed3d,	// (0x0009d831) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0009df61) mup_progress_pane_g

0xde68,	// (0x0009c95c) bg_popup_window_pane_cp05

0xed46,	// (0x0009d83a) heading_pane_cp02_ParamLimits

0xed46,	// (0x0009d83a) heading_pane_cp02

0xed60,	// (0x0009d854) list_popup_blid_pane

0xed68,	// (0x0009d85c) list_blid_sat_info_pane_ParamLimits

0xed68,	// (0x0009d85c) list_blid_sat_info_pane

0xed7b,	// (0x0009d86f) list_blid_sat_info_pane_g1

0xed83,	// (0x0009d877) list_blid_sat_info_pane_t1

0x30f3,	// (0x00091be7) mup_equalizer_pane_ParamLimits

0x30f3,	// (0x00091be7) mup_equalizer_pane

0x310c,	// (0x00091c00) mup_equalizer_pane_cp1_ParamLimits

0x310c,	// (0x00091c00) mup_equalizer_pane_cp1

0x3129,	// (0x00091c1d) mup_equalizer_pane_cp2_ParamLimits

0x3129,	// (0x00091c1d) mup_equalizer_pane_cp2

0x3146,	// (0x00091c3a) mup_equalizer_pane_cp3_ParamLimits

0x3146,	// (0x00091c3a) mup_equalizer_pane_cp3

0x3167,	// (0x00091c5b) mup_equalizer_pane_cp4_ParamLimits

0x3167,	// (0x00091c5b) mup_equalizer_pane_cp4

0x3188,	// (0x00091c7c) mup_equalizer_pane_cp5

0x319c,	// (0x00091c90) mup_equalizer_pane_cp6

0x31b0,	// (0x00091ca4) mup_equalizer_pane_cp7

0xa4aa,	// (0x00098f9e) bg_popup_call_poc_act_pane_g9

0xa4b2,	// (0x00098fa6) bg_popup_call_poc_act_pane_g10

0xa4ba,	// (0x00098fae) bg_popup_call_poc_act_pane_g11

0x000a,

0xe0c3,	// (0x0009cbb7) mup_scale_pane

0xe22f,	// (0x0009cd23) mup_scale_pane_g1

0xed91,	// (0x0009d885) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0009df7d) mup_scale_pane_g

0xedb5,	// (0x0009d8a9) msg_data_pane

0xedbd,	// (0x0009d8b1) scroll_pane_cp017

0x31d6,	// (0x00091cca) bg_list_pane_cp04_ParamLimits

0x31d6,	// (0x00091cca) bg_list_pane_cp04

0xee57,	// (0x0009d94b) msg_data_pane_g1

0x31f6,	// (0x00091cea) msg_data_pane_g2

0x2a6e,	// (0x00091562) msg_data_pane_g3

0x31fe,	// (0x00091cf2) msg_data_pane_g4

0x3206,	// (0x00091cfa) msg_data_pane_g5

0x320e,	// (0x00091d02) msg_data_pane_g6

0x3216,	// (0x00091d0a) msg_data_pane_g7

0x0006,

0xf498,	// (0x0009df8c) msg_data_pane_g

0x321e,	// (0x00091d12) msg_text_pane_ParamLimits

0x321e,	// (0x00091d12) msg_text_pane

0x3245,	// (0x00091d39) qrid_highlight_pane_cp011_ParamLimits

0x3245,	// (0x00091d39) qrid_highlight_pane_cp011

0xde68,	// (0x0009c95c) msg_body_pane

0xde68,	// (0x0009c95c) msg_header_pane

0xee68,	// (0x0009d95c) input_focus_pane_cp07

0x3269,	// (0x00091d5d) msg_header_pane_t1_ParamLimits

0x3269,	// (0x00091d5d) msg_header_pane_t1

0x327d,	// (0x00091d71) msg_header_pane_t2_ParamLimits

0x327d,	// (0x00091d71) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0009dfa0) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0009dfa0) msg_header_pane_t

0xee7d,	// (0x0009d971) msg_body_pane_g1

0x328f,	// (0x00091d83) msg_body_pane_t1_ParamLimits

0x328f,	// (0x00091d83) msg_body_pane_t1

0x32c0,	// (0x00091db4) msg_body_pane_t2_ParamLimits

0x32c0,	// (0x00091db4) msg_body_pane_t2

0x32d2,	// (0x00091dc6) msg_body_pane_t3_ParamLimits

0x32d2,	// (0x00091dc6) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0009dfa5) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0009dfa5) msg_body_pane_t

0x331e,	// (0x00091e12) main_viewer_pane_g1_ParamLimits

0x331e,	// (0x00091e12) main_viewer_pane_g1

0x332c,	// (0x00091e20) main_viewer_pane_g2_ParamLimits

0x332c,	// (0x00091e20) main_viewer_pane_g2

0x333a,	// (0x00091e2e) main_viewer_pane_g3_ParamLimits

0x333a,	// (0x00091e2e) main_viewer_pane_g3

0x3349,	// (0x00091e3d) main_viewer_pane_g4_ParamLimits

0x3349,	// (0x00091e3d) main_viewer_pane_g4

0xa1e2,	// (0x00098cd6) main_viewer_pane_g5_ParamLimits

0xa1e2,	// (0x00098cd6) main_viewer_pane_g5

0xa1e2,	// (0x00098cd6) main_viewer_pane_g7_ParamLimits

0xa1e2,	// (0x00098cd6) main_viewer_pane_g7

0xa1f4,	// (0x00098ce8) main_viewer_pane_g8_ParamLimits

0xa1f4,	// (0x00098ce8) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0009dfb5) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0009dfb5) main_viewer_pane_g

0xee85,	// (0x0009d979) viewer_content_pane_ParamLimits

0xee85,	// (0x0009d979) viewer_content_pane

0x3385,	// (0x00091e79) main_postcard_pane_g1_ParamLimits

0x3385,	// (0x00091e79) main_postcard_pane_g1

0x339b,	// (0x00091e8f) main_postcard_pane_g2_ParamLimits

0x339b,	// (0x00091e8f) main_postcard_pane_g2

0x33b1,	// (0x00091ea5) main_postcard_pane_g3_ParamLimits

0x33b1,	// (0x00091ea5) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0009dfc6) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0009dfc6) main_postcard_pane_g

0x33c8,	// (0x00091ebc) main_postcard_pane_g4

0xa6bf,	// (0x000991b3) smil_status_volume_pane_g2

0x340b,	// (0x00091eff) postcard_pane_ParamLimits

0x340b,	// (0x00091eff) postcard_pane

0xee93,	// (0x0009d987) postcard_pane_g1_ParamLimits

0xee93,	// (0x0009d987) postcard_pane_g1

0x344d,	// (0x00091f41) postcard_pane_g2_ParamLimits

0x344d,	// (0x00091f41) postcard_pane_g2

0x3459,	// (0x00091f4d) postcard_pane_g3_ParamLimits

0x3459,	// (0x00091f4d) postcard_pane_g3

0xeea1,	// (0x0009d995) postcard_pane_g4_ParamLimits

0xeea1,	// (0x0009d995) postcard_pane_g4

0x3465,	// (0x00091f59) postcard_pane_g5_ParamLimits

0x3465,	// (0x00091f59) postcard_pane_g5

0x347a,	// (0x00091f6e) postcard_pane_g6_ParamLimits

0x347a,	// (0x00091f6e) postcard_pane_g6

0xee93,	// (0x0009d987) postcard_pane_g7_ParamLimits

0xee93,	// (0x0009d987) postcard_pane_g7

0x0006,

0xf4df,	// (0x0009dfd3) postcard_pane_g_ParamLimits

0xf4df,	// (0x0009dfd3) postcard_pane_g

0x348e,	// (0x00091f82) main_mp2_pane_g1_ParamLimits

0x348e,	// (0x00091f82) main_mp2_pane_g1

0x349a,	// (0x00091f8e) main_mp2_pane_g2_ParamLimits

0x349a,	// (0x00091f8e) main_mp2_pane_g2

0x34a6,	// (0x00091f9a) main_mp2_pane_g3_ParamLimits

0x34a6,	// (0x00091f9a) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0009dfe2) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0009dfe2) main_mp2_pane_g

0x34b2,	// (0x00091fa6) main_mp2_pane_t1_ParamLimits

0x34b2,	// (0x00091fa6) main_mp2_pane_t1

0x34c7,	// (0x00091fbb) main_mp2_pane_t2_ParamLimits

0x34c7,	// (0x00091fbb) main_mp2_pane_t2

0x34d9,	// (0x00091fcd) main_mp2_pane_t3_ParamLimits

0x34d9,	// (0x00091fcd) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0009dfe9) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0009dfe9) main_mp2_pane_t

0xeeaf,	// (0x0009d9a3) pec_content_pane_ParamLimits

0xeeaf,	// (0x0009d9a3) pec_content_pane

0xe53c,	// (0x0009d030) scroll_pane_cp015

0xeec1,	// (0x0009d9b5) pec_attribute_pane_ParamLimits

0xeec1,	// (0x0009d9b5) pec_attribute_pane

0x34eb,	// (0x00091fdf) pec_content_pane_g1_ParamLimits

0x34eb,	// (0x00091fdf) pec_content_pane_g1

0xeed1,	// (0x0009d9c5) pec_content_pane_t1_ParamLimits

0xeed1,	// (0x0009d9c5) pec_content_pane_t1

0xeee3,	// (0x0009d9d7) pec_content_pane_t2_ParamLimits

0xeee3,	// (0x0009d9d7) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0009dff0) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0009dff0) pec_content_pane_t

0x34f9,	// (0x00091fed) list_single_graphic_pane_cp01_ParamLimits

0x34f9,	// (0x00091fed) list_single_graphic_pane_cp01

0xe0c3,	// (0x0009cbb7) bg_popup_sub_pane_cp04

0xeef5,	// (0x0009d9e9) popup_mup_playback_window_g1

0xef01,	// (0x0009d9f5) popup_mup_playback_window_t1

0xef16,	// (0x0009da0a) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0009dff5) popup_mup_playback_window_t

0xef4d,	// (0x0009da41) main_image_pane_g1_ParamLimits

0xef4d,	// (0x0009da41) main_image_pane_g1

0xef90,	// (0x0009da84) scroll_pane_cp018_ParamLimits

0xef90,	// (0x0009da84) scroll_pane_cp018

0xefa8,	// (0x0009da9c) scroll_pane_cp016_ParamLimits

0xefa8,	// (0x0009da9c) scroll_pane_cp016

0x35c9,	// (0x000920bd) smil2_image_pane_ParamLimits

0x35c9,	// (0x000920bd) smil2_image_pane

0x35fd,	// (0x000920f1) smil2_root_pane_ParamLimits

0x35fd,	// (0x000920f1) smil2_root_pane

0x3635,	// (0x00092129) smil2_text_pane_ParamLimits

0x3635,	// (0x00092129) smil2_text_pane

0xde68,	// (0x0009c95c) bg_list_pane_cp06

0xefe4,	// (0x0009dad8) grid_radio_pane

0xde68,	// (0x0009c95c) bg_popup_window_pane_cp06

0xefec,	// (0x0009dae0) main_fmradio_pane_t1

0xe9d9,	// (0x0009d4cd) heading_pane_cp04

0xeffa,	// (0x0009daee) main_fmradio_pane_t2

0xa4c2,	// (0x00098fb6) popup_cale_lunar_info_window_g1

0xf008,	// (0x0009dafc) main_fmradio_pane_t3

0xa4ca,	// (0x00098fbe) popup_cale_lunar_info_window_g2

0xf016,	// (0x0009db0a) main_fmradio_pane_t4

0x0001,

0xf024,	// (0x0009db18) main_fmradio_pane_t5

0x0004,

0xf5d5,	// (0x0009e0c9) popup_cale_lunar_info_window_g

0xf516,	// (0x0009e00a) main_fmradio_pane_t

0xf032,	// (0x0009db26) wait_bar_pane_cp03

0xf03a,	// (0x0009db2e) cell_fmradio_pane_ParamLimits

0xf03a,	// (0x0009db2e) cell_fmradio_pane

0xee93,	// (0x0009d987) cell_fmradio_pane_g1_ParamLimits

0xee93,	// (0x0009d987) cell_fmradio_pane_g1

0xde68,	// (0x0009c95c) grid_highlight_pane_cp011

0xf04d,	// (0x0009db41) poc_content_pane_ParamLimits

0xf04d,	// (0x0009db41) poc_content_pane

0xf05f,	// (0x0009db53) scroll_pane_cp019

0x36b5,	// (0x000921a9) popup_call_poc_act_window_ParamLimits

0x36b5,	// (0x000921a9) popup_call_poc_act_window

0x36d9,	// (0x000921cd) popup_call_poc_inact_window_ParamLimits

0x36d9,	// (0x000921cd) popup_call_poc_inact_window

0xf5ac,	// (0x0009e0a0) bg_popup_call_poc_act_pane_g

0xa432,	// (0x00098f26) bg_popup_call_poc_inact_pane_g1

0xa43a,	// (0x00098f2e) bg_popup_call_poc_inact_pane_g2

0xf067,	// (0x0009db5b) popup_call_poc_act_window_g2

0xa442,	// (0x00098f36) bg_popup_call_poc_inact_pane_g3

0xa44a,	// (0x00098f3e) bg_popup_call_poc_inact_pane_g4

0xa452,	// (0x00098f46) bg_popup_call_poc_inact_pane_g5

0xf06f,	// (0x0009db63) popup_call_poc_act_window_t1_ParamLimits

0xf06f,	// (0x0009db63) popup_call_poc_act_window_t1

0xf097,	// (0x0009db8b) popup_call_poc_act_window_t2_ParamLimits

0xf097,	// (0x0009db8b) popup_call_poc_act_window_t2

0xf0bf,	// (0x0009dbb3) popup_call_poc_act_window_t3_ParamLimits

0xf0bf,	// (0x0009dbb3) popup_call_poc_act_window_t3

0x36f2,	// (0x000921e6) popup_call_poc_act_window_t4_ParamLimits

0x36f2,	// (0x000921e6) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0009e015) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0009e015) popup_call_poc_act_window_t

0xa45a,	// (0x00098f4e) bg_popup_call_poc_inact_pane_g6

0xa462,	// (0x00098f56) bg_popup_call_poc_inact_pane_g7

0xa46a,	// (0x00098f5e) bg_popup_call_poc_inact_pane_g8

0x3704,	// (0x000921f8) popup_call_poc_inact_window_g2

0xa472,	// (0x00098f66) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf599,	// (0x0009e08d) bg_popup_call_poc_inact_pane_g

0x370c,	// (0x00092200) popup_call_poc_inact_window_t1_ParamLimits

0x370c,	// (0x00092200) popup_call_poc_inact_window_t1

0x3721,	// (0x00092215) popup_call_poc_inact_window_t2_ParamLimits

0x3721,	// (0x00092215) popup_call_poc_inact_window_t2

0x3736,	// (0x0009222a) popup_call_poc_inact_window_t3_ParamLimits

0x3736,	// (0x0009222a) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0009e01e) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0009e01e) popup_call_poc_inact_window_t

0xa632,	// (0x00099126) context_pane_ParamLimits

0x4b38,	// (0x0009362c) signal_pane_ParamLimits

0xec64,	// (0x0009d758) main_call2_pane

0xa620,	// (0x00099114) popup_phob_thumbnail2_window_ParamLimits

0xa620,	// (0x00099114) popup_phob_thumbnail2_window

0xa1ca,	// (0x00098cbe) aid_hotspot_pointer_arrow_pane

0xa1d2,	// (0x00098cc6) aid_hotspot_pointer_hand_pane

0x465c,	// (0x00093150) phob_pre_status_pane_g5

0x166f,	// (0x00090163) cams_zoom_pane_ParamLimits

0x167e,	// (0x00090172) image_vga_pane_ParamLimits

0x1698,	// (0x0009018c) main_camera_pane_g1_ParamLimits

0x16aa,	// (0x0009019e) main_camera_pane_g2_ParamLimits

0x16bc,	// (0x000901b0) main_camera_pane_g3_ParamLimits

0x16ce,	// (0x000901c2) main_camera_pane_g4_ParamLimits

0x16e0,	// (0x000901d4) main_camera_pane_g5_ParamLimits

0x16f2,	// (0x000901e6) main_camera_pane_g6_ParamLimits

0x1704,	// (0x000901f8) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0009dd1d) main_camera_pane_g_ParamLimits

0x1716,	// (0x0009020a) main_camera_pane_t1_ParamLimits

0x172c,	// (0x00090220) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0009dd2e) main_camera_pane_t_ParamLimits

0xe0c3,	// (0x0009cbb7) bg_popup_preview_window_pane_cp01_ParamLimits

0xe0c3,	// (0x0009cbb7) bg_popup_preview_window_pane_cp01

0x374b,	// (0x0009223f) popup_phob_thumbnail2_window_g1_ParamLimits

0x374b,	// (0x0009223f) popup_phob_thumbnail2_window_g1

0xde68,	// (0x0009c95c) call2_cli_visual_pane

0x3772,	// (0x00092266) popup_call2_audio_conf_window_ParamLimits

0x3772,	// (0x00092266) popup_call2_audio_conf_window

0x3792,	// (0x00092286) popup_call2_audio_first_window_ParamLimits

0x3792,	// (0x00092286) popup_call2_audio_first_window

0x3828,	// (0x0009231c) popup_call2_audio_in_window_ParamLimits

0x3828,	// (0x0009231c) popup_call2_audio_in_window

0x3870,	// (0x00092364) popup_call2_audio_out_window_ParamLimits

0x3870,	// (0x00092364) popup_call2_audio_out_window

0x38da,	// (0x000923ce) popup_call2_audio_second_window_ParamLimits

0x38da,	// (0x000923ce) popup_call2_audio_second_window

0x3940,	// (0x00092434) popup_call2_audio_wait_window_ParamLimits

0x3940,	// (0x00092434) popup_call2_audio_wait_window

0xde68,	// (0x0009c95c) bg_popup_call2_act_pane_cp03

0xe0a5,	// (0x0009cb99) list_conf_pane_cp

0x397a,	// (0x0009246e) popup_call2_audio_conf_window_t1

0x3988,	// (0x0009247c) list_single_graphic_popup_conf2_pane_ParamLimits

0x3988,	// (0x0009247c) list_single_graphic_popup_conf2_pane

0xea7a,	// (0x0009d56e) list_highlight_pane_cp04

0x399b,	// (0x0009248f) list_single_graphic_popup_conf2_pane_g1

0xea8b,	// (0x0009d57f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0009e025) list_single_graphic_popup_conf2_pane_g

0x39a5,	// (0x00092499) list_single_graphic_popup_conf2_pane_t1

0x39b3,	// (0x000924a7) bg_popup_call2_act_pane_cp01_ParamLimits

0x39b3,	// (0x000924a7) bg_popup_call2_act_pane_cp01

0x3a3d,	// (0x00092531) call_type_pane_cp05_ParamLimits

0x3a3d,	// (0x00092531) call_type_pane_cp05

0x3a91,	// (0x00092585) popup_call2_audio_second_window_g1_ParamLimits

0x3a91,	// (0x00092585) popup_call2_audio_second_window_g1

0x3ae5,	// (0x000925d9) popup_call2_audio_second_window_g2_ParamLimits

0x3ae5,	// (0x000925d9) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0009e02a) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0009e02a) popup_call2_audio_second_window_g

0x3b4a,	// (0x0009263e) popup_call2_audio_second_window_t1_ParamLimits

0x3b4a,	// (0x0009263e) popup_call2_audio_second_window_t1

0x3c05,	// (0x000926f9) popup_call2_audio_second_window_t2_ParamLimits

0x3c05,	// (0x000926f9) popup_call2_audio_second_window_t2

0x3c58,	// (0x0009274c) popup_call2_audio_second_window_t3_ParamLimits

0x3c58,	// (0x0009274c) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0009e031) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0009e031) popup_call2_audio_second_window_t

0xde68,	// (0x0009c95c) bg_popup_call2_in_pane_cp02

0xde72,	// (0x0009c966) call_type_pane_cp04

0xde7a,	// (0x0009c96e) popup_call2_audio_wait_window_g1

0xde82,	// (0x0009c976) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0009dc0a) popup_call2_audio_wait_window_g

0xde8a,	// (0x0009c97e) popup_call2_audio_wait_window_t3

0x3d4b,	// (0x0009283f) bg_popup_call2_act_pane_ParamLimits

0x3d4b,	// (0x0009283f) bg_popup_call2_act_pane

0x3e0b,	// (0x000928ff) call_type_pane_cp03_ParamLimits

0x3e0b,	// (0x000928ff) call_type_pane_cp03

0x3e6f,	// (0x00092963) popup_call2_audio_first_window_g1_ParamLimits

0x3e6f,	// (0x00092963) popup_call2_audio_first_window_g1

0x3edf,	// (0x000929d3) popup_call2_audio_first_window_g2_ParamLimits

0x3edf,	// (0x000929d3) popup_call2_audio_first_window_g2

0xea1b,	// (0x0009d50f) popup_call2_audio_first_window_g3_ParamLimits

0xea1b,	// (0x0009d50f) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0009e03a) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0009e03a) popup_call2_audio_first_window_g

0x3fbd,	// (0x00092ab1) popup_call2_audio_first_window_t1_ParamLimits

0x3fbd,	// (0x00092ab1) popup_call2_audio_first_window_t1

0x40c0,	// (0x00092bb4) popup_call2_audio_first_window_t4_ParamLimits

0x40c0,	// (0x00092bb4) popup_call2_audio_first_window_t4

0x41a3,	// (0x00092c97) popup_call2_audio_first_window_t5_ParamLimits

0x41a3,	// (0x00092c97) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0009e045) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0009e045) popup_call2_audio_first_window_t

0xe0bb,	// (0x0009cbaf) bg_popup_call2_act_pane_g1

0xa4d2,	// (0x00098fc6) popup_cale_lunar_info_window_t1

0xa4e0,	// (0x00098fd4) popup_cale_lunar_info_window_t2

0xa4ee,	// (0x00098fe2) popup_cale_lunar_info_window_t3

0xde68,	// (0x0009c95c) bg_popup_call2_bubble_pane

0x42a4,	// (0x00092d98) bg_popup_call2_in_pane_cp01_ParamLimits

0x42a4,	// (0x00092d98) bg_popup_call2_in_pane_cp01

0xd8e4,	// (0x0009c3d8) call_type_pane_cp02

0x42ec,	// (0x00092de0) popup_call2_audio_out_window_g1_ParamLimits

0x42ec,	// (0x00092de0) popup_call2_audio_out_window_g1

0x4318,	// (0x00092e0c) popup_call2_audio_out_window_g2_ParamLimits

0x4318,	// (0x00092e0c) popup_call2_audio_out_window_g2

0x4340,	// (0x00092e34) popup_call2_audio_out_window_g3_ParamLimits

0x4340,	// (0x00092e34) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0009e04e) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0009e04e) popup_call2_audio_out_window_g

0x437b,	// (0x00092e6f) popup_call2_audio_out_window_t1_ParamLimits

0x437b,	// (0x00092e6f) popup_call2_audio_out_window_t1

0x43da,	// (0x00092ece) popup_call2_audio_out_window_t2_ParamLimits

0x43da,	// (0x00092ece) popup_call2_audio_out_window_t2

0x442e,	// (0x00092f22) popup_call2_audio_out_window_t3_ParamLimits

0x442e,	// (0x00092f22) popup_call2_audio_out_window_t3

0x4444,	// (0x00092f38) popup_call2_audio_out_window_t4_ParamLimits

0x4444,	// (0x00092f38) popup_call2_audio_out_window_t4

0x445a,	// (0x00092f4e) popup_call2_audio_out_window_t5_ParamLimits

0x445a,	// (0x00092f4e) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0009e057) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0009e057) popup_call2_audio_out_window_t

0x44be,	// (0x00092fb2) bg_popup_call2_in_pane_ParamLimits

0x44be,	// (0x00092fb2) bg_popup_call2_in_pane

0x451a,	// (0x0009300e) popup_call2_audio_in_window_g1_ParamLimits

0x451a,	// (0x0009300e) popup_call2_audio_in_window_g1

0xa20c,	// (0x00098d00) popup_call2_audio_in_window_g2_ParamLimits

0xa20c,	// (0x00098d00) popup_call2_audio_in_window_g2

0xa244,	// (0x00098d38) popup_call2_audio_in_window_g3_ParamLimits

0xa244,	// (0x00098d38) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0009e064) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0009e064) popup_call2_audio_in_window_g

0xa29c,	// (0x00098d90) popup_call2_audio_in_window_t1_ParamLimits

0xa29c,	// (0x00098d90) popup_call2_audio_in_window_t1

0xa31c,	// (0x00098e10) popup_call2_audio_in_window_t2_ParamLimits

0xa31c,	// (0x00098e10) popup_call2_audio_in_window_t2

0xa39c,	// (0x00098e90) popup_call2_audio_in_window_t3_ParamLimits

0xa39c,	// (0x00098e90) popup_call2_audio_in_window_t3

0xa3b6,	// (0x00098eaa) popup_call2_audio_in_window_t4_ParamLimits

0xa3b6,	// (0x00098eaa) popup_call2_audio_in_window_t4

0xa3c8,	// (0x00098ebc) popup_call2_audio_in_window_t5_ParamLimits

0xa3c8,	// (0x00098ebc) popup_call2_audio_in_window_t5

0xa3dd,	// (0x00098ed1) popup_call2_audio_in_window_t6_ParamLimits

0xa3dd,	// (0x00098ed1) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0009e06d) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0009e06d) popup_call2_audio_in_window_t

0xe0bb,	// (0x0009cbaf) bg_popup_call2_in_pane_g1

0xa4fc,	// (0x00098ff0) popup_cale_lunar_info_window_t4

0x0003,

0xf5da,	// (0x0009e0ce) popup_cale_lunar_info_window_t

0xe0c3,	// (0x0009cbb7) bg_popup_call2_rect_pane_ParamLimits

0xe0c3,	// (0x0009cbb7) bg_popup_call2_rect_pane

0xde68,	// (0x0009c95c) call2_cli_visual_graphic_pane

0xde68,	// (0x0009c95c) call2_cli_visual_text_pane

0xa6d2,	// (0x000991c6) smil_status_volume_pane_g3

0x0002,

0xe22f,	// (0x0009cd23) call2_cli_visual_graphic_pane_g1

0xe22f,	// (0x0009cd23) call2_cli_visual_graphic_pane_g2

0xe22f,	// (0x0009cd23) call2_cli_visual_graphic_pane_g3

0x0002,

0x0106,	// (0x0008ebfa) call2_cli_visual_graphic_pane_g

0xa3f2,	// (0x00098ee6) bg_popup_call2_rect_pane_g1

0xe2cd,	// (0x0009cdc1) bg_popup_call2_rect_pane_g2

0xa3fa,	// (0x00098eee) bg_popup_call2_rect_pane_g3

0xa402,	// (0x00098ef6) bg_popup_call2_rect_pane_g4

0xa40a,	// (0x00098efe) bg_popup_call2_rect_pane_g5

0xa412,	// (0x00098f06) bg_popup_call2_rect_pane_g6

0xa41a,	// (0x00098f0e) bg_popup_call2_rect_pane_g7

0xa422,	// (0x00098f16) bg_popup_call2_rect_pane_g8

0xa42a,	// (0x00098f1e) bg_popup_call2_rect_pane_g9

0x0008,

0xf586,	// (0x0009e07a) bg_popup_call2_rect_pane_g

0xa432,	// (0x00098f26) bg_popup_call2_bubble_pane_g1

0xa43a,	// (0x00098f2e) bg_popup_call2_bubble_pane_g2

0xa442,	// (0x00098f36) bg_popup_call2_bubble_pane_g3

0xa44a,	// (0x00098f3e) bg_popup_call2_bubble_pane_g4

0xa452,	// (0x00098f46) bg_popup_call2_bubble_pane_g5

0xa45a,	// (0x00098f4e) bg_popup_call2_bubble_pane_g6

0xa462,	// (0x00098f56) bg_popup_call2_bubble_pane_g7

0xa46a,	// (0x00098f5e) bg_popup_call2_bubble_pane_g8

0xa472,	// (0x00098f66) bg_popup_call2_bubble_pane_g9

0x0008,

0xf599,	// (0x0009e08d) bg_popup_call2_bubble_pane_g

0x12ce,	// (0x0008fdc2) aid_cale_week_size_cell_pane

0x1744,	// (0x00090238) aid_cams_cif_uncrop_pane_ParamLimits

0x1744,	// (0x00090238) aid_cams_cif_uncrop_pane

0x1901,	// (0x000903f5) aid_cams_size_cell_ParamLimits

0x1901,	// (0x000903f5) aid_cams_size_cell

0x1915,	// (0x00090409) grid_cams_pane_ParamLimits

0x192f,	// (0x00090423) linegrid_cams_pane_ParamLimits

0x1b25,	// (0x00090619) call_video_pane_t1

0x1b43,	// (0x00090637) call_video_pane_t2

0x0001,

0xf28d,	// (0x0009dd81) call_video_pane_t

0x1f76,	// (0x00090a6a) aid_cale_month_size_cell_pane_ParamLimits

0x1f76,	// (0x00090a6a) aid_cale_month_size_cell_pane

0xf623,	// (0x0009e117) smil_status_volume_pane_g

0xa6df,	// (0x000991d3) volume_smil_pane_ParamLimits

0xedd7,	// (0x0009d8cb) aid_popup2_width_pane

0x122b,	// (0x0008fd1f) cell_qdial_pane_g4_ParamLimits

0x122b,	// (0x0008fd1f) cell_qdial_pane_g4

0x2c05,	// (0x000916f9) aid_blid_cardinal_pane_ParamLimits

0x2c11,	// (0x00091705) aid_blid_destination_pane_ParamLimits

0x2c11,	// (0x00091705) aid_blid_destination_pane

0xe0c3,	// (0x0009cbb7) bg_popup_call_poc_act_pane_ParamLimits

0xe0c3,	// (0x0009cbb7) bg_popup_call_poc_act_pane

0xe0c3,	// (0x0009cbb7) bg_popup_call_poc_inact_pane_ParamLimits

0xe0c3,	// (0x0009cbb7) bg_popup_call_poc_inact_pane

0xa482,	// (0x00098f76) bg_popup_call_poc_act_pane_g1

0xa48a,	// (0x00098f7e) bg_popup_call_poc_act_pane_g2

0xa492,	// (0x00098f86) bg_popup_call_poc_act_pane_g3

0xa44a,	// (0x00098f3e) bg_popup_call_poc_act_pane_g4

0xa452,	// (0x00098f46) bg_popup_call_poc_act_pane_g5

0xa49a,	// (0x00098f8e) bg_popup_call_poc_act_pane_g6

0xa462,	// (0x00098f56) bg_popup_call_poc_act_pane_g7

0xa4a2,	// (0x00098f96) bg_popup_call_poc_act_pane_g8

0xde68,	// (0x0009c95c) main_usb_pane

0xa5fb,	// (0x000990ef) popup_cale_lunar_info_window

0x1e0d,	// (0x00090901) im_reading_pane_t1_ParamLimits

0xe494,	// (0x0009cf88) list_im_pane_ParamLimits

0xe4a5,	// (0x0009cf99) scroll_pane_cp07_ParamLimits

0xde68,	// (0x0009c95c) grid_highlight_pane_cp012

0xe0c3,	// (0x0009cbb7) mup_scale_pane_ParamLimits

0xee93,	// (0x0009d987) main_usb_pane_g1_ParamLimits

0xee93,	// (0x0009d987) main_usb_pane_g1

0x456f,	// (0x00093063) main_usb_pane_g2_ParamLimits

0x456f,	// (0x00093063) main_usb_pane_g2

0x0001,

0xf5c3,	// (0x0009e0b7) main_usb_pane_g_ParamLimits

0xf5c3,	// (0x0009e0b7) main_usb_pane_g

0x4585,	// (0x00093079) main_usb_pane_t1_ParamLimits

0x4585,	// (0x00093079) main_usb_pane_t1

0x4597,	// (0x0009308b) main_usb_pane_t2_ParamLimits

0x4597,	// (0x0009308b) main_usb_pane_t2

0x45a9,	// (0x0009309d) main_usb_pane_t3_ParamLimits

0x45a9,	// (0x0009309d) main_usb_pane_t3

0x45bb,	// (0x000930af) main_usb_pane_t4_ParamLimits

0x45bb,	// (0x000930af) main_usb_pane_t4

0x45cd,	// (0x000930c1) main_usb_pane_t5_ParamLimits

0x45cd,	// (0x000930c1) main_usb_pane_t5

0x45df,	// (0x000930d3) main_usb_pane_t6_ParamLimits

0x45df,	// (0x000930d3) main_usb_pane_t6

0x0005,

0xf5c8,	// (0x0009e0bc) main_usb_pane_t_ParamLimits

0x2baa,	// (0x0009169e) aid_text_placing

0x2bb3,	// (0x000916a7) main_location2_pane_t1_ParamLimits

0x2bc7,	// (0x000916bb) main_location2_pane_t2_ParamLimits

0x2bdb,	// (0x000916cf) main_location2_pane_t3_ParamLimits

0x2bf1,	// (0x000916e5) main_location2_pane_t4_ParamLimits

0x2bf1,	// (0x000916e5) main_location2_pane_t4

0xf3ee,	// (0x0009dee2) main_location2_pane_t_ParamLimits

0xe107,	// (0x0009cbfb) find_pinb_pane_g2_ParamLimits

0xe107,	// (0x0009cbfb) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0009dc30) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0009dc30) find_pinb_pane_g

0xe113,	// (0x0009cc07) find_pinb_pane_t1_ParamLimits

0xe125,	// (0x0009cc19) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0009dc35) find_pinb_pane_t_ParamLimits

0xde68,	// (0x0009c95c) main_call3_pane

0x22da,	// (0x00090dce) cale_month_day_heading_pane_t1_ParamLimits

0x2338,	// (0x00090e2c) cale_month_day_heading_pane_t2_ParamLimits

0x239d,	// (0x00090e91) cale_month_day_heading_pane_t3_ParamLimits

0x2402,	// (0x00090ef6) cale_month_day_heading_pane_t4_ParamLimits

0x2467,	// (0x00090f5b) cale_month_day_heading_pane_t5_ParamLimits

0x24dc,	// (0x00090fd0) cale_month_day_heading_pane_t6_ParamLimits

0x2551,	// (0x00091045) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0009ddb9) cale_month_day_heading_pane_t_ParamLimits

0xe6e5,	// (0x0009d1d9) smil_status_volume_pane

0x3429,	// (0x00091f1d) postcard_address_pane_ParamLimits

0x3429,	// (0x00091f1d) postcard_address_pane

0x343b,	// (0x00091f2f) postcard_message_pane_ParamLimits

0x343b,	// (0x00091f2f) postcard_message_pane

0x4552,	// (0x00093046) call2_cli_visual_pane_t1_ParamLimits

0x4552,	// (0x00093046) call2_cli_visual_pane_t1

0x4d66,	// (0x0009385a) postcard_message_pane_t1_ParamLimits

0x4d66,	// (0x0009385a) postcard_message_pane_t1

0x4d4f,	// (0x00093843) postcard_address_pane_t1_ParamLimits

0x4d4f,	// (0x00093843) postcard_address_pane_t1

0x4d3b,	// (0x0009382f) popup_call3_audio_in_window_ParamLimits

0x4d3b,	// (0x0009382f) popup_call3_audio_in_window

0x4bca,	// (0x000936be) bg_popup_call3_in_pane_ParamLimits

0x4bca,	// (0x000936be) bg_popup_call3_in_pane

0x4c3c,	// (0x00093730) popup_call3_audio_in_window_g1_ParamLimits

0x4c3c,	// (0x00093730) popup_call3_audio_in_window_g1

0x4c5c,	// (0x00093750) popup_call3_audio_in_window_g2_ParamLimits

0x4c5c,	// (0x00093750) popup_call3_audio_in_window_g2

0x4c7c,	// (0x00093770) popup_call3_audio_in_window_g3_ParamLimits

0x4c7c,	// (0x00093770) popup_call3_audio_in_window_g3

0x0003,

0xf62a,	// (0x0009e11e) popup_call3_audio_in_window_g_ParamLimits

0xf62a,	// (0x0009e11e) popup_call3_audio_in_window_g

0x4cad,	// (0x000937a1) popup_call3_audio_in_window_t1_ParamLimits

0x4cad,	// (0x000937a1) popup_call3_audio_in_window_t1

0x4ceb,	// (0x000937df) popup_call3_audio_in_window_t2_ParamLimits

0x4ceb,	// (0x000937df) popup_call3_audio_in_window_t2

0x4d29,	// (0x0009381d) popup_call3_audio_in_window_t3_ParamLimits

0x4d29,	// (0x0009381d) popup_call3_audio_in_window_t3

0x0002,

0xf633,	// (0x0009e127) popup_call3_audio_in_window_t_ParamLimits

0xf633,	// (0x0009e127) popup_call3_audio_in_window_t

0xec64,	// (0x0009d758) bg_popup_call3_rect_pane

0xa3f2,	// (0x00098ee6) bg_popup_call3_rect_pane_g1

0xe2cd,	// (0x0009cdc1) bg_popup_call3_rect_pane_g2

0xa3fa,	// (0x00098eee) bg_popup_call3_rect_pane_g3

0xa402,	// (0x00098ef6) bg_popup_call3_rect_pane_g4

0xa40a,	// (0x00098efe) bg_popup_call3_rect_pane_g5

0xa412,	// (0x00098f06) bg_popup_call3_rect_pane_g6

0xa41a,	// (0x00098f0e) bg_popup_call3_rect_pane_g7

0x2fe3,	// (0x00091ad7) mup_visualizer_osc_pane

0xed23,	// (0x0009d817) mup_visualizer_spec_pane

0x4bfa,	// (0x000936ee) call3_video_qcif_pane_ParamLimits

0x4bfa,	// (0x000936ee) call3_video_qcif_pane

0x4c0b,	// (0x000936ff) call3_video_qcif_uncrop_pane_ParamLimits

0x4c0b,	// (0x000936ff) call3_video_qcif_uncrop_pane

0x4c17,	// (0x0009370b) call3_video_subqcif_pane_ParamLimits

0x4c17,	// (0x0009370b) call3_video_subqcif_pane

0x4c2b,	// (0x0009371f) call3_video_subqcif_uncrop_pane_ParamLimits

0x4c2b,	// (0x0009371f) call3_video_subqcif_uncrop_pane

0x4c9c,	// (0x00093790) popup_call3_audio_in_window_g4_ParamLimits

0x4c9c,	// (0x00093790) popup_call3_audio_in_window_g4

0x4bb9,	// (0x000936ad) mup_spec_half_pane

0x4bc2,	// (0x000936b6) mup_spec_half_pane_cp

0xa692,	// (0x00099186) mup_osc_middle_pane

0xa69b,	// (0x0009918f) mup_visualizer_osc_pane_g1

0x4b99,	// (0x0009368d) mup_spec_bar_pane_ParamLimits

0x4b99,	// (0x0009368d) mup_spec_bar_pane

0xa67f,	// (0x00099173) mup_spec_bar_pane_g1

0xa689,	// (0x0009917d) mup_spec_bar_pane_g2

0x0001,

0xf61e,	// (0x0009e112) mup_spec_bar_pane_g

0x12ce,	// (0x0008fdc2) aid_cale_week_size_cell_pane_ParamLimits

0x12e1,	// (0x0008fdd5) bg_cale_heading_pane_ParamLimits

0xe301,	// (0x0009cdf5) bg_cale_pane_cp01_ParamLimits

0x12f9,	// (0x0008fded) cale_week_corner_pane_ParamLimits

0x130a,	// (0x0008fdfe) cale_week_day_heading_pane_ParamLimits

0x1322,	// (0x0008fe16) cale_week_scroll_pane_g1_ParamLimits

0x1337,	// (0x0008fe2b) cale_week_scroll_pane_g2_ParamLimits

0x1348,	// (0x0008fe3c) cale_week_scroll_pane_g3_ParamLimits

0x1359,	// (0x0008fe4d) cale_week_scroll_pane_g4_ParamLimits

0x136a,	// (0x0008fe5e) cale_week_scroll_pane_g5_ParamLimits

0x137d,	// (0x0008fe71) cale_week_scroll_pane_g6_ParamLimits

0x1390,	// (0x0008fe84) cale_week_scroll_pane_g7_ParamLimits

0x13a3,	// (0x0008fe97) cale_week_scroll_pane_g8_ParamLimits

0x13b6,	// (0x0008feaa) cale_week_scroll_pane_g9_ParamLimits

0x13c7,	// (0x0008febb) cale_week_scroll_pane_g10_ParamLimits

0x13d8,	// (0x0008fecc) cale_week_scroll_pane_g11_ParamLimits

0x13e9,	// (0x0008fedd) cale_week_scroll_pane_g12_ParamLimits

0x13fa,	// (0x0008feee) cale_week_scroll_pane_g13_ParamLimits

0x140b,	// (0x0008feff) cale_week_scroll_pane_g14_ParamLimits

0x141c,	// (0x0008ff10) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0009dcc1) cale_week_scroll_pane_g_ParamLimits

0x1431,	// (0x0008ff25) cale_week_time_pane_ParamLimits

0x1444,	// (0x0008ff38) grid_cale_week_pane_ParamLimits

0xe31a,	// (0x0009ce0e) listscroll_cale_week_pane_t1

0x1459,	// (0x0008ff4d) scroll_pane_cp08_ParamLimits

0x1fb7,	// (0x00090aab) cale_month_corner_pane_ParamLimits

0xe6bb,	// (0x0009d1af) cale_month_pane_t1

0x2299,	// (0x00090d8d) cale_month_week_pane_ParamLimits

0x2a11,	// (0x00091505) popup_call_status_window_g1_ParamLimits

0x2a25,	// (0x00091519) popup_call_status_window_g2_ParamLimits

0x2a39,	// (0x0009152d) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0009de69) popup_call_status_window_g_ParamLimits

0xe9c9,	// (0x0009d4bd) aid_call2_pane

0x325b,	// (0x00091d4f) msg_header_pane_g1

0x3429,	// (0x00091f1d) postcard_address2_pane_ParamLimits

0x3429,	// (0x00091f1d) postcard_address2_pane

0x343b,	// (0x00091f2f) postcard_message2_pane_ParamLimits

0x343b,	// (0x00091f2f) postcard_message2_pane

0x4b46,	// (0x0009363a) message2_row_pane_ParamLimits

0x4b46,	// (0x0009363a) message2_row_pane

0x4b65,	// (0x00093659) address2_row_pane_ParamLimits

0x4b65,	// (0x00093659) address2_row_pane

0xa64d,	// (0x00099141) postcard_message2_row_pane_g1

0xa655,	// (0x00099149) postcard_message2_row_pane_t1

0xa64d,	// (0x00099141) address2_row_pane_g1

0xa655,	// (0x00099149) address2_row_pane_t1

0xa0a1,	// (0x00098b95) aid_size_cell_vorec

0xde68,	// (0x0009c95c) main_rss_pane

0x4b78,	// (0x0009366c) rss_list_single_pane_ParamLimits

0x4b78,	// (0x0009366c) rss_list_single_pane

0xa663,	// (0x00099157) rss_list_single_pane_t1

0xa671,	// (0x00099165) rss_list_single_pane_t2

0x0001,

0xf619,	// (0x0009e10d) rss_list_single_pane_t

0xde68,	// (0x0009c95c) main_camera2_pane

0xde68,	// (0x0009c95c) main_video2_pane

0x4ddf,	// (0x000938d3) cams_zoom_pane_cp2_ParamLimits

0x4ddf,	// (0x000938d3) cams_zoom_pane_cp2

0x4dff,	// (0x000938f3) image2_vga_pane_ParamLimits

0x4dff,	// (0x000938f3) image2_vga_pane

0x4e50,	// (0x00093944) main_camera2_pane_g1_ParamLimits

0x4e50,	// (0x00093944) main_camera2_pane_g1

0x4e70,	// (0x00093964) main_camera2_pane_g2_ParamLimits

0x4e70,	// (0x00093964) main_camera2_pane_g2

0x4e90,	// (0x00093984) main_camera2_pane_g3_ParamLimits

0x4e90,	// (0x00093984) main_camera2_pane_g3

0x4eb0,	// (0x000939a4) main_camera2_pane_g4_ParamLimits

0x4eb0,	// (0x000939a4) main_camera2_pane_g4

0x4ed0,	// (0x000939c4) main_camera2_pane_g5_ParamLimits

0x4ed0,	// (0x000939c4) main_camera2_pane_g5

0x4ef0,	// (0x000939e4) main_camera2_pane_g6_ParamLimits

0x4ef0,	// (0x000939e4) main_camera2_pane_g6

0x4f10,	// (0x00093a04) main_camera2_pane_g7_ParamLimits

0x4f10,	// (0x00093a04) main_camera2_pane_g7

0x4f30,	// (0x00093a24) main_camera2_pane_g8_ParamLimits

0x4f30,	// (0x00093a24) main_camera2_pane_g8

0x0008,

0xf63a,	// (0x0009e12e) main_camera2_pane_g_ParamLimits

0xf63a,	// (0x0009e12e) main_camera2_pane_g

0x4f70,	// (0x00093a64) main_camera2_pane_t1_ParamLimits

0x4f70,	// (0x00093a64) main_camera2_pane_t1

0x4fa5,	// (0x00093a99) main_camera2_pane_t2_ParamLimits

0x4fa5,	// (0x00093a99) main_camera2_pane_t2

0x4fcb,	// (0x00093abf) main_camera2_pane_t3_ParamLimits

0x4fcb,	// (0x00093abf) main_camera2_pane_t3

0x5029,	// (0x00093b1d) main_camera2_pane_t4_ParamLimits

0x5029,	// (0x00093b1d) main_camera2_pane_t4

0x0006,

0xf64d,	// (0x0009e141) main_camera2_pane_t_ParamLimits

0xf64d,	// (0x0009e141) main_camera2_pane_t

0x50bb,	// (0x00093baf) cams_zoom_pane_cp4_ParamLimits

0x50bb,	// (0x00093baf) cams_zoom_pane_cp4

0x50d1,	// (0x00093bc5) image2_cif_pane_ParamLimits

0x50d1,	// (0x00093bc5) image2_cif_pane

0x50fc,	// (0x00093bf0) image2_subqcif_pane_ParamLimits

0x50fc,	// (0x00093bf0) image2_subqcif_pane

0x5116,	// (0x00093c0a) main_video2_pane_g1_ParamLimits

0x5116,	// (0x00093c0a) main_video2_pane_g1

0x5130,	// (0x00093c24) main_video2_pane_g2_ParamLimits

0x5130,	// (0x00093c24) main_video2_pane_g2

0x5146,	// (0x00093c3a) main_video2_pane_g3_ParamLimits

0x5146,	// (0x00093c3a) main_video2_pane_g3

0x515c,	// (0x00093c50) main_video2_pane_g4_ParamLimits

0x515c,	// (0x00093c50) main_video2_pane_g4

0x5172,	// (0x00093c66) main_video2_pane_g5_ParamLimits

0x5172,	// (0x00093c66) main_video2_pane_g5

0x5188,	// (0x00093c7c) main_video2_pane_g6_ParamLimits

0x5188,	// (0x00093c7c) main_video2_pane_g6

0x0005,

0xf65c,	// (0x0009e150) main_video2_pane_g_ParamLimits

0xf65c,	// (0x0009e150) main_video2_pane_g

0x51a2,	// (0x00093c96) main_video2_pane_t1_ParamLimits

0x51a2,	// (0x00093c96) main_video2_pane_t1

0x51c6,	// (0x00093cba) main_video2_pane_t2_ParamLimits

0x51c6,	// (0x00093cba) main_video2_pane_t2

0x5214,	// (0x00093d08) main_video2_pane_t3_ParamLimits

0x5214,	// (0x00093d08) main_video2_pane_t3

0x0002,

0xf669,	// (0x0009e15d) main_video2_pane_t_ParamLimits

0xf669,	// (0x0009e15d) main_video2_pane_t

0x469c,	// (0x00093190) call_muted_g2

0x0001,

0xf60b,	// (0x0009e0ff) call_muted_g

0xde68,	// (0x0009c95c) main_mup2_pane

0x525c,	// (0x00093d50) main_mup2_pane_g1_ParamLimits

0x525c,	// (0x00093d50) main_mup2_pane_g1

0x5268,	// (0x00093d5c) main_mup2_pane_g2_ParamLimits

0x5268,	// (0x00093d5c) main_mup2_pane_g2

0xa803,	// (0x000992f7) main_mup_pane_g13_cp1

0xa80b,	// (0x000992ff) mup_volume_pane_cp1

0x5284,	// (0x00093d78) main_mup2_pane_g4_ParamLimits

0x5284,	// (0x00093d78) main_mup2_pane_g4

0x5296,	// (0x00093d8a) main_mup2_pane_g5_ParamLimits

0x5296,	// (0x00093d8a) main_mup2_pane_g5

0x52a8,	// (0x00093d9c) main_mup2_pane_g6_ParamLimits

0x52a8,	// (0x00093d9c) main_mup2_pane_g6

0x52ba,	// (0x00093dae) main_mup2_pane_g7_ParamLimits

0x52ba,	// (0x00093dae) main_mup2_pane_g7

0x0006,

0xf670,	// (0x0009e164) main_mup2_pane_g_ParamLimits

0xf670,	// (0x0009e164) main_mup2_pane_g

0x52d2,	// (0x00093dc6) main_mup2_pane_t1_ParamLimits

0x52d2,	// (0x00093dc6) main_mup2_pane_t1

0x52e8,	// (0x00093ddc) main_mup2_pane_t2_ParamLimits

0x52e8,	// (0x00093ddc) main_mup2_pane_t2

0x52fe,	// (0x00093df2) main_mup2_pane_t3_ParamLimits

0x52fe,	// (0x00093df2) main_mup2_pane_t3

0x5314,	// (0x00093e08) main_mup2_pane_t4_ParamLimits

0x5314,	// (0x00093e08) main_mup2_pane_t4

0x532c,	// (0x00093e20) main_mup2_pane_t5_ParamLimits

0x532c,	// (0x00093e20) main_mup2_pane_t5

0x5344,	// (0x00093e38) main_mup2_pane_t6_ParamLimits

0x5344,	// (0x00093e38) main_mup2_pane_t6

0x0005,

0xf67f,	// (0x0009e173) main_mup2_pane_t_ParamLimits

0xf67f,	// (0x0009e173) main_mup2_pane_t

0x5374,	// (0x00093e68) mup2_visualizer_pane_ParamLimits

0x5374,	// (0x00093e68) mup2_visualizer_pane

0x53a2,	// (0x00093e96) mup_progress_pane_cp_ParamLimits

0x53a2,	// (0x00093e96) mup_progress_pane_cp

0xa7e5,	// (0x000992d9) mup_volume_pane_cp_ParamLimits

0xa7e5,	// (0x000992d9) mup_volume_pane_cp

0x53b6,	// (0x00093eaa) mup2_visualizer_pane_g1_ParamLimits

0x53b6,	// (0x00093eaa) mup2_visualizer_pane_g1

0xa724,	// (0x00099218) mup2_visualizer_pane_g2_ParamLimits

0xa724,	// (0x00099218) mup2_visualizer_pane_g2

0x53cd,	// (0x00093ec1) mup2_visualizer_pane_g3_ParamLimits

0x53cd,	// (0x00093ec1) mup2_visualizer_pane_g3

0x0002,

0xf68c,	// (0x0009e180) mup2_visualizer_pane_g_ParamLimits

0xf68c,	// (0x0009e180) mup2_visualizer_pane_g

0xefdc,	// (0x0009dad0) aid_size_cell_fmradio

0x484e,	// (0x00093342) aid_height_parent_landcape

0xe523,	// (0x0009d017) wml_content_pane_cp

0xe52b,	// (0x0009d01f) wml_tabs_pane

0xe534,	// (0x0009d028) popup_wml_miniature_window

0xe53c,	// (0x0009d030) scroll_pane_cp021

0xe550,	// (0x0009d044) wml_content_pane_comp8

0xde68,	// (0x0009c95c) bg_popup_sub_pane_cp05

0xa742,	// (0x00099236) popup_wml_miniature_window_g1

0xa74a,	// (0x0009923e) wml_miniature_view_pane

0x53d9,	// (0x00093ecd) aid_size_wml_view

0x53e1,	// (0x00093ed5) wml_miniature_view_pane_g1

0x53ea,	// (0x00093ede) wml_miniature_view_pane_g2

0x53f3,	// (0x00093ee7) wml_miniature_view_pane_g3

0x53fb,	// (0x00093eef) wml_miniature_view_pane_g4

0x5403,	// (0x00093ef7) wml_miniature_view_pane_g5

0x540b,	// (0x00093eff) wml_miniature_view_pane_g6

0x5413,	// (0x00093f07) wml_miniature_view_pane_g7

0x541b,	// (0x00093f0f) wml_miniature_view_pane_g8

0x0007,

0xf693,	// (0x0009e187) wml_miniature_view_pane_g

0xa752,	// (0x00099246) background_graphic_ParamLimits

0xa752,	// (0x00099246) background_graphic

0xa75e,	// (0x00099252) wml_tabs_2_pane

0xa767,	// (0x0009925b) wml_tabs_3_pane_ParamLimits

0xa767,	// (0x0009925b) wml_tabs_3_pane

0xa779,	// (0x0009926d) wml_tabs_4_pane_ParamLimits

0xa779,	// (0x0009926d) wml_tabs_4_pane

0xa78f,	// (0x00099283) wml_tabs_5_pane_ParamLimits

0xa78f,	// (0x00099283) wml_tabs_5_pane

0xa7a9,	// (0x0009929d) wml_tabs_pane_g2_ParamLimits

0xa7a9,	// (0x0009929d) wml_tabs_pane_g2

0xa7bd,	// (0x000992b1) wml_tabs_pane_g3_ParamLimits

0xa7bd,	// (0x000992b1) wml_tabs_pane_g3

0x5423,	// (0x00093f17) wml_tabs_2_active_pane_ParamLimits

0x5423,	// (0x00093f17) wml_tabs_2_active_pane

0x5437,	// (0x00093f2b) wml_tabs_2_passive_pane_ParamLimits

0x5437,	// (0x00093f2b) wml_tabs_2_passive_pane

0x544b,	// (0x00093f3f) wml_tabs_3_active_pane_cp_ParamLimits

0x544b,	// (0x00093f3f) wml_tabs_3_active_pane_cp

0x5460,	// (0x00093f54) wml_tabs_3_passive_pane_ParamLimits

0x5460,	// (0x00093f54) wml_tabs_3_passive_pane

0x5473,	// (0x00093f67) wml_tabs_3_passive_pane_cp_ParamLimits

0x5473,	// (0x00093f67) wml_tabs_3_passive_pane_cp

0x548a,	// (0x00093f7e) tabs_4_active_pane

0x5492,	// (0x00093f86) tabs_4_passive_pane

0x549c,	// (0x00093f90) tabs_4_passive_pane_cp

0x54a4,	// (0x00093f98) tabs_4_passive_pane_cp2

0xa47a,	// (0x00098f6e) aid_height_text

0x2fb5,	// (0x00091aa9) mup_volume_cont_pane_ParamLimits

0x2fb5,	// (0x00091aa9) mup_volume_cont_pane

0x0efb,	// (0x0008f9ef) aid_size_cell_pinb

0xe0f3,	// (0x0009cbe7) aid_size_list_pinb

0x538e,	// (0x00093e82) mup2_volume_cont_pane_ParamLimits

0x538e,	// (0x00093e82) mup2_volume_cont_pane

0xa7d1,	// (0x000992c5) mup2_volume_cont_pane_g1_ParamLimits

0xa7d1,	// (0x000992c5) mup2_volume_cont_pane_g1

0x0bdb,	// (0x0008f6cf) aid_size_cell_touch_ParamLimits

0x0bdb,	// (0x0008f6cf) aid_size_cell_touch

0x0de9,	// (0x0008f8dd) touch_pane_ParamLimits

0x0de9,	// (0x0008f8dd) touch_pane

0xedc5,	// (0x0009d8b9) main_rss2_pane

0xa813,	// (0x00099307) listscroll_rss2_pane

0xa81c,	// (0x00099310) rss2_navigation_pane

0xa824,	// (0x00099318) list_rss2_pane

0xeb17,	// (0x0009d60b) scroll_pane_cp22

0xa82c,	// (0x00099320) rss2_navigation_pane_g1

0xa835,	// (0x00099329) rss2_navigation_pane_g2

0xa83d,	// (0x00099331) rss2_navigation_pane_g3

0x0002,

0xf6a4,	// (0x0009e198) rss2_navigation_pane_g

0xa845,	// (0x00099339) rss2_navigation_pane_t1

0x54ae,	// (0x00093fa2) rss2_list_single_pane_ParamLimits

0x54ae,	// (0x00093fa2) rss2_list_single_pane

0xa853,	// (0x00099347) rss2_list_single_pane_t2

0xa861,	// (0x00099355) rss2_list_single_pane_t3_ParamLimits

0xa861,	// (0x00099355) rss2_list_single_pane_t3

0xa87e,	// (0x00099372) rss2_list_single_pane_t4

0x2777,	// (0x0009126b) smil_status_pane_g1

0xee3d,	// (0x0009d931) main_image2_pane_ParamLimits

0xee3d,	// (0x0009d931) main_image2_pane

0x4f50,	// (0x00093a44) main_camera2_pane_g9_ParamLimits

0x4f50,	// (0x00093a44) main_camera2_pane_g9

0x507e,	// (0x00093b72) main_camera2_pane_t5_ParamLimits

0x507e,	// (0x00093b72) main_camera2_pane_t5

0xa6f4,	// (0x000991e8) main_camera2_pane_t6_ParamLimits

0xa6f4,	// (0x000991e8) main_camera2_pane_t6

0x54c6,	// (0x00093fba) main_image2_pane_g1_ParamLimits

0x54c6,	// (0x00093fba) main_image2_pane_g1

0x366b,	// (0x0009215f) smil2_video_pane_ParamLimits

0x366b,	// (0x0009215f) smil2_video_pane

0xedf3,	// (0x0009d8e7) aid_zoom_text_primary_cp

0xee33,	// (0x0009d927) popup_preview_fixed_window

0xe48c,	// (0x0009cf80) im_reading_pane_g1

0x4dc7,	// (0x000938bb) cams2_bc_adjust_pane_cp_ParamLimits

0x4dc7,	// (0x000938bb) cams2_bc_adjust_pane_cp

0x50ad,	// (0x00093ba1) cams2_bc_adjust_pane_ParamLimits

0x50ad,	// (0x00093ba1) cams2_bc_adjust_pane

0xa88c,	// (0x00099380) cams2_bc_adjust_pane_g1

0xa894,	// (0x00099388) cams2_slider_pane

0xa89d,	// (0x00099391) cams2_slider_pane_g1

0xa8a6,	// (0x0009939a) cams2_slider_pane_g2

0x0006,

0xf6ab,	// (0x0009e19f) cams2_slider_pane_g

0x0fba,	// (0x0008faae) calc_display_pane_ParamLimits

0x0fe2,	// (0x0008fad6) calc_paper_pane_ParamLimits

0x1005,	// (0x0008faf9) grid_calc_pane_ParamLimits

0xa19b,	// (0x00098c8f) popup_clock_digital_window_t1_ParamLimits

0xef79,	// (0x0009da6d) main_image_pane_t1

0x0f9c,	// (0x0008fa90) aid_size_cell_calc_ParamLimits

0x0f9c,	// (0x0008fa90) aid_size_cell_calc

0x4894,	// (0x00093388) popup_blid_sat_info2_window_ParamLimits

0x4894,	// (0x00093388) popup_blid_sat_info2_window

0xa8c8,	// (0x000993bc) aid_size_cell_blid

0xa8d0,	// (0x000993c4) bg_popup_window_pane_cp07

0xa8f3,	// (0x000993e7) grid_popup_blid_pane

0xa8fd,	// (0x000993f1) heading_pane_cp05_ParamLimits

0xa8fd,	// (0x000993f1) heading_pane_cp05

0xa9c7,	// (0x000994bb) cell_popup_blid_pane_ParamLimits

0xa9c7,	// (0x000994bb) cell_popup_blid_pane

0xa9ed,	// (0x000994e1) cell_popup_blid_pane_g1

0xa9f5,	// (0x000994e9) cell_popup_blid_pane_t1

0x535e,	// (0x00093e52) mup2_indicator_pane_ParamLimits

0x535e,	// (0x00093e52) mup2_indicator_pane

0xec64,	// (0x0009d758) mup2_visualizer_osc_pane

0xa730,	// (0x00099224) mup2_visualizer_spec_pane_ParamLimits

0xa730,	// (0x00099224) mup2_visualizer_spec_pane

0x54dc,	// (0x00093fd0) mup2_spec_half_pane

0x54e5,	// (0x00093fd9) mup2_spec_half_pane_cp

0x54ed,	// (0x00093fe1) mup2_spec_bar_pane_ParamLimits

0x54ed,	// (0x00093fe1) mup2_spec_bar_pane

0xa67f,	// (0x00099173) mup2_spec_bar_pane_g1

0xa689,	// (0x0009917d) mup2_spec_bar_pane_g2

0x0001,

0xf61e,	// (0x0009e112) mup2_spec_bar_pane_g

0x550d,	// (0x00094001) mup2_osc_middle_pane

0xa69b,	// (0x0009918f) mup2_visualizer_osc_pane_g1

0xd817,	// (0x0009c30b) popup_number_entry_window_t1_ParamLimits

0xd82a,	// (0x0009c31e) popup_number_entry_window_t2_ParamLimits

0xd83c,	// (0x0009c330) popup_number_entry_window_t3_ParamLimits

0x0e3b,	// (0x0008f92f) popup_number_entry_window_t5_ParamLimits

0x0e3b,	// (0x0008f92f) popup_number_entry_window_t5

0xf0e7,	// (0x0009dbdb) popup_number_entry_window_t_ParamLimits

0xd84e,	// (0x0009c342) text_title_cp2_ParamLimits

0xa1da,	// (0x00098cce) aid_hotspot_pointer_text2_pane

0xa200,	// (0x00098cf4) main_viewer_pane_g9_ParamLimits

0xa200,	// (0x00098cf4) main_viewer_pane_g9

0xe6bb,	// (0x0009d1af) cale_month_pane_t1_ParamLimits

0xe6f8,	// (0x0009d1ec) bg_cale_pane_ParamLimits

0xe710,	// (0x0009d204) list_cale_pane_ParamLimits

0xe31a,	// (0x0009ce0e) listscroll_cale_day_pane_t1

0xe721,	// (0x0009d215) scroll_pane_cp09_ParamLimits

0x2feb,	// (0x00091adf) main_mup_eq_pane_t1_ParamLimits

0x2feb,	// (0x00091adf) main_mup_eq_pane_t1

0x3007,	// (0x00091afb) main_mup_eq_pane_t2_ParamLimits

0x3007,	// (0x00091afb) main_mup_eq_pane_t2

0x3023,	// (0x00091b17) main_mup_eq_pane_t3_ParamLimits

0x3023,	// (0x00091b17) main_mup_eq_pane_t3

0x3041,	// (0x00091b35) main_mup_eq_pane_t4_ParamLimits

0x3041,	// (0x00091b35) main_mup_eq_pane_t4

0x305f,	// (0x00091b53) main_mup_eq_pane_t5_ParamLimits

0x305f,	// (0x00091b53) main_mup_eq_pane_t5

0x307d,	// (0x00091b71) main_mup_eq_pane_t6_ParamLimits

0x307d,	// (0x00091b71) main_mup_eq_pane_t6

0x3093,	// (0x00091b87) main_mup_eq_pane_t7_ParamLimits

0x3093,	// (0x00091b87) main_mup_eq_pane_t7

0x30a9,	// (0x00091b9d) main_mup_eq_pane_t8_ParamLimits

0x30a9,	// (0x00091b9d) main_mup_eq_pane_t8

0x30bf,	// (0x00091bb3) main_mup_eq_pane_t9_ParamLimits

0x30bf,	// (0x00091bb3) main_mup_eq_pane_t9

0x30d9,	// (0x00091bcd) main_mup_eq_pane_t10_ParamLimits

0x30d9,	// (0x00091bcd) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0009df68) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0009df68) main_mup_eq_pane_t

0x3188,	// (0x00091c7c) mup_equalizer_pane_cp5_ParamLimits

0x319c,	// (0x00091c90) mup_equalizer_pane_cp6_ParamLimits

0x31b0,	// (0x00091ca4) mup_equalizer_pane_cp7_ParamLimits

0xedc5,	// (0x0009d8b9) main_gallery_pane

0xa6a4,	// (0x00099198) smil2_volume_pane

0xa6ac,	// (0x000991a0) smil_status_volume_pane_g1_ParamLimits

0xa6bf,	// (0x000991b3) smil_status_volume_pane_g2_ParamLimits

0xa6d2,	// (0x000991c6) smil_status_volume_pane_g3_ParamLimits

0xf623,	// (0x0009e117) smil_status_volume_pane_g_ParamLimits

0xa8d0,	// (0x000993c4) bg_popup_window_pane_cp07_ParamLimits

0xa8de,	// (0x000993d2) blid_firmament_pane

0x5516,	// (0x0009400a) aid_size_cell_gallery_ParamLimits

0x5516,	// (0x0009400a) aid_size_cell_gallery

0x552c,	// (0x00094020) grid_gallery_pane_ParamLimits

0x552c,	// (0x00094020) grid_gallery_pane

0x5545,	// (0x00094039) cell_gallery_pane_ParamLimits

0x5545,	// (0x00094039) cell_gallery_pane

0xaa03,	// (0x000994f7) bg_cell_gallery_focus_pane_ParamLimits

0xaa03,	// (0x000994f7) bg_cell_gallery_focus_pane

0xaa15,	// (0x00099509) cell_gallery_pane_g1_ParamLimits

0xaa15,	// (0x00099509) cell_gallery_pane_g1

0x558e,	// (0x00094082) cell_gallery_pane_g2_ParamLimits

0x558e,	// (0x00094082) cell_gallery_pane_g2

0x559b,	// (0x0009408f) cell_gallery_pane_g3_ParamLimits

0x559b,	// (0x0009408f) cell_gallery_pane_g3

0xaa21,	// (0x00099515) cell_gallery_pane_g4_ParamLimits

0xaa21,	// (0x00099515) cell_gallery_pane_g4

0x0003,

0xf6d1,	// (0x0009e1c5) cell_gallery_pane_g_ParamLimits

0xf6d1,	// (0x0009e1c5) cell_gallery_pane_g

0xaa2d,	// (0x00099521) bg_cell_gallery_focus_pane_g1

0xaa35,	// (0x00099529) bg_cell_gallery_focus_pane_g2

0xaa3d,	// (0x00099531) bg_cell_gallery_focus_pane_g3

0xaa45,	// (0x00099539) bg_cell_gallery_focus_pane_g4

0xaa4d,	// (0x00099541) bg_cell_gallery_focus_pane_g5

0xaa55,	// (0x00099549) bg_cell_gallery_focus_pane_g6

0xaa5d,	// (0x00099551) bg_cell_gallery_focus_pane_g7

0xaa65,	// (0x00099559) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6da,	// (0x0009e1ce) bg_cell_gallery_focus_pane_g

0xaa6d,	// (0x00099561) aid_firma_cardinal

0xaa81,	// (0x00099575) blid_firmament_pane_t1

0xaa98,	// (0x0009958c) blid_firmament_pane_t2

0xaaaf,	// (0x000995a3) blid_firmament_pane_t3

0xaac6,	// (0x000995ba) blid_firmament_pane_t4

0x0003,

0xf6eb,	// (0x0009e1df) blid_firmament_pane_t

0xaadd,	// (0x000995d1) blid_sat_info_pane

0xaaed,	// (0x000995e1) blid_sat_info_pane_g1

0xaaed,	// (0x000995e1) blid_sat_info_pane_g2

0x0001,

0xf6f4,	// (0x0009e1e8) blid_sat_info_pane_g

0xaaf7,	// (0x000995eb) blid_sat_info_pane_t1

0xab05,	// (0x000995f9) smil2_volume_content_pane

0xab0e,	// (0x00099602) smil2_volume_pane_g1

0xab16,	// (0x0009960a) smil2_volume_content_pane_g1

0xab1f,	// (0x00099613) smil2_volume_content_pane_g2

0xab28,	// (0x0009961c) smil2_volume_content_pane_g3

0xab31,	// (0x00099625) smil2_volume_content_pane_g4

0xab3a,	// (0x0009962e) smil2_volume_content_pane_g5

0xab43,	// (0x00099637) smil2_volume_content_pane_g6

0xab4c,	// (0x00099640) smil2_volume_content_pane_g7

0xab55,	// (0x00099649) smil2_volume_content_pane_g8

0xab5e,	// (0x00099652) smil2_volume_content_pane_g9

0xab67,	// (0x0009965b) smil2_volume_content_pane_g10

0x0009,

0xf6f9,	// (0x0009e1ed) smil2_volume_content_pane_g

0x14b3,	// (0x0008ffa7) cale_week_day_heading_pane_t1_ParamLimits

0x14c7,	// (0x0008ffbb) cale_week_day_heading_pane_t2_ParamLimits

0x14db,	// (0x0008ffcf) cale_week_day_heading_pane_t3_ParamLimits

0x14ef,	// (0x0008ffe3) cale_week_day_heading_pane_t4_ParamLimits

0x1503,	// (0x0008fff7) cale_week_day_heading_pane_t5_ParamLimits

0x1517,	// (0x0009000b) cale_week_day_heading_pane_t6_ParamLimits

0x152d,	// (0x00090021) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0009dce0) cale_week_day_heading_pane_t_ParamLimits

0xe32c,	// (0x0009ce20) bg_cale_side_pane_ParamLimits

0x1541,	// (0x00090035) cale_week_time_pane_t1_ParamLimits

0x1559,	// (0x0009004d) cale_week_time_pane_t2_ParamLimits

0x1571,	// (0x00090065) cale_week_time_pane_t3_ParamLimits

0x1589,	// (0x0009007d) cale_week_time_pane_t4_ParamLimits

0x15a1,	// (0x00090095) cale_week_time_pane_t5_ParamLimits

0x15b9,	// (0x000900ad) cale_week_time_pane_t6_ParamLimits

0x15d1,	// (0x000900c5) cale_week_time_pane_t7_ParamLimits

0x15e9,	// (0x000900dd) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0009dcef) cale_week_time_pane_t_ParamLimits

0x1601,	// (0x000900f5) cell_cale_week_pane_g2_ParamLimits

0xe32c,	// (0x0009ce20) bg_cale_side_pane_cp01_ParamLimits

0x25c6,	// (0x000910ba) cale_month_week_pane_t1_ParamLimits

0x25dd,	// (0x000910d1) cale_month_week_pane_t2_ParamLimits

0x25f4,	// (0x000910e8) cale_month_week_pane_t3_ParamLimits

0x260b,	// (0x000910ff) cale_month_week_pane_t4_ParamLimits

0x2622,	// (0x00091116) cale_month_week_pane_t5_ParamLimits

0x2639,	// (0x0009112d) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0009ddc8) cale_month_week_pane_t_ParamLimits

0xa11b,	// (0x00098c0f) cell_cale_month_pane_g1_ParamLimits

0xedc5,	// (0x0009d8b9) main_cale_event_viewer_pane

0xedc5,	// (0x0009d8b9) listscroll_cale_event_viewer_pane

0xab70,	// (0x00099664) list_cale_ev_pane

0xab78,	// (0x0009966c) scroll_pane_cp023

0xab84,	// (0x00099678) field_cale_ev_pane_ParamLimits

0xab84,	// (0x00099678) field_cale_ev_pane

0xab9e,	// (0x00099692) field_cale_ev_content_pane_ParamLimits

0xab9e,	// (0x00099692) field_cale_ev_content_pane

0xabaa,	// (0x0009969e) field_cale_ev_pane_g1_ParamLimits

0xabaa,	// (0x0009969e) field_cale_ev_pane_g1

0xabb6,	// (0x000996aa) field_cale_ev_pane_g2_ParamLimits

0xabb6,	// (0x000996aa) field_cale_ev_pane_g2

0xabce,	// (0x000996c2) field_cale_ev_pane_g3_ParamLimits

0xabce,	// (0x000996c2) field_cale_ev_pane_g3

0x0002,

0xf70e,	// (0x0009e202) field_cale_ev_pane_g_ParamLimits

0xf70e,	// (0x0009e202) field_cale_ev_pane_g

0xabe6,	// (0x000996da) field_cale_ev_pane_t1_ParamLimits

0xabe6,	// (0x000996da) field_cale_ev_pane_t1

0xabfd,	// (0x000996f1) field_cale_ev_content_pane_t1_ParamLimits

0xabfd,	// (0x000996f1) field_cale_ev_content_pane_t1

0xee5f,	// (0x0009d953) bg_button_pane_cp01

0xe1da,	// (0x0009ccce) listscroll_cale_week_pane_ParamLimits

0x12c4,	// (0x0008fdb8) popup_toolbar_window_cp01

0xe31a,	// (0x0009ce0e) listscroll_cale_week_pane_t1_ParamLimits

0xe1da,	// (0x0009ccce) listscroll_cale_day_pane_ParamLimits

0x27d6,	// (0x000912ca) popup_toolbar_window_cp02

0xe31a,	// (0x0009ce0e) listscroll_cale_day_pane_t1_ParamLimits

0xe1da,	// (0x0009ccce) main_cale_month_pane_ParamLimits

0x4aba,	// (0x000935ae) popup_toolbar_window_cp03_ParamLimits

0x4aba,	// (0x000935ae) popup_toolbar_window_cp03

0x352f,	// (0x00092023) main_image_pane_g2_ParamLimits

0x352f,	// (0x00092023) main_image_pane_g2

0x3540,	// (0x00092034) main_image_pane_g3_ParamLimits

0x3540,	// (0x00092034) main_image_pane_g3

0x0002,

0xf506,	// (0x0009dffa) main_image_pane_g_ParamLimits

0xf506,	// (0x0009dffa) main_image_pane_g

0xef79,	// (0x0009da6d) main_image_pane_t1_ParamLimits

0x3551,	// (0x00092045) main_image_pane_t2_ParamLimits

0x3551,	// (0x00092045) main_image_pane_t2

0x3563,	// (0x00092057) main_image_pane_t3_ParamLimits

0x3563,	// (0x00092057) main_image_pane_t3

0x358b,	// (0x0009207f) main_image_pane_t4_ParamLimits

0x358b,	// (0x0009207f) main_image_pane_t4

0x0003,

0xf50d,	// (0x0009e001) main_image_pane_t_ParamLimits

0xf50d,	// (0x0009e001) main_image_pane_t

0x35ab,	// (0x0009209f) popup_image_details_window_cp01

0x35b5,	// (0x000920a9) popup_toobar_trans_pane_cp01_ParamLimits

0x35b5,	// (0x000920a9) popup_toobar_trans_pane_cp01

0x496b,	// (0x0009345f) popup_image_details_window_ParamLimits

0x496b,	// (0x0009345f) popup_image_details_window

0xa605,	// (0x000990f9) popup_image_focus_window

0x4d81,	// (0x00093875) camera2_autofocus_pane_ParamLimits

0x4d81,	// (0x00093875) camera2_autofocus_pane

0xedc5,	// (0x0009d8b9) bg_popup_sub_pane_cp06

0xac1a,	// (0x0009970e) popup_image_focus_window_g1

0xac22,	// (0x00099716) popup_image_focus_window_g2

0xac2a,	// (0x0009971e) popup_image_focus_window_g3

0xac32,	// (0x00099726) popup_image_focus_window_g4

0x0003,

0xf715,	// (0x0009e209) popup_image_focus_window_g

0xac3a,	// (0x0009972e) popup_image_focus_window_t1

0xac48,	// (0x0009973c) popup_image_focus_window_t2

0xac58,	// (0x0009974c) popup_image_focus_window_t3

0x0002,

0xf71e,	// (0x0009e212) popup_image_focus_window_t

0xac66,	// (0x0009975a) camera2_autofocus_pane_g1

0xee3d,	// (0x0009d931) bg_tb_trans_pane_cp01

0xac74,	// (0x00099768) popup_image_details_window_g1

0xac87,	// (0x0009977b) popup_image_details_window_g2

0x0002,

0xf730,	// (0x0009e224) popup_image_details_window_g

0xacb0,	// (0x000997a4) popup_image_details_window_t1

0xacc2,	// (0x000997b6) popup_image_details_window_t2

0xacdb,	// (0x000997cf) popup_image_details_window_t3

0xacef,	// (0x000997e3) popup_image_details_window_t4

0xad0a,	// (0x000997fe) popup_image_details_window_t5

0x0004,

0xf737,	// (0x0009e22b) popup_image_details_window_t

0xe1c6,	// (0x0009ccba) bg_calc_paper_pane_ParamLimits

0xa007,	// (0x00098afb) grid_highlight_pane_cp013

0xa011,	// (0x00098b05) list_calc_pane_ParamLimits

0xa023,	// (0x00098b17) scroll_pane_cp024

0xe1da,	// (0x0009ccce) bg_calc_display_pane_ParamLimits

0x1103,	// (0x0008fbf7) calc_display_pane_t1_ParamLimits

0x1115,	// (0x0008fc09) calc_display_pane_t2_ParamLimits

0xa02b,	// (0x00098b1f) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0009dc62) calc_display_pane_t_ParamLimits

0x11d8,	// (0x0008fccc) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0009dc7f) cell_calc_pane_g

0x11e1,	// (0x0008fcd5) cell_calc_pane_t1

0xe239,	// (0x0009cd2d) grid_highlight_pane_cp02_ParamLimits

0xe24f,	// (0x0009cd43) toolbar_button_pane_cp01_ParamLimits

0xe24f,	// (0x0009cd43) toolbar_button_pane_cp01

0xefbe,	// (0x0009dab2) temp_image_control_pane_ParamLimits

0xefbe,	// (0x0009dab2) temp_image_control_pane

0xee3d,	// (0x0009d931) main_mp3_pane

0xad24,	// (0x00099818) temp_image_control_pane_g1_ParamLimits

0xad24,	// (0x00099818) temp_image_control_pane_g1

0xad32,	// (0x00099826) temp_image_control_pane_g2_ParamLimits

0xad32,	// (0x00099826) temp_image_control_pane_g2

0xad44,	// (0x00099838) temp_image_control_pane_g3_ParamLimits

0xad44,	// (0x00099838) temp_image_control_pane_g3

0x55d8,	// (0x000940cc) temp_image_control_pane_g4_ParamLimits

0x55d8,	// (0x000940cc) temp_image_control_pane_g4

0x0003,

0xf742,	// (0x0009e236) temp_image_control_pane_g_ParamLimits

0xf742,	// (0x0009e236) temp_image_control_pane_g

0xad24,	// (0x00099818) main_mp3_pane_g1

0x55eb,	// (0x000940df) main_mp3_pane_g2

0x0007,

0xf74b,	// (0x0009e23f) main_mp3_pane_g

0xad87,	// (0x0009987b) main_mp3_pane_t1

0xe39b,	// (0x0009ce8f) main_camera_pane_g8_ParamLimits

0xe39b,	// (0x0009ce8f) main_camera_pane_g8

0x18a7,	// (0x0009039b) main_video_pane_g7_ParamLimits

0x18a7,	// (0x0009039b) main_video_pane_g7

0xa712,	// (0x00099206) main_camera2_pane_t7_ParamLimits

0xa712,	// (0x00099206) main_camera2_pane_t7

0xe4e3,	// (0x0009cfd7) scroll_pane_cp025_ParamLimits

0xe4e3,	// (0x0009cfd7) scroll_pane_cp025

0xe4f7,	// (0x0009cfeb) scroll_pane_cp026_ParamLimits

0xe4f7,	// (0x0009cfeb) scroll_pane_cp026

0xe506,	// (0x0009cffa) wml_content_pane_ParamLimits

0xedc5,	// (0x0009d8b9) main_touch_calib_pane

0x56b7,	// (0x000941ab) main_touch_calib_pane_g1

0x56c3,	// (0x000941b7) main_touch_calib_pane_g2

0x56cf,	// (0x000941c3) main_touch_calib_pane_g3

0x56db,	// (0x000941cf) main_touch_calib_pane_g4

0x0003,

0xf769,	// (0x0009e25d) main_touch_calib_pane_g

0x56e7,	// (0x000941db) main_touch_calib_pane_t1

0x5701,	// (0x000941f5) main_touch_calib_pane_t2

0x0004,

0xf772,	// (0x0009e266) main_touch_calib_pane_t

0xeba5,	// (0x0009d699) mup_progress_pane_cp02

0xebc4,	// (0x0009d6b8) navi_pane_g1

0xec26,	// (0x0009d71a) navi_pane_mp_t3

0xee3d,	// (0x0009d931) main_mp3_pane_ParamLimits

0x4af8,	// (0x000935ec) navi_pane_ParamLimits

0xad24,	// (0x00099818) main_mp3_pane_g1_ParamLimits

0x55eb,	// (0x000940df) main_mp3_pane_g2_ParamLimits

0x55f9,	// (0x000940ed) main_mp3_pane_g3_ParamLimits

0x55f9,	// (0x000940ed) main_mp3_pane_g3

0x5607,	// (0x000940fb) main_mp3_pane_g4_ParamLimits

0x5607,	// (0x000940fb) main_mp3_pane_g4

0xad54,	// (0x00099848) main_mp3_pane_g5_ParamLimits

0xad54,	// (0x00099848) main_mp3_pane_g5

0xad62,	// (0x00099856) main_mp3_pane_g6_ParamLimits

0xad62,	// (0x00099856) main_mp3_pane_g6

0xad6f,	// (0x00099863) main_mp3_pane_g7_ParamLimits

0xad6f,	// (0x00099863) main_mp3_pane_g7

0xad7b,	// (0x0009986f) main_mp3_pane_g8_ParamLimits

0xad7b,	// (0x0009986f) main_mp3_pane_g8

0xf74b,	// (0x0009e23f) main_mp3_pane_g_ParamLimits

0x5615,	// (0x00094109) main_mp3_pane_t2

0x5623,	// (0x00094117) main_mp3_pane_t3

0xad95,	// (0x00099889) main_mp3_pane_t4

0xada3,	// (0x00099897) main_mp3_pane_t5

0x0005,

0xf75c,	// (0x0009e250) main_mp3_pane_t

0xadb1,	// (0x000998a5) mup_progress_pane_cp01

0xedf3,	// (0x0009d8e7) aid_zoom_text_secondary2

0xab70,	// (0x00099664) list_cale_ev2_pane

0xab78,	// (0x0009966c) scroll_pane_cp023_ParamLimits

0x5757,	// (0x0009424b) field_cale_ev2_pane_ParamLimits

0x5757,	// (0x0009424b) field_cale_ev2_pane

0x577d,	// (0x00094271) field_cale_ev2_pane_g1_ParamLimits

0x577d,	// (0x00094271) field_cale_ev2_pane_g1

0x5789,	// (0x0009427d) field_cale_ev2_pane_g2_ParamLimits

0x5789,	// (0x0009427d) field_cale_ev2_pane_g2

0x57a1,	// (0x00094295) field_cale_ev2_pane_g3_ParamLimits

0x57a1,	// (0x00094295) field_cale_ev2_pane_g3

0x0003,

0xf77d,	// (0x0009e271) field_cale_ev2_pane_g_ParamLimits

0xf77d,	// (0x0009e271) field_cale_ev2_pane_g

0xadc5,	// (0x000998b9) field_cale_ev2_pane_t1_ParamLimits

0xadc5,	// (0x000998b9) field_cale_ev2_pane_t1

0xaddc,	// (0x000998d0) field_cale_ev2_pane_t2_ParamLimits

0xaddc,	// (0x000998d0) field_cale_ev2_pane_t2

0x0001,

0xf786,	// (0x0009e27a) field_cale_ev2_pane_t_ParamLimits

0xf786,	// (0x0009e27a) field_cale_ev2_pane_t

0x33df,	// (0x00091ed3) main_postcard_pane_g5_ParamLimits

0x33df,	// (0x00091ed3) main_postcard_pane_g5

0x33f5,	// (0x00091ee9) main_postcard_pane_g6_ParamLimits

0x33f5,	// (0x00091ee9) main_postcard_pane_g6

0x1657,	// (0x0009014b) camera2_autofocus_pane_cp_ParamLimits

0x1657,	// (0x0009014b) camera2_autofocus_pane_cp

0xee3d,	// (0x0009d931) main_mup3_pane

0x57d9,	// (0x000942cd) main_mup3_pane_g1_ParamLimits

0x57d9,	// (0x000942cd) main_mup3_pane_g1

0x57fb,	// (0x000942ef) main_mup3_pane_g2_ParamLimits

0x57fb,	// (0x000942ef) main_mup3_pane_g2

0x5880,	// (0x00094374) main_mup3_pane_g3_ParamLimits

0x5880,	// (0x00094374) main_mup3_pane_g3

0x58c6,	// (0x000943ba) main_mup3_pane_g4_ParamLimits

0x58c6,	// (0x000943ba) main_mup3_pane_g4

0x590c,	// (0x00094400) main_mup3_pane_g5_ParamLimits

0x590c,	// (0x00094400) main_mup3_pane_g5

0x5954,	// (0x00094448) main_mup3_pane_g6_ParamLimits

0x5954,	// (0x00094448) main_mup3_pane_g6

0xadf1,	// (0x000998e5) main_mup3_pane_g7_ParamLimits

0xadf1,	// (0x000998e5) main_mup3_pane_g7

0x0007,

0xf796,	// (0x0009e28a) main_mup3_pane_g_ParamLimits

0xf796,	// (0x0009e28a) main_mup3_pane_g

0x59d4,	// (0x000944c8) main_mup3_pane_t1_ParamLimits

0x59d4,	// (0x000944c8) main_mup3_pane_t1

0x5a48,	// (0x0009453c) main_mup3_pane_t2_ParamLimits

0x5a48,	// (0x0009453c) main_mup3_pane_t2

0x5b1c,	// (0x00094610) main_mup3_pane_t4_ParamLimits

0x5b1c,	// (0x00094610) main_mup3_pane_t4

0x5b7a,	// (0x0009466e) main_mup3_pane_t5_ParamLimits

0x5b7a,	// (0x0009466e) main_mup3_pane_t5

0x5c36,	// (0x0009472a) main_mup3_pane_t6_ParamLimits

0x5c36,	// (0x0009472a) main_mup3_pane_t6

0x0005,

0xf7a7,	// (0x0009e29b) main_mup3_pane_t_ParamLimits

0xf7a7,	// (0x0009e29b) main_mup3_pane_t

0x5cee,	// (0x000947e2) mup3_progress_pane_ParamLimits

0x5cee,	// (0x000947e2) mup3_progress_pane

0x5d7a,	// (0x0009486e) popup_mup3_control_window_ParamLimits

0x5d7a,	// (0x0009486e) popup_mup3_control_window

0xadff,	// (0x000998f3) popup_mup3_text_window

0x5dac,	// (0x000948a0) mup3_progress_pane_t1

0x5dcb,	// (0x000948bf) mup3_progress_pane_t2

0xae07,	// (0x000998fb) mup3_progress_pane_t3

0x0002,

0xf7b4,	// (0x0009e2a8) mup3_progress_pane_t

0xae24,	// (0x00099918) mup_progress_pane_cp03

0xedc5,	// (0x0009d8b9) bg_tb_trans_pane_cp04

0x5dea,	// (0x000948de) mup3_volume_pane

0x5df2,	// (0x000948e6) popup_mup3_control_window_g1

0x5dfb,	// (0x000948ef) mup3_volume_pane_g1

0x5e04,	// (0x000948f8) mup3_volume_pane_g2

0x5e0d,	// (0x00094901) mup3_volume_pane_g3

0x0002,

0xf7bb,	// (0x0009e2af) mup3_volume_pane_g

0xedc5,	// (0x0009d8b9) bg_tb_trans_pane_cp03

0xae34,	// (0x00099928) popup_mup3_text_window_g1

0xae3c,	// (0x00099930) popup_mup3_text_window_t1

0xe222,	// (0x0009cd16) list_calc_item_pane_g1_ParamLimits

0xa7fa,	// (0x000992ee) mup_volume_pane_cp_g1

0x571b,	// (0x0009420f) main_touch_calib_pane_t3

0x572f,	// (0x00094223) main_touch_calib_pane_t4

0x5743,	// (0x00094237) main_touch_calib_pane_t5

0xedcf,	// (0x0009d8c3) aid_cell_size_toolbar2

0xedd7,	// (0x0009d8cb) aid_popup3_width_pane

0xede3,	// (0x0009d8d7) aid_zoom_text_msg_primary

0xa105,	// (0x00098bf9) vorec_t7

0xe1e6,	// (0x0009ccda) bg_calc_paper_pane_g1_ParamLimits

0xe1f2,	// (0x0009cce6) bg_calc_paper_pane_g2_ParamLimits

0xe1fe,	// (0x0009ccf2) bg_calc_paper_pane_g3_ParamLimits

0xe20a,	// (0x0009ccfe) bg_calc_paper_pane_g4_ParamLimits

0xe216,	// (0x0009cd0a) bg_calc_paper_pane_g5_ParamLimits

0x115e,	// (0x0008fc52) bg_calc_paper_pane_g6_ParamLimits

0x116f,	// (0x0008fc63) bg_calc_paper_pane_g7_ParamLimits

0x1180,	// (0x0008fc74) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0009dc69) bg_calc_paper_pane_g_ParamLimits

0x1193,	// (0x0008fc87) calc_bg_paper_pane_g9_ParamLimits

0x17b1,	// (0x000902a5) image_qvga_pane_ParamLimits

0x17b1,	// (0x000902a5) image_qvga_pane

0xe0c3,	// (0x0009cbb7) bg_popup_sub_pane_cp04_ParamLimits

0xeef5,	// (0x0009d9e9) popup_mup_playback_window_g1_ParamLimits

0xef01,	// (0x0009d9f5) popup_mup_playback_window_t1_ParamLimits

0xef16,	// (0x0009da0a) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0009dff5) popup_mup_playback_window_t_ParamLimits

0x5278,	// (0x00093d6c) main_mup2_pane_g3_ParamLimits

0x5278,	// (0x00093d6c) main_mup2_pane_g3

0x1bc6,	// (0x000906ba) popup_toolbar_window_cp04

0x3b39,	// (0x0009262d) popup_call2_audio_second_window_g3_ParamLimits

0x3b39,	// (0x0009262d) popup_call2_audio_second_window_g3

0x3f43,	// (0x00092a37) popup_call2_audio_first_window_g4_ParamLimits

0x3f43,	// (0x00092a37) popup_call2_audio_first_window_g4

0xa27c,	// (0x00098d70) popup_call2_audio_in_window_g4_ParamLimits

0xa27c,	// (0x00098d70) popup_call2_audio_in_window_g4

0x3511,	// (0x00092005) aid_area_sk_bg_cut_ParamLimits

0x3511,	// (0x00092005) aid_area_sk_bg_cut

0xef2b,	// (0x0009da1f) aid_area_sk_bg_cut_2_ParamLimits

0xef2b,	// (0x0009da1f) aid_area_sk_bg_cut_2

0x557e,	// (0x00094072) aid_placing_details_win

0x5586,	// (0x0009407a) aid_placing_details_win_2

0xac66,	// (0x0009975a) camera2_autofocus_pane_g1_ParamLimits

0x0d88,	// (0x0008f87c) popup_fixed_preview_cale_window_ParamLimits

0x0d88,	// (0x0008f87c) popup_fixed_preview_cale_window

0xec75,	// (0x0009d769) navi_slider_pane_g3

0xec7e,	// (0x0009d772) navi_slider_pane_g4

0xec87,	// (0x0009d77b) navi_slider_pane_g5

0xec75,	// (0x0009d769) navi_slider_pane_g6

0xa1c1,	// (0x00098cb5) navi_slider_pane_g7

0xed9a,	// (0x0009d88e) mup_scale_pane_g3

0xeda3,	// (0x0009d897) mup_scale_pane_g4

0xedac,	// (0x0009d8a0) mup_scale_pane_g5

0x31c4,	// (0x00091cb8) mup_scale_pane_g6

0x31cd,	// (0x00091cc1) mup_scale_pane_g7

0xec75,	// (0x0009d769) cams2_slider_pane_g3

0xa8af,	// (0x000993a3) cams2_slider_pane_g4

0xa8b7,	// (0x000993ab) cams2_slider_pane_g5

0xec75,	// (0x0009d769) cams2_slider_pane_g6

0xa8bf,	// (0x000993b3) cams2_slider_pane_g7

0xaaed,	// (0x000995e1) camera2_autofocus_pane_cp_g1

0xae4a,	// (0x0009993e) bg_popup_preview_window_pane_cp02_ParamLimits

0xae4a,	// (0x0009993e) bg_popup_preview_window_pane_cp02

0xae56,	// (0x0009994a) list_fp_cale_pane_ParamLimits

0xae56,	// (0x0009994a) list_fp_cale_pane

0xae62,	// (0x00099956) popup_fixed_preview_cale_window_t1_ParamLimits

0xae62,	// (0x00099956) popup_fixed_preview_cale_window_t1

0x5e16,	// (0x0009490a) popup_fixed_preview_cale_window_t2_ParamLimits

0x5e16,	// (0x0009490a) popup_fixed_preview_cale_window_t2

0x5e2b,	// (0x0009491f) popup_fixed_preview_cale_window_t3_ParamLimits

0x5e2b,	// (0x0009491f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c2,	// (0x0009e2b6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c2,	// (0x0009e2b6) popup_fixed_preview_cale_window_t

0x5e40,	// (0x00094934) list_single_fp_cale_pane_ParamLimits

0x5e40,	// (0x00094934) list_single_fp_cale_pane

0xae80,	// (0x00099974) list_single_fp_cale_pane_g1_ParamLimits

0xae80,	// (0x00099974) list_single_fp_cale_pane_g1

0xae8c,	// (0x00099980) list_single_fp_cale_pane_g2_ParamLimits

0xae8c,	// (0x00099980) list_single_fp_cale_pane_g2

0x0002,

0xf7c9,	// (0x0009e2bd) list_single_fp_cale_pane_g_ParamLimits

0xf7c9,	// (0x0009e2bd) list_single_fp_cale_pane_g

0xaea5,	// (0x00099999) list_single_fp_cale_pane_t1_ParamLimits

0xaea5,	// (0x00099999) list_single_fp_cale_pane_t1

0xaeb7,	// (0x000999ab) list_single_fp_cale_pane_t2_ParamLimits

0xaeb7,	// (0x000999ab) list_single_fp_cale_pane_t2

0x0001,

0xf7d0,	// (0x0009e2c4) list_single_fp_cale_pane_t_ParamLimits

0xf7d0,	// (0x0009e2c4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xedc5,	// (0x0009d8b9) main_dialer_pane

0x5e58,	// (0x0009494c) aid_cell_size_keypad

0x5e62,	// (0x00094956) dialer_ne_pane

0x5e6a,	// (0x0009495e) grid_dialer_command_1_pane

0x5e72,	// (0x00094966) grid_dialer_command_2_pane

0x5e7a,	// (0x0009496e) grid_dialer_keypad_pane

0x5e8c,	// (0x00094980) bg_popup_call_pane_cp06_ParamLimits

0x5e8c,	// (0x00094980) bg_popup_call_pane_cp06

0x5e98,	// (0x0009498c) dialer_ne_clear_pane_ParamLimits

0x5e98,	// (0x0009498c) dialer_ne_clear_pane

0xaeea,	// (0x000999de) dialer_ne_pane_g1

0xaef2,	// (0x000999e6) dialer_ne_pane_t1_ParamLimits

0xaef2,	// (0x000999e6) dialer_ne_pane_t1

0x5ea4,	// (0x00094998) dialer_ne_pane_t2_ParamLimits

0x5ea4,	// (0x00094998) dialer_ne_pane_t2

0x5ece,	// (0x000949c2) dialer_ne_pane_t3_ParamLimits

0x5ece,	// (0x000949c2) dialer_ne_pane_t3

0x0002,

0xf7d5,	// (0x0009e2c9) dialer_ne_pane_t_ParamLimits

0xf7d5,	// (0x0009e2c9) dialer_ne_pane_t

0x5efe,	// (0x000949f2) dialer_ne_pane_t3_copy1_ParamLimits

0x5efe,	// (0x000949f2) dialer_ne_pane_t3_copy1

0x5f2d,	// (0x00094a21) cell_dialer_keypad_pane_ParamLimits

0x5f2d,	// (0x00094a21) cell_dialer_keypad_pane

0x5f44,	// (0x00094a38) cell_dialer_command_1_pane_ParamLimits

0x5f44,	// (0x00094a38) cell_dialer_command_1_pane

0x5f5a,	// (0x00094a4e) cell_dialer_command_2_pane_ParamLimits

0x5f5a,	// (0x00094a4e) cell_dialer_command_2_pane

0xaf04,	// (0x000999f8) bg_button_pane_cp02_ParamLimits

0xaf04,	// (0x000999f8) bg_button_pane_cp02

0x5f69,	// (0x00094a5d) cell_dialer_keypad_pane_g1_ParamLimits

0x5f69,	// (0x00094a5d) cell_dialer_keypad_pane_g1

0xaf04,	// (0x000999f8) bg_button_pane_cp03_ParamLimits

0xaf04,	// (0x000999f8) bg_button_pane_cp03

0x5f7e,	// (0x00094a72) cell_dialer_command_1_pane_g1_ParamLimits

0x5f7e,	// (0x00094a72) cell_dialer_command_1_pane_g1

0xaf10,	// (0x00099a04) bg_button_pane_cp04

0x5f92,	// (0x00094a86) cell_dialer_command_2_pane_g1

0xec64,	// (0x0009d758) bg_button_pane_cp06

0xaf18,	// (0x00099a0c) dialer_ne_clear_pane_g1

0x2cf2,	// (0x000917e6) navi_pane_g2

0x2d20,	// (0x00091814) navi_pane_g3

0x0002,

0xf404,	// (0x0009def8) navi_pane_g

0x2d49,	// (0x0009183d) navi_pane_mv_g2

0x2d70,	// (0x00091864) navi_pane_mv_g5

0x2d78,	// (0x0009186c) navi_pane_mv_t1

0xe1da,	// (0x0009ccce) main_clock2_pane

0x5fcc,	// (0x00094ac0) main_clock2_list_pane_ParamLimits

0x5fcc,	// (0x00094ac0) main_clock2_list_pane

0x6006,	// (0x00094afa) main_clock2_pane_t1_ParamLimits

0x6006,	// (0x00094afa) main_clock2_pane_t1

0x6044,	// (0x00094b38) main_clock2_pane_t2_ParamLimits

0x6044,	// (0x00094b38) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0009e2d0) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0009e2d0) main_clock2_pane_t

0x60e1,	// (0x00094bd5) popup_clock_analogue_window_cp03_ParamLimits

0x60e1,	// (0x00094bd5) popup_clock_analogue_window_cp03

0x6108,	// (0x00094bfc) popup_clock_digital_window_cp02_ParamLimits

0x6108,	// (0x00094bfc) popup_clock_digital_window_cp02

0x617d,	// (0x00094c71) main_clock2_list_single_pane_ParamLimits

0x617d,	// (0x00094c71) main_clock2_list_single_pane

0xec64,	// (0x0009d758) list_highlight_pane_cp05

0xaf20,	// (0x00099a14) main_clock2_list_single_pane_t1

0x1bc6,	// (0x000906ba) popup_toolbar_window_cp04_ParamLimits

0x55a8,	// (0x0009409c) camera2_autofocus_pane_g2_ParamLimits

0x55a8,	// (0x0009409c) camera2_autofocus_pane_g2

0x55b4,	// (0x000940a8) camera2_autofocus_pane_g3_ParamLimits

0x55b4,	// (0x000940a8) camera2_autofocus_pane_g3

0x55c0,	// (0x000940b4) camera2_autofocus_pane_g4_ParamLimits

0x55c0,	// (0x000940b4) camera2_autofocus_pane_g4

0x55cc,	// (0x000940c0) camera2_autofocus_pane_g5_ParamLimits

0x55cc,	// (0x000940c0) camera2_autofocus_pane_g5

0x0004,

0xf725,	// (0x0009e219) camera2_autofocus_pane_g_ParamLimits

0xf725,	// (0x0009e219) camera2_autofocus_pane_g

0x57b9,	// (0x000942ad) camera2_autofocus_pane_cp_g2

0x57c1,	// (0x000942b5) camera2_autofocus_pane_cp_g3

0x57c9,	// (0x000942bd) camera2_autofocus_pane_cp_g4

0x57d1,	// (0x000942c5) camera2_autofocus_pane_cp_g5

0x0004,

0xf78b,	// (0x0009e27f) camera2_autofocus_pane_cp_g

0x5e84,	// (0x00094978) popup_dialer_spcha_window

0xedc5,	// (0x0009d8b9) bg_popup_sub_pane_cp07

0xaf2e,	// (0x00099a22) list_spcha_pane

0xaf36,	// (0x00099a2a) list_single_spcha_pane_ParamLimits

0xaf36,	// (0x00099a2a) list_single_spcha_pane

0xedc5,	// (0x0009d8b9) list_highlight_pane_cp06

0xaf47,	// (0x00099a3b) list_single_spcha_pane_t1

0x436c,	// (0x00092e60) popup_call2_audio_out_window_g4_ParamLimits

0x436c,	// (0x00092e60) popup_call2_audio_out_window_g4

0xedc5,	// (0x0009d8b9) main_imed2_pane

0xa60d,	// (0x00099101) popup_imed_adjust2_window

0x4983,	// (0x00093477) popup_imed_trans_window_ParamLimits

0x4983,	// (0x00093477) popup_imed_trans_window

0xa929,	// (0x0009941d) popup_blid_sat_info2_window_t1

0xa937,	// (0x0009942b) popup_blid_sat_info2_window_t2

0x000a,

0xf6ba,	// (0x0009e1ae) popup_blid_sat_info2_window_t

0x6225,	// (0x00094d19) aid_size_cell_colour_35

0x6245,	// (0x00094d39) aid_size_cell_colour_112

0x6265,	// (0x00094d59) aid_size_cell_effect

0xa5e5,	// (0x000990d9) bg_tb_trans_pane_cp02

0xe794,	// (0x0009d288) heading_imed_pane

0x6285,	// (0x00094d79) listscroll_imed_pane

0xaf55,	// (0x00099a49) heading_imed_pane_g1

0xaf5d,	// (0x00099a51) heading_imed_pane_t1

0xaf6b,	// (0x00099a5f) grid_imed_colour_35_pane_ParamLimits

0xaf6b,	// (0x00099a5f) grid_imed_colour_35_pane

0x6291,	// (0x00094d85) grid_imed_effect_pane

0xaf86,	// (0x00099a7a) list_imed_aspect_pane

0x62a6,	// (0x00094d9a) scroll_pane_cp027_ParamLimits

0x62a6,	// (0x00094d9a) scroll_pane_cp027

0x62b7,	// (0x00094dab) cell_imed_effect_pane_ParamLimits

0x62b7,	// (0x00094dab) cell_imed_effect_pane

0xaf8e,	// (0x00099a82) cell_imed_colour_pane_ParamLimits

0xaf8e,	// (0x00099a82) cell_imed_colour_pane

0xafd0,	// (0x00099ac4) cell_imed_colour_pane_g1_ParamLimits

0xafd0,	// (0x00099ac4) cell_imed_colour_pane_g1

0xafe1,	// (0x00099ad5) hgihlgiht_grid_pane_cp016_ParamLimits

0xafe1,	// (0x00099ad5) hgihlgiht_grid_pane_cp016

0x62de,	// (0x00094dd2) cell_imed_effect_pane_g1

0x62e6,	// (0x00094dda) grid_highlight_pane_cp017

0xaff2,	// (0x00099ae6) list_imed_single_pane_ParamLimits

0xaff2,	// (0x00099ae6) list_imed_single_pane

0xedc5,	// (0x0009d8b9) list_highlight_pane_cp07

0xb009,	// (0x00099afd) list_imed_aspect_pane_comp1_t1

0xa5e5,	// (0x000990d9) bg_tb_trans_pane_cp05

0xb02b,	// (0x00099b1f) popup_imed_adjust2_window_g1

0xb052,	// (0x00099b46) popup_imed_adjust2_window_t1

0xb06a,	// (0x00099b5e) slider_imed_adjust_pane

0xb07e,	// (0x00099b72) slider_imed_adjust_pane_g1

0xb08e,	// (0x00099b82) slider_imed_adjust_pane_g2

0xb09e,	// (0x00099b92) slider_imed_adjust_pane_g3

0xb0af,	// (0x00099ba3) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0009e2ed) slider_imed_adjust_pane_g

0x62ef,	// (0x00094de3) aid_size_cell_clipart2

0x62fb,	// (0x00094def) grid_imed_clipart_pane

0xb0c0,	// (0x00099bb4) scroll_pane_cp031

0x6305,	// (0x00094df9) cell_imed_clipart_pane_ParamLimits

0x6305,	// (0x00094df9) cell_imed_clipart_pane

0x632c,	// (0x00094e20) cell_imed_clipart_pane_g1

0xedc5,	// (0x0009d8b9) grid_highlight_pane_cp014

0x5fe1,	// (0x00094ad5) main_clock2_pane_g1_ParamLimits

0x5fe1,	// (0x00094ad5) main_clock2_pane_g1

0x6128,	// (0x00094c1c) aid_call2_pane_cp10

0x613a,	// (0x00094c2e) aid_call_pane_cp10

0xeb99,	// (0x0009d68d) popup_clock_analogue_window_cp10_g1

0xeb99,	// (0x0009d68d) popup_clock_analogue_window_cp10_g2

0x614c,	// (0x00094c40) popup_clock_analogue_window_cp10_g3

0x614c,	// (0x00094c40) popup_clock_analogue_window_cp10_g4

0xeb99,	// (0x0009d68d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0009e2db) popup_clock_analogue_window_cp10_g

0x615e,	// (0x00094c52) popup_clock_analogue_window_cp10_t1

0x618f,	// (0x00094c83) clock_digital_number_pane_cp10_ParamLimits

0x618f,	// (0x00094c83) clock_digital_number_pane_cp10

0x61a7,	// (0x00094c9b) clock_digital_number_pane_cp11_ParamLimits

0x61a7,	// (0x00094c9b) clock_digital_number_pane_cp11

0x61bf,	// (0x00094cb3) clock_digital_number_pane_cp12_ParamLimits

0x61bf,	// (0x00094cb3) clock_digital_number_pane_cp12

0x61d7,	// (0x00094ccb) clock_digital_number_pane_cp13_ParamLimits

0x61d7,	// (0x00094ccb) clock_digital_number_pane_cp13

0x61ef,	// (0x00094ce3) clock_digital_separator_pane_cp10_ParamLimits

0x61ef,	// (0x00094ce3) clock_digital_separator_pane_cp10

0x6207,	// (0x00094cfb) popup_clock_digital_window_cp02_t1_ParamLimits

0x6207,	// (0x00094cfb) popup_clock_digital_window_cp02_t1

0xe0bb,	// (0x0009cbaf) clock_digital_number_pane_cp10_g1

0xe0bb,	// (0x0009cbaf) clock_digital_number_pane_cp10_g2

0x0001,

0x0389,	// (0x0008ee7d) clock_digital_number_pane_cp10_g

0xe0bb,	// (0x0009cbaf) clock_digital_separator_pane_cp10_g1

0xe0bb,	// (0x0009cbaf) clock_digital_separator_pane_g2_cp10

0xec34,	// (0x0009d728) navi_pane_vded_g4

0xec3d,	// (0x0009d731) navi_pane_vded_g5

0xec46,	// (0x0009d73a) navi_pane_vded_t1

0xedc5,	// (0x0009d8b9) main_vded_pane

0x6335,	// (0x00094e29) main_vded_pane_g1

0x6341,	// (0x00094e35) main_vded_pane_g2

0x634b,	// (0x00094e3f) main_vded_pane_g3

0x0002,

0xf802,	// (0x0009e2f6) main_vded_pane_g

0x6355,	// (0x00094e49) main_vded_pane_t1

0x6363,	// (0x00094e57) main_vded_pane_t2

0x0001,

0xf809,	// (0x0009e2fd) main_vded_pane_t

0x6371,	// (0x00094e65) vded_slider_pane

0x637b,	// (0x00094e6f) vded_video_pane

0xb0c8,	// (0x00099bbc) vded_video_pane_g1

0x6385,	// (0x00094e79) vded_video_pane_g2

0xaaed,	// (0x000995e1) vded_video_pane_g3

0x0002,

0xf80e,	// (0x0009e302) vded_video_pane_g

0xb0d2,	// (0x00099bc6) vded_slider_pane_g1

0xa7fa,	// (0x000992ee) vded_slider_pane_g2

0xb0db,	// (0x00099bcf) vded_slider_pane_g3

0xb0e4,	// (0x00099bd8) vded_slider_pane_g4

0xb0ed,	// (0x00099be1) vded_slider_pane_g5

0x0004,

0xf815,	// (0x0009e309) vded_slider_pane_g

0x5d62,	// (0x00094856) mup3_rocker_pane_ParamLimits

0x5d62,	// (0x00094856) mup3_rocker_pane

0x638e,	// (0x00094e82) mup3_control_keys_pane_g1

0x6396,	// (0x00094e8a) mup3_control_keys_pane_g2

0x639e,	// (0x00094e92) mup3_control_keys_pane_g3

0x63a6,	// (0x00094e9a) mup3_control_keys_pane_g4

0x0003,

0xf820,	// (0x0009e314) mup3_control_keys_pane_g

0x0dbf,	// (0x0008f8b3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dbf,	// (0x0008f8b3) popup_toolbar2_fixed_window_cp01

0x5d96,	// (0x0009488a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5d96,	// (0x0009488a) popup_toolbar2_fixed_window_cp02

0x3cab,	// (0x0009279f) popup_call2_audio_second_window_t4_ParamLimits

0x3cab,	// (0x0009279f) popup_call2_audio_second_window_t4

0x41d9,	// (0x00092ccd) popup_call2_audio_first_window_t6_ParamLimits

0x41d9,	// (0x00092ccd) popup_call2_audio_first_window_t6

0x446f,	// (0x00092f63) popup_call2_audio_out_window_t6_ParamLimits

0x446f,	// (0x00092f63) popup_call2_audio_out_window_t6

0xedc5,	// (0x0009d8b9) main_vitu_pane

0x63b6,	// (0x00094eaa) aid_size_cell_itu_ParamLimits

0x63b6,	// (0x00094eaa) aid_size_cell_itu

0xee3d,	// (0x0009d931) bg_popup_window_pane_cp08_ParamLimits

0xee3d,	// (0x0009d931) bg_popup_window_pane_cp08

0x63cc,	// (0x00094ec0) field_vitu_entry_pane_ParamLimits

0x63cc,	// (0x00094ec0) field_vitu_entry_pane

0x63e3,	// (0x00094ed7) grid_vitu_function_pane_ParamLimits

0x63e3,	// (0x00094ed7) grid_vitu_function_pane

0x63fe,	// (0x00094ef2) grid_vitu_itu_pane_ParamLimits

0x63fe,	// (0x00094ef2) grid_vitu_itu_pane

0x641c,	// (0x00094f10) cell_vitu_itu_pane_ParamLimits

0x641c,	// (0x00094f10) cell_vitu_itu_pane

0x6440,	// (0x00094f34) cell_vitu_function_pane_ParamLimits

0x6440,	// (0x00094f34) cell_vitu_function_pane

0xee3d,	// (0x0009d931) bg_popup_sub_pane_cp08_ParamLimits

0xee3d,	// (0x0009d931) bg_popup_sub_pane_cp08

0x645b,	// (0x00094f4f) field_vitu_entry_pane_t1_ParamLimits

0x645b,	// (0x00094f4f) field_vitu_entry_pane_t1

0xb10e,	// (0x00099c02) field_vitu_entry_pane_t2_ParamLimits

0xb10e,	// (0x00099c02) field_vitu_entry_pane_t2

0x0001,

0xf82e,	// (0x0009e322) field_vitu_entry_pane_t_ParamLimits

0xf82e,	// (0x0009e322) field_vitu_entry_pane_t

0xb12b,	// (0x00099c1f) bg_button_pane_cp05_ParamLimits

0xb12b,	// (0x00099c1f) bg_button_pane_cp05

0x647b,	// (0x00094f6f) cell_vitu_itu_pane_g1

0x6493,	// (0x00094f87) cell_vitu_itu_pane_t1_ParamLimits

0x6493,	// (0x00094f87) cell_vitu_itu_pane_t1

0x64a5,	// (0x00094f99) cell_vitu_itu_pane_t2_ParamLimits

0x64a5,	// (0x00094f99) cell_vitu_itu_pane_t2

0x0002,

0xf833,	// (0x0009e327) cell_vitu_itu_pane_t_ParamLimits

0xf833,	// (0x0009e327) cell_vitu_itu_pane_t

0xb139,	// (0x00099c2d) bg_button_pane_cp07

0x64da,	// (0x00094fce) cell_vitu_function_pane_g1

0x9fff,	// (0x00098af3) main_calc_pane_g1

0x0bff,	// (0x0008f6f3) aid_visual_content_pane

0xedc5,	// (0x0009d8b9) main_vradio_pane

0x64e3,	// (0x00094fd7) main_vradio_pane_g1_ParamLimits

0x64e3,	// (0x00094fd7) main_vradio_pane_g1

0xb143,	// (0x00099c37) main_vradio_pane_g2_ParamLimits

0xb143,	// (0x00099c37) main_vradio_pane_g2

0x0001,

0xf83a,	// (0x0009e32e) main_vradio_pane_g_ParamLimits

0xf83a,	// (0x0009e32e) main_vradio_pane_g

0x64fc,	// (0x00094ff0) main_vradio_pane_t1_ParamLimits

0x64fc,	// (0x00094ff0) main_vradio_pane_t1

0x6511,	// (0x00095005) main_vradio_pane_t2_ParamLimits

0x6511,	// (0x00095005) main_vradio_pane_t2

0xb150,	// (0x00099c44) main_vradio_pane_t3_ParamLimits

0xb150,	// (0x00099c44) main_vradio_pane_t3

0x0002,

0xf83f,	// (0x0009e333) main_vradio_pane_t_ParamLimits

0xf83f,	// (0x0009e333) main_vradio_pane_t

0x6526,	// (0x0009501a) vradio_rocker_control_pane_ParamLimits

0x6526,	// (0x0009501a) vradio_rocker_control_pane

0x6538,	// (0x0009502c) vradio_station_info_pane_ParamLimits

0x6538,	// (0x0009502c) vradio_station_info_pane

0xb164,	// (0x00099c58) vradio_frequency_info_pane_ParamLimits

0xb164,	// (0x00099c58) vradio_frequency_info_pane

0xaaed,	// (0x000995e1) vradio_station_info_pane_g1

0xb173,	// (0x00099c67) vradio_station_info_pane_t1_ParamLimits

0xb173,	// (0x00099c67) vradio_station_info_pane_t1

0xb195,	// (0x00099c89) vradio_station_info_pane_t2_ParamLimits

0xb195,	// (0x00099c89) vradio_station_info_pane_t2

0x0001,

0xf846,	// (0x0009e33a) vradio_station_info_pane_t_ParamLimits

0xf846,	// (0x0009e33a) vradio_station_info_pane_t

0xb1a7,	// (0x00099c9b) vradio_tuning_pane

0xb1af,	// (0x00099ca3) vradio_rocker_control_pane_g1

0xb1b7,	// (0x00099cab) vradio_rocker_control_pane_g2

0xb1bf,	// (0x00099cb3) vradio_rocker_control_pane_g3

0xb1c7,	// (0x00099cbb) vradio_rocker_control_pane_g4

0xb1cf,	// (0x00099cc3) vradio_rocker_control_pane_g5

0x0004,

0xf84b,	// (0x0009e33f) vradio_rocker_control_pane_g

0x654a,	// (0x0009503e) vradio_frequency_info_pane_g1

0xb1d7,	// (0x00099ccb) vradio_frequency_info_pane_t1_ParamLimits

0xb1d7,	// (0x00099ccb) vradio_frequency_info_pane_t1

0x6554,	// (0x00095048) vradio_tuning_pane_g1

0x655f,	// (0x00095053) vradio_tuning_pane_t1

0xedfb,	// (0x0009d8ef) area_side_right_pane_ParamLimits

0xedfb,	// (0x0009d8ef) area_side_right_pane

0xa5ac,	// (0x000990a0) status_small_pane_g1

0xa5b4,	// (0x000990a8) status_small_pane_g2

0xa5bd,	// (0x000990b1) status_small_pane_g3

0xa5c6,	// (0x000990ba) status_small_pane_g4

0x0003,

0xf610,	// (0x0009e104) status_small_pane_g

0xa5cf,	// (0x000990c3) status_small_pane_t1

0xedc5,	// (0x0009d8b9) main_video3_pane

0xb1eb,	// (0x00099cdf) cams_zoom_vslider_pane

0xb1f3,	// (0x00099ce7) image3_wide_pane_ParamLimits

0xb1f3,	// (0x00099ce7) image3_wide_pane

0xb20d,	// (0x00099d01) image3_wide_small_pane

0xb219,	// (0x00099d0d) main_video3_pane_g1_ParamLimits

0xb219,	// (0x00099d0d) main_video3_pane_g1

0xb235,	// (0x00099d29) main_video3_pane_g2_ParamLimits

0xb235,	// (0x00099d29) main_video3_pane_g2

0x0001,

0xf856,	// (0x0009e34a) main_video3_pane_g_ParamLimits

0xf856,	// (0x0009e34a) main_video3_pane_g

0xb251,	// (0x00099d45) main_video3_pane_t1_ParamLimits

0xb251,	// (0x00099d45) main_video3_pane_t1

0xb27c,	// (0x00099d70) main_video3_pane_t2_ParamLimits

0xb27c,	// (0x00099d70) main_video3_pane_t2

0xb2a7,	// (0x00099d9b) main_video3_pane_t3_ParamLimits

0xb2a7,	// (0x00099d9b) main_video3_pane_t3

0x0002,

0xf85b,	// (0x0009e34f) main_video3_pane_t_ParamLimits

0xf85b,	// (0x0009e34f) main_video3_pane_t

0xb2d4,	// (0x00099dc8) cams_zoom_vslider_pane_g1

0xb2dd,	// (0x00099dd1) cams_zoom_vslider_pane_g2

0x0001,

0xf862,	// (0x0009e356) cams_zoom_vslider_pane_g

0xb2e5,	// (0x00099dd9) small_slider_vertical_pane

0xaaed,	// (0x000995e1) small_slider_vertical_pane_g1

0xaaed,	// (0x000995e1) small_slider_vertical_pane_g2

0xb2ed,	// (0x00099de1) small_slider_vertical_pane_g3

0x0002,

0xf867,	// (0x0009e35b) small_slider_vertical_pane_g

0xedc5,	// (0x0009d8b9) main_hwr_training_pane

0xb2f6,	// (0x00099dea) hwr_training_instruct_pane_ParamLimits

0xb2f6,	// (0x00099dea) hwr_training_instruct_pane

0x656e,	// (0x00095062) hwr_training_navi_pane_ParamLimits

0x656e,	// (0x00095062) hwr_training_navi_pane

0x658d,	// (0x00095081) hwr_training_write_pane_ParamLimits

0x658d,	// (0x00095081) hwr_training_write_pane

0xedc5,	// (0x0009d8b9) bg_frame_shadow_pane

0xb32d,	// (0x00099e21) hwr_training_write_pane_g1

0xb335,	// (0x00099e29) hwr_training_write_pane_g2

0xb33d,	// (0x00099e31) hwr_training_write_pane_g3

0xb345,	// (0x00099e39) hwr_training_write_pane_g4

0xb34d,	// (0x00099e41) hwr_training_write_pane_g5

0xb355,	// (0x00099e49) hwr_training_write_pane_g6

0xb35d,	// (0x00099e51) hwr_training_write_pane_g7

0x0006,

0xf86e,	// (0x0009e362) hwr_training_write_pane_g

0xb365,	// (0x00099e59) hwr_training_navi_pane_g1_ParamLimits

0xb365,	// (0x00099e59) hwr_training_navi_pane_g1

0xb377,	// (0x00099e6b) hwr_training_navi_pane_g2_ParamLimits

0xb377,	// (0x00099e6b) hwr_training_navi_pane_g2

0xb389,	// (0x00099e7d) hwr_training_navi_pane_g3_ParamLimits

0xb389,	// (0x00099e7d) hwr_training_navi_pane_g3

0xb399,	// (0x00099e8d) hwr_training_navi_pane_g4_ParamLimits

0xb399,	// (0x00099e8d) hwr_training_navi_pane_g4

0x0004,

0xf87d,	// (0x0009e371) hwr_training_navi_pane_g_ParamLimits

0xf87d,	// (0x0009e371) hwr_training_navi_pane_g

0xb3a6,	// (0x00099e9a) hwr_training_navi_pane_t1

0x65d7,	// (0x000950cb) list_single_hwr_training_instruct_pane_ParamLimits

0x65d7,	// (0x000950cb) list_single_hwr_training_instruct_pane

0xb3b4,	// (0x00099ea8) list_single_hwr_training_instruct_pane_t1

0xaa2d,	// (0x00099521) bg_frame_shadow_pane_g1

0xb3c3,	// (0x00099eb7) bg_frame_shadow_pane_g2

0xb3cb,	// (0x00099ebf) bg_frame_shadow_pane_g3

0xb3d3,	// (0x00099ec7) bg_frame_shadow_pane_g4

0xb3db,	// (0x00099ecf) bg_frame_shadow_pane_g5

0xb3e3,	// (0x00099ed7) bg_frame_shadow_pane_g6

0xb3eb,	// (0x00099edf) bg_frame_shadow_pane_g7

0xe2a5,	// (0x0009cd99) bg_frame_shadow_pane_g8

0x0007,

0xf888,	// (0x0009e37c) bg_frame_shadow_pane_g

0xedc5,	// (0x0009d8b9) main_video_tele_dialer_pane

0x65f4,	// (0x000950e8) aid_size_cell_video_keypad_ParamLimits

0x65f4,	// (0x000950e8) aid_size_cell_video_keypad

0x660e,	// (0x00095102) grid_video_dialer_keypad_pane_ParamLimits

0x660e,	// (0x00095102) grid_video_dialer_keypad_pane

0x665a,	// (0x0009514e) video_down_pane_cp_ParamLimits

0x665a,	// (0x0009514e) video_down_pane_cp

0x668a,	// (0x0009517e) cell_video_dialer_keypad_pane_ParamLimits

0x668a,	// (0x0009517e) cell_video_dialer_keypad_pane

0xb3f3,	// (0x00099ee7) bg_button_pane_cp08_ParamLimits

0xb3f3,	// (0x00099ee7) bg_button_pane_cp08

0x66ac,	// (0x000951a0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x66ac,	// (0x000951a0) cell_video_dialer_keypad_pane_g1

0x5d4c,	// (0x00094840) mup3_rocker2_pane_ParamLimits

0x5d4c,	// (0x00094840) mup3_rocker2_pane

0xaaed,	// (0x000995e1) mup3_rocker2_pane_g1

0x486c,	// (0x00093360) main_dialer2_pane

0xedc5,	// (0x0009d8b9) main_mp4_pane

0xb407,	// (0x00099efb) main_mp4_pane_g1_ParamLimits

0xb407,	// (0x00099efb) main_mp4_pane_g1

0xb407,	// (0x00099efb) main_mp4_pane_g2_ParamLimits

0xb407,	// (0x00099efb) main_mp4_pane_g2

0x66e7,	// (0x000951db) main_mp4_pane_g3_ParamLimits

0x66e7,	// (0x000951db) main_mp4_pane_g3

0xb415,	// (0x00099f09) main_mp4_pane_g4_ParamLimits

0xb415,	// (0x00099f09) main_mp4_pane_g4

0xb43d,	// (0x00099f31) main_mp4_pane_g5_ParamLimits

0xb43d,	// (0x00099f31) main_mp4_pane_g5

0x0005,

0xf8a8,	// (0x0009e39c) main_mp4_pane_g_ParamLimits

0xf8a8,	// (0x0009e39c) main_mp4_pane_g

0xb48d,	// (0x00099f81) main_mp4_pane_t1_ParamLimits

0xb48d,	// (0x00099f81) main_mp4_pane_t1

0xb4e9,	// (0x00099fdd) main_mp4_pane_t2_ParamLimits

0xb4e9,	// (0x00099fdd) main_mp4_pane_t2

0xb53b,	// (0x0009a02f) main_mp4_pane_t3_ParamLimits

0xb53b,	// (0x0009a02f) main_mp4_pane_t3

0xb55b,	// (0x0009a04f) main_mp4_pane_t4_ParamLimits

0xb55b,	// (0x0009a04f) main_mp4_pane_t4

0x0003,

0xf8b5,	// (0x0009e3a9) main_mp4_pane_t_ParamLimits

0xf8b5,	// (0x0009e3a9) main_mp4_pane_t

0xd934,	// (0x0009c428) mp4_progress_pane_ParamLimits

0xd934,	// (0x0009c428) mp4_progress_pane

0xd97e,	// (0x0009c472) mp4_rocker_pane_ParamLimits

0xd97e,	// (0x0009c472) mp4_rocker_pane

0xb5a7,	// (0x0009a09b) mp4_progress_pane_t1

0xb5c0,	// (0x0009a0b4) mp4_progress_pane_t2

0x0001,

0xf8be,	// (0x0009e3b2) mp4_progress_pane_t

0xb5d9,	// (0x0009a0cd) mup_progress_pane_cp04

0xb5e5,	// (0x0009a0d9) mp4_rocker_pane_g1

0x6723,	// (0x00095217) aid_cell_size_keypad2_ParamLimits

0x6723,	// (0x00095217) aid_cell_size_keypad2

0x6739,	// (0x0009522d) dialer2_ne_pane_ParamLimits

0x6739,	// (0x0009522d) dialer2_ne_pane

0x6753,	// (0x00095247) grid_dialer2_keypad_pane_ParamLimits

0x6753,	// (0x00095247) grid_dialer2_keypad_pane

0xa8d0,	// (0x000993c4) bg_popup_call_pane_cp07_ParamLimits

0xa8d0,	// (0x000993c4) bg_popup_call_pane_cp07

0x6771,	// (0x00095265) dialer2_ne_pane_t1_ParamLimits

0x6771,	// (0x00095265) dialer2_ne_pane_t1

0x67b0,	// (0x000952a4) cell_dialer2_keypad_pane_ParamLimits

0x67b0,	// (0x000952a4) cell_dialer2_keypad_pane

0xb601,	// (0x0009a0f5) bg_button_pane_pane_cp04_ParamLimits

0xb601,	// (0x0009a0f5) bg_button_pane_pane_cp04

0x67d4,	// (0x000952c8) cell_dialer2_keypad_pane_g1_ParamLimits

0x67d4,	// (0x000952c8) cell_dialer2_keypad_pane_g1

0x1a9a,	// (0x0009058e) aid_placing_vt_set_content_ParamLimits

0x1a9a,	// (0x0009058e) aid_placing_vt_set_content

0x1ac2,	// (0x000905b6) aid_placing_vt_set_title_ParamLimits

0x1ac2,	// (0x000905b6) aid_placing_vt_set_title

0xedc5,	// (0x0009d8b9) main_image3_pane

0x689a,	// (0x0009538e) area_side_right_pane_cp01_ParamLimits

0x689a,	// (0x0009538e) area_side_right_pane_cp01

0xb407,	// (0x00099efb) main_image3_pane_g1_ParamLimits

0xb407,	// (0x00099efb) main_image3_pane_g1

0x68b1,	// (0x000953a5) main_image3_pane_g2_ParamLimits

0x68b1,	// (0x000953a5) main_image3_pane_g2

0x68d9,	// (0x000953cd) main_image3_pane_g3_ParamLimits

0x68d9,	// (0x000953cd) main_image3_pane_g3

0x6903,	// (0x000953f7) main_image3_pane_g4_ParamLimits

0x6903,	// (0x000953f7) main_image3_pane_g4

0x0003,

0xf8cd,	// (0x0009e3c1) main_image3_pane_g_ParamLimits

0xf8cd,	// (0x0009e3c1) main_image3_pane_g

0x692d,	// (0x00095421) main_image3_pane_t1_ParamLimits

0x692d,	// (0x00095421) main_image3_pane_t1

0x6985,	// (0x00095479) main_image3_pane_t2_ParamLimits

0x6985,	// (0x00095479) main_image3_pane_t2

0x69d7,	// (0x000954cb) main_image3_pane_t3_ParamLimits

0x69d7,	// (0x000954cb) main_image3_pane_t3

0x0003,

0xf8d6,	// (0x0009e3ca) main_image3_pane_t_ParamLimits

0xf8d6,	// (0x0009e3ca) main_image3_pane_t

0xee3d,	// (0x0009d931) grid_sctrl_middle_pane_cp01_ParamLimits

0xee3d,	// (0x0009d931) grid_sctrl_middle_pane_cp01

0x6a5f,	// (0x00095553) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a5f,	// (0x00095553) cell_sctrl_middle_pane_cp01

0x6a7c,	// (0x00095570) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a7c,	// (0x00095570) cell_sctrl_middle_pane_cp01_g1

0xedc5,	// (0x0009d8b9) main_call4_pane

0x6a92,	// (0x00095586) aid_size_button_call4_ParamLimits

0x6a92,	// (0x00095586) aid_size_button_call4

0x6ac3,	// (0x000955b7) call4_windows_pane_ParamLimits

0x6ac3,	// (0x000955b7) call4_windows_pane

0x6ae3,	// (0x000955d7) grid_call4_button_pane_ParamLimits

0x6ae3,	// (0x000955d7) grid_call4_button_pane

0xb60d,	// (0x0009a101) call4_windows_conf_pane

0xb622,	// (0x0009a116) popup_call4_audio_first_window_ParamLimits

0xb622,	// (0x0009a116) popup_call4_audio_first_window

0xb66e,	// (0x0009a162) popup_call4_audio_second_window_ParamLimits

0xb66e,	// (0x0009a162) popup_call4_audio_second_window

0xb682,	// (0x0009a176) popup_call4_audio_wait_window_ParamLimits

0xb682,	// (0x0009a176) popup_call4_audio_wait_window

0x6b10,	// (0x00095604) cell_call4_button_pane_ParamLimits

0x6b10,	// (0x00095604) cell_call4_button_pane

0x6b39,	// (0x0009562d) bg_button_pane_cp09_ParamLimits

0x6b39,	// (0x0009562d) bg_button_pane_cp09

0x6b45,	// (0x00095639) cell_call4_button_pane_g1_ParamLimits

0x6b45,	// (0x00095639) cell_call4_button_pane_g1

0x6b6b,	// (0x0009565f) cell_call4_button_pane_t1_ParamLimits

0x6b6b,	// (0x0009565f) cell_call4_button_pane_t1

0xb6ca,	// (0x0009a1be) popup_call4_audio_conf_window_ParamLimits

0xb6ca,	// (0x0009a1be) popup_call4_audio_conf_window

0x5dac,	// (0x000948a0) mup3_progress_pane_t1_ParamLimits

0x5dcb,	// (0x000948bf) mup3_progress_pane_t2_ParamLimits

0xae07,	// (0x000998fb) mup3_progress_pane_t3_ParamLimits

0xf7b4,	// (0x0009e2a8) mup3_progress_pane_t_ParamLimits

0xae24,	// (0x00099918) mup_progress_pane_cp03_ParamLimits

0x63ae,	// (0x00094ea2) mup3_control_keys_pane_g4_copy1

0xd962,	// (0x0009c456) mp4_rocker2_pane_ParamLimits

0xd962,	// (0x0009c456) mp4_rocker2_pane

0xb6de,	// (0x0009a1d2) mp4_rocker2_pane_g1

0xb6e6,	// (0x0009a1da) mp4_rocker2_pane_g2

0xd9d0,	// (0x0009c4c4) mp4_rocker2_pane_g3

0xd9d8,	// (0x0009c4cc) mp4_rocker2_pane_g4

0xd9e0,	// (0x0009c4d4) mp4_rocker2_pane_g5

0x0004,

0xf8df,	// (0x0009e3d3) mp4_rocker2_pane_g

0xedc5,	// (0x0009d8b9) main_camera4_pane

0xedc5,	// (0x0009d8b9) main_video4_pane

0x6628,	// (0x0009511c) main_video_tele_dialer_pane_t1_ParamLimits

0x6628,	// (0x0009511c) main_video_tele_dialer_pane_t1

0x6641,	// (0x00095135) main_video_tele_dialer_pane_t2_ParamLimits

0x6641,	// (0x00095135) main_video_tele_dialer_pane_t2

0x0001,

0xf899,	// (0x0009e38d) main_video_tele_dialer_pane_t_ParamLimits

0xf899,	// (0x0009e38d) main_video_tele_dialer_pane_t

0x6bad,	// (0x000956a1) cam4_autofocus_pane_ParamLimits

0x6bad,	// (0x000956a1) cam4_autofocus_pane

0x6bc3,	// (0x000956b7) cam4_image_uncrop_pane_ParamLimits

0x6bc3,	// (0x000956b7) cam4_image_uncrop_pane

0x6bdd,	// (0x000956d1) cam4_indicators_pane_ParamLimits

0x6bdd,	// (0x000956d1) cam4_indicators_pane

0x6c08,	// (0x000956fc) main_camera4_pane_g1_ParamLimits

0x6c08,	// (0x000956fc) main_camera4_pane_g1

0x6c1b,	// (0x0009570f) main_camera4_pane_g2_ParamLimits

0x6c1b,	// (0x0009570f) main_camera4_pane_g2

0x6c2e,	// (0x00095722) main_camera4_pane_g3_ParamLimits

0x6c2e,	// (0x00095722) main_camera4_pane_g3

0x6c41,	// (0x00095735) main_camera4_pane_g4_ParamLimits

0x6c41,	// (0x00095735) main_camera4_pane_g4

0x6c54,	// (0x00095748) main_camera4_pane_g5_ParamLimits

0x6c54,	// (0x00095748) main_camera4_pane_g5

0x0005,

0xf8ea,	// (0x0009e3de) main_camera4_pane_g_ParamLimits

0xf8ea,	// (0x0009e3de) main_camera4_pane_g

0x6c78,	// (0x0009576c) main_camera4_pane_t1_ParamLimits

0x6c78,	// (0x0009576c) main_camera4_pane_t1

0xda04,	// (0x0009c4f8) bg_tb_trans_pane_cp06

0xda1a,	// (0x0009c50e) cam4_indicators_pane_g1

0xda2b,	// (0x0009c51f) cam4_indicators_pane_g2

0x0002,

0xf905,	// (0x0009e3f9) cam4_indicators_pane_g

0xda49,	// (0x0009c53d) cam4_indicators_pane_t1

0x6cdc,	// (0x000957d0) main_video4_pane_g1_ParamLimits

0x6cdc,	// (0x000957d0) main_video4_pane_g1

0x6cef,	// (0x000957e3) main_video4_pane_g2_ParamLimits

0x6cef,	// (0x000957e3) main_video4_pane_g2

0x6d03,	// (0x000957f7) main_video4_pane_g3_ParamLimits

0x6d03,	// (0x000957f7) main_video4_pane_g3

0x6d17,	// (0x0009580b) main_video4_pane_g4_ParamLimits

0x6d17,	// (0x0009580b) main_video4_pane_g4

0x0004,

0xf90c,	// (0x0009e400) main_video4_pane_g_ParamLimits

0xf90c,	// (0x0009e400) main_video4_pane_g

0x6d3f,	// (0x00095833) vid4_indicators_pane_ParamLimits

0x6d3f,	// (0x00095833) vid4_indicators_pane

0x6d71,	// (0x00095865) video4_image_uncrop_cif_pane_ParamLimits

0x6d71,	// (0x00095865) video4_image_uncrop_cif_pane

0x6d8b,	// (0x0009587f) video4_image_uncrop_nhd_pane_ParamLimits

0x6d8b,	// (0x0009587f) video4_image_uncrop_nhd_pane

0x6bc3,	// (0x000956b7) video4_image_uncrop_vga_pane_ParamLimits

0x6bc3,	// (0x000956b7) video4_image_uncrop_vga_pane

0xda6b,	// (0x0009c55f) bg_tb_trans_pane_cp07

0x6d9f,	// (0x00095893) vid4_indicators_pane_g1

0x6dac,	// (0x000958a0) vid4_indicators_pane_g2

0x6db9,	// (0x000958ad) vid4_indicators_pane_g3

0x0004,

0xf917,	// (0x0009e40b) vid4_indicators_pane_g

0x6dde,	// (0x000958d2) vid4_indicators_pane_t1

0x6df0,	// (0x000958e4) cam4_autofocus_pane_g1

0x6df8,	// (0x000958ec) cam4_autofocus_pane_g2

0x6e00,	// (0x000958f4) cam4_autofocus_pane_g3

0x0002,

0xf922,	// (0x0009e416) cam4_autofocus_pane_g

0x6e08,	// (0x000958fc) cam4_autofocus_pane_g3_copy1

0x666e,	// (0x00095162) video_down_pane_cp_t1

0x667c,	// (0x00095170) video_down_pane_cp_t2

0x0001,

0xf89e,	// (0x0009e392) video_down_pane_cp_t

0xee3d,	// (0x0009d931) popup_vitu2_window_ParamLimits

0xee3d,	// (0x0009d931) popup_vitu2_window

0x6e10,	// (0x00095904) aid_size_cell2_itu2_ParamLimits

0x6e10,	// (0x00095904) aid_size_cell2_itu2

0x6e36,	// (0x0009592a) aid_size_cell_itu2_ParamLimits

0x6e36,	// (0x0009592a) aid_size_cell_itu2

0x6e92,	// (0x00095986) bg_popup_window_pane_cp09_ParamLimits

0x6e92,	// (0x00095986) bg_popup_window_pane_cp09

0x6ea0,	// (0x00095994) field_vitu2_entry_pane_ParamLimits

0x6ea0,	// (0x00095994) field_vitu2_entry_pane

0x6ec6,	// (0x000959ba) grid_vitu2_function_pane_ParamLimits

0x6ec6,	// (0x000959ba) grid_vitu2_function_pane

0x6f17,	// (0x00095a0b) grid_vitu2_itu_pane_ParamLimits

0x6f17,	// (0x00095a0b) grid_vitu2_itu_pane

0x6fa8,	// (0x00095a9c) cell_vitu2_itu_pane_ParamLimits

0x6fa8,	// (0x00095a9c) cell_vitu2_itu_pane

0x6fcc,	// (0x00095ac0) cell_vitu2_function_pane_ParamLimits

0x6fcc,	// (0x00095ac0) cell_vitu2_function_pane

0xb700,	// (0x0009a1f4) bg_popup_call_pane_cp08_ParamLimits

0xb700,	// (0x0009a1f4) bg_popup_call_pane_cp08

0xb719,	// (0x0009a20d) field_vitu2_entry_pane_g1

0xb725,	// (0x0009a219) field_vitu2_entry_pane_g2

0x0002,

0xf929,	// (0x0009e41d) field_vitu2_entry_pane_g

0x700b,	// (0x00095aff) field_vitu2_entry_pane_t1_ParamLimits

0x700b,	// (0x00095aff) field_vitu2_entry_pane_t1

0xb73f,	// (0x0009a233) field_vitu2_entry_pane_t2_ParamLimits

0xb73f,	// (0x0009a233) field_vitu2_entry_pane_t2

0x0001,

0xf930,	// (0x0009e424) field_vitu2_entry_pane_t_ParamLimits

0xf930,	// (0x0009e424) field_vitu2_entry_pane_t

0x703c,	// (0x00095b30) bg_button_pane_cp010_ParamLimits

0x703c,	// (0x00095b30) bg_button_pane_cp010

0x704a,	// (0x00095b3e) cell_vitu2_itu_pane_g1

0x7068,	// (0x00095b5c) cell_vitu2_itu_pane_t1_ParamLimits

0x7068,	// (0x00095b5c) cell_vitu2_itu_pane_t1

0x0ae7,	// (0x0008f5db) cell_vitu2_itu_pane_t2_ParamLimits

0x0ae7,	// (0x0008f5db) cell_vitu2_itu_pane_t2

0x0002,

0xf93a,	// (0x0009e42e) cell_vitu2_itu_pane_t_ParamLimits

0xf93a,	// (0x0009e42e) cell_vitu2_itu_pane_t

0xda81,	// (0x0009c575) bg_button_pane_cp011

0x70ce,	// (0x00095bc2) cell_vitu2_function_pane_g1

0xedc5,	// (0x0009d8b9) main_myfav_hc_pane

0x6a27,	// (0x0009551b) popup_image3_note_pane_ParamLimits

0x6a27,	// (0x0009551b) popup_image3_note_pane

0x6a43,	// (0x00095537) popup_image3_tool_bar_pane_ParamLimits

0x6a43,	// (0x00095537) popup_image3_tool_bar_pane

0x0b6b,	// (0x0008f65f) cell_vitu2_itu_pane_t3_ParamLimits

0x0b6b,	// (0x0008f65f) cell_vitu2_itu_pane_t3

0xedc5,	// (0x0009d8b9) bg_popup_trans_pane

0xb764,	// (0x0009a258) grid_image3_tool_bar_pane

0xb76e,	// (0x0009a262) bg_popup_trans_pane_g1

0xe5ec,	// (0x0009d0e0) bg_popup_trans_pane_g2

0xb776,	// (0x0009a26a) bg_popup_trans_pane_g3

0xb77e,	// (0x0009a272) bg_popup_trans_pane_g4

0xb786,	// (0x0009a27a) bg_popup_trans_pane_g5

0xb78e,	// (0x0009a282) bg_popup_trans_pane_g6

0xb796,	// (0x0009a28a) bg_popup_trans_pane_g7

0xb79e,	// (0x0009a292) bg_popup_trans_pane_g8

0xe5cc,	// (0x0009d0c0) bg_popup_trans_pane_g9

0x0008,

0xf941,	// (0x0009e435) bg_popup_trans_pane_g

0xb7a6,	// (0x0009a29a) cell_image3_tool_bar_pane_ParamLimits

0xb7a6,	// (0x0009a29a) cell_image3_tool_bar_pane

0xaaed,	// (0x000995e1) cell_image3_tool_bar_pane_g1

0xedc5,	// (0x0009d8b9) bg_popup_trans_pane_cp1

0xb7ba,	// (0x0009a2ae) popup_image3_note_pane_t1

0xb7c8,	// (0x0009a2bc) popup_image3_note_pane_t2

0xb7d6,	// (0x0009a2ca) popup_image3_note_pane_t3

0x0002,

0xf954,	// (0x0009e448) popup_image3_note_pane_t

0xb7e4,	// (0x0009a2d8) popup_image3_note_pane_t3_copy1

0x70e2,	// (0x00095bd6) bg_myfav_hc_instruction_pane_ParamLimits

0x70e2,	// (0x00095bd6) bg_myfav_hc_instruction_pane

0x70f8,	// (0x00095bec) cell_myfav_contact_pane_ParamLimits

0x70f8,	// (0x00095bec) cell_myfav_contact_pane

0x7114,	// (0x00095c08) cell_myfav_contact_pane_cp1_ParamLimits

0x7114,	// (0x00095c08) cell_myfav_contact_pane_cp1

0x712c,	// (0x00095c20) cell_myfav_contact_pane_cp2_ParamLimits

0x712c,	// (0x00095c20) cell_myfav_contact_pane_cp2

0x7144,	// (0x00095c38) cell_myfav_contact_pane_cp3_ParamLimits

0x7144,	// (0x00095c38) cell_myfav_contact_pane_cp3

0x715b,	// (0x00095c4f) cell_myfav_contact_pane_cp4_ParamLimits

0x715b,	// (0x00095c4f) cell_myfav_contact_pane_cp4

0x7173,	// (0x00095c67) cell_myfav_contact_pane_cp5_ParamLimits

0x7173,	// (0x00095c67) cell_myfav_contact_pane_cp5

0x7187,	// (0x00095c7b) cell_myfav_contact_pane_cp6_ParamLimits

0x7187,	// (0x00095c7b) cell_myfav_contact_pane_cp6

0x719d,	// (0x00095c91) cell_myfav_contact_pane_cp7_ParamLimits

0x719d,	// (0x00095c91) cell_myfav_contact_pane_cp7

0xb7f2,	// (0x0009a2e6) listscroll_gen_pane_cp05

0x71b7,	// (0x00095cab) main_myfav_hc_pane_g1_ParamLimits

0x71b7,	// (0x00095cab) main_myfav_hc_pane_g1

0x71d1,	// (0x00095cc5) main_myfav_hc_pane_g2_ParamLimits

0x71d1,	// (0x00095cc5) main_myfav_hc_pane_g2

0x0002,

0xf95b,	// (0x0009e44f) main_myfav_hc_pane_g_ParamLimits

0xf95b,	// (0x0009e44f) main_myfav_hc_pane_g

0x7203,	// (0x00095cf7) main_myfav_hc_pane_t1_ParamLimits

0x7203,	// (0x00095cf7) main_myfav_hc_pane_t1

0xb7fb,	// (0x0009a2ef) main_myfav_hc_pane_t2_ParamLimits

0xb7fb,	// (0x0009a2ef) main_myfav_hc_pane_t2

0xb80d,	// (0x0009a301) main_myfav_hc_pane_t3_ParamLimits

0xb80d,	// (0x0009a301) main_myfav_hc_pane_t3

0x721a,	// (0x00095d0e) main_myfav_hc_pane_t4_ParamLimits

0x721a,	// (0x00095d0e) main_myfav_hc_pane_t4

0x0004,

0xf962,	// (0x0009e456) main_myfav_hc_pane_t_ParamLimits

0xf962,	// (0x0009e456) main_myfav_hc_pane_t

0xaaed,	// (0x000995e1) bg_myfav_hc_instruction_pane_g1

0xb81f,	// (0x0009a313) cell_myfav_contact_pane_g1_ParamLimits

0xb81f,	// (0x0009a313) cell_myfav_contact_pane_g1

0xb81f,	// (0x0009a313) cell_myfav_contact_pane_g2_ParamLimits

0xb81f,	// (0x0009a313) cell_myfav_contact_pane_g2

0xb82b,	// (0x0009a31f) cell_myfav_contact_pane_g3_ParamLimits

0xb82b,	// (0x0009a31f) cell_myfav_contact_pane_g3

0xadf1,	// (0x000998e5) cell_myfav_contact_pane_g4_ParamLimits

0xadf1,	// (0x000998e5) cell_myfav_contact_pane_g4

0xb838,	// (0x0009a32c) cell_myfav_contact_pane_g5_ParamLimits

0xb838,	// (0x0009a32c) cell_myfav_contact_pane_g5

0x0004,

0xf96d,	// (0x0009e461) cell_myfav_contact_pane_g_ParamLimits

0xf96d,	// (0x0009e461) cell_myfav_contact_pane_g

0x71eb,	// (0x00095cdf) main_myfav_hc_pane_g3_ParamLimits

0x71eb,	// (0x00095cdf) main_myfav_hc_pane_g3

0x0d21,	// (0x0008f815) popup_adpt_find_window

0x7242,	// (0x00095d36) afind_page_pane_ParamLimits

0x7242,	// (0x00095d36) afind_page_pane

0x7257,	// (0x00095d4b) aid_size_cell_afind_ParamLimits

0x7257,	// (0x00095d4b) aid_size_cell_afind

0x7275,	// (0x00095d69) bg_popup_sub_pane_cp09_ParamLimits

0x7275,	// (0x00095d69) bg_popup_sub_pane_cp09

0x7282,	// (0x00095d76) find_pane_cp01_ParamLimits

0x7282,	// (0x00095d76) find_pane_cp01

0xb844,	// (0x0009a338) grid_afind_control_pane_ParamLimits

0xb844,	// (0x0009a338) grid_afind_control_pane

0x728f,	// (0x00095d83) grid_afind_pane_ParamLimits

0x728f,	// (0x00095d83) grid_afind_pane

0x72b1,	// (0x00095da5) cell_afind_pane_ParamLimits

0x72b1,	// (0x00095da5) cell_afind_pane

0xaaed,	// (0x000995e1) afind_page_pane_g1

0x7312,	// (0x00095e06) afind_page_pane_g2

0x731b,	// (0x00095e0f) afind_page_pane_g3

0x0002,

0xf978,	// (0x0009e46c) afind_page_pane_g

0x7324,	// (0x00095e18) afind_page_pane_t1

0xb858,	// (0x0009a34c) cell_afind_grid_control_pane_ParamLimits

0xb858,	// (0x0009a34c) cell_afind_grid_control_pane

0xb601,	// (0x0009a0f5) bg_button_pane_cp69_ParamLimits

0xb601,	// (0x0009a0f5) bg_button_pane_cp69

0x7344,	// (0x00095e38) cell_afind_pane_g1_ParamLimits

0x7344,	// (0x00095e38) cell_afind_pane_g1

0x7351,	// (0x00095e45) cell_afind_pane_t1_ParamLimits

0x7351,	// (0x00095e45) cell_afind_pane_t1

0xe3e5,	// (0x0009ced9) bg_button_pane_cp72

0xb867,	// (0x0009a35b) cell_afind_grid_control_pane_g1

0x3757,	// (0x0009224b) aid_image_placing_area_ParamLimits

0x3757,	// (0x0009224b) aid_image_placing_area

0xb0f6,	// (0x00099bea) field_vitu_entry_pane_g1_ParamLimits

0xb0f6,	// (0x00099bea) field_vitu_entry_pane_g1

0xb102,	// (0x00099bf6) field_vitu_entry_pane_g2_ParamLimits

0xb102,	// (0x00099bf6) field_vitu_entry_pane_g2

0x0001,

0xf829,	// (0x0009e31d) field_vitu_entry_pane_g_ParamLimits

0xf829,	// (0x0009e31d) field_vitu_entry_pane_g

0x647b,	// (0x00094f6f) cell_vitu_itu_pane_g1_ParamLimits

0x64bd,	// (0x00094fb1) cell_vitu_itu_pane_t3_ParamLimits

0x64bd,	// (0x00094fb1) cell_vitu_itu_pane_t3

0xb5a7,	// (0x0009a09b) mp4_progress_pane_t1_ParamLimits

0xb5c0,	// (0x0009a0b4) mp4_progress_pane_t2_ParamLimits

0xf8be,	// (0x0009e3b2) mp4_progress_pane_t_ParamLimits

0xb5d9,	// (0x0009a0cd) mup_progress_pane_cp04_ParamLimits

0x722e,	// (0x00095d22) main_myfav_hc_pane_t5_ParamLimits

0x722e,	// (0x00095d22) main_myfav_hc_pane_t5

0xedeb,	// (0x0009d8df) aid_zoom_text_primary

0x0d21,	// (0x0008f815) popup_adpt_find_window_ParamLimits

0xee3d,	// (0x0009d931) main_cam_set_pane

0x6bf4,	// (0x000956e8) cam4_zoom_pane_ParamLimits

0x6bf4,	// (0x000956e8) cam4_zoom_pane

0x7363,	// (0x00095e57) main_cam_set_pane_g1_ParamLimits

0x7363,	// (0x00095e57) main_cam_set_pane_g1

0x7371,	// (0x00095e65) main_cam_set_pane_g2_ParamLimits

0x7371,	// (0x00095e65) main_cam_set_pane_g2

0x0001,

0xf97f,	// (0x0009e473) main_cam_set_pane_g_ParamLimits

0xf97f,	// (0x0009e473) main_cam_set_pane_g

0x7392,	// (0x00095e86) main_cam_set_pane_t1_ParamLimits

0x7392,	// (0x00095e86) main_cam_set_pane_t1

0x73ad,	// (0x00095ea1) main_cset_listscroll_pane_ParamLimits

0x73ad,	// (0x00095ea1) main_cset_listscroll_pane

0x73cd,	// (0x00095ec1) main_cset_slider_pane_ParamLimits

0x73cd,	// (0x00095ec1) main_cset_slider_pane

0xb878,	// (0x0009a36c) main_cset_list_pane_ParamLimits

0xb878,	// (0x0009a36c) main_cset_list_pane

0xb888,	// (0x0009a37c) scroll_pane_cp028

0x73f3,	// (0x00095ee7) aid_area_touch_slider

0x740f,	// (0x00095f03) cset_slider_pane

0x7439,	// (0x00095f2d) main_cset_slider_pane_g1

0x744e,	// (0x00095f42) main_cset_slider_pane_g2

0x0011,

0xf984,	// (0x0009e478) main_cset_slider_pane_g

0xb8c1,	// (0x0009a3b5) main_cset_slider_pane_t1

0x750a,	// (0x00095ffe) main_cset_slider_pane_t2

0x7524,	// (0x00096018) main_cset_slider_pane_t3

0x753e,	// (0x00096032) main_cset_slider_pane_t4

0x7558,	// (0x0009604c) main_cset_slider_pane_t5

0x7574,	// (0x00096068) main_cset_slider_pane_t6

0x7589,	// (0x0009607d) main_cset_slider_pane_t7

0x000e,

0xf9a9,	// (0x0009e49d) main_cset_slider_pane_t

0x768d,	// (0x00096181) cset_list_set_pane_ParamLimits

0x768d,	// (0x00096181) cset_list_set_pane

0x76a1,	// (0x00096195) aid_position_infowindow_above

0x76a9,	// (0x0009619d) aid_position_infowindow_below

0x76b1,	// (0x000961a5) cset_list_set_pane_g1_ParamLimits

0x76b1,	// (0x000961a5) cset_list_set_pane_g1

0x76bd,	// (0x000961b1) cset_list_set_pane_g3_ParamLimits

0x76bd,	// (0x000961b1) cset_list_set_pane_g3

0x0001,

0xf9c8,	// (0x0009e4bc) cset_list_set_pane_g_ParamLimits

0xf9c8,	// (0x0009e4bc) cset_list_set_pane_g

0x76cc,	// (0x000961c0) cset_list_set_pane_t1_ParamLimits

0x76cc,	// (0x000961c0) cset_list_set_pane_t1

0xee3d,	// (0x0009d931) list_highlight_pane_cp021_ParamLimits

0xee3d,	// (0x0009d931) list_highlight_pane_cp021

0xed9a,	// (0x0009d88e) cset_slider_pane_g1

0xedac,	// (0x0009d8a0) cset_slider_pane_g2

0xeda3,	// (0x0009d897) cset_slider_pane_g3

0x0002,

0x0559,	// (0x0008f04d) cset_slider_pane_g

0xda8f,	// (0x0009c583) aid_area_touch_cam4_zoom

0xda97,	// (0x0009c58b) cam4_zoom_cont_pane

0xda9f,	// (0x0009c593) cam4_zoom_pane_g1

0xdaa7,	// (0x0009c59b) cam4_zoom_pane_g2

0x76e1,	// (0x000961d5) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0009e4c1) cam4_zoom_pane_g

0xdaaf,	// (0x0009c5a3) cam4_zoom_cont_pane_g1

0xdab8,	// (0x0009c5ac) cam4_zoom_cont_pane_g2

0xdac1,	// (0x0009c5b5) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0009e4c8) cam4_zoom_cont_pane_g

0x6ab0,	// (0x000955a4) call4_image_pane_ParamLimits

0x6ab0,	// (0x000955a4) call4_image_pane

0xb60d,	// (0x0009a101) call4_windows_conf_pane_ParamLimits

0xb64c,	// (0x0009a140) popup_call4_audio_in_window_ParamLimits

0xb64c,	// (0x0009a140) popup_call4_audio_in_window

0xedc5,	// (0x0009d8b9) bg_popup_call2_act_pane_cp02

0xb6c2,	// (0x0009a1b6) call4_list_conf_pane

0xaaed,	// (0x000995e1) call4_image_pane_g1

0xaaed,	// (0x000995e1) call4_image_pane_g2

0x0001,

0xf6f4,	// (0x0009e1e8) call4_image_pane_g

0xb961,	// (0x0009a455) list_single_graphic_popup_conf4_pane_ParamLimits

0xb961,	// (0x0009a455) list_single_graphic_popup_conf4_pane

0xedc5,	// (0x0009d8b9) list_highlight_pane_cp022

0xb974,	// (0x0009a468) list_single_graphic_popup_conf4_pane_g1

0xea8b,	// (0x0009d57f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0009e4cf) list_single_graphic_popup_conf4_pane_g

0xb97c,	// (0x0009a470) list_single_graphic_popup_conf4_pane_t1

0x1be6,	// (0x000906da) popup_vtel_slider_window_ParamLimits

0x1be6,	// (0x000906da) popup_vtel_slider_window

0xb5ef,	// (0x0009a0e3) dialer2_ne_pane_t2_ParamLimits

0xb5ef,	// (0x0009a0e3) dialer2_ne_pane_t2

0x0001,

0xf8c3,	// (0x0009e3b7) dialer2_ne_pane_t_ParamLimits

0xf8c3,	// (0x0009e3b7) dialer2_ne_pane_t

0xa8d0,	// (0x000993c4) bg_popup_sub_pane_cp010_ParamLimits

0xa8d0,	// (0x000993c4) bg_popup_sub_pane_cp010

0x76e9,	// (0x000961dd) popup_vtel_slider_window_g1_ParamLimits

0x76e9,	// (0x000961dd) popup_vtel_slider_window_g1

0x76fc,	// (0x000961f0) popup_vtel_slider_window_g2_ParamLimits

0x76fc,	// (0x000961f0) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0009e4d4) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0009e4d4) popup_vtel_slider_window_g

0x7752,	// (0x00096246) vtel_slider_pane_ParamLimits

0x7752,	// (0x00096246) vtel_slider_pane

0x7774,	// (0x00096268) vtel_slider_pane_g1_ParamLimits

0x7774,	// (0x00096268) vtel_slider_pane_g1

0x7788,	// (0x0009627c) vtel_slider_pane_g2_ParamLimits

0x7788,	// (0x0009627c) vtel_slider_pane_g2

0x77a0,	// (0x00096294) vtel_slider_pane_g3_ParamLimits

0x77a0,	// (0x00096294) vtel_slider_pane_g3

0x7774,	// (0x00096268) vtel_slider_pane_g4_ParamLimits

0x7774,	// (0x00096268) vtel_slider_pane_g4

0x77b6,	// (0x000962aa) vtel_slider_pane_g5_ParamLimits

0x77b6,	// (0x000962aa) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0009e4dd) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0009e4dd) vtel_slider_pane_g

0xedc5,	// (0x0009d8b9) main_gallery2_pane

0x6e62,	// (0x00095956) aid_size_row_itut2_dropdow_list_ParamLimits

0x6e62,	// (0x00095956) aid_size_row_itut2_dropdow_list

0x6eee,	// (0x000959e2) grid_vitu2_function_top_pane_ParamLimits

0x6eee,	// (0x000959e2) grid_vitu2_function_top_pane

0x6f53,	// (0x00095a47) popup_vitu2_dropdown_list_window_ParamLimits

0x6f53,	// (0x00095a47) popup_vitu2_dropdown_list_window

0x6f7c,	// (0x00095a70) popup_vitu2_match_list_window

0x77cc,	// (0x000962c0) cell_vitu2_function_top_pane_ParamLimits

0x77cc,	// (0x000962c0) cell_vitu2_function_top_pane

0x77ea,	// (0x000962de) cell_vitu2_function_top_pane_cp01_ParamLimits

0x77ea,	// (0x000962de) cell_vitu2_function_top_pane_cp01

0x7808,	// (0x000962fc) cell_vitu2_function_top_wide_pane_ParamLimits

0x7808,	// (0x000962fc) cell_vitu2_function_top_wide_pane

0xda81,	// (0x0009c575) bg_button_pane_cp012

0x7826,	// (0x0009631a) cell_vitu2_function_top_pane_g1

0xdaca,	// (0x0009c5be) bg_button_pane_cp013_ParamLimits

0xdaca,	// (0x0009c5be) bg_button_pane_cp013

0x783a,	// (0x0009632e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x783a,	// (0x0009632e) cell_vitu2_function_top_wide_pane_g1

0xda81,	// (0x0009c575) bg_popup_sub_pane_cp20

0x7852,	// (0x00096346) list_vitu2_match_list_pane

0xb76e,	// (0x0009a262) bg_popup_sub_pane_cp20_g1

0xb776,	// (0x0009a26a) bg_popup_sub_pane_cp20_g2

0xe5ec,	// (0x0009d0e0) bg_popup_sub_pane_cp20_g3

0xb77e,	// (0x0009a272) bg_popup_sub_pane_cp20_g4

0xe5cc,	// (0x0009d0c0) bg_popup_sub_pane_cp20_g5

0xb9a0,	// (0x0009a494) bg_popup_sub_pane_cp20_g6

0xb78e,	// (0x0009a282) bg_popup_sub_pane_cp20_g7

0xb796,	// (0x0009a28a) bg_popup_sub_pane_cp20_g8

0xb79e,	// (0x0009a292) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0009e4e8) bg_popup_sub_pane_cp20_g

0xdae6,	// (0x0009c5da) list_vitu2_match_list_item_pane_ParamLimits

0xdae6,	// (0x0009c5da) list_vitu2_match_list_item_pane

0xdaf8,	// (0x0009c5ec) list_vitu2_match_list_item_pane_t1

0xa007,	// (0x00098afb) bg_popup_sub_pane_cp21

0xdb06,	// (0x0009c5fa) grid_vitu2_dropdown_list_pane

0x78a5,	// (0x00096399) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x78a5,	// (0x00096399) cell_vitu2_dropdown_list_char_pane

0x78c6,	// (0x000963ba) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x78c6,	// (0x000963ba) cell_vitu2_dropdown_list_ctrl_pane

0xb9c0,	// (0x0009a4b4) cell_vitu2_dropdown_list_char_pane_g1

0xb9c9,	// (0x0009a4bd) cell_vitu2_dropdown_list_char_pane_g2

0xb9d2,	// (0x0009a4c6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0009e505) cell_vitu2_dropdown_list_char_pane_g

0x78f2,	// (0x000963e6) cell_vitu2_dropdown_list_char_pane_t1

0x7900,	// (0x000963f4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7900,	// (0x000963f4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7910,	// (0x00096404) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7910,	// (0x00096404) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7921,	// (0x00096415) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7921,	// (0x00096415) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7931,	// (0x00096425) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7931,	// (0x00096425) cell_vitu2_dropdown_list_ctrl_pane_g4

0xda04,	// (0x0009c4f8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xda04,	// (0x0009c4f8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0009e50c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0009e50c) cell_vitu2_dropdown_list_ctrl_pane_g

0x794d,	// (0x00096441) aid_size_cell_gallery2_ParamLimits

0x794d,	// (0x00096441) aid_size_cell_gallery2

0x7963,	// (0x00096457) grid_gallery2_pane_ParamLimits

0x7963,	// (0x00096457) grid_gallery2_pane

0x7977,	// (0x0009646b) scroll_pane_cp029_ParamLimits

0x7977,	// (0x0009646b) scroll_pane_cp029

0x7983,	// (0x00096477) cell_gallery2_pane_ParamLimits

0x7983,	// (0x00096477) cell_gallery2_pane

0xb9db,	// (0x0009a4cf) cell_gallery2_pane_g2

0x79b9,	// (0x000964ad) cell_gallery2_pane_g3

0xb9e5,	// (0x0009a4d9) cell_gallery2_pane_g4

0xb9ed,	// (0x0009a4e1) cell_gallery2_pane_g5

0xec64,	// (0x0009d758) grid_highlight_pane_cp10

0x6f7c,	// (0x00095a70) popup_vitu2_match_list_window_ParamLimits

0x6f91,	// (0x00095a85) popup_vitu2_query_window_ParamLimits

0x6f91,	// (0x00095a85) popup_vitu2_query_window

0xa007,	// (0x00098afb) bg_vitu2_candi_button_pane

0xb9c0,	// (0x0009a4b4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb9c9,	// (0x0009a4bd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb9d2,	// (0x0009a4c6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x79c1,	// (0x000964b5) bg_button_pane_cp015

0x79d5,	// (0x000964c9) bg_button_pane_cp016

0x79e8,	// (0x000964dc) bg_button_pane_cp017

0xa5e5,	// (0x000990d9) bg_popup_sub_pane_cp22

0xb9f5,	// (0x0009a4e9) popup_vitu2_query_window_g1

0x7a2d,	// (0x00096521) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0009e517) popup_vitu2_query_window_g

0x7a4c,	// (0x00096540) popup_vitu2_query_window_t1_ParamLimits

0x7a4c,	// (0x00096540) popup_vitu2_query_window_t1

0x7a81,	// (0x00096575) popup_vitu2_query_window_t2_ParamLimits

0x7a81,	// (0x00096575) popup_vitu2_query_window_t2

0x7a93,	// (0x00096587) popup_vitu2_query_window_t3_ParamLimits

0x7a93,	// (0x00096587) popup_vitu2_query_window_t3

0x7abb,	// (0x000965af) popup_vitu2_query_window_t4_ParamLimits

0x7abb,	// (0x000965af) popup_vitu2_query_window_t4

0x7adc,	// (0x000965d0) popup_vitu2_query_window_t5_ParamLimits

0x7adc,	// (0x000965d0) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0009e51e) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0009e51e) popup_vitu2_query_window_t

0xb870,	// (0x0009a364) main_cset_text_pane

0x73f3,	// (0x00095ee7) aid_area_touch_slider_ParamLimits

0x740f,	// (0x00095f03) cset_slider_pane_ParamLimits

0x7439,	// (0x00095f2d) main_cset_slider_pane_g1_ParamLimits

0x744e,	// (0x00095f42) main_cset_slider_pane_g2_ParamLimits

0xb891,	// (0x0009a385) main_cset_slider_pane_g3_ParamLimits

0xb891,	// (0x0009a385) main_cset_slider_pane_g3

0x7463,	// (0x00095f57) main_cset_slider_pane_g4_ParamLimits

0x7463,	// (0x00095f57) main_cset_slider_pane_g4

0x7472,	// (0x00095f66) main_cset_slider_pane_g5_ParamLimits

0x7472,	// (0x00095f66) main_cset_slider_pane_g5

0x747e,	// (0x00095f72) main_cset_slider_pane_g6_ParamLimits

0x747e,	// (0x00095f72) main_cset_slider_pane_g6

0xf984,	// (0x0009e478) main_cset_slider_pane_g_ParamLimits

0xb8c1,	// (0x0009a3b5) main_cset_slider_pane_t1_ParamLimits

0x750a,	// (0x00095ffe) main_cset_slider_pane_t2_ParamLimits

0x7524,	// (0x00096018) main_cset_slider_pane_t3_ParamLimits

0x753e,	// (0x00096032) main_cset_slider_pane_t4_ParamLimits

0x7558,	// (0x0009604c) main_cset_slider_pane_t5_ParamLimits

0x7574,	// (0x00096068) main_cset_slider_pane_t6_ParamLimits

0x7589,	// (0x0009607d) main_cset_slider_pane_t7_ParamLimits

0x75b3,	// (0x000960a7) main_cset_slider_pane_t8_ParamLimits

0x75b3,	// (0x000960a7) main_cset_slider_pane_t8

0x75db,	// (0x000960cf) main_cset_slider_pane_t9_ParamLimits

0x75db,	// (0x000960cf) main_cset_slider_pane_t9

0x7603,	// (0x000960f7) main_cset_slider_pane_t10_ParamLimits

0x7603,	// (0x000960f7) main_cset_slider_pane_t10

0x762b,	// (0x0009611f) main_cset_slider_pane_t11_ParamLimits

0x762b,	// (0x0009611f) main_cset_slider_pane_t11

0x7653,	// (0x00096147) main_cset_slider_pane_t12_ParamLimits

0x7653,	// (0x00096147) main_cset_slider_pane_t12

0x7670,	// (0x00096164) main_cset_slider_pane_t13_ParamLimits

0x7670,	// (0x00096164) main_cset_slider_pane_t13

0xf9a9,	// (0x0009e49d) main_cset_slider_pane_t_ParamLimits

0xedc5,	// (0x0009d8b9) bg_popup_sub_pane_cp011

0xba01,	// (0x0009a4f5) main_cset_text_pane_g1

0xba09,	// (0x0009a4fd) main_cset_text_pane_t1

0xba17,	// (0x0009a50b) main_cset_text_pane_t2

0xba25,	// (0x0009a519) main_cset_text_pane_t3

0xba33,	// (0x0009a527) main_cset_text_pane_t4

0xba41,	// (0x0009a535) main_cset_text_pane_t5

0xba4f,	// (0x0009a543) main_cset_text_pane_t6

0xba5d,	// (0x0009a551) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0009e52d) main_cset_text_pane_t

0xedc5,	// (0x0009d8b9) main_cam4_burst_pane

0xedc5,	// (0x0009d8b9) main_cam5_pane

0x7332,	// (0x00095e26) bg_button_pane_cp019

0x733b,	// (0x00095e2f) bg_button_pane_cp020

0xb89d,	// (0x0009a391) main_cset_slider_pane_g7_ParamLimits

0xb89d,	// (0x0009a391) main_cset_slider_pane_g7

0xb8a9,	// (0x0009a39d) main_cset_slider_pane_g8_ParamLimits

0xb8a9,	// (0x0009a39d) main_cset_slider_pane_g8

0x7492,	// (0x00095f86) main_cset_slider_pane_g9_ParamLimits

0x7492,	// (0x00095f86) main_cset_slider_pane_g9

0x749e,	// (0x00095f92) main_cset_slider_pane_g10_ParamLimits

0x749e,	// (0x00095f92) main_cset_slider_pane_g10

0x74aa,	// (0x00095f9e) main_cset_slider_pane_g11_ParamLimits

0x74aa,	// (0x00095f9e) main_cset_slider_pane_g11

0x74b6,	// (0x00095faa) main_cset_slider_pane_g12_ParamLimits

0x74b6,	// (0x00095faa) main_cset_slider_pane_g12

0x74c2,	// (0x00095fb6) main_cset_slider_pane_g13_ParamLimits

0x74c2,	// (0x00095fb6) main_cset_slider_pane_g13

0x74ce,	// (0x00095fc2) main_cset_slider_pane_g14_ParamLimits

0x74ce,	// (0x00095fc2) main_cset_slider_pane_g14

0x74da,	// (0x00095fce) main_cset_slider_pane_g15_ParamLimits

0x74da,	// (0x00095fce) main_cset_slider_pane_g15

0xb8ef,	// (0x0009a3e3) main_cset_slider_pane_t14_ParamLimits

0xb8ef,	// (0x0009a3e3) main_cset_slider_pane_t14

0xb928,	// (0x0009a41c) main_cset_slider_pane_t15_ParamLimits

0xb928,	// (0x0009a41c) main_cset_slider_pane_t15

0x7b53,	// (0x00096647) aid_cam4_burst_size_cell_ParamLimits

0x7b53,	// (0x00096647) aid_cam4_burst_size_cell

0x7b73,	// (0x00096667) grid_cam4_burst_pane_ParamLimits

0x7b73,	// (0x00096667) grid_cam4_burst_pane

0x7bab,	// (0x0009669f) linegrid_cam4_burst_pane_ParamLimits

0x7bab,	// (0x0009669f) linegrid_cam4_burst_pane

0xba6b,	// (0x0009a55f) scroll_pane_cp30_ParamLimits

0xba6b,	// (0x0009a55f) scroll_pane_cp30

0x7bd1,	// (0x000966c5) cell_cam4_burst_pane_ParamLimits

0x7bd1,	// (0x000966c5) cell_cam4_burst_pane

0xba77,	// (0x0009a56b) linegrid_cam4_burst_pane_g1_ParamLimits

0xba77,	// (0x0009a56b) linegrid_cam4_burst_pane_g1

0x7c1e,	// (0x00096712) linegrid_cam4_burst_pane_g2_ParamLimits

0x7c1e,	// (0x00096712) linegrid_cam4_burst_pane_g2

0xba84,	// (0x0009a578) linegrid_cam4_burst_pane_g3_ParamLimits

0xba84,	// (0x0009a578) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0009e53c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009e53c) linegrid_cam4_burst_pane_g

0x7c2f,	// (0x00096723) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7c2f,	// (0x00096723) linegrid_cam4_burst_pane_g3_copy1

0xba91,	// (0x0009a585) linegrid_cam4_burst_pane_g4_ParamLimits

0xba91,	// (0x0009a585) linegrid_cam4_burst_pane_g4

0x7c49,	// (0x0009673d) linegrid_cam4_burst_pane_g5_ParamLimits

0x7c49,	// (0x0009673d) linegrid_cam4_burst_pane_g5

0x7c5a,	// (0x0009674e) linegrid_cam4_burst_pane_g6_ParamLimits

0x7c5a,	// (0x0009674e) linegrid_cam4_burst_pane_g6

0xba9e,	// (0x0009a592) linegrid_cam4_burst_pane_g7_ParamLimits

0xba9e,	// (0x0009a592) linegrid_cam4_burst_pane_g7

0x7c71,	// (0x00096765) cell_cam4_burst_pane_g1

0xbab7,	// (0x0009a5ab) main_cam5_pane_t1_ParamLimits

0xbab7,	// (0x0009a5ab) main_cam5_pane_t1

0xbac9,	// (0x0009a5bd) main_cam5_pane_t2_ParamLimits

0xbac9,	// (0x0009a5bd) main_cam5_pane_t2

0xbadb,	// (0x0009a5cf) main_cam5_pane_t3_ParamLimits

0xbadb,	// (0x0009a5cf) main_cam5_pane_t3

0xbaed,	// (0x0009a5e1) main_cam5_pane_t4_ParamLimits

0xbaed,	// (0x0009a5e1) main_cam5_pane_t4

0xbb03,	// (0x0009a5f7) main_cam5_pane_t5_ParamLimits

0xbb03,	// (0x0009a5f7) main_cam5_pane_t5

0xbb15,	// (0x0009a609) main_cam5_pane_t6_ParamLimits

0xbb15,	// (0x0009a609) main_cam5_pane_t6

0xbb29,	// (0x0009a61d) main_cam5_pane_t7_ParamLimits

0xbb29,	// (0x0009a61d) main_cam5_pane_t7

0xbb3b,	// (0x0009a62f) main_cam5_pane_t8_ParamLimits

0xbb3b,	// (0x0009a62f) main_cam5_pane_t8

0xbb57,	// (0x0009a64b) main_cam5_pane_t9_ParamLimits

0xbb57,	// (0x0009a64b) main_cam5_pane_t9

0xbb69,	// (0x0009a65d) main_cam5_pane_t10_ParamLimits

0xbb69,	// (0x0009a65d) main_cam5_pane_t10

0xbb7b,	// (0x0009a66f) main_cam5_pane_t11_ParamLimits

0xbb7b,	// (0x0009a66f) main_cam5_pane_t11

0xbb8d,	// (0x0009a681) main_cam5_pane_t12_ParamLimits

0xbb8d,	// (0x0009a681) main_cam5_pane_t12

0xbba2,	// (0x0009a696) main_cam5_pane_t13_ParamLimits

0xbba2,	// (0x0009a696) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0009e548) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0009e548) main_cam5_pane_t

0x0da3,	// (0x0008f897) popup_scut_keymap_window_ParamLimits

0x0da3,	// (0x0008f897) popup_scut_keymap_window

0x7c86,	// (0x0009677a) aid_size_cell_brow_shortcut

0xec64,	// (0x0009d758) bg_popup_window_pane_cp010

0x7c92,	// (0x00096786) grid_scut_pane

0x7c9e,	// (0x00096792) cell_scut_pane_ParamLimits

0x7c9e,	// (0x00096792) cell_scut_pane

0x7cb5,	// (0x000967a9) cell_scut_pane_g1

0xbbbf,	// (0x0009a6b3) cell_scut_pane_t1

0xbbce,	// (0x0009a6c2) cell_scut_pane_t2

0x7cbe,	// (0x000967b2) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0009e563) cell_scut_pane_t

0x5967,	// (0x0009445b) main_mup3_pane_g8_ParamLimits

0x5967,	// (0x0009445b) main_mup3_pane_g8

0x6e7a,	// (0x0009596e) area_vitu2_query_pane_ParamLimits

0x6e7a,	// (0x0009596e) area_vitu2_query_pane

0x79fb,	// (0x000964ef) input_focus_pane_cp08

0xbbdd,	// (0x0009a6d1) area_vitu2_query_pane_g1

0x7ccc,	// (0x000967c0) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0009e56a) area_vitu2_query_pane_g

0x7cdd,	// (0x000967d1) area_vitu2_query_pane_t1_ParamLimits

0x7cdd,	// (0x000967d1) area_vitu2_query_pane_t1

0x7cf1,	// (0x000967e5) area_vitu2_query_pane_t2_ParamLimits

0x7cf1,	// (0x000967e5) area_vitu2_query_pane_t2

0x7d05,	// (0x000967f9) area_vitu2_query_pane_t3_ParamLimits

0x7d05,	// (0x000967f9) area_vitu2_query_pane_t3

0xbbe9,	// (0x0009a6dd) area_vitu2_query_pane_t4_ParamLimits

0xbbe9,	// (0x0009a6dd) area_vitu2_query_pane_t4

0xbc11,	// (0x0009a705) area_vitu2_query_pane_t5_ParamLimits

0xbc11,	// (0x0009a705) area_vitu2_query_pane_t5

0xbc39,	// (0x0009a72d) area_vitu2_query_pane_t6_ParamLimits

0xbc39,	// (0x0009a72d) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0009e56f) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0009e56f) area_vitu2_query_pane_t

0x7d2d,	// (0x00096821) bg_button_pane_cp018

0x7d3b,	// (0x0009682f) bg_button_pane_cp021

0x7d47,	// (0x0009683b) bg_button_pane_cp022

0x7d58,	// (0x0009684c) input_focus_pane_cp09

0x2c8a,	// (0x0009177e) aid_size_touch_mv_arrow_left

0x2cb3,	// (0x000917a7) aid_size_touch_mv_arrow_right

0x74f2,	// (0x00095fe6) main_cset_slider_pane_g16_ParamLimits

0x74f2,	// (0x00095fe6) main_cset_slider_pane_g16

0x74fe,	// (0x00095ff2) main_cset_slider_pane_g17_ParamLimits

0x74fe,	// (0x00095ff2) main_cset_slider_pane_g17

0x7c71,	// (0x00096765) cell_cam4_burst_pane_g1_ParamLimits

0xedc5,	// (0x0009d8b9) compa_mode_pane

0x770c,	// (0x00096200) popup_vtel_slider_window_g3_ParamLimits

0x770c,	// (0x00096200) popup_vtel_slider_window_g3

0x7723,	// (0x00096217) popup_vtel_slider_window_g4_ParamLimits

0x7723,	// (0x00096217) popup_vtel_slider_window_g4

0x773a,	// (0x0009622e) popup_vtel_slider_window_t1_ParamLimits

0x773a,	// (0x0009622e) popup_vtel_slider_window_t1

0xedc5,	// (0x0009d8b9) main_cl_pane

0xa60d,	// (0x00099101) popup_imed_adjust2_window_ParamLimits

0xa5e5,	// (0x000990d9) bg_tb_trans_pane_cp05_ParamLimits

0xb02b,	// (0x00099b1f) popup_imed_adjust2_window_g1_ParamLimits

0xb03a,	// (0x00099b2e) popup_imed_adjust2_window_g2_ParamLimits

0xb03a,	// (0x00099b2e) popup_imed_adjust2_window_g2

0xb046,	// (0x00099b3a) popup_imed_adjust2_window_g3_ParamLimits

0xb046,	// (0x00099b3a) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0009e2e6) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0009e2e6) popup_imed_adjust2_window_g

0xb052,	// (0x00099b46) popup_imed_adjust2_window_t1_ParamLimits

0xb06a,	// (0x00099b5e) slider_imed_adjust_pane_ParamLimits

0xb07e,	// (0x00099b72) slider_imed_adjust_pane_g1_ParamLimits

0xb08e,	// (0x00099b82) slider_imed_adjust_pane_g2_ParamLimits

0xb09e,	// (0x00099b92) slider_imed_adjust_pane_g3_ParamLimits

0xb0af,	// (0x00099ba3) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0009e2ed) slider_imed_adjust_pane_g_ParamLimits

0x6b95,	// (0x00095689) aid_touch_area_cam4_ParamLimits

0x6b95,	// (0x00095689) aid_touch_area_cam4

0xd9e8,	// (0x0009c4dc) battery_pane_cp01

0x6c65,	// (0x00095759) main_camera4_pane_g6_ParamLimits

0x6c65,	// (0x00095759) main_camera4_pane_g6

0x6c8f,	// (0x00095783) main_camera4_pane_t2_ParamLimits

0x6c8f,	// (0x00095783) main_camera4_pane_t2

0x0001,

0xf8f7,	// (0x0009e3eb) main_camera4_pane_t_ParamLimits

0xf8f7,	// (0x0009e3eb) main_camera4_pane_t

0x6cc4,	// (0x000957b8) aid_touch_area_vid4_ParamLimits

0x6cc4,	// (0x000957b8) aid_touch_area_vid4

0x6d2b,	// (0x0009581f) main_video4_pane_g5_ParamLimits

0x6d2b,	// (0x0009581f) main_video4_pane_g5

0x6d56,	// (0x0009584a) vid4_progress_pane_ParamLimits

0x6d56,	// (0x0009584a) vid4_progress_pane

0xb8b5,	// (0x0009a3a9) main_cset_slider_pane_g18_ParamLimits

0xb8b5,	// (0x0009a3a9) main_cset_slider_pane_g18

0xbaab,	// (0x0009a59f) cell_cam4_burst_pane_g2_ParamLimits

0xbaab,	// (0x0009a59f) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0009e543) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0009e543) cell_cam4_burst_pane_g

0xe1da,	// (0x0009ccce) bg_cl_pane_ParamLimits

0xe1da,	// (0x0009ccce) bg_cl_pane

0x7d69,	// (0x0009685d) cl_header_pane_ParamLimits

0x7d69,	// (0x0009685d) cl_header_pane

0x7d7d,	// (0x00096871) cl_listscroll_pane_ParamLimits

0x7d7d,	// (0x00096871) cl_listscroll_pane

0xbc85,	// (0x0009a779) bg_cl_pane_g1

0xbc8d,	// (0x0009a781) bg_cl_pane_g2

0xbc95,	// (0x0009a789) bg_cl_pane_g3

0xbc9d,	// (0x0009a791) bg_cl_pane_g4

0xbca5,	// (0x0009a799) bg_cl_pane_g5

0xbcad,	// (0x0009a7a1) bg_cl_pane_g6

0xbcb5,	// (0x0009a7a9) bg_cl_pane_g7

0xbcbd,	// (0x0009a7b1) bg_cl_pane_g8

0xbcc5,	// (0x0009a7b9) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0009e57e) bg_cl_pane_g

0x7d8d,	// (0x00096881) aid_height_cl_leading_ParamLimits

0x7d8d,	// (0x00096881) aid_height_cl_leading

0x7d99,	// (0x0009688d) aid_height_cl_text_ParamLimits

0x7d99,	// (0x0009688d) aid_height_cl_text

0xee3d,	// (0x0009d931) bg_cl_header_pane_ParamLimits

0xee3d,	// (0x0009d931) bg_cl_header_pane

0x7db8,	// (0x000968ac) cl_header_pane_g1_ParamLimits

0x7db8,	// (0x000968ac) cl_header_pane_g1

0x7dce,	// (0x000968c2) cl_header_pane_t1_ParamLimits

0x7dce,	// (0x000968c2) cl_header_pane_t1

0xbccd,	// (0x0009a7c1) cl_list_pane

0xb888,	// (0x0009a37c) hc_scroll_pane_cp01

0xe5cc,	// (0x0009d0c0) bg_cl_header_pane_g1

0xb76e,	// (0x0009a262) bg_cl_header_pane_g2

0xe5ec,	// (0x0009d0e0) bg_cl_header_pane_g3

0xb77e,	// (0x0009a272) bg_cl_header_pane_g4

0xb776,	// (0x0009a26a) bg_cl_header_pane_g5

0xb9a0,	// (0x0009a494) bg_cl_header_pane_g6

0xb796,	// (0x0009a28a) bg_cl_header_pane_g7

0xb79e,	// (0x0009a292) bg_cl_header_pane_g8

0xb78e,	// (0x0009a282) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0009e591) bg_cl_header_pane_g

0x7de7,	// (0x000968db) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7de7,	// (0x000968db) hc_cl_list_double_graphic_heading_pane

0x7dfb,	// (0x000968ef) hc_cl_list_single_graphic_pane_ParamLimits

0x7dfb,	// (0x000968ef) hc_cl_list_single_graphic_pane

0x7e15,	// (0x00096909) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7e15,	// (0x00096909) hc_cl_list_single_graphic_pane_g1

0x7e21,	// (0x00096915) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7e21,	// (0x00096915) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0009e5a4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0009e5a4) hc_cl_list_single_graphic_pane_g

0x7e35,	// (0x00096929) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7e35,	// (0x00096929) hc_cl_list_single_graphic_pane_t1

0x7e15,	// (0x00096909) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7e15,	// (0x00096909) hc_cl_list_double_graphic_heading_pane_g1

0x7e4a,	// (0x0009693e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7e4a,	// (0x0009693e) hc_cl_list_double_graphic_heading_pane_g2

0x7e5e,	// (0x00096952) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7e5e,	// (0x00096952) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0009e5a9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0009e5a9) hc_cl_list_double_graphic_heading_pane_g

0x7e72,	// (0x00096966) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7e72,	// (0x00096966) hc_cl_list_double_graphic_heading_pane_t1

0x7e87,	// (0x0009697b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7e87,	// (0x0009697b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0009e5b0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0009e5b0) hc_cl_list_double_graphic_heading_pane_t

0xdb16,	// (0x0009c60a) vid4_progress_pane_g1

0xdb26,	// (0x0009c61a) vid4_progress_pane_g2

0xe80d,	// (0x0009d301) vid4_progress_pane_g3

0xda2b,	// (0x0009c51f) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0009e5b5) vid4_progress_pane_g

0xdb36,	// (0x0009c62a) vid4_progress_pane_t1

0xdb4b,	// (0x0009c63f) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0009e5c0) vid4_progress_pane_t

0xdb76,	// (0x0009c66a) wait_bar_pane_cp07

0xa8de,	// (0x000993d2) blid_firmament_pane_ParamLimits

0xa921,	// (0x00099415) popup_blid_sat_info2_window_g1

0xa945,	// (0x00099439) popup_blid_sat_info2_window_t3

0xa953,	// (0x00099447) popup_blid_sat_info2_window_t4

0xa961,	// (0x00099455) popup_blid_sat_info2_window_t5

0xa96f,	// (0x00099463) popup_blid_sat_info2_window_t6

0xa97f,	// (0x00099473) popup_blid_sat_info2_window_t7

0xa98d,	// (0x00099481) popup_blid_sat_info2_window_t8

0xa99b,	// (0x0009948f) popup_blid_sat_info2_window_t9

0xa9a9,	// (0x0009949d) popup_blid_sat_info2_window_t10

0xaa6d,	// (0x00099561) aid_firma_cardinal_ParamLimits

0xaa81,	// (0x00099575) blid_firmament_pane_t1_ParamLimits

0xaa98,	// (0x0009958c) blid_firmament_pane_t2_ParamLimits

0xaaaf,	// (0x000995a3) blid_firmament_pane_t3_ParamLimits

0xaac6,	// (0x000995ba) blid_firmament_pane_t4_ParamLimits

0xf6eb,	// (0x0009e1df) blid_firmament_pane_t_ParamLimits

0xaadd,	// (0x000995d1) blid_sat_info_pane_ParamLimits

0xee3d,	// (0x0009d931) main_cam_set_pane_ParamLimits

0x6225,	// (0x00094d19) aid_size_cell_colour_35_ParamLimits

0x6245,	// (0x00094d39) aid_size_cell_colour_112_ParamLimits

0x6265,	// (0x00094d59) aid_size_cell_effect_ParamLimits

0xa5e5,	// (0x000990d9) bg_tb_trans_pane_cp02_ParamLimits

0xe794,	// (0x0009d288) heading_imed_pane_ParamLimits

0x6285,	// (0x00094d79) listscroll_imed_pane_ParamLimits

0x3f55,	// (0x00092a49) popup_call2_audio_first_window_g5_ParamLimits

0x3f55,	// (0x00092a49) popup_call2_audio_first_window_g5

0x683c,	// (0x00095330) aid_size_touch_image3_arrow_left_ParamLimits

0x683c,	// (0x00095330) aid_size_touch_image3_arrow_left

0x6868,	// (0x0009535c) aid_size_touch_image3_arrow_right_ParamLimits

0x6868,	// (0x0009535c) aid_size_touch_image3_arrow_right

0xdb61,	// (0x0009c655) vid4_progress_pane_t3

0x65a8,	// (0x0009509c) main_hwr_training_symbol_option_pane_ParamLimits

0x65a8,	// (0x0009509c) main_hwr_training_symbol_option_pane

0xb318,	// (0x00099e0c) popup_hwr_training_preview_window_ParamLimits

0xb318,	// (0x00099e0c) popup_hwr_training_preview_window

0x65c8,	// (0x000950bc) hwr_training_navi_pane_g5_ParamLimits

0x65c8,	// (0x000950bc) hwr_training_navi_pane_g5

0xb75c,	// (0x0009a250) popup_char_count_window

0xda81,	// (0x0009c575) bg_popup_sub_pane_cp20_ParamLimits

0x7852,	// (0x00096346) list_vitu2_match_list_pane_ParamLimits

0x7861,	// (0x00096355) vitu2_page_scroll_pane_ParamLimits

0x7861,	// (0x00096355) vitu2_page_scroll_pane

0xbd30,	// (0x0009a824) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbd30,	// (0x0009a824) list_single_hwr_training_symbol_option_pane

0xbd43,	// (0x0009a837) list_single_hwr_training_symbol_option_pane_g1

0xbd4b,	// (0x0009a83f) list_single_hwr_training_symbol_option_pane_t1

0xbd59,	// (0x0009a84d) bg_button_pane_cp023

0xbd62,	// (0x0009a856) bg_button_pane_cp024

0x7e9c,	// (0x00096990) vitu2_page_scroll_pane_g1

0x7ea4,	// (0x00096998) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0009e5c7) vitu2_page_scroll_pane_g

0x7eac,	// (0x000969a0) vitu2_page_scroll_pane_t1

0xa7fa,	// (0x000992ee) popup_char_count_window_g1

0xbd95,	// (0x0009a889) popup_char_count_window_g2

0xbd9e,	// (0x0009a892) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0009e5cc) popup_char_count_window_g

0xbda7,	// (0x0009a89b) popup_char_count_window_t1

0xedc5,	// (0x0009d8b9) main_vded2_pane

0xb017,	// (0x00099b0b) aid_size_cell_imed_line

0xb021,	// (0x00099b15) grid_imed_line_width_pane

0x6dc6,	// (0x000958ba) vid4_indicators_pane_g4

0xbdb5,	// (0x0009a8a9) cell_imed_line_width_pane_ParamLimits

0xbdb5,	// (0x0009a8a9) cell_imed_line_width_pane

0xbdc9,	// (0x0009a8bd) cell_imed_line_width_pane_g1

0xa88c,	// (0x00099380) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0009e5d3) cell_imed_line_width_pane_g

0x7ebb,	// (0x000969af) main_vded2_pane_g1_ParamLimits

0x7ebb,	// (0x000969af) main_vded2_pane_g1

0x7ed3,	// (0x000969c7) main_vded2_pane_g2_ParamLimits

0x7ed3,	// (0x000969c7) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0009e5d8) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0009e5d8) main_vded2_pane_g

0x7ee5,	// (0x000969d9) vded2_slider_pane_ParamLimits

0x7ee5,	// (0x000969d9) vded2_slider_pane

0x7ef5,	// (0x000969e9) aid_size_touch_vded2_end

0x7eff,	// (0x000969f3) aid_size_touch_vded2_playhead

0xbdd2,	// (0x0009a8c6) aid_size_touch_vded2_start

0xbdda,	// (0x0009a8ce) vded2_slider_bg_pane

0xbde3,	// (0x0009a8d7) vded2_slider_pane_g1

0xbdec,	// (0x0009a8e0) vded2_slider_pane_g2

0x7f09,	// (0x000969fd) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0009e5dd) vded2_slider_pane_g

0xbdf4,	// (0x0009a8e8) vded2_slider_bg_pane_g1

0xbdfd,	// (0x0009a8f1) vded2_slider_bg_pane_g2

0xbe06,	// (0x0009a8fa) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0009e5e4) vded2_slider_bg_pane_g

0x3358,	// (0x00091e4c) aid_postcard_touch_down_pane_ParamLimits

0x3358,	// (0x00091e4c) aid_postcard_touch_down_pane

0x336e,	// (0x00091e62) aid_postcard_touch_up_pane_ParamLimits

0x336e,	// (0x00091e62) aid_postcard_touch_up_pane

0xedc5,	// (0x0009d8b9) main_blid2_pane

0xa5f3,	// (0x000990e7) popup_blid2_search_window

0xedc5,	// (0x0009d8b9) blid2_gps_pane

0xedc5,	// (0x0009d8b9) blid2_navig_pane

0xedc5,	// (0x0009d8b9) blid2_search_pane

0xedc5,	// (0x0009d8b9) blid2_tripm_pane

0x7f14,	// (0x00096a08) blid2_search_pane_g1_ParamLimits

0x7f14,	// (0x00096a08) blid2_search_pane_g1

0x7f2c,	// (0x00096a20) blid2_search_pane_t1_ParamLimits

0x7f2c,	// (0x00096a20) blid2_search_pane_t1

0x7f3e,	// (0x00096a32) aid_size_cell_blid2_gps_ParamLimits

0x7f3e,	// (0x00096a32) aid_size_cell_blid2_gps

0x7f56,	// (0x00096a4a) blid2_gps_pane_g1_ParamLimits

0x7f56,	// (0x00096a4a) blid2_gps_pane_g1

0x7f6a,	// (0x00096a5e) grid_blid2_satellite_pane_ParamLimits

0x7f6a,	// (0x00096a5e) grid_blid2_satellite_pane

0x7f84,	// (0x00096a78) blid2_navig_pane_g1_ParamLimits

0x7f84,	// (0x00096a78) blid2_navig_pane_g1

0x7f90,	// (0x00096a84) blid2_navig_pane_t1_ParamLimits

0x7f90,	// (0x00096a84) blid2_navig_pane_t1

0x7fab,	// (0x00096a9f) blid2_navig_pane_t2_ParamLimits

0x7fab,	// (0x00096a9f) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0009e5eb) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0009e5eb) blid2_navig_pane_t

0x7fc6,	// (0x00096aba) blid2_navig_ring_pane_ParamLimits

0x7fc6,	// (0x00096aba) blid2_navig_ring_pane

0x7fdf,	// (0x00096ad3) blid2_speed_pane_ParamLimits

0x7fdf,	// (0x00096ad3) blid2_speed_pane

0x7feb,	// (0x00096adf) blid2_tripm_pane_g1_ParamLimits

0x7feb,	// (0x00096adf) blid2_tripm_pane_g1

0x8006,	// (0x00096afa) blid2_tripm_pane_g2_ParamLimits

0x8006,	// (0x00096afa) blid2_tripm_pane_g2

0x801a,	// (0x00096b0e) blid2_tripm_pane_g3_ParamLimits

0x801a,	// (0x00096b0e) blid2_tripm_pane_g3

0x802e,	// (0x00096b22) blid2_tripm_pane_g4_ParamLimits

0x802e,	// (0x00096b22) blid2_tripm_pane_g4

0x8042,	// (0x00096b36) blid2_tripm_pane_g5_ParamLimits

0x8042,	// (0x00096b36) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0009e5f0) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0009e5f0) blid2_tripm_pane_g

0x8068,	// (0x00096b5c) blid2_tripm_pane_t1_ParamLimits

0x8068,	// (0x00096b5c) blid2_tripm_pane_t1

0x8083,	// (0x00096b77) blid2_tripm_pane_t2_ParamLimits

0x8083,	// (0x00096b77) blid2_tripm_pane_t2

0x809e,	// (0x00096b92) blid2_tripm_pane_t3_ParamLimits

0x809e,	// (0x00096b92) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0009e5fd) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0009e5fd) blid2_tripm_pane_t

0x80e5,	// (0x00096bd9) cell_blid2_satellite_pane_ParamLimits

0x80e5,	// (0x00096bd9) cell_blid2_satellite_pane

0x8103,	// (0x00096bf7) cell_blid2_satellite_pane_g1

0xbe0f,	// (0x0009a903) cell_blid2_satellite_pane_t1

0xaaed,	// (0x000995e1) blid2_speed_pane_g1

0xbe1d,	// (0x0009a911) blid2_speed_pane_t1

0xbe2b,	// (0x0009a91f) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0009e606) blid2_speed_pane_t

0xaaed,	// (0x000995e1) blid2_navig_ring_pane_g1

0x810c,	// (0x00096c00) blid2_navig_ring_pane_g2

0x8114,	// (0x00096c08) blid2_navig_ring_pane_g3

0x811c,	// (0x00096c10) blid2_navig_ring_pane_g4

0x8124,	// (0x00096c18) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0009e60b) blid2_navig_ring_pane_g

0xedc5,	// (0x0009d8b9) bg_popup_window_pane_cp011

0xbe39,	// (0x0009a92d) popup_blid2_search_window_g1

0xbe41,	// (0x0009a935) popup_blid2_search_window_t1

0xbe4f,	// (0x0009a943) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0009e616) popup_blid2_search_window_t

0xe4db,	// (0x0009cfcf) main_browser_pane_g1

0xe1da,	// (0x0009ccce) main_browser_pane_ParamLimits

0xda81,	// (0x0009c575) bg_button_pane_cp011_ParamLimits

0x70ce,	// (0x00095bc2) cell_vitu2_function_pane_g1_ParamLimits

0xa5e5,	// (0x000990d9) bg_popup_sub_pane_cp22_ParamLimits

0x79fb,	// (0x000964ef) input_focus_pane_cp08_ParamLimits

0x7a12,	// (0x00096506) popup_vitu2_query_button_pane_ParamLimits

0x7a12,	// (0x00096506) popup_vitu2_query_button_pane

0x7a23,	// (0x00096517) popup_vitu2_query_input_button_pane

0xb9f5,	// (0x0009a4e9) popup_vitu2_query_window_g1_ParamLimits

0x7a2d,	// (0x00096521) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0009e517) popup_vitu2_query_window_g_ParamLimits

0xedc5,	// (0x0009d8b9) bg_button_pane_cp026

0x812c,	// (0x00096c20) popup_vitu2_query_input_button_pane_g1

0xedc5,	// (0x0009d8b9) bg_button_pane_cp025

0xbe5d,	// (0x0009a951) popup_vitu2_query_button_pane_t1

0x5631,	// (0x00094125) main_mp3_pane_t6

0x563f,	// (0x00094133) popup_slider_window_cp01

0xda12,	// (0x0009c506) cam4_battery_pane

0xda79,	// (0x0009c56d) cam4_battery_pane_cp02

0xdb0e,	// (0x0009c602) cam4_battery_pane_cp01

0xdb0e,	// (0x0009c602) cam4_battery_pane_cp03

0xb5e5,	// (0x0009a0d9) cam4_battery_pane_g1

0xaaed,	// (0x000995e1) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0009e61b) cam4_battery_pane_g

0xa9b7,	// (0x000994ab) popup_blid_sat_info2_window_t11

0x2c8a,	// (0x0009177e) aid_size_touch_mv_arrow_left_ParamLimits

0x2cb3,	// (0x000917a7) aid_size_touch_mv_arrow_right_ParamLimits

0xebc4,	// (0x0009d6b8) navi_pane_g1_ParamLimits

0x2cf2,	// (0x000917e6) navi_pane_g2_ParamLimits

0x2d20,	// (0x00091814) navi_pane_g3_ParamLimits

0xf404,	// (0x0009def8) navi_pane_g_ParamLimits

0x2d78,	// (0x0009186c) navi_pane_mv_t1_ParamLimits

0x6291,	// (0x00094d85) grid_imed_effect_pane_ParamLimits

0x1ae3,	// (0x000905d7) aid_placing_vt_slider_lsc

0xe42a,	// (0x0009cf1e) aid_placing_vt_slider_prt

0xee3d,	// (0x0009d931) bg_tb_trans_pane_cp01_ParamLimits

0xac74,	// (0x00099768) popup_image_details_window_g1_ParamLimits

0xac87,	// (0x0009977b) popup_image_details_window_g2_ParamLimits

0xac9c,	// (0x00099790) popup_image_details_window_g3_ParamLimits

0xac9c,	// (0x00099790) popup_image_details_window_g3

0xf730,	// (0x0009e224) popup_image_details_window_g_ParamLimits

0xacb0,	// (0x000997a4) popup_image_details_window_t1_ParamLimits

0xacc2,	// (0x000997b6) popup_image_details_window_t2_ParamLimits

0xacdb,	// (0x000997cf) popup_image_details_window_t3_ParamLimits

0xacef,	// (0x000997e3) popup_image_details_window_t4_ParamLimits

0xad0a,	// (0x000997fe) popup_image_details_window_t5_ParamLimits

0xf737,	// (0x0009e22b) popup_image_details_window_t_ParamLimits

0x7da5,	// (0x00096899) cl_header_name_pane_ParamLimits

0x7da5,	// (0x00096899) cl_header_name_pane

0x8134,	// (0x00096c28) cl_header_name_pane_t1_ParamLimits

0x8134,	// (0x00096c28) cl_header_name_pane_t1

0x8155,	// (0x00096c49) cl_header_name_pane_t2_ParamLimits

0x8155,	// (0x00096c49) cl_header_name_pane_t2

0x8197,	// (0x00096c8b) cl_header_name_pane_t3_ParamLimits

0x8197,	// (0x00096c8b) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0009e620) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0009e620) cl_header_name_pane_t

0x2d49,	// (0x0009183d) navi_pane_mv_g2_ParamLimits

0xb719,	// (0x0009a20d) field_vitu2_entry_pane_g1_ParamLimits

0xb725,	// (0x0009a219) field_vitu2_entry_pane_g2_ParamLimits

0xb731,	// (0x0009a225) field_vitu2_entry_pane_g3_ParamLimits

0xb731,	// (0x0009a225) field_vitu2_entry_pane_g3

0xf929,	// (0x0009e41d) field_vitu2_entry_pane_g_ParamLimits

0x704a,	// (0x00095b3e) cell_vitu2_itu_pane_g1_ParamLimits

0x705a,	// (0x00095b4e) cell_vitu2_itu_pane_g2_ParamLimits

0x705a,	// (0x00095b4e) cell_vitu2_itu_pane_g2

0x0001,

0xf935,	// (0x0009e429) cell_vitu2_itu_pane_g_ParamLimits

0xf935,	// (0x0009e429) cell_vitu2_itu_pane_g

0xda81,	// (0x0009c575) bg_vkb2_func_pane_cp05_ParamLimits

0xda81,	// (0x0009c575) bg_vkb2_func_pane_cp05

0xda81,	// (0x0009c575) bg_vkb2_func_pane_cp03

0xda81,	// (0x0009c575) bg_vkb2_func_pane_cp04

0xda81,	// (0x0009c575) bg_vkb2_func_pane_cp10_ParamLimits

0xda81,	// (0x0009c575) bg_vkb2_func_pane_cp10

0x7d47,	// (0x0009683b) bg_vkb2_func_pane_cp08

0x7d2d,	// (0x00096821) bg_vkb2_func_pane_cp06

0x7d3b,	// (0x0009682f) bg_vkb2_func_pane_cp07

0xbd6b,	// (0x0009a85f) bg_vkb2_func_pane_cp11_ParamLimits

0xbd6b,	// (0x0009a85f) bg_vkb2_func_pane_cp11

0xbd80,	// (0x0009a874) bg_vkb2_func_pane_cp12_ParamLimits

0xbd80,	// (0x0009a874) bg_vkb2_func_pane_cp12

0xedc5,	// (0x0009d8b9) bg_vkb2_func_pane_cp09

0xb76e,	// (0x0009a262) bg_vkb2_func_pane_g1

0xe5ec,	// (0x0009d0e0) bg_vkb2_func_pane_g2

0xb776,	// (0x0009a26a) bg_vkb2_func_pane_g3

0xb77e,	// (0x0009a272) bg_vkb2_func_pane_g4

0xb9a0,	// (0x0009a494) bg_vkb2_func_pane_g5

0xb796,	// (0x0009a28a) bg_vkb2_func_pane_g6

0xb79e,	// (0x0009a292) bg_vkb2_func_pane_g7

0xb78e,	// (0x0009a282) bg_vkb2_func_pane_g8

0xe5cc,	// (0x0009d0c0) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0009e627) bg_vkb2_func_pane_g

0x8056,	// (0x00096b4a) blid2_tripm_pane_g6_ParamLimits

0x8056,	// (0x00096b4a) blid2_tripm_pane_g6

0xb59f,	// (0x0009a093) mp4_progress_pane_g1

0x80d1,	// (0x00096bc5) blid2_tripm_values_pane_ParamLimits

0x80d1,	// (0x00096bc5) blid2_tripm_values_pane

0x81c8,	// (0x00096cbc) blid2_tripm_values_pane_t1

0x81d6,	// (0x00096cca) blid2_tripm_values_pane_t2

0x81e4,	// (0x00096cd8) blid2_tripm_values_pane_t3

0x81f2,	// (0x00096ce6) blid2_tripm_values_pane_t4

0x8200,	// (0x00096cf4) blid2_tripm_values_pane_t5

0x820e,	// (0x00096d02) blid2_tripm_values_pane_t6

0x821c,	// (0x00096d10) blid2_tripm_values_pane_t7

0x822a,	// (0x00096d1e) blid2_tripm_values_pane_t8

0x8238,	// (0x00096d2c) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0009e63a) blid2_tripm_values_pane_t

0x1b25,	// (0x00090619) call_video_pane_t1_ParamLimits

0x1b43,	// (0x00090637) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0009dd81) call_video_pane_t_ParamLimits

0x325b,	// (0x00091d4f) msg_header_pane_g1_ParamLimits

0xee71,	// (0x0009d965) msg_header_pane_g2_ParamLimits

0xee71,	// (0x0009d965) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0009df9b) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0009df9b) msg_header_pane_g

0xe1da,	// (0x0009ccce) main_clock2_pane_ParamLimits

0x5f9a,	// (0x00094a8e) grid_clock2_toolbar_pane_ParamLimits

0x5f9a,	// (0x00094a8e) grid_clock2_toolbar_pane

0x5f9a,	// (0x00094a8e) listscroll_clock2_pane_ParamLimits

0x5f9a,	// (0x00094a8e) listscroll_clock2_pane

0x6082,	// (0x00094b76) main_clock2_pane_t3_ParamLimits

0x6082,	// (0x00094b76) main_clock2_pane_t3

0x60a5,	// (0x00094b99) main_clock2_pane_t4_ParamLimits

0x60a5,	// (0x00094b99) main_clock2_pane_t4

0xbe6b,	// (0x0009a95f) cell_clock2_toolbar_pane

0xbe73,	// (0x0009a967) cell_clock2_toolbar_pane_cp01

0xbe73,	// (0x0009a967) cell_clock2_toolbar_pane_cp02

0xbe7b,	// (0x0009a96f) cell_clock2_toolbar_pane_cp03

0xbe83,	// (0x0009a977) list_clock2_pane

0xeb17,	// (0x0009d60b) scroll_pane_cp10

0xbe8b,	// (0x0009a97f) list_single_clock2_pane_ParamLimits

0xbe8b,	// (0x0009a97f) list_single_clock2_pane

0xec64,	// (0x0009d758) list_highlight_pane_cp08

0xbe98,	// (0x0009a98c) list_single_clock2_pane_t1

0xbea6,	// (0x0009a99a) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0009e64d) list_single_clock2_pane_t

0xedc5,	// (0x0009d8b9) bg_button_pane_cp10

0xbeb4,	// (0x0009a9a8) cell_clock2_toolbar_pane_g1

0x32e4,	// (0x00091dd8) aid_main_viewer_pane_g1_ParamLimits

0x32e4,	// (0x00091dd8) aid_main_viewer_pane_g1

0x32f2,	// (0x00091de6) aid_main_viewer_pane_g2_ParamLimits

0x32f2,	// (0x00091de6) aid_main_viewer_pane_g2

0x3300,	// (0x00091df4) aid_main_viewer_pane_g3_ParamLimits

0x3300,	// (0x00091df4) aid_main_viewer_pane_g3

0x330f,	// (0x00091e03) aid_main_viewer_pane_g4_ParamLimits

0x330f,	// (0x00091e03) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0009dfac) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0009dfac) aid_main_viewer_pane_g

0x4858,	// (0x0009334c) main_calc_pane_ParamLimits

0x486c,	// (0x00093360) main_dialer2_pane_ParamLimits

0xedc5,	// (0x0009d8b9) main_cam6_pane

0xedc5,	// (0x0009d8b9) main_vid6_pane

0x5fa6,	// (0x00094a9a) listscroll_gen_pane_cp06_ParamLimits

0x5fa6,	// (0x00094a9a) listscroll_gen_pane_cp06

0x60c8,	// (0x00094bbc) main_clock2_pane_t5_ParamLimits

0x60c8,	// (0x00094bbc) main_clock2_pane_t5

0x6128,	// (0x00094c1c) aid_call2_pane_cp10_ParamLimits

0x613a,	// (0x00094c2e) aid_call_pane_cp10_ParamLimits

0xeb99,	// (0x0009d68d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeb99,	// (0x0009d68d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x614c,	// (0x00094c40) popup_clock_analogue_window_cp10_g3_ParamLimits

0x614c,	// (0x00094c40) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeb99,	// (0x0009d68d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0009e2db) popup_clock_analogue_window_cp10_g_ParamLimits

0x615e,	// (0x00094c52) popup_clock_analogue_window_cp10_t1_ParamLimits

0x67e9,	// (0x000952dd) cell_dialer2_keypad_pane_g2_ParamLimits

0x67e9,	// (0x000952dd) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c8,	// (0x0009e3bc) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c8,	// (0x0009e3bc) cell_dialer2_keypad_pane_g

0x6805,	// (0x000952f9) cell_dialer2_keypad_pane_t1

0x73e5,	// (0x00095ed9) main_cset_text2_pane_ParamLimits

0x73e5,	// (0x00095ed9) main_cset_text2_pane

0xbbdd,	// (0x0009a6d1) area_vitu2_query_pane_g1_ParamLimits

0x7ccc,	// (0x000967c0) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0009e56a) area_vitu2_query_pane_g_ParamLimits

0xbc61,	// (0x0009a755) area_vitu2_query_pane_t7_ParamLimits

0xbc61,	// (0x0009a755) area_vitu2_query_pane_t7

0x7d2d,	// (0x00096821) bg_button_pane_cp018_ParamLimits

0x7d3b,	// (0x0009682f) bg_button_pane_cp021_ParamLimits

0x7d47,	// (0x0009683b) bg_button_pane_cp022_ParamLimits

0x7d47,	// (0x0009683b) bg_vkb2_func_pane_cp08_ParamLimits

0x7d2d,	// (0x00096821) bg_vkb2_func_pane_cp06_ParamLimits

0x7d3b,	// (0x0009682f) bg_vkb2_func_pane_cp07_ParamLimits

0x7d58,	// (0x0009684c) input_focus_pane_cp09_ParamLimits

0xdb86,	// (0x0009c67a) cam6_autofocus_pane_ParamLimits

0xdb86,	// (0x0009c67a) cam6_autofocus_pane

0x8246,	// (0x00096d3a) cam6_image_uncrop_pane_ParamLimits

0x8246,	// (0x00096d3a) cam6_image_uncrop_pane

0x8255,	// (0x00096d49) cam6_indi_pane_ParamLimits

0x8255,	// (0x00096d49) cam6_indi_pane

0x826b,	// (0x00096d5f) cam6_mode_pane_ParamLimits

0x826b,	// (0x00096d5f) cam6_mode_pane

0x827d,	// (0x00096d71) cam6_timer_pane_ParamLimits

0x827d,	// (0x00096d71) cam6_timer_pane

0x8289,	// (0x00096d7d) cam6_zoom_pane_ParamLimits

0x8289,	// (0x00096d7d) cam6_zoom_pane

0x8295,	// (0x00096d89) cam6_mode_pane_g1_ParamLimits

0x8295,	// (0x00096d89) cam6_mode_pane_g1

0x82a5,	// (0x00096d99) cam6_mode_pane_g2_ParamLimits

0x82a5,	// (0x00096d99) cam6_mode_pane_g2

0x82b5,	// (0x00096da9) cam6_mode_pane_g3_ParamLimits

0x82b5,	// (0x00096da9) cam6_mode_pane_g3

0x82c5,	// (0x00096db9) cam6_mode_pane_g4_ParamLimits

0x82c5,	// (0x00096db9) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0009e652) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0009e652) cam6_mode_pane_g

0xbebc,	// (0x0009a9b0) bg_tb_trans_pane_cp08_ParamLimits

0xbebc,	// (0x0009a9b0) bg_tb_trans_pane_cp08

0xbeca,	// (0x0009a9be) cam6_battery_pane_ParamLimits

0xbeca,	// (0x0009a9be) cam6_battery_pane

0xbee0,	// (0x0009a9d4) cam6_indi_pane_g1_ParamLimits

0xbee0,	// (0x0009a9d4) cam6_indi_pane_g1

0xbef2,	// (0x0009a9e6) cam6_indi_pane_g2_ParamLimits

0xbef2,	// (0x0009a9e6) cam6_indi_pane_g2

0xbf04,	// (0x0009a9f8) cam6_indi_pane_g3_ParamLimits

0xbf04,	// (0x0009a9f8) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0009e65b) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0009e65b) cam6_indi_pane_g

0xbf16,	// (0x0009aa0a) cam6_indi_pane_t1_ParamLimits

0xbf16,	// (0x0009aa0a) cam6_indi_pane_t1

0x82d5,	// (0x00096dc9) cam6_autofocus_pane_g1

0x82dd,	// (0x00096dd1) cam6_autofocus_pane_g2

0x82e5,	// (0x00096dd9) cam6_autofocus_pane_g3

0x82ed,	// (0x00096de1) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0009e662) cam6_autofocus_pane_g

0xbf3c,	// (0x0009aa30) cam6_timer_pane_g1

0xbf44,	// (0x0009aa38) cam6_timer_pane_t1

0xbf52,	// (0x0009aa46) cam6_zoom_cont_pane

0xbf5a,	// (0x0009aa4e) cam6_zoom_pane_g1

0xbf62,	// (0x0009aa56) cam6_zoom_pane_g2

0x82f5,	// (0x00096de9) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0009e66b) cam6_zoom_pane_g

0xaaed,	// (0x000995e1) cam6_battery_pane_g1

0xaaed,	// (0x000995e1) cam6_battery_pane_g2

0x0001,

0xf6f4,	// (0x0009e1e8) cam6_battery_pane_g

0xbf6a,	// (0x0009aa5e) cam6_zoom_cont_pane_g1

0xbf73,	// (0x0009aa67) cam6_zoom_cont_pane_g2

0xbf7c,	// (0x0009aa70) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0009e672) cam6_zoom_cont_pane_g

0x8312,	// (0x00096e06) cam6_mode_pane_cp_ParamLimits

0x8312,	// (0x00096e06) cam6_mode_pane_cp

0x8324,	// (0x00096e18) cam6_zoom_pane_cp_ParamLimits

0x8324,	// (0x00096e18) cam6_zoom_pane_cp

0x8330,	// (0x00096e24) vid6_image_uncrop_cif_pane_ParamLimits

0x8330,	// (0x00096e24) vid6_image_uncrop_cif_pane

0x8340,	// (0x00096e34) vid6_image_uncrop_nhd_pane_ParamLimits

0x8340,	// (0x00096e34) vid6_image_uncrop_nhd_pane

0x834f,	// (0x00096e43) vid6_image_uncrop_vga_pane_ParamLimits

0x834f,	// (0x00096e43) vid6_image_uncrop_vga_pane

0x835e,	// (0x00096e52) vid6_image_uncrop_wvga_pane_ParamLimits

0x835e,	// (0x00096e52) vid6_image_uncrop_wvga_pane

0x836d,	// (0x00096e61) vid6_indi_pane_ParamLimits

0x836d,	// (0x00096e61) vid6_indi_pane

0xbebc,	// (0x0009a9b0) bg_tb_trans_pane_cp09_ParamLimits

0xbebc,	// (0x0009a9b0) bg_tb_trans_pane_cp09

0xbf94,	// (0x0009aa88) cam6_battery_pane_cp_ParamLimits

0xbf94,	// (0x0009aa88) cam6_battery_pane_cp

0xbfa0,	// (0x0009aa94) vid6_indi_pane_g1_ParamLimits

0xbfa0,	// (0x0009aa94) vid6_indi_pane_g1

0xbfb2,	// (0x0009aaa6) vid6_indi_pane_g2_ParamLimits

0xbfb2,	// (0x0009aaa6) vid6_indi_pane_g2

0xbfc4,	// (0x0009aab8) vid6_indi_pane_g3_ParamLimits

0xbfc4,	// (0x0009aab8) vid6_indi_pane_g3

0xbfd9,	// (0x0009aacd) vid6_indi_pane_g4_ParamLimits

0xbfd9,	// (0x0009aacd) vid6_indi_pane_g4

0xbfee,	// (0x0009aae2) vid6_indi_pane_g5_ParamLimits

0xbfee,	// (0x0009aae2) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0009e679) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0009e679) vid6_indi_pane_g

0xc008,	// (0x0009aafc) vid6_indi_pane_t1_ParamLimits

0xc008,	// (0x0009aafc) vid6_indi_pane_t1

0xc01e,	// (0x0009ab12) vid6_indi_pane_t2_ParamLimits

0xc01e,	// (0x0009ab12) vid6_indi_pane_t2

0xc046,	// (0x0009ab3a) vid6_indi_pane_t3_ParamLimits

0xc046,	// (0x0009ab3a) vid6_indi_pane_t3

0xc06e,	// (0x0009ab62) vid6_indi_pane_t4_ParamLimits

0xc06e,	// (0x0009ab62) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0009e684) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0009e684) vid6_indi_pane_t

0xc092,	// (0x0009ab86) wait_bar_pane_cp08

0x8385,	// (0x00096e79) main_cset_text2_pane_t1_ParamLimits

0x8385,	// (0x00096e79) main_cset_text2_pane_t1

0x82fd,	// (0x00096df1) listscroll_gen_pane_cp06_t1_ParamLimits

0x82fd,	// (0x00096df1) listscroll_gen_pane_cp06_t1

0xedc5,	// (0x0009d8b9) main_cam6_set_pane

0xda04,	// (0x0009c4f8) bg_tb_trans_pane_cp06_ParamLimits

0xda1a,	// (0x0009c50e) cam4_indicators_pane_g1_ParamLimits

0xda2b,	// (0x0009c51f) cam4_indicators_pane_g2_ParamLimits

0xf905,	// (0x0009e3f9) cam4_indicators_pane_g_ParamLimits

0xda49,	// (0x0009c53d) cam4_indicators_pane_t1_ParamLimits

0xda6b,	// (0x0009c55f) bg_tb_trans_pane_cp07_ParamLimits

0x6d9f,	// (0x00095893) vid4_indicators_pane_g1_ParamLimits

0x6dac,	// (0x000958a0) vid4_indicators_pane_g2_ParamLimits

0x6db9,	// (0x000958ad) vid4_indicators_pane_g3_ParamLimits

0x6dc6,	// (0x000958ba) vid4_indicators_pane_g4_ParamLimits

0xf917,	// (0x0009e40b) vid4_indicators_pane_g_ParamLimits

0x6dde,	// (0x000958d2) vid4_indicators_pane_t1_ParamLimits

0xdb16,	// (0x0009c60a) vid4_progress_pane_g1_ParamLimits

0xdb26,	// (0x0009c61a) vid4_progress_pane_g2_ParamLimits

0xe80d,	// (0x0009d301) vid4_progress_pane_g3_ParamLimits

0xda2b,	// (0x0009c51f) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0009e5b5) vid4_progress_pane_g_ParamLimits

0xdb36,	// (0x0009c62a) vid4_progress_pane_t1_ParamLimits

0xdb4b,	// (0x0009c63f) vid4_progress_pane_t2_ParamLimits

0xdb61,	// (0x0009c655) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0009e5c0) vid4_progress_pane_t_ParamLimits

0xdb76,	// (0x0009c66a) wait_bar_pane_cp07_ParamLimits

0x83a5,	// (0x00096e99) main_cam6_set_pane_g2_ParamLimits

0x83a5,	// (0x00096e99) main_cam6_set_pane_g2

0x83c9,	// (0x00096ebd) main_cset6_listscroll_pane_ParamLimits

0x83c9,	// (0x00096ebd) main_cset6_listscroll_pane

0x83e5,	// (0x00096ed9) main_cset6_slider_pane_ParamLimits

0x83e5,	// (0x00096ed9) main_cset6_slider_pane

0x83fb,	// (0x00096eef) main_cset6_text2_pane_ParamLimits

0x83fb,	// (0x00096eef) main_cset6_text2_pane

0xc0a1,	// (0x0009ab95) main_cset6_text_pane

0xc0a9,	// (0x0009ab9d) main_cset_list_pane_copy1_ParamLimits

0xc0a9,	// (0x0009ab9d) main_cset_list_pane_copy1

0xc0b9,	// (0x0009abad) scroll_pane_cp028_copy1

0x8409,	// (0x00096efd) cset_list_set_pane_copy1

0x841c,	// (0x00096f10) aid_position_infowindow_above_copy1

0x8424,	// (0x00096f18) aid_position_infowindow_below_copy1

0xc0c2,	// (0x0009abb6) cset_list_set_pane_g1_copy1

0xc0ca,	// (0x0009abbe) cset_list_set_pane_g3_copy1_ParamLimits

0xc0ca,	// (0x0009abbe) cset_list_set_pane_g3_copy1

0xc0d9,	// (0x0009abcd) cset_list_set_pane_t1_copy1_ParamLimits

0xc0d9,	// (0x0009abcd) cset_list_set_pane_t1_copy1

0xee3d,	// (0x0009d931) list_highlight_pane_cp021_copy1_ParamLimits

0xee3d,	// (0x0009d931) list_highlight_pane_cp021_copy1

0xc0ee,	// (0x0009abe2) cset6_slider_pane_ParamLimits

0xc0ee,	// (0x0009abe2) cset6_slider_pane

0xc11a,	// (0x0009ac0e) main_cset6_slider_pane_g1_ParamLimits

0xc11a,	// (0x0009ac0e) main_cset6_slider_pane_g1

0x842c,	// (0x00096f20) main_cset6_slider_pane_g2_ParamLimits

0x842c,	// (0x00096f20) main_cset6_slider_pane_g2

0xb89d,	// (0x0009a391) main_cset6_slider_pane_g3_ParamLimits

0xb89d,	// (0x0009a391) main_cset6_slider_pane_g3

0x74aa,	// (0x00095f9e) main_cset6_slider_pane_g4_ParamLimits

0x74aa,	// (0x00095f9e) main_cset6_slider_pane_g4

0x74f2,	// (0x00095fe6) main_cset6_slider_pane_g5_ParamLimits

0x74f2,	// (0x00095fe6) main_cset6_slider_pane_g5

0xb89d,	// (0x0009a391) main_cset6_slider_pane_g7_ParamLimits

0xb89d,	// (0x0009a391) main_cset6_slider_pane_g7

0xb8a9,	// (0x0009a39d) main_cset6_slider_pane_g8_ParamLimits

0xb8a9,	// (0x0009a39d) main_cset6_slider_pane_g8

0x7492,	// (0x00095f86) main_cset6_slider_pane_g9_ParamLimits

0x7492,	// (0x00095f86) main_cset6_slider_pane_g9

0x749e,	// (0x00095f92) main_cset6_slider_pane_g10_ParamLimits

0x749e,	// (0x00095f92) main_cset6_slider_pane_g10

0x74aa,	// (0x00095f9e) main_cset6_slider_pane_g11_ParamLimits

0x74aa,	// (0x00095f9e) main_cset6_slider_pane_g11

0x74b6,	// (0x00095faa) main_cset6_slider_pane_g12_ParamLimits

0x74b6,	// (0x00095faa) main_cset6_slider_pane_g12

0x74c2,	// (0x00095fb6) main_cset6_slider_pane_g13_ParamLimits

0x74c2,	// (0x00095fb6) main_cset6_slider_pane_g13

0x74ce,	// (0x00095fc2) main_cset6_slider_pane_g14_ParamLimits

0x74ce,	// (0x00095fc2) main_cset6_slider_pane_g14

0x8454,	// (0x00096f48) main_cset6_slider_pane_g15_ParamLimits

0x8454,	// (0x00096f48) main_cset6_slider_pane_g15

0x74f2,	// (0x00095fe6) main_cset6_slider_pane_g16_ParamLimits

0x74f2,	// (0x00095fe6) main_cset6_slider_pane_g16

0x74fe,	// (0x00095ff2) main_cset6_slider_pane_g17_ParamLimits

0x74fe,	// (0x00095ff2) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0009e68d) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0009e68d) main_cset6_slider_pane_g

0xc142,	// (0x0009ac36) main_cset6_slider_pane_t1_ParamLimits

0xc142,	// (0x0009ac36) main_cset6_slider_pane_t1

0x846c,	// (0x00096f60) main_cset6_slider_pane_t2_ParamLimits

0x846c,	// (0x00096f60) main_cset6_slider_pane_t2

0x8497,	// (0x00096f8b) main_cset6_slider_pane_t3_ParamLimits

0x8497,	// (0x00096f8b) main_cset6_slider_pane_t3

0x84c2,	// (0x00096fb6) main_cset6_slider_pane_t4_ParamLimits

0x84c2,	// (0x00096fb6) main_cset6_slider_pane_t4

0x84ed,	// (0x00096fe1) main_cset6_slider_pane_t5_ParamLimits

0x84ed,	// (0x00096fe1) main_cset6_slider_pane_t5

0xc183,	// (0x0009ac77) main_cset6_slider_pane_t7_ParamLimits

0xc183,	// (0x0009ac77) main_cset6_slider_pane_t7

0x8518,	// (0x0009700c) main_cset6_slider_pane_t8_ParamLimits

0x8518,	// (0x0009700c) main_cset6_slider_pane_t8

0x853c,	// (0x00097030) main_cset6_slider_pane_t9_ParamLimits

0x853c,	// (0x00097030) main_cset6_slider_pane_t9

0x8560,	// (0x00097054) main_cset6_slider_pane_t10_ParamLimits

0x8560,	// (0x00097054) main_cset6_slider_pane_t10

0x8584,	// (0x00097078) main_cset6_slider_pane_t11_ParamLimits

0x8584,	// (0x00097078) main_cset6_slider_pane_t11

0xc1b9,	// (0x0009acad) main_cset6_slider_pane_t14_ParamLimits

0xc1b9,	// (0x0009acad) main_cset6_slider_pane_t14

0xc1f2,	// (0x0009ace6) main_cset6_slider_pane_t15_ParamLimits

0xc1f2,	// (0x0009ace6) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0009e6b2) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0009e6b2) main_cset6_slider_pane_t

0xc22b,	// (0x0009ad1f) cset_slider_pane_g1_copy1

0xc234,	// (0x0009ad28) cset_slider_pane_g2_copy1

0xc23d,	// (0x0009ad31) cset_slider_pane_g3_copy1

0xedc5,	// (0x0009d8b9) bg_popup_sub_pane_cp011_copy1

0xba01,	// (0x0009a4f5) main_cset_text_pane_g1_copy1

0xba09,	// (0x0009a4fd) main_cset_text_pane_t1_copy1

0xba17,	// (0x0009a50b) main_cset_text_pane_t2_copy1

0xba25,	// (0x0009a519) main_cset_text_pane_t3_copy1

0xba33,	// (0x0009a527) main_cset_text_pane_t4_copy1

0xba41,	// (0x0009a535) main_cset_text_pane_t5_copy1

0xba4f,	// (0x0009a543) main_cset_text_pane_t6_copy1

0xba5d,	// (0x0009a551) main_cset_text_pane_t7_copy1

0x8385,	// (0x00096e79) main_cset_text2_pane_t1_copy1

0xedc5,	// (0x0009d8b9) main_ncimui_pane

0x4aa2,	// (0x00093596) popup_query_ncimui_window_ParamLimits

0x4aa2,	// (0x00093596) popup_query_ncimui_window

0xadb9,	// (0x000998ad) field_cale_ev2_pane_g4_ParamLimits

0xadb9,	// (0x000998ad) field_cale_ev2_pane_g4

0x66c1,	// (0x000951b5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x66c1,	// (0x000951b5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0009e397) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0009e397) cell_video_dialer_keypad_pane_g

0x66d9,	// (0x000951cd) cell_video_dialer_keypad_pane_t1

0xedc5,	// (0x0009d8b9) bg_popup_window_pane_cp012

0xe9d9,	// (0x0009d4cd) heading_pane_cp06

0xc335,	// (0x0009ae29) ncim_query_content_pane

0xedc5,	// (0x0009d8b9) bg_popup_heading_pane_cp01

0xc33d,	// (0x0009ae31) ncim_heading_pane_t1

0xc34b,	// (0x0009ae3f) ncim_indicator_popup_pane

0xc35d,	// (0x0009ae51) ncim_query_button_pane

0xc371,	// (0x0009ae65) ncim_query_content_pane_t1

0xc383,	// (0x0009ae77) ncim_query_content_pane_t2

0x0005,

0xfbfd,	// (0x0009e6f1) ncim_query_content_pane_t

0xc3bd,	// (0x0009aeb1) ncim_query_list_pane

0xc3cf,	// (0x0009aec3) ncim_query_popup_pane

0xc34b,	// (0x0009ae3f) ncim_indicator_popup_pane_ParamLimits

0x86a1,	// (0x00097195) ncim_query_content_pane_g1_ParamLimits

0x86a1,	// (0x00097195) ncim_query_content_pane_g1

0xc371,	// (0x0009ae65) ncim_query_content_pane_t1_ParamLimits

0xc383,	// (0x0009ae77) ncim_query_content_pane_t2_ParamLimits

0x86ad,	// (0x000971a1) ncim_query_content_pane_t3_ParamLimits

0x86ad,	// (0x000971a1) ncim_query_content_pane_t3

0x86d5,	// (0x000971c9) ncim_query_content_pane_t4_ParamLimits

0x86d5,	// (0x000971c9) ncim_query_content_pane_t4

0x86fd,	// (0x000971f1) ncim_query_content_pane_t5_ParamLimits

0x86fd,	// (0x000971f1) ncim_query_content_pane_t5

0xc395,	// (0x0009ae89) ncim_query_content_pane_t6_ParamLimits

0xc395,	// (0x0009ae89) ncim_query_content_pane_t6

0xfbfd,	// (0x0009e6f1) ncim_query_content_pane_t_ParamLimits

0xc3bd,	// (0x0009aeb1) ncim_query_list_pane_ParamLimits

0xc3cf,	// (0x0009aec3) ncim_query_popup_pane_ParamLimits

0xc3e3,	// (0x0009aed7) wait_bar_pane_cp04

0xedc5,	// (0x0009d8b9) input_focus_pane_cp011

0xc3eb,	// (0x0009aedf) ncim_query_popup_pane_t1

0xc3f9,	// (0x0009aeed) ncim_list_query_list_pane_ParamLimits

0xc3f9,	// (0x0009aeed) ncim_list_query_list_pane

0xedc5,	// (0x0009d8b9) bg_button_pane_cp027

0xc40c,	// (0x0009af00) ncim_query_button_pane_g1

0xedc5,	// (0x0009d8b9) list_highlight_pane_cp012

0xc416,	// (0x0009af0a) ncim_list_query_list_pane_g1

0xc41e,	// (0x0009af12) ncim_list_query_list_pane_t1

0xda3a,	// (0x0009c52e) cam4_indicators_pane_g3_ParamLimits

0xda3a,	// (0x0009c52e) cam4_indicators_pane_g3

0x6dd2,	// (0x000958c6) vid4_indicators_pane_g5_ParamLimits

0x6dd2,	// (0x000958c6) vid4_indicators_pane_g5

0xda3a,	// (0x0009c52e) vid4_progress_pane_g5_ParamLimits

0xda3a,	// (0x0009c52e) vid4_progress_pane_g5

0x85ba,	// (0x000970ae) main_ncimui_pane_g1

0x8610,	// (0x00097104) ncimui_group_query_pane_ParamLimits

0x8610,	// (0x00097104) ncimui_group_query_pane

0x864c,	// (0x00097140) ncimui_list_pane_ParamLimits

0x864c,	// (0x00097140) ncimui_list_pane

0x866d,	// (0x00097161) ncimui_text_pane_ParamLimits

0x866d,	// (0x00097161) ncimui_text_pane

0x8725,	// (0x00097219) ncimui_text_pane_t1_ParamLimits

0x8725,	// (0x00097219) ncimui_text_pane_t1

0xc42c,	// (0x0009af20) ncimui_list_single_graphic_pane_ParamLimits

0xc42c,	// (0x0009af20) ncimui_list_single_graphic_pane

0x8743,	// (0x00097237) ncimui_query_pane_ParamLimits

0x8743,	// (0x00097237) ncimui_query_pane

0xedc5,	// (0x0009d8b9) list_highlight_pane_cp013

0xc43c,	// (0x0009af30) ncim_list_query_list_pane_t1_copy1

0xc416,	// (0x0009af0a) ncim_list_single_graphic_pane_g1

0xc44a,	// (0x0009af3e) ncim_query_button_pane_cp01

0xc456,	// (0x0009af4a) ncim_query_entry_pane_ParamLimits

0xc456,	// (0x0009af4a) ncim_query_entry_pane

0xc469,	// (0x0009af5d) ncimui_query_pane_g1

0xc475,	// (0x0009af69) ncimui_query_pane_t1_ParamLimits

0xc475,	// (0x0009af69) ncimui_query_pane_t1

0xee3d,	// (0x0009d931) input_focus_pane_cp012

0xc48e,	// (0x0009af82) ncim_query_entry_pane_t1

0xe1da,	// (0x0009ccce) main_im_pane_ParamLimits

0xee3d,	// (0x0009d931) main_mobtv_pane_ParamLimits

0xee3d,	// (0x0009d931) main_mobtv_pane

0x7492,	// (0x00095f86) main_cset6_slider_pane_g18_ParamLimits

0x7492,	// (0x00095f86) main_cset6_slider_pane_g18

0x74c2,	// (0x00095fb6) main_cset6_slider_pane_g19_ParamLimits

0x74c2,	// (0x00095fb6) main_cset6_slider_pane_g19

0xc4a0,	// (0x0009af94) bg_main_mobtv_pane_ParamLimits

0xc4a0,	// (0x0009af94) bg_main_mobtv_pane

0x8756,	// (0x0009724a) main_mobtv_info_pane

0x875f,	// (0x00097253) main_mobtv_loading_pane_ParamLimits

0x875f,	// (0x00097253) main_mobtv_loading_pane

0xc4ae,	// (0x0009afa2) main_mobtv_pg_channel_list_pane

0xc4b8,	// (0x0009afac) main_mobtv_pg_hdr_pane

0x876c,	// (0x00097260) main_mobtv_programe_curr_pane_ParamLimits

0x876c,	// (0x00097260) main_mobtv_programe_curr_pane

0x8779,	// (0x0009726d) main_mobtv_programe_next_pane_ParamLimits

0x8779,	// (0x0009726d) main_mobtv_programe_next_pane

0xc4c1,	// (0x0009afb5) popup_mobtv_noti_window

0xaaed,	// (0x000995e1) main_tv_pg_hdr_pane_g1

0xc4c9,	// (0x0009afbd) main_tv_pg_hdr_pane_g2

0xc4d1,	// (0x0009afc5) main_tv_pg_hdr_pane_g3

0xc4d9,	// (0x0009afcd) main_tv_pg_hdr_pane_g4

0xc4e1,	// (0x0009afd5) main_tv_pg_hdr_pane_g5

0xc4eb,	// (0x0009afdf) main_tv_pg_hdr_pane_g6

0xc4f5,	// (0x0009afe9) main_tv_pg_hdr_pane_g7

0xc4ff,	// (0x0009aff3) main_tv_pg_hdr_pane_g8

0xc509,	// (0x0009affd) main_tv_pg_hdr_pane_g9

0xc513,	// (0x0009b007) main_tv_pg_hdr_pane_g10

0xc51d,	// (0x0009b011) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0a,	// (0x0009e6fe) main_tv_pg_hdr_pane_g

0xc527,	// (0x0009b01b) main_tv_pg_hdr_pane_t1

0xc535,	// (0x0009b029) main_tv_pg_hdr_pane_t2

0xc543,	// (0x0009b037) main_tv_pg_hdr_pane_t3

0xc553,	// (0x0009b047) main_tv_pg_hdr_pane_t4

0xc563,	// (0x0009b057) main_tv_pg_hdr_pane_t5

0x0004,

0xfc21,	// (0x0009e715) main_tv_pg_hdr_pane_t

0xc573,	// (0x0009b067) single_mobtv_pg_channel_pane_ParamLimits

0xc573,	// (0x0009b067) single_mobtv_pg_channel_pane

0xc585,	// (0x0009b079) single_mobtv_pg_channel_table_pane

0xc58e,	// (0x0009b082) single_mobtv_pg_channel_thumb_pane

0xc597,	// (0x0009b08b) single_tv_pg_channel_pane_g1

0xc5a0,	// (0x0009b094) single_tv_pg_channel_pane_g2

0x0001,

0xfc2c,	// (0x0009e720) single_tv_pg_channel_pane_g

0xad54,	// (0x00099848) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xad54,	// (0x00099848) bg_single_mobtv_pg_channel_thumb_pane

0xc5a9,	// (0x0009b09d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc5a9,	// (0x0009b09d) single_mobtv_pg_channel_thumb_pane_g1

0xc5b7,	// (0x0009b0ab) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc5b7,	// (0x0009b0ab) single_mobtv_pg_channel_thumb_pane_g2

0xc5c3,	// (0x0009b0b7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc5c3,	// (0x0009b0b7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc31,	// (0x0009e725) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc31,	// (0x0009e725) single_mobtv_pg_channel_thumb_pane_g

0xc5cf,	// (0x0009b0c3) single_mobtv_pg_channel_thumb_pane_t1

0xc5dd,	// (0x0009b0d1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc38,	// (0x0009e72c) single_mobtv_pg_channel_thumb_pane_t

0xaaed,	// (0x000995e1) bg_single_mobtv_pg_channel_table_pane_g1

0xaaed,	// (0x000995e1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6f4,	// (0x0009e1e8) bg_single_mobtv_pg_channel_table_pane_g

0xc5eb,	// (0x0009b0df) single_mobtv_pg_channel_table_pane_t1

0xc5f9,	// (0x0009b0ed) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3d,	// (0x0009e731) single_mobtv_pg_channel_table_pane_t

0x878e,	// (0x00097282) main_mobtv_info_pane_g1_ParamLimits

0x878e,	// (0x00097282) main_mobtv_info_pane_g1

0x87ac,	// (0x000972a0) main_mobtv_info_pane_t1_ParamLimits

0x87ac,	// (0x000972a0) main_mobtv_info_pane_t1

0x8824,	// (0x00097318) main_mobtv_info_pane_t2_ParamLimits

0x8824,	// (0x00097318) main_mobtv_info_pane_t2

0x0002,

0xfc47,	// (0x0009e73b) main_mobtv_info_pane_t_ParamLimits

0xfc47,	// (0x0009e73b) main_mobtv_info_pane_t

0x88b3,	// (0x000973a7) wait_bar_pane_cp05

0x88c5,	// (0x000973b9) main_mobtv_loading_pane_g1_ParamLimits

0x88c5,	// (0x000973b9) main_mobtv_loading_pane_g1

0x88d8,	// (0x000973cc) main_mobtv_loading_pane_g2_ParamLimits

0x88d8,	// (0x000973cc) main_mobtv_loading_pane_g2

0x88e4,	// (0x000973d8) main_mobtv_loading_pane_g3_ParamLimits

0x88e4,	// (0x000973d8) main_mobtv_loading_pane_g3

0x0002,

0xfc4e,	// (0x0009e742) main_mobtv_loading_pane_g_ParamLimits

0xfc4e,	// (0x0009e742) main_mobtv_loading_pane_g

0xc607,	// (0x0009b0fb) main_mobtv_loading_pane_t1_ParamLimits

0xc607,	// (0x0009b0fb) main_mobtv_loading_pane_t1

0xc61f,	// (0x0009b113) main_mobtv_loading_pane_t2_ParamLimits

0xc61f,	// (0x0009b113) main_mobtv_loading_pane_t2

0x0001,

0xfc55,	// (0x0009e749) main_mobtv_loading_pane_t_ParamLimits

0xfc55,	// (0x0009e749) main_mobtv_loading_pane_t

0x88f7,	// (0x000973eb) wait_bar_pane_cp06_ParamLimits

0x88f7,	// (0x000973eb) wait_bar_pane_cp06

0xc643,	// (0x0009b137) main_mobtv_programe_curr_pane_t1

0xc651,	// (0x0009b145) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5a,	// (0x0009e74e) main_mobtv_programe_curr_pane_t

0xc65f,	// (0x0009b153) main_mobtv_programe_next_pane_t1

0xc66d,	// (0x0009b161) main_mobtv_programe_next_pane_t2

0xc67b,	// (0x0009b16f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5f,	// (0x0009e753) main_mobtv_programe_next_pane_t

0xedc5,	// (0x0009d8b9) bg_popup_mobtv_noti_window_pane

0xc689,	// (0x0009b17d) popup_mobtv_noti_window_g1

0xc691,	// (0x0009b185) popup_mobtv_noti_window_t1

0xc69f,	// (0x0009b193) popup_mobtv_noti_window_t2

0x0001,

0xfc66,	// (0x0009e75a) popup_mobtv_noti_window_t

0xaaed,	// (0x000995e1) bg_popup_mobtv_noti_window_pane_g1

0xedc5,	// (0x0009d8b9) sc_clock_pane

0xedc5,	// (0x0009d8b9) main_fs_bigclock_pane

0x80bb,	// (0x00096baf) blid2_tripm_pane_t4_ParamLimits

0x80bb,	// (0x00096baf) blid2_tripm_pane_t4

0x8906,	// (0x000973fa) sc_clock_pane_g1_ParamLimits

0x8906,	// (0x000973fa) sc_clock_pane_g1

0x8918,	// (0x0009740c) sc_clock_pane_t1_ParamLimits

0x8918,	// (0x0009740c) sc_clock_pane_t1

0x893a,	// (0x0009742e) sc_clock_pane_t2_ParamLimits

0x893a,	// (0x0009742e) sc_clock_pane_t2

0x8952,	// (0x00097446) sc_clock_pane_t3_ParamLimits

0x8952,	// (0x00097446) sc_clock_pane_t3

0x0004,

0xfc6b,	// (0x0009e75f) sc_clock_pane_t_ParamLimits

0xfc6b,	// (0x0009e75f) sc_clock_pane_t

0x96e3,	// (0x000981d7) main_fs_bigclock_indicator_pane_ParamLimits

0x96e3,	// (0x000981d7) main_fs_bigclock_indicator_pane

0xad24,	// (0x00099818) main_fs_bigclock_pane_g1_ParamLimits

0xad24,	// (0x00099818) main_fs_bigclock_pane_g1

0x96ef,	// (0x000981e3) main_fs_bigclock_pane_t1_ParamLimits

0x96ef,	// (0x000981e3) main_fs_bigclock_pane_t1

0x9701,	// (0x000981f5) main_fs_bigclock_pane_t2_ParamLimits

0x9701,	// (0x000981f5) main_fs_bigclock_pane_t2

0x9713,	// (0x00098207) main_fs_bigclock_pane_t3_ParamLimits

0x9713,	// (0x00098207) main_fs_bigclock_pane_t3

0x0002,

0xfe6f,	// (0x0009e963) main_fs_bigclock_pane_t_ParamLimits

0xfe6f,	// (0x0009e963) main_fs_bigclock_pane_t

0xd39f,	// (0x0009be93) main_fs_bigclock_indicator_pane_g1

0xc365,	// (0x0009ae59) ncim_query_content_pane_g2_ParamLimits

0xc365,	// (0x0009ae59) ncim_query_content_pane_g2

0x0001,

0xfbf8,	// (0x0009e6ec) ncim_query_content_pane_g_ParamLimits

0xfbf8,	// (0x0009e6ec) ncim_query_content_pane_g

0x896b,	// (0x0009745f) sc_clock_pane_t4_ParamLimits

0x896b,	// (0x0009745f) sc_clock_pane_t4

0xee3d,	// (0x0009d931) main_radioblah_pane

0xb690,	// (0x0009a184) cell_call4_button_pane_t1_copy1_ParamLimits

0xb690,	// (0x0009a184) cell_call4_button_pane_t1_copy1

0x85c2,	// (0x000970b6) main_ncimui_pane_t1_ParamLimits

0x85c2,	// (0x000970b6) main_ncimui_pane_t1

0x85dc,	// (0x000970d0) main_ncimui_pane_t2_ParamLimits

0x85dc,	// (0x000970d0) main_ncimui_pane_t2

0x0002,

0xfbf1,	// (0x0009e6e5) main_ncimui_pane_t_ParamLimits

0xfbf1,	// (0x0009e6e5) main_ncimui_pane_t

0xc7e8,	// (0x0009b2dc) main_radioblah_anim_pane_ParamLimits

0xc7e8,	// (0x0009b2dc) main_radioblah_anim_pane

0xc7f9,	// (0x0009b2ed) main_radioblah_info_pane_ParamLimits

0xc7f9,	// (0x0009b2ed) main_radioblah_info_pane

0xc80d,	// (0x0009b301) main_radioblah_pane_t1_ParamLimits

0xc80d,	// (0x0009b301) main_radioblah_pane_t1

0xc829,	// (0x0009b31d) main_radioblah_pane_t2_ParamLimits

0xc829,	// (0x0009b31d) main_radioblah_pane_t2

0x0003,

0xfc8c,	// (0x0009e780) main_radioblah_pane_t_ParamLimits

0xfc8c,	// (0x0009e780) main_radioblah_pane_t

0x8a1a,	// (0x0009750e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8a1a,	// (0x0009750e) main_radioblah_rocker_ctrl_pane

0xc871,	// (0x0009b365) main_radioblah_info_pane_t1_ParamLimits

0xc871,	// (0x0009b365) main_radioblah_info_pane_t1

0x8a72,	// (0x00097566) main_radioblah_info_pane_t2_ParamLimits

0x8a72,	// (0x00097566) main_radioblah_info_pane_t2

0x0003,

0xfc95,	// (0x0009e789) main_radioblah_info_pane_t_ParamLimits

0xfc95,	// (0x0009e789) main_radioblah_info_pane_t

0xaaed,	// (0x000995e1) main_radioblah_rocker_ctrl_pane_g1

0x8b24,	// (0x00097618) main_radioblah_rocker_ctrl_pane_g2

0x8b2c,	// (0x00097620) main_radioblah_rocker_ctrl_pane_g3

0x8b34,	// (0x00097628) main_radioblah_rocker_ctrl_pane_g4

0x8b3c,	// (0x00097630) main_radioblah_rocker_ctrl_pane_g5

0x8b44,	// (0x00097638) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9e,	// (0x0009e792) main_radioblah_rocker_ctrl_pane_g

0x8385,	// (0x00096e79) main_cset_text2_pane_t1_copy1_ParamLimits

0xd9fc,	// (0x0009c4f0) cam4_image_uncrop_qvga_pane

0xda63,	// (0x0009c557) vid4_image_uncrop_qcif_pane

0xdb86,	// (0x0009c67a) cam6_image_uncrop_qvga_pane_ParamLimits

0xdb86,	// (0x0009c67a) cam6_image_uncrop_qvga_pane

0xbf84,	// (0x0009aa78) vid6_image_uncrop_qcif_pane_ParamLimits

0xbf84,	// (0x0009aa78) vid6_image_uncrop_qcif_pane

0xedc5,	// (0x0009d8b9) bg_popup_preview_window_pane_cp03

0xc317,	// (0x0009ae0b) list_cset_text2_pane

0xc31f,	// (0x0009ae13) main_cset6_text2_pane_g1

0xc327,	// (0x0009ae1b) main_cset6_text2_pane_t1

0x8b4c,	// (0x00097640) list_cset_text2_pane_t1_ParamLimits

0x8b4c,	// (0x00097640) list_cset_text2_pane_t1

0xee3d,	// (0x0009d931) main_radioblah_pane_ParamLimits

0x889f,	// (0x00097393) main_mobtv_info_pane_t3_ParamLimits

0x889f,	// (0x00097393) main_mobtv_info_pane_t3

0x8a08,	// (0x000974fc) main_radioblah_pane_g1

0x8a42,	// (0x00097536) main_radioblah_info_pane_g1

0x8ac9,	// (0x000975bd) main_radioblah_info_pane_t3_ParamLimits

0x8ac9,	// (0x000975bd) main_radioblah_info_pane_t3

0x2708,	// (0x000911fc) highlight_cell_cale_month_pane_ParamLimits

0x2708,	// (0x000911fc) highlight_cell_cale_month_pane

0xedc5,	// (0x0009d8b9) main_phob_fisheye_pane

0xae74,	// (0x00099968) scroll_pane_cp0031_ParamLimits

0xae74,	// (0x00099968) scroll_pane_cp0031

0xc092,	// (0x0009ab86) wait_bar_pane_cp08_ParamLimits

0x8409,	// (0x00096efd) cset_list_set_pane_copy1_ParamLimits

0xc8ab,	// (0x0009b39f) highlight_cell_cale_month_pane_g1

0x8b69,	// (0x0009765d) highlight_cell_cale_month_pane_t1

0xbccd,	// (0x0009a7c1) list_gen_pane_cp01

0xb888,	// (0x0009a37c) scroll_pane_01

0xc8b3,	// (0x0009b3a7) list_single_double_fisheye_pane

0xc8bc,	// (0x0009b3b0) list_double_fisheye_pane_g1_ParamLimits

0xc8bc,	// (0x0009b3b0) list_double_fisheye_pane_g1

0xc8c8,	// (0x0009b3bc) list_double_fisheye_pane_g2_ParamLimits

0xc8c8,	// (0x0009b3bc) list_double_fisheye_pane_g2

0xc8dc,	// (0x0009b3d0) list_double_fisheye_pane_g3_ParamLimits

0xc8dc,	// (0x0009b3d0) list_double_fisheye_pane_g3

0x0004,

0xfcab,	// (0x0009e79f) list_double_fisheye_pane_g_ParamLimits

0xfcab,	// (0x0009e79f) list_double_fisheye_pane_g

0xc905,	// (0x0009b3f9) list_double_fisheye_pane_t1_ParamLimits

0xc905,	// (0x0009b3f9) list_double_fisheye_pane_t1

0xc920,	// (0x0009b414) list_double_fisheye_pane_t2_ParamLimits

0xc920,	// (0x0009b414) list_double_fisheye_pane_t2

0x0001,

0xfcb6,	// (0x0009e7aa) list_double_fisheye_pane_t_ParamLimits

0xfcb6,	// (0x0009e7aa) list_double_fisheye_pane_t

0xedc5,	// (0x0009d8b9) main_call5_pane

0x8996,	// (0x0009748a) sc_swipe_pane_ParamLimits

0x8996,	// (0x0009748a) sc_swipe_pane

0x8b8a,	// (0x0009767e) call5_image_pane_ParamLimits

0x8b8a,	// (0x0009767e) call5_image_pane

0x8ba7,	// (0x0009769b) call5_swipe_1_pane_ParamLimits

0x8ba7,	// (0x0009769b) call5_swipe_1_pane

0x8bba,	// (0x000976ae) call5_swipe_2_pane_ParamLimits

0x8bba,	// (0x000976ae) call5_swipe_2_pane

0x8be5,	// (0x000976d9) popup_call5_audio_first_window_ParamLimits

0x8be5,	// (0x000976d9) popup_call5_audio_first_window

0xad54,	// (0x00099848) call5_swipe_1_pane_g1_ParamLimits

0xad54,	// (0x00099848) call5_swipe_1_pane_g1

0xc942,	// (0x0009b436) call5_swipe_1_pane_g2_ParamLimits

0xc942,	// (0x0009b436) call5_swipe_1_pane_g2

0x0001,

0xfcbb,	// (0x0009e7af) call5_swipe_1_pane_g_ParamLimits

0xfcbb,	// (0x0009e7af) call5_swipe_1_pane_g

0xc94e,	// (0x0009b442) call5_swipe_1_pane_t1_ParamLimits

0xc94e,	// (0x0009b442) call5_swipe_1_pane_t1

0xad54,	// (0x00099848) call5_swipe_2_pane_g1_ParamLimits

0xad54,	// (0x00099848) call5_swipe_2_pane_g1

0xc963,	// (0x0009b457) call5_swipe_2_pane_g2_ParamLimits

0xc963,	// (0x0009b457) call5_swipe_2_pane_g2

0x0001,

0xfcc0,	// (0x0009e7b4) call5_swipe_2_pane_g_ParamLimits

0xfcc0,	// (0x0009e7b4) call5_swipe_2_pane_g

0xc96f,	// (0x0009b463) call5_swipe_2_pane_t1_ParamLimits

0xc96f,	// (0x0009b463) call5_swipe_2_pane_t1

0xc984,	// (0x0009b478) sc_swipe_pane_g1_ParamLimits

0xc984,	// (0x0009b478) sc_swipe_pane_g1

0xc991,	// (0x0009b485) sc_swipe_pane_g2_ParamLimits

0xc991,	// (0x0009b485) sc_swipe_pane_g2

0x0001,

0xfcc5,	// (0x0009e7b9) sc_swipe_pane_g_ParamLimits

0xfcc5,	// (0x0009e7b9) sc_swipe_pane_g

0xc99d,	// (0x0009b491) sc_swipe_pane_t1_ParamLimits

0xc99d,	// (0x0009b491) sc_swipe_pane_t1

0xedc5,	// (0x0009d8b9) main_cmail_launcher_pane

0x8bf6,	// (0x000976ea) aid_size_cell_cmail_l_ParamLimits

0x8bf6,	// (0x000976ea) aid_size_cell_cmail_l

0x8c10,	// (0x00097704) grid_cmail_l_pane_ParamLimits

0x8c10,	// (0x00097704) grid_cmail_l_pane

0x8c2b,	// (0x0009771f) cell_cmail_l_pane_ParamLimits

0x8c2b,	// (0x0009771f) cell_cmail_l_pane

0x8c51,	// (0x00097745) cell_cmail_l_pane_g1_ParamLimits

0x8c51,	// (0x00097745) cell_cmail_l_pane_g1

0x8c5d,	// (0x00097751) cell_cmail_l_pane_t1_ParamLimits

0x8c5d,	// (0x00097751) cell_cmail_l_pane_t1

0xc9b2,	// (0x0009b4a6) cell_cmail_l_pane_t2_ParamLimits

0xc9b2,	// (0x0009b4a6) cell_cmail_l_pane_t2

0x0001,

0xfcca,	// (0x0009e7be) cell_cmail_l_pane_t_ParamLimits

0xfcca,	// (0x0009e7be) cell_cmail_l_pane_t

0xee3d,	// (0x0009d931) grid_highlight_pane_cp018_ParamLimits

0xee3d,	// (0x0009d931) grid_highlight_pane_cp018

0x0ca1,	// (0x0008f795) main2_pane_ParamLimits

0x0ca1,	// (0x0008f795) main2_pane

0xe285,	// (0x0009cd79) popup_sp_fs_action_menu_bg_pane_g1

0xe28d,	// (0x0009cd81) popup_sp_fs_action_menu_bg_pane_g2

0xe295,	// (0x0009cd89) popup_sp_fs_action_menu_bg_pane_g3

0xe29d,	// (0x0009cd91) popup_sp_fs_action_menu_bg_pane_g4

0xe2a5,	// (0x0009cd99) popup_sp_fs_action_menu_bg_pane_g5

0xe2ad,	// (0x0009cda1) popup_sp_fs_action_menu_bg_pane_g6

0xe2b5,	// (0x0009cda9) popup_sp_fs_action_menu_bg_pane_g7

0xe2bd,	// (0x0009cdb1) popup_sp_fs_action_menu_bg_pane_g8

0xe2c5,	// (0x0009cdb9) popup_sp_fs_action_menu_bg_pane_g9

0xe2cd,	// (0x0009cdc1) popup_sp_fs_action_menu_bg_pane_g10

0xe2cd,	// (0x0009cdc1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0009dc9b) popup_sp_fs_action_menu_bg_pane_g

0x1962,	// (0x00090456) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x2_t3_g3_g1

0x196e,	// (0x00090462) list_medium_line_x2_t3_g3_g2_ParamLimits

0x196e,	// (0x00090462) list_medium_line_x2_t3_g3_g2

0x197a,	// (0x0009046e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x197a,	// (0x0009046e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0009dd4b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0009dd4b) list_medium_line_x2_t3_g3_g

0x1986,	// (0x0009047a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1986,	// (0x0009047a) list_medium_line_x2_t3_g3_t1

0x199b,	// (0x0009048f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x199b,	// (0x0009048f) list_medium_line_x2_t3_g3_t2

0x19af,	// (0x000904a3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x19af,	// (0x000904a3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0009dd52) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0009dd52) list_medium_line_x2_t3_g3_t

0x1962,	// (0x00090456) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x2_t3_g2_g1

0x197a,	// (0x0009046e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x197a,	// (0x0009046e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0009dd59) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0009dd59) list_medium_line_x2_t3_g2_g

0x19c4,	// (0x000904b8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x19c4,	// (0x000904b8) list_medium_line_x2_t3_g2_t1

0x19da,	// (0x000904ce) list_medium_line_x2_t3_g2_t2_ParamLimits

0x19da,	// (0x000904ce) list_medium_line_x2_t3_g2_t2

0x19ec,	// (0x000904e0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x19ec,	// (0x000904e0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0009dd5e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0009dd5e) list_medium_line_x2_t3_g2_t

0x1962,	// (0x00090456) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x2_t4_g4_g1

0x1a0a,	// (0x000904fe) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1a0a,	// (0x000904fe) list_medium_line_x2_t4_g4_g2

0x196e,	// (0x00090462) list_medium_line_x2_t4_g4_g3_ParamLimits

0x196e,	// (0x00090462) list_medium_line_x2_t4_g4_g3

0x1a16,	// (0x0009050a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1a16,	// (0x0009050a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0009dd65) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0009dd65) list_medium_line_x2_t4_g4_g

0x1a22,	// (0x00090516) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1a22,	// (0x00090516) list_medium_line_x2_t4_g4_t1

0x1a39,	// (0x0009052d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1a39,	// (0x0009052d) list_medium_line_x2_t4_g4_t2

0x1a4e,	// (0x00090542) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1a4e,	// (0x00090542) list_medium_line_x2_t4_g4_t3

0x1a60,	// (0x00090554) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1a60,	// (0x00090554) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0009dd6e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0009dd6e) list_medium_line_x2_t4_g4_t

0x1962,	// (0x00090456) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x2_t2_g4_g1

0x1a0a,	// (0x000904fe) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1a0a,	// (0x000904fe) list_medium_line_x2_t2_g4_g2

0x196e,	// (0x00090462) list_medium_line_x2_t2_g4_g3_ParamLimits

0x196e,	// (0x00090462) list_medium_line_x2_t2_g4_g3

0x197a,	// (0x0009046e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x197a,	// (0x0009046e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0009ddd5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0009ddd5) list_medium_line_x2_t2_g4_g

0x2726,	// (0x0009121a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2726,	// (0x0009121a) list_medium_line_x2_t2_g4_t1

0x19af,	// (0x000904a3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x19af,	// (0x000904a3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0009ddde) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0009ddde) list_medium_line_x2_t2_g4_t

0x1962,	// (0x00090456) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x2_t2_g3_g1

0x196e,	// (0x00090462) list_medium_line_x2_t2_g3_g2_ParamLimits

0x196e,	// (0x00090462) list_medium_line_x2_t2_g3_g2

0x197a,	// (0x0009046e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x197a,	// (0x0009046e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0009dd4b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0009dd4b) list_medium_line_x2_t2_g3_g

0x273b,	// (0x0009122f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x273b,	// (0x0009122f) list_medium_line_x2_t2_g3_t1

0x19af,	// (0x000904a3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x19af,	// (0x000904a3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0009dde3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0009dde3) list_medium_line_x2_t2_g3_t

0x2918,	// (0x0009140c) main_sp_fs_list_pane_ParamLimits

0x2918,	// (0x0009140c) main_sp_fs_list_pane

0x2924,	// (0x00091418) sp_fs_scroll_pane_ParamLimits

0x2924,	// (0x00091418) sp_fs_scroll_pane

0x2930,	// (0x00091424) list_medium_line_x2_t3_t1

0x2940,	// (0x00091434) list_medium_line_x2_t3_t2

0x294e,	// (0x00091442) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0009de2e) list_medium_line_x2_t3_t

0x295c,	// (0x00091450) list_medium_line_x3_t4_t1

0x296c,	// (0x00091460) list_medium_line_x3_t4_t2

0x297a,	// (0x0009146e) list_medium_line_x3_t4_t3

0x294e,	// (0x00091442) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0009de35) list_medium_line_x3_t4_t

0x2988,	// (0x0009147c) list_medium_line_x4_t5_t1

0x2998,	// (0x0009148c) list_medium_line_x4_t5_t2

0x297a,	// (0x0009146e) list_medium_line_x4_t5_t3

0x29a6,	// (0x0009149a) list_medium_line_x4_t5_t4

0x294e,	// (0x00091442) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0009de3e) list_medium_line_x4_t5_t

0x1962,	// (0x00090456) list_medium_line_t4_g4_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_t4_g4_g1

0x1a16,	// (0x0009050a) list_medium_line_t4_g4_g2_ParamLimits

0x1a16,	// (0x0009050a) list_medium_line_t4_g4_g2

0x29b4,	// (0x000914a8) list_medium_line_t4_g4_g3_ParamLimits

0x29b4,	// (0x000914a8) list_medium_line_t4_g4_g3

0x197a,	// (0x0009046e) list_medium_line_t4_g4_g4_ParamLimits

0x197a,	// (0x0009046e) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0009de49) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0009de49) list_medium_line_t4_g4_g

0x29c0,	// (0x000914b4) list_medium_line_t4_g4_t1_ParamLimits

0x29c0,	// (0x000914b4) list_medium_line_t4_g4_t1

0x29d5,	// (0x000914c9) list_medium_line_t4_g4_t2_ParamLimits

0x29d5,	// (0x000914c9) list_medium_line_t4_g4_t2

0x29eb,	// (0x000914df) list_medium_line_t4_g4_t3_ParamLimits

0x29eb,	// (0x000914df) list_medium_line_t4_g4_t3

0x19af,	// (0x000904a3) list_medium_line_t4_g4_t4_ParamLimits

0x19af,	// (0x000904a3) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0009de52) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0009de52) list_medium_line_t4_g4_t

0x2a9f,	// (0x00091593) chi_dic_find_pane_g1

0x4880,	// (0x00093374) main_tport_pane

0xb992,	// (0x0009a486) list_medium_line_plain_t1

0xb9a8,	// (0x0009a49c) list_medium_line_t2_g2_g1_ParamLimits

0xb9a8,	// (0x0009a49c) list_medium_line_t2_g2_g1

0xb9b4,	// (0x0009a4a8) list_medium_line_t2_g2_g2_ParamLimits

0xb9b4,	// (0x0009a4a8) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0009e4fb) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0009e4fb) list_medium_line_t2_g2_g

0x7870,	// (0x00096364) list_medium_line_t2_g2_t1_ParamLimits

0x7870,	// (0x00096364) list_medium_line_t2_g2_t1

0x788a,	// (0x0009637e) list_medium_line_t2_g2_t2_ParamLimits

0x788a,	// (0x0009637e) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0009e500) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0009e500) list_medium_line_t2_g2_t

0xbcd6,	// (0x0009a7ca) aid_sp_fs_list_icon_a_sm

0xbcde,	// (0x0009a7d2) aid_sp_fs_list_icon_d

0xbce6,	// (0x0009a7da) aid_sp_fs_text_primary

0xbcef,	// (0x0009a7e3) aid_sp_fs_text_secondary

0xbcf8,	// (0x0009a7ec) list_medium_line

0xbcf8,	// (0x0009a7ec) list_medium_line_g2

0xbcf8,	// (0x0009a7ec) list_medium_line_g3

0xbcf8,	// (0x0009a7ec) list_medium_line_plain

0xbcf8,	// (0x0009a7ec) list_medium_line_plain_t2

0xbcf8,	// (0x0009a7ec) list_medium_line_plain_t3

0xbcf8,	// (0x0009a7ec) list_medium_line_right_icon

0xbcf8,	// (0x0009a7ec) list_medium_line_right_iconx2

0xbcf8,	// (0x0009a7ec) list_medium_line_t2

0xbcf8,	// (0x0009a7ec) list_medium_line_t2_g2

0xbcf8,	// (0x0009a7ec) list_medium_line_t2_g3

0xbcf8,	// (0x0009a7ec) list_medium_line_t2_right_icon

0xbcf8,	// (0x0009a7ec) list_medium_line_t2_right_iconx2

0xbcf8,	// (0x0009a7ec) list_medium_line_t3

0xbcf8,	// (0x0009a7ec) list_medium_line_t3_g2

0xbcf8,	// (0x0009a7ec) list_medium_line_t3_g3

0xbcf8,	// (0x0009a7ec) list_medium_line_t3_right_iconx2

0xbd01,	// (0x0009a7f5) list_medium_line_t4_g4

0xbd0a,	// (0x0009a7fe) list_medium_line_x2

0xbd0a,	// (0x0009a7fe) list_medium_line_x2_t2_g2

0xbd0a,	// (0x0009a7fe) list_medium_line_x2_t2_g3

0xbd0a,	// (0x0009a7fe) list_medium_line_x2_t2_g4

0xbd0a,	// (0x0009a7fe) list_medium_line_x2_t3

0xbd0a,	// (0x0009a7fe) list_medium_line_x2_t3_g2

0xbd0a,	// (0x0009a7fe) list_medium_line_x2_t3_g3

0xbd0a,	// (0x0009a7fe) list_medium_line_x2_t3_g4

0xbd0a,	// (0x0009a7fe) list_medium_line_x2_t4_g2

0xbd0a,	// (0x0009a7fe) list_medium_line_x2_t4_g4

0xbd13,	// (0x0009a807) list_medium_line_x3

0xbd13,	// (0x0009a807) list_medium_line_x3_t4

0xbd13,	// (0x0009a807) list_medium_line_x3_t4_g4

0xbd01,	// (0x0009a7f5) list_medium_line_x4_t4

0xbd01,	// (0x0009a7f5) list_medium_line_x4_t4_g7

0xbd01,	// (0x0009a7f5) list_medium_line_x4_t5

0xbd1c,	// (0x0009a810) list_single_fs_dyc_pane_ParamLimits

0xbd1c,	// (0x0009a810) list_single_fs_dyc_pane

0x1962,	// (0x00090456) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x4_t4_g7_g1

0xc246,	// (0x0009ad3a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc246,	// (0x0009ad3a) list_medium_line_x4_t4_g7_g2

0xc252,	// (0x0009ad46) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc252,	// (0x0009ad46) list_medium_line_x4_t4_g7_g3

0xc261,	// (0x0009ad55) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc261,	// (0x0009ad55) list_medium_line_x4_t4_g7_g4

0xc26d,	// (0x0009ad61) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc26d,	// (0x0009ad61) list_medium_line_x4_t4_g7_g5

0xc27c,	// (0x0009ad70) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc27c,	// (0x0009ad70) list_medium_line_x4_t4_g7_g6

0xc28b,	// (0x0009ad7f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc28b,	// (0x0009ad7f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0009e6cb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0009e6cb) list_medium_line_x4_t4_g7_g

0xc297,	// (0x0009ad8b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc297,	// (0x0009ad8b) list_medium_line_x4_t4_g7_t1

0xc2ac,	// (0x0009ada0) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc2ac,	// (0x0009ada0) list_medium_line_x4_t4_g7_t2

0xc2c1,	// (0x0009adb5) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc2c1,	// (0x0009adb5) list_medium_line_x4_t4_g7_t3

0xc2d6,	// (0x0009adca) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc2d6,	// (0x0009adca) list_medium_line_x4_t4_g7_t4

0xc2e8,	// (0x0009addc) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc2e8,	// (0x0009addc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0009e6da) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0009e6da) list_medium_line_x4_t4_g7_t

0xc2fa,	// (0x0009adee) list_single_dyc_row_pane_ParamLimits

0xc2fa,	// (0x0009adee) list_single_dyc_row_pane

0x8b77,	// (0x0009766b) call5_gesture_pane_ParamLimits

0x8b77,	// (0x0009766b) call5_gesture_pane

0x8bcd,	// (0x000976c1) call5_windows_pane_ParamLimits

0x8bcd,	// (0x000976c1) call5_windows_pane

0x8c73,	// (0x00097767) call5_swipe_1_pane_cp_ParamLimits

0x8c73,	// (0x00097767) call5_swipe_1_pane_cp

0x8c7f,	// (0x00097773) call5_swipe_2_pane_cp_ParamLimits

0x8c7f,	// (0x00097773) call5_swipe_2_pane_cp

0xec64,	// (0x0009d758) call5_image_pane_cp

0x8c8b,	// (0x0009777f) popup_call5_audio_first_window_cp_ParamLimits

0x8c8b,	// (0x0009777f) popup_call5_audio_first_window_cp

0xc984,	// (0x0009b478) call5_swipe_1_pane_g1_cp_ParamLimits

0xc984,	// (0x0009b478) call5_swipe_1_pane_g1_cp

0xc9c4,	// (0x0009b4b8) call5_swipe_1_pane_g2_cp

0xc99d,	// (0x0009b491) call5_swipe_1_pane_t1_cp_ParamLimits

0xc99d,	// (0x0009b491) call5_swipe_1_pane_t1_cp

0xc984,	// (0x0009b478) call5_swipe_2_pane_g1_cp_ParamLimits

0xc984,	// (0x0009b478) call5_swipe_2_pane_g1_cp

0xc9cc,	// (0x0009b4c0) call5_swipe_2_pane_g2_cp

0xc9d4,	// (0x0009b4c8) call5_swipe_2_pane_t1_cp_ParamLimits

0xc9d4,	// (0x0009b4c8) call5_swipe_2_pane_t1_cp

0xee3d,	// (0x0009d931) main_sp_fs_email_pane

0xc9e9,	// (0x0009b4dd) main_sp_fs_listscroll_pane_te

0xc9f2,	// (0x0009b4e6) popup_sp_fs_action_menu_pane_ParamLimits

0xc9f2,	// (0x0009b4e6) popup_sp_fs_action_menu_pane

0xaaed,	// (0x000995e1) bg_sp_fs_ctrlbar_pane_g1

0xca34,	// (0x0009b528) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca3d,	// (0x0009b531) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xca46,	// (0x0009b53a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xaaed,	// (0x000995e1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccf,	// (0x0009e7c3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa8d0,	// (0x000993c4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa8d0,	// (0x000993c4) bg_sp_fs_ctrlbar_ddmenu_pane

0xca4f,	// (0x0009b543) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xca4f,	// (0x0009b543) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xca5b,	// (0x0009b54f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xca5b,	// (0x0009b54f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd8,	// (0x0009e7cc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd8,	// (0x0009e7cc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xca67,	// (0x0009b55b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xca67,	// (0x0009b55b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xca81,	// (0x0009b575) list_medium_line_t2_right_icon_g1

0x8c97,	// (0x0009778b) list_medium_line_t2_right_icon_t1

0x8ca7,	// (0x0009779b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdd,	// (0x0009e7d1) list_medium_line_t2_right_icon_t

0xa5e5,	// (0x000990d9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa5e5,	// (0x000990d9) bg_sp_fs_ctrlbar_pane

0x8d04,	// (0x000977f8) main_sp_fs_ctrlbar_button_pane_cp01

0x8d0e,	// (0x00097802) main_sp_fs_ctrlbar_ddmenu_pane

0xcac1,	// (0x0009b5b5) main_sp_fs_ctrlbar_pane_g1

0xcacd,	// (0x0009b5c1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce2,	// (0x0009e7d6) main_sp_fs_ctrlbar_pane_g

0xcad9,	// (0x0009b5cd) main_sp_fs_ctrlbar_pane_t1

0x8d18,	// (0x0009780c) main_sp_fs_ctrlbar_pane

0x8d3c,	// (0x00097830) main_sp_fs_listscroll_pane_te_cp01

0x8d5c,	// (0x00097850) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8d5c,	// (0x00097850) popup_sp_fs_action_menu_pane_cp01

0xee3d,	// (0x0009d931) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xee3d,	// (0x0009d931) bg_sp_fs_highlight_list_pane_cp01

0xcafe,	// (0x0009b5f2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcafe,	// (0x0009b5f2) sp_fs_action_menu_list_gene_pane_g1

0xcb0d,	// (0x0009b601) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcb0d,	// (0x0009b601) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcec,	// (0x0009e7e0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcec,	// (0x0009e7e0) sp_fs_action_menu_list_gene_pane_g

0xcb1a,	// (0x0009b60e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcb1a,	// (0x0009b60e) sp_fs_action_menu_list_gene_pane_t1

0xcb32,	// (0x0009b626) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcb32,	// (0x0009b626) sp_fs_action_menu_list_gene_pane

0xcb51,	// (0x0009b645) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcb51,	// (0x0009b645) popup_sp_fs_action_menu_bg_pane

0xcb5f,	// (0x0009b653) sp_fs_action_menu_list_pane_ParamLimits

0xcb5f,	// (0x0009b653) sp_fs_action_menu_list_pane

0xcb7f,	// (0x0009b673) sp_fs_scroll_pane_cp01_ParamLimits

0xcb7f,	// (0x0009b673) sp_fs_scroll_pane_cp01

0x8d76,	// (0x0009786a) list_medium_line_plain_t2_t1

0x8d86,	// (0x0009787a) list_medium_line_plain_t2_t2

0x0001,

0xfcf1,	// (0x0009e7e5) list_medium_line_plain_t2_t

0x8d96,	// (0x0009788a) list_medium_line_plain_t3_t1

0x8da6,	// (0x0009789a) list_medium_line_plain_t3_t2

0x8db4,	// (0x000978a8) list_medium_line_plain_t3_t3

0x0002,

0xfcf6,	// (0x0009e7ea) list_medium_line_plain_t3_t

0x1962,	// (0x00090456) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x2_t2_g2_g1

0x197a,	// (0x0009046e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x197a,	// (0x0009046e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0009dd59) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0009dd59) list_medium_line_x2_t2_g2_g

0x29c0,	// (0x000914b4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x29c0,	// (0x000914b4) list_medium_line_x2_t2_g2_t1

0x19af,	// (0x000904a3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x19af,	// (0x000904a3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfd,	// (0x0009e7f1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfd,	// (0x0009e7f1) list_medium_line_x2_t2_g2_t

0x1962,	// (0x00090456) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x2_t4_g2_g1

0xcba5,	// (0x0009b699) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcba5,	// (0x0009b699) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd02,	// (0x0009e7f6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd02,	// (0x0009e7f6) list_medium_line_x2_t4_g2_g

0x8dc2,	// (0x000978b6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8dc2,	// (0x000978b6) list_medium_line_x2_t4_g2_t1

0x8dd9,	// (0x000978cd) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8dd9,	// (0x000978cd) list_medium_line_x2_t4_g2_t2

0x8dee,	// (0x000978e2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8dee,	// (0x000978e2) list_medium_line_x2_t4_g2_t3

0x19af,	// (0x000904a3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x19af,	// (0x000904a3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd07,	// (0x0009e7fb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd07,	// (0x0009e7fb) list_medium_line_x2_t4_g2_t

0xcbb7,	// (0x0009b6ab) list_medium_line_t3_right_iconx2_g1

0xca81,	// (0x0009b575) list_medium_line_t3_right_iconx2_g2

0x8e00,	// (0x000978f4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd10,	// (0x0009e804) list_medium_line_t3_right_iconx2_g

0x8e0a,	// (0x000978fe) list_medium_line_t3_right_iconx2_t1

0x8e1a,	// (0x0009790e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd17,	// (0x0009e80b) list_medium_line_t3_right_iconx2_t

0x1962,	// (0x00090456) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x3_t4_g4_g1

0x196e,	// (0x00090462) list_medium_line_x3_t4_g4_g2_ParamLimits

0x196e,	// (0x00090462) list_medium_line_x3_t4_g4_g2

0x1a16,	// (0x0009050a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1a16,	// (0x0009050a) list_medium_line_x3_t4_g4_g3

0xcbbf,	// (0x0009b6b3) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcbbf,	// (0x0009b6b3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1c,	// (0x0009e810) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1c,	// (0x0009e810) list_medium_line_x3_t4_g4_g

0x8e28,	// (0x0009791c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8e28,	// (0x0009791c) list_medium_line_x3_t4_g4_t1

0x8e3f,	// (0x00097933) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8e3f,	// (0x00097933) list_medium_line_x3_t4_g4_t2

0xcbcb,	// (0x0009b6bf) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcbcb,	// (0x0009b6bf) list_medium_line_x3_t4_g4_t3

0xcbe0,	// (0x0009b6d4) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcbe0,	// (0x0009b6d4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd25,	// (0x0009e819) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd25,	// (0x0009e819) list_medium_line_x3_t4_g4_t

0x8e5a,	// (0x0009794e) list_single_dyc_row_text_pane_t1_ParamLimits

0x8e5a,	// (0x0009794e) list_single_dyc_row_text_pane_t1

0x8ea3,	// (0x00097997) list_single_dyc_row_text_pane_t2_ParamLimits

0x8ea3,	// (0x00097997) list_single_dyc_row_text_pane_t2

0xcbfd,	// (0x0009b6f1) list_single_dyc_row_text_pane_t3_ParamLimits

0xcbfd,	// (0x0009b6f1) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2e,	// (0x0009e822) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2e,	// (0x0009e822) list_single_dyc_row_text_pane_t

0xcc0f,	// (0x0009b703) list_single_dyc_row_pane_g1_ParamLimits

0xcc0f,	// (0x0009b703) list_single_dyc_row_pane_g1

0xcc1b,	// (0x0009b70f) list_single_dyc_row_pane_g2_ParamLimits

0xcc1b,	// (0x0009b70f) list_single_dyc_row_pane_g2

0xcc27,	// (0x0009b71b) list_single_dyc_row_pane_g3_ParamLimits

0xcc27,	// (0x0009b71b) list_single_dyc_row_pane_g3

0xcc33,	// (0x0009b727) list_single_dyc_row_pane_g4_ParamLimits

0xcc33,	// (0x0009b727) list_single_dyc_row_pane_g4

0x0003,

0xfd35,	// (0x0009e829) list_single_dyc_row_pane_g_ParamLimits

0xfd35,	// (0x0009e829) list_single_dyc_row_pane_g

0xcc3f,	// (0x0009b733) list_single_dyc_row_text_pane_ParamLimits

0xcc3f,	// (0x0009b733) list_single_dyc_row_text_pane

0xedc5,	// (0x0009d8b9) bg_sp_fs_scroll_pane

0xcc5e,	// (0x0009b752) thumb_sp_fs_scroll_pane

0xb9a8,	// (0x0009a49c) list_medium_line_g1_ParamLimits

0xb9a8,	// (0x0009a49c) list_medium_line_g1

0xcc67,	// (0x0009b75b) list_medium_line_t1_ParamLimits

0xcc67,	// (0x0009b75b) list_medium_line_t1

0x1962,	// (0x00090456) list_medium_line_x2_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x2_g1

0x196e,	// (0x00090462) list_medium_line_x2_g2_ParamLimits

0x196e,	// (0x00090462) list_medium_line_x2_g2

0x0001,

0xfd3e,	// (0x0009e832) list_medium_line_x2_g_ParamLimits

0xfd3e,	// (0x0009e832) list_medium_line_x2_g

0xcc7c,	// (0x0009b770) list_medium_line_x2_t1_ParamLimits

0xcc7c,	// (0x0009b770) list_medium_line_x2_t1

0x1962,	// (0x00090456) list_medium_line_x3_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x3_g1

0x196e,	// (0x00090462) list_medium_line_x3_g2_ParamLimits

0x196e,	// (0x00090462) list_medium_line_x3_g2

0x0001,

0xfd3e,	// (0x0009e832) list_medium_line_x3_g_ParamLimits

0xfd3e,	// (0x0009e832) list_medium_line_x3_g

0xcc7c,	// (0x0009b770) list_medium_line_x3_t1_ParamLimits

0xcc7c,	// (0x0009b770) list_medium_line_x3_t1

0xcc92,	// (0x0009b786) thumb_sp_fs_scroll_pane_g1

0xcc9b,	// (0x0009b78f) thumb_sp_fs_scroll_pane_g2

0xcca4,	// (0x0009b798) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd43,	// (0x0009e837) thumb_sp_fs_scroll_pane_g

0xcc92,	// (0x0009b786) bg_sp_fs_scroll_pane_g1

0xcc9b,	// (0x0009b78f) bg_sp_fs_scroll_pane_g2

0xcca4,	// (0x0009b798) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd43,	// (0x0009e837) bg_sp_fs_scroll_pane_g

0x1962,	// (0x00090456) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1962,	// (0x00090456) list_medium_line_x2_t3_g4_g1

0x1a0a,	// (0x000904fe) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1a0a,	// (0x000904fe) list_medium_line_x2_t3_g4_g2

0x196e,	// (0x00090462) list_medium_line_x2_t3_g4_g3_ParamLimits

0x196e,	// (0x00090462) list_medium_line_x2_t3_g4_g3

0x197a,	// (0x0009046e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x197a,	// (0x0009046e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0009ddd5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0009ddd5) list_medium_line_x2_t3_g4_g

0x8efd,	// (0x000979f1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8efd,	// (0x000979f1) list_medium_line_x2_t3_g4_t1

0x8f17,	// (0x00097a0b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8f17,	// (0x00097a0b) list_medium_line_x2_t3_g4_t2

0x19af,	// (0x000904a3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x19af,	// (0x000904a3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4a,	// (0x0009e83e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4a,	// (0x0009e83e) list_medium_line_x2_t3_g4_t

0xb9a8,	// (0x0009a49c) list_medium_line_g2_g1_ParamLimits

0xb9a8,	// (0x0009a49c) list_medium_line_g2_g1

0xb9b4,	// (0x0009a4a8) list_medium_line_g2_g2_ParamLimits

0xb9b4,	// (0x0009a4a8) list_medium_line_g2_g2

0x0001,

0xfa07,	// (0x0009e4fb) list_medium_line_g2_g_ParamLimits

0xfa07,	// (0x0009e4fb) list_medium_line_g2_g

0xccad,	// (0x0009b7a1) list_medium_line_g2_t1_ParamLimits

0xccad,	// (0x0009b7a1) list_medium_line_g2_t1

0xb9a8,	// (0x0009a49c) list_medium_line_t3_g2_g1_ParamLimits

0xb9a8,	// (0x0009a49c) list_medium_line_t3_g2_g1

0xb9b4,	// (0x0009a4a8) list_medium_line_t3_g2_g2_ParamLimits

0xb9b4,	// (0x0009a4a8) list_medium_line_t3_g2_g2

0x0001,

0xfa07,	// (0x0009e4fb) list_medium_line_t3_g2_g_ParamLimits

0xfa07,	// (0x0009e4fb) list_medium_line_t3_g2_g

0x8f30,	// (0x00097a24) list_medium_line_t3_g2_t1_ParamLimits

0x8f30,	// (0x00097a24) list_medium_line_t3_g2_t1

0x8f47,	// (0x00097a3b) list_medium_line_t3_g2_t2_ParamLimits

0x8f47,	// (0x00097a3b) list_medium_line_t3_g2_t2

0x8f5c,	// (0x00097a50) list_medium_line_t3_g2_t3_ParamLimits

0x8f5c,	// (0x00097a50) list_medium_line_t3_g2_t3

0x0002,

0xfd51,	// (0x0009e845) list_medium_line_t3_g2_t_ParamLimits

0xfd51,	// (0x0009e845) list_medium_line_t3_g2_t

0xca81,	// (0x0009b575) list_medium_line_right_icon_g1

0xccc2,	// (0x0009b7b6) list_medium_line_right_icon_t1

0xb9a8,	// (0x0009a49c) list_medium_line_t2_g1_ParamLimits

0xb9a8,	// (0x0009a49c) list_medium_line_t2_g1

0x8f75,	// (0x00097a69) list_medium_line_t2_t1_ParamLimits

0x8f75,	// (0x00097a69) list_medium_line_t2_t1

0x8f8f,	// (0x00097a83) list_medium_line_t2_t2_ParamLimits

0x8f8f,	// (0x00097a83) list_medium_line_t2_t2

0x0001,

0xfd58,	// (0x0009e84c) list_medium_line_t2_t_ParamLimits

0xfd58,	// (0x0009e84c) list_medium_line_t2_t

0xb9a8,	// (0x0009a49c) list_medium_line_t3_g1_ParamLimits

0xb9a8,	// (0x0009a49c) list_medium_line_t3_g1

0x8fa8,	// (0x00097a9c) list_medium_line_t3_t1_ParamLimits

0x8fa8,	// (0x00097a9c) list_medium_line_t3_t1

0x8fc2,	// (0x00097ab6) list_medium_line_t3_t2_ParamLimits

0x8fc2,	// (0x00097ab6) list_medium_line_t3_t2

0x8fd7,	// (0x00097acb) list_medium_line_t3_t3_ParamLimits

0x8fd7,	// (0x00097acb) list_medium_line_t3_t3

0x0002,

0xfd5d,	// (0x0009e851) list_medium_line_t3_t_ParamLimits

0xfd5d,	// (0x0009e851) list_medium_line_t3_t

0xb9a8,	// (0x0009a49c) list_medium_line_g3_g1_ParamLimits

0xb9a8,	// (0x0009a49c) list_medium_line_g3_g1

0xccd0,	// (0x0009b7c4) list_medium_line_g3_g2_ParamLimits

0xccd0,	// (0x0009b7c4) list_medium_line_g3_g2

0xb9b4,	// (0x0009a4a8) list_medium_line_g3_g3_ParamLimits

0xb9b4,	// (0x0009a4a8) list_medium_line_g3_g3

0x0002,

0xfd64,	// (0x0009e858) list_medium_line_g3_g_ParamLimits

0xfd64,	// (0x0009e858) list_medium_line_g3_g

0xccdc,	// (0x0009b7d0) list_medium_line_g3_t1_ParamLimits

0xccdc,	// (0x0009b7d0) list_medium_line_g3_t1

0xb9a8,	// (0x0009a49c) list_medium_line_t2_g3_g1_ParamLimits

0xb9a8,	// (0x0009a49c) list_medium_line_t2_g3_g1

0xccd0,	// (0x0009b7c4) list_medium_line_t2_g3_g2_ParamLimits

0xccd0,	// (0x0009b7c4) list_medium_line_t2_g3_g2

0xb9b4,	// (0x0009a4a8) list_medium_line_t2_g3_g3_ParamLimits

0xb9b4,	// (0x0009a4a8) list_medium_line_t2_g3_g3

0x0002,

0xfd64,	// (0x0009e858) list_medium_line_t2_g3_g_ParamLimits

0xfd64,	// (0x0009e858) list_medium_line_t2_g3_g

0x8fec,	// (0x00097ae0) list_medium_line_t2_g3_t1_ParamLimits

0x8fec,	// (0x00097ae0) list_medium_line_t2_g3_t1

0x9003,	// (0x00097af7) list_medium_line_t2_g3_t2_ParamLimits

0x9003,	// (0x00097af7) list_medium_line_t2_g3_t2

0x0001,

0xfd6b,	// (0x0009e85f) list_medium_line_t2_g3_t_ParamLimits

0xfd6b,	// (0x0009e85f) list_medium_line_t2_g3_t

0xb9a8,	// (0x0009a49c) list_medium_line_t3_g3_g1_ParamLimits

0xb9a8,	// (0x0009a49c) list_medium_line_t3_g3_g1

0xccd0,	// (0x0009b7c4) list_medium_line_t3_g3_g2_ParamLimits

0xccd0,	// (0x0009b7c4) list_medium_line_t3_g3_g2

0xb9b4,	// (0x0009a4a8) list_medium_line_t3_g3_g3_ParamLimits

0xb9b4,	// (0x0009a4a8) list_medium_line_t3_g3_g3

0x0002,

0xfd64,	// (0x0009e858) list_medium_line_t3_g3_g_ParamLimits

0xfd64,	// (0x0009e858) list_medium_line_t3_g3_g

0x901e,	// (0x00097b12) list_medium_line_t3_g3_t1_ParamLimits

0x901e,	// (0x00097b12) list_medium_line_t3_g3_t1

0x9037,	// (0x00097b2b) list_medium_line_t3_g3_t2_ParamLimits

0x9037,	// (0x00097b2b) list_medium_line_t3_g3_t2

0x904d,	// (0x00097b41) list_medium_line_t3_g3_t3_ParamLimits

0x904d,	// (0x00097b41) list_medium_line_t3_g3_t3

0x0002,

0xfd70,	// (0x0009e864) list_medium_line_t3_g3_t_ParamLimits

0xfd70,	// (0x0009e864) list_medium_line_t3_g3_t

0xcbb7,	// (0x0009b6ab) list_medium_line_right_iconx2_g1

0xca81,	// (0x0009b575) list_medium_line_right_iconx2_g2

0x0001,

0xfd77,	// (0x0009e86b) list_medium_line_right_iconx2_g

0xccf1,	// (0x0009b7e5) list_medium_line_right_iconx2_t1

0xcbb7,	// (0x0009b6ab) list_medium_line_t2_right_iconx2_g1

0xca81,	// (0x0009b575) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd77,	// (0x0009e86b) list_medium_line_t2_right_iconx2_g

0x9067,	// (0x00097b5b) list_medium_line_t2_right_iconx2_t1

0x9077,	// (0x00097b6b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7c,	// (0x0009e870) list_medium_line_t2_right_iconx2_t

0xccff,	// (0x0009b7f3) list_medium_line_x4_t4_t1

0x9089,	// (0x00097b7d) list_medium_line_x4_t4_t2

0x9099,	// (0x00097b8d) list_medium_line_x4_t4_t3

0x90a9,	// (0x00097b9d) list_medium_line_x4_t4_t4

0x0003,

0xfd81,	// (0x0009e875) list_medium_line_x4_t4_t

0x90fc,	// (0x00097bf0) tport_appsw_pane_ParamLimits

0x90fc,	// (0x00097bf0) tport_appsw_pane

0x910d,	// (0x00097c01) tport_contact_pane_ParamLimits

0x910d,	// (0x00097c01) tport_contact_pane

0x9126,	// (0x00097c1a) tport_listscroll_pane_ParamLimits

0x9126,	// (0x00097c1a) tport_listscroll_pane

0x9141,	// (0x00097c35) cell_tport_appsw_pane_ParamLimits

0x9141,	// (0x00097c35) cell_tport_appsw_pane

0xb731,	// (0x0009a225) tport_appsw_pane_g1_ParamLimits

0xb731,	// (0x0009a225) tport_appsw_pane_g1

0xcd0d,	// (0x0009b801) tport_contact_pane_g1

0xcd16,	// (0x0009b80a) tport_contact_pane_t1

0xcd24,	// (0x0009b818) tport_contact_pane_t2

0x0001,

0xfd8a,	// (0x0009e87e) tport_contact_pane_t

0xcd32,	// (0x0009b826) list_tport_pane

0xcd3b,	// (0x0009b82f) scroll_pane_cp_030

0xcd4c,	// (0x0009b840) cell_tport_appsw_pane_g1

0xcd5c,	// (0x0009b850) cell_tport_appsw_pane_t1

0xedc5,	// (0x0009d8b9) grid_highlight_pane_cp019

0x9181,	// (0x00097c75) list_tport_double_graphic_pane_ParamLimits

0x9181,	// (0x00097c75) list_tport_double_graphic_pane

0xee3d,	// (0x0009d931) list_highlight_pane_cp023_ParamLimits

0xee3d,	// (0x0009d931) list_highlight_pane_cp023

0x918e,	// (0x00097c82) list_tport_double_graphic_pane_g1_ParamLimits

0x918e,	// (0x00097c82) list_tport_double_graphic_pane_g1

0x919b,	// (0x00097c8f) list_tport_double_graphic_pane_t1_ParamLimits

0x919b,	// (0x00097c8f) list_tport_double_graphic_pane_t1

0x91b0,	// (0x00097ca4) list_tport_double_graphic_pane_t2_ParamLimits

0x91b0,	// (0x00097ca4) list_tport_double_graphic_pane_t2

0x0001,

0xfd96,	// (0x0009e88a) list_tport_double_graphic_pane_t_ParamLimits

0xfd96,	// (0x0009e88a) list_tport_double_graphic_pane_t

0xedc5,	// (0x0009d8b9) main_cale_note_pane

0x6ff1,	// (0x00095ae5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ff1,	// (0x00095ae5) cell_vitu2_function_top_wide_pane_cp01

0x88b3,	// (0x000973a7) wait_bar_pane_cp05_ParamLimits

0xedc5,	// (0x0009d8b9) listscroll_cmail_pane

0xcd72,	// (0x0009b866) list_cmail_pane

0x91cc,	// (0x00097cc0) list_cmail_body_pane

0x91e1,	// (0x00097cd5) list_single_cmail_header_caption_pane

0x91fa,	// (0x00097cee) list_single_cmail_header_detail_pane_ParamLimits

0x91fa,	// (0x00097cee) list_single_cmail_header_detail_pane

0x9223,	// (0x00097d17) list_single_cmail_header_caption_pane_t1

0x9233,	// (0x00097d27) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9233,	// (0x00097d27) list_single_cmail_header_detail_pane_g1

0xcd92,	// (0x0009b886) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcd92,	// (0x0009b886) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9b,	// (0x0009e88f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9b,	// (0x0009e88f) list_single_cmail_header_detail_pane_g

0xcdab,	// (0x0009b89f) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcdab,	// (0x0009b89f) list_single_cmail_header_detail_pane_t1

0xcddd,	// (0x0009b8d1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcddd,	// (0x0009b8d1) list_single_cmail_header_editor_pane_bg

0xcdef,	// (0x0009b8e3) list_cmail_body_pane_g1

0xcdf8,	// (0x0009b8ec) list_cmail_body_pane_t1

0xb76e,	// (0x0009a262) list_single_cmail_header_editor_pane_bg_g1

0xe5ec,	// (0x0009d0e0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb77e,	// (0x0009a272) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb776,	// (0x0009a26a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb9a0,	// (0x0009a494) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb79e,	// (0x0009a292) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb78e,	// (0x0009a282) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb796,	// (0x0009a28a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe5cc,	// (0x0009d0c0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9271,	// (0x00097d65) calenote_gesture_pane_ParamLimits

0x9271,	// (0x00097d65) calenote_gesture_pane

0x9291,	// (0x00097d85) calenote_window_pane_ParamLimits

0x9291,	// (0x00097d85) calenote_window_pane

0xce06,	// (0x0009b8fa) popup_note_window_cp01

0x92ad,	// (0x00097da1) calenote_swipe_1_pane_ParamLimits

0x92ad,	// (0x00097da1) calenote_swipe_1_pane

0x8c7f,	// (0x00097773) calenote_swipe_2_pane_ParamLimits

0x8c7f,	// (0x00097773) calenote_swipe_2_pane

0xc984,	// (0x0009b478) calenote_swipe_1_pane_g1_ParamLimits

0xc984,	// (0x0009b478) calenote_swipe_1_pane_g1

0xc991,	// (0x0009b485) calenote_swipe_1_pane_g2_ParamLimits

0xc991,	// (0x0009b485) calenote_swipe_1_pane_g2

0x0001,

0xfcc5,	// (0x0009e7b9) calenote_swipe_1_pane_g_ParamLimits

0xfcc5,	// (0x0009e7b9) calenote_swipe_1_pane_g

0xce18,	// (0x0009b90c) calenote_swipe_1_pane_t1_ParamLimits

0xce18,	// (0x0009b90c) calenote_swipe_1_pane_t1

0xc984,	// (0x0009b478) calenote_swipe_2_pane_g1_ParamLimits

0xc984,	// (0x0009b478) calenote_swipe_2_pane_g1

0xce37,	// (0x0009b92b) calenote_swipe_2_pane_g2_ParamLimits

0xce37,	// (0x0009b92b) calenote_swipe_2_pane_g2

0x0001,

0xfda7,	// (0x0009e89b) calenote_swipe_2_pane_g_ParamLimits

0xfda7,	// (0x0009e89b) calenote_swipe_2_pane_g

0xce43,	// (0x0009b937) calenote_swipe_2_pane_t1_ParamLimits

0xce43,	// (0x0009b937) calenote_swipe_2_pane_t1

0xedc5,	// (0x0009d8b9) main_mup_navstr_pane

0x5c48,	// (0x0009473c) main_mup3_pane_t7_ParamLimits

0x5c48,	// (0x0009473c) main_mup3_pane_t7

0xb465,	// (0x00099f59) main_mp4_pane_g6_ParamLimits

0xb465,	// (0x00099f59) main_mp4_pane_g6

0xd9be,	// (0x0009c4b2) main_image3_pane_t4_ParamLimits

0xd9be,	// (0x0009c4b2) main_image3_pane_t4

0x92c2,	// (0x00097db6) popup_navstr_preview_pane_ParamLimits

0x92c2,	// (0x00097db6) popup_navstr_preview_pane

0x92d6,	// (0x00097dca) scroll_navstr_pane_ParamLimits

0x92d6,	// (0x00097dca) scroll_navstr_pane

0xedc5,	// (0x0009d8b9) bg_popup_preview_window_pane_cp04

0xce6a,	// (0x0009b95e) popup_navstr_preview_pane_t1

0x92ea,	// (0x00097dde) scroll_navstr_pane_g1_ParamLimits

0x92ea,	// (0x00097dde) scroll_navstr_pane_g1

0x92fe,	// (0x00097df2) scroll_navstr_pane_t1_ParamLimits

0x92fe,	// (0x00097df2) scroll_navstr_pane_t1

0xce0f,	// (0x0009b903) bg_button_pane_cp014

0xce0f,	// (0x0009b903) bg_button_pane_cp030

0xc8e8,	// (0x0009b3dc) list_double_fisheye_pane_g4_ParamLimits

0xc8e8,	// (0x0009b3dc) list_double_fisheye_pane_g4

0xc8f4,	// (0x0009b3e8) list_double_fisheye_pane_g5_ParamLimits

0xc8f4,	// (0x0009b3e8) list_double_fisheye_pane_g5

0xcd7a,	// (0x0009b86e) sp_fs_scroll_pane_cp03

0xcac1,	// (0x0009b5b5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcacd,	// (0x0009b5c1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce2,	// (0x0009e7d6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcad9,	// (0x0009b5cd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x91c2,	// (0x00097cb6) sp_fs_scroll_pane_cp02

0xe2f0,	// (0x0009cde4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe2f0,	// (0x0009cde4) popup_sp_fs_calendar_preview_list_single_pane

0xedc5,	// (0x0009d8b9) main_cam6_pano_pane

0xee3d,	// (0x0009d931) main_mup3_pane_ParamLimits

0xedc5,	// (0x0009d8b9) main_phacti_pane

0x8786,	// (0x0009727a) bg_button_pane_cp11

0x87a0,	// (0x00097294) main_mobtv_info_pane_g2_ParamLimits

0x87a0,	// (0x00097294) main_mobtv_info_pane_g2

0x0001,

0xfc42,	// (0x0009e736) main_mobtv_info_pane_g_ParamLimits

0xfc42,	// (0x0009e736) main_mobtv_info_pane_g

0x897d,	// (0x00097471) sc_clock_pane_t5_ParamLimits

0x897d,	// (0x00097471) sc_clock_pane_t5

0x8a08,	// (0x000974fc) main_radioblah_pane_g1_ParamLimits

0xc841,	// (0x0009b335) main_radioblah_pane_t3_ParamLimits

0xc841,	// (0x0009b335) main_radioblah_pane_t3

0xc859,	// (0x0009b34d) main_radioblah_pane_t4_ParamLimits

0xc859,	// (0x0009b34d) main_radioblah_pane_t4

0x8a30,	// (0x00097524) main_radioblah_text_pane_ParamLimits

0x8a30,	// (0x00097524) main_radioblah_text_pane

0x8a42,	// (0x00097536) main_radioblah_info_pane_g1_ParamLimits

0x8add,	// (0x000975d1) main_radioblah_info_pane_t4_ParamLimits

0x8add,	// (0x000975d1) main_radioblah_info_pane_t4

0xee3d,	// (0x0009d931) main_sp_fs_calendar_pane

0x9314,	// (0x00097e08) main_phacti_pane_g1

0x931c,	// (0x00097e10) phacti_note_pane_ParamLimits

0x931c,	// (0x00097e10) phacti_note_pane

0xce81,	// (0x0009b975) phacti_term_pane_ParamLimits

0xce81,	// (0x0009b975) phacti_term_pane

0xce96,	// (0x0009b98a) phacti_note_pane_t1_ParamLimits

0xce96,	// (0x0009b98a) phacti_note_pane_t1

0xcead,	// (0x0009b9a1) phacti_term_pane_g1

0xceb5,	// (0x0009b9a9) phacti_term_pane_t1_ParamLimits

0xceb5,	// (0x0009b9a9) phacti_term_pane_t1

0xcedf,	// (0x0009b9d3) popup_sp_fs_calendar_preview_list_single_pane_g1

0xcee7,	// (0x0009b9db) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb1,	// (0x0009e8a5) popup_sp_fs_calendar_preview_list_single_pane_g

0xceef,	// (0x0009b9e3) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xceef,	// (0x0009b9e3) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcf05,	// (0x0009b9f9) aid_popup_sp_fs_bg_corner_pane

0xaaed,	// (0x000995e1) popup_sp_fs_calendar_preview_bg_pane_g1

0xedc5,	// (0x0009d8b9) popup_sp_fs_calendar_preview_bg_pane

0xcf0d,	// (0x0009ba01) popup_sp_fs_calendar_preview_list_pane

0xee3d,	// (0x0009d931) bg_main_sp_fs_cale_pane_ParamLimits

0xee3d,	// (0x0009d931) bg_main_sp_fs_cale_pane

0xcf1e,	// (0x0009ba12) listscroll_cale_mrui_pane_ParamLimits

0xcf1e,	// (0x0009ba12) listscroll_cale_mrui_pane

0xcf32,	// (0x0009ba26) listscroll_sp_fs_schedule_track_pane

0xcf3b,	// (0x0009ba2f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcf3b,	// (0x0009ba2f) main_sp_fs_ctrlbar_pane_cp01

0xcf4c,	// (0x0009ba40) main_sp_fs_ribbon_pane

0xcf54,	// (0x0009ba48) popup_sp_fs_cale_preview_window

0x9377,	// (0x00097e6b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9377,	// (0x00097e6b) list_single_sp_fs_schedule_track_pane

0xee3d,	// (0x0009d931) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xee3d,	// (0x0009d931) bg_sp_fs_highlight_list_pane_cp03

0x938c,	// (0x00097e80) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x938c,	// (0x00097e80) list_single_sp_fs_schedule_track_pane_g1

0x9398,	// (0x00097e8c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9398,	// (0x00097e8c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb6,	// (0x0009e8aa) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb6,	// (0x0009e8aa) list_single_sp_fs_schedule_track_pane_g

0x93a4,	// (0x00097e98) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x93a4,	// (0x00097e98) list_single_sp_fs_schedule_track_pane_t1

0x93be,	// (0x00097eb2) sp_fs_schedule_track_pane_ParamLimits

0x93be,	// (0x00097eb2) sp_fs_schedule_track_pane

0xcf66,	// (0x0009ba5a) sp_fs_schedule_track_pane_g1

0xcf6e,	// (0x0009ba62) sp_fs_schedule_track_pane_g2

0xcf76,	// (0x0009ba6a) sp_fs_schedule_track_pane_g3

0xcf7e,	// (0x0009ba72) sp_fs_schedule_track_pane_g4

0xcf86,	// (0x0009ba7a) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbb,	// (0x0009e8af) sp_fs_schedule_track_pane_g

0xb76e,	// (0x0009a262) bg_sp_fs_schedule_viewer_highlight_g1

0xe5ec,	// (0x0009d0e0) bg_sp_fs_schedule_viewer_highlight_g2

0xb776,	// (0x0009a26a) bg_sp_fs_schedule_viewer_highlight_g3

0xb77e,	// (0x0009a272) bg_sp_fs_schedule_viewer_highlight_g4

0xb9a0,	// (0x0009a494) bg_sp_fs_schedule_viewer_highlight_g5

0xb78e,	// (0x0009a282) bg_sp_fs_schedule_viewer_highlight_g6

0xb796,	// (0x0009a28a) bg_sp_fs_schedule_viewer_highlight_g7

0xb79e,	// (0x0009a292) bg_sp_fs_schedule_viewer_highlight_g8

0xe5cc,	// (0x0009d0c0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc6,	// (0x0009e8ba) bg_sp_fs_schedule_viewer_highlight_g

0xedc5,	// (0x0009d8b9) bg_main_sp_fs_ribbon_pane

0x93cf,	// (0x00097ec3) main_sp_fs_ribbon_pane_g1

0xcf8e,	// (0x0009ba82) main_sp_fs_ribbon_pane_t1

0x93d8,	// (0x00097ecc) main_sp_fs_ribbon_pane_t2

0xcf9d,	// (0x0009ba91) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd9,	// (0x0009e8cd) main_sp_fs_ribbon_pane_t

0xcfac,	// (0x0009baa0) main_sp_fs_ribbon_scheduler_pane

0xcfb4,	// (0x0009baa8) bg_main_sp_fs_ribbon_pane_g1

0xcfbd,	// (0x0009bab1) bg_main_sp_fs_ribbon_pane_g2

0xcfc6,	// (0x0009baba) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde0,	// (0x0009e8d4) bg_main_sp_fs_ribbon_pane_g

0xcfce,	// (0x0009bac2) main_sp_fs_ribbon_scheduler_pane_g1

0xcfd7,	// (0x0009bacb) main_sp_fs_ribbon_scheduler_pane_g2

0xcfe0,	// (0x0009bad4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde7,	// (0x0009e8db) main_sp_fs_ribbon_scheduler_pane_g

0xcfe9,	// (0x0009badd) list_cale_mrui_pane

0x93e7,	// (0x00097edb) sp_fs_scroll_pane_cp07_ParamLimits

0x93e7,	// (0x00097edb) sp_fs_scroll_pane_cp07

0x93fb,	// (0x00097eef) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x93fb,	// (0x00097eef) bg_sp_fs_schedule_viewer_highlight

0xcff2,	// (0x0009bae6) list_single_sp_fs_schedule_track_pane_cp01

0xcffa,	// (0x0009baee) list_sp_fs_schedule_track_pane

0xd002,	// (0x0009baf6) sp_fs_scroll_pane_cp06_ParamLimits

0xd002,	// (0x0009baf6) sp_fs_scroll_pane_cp06

0xaaed,	// (0x000995e1) bgmain_sp_fs_calendar_pane_g1

0x940b,	// (0x00097eff) list_single_cale_mrui_pane_ParamLimits

0x940b,	// (0x00097eff) list_single_cale_mrui_pane

0xd014,	// (0x0009bb08) list_single_cale_mrui_row_pane_ParamLimits

0xd014,	// (0x0009bb08) list_single_cale_mrui_row_pane

0xd021,	// (0x0009bb15) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd021,	// (0x0009bb15) list_single_cale_mrui_row_pane_g1

0xd066,	// (0x0009bb5a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd066,	// (0x0009bb5a) list_single_cale_mrui_row_pane_t1

0x942d,	// (0x00097f21) list_single_cale_mrui_row_pane_t2_ParamLimits

0x942d,	// (0x00097f21) list_single_cale_mrui_row_pane_t2

0xd078,	// (0x0009bb6c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd078,	// (0x0009bb6c) list_single_cale_mrui_row_pane_t3

0xd0a7,	// (0x0009bb9b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd0a7,	// (0x0009bb9b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf5,	// (0x0009e8e9) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf5,	// (0x0009e8e9) list_single_cale_mrui_row_pane_t

0x9495,	// (0x00097f89) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9495,	// (0x00097f89) list_single_cmail_header_editor_pane_bg_cp01

0x94bb,	// (0x00097faf) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x94bb,	// (0x00097faf) list_single_cmail_header_editor_pane_bg_cp02

0x94db,	// (0x00097fcf) main_radioblah_text_pane_t1_ParamLimits

0x94db,	// (0x00097fcf) main_radioblah_text_pane_t1

0xd0d6,	// (0x0009bbca) cam6_indi_pane_cp01

0xd0de,	// (0x0009bbd2) cam6_mode_pane_cp01

0xd0e6,	// (0x0009bbda) cam6_pano_pane

0xd0ef,	// (0x0009bbe3) cam6_zoom_pane_cp01

0xd0f7,	// (0x0009bbeb) cam6_pano_image_pane

0xd102,	// (0x0009bbf6) cam6_pano_pane_g1

0xc5a0,	// (0x0009b094) cam6_pano_pane_g2

0xd10b,	// (0x0009bbff) cam6_pano_pane_g3

0xd114,	// (0x0009bc08) cam6_pano_pane_g4

0xb0c8,	// (0x00099bbc) cam6_pano_pane_g5

0xd11d,	// (0x0009bc11) cam6_pano_pane_g6

0xd127,	// (0x0009bc1b) cam6_pano_pane_g7

0xd12f,	// (0x0009bc23) cam6_pano_pane_g8

0xd138,	// (0x0009bc2c) cam6_pano_pane_g9

0x0008,

0xfdfe,	// (0x0009e8f2) cam6_pano_pane_g

0xedc5,	// (0x0009d8b9) main_browser_tag_pane

0xce62,	// (0x0009b956) grid_navstr_albumart_pane

0xd143,	// (0x0009bc37) cell_navstr_albumart_pane_ParamLimits

0xd143,	// (0x0009bc37) cell_navstr_albumart_pane

0xee57,	// (0x0009d94b) cell_navstr_albumart_pane_g1

0xa3fa,	// (0x00098eee) cell_navstr_albumart_pane_g2

0xa40a,	// (0x00098efe) cell_navstr_albumart_pane_g3

0xa402,	// (0x00098ef6) cell_navstr_albumart_pane_g4

0x0003,

0xfe11,	// (0x0009e905) cell_navstr_albumart_pane_g

0x94f6,	// (0x00097fea) bt_list_pane_ParamLimits

0x94f6,	// (0x00097fea) bt_list_pane

0x950b,	// (0x00097fff) bt_list_pane_t1

0x951a,	// (0x0009800e) bt_list_pane_t2

0x0001,

0xfe1a,	// (0x0009e90e) bt_list_pane_t

0xedc5,	// (0x0009d8b9) main_cale_prevew_pane

0x9529,	// (0x0009801d) popup_cale_preview_window_ParamLimits

0x9529,	// (0x0009801d) popup_cale_preview_window

0xee3d,	// (0x0009d931) bg_popup_preview_window_pane_cp05_ParamLimits

0xee3d,	// (0x0009d931) bg_popup_preview_window_pane_cp05

0xd165,	// (0x0009bc59) list_cale_preview_pane_ParamLimits

0xd165,	// (0x0009bc59) list_cale_preview_pane

0x9540,	// (0x00098034) list_double_cale_preview_pane_ParamLimits

0x9540,	// (0x00098034) list_double_cale_preview_pane

0x9552,	// (0x00098046) list_single_cale_preview_pane_ParamLimits

0x9552,	// (0x00098046) list_single_cale_preview_pane

0x9566,	// (0x0009805a) list_single_cale_preview_pane_g1

0x956e,	// (0x00098062) list_single_cale_preview_pane_t1_ParamLimits

0x956e,	// (0x00098062) list_single_cale_preview_pane_t1

0x9583,	// (0x00098077) list_double_cale_preview_pane_g1

0x958b,	// (0x0009807f) list_double_cale_preview_pane_t1_ParamLimits

0x958b,	// (0x0009807f) list_double_cale_preview_pane_t1

0x95a0,	// (0x00098094) list_double_cale_preview_pane_t2_ParamLimits

0x95a0,	// (0x00098094) list_double_cale_preview_pane_t2

0x0001,

0xfe1f,	// (0x0009e913) list_double_cale_preview_pane_t_ParamLimits

0xfe1f,	// (0x0009e913) list_double_cale_preview_pane_t

0xedc5,	// (0x0009d8b9) main_ezdial_pane

0xee3d,	// (0x0009d931) main_sp_fs_email_pane_ParamLimits

0x8cb9,	// (0x000977ad) cmail_ddmenu_btn01_pane_ParamLimits

0x8cb9,	// (0x000977ad) cmail_ddmenu_btn01_pane

0x8ccc,	// (0x000977c0) cmail_ddmenu_btn02_pane_ParamLimits

0x8ccc,	// (0x000977c0) cmail_ddmenu_btn02_pane

0x8cef,	// (0x000977e3) cmail_ddmenu_btn03_pane_ParamLimits

0x8cef,	// (0x000977e3) cmail_ddmenu_btn03_pane

0x8d18,	// (0x0009780c) main_sp_fs_ctrlbar_pane_ParamLimits

0x8d3c,	// (0x00097830) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x91cc,	// (0x00097cc0) list_cmail_body_pane_ParamLimits

0xcd89,	// (0x0009b87d) bg_button_pane_cp12

0xcd9e,	// (0x0009b892) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd9e,	// (0x0009b892) list_single_cmail_header_detail_pane_g3

0x924b,	// (0x00097d3f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x924b,	// (0x00097d3f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda2,	// (0x0009e896) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda2,	// (0x0009e896) list_single_cmail_header_detail_pane_t

0xceca,	// (0x0009b9be) phacti_term_pane_t2_ParamLimits

0xceca,	// (0x0009b9be) phacti_term_pane_t2

0x0001,

0xfdac,	// (0x0009e8a0) phacti_term_pane_t_ParamLimits

0xfdac,	// (0x0009e8a0) phacti_term_pane_t

0xd171,	// (0x0009bc65) aid_size_list_single_double

0x95b8,	// (0x000980ac) popup_ezdial_listscroll_window

0x95d4,	// (0x000980c8) popup_number_entry_window_cp01

0xec64,	// (0x0009d758) bg_popup_call_pane_cp09

0xd17d,	// (0x0009bc71) ezdial_list_pane

0xd185,	// (0x0009bc79) scroll_pane_cp23

0xa5e5,	// (0x000990d9) bg_button_pane_cp028_ParamLimits

0xa5e5,	// (0x000990d9) bg_button_pane_cp028

0x95e2,	// (0x000980d6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x95e2,	// (0x000980d6) cmail_ddmenu_btn01_pane_g1

0x95f1,	// (0x000980e5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x95f1,	// (0x000980e5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe24,	// (0x0009e918) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe24,	// (0x0009e918) cmail_ddmenu_btn01_pane_g

0xd18d,	// (0x0009bc81) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd18d,	// (0x0009bc81) cmail_ddmenu_btn01_pane_t1

0xa5e5,	// (0x000990d9) bg_button_pane_cp029_ParamLimits

0xa5e5,	// (0x000990d9) bg_button_pane_cp029

0x9601,	// (0x000980f5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9601,	// (0x000980f5) cmail_ddmenu_btn02_pane_g1

0x961c,	// (0x00098110) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x961c,	// (0x00098110) cmail_ddmenu_btn02_pane_t1

0xee3d,	// (0x0009d931) bg_button_pane_cp031_ParamLimits

0xee3d,	// (0x0009d931) bg_button_pane_cp031

0x9601,	// (0x000980f5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9601,	// (0x000980f5) cmail_ddmenu_btn03_pane_g1

0x961c,	// (0x00098110) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x961c,	// (0x00098110) cmail_ddmenu_btn03_pane_t1

0x6805,	// (0x000952f9) cell_dialer2_keypad_pane_t1_ParamLimits

0x681f,	// (0x00095313) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x681f,	// (0x00095313) cell_dialer2_keypad_pane_t1_copy1

0x8608,	// (0x000970fc) ncimui_group_button_pane

0xee3d,	// (0x0009d931) main_sp_fs_calendar_pane_ParamLimits

0x91e1,	// (0x00097cd5) list_single_cmail_header_caption_pane_ParamLimits

0xcf15,	// (0x0009ba09) aid_recal_txt_sm_pane

0xedc5,	// (0x0009d8b9) mian_recal_day_pane

0xcf54,	// (0x0009ba48) popup_sp_fs_cale_preview_window_ParamLimits

0xedc5,	// (0x0009d8b9) list_recal_day_pane

0xd1c5,	// (0x0009bcb9) list_single_recal_day_pane_ParamLimits

0xd1c5,	// (0x0009bcb9) list_single_recal_day_pane

0xd1d7,	// (0x0009bccb) list_single_recal_day_pane_g1_ParamLimits

0xd1d7,	// (0x0009bccb) list_single_recal_day_pane_g1

0xd1e3,	// (0x0009bcd7) list_single_recal_day_pane_g2_ParamLimits

0xd1e3,	// (0x0009bcd7) list_single_recal_day_pane_g2

0xd1f3,	// (0x0009bce7) list_single_recal_day_pane_g3_ParamLimits

0xd1f3,	// (0x0009bce7) list_single_recal_day_pane_g3

0x9643,	// (0x00098137) list_single_recal_day_pane_g4_ParamLimits

0x9643,	// (0x00098137) list_single_recal_day_pane_g4

0xd1ff,	// (0x0009bcf3) list_single_recal_day_pane_g5_ParamLimits

0xd1ff,	// (0x0009bcf3) list_single_recal_day_pane_g5

0xd20f,	// (0x0009bd03) list_single_recal_day_pane_g6_ParamLimits

0xd20f,	// (0x0009bd03) list_single_recal_day_pane_g6

0x0004,

0xfe33,	// (0x0009e927) list_single_recal_day_pane_g_ParamLimits

0xfe33,	// (0x0009e927) list_single_recal_day_pane_g

0xd226,	// (0x0009bd1a) list_single_recal_day_pane_t1

0xd238,	// (0x0009bd2c) list_single_recal_day_pane_t2

0x0001,

0xfe3e,	// (0x0009e932) list_single_recal_day_pane_t

0x9663,	// (0x00098157) ncimui_query_button_pane_ParamLimits

0x9663,	// (0x00098157) ncimui_query_button_pane

0x9673,	// (0x00098167) ncimui_query_button_pane_t1_ParamLimits

0x9673,	// (0x00098167) ncimui_query_button_pane_t1

0xd24d,	// (0x0009bd41) ncimui_query_button_pane_t2_ParamLimits

0xd24d,	// (0x0009bd41) ncimui_query_button_pane_t2

0x0001,

0xfe43,	// (0x0009e937) ncimui_query_button_pane_t_ParamLimits

0xfe43,	// (0x0009e937) ncimui_query_button_pane_t

0x9686,	// (0x0009817a) query_button_pane_ParamLimits

0x9686,	// (0x0009817a) query_button_pane

0xedc5,	// (0x0009d8b9) bg_button_pane_cp0028

0xd260,	// (0x0009bd54) query_button_pane_t1

0x4880,	// (0x00093374) main_tport_pane_ParamLimits

0x90b9,	// (0x00097bad) bg_popup_window_pane_cp01_ParamLimits

0x90b9,	// (0x00097bad) bg_popup_window_pane_cp01

0x90d3,	// (0x00097bc7) heading_pane_cp08_ParamLimits

0x90d3,	// (0x00097bc7) heading_pane_cp08

0x90e7,	// (0x00097bdb) heading_pane_cp07_ParamLimits

0x90e7,	// (0x00097bdb) heading_pane_cp07

0xcd4c,	// (0x0009b840) cell_tport_appsw_pane_g2

0x0002,

0xfd8f,	// (0x0009e883) cell_tport_appsw_pane_g

0x31ee,	// (0x00091ce2) input_candi_list_open_g1

0xe787,	// (0x0009d27b) list_cale_time_pane_g6_ParamLimits

0xe787,	// (0x0009d27b) list_cale_time_pane_g6

0x5649,	// (0x0009413d) aid_size_touch_calib_1_ParamLimits

0x5649,	// (0x0009413d) aid_size_touch_calib_1

0x5655,	// (0x00094149) aid_size_touch_calib_2_ParamLimits

0x5655,	// (0x00094149) aid_size_touch_calib_2

0x566b,	// (0x0009415f) aid_size_touch_calib_3_ParamLimits

0x566b,	// (0x0009415f) aid_size_touch_calib_3

0x5689,	// (0x0009417d) aid_size_touch_calib_4_ParamLimits

0x5689,	// (0x0009417d) aid_size_touch_calib_4

0x569f,	// (0x00094193) main_touch_calib_button_group_pane_ParamLimits

0x569f,	// (0x00094193) main_touch_calib_button_group_pane

0x56b7,	// (0x000941ab) main_touch_calib_pane_g1_ParamLimits

0x56c3,	// (0x000941b7) main_touch_calib_pane_g2_ParamLimits

0x56cf,	// (0x000941c3) main_touch_calib_pane_g3_ParamLimits

0x56db,	// (0x000941cf) main_touch_calib_pane_g4_ParamLimits

0xf769,	// (0x0009e25d) main_touch_calib_pane_g_ParamLimits

0x56e7,	// (0x000941db) main_touch_calib_pane_t1_ParamLimits

0x5701,	// (0x000941f5) main_touch_calib_pane_t2_ParamLimits

0x571b,	// (0x0009420f) main_touch_calib_pane_t3_ParamLimits

0x572f,	// (0x00094223) main_touch_calib_pane_t4_ParamLimits

0x5743,	// (0x00094237) main_touch_calib_pane_t5_ParamLimits

0xf772,	// (0x0009e266) main_touch_calib_pane_t_ParamLimits

0xae98,	// (0x0009998c) list_single_fp_cale_pane_g3_ParamLimits

0xae98,	// (0x0009998c) list_single_fp_cale_pane_g3

0xda81,	// (0x0009c575) bg_button_pane_cp012_ParamLimits

0xda81,	// (0x0009c575) bg_vkb2_func_pane_cp03_ParamLimits

0x7826,	// (0x0009631a) cell_vitu2_function_top_pane_g1_ParamLimits

0xda81,	// (0x0009c575) bg_vkb2_func_pane_cp04_ParamLimits

0x85a8,	// (0x0009709c) main_ncimui_button_group_pane_ParamLimits

0x85a8,	// (0x0009709c) main_ncimui_button_group_pane

0x85f6,	// (0x000970ea) main_ncimui_pane_t3_ParamLimits

0x85f6,	// (0x000970ea) main_ncimui_pane_t3

0xce78,	// (0x0009b96c) phacti_button_group_pane

0xd171,	// (0x0009bc65) aid_size_list_single_double_ParamLimits

0x95b8,	// (0x000980ac) popup_ezdial_listscroll_window_ParamLimits

0x95d4,	// (0x000980c8) popup_number_entry_window_cp01_ParamLimits

0x9699,	// (0x0009818d) phacti_button_pane_ParamLimits

0x9699,	// (0x0009818d) phacti_button_pane

0xedc5,	// (0x0009d8b9) bg_button_pane_cp14

0xd26e,	// (0x0009bd62) phacti_button_pane_t1

0x96aa,	// (0x0009819e) main_touch_calib_button_pane_ParamLimits

0x96aa,	// (0x0009819e) main_touch_calib_button_pane

0xe1da,	// (0x0009ccce) bg_button_pane_cp18_ParamLimits

0xe1da,	// (0x0009ccce) bg_button_pane_cp18

0xd27c,	// (0x0009bd70) main_touch_calib_button_pane_t1_ParamLimits

0xd27c,	// (0x0009bd70) main_touch_calib_button_pane_t1

0xd292,	// (0x0009bd86) main_touch_calib_button_pane_t2_ParamLimits

0xd292,	// (0x0009bd86) main_touch_calib_button_pane_t2

0x0001,

0xfe48,	// (0x0009e93c) main_touch_calib_button_pane_t_ParamLimits

0xfe48,	// (0x0009e93c) main_touch_calib_button_pane_t

0xedc5,	// (0x0009d8b9) cell_ncimui_button_pane

0xedc5,	// (0x0009d8b9) bg_button_pane_cp032

0xd2b0,	// (0x0009bda4) cell_ncimui_button_pane_t1

0xd99e,	// (0x0009c492) image3_infobar_pane_ParamLimits

0xd99e,	// (0x0009c492) image3_infobar_pane

0x89a9,	// (0x0009749d) fs_bigclock_status_pane_ParamLimits

0x89a9,	// (0x0009749d) fs_bigclock_status_pane

0x89b6,	// (0x000974aa) main_fs_bigclock_clock_pane_ParamLimits

0x89b6,	// (0x000974aa) main_fs_bigclock_clock_pane

0x89ca,	// (0x000974be) main_fs_bigclock_indi_pane_ParamLimits

0x89ca,	// (0x000974be) main_fs_bigclock_indi_pane

0x89e2,	// (0x000974d6) main_fs_bigclock_swipe_pane_ParamLimits

0x89e2,	// (0x000974d6) main_fs_bigclock_swipe_pane

0xedc5,	// (0x0009d8b9) main_fs_clock_dumped_data

0xc6ad,	// (0x0009b1a1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc6ad,	// (0x0009b1a1) list_single_fs_bigclock_indicator_pane_g1

0xc6d6,	// (0x0009b1ca) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc6d6,	// (0x0009b1ca) list_single_fs_bigclock_indicator_pane_g2

0xc6f0,	// (0x0009b1e4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc6f0,	// (0x0009b1e4) list_single_fs_bigclock_indicator_pane_g3

0xc70a,	// (0x0009b1fe) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc70a,	// (0x0009b1fe) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc76,	// (0x0009e76a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc76,	// (0x0009e76a) list_single_fs_bigclock_indicator_pane_g

0xc733,	// (0x0009b227) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc733,	// (0x0009b227) list_single_fs_bigclock_indicator_pane_t1

0xc75b,	// (0x0009b24f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc75b,	// (0x0009b24f) list_single_fs_bigclock_indicator_pane_t2

0xc783,	// (0x0009b277) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc783,	// (0x0009b277) list_single_fs_bigclock_indicator_pane_t3

0xc7ab,	// (0x0009b29f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc7ab,	// (0x0009b29f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc81,	// (0x0009e775) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc81,	// (0x0009e775) list_single_fs_bigclock_indicator_pane_t

0xd2be,	// (0x0009bdb2) image3_infobar_fav_pane_ParamLimits

0xd2be,	// (0x0009bdb2) image3_infobar_fav_pane

0xd2ce,	// (0x0009bdc2) image3_infobar_loc_pane_ParamLimits

0xd2ce,	// (0x0009bdc2) image3_infobar_loc_pane

0xd2e2,	// (0x0009bdd6) image3_infobar_time_pane_ParamLimits

0xd2e2,	// (0x0009bdd6) image3_infobar_time_pane

0xaaed,	// (0x000995e1) image3_infobar_time_pane_g1

0xd2f2,	// (0x0009bde6) image3_infobar_time_pane_t1

0xaaed,	// (0x000995e1) image3_infobar_loc_pane_g1

0xd300,	// (0x0009bdf4) image3_infobar_loc_pane_g2

0x0001,

0xfe4d,	// (0x0009e941) image3_infobar_loc_pane_g

0xd308,	// (0x0009bdfc) image3_infobar_loc_pane_t1

0xaaed,	// (0x000995e1) image3_infobar_fav_pane_g1

0xd316,	// (0x0009be0a) image3_infobar_fav_pane_g2

0x0001,

0xfe52,	// (0x0009e946) image3_infobar_fav_pane_g

0xd31e,	// (0x0009be12) fs_bigclock_status_battery_pane

0xd327,	// (0x0009be1b) fs_bigclock_status_signal_pane

0xd330,	// (0x0009be24) fs_bigclock_status_title_pane

0xd339,	// (0x0009be2d) fs_bigclock_status_signal_pane_g1

0xd342,	// (0x0009be36) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe57,	// (0x0009e94b) fs_bigclock_status_signal_pane_g

0xd34a,	// (0x0009be3e) fs_bigclock_status_battery_pane_g1

0xd353,	// (0x0009be47) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5c,	// (0x0009e950) fs_bigclock_status_battery_pane_g

0xd35b,	// (0x0009be4f) fs_bigclock_status_title_pane_t1

0xaaed,	// (0x000995e1) main_fs_bigclock_clock_pane_g1

0xd369,	// (0x0009be5d) main_fs_bigclock_clock_pane_g2

0xd369,	// (0x0009be5d) main_fs_bigclock_clock_pane_g3

0xd369,	// (0x0009be5d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe61,	// (0x0009e955) main_fs_bigclock_clock_pane_g

0xd371,	// (0x0009be65) main_fs_bigclock_clock_pane_t1

0xd37f,	// (0x0009be73) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6a,	// (0x0009e95e) main_fs_bigclock_clock_pane_t

0xd38e,	// (0x0009be82) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd38e,	// (0x0009be82) list_single_fs_bigclock_indicator_pane

0x96bf,	// (0x000981b3) list_single_fs_bigclock_pane_ParamLimits

0x96bf,	// (0x000981b3) list_single_fs_bigclock_pane

0xd3a8,	// (0x0009be9c) main_fs_bigclock_indicator_pane_t1

0xd3b7,	// (0x0009beab) list_single_fs_bigclock_pane_g1

0xd3bf,	// (0x0009beb3) list_single_fs_bigclock_pane_t1

0xaaed,	// (0x000995e1) main_fs_bigclock_swipe_pane_g1

0xd402,	// (0x0009bef6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7b,	// (0x0009e96f) main_fs_bigclock_swipe_pane_g

0xd40a,	// (0x0009befe) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd40a,	// (0x0009befe) main_fs_bigclock_swipe_pane_t1

0x2a01,	// (0x000914f5) call_type_pane_ParamLimits

0xedc5,	// (0x0009d8b9) main_btmg_pane

0xd04d,	// (0x0009bb41) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd04d,	// (0x0009bb41) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdee,	// (0x0009e8e2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdee,	// (0x0009e8e2) list_single_cale_mrui_row_pane_g

0xd1ac,	// (0x0009bca0) list_recal_vselct_arw_lo_pane

0xd1b4,	// (0x0009bca8) list_recal_vselct_arw_up_pane

0xd1bc,	// (0x0009bcb0) list_recal_vselct_pane

0xd427,	// (0x0009bf1b) btmg_button_pane

0x9725,	// (0x00098219) main_btmg_pane_g1

0xedc5,	// (0x0009d8b9) bg_button_pane_cp044

0xd431,	// (0x0009bf25) btmg_button_pane_t1

0xa5dd,	// (0x000990d1) aid_listscroll_gen

0xee3d,	// (0x0009d931) main_cntbar_detail_pane

0xcd6a,	// (0x0009b85e) list_cmail_folder_pane

0xcd7a,	// (0x0009b86e) sp_fs_scroll_pane_cp03_ParamLimits

0x972f,	// (0x00098223) list_single_fs_dyc_pane_cp01_ParamLimits

0x972f,	// (0x00098223) list_single_fs_dyc_pane_cp01

0xd43f,	// (0x0009bf33) aid_size_cmail_indent

0xd448,	// (0x0009bf3c) list_single_dyc_row_pane_cp01

0x9775,	// (0x00098269) cntbar_detail_list_pane_ParamLimits

0x9775,	// (0x00098269) cntbar_detail_list_pane

0x97c1,	// (0x000982b5) main_cntbar_detail_cont_pane_ParamLimits

0x97c1,	// (0x000982b5) main_cntbar_detail_cont_pane

0x2924,	// (0x00091418) scroll_pane_cp032_ParamLimits

0x2924,	// (0x00091418) scroll_pane_cp032

0x97d5,	// (0x000982c9) cntbar_detail_list_event_pane_ParamLimits

0x97d5,	// (0x000982c9) cntbar_detail_list_event_pane

0x9785,	// (0x00098279) cntbar_detail_list_shct_pane

0xe63a,	// (0x0009d12e) aid_list_gen

0xd451,	// (0x0009bf45) aid_scroll

0xd45a,	// (0x0009bf4e) aid_size_touch_scroll_bar

0xd463,	// (0x0009bf57) aid_list_double

0xd46c,	// (0x0009bf60) aid_list_single

0xd475,	// (0x0009bf69) aid_list_single_lg

0xd47e,	// (0x0009bf72) aid_list_z_g_a_sm

0xd486,	// (0x0009bf7a) aid_list_z_g_d

0xd48e,	// (0x0009bf82) aid_txt_z_prm

0x97e5,	// (0x000982d9) aid_txt_z_prm_cp01

0x97f3,	// (0x000982e7) aid_txt_z_sec

0x9801,	// (0x000982f5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9801,	// (0x000982f5) main_cntbar_detail_cont_pane_g1

0x9815,	// (0x00098309) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9815,	// (0x00098309) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe80,	// (0x0009e974) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe80,	// (0x0009e974) main_cntbar_detail_cont_pane_g

0xd49c,	// (0x0009bf90) main_cntbar_detail_cont_pane_t1

0xd4aa,	// (0x0009bf9e) main_cntbar_detail_cont_pane_t2

0xd4b8,	// (0x0009bfac) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe85,	// (0x0009e979) main_cntbar_detail_cont_pane_t

0x9825,	// (0x00098319) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9825,	// (0x00098319) cell_cntbar_detail_list_shct_pane

0xd4c6,	// (0x0009bfba) cntbar_detail_list_shct_pane_g1

0xd4cf,	// (0x0009bfc3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8c,	// (0x0009e980) cntbar_detail_list_shct_pane_g

0x9839,	// (0x0009832d) cntbar_detail_list_event_pane_g1_ParamLimits

0x9839,	// (0x0009832d) cntbar_detail_list_event_pane_g1

0x9845,	// (0x00098339) cntbar_detail_list_event_pane_g2_ParamLimits

0x9845,	// (0x00098339) cntbar_detail_list_event_pane_g2

0x0005,

0xfe91,	// (0x0009e985) cntbar_detail_list_event_pane_g_ParamLimits

0xfe91,	// (0x0009e985) cntbar_detail_list_event_pane_g

0x98b1,	// (0x000983a5) cntbar_detail_list_event_pane_t1_ParamLimits

0x98b1,	// (0x000983a5) cntbar_detail_list_event_pane_t1

0x98c6,	// (0x000983ba) cntbar_detail_list_event_pane_t2_ParamLimits

0x98c6,	// (0x000983ba) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9e,	// (0x0009e992) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9e,	// (0x0009e992) cntbar_detail_list_event_pane_t

0xaaed,	// (0x000995e1) cell_cntbar_detail_list_shct_pane_g1

0x2d68,	// (0x0009185c) navi_pane_mv_g3

0xee3d,	// (0x0009d931) main_cntbar_detail_pane_ParamLimits

0xedc5,	// (0x0009d8b9) main_notif_wgt_pane

0xb3ff,	// (0x00099ef3) aid_tch_main_mp4_pane_g4

0xd996,	// (0x0009c48a) popup_slider_window_cp02

0xd1a2,	// (0x0009bc96) list_recal_day_event_pane

0x9749,	// (0x0009823d) cntbar_detail_btn_pane_ParamLimits

0x9749,	// (0x0009823d) cntbar_detail_btn_pane

0x975f,	// (0x00098253) cntbar_detail_btn_pane_cp01_ParamLimits

0x975f,	// (0x00098253) cntbar_detail_btn_pane_cp01

0x9785,	// (0x00098279) cntbar_detail_list_shct_pane_ParamLimits

0x9795,	// (0x00098289) cntbar_detail_pane_g1_ParamLimits

0x9795,	// (0x00098289) cntbar_detail_pane_g1

0x97a5,	// (0x00098299) cntbar_detail_pane_t1_ParamLimits

0x97a5,	// (0x00098299) cntbar_detail_pane_t1

0x9851,	// (0x00098345) cntbar_detail_list_event_pane_g3_ParamLimits

0x9851,	// (0x00098345) cntbar_detail_list_event_pane_g3

0x9869,	// (0x0009835d) cntbar_detail_list_event_pane_g4_ParamLimits

0x9869,	// (0x0009835d) cntbar_detail_list_event_pane_g4

0x9881,	// (0x00098375) cntbar_detail_list_event_pane_g5_ParamLimits

0x9881,	// (0x00098375) cntbar_detail_list_event_pane_g5

0x9899,	// (0x0009838d) cntbar_detail_list_event_pane_g6_ParamLimits

0x9899,	// (0x0009838d) cntbar_detail_list_event_pane_g6

0x98db,	// (0x000983cf) cntbar_detail_list_event_pane_t3_ParamLimits

0x98db,	// (0x000983cf) cntbar_detail_list_event_pane_t3

0x98ed,	// (0x000983e1) popup_notif_wgt_window_ParamLimits

0x98ed,	// (0x000983e1) popup_notif_wgt_window

0x9906,	// (0x000983fa) popup_submenu_window_cp01_ParamLimits

0x9906,	// (0x000983fa) popup_submenu_window_cp01

0xec64,	// (0x0009d758) bg_popup_window_pane_cp10

0xd4d8,	// (0x0009bfcc) listscroll_notif_wgt_pane

0xd4e2,	// (0x0009bfd6) list_notif_wgt_window

0xd4eb,	// (0x0009bfdf) scroll_pane_cp033

0xd4f4,	// (0x0009bfe8) list_notif_wgt_row_pane_ParamLimits

0xd4f4,	// (0x0009bfe8) list_notif_wgt_row_pane

0xd508,	// (0x0009bffc) aid_size_list_notif_wgt_del

0xd511,	// (0x0009c005) list_notif_wgt_row_pane_g1

0xd519,	// (0x0009c00d) list_notif_wgt_row_pane_g2

0xd521,	// (0x0009c015) list_notif_wgt_row_pane_g3

0x0002,

0xfea5,	// (0x0009e999) list_notif_wgt_row_pane_g

0xd52a,	// (0x0009c01e) list_notif_wgt_row_pane_t1

0xd538,	// (0x0009c02c) list_notif_wgt_row_pane_t2

0xd546,	// (0x0009c03a) list_notif_wgt_row_pane_t3

0x0002,

0xfeac,	// (0x0009e9a0) list_notif_wgt_row_pane_t

0xb9d2,	// (0x0009a4c6) list_recal_day_event_pane_g1

0xd554,	// (0x0009c048) list_recal_day_event_pane_t1

0xedc5,	// (0x0009d8b9) bg_button_pane_cp045

0xd563,	// (0x0009c057) cntbar_detail_btn_pane_t1

0xa5e5,	// (0x000990d9) main_callh_pane_ParamLimits

0xa5e5,	// (0x000990d9) main_callh_pane

0xedc5,	// (0x0009d8b9) main_coverflow0_pane

0xedc5,	// (0x0009d8b9) main_wgtman_pane

0x89f0,	// (0x000974e4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x89f0,	// (0x000974e4) main_fs_bigclock_unlock_btn_pane

0xcd44,	// (0x0009b838) bg_button_pane_cp16

0xcd54,	// (0x0009b848) cell_tport_appsw_pane_g3

0x9918,	// (0x0009840c) cf0_flow_pane_ParamLimits

0x9918,	// (0x0009840c) cf0_flow_pane

0xd571,	// (0x0009c065) listscroll_cf0_pane

0xd57a,	// (0x0009c06e) main_cf0_pane_g1

0x992d,	// (0x00098421) main_cf0_pane_t1_ParamLimits

0x992d,	// (0x00098421) main_cf0_pane_t1

0x9944,	// (0x00098438) main_cf0_pane_t2_ParamLimits

0x9944,	// (0x00098438) main_cf0_pane_t2

0x0001,

0xfeb3,	// (0x0009e9a7) main_cf0_pane_t_ParamLimits

0xfeb3,	// (0x0009e9a7) main_cf0_pane_t

0xd584,	// (0x0009c078) scroll_pane_cp11

0x995b,	// (0x0009844f) cf0_flow_pane_g1

0x9963,	// (0x00098457) cf0_flow_pane_g2

0x0001,

0xfeb8,	// (0x0009e9ac) cf0_flow_pane_g

0x996b,	// (0x0009845f) cf0_flow_pane_t1

0xedc5,	// (0x0009d8b9) main_call6_pane

0xedc5,	// (0x0009d8b9) main_calllock_pane

0x9979,	// (0x0009846d) call6_btn_grp_pane_ParamLimits

0x9979,	// (0x0009846d) call6_btn_grp_pane

0x9993,	// (0x00098487) call6_pane_g1_ParamLimits

0x9993,	// (0x00098487) call6_pane_g1

0x99a8,	// (0x0009849c) popup_call6_1st_window_ParamLimits

0x99a8,	// (0x0009849c) popup_call6_1st_window

0x99b9,	// (0x000984ad) popup_call6_2nd_window_ParamLimits

0x99b9,	// (0x000984ad) popup_call6_2nd_window

0x99ca,	// (0x000984be) cell_call6_btn_pane_ParamLimits

0x99ca,	// (0x000984be) cell_call6_btn_pane

0xec64,	// (0x0009d758) bg_popup_call2_in_pane_cp03

0xd58f,	// (0x0009c083) popup_call6_1st_window_g1

0xd597,	// (0x0009c08b) popup_call6_1st_window_g2

0xd59f,	// (0x0009c093) popup_call6_1st_window_g3

0x0002,

0xfebd,	// (0x0009e9b1) popup_call6_1st_window_g

0xd5a7,	// (0x0009c09b) popup_call6_1st_window_t1

0xd5b6,	// (0x0009c0aa) popup_call6_1st_window_t2

0xd5c6,	// (0x0009c0ba) popup_call6_1st_window_t3

0x0002,

0xfec4,	// (0x0009e9b8) popup_call6_1st_window_t

0xec64,	// (0x0009d758) bg_popup_call2_in_pane_cp04

0xd58f,	// (0x0009c083) popup_call6_2nd_window_g1

0xd597,	// (0x0009c08b) popup_call6_2nd_window_g2

0xd59f,	// (0x0009c093) popup_call6_2nd_window_g3

0x0002,

0xfebd,	// (0x0009e9b1) popup_call6_2nd_window_g

0xd5a7,	// (0x0009c09b) popup_call6_2nd_window_t1

0xedc5,	// (0x0009d8b9) bg_button_pane_cp15

0xd5d6,	// (0x0009c0ca) cell_call6_btn_pane_g1

0xd5df,	// (0x0009c0d3) cell_call6_btn_pane_t1

0x99de,	// (0x000984d2) listscroll_wgtman_pane_ParamLimits

0x99de,	// (0x000984d2) listscroll_wgtman_pane

0x9a01,	// (0x000984f5) wgtman_btn_pane_ParamLimits

0x9a01,	// (0x000984f5) wgtman_btn_pane

0xeb17,	// (0x0009d60b) aid_scroll_copy1

0xd5ee,	// (0x0009c0e2) list_wgtman_pane

0x9a44,	// (0x00098538) wgtman_btn_pane_g1_ParamLimits

0x9a44,	// (0x00098538) wgtman_btn_pane_g1

0x9a70,	// (0x00098564) wgtman_btn_pane_t1_ParamLimits

0x9a70,	// (0x00098564) wgtman_btn_pane_t1

0xd5f8,	// (0x0009c0ec) wgtman_btn_pane_t2_ParamLimits

0xd5f8,	// (0x0009c0ec) wgtman_btn_pane_t2

0x0001,

0xfecb,	// (0x0009e9bf) wgtman_btn_pane_t_ParamLimits

0xfecb,	// (0x0009e9bf) wgtman_btn_pane_t

0x9aad,	// (0x000985a1) listrow_wgtman_pane_ParamLimits

0x9aad,	// (0x000985a1) listrow_wgtman_pane

0x9ac0,	// (0x000985b4) listrow_wgtman_pane_g1

0x9ac9,	// (0x000985bd) listrow_wgtman_pane_g2

0x0001,

0xfed0,	// (0x0009e9c4) listrow_wgtman_pane_g

0x9ad3,	// (0x000985c7) listrow_wgtman_pane_t1

0x9ae1,	// (0x000985d5) listrow_wgtman_pane_t2

0x0001,

0xfed5,	// (0x0009e9c9) listrow_wgtman_pane_t

0x9aef,	// (0x000985e3) wait_bar_pane_cp09

0xd60f,	// (0x0009c103) main_calllock_btn_pane

0xd619,	// (0x0009c10d) main_calllock_pane_g1

0xedc5,	// (0x0009d8b9) bg_button_pane_cp17

0xd624,	// (0x0009c118) main_calllock_btn_pane_g1

0xd62d,	// (0x0009c121) main_calllock_btn_pane_t1

0xedc5,	// (0x0009d8b9) main_dialer3_pane

0xedc5,	// (0x0009d8b9) main_fmrd2_pane

0xaaed,	// (0x000995e1) main_fs_bigclock_unlock_btn_pane_g1

0xd644,	// (0x0009c138) main_fs_bigclock_unlock_btn_pane_t1

0x9af7,	// (0x000985eb) area_fmrd2_info_pane_ParamLimits

0x9af7,	// (0x000985eb) area_fmrd2_info_pane

0x9b08,	// (0x000985fc) area_fmrd2_visual_pane_ParamLimits

0x9b08,	// (0x000985fc) area_fmrd2_visual_pane

0x9b16,	// (0x0009860a) fmrd2_indi_pane_ParamLimits

0x9b16,	// (0x0009860a) fmrd2_indi_pane

0x9b23,	// (0x00098617) area_fmrd2_visual_pane_g1

0x9b2b,	// (0x0009861f) area_fmrd2_visual_pane_t1

0x9b3b,	// (0x0009862f) area_fmrd2_visual_pane_t2

0x9b4b,	// (0x0009863f) area_fmrd2_visual_pane_t3

0x0002,

0xfedf,	// (0x0009e9d3) area_fmrd2_visual_pane_t

0x9b5b,	// (0x0009864f) area_fmrd2_info_pane_g1

0x9b63,	// (0x00098657) area_fmrd2_info_pane_t1

0x9b73,	// (0x00098667) area_fmrd2_info_pane_t2

0x9b83,	// (0x00098677) area_fmrd2_info_pane_t3

0x9b93,	// (0x00098687) area_fmrd2_info_pane_t4

0x0003,

0xfee6,	// (0x0009e9da) area_fmrd2_info_pane_t

0x9ba1,	// (0x00098695) fmrd2_indi_pane_t1

0x9bb1,	// (0x000986a5) fmrd2_indi_pane_t2

0x9bc1,	// (0x000986b5) fmrd2_indi_pane_t3

0x0002,

0xfeef,	// (0x0009e9e3) fmrd2_indi_pane_t

0xc719,	// (0x0009b20d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc719,	// (0x0009b20d) list_single_fs_bigclock_indicator_pane_g5

0xc7c0,	// (0x0009b2b4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc7c0,	// (0x0009b2b4) list_single_fs_bigclock_indicator_pane_t5

0x9330,	// (0x00097e24) aid_cell_bcale_month_pane_ParamLimits

0x9330,	// (0x00097e24) aid_cell_bcale_month_pane

0x9342,	// (0x00097e36) bcale_month_pane_ParamLimits

0x9342,	// (0x00097e36) bcale_month_pane

0x935c,	// (0x00097e50) bcale_preview_pane_ParamLimits

0x935c,	// (0x00097e50) bcale_preview_pane

0xd3bf,	// (0x0009beb3) list_single_fs_bigclock_pane_t1_ParamLimits

0xd3de,	// (0x0009bed2) list_single_fs_bigclock_pane_t2_ParamLimits

0xd3de,	// (0x0009bed2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe76,	// (0x0009e96a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe76,	// (0x0009e96a) list_single_fs_bigclock_pane_t

0xd63c,	// (0x0009c130) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeda,	// (0x0009e9ce) main_fs_bigclock_unlock_btn_pane_g

0x9bd1,	// (0x000986c5) aid_dia3_key_size_ParamLimits

0x9bd1,	// (0x000986c5) aid_dia3_key_size

0x9be0,	// (0x000986d4) aid_dia3_listrow_size_ParamLimits

0x9be0,	// (0x000986d4) aid_dia3_listrow_size

0x9bf5,	// (0x000986e9) dia3_keypad_fun_pane_ParamLimits

0x9bf5,	// (0x000986e9) dia3_keypad_fun_pane

0x9c11,	// (0x00098705) dia3_keypad_num_pane_ParamLimits

0x9c11,	// (0x00098705) dia3_keypad_num_pane

0x9c2c,	// (0x00098720) dia3_listscroll_pane_ParamLimits

0x9c2c,	// (0x00098720) dia3_listscroll_pane

0x9c3f,	// (0x00098733) dia3_numentry_pane_ParamLimits

0x9c3f,	// (0x00098733) dia3_numentry_pane

0xd652,	// (0x0009c146) dia3_list_pane

0xd65d,	// (0x0009c151) scroll_pane_cp12

0xedc5,	// (0x0009d8b9) bg_dia3_numentry_pane

0x9c53,	// (0x00098747) dia3_numentry_pane_t1

0x9c62,	// (0x00098756) cell_dia3_key_num_pane

0x9c6a,	// (0x0009875e) cell_dia3_key0_fun_pane_ParamLimits

0x9c6a,	// (0x0009875e) cell_dia3_key0_fun_pane

0x9c7e,	// (0x00098772) cell_dia3_key1_fun_pane_ParamLimits

0x9c7e,	// (0x00098772) cell_dia3_key1_fun_pane

0x9c96,	// (0x0009878a) dia3_listrow_pane

0xc40c,	// (0x0009af00) bg_dia3_numentry_pane_g1

0xedc5,	// (0x0009d8b9) bg_button_pane_cp21

0xd668,	// (0x0009c15c) cell_dia3_key_num_pane_t1

0xd676,	// (0x0009c16a) cell_dia3_key_num_pane_t2

0xd685,	// (0x0009c179) cell_dia3_key_num_pane_t3

0xd694,	// (0x0009c188) cell_dia3_key_num_pane_t4

0x0003,

0xfef6,	// (0x0009e9ea) cell_dia3_key_num_pane_t

0xedc5,	// (0x0009d8b9) bg_button_pane_cp19

0x9ca8,	// (0x0009879c) cell_dia3_key0_fun_pane_g1

0xedc5,	// (0x0009d8b9) bg_button_pane_cp20

0x9cb0,	// (0x000987a4) cell_dia3_key1_fun_pane_g1

0x9cb8,	// (0x000987ac) area_left_week_number_pane

0xd6a3,	// (0x0009c197) area_top_day_name_pane

0x9cc1,	// (0x000987b5) frame_month_view_pane

0x9cc9,	// (0x000987bd) grid_month_view_pane

0x9cd3,	// (0x000987c7) cell_top_day_name_pane_ParamLimits

0x9cd3,	// (0x000987c7) cell_top_day_name_pane

0x9552,	// (0x00098046) cell_area_left_week_number_pane_ParamLimits

0x9552,	// (0x00098046) cell_area_left_week_number_pane

0x9ce9,	// (0x000987dd) cell_month_view_pane_ParamLimits

0x9ce9,	// (0x000987dd) cell_month_view_pane

0xd6ac,	// (0x0009c1a0) frm_month_g1

0x9d04,	// (0x000987f8) frm_month_g2

0x9d0c,	// (0x00098800) frm_month_g3

0x9d14,	// (0x00098808) frm_month_g4

0x9d1c,	// (0x00098810) frm_month_g5

0x9d24,	// (0x00098818) frm_month_g6

0x9d2c,	// (0x00098820) frm_month_g7

0xd6b5,	// (0x0009c1a9) frm_month_g8

0x9d34,	// (0x00098828) frm_month_g9

0x9d3d,	// (0x00098831) frm_month_g10

0x9d46,	// (0x0009883a) frm_month_g11

0x9d4f,	// (0x00098843) frm_month_g12

0x9d58,	// (0x0009884c) frm_month_g13

0x9d61,	// (0x00098855) frm_month_g14

0x9d6a,	// (0x0009885e) frm_month_g15

0x9d73,	// (0x00098867) frm_month_g16

0x000f,

0xfeff,	// (0x0009e9f3) frm_month_g

0x9d7c,	// (0x00098870) cell_top_day_name_pane_t1

0x9d8b,	// (0x0009887f) cell_area_left_week_number_pane_g1

0x9d7c,	// (0x00098870) cell_area_left_week_number_pane_t1

0xaaed,	// (0x000995e1) cell_month_view_pane_g1

0x9d93,	// (0x00098887) cell_month_view_pane_t1

0xedc5,	// (0x0009d8b9) main_fps_pane

0xca89,	// (0x0009b57d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xca89,	// (0x0009b57d) cmail_ddmenu_btn02_pane_cp1

0xcaa5,	// (0x0009b599) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcaa5,	// (0x0009b599) cmail_ddmenu_btn02_pane_cp2

0x9610,	// (0x00098104) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9610,	// (0x00098104) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe29,	// (0x0009e91d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe29,	// (0x0009e91d) cmail_ddmenu_btn02_pane_g

0x9631,	// (0x00098125) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9631,	// (0x00098125) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2e,	// (0x0009e922) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2e,	// (0x0009e922) cmail_ddmenu_btn02_pane_t

0x9da2,	// (0x00098896) fps_text_pane_ParamLimits

0x9da2,	// (0x00098896) fps_text_pane

0x9db9,	// (0x000988ad) main_fps_pane_g1_ParamLimits

0x9db9,	// (0x000988ad) main_fps_pane_g1

0x9dd3,	// (0x000988c7) wait_bar_pane_cp010_ParamLimits

0x9dd3,	// (0x000988c7) wait_bar_pane_cp010

0x9de4,	// (0x000988d8) fps_text_pane_t1_ParamLimits

0x9de4,	// (0x000988d8) fps_text_pane_t1

0xb6ee,	// (0x0009a1e2) cam4_image_uncrop_pane_g1

0xb6f7,	// (0x0009a1eb) cam4_image_uncrop_pane_g2

0x6cb0,	// (0x000957a4) cam4_image_uncrop_pane_g3

0x6cb9,	// (0x000957ad) cam4_image_uncrop_pane_g4

0x0003,

0xf8fc,	// (0x0009e3f0) cam4_image_uncrop_pane_g

0x9c96,	// (0x0009878a) dia3_listrow_pane_ParamLimits

0xedc5,	// (0x0009d8b9) main_phob2_pane

0x9152,	// (0x00097c46) cell_tport_appsw_pane_cp02_ParamLimits

0x9152,	// (0x00097c46) cell_tport_appsw_pane_cp02

0x9166,	// (0x00097c5a) cell_tport_appsw_pane_cp03_ParamLimits

0x9166,	// (0x00097c5a) cell_tport_appsw_pane_cp03

0xedc5,	// (0x0009d8b9) phob2_contact_card_pane

0xedc5,	// (0x0009d8b9) phob2_listscroll_pane

0xd6be,	// (0x0009c1b2) phob2_list_pane

0xd6c6,	// (0x0009c1ba) scroll_pane_cp034

0x9dfc,	// (0x000988f0) phob2_cc_data_pane_ParamLimits

0x9dfc,	// (0x000988f0) phob2_cc_data_pane

0x9e1b,	// (0x0009890f) phob2_cc_listscroll_pane_ParamLimits

0x9e1b,	// (0x0009890f) phob2_cc_listscroll_pane

0xb7a6,	// (0x0009a29a) list_double_large_graphic_phob2_pane_ParamLimits

0xb7a6,	// (0x0009a29a) list_double_large_graphic_phob2_pane

0x9e39,	// (0x0009892d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e39,	// (0x0009892d) list_double_large_graphic_phob2_pane_g1

0x9e46,	// (0x0009893a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9e46,	// (0x0009893a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff20,	// (0x0009ea14) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff20,	// (0x0009ea14) list_double_large_graphic_phob2_pane_g

0x9e52,	// (0x00098946) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9e52,	// (0x00098946) list_double_large_graphic_phob2_pane_t1

0x9e67,	// (0x0009895b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9e67,	// (0x0009895b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff25,	// (0x0009ea19) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff25,	// (0x0009ea19) list_double_large_graphic_phob2_pane_t

0xedc5,	// (0x0009d8b9) list_highlight_pane_cp024

0xd6ce,	// (0x0009c1c2) phob2_cc_button_pane

0x9e79,	// (0x0009896d) phob2_cc_data_pane_g1_ParamLimits

0x9e79,	// (0x0009896d) phob2_cc_data_pane_g1

0x9e8e,	// (0x00098982) phob2_cc_data_pane_g2_ParamLimits

0x9e8e,	// (0x00098982) phob2_cc_data_pane_g2

0x0001,

0xff2a,	// (0x0009ea1e) phob2_cc_data_pane_g_ParamLimits

0xff2a,	// (0x0009ea1e) phob2_cc_data_pane_g

0x9ea0,	// (0x00098994) phob2_cc_data_pane_t1_ParamLimits

0x9ea0,	// (0x00098994) phob2_cc_data_pane_t1

0x9eb8,	// (0x000989ac) phob2_cc_data_pane_t2_ParamLimits

0x9eb8,	// (0x000989ac) phob2_cc_data_pane_t2

0x9ed0,	// (0x000989c4) phob2_cc_data_pane_t3_ParamLimits

0x9ed0,	// (0x000989c4) phob2_cc_data_pane_t3

0x0002,

0xff2f,	// (0x0009ea23) phob2_cc_data_pane_t_ParamLimits

0xff2f,	// (0x0009ea23) phob2_cc_data_pane_t

0xd6d6,	// (0x0009c1ca) phob2_cc_list_pane_ParamLimits

0xd6d6,	// (0x0009c1ca) phob2_cc_list_pane

0xba6b,	// (0x0009a55f) scroll_pane_cp035_ParamLimits

0xba6b,	// (0x0009a55f) scroll_pane_cp035

0xee3d,	// (0x0009d931) bg_button_pane_cp033

0xd6e2,	// (0x0009c1d6) phob2_cc_button_pane_g1

0xd6ee,	// (0x0009c1e2) phob2_cc_button_pane_t1

0xd703,	// (0x0009c1f7) phob2_cc_button_pane_t2

0x0001,

0xff36,	// (0x0009ea2a) phob2_cc_button_pane_t

0x9eea,	// (0x000989de) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9eea,	// (0x000989de) list_double_large_graphic_phob2_cc_pane

0x9efe,	// (0x000989f2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9efe,	// (0x000989f2) list_double_large_graphic_phob2_cc_pane_g1

0x9f0a,	// (0x000989fe) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9f0a,	// (0x000989fe) list_double_large_graphic_phob2_cc_pane_g2

0x9f16,	// (0x00098a0a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9f16,	// (0x00098a0a) list_double_large_graphic_phob2_cc_pane_g3

0x9f22,	// (0x00098a16) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9f22,	// (0x00098a16) list_double_large_graphic_phob2_cc_pane_g4

0x9f2e,	// (0x00098a22) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9f2e,	// (0x00098a22) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3b,	// (0x0009ea2f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3b,	// (0x0009ea2f) list_double_large_graphic_phob2_cc_pane_g

0x9f3a,	// (0x00098a2e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9f3a,	// (0x00098a2e) list_double_large_graphic_phob2_cc_pane_t1

0x9f63,	// (0x00098a57) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9f63,	// (0x00098a57) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff46,	// (0x0009ea3a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff46,	// (0x0009ea3a) list_double_large_graphic_phob2_cc_pane_t

0xd715,	// (0x0009c209) list_highlight_pane_cp025_ParamLimits

0xd715,	// (0x0009c209) list_highlight_pane_cp025

0xee3d,	// (0x0009d931) bg_button_pane_cp033_ParamLimits

0xd6e2,	// (0x0009c1d6) phob2_cc_button_pane_g1_ParamLimits

0xd6ee,	// (0x0009c1e2) phob2_cc_button_pane_t1_ParamLimits

0xd703,	// (0x0009c1f7) phob2_cc_button_pane_t2_ParamLimits

0xff36,	// (0x0009ea2a) phob2_cc_button_pane_t_ParamLimits

0x0ddd,	// (0x0008f8d1) popup_wgtman_window

0xb888,	// (0x0009a37c) scroll_pane_cp038

0x9a26,	// (0x0009851a) wgtman_btn_pane_cp_01_ParamLimits

0x9a26,	// (0x0009851a) wgtman_btn_pane_cp_01

0xd723,	// (0x0009c217) wgtman_content_pane

0xd463,	// (0x0009bf57) wgtman_heading_pane

0xedc5,	// (0x0009d8b9) bg_heading_pane_cp02

0xd72c,	// (0x0009c220) wgtman_heading_pane_g1

0xd734,	// (0x0009c228) wgtman_heading_pane_t1

0xd742,	// (0x0009c236) scroll_pane_cp036

0xd74a,	// (0x0009c23e) wgtman_list_pane

0xd752,	// (0x0009c246) wgtman_list_pane_t1_ParamLimits

0xd752,	// (0x0009c246) wgtman_list_pane_t1

0xd9f0,	// (0x0009c4e4) cam4_grid_pane

0x79c1,	// (0x000964b5) bg_button_pane_cp015_ParamLimits

0x79d5,	// (0x000964c9) bg_button_pane_cp016_ParamLimits

0x79e8,	// (0x000964dc) bg_button_pane_cp017_ParamLimits

0x7a40,	// (0x00096534) popup_vitu2_query_window_g3_ParamLimits

0x7a40,	// (0x00096534) popup_vitu2_query_window_g3

0x7afd,	// (0x000965f1) popup_vitu2_query_window_t6_ParamLimits

0x7afd,	// (0x000965f1) popup_vitu2_query_window_t6

0x7b28,	// (0x0009661c) popup_vitu2_query_window_t7_ParamLimits

0x7b28,	// (0x0009661c) popup_vitu2_query_window_t7

0xb6ee,	// (0x0009a1e2) cam4_grid_pane_g1

0xb6f7,	// (0x0009a1eb) cam4_grid_pane_g2

0xd774,	// (0x0009c268) cam4_grid_pane_g3

0xd77d,	// (0x0009c271) cam4_grid_pane_g4

0x0003,

0xff4b,	// (0x0009ea3f) cam4_grid_pane_g

0x1ae3,	// (0x000905d7) aid_placing_vt_slider_lsc_ParamLimits

0x1de0,	// (0x000908d4) vidtel_button_pane_ParamLimits

0x1de0,	// (0x000908d4) vidtel_button_pane

0xd788,	// (0x0009c27c) bg_button_pane_cp034

0x9f8c,	// (0x00098a80) vidtel_button_pane_g1

0xd792,	// (0x0009c286) vidtel_button_pane_t1

0xb98a,	// (0x0009a47e) aid_size_vtel_slider_touch

0xba6b,	// (0x0009a55f) scroll_pane_cp039

0xc44a,	// (0x0009af3e) ncim_query_button_pane_cp01_ParamLimits

0xc469,	// (0x0009af5d) ncimui_query_pane_g1_ParamLimits

0xee3d,	// (0x0009d931) input_focus_pane_cp012_ParamLimits

0xc48e,	// (0x0009af82) ncim_query_entry_pane_t1_ParamLimits

0xba6b,	// (0x0009a55f) scroll_pane_cp039_ParamLimits

0x2cdc,	// (0x000917d0) navi_pane_bcale_mc_g1

0x2ce4,	// (0x000917d8) navi_pane_bcale_mc_t1

0xcaee,	// (0x0009b5e2) main_sp_fs_email_pane_g1

0xcaf6,	// (0x0009b5ea) main_sp_fs_email_pane_g2

0x0001,

0xfce7,	// (0x0009e7db) main_sp_fs_email_pane_g

0xd059,	// (0x0009bb4d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd059,	// (0x0009bb4d) list_single_cale_mrui_row_pane_g3

0x9659,	// (0x0009814d) list_single_recal_day_pane_g5_event_pane

0xd21e,	// (0x0009bd12) list_single_recal_day_pane_g7

0xd7a0,	// (0x0009c294) list_recal_day_event_pane_cp01

0xd7a9,	// (0x0009c29d) list_recal_vselct_arw_lo_pane_cp01

0xd7b1,	// (0x0009c2a5) list_recal_vselct_arw_up_pane_cp01

0xd7b9,	// (0x0009c2ad) list_recal_vselct_pane_cp01

0xb9d2,	// (0x0009a4c6) list_recal_day_event_pane_cp01_g1

0xd7c3,	// (0x0009c2b7) list_recal_day_event_pane_cp01_t1

0xd226,	// (0x0009bd1a) list_single_recal_day_pane_t1_ParamLimits

0xd238,	// (0x0009bd2c) list_single_recal_day_pane_t2_ParamLimits

0xfe3e,	// (0x0009e932) list_single_recal_day_pane_t_ParamLimits

0xe1aa,	// (0x0009cc9e) bg_notes_pane_ParamLimits

0xe1b8,	// (0x0009ccac) list_notes_pane_ParamLimits

0x10ef,	// (0x0008fbe3) scroll_pane_cp06_ParamLimits

0xe1da,	// (0x0009ccce) main_notes_pane_ParamLimits

0xedc5,	// (0x0009d8b9) main_welc_pane

0x9f94,	// (0x00098a88) main_welc_body_pane_ParamLimits

0x9f94,	// (0x00098a88) main_welc_body_pane

0x9fa8,	// (0x00098a9c) main_welc_opti_pane_ParamLimits

0x9fa8,	// (0x00098a9c) main_welc_opti_pane

0x9fbf,	// (0x00098ab3) main_welc_pane_t1_ParamLimits

0x9fbf,	// (0x00098ab3) main_welc_pane_t1

0x9fd8,	// (0x00098acc) main_welc_body_row_pane_ParamLimits

0x9fd8,	// (0x00098acc) main_welc_body_row_pane

0x9fef,	// (0x00098ae3) main_welc_opti_row_pane_ParamLimits

0x9fef,	// (0x00098ae3) main_welc_opti_row_pane

0xd7d1,	// (0x0009c2c5) main_welc_opti_row_pane_g1

0xd7d9,	// (0x0009c2cd) main_welc_opti_row_pane_t1

0xd7e8,	// (0x0009c2dc) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
