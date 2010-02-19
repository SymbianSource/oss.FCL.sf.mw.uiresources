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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005c5b3 };

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
0x0979,	// (0x0005cf2c) Screen

0x0985,	// (0x0005cf38) application_window

0x09f7,	// (0x0005cfaa) area_bottom_pane_ParamLimits

0x09f7,	// (0x0005cfaa) area_bottom_pane

0x0a55,	// (0x0005d008) area_top_pane_ParamLimits

0x0a55,	// (0x0005d008) area_top_pane

0x0ab2,	// (0x0005d065) call_video_uplink_pane_ParamLimits

0x0ab2,	// (0x0005d065) call_video_uplink_pane

0x0ade,	// (0x0005d091) main_pane_ParamLimits

0x0ade,	// (0x0005d091) main_pane

0xc071,	// (0x00068624) context_pane

0x409a,	// (0x0006064d) navi_pane

0x40ca,	// (0x0006067d) popup_cale_events_window_ParamLimits

0x40ca,	// (0x0006067d) popup_cale_events_window

0xc084,	// (0x00068637) popup_mup_playback_window

0x40e2,	// (0x00060695) signal_pane

0x9fe2,	// (0x00066595) main_browser_pane

0xabb3,	// (0x00067166) main_burst_pane

0x3d9c,	// (0x0006034f) main_calc_pane

0xabb3,	// (0x00067166) main_cale_day_pane

0x9fe2,	// (0x00066595) main_cale_month_pane

0xabb3,	// (0x00067166) main_cale_week_pane

0xabb3,	// (0x00067166) main_call_pane

0x9c88,	// (0x0006623b) main_call_poc_pane

0xabb3,	// (0x00067166) main_camera_pane

0xabb3,	// (0x00067166) main_chi_dic_pane

0xaa55,	// (0x00067008) main_clock_pane

0x9c88,	// (0x0006623b) main_fmradio_pane

0xabb3,	// (0x00067166) main_graph_messa_pane

0x9c88,	// (0x0006623b) main_help_pane

0x9fe2,	// (0x00066595) main_im_pane

0x9ee3,	// (0x00066496) main_image_pane_ParamLimits

0x9ee3,	// (0x00066496) main_image_pane

0x9c88,	// (0x0006623b) main_location2_pane

0xabb3,	// (0x00067166) main_location_pane

0x9c88,	// (0x0006623b) main_messa_pane

0x9c88,	// (0x0006623b) main_mp2_pane

0xabb3,	// (0x00067166) main_mp_pane

0x9c88,	// (0x0006623b) main_msg_pane

0x9c88,	// (0x0006623b) main_mup_eq_pane

0x9c88,	// (0x0006623b) main_mup_pane

0x9fe2,	// (0x00066595) main_notes_pane

0x9c88,	// (0x0006623b) main_pec_pane

0x9c88,	// (0x0006623b) main_phob_pane

0x9c88,	// (0x0006623b) main_pinb_pane

0x9c88,	// (0x0006623b) main_postcard_pane

0x9c88,	// (0x0006623b) main_qdial_pane

0xabb3,	// (0x00067166) main_skin_pane

0x9c88,	// (0x0006623b) main_smil2_pane

0xabb3,	// (0x00067166) main_smil_pane

0xabb3,	// (0x00067166) main_video_pane

0xabb3,	// (0x00067166) main_video_tele_pane

0x9ee3,	// (0x00066496) main_viewer_pane_ParamLimits

0x9ee3,	// (0x00066496) main_viewer_pane

0xabb3,	// (0x00067166) main_vorec_pane

0x3df2,	// (0x000603a5) popup_blid_sat_info_window_ParamLimits

0x3df2,	// (0x000603a5) popup_blid_sat_info_window

0x3e56,	// (0x00060409) popup_dyc_status_message_window_ParamLimits

0x3e56,	// (0x00060409) popup_dyc_status_message_window

0x3e70,	// (0x00060423) popup_grid_large_graphic_window_ParamLimits

0x3e70,	// (0x00060423) popup_grid_large_graphic_window

0x3f32,	// (0x000604e5) popup_loc_request_window_ParamLimits

0x3f32,	// (0x000604e5) popup_loc_request_window

0x406e,	// (0x00060621) popup_wml_address_window_ParamLimits

0x406e,	// (0x00060621) popup_wml_address_window

0x3bda,	// (0x0006018d) call_muted_g1

0x386b,	// (0x0005fe1e) popup_call_audio_conf_window_ParamLimits

0x386b,	// (0x0005fe1e) popup_call_audio_conf_window

0x3bea,	// (0x0006019d) popup_call_audio_first_window_ParamLimits

0x3bea,	// (0x0006019d) popup_call_audio_first_window

0x3c60,	// (0x00060213) popup_call_audio_in_window_ParamLimits

0x3c60,	// (0x00060213) popup_call_audio_in_window

0x3c9c,	// (0x0006024f) popup_call_audio_out_window_ParamLimits

0x3c9c,	// (0x0006024f) popup_call_audio_out_window

0x3cd6,	// (0x00060289) popup_call_audio_second_window_ParamLimits

0x3cd6,	// (0x00060289) popup_call_audio_second_window

0x3d2c,	// (0x000602df) popup_call_audio_wait_window_ParamLimits

0x3d2c,	// (0x000602df) popup_call_audio_wait_window

0x3d61,	// (0x00060314) popup_number_entry_window_ParamLimits

0x3d61,	// (0x00060314) popup_number_entry_window

0x0c7d,	// (0x0005d230) bg_popup_call_pane_cp05_ParamLimits

0x0c7d,	// (0x0005d230) bg_popup_call_pane_cp05

0x0c9d,	// (0x0005d250) popup_number_entry_window_t1

0x0cb0,	// (0x0005d263) popup_number_entry_window_t2

0x0cc2,	// (0x0005d275) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0006b69a) popup_number_entry_window_t

0x0d09,	// (0x0005d2bc) text_title_cp2

0x0d1c,	// (0x0005d2cf) bg_popup_call_pane_cp_ParamLimits

0x0d1c,	// (0x0005d2cf) bg_popup_call_pane_cp

0x0d2a,	// (0x0005d2dd) call_thumbnail_pane

0x0d32,	// (0x0005d2e5) popup_call_audio_in_window_g1_ParamLimits

0x0d32,	// (0x0005d2e5) popup_call_audio_in_window_g1

0x0d3e,	// (0x0005d2f1) popup_call_audio_in_window_g2_ParamLimits

0x0d3e,	// (0x0005d2f1) popup_call_audio_in_window_g2

0x0d4a,	// (0x0005d2fd) popup_call_audio_in_window_g3_ParamLimits

0x0d4a,	// (0x0005d2fd) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0006b6a3) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0006b6a3) popup_call_audio_in_window_g

0x0d56,	// (0x0005d309) popup_call_audio_in_window_t1_ParamLimits

0x0d56,	// (0x0005d309) popup_call_audio_in_window_t1

0x0d72,	// (0x0005d325) popup_call_audio_in_window_t2_ParamLimits

0x0d72,	// (0x0005d325) popup_call_audio_in_window_t2

0x0d8e,	// (0x0005d341) popup_call_audio_in_window_t3_ParamLimits

0x0d8e,	// (0x0005d341) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0006b6aa) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0006b6aa) popup_call_audio_in_window_t

0x0d1c,	// (0x0005d2cf) bg_popup_call_pane_cp01_ParamLimits

0x0d1c,	// (0x0005d2cf) bg_popup_call_pane_cp01

0x0d2a,	// (0x0005d2dd) call_thumbnail_pane_cp02

0x0da1,	// (0x0005d354) call_type_pane_cp022

0x0da9,	// (0x0005d35c) popup_call_audio_out_window_g1_ParamLimits

0x0da9,	// (0x0005d35c) popup_call_audio_out_window_g1

0x0dbb,	// (0x0005d36e) popup_call_audio_out_window_g2_ParamLimits

0x0dbb,	// (0x0005d36e) popup_call_audio_out_window_g2

0x0dc7,	// (0x0005d37a) popup_call_audio_out_window_g3_ParamLimits

0x0dc7,	// (0x0005d37a) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0006b6b1) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0006b6b1) popup_call_audio_out_window_g

0x0dd9,	// (0x0005d38c) popup_call_audio_out_window_t1_ParamLimits

0x0dd9,	// (0x0005d38c) popup_call_audio_out_window_t1

0x0df1,	// (0x0005d3a4) popup_call_audio_out_window_t2_ParamLimits

0x0df1,	// (0x0005d3a4) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0006b6b8) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0006b6b8) popup_call_audio_out_window_t

0x0e06,	// (0x0005d3b9) bg_popup_call_pane_ParamLimits

0x0e06,	// (0x0005d3b9) bg_popup_call_pane

0x0e8a,	// (0x0005d43d) call_thumbnail_pane_cp_ParamLimits

0x0e8a,	// (0x0005d43d) call_thumbnail_pane_cp

0x9a4d,	// (0x00066000) call_type_pane_cp01_ParamLimits

0x9a4d,	// (0x00066000) call_type_pane_cp01

0x9a91,	// (0x00066044) popup_call_audio_first_window_g1_ParamLimits

0x9a91,	// (0x00066044) popup_call_audio_first_window_g1

0x9add,	// (0x00066090) popup_call_audio_first_window_g2_ParamLimits

0x9add,	// (0x00066090) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0006b6bd) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0006b6bd) popup_call_audio_first_window_g

0x9b21,	// (0x000660d4) popup_call_audio_first_window_t1_ParamLimits

0x9b21,	// (0x000660d4) popup_call_audio_first_window_t1

0x9bcd,	// (0x00066180) popup_call_audio_first_window_t4_ParamLimits

0x9bcd,	// (0x00066180) popup_call_audio_first_window_t4

0x9c59,	// (0x0006620c) popup_call_audio_first_window_t5_ParamLimits

0x9c59,	// (0x0006620c) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0006b6c2) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0006b6c2) popup_call_audio_first_window_t

0x9c88,	// (0x0006623b) bg_popup_call_pane_cp02

0x9c92,	// (0x00066245) call_type_pane_cp023

0x9c9a,	// (0x0006624d) popup_call_audio_wait_window_g1

0x9ca2,	// (0x00066255) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0006b6c9) popup_call_audio_wait_window_g

0x9caa,	// (0x0006625d) popup_call_audio_wait_window_t3

0x9cb8,	// (0x0006626b) bg_popup_call_pane_cp03_ParamLimits

0x9cb8,	// (0x0006626b) bg_popup_call_pane_cp03

0x9d18,	// (0x000662cb) call_thumbnail_pane_cp011_ParamLimits

0x9d18,	// (0x000662cb) call_thumbnail_pane_cp011

0x9d24,	// (0x000662d7) call_type_pane_cp034_ParamLimits

0x9d24,	// (0x000662d7) call_type_pane_cp034

0x9d60,	// (0x00066313) popup_call_audio_second_window_g1_ParamLimits

0x9d60,	// (0x00066313) popup_call_audio_second_window_g1

0x9d9c,	// (0x0006634f) popup_call_audio_second_window_g2_ParamLimits

0x9d9c,	// (0x0006634f) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0006b6ce) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0006b6ce) popup_call_audio_second_window_g

0x9dd8,	// (0x0006638b) popup_call_audio_second_window_t1_ParamLimits

0x9dd8,	// (0x0006638b) popup_call_audio_second_window_t1

0x9e59,	// (0x0006640c) popup_call_audio_second_window_t2_ParamLimits

0x9e59,	// (0x0006640c) popup_call_audio_second_window_t2

0x9e8f,	// (0x00066442) popup_call_audio_second_window_t3_ParamLimits

0x9e8f,	// (0x00066442) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0006b6d3) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0006b6d3) popup_call_audio_second_window_t

0x9c88,	// (0x0006623b) bg_popup_call_pane_cp04

0x9ec5,	// (0x00066478) list_conf_pane

0x9ecd,	// (0x00066480) popup_call_audio_conf_window_t1

0x9edb,	// (0x0006648e) call_thumbnail_pane_g1

0x9ee3,	// (0x00066496) bg_pinb_pane_ParamLimits

0x9ee3,	// (0x00066496) bg_pinb_pane

0x9ef1,	// (0x000664a4) find_pinb_pane

0x9efa,	// (0x000664ad) listscroll_pinb_pane_ParamLimits

0x9efa,	// (0x000664ad) listscroll_pinb_pane

0x9f09,	// (0x000664bc) pinb_bg_pane_g1

0x0eae,	// (0x0005d461) pinb_bg_pane_g2

0x0eba,	// (0x0005d46d) pinb_bg_pane_g3

0x0ec6,	// (0x0005d479) pinb_bg_pane_g4

0x0ed2,	// (0x0005d485) pinb_bg_pane_g5

0x0ede,	// (0x0005d491) pinb_bg_pane_g6

0x0ee9,	// (0x0005d49c) pinb_bg_pane_g7

0x0ef4,	// (0x0005d4a7) pinb_bg_pane_g8

0x0eff,	// (0x0005d4b2) pinb_bg_pane_g9

0x0f09,	// (0x0005d4bc) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0006b6da) pinb_bg_pane_g

0x0f26,	// (0x0005d4d9) grid_pinb_pane

0x0f31,	// (0x0005d4e4) list_pinb_pane

0x0f3c,	// (0x0005d4ef) scroll_pane_cp01_ParamLimits

0x0f3c,	// (0x0005d4ef) scroll_pane_cp01

0x9f13,	// (0x000664c6) find_pinb_pane_g1_ParamLimits

0x9f13,	// (0x000664c6) find_pinb_pane_g1

0x9f2b,	// (0x000664de) find_pinb_pane_t1

0x9f3d,	// (0x000664f0) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0006b6f4) find_pinb_pane_t

0x9f52,	// (0x00066505) input_focus_pane_cp01_ParamLimits

0x9f52,	// (0x00066505) input_focus_pane_cp01

0x0f4e,	// (0x0005d501) cell_pinb_pane_ParamLimits

0x0f4e,	// (0x0005d501) cell_pinb_pane

0x0f70,	// (0x0005d523) cell_pinb_pane_g1_ParamLimits

0x0f70,	// (0x0005d523) cell_pinb_pane_g1

0x0f84,	// (0x0005d537) cell_pinb_pane_g2_ParamLimits

0x0f84,	// (0x0005d537) cell_pinb_pane_g2

0x9f5e,	// (0x00066511) cell_pinb_pane_g3_ParamLimits

0x9f5e,	// (0x00066511) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0006b6f9) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0006b6f9) cell_pinb_pane_g

0x9c88,	// (0x0006623b) grid_highlight_pane_cp01

0x0f90,	// (0x0005d543) list_pinb_item_pane_ParamLimits

0x0f90,	// (0x0005d543) list_pinb_item_pane

0x9c88,	// (0x0006623b) list_highlight_pane_cp02

0x0fa3,	// (0x0005d556) list_pinb_item_pane_g1_ParamLimits

0x0fa3,	// (0x0005d556) list_pinb_item_pane_g1

0x0fb0,	// (0x0005d563) list_pinb_item_pane_g2_ParamLimits

0x0fb0,	// (0x0005d563) list_pinb_item_pane_g2

0x0fbc,	// (0x0005d56f) list_pinb_item_pane_g3_ParamLimits

0x0fbc,	// (0x0005d56f) list_pinb_item_pane_g3

0x0fcd,	// (0x0005d580) list_pinb_item_pane_g4_ParamLimits

0x0fcd,	// (0x0005d580) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0006b700) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0006b700) list_pinb_item_pane_g

0x0fd9,	// (0x0005d58c) list_pinb_item_pane_t1_ParamLimits

0x0fd9,	// (0x0005d58c) list_pinb_item_pane_t1

0x100e,	// (0x0005d5c1) calc_display_pane

0x1034,	// (0x0005d5e7) calc_paper_pane

0x1057,	// (0x0005d60a) grid_calc_pane

0x9c88,	// (0x0006623b) bg_list_pane_cp01

0x1085,	// (0x0005d638) clock_g1

0x108d,	// (0x0005d640) clock_g2

0x0001,

0xf156,	// (0x0006b709) clock_g

0x1095,	// (0x0005d648) clock_t1_ParamLimits

0x1095,	// (0x0005d648) clock_t1

0x10aa,	// (0x0005d65d) clock_t2_ParamLimits

0x10aa,	// (0x0005d65d) clock_t2

0x10bc,	// (0x0005d66f) clock_t3_ParamLimits

0x10bc,	// (0x0005d66f) clock_t3

0x10ce,	// (0x0005d681) clock_t4_ParamLimits

0x10ce,	// (0x0005d681) clock_t4

0x10e0,	// (0x0005d693) clock_t5_ParamLimits

0x10e0,	// (0x0005d693) clock_t5

0x10f5,	// (0x0005d6a8) clock_t6_ParamLimits

0x10f5,	// (0x0005d6a8) clock_t6

0x1107,	// (0x0005d6ba) clock_t7_ParamLimits

0x1107,	// (0x0005d6ba) clock_t7

0x1119,	// (0x0005d6cc) clock_t8_ParamLimits

0x1119,	// (0x0005d6cc) clock_t8

0x112d,	// (0x0005d6e0) clock_t9_ParamLimits

0x112d,	// (0x0005d6e0) clock_t9

0x0008,

0xf15b,	// (0x0006b70e) clock_t_ParamLimits

0xf15b,	// (0x0006b70e) clock_t

0x9f72,	// (0x00066525) popup_clock_analogue_window_cp02

0x9f72,	// (0x00066525) popup_clock_digital_window_cp01

0x9f7a,	// (0x0006652d) listscroll_help_pane

0x9c88,	// (0x0006623b) phob_pre_status_pane

0x9f84,	// (0x00066537) grid_qdial_pane

0x9c88,	// (0x0006623b) listscroll_mce_pane

0x9f8e,	// (0x00066541) bg_notes_pane

0x9f9c,	// (0x0006654f) list_notes_pane

0x1143,	// (0x0005d6f6) scroll_pane_cp06

0x9faa,	// (0x0006655d) bg_calc_paper_pane

0x9fc8,	// (0x0006657b) list_calc_pane

0x9fe2,	// (0x00066595) bg_calc_display_pane

0x1157,	// (0x0005d70a) calc_display_pane_t1

0x1169,	// (0x0005d71c) calc_display_pane_t2

0x9fee,	// (0x000665a1) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0006b721) calc_display_pane_t

0x117b,	// (0x0005d72e) cell_calc_pane_ParamLimits

0x117b,	// (0x0005d72e) cell_calc_pane

0xa000,	// (0x000665b3) bg_calc_paper_pane_g1

0xa00c,	// (0x000665bf) bg_calc_paper_pane_g2

0xa018,	// (0x000665cb) bg_calc_paper_pane_g3

0xa024,	// (0x000665d7) bg_calc_paper_pane_g4

0xa030,	// (0x000665e3) bg_calc_paper_pane_g5

0x11b6,	// (0x0005d769) bg_calc_paper_pane_g6

0x11c9,	// (0x0005d77c) bg_calc_paper_pane_g7

0x11dc,	// (0x0005d78f) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0006b728) bg_calc_paper_pane_g

0x11ed,	// (0x0005d7a0) calc_bg_paper_pane_g9

0x11fe,	// (0x0005d7b1) list_calc_item_pane_ParamLimits

0x11fe,	// (0x0005d7b1) list_calc_item_pane

0xa03c,	// (0x000665ef) list_calc_item_pane_g1

0xa049,	// (0x000665fc) list_calc_item_pane_t1_ParamLimits

0xa049,	// (0x000665fc) list_calc_item_pane_t1

0x1212,	// (0x0005d7c5) list_calc_item_pane_t2_ParamLimits

0x1212,	// (0x0005d7c5) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0006b739) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0006b739) list_calc_item_pane_t

0xa05b,	// (0x0006660e) cell_calc_pane_g1

0xa065,	// (0x00066618) grid_highlight_pane_cp02

0xa087,	// (0x0006663a) bg_calc_display_pane_g1

0xa090,	// (0x00066643) bg_calc_display_pane_g2

0xa09a,	// (0x0006664d) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0006b743) bg_calc_display_pane_g

0x1244,	// (0x0005d7f7) cell_qdial_pane_ParamLimits

0x1244,	// (0x0005d7f7) cell_qdial_pane

0x125a,	// (0x0005d80d) cell_qdial_pane_g1_ParamLimits

0x125a,	// (0x0005d80d) cell_qdial_pane_g1

0x1270,	// (0x0005d823) cell_qdial_pane_g2_ParamLimits

0x1270,	// (0x0005d823) cell_qdial_pane_g2

0xa0a3,	// (0x00066656) cell_qdial_pane_g3_ParamLimits

0xa0a3,	// (0x00066656) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0006b74a) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0006b74a) cell_qdial_pane_g

0x1296,	// (0x0005d849) cell_qdial_pane_t1_ParamLimits

0x1296,	// (0x0005d849) cell_qdial_pane_t1

0x12ae,	// (0x0005d861) cell_qdial_pane_t2_ParamLimits

0x12ae,	// (0x0005d861) cell_qdial_pane_t2

0x12c1,	// (0x0005d874) cell_qdial_pane_t3_ParamLimits

0x12c1,	// (0x0005d874) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0006b753) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0006b753) cell_qdial_pane_t

0x9c88,	// (0x0006623b) grid_highlight_pane_cp04

0xa0af,	// (0x00066662) thumbnail_qdial_pane_ParamLimits

0xa0af,	// (0x00066662) thumbnail_qdial_pane

0xa10b,	// (0x000666be) list_help_pane

0xa114,	// (0x000666c7) scroll_pane_cp02

0x12d4,	// (0x0005d887) help_list_pane_t1_ParamLimits

0x12d4,	// (0x0005d887) help_list_pane_t1

0xa11d,	// (0x000666d0) bg_notes_pane_g2

0xa125,	// (0x000666d8) bg_notes_pane_g3

0xa12d,	// (0x000666e0) notes_bg_pane_g1

0xa135,	// (0x000666e8) notes_bg_pane_g4

0xa13d,	// (0x000666f0) notes_bg_pane_g5

0xa145,	// (0x000666f8) notes_bg_pane_g6

0xa14d,	// (0x00066700) notes_bg_pane_g7

0xa155,	// (0x00066708) notes_bg_pane_g8

0xa15d,	// (0x00066710) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0006b771) notes_bg_pane_g

0x12f8,	// (0x0005d8ab) list_notes_text_pane_ParamLimits

0x12f8,	// (0x0005d8ab) list_notes_text_pane

0xa165,	// (0x00066718) list_notes_text_pane_g1

0x1312,	// (0x0005d8c5) list_notes_text_pane_t1

0x9fe2,	// (0x00066595) listscroll_cale_week_pane

0x133d,	// (0x0005d8f0) bg_cale_heading_pane

0xa17f,	// (0x00066732) bg_cale_pane_cp01

0x1359,	// (0x0005d90c) cale_week_corner_pane

0x136f,	// (0x0005d922) cale_week_day_heading_pane

0x138b,	// (0x0005d93e) cale_week_scroll_pane_g1

0x13a4,	// (0x0005d957) cale_week_scroll_pane_g2

0x13b5,	// (0x0005d968) cale_week_scroll_pane_g3

0x13c6,	// (0x0005d979) cale_week_scroll_pane_g4

0x13d7,	// (0x0005d98a) cale_week_scroll_pane_g5

0x13e8,	// (0x0005d99b) cale_week_scroll_pane_g6

0x13f9,	// (0x0005d9ac) cale_week_scroll_pane_g7

0x140a,	// (0x0005d9bd) cale_week_scroll_pane_g8

0x141b,	// (0x0005d9ce) cale_week_scroll_pane_g9

0x142c,	// (0x0005d9df) cale_week_scroll_pane_g10

0x143d,	// (0x0005d9f0) cale_week_scroll_pane_g11

0x144e,	// (0x0005da01) cale_week_scroll_pane_g12

0x145f,	// (0x0005da12) cale_week_scroll_pane_g13

0x1478,	// (0x0005da2b) cale_week_scroll_pane_g14

0x1491,	// (0x0005da44) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0006b780) cale_week_scroll_pane_g

0x14aa,	// (0x0005da5d) cale_week_time_pane

0x14bb,	// (0x0005da6e) grid_cale_week_pane

0x14d6,	// (0x0005da89) scroll_pane_cp08

0x14ee,	// (0x0005daa1) cell_cale_week_pane_ParamLimits

0x14ee,	// (0x0005daa1) cell_cale_week_pane

0x1536,	// (0x0005dae9) cale_week_day_heading_pane_t1

0x154a,	// (0x0005dafd) cale_week_day_heading_pane_t2

0x155e,	// (0x0005db11) cale_week_day_heading_pane_t3

0x1572,	// (0x0005db25) cale_week_day_heading_pane_t4

0x1586,	// (0x0005db39) cale_week_day_heading_pane_t5

0x159a,	// (0x0005db4d) cale_week_day_heading_pane_t6

0x15ae,	// (0x0005db61) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0006b79f) cale_week_day_heading_pane_t

0xa1aa,	// (0x0006675d) bg_cale_side_pane

0x15c2,	// (0x0005db75) cale_week_time_pane_t1

0x15da,	// (0x0005db8d) cale_week_time_pane_t2

0x15f2,	// (0x0005dba5) cale_week_time_pane_t3

0x160a,	// (0x0005dbbd) cale_week_time_pane_t4

0x1622,	// (0x0005dbd5) cale_week_time_pane_t5

0x163a,	// (0x0005dbed) cale_week_time_pane_t6

0x1652,	// (0x0005dc05) cale_week_time_pane_t7

0x166e,	// (0x0005dc21) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0006b7ae) cale_week_time_pane_t

0x168e,	// (0x0005dc41) cell_cale_week_pane_g2

0x169f,	// (0x0005dc52) cell_cale_week_pane_g3_ParamLimits

0x169f,	// (0x0005dc52) cell_cale_week_pane_g3

0xa1b8,	// (0x0006676b) grid_highlight_pane_cp07

0xa1c0,	// (0x00066773) listscroll_gms_pane

0xa1ca,	// (0x0006677d) grid_gms_pane

0xa1d3,	// (0x00066786) listscroll_gms_pane_g1

0xa1db,	// (0x0006678e) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0006b7bf) listscroll_gms_pane_g

0x16b7,	// (0x0005dc6a) scroll_pane_cp010

0x16c2,	// (0x0005dc75) cell_gms_pane_ParamLimits

0x16c2,	// (0x0005dc75) cell_gms_pane

0x16dc,	// (0x0005dc8f) cell_gms_pane_g1

0xa1e3,	// (0x00066796) cell_gms_pane_g2

0xa1eb,	// (0x0006679e) cell_gms_pane_g3

0xa1f4,	// (0x000667a7) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0006b7c4) cell_gms_pane_g

0xa1fd,	// (0x000667b0) grid_highlight_pane_cp09

0x3b82,	// (0x00060135) phob_pre_status_pane_g1

0x3b8a,	// (0x0006013d) phob_pre_status_pane_g2

0x3b92,	// (0x00060145) phob_pre_status_pane_g3

0x3b9a,	// (0x0006014d) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0006bbb3) phob_pre_status_pane_g

0x3baa,	// (0x0006015d) phob_pre_status_pane_t1

0x3bba,	// (0x0006016d) phob_pre_status_pane_t2

0x3bca,	// (0x0006017d) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0006bbbe) phob_pre_status_pane_t

0x9c88,	// (0x0006623b) bg_list_pane_cp05

0x16ec,	// (0x0005dc9f) grid_vorec_pane

0xa205,	// (0x000667b8) vorec_t1

0xa213,	// (0x000667c6) vorec_t2

0xa221,	// (0x000667d4) vorec_t3

0xa22f,	// (0x000667e2) vorec_t4

0xa23d,	// (0x000667f0) vorec_t5

0xa24b,	// (0x000667fe) vorec_t6

0x0006,

0xf21a,	// (0x0006b7cd) vorec_t

0xa267,	// (0x0006681a) wait_bar_pane_cp01

0x16f6,	// (0x0005dca9) cell_vorec_pane_ParamLimits

0x16f6,	// (0x0005dca9) cell_vorec_pane

0xa26f,	// (0x00066822) cell_vorec_pane_g1

0x9c88,	// (0x0006623b) grid_highlight_pane_cp05

0x1721,	// (0x0005dcd4) cams_zoom_pane

0x1730,	// (0x0005dce3) image_vga_pane

0x174a,	// (0x0005dcfd) main_camera_pane_g1

0x175c,	// (0x0005dd0f) main_camera_pane_g2

0x176c,	// (0x0005dd1f) main_camera_pane_g3

0x1780,	// (0x0005dd33) main_camera_pane_g4

0x1794,	// (0x0005dd47) main_camera_pane_g5

0x17a8,	// (0x0005dd5b) main_camera_pane_g6

0x17bc,	// (0x0005dd6f) main_camera_pane_g7

0x0007,

0xf229,	// (0x0006b7dc) main_camera_pane_g

0x17d0,	// (0x0005dd83) main_camera_pane_t1

0x17e6,	// (0x0005dd99) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0006b7ed) main_camera_pane_t

0x1824,	// (0x0005ddd7) cams_zoom_pane_cp_ParamLimits

0x1824,	// (0x0005ddd7) cams_zoom_pane_cp

0x184c,	// (0x0005ddff) image_cif_pane_ParamLimits

0x184c,	// (0x0005ddff) image_cif_pane

0x1887,	// (0x0005de3a) image_subqcif_pane

0x1891,	// (0x0005de44) main_video_pane_g1_ParamLimits

0x1891,	// (0x0005de44) main_video_pane_g1

0x18b5,	// (0x0005de68) main_video_pane_g2_ParamLimits

0x18b5,	// (0x0005de68) main_video_pane_g2

0x18eb,	// (0x0005de9e) main_video_pane_g3_ParamLimits

0x18eb,	// (0x0005de9e) main_video_pane_g3

0x1919,	// (0x0005decc) main_video_pane_g4_ParamLimits

0x1919,	// (0x0005decc) main_video_pane_g4

0x1947,	// (0x0005defa) main_video_pane_g5_ParamLimits

0x1947,	// (0x0005defa) main_video_pane_g5

0xa285,	// (0x00066838) main_video_pane_g6_ParamLimits

0xa285,	// (0x00066838) main_video_pane_g6

0x0006,

0xf23f,	// (0x0006b7f2) main_video_pane_g_ParamLimits

0xf23f,	// (0x0006b7f2) main_video_pane_g

0x1970,	// (0x0005df23) main_video_pane_t1_ParamLimits

0x1970,	// (0x0005df23) main_video_pane_t1

0xa29f,	// (0x00066852) cams_zoom_pane_g1

0xa2a8,	// (0x0006685b) cams_zoom_pane_g2

0xa2b1,	// (0x00066864) cams_zoom_pane_g3

0xa2ba,	// (0x0006686d) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0006b801) cams_zoom_pane_g

0x19cd,	// (0x0005df80) grid_cams_pane

0x19e7,	// (0x0005df9a) linegrid_cams_pane

0x19f9,	// (0x0005dfac) cell_cams_pane_ParamLimits

0x19f9,	// (0x0005dfac) cell_cams_pane

0xa2c3,	// (0x00066876) cams_burst_image_pane

0xa2cb,	// (0x0006687e) cell_cams_pane_g1

0x9c88,	// (0x0006623b) grid_highlight_pane_cp03

0xa05b,	// (0x0006660e) mp_bg_pane_g1

0x9c88,	// (0x0006623b) bg_list_pane_cp03

0xbf43,	// (0x000684f6) bg_mp_pane

0xbf4b,	// (0x000684fe) grid_mp_pane

0xbf53,	// (0x00068506) media_player_g1

0xbf5d,	// (0x00068510) media_player_t1

0xbf6b,	// (0x0006851e) media_player_t2

0xbf79,	// (0x0006852c) media_player_t3

0xbf87,	// (0x0006853a) media_player_t4

0xbf95,	// (0x00068548) media_player_t5

0xbfa3,	// (0x00068556) media_player_t6

0xbfb1,	// (0x00068564) media_player_t7

0x0006,

0xf5ea,	// (0x0006bb9d) media_player_t

0xbfbf,	// (0x00068572) wait_bar_pane_cp02

0xf5cf,	// (0x0006bb82) main_usb_pane_t

0x3b79,	// (0x0006012c) cell_mp_pane

0xa05b,	// (0x0006660e) cell_mp_pane_g1

0x9c88,	// (0x0006623b) grid_highlight_pane_cp06

0xa2d3,	// (0x00066886) grid_skin_colour_pane

0xa2db,	// (0x0006688e) list_highlight_pane_cp03

0x1b32,	// (0x0005e0e5) skin_g1

0xa2e3,	// (0x00066896) skin_t1

0xa2f2,	// (0x000668a5) skin_t2

0x0001,

0xf283,	// (0x0006b836) skin_t

0x1b3c,	// (0x0005e0ef) cell_skin_colour_pane_ParamLimits

0x1b3c,	// (0x0005e0ef) cell_skin_colour_pane

0xa300,	// (0x000668b3) cell_skin_colour_pane_g1

0x1baf,	// (0x0005e162) call_video_g1_ParamLimits

0x1baf,	// (0x0005e162) call_video_g1

0x1bcb,	// (0x0005e17e) call_video_g2_ParamLimits

0x1bcb,	// (0x0005e17e) call_video_g2

0x0001,

0xf288,	// (0x0006b83b) call_video_g_ParamLimits

0xf288,	// (0x0006b83b) call_video_g

0x1c10,	// (0x0005e1c3) call_video_uplink_pane_cp1_ParamLimits

0x1c10,	// (0x0005e1c3) call_video_uplink_pane_cp1

0xa312,	// (0x000668c5) call_video_uplink_pane_cp2

0x1cb1,	// (0x0005e264) video_down_crop_pane_ParamLimits

0x1cb1,	// (0x0005e264) video_down_crop_pane

0x1d9a,	// (0x0005e34d) video_down_pane_ParamLimits

0x1d9a,	// (0x0005e34d) video_down_pane

0xa31a,	// (0x000668cd) video_down_subqcif_pane_ParamLimits

0xa31a,	// (0x000668cd) video_down_subqcif_pane

0xa334,	// (0x000668e7) video_down_subqcif_pane_cp_ParamLimits

0xa334,	// (0x000668e7) video_down_subqcif_pane_cp

0xa35c,	// (0x0006690f) im_reading_pane_ParamLimits

0xa35c,	// (0x0006690f) im_reading_pane

0x1ea3,	// (0x0005e456) im_writing_pane_ParamLimits

0x1ea3,	// (0x0005e456) im_writing_pane

0x1ec1,	// (0x0005e474) im_reading_pane_t1

0xa376,	// (0x00066929) list_im_pane

0xa387,	// (0x0006693a) scroll_pane_cp07

0x1f00,	// (0x0005e4b3) im_writing_pane_t1_ParamLimits

0x1f00,	// (0x0005e4b3) im_writing_pane_t1

0xa3a0,	// (0x00066953) im_writing_pane_t2_ParamLimits

0xa3a0,	// (0x00066953) im_writing_pane_t2

0x0001,

0xf292,	// (0x0006b845) im_writing_pane_t_ParamLimits

0xf292,	// (0x0006b845) im_writing_pane_t

0x9c88,	// (0x0006623b) input_focus_pane_cp04

0x9c88,	// (0x0006623b) input_focus_pane_cp05

0x1f15,	// (0x0005e4c8) list_im_single_pane_ParamLimits

0x1f15,	// (0x0005e4c8) list_im_single_pane

0x1f2e,	// (0x0005e4e1) list_single_im_pane_t1

0x3b39,	// (0x000600ec) blid_accuracy_pane

0x3b41,	// (0x000600f4) blid_compass_pane

0x3b4b,	// (0x000600fe) main_location_t1

0x3b5b,	// (0x0006010e) main_location_t2

0x3b6b,	// (0x0006011e) main_location_t3

0x0002,

0xf5f9,	// (0x0006bbac) main_location_t

0x9c88,	// (0x0006623b) aid_levels_location

0xa05b,	// (0x0006660e) blid_accuracy_pane_g1

0xa05b,	// (0x0006660e) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0006b8a7) blid_accuracy_pane_g

0xa3e8,	// (0x0006699b) wml_content_pane

0xa426,	// (0x000669d9) wml_button_pane_ParamLimits

0xa426,	// (0x000669d9) wml_button_pane

0x1f3d,	// (0x0005e4f0) wml_list_single_large_pane_ParamLimits

0x1f3d,	// (0x0005e4f0) wml_list_single_large_pane

0x1f56,	// (0x0005e509) wml_list_single_medium_pane_ParamLimits

0x1f56,	// (0x0005e509) wml_list_single_medium_pane

0x1f70,	// (0x0005e523) wml_list_single_small_pane_ParamLimits

0x1f70,	// (0x0005e523) wml_list_single_small_pane

0xa43a,	// (0x000669ed) wml_selection_box_pane_ParamLimits

0xa43a,	// (0x000669ed) wml_selection_box_pane

0xa44d,	// (0x00066a00) wml_list_single_pane_t1

0xa45c,	// (0x00066a0f) wml_list_single_medium_pane_t1

0xa46b,	// (0x00066a1e) wml_list_single_large_pane_t1

0xa47a,	// (0x00066a2d) input_focus_pane_cp02_ParamLimits

0xa47a,	// (0x00066a2d) input_focus_pane_cp02

0xa48d,	// (0x00066a40) wml_selection_box_pane_g1

0xa496,	// (0x00066a49) wml_selection_box_pane_t1_ParamLimits

0xa496,	// (0x00066a49) wml_selection_box_pane_t1

0x9ee3,	// (0x00066496) bg_wml_button_pane_ParamLimits

0x9ee3,	// (0x00066496) bg_wml_button_pane

0xa4ae,	// (0x00066a61) wml_button_pane_g1

0xa4b6,	// (0x00066a69) wml_button_pane_t1

0xa4ae,	// (0x00066a61) wml_button_bg_pane_g1

0xa4c6,	// (0x00066a79) wml_button_bg_pane_g2

0xa4ce,	// (0x00066a81) wml_button_bg_pane_g3

0xa4d6,	// (0x00066a89) wml_button_bg_pane_g4

0xa4de,	// (0x00066a91) wml_button_bg_pane_g5

0xa4e6,	// (0x00066a99) wml_button_bg_pane_g6

0xa4ee,	// (0x00066aa1) wml_button_bg_pane_g7

0xa4f6,	// (0x00066aa9) wml_button_bg_pane_g8

0xa4fe,	// (0x00066ab1) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0006b84a) wml_button_bg_pane_g

0x1f8f,	// (0x0005e542) bg_list_pane_cp02

0xa506,	// (0x00066ab9) mce_header_pane_ParamLimits

0xa506,	// (0x00066ab9) mce_header_pane

0xa51c,	// (0x00066acf) mce_icon_pane

0xa51c,	// (0x00066acf) mce_image_pane

0xa525,	// (0x00066ad8) mce_text_pane_ParamLimits

0xa525,	// (0x00066ad8) mce_text_pane

0x1f99,	// (0x0005e54c) scroll_pane_cp03

0xa41e,	// (0x000669d1) scroll_pane_cp04

0xa538,	// (0x00066aeb) scroll_pane_cp05_ParamLimits

0xa538,	// (0x00066aeb) scroll_pane_cp05

0x1fa3,	// (0x0005e556) mce_header_field_pane_ParamLimits

0x1fa3,	// (0x0005e556) mce_header_field_pane

0x1fbc,	// (0x0005e56f) mce_header_field_pane_2_ParamLimits

0x1fbc,	// (0x0005e56f) mce_header_field_pane_2

0x1fd2,	// (0x0005e585) mce_header_field_pane_3

0x1fda,	// (0x0005e58d) list_single_mce_message_pane_ParamLimits

0x1fda,	// (0x0005e58d) list_single_mce_message_pane

0x1ff6,	// (0x0005e5a9) list_single_mce_smart_pane_ParamLimits

0x1ff6,	// (0x0005e5a9) list_single_mce_smart_pane

0xa544,	// (0x00066af7) input_focus_pane_cp03

0xa54d,	// (0x00066b00) list_header_data_pane

0x201d,	// (0x0005e5d0) mce_header_field_pane_t1

0x202d,	// (0x0005e5e0) list_single_mce_header_pane_ParamLimits

0x202d,	// (0x0005e5e0) list_single_mce_header_pane

0xa555,	// (0x00066b08) list_single_mce_header_pane_t1

0xa564,	// (0x00066b17) list_single_mce_message_pane_g1

0xa56c,	// (0x00066b1f) list_single_mce_message_pane_t1

0x205f,	// (0x0005e612) bg_cale_heading_pane_cp01_ParamLimits

0x205f,	// (0x0005e612) bg_cale_heading_pane_cp01

0xa57a,	// (0x00066b2d) bg_cale_pane_cp02_ParamLimits

0xa57a,	// (0x00066b2d) bg_cale_pane_cp02

0x2092,	// (0x0005e645) cale_month_corner_pane

0x20a8,	// (0x0005e65b) cale_month_day_heading_pane_ParamLimits

0x20a8,	// (0x0005e65b) cale_month_day_heading_pane

0x20db,	// (0x0005e68e) cale_month_pane_g1_ParamLimits

0x20db,	// (0x0005e68e) cale_month_pane_g1

0x2107,	// (0x0005e6ba) cale_month_pane_g2_ParamLimits

0x2107,	// (0x0005e6ba) cale_month_pane_g2

0x2128,	// (0x0005e6db) cale_month_pane_g3_ParamLimits

0x2128,	// (0x0005e6db) cale_month_pane_g3

0x2164,	// (0x0005e717) cale_month_pane_g4_ParamLimits

0x2164,	// (0x0005e717) cale_month_pane_g4

0x21a0,	// (0x0005e753) cale_month_pane_g5_ParamLimits

0x21a0,	// (0x0005e753) cale_month_pane_g5

0x21dc,	// (0x0005e78f) cale_month_pane_g6_ParamLimits

0x21dc,	// (0x0005e78f) cale_month_pane_g6

0x2218,	// (0x0005e7cb) cale_month_pane_g7_ParamLimits

0x2218,	// (0x0005e7cb) cale_month_pane_g7

0x2254,	// (0x0005e807) cale_month_pane_g8_ParamLimits

0x2254,	// (0x0005e807) cale_month_pane_g8

0x2290,	// (0x0005e843) cale_month_pane_g9_ParamLimits

0x2290,	// (0x0005e843) cale_month_pane_g9

0x22c6,	// (0x0005e879) cale_month_pane_g10_ParamLimits

0x22c6,	// (0x0005e879) cale_month_pane_g10

0x22f0,	// (0x0005e8a3) cale_month_pane_g11_ParamLimits

0x22f0,	// (0x0005e8a3) cale_month_pane_g11

0x231a,	// (0x0005e8cd) cale_month_pane_g12_ParamLimits

0x231a,	// (0x0005e8cd) cale_month_pane_g12

0x2348,	// (0x0005e8fb) cale_month_pane_g13_ParamLimits

0x2348,	// (0x0005e8fb) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0006b85d) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0006b85d) cale_month_pane_g

0x2376,	// (0x0005e929) cale_month_week_pane

0x2387,	// (0x0005e93a) grid_cale_month_pane_ParamLimits

0x2387,	// (0x0005e93a) grid_cale_month_pane

0x23b5,	// (0x0005e968) cale_month_day_heading_pane_t1

0x2413,	// (0x0005e9c6) cale_month_day_heading_pane_t2

0x2478,	// (0x0005ea2b) cale_month_day_heading_pane_t3

0x24dd,	// (0x0005ea90) cale_month_day_heading_pane_t4

0x2542,	// (0x0005eaf5) cale_month_day_heading_pane_t5

0x25a7,	// (0x0005eb5a) cale_month_day_heading_pane_t6

0x260c,	// (0x0005ebbf) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0006b878) cale_month_day_heading_pane_t

0xa1aa,	// (0x0006675d) bg_cale_side_pane_cp01

0x2671,	// (0x0005ec24) cale_month_week_pane_t1

0x2688,	// (0x0005ec3b) cale_month_week_pane_t2

0x269f,	// (0x0005ec52) cale_month_week_pane_t3

0x26b6,	// (0x0005ec69) cale_month_week_pane_t4

0x26cd,	// (0x0005ec80) cale_month_week_pane_t5

0x26e4,	// (0x0005ec97) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0006b887) cale_month_week_pane_t

0x2703,	// (0x0005ecb6) cell_cale_month_pane_ParamLimits

0x2703,	// (0x0005ecb6) cell_cale_month_pane

0xa5af,	// (0x00066b62) cell_cale_month_pane_g1

0x27db,	// (0x0005ed8e) cell_cale_month_pane_t1_ParamLimits

0x27db,	// (0x0005ed8e) cell_cale_month_pane_t1

0xa1b8,	// (0x0006676b) grid_highlight_pane_cp08

0xa05b,	// (0x0006660e) main_smil_g1

0x27f7,	// (0x0005edaa) smil_status_pane

0xa5bb,	// (0x00066b6e) smil_text_pane

0xbe61,	// (0x00068414) bg_popup_call3_rect_pane_g8

0xbe69,	// (0x0006841c) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0006bb40) bg_popup_call3_rect_pane_g

0xc0fe,	// (0x000686b1) smil_status_volume_pane_g1

0xa5c5,	// (0x00066b78) smil_status_pane_t1

0xc131,	// (0x000686e4) volume_smil_pane

0xa5dc,	// (0x00066b8f) list_smil_text_pane

0x280c,	// (0x0005edbf) scroll_pane_cp011

0x2817,	// (0x0005edca) smil_text_list_pane_t1_ParamLimits

0x2817,	// (0x0005edca) smil_text_list_pane_t1

0xa5e6,	// (0x00066b99) aid_volume_smil_ParamLimits

0xa5e6,	// (0x00066b99) aid_volume_smil

0xa05b,	// (0x0006660e) smil_volume_pane_g1

0xa05b,	// (0x0006660e) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0006b8a7) smil_volume_pane_g

0x9fe2,	// (0x00066595) listscroll_cale_day_pane

0xa608,	// (0x00066bbb) bg_cale_pane

0xa620,	// (0x00066bd3) list_cale_pane

0xa631,	// (0x00066be4) scroll_pane_cp09

0xa642,	// (0x00066bf5) cale_bg_pane_g1

0xa64a,	// (0x00066bfd) cale_bg_pane_g2

0xa652,	// (0x00066c05) cale_bg_pane_g3

0xa65a,	// (0x00066c0d) cale_bg_pane_g4

0xa662,	// (0x00066c15) cale_bg_pane_g5

0xa66a,	// (0x00066c1d) cale_bg_pane_g6

0xa672,	// (0x00066c25) cale_bg_pane_g7

0xa67a,	// (0x00066c2d) cale_bg_pane_g8

0xa682,	// (0x00066c35) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0006b8ac) cale_bg_pane_g

0x286c,	// (0x0005ee1f) list_cale_time_pane_ParamLimits

0x286c,	// (0x0005ee1f) list_cale_time_pane

0x2881,	// (0x0005ee34) list_cale_time_pane_g1_ParamLimits

0x2881,	// (0x0005ee34) list_cale_time_pane_g1

0xa68a,	// (0x00066c3d) list_cale_time_pane_g2_ParamLimits

0xa68a,	// (0x00066c3d) list_cale_time_pane_g2

0x288d,	// (0x0005ee40) list_cale_time_pane_g3_ParamLimits

0x288d,	// (0x0005ee40) list_cale_time_pane_g3

0x289b,	// (0x0005ee4e) list_cale_time_pane_g4_ParamLimits

0x289b,	// (0x0005ee4e) list_cale_time_pane_g4

0x28a9,	// (0x0005ee5c) list_cale_time_pane_g5_ParamLimits

0x28a9,	// (0x0005ee5c) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0006b8bf) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0006b8bf) list_cale_time_pane_g

0x28b7,	// (0x0005ee6a) list_cale_time_pane_t1_ParamLimits

0x28b7,	// (0x0005ee6a) list_cale_time_pane_t1

0x28df,	// (0x0005ee92) list_cale_time_pane_t2_ParamLimits

0x28df,	// (0x0005ee92) list_cale_time_pane_t2

0x2ccc,	// (0x0005f27f) aid_blid_cardinal_pane

0x2d0e,	// (0x0005f2c1) compass_pane_t4

0x2907,	// (0x0005eeba) list_cale_time_pane_t4_ParamLimits

0x2907,	// (0x0005eeba) list_cale_time_pane_t4

0x2d1c,	// (0x0005f2cf) compass_pane_t5

0x2d2c,	// (0x0005f2df) compass_pane_t6

0x2d3a,	// (0x0005f2ed) compass_pane_t7

0xab05,	// (0x000670b8) navi_pane_cc_t1

0xac6c,	// (0x0006721f) aid_phob_thumbnail_center_pane

0x34ff,	// (0x0005fab2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0006b8cc) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0006b8cc) list_cale_time_pane_t

0x0d1c,	// (0x0005d2cf) bg_popup_window_pane_cp02_ParamLimits

0x0d1c,	// (0x0005d2cf) bg_popup_window_pane_cp02

0xa6a4,	// (0x00066c57) heading_pane_cp01_ParamLimits

0xa6a4,	// (0x00066c57) heading_pane_cp01

0xa6b0,	// (0x00066c63) loc_req_pane_ParamLimits

0xa6b0,	// (0x00066c63) loc_req_pane

0xa6c0,	// (0x00066c73) loc_type_pane_ParamLimits

0xa6c0,	// (0x00066c73) loc_type_pane

0xa6d2,	// (0x00066c85) loc_type_pane_t1_ParamLimits

0xa6d2,	// (0x00066c85) loc_type_pane_t1

0xa6e4,	// (0x00066c97) loc_type_pane_t2_ParamLimits

0xa6e4,	// (0x00066c97) loc_type_pane_t2

0xa6f6,	// (0x00066ca9) loc_type_pane_t3_ParamLimits

0xa6f6,	// (0x00066ca9) loc_type_pane_t3

0x0002,

0xf320,	// (0x0006b8d3) loc_type_pane_t_ParamLimits

0xf320,	// (0x0006b8d3) loc_type_pane_t

0xa708,	// (0x00066cbb) list_loc_req_pane

0xa712,	// (0x00066cc5) scroll_pane_cp012

0x292f,	// (0x0005eee2) list_single_loc_request_popup_menu_pane_ParamLimits

0x292f,	// (0x0005eee2) list_single_loc_request_popup_menu_pane

0xa71d,	// (0x00066cd0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa71d,	// (0x00066cd0) list_single_loc_request_popup_menu_pane_g1

0xa729,	// (0x00066cdc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa729,	// (0x00066cdc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0006b8da) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0006b8da) list_single_loc_request_popup_menu_pane_g

0xa735,	// (0x00066ce8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa735,	// (0x00066ce8) list_single_loc_request_popup_menu_pane_t1

0x9ee3,	// (0x00066496) bg_popup_window_pane_cp03_ParamLimits

0x9ee3,	// (0x00066496) bg_popup_window_pane_cp03

0xa74b,	// (0x00066cfe) heading_loc_req_pane_ParamLimits

0xa74b,	// (0x00066cfe) heading_loc_req_pane

0x293c,	// (0x0005eeef) popup_dyc_status_message_window_g1_ParamLimits

0x293c,	// (0x0005eeef) popup_dyc_status_message_window_g1

0x2950,	// (0x0005ef03) popup_dyc_status_message_window_t1_ParamLimits

0x2950,	// (0x0005ef03) popup_dyc_status_message_window_t1

0x2965,	// (0x0005ef18) popup_dyc_status_message_window_t2_ParamLimits

0x2965,	// (0x0005ef18) popup_dyc_status_message_window_t2

0x297a,	// (0x0005ef2d) popup_dyc_status_message_window_t3_ParamLimits

0x297a,	// (0x0005ef2d) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0006b8df) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0006b8df) popup_dyc_status_message_window_t

0x9c88,	// (0x0006623b) bg_heading_pane_cp01

0xa757,	// (0x00066d0a) heading_loc_req_pane_g1

0xa75f,	// (0x00066d12) heading_loc_req_pane_g2

0xa767,	// (0x00066d1a) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0006b8e6) heading_loc_req_pane_g

0xa76f,	// (0x00066d22) heading_loc_req_pane_t1

0xa77f,	// (0x00066d32) bg_popup_sub_pane_cp01_ParamLimits

0xa77f,	// (0x00066d32) bg_popup_sub_pane_cp01

0xa78d,	// (0x00066d40) popup_cale_events_window_g1_ParamLimits

0xa78d,	// (0x00066d40) popup_cale_events_window_g1

0xa7ad,	// (0x00066d60) popup_cale_events_window_g2_ParamLimits

0xa7ad,	// (0x00066d60) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0006b91a) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0006b91a) popup_cale_events_window_g

0xa7cd,	// (0x00066d80) popup_cale_events_window_t1_ParamLimits

0xa7cd,	// (0x00066d80) popup_cale_events_window_t1

0xa7df,	// (0x00066d92) popup_cale_events_window_t2_ParamLimits

0xa7df,	// (0x00066d92) popup_cale_events_window_t2

0xa81d,	// (0x00066dd0) popup_cale_events_window_t3_ParamLimits

0xa81d,	// (0x00066dd0) popup_cale_events_window_t3

0xa857,	// (0x00066e0a) popup_cale_events_window_t4_ParamLimits

0xa857,	// (0x00066e0a) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0006b91f) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0006b91f) popup_cale_events_window_t

0x2a7f,	// (0x0005f032) call_type_pane

0x2a8f,	// (0x0005f042) popup_call_status_window_g1

0x2aa3,	// (0x0005f056) popup_call_status_window_g2

0x2ab7,	// (0x0005f06a) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0006b928) popup_call_status_window_g

0xa88d,	// (0x00066e40) call_type_pane_g1

0xa896,	// (0x00066e49) call_type_pane_g2

0x0001,

0xf37c,	// (0x0006b92f) call_type_pane_g

0x9c88,	// (0x0006623b) bg_popup_sub_pane_cp02

0xa89f,	// (0x00066e52) listscroll_popup_wml_pane

0xa8a7,	// (0x00066e5a) list_wml_pane

0xa8b1,	// (0x00066e64) scroll_pane_cp013

0xa8bc,	// (0x00066e6f) list_single_graphic_popup_wml_pane_ParamLimits

0xa8bc,	// (0x00066e6f) list_single_graphic_popup_wml_pane

0xa05b,	// (0x0006660e) list_single_graphic_popup_wml_pane_g1

0xa8d0,	// (0x00066e83) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0006b934) list_single_graphic_popup_wml_pane_g

0xa8d8,	// (0x00066e8b) list_single_graphic_popup_wml_pane_t1

0xa8ee,	// (0x00066ea1) aid_call_pane

0x9edb,	// (0x0006648e) popup_clock_analogue_window_g1

0x9edb,	// (0x0006648e) popup_clock_analogue_window_g2

0xa8f6,	// (0x00066ea9) popup_clock_analogue_window_g3

0xa8f6,	// (0x00066ea9) popup_clock_analogue_window_g4

0xa05b,	// (0x0006660e) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0006b939) popup_clock_analogue_window_g

0xa8fe,	// (0x00066eb1) popup_clock_analogue_window_t1

0xa90c,	// (0x00066ebf) clock_digital_number_pane_ParamLimits

0xa90c,	// (0x00066ebf) clock_digital_number_pane

0xa918,	// (0x00066ecb) clock_digital_number_pane_cp02_ParamLimits

0xa918,	// (0x00066ecb) clock_digital_number_pane_cp02

0xa924,	// (0x00066ed7) clock_digital_number_pane_cp03_ParamLimits

0xa924,	// (0x00066ed7) clock_digital_number_pane_cp03

0xa930,	// (0x00066ee3) clock_digital_number_pane_cp04_ParamLimits

0xa930,	// (0x00066ee3) clock_digital_number_pane_cp04

0xa93c,	// (0x00066eef) clock_digital_separator_pane_ParamLimits

0xa93c,	// (0x00066eef) clock_digital_separator_pane

0xa948,	// (0x00066efb) popup_clock_digital_window_t1

0xa05b,	// (0x0006660e) clock_digital_number_pane_g1

0xa05b,	// (0x0006660e) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0006b8a7) clock_digital_number_pane_g

0xa05b,	// (0x0006660e) clock_digital_separator_pane_g1

0xa05b,	// (0x0006660e) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0006b8a7) clock_digital_separator_pane_g

0x9c88,	// (0x0006623b) bg_popup_window_pane_cp04

0xa965,	// (0x00066f18) heading_pane_cp03

0xa96d,	// (0x00066f20) listscroll_popup_gms_pane

0xa975,	// (0x00066f28) grid_large_graphic_popup_pane

0xa97f,	// (0x00066f32) listscroll_popup_gms_pane_g1

0xa987,	// (0x00066f3a) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0006b944) listscroll_popup_gms_pane_g

0xa41e,	// (0x000669d1) scroll_pane_cp014

0x2ac7,	// (0x0005f07a) cell_large_graphic_popup_pane_ParamLimits

0x2ac7,	// (0x0005f07a) cell_large_graphic_popup_pane

0x2adf,	// (0x0005f092) cell_large_graphic_popup_pane_g1_ParamLimits

0x2adf,	// (0x0005f092) cell_large_graphic_popup_pane_g1

0xa98f,	// (0x00066f42) cell_large_graphic_popup_pane_g2_ParamLimits

0xa98f,	// (0x00066f42) cell_large_graphic_popup_pane_g2

0xa99b,	// (0x00066f4e) cell_large_graphic_popup_pane_g3_ParamLimits

0xa99b,	// (0x00066f4e) cell_large_graphic_popup_pane_g3

0xa9a8,	// (0x00066f5b) cell_large_graphic_popup_pane_g4_ParamLimits

0xa9a8,	// (0x00066f5b) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0006b949) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0006b949) cell_large_graphic_popup_pane_g

0xa9b8,	// (0x00066f6b) grid_highlight_pane_cp010

0xa05b,	// (0x0006660e) bg_popup_call_pane_g1

0xa9c2,	// (0x00066f75) list_single_graphic_popup_conf_pane_ParamLimits

0xa9c2,	// (0x00066f75) list_single_graphic_popup_conf_pane

0xa9d4,	// (0x00066f87) list_highlight_pane_cp01

0xa9dd,	// (0x00066f90) list_single_graphic_popup_conf_pane_g1

0xa9e5,	// (0x00066f98) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0006b952) list_single_graphic_popup_conf_pane_g

0xa9ed,	// (0x00066fa0) list_single_graphic_popup_conf_pane_t1

0xa9fb,	// (0x00066fae) linegrid_cams_pane_g1

0x2aeb,	// (0x0005f09e) linegrid_cams_pane_g2

0xa1eb,	// (0x0006679e) linegrid_cams_pane_g3

0xaa04,	// (0x00066fb7) linegrid_cams_pane_g4

0x2af4,	// (0x0005f0a7) linegrid_cams_pane_g5

0x2afd,	// (0x0005f0b0) linegrid_cams_pane_g6

0xa1f4,	// (0x000667a7) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0006b957) linegrid_cams_pane_g

0xaa0d,	// (0x00066fc0) popup_clock_analogue_window

0xaa0d,	// (0x00066fc0) popup_clock_digital_window

0x9c88,	// (0x0006623b) popup_phob_thumbnail_window

0xa05b,	// (0x0006660e) call_video_uplink_pane_g1

0xaa16,	// (0x00066fc9) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0006b966) call_video_uplink_pane_g

0xaa1e,	// (0x00066fd1) video_uplink_pane

0xaa26,	// (0x00066fd9) mce_image_pane_g1

0x2b08,	// (0x0005f0bb) mce_image_pane_g2

0x2b12,	// (0x0005f0c5) mce_image_pane_g3

0x2b1c,	// (0x0005f0cf) mce_image_pane_g4

0x2b24,	// (0x0005f0d7) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0006b96b) mce_image_pane_g

0xaa30,	// (0x00066fe3) control_top_pane_stacon_cp01_ParamLimits

0xaa30,	// (0x00066fe3) control_top_pane_stacon_cp01

0xaa44,	// (0x00066ff7) uni_indicator_pane_stacon_cp01_ParamLimits

0xaa44,	// (0x00066ff7) uni_indicator_pane_stacon_cp01

0xaa55,	// (0x00067008) bg_popup_sub_pane_cp03

0x2b2c,	// (0x0005f0df) chi_dic_find_pane

0x2b34,	// (0x0005f0e7) listscroll_chi_dic_pane

0x2b3d,	// (0x0005f0f0) main_pane_chidic_g1

0x2b50,	// (0x0005f103) chi_dic_find_pane_t1

0xaa5f,	// (0x00067012) find_chidic_pane

0xaa68,	// (0x0006701b) chi_dic_list_pane_ParamLimits

0xaa68,	// (0x0006701b) chi_dic_list_pane

0xaa79,	// (0x0006702c) scroll_pane_cp020

0x2b5e,	// (0x0005f111) find_chidic_pane_t1

0x9c88,	// (0x0006623b) input_focus_pane_cp06

0x2b6d,	// (0x0005f120) list_chi_dic_pane_ParamLimits

0x2b6d,	// (0x0005f120) list_chi_dic_pane

0x2b7f,	// (0x0005f132) list_chi_dic_pane_t1_ParamLimits

0x2b7f,	// (0x0005f132) list_chi_dic_pane_t1

0x9c88,	// (0x0006623b) list_highlight_pane_cp020

0xaa81,	// (0x00067034) bg_cale_heading_pane_g1

0x2b92,	// (0x0005f145) bg_cale_heading_pane_g2

0x2b9a,	// (0x0005f14d) bg_cale_heading_pane_g3

0x2ba2,	// (0x0005f155) bg_cale_heading_pane_g4

0x2baa,	// (0x0005f15d) bg_cale_heading_pane_g5

0x2bb2,	// (0x0005f165) bg_cale_heading_pane_g6

0x2bba,	// (0x0005f16d) bg_cale_heading_pane_g7

0x2bc2,	// (0x0005f175) bg_cale_heading_pane_g8

0x2bca,	// (0x0005f17d) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0006b976) bg_cale_heading_pane_g

0xaa81,	// (0x00067034) bg_cale_side_pane_g1

0x2bd2,	// (0x0005f185) bg_cale_side_pane_g2

0x2bdc,	// (0x0005f18f) bg_cale_side_pane_g3

0x2be6,	// (0x0005f199) bg_cale_side_pane_g4

0x2bf0,	// (0x0005f1a3) bg_cale_side_pane_g5

0x2bfa,	// (0x0005f1ad) bg_cale_side_pane_g6

0x2c04,	// (0x0005f1b7) bg_cale_side_pane_g7

0x2c0e,	// (0x0005f1c1) bg_cale_side_pane_g8

0x2c16,	// (0x0005f1c9) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0006b989) bg_cale_side_pane_g

0x2c1e,	// (0x0005f1d1) popup_call_status_window_ParamLimits

0x2c1e,	// (0x0005f1d1) popup_call_status_window

0xaa89,	// (0x0006703c) stacon_top_pane

0xaa91,	// (0x00067044) status_pane_ParamLimits

0xaa91,	// (0x00067044) status_pane

0xaaa6,	// (0x00067059) status_small_pane

0xaaae,	// (0x00067061) control_pane

0x9c88,	// (0x0006623b) stacon_bottom_pane

0xaab6,	// (0x00067069) list_single_mce_smart_pane_t1_ParamLimits

0xaab6,	// (0x00067069) list_single_mce_smart_pane_t1

0xaac9,	// (0x0006707c) list_single_mce_smart_pane_t2_ParamLimits

0xaac9,	// (0x0006707c) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0006b99c) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0006b99c) list_single_mce_smart_pane_t

0x2c6b,	// (0x0005f21e) compass_pane

0x2c76,	// (0x0005f229) main_location2_pane_t1

0x2c8c,	// (0x0005f23f) main_location2_pane_t2

0x2ca2,	// (0x0005f255) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0006b9a1) main_location2_pane_t

0xaae8,	// (0x0006709b) compass_pane_g1_ParamLimits

0xaae8,	// (0x0006709b) compass_pane_g1

0x2cf0,	// (0x0005f2a3) compass_pane_t1

0x2cff,	// (0x0005f2b2) compass_pane_t2

0x0005,

0xf3f7,	// (0x0006b9aa) compass_pane_t

0x2d4a,	// (0x0005f2fd) text_secondary_cp61

0xaafc,	// (0x000670af) navi_pane_cams_g5

0xab1f,	// (0x000670d2) navi_pane_im_t1

0xab2d,	// (0x000670e0) navi_pane_mp_g1_ParamLimits

0xab2d,	// (0x000670e0) navi_pane_mp_g1

0xab41,	// (0x000670f4) navi_pane_mp_g2_ParamLimits

0xab41,	// (0x000670f4) navi_pane_mp_g2

0xab4d,	// (0x00067100) navi_pane_mp_g3_ParamLimits

0xab4d,	// (0x00067100) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0006b9be) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0006b9be) navi_pane_mp_g

0xab59,	// (0x0006710c) navi_pane_mp_t1

0xab67,	// (0x0006711a) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0006b9c5) navi_pane_mp_t

0xaba3,	// (0x00067156) navi_pane_vt_g1

0xab59,	// (0x0006710c) navi_pane_vt_t1

0xabab,	// (0x0006715e) navi_slider_pane

0xabb3,	// (0x00067166) zooming_pane

0xabbb,	// (0x0006716e) navi_slider_pane_g1

0xabc4,	// (0x00067177) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0006b9cc) navi_slider_pane_g

0xabf1,	// (0x000671a4) aid_levels_zoom

0xabf9,	// (0x000671ac) zooming_pane_g1

0xac01,	// (0x000671b4) zooming_pane_g2

0xac01,	// (0x000671b4) zooming_pane_g3

0x0002,

0xf428,	// (0x0006b9db) zooming_pane_g

0xac09,	// (0x000671bc) level_10_zoom

0xac12,	// (0x000671c5) level_11_zoom

0xac1b,	// (0x000671ce) level_1_zoom

0xac24,	// (0x000671d7) level_2_zoom

0xac2d,	// (0x000671e0) level_3_zoom

0xac36,	// (0x000671e9) level_4_zoom

0xac3f,	// (0x000671f2) level_5_zoom

0xac48,	// (0x000671fb) level_6_zoom

0xac51,	// (0x00067204) level_7_zoom

0xac5a,	// (0x0006720d) level_8_zoom

0xac63,	// (0x00067216) level_9_zoom

0xac74,	// (0x00067227) popup_phob_thumbnail_window_g1

0xac7c,	// (0x0006722f) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0006b9e2) popup_phob_thumbnail_window_g

0xbfc7,	// (0x0006857a) level_1_location

0xbfcf,	// (0x00068582) level_2_location

0xbfd7,	// (0x0006858a) level_3_location

0xbfdf,	// (0x00068592) level_4_location

0xabb3,	// (0x00067166) level_5_location

0x2e8b,	// (0x0005f43e) mce_icon_pane_g1

0x2e93,	// (0x0005f446) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0006b9e7) mce_icon_pane_g

0x2e9b,	// (0x0005f44e) main_mup_pane_g1_ParamLimits

0x2e9b,	// (0x0005f44e) main_mup_pane_g1

0x2eb1,	// (0x0005f464) main_mup_pane_g2_ParamLimits

0x2eb1,	// (0x0005f464) main_mup_pane_g2

0x2ec9,	// (0x0005f47c) main_mup_pane_g3_ParamLimits

0x2ec9,	// (0x0005f47c) main_mup_pane_g3

0x2ee1,	// (0x0005f494) main_mup_pane_g4_ParamLimits

0x2ee1,	// (0x0005f494) main_mup_pane_g4

0x2ef3,	// (0x0005f4a6) main_mup_pane_g5_ParamLimits

0x2ef3,	// (0x0005f4a6) main_mup_pane_g5

0x2f0f,	// (0x0005f4c2) main_mup_pane_g6_ParamLimits

0x2f0f,	// (0x0005f4c2) main_mup_pane_g6

0x2f29,	// (0x0005f4dc) main_mup_pane_g7_ParamLimits

0x2f29,	// (0x0005f4dc) main_mup_pane_g7

0x2f47,	// (0x0005f4fa) main_mup_pane_g8_ParamLimits

0x2f47,	// (0x0005f4fa) main_mup_pane_g8

0x2f65,	// (0x0005f518) main_mup_pane_g9_ParamLimits

0x2f65,	// (0x0005f518) main_mup_pane_g9

0x2f81,	// (0x0005f534) main_mup_pane_g10_ParamLimits

0x2f81,	// (0x0005f534) main_mup_pane_g10

0x2f9f,	// (0x0005f552) main_mup_pane_g11_ParamLimits

0x2f9f,	// (0x0005f552) main_mup_pane_g11

0x2fb9,	// (0x0005f56c) main_mup_pane_g12_ParamLimits

0x2fb9,	// (0x0005f56c) main_mup_pane_g12

0x2fcf,	// (0x0005f582) main_mup_pane_g13_ParamLimits

0x2fcf,	// (0x0005f582) main_mup_pane_g13

0x000c,

0xf439,	// (0x0006b9ec) main_mup_pane_g_ParamLimits

0xf439,	// (0x0006b9ec) main_mup_pane_g

0x2fe3,	// (0x0005f596) main_mup_pane_t1_ParamLimits

0x2fe3,	// (0x0005f596) main_mup_pane_t1

0x2fff,	// (0x0005f5b2) main_mup_pane_t2_ParamLimits

0x2fff,	// (0x0005f5b2) main_mup_pane_t2

0x3017,	// (0x0005f5ca) main_mup_pane_t3_ParamLimits

0x3017,	// (0x0005f5ca) main_mup_pane_t3

0x302f,	// (0x0005f5e2) main_mup_pane_t4_ParamLimits

0x302f,	// (0x0005f5e2) main_mup_pane_t4

0x304d,	// (0x0005f600) main_mup_pane_t5_ParamLimits

0x304d,	// (0x0005f600) main_mup_pane_t5

0x3062,	// (0x0005f615) main_mup_pane_t6_ParamLimits

0x3062,	// (0x0005f615) main_mup_pane_t6

0x0005,

0xf454,	// (0x0006ba07) main_mup_pane_t_ParamLimits

0xf454,	// (0x0006ba07) main_mup_pane_t

0x3074,	// (0x0005f627) mup_progress_pane_ParamLimits

0x3074,	// (0x0005f627) mup_progress_pane

0x3080,	// (0x0005f633) mup_visualizer_pane_ParamLimits

0x3080,	// (0x0005f633) mup_visualizer_pane

0x30b2,	// (0x0005f665) mup_volume_pane_ParamLimits

0x30b2,	// (0x0005f665) mup_volume_pane

0xac84,	// (0x00067237) mup_visualizer_pane_g1_ParamLimits

0xac84,	// (0x00067237) mup_visualizer_pane_g1

0xac84,	// (0x00067237) mup_visualizer_pane_g2_ParamLimits

0xac84,	// (0x00067237) mup_visualizer_pane_g2

0xaae8,	// (0x0006709b) mup_visualizer_pane_g3_ParamLimits

0xaae8,	// (0x0006709b) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0006ba14) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0006ba14) mup_visualizer_pane_g

0xa05b,	// (0x0006660e) mup_volume_pane_g1

0xac9a,	// (0x0006724d) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0006ba1b) mup_volume_pane_g

0xa05b,	// (0x0006660e) mup_progress_pane_g1

0xaca3,	// (0x00067256) mup_progress_pane_g2

0xacac,	// (0x0006725f) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0006ba20) mup_progress_pane_g

0x9c88,	// (0x0006623b) bg_popup_window_pane_cp05

0xacb5,	// (0x00067268) heading_pane_cp02_ParamLimits

0xacb5,	// (0x00067268) heading_pane_cp02

0xacd1,	// (0x00067284) list_popup_blid_pane

0xacd9,	// (0x0006728c) list_blid_sat_info_pane_ParamLimits

0xacd9,	// (0x0006728c) list_blid_sat_info_pane

0xacec,	// (0x0006729f) list_blid_sat_info_pane_g1

0xacf4,	// (0x000672a7) list_blid_sat_info_pane_t1

0x31dc,	// (0x0005f78f) mup_equalizer_pane_ParamLimits

0x31dc,	// (0x0005f78f) mup_equalizer_pane

0x31fd,	// (0x0005f7b0) mup_equalizer_pane_cp1_ParamLimits

0x31fd,	// (0x0005f7b0) mup_equalizer_pane_cp1

0x321e,	// (0x0005f7d1) mup_equalizer_pane_cp2_ParamLimits

0x321e,	// (0x0005f7d1) mup_equalizer_pane_cp2

0x3243,	// (0x0005f7f6) mup_equalizer_pane_cp3_ParamLimits

0x3243,	// (0x0005f7f6) mup_equalizer_pane_cp3

0x326c,	// (0x0005f81f) mup_equalizer_pane_cp4_ParamLimits

0x326c,	// (0x0005f81f) mup_equalizer_pane_cp4

0x3295,	// (0x0005f848) mup_equalizer_pane_cp5

0x32ad,	// (0x0005f860) mup_equalizer_pane_cp6

0x32c5,	// (0x0005f878) mup_equalizer_pane_cp7

0xbee1,	// (0x00068494) bg_popup_call_poc_act_pane_g9

0xbee9,	// (0x0006849c) bg_popup_call_poc_act_pane_g10

0xbef1,	// (0x000684a4) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ee3,	// (0x00066496) mup_scale_pane

0xa05b,	// (0x0006660e) mup_scale_pane_g1

0xad02,	// (0x000672b5) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0006ba3c) mup_scale_pane_g

0xad26,	// (0x000672d9) msg_data_pane

0xad2e,	// (0x000672e1) scroll_pane_cp017

0x32ef,	// (0x0005f8a2) bg_list_pane_cp04_ParamLimits

0x32ef,	// (0x0005f8a2) bg_list_pane_cp04

0xad36,	// (0x000672e9) msg_data_pane_g1

0x3315,	// (0x0005f8c8) msg_data_pane_g2

0x331f,	// (0x0005f8d2) msg_data_pane_g3

0x3329,	// (0x0005f8dc) msg_data_pane_g4

0x3331,	// (0x0005f8e4) msg_data_pane_g5

0x3339,	// (0x0005f8ec) msg_data_pane_g6

0x3341,	// (0x0005f8f4) msg_data_pane_g7

0x0006,

0xf498,	// (0x0006ba4b) msg_data_pane_g

0x3349,	// (0x0005f8fc) msg_text_pane_ParamLimits

0x3349,	// (0x0005f8fc) msg_text_pane

0x337a,	// (0x0005f92d) qrid_highlight_pane_cp011_ParamLimits

0x337a,	// (0x0005f92d) qrid_highlight_pane_cp011

0x9c88,	// (0x0006623b) msg_body_pane

0x9c88,	// (0x0006623b) msg_header_pane

0xad47,	// (0x000672fa) input_focus_pane_cp07

0x339e,	// (0x0005f951) msg_header_pane_t1_ParamLimits

0x339e,	// (0x0005f951) msg_header_pane_t1

0x33b2,	// (0x0005f965) msg_header_pane_t2_ParamLimits

0x33b2,	// (0x0005f965) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0006ba5f) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0006ba5f) msg_header_pane_t

0xad5c,	// (0x0006730f) msg_body_pane_g1

0x33c4,	// (0x0005f977) msg_body_pane_t1_ParamLimits

0x33c4,	// (0x0005f977) msg_body_pane_t1

0x33f5,	// (0x0005f9a8) msg_body_pane_t2_ParamLimits

0x33f5,	// (0x0005f9a8) msg_body_pane_t2

0x3407,	// (0x0005f9ba) msg_body_pane_t3_ParamLimits

0x3407,	// (0x0005f9ba) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0006ba64) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0006ba64) msg_body_pane_t

0x3453,	// (0x0005fa06) main_viewer_pane_g1_ParamLimits

0x3453,	// (0x0005fa06) main_viewer_pane_g1

0x3461,	// (0x0005fa14) main_viewer_pane_g2_ParamLimits

0x3461,	// (0x0005fa14) main_viewer_pane_g2

0x346f,	// (0x0005fa22) main_viewer_pane_g3_ParamLimits

0x346f,	// (0x0005fa22) main_viewer_pane_g3

0x347e,	// (0x0005fa31) main_viewer_pane_g4_ParamLimits

0x347e,	// (0x0005fa31) main_viewer_pane_g4

0xad7c,	// (0x0006732f) main_viewer_pane_g5_ParamLimits

0xad7c,	// (0x0006732f) main_viewer_pane_g5

0xad7c,	// (0x0006732f) main_viewer_pane_g7_ParamLimits

0xad7c,	// (0x0006732f) main_viewer_pane_g7

0xad8e,	// (0x00067341) main_viewer_pane_g8_ParamLimits

0xad8e,	// (0x00067341) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0006ba74) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0006ba74) main_viewer_pane_g

0xada6,	// (0x00067359) viewer_content_pane_ParamLimits

0xada6,	// (0x00067359) viewer_content_pane

0x34bc,	// (0x0005fa6f) main_postcard_pane_g1_ParamLimits

0x34bc,	// (0x0005fa6f) main_postcard_pane_g1

0x34d2,	// (0x0005fa85) main_postcard_pane_g2_ParamLimits

0x34d2,	// (0x0005fa85) main_postcard_pane_g2

0x34e8,	// (0x0005fa9b) main_postcard_pane_g3_ParamLimits

0x34e8,	// (0x0005fa9b) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0006ba85) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0006ba85) main_postcard_pane_g

0x34ff,	// (0x0005fab2) main_postcard_pane_g4

0xc111,	// (0x000686c4) smil_status_volume_pane_g2

0x3542,	// (0x0005faf5) postcard_pane_ParamLimits

0x3542,	// (0x0005faf5) postcard_pane

0xadb4,	// (0x00067367) postcard_pane_g1_ParamLimits

0xadb4,	// (0x00067367) postcard_pane_g1

0x3592,	// (0x0005fb45) postcard_pane_g2_ParamLimits

0x3592,	// (0x0005fb45) postcard_pane_g2

0x359e,	// (0x0005fb51) postcard_pane_g3_ParamLimits

0x359e,	// (0x0005fb51) postcard_pane_g3

0xadc2,	// (0x00067375) postcard_pane_g4_ParamLimits

0xadc2,	// (0x00067375) postcard_pane_g4

0x35aa,	// (0x0005fb5d) postcard_pane_g5_ParamLimits

0x35aa,	// (0x0005fb5d) postcard_pane_g5

0x35bc,	// (0x0005fb6f) postcard_pane_g6_ParamLimits

0x35bc,	// (0x0005fb6f) postcard_pane_g6

0xadb4,	// (0x00067367) postcard_pane_g7_ParamLimits

0xadb4,	// (0x00067367) postcard_pane_g7

0x0006,

0xf4df,	// (0x0006ba92) postcard_pane_g_ParamLimits

0xf4df,	// (0x0006ba92) postcard_pane_g

0x35d4,	// (0x0005fb87) main_mp2_pane_g1_ParamLimits

0x35d4,	// (0x0005fb87) main_mp2_pane_g1

0x35e2,	// (0x0005fb95) main_mp2_pane_g2_ParamLimits

0x35e2,	// (0x0005fb95) main_mp2_pane_g2

0x35ee,	// (0x0005fba1) main_mp2_pane_g3_ParamLimits

0x35ee,	// (0x0005fba1) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0006baa1) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0006baa1) main_mp2_pane_g

0x35fa,	// (0x0005fbad) main_mp2_pane_t1_ParamLimits

0x35fa,	// (0x0005fbad) main_mp2_pane_t1

0x3611,	// (0x0005fbc4) main_mp2_pane_t2_ParamLimits

0x3611,	// (0x0005fbc4) main_mp2_pane_t2

0x3625,	// (0x0005fbd8) main_mp2_pane_t3_ParamLimits

0x3625,	// (0x0005fbd8) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0006baa8) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0006baa8) main_mp2_pane_t

0xadd0,	// (0x00067383) pec_content_pane_ParamLimits

0xadd0,	// (0x00067383) pec_content_pane

0xa41e,	// (0x000669d1) scroll_pane_cp015

0xade2,	// (0x00067395) pec_attribute_pane_ParamLimits

0xade2,	// (0x00067395) pec_attribute_pane

0x3637,	// (0x0005fbea) pec_content_pane_g1_ParamLimits

0x3637,	// (0x0005fbea) pec_content_pane_g1

0xadf2,	// (0x000673a5) pec_content_pane_t1_ParamLimits

0xadf2,	// (0x000673a5) pec_content_pane_t1

0xae04,	// (0x000673b7) pec_content_pane_t2_ParamLimits

0xae04,	// (0x000673b7) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0006baaf) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0006baaf) pec_content_pane_t

0x3643,	// (0x0005fbf6) list_single_graphic_pane_cp01_ParamLimits

0x3643,	// (0x0005fbf6) list_single_graphic_pane_cp01

0x9ee3,	// (0x00066496) bg_popup_sub_pane_cp04

0xae16,	// (0x000673c9) popup_mup_playback_window_g1

0xae22,	// (0x000673d5) popup_mup_playback_window_t1

0xae37,	// (0x000673ea) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0006bab4) popup_mup_playback_window_t

0xae6e,	// (0x00067421) main_image_pane_g1_ParamLimits

0xae6e,	// (0x00067421) main_image_pane_g1

0xaeb1,	// (0x00067464) scroll_pane_cp018_ParamLimits

0xaeb1,	// (0x00067464) scroll_pane_cp018

0xaec9,	// (0x0006747c) scroll_pane_cp016_ParamLimits

0xaec9,	// (0x0006747c) scroll_pane_cp016

0x3715,	// (0x0005fcc8) smil2_image_pane_ParamLimits

0x3715,	// (0x0005fcc8) smil2_image_pane

0x374b,	// (0x0005fcfe) smil2_root_pane_ParamLimits

0x374b,	// (0x0005fcfe) smil2_root_pane

0x3783,	// (0x0005fd36) smil2_text_pane_ParamLimits

0x3783,	// (0x0005fd36) smil2_text_pane

0x9c88,	// (0x0006623b) bg_list_pane_cp06

0xaf05,	// (0x000674b8) grid_radio_pane

0x9c88,	// (0x0006623b) bg_popup_window_pane_cp06

0xaf0f,	// (0x000674c2) main_fmradio_pane_t1

0xa965,	// (0x00066f18) heading_pane_cp04

0xaf1d,	// (0x000674d0) main_fmradio_pane_t2

0xbef9,	// (0x000684ac) popup_cale_lunar_info_window_g1

0xaf2b,	// (0x000674de) main_fmradio_pane_t3

0xbf01,	// (0x000684b4) popup_cale_lunar_info_window_g2

0xaf3b,	// (0x000674ee) main_fmradio_pane_t4

0x0001,

0xaf49,	// (0x000674fc) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0006bb8f) popup_cale_lunar_info_window_g

0xf516,	// (0x0006bac9) main_fmradio_pane_t

0xaf57,	// (0x0006750a) wait_bar_pane_cp03

0xaf5f,	// (0x00067512) cell_fmradio_pane_ParamLimits

0xaf5f,	// (0x00067512) cell_fmradio_pane

0xadb4,	// (0x00067367) cell_fmradio_pane_g1_ParamLimits

0xadb4,	// (0x00067367) cell_fmradio_pane_g1

0x9c88,	// (0x0006623b) grid_highlight_pane_cp011

0xaf74,	// (0x00067527) poc_content_pane_ParamLimits

0xaf74,	// (0x00067527) poc_content_pane

0xaf86,	// (0x00067539) scroll_pane_cp019

0x3813,	// (0x0005fdc6) popup_call_poc_act_window_ParamLimits

0x3813,	// (0x0005fdc6) popup_call_poc_act_window

0x3837,	// (0x0005fdea) popup_call_poc_inact_window_ParamLimits

0x3837,	// (0x0005fdea) popup_call_poc_inact_window

0xf5b3,	// (0x0006bb66) bg_popup_call_poc_act_pane_g

0xbe71,	// (0x00068424) bg_popup_call_poc_inact_pane_g1

0xbe79,	// (0x0006842c) bg_popup_call_poc_inact_pane_g2

0xaf8e,	// (0x00067541) popup_call_poc_act_window_g2

0xbe81,	// (0x00068434) bg_popup_call_poc_inact_pane_g3

0xbe89,	// (0x0006843c) bg_popup_call_poc_inact_pane_g4

0xbe91,	// (0x00068444) bg_popup_call_poc_inact_pane_g5

0xaf96,	// (0x00067549) popup_call_poc_act_window_t1_ParamLimits

0xaf96,	// (0x00067549) popup_call_poc_act_window_t1

0xafbe,	// (0x00067571) popup_call_poc_act_window_t2_ParamLimits

0xafbe,	// (0x00067571) popup_call_poc_act_window_t2

0xafe6,	// (0x00067599) popup_call_poc_act_window_t3_ParamLimits

0xafe6,	// (0x00067599) popup_call_poc_act_window_t3

0xb00e,	// (0x000675c1) popup_call_poc_act_window_t4_ParamLimits

0xb00e,	// (0x000675c1) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0006bad4) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0006bad4) popup_call_poc_act_window_t

0xbe99,	// (0x0006844c) bg_popup_call_poc_inact_pane_g6

0xbea1,	// (0x00068454) bg_popup_call_poc_inact_pane_g7

0xbea9,	// (0x0006845c) bg_popup_call_poc_inact_pane_g8

0xb020,	// (0x000675d3) popup_call_poc_inact_window_g2

0xbeb1,	// (0x00068464) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0006bb53) bg_popup_call_poc_inact_pane_g

0xb028,	// (0x000675db) popup_call_poc_inact_window_t1_ParamLimits

0xb028,	// (0x000675db) popup_call_poc_inact_window_t1

0xb03d,	// (0x000675f0) popup_call_poc_inact_window_t2_ParamLimits

0xb03d,	// (0x000675f0) popup_call_poc_inact_window_t2

0xb052,	// (0x00067605) popup_call_poc_inact_window_t3_ParamLimits

0xb052,	// (0x00067605) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0006badd) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0006badd) popup_call_poc_inact_window_t

0xc071,	// (0x00068624) context_pane_ParamLimits

0x40e2,	// (0x00060695) signal_pane_ParamLimits

0xabb3,	// (0x00067166) main_call2_pane

0xc05f,	// (0x00068612) popup_phob_thumbnail2_window_ParamLimits

0xc05f,	// (0x00068612) popup_phob_thumbnail2_window

0xad64,	// (0x00067317) aid_hotspot_pointer_arrow_pane

0xad6c,	// (0x0006731f) aid_hotspot_pointer_hand_pane

0x3ba2,	// (0x00060155) phob_pre_status_pane_g5

0x1721,	// (0x0005dcd4) cams_zoom_pane_ParamLimits

0x1730,	// (0x0005dce3) image_vga_pane_ParamLimits

0x174a,	// (0x0005dcfd) main_camera_pane_g1_ParamLimits

0x175c,	// (0x0005dd0f) main_camera_pane_g2_ParamLimits

0x176c,	// (0x0005dd1f) main_camera_pane_g3_ParamLimits

0x1780,	// (0x0005dd33) main_camera_pane_g4_ParamLimits

0x1794,	// (0x0005dd47) main_camera_pane_g5_ParamLimits

0x17a8,	// (0x0005dd5b) main_camera_pane_g6_ParamLimits

0x17bc,	// (0x0005dd6f) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0006b7dc) main_camera_pane_g_ParamLimits

0x17d0,	// (0x0005dd83) main_camera_pane_t1_ParamLimits

0x17e6,	// (0x0005dd99) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0006b7ed) main_camera_pane_t_ParamLimits

0x9ee3,	// (0x00066496) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ee3,	// (0x00066496) bg_popup_preview_window_pane_cp01

0xb067,	// (0x0006761a) popup_phob_thumbnail2_window_g1_ParamLimits

0xb067,	// (0x0006761a) popup_phob_thumbnail2_window_g1

0x9c88,	// (0x0006623b) call2_cli_visual_pane

0x386b,	// (0x0005fe1e) popup_call2_audio_conf_window_ParamLimits

0x386b,	// (0x0005fe1e) popup_call2_audio_conf_window

0x3893,	// (0x0005fe46) popup_call2_audio_first_window_ParamLimits

0x3893,	// (0x0005fe46) popup_call2_audio_first_window

0x3929,	// (0x0005fedc) popup_call2_audio_in_window_ParamLimits

0x3929,	// (0x0005fedc) popup_call2_audio_in_window

0x3975,	// (0x0005ff28) popup_call2_audio_out_window_ParamLimits

0x3975,	// (0x0005ff28) popup_call2_audio_out_window

0x39e7,	// (0x0005ff9a) popup_call2_audio_second_window_ParamLimits

0x39e7,	// (0x0005ff9a) popup_call2_audio_second_window

0x3a4d,	// (0x00060000) popup_call2_audio_wait_window_ParamLimits

0x3a4d,	// (0x00060000) popup_call2_audio_wait_window

0x9c88,	// (0x0006623b) bg_popup_call2_act_pane_cp03

0x9ec5,	// (0x00066478) list_conf_pane_cp

0xb073,	// (0x00067626) popup_call2_audio_conf_window_t1

0xb081,	// (0x00067634) list_single_graphic_popup_conf2_pane_ParamLimits

0xb081,	// (0x00067634) list_single_graphic_popup_conf2_pane

0xa9d4,	// (0x00066f87) list_highlight_pane_cp04

0xb094,	// (0x00067647) list_single_graphic_popup_conf2_pane_g1

0xa9e5,	// (0x00066f98) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0006bae4) list_single_graphic_popup_conf2_pane_g

0xb09e,	// (0x00067651) list_single_graphic_popup_conf2_pane_t1

0xb0ac,	// (0x0006765f) bg_popup_call2_act_pane_cp01_ParamLimits

0xb0ac,	// (0x0006765f) bg_popup_call2_act_pane_cp01

0xb136,	// (0x000676e9) call_type_pane_cp05_ParamLimits

0xb136,	// (0x000676e9) call_type_pane_cp05

0xb18a,	// (0x0006773d) popup_call2_audio_second_window_g1_ParamLimits

0xb18a,	// (0x0006773d) popup_call2_audio_second_window_g1

0xb1de,	// (0x00067791) popup_call2_audio_second_window_g2_ParamLimits

0xb1de,	// (0x00067791) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0006bae9) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0006bae9) popup_call2_audio_second_window_g

0xb243,	// (0x000677f6) popup_call2_audio_second_window_t1_ParamLimits

0xb243,	// (0x000677f6) popup_call2_audio_second_window_t1

0xb2fe,	// (0x000678b1) popup_call2_audio_second_window_t2_ParamLimits

0xb2fe,	// (0x000678b1) popup_call2_audio_second_window_t2

0xb351,	// (0x00067904) popup_call2_audio_second_window_t3_ParamLimits

0xb351,	// (0x00067904) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0006baf0) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0006baf0) popup_call2_audio_second_window_t

0x9c88,	// (0x0006623b) bg_popup_call2_in_pane_cp02

0x9c92,	// (0x00066245) call_type_pane_cp04

0x9c9a,	// (0x0006624d) popup_call2_audio_wait_window_g1

0x9ca2,	// (0x00066255) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0006b6c9) popup_call2_audio_wait_window_g

0x9caa,	// (0x0006625d) popup_call2_audio_wait_window_t3

0xb444,	// (0x000679f7) bg_popup_call2_act_pane_ParamLimits

0xb444,	// (0x000679f7) bg_popup_call2_act_pane

0xb504,	// (0x00067ab7) call_type_pane_cp03_ParamLimits

0xb504,	// (0x00067ab7) call_type_pane_cp03

0xb568,	// (0x00067b1b) popup_call2_audio_first_window_g1_ParamLimits

0xb568,	// (0x00067b1b) popup_call2_audio_first_window_g1

0xb5d8,	// (0x00067b8b) popup_call2_audio_first_window_g2_ParamLimits

0xb5d8,	// (0x00067b8b) popup_call2_audio_first_window_g2

0xac84,	// (0x00067237) popup_call2_audio_first_window_g3_ParamLimits

0xac84,	// (0x00067237) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0006baf9) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0006baf9) popup_call2_audio_first_window_g

0xb6b6,	// (0x00067c69) popup_call2_audio_first_window_t1_ParamLimits

0xb6b6,	// (0x00067c69) popup_call2_audio_first_window_t1

0xb7b9,	// (0x00067d6c) popup_call2_audio_first_window_t4_ParamLimits

0xb7b9,	// (0x00067d6c) popup_call2_audio_first_window_t4

0xb89c,	// (0x00067e4f) popup_call2_audio_first_window_t5_ParamLimits

0xb89c,	// (0x00067e4f) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0006bb04) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0006bb04) popup_call2_audio_first_window_t

0x9edb,	// (0x0006648e) bg_popup_call2_act_pane_g1

0xbf0b,	// (0x000684be) popup_cale_lunar_info_window_t1

0xbf19,	// (0x000684cc) popup_cale_lunar_info_window_t2

0xbf27,	// (0x000684da) popup_cale_lunar_info_window_t3

0x9c88,	// (0x0006623b) bg_popup_call2_bubble_pane

0xb99d,	// (0x00067f50) bg_popup_call2_in_pane_cp01_ParamLimits

0xb99d,	// (0x00067f50) bg_popup_call2_in_pane_cp01

0x0da1,	// (0x0005d354) call_type_pane_cp02

0xb9e5,	// (0x00067f98) popup_call2_audio_out_window_g1_ParamLimits

0xb9e5,	// (0x00067f98) popup_call2_audio_out_window_g1

0xba11,	// (0x00067fc4) popup_call2_audio_out_window_g2_ParamLimits

0xba11,	// (0x00067fc4) popup_call2_audio_out_window_g2

0xba39,	// (0x00067fec) popup_call2_audio_out_window_g3_ParamLimits

0xba39,	// (0x00067fec) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0006bb0d) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0006bb0d) popup_call2_audio_out_window_g

0xba74,	// (0x00068027) popup_call2_audio_out_window_t1_ParamLimits

0xba74,	// (0x00068027) popup_call2_audio_out_window_t1

0xbad3,	// (0x00068086) popup_call2_audio_out_window_t2_ParamLimits

0xbad3,	// (0x00068086) popup_call2_audio_out_window_t2

0xbb27,	// (0x000680da) popup_call2_audio_out_window_t3_ParamLimits

0xbb27,	// (0x000680da) popup_call2_audio_out_window_t3

0xbb3d,	// (0x000680f0) popup_call2_audio_out_window_t4_ParamLimits

0xbb3d,	// (0x000680f0) popup_call2_audio_out_window_t4

0xbb53,	// (0x00068106) popup_call2_audio_out_window_t5_ParamLimits

0xbb53,	// (0x00068106) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0006bb16) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0006bb16) popup_call2_audio_out_window_t

0xbbb7,	// (0x0006816a) bg_popup_call2_in_pane_ParamLimits

0xbbb7,	// (0x0006816a) bg_popup_call2_in_pane

0xbc13,	// (0x000681c6) popup_call2_audio_in_window_g1_ParamLimits

0xbc13,	// (0x000681c6) popup_call2_audio_in_window_g1

0xbc4b,	// (0x000681fe) popup_call2_audio_in_window_g2_ParamLimits

0xbc4b,	// (0x000681fe) popup_call2_audio_in_window_g2

0xbc83,	// (0x00068236) popup_call2_audio_in_window_g3_ParamLimits

0xbc83,	// (0x00068236) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0006bb23) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0006bb23) popup_call2_audio_in_window_g

0xbcdb,	// (0x0006828e) popup_call2_audio_in_window_t1_ParamLimits

0xbcdb,	// (0x0006828e) popup_call2_audio_in_window_t1

0xbd5b,	// (0x0006830e) popup_call2_audio_in_window_t2_ParamLimits

0xbd5b,	// (0x0006830e) popup_call2_audio_in_window_t2

0xbddb,	// (0x0006838e) popup_call2_audio_in_window_t3_ParamLimits

0xbddb,	// (0x0006838e) popup_call2_audio_in_window_t3

0xbdf5,	// (0x000683a8) popup_call2_audio_in_window_t4_ParamLimits

0xbdf5,	// (0x000683a8) popup_call2_audio_in_window_t4

0xbe07,	// (0x000683ba) popup_call2_audio_in_window_t5_ParamLimits

0xbe07,	// (0x000683ba) popup_call2_audio_in_window_t5

0xbe1c,	// (0x000683cf) popup_call2_audio_in_window_t6_ParamLimits

0xbe1c,	// (0x000683cf) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0006bb2c) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0006bb2c) popup_call2_audio_in_window_t

0x9edb,	// (0x0006648e) bg_popup_call2_in_pane_g1

0xbf35,	// (0x000684e8) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0006bb94) popup_cale_lunar_info_window_t

0x9ee3,	// (0x00066496) bg_popup_call2_rect_pane_ParamLimits

0x9ee3,	// (0x00066496) bg_popup_call2_rect_pane

0x9c88,	// (0x0006623b) call2_cli_visual_graphic_pane

0x9c88,	// (0x0006623b) call2_cli_visual_text_pane

0xc124,	// (0x000686d7) smil_status_volume_pane_g3

0x0002,

0xa05b,	// (0x0006660e) call2_cli_visual_graphic_pane_g1

0xa05b,	// (0x0006660e) call2_cli_visual_graphic_pane_g2

0xa05b,	// (0x0006660e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0006bb39) call2_cli_visual_graphic_pane_g

0xbe31,	// (0x000683e4) bg_popup_call2_rect_pane_g1

0xa103,	// (0x000666b6) bg_popup_call2_rect_pane_g2

0xbe39,	// (0x000683ec) bg_popup_call2_rect_pane_g3

0xbe41,	// (0x000683f4) bg_popup_call2_rect_pane_g4

0xbe49,	// (0x000683fc) bg_popup_call2_rect_pane_g5

0xbe51,	// (0x00068404) bg_popup_call2_rect_pane_g6

0xbe59,	// (0x0006840c) bg_popup_call2_rect_pane_g7

0xbe61,	// (0x00068414) bg_popup_call2_rect_pane_g8

0xbe69,	// (0x0006841c) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0006bb40) bg_popup_call2_rect_pane_g

0xbe71,	// (0x00068424) bg_popup_call2_bubble_pane_g1

0xbe79,	// (0x0006842c) bg_popup_call2_bubble_pane_g2

0xbe81,	// (0x00068434) bg_popup_call2_bubble_pane_g3

0xbe89,	// (0x0006843c) bg_popup_call2_bubble_pane_g4

0xbe91,	// (0x00068444) bg_popup_call2_bubble_pane_g5

0xbe99,	// (0x0006844c) bg_popup_call2_bubble_pane_g6

0xbea1,	// (0x00068454) bg_popup_call2_bubble_pane_g7

0xbea9,	// (0x0006845c) bg_popup_call2_bubble_pane_g8

0xbeb1,	// (0x00068464) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0006bb53) bg_popup_call2_bubble_pane_g

0x132a,	// (0x0005d8dd) aid_cale_week_size_cell_pane

0x1800,	// (0x0005ddb3) aid_cams_cif_uncrop_pane_ParamLimits

0x1800,	// (0x0005ddb3) aid_cams_cif_uncrop_pane

0x19b9,	// (0x0005df6c) aid_cams_size_cell_ParamLimits

0x19b9,	// (0x0005df6c) aid_cams_size_cell

0x19cd,	// (0x0005df80) grid_cams_pane_ParamLimits

0x19e7,	// (0x0005df9a) linegrid_cams_pane_ParamLimits

0x1bdc,	// (0x0005e18f) call_video_pane_t1

0x1bf6,	// (0x0005e1a9) call_video_pane_t2

0x0001,

0xf28d,	// (0x0006b840) call_video_pane_t

0x2041,	// (0x0005e5f4) aid_cale_month_size_cell_pane_ParamLimits

0x2041,	// (0x0005e5f4) aid_cale_month_size_cell_pane

0xf62a,	// (0x0006bbdd) smil_status_volume_pane_g

0xc131,	// (0x000686e4) volume_smil_pane_ParamLimits

0x09a3,	// (0x0005cf56) aid_popup2_width_pane

0x1281,	// (0x0005d834) cell_qdial_pane_g4_ParamLimits

0x1281,	// (0x0005d834) cell_qdial_pane_g4

0x2ccc,	// (0x0005f27f) aid_blid_cardinal_pane_ParamLimits

0x2cdc,	// (0x0005f28f) aid_blid_destination_pane_ParamLimits

0x2cdc,	// (0x0005f28f) aid_blid_destination_pane

0x9ee3,	// (0x00066496) bg_popup_call_poc_act_pane_ParamLimits

0x9ee3,	// (0x00066496) bg_popup_call_poc_act_pane

0x9ee3,	// (0x00066496) bg_popup_call_poc_inact_pane_ParamLimits

0x9ee3,	// (0x00066496) bg_popup_call_poc_inact_pane

0xbeb9,	// (0x0006846c) bg_popup_call_poc_act_pane_g1

0xbec1,	// (0x00068474) bg_popup_call_poc_act_pane_g2

0xbec9,	// (0x0006847c) bg_popup_call_poc_act_pane_g3

0xbe89,	// (0x0006843c) bg_popup_call_poc_act_pane_g4

0xbe91,	// (0x00068444) bg_popup_call_poc_act_pane_g5

0xbed1,	// (0x00068484) bg_popup_call_poc_act_pane_g6

0xbea1,	// (0x00068454) bg_popup_call_poc_act_pane_g7

0xbed9,	// (0x0006848c) bg_popup_call_poc_act_pane_g8

0x9c88,	// (0x0006623b) main_usb_pane

0xc036,	// (0x000685e9) popup_cale_lunar_info_window

0x1ec1,	// (0x0005e474) im_reading_pane_t1_ParamLimits

0xa376,	// (0x00066929) list_im_pane_ParamLimits

0xa387,	// (0x0006693a) scroll_pane_cp07_ParamLimits

0x9c88,	// (0x0006623b) grid_highlight_pane_cp012

0x9ee3,	// (0x00066496) mup_scale_pane_ParamLimits

0xadb4,	// (0x00067367) main_usb_pane_g1_ParamLimits

0xadb4,	// (0x00067367) main_usb_pane_g1

0x3aae,	// (0x00060061) main_usb_pane_g2_ParamLimits

0x3aae,	// (0x00060061) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0006bb7d) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0006bb7d) main_usb_pane_g

0x3ac4,	// (0x00060077) main_usb_pane_t1_ParamLimits

0x3ac4,	// (0x00060077) main_usb_pane_t1

0x3ad6,	// (0x00060089) main_usb_pane_t2_ParamLimits

0x3ad6,	// (0x00060089) main_usb_pane_t2

0x3ae8,	// (0x0006009b) main_usb_pane_t3_ParamLimits

0x3ae8,	// (0x0006009b) main_usb_pane_t3

0x3afa,	// (0x000600ad) main_usb_pane_t4_ParamLimits

0x3afa,	// (0x000600ad) main_usb_pane_t4

0x3b0f,	// (0x000600c2) main_usb_pane_t5_ParamLimits

0x3b0f,	// (0x000600c2) main_usb_pane_t5

0x3b24,	// (0x000600d7) main_usb_pane_t6_ParamLimits

0x3b24,	// (0x000600d7) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0006bb82) main_usb_pane_t_ParamLimits

0x2c6b,	// (0x0005f21e) aid_text_placing

0x2c76,	// (0x0005f229) main_location2_pane_t1_ParamLimits

0x2c8c,	// (0x0005f23f) main_location2_pane_t2_ParamLimits

0x2ca2,	// (0x0005f255) main_location2_pane_t3_ParamLimits

0x2cb8,	// (0x0005f26b) main_location2_pane_t4_ParamLimits

0x2cb8,	// (0x0005f26b) main_location2_pane_t4

0xf3ee,	// (0x0006b9a1) main_location2_pane_t_ParamLimits

0x9f1f,	// (0x000664d2) find_pinb_pane_g2_ParamLimits

0x9f1f,	// (0x000664d2) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0006b6ef) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0006b6ef) find_pinb_pane_g

0x9f2b,	// (0x000664de) find_pinb_pane_t1_ParamLimits

0x9f3d,	// (0x000664f0) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0006b6f4) find_pinb_pane_t_ParamLimits

0x9c88,	// (0x0006623b) main_call3_pane

0x23b5,	// (0x0005e968) cale_month_day_heading_pane_t1_ParamLimits

0x2413,	// (0x0005e9c6) cale_month_day_heading_pane_t2_ParamLimits

0x2478,	// (0x0005ea2b) cale_month_day_heading_pane_t3_ParamLimits

0x24dd,	// (0x0005ea90) cale_month_day_heading_pane_t4_ParamLimits

0x2542,	// (0x0005eaf5) cale_month_day_heading_pane_t5_ParamLimits

0x25a7,	// (0x0005eb5a) cale_month_day_heading_pane_t6_ParamLimits

0x260c,	// (0x0005ebbf) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0006b878) cale_month_day_heading_pane_t_ParamLimits

0xa5d3,	// (0x00066b86) smil_status_volume_pane

0x3566,	// (0x0005fb19) postcard_address_pane_ParamLimits

0x3566,	// (0x0005fb19) postcard_address_pane

0x357c,	// (0x0005fb2f) postcard_message_pane_ParamLimits

0x357c,	// (0x0005fb2f) postcard_message_pane

0x3a87,	// (0x0006003a) call2_cli_visual_pane_t1_ParamLimits

0x3a87,	// (0x0006003a) call2_cli_visual_pane_t1

0x42f3,	// (0x000608a6) postcard_message_pane_t1_ParamLimits

0x42f3,	// (0x000608a6) postcard_message_pane_t1

0xc146,	// (0x000686f9) postcard_address_pane_t1_ParamLimits

0xc146,	// (0x000686f9) postcard_address_pane_t1

0x42df,	// (0x00060892) popup_call3_audio_in_window_ParamLimits

0x42df,	// (0x00060892) popup_call3_audio_in_window

0x4164,	// (0x00060717) bg_popup_call3_in_pane_ParamLimits

0x4164,	// (0x00060717) bg_popup_call3_in_pane

0x41e0,	// (0x00060793) popup_call3_audio_in_window_g1_ParamLimits

0x41e0,	// (0x00060793) popup_call3_audio_in_window_g1

0x4200,	// (0x000607b3) popup_call3_audio_in_window_g2_ParamLimits

0x4200,	// (0x000607b3) popup_call3_audio_in_window_g2

0x4220,	// (0x000607d3) popup_call3_audio_in_window_g3_ParamLimits

0x4220,	// (0x000607d3) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0006bbe4) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0006bbe4) popup_call3_audio_in_window_g

0x4251,	// (0x00060804) popup_call3_audio_in_window_t1_ParamLimits

0x4251,	// (0x00060804) popup_call3_audio_in_window_t1

0x428f,	// (0x00060842) popup_call3_audio_in_window_t2_ParamLimits

0x428f,	// (0x00060842) popup_call3_audio_in_window_t2

0x42cd,	// (0x00060880) popup_call3_audio_in_window_t3_ParamLimits

0x42cd,	// (0x00060880) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0006bbed) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0006bbed) popup_call3_audio_in_window_t

0xabb3,	// (0x00067166) bg_popup_call3_rect_pane

0xbe31,	// (0x000683e4) bg_popup_call3_rect_pane_g1

0xa103,	// (0x000666b6) bg_popup_call3_rect_pane_g2

0xbe39,	// (0x000683ec) bg_popup_call3_rect_pane_g3

0xbe41,	// (0x000683f4) bg_popup_call3_rect_pane_g4

0xbe49,	// (0x000683fc) bg_popup_call3_rect_pane_g5

0xbe51,	// (0x00068404) bg_popup_call3_rect_pane_g6

0xbe59,	// (0x0006840c) bg_popup_call3_rect_pane_g7

0x30c8,	// (0x0005f67b) mup_visualizer_osc_pane

0xac92,	// (0x00067245) mup_visualizer_spec_pane

0x4194,	// (0x00060747) call3_video_qcif_pane_ParamLimits

0x4194,	// (0x00060747) call3_video_qcif_pane

0x41a7,	// (0x0006075a) call3_video_qcif_uncrop_pane_ParamLimits

0x41a7,	// (0x0006075a) call3_video_qcif_uncrop_pane

0x41b7,	// (0x0006076a) call3_video_subqcif_pane_ParamLimits

0x41b7,	// (0x0006076a) call3_video_subqcif_pane

0x41cd,	// (0x00060780) call3_video_subqcif_uncrop_pane_ParamLimits

0x41cd,	// (0x00060780) call3_video_subqcif_uncrop_pane

0x4240,	// (0x000607f3) popup_call3_audio_in_window_g4_ParamLimits

0x4240,	// (0x000607f3) popup_call3_audio_in_window_g4

0x4153,	// (0x00060706) mup_spec_half_pane

0x415c,	// (0x0006070f) mup_spec_half_pane_cp

0xc0e4,	// (0x00068697) mup_osc_middle_pane

0xc0ed,	// (0x000686a0) mup_visualizer_osc_pane_g1

0x4133,	// (0x000606e6) mup_spec_bar_pane_ParamLimits

0x4133,	// (0x000606e6) mup_spec_bar_pane

0xc0d1,	// (0x00068684) mup_spec_bar_pane_g1

0xc0db,	// (0x0006868e) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0006bbd8) mup_spec_bar_pane_g

0x132a,	// (0x0005d8dd) aid_cale_week_size_cell_pane_ParamLimits

0x133d,	// (0x0005d8f0) bg_cale_heading_pane_ParamLimits

0xa17f,	// (0x00066732) bg_cale_pane_cp01_ParamLimits

0x1359,	// (0x0005d90c) cale_week_corner_pane_ParamLimits

0x136f,	// (0x0005d922) cale_week_day_heading_pane_ParamLimits

0x138b,	// (0x0005d93e) cale_week_scroll_pane_g1_ParamLimits

0x13a4,	// (0x0005d957) cale_week_scroll_pane_g2_ParamLimits

0x13b5,	// (0x0005d968) cale_week_scroll_pane_g3_ParamLimits

0x13c6,	// (0x0005d979) cale_week_scroll_pane_g4_ParamLimits

0x13d7,	// (0x0005d98a) cale_week_scroll_pane_g5_ParamLimits

0x13e8,	// (0x0005d99b) cale_week_scroll_pane_g6_ParamLimits

0x13f9,	// (0x0005d9ac) cale_week_scroll_pane_g7_ParamLimits

0x140a,	// (0x0005d9bd) cale_week_scroll_pane_g8_ParamLimits

0x141b,	// (0x0005d9ce) cale_week_scroll_pane_g9_ParamLimits

0x142c,	// (0x0005d9df) cale_week_scroll_pane_g10_ParamLimits

0x143d,	// (0x0005d9f0) cale_week_scroll_pane_g11_ParamLimits

0x144e,	// (0x0005da01) cale_week_scroll_pane_g12_ParamLimits

0x145f,	// (0x0005da12) cale_week_scroll_pane_g13_ParamLimits

0x1478,	// (0x0005da2b) cale_week_scroll_pane_g14_ParamLimits

0x1491,	// (0x0005da44) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0006b780) cale_week_scroll_pane_g_ParamLimits

0x14aa,	// (0x0005da5d) cale_week_time_pane_ParamLimits

0x14bb,	// (0x0005da6e) grid_cale_week_pane_ParamLimits

0xa198,	// (0x0006674b) listscroll_cale_week_pane_t1

0x14d6,	// (0x0005da89) scroll_pane_cp08_ParamLimits

0x2092,	// (0x0005e645) cale_month_corner_pane_ParamLimits

0xa59d,	// (0x00066b50) cale_month_pane_t1

0x2376,	// (0x0005e929) cale_month_week_pane_ParamLimits

0x2a8f,	// (0x0005f042) popup_call_status_window_g1_ParamLimits

0x2aa3,	// (0x0005f056) popup_call_status_window_g2_ParamLimits

0x2ab7,	// (0x0005f06a) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0006b928) popup_call_status_window_g_ParamLimits

0xa8e6,	// (0x00066e99) aid_call2_pane

0x3390,	// (0x0005f943) msg_header_pane_g1

0x3566,	// (0x0005fb19) postcard_address2_pane_ParamLimits

0x3566,	// (0x0005fb19) postcard_address2_pane

0x357c,	// (0x0005fb2f) postcard_message2_pane_ParamLimits

0x357c,	// (0x0005fb2f) postcard_message2_pane

0x40f0,	// (0x000606a3) message2_row_pane_ParamLimits

0x40f0,	// (0x000606a3) message2_row_pane

0xc08c,	// (0x0006863f) address2_row_pane_ParamLimits

0xc08c,	// (0x0006863f) address2_row_pane

0xc09f,	// (0x00068652) postcard_message2_row_pane_g1

0xc0a7,	// (0x0006865a) postcard_message2_row_pane_t1

0xc09f,	// (0x00068652) address2_row_pane_g1

0xc0a7,	// (0x0006865a) address2_row_pane_t1

0x16e4,	// (0x0005dc97) aid_size_cell_vorec

0x9c88,	// (0x0006623b) main_rss_pane

0x4113,	// (0x000606c6) rss_list_single_pane_ParamLimits

0x4113,	// (0x000606c6) rss_list_single_pane

0xc0b5,	// (0x00068668) rss_list_single_pane_t1

0xc0c3,	// (0x00068676) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0006bbd3) rss_list_single_pane_t

0x9c88,	// (0x0006623b) main_camera2_pane

0x9c88,	// (0x0006623b) main_video2_pane

0x4362,	// (0x00060915) cams_zoom_pane_cp2_ParamLimits

0x4362,	// (0x00060915) cams_zoom_pane_cp2

0x4379,	// (0x0006092c) image2_vga_pane_ParamLimits

0x4379,	// (0x0006092c) image2_vga_pane

0x43c1,	// (0x00060974) main_camera2_pane_g1_ParamLimits

0x43c1,	// (0x00060974) main_camera2_pane_g1

0x43e1,	// (0x00060994) main_camera2_pane_g2_ParamLimits

0x43e1,	// (0x00060994) main_camera2_pane_g2

0x43f8,	// (0x000609ab) main_camera2_pane_g3_ParamLimits

0x43f8,	// (0x000609ab) main_camera2_pane_g3

0x440f,	// (0x000609c2) main_camera2_pane_g4_ParamLimits

0x440f,	// (0x000609c2) main_camera2_pane_g4

0x4426,	// (0x000609d9) main_camera2_pane_g5_ParamLimits

0x4426,	// (0x000609d9) main_camera2_pane_g5

0x443d,	// (0x000609f0) main_camera2_pane_g6_ParamLimits

0x443d,	// (0x000609f0) main_camera2_pane_g6

0x4454,	// (0x00060a07) main_camera2_pane_g7_ParamLimits

0x4454,	// (0x00060a07) main_camera2_pane_g7

0x446b,	// (0x00060a1e) main_camera2_pane_g8_ParamLimits

0x446b,	// (0x00060a1e) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0006bbf4) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0006bbf4) main_camera2_pane_g

0x4499,	// (0x00060a4c) main_camera2_pane_t1_ParamLimits

0x4499,	// (0x00060a4c) main_camera2_pane_t1

0x44ce,	// (0x00060a81) main_camera2_pane_t2_ParamLimits

0x44ce,	// (0x00060a81) main_camera2_pane_t2

0x44eb,	// (0x00060a9e) main_camera2_pane_t3_ParamLimits

0x44eb,	// (0x00060a9e) main_camera2_pane_t3

0x4549,	// (0x00060afc) main_camera2_pane_t4_ParamLimits

0x4549,	// (0x00060afc) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0006bc07) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0006bc07) main_camera2_pane_t

0x45d2,	// (0x00060b85) cams_zoom_pane_cp4_ParamLimits

0x45d2,	// (0x00060b85) cams_zoom_pane_cp4

0x45e8,	// (0x00060b9b) image2_cif_pane_ParamLimits

0x45e8,	// (0x00060b9b) image2_cif_pane

0x4613,	// (0x00060bc6) image2_subqcif_pane_ParamLimits

0x4613,	// (0x00060bc6) image2_subqcif_pane

0x462e,	// (0x00060be1) main_video2_pane_g1_ParamLimits

0x462e,	// (0x00060be1) main_video2_pane_g1

0x4648,	// (0x00060bfb) main_video2_pane_g2_ParamLimits

0x4648,	// (0x00060bfb) main_video2_pane_g2

0x465e,	// (0x00060c11) main_video2_pane_g3_ParamLimits

0x465e,	// (0x00060c11) main_video2_pane_g3

0x4674,	// (0x00060c27) main_video2_pane_g4_ParamLimits

0x4674,	// (0x00060c27) main_video2_pane_g4

0x468a,	// (0x00060c3d) main_video2_pane_g5_ParamLimits

0x468a,	// (0x00060c3d) main_video2_pane_g5

0x46a0,	// (0x00060c53) main_video2_pane_g6_ParamLimits

0x46a0,	// (0x00060c53) main_video2_pane_g6

0x0005,

0xf663,	// (0x0006bc16) main_video2_pane_g_ParamLimits

0xf663,	// (0x0006bc16) main_video2_pane_g

0x46ba,	// (0x00060c6d) main_video2_pane_t1_ParamLimits

0x46ba,	// (0x00060c6d) main_video2_pane_t1

0x46de,	// (0x00060c91) main_video2_pane_t2_ParamLimits

0x46de,	// (0x00060c91) main_video2_pane_t2

0x472e,	// (0x00060ce1) main_video2_pane_t3_ParamLimits

0x472e,	// (0x00060ce1) main_video2_pane_t3

0x0002,

0xf670,	// (0x0006bc23) main_video2_pane_t_ParamLimits

0xf670,	// (0x0006bc23) main_video2_pane_t

0x3be2,	// (0x00060195) call_muted_g2

0x0001,

0xf612,	// (0x0006bbc5) call_muted_g

0x9c88,	// (0x0006623b) main_mup2_pane

0x4776,	// (0x00060d29) main_mup2_pane_g1_ParamLimits

0x4776,	// (0x00060d29) main_mup2_pane_g1

0x4782,	// (0x00060d35) main_mup2_pane_g2_ParamLimits

0x4782,	// (0x00060d35) main_mup2_pane_g2

0xc267,	// (0x0006881a) main_mup_pane_g13_cp1

0xc26f,	// (0x00068822) mup_volume_pane_cp1

0x47a0,	// (0x00060d53) main_mup2_pane_g4_ParamLimits

0x47a0,	// (0x00060d53) main_mup2_pane_g4

0x47b0,	// (0x00060d63) main_mup2_pane_g5_ParamLimits

0x47b0,	// (0x00060d63) main_mup2_pane_g5

0x47c0,	// (0x00060d73) main_mup2_pane_g6_ParamLimits

0x47c0,	// (0x00060d73) main_mup2_pane_g6

0x47d0,	// (0x00060d83) main_mup2_pane_g7_ParamLimits

0x47d0,	// (0x00060d83) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0006bc2a) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0006bc2a) main_mup2_pane_g

0x47e8,	// (0x00060d9b) main_mup2_pane_t1_ParamLimits

0x47e8,	// (0x00060d9b) main_mup2_pane_t1

0x47fe,	// (0x00060db1) main_mup2_pane_t2_ParamLimits

0x47fe,	// (0x00060db1) main_mup2_pane_t2

0x4814,	// (0x00060dc7) main_mup2_pane_t3_ParamLimits

0x4814,	// (0x00060dc7) main_mup2_pane_t3

0x482a,	// (0x00060ddd) main_mup2_pane_t4_ParamLimits

0x482a,	// (0x00060ddd) main_mup2_pane_t4

0x4842,	// (0x00060df5) main_mup2_pane_t5_ParamLimits

0x4842,	// (0x00060df5) main_mup2_pane_t5

0x485a,	// (0x00060e0d) main_mup2_pane_t6_ParamLimits

0x485a,	// (0x00060e0d) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0006bc39) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0006bc39) main_mup2_pane_t

0x488a,	// (0x00060e3d) mup2_visualizer_pane_ParamLimits

0x488a,	// (0x00060e3d) mup2_visualizer_pane

0x48b8,	// (0x00060e6b) mup_progress_pane_cp_ParamLimits

0x48b8,	// (0x00060e6b) mup_progress_pane_cp

0xc249,	// (0x000687fc) mup_volume_pane_cp_ParamLimits

0xc249,	// (0x000687fc) mup_volume_pane_cp

0x48ce,	// (0x00060e81) mup2_visualizer_pane_g1_ParamLimits

0x48ce,	// (0x00060e81) mup2_visualizer_pane_g1

0xc188,	// (0x0006873b) mup2_visualizer_pane_g2_ParamLimits

0xc188,	// (0x0006873b) mup2_visualizer_pane_g2

0x48e3,	// (0x00060e96) mup2_visualizer_pane_g3_ParamLimits

0x48e3,	// (0x00060e96) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0006bc46) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0006bc46) mup2_visualizer_pane_g

0xaefd,	// (0x000674b0) aid_size_cell_fmradio

0x3d92,	// (0x00060345) aid_height_parent_landcape

0xa405,	// (0x000669b8) wml_content_pane_cp

0xa40d,	// (0x000669c0) wml_tabs_pane

0xa416,	// (0x000669c9) popup_wml_miniature_window

0xa41e,	// (0x000669d1) scroll_pane_cp021

0xa432,	// (0x000669e5) wml_content_pane_comp8

0x9c88,	// (0x0006623b) bg_popup_sub_pane_cp05

0xc1a6,	// (0x00068759) popup_wml_miniature_window_g1

0xc1ae,	// (0x00068761) wml_miniature_view_pane

0x48ef,	// (0x00060ea2) aid_size_wml_view

0x48f7,	// (0x00060eaa) wml_miniature_view_pane_g1

0x4900,	// (0x00060eb3) wml_miniature_view_pane_g2

0x4909,	// (0x00060ebc) wml_miniature_view_pane_g3

0x4911,	// (0x00060ec4) wml_miniature_view_pane_g4

0x4919,	// (0x00060ecc) wml_miniature_view_pane_g5

0x4921,	// (0x00060ed4) wml_miniature_view_pane_g6

0x4929,	// (0x00060edc) wml_miniature_view_pane_g7

0x4931,	// (0x00060ee4) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0006bc4d) wml_miniature_view_pane_g

0xc1b6,	// (0x00068769) background_graphic_ParamLimits

0xc1b6,	// (0x00068769) background_graphic

0xc1c2,	// (0x00068775) wml_tabs_2_pane

0xc1cb,	// (0x0006877e) wml_tabs_3_pane_ParamLimits

0xc1cb,	// (0x0006877e) wml_tabs_3_pane

0xc1dd,	// (0x00068790) wml_tabs_4_pane_ParamLimits

0xc1dd,	// (0x00068790) wml_tabs_4_pane

0xc1f3,	// (0x000687a6) wml_tabs_5_pane_ParamLimits

0xc1f3,	// (0x000687a6) wml_tabs_5_pane

0xc20d,	// (0x000687c0) wml_tabs_pane_g2_ParamLimits

0xc20d,	// (0x000687c0) wml_tabs_pane_g2

0xc221,	// (0x000687d4) wml_tabs_pane_g3_ParamLimits

0xc221,	// (0x000687d4) wml_tabs_pane_g3

0x4939,	// (0x00060eec) wml_tabs_2_active_pane_ParamLimits

0x4939,	// (0x00060eec) wml_tabs_2_active_pane

0x494d,	// (0x00060f00) wml_tabs_2_passive_pane_ParamLimits

0x494d,	// (0x00060f00) wml_tabs_2_passive_pane

0x4961,	// (0x00060f14) wml_tabs_3_active_pane_cp_ParamLimits

0x4961,	// (0x00060f14) wml_tabs_3_active_pane_cp

0x4976,	// (0x00060f29) wml_tabs_3_passive_pane_ParamLimits

0x4976,	// (0x00060f29) wml_tabs_3_passive_pane

0x4989,	// (0x00060f3c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4989,	// (0x00060f3c) wml_tabs_3_passive_pane_cp

0x49a0,	// (0x00060f53) tabs_4_active_pane

0x49a8,	// (0x00060f5b) tabs_4_passive_pane

0x49b2,	// (0x00060f65) tabs_4_passive_pane_cp

0x49ba,	// (0x00060f6d) tabs_4_passive_pane_cp2

0x3aa6,	// (0x00060059) aid_height_text

0x309a,	// (0x0005f64d) mup_volume_cont_pane_ParamLimits

0x309a,	// (0x0005f64d) mup_volume_cont_pane

0x0f14,	// (0x0005d4c7) aid_size_cell_pinb

0x0f1e,	// (0x0005d4d1) aid_size_list_pinb

0x48a4,	// (0x00060e57) mup2_volume_cont_pane_ParamLimits

0x48a4,	// (0x00060e57) mup2_volume_cont_pane

0xc235,	// (0x000687e8) mup2_volume_cont_pane_g1_ParamLimits

0xc235,	// (0x000687e8) mup2_volume_cont_pane_g1

0x09af,	// (0x0005cf62) aid_size_cell_touch_ParamLimits

0x09af,	// (0x0005cf62) aid_size_cell_touch

0x0c2b,	// (0x0005d1de) touch_pane_ParamLimits

0x0c2b,	// (0x0005d1de) touch_pane

0x0991,	// (0x0005cf44) main_rss2_pane

0xc277,	// (0x0006882a) listscroll_rss2_pane

0xc280,	// (0x00068833) rss2_navigation_pane

0xc288,	// (0x0006883b) list_rss2_pane

0xaa79,	// (0x0006702c) scroll_pane_cp22

0xc290,	// (0x00068843) rss2_navigation_pane_g1

0xc299,	// (0x0006884c) rss2_navigation_pane_g2

0xc2a1,	// (0x00068854) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0006bc5e) rss2_navigation_pane_g

0xc2a9,	// (0x0006885c) rss2_navigation_pane_t1

0x49c4,	// (0x00060f77) rss2_list_single_pane_ParamLimits

0x49c4,	// (0x00060f77) rss2_list_single_pane

0xc2b7,	// (0x0006886a) rss2_list_single_pane_t2

0xc2c5,	// (0x00068878) rss2_list_single_pane_t3_ParamLimits

0xc2c5,	// (0x00068878) rss2_list_single_pane_t3

0xc2e2,	// (0x00068895) rss2_list_single_pane_t4

0x2802,	// (0x0005edb5) smil_status_pane_g1

0x0c11,	// (0x0005d1c4) main_image2_pane_ParamLimits

0x0c11,	// (0x0005d1c4) main_image2_pane

0x4482,	// (0x00060a35) main_camera2_pane_g9_ParamLimits

0x4482,	// (0x00060a35) main_camera2_pane_g9

0x459e,	// (0x00060b51) main_camera2_pane_t5_ParamLimits

0x459e,	// (0x00060b51) main_camera2_pane_t5

0xc15d,	// (0x00068710) main_camera2_pane_t6_ParamLimits

0xc15d,	// (0x00068710) main_camera2_pane_t6

0x49de,	// (0x00060f91) main_image2_pane_g1_ParamLimits

0x49de,	// (0x00060f91) main_image2_pane_g1

0x37bd,	// (0x0005fd70) smil2_video_pane_ParamLimits

0x37bd,	// (0x0005fd70) smil2_video_pane

0x09ef,	// (0x0005cfa2) aid_zoom_text_primary_cp

0x0bcd,	// (0x0005d180) popup_preview_fixed_window

0xa36e,	// (0x00066921) im_reading_pane_g1

0x4354,	// (0x00060907) cams2_bc_adjust_pane_cp_ParamLimits

0x4354,	// (0x00060907) cams2_bc_adjust_pane_cp

0x45c4,	// (0x00060b77) cams2_bc_adjust_pane_ParamLimits

0x45c4,	// (0x00060b77) cams2_bc_adjust_pane

0xc2f0,	// (0x000688a3) cams2_bc_adjust_pane_g1

0xc2f8,	// (0x000688ab) cams2_slider_pane

0xc301,	// (0x000688b4) cams2_slider_pane_g1

0xc30a,	// (0x000688bd) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0006bc65) cams2_slider_pane_g

0x100e,	// (0x0005d5c1) calc_display_pane_ParamLimits

0x1034,	// (0x0005d5e7) calc_paper_pane_ParamLimits

0x1057,	// (0x0005d60a) grid_calc_pane_ParamLimits

0xa948,	// (0x00066efb) popup_clock_digital_window_t1_ParamLimits

0xae9a,	// (0x0006744d) main_image_pane_t1

0x0ff0,	// (0x0005d5a3) aid_size_cell_calc_ParamLimits

0x0ff0,	// (0x0005d5a3) aid_size_cell_calc

0x3dd8,	// (0x0006038b) popup_blid_sat_info2_window_ParamLimits

0x3dd8,	// (0x0006038b) popup_blid_sat_info2_window

0xc32c,	// (0x000688df) aid_size_cell_blid

0xc334,	// (0x000688e7) bg_popup_window_pane_cp07

0xc357,	// (0x0006890a) grid_popup_blid_pane

0xc361,	// (0x00068914) heading_pane_cp05_ParamLimits

0xc361,	// (0x00068914) heading_pane_cp05

0xc42b,	// (0x000689de) cell_popup_blid_pane_ParamLimits

0xc42b,	// (0x000689de) cell_popup_blid_pane

0xc455,	// (0x00068a08) cell_popup_blid_pane_g1

0xc45d,	// (0x00068a10) cell_popup_blid_pane_t1

0x4874,	// (0x00060e27) mup2_indicator_pane_ParamLimits

0x4874,	// (0x00060e27) mup2_indicator_pane

0xabb3,	// (0x00067166) mup2_visualizer_osc_pane

0xc194,	// (0x00068747) mup2_visualizer_spec_pane_ParamLimits

0xc194,	// (0x00068747) mup2_visualizer_spec_pane

0x49f4,	// (0x00060fa7) mup2_spec_half_pane

0x49fd,	// (0x00060fb0) mup2_spec_half_pane_cp

0x4a05,	// (0x00060fb8) mup2_spec_bar_pane_ParamLimits

0x4a05,	// (0x00060fb8) mup2_spec_bar_pane

0xc0d1,	// (0x00068684) mup2_spec_bar_pane_g1

0xc0db,	// (0x0006868e) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0006bbd8) mup2_spec_bar_pane_g

0x4a25,	// (0x00060fd8) mup2_osc_middle_pane

0xc0ed,	// (0x000686a0) mup2_visualizer_osc_pane_g1

0x0c9d,	// (0x0005d250) popup_number_entry_window_t1_ParamLimits

0x0cb0,	// (0x0005d263) popup_number_entry_window_t2_ParamLimits

0x0cc2,	// (0x0005d275) popup_number_entry_window_t3_ParamLimits

0x0cd4,	// (0x0005d287) popup_number_entry_window_t5_ParamLimits

0x0cd4,	// (0x0005d287) popup_number_entry_window_t5

0xf0e7,	// (0x0006b69a) popup_number_entry_window_t_ParamLimits

0x0d09,	// (0x0005d2bc) text_title_cp2_ParamLimits

0xad74,	// (0x00067327) aid_hotspot_pointer_text2_pane

0xad9a,	// (0x0006734d) main_viewer_pane_g9_ParamLimits

0xad9a,	// (0x0006734d) main_viewer_pane_g9

0xa59d,	// (0x00066b50) cale_month_pane_t1_ParamLimits

0xa608,	// (0x00066bbb) bg_cale_pane_ParamLimits

0xa620,	// (0x00066bd3) list_cale_pane_ParamLimits

0xa198,	// (0x0006674b) listscroll_cale_day_pane_t1

0xa631,	// (0x00066be4) scroll_pane_cp09_ParamLimits

0x30d0,	// (0x0005f683) main_mup_eq_pane_t1_ParamLimits

0x30d0,	// (0x0005f683) main_mup_eq_pane_t1

0x30ec,	// (0x0005f69f) main_mup_eq_pane_t2_ParamLimits

0x30ec,	// (0x0005f69f) main_mup_eq_pane_t2

0x3108,	// (0x0005f6bb) main_mup_eq_pane_t3_ParamLimits

0x3108,	// (0x0005f6bb) main_mup_eq_pane_t3

0x3126,	// (0x0005f6d9) main_mup_eq_pane_t4_ParamLimits

0x3126,	// (0x0005f6d9) main_mup_eq_pane_t4

0x3144,	// (0x0005f6f7) main_mup_eq_pane_t5_ParamLimits

0x3144,	// (0x0005f6f7) main_mup_eq_pane_t5

0x3162,	// (0x0005f715) main_mup_eq_pane_t6_ParamLimits

0x3162,	// (0x0005f715) main_mup_eq_pane_t6

0x3178,	// (0x0005f72b) main_mup_eq_pane_t7_ParamLimits

0x3178,	// (0x0005f72b) main_mup_eq_pane_t7

0x318e,	// (0x0005f741) main_mup_eq_pane_t8_ParamLimits

0x318e,	// (0x0005f741) main_mup_eq_pane_t8

0x31a4,	// (0x0005f757) main_mup_eq_pane_t9_ParamLimits

0x31a4,	// (0x0005f757) main_mup_eq_pane_t9

0x31c0,	// (0x0005f773) main_mup_eq_pane_t10_ParamLimits

0x31c0,	// (0x0005f773) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0006ba27) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0006ba27) main_mup_eq_pane_t

0x3295,	// (0x0005f848) mup_equalizer_pane_cp5_ParamLimits

0x32ad,	// (0x0005f860) mup_equalizer_pane_cp6_ParamLimits

0x32c5,	// (0x0005f878) mup_equalizer_pane_cp7_ParamLimits

0x0991,	// (0x0005cf44) main_gallery_pane

0xc0f6,	// (0x000686a9) smil2_volume_pane

0xc0fe,	// (0x000686b1) smil_status_volume_pane_g1_ParamLimits

0xc111,	// (0x000686c4) smil_status_volume_pane_g2_ParamLimits

0xc124,	// (0x000686d7) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0006bbdd) smil_status_volume_pane_g_ParamLimits

0xc334,	// (0x000688e7) bg_popup_window_pane_cp07_ParamLimits

0xc342,	// (0x000688f5) blid_firmament_pane

0x4a2e,	// (0x00060fe1) aid_size_cell_gallery_ParamLimits

0x4a2e,	// (0x00060fe1) aid_size_cell_gallery

0x4a44,	// (0x00060ff7) grid_gallery_pane_ParamLimits

0x4a44,	// (0x00060ff7) grid_gallery_pane

0x4a5f,	// (0x00061012) cell_gallery_pane_ParamLimits

0x4a5f,	// (0x00061012) cell_gallery_pane

0xc46b,	// (0x00068a1e) bg_cell_gallery_focus_pane_ParamLimits

0xc46b,	// (0x00068a1e) bg_cell_gallery_focus_pane

0xc47d,	// (0x00068a30) cell_gallery_pane_g1_ParamLimits

0xc47d,	// (0x00068a30) cell_gallery_pane_g1

0x4ab0,	// (0x00061063) cell_gallery_pane_g2_ParamLimits

0x4ab0,	// (0x00061063) cell_gallery_pane_g2

0x4abd,	// (0x00061070) cell_gallery_pane_g3_ParamLimits

0x4abd,	// (0x00061070) cell_gallery_pane_g3

0xc489,	// (0x00068a3c) cell_gallery_pane_g4_ParamLimits

0xc489,	// (0x00068a3c) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0006bc8b) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0006bc8b) cell_gallery_pane_g

0xc495,	// (0x00068a48) bg_cell_gallery_focus_pane_g1

0xc49d,	// (0x00068a50) bg_cell_gallery_focus_pane_g2

0xc4a5,	// (0x00068a58) bg_cell_gallery_focus_pane_g3

0xc4ad,	// (0x00068a60) bg_cell_gallery_focus_pane_g4

0xc4b5,	// (0x00068a68) bg_cell_gallery_focus_pane_g5

0xc4bd,	// (0x00068a70) bg_cell_gallery_focus_pane_g6

0xc4c5,	// (0x00068a78) bg_cell_gallery_focus_pane_g7

0xc4cd,	// (0x00068a80) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0006bc94) bg_cell_gallery_focus_pane_g

0xc4d5,	// (0x00068a88) aid_firma_cardinal

0xc4e9,	// (0x00068a9c) blid_firmament_pane_t1

0xc500,	// (0x00068ab3) blid_firmament_pane_t2

0xc517,	// (0x00068aca) blid_firmament_pane_t3

0xc52e,	// (0x00068ae1) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0006bca5) blid_firmament_pane_t

0xc545,	// (0x00068af8) blid_sat_info_pane

0xc555,	// (0x00068b08) blid_sat_info_pane_g1

0xc555,	// (0x00068b08) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0006bcae) blid_sat_info_pane_g

0xc55f,	// (0x00068b12) blid_sat_info_pane_t1

0xc56d,	// (0x00068b20) smil2_volume_content_pane

0xc576,	// (0x00068b29) smil2_volume_pane_g1

0xc57e,	// (0x00068b31) smil2_volume_content_pane_g1

0xc587,	// (0x00068b3a) smil2_volume_content_pane_g2

0xc590,	// (0x00068b43) smil2_volume_content_pane_g3

0xc599,	// (0x00068b4c) smil2_volume_content_pane_g4

0xc5a2,	// (0x00068b55) smil2_volume_content_pane_g5

0xc5ab,	// (0x00068b5e) smil2_volume_content_pane_g6

0xc5b4,	// (0x00068b67) smil2_volume_content_pane_g7

0xc5bd,	// (0x00068b70) smil2_volume_content_pane_g8

0xc5c6,	// (0x00068b79) smil2_volume_content_pane_g9

0xc5cf,	// (0x00068b82) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0006bcb3) smil2_volume_content_pane_g

0x1536,	// (0x0005dae9) cale_week_day_heading_pane_t1_ParamLimits

0x154a,	// (0x0005dafd) cale_week_day_heading_pane_t2_ParamLimits

0x155e,	// (0x0005db11) cale_week_day_heading_pane_t3_ParamLimits

0x1572,	// (0x0005db25) cale_week_day_heading_pane_t4_ParamLimits

0x1586,	// (0x0005db39) cale_week_day_heading_pane_t5_ParamLimits

0x159a,	// (0x0005db4d) cale_week_day_heading_pane_t6_ParamLimits

0x15ae,	// (0x0005db61) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0006b79f) cale_week_day_heading_pane_t_ParamLimits

0xa1aa,	// (0x0006675d) bg_cale_side_pane_ParamLimits

0x15c2,	// (0x0005db75) cale_week_time_pane_t1_ParamLimits

0x15da,	// (0x0005db8d) cale_week_time_pane_t2_ParamLimits

0x15f2,	// (0x0005dba5) cale_week_time_pane_t3_ParamLimits

0x160a,	// (0x0005dbbd) cale_week_time_pane_t4_ParamLimits

0x1622,	// (0x0005dbd5) cale_week_time_pane_t5_ParamLimits

0x163a,	// (0x0005dbed) cale_week_time_pane_t6_ParamLimits

0x1652,	// (0x0005dc05) cale_week_time_pane_t7_ParamLimits

0x166e,	// (0x0005dc21) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0006b7ae) cale_week_time_pane_t_ParamLimits

0x168e,	// (0x0005dc41) cell_cale_week_pane_g2_ParamLimits

0xa1aa,	// (0x0006675d) bg_cale_side_pane_cp01_ParamLimits

0x2671,	// (0x0005ec24) cale_month_week_pane_t1_ParamLimits

0x2688,	// (0x0005ec3b) cale_month_week_pane_t2_ParamLimits

0x269f,	// (0x0005ec52) cale_month_week_pane_t3_ParamLimits

0x26b6,	// (0x0005ec69) cale_month_week_pane_t4_ParamLimits

0x26cd,	// (0x0005ec80) cale_month_week_pane_t5_ParamLimits

0x26e4,	// (0x0005ec97) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0006b887) cale_month_week_pane_t_ParamLimits

0xa5af,	// (0x00066b62) cell_cale_month_pane_g1_ParamLimits

0x0991,	// (0x0005cf44) main_cale_event_viewer_pane

0x0991,	// (0x0005cf44) listscroll_cale_event_viewer_pane

0xc5d8,	// (0x00068b8b) list_cale_ev_pane

0xc5e0,	// (0x00068b93) scroll_pane_cp023

0x4aca,	// (0x0006107d) field_cale_ev_pane_ParamLimits

0x4aca,	// (0x0006107d) field_cale_ev_pane

0xc5ec,	// (0x00068b9f) field_cale_ev_content_pane_ParamLimits

0xc5ec,	// (0x00068b9f) field_cale_ev_content_pane

0xc5f8,	// (0x00068bab) field_cale_ev_pane_g1_ParamLimits

0xc5f8,	// (0x00068bab) field_cale_ev_pane_g1

0xc604,	// (0x00068bb7) field_cale_ev_pane_g2_ParamLimits

0xc604,	// (0x00068bb7) field_cale_ev_pane_g2

0xc61c,	// (0x00068bcf) field_cale_ev_pane_g3_ParamLimits

0xc61c,	// (0x00068bcf) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0006bcc8) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0006bcc8) field_cale_ev_pane_g

0xc634,	// (0x00068be7) field_cale_ev_pane_t1_ParamLimits

0xc634,	// (0x00068be7) field_cale_ev_pane_t1

0x4aee,	// (0x000610a1) field_cale_ev_content_pane_t1_ParamLimits

0x4aee,	// (0x000610a1) field_cale_ev_content_pane_t1

0xad3e,	// (0x000672f1) bg_button_pane_cp01

0x9fe2,	// (0x00066595) listscroll_cale_week_pane_ParamLimits

0x1320,	// (0x0005d8d3) popup_toolbar_window_cp01

0xa198,	// (0x0006674b) listscroll_cale_week_pane_t1_ParamLimits

0x9fe2,	// (0x00066595) listscroll_cale_day_pane_ParamLimits

0x2862,	// (0x0005ee15) popup_toolbar_window_cp02

0xa198,	// (0x0006674b) listscroll_cale_day_pane_t1_ParamLimits

0x9fe2,	// (0x00066595) main_cale_month_pane_ParamLimits

0x4058,	// (0x0006060b) popup_toolbar_window_cp03_ParamLimits

0x4058,	// (0x0006060b) popup_toolbar_window_cp03

0x367b,	// (0x0005fc2e) main_image_pane_g2_ParamLimits

0x367b,	// (0x0005fc2e) main_image_pane_g2

0x368c,	// (0x0005fc3f) main_image_pane_g3_ParamLimits

0x368c,	// (0x0005fc3f) main_image_pane_g3

0x0002,

0xf506,	// (0x0006bab9) main_image_pane_g_ParamLimits

0xf506,	// (0x0006bab9) main_image_pane_g

0xae9a,	// (0x0006744d) main_image_pane_t1_ParamLimits

0x369d,	// (0x0005fc50) main_image_pane_t2_ParamLimits

0x369d,	// (0x0005fc50) main_image_pane_t2

0x36af,	// (0x0005fc62) main_image_pane_t3_ParamLimits

0x36af,	// (0x0005fc62) main_image_pane_t3

0x36d7,	// (0x0005fc8a) main_image_pane_t4_ParamLimits

0x36d7,	// (0x0005fc8a) main_image_pane_t4

0x0003,

0xf50d,	// (0x0006bac0) main_image_pane_t_ParamLimits

0xf50d,	// (0x0006bac0) main_image_pane_t

0x36f7,	// (0x0005fcaa) popup_image_details_window_cp01

0x3701,	// (0x0005fcb4) popup_toobar_trans_pane_cp01_ParamLimits

0x3701,	// (0x0005fcb4) popup_toobar_trans_pane_cp01

0x3ecb,	// (0x0006047e) popup_image_details_window_ParamLimits

0x3ecb,	// (0x0006047e) popup_image_details_window

0xc042,	// (0x000685f5) popup_image_focus_window

0x430e,	// (0x000608c1) camera2_autofocus_pane_ParamLimits

0x430e,	// (0x000608c1) camera2_autofocus_pane

0x0991,	// (0x0005cf44) bg_popup_sub_pane_cp06

0xc64b,	// (0x00068bfe) popup_image_focus_window_g1

0xc653,	// (0x00068c06) popup_image_focus_window_g2

0xc65b,	// (0x00068c0e) popup_image_focus_window_g3

0xc663,	// (0x00068c16) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0006bccf) popup_image_focus_window_g

0xc66b,	// (0x00068c1e) popup_image_focus_window_t1

0xc679,	// (0x00068c2c) popup_image_focus_window_t2

0xc689,	// (0x00068c3c) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0006bcd8) popup_image_focus_window_t

0xc697,	// (0x00068c4a) camera2_autofocus_pane_g1

0x0c11,	// (0x0005d1c4) bg_tb_trans_pane_cp01

0xc6a5,	// (0x00068c58) popup_image_details_window_g1

0xc6b8,	// (0x00068c6b) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0006bcea) popup_image_details_window_g

0xc6e1,	// (0x00068c94) popup_image_details_window_t1

0xc6f3,	// (0x00068ca6) popup_image_details_window_t2

0xc70c,	// (0x00068cbf) popup_image_details_window_t3

0xc720,	// (0x00068cd3) popup_image_details_window_t4

0xc73b,	// (0x00068cee) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0006bcf1) popup_image_details_window_t

0x9faa,	// (0x0006655d) bg_calc_paper_pane_ParamLimits

0x9fbe,	// (0x00066571) grid_highlight_pane_cp013

0x9fc8,	// (0x0006657b) list_calc_pane_ParamLimits

0x9fda,	// (0x0006658d) scroll_pane_cp024

0x9fe2,	// (0x00066595) bg_calc_display_pane_ParamLimits

0x1157,	// (0x0005d70a) calc_display_pane_t1_ParamLimits

0x1169,	// (0x0005d71c) calc_display_pane_t2_ParamLimits

0x9fee,	// (0x000665a1) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0006b721) calc_display_pane_t_ParamLimits

0x122c,	// (0x0005d7df) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0006b73e) cell_calc_pane_g

0x1235,	// (0x0005d7e8) cell_calc_pane_t1

0xa065,	// (0x00066618) grid_highlight_pane_cp02_ParamLimits

0xa07b,	// (0x0006662e) toolbar_button_pane_cp01_ParamLimits

0xa07b,	// (0x0006662e) toolbar_button_pane_cp01

0xaedf,	// (0x00067492) temp_image_control_pane_ParamLimits

0xaedf,	// (0x00067492) temp_image_control_pane

0x0c11,	// (0x0005d1c4) main_mp3_pane

0xc755,	// (0x00068d08) temp_image_control_pane_g1_ParamLimits

0xc755,	// (0x00068d08) temp_image_control_pane_g1

0xc763,	// (0x00068d16) temp_image_control_pane_g2_ParamLimits

0xc763,	// (0x00068d16) temp_image_control_pane_g2

0xc775,	// (0x00068d28) temp_image_control_pane_g3_ParamLimits

0xc775,	// (0x00068d28) temp_image_control_pane_g3

0x4b3f,	// (0x000610f2) temp_image_control_pane_g4_ParamLimits

0x4b3f,	// (0x000610f2) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0006bcfc) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0006bcfc) temp_image_control_pane_g

0xc755,	// (0x00068d08) main_mp3_pane_g1

0x4b52,	// (0x00061105) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0006bd05) main_mp3_pane_g

0xc7b8,	// (0x00068d6b) main_mp3_pane_t1

0xa279,	// (0x0006682c) main_camera_pane_g8_ParamLimits

0xa279,	// (0x0006682c) main_camera_pane_g8

0x195f,	// (0x0005df12) main_video_pane_g7_ParamLimits

0x195f,	// (0x0005df12) main_video_pane_g7

0xc176,	// (0x00068729) main_camera2_pane_t7_ParamLimits

0xc176,	// (0x00068729) main_camera2_pane_t7

0xa3c5,	// (0x00066978) scroll_pane_cp025_ParamLimits

0xa3c5,	// (0x00066978) scroll_pane_cp025

0xa3d9,	// (0x0006698c) scroll_pane_cp026_ParamLimits

0xa3d9,	// (0x0006698c) scroll_pane_cp026

0xa3e8,	// (0x0006699b) wml_content_pane_ParamLimits

0x0991,	// (0x0005cf44) main_touch_calib_pane

0x4c1a,	// (0x000611cd) main_touch_calib_pane_g1

0x4c26,	// (0x000611d9) main_touch_calib_pane_g2

0x4c32,	// (0x000611e5) main_touch_calib_pane_g3

0x4c3e,	// (0x000611f1) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0006bd23) main_touch_calib_pane_g

0x4c4a,	// (0x000611fd) main_touch_calib_pane_t1

0x4c64,	// (0x00061217) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0006bd2c) main_touch_calib_pane_t

0xaaf4,	// (0x000670a7) mup_progress_pane_cp02

0xab13,	// (0x000670c6) navi_pane_g1

0xab75,	// (0x00067128) navi_pane_mp_t3

0x0c11,	// (0x0005d1c4) main_mp3_pane_ParamLimits

0x409a,	// (0x0006064d) navi_pane_ParamLimits

0xc755,	// (0x00068d08) main_mp3_pane_g1_ParamLimits

0x4b52,	// (0x00061105) main_mp3_pane_g2_ParamLimits

0x4b5e,	// (0x00061111) main_mp3_pane_g3_ParamLimits

0x4b5e,	// (0x00061111) main_mp3_pane_g3

0x4b6c,	// (0x0006111f) main_mp3_pane_g4_ParamLimits

0x4b6c,	// (0x0006111f) main_mp3_pane_g4

0xc785,	// (0x00068d38) main_mp3_pane_g5_ParamLimits

0xc785,	// (0x00068d38) main_mp3_pane_g5

0xc793,	// (0x00068d46) main_mp3_pane_g6_ParamLimits

0xc793,	// (0x00068d46) main_mp3_pane_g6

0xc7a0,	// (0x00068d53) main_mp3_pane_g7_ParamLimits

0xc7a0,	// (0x00068d53) main_mp3_pane_g7

0xc7ac,	// (0x00068d5f) main_mp3_pane_g8_ParamLimits

0xc7ac,	// (0x00068d5f) main_mp3_pane_g8

0xf752,	// (0x0006bd05) main_mp3_pane_g_ParamLimits

0x4b78,	// (0x0006112b) main_mp3_pane_t2

0x4b86,	// (0x00061139) main_mp3_pane_t3

0xc7c6,	// (0x00068d79) main_mp3_pane_t4

0xc7d4,	// (0x00068d87) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0006bd16) main_mp3_pane_t

0xc7e2,	// (0x00068d95) mup_progress_pane_cp01

0x09ef,	// (0x0005cfa2) aid_zoom_text_secondary2

0xc5d8,	// (0x00068b8b) list_cale_ev2_pane

0xc5e0,	// (0x00068b93) scroll_pane_cp023_ParamLimits

0x4cbc,	// (0x0006126f) field_cale_ev2_pane_ParamLimits

0x4cbc,	// (0x0006126f) field_cale_ev2_pane

0x4ce0,	// (0x00061293) field_cale_ev2_pane_g1_ParamLimits

0x4ce0,	// (0x00061293) field_cale_ev2_pane_g1

0x4cec,	// (0x0006129f) field_cale_ev2_pane_g2_ParamLimits

0x4cec,	// (0x0006129f) field_cale_ev2_pane_g2

0x4d04,	// (0x000612b7) field_cale_ev2_pane_g3_ParamLimits

0x4d04,	// (0x000612b7) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0006bd37) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0006bd37) field_cale_ev2_pane_g

0x4d28,	// (0x000612db) field_cale_ev2_pane_t1_ParamLimits

0x4d28,	// (0x000612db) field_cale_ev2_pane_t1

0x4d3f,	// (0x000612f2) field_cale_ev2_pane_t2_ParamLimits

0x4d3f,	// (0x000612f2) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0006bd40) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0006bd40) field_cale_ev2_pane_t

0x3516,	// (0x0005fac9) main_postcard_pane_g5_ParamLimits

0x3516,	// (0x0005fac9) main_postcard_pane_g5

0x352c,	// (0x0005fadf) main_postcard_pane_g6_ParamLimits

0x352c,	// (0x0005fadf) main_postcard_pane_g6

0x170b,	// (0x0005dcbe) camera2_autofocus_pane_cp_ParamLimits

0x170b,	// (0x0005dcbe) camera2_autofocus_pane_cp

0x0c11,	// (0x0005d1c4) main_mup3_pane

0x4d74,	// (0x00061327) main_mup3_pane_g1_ParamLimits

0x4d74,	// (0x00061327) main_mup3_pane_g1

0x4d96,	// (0x00061349) main_mup3_pane_g2_ParamLimits

0x4d96,	// (0x00061349) main_mup3_pane_g2

0x4e19,	// (0x000613cc) main_mup3_pane_g3_ParamLimits

0x4e19,	// (0x000613cc) main_mup3_pane_g3

0x4e61,	// (0x00061414) main_mup3_pane_g4_ParamLimits

0x4e61,	// (0x00061414) main_mup3_pane_g4

0x4ea9,	// (0x0006145c) main_mup3_pane_g5_ParamLimits

0x4ea9,	// (0x0006145c) main_mup3_pane_g5

0x4ef1,	// (0x000614a4) main_mup3_pane_g6_ParamLimits

0x4ef1,	// (0x000614a4) main_mup3_pane_g6

0xc7ea,	// (0x00068d9d) main_mup3_pane_g7_ParamLimits

0xc7ea,	// (0x00068d9d) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0006bd50) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0006bd50) main_mup3_pane_g

0x4f71,	// (0x00061524) main_mup3_pane_t1_ParamLimits

0x4f71,	// (0x00061524) main_mup3_pane_t1

0x4fe3,	// (0x00061596) main_mup3_pane_t2_ParamLimits

0x4fe3,	// (0x00061596) main_mup3_pane_t2

0x50b9,	// (0x0006166c) main_mup3_pane_t4_ParamLimits

0x50b9,	// (0x0006166c) main_mup3_pane_t4

0x5117,	// (0x000616ca) main_mup3_pane_t5_ParamLimits

0x5117,	// (0x000616ca) main_mup3_pane_t5

0x51d3,	// (0x00061786) main_mup3_pane_t6_ParamLimits

0x51d3,	// (0x00061786) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0006bd61) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0006bd61) main_mup3_pane_t

0x5289,	// (0x0006183c) mup3_progress_pane_ParamLimits

0x5289,	// (0x0006183c) mup3_progress_pane

0x531d,	// (0x000618d0) popup_mup3_control_window_ParamLimits

0x531d,	// (0x000618d0) popup_mup3_control_window

0xc7f8,	// (0x00068dab) popup_mup3_text_window

0x5353,	// (0x00061906) mup3_progress_pane_t1

0x536a,	// (0x0006191d) mup3_progress_pane_t2

0xc800,	// (0x00068db3) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0006bd6e) mup3_progress_pane_t

0xc817,	// (0x00068dca) mup_progress_pane_cp03

0x0991,	// (0x0005cf44) bg_tb_trans_pane_cp04

0x5381,	// (0x00061934) mup3_volume_pane

0x5389,	// (0x0006193c) popup_mup3_control_window_g1

0x5392,	// (0x00061945) mup3_volume_pane_g1

0x539b,	// (0x0006194e) mup3_volume_pane_g2

0x53a4,	// (0x00061957) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0006bd75) mup3_volume_pane_g

0x0991,	// (0x0005cf44) bg_tb_trans_pane_cp03

0xc827,	// (0x00068dda) popup_mup3_text_window_g1

0xc82f,	// (0x00068de2) popup_mup3_text_window_t1

0xa03c,	// (0x000665ef) list_calc_item_pane_g1_ParamLimits

0xc25e,	// (0x00068811) mup_volume_pane_cp_g1

0x4c7e,	// (0x00061231) main_touch_calib_pane_t3

0x4c92,	// (0x00061245) main_touch_calib_pane_t4

0x4ca6,	// (0x00061259) main_touch_calib_pane_t5

0x099b,	// (0x0005cf4e) aid_cell_size_toolbar2

0x09a3,	// (0x0005cf56) aid_popup3_width_pane

0x09df,	// (0x0005cf92) aid_zoom_text_msg_primary

0xa259,	// (0x0006680c) vorec_t7

0xa000,	// (0x000665b3) bg_calc_paper_pane_g1_ParamLimits

0xa00c,	// (0x000665bf) bg_calc_paper_pane_g2_ParamLimits

0xa018,	// (0x000665cb) bg_calc_paper_pane_g3_ParamLimits

0xa024,	// (0x000665d7) bg_calc_paper_pane_g4_ParamLimits

0xa030,	// (0x000665e3) bg_calc_paper_pane_g5_ParamLimits

0x11b6,	// (0x0005d769) bg_calc_paper_pane_g6_ParamLimits

0x11c9,	// (0x0005d77c) bg_calc_paper_pane_g7_ParamLimits

0x11dc,	// (0x0005d78f) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0006b728) bg_calc_paper_pane_g_ParamLimits

0x11ed,	// (0x0005d7a0) calc_bg_paper_pane_g9_ParamLimits

0x186d,	// (0x0005de20) image_qvga_pane_ParamLimits

0x186d,	// (0x0005de20) image_qvga_pane

0x9ee3,	// (0x00066496) bg_popup_sub_pane_cp04_ParamLimits

0xae16,	// (0x000673c9) popup_mup_playback_window_g1_ParamLimits

0xae22,	// (0x000673d5) popup_mup_playback_window_t1_ParamLimits

0xae37,	// (0x000673ea) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0006bab4) popup_mup_playback_window_t_ParamLimits

0x4792,	// (0x00060d45) main_mup2_pane_g3_ParamLimits

0x4792,	// (0x00060d45) main_mup2_pane_g3

0x1c75,	// (0x0005e228) popup_toolbar_window_cp04

0xb232,	// (0x000677e5) popup_call2_audio_second_window_g3_ParamLimits

0xb232,	// (0x000677e5) popup_call2_audio_second_window_g3

0xb63c,	// (0x00067bef) popup_call2_audio_first_window_g4_ParamLimits

0xb63c,	// (0x00067bef) popup_call2_audio_first_window_g4

0xbcbb,	// (0x0006826e) popup_call2_audio_in_window_g4_ParamLimits

0xbcbb,	// (0x0006826e) popup_call2_audio_in_window_g4

0x365d,	// (0x0005fc10) aid_area_sk_bg_cut_ParamLimits

0x365d,	// (0x0005fc10) aid_area_sk_bg_cut

0xae4c,	// (0x000673ff) aid_area_sk_bg_cut_2_ParamLimits

0xae4c,	// (0x000673ff) aid_area_sk_bg_cut_2

0x4aa0,	// (0x00061053) aid_placing_details_win

0x4aa8,	// (0x0006105b) aid_placing_details_win_2

0xc697,	// (0x00068c4a) camera2_autofocus_pane_g1_ParamLimits

0x0bb2,	// (0x0005d165) popup_fixed_preview_cale_window_ParamLimits

0x0bb2,	// (0x0005d165) popup_fixed_preview_cale_window

0xabcd,	// (0x00067180) navi_slider_pane_g3

0xabd6,	// (0x00067189) navi_slider_pane_g4

0xabdf,	// (0x00067192) navi_slider_pane_g5

0xabcd,	// (0x00067180) navi_slider_pane_g6

0xabe8,	// (0x0006719b) navi_slider_pane_g7

0xad0b,	// (0x000672be) mup_scale_pane_g3

0xad14,	// (0x000672c7) mup_scale_pane_g4

0xad1d,	// (0x000672d0) mup_scale_pane_g5

0x32dd,	// (0x0005f890) mup_scale_pane_g6

0x32e6,	// (0x0005f899) mup_scale_pane_g7

0xabcd,	// (0x00067180) cams2_slider_pane_g3

0xc313,	// (0x000688c6) cams2_slider_pane_g4

0xc31b,	// (0x000688ce) cams2_slider_pane_g5

0xabcd,	// (0x00067180) cams2_slider_pane_g6

0xc323,	// (0x000688d6) cams2_slider_pane_g7

0xc555,	// (0x00068b08) camera2_autofocus_pane_cp_g1

0xc83d,	// (0x00068df0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc83d,	// (0x00068df0) bg_popup_preview_window_pane_cp02

0xc849,	// (0x00068dfc) list_fp_cale_pane_ParamLimits

0xc849,	// (0x00068dfc) list_fp_cale_pane

0xc855,	// (0x00068e08) popup_fixed_preview_cale_window_t1_ParamLimits

0xc855,	// (0x00068e08) popup_fixed_preview_cale_window_t1

0x53ad,	// (0x00061960) popup_fixed_preview_cale_window_t2_ParamLimits

0x53ad,	// (0x00061960) popup_fixed_preview_cale_window_t2

0x53c2,	// (0x00061975) popup_fixed_preview_cale_window_t3_ParamLimits

0x53c2,	// (0x00061975) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0006bd7c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0006bd7c) popup_fixed_preview_cale_window_t

0xc873,	// (0x00068e26) list_single_fp_cale_pane_ParamLimits

0xc873,	// (0x00068e26) list_single_fp_cale_pane

0xc88b,	// (0x00068e3e) list_single_fp_cale_pane_g1_ParamLimits

0xc88b,	// (0x00068e3e) list_single_fp_cale_pane_g1

0xc897,	// (0x00068e4a) list_single_fp_cale_pane_g2_ParamLimits

0xc897,	// (0x00068e4a) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0006bd83) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0006bd83) list_single_fp_cale_pane_g

0xc8b0,	// (0x00068e63) list_single_fp_cale_pane_t1_ParamLimits

0xc8b0,	// (0x00068e63) list_single_fp_cale_pane_t1

0xc8c2,	// (0x00068e75) list_single_fp_cale_pane_t2_ParamLimits

0xc8c2,	// (0x00068e75) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0006bd8a) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0006bd8a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0991,	// (0x0005cf44) main_dialer_pane

0x53d9,	// (0x0006198c) aid_cell_size_keypad

0x53e3,	// (0x00061996) dialer_ne_pane

0x53ed,	// (0x000619a0) grid_dialer_command_1_pane

0x53f5,	// (0x000619a8) grid_dialer_command_2_pane

0x53fd,	// (0x000619b0) grid_dialer_keypad_pane

0x5411,	// (0x000619c4) bg_popup_call_pane_cp06_ParamLimits

0x5411,	// (0x000619c4) bg_popup_call_pane_cp06

0x541d,	// (0x000619d0) dialer_ne_clear_pane_ParamLimits

0x541d,	// (0x000619d0) dialer_ne_clear_pane

0xc8f5,	// (0x00068ea8) dialer_ne_pane_g1

0xc8fd,	// (0x00068eb0) dialer_ne_pane_t1_ParamLimits

0xc8fd,	// (0x00068eb0) dialer_ne_pane_t1

0x5429,	// (0x000619dc) dialer_ne_pane_t2_ParamLimits

0x5429,	// (0x000619dc) dialer_ne_pane_t2

0x5453,	// (0x00061a06) dialer_ne_pane_t3_ParamLimits

0x5453,	// (0x00061a06) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0006bd8f) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0006bd8f) dialer_ne_pane_t

0x5483,	// (0x00061a36) dialer_ne_pane_t3_copy1_ParamLimits

0x5483,	// (0x00061a36) dialer_ne_pane_t3_copy1

0x54b2,	// (0x00061a65) cell_dialer_keypad_pane_ParamLimits

0x54b2,	// (0x00061a65) cell_dialer_keypad_pane

0x54c9,	// (0x00061a7c) cell_dialer_command_1_pane_ParamLimits

0x54c9,	// (0x00061a7c) cell_dialer_command_1_pane

0x54df,	// (0x00061a92) cell_dialer_command_2_pane_ParamLimits

0x54df,	// (0x00061a92) cell_dialer_command_2_pane

0xc90f,	// (0x00068ec2) bg_button_pane_cp02_ParamLimits

0xc90f,	// (0x00068ec2) bg_button_pane_cp02

0x54ee,	// (0x00061aa1) cell_dialer_keypad_pane_g1_ParamLimits

0x54ee,	// (0x00061aa1) cell_dialer_keypad_pane_g1

0xc90f,	// (0x00068ec2) bg_button_pane_cp03_ParamLimits

0xc90f,	// (0x00068ec2) bg_button_pane_cp03

0x5503,	// (0x00061ab6) cell_dialer_command_1_pane_g1_ParamLimits

0x5503,	// (0x00061ab6) cell_dialer_command_1_pane_g1

0xc91b,	// (0x00068ece) bg_button_pane_cp04

0x5517,	// (0x00061aca) cell_dialer_command_2_pane_g1

0xabb3,	// (0x00067166) bg_button_pane_cp06

0xc923,	// (0x00068ed6) dialer_ne_clear_pane_g1

0x2dc1,	// (0x0005f374) navi_pane_g2

0x2def,	// (0x0005f3a2) navi_pane_g3

0x0002,

0xf404,	// (0x0006b9b7) navi_pane_g

0x2e1a,	// (0x0005f3cd) navi_pane_mv_g2

0x2e41,	// (0x0005f3f4) navi_pane_mv_g5

0x2e49,	// (0x0005f3fc) navi_pane_mv_t1

0x9fe2,	// (0x00066595) main_clock2_pane

0x5551,	// (0x00061b04) main_clock2_list_pane_ParamLimits

0x5551,	// (0x00061b04) main_clock2_list_pane

0x558b,	// (0x00061b3e) main_clock2_pane_t1_ParamLimits

0x558b,	// (0x00061b3e) main_clock2_pane_t1

0x55c7,	// (0x00061b7a) main_clock2_pane_t2_ParamLimits

0x55c7,	// (0x00061b7a) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0006bd96) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0006bd96) main_clock2_pane_t

0x5656,	// (0x00061c09) popup_clock_analogue_window_cp03_ParamLimits

0x5656,	// (0x00061c09) popup_clock_analogue_window_cp03

0x567d,	// (0x00061c30) popup_clock_digital_window_cp02_ParamLimits

0x567d,	// (0x00061c30) popup_clock_digital_window_cp02

0x56f8,	// (0x00061cab) main_clock2_list_single_pane_ParamLimits

0x56f8,	// (0x00061cab) main_clock2_list_single_pane

0xabb3,	// (0x00067166) list_highlight_pane_cp05

0xc92b,	// (0x00068ede) main_clock2_list_single_pane_t1

0x1c75,	// (0x0005e228) popup_toolbar_window_cp04_ParamLimits

0x4b0f,	// (0x000610c2) camera2_autofocus_pane_g2_ParamLimits

0x4b0f,	// (0x000610c2) camera2_autofocus_pane_g2

0x4b1b,	// (0x000610ce) camera2_autofocus_pane_g3_ParamLimits

0x4b1b,	// (0x000610ce) camera2_autofocus_pane_g3

0x4b27,	// (0x000610da) camera2_autofocus_pane_g4_ParamLimits

0x4b27,	// (0x000610da) camera2_autofocus_pane_g4

0x4b33,	// (0x000610e6) camera2_autofocus_pane_g5_ParamLimits

0x4b33,	// (0x000610e6) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0006bcdf) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0006bcdf) camera2_autofocus_pane_g

0x4d54,	// (0x00061307) camera2_autofocus_pane_cp_g2

0x4d5c,	// (0x0006130f) camera2_autofocus_pane_cp_g3

0x4d64,	// (0x00061317) camera2_autofocus_pane_cp_g4

0x4d6c,	// (0x0006131f) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0006bd45) camera2_autofocus_pane_cp_g

0x5409,	// (0x000619bc) popup_dialer_spcha_window

0x0991,	// (0x0005cf44) bg_popup_sub_pane_cp07

0xc939,	// (0x00068eec) list_spcha_pane

0xc941,	// (0x00068ef4) list_single_spcha_pane_ParamLimits

0xc941,	// (0x00068ef4) list_single_spcha_pane

0x0991,	// (0x0005cf44) list_highlight_pane_cp06

0xc952,	// (0x00068f05) list_single_spcha_pane_t1

0xba65,	// (0x00068018) popup_call2_audio_out_window_g4_ParamLimits

0xba65,	// (0x00068018) popup_call2_audio_out_window_g4

0x0991,	// (0x0005cf44) main_imed2_pane

0xc04c,	// (0x000685ff) popup_imed_adjust2_window

0x3ee3,	// (0x00060496) popup_imed_trans_window_ParamLimits

0x3ee3,	// (0x00060496) popup_imed_trans_window

0xc38d,	// (0x00068940) popup_blid_sat_info2_window_t1

0xc39b,	// (0x0006894e) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0006bc74) popup_blid_sat_info2_window_t

0x57ae,	// (0x00061d61) aid_size_cell_colour_35

0x57ce,	// (0x00061d81) aid_size_cell_colour_112

0x57ee,	// (0x00061da1) aid_size_cell_effect

0xc020,	// (0x000685d3) bg_tb_trans_pane_cp02

0xa6a4,	// (0x00066c57) heading_imed_pane

0x580e,	// (0x00061dc1) listscroll_imed_pane

0xc960,	// (0x00068f13) heading_imed_pane_g1

0xc968,	// (0x00068f1b) heading_imed_pane_t1

0xc976,	// (0x00068f29) grid_imed_colour_35_pane_ParamLimits

0xc976,	// (0x00068f29) grid_imed_colour_35_pane

0x581a,	// (0x00061dcd) grid_imed_effect_pane

0xc992,	// (0x00068f45) list_imed_aspect_pane

0x5831,	// (0x00061de4) scroll_pane_cp027_ParamLimits

0x5831,	// (0x00061de4) scroll_pane_cp027

0x5842,	// (0x00061df5) cell_imed_effect_pane_ParamLimits

0x5842,	// (0x00061df5) cell_imed_effect_pane

0xc99a,	// (0x00068f4d) cell_imed_colour_pane_ParamLimits

0xc99a,	// (0x00068f4d) cell_imed_colour_pane

0xc9e4,	// (0x00068f97) cell_imed_colour_pane_g1_ParamLimits

0xc9e4,	// (0x00068f97) cell_imed_colour_pane_g1

0xc9f5,	// (0x00068fa8) hgihlgiht_grid_pane_cp016_ParamLimits

0xc9f5,	// (0x00068fa8) hgihlgiht_grid_pane_cp016

0x5867,	// (0x00061e1a) cell_imed_effect_pane_g1

0x586f,	// (0x00061e22) grid_highlight_pane_cp017

0xca06,	// (0x00068fb9) list_imed_single_pane_ParamLimits

0xca06,	// (0x00068fb9) list_imed_single_pane

0x0991,	// (0x0005cf44) list_highlight_pane_cp07

0xca1a,	// (0x00068fcd) list_imed_aspect_pane_comp1_t1

0xc020,	// (0x000685d3) bg_tb_trans_pane_cp05

0xca3c,	// (0x00068fef) popup_imed_adjust2_window_g1

0xca63,	// (0x00069016) popup_imed_adjust2_window_t1

0xca7b,	// (0x0006902e) slider_imed_adjust_pane

0xca8f,	// (0x00069042) slider_imed_adjust_pane_g1

0xca9f,	// (0x00069052) slider_imed_adjust_pane_g2

0xcaaf,	// (0x00069062) slider_imed_adjust_pane_g3

0xcac0,	// (0x00069073) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0006bdb3) slider_imed_adjust_pane_g

0x5878,	// (0x00061e2b) aid_size_cell_clipart2

0x5884,	// (0x00061e37) grid_imed_clipart_pane

0xcad1,	// (0x00069084) scroll_pane_cp031

0x588e,	// (0x00061e41) cell_imed_clipart_pane_ParamLimits

0x588e,	// (0x00061e41) cell_imed_clipart_pane

0x58ab,	// (0x00061e5e) cell_imed_clipart_pane_g1

0x0991,	// (0x0005cf44) grid_highlight_pane_cp014

0x5566,	// (0x00061b19) main_clock2_pane_g1_ParamLimits

0x5566,	// (0x00061b19) main_clock2_pane_g1

0x569f,	// (0x00061c52) aid_call2_pane_cp10

0x56b1,	// (0x00061c64) aid_call_pane_cp10

0xaae8,	// (0x0006709b) popup_clock_analogue_window_cp10_g1

0xaae8,	// (0x0006709b) popup_clock_analogue_window_cp10_g2

0x56c3,	// (0x00061c76) popup_clock_analogue_window_cp10_g3

0x56c3,	// (0x00061c76) popup_clock_analogue_window_cp10_g4

0xaae8,	// (0x0006709b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0006bda1) popup_clock_analogue_window_cp10_g

0x56d9,	// (0x00061c8c) popup_clock_analogue_window_cp10_t1

0x570a,	// (0x00061cbd) clock_digital_number_pane_cp10_ParamLimits

0x570a,	// (0x00061cbd) clock_digital_number_pane_cp10

0x5724,	// (0x00061cd7) clock_digital_number_pane_cp11_ParamLimits

0x5724,	// (0x00061cd7) clock_digital_number_pane_cp11

0x573e,	// (0x00061cf1) clock_digital_number_pane_cp12_ParamLimits

0x573e,	// (0x00061cf1) clock_digital_number_pane_cp12

0x5758,	// (0x00061d0b) clock_digital_number_pane_cp13_ParamLimits

0x5758,	// (0x00061d0b) clock_digital_number_pane_cp13

0x5772,	// (0x00061d25) clock_digital_separator_pane_cp10_ParamLimits

0x5772,	// (0x00061d25) clock_digital_separator_pane_cp10

0x578c,	// (0x00061d3f) popup_clock_digital_window_cp02_t1_ParamLimits

0x578c,	// (0x00061d3f) popup_clock_digital_window_cp02_t1

0x9edb,	// (0x0006648e) clock_digital_number_pane_cp10_g1

0x9edb,	// (0x0006648e) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0006bdbc) clock_digital_number_pane_cp10_g

0x9edb,	// (0x0006648e) clock_digital_separator_pane_cp10_g1

0x9edb,	// (0x0006648e) clock_digital_separator_pane_g2_cp10

0xab83,	// (0x00067136) navi_pane_vded_g4

0xab8c,	// (0x0006713f) navi_pane_vded_g5

0xab95,	// (0x00067148) navi_pane_vded_t1

0x0991,	// (0x0005cf44) main_vded_pane

0x58b4,	// (0x00061e67) main_vded_pane_g1

0x58c0,	// (0x00061e73) main_vded_pane_g2

0x58cc,	// (0x00061e7f) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0006bdc1) main_vded_pane_g

0x58d8,	// (0x00061e8b) main_vded_pane_t1

0x58e6,	// (0x00061e99) main_vded_pane_t2

0x0001,

0xf815,	// (0x0006bdc8) main_vded_pane_t

0x58f4,	// (0x00061ea7) vded_slider_pane

0x58fe,	// (0x00061eb1) vded_video_pane

0xcad9,	// (0x0006908c) vded_video_pane_g1

0x590a,	// (0x00061ebd) vded_video_pane_g2

0xc555,	// (0x00068b08) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0006bdcd) vded_video_pane_g

0xcae3,	// (0x00069096) vded_slider_pane_g1

0xc25e,	// (0x00068811) vded_slider_pane_g2

0xcaec,	// (0x0006909f) vded_slider_pane_g3

0xcaf5,	// (0x000690a8) vded_slider_pane_g4

0xcafe,	// (0x000690b1) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0006bdd4) vded_slider_pane_g

0x5307,	// (0x000618ba) mup3_rocker_pane_ParamLimits

0x5307,	// (0x000618ba) mup3_rocker_pane

0x5913,	// (0x00061ec6) mup3_control_keys_pane_g1

0x591b,	// (0x00061ece) mup3_control_keys_pane_g2

0x5923,	// (0x00061ed6) mup3_control_keys_pane_g3

0x592b,	// (0x00061ede) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0006bddf) mup3_control_keys_pane_g

0x0bf3,	// (0x0005d1a6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bf3,	// (0x0005d1a6) popup_toolbar2_fixed_window_cp01

0x533d,	// (0x000618f0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x533d,	// (0x000618f0) popup_toolbar2_fixed_window_cp02

0xb3a4,	// (0x00067957) popup_call2_audio_second_window_t4_ParamLimits

0xb3a4,	// (0x00067957) popup_call2_audio_second_window_t4

0xb8d2,	// (0x00067e85) popup_call2_audio_first_window_t6_ParamLimits

0xb8d2,	// (0x00067e85) popup_call2_audio_first_window_t6

0xbb68,	// (0x0006811b) popup_call2_audio_out_window_t6_ParamLimits

0xbb68,	// (0x0006811b) popup_call2_audio_out_window_t6

0x0991,	// (0x0005cf44) main_vitu_pane

0x593b,	// (0x00061eee) aid_size_cell_itu_ParamLimits

0x593b,	// (0x00061eee) aid_size_cell_itu

0x0c11,	// (0x0005d1c4) bg_popup_window_pane_cp08_ParamLimits

0x0c11,	// (0x0005d1c4) bg_popup_window_pane_cp08

0x5951,	// (0x00061f04) field_vitu_entry_pane_ParamLimits

0x5951,	// (0x00061f04) field_vitu_entry_pane

0x5968,	// (0x00061f1b) grid_vitu_function_pane_ParamLimits

0x5968,	// (0x00061f1b) grid_vitu_function_pane

0x5983,	// (0x00061f36) grid_vitu_itu_pane_ParamLimits

0x5983,	// (0x00061f36) grid_vitu_itu_pane

0x599f,	// (0x00061f52) cell_vitu_itu_pane_ParamLimits

0x599f,	// (0x00061f52) cell_vitu_itu_pane

0x59c5,	// (0x00061f78) cell_vitu_function_pane_ParamLimits

0x59c5,	// (0x00061f78) cell_vitu_function_pane

0x0c11,	// (0x0005d1c4) bg_popup_sub_pane_cp08_ParamLimits

0x0c11,	// (0x0005d1c4) bg_popup_sub_pane_cp08

0x59e0,	// (0x00061f93) field_vitu_entry_pane_t1_ParamLimits

0x59e0,	// (0x00061f93) field_vitu_entry_pane_t1

0xcb1f,	// (0x000690d2) field_vitu_entry_pane_t2_ParamLimits

0xcb1f,	// (0x000690d2) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0006bded) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0006bded) field_vitu_entry_pane_t

0xcb3c,	// (0x000690ef) bg_button_pane_cp05_ParamLimits

0xcb3c,	// (0x000690ef) bg_button_pane_cp05

0x5a00,	// (0x00061fb3) cell_vitu_itu_pane_g1

0x5a18,	// (0x00061fcb) cell_vitu_itu_pane_t1_ParamLimits

0x5a18,	// (0x00061fcb) cell_vitu_itu_pane_t1

0x5a2a,	// (0x00061fdd) cell_vitu_itu_pane_t2_ParamLimits

0x5a2a,	// (0x00061fdd) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0006bdf2) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0006bdf2) cell_vitu_itu_pane_t

0xcb4a,	// (0x000690fd) bg_button_pane_cp07

0x5a5f,	// (0x00062012) cell_vitu_function_pane_g1

0x9f6a,	// (0x0006651d) main_calc_pane_g1

0x09d3,	// (0x0005cf86) aid_visual_content_pane

0x0991,	// (0x0005cf44) main_vradio_pane

0x5a68,	// (0x0006201b) main_vradio_pane_g1_ParamLimits

0x5a68,	// (0x0006201b) main_vradio_pane_g1

0xcb54,	// (0x00069107) main_vradio_pane_g2_ParamLimits

0xcb54,	// (0x00069107) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0006bdf9) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0006bdf9) main_vradio_pane_g

0x5a7f,	// (0x00062032) main_vradio_pane_t1_ParamLimits

0x5a7f,	// (0x00062032) main_vradio_pane_t1

0x5a94,	// (0x00062047) main_vradio_pane_t2_ParamLimits

0x5a94,	// (0x00062047) main_vradio_pane_t2

0xcb61,	// (0x00069114) main_vradio_pane_t3_ParamLimits

0xcb61,	// (0x00069114) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0006bdfe) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0006bdfe) main_vradio_pane_t

0x5aa9,	// (0x0006205c) vradio_rocker_control_pane_ParamLimits

0x5aa9,	// (0x0006205c) vradio_rocker_control_pane

0x5abb,	// (0x0006206e) vradio_station_info_pane_ParamLimits

0x5abb,	// (0x0006206e) vradio_station_info_pane

0xcb75,	// (0x00069128) vradio_frequency_info_pane_ParamLimits

0xcb75,	// (0x00069128) vradio_frequency_info_pane

0xc555,	// (0x00068b08) vradio_station_info_pane_g1

0xcb84,	// (0x00069137) vradio_station_info_pane_t1_ParamLimits

0xcb84,	// (0x00069137) vradio_station_info_pane_t1

0xcba6,	// (0x00069159) vradio_station_info_pane_t2_ParamLimits

0xcba6,	// (0x00069159) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0006be05) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0006be05) vradio_station_info_pane_t

0xcbb8,	// (0x0006916b) vradio_tuning_pane

0xcbc0,	// (0x00069173) vradio_rocker_control_pane_g1

0xcbc8,	// (0x0006917b) vradio_rocker_control_pane_g2

0xcbd0,	// (0x00069183) vradio_rocker_control_pane_g3

0xcbd8,	// (0x0006918b) vradio_rocker_control_pane_g4

0xcbe0,	// (0x00069193) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0006be0a) vradio_rocker_control_pane_g

0x5acb,	// (0x0006207e) vradio_frequency_info_pane_g1

0xcbe8,	// (0x0006919b) vradio_frequency_info_pane_t1_ParamLimits

0xcbe8,	// (0x0006919b) vradio_frequency_info_pane_t1

0x5ad5,	// (0x00062088) vradio_tuning_pane_g1

0x5ae0,	// (0x00062093) vradio_tuning_pane_t1

0x0a30,	// (0x0005cfe3) area_side_right_pane_ParamLimits

0x0a30,	// (0x0005cfe3) area_side_right_pane

0xbfe7,	// (0x0006859a) status_small_pane_g1

0xbfef,	// (0x000685a2) status_small_pane_g2

0xbff8,	// (0x000685ab) status_small_pane_g3

0xc001,	// (0x000685b4) status_small_pane_g4

0x0003,

0xf617,	// (0x0006bbca) status_small_pane_g

0xc00a,	// (0x000685bd) status_small_pane_t1

0x0991,	// (0x0005cf44) main_video3_pane

0xcbfc,	// (0x000691af) cams_zoom_vslider_pane

0xcc04,	// (0x000691b7) image3_wide_pane_ParamLimits

0xcc04,	// (0x000691b7) image3_wide_pane

0xcc1e,	// (0x000691d1) image3_wide_small_pane

0xcc2a,	// (0x000691dd) main_video3_pane_g1_ParamLimits

0xcc2a,	// (0x000691dd) main_video3_pane_g1

0xcc46,	// (0x000691f9) main_video3_pane_g2_ParamLimits

0xcc46,	// (0x000691f9) main_video3_pane_g2

0x0001,

0xf862,	// (0x0006be15) main_video3_pane_g_ParamLimits

0xf862,	// (0x0006be15) main_video3_pane_g

0xcc62,	// (0x00069215) main_video3_pane_t1_ParamLimits

0xcc62,	// (0x00069215) main_video3_pane_t1

0xcc8d,	// (0x00069240) main_video3_pane_t2_ParamLimits

0xcc8d,	// (0x00069240) main_video3_pane_t2

0xccba,	// (0x0006926d) main_video3_pane_t3_ParamLimits

0xccba,	// (0x0006926d) main_video3_pane_t3

0x0002,

0xf867,	// (0x0006be1a) main_video3_pane_t_ParamLimits

0xf867,	// (0x0006be1a) main_video3_pane_t

0xcce7,	// (0x0006929a) cams_zoom_vslider_pane_g1

0xccf0,	// (0x000692a3) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0006be21) cams_zoom_vslider_pane_g

0xccf8,	// (0x000692ab) small_slider_vertical_pane

0xc555,	// (0x00068b08) small_slider_vertical_pane_g1

0xc555,	// (0x00068b08) small_slider_vertical_pane_g2

0xcd00,	// (0x000692b3) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0006be26) small_slider_vertical_pane_g

0x0991,	// (0x0005cf44) main_hwr_training_pane

0xcd09,	// (0x000692bc) hwr_training_instruct_pane_ParamLimits

0xcd09,	// (0x000692bc) hwr_training_instruct_pane

0x5aef,	// (0x000620a2) hwr_training_navi_pane_ParamLimits

0x5aef,	// (0x000620a2) hwr_training_navi_pane

0x5b0e,	// (0x000620c1) hwr_training_write_pane_ParamLimits

0x5b0e,	// (0x000620c1) hwr_training_write_pane

0x0991,	// (0x0005cf44) bg_frame_shadow_pane

0xcd40,	// (0x000692f3) hwr_training_write_pane_g1

0xcd48,	// (0x000692fb) hwr_training_write_pane_g2

0xcd50,	// (0x00069303) hwr_training_write_pane_g3

0xcd58,	// (0x0006930b) hwr_training_write_pane_g4

0xcd60,	// (0x00069313) hwr_training_write_pane_g5

0xcd68,	// (0x0006931b) hwr_training_write_pane_g6

0xcd70,	// (0x00069323) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0006be2d) hwr_training_write_pane_g

0xda4a,	// (0x00069ffd) hwr_training_navi_pane_g1_ParamLimits

0xda4a,	// (0x00069ffd) hwr_training_navi_pane_g1

0xda5c,	// (0x0006a00f) hwr_training_navi_pane_g2_ParamLimits

0xda5c,	// (0x0006a00f) hwr_training_navi_pane_g2

0xda6e,	// (0x0006a021) hwr_training_navi_pane_g3_ParamLimits

0xda6e,	// (0x0006a021) hwr_training_navi_pane_g3

0xda7e,	// (0x0006a031) hwr_training_navi_pane_g4_ParamLimits

0xda7e,	// (0x0006a031) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0006be3c) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0006be3c) hwr_training_navi_pane_g

0xda8b,	// (0x0006a03e) hwr_training_navi_pane_t1

0x5b56,	// (0x00062109) list_single_hwr_training_instruct_pane_ParamLimits

0x5b56,	// (0x00062109) list_single_hwr_training_instruct_pane

0xcd78,	// (0x0006932b) list_single_hwr_training_instruct_pane_t1

0xc495,	// (0x00068a48) bg_frame_shadow_pane_g1

0xcd87,	// (0x0006933a) bg_frame_shadow_pane_g2

0xcd8f,	// (0x00069342) bg_frame_shadow_pane_g3

0xcd97,	// (0x0006934a) bg_frame_shadow_pane_g4

0xcd9f,	// (0x00069352) bg_frame_shadow_pane_g5

0xcda7,	// (0x0006935a) bg_frame_shadow_pane_g6

0xcdaf,	// (0x00069362) bg_frame_shadow_pane_g7

0xa0db,	// (0x0006668e) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0006be47) bg_frame_shadow_pane_g

0x0991,	// (0x0005cf44) main_video_tele_dialer_pane

0x5b72,	// (0x00062125) aid_size_cell_video_keypad_ParamLimits

0x5b72,	// (0x00062125) aid_size_cell_video_keypad

0x5b8c,	// (0x0006213f) grid_video_dialer_keypad_pane_ParamLimits

0x5b8c,	// (0x0006213f) grid_video_dialer_keypad_pane

0x5bd8,	// (0x0006218b) video_down_pane_cp_ParamLimits

0x5bd8,	// (0x0006218b) video_down_pane_cp

0x5c08,	// (0x000621bb) cell_video_dialer_keypad_pane_ParamLimits

0x5c08,	// (0x000621bb) cell_video_dialer_keypad_pane

0xcdb7,	// (0x0006936a) bg_button_pane_cp08_ParamLimits

0xcdb7,	// (0x0006936a) bg_button_pane_cp08

0x5c2e,	// (0x000621e1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c2e,	// (0x000621e1) cell_video_dialer_keypad_pane_g1

0x52f1,	// (0x000618a4) mup3_rocker2_pane_ParamLimits

0x52f1,	// (0x000618a4) mup3_rocker2_pane

0xc555,	// (0x00068b08) mup3_rocker2_pane_g1

0x3db0,	// (0x00060363) main_dialer2_pane

0x0991,	// (0x0005cf44) main_mp4_pane

0xdaa1,	// (0x0006a054) main_mp4_pane_g1_ParamLimits

0xdaa1,	// (0x0006a054) main_mp4_pane_g1

0xdaa1,	// (0x0006a054) main_mp4_pane_g2_ParamLimits

0xdaa1,	// (0x0006a054) main_mp4_pane_g2

0x5c69,	// (0x0006221c) main_mp4_pane_g3_ParamLimits

0x5c69,	// (0x0006221c) main_mp4_pane_g3

0xdaaf,	// (0x0006a062) main_mp4_pane_g4_ParamLimits

0xdaaf,	// (0x0006a062) main_mp4_pane_g4

0xdad7,	// (0x0006a08a) main_mp4_pane_g5_ParamLimits

0xdad7,	// (0x0006a08a) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0006be67) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0006be67) main_mp4_pane_g

0xdb27,	// (0x0006a0da) main_mp4_pane_t1_ParamLimits

0xdb27,	// (0x0006a0da) main_mp4_pane_t1

0xdb83,	// (0x0006a136) main_mp4_pane_t2_ParamLimits

0xdb83,	// (0x0006a136) main_mp4_pane_t2

0xdbd5,	// (0x0006a188) main_mp4_pane_t3_ParamLimits

0xdbd5,	// (0x0006a188) main_mp4_pane_t3

0xdbf5,	// (0x0006a1a8) main_mp4_pane_t4_ParamLimits

0xdbf5,	// (0x0006a1a8) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0006be74) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0006be74) main_mp4_pane_t

0xdc35,	// (0x0006a1e8) mp4_progress_pane_ParamLimits

0xdc35,	// (0x0006a1e8) mp4_progress_pane

0xdc7f,	// (0x0006a232) mp4_rocker_pane_ParamLimits

0xdc7f,	// (0x0006a232) mp4_rocker_pane

0xdca9,	// (0x0006a25c) mp4_progress_pane_t1

0xdcc2,	// (0x0006a275) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0006be7d) mp4_progress_pane_t

0xdcdb,	// (0x0006a28e) mup_progress_pane_cp04

0xdce7,	// (0x0006a29a) mp4_rocker_pane_g1

0x5cb3,	// (0x00062266) aid_cell_size_keypad2_ParamLimits

0x5cb3,	// (0x00062266) aid_cell_size_keypad2

0x5cc9,	// (0x0006227c) dialer2_ne_pane_ParamLimits

0x5cc9,	// (0x0006227c) dialer2_ne_pane

0x5ce1,	// (0x00062294) grid_dialer2_keypad_pane_ParamLimits

0x5ce1,	// (0x00062294) grid_dialer2_keypad_pane

0xc334,	// (0x000688e7) bg_popup_call_pane_cp07_ParamLimits

0xc334,	// (0x000688e7) bg_popup_call_pane_cp07

0x5cfd,	// (0x000622b0) dialer2_ne_pane_t1_ParamLimits

0x5cfd,	// (0x000622b0) dialer2_ne_pane_t1

0x5d3d,	// (0x000622f0) cell_dialer2_keypad_pane_ParamLimits

0x5d3d,	// (0x000622f0) cell_dialer2_keypad_pane

0xdd03,	// (0x0006a2b6) bg_button_pane_pane_cp04_ParamLimits

0xdd03,	// (0x0006a2b6) bg_button_pane_pane_cp04

0x5d63,	// (0x00062316) cell_dialer2_keypad_pane_g1_ParamLimits

0x5d63,	// (0x00062316) cell_dialer2_keypad_pane_g1

0x1b5c,	// (0x0005e10f) aid_placing_vt_set_content_ParamLimits

0x1b5c,	// (0x0005e10f) aid_placing_vt_set_content

0x1b80,	// (0x0005e133) aid_placing_vt_set_title_ParamLimits

0x1b80,	// (0x0005e133) aid_placing_vt_set_title

0x0991,	// (0x0005cf44) main_image3_pane

0x5e29,	// (0x000623dc) area_side_right_pane_cp01_ParamLimits

0x5e29,	// (0x000623dc) area_side_right_pane_cp01

0xdaa1,	// (0x0006a054) main_image3_pane_g1_ParamLimits

0xdaa1,	// (0x0006a054) main_image3_pane_g1

0x5e42,	// (0x000623f5) main_image3_pane_g2_ParamLimits

0x5e42,	// (0x000623f5) main_image3_pane_g2

0x5e6a,	// (0x0006241d) main_image3_pane_g3_ParamLimits

0x5e6a,	// (0x0006241d) main_image3_pane_g3

0x5e94,	// (0x00062447) main_image3_pane_g4_ParamLimits

0x5e94,	// (0x00062447) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0006be8c) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0006be8c) main_image3_pane_g

0x5ebe,	// (0x00062471) main_image3_pane_t1_ParamLimits

0x5ebe,	// (0x00062471) main_image3_pane_t1

0x5f16,	// (0x000624c9) main_image3_pane_t2_ParamLimits

0x5f16,	// (0x000624c9) main_image3_pane_t2

0x5f68,	// (0x0006251b) main_image3_pane_t3_ParamLimits

0x5f68,	// (0x0006251b) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0006be95) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0006be95) main_image3_pane_t

0x0c11,	// (0x0005d1c4) grid_sctrl_middle_pane_cp01_ParamLimits

0x0c11,	// (0x0005d1c4) grid_sctrl_middle_pane_cp01

0x5ff0,	// (0x000625a3) cell_sctrl_middle_pane_cp01_ParamLimits

0x5ff0,	// (0x000625a3) cell_sctrl_middle_pane_cp01

0x600d,	// (0x000625c0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x600d,	// (0x000625c0) cell_sctrl_middle_pane_cp01_g1

0x0991,	// (0x0005cf44) main_call4_pane

0x6022,	// (0x000625d5) aid_size_button_call4_ParamLimits

0x6022,	// (0x000625d5) aid_size_button_call4

0x6055,	// (0x00062608) call4_windows_pane_ParamLimits

0x6055,	// (0x00062608) call4_windows_pane

0x6077,	// (0x0006262a) grid_call4_button_pane_ParamLimits

0x6077,	// (0x0006262a) grid_call4_button_pane

0xdd43,	// (0x0006a2f6) call4_windows_conf_pane

0x60a2,	// (0x00062655) popup_call4_audio_first_window_ParamLimits

0x60a2,	// (0x00062655) popup_call4_audio_first_window

0x60ce,	// (0x00062681) popup_call4_audio_second_window_ParamLimits

0x60ce,	// (0x00062681) popup_call4_audio_second_window

0xdd80,	// (0x0006a333) popup_call4_audio_wait_window_ParamLimits

0xdd80,	// (0x0006a333) popup_call4_audio_wait_window

0x60e4,	// (0x00062697) cell_call4_button_pane_ParamLimits

0x60e4,	// (0x00062697) cell_call4_button_pane

0x610b,	// (0x000626be) bg_button_pane_cp09_ParamLimits

0x610b,	// (0x000626be) bg_button_pane_cp09

0x6117,	// (0x000626ca) cell_call4_button_pane_g1_ParamLimits

0x6117,	// (0x000626ca) cell_call4_button_pane_g1

0x613d,	// (0x000626f0) cell_call4_button_pane_t1_ParamLimits

0x613d,	// (0x000626f0) cell_call4_button_pane_t1

0xddc8,	// (0x0006a37b) popup_call4_audio_conf_window_ParamLimits

0xddc8,	// (0x0006a37b) popup_call4_audio_conf_window

0x5353,	// (0x00061906) mup3_progress_pane_t1_ParamLimits

0x536a,	// (0x0006191d) mup3_progress_pane_t2_ParamLimits

0xc800,	// (0x00068db3) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0006bd6e) mup3_progress_pane_t_ParamLimits

0xc817,	// (0x00068dca) mup_progress_pane_cp03_ParamLimits

0x5933,	// (0x00061ee6) mup3_control_keys_pane_g4_copy1

0xdc63,	// (0x0006a216) mp4_rocker2_pane_ParamLimits

0xdc63,	// (0x0006a216) mp4_rocker2_pane

0xdde2,	// (0x0006a395) mp4_rocker2_pane_g1

0xddea,	// (0x0006a39d) mp4_rocker2_pane_g2

0xddf2,	// (0x0006a3a5) mp4_rocker2_pane_g3

0xddfa,	// (0x0006a3ad) mp4_rocker2_pane_g4

0xde02,	// (0x0006a3b5) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0006be9e) mp4_rocker2_pane_g

0x0991,	// (0x0005cf44) main_camera4_pane

0x0991,	// (0x0005cf44) main_video4_pane

0x5ba6,	// (0x00062159) main_video_tele_dialer_pane_t1_ParamLimits

0x5ba6,	// (0x00062159) main_video_tele_dialer_pane_t1

0x5bbf,	// (0x00062172) main_video_tele_dialer_pane_t2_ParamLimits

0x5bbf,	// (0x00062172) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0006be58) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0006be58) main_video_tele_dialer_pane_t

0x617b,	// (0x0006272e) cam4_autofocus_pane_ParamLimits

0x617b,	// (0x0006272e) cam4_autofocus_pane

0x6191,	// (0x00062744) cam4_image_uncrop_pane_ParamLimits

0x6191,	// (0x00062744) cam4_image_uncrop_pane

0x61aa,	// (0x0006275d) cam4_indicators_pane_ParamLimits

0x61aa,	// (0x0006275d) cam4_indicators_pane

0x61d9,	// (0x0006278c) main_camera4_pane_g1_ParamLimits

0x61d9,	// (0x0006278c) main_camera4_pane_g1

0x61ec,	// (0x0006279f) main_camera4_pane_g2_ParamLimits

0x61ec,	// (0x0006279f) main_camera4_pane_g2

0x61ff,	// (0x000627b2) main_camera4_pane_g3_ParamLimits

0x61ff,	// (0x000627b2) main_camera4_pane_g3

0x6212,	// (0x000627c5) main_camera4_pane_g4_ParamLimits

0x6212,	// (0x000627c5) main_camera4_pane_g4

0x6225,	// (0x000627d8) main_camera4_pane_g5_ParamLimits

0x6225,	// (0x000627d8) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0006bea9) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0006bea9) main_camera4_pane_g

0x6249,	// (0x000627fc) main_camera4_pane_t1_ParamLimits

0x6249,	// (0x000627fc) main_camera4_pane_t1

0xde28,	// (0x0006a3db) bg_tb_trans_pane_cp06

0xde3e,	// (0x0006a3f1) cam4_indicators_pane_g1

0xde4e,	// (0x0006a401) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0006bec4) cam4_indicators_pane_g

0xde66,	// (0x0006a419) cam4_indicators_pane_t1

0x62ad,	// (0x00062860) main_video4_pane_g1_ParamLimits

0x62ad,	// (0x00062860) main_video4_pane_g1

0x62c0,	// (0x00062873) main_video4_pane_g2_ParamLimits

0x62c0,	// (0x00062873) main_video4_pane_g2

0x62d4,	// (0x00062887) main_video4_pane_g3_ParamLimits

0x62d4,	// (0x00062887) main_video4_pane_g3

0x62e8,	// (0x0006289b) main_video4_pane_g4_ParamLimits

0x62e8,	// (0x0006289b) main_video4_pane_g4

0x0004,

0xf918,	// (0x0006becb) main_video4_pane_g_ParamLimits

0xf918,	// (0x0006becb) main_video4_pane_g

0x6310,	// (0x000628c3) vid4_indicators_pane_ParamLimits

0x6310,	// (0x000628c3) vid4_indicators_pane

0x6340,	// (0x000628f3) video4_image_uncrop_cif_pane_ParamLimits

0x6340,	// (0x000628f3) video4_image_uncrop_cif_pane

0x635a,	// (0x0006290d) video4_image_uncrop_nhd_pane_ParamLimits

0x635a,	// (0x0006290d) video4_image_uncrop_nhd_pane

0x6191,	// (0x00062744) video4_image_uncrop_vga_pane_ParamLimits

0x6191,	// (0x00062744) video4_image_uncrop_vga_pane

0xde8c,	// (0x0006a43f) bg_tb_trans_pane_cp07

0x6370,	// (0x00062923) vid4_indicators_pane_g1

0x637f,	// (0x00062932) vid4_indicators_pane_g2

0x638e,	// (0x00062941) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0006bed6) vid4_indicators_pane_g

0x63b3,	// (0x00062966) vid4_indicators_pane_t1

0x63c7,	// (0x0006297a) cam4_autofocus_pane_g1

0x63cf,	// (0x00062982) cam4_autofocus_pane_g2

0x63d7,	// (0x0006298a) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0006bee1) cam4_autofocus_pane_g

0x63df,	// (0x00062992) cam4_autofocus_pane_g3_copy1

0x5bec,	// (0x0006219f) video_down_pane_cp_t1

0x5bfa,	// (0x000621ad) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0006be5d) video_down_pane_cp_t

0x0c11,	// (0x0005d1c4) popup_vitu2_window_ParamLimits

0x0c11,	// (0x0005d1c4) popup_vitu2_window

0x63e7,	// (0x0006299a) aid_size_cell2_itu2_ParamLimits

0x63e7,	// (0x0006299a) aid_size_cell2_itu2

0x640d,	// (0x000629c0) aid_size_cell_itu2_ParamLimits

0x640d,	// (0x000629c0) aid_size_cell_itu2

0x646b,	// (0x00062a1e) bg_popup_window_pane_cp09_ParamLimits

0x646b,	// (0x00062a1e) bg_popup_window_pane_cp09

0x6479,	// (0x00062a2c) field_vitu2_entry_pane_ParamLimits

0x6479,	// (0x00062a2c) field_vitu2_entry_pane

0x64a1,	// (0x00062a54) grid_vitu2_function_pane_ParamLimits

0x64a1,	// (0x00062a54) grid_vitu2_function_pane

0x64f2,	// (0x00062aa5) grid_vitu2_itu_pane_ParamLimits

0x64f2,	// (0x00062aa5) grid_vitu2_itu_pane

0x657d,	// (0x00062b30) cell_vitu2_itu_pane_ParamLimits

0x657d,	// (0x00062b30) cell_vitu2_itu_pane

0x65a3,	// (0x00062b56) cell_vitu2_function_pane_ParamLimits

0x65a3,	// (0x00062b56) cell_vitu2_function_pane

0xdea4,	// (0x0006a457) bg_popup_call_pane_cp08_ParamLimits

0xdea4,	// (0x0006a457) bg_popup_call_pane_cp08

0xdebd,	// (0x0006a470) field_vitu2_entry_pane_g1

0xdec9,	// (0x0006a47c) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0006bee8) field_vitu2_entry_pane_g

0x65e7,	// (0x00062b9a) field_vitu2_entry_pane_t1_ParamLimits

0x65e7,	// (0x00062b9a) field_vitu2_entry_pane_t1

0x6616,	// (0x00062bc9) field_vitu2_entry_pane_t2_ParamLimits

0x6616,	// (0x00062bc9) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0006beef) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0006beef) field_vitu2_entry_pane_t

0x6633,	// (0x00062be6) bg_button_pane_cp010_ParamLimits

0x6633,	// (0x00062be6) bg_button_pane_cp010

0x6641,	// (0x00062bf4) cell_vitu2_itu_pane_g1

0x665f,	// (0x00062c12) cell_vitu2_itu_pane_t1_ParamLimits

0x665f,	// (0x00062c12) cell_vitu2_itu_pane_t1

0x089d,	// (0x0005ce50) cell_vitu2_itu_pane_t2_ParamLimits

0x089d,	// (0x0005ce50) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0006bef9) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0006bef9) cell_vitu2_itu_pane_t

0xdeeb,	// (0x0006a49e) bg_button_pane_cp011

0x66c5,	// (0x00062c78) cell_vitu2_function_pane_g1

0x0991,	// (0x0005cf44) main_myfav_hc_pane

0x5fb8,	// (0x0006256b) popup_image3_note_pane_ParamLimits

0x5fb8,	// (0x0006256b) popup_image3_note_pane

0x5fd4,	// (0x00062587) popup_image3_tool_bar_pane_ParamLimits

0x5fd4,	// (0x00062587) popup_image3_tool_bar_pane

0x0921,	// (0x0005ced4) cell_vitu2_itu_pane_t3_ParamLimits

0x0921,	// (0x0005ced4) cell_vitu2_itu_pane_t3

0x0991,	// (0x0005cf44) bg_popup_trans_pane

0xdef9,	// (0x0006a4ac) grid_image3_tool_bar_pane

0xdf03,	// (0x0006a4b6) bg_popup_trans_pane_g1

0xa4ce,	// (0x00066a81) bg_popup_trans_pane_g2

0xdf0b,	// (0x0006a4be) bg_popup_trans_pane_g3

0xdf13,	// (0x0006a4c6) bg_popup_trans_pane_g4

0xdf1b,	// (0x0006a4ce) bg_popup_trans_pane_g5

0xdf23,	// (0x0006a4d6) bg_popup_trans_pane_g6

0xdf2b,	// (0x0006a4de) bg_popup_trans_pane_g7

0xdf33,	// (0x0006a4e6) bg_popup_trans_pane_g8

0xa4ae,	// (0x00066a61) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0006bf00) bg_popup_trans_pane_g

0xdf3b,	// (0x0006a4ee) cell_image3_tool_bar_pane_ParamLimits

0xdf3b,	// (0x0006a4ee) cell_image3_tool_bar_pane

0xc555,	// (0x00068b08) cell_image3_tool_bar_pane_g1

0x0991,	// (0x0005cf44) bg_popup_trans_pane_cp1

0xdf51,	// (0x0006a504) popup_image3_note_pane_t1

0xe032,	// (0x0006a5e5) popup_image3_note_pane_t2

0xe040,	// (0x0006a5f3) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0006bf13) popup_image3_note_pane_t

0xe050,	// (0x0006a603) popup_image3_note_pane_t3_copy1

0x66d9,	// (0x00062c8c) bg_myfav_hc_instruction_pane_ParamLimits

0x66d9,	// (0x00062c8c) bg_myfav_hc_instruction_pane

0x66f1,	// (0x00062ca4) cell_myfav_contact_pane_ParamLimits

0x66f1,	// (0x00062ca4) cell_myfav_contact_pane

0x670d,	// (0x00062cc0) cell_myfav_contact_pane_cp1_ParamLimits

0x670d,	// (0x00062cc0) cell_myfav_contact_pane_cp1

0x6725,	// (0x00062cd8) cell_myfav_contact_pane_cp2_ParamLimits

0x6725,	// (0x00062cd8) cell_myfav_contact_pane_cp2

0x673d,	// (0x00062cf0) cell_myfav_contact_pane_cp3_ParamLimits

0x673d,	// (0x00062cf0) cell_myfav_contact_pane_cp3

0x6754,	// (0x00062d07) cell_myfav_contact_pane_cp4_ParamLimits

0x6754,	// (0x00062d07) cell_myfav_contact_pane_cp4

0x676c,	// (0x00062d1f) cell_myfav_contact_pane_cp5_ParamLimits

0x676c,	// (0x00062d1f) cell_myfav_contact_pane_cp5

0x6780,	// (0x00062d33) cell_myfav_contact_pane_cp6_ParamLimits

0x6780,	// (0x00062d33) cell_myfav_contact_pane_cp6

0x6796,	// (0x00062d49) cell_myfav_contact_pane_cp7_ParamLimits

0x6796,	// (0x00062d49) cell_myfav_contact_pane_cp7

0xe05e,	// (0x0006a611) listscroll_gen_pane_cp05

0x67ae,	// (0x00062d61) main_myfav_hc_pane_g1_ParamLimits

0x67ae,	// (0x00062d61) main_myfav_hc_pane_g1

0x67c8,	// (0x00062d7b) main_myfav_hc_pane_g2_ParamLimits

0x67c8,	// (0x00062d7b) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0006bf1a) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0006bf1a) main_myfav_hc_pane_g

0x67fc,	// (0x00062daf) main_myfav_hc_pane_t1_ParamLimits

0x67fc,	// (0x00062daf) main_myfav_hc_pane_t1

0xe067,	// (0x0006a61a) main_myfav_hc_pane_t2_ParamLimits

0xe067,	// (0x0006a61a) main_myfav_hc_pane_t2

0xe079,	// (0x0006a62c) main_myfav_hc_pane_t3_ParamLimits

0xe079,	// (0x0006a62c) main_myfav_hc_pane_t3

0x6813,	// (0x00062dc6) main_myfav_hc_pane_t4_ParamLimits

0x6813,	// (0x00062dc6) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0006bf21) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0006bf21) main_myfav_hc_pane_t

0xc555,	// (0x00068b08) bg_myfav_hc_instruction_pane_g1

0xe08b,	// (0x0006a63e) cell_myfav_contact_pane_g1_ParamLimits

0xe08b,	// (0x0006a63e) cell_myfav_contact_pane_g1

0xe08b,	// (0x0006a63e) cell_myfav_contact_pane_g2_ParamLimits

0xe08b,	// (0x0006a63e) cell_myfav_contact_pane_g2

0xe097,	// (0x0006a64a) cell_myfav_contact_pane_g3_ParamLimits

0xe097,	// (0x0006a64a) cell_myfav_contact_pane_g3

0xc7ea,	// (0x00068d9d) cell_myfav_contact_pane_g4_ParamLimits

0xc7ea,	// (0x00068d9d) cell_myfav_contact_pane_g4

0xe0a4,	// (0x0006a657) cell_myfav_contact_pane_g5_ParamLimits

0xe0a4,	// (0x0006a657) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0006bf2c) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0006bf2c) cell_myfav_contact_pane_g

0x67e2,	// (0x00062d95) main_myfav_hc_pane_g3_ParamLimits

0x67e2,	// (0x00062d95) main_myfav_hc_pane_g3

0x0b4a,	// (0x0005d0fd) popup_adpt_find_window

0x683d,	// (0x00062df0) afind_page_pane_ParamLimits

0x683d,	// (0x00062df0) afind_page_pane

0x6852,	// (0x00062e05) aid_size_cell_afind_ParamLimits

0x6852,	// (0x00062e05) aid_size_cell_afind

0x6870,	// (0x00062e23) bg_popup_sub_pane_cp09_ParamLimits

0x6870,	// (0x00062e23) bg_popup_sub_pane_cp09

0x687d,	// (0x00062e30) find_pane_cp01_ParamLimits

0x687d,	// (0x00062e30) find_pane_cp01

0xe0b0,	// (0x0006a663) grid_afind_control_pane_ParamLimits

0xe0b0,	// (0x0006a663) grid_afind_control_pane

0x688a,	// (0x00062e3d) grid_afind_pane_ParamLimits

0x688a,	// (0x00062e3d) grid_afind_pane

0x68ac,	// (0x00062e5f) cell_afind_pane_ParamLimits

0x68ac,	// (0x00062e5f) cell_afind_pane

0xc555,	// (0x00068b08) afind_page_pane_g1

0x690f,	// (0x00062ec2) afind_page_pane_g2

0x6918,	// (0x00062ecb) afind_page_pane_g3

0x0002,

0xf984,	// (0x0006bf37) afind_page_pane_g

0x6921,	// (0x00062ed4) afind_page_pane_t1

0xe0c4,	// (0x0006a677) cell_afind_grid_control_pane_ParamLimits

0xe0c4,	// (0x0006a677) cell_afind_grid_control_pane

0xdd03,	// (0x0006a2b6) bg_button_pane_cp69_ParamLimits

0xdd03,	// (0x0006a2b6) bg_button_pane_cp69

0x6941,	// (0x00062ef4) cell_afind_pane_g1_ParamLimits

0x6941,	// (0x00062ef4) cell_afind_pane_g1

0x694e,	// (0x00062f01) cell_afind_pane_t1_ParamLimits

0x694e,	// (0x00062f01) cell_afind_pane_t1

0xa2c3,	// (0x00066876) bg_button_pane_cp72

0xe0d3,	// (0x0006a686) cell_afind_grid_control_pane_g1

0x3850,	// (0x0005fe03) aid_image_placing_area_ParamLimits

0x3850,	// (0x0005fe03) aid_image_placing_area

0xcb07,	// (0x000690ba) field_vitu_entry_pane_g1_ParamLimits

0xcb07,	// (0x000690ba) field_vitu_entry_pane_g1

0xcb13,	// (0x000690c6) field_vitu_entry_pane_g2_ParamLimits

0xcb13,	// (0x000690c6) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0006bde8) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0006bde8) field_vitu_entry_pane_g

0x5a00,	// (0x00061fb3) cell_vitu_itu_pane_g1_ParamLimits

0x5a42,	// (0x00061ff5) cell_vitu_itu_pane_t3_ParamLimits

0x5a42,	// (0x00061ff5) cell_vitu_itu_pane_t3

0xdca9,	// (0x0006a25c) mp4_progress_pane_t1_ParamLimits

0xdcc2,	// (0x0006a275) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0006be7d) mp4_progress_pane_t_ParamLimits

0xdcdb,	// (0x0006a28e) mup_progress_pane_cp04_ParamLimits

0x6827,	// (0x00062dda) main_myfav_hc_pane_t5_ParamLimits

0x6827,	// (0x00062dda) main_myfav_hc_pane_t5

0x09e7,	// (0x0005cf9a) aid_zoom_text_primary

0x0b4a,	// (0x0005d0fd) popup_adpt_find_window_ParamLimits

0x0c11,	// (0x0005d1c4) main_cam_set_pane

0x61c3,	// (0x00062776) cam4_zoom_pane_ParamLimits

0x61c3,	// (0x00062776) cam4_zoom_pane

0x6960,	// (0x00062f13) main_cam_set_pane_g1_ParamLimits

0x6960,	// (0x00062f13) main_cam_set_pane_g1

0x696e,	// (0x00062f21) main_cam_set_pane_g2_ParamLimits

0x696e,	// (0x00062f21) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0006bf3e) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0006bf3e) main_cam_set_pane_g

0x6991,	// (0x00062f44) main_cam_set_pane_t1_ParamLimits

0x6991,	// (0x00062f44) main_cam_set_pane_t1

0x69ac,	// (0x00062f5f) main_cset_listscroll_pane_ParamLimits

0x69ac,	// (0x00062f5f) main_cset_listscroll_pane

0x69d0,	// (0x00062f83) main_cset_slider_pane_ParamLimits

0x69d0,	// (0x00062f83) main_cset_slider_pane

0xe0e4,	// (0x0006a697) main_cset_list_pane_ParamLimits

0xe0e4,	// (0x0006a697) main_cset_list_pane

0xe0f4,	// (0x0006a6a7) scroll_pane_cp028

0x69fa,	// (0x00062fad) aid_area_touch_slider

0x6a16,	// (0x00062fc9) cset_slider_pane

0x6a40,	// (0x00062ff3) main_cset_slider_pane_g1

0x6a55,	// (0x00063008) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0006bf43) main_cset_slider_pane_g

0xe12d,	// (0x0006a6e0) main_cset_slider_pane_t1

0x6b17,	// (0x000630ca) main_cset_slider_pane_t2

0x6b31,	// (0x000630e4) main_cset_slider_pane_t3

0x6b4b,	// (0x000630fe) main_cset_slider_pane_t4

0x6b65,	// (0x00063118) main_cset_slider_pane_t5

0x6b83,	// (0x00063136) main_cset_slider_pane_t6

0x6b9a,	// (0x0006314d) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0006bf68) main_cset_slider_pane_t

0x6ca6,	// (0x00063259) cset_list_set_pane_ParamLimits

0x6ca6,	// (0x00063259) cset_list_set_pane

0x6cba,	// (0x0006326d) aid_position_infowindow_above

0x6cc2,	// (0x00063275) aid_position_infowindow_below

0x6cca,	// (0x0006327d) cset_list_set_pane_g1_ParamLimits

0x6cca,	// (0x0006327d) cset_list_set_pane_g1

0x6cd6,	// (0x00063289) cset_list_set_pane_g3_ParamLimits

0x6cd6,	// (0x00063289) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0006bf87) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0006bf87) cset_list_set_pane_g

0x6ce5,	// (0x00063298) cset_list_set_pane_t1_ParamLimits

0x6ce5,	// (0x00063298) cset_list_set_pane_t1

0x0c11,	// (0x0005d1c4) list_highlight_pane_cp021_ParamLimits

0x0c11,	// (0x0005d1c4) list_highlight_pane_cp021

0xad0b,	// (0x000672be) cset_slider_pane_g1

0xad1d,	// (0x000672d0) cset_slider_pane_g2

0xad14,	// (0x000672c7) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0006bf8c) cset_slider_pane_g

0xdf5f,	// (0x0006a512) aid_area_touch_cam4_zoom

0xdf67,	// (0x0006a51a) cam4_zoom_cont_pane

0xdf6f,	// (0x0006a522) cam4_zoom_pane_g1

0xdf77,	// (0x0006a52a) cam4_zoom_pane_g2

0x6cf7,	// (0x000632aa) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0006bf93) cam4_zoom_pane_g

0xdf7f,	// (0x0006a532) cam4_zoom_cont_pane_g1

0xdf88,	// (0x0006a53b) cam4_zoom_cont_pane_g2

0xdf91,	// (0x0006a544) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0006bf9a) cam4_zoom_cont_pane_g

0x6040,	// (0x000625f3) call4_image_pane_ParamLimits

0x6040,	// (0x000625f3) call4_image_pane

0xdd43,	// (0x0006a2f6) call4_windows_conf_pane_ParamLimits

0xdd5e,	// (0x0006a311) popup_call4_audio_in_window_ParamLimits

0xdd5e,	// (0x0006a311) popup_call4_audio_in_window

0x0991,	// (0x0005cf44) bg_popup_call2_act_pane_cp02

0xddc0,	// (0x0006a373) call4_list_conf_pane

0xc555,	// (0x00068b08) call4_image_pane_g1

0xc555,	// (0x00068b08) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0006bcae) call4_image_pane_g

0xe1cd,	// (0x0006a780) list_single_graphic_popup_conf4_pane_ParamLimits

0xe1cd,	// (0x0006a780) list_single_graphic_popup_conf4_pane

0x0991,	// (0x0005cf44) list_highlight_pane_cp022

0xe1e2,	// (0x0006a795) list_single_graphic_popup_conf4_pane_g1

0xa9e5,	// (0x00066f98) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0006bfa1) list_single_graphic_popup_conf4_pane_g

0xe1ea,	// (0x0006a79d) list_single_graphic_popup_conf4_pane_t1

0x1c97,	// (0x0005e24a) popup_vtel_slider_window_ParamLimits

0x1c97,	// (0x0005e24a) popup_vtel_slider_window

0xdcf1,	// (0x0006a2a4) dialer2_ne_pane_t2_ParamLimits

0xdcf1,	// (0x0006a2a4) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0006be82) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0006be82) dialer2_ne_pane_t

0xc334,	// (0x000688e7) bg_popup_sub_pane_cp010_ParamLimits

0xc334,	// (0x000688e7) bg_popup_sub_pane_cp010

0x6cff,	// (0x000632b2) popup_vtel_slider_window_g1_ParamLimits

0x6cff,	// (0x000632b2) popup_vtel_slider_window_g1

0x6d12,	// (0x000632c5) popup_vtel_slider_window_g2_ParamLimits

0x6d12,	// (0x000632c5) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0006bfa6) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0006bfa6) popup_vtel_slider_window_g

0x6d68,	// (0x0006331b) vtel_slider_pane_ParamLimits

0x6d68,	// (0x0006331b) vtel_slider_pane

0x6d8a,	// (0x0006333d) vtel_slider_pane_g1_ParamLimits

0x6d8a,	// (0x0006333d) vtel_slider_pane_g1

0x6d9e,	// (0x00063351) vtel_slider_pane_g2_ParamLimits

0x6d9e,	// (0x00063351) vtel_slider_pane_g2

0x6db6,	// (0x00063369) vtel_slider_pane_g3_ParamLimits

0x6db6,	// (0x00063369) vtel_slider_pane_g3

0x6d8a,	// (0x0006333d) vtel_slider_pane_g4_ParamLimits

0x6d8a,	// (0x0006333d) vtel_slider_pane_g4

0x6dcc,	// (0x0006337f) vtel_slider_pane_g5_ParamLimits

0x6dcc,	// (0x0006337f) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0006bfaf) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0006bfaf) vtel_slider_pane_g

0x0991,	// (0x0005cf44) main_gallery2_pane

0x6439,	// (0x000629ec) aid_size_row_itut2_dropdow_list_ParamLimits

0x6439,	// (0x000629ec) aid_size_row_itut2_dropdow_list

0x64c9,	// (0x00062a7c) grid_vitu2_function_top_pane_ParamLimits

0x64c9,	// (0x00062a7c) grid_vitu2_function_top_pane

0x6528,	// (0x00062adb) popup_vitu2_dropdown_list_window_ParamLimits

0x6528,	// (0x00062adb) popup_vitu2_dropdown_list_window

0x6551,	// (0x00062b04) popup_vitu2_match_list_window

0x6df0,	// (0x000633a3) cell_vitu2_function_top_pane_ParamLimits

0x6df0,	// (0x000633a3) cell_vitu2_function_top_pane

0x6e10,	// (0x000633c3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e10,	// (0x000633c3) cell_vitu2_function_top_pane_cp01

0x6e2e,	// (0x000633e1) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e2e,	// (0x000633e1) cell_vitu2_function_top_wide_pane

0xdeeb,	// (0x0006a49e) bg_button_pane_cp012

0x6e4c,	// (0x000633ff) cell_vitu2_function_top_pane_g1

0xdf9a,	// (0x0006a54d) bg_button_pane_cp013_ParamLimits

0xdf9a,	// (0x0006a54d) bg_button_pane_cp013

0x6e60,	// (0x00063413) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e60,	// (0x00063413) cell_vitu2_function_top_wide_pane_g1

0xdeeb,	// (0x0006a49e) bg_popup_sub_pane_cp20

0x6e78,	// (0x0006342b) list_vitu2_match_list_pane

0xdf03,	// (0x0006a4b6) bg_popup_sub_pane_cp20_g1

0xdf0b,	// (0x0006a4be) bg_popup_sub_pane_cp20_g2

0xa4ce,	// (0x00066a81) bg_popup_sub_pane_cp20_g3

0xdf13,	// (0x0006a4c6) bg_popup_sub_pane_cp20_g4

0xa4ae,	// (0x00066a61) bg_popup_sub_pane_cp20_g5

0xe200,	// (0x0006a7b3) bg_popup_sub_pane_cp20_g6

0xdf23,	// (0x0006a4d6) bg_popup_sub_pane_cp20_g7

0xdf2b,	// (0x0006a4de) bg_popup_sub_pane_cp20_g8

0xdf33,	// (0x0006a4e6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0006bfba) bg_popup_sub_pane_cp20_g

0xdfb6,	// (0x0006a569) list_vitu2_match_list_item_pane_ParamLimits

0xdfb6,	// (0x0006a569) list_vitu2_match_list_item_pane

0xdfc8,	// (0x0006a57b) list_vitu2_match_list_item_pane_t1

0x9fbe,	// (0x00066571) bg_popup_sub_pane_cp21

0xdfd6,	// (0x0006a589) grid_vitu2_dropdown_list_pane

0x6ee0,	// (0x00063493) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ee0,	// (0x00063493) cell_vitu2_dropdown_list_char_pane

0x6f03,	// (0x000634b6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f03,	// (0x000634b6) cell_vitu2_dropdown_list_ctrl_pane

0xe208,	// (0x0006a7bb) cell_vitu2_dropdown_list_char_pane_g1

0xe211,	// (0x0006a7c4) cell_vitu2_dropdown_list_char_pane_g2

0xe21a,	// (0x0006a7cd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0361,	// (0x0005c914) cell_vitu2_dropdown_list_char_pane_g

0x6f31,	// (0x000634e4) cell_vitu2_dropdown_list_char_pane_t1

0x6f3f,	// (0x000634f2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f3f,	// (0x000634f2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f4f,	// (0x00063502) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f4f,	// (0x00063502) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f60,	// (0x00063513) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f60,	// (0x00063513) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f70,	// (0x00063523) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f70,	// (0x00063523) cell_vitu2_dropdown_list_ctrl_pane_g4

0xde28,	// (0x0006a3db) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xde28,	// (0x0006a3db) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0006bfd7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0006bfd7) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f8c,	// (0x0006353f) aid_size_cell_gallery2_ParamLimits

0x6f8c,	// (0x0006353f) aid_size_cell_gallery2

0x6fa2,	// (0x00063555) grid_gallery2_pane_ParamLimits

0x6fa2,	// (0x00063555) grid_gallery2_pane

0x6fb6,	// (0x00063569) scroll_pane_cp029_ParamLimits

0x6fb6,	// (0x00063569) scroll_pane_cp029

0x6fc2,	// (0x00063575) cell_gallery2_pane_ParamLimits

0x6fc2,	// (0x00063575) cell_gallery2_pane

0xe223,	// (0x0006a7d6) cell_gallery2_pane_g2

0x6ffc,	// (0x000635af) cell_gallery2_pane_g3

0xe22d,	// (0x0006a7e0) cell_gallery2_pane_g4

0xe235,	// (0x0006a7e8) cell_gallery2_pane_g5

0xabb3,	// (0x00067166) grid_highlight_pane_cp10

0x6551,	// (0x00062b04) popup_vitu2_match_list_window_ParamLimits

0x6568,	// (0x00062b1b) popup_vitu2_query_window_ParamLimits

0x6568,	// (0x00062b1b) popup_vitu2_query_window

0x9fbe,	// (0x00066571) bg_vitu2_candi_button_pane

0xe208,	// (0x0006a7bb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe211,	// (0x0006a7c4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe21a,	// (0x0006a7cd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7004,	// (0x000635b7) bg_button_pane_cp015

0x7018,	// (0x000635cb) bg_button_pane_cp016

0x702b,	// (0x000635de) bg_button_pane_cp017

0xc020,	// (0x000685d3) bg_popup_sub_pane_cp22

0xe23d,	// (0x0006a7f0) popup_vitu2_query_window_g1

0x7070,	// (0x00063623) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0006bfe2) popup_vitu2_query_window_g

0x708f,	// (0x00063642) popup_vitu2_query_window_t1_ParamLimits

0x708f,	// (0x00063642) popup_vitu2_query_window_t1

0x70c4,	// (0x00063677) popup_vitu2_query_window_t2_ParamLimits

0x70c4,	// (0x00063677) popup_vitu2_query_window_t2

0x70d6,	// (0x00063689) popup_vitu2_query_window_t3_ParamLimits

0x70d6,	// (0x00063689) popup_vitu2_query_window_t3

0x70fe,	// (0x000636b1) popup_vitu2_query_window_t4_ParamLimits

0x70fe,	// (0x000636b1) popup_vitu2_query_window_t4

0x711f,	// (0x000636d2) popup_vitu2_query_window_t5_ParamLimits

0x711f,	// (0x000636d2) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0006bfe9) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0006bfe9) popup_vitu2_query_window_t

0xe0dc,	// (0x0006a68f) main_cset_text_pane

0x69fa,	// (0x00062fad) aid_area_touch_slider_ParamLimits

0x6a16,	// (0x00062fc9) cset_slider_pane_ParamLimits

0x6a40,	// (0x00062ff3) main_cset_slider_pane_g1_ParamLimits

0x6a55,	// (0x00063008) main_cset_slider_pane_g2_ParamLimits

0xe0fd,	// (0x0006a6b0) main_cset_slider_pane_g3_ParamLimits

0xe0fd,	// (0x0006a6b0) main_cset_slider_pane_g3

0x6a6a,	// (0x0006301d) main_cset_slider_pane_g4_ParamLimits

0x6a6a,	// (0x0006301d) main_cset_slider_pane_g4

0x6a79,	// (0x0006302c) main_cset_slider_pane_g5_ParamLimits

0x6a79,	// (0x0006302c) main_cset_slider_pane_g5

0x6a87,	// (0x0006303a) main_cset_slider_pane_g6_ParamLimits

0x6a87,	// (0x0006303a) main_cset_slider_pane_g6

0xf990,	// (0x0006bf43) main_cset_slider_pane_g_ParamLimits

0xe12d,	// (0x0006a6e0) main_cset_slider_pane_t1_ParamLimits

0x6b17,	// (0x000630ca) main_cset_slider_pane_t2_ParamLimits

0x6b31,	// (0x000630e4) main_cset_slider_pane_t3_ParamLimits

0x6b4b,	// (0x000630fe) main_cset_slider_pane_t4_ParamLimits

0x6b65,	// (0x00063118) main_cset_slider_pane_t5_ParamLimits

0x6b83,	// (0x00063136) main_cset_slider_pane_t6_ParamLimits

0x6b9a,	// (0x0006314d) main_cset_slider_pane_t7_ParamLimits

0x6bc8,	// (0x0006317b) main_cset_slider_pane_t8_ParamLimits

0x6bc8,	// (0x0006317b) main_cset_slider_pane_t8

0x6bf0,	// (0x000631a3) main_cset_slider_pane_t9_ParamLimits

0x6bf0,	// (0x000631a3) main_cset_slider_pane_t9

0x6c18,	// (0x000631cb) main_cset_slider_pane_t10_ParamLimits

0x6c18,	// (0x000631cb) main_cset_slider_pane_t10

0x6c40,	// (0x000631f3) main_cset_slider_pane_t11_ParamLimits

0x6c40,	// (0x000631f3) main_cset_slider_pane_t11

0x6c6a,	// (0x0006321d) main_cset_slider_pane_t12_ParamLimits

0x6c6a,	// (0x0006321d) main_cset_slider_pane_t12

0x6c87,	// (0x0006323a) main_cset_slider_pane_t13_ParamLimits

0x6c87,	// (0x0006323a) main_cset_slider_pane_t13

0xf9b5,	// (0x0006bf68) main_cset_slider_pane_t_ParamLimits

0x0991,	// (0x0005cf44) bg_popup_sub_pane_cp011

0xe249,	// (0x0006a7fc) main_cset_text_pane_g1

0xe251,	// (0x0006a804) main_cset_text_pane_t1

0xe25f,	// (0x0006a812) main_cset_text_pane_t2

0xe26d,	// (0x0006a820) main_cset_text_pane_t3

0xe27b,	// (0x0006a82e) main_cset_text_pane_t4

0xe289,	// (0x0006a83c) main_cset_text_pane_t5

0xe297,	// (0x0006a84a) main_cset_text_pane_t6

0xe2a5,	// (0x0006a858) main_cset_text_pane_t7

0x0006,

0x0389,	// (0x0005c93c) main_cset_text_pane_t

0x0991,	// (0x0005cf44) main_cam4_burst_pane

0x0991,	// (0x0005cf44) main_cam5_pane

0x692f,	// (0x00062ee2) bg_button_pane_cp019

0x6938,	// (0x00062eeb) bg_button_pane_cp020

0xe109,	// (0x0006a6bc) main_cset_slider_pane_g7_ParamLimits

0xe109,	// (0x0006a6bc) main_cset_slider_pane_g7

0xe115,	// (0x0006a6c8) main_cset_slider_pane_g8_ParamLimits

0xe115,	// (0x0006a6c8) main_cset_slider_pane_g8

0x6a9b,	// (0x0006304e) main_cset_slider_pane_g9_ParamLimits

0x6a9b,	// (0x0006304e) main_cset_slider_pane_g9

0x6aa7,	// (0x0006305a) main_cset_slider_pane_g10_ParamLimits

0x6aa7,	// (0x0006305a) main_cset_slider_pane_g10

0x6ab3,	// (0x00063066) main_cset_slider_pane_g11_ParamLimits

0x6ab3,	// (0x00063066) main_cset_slider_pane_g11

0x6abf,	// (0x00063072) main_cset_slider_pane_g12_ParamLimits

0x6abf,	// (0x00063072) main_cset_slider_pane_g12

0x6acb,	// (0x0006307e) main_cset_slider_pane_g13_ParamLimits

0x6acb,	// (0x0006307e) main_cset_slider_pane_g13

0x6ad7,	// (0x0006308a) main_cset_slider_pane_g14_ParamLimits

0x6ad7,	// (0x0006308a) main_cset_slider_pane_g14

0x6ae3,	// (0x00063096) main_cset_slider_pane_g15_ParamLimits

0x6ae3,	// (0x00063096) main_cset_slider_pane_g15

0xe15b,	// (0x0006a70e) main_cset_slider_pane_t14_ParamLimits

0xe15b,	// (0x0006a70e) main_cset_slider_pane_t14

0xe194,	// (0x0006a747) main_cset_slider_pane_t15_ParamLimits

0xe194,	// (0x0006a747) main_cset_slider_pane_t15

0x7196,	// (0x00063749) aid_cam4_burst_size_cell_ParamLimits

0x7196,	// (0x00063749) aid_cam4_burst_size_cell

0x71b6,	// (0x00063769) grid_cam4_burst_pane_ParamLimits

0x71b6,	// (0x00063769) grid_cam4_burst_pane

0x71f0,	// (0x000637a3) linegrid_cam4_burst_pane_ParamLimits

0x71f0,	// (0x000637a3) linegrid_cam4_burst_pane

0xe60f,	// (0x0006abc2) scroll_pane_cp30_ParamLimits

0xe60f,	// (0x0006abc2) scroll_pane_cp30

0x7212,	// (0x000637c5) cell_cam4_burst_pane_ParamLimits

0x7212,	// (0x000637c5) cell_cam4_burst_pane

0xe2b3,	// (0x0006a866) linegrid_cam4_burst_pane_g1_ParamLimits

0xe2b3,	// (0x0006a866) linegrid_cam4_burst_pane_g1

0x7267,	// (0x0006381a) linegrid_cam4_burst_pane_g2_ParamLimits

0x7267,	// (0x0006381a) linegrid_cam4_burst_pane_g2

0xe2c0,	// (0x0006a873) linegrid_cam4_burst_pane_g3_ParamLimits

0xe2c0,	// (0x0006a873) linegrid_cam4_burst_pane_g3

0x0002,

0xfa45,	// (0x0006bff8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa45,	// (0x0006bff8) linegrid_cam4_burst_pane_g

0x7278,	// (0x0006382b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7278,	// (0x0006382b) linegrid_cam4_burst_pane_g3_copy1

0xe2cd,	// (0x0006a880) linegrid_cam4_burst_pane_g4_ParamLimits

0xe2cd,	// (0x0006a880) linegrid_cam4_burst_pane_g4

0x7296,	// (0x00063849) linegrid_cam4_burst_pane_g5_ParamLimits

0x7296,	// (0x00063849) linegrid_cam4_burst_pane_g5

0x72a7,	// (0x0006385a) linegrid_cam4_burst_pane_g6_ParamLimits

0x72a7,	// (0x0006385a) linegrid_cam4_burst_pane_g6

0xe2da,	// (0x0006a88d) linegrid_cam4_burst_pane_g7_ParamLimits

0xe2da,	// (0x0006a88d) linegrid_cam4_burst_pane_g7

0x72be,	// (0x00063871) cell_cam4_burst_pane_g1

0xe2f3,	// (0x0006a8a6) main_cam5_pane_t1_ParamLimits

0xe2f3,	// (0x0006a8a6) main_cam5_pane_t1

0xe305,	// (0x0006a8b8) main_cam5_pane_t2_ParamLimits

0xe305,	// (0x0006a8b8) main_cam5_pane_t2

0xe317,	// (0x0006a8ca) main_cam5_pane_t3_ParamLimits

0xe317,	// (0x0006a8ca) main_cam5_pane_t3

0xe329,	// (0x0006a8dc) main_cam5_pane_t4_ParamLimits

0xe329,	// (0x0006a8dc) main_cam5_pane_t4

0xe341,	// (0x0006a8f4) main_cam5_pane_t5_ParamLimits

0xe341,	// (0x0006a8f4) main_cam5_pane_t5

0xe355,	// (0x0006a908) main_cam5_pane_t6_ParamLimits

0xe355,	// (0x0006a908) main_cam5_pane_t6

0xe369,	// (0x0006a91c) main_cam5_pane_t7_ParamLimits

0xe369,	// (0x0006a91c) main_cam5_pane_t7

0xe37b,	// (0x0006a92e) main_cam5_pane_t8_ParamLimits

0xe37b,	// (0x0006a92e) main_cam5_pane_t8

0xe399,	// (0x0006a94c) main_cam5_pane_t9_ParamLimits

0xe399,	// (0x0006a94c) main_cam5_pane_t9

0xe3ab,	// (0x0006a95e) main_cam5_pane_t10_ParamLimits

0xe3ab,	// (0x0006a95e) main_cam5_pane_t10

0xe3bd,	// (0x0006a970) main_cam5_pane_t11_ParamLimits

0xe3bd,	// (0x0006a970) main_cam5_pane_t11

0xe3d1,	// (0x0006a984) main_cam5_pane_t12_ParamLimits

0xe3d1,	// (0x0006a984) main_cam5_pane_t12

0xe3e8,	// (0x0006a99b) main_cam5_pane_t13_ParamLimits

0xe3e8,	// (0x0006a99b) main_cam5_pane_t13

0x000c,

0x03a4,	// (0x0005c957) main_cam5_pane_t_ParamLimits

0x03a4,	// (0x0005c957) main_cam5_pane_t

0x0bd7,	// (0x0005d18a) popup_scut_keymap_window_ParamLimits

0x0bd7,	// (0x0005d18a) popup_scut_keymap_window

0x72d1,	// (0x00063884) aid_size_cell_brow_shortcut

0xabb3,	// (0x00067166) bg_popup_window_pane_cp010

0x72dd,	// (0x00063890) grid_scut_pane

0x72e9,	// (0x0006389c) cell_scut_pane_ParamLimits

0x72e9,	// (0x0006389c) cell_scut_pane

0x7302,	// (0x000638b5) cell_scut_pane_g1

0xe40b,	// (0x0006a9be) cell_scut_pane_t1

0xe41a,	// (0x0006a9cd) cell_scut_pane_t2

0x730b,	// (0x000638be) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0006c004) cell_scut_pane_t

0x4f04,	// (0x000614b7) main_mup3_pane_g8_ParamLimits

0x4f04,	// (0x000614b7) main_mup3_pane_g8

0x6453,	// (0x00062a06) area_vitu2_query_pane_ParamLimits

0x6453,	// (0x00062a06) area_vitu2_query_pane

0x703e,	// (0x000635f1) input_focus_pane_cp08

0xe429,	// (0x0006a9dc) area_vitu2_query_pane_g1

0x7319,	// (0x000638cc) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0006c00b) area_vitu2_query_pane_g

0x732a,	// (0x000638dd) area_vitu2_query_pane_t1_ParamLimits

0x732a,	// (0x000638dd) area_vitu2_query_pane_t1

0x733e,	// (0x000638f1) area_vitu2_query_pane_t2_ParamLimits

0x733e,	// (0x000638f1) area_vitu2_query_pane_t2

0x7352,	// (0x00063905) area_vitu2_query_pane_t3_ParamLimits

0x7352,	// (0x00063905) area_vitu2_query_pane_t3

0x737a,	// (0x0006392d) area_vitu2_query_pane_t4_ParamLimits

0x737a,	// (0x0006392d) area_vitu2_query_pane_t4

0x73a2,	// (0x00063955) area_vitu2_query_pane_t5_ParamLimits

0x73a2,	// (0x00063955) area_vitu2_query_pane_t5

0x73ca,	// (0x0006397d) area_vitu2_query_pane_t6_ParamLimits

0x73ca,	// (0x0006397d) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0006c010) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0006c010) area_vitu2_query_pane_t

0x7416,	// (0x000639c9) bg_button_pane_cp018

0x7424,	// (0x000639d7) bg_button_pane_cp021

0x7430,	// (0x000639e3) bg_button_pane_cp022

0x7441,	// (0x000639f4) input_focus_pane_cp09

0x2d59,	// (0x0005f30c) aid_size_touch_mv_arrow_left

0x2d82,	// (0x0005f335) aid_size_touch_mv_arrow_right

0x6afb,	// (0x000630ae) main_cset_slider_pane_g16_ParamLimits

0x6afb,	// (0x000630ae) main_cset_slider_pane_g16

0x6b09,	// (0x000630bc) main_cset_slider_pane_g17_ParamLimits

0x6b09,	// (0x000630bc) main_cset_slider_pane_g17

0x72be,	// (0x00063871) cell_cam4_burst_pane_g1_ParamLimits

0x0991,	// (0x0005cf44) compa_mode_pane

0x6d22,	// (0x000632d5) popup_vtel_slider_window_g3_ParamLimits

0x6d22,	// (0x000632d5) popup_vtel_slider_window_g3

0x6d39,	// (0x000632ec) popup_vtel_slider_window_g4_ParamLimits

0x6d39,	// (0x000632ec) popup_vtel_slider_window_g4

0x6d50,	// (0x00063303) popup_vtel_slider_window_t1_ParamLimits

0x6d50,	// (0x00063303) popup_vtel_slider_window_t1

0x0991,	// (0x0005cf44) main_cl_pane

0xc04c,	// (0x000685ff) popup_imed_adjust2_window_ParamLimits

0xc020,	// (0x000685d3) bg_tb_trans_pane_cp05_ParamLimits

0xca3c,	// (0x00068fef) popup_imed_adjust2_window_g1_ParamLimits

0xca4b,	// (0x00068ffe) popup_imed_adjust2_window_g2_ParamLimits

0xca4b,	// (0x00068ffe) popup_imed_adjust2_window_g2

0xca57,	// (0x0006900a) popup_imed_adjust2_window_g3_ParamLimits

0xca57,	// (0x0006900a) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0006bdac) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0006bdac) popup_imed_adjust2_window_g

0xca63,	// (0x00069016) popup_imed_adjust2_window_t1_ParamLimits

0xca7b,	// (0x0006902e) slider_imed_adjust_pane_ParamLimits

0xca8f,	// (0x00069042) slider_imed_adjust_pane_g1_ParamLimits

0xca9f,	// (0x00069052) slider_imed_adjust_pane_g2_ParamLimits

0xcaaf,	// (0x00069062) slider_imed_adjust_pane_g3_ParamLimits

0xcac0,	// (0x00069073) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0006bdb3) slider_imed_adjust_pane_g_ParamLimits

0x6163,	// (0x00062716) aid_touch_area_cam4_ParamLimits

0x6163,	// (0x00062716) aid_touch_area_cam4

0xde0a,	// (0x0006a3bd) battery_pane_cp01

0x6236,	// (0x000627e9) main_camera4_pane_g6_ParamLimits

0x6236,	// (0x000627e9) main_camera4_pane_g6

0x6260,	// (0x00062813) main_camera4_pane_t2_ParamLimits

0x6260,	// (0x00062813) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0006beb6) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0006beb6) main_camera4_pane_t

0x6295,	// (0x00062848) aid_touch_area_vid4_ParamLimits

0x6295,	// (0x00062848) aid_touch_area_vid4

0x62fc,	// (0x000628af) main_video4_pane_g5_ParamLimits

0x62fc,	// (0x000628af) main_video4_pane_g5

0x6327,	// (0x000628da) vid4_progress_pane_ParamLimits

0x6327,	// (0x000628da) vid4_progress_pane

0xe121,	// (0x0006a6d4) main_cset_slider_pane_g18_ParamLimits

0xe121,	// (0x0006a6d4) main_cset_slider_pane_g18

0xe2e7,	// (0x0006a89a) cell_cam4_burst_pane_g2_ParamLimits

0xe2e7,	// (0x0006a89a) cell_cam4_burst_pane_g2

0x0001,

0xfa4c,	// (0x0006bfff) cell_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0006bfff) cell_cam4_burst_pane_g

0x9fe2,	// (0x00066595) bg_cl_pane_ParamLimits

0x9fe2,	// (0x00066595) bg_cl_pane

0x7452,	// (0x00063a05) cl_header_pane_ParamLimits

0x7452,	// (0x00063a05) cl_header_pane

0x7466,	// (0x00063a19) cl_listscroll_pane_ParamLimits

0x7466,	// (0x00063a19) cl_listscroll_pane

0xe435,	// (0x0006a9e8) bg_cl_pane_g1

0xe43d,	// (0x0006a9f0) bg_cl_pane_g2

0xe445,	// (0x0006a9f8) bg_cl_pane_g3

0xe44d,	// (0x0006aa00) bg_cl_pane_g4

0xe455,	// (0x0006aa08) bg_cl_pane_g5

0xe45d,	// (0x0006aa10) bg_cl_pane_g6

0xe465,	// (0x0006aa18) bg_cl_pane_g7

0xe46d,	// (0x0006aa20) bg_cl_pane_g8

0xe475,	// (0x0006aa28) bg_cl_pane_g9

0x0008,

0x03da,	// (0x0005c98d) bg_cl_pane_g

0x7476,	// (0x00063a29) aid_height_cl_leading_ParamLimits

0x7476,	// (0x00063a29) aid_height_cl_leading

0x7482,	// (0x00063a35) aid_height_cl_text_ParamLimits

0x7482,	// (0x00063a35) aid_height_cl_text

0x0c11,	// (0x0005d1c4) bg_cl_header_pane_ParamLimits

0x0c11,	// (0x0005d1c4) bg_cl_header_pane

0x74a1,	// (0x00063a54) cl_header_pane_g1_ParamLimits

0x74a1,	// (0x00063a54) cl_header_pane_g1

0x74b7,	// (0x00063a6a) cl_header_pane_t1_ParamLimits

0x74b7,	// (0x00063a6a) cl_header_pane_t1

0xe47d,	// (0x0006aa30) cl_list_pane

0xe0f4,	// (0x0006a6a7) hc_scroll_pane_cp01

0xa4ae,	// (0x00066a61) bg_cl_header_pane_g1

0xdf03,	// (0x0006a4b6) bg_cl_header_pane_g2

0xa4ce,	// (0x00066a81) bg_cl_header_pane_g3

0xdf13,	// (0x0006a4c6) bg_cl_header_pane_g4

0xdf0b,	// (0x0006a4be) bg_cl_header_pane_g5

0xe200,	// (0x0006a7b3) bg_cl_header_pane_g6

0xdf2b,	// (0x0006a4de) bg_cl_header_pane_g7

0xdf33,	// (0x0006a4e6) bg_cl_header_pane_g8

0xdf23,	// (0x0006a4d6) bg_cl_header_pane_g9

0x0008,

0xfa6c,	// (0x0006c01f) bg_cl_header_pane_g

0x74d0,	// (0x00063a83) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74d0,	// (0x00063a83) hc_cl_list_double_graphic_heading_pane

0x74e3,	// (0x00063a96) hc_cl_list_single_graphic_pane_ParamLimits

0x74e3,	// (0x00063a96) hc_cl_list_single_graphic_pane

0x74fb,	// (0x00063aae) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x74fb,	// (0x00063aae) hc_cl_list_single_graphic_pane_g1

0x7507,	// (0x00063aba) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7507,	// (0x00063aba) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa7f,	// (0x0006c032) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa7f,	// (0x0006c032) hc_cl_list_single_graphic_pane_g

0x751b,	// (0x00063ace) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x751b,	// (0x00063ace) hc_cl_list_single_graphic_pane_t1

0x74fb,	// (0x00063aae) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x74fb,	// (0x00063aae) hc_cl_list_double_graphic_heading_pane_g1

0x7530,	// (0x00063ae3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7530,	// (0x00063ae3) hc_cl_list_double_graphic_heading_pane_g2

0x7544,	// (0x00063af7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7544,	// (0x00063af7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa84,	// (0x0006c037) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa84,	// (0x0006c037) hc_cl_list_double_graphic_heading_pane_g

0x7558,	// (0x00063b0b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7558,	// (0x00063b0b) hc_cl_list_double_graphic_heading_pane_t1

0x756d,	// (0x00063b20) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x756d,	// (0x00063b20) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa8b,	// (0x0006c03e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa8b,	// (0x0006c03e) hc_cl_list_double_graphic_heading_pane_t

0x758c,	// (0x00063b3f) vid4_progress_pane_g1

0x759d,	// (0x00063b50) vid4_progress_pane_g2

0xad8e,	// (0x00067341) vid4_progress_pane_g3

0xde4e,	// (0x0006a401) vid4_progress_pane_g4

0x0004,

0xfa90,	// (0x0006c043) vid4_progress_pane_g

0xdfe6,	// (0x0006a599) vid4_progress_pane_t1

0x75af,	// (0x00063b62) vid4_progress_pane_t2

0x0002,

0xfa9b,	// (0x0006c04e) vid4_progress_pane_t

0x75de,	// (0x00063b91) wait_bar_pane_cp07

0xc342,	// (0x000688f5) blid_firmament_pane_ParamLimits

0xc385,	// (0x00068938) popup_blid_sat_info2_window_g1

0xc3a9,	// (0x0006895c) popup_blid_sat_info2_window_t3

0xc3b7,	// (0x0006896a) popup_blid_sat_info2_window_t4

0xc3c5,	// (0x00068978) popup_blid_sat_info2_window_t5

0xc3d3,	// (0x00068986) popup_blid_sat_info2_window_t6

0xc3e3,	// (0x00068996) popup_blid_sat_info2_window_t7

0xc3f1,	// (0x000689a4) popup_blid_sat_info2_window_t8

0xc3ff,	// (0x000689b2) popup_blid_sat_info2_window_t9

0xc40d,	// (0x000689c0) popup_blid_sat_info2_window_t10

0xc4d5,	// (0x00068a88) aid_firma_cardinal_ParamLimits

0xc4e9,	// (0x00068a9c) blid_firmament_pane_t1_ParamLimits

0xc500,	// (0x00068ab3) blid_firmament_pane_t2_ParamLimits

0xc517,	// (0x00068aca) blid_firmament_pane_t3_ParamLimits

0xc52e,	// (0x00068ae1) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0006bca5) blid_firmament_pane_t_ParamLimits

0xc545,	// (0x00068af8) blid_sat_info_pane_ParamLimits

0x0c11,	// (0x0005d1c4) main_cam_set_pane_ParamLimits

0x57ae,	// (0x00061d61) aid_size_cell_colour_35_ParamLimits

0x57ce,	// (0x00061d81) aid_size_cell_colour_112_ParamLimits

0x57ee,	// (0x00061da1) aid_size_cell_effect_ParamLimits

0xc020,	// (0x000685d3) bg_tb_trans_pane_cp02_ParamLimits

0xa6a4,	// (0x00066c57) heading_imed_pane_ParamLimits

0x580e,	// (0x00061dc1) listscroll_imed_pane_ParamLimits

0xb64e,	// (0x00067c01) popup_call2_audio_first_window_g5_ParamLimits

0xb64e,	// (0x00067c01) popup_call2_audio_first_window_g5

0x5dcb,	// (0x0006237e) aid_size_touch_image3_arrow_left_ParamLimits

0x5dcb,	// (0x0006237e) aid_size_touch_image3_arrow_left

0x5df7,	// (0x000623aa) aid_size_touch_image3_arrow_right_ParamLimits

0x5df7,	// (0x000623aa) aid_size_touch_image3_arrow_right

0x75c7,	// (0x00063b7a) vid4_progress_pane_t3

0x5b29,	// (0x000620dc) main_hwr_training_symbol_option_pane_ParamLimits

0x5b29,	// (0x000620dc) main_hwr_training_symbol_option_pane

0xcd2b,	// (0x000692de) popup_hwr_training_preview_window_ParamLimits

0xcd2b,	// (0x000692de) popup_hwr_training_preview_window

0x5b49,	// (0x000620fc) hwr_training_navi_pane_g5_ParamLimits

0x5b49,	// (0x000620fc) hwr_training_navi_pane_g5

0xdee3,	// (0x0006a496) popup_char_count_window

0xdeeb,	// (0x0006a49e) bg_popup_sub_pane_cp20_ParamLimits

0x6e78,	// (0x0006342b) list_vitu2_match_list_pane_ParamLimits

0x6e87,	// (0x0006343a) vitu2_page_scroll_pane_ParamLimits

0x6e87,	// (0x0006343a) vitu2_page_scroll_pane

0xe486,	// (0x0006aa39) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe486,	// (0x0006aa39) list_single_hwr_training_symbol_option_pane

0xe499,	// (0x0006aa4c) list_single_hwr_training_symbol_option_pane_g1

0xe4a1,	// (0x0006aa54) list_single_hwr_training_symbol_option_pane_t1

0xe4af,	// (0x0006aa62) bg_button_pane_cp023

0xe4b8,	// (0x0006aa6b) bg_button_pane_cp024

0x764a,	// (0x00063bfd) vitu2_page_scroll_pane_g1

0x7652,	// (0x00063c05) vitu2_page_scroll_pane_g2

0x0001,

0xfaa2,	// (0x0006c055) vitu2_page_scroll_pane_g

0x765c,	// (0x00063c0f) vitu2_page_scroll_pane_t1

0xc25e,	// (0x00068811) popup_char_count_window_g1

0xe4eb,	// (0x0006aa9e) popup_char_count_window_g2

0xe4f4,	// (0x0006aaa7) popup_char_count_window_g3

0x0002,

0xfaa7,	// (0x0006c05a) popup_char_count_window_g

0xe4fd,	// (0x0006aab0) popup_char_count_window_t1

0x0991,	// (0x0005cf44) main_vded2_pane

0xca28,	// (0x00068fdb) aid_size_cell_imed_line

0xca32,	// (0x00068fe5) grid_imed_line_width_pane

0x639b,	// (0x0006294e) vid4_indicators_pane_g4

0xe50b,	// (0x0006aabe) cell_imed_line_width_pane_ParamLimits

0xe50b,	// (0x0006aabe) cell_imed_line_width_pane

0xe521,	// (0x0006aad4) cell_imed_line_width_pane_g1

0xc2f0,	// (0x000688a3) cell_imed_line_width_pane_g2

0x0001,

0xfaae,	// (0x0006c061) cell_imed_line_width_pane_g

0x766b,	// (0x00063c1e) main_vded2_pane_g1_ParamLimits

0x766b,	// (0x00063c1e) main_vded2_pane_g1

0x7686,	// (0x00063c39) main_vded2_pane_g2_ParamLimits

0x7686,	// (0x00063c39) main_vded2_pane_g2

0x0001,

0xfab3,	// (0x0006c066) main_vded2_pane_g_ParamLimits

0xfab3,	// (0x0006c066) main_vded2_pane_g

0x7698,	// (0x00063c4b) vded2_slider_pane_ParamLimits

0x7698,	// (0x00063c4b) vded2_slider_pane

0x76a8,	// (0x00063c5b) aid_size_touch_vded2_end

0x76b2,	// (0x00063c65) aid_size_touch_vded2_playhead

0xe52a,	// (0x0006aadd) aid_size_touch_vded2_start

0xe532,	// (0x0006aae5) vded2_slider_bg_pane

0xe53b,	// (0x0006aaee) vded2_slider_pane_g1

0xe544,	// (0x0006aaf7) vded2_slider_pane_g2

0x76bc,	// (0x00063c6f) vded2_slider_pane_g3

0x0002,

0xfab8,	// (0x0006c06b) vded2_slider_pane_g

0xdffb,	// (0x0006a5ae) vded2_slider_bg_pane_g1

0xe004,	// (0x0006a5b7) vded2_slider_bg_pane_g2

0xe00d,	// (0x0006a5c0) vded2_slider_bg_pane_g3

0x0002,

0xfabf,	// (0x0006c072) vded2_slider_bg_pane_g

0x348d,	// (0x0005fa40) aid_postcard_touch_down_pane_ParamLimits

0x348d,	// (0x0005fa40) aid_postcard_touch_down_pane

0x34a5,	// (0x0005fa58) aid_postcard_touch_up_pane_ParamLimits

0x34a5,	// (0x0005fa58) aid_postcard_touch_up_pane

0x0991,	// (0x0005cf44) main_blid2_pane

0xc02e,	// (0x000685e1) popup_blid2_search_window

0x0991,	// (0x0005cf44) blid2_gps_pane

0x0991,	// (0x0005cf44) blid2_navig_pane

0x0991,	// (0x0005cf44) blid2_search_pane

0x0991,	// (0x0005cf44) blid2_tripm_pane

0x76c7,	// (0x00063c7a) blid2_search_pane_g1_ParamLimits

0x76c7,	// (0x00063c7a) blid2_search_pane_g1

0x76da,	// (0x00063c8d) blid2_search_pane_t1_ParamLimits

0x76da,	// (0x00063c8d) blid2_search_pane_t1

0x76ec,	// (0x00063c9f) aid_size_cell_blid2_gps_ParamLimits

0x76ec,	// (0x00063c9f) aid_size_cell_blid2_gps

0x7704,	// (0x00063cb7) blid2_gps_pane_g1_ParamLimits

0x7704,	// (0x00063cb7) blid2_gps_pane_g1

0x7718,	// (0x00063ccb) grid_blid2_satellite_pane_ParamLimits

0x7718,	// (0x00063ccb) grid_blid2_satellite_pane

0x7730,	// (0x00063ce3) blid2_navig_pane_g1_ParamLimits

0x7730,	// (0x00063ce3) blid2_navig_pane_g1

0x773c,	// (0x00063cef) blid2_navig_pane_t1_ParamLimits

0x773c,	// (0x00063cef) blid2_navig_pane_t1

0x7757,	// (0x00063d0a) blid2_navig_pane_t2_ParamLimits

0x7757,	// (0x00063d0a) blid2_navig_pane_t2

0x0001,

0xfac6,	// (0x0006c079) blid2_navig_pane_t_ParamLimits

0xfac6,	// (0x0006c079) blid2_navig_pane_t

0x7772,	// (0x00063d25) blid2_navig_ring_pane_ParamLimits

0x7772,	// (0x00063d25) blid2_navig_ring_pane

0x778d,	// (0x00063d40) blid2_speed_pane_ParamLimits

0x778d,	// (0x00063d40) blid2_speed_pane

0x7799,	// (0x00063d4c) blid2_tripm_pane_g1_ParamLimits

0x7799,	// (0x00063d4c) blid2_tripm_pane_g1

0x77b4,	// (0x00063d67) blid2_tripm_pane_g2_ParamLimits

0x77b4,	// (0x00063d67) blid2_tripm_pane_g2

0x77c8,	// (0x00063d7b) blid2_tripm_pane_g3_ParamLimits

0x77c8,	// (0x00063d7b) blid2_tripm_pane_g3

0x77dc,	// (0x00063d8f) blid2_tripm_pane_g4_ParamLimits

0x77dc,	// (0x00063d8f) blid2_tripm_pane_g4

0x77f0,	// (0x00063da3) blid2_tripm_pane_g5_ParamLimits

0x77f0,	// (0x00063da3) blid2_tripm_pane_g5

0x0005,

0xfacb,	// (0x0006c07e) blid2_tripm_pane_g_ParamLimits

0xfacb,	// (0x0006c07e) blid2_tripm_pane_g

0x7816,	// (0x00063dc9) blid2_tripm_pane_t1_ParamLimits

0x7816,	// (0x00063dc9) blid2_tripm_pane_t1

0x782f,	// (0x00063de2) blid2_tripm_pane_t2_ParamLimits

0x782f,	// (0x00063de2) blid2_tripm_pane_t2

0x7848,	// (0x00063dfb) blid2_tripm_pane_t3_ParamLimits

0x7848,	// (0x00063dfb) blid2_tripm_pane_t3

0x0003,

0xfad8,	// (0x0006c08b) blid2_tripm_pane_t_ParamLimits

0xfad8,	// (0x0006c08b) blid2_tripm_pane_t

0x788f,	// (0x00063e42) cell_blid2_satellite_pane_ParamLimits

0x788f,	// (0x00063e42) cell_blid2_satellite_pane

0x78ab,	// (0x00063e5e) cell_blid2_satellite_pane_g1

0xe54c,	// (0x0006aaff) cell_blid2_satellite_pane_t1

0xc555,	// (0x00068b08) blid2_speed_pane_g1

0xe55a,	// (0x0006ab0d) blid2_speed_pane_t1

0xe568,	// (0x0006ab1b) blid2_speed_pane_t2

0x0001,

0x045b,	// (0x0005ca0e) blid2_speed_pane_t

0xc555,	// (0x00068b08) blid2_navig_ring_pane_g1

0x78b4,	// (0x00063e67) blid2_navig_ring_pane_g2

0x78bc,	// (0x00063e6f) blid2_navig_ring_pane_g3

0x78c4,	// (0x00063e77) blid2_navig_ring_pane_g4

0x78cc,	// (0x00063e7f) blid2_navig_ring_pane_g5

0x0004,

0xfae1,	// (0x0006c094) blid2_navig_ring_pane_g

0x0991,	// (0x0005cf44) bg_popup_window_pane_cp011

0xe576,	// (0x0006ab29) popup_blid2_search_window_g1

0xe57e,	// (0x0006ab31) popup_blid2_search_window_t1

0xe58c,	// (0x0006ab3f) popup_blid2_search_window_t2

0x0001,

0x046b,	// (0x0005ca1e) popup_blid2_search_window_t

0xa3bd,	// (0x00066970) main_browser_pane_g1

0x9fe2,	// (0x00066595) main_browser_pane_ParamLimits

0xdeeb,	// (0x0006a49e) bg_button_pane_cp011_ParamLimits

0x66c5,	// (0x00062c78) cell_vitu2_function_pane_g1_ParamLimits

0xc020,	// (0x000685d3) bg_popup_sub_pane_cp22_ParamLimits

0x703e,	// (0x000635f1) input_focus_pane_cp08_ParamLimits

0x7055,	// (0x00063608) popup_vitu2_query_button_pane_ParamLimits

0x7055,	// (0x00063608) popup_vitu2_query_button_pane

0x7066,	// (0x00063619) popup_vitu2_query_input_button_pane

0xe23d,	// (0x0006a7f0) popup_vitu2_query_window_g1_ParamLimits

0x7070,	// (0x00063623) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0006bfe2) popup_vitu2_query_window_g_ParamLimits

0x0991,	// (0x0005cf44) bg_button_pane_cp026

0x78d4,	// (0x00063e87) popup_vitu2_query_input_button_pane_g1

0x0991,	// (0x0005cf44) bg_button_pane_cp025

0xe59a,	// (0x0006ab4d) popup_vitu2_query_button_pane_t1

0x4b94,	// (0x00061147) main_mp3_pane_t6

0x4ba2,	// (0x00061155) popup_slider_window_cp01

0xde36,	// (0x0006a3e9) cam4_battery_pane

0xde9a,	// (0x0006a44d) cam4_battery_pane_cp02

0x7582,	// (0x00063b35) cam4_battery_pane_cp01

0xdfde,	// (0x0006a591) cam4_battery_pane_cp03

0xdce7,	// (0x0006a29a) cam4_battery_pane_g1

0xc555,	// (0x00068b08) cam4_battery_pane_g2

0x0001,

0xfaec,	// (0x0006c09f) cam4_battery_pane_g

0xc41b,	// (0x000689ce) popup_blid_sat_info2_window_t11

0x2d59,	// (0x0005f30c) aid_size_touch_mv_arrow_left_ParamLimits

0x2d82,	// (0x0005f335) aid_size_touch_mv_arrow_right_ParamLimits

0xab13,	// (0x000670c6) navi_pane_g1_ParamLimits

0x2dc1,	// (0x0005f374) navi_pane_g2_ParamLimits

0x2def,	// (0x0005f3a2) navi_pane_g3_ParamLimits

0xf404,	// (0x0006b9b7) navi_pane_g_ParamLimits

0x2e49,	// (0x0005f3fc) navi_pane_mv_t1_ParamLimits

0x581a,	// (0x00061dcd) grid_imed_effect_pane_ParamLimits

0x1b9f,	// (0x0005e152) aid_placing_vt_slider_lsc

0xa308,	// (0x000668bb) aid_placing_vt_slider_prt

0x0c11,	// (0x0005d1c4) bg_tb_trans_pane_cp01_ParamLimits

0xc6a5,	// (0x00068c58) popup_image_details_window_g1_ParamLimits

0xc6b8,	// (0x00068c6b) popup_image_details_window_g2_ParamLimits

0xc6cd,	// (0x00068c80) popup_image_details_window_g3_ParamLimits

0xc6cd,	// (0x00068c80) popup_image_details_window_g3

0xf737,	// (0x0006bcea) popup_image_details_window_g_ParamLimits

0xc6e1,	// (0x00068c94) popup_image_details_window_t1_ParamLimits

0xc6f3,	// (0x00068ca6) popup_image_details_window_t2_ParamLimits

0xc70c,	// (0x00068cbf) popup_image_details_window_t3_ParamLimits

0xc720,	// (0x00068cd3) popup_image_details_window_t4_ParamLimits

0xc73b,	// (0x00068cee) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0006bcf1) popup_image_details_window_t_ParamLimits

0x748e,	// (0x00063a41) cl_header_name_pane_ParamLimits

0x748e,	// (0x00063a41) cl_header_name_pane

0x78dc,	// (0x00063e8f) cl_header_name_pane_t1_ParamLimits

0x78dc,	// (0x00063e8f) cl_header_name_pane_t1

0x78fd,	// (0x00063eb0) cl_header_name_pane_t2_ParamLimits

0x78fd,	// (0x00063eb0) cl_header_name_pane_t2

0x793f,	// (0x00063ef2) cl_header_name_pane_t3_ParamLimits

0x793f,	// (0x00063ef2) cl_header_name_pane_t3

0x0002,

0xfaf1,	// (0x0006c0a4) cl_header_name_pane_t_ParamLimits

0xfaf1,	// (0x0006c0a4) cl_header_name_pane_t

0x2e1a,	// (0x0005f3cd) navi_pane_mv_g2_ParamLimits

0xdebd,	// (0x0006a470) field_vitu2_entry_pane_g1_ParamLimits

0xdec9,	// (0x0006a47c) field_vitu2_entry_pane_g2_ParamLimits

0xded5,	// (0x0006a488) field_vitu2_entry_pane_g3_ParamLimits

0xded5,	// (0x0006a488) field_vitu2_entry_pane_g3

0xf935,	// (0x0006bee8) field_vitu2_entry_pane_g_ParamLimits

0x6641,	// (0x00062bf4) cell_vitu2_itu_pane_g1_ParamLimits

0x6651,	// (0x00062c04) cell_vitu2_itu_pane_g2_ParamLimits

0x6651,	// (0x00062c04) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0006bef4) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0006bef4) cell_vitu2_itu_pane_g

0xdeeb,	// (0x0006a49e) bg_vkb2_func_pane_cp05_ParamLimits

0xdeeb,	// (0x0006a49e) bg_vkb2_func_pane_cp05

0xdeeb,	// (0x0006a49e) bg_vkb2_func_pane_cp03

0xdeeb,	// (0x0006a49e) bg_vkb2_func_pane_cp04

0xdeeb,	// (0x0006a49e) bg_vkb2_func_pane_cp10_ParamLimits

0xdeeb,	// (0x0006a49e) bg_vkb2_func_pane_cp10

0x7430,	// (0x000639e3) bg_vkb2_func_pane_cp08

0x7416,	// (0x000639c9) bg_vkb2_func_pane_cp06

0x7424,	// (0x000639d7) bg_vkb2_func_pane_cp07

0xe4c1,	// (0x0006aa74) bg_vkb2_func_pane_cp11_ParamLimits

0xe4c1,	// (0x0006aa74) bg_vkb2_func_pane_cp11

0xe4d6,	// (0x0006aa89) bg_vkb2_func_pane_cp12_ParamLimits

0xe4d6,	// (0x0006aa89) bg_vkb2_func_pane_cp12

0x0991,	// (0x0005cf44) bg_vkb2_func_pane_cp09

0xdf03,	// (0x0006a4b6) bg_vkb2_func_pane_g1

0xa4ce,	// (0x00066a81) bg_vkb2_func_pane_g2

0xdf0b,	// (0x0006a4be) bg_vkb2_func_pane_g3

0xdf13,	// (0x0006a4c6) bg_vkb2_func_pane_g4

0xe200,	// (0x0006a7b3) bg_vkb2_func_pane_g5

0xdf2b,	// (0x0006a4de) bg_vkb2_func_pane_g6

0xdf33,	// (0x0006a4e6) bg_vkb2_func_pane_g7

0xdf23,	// (0x0006a4d6) bg_vkb2_func_pane_g8

0xa4ae,	// (0x00066a61) bg_vkb2_func_pane_g9

0x0008,

0xfaf8,	// (0x0006c0ab) bg_vkb2_func_pane_g

0x7804,	// (0x00063db7) blid2_tripm_pane_g6_ParamLimits

0x7804,	// (0x00063db7) blid2_tripm_pane_g6

0xdca1,	// (0x0006a254) mp4_progress_pane_g1

0x787b,	// (0x00063e2e) blid2_tripm_values_pane_ParamLimits

0x787b,	// (0x00063e2e) blid2_tripm_values_pane

0x7970,	// (0x00063f23) blid2_tripm_values_pane_t1

0x797e,	// (0x00063f31) blid2_tripm_values_pane_t2

0x798c,	// (0x00063f3f) blid2_tripm_values_pane_t3

0x799a,	// (0x00063f4d) blid2_tripm_values_pane_t4

0x79a8,	// (0x00063f5b) blid2_tripm_values_pane_t5

0x79b6,	// (0x00063f69) blid2_tripm_values_pane_t6

0x79c4,	// (0x00063f77) blid2_tripm_values_pane_t7

0x79d2,	// (0x00063f85) blid2_tripm_values_pane_t8

0x79e0,	// (0x00063f93) blid2_tripm_values_pane_t9

0x0008,

0xfb0b,	// (0x0006c0be) blid2_tripm_values_pane_t

0x1bdc,	// (0x0005e18f) call_video_pane_t1_ParamLimits

0x1bf6,	// (0x0005e1a9) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0006b840) call_video_pane_t_ParamLimits

0x3390,	// (0x0005f943) msg_header_pane_g1_ParamLimits

0xad50,	// (0x00067303) msg_header_pane_g2_ParamLimits

0xad50,	// (0x00067303) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0006ba5a) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0006ba5a) msg_header_pane_g

0x9fe2,	// (0x00066595) main_clock2_pane_ParamLimits

0x551f,	// (0x00061ad2) grid_clock2_toolbar_pane_ParamLimits

0x551f,	// (0x00061ad2) grid_clock2_toolbar_pane

0x551f,	// (0x00061ad2) listscroll_clock2_pane_ParamLimits

0x551f,	// (0x00061ad2) listscroll_clock2_pane

0x5607,	// (0x00061bba) main_clock2_pane_t3_ParamLimits

0x5607,	// (0x00061bba) main_clock2_pane_t3

0x5622,	// (0x00061bd5) main_clock2_pane_t4_ParamLimits

0x5622,	// (0x00061bd5) main_clock2_pane_t4

0xe5a8,	// (0x0006ab5b) cell_clock2_toolbar_pane

0xe5b0,	// (0x0006ab63) cell_clock2_toolbar_pane_cp01

0xe5b0,	// (0x0006ab63) cell_clock2_toolbar_pane_cp02

0xe5b8,	// (0x0006ab6b) cell_clock2_toolbar_pane_cp03

0xe5c0,	// (0x0006ab73) list_clock2_pane

0xaa79,	// (0x0006702c) scroll_pane_cp10

0xe5c8,	// (0x0006ab7b) list_single_clock2_pane_ParamLimits

0xe5c8,	// (0x0006ab7b) list_single_clock2_pane

0xabb3,	// (0x00067166) list_highlight_pane_cp08

0xe5d5,	// (0x0006ab88) list_single_clock2_pane_t1

0xe5e3,	// (0x0006ab96) list_single_clock2_pane_t2

0x0001,

0x04a2,	// (0x0005ca55) list_single_clock2_pane_t

0x0991,	// (0x0005cf44) bg_button_pane_cp10

0xe5f1,	// (0x0006aba4) cell_clock2_toolbar_pane_g1

0x3419,	// (0x0005f9cc) aid_main_viewer_pane_g1_ParamLimits

0x3419,	// (0x0005f9cc) aid_main_viewer_pane_g1

0x3427,	// (0x0005f9da) aid_main_viewer_pane_g2_ParamLimits

0x3427,	// (0x0005f9da) aid_main_viewer_pane_g2

0x3435,	// (0x0005f9e8) aid_main_viewer_pane_g3_ParamLimits

0x3435,	// (0x0005f9e8) aid_main_viewer_pane_g3

0x3444,	// (0x0005f9f7) aid_main_viewer_pane_g4_ParamLimits

0x3444,	// (0x0005f9f7) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0006ba6b) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0006ba6b) aid_main_viewer_pane_g

0x3d9c,	// (0x0006034f) main_calc_pane_ParamLimits

0x3db0,	// (0x00060363) main_dialer2_pane_ParamLimits

0x0991,	// (0x0005cf44) main_cam6_pane

0x0991,	// (0x0005cf44) main_vid6_pane

0x552b,	// (0x00061ade) listscroll_gen_pane_cp06_ParamLimits

0x552b,	// (0x00061ade) listscroll_gen_pane_cp06

0x563d,	// (0x00061bf0) main_clock2_pane_t5_ParamLimits

0x563d,	// (0x00061bf0) main_clock2_pane_t5

0x569f,	// (0x00061c52) aid_call2_pane_cp10_ParamLimits

0x56b1,	// (0x00061c64) aid_call_pane_cp10_ParamLimits

0xaae8,	// (0x0006709b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaae8,	// (0x0006709b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56c3,	// (0x00061c76) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56c3,	// (0x00061c76) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaae8,	// (0x0006709b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0006bda1) popup_clock_analogue_window_cp10_g_ParamLimits

0x56d9,	// (0x00061c8c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5d78,	// (0x0006232b) cell_dialer2_keypad_pane_g2_ParamLimits

0x5d78,	// (0x0006232b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0006be87) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0006be87) cell_dialer2_keypad_pane_g

0x5d94,	// (0x00062347) cell_dialer2_keypad_pane_t1

0x69ec,	// (0x00062f9f) main_cset_text2_pane_ParamLimits

0x69ec,	// (0x00062f9f) main_cset_text2_pane

0xe429,	// (0x0006a9dc) area_vitu2_query_pane_g1_ParamLimits

0x7319,	// (0x000638cc) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0006c00b) area_vitu2_query_pane_g_ParamLimits

0x73f2,	// (0x000639a5) area_vitu2_query_pane_t7_ParamLimits

0x73f2,	// (0x000639a5) area_vitu2_query_pane_t7

0x7416,	// (0x000639c9) bg_button_pane_cp018_ParamLimits

0x7424,	// (0x000639d7) bg_button_pane_cp021_ParamLimits

0x7430,	// (0x000639e3) bg_button_pane_cp022_ParamLimits

0x7430,	// (0x000639e3) bg_vkb2_func_pane_cp08_ParamLimits

0x7416,	// (0x000639c9) bg_vkb2_func_pane_cp06_ParamLimits

0x7424,	// (0x000639d7) bg_vkb2_func_pane_cp07_ParamLimits

0x7441,	// (0x000639f4) input_focus_pane_cp09_ParamLimits

0xe016,	// (0x0006a5c9) cam6_autofocus_pane_ParamLimits

0xe016,	// (0x0006a5c9) cam6_autofocus_pane

0x79ee,	// (0x00063fa1) cam6_image_uncrop_pane_ParamLimits

0x79ee,	// (0x00063fa1) cam6_image_uncrop_pane

0x79fd,	// (0x00063fb0) cam6_indi_pane_ParamLimits

0x79fd,	// (0x00063fb0) cam6_indi_pane

0x7a13,	// (0x00063fc6) cam6_mode_pane_ParamLimits

0x7a13,	// (0x00063fc6) cam6_mode_pane

0x7a25,	// (0x00063fd8) cam6_timer_pane_ParamLimits

0x7a25,	// (0x00063fd8) cam6_timer_pane

0x7a31,	// (0x00063fe4) cam6_zoom_pane_ParamLimits

0x7a31,	// (0x00063fe4) cam6_zoom_pane

0x7a3f,	// (0x00063ff2) cam6_mode_pane_g1_ParamLimits

0x7a3f,	// (0x00063ff2) cam6_mode_pane_g1

0x7a4f,	// (0x00064002) cam6_mode_pane_g2_ParamLimits

0x7a4f,	// (0x00064002) cam6_mode_pane_g2

0x7a5f,	// (0x00064012) cam6_mode_pane_g3_ParamLimits

0x7a5f,	// (0x00064012) cam6_mode_pane_g3

0x7a6f,	// (0x00064022) cam6_mode_pane_g4_ParamLimits

0x7a6f,	// (0x00064022) cam6_mode_pane_g4

0x0003,

0xfb1e,	// (0x0006c0d1) cam6_mode_pane_g_ParamLimits

0xfb1e,	// (0x0006c0d1) cam6_mode_pane_g

0xe024,	// (0x0006a5d7) bg_tb_trans_pane_cp08_ParamLimits

0xe024,	// (0x0006a5d7) bg_tb_trans_pane_cp08

0xe5f9,	// (0x0006abac) cam6_battery_pane_ParamLimits

0xe5f9,	// (0x0006abac) cam6_battery_pane

0xe61b,	// (0x0006abce) cam6_indi_pane_g1_ParamLimits

0xe61b,	// (0x0006abce) cam6_indi_pane_g1

0xe62d,	// (0x0006abe0) cam6_indi_pane_g2_ParamLimits

0xe62d,	// (0x0006abe0) cam6_indi_pane_g2

0xe63f,	// (0x0006abf2) cam6_indi_pane_g3_ParamLimits

0xe63f,	// (0x0006abf2) cam6_indi_pane_g3

0x0002,

0xfb27,	// (0x0006c0da) cam6_indi_pane_g_ParamLimits

0xfb27,	// (0x0006c0da) cam6_indi_pane_g

0xe651,	// (0x0006ac04) cam6_indi_pane_t1_ParamLimits

0xe651,	// (0x0006ac04) cam6_indi_pane_t1

0x63cf,	// (0x00062982) cam6_autofocus_pane_g1

0x63c7,	// (0x0006297a) cam6_autofocus_pane_g2

0x63df,	// (0x00062992) cam6_autofocus_pane_g3

0x63d7,	// (0x0006298a) cam6_autofocus_pane_g4

0x0003,

0xfb2e,	// (0x0006c0e1) cam6_autofocus_pane_g

0xe677,	// (0x0006ac2a) cam6_timer_pane_g1

0xe67f,	// (0x0006ac32) cam6_timer_pane_t1

0xe68d,	// (0x0006ac40) cam6_zoom_cont_pane

0xe695,	// (0x0006ac48) cam6_zoom_pane_g1

0xe69d,	// (0x0006ac50) cam6_zoom_pane_g2

0x7a7f,	// (0x00064032) cam6_zoom_pane_g3

0x0002,

0xfb37,	// (0x0006c0ea) cam6_zoom_pane_g

0xc555,	// (0x00068b08) cam6_battery_pane_g1

0xc555,	// (0x00068b08) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0006bcae) cam6_battery_pane_g

0xe6a5,	// (0x0006ac58) cam6_zoom_cont_pane_g1

0xe6ae,	// (0x0006ac61) cam6_zoom_cont_pane_g2

0xe6b7,	// (0x0006ac6a) cam6_zoom_cont_pane_g3

0x0002,

0xfb3e,	// (0x0006c0f1) cam6_zoom_cont_pane_g

0x7a9c,	// (0x0006404f) cam6_mode_pane_cp_ParamLimits

0x7a9c,	// (0x0006404f) cam6_mode_pane_cp

0x7aae,	// (0x00064061) cam6_zoom_pane_cp_ParamLimits

0x7aae,	// (0x00064061) cam6_zoom_pane_cp

0x7abc,	// (0x0006406f) vid6_image_uncrop_cif_pane_ParamLimits

0x7abc,	// (0x0006406f) vid6_image_uncrop_cif_pane

0x7acc,	// (0x0006407f) vid6_image_uncrop_nhd_pane_ParamLimits

0x7acc,	// (0x0006407f) vid6_image_uncrop_nhd_pane

0x7adb,	// (0x0006408e) vid6_image_uncrop_vga_pane_ParamLimits

0x7adb,	// (0x0006408e) vid6_image_uncrop_vga_pane

0x7aea,	// (0x0006409d) vid6_image_uncrop_wvga_pane_ParamLimits

0x7aea,	// (0x0006409d) vid6_image_uncrop_wvga_pane

0x7af9,	// (0x000640ac) vid6_indi_pane_ParamLimits

0x7af9,	// (0x000640ac) vid6_indi_pane

0xe024,	// (0x0006a5d7) bg_tb_trans_pane_cp09_ParamLimits

0xe024,	// (0x0006a5d7) bg_tb_trans_pane_cp09

0xe6cf,	// (0x0006ac82) cam6_battery_pane_cp_ParamLimits

0xe6cf,	// (0x0006ac82) cam6_battery_pane_cp

0xe6db,	// (0x0006ac8e) vid6_indi_pane_g1_ParamLimits

0xe6db,	// (0x0006ac8e) vid6_indi_pane_g1

0xe6ed,	// (0x0006aca0) vid6_indi_pane_g2_ParamLimits

0xe6ed,	// (0x0006aca0) vid6_indi_pane_g2

0xe6ff,	// (0x0006acb2) vid6_indi_pane_g3_ParamLimits

0xe6ff,	// (0x0006acb2) vid6_indi_pane_g3

0xe716,	// (0x0006acc9) vid6_indi_pane_g4_ParamLimits

0xe716,	// (0x0006acc9) vid6_indi_pane_g4

0xe72d,	// (0x0006ace0) vid6_indi_pane_g5_ParamLimits

0xe72d,	// (0x0006ace0) vid6_indi_pane_g5

0x0004,

0xfb45,	// (0x0006c0f8) vid6_indi_pane_g_ParamLimits

0xfb45,	// (0x0006c0f8) vid6_indi_pane_g

0xe747,	// (0x0006acfa) vid6_indi_pane_t1_ParamLimits

0xe747,	// (0x0006acfa) vid6_indi_pane_t1

0xe75d,	// (0x0006ad10) vid6_indi_pane_t2_ParamLimits

0xe75d,	// (0x0006ad10) vid6_indi_pane_t2

0xe785,	// (0x0006ad38) vid6_indi_pane_t3_ParamLimits

0xe785,	// (0x0006ad38) vid6_indi_pane_t3

0xe7ad,	// (0x0006ad60) vid6_indi_pane_t4_ParamLimits

0xe7ad,	// (0x0006ad60) vid6_indi_pane_t4

0x0003,

0xfb50,	// (0x0006c103) vid6_indi_pane_t_ParamLimits

0xfb50,	// (0x0006c103) vid6_indi_pane_t

0xe7d1,	// (0x0006ad84) wait_bar_pane_cp08

0x7b11,	// (0x000640c4) main_cset_text2_pane_t1_ParamLimits

0x7b11,	// (0x000640c4) main_cset_text2_pane_t1

0x7a87,	// (0x0006403a) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a87,	// (0x0006403a) listscroll_gen_pane_cp06_t1

0x0991,	// (0x0005cf44) main_cam6_set_pane

0xde28,	// (0x0006a3db) bg_tb_trans_pane_cp06_ParamLimits

0xde3e,	// (0x0006a3f1) cam4_indicators_pane_g1_ParamLimits

0xde4e,	// (0x0006a401) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0006bec4) cam4_indicators_pane_g_ParamLimits

0xde66,	// (0x0006a419) cam4_indicators_pane_t1_ParamLimits

0xde8c,	// (0x0006a43f) bg_tb_trans_pane_cp07_ParamLimits

0x6370,	// (0x00062923) vid4_indicators_pane_g1_ParamLimits

0x637f,	// (0x00062932) vid4_indicators_pane_g2_ParamLimits

0x638e,	// (0x00062941) vid4_indicators_pane_g3_ParamLimits

0x639b,	// (0x0006294e) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0006bed6) vid4_indicators_pane_g_ParamLimits

0x63b3,	// (0x00062966) vid4_indicators_pane_t1_ParamLimits

0x758c,	// (0x00063b3f) vid4_progress_pane_g1_ParamLimits

0x759d,	// (0x00063b50) vid4_progress_pane_g2_ParamLimits

0xad8e,	// (0x00067341) vid4_progress_pane_g3_ParamLimits

0xde4e,	// (0x0006a401) vid4_progress_pane_g4_ParamLimits

0xfa90,	// (0x0006c043) vid4_progress_pane_g_ParamLimits

0xdfe6,	// (0x0006a599) vid4_progress_pane_t1_ParamLimits

0x75af,	// (0x00063b62) vid4_progress_pane_t2_ParamLimits

0x75c7,	// (0x00063b7a) vid4_progress_pane_t3_ParamLimits

0xfa9b,	// (0x0006c04e) vid4_progress_pane_t_ParamLimits

0x75de,	// (0x00063b91) wait_bar_pane_cp07_ParamLimits

0x7b32,	// (0x000640e5) main_cam6_set_pane_g2_ParamLimits

0x7b32,	// (0x000640e5) main_cam6_set_pane_g2

0x7b58,	// (0x0006410b) main_cset6_listscroll_pane_ParamLimits

0x7b58,	// (0x0006410b) main_cset6_listscroll_pane

0x7b76,	// (0x00064129) main_cset6_slider_pane_ParamLimits

0x7b76,	// (0x00064129) main_cset6_slider_pane

0x7b8c,	// (0x0006413f) main_cset6_text2_pane_ParamLimits

0x7b8c,	// (0x0006413f) main_cset6_text2_pane

0xe7e0,	// (0x0006ad93) main_cset6_text_pane

0xe7e8,	// (0x0006ad9b) main_cset_list_pane_copy1_ParamLimits

0xe7e8,	// (0x0006ad9b) main_cset_list_pane_copy1

0xe7f8,	// (0x0006adab) scroll_pane_cp028_copy1

0x7b9a,	// (0x0006414d) cset_list_set_pane_copy1

0x7bae,	// (0x00064161) aid_position_infowindow_above_copy1

0x7bb6,	// (0x00064169) aid_position_infowindow_below_copy1

0x7bbe,	// (0x00064171) cset_list_set_pane_g1_copy1

0x7bc6,	// (0x00064179) cset_list_set_pane_g3_copy1_ParamLimits

0x7bc6,	// (0x00064179) cset_list_set_pane_g3_copy1

0x7bd5,	// (0x00064188) cset_list_set_pane_t1_copy1_ParamLimits

0x7bd5,	// (0x00064188) cset_list_set_pane_t1_copy1

0x0c11,	// (0x0005d1c4) list_highlight_pane_cp021_copy1_ParamLimits

0x0c11,	// (0x0005d1c4) list_highlight_pane_cp021_copy1

0xe801,	// (0x0006adb4) cset6_slider_pane_ParamLimits

0xe801,	// (0x0006adb4) cset6_slider_pane

0xe82d,	// (0x0006ade0) main_cset6_slider_pane_g1_ParamLimits

0xe82d,	// (0x0006ade0) main_cset6_slider_pane_g1

0x7bea,	// (0x0006419d) main_cset6_slider_pane_g2_ParamLimits

0x7bea,	// (0x0006419d) main_cset6_slider_pane_g2

0xe855,	// (0x0006ae08) main_cset6_slider_pane_g3_ParamLimits

0xe855,	// (0x0006ae08) main_cset6_slider_pane_g3

0x7c12,	// (0x000641c5) main_cset6_slider_pane_g4_ParamLimits

0x7c12,	// (0x000641c5) main_cset6_slider_pane_g4

0x7c1e,	// (0x000641d1) main_cset6_slider_pane_g5_ParamLimits

0x7c1e,	// (0x000641d1) main_cset6_slider_pane_g5

0xe109,	// (0x0006a6bc) main_cset6_slider_pane_g7_ParamLimits

0xe109,	// (0x0006a6bc) main_cset6_slider_pane_g7

0xe115,	// (0x0006a6c8) main_cset6_slider_pane_g8_ParamLimits

0xe115,	// (0x0006a6c8) main_cset6_slider_pane_g8

0x6a9b,	// (0x0006304e) main_cset6_slider_pane_g9_ParamLimits

0x6a9b,	// (0x0006304e) main_cset6_slider_pane_g9

0x6aa7,	// (0x0006305a) main_cset6_slider_pane_g10_ParamLimits

0x6aa7,	// (0x0006305a) main_cset6_slider_pane_g10

0x6ab3,	// (0x00063066) main_cset6_slider_pane_g11_ParamLimits

0x6ab3,	// (0x00063066) main_cset6_slider_pane_g11

0x6abf,	// (0x00063072) main_cset6_slider_pane_g12_ParamLimits

0x6abf,	// (0x00063072) main_cset6_slider_pane_g12

0x6acb,	// (0x0006307e) main_cset6_slider_pane_g13_ParamLimits

0x6acb,	// (0x0006307e) main_cset6_slider_pane_g13

0x6ad7,	// (0x0006308a) main_cset6_slider_pane_g14_ParamLimits

0x6ad7,	// (0x0006308a) main_cset6_slider_pane_g14

0x7c2c,	// (0x000641df) main_cset6_slider_pane_g15_ParamLimits

0x7c2c,	// (0x000641df) main_cset6_slider_pane_g15

0x6afb,	// (0x000630ae) main_cset6_slider_pane_g16_ParamLimits

0x6afb,	// (0x000630ae) main_cset6_slider_pane_g16

0x6b09,	// (0x000630bc) main_cset6_slider_pane_g17_ParamLimits

0x6b09,	// (0x000630bc) main_cset6_slider_pane_g17

0x0011,

0xfb59,	// (0x0006c10c) main_cset6_slider_pane_g_ParamLimits

0xfb59,	// (0x0006c10c) main_cset6_slider_pane_g

0xe861,	// (0x0006ae14) main_cset6_slider_pane_t1_ParamLimits

0xe861,	// (0x0006ae14) main_cset6_slider_pane_t1

0x7c5c,	// (0x0006420f) main_cset6_slider_pane_t2_ParamLimits

0x7c5c,	// (0x0006420f) main_cset6_slider_pane_t2

0x7c87,	// (0x0006423a) main_cset6_slider_pane_t3_ParamLimits

0x7c87,	// (0x0006423a) main_cset6_slider_pane_t3

0x7cb2,	// (0x00064265) main_cset6_slider_pane_t4_ParamLimits

0x7cb2,	// (0x00064265) main_cset6_slider_pane_t4

0x7cdf,	// (0x00064292) main_cset6_slider_pane_t5_ParamLimits

0x7cdf,	// (0x00064292) main_cset6_slider_pane_t5

0xe8a2,	// (0x0006ae55) main_cset6_slider_pane_t7_ParamLimits

0xe8a2,	// (0x0006ae55) main_cset6_slider_pane_t7

0x7d0c,	// (0x000642bf) main_cset6_slider_pane_t8_ParamLimits

0x7d0c,	// (0x000642bf) main_cset6_slider_pane_t8

0x7d30,	// (0x000642e3) main_cset6_slider_pane_t9_ParamLimits

0x7d30,	// (0x000642e3) main_cset6_slider_pane_t9

0x7d54,	// (0x00064307) main_cset6_slider_pane_t10_ParamLimits

0x7d54,	// (0x00064307) main_cset6_slider_pane_t10

0x7d78,	// (0x0006432b) main_cset6_slider_pane_t11_ParamLimits

0x7d78,	// (0x0006432b) main_cset6_slider_pane_t11

0xe8d8,	// (0x0006ae8b) main_cset6_slider_pane_t14_ParamLimits

0xe8d8,	// (0x0006ae8b) main_cset6_slider_pane_t14

0xe911,	// (0x0006aec4) main_cset6_slider_pane_t15_ParamLimits

0xe911,	// (0x0006aec4) main_cset6_slider_pane_t15

0x000b,

0xfb7e,	// (0x0006c131) main_cset6_slider_pane_t_ParamLimits

0xfb7e,	// (0x0006c131) main_cset6_slider_pane_t

0xe94a,	// (0x0006aefd) cset_slider_pane_g1_copy1

0xe953,	// (0x0006af06) cset_slider_pane_g2_copy1

0xe95c,	// (0x0006af0f) cset_slider_pane_g3_copy1

0x0991,	// (0x0005cf44) bg_popup_sub_pane_cp011_copy1

0xe249,	// (0x0006a7fc) main_cset_text_pane_g1_copy1

0xe251,	// (0x0006a804) main_cset_text_pane_t1_copy1

0xe25f,	// (0x0006a812) main_cset_text_pane_t2_copy1

0xe26d,	// (0x0006a820) main_cset_text_pane_t3_copy1

0xe27b,	// (0x0006a82e) main_cset_text_pane_t4_copy1

0xe289,	// (0x0006a83c) main_cset_text_pane_t5_copy1

0xe297,	// (0x0006a84a) main_cset_text_pane_t6_copy1

0xe2a5,	// (0x0006a858) main_cset_text_pane_t7_copy1

0x7b11,	// (0x000640c4) main_cset_text2_pane_t1_copy1

0x0991,	// (0x0005cf44) main_ncimui_pane

0x403e,	// (0x000605f1) popup_query_ncimui_window_ParamLimits

0x403e,	// (0x000605f1) popup_query_ncimui_window

0x4d1c,	// (0x000612cf) field_cale_ev2_pane_g4_ParamLimits

0x4d1c,	// (0x000612cf) field_cale_ev2_pane_g4

0x5c43,	// (0x000621f6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c43,	// (0x000621f6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0006be62) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0006be62) cell_video_dialer_keypad_pane_g

0x5c5b,	// (0x0006220e) cell_video_dialer_keypad_pane_t1

0x0991,	// (0x0005cf44) bg_popup_window_pane_cp012

0xa965,	// (0x00066f18) heading_pane_cp06

0xe983,	// (0x0006af36) ncim_query_content_pane

0x0991,	// (0x0005cf44) bg_popup_heading_pane_cp01

0xe98b,	// (0x0006af3e) ncim_heading_pane_t1

0xe999,	// (0x0006af4c) ncim_indicator_popup_pane

0xe9ab,	// (0x0006af5e) ncim_query_button_pane

0xe9c1,	// (0x0006af74) ncim_query_content_pane_t1

0xe9d3,	// (0x0006af86) ncim_query_content_pane_t2

0x0005,

0xfbbd,	// (0x0006c170) ncim_query_content_pane_t

0xea0d,	// (0x0006afc0) ncim_query_list_pane

0xea1f,	// (0x0006afd2) ncim_query_popup_pane

0xe999,	// (0x0006af4c) ncim_indicator_popup_pane_ParamLimits

0x7f68,	// (0x0006451b) ncim_query_content_pane_g1_ParamLimits

0x7f68,	// (0x0006451b) ncim_query_content_pane_g1

0xe9c1,	// (0x0006af74) ncim_query_content_pane_t1_ParamLimits

0xe9d3,	// (0x0006af86) ncim_query_content_pane_t2_ParamLimits

0x7f74,	// (0x00064527) ncim_query_content_pane_t3_ParamLimits

0x7f74,	// (0x00064527) ncim_query_content_pane_t3

0x7f9c,	// (0x0006454f) ncim_query_content_pane_t4_ParamLimits

0x7f9c,	// (0x0006454f) ncim_query_content_pane_t4

0x7fc4,	// (0x00064577) ncim_query_content_pane_t5_ParamLimits

0x7fc4,	// (0x00064577) ncim_query_content_pane_t5

0xe9e5,	// (0x0006af98) ncim_query_content_pane_t6_ParamLimits

0xe9e5,	// (0x0006af98) ncim_query_content_pane_t6

0xfbbd,	// (0x0006c170) ncim_query_content_pane_t_ParamLimits

0xea0d,	// (0x0006afc0) ncim_query_list_pane_ParamLimits

0xea1f,	// (0x0006afd2) ncim_query_popup_pane_ParamLimits

0xea33,	// (0x0006afe6) wait_bar_pane_cp04

0x0991,	// (0x0005cf44) input_focus_pane_cp011

0xea3b,	// (0x0006afee) ncim_query_popup_pane_t1

0xea49,	// (0x0006affc) ncim_list_query_list_pane_ParamLimits

0xea49,	// (0x0006affc) ncim_list_query_list_pane

0x0991,	// (0x0005cf44) bg_button_pane_cp027

0xea5c,	// (0x0006b00f) ncim_query_button_pane_g1

0x0991,	// (0x0005cf44) list_highlight_pane_cp012

0xea66,	// (0x0006b019) ncim_list_query_list_pane_g1

0xea6e,	// (0x0006b021) ncim_list_query_list_pane_t1

0xde5a,	// (0x0006a40d) cam4_indicators_pane_g3_ParamLimits

0xde5a,	// (0x0006a40d) cam4_indicators_pane_g3

0x63a7,	// (0x0006295a) vid4_indicators_pane_g5_ParamLimits

0x63a7,	// (0x0006295a) vid4_indicators_pane_g5

0xde5a,	// (0x0006a40d) vid4_progress_pane_g5_ParamLimits

0xde5a,	// (0x0006a40d) vid4_progress_pane_g5

0x7e81,	// (0x00064434) main_ncimui_pane_g1

0x7ed7,	// (0x0006448a) ncimui_group_query_pane_ParamLimits

0x7ed7,	// (0x0006448a) ncimui_group_query_pane

0x7f13,	// (0x000644c6) ncimui_list_pane_ParamLimits

0x7f13,	// (0x000644c6) ncimui_list_pane

0x7f34,	// (0x000644e7) ncimui_text_pane_ParamLimits

0x7f34,	// (0x000644e7) ncimui_text_pane

0x7fec,	// (0x0006459f) ncimui_text_pane_t1_ParamLimits

0x7fec,	// (0x0006459f) ncimui_text_pane_t1

0xea7c,	// (0x0006b02f) ncimui_list_single_graphic_pane_ParamLimits

0xea7c,	// (0x0006b02f) ncimui_list_single_graphic_pane

0x800a,	// (0x000645bd) ncimui_query_pane_ParamLimits

0x800a,	// (0x000645bd) ncimui_query_pane

0x0991,	// (0x0005cf44) list_highlight_pane_cp013

0xea8c,	// (0x0006b03f) ncim_list_query_list_pane_t1_copy1

0xea66,	// (0x0006b019) ncim_list_single_graphic_pane_g1

0xea9a,	// (0x0006b04d) ncim_query_button_pane_cp01

0xeaa6,	// (0x0006b059) ncim_query_entry_pane_ParamLimits

0xeaa6,	// (0x0006b059) ncim_query_entry_pane

0xeab9,	// (0x0006b06c) ncimui_query_pane_g1

0xeac5,	// (0x0006b078) ncimui_query_pane_t1_ParamLimits

0xeac5,	// (0x0006b078) ncimui_query_pane_t1

0x0c11,	// (0x0005d1c4) input_focus_pane_cp012

0xeade,	// (0x0006b091) ncim_query_entry_pane_t1

0x9fe2,	// (0x00066595) main_im_pane_ParamLimits

0x0c11,	// (0x0005d1c4) main_mobtv_pane_ParamLimits

0x0c11,	// (0x0005d1c4) main_mobtv_pane

0x7c44,	// (0x000641f7) main_cset6_slider_pane_g18_ParamLimits

0x7c44,	// (0x000641f7) main_cset6_slider_pane_g18

0x7c50,	// (0x00064203) main_cset6_slider_pane_g19_ParamLimits

0x7c50,	// (0x00064203) main_cset6_slider_pane_g19

0x801d,	// (0x000645d0) bg_main_mobtv_pane_ParamLimits

0x801d,	// (0x000645d0) bg_main_mobtv_pane

0x802b,	// (0x000645de) main_mobtv_info_pane

0x8036,	// (0x000645e9) main_mobtv_loading_pane_ParamLimits

0x8036,	// (0x000645e9) main_mobtv_loading_pane

0xeaf0,	// (0x0006b0a3) main_mobtv_pg_channel_list_pane

0xeafa,	// (0x0006b0ad) main_mobtv_pg_hdr_pane

0x8043,	// (0x000645f6) main_mobtv_programe_curr_pane_ParamLimits

0x8043,	// (0x000645f6) main_mobtv_programe_curr_pane

0x8050,	// (0x00064603) main_mobtv_programe_next_pane_ParamLimits

0x8050,	// (0x00064603) main_mobtv_programe_next_pane

0xeb03,	// (0x0006b0b6) popup_mobtv_noti_window

0xc555,	// (0x00068b08) main_tv_pg_hdr_pane_g1

0xeb0d,	// (0x0006b0c0) main_tv_pg_hdr_pane_g2

0xeb15,	// (0x0006b0c8) main_tv_pg_hdr_pane_g3

0xeb1d,	// (0x0006b0d0) main_tv_pg_hdr_pane_g4

0xeb25,	// (0x0006b0d8) main_tv_pg_hdr_pane_g5

0xeb2f,	// (0x0006b0e2) main_tv_pg_hdr_pane_g6

0xeb39,	// (0x0006b0ec) main_tv_pg_hdr_pane_g7

0xeb43,	// (0x0006b0f6) main_tv_pg_hdr_pane_g8

0xeb4d,	// (0x0006b100) main_tv_pg_hdr_pane_g9

0xeb57,	// (0x0006b10a) main_tv_pg_hdr_pane_g10

0xeb61,	// (0x0006b114) main_tv_pg_hdr_pane_g11

0x000a,

0xfbca,	// (0x0006c17d) main_tv_pg_hdr_pane_g

0xeb6b,	// (0x0006b11e) main_tv_pg_hdr_pane_t1

0xeb79,	// (0x0006b12c) main_tv_pg_hdr_pane_t2

0xeb87,	// (0x0006b13a) main_tv_pg_hdr_pane_t3

0xeb97,	// (0x0006b14a) main_tv_pg_hdr_pane_t4

0xeba7,	// (0x0006b15a) main_tv_pg_hdr_pane_t5

0x0004,

0x056a,	// (0x0005cb1d) main_tv_pg_hdr_pane_t

0xebb7,	// (0x0006b16a) single_mobtv_pg_channel_pane_ParamLimits

0xebb7,	// (0x0006b16a) single_mobtv_pg_channel_pane

0xebc9,	// (0x0006b17c) single_mobtv_pg_channel_table_pane

0xebd2,	// (0x0006b185) single_mobtv_pg_channel_thumb_pane

0xebdb,	// (0x0006b18e) single_tv_pg_channel_pane_g1

0xebe4,	// (0x0006b197) single_tv_pg_channel_pane_g2

0x0001,

0x0575,	// (0x0005cb28) single_tv_pg_channel_pane_g

0xc785,	// (0x00068d38) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc785,	// (0x00068d38) bg_single_mobtv_pg_channel_thumb_pane

0xec01,	// (0x0006b1b4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xec01,	// (0x0006b1b4) single_mobtv_pg_channel_thumb_pane_g1

0xec0f,	// (0x0006b1c2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xec0f,	// (0x0006b1c2) single_mobtv_pg_channel_thumb_pane_g2

0xec1b,	// (0x0006b1ce) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xec1b,	// (0x0006b1ce) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe1,	// (0x0006c194) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe1,	// (0x0006c194) single_mobtv_pg_channel_thumb_pane_g

0xec27,	// (0x0006b1da) single_mobtv_pg_channel_thumb_pane_t1

0xec35,	// (0x0006b1e8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbe8,	// (0x0006c19b) single_mobtv_pg_channel_thumb_pane_t

0xc555,	// (0x00068b08) bg_single_mobtv_pg_channel_table_pane_g1

0xc555,	// (0x00068b08) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0006bcae) bg_single_mobtv_pg_channel_table_pane_g

0xec43,	// (0x0006b1f6) single_mobtv_pg_channel_table_pane_t1

0xec51,	// (0x0006b204) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbed,	// (0x0006c1a0) single_mobtv_pg_channel_table_pane_t

0x8065,	// (0x00064618) main_mobtv_info_pane_g1_ParamLimits

0x8065,	// (0x00064618) main_mobtv_info_pane_g1

0x8083,	// (0x00064636) main_mobtv_info_pane_t1_ParamLimits

0x8083,	// (0x00064636) main_mobtv_info_pane_t1

0x80fb,	// (0x000646ae) main_mobtv_info_pane_t2_ParamLimits

0x80fb,	// (0x000646ae) main_mobtv_info_pane_t2

0x0002,

0xfbf7,	// (0x0006c1aa) main_mobtv_info_pane_t_ParamLimits

0xfbf7,	// (0x0006c1aa) main_mobtv_info_pane_t

0x818c,	// (0x0006473f) wait_bar_pane_cp05

0x819e,	// (0x00064751) main_mobtv_loading_pane_g1_ParamLimits

0x819e,	// (0x00064751) main_mobtv_loading_pane_g1

0x81af,	// (0x00064762) main_mobtv_loading_pane_g2_ParamLimits

0x81af,	// (0x00064762) main_mobtv_loading_pane_g2

0x81bb,	// (0x0006476e) main_mobtv_loading_pane_g3_ParamLimits

0x81bb,	// (0x0006476e) main_mobtv_loading_pane_g3

0x0002,

0xfbfe,	// (0x0006c1b1) main_mobtv_loading_pane_g_ParamLimits

0xfbfe,	// (0x0006c1b1) main_mobtv_loading_pane_g

0xec5f,	// (0x0006b212) main_mobtv_loading_pane_t1_ParamLimits

0xec5f,	// (0x0006b212) main_mobtv_loading_pane_t1

0xec77,	// (0x0006b22a) main_mobtv_loading_pane_t2_ParamLimits

0xec77,	// (0x0006b22a) main_mobtv_loading_pane_t2

0x0001,

0xfc05,	// (0x0006c1b8) main_mobtv_loading_pane_t_ParamLimits

0xfc05,	// (0x0006c1b8) main_mobtv_loading_pane_t

0x81ce,	// (0x00064781) wait_bar_pane_cp06_ParamLimits

0x81ce,	// (0x00064781) wait_bar_pane_cp06

0xec9b,	// (0x0006b24e) main_mobtv_programe_curr_pane_t1

0xeca9,	// (0x0006b25c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0a,	// (0x0006c1bd) main_mobtv_programe_curr_pane_t

0xecb7,	// (0x0006b26a) main_mobtv_programe_next_pane_t1

0xecc5,	// (0x0006b278) main_mobtv_programe_next_pane_t2

0xecd3,	// (0x0006b286) main_mobtv_programe_next_pane_t3

0x0002,

0xfc0f,	// (0x0006c1c2) main_mobtv_programe_next_pane_t

0x0991,	// (0x0005cf44) bg_popup_mobtv_noti_window_pane

0xece1,	// (0x0006b294) popup_mobtv_noti_window_g1

0xece9,	// (0x0006b29c) popup_mobtv_noti_window_t1

0xecf7,	// (0x0006b2aa) popup_mobtv_noti_window_t2

0x0001,

0xfc16,	// (0x0006c1c9) popup_mobtv_noti_window_t

0xc555,	// (0x00068b08) bg_popup_mobtv_noti_window_pane_g1

0x0991,	// (0x0005cf44) sc_clock_pane

0x0991,	// (0x0005cf44) main_fs_bigclock_pane

0x7865,	// (0x00063e18) blid2_tripm_pane_t4_ParamLimits

0x7865,	// (0x00063e18) blid2_tripm_pane_t4

0x81dd,	// (0x00064790) sc_clock_pane_g1_ParamLimits

0x81dd,	// (0x00064790) sc_clock_pane_g1

0x81ef,	// (0x000647a2) sc_clock_pane_t1_ParamLimits

0x81ef,	// (0x000647a2) sc_clock_pane_t1

0x8213,	// (0x000647c6) sc_clock_pane_t2_ParamLimits

0x8213,	// (0x000647c6) sc_clock_pane_t2

0x822b,	// (0x000647de) sc_clock_pane_t3_ParamLimits

0x822b,	// (0x000647de) sc_clock_pane_t3

0x0004,

0xfc1b,	// (0x0006c1ce) sc_clock_pane_t_ParamLimits

0xfc1b,	// (0x0006c1ce) sc_clock_pane_t

0x90ca,	// (0x0006567d) main_fs_bigclock_indicator_pane_ParamLimits

0x90ca,	// (0x0006567d) main_fs_bigclock_indicator_pane

0xc755,	// (0x00068d08) main_fs_bigclock_pane_g1_ParamLimits

0xc755,	// (0x00068d08) main_fs_bigclock_pane_g1

0x90d6,	// (0x00065689) main_fs_bigclock_pane_t1_ParamLimits

0x90d6,	// (0x00065689) main_fs_bigclock_pane_t1

0x90e8,	// (0x0006569b) main_fs_bigclock_pane_t2_ParamLimits

0x90e8,	// (0x0006569b) main_fs_bigclock_pane_t2

0x90fc,	// (0x000656af) main_fs_bigclock_pane_t3_ParamLimits

0x90fc,	// (0x000656af) main_fs_bigclock_pane_t3

0x0002,

0xfde5,	// (0x0006c398) main_fs_bigclock_pane_t_ParamLimits

0xfde5,	// (0x0006c398) main_fs_bigclock_pane_t

0xd5dc,	// (0x00069b8f) main_fs_bigclock_indicator_pane_g1

0xe9b3,	// (0x0006af66) ncim_query_content_pane_g2_ParamLimits

0xe9b3,	// (0x0006af66) ncim_query_content_pane_g2

0x0001,

0xfbb8,	// (0x0006c16b) ncim_query_content_pane_g_ParamLimits

0xfbb8,	// (0x0006c16b) ncim_query_content_pane_g

0x8242,	// (0x000647f5) sc_clock_pane_t4_ParamLimits

0x8242,	// (0x000647f5) sc_clock_pane_t4

0x0c11,	// (0x0005d1c4) main_radioblah_pane

0xdd8e,	// (0x0006a341) cell_call4_button_pane_t1_copy1_ParamLimits

0xdd8e,	// (0x0006a341) cell_call4_button_pane_t1_copy1

0x7e89,	// (0x0006443c) main_ncimui_pane_t1_ParamLimits

0x7e89,	// (0x0006443c) main_ncimui_pane_t1

0x7ea3,	// (0x00064456) main_ncimui_pane_t2_ParamLimits

0x7ea3,	// (0x00064456) main_ncimui_pane_t2

0x0002,

0xfbb1,	// (0x0006c164) main_ncimui_pane_t_ParamLimits

0xfbb1,	// (0x0006c164) main_ncimui_pane_t

0xee43,	// (0x0006b3f6) main_radioblah_anim_pane_ParamLimits

0xee43,	// (0x0006b3f6) main_radioblah_anim_pane

0xee54,	// (0x0006b407) main_radioblah_info_pane_ParamLimits

0xee54,	// (0x0006b407) main_radioblah_info_pane

0xee68,	// (0x0006b41b) main_radioblah_pane_t1_ParamLimits

0xee68,	// (0x0006b41b) main_radioblah_pane_t1

0xee84,	// (0x0006b437) main_radioblah_pane_t2_ParamLimits

0xee84,	// (0x0006b437) main_radioblah_pane_t2

0x0003,

0x05d5,	// (0x0005cb88) main_radioblah_pane_t_ParamLimits

0x05d5,	// (0x0005cb88) main_radioblah_pane_t

0x82f2,	// (0x000648a5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82f2,	// (0x000648a5) main_radioblah_rocker_ctrl_pane

0xeecc,	// (0x0006b47f) main_radioblah_info_pane_t1_ParamLimits

0xeecc,	// (0x0006b47f) main_radioblah_info_pane_t1

0x834a,	// (0x000648fd) main_radioblah_info_pane_t2_ParamLimits

0x834a,	// (0x000648fd) main_radioblah_info_pane_t2

0x0003,

0xfc26,	// (0x0006c1d9) main_radioblah_info_pane_t_ParamLimits

0xfc26,	// (0x0006c1d9) main_radioblah_info_pane_t

0xc555,	// (0x00068b08) main_radioblah_rocker_ctrl_pane_g1

0x83fa,	// (0x000649ad) main_radioblah_rocker_ctrl_pane_g2

0x8402,	// (0x000649b5) main_radioblah_rocker_ctrl_pane_g3

0x840a,	// (0x000649bd) main_radioblah_rocker_ctrl_pane_g4

0x8412,	// (0x000649c5) main_radioblah_rocker_ctrl_pane_g5

0x841a,	// (0x000649cd) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2f,	// (0x0006c1e2) main_radioblah_rocker_ctrl_pane_g

0x7b11,	// (0x000640c4) main_cset_text2_pane_t1_copy1_ParamLimits

0xde1e,	// (0x0006a3d1) cam4_image_uncrop_qvga_pane

0xde82,	// (0x0006a435) vid4_image_uncrop_qcif_pane

0xe016,	// (0x0006a5c9) cam6_image_uncrop_qvga_pane_ParamLimits

0xe016,	// (0x0006a5c9) cam6_image_uncrop_qvga_pane

0xe6bf,	// (0x0006ac72) vid6_image_uncrop_qcif_pane_ParamLimits

0xe6bf,	// (0x0006ac72) vid6_image_uncrop_qcif_pane

0x0991,	// (0x0005cf44) bg_popup_preview_window_pane_cp03

0xe965,	// (0x0006af18) list_cset_text2_pane

0xe96d,	// (0x0006af20) main_cset6_text2_pane_g1

0xe975,	// (0x0006af28) main_cset6_text2_pane_t1

0x8422,	// (0x000649d5) list_cset_text2_pane_t1_ParamLimits

0x8422,	// (0x000649d5) list_cset_text2_pane_t1

0x0c11,	// (0x0005d1c4) main_radioblah_pane_ParamLimits

0x8178,	// (0x0006472b) main_mobtv_info_pane_t3_ParamLimits

0x8178,	// (0x0006472b) main_mobtv_info_pane_t3

0x82e0,	// (0x00064893) main_radioblah_pane_g1

0x831a,	// (0x000648cd) main_radioblah_info_pane_g1

0x839f,	// (0x00064952) main_radioblah_info_pane_t3_ParamLimits

0x839f,	// (0x00064952) main_radioblah_info_pane_t3

0x2793,	// (0x0005ed46) highlight_cell_cale_month_pane_ParamLimits

0x2793,	// (0x0005ed46) highlight_cell_cale_month_pane

0x0991,	// (0x0005cf44) main_phob_fisheye_pane

0xc867,	// (0x00068e1a) scroll_pane_cp0031_ParamLimits

0xc867,	// (0x00068e1a) scroll_pane_cp0031

0xe7d1,	// (0x0006ad84) wait_bar_pane_cp08_ParamLimits

0x7b9a,	// (0x0006414d) cset_list_set_pane_copy1_ParamLimits

0xef06,	// (0x0006b4b9) highlight_cell_cale_month_pane_g1

0x843c,	// (0x000649ef) highlight_cell_cale_month_pane_t1

0xe47d,	// (0x0006aa30) list_gen_pane_cp01

0xe0f4,	// (0x0006a6a7) scroll_pane_01

0x844a,	// (0x000649fd) list_single_double_fisheye_pane

0x8453,	// (0x00064a06) list_double_fisheye_pane_g1_ParamLimits

0x8453,	// (0x00064a06) list_double_fisheye_pane_g1

0x845f,	// (0x00064a12) list_double_fisheye_pane_g2_ParamLimits

0x845f,	// (0x00064a12) list_double_fisheye_pane_g2

0x8473,	// (0x00064a26) list_double_fisheye_pane_g3_ParamLimits

0x8473,	// (0x00064a26) list_double_fisheye_pane_g3

0x0004,

0xfc3c,	// (0x0006c1ef) list_double_fisheye_pane_g_ParamLimits

0xfc3c,	// (0x0006c1ef) list_double_fisheye_pane_g

0x849c,	// (0x00064a4f) list_double_fisheye_pane_t1_ParamLimits

0x849c,	// (0x00064a4f) list_double_fisheye_pane_t1

0x84b7,	// (0x00064a6a) list_double_fisheye_pane_t2_ParamLimits

0x84b7,	// (0x00064a6a) list_double_fisheye_pane_t2

0x0001,

0xfc47,	// (0x0006c1fa) list_double_fisheye_pane_t_ParamLimits

0xfc47,	// (0x0006c1fa) list_double_fisheye_pane_t

0x0991,	// (0x0005cf44) main_call5_pane

0x826d,	// (0x00064820) sc_swipe_pane_ParamLimits

0x826d,	// (0x00064820) sc_swipe_pane

0x84ec,	// (0x00064a9f) call5_image_pane_ParamLimits

0x84ec,	// (0x00064a9f) call5_image_pane

0x8509,	// (0x00064abc) call5_swipe_1_pane_ParamLimits

0x8509,	// (0x00064abc) call5_swipe_1_pane

0x851c,	// (0x00064acf) call5_swipe_2_pane_ParamLimits

0x851c,	// (0x00064acf) call5_swipe_2_pane

0x8549,	// (0x00064afc) popup_call5_audio_first_window_ParamLimits

0x8549,	// (0x00064afc) popup_call5_audio_first_window

0xc785,	// (0x00068d38) call5_swipe_1_pane_g1_ParamLimits

0xc785,	// (0x00068d38) call5_swipe_1_pane_g1

0xef0e,	// (0x0006b4c1) call5_swipe_1_pane_g2_ParamLimits

0xef0e,	// (0x0006b4c1) call5_swipe_1_pane_g2

0x0001,

0xfc4c,	// (0x0006c1ff) call5_swipe_1_pane_g_ParamLimits

0xfc4c,	// (0x0006c1ff) call5_swipe_1_pane_g

0xef1a,	// (0x0006b4cd) call5_swipe_1_pane_t1_ParamLimits

0xef1a,	// (0x0006b4cd) call5_swipe_1_pane_t1

0xc785,	// (0x00068d38) call5_swipe_2_pane_g1_ParamLimits

0xc785,	// (0x00068d38) call5_swipe_2_pane_g1

0xef2f,	// (0x0006b4e2) call5_swipe_2_pane_g2_ParamLimits

0xef2f,	// (0x0006b4e2) call5_swipe_2_pane_g2

0x0001,

0xfc51,	// (0x0006c204) call5_swipe_2_pane_g_ParamLimits

0xfc51,	// (0x0006c204) call5_swipe_2_pane_g

0xef3b,	// (0x0006b4ee) call5_swipe_2_pane_t1_ParamLimits

0xef3b,	// (0x0006b4ee) call5_swipe_2_pane_t1

0xef50,	// (0x0006b503) sc_swipe_pane_g1_ParamLimits

0xef50,	// (0x0006b503) sc_swipe_pane_g1

0xef5d,	// (0x0006b510) sc_swipe_pane_g2_ParamLimits

0xef5d,	// (0x0006b510) sc_swipe_pane_g2

0x0001,

0x060e,	// (0x0005cbc1) sc_swipe_pane_g_ParamLimits

0x060e,	// (0x0005cbc1) sc_swipe_pane_g

0xef69,	// (0x0006b51c) sc_swipe_pane_t1_ParamLimits

0xef69,	// (0x0006b51c) sc_swipe_pane_t1

0x0991,	// (0x0005cf44) main_cmail_launcher_pane

0x855e,	// (0x00064b11) aid_size_cell_cmail_l_ParamLimits

0x855e,	// (0x00064b11) aid_size_cell_cmail_l

0x8578,	// (0x00064b2b) grid_cmail_l_pane_ParamLimits

0x8578,	// (0x00064b2b) grid_cmail_l_pane

0x8593,	// (0x00064b46) cell_cmail_l_pane_ParamLimits

0x8593,	// (0x00064b46) cell_cmail_l_pane

0x85bb,	// (0x00064b6e) cell_cmail_l_pane_g1_ParamLimits

0x85bb,	// (0x00064b6e) cell_cmail_l_pane_g1

0x85c7,	// (0x00064b7a) cell_cmail_l_pane_t1_ParamLimits

0x85c7,	// (0x00064b7a) cell_cmail_l_pane_t1

0xef7e,	// (0x0006b531) cell_cmail_l_pane_t2_ParamLimits

0xef7e,	// (0x0006b531) cell_cmail_l_pane_t2

0x0001,

0xfc56,	// (0x0006c209) cell_cmail_l_pane_t_ParamLimits

0xfc56,	// (0x0006c209) cell_cmail_l_pane_t

0x0c11,	// (0x0005d1c4) grid_highlight_pane_cp018_ParamLimits

0x0c11,	// (0x0005d1c4) grid_highlight_pane_cp018

0x0ac6,	// (0x0005d079) main2_pane_ParamLimits

0x0ac6,	// (0x0005d079) main2_pane

0xa0bb,	// (0x0006666e) popup_sp_fs_action_menu_bg_pane_g1

0xa0c3,	// (0x00066676) popup_sp_fs_action_menu_bg_pane_g2

0xa0cb,	// (0x0006667e) popup_sp_fs_action_menu_bg_pane_g3

0xa0d3,	// (0x00066686) popup_sp_fs_action_menu_bg_pane_g4

0xa0db,	// (0x0006668e) popup_sp_fs_action_menu_bg_pane_g5

0xa0e3,	// (0x00066696) popup_sp_fs_action_menu_bg_pane_g6

0xa0eb,	// (0x0006669e) popup_sp_fs_action_menu_bg_pane_g7

0xa0f3,	// (0x000666a6) popup_sp_fs_action_menu_bg_pane_g8

0xa0fb,	// (0x000666ae) popup_sp_fs_action_menu_bg_pane_g9

0xa103,	// (0x000666b6) popup_sp_fs_action_menu_bg_pane_g10

0xa103,	// (0x000666b6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0006b75a) popup_sp_fs_action_menu_bg_pane_g

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t3_g3_g1

0x1a27,	// (0x0005dfda) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1a27,	// (0x0005dfda) list_medium_line_x2_t3_g3_g2

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0006b80a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0006b80a) list_medium_line_x2_t3_g3_g

0x1a3f,	// (0x0005dff2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1a3f,	// (0x0005dff2) list_medium_line_x2_t3_g3_t1

0x1a54,	// (0x0005e007) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1a54,	// (0x0005e007) list_medium_line_x2_t3_g3_t2

0x1a68,	// (0x0005e01b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1a68,	// (0x0005e01b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0006b811) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0006b811) list_medium_line_x2_t3_g3_t

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t3_g2_g1

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0006b818) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0006b818) list_medium_line_x2_t3_g2_g

0x1a7d,	// (0x0005e030) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1a7d,	// (0x0005e030) list_medium_line_x2_t3_g2_t1

0x1a93,	// (0x0005e046) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1a93,	// (0x0005e046) list_medium_line_x2_t3_g2_t2

0x1aa5,	// (0x0005e058) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1aa5,	// (0x0005e058) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0006b81d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0006b81d) list_medium_line_x2_t3_g2_t

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t4_g4_g1

0x1ac3,	// (0x0005e076) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ac3,	// (0x0005e076) list_medium_line_x2_t4_g4_g2

0x1a27,	// (0x0005dfda) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1a27,	// (0x0005dfda) list_medium_line_x2_t4_g4_g3

0x1acf,	// (0x0005e082) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1acf,	// (0x0005e082) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0006b824) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0006b824) list_medium_line_x2_t4_g4_g

0x1adb,	// (0x0005e08e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1adb,	// (0x0005e08e) list_medium_line_x2_t4_g4_t1

0x1af5,	// (0x0005e0a8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1af5,	// (0x0005e0a8) list_medium_line_x2_t4_g4_t2

0x1b0b,	// (0x0005e0be) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b0b,	// (0x0005e0be) list_medium_line_x2_t4_g4_t3

0x1b20,	// (0x0005e0d3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1b20,	// (0x0005e0d3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0006b82d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0006b82d) list_medium_line_x2_t4_g4_t

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t2_g4_g1

0x1ac3,	// (0x0005e076) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ac3,	// (0x0005e076) list_medium_line_x2_t2_g4_g2

0x1a27,	// (0x0005dfda) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1a27,	// (0x0005dfda) list_medium_line_x2_t2_g4_g3

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0006b894) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0006b894) list_medium_line_x2_t2_g4_g

0x27b1,	// (0x0005ed64) list_medium_line_x2_t2_g4_t1_ParamLimits

0x27b1,	// (0x0005ed64) list_medium_line_x2_t2_g4_t1

0x1a68,	// (0x0005e01b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1a68,	// (0x0005e01b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0006b89d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0006b89d) list_medium_line_x2_t2_g4_t

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t2_g3_g1

0x1a27,	// (0x0005dfda) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1a27,	// (0x0005dfda) list_medium_line_x2_t2_g3_g2

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0006b80a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0006b80a) list_medium_line_x2_t2_g3_g

0x27c6,	// (0x0005ed79) list_medium_line_x2_t2_g3_t1_ParamLimits

0x27c6,	// (0x0005ed79) list_medium_line_x2_t2_g3_t1

0x1a68,	// (0x0005e01b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1a68,	// (0x0005e01b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0006b8a2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0006b8a2) list_medium_line_x2_t2_g3_t

0x2996,	// (0x0005ef49) main_sp_fs_list_pane_ParamLimits

0x2996,	// (0x0005ef49) main_sp_fs_list_pane

0x29a2,	// (0x0005ef55) sp_fs_scroll_pane_ParamLimits

0x29a2,	// (0x0005ef55) sp_fs_scroll_pane

0x29ae,	// (0x0005ef61) list_medium_line_x2_t3_t1

0x29be,	// (0x0005ef71) list_medium_line_x2_t3_t2

0x29cc,	// (0x0005ef7f) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0006b8ed) list_medium_line_x2_t3_t

0x29da,	// (0x0005ef8d) list_medium_line_x3_t4_t1

0x29ea,	// (0x0005ef9d) list_medium_line_x3_t4_t2

0x29f8,	// (0x0005efab) list_medium_line_x3_t4_t3

0x29cc,	// (0x0005ef7f) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0006b8f4) list_medium_line_x3_t4_t

0x2a06,	// (0x0005efb9) list_medium_line_x4_t5_t1

0x2a16,	// (0x0005efc9) list_medium_line_x4_t5_t2

0x29f8,	// (0x0005efab) list_medium_line_x4_t5_t3

0x2a24,	// (0x0005efd7) list_medium_line_x4_t5_t4

0x29cc,	// (0x0005ef7f) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0006b8fd) list_medium_line_x4_t5_t

0x1a1b,	// (0x0005dfce) list_medium_line_t4_g4_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_t4_g4_g1

0x1acf,	// (0x0005e082) list_medium_line_t4_g4_g2_ParamLimits

0x1acf,	// (0x0005e082) list_medium_line_t4_g4_g2

0x2a32,	// (0x0005efe5) list_medium_line_t4_g4_g3_ParamLimits

0x2a32,	// (0x0005efe5) list_medium_line_t4_g4_g3

0x1a33,	// (0x0005dfe6) list_medium_line_t4_g4_g4_ParamLimits

0x1a33,	// (0x0005dfe6) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0006b908) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0006b908) list_medium_line_t4_g4_g

0x2a3e,	// (0x0005eff1) list_medium_line_t4_g4_t1_ParamLimits

0x2a3e,	// (0x0005eff1) list_medium_line_t4_g4_t1

0x2a53,	// (0x0005f006) list_medium_line_t4_g4_t2_ParamLimits

0x2a53,	// (0x0005f006) list_medium_line_t4_g4_t2

0x2a69,	// (0x0005f01c) list_medium_line_t4_g4_t3_ParamLimits

0x2a69,	// (0x0005f01c) list_medium_line_t4_g4_t3

0x1a68,	// (0x0005e01b) list_medium_line_t4_g4_t4_ParamLimits

0x1a68,	// (0x0005e01b) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0006b911) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0006b911) list_medium_line_t4_g4_t

0x2b45,	// (0x0005f0f8) chi_dic_find_pane_g1

0x3dc4,	// (0x00060377) main_tport_pane

0x6de2,	// (0x00063395) list_medium_line_plain_t1

0x6e96,	// (0x00063449) list_medium_line_t2_g2_g1_ParamLimits

0x6e96,	// (0x00063449) list_medium_line_t2_g2_g1

0x6ea2,	// (0x00063455) list_medium_line_t2_g2_g2_ParamLimits

0x6ea2,	// (0x00063455) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0006bfcd) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0006bfcd) list_medium_line_t2_g2_g

0x6eae,	// (0x00063461) list_medium_line_t2_g2_t1_ParamLimits

0x6eae,	// (0x00063461) list_medium_line_t2_g2_t1

0x6ec5,	// (0x00063478) list_medium_line_t2_g2_t2_ParamLimits

0x6ec5,	// (0x00063478) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0006bfd2) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0006bfd2) list_medium_line_t2_g2_t

0x75f0,	// (0x00063ba3) aid_sp_fs_list_icon_a_sm

0x75f8,	// (0x00063bab) aid_sp_fs_list_icon_d

0x7600,	// (0x00063bb3) aid_sp_fs_text_primary

0x7609,	// (0x00063bbc) aid_sp_fs_text_secondary

0x7612,	// (0x00063bc5) list_medium_line

0x7612,	// (0x00063bc5) list_medium_line_g2

0x7612,	// (0x00063bc5) list_medium_line_g3

0x7612,	// (0x00063bc5) list_medium_line_plain

0x7612,	// (0x00063bc5) list_medium_line_plain_t2

0x7612,	// (0x00063bc5) list_medium_line_plain_t3

0x7612,	// (0x00063bc5) list_medium_line_right_icon

0x7612,	// (0x00063bc5) list_medium_line_right_iconx2

0x7612,	// (0x00063bc5) list_medium_line_t2

0x7612,	// (0x00063bc5) list_medium_line_t2_g2

0x7612,	// (0x00063bc5) list_medium_line_t2_g3

0x7612,	// (0x00063bc5) list_medium_line_t2_right_icon

0x7612,	// (0x00063bc5) list_medium_line_t2_right_iconx2

0x7612,	// (0x00063bc5) list_medium_line_t3

0x7612,	// (0x00063bc5) list_medium_line_t3_g2

0x7612,	// (0x00063bc5) list_medium_line_t3_g3

0x7612,	// (0x00063bc5) list_medium_line_t3_right_iconx2

0x761b,	// (0x00063bce) list_medium_line_t4_g4

0x7624,	// (0x00063bd7) list_medium_line_x2

0x7624,	// (0x00063bd7) list_medium_line_x2_t2_g2

0x7624,	// (0x00063bd7) list_medium_line_x2_t2_g3

0x7624,	// (0x00063bd7) list_medium_line_x2_t2_g4

0x7624,	// (0x00063bd7) list_medium_line_x2_t3

0x7624,	// (0x00063bd7) list_medium_line_x2_t3_g2

0x7624,	// (0x00063bd7) list_medium_line_x2_t3_g3

0x7624,	// (0x00063bd7) list_medium_line_x2_t3_g4

0x7624,	// (0x00063bd7) list_medium_line_x2_t4_g2

0x7624,	// (0x00063bd7) list_medium_line_x2_t4_g4

0x762d,	// (0x00063be0) list_medium_line_x3

0x762d,	// (0x00063be0) list_medium_line_x3_t4

0x762d,	// (0x00063be0) list_medium_line_x3_t4_g4

0x761b,	// (0x00063bce) list_medium_line_x4_t4

0x761b,	// (0x00063bce) list_medium_line_x4_t4_g7

0x761b,	// (0x00063bce) list_medium_line_x4_t5

0x7636,	// (0x00063be9) list_single_fs_dyc_pane_ParamLimits

0x7636,	// (0x00063be9) list_single_fs_dyc_pane

0x1a1b,	// (0x0005dfce) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x4_t4_g7_g1

0x7d9e,	// (0x00064351) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d9e,	// (0x00064351) list_medium_line_x4_t4_g7_g2

0x7daa,	// (0x0006435d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7daa,	// (0x0006435d) list_medium_line_x4_t4_g7_g3

0x7db9,	// (0x0006436c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7db9,	// (0x0006436c) list_medium_line_x4_t4_g7_g4

0x7dc5,	// (0x00064378) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7dc5,	// (0x00064378) list_medium_line_x4_t4_g7_g5

0x7dd4,	// (0x00064387) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7dd4,	// (0x00064387) list_medium_line_x4_t4_g7_g6

0x7de3,	// (0x00064396) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7de3,	// (0x00064396) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb97,	// (0x0006c14a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb97,	// (0x0006c14a) list_medium_line_x4_t4_g7_g

0x7def,	// (0x000643a2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7def,	// (0x000643a2) list_medium_line_x4_t4_g7_t1

0x7e04,	// (0x000643b7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e04,	// (0x000643b7) list_medium_line_x4_t4_g7_t2

0x7e19,	// (0x000643cc) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e19,	// (0x000643cc) list_medium_line_x4_t4_g7_t3

0x7e2e,	// (0x000643e1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e2e,	// (0x000643e1) list_medium_line_x4_t4_g7_t4

0x7e40,	// (0x000643f3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e40,	// (0x000643f3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfba6,	// (0x0006c159) list_medium_line_x4_t4_g7_t_ParamLimits

0xfba6,	// (0x0006c159) list_medium_line_x4_t4_g7_t

0x7e52,	// (0x00064405) list_single_dyc_row_pane_ParamLimits

0x7e52,	// (0x00064405) list_single_dyc_row_pane

0x84d9,	// (0x00064a8c) call5_gesture_pane_ParamLimits

0x84d9,	// (0x00064a8c) call5_gesture_pane

0x852f,	// (0x00064ae2) call5_windows_pane_ParamLimits

0x852f,	// (0x00064ae2) call5_windows_pane

0x85dd,	// (0x00064b90) call5_swipe_1_pane_cp_ParamLimits

0x85dd,	// (0x00064b90) call5_swipe_1_pane_cp

0x85e9,	// (0x00064b9c) call5_swipe_2_pane_cp_ParamLimits

0x85e9,	// (0x00064b9c) call5_swipe_2_pane_cp

0xabb3,	// (0x00067166) call5_image_pane_cp

0x85f5,	// (0x00064ba8) popup_call5_audio_first_window_cp_ParamLimits

0x85f5,	// (0x00064ba8) popup_call5_audio_first_window_cp

0xef50,	// (0x0006b503) call5_swipe_1_pane_g1_cp_ParamLimits

0xef50,	// (0x0006b503) call5_swipe_1_pane_g1_cp

0xef90,	// (0x0006b543) call5_swipe_1_pane_g2_cp

0xef69,	// (0x0006b51c) call5_swipe_1_pane_t1_cp_ParamLimits

0xef69,	// (0x0006b51c) call5_swipe_1_pane_t1_cp

0xef50,	// (0x0006b503) call5_swipe_2_pane_g1_cp_ParamLimits

0xef50,	// (0x0006b503) call5_swipe_2_pane_g1_cp

0xef98,	// (0x0006b54b) call5_swipe_2_pane_g2_cp

0xefa0,	// (0x0006b553) call5_swipe_2_pane_t1_cp_ParamLimits

0xefa0,	// (0x0006b553) call5_swipe_2_pane_t1_cp

0x0c11,	// (0x0005d1c4) main_sp_fs_email_pane

0xefb5,	// (0x0006b568) main_sp_fs_listscroll_pane_te

0x8603,	// (0x00064bb6) popup_sp_fs_action_menu_pane_ParamLimits

0x8603,	// (0x00064bb6) popup_sp_fs_action_menu_pane

0xc555,	// (0x00068b08) bg_sp_fs_ctrlbar_pane_g1

0xefbe,	// (0x0006b571) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xefc7,	// (0x0006b57a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xefd0,	// (0x0006b583) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc555,	// (0x00068b08) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5b,	// (0x0006c20e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc334,	// (0x000688e7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc334,	// (0x000688e7) bg_sp_fs_ctrlbar_ddmenu_pane

0xefd9,	// (0x0006b58c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xefd9,	// (0x0006b58c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xefe5,	// (0x0006b598) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xefe5,	// (0x0006b598) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0621,	// (0x0005cbd4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0621,	// (0x0005cbd4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xeff1,	// (0x0006b5a4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xeff1,	// (0x0006b5a4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8649,	// (0x00064bfc) list_medium_line_t2_right_icon_g1

0x8651,	// (0x00064c04) list_medium_line_t2_right_icon_t1

0x8661,	// (0x00064c14) list_medium_line_t2_right_icon_t2

0x0001,

0xfc64,	// (0x0006c217) list_medium_line_t2_right_icon_t

0xc020,	// (0x000685d3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc020,	// (0x000685d3) bg_sp_fs_ctrlbar_pane

0x86bb,	// (0x00064c6e) main_sp_fs_ctrlbar_button_pane_cp01

0x86c5,	// (0x00064c78) main_sp_fs_ctrlbar_ddmenu_pane

0xf045,	// (0x0006b5f8) main_sp_fs_ctrlbar_pane_g1

0xf051,	// (0x0006b604) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x062b,	// (0x0005cbde) main_sp_fs_ctrlbar_pane_g

0xf05d,	// (0x0006b610) main_sp_fs_ctrlbar_pane_t1

0x86cf,	// (0x00064c82) main_sp_fs_ctrlbar_pane

0x86f3,	// (0x00064ca6) main_sp_fs_listscroll_pane_te_cp01

0x8713,	// (0x00064cc6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8713,	// (0x00064cc6) popup_sp_fs_action_menu_pane_cp01

0x0c11,	// (0x0005d1c4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0c11,	// (0x0005d1c4) bg_sp_fs_highlight_list_pane_cp01

0x872f,	// (0x00064ce2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x872f,	// (0x00064ce2) sp_fs_action_menu_list_gene_pane_g1

0xf082,	// (0x0006b635) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf082,	// (0x0006b635) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x0006c21c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x0006c21c) sp_fs_action_menu_list_gene_pane_g

0x873e,	// (0x00064cf1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x873e,	// (0x00064cf1) sp_fs_action_menu_list_gene_pane_t1

0xcdc3,	// (0x00069376) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcdc3,	// (0x00069376) sp_fs_action_menu_list_gene_pane

0xf08f,	// (0x0006b642) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf08f,	// (0x0006b642) popup_sp_fs_action_menu_bg_pane

0xcde6,	// (0x00069399) sp_fs_action_menu_list_pane_ParamLimits

0xcde6,	// (0x00069399) sp_fs_action_menu_list_pane

0xf09d,	// (0x0006b650) sp_fs_scroll_pane_cp01_ParamLimits

0xf09d,	// (0x0006b650) sp_fs_scroll_pane_cp01

0x8756,	// (0x00064d09) list_medium_line_plain_t2_t1

0x8766,	// (0x00064d19) list_medium_line_plain_t2_t2

0x0001,

0xfc6e,	// (0x0006c221) list_medium_line_plain_t2_t

0x8776,	// (0x00064d29) list_medium_line_plain_t3_t1

0x8786,	// (0x00064d39) list_medium_line_plain_t3_t2

0x8794,	// (0x00064d47) list_medium_line_plain_t3_t3

0x0002,

0xfc73,	// (0x0006c226) list_medium_line_plain_t3_t

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t2_g2_g1

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0006b818) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0006b818) list_medium_line_x2_t2_g2_g

0x2a3e,	// (0x0005eff1) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2a3e,	// (0x0005eff1) list_medium_line_x2_t2_g2_t1

0x1a68,	// (0x0005e01b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1a68,	// (0x0005e01b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc7a,	// (0x0006c22d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc7a,	// (0x0006c22d) list_medium_line_x2_t2_g2_t

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t4_g2_g1

0xce0a,	// (0x000693bd) list_medium_line_x2_t4_g2_g2_ParamLimits

0xce0a,	// (0x000693bd) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc7f,	// (0x0006c232) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc7f,	// (0x0006c232) list_medium_line_x2_t4_g2_g

0x87a2,	// (0x00064d55) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87a2,	// (0x00064d55) list_medium_line_x2_t4_g2_t1

0x87bc,	// (0x00064d6f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87bc,	// (0x00064d6f) list_medium_line_x2_t4_g2_t2

0x87d2,	// (0x00064d85) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87d2,	// (0x00064d85) list_medium_line_x2_t4_g2_t3

0x1a68,	// (0x0005e01b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1a68,	// (0x0005e01b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc84,	// (0x0006c237) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc84,	// (0x0006c237) list_medium_line_x2_t4_g2_t

0xce1c,	// (0x000693cf) list_medium_line_t3_right_iconx2_g1

0x8649,	// (0x00064bfc) list_medium_line_t3_right_iconx2_g2

0x87e7,	// (0x00064d9a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8d,	// (0x0006c240) list_medium_line_t3_right_iconx2_g

0x87f1,	// (0x00064da4) list_medium_line_t3_right_iconx2_t1

0x8801,	// (0x00064db4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc94,	// (0x0006c247) list_medium_line_t3_right_iconx2_t

0x1a1b,	// (0x0005dfce) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x3_t4_g4_g1

0x1a27,	// (0x0005dfda) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1a27,	// (0x0005dfda) list_medium_line_x3_t4_g4_g2

0x1acf,	// (0x0005e082) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1acf,	// (0x0005e082) list_medium_line_x3_t4_g4_g3

0xce24,	// (0x000693d7) list_medium_line_x3_t4_g4_g4_ParamLimits

0xce24,	// (0x000693d7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc99,	// (0x0006c24c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc99,	// (0x0006c24c) list_medium_line_x3_t4_g4_g

0x880f,	// (0x00064dc2) list_medium_line_x3_t4_g4_t1_ParamLimits

0x880f,	// (0x00064dc2) list_medium_line_x3_t4_g4_t1

0x8826,	// (0x00064dd9) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8826,	// (0x00064dd9) list_medium_line_x3_t4_g4_t2

0xce30,	// (0x000693e3) list_medium_line_x3_t4_g4_t3_ParamLimits

0xce30,	// (0x000693e3) list_medium_line_x3_t4_g4_t3

0xce45,	// (0x000693f8) list_medium_line_x3_t4_g4_t4_ParamLimits

0xce45,	// (0x000693f8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfca2,	// (0x0006c255) list_medium_line_x3_t4_g4_t_ParamLimits

0xfca2,	// (0x0006c255) list_medium_line_x3_t4_g4_t

0x8841,	// (0x00064df4) list_single_dyc_row_text_pane_t1_ParamLimits

0x8841,	// (0x00064df4) list_single_dyc_row_text_pane_t1

0x888a,	// (0x00064e3d) list_single_dyc_row_text_pane_t2_ParamLimits

0x888a,	// (0x00064e3d) list_single_dyc_row_text_pane_t2

0xce62,	// (0x00069415) list_single_dyc_row_text_pane_t3_ParamLimits

0xce62,	// (0x00069415) list_single_dyc_row_text_pane_t3

0x0002,

0xfcab,	// (0x0006c25e) list_single_dyc_row_text_pane_t_ParamLimits

0xfcab,	// (0x0006c25e) list_single_dyc_row_text_pane_t

0xce74,	// (0x00069427) list_single_dyc_row_pane_g1_ParamLimits

0xce74,	// (0x00069427) list_single_dyc_row_pane_g1

0xce80,	// (0x00069433) list_single_dyc_row_pane_g2_ParamLimits

0xce80,	// (0x00069433) list_single_dyc_row_pane_g2

0xce8c,	// (0x0006943f) list_single_dyc_row_pane_g3_ParamLimits

0xce8c,	// (0x0006943f) list_single_dyc_row_pane_g3

0xce98,	// (0x0006944b) list_single_dyc_row_pane_g4_ParamLimits

0xce98,	// (0x0006944b) list_single_dyc_row_pane_g4

0x0003,

0xfcb2,	// (0x0006c265) list_single_dyc_row_pane_g_ParamLimits

0xfcb2,	// (0x0006c265) list_single_dyc_row_pane_g

0xcea4,	// (0x00069457) list_single_dyc_row_text_pane_ParamLimits

0xcea4,	// (0x00069457) list_single_dyc_row_text_pane

0x0991,	// (0x0005cf44) bg_sp_fs_scroll_pane

0xf0c3,	// (0x0006b676) thumb_sp_fs_scroll_pane

0x6e96,	// (0x00063449) list_medium_line_g1_ParamLimits

0x6e96,	// (0x00063449) list_medium_line_g1

0xcec3,	// (0x00069476) list_medium_line_t1_ParamLimits

0xcec3,	// (0x00069476) list_medium_line_t1

0x1a1b,	// (0x0005dfce) list_medium_line_x2_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x2_g1

0x1a27,	// (0x0005dfda) list_medium_line_x2_g2_ParamLimits

0x1a27,	// (0x0005dfda) list_medium_line_x2_g2

0x0001,

0xfcbb,	// (0x0006c26e) list_medium_line_x2_g_ParamLimits

0xfcbb,	// (0x0006c26e) list_medium_line_x2_g

0xced8,	// (0x0006948b) list_medium_line_x2_t1_ParamLimits

0xced8,	// (0x0006948b) list_medium_line_x2_t1

0x1a1b,	// (0x0005dfce) list_medium_line_x3_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x3_g1

0x1a27,	// (0x0005dfda) list_medium_line_x3_g2_ParamLimits

0x1a27,	// (0x0005dfda) list_medium_line_x3_g2

0x0001,

0xfcbb,	// (0x0006c26e) list_medium_line_x3_g_ParamLimits

0xfcbb,	// (0x0006c26e) list_medium_line_x3_g

0xced8,	// (0x0006948b) list_medium_line_x3_t1_ParamLimits

0xced8,	// (0x0006948b) list_medium_line_x3_t1

0xf0cc,	// (0x0006b67f) thumb_sp_fs_scroll_pane_g1

0xf0d5,	// (0x0006b688) thumb_sp_fs_scroll_pane_g2

0xf0de,	// (0x0006b691) thumb_sp_fs_scroll_pane_g3

0x0002,

0x068c,	// (0x0005cc3f) thumb_sp_fs_scroll_pane_g

0xf0cc,	// (0x0006b67f) bg_sp_fs_scroll_pane_g1

0xf0d5,	// (0x0006b688) bg_sp_fs_scroll_pane_g2

0xf0de,	// (0x0006b691) bg_sp_fs_scroll_pane_g3

0x0002,

0x068c,	// (0x0005cc3f) bg_sp_fs_scroll_pane_g

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1a1b,	// (0x0005dfce) list_medium_line_x2_t3_g4_g1

0x1ac3,	// (0x0005e076) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ac3,	// (0x0005e076) list_medium_line_x2_t3_g4_g2

0x1a27,	// (0x0005dfda) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1a27,	// (0x0005dfda) list_medium_line_x2_t3_g4_g3

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1a33,	// (0x0005dfe6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0006b894) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0006b894) list_medium_line_x2_t3_g4_g

0x88e4,	// (0x00064e97) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88e4,	// (0x00064e97) list_medium_line_x2_t3_g4_t1

0x88fa,	// (0x00064ead) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88fa,	// (0x00064ead) list_medium_line_x2_t3_g4_t2

0x1a68,	// (0x0005e01b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1a68,	// (0x0005e01b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcc0,	// (0x0006c273) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcc0,	// (0x0006c273) list_medium_line_x2_t3_g4_t

0x6e96,	// (0x00063449) list_medium_line_g2_g1_ParamLimits

0x6e96,	// (0x00063449) list_medium_line_g2_g1

0x6ea2,	// (0x00063455) list_medium_line_g2_g2_ParamLimits

0x6ea2,	// (0x00063455) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0006bfcd) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0006bfcd) list_medium_line_g2_g

0xceee,	// (0x000694a1) list_medium_line_g2_t1_ParamLimits

0xceee,	// (0x000694a1) list_medium_line_g2_t1

0x6e96,	// (0x00063449) list_medium_line_t3_g2_g1_ParamLimits

0x6e96,	// (0x00063449) list_medium_line_t3_g2_g1

0x6ea2,	// (0x00063455) list_medium_line_t3_g2_g2_ParamLimits

0x6ea2,	// (0x00063455) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0006bfcd) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0006bfcd) list_medium_line_t3_g2_g

0x8913,	// (0x00064ec6) list_medium_line_t3_g2_t1_ParamLimits

0x8913,	// (0x00064ec6) list_medium_line_t3_g2_t1

0x892d,	// (0x00064ee0) list_medium_line_t3_g2_t2_ParamLimits

0x892d,	// (0x00064ee0) list_medium_line_t3_g2_t2

0x8943,	// (0x00064ef6) list_medium_line_t3_g2_t3_ParamLimits

0x8943,	// (0x00064ef6) list_medium_line_t3_g2_t3

0x0002,

0xfcc7,	// (0x0006c27a) list_medium_line_t3_g2_t_ParamLimits

0xfcc7,	// (0x0006c27a) list_medium_line_t3_g2_t

0x8649,	// (0x00064bfc) list_medium_line_right_icon_g1

0xcf03,	// (0x000694b6) list_medium_line_right_icon_t1

0x6e96,	// (0x00063449) list_medium_line_t2_g1_ParamLimits

0x6e96,	// (0x00063449) list_medium_line_t2_g1

0x895a,	// (0x00064f0d) list_medium_line_t2_t1_ParamLimits

0x895a,	// (0x00064f0d) list_medium_line_t2_t1

0x8974,	// (0x00064f27) list_medium_line_t2_t2_ParamLimits

0x8974,	// (0x00064f27) list_medium_line_t2_t2

0x0001,

0xfcce,	// (0x0006c281) list_medium_line_t2_t_ParamLimits

0xfcce,	// (0x0006c281) list_medium_line_t2_t

0x6e96,	// (0x00063449) list_medium_line_t3_g1_ParamLimits

0x6e96,	// (0x00063449) list_medium_line_t3_g1

0x898d,	// (0x00064f40) list_medium_line_t3_t1_ParamLimits

0x898d,	// (0x00064f40) list_medium_line_t3_t1

0x89a4,	// (0x00064f57) list_medium_line_t3_t2_ParamLimits

0x89a4,	// (0x00064f57) list_medium_line_t3_t2

0x89b9,	// (0x00064f6c) list_medium_line_t3_t3_ParamLimits

0x89b9,	// (0x00064f6c) list_medium_line_t3_t3

0x0002,

0xfcd3,	// (0x0006c286) list_medium_line_t3_t_ParamLimits

0xfcd3,	// (0x0006c286) list_medium_line_t3_t

0x6e96,	// (0x00063449) list_medium_line_g3_g1_ParamLimits

0x6e96,	// (0x00063449) list_medium_line_g3_g1

0xcf11,	// (0x000694c4) list_medium_line_g3_g2_ParamLimits

0xcf11,	// (0x000694c4) list_medium_line_g3_g2

0x6ea2,	// (0x00063455) list_medium_line_g3_g3_ParamLimits

0x6ea2,	// (0x00063455) list_medium_line_g3_g3

0x0002,

0xfcda,	// (0x0006c28d) list_medium_line_g3_g_ParamLimits

0xfcda,	// (0x0006c28d) list_medium_line_g3_g

0xcf1d,	// (0x000694d0) list_medium_line_g3_t1_ParamLimits

0xcf1d,	// (0x000694d0) list_medium_line_g3_t1

0x6e96,	// (0x00063449) list_medium_line_t2_g3_g1_ParamLimits

0x6e96,	// (0x00063449) list_medium_line_t2_g3_g1

0xcf11,	// (0x000694c4) list_medium_line_t2_g3_g2_ParamLimits

0xcf11,	// (0x000694c4) list_medium_line_t2_g3_g2

0x6ea2,	// (0x00063455) list_medium_line_t2_g3_g3_ParamLimits

0x6ea2,	// (0x00063455) list_medium_line_t2_g3_g3

0x0002,

0xfcda,	// (0x0006c28d) list_medium_line_t2_g3_g_ParamLimits

0xfcda,	// (0x0006c28d) list_medium_line_t2_g3_g

0x89cb,	// (0x00064f7e) list_medium_line_t2_g3_t1_ParamLimits

0x89cb,	// (0x00064f7e) list_medium_line_t2_g3_t1

0x89e2,	// (0x00064f95) list_medium_line_t2_g3_t2_ParamLimits

0x89e2,	// (0x00064f95) list_medium_line_t2_g3_t2

0x0001,

0xfce1,	// (0x0006c294) list_medium_line_t2_g3_t_ParamLimits

0xfce1,	// (0x0006c294) list_medium_line_t2_g3_t

0x6e96,	// (0x00063449) list_medium_line_t3_g3_g1_ParamLimits

0x6e96,	// (0x00063449) list_medium_line_t3_g3_g1

0xcf11,	// (0x000694c4) list_medium_line_t3_g3_g2_ParamLimits

0xcf11,	// (0x000694c4) list_medium_line_t3_g3_g2

0x6ea2,	// (0x00063455) list_medium_line_t3_g3_g3_ParamLimits

0x6ea2,	// (0x00063455) list_medium_line_t3_g3_g3

0x0002,

0xfcda,	// (0x0006c28d) list_medium_line_t3_g3_g_ParamLimits

0xfcda,	// (0x0006c28d) list_medium_line_t3_g3_g

0x89fb,	// (0x00064fae) list_medium_line_t3_g3_t1_ParamLimits

0x89fb,	// (0x00064fae) list_medium_line_t3_g3_t1

0x8a14,	// (0x00064fc7) list_medium_line_t3_g3_t2_ParamLimits

0x8a14,	// (0x00064fc7) list_medium_line_t3_g3_t2

0x8a2a,	// (0x00064fdd) list_medium_line_t3_g3_t3_ParamLimits

0x8a2a,	// (0x00064fdd) list_medium_line_t3_g3_t3

0x0002,

0xfce6,	// (0x0006c299) list_medium_line_t3_g3_t_ParamLimits

0xfce6,	// (0x0006c299) list_medium_line_t3_g3_t

0xce1c,	// (0x000693cf) list_medium_line_right_iconx2_g1

0x8649,	// (0x00064bfc) list_medium_line_right_iconx2_g2

0x0001,

0xfced,	// (0x0006c2a0) list_medium_line_right_iconx2_g

0xcf32,	// (0x000694e5) list_medium_line_right_iconx2_t1

0xce1c,	// (0x000693cf) list_medium_line_t2_right_iconx2_g1

0x8649,	// (0x00064bfc) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfced,	// (0x0006c2a0) list_medium_line_t2_right_iconx2_g

0x8a44,	// (0x00064ff7) list_medium_line_t2_right_iconx2_t1

0x8a54,	// (0x00065007) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcf2,	// (0x0006c2a5) list_medium_line_t2_right_iconx2_t

0xcf40,	// (0x000694f3) list_medium_line_x4_t4_t1

0x8a66,	// (0x00065019) list_medium_line_x4_t4_t2

0x8a76,	// (0x00065029) list_medium_line_x4_t4_t3

0x8a86,	// (0x00065039) list_medium_line_x4_t4_t4

0x0003,

0xfcf7,	// (0x0006c2aa) list_medium_line_x4_t4_t

0x8ad0,	// (0x00065083) tport_appsw_pane_ParamLimits

0x8ad0,	// (0x00065083) tport_appsw_pane

0x8ae3,	// (0x00065096) tport_contact_pane_ParamLimits

0x8ae3,	// (0x00065096) tport_contact_pane

0x8af6,	// (0x000650a9) tport_listscroll_pane_ParamLimits

0x8af6,	// (0x000650a9) tport_listscroll_pane

0x8b0c,	// (0x000650bf) cell_tport_appsw_pane_ParamLimits

0x8b0c,	// (0x000650bf) cell_tport_appsw_pane

0xded5,	// (0x0006a488) tport_appsw_pane_g1_ParamLimits

0xded5,	// (0x0006a488) tport_appsw_pane_g1

0xcf4e,	// (0x00069501) tport_contact_pane_g1

0xcf57,	// (0x0006950a) tport_contact_pane_t1

0xcf65,	// (0x00069518) tport_contact_pane_t2

0x0001,

0xfd00,	// (0x0006c2b3) tport_contact_pane_t

0xcf73,	// (0x00069526) list_tport_pane

0xcf7c,	// (0x0006952f) scroll_pane_cp_030

0x8b52,	// (0x00065105) cell_tport_appsw_pane_g1

0xcf95,	// (0x00069548) cell_tport_appsw_pane_t1

0x0991,	// (0x0005cf44) grid_highlight_pane_cp019

0x8b62,	// (0x00065115) list_tport_double_graphic_pane_ParamLimits

0x8b62,	// (0x00065115) list_tport_double_graphic_pane

0x0c11,	// (0x0005d1c4) list_highlight_pane_cp023_ParamLimits

0x0c11,	// (0x0005d1c4) list_highlight_pane_cp023

0x8b72,	// (0x00065125) list_tport_double_graphic_pane_g1_ParamLimits

0x8b72,	// (0x00065125) list_tport_double_graphic_pane_g1

0x8b7f,	// (0x00065132) list_tport_double_graphic_pane_t1_ParamLimits

0x8b7f,	// (0x00065132) list_tport_double_graphic_pane_t1

0x8b94,	// (0x00065147) list_tport_double_graphic_pane_t2_ParamLimits

0x8b94,	// (0x00065147) list_tport_double_graphic_pane_t2

0x0001,

0xfd0c,	// (0x0006c2bf) list_tport_double_graphic_pane_t_ParamLimits

0xfd0c,	// (0x0006c2bf) list_tport_double_graphic_pane_t

0x0991,	// (0x0005cf44) main_cale_note_pane

0x65cc,	// (0x00062b7f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x65cc,	// (0x00062b7f) cell_vitu2_function_top_wide_pane_cp01

0x818c,	// (0x0006473f) wait_bar_pane_cp05_ParamLimits

0x0991,	// (0x0005cf44) listscroll_cmail_pane

0xcfab,	// (0x0006955e) list_cmail_pane

0x8bb0,	// (0x00065163) list_cmail_body_pane

0x8bc8,	// (0x0006517b) list_single_cmail_header_caption_pane

0x8be5,	// (0x00065198) list_single_cmail_header_detail_pane_ParamLimits

0x8be5,	// (0x00065198) list_single_cmail_header_detail_pane

0x8c17,	// (0x000651ca) list_single_cmail_header_caption_pane_t1

0x8c27,	// (0x000651da) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c27,	// (0x000651da) list_single_cmail_header_detail_pane_g1

0xcfcb,	// (0x0006957e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcfcb,	// (0x0006957e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd11,	// (0x0006c2c4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd11,	// (0x0006c2c4) list_single_cmail_header_detail_pane_g

0xcfe4,	// (0x00069597) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcfe4,	// (0x00069597) list_single_cmail_header_detail_pane_t1

0xd022,	// (0x000695d5) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd022,	// (0x000695d5) list_single_cmail_header_editor_pane_bg

0xebe4,	// (0x0006b197) list_cmail_body_pane_g1

0xd034,	// (0x000695e7) list_cmail_body_pane_t1

0xdf03,	// (0x0006a4b6) list_single_cmail_header_editor_pane_bg_g1

0xa4ce,	// (0x00066a81) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdf13,	// (0x0006a4c6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdf0b,	// (0x0006a4be) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe200,	// (0x0006a7b3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdf33,	// (0x0006a4e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdf23,	// (0x0006a4d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdf2b,	// (0x0006a4de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa4ae,	// (0x00066a61) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c65,	// (0x00065218) calenote_gesture_pane_ParamLimits

0x8c65,	// (0x00065218) calenote_gesture_pane

0x8c85,	// (0x00065238) calenote_window_pane_ParamLimits

0x8c85,	// (0x00065238) calenote_window_pane

0xd042,	// (0x000695f5) popup_note_window_cp01

0x8ca1,	// (0x00065254) calenote_swipe_1_pane_ParamLimits

0x8ca1,	// (0x00065254) calenote_swipe_1_pane

0x85e9,	// (0x00064b9c) calenote_swipe_2_pane_ParamLimits

0x85e9,	// (0x00064b9c) calenote_swipe_2_pane

0xef50,	// (0x0006b503) calenote_swipe_1_pane_g1_ParamLimits

0xef50,	// (0x0006b503) calenote_swipe_1_pane_g1

0xef5d,	// (0x0006b510) calenote_swipe_1_pane_g2_ParamLimits

0xef5d,	// (0x0006b510) calenote_swipe_1_pane_g2

0x0001,

0x060e,	// (0x0005cbc1) calenote_swipe_1_pane_g_ParamLimits

0x060e,	// (0x0005cbc1) calenote_swipe_1_pane_g

0xd054,	// (0x00069607) calenote_swipe_1_pane_t1_ParamLimits

0xd054,	// (0x00069607) calenote_swipe_1_pane_t1

0xef50,	// (0x0006b503) calenote_swipe_2_pane_g1_ParamLimits

0xef50,	// (0x0006b503) calenote_swipe_2_pane_g1

0xd073,	// (0x00069626) calenote_swipe_2_pane_g2_ParamLimits

0xd073,	// (0x00069626) calenote_swipe_2_pane_g2

0x0001,

0xfd1d,	// (0x0006c2d0) calenote_swipe_2_pane_g_ParamLimits

0xfd1d,	// (0x0006c2d0) calenote_swipe_2_pane_g

0xd07f,	// (0x00069632) calenote_swipe_2_pane_t1_ParamLimits

0xd07f,	// (0x00069632) calenote_swipe_2_pane_t1

0x0991,	// (0x0005cf44) main_mup_navstr_pane

0x51e5,	// (0x00061798) main_mup3_pane_t7_ParamLimits

0x51e5,	// (0x00061798) main_mup3_pane_t7

0xdaff,	// (0x0006a0b2) main_mp4_pane_g6_ParamLimits

0xdaff,	// (0x0006a0b2) main_mp4_pane_g6

0xdd31,	// (0x0006a2e4) main_image3_pane_t4_ParamLimits

0xdd31,	// (0x0006a2e4) main_image3_pane_t4

0x8cb6,	// (0x00065269) popup_navstr_preview_pane_ParamLimits

0x8cb6,	// (0x00065269) popup_navstr_preview_pane

0x8cc6,	// (0x00065279) scroll_navstr_pane_ParamLimits

0x8cc6,	// (0x00065279) scroll_navstr_pane

0x0991,	// (0x0005cf44) bg_popup_preview_window_pane_cp04

0xd0a6,	// (0x00069659) popup_navstr_preview_pane_t1

0x8cda,	// (0x0006528d) scroll_navstr_pane_g1_ParamLimits

0x8cda,	// (0x0006528d) scroll_navstr_pane_g1

0x8cee,	// (0x000652a1) scroll_navstr_pane_t1_ParamLimits

0x8cee,	// (0x000652a1) scroll_navstr_pane_t1

0xd04b,	// (0x000695fe) bg_button_pane_cp014

0xd04b,	// (0x000695fe) bg_button_pane_cp030

0x847f,	// (0x00064a32) list_double_fisheye_pane_g4_ParamLimits

0x847f,	// (0x00064a32) list_double_fisheye_pane_g4

0x848b,	// (0x00064a3e) list_double_fisheye_pane_g5_ParamLimits

0x848b,	// (0x00064a3e) list_double_fisheye_pane_g5

0xcfb3,	// (0x00069566) sp_fs_scroll_pane_cp03

0xf045,	// (0x0006b5f8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf051,	// (0x0006b604) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x062b,	// (0x0005cbde) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf05d,	// (0x0006b610) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8ba6,	// (0x00065159) sp_fs_scroll_pane_cp02

0xa16e,	// (0x00066721) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa16e,	// (0x00066721) popup_sp_fs_calendar_preview_list_single_pane

0x0991,	// (0x0005cf44) main_cam6_pano_pane

0x0c11,	// (0x0005d1c4) main_mup3_pane_ParamLimits

0x0991,	// (0x0005cf44) main_phacti_pane

0x805d,	// (0x00064610) bg_button_pane_cp11

0x8077,	// (0x0006462a) main_mobtv_info_pane_g2_ParamLimits

0x8077,	// (0x0006462a) main_mobtv_info_pane_g2

0x0001,

0xfbf2,	// (0x0006c1a5) main_mobtv_info_pane_g_ParamLimits

0xfbf2,	// (0x0006c1a5) main_mobtv_info_pane_g

0x8254,	// (0x00064807) sc_clock_pane_t5_ParamLimits

0x8254,	// (0x00064807) sc_clock_pane_t5

0x82e0,	// (0x00064893) main_radioblah_pane_g1_ParamLimits

0xee9c,	// (0x0006b44f) main_radioblah_pane_t3_ParamLimits

0xee9c,	// (0x0006b44f) main_radioblah_pane_t3

0xeeb4,	// (0x0006b467) main_radioblah_pane_t4_ParamLimits

0xeeb4,	// (0x0006b467) main_radioblah_pane_t4

0x8308,	// (0x000648bb) main_radioblah_text_pane_ParamLimits

0x8308,	// (0x000648bb) main_radioblah_text_pane

0x831a,	// (0x000648cd) main_radioblah_info_pane_g1_ParamLimits

0x83b3,	// (0x00064966) main_radioblah_info_pane_t4_ParamLimits

0x83b3,	// (0x00064966) main_radioblah_info_pane_t4

0x0c11,	// (0x0005d1c4) main_sp_fs_calendar_pane

0x8d05,	// (0x000652b8) main_phacti_pane_g1

0x8d0d,	// (0x000652c0) phacti_note_pane_ParamLimits

0x8d0d,	// (0x000652c0) phacti_note_pane

0xd0bd,	// (0x00069670) phacti_term_pane_ParamLimits

0xd0bd,	// (0x00069670) phacti_term_pane

0xd0d2,	// (0x00069685) phacti_note_pane_t1_ParamLimits

0xd0d2,	// (0x00069685) phacti_note_pane_t1

0xd0e9,	// (0x0006969c) phacti_term_pane_g1

0xd0f1,	// (0x000696a4) phacti_term_pane_t1_ParamLimits

0xd0f1,	// (0x000696a4) phacti_term_pane_t1

0xd11b,	// (0x000696ce) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd123,	// (0x000696d6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd27,	// (0x0006c2da) popup_sp_fs_calendar_preview_list_single_pane_g

0xd12b,	// (0x000696de) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd12b,	// (0x000696de) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd141,	// (0x000696f4) aid_popup_sp_fs_bg_corner_pane

0xc555,	// (0x00068b08) popup_sp_fs_calendar_preview_bg_pane_g1

0x0991,	// (0x0005cf44) popup_sp_fs_calendar_preview_bg_pane

0xd149,	// (0x000696fc) popup_sp_fs_calendar_preview_list_pane

0x0c11,	// (0x0005d1c4) bg_main_sp_fs_cale_pane_ParamLimits

0x0c11,	// (0x0005d1c4) bg_main_sp_fs_cale_pane

0xd151,	// (0x00069704) listscroll_cale_mrui_pane_ParamLimits

0xd151,	// (0x00069704) listscroll_cale_mrui_pane

0xd165,	// (0x00069718) listscroll_sp_fs_schedule_track_pane

0xd16e,	// (0x00069721) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd16e,	// (0x00069721) main_sp_fs_ctrlbar_pane_cp01

0xd17f,	// (0x00069732) main_sp_fs_ribbon_pane

0xd187,	// (0x0006973a) popup_sp_fs_cale_preview_window

0x8d68,	// (0x0006531b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d68,	// (0x0006531b) list_single_sp_fs_schedule_track_pane

0x0c11,	// (0x0005d1c4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0c11,	// (0x0005d1c4) bg_sp_fs_highlight_list_pane_cp03

0x8d7b,	// (0x0006532e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d7b,	// (0x0006532e) list_single_sp_fs_schedule_track_pane_g1

0x8d87,	// (0x0006533a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d87,	// (0x0006533a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2c,	// (0x0006c2df) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2c,	// (0x0006c2df) list_single_sp_fs_schedule_track_pane_g

0x8d93,	// (0x00065346) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d93,	// (0x00065346) list_single_sp_fs_schedule_track_pane_t1

0x8db5,	// (0x00065368) sp_fs_schedule_track_pane_ParamLimits

0x8db5,	// (0x00065368) sp_fs_schedule_track_pane

0xd199,	// (0x0006974c) sp_fs_schedule_track_pane_g1

0xd1a1,	// (0x00069754) sp_fs_schedule_track_pane_g2

0xd1a9,	// (0x0006975c) sp_fs_schedule_track_pane_g3

0xd1b1,	// (0x00069764) sp_fs_schedule_track_pane_g4

0xd1b9,	// (0x0006976c) sp_fs_schedule_track_pane_g5

0x0004,

0xfd31,	// (0x0006c2e4) sp_fs_schedule_track_pane_g

0xdf03,	// (0x0006a4b6) bg_sp_fs_schedule_viewer_highlight_g1

0xa4ce,	// (0x00066a81) bg_sp_fs_schedule_viewer_highlight_g2

0xdf0b,	// (0x0006a4be) bg_sp_fs_schedule_viewer_highlight_g3

0xdf13,	// (0x0006a4c6) bg_sp_fs_schedule_viewer_highlight_g4

0xe200,	// (0x0006a7b3) bg_sp_fs_schedule_viewer_highlight_g5

0xdf23,	// (0x0006a4d6) bg_sp_fs_schedule_viewer_highlight_g6

0xdf2b,	// (0x0006a4de) bg_sp_fs_schedule_viewer_highlight_g7

0xdf33,	// (0x0006a4e6) bg_sp_fs_schedule_viewer_highlight_g8

0xa4ae,	// (0x00066a61) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3c,	// (0x0006c2ef) bg_sp_fs_schedule_viewer_highlight_g

0x0991,	// (0x0005cf44) bg_main_sp_fs_ribbon_pane

0x8dca,	// (0x0006537d) main_sp_fs_ribbon_pane_g1

0xd1c1,	// (0x00069774) main_sp_fs_ribbon_pane_t1

0x8dd3,	// (0x00065386) main_sp_fs_ribbon_pane_t2

0xd1d0,	// (0x00069783) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd4f,	// (0x0006c302) main_sp_fs_ribbon_pane_t

0xd1df,	// (0x00069792) main_sp_fs_ribbon_scheduler_pane

0xd1e7,	// (0x0006979a) bg_main_sp_fs_ribbon_pane_g1

0xd1f0,	// (0x000697a3) bg_main_sp_fs_ribbon_pane_g2

0xd1f9,	// (0x000697ac) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd56,	// (0x0006c309) bg_main_sp_fs_ribbon_pane_g

0xd201,	// (0x000697b4) main_sp_fs_ribbon_scheduler_pane_g1

0xd20a,	// (0x000697bd) main_sp_fs_ribbon_scheduler_pane_g2

0xd213,	// (0x000697c6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd5d,	// (0x0006c310) main_sp_fs_ribbon_scheduler_pane_g

0xd21c,	// (0x000697cf) list_cale_mrui_pane

0x8de2,	// (0x00065395) sp_fs_scroll_pane_cp07_ParamLimits

0x8de2,	// (0x00065395) sp_fs_scroll_pane_cp07

0x8df8,	// (0x000653ab) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8df8,	// (0x000653ab) bg_sp_fs_schedule_viewer_highlight

0xd225,	// (0x000697d8) list_single_sp_fs_schedule_track_pane_cp01

0xd22d,	// (0x000697e0) list_sp_fs_schedule_track_pane

0xd235,	// (0x000697e8) sp_fs_scroll_pane_cp06_ParamLimits

0xd235,	// (0x000697e8) sp_fs_scroll_pane_cp06

0xc555,	// (0x00068b08) bgmain_sp_fs_calendar_pane_g1

0xd247,	// (0x000697fa) list_single_cale_mrui_pane_ParamLimits

0xd247,	// (0x000697fa) list_single_cale_mrui_pane

0xd26a,	// (0x0006981d) list_single_cale_mrui_row_pane_ParamLimits

0xd26a,	// (0x0006981d) list_single_cale_mrui_row_pane

0xd277,	// (0x0006982a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd277,	// (0x0006982a) list_single_cale_mrui_row_pane_g1

0xd2bc,	// (0x0006986f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd2bc,	// (0x0006986f) list_single_cale_mrui_row_pane_t1

0x8e0a,	// (0x000653bd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e0a,	// (0x000653bd) list_single_cale_mrui_row_pane_t2

0xd2ce,	// (0x00069881) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd2ce,	// (0x00069881) list_single_cale_mrui_row_pane_t3

0xd2fd,	// (0x000698b0) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd2fd,	// (0x000698b0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6b,	// (0x0006c31e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6b,	// (0x0006c31e) list_single_cale_mrui_row_pane_t

0x8e72,	// (0x00065425) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e72,	// (0x00065425) list_single_cmail_header_editor_pane_bg_cp01

0x8e98,	// (0x0006544b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e98,	// (0x0006544b) list_single_cmail_header_editor_pane_bg_cp02

0x8eb8,	// (0x0006546b) main_radioblah_text_pane_t1_ParamLimits

0x8eb8,	// (0x0006546b) main_radioblah_text_pane_t1

0xd32c,	// (0x000698df) cam6_indi_pane_cp01

0xd334,	// (0x000698e7) cam6_mode_pane_cp01

0xd33c,	// (0x000698ef) cam6_pano_pane

0xd345,	// (0x000698f8) cam6_zoom_pane_cp01

0xd34f,	// (0x00069902) cam6_pano_image_pane

0xd358,	// (0x0006990b) cam6_pano_pane_g1

0xebe4,	// (0x0006b197) cam6_pano_pane_g2

0xd361,	// (0x00069914) cam6_pano_pane_g3

0xd36a,	// (0x0006991d) cam6_pano_pane_g4

0xcad9,	// (0x0006908c) cam6_pano_pane_g5

0xd373,	// (0x00069926) cam6_pano_pane_g6

0xd37b,	// (0x0006992e) cam6_pano_pane_g7

0xd383,	// (0x00069936) cam6_pano_pane_g8

0xd38c,	// (0x0006993f) cam6_pano_pane_g9

0x0008,

0xfd74,	// (0x0006c327) cam6_pano_pane_g

0x0991,	// (0x0005cf44) main_browser_tag_pane

0xd09e,	// (0x00069651) grid_navstr_albumart_pane

0xd397,	// (0x0006994a) cell_navstr_albumart_pane_ParamLimits

0xd397,	// (0x0006994a) cell_navstr_albumart_pane

0xd3b3,	// (0x00069966) cell_navstr_albumart_pane_g1

0xbe39,	// (0x000683ec) cell_navstr_albumart_pane_g2

0xbe49,	// (0x000683fc) cell_navstr_albumart_pane_g3

0xbe41,	// (0x000683f4) cell_navstr_albumart_pane_g4

0x0003,

0xfd87,	// (0x0006c33a) cell_navstr_albumart_pane_g

0x8ed3,	// (0x00065486) bt_list_pane_ParamLimits

0x8ed3,	// (0x00065486) bt_list_pane

0x8ee9,	// (0x0006549c) bt_list_pane_t1

0x8ef8,	// (0x000654ab) bt_list_pane_t2

0x0001,

0xfd90,	// (0x0006c343) bt_list_pane_t

0x0991,	// (0x0005cf44) main_cale_prevew_pane

0x8f07,	// (0x000654ba) popup_cale_preview_window_ParamLimits

0x8f07,	// (0x000654ba) popup_cale_preview_window

0x0c11,	// (0x0005d1c4) bg_popup_preview_window_pane_cp05_ParamLimits

0x0c11,	// (0x0005d1c4) bg_popup_preview_window_pane_cp05

0xd3bb,	// (0x0006996e) list_cale_preview_pane_ParamLimits

0xd3bb,	// (0x0006996e) list_cale_preview_pane

0x8f22,	// (0x000654d5) list_double_cale_preview_pane_ParamLimits

0x8f22,	// (0x000654d5) list_double_cale_preview_pane

0x8f36,	// (0x000654e9) list_single_cale_preview_pane_ParamLimits

0x8f36,	// (0x000654e9) list_single_cale_preview_pane

0x8f4e,	// (0x00065501) list_single_cale_preview_pane_g1

0x8f56,	// (0x00065509) list_single_cale_preview_pane_t1_ParamLimits

0x8f56,	// (0x00065509) list_single_cale_preview_pane_t1

0x8f6b,	// (0x0006551e) list_double_cale_preview_pane_g1

0x8f73,	// (0x00065526) list_double_cale_preview_pane_t1_ParamLimits

0x8f73,	// (0x00065526) list_double_cale_preview_pane_t1

0x8f88,	// (0x0006553b) list_double_cale_preview_pane_t2_ParamLimits

0x8f88,	// (0x0006553b) list_double_cale_preview_pane_t2

0x0001,

0xfd95,	// (0x0006c348) list_double_cale_preview_pane_t_ParamLimits

0xfd95,	// (0x0006c348) list_double_cale_preview_pane_t

0x0991,	// (0x0005cf44) main_ezdial_pane

0x0c11,	// (0x0005d1c4) main_sp_fs_email_pane_ParamLimits

0x8673,	// (0x00064c26) cmail_ddmenu_btn01_pane_ParamLimits

0x8673,	// (0x00064c26) cmail_ddmenu_btn01_pane

0x8686,	// (0x00064c39) cmail_ddmenu_btn02_pane_ParamLimits

0x8686,	// (0x00064c39) cmail_ddmenu_btn02_pane

0x86a9,	// (0x00064c5c) cmail_ddmenu_btn03_pane_ParamLimits

0x86a9,	// (0x00064c5c) cmail_ddmenu_btn03_pane

0x86cf,	// (0x00064c82) main_sp_fs_ctrlbar_pane_ParamLimits

0x86f3,	// (0x00064ca6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bb0,	// (0x00065163) list_cmail_body_pane_ParamLimits

0xcfc2,	// (0x00069575) bg_button_pane_cp12

0xcfd7,	// (0x0006958a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcfd7,	// (0x0006958a) list_single_cmail_header_detail_pane_g3

0x8c3f,	// (0x000651f2) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8c3f,	// (0x000651f2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd18,	// (0x0006c2cb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd18,	// (0x0006c2cb) list_single_cmail_header_detail_pane_t

0xd106,	// (0x000696b9) phacti_term_pane_t2_ParamLimits

0xd106,	// (0x000696b9) phacti_term_pane_t2

0x0001,

0xfd22,	// (0x0006c2d5) phacti_term_pane_t_ParamLimits

0xfd22,	// (0x0006c2d5) phacti_term_pane_t

0xd3c7,	// (0x0006997a) aid_size_list_single_double

0x8fa0,	// (0x00065553) popup_ezdial_listscroll_window

0x8fbc,	// (0x0006556f) popup_number_entry_window_cp01

0xabb3,	// (0x00067166) bg_popup_call_pane_cp09

0xd3d3,	// (0x00069986) ezdial_list_pane

0xd3db,	// (0x0006998e) scroll_pane_cp23

0xc020,	// (0x000685d3) bg_button_pane_cp028_ParamLimits

0xc020,	// (0x000685d3) bg_button_pane_cp028

0x8fca,	// (0x0006557d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fca,	// (0x0006557d) cmail_ddmenu_btn01_pane_g1

0x8fd6,	// (0x00065589) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fd6,	// (0x00065589) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9a,	// (0x0006c34d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9a,	// (0x0006c34d) cmail_ddmenu_btn01_pane_g

0xd3e3,	// (0x00069996) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd3e3,	// (0x00069996) cmail_ddmenu_btn01_pane_t1

0xc020,	// (0x000685d3) bg_button_pane_cp029_ParamLimits

0xc020,	// (0x000685d3) bg_button_pane_cp029

0x8fe2,	// (0x00065595) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fe2,	// (0x00065595) cmail_ddmenu_btn02_pane_g1

0x8ffa,	// (0x000655ad) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8ffa,	// (0x000655ad) cmail_ddmenu_btn02_pane_t1

0x0c11,	// (0x0005d1c4) bg_button_pane_cp031_ParamLimits

0x0c11,	// (0x0005d1c4) bg_button_pane_cp031

0x8fe2,	// (0x00065595) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fe2,	// (0x00065595) cmail_ddmenu_btn03_pane_g1

0x8ffa,	// (0x000655ad) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8ffa,	// (0x000655ad) cmail_ddmenu_btn03_pane_t1

0x5d94,	// (0x00062347) cell_dialer2_keypad_pane_t1_ParamLimits

0x5dae,	// (0x00062361) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5dae,	// (0x00062361) cell_dialer2_keypad_pane_t1_copy1

0x7ecf,	// (0x00064482) ncimui_group_button_pane

0x0c11,	// (0x0005d1c4) main_sp_fs_calendar_pane_ParamLimits

0x8bc8,	// (0x0006517b) list_single_cmail_header_caption_pane_ParamLimits

0x7609,	// (0x00063bbc) aid_recal_txt_sm_pane

0x0991,	// (0x0005cf44) mian_recal_day_pane

0xd187,	// (0x0006973a) popup_sp_fs_cale_preview_window_ParamLimits

0x0991,	// (0x0005cf44) list_recal_day_pane

0xd411,	// (0x000699c4) list_single_recal_day_pane_ParamLimits

0xd411,	// (0x000699c4) list_single_recal_day_pane

0xd423,	// (0x000699d6) list_single_recal_day_pane_g1_ParamLimits

0xd423,	// (0x000699d6) list_single_recal_day_pane_g1

0xd42f,	// (0x000699e2) list_single_recal_day_pane_g2_ParamLimits

0xd42f,	// (0x000699e2) list_single_recal_day_pane_g2

0xd43f,	// (0x000699f2) list_single_recal_day_pane_g3_ParamLimits

0xd43f,	// (0x000699f2) list_single_recal_day_pane_g3

0x901e,	// (0x000655d1) list_single_recal_day_pane_g4_ParamLimits

0x901e,	// (0x000655d1) list_single_recal_day_pane_g4

0xd44b,	// (0x000699fe) list_single_recal_day_pane_g5_ParamLimits

0xd44b,	// (0x000699fe) list_single_recal_day_pane_g5

0xd45b,	// (0x00069a0e) list_single_recal_day_pane_g6_ParamLimits

0xd45b,	// (0x00069a0e) list_single_recal_day_pane_g6

0x0004,

0xfda9,	// (0x0006c35c) list_single_recal_day_pane_g_ParamLimits

0xfda9,	// (0x0006c35c) list_single_recal_day_pane_g

0xd472,	// (0x00069a25) list_single_recal_day_pane_t1

0xd484,	// (0x00069a37) list_single_recal_day_pane_t2

0x0001,

0xfdb4,	// (0x0006c367) list_single_recal_day_pane_t

0x903e,	// (0x000655f1) ncimui_query_button_pane_ParamLimits

0x903e,	// (0x000655f1) ncimui_query_button_pane

0x904e,	// (0x00065601) ncimui_query_button_pane_t1_ParamLimits

0x904e,	// (0x00065601) ncimui_query_button_pane_t1

0xd499,	// (0x00069a4c) ncimui_query_button_pane_t2_ParamLimits

0xd499,	// (0x00069a4c) ncimui_query_button_pane_t2

0x0001,

0xfdb9,	// (0x0006c36c) ncimui_query_button_pane_t_ParamLimits

0xfdb9,	// (0x0006c36c) ncimui_query_button_pane_t

0x9061,	// (0x00065614) query_button_pane_ParamLimits

0x9061,	// (0x00065614) query_button_pane

0x0991,	// (0x0005cf44) bg_button_pane_cp0028

0xd4ac,	// (0x00069a5f) query_button_pane_t1

0x3dc4,	// (0x00060377) main_tport_pane_ParamLimits

0x8a96,	// (0x00065049) bg_popup_window_pane_cp01_ParamLimits

0x8a96,	// (0x00065049) bg_popup_window_pane_cp01

0x8aac,	// (0x0006505f) heading_pane_cp08_ParamLimits

0x8aac,	// (0x0006505f) heading_pane_cp08

0x8abd,	// (0x00065070) heading_pane_cp07_ParamLimits

0x8abd,	// (0x00065070) heading_pane_cp07

0xcf8d,	// (0x00069540) cell_tport_appsw_pane_g2

0x0002,

0xfd05,	// (0x0006c2b8) cell_tport_appsw_pane_g

0x330d,	// (0x0005f8c0) input_candi_list_open_g1

0xa697,	// (0x00066c4a) list_cale_time_pane_g6_ParamLimits

0xa697,	// (0x00066c4a) list_cale_time_pane_g6

0x4bac,	// (0x0006115f) aid_size_touch_calib_1_ParamLimits

0x4bac,	// (0x0006115f) aid_size_touch_calib_1

0x4bb8,	// (0x0006116b) aid_size_touch_calib_2_ParamLimits

0x4bb8,	// (0x0006116b) aid_size_touch_calib_2

0x4bce,	// (0x00061181) aid_size_touch_calib_3_ParamLimits

0x4bce,	// (0x00061181) aid_size_touch_calib_3

0x4bec,	// (0x0006119f) aid_size_touch_calib_4_ParamLimits

0x4bec,	// (0x0006119f) aid_size_touch_calib_4

0x4c02,	// (0x000611b5) main_touch_calib_button_group_pane_ParamLimits

0x4c02,	// (0x000611b5) main_touch_calib_button_group_pane

0x4c1a,	// (0x000611cd) main_touch_calib_pane_g1_ParamLimits

0x4c26,	// (0x000611d9) main_touch_calib_pane_g2_ParamLimits

0x4c32,	// (0x000611e5) main_touch_calib_pane_g3_ParamLimits

0x4c3e,	// (0x000611f1) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0006bd23) main_touch_calib_pane_g_ParamLimits

0x4c4a,	// (0x000611fd) main_touch_calib_pane_t1_ParamLimits

0x4c64,	// (0x00061217) main_touch_calib_pane_t2_ParamLimits

0x4c7e,	// (0x00061231) main_touch_calib_pane_t3_ParamLimits

0x4c92,	// (0x00061245) main_touch_calib_pane_t4_ParamLimits

0x4ca6,	// (0x00061259) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0006bd2c) main_touch_calib_pane_t_ParamLimits

0xc8a3,	// (0x00068e56) list_single_fp_cale_pane_g3_ParamLimits

0xc8a3,	// (0x00068e56) list_single_fp_cale_pane_g3

0xdeeb,	// (0x0006a49e) bg_button_pane_cp012_ParamLimits

0xdeeb,	// (0x0006a49e) bg_vkb2_func_pane_cp03_ParamLimits

0x6e4c,	// (0x000633ff) cell_vitu2_function_top_pane_g1_ParamLimits

0xdeeb,	// (0x0006a49e) bg_vkb2_func_pane_cp04_ParamLimits

0x7e6f,	// (0x00064422) main_ncimui_button_group_pane_ParamLimits

0x7e6f,	// (0x00064422) main_ncimui_button_group_pane

0x7ebd,	// (0x00064470) main_ncimui_pane_t3_ParamLimits

0x7ebd,	// (0x00064470) main_ncimui_pane_t3

0xd0b4,	// (0x00069667) phacti_button_group_pane

0xd3c7,	// (0x0006997a) aid_size_list_single_double_ParamLimits

0x8fa0,	// (0x00065553) popup_ezdial_listscroll_window_ParamLimits

0x8fbc,	// (0x0006556f) popup_number_entry_window_cp01_ParamLimits

0x9074,	// (0x00065627) phacti_button_pane_ParamLimits

0x9074,	// (0x00065627) phacti_button_pane

0x0991,	// (0x0005cf44) bg_button_pane_cp14

0xd4ba,	// (0x00069a6d) phacti_button_pane_t1

0x9085,	// (0x00065638) main_touch_calib_button_pane_ParamLimits

0x9085,	// (0x00065638) main_touch_calib_button_pane

0x9fe2,	// (0x00066595) bg_button_pane_cp18_ParamLimits

0x9fe2,	// (0x00066595) bg_button_pane_cp18

0xd4c8,	// (0x00069a7b) main_touch_calib_button_pane_t1_ParamLimits

0xd4c8,	// (0x00069a7b) main_touch_calib_button_pane_t1

0xd4de,	// (0x00069a91) main_touch_calib_button_pane_t2_ParamLimits

0xd4de,	// (0x00069a91) main_touch_calib_button_pane_t2

0x0001,

0xfdbe,	// (0x0006c371) main_touch_calib_button_pane_t_ParamLimits

0xfdbe,	// (0x0006c371) main_touch_calib_button_pane_t

0x0991,	// (0x0005cf44) cell_ncimui_button_pane

0x0991,	// (0x0005cf44) bg_button_pane_cp032

0xd4fc,	// (0x00069aaf) cell_ncimui_button_pane_t1

0xdd0f,	// (0x0006a2c2) image3_infobar_pane_ParamLimits

0xdd0f,	// (0x0006a2c2) image3_infobar_pane

0x8280,	// (0x00064833) fs_bigclock_status_pane_ParamLimits

0x8280,	// (0x00064833) fs_bigclock_status_pane

0x828d,	// (0x00064840) main_fs_bigclock_clock_pane_ParamLimits

0x828d,	// (0x00064840) main_fs_bigclock_clock_pane

0x82a1,	// (0x00064854) main_fs_bigclock_indi_pane_ParamLimits

0x82a1,	// (0x00064854) main_fs_bigclock_indi_pane

0x82bc,	// (0x0006486f) main_fs_bigclock_swipe_pane_ParamLimits

0x82bc,	// (0x0006486f) main_fs_bigclock_swipe_pane

0x0991,	// (0x0005cf44) main_fs_clock_dumped_data

0xed05,	// (0x0006b2b8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xed05,	// (0x0006b2b8) list_single_fs_bigclock_indicator_pane_g1

0xed2f,	// (0x0006b2e2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xed2f,	// (0x0006b2e2) list_single_fs_bigclock_indicator_pane_g2

0xed49,	// (0x0006b2fc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xed49,	// (0x0006b2fc) list_single_fs_bigclock_indicator_pane_g3

0xed63,	// (0x0006b316) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xed63,	// (0x0006b316) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x05bf,	// (0x0005cb72) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x05bf,	// (0x0005cb72) list_single_fs_bigclock_indicator_pane_g

0xed8e,	// (0x0006b341) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xed8e,	// (0x0006b341) list_single_fs_bigclock_indicator_pane_t1

0xedb6,	// (0x0006b369) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xedb6,	// (0x0006b369) list_single_fs_bigclock_indicator_pane_t2

0xedde,	// (0x0006b391) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xedde,	// (0x0006b391) list_single_fs_bigclock_indicator_pane_t3

0xee06,	// (0x0006b3b9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xee06,	// (0x0006b3b9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x05ca,	// (0x0005cb7d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x05ca,	// (0x0005cb7d) list_single_fs_bigclock_indicator_pane_t

0xd50a,	// (0x00069abd) image3_infobar_fav_pane_ParamLimits

0xd50a,	// (0x00069abd) image3_infobar_fav_pane

0xd51a,	// (0x00069acd) image3_infobar_loc_pane_ParamLimits

0xd51a,	// (0x00069acd) image3_infobar_loc_pane

0xd530,	// (0x00069ae3) image3_infobar_time_pane_ParamLimits

0xd530,	// (0x00069ae3) image3_infobar_time_pane

0xc555,	// (0x00068b08) image3_infobar_time_pane_g1

0xd540,	// (0x00069af3) image3_infobar_time_pane_t1

0xc555,	// (0x00068b08) image3_infobar_loc_pane_g1

0xd54e,	// (0x00069b01) image3_infobar_loc_pane_g2

0x0001,

0xfdc3,	// (0x0006c376) image3_infobar_loc_pane_g

0xd556,	// (0x00069b09) image3_infobar_loc_pane_t1

0xc555,	// (0x00068b08) image3_infobar_fav_pane_g1

0xd564,	// (0x00069b17) image3_infobar_fav_pane_g2

0x0001,

0xfdc8,	// (0x0006c37b) image3_infobar_fav_pane_g

0xd56c,	// (0x00069b1f) fs_bigclock_status_battery_pane

0xd575,	// (0x00069b28) fs_bigclock_status_signal_pane

0xd57e,	// (0x00069b31) fs_bigclock_status_title_pane

0xd587,	// (0x00069b3a) fs_bigclock_status_signal_pane_g1

0xd590,	// (0x00069b43) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdcd,	// (0x0006c380) fs_bigclock_status_signal_pane_g

0xd598,	// (0x00069b4b) fs_bigclock_status_battery_pane_g1

0xd5a1,	// (0x00069b54) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd2,	// (0x0006c385) fs_bigclock_status_battery_pane_g

0xd5a9,	// (0x00069b5c) fs_bigclock_status_title_pane_t1

0xc555,	// (0x00068b08) main_fs_bigclock_clock_pane_g1

0xd5b7,	// (0x00069b6a) main_fs_bigclock_clock_pane_g2

0xd5b7,	// (0x00069b6a) main_fs_bigclock_clock_pane_g3

0xd5b7,	// (0x00069b6a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdd7,	// (0x0006c38a) main_fs_bigclock_clock_pane_g

0xd5bf,	// (0x00069b72) main_fs_bigclock_clock_pane_t1

0xd5cd,	// (0x00069b80) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde0,	// (0x0006c393) main_fs_bigclock_clock_pane_t

0x909a,	// (0x0006564d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x909a,	// (0x0006564d) list_single_fs_bigclock_indicator_pane

0x90ab,	// (0x0006565e) list_single_fs_bigclock_pane_ParamLimits

0x90ab,	// (0x0006565e) list_single_fs_bigclock_pane

0xd5e5,	// (0x00069b98) main_fs_bigclock_indicator_pane_t1

0xd5f4,	// (0x00069ba7) list_single_fs_bigclock_pane_g1

0xd5fc,	// (0x00069baf) list_single_fs_bigclock_pane_t1

0xc555,	// (0x00068b08) main_fs_bigclock_swipe_pane_g1

0xd63f,	// (0x00069bf2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf1,	// (0x0006c3a4) main_fs_bigclock_swipe_pane_g

0xd647,	// (0x00069bfa) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd647,	// (0x00069bfa) main_fs_bigclock_swipe_pane_t1

0x2a7f,	// (0x0005f032) call_type_pane_ParamLimits

0x0991,	// (0x0005cf44) main_btmg_pane

0xd2a3,	// (0x00069856) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd2a3,	// (0x00069856) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd64,	// (0x0006c317) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd64,	// (0x0006c317) list_single_cale_mrui_row_pane_g

0xd401,	// (0x000699b4) list_recal_vselct_arw_lo_pane

0xd409,	// (0x000699bc) list_recal_vselct_arw_up_pane

0x7600,	// (0x00063bb3) list_recal_vselct_pane

0xd664,	// (0x00069c17) btmg_button_pane

0x910e,	// (0x000656c1) main_btmg_pane_g1

0x0991,	// (0x0005cf44) bg_button_pane_cp044

0xd66e,	// (0x00069c21) btmg_button_pane_t1

0xc018,	// (0x000685cb) aid_listscroll_gen

0x0c11,	// (0x0005d1c4) main_cntbar_detail_pane

0xcfa3,	// (0x00069556) list_cmail_folder_pane

0xcfb3,	// (0x00069566) sp_fs_scroll_pane_cp03_ParamLimits

0x9118,	// (0x000656cb) list_single_fs_dyc_pane_cp01_ParamLimits

0x9118,	// (0x000656cb) list_single_fs_dyc_pane_cp01

0xd67c,	// (0x00069c2f) aid_size_cmail_indent

0xd685,	// (0x00069c38) list_single_dyc_row_pane_cp01

0x9163,	// (0x00065716) cntbar_detail_list_pane_ParamLimits

0x9163,	// (0x00065716) cntbar_detail_list_pane

0x91b5,	// (0x00065768) main_cntbar_detail_cont_pane_ParamLimits

0x91b5,	// (0x00065768) main_cntbar_detail_cont_pane

0x29a2,	// (0x0005ef55) scroll_pane_cp032_ParamLimits

0x29a2,	// (0x0005ef55) scroll_pane_cp032

0x91c9,	// (0x0006577c) cntbar_detail_list_event_pane_ParamLimits

0x91c9,	// (0x0006577c) cntbar_detail_list_event_pane

0x9175,	// (0x00065728) cntbar_detail_list_shct_pane

0xa51c,	// (0x00066acf) aid_list_gen

0xd68e,	// (0x00069c41) aid_scroll

0xd697,	// (0x00069c4a) aid_size_touch_scroll_bar

0x91d9,	// (0x0006578c) aid_list_double

0xd6a0,	// (0x00069c53) aid_list_single

0x91e2,	// (0x00065795) aid_list_single_lg

0xd6a9,	// (0x00069c5c) aid_list_z_g_a_sm

0xd6b1,	// (0x00069c64) aid_list_z_g_d

0xd6b9,	// (0x00069c6c) aid_txt_z_prm

0x91eb,	// (0x0006579e) aid_txt_z_prm_cp01

0x91f9,	// (0x000657ac) aid_txt_z_sec

0x9207,	// (0x000657ba) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9207,	// (0x000657ba) main_cntbar_detail_cont_pane_g1

0x921b,	// (0x000657ce) main_cntbar_detail_cont_pane_g2_ParamLimits

0x921b,	// (0x000657ce) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf6,	// (0x0006c3a9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf6,	// (0x0006c3a9) main_cntbar_detail_cont_pane_g

0xd6c7,	// (0x00069c7a) main_cntbar_detail_cont_pane_t1

0xd6d5,	// (0x00069c88) main_cntbar_detail_cont_pane_t2

0xd6e3,	// (0x00069c96) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfb,	// (0x0006c3ae) main_cntbar_detail_cont_pane_t

0x922b,	// (0x000657de) cell_cntbar_detail_list_shct_pane_ParamLimits

0x922b,	// (0x000657de) cell_cntbar_detail_list_shct_pane

0xd6f1,	// (0x00069ca4) cntbar_detail_list_shct_pane_g1

0xd6fa,	// (0x00069cad) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe02,	// (0x0006c3b5) cntbar_detail_list_shct_pane_g

0x923d,	// (0x000657f0) cntbar_detail_list_event_pane_g1_ParamLimits

0x923d,	// (0x000657f0) cntbar_detail_list_event_pane_g1

0x9249,	// (0x000657fc) cntbar_detail_list_event_pane_g2_ParamLimits

0x9249,	// (0x000657fc) cntbar_detail_list_event_pane_g2

0x0005,

0xfe07,	// (0x0006c3ba) cntbar_detail_list_event_pane_g_ParamLimits

0xfe07,	// (0x0006c3ba) cntbar_detail_list_event_pane_g

0x92b7,	// (0x0006586a) cntbar_detail_list_event_pane_t1_ParamLimits

0x92b7,	// (0x0006586a) cntbar_detail_list_event_pane_t1

0x92cc,	// (0x0006587f) cntbar_detail_list_event_pane_t2_ParamLimits

0x92cc,	// (0x0006587f) cntbar_detail_list_event_pane_t2

0x0002,

0xfe14,	// (0x0006c3c7) cntbar_detail_list_event_pane_t_ParamLimits

0xfe14,	// (0x0006c3c7) cntbar_detail_list_event_pane_t

0xc555,	// (0x00068b08) cell_cntbar_detail_list_shct_pane_g1

0x2e39,	// (0x0005f3ec) navi_pane_mv_g3

0x0c11,	// (0x0005d1c4) main_cntbar_detail_pane_ParamLimits

0x0991,	// (0x0005cf44) main_notif_wgt_pane

0xda99,	// (0x0006a04c) aid_tch_main_mp4_pane_g4

0xdc97,	// (0x0006a24a) popup_slider_window_cp02

0xd3f8,	// (0x000699ab) list_recal_day_event_pane

0x9133,	// (0x000656e6) cntbar_detail_btn_pane_ParamLimits

0x9133,	// (0x000656e6) cntbar_detail_btn_pane

0x914b,	// (0x000656fe) cntbar_detail_btn_pane_cp01_ParamLimits

0x914b,	// (0x000656fe) cntbar_detail_btn_pane_cp01

0x9175,	// (0x00065728) cntbar_detail_list_shct_pane_ParamLimits

0x9185,	// (0x00065738) cntbar_detail_pane_g1_ParamLimits

0x9185,	// (0x00065738) cntbar_detail_pane_g1

0x9199,	// (0x0006574c) cntbar_detail_pane_t1_ParamLimits

0x9199,	// (0x0006574c) cntbar_detail_pane_t1

0x9255,	// (0x00065808) cntbar_detail_list_event_pane_g3_ParamLimits

0x9255,	// (0x00065808) cntbar_detail_list_event_pane_g3

0x926d,	// (0x00065820) cntbar_detail_list_event_pane_g4_ParamLimits

0x926d,	// (0x00065820) cntbar_detail_list_event_pane_g4

0x9285,	// (0x00065838) cntbar_detail_list_event_pane_g5_ParamLimits

0x9285,	// (0x00065838) cntbar_detail_list_event_pane_g5

0x929d,	// (0x00065850) cntbar_detail_list_event_pane_g6_ParamLimits

0x929d,	// (0x00065850) cntbar_detail_list_event_pane_g6

0x92e1,	// (0x00065894) cntbar_detail_list_event_pane_t3_ParamLimits

0x92e1,	// (0x00065894) cntbar_detail_list_event_pane_t3

0x92f3,	// (0x000658a6) popup_notif_wgt_window_ParamLimits

0x92f3,	// (0x000658a6) popup_notif_wgt_window

0x930c,	// (0x000658bf) popup_submenu_window_cp01_ParamLimits

0x930c,	// (0x000658bf) popup_submenu_window_cp01

0xabb3,	// (0x00067166) bg_popup_window_pane_cp10

0xd703,	// (0x00069cb6) listscroll_notif_wgt_pane

0xd70d,	// (0x00069cc0) list_notif_wgt_window

0xd716,	// (0x00069cc9) scroll_pane_cp033

0xd71f,	// (0x00069cd2) list_notif_wgt_row_pane_ParamLimits

0xd71f,	// (0x00069cd2) list_notif_wgt_row_pane

0xd733,	// (0x00069ce6) aid_size_list_notif_wgt_del

0xd73c,	// (0x00069cef) list_notif_wgt_row_pane_g1

0xd744,	// (0x00069cf7) list_notif_wgt_row_pane_g2

0xd74c,	// (0x00069cff) list_notif_wgt_row_pane_g3

0x0002,

0xfe1b,	// (0x0006c3ce) list_notif_wgt_row_pane_g

0xd755,	// (0x00069d08) list_notif_wgt_row_pane_t1

0xd763,	// (0x00069d16) list_notif_wgt_row_pane_t2

0xd771,	// (0x00069d24) list_notif_wgt_row_pane_t3

0x0002,

0xfe22,	// (0x0006c3d5) list_notif_wgt_row_pane_t

0xe21a,	// (0x0006a7cd) list_recal_day_event_pane_g1

0xd77f,	// (0x00069d32) list_recal_day_event_pane_t1

0x0991,	// (0x0005cf44) bg_button_pane_cp045

0xd78e,	// (0x00069d41) cntbar_detail_btn_pane_t1

0xc020,	// (0x000685d3) main_callh_pane_ParamLimits

0xc020,	// (0x000685d3) main_callh_pane

0x0991,	// (0x0005cf44) main_coverflow0_pane

0x0991,	// (0x0005cf44) main_wgtman_pane

0x82ca,	// (0x0006487d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82ca,	// (0x0006487d) main_fs_bigclock_unlock_btn_pane

0xcf85,	// (0x00069538) bg_button_pane_cp16

0x8b5a,	// (0x0006510d) cell_tport_appsw_pane_g3

0x9320,	// (0x000658d3) cf0_flow_pane_ParamLimits

0x9320,	// (0x000658d3) cf0_flow_pane

0xd79c,	// (0x00069d4f) listscroll_cf0_pane

0xd7a5,	// (0x00069d58) main_cf0_pane_g1

0x9335,	// (0x000658e8) main_cf0_pane_t1_ParamLimits

0x9335,	// (0x000658e8) main_cf0_pane_t1

0x934c,	// (0x000658ff) main_cf0_pane_t2_ParamLimits

0x934c,	// (0x000658ff) main_cf0_pane_t2

0x0001,

0xfe29,	// (0x0006c3dc) main_cf0_pane_t_ParamLimits

0xfe29,	// (0x0006c3dc) main_cf0_pane_t

0xd7af,	// (0x00069d62) scroll_pane_cp11

0x9363,	// (0x00065916) cf0_flow_pane_g1

0x936f,	// (0x00065922) cf0_flow_pane_g2

0x0001,

0xfe2e,	// (0x0006c3e1) cf0_flow_pane_g

0x937b,	// (0x0006592e) cf0_flow_pane_t1

0x0991,	// (0x0005cf44) main_call6_pane

0x0991,	// (0x0005cf44) main_calllock_pane

0x938d,	// (0x00065940) call6_btn_grp_pane_ParamLimits

0x938d,	// (0x00065940) call6_btn_grp_pane

0x93a7,	// (0x0006595a) call6_pane_g1_ParamLimits

0x93a7,	// (0x0006595a) call6_pane_g1

0x93bd,	// (0x00065970) popup_call6_1st_window_ParamLimits

0x93bd,	// (0x00065970) popup_call6_1st_window

0x93ce,	// (0x00065981) popup_call6_2nd_window_ParamLimits

0x93ce,	// (0x00065981) popup_call6_2nd_window

0x93df,	// (0x00065992) cell_call6_btn_pane_ParamLimits

0x93df,	// (0x00065992) cell_call6_btn_pane

0xabb3,	// (0x00067166) bg_popup_call2_in_pane_cp03

0xd7ba,	// (0x00069d6d) popup_call6_1st_window_g1

0xd7c2,	// (0x00069d75) popup_call6_1st_window_g2

0xd7ca,	// (0x00069d7d) popup_call6_1st_window_g3

0x0002,

0xfe33,	// (0x0006c3e6) popup_call6_1st_window_g

0xd7d2,	// (0x00069d85) popup_call6_1st_window_t1

0xd7e1,	// (0x00069d94) popup_call6_1st_window_t2

0xd7f1,	// (0x00069da4) popup_call6_1st_window_t3

0x0002,

0xfe3a,	// (0x0006c3ed) popup_call6_1st_window_t

0xabb3,	// (0x00067166) bg_popup_call2_in_pane_cp04

0xd7ba,	// (0x00069d6d) popup_call6_2nd_window_g1

0xd7c2,	// (0x00069d75) popup_call6_2nd_window_g2

0xd7ca,	// (0x00069d7d) popup_call6_2nd_window_g3

0x0002,

0xfe33,	// (0x0006c3e6) popup_call6_2nd_window_g

0xd7d2,	// (0x00069d85) popup_call6_2nd_window_t1

0x0991,	// (0x0005cf44) bg_button_pane_cp15

0xd801,	// (0x00069db4) cell_call6_btn_pane_g1

0xd80a,	// (0x00069dbd) cell_call6_btn_pane_t1

0x93f3,	// (0x000659a6) listscroll_wgtman_pane_ParamLimits

0x93f3,	// (0x000659a6) listscroll_wgtman_pane

0x9416,	// (0x000659c9) wgtman_btn_pane_ParamLimits

0x9416,	// (0x000659c9) wgtman_btn_pane

0xaa79,	// (0x0006702c) aid_scroll_copy1

0xd819,	// (0x00069dcc) list_wgtman_pane

0x9459,	// (0x00065a0c) wgtman_btn_pane_g1_ParamLimits

0x9459,	// (0x00065a0c) wgtman_btn_pane_g1

0x9485,	// (0x00065a38) wgtman_btn_pane_t1_ParamLimits

0x9485,	// (0x00065a38) wgtman_btn_pane_t1

0xd823,	// (0x00069dd6) wgtman_btn_pane_t2_ParamLimits

0xd823,	// (0x00069dd6) wgtman_btn_pane_t2

0x0001,

0xfe41,	// (0x0006c3f4) wgtman_btn_pane_t_ParamLimits

0xfe41,	// (0x0006c3f4) wgtman_btn_pane_t

0x94c2,	// (0x00065a75) listrow_wgtman_pane_ParamLimits

0x94c2,	// (0x00065a75) listrow_wgtman_pane

0x94d6,	// (0x00065a89) listrow_wgtman_pane_g1

0x94df,	// (0x00065a92) listrow_wgtman_pane_g2

0x0001,

0xfe46,	// (0x0006c3f9) listrow_wgtman_pane_g

0x94e9,	// (0x00065a9c) listrow_wgtman_pane_t1

0x94f7,	// (0x00065aaa) listrow_wgtman_pane_t2

0x0001,

0xfe4b,	// (0x0006c3fe) listrow_wgtman_pane_t

0x9505,	// (0x00065ab8) wait_bar_pane_cp09

0xd83a,	// (0x00069ded) main_calllock_btn_pane

0xd844,	// (0x00069df7) main_calllock_pane_g1

0x0991,	// (0x0005cf44) bg_button_pane_cp17

0xd850,	// (0x00069e03) main_calllock_btn_pane_g1

0xd859,	// (0x00069e0c) main_calllock_btn_pane_t1

0x0991,	// (0x0005cf44) main_dialer3_pane

0x0991,	// (0x0005cf44) main_fmrd2_pane

0xc555,	// (0x00068b08) main_fs_bigclock_unlock_btn_pane_g1

0xd870,	// (0x00069e23) main_fs_bigclock_unlock_btn_pane_t1

0x950d,	// (0x00065ac0) area_fmrd2_info_pane_ParamLimits

0x950d,	// (0x00065ac0) area_fmrd2_info_pane

0x951e,	// (0x00065ad1) area_fmrd2_visual_pane_ParamLimits

0x951e,	// (0x00065ad1) area_fmrd2_visual_pane

0x952c,	// (0x00065adf) fmrd2_indi_pane_ParamLimits

0x952c,	// (0x00065adf) fmrd2_indi_pane

0x9539,	// (0x00065aec) area_fmrd2_visual_pane_g1

0x9541,	// (0x00065af4) area_fmrd2_visual_pane_t1

0x9551,	// (0x00065b04) area_fmrd2_visual_pane_t2

0x9561,	// (0x00065b14) area_fmrd2_visual_pane_t3

0x0002,

0xfe55,	// (0x0006c408) area_fmrd2_visual_pane_t

0x9571,	// (0x00065b24) area_fmrd2_info_pane_g1

0x9579,	// (0x00065b2c) area_fmrd2_info_pane_t1

0x9589,	// (0x00065b3c) area_fmrd2_info_pane_t2

0x9599,	// (0x00065b4c) area_fmrd2_info_pane_t3

0x95a9,	// (0x00065b5c) area_fmrd2_info_pane_t4

0x0003,

0xfe5c,	// (0x0006c40f) area_fmrd2_info_pane_t

0x95b9,	// (0x00065b6c) fmrd2_indi_pane_t1

0x95c9,	// (0x00065b7c) fmrd2_indi_pane_t2

0x95d9,	// (0x00065b8c) fmrd2_indi_pane_t3

0x0002,

0xfe65,	// (0x0006c418) fmrd2_indi_pane_t

0xed72,	// (0x0006b325) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xed72,	// (0x0006b325) list_single_fs_bigclock_indicator_pane_g5

0xee1b,	// (0x0006b3ce) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xee1b,	// (0x0006b3ce) list_single_fs_bigclock_indicator_pane_t5

0x8d21,	// (0x000652d4) aid_cell_bcale_month_pane_ParamLimits

0x8d21,	// (0x000652d4) aid_cell_bcale_month_pane

0x8d33,	// (0x000652e6) bcale_month_pane_ParamLimits

0x8d33,	// (0x000652e6) bcale_month_pane

0x8d4d,	// (0x00065300) bcale_preview_pane_ParamLimits

0x8d4d,	// (0x00065300) bcale_preview_pane

0xd5fc,	// (0x00069baf) list_single_fs_bigclock_pane_t1_ParamLimits

0xd61b,	// (0x00069bce) list_single_fs_bigclock_pane_t2_ParamLimits

0xd61b,	// (0x00069bce) list_single_fs_bigclock_pane_t2

0x0001,

0xfdec,	// (0x0006c39f) list_single_fs_bigclock_pane_t_ParamLimits

0xfdec,	// (0x0006c39f) list_single_fs_bigclock_pane_t

0xd868,	// (0x00069e1b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe50,	// (0x0006c403) main_fs_bigclock_unlock_btn_pane_g

0x95e9,	// (0x00065b9c) aid_dia3_key_size_ParamLimits

0x95e9,	// (0x00065b9c) aid_dia3_key_size

0x95f8,	// (0x00065bab) aid_dia3_listrow_size_ParamLimits

0x95f8,	// (0x00065bab) aid_dia3_listrow_size

0x9606,	// (0x00065bb9) dia3_keypad_fun_pane_ParamLimits

0x9606,	// (0x00065bb9) dia3_keypad_fun_pane

0x9622,	// (0x00065bd5) dia3_keypad_num_pane_ParamLimits

0x9622,	// (0x00065bd5) dia3_keypad_num_pane

0x963b,	// (0x00065bee) dia3_listscroll_pane_ParamLimits

0x963b,	// (0x00065bee) dia3_listscroll_pane

0x9650,	// (0x00065c03) dia3_numentry_pane_ParamLimits

0x9650,	// (0x00065c03) dia3_numentry_pane

0xd87e,	// (0x00069e31) dia3_list_pane

0xd889,	// (0x00069e3c) scroll_pane_cp12

0x0991,	// (0x0005cf44) bg_dia3_numentry_pane

0xd894,	// (0x00069e47) dia3_numentry_pane_t1

0x9663,	// (0x00065c16) cell_dia3_key_num_pane

0x966b,	// (0x00065c1e) cell_dia3_key0_fun_pane_ParamLimits

0x966b,	// (0x00065c1e) cell_dia3_key0_fun_pane

0x967f,	// (0x00065c32) cell_dia3_key1_fun_pane_ParamLimits

0x967f,	// (0x00065c32) cell_dia3_key1_fun_pane

0x9697,	// (0x00065c4a) dia3_listrow_pane

0xea5c,	// (0x0006b00f) bg_dia3_numentry_pane_g1

0x0991,	// (0x0005cf44) bg_button_pane_cp21

0xd8a3,	// (0x00069e56) cell_dia3_key_num_pane_t1

0xd8b1,	// (0x00069e64) cell_dia3_key_num_pane_t2

0xd8c0,	// (0x00069e73) cell_dia3_key_num_pane_t3

0xd8cf,	// (0x00069e82) cell_dia3_key_num_pane_t4

0x0003,

0xfe6c,	// (0x0006c41f) cell_dia3_key_num_pane_t

0x0991,	// (0x0005cf44) bg_button_pane_cp19

0x96a9,	// (0x00065c5c) cell_dia3_key0_fun_pane_g1

0x0991,	// (0x0005cf44) bg_button_pane_cp20

0x96b1,	// (0x00065c64) cell_dia3_key1_fun_pane_g1

0x96b9,	// (0x00065c6c) area_left_week_number_pane

0x96c2,	// (0x00065c75) area_top_day_name_pane

0x96cb,	// (0x00065c7e) frame_month_view_pane

0x96d7,	// (0x00065c8a) grid_month_view_pane

0x96e1,	// (0x00065c94) cell_top_day_name_pane_ParamLimits

0x96e1,	// (0x00065c94) cell_top_day_name_pane

0x96fb,	// (0x00065cae) cell_area_left_week_number_pane_ParamLimits

0x96fb,	// (0x00065cae) cell_area_left_week_number_pane

0x9711,	// (0x00065cc4) cell_month_view_pane_ParamLimits

0x9711,	// (0x00065cc4) cell_month_view_pane

0xd8de,	// (0x00069e91) frm_month_g1

0x9730,	// (0x00065ce3) frm_month_g2

0x973a,	// (0x00065ced) frm_month_g3

0x9744,	// (0x00065cf7) frm_month_g4

0x974e,	// (0x00065d01) frm_month_g5

0x9758,	// (0x00065d0b) frm_month_g6

0x9764,	// (0x00065d17) frm_month_g7

0xd8e7,	// (0x00069e9a) frm_month_g8

0x9770,	// (0x00065d23) frm_month_g9

0x9779,	// (0x00065d2c) frm_month_g10

0x9782,	// (0x00065d35) frm_month_g11

0x978b,	// (0x00065d3e) frm_month_g12

0x9794,	// (0x00065d47) frm_month_g13

0x979d,	// (0x00065d50) frm_month_g14

0x97a6,	// (0x00065d59) frm_month_g15

0x97b1,	// (0x00065d64) frm_month_g16

0x000f,

0xfe75,	// (0x0006c428) frm_month_g

0x97bc,	// (0x00065d6f) cell_top_day_name_pane_t1

0x97cb,	// (0x00065d7e) cell_area_left_week_number_pane_g1

0x97bc,	// (0x00065d6f) cell_area_left_week_number_pane_t1

0xc555,	// (0x00068b08) cell_month_view_pane_g1

0x97d3,	// (0x00065d86) cell_month_view_pane_t1

0x0991,	// (0x0005cf44) main_fps_pane

0xf00b,	// (0x0006b5be) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf00b,	// (0x0006b5be) cmail_ddmenu_btn02_pane_cp1

0xf027,	// (0x0006b5da) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf027,	// (0x0006b5da) cmail_ddmenu_btn02_pane_cp2

0x8fee,	// (0x000655a1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fee,	// (0x000655a1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd9f,	// (0x0006c352) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd9f,	// (0x0006c352) cmail_ddmenu_btn02_pane_g

0x900c,	// (0x000655bf) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x900c,	// (0x000655bf) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda4,	// (0x0006c357) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda4,	// (0x0006c357) cmail_ddmenu_btn02_pane_t

0x97e2,	// (0x00065d95) fps_text_pane_ParamLimits

0x97e2,	// (0x00065d95) fps_text_pane

0x97f9,	// (0x00065dac) main_fps_pane_g1_ParamLimits

0x97f9,	// (0x00065dac) main_fps_pane_g1

0x9811,	// (0x00065dc4) wait_bar_pane_cp010_ParamLimits

0x9811,	// (0x00065dc4) wait_bar_pane_cp010

0x9824,	// (0x00065dd7) fps_text_pane_t1_ParamLimits

0x9824,	// (0x00065dd7) fps_text_pane_t1

0xebed,	// (0x0006b1a0) cam4_image_uncrop_pane_g1

0xebf6,	// (0x0006b1a9) cam4_image_uncrop_pane_g2

0x6281,	// (0x00062834) cam4_image_uncrop_pane_g3

0x628a,	// (0x0006283d) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0006bebb) cam4_image_uncrop_pane_g

0x9697,	// (0x00065c4a) dia3_listrow_pane_ParamLimits

0x0991,	// (0x0005cf44) main_phob2_pane

0x8b21,	// (0x000650d4) cell_tport_appsw_pane_cp02_ParamLimits

0x8b21,	// (0x000650d4) cell_tport_appsw_pane_cp02

0x8b35,	// (0x000650e8) cell_tport_appsw_pane_cp03_ParamLimits

0x8b35,	// (0x000650e8) cell_tport_appsw_pane_cp03

0x0991,	// (0x0005cf44) phob2_contact_card_pane

0x0991,	// (0x0005cf44) phob2_listscroll_pane

0xd8f0,	// (0x00069ea3) phob2_list_pane

0xd8f8,	// (0x00069eab) scroll_pane_cp034

0x983c,	// (0x00065def) phob2_cc_data_pane_ParamLimits

0x983c,	// (0x00065def) phob2_cc_data_pane

0x985d,	// (0x00065e10) phob2_cc_listscroll_pane_ParamLimits

0x985d,	// (0x00065e10) phob2_cc_listscroll_pane

0x987f,	// (0x00065e32) list_double_large_graphic_phob2_pane_ParamLimits

0x987f,	// (0x00065e32) list_double_large_graphic_phob2_pane

0x9894,	// (0x00065e47) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9894,	// (0x00065e47) list_double_large_graphic_phob2_pane_g1

0x98a1,	// (0x00065e54) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98a1,	// (0x00065e54) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe96,	// (0x0006c449) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe96,	// (0x0006c449) list_double_large_graphic_phob2_pane_g

0x98ad,	// (0x00065e60) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x98ad,	// (0x00065e60) list_double_large_graphic_phob2_pane_t1

0x98c2,	// (0x00065e75) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x98c2,	// (0x00065e75) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe9b,	// (0x0006c44e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe9b,	// (0x0006c44e) list_double_large_graphic_phob2_pane_t

0x0991,	// (0x0005cf44) list_highlight_pane_cp024

0xd900,	// (0x00069eb3) phob2_cc_button_pane

0x98d4,	// (0x00065e87) phob2_cc_data_pane_g1_ParamLimits

0x98d4,	// (0x00065e87) phob2_cc_data_pane_g1

0x98ea,	// (0x00065e9d) phob2_cc_data_pane_g2_ParamLimits

0x98ea,	// (0x00065e9d) phob2_cc_data_pane_g2

0x0001,

0xfea0,	// (0x0006c453) phob2_cc_data_pane_g_ParamLimits

0xfea0,	// (0x0006c453) phob2_cc_data_pane_g

0x98fe,	// (0x00065eb1) phob2_cc_data_pane_t1_ParamLimits

0x98fe,	// (0x00065eb1) phob2_cc_data_pane_t1

0x9918,	// (0x00065ecb) phob2_cc_data_pane_t2_ParamLimits

0x9918,	// (0x00065ecb) phob2_cc_data_pane_t2

0x9932,	// (0x00065ee5) phob2_cc_data_pane_t3_ParamLimits

0x9932,	// (0x00065ee5) phob2_cc_data_pane_t3

0x0002,

0xfea5,	// (0x0006c458) phob2_cc_data_pane_t_ParamLimits

0xfea5,	// (0x0006c458) phob2_cc_data_pane_t

0xd908,	// (0x00069ebb) phob2_cc_list_pane_ParamLimits

0xd908,	// (0x00069ebb) phob2_cc_list_pane

0xe60f,	// (0x0006abc2) scroll_pane_cp035_ParamLimits

0xe60f,	// (0x0006abc2) scroll_pane_cp035

0x0c11,	// (0x0005d1c4) bg_button_pane_cp033

0xd914,	// (0x00069ec7) phob2_cc_button_pane_g1

0xd920,	// (0x00069ed3) phob2_cc_button_pane_t1

0xd935,	// (0x00069ee8) phob2_cc_button_pane_t2

0x0001,

0xfeac,	// (0x0006c45f) phob2_cc_button_pane_t

0x994c,	// (0x00065eff) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x994c,	// (0x00065eff) list_double_large_graphic_phob2_cc_pane

0x9961,	// (0x00065f14) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9961,	// (0x00065f14) list_double_large_graphic_phob2_cc_pane_g1

0x996d,	// (0x00065f20) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x996d,	// (0x00065f20) list_double_large_graphic_phob2_cc_pane_g2

0x9979,	// (0x00065f2c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9979,	// (0x00065f2c) list_double_large_graphic_phob2_cc_pane_g3

0x9985,	// (0x00065f38) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9985,	// (0x00065f38) list_double_large_graphic_phob2_cc_pane_g4

0x9991,	// (0x00065f44) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9991,	// (0x00065f44) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeb1,	// (0x0006c464) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeb1,	// (0x0006c464) list_double_large_graphic_phob2_cc_pane_g

0x999d,	// (0x00065f50) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x999d,	// (0x00065f50) list_double_large_graphic_phob2_cc_pane_t1

0x99c6,	// (0x00065f79) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x99c6,	// (0x00065f79) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfebc,	// (0x0006c46f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfebc,	// (0x0006c46f) list_double_large_graphic_phob2_cc_pane_t

0xd947,	// (0x00069efa) list_highlight_pane_cp025_ParamLimits

0xd947,	// (0x00069efa) list_highlight_pane_cp025

0x0c11,	// (0x0005d1c4) bg_button_pane_cp033_ParamLimits

0xd914,	// (0x00069ec7) phob2_cc_button_pane_g1_ParamLimits

0xd920,	// (0x00069ed3) phob2_cc_button_pane_t1_ParamLimits

0xd935,	// (0x00069ee8) phob2_cc_button_pane_t2_ParamLimits

0xfeac,	// (0x0006c45f) phob2_cc_button_pane_t_ParamLimits

0x0c1f,	// (0x0005d1d2) popup_wgtman_window

0xe0f4,	// (0x0006a6a7) scroll_pane_cp038

0x943b,	// (0x000659ee) wgtman_btn_pane_cp_01_ParamLimits

0x943b,	// (0x000659ee) wgtman_btn_pane_cp_01

0xd955,	// (0x00069f08) wgtman_content_pane

0xd95e,	// (0x00069f11) wgtman_heading_pane

0x0991,	// (0x0005cf44) bg_heading_pane_cp02

0xd967,	// (0x00069f1a) wgtman_heading_pane_g1

0xd96f,	// (0x00069f22) wgtman_heading_pane_t1

0xd97d,	// (0x00069f30) scroll_pane_cp036

0xd985,	// (0x00069f38) wgtman_list_pane

0xd98d,	// (0x00069f40) wgtman_list_pane_t1_ParamLimits

0xd98d,	// (0x00069f40) wgtman_list_pane_t1

0xde12,	// (0x0006a3c5) cam4_grid_pane

0x7004,	// (0x000635b7) bg_button_pane_cp015_ParamLimits

0x7018,	// (0x000635cb) bg_button_pane_cp016_ParamLimits

0x702b,	// (0x000635de) bg_button_pane_cp017_ParamLimits

0x7083,	// (0x00063636) popup_vitu2_query_window_g3_ParamLimits

0x7083,	// (0x00063636) popup_vitu2_query_window_g3

0x7140,	// (0x000636f3) popup_vitu2_query_window_t6_ParamLimits

0x7140,	// (0x000636f3) popup_vitu2_query_window_t6

0x716b,	// (0x0006371e) popup_vitu2_query_window_t7_ParamLimits

0x716b,	// (0x0006371e) popup_vitu2_query_window_t7

0xebed,	// (0x0006b1a0) cam4_grid_pane_g1

0xebf6,	// (0x0006b1a9) cam4_grid_pane_g2

0xd9b0,	// (0x00069f63) cam4_grid_pane_g3

0xd9b9,	// (0x00069f6c) cam4_grid_pane_g4

0x0003,

0xfec1,	// (0x0006c474) cam4_grid_pane_g

0x1b9f,	// (0x0005e152) aid_placing_vt_slider_lsc_ParamLimits

0x1e8c,	// (0x0005e43f) vidtel_button_pane_ParamLimits

0x1e8c,	// (0x0005e43f) vidtel_button_pane

0xd9c4,	// (0x00069f77) bg_button_pane_cp034

0x99ef,	// (0x00065fa2) vidtel_button_pane_g1

0xd9ce,	// (0x00069f81) vidtel_button_pane_t1

0xe1f8,	// (0x0006a7ab) aid_size_vtel_slider_touch

0xe60f,	// (0x0006abc2) scroll_pane_cp039

0xea9a,	// (0x0006b04d) ncim_query_button_pane_cp01_ParamLimits

0xeab9,	// (0x0006b06c) ncimui_query_pane_g1_ParamLimits

0x0c11,	// (0x0005d1c4) input_focus_pane_cp012_ParamLimits

0xeade,	// (0x0006b091) ncim_query_entry_pane_t1_ParamLimits

0xe60f,	// (0x0006abc2) scroll_pane_cp039_ParamLimits

0x2dab,	// (0x0005f35e) navi_pane_bcale_mc_g1

0x2db3,	// (0x0005f366) navi_pane_bcale_mc_t1

0xf072,	// (0x0006b625) main_sp_fs_email_pane_g1

0xf07a,	// (0x0006b62d) main_sp_fs_email_pane_g2

0x0001,

0x0630,	// (0x0005cbe3) main_sp_fs_email_pane_g

0xd2af,	// (0x00069862) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd2af,	// (0x00069862) list_single_cale_mrui_row_pane_g3

0x9034,	// (0x000655e7) list_single_recal_day_pane_g5_event_pane

0xd46a,	// (0x00069a1d) list_single_recal_day_pane_g7

0xd9dc,	// (0x00069f8f) list_recal_day_event_pane_cp01

0xd9e5,	// (0x00069f98) list_recal_vselct_arw_lo_pane_cp01

0xd9ed,	// (0x00069fa0) list_recal_vselct_arw_up_pane_cp01

0xd9f5,	// (0x00069fa8) list_recal_vselct_pane_cp01

0xe21a,	// (0x0006a7cd) list_recal_day_event_pane_cp01_g1

0xd9ff,	// (0x00069fb2) list_recal_day_event_pane_cp01_t1

0xd472,	// (0x00069a25) list_single_recal_day_pane_t1_ParamLimits

0xd484,	// (0x00069a37) list_single_recal_day_pane_t2_ParamLimits

0xfdb4,	// (0x0006c367) list_single_recal_day_pane_t_ParamLimits

0x9f8e,	// (0x00066541) bg_notes_pane_ParamLimits

0x9f9c,	// (0x0006654f) list_notes_pane_ParamLimits

0x1143,	// (0x0005d6f6) scroll_pane_cp06_ParamLimits

0x9fe2,	// (0x00066595) main_notes_pane_ParamLimits

0x0991,	// (0x0005cf44) main_welc_pane

0x99f7,	// (0x00065faa) main_welc_body_pane_ParamLimits

0x99f7,	// (0x00065faa) main_welc_body_pane

0x9a0d,	// (0x00065fc0) main_welc_opti_pane_ParamLimits

0x9a0d,	// (0x00065fc0) main_welc_opti_pane

0x9a24,	// (0x00065fd7) main_welc_pane_t1_ParamLimits

0x9a24,	// (0x00065fd7) main_welc_pane_t1

0xda0d,	// (0x00069fc0) main_welc_body_row_pane_ParamLimits

0xda0d,	// (0x00069fc0) main_welc_body_row_pane

0x9a3d,	// (0x00065ff0) main_welc_opti_row_pane_ParamLimits

0x9a3d,	// (0x00065ff0) main_welc_opti_row_pane

0xda24,	// (0x00069fd7) main_welc_opti_row_pane_g1

0xda2c,	// (0x00069fdf) main_welc_opti_row_pane_t1

0xda3b,	// (0x00069fee) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
