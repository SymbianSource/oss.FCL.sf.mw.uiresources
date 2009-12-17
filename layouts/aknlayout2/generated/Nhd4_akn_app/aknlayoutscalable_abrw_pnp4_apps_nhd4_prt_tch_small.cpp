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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00047345 };

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
0x4b70,	// (0x0004beb5) Screen

0x4b7c,	// (0x0004bec1) application_window

0x4be2,	// (0x0004bf27) area_bottom_pane_ParamLimits

0x4be2,	// (0x0004bf27) area_bottom_pane

0x4c3b,	// (0x0004bf80) area_top_pane_ParamLimits

0x4c3b,	// (0x0004bf80) area_top_pane

0x4c9f,	// (0x0004bfe4) call_video_uplink_pane_ParamLimits

0x4c9f,	// (0x0004bfe4) call_video_uplink_pane

0x4cdd,	// (0x0004c022) main_pane_ParamLimits

0x4cdd,	// (0x0004c022) main_pane

0x0eb8,	// (0x000481fd) context_pane

0x8280,	// (0x0004f5c5) navi_pane

0x82a0,	// (0x0004f5e5) popup_cale_events_window_ParamLimits

0x82a0,	// (0x0004f5e5) popup_cale_events_window

0x0ecb,	// (0x00048210) popup_mup_playback_window

0x82b8,	// (0x0004f5fd) signal_pane

0xd40e,	// (0x00054753) main_browser_pane

0xde9e,	// (0x000551e3) main_burst_pane

0x8156,	// (0x0004f49b) main_calc_pane

0xde9e,	// (0x000551e3) main_cale_day_pane

0xd40e,	// (0x00054753) main_cale_month_pane

0xde9e,	// (0x000551e3) main_cale_week_pane

0xde9e,	// (0x000551e3) main_call_pane

0x5308,	// (0x0004c64d) main_call_poc_pane

0xde9e,	// (0x000551e3) main_camera_pane

0xde9e,	// (0x000551e3) main_chi_dic_pane

0xdd2d,	// (0x00055072) main_clock_pane

0x5308,	// (0x0004c64d) main_fmradio_pane

0xde9e,	// (0x000551e3) main_graph_messa_pane

0x5308,	// (0x0004c64d) main_help_pane

0xd40e,	// (0x00054753) main_im_pane

0xd2ff,	// (0x00054644) main_image_pane_ParamLimits

0xd2ff,	// (0x00054644) main_image_pane

0x5308,	// (0x0004c64d) main_location2_pane

0xde9e,	// (0x000551e3) main_location_pane

0x5308,	// (0x0004c64d) main_messa_pane

0x5308,	// (0x0004c64d) main_mp2_pane

0xde9e,	// (0x000551e3) main_mp_pane

0x5308,	// (0x0004c64d) main_msg_pane

0x5308,	// (0x0004c64d) main_mup_eq_pane

0x5308,	// (0x0004c64d) main_mup_pane

0xde9e,	// (0x000551e3) main_notes_pane

0x5308,	// (0x0004c64d) main_pec_pane

0x5308,	// (0x0004c64d) main_phob_pane

0x5308,	// (0x0004c64d) main_pinb_pane

0x5308,	// (0x0004c64d) main_postcard_pane

0x5308,	// (0x0004c64d) main_qdial_pane

0xde9e,	// (0x000551e3) main_skin_pane

0x5308,	// (0x0004c64d) main_smil2_pane

0xde9e,	// (0x000551e3) main_smil_pane

0xde9e,	// (0x000551e3) main_video_pane

0xde9e,	// (0x000551e3) main_video_tele_pane

0xd2ff,	// (0x00054644) main_viewer_pane_ParamLimits

0xd2ff,	// (0x00054644) main_viewer_pane

0xde9e,	// (0x000551e3) main_vorec_pane

0x818c,	// (0x0004f4d1) popup_blid_sat_info_window_ParamLimits

0x818c,	// (0x0004f4d1) popup_blid_sat_info_window

0x81a2,	// (0x0004f4e7) popup_dyc_status_message_window_ParamLimits

0x81a2,	// (0x0004f4e7) popup_dyc_status_message_window

0x81b0,	// (0x0004f4f5) popup_grid_large_graphic_window_ParamLimits

0x81b0,	// (0x0004f4f5) popup_grid_large_graphic_window

0x8224,	// (0x0004f569) popup_loc_request_window_ParamLimits

0x8224,	// (0x0004f569) popup_loc_request_window

0x8258,	// (0x0004f59d) popup_wml_address_window_ParamLimits

0x8258,	// (0x0004f59d) popup_wml_address_window

0x802e,	// (0x0004f373) call_muted_g1

0x7ce5,	// (0x0004f02a) popup_call_audio_conf_window_ParamLimits

0x7ce5,	// (0x0004f02a) popup_call_audio_conf_window

0x803e,	// (0x0004f383) popup_call_audio_first_window_ParamLimits

0x803e,	// (0x0004f383) popup_call_audio_first_window

0x807e,	// (0x0004f3c3) popup_call_audio_in_window_ParamLimits

0x807e,	// (0x0004f3c3) popup_call_audio_in_window

0x80a2,	// (0x0004f3e7) popup_call_audio_out_window_ParamLimits

0x80a2,	// (0x0004f3e7) popup_call_audio_out_window

0x80c4,	// (0x0004f409) popup_call_audio_second_window_ParamLimits

0x80c4,	// (0x0004f409) popup_call_audio_second_window

0x80f4,	// (0x0004f439) popup_call_audio_wait_window_ParamLimits

0x80f4,	// (0x0004f439) popup_call_audio_wait_window

0x8115,	// (0x0004f45a) popup_number_entry_window_ParamLimits

0x8115,	// (0x0004f45a) popup_number_entry_window

0x4e94,	// (0x0004c1d9) bg_popup_call_pane_cp05_ParamLimits

0x4e94,	// (0x0004c1d9) bg_popup_call_pane_cp05

0x4eb4,	// (0x0004c1f9) popup_number_entry_window_t1

0x4ec7,	// (0x0004c20c) popup_number_entry_window_t2

0x4ed9,	// (0x0004c21e) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00056474) popup_number_entry_window_t

0x4f2a,	// (0x0004c26f) text_title_cp2

0x4f3d,	// (0x0004c282) bg_popup_call_pane_cp_ParamLimits

0x4f3d,	// (0x0004c282) bg_popup_call_pane_cp

0x4f4b,	// (0x0004c290) call_thumbnail_pane

0x4f53,	// (0x0004c298) popup_call_audio_in_window_g1_ParamLimits

0x4f53,	// (0x0004c298) popup_call_audio_in_window_g1

0x4f5f,	// (0x0004c2a4) popup_call_audio_in_window_g2_ParamLimits

0x4f5f,	// (0x0004c2a4) popup_call_audio_in_window_g2

0x4f6b,	// (0x0004c2b0) popup_call_audio_in_window_g3_ParamLimits

0x4f6b,	// (0x0004c2b0) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0005647d) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0005647d) popup_call_audio_in_window_g

0x4f77,	// (0x0004c2bc) popup_call_audio_in_window_t1_ParamLimits

0x4f77,	// (0x0004c2bc) popup_call_audio_in_window_t1

0x4f92,	// (0x0004c2d7) popup_call_audio_in_window_t2_ParamLimits

0x4f92,	// (0x0004c2d7) popup_call_audio_in_window_t2

0x4fad,	// (0x0004c2f2) popup_call_audio_in_window_t3_ParamLimits

0x4fad,	// (0x0004c2f2) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00056484) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00056484) popup_call_audio_in_window_t

0x4f3d,	// (0x0004c282) bg_popup_call_pane_cp01_ParamLimits

0x4f3d,	// (0x0004c282) bg_popup_call_pane_cp01

0x4f4b,	// (0x0004c290) call_thumbnail_pane_cp02

0x4fc0,	// (0x0004c305) call_type_pane_cp022

0x4fc8,	// (0x0004c30d) popup_call_audio_out_window_g1_ParamLimits

0x4fc8,	// (0x0004c30d) popup_call_audio_out_window_g1

0x4fda,	// (0x0004c31f) popup_call_audio_out_window_g2_ParamLimits

0x4fda,	// (0x0004c31f) popup_call_audio_out_window_g2

0x4fe6,	// (0x0004c32b) popup_call_audio_out_window_g3_ParamLimits

0x4fe6,	// (0x0004c32b) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0005648b) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0005648b) popup_call_audio_out_window_g

0x4ff8,	// (0x0004c33d) popup_call_audio_out_window_t1_ParamLimits

0x4ff8,	// (0x0004c33d) popup_call_audio_out_window_t1

0x5010,	// (0x0004c355) popup_call_audio_out_window_t2_ParamLimits

0x5010,	// (0x0004c355) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00056492) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00056492) popup_call_audio_out_window_t

0x5025,	// (0x0004c36a) bg_popup_call_pane_ParamLimits

0x5025,	// (0x0004c36a) bg_popup_call_pane

0x50a9,	// (0x0004c3ee) call_thumbnail_pane_cp_ParamLimits

0x50a9,	// (0x0004c3ee) call_thumbnail_pane_cp

0x50cd,	// (0x0004c412) call_type_pane_cp01_ParamLimits

0x50cd,	// (0x0004c412) call_type_pane_cp01

0x5111,	// (0x0004c456) popup_call_audio_first_window_g1_ParamLimits

0x5111,	// (0x0004c456) popup_call_audio_first_window_g1

0x515d,	// (0x0004c4a2) popup_call_audio_first_window_g2_ParamLimits

0x515d,	// (0x0004c4a2) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00056497) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00056497) popup_call_audio_first_window_g

0x51a1,	// (0x0004c4e6) popup_call_audio_first_window_t1_ParamLimits

0x51a1,	// (0x0004c4e6) popup_call_audio_first_window_t1

0x524d,	// (0x0004c592) popup_call_audio_first_window_t4_ParamLimits

0x524d,	// (0x0004c592) popup_call_audio_first_window_t4

0x52d9,	// (0x0004c61e) popup_call_audio_first_window_t5_ParamLimits

0x52d9,	// (0x0004c61e) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0005649c) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0005649c) popup_call_audio_first_window_t

0x5308,	// (0x0004c64d) bg_popup_call_pane_cp02

0x5312,	// (0x0004c657) call_type_pane_cp023

0x531a,	// (0x0004c65f) popup_call_audio_wait_window_g1

0x5322,	// (0x0004c667) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x000564a3) popup_call_audio_wait_window_g

0x532a,	// (0x0004c66f) popup_call_audio_wait_window_t3

0x5338,	// (0x0004c67d) bg_popup_call_pane_cp03_ParamLimits

0x5338,	// (0x0004c67d) bg_popup_call_pane_cp03

0x5398,	// (0x0004c6dd) call_thumbnail_pane_cp011_ParamLimits

0x5398,	// (0x0004c6dd) call_thumbnail_pane_cp011

0x53a4,	// (0x0004c6e9) call_type_pane_cp034_ParamLimits

0x53a4,	// (0x0004c6e9) call_type_pane_cp034

0x53e0,	// (0x0004c725) popup_call_audio_second_window_g1_ParamLimits

0x53e0,	// (0x0004c725) popup_call_audio_second_window_g1

0x541c,	// (0x0004c761) popup_call_audio_second_window_g2_ParamLimits

0x541c,	// (0x0004c761) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x000564a8) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x000564a8) popup_call_audio_second_window_g

0x5458,	// (0x0004c79d) popup_call_audio_second_window_t1_ParamLimits

0x5458,	// (0x0004c79d) popup_call_audio_second_window_t1

0xd275,	// (0x000545ba) popup_call_audio_second_window_t2_ParamLimits

0xd275,	// (0x000545ba) popup_call_audio_second_window_t2

0xd2ab,	// (0x000545f0) popup_call_audio_second_window_t3_ParamLimits

0xd2ab,	// (0x000545f0) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x000564ad) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x000564ad) popup_call_audio_second_window_t

0x5308,	// (0x0004c64d) bg_popup_call_pane_cp04

0xd2e1,	// (0x00054626) list_conf_pane

0xd2e9,	// (0x0005462e) popup_call_audio_conf_window_t1

0xd2f7,	// (0x0005463c) call_thumbnail_pane_g1

0xd2ff,	// (0x00054644) bg_pinb_pane_ParamLimits

0xd2ff,	// (0x00054644) bg_pinb_pane

0xd30d,	// (0x00054652) find_pinb_pane

0xd316,	// (0x0005465b) listscroll_pinb_pane_ParamLimits

0xd316,	// (0x0005465b) listscroll_pinb_pane

0xd325,	// (0x0005466a) pinb_bg_pane_g1

0x54d9,	// (0x0004c81e) pinb_bg_pane_g2

0x54e5,	// (0x0004c82a) pinb_bg_pane_g3

0x54f1,	// (0x0004c836) pinb_bg_pane_g4

0x54fd,	// (0x0004c842) pinb_bg_pane_g5

0x5509,	// (0x0004c84e) pinb_bg_pane_g6

0x5514,	// (0x0004c859) pinb_bg_pane_g7

0x551f,	// (0x0004c864) pinb_bg_pane_g8

0x552a,	// (0x0004c86f) pinb_bg_pane_g9

0x5534,	// (0x0004c879) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x000564b4) pinb_bg_pane_g

0x5549,	// (0x0004c88e) grid_pinb_pane

0x5554,	// (0x0004c899) list_pinb_pane

0x555f,	// (0x0004c8a4) scroll_pane_cp01_ParamLimits

0x555f,	// (0x0004c8a4) scroll_pane_cp01

0xd337,	// (0x0005467c) find_pinb_pane_g1_ParamLimits

0xd337,	// (0x0005467c) find_pinb_pane_g1

0xd34f,	// (0x00054694) find_pinb_pane_t1

0xd361,	// (0x000546a6) find_pinb_pane_t2

0x0001,

0xf189,	// (0x000564ce) find_pinb_pane_t

0xd376,	// (0x000546bb) input_focus_pane_cp01_ParamLimits

0xd376,	// (0x000546bb) input_focus_pane_cp01

0x5571,	// (0x0004c8b6) cell_pinb_pane_ParamLimits

0x5571,	// (0x0004c8b6) cell_pinb_pane

0x559f,	// (0x0004c8e4) cell_pinb_pane_g1_ParamLimits

0x559f,	// (0x0004c8e4) cell_pinb_pane_g1

0x55b4,	// (0x0004c8f9) cell_pinb_pane_g2_ParamLimits

0x55b4,	// (0x0004c8f9) cell_pinb_pane_g2

0xd382,	// (0x000546c7) cell_pinb_pane_g3_ParamLimits

0xd382,	// (0x000546c7) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x000564d3) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x000564d3) cell_pinb_pane_g

0x5308,	// (0x0004c64d) grid_highlight_pane_cp01

0x55c0,	// (0x0004c905) list_pinb_item_pane_ParamLimits

0x55c0,	// (0x0004c905) list_pinb_item_pane

0x5308,	// (0x0004c64d) list_highlight_pane_cp02

0xd38e,	// (0x000546d3) list_pinb_item_pane_g1_ParamLimits

0xd38e,	// (0x000546d3) list_pinb_item_pane_g1

0xd39b,	// (0x000546e0) list_pinb_item_pane_g2_ParamLimits

0xd39b,	// (0x000546e0) list_pinb_item_pane_g2

0x55ea,	// (0x0004c92f) list_pinb_item_pane_g3_ParamLimits

0x55ea,	// (0x0004c92f) list_pinb_item_pane_g3

0xd3a7,	// (0x000546ec) list_pinb_item_pane_g4_ParamLimits

0xd3a7,	// (0x000546ec) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x000564da) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x000564da) list_pinb_item_pane_g

0xd3b3,	// (0x000546f8) list_pinb_item_pane_t1_ParamLimits

0xd3b3,	// (0x000546f8) list_pinb_item_pane_t1

0x5615,	// (0x0004c95a) calc_display_pane

0x5633,	// (0x0004c978) calc_paper_pane

0x564f,	// (0x0004c994) grid_calc_pane

0x5308,	// (0x0004c64d) bg_list_pane_cp01

0x567b,	// (0x0004c9c0) clock_g1

0x5683,	// (0x0004c9c8) clock_g2

0x0001,

0xf19e,	// (0x000564e3) clock_g

0x568d,	// (0x0004c9d2) clock_t1_ParamLimits

0x568d,	// (0x0004c9d2) clock_t1

0x56a2,	// (0x0004c9e7) clock_t2_ParamLimits

0x56a2,	// (0x0004c9e7) clock_t2

0x56b4,	// (0x0004c9f9) clock_t3_ParamLimits

0x56b4,	// (0x0004c9f9) clock_t3

0x56c6,	// (0x0004ca0b) clock_t4_ParamLimits

0x56c6,	// (0x0004ca0b) clock_t4

0x56d8,	// (0x0004ca1d) clock_t5_ParamLimits

0x56d8,	// (0x0004ca1d) clock_t5

0x56ed,	// (0x0004ca32) clock_t6_ParamLimits

0x56ed,	// (0x0004ca32) clock_t6

0x56ff,	// (0x0004ca44) clock_t7_ParamLimits

0x56ff,	// (0x0004ca44) clock_t7

0x5711,	// (0x0004ca56) clock_t8_ParamLimits

0x5711,	// (0x0004ca56) clock_t8

0x5727,	// (0x0004ca6c) clock_t9_ParamLimits

0x5727,	// (0x0004ca6c) clock_t9

0x0008,

0xf1a3,	// (0x000564e8) clock_t_ParamLimits

0xf1a3,	// (0x000564e8) clock_t

0xd3ca,	// (0x0005470f) popup_clock_analogue_window_cp02

0xd3ca,	// (0x0005470f) popup_clock_digital_window_cp01

0xd3d2,	// (0x00054717) listscroll_help_pane

0x5308,	// (0x0004c64d) phob_pre_status_pane

0xd3dc,	// (0x00054721) grid_qdial_pane

0x5308,	// (0x0004c64d) listscroll_mce_pane

0xd3e6,	// (0x0005472b) bg_notes_pane

0xd3f0,	// (0x00054735) list_notes_pane

0x573d,	// (0x0004ca82) scroll_pane_cp06

0xd3fa,	// (0x0005473f) bg_calc_paper_pane

0x5752,	// (0x0004ca97) list_calc_pane

0xd40e,	// (0x00054753) bg_calc_display_pane

0x576c,	// (0x0004cab1) calc_display_pane_t1

0x5781,	// (0x0004cac6) calc_display_pane_t2

0x5796,	// (0x0004cadb) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x000564fb) calc_display_pane_t

0x57a8,	// (0x0004caed) cell_calc_pane_ParamLimits

0x57a8,	// (0x0004caed) cell_calc_pane

0xd41a,	// (0x0005475f) bg_calc_paper_pane_g1

0xd426,	// (0x0005476b) bg_calc_paper_pane_g2

0xd432,	// (0x00054777) bg_calc_paper_pane_g3

0xd43e,	// (0x00054783) bg_calc_paper_pane_g4

0xd44a,	// (0x0005478f) bg_calc_paper_pane_g5

0x57d5,	// (0x0004cb1a) bg_calc_paper_pane_g6

0x57e6,	// (0x0004cb2b) bg_calc_paper_pane_g7

0x57f7,	// (0x0004cb3c) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00056502) bg_calc_paper_pane_g

0x5808,	// (0x0004cb4d) calc_bg_paper_pane_g9

0x5819,	// (0x0004cb5e) list_calc_item_pane_ParamLimits

0x5819,	// (0x0004cb5e) list_calc_item_pane

0xd456,	// (0x0005479b) list_calc_item_pane_g1

0x5853,	// (0x0004cb98) list_calc_item_pane_t1_ParamLimits

0x5853,	// (0x0004cb98) list_calc_item_pane_t1

0x5865,	// (0x0004cbaa) list_calc_item_pane_t2_ParamLimits

0x5865,	// (0x0004cbaa) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00056513) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00056513) list_calc_item_pane_t

0xd463,	// (0x000547a8) cell_calc_pane_g1

0xd46d,	// (0x000547b2) grid_highlight_pane_cp02

0xd48f,	// (0x000547d4) bg_calc_display_pane_g1

0x5895,	// (0x0004cbda) bg_calc_display_pane_g2

0xd498,	// (0x000547dd) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0005651d) bg_calc_display_pane_g

0x589f,	// (0x0004cbe4) cell_qdial_pane_ParamLimits

0x589f,	// (0x0004cbe4) cell_qdial_pane

0x58b3,	// (0x0004cbf8) cell_qdial_pane_g1_ParamLimits

0x58b3,	// (0x0004cbf8) cell_qdial_pane_g1

0x58c0,	// (0x0004cc05) cell_qdial_pane_g2_ParamLimits

0x58c0,	// (0x0004cc05) cell_qdial_pane_g2

0xd4a1,	// (0x000547e6) cell_qdial_pane_g3_ParamLimits

0xd4a1,	// (0x000547e6) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00056524) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00056524) cell_qdial_pane_g

0x58de,	// (0x0004cc23) cell_qdial_pane_t1_ParamLimits

0x58de,	// (0x0004cc23) cell_qdial_pane_t1

0x58f6,	// (0x0004cc3b) cell_qdial_pane_t2_ParamLimits

0x58f6,	// (0x0004cc3b) cell_qdial_pane_t2

0x5909,	// (0x0004cc4e) cell_qdial_pane_t3_ParamLimits

0x5909,	// (0x0004cc4e) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0005652d) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0005652d) cell_qdial_pane_t

0x5308,	// (0x0004c64d) grid_highlight_pane_cp04

0xd4ad,	// (0x000547f2) thumbnail_qdial_pane_ParamLimits

0xd4ad,	// (0x000547f2) thumbnail_qdial_pane

0xd509,	// (0x0005484e) list_help_pane

0xd512,	// (0x00054857) scroll_pane_cp02

0x591c,	// (0x0004cc61) help_list_pane_t1_ParamLimits

0x591c,	// (0x0004cc61) help_list_pane_t1

0x595a,	// (0x0004cc9f) bg_notes_pane_g2

0x5962,	// (0x0004cca7) bg_notes_pane_g3

0x596a,	// (0x0004ccaf) notes_bg_pane_g1

0x5972,	// (0x0004ccb7) notes_bg_pane_g4

0x597a,	// (0x0004ccbf) notes_bg_pane_g5

0x5982,	// (0x0004ccc7) notes_bg_pane_g6

0x598a,	// (0x0004cccf) notes_bg_pane_g7

0x5992,	// (0x0004ccd7) notes_bg_pane_g8

0x599a,	// (0x0004ccdf) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0005654b) notes_bg_pane_g

0x59a2,	// (0x0004cce7) list_notes_text_pane_ParamLimits

0x59a2,	// (0x0004cce7) list_notes_text_pane

0xd51b,	// (0x00054860) list_notes_text_pane_g1

0x59d2,	// (0x0004cd17) list_notes_text_pane_t1

0xd40e,	// (0x00054753) listscroll_cale_week_pane

0x59fd,	// (0x0004cd42) bg_cale_heading_pane

0xd535,	// (0x0005487a) bg_cale_pane_cp01

0x5a11,	// (0x0004cd56) cale_week_corner_pane

0x5a22,	// (0x0004cd67) cale_week_day_heading_pane

0x5a36,	// (0x0004cd7b) cale_week_scroll_pane_g1

0x5a47,	// (0x0004cd8c) cale_week_scroll_pane_g2

0x5a58,	// (0x0004cd9d) cale_week_scroll_pane_g3

0x5a69,	// (0x0004cdae) cale_week_scroll_pane_g4

0x5a7a,	// (0x0004cdbf) cale_week_scroll_pane_g5

0x5a8b,	// (0x0004cdd0) cale_week_scroll_pane_g6

0x5a9c,	// (0x0004cde1) cale_week_scroll_pane_g7

0x5aaf,	// (0x0004cdf4) cale_week_scroll_pane_g8

0x5ac2,	// (0x0004ce07) cale_week_scroll_pane_g9

0x5ad3,	// (0x0004ce18) cale_week_scroll_pane_g10

0x5ae4,	// (0x0004ce29) cale_week_scroll_pane_g11

0x5af5,	// (0x0004ce3a) cale_week_scroll_pane_g12

0x5b06,	// (0x0004ce4b) cale_week_scroll_pane_g13

0x5b17,	// (0x0004ce5c) cale_week_scroll_pane_g14

0x5b28,	// (0x0004ce6d) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0005655a) cale_week_scroll_pane_g

0x5b39,	// (0x0004ce7e) cale_week_time_pane

0x5b4c,	// (0x0004ce91) grid_cale_week_pane

0x5b61,	// (0x0004cea6) scroll_pane_cp08

0x5b7b,	// (0x0004cec0) cell_cale_week_pane_ParamLimits

0x5b7b,	// (0x0004cec0) cell_cale_week_pane

0x5bb7,	// (0x0004cefc) cale_week_day_heading_pane_t1

0x5bcb,	// (0x0004cf10) cale_week_day_heading_pane_t2

0x5bdf,	// (0x0004cf24) cale_week_day_heading_pane_t3

0x5bf3,	// (0x0004cf38) cale_week_day_heading_pane_t4

0x5c07,	// (0x0004cf4c) cale_week_day_heading_pane_t5

0x5c1b,	// (0x0004cf60) cale_week_day_heading_pane_t6

0x5c2f,	// (0x0004cf74) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00056579) cale_week_day_heading_pane_t

0xd560,	// (0x000548a5) bg_cale_side_pane

0x5c43,	// (0x0004cf88) cale_week_time_pane_t1

0x5c5b,	// (0x0004cfa0) cale_week_time_pane_t2

0x5c73,	// (0x0004cfb8) cale_week_time_pane_t3

0x5c8b,	// (0x0004cfd0) cale_week_time_pane_t4

0x5ca3,	// (0x0004cfe8) cale_week_time_pane_t5

0x5cbb,	// (0x0004d000) cale_week_time_pane_t6

0x5cd3,	// (0x0004d018) cale_week_time_pane_t7

0x5ceb,	// (0x0004d030) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00056588) cale_week_time_pane_t

0x5d03,	// (0x0004d048) cell_cale_week_pane_g2

0x5d1c,	// (0x0004d061) cell_cale_week_pane_g3_ParamLimits

0x5d1c,	// (0x0004d061) cell_cale_week_pane_g3

0xd56e,	// (0x000548b3) grid_highlight_pane_cp07

0xd576,	// (0x000548bb) listscroll_gms_pane

0xd580,	// (0x000548c5) grid_gms_pane

0xd589,	// (0x000548ce) listscroll_gms_pane_g1

0xd591,	// (0x000548d6) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00056599) listscroll_gms_pane_g

0x5d34,	// (0x0004d079) scroll_pane_cp010

0x5d3f,	// (0x0004d084) cell_gms_pane_ParamLimits

0x5d3f,	// (0x0004d084) cell_gms_pane

0x5d51,	// (0x0004d096) cell_gms_pane_g1

0xd599,	// (0x000548de) cell_gms_pane_g2

0xd51b,	// (0x00054860) cell_gms_pane_g3

0xd5a1,	// (0x000548e6) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0005659e) cell_gms_pane_g

0xd5aa,	// (0x000548ef) grid_highlight_pane_cp09

0x7fd6,	// (0x0004f31b) phob_pre_status_pane_g1

0x7fde,	// (0x0004f323) phob_pre_status_pane_g2

0x7fe6,	// (0x0004f32b) phob_pre_status_pane_g3

0x7fee,	// (0x0004f333) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0005698d) phob_pre_status_pane_g

0x7ffe,	// (0x0004f343) phob_pre_status_pane_t1

0x800e,	// (0x0004f353) phob_pre_status_pane_t2

0x801e,	// (0x0004f363) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x00056998) phob_pre_status_pane_t

0x5308,	// (0x0004c64d) bg_list_pane_cp05

0x5d61,	// (0x0004d0a6) grid_vorec_pane

0x5d69,	// (0x0004d0ae) vorec_t1

0x5d77,	// (0x0004d0bc) vorec_t2

0x5d85,	// (0x0004d0ca) vorec_t3

0x5d93,	// (0x0004d0d8) vorec_t4

0x5da1,	// (0x0004d0e6) vorec_t5

0x5daf,	// (0x0004d0f4) vorec_t6

0x0006,

0xf262,	// (0x000565a7) vorec_t

0x5dcb,	// (0x0004d110) wait_bar_pane_cp01

0xd5b2,	// (0x000548f7) cell_vorec_pane_ParamLimits

0xd5b2,	// (0x000548f7) cell_vorec_pane

0xd5c5,	// (0x0005490a) cell_vorec_pane_g1

0x5308,	// (0x0004c64d) grid_highlight_pane_cp05

0x5de3,	// (0x0004d128) cams_zoom_pane

0x5def,	// (0x0004d134) image_vga_pane

0x5dfe,	// (0x0004d143) main_camera_pane_g1

0x5e0c,	// (0x0004d151) main_camera_pane_g2

0x5e1a,	// (0x0004d15f) main_camera_pane_g3

0x5e26,	// (0x0004d16b) main_camera_pane_g4

0x5e32,	// (0x0004d177) main_camera_pane_g5

0x5e3e,	// (0x0004d183) main_camera_pane_g6

0x5e4a,	// (0x0004d18f) main_camera_pane_g7

0x0007,

0xf271,	// (0x000565b6) main_camera_pane_g

0x5e56,	// (0x0004d19b) main_camera_pane_t1

0x5e68,	// (0x0004d1ad) main_camera_pane_t2

0x0001,

0xf282,	// (0x000565c7) main_camera_pane_t

0x5e89,	// (0x0004d1ce) cams_zoom_pane_cp_ParamLimits

0x5e89,	// (0x0004d1ce) cams_zoom_pane_cp

0x5ead,	// (0x0004d1f2) image_cif_pane_ParamLimits

0x5ead,	// (0x0004d1f2) image_cif_pane

0x5ecb,	// (0x0004d210) image_subqcif_pane

0x5ed3,	// (0x0004d218) main_video_pane_g1_ParamLimits

0x5ed3,	// (0x0004d218) main_video_pane_g1

0x5ef3,	// (0x0004d238) main_video_pane_g2_ParamLimits

0x5ef3,	// (0x0004d238) main_video_pane_g2

0x5f25,	// (0x0004d26a) main_video_pane_g3_ParamLimits

0x5f25,	// (0x0004d26a) main_video_pane_g3

0x5f50,	// (0x0004d295) main_video_pane_g4_ParamLimits

0x5f50,	// (0x0004d295) main_video_pane_g4

0x5f7b,	// (0x0004d2c0) main_video_pane_g5_ParamLimits

0x5f7b,	// (0x0004d2c0) main_video_pane_g5

0xd5db,	// (0x00054920) main_video_pane_g6_ParamLimits

0xd5db,	// (0x00054920) main_video_pane_g6

0x0006,

0xf287,	// (0x000565cc) main_video_pane_g_ParamLimits

0xf287,	// (0x000565cc) main_video_pane_g

0x5f9f,	// (0x0004d2e4) main_video_pane_t1_ParamLimits

0x5f9f,	// (0x0004d2e4) main_video_pane_t1

0xd5f5,	// (0x0005493a) cams_zoom_pane_g1

0xd5fe,	// (0x00054943) cams_zoom_pane_g2

0xd607,	// (0x0005494c) cams_zoom_pane_g3

0xd610,	// (0x00054955) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x000565db) cams_zoom_pane_g

0x5fe9,	// (0x0004d32e) grid_cams_pane

0x5ff7,	// (0x0004d33c) linegrid_cams_pane

0x6005,	// (0x0004d34a) cell_cams_pane_ParamLimits

0x6005,	// (0x0004d34a) cell_cams_pane

0xd619,	// (0x0005495e) cams_burst_image_pane

0xd621,	// (0x00054966) cell_cams_pane_g1

0x5308,	// (0x0004c64d) grid_highlight_pane_cp03

0xd463,	// (0x000547a8) mp_bg_pane_g1

0x5308,	// (0x0004c64d) bg_list_pane_cp03

0x0d90,	// (0x000480d5) bg_mp_pane

0x0d98,	// (0x000480dd) grid_mp_pane

0x0da0,	// (0x000480e5) media_player_g1

0x0da8,	// (0x000480ed) media_player_t1

0x0db6,	// (0x000480fb) media_player_t2

0x0dc4,	// (0x00048109) media_player_t3

0x0dd2,	// (0x00048117) media_player_t4

0x0de0,	// (0x00048125) media_player_t5

0x0dee,	// (0x00048133) media_player_t6

0x0dfc,	// (0x00048141) media_player_t7

0x0006,

0xf632,	// (0x00056977) media_player_t

0x0e0a,	// (0x0004814f) wait_bar_pane_cp02

0xf617,	// (0x0005695c) main_usb_pane_t

0x7fcd,	// (0x0004f312) cell_mp_pane

0xd463,	// (0x000547a8) cell_mp_pane_g1

0x5308,	// (0x0004c64d) grid_highlight_pane_cp06

0xd629,	// (0x0005496e) grid_skin_colour_pane

0xd631,	// (0x00054976) list_highlight_pane_cp03

0x606a,	// (0x0004d3af) skin_g1

0xd639,	// (0x0005497e) skin_t1

0xd648,	// (0x0005498d) skin_t2

0x0001,

0xf2cb,	// (0x00056610) skin_t

0x6074,	// (0x0004d3b9) cell_skin_colour_pane_ParamLimits

0x6074,	// (0x0004d3b9) cell_skin_colour_pane

0xd656,	// (0x0005499b) cell_skin_colour_pane_g1

0x60cb,	// (0x0004d410) call_video_g1_ParamLimits

0x60cb,	// (0x0004d410) call_video_g1

0x60db,	// (0x0004d420) call_video_g2_ParamLimits

0x60db,	// (0x0004d420) call_video_g2

0x0001,

0xf2d0,	// (0x00056615) call_video_g_ParamLimits

0xf2d0,	// (0x00056615) call_video_g

0x611b,	// (0x0004d460) call_video_uplink_pane_cp1_ParamLimits

0x611b,	// (0x0004d460) call_video_uplink_pane_cp1

0xd670,	// (0x000549b5) call_video_uplink_pane_cp2

0x61c7,	// (0x0004d50c) video_down_crop_pane_ParamLimits

0x61c7,	// (0x0004d50c) video_down_crop_pane

0x629f,	// (0x0004d5e4) video_down_pane_ParamLimits

0x629f,	// (0x0004d5e4) video_down_pane

0xd678,	// (0x000549bd) video_down_subqcif_pane_ParamLimits

0xd678,	// (0x000549bd) video_down_subqcif_pane

0xd690,	// (0x000549d5) video_down_subqcif_pane_cp_ParamLimits

0xd690,	// (0x000549d5) video_down_subqcif_pane_cp

0xd6b4,	// (0x000549f9) im_reading_pane_ParamLimits

0xd6b4,	// (0x000549f9) im_reading_pane

0x6381,	// (0x0004d6c6) im_writing_pane_ParamLimits

0x6381,	// (0x0004d6c6) im_writing_pane

0x639f,	// (0x0004d6e4) im_reading_pane_t1

0xd6ce,	// (0x00054a13) list_im_pane

0xd6df,	// (0x00054a24) scroll_pane_cp07

0x63ff,	// (0x0004d744) im_writing_pane_t1_ParamLimits

0x63ff,	// (0x0004d744) im_writing_pane_t1

0xd6f8,	// (0x00054a3d) im_writing_pane_t2_ParamLimits

0xd6f8,	// (0x00054a3d) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0005661f) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0005661f) im_writing_pane_t

0x5308,	// (0x0004c64d) input_focus_pane_cp04

0x5308,	// (0x0004c64d) input_focus_pane_cp05

0x6411,	// (0x0004d756) list_im_single_pane_ParamLimits

0x6411,	// (0x0004d756) list_im_single_pane

0x643d,	// (0x0004d782) list_single_im_pane_t1

0x7f91,	// (0x0004f2d6) blid_accuracy_pane

0x7f99,	// (0x0004f2de) blid_compass_pane

0x7fa3,	// (0x0004f2e8) main_location_t1

0x7fb1,	// (0x0004f2f6) main_location_t2

0x7fbf,	// (0x0004f304) main_location_t3

0x0002,

0xf641,	// (0x00056986) main_location_t

0x5308,	// (0x0004c64d) aid_levels_location

0xd463,	// (0x000547a8) blid_accuracy_pane_g1

0xd463,	// (0x000547a8) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00056681) blid_accuracy_pane_g

0xd740,	// (0x00054a85) wml_content_pane

0xd77e,	// (0x00054ac3) wml_button_pane_ParamLimits

0xd77e,	// (0x00054ac3) wml_button_pane

0x644c,	// (0x0004d791) wml_list_single_large_pane_ParamLimits

0x644c,	// (0x0004d791) wml_list_single_large_pane

0x647e,	// (0x0004d7c3) wml_list_single_medium_pane_ParamLimits

0x647e,	// (0x0004d7c3) wml_list_single_medium_pane

0x64b7,	// (0x0004d7fc) wml_list_single_small_pane_ParamLimits

0x64b7,	// (0x0004d7fc) wml_list_single_small_pane

0xd792,	// (0x00054ad7) wml_selection_box_pane_ParamLimits

0xd792,	// (0x00054ad7) wml_selection_box_pane

0xd7a5,	// (0x00054aea) wml_list_single_pane_t1

0xd7b4,	// (0x00054af9) wml_list_single_medium_pane_t1

0xd7c3,	// (0x00054b08) wml_list_single_large_pane_t1

0xd7d2,	// (0x00054b17) input_focus_pane_cp02_ParamLimits

0xd7d2,	// (0x00054b17) input_focus_pane_cp02

0xd7e5,	// (0x00054b2a) wml_selection_box_pane_g1

0xd7ee,	// (0x00054b33) wml_selection_box_pane_t1_ParamLimits

0xd7ee,	// (0x00054b33) wml_selection_box_pane_t1

0xd2ff,	// (0x00054644) bg_wml_button_pane_ParamLimits

0xd2ff,	// (0x00054644) bg_wml_button_pane

0xd806,	// (0x00054b4b) wml_button_pane_g1

0xd80e,	// (0x00054b53) wml_button_pane_t1

0xd806,	// (0x00054b4b) wml_button_bg_pane_g1

0xd81e,	// (0x00054b63) wml_button_bg_pane_g2

0xd826,	// (0x00054b6b) wml_button_bg_pane_g3

0xd82e,	// (0x00054b73) wml_button_bg_pane_g4

0xd836,	// (0x00054b7b) wml_button_bg_pane_g5

0xd83e,	// (0x00054b83) wml_button_bg_pane_g6

0xd846,	// (0x00054b8b) wml_button_bg_pane_g7

0xd84e,	// (0x00054b93) wml_button_bg_pane_g8

0xd856,	// (0x00054b9b) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00056624) wml_button_bg_pane_g

0x64ff,	// (0x0004d844) bg_list_pane_cp02

0xd85e,	// (0x00054ba3) mce_header_pane_ParamLimits

0xd85e,	// (0x00054ba3) mce_header_pane

0xd874,	// (0x00054bb9) mce_icon_pane

0xd874,	// (0x00054bb9) mce_image_pane

0xd87d,	// (0x00054bc2) mce_text_pane_ParamLimits

0xd87d,	// (0x00054bc2) mce_text_pane

0x6509,	// (0x0004d84e) scroll_pane_cp03

0xd776,	// (0x00054abb) scroll_pane_cp04

0xd890,	// (0x00054bd5) scroll_pane_cp05_ParamLimits

0xd890,	// (0x00054bd5) scroll_pane_cp05

0x6513,	// (0x0004d858) mce_header_field_pane_ParamLimits

0x6513,	// (0x0004d858) mce_header_field_pane

0x6533,	// (0x0004d878) mce_header_field_pane_2_ParamLimits

0x6533,	// (0x0004d878) mce_header_field_pane_2

0x6549,	// (0x0004d88e) mce_header_field_pane_3

0x6551,	// (0x0004d896) list_single_mce_message_pane_ParamLimits

0x6551,	// (0x0004d896) list_single_mce_message_pane

0x6581,	// (0x0004d8c6) list_single_mce_smart_pane_ParamLimits

0x6581,	// (0x0004d8c6) list_single_mce_smart_pane

0xd89c,	// (0x00054be1) input_focus_pane_cp03

0xd8a5,	// (0x00054bea) list_header_data_pane

0x65bc,	// (0x0004d901) mce_header_field_pane_t1

0x65cc,	// (0x0004d911) list_single_mce_header_pane_ParamLimits

0x65cc,	// (0x0004d911) list_single_mce_header_pane

0xd8ad,	// (0x00054bf2) list_single_mce_header_pane_t1

0xd8bc,	// (0x00054c01) list_single_mce_message_pane_g1

0xd8c4,	// (0x00054c09) list_single_mce_message_pane_t1

0x661e,	// (0x0004d963) bg_cale_heading_pane_cp01_ParamLimits

0x661e,	// (0x0004d963) bg_cale_heading_pane_cp01

0xd8d2,	// (0x00054c17) bg_cale_pane_cp02_ParamLimits

0xd8d2,	// (0x00054c17) bg_cale_pane_cp02

0x6641,	// (0x0004d986) cale_month_corner_pane

0x6657,	// (0x0004d99c) cale_month_day_heading_pane_ParamLimits

0x6657,	// (0x0004d99c) cale_month_day_heading_pane

0x668a,	// (0x0004d9cf) cale_month_pane_g1_ParamLimits

0x668a,	// (0x0004d9cf) cale_month_pane_g1

0x66a6,	// (0x0004d9eb) cale_month_pane_g2_ParamLimits

0x66a6,	// (0x0004d9eb) cale_month_pane_g2

0x66c1,	// (0x0004da06) cale_month_pane_g3_ParamLimits

0x66c1,	// (0x0004da06) cale_month_pane_g3

0x66ed,	// (0x0004da32) cale_month_pane_g4_ParamLimits

0x66ed,	// (0x0004da32) cale_month_pane_g4

0x6719,	// (0x0004da5e) cale_month_pane_g5_ParamLimits

0x6719,	// (0x0004da5e) cale_month_pane_g5

0x6745,	// (0x0004da8a) cale_month_pane_g6_ParamLimits

0x6745,	// (0x0004da8a) cale_month_pane_g6

0x6771,	// (0x0004dab6) cale_month_pane_g7_ParamLimits

0x6771,	// (0x0004dab6) cale_month_pane_g7

0x67ad,	// (0x0004daf2) cale_month_pane_g8_ParamLimits

0x67ad,	// (0x0004daf2) cale_month_pane_g8

0x67e9,	// (0x0004db2e) cale_month_pane_g9_ParamLimits

0x67e9,	// (0x0004db2e) cale_month_pane_g9

0x6823,	// (0x0004db68) cale_month_pane_g10_ParamLimits

0x6823,	// (0x0004db68) cale_month_pane_g10

0x685d,	// (0x0004dba2) cale_month_pane_g11_ParamLimits

0x685d,	// (0x0004dba2) cale_month_pane_g11

0x6897,	// (0x0004dbdc) cale_month_pane_g12_ParamLimits

0x6897,	// (0x0004dbdc) cale_month_pane_g12

0x68d1,	// (0x0004dc16) cale_month_pane_g13_ParamLimits

0x68d1,	// (0x0004dc16) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00056637) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00056637) cale_month_pane_g

0x690b,	// (0x0004dc50) cale_month_week_pane

0x691e,	// (0x0004dc63) grid_cale_month_pane_ParamLimits

0x691e,	// (0x0004dc63) grid_cale_month_pane

0x694c,	// (0x0004dc91) cale_month_day_heading_pane_t1

0x69aa,	// (0x0004dcef) cale_month_day_heading_pane_t2

0x6a0f,	// (0x0004dd54) cale_month_day_heading_pane_t3

0x6a74,	// (0x0004ddb9) cale_month_day_heading_pane_t4

0x6ad9,	// (0x0004de1e) cale_month_day_heading_pane_t5

0x6b3e,	// (0x0004de83) cale_month_day_heading_pane_t6

0x6bab,	// (0x0004def0) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00056652) cale_month_day_heading_pane_t

0xd560,	// (0x000548a5) bg_cale_side_pane_cp01

0x6c20,	// (0x0004df65) cale_month_week_pane_t1

0x6c37,	// (0x0004df7c) cale_month_week_pane_t2

0x6c4e,	// (0x0004df93) cale_month_week_pane_t3

0x6c65,	// (0x0004dfaa) cale_month_week_pane_t4

0x6c7c,	// (0x0004dfc1) cale_month_week_pane_t5

0x6c93,	// (0x0004dfd8) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00056661) cale_month_week_pane_t

0x6caa,	// (0x0004dfef) cell_cale_month_pane_ParamLimits

0x6caa,	// (0x0004dfef) cell_cale_month_pane

0x6d60,	// (0x0004e0a5) cell_cale_month_pane_g1

0x6d6c,	// (0x0004e0b1) cell_cale_month_pane_t1_ParamLimits

0x6d6c,	// (0x0004e0b1) cell_cale_month_pane_t1

0xd56e,	// (0x000548b3) grid_highlight_pane_cp08

0xd463,	// (0x000547a8) main_smil_g1

0x6d88,	// (0x0004e0cd) smil_status_pane

0xd907,	// (0x00054c4c) smil_text_pane

0xf0e2,	// (0x00056427) bg_popup_call3_rect_pane_g8

0xf0ea,	// (0x0005642f) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0005691a) bg_popup_call3_rect_pane_g

0x0f45,	// (0x0004828a) smil_status_volume_pane_g1

0xd911,	// (0x00054c56) smil_status_pane_t1

0x8375,	// (0x0004f6ba) volume_smil_pane

0xd928,	// (0x00054c6d) list_smil_text_pane

0x6d9b,	// (0x0004e0e0) scroll_pane_cp011

0x6da6,	// (0x0004e0eb) smil_text_list_pane_t1_ParamLimits

0x6da6,	// (0x0004e0eb) smil_text_list_pane_t1

0x6e51,	// (0x0004e196) aid_volume_smil_ParamLimits

0x6e51,	// (0x0004e196) aid_volume_smil

0xd463,	// (0x000547a8) smil_volume_pane_g1

0xd463,	// (0x000547a8) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00056681) smil_volume_pane_g

0xd40e,	// (0x00054753) listscroll_cale_day_pane

0xd932,	// (0x00054c77) bg_cale_pane

0xd94a,	// (0x00054c8f) list_cale_pane

0xd95b,	// (0x00054ca0) scroll_pane_cp09

0xd96c,	// (0x00054cb1) cale_bg_pane_g1

0xd974,	// (0x00054cb9) cale_bg_pane_g2

0xd97c,	// (0x00054cc1) cale_bg_pane_g3

0xd984,	// (0x00054cc9) cale_bg_pane_g4

0xd98c,	// (0x00054cd1) cale_bg_pane_g5

0xd994,	// (0x00054cd9) cale_bg_pane_g6

0xd99c,	// (0x00054ce1) cale_bg_pane_g7

0xd9a4,	// (0x00054ce9) cale_bg_pane_g8

0xd9ac,	// (0x00054cf1) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00056686) cale_bg_pane_g

0x6e73,	// (0x0004e1b8) list_cale_time_pane_ParamLimits

0x6e73,	// (0x0004e1b8) list_cale_time_pane

0x6e94,	// (0x0004e1d9) list_cale_time_pane_g1_ParamLimits

0x6e94,	// (0x0004e1d9) list_cale_time_pane_g1

0xd9b4,	// (0x00054cf9) list_cale_time_pane_g2_ParamLimits

0xd9b4,	// (0x00054cf9) list_cale_time_pane_g2

0x6ea0,	// (0x0004e1e5) list_cale_time_pane_g3_ParamLimits

0x6ea0,	// (0x0004e1e5) list_cale_time_pane_g3

0x6ebc,	// (0x0004e201) list_cale_time_pane_g4_ParamLimits

0x6ebc,	// (0x0004e201) list_cale_time_pane_g4

0x6eca,	// (0x0004e20f) list_cale_time_pane_g5_ParamLimits

0x6eca,	// (0x0004e20f) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00056699) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00056699) list_cale_time_pane_g

0x6ed8,	// (0x0004e21d) list_cale_time_pane_t1_ParamLimits

0x6ed8,	// (0x0004e21d) list_cale_time_pane_t1

0x6f00,	// (0x0004e245) list_cale_time_pane_t2_ParamLimits

0x6f00,	// (0x0004e245) list_cale_time_pane_t2

0x724e,	// (0x0004e593) aid_blid_cardinal_pane

0x7290,	// (0x0004e5d5) compass_pane_t4

0x6f28,	// (0x0004e26d) list_cale_time_pane_t4_ParamLimits

0x6f28,	// (0x0004e26d) list_cale_time_pane_t4

0x729e,	// (0x0004e5e3) compass_pane_t5

0x72ae,	// (0x0004e5f3) compass_pane_t6

0x72bc,	// (0x0004e601) compass_pane_t7

0xddf0,	// (0x00055135) navi_pane_cc_t1

0xdf45,	// (0x0005528a) aid_phob_thumbnail_center_pane

0x7a7f,	// (0x0004edc4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x000566a6) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x000566a6) list_cale_time_pane_t

0x4f3d,	// (0x0004c282) bg_popup_window_pane_cp02_ParamLimits

0x4f3d,	// (0x0004c282) bg_popup_window_pane_cp02

0xd9ce,	// (0x00054d13) heading_pane_cp01_ParamLimits

0xd9ce,	// (0x00054d13) heading_pane_cp01

0xd9da,	// (0x00054d1f) loc_req_pane_ParamLimits

0xd9da,	// (0x00054d1f) loc_req_pane

0xd9ea,	// (0x00054d2f) loc_type_pane_ParamLimits

0xd9ea,	// (0x00054d2f) loc_type_pane

0xd9fc,	// (0x00054d41) loc_type_pane_t1_ParamLimits

0xd9fc,	// (0x00054d41) loc_type_pane_t1

0xda0e,	// (0x00054d53) loc_type_pane_t2_ParamLimits

0xda0e,	// (0x00054d53) loc_type_pane_t2

0xda20,	// (0x00054d65) loc_type_pane_t3_ParamLimits

0xda20,	// (0x00054d65) loc_type_pane_t3

0x0002,

0xf368,	// (0x000566ad) loc_type_pane_t_ParamLimits

0xf368,	// (0x000566ad) loc_type_pane_t

0xda32,	// (0x00054d77) list_loc_req_pane

0xda3c,	// (0x00054d81) scroll_pane_cp012

0x6f50,	// (0x0004e295) list_single_loc_request_popup_menu_pane_ParamLimits

0x6f50,	// (0x0004e295) list_single_loc_request_popup_menu_pane

0xda47,	// (0x00054d8c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xda47,	// (0x00054d8c) list_single_loc_request_popup_menu_pane_g1

0xda53,	// (0x00054d98) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xda53,	// (0x00054d98) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x000566b4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x000566b4) list_single_loc_request_popup_menu_pane_g

0xda5f,	// (0x00054da4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xda5f,	// (0x00054da4) list_single_loc_request_popup_menu_pane_t1

0x6f62,	// (0x0004e2a7) bg_popup_window_pane_cp03_ParamLimits

0x6f62,	// (0x0004e2a7) bg_popup_window_pane_cp03

0x6f70,	// (0x0004e2b5) heading_loc_req_pane_ParamLimits

0x6f70,	// (0x0004e2b5) heading_loc_req_pane

0x6f7c,	// (0x0004e2c1) popup_dyc_status_message_window_g1_ParamLimits

0x6f7c,	// (0x0004e2c1) popup_dyc_status_message_window_g1

0x6f88,	// (0x0004e2cd) popup_dyc_status_message_window_t1_ParamLimits

0x6f88,	// (0x0004e2cd) popup_dyc_status_message_window_t1

0x6f9a,	// (0x0004e2df) popup_dyc_status_message_window_t2_ParamLimits

0x6f9a,	// (0x0004e2df) popup_dyc_status_message_window_t2

0x6fac,	// (0x0004e2f1) popup_dyc_status_message_window_t3_ParamLimits

0x6fac,	// (0x0004e2f1) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x000566b9) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x000566b9) popup_dyc_status_message_window_t

0x5308,	// (0x0004c64d) bg_heading_pane_cp01

0xda75,	// (0x00054dba) heading_loc_req_pane_g1

0xda7d,	// (0x00054dc2) heading_loc_req_pane_g2

0xda85,	// (0x00054dca) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x000566c0) heading_loc_req_pane_g

0xda8d,	// (0x00054dd2) heading_loc_req_pane_t1

0xda9c,	// (0x00054de1) bg_popup_sub_pane_cp01_ParamLimits

0xda9c,	// (0x00054de1) bg_popup_sub_pane_cp01

0xdaaa,	// (0x00054def) popup_cale_events_window_g1_ParamLimits

0xdaaa,	// (0x00054def) popup_cale_events_window_g1

0xdaca,	// (0x00054e0f) popup_cale_events_window_g2_ParamLimits

0xdaca,	// (0x00054e0f) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x000566f4) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x000566f4) popup_cale_events_window_g

0xdaea,	// (0x00054e2f) popup_cale_events_window_t1_ParamLimits

0xdaea,	// (0x00054e2f) popup_cale_events_window_t1

0xdafc,	// (0x00054e41) popup_cale_events_window_t2_ParamLimits

0xdafc,	// (0x00054e41) popup_cale_events_window_t2

0xdb3a,	// (0x00054e7f) popup_cale_events_window_t3_ParamLimits

0xdb3a,	// (0x00054e7f) popup_cale_events_window_t3

0xdb74,	// (0x00054eb9) popup_cale_events_window_t4_ParamLimits

0xdb74,	// (0x00054eb9) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x000566f9) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x000566f9) popup_cale_events_window_t

0x7030,	// (0x0004e375) call_type_pane

0xdbaa,	// (0x00054eef) popup_call_status_window_g1

0x703c,	// (0x0004e381) popup_call_status_window_g2

0x7048,	// (0x0004e38d) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00056702) popup_call_status_window_g

0xdbb8,	// (0x00054efd) call_type_pane_g1

0xdbc1,	// (0x00054f06) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00056709) call_type_pane_g

0x5308,	// (0x0004c64d) bg_popup_sub_pane_cp02

0xdbca,	// (0x00054f0f) listscroll_popup_wml_pane

0xdbd2,	// (0x00054f17) list_wml_pane

0xdbdc,	// (0x00054f21) scroll_pane_cp013

0xdbe7,	// (0x00054f2c) list_single_graphic_popup_wml_pane_ParamLimits

0xdbe7,	// (0x00054f2c) list_single_graphic_popup_wml_pane

0xd463,	// (0x000547a8) list_single_graphic_popup_wml_pane_g1

0xdbfb,	// (0x00054f40) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0005670e) list_single_graphic_popup_wml_pane_g

0xdc03,	// (0x00054f48) list_single_graphic_popup_wml_pane_t1

0xdc19,	// (0x00054f5e) aid_call_pane

0xd2f7,	// (0x0005463c) popup_clock_analogue_window_g1

0xd2f7,	// (0x0005463c) popup_clock_analogue_window_g2

0x7054,	// (0x0004e399) popup_clock_analogue_window_g3

0x7054,	// (0x0004e399) popup_clock_analogue_window_g4

0xd463,	// (0x000547a8) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00056713) popup_clock_analogue_window_g

0x705c,	// (0x0004e3a1) popup_clock_analogue_window_t1

0x706a,	// (0x0004e3af) clock_digital_number_pane_ParamLimits

0x706a,	// (0x0004e3af) clock_digital_number_pane

0x7076,	// (0x0004e3bb) clock_digital_number_pane_cp02_ParamLimits

0x7076,	// (0x0004e3bb) clock_digital_number_pane_cp02

0x7082,	// (0x0004e3c7) clock_digital_number_pane_cp03_ParamLimits

0x7082,	// (0x0004e3c7) clock_digital_number_pane_cp03

0x708e,	// (0x0004e3d3) clock_digital_number_pane_cp04_ParamLimits

0x708e,	// (0x0004e3d3) clock_digital_number_pane_cp04

0x709a,	// (0x0004e3df) clock_digital_separator_pane_ParamLimits

0x709a,	// (0x0004e3df) clock_digital_separator_pane

0x70a6,	// (0x0004e3eb) popup_clock_digital_window_t1

0xd463,	// (0x000547a8) clock_digital_number_pane_g1

0xd463,	// (0x000547a8) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00056681) clock_digital_number_pane_g

0xd463,	// (0x000547a8) clock_digital_separator_pane_g1

0xd463,	// (0x000547a8) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00056681) clock_digital_separator_pane_g

0x5308,	// (0x0004c64d) bg_popup_window_pane_cp04

0xdc21,	// (0x00054f66) heading_pane_cp03

0xdc29,	// (0x00054f6e) listscroll_popup_gms_pane

0xdc31,	// (0x00054f76) grid_large_graphic_popup_pane

0xdc3b,	// (0x00054f80) listscroll_popup_gms_pane_g1

0xdc43,	// (0x00054f88) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0005671e) listscroll_popup_gms_pane_g

0xd776,	// (0x00054abb) scroll_pane_cp014

0xdc4b,	// (0x00054f90) cell_large_graphic_popup_pane_ParamLimits

0xdc4b,	// (0x00054f90) cell_large_graphic_popup_pane

0xdc63,	// (0x00054fa8) cell_large_graphic_popup_pane_g1_ParamLimits

0xdc63,	// (0x00054fa8) cell_large_graphic_popup_pane_g1

0xdc6f,	// (0x00054fb4) cell_large_graphic_popup_pane_g2_ParamLimits

0xdc6f,	// (0x00054fb4) cell_large_graphic_popup_pane_g2

0xdc7b,	// (0x00054fc0) cell_large_graphic_popup_pane_g3_ParamLimits

0xdc7b,	// (0x00054fc0) cell_large_graphic_popup_pane_g3

0xdc88,	// (0x00054fcd) cell_large_graphic_popup_pane_g4_ParamLimits

0xdc88,	// (0x00054fcd) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00056723) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00056723) cell_large_graphic_popup_pane_g

0xdc98,	// (0x00054fdd) grid_highlight_pane_cp010

0xd463,	// (0x000547a8) bg_popup_call_pane_g1

0xdca2,	// (0x00054fe7) list_single_graphic_popup_conf_pane_ParamLimits

0xdca2,	// (0x00054fe7) list_single_graphic_popup_conf_pane

0xdcb4,	// (0x00054ff9) list_highlight_pane_cp01

0xdcbd,	// (0x00055002) list_single_graphic_popup_conf_pane_g1

0xdcc5,	// (0x0005500a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0005672c) list_single_graphic_popup_conf_pane_g

0xdccd,	// (0x00055012) list_single_graphic_popup_conf_pane_t1

0xdcdb,	// (0x00055020) linegrid_cams_pane_g1

0x70c3,	// (0x0004e408) linegrid_cams_pane_g2

0xd51b,	// (0x00054860) linegrid_cams_pane_g3

0xdce4,	// (0x00055029) linegrid_cams_pane_g4

0x70cc,	// (0x0004e411) linegrid_cams_pane_g5

0x70d5,	// (0x0004e41a) linegrid_cams_pane_g6

0xd5a1,	// (0x000548e6) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00056731) linegrid_cams_pane_g

0xdced,	// (0x00055032) popup_clock_analogue_window

0xdced,	// (0x00055032) popup_clock_digital_window

0x5308,	// (0x0004c64d) popup_phob_thumbnail_window

0xd463,	// (0x000547a8) call_video_uplink_pane_g1

0xdcf6,	// (0x0005503b) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00056740) call_video_uplink_pane_g

0xd56e,	// (0x000548b3) video_uplink_pane

0xdcfe,	// (0x00055043) mce_image_pane_g1

0x70de,	// (0x0004e423) mce_image_pane_g2

0x70e6,	// (0x0004e42b) mce_image_pane_g3

0x70ee,	// (0x0004e433) mce_image_pane_g4

0x70f6,	// (0x0004e43b) mce_image_pane_g5

0x0004,

0xf400,	// (0x00056745) mce_image_pane_g

0xdd08,	// (0x0005504d) control_top_pane_stacon_cp01_ParamLimits

0xdd08,	// (0x0005504d) control_top_pane_stacon_cp01

0xdd1c,	// (0x00055061) uni_indicator_pane_stacon_cp01_ParamLimits

0xdd1c,	// (0x00055061) uni_indicator_pane_stacon_cp01

0xdd2d,	// (0x00055072) bg_popup_sub_pane_cp03

0x70fe,	// (0x0004e443) chi_dic_find_pane

0x7106,	// (0x0004e44b) listscroll_chi_dic_pane

0x710f,	// (0x0004e454) main_pane_chidic_g1

0x7122,	// (0x0004e467) chi_dic_find_pane_t1

0xdd37,	// (0x0005507c) find_chidic_pane

0xdd40,	// (0x00055085) chi_dic_list_pane_ParamLimits

0xdd40,	// (0x00055085) chi_dic_list_pane

0xdd51,	// (0x00055096) scroll_pane_cp020

0x7130,	// (0x0004e475) find_chidic_pane_t1

0x5308,	// (0x0004c64d) input_focus_pane_cp06

0x713f,	// (0x0004e484) list_chi_dic_pane_ParamLimits

0x713f,	// (0x0004e484) list_chi_dic_pane

0xdd59,	// (0x0005509e) list_chi_dic_pane_t1_ParamLimits

0xdd59,	// (0x0005509e) list_chi_dic_pane_t1

0x5308,	// (0x0004c64d) list_highlight_pane_cp020

0xdd6c,	// (0x000550b1) bg_cale_heading_pane_g1

0x7160,	// (0x0004e4a5) bg_cale_heading_pane_g2

0x7168,	// (0x0004e4ad) bg_cale_heading_pane_g3

0x7170,	// (0x0004e4b5) bg_cale_heading_pane_g4

0x717a,	// (0x0004e4bf) bg_cale_heading_pane_g5

0x7184,	// (0x0004e4c9) bg_cale_heading_pane_g6

0x718c,	// (0x0004e4d1) bg_cale_heading_pane_g7

0x7194,	// (0x0004e4d9) bg_cale_heading_pane_g8

0x719e,	// (0x0004e4e3) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00056750) bg_cale_heading_pane_g

0xdd6c,	// (0x000550b1) bg_cale_side_pane_g1

0x71a8,	// (0x0004e4ed) bg_cale_side_pane_g2

0x71b0,	// (0x0004e4f5) bg_cale_side_pane_g3

0x71b8,	// (0x0004e4fd) bg_cale_side_pane_g4

0x71c0,	// (0x0004e505) bg_cale_side_pane_g5

0x71c8,	// (0x0004e50d) bg_cale_side_pane_g6

0x71d0,	// (0x0004e515) bg_cale_side_pane_g7

0x71d8,	// (0x0004e51d) bg_cale_side_pane_g8

0x71e0,	// (0x0004e525) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00056763) bg_cale_side_pane_g

0x71e8,	// (0x0004e52d) popup_call_status_window_ParamLimits

0x71e8,	// (0x0004e52d) popup_call_status_window

0xdd74,	// (0x000550b9) stacon_top_pane

0xdd7c,	// (0x000550c1) status_pane_ParamLimits

0xdd7c,	// (0x000550c1) status_pane

0xdd91,	// (0x000550d6) status_small_pane

0xdd99,	// (0x000550de) control_pane

0x5308,	// (0x0004c64d) stacon_bottom_pane

0xdda1,	// (0x000550e6) list_single_mce_smart_pane_t1_ParamLimits

0xdda1,	// (0x000550e6) list_single_mce_smart_pane_t1

0xddb4,	// (0x000550f9) list_single_mce_smart_pane_t2_ParamLimits

0xddb4,	// (0x000550f9) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00056776) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00056776) list_single_mce_smart_pane_t

0x71f4,	// (0x0004e539) compass_pane

0x7200,	// (0x0004e545) main_location2_pane_t1

0x7214,	// (0x0004e559) main_location2_pane_t2

0x7228,	// (0x0004e56d) main_location2_pane_t3

0x0003,

0xf436,	// (0x0005677b) main_location2_pane_t

0xddd3,	// (0x00055118) compass_pane_g1_ParamLimits

0xddd3,	// (0x00055118) compass_pane_g1

0x7272,	// (0x0004e5b7) compass_pane_t1

0x7281,	// (0x0004e5c6) compass_pane_t2

0x0005,

0xf43f,	// (0x00056784) compass_pane_t

0x72cc,	// (0x0004e611) text_secondary_cp61

0xdde7,	// (0x0005512c) navi_pane_cams_g5

0xde0a,	// (0x0005514f) navi_pane_im_t1

0xde18,	// (0x0005515d) navi_pane_mp_g1_ParamLimits

0xde18,	// (0x0005515d) navi_pane_mp_g1

0xde2c,	// (0x00055171) navi_pane_mp_g2_ParamLimits

0xde2c,	// (0x00055171) navi_pane_mp_g2

0xde38,	// (0x0005517d) navi_pane_mp_g3_ParamLimits

0xde38,	// (0x0005517d) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00056798) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00056798) navi_pane_mp_g

0xde44,	// (0x00055189) navi_pane_mp_t1

0xde52,	// (0x00055197) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0005679f) navi_pane_mp_t

0xde8e,	// (0x000551d3) navi_pane_vt_g1

0xde44,	// (0x00055189) navi_pane_vt_t1

0xde96,	// (0x000551db) navi_slider_pane

0xde9e,	// (0x000551e3) zooming_pane

0xdea6,	// (0x000551eb) navi_slider_pane_g1

0x73e3,	// (0x0004e728) navi_slider_pane_g2

0x0006,

0xf461,	// (0x000567a6) navi_slider_pane_g

0xdeca,	// (0x0005520f) aid_levels_zoom

0xded2,	// (0x00055217) zooming_pane_g1

0xdeda,	// (0x0005521f) zooming_pane_g2

0xdeda,	// (0x0005521f) zooming_pane_g3

0x0002,

0xf470,	// (0x000567b5) zooming_pane_g

0xdee2,	// (0x00055227) level_10_zoom

0xdeeb,	// (0x00055230) level_11_zoom

0xdef4,	// (0x00055239) level_1_zoom

0xdefd,	// (0x00055242) level_2_zoom

0xdf06,	// (0x0005524b) level_3_zoom

0xdf0f,	// (0x00055254) level_4_zoom

0xdf18,	// (0x0005525d) level_5_zoom

0xdf21,	// (0x00055266) level_6_zoom

0xdf2a,	// (0x0005526f) level_7_zoom

0xdf33,	// (0x00055278) level_8_zoom

0xdf3c,	// (0x00055281) level_9_zoom

0xdf4d,	// (0x00055292) popup_phob_thumbnail_window_g1

0xdf55,	// (0x0005529a) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x000567bc) popup_phob_thumbnail_window_g

0x0e12,	// (0x00048157) level_1_location

0x0e1a,	// (0x0004815f) level_2_location

0x0e22,	// (0x00048167) level_3_location

0x0e2a,	// (0x0004816f) level_4_location

0xde9e,	// (0x000551e3) level_5_location

0x73f5,	// (0x0004e73a) mce_icon_pane_g1

0x73fd,	// (0x0004e742) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x000567c1) mce_icon_pane_g

0x7405,	// (0x0004e74a) main_mup_pane_g1_ParamLimits

0x7405,	// (0x0004e74a) main_mup_pane_g1

0x741d,	// (0x0004e762) main_mup_pane_g2_ParamLimits

0x741d,	// (0x0004e762) main_mup_pane_g2

0x7439,	// (0x0004e77e) main_mup_pane_g3_ParamLimits

0x7439,	// (0x0004e77e) main_mup_pane_g3

0x7455,	// (0x0004e79a) main_mup_pane_g4_ParamLimits

0x7455,	// (0x0004e79a) main_mup_pane_g4

0x7471,	// (0x0004e7b6) main_mup_pane_g5_ParamLimits

0x7471,	// (0x0004e7b6) main_mup_pane_g5

0x7492,	// (0x0004e7d7) main_mup_pane_g6_ParamLimits

0x7492,	// (0x0004e7d7) main_mup_pane_g6

0x74ae,	// (0x0004e7f3) main_mup_pane_g7_ParamLimits

0x74ae,	// (0x0004e7f3) main_mup_pane_g7

0x74ca,	// (0x0004e80f) main_mup_pane_g8_ParamLimits

0x74ca,	// (0x0004e80f) main_mup_pane_g8

0x74e6,	// (0x0004e82b) main_mup_pane_g9_ParamLimits

0x74e6,	// (0x0004e82b) main_mup_pane_g9

0x7505,	// (0x0004e84a) main_mup_pane_g10_ParamLimits

0x7505,	// (0x0004e84a) main_mup_pane_g10

0x7524,	// (0x0004e869) main_mup_pane_g11_ParamLimits

0x7524,	// (0x0004e869) main_mup_pane_g11

0x753c,	// (0x0004e881) main_mup_pane_g12_ParamLimits

0x753c,	// (0x0004e881) main_mup_pane_g12

0x754a,	// (0x0004e88f) main_mup_pane_g13_ParamLimits

0x754a,	// (0x0004e88f) main_mup_pane_g13

0x000c,

0xf481,	// (0x000567c6) main_mup_pane_g_ParamLimits

0xf481,	// (0x000567c6) main_mup_pane_g

0x7560,	// (0x0004e8a5) main_mup_pane_t1_ParamLimits

0x7560,	// (0x0004e8a5) main_mup_pane_t1

0x757d,	// (0x0004e8c2) main_mup_pane_t2_ParamLimits

0x757d,	// (0x0004e8c2) main_mup_pane_t2

0x7597,	// (0x0004e8dc) main_mup_pane_t3_ParamLimits

0x7597,	// (0x0004e8dc) main_mup_pane_t3

0x75b1,	// (0x0004e8f6) main_mup_pane_t4_ParamLimits

0x75b1,	// (0x0004e8f6) main_mup_pane_t4

0x75c3,	// (0x0004e908) main_mup_pane_t5_ParamLimits

0x75c3,	// (0x0004e908) main_mup_pane_t5

0x75d5,	// (0x0004e91a) main_mup_pane_t6_ParamLimits

0x75d5,	// (0x0004e91a) main_mup_pane_t6

0x0005,

0xf49c,	// (0x000567e1) main_mup_pane_t_ParamLimits

0xf49c,	// (0x000567e1) main_mup_pane_t

0x75eb,	// (0x0004e930) mup_progress_pane_ParamLimits

0x75eb,	// (0x0004e930) mup_progress_pane

0x75f7,	// (0x0004e93c) mup_visualizer_pane_ParamLimits

0x75f7,	// (0x0004e93c) mup_visualizer_pane

0x7635,	// (0x0004e97a) mup_volume_pane_ParamLimits

0x7635,	// (0x0004e97a) mup_volume_pane

0xdbaa,	// (0x00054eef) mup_visualizer_pane_g1_ParamLimits

0xdbaa,	// (0x00054eef) mup_visualizer_pane_g1

0xdbaa,	// (0x00054eef) mup_visualizer_pane_g2_ParamLimits

0xdbaa,	// (0x00054eef) mup_visualizer_pane_g2

0xddd3,	// (0x00055118) mup_visualizer_pane_g3_ParamLimits

0xddd3,	// (0x00055118) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x000567ee) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x000567ee) mup_visualizer_pane_g

0xd463,	// (0x000547a8) mup_volume_pane_g1

0xdf65,	// (0x000552aa) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x000567f5) mup_volume_pane_g

0xd463,	// (0x000547a8) mup_progress_pane_g1

0xdf6e,	// (0x000552b3) mup_progress_pane_g2

0xdf77,	// (0x000552bc) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x000567fa) mup_progress_pane_g

0x5308,	// (0x0004c64d) bg_popup_window_pane_cp05

0xdf80,	// (0x000552c5) heading_pane_cp02_ParamLimits

0xdf80,	// (0x000552c5) heading_pane_cp02

0xdf9a,	// (0x000552df) list_popup_blid_pane

0xdfa2,	// (0x000552e7) list_blid_sat_info_pane_ParamLimits

0xdfa2,	// (0x000552e7) list_blid_sat_info_pane

0xdfb5,	// (0x000552fa) list_blid_sat_info_pane_g1

0xdfbd,	// (0x00055302) list_blid_sat_info_pane_t1

0x7740,	// (0x0004ea85) mup_equalizer_pane_ParamLimits

0x7740,	// (0x0004ea85) mup_equalizer_pane

0x7761,	// (0x0004eaa6) mup_equalizer_pane_cp1_ParamLimits

0x7761,	// (0x0004eaa6) mup_equalizer_pane_cp1

0x7782,	// (0x0004eac7) mup_equalizer_pane_cp2_ParamLimits

0x7782,	// (0x0004eac7) mup_equalizer_pane_cp2

0x77a3,	// (0x0004eae8) mup_equalizer_pane_cp3_ParamLimits

0x77a3,	// (0x0004eae8) mup_equalizer_pane_cp3

0x77c4,	// (0x0004eb09) mup_equalizer_pane_cp4_ParamLimits

0x77c4,	// (0x0004eb09) mup_equalizer_pane_cp4

0x77e5,	// (0x0004eb2a) mup_equalizer_pane_cp5

0x77fb,	// (0x0004eb40) mup_equalizer_pane_cp6

0x7813,	// (0x0004eb58) mup_equalizer_pane_cp7

0x0d30,	// (0x00048075) bg_popup_call_poc_act_pane_g9

0x0d38,	// (0x0004807d) bg_popup_call_poc_act_pane_g10

0x0d40,	// (0x00048085) bg_popup_call_poc_act_pane_g11

0x000a,

0xd2ff,	// (0x00054644) mup_scale_pane

0xd463,	// (0x000547a8) mup_scale_pane_g1

0xdfcb,	// (0x00055310) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00056816) mup_scale_pane_g

0xdfef,	// (0x00055334) msg_data_pane

0xdff7,	// (0x0005533c) scroll_pane_cp017

0x783d,	// (0x0004eb82) bg_list_pane_cp04_ParamLimits

0x783d,	// (0x0004eb82) bg_list_pane_cp04

0xdfff,	// (0x00055344) msg_data_pane_g1

0x785d,	// (0x0004eba2) msg_data_pane_g2

0x70e6,	// (0x0004e42b) msg_data_pane_g3

0x7865,	// (0x0004ebaa) msg_data_pane_g4

0x786d,	// (0x0004ebb2) msg_data_pane_g5

0x7875,	// (0x0004ebba) msg_data_pane_g6

0x787d,	// (0x0004ebc2) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00056825) msg_data_pane_g

0x7885,	// (0x0004ebca) msg_text_pane_ParamLimits

0x7885,	// (0x0004ebca) msg_text_pane

0x78d8,	// (0x0004ec1d) qrid_highlight_pane_cp011_ParamLimits

0x78d8,	// (0x0004ec1d) qrid_highlight_pane_cp011

0x5308,	// (0x0004c64d) msg_body_pane

0x5308,	// (0x0004c64d) msg_header_pane

0xe010,	// (0x00055355) input_focus_pane_cp07

0x7902,	// (0x0004ec47) msg_header_pane_t1_ParamLimits

0x7902,	// (0x0004ec47) msg_header_pane_t1

0x7916,	// (0x0004ec5b) msg_header_pane_t2_ParamLimits

0x7916,	// (0x0004ec5b) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00056839) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00056839) msg_header_pane_t

0xe025,	// (0x0005536a) msg_body_pane_g1

0x7928,	// (0x0004ec6d) msg_body_pane_t1_ParamLimits

0x7928,	// (0x0004ec6d) msg_body_pane_t1

0x7959,	// (0x0004ec9e) msg_body_pane_t2_ParamLimits

0x7959,	// (0x0004ec9e) msg_body_pane_t2

0x796b,	// (0x0004ecb0) msg_body_pane_t3_ParamLimits

0x796b,	// (0x0004ecb0) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0005683e) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0005683e) msg_body_pane_t

0x79cf,	// (0x0004ed14) main_viewer_pane_g1_ParamLimits

0x79cf,	// (0x0004ed14) main_viewer_pane_g1

0x79db,	// (0x0004ed20) main_viewer_pane_g2_ParamLimits

0x79db,	// (0x0004ed20) main_viewer_pane_g2

0x79e7,	// (0x0004ed2c) main_viewer_pane_g3_ParamLimits

0x79e7,	// (0x0004ed2c) main_viewer_pane_g3

0x79f8,	// (0x0004ed3d) main_viewer_pane_g4_ParamLimits

0x79f8,	// (0x0004ed3d) main_viewer_pane_g4

0x7a09,	// (0x0004ed4e) main_viewer_pane_g5_ParamLimits

0x7a09,	// (0x0004ed4e) main_viewer_pane_g5

0x7a09,	// (0x0004ed4e) main_viewer_pane_g7_ParamLimits

0x7a09,	// (0x0004ed4e) main_viewer_pane_g7

0x7a1b,	// (0x0004ed60) main_viewer_pane_g8_ParamLimits

0x7a1b,	// (0x0004ed60) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0005684e) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0005684e) main_viewer_pane_g

0xe02d,	// (0x00055372) viewer_content_pane_ParamLimits

0xe02d,	// (0x00055372) viewer_content_pane

0x7a53,	// (0x0004ed98) main_postcard_pane_g1_ParamLimits

0x7a53,	// (0x0004ed98) main_postcard_pane_g1

0x7a61,	// (0x0004eda6) main_postcard_pane_g2_ParamLimits

0x7a61,	// (0x0004eda6) main_postcard_pane_g2

0x7a6f,	// (0x0004edb4) main_postcard_pane_g3_ParamLimits

0x7a6f,	// (0x0004edb4) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0005685f) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0005685f) main_postcard_pane_g

0x7a7f,	// (0x0004edc4) main_postcard_pane_g4

0x0f32,	// (0x00048277) smil_status_volume_pane_g2

0x7aab,	// (0x0004edf0) postcard_pane_ParamLimits

0x7aab,	// (0x0004edf0) postcard_pane

0xdbaa,	// (0x00054eef) postcard_pane_g1_ParamLimits

0xdbaa,	// (0x00054eef) postcard_pane_g1

0x7add,	// (0x0004ee22) postcard_pane_g2_ParamLimits

0x7add,	// (0x0004ee22) postcard_pane_g2

0x7ae9,	// (0x0004ee2e) postcard_pane_g3_ParamLimits

0x7ae9,	// (0x0004ee2e) postcard_pane_g3

0xe03b,	// (0x00055380) postcard_pane_g4_ParamLimits

0xe03b,	// (0x00055380) postcard_pane_g4

0x7af5,	// (0x0004ee3a) postcard_pane_g5_ParamLimits

0x7af5,	// (0x0004ee3a) postcard_pane_g5

0x7b01,	// (0x0004ee46) postcard_pane_g6_ParamLimits

0x7b01,	// (0x0004ee46) postcard_pane_g6

0xe049,	// (0x0005538e) postcard_pane_g7_ParamLimits

0xe049,	// (0x0005538e) postcard_pane_g7

0x0006,

0xf527,	// (0x0005686c) postcard_pane_g_ParamLimits

0xf527,	// (0x0005686c) postcard_pane_g

0x7b0d,	// (0x0004ee52) main_mp2_pane_g1_ParamLimits

0x7b0d,	// (0x0004ee52) main_mp2_pane_g1

0x7b19,	// (0x0004ee5e) main_mp2_pane_g2_ParamLimits

0x7b19,	// (0x0004ee5e) main_mp2_pane_g2

0x7b25,	// (0x0004ee6a) main_mp2_pane_g3_ParamLimits

0x7b25,	// (0x0004ee6a) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0005687b) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0005687b) main_mp2_pane_g

0x7b31,	// (0x0004ee76) main_mp2_pane_t1_ParamLimits

0x7b31,	// (0x0004ee76) main_mp2_pane_t1

0x7b48,	// (0x0004ee8d) main_mp2_pane_t2_ParamLimits

0x7b48,	// (0x0004ee8d) main_mp2_pane_t2

0x7b5a,	// (0x0004ee9f) main_mp2_pane_t3_ParamLimits

0x7b5a,	// (0x0004ee9f) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00056882) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00056882) main_mp2_pane_t

0xe057,	// (0x0005539c) pec_content_pane_ParamLimits

0xe057,	// (0x0005539c) pec_content_pane

0xd776,	// (0x00054abb) scroll_pane_cp015

0xe069,	// (0x000553ae) pec_attribute_pane_ParamLimits

0xe069,	// (0x000553ae) pec_attribute_pane

0x7b6c,	// (0x0004eeb1) pec_content_pane_g1_ParamLimits

0x7b6c,	// (0x0004eeb1) pec_content_pane_g1

0xe079,	// (0x000553be) pec_content_pane_t1_ParamLimits

0xe079,	// (0x000553be) pec_content_pane_t1

0xe08b,	// (0x000553d0) pec_content_pane_t2_ParamLimits

0xe08b,	// (0x000553d0) pec_content_pane_t2

0x0001,

0xf544,	// (0x00056889) pec_content_pane_t_ParamLimits

0xf544,	// (0x00056889) pec_content_pane_t

0x7b78,	// (0x0004eebd) list_single_graphic_pane_cp01_ParamLimits

0x7b78,	// (0x0004eebd) list_single_graphic_pane_cp01

0xd2ff,	// (0x00054644) bg_popup_sub_pane_cp04

0xe09d,	// (0x000553e2) popup_mup_playback_window_g1

0xe0a9,	// (0x000553ee) popup_mup_playback_window_t1

0xe0be,	// (0x00055403) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0005688e) popup_mup_playback_window_t

0xe0f5,	// (0x0005543a) main_image_pane_g1_ParamLimits

0xe0f5,	// (0x0005543a) main_image_pane_g1

0xe138,	// (0x0005547d) scroll_pane_cp018_ParamLimits

0xe138,	// (0x0005547d) scroll_pane_cp018

0xe150,	// (0x00055495) scroll_pane_cp016_ParamLimits

0xe150,	// (0x00055495) scroll_pane_cp016

0x7c1c,	// (0x0004ef61) smil2_image_pane_ParamLimits

0x7c1c,	// (0x0004ef61) smil2_image_pane

0x7c50,	// (0x0004ef95) smil2_root_pane_ParamLimits

0x7c50,	// (0x0004ef95) smil2_root_pane

0x7c7c,	// (0x0004efc1) smil2_text_pane_ParamLimits

0x7c7c,	// (0x0004efc1) smil2_text_pane

0x5308,	// (0x0004c64d) bg_list_pane_cp06

0xe18c,	// (0x000554d1) grid_radio_pane

0x5308,	// (0x0004c64d) bg_popup_window_pane_cp06

0xe194,	// (0x000554d9) main_fmradio_pane_t1

0xdc21,	// (0x00054f66) heading_pane_cp04

0xe1a2,	// (0x000554e7) main_fmradio_pane_t2

0x0d48,	// (0x0004808d) popup_cale_lunar_info_window_g1

0xe1b0,	// (0x000554f5) main_fmradio_pane_t3

0x0d50,	// (0x00048095) popup_cale_lunar_info_window_g2

0xe1be,	// (0x00055503) main_fmradio_pane_t4

0x0001,

0xe1cc,	// (0x00055511) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00056969) popup_cale_lunar_info_window_g

0xf55e,	// (0x000568a3) main_fmradio_pane_t

0xe1da,	// (0x0005551f) wait_bar_pane_cp03

0xe1e2,	// (0x00055527) cell_fmradio_pane_ParamLimits

0xe1e2,	// (0x00055527) cell_fmradio_pane

0xe049,	// (0x0005538e) cell_fmradio_pane_g1_ParamLimits

0xe049,	// (0x0005538e) cell_fmradio_pane_g1

0x5308,	// (0x0004c64d) grid_highlight_pane_cp011

0xe1f5,	// (0x0005553a) poc_content_pane_ParamLimits

0xe1f5,	// (0x0005553a) poc_content_pane

0xe207,	// (0x0005554c) scroll_pane_cp019

0x7cbc,	// (0x0004f001) popup_call_poc_act_window_ParamLimits

0x7cbc,	// (0x0004f001) popup_call_poc_act_window

0x7cc9,	// (0x0004f00e) popup_call_poc_inact_window_ParamLimits

0x7cc9,	// (0x0004f00e) popup_call_poc_inact_window

0xf5fb,	// (0x00056940) bg_popup_call_poc_act_pane_g

0x0cc0,	// (0x00048005) bg_popup_call_poc_inact_pane_g1

0x0cc8,	// (0x0004800d) bg_popup_call_poc_inact_pane_g2

0xe20f,	// (0x00055554) popup_call_poc_act_window_g2

0x0cd0,	// (0x00048015) bg_popup_call_poc_inact_pane_g3

0x0cd8,	// (0x0004801d) bg_popup_call_poc_inact_pane_g4

0x0ce0,	// (0x00048025) bg_popup_call_poc_inact_pane_g5

0xe217,	// (0x0005555c) popup_call_poc_act_window_t1_ParamLimits

0xe217,	// (0x0005555c) popup_call_poc_act_window_t1

0xe23f,	// (0x00055584) popup_call_poc_act_window_t2_ParamLimits

0xe23f,	// (0x00055584) popup_call_poc_act_window_t2

0xe267,	// (0x000555ac) popup_call_poc_act_window_t3_ParamLimits

0xe267,	// (0x000555ac) popup_call_poc_act_window_t3

0xe28f,	// (0x000555d4) popup_call_poc_act_window_t4_ParamLimits

0xe28f,	// (0x000555d4) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x000568ae) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x000568ae) popup_call_poc_act_window_t

0x0ce8,	// (0x0004802d) bg_popup_call_poc_inact_pane_g6

0x0cf0,	// (0x00048035) bg_popup_call_poc_inact_pane_g7

0x0cf8,	// (0x0004803d) bg_popup_call_poc_inact_pane_g8

0xe2a1,	// (0x000555e6) popup_call_poc_inact_window_g2

0x0d00,	// (0x00048045) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0005692d) bg_popup_call_poc_inact_pane_g

0xe2a9,	// (0x000555ee) popup_call_poc_inact_window_t1_ParamLimits

0xe2a9,	// (0x000555ee) popup_call_poc_inact_window_t1

0xe2be,	// (0x00055603) popup_call_poc_inact_window_t2_ParamLimits

0xe2be,	// (0x00055603) popup_call_poc_inact_window_t2

0xe2d3,	// (0x00055618) popup_call_poc_inact_window_t3_ParamLimits

0xe2d3,	// (0x00055618) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x000568b7) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x000568b7) popup_call_poc_inact_window_t

0x0eb8,	// (0x000481fd) context_pane_ParamLimits

0x82b8,	// (0x0004f5fd) signal_pane_ParamLimits

0xde9e,	// (0x000551e3) main_call2_pane

0x0ea6,	// (0x000481eb) popup_phob_thumbnail2_window_ParamLimits

0x0ea6,	// (0x000481eb) popup_phob_thumbnail2_window

0x797d,	// (0x0004ecc2) aid_hotspot_pointer_arrow_pane

0x7985,	// (0x0004ecca) aid_hotspot_pointer_hand_pane

0x7ff6,	// (0x0004f33b) phob_pre_status_pane_g5

0x5de3,	// (0x0004d128) cams_zoom_pane_ParamLimits

0x5def,	// (0x0004d134) image_vga_pane_ParamLimits

0x5dfe,	// (0x0004d143) main_camera_pane_g1_ParamLimits

0x5e0c,	// (0x0004d151) main_camera_pane_g2_ParamLimits

0x5e1a,	// (0x0004d15f) main_camera_pane_g3_ParamLimits

0x5e26,	// (0x0004d16b) main_camera_pane_g4_ParamLimits

0x5e32,	// (0x0004d177) main_camera_pane_g5_ParamLimits

0x5e3e,	// (0x0004d183) main_camera_pane_g6_ParamLimits

0x5e4a,	// (0x0004d18f) main_camera_pane_g7_ParamLimits

0xf271,	// (0x000565b6) main_camera_pane_g_ParamLimits

0x5e56,	// (0x0004d19b) main_camera_pane_t1_ParamLimits

0x5e68,	// (0x0004d1ad) main_camera_pane_t2_ParamLimits

0xf282,	// (0x000565c7) main_camera_pane_t_ParamLimits

0xd2ff,	// (0x00054644) bg_popup_preview_window_pane_cp01_ParamLimits

0xd2ff,	// (0x00054644) bg_popup_preview_window_pane_cp01

0xe2e8,	// (0x0005562d) popup_phob_thumbnail2_window_g1_ParamLimits

0xe2e8,	// (0x0005562d) popup_phob_thumbnail2_window_g1

0x5308,	// (0x0004c64d) call2_cli_visual_pane

0x7ce5,	// (0x0004f02a) popup_call2_audio_conf_window_ParamLimits

0x7ce5,	// (0x0004f02a) popup_call2_audio_conf_window

0x7cfa,	// (0x0004f03f) popup_call2_audio_first_window_ParamLimits

0x7cfa,	// (0x0004f03f) popup_call2_audio_first_window

0x7d98,	// (0x0004f0dd) popup_call2_audio_in_window_ParamLimits

0x7d98,	// (0x0004f0dd) popup_call2_audio_in_window

0x7dda,	// (0x0004f11f) popup_call2_audio_out_window_ParamLimits

0x7dda,	// (0x0004f11f) popup_call2_audio_out_window

0x7e3c,	// (0x0004f181) popup_call2_audio_second_window_ParamLimits

0x7e3c,	// (0x0004f181) popup_call2_audio_second_window

0x7e9a,	// (0x0004f1df) popup_call2_audio_wait_window_ParamLimits

0x7e9a,	// (0x0004f1df) popup_call2_audio_wait_window

0x5308,	// (0x0004c64d) bg_popup_call2_act_pane_cp03

0xd2e1,	// (0x00054626) list_conf_pane_cp

0xe2f4,	// (0x00055639) popup_call2_audio_conf_window_t1

0xe302,	// (0x00055647) list_single_graphic_popup_conf2_pane_ParamLimits

0xe302,	// (0x00055647) list_single_graphic_popup_conf2_pane

0xdcb4,	// (0x00054ff9) list_highlight_pane_cp04

0xe315,	// (0x0005565a) list_single_graphic_popup_conf2_pane_g1

0xdcc5,	// (0x0005500a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x000568be) list_single_graphic_popup_conf2_pane_g

0xe31f,	// (0x00055664) list_single_graphic_popup_conf2_pane_t1

0xe32d,	// (0x00055672) bg_popup_call2_act_pane_cp01_ParamLimits

0xe32d,	// (0x00055672) bg_popup_call2_act_pane_cp01

0xe3b7,	// (0x000556fc) call_type_pane_cp05_ParamLimits

0xe3b7,	// (0x000556fc) call_type_pane_cp05

0xe40b,	// (0x00055750) popup_call2_audio_second_window_g1_ParamLimits

0xe40b,	// (0x00055750) popup_call2_audio_second_window_g1

0xe45f,	// (0x000557a4) popup_call2_audio_second_window_g2_ParamLimits

0xe45f,	// (0x000557a4) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x000568c3) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x000568c3) popup_call2_audio_second_window_g

0xe4c4,	// (0x00055809) popup_call2_audio_second_window_t1_ParamLimits

0xe4c4,	// (0x00055809) popup_call2_audio_second_window_t1

0xe57f,	// (0x000558c4) popup_call2_audio_second_window_t2_ParamLimits

0xe57f,	// (0x000558c4) popup_call2_audio_second_window_t2

0xe5d2,	// (0x00055917) popup_call2_audio_second_window_t3_ParamLimits

0xe5d2,	// (0x00055917) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x000568ca) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x000568ca) popup_call2_audio_second_window_t

0x5308,	// (0x0004c64d) bg_popup_call2_in_pane_cp02

0x5312,	// (0x0004c657) call_type_pane_cp04

0x531a,	// (0x0004c65f) popup_call2_audio_wait_window_g1

0x5322,	// (0x0004c667) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x000564a3) popup_call2_audio_wait_window_g

0x532a,	// (0x0004c66f) popup_call2_audio_wait_window_t3

0xe6c5,	// (0x00055a0a) bg_popup_call2_act_pane_ParamLimits

0xe6c5,	// (0x00055a0a) bg_popup_call2_act_pane

0xe785,	// (0x00055aca) call_type_pane_cp03_ParamLimits

0xe785,	// (0x00055aca) call_type_pane_cp03

0xe7e9,	// (0x00055b2e) popup_call2_audio_first_window_g1_ParamLimits

0xe7e9,	// (0x00055b2e) popup_call2_audio_first_window_g1

0xe859,	// (0x00055b9e) popup_call2_audio_first_window_g2_ParamLimits

0xe859,	// (0x00055b9e) popup_call2_audio_first_window_g2

0xdbaa,	// (0x00054eef) popup_call2_audio_first_window_g3_ParamLimits

0xdbaa,	// (0x00054eef) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x000568d3) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x000568d3) popup_call2_audio_first_window_g

0xe937,	// (0x00055c7c) popup_call2_audio_first_window_t1_ParamLimits

0xe937,	// (0x00055c7c) popup_call2_audio_first_window_t1

0xea3a,	// (0x00055d7f) popup_call2_audio_first_window_t4_ParamLimits

0xea3a,	// (0x00055d7f) popup_call2_audio_first_window_t4

0xeb1d,	// (0x00055e62) popup_call2_audio_first_window_t5_ParamLimits

0xeb1d,	// (0x00055e62) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x000568de) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x000568de) popup_call2_audio_first_window_t

0xd2f7,	// (0x0005463c) bg_popup_call2_act_pane_g1

0x0d58,	// (0x0004809d) popup_cale_lunar_info_window_t1

0x0d66,	// (0x000480ab) popup_cale_lunar_info_window_t2

0x0d74,	// (0x000480b9) popup_cale_lunar_info_window_t3

0x5308,	// (0x0004c64d) bg_popup_call2_bubble_pane

0xec1e,	// (0x00055f63) bg_popup_call2_in_pane_cp01_ParamLimits

0xec1e,	// (0x00055f63) bg_popup_call2_in_pane_cp01

0x4fc0,	// (0x0004c305) call_type_pane_cp02

0xec66,	// (0x00055fab) popup_call2_audio_out_window_g1_ParamLimits

0xec66,	// (0x00055fab) popup_call2_audio_out_window_g1

0xec92,	// (0x00055fd7) popup_call2_audio_out_window_g2_ParamLimits

0xec92,	// (0x00055fd7) popup_call2_audio_out_window_g2

0xecba,	// (0x00055fff) popup_call2_audio_out_window_g3_ParamLimits

0xecba,	// (0x00055fff) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x000568e7) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x000568e7) popup_call2_audio_out_window_g

0xecf5,	// (0x0005603a) popup_call2_audio_out_window_t1_ParamLimits

0xecf5,	// (0x0005603a) popup_call2_audio_out_window_t1

0xed54,	// (0x00056099) popup_call2_audio_out_window_t2_ParamLimits

0xed54,	// (0x00056099) popup_call2_audio_out_window_t2

0xeda8,	// (0x000560ed) popup_call2_audio_out_window_t3_ParamLimits

0xeda8,	// (0x000560ed) popup_call2_audio_out_window_t3

0xedbe,	// (0x00056103) popup_call2_audio_out_window_t4_ParamLimits

0xedbe,	// (0x00056103) popup_call2_audio_out_window_t4

0xedd4,	// (0x00056119) popup_call2_audio_out_window_t5_ParamLimits

0xedd4,	// (0x00056119) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x000568f0) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x000568f0) popup_call2_audio_out_window_t

0xee38,	// (0x0005617d) bg_popup_call2_in_pane_ParamLimits

0xee38,	// (0x0005617d) bg_popup_call2_in_pane

0xee94,	// (0x000561d9) popup_call2_audio_in_window_g1_ParamLimits

0xee94,	// (0x000561d9) popup_call2_audio_in_window_g1

0xeecc,	// (0x00056211) popup_call2_audio_in_window_g2_ParamLimits

0xeecc,	// (0x00056211) popup_call2_audio_in_window_g2

0xef04,	// (0x00056249) popup_call2_audio_in_window_g3_ParamLimits

0xef04,	// (0x00056249) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x000568fd) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x000568fd) popup_call2_audio_in_window_g

0xef5c,	// (0x000562a1) popup_call2_audio_in_window_t1_ParamLimits

0xef5c,	// (0x000562a1) popup_call2_audio_in_window_t1

0xefdc,	// (0x00056321) popup_call2_audio_in_window_t2_ParamLimits

0xefdc,	// (0x00056321) popup_call2_audio_in_window_t2

0xf05c,	// (0x000563a1) popup_call2_audio_in_window_t3_ParamLimits

0xf05c,	// (0x000563a1) popup_call2_audio_in_window_t3

0xf076,	// (0x000563bb) popup_call2_audio_in_window_t4_ParamLimits

0xf076,	// (0x000563bb) popup_call2_audio_in_window_t4

0xf088,	// (0x000563cd) popup_call2_audio_in_window_t5_ParamLimits

0xf088,	// (0x000563cd) popup_call2_audio_in_window_t5

0xf09d,	// (0x000563e2) popup_call2_audio_in_window_t6_ParamLimits

0xf09d,	// (0x000563e2) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00056906) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00056906) popup_call2_audio_in_window_t

0xd2f7,	// (0x0005463c) bg_popup_call2_in_pane_g1

0x0d82,	// (0x000480c7) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0005696e) popup_cale_lunar_info_window_t

0xd2ff,	// (0x00054644) bg_popup_call2_rect_pane_ParamLimits

0xd2ff,	// (0x00054644) bg_popup_call2_rect_pane

0x5308,	// (0x0004c64d) call2_cli_visual_graphic_pane

0x5308,	// (0x0004c64d) call2_cli_visual_text_pane

0x8368,	// (0x0004f6ad) smil_status_volume_pane_g3

0x0002,

0xd463,	// (0x000547a8) call2_cli_visual_graphic_pane_g1

0xd463,	// (0x000547a8) call2_cli_visual_graphic_pane_g2

0xd463,	// (0x000547a8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00056913) call2_cli_visual_graphic_pane_g

0xf0b2,	// (0x000563f7) bg_popup_call2_rect_pane_g1

0xd501,	// (0x00054846) bg_popup_call2_rect_pane_g2

0xf0ba,	// (0x000563ff) bg_popup_call2_rect_pane_g3

0xf0c2,	// (0x00056407) bg_popup_call2_rect_pane_g4

0xf0ca,	// (0x0005640f) bg_popup_call2_rect_pane_g5

0xf0d2,	// (0x00056417) bg_popup_call2_rect_pane_g6

0xf0da,	// (0x0005641f) bg_popup_call2_rect_pane_g7

0xf0e2,	// (0x00056427) bg_popup_call2_rect_pane_g8

0xf0ea,	// (0x0005642f) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0005691a) bg_popup_call2_rect_pane_g

0x0cc0,	// (0x00048005) bg_popup_call2_bubble_pane_g1

0x0cc8,	// (0x0004800d) bg_popup_call2_bubble_pane_g2

0x0cd0,	// (0x00048015) bg_popup_call2_bubble_pane_g3

0x0cd8,	// (0x0004801d) bg_popup_call2_bubble_pane_g4

0x0ce0,	// (0x00048025) bg_popup_call2_bubble_pane_g5

0x0ce8,	// (0x0004802d) bg_popup_call2_bubble_pane_g6

0x0cf0,	// (0x00048035) bg_popup_call2_bubble_pane_g7

0x0cf8,	// (0x0004803d) bg_popup_call2_bubble_pane_g8

0x0d00,	// (0x00048045) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0005692d) bg_popup_call2_bubble_pane_g

0x59ea,	// (0x0004cd2f) aid_cale_week_size_cell_pane

0x5e7a,	// (0x0004d1bf) aid_cams_cif_uncrop_pane_ParamLimits

0x5e7a,	// (0x0004d1bf) aid_cams_cif_uncrop_pane

0x5fdd,	// (0x0004d322) aid_cams_size_cell_ParamLimits

0x5fdd,	// (0x0004d322) aid_cams_size_cell

0x5fe9,	// (0x0004d32e) grid_cams_pane_ParamLimits

0x5ff7,	// (0x0004d33c) linegrid_cams_pane_ParamLimits

0x60e7,	// (0x0004d42c) call_video_pane_t1

0x6101,	// (0x0004d446) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0005661a) call_video_pane_t

0x6600,	// (0x0004d945) aid_cale_month_size_cell_pane_ParamLimits

0x6600,	// (0x0004d945) aid_cale_month_size_cell_pane

0xf672,	// (0x000569b7) smil_status_volume_pane_g

0x8375,	// (0x0004f6ba) volume_smil_pane_ParamLimits

0x4b9a,	// (0x0004bedf) aid_popup2_width_pane

0x58d1,	// (0x0004cc16) cell_qdial_pane_g4_ParamLimits

0x58d1,	// (0x0004cc16) cell_qdial_pane_g4

0x724e,	// (0x0004e593) aid_blid_cardinal_pane_ParamLimits

0x725e,	// (0x0004e5a3) aid_blid_destination_pane_ParamLimits

0x725e,	// (0x0004e5a3) aid_blid_destination_pane

0xd2ff,	// (0x00054644) bg_popup_call_poc_act_pane_ParamLimits

0xd2ff,	// (0x00054644) bg_popup_call_poc_act_pane

0xd2ff,	// (0x00054644) bg_popup_call_poc_inact_pane_ParamLimits

0xd2ff,	// (0x00054644) bg_popup_call_poc_inact_pane

0x0d08,	// (0x0004804d) bg_popup_call_poc_act_pane_g1

0x0d10,	// (0x00048055) bg_popup_call_poc_act_pane_g2

0x0d18,	// (0x0004805d) bg_popup_call_poc_act_pane_g3

0x0cd8,	// (0x0004801d) bg_popup_call_poc_act_pane_g4

0x0ce0,	// (0x00048025) bg_popup_call_poc_act_pane_g5

0x0d20,	// (0x00048065) bg_popup_call_poc_act_pane_g6

0x0cf0,	// (0x00048035) bg_popup_call_poc_act_pane_g7

0x0d28,	// (0x0004806d) bg_popup_call_poc_act_pane_g8

0x5308,	// (0x0004c64d) main_usb_pane

0x0e81,	// (0x000481c6) popup_cale_lunar_info_window

0x639f,	// (0x0004d6e4) im_reading_pane_t1_ParamLimits

0xd6ce,	// (0x00054a13) list_im_pane_ParamLimits

0xd6df,	// (0x00054a24) scroll_pane_cp07_ParamLimits

0x5308,	// (0x0004c64d) grid_highlight_pane_cp012

0xd2ff,	// (0x00054644) mup_scale_pane_ParamLimits

0xdbaa,	// (0x00054eef) main_usb_pane_g1_ParamLimits

0xdbaa,	// (0x00054eef) main_usb_pane_g1

0x7f19,	// (0x0004f25e) main_usb_pane_g2_ParamLimits

0x7f19,	// (0x0004f25e) main_usb_pane_g2

0x0001,

0xf612,	// (0x00056957) main_usb_pane_g_ParamLimits

0xf612,	// (0x00056957) main_usb_pane_g

0x7f25,	// (0x0004f26a) main_usb_pane_t1_ParamLimits

0x7f25,	// (0x0004f26a) main_usb_pane_t1

0x7f37,	// (0x0004f27c) main_usb_pane_t2_ParamLimits

0x7f37,	// (0x0004f27c) main_usb_pane_t2

0x7f49,	// (0x0004f28e) main_usb_pane_t3_ParamLimits

0x7f49,	// (0x0004f28e) main_usb_pane_t3

0x7f5b,	// (0x0004f2a0) main_usb_pane_t4_ParamLimits

0x7f5b,	// (0x0004f2a0) main_usb_pane_t4

0x7f6d,	// (0x0004f2b2) main_usb_pane_t5_ParamLimits

0x7f6d,	// (0x0004f2b2) main_usb_pane_t5

0x7f7f,	// (0x0004f2c4) main_usb_pane_t6_ParamLimits

0x7f7f,	// (0x0004f2c4) main_usb_pane_t6

0x0005,

0xf617,	// (0x0005695c) main_usb_pane_t_ParamLimits

0x71f4,	// (0x0004e539) aid_text_placing

0x7200,	// (0x0004e545) main_location2_pane_t1_ParamLimits

0x7214,	// (0x0004e559) main_location2_pane_t2_ParamLimits

0x7228,	// (0x0004e56d) main_location2_pane_t3_ParamLimits

0x723c,	// (0x0004e581) main_location2_pane_t4_ParamLimits

0x723c,	// (0x0004e581) main_location2_pane_t4

0xf436,	// (0x0005677b) main_location2_pane_t_ParamLimits

0xd343,	// (0x00054688) find_pinb_pane_g2_ParamLimits

0xd343,	// (0x00054688) find_pinb_pane_g2

0x0001,

0xf184,	// (0x000564c9) find_pinb_pane_g_ParamLimits

0xf184,	// (0x000564c9) find_pinb_pane_g

0xd34f,	// (0x00054694) find_pinb_pane_t1_ParamLimits

0xd361,	// (0x000546a6) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x000564ce) find_pinb_pane_t_ParamLimits

0x5308,	// (0x0004c64d) main_call3_pane

0x694c,	// (0x0004dc91) cale_month_day_heading_pane_t1_ParamLimits

0x69aa,	// (0x0004dcef) cale_month_day_heading_pane_t2_ParamLimits

0x6a0f,	// (0x0004dd54) cale_month_day_heading_pane_t3_ParamLimits

0x6a74,	// (0x0004ddb9) cale_month_day_heading_pane_t4_ParamLimits

0x6ad9,	// (0x0004de1e) cale_month_day_heading_pane_t5_ParamLimits

0x6b3e,	// (0x0004de83) cale_month_day_heading_pane_t6_ParamLimits

0x6bab,	// (0x0004def0) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00056652) cale_month_day_heading_pane_t_ParamLimits

0xd91f,	// (0x00054c64) smil_status_volume_pane

0x7ac5,	// (0x0004ee0a) postcard_address_pane_ParamLimits

0x7ac5,	// (0x0004ee0a) postcard_address_pane

0x7ad1,	// (0x0004ee16) postcard_message_pane_ParamLimits

0x7ad1,	// (0x0004ee16) postcard_message_pane

0x7ed9,	// (0x0004f21e) call2_cli_visual_pane_t1_ParamLimits

0x7ed9,	// (0x0004f21e) call2_cli_visual_pane_t1

0x84c8,	// (0x0004f80d) postcard_message_pane_t1_ParamLimits

0x84c8,	// (0x0004f80d) postcard_message_pane_t1

0x84b1,	// (0x0004f7f6) postcard_address_pane_t1_ParamLimits

0x84b1,	// (0x0004f7f6) postcard_address_pane_t1

0x84a2,	// (0x0004f7e7) popup_call3_audio_in_window_ParamLimits

0x84a2,	// (0x0004f7e7) popup_call3_audio_in_window

0x838a,	// (0x0004f6cf) bg_popup_call3_in_pane_ParamLimits

0x838a,	// (0x0004f6cf) bg_popup_call3_in_pane

0x83e8,	// (0x0004f72d) popup_call3_audio_in_window_g1_ParamLimits

0x83e8,	// (0x0004f72d) popup_call3_audio_in_window_g1

0x8400,	// (0x0004f745) popup_call3_audio_in_window_g2_ParamLimits

0x8400,	// (0x0004f745) popup_call3_audio_in_window_g2

0x8418,	// (0x0004f75d) popup_call3_audio_in_window_g3_ParamLimits

0x8418,	// (0x0004f75d) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x000569be) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x000569be) popup_call3_audio_in_window_g

0x8440,	// (0x0004f785) popup_call3_audio_in_window_t1_ParamLimits

0x8440,	// (0x0004f785) popup_call3_audio_in_window_t1

0x8468,	// (0x0004f7ad) popup_call3_audio_in_window_t2_ParamLimits

0x8468,	// (0x0004f7ad) popup_call3_audio_in_window_t2

0x8490,	// (0x0004f7d5) popup_call3_audio_in_window_t3_ParamLimits

0x8490,	// (0x0004f7d5) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x000569c7) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x000569c7) popup_call3_audio_in_window_t

0xde9e,	// (0x000551e3) bg_popup_call3_rect_pane

0xf0b2,	// (0x000563f7) bg_popup_call3_rect_pane_g1

0xd501,	// (0x00054846) bg_popup_call3_rect_pane_g2

0xf0ba,	// (0x000563ff) bg_popup_call3_rect_pane_g3

0xf0c2,	// (0x00056407) bg_popup_call3_rect_pane_g4

0xf0ca,	// (0x0005640f) bg_popup_call3_rect_pane_g5

0xf0d2,	// (0x00056417) bg_popup_call3_rect_pane_g6

0xf0da,	// (0x0005641f) bg_popup_call3_rect_pane_g7

0x7650,	// (0x0004e995) mup_visualizer_osc_pane

0xdf5d,	// (0x000552a2) mup_visualizer_spec_pane

0x83aa,	// (0x0004f6ef) call3_video_qcif_pane_ParamLimits

0x83aa,	// (0x0004f6ef) call3_video_qcif_pane

0x83ba,	// (0x0004f6ff) call3_video_qcif_uncrop_pane_ParamLimits

0x83ba,	// (0x0004f6ff) call3_video_qcif_uncrop_pane

0x83c6,	// (0x0004f70b) call3_video_subqcif_pane_ParamLimits

0x83c6,	// (0x0004f70b) call3_video_subqcif_pane

0x83d8,	// (0x0004f71d) call3_video_subqcif_uncrop_pane_ParamLimits

0x83d8,	// (0x0004f71d) call3_video_subqcif_uncrop_pane

0x8430,	// (0x0004f775) popup_call3_audio_in_window_g4_ParamLimits

0x8430,	// (0x0004f775) popup_call3_audio_in_window_g4

0x8357,	// (0x0004f69c) mup_spec_half_pane

0x8360,	// (0x0004f6a5) mup_spec_half_pane_cp

0x0f18,	// (0x0004825d) mup_osc_middle_pane

0x0f21,	// (0x00048266) mup_visualizer_osc_pane_g1

0x8338,	// (0x0004f67d) mup_spec_bar_pane_ParamLimits

0x8338,	// (0x0004f67d) mup_spec_bar_pane

0x0f05,	// (0x0004824a) mup_spec_bar_pane_g1

0x0f0f,	// (0x00048254) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000569b2) mup_spec_bar_pane_g

0x59ea,	// (0x0004cd2f) aid_cale_week_size_cell_pane_ParamLimits

0x59fd,	// (0x0004cd42) bg_cale_heading_pane_ParamLimits

0xd535,	// (0x0005487a) bg_cale_pane_cp01_ParamLimits

0x5a11,	// (0x0004cd56) cale_week_corner_pane_ParamLimits

0x5a22,	// (0x0004cd67) cale_week_day_heading_pane_ParamLimits

0x5a36,	// (0x0004cd7b) cale_week_scroll_pane_g1_ParamLimits

0x5a47,	// (0x0004cd8c) cale_week_scroll_pane_g2_ParamLimits

0x5a58,	// (0x0004cd9d) cale_week_scroll_pane_g3_ParamLimits

0x5a69,	// (0x0004cdae) cale_week_scroll_pane_g4_ParamLimits

0x5a7a,	// (0x0004cdbf) cale_week_scroll_pane_g5_ParamLimits

0x5a8b,	// (0x0004cdd0) cale_week_scroll_pane_g6_ParamLimits

0x5a9c,	// (0x0004cde1) cale_week_scroll_pane_g7_ParamLimits

0x5aaf,	// (0x0004cdf4) cale_week_scroll_pane_g8_ParamLimits

0x5ac2,	// (0x0004ce07) cale_week_scroll_pane_g9_ParamLimits

0x5ad3,	// (0x0004ce18) cale_week_scroll_pane_g10_ParamLimits

0x5ae4,	// (0x0004ce29) cale_week_scroll_pane_g11_ParamLimits

0x5af5,	// (0x0004ce3a) cale_week_scroll_pane_g12_ParamLimits

0x5b06,	// (0x0004ce4b) cale_week_scroll_pane_g13_ParamLimits

0x5b17,	// (0x0004ce5c) cale_week_scroll_pane_g14_ParamLimits

0x5b28,	// (0x0004ce6d) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0005655a) cale_week_scroll_pane_g_ParamLimits

0x5b39,	// (0x0004ce7e) cale_week_time_pane_ParamLimits

0x5b4c,	// (0x0004ce91) grid_cale_week_pane_ParamLimits

0xd54e,	// (0x00054893) listscroll_cale_week_pane_t1

0x5b61,	// (0x0004cea6) scroll_pane_cp08_ParamLimits

0x6641,	// (0x0004d986) cale_month_corner_pane_ParamLimits

0xd8f5,	// (0x00054c3a) cale_month_pane_t1

0x690b,	// (0x0004dc50) cale_month_week_pane_ParamLimits

0xdbaa,	// (0x00054eef) popup_call_status_window_g1_ParamLimits

0x703c,	// (0x0004e381) popup_call_status_window_g2_ParamLimits

0x7048,	// (0x0004e38d) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00056702) popup_call_status_window_g_ParamLimits

0xdc11,	// (0x00054f56) aid_call2_pane

0x78f4,	// (0x0004ec39) msg_header_pane_g1

0x7ac5,	// (0x0004ee0a) postcard_address2_pane_ParamLimits

0x7ac5,	// (0x0004ee0a) postcard_address2_pane

0x7ad1,	// (0x0004ee16) postcard_message2_pane_ParamLimits

0x7ad1,	// (0x0004ee16) postcard_message2_pane

0x82c6,	// (0x0004f60b) message2_row_pane_ParamLimits

0x82c6,	// (0x0004f60b) message2_row_pane

0x82e3,	// (0x0004f628) address2_row_pane_ParamLimits

0x82e3,	// (0x0004f628) address2_row_pane

0x0ed3,	// (0x00048218) postcard_message2_row_pane_g1

0x0edb,	// (0x00048220) postcard_message2_row_pane_t1

0x0ed3,	// (0x00048218) address2_row_pane_g1

0x0edb,	// (0x00048220) address2_row_pane_t1

0x5d59,	// (0x0004d09e) aid_size_cell_vorec

0x5308,	// (0x0004c64d) main_rss_pane

0x82f6,	// (0x0004f63b) rss_list_single_pane_ParamLimits

0x82f6,	// (0x0004f63b) rss_list_single_pane

0x0ee9,	// (0x0004822e) rss_list_single_pane_t1

0x0ef7,	// (0x0004823c) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x000569ad) rss_list_single_pane_t

0x5308,	// (0x0004c64d) main_camera2_pane

0x5308,	// (0x0004c64d) main_video2_pane

0x852c,	// (0x0004f871) cams_zoom_pane_cp2_ParamLimits

0x852c,	// (0x0004f871) cams_zoom_pane_cp2

0x8538,	// (0x0004f87d) image2_vga_pane_ParamLimits

0x8538,	// (0x0004f87d) image2_vga_pane

0x8547,	// (0x0004f88c) main_camera2_pane_g1_ParamLimits

0x8547,	// (0x0004f88c) main_camera2_pane_g1

0x8553,	// (0x0004f898) main_camera2_pane_g2_ParamLimits

0x8553,	// (0x0004f898) main_camera2_pane_g2

0x855f,	// (0x0004f8a4) main_camera2_pane_g3_ParamLimits

0x855f,	// (0x0004f8a4) main_camera2_pane_g3

0x856b,	// (0x0004f8b0) main_camera2_pane_g4_ParamLimits

0x856b,	// (0x0004f8b0) main_camera2_pane_g4

0x8577,	// (0x0004f8bc) main_camera2_pane_g5_ParamLimits

0x8577,	// (0x0004f8bc) main_camera2_pane_g5

0x8583,	// (0x0004f8c8) main_camera2_pane_g6_ParamLimits

0x8583,	// (0x0004f8c8) main_camera2_pane_g6

0x858f,	// (0x0004f8d4) main_camera2_pane_g7_ParamLimits

0x858f,	// (0x0004f8d4) main_camera2_pane_g7

0x859b,	// (0x0004f8e0) main_camera2_pane_g8_ParamLimits

0x859b,	// (0x0004f8e0) main_camera2_pane_g8

0x0008,

0xf689,	// (0x000569ce) main_camera2_pane_g_ParamLimits

0xf689,	// (0x000569ce) main_camera2_pane_g

0x85b3,	// (0x0004f8f8) main_camera2_pane_t1_ParamLimits

0x85b3,	// (0x0004f8f8) main_camera2_pane_t1

0x85c5,	// (0x0004f90a) main_camera2_pane_t2_ParamLimits

0x85c5,	// (0x0004f90a) main_camera2_pane_t2

0x85d7,	// (0x0004f91c) main_camera2_pane_t3_ParamLimits

0x85d7,	// (0x0004f91c) main_camera2_pane_t3

0x85e9,	// (0x0004f92e) main_camera2_pane_t4_ParamLimits

0x85e9,	// (0x0004f92e) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x000569e1) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x000569e1) main_camera2_pane_t

0x864b,	// (0x0004f990) cams_zoom_pane_cp4_ParamLimits

0x864b,	// (0x0004f990) cams_zoom_pane_cp4

0x865b,	// (0x0004f9a0) image2_cif_pane_ParamLimits

0x865b,	// (0x0004f9a0) image2_cif_pane

0x8670,	// (0x0004f9b5) image2_subqcif_pane_ParamLimits

0x8670,	// (0x0004f9b5) image2_subqcif_pane

0x867f,	// (0x0004f9c4) main_video2_pane_g1_ParamLimits

0x867f,	// (0x0004f9c4) main_video2_pane_g1

0x8691,	// (0x0004f9d6) main_video2_pane_g2_ParamLimits

0x8691,	// (0x0004f9d6) main_video2_pane_g2

0x86a1,	// (0x0004f9e6) main_video2_pane_g3_ParamLimits

0x86a1,	// (0x0004f9e6) main_video2_pane_g3

0x86b1,	// (0x0004f9f6) main_video2_pane_g4_ParamLimits

0x86b1,	// (0x0004f9f6) main_video2_pane_g4

0x86c1,	// (0x0004fa06) main_video2_pane_g5_ParamLimits

0x86c1,	// (0x0004fa06) main_video2_pane_g5

0x86d1,	// (0x0004fa16) main_video2_pane_g6_ParamLimits

0x86d1,	// (0x0004fa16) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x000569f0) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x000569f0) main_video2_pane_g

0x86e3,	// (0x0004fa28) main_video2_pane_t1_ParamLimits

0x86e3,	// (0x0004fa28) main_video2_pane_t1

0x86fd,	// (0x0004fa42) main_video2_pane_t2_ParamLimits

0x86fd,	// (0x0004fa42) main_video2_pane_t2

0x8723,	// (0x0004fa68) main_video2_pane_t3_ParamLimits

0x8723,	// (0x0004fa68) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x000569fd) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x000569fd) main_video2_pane_t

0x8036,	// (0x0004f37b) call_muted_g2

0x0001,

0xf65a,	// (0x0005699f) call_muted_g

0x5308,	// (0x0004c64d) main_mup2_pane

0x0fd8,	// (0x0004831d) main_mup2_pane_g1_ParamLimits

0x0fd8,	// (0x0004831d) main_mup2_pane_g1

0x8749,	// (0x0004fa8e) main_mup2_pane_g2_ParamLimits

0x8749,	// (0x0004fa8e) main_mup2_pane_g2

0x89cb,	// (0x0004fd10) main_mup_pane_g13_cp1

0x89d3,	// (0x0004fd18) mup_volume_pane_cp1

0x8769,	// (0x0004faae) main_mup2_pane_g4_ParamLimits

0x8769,	// (0x0004faae) main_mup2_pane_g4

0x877e,	// (0x0004fac3) main_mup2_pane_g5_ParamLimits

0x877e,	// (0x0004fac3) main_mup2_pane_g5

0x8793,	// (0x0004fad8) main_mup2_pane_g6_ParamLimits

0x8793,	// (0x0004fad8) main_mup2_pane_g6

0x87a8,	// (0x0004faed) main_mup2_pane_g7_ParamLimits

0x87a8,	// (0x0004faed) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x00056a04) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x00056a04) main_mup2_pane_g

0x87c4,	// (0x0004fb09) main_mup2_pane_t1_ParamLimits

0x87c4,	// (0x0004fb09) main_mup2_pane_t1

0x87db,	// (0x0004fb20) main_mup2_pane_t2_ParamLimits

0x87db,	// (0x0004fb20) main_mup2_pane_t2

0x87f2,	// (0x0004fb37) main_mup2_pane_t3_ParamLimits

0x87f2,	// (0x0004fb37) main_mup2_pane_t3

0x8809,	// (0x0004fb4e) main_mup2_pane_t4_ParamLimits

0x8809,	// (0x0004fb4e) main_mup2_pane_t4

0x8823,	// (0x0004fb68) main_mup2_pane_t5_ParamLimits

0x8823,	// (0x0004fb68) main_mup2_pane_t5

0x883d,	// (0x0004fb82) main_mup2_pane_t6_ParamLimits

0x883d,	// (0x0004fb82) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x00056a13) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x00056a13) main_mup2_pane_t

0x8875,	// (0x0004fbba) mup2_visualizer_pane_ParamLimits

0x8875,	// (0x0004fbba) mup2_visualizer_pane

0x88ab,	// (0x0004fbf0) mup_progress_pane_cp_ParamLimits

0x88ab,	// (0x0004fbf0) mup_progress_pane_cp

0x89b6,	// (0x0004fcfb) mup_volume_pane_cp_ParamLimits

0x89b6,	// (0x0004fcfb) mup_volume_pane_cp

0x88c2,	// (0x0004fc07) mup2_visualizer_pane_g1_ParamLimits

0x88c2,	// (0x0004fc07) mup2_visualizer_pane_g1

0x0faa,	// (0x000482ef) mup2_visualizer_pane_g2_ParamLimits

0x0faa,	// (0x000482ef) mup2_visualizer_pane_g2

0x88d7,	// (0x0004fc1c) mup2_visualizer_pane_g3_ParamLimits

0x88d7,	// (0x0004fc1c) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00056a20) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00056a20) mup2_visualizer_pane_g

0xe184,	// (0x000554c9) aid_size_cell_fmradio

0x814c,	// (0x0004f491) aid_height_parent_landcape

0xd75d,	// (0x00054aa2) wml_content_pane_cp

0xd765,	// (0x00054aaa) wml_tabs_pane

0xd76e,	// (0x00054ab3) popup_wml_miniature_window

0xd776,	// (0x00054abb) scroll_pane_cp021

0xd78a,	// (0x00054acf) wml_content_pane_comp8

0x5308,	// (0x0004c64d) bg_popup_sub_pane_cp05

0x0fc8,	// (0x0004830d) popup_wml_miniature_window_g1

0x0fd0,	// (0x00048315) wml_miniature_view_pane

0x88e5,	// (0x0004fc2a) aid_size_wml_view

0x88ed,	// (0x0004fc32) wml_miniature_view_pane_g1

0x88f6,	// (0x0004fc3b) wml_miniature_view_pane_g2

0x88ff,	// (0x0004fc44) wml_miniature_view_pane_g3

0x8907,	// (0x0004fc4c) wml_miniature_view_pane_g4

0x890f,	// (0x0004fc54) wml_miniature_view_pane_g5

0x8917,	// (0x0004fc5c) wml_miniature_view_pane_g6

0x891f,	// (0x0004fc64) wml_miniature_view_pane_g7

0x8927,	// (0x0004fc6c) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00056a27) wml_miniature_view_pane_g

0x0fd8,	// (0x0004831d) background_graphic_ParamLimits

0x0fd8,	// (0x0004831d) background_graphic

0x0fe4,	// (0x00048329) wml_tabs_2_pane

0x0fed,	// (0x00048332) wml_tabs_3_pane_ParamLimits

0x0fed,	// (0x00048332) wml_tabs_3_pane

0x0fff,	// (0x00048344) wml_tabs_4_pane_ParamLimits

0x0fff,	// (0x00048344) wml_tabs_4_pane

0x1015,	// (0x0004835a) wml_tabs_5_pane_ParamLimits

0x1015,	// (0x0004835a) wml_tabs_5_pane

0x102f,	// (0x00048374) wml_tabs_pane_g2_ParamLimits

0x102f,	// (0x00048374) wml_tabs_pane_g2

0x1043,	// (0x00048388) wml_tabs_pane_g3_ParamLimits

0x1043,	// (0x00048388) wml_tabs_pane_g3

0x892f,	// (0x0004fc74) wml_tabs_2_active_pane_ParamLimits

0x892f,	// (0x0004fc74) wml_tabs_2_active_pane

0x893f,	// (0x0004fc84) wml_tabs_2_passive_pane_ParamLimits

0x893f,	// (0x0004fc84) wml_tabs_2_passive_pane

0x894f,	// (0x0004fc94) wml_tabs_3_active_pane_cp_ParamLimits

0x894f,	// (0x0004fc94) wml_tabs_3_active_pane_cp

0x8960,	// (0x0004fca5) wml_tabs_3_passive_pane_ParamLimits

0x8960,	// (0x0004fca5) wml_tabs_3_passive_pane

0x8971,	// (0x0004fcb6) wml_tabs_3_passive_pane_cp_ParamLimits

0x8971,	// (0x0004fcb6) wml_tabs_3_passive_pane_cp

0x8982,	// (0x0004fcc7) tabs_4_active_pane

0x898a,	// (0x0004fccf) tabs_4_passive_pane

0x8992,	// (0x0004fcd7) tabs_4_passive_pane_cp

0x899a,	// (0x0004fcdf) tabs_4_passive_pane_cp2

0x7f11,	// (0x0004f256) aid_height_text

0x7619,	// (0x0004e95e) mup_volume_cont_pane_ParamLimits

0x7619,	// (0x0004e95e) mup_volume_cont_pane

0x553f,	// (0x0004c884) aid_size_cell_pinb

0xd32f,	// (0x00054674) aid_size_list_pinb

0x8894,	// (0x0004fbd9) mup2_volume_cont_pane_ParamLimits

0x8894,	// (0x0004fbd9) mup2_volume_cont_pane

0x89a2,	// (0x0004fce7) mup2_volume_cont_pane_g1_ParamLimits

0x89a2,	// (0x0004fce7) mup2_volume_cont_pane_g1

0x4ba6,	// (0x0004beeb) aid_size_cell_touch_ParamLimits

0x4ba6,	// (0x0004beeb) aid_size_cell_touch

0x4e3d,	// (0x0004c182) touch_pane_ParamLimits

0x4e3d,	// (0x0004c182) touch_pane

0x4b88,	// (0x0004becd) main_rss2_pane

0x1099,	// (0x000483de) listscroll_rss2_pane

0x10a2,	// (0x000483e7) rss2_navigation_pane

0x10aa,	// (0x000483ef) list_rss2_pane

0xdd51,	// (0x00055096) scroll_pane_cp22

0x10b2,	// (0x000483f7) rss2_navigation_pane_g1

0x10bb,	// (0x00048400) rss2_navigation_pane_g2

0x10c3,	// (0x00048408) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00056a38) rss2_navigation_pane_g

0x10cb,	// (0x00048410) rss2_navigation_pane_t1

0x89db,	// (0x0004fd20) rss2_list_single_pane_ParamLimits

0x89db,	// (0x0004fd20) rss2_list_single_pane

0x10d9,	// (0x0004841e) rss2_list_single_pane_t2

0x10e7,	// (0x0004842c) rss2_list_single_pane_t3_ParamLimits

0x10e7,	// (0x0004842c) rss2_list_single_pane_t3

0x1104,	// (0x00048449) rss2_list_single_pane_t4

0x6d93,	// (0x0004e0d8) smil_status_pane_g1

0xf0f2,	// (0x00056437) main_image2_pane_ParamLimits

0xf0f2,	// (0x00056437) main_image2_pane

0x85a7,	// (0x0004f8ec) main_camera2_pane_g9_ParamLimits

0x85a7,	// (0x0004f8ec) main_camera2_pane_g9

0x85fb,	// (0x0004f940) main_camera2_pane_t5_ParamLimits

0x85fb,	// (0x0004f940) main_camera2_pane_t5

0x860d,	// (0x0004f952) main_camera2_pane_t6_ParamLimits

0x860d,	// (0x0004f952) main_camera2_pane_t6

0x8a17,	// (0x0004fd5c) main_image2_pane_g1_ParamLimits

0x8a17,	// (0x0004fd5c) main_image2_pane_g1

0x7ca6,	// (0x0004efeb) smil2_video_pane_ParamLimits

0x7ca6,	// (0x0004efeb) smil2_video_pane

0x0976,	// (0x00047cbb) aid_zoom_text_primary_cp

0x4dfc,	// (0x0004c141) popup_preview_fixed_window

0xd6c6,	// (0x00054a0b) im_reading_pane_g1

0x84f1,	// (0x0004f836) cams2_bc_adjust_pane_cp_ParamLimits

0x84f1,	// (0x0004f836) cams2_bc_adjust_pane_cp

0x863d,	// (0x0004f982) cams2_bc_adjust_pane_ParamLimits

0x863d,	// (0x0004f982) cams2_bc_adjust_pane

0x2475,	// (0x000497ba) cams2_bc_adjust_pane_g1

0x8a23,	// (0x0004fd68) cams2_slider_pane

0x8a2c,	// (0x0004fd71) cams2_slider_pane_g1

0x8a35,	// (0x0004fd7a) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00056a3f) cams2_slider_pane_g

0x5615,	// (0x0004c95a) calc_display_pane_ParamLimits

0x5633,	// (0x0004c978) calc_paper_pane_ParamLimits

0x564f,	// (0x0004c994) grid_calc_pane_ParamLimits

0x70a6,	// (0x0004e3eb) popup_clock_digital_window_t1_ParamLimits

0xe121,	// (0x00055466) main_image_pane_t1

0x55fb,	// (0x0004c940) aid_size_cell_calc_ParamLimits

0x55fb,	// (0x0004c940) aid_size_cell_calc

0x817e,	// (0x0004f4c3) popup_blid_sat_info2_window_ParamLimits

0x817e,	// (0x0004f4c3) popup_blid_sat_info2_window

0x114e,	// (0x00048493) aid_size_cell_blid

0x1156,	// (0x0004849b) bg_popup_window_pane_cp07

0x1179,	// (0x000484be) grid_popup_blid_pane

0x1183,	// (0x000484c8) heading_pane_cp05_ParamLimits

0x1183,	// (0x000484c8) heading_pane_cp05

0x124d,	// (0x00048592) cell_popup_blid_pane_ParamLimits

0x124d,	// (0x00048592) cell_popup_blid_pane

0x1273,	// (0x000485b8) cell_popup_blid_pane_g1

0x127b,	// (0x000485c0) cell_popup_blid_pane_t1

0x885a,	// (0x0004fb9f) mup2_indicator_pane_ParamLimits

0x885a,	// (0x0004fb9f) mup2_indicator_pane

0xde9e,	// (0x000551e3) mup2_visualizer_osc_pane

0x0fb6,	// (0x000482fb) mup2_visualizer_spec_pane_ParamLimits

0x0fb6,	// (0x000482fb) mup2_visualizer_spec_pane

0x8a4f,	// (0x0004fd94) mup2_spec_half_pane

0x8a58,	// (0x0004fd9d) mup2_spec_half_pane_cp

0x8a62,	// (0x0004fda7) mup2_spec_bar_pane_ParamLimits

0x8a62,	// (0x0004fda7) mup2_spec_bar_pane

0x0f05,	// (0x0004824a) mup2_spec_bar_pane_g1

0x0f0f,	// (0x00048254) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000569b2) mup2_spec_bar_pane_g

0x8a81,	// (0x0004fdc6) mup2_osc_middle_pane

0x0f21,	// (0x00048266) mup2_visualizer_osc_pane_g1

0x4eb4,	// (0x0004c1f9) popup_number_entry_window_t1_ParamLimits

0x4ec7,	// (0x0004c20c) popup_number_entry_window_t2_ParamLimits

0x4ed9,	// (0x0004c21e) popup_number_entry_window_t3_ParamLimits

0x4eeb,	// (0x0004c230) popup_number_entry_window_t5_ParamLimits

0x4eeb,	// (0x0004c230) popup_number_entry_window_t5

0xf12f,	// (0x00056474) popup_number_entry_window_t_ParamLimits

0x4f2a,	// (0x0004c26f) text_title_cp2_ParamLimits

0x798d,	// (0x0004ecd2) aid_hotspot_pointer_text2_pane

0x7a27,	// (0x0004ed6c) main_viewer_pane_g9_ParamLimits

0x7a27,	// (0x0004ed6c) main_viewer_pane_g9

0xd8f5,	// (0x00054c3a) cale_month_pane_t1_ParamLimits

0xd932,	// (0x00054c77) bg_cale_pane_ParamLimits

0xd94a,	// (0x00054c8f) list_cale_pane_ParamLimits

0xd54e,	// (0x00054893) listscroll_cale_day_pane_t1

0xd95b,	// (0x00054ca0) scroll_pane_cp09_ParamLimits

0x7658,	// (0x0004e99d) main_mup_eq_pane_t1_ParamLimits

0x7658,	// (0x0004e99d) main_mup_eq_pane_t1

0x7672,	// (0x0004e9b7) main_mup_eq_pane_t2_ParamLimits

0x7672,	// (0x0004e9b7) main_mup_eq_pane_t2

0x768a,	// (0x0004e9cf) main_mup_eq_pane_t3_ParamLimits

0x768a,	// (0x0004e9cf) main_mup_eq_pane_t3

0x76a2,	// (0x0004e9e7) main_mup_eq_pane_t4_ParamLimits

0x76a2,	// (0x0004e9e7) main_mup_eq_pane_t4

0x76ba,	// (0x0004e9ff) main_mup_eq_pane_t5_ParamLimits

0x76ba,	// (0x0004e9ff) main_mup_eq_pane_t5

0x76d2,	// (0x0004ea17) main_mup_eq_pane_t6_ParamLimits

0x76d2,	// (0x0004ea17) main_mup_eq_pane_t6

0x76e6,	// (0x0004ea2b) main_mup_eq_pane_t7_ParamLimits

0x76e6,	// (0x0004ea2b) main_mup_eq_pane_t7

0x76fa,	// (0x0004ea3f) main_mup_eq_pane_t8_ParamLimits

0x76fa,	// (0x0004ea3f) main_mup_eq_pane_t8

0x7710,	// (0x0004ea55) main_mup_eq_pane_t9_ParamLimits

0x7710,	// (0x0004ea55) main_mup_eq_pane_t9

0x7728,	// (0x0004ea6d) main_mup_eq_pane_t10_ParamLimits

0x7728,	// (0x0004ea6d) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00056801) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00056801) main_mup_eq_pane_t

0x77e5,	// (0x0004eb2a) mup_equalizer_pane_cp5_ParamLimits

0x77fb,	// (0x0004eb40) mup_equalizer_pane_cp6_ParamLimits

0x7813,	// (0x0004eb58) mup_equalizer_pane_cp7_ParamLimits

0x4b88,	// (0x0004becd) main_gallery_pane

0x0f2a,	// (0x0004826f) smil2_volume_pane

0x0f45,	// (0x0004828a) smil_status_volume_pane_g1_ParamLimits

0x0f32,	// (0x00048277) smil_status_volume_pane_g2_ParamLimits

0x8368,	// (0x0004f6ad) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x000569b7) smil_status_volume_pane_g_ParamLimits

0x1156,	// (0x0004849b) bg_popup_window_pane_cp07_ParamLimits

0x1164,	// (0x000484a9) blid_firmament_pane

0x8a8a,	// (0x0004fdcf) aid_size_cell_gallery_ParamLimits

0x8a8a,	// (0x0004fdcf) aid_size_cell_gallery

0x8a98,	// (0x0004fddd) grid_gallery_pane_ParamLimits

0x8a98,	// (0x0004fddd) grid_gallery_pane

0x8aa8,	// (0x0004fded) cell_gallery_pane_ParamLimits

0x8aa8,	// (0x0004fded) cell_gallery_pane

0x1289,	// (0x000485ce) bg_cell_gallery_focus_pane_ParamLimits

0x1289,	// (0x000485ce) bg_cell_gallery_focus_pane

0x129b,	// (0x000485e0) cell_gallery_pane_g1_ParamLimits

0x129b,	// (0x000485e0) cell_gallery_pane_g1

0x8af6,	// (0x0004fe3b) cell_gallery_pane_g2_ParamLimits

0x8af6,	// (0x0004fe3b) cell_gallery_pane_g2

0x8b03,	// (0x0004fe48) cell_gallery_pane_g3_ParamLimits

0x8b03,	// (0x0004fe48) cell_gallery_pane_g3

0x12a7,	// (0x000485ec) cell_gallery_pane_g4_ParamLimits

0x12a7,	// (0x000485ec) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00056a65) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00056a65) cell_gallery_pane_g

0x12b3,	// (0x000485f8) bg_cell_gallery_focus_pane_g1

0x12bb,	// (0x00048600) bg_cell_gallery_focus_pane_g2

0x12c3,	// (0x00048608) bg_cell_gallery_focus_pane_g3

0x12cb,	// (0x00048610) bg_cell_gallery_focus_pane_g4

0x12d3,	// (0x00048618) bg_cell_gallery_focus_pane_g5

0x12db,	// (0x00048620) bg_cell_gallery_focus_pane_g6

0x12e3,	// (0x00048628) bg_cell_gallery_focus_pane_g7

0x12eb,	// (0x00048630) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x00056a6e) bg_cell_gallery_focus_pane_g

0x12f3,	// (0x00048638) aid_firma_cardinal

0x1307,	// (0x0004864c) blid_firmament_pane_t1

0x131e,	// (0x00048663) blid_firmament_pane_t2

0x1335,	// (0x0004867a) blid_firmament_pane_t3

0x134c,	// (0x00048691) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x00056a7f) blid_firmament_pane_t

0x1363,	// (0x000486a8) blid_sat_info_pane

0x1373,	// (0x000486b8) blid_sat_info_pane_g1

0x1373,	// (0x000486b8) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x00056a88) blid_sat_info_pane_g

0x137d,	// (0x000486c2) blid_sat_info_pane_t1

0x138b,	// (0x000486d0) smil2_volume_content_pane

0x1394,	// (0x000486d9) smil2_volume_pane_g1

0x139c,	// (0x000486e1) smil2_volume_content_pane_g1

0x13a5,	// (0x000486ea) smil2_volume_content_pane_g2

0x13ae,	// (0x000486f3) smil2_volume_content_pane_g3

0x13b7,	// (0x000486fc) smil2_volume_content_pane_g4

0x13c0,	// (0x00048705) smil2_volume_content_pane_g5

0x13c9,	// (0x0004870e) smil2_volume_content_pane_g6

0x13d2,	// (0x00048717) smil2_volume_content_pane_g7

0x13db,	// (0x00048720) smil2_volume_content_pane_g8

0x13e4,	// (0x00048729) smil2_volume_content_pane_g9

0x13ed,	// (0x00048732) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x00056a8d) smil2_volume_content_pane_g

0x5bb7,	// (0x0004cefc) cale_week_day_heading_pane_t1_ParamLimits

0x5bcb,	// (0x0004cf10) cale_week_day_heading_pane_t2_ParamLimits

0x5bdf,	// (0x0004cf24) cale_week_day_heading_pane_t3_ParamLimits

0x5bf3,	// (0x0004cf38) cale_week_day_heading_pane_t4_ParamLimits

0x5c07,	// (0x0004cf4c) cale_week_day_heading_pane_t5_ParamLimits

0x5c1b,	// (0x0004cf60) cale_week_day_heading_pane_t6_ParamLimits

0x5c2f,	// (0x0004cf74) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00056579) cale_week_day_heading_pane_t_ParamLimits

0xd560,	// (0x000548a5) bg_cale_side_pane_ParamLimits

0x5c43,	// (0x0004cf88) cale_week_time_pane_t1_ParamLimits

0x5c5b,	// (0x0004cfa0) cale_week_time_pane_t2_ParamLimits

0x5c73,	// (0x0004cfb8) cale_week_time_pane_t3_ParamLimits

0x5c8b,	// (0x0004cfd0) cale_week_time_pane_t4_ParamLimits

0x5ca3,	// (0x0004cfe8) cale_week_time_pane_t5_ParamLimits

0x5cbb,	// (0x0004d000) cale_week_time_pane_t6_ParamLimits

0x5cd3,	// (0x0004d018) cale_week_time_pane_t7_ParamLimits

0x5ceb,	// (0x0004d030) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00056588) cale_week_time_pane_t_ParamLimits

0x5d03,	// (0x0004d048) cell_cale_week_pane_g2_ParamLimits

0xd560,	// (0x000548a5) bg_cale_side_pane_cp01_ParamLimits

0x6c20,	// (0x0004df65) cale_month_week_pane_t1_ParamLimits

0x6c37,	// (0x0004df7c) cale_month_week_pane_t2_ParamLimits

0x6c4e,	// (0x0004df93) cale_month_week_pane_t3_ParamLimits

0x6c65,	// (0x0004dfaa) cale_month_week_pane_t4_ParamLimits

0x6c7c,	// (0x0004dfc1) cale_month_week_pane_t5_ParamLimits

0x6c93,	// (0x0004dfd8) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00056661) cale_month_week_pane_t_ParamLimits

0x6d60,	// (0x0004e0a5) cell_cale_month_pane_g1_ParamLimits

0x4b88,	// (0x0004becd) main_cale_event_viewer_pane

0x4b88,	// (0x0004becd) listscroll_cale_event_viewer_pane

0x13f6,	// (0x0004873b) list_cale_ev_pane

0x13fe,	// (0x00048743) scroll_pane_cp023

0x140a,	// (0x0004874f) field_cale_ev_pane_ParamLimits

0x140a,	// (0x0004874f) field_cale_ev_pane

0x1424,	// (0x00048769) field_cale_ev_content_pane_ParamLimits

0x1424,	// (0x00048769) field_cale_ev_content_pane

0x1430,	// (0x00048775) field_cale_ev_pane_g1_ParamLimits

0x1430,	// (0x00048775) field_cale_ev_pane_g1

0x143c,	// (0x00048781) field_cale_ev_pane_g2_ParamLimits

0x143c,	// (0x00048781) field_cale_ev_pane_g2

0x1454,	// (0x00048799) field_cale_ev_pane_g3_ParamLimits

0x1454,	// (0x00048799) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00056aa2) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00056aa2) field_cale_ev_pane_g

0x146c,	// (0x000487b1) field_cale_ev_pane_t1_ParamLimits

0x146c,	// (0x000487b1) field_cale_ev_pane_t1

0x1483,	// (0x000487c8) field_cale_ev_content_pane_t1_ParamLimits

0x1483,	// (0x000487c8) field_cale_ev_content_pane_t1

0xe007,	// (0x0005534c) bg_button_pane_cp01

0xd40e,	// (0x00054753) listscroll_cale_week_pane_ParamLimits

0x59e0,	// (0x0004cd25) popup_toolbar_window_cp01

0xd54e,	// (0x00054893) listscroll_cale_week_pane_t1_ParamLimits

0xd40e,	// (0x00054753) listscroll_cale_day_pane_ParamLimits

0x59e0,	// (0x0004cd25) popup_toolbar_window_cp02

0xd54e,	// (0x00054893) listscroll_cale_day_pane_t1_ParamLimits

0xd40e,	// (0x00054753) main_cale_month_pane_ParamLimits

0x8242,	// (0x0004f587) popup_toolbar_window_cp03_ParamLimits

0x8242,	// (0x0004f587) popup_toolbar_window_cp03

0x7bb8,	// (0x0004eefd) main_image_pane_g2_ParamLimits

0x7bb8,	// (0x0004eefd) main_image_pane_g2

0x7bc4,	// (0x0004ef09) main_image_pane_g3_ParamLimits

0x7bc4,	// (0x0004ef09) main_image_pane_g3

0x0002,

0xf54e,	// (0x00056893) main_image_pane_g_ParamLimits

0xf54e,	// (0x00056893) main_image_pane_g

0xe121,	// (0x00055466) main_image_pane_t1_ParamLimits

0x7bd0,	// (0x0004ef15) main_image_pane_t2_ParamLimits

0x7bd0,	// (0x0004ef15) main_image_pane_t2

0x7be2,	// (0x0004ef27) main_image_pane_t3_ParamLimits

0x7be2,	// (0x0004ef27) main_image_pane_t3

0x7bf4,	// (0x0004ef39) main_image_pane_t4_ParamLimits

0x7bf4,	// (0x0004ef39) main_image_pane_t4

0x0003,

0xf555,	// (0x0005689a) main_image_pane_t_ParamLimits

0xf555,	// (0x0005689a) main_image_pane_t

0x7c06,	// (0x0004ef4b) popup_image_details_window_cp01

0x7c10,	// (0x0004ef55) popup_toobar_trans_pane_cp01_ParamLimits

0x7c10,	// (0x0004ef55) popup_toobar_trans_pane_cp01

0x81c7,	// (0x0004f50c) popup_image_details_window_ParamLimits

0x81c7,	// (0x0004f50c) popup_image_details_window

0x0e8b,	// (0x000481d0) popup_image_focus_window

0x84e3,	// (0x0004f828) camera2_autofocus_pane_ParamLimits

0x84e3,	// (0x0004f828) camera2_autofocus_pane

0x4b88,	// (0x0004becd) bg_popup_sub_pane_cp06

0x14a0,	// (0x000487e5) popup_image_focus_window_g1

0x14a8,	// (0x000487ed) popup_image_focus_window_g2

0x14b0,	// (0x000487f5) popup_image_focus_window_g3

0x14b8,	// (0x000487fd) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00056aa9) popup_image_focus_window_g

0x14c0,	// (0x00048805) popup_image_focus_window_t1

0x14ce,	// (0x00048813) popup_image_focus_window_t2

0x14de,	// (0x00048823) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00056ab2) popup_image_focus_window_t

0x14ec,	// (0x00048831) camera2_autofocus_pane_g1

0xf0f2,	// (0x00056437) bg_tb_trans_pane_cp01

0x14fa,	// (0x0004883f) popup_image_details_window_g1

0x150d,	// (0x00048852) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x00056ac4) popup_image_details_window_g

0x1536,	// (0x0004887b) popup_image_details_window_t1

0x1548,	// (0x0004888d) popup_image_details_window_t2

0x1561,	// (0x000488a6) popup_image_details_window_t3

0x1575,	// (0x000488ba) popup_image_details_window_t4

0x1590,	// (0x000488d5) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00056acb) popup_image_details_window_t

0xd3fa,	// (0x0005473f) bg_calc_paper_pane_ParamLimits

0x5748,	// (0x0004ca8d) grid_highlight_pane_cp013

0x5752,	// (0x0004ca97) list_calc_pane_ParamLimits

0x5764,	// (0x0004caa9) scroll_pane_cp024

0xd40e,	// (0x00054753) bg_calc_display_pane_ParamLimits

0x576c,	// (0x0004cab1) calc_display_pane_t1_ParamLimits

0x5781,	// (0x0004cac6) calc_display_pane_t2_ParamLimits

0x5796,	// (0x0004cadb) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x000564fb) calc_display_pane_t_ParamLimits

0x587d,	// (0x0004cbc2) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00056518) cell_calc_pane_g

0x5886,	// (0x0004cbcb) cell_calc_pane_t1

0xd46d,	// (0x000547b2) grid_highlight_pane_cp02_ParamLimits

0xd483,	// (0x000547c8) toolbar_button_pane_cp01_ParamLimits

0xd483,	// (0x000547c8) toolbar_button_pane_cp01

0xe166,	// (0x000554ab) temp_image_control_pane_ParamLimits

0xe166,	// (0x000554ab) temp_image_control_pane

0xf0f2,	// (0x00056437) main_mp3_pane

0x15aa,	// (0x000488ef) temp_image_control_pane_g1_ParamLimits

0x15aa,	// (0x000488ef) temp_image_control_pane_g1

0x15b8,	// (0x000488fd) temp_image_control_pane_g2_ParamLimits

0x15b8,	// (0x000488fd) temp_image_control_pane_g2

0x15ca,	// (0x0004890f) temp_image_control_pane_g3_ParamLimits

0x15ca,	// (0x0004890f) temp_image_control_pane_g3

0x8b40,	// (0x0004fe85) temp_image_control_pane_g4_ParamLimits

0x8b40,	// (0x0004fe85) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00056ad6) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00056ad6) temp_image_control_pane_g

0x15aa,	// (0x000488ef) main_mp3_pane_g1

0x8b51,	// (0x0004fe96) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00056adf) main_mp3_pane_g

0x160d,	// (0x00048952) main_mp3_pane_t1

0xd5cf,	// (0x00054914) main_camera_pane_g8_ParamLimits

0xd5cf,	// (0x00054914) main_camera_pane_g8

0x5f93,	// (0x0004d2d8) main_video_pane_g7_ParamLimits

0x5f93,	// (0x0004d2d8) main_video_pane_g7

0x862b,	// (0x0004f970) main_camera2_pane_t7_ParamLimits

0x862b,	// (0x0004f970) main_camera2_pane_t7

0xd71d,	// (0x00054a62) scroll_pane_cp025_ParamLimits

0xd71d,	// (0x00054a62) scroll_pane_cp025

0xd731,	// (0x00054a76) scroll_pane_cp026_ParamLimits

0xd731,	// (0x00054a76) scroll_pane_cp026

0xd740,	// (0x00054a85) wml_content_pane_ParamLimits

0x4b88,	// (0x0004becd) main_touch_calib_pane

0x8bf5,	// (0x0004ff3a) main_touch_calib_pane_g1

0x8c01,	// (0x0004ff46) main_touch_calib_pane_g2

0x8c0d,	// (0x0004ff52) main_touch_calib_pane_g3

0x8c19,	// (0x0004ff5e) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00056afd) main_touch_calib_pane_g

0x8c25,	// (0x0004ff6a) main_touch_calib_pane_t1

0x8c3c,	// (0x0004ff81) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x00056b06) main_touch_calib_pane_t

0xdddf,	// (0x00055124) mup_progress_pane_cp02

0xddfe,	// (0x00055143) navi_pane_g1

0xde60,	// (0x000551a5) navi_pane_mp_t3

0xf0f2,	// (0x00056437) main_mp3_pane_ParamLimits

0x8280,	// (0x0004f5c5) navi_pane_ParamLimits

0x15aa,	// (0x000488ef) main_mp3_pane_g1_ParamLimits

0x8b51,	// (0x0004fe96) main_mp3_pane_g2_ParamLimits

0x8b5d,	// (0x0004fea2) main_mp3_pane_g3_ParamLimits

0x8b5d,	// (0x0004fea2) main_mp3_pane_g3

0x8b69,	// (0x0004feae) main_mp3_pane_g4_ParamLimits

0x8b69,	// (0x0004feae) main_mp3_pane_g4

0x15da,	// (0x0004891f) main_mp3_pane_g5_ParamLimits

0x15da,	// (0x0004891f) main_mp3_pane_g5

0x15e8,	// (0x0004892d) main_mp3_pane_g6_ParamLimits

0x15e8,	// (0x0004892d) main_mp3_pane_g6

0x15f5,	// (0x0004893a) main_mp3_pane_g7_ParamLimits

0x15f5,	// (0x0004893a) main_mp3_pane_g7

0x1601,	// (0x00048946) main_mp3_pane_g8_ParamLimits

0x1601,	// (0x00048946) main_mp3_pane_g8

0xf79a,	// (0x00056adf) main_mp3_pane_g_ParamLimits

0x8b75,	// (0x0004feba) main_mp3_pane_t2

0x8b85,	// (0x0004feca) main_mp3_pane_t3

0x161b,	// (0x00048960) main_mp3_pane_t4

0x1629,	// (0x0004896e) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00056af0) main_mp3_pane_t

0x1637,	// (0x0004897c) mup_progress_pane_cp01

0x0976,	// (0x00047cbb) aid_zoom_text_secondary2

0x13f6,	// (0x0004873b) list_cale_ev2_pane

0x13fe,	// (0x00048743) scroll_pane_cp023_ParamLimits

0x8c8f,	// (0x0004ffd4) field_cale_ev2_pane_ParamLimits

0x8c8f,	// (0x0004ffd4) field_cale_ev2_pane

0x163f,	// (0x00048984) field_cale_ev2_pane_g1_ParamLimits

0x163f,	// (0x00048984) field_cale_ev2_pane_g1

0x164b,	// (0x00048990) field_cale_ev2_pane_g2_ParamLimits

0x164b,	// (0x00048990) field_cale_ev2_pane_g2

0x1663,	// (0x000489a8) field_cale_ev2_pane_g3_ParamLimits

0x1663,	// (0x000489a8) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00056b11) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00056b11) field_cale_ev2_pane_g

0x8cc3,	// (0x00050008) field_cale_ev2_pane_t1_ParamLimits

0x8cc3,	// (0x00050008) field_cale_ev2_pane_t1

0x8cda,	// (0x0005001f) field_cale_ev2_pane_t2_ParamLimits

0x8cda,	// (0x0005001f) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00056b1a) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00056b1a) field_cale_ev2_pane_t

0x7a8f,	// (0x0004edd4) main_postcard_pane_g5_ParamLimits

0x7a8f,	// (0x0004edd4) main_postcard_pane_g5

0x7a9d,	// (0x0004ede2) main_postcard_pane_g6_ParamLimits

0x7a9d,	// (0x0004ede2) main_postcard_pane_g6

0x5dd3,	// (0x0004d118) camera2_autofocus_pane_cp_ParamLimits

0x5dd3,	// (0x0004d118) camera2_autofocus_pane_cp

0xf0f2,	// (0x00056437) main_mup3_pane

0x8d0f,	// (0x00050054) main_mup3_pane_g1_ParamLimits

0x8d0f,	// (0x00050054) main_mup3_pane_g1

0x8d30,	// (0x00050075) main_mup3_pane_g2_ParamLimits

0x8d30,	// (0x00050075) main_mup3_pane_g2

0x8dab,	// (0x000500f0) main_mup3_pane_g3_ParamLimits

0x8dab,	// (0x000500f0) main_mup3_pane_g3

0x8dea,	// (0x0005012f) main_mup3_pane_g4_ParamLimits

0x8dea,	// (0x0005012f) main_mup3_pane_g4

0x8e29,	// (0x0005016e) main_mup3_pane_g5_ParamLimits

0x8e29,	// (0x0005016e) main_mup3_pane_g5

0x8e6a,	// (0x000501af) main_mup3_pane_g6_ParamLimits

0x8e6a,	// (0x000501af) main_mup3_pane_g6

0x1687,	// (0x000489cc) main_mup3_pane_g7_ParamLimits

0x1687,	// (0x000489cc) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00056b2a) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00056b2a) main_mup3_pane_g

0x8edc,	// (0x00050221) main_mup3_pane_t1_ParamLimits

0x8edc,	// (0x00050221) main_mup3_pane_t1

0x8f4b,	// (0x00050290) main_mup3_pane_t2_ParamLimits

0x8f4b,	// (0x00050290) main_mup3_pane_t2

0x9014,	// (0x00050359) main_mup3_pane_t4_ParamLimits

0x9014,	// (0x00050359) main_mup3_pane_t4

0x9066,	// (0x000503ab) main_mup3_pane_t5_ParamLimits

0x9066,	// (0x000503ab) main_mup3_pane_t5

0x910e,	// (0x00050453) main_mup3_pane_t6_ParamLimits

0x910e,	// (0x00050453) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00056b3b) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00056b3b) main_mup3_pane_t

0x91b6,	// (0x000504fb) mup3_progress_pane_ParamLimits

0x91b6,	// (0x000504fb) mup3_progress_pane

0x921b,	// (0x00050560) popup_mup3_control_window_ParamLimits

0x921b,	// (0x00050560) popup_mup3_control_window

0x1695,	// (0x000489da) popup_mup3_text_window

0x9234,	// (0x00050579) mup3_progress_pane_t1

0x924b,	// (0x00050590) mup3_progress_pane_t2

0x169d,	// (0x000489e2) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00056b48) mup3_progress_pane_t

0x16b4,	// (0x000489f9) mup_progress_pane_cp03

0x4b88,	// (0x0004becd) bg_tb_trans_pane_cp04

0x9262,	// (0x000505a7) mup3_volume_pane

0x926a,	// (0x000505af) popup_mup3_control_window_g1

0x9273,	// (0x000505b8) mup3_volume_pane_g1

0x927c,	// (0x000505c1) mup3_volume_pane_g2

0x9285,	// (0x000505ca) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00056b4f) mup3_volume_pane_g

0x4b88,	// (0x0004becd) bg_tb_trans_pane_cp03

0x16c4,	// (0x00048a09) popup_mup3_text_window_g1

0x16cc,	// (0x00048a11) popup_mup3_text_window_t1

0xd456,	// (0x0005479b) list_calc_item_pane_g1_ParamLimits

0x1080,	// (0x000483c5) mup_volume_pane_cp_g1

0x8c53,	// (0x0004ff98) main_touch_calib_pane_t3

0x8c67,	// (0x0004ffac) main_touch_calib_pane_t4

0x8c7b,	// (0x0004ffc0) main_touch_calib_pane_t5

0x4b92,	// (0x0004bed7) aid_cell_size_toolbar2

0x4b9a,	// (0x0004bedf) aid_popup3_width_pane

0x096e,	// (0x00047cb3) aid_zoom_text_msg_primary

0x5dbd,	// (0x0004d102) vorec_t7

0xd41a,	// (0x0005475f) bg_calc_paper_pane_g1_ParamLimits

0xd426,	// (0x0005476b) bg_calc_paper_pane_g2_ParamLimits

0xd432,	// (0x00054777) bg_calc_paper_pane_g3_ParamLimits

0xd43e,	// (0x00054783) bg_calc_paper_pane_g4_ParamLimits

0xd44a,	// (0x0005478f) bg_calc_paper_pane_g5_ParamLimits

0x57d5,	// (0x0004cb1a) bg_calc_paper_pane_g6_ParamLimits

0x57e6,	// (0x0004cb2b) bg_calc_paper_pane_g7_ParamLimits

0x57f7,	// (0x0004cb3c) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00056502) bg_calc_paper_pane_g_ParamLimits

0x5808,	// (0x0004cb4d) calc_bg_paper_pane_g9_ParamLimits

0x5ebc,	// (0x0004d201) image_qvga_pane_ParamLimits

0x5ebc,	// (0x0004d201) image_qvga_pane

0xd2ff,	// (0x00054644) bg_popup_sub_pane_cp04_ParamLimits

0xe09d,	// (0x000553e2) popup_mup_playback_window_g1_ParamLimits

0xe0a9,	// (0x000553ee) popup_mup_playback_window_t1_ParamLimits

0xe0be,	// (0x00055403) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0005688e) popup_mup_playback_window_t_ParamLimits

0x875a,	// (0x0004fa9f) main_mup2_pane_g3_ParamLimits

0x875a,	// (0x0004fa9f) main_mup2_pane_g3

0x6167,	// (0x0004d4ac) popup_toolbar_window_cp04

0xe4b3,	// (0x000557f8) popup_call2_audio_second_window_g3_ParamLimits

0xe4b3,	// (0x000557f8) popup_call2_audio_second_window_g3

0xe8bd,	// (0x00055c02) popup_call2_audio_first_window_g4_ParamLimits

0xe8bd,	// (0x00055c02) popup_call2_audio_first_window_g4

0xef3c,	// (0x00056281) popup_call2_audio_in_window_g4_ParamLimits

0xef3c,	// (0x00056281) popup_call2_audio_in_window_g4

0x7bab,	// (0x0004eef0) aid_area_sk_bg_cut_ParamLimits

0x7bab,	// (0x0004eef0) aid_area_sk_bg_cut

0xe0d3,	// (0x00055418) aid_area_sk_bg_cut_2_ParamLimits

0xe0d3,	// (0x00055418) aid_area_sk_bg_cut_2

0x8ae6,	// (0x0004fe2b) aid_placing_details_win

0x8aee,	// (0x0004fe33) aid_placing_details_win_2

0x14ec,	// (0x00048831) camera2_autofocus_pane_g1_ParamLimits

0x4ded,	// (0x0004c132) popup_fixed_preview_cale_window_ParamLimits

0x4ded,	// (0x0004c132) popup_fixed_preview_cale_window

0xdeaf,	// (0x000551f4) navi_slider_pane_g3

0xdeb8,	// (0x000551fd) navi_slider_pane_g4

0xdec1,	// (0x00055206) navi_slider_pane_g5

0xdeaf,	// (0x000551f4) navi_slider_pane_g6

0x73ec,	// (0x0004e731) navi_slider_pane_g7

0xdfd4,	// (0x00055319) mup_scale_pane_g3

0xdfdd,	// (0x00055322) mup_scale_pane_g4

0xdfe6,	// (0x0005532b) mup_scale_pane_g5

0x782b,	// (0x0004eb70) mup_scale_pane_g6

0x7834,	// (0x0004eb79) mup_scale_pane_g7

0xdeaf,	// (0x000551f4) cams2_slider_pane_g3

0x1135,	// (0x0004847a) cams2_slider_pane_g4

0x8a3e,	// (0x0004fd83) cams2_slider_pane_g5

0xdeaf,	// (0x000551f4) cams2_slider_pane_g6

0x8a46,	// (0x0004fd8b) cams2_slider_pane_g7

0x1373,	// (0x000486b8) camera2_autofocus_pane_cp_g1

0x16da,	// (0x00048a1f) bg_popup_preview_window_pane_cp02_ParamLimits

0x16da,	// (0x00048a1f) bg_popup_preview_window_pane_cp02

0x16e6,	// (0x00048a2b) list_fp_cale_pane_ParamLimits

0x16e6,	// (0x00048a2b) list_fp_cale_pane

0x16f2,	// (0x00048a37) popup_fixed_preview_cale_window_t1_ParamLimits

0x16f2,	// (0x00048a37) popup_fixed_preview_cale_window_t1

0x928e,	// (0x000505d3) popup_fixed_preview_cale_window_t2_ParamLimits

0x928e,	// (0x000505d3) popup_fixed_preview_cale_window_t2

0x92a3,	// (0x000505e8) popup_fixed_preview_cale_window_t3_ParamLimits

0x92a3,	// (0x000505e8) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00056b56) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00056b56) popup_fixed_preview_cale_window_t

0x92b8,	// (0x000505fd) list_single_fp_cale_pane_ParamLimits

0x92b8,	// (0x000505fd) list_single_fp_cale_pane

0x1710,	// (0x00048a55) list_single_fp_cale_pane_g1_ParamLimits

0x1710,	// (0x00048a55) list_single_fp_cale_pane_g1

0x171c,	// (0x00048a61) list_single_fp_cale_pane_g2_ParamLimits

0x171c,	// (0x00048a61) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00056b5d) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00056b5d) list_single_fp_cale_pane_g

0x1735,	// (0x00048a7a) list_single_fp_cale_pane_t1_ParamLimits

0x1735,	// (0x00048a7a) list_single_fp_cale_pane_t1

0x1747,	// (0x00048a8c) list_single_fp_cale_pane_t2_ParamLimits

0x1747,	// (0x00048a8c) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00056b64) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00056b64) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4b88,	// (0x0004becd) main_dialer_pane

0x92cc,	// (0x00050611) aid_cell_size_keypad

0x92d6,	// (0x0005061b) dialer_ne_pane

0x92e0,	// (0x00050625) grid_dialer_command_1_pane

0x92e8,	// (0x0005062d) grid_dialer_command_2_pane

0x92f0,	// (0x00050635) grid_dialer_keypad_pane

0x9304,	// (0x00050649) bg_popup_call_pane_cp06_ParamLimits

0x9304,	// (0x00050649) bg_popup_call_pane_cp06

0x9310,	// (0x00050655) dialer_ne_clear_pane_ParamLimits

0x9310,	// (0x00050655) dialer_ne_clear_pane

0x177a,	// (0x00048abf) dialer_ne_pane_g1

0x1782,	// (0x00048ac7) dialer_ne_pane_t1_ParamLimits

0x1782,	// (0x00048ac7) dialer_ne_pane_t1

0x931c,	// (0x00050661) dialer_ne_pane_t2_ParamLimits

0x931c,	// (0x00050661) dialer_ne_pane_t2

0x9339,	// (0x0005067e) dialer_ne_pane_t3_ParamLimits

0x9339,	// (0x0005067e) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x00056b69) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x00056b69) dialer_ne_pane_t

0x935d,	// (0x000506a2) dialer_ne_pane_t3_copy1_ParamLimits

0x935d,	// (0x000506a2) dialer_ne_pane_t3_copy1

0x9381,	// (0x000506c6) cell_dialer_keypad_pane_ParamLimits

0x9381,	// (0x000506c6) cell_dialer_keypad_pane

0x9398,	// (0x000506dd) cell_dialer_command_1_pane_ParamLimits

0x9398,	// (0x000506dd) cell_dialer_command_1_pane

0x93ae,	// (0x000506f3) cell_dialer_command_2_pane_ParamLimits

0x93ae,	// (0x000506f3) cell_dialer_command_2_pane

0x1794,	// (0x00048ad9) bg_button_pane_cp02_ParamLimits

0x1794,	// (0x00048ad9) bg_button_pane_cp02

0x93bd,	// (0x00050702) cell_dialer_keypad_pane_g1_ParamLimits

0x93bd,	// (0x00050702) cell_dialer_keypad_pane_g1

0x1794,	// (0x00048ad9) bg_button_pane_cp03_ParamLimits

0x1794,	// (0x00048ad9) bg_button_pane_cp03

0x93d2,	// (0x00050717) cell_dialer_command_1_pane_g1_ParamLimits

0x93d2,	// (0x00050717) cell_dialer_command_1_pane_g1

0x17a0,	// (0x00048ae5) bg_button_pane_cp04

0x93e5,	// (0x0005072a) cell_dialer_command_2_pane_g1

0xde9e,	// (0x000551e3) bg_button_pane_cp06

0x17a8,	// (0x00048aed) dialer_ne_clear_pane_g1

0x732f,	// (0x0004e674) navi_pane_g2

0x735d,	// (0x0004e6a2) navi_pane_g3

0x0002,

0xf44c,	// (0x00056791) navi_pane_g

0x7388,	// (0x0004e6cd) navi_pane_mv_g2

0x73af,	// (0x0004e6f4) navi_pane_mv_g5

0x73b7,	// (0x0004e6fc) navi_pane_mv_t1

0xd40e,	// (0x00054753) main_clock2_pane

0x9413,	// (0x00050758) main_clock2_list_pane_ParamLimits

0x9413,	// (0x00050758) main_clock2_list_pane

0x943b,	// (0x00050780) main_clock2_pane_t1_ParamLimits

0x943b,	// (0x00050780) main_clock2_pane_t1

0x946b,	// (0x000507b0) main_clock2_pane_t2_ParamLimits

0x946b,	// (0x000507b0) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00056b70) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00056b70) main_clock2_pane_t

0x94d2,	// (0x00050817) popup_clock_analogue_window_cp03_ParamLimits

0x94d2,	// (0x00050817) popup_clock_analogue_window_cp03

0x94f2,	// (0x00050837) popup_clock_digital_window_cp02_ParamLimits

0x94f2,	// (0x00050837) popup_clock_digital_window_cp02

0x9567,	// (0x000508ac) main_clock2_list_single_pane_ParamLimits

0x9567,	// (0x000508ac) main_clock2_list_single_pane

0xde9e,	// (0x000551e3) list_highlight_pane_cp05

0x17b0,	// (0x00048af5) main_clock2_list_single_pane_t1

0x6167,	// (0x0004d4ac) popup_toolbar_window_cp04_ParamLimits

0x8b10,	// (0x0004fe55) camera2_autofocus_pane_g2_ParamLimits

0x8b10,	// (0x0004fe55) camera2_autofocus_pane_g2

0x8b1c,	// (0x0004fe61) camera2_autofocus_pane_g3_ParamLimits

0x8b1c,	// (0x0004fe61) camera2_autofocus_pane_g3

0x8b28,	// (0x0004fe6d) camera2_autofocus_pane_g4_ParamLimits

0x8b28,	// (0x0004fe6d) camera2_autofocus_pane_g4

0x8b34,	// (0x0004fe79) camera2_autofocus_pane_g5_ParamLimits

0x8b34,	// (0x0004fe79) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00056ab9) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00056ab9) camera2_autofocus_pane_g

0x8cef,	// (0x00050034) camera2_autofocus_pane_cp_g2

0x8cf7,	// (0x0005003c) camera2_autofocus_pane_cp_g3

0x8cff,	// (0x00050044) camera2_autofocus_pane_cp_g4

0x8d07,	// (0x0005004c) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00056b1f) camera2_autofocus_pane_cp_g

0x92fc,	// (0x00050641) popup_dialer_spcha_window

0x4b88,	// (0x0004becd) bg_popup_sub_pane_cp07

0x17be,	// (0x00048b03) list_spcha_pane

0x17c6,	// (0x00048b0b) list_single_spcha_pane_ParamLimits

0x17c6,	// (0x00048b0b) list_single_spcha_pane

0x4b88,	// (0x0004becd) list_highlight_pane_cp06

0x17d7,	// (0x00048b1c) list_single_spcha_pane_t1

0xece6,	// (0x0005602b) popup_call2_audio_out_window_g4_ParamLimits

0xece6,	// (0x0005602b) popup_call2_audio_out_window_g4

0x4b88,	// (0x0004becd) main_imed2_pane

0x0e93,	// (0x000481d8) popup_imed_adjust2_window

0x81d5,	// (0x0004f51a) popup_imed_trans_window_ParamLimits

0x81d5,	// (0x0004f51a) popup_imed_trans_window

0x11af,	// (0x000484f4) popup_blid_sat_info2_window_t1

0x11bd,	// (0x00048502) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00056a4e) popup_blid_sat_info2_window_t

0x9611,	// (0x00050956) aid_size_cell_colour_35

0x962b,	// (0x00050970) aid_size_cell_colour_112

0x9642,	// (0x00050987) aid_size_cell_effect

0xf0f2,	// (0x00056437) bg_tb_trans_pane_cp02

0xf100,	// (0x00056445) heading_imed_pane

0x965c,	// (0x000509a1) listscroll_imed_pane

0x17e5,	// (0x00048b2a) heading_imed_pane_g1

0x17ed,	// (0x00048b32) heading_imed_pane_t1

0x17fb,	// (0x00048b40) grid_imed_colour_35_pane_ParamLimits

0x17fb,	// (0x00048b40) grid_imed_colour_35_pane

0x9668,	// (0x000509ad) grid_imed_effect_pane

0x1816,	// (0x00048b5b) list_imed_aspect_pane

0x9678,	// (0x000509bd) scroll_pane_cp027_ParamLimits

0x9678,	// (0x000509bd) scroll_pane_cp027

0x9684,	// (0x000509c9) cell_imed_effect_pane_ParamLimits

0x9684,	// (0x000509c9) cell_imed_effect_pane

0x181e,	// (0x00048b63) cell_imed_colour_pane_ParamLimits

0x181e,	// (0x00048b63) cell_imed_colour_pane

0x1860,	// (0x00048ba5) cell_imed_colour_pane_g1_ParamLimits

0x1860,	// (0x00048ba5) cell_imed_colour_pane_g1

0x1871,	// (0x00048bb6) hgihlgiht_grid_pane_cp016_ParamLimits

0x1871,	// (0x00048bb6) hgihlgiht_grid_pane_cp016

0x969c,	// (0x000509e1) cell_imed_effect_pane_g1

0x96a4,	// (0x000509e9) grid_highlight_pane_cp017

0xf10c,	// (0x00056451) list_imed_single_pane_ParamLimits

0xf10c,	// (0x00056451) list_imed_single_pane

0x4b88,	// (0x0004becd) list_highlight_pane_cp07

0x1882,	// (0x00048bc7) list_imed_aspect_pane_comp1_t1

0x0e6b,	// (0x000481b0) bg_tb_trans_pane_cp05

0x18a4,	// (0x00048be9) popup_imed_adjust2_window_g1

0x18cb,	// (0x00048c10) popup_imed_adjust2_window_t1

0x18e3,	// (0x00048c28) slider_imed_adjust_pane

0x18f7,	// (0x00048c3c) slider_imed_adjust_pane_g1

0x1907,	// (0x00048c4c) slider_imed_adjust_pane_g2

0x1917,	// (0x00048c5c) slider_imed_adjust_pane_g3

0x1928,	// (0x00048c6d) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00056b8d) slider_imed_adjust_pane_g

0x96ad,	// (0x000509f2) aid_size_cell_clipart2

0x96b9,	// (0x000509fe) grid_imed_clipart_pane

0x1939,	// (0x00048c7e) scroll_pane_cp031

0x96c3,	// (0x00050a08) cell_imed_clipart_pane_ParamLimits

0x96c3,	// (0x00050a08) cell_imed_clipart_pane

0x96ea,	// (0x00050a2f) cell_imed_clipart_pane_g1

0x4b88,	// (0x0004becd) grid_highlight_pane_cp014

0x941f,	// (0x00050764) main_clock2_pane_g1_ParamLimits

0x941f,	// (0x00050764) main_clock2_pane_g1

0x950e,	// (0x00050853) aid_call2_pane_cp10

0x9520,	// (0x00050865) aid_call_pane_cp10

0xddd3,	// (0x00055118) popup_clock_analogue_window_cp10_g1

0xddd3,	// (0x00055118) popup_clock_analogue_window_cp10_g2

0x9532,	// (0x00050877) popup_clock_analogue_window_cp10_g3

0x9532,	// (0x00050877) popup_clock_analogue_window_cp10_g4

0xddd3,	// (0x00055118) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x00056b7b) popup_clock_analogue_window_cp10_g

0x9548,	// (0x0005088d) popup_clock_analogue_window_cp10_t1

0x9579,	// (0x000508be) clock_digital_number_pane_cp10_ParamLimits

0x9579,	// (0x000508be) clock_digital_number_pane_cp10

0x9591,	// (0x000508d6) clock_digital_number_pane_cp11_ParamLimits

0x9591,	// (0x000508d6) clock_digital_number_pane_cp11

0x95a9,	// (0x000508ee) clock_digital_number_pane_cp12_ParamLimits

0x95a9,	// (0x000508ee) clock_digital_number_pane_cp12

0x95c1,	// (0x00050906) clock_digital_number_pane_cp13_ParamLimits

0x95c1,	// (0x00050906) clock_digital_number_pane_cp13

0x95d9,	// (0x0005091e) clock_digital_separator_pane_cp10_ParamLimits

0x95d9,	// (0x0005091e) clock_digital_separator_pane_cp10

0x95f1,	// (0x00050936) popup_clock_digital_window_cp02_t1_ParamLimits

0x95f1,	// (0x00050936) popup_clock_digital_window_cp02_t1

0xd2f7,	// (0x0005463c) clock_digital_number_pane_cp10_g1

0xd2f7,	// (0x0005463c) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x00056b96) clock_digital_number_pane_cp10_g

0xd2f7,	// (0x0005463c) clock_digital_separator_pane_cp10_g1

0xd2f7,	// (0x0005463c) clock_digital_separator_pane_g2_cp10

0xde6e,	// (0x000551b3) navi_pane_vded_g4

0xde77,	// (0x000551bc) navi_pane_vded_g5

0xde80,	// (0x000551c5) navi_pane_vded_t1

0x4b88,	// (0x0004becd) main_vded_pane

0x96f3,	// (0x00050a38) main_vded_pane_g1

0x96ff,	// (0x00050a44) main_vded_pane_g2

0x9709,	// (0x00050a4e) main_vded_pane_g3

0x0002,

0xf856,	// (0x00056b9b) main_vded_pane_g

0x9713,	// (0x00050a58) main_vded_pane_t1

0x9721,	// (0x00050a66) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00056ba2) main_vded_pane_t

0x972f,	// (0x00050a74) vded_slider_pane

0x9739,	// (0x00050a7e) vded_video_pane

0x1941,	// (0x00048c86) vded_video_pane_g1

0x9743,	// (0x00050a88) vded_video_pane_g2

0x1373,	// (0x000486b8) vded_video_pane_g3

0x0002,

0xf862,	// (0x00056ba7) vded_video_pane_g

0x194b,	// (0x00048c90) vded_slider_pane_g1

0x1080,	// (0x000483c5) vded_slider_pane_g2

0x1954,	// (0x00048c99) vded_slider_pane_g3

0x195d,	// (0x00048ca2) vded_slider_pane_g4

0x1966,	// (0x00048cab) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00056bae) vded_slider_pane_g

0x920d,	// (0x00050552) mup3_rocker_pane_ParamLimits

0x920d,	// (0x00050552) mup3_rocker_pane

0x974c,	// (0x00050a91) mup3_control_keys_pane_g1

0x9754,	// (0x00050a99) mup3_control_keys_pane_g2

0x975c,	// (0x00050aa1) mup3_control_keys_pane_g3

0x9764,	// (0x00050aa9) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x00056bb9) mup3_control_keys_pane_g

0x4e15,	// (0x0004c15a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4e15,	// (0x0004c15a) popup_toolbar2_fixed_window_cp01

0x9227,	// (0x0005056c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9227,	// (0x0005056c) popup_toolbar2_fixed_window_cp02

0xe625,	// (0x0005596a) popup_call2_audio_second_window_t4_ParamLimits

0xe625,	// (0x0005596a) popup_call2_audio_second_window_t4

0xeb53,	// (0x00055e98) popup_call2_audio_first_window_t6_ParamLimits

0xeb53,	// (0x00055e98) popup_call2_audio_first_window_t6

0xede9,	// (0x0005612e) popup_call2_audio_out_window_t6_ParamLimits

0xede9,	// (0x0005612e) popup_call2_audio_out_window_t6

0x4b88,	// (0x0004becd) main_vitu_pane

0x9774,	// (0x00050ab9) aid_size_cell_itu_ParamLimits

0x9774,	// (0x00050ab9) aid_size_cell_itu

0x1d8e,	// (0x000490d3) bg_popup_window_pane_cp08_ParamLimits

0x1d8e,	// (0x000490d3) bg_popup_window_pane_cp08

0x9782,	// (0x00050ac7) field_vitu_entry_pane_ParamLimits

0x9782,	// (0x00050ac7) field_vitu_entry_pane

0x9791,	// (0x00050ad6) grid_vitu_function_pane_ParamLimits

0x9791,	// (0x00050ad6) grid_vitu_function_pane

0x97a1,	// (0x00050ae6) grid_vitu_itu_pane_ParamLimits

0x97a1,	// (0x00050ae6) grid_vitu_itu_pane

0x97b1,	// (0x00050af6) cell_vitu_itu_pane_ParamLimits

0x97b1,	// (0x00050af6) cell_vitu_itu_pane

0x97c6,	// (0x00050b0b) cell_vitu_function_pane_ParamLimits

0x97c6,	// (0x00050b0b) cell_vitu_function_pane

0xf0f2,	// (0x00056437) bg_popup_sub_pane_cp08_ParamLimits

0xf0f2,	// (0x00056437) bg_popup_sub_pane_cp08

0x97da,	// (0x00050b1f) field_vitu_entry_pane_t1_ParamLimits

0x97da,	// (0x00050b1f) field_vitu_entry_pane_t1

0x1987,	// (0x00048ccc) field_vitu_entry_pane_t2_ParamLimits

0x1987,	// (0x00048ccc) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x00056bc7) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x00056bc7) field_vitu_entry_pane_t

0x19a4,	// (0x00048ce9) bg_button_pane_cp05_ParamLimits

0x19a4,	// (0x00048ce9) bg_button_pane_cp05

0x97f7,	// (0x00050b3c) cell_vitu_itu_pane_g1

0x980f,	// (0x00050b54) cell_vitu_itu_pane_t1_ParamLimits

0x980f,	// (0x00050b54) cell_vitu_itu_pane_t1

0x9821,	// (0x00050b66) cell_vitu_itu_pane_t2_ParamLimits

0x9821,	// (0x00050b66) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00056bcc) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00056bcc) cell_vitu_itu_pane_t

0x19b2,	// (0x00048cf7) bg_button_pane_cp07

0x9856,	// (0x00050b9b) cell_vitu_function_pane_g1

0x5673,	// (0x0004c9b8) main_calc_pane_g1

0x4bce,	// (0x0004bf13) aid_visual_content_pane

0x4b88,	// (0x0004becd) main_vradio_pane

0x985f,	// (0x00050ba4) main_vradio_pane_g1_ParamLimits

0x985f,	// (0x00050ba4) main_vradio_pane_g1

0x19bc,	// (0x00048d01) main_vradio_pane_g2_ParamLimits

0x19bc,	// (0x00048d01) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00056bd3) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00056bd3) main_vradio_pane_g

0x986f,	// (0x00050bb4) main_vradio_pane_t1_ParamLimits

0x986f,	// (0x00050bb4) main_vradio_pane_t1

0x9881,	// (0x00050bc6) main_vradio_pane_t2_ParamLimits

0x9881,	// (0x00050bc6) main_vradio_pane_t2

0x19c9,	// (0x00048d0e) main_vradio_pane_t3_ParamLimits

0x19c9,	// (0x00048d0e) main_vradio_pane_t3

0x0002,

0xf893,	// (0x00056bd8) main_vradio_pane_t_ParamLimits

0xf893,	// (0x00056bd8) main_vradio_pane_t

0x9893,	// (0x00050bd8) vradio_rocker_control_pane_ParamLimits

0x9893,	// (0x00050bd8) vradio_rocker_control_pane

0x989f,	// (0x00050be4) vradio_station_info_pane_ParamLimits

0x989f,	// (0x00050be4) vradio_station_info_pane

0x19dd,	// (0x00048d22) vradio_frequency_info_pane_ParamLimits

0x19dd,	// (0x00048d22) vradio_frequency_info_pane

0x1373,	// (0x000486b8) vradio_station_info_pane_g1

0x19ec,	// (0x00048d31) vradio_station_info_pane_t1_ParamLimits

0x19ec,	// (0x00048d31) vradio_station_info_pane_t1

0x1a0e,	// (0x00048d53) vradio_station_info_pane_t2_ParamLimits

0x1a0e,	// (0x00048d53) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00056bdf) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00056bdf) vradio_station_info_pane_t

0x1a20,	// (0x00048d65) vradio_tuning_pane

0x1a28,	// (0x00048d6d) vradio_rocker_control_pane_g1

0x1a30,	// (0x00048d75) vradio_rocker_control_pane_g2

0x1a38,	// (0x00048d7d) vradio_rocker_control_pane_g3

0x1a40,	// (0x00048d85) vradio_rocker_control_pane_g4

0x1a48,	// (0x00048d8d) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00056be4) vradio_rocker_control_pane_g

0x98ae,	// (0x00050bf3) vradio_frequency_info_pane_g1

0x1a50,	// (0x00048d95) vradio_frequency_info_pane_t1_ParamLimits

0x1a50,	// (0x00048d95) vradio_frequency_info_pane_t1

0x98b8,	// (0x00050bfd) vradio_tuning_pane_g1

0x98c1,	// (0x00050c06) vradio_tuning_pane_t1

0x4c17,	// (0x0004bf5c) area_side_right_pane_ParamLimits

0x4c17,	// (0x0004bf5c) area_side_right_pane

0x0e32,	// (0x00048177) status_small_pane_g1

0x0e3a,	// (0x0004817f) status_small_pane_g2

0x0e43,	// (0x00048188) status_small_pane_g3

0x0e4c,	// (0x00048191) status_small_pane_g4

0x0003,

0xf65f,	// (0x000569a4) status_small_pane_g

0x0e55,	// (0x0004819a) status_small_pane_t1

0x4b88,	// (0x0004becd) main_video3_pane

0x1a64,	// (0x00048da9) cams_zoom_vslider_pane

0x1a6c,	// (0x00048db1) image3_wide_pane_ParamLimits

0x1a6c,	// (0x00048db1) image3_wide_pane

0x1a86,	// (0x00048dcb) image3_wide_small_pane

0x1a92,	// (0x00048dd7) main_video3_pane_g1_ParamLimits

0x1a92,	// (0x00048dd7) main_video3_pane_g1

0x1aae,	// (0x00048df3) main_video3_pane_g2_ParamLimits

0x1aae,	// (0x00048df3) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00056bef) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00056bef) main_video3_pane_g

0x1aca,	// (0x00048e0f) main_video3_pane_t1_ParamLimits

0x1aca,	// (0x00048e0f) main_video3_pane_t1

0x1af5,	// (0x00048e3a) main_video3_pane_t2_ParamLimits

0x1af5,	// (0x00048e3a) main_video3_pane_t2

0x1b20,	// (0x00048e65) main_video3_pane_t3_ParamLimits

0x1b20,	// (0x00048e65) main_video3_pane_t3

0x0002,

0xf8af,	// (0x00056bf4) main_video3_pane_t_ParamLimits

0xf8af,	// (0x00056bf4) main_video3_pane_t

0x1b4d,	// (0x00048e92) cams_zoom_vslider_pane_g1

0x1b56,	// (0x00048e9b) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00056bfb) cams_zoom_vslider_pane_g

0x1b5e,	// (0x00048ea3) small_slider_vertical_pane

0x1373,	// (0x000486b8) small_slider_vertical_pane_g1

0x1373,	// (0x000486b8) small_slider_vertical_pane_g2

0x1b66,	// (0x00048eab) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00056c00) small_slider_vertical_pane_g

0x4b88,	// (0x0004becd) main_hwr_training_pane

0x1b6f,	// (0x00048eb4) hwr_training_instruct_pane_ParamLimits

0x1b6f,	// (0x00048eb4) hwr_training_instruct_pane

0x98d0,	// (0x00050c15) hwr_training_navi_pane_ParamLimits

0x98d0,	// (0x00050c15) hwr_training_navi_pane

0x98ea,	// (0x00050c2f) hwr_training_write_pane_ParamLimits

0x98ea,	// (0x00050c2f) hwr_training_write_pane

0x4b88,	// (0x0004becd) bg_frame_shadow_pane

0x1ba6,	// (0x00048eeb) hwr_training_write_pane_g1

0x1bae,	// (0x00048ef3) hwr_training_write_pane_g2

0x1bb6,	// (0x00048efb) hwr_training_write_pane_g3

0x1bbe,	// (0x00048f03) hwr_training_write_pane_g4

0x1bc6,	// (0x00048f0b) hwr_training_write_pane_g5

0x1bce,	// (0x00048f13) hwr_training_write_pane_g6

0x1bd6,	// (0x00048f1b) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x00056c07) hwr_training_write_pane_g

0x9922,	// (0x00050c67) hwr_training_navi_pane_g1_ParamLimits

0x9922,	// (0x00050c67) hwr_training_navi_pane_g1

0x9934,	// (0x00050c79) hwr_training_navi_pane_g2_ParamLimits

0x9934,	// (0x00050c79) hwr_training_navi_pane_g2

0x9946,	// (0x00050c8b) hwr_training_navi_pane_g3_ParamLimits

0x9946,	// (0x00050c8b) hwr_training_navi_pane_g3

0x9956,	// (0x00050c9b) hwr_training_navi_pane_g4_ParamLimits

0x9956,	// (0x00050c9b) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x00056c16) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x00056c16) hwr_training_navi_pane_g

0x9970,	// (0x00050cb5) hwr_training_navi_pane_t1

0x997e,	// (0x00050cc3) list_single_hwr_training_instruct_pane_ParamLimits

0x997e,	// (0x00050cc3) list_single_hwr_training_instruct_pane

0x1bde,	// (0x00048f23) list_single_hwr_training_instruct_pane_t1

0x12b3,	// (0x000485f8) bg_frame_shadow_pane_g1

0x1bed,	// (0x00048f32) bg_frame_shadow_pane_g2

0x1bf5,	// (0x00048f3a) bg_frame_shadow_pane_g3

0x1bfd,	// (0x00048f42) bg_frame_shadow_pane_g4

0x1c05,	// (0x00048f4a) bg_frame_shadow_pane_g5

0x1c0d,	// (0x00048f52) bg_frame_shadow_pane_g6

0x1c15,	// (0x00048f5a) bg_frame_shadow_pane_g7

0xd4d9,	// (0x0005481e) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00056c21) bg_frame_shadow_pane_g

0x4b88,	// (0x0004becd) main_video_tele_dialer_pane

0x99b4,	// (0x00050cf9) aid_size_cell_video_keypad_ParamLimits

0x99b4,	// (0x00050cf9) aid_size_cell_video_keypad

0x99c4,	// (0x00050d09) grid_video_dialer_keypad_pane_ParamLimits

0x99c4,	// (0x00050d09) grid_video_dialer_keypad_pane

0x99f8,	// (0x00050d3d) video_down_pane_cp_ParamLimits

0x99f8,	// (0x00050d3d) video_down_pane_cp

0x9a22,	// (0x00050d67) cell_video_dialer_keypad_pane_ParamLimits

0x9a22,	// (0x00050d67) cell_video_dialer_keypad_pane

0x1c1d,	// (0x00048f62) bg_button_pane_cp08_ParamLimits

0x1c1d,	// (0x00048f62) bg_button_pane_cp08

0x9a37,	// (0x00050d7c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9a37,	// (0x00050d7c) cell_video_dialer_keypad_pane_g1

0x9201,	// (0x00050546) mup3_rocker2_pane_ParamLimits

0x9201,	// (0x00050546) mup3_rocker2_pane

0x1373,	// (0x000486b8) mup3_rocker2_pane_g1

0x8163,	// (0x0004f4a8) main_dialer2_pane

0x4b88,	// (0x0004becd) main_mp4_pane

0x9a76,	// (0x00050dbb) main_mp4_pane_g1_ParamLimits

0x9a76,	// (0x00050dbb) main_mp4_pane_g1

0x9a84,	// (0x00050dc9) main_mp4_pane_g2_ParamLimits

0x9a84,	// (0x00050dc9) main_mp4_pane_g2

0x9a92,	// (0x00050dd7) main_mp4_pane_g3_ParamLimits

0x9a92,	// (0x00050dd7) main_mp4_pane_g3

0x9ad7,	// (0x00050e1c) main_mp4_pane_g4_ParamLimits

0x9ad7,	// (0x00050e1c) main_mp4_pane_g4

0x9af1,	// (0x00050e36) main_mp4_pane_g5_ParamLimits

0x9af1,	// (0x00050e36) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00056c41) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00056c41) main_mp4_pane_g

0x9b25,	// (0x00050e6a) main_mp4_pane_t1_ParamLimits

0x9b25,	// (0x00050e6a) main_mp4_pane_t1

0x9b81,	// (0x00050ec6) main_mp4_pane_t2_ParamLimits

0x9b81,	// (0x00050ec6) main_mp4_pane_t2

0x1c29,	// (0x00048f6e) main_mp4_pane_t3_ParamLimits

0x1c29,	// (0x00048f6e) main_mp4_pane_t3

0x9bd3,	// (0x00050f18) main_mp4_pane_t4_ParamLimits

0x9bd3,	// (0x00050f18) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00056c4e) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00056c4e) main_mp4_pane_t

0x9c17,	// (0x00050f5c) mp4_progress_pane_ParamLimits

0x9c17,	// (0x00050f5c) mp4_progress_pane

0x9c61,	// (0x00050fa6) mp4_rocker_pane_ParamLimits

0x9c61,	// (0x00050fa6) mp4_rocker_pane

0x1c51,	// (0x00048f96) mp4_progress_pane_t1

0x1c6a,	// (0x00048faf) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x00056c57) mp4_progress_pane_t

0x1c83,	// (0x00048fc8) mup_progress_pane_cp04

0x2516,	// (0x0004985b) mp4_rocker_pane_g1

0x9c81,	// (0x00050fc6) aid_cell_size_keypad2_ParamLimits

0x9c81,	// (0x00050fc6) aid_cell_size_keypad2

0x9c91,	// (0x00050fd6) dialer2_ne_pane_ParamLimits

0x9c91,	// (0x00050fd6) dialer2_ne_pane

0x9c9f,	// (0x00050fe4) grid_dialer2_keypad_pane_ParamLimits

0x9c9f,	// (0x00050fe4) grid_dialer2_keypad_pane

0x2571,	// (0x000498b6) bg_popup_call_pane_cp07_ParamLimits

0x2571,	// (0x000498b6) bg_popup_call_pane_cp07

0x9caf,	// (0x00050ff4) dialer2_ne_pane_t1_ParamLimits

0x9caf,	// (0x00050ff4) dialer2_ne_pane_t1

0x9cd4,	// (0x00051019) cell_dialer2_keypad_pane_ParamLimits

0x9cd4,	// (0x00051019) cell_dialer2_keypad_pane

0x1ca1,	// (0x00048fe6) bg_button_pane_pane_cp04_ParamLimits

0x1ca1,	// (0x00048fe6) bg_button_pane_pane_cp04

0x9ceb,	// (0x00051030) cell_dialer2_keypad_pane_g1_ParamLimits

0x9ceb,	// (0x00051030) cell_dialer2_keypad_pane_g1

0x6090,	// (0x0004d3d5) aid_placing_vt_set_content_ParamLimits

0x6090,	// (0x0004d3d5) aid_placing_vt_set_content

0x60b0,	// (0x0004d3f5) aid_placing_vt_set_title_ParamLimits

0x60b0,	// (0x0004d3f5) aid_placing_vt_set_title

0x4b88,	// (0x0004becd) main_image3_pane

0x9d85,	// (0x000510ca) area_side_right_pane_cp01_ParamLimits

0x9d85,	// (0x000510ca) area_side_right_pane_cp01

0x9db2,	// (0x000510f7) main_image3_pane_g1_ParamLimits

0x9db2,	// (0x000510f7) main_image3_pane_g1

0x9dc0,	// (0x00051105) main_image3_pane_g2_ParamLimits

0x9dc0,	// (0x00051105) main_image3_pane_g2

0x9dd9,	// (0x0005111e) main_image3_pane_g3_ParamLimits

0x9dd9,	// (0x0005111e) main_image3_pane_g3

0x9df2,	// (0x00051137) main_image3_pane_g4_ParamLimits

0x9df2,	// (0x00051137) main_image3_pane_g4

0x0003,

0xf921,	// (0x00056c66) main_image3_pane_g_ParamLimits

0xf921,	// (0x00056c66) main_image3_pane_g

0x9e0b,	// (0x00051150) main_image3_pane_t1_ParamLimits

0x9e0b,	// (0x00051150) main_image3_pane_t1

0x9e30,	// (0x00051175) main_image3_pane_t2_ParamLimits

0x9e30,	// (0x00051175) main_image3_pane_t2

0x9e4f,	// (0x00051194) main_image3_pane_t3_ParamLimits

0x9e4f,	// (0x00051194) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00056c6f) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00056c6f) main_image3_pane_t

0x1d8e,	// (0x000490d3) grid_sctrl_middle_pane_cp01_ParamLimits

0x1d8e,	// (0x000490d3) grid_sctrl_middle_pane_cp01

0x9eb0,	// (0x000511f5) cell_sctrl_middle_pane_cp01_ParamLimits

0x9eb0,	// (0x000511f5) cell_sctrl_middle_pane_cp01

0x9ec1,	// (0x00051206) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9ec1,	// (0x00051206) cell_sctrl_middle_pane_cp01_g1

0x4b88,	// (0x0004becd) main_call4_pane

0x9ece,	// (0x00051213) aid_size_button_call4_ParamLimits

0x9ece,	// (0x00051213) aid_size_button_call4

0x9efe,	// (0x00051243) call4_windows_pane_ParamLimits

0x9efe,	// (0x00051243) call4_windows_pane

0x9f18,	// (0x0005125d) grid_call4_button_pane_ParamLimits

0x9f18,	// (0x0005125d) grid_call4_button_pane

0x1cad,	// (0x00048ff2) call4_windows_conf_pane

0x1cc2,	// (0x00049007) popup_call4_audio_first_window_ParamLimits

0x1cc2,	// (0x00049007) popup_call4_audio_first_window

0x1d0e,	// (0x00049053) popup_call4_audio_second_window_ParamLimits

0x1d0e,	// (0x00049053) popup_call4_audio_second_window

0x1d22,	// (0x00049067) popup_call4_audio_wait_window_ParamLimits

0x1d22,	// (0x00049067) popup_call4_audio_wait_window

0x9f3c,	// (0x00051281) cell_call4_button_pane_ParamLimits

0x9f3c,	// (0x00051281) cell_call4_button_pane

0x9f61,	// (0x000512a6) bg_button_pane_cp09_ParamLimits

0x9f61,	// (0x000512a6) bg_button_pane_cp09

0x9f6d,	// (0x000512b2) cell_call4_button_pane_g1_ParamLimits

0x9f6d,	// (0x000512b2) cell_call4_button_pane_g1

0x9f7a,	// (0x000512bf) cell_call4_button_pane_t1_ParamLimits

0x9f7a,	// (0x000512bf) cell_call4_button_pane_t1

0x1d6a,	// (0x000490af) popup_call4_audio_conf_window_ParamLimits

0x1d6a,	// (0x000490af) popup_call4_audio_conf_window

0x9234,	// (0x00050579) mup3_progress_pane_t1_ParamLimits

0x924b,	// (0x00050590) mup3_progress_pane_t2_ParamLimits

0x169d,	// (0x000489e2) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00056b48) mup3_progress_pane_t_ParamLimits

0x16b4,	// (0x000489f9) mup_progress_pane_cp03_ParamLimits

0x976c,	// (0x00050ab1) mup3_control_keys_pane_g4_copy1

0x9c45,	// (0x00050f8a) mp4_rocker2_pane_ParamLimits

0x9c45,	// (0x00050f8a) mp4_rocker2_pane

0x1d86,	// (0x000490cb) mp4_rocker2_pane_g1

0x1d7e,	// (0x000490c3) mp4_rocker2_pane_g2

0x9f8c,	// (0x000512d1) mp4_rocker2_pane_g3

0x9f94,	// (0x000512d9) mp4_rocker2_pane_g4

0x9f9c,	// (0x000512e1) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x00056c78) mp4_rocker2_pane_g

0x4b88,	// (0x0004becd) main_camera4_pane

0x4b88,	// (0x0004becd) main_video4_pane

0x99d4,	// (0x00050d19) main_video_tele_dialer_pane_t1_ParamLimits

0x99d4,	// (0x00050d19) main_video_tele_dialer_pane_t1

0x99e6,	// (0x00050d2b) main_video_tele_dialer_pane_t2_ParamLimits

0x99e6,	// (0x00050d2b) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x00056c32) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x00056c32) main_video_tele_dialer_pane_t

0x9fbc,	// (0x00051301) cam4_autofocus_pane_ParamLimits

0x9fbc,	// (0x00051301) cam4_autofocus_pane

0x9fca,	// (0x0005130f) cam4_image_uncrop_pane_ParamLimits

0x9fca,	// (0x0005130f) cam4_image_uncrop_pane

0x9fe1,	// (0x00051326) cam4_indicators_pane_ParamLimits

0x9fe1,	// (0x00051326) cam4_indicators_pane

0x9ffd,	// (0x00051342) main_camera4_pane_g1_ParamLimits

0x9ffd,	// (0x00051342) main_camera4_pane_g1

0xa009,	// (0x0005134e) main_camera4_pane_g2_ParamLimits

0xa009,	// (0x0005134e) main_camera4_pane_g2

0xa015,	// (0x0005135a) main_camera4_pane_g3_ParamLimits

0xa015,	// (0x0005135a) main_camera4_pane_g3

0xa021,	// (0x00051366) main_camera4_pane_g4_ParamLimits

0xa021,	// (0x00051366) main_camera4_pane_g4

0xa02d,	// (0x00051372) main_camera4_pane_g5_ParamLimits

0xa02d,	// (0x00051372) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00056c83) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00056c83) main_camera4_pane_g

0xa047,	// (0x0005138c) main_camera4_pane_t1_ParamLimits

0xa047,	// (0x0005138c) main_camera4_pane_t1

0xa06b,	// (0x000513b0) bg_tb_trans_pane_cp06

0xa081,	// (0x000513c6) cam4_indicators_pane_g1

0xa08e,	// (0x000513d3) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00056c95) cam4_indicators_pane_g

0xa0ae,	// (0x000513f3) cam4_indicators_pane_t1

0xa0d8,	// (0x0005141d) main_video4_pane_g1_ParamLimits

0xa0d8,	// (0x0005141d) main_video4_pane_g1

0xa0e4,	// (0x00051429) main_video4_pane_g2_ParamLimits

0xa0e4,	// (0x00051429) main_video4_pane_g2

0xa0f0,	// (0x00051435) main_video4_pane_g3_ParamLimits

0xa0f0,	// (0x00051435) main_video4_pane_g3

0xa0fc,	// (0x00051441) main_video4_pane_g4_ParamLimits

0xa0fc,	// (0x00051441) main_video4_pane_g4

0x0004,

0xf957,	// (0x00056c9c) main_video4_pane_g_ParamLimits

0xf957,	// (0x00056c9c) main_video4_pane_g

0xa11c,	// (0x00051461) vid4_indicators_pane_ParamLimits

0xa11c,	// (0x00051461) vid4_indicators_pane

0xa13a,	// (0x0005147f) video4_image_uncrop_cif_pane_ParamLimits

0xa13a,	// (0x0005147f) video4_image_uncrop_cif_pane

0xa149,	// (0x0005148e) video4_image_uncrop_nhd_pane_ParamLimits

0xa149,	// (0x0005148e) video4_image_uncrop_nhd_pane

0x9fca,	// (0x0005130f) video4_image_uncrop_vga_pane_ParamLimits

0x9fca,	// (0x0005130f) video4_image_uncrop_vga_pane

0xa156,	// (0x0005149b) bg_tb_trans_pane_cp07

0xa081,	// (0x000513c6) vid4_indicators_pane_g1

0xa16c,	// (0x000514b1) vid4_indicators_pane_g2

0xa179,	// (0x000514be) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x00056ca7) vid4_indicators_pane_g

0xa1a6,	// (0x000514eb) vid4_indicators_pane_t1

0xa1c0,	// (0x00051505) cam4_autofocus_pane_g1

0xa1c8,	// (0x0005150d) cam4_autofocus_pane_g2

0xa1d0,	// (0x00051515) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00056cb2) cam4_autofocus_pane_g

0xa1d8,	// (0x0005151d) cam4_autofocus_pane_g3_copy1

0x9a06,	// (0x00050d4b) video_down_pane_cp_t1

0x9a14,	// (0x00050d59) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x00056c37) video_down_pane_cp_t

0x1d8e,	// (0x000490d3) popup_vitu2_window_ParamLimits

0x1d8e,	// (0x000490d3) popup_vitu2_window

0xa1e0,	// (0x00051525) aid_size_cell2_itu2_ParamLimits

0xa1e0,	// (0x00051525) aid_size_cell2_itu2

0xa202,	// (0x00051547) aid_size_cell_itu2_ParamLimits

0xa202,	// (0x00051547) aid_size_cell_itu2

0xa246,	// (0x0005158b) bg_popup_window_pane_cp09_ParamLimits

0xa246,	// (0x0005158b) bg_popup_window_pane_cp09

0xa254,	// (0x00051599) field_vitu2_entry_pane_ParamLimits

0xa254,	// (0x00051599) field_vitu2_entry_pane

0xa274,	// (0x000515b9) grid_vitu2_function_pane_ParamLimits

0xa274,	// (0x000515b9) grid_vitu2_function_pane

0xa2b8,	// (0x000515fd) grid_vitu2_itu_pane_ParamLimits

0xa2b8,	// (0x000515fd) grid_vitu2_itu_pane

0xa32e,	// (0x00051673) cell_vitu2_itu_pane_ParamLimits

0xa32e,	// (0x00051673) cell_vitu2_itu_pane

0xa343,	// (0x00051688) cell_vitu2_function_pane_ParamLimits

0xa343,	// (0x00051688) cell_vitu2_function_pane

0x1d9c,	// (0x000490e1) bg_popup_call_pane_cp08_ParamLimits

0x1d9c,	// (0x000490e1) bg_popup_call_pane_cp08

0x1db5,	// (0x000490fa) field_vitu2_entry_pane_g1

0x1dc1,	// (0x00049106) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x00056cb9) field_vitu2_entry_pane_g

0xa384,	// (0x000516c9) field_vitu2_entry_pane_t1_ParamLimits

0xa384,	// (0x000516c9) field_vitu2_entry_pane_t1

0x1ddb,	// (0x00049120) field_vitu2_entry_pane_t2_ParamLimits

0x1ddb,	// (0x00049120) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00056cc0) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00056cc0) field_vitu2_entry_pane_t

0xa3a4,	// (0x000516e9) bg_button_pane_cp010_ParamLimits

0xa3a4,	// (0x000516e9) bg_button_pane_cp010

0xa3b2,	// (0x000516f7) cell_vitu2_itu_pane_g1

0xa3d0,	// (0x00051715) cell_vitu2_itu_pane_t1_ParamLimits

0xa3d0,	// (0x00051715) cell_vitu2_itu_pane_t1

0x4ab5,	// (0x0004bdfa) cell_vitu2_itu_pane_t2_ParamLimits

0x4ab5,	// (0x0004bdfa) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x00056cca) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x00056cca) cell_vitu2_itu_pane_t

0xa156,	// (0x0005149b) bg_button_pane_cp011

0xa422,	// (0x00051767) cell_vitu2_function_pane_g1

0x4b88,	// (0x0004becd) main_myfav_hc_pane

0x9e91,	// (0x000511d6) popup_image3_note_pane_ParamLimits

0x9e91,	// (0x000511d6) popup_image3_note_pane

0x9e9f,	// (0x000511e4) popup_image3_tool_bar_pane_ParamLimits

0x9e9f,	// (0x000511e4) popup_image3_tool_bar_pane

0x4b23,	// (0x0004be68) cell_vitu2_itu_pane_t3_ParamLimits

0x4b23,	// (0x0004be68) cell_vitu2_itu_pane_t3

0x4b88,	// (0x0004becd) bg_popup_trans_pane

0x1e00,	// (0x00049145) grid_image3_tool_bar_pane

0x1e0a,	// (0x0004914f) bg_popup_trans_pane_g1

0xd826,	// (0x00054b6b) bg_popup_trans_pane_g2

0x1e12,	// (0x00049157) bg_popup_trans_pane_g3

0x1e1a,	// (0x0004915f) bg_popup_trans_pane_g4

0x1e22,	// (0x00049167) bg_popup_trans_pane_g5

0x1e2a,	// (0x0004916f) bg_popup_trans_pane_g6

0x1e32,	// (0x00049177) bg_popup_trans_pane_g7

0x1e3a,	// (0x0004917f) bg_popup_trans_pane_g8

0xd806,	// (0x00054b4b) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00056cd1) bg_popup_trans_pane_g

0x1e42,	// (0x00049187) cell_image3_tool_bar_pane_ParamLimits

0x1e42,	// (0x00049187) cell_image3_tool_bar_pane

0x1373,	// (0x000486b8) cell_image3_tool_bar_pane_g1

0x4b88,	// (0x0004becd) bg_popup_trans_pane_cp1

0x1e56,	// (0x0004919b) popup_image3_note_pane_t1

0x1e64,	// (0x000491a9) popup_image3_note_pane_t2

0x1e72,	// (0x000491b7) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00056ce4) popup_image3_note_pane_t

0x1e80,	// (0x000491c5) popup_image3_note_pane_t3_copy1

0xa436,	// (0x0005177b) bg_myfav_hc_instruction_pane_ParamLimits

0xa436,	// (0x0005177b) bg_myfav_hc_instruction_pane

0xa44e,	// (0x00051793) cell_myfav_contact_pane_ParamLimits

0xa44e,	// (0x00051793) cell_myfav_contact_pane

0xa468,	// (0x000517ad) cell_myfav_contact_pane_cp1_ParamLimits

0xa468,	// (0x000517ad) cell_myfav_contact_pane_cp1

0xa480,	// (0x000517c5) cell_myfav_contact_pane_cp2_ParamLimits

0xa480,	// (0x000517c5) cell_myfav_contact_pane_cp2

0xa498,	// (0x000517dd) cell_myfav_contact_pane_cp3_ParamLimits

0xa498,	// (0x000517dd) cell_myfav_contact_pane_cp3

0xa4af,	// (0x000517f4) cell_myfav_contact_pane_cp4_ParamLimits

0xa4af,	// (0x000517f4) cell_myfav_contact_pane_cp4

0xa4c5,	// (0x0005180a) cell_myfav_contact_pane_cp5_ParamLimits

0xa4c5,	// (0x0005180a) cell_myfav_contact_pane_cp5

0xa4d9,	// (0x0005181e) cell_myfav_contact_pane_cp6_ParamLimits

0xa4d9,	// (0x0005181e) cell_myfav_contact_pane_cp6

0xa4ed,	// (0x00051832) cell_myfav_contact_pane_cp7_ParamLimits

0xa4ed,	// (0x00051832) cell_myfav_contact_pane_cp7

0x1e8e,	// (0x000491d3) listscroll_gen_pane_cp05

0xa505,	// (0x0005184a) main_myfav_hc_pane_g1_ParamLimits

0xa505,	// (0x0005184a) main_myfav_hc_pane_g1

0xa51d,	// (0x00051862) main_myfav_hc_pane_g2_ParamLimits

0xa51d,	// (0x00051862) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00056ceb) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00056ceb) main_myfav_hc_pane_g

0xa54d,	// (0x00051892) main_myfav_hc_pane_t1_ParamLimits

0xa54d,	// (0x00051892) main_myfav_hc_pane_t1

0x1e97,	// (0x000491dc) main_myfav_hc_pane_t2_ParamLimits

0x1e97,	// (0x000491dc) main_myfav_hc_pane_t2

0x1ea9,	// (0x000491ee) main_myfav_hc_pane_t3_ParamLimits

0x1ea9,	// (0x000491ee) main_myfav_hc_pane_t3

0xa564,	// (0x000518a9) main_myfav_hc_pane_t4_ParamLimits

0xa564,	// (0x000518a9) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00056cf2) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00056cf2) main_myfav_hc_pane_t

0x1373,	// (0x000486b8) bg_myfav_hc_instruction_pane_g1

0x1ebb,	// (0x00049200) cell_myfav_contact_pane_g1_ParamLimits

0x1ebb,	// (0x00049200) cell_myfav_contact_pane_g1

0x1ebb,	// (0x00049200) cell_myfav_contact_pane_g2_ParamLimits

0x1ebb,	// (0x00049200) cell_myfav_contact_pane_g2

0x1ec7,	// (0x0004920c) cell_myfav_contact_pane_g3_ParamLimits

0x1ec7,	// (0x0004920c) cell_myfav_contact_pane_g3

0x1687,	// (0x000489cc) cell_myfav_contact_pane_g4_ParamLimits

0x1687,	// (0x000489cc) cell_myfav_contact_pane_g4

0x1ed4,	// (0x00049219) cell_myfav_contact_pane_g5_ParamLimits

0x1ed4,	// (0x00049219) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00056cfd) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00056cfd) cell_myfav_contact_pane_g

0xa535,	// (0x0005187a) main_myfav_hc_pane_g3_ParamLimits

0xa535,	// (0x0005187a) main_myfav_hc_pane_g3

0x4d4f,	// (0x0004c094) popup_adpt_find_window

0xa58e,	// (0x000518d3) afind_page_pane_ParamLimits

0xa58e,	// (0x000518d3) afind_page_pane

0xa59b,	// (0x000518e0) aid_size_cell_afind_ParamLimits

0xa59b,	// (0x000518e0) aid_size_cell_afind

0xa5b5,	// (0x000518fa) bg_popup_sub_pane_cp09_ParamLimits

0xa5b5,	// (0x000518fa) bg_popup_sub_pane_cp09

0xa5c2,	// (0x00051907) find_pane_cp01_ParamLimits

0xa5c2,	// (0x00051907) find_pane_cp01

0x1ee0,	// (0x00049225) grid_afind_control_pane_ParamLimits

0x1ee0,	// (0x00049225) grid_afind_control_pane

0xa5cf,	// (0x00051914) grid_afind_pane_ParamLimits

0xa5cf,	// (0x00051914) grid_afind_pane

0xa5eb,	// (0x00051930) cell_afind_pane_ParamLimits

0xa5eb,	// (0x00051930) cell_afind_pane

0x1373,	// (0x000486b8) afind_page_pane_g1

0xa633,	// (0x00051978) afind_page_pane_g2

0xa63c,	// (0x00051981) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x00056d08) afind_page_pane_g

0xa645,	// (0x0005198a) afind_page_pane_t1

0x1ef4,	// (0x00049239) cell_afind_grid_control_pane_ParamLimits

0x1ef4,	// (0x00049239) cell_afind_grid_control_pane

0x1ca1,	// (0x00048fe6) bg_button_pane_cp69_ParamLimits

0x1ca1,	// (0x00048fe6) bg_button_pane_cp69

0xa65c,	// (0x000519a1) cell_afind_pane_g1_ParamLimits

0xa65c,	// (0x000519a1) cell_afind_pane_g1

0xa669,	// (0x000519ae) cell_afind_pane_t1_ParamLimits

0xa669,	// (0x000519ae) cell_afind_pane_t1

0xd619,	// (0x0005495e) bg_button_pane_cp72

0x1f03,	// (0x00049248) cell_afind_grid_control_pane_g1

0x7cd6,	// (0x0004f01b) aid_image_placing_area_ParamLimits

0x7cd6,	// (0x0004f01b) aid_image_placing_area

0x196f,	// (0x00048cb4) field_vitu_entry_pane_g1_ParamLimits

0x196f,	// (0x00048cb4) field_vitu_entry_pane_g1

0x197b,	// (0x00048cc0) field_vitu_entry_pane_g2_ParamLimits

0x197b,	// (0x00048cc0) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00056bc2) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00056bc2) field_vitu_entry_pane_g

0x97f7,	// (0x00050b3c) cell_vitu_itu_pane_g1_ParamLimits

0x9839,	// (0x00050b7e) cell_vitu_itu_pane_t3_ParamLimits

0x9839,	// (0x00050b7e) cell_vitu_itu_pane_t3

0x1c51,	// (0x00048f96) mp4_progress_pane_t1_ParamLimits

0x1c6a,	// (0x00048faf) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x00056c57) mp4_progress_pane_t_ParamLimits

0x1c83,	// (0x00048fc8) mup_progress_pane_cp04_ParamLimits

0xa578,	// (0x000518bd) main_myfav_hc_pane_t5_ParamLimits

0xa578,	// (0x000518bd) main_myfav_hc_pane_t5

0x4bda,	// (0x0004bf1f) aid_zoom_text_primary

0x4d4f,	// (0x0004c094) popup_adpt_find_window_ParamLimits

0xf0f2,	// (0x00056437) main_cam_set_pane

0x9fef,	// (0x00051334) cam4_zoom_pane_ParamLimits

0x9fef,	// (0x00051334) cam4_zoom_pane

0xa67b,	// (0x000519c0) main_cam_set_pane_g1_ParamLimits

0xa67b,	// (0x000519c0) main_cam_set_pane_g1

0xa689,	// (0x000519ce) main_cam_set_pane_g2_ParamLimits

0xa689,	// (0x000519ce) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00056d0f) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00056d0f) main_cam_set_pane_g

0xa695,	// (0x000519da) main_cam_set_pane_t1_ParamLimits

0xa695,	// (0x000519da) main_cam_set_pane_t1

0xa6b1,	// (0x000519f6) main_cset_listscroll_pane_ParamLimits

0xa6b1,	// (0x000519f6) main_cset_listscroll_pane

0xa6de,	// (0x00051a23) main_cset_slider_pane_ParamLimits

0xa6de,	// (0x00051a23) main_cset_slider_pane

0x1f14,	// (0x00049259) main_cset_list_pane_ParamLimits

0x1f14,	// (0x00049259) main_cset_list_pane

0x1f24,	// (0x00049269) scroll_pane_cp028

0xa6fd,	// (0x00051a42) aid_area_touch_slider

0xa719,	// (0x00051a5e) cset_slider_pane

0xa743,	// (0x00051a88) main_cset_slider_pane_g1

0xa758,	// (0x00051a9d) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x00056d14) main_cset_slider_pane_g

0x1f5d,	// (0x000492a2) main_cset_slider_pane_t1

0xa820,	// (0x00051b65) main_cset_slider_pane_t2

0xa83a,	// (0x00051b7f) main_cset_slider_pane_t3

0xa854,	// (0x00051b99) main_cset_slider_pane_t4

0xa872,	// (0x00051bb7) main_cset_slider_pane_t5

0xa894,	// (0x00051bd9) main_cset_slider_pane_t6

0xa8ab,	// (0x00051bf0) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x00056d39) main_cset_slider_pane_t

0xa9b9,	// (0x00051cfe) cset_list_set_pane_ParamLimits

0xa9b9,	// (0x00051cfe) cset_list_set_pane

0xa9d6,	// (0x00051d1b) aid_position_infowindow_above

0xa9de,	// (0x00051d23) aid_position_infowindow_below

0xa9e6,	// (0x00051d2b) cset_list_set_pane_g1_ParamLimits

0xa9e6,	// (0x00051d2b) cset_list_set_pane_g1

0x2777,	// (0x00049abc) cset_list_set_pane_g3_ParamLimits

0x2777,	// (0x00049abc) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x00056d58) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x00056d58) cset_list_set_pane_g

0xa9f2,	// (0x00051d37) cset_list_set_pane_t1_ParamLimits

0xa9f2,	// (0x00051d37) cset_list_set_pane_t1

0xf0f2,	// (0x00056437) list_highlight_pane_cp021_ParamLimits

0xf0f2,	// (0x00056437) list_highlight_pane_cp021

0xdfd4,	// (0x00055319) cset_slider_pane_g1

0xdfe6,	// (0x0005532b) cset_slider_pane_g2

0xdfdd,	// (0x00055322) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00056d5d) cset_slider_pane_g

0xaa07,	// (0x00051d4c) aid_area_touch_cam4_zoom

0xaa0f,	// (0x00051d54) cam4_zoom_cont_pane

0xaa17,	// (0x00051d5c) cam4_zoom_pane_g1

0xaa1f,	// (0x00051d64) cam4_zoom_pane_g2

0xaa27,	// (0x00051d6c) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00056d64) cam4_zoom_pane_g

0xaa2f,	// (0x00051d74) cam4_zoom_cont_pane_g1

0xaa38,	// (0x00051d7d) cam4_zoom_cont_pane_g2

0xaa41,	// (0x00051d86) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x00056d6b) cam4_zoom_cont_pane_g

0x9ee8,	// (0x0005122d) call4_image_pane_ParamLimits

0x9ee8,	// (0x0005122d) call4_image_pane

0x1cad,	// (0x00048ff2) call4_windows_conf_pane_ParamLimits

0x1cec,	// (0x00049031) popup_call4_audio_in_window_ParamLimits

0x1cec,	// (0x00049031) popup_call4_audio_in_window

0x4b88,	// (0x0004becd) bg_popup_call2_act_pane_cp02

0x1d62,	// (0x000490a7) call4_list_conf_pane

0x1373,	// (0x000486b8) call4_image_pane_g1

0x1373,	// (0x000486b8) call4_image_pane_g2

0x0001,

0xf743,	// (0x00056a88) call4_image_pane_g

0x2018,	// (0x0004935d) list_single_graphic_popup_conf4_pane_ParamLimits

0x2018,	// (0x0004935d) list_single_graphic_popup_conf4_pane

0x4b88,	// (0x0004becd) list_highlight_pane_cp022

0x202b,	// (0x00049370) list_single_graphic_popup_conf4_pane_g1

0xdcc5,	// (0x0005500a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00056d72) list_single_graphic_popup_conf4_pane_g

0x2033,	// (0x00049378) list_single_graphic_popup_conf4_pane_t1

0x61b9,	// (0x0004d4fe) popup_vtel_slider_window_ParamLimits

0x61b9,	// (0x0004d4fe) popup_vtel_slider_window

0x1c8f,	// (0x00048fd4) dialer2_ne_pane_t2_ParamLimits

0x1c8f,	// (0x00048fd4) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00056c5c) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00056c5c) dialer2_ne_pane_t

0xf0f2,	// (0x00056437) bg_popup_sub_pane_cp010_ParamLimits

0xf0f2,	// (0x00056437) bg_popup_sub_pane_cp010

0xaa4a,	// (0x00051d8f) popup_vtel_slider_window_g1_ParamLimits

0xaa4a,	// (0x00051d8f) popup_vtel_slider_window_g1

0xaa56,	// (0x00051d9b) popup_vtel_slider_window_g2_ParamLimits

0xaa56,	// (0x00051d9b) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x00056d77) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x00056d77) popup_vtel_slider_window_g

0xaa9e,	// (0x00051de3) vtel_slider_pane_ParamLimits

0xaa9e,	// (0x00051de3) vtel_slider_pane

0xaaad,	// (0x00051df2) vtel_slider_pane_g1_ParamLimits

0xaaad,	// (0x00051df2) vtel_slider_pane_g1

0xaaba,	// (0x00051dff) vtel_slider_pane_g2_ParamLimits

0xaaba,	// (0x00051dff) vtel_slider_pane_g2

0xaac7,	// (0x00051e0c) vtel_slider_pane_g3_ParamLimits

0xaac7,	// (0x00051e0c) vtel_slider_pane_g3

0xaaad,	// (0x00051df2) vtel_slider_pane_g4_ParamLimits

0xaaad,	// (0x00051df2) vtel_slider_pane_g4

0xaad4,	// (0x00051e19) vtel_slider_pane_g5_ParamLimits

0xaad4,	// (0x00051e19) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00056d80) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00056d80) vtel_slider_pane_g

0x4b88,	// (0x0004becd) main_gallery2_pane

0xa228,	// (0x0005156d) aid_size_row_itut2_dropdow_list_ParamLimits

0xa228,	// (0x0005156d) aid_size_row_itut2_dropdow_list

0xa296,	// (0x000515db) grid_vitu2_function_top_pane_ParamLimits

0xa296,	// (0x000515db) grid_vitu2_function_top_pane

0xa2ec,	// (0x00051631) popup_vitu2_dropdown_list_window_ParamLimits

0xa2ec,	// (0x00051631) popup_vitu2_dropdown_list_window

0xa30c,	// (0x00051651) popup_vitu2_match_list_window

0xaae1,	// (0x00051e26) cell_vitu2_function_top_pane_ParamLimits

0xaae1,	// (0x00051e26) cell_vitu2_function_top_pane

0xab01,	// (0x00051e46) cell_vitu2_function_top_pane_cp01_ParamLimits

0xab01,	// (0x00051e46) cell_vitu2_function_top_pane_cp01

0xab1f,	// (0x00051e64) cell_vitu2_function_top_wide_pane_ParamLimits

0xab1f,	// (0x00051e64) cell_vitu2_function_top_wide_pane

0xa156,	// (0x0005149b) bg_button_pane_cp012

0xab3d,	// (0x00051e82) cell_vitu2_function_top_pane_g1

0xab4c,	// (0x00051e91) bg_button_pane_cp013_ParamLimits

0xab4c,	// (0x00051e91) bg_button_pane_cp013

0xab68,	// (0x00051ead) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xab68,	// (0x00051ead) cell_vitu2_function_top_wide_pane_g1

0xab80,	// (0x00051ec5) bg_popup_sub_pane_cp20

0xab8e,	// (0x00051ed3) list_vitu2_match_list_pane

0x1e0a,	// (0x0004914f) bg_popup_sub_pane_cp20_g1

0x1e12,	// (0x00049157) bg_popup_sub_pane_cp20_g2

0xd826,	// (0x00054b6b) bg_popup_sub_pane_cp20_g3

0x1e1a,	// (0x0004915f) bg_popup_sub_pane_cp20_g4

0xd806,	// (0x00054b4b) bg_popup_sub_pane_cp20_g5

0x204f,	// (0x00049394) bg_popup_sub_pane_cp20_g6

0x1e2a,	// (0x0004916f) bg_popup_sub_pane_cp20_g7

0x1e32,	// (0x00049177) bg_popup_sub_pane_cp20_g8

0x1e3a,	// (0x0004917f) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x00056d8b) bg_popup_sub_pane_cp20_g

0xaba6,	// (0x00051eeb) list_vitu2_match_list_item_pane_ParamLimits

0xaba6,	// (0x00051eeb) list_vitu2_match_list_item_pane

0xabb8,	// (0x00051efd) list_vitu2_match_list_item_pane_t1

0x5748,	// (0x0004ca8d) bg_popup_sub_pane_cp21

0xabf5,	// (0x00051f3a) grid_vitu2_dropdown_list_pane

0xabfd,	// (0x00051f42) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xabfd,	// (0x00051f42) cell_vitu2_dropdown_list_char_pane

0xac1e,	// (0x00051f63) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xac1e,	// (0x00051f63) cell_vitu2_dropdown_list_ctrl_pane

0x2081,	// (0x000493c6) cell_vitu2_dropdown_list_char_pane_g1

0x2078,	// (0x000493bd) cell_vitu2_dropdown_list_char_pane_g2

0x206f,	// (0x000493b4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x00056da8) cell_vitu2_dropdown_list_char_pane_g

0xac4a,	// (0x00051f8f) cell_vitu2_dropdown_list_char_pane_t1

0xac58,	// (0x00051f9d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xac58,	// (0x00051f9d) cell_vitu2_dropdown_list_ctrl_pane_g1

0xac68,	// (0x00051fad) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xac68,	// (0x00051fad) cell_vitu2_dropdown_list_ctrl_pane_g2

0xac79,	// (0x00051fbe) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xac79,	// (0x00051fbe) cell_vitu2_dropdown_list_ctrl_pane_g3

0xac89,	// (0x00051fce) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xac89,	// (0x00051fce) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa06b,	// (0x000513b0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa06b,	// (0x000513b0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00056daf) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00056daf) cell_vitu2_dropdown_list_ctrl_pane_g

0xaca5,	// (0x00051fea) aid_size_cell_gallery2_ParamLimits

0xaca5,	// (0x00051fea) aid_size_cell_gallery2

0xacb3,	// (0x00051ff8) grid_gallery2_pane_ParamLimits

0xacb3,	// (0x00051ff8) grid_gallery2_pane

0xacc2,	// (0x00052007) scroll_pane_cp029_ParamLimits

0xacc2,	// (0x00052007) scroll_pane_cp029

0xacce,	// (0x00052013) cell_gallery2_pane_ParamLimits

0xacce,	// (0x00052013) cell_gallery2_pane

0x208a,	// (0x000493cf) cell_gallery2_pane_g2

0xacff,	// (0x00052044) cell_gallery2_pane_g3

0x2094,	// (0x000493d9) cell_gallery2_pane_g4

0x209c,	// (0x000493e1) cell_gallery2_pane_g5

0xde9e,	// (0x000551e3) grid_highlight_pane_cp10

0xa30c,	// (0x00051651) popup_vitu2_match_list_window_ParamLimits

0xa31e,	// (0x00051663) popup_vitu2_query_window_ParamLimits

0xa31e,	// (0x00051663) popup_vitu2_query_window

0x5748,	// (0x0004ca8d) bg_vitu2_candi_button_pane

0x2081,	// (0x000493c6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2078,	// (0x000493bd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x206f,	// (0x000493b4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xad07,	// (0x0005204c) bg_button_pane_cp015

0xad11,	// (0x00052056) bg_button_pane_cp016

0xad1b,	// (0x00052060) bg_button_pane_cp017

0xf0f2,	// (0x00056437) bg_popup_sub_pane_cp22

0x20a4,	// (0x000493e9) popup_vitu2_query_window_g1

0xad43,	// (0x00052088) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00056dba) popup_vitu2_query_window_g

0xad51,	// (0x00052096) popup_vitu2_query_window_t1_ParamLimits

0xad51,	// (0x00052096) popup_vitu2_query_window_t1

0xad79,	// (0x000520be) popup_vitu2_query_window_t2_ParamLimits

0xad79,	// (0x000520be) popup_vitu2_query_window_t2

0xad8b,	// (0x000520d0) popup_vitu2_query_window_t3_ParamLimits

0xad8b,	// (0x000520d0) popup_vitu2_query_window_t3

0xadb3,	// (0x000520f8) popup_vitu2_query_window_t4_ParamLimits

0xadb3,	// (0x000520f8) popup_vitu2_query_window_t4

0xadc7,	// (0x0005210c) popup_vitu2_query_window_t5_ParamLimits

0xadc7,	// (0x0005210c) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00056dbf) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00056dbf) popup_vitu2_query_window_t

0x1f0c,	// (0x00049251) main_cset_text_pane

0xa6fd,	// (0x00051a42) aid_area_touch_slider_ParamLimits

0xa719,	// (0x00051a5e) cset_slider_pane_ParamLimits

0xa743,	// (0x00051a88) main_cset_slider_pane_g1_ParamLimits

0xa758,	// (0x00051a9d) main_cset_slider_pane_g2_ParamLimits

0x1f2d,	// (0x00049272) main_cset_slider_pane_g3_ParamLimits

0x1f2d,	// (0x00049272) main_cset_slider_pane_g3

0xa76d,	// (0x00051ab2) main_cset_slider_pane_g4_ParamLimits

0xa76d,	// (0x00051ab2) main_cset_slider_pane_g4

0xa77c,	// (0x00051ac1) main_cset_slider_pane_g5_ParamLimits

0xa77c,	// (0x00051ac1) main_cset_slider_pane_g5

0xa78a,	// (0x00051acf) main_cset_slider_pane_g6_ParamLimits

0xa78a,	// (0x00051acf) main_cset_slider_pane_g6

0xf9cf,	// (0x00056d14) main_cset_slider_pane_g_ParamLimits

0x1f5d,	// (0x000492a2) main_cset_slider_pane_t1_ParamLimits

0xa820,	// (0x00051b65) main_cset_slider_pane_t2_ParamLimits

0xa83a,	// (0x00051b7f) main_cset_slider_pane_t3_ParamLimits

0xa854,	// (0x00051b99) main_cset_slider_pane_t4_ParamLimits

0xa872,	// (0x00051bb7) main_cset_slider_pane_t5_ParamLimits

0xa894,	// (0x00051bd9) main_cset_slider_pane_t6_ParamLimits

0xa8ab,	// (0x00051bf0) main_cset_slider_pane_t7_ParamLimits

0xa8d9,	// (0x00051c1e) main_cset_slider_pane_t8_ParamLimits

0xa8d9,	// (0x00051c1e) main_cset_slider_pane_t8

0xa901,	// (0x00051c46) main_cset_slider_pane_t9_ParamLimits

0xa901,	// (0x00051c46) main_cset_slider_pane_t9

0xa929,	// (0x00051c6e) main_cset_slider_pane_t10_ParamLimits

0xa929,	// (0x00051c6e) main_cset_slider_pane_t10

0xa951,	// (0x00051c96) main_cset_slider_pane_t11_ParamLimits

0xa951,	// (0x00051c96) main_cset_slider_pane_t11

0xa97b,	// (0x00051cc0) main_cset_slider_pane_t12_ParamLimits

0xa97b,	// (0x00051cc0) main_cset_slider_pane_t12

0xa99a,	// (0x00051cdf) main_cset_slider_pane_t13_ParamLimits

0xa99a,	// (0x00051cdf) main_cset_slider_pane_t13

0xf9f4,	// (0x00056d39) main_cset_slider_pane_t_ParamLimits

0x4b88,	// (0x0004becd) bg_popup_sub_pane_cp011

0x20b0,	// (0x000493f5) main_cset_text_pane_g1

0x20b8,	// (0x000493fd) main_cset_text_pane_t1

0x20c6,	// (0x0004940b) main_cset_text_pane_t2

0x20d4,	// (0x00049419) main_cset_text_pane_t3

0x20e2,	// (0x00049427) main_cset_text_pane_t4

0x20f0,	// (0x00049435) main_cset_text_pane_t5

0x20fe,	// (0x00049443) main_cset_text_pane_t6

0x210c,	// (0x00049451) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x00056dca) main_cset_text_pane_t

0x4b88,	// (0x0004becd) main_cam4_burst_pane

0x4b88,	// (0x0004becd) main_cam5_pane

0xd91f,	// (0x00054c64) bg_button_pane_cp019

0xa653,	// (0x00051998) bg_button_pane_cp020

0x1f39,	// (0x0004927e) main_cset_slider_pane_g7_ParamLimits

0x1f39,	// (0x0004927e) main_cset_slider_pane_g7

0x1f45,	// (0x0004928a) main_cset_slider_pane_g8_ParamLimits

0x1f45,	// (0x0004928a) main_cset_slider_pane_g8

0xa7a0,	// (0x00051ae5) main_cset_slider_pane_g9_ParamLimits

0xa7a0,	// (0x00051ae5) main_cset_slider_pane_g9

0xa7ac,	// (0x00051af1) main_cset_slider_pane_g10_ParamLimits

0xa7ac,	// (0x00051af1) main_cset_slider_pane_g10

0xa7b8,	// (0x00051afd) main_cset_slider_pane_g11_ParamLimits

0xa7b8,	// (0x00051afd) main_cset_slider_pane_g11

0xa7c4,	// (0x00051b09) main_cset_slider_pane_g12_ParamLimits

0xa7c4,	// (0x00051b09) main_cset_slider_pane_g12

0xa7d0,	// (0x00051b15) main_cset_slider_pane_g13_ParamLimits

0xa7d0,	// (0x00051b15) main_cset_slider_pane_g13

0xa7de,	// (0x00051b23) main_cset_slider_pane_g14_ParamLimits

0xa7de,	// (0x00051b23) main_cset_slider_pane_g14

0xa7ec,	// (0x00051b31) main_cset_slider_pane_g15_ParamLimits

0xa7ec,	// (0x00051b31) main_cset_slider_pane_g15

0x1f8b,	// (0x000492d0) main_cset_slider_pane_t14_ParamLimits

0x1f8b,	// (0x000492d0) main_cset_slider_pane_t14

0x1fc4,	// (0x00049309) main_cset_slider_pane_t15_ParamLimits

0x1fc4,	// (0x00049309) main_cset_slider_pane_t15

0xaddb,	// (0x00052120) aid_cam4_burst_size_cell_ParamLimits

0xaddb,	// (0x00052120) aid_cam4_burst_size_cell

0xadf7,	// (0x0005213c) grid_cam4_burst_pane_ParamLimits

0xadf7,	// (0x0005213c) grid_cam4_burst_pane

0xae27,	// (0x0005216c) linegrid_cam4_burst_pane_ParamLimits

0xae27,	// (0x0005216c) linegrid_cam4_burst_pane

0xae49,	// (0x0005218e) scroll_pane_cp30_ParamLimits

0xae49,	// (0x0005218e) scroll_pane_cp30

0xae55,	// (0x0005219a) cell_cam4_burst_pane_ParamLimits

0xae55,	// (0x0005219a) cell_cam4_burst_pane

0x211a,	// (0x0004945f) linegrid_cam4_burst_pane_g1_ParamLimits

0x211a,	// (0x0004945f) linegrid_cam4_burst_pane_g1

0xae91,	// (0x000521d6) linegrid_cam4_burst_pane_g2_ParamLimits

0xae91,	// (0x000521d6) linegrid_cam4_burst_pane_g2

0x2127,	// (0x0004946c) linegrid_cam4_burst_pane_g3_ParamLimits

0x2127,	// (0x0004946c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x00056dd9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x00056dd9) linegrid_cam4_burst_pane_g

0xaea2,	// (0x000521e7) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xaea2,	// (0x000521e7) linegrid_cam4_burst_pane_g3_copy1

0x2134,	// (0x00049479) linegrid_cam4_burst_pane_g4_ParamLimits

0x2134,	// (0x00049479) linegrid_cam4_burst_pane_g4

0xaebc,	// (0x00052201) linegrid_cam4_burst_pane_g5_ParamLimits

0xaebc,	// (0x00052201) linegrid_cam4_burst_pane_g5

0xaecd,	// (0x00052212) linegrid_cam4_burst_pane_g6_ParamLimits

0xaecd,	// (0x00052212) linegrid_cam4_burst_pane_g6

0x2141,	// (0x00049486) linegrid_cam4_burst_pane_g7_ParamLimits

0x2141,	// (0x00049486) linegrid_cam4_burst_pane_g7

0xaede,	// (0x00052223) cell_cam4_burst_pane_g1

0x215a,	// (0x0004949f) main_cam5_pane_t1_ParamLimits

0x215a,	// (0x0004949f) main_cam5_pane_t1

0x216c,	// (0x000494b1) main_cam5_pane_t2_ParamLimits

0x216c,	// (0x000494b1) main_cam5_pane_t2

0x217e,	// (0x000494c3) main_cam5_pane_t3_ParamLimits

0x217e,	// (0x000494c3) main_cam5_pane_t3

0x2190,	// (0x000494d5) main_cam5_pane_t4_ParamLimits

0x2190,	// (0x000494d5) main_cam5_pane_t4

0x21a6,	// (0x000494eb) main_cam5_pane_t5_ParamLimits

0x21a6,	// (0x000494eb) main_cam5_pane_t5

0x21b8,	// (0x000494fd) main_cam5_pane_t6_ParamLimits

0x21b8,	// (0x000494fd) main_cam5_pane_t6

0x21cc,	// (0x00049511) main_cam5_pane_t7_ParamLimits

0x21cc,	// (0x00049511) main_cam5_pane_t7

0x21de,	// (0x00049523) main_cam5_pane_t8_ParamLimits

0x21de,	// (0x00049523) main_cam5_pane_t8

0x21fa,	// (0x0004953f) main_cam5_pane_t9_ParamLimits

0x21fa,	// (0x0004953f) main_cam5_pane_t9

0x220c,	// (0x00049551) main_cam5_pane_t10_ParamLimits

0x220c,	// (0x00049551) main_cam5_pane_t10

0x221e,	// (0x00049563) main_cam5_pane_t11_ParamLimits

0x221e,	// (0x00049563) main_cam5_pane_t11

0x2230,	// (0x00049575) main_cam5_pane_t12_ParamLimits

0x2230,	// (0x00049575) main_cam5_pane_t12

0x2245,	// (0x0004958a) main_cam5_pane_t13_ParamLimits

0x2245,	// (0x0004958a) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00056de5) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00056de5) main_cam5_pane_t

0x4e06,	// (0x0004c14b) popup_scut_keymap_window_ParamLimits

0x4e06,	// (0x0004c14b) popup_scut_keymap_window

0xaef1,	// (0x00052236) aid_size_cell_brow_shortcut

0xde9e,	// (0x000551e3) bg_popup_window_pane_cp010

0xaefd,	// (0x00052242) grid_scut_pane

0xaf09,	// (0x0005224e) cell_scut_pane_ParamLimits

0xaf09,	// (0x0005224e) cell_scut_pane

0xaf20,	// (0x00052265) cell_scut_pane_g1

0x2262,	// (0x000495a7) cell_scut_pane_t1

0x2271,	// (0x000495b6) cell_scut_pane_t2

0xaf29,	// (0x0005226e) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00056e00) cell_scut_pane_t

0x8e78,	// (0x000501bd) main_mup3_pane_g8_ParamLimits

0x8e78,	// (0x000501bd) main_mup3_pane_g8

0xa236,	// (0x0005157b) area_vitu2_query_pane_ParamLimits

0xa236,	// (0x0005157b) area_vitu2_query_pane

0xad25,	// (0x0005206a) input_focus_pane_cp08

0x2280,	// (0x000495c5) area_vitu2_query_pane_g1

0xaf37,	// (0x0005227c) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x00056e07) area_vitu2_query_pane_g

0xaf48,	// (0x0005228d) area_vitu2_query_pane_t1_ParamLimits

0xaf48,	// (0x0005228d) area_vitu2_query_pane_t1

0xaf5c,	// (0x000522a1) area_vitu2_query_pane_t2_ParamLimits

0xaf5c,	// (0x000522a1) area_vitu2_query_pane_t2

0xaf70,	// (0x000522b5) area_vitu2_query_pane_t3_ParamLimits

0xaf70,	// (0x000522b5) area_vitu2_query_pane_t3

0x228c,	// (0x000495d1) area_vitu2_query_pane_t4_ParamLimits

0x228c,	// (0x000495d1) area_vitu2_query_pane_t4

0x22b4,	// (0x000495f9) area_vitu2_query_pane_t5_ParamLimits

0x22b4,	// (0x000495f9) area_vitu2_query_pane_t5

0x22dc,	// (0x00049621) area_vitu2_query_pane_t6_ParamLimits

0x22dc,	// (0x00049621) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00056e0c) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00056e0c) area_vitu2_query_pane_t

0xaf98,	// (0x000522dd) bg_button_pane_cp018

0xafa6,	// (0x000522eb) bg_button_pane_cp021

0xafb2,	// (0x000522f7) bg_button_pane_cp022

0xafc3,	// (0x00052308) input_focus_pane_cp09

0x72db,	// (0x0004e620) aid_size_touch_mv_arrow_left

0x7306,	// (0x0004e64b) aid_size_touch_mv_arrow_right

0xa804,	// (0x00051b49) main_cset_slider_pane_g16_ParamLimits

0xa804,	// (0x00051b49) main_cset_slider_pane_g16

0xa812,	// (0x00051b57) main_cset_slider_pane_g17_ParamLimits

0xa812,	// (0x00051b57) main_cset_slider_pane_g17

0xaede,	// (0x00052223) cell_cam4_burst_pane_g1_ParamLimits

0x4b88,	// (0x0004becd) compa_mode_pane

0xaa62,	// (0x00051da7) popup_vtel_slider_window_g3_ParamLimits

0xaa62,	// (0x00051da7) popup_vtel_slider_window_g3

0xaa76,	// (0x00051dbb) popup_vtel_slider_window_g4_ParamLimits

0xaa76,	// (0x00051dbb) popup_vtel_slider_window_g4

0xaa8a,	// (0x00051dcf) popup_vtel_slider_window_t1_ParamLimits

0xaa8a,	// (0x00051dcf) popup_vtel_slider_window_t1

0x4b88,	// (0x0004becd) main_cl_pane

0x0e93,	// (0x000481d8) popup_imed_adjust2_window_ParamLimits

0x0e6b,	// (0x000481b0) bg_tb_trans_pane_cp05_ParamLimits

0x18a4,	// (0x00048be9) popup_imed_adjust2_window_g1_ParamLimits

0x18b3,	// (0x00048bf8) popup_imed_adjust2_window_g2_ParamLimits

0x18b3,	// (0x00048bf8) popup_imed_adjust2_window_g2

0x18bf,	// (0x00048c04) popup_imed_adjust2_window_g3_ParamLimits

0x18bf,	// (0x00048c04) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x00056b86) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x00056b86) popup_imed_adjust2_window_g

0x18cb,	// (0x00048c10) popup_imed_adjust2_window_t1_ParamLimits

0x18e3,	// (0x00048c28) slider_imed_adjust_pane_ParamLimits

0x18f7,	// (0x00048c3c) slider_imed_adjust_pane_g1_ParamLimits

0x1907,	// (0x00048c4c) slider_imed_adjust_pane_g2_ParamLimits

0x1917,	// (0x00048c5c) slider_imed_adjust_pane_g3_ParamLimits

0x1928,	// (0x00048c6d) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00056b8d) slider_imed_adjust_pane_g_ParamLimits

0x9fa4,	// (0x000512e9) aid_touch_area_cam4_ParamLimits

0x9fa4,	// (0x000512e9) aid_touch_area_cam4

0x9fb4,	// (0x000512f9) battery_pane_cp01

0xa03b,	// (0x00051380) main_camera4_pane_g6_ParamLimits

0xa03b,	// (0x00051380) main_camera4_pane_g6

0xa059,	// (0x0005139e) main_camera4_pane_t2_ParamLimits

0xa059,	// (0x0005139e) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00056c90) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00056c90) main_camera4_pane_t

0xa0c8,	// (0x0005140d) aid_touch_area_vid4_ParamLimits

0xa0c8,	// (0x0005140d) aid_touch_area_vid4

0xa108,	// (0x0005144d) main_video4_pane_g5_ParamLimits

0xa108,	// (0x0005144d) main_video4_pane_g5

0xa12a,	// (0x0005146f) vid4_progress_pane_ParamLimits

0xa12a,	// (0x0005146f) vid4_progress_pane

0x1f51,	// (0x00049296) main_cset_slider_pane_g18_ParamLimits

0x1f51,	// (0x00049296) main_cset_slider_pane_g18

0x214e,	// (0x00049493) cell_cam4_burst_pane_g2_ParamLimits

0x214e,	// (0x00049493) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00056de0) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00056de0) cell_cam4_burst_pane_g

0xafd4,	// (0x00052319) bg_cl_pane_ParamLimits

0xafd4,	// (0x00052319) bg_cl_pane

0xafe0,	// (0x00052325) cl_header_pane_ParamLimits

0xafe0,	// (0x00052325) cl_header_pane

0xafec,	// (0x00052331) cl_listscroll_pane_ParamLimits

0xafec,	// (0x00052331) cl_listscroll_pane

0x2328,	// (0x0004966d) bg_cl_pane_g1

0x2330,	// (0x00049675) bg_cl_pane_g2

0x2338,	// (0x0004967d) bg_cl_pane_g3

0x2340,	// (0x00049685) bg_cl_pane_g4

0x2348,	// (0x0004968d) bg_cl_pane_g5

0x2350,	// (0x00049695) bg_cl_pane_g6

0x2358,	// (0x0004969d) bg_cl_pane_g7

0x2360,	// (0x000496a5) bg_cl_pane_g8

0x2368,	// (0x000496ad) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x00056e1b) bg_cl_pane_g

0xaff8,	// (0x0005233d) aid_height_cl_leading_ParamLimits

0xaff8,	// (0x0005233d) aid_height_cl_leading

0xb004,	// (0x00052349) aid_height_cl_text_ParamLimits

0xb004,	// (0x00052349) aid_height_cl_text

0x1d8e,	// (0x000490d3) bg_cl_header_pane_ParamLimits

0x1d8e,	// (0x000490d3) bg_cl_header_pane

0xb01c,	// (0x00052361) cl_header_pane_g1_ParamLimits

0xb01c,	// (0x00052361) cl_header_pane_g1

0xb029,	// (0x0005236e) cl_header_pane_t1_ParamLimits

0xb029,	// (0x0005236e) cl_header_pane_t1

0x2370,	// (0x000496b5) cl_list_pane

0x1f24,	// (0x00049269) hc_scroll_pane_cp01

0xd806,	// (0x00054b4b) bg_cl_header_pane_g1

0x1e0a,	// (0x0004914f) bg_cl_header_pane_g2

0xd826,	// (0x00054b6b) bg_cl_header_pane_g3

0x1e1a,	// (0x0004915f) bg_cl_header_pane_g4

0x1e12,	// (0x00049157) bg_cl_header_pane_g5

0x204f,	// (0x00049394) bg_cl_header_pane_g6

0x1e32,	// (0x00049177) bg_cl_header_pane_g7

0x1e3a,	// (0x0004917f) bg_cl_header_pane_g8

0x1e2a,	// (0x0004916f) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00056e2e) bg_cl_header_pane_g

0xb03b,	// (0x00052380) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb03b,	// (0x00052380) hc_cl_list_double_graphic_heading_pane

0xb052,	// (0x00052397) hc_cl_list_single_graphic_pane_ParamLimits

0xb052,	// (0x00052397) hc_cl_list_single_graphic_pane

0xb072,	// (0x000523b7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb072,	// (0x000523b7) hc_cl_list_single_graphic_pane_g1

0xb07e,	// (0x000523c3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb07e,	// (0x000523c3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00056e41) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00056e41) hc_cl_list_single_graphic_pane_g

0xb092,	// (0x000523d7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb092,	// (0x000523d7) hc_cl_list_single_graphic_pane_t1

0xb072,	// (0x000523b7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb072,	// (0x000523b7) hc_cl_list_double_graphic_heading_pane_g1

0xb0a7,	// (0x000523ec) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb0a7,	// (0x000523ec) hc_cl_list_double_graphic_heading_pane_g2

0xb0bb,	// (0x00052400) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb0bb,	// (0x00052400) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x00056e46) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x00056e46) hc_cl_list_double_graphic_heading_pane_g

0xb0cf,	// (0x00052414) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb0cf,	// (0x00052414) hc_cl_list_double_graphic_heading_pane_t1

0xb0e4,	// (0x00052429) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb0e4,	// (0x00052429) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00056e4d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00056e4d) hc_cl_list_double_graphic_heading_pane_t

0xb109,	// (0x0005244e) vid4_progress_pane_g1

0xb115,	// (0x0005245a) vid4_progress_pane_g2

0xb121,	// (0x00052466) vid4_progress_pane_g3

0xb130,	// (0x00052475) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00056e52) vid4_progress_pane_g

0xb14e,	// (0x00052493) vid4_progress_pane_t1

0xb164,	// (0x000524a9) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00056e5d) vid4_progress_pane_t

0xb18f,	// (0x000524d4) wait_bar_pane_cp07

0x1164,	// (0x000484a9) blid_firmament_pane_ParamLimits

0x11a7,	// (0x000484ec) popup_blid_sat_info2_window_g1

0x11cb,	// (0x00048510) popup_blid_sat_info2_window_t3

0x11d9,	// (0x0004851e) popup_blid_sat_info2_window_t4

0x11e7,	// (0x0004852c) popup_blid_sat_info2_window_t5

0x11f5,	// (0x0004853a) popup_blid_sat_info2_window_t6

0x1205,	// (0x0004854a) popup_blid_sat_info2_window_t7

0x1213,	// (0x00048558) popup_blid_sat_info2_window_t8

0x1221,	// (0x00048566) popup_blid_sat_info2_window_t9

0x122f,	// (0x00048574) popup_blid_sat_info2_window_t10

0x12f3,	// (0x00048638) aid_firma_cardinal_ParamLimits

0x1307,	// (0x0004864c) blid_firmament_pane_t1_ParamLimits

0x131e,	// (0x00048663) blid_firmament_pane_t2_ParamLimits

0x1335,	// (0x0004867a) blid_firmament_pane_t3_ParamLimits

0x134c,	// (0x00048691) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x00056a7f) blid_firmament_pane_t_ParamLimits

0x1363,	// (0x000486a8) blid_sat_info_pane_ParamLimits

0xf0f2,	// (0x00056437) main_cam_set_pane_ParamLimits

0x9611,	// (0x00050956) aid_size_cell_colour_35_ParamLimits

0x962b,	// (0x00050970) aid_size_cell_colour_112_ParamLimits

0x9642,	// (0x00050987) aid_size_cell_effect_ParamLimits

0xf0f2,	// (0x00056437) bg_tb_trans_pane_cp02_ParamLimits

0xf100,	// (0x00056445) heading_imed_pane_ParamLimits

0x965c,	// (0x000509a1) listscroll_imed_pane_ParamLimits

0xe8cf,	// (0x00055c14) popup_call2_audio_first_window_g5_ParamLimits

0xe8cf,	// (0x00055c14) popup_call2_audio_first_window_g5

0x9d53,	// (0x00051098) aid_size_touch_image3_arrow_left_ParamLimits

0x9d53,	// (0x00051098) aid_size_touch_image3_arrow_left

0x9d69,	// (0x000510ae) aid_size_touch_image3_arrow_right_ParamLimits

0x9d69,	// (0x000510ae) aid_size_touch_image3_arrow_right

0xb17a,	// (0x000524bf) vid4_progress_pane_t3

0x9902,	// (0x00050c47) main_hwr_training_symbol_option_pane_ParamLimits

0x9902,	// (0x00050c47) main_hwr_training_symbol_option_pane

0x1b91,	// (0x00048ed6) popup_hwr_training_preview_window_ParamLimits

0x1b91,	// (0x00048ed6) popup_hwr_training_preview_window

0x9963,	// (0x00050ca8) hwr_training_navi_pane_g5_ParamLimits

0x9963,	// (0x00050ca8) hwr_training_navi_pane_g5

0x1df8,	// (0x0004913d) popup_char_count_window

0xab80,	// (0x00051ec5) bg_popup_sub_pane_cp20_ParamLimits

0xab8e,	// (0x00051ed3) list_vitu2_match_list_pane_ParamLimits

0xab9a,	// (0x00051edf) vitu2_page_scroll_pane_ParamLimits

0xab9a,	// (0x00051edf) vitu2_page_scroll_pane

0x23d3,	// (0x00049718) list_single_hwr_training_symbol_option_pane_ParamLimits

0x23d3,	// (0x00049718) list_single_hwr_training_symbol_option_pane

0x23e6,	// (0x0004972b) list_single_hwr_training_symbol_option_pane_g1

0x23ee,	// (0x00049733) list_single_hwr_training_symbol_option_pane_t1

0x23fc,	// (0x00049741) bg_button_pane_cp023

0x2405,	// (0x0004974a) bg_button_pane_cp024

0xb19f,	// (0x000524e4) vitu2_page_scroll_pane_g1

0xb1a7,	// (0x000524ec) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00056e64) vitu2_page_scroll_pane_g

0xb1af,	// (0x000524f4) vitu2_page_scroll_pane_t1

0x1080,	// (0x000483c5) popup_char_count_window_g1

0x2438,	// (0x0004977d) popup_char_count_window_g2

0x2441,	// (0x00049786) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x00056e69) popup_char_count_window_g

0x244a,	// (0x0004978f) popup_char_count_window_t1

0x4b88,	// (0x0004becd) main_vded2_pane

0x1890,	// (0x00048bd5) aid_size_cell_imed_line

0x189a,	// (0x00048bdf) grid_imed_line_width_pane

0xa18a,	// (0x000514cf) vid4_indicators_pane_g4

0x2458,	// (0x0004979d) cell_imed_line_width_pane_ParamLimits

0x2458,	// (0x0004979d) cell_imed_line_width_pane

0x246c,	// (0x000497b1) cell_imed_line_width_pane_g1

0x2475,	// (0x000497ba) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00056e70) cell_imed_line_width_pane_g

0xb1be,	// (0x00052503) main_vded2_pane_g1_ParamLimits

0xb1be,	// (0x00052503) main_vded2_pane_g1

0xb1cb,	// (0x00052510) main_vded2_pane_g2_ParamLimits

0xb1cb,	// (0x00052510) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00056e75) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00056e75) main_vded2_pane_g

0xb1d9,	// (0x0005251e) vded2_slider_pane_ParamLimits

0xb1d9,	// (0x0005251e) vded2_slider_pane

0xb1e6,	// (0x0005252b) aid_size_touch_vded2_end

0xb1f0,	// (0x00052535) aid_size_touch_vded2_playhead

0x247d,	// (0x000497c2) aid_size_touch_vded2_start

0x2485,	// (0x000497ca) vded2_slider_bg_pane

0x248e,	// (0x000497d3) vded2_slider_pane_g1

0x2497,	// (0x000497dc) vded2_slider_pane_g2

0xb1f8,	// (0x0005253d) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x00056e7a) vded2_slider_pane_g

0x249f,	// (0x000497e4) vded2_slider_bg_pane_g1

0x24a8,	// (0x000497ed) vded2_slider_bg_pane_g2

0x24b1,	// (0x000497f6) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00056e81) vded2_slider_bg_pane_g

0x7a33,	// (0x0004ed78) aid_postcard_touch_down_pane_ParamLimits

0x7a33,	// (0x0004ed78) aid_postcard_touch_down_pane

0x7a43,	// (0x0004ed88) aid_postcard_touch_up_pane_ParamLimits

0x7a43,	// (0x0004ed88) aid_postcard_touch_up_pane

0x4b88,	// (0x0004becd) main_blid2_pane

0x0e79,	// (0x000481be) popup_blid2_search_window

0x4b88,	// (0x0004becd) blid2_gps_pane

0x4b88,	// (0x0004becd) blid2_navig_pane

0x4b88,	// (0x0004becd) blid2_search_pane

0x4b88,	// (0x0004becd) blid2_tripm_pane

0xb201,	// (0x00052546) blid2_search_pane_g1_ParamLimits

0xb201,	// (0x00052546) blid2_search_pane_g1

0xb211,	// (0x00052556) blid2_search_pane_t1_ParamLimits

0xb211,	// (0x00052556) blid2_search_pane_t1

0xb223,	// (0x00052568) aid_size_cell_blid2_gps_ParamLimits

0xb223,	// (0x00052568) aid_size_cell_blid2_gps

0xb233,	// (0x00052578) blid2_gps_pane_g1_ParamLimits

0xb233,	// (0x00052578) blid2_gps_pane_g1

0xb23f,	// (0x00052584) grid_blid2_satellite_pane_ParamLimits

0xb23f,	// (0x00052584) grid_blid2_satellite_pane

0xb24f,	// (0x00052594) blid2_navig_pane_g1_ParamLimits

0xb24f,	// (0x00052594) blid2_navig_pane_g1

0xb25b,	// (0x000525a0) blid2_navig_pane_t1_ParamLimits

0xb25b,	// (0x000525a0) blid2_navig_pane_t1

0xb26d,	// (0x000525b2) blid2_navig_pane_t2_ParamLimits

0xb26d,	// (0x000525b2) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x00056e88) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x00056e88) blid2_navig_pane_t

0xb27f,	// (0x000525c4) blid2_navig_ring_pane_ParamLimits

0xb27f,	// (0x000525c4) blid2_navig_ring_pane

0xb28f,	// (0x000525d4) blid2_speed_pane_ParamLimits

0xb28f,	// (0x000525d4) blid2_speed_pane

0xb29b,	// (0x000525e0) blid2_tripm_pane_g1_ParamLimits

0xb29b,	// (0x000525e0) blid2_tripm_pane_g1

0xb2ab,	// (0x000525f0) blid2_tripm_pane_g2_ParamLimits

0xb2ab,	// (0x000525f0) blid2_tripm_pane_g2

0xb2b7,	// (0x000525fc) blid2_tripm_pane_g3_ParamLimits

0xb2b7,	// (0x000525fc) blid2_tripm_pane_g3

0xb2c3,	// (0x00052608) blid2_tripm_pane_g4_ParamLimits

0xb2c3,	// (0x00052608) blid2_tripm_pane_g4

0xb2cf,	// (0x00052614) blid2_tripm_pane_g5_ParamLimits

0xb2cf,	// (0x00052614) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x00056e8d) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x00056e8d) blid2_tripm_pane_g

0xb2eb,	// (0x00052630) blid2_tripm_pane_t1_ParamLimits

0xb2eb,	// (0x00052630) blid2_tripm_pane_t1

0xb2ff,	// (0x00052644) blid2_tripm_pane_t2_ParamLimits

0xb2ff,	// (0x00052644) blid2_tripm_pane_t2

0xb313,	// (0x00052658) blid2_tripm_pane_t3_ParamLimits

0xb313,	// (0x00052658) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x00056e9a) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x00056e9a) blid2_tripm_pane_t

0xb345,	// (0x0005268a) cell_blid2_satellite_pane_ParamLimits

0xb345,	// (0x0005268a) cell_blid2_satellite_pane

0xb35f,	// (0x000526a4) cell_blid2_satellite_pane_g1

0x24ba,	// (0x000497ff) cell_blid2_satellite_pane_t1

0x1373,	// (0x000486b8) blid2_speed_pane_g1

0x24c8,	// (0x0004980d) blid2_speed_pane_t1

0x24d6,	// (0x0004981b) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x00056ea3) blid2_speed_pane_t

0x1373,	// (0x000486b8) blid2_navig_ring_pane_g1

0xb368,	// (0x000526ad) blid2_navig_ring_pane_g2

0xb370,	// (0x000526b5) blid2_navig_ring_pane_g3

0xb378,	// (0x000526bd) blid2_navig_ring_pane_g4

0xb380,	// (0x000526c5) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x00056ea8) blid2_navig_ring_pane_g

0x4b88,	// (0x0004becd) bg_popup_window_pane_cp011

0x24e4,	// (0x00049829) popup_blid2_search_window_g1

0x24ec,	// (0x00049831) popup_blid2_search_window_t1

0x24fa,	// (0x0004983f) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x00056eb3) popup_blid2_search_window_t

0xd715,	// (0x00054a5a) main_browser_pane_g1

0xd40e,	// (0x00054753) main_browser_pane_ParamLimits

0xa156,	// (0x0005149b) bg_button_pane_cp011_ParamLimits

0xa422,	// (0x00051767) cell_vitu2_function_pane_g1_ParamLimits

0xf0f2,	// (0x00056437) bg_popup_sub_pane_cp22_ParamLimits

0xad25,	// (0x0005206a) input_focus_pane_cp08_ParamLimits

0xad32,	// (0x00052077) popup_vitu2_query_button_pane_ParamLimits

0xad32,	// (0x00052077) popup_vitu2_query_button_pane

0xad07,	// (0x0005204c) popup_vitu2_query_input_button_pane

0x20a4,	// (0x000493e9) popup_vitu2_query_window_g1_ParamLimits

0xad43,	// (0x00052088) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00056dba) popup_vitu2_query_window_g_ParamLimits

0x4b88,	// (0x0004becd) bg_button_pane_cp026

0xb388,	// (0x000526cd) popup_vitu2_query_input_button_pane_g1

0x4b88,	// (0x0004becd) bg_button_pane_cp025

0x2508,	// (0x0004984d) popup_vitu2_query_button_pane_t1

0x8b95,	// (0x0004feda) main_mp3_pane_t6

0x8ba5,	// (0x0004feea) popup_slider_window_cp01

0xa079,	// (0x000513be) cam4_battery_pane

0xa164,	// (0x000514a9) cam4_battery_pane_cp02

0xb0f9,	// (0x0005243e) cam4_battery_pane_cp01

0xb101,	// (0x00052446) cam4_battery_pane_cp03

0x2516,	// (0x0004985b) cam4_battery_pane_g1

0x1373,	// (0x000486b8) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x00056eb8) cam4_battery_pane_g

0x123d,	// (0x00048582) popup_blid_sat_info2_window_t11

0x72db,	// (0x0004e620) aid_size_touch_mv_arrow_left_ParamLimits

0x7306,	// (0x0004e64b) aid_size_touch_mv_arrow_right_ParamLimits

0xddfe,	// (0x00055143) navi_pane_g1_ParamLimits

0x732f,	// (0x0004e674) navi_pane_g2_ParamLimits

0x735d,	// (0x0004e6a2) navi_pane_g3_ParamLimits

0xf44c,	// (0x00056791) navi_pane_g_ParamLimits

0x73b7,	// (0x0004e6fc) navi_pane_mv_t1_ParamLimits

0x9668,	// (0x000509ad) grid_imed_effect_pane_ParamLimits

0xd65e,	// (0x000549a3) aid_placing_vt_slider_lsc

0xd666,	// (0x000549ab) aid_placing_vt_slider_prt

0xf0f2,	// (0x00056437) bg_tb_trans_pane_cp01_ParamLimits

0x14fa,	// (0x0004883f) popup_image_details_window_g1_ParamLimits

0x150d,	// (0x00048852) popup_image_details_window_g2_ParamLimits

0x1522,	// (0x00048867) popup_image_details_window_g3_ParamLimits

0x1522,	// (0x00048867) popup_image_details_window_g3

0xf77f,	// (0x00056ac4) popup_image_details_window_g_ParamLimits

0x1536,	// (0x0004887b) popup_image_details_window_t1_ParamLimits

0x1548,	// (0x0004888d) popup_image_details_window_t2_ParamLimits

0x1561,	// (0x000488a6) popup_image_details_window_t3_ParamLimits

0x1575,	// (0x000488ba) popup_image_details_window_t4_ParamLimits

0x1590,	// (0x000488d5) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00056acb) popup_image_details_window_t_ParamLimits

0xb010,	// (0x00052355) cl_header_name_pane_ParamLimits

0xb010,	// (0x00052355) cl_header_name_pane

0xb390,	// (0x000526d5) cl_header_name_pane_t1_ParamLimits

0xb390,	// (0x000526d5) cl_header_name_pane_t1

0xb3a7,	// (0x000526ec) cl_header_name_pane_t2_ParamLimits

0xb3a7,	// (0x000526ec) cl_header_name_pane_t2

0xb3d1,	// (0x00052716) cl_header_name_pane_t3_ParamLimits

0xb3d1,	// (0x00052716) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x00056ebd) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x00056ebd) cl_header_name_pane_t

0x7388,	// (0x0004e6cd) navi_pane_mv_g2_ParamLimits

0x1db5,	// (0x000490fa) field_vitu2_entry_pane_g1_ParamLimits

0x1dc1,	// (0x00049106) field_vitu2_entry_pane_g2_ParamLimits

0x1dcd,	// (0x00049112) field_vitu2_entry_pane_g3_ParamLimits

0x1dcd,	// (0x00049112) field_vitu2_entry_pane_g3

0xf974,	// (0x00056cb9) field_vitu2_entry_pane_g_ParamLimits

0xa3b2,	// (0x000516f7) cell_vitu2_itu_pane_g1_ParamLimits

0xa3c2,	// (0x00051707) cell_vitu2_itu_pane_g2_ParamLimits

0xa3c2,	// (0x00051707) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00056cc5) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00056cc5) cell_vitu2_itu_pane_g

0xa156,	// (0x0005149b) bg_vkb2_func_pane_cp05_ParamLimits

0xa156,	// (0x0005149b) bg_vkb2_func_pane_cp05

0xa156,	// (0x0005149b) bg_vkb2_func_pane_cp03

0xa156,	// (0x0005149b) bg_vkb2_func_pane_cp04

0xa156,	// (0x0005149b) bg_vkb2_func_pane_cp10_ParamLimits

0xa156,	// (0x0005149b) bg_vkb2_func_pane_cp10

0xafb2,	// (0x000522f7) bg_vkb2_func_pane_cp08

0xaf98,	// (0x000522dd) bg_vkb2_func_pane_cp06

0xafa6,	// (0x000522eb) bg_vkb2_func_pane_cp07

0x240e,	// (0x00049753) bg_vkb2_func_pane_cp11_ParamLimits

0x240e,	// (0x00049753) bg_vkb2_func_pane_cp11

0x2423,	// (0x00049768) bg_vkb2_func_pane_cp12_ParamLimits

0x2423,	// (0x00049768) bg_vkb2_func_pane_cp12

0x4b88,	// (0x0004becd) bg_vkb2_func_pane_cp09

0x1e0a,	// (0x0004914f) bg_vkb2_func_pane_g1

0xd826,	// (0x00054b6b) bg_vkb2_func_pane_g2

0x1e12,	// (0x00049157) bg_vkb2_func_pane_g3

0x1e1a,	// (0x0004915f) bg_vkb2_func_pane_g4

0x204f,	// (0x00049394) bg_vkb2_func_pane_g5

0x1e32,	// (0x00049177) bg_vkb2_func_pane_g6

0x1e3a,	// (0x0004917f) bg_vkb2_func_pane_g7

0x1e2a,	// (0x0004916f) bg_vkb2_func_pane_g8

0xd806,	// (0x00054b4b) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x00056ec4) bg_vkb2_func_pane_g

0xb2dd,	// (0x00052622) blid2_tripm_pane_g6_ParamLimits

0xb2dd,	// (0x00052622) blid2_tripm_pane_g6

0x1c49,	// (0x00048f8e) mp4_progress_pane_g1

0xb339,	// (0x0005267e) blid2_tripm_values_pane_ParamLimits

0xb339,	// (0x0005267e) blid2_tripm_values_pane

0xb3f6,	// (0x0005273b) blid2_tripm_values_pane_t1

0xb404,	// (0x00052749) blid2_tripm_values_pane_t2

0xb412,	// (0x00052757) blid2_tripm_values_pane_t3

0xb420,	// (0x00052765) blid2_tripm_values_pane_t4

0xb42e,	// (0x00052773) blid2_tripm_values_pane_t5

0xb43c,	// (0x00052781) blid2_tripm_values_pane_t6

0xb44a,	// (0x0005278f) blid2_tripm_values_pane_t7

0xb458,	// (0x0005279d) blid2_tripm_values_pane_t8

0xb466,	// (0x000527ab) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x00056ed7) blid2_tripm_values_pane_t

0x60e7,	// (0x0004d42c) call_video_pane_t1_ParamLimits

0x6101,	// (0x0004d446) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0005661a) call_video_pane_t_ParamLimits

0x78f4,	// (0x0004ec39) msg_header_pane_g1_ParamLimits

0xe019,	// (0x0005535e) msg_header_pane_g2_ParamLimits

0xe019,	// (0x0005535e) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00056834) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00056834) msg_header_pane_g

0xd40e,	// (0x00054753) main_clock2_pane_ParamLimits

0x93ed,	// (0x00050732) grid_clock2_toolbar_pane_ParamLimits

0x93ed,	// (0x00050732) grid_clock2_toolbar_pane

0x93ed,	// (0x00050732) listscroll_clock2_pane_ParamLimits

0x93ed,	// (0x00050732) listscroll_clock2_pane

0x949b,	// (0x000507e0) main_clock2_pane_t3_ParamLimits

0x949b,	// (0x000507e0) main_clock2_pane_t3

0x94ad,	// (0x000507f2) main_clock2_pane_t4_ParamLimits

0x94ad,	// (0x000507f2) main_clock2_pane_t4

0x2520,	// (0x00049865) cell_clock2_toolbar_pane

0x2528,	// (0x0004986d) cell_clock2_toolbar_pane_cp01

0x2528,	// (0x0004986d) cell_clock2_toolbar_pane_cp02

0x2530,	// (0x00049875) cell_clock2_toolbar_pane_cp03

0x2538,	// (0x0004987d) list_clock2_pane

0xdd51,	// (0x00055096) scroll_pane_cp10

0x2540,	// (0x00049885) list_single_clock2_pane_ParamLimits

0x2540,	// (0x00049885) list_single_clock2_pane

0xde9e,	// (0x000551e3) list_highlight_pane_cp08

0x254d,	// (0x00049892) list_single_clock2_pane_t1

0x255b,	// (0x000498a0) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x00056eea) list_single_clock2_pane_t

0x4b88,	// (0x0004becd) bg_button_pane_cp10

0x2569,	// (0x000498ae) cell_clock2_toolbar_pane_g1

0x7995,	// (0x0004ecda) aid_main_viewer_pane_g1_ParamLimits

0x7995,	// (0x0004ecda) aid_main_viewer_pane_g1

0x79a1,	// (0x0004ece6) aid_main_viewer_pane_g2_ParamLimits

0x79a1,	// (0x0004ece6) aid_main_viewer_pane_g2

0x79ad,	// (0x0004ecf2) aid_main_viewer_pane_g3_ParamLimits

0x79ad,	// (0x0004ecf2) aid_main_viewer_pane_g3

0x79be,	// (0x0004ed03) aid_main_viewer_pane_g4_ParamLimits

0x79be,	// (0x0004ed03) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00056845) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00056845) aid_main_viewer_pane_g

0x8156,	// (0x0004f49b) main_calc_pane_ParamLimits

0x8163,	// (0x0004f4a8) main_dialer2_pane_ParamLimits

0x4b88,	// (0x0004becd) main_cam6_pane

0x4b88,	// (0x0004becd) main_vid6_pane

0x93f9,	// (0x0005073e) listscroll_gen_pane_cp06_ParamLimits

0x93f9,	// (0x0005073e) listscroll_gen_pane_cp06

0x94bf,	// (0x00050804) main_clock2_pane_t5_ParamLimits

0x94bf,	// (0x00050804) main_clock2_pane_t5

0x950e,	// (0x00050853) aid_call2_pane_cp10_ParamLimits

0x9520,	// (0x00050865) aid_call_pane_cp10_ParamLimits

0xddd3,	// (0x00055118) popup_clock_analogue_window_cp10_g1_ParamLimits

0xddd3,	// (0x00055118) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9532,	// (0x00050877) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9532,	// (0x00050877) popup_clock_analogue_window_cp10_g4_ParamLimits

0xddd3,	// (0x00055118) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x00056b7b) popup_clock_analogue_window_cp10_g_ParamLimits

0x9548,	// (0x0005088d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9d00,	// (0x00051045) cell_dialer2_keypad_pane_g2_ParamLimits

0x9d00,	// (0x00051045) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00056c61) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00056c61) cell_dialer2_keypad_pane_g

0x9d1c,	// (0x00051061) cell_dialer2_keypad_pane_t1

0xa6ea,	// (0x00051a2f) main_cset_text2_pane_ParamLimits

0xa6ea,	// (0x00051a2f) main_cset_text2_pane

0x2280,	// (0x000495c5) area_vitu2_query_pane_g1_ParamLimits

0xaf37,	// (0x0005227c) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x00056e07) area_vitu2_query_pane_g_ParamLimits

0x2304,	// (0x00049649) area_vitu2_query_pane_t7_ParamLimits

0x2304,	// (0x00049649) area_vitu2_query_pane_t7

0xaf98,	// (0x000522dd) bg_button_pane_cp018_ParamLimits

0xafa6,	// (0x000522eb) bg_button_pane_cp021_ParamLimits

0xafb2,	// (0x000522f7) bg_button_pane_cp022_ParamLimits

0xafb2,	// (0x000522f7) bg_vkb2_func_pane_cp08_ParamLimits

0xaf98,	// (0x000522dd) bg_vkb2_func_pane_cp06_ParamLimits

0xafa6,	// (0x000522eb) bg_vkb2_func_pane_cp07_ParamLimits

0xafc3,	// (0x00052308) input_focus_pane_cp09_ParamLimits

0xb474,	// (0x000527b9) cam6_autofocus_pane_ParamLimits

0xb474,	// (0x000527b9) cam6_autofocus_pane

0xb496,	// (0x000527db) cam6_image_uncrop_pane_ParamLimits

0xb496,	// (0x000527db) cam6_image_uncrop_pane

0xb4c3,	// (0x00052808) cam6_indi_pane_ParamLimits

0xb4c3,	// (0x00052808) cam6_indi_pane

0xb4dd,	// (0x00052822) cam6_mode_pane_ParamLimits

0xb4dd,	// (0x00052822) cam6_mode_pane

0xb4f1,	// (0x00052836) cam6_timer_pane_ParamLimits

0xb4f1,	// (0x00052836) cam6_timer_pane

0xb4fd,	// (0x00052842) cam6_zoom_pane_ParamLimits

0xb4fd,	// (0x00052842) cam6_zoom_pane

0xb515,	// (0x0005285a) cam6_mode_pane_g1_ParamLimits

0xb515,	// (0x0005285a) cam6_mode_pane_g1

0xb521,	// (0x00052866) cam6_mode_pane_g2_ParamLimits

0xb521,	// (0x00052866) cam6_mode_pane_g2

0xb52d,	// (0x00052872) cam6_mode_pane_g3_ParamLimits

0xb52d,	// (0x00052872) cam6_mode_pane_g3

0xb539,	// (0x0005287e) cam6_mode_pane_g4_ParamLimits

0xb539,	// (0x0005287e) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x00056eef) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x00056eef) cam6_mode_pane_g

0x2571,	// (0x000498b6) bg_tb_trans_pane_cp08_ParamLimits

0x2571,	// (0x000498b6) bg_tb_trans_pane_cp08

0x257f,	// (0x000498c4) cam6_battery_pane_ParamLimits

0x257f,	// (0x000498c4) cam6_battery_pane

0x2595,	// (0x000498da) cam6_indi_pane_g1_ParamLimits

0x2595,	// (0x000498da) cam6_indi_pane_g1

0x25a7,	// (0x000498ec) cam6_indi_pane_g2_ParamLimits

0x25a7,	// (0x000498ec) cam6_indi_pane_g2

0x25b9,	// (0x000498fe) cam6_indi_pane_g3_ParamLimits

0x25b9,	// (0x000498fe) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x00056ef8) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x00056ef8) cam6_indi_pane_g

0x25cb,	// (0x00049910) cam6_indi_pane_t1_ParamLimits

0x25cb,	// (0x00049910) cam6_indi_pane_t1

0xa1c8,	// (0x0005150d) cam6_autofocus_pane_g1

0xa1c0,	// (0x00051505) cam6_autofocus_pane_g2

0xa1d8,	// (0x0005151d) cam6_autofocus_pane_g3

0xa1d0,	// (0x00051515) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x00056eff) cam6_autofocus_pane_g

0x25f1,	// (0x00049936) cam6_timer_pane_g1

0x25f9,	// (0x0004993e) cam6_timer_pane_t1

0x2607,	// (0x0004994c) cam6_zoom_cont_pane

0x260f,	// (0x00049954) cam6_zoom_pane_g1

0x2617,	// (0x0004995c) cam6_zoom_pane_g2

0xb545,	// (0x0005288a) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x00056f08) cam6_zoom_pane_g

0x1373,	// (0x000486b8) cam6_battery_pane_g1

0x1373,	// (0x000486b8) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x00056a88) cam6_battery_pane_g

0x261f,	// (0x00049964) cam6_zoom_cont_pane_g1

0x2628,	// (0x0004996d) cam6_zoom_cont_pane_g2

0x2631,	// (0x00049976) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x00056f0f) cam6_zoom_cont_pane_g

0xb55f,	// (0x000528a4) cam6_mode_pane_cp_ParamLimits

0xb55f,	// (0x000528a4) cam6_mode_pane_cp

0xb573,	// (0x000528b8) cam6_zoom_pane_cp_ParamLimits

0xb573,	// (0x000528b8) cam6_zoom_pane_cp

0xb58b,	// (0x000528d0) vid6_image_uncrop_cif_pane_ParamLimits

0xb58b,	// (0x000528d0) vid6_image_uncrop_cif_pane

0xb5b7,	// (0x000528fc) vid6_image_uncrop_nhd_pane_ParamLimits

0xb5b7,	// (0x000528fc) vid6_image_uncrop_nhd_pane

0xb5d4,	// (0x00052919) vid6_image_uncrop_vga_pane_ParamLimits

0xb5d4,	// (0x00052919) vid6_image_uncrop_vga_pane

0xb5f3,	// (0x00052938) vid6_image_uncrop_wvga_pane_ParamLimits

0xb5f3,	// (0x00052938) vid6_image_uncrop_wvga_pane

0xb610,	// (0x00052955) vid6_indi_pane_ParamLimits

0xb610,	// (0x00052955) vid6_indi_pane

0x2571,	// (0x000498b6) bg_tb_trans_pane_cp09_ParamLimits

0x2571,	// (0x000498b6) bg_tb_trans_pane_cp09

0x2649,	// (0x0004998e) cam6_battery_pane_cp_ParamLimits

0x2649,	// (0x0004998e) cam6_battery_pane_cp

0x2655,	// (0x0004999a) vid6_indi_pane_g1_ParamLimits

0x2655,	// (0x0004999a) vid6_indi_pane_g1

0x2667,	// (0x000499ac) vid6_indi_pane_g2_ParamLimits

0x2667,	// (0x000499ac) vid6_indi_pane_g2

0x2679,	// (0x000499be) vid6_indi_pane_g3_ParamLimits

0x2679,	// (0x000499be) vid6_indi_pane_g3

0x268e,	// (0x000499d3) vid6_indi_pane_g4_ParamLimits

0x268e,	// (0x000499d3) vid6_indi_pane_g4

0x26a3,	// (0x000499e8) vid6_indi_pane_g5_ParamLimits

0x26a3,	// (0x000499e8) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x00056f16) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x00056f16) vid6_indi_pane_g

0x26bd,	// (0x00049a02) vid6_indi_pane_t1_ParamLimits

0x26bd,	// (0x00049a02) vid6_indi_pane_t1

0x26d3,	// (0x00049a18) vid6_indi_pane_t2_ParamLimits

0x26d3,	// (0x00049a18) vid6_indi_pane_t2

0x26fb,	// (0x00049a40) vid6_indi_pane_t3_ParamLimits

0x26fb,	// (0x00049a40) vid6_indi_pane_t3

0x2723,	// (0x00049a68) vid6_indi_pane_t4_ParamLimits

0x2723,	// (0x00049a68) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x00056f21) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x00056f21) vid6_indi_pane_t

0x2747,	// (0x00049a8c) wait_bar_pane_cp08

0xb633,	// (0x00052978) main_cset_text2_pane_t1_ParamLimits

0xb633,	// (0x00052978) main_cset_text2_pane_t1

0xb54d,	// (0x00052892) listscroll_gen_pane_cp06_t1_ParamLimits

0xb54d,	// (0x00052892) listscroll_gen_pane_cp06_t1

0x4b88,	// (0x0004becd) main_cam6_set_pane

0xa06b,	// (0x000513b0) bg_tb_trans_pane_cp06_ParamLimits

0xa081,	// (0x000513c6) cam4_indicators_pane_g1_ParamLimits

0xa08e,	// (0x000513d3) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00056c95) cam4_indicators_pane_g_ParamLimits

0xa0ae,	// (0x000513f3) cam4_indicators_pane_t1_ParamLimits

0xa156,	// (0x0005149b) bg_tb_trans_pane_cp07_ParamLimits

0xa081,	// (0x000513c6) vid4_indicators_pane_g1_ParamLimits

0xa16c,	// (0x000514b1) vid4_indicators_pane_g2_ParamLimits

0xa179,	// (0x000514be) vid4_indicators_pane_g3_ParamLimits

0xa18a,	// (0x000514cf) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x00056ca7) vid4_indicators_pane_g_ParamLimits

0xa1a6,	// (0x000514eb) vid4_indicators_pane_t1_ParamLimits

0xb109,	// (0x0005244e) vid4_progress_pane_g1_ParamLimits

0xb115,	// (0x0005245a) vid4_progress_pane_g2_ParamLimits

0xb121,	// (0x00052466) vid4_progress_pane_g3_ParamLimits

0xb130,	// (0x00052475) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00056e52) vid4_progress_pane_g_ParamLimits

0xb14e,	// (0x00052493) vid4_progress_pane_t1_ParamLimits

0xb164,	// (0x000524a9) vid4_progress_pane_t2_ParamLimits

0xb17a,	// (0x000524bf) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00056e5d) vid4_progress_pane_t_ParamLimits

0xb18f,	// (0x000524d4) wait_bar_pane_cp07_ParamLimits

0xb671,	// (0x000529b6) main_cam6_set_pane_g2_ParamLimits

0xb671,	// (0x000529b6) main_cam6_set_pane_g2

0xb67d,	// (0x000529c2) main_cset6_listscroll_pane_ParamLimits

0xb67d,	// (0x000529c2) main_cset6_listscroll_pane

0xb6a8,	// (0x000529ed) main_cset6_slider_pane_ParamLimits

0xb6a8,	// (0x000529ed) main_cset6_slider_pane

0xb6b4,	// (0x000529f9) main_cset6_text2_pane_ParamLimits

0xb6b4,	// (0x000529f9) main_cset6_text2_pane

0x2756,	// (0x00049a9b) main_cset6_text_pane

0x275e,	// (0x00049aa3) main_cset_list_pane_copy1_ParamLimits

0x275e,	// (0x00049aa3) main_cset_list_pane_copy1

0x276e,	// (0x00049ab3) scroll_pane_cp028_copy1

0xb6c7,	// (0x00052a0c) cset_list_set_pane_copy1

0xb6e1,	// (0x00052a26) aid_position_infowindow_above_copy1

0xb6e9,	// (0x00052a2e) aid_position_infowindow_below_copy1

0xb6f1,	// (0x00052a36) cset_list_set_pane_g1_copy1

0x2777,	// (0x00049abc) cset_list_set_pane_g3_copy1_ParamLimits

0x2777,	// (0x00049abc) cset_list_set_pane_g3_copy1

0xa9f2,	// (0x00051d37) cset_list_set_pane_t1_copy1_ParamLimits

0xa9f2,	// (0x00051d37) cset_list_set_pane_t1_copy1

0xf0f2,	// (0x00056437) list_highlight_pane_cp021_copy1_ParamLimits

0xf0f2,	// (0x00056437) list_highlight_pane_cp021_copy1

0x2786,	// (0x00049acb) cset6_slider_pane_ParamLimits

0x2786,	// (0x00049acb) cset6_slider_pane

0x27b2,	// (0x00049af7) main_cset6_slider_pane_g1_ParamLimits

0x27b2,	// (0x00049af7) main_cset6_slider_pane_g1

0xb6f9,	// (0x00052a3e) main_cset6_slider_pane_g2_ParamLimits

0xb6f9,	// (0x00052a3e) main_cset6_slider_pane_g2

0x1f39,	// (0x0004927e) main_cset6_slider_pane_g3_ParamLimits

0x1f39,	// (0x0004927e) main_cset6_slider_pane_g3

0xb721,	// (0x00052a66) main_cset6_slider_pane_g4_ParamLimits

0xb721,	// (0x00052a66) main_cset6_slider_pane_g4

0xb72d,	// (0x00052a72) main_cset6_slider_pane_g5_ParamLimits

0xb72d,	// (0x00052a72) main_cset6_slider_pane_g5

0x1f39,	// (0x0004927e) main_cset6_slider_pane_g7_ParamLimits

0x1f39,	// (0x0004927e) main_cset6_slider_pane_g7

0x1f45,	// (0x0004928a) main_cset6_slider_pane_g8_ParamLimits

0x1f45,	// (0x0004928a) main_cset6_slider_pane_g8

0xb73b,	// (0x00052a80) main_cset6_slider_pane_g9_ParamLimits

0xb73b,	// (0x00052a80) main_cset6_slider_pane_g9

0xb747,	// (0x00052a8c) main_cset6_slider_pane_g10_ParamLimits

0xb747,	// (0x00052a8c) main_cset6_slider_pane_g10

0xb721,	// (0x00052a66) main_cset6_slider_pane_g11_ParamLimits

0xb721,	// (0x00052a66) main_cset6_slider_pane_g11

0xb753,	// (0x00052a98) main_cset6_slider_pane_g12_ParamLimits

0xb753,	// (0x00052a98) main_cset6_slider_pane_g12

0xb75f,	// (0x00052aa4) main_cset6_slider_pane_g13_ParamLimits

0xb75f,	// (0x00052aa4) main_cset6_slider_pane_g13

0xb76d,	// (0x00052ab2) main_cset6_slider_pane_g14_ParamLimits

0xb76d,	// (0x00052ab2) main_cset6_slider_pane_g14

0xb77b,	// (0x00052ac0) main_cset6_slider_pane_g15_ParamLimits

0xb77b,	// (0x00052ac0) main_cset6_slider_pane_g15

0xb72d,	// (0x00052a72) main_cset6_slider_pane_g16_ParamLimits

0xb72d,	// (0x00052a72) main_cset6_slider_pane_g16

0xb793,	// (0x00052ad8) main_cset6_slider_pane_g17_ParamLimits

0xb793,	// (0x00052ad8) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x00056f2a) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x00056f2a) main_cset6_slider_pane_g

0x27da,	// (0x00049b1f) main_cset6_slider_pane_t1_ParamLimits

0x27da,	// (0x00049b1f) main_cset6_slider_pane_t1

0xb7a1,	// (0x00052ae6) main_cset6_slider_pane_t2_ParamLimits

0xb7a1,	// (0x00052ae6) main_cset6_slider_pane_t2

0xb7cc,	// (0x00052b11) main_cset6_slider_pane_t3_ParamLimits

0xb7cc,	// (0x00052b11) main_cset6_slider_pane_t3

0xb7f7,	// (0x00052b3c) main_cset6_slider_pane_t4_ParamLimits

0xb7f7,	// (0x00052b3c) main_cset6_slider_pane_t4

0xb824,	// (0x00052b69) main_cset6_slider_pane_t5_ParamLimits

0xb824,	// (0x00052b69) main_cset6_slider_pane_t5

0x281b,	// (0x00049b60) main_cset6_slider_pane_t7_ParamLimits

0x281b,	// (0x00049b60) main_cset6_slider_pane_t7

0xb851,	// (0x00052b96) main_cset6_slider_pane_t8_ParamLimits

0xb851,	// (0x00052b96) main_cset6_slider_pane_t8

0xb875,	// (0x00052bba) main_cset6_slider_pane_t9_ParamLimits

0xb875,	// (0x00052bba) main_cset6_slider_pane_t9

0xb899,	// (0x00052bde) main_cset6_slider_pane_t10_ParamLimits

0xb899,	// (0x00052bde) main_cset6_slider_pane_t10

0xb8bd,	// (0x00052c02) main_cset6_slider_pane_t11_ParamLimits

0xb8bd,	// (0x00052c02) main_cset6_slider_pane_t11

0x2851,	// (0x00049b96) main_cset6_slider_pane_t14_ParamLimits

0x2851,	// (0x00049b96) main_cset6_slider_pane_t14

0x288a,	// (0x00049bcf) main_cset6_slider_pane_t15_ParamLimits

0x288a,	// (0x00049bcf) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00056f4f) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00056f4f) main_cset6_slider_pane_t

0x1ffd,	// (0x00049342) cset_slider_pane_g1_copy1

0x2006,	// (0x0004934b) cset_slider_pane_g2_copy1

0x200f,	// (0x00049354) cset_slider_pane_g3_copy1

0x4b88,	// (0x0004becd) bg_popup_sub_pane_cp011_copy1

0x20b0,	// (0x000493f5) main_cset_text_pane_g1_copy1

0x20b8,	// (0x000493fd) main_cset_text_pane_t1_copy1

0x20c6,	// (0x0004940b) main_cset_text_pane_t2_copy1

0x20d4,	// (0x00049419) main_cset_text_pane_t3_copy1

0x20e2,	// (0x00049427) main_cset_text_pane_t4_copy1

0x20f0,	// (0x00049435) main_cset_text_pane_t5_copy1

0x20fe,	// (0x00049443) main_cset_text_pane_t6_copy1

0x210c,	// (0x00049451) main_cset_text_pane_t7_copy1

0xb8e3,	// (0x00052c28) main_cset_text2_pane_t1_copy1

0x4b88,	// (0x0004becd) main_ncimui_pane

0x81a2,	// (0x0004f4e7) popup_query_ncimui_window_ParamLimits

0x81a2,	// (0x0004f4e7) popup_query_ncimui_window

0x167b,	// (0x000489c0) field_cale_ev2_pane_g4_ParamLimits

0x167b,	// (0x000489c0) field_cale_ev2_pane_g4

0x9a48,	// (0x00050d8d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9a48,	// (0x00050d8d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00056c3c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00056c3c) cell_video_dialer_keypad_pane_g

0x9a60,	// (0x00050da5) cell_video_dialer_keypad_pane_t1

0x4b88,	// (0x0004becd) bg_popup_window_pane_cp012

0xdc21,	// (0x00054f66) heading_pane_cp06

0x29b2,	// (0x00049cf7) ncim_query_content_pane

0x4b88,	// (0x0004becd) bg_popup_heading_pane_cp01

0x29ba,	// (0x00049cff) ncim_heading_pane_t1

0x29c8,	// (0x00049d0d) ncim_indicator_popup_pane

0x29da,	// (0x00049d1f) ncim_query_button_pane

0x29ee,	// (0x00049d33) ncim_query_content_pane_t1

0x2a00,	// (0x00049d45) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x00056f8e) ncim_query_content_pane_t

0x2a3a,	// (0x00049d7f) ncim_query_list_pane

0x2a4c,	// (0x00049d91) ncim_query_popup_pane

0x29c8,	// (0x00049d0d) ncim_indicator_popup_pane_ParamLimits

0xb9de,	// (0x00052d23) ncim_query_content_pane_g1_ParamLimits

0xb9de,	// (0x00052d23) ncim_query_content_pane_g1

0x29ee,	// (0x00049d33) ncim_query_content_pane_t1_ParamLimits

0x2a00,	// (0x00049d45) ncim_query_content_pane_t2_ParamLimits

0xb9ea,	// (0x00052d2f) ncim_query_content_pane_t3_ParamLimits

0xb9ea,	// (0x00052d2f) ncim_query_content_pane_t3

0xba07,	// (0x00052d4c) ncim_query_content_pane_t4_ParamLimits

0xba07,	// (0x00052d4c) ncim_query_content_pane_t4

0xba24,	// (0x00052d69) ncim_query_content_pane_t5_ParamLimits

0xba24,	// (0x00052d69) ncim_query_content_pane_t5

0x2a12,	// (0x00049d57) ncim_query_content_pane_t6_ParamLimits

0x2a12,	// (0x00049d57) ncim_query_content_pane_t6

0xfc49,	// (0x00056f8e) ncim_query_content_pane_t_ParamLimits

0x2a3a,	// (0x00049d7f) ncim_query_list_pane_ParamLimits

0x2a4c,	// (0x00049d91) ncim_query_popup_pane_ParamLimits

0x2a60,	// (0x00049da5) wait_bar_pane_cp04

0x4b88,	// (0x0004becd) input_focus_pane_cp011

0x2a68,	// (0x00049dad) ncim_query_popup_pane_t1

0x2a76,	// (0x00049dbb) ncim_list_query_list_pane_ParamLimits

0x2a76,	// (0x00049dbb) ncim_list_query_list_pane

0x4b88,	// (0x0004becd) bg_button_pane_cp027

0x2a89,	// (0x00049dce) ncim_query_button_pane_g1

0x4b88,	// (0x0004becd) list_highlight_pane_cp012

0x2a93,	// (0x00049dd8) ncim_list_query_list_pane_g1

0x2a9b,	// (0x00049de0) ncim_list_query_list_pane_t1

0xa09e,	// (0x000513e3) cam4_indicators_pane_g3_ParamLimits

0xa09e,	// (0x000513e3) cam4_indicators_pane_g3

0xa196,	// (0x000514db) vid4_indicators_pane_g5_ParamLimits

0xa196,	// (0x000514db) vid4_indicators_pane_g5

0xb13f,	// (0x00052484) vid4_progress_pane_g5_ParamLimits

0xb13f,	// (0x00052484) vid4_progress_pane_g5

0xb926,	// (0x00052c6b) main_ncimui_pane_g1

0xb96c,	// (0x00052cb1) ncimui_group_query_pane_ParamLimits

0xb96c,	// (0x00052cb1) ncimui_group_query_pane

0xb9a0,	// (0x00052ce5) ncimui_list_pane_ParamLimits

0xb9a0,	// (0x00052ce5) ncimui_list_pane

0xb9ba,	// (0x00052cff) ncimui_text_pane_ParamLimits

0xb9ba,	// (0x00052cff) ncimui_text_pane

0xba41,	// (0x00052d86) ncimui_text_pane_t1_ParamLimits

0xba41,	// (0x00052d86) ncimui_text_pane_t1

0x2aa9,	// (0x00049dee) ncimui_list_single_graphic_pane_ParamLimits

0x2aa9,	// (0x00049dee) ncimui_list_single_graphic_pane

0xba60,	// (0x00052da5) ncimui_query_pane_ParamLimits

0xba60,	// (0x00052da5) ncimui_query_pane

0x4b88,	// (0x0004becd) list_highlight_pane_cp013

0x2ab9,	// (0x00049dfe) ncim_list_query_list_pane_t1_copy1

0x2a93,	// (0x00049dd8) ncim_list_single_graphic_pane_g1

0x2ac7,	// (0x00049e0c) ncim_query_button_pane_cp01

0x2acf,	// (0x00049e14) ncim_query_entry_pane_ParamLimits

0x2acf,	// (0x00049e14) ncim_query_entry_pane

0x2adf,	// (0x00049e24) ncimui_query_pane_g1

0x2ae7,	// (0x00049e2c) ncimui_query_pane_t1_ParamLimits

0x2ae7,	// (0x00049e2c) ncimui_query_pane_t1

0x4b88,	// (0x0004becd) input_focus_pane_cp012

0x2a68,	// (0x00049dad) ncim_query_entry_pane_t1

0xd40e,	// (0x00054753) main_im_pane_ParamLimits

0xf0f2,	// (0x00056437) main_mobtv_pane_ParamLimits

0xf0f2,	// (0x00056437) main_mobtv_pane

0xb73b,	// (0x00052a80) main_cset6_slider_pane_g18_ParamLimits

0xb73b,	// (0x00052a80) main_cset6_slider_pane_g18

0xb75f,	// (0x00052aa4) main_cset6_slider_pane_g19_ParamLimits

0xb75f,	// (0x00052aa4) main_cset6_slider_pane_g19

0x1dcd,	// (0x00049112) bg_main_mobtv_pane_ParamLimits

0x1dcd,	// (0x00049112) bg_main_mobtv_pane

0xba70,	// (0x00052db5) main_mobtv_info_pane

0xba7b,	// (0x00052dc0) main_mobtv_loading_pane_ParamLimits

0xba7b,	// (0x00052dc0) main_mobtv_loading_pane

0x2b0b,	// (0x00049e50) main_mobtv_pg_channel_list_pane

0x2b15,	// (0x00049e5a) main_mobtv_pg_hdr_pane

0xba88,	// (0x00052dcd) main_mobtv_programe_curr_pane_ParamLimits

0xba88,	// (0x00052dcd) main_mobtv_programe_curr_pane

0xba95,	// (0x00052dda) main_mobtv_programe_next_pane_ParamLimits

0xba95,	// (0x00052dda) main_mobtv_programe_next_pane

0x2b1e,	// (0x00049e63) popup_mobtv_noti_window

0x1373,	// (0x000486b8) main_tv_pg_hdr_pane_g1

0x2b26,	// (0x00049e6b) main_tv_pg_hdr_pane_g2

0x2b2e,	// (0x00049e73) main_tv_pg_hdr_pane_g3

0x2b36,	// (0x00049e7b) main_tv_pg_hdr_pane_g4

0x2b3e,	// (0x00049e83) main_tv_pg_hdr_pane_g5

0x2b48,	// (0x00049e8d) main_tv_pg_hdr_pane_g6

0x2b52,	// (0x00049e97) main_tv_pg_hdr_pane_g7

0x2b5c,	// (0x00049ea1) main_tv_pg_hdr_pane_g8

0x2b66,	// (0x00049eab) main_tv_pg_hdr_pane_g9

0x2b70,	// (0x00049eb5) main_tv_pg_hdr_pane_g10

0x2b7a,	// (0x00049ebf) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x00056f9b) main_tv_pg_hdr_pane_g

0x2b84,	// (0x00049ec9) main_tv_pg_hdr_pane_t1

0x2b92,	// (0x00049ed7) main_tv_pg_hdr_pane_t2

0x2ba0,	// (0x00049ee5) main_tv_pg_hdr_pane_t3

0x2bb0,	// (0x00049ef5) main_tv_pg_hdr_pane_t4

0x2bc0,	// (0x00049f05) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x00056fb2) main_tv_pg_hdr_pane_t

0x2bd0,	// (0x00049f15) single_mobtv_pg_channel_pane_ParamLimits

0x2bd0,	// (0x00049f15) single_mobtv_pg_channel_pane

0x2be2,	// (0x00049f27) single_mobtv_pg_channel_table_pane

0x2beb,	// (0x00049f30) single_mobtv_pg_channel_thumb_pane

0x2bf4,	// (0x00049f39) single_tv_pg_channel_pane_g1

0x2bfd,	// (0x00049f42) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x00056fbd) single_tv_pg_channel_pane_g

0x15da,	// (0x0004891f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x15da,	// (0x0004891f) bg_single_mobtv_pg_channel_thumb_pane

0x2c06,	// (0x00049f4b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2c06,	// (0x00049f4b) single_mobtv_pg_channel_thumb_pane_g1

0x2c14,	// (0x00049f59) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2c14,	// (0x00049f59) single_mobtv_pg_channel_thumb_pane_g2

0x2c20,	// (0x00049f65) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2c20,	// (0x00049f65) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x00056fc2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x00056fc2) single_mobtv_pg_channel_thumb_pane_g

0x2c2c,	// (0x00049f71) single_mobtv_pg_channel_thumb_pane_t1

0x2c3a,	// (0x00049f7f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x00056fc9) single_mobtv_pg_channel_thumb_pane_t

0x1373,	// (0x000486b8) bg_single_mobtv_pg_channel_table_pane_g1

0x1373,	// (0x000486b8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x00056a88) bg_single_mobtv_pg_channel_table_pane_g

0x2c48,	// (0x00049f8d) single_mobtv_pg_channel_table_pane_t1

0x2c56,	// (0x00049f9b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x00056fce) single_mobtv_pg_channel_table_pane_t

0xbaaa,	// (0x00052def) main_mobtv_info_pane_g1_ParamLimits

0xbaaa,	// (0x00052def) main_mobtv_info_pane_g1

0xbac6,	// (0x00052e0b) main_mobtv_info_pane_t1_ParamLimits

0xbac6,	// (0x00052e0b) main_mobtv_info_pane_t1

0xbb3e,	// (0x00052e83) main_mobtv_info_pane_t2_ParamLimits

0xbb3e,	// (0x00052e83) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x00056fd8) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x00056fd8) main_mobtv_info_pane_t

0xbbcd,	// (0x00052f12) wait_bar_pane_cp05

0xbbdf,	// (0x00052f24) main_mobtv_loading_pane_g1_ParamLimits

0xbbdf,	// (0x00052f24) main_mobtv_loading_pane_g1

0xbbed,	// (0x00052f32) main_mobtv_loading_pane_g2_ParamLimits

0xbbed,	// (0x00052f32) main_mobtv_loading_pane_g2

0xbbf9,	// (0x00052f3e) main_mobtv_loading_pane_g3_ParamLimits

0xbbf9,	// (0x00052f3e) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x00056fdf) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x00056fdf) main_mobtv_loading_pane_g

0x2c64,	// (0x00049fa9) main_mobtv_loading_pane_t1_ParamLimits

0x2c64,	// (0x00049fa9) main_mobtv_loading_pane_t1

0x2c7c,	// (0x00049fc1) main_mobtv_loading_pane_t2_ParamLimits

0x2c7c,	// (0x00049fc1) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x00056fe6) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x00056fe6) main_mobtv_loading_pane_t

0xbc07,	// (0x00052f4c) wait_bar_pane_cp06_ParamLimits

0xbc07,	// (0x00052f4c) wait_bar_pane_cp06

0x2ca0,	// (0x00049fe5) main_mobtv_programe_curr_pane_t1

0x2cae,	// (0x00049ff3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x00056feb) main_mobtv_programe_curr_pane_t

0x2cbc,	// (0x0004a001) main_mobtv_programe_next_pane_t1

0x2cca,	// (0x0004a00f) main_mobtv_programe_next_pane_t2

0x2cd8,	// (0x0004a01d) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x00056ff0) main_mobtv_programe_next_pane_t

0x4b88,	// (0x0004becd) bg_popup_mobtv_noti_window_pane

0x2ce6,	// (0x0004a02b) popup_mobtv_noti_window_g1

0x2cee,	// (0x0004a033) popup_mobtv_noti_window_t1

0x2cfc,	// (0x0004a041) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x00056ff7) popup_mobtv_noti_window_t

0x1373,	// (0x000486b8) bg_popup_mobtv_noti_window_pane_g1

0x4b88,	// (0x0004becd) sc_clock_pane

0x4b88,	// (0x0004becd) main_fs_bigclock_pane

0xb327,	// (0x0005266c) blid2_tripm_pane_t4_ParamLimits

0xb327,	// (0x0005266c) blid2_tripm_pane_t4

0xbc13,	// (0x00052f58) sc_clock_pane_g1_ParamLimits

0xbc13,	// (0x00052f58) sc_clock_pane_g1

0xbc21,	// (0x00052f66) sc_clock_pane_t1_ParamLimits

0xbc21,	// (0x00052f66) sc_clock_pane_t1

0xbc34,	// (0x00052f79) sc_clock_pane_t2_ParamLimits

0xbc34,	// (0x00052f79) sc_clock_pane_t2

0xbc46,	// (0x00052f8b) sc_clock_pane_t3_ParamLimits

0xbc46,	// (0x00052f8b) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x00056ffc) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x00056ffc) sc_clock_pane_t

0xc97f,	// (0x00053cc4) main_fs_bigclock_indicator_pane_ParamLimits

0xc97f,	// (0x00053cc4) main_fs_bigclock_indicator_pane

0xbcce,	// (0x00053013) main_fs_bigclock_pane_g1_ParamLimits

0xbcce,	// (0x00053013) main_fs_bigclock_pane_g1

0xc98b,	// (0x00053cd0) main_fs_bigclock_pane_t1_ParamLimits

0xc98b,	// (0x00053cd0) main_fs_bigclock_pane_t1

0xc99d,	// (0x00053ce2) main_fs_bigclock_pane_t2_ParamLimits

0xc99d,	// (0x00053ce2) main_fs_bigclock_pane_t2

0xc9af,	// (0x00053cf4) main_fs_bigclock_pane_t3_ParamLimits

0xc9af,	// (0x00053cf4) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x000571fb) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x000571fb) main_fs_bigclock_pane_t

0xc9c1,	// (0x00053d06) main_fs_bigclock_indicator_pane_g1

0x29e2,	// (0x00049d27) ncim_query_content_pane_g2_ParamLimits

0x29e2,	// (0x00049d27) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x00056f89) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x00056f89) ncim_query_content_pane_g

0xbc5a,	// (0x00052f9f) sc_clock_pane_t4_ParamLimits

0xbc5a,	// (0x00052f9f) sc_clock_pane_t4

0xf0f2,	// (0x00056437) main_radioblah_pane

0x1d30,	// (0x00049075) cell_call4_button_pane_t1_copy1_ParamLimits

0x1d30,	// (0x00049075) cell_call4_button_pane_t1_copy1

0xb92e,	// (0x00052c73) main_ncimui_pane_t1_ParamLimits

0xb92e,	// (0x00052c73) main_ncimui_pane_t1

0xb940,	// (0x00052c85) main_ncimui_pane_t2_ParamLimits

0xb940,	// (0x00052c85) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00056f82) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00056f82) main_ncimui_pane_t

0x2e2c,	// (0x0004a171) main_radioblah_anim_pane_ParamLimits

0x2e2c,	// (0x0004a171) main_radioblah_anim_pane

0x2e3d,	// (0x0004a182) main_radioblah_info_pane_ParamLimits

0x2e3d,	// (0x0004a182) main_radioblah_info_pane

0x2e51,	// (0x0004a196) main_radioblah_pane_t1_ParamLimits

0x2e51,	// (0x0004a196) main_radioblah_pane_t1

0x2e6d,	// (0x0004a1b2) main_radioblah_pane_t2_ParamLimits

0x2e6d,	// (0x0004a1b2) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0005701d) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0005701d) main_radioblah_pane_t

0xbd20,	// (0x00053065) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbd20,	// (0x00053065) main_radioblah_rocker_ctrl_pane

0x2eb5,	// (0x0004a1fa) main_radioblah_info_pane_t1_ParamLimits

0x2eb5,	// (0x0004a1fa) main_radioblah_info_pane_t1

0xbd65,	// (0x000530aa) main_radioblah_info_pane_t2_ParamLimits

0xbd65,	// (0x000530aa) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x00057026) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x00057026) main_radioblah_info_pane_t

0x1373,	// (0x000486b8) main_radioblah_rocker_ctrl_pane_g1

0xbe15,	// (0x0005315a) main_radioblah_rocker_ctrl_pane_g2

0xbe1d,	// (0x00053162) main_radioblah_rocker_ctrl_pane_g3

0xbe25,	// (0x0005316a) main_radioblah_rocker_ctrl_pane_g4

0xbe2d,	// (0x00053172) main_radioblah_rocker_ctrl_pane_g5

0xbe35,	// (0x0005317a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0005702f) main_radioblah_rocker_ctrl_pane_g

0xb8e3,	// (0x00052c28) main_cset_text2_pane_t1_copy1_ParamLimits

0x9fd9,	// (0x0005131e) cam4_image_uncrop_qvga_pane

0xa114,	// (0x00051459) vid4_image_uncrop_qcif_pane

0xb4b5,	// (0x000527fa) cam6_image_uncrop_qvga_pane_ParamLimits

0xb4b5,	// (0x000527fa) cam6_image_uncrop_qvga_pane

0x2639,	// (0x0004997e) vid6_image_uncrop_qcif_pane_ParamLimits

0x2639,	// (0x0004997e) vid6_image_uncrop_qcif_pane

0x4b88,	// (0x0004becd) bg_popup_preview_window_pane_cp03

0x2994,	// (0x00049cd9) list_cset_text2_pane

0x299c,	// (0x00049ce1) main_cset6_text2_pane_g1

0x29a4,	// (0x00049ce9) main_cset6_text2_pane_t1

0xbe3d,	// (0x00053182) list_cset_text2_pane_t1_ParamLimits

0xbe3d,	// (0x00053182) list_cset_text2_pane_t1

0xf0f2,	// (0x00056437) main_radioblah_pane_ParamLimits

0xbbb9,	// (0x00052efe) main_mobtv_info_pane_t3_ParamLimits

0xbbb9,	// (0x00052efe) main_mobtv_info_pane_t3

0xbd0e,	// (0x00053053) main_radioblah_pane_g1

0xbd39,	// (0x0005307e) main_radioblah_info_pane_g1

0xbdba,	// (0x000530ff) main_radioblah_info_pane_t3_ParamLimits

0xbdba,	// (0x000530ff) main_radioblah_info_pane_t3

0x6d42,	// (0x0004e087) highlight_cell_cale_month_pane_ParamLimits

0x6d42,	// (0x0004e087) highlight_cell_cale_month_pane

0x4b88,	// (0x0004becd) main_phob_fisheye_pane

0x1704,	// (0x00048a49) scroll_pane_cp0031_ParamLimits

0x1704,	// (0x00048a49) scroll_pane_cp0031

0x2747,	// (0x00049a8c) wait_bar_pane_cp08_ParamLimits

0xb6c7,	// (0x00052a0c) cset_list_set_pane_copy1_ParamLimits

0x2eef,	// (0x0004a234) highlight_cell_cale_month_pane_g1

0xbe68,	// (0x000531ad) highlight_cell_cale_month_pane_t1

0x2370,	// (0x000496b5) list_gen_pane_cp01

0x1f24,	// (0x00049269) scroll_pane_01

0xbe76,	// (0x000531bb) list_single_double_fisheye_pane

0xbe7f,	// (0x000531c4) list_double_fisheye_pane_g1_ParamLimits

0xbe7f,	// (0x000531c4) list_double_fisheye_pane_g1

0xbe8b,	// (0x000531d0) list_double_fisheye_pane_g2_ParamLimits

0xbe8b,	// (0x000531d0) list_double_fisheye_pane_g2

0xbe9f,	// (0x000531e4) list_double_fisheye_pane_g3_ParamLimits

0xbe9f,	// (0x000531e4) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0005703c) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0005703c) list_double_fisheye_pane_g

0xbec8,	// (0x0005320d) list_double_fisheye_pane_t1_ParamLimits

0xbec8,	// (0x0005320d) list_double_fisheye_pane_t1

0xbee3,	// (0x00053228) list_double_fisheye_pane_t2_ParamLimits

0xbee3,	// (0x00053228) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x00057047) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x00057047) list_double_fisheye_pane_t

0x4b88,	// (0x0004becd) main_call5_pane

0xbc80,	// (0x00052fc5) sc_swipe_pane_ParamLimits

0xbc80,	// (0x00052fc5) sc_swipe_pane

0xbf11,	// (0x00053256) call5_image_pane_ParamLimits

0xbf11,	// (0x00053256) call5_image_pane

0xbf21,	// (0x00053266) call5_swipe_1_pane_ParamLimits

0xbf21,	// (0x00053266) call5_swipe_1_pane

0xbf2d,	// (0x00053272) call5_swipe_2_pane_ParamLimits

0xbf2d,	// (0x00053272) call5_swipe_2_pane

0xbf47,	// (0x0005328c) popup_call5_audio_first_window_ParamLimits

0xbf47,	// (0x0005328c) popup_call5_audio_first_window

0x15da,	// (0x0004891f) call5_swipe_1_pane_g1_ParamLimits

0x15da,	// (0x0004891f) call5_swipe_1_pane_g1

0x2ef7,	// (0x0004a23c) call5_swipe_1_pane_g2_ParamLimits

0x2ef7,	// (0x0004a23c) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0005704c) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0005704c) call5_swipe_1_pane_g

0x2f03,	// (0x0004a248) call5_swipe_1_pane_t1_ParamLimits

0x2f03,	// (0x0004a248) call5_swipe_1_pane_t1

0x15da,	// (0x0004891f) call5_swipe_2_pane_g1_ParamLimits

0x15da,	// (0x0004891f) call5_swipe_2_pane_g1

0x2f18,	// (0x0004a25d) call5_swipe_2_pane_g2_ParamLimits

0x2f18,	// (0x0004a25d) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00057051) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00057051) call5_swipe_2_pane_g

0x2f24,	// (0x0004a269) call5_swipe_2_pane_t1_ParamLimits

0x2f24,	// (0x0004a269) call5_swipe_2_pane_t1

0x2f39,	// (0x0004a27e) sc_swipe_pane_g1_ParamLimits

0x2f39,	// (0x0004a27e) sc_swipe_pane_g1

0x2f46,	// (0x0004a28b) sc_swipe_pane_g2_ParamLimits

0x2f46,	// (0x0004a28b) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x00057056) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x00057056) sc_swipe_pane_g

0x2f52,	// (0x0004a297) sc_swipe_pane_t1_ParamLimits

0x2f52,	// (0x0004a297) sc_swipe_pane_t1

0x4b88,	// (0x0004becd) main_cmail_launcher_pane

0xbf55,	// (0x0005329a) aid_size_cell_cmail_l_ParamLimits

0xbf55,	// (0x0005329a) aid_size_cell_cmail_l

0xbf65,	// (0x000532aa) grid_cmail_l_pane_ParamLimits

0xbf65,	// (0x000532aa) grid_cmail_l_pane

0xbf75,	// (0x000532ba) cell_cmail_l_pane_ParamLimits

0xbf75,	// (0x000532ba) cell_cmail_l_pane

0xbf89,	// (0x000532ce) cell_cmail_l_pane_g1_ParamLimits

0xbf89,	// (0x000532ce) cell_cmail_l_pane_g1

0xbf95,	// (0x000532da) cell_cmail_l_pane_t1_ParamLimits

0xbf95,	// (0x000532da) cell_cmail_l_pane_t1

0x2f67,	// (0x0004a2ac) cell_cmail_l_pane_t2_ParamLimits

0x2f67,	// (0x0004a2ac) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0005705b) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0005705b) cell_cmail_l_pane_t

0xf0f2,	// (0x00056437) grid_highlight_pane_cp018_ParamLimits

0xf0f2,	// (0x00056437) grid_highlight_pane_cp018

0x4cb3,	// (0x0004bff8) main2_pane_ParamLimits

0x4cb3,	// (0x0004bff8) main2_pane

0xd4b9,	// (0x000547fe) popup_sp_fs_action_menu_bg_pane_g1

0xd4c1,	// (0x00054806) popup_sp_fs_action_menu_bg_pane_g2

0xd4c9,	// (0x0005480e) popup_sp_fs_action_menu_bg_pane_g3

0xd4d1,	// (0x00054816) popup_sp_fs_action_menu_bg_pane_g4

0xd4d9,	// (0x0005481e) popup_sp_fs_action_menu_bg_pane_g5

0xd4e1,	// (0x00054826) popup_sp_fs_action_menu_bg_pane_g6

0xd4e9,	// (0x0005482e) popup_sp_fs_action_menu_bg_pane_g7

0xd4f1,	// (0x00054836) popup_sp_fs_action_menu_bg_pane_g8

0xd4f9,	// (0x0005483e) popup_sp_fs_action_menu_bg_pane_g9

0xd501,	// (0x00054846) popup_sp_fs_action_menu_bg_pane_g10

0xd501,	// (0x00054846) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00056534) popup_sp_fs_action_menu_bg_pane_g

0x0a90,	// (0x00047dd5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x2_t3_g3_g1

0x0a9c,	// (0x00047de1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0a9c,	// (0x00047de1) list_medium_line_x2_t3_g3_g2

0x0aa8,	// (0x00047ded) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0aa8,	// (0x00047ded) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x000565e4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x000565e4) list_medium_line_x2_t3_g3_g

0x0ab4,	// (0x00047df9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ab4,	// (0x00047df9) list_medium_line_x2_t3_g3_t1

0x6018,	// (0x0004d35d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6018,	// (0x0004d35d) list_medium_line_x2_t3_g3_t2

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x000565eb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x000565eb) list_medium_line_x2_t3_g3_t

0x0a90,	// (0x00047dd5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x2_t3_g2_g1

0x0aa8,	// (0x00047ded) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0aa8,	// (0x00047ded) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x000565f2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x000565f2) list_medium_line_x2_t3_g2_g

0x0ade,	// (0x00047e23) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0ade,	// (0x00047e23) list_medium_line_x2_t3_g2_t1

0x0af4,	// (0x00047e39) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0af4,	// (0x00047e39) list_medium_line_x2_t3_g2_t2

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x000565f7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x000565f7) list_medium_line_x2_t3_g2_t

0x0a90,	// (0x00047dd5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x2_t4_g4_g1

0x0b06,	// (0x00047e4b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0b06,	// (0x00047e4b) list_medium_line_x2_t4_g4_g2

0x0a9c,	// (0x00047de1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0a9c,	// (0x00047de1) list_medium_line_x2_t4_g4_g3

0x0b12,	// (0x00047e57) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0b12,	// (0x00047e57) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x000565fe) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x000565fe) list_medium_line_x2_t4_g4_g

0x602c,	// (0x0004d371) list_medium_line_x2_t4_g4_t1_ParamLimits

0x602c,	// (0x0004d371) list_medium_line_x2_t4_g4_t1

0x6043,	// (0x0004d388) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6043,	// (0x0004d388) list_medium_line_x2_t4_g4_t2

0x6058,	// (0x0004d39d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6058,	// (0x0004d39d) list_medium_line_x2_t4_g4_t3

0x0b1e,	// (0x00047e63) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0b1e,	// (0x00047e63) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00056607) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00056607) list_medium_line_x2_t4_g4_t

0x0a90,	// (0x00047dd5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x2_t2_g4_g1

0x0b06,	// (0x00047e4b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0b06,	// (0x00047e4b) list_medium_line_x2_t2_g4_g2

0x0a9c,	// (0x00047de1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0a9c,	// (0x00047de1) list_medium_line_x2_t2_g4_g3

0x0aa8,	// (0x00047ded) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0aa8,	// (0x00047ded) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0005666e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0005666e) list_medium_line_x2_t2_g4_g

0x0b30,	// (0x00047e75) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0b30,	// (0x00047e75) list_medium_line_x2_t2_g4_t1

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00056677) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00056677) list_medium_line_x2_t2_g4_t

0x0a90,	// (0x00047dd5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x2_t2_g3_g1

0x0a9c,	// (0x00047de1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0a9c,	// (0x00047de1) list_medium_line_x2_t2_g3_g2

0x0aa8,	// (0x00047ded) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0aa8,	// (0x00047ded) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x000565e4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x000565e4) list_medium_line_x2_t2_g3_g

0x0b45,	// (0x00047e8a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0b45,	// (0x00047e8a) list_medium_line_x2_t2_g3_t1

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0005667c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0005667c) list_medium_line_x2_t2_g3_t

0x6fbe,	// (0x0004e303) main_sp_fs_list_pane_ParamLimits

0x6fbe,	// (0x0004e303) main_sp_fs_list_pane

0x6fca,	// (0x0004e30f) sp_fs_scroll_pane_ParamLimits

0x6fca,	// (0x0004e30f) sp_fs_scroll_pane

0x6fd6,	// (0x0004e31b) list_medium_line_x2_t3_t1

0x6fe6,	// (0x0004e32b) list_medium_line_x2_t3_t2

0x0b88,	// (0x00047ecd) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x000566c7) list_medium_line_x2_t3_t

0x6ff4,	// (0x0004e339) list_medium_line_x3_t4_t1

0x7004,	// (0x0004e349) list_medium_line_x3_t4_t2

0x0b96,	// (0x00047edb) list_medium_line_x3_t4_t3

0x0b88,	// (0x00047ecd) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x000566ce) list_medium_line_x3_t4_t

0x7012,	// (0x0004e357) list_medium_line_x4_t5_t1

0x7022,	// (0x0004e367) list_medium_line_x4_t5_t2

0x0b96,	// (0x00047edb) list_medium_line_x4_t5_t3

0x0ba4,	// (0x00047ee9) list_medium_line_x4_t5_t4

0x0b88,	// (0x00047ecd) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x000566d7) list_medium_line_x4_t5_t

0x0a90,	// (0x00047dd5) list_medium_line_t4_g4_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_t4_g4_g1

0x0b12,	// (0x00047e57) list_medium_line_t4_g4_g2_ParamLimits

0x0b12,	// (0x00047e57) list_medium_line_t4_g4_g2

0x0bb2,	// (0x00047ef7) list_medium_line_t4_g4_g3_ParamLimits

0x0bb2,	// (0x00047ef7) list_medium_line_t4_g4_g3

0x0aa8,	// (0x00047ded) list_medium_line_t4_g4_g4_ParamLimits

0x0aa8,	// (0x00047ded) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x000566e2) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x000566e2) list_medium_line_t4_g4_g

0x0bbe,	// (0x00047f03) list_medium_line_t4_g4_t1_ParamLimits

0x0bbe,	// (0x00047f03) list_medium_line_t4_g4_t1

0x0bd3,	// (0x00047f18) list_medium_line_t4_g4_t2_ParamLimits

0x0bd3,	// (0x00047f18) list_medium_line_t4_g4_t2

0x0be8,	// (0x00047f2d) list_medium_line_t4_g4_t3_ParamLimits

0x0be8,	// (0x00047f2d) list_medium_line_t4_g4_t3

0x0ac9,	// (0x00047e0e) list_medium_line_t4_g4_t4_ParamLimits

0x0ac9,	// (0x00047e0e) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x000566eb) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x000566eb) list_medium_line_t4_g4_t

0x7117,	// (0x0004e45c) chi_dic_find_pane_g1

0x8171,	// (0x0004f4b6) main_tport_pane

0x2041,	// (0x00049386) list_medium_line_plain_t1

0x2057,	// (0x0004939c) list_medium_line_t2_g2_g1_ParamLimits

0x2057,	// (0x0004939c) list_medium_line_t2_g2_g1

0x2063,	// (0x000493a8) list_medium_line_t2_g2_g2_ParamLimits

0x2063,	// (0x000493a8) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00056d9e) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00056d9e) list_medium_line_t2_g2_g

0xabc6,	// (0x00051f0b) list_medium_line_t2_g2_t1_ParamLimits

0xabc6,	// (0x00051f0b) list_medium_line_t2_g2_t1

0xabe0,	// (0x00051f25) list_medium_line_t2_g2_t2_ParamLimits

0xabe0,	// (0x00051f25) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00056da3) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00056da3) list_medium_line_t2_g2_t

0x2379,	// (0x000496be) aid_sp_fs_list_icon_a_sm

0x2381,	// (0x000496c6) aid_sp_fs_list_icon_d

0x2389,	// (0x000496ce) aid_sp_fs_text_primary

0x2392,	// (0x000496d7) aid_sp_fs_text_secondary

0x239b,	// (0x000496e0) list_medium_line

0x239b,	// (0x000496e0) list_medium_line_g2

0x239b,	// (0x000496e0) list_medium_line_g3

0x239b,	// (0x000496e0) list_medium_line_plain

0x239b,	// (0x000496e0) list_medium_line_plain_t2

0x239b,	// (0x000496e0) list_medium_line_plain_t3

0x239b,	// (0x000496e0) list_medium_line_right_icon

0x239b,	// (0x000496e0) list_medium_line_right_iconx2

0x239b,	// (0x000496e0) list_medium_line_t2

0x239b,	// (0x000496e0) list_medium_line_t2_g2

0x239b,	// (0x000496e0) list_medium_line_t2_g3

0x239b,	// (0x000496e0) list_medium_line_t2_right_icon

0x239b,	// (0x000496e0) list_medium_line_t2_right_iconx2

0x239b,	// (0x000496e0) list_medium_line_t3

0x239b,	// (0x000496e0) list_medium_line_t3_g2

0x239b,	// (0x000496e0) list_medium_line_t3_g3

0x239b,	// (0x000496e0) list_medium_line_t3_right_iconx2

0x23a4,	// (0x000496e9) list_medium_line_t4_g4

0x23ad,	// (0x000496f2) list_medium_line_x2

0x23ad,	// (0x000496f2) list_medium_line_x2_t2_g2

0x23ad,	// (0x000496f2) list_medium_line_x2_t2_g3

0x23ad,	// (0x000496f2) list_medium_line_x2_t2_g4

0x23ad,	// (0x000496f2) list_medium_line_x2_t3

0x23ad,	// (0x000496f2) list_medium_line_x2_t3_g2

0x23ad,	// (0x000496f2) list_medium_line_x2_t3_g3

0x23ad,	// (0x000496f2) list_medium_line_x2_t3_g4

0x23ad,	// (0x000496f2) list_medium_line_x2_t4_g2

0x23ad,	// (0x000496f2) list_medium_line_x2_t4_g4

0x23b6,	// (0x000496fb) list_medium_line_x3

0x23b6,	// (0x000496fb) list_medium_line_x3_t4

0x23b6,	// (0x000496fb) list_medium_line_x3_t4_g4

0x23a4,	// (0x000496e9) list_medium_line_x4_t4

0x23a4,	// (0x000496e9) list_medium_line_x4_t4_g7

0x23a4,	// (0x000496e9) list_medium_line_x4_t5

0x23bf,	// (0x00049704) list_single_fs_dyc_pane_ParamLimits

0x23bf,	// (0x00049704) list_single_fs_dyc_pane

0x0a90,	// (0x00047dd5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x4_t4_g7_g1

0x28c3,	// (0x00049c08) list_medium_line_x4_t4_g7_g2_ParamLimits

0x28c3,	// (0x00049c08) list_medium_line_x4_t4_g7_g2

0x28cf,	// (0x00049c14) list_medium_line_x4_t4_g7_g3_ParamLimits

0x28cf,	// (0x00049c14) list_medium_line_x4_t4_g7_g3

0x28de,	// (0x00049c23) list_medium_line_x4_t4_g7_g4_ParamLimits

0x28de,	// (0x00049c23) list_medium_line_x4_t4_g7_g4

0x28ea,	// (0x00049c2f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x28ea,	// (0x00049c2f) list_medium_line_x4_t4_g7_g5

0x28f9,	// (0x00049c3e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x28f9,	// (0x00049c3e) list_medium_line_x4_t4_g7_g6

0x2908,	// (0x00049c4d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2908,	// (0x00049c4d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x00056f68) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x00056f68) list_medium_line_x4_t4_g7_g

0x2914,	// (0x00049c59) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2914,	// (0x00049c59) list_medium_line_x4_t4_g7_t1

0x2929,	// (0x00049c6e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2929,	// (0x00049c6e) list_medium_line_x4_t4_g7_t2

0x293e,	// (0x00049c83) list_medium_line_x4_t4_g7_t3_ParamLimits

0x293e,	// (0x00049c83) list_medium_line_x4_t4_g7_t3

0x2953,	// (0x00049c98) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2953,	// (0x00049c98) list_medium_line_x4_t4_g7_t4

0x2965,	// (0x00049caa) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2965,	// (0x00049caa) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x00056f77) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x00056f77) list_medium_line_x4_t4_g7_t

0x2977,	// (0x00049cbc) list_single_dyc_row_pane_ParamLimits

0x2977,	// (0x00049cbc) list_single_dyc_row_pane

0xbf05,	// (0x0005324a) call5_gesture_pane_ParamLimits

0xbf05,	// (0x0005324a) call5_gesture_pane

0xbf39,	// (0x0005327e) call5_windows_pane_ParamLimits

0xbf39,	// (0x0005327e) call5_windows_pane

0xbfab,	// (0x000532f0) call5_swipe_1_pane_cp_ParamLimits

0xbfab,	// (0x000532f0) call5_swipe_1_pane_cp

0xbfb7,	// (0x000532fc) call5_swipe_2_pane_cp_ParamLimits

0xbfb7,	// (0x000532fc) call5_swipe_2_pane_cp

0xde9e,	// (0x000551e3) call5_image_pane_cp

0xbfc3,	// (0x00053308) popup_call5_audio_first_window_cp_ParamLimits

0xbfc3,	// (0x00053308) popup_call5_audio_first_window_cp

0x2f39,	// (0x0004a27e) call5_swipe_1_pane_g1_cp_ParamLimits

0x2f39,	// (0x0004a27e) call5_swipe_1_pane_g1_cp

0x2f79,	// (0x0004a2be) call5_swipe_1_pane_g2_cp

0x2f52,	// (0x0004a297) call5_swipe_1_pane_t1_cp_ParamLimits

0x2f52,	// (0x0004a297) call5_swipe_1_pane_t1_cp

0x2f39,	// (0x0004a27e) call5_swipe_2_pane_g1_cp_ParamLimits

0x2f39,	// (0x0004a27e) call5_swipe_2_pane_g1_cp

0x2f81,	// (0x0004a2c6) call5_swipe_2_pane_g2_cp

0x2f89,	// (0x0004a2ce) call5_swipe_2_pane_t1_cp_ParamLimits

0x2f89,	// (0x0004a2ce) call5_swipe_2_pane_t1_cp

0xf0f2,	// (0x00056437) main_sp_fs_email_pane

0x2f9e,	// (0x0004a2e3) main_sp_fs_listscroll_pane_te

0x2fa7,	// (0x0004a2ec) popup_sp_fs_action_menu_pane_ParamLimits

0x2fa7,	// (0x0004a2ec) popup_sp_fs_action_menu_pane

0x1373,	// (0x000486b8) bg_sp_fs_ctrlbar_pane_g1

0x2fe7,	// (0x0004a32c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2ff0,	// (0x0004a335) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2ff9,	// (0x0004a33e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1373,	// (0x000486b8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00057060) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1156,	// (0x0004849b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1156,	// (0x0004849b) bg_sp_fs_ctrlbar_ddmenu_pane

0x3002,	// (0x0004a347) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3002,	// (0x0004a347) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x300e,	// (0x0004a353) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x300e,	// (0x0004a353) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x00057069) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x00057069) main_sp_fs_ctrlbar_ddmenu_pane_g

0x301a,	// (0x0004a35f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x301a,	// (0x0004a35f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3034,	// (0x0004a379) list_medium_line_t2_right_icon_g1

0xbfcf,	// (0x00053314) list_medium_line_t2_right_icon_t1

0xbfdf,	// (0x00053324) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0005706e) list_medium_line_t2_right_icon_t

0x0e6b,	// (0x000481b0) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0e6b,	// (0x000481b0) bg_sp_fs_ctrlbar_pane

0xc044,	// (0x00053389) main_sp_fs_ctrlbar_button_pane_cp01

0xc04c,	// (0x00053391) main_sp_fs_ctrlbar_ddmenu_pane

0xf123,	// (0x00056468) main_sp_fs_ctrlbar_pane_g1

0x3074,	// (0x0004a3b9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x00057073) main_sp_fs_ctrlbar_pane_g

0x3080,	// (0x0004a3c5) main_sp_fs_ctrlbar_pane_t1

0xc056,	// (0x0005339b) main_sp_fs_ctrlbar_pane

0xc072,	// (0x000533b7) main_sp_fs_listscroll_pane_te_cp01

0xc083,	// (0x000533c8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc083,	// (0x000533c8) popup_sp_fs_action_menu_pane_cp01

0xf0f2,	// (0x00056437) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0f2,	// (0x00056437) bg_sp_fs_highlight_list_pane_cp01

0x3095,	// (0x0004a3da) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3095,	// (0x0004a3da) sp_fs_action_menu_list_gene_pane_g1

0x30a4,	// (0x0004a3e9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x30a4,	// (0x0004a3e9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x00057078) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x00057078) sp_fs_action_menu_list_gene_pane_g

0x30b1,	// (0x0004a3f6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x30b1,	// (0x0004a3f6) sp_fs_action_menu_list_gene_pane_t1

0x30c9,	// (0x0004a40e) sp_fs_action_menu_list_gene_pane_ParamLimits

0x30c9,	// (0x0004a40e) sp_fs_action_menu_list_gene_pane

0x30e6,	// (0x0004a42b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x30e6,	// (0x0004a42b) popup_sp_fs_action_menu_bg_pane

0x30f4,	// (0x0004a439) sp_fs_action_menu_list_pane_ParamLimits

0x30f4,	// (0x0004a439) sp_fs_action_menu_list_pane

0x3112,	// (0x0004a457) sp_fs_scroll_pane_cp01_ParamLimits

0x3112,	// (0x0004a457) sp_fs_scroll_pane_cp01

0xc09b,	// (0x000533e0) list_medium_line_plain_t2_t1

0xc0ab,	// (0x000533f0) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0005707d) list_medium_line_plain_t2_t

0xc0b9,	// (0x000533fe) list_medium_line_plain_t3_t1

0xc0c9,	// (0x0005340e) list_medium_line_plain_t3_t2

0xc0d7,	// (0x0005341c) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00057082) list_medium_line_plain_t3_t

0x0a90,	// (0x00047dd5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x2_t2_g2_g1

0x0aa8,	// (0x00047ded) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0aa8,	// (0x00047ded) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x000565f2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x000565f2) list_medium_line_x2_t2_g2_g

0x0bbe,	// (0x00047f03) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0bbe,	// (0x00047f03) list_medium_line_x2_t2_g2_t1

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x00057089) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x00057089) list_medium_line_x2_t2_g2_t

0x0a90,	// (0x00047dd5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x2_t4_g2_g1

0x3138,	// (0x0004a47d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3138,	// (0x0004a47d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0005708e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0005708e) list_medium_line_x2_t4_g2_g

0xc0e5,	// (0x0005342a) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc0e5,	// (0x0005342a) list_medium_line_x2_t4_g2_t1

0xc0ff,	// (0x00053444) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc0ff,	// (0x00053444) list_medium_line_x2_t4_g2_t2

0xc114,	// (0x00053459) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc114,	// (0x00053459) list_medium_line_x2_t4_g2_t3

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x00057093) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x00057093) list_medium_line_x2_t4_g2_t

0x314a,	// (0x0004a48f) list_medium_line_t3_right_iconx2_g1

0x3034,	// (0x0004a379) list_medium_line_t3_right_iconx2_g2

0xc129,	// (0x0005346e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0005709c) list_medium_line_t3_right_iconx2_g

0xc131,	// (0x00053476) list_medium_line_t3_right_iconx2_t1

0xc141,	// (0x00053486) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x000570a3) list_medium_line_t3_right_iconx2_t

0x0a90,	// (0x00047dd5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x3_t4_g4_g1

0x0a9c,	// (0x00047de1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0a9c,	// (0x00047de1) list_medium_line_x3_t4_g4_g2

0x0b12,	// (0x00047e57) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0b12,	// (0x00047e57) list_medium_line_x3_t4_g4_g3

0x3152,	// (0x0004a497) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3152,	// (0x0004a497) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x000570a8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x000570a8) list_medium_line_x3_t4_g4_g

0xc14f,	// (0x00053494) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc14f,	// (0x00053494) list_medium_line_x3_t4_g4_t1

0xc166,	// (0x000534ab) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc166,	// (0x000534ab) list_medium_line_x3_t4_g4_t2

0x0bd3,	// (0x00047f18) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0bd3,	// (0x00047f18) list_medium_line_x3_t4_g4_t3

0x315e,	// (0x0004a4a3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x315e,	// (0x0004a4a3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x000570b1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x000570b1) list_medium_line_x3_t4_g4_t

0xc17b,	// (0x000534c0) list_single_dyc_row_text_pane_t1_ParamLimits

0xc17b,	// (0x000534c0) list_single_dyc_row_text_pane_t1

0xc1b2,	// (0x000534f7) list_single_dyc_row_text_pane_t2_ParamLimits

0xc1b2,	// (0x000534f7) list_single_dyc_row_text_pane_t2

0x317b,	// (0x0004a4c0) list_single_dyc_row_text_pane_t3_ParamLimits

0x317b,	// (0x0004a4c0) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x000570ba) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x000570ba) list_single_dyc_row_text_pane_t

0x318d,	// (0x0004a4d2) list_single_dyc_row_pane_g1_ParamLimits

0x318d,	// (0x0004a4d2) list_single_dyc_row_pane_g1

0x3199,	// (0x0004a4de) list_single_dyc_row_pane_g2_ParamLimits

0x3199,	// (0x0004a4de) list_single_dyc_row_pane_g2

0x31a5,	// (0x0004a4ea) list_single_dyc_row_pane_g3_ParamLimits

0x31a5,	// (0x0004a4ea) list_single_dyc_row_pane_g3

0x31b1,	// (0x0004a4f6) list_single_dyc_row_pane_g4_ParamLimits

0x31b1,	// (0x0004a4f6) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x000570c1) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x000570c1) list_single_dyc_row_pane_g

0x31bd,	// (0x0004a502) list_single_dyc_row_text_pane_ParamLimits

0x31bd,	// (0x0004a502) list_single_dyc_row_text_pane

0x4b88,	// (0x0004becd) bg_sp_fs_scroll_pane

0x31dc,	// (0x0004a521) thumb_sp_fs_scroll_pane

0x2057,	// (0x0004939c) list_medium_line_g1_ParamLimits

0x2057,	// (0x0004939c) list_medium_line_g1

0x31e5,	// (0x0004a52a) list_medium_line_t1_ParamLimits

0x31e5,	// (0x0004a52a) list_medium_line_t1

0x0a90,	// (0x00047dd5) list_medium_line_x2_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x2_g1

0x0a9c,	// (0x00047de1) list_medium_line_x2_g2_ParamLimits

0x0a9c,	// (0x00047de1) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x000570ca) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x000570ca) list_medium_line_x2_g

0x31fa,	// (0x0004a53f) list_medium_line_x2_t1_ParamLimits

0x31fa,	// (0x0004a53f) list_medium_line_x2_t1

0x0a90,	// (0x00047dd5) list_medium_line_x3_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x3_g1

0x0a9c,	// (0x00047de1) list_medium_line_x3_g2_ParamLimits

0x0a9c,	// (0x00047de1) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x000570ca) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x000570ca) list_medium_line_x3_g

0x31fa,	// (0x0004a53f) list_medium_line_x3_t1_ParamLimits

0x31fa,	// (0x0004a53f) list_medium_line_x3_t1

0x3210,	// (0x0004a555) thumb_sp_fs_scroll_pane_g1

0x3219,	// (0x0004a55e) thumb_sp_fs_scroll_pane_g2

0x3222,	// (0x0004a567) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x000570cf) thumb_sp_fs_scroll_pane_g

0x3210,	// (0x0004a555) bg_sp_fs_scroll_pane_g1

0x3219,	// (0x0004a55e) bg_sp_fs_scroll_pane_g2

0x3222,	// (0x0004a567) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x000570cf) bg_sp_fs_scroll_pane_g

0x0a90,	// (0x00047dd5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0a90,	// (0x00047dd5) list_medium_line_x2_t3_g4_g1

0x0b06,	// (0x00047e4b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0b06,	// (0x00047e4b) list_medium_line_x2_t3_g4_g2

0x0a9c,	// (0x00047de1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0a9c,	// (0x00047de1) list_medium_line_x2_t3_g4_g3

0x0aa8,	// (0x00047ded) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0aa8,	// (0x00047ded) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0005666e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0005666e) list_medium_line_x2_t3_g4_g

0xc20c,	// (0x00053551) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc20c,	// (0x00053551) list_medium_line_x2_t3_g4_t1

0xc222,	// (0x00053567) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc222,	// (0x00053567) list_medium_line_x2_t3_g4_t2

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ac9,	// (0x00047e0e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x000570d6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x000570d6) list_medium_line_x2_t3_g4_t

0x2057,	// (0x0004939c) list_medium_line_g2_g1_ParamLimits

0x2057,	// (0x0004939c) list_medium_line_g2_g1

0x2063,	// (0x000493a8) list_medium_line_g2_g2_ParamLimits

0x2063,	// (0x000493a8) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00056d9e) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00056d9e) list_medium_line_g2_g

0x322b,	// (0x0004a570) list_medium_line_g2_t1_ParamLimits

0x322b,	// (0x0004a570) list_medium_line_g2_t1

0x2057,	// (0x0004939c) list_medium_line_t3_g2_g1_ParamLimits

0x2057,	// (0x0004939c) list_medium_line_t3_g2_g1

0x2063,	// (0x000493a8) list_medium_line_t3_g2_g2_ParamLimits

0x2063,	// (0x000493a8) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00056d9e) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00056d9e) list_medium_line_t3_g2_g

0xc23b,	// (0x00053580) list_medium_line_t3_g2_t1_ParamLimits

0xc23b,	// (0x00053580) list_medium_line_t3_g2_t1

0xc255,	// (0x0005359a) list_medium_line_t3_g2_t2_ParamLimits

0xc255,	// (0x0005359a) list_medium_line_t3_g2_t2

0xc26a,	// (0x000535af) list_medium_line_t3_g2_t3_ParamLimits

0xc26a,	// (0x000535af) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x000570dd) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x000570dd) list_medium_line_t3_g2_t

0x3034,	// (0x0004a379) list_medium_line_right_icon_g1

0x3240,	// (0x0004a585) list_medium_line_right_icon_t1

0x2057,	// (0x0004939c) list_medium_line_t2_g1_ParamLimits

0x2057,	// (0x0004939c) list_medium_line_t2_g1

0xc280,	// (0x000535c5) list_medium_line_t2_t1_ParamLimits

0xc280,	// (0x000535c5) list_medium_line_t2_t1

0xc297,	// (0x000535dc) list_medium_line_t2_t2_ParamLimits

0xc297,	// (0x000535dc) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x000570e4) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x000570e4) list_medium_line_t2_t

0x2057,	// (0x0004939c) list_medium_line_t3_g1_ParamLimits

0x2057,	// (0x0004939c) list_medium_line_t3_g1

0xc2a9,	// (0x000535ee) list_medium_line_t3_t1_ParamLimits

0xc2a9,	// (0x000535ee) list_medium_line_t3_t1

0xc2c0,	// (0x00053605) list_medium_line_t3_t2_ParamLimits

0xc2c0,	// (0x00053605) list_medium_line_t3_t2

0xc2d5,	// (0x0005361a) list_medium_line_t3_t3_ParamLimits

0xc2d5,	// (0x0005361a) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x000570e9) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x000570e9) list_medium_line_t3_t

0x2057,	// (0x0004939c) list_medium_line_g3_g1_ParamLimits

0x2057,	// (0x0004939c) list_medium_line_g3_g1

0x324e,	// (0x0004a593) list_medium_line_g3_g2_ParamLimits

0x324e,	// (0x0004a593) list_medium_line_g3_g2

0x2063,	// (0x000493a8) list_medium_line_g3_g3_ParamLimits

0x2063,	// (0x000493a8) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x000570f0) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x000570f0) list_medium_line_g3_g

0x325a,	// (0x0004a59f) list_medium_line_g3_t1_ParamLimits

0x325a,	// (0x0004a59f) list_medium_line_g3_t1

0x2057,	// (0x0004939c) list_medium_line_t2_g3_g1_ParamLimits

0x2057,	// (0x0004939c) list_medium_line_t2_g3_g1

0x324e,	// (0x0004a593) list_medium_line_t2_g3_g2_ParamLimits

0x324e,	// (0x0004a593) list_medium_line_t2_g3_g2

0x2063,	// (0x000493a8) list_medium_line_t2_g3_g3_ParamLimits

0x2063,	// (0x000493a8) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x000570f0) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x000570f0) list_medium_line_t2_g3_g

0xc2e7,	// (0x0005362c) list_medium_line_t2_g3_t1_ParamLimits

0xc2e7,	// (0x0005362c) list_medium_line_t2_g3_t1

0xc301,	// (0x00053646) list_medium_line_t2_g3_t2_ParamLimits

0xc301,	// (0x00053646) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x000570f7) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x000570f7) list_medium_line_t2_g3_t

0x2057,	// (0x0004939c) list_medium_line_t3_g3_g1_ParamLimits

0x2057,	// (0x0004939c) list_medium_line_t3_g3_g1

0x324e,	// (0x0004a593) list_medium_line_t3_g3_g2_ParamLimits

0x324e,	// (0x0004a593) list_medium_line_t3_g3_g2

0x2063,	// (0x000493a8) list_medium_line_t3_g3_g3_ParamLimits

0x2063,	// (0x000493a8) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x000570f0) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x000570f0) list_medium_line_t3_g3_g

0xc316,	// (0x0005365b) list_medium_line_t3_g3_t1_ParamLimits

0xc316,	// (0x0005365b) list_medium_line_t3_g3_t1

0xc32f,	// (0x00053674) list_medium_line_t3_g3_t2_ParamLimits

0xc32f,	// (0x00053674) list_medium_line_t3_g3_t2

0xc345,	// (0x0005368a) list_medium_line_t3_g3_t3_ParamLimits

0xc345,	// (0x0005368a) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x000570fc) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x000570fc) list_medium_line_t3_g3_t

0x314a,	// (0x0004a48f) list_medium_line_right_iconx2_g1

0x3034,	// (0x0004a379) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00057103) list_medium_line_right_iconx2_g

0x326f,	// (0x0004a5b4) list_medium_line_right_iconx2_t1

0x314a,	// (0x0004a48f) list_medium_line_t2_right_iconx2_g1

0x3034,	// (0x0004a379) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00057103) list_medium_line_t2_right_iconx2_g

0xc35b,	// (0x000536a0) list_medium_line_t2_right_iconx2_t1

0xc36b,	// (0x000536b0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x00057108) list_medium_line_t2_right_iconx2_t

0x327d,	// (0x0004a5c2) list_medium_line_x4_t4_t1

0xc379,	// (0x000536be) list_medium_line_x4_t4_t2

0xc389,	// (0x000536ce) list_medium_line_x4_t4_t3

0xc399,	// (0x000536de) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0005710d) list_medium_line_x4_t4_t

0xc3d2,	// (0x00053717) tport_appsw_pane_ParamLimits

0xc3d2,	// (0x00053717) tport_appsw_pane

0xc3de,	// (0x00053723) tport_contact_pane_ParamLimits

0xc3de,	// (0x00053723) tport_contact_pane

0xc3ee,	// (0x00053733) tport_listscroll_pane_ParamLimits

0xc3ee,	// (0x00053733) tport_listscroll_pane

0xc3fe,	// (0x00053743) cell_tport_appsw_pane_ParamLimits

0xc3fe,	// (0x00053743) cell_tport_appsw_pane

0x1687,	// (0x000489cc) tport_appsw_pane_g1_ParamLimits

0x1687,	// (0x000489cc) tport_appsw_pane_g1

0x328b,	// (0x0004a5d0) tport_contact_pane_g1

0x3294,	// (0x0004a5d9) tport_contact_pane_t1

0x32a2,	// (0x0004a5e7) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x00057116) tport_contact_pane_t

0x32b0,	// (0x0004a5f5) list_tport_pane

0x32b9,	// (0x0004a5fe) scroll_pane_cp_030

0xc413,	// (0x00053758) cell_tport_appsw_pane_g1

0x32c2,	// (0x0004a607) cell_tport_appsw_pane_t1

0x4b88,	// (0x0004becd) grid_highlight_pane_cp019

0xc42b,	// (0x00053770) list_tport_double_graphic_pane_ParamLimits

0xc42b,	// (0x00053770) list_tport_double_graphic_pane

0xf0f2,	// (0x00056437) list_highlight_pane_cp023_ParamLimits

0xf0f2,	// (0x00056437) list_highlight_pane_cp023

0xc43e,	// (0x00053783) list_tport_double_graphic_pane_g1_ParamLimits

0xc43e,	// (0x00053783) list_tport_double_graphic_pane_g1

0xc44b,	// (0x00053790) list_tport_double_graphic_pane_t1_ParamLimits

0xc44b,	// (0x00053790) list_tport_double_graphic_pane_t1

0xc460,	// (0x000537a5) list_tport_double_graphic_pane_t2_ParamLimits

0xc460,	// (0x000537a5) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x00057122) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x00057122) list_tport_double_graphic_pane_t

0x4b88,	// (0x0004becd) main_cale_note_pane

0xa36a,	// (0x000516af) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa36a,	// (0x000516af) cell_vitu2_function_top_wide_pane_cp01

0xbbcd,	// (0x00052f12) wait_bar_pane_cp05_ParamLimits

0x4b88,	// (0x0004becd) listscroll_cmail_pane

0x32d8,	// (0x0004a61d) list_cmail_pane

0xc47c,	// (0x000537c1) list_cmail_body_pane

0xc4a0,	// (0x000537e5) list_single_cmail_header_caption_pane

0xc4ce,	// (0x00053813) list_single_cmail_header_detail_pane_ParamLimits

0xc4ce,	// (0x00053813) list_single_cmail_header_detail_pane

0xc506,	// (0x0005384b) list_single_cmail_header_caption_pane_t1

0xc516,	// (0x0005385b) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc516,	// (0x0005385b) list_single_cmail_header_detail_pane_g1

0x32f8,	// (0x0004a63d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x32f8,	// (0x0004a63d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x00057127) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x00057127) list_single_cmail_header_detail_pane_g

0x3311,	// (0x0004a656) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3311,	// (0x0004a656) list_single_cmail_header_detail_pane_t1

0x3343,	// (0x0004a688) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3343,	// (0x0004a688) list_single_cmail_header_editor_pane_bg

0x3355,	// (0x0004a69a) list_cmail_body_pane_g1

0x335e,	// (0x0004a6a3) list_cmail_body_pane_t1

0x1e0a,	// (0x0004914f) list_single_cmail_header_editor_pane_bg_g1

0xd826,	// (0x00054b6b) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1e1a,	// (0x0004915f) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1e12,	// (0x00049157) list_single_cmail_header_editor_pane_bg_g1_copy3

0x204f,	// (0x00049394) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1e3a,	// (0x0004917f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1e2a,	// (0x0004916f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1e32,	// (0x00049177) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd806,	// (0x00054b4b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc554,	// (0x00053899) calenote_gesture_pane_ParamLimits

0xc554,	// (0x00053899) calenote_gesture_pane

0xc56e,	// (0x000538b3) calenote_window_pane_ParamLimits

0xc56e,	// (0x000538b3) calenote_window_pane

0x336c,	// (0x0004a6b1) popup_note_window_cp01

0xc586,	// (0x000538cb) calenote_swipe_1_pane_ParamLimits

0xc586,	// (0x000538cb) calenote_swipe_1_pane

0xbfb7,	// (0x000532fc) calenote_swipe_2_pane_ParamLimits

0xbfb7,	// (0x000532fc) calenote_swipe_2_pane

0x2f39,	// (0x0004a27e) calenote_swipe_1_pane_g1_ParamLimits

0x2f39,	// (0x0004a27e) calenote_swipe_1_pane_g1

0x2f46,	// (0x0004a28b) calenote_swipe_1_pane_g2_ParamLimits

0x2f46,	// (0x0004a28b) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x00057056) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x00057056) calenote_swipe_1_pane_g

0x337e,	// (0x0004a6c3) calenote_swipe_1_pane_t1_ParamLimits

0x337e,	// (0x0004a6c3) calenote_swipe_1_pane_t1

0x2f39,	// (0x0004a27e) calenote_swipe_2_pane_g1_ParamLimits

0x2f39,	// (0x0004a27e) calenote_swipe_2_pane_g1

0x339d,	// (0x0004a6e2) calenote_swipe_2_pane_g2_ParamLimits

0x339d,	// (0x0004a6e2) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x00057133) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x00057133) calenote_swipe_2_pane_g

0x33a9,	// (0x0004a6ee) calenote_swipe_2_pane_t1_ParamLimits

0x33a9,	// (0x0004a6ee) calenote_swipe_2_pane_t1

0x4b88,	// (0x0004becd) main_mup_navstr_pane

0x9120,	// (0x00050465) main_mup3_pane_t7_ParamLimits

0x9120,	// (0x00050465) main_mup3_pane_t7

0x9b0b,	// (0x00050e50) main_mp4_pane_g6_ParamLimits

0x9b0b,	// (0x00050e50) main_mp4_pane_g6

0x9e7f,	// (0x000511c4) main_image3_pane_t4_ParamLimits

0x9e7f,	// (0x000511c4) main_image3_pane_t4

0xc599,	// (0x000538de) popup_navstr_preview_pane_ParamLimits

0xc599,	// (0x000538de) popup_navstr_preview_pane

0xc5a5,	// (0x000538ea) scroll_navstr_pane_ParamLimits

0xc5a5,	// (0x000538ea) scroll_navstr_pane

0x4b88,	// (0x0004becd) bg_popup_preview_window_pane_cp04

0x33d0,	// (0x0004a715) popup_navstr_preview_pane_t1

0xc5b1,	// (0x000538f6) scroll_navstr_pane_g1_ParamLimits

0xc5b1,	// (0x000538f6) scroll_navstr_pane_g1

0xc5be,	// (0x00053903) scroll_navstr_pane_t1_ParamLimits

0xc5be,	// (0x00053903) scroll_navstr_pane_t1

0x3375,	// (0x0004a6ba) bg_button_pane_cp014

0x3375,	// (0x0004a6ba) bg_button_pane_cp030

0xbeab,	// (0x000531f0) list_double_fisheye_pane_g4_ParamLimits

0xbeab,	// (0x000531f0) list_double_fisheye_pane_g4

0xbeb7,	// (0x000531fc) list_double_fisheye_pane_g5_ParamLimits

0xbeb7,	// (0x000531fc) list_double_fisheye_pane_g5

0x32e0,	// (0x0004a625) sp_fs_scroll_pane_cp03

0xf123,	// (0x00056468) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3074,	// (0x0004a3b9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x00057073) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3080,	// (0x0004a3c5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc472,	// (0x000537b7) sp_fs_scroll_pane_cp02

0xd524,	// (0x00054869) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd524,	// (0x00054869) popup_sp_fs_calendar_preview_list_single_pane

0x4b88,	// (0x0004becd) main_cam6_pano_pane

0xf0f2,	// (0x00056437) main_mup3_pane_ParamLimits

0x4b88,	// (0x0004becd) main_phacti_pane

0xbaa2,	// (0x00052de7) bg_button_pane_cp11

0xbaba,	// (0x00052dff) main_mobtv_info_pane_g2_ParamLimits

0xbaba,	// (0x00052dff) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x00056fd3) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x00056fd3) main_mobtv_info_pane_g

0xbc6c,	// (0x00052fb1) sc_clock_pane_t5_ParamLimits

0xbc6c,	// (0x00052fb1) sc_clock_pane_t5

0xbd0e,	// (0x00053053) main_radioblah_pane_g1_ParamLimits

0x2e85,	// (0x0004a1ca) main_radioblah_pane_t3_ParamLimits

0x2e85,	// (0x0004a1ca) main_radioblah_pane_t3

0x2e9d,	// (0x0004a1e2) main_radioblah_pane_t4_ParamLimits

0x2e9d,	// (0x0004a1e2) main_radioblah_pane_t4

0xbd2c,	// (0x00053071) main_radioblah_text_pane_ParamLimits

0xbd2c,	// (0x00053071) main_radioblah_text_pane

0xbd39,	// (0x0005307e) main_radioblah_info_pane_g1_ParamLimits

0xbdce,	// (0x00053113) main_radioblah_info_pane_t4_ParamLimits

0xbdce,	// (0x00053113) main_radioblah_info_pane_t4

0xf0f2,	// (0x00056437) main_sp_fs_calendar_pane

0xc5d0,	// (0x00053915) main_phacti_pane_g1

0xc5d8,	// (0x0005391d) phacti_note_pane_ParamLimits

0xc5d8,	// (0x0005391d) phacti_note_pane

0x33e7,	// (0x0004a72c) phacti_term_pane_ParamLimits

0x33e7,	// (0x0004a72c) phacti_term_pane

0x33fc,	// (0x0004a741) phacti_note_pane_t1_ParamLimits

0x33fc,	// (0x0004a741) phacti_note_pane_t1

0x3413,	// (0x0004a758) phacti_term_pane_g1

0x341b,	// (0x0004a760) phacti_term_pane_t1_ParamLimits

0x341b,	// (0x0004a760) phacti_term_pane_t1

0x3445,	// (0x0004a78a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x344d,	// (0x0004a792) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0005713d) popup_sp_fs_calendar_preview_list_single_pane_g

0x3455,	// (0x0004a79a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3455,	// (0x0004a79a) popup_sp_fs_calendar_preview_list_single_pane_t1

0x346b,	// (0x0004a7b0) aid_popup_sp_fs_bg_corner_pane

0x1373,	// (0x000486b8) popup_sp_fs_calendar_preview_bg_pane_g1

0x4b88,	// (0x0004becd) popup_sp_fs_calendar_preview_bg_pane

0x3473,	// (0x0004a7b8) popup_sp_fs_calendar_preview_list_pane

0xf0f2,	// (0x00056437) bg_main_sp_fs_cale_pane_ParamLimits

0xf0f2,	// (0x00056437) bg_main_sp_fs_cale_pane

0x347b,	// (0x0004a7c0) listscroll_cale_mrui_pane_ParamLimits

0x347b,	// (0x0004a7c0) listscroll_cale_mrui_pane

0x348f,	// (0x0004a7d4) listscroll_sp_fs_schedule_track_pane

0x3498,	// (0x0004a7dd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3498,	// (0x0004a7dd) main_sp_fs_ctrlbar_pane_cp01

0x34a9,	// (0x0004a7ee) main_sp_fs_ribbon_pane

0x34b1,	// (0x0004a7f6) popup_sp_fs_cale_preview_window

0xc61b,	// (0x00053960) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc61b,	// (0x00053960) list_single_sp_fs_schedule_track_pane

0x1d8e,	// (0x000490d3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1d8e,	// (0x000490d3) bg_sp_fs_highlight_list_pane_cp03

0xc63d,	// (0x00053982) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc63d,	// (0x00053982) list_single_sp_fs_schedule_track_pane_g1

0xc649,	// (0x0005398e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc649,	// (0x0005398e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x00057142) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x00057142) list_single_sp_fs_schedule_track_pane_g

0xc655,	// (0x0005399a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc655,	// (0x0005399a) list_single_sp_fs_schedule_track_pane_t1

0xc66d,	// (0x000539b2) sp_fs_schedule_track_pane_ParamLimits

0xc66d,	// (0x000539b2) sp_fs_schedule_track_pane

0x34c3,	// (0x0004a808) sp_fs_schedule_track_pane_g1

0x34cb,	// (0x0004a810) sp_fs_schedule_track_pane_g2

0x34d3,	// (0x0004a818) sp_fs_schedule_track_pane_g3

0x34db,	// (0x0004a820) sp_fs_schedule_track_pane_g4

0x34e3,	// (0x0004a828) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x00057147) sp_fs_schedule_track_pane_g

0x1e0a,	// (0x0004914f) bg_sp_fs_schedule_viewer_highlight_g1

0xd826,	// (0x00054b6b) bg_sp_fs_schedule_viewer_highlight_g2

0x1e12,	// (0x00049157) bg_sp_fs_schedule_viewer_highlight_g3

0x1e1a,	// (0x0004915f) bg_sp_fs_schedule_viewer_highlight_g4

0x204f,	// (0x00049394) bg_sp_fs_schedule_viewer_highlight_g5

0x1e2a,	// (0x0004916f) bg_sp_fs_schedule_viewer_highlight_g6

0x1e32,	// (0x00049177) bg_sp_fs_schedule_viewer_highlight_g7

0x1e3a,	// (0x0004917f) bg_sp_fs_schedule_viewer_highlight_g8

0xd806,	// (0x00054b4b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x00057152) bg_sp_fs_schedule_viewer_highlight_g

0x4b88,	// (0x0004becd) bg_main_sp_fs_ribbon_pane

0xc67d,	// (0x000539c2) main_sp_fs_ribbon_pane_g1

0x34eb,	// (0x0004a830) main_sp_fs_ribbon_pane_t1

0xc686,	// (0x000539cb) main_sp_fs_ribbon_pane_t2

0x34fa,	// (0x0004a83f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x00057165) main_sp_fs_ribbon_pane_t

0x3509,	// (0x0004a84e) main_sp_fs_ribbon_scheduler_pane

0x3511,	// (0x0004a856) bg_main_sp_fs_ribbon_pane_g1

0x351a,	// (0x0004a85f) bg_main_sp_fs_ribbon_pane_g2

0x3523,	// (0x0004a868) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0005716c) bg_main_sp_fs_ribbon_pane_g

0x352b,	// (0x0004a870) main_sp_fs_ribbon_scheduler_pane_g1

0x3534,	// (0x0004a879) main_sp_fs_ribbon_scheduler_pane_g2

0x353d,	// (0x0004a882) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x00057173) main_sp_fs_ribbon_scheduler_pane_g

0x3546,	// (0x0004a88b) list_cale_mrui_pane

0xc695,	// (0x000539da) sp_fs_scroll_pane_cp07_ParamLimits

0xc695,	// (0x000539da) sp_fs_scroll_pane_cp07

0xc6ab,	// (0x000539f0) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc6ab,	// (0x000539f0) bg_sp_fs_schedule_viewer_highlight

0x354f,	// (0x0004a894) list_single_sp_fs_schedule_track_pane_cp01

0x3557,	// (0x0004a89c) list_sp_fs_schedule_track_pane

0x355f,	// (0x0004a8a4) sp_fs_scroll_pane_cp06_ParamLimits

0x355f,	// (0x0004a8a4) sp_fs_scroll_pane_cp06

0x1373,	// (0x000486b8) bgmain_sp_fs_calendar_pane_g1

0xc6b8,	// (0x000539fd) list_single_cale_mrui_pane_ParamLimits

0xc6b8,	// (0x000539fd) list_single_cale_mrui_pane

0x3571,	// (0x0004a8b6) list_single_cale_mrui_row_pane_ParamLimits

0x3571,	// (0x0004a8b6) list_single_cale_mrui_row_pane

0x357e,	// (0x0004a8c3) list_single_cale_mrui_row_pane_g1_ParamLimits

0x357e,	// (0x0004a8c3) list_single_cale_mrui_row_pane_g1

0x35b6,	// (0x0004a8fb) list_single_cale_mrui_row_pane_t1_ParamLimits

0x35b6,	// (0x0004a8fb) list_single_cale_mrui_row_pane_t1

0xc6e7,	// (0x00053a2c) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc6e7,	// (0x00053a2c) list_single_cale_mrui_row_pane_t2

0x35c8,	// (0x0004a90d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x35c8,	// (0x0004a90d) list_single_cale_mrui_row_pane_t3

0x35f7,	// (0x0004a93c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x35f7,	// (0x0004a93c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0005717f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0005717f) list_single_cale_mrui_row_pane_t

0xc74d,	// (0x00053a92) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc74d,	// (0x00053a92) list_single_cmail_header_editor_pane_bg_cp01

0xc76f,	// (0x00053ab4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc76f,	// (0x00053ab4) list_single_cmail_header_editor_pane_bg_cp02

0xc78b,	// (0x00053ad0) main_radioblah_text_pane_t1_ParamLimits

0xc78b,	// (0x00053ad0) main_radioblah_text_pane_t1

0x3626,	// (0x0004a96b) cam6_indi_pane_cp01

0x362e,	// (0x0004a973) cam6_mode_pane_cp01

0x3636,	// (0x0004a97b) cam6_pano_pane

0x363f,	// (0x0004a984) cam6_zoom_pane_cp01

0x3647,	// (0x0004a98c) cam6_pano_image_pane

0x3652,	// (0x0004a997) cam6_pano_pane_g1

0x2bfd,	// (0x00049f42) cam6_pano_pane_g2

0x365b,	// (0x0004a9a0) cam6_pano_pane_g3

0x3664,	// (0x0004a9a9) cam6_pano_pane_g4

0x1941,	// (0x00048c86) cam6_pano_pane_g5

0x366d,	// (0x0004a9b2) cam6_pano_pane_g6

0x3677,	// (0x0004a9bc) cam6_pano_pane_g7

0x367f,	// (0x0004a9c4) cam6_pano_pane_g8

0x3688,	// (0x0004a9cd) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x00057188) cam6_pano_pane_g

0x4b88,	// (0x0004becd) main_browser_tag_pane

0x33c8,	// (0x0004a70d) grid_navstr_albumart_pane

0x3693,	// (0x0004a9d8) cell_navstr_albumart_pane_ParamLimits

0x3693,	// (0x0004a9d8) cell_navstr_albumart_pane

0xdfff,	// (0x00055344) cell_navstr_albumart_pane_g1

0xf0ba,	// (0x000563ff) cell_navstr_albumart_pane_g2

0xf0ca,	// (0x0005640f) cell_navstr_albumart_pane_g3

0xf0c2,	// (0x00056407) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0005719b) cell_navstr_albumart_pane_g

0xc7a8,	// (0x00053aed) bt_list_pane_ParamLimits

0xc7a8,	// (0x00053aed) bt_list_pane

0xc7cf,	// (0x00053b14) bt_list_pane_t1

0xc7de,	// (0x00053b23) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x000571a4) bt_list_pane_t

0x4b88,	// (0x0004becd) main_cale_prevew_pane

0xc7ed,	// (0x00053b32) popup_cale_preview_window_ParamLimits

0xc7ed,	// (0x00053b32) popup_cale_preview_window

0xf0f2,	// (0x00056437) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0f2,	// (0x00056437) bg_popup_preview_window_pane_cp05

0x36b5,	// (0x0004a9fa) list_cale_preview_pane_ParamLimits

0x36b5,	// (0x0004a9fa) list_cale_preview_pane

0xc804,	// (0x00053b49) list_double_cale_preview_pane_ParamLimits

0xc804,	// (0x00053b49) list_double_cale_preview_pane

0xc816,	// (0x00053b5b) list_single_cale_preview_pane_ParamLimits

0xc816,	// (0x00053b5b) list_single_cale_preview_pane

0xc82a,	// (0x00053b6f) list_single_cale_preview_pane_g1

0xc832,	// (0x00053b77) list_single_cale_preview_pane_t1_ParamLimits

0xc832,	// (0x00053b77) list_single_cale_preview_pane_t1

0xc847,	// (0x00053b8c) list_double_cale_preview_pane_g1

0xc84f,	// (0x00053b94) list_double_cale_preview_pane_t1_ParamLimits

0xc84f,	// (0x00053b94) list_double_cale_preview_pane_t1

0xc864,	// (0x00053ba9) list_double_cale_preview_pane_t2_ParamLimits

0xc864,	// (0x00053ba9) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x000571a9) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x000571a9) list_double_cale_preview_pane_t

0x4b88,	// (0x0004becd) main_ezdial_pane

0xf0f2,	// (0x00056437) main_sp_fs_email_pane_ParamLimits

0xbfed,	// (0x00053332) cmail_ddmenu_btn01_pane_ParamLimits

0xbfed,	// (0x00053332) cmail_ddmenu_btn01_pane

0xc00a,	// (0x0005334f) cmail_ddmenu_btn02_pane_ParamLimits

0xc00a,	// (0x0005334f) cmail_ddmenu_btn02_pane

0xc028,	// (0x0005336d) cmail_ddmenu_btn03_pane_ParamLimits

0xc028,	// (0x0005336d) cmail_ddmenu_btn03_pane

0xc056,	// (0x0005339b) main_sp_fs_ctrlbar_pane_ParamLimits

0xc072,	// (0x000533b7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc47c,	// (0x000537c1) list_cmail_body_pane_ParamLimits

0x32ef,	// (0x0004a634) bg_button_pane_cp12

0x3304,	// (0x0004a649) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3304,	// (0x0004a649) list_single_cmail_header_detail_pane_g3

0xc52e,	// (0x00053873) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc52e,	// (0x00053873) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0005712e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0005712e) list_single_cmail_header_detail_pane_t

0x3430,	// (0x0004a775) phacti_term_pane_t2_ParamLimits

0x3430,	// (0x0004a775) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x00057138) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x00057138) phacti_term_pane_t

0x36c1,	// (0x0004aa06) aid_size_list_single_double

0xc87c,	// (0x00053bc1) popup_ezdial_listscroll_window

0xc89d,	// (0x00053be2) popup_number_entry_window_cp01

0xde9e,	// (0x000551e3) bg_popup_call_pane_cp09

0x36cd,	// (0x0004aa12) ezdial_list_pane

0x36d5,	// (0x0004aa1a) scroll_pane_cp23

0x1156,	// (0x0004849b) bg_button_pane_cp028_ParamLimits

0x1156,	// (0x0004849b) bg_button_pane_cp028

0xc8ab,	// (0x00053bf0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc8ab,	// (0x00053bf0) cmail_ddmenu_btn01_pane_g1

0xc8bd,	// (0x00053c02) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc8bd,	// (0x00053c02) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x000571ae) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x000571ae) cmail_ddmenu_btn01_pane_g

0x36dd,	// (0x0004aa22) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x36dd,	// (0x0004aa22) cmail_ddmenu_btn01_pane_t1

0x0e6b,	// (0x000481b0) bg_button_pane_cp029_ParamLimits

0x0e6b,	// (0x000481b0) bg_button_pane_cp029

0xc8bd,	// (0x00053c02) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc8bd,	// (0x00053c02) cmail_ddmenu_btn02_pane_g1

0xc8d5,	// (0x00053c1a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc8d5,	// (0x00053c1a) cmail_ddmenu_btn02_pane_t1

0x1d8e,	// (0x000490d3) bg_button_pane_cp031_ParamLimits

0x1d8e,	// (0x000490d3) bg_button_pane_cp031

0xc8bd,	// (0x00053c02) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc8bd,	// (0x00053c02) cmail_ddmenu_btn03_pane_g1

0xc8d5,	// (0x00053c1a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc8d5,	// (0x00053c1a) cmail_ddmenu_btn03_pane_t1

0x9d1c,	// (0x00051061) cell_dialer2_keypad_pane_t1_ParamLimits

0x9d36,	// (0x0005107b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9d36,	// (0x0005107b) cell_dialer2_keypad_pane_t1_copy1

0xb964,	// (0x00052ca9) ncimui_group_button_pane

0xf0f2,	// (0x00056437) main_sp_fs_calendar_pane_ParamLimits

0xc4a0,	// (0x000537e5) list_single_cmail_header_caption_pane_ParamLimits

0x2392,	// (0x000496d7) aid_recal_txt_sm_pane

0x4b88,	// (0x0004becd) mian_recal_day_pane

0x34b1,	// (0x0004a7f6) popup_sp_fs_cale_preview_window_ParamLimits

0x4b88,	// (0x0004becd) list_recal_day_pane

0x370b,	// (0x0004aa50) list_single_recal_day_pane_ParamLimits

0x370b,	// (0x0004aa50) list_single_recal_day_pane

0x371d,	// (0x0004aa62) list_single_recal_day_pane_g1_ParamLimits

0x371d,	// (0x0004aa62) list_single_recal_day_pane_g1

0x3729,	// (0x0004aa6e) list_single_recal_day_pane_g2_ParamLimits

0x3729,	// (0x0004aa6e) list_single_recal_day_pane_g2

0x3738,	// (0x0004aa7d) list_single_recal_day_pane_g3_ParamLimits

0x3738,	// (0x0004aa7d) list_single_recal_day_pane_g3

0xc8f9,	// (0x00053c3e) list_single_recal_day_pane_g4_ParamLimits

0xc8f9,	// (0x00053c3e) list_single_recal_day_pane_g4

0x3744,	// (0x0004aa89) list_single_recal_day_pane_g5_ParamLimits

0x3744,	// (0x0004aa89) list_single_recal_day_pane_g5

0x3753,	// (0x0004aa98) list_single_recal_day_pane_g6_ParamLimits

0x3753,	// (0x0004aa98) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x000571bd) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x000571bd) list_single_recal_day_pane_g

0x375f,	// (0x0004aaa4) list_single_recal_day_pane_t1

0x376d,	// (0x0004aab2) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x000571ca) list_single_recal_day_pane_t

0xc90c,	// (0x00053c51) ncimui_query_button_pane_ParamLimits

0xc90c,	// (0x00053c51) ncimui_query_button_pane

0xc91c,	// (0x00053c61) ncimui_query_button_pane_t1_ParamLimits

0xc91c,	// (0x00053c61) ncimui_query_button_pane_t1

0x377b,	// (0x0004aac0) ncimui_query_button_pane_t2_ParamLimits

0x377b,	// (0x0004aac0) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x000571cf) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x000571cf) ncimui_query_button_pane_t

0xc92f,	// (0x00053c74) query_button_pane_ParamLimits

0xc92f,	// (0x00053c74) query_button_pane

0x4b88,	// (0x0004becd) bg_button_pane_cp0028

0x378e,	// (0x0004aad3) query_button_pane_t1

0x8171,	// (0x0004f4b6) main_tport_pane_ParamLimits

0xc3a9,	// (0x000536ee) bg_popup_window_pane_cp01_ParamLimits

0xc3a9,	// (0x000536ee) bg_popup_window_pane_cp01

0xc3b6,	// (0x000536fb) heading_pane_cp08_ParamLimits

0xc3b6,	// (0x000536fb) heading_pane_cp08

0xc3c4,	// (0x00053709) heading_pane_cp07_ParamLimits

0xc3c4,	// (0x00053709) heading_pane_cp07

0xc41b,	// (0x00053760) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0005711b) cell_tport_appsw_pane_g

0x7855,	// (0x0004eb9a) input_candi_list_open_g1

0xd9c1,	// (0x00054d06) list_cale_time_pane_g6_ParamLimits

0xd9c1,	// (0x00054d06) list_cale_time_pane_g6

0x8baf,	// (0x0004fef4) aid_size_touch_calib_1_ParamLimits

0x8baf,	// (0x0004fef4) aid_size_touch_calib_1

0x8bbb,	// (0x0004ff00) aid_size_touch_calib_2_ParamLimits

0x8bbb,	// (0x0004ff00) aid_size_touch_calib_2

0x8bc9,	// (0x0004ff0e) aid_size_touch_calib_3_ParamLimits

0x8bc9,	// (0x0004ff0e) aid_size_touch_calib_3

0x8bd9,	// (0x0004ff1e) aid_size_touch_calib_4_ParamLimits

0x8bd9,	// (0x0004ff1e) aid_size_touch_calib_4

0x8be7,	// (0x0004ff2c) main_touch_calib_button_group_pane_ParamLimits

0x8be7,	// (0x0004ff2c) main_touch_calib_button_group_pane

0x8bf5,	// (0x0004ff3a) main_touch_calib_pane_g1_ParamLimits

0x8c01,	// (0x0004ff46) main_touch_calib_pane_g2_ParamLimits

0x8c0d,	// (0x0004ff52) main_touch_calib_pane_g3_ParamLimits

0x8c19,	// (0x0004ff5e) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00056afd) main_touch_calib_pane_g_ParamLimits

0x8c25,	// (0x0004ff6a) main_touch_calib_pane_t1_ParamLimits

0x8c3c,	// (0x0004ff81) main_touch_calib_pane_t2_ParamLimits

0x8c53,	// (0x0004ff98) main_touch_calib_pane_t3_ParamLimits

0x8c67,	// (0x0004ffac) main_touch_calib_pane_t4_ParamLimits

0x8c7b,	// (0x0004ffc0) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x00056b06) main_touch_calib_pane_t_ParamLimits

0x1728,	// (0x00048a6d) list_single_fp_cale_pane_g3_ParamLimits

0x1728,	// (0x00048a6d) list_single_fp_cale_pane_g3

0xa156,	// (0x0005149b) bg_button_pane_cp012_ParamLimits

0xa156,	// (0x0005149b) bg_vkb2_func_pane_cp03_ParamLimits

0xab3d,	// (0x00051e82) cell_vitu2_function_top_pane_g1_ParamLimits

0xa156,	// (0x0005149b) bg_vkb2_func_pane_cp04_ParamLimits

0xb915,	// (0x00052c5a) main_ncimui_button_group_pane_ParamLimits

0xb915,	// (0x00052c5a) main_ncimui_button_group_pane

0xb952,	// (0x00052c97) main_ncimui_pane_t3_ParamLimits

0xb952,	// (0x00052c97) main_ncimui_pane_t3

0x33de,	// (0x0004a723) phacti_button_group_pane

0x36c1,	// (0x0004aa06) aid_size_list_single_double_ParamLimits

0xc87c,	// (0x00053bc1) popup_ezdial_listscroll_window_ParamLimits

0xc89d,	// (0x00053be2) popup_number_entry_window_cp01_ParamLimits

0xc93c,	// (0x00053c81) phacti_button_pane_ParamLimits

0xc93c,	// (0x00053c81) phacti_button_pane

0x4b88,	// (0x0004becd) bg_button_pane_cp14

0x379c,	// (0x0004aae1) phacti_button_pane_t1

0xc94d,	// (0x00053c92) main_touch_calib_button_pane_ParamLimits

0xc94d,	// (0x00053c92) main_touch_calib_button_pane

0xd40e,	// (0x00054753) bg_button_pane_cp18_ParamLimits

0xd40e,	// (0x00054753) bg_button_pane_cp18

0x37aa,	// (0x0004aaef) main_touch_calib_button_pane_t1_ParamLimits

0x37aa,	// (0x0004aaef) main_touch_calib_button_pane_t1

0x37c0,	// (0x0004ab05) main_touch_calib_button_pane_t2_ParamLimits

0x37c0,	// (0x0004ab05) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x000571d4) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x000571d4) main_touch_calib_button_pane_t

0x4b88,	// (0x0004becd) cell_ncimui_button_pane

0x4b88,	// (0x0004becd) bg_button_pane_cp032

0x37de,	// (0x0004ab23) cell_ncimui_button_pane_t1

0x9d92,	// (0x000510d7) image3_infobar_pane_ParamLimits

0x9d92,	// (0x000510d7) image3_infobar_pane

0xbc8e,	// (0x00052fd3) fs_bigclock_status_pane_ParamLimits

0xbc8e,	// (0x00052fd3) fs_bigclock_status_pane

0xbc9b,	// (0x00052fe0) main_fs_bigclock_clock_pane_ParamLimits

0xbc9b,	// (0x00052fe0) main_fs_bigclock_clock_pane

0xbcaf,	// (0x00052ff4) main_fs_bigclock_indi_pane_ParamLimits

0xbcaf,	// (0x00052ff4) main_fs_bigclock_indi_pane

0xbcdc,	// (0x00053021) main_fs_bigclock_swipe_pane_ParamLimits

0xbcdc,	// (0x00053021) main_fs_bigclock_swipe_pane

0x4b88,	// (0x0004becd) main_fs_clock_dumped_data

0x2d0a,	// (0x0004a04f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2d0a,	// (0x0004a04f) list_single_fs_bigclock_indicator_pane_g1

0x2d28,	// (0x0004a06d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2d28,	// (0x0004a06d) list_single_fs_bigclock_indicator_pane_g2

0x2d42,	// (0x0004a087) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2d42,	// (0x0004a087) list_single_fs_bigclock_indicator_pane_g3

0x2d5c,	// (0x0004a0a1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2d5c,	// (0x0004a0a1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x00057007) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x00057007) list_single_fs_bigclock_indicator_pane_g

0x2d82,	// (0x0004a0c7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2d82,	// (0x0004a0c7) list_single_fs_bigclock_indicator_pane_t1

0x2daa,	// (0x0004a0ef) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2daa,	// (0x0004a0ef) list_single_fs_bigclock_indicator_pane_t2

0x2dd2,	// (0x0004a117) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2dd2,	// (0x0004a117) list_single_fs_bigclock_indicator_pane_t3

0x2dfa,	// (0x0004a13f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2dfa,	// (0x0004a13f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x00057012) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x00057012) list_single_fs_bigclock_indicator_pane_t

0x37ec,	// (0x0004ab31) image3_infobar_fav_pane_ParamLimits

0x37ec,	// (0x0004ab31) image3_infobar_fav_pane

0x37fc,	// (0x0004ab41) image3_infobar_loc_pane_ParamLimits

0x37fc,	// (0x0004ab41) image3_infobar_loc_pane

0x3810,	// (0x0004ab55) image3_infobar_time_pane_ParamLimits

0x3810,	// (0x0004ab55) image3_infobar_time_pane

0x1373,	// (0x000486b8) image3_infobar_time_pane_g1

0x3820,	// (0x0004ab65) image3_infobar_time_pane_t1

0x1373,	// (0x000486b8) image3_infobar_loc_pane_g1

0x382e,	// (0x0004ab73) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x000571d9) image3_infobar_loc_pane_g

0x3836,	// (0x0004ab7b) image3_infobar_loc_pane_t1

0x1373,	// (0x000486b8) image3_infobar_fav_pane_g1

0x3844,	// (0x0004ab89) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x000571de) image3_infobar_fav_pane_g

0x384c,	// (0x0004ab91) fs_bigclock_status_battery_pane

0x3855,	// (0x0004ab9a) fs_bigclock_status_signal_pane

0x385e,	// (0x0004aba3) fs_bigclock_status_title_pane

0x3867,	// (0x0004abac) fs_bigclock_status_signal_pane_g1

0x3870,	// (0x0004abb5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x000571e3) fs_bigclock_status_signal_pane_g

0x3878,	// (0x0004abbd) fs_bigclock_status_battery_pane_g1

0x3881,	// (0x0004abc6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x000571e8) fs_bigclock_status_battery_pane_g

0x3889,	// (0x0004abce) fs_bigclock_status_title_pane_t1

0x1373,	// (0x000486b8) main_fs_bigclock_clock_pane_g1

0x3897,	// (0x0004abdc) main_fs_bigclock_clock_pane_g2

0x3897,	// (0x0004abdc) main_fs_bigclock_clock_pane_g3

0x3897,	// (0x0004abdc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x000571ed) main_fs_bigclock_clock_pane_g

0x389f,	// (0x0004abe4) main_fs_bigclock_clock_pane_t1

0x38ad,	// (0x0004abf2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x000571f6) main_fs_bigclock_clock_pane_t

0x38bc,	// (0x0004ac01) list_single_fs_bigclock_indicator_pane_ParamLimits

0x38bc,	// (0x0004ac01) list_single_fs_bigclock_indicator_pane

0xc95d,	// (0x00053ca2) list_single_fs_bigclock_pane_ParamLimits

0xc95d,	// (0x00053ca2) list_single_fs_bigclock_pane

0xc9ca,	// (0x00053d0f) main_fs_bigclock_indicator_pane_t1

0xc9d9,	// (0x00053d1e) list_single_fs_bigclock_pane_g1

0xc9e1,	// (0x00053d26) list_single_fs_bigclock_pane_t1

0x1373,	// (0x000486b8) main_fs_bigclock_swipe_pane_g1

0xca1f,	// (0x00053d64) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x00057207) main_fs_bigclock_swipe_pane_g

0xca27,	// (0x00053d6c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xca27,	// (0x00053d6c) main_fs_bigclock_swipe_pane_t1

0x7030,	// (0x0004e375) call_type_pane_ParamLimits

0x4b88,	// (0x0004becd) main_btmg_pane

0x35aa,	// (0x0004a8ef) list_single_cale_mrui_row_pane_g2_ParamLimits

0x35aa,	// (0x0004a8ef) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0005717a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0005717a) list_single_cale_mrui_row_pane_g

0x36fb,	// (0x0004aa40) list_recal_vselct_arw_lo_pane

0x3703,	// (0x0004aa48) list_recal_vselct_arw_up_pane

0x2389,	// (0x000496ce) list_recal_vselct_pane

0xca44,	// (0x00053d89) btmg_button_pane

0xca4e,	// (0x00053d93) main_btmg_pane_g1

0x4b88,	// (0x0004becd) bg_button_pane_cp044

0xca56,	// (0x00053d9b) btmg_button_pane_t1

0x0e63,	// (0x000481a8) aid_listscroll_gen

0xf0f2,	// (0x00056437) main_cntbar_detail_pane

0x32d0,	// (0x0004a615) list_cmail_folder_pane

0x32e0,	// (0x0004a625) sp_fs_scroll_pane_cp03_ParamLimits

0xca64,	// (0x00053da9) list_single_fs_dyc_pane_cp01_ParamLimits

0xca64,	// (0x00053da9) list_single_fs_dyc_pane_cp01

0xca95,	// (0x00053dda) aid_size_cmail_indent

0x38cd,	// (0x0004ac12) list_single_dyc_row_pane_cp01

0xcabe,	// (0x00053e03) cntbar_detail_list_pane_ParamLimits

0xcabe,	// (0x00053e03) cntbar_detail_list_pane

0xcaf8,	// (0x00053e3d) main_cntbar_detail_cont_pane_ParamLimits

0xcaf8,	// (0x00053e3d) main_cntbar_detail_cont_pane

0x6fca,	// (0x0004e30f) scroll_pane_cp032_ParamLimits

0x6fca,	// (0x0004e30f) scroll_pane_cp032

0xcb04,	// (0x00053e49) cntbar_detail_list_event_pane_ParamLimits

0xcb04,	// (0x00053e49) cntbar_detail_list_event_pane

0xcaca,	// (0x00053e0f) cntbar_detail_list_shct_pane

0xd874,	// (0x00054bb9) aid_list_gen

0xcb18,	// (0x00053e5d) aid_scroll

0xcb21,	// (0x00053e66) aid_size_touch_scroll_bar

0xcb2a,	// (0x00053e6f) aid_list_double

0xcb33,	// (0x00053e78) aid_list_single

0xcb3c,	// (0x00053e81) aid_list_single_lg

0x38d6,	// (0x0004ac1b) aid_list_z_g_a_sm

0x38de,	// (0x0004ac23) aid_list_z_g_d

0x38e6,	// (0x0004ac2b) aid_txt_z_prm

0xcb45,	// (0x00053e8a) aid_txt_z_prm_cp01

0xcb53,	// (0x00053e98) aid_txt_z_sec

0xcb61,	// (0x00053ea6) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcb61,	// (0x00053ea6) main_cntbar_detail_cont_pane_g1

0xcb6e,	// (0x00053eb3) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcb6e,	// (0x00053eb3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0005720c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0005720c) main_cntbar_detail_cont_pane_g

0xcb7a,	// (0x00053ebf) main_cntbar_detail_cont_pane_t1

0xcb88,	// (0x00053ecd) main_cntbar_detail_cont_pane_t2

0xcb96,	// (0x00053edb) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x00057211) main_cntbar_detail_cont_pane_t

0xcba4,	// (0x00053ee9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcba4,	// (0x00053ee9) cell_cntbar_detail_list_shct_pane

0xcbb8,	// (0x00053efd) cntbar_detail_list_shct_pane_g1

0xcbc1,	// (0x00053f06) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x00057218) cntbar_detail_list_shct_pane_g

0xcbca,	// (0x00053f0f) cntbar_detail_list_event_pane_g1_ParamLimits

0xcbca,	// (0x00053f0f) cntbar_detail_list_event_pane_g1

0xcbd6,	// (0x00053f1b) cntbar_detail_list_event_pane_g2_ParamLimits

0xcbd6,	// (0x00053f1b) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0005721d) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0005721d) cntbar_detail_list_event_pane_g

0xcc42,	// (0x00053f87) cntbar_detail_list_event_pane_t1_ParamLimits

0xcc42,	// (0x00053f87) cntbar_detail_list_event_pane_t1

0xcc57,	// (0x00053f9c) cntbar_detail_list_event_pane_t2_ParamLimits

0xcc57,	// (0x00053f9c) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0005722a) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0005722a) cntbar_detail_list_event_pane_t

0x1373,	// (0x000486b8) cell_cntbar_detail_list_shct_pane_g1

0x73a7,	// (0x0004e6ec) navi_pane_mv_g3

0xf0f2,	// (0x00056437) main_cntbar_detail_pane_ParamLimits

0x4b88,	// (0x0004becd) main_notif_wgt_pane

0x9a6e,	// (0x00050db3) aid_tch_main_mp4_pane_g4

0x9c79,	// (0x00050fbe) popup_slider_window_cp02

0x36f2,	// (0x0004aa37) list_recal_day_event_pane

0xca9e,	// (0x00053de3) cntbar_detail_btn_pane_ParamLimits

0xca9e,	// (0x00053de3) cntbar_detail_btn_pane

0xcaae,	// (0x00053df3) cntbar_detail_btn_pane_cp01_ParamLimits

0xcaae,	// (0x00053df3) cntbar_detail_btn_pane_cp01

0xcaca,	// (0x00053e0f) cntbar_detail_list_shct_pane_ParamLimits

0xcad6,	// (0x00053e1b) cntbar_detail_pane_g1_ParamLimits

0xcad6,	// (0x00053e1b) cntbar_detail_pane_g1

0xcae2,	// (0x00053e27) cntbar_detail_pane_t1_ParamLimits

0xcae2,	// (0x00053e27) cntbar_detail_pane_t1

0xcbe2,	// (0x00053f27) cntbar_detail_list_event_pane_g3_ParamLimits

0xcbe2,	// (0x00053f27) cntbar_detail_list_event_pane_g3

0xcbfa,	// (0x00053f3f) cntbar_detail_list_event_pane_g4_ParamLimits

0xcbfa,	// (0x00053f3f) cntbar_detail_list_event_pane_g4

0xcc12,	// (0x00053f57) cntbar_detail_list_event_pane_g5_ParamLimits

0xcc12,	// (0x00053f57) cntbar_detail_list_event_pane_g5

0xcc2a,	// (0x00053f6f) cntbar_detail_list_event_pane_g6_ParamLimits

0xcc2a,	// (0x00053f6f) cntbar_detail_list_event_pane_g6

0xcc6c,	// (0x00053fb1) cntbar_detail_list_event_pane_t3_ParamLimits

0xcc6c,	// (0x00053fb1) cntbar_detail_list_event_pane_t3

0xcc7e,	// (0x00053fc3) popup_notif_wgt_window_ParamLimits

0xcc7e,	// (0x00053fc3) popup_notif_wgt_window

0xcc8e,	// (0x00053fd3) popup_submenu_window_cp01_ParamLimits

0xcc8e,	// (0x00053fd3) popup_submenu_window_cp01

0xde9e,	// (0x000551e3) bg_popup_window_pane_cp10

0xcc9c,	// (0x00053fe1) listscroll_notif_wgt_pane

0xcca6,	// (0x00053feb) list_notif_wgt_window

0xccaf,	// (0x00053ff4) scroll_pane_cp033

0xccb8,	// (0x00053ffd) list_notif_wgt_row_pane_ParamLimits

0xccb8,	// (0x00053ffd) list_notif_wgt_row_pane

0xcccc,	// (0x00054011) aid_size_list_notif_wgt_del

0xccd5,	// (0x0005401a) list_notif_wgt_row_pane_g1

0xccdd,	// (0x00054022) list_notif_wgt_row_pane_g2

0xcce5,	// (0x0005402a) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x00057231) list_notif_wgt_row_pane_g

0xccee,	// (0x00054033) list_notif_wgt_row_pane_t1

0xccfc,	// (0x00054041) list_notif_wgt_row_pane_t2

0xcd0a,	// (0x0005404f) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x00057238) list_notif_wgt_row_pane_t

0x206f,	// (0x000493b4) list_recal_day_event_pane_g1

0xcd18,	// (0x0005405d) list_recal_day_event_pane_t1

0x4b88,	// (0x0004becd) bg_button_pane_cp045

0xcd27,	// (0x0005406c) cntbar_detail_btn_pane_t1

0x0e6b,	// (0x000481b0) main_callh_pane_ParamLimits

0x0e6b,	// (0x000481b0) main_callh_pane

0x4b88,	// (0x0004becd) main_coverflow0_pane

0x4b88,	// (0x0004becd) main_wgtman_pane

0xbcf4,	// (0x00053039) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbcf4,	// (0x00053039) main_fs_bigclock_unlock_btn_pane

0xc40b,	// (0x00053750) bg_button_pane_cp16

0xc423,	// (0x00053768) cell_tport_appsw_pane_g3

0xcd35,	// (0x0005407a) cf0_flow_pane_ParamLimits

0xcd35,	// (0x0005407a) cf0_flow_pane

0xcd44,	// (0x00054089) listscroll_cf0_pane

0xcd4d,	// (0x00054092) main_cf0_pane_g1

0xcd57,	// (0x0005409c) main_cf0_pane_t1_ParamLimits

0xcd57,	// (0x0005409c) main_cf0_pane_t1

0xcd6b,	// (0x000540b0) main_cf0_pane_t2_ParamLimits

0xcd6b,	// (0x000540b0) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0005723f) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0005723f) main_cf0_pane_t

0xcd7f,	// (0x000540c4) scroll_pane_cp11

0xcd8a,	// (0x000540cf) cf0_flow_pane_g1

0xcd92,	// (0x000540d7) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x00057244) cf0_flow_pane_g

0xcd9a,	// (0x000540df) cf0_flow_pane_t1

0x4b88,	// (0x0004becd) main_call6_pane

0x4b88,	// (0x0004becd) main_calllock_pane

0xcda8,	// (0x000540ed) call6_btn_grp_pane_ParamLimits

0xcda8,	// (0x000540ed) call6_btn_grp_pane

0xcdb7,	// (0x000540fc) call6_pane_g1_ParamLimits

0xcdb7,	// (0x000540fc) call6_pane_g1

0xcdc6,	// (0x0005410b) popup_call6_1st_window_ParamLimits

0xcdc6,	// (0x0005410b) popup_call6_1st_window

0xcdd4,	// (0x00054119) popup_call6_2nd_window_ParamLimits

0xcdd4,	// (0x00054119) popup_call6_2nd_window

0xcde2,	// (0x00054127) cell_call6_btn_pane_ParamLimits

0xcde2,	// (0x00054127) cell_call6_btn_pane

0xde9e,	// (0x000551e3) bg_popup_call2_in_pane_cp03

0xcdf1,	// (0x00054136) popup_call6_1st_window_g1

0xcdf9,	// (0x0005413e) popup_call6_1st_window_g2

0xce01,	// (0x00054146) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x00057249) popup_call6_1st_window_g

0xce09,	// (0x0005414e) popup_call6_1st_window_t1

0xce18,	// (0x0005415d) popup_call6_1st_window_t2

0xce28,	// (0x0005416d) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x00057250) popup_call6_1st_window_t

0xde9e,	// (0x000551e3) bg_popup_call2_in_pane_cp04

0xcdf1,	// (0x00054136) popup_call6_2nd_window_g1

0xcdf9,	// (0x0005413e) popup_call6_2nd_window_g2

0xce01,	// (0x00054146) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x00057249) popup_call6_2nd_window_g

0xce09,	// (0x0005414e) popup_call6_2nd_window_t1

0x4b88,	// (0x0004becd) bg_button_pane_cp15

0xce38,	// (0x0005417d) cell_call6_btn_pane_g1

0xce41,	// (0x00054186) cell_call6_btn_pane_t1

0xce50,	// (0x00054195) listscroll_wgtman_pane_ParamLimits

0xce50,	// (0x00054195) listscroll_wgtman_pane

0xce5f,	// (0x000541a4) wgtman_btn_pane_ParamLimits

0xce5f,	// (0x000541a4) wgtman_btn_pane

0xdd51,	// (0x00055096) aid_scroll_copy1

0xce6d,	// (0x000541b2) list_wgtman_pane

0xce77,	// (0x000541bc) wgtman_btn_pane_g1_ParamLimits

0xce77,	// (0x000541bc) wgtman_btn_pane_g1

0xce83,	// (0x000541c8) wgtman_btn_pane_t1_ParamLimits

0xce83,	// (0x000541c8) wgtman_btn_pane_t1

0xce95,	// (0x000541da) wgtman_btn_pane_t2_ParamLimits

0xce95,	// (0x000541da) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x00057257) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x00057257) wgtman_btn_pane_t

0xcea7,	// (0x000541ec) listrow_wgtman_pane_ParamLimits

0xcea7,	// (0x000541ec) listrow_wgtman_pane

0xcec3,	// (0x00054208) listrow_wgtman_pane_g1

0xcecc,	// (0x00054211) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0005725c) listrow_wgtman_pane_g

0xced6,	// (0x0005421b) listrow_wgtman_pane_t1

0xcee4,	// (0x00054229) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x00057261) listrow_wgtman_pane_t

0xcef2,	// (0x00054237) wait_bar_pane_cp09

0xcefa,	// (0x0005423f) main_calllock_btn_pane

0xcf04,	// (0x00054249) main_calllock_pane_g1

0x4b88,	// (0x0004becd) bg_button_pane_cp17

0xcf0f,	// (0x00054254) main_calllock_btn_pane_g1

0xcf18,	// (0x0005425d) main_calllock_btn_pane_t1

0x4b88,	// (0x0004becd) main_dialer3_pane

0x4b88,	// (0x0004becd) main_fmrd2_pane

0x1373,	// (0x000486b8) main_fs_bigclock_unlock_btn_pane_g1

0xcf2f,	// (0x00054274) main_fs_bigclock_unlock_btn_pane_t1

0xcf3d,	// (0x00054282) area_fmrd2_info_pane_ParamLimits

0xcf3d,	// (0x00054282) area_fmrd2_info_pane

0xcf4c,	// (0x00054291) area_fmrd2_visual_pane_ParamLimits

0xcf4c,	// (0x00054291) area_fmrd2_visual_pane

0xcf5a,	// (0x0005429f) fmrd2_indi_pane_ParamLimits

0xcf5a,	// (0x0005429f) fmrd2_indi_pane

0xcf67,	// (0x000542ac) area_fmrd2_visual_pane_g1

0xcf6f,	// (0x000542b4) area_fmrd2_visual_pane_t1

0xcf7f,	// (0x000542c4) area_fmrd2_visual_pane_t2

0xcf8f,	// (0x000542d4) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0005726b) area_fmrd2_visual_pane_t

0xcf9f,	// (0x000542e4) area_fmrd2_info_pane_g1

0xcfa7,	// (0x000542ec) area_fmrd2_info_pane_t1

0xcfb7,	// (0x000542fc) area_fmrd2_info_pane_t2

0xcfc7,	// (0x0005430c) area_fmrd2_info_pane_t3

0xcfd7,	// (0x0005431c) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x00057272) area_fmrd2_info_pane_t

0xcfe5,	// (0x0005432a) fmrd2_indi_pane_t1

0xcff5,	// (0x0005433a) fmrd2_indi_pane_t2

0xd005,	// (0x0005434a) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0005727b) fmrd2_indi_pane_t

0x2d6b,	// (0x0004a0b0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2d6b,	// (0x0004a0b0) list_single_fs_bigclock_indicator_pane_g5

0x2e0f,	// (0x0004a154) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2e0f,	// (0x0004a154) list_single_fs_bigclock_indicator_pane_t5

0xc5ee,	// (0x00053933) aid_cell_bcale_month_pane_ParamLimits

0xc5ee,	// (0x00053933) aid_cell_bcale_month_pane

0xc5fa,	// (0x0005393f) bcale_month_pane_ParamLimits

0xc5fa,	// (0x0005393f) bcale_month_pane

0xc60a,	// (0x0005394f) bcale_preview_pane_ParamLimits

0xc60a,	// (0x0005394f) bcale_preview_pane

0xc9e1,	// (0x00053d26) list_single_fs_bigclock_pane_t1_ParamLimits

0xc9fb,	// (0x00053d40) list_single_fs_bigclock_pane_t2_ParamLimits

0xc9fb,	// (0x00053d40) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x00057202) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x00057202) list_single_fs_bigclock_pane_t

0xcf27,	// (0x0005426c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x00057266) main_fs_bigclock_unlock_btn_pane_g

0xd013,	// (0x00054358) aid_dia3_key_size_ParamLimits

0xd013,	// (0x00054358) aid_dia3_key_size

0xd01f,	// (0x00054364) aid_dia3_listrow_size_ParamLimits

0xd01f,	// (0x00054364) aid_dia3_listrow_size

0xd02d,	// (0x00054372) dia3_keypad_fun_pane_ParamLimits

0xd02d,	// (0x00054372) dia3_keypad_fun_pane

0xd03d,	// (0x00054382) dia3_keypad_num_pane_ParamLimits

0xd03d,	// (0x00054382) dia3_keypad_num_pane

0xd04d,	// (0x00054392) dia3_listscroll_pane_ParamLimits

0xd04d,	// (0x00054392) dia3_listscroll_pane

0xd05b,	// (0x000543a0) dia3_numentry_pane_ParamLimits

0xd05b,	// (0x000543a0) dia3_numentry_pane

0xd069,	// (0x000543ae) dia3_list_pane

0xd074,	// (0x000543b9) scroll_pane_cp12

0x4b88,	// (0x0004becd) bg_dia3_numentry_pane

0xd07f,	// (0x000543c4) dia3_numentry_pane_t1

0xd08e,	// (0x000543d3) cell_dia3_key_num_pane

0xd096,	// (0x000543db) cell_dia3_key0_fun_pane_ParamLimits

0xd096,	// (0x000543db) cell_dia3_key0_fun_pane

0xd0a3,	// (0x000543e8) cell_dia3_key1_fun_pane_ParamLimits

0xd0a3,	// (0x000543e8) cell_dia3_key1_fun_pane

0xd0b0,	// (0x000543f5) dia3_listrow_pane

0x2a89,	// (0x00049dce) bg_dia3_numentry_pane_g1

0x4b88,	// (0x0004becd) bg_button_pane_cp21

0xd0b9,	// (0x000543fe) cell_dia3_key_num_pane_t1

0xd0c7,	// (0x0005440c) cell_dia3_key_num_pane_t2

0xd0d6,	// (0x0005441b) cell_dia3_key_num_pane_t3

0xd0e5,	// (0x0005442a) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x00057282) cell_dia3_key_num_pane_t

0x4b88,	// (0x0004becd) bg_button_pane_cp19

0xd0f4,	// (0x00054439) cell_dia3_key0_fun_pane_g1

0x4b88,	// (0x0004becd) bg_button_pane_cp20

0xd0fc,	// (0x00054441) cell_dia3_key1_fun_pane_g1

0xd104,	// (0x00054449) area_left_week_number_pane

0xd10d,	// (0x00054452) area_top_day_name_pane

0xd116,	// (0x0005445b) frame_month_view_pane

0xd120,	// (0x00054465) grid_month_view_pane

0xd12a,	// (0x0005446f) cell_top_day_name_pane_ParamLimits

0xd12a,	// (0x0005446f) cell_top_day_name_pane

0xd144,	// (0x00054489) cell_area_left_week_number_pane_ParamLimits

0xd144,	// (0x00054489) cell_area_left_week_number_pane

0xd158,	// (0x0005449d) cell_month_view_pane_ParamLimits

0xd158,	// (0x0005449d) cell_month_view_pane

0xd175,	// (0x000544ba) frm_month_g1

0xd17e,	// (0x000544c3) frm_month_g2

0xd188,	// (0x000544cd) frm_month_g3

0xd192,	// (0x000544d7) frm_month_g4

0xd19c,	// (0x000544e1) frm_month_g5

0xd1a6,	// (0x000544eb) frm_month_g6

0xd1b0,	// (0x000544f5) frm_month_g7

0xd1ba,	// (0x000544ff) frm_month_g8

0xd1c3,	// (0x00054508) frm_month_g9

0xd1cc,	// (0x00054511) frm_month_g10

0xd1d5,	// (0x0005451a) frm_month_g11

0xd1de,	// (0x00054523) frm_month_g12

0xd1e7,	// (0x0005452c) frm_month_g13

0xd1f0,	// (0x00054535) frm_month_g14

0xd1f9,	// (0x0005453e) frm_month_g15

0xd204,	// (0x00054549) frm_month_g16

0x000f,

0xff46,	// (0x0005728b) frm_month_g

0xd20f,	// (0x00054554) cell_top_day_name_pane_t1

0xd21e,	// (0x00054563) cell_area_left_week_number_pane_g1

0xd20f,	// (0x00054554) cell_area_left_week_number_pane_t1

0x1373,	// (0x000486b8) cell_month_view_pane_g1

0xd226,	// (0x0005456b) cell_month_view_pane_t1

0x4b88,	// (0x0004becd) main_fps_pane

0x303c,	// (0x0004a381) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x303c,	// (0x0004a381) cmail_ddmenu_btn02_pane_cp1

0x3058,	// (0x0004a39d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3058,	// (0x0004a39d) cmail_ddmenu_btn02_pane_cp2

0xc8c9,	// (0x00053c0e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc8c9,	// (0x00053c0e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x000571b3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x000571b3) cmail_ddmenu_btn02_pane_g

0xc8e7,	// (0x00053c2c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc8e7,	// (0x00053c2c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x000571b8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x000571b8) cmail_ddmenu_btn02_pane_t

0xd235,	// (0x0005457a) fps_text_pane_ParamLimits

0xd235,	// (0x0005457a) fps_text_pane

0xd242,	// (0x00054587) main_fps_pane_g1_ParamLimits

0xd242,	// (0x00054587) main_fps_pane_g1

0xd250,	// (0x00054595) wait_bar_pane_cp010_ParamLimits

0xd250,	// (0x00054595) wait_bar_pane_cp010

0xd25c,	// (0x000545a1) fps_text_pane_t1_ParamLimits

0xd25c,	// (0x000545a1) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
