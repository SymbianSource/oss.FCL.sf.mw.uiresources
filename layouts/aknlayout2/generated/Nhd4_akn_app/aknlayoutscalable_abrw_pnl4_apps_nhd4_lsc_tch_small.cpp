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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006b311 };

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
0x042a,	// (0x0006b73b) Screen

0x0436,	// (0x0006b747) application_window

0x0472,	// (0x0006b783) area_bottom_pane_ParamLimits

0x0472,	// (0x0006b783) area_bottom_pane

0x04ab,	// (0x0006b7bc) area_top_pane_ParamLimits

0x04ab,	// (0x0006b7bc) area_top_pane

0x93eb,	// (0x000746fc) call_video_uplink_pane_ParamLimits

0x93eb,	// (0x000746fc) call_video_uplink_pane

0x0539,	// (0x0006b84a) main_pane_ParamLimits

0x0539,	// (0x0006b84a) main_pane

0xc8f2,	// (0x00077c03) context_pane

0x383d,	// (0x0006eb4e) navi_pane

0x386f,	// (0x0006eb80) popup_cale_events_window_ParamLimits

0x386f,	// (0x0006eb80) popup_cale_events_window

0xc905,	// (0x00077c16) popup_mup_playback_window

0x3887,	// (0x0006eb98) signal_pane

0xa855,	// (0x00075b66) main_browser_pane

0xaa2c,	// (0x00075d3d) main_burst_pane

0x3593,	// (0x0006e8a4) main_calc_pane

0xc8d8,	// (0x00077be9) main_cale_day_pane

0x35a7,	// (0x0006e8b8) main_cale_month_pane

0xc8d8,	// (0x00077be9) main_cale_week_pane

0xaa2c,	// (0x00075d3d) main_call_pane

0xa529,	// (0x0007583a) main_call_poc_pane

0xaa2c,	// (0x00075d3d) main_camera_pane

0xaa2c,	// (0x00075d3d) main_chi_dic_pane

0xb22d,	// (0x0007653e) main_clock_pane

0xa529,	// (0x0007583a) main_fmradio_pane

0xaa2c,	// (0x00075d3d) main_graph_messa_pane

0xa529,	// (0x0007583a) main_help_pane

0xa855,	// (0x00075b66) main_im_pane

0xa784,	// (0x00075a95) main_image_pane_ParamLimits

0xa784,	// (0x00075a95) main_image_pane

0xa529,	// (0x0007583a) main_location2_pane

0xaa2c,	// (0x00075d3d) main_location_pane

0xa784,	// (0x00075a95) main_messa_pane

0xa529,	// (0x0007583a) main_mp2_pane

0xaa2c,	// (0x00075d3d) main_mp_pane

0xa529,	// (0x0007583a) main_msg_pane

0xa529,	// (0x0007583a) main_mup_eq_pane

0xa529,	// (0x0007583a) main_mup_pane

0xa855,	// (0x00075b66) main_notes_pane

0xa529,	// (0x0007583a) main_pec_pane

0xa529,	// (0x0007583a) main_phob_pane

0xa529,	// (0x0007583a) main_pinb_pane

0xa529,	// (0x0007583a) main_postcard_pane

0xa529,	// (0x0007583a) main_qdial_pane

0xaa2c,	// (0x00075d3d) main_skin_pane

0xa529,	// (0x0007583a) main_smil2_pane

0xaa2c,	// (0x00075d3d) main_smil_pane

0xaa2c,	// (0x00075d3d) main_video_pane

0xaa2c,	// (0x00075d3d) main_video_tele_pane

0xa784,	// (0x00075a95) main_viewer_pane_ParamLimits

0xa784,	// (0x00075a95) main_viewer_pane

0xaa2c,	// (0x00075d3d) main_vorec_pane

0x35f9,	// (0x0006e90a) popup_blid_sat_info_window_ParamLimits

0x35f9,	// (0x0006e90a) popup_blid_sat_info_window

0x3651,	// (0x0006e962) popup_dyc_status_message_window_ParamLimits

0x3651,	// (0x0006e962) popup_dyc_status_message_window

0x3669,	// (0x0006e97a) popup_grid_large_graphic_window_ParamLimits

0x3669,	// (0x0006e97a) popup_grid_large_graphic_window

0x3719,	// (0x0006ea2a) popup_loc_request_window_ParamLimits

0x3719,	// (0x0006ea2a) popup_loc_request_window

0x3815,	// (0x0006eb26) popup_wml_address_window_ParamLimits

0x3815,	// (0x0006eb26) popup_wml_address_window

0x33cd,	// (0x0006e6de) call_muted_g1

0x3081,	// (0x0006e392) popup_call_audio_conf_window_ParamLimits

0x3081,	// (0x0006e392) popup_call_audio_conf_window

0x33e1,	// (0x0006e6f2) popup_call_audio_first_window_ParamLimits

0x33e1,	// (0x0006e6f2) popup_call_audio_first_window

0x3457,	// (0x0006e768) popup_call_audio_in_window_ParamLimits

0x3457,	// (0x0006e768) popup_call_audio_in_window

0x3493,	// (0x0006e7a4) popup_call_audio_out_window_ParamLimits

0x3493,	// (0x0006e7a4) popup_call_audio_out_window

0x34cd,	// (0x0006e7de) popup_call_audio_second_window_ParamLimits

0x34cd,	// (0x0006e7de) popup_call_audio_second_window

0x3523,	// (0x0006e834) popup_call_audio_wait_window_ParamLimits

0x3523,	// (0x0006e834) popup_call_audio_wait_window

0x3558,	// (0x0006e869) popup_number_entry_window_ParamLimits

0x3558,	// (0x0006e869) popup_number_entry_window

0x9421,	// (0x00074732) bg_popup_call_pane_cp05_ParamLimits

0x9421,	// (0x00074732) bg_popup_call_pane_cp05

0x9441,	// (0x00074752) popup_number_entry_window_t1

0x9454,	// (0x00074765) popup_number_entry_window_t2

0x9466,	// (0x00074777) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0007a3db) popup_number_entry_window_t

0x9bd2,	// (0x00074ee3) text_title_cp2

0x9be5,	// (0x00074ef6) bg_popup_call_pane_cp_ParamLimits

0x9be5,	// (0x00074ef6) bg_popup_call_pane_cp

0x9bf3,	// (0x00074f04) call_thumbnail_pane

0x9bfb,	// (0x00074f0c) popup_call_audio_in_window_g1_ParamLimits

0x9bfb,	// (0x00074f0c) popup_call_audio_in_window_g1

0x9c07,	// (0x00074f18) popup_call_audio_in_window_g2_ParamLimits

0x9c07,	// (0x00074f18) popup_call_audio_in_window_g2

0x9c13,	// (0x00074f24) popup_call_audio_in_window_g3_ParamLimits

0x9c13,	// (0x00074f24) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0007a3e4) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0007a3e4) popup_call_audio_in_window_g

0x9c1f,	// (0x00074f30) popup_call_audio_in_window_t1_ParamLimits

0x9c1f,	// (0x00074f30) popup_call_audio_in_window_t1

0x9c3b,	// (0x00074f4c) popup_call_audio_in_window_t2_ParamLimits

0x9c3b,	// (0x00074f4c) popup_call_audio_in_window_t2

0x9c57,	// (0x00074f68) popup_call_audio_in_window_t3_ParamLimits

0x9c57,	// (0x00074f68) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0007a3eb) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0007a3eb) popup_call_audio_in_window_t

0x9be5,	// (0x00074ef6) bg_popup_call_pane_cp01_ParamLimits

0x9be5,	// (0x00074ef6) bg_popup_call_pane_cp01

0x9bf3,	// (0x00074f04) call_thumbnail_pane_cp02

0x9c6a,	// (0x00074f7b) call_type_pane_cp022

0x9c72,	// (0x00074f83) popup_call_audio_out_window_g1_ParamLimits

0x9c72,	// (0x00074f83) popup_call_audio_out_window_g1

0x9c84,	// (0x00074f95) popup_call_audio_out_window_g2_ParamLimits

0x9c84,	// (0x00074f95) popup_call_audio_out_window_g2

0x9c90,	// (0x00074fa1) popup_call_audio_out_window_g3_ParamLimits

0x9c90,	// (0x00074fa1) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007a3f2) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007a3f2) popup_call_audio_out_window_g

0x9ca2,	// (0x00074fb3) popup_call_audio_out_window_t1_ParamLimits

0x9ca2,	// (0x00074fb3) popup_call_audio_out_window_t1

0x9cba,	// (0x00074fcb) popup_call_audio_out_window_t2_ParamLimits

0x9cba,	// (0x00074fcb) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0007a3f9) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0007a3f9) popup_call_audio_out_window_t

0x9ccf,	// (0x00074fe0) bg_popup_call_pane_ParamLimits

0x9ccf,	// (0x00074fe0) bg_popup_call_pane

0x06f6,	// (0x0006ba07) call_thumbnail_pane_cp_ParamLimits

0x06f6,	// (0x0006ba07) call_thumbnail_pane_cp

0x9d53,	// (0x00075064) call_type_pane_cp01_ParamLimits

0x9d53,	// (0x00075064) call_type_pane_cp01

0x9d97,	// (0x000750a8) popup_call_audio_first_window_g1_ParamLimits

0x9d97,	// (0x000750a8) popup_call_audio_first_window_g1

0x9de3,	// (0x000750f4) popup_call_audio_first_window_g2_ParamLimits

0x9de3,	// (0x000750f4) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007a3fe) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007a3fe) popup_call_audio_first_window_g

0x9e27,	// (0x00075138) popup_call_audio_first_window_t1_ParamLimits

0x9e27,	// (0x00075138) popup_call_audio_first_window_t1

0xa46e,	// (0x0007577f) popup_call_audio_first_window_t4_ParamLimits

0xa46e,	// (0x0007577f) popup_call_audio_first_window_t4

0xa4fa,	// (0x0007580b) popup_call_audio_first_window_t5_ParamLimits

0xa4fa,	// (0x0007580b) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007a403) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007a403) popup_call_audio_first_window_t

0xa529,	// (0x0007583a) bg_popup_call_pane_cp02

0xa533,	// (0x00075844) call_type_pane_cp023

0xa53b,	// (0x0007584c) popup_call_audio_wait_window_g1

0xa543,	// (0x00075854) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007a40a) popup_call_audio_wait_window_g

0xa54b,	// (0x0007585c) popup_call_audio_wait_window_t3

0xa559,	// (0x0007586a) bg_popup_call_pane_cp03_ParamLimits

0xa559,	// (0x0007586a) bg_popup_call_pane_cp03

0xa5b9,	// (0x000758ca) call_thumbnail_pane_cp011_ParamLimits

0xa5b9,	// (0x000758ca) call_thumbnail_pane_cp011

0xa5c5,	// (0x000758d6) call_type_pane_cp034_ParamLimits

0xa5c5,	// (0x000758d6) call_type_pane_cp034

0xa601,	// (0x00075912) popup_call_audio_second_window_g1_ParamLimits

0xa601,	// (0x00075912) popup_call_audio_second_window_g1

0xa63d,	// (0x0007594e) popup_call_audio_second_window_g2_ParamLimits

0xa63d,	// (0x0007594e) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007a40f) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007a40f) popup_call_audio_second_window_g

0xa679,	// (0x0007598a) popup_call_audio_second_window_t1_ParamLimits

0xa679,	// (0x0007598a) popup_call_audio_second_window_t1

0xa6fa,	// (0x00075a0b) popup_call_audio_second_window_t2_ParamLimits

0xa6fa,	// (0x00075a0b) popup_call_audio_second_window_t2

0xa730,	// (0x00075a41) popup_call_audio_second_window_t3_ParamLimits

0xa730,	// (0x00075a41) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0007a414) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0007a414) popup_call_audio_second_window_t

0xa529,	// (0x0007583a) bg_popup_call_pane_cp04

0xa766,	// (0x00075a77) list_conf_pane

0xa76e,	// (0x00075a7f) popup_call_audio_conf_window_t1

0xa77c,	// (0x00075a8d) call_thumbnail_pane_g1

0xa784,	// (0x00075a95) bg_pinb_pane_ParamLimits

0xa784,	// (0x00075a95) bg_pinb_pane

0xa792,	// (0x00075aa3) find_pinb_pane

0xa79b,	// (0x00075aac) listscroll_pinb_pane_ParamLimits

0xa79b,	// (0x00075aac) listscroll_pinb_pane

0xa7aa,	// (0x00075abb) pinb_bg_pane_g1

0x071a,	// (0x0006ba2b) pinb_bg_pane_g2

0x0726,	// (0x0006ba37) pinb_bg_pane_g3

0x0732,	// (0x0006ba43) pinb_bg_pane_g4

0x073e,	// (0x0006ba4f) pinb_bg_pane_g5

0x074a,	// (0x0006ba5b) pinb_bg_pane_g6

0x0755,	// (0x0006ba66) pinb_bg_pane_g7

0x0760,	// (0x0006ba71) pinb_bg_pane_g8

0x076b,	// (0x0006ba7c) pinb_bg_pane_g9

0x0775,	// (0x0006ba86) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0007a41b) pinb_bg_pane_g

0x0792,	// (0x0006baa3) grid_pinb_pane

0x079b,	// (0x0006baac) list_pinb_pane

0x07a4,	// (0x0006bab5) scroll_pane_cp01_ParamLimits

0x07a4,	// (0x0006bab5) scroll_pane_cp01

0xa7b4,	// (0x00075ac5) find_pinb_pane_g1_ParamLimits

0xa7b4,	// (0x00075ac5) find_pinb_pane_g1

0xa7cc,	// (0x00075add) find_pinb_pane_t1

0xa7de,	// (0x00075aef) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0007a435) find_pinb_pane_t

0xa7f3,	// (0x00075b04) input_focus_pane_cp01_ParamLimits

0xa7f3,	// (0x00075b04) input_focus_pane_cp01

0x07b6,	// (0x0006bac7) cell_pinb_pane_ParamLimits

0x07b6,	// (0x0006bac7) cell_pinb_pane

0x07e1,	// (0x0006baf2) cell_pinb_pane_g1_ParamLimits

0x07e1,	// (0x0006baf2) cell_pinb_pane_g1

0xa7ff,	// (0x00075b10) cell_pinb_pane_g2_ParamLimits

0xa7ff,	// (0x00075b10) cell_pinb_pane_g2

0xa80b,	// (0x00075b1c) cell_pinb_pane_g3_ParamLimits

0xa80b,	// (0x00075b1c) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007a43a) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007a43a) cell_pinb_pane_g

0xa529,	// (0x0007583a) grid_highlight_pane_cp01

0x07f4,	// (0x0006bb05) list_pinb_item_pane_ParamLimits

0x07f4,	// (0x0006bb05) list_pinb_item_pane

0xa529,	// (0x0007583a) list_highlight_pane_cp02

0x0807,	// (0x0006bb18) list_pinb_item_pane_g1_ParamLimits

0x0807,	// (0x0006bb18) list_pinb_item_pane_g1

0x0814,	// (0x0006bb25) list_pinb_item_pane_g2_ParamLimits

0x0814,	// (0x0006bb25) list_pinb_item_pane_g2

0x0820,	// (0x0006bb31) list_pinb_item_pane_g3_ParamLimits

0x0820,	// (0x0006bb31) list_pinb_item_pane_g3

0x0831,	// (0x0006bb42) list_pinb_item_pane_g4_ParamLimits

0x0831,	// (0x0006bb42) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007a441) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007a441) list_pinb_item_pane_g

0x083d,	// (0x0006bb4e) list_pinb_item_pane_t1_ParamLimits

0x083d,	// (0x0006bb4e) list_pinb_item_pane_t1

0x0872,	// (0x0006bb83) calc_display_pane

0x089a,	// (0x0006bbab) calc_paper_pane

0x08bd,	// (0x0006bbce) grid_calc_pane

0xa529,	// (0x0007583a) bg_list_pane_cp01

0x08eb,	// (0x0006bbfc) clock_g1

0x08f3,	// (0x0006bc04) clock_g2

0x0001,

0xf139,	// (0x0007a44a) clock_g

0x08fb,	// (0x0006bc0c) clock_t1_ParamLimits

0x08fb,	// (0x0006bc0c) clock_t1

0x0910,	// (0x0006bc21) clock_t2_ParamLimits

0x0910,	// (0x0006bc21) clock_t2

0x0922,	// (0x0006bc33) clock_t3_ParamLimits

0x0922,	// (0x0006bc33) clock_t3

0x0934,	// (0x0006bc45) clock_t4_ParamLimits

0x0934,	// (0x0006bc45) clock_t4

0x0946,	// (0x0006bc57) clock_t5_ParamLimits

0x0946,	// (0x0006bc57) clock_t5

0x095b,	// (0x0006bc6c) clock_t6_ParamLimits

0x095b,	// (0x0006bc6c) clock_t6

0x096d,	// (0x0006bc7e) clock_t7_ParamLimits

0x096d,	// (0x0006bc7e) clock_t7

0x097f,	// (0x0006bc90) clock_t8_ParamLimits

0x097f,	// (0x0006bc90) clock_t8

0x0993,	// (0x0006bca4) clock_t9_ParamLimits

0x0993,	// (0x0006bca4) clock_t9

0x0008,

0xf13e,	// (0x0007a44f) clock_t_ParamLimits

0xf13e,	// (0x0007a44f) clock_t

0xa817,	// (0x00075b28) popup_clock_analogue_window_cp02

0xa817,	// (0x00075b28) popup_clock_digital_window_cp01

0xa81f,	// (0x00075b30) listscroll_help_pane

0xa529,	// (0x0007583a) phob_pre_status_pane

0xa829,	// (0x00075b3a) grid_qdial_pane

0xa784,	// (0x00075a95) listscroll_mce_pane

0xa784,	// (0x00075a95) bg_notes_pane

0xa833,	// (0x00075b44) list_notes_pane

0x09a7,	// (0x0006bcb8) scroll_pane_cp06

0xa841,	// (0x00075b52) bg_calc_paper_pane

0x9480,	// (0x00074791) list_calc_pane

0xa855,	// (0x00075b66) bg_calc_display_pane

0x09bb,	// (0x0006bccc) calc_display_pane_t1

0x09cd,	// (0x0006bcde) calc_display_pane_t2

0x949a,	// (0x000747ab) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007a462) calc_display_pane_t

0x09df,	// (0x0006bcf0) cell_calc_pane_ParamLimits

0x09df,	// (0x0006bcf0) cell_calc_pane

0xa861,	// (0x00075b72) bg_calc_paper_pane_g1

0xa86d,	// (0x00075b7e) bg_calc_paper_pane_g2

0xa879,	// (0x00075b8a) bg_calc_paper_pane_g3

0xa885,	// (0x00075b96) bg_calc_paper_pane_g4

0xa891,	// (0x00075ba2) bg_calc_paper_pane_g5

0x0a16,	// (0x0006bd27) bg_calc_paper_pane_g6

0x0a25,	// (0x0006bd36) bg_calc_paper_pane_g7

0x0a34,	// (0x0006bd45) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007a469) bg_calc_paper_pane_g

0x0a47,	// (0x0006bd58) calc_bg_paper_pane_g9

0x0a5a,	// (0x0006bd6b) list_calc_item_pane_ParamLimits

0x0a5a,	// (0x0006bd6b) list_calc_item_pane

0xa89d,	// (0x00075bae) list_calc_item_pane_g1

0x94ac,	// (0x000747bd) list_calc_item_pane_t1_ParamLimits

0x94ac,	// (0x000747bd) list_calc_item_pane_t1

0x0a73,	// (0x0006bd84) list_calc_item_pane_t2_ParamLimits

0x0a73,	// (0x0006bd84) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007a47a) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007a47a) list_calc_item_pane_t

0xa8aa,	// (0x00075bbb) cell_calc_pane_g1

0xa8b4,	// (0x00075bc5) grid_highlight_pane_cp02

0xa8d6,	// (0x00075be7) bg_calc_display_pane_g1

0x94be,	// (0x000747cf) bg_calc_display_pane_g2

0xa8df,	// (0x00075bf0) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0007a484) bg_calc_display_pane_g

0x0aa5,	// (0x0006bdb6) cell_qdial_pane_ParamLimits

0x0aa5,	// (0x0006bdb6) cell_qdial_pane

0x0ab9,	// (0x0006bdca) cell_qdial_pane_g1_ParamLimits

0x0ab9,	// (0x0006bdca) cell_qdial_pane_g1

0x0acf,	// (0x0006bde0) cell_qdial_pane_g2_ParamLimits

0x0acf,	// (0x0006bde0) cell_qdial_pane_g2

0xa8e8,	// (0x00075bf9) cell_qdial_pane_g3_ParamLimits

0xa8e8,	// (0x00075bf9) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007a48b) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007a48b) cell_qdial_pane_g

0x0af5,	// (0x0006be06) cell_qdial_pane_t1_ParamLimits

0x0af5,	// (0x0006be06) cell_qdial_pane_t1

0x0b0d,	// (0x0006be1e) cell_qdial_pane_t2_ParamLimits

0x0b0d,	// (0x0006be1e) cell_qdial_pane_t2

0x0b20,	// (0x0006be31) cell_qdial_pane_t3_ParamLimits

0x0b20,	// (0x0006be31) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0007a494) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0007a494) cell_qdial_pane_t

0xa529,	// (0x0007583a) grid_highlight_pane_cp04

0xa8f4,	// (0x00075c05) thumbnail_qdial_pane_ParamLimits

0xa8f4,	// (0x00075c05) thumbnail_qdial_pane

0xa950,	// (0x00075c61) list_help_pane

0xa959,	// (0x00075c6a) scroll_pane_cp02

0xac9d,	// (0x00075fae) help_list_pane_t1_ParamLimits

0xac9d,	// (0x00075fae) help_list_pane_t1

0x94c8,	// (0x000747d9) bg_notes_pane_g2

0x94d0,	// (0x000747e1) bg_notes_pane_g3

0x94d8,	// (0x000747e9) notes_bg_pane_g1

0x94e0,	// (0x000747f1) notes_bg_pane_g4

0x94e8,	// (0x000747f9) notes_bg_pane_g5

0x94f0,	// (0x00074801) notes_bg_pane_g6

0x94f8,	// (0x00074809) notes_bg_pane_g7

0x9500,	// (0x00074811) notes_bg_pane_g8

0x9508,	// (0x00074819) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0007a4b2) notes_bg_pane_g

0x0b33,	// (0x0006be44) list_notes_text_pane_ParamLimits

0x0b33,	// (0x0006be44) list_notes_text_pane

0xa962,	// (0x00075c73) list_notes_text_pane_g1

0x0b49,	// (0x0006be5a) list_notes_text_pane_t1

0x0b57,	// (0x0006be68) listscroll_cale_week_pane

0x0b83,	// (0x0006be94) bg_cale_heading_pane

0xa985,	// (0x00075c96) bg_cale_pane_cp01

0x0b9b,	// (0x0006beac) cale_week_corner_pane

0x0bba,	// (0x0006becb) cale_week_day_heading_pane

0x0bd7,	// (0x0006bee8) cale_week_scroll_pane_g1

0x0bea,	// (0x0006befb) cale_week_scroll_pane_g2

0x0c02,	// (0x0006bf13) cale_week_scroll_pane_g3

0x0c1a,	// (0x0006bf2b) cale_week_scroll_pane_g4

0x0c32,	// (0x0006bf43) cale_week_scroll_pane_g5

0x0c52,	// (0x0006bf63) cale_week_scroll_pane_g6

0x0c72,	// (0x0006bf83) cale_week_scroll_pane_g7

0x0c92,	// (0x0006bfa3) cale_week_scroll_pane_g8

0x0cb6,	// (0x0006bfc7) cale_week_scroll_pane_g9

0x0cce,	// (0x0006bfdf) cale_week_scroll_pane_g10

0x0ce6,	// (0x0006bff7) cale_week_scroll_pane_g11

0x0cfe,	// (0x0006c00f) cale_week_scroll_pane_g12

0x0d16,	// (0x0006c027) cale_week_scroll_pane_g13

0x0d16,	// (0x0006c027) cale_week_scroll_pane_g14

0x0d16,	// (0x0006c027) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0007a4c1) cale_week_scroll_pane_g

0x0d52,	// (0x0006c063) cale_week_time_pane

0x0d76,	// (0x0006c087) grid_cale_week_pane

0xa9b4,	// (0x00075cc5) scroll_pane_cp08

0x0d9c,	// (0x0006c0ad) cell_cale_week_pane_ParamLimits

0x0d9c,	// (0x0006c0ad) cell_cale_week_pane

0x0e2a,	// (0x0006c13b) cale_week_day_heading_pane_t1

0x0e54,	// (0x0006c165) cale_week_day_heading_pane_t2

0x0e83,	// (0x0006c194) cale_week_day_heading_pane_t3

0x0eb2,	// (0x0006c1c3) cale_week_day_heading_pane_t4

0x0ee1,	// (0x0006c1f2) cale_week_day_heading_pane_t5

0x0f18,	// (0x0006c229) cale_week_day_heading_pane_t6

0x0f4f,	// (0x0006c260) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007a4e2) cale_week_day_heading_pane_t

0xa9d1,	// (0x00075ce2) bg_cale_side_pane

0x0f79,	// (0x0006c28a) cale_week_time_pane_t1

0x0f93,	// (0x0006c2a4) cale_week_time_pane_t2

0x0fad,	// (0x0006c2be) cale_week_time_pane_t3

0x0fc7,	// (0x0006c2d8) cale_week_time_pane_t4

0x0fe1,	// (0x0006c2f2) cale_week_time_pane_t5

0x0ffb,	// (0x0006c30c) cale_week_time_pane_t6

0x1015,	// (0x0006c326) cale_week_time_pane_t7

0x102f,	// (0x0006c340) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007a4f1) cale_week_time_pane_t

0x104f,	// (0x0006c360) cell_cale_week_pane_g2

0x1073,	// (0x0006c384) cell_cale_week_pane_g3_ParamLimits

0x1073,	// (0x0006c384) cell_cale_week_pane_g3

0xa9df,	// (0x00075cf0) grid_highlight_pane_cp07

0xa9e7,	// (0x00075cf8) listscroll_gms_pane

0xa9f1,	// (0x00075d02) grid_gms_pane

0xa9fa,	// (0x00075d0b) listscroll_gms_pane_g1

0xaa02,	// (0x00075d13) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007a502) listscroll_gms_pane_g

0x108b,	// (0x0006c39c) scroll_pane_cp010

0x1096,	// (0x0006c3a7) cell_gms_pane_ParamLimits

0x1096,	// (0x0006c3a7) cell_gms_pane

0x10a8,	// (0x0006c3b9) cell_gms_pane_g1

0xaa0a,	// (0x00075d1b) cell_gms_pane_g2

0xaa12,	// (0x00075d23) cell_gms_pane_g3

0xaa1b,	// (0x00075d2c) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0007a507) cell_gms_pane_g

0xaa24,	// (0x00075d35) grid_highlight_pane_cp09

0x3377,	// (0x0006e688) phob_pre_status_pane_g1

0x337f,	// (0x0006e690) phob_pre_status_pane_g2

0x3387,	// (0x0006e698) phob_pre_status_pane_g3

0x338f,	// (0x0006e6a0) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0007a905) phob_pre_status_pane_g

0x339f,	// (0x0006e6b0) phob_pre_status_pane_t1

0x33ad,	// (0x0006e6be) phob_pre_status_pane_t2

0x33bd,	// (0x0006e6ce) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0007a910) phob_pre_status_pane_t

0xaa2c,	// (0x00075d3d) bg_list_pane_cp05

0x10b8,	// (0x0006c3c9) grid_vorec_pane

0x10c0,	// (0x0006c3d1) vorec_t1

0x10ce,	// (0x0006c3df) vorec_t2

0x10dc,	// (0x0006c3ed) vorec_t3

0x10ea,	// (0x0006c3fb) vorec_t4

0x934f,	// (0x00074660) vorec_t5

0x935d,	// (0x0007466e) vorec_t6

0x0004,

0xf1ff,	// (0x0007a510) vorec_t

0x936b,	// (0x0007467c) wait_bar_pane_cp01

0x1106,	// (0x0006c417) cell_vorec_pane_ParamLimits

0x1106,	// (0x0006c417) cell_vorec_pane

0x9510,	// (0x00074821) cell_vorec_pane_g1

0xa529,	// (0x0007583a) grid_highlight_pane_cp05

0x1131,	// (0x0006c442) cams_zoom_pane

0x1140,	// (0x0006c451) image_vga_pane

0x115a,	// (0x0006c46b) main_camera_pane_g1

0x116c,	// (0x0006c47d) main_camera_pane_g2

0x117c,	// (0x0006c48d) main_camera_pane_g3

0x118c,	// (0x0006c49d) main_camera_pane_g4

0x119c,	// (0x0006c4ad) main_camera_pane_g5

0x11ac,	// (0x0006c4bd) main_camera_pane_g6

0x11bc,	// (0x0006c4cd) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007a51b) main_camera_pane_g

0x11cc,	// (0x0006c4dd) main_camera_pane_t1

0x11e2,	// (0x0006c4f3) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007a52c) main_camera_pane_t

0x121c,	// (0x0006c52d) cams_zoom_pane_cp_ParamLimits

0x121c,	// (0x0006c52d) cams_zoom_pane_cp

0x1244,	// (0x0006c555) image_cif_pane_ParamLimits

0x1244,	// (0x0006c555) image_cif_pane

0x127f,	// (0x0006c590) image_subqcif_pane

0x1287,	// (0x0006c598) main_video_pane_g1_ParamLimits

0x1287,	// (0x0006c598) main_video_pane_g1

0x12ab,	// (0x0006c5bc) main_video_pane_g2_ParamLimits

0x12ab,	// (0x0006c5bc) main_video_pane_g2

0x12df,	// (0x0006c5f0) main_video_pane_g3_ParamLimits

0x12df,	// (0x0006c5f0) main_video_pane_g3

0x130d,	// (0x0006c61e) main_video_pane_g4_ParamLimits

0x130d,	// (0x0006c61e) main_video_pane_g4

0x133b,	// (0x0006c64c) main_video_pane_g5_ParamLimits

0x133b,	// (0x0006c64c) main_video_pane_g5

0xaa40,	// (0x00075d51) main_video_pane_g6_ParamLimits

0xaa40,	// (0x00075d51) main_video_pane_g6

0x0006,

0xf220,	// (0x0007a531) main_video_pane_g_ParamLimits

0xf220,	// (0x0007a531) main_video_pane_g

0x1364,	// (0x0006c675) main_video_pane_t1_ParamLimits

0x1364,	// (0x0006c675) main_video_pane_t1

0xaa5a,	// (0x00075d6b) cams_zoom_pane_g1

0xaa63,	// (0x00075d74) cams_zoom_pane_g2

0xaa6c,	// (0x00075d7d) cams_zoom_pane_g3

0xaa75,	// (0x00075d86) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007a540) cams_zoom_pane_g

0x13c1,	// (0x0006c6d2) grid_cams_pane

0x13db,	// (0x0006c6ec) linegrid_cams_pane

0x13ee,	// (0x0006c6ff) cell_cams_pane_ParamLimits

0x13ee,	// (0x0006c6ff) cell_cams_pane

0xaa7e,	// (0x00075d8f) cams_burst_image_pane

0xaa86,	// (0x00075d97) cell_cams_pane_g1

0xa529,	// (0x0007583a) grid_highlight_pane_cp03

0xa8aa,	// (0x00075bbb) mp_bg_pane_g1

0xa529,	// (0x0007583a) bg_list_pane_cp03

0xc7fd,	// (0x00077b0e) bg_mp_pane

0xc805,	// (0x00077b16) grid_mp_pane

0xc80d,	// (0x00077b1e) media_player_g1

0xc815,	// (0x00077b26) media_player_t1

0xc823,	// (0x00077b34) media_player_t2

0xc831,	// (0x00077b42) media_player_t3

0xc83f,	// (0x00077b50) media_player_t4

0xc84d,	// (0x00077b5e) media_player_t5

0xc85b,	// (0x00077b6c) media_player_t6

0xc869,	// (0x00077b7a) media_player_t7

0x0006,

0xf5de,	// (0x0007a8ef) media_player_t

0xc877,	// (0x00077b88) wait_bar_pane_cp02

0xf5c3,	// (0x0007a8d4) main_usb_pane_t

0x336e,	// (0x0006e67f) cell_mp_pane

0xa8aa,	// (0x00075bbb) cell_mp_pane_g1

0xa529,	// (0x0007583a) grid_highlight_pane_cp06

0xaa8e,	// (0x00075d9f) grid_skin_colour_pane

0xaa96,	// (0x00075da7) list_highlight_pane_cp03

0x1524,	// (0x0006c835) skin_g1

0xaa9e,	// (0x00075daf) skin_t1

0xaaad,	// (0x00075dbe) skin_t2

0x0001,

0xf264,	// (0x0007a575) skin_t

0x152c,	// (0x0006c83d) cell_skin_colour_pane_ParamLimits

0x152c,	// (0x0006c83d) cell_skin_colour_pane

0xaabb,	// (0x00075dcc) cell_skin_colour_pane_g1

0x15a5,	// (0x0006c8b6) call_video_g1_ParamLimits

0x15a5,	// (0x0006c8b6) call_video_g1

0x15c1,	// (0x0006c8d2) call_video_g2_ParamLimits

0x15c1,	// (0x0006c8d2) call_video_g2

0x0001,

0xf269,	// (0x0007a57a) call_video_g_ParamLimits

0xf269,	// (0x0007a57a) call_video_g

0x1613,	// (0x0006c924) call_video_uplink_pane_cp1_ParamLimits

0x1613,	// (0x0006c924) call_video_uplink_pane_cp1

0xaacd,	// (0x00075dde) call_video_uplink_pane_cp2

0x16b2,	// (0x0006c9c3) video_down_crop_pane_ParamLimits

0x16b2,	// (0x0006c9c3) video_down_crop_pane

0x179b,	// (0x0006caac) video_down_pane_ParamLimits

0x179b,	// (0x0006caac) video_down_pane

0xaad5,	// (0x00075de6) video_down_subqcif_pane_ParamLimits

0xaad5,	// (0x00075de6) video_down_subqcif_pane

0xaaed,	// (0x00075dfe) video_down_subqcif_pane_cp_ParamLimits

0xaaed,	// (0x00075dfe) video_down_subqcif_pane_cp

0xab13,	// (0x00075e24) im_reading_pane_ParamLimits

0xab13,	// (0x00075e24) im_reading_pane

0x18ab,	// (0x0006cbbc) im_writing_pane_ParamLimits

0x18ab,	// (0x0006cbbc) im_writing_pane

0x18c1,	// (0x0006cbd2) im_reading_pane_t1

0xab2d,	// (0x00075e3e) list_im_pane

0xab3e,	// (0x00075e4f) scroll_pane_cp07

0x18fb,	// (0x0006cc0c) im_writing_pane_t1_ParamLimits

0x18fb,	// (0x0006cc0c) im_writing_pane_t1

0xab57,	// (0x00075e68) im_writing_pane_t2_ParamLimits

0xab57,	// (0x00075e68) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007a584) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007a584) im_writing_pane_t

0xa529,	// (0x0007583a) input_focus_pane_cp04

0xa529,	// (0x0007583a) input_focus_pane_cp05

0x1910,	// (0x0006cc21) list_im_single_pane_ParamLimits

0x1910,	// (0x0006cc21) list_im_single_pane

0x1925,	// (0x0006cc36) list_single_im_pane_t1

0x332e,	// (0x0006e63f) blid_accuracy_pane

0x3336,	// (0x0006e647) blid_compass_pane

0x3340,	// (0x0006e651) main_location_t1

0x3350,	// (0x0006e661) main_location_t2

0x3360,	// (0x0006e671) main_location_t3

0x0002,

0xf5ed,	// (0x0007a8fe) main_location_t

0xa529,	// (0x0007583a) aid_levels_location

0xa8aa,	// (0x00075bbb) blid_accuracy_pane_g1

0xa8aa,	// (0x00075bbb) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007a5e6) blid_accuracy_pane_g

0xab9f,	// (0x00075eb0) wml_content_pane

0xabdd,	// (0x00075eee) wml_button_pane_ParamLimits

0xabdd,	// (0x00075eee) wml_button_pane

0x1934,	// (0x0006cc45) wml_list_single_large_pane_ParamLimits

0x1934,	// (0x0006cc45) wml_list_single_large_pane

0x1949,	// (0x0006cc5a) wml_list_single_medium_pane_ParamLimits

0x1949,	// (0x0006cc5a) wml_list_single_medium_pane

0x1960,	// (0x0006cc71) wml_list_single_small_pane_ParamLimits

0x1960,	// (0x0006cc71) wml_list_single_small_pane

0xabf1,	// (0x00075f02) wml_selection_box_pane_ParamLimits

0xabf1,	// (0x00075f02) wml_selection_box_pane

0xac04,	// (0x00075f15) wml_list_single_pane_t1

0xac13,	// (0x00075f24) wml_list_single_medium_pane_t1

0xac22,	// (0x00075f33) wml_list_single_large_pane_t1

0xac31,	// (0x00075f42) input_focus_pane_cp02_ParamLimits

0xac31,	// (0x00075f42) input_focus_pane_cp02

0xac44,	// (0x00075f55) wml_selection_box_pane_g1

0xac4d,	// (0x00075f5e) wml_selection_box_pane_t1_ParamLimits

0xac4d,	// (0x00075f5e) wml_selection_box_pane_t1

0xa784,	// (0x00075a95) bg_wml_button_pane_ParamLimits

0xa784,	// (0x00075a95) bg_wml_button_pane

0xac65,	// (0x00075f76) wml_button_pane_g1

0xac6d,	// (0x00075f7e) wml_button_pane_t1

0xac65,	// (0x00075f76) wml_button_bg_pane_g1

0xac7d,	// (0x00075f8e) wml_button_bg_pane_g2

0xac85,	// (0x00075f96) wml_button_bg_pane_g3

0xac8d,	// (0x00075f9e) wml_button_bg_pane_g4

0xac95,	// (0x00075fa6) wml_button_bg_pane_g5

0xacbb,	// (0x00075fcc) wml_button_bg_pane_g6

0xacc3,	// (0x00075fd4) wml_button_bg_pane_g7

0xaccb,	// (0x00075fdc) wml_button_bg_pane_g8

0xacd3,	// (0x00075fe4) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007a589) wml_button_bg_pane_g

0x1979,	// (0x0006cc8a) bg_list_pane_cp02

0xacdb,	// (0x00075fec) mce_header_pane_ParamLimits

0xacdb,	// (0x00075fec) mce_header_pane

0xacf1,	// (0x00076002) mce_icon_pane

0xacf1,	// (0x00076002) mce_image_pane

0xacfa,	// (0x0007600b) mce_text_pane_ParamLimits

0xacfa,	// (0x0007600b) mce_text_pane

0x1981,	// (0x0006cc92) scroll_pane_cp03

0xabd5,	// (0x00075ee6) scroll_pane_cp04

0xad0d,	// (0x0007601e) scroll_pane_cp05_ParamLimits

0xad0d,	// (0x0007601e) scroll_pane_cp05

0x198b,	// (0x0006cc9c) mce_header_field_pane_ParamLimits

0x198b,	// (0x0006cc9c) mce_header_field_pane

0x19a2,	// (0x0006ccb3) mce_header_field_pane_2_ParamLimits

0x19a2,	// (0x0006ccb3) mce_header_field_pane_2

0x19b8,	// (0x0006ccc9) mce_header_field_pane_3

0x19c0,	// (0x0006ccd1) list_single_mce_message_pane_ParamLimits

0x19c0,	// (0x0006ccd1) list_single_mce_message_pane

0x19d6,	// (0x0006cce7) list_single_mce_smart_pane_ParamLimits

0x19d6,	// (0x0006cce7) list_single_mce_smart_pane

0xad19,	// (0x0007602a) input_focus_pane_cp03

0xad22,	// (0x00076033) list_header_data_pane

0x19f7,	// (0x0006cd08) mce_header_field_pane_t1

0x1a07,	// (0x0006cd18) list_single_mce_header_pane_ParamLimits

0x1a07,	// (0x0006cd18) list_single_mce_header_pane

0xad2a,	// (0x0007603b) list_single_mce_header_pane_t1

0xad39,	// (0x0007604a) list_single_mce_message_pane_g1

0xad41,	// (0x00076052) list_single_mce_message_pane_t1

0x1a41,	// (0x0006cd52) bg_cale_heading_pane_cp01_ParamLimits

0x1a41,	// (0x0006cd52) bg_cale_heading_pane_cp01

0xad4f,	// (0x00076060) bg_cale_pane_cp02_ParamLimits

0xad4f,	// (0x00076060) bg_cale_pane_cp02

0x1a7b,	// (0x0006cd8c) cale_month_corner_pane

0x1a9a,	// (0x0006cdab) cale_month_day_heading_pane_ParamLimits

0x1a9a,	// (0x0006cdab) cale_month_day_heading_pane

0x1aec,	// (0x0006cdfd) cale_month_pane_g1_ParamLimits

0x1aec,	// (0x0006cdfd) cale_month_pane_g1

0x1b1b,	// (0x0006ce2c) cale_month_pane_g2_ParamLimits

0x1b1b,	// (0x0006ce2c) cale_month_pane_g2

0x1b4b,	// (0x0006ce5c) cale_month_pane_g3_ParamLimits

0x1b4b,	// (0x0006ce5c) cale_month_pane_g3

0x1b87,	// (0x0006ce98) cale_month_pane_g4_ParamLimits

0x1b87,	// (0x0006ce98) cale_month_pane_g4

0x1bc3,	// (0x0006ced4) cale_month_pane_g5_ParamLimits

0x1bc3,	// (0x0006ced4) cale_month_pane_g5

0x1c0b,	// (0x0006cf1c) cale_month_pane_g6_ParamLimits

0x1c0b,	// (0x0006cf1c) cale_month_pane_g6

0x1c57,	// (0x0006cf68) cale_month_pane_g7_ParamLimits

0x1c57,	// (0x0006cf68) cale_month_pane_g7

0x1ca7,	// (0x0006cfb8) cale_month_pane_g8_ParamLimits

0x1ca7,	// (0x0006cfb8) cale_month_pane_g8

0x1cfb,	// (0x0006d00c) cale_month_pane_g9_ParamLimits

0x1cfb,	// (0x0006d00c) cale_month_pane_g9

0x1d4d,	// (0x0006d05e) cale_month_pane_g10_ParamLimits

0x1d4d,	// (0x0006d05e) cale_month_pane_g10

0x1d9f,	// (0x0006d0b0) cale_month_pane_g11_ParamLimits

0x1d9f,	// (0x0006d0b0) cale_month_pane_g11

0x1df1,	// (0x0006d102) cale_month_pane_g12_ParamLimits

0x1df1,	// (0x0006d102) cale_month_pane_g12

0x1e43,	// (0x0006d154) cale_month_pane_g13_ParamLimits

0x1e43,	// (0x0006d154) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007a59c) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007a59c) cale_month_pane_g

0x1e95,	// (0x0006d1a6) cale_month_week_pane

0x1eb9,	// (0x0006d1ca) grid_cale_month_pane_ParamLimits

0x1eb9,	// (0x0006d1ca) grid_cale_month_pane

0x1f02,	// (0x0006d213) cale_month_day_heading_pane_t1

0x1f44,	// (0x0006d255) cale_month_day_heading_pane_t2

0x1f79,	// (0x0006d28a) cale_month_day_heading_pane_t3

0x1fae,	// (0x0006d2bf) cale_month_day_heading_pane_t4

0x1feb,	// (0x0006d2fc) cale_month_day_heading_pane_t5

0x2030,	// (0x0006d341) cale_month_day_heading_pane_t6

0x2075,	// (0x0006d386) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007a5b7) cale_month_day_heading_pane_t

0xa9d1,	// (0x00075ce2) bg_cale_side_pane_cp01

0x20c2,	// (0x0006d3d3) cale_month_week_pane_t1

0x20db,	// (0x0006d3ec) cale_month_week_pane_t2

0x20f4,	// (0x0006d405) cale_month_week_pane_t3

0x210d,	// (0x0006d41e) cale_month_week_pane_t4

0x2126,	// (0x0006d437) cale_month_week_pane_t5

0x213f,	// (0x0006d450) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007a5c6) cale_month_week_pane_t

0x2158,	// (0x0006d469) cell_cale_month_pane_ParamLimits

0x2158,	// (0x0006d469) cell_cale_month_pane

0x951a,	// (0x0007482b) cell_cale_month_pane_g1

0x22b0,	// (0x0006d5c1) cell_cale_month_pane_t1_ParamLimits

0x22b0,	// (0x0006d5c1) cell_cale_month_pane_t1

0xa9df,	// (0x00075cf0) grid_highlight_pane_cp08

0xa8aa,	// (0x00075bbb) main_smil_g1

0x22dc,	// (0x0006d5ed) smil_status_pane

0xad8e,	// (0x0007609f) smil_text_pane

0xc6dd,	// (0x000779ee) bg_popup_call3_rect_pane_g8

0xc6e5,	// (0x000779f6) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007a87f) bg_popup_call3_rect_pane_g

0xc96c,	// (0x00077c7d) smil_status_volume_pane_g1

0xad98,	// (0x000760a9) smil_status_pane_t1

0x9660,	// (0x00074971) volume_smil_pane

0xadaf,	// (0x000760c0) list_smil_text_pane

0x22f1,	// (0x0006d602) scroll_pane_cp011

0x22fc,	// (0x0006d60d) smil_text_list_pane_t1_ParamLimits

0x22fc,	// (0x0006d60d) smil_text_list_pane_t1

0x9526,	// (0x00074837) aid_volume_smil_ParamLimits

0x9526,	// (0x00074837) aid_volume_smil

0xa8aa,	// (0x00075bbb) smil_volume_pane_g1

0xa8aa,	// (0x00075bbb) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007a5e6) smil_volume_pane_g

0x0b57,	// (0x0006be68) listscroll_cale_day_pane

0xadb9,	// (0x000760ca) bg_cale_pane

0xadd1,	// (0x000760e2) list_cale_pane

0xadf4,	// (0x00076105) scroll_pane_cp09

0xae05,	// (0x00076116) cale_bg_pane_g1

0xae0d,	// (0x0007611e) cale_bg_pane_g2

0xae15,	// (0x00076126) cale_bg_pane_g3

0xae1d,	// (0x0007612e) cale_bg_pane_g4

0xae25,	// (0x00076136) cale_bg_pane_g5

0xae2d,	// (0x0007613e) cale_bg_pane_g6

0xae35,	// (0x00076146) cale_bg_pane_g7

0xae3d,	// (0x0007614e) cale_bg_pane_g8

0xae45,	// (0x00076156) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007a5eb) cale_bg_pane_g

0x2348,	// (0x0006d659) list_cale_time_pane_ParamLimits

0x2348,	// (0x0006d659) list_cale_time_pane

0xae4d,	// (0x0007615e) list_cale_time_pane_g1_ParamLimits

0xae4d,	// (0x0007615e) list_cale_time_pane_g1

0xae59,	// (0x0007616a) list_cale_time_pane_g2_ParamLimits

0xae59,	// (0x0007616a) list_cale_time_pane_g2

0x235e,	// (0x0006d66f) list_cale_time_pane_g3_ParamLimits

0x235e,	// (0x0006d66f) list_cale_time_pane_g3

0x236c,	// (0x0006d67d) list_cale_time_pane_g4_ParamLimits

0x236c,	// (0x0006d67d) list_cale_time_pane_g4

0x237a,	// (0x0006d68b) list_cale_time_pane_g5_ParamLimits

0x237a,	// (0x0006d68b) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007a5fe) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007a5fe) list_cale_time_pane_g

0xae73,	// (0x00076184) list_cale_time_pane_t1_ParamLimits

0xae73,	// (0x00076184) list_cale_time_pane_t1

0xae9b,	// (0x000761ac) list_cale_time_pane_t2_ParamLimits

0xae9b,	// (0x000761ac) list_cale_time_pane_t2

0x26fc,	// (0x0006da0d) aid_blid_cardinal_pane

0x273a,	// (0x0006da4b) compass_pane_t4

0xaec3,	// (0x000761d4) list_cale_time_pane_t4_ParamLimits

0xaec3,	// (0x000761d4) list_cale_time_pane_t4

0x2748,	// (0x0006da59) compass_pane_t5

0x2756,	// (0x0006da67) compass_pane_t6

0x2764,	// (0x0006da75) compass_pane_t7

0xb347,	// (0x00076658) navi_pane_cc_t1

0xb532,	// (0x00076843) aid_phob_thumbnail_center_pane

0x2d44,	// (0x0006e055) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007a60b) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007a60b) list_cale_time_pane_t

0x9be5,	// (0x00074ef6) bg_popup_window_pane_cp02_ParamLimits

0x9be5,	// (0x00074ef6) bg_popup_window_pane_cp02

0xaeeb,	// (0x000761fc) heading_pane_cp01_ParamLimits

0xaeeb,	// (0x000761fc) heading_pane_cp01

0xaef7,	// (0x00076208) loc_req_pane_ParamLimits

0xaef7,	// (0x00076208) loc_req_pane

0xaf07,	// (0x00076218) loc_type_pane_ParamLimits

0xaf07,	// (0x00076218) loc_type_pane

0xaf19,	// (0x0007622a) loc_type_pane_t1_ParamLimits

0xaf19,	// (0x0007622a) loc_type_pane_t1

0xaf2b,	// (0x0007623c) loc_type_pane_t2_ParamLimits

0xaf2b,	// (0x0007623c) loc_type_pane_t2

0xaf3d,	// (0x0007624e) loc_type_pane_t3_ParamLimits

0xaf3d,	// (0x0007624e) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007a612) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007a612) loc_type_pane_t

0xaf4f,	// (0x00076260) list_loc_req_pane

0xaf59,	// (0x0007626a) scroll_pane_cp012

0x2388,	// (0x0006d699) list_single_loc_request_popup_menu_pane_ParamLimits

0x2388,	// (0x0006d699) list_single_loc_request_popup_menu_pane

0xaf64,	// (0x00076275) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf64,	// (0x00076275) list_single_loc_request_popup_menu_pane_g1

0xaf70,	// (0x00076281) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf70,	// (0x00076281) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007a619) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007a619) list_single_loc_request_popup_menu_pane_g

0xaf7c,	// (0x0007628d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf7c,	// (0x0007628d) list_single_loc_request_popup_menu_pane_t1

0xa784,	// (0x00075a95) bg_popup_window_pane_cp03_ParamLimits

0xa784,	// (0x00075a95) bg_popup_window_pane_cp03

0xaf92,	// (0x000762a3) heading_loc_req_pane_ParamLimits

0xaf92,	// (0x000762a3) heading_loc_req_pane

0x2395,	// (0x0006d6a6) popup_dyc_status_message_window_g1_ParamLimits

0x2395,	// (0x0006d6a6) popup_dyc_status_message_window_g1

0x23a9,	// (0x0006d6ba) popup_dyc_status_message_window_t1_ParamLimits

0x23a9,	// (0x0006d6ba) popup_dyc_status_message_window_t1

0x23be,	// (0x0006d6cf) popup_dyc_status_message_window_t2_ParamLimits

0x23be,	// (0x0006d6cf) popup_dyc_status_message_window_t2

0x23d3,	// (0x0006d6e4) popup_dyc_status_message_window_t3_ParamLimits

0x23d3,	// (0x0006d6e4) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007a61e) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007a61e) popup_dyc_status_message_window_t

0xa529,	// (0x0007583a) bg_heading_pane_cp01

0xaf9e,	// (0x000762af) heading_loc_req_pane_g1

0xafa6,	// (0x000762b7) heading_loc_req_pane_g2

0xafae,	// (0x000762bf) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007a625) heading_loc_req_pane_g

0xafb6,	// (0x000762c7) heading_loc_req_pane_t1

0xafc5,	// (0x000762d6) bg_popup_sub_pane_cp01_ParamLimits

0xafc5,	// (0x000762d6) bg_popup_sub_pane_cp01

0xafd3,	// (0x000762e4) popup_cale_events_window_g1_ParamLimits

0xafd3,	// (0x000762e4) popup_cale_events_window_g1

0xaff3,	// (0x00076304) popup_cale_events_window_g2_ParamLimits

0xaff3,	// (0x00076304) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007a659) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007a659) popup_cale_events_window_g

0xb013,	// (0x00076324) popup_cale_events_window_t1_ParamLimits

0xb013,	// (0x00076324) popup_cale_events_window_t1

0xb025,	// (0x00076336) popup_cale_events_window_t2_ParamLimits

0xb025,	// (0x00076336) popup_cale_events_window_t2

0xb063,	// (0x00076374) popup_cale_events_window_t3_ParamLimits

0xb063,	// (0x00076374) popup_cale_events_window_t3

0xb09d,	// (0x000763ae) popup_cale_events_window_t4_ParamLimits

0xb09d,	// (0x000763ae) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007a65e) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007a65e) popup_cale_events_window_t

0x24cc,	// (0x0006d7dd) call_type_pane

0x24dc,	// (0x0006d7ed) popup_call_status_window_g1

0x24f0,	// (0x0006d801) popup_call_status_window_g2

0x2504,	// (0x0006d815) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007a667) popup_call_status_window_g

0xb0d3,	// (0x000763e4) call_type_pane_g1

0xb0dc,	// (0x000763ed) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007a66e) call_type_pane_g

0xa529,	// (0x0007583a) bg_popup_sub_pane_cp02

0xb0e5,	// (0x000763f6) listscroll_popup_wml_pane

0xb0ed,	// (0x000763fe) list_wml_pane

0xb0f7,	// (0x00076408) scroll_pane_cp013

0xb102,	// (0x00076413) list_single_graphic_popup_wml_pane_ParamLimits

0xb102,	// (0x00076413) list_single_graphic_popup_wml_pane

0xa8aa,	// (0x00075bbb) list_single_graphic_popup_wml_pane_g1

0xb116,	// (0x00076427) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007a673) list_single_graphic_popup_wml_pane_g

0xb11e,	// (0x0007642f) list_single_graphic_popup_wml_pane_t1

0xb134,	// (0x00076445) aid_call_pane

0xa77c,	// (0x00075a8d) popup_clock_analogue_window_g1

0xa77c,	// (0x00075a8d) popup_clock_analogue_window_g2

0x9548,	// (0x00074859) popup_clock_analogue_window_g3

0x9548,	// (0x00074859) popup_clock_analogue_window_g4

0xa8aa,	// (0x00075bbb) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007a678) popup_clock_analogue_window_g

0x9550,	// (0x00074861) popup_clock_analogue_window_t1

0x955e,	// (0x0007486f) clock_digital_number_pane_ParamLimits

0x955e,	// (0x0007486f) clock_digital_number_pane

0x956a,	// (0x0007487b) clock_digital_number_pane_cp02_ParamLimits

0x956a,	// (0x0007487b) clock_digital_number_pane_cp02

0x9576,	// (0x00074887) clock_digital_number_pane_cp03_ParamLimits

0x9576,	// (0x00074887) clock_digital_number_pane_cp03

0x9582,	// (0x00074893) clock_digital_number_pane_cp04_ParamLimits

0x9582,	// (0x00074893) clock_digital_number_pane_cp04

0x958e,	// (0x0007489f) clock_digital_separator_pane_ParamLimits

0x958e,	// (0x0007489f) clock_digital_separator_pane

0x959a,	// (0x000748ab) popup_clock_digital_window_t1

0xa8aa,	// (0x00075bbb) clock_digital_number_pane_g1

0xa8aa,	// (0x00075bbb) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007a5e6) clock_digital_number_pane_g

0xa8aa,	// (0x00075bbb) clock_digital_separator_pane_g1

0xa8aa,	// (0x00075bbb) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007a5e6) clock_digital_separator_pane_g

0xa529,	// (0x0007583a) bg_popup_window_pane_cp04

0xb13c,	// (0x0007644d) heading_pane_cp03

0xb144,	// (0x00076455) listscroll_popup_gms_pane

0xb14c,	// (0x0007645d) grid_large_graphic_popup_pane

0xb156,	// (0x00076467) listscroll_popup_gms_pane_g1

0xb15e,	// (0x0007646f) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007a683) listscroll_popup_gms_pane_g

0xabd5,	// (0x00075ee6) scroll_pane_cp014

0x2513,	// (0x0006d824) cell_large_graphic_popup_pane_ParamLimits

0x2513,	// (0x0006d824) cell_large_graphic_popup_pane

0x252b,	// (0x0006d83c) cell_large_graphic_popup_pane_g1_ParamLimits

0x252b,	// (0x0006d83c) cell_large_graphic_popup_pane_g1

0xb166,	// (0x00076477) cell_large_graphic_popup_pane_g2_ParamLimits

0xb166,	// (0x00076477) cell_large_graphic_popup_pane_g2

0xb172,	// (0x00076483) cell_large_graphic_popup_pane_g3_ParamLimits

0xb172,	// (0x00076483) cell_large_graphic_popup_pane_g3

0xb17f,	// (0x00076490) cell_large_graphic_popup_pane_g4_ParamLimits

0xb17f,	// (0x00076490) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007a688) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007a688) cell_large_graphic_popup_pane_g

0xb18f,	// (0x000764a0) grid_highlight_pane_cp010

0xa8aa,	// (0x00075bbb) bg_popup_call_pane_g1

0xb199,	// (0x000764aa) list_single_graphic_popup_conf_pane_ParamLimits

0xb199,	// (0x000764aa) list_single_graphic_popup_conf_pane

0xb1ac,	// (0x000764bd) list_highlight_pane_cp01

0xb1b5,	// (0x000764c6) list_single_graphic_popup_conf_pane_g1

0xb1bd,	// (0x000764ce) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007a691) list_single_graphic_popup_conf_pane_g

0xb1c5,	// (0x000764d6) list_single_graphic_popup_conf_pane_t1

0xb1d3,	// (0x000764e4) linegrid_cams_pane_g1

0x2537,	// (0x0006d848) linegrid_cams_pane_g2

0xaa12,	// (0x00075d23) linegrid_cams_pane_g3

0xb1dc,	// (0x000764ed) linegrid_cams_pane_g4

0x2540,	// (0x0006d851) linegrid_cams_pane_g5

0x2549,	// (0x0006d85a) linegrid_cams_pane_g6

0xaa1b,	// (0x00075d2c) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007a696) linegrid_cams_pane_g

0xb1e5,	// (0x000764f6) popup_clock_analogue_window

0xb1e5,	// (0x000764f6) popup_clock_digital_window

0xa529,	// (0x0007583a) popup_phob_thumbnail_window

0xa8aa,	// (0x00075bbb) call_video_uplink_pane_g1

0xb1ee,	// (0x000764ff) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007a6a5) call_video_uplink_pane_g

0xb1f6,	// (0x00076507) video_uplink_pane

0xb1fe,	// (0x0007650f) mce_image_pane_g1

0x2554,	// (0x0006d865) mce_image_pane_g2

0x255c,	// (0x0006d86d) mce_image_pane_g3

0x2564,	// (0x0006d875) mce_image_pane_g4

0x256e,	// (0x0006d87f) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007a6aa) mce_image_pane_g

0xb208,	// (0x00076519) control_top_pane_stacon_cp01_ParamLimits

0xb208,	// (0x00076519) control_top_pane_stacon_cp01

0xb21c,	// (0x0007652d) uni_indicator_pane_stacon_cp01_ParamLimits

0xb21c,	// (0x0007652d) uni_indicator_pane_stacon_cp01

0xb22d,	// (0x0007653e) bg_popup_sub_pane_cp03

0x2576,	// (0x0006d887) chi_dic_find_pane

0x257e,	// (0x0006d88f) listscroll_chi_dic_pane

0x2587,	// (0x0006d898) main_pane_chidic_g1

0x259a,	// (0x0006d8ab) chi_dic_find_pane_t1

0xb237,	// (0x00076548) find_chidic_pane

0xb240,	// (0x00076551) chi_dic_list_pane_ParamLimits

0xb240,	// (0x00076551) chi_dic_list_pane

0xb251,	// (0x00076562) scroll_pane_cp020

0x25a8,	// (0x0006d8b9) find_chidic_pane_t1

0xa529,	// (0x0007583a) input_focus_pane_cp06

0x25b7,	// (0x0006d8c8) list_chi_dic_pane_ParamLimits

0x25b7,	// (0x0006d8c8) list_chi_dic_pane

0x25c9,	// (0x0006d8da) list_chi_dic_pane_t1_ParamLimits

0x25c9,	// (0x0006d8da) list_chi_dic_pane_t1

0xa529,	// (0x0007583a) list_highlight_pane_cp020

0xb259,	// (0x0007656a) bg_cale_heading_pane_g1

0x25dc,	// (0x0006d8ed) bg_cale_heading_pane_g2

0x25e4,	// (0x0006d8f5) bg_cale_heading_pane_g3

0x25ec,	// (0x0006d8fd) bg_cale_heading_pane_g4

0x25f6,	// (0x0006d907) bg_cale_heading_pane_g5

0x2600,	// (0x0006d911) bg_cale_heading_pane_g6

0x2608,	// (0x0006d919) bg_cale_heading_pane_g7

0x2610,	// (0x0006d921) bg_cale_heading_pane_g8

0x261a,	// (0x0006d92b) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007a6b5) bg_cale_heading_pane_g

0xb259,	// (0x0007656a) bg_cale_side_pane_g1

0x2624,	// (0x0006d935) bg_cale_side_pane_g2

0x262c,	// (0x0006d93d) bg_cale_side_pane_g3

0x2634,	// (0x0006d945) bg_cale_side_pane_g4

0x263c,	// (0x0006d94d) bg_cale_side_pane_g5

0x2644,	// (0x0006d955) bg_cale_side_pane_g6

0x264c,	// (0x0006d95d) bg_cale_side_pane_g7

0x2654,	// (0x0006d965) bg_cale_side_pane_g8

0x265c,	// (0x0006d96d) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007a6c8) bg_cale_side_pane_g

0x2664,	// (0x0006d975) popup_call_status_window_ParamLimits

0x2664,	// (0x0006d975) popup_call_status_window

0xb261,	// (0x00076572) stacon_top_pane

0xb269,	// (0x0007657a) status_pane_ParamLimits

0xb269,	// (0x0007657a) status_pane

0xb27e,	// (0x0007658f) status_small_pane

0xb286,	// (0x00076597) control_pane

0xa529,	// (0x0007583a) stacon_bottom_pane

0xb28e,	// (0x0007659f) list_single_mce_smart_pane_t1_ParamLimits

0xb28e,	// (0x0007659f) list_single_mce_smart_pane_t1

0xb2a1,	// (0x000765b2) list_single_mce_smart_pane_t2_ParamLimits

0xb2a1,	// (0x000765b2) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007a6db) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007a6db) list_single_mce_smart_pane_t

0x26ab,	// (0x0006d9bc) compass_pane

0x26b4,	// (0x0006d9c5) main_location2_pane_t1

0x26c6,	// (0x0006d9d7) main_location2_pane_t2

0x26d8,	// (0x0006d9e9) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007a6e0) main_location2_pane_t

0xb2c0,	// (0x000765d1) compass_pane_g1_ParamLimits

0xb2c0,	// (0x000765d1) compass_pane_g1

0x271c,	// (0x0006da2d) compass_pane_t1

0x272b,	// (0x0006da3c) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007a6e9) compass_pane_t

0x2772,	// (0x0006da83) text_secondary_cp61

0xb33e,	// (0x0007664f) navi_pane_cams_g5

0xb3ba,	// (0x000766cb) navi_pane_im_t1

0xb3c8,	// (0x000766d9) navi_pane_mp_g1_ParamLimits

0xb3c8,	// (0x000766d9) navi_pane_mp_g1

0xb3dc,	// (0x000766ed) navi_pane_mp_g2_ParamLimits

0xb3dc,	// (0x000766ed) navi_pane_mp_g2

0xb3e8,	// (0x000766f9) navi_pane_mp_g3_ParamLimits

0xb3e8,	// (0x000766f9) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007a6fd) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007a6fd) navi_pane_mp_g

0xb3f4,	// (0x00076705) navi_pane_mp_t1

0xb402,	// (0x00076713) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007a704) navi_pane_mp_t

0xb46d,	// (0x0007677e) navi_pane_vt_g1

0xb3f4,	// (0x00076705) navi_pane_vt_t1

0xb475,	// (0x00076786) navi_slider_pane

0xaa2c,	// (0x00075d3d) zooming_pane

0xb485,	// (0x00076796) navi_slider_pane_g1

0x95b7,	// (0x000748c8) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007a70b) navi_slider_pane_g

0xb4a9,	// (0x000767ba) aid_levels_zoom

0xb4b1,	// (0x000767c2) zooming_pane_g1

0xb4b9,	// (0x000767ca) zooming_pane_g2

0xb4b9,	// (0x000767ca) zooming_pane_g3

0x0002,

0xf409,	// (0x0007a71a) zooming_pane_g

0xb4cf,	// (0x000767e0) level_10_zoom

0xb4d8,	// (0x000767e9) level_11_zoom

0xb4e1,	// (0x000767f2) level_1_zoom

0xb4ea,	// (0x000767fb) level_2_zoom

0xb4f3,	// (0x00076804) level_3_zoom

0xb4fc,	// (0x0007680d) level_4_zoom

0xb505,	// (0x00076816) level_5_zoom

0xb50e,	// (0x0007681f) level_6_zoom

0xb517,	// (0x00076828) level_7_zoom

0xb520,	// (0x00076831) level_8_zoom

0xb529,	// (0x0007683a) level_9_zoom

0xb53a,	// (0x0007684b) popup_phob_thumbnail_window_g1

0xb542,	// (0x00076853) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007a721) popup_phob_thumbnail_window_g

0xc87f,	// (0x00077b90) level_1_location

0xc887,	// (0x00077b98) level_2_location

0xc88f,	// (0x00077ba0) level_3_location

0xc897,	// (0x00077ba8) level_4_location

0xaa2c,	// (0x00075d3d) level_5_location

0x27c3,	// (0x0006dad4) mce_icon_pane_g1

0x27cd,	// (0x0006dade) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007a726) mce_icon_pane_g

0x27d5,	// (0x0006dae6) main_mup_pane_g1_ParamLimits

0x27d5,	// (0x0006dae6) main_mup_pane_g1

0x27eb,	// (0x0006dafc) main_mup_pane_g2_ParamLimits

0x27eb,	// (0x0006dafc) main_mup_pane_g2

0x27fd,	// (0x0006db0e) main_mup_pane_g3_ParamLimits

0x27fd,	// (0x0006db0e) main_mup_pane_g3

0x280f,	// (0x0006db20) main_mup_pane_g4_ParamLimits

0x280f,	// (0x0006db20) main_mup_pane_g4

0x2827,	// (0x0006db38) main_mup_pane_g5_ParamLimits

0x2827,	// (0x0006db38) main_mup_pane_g5

0x2843,	// (0x0006db54) main_mup_pane_g6_ParamLimits

0x2843,	// (0x0006db54) main_mup_pane_g6

0x285b,	// (0x0006db6c) main_mup_pane_g7_ParamLimits

0x285b,	// (0x0006db6c) main_mup_pane_g7

0x2873,	// (0x0006db84) main_mup_pane_g8_ParamLimits

0x2873,	// (0x0006db84) main_mup_pane_g8

0x288b,	// (0x0006db9c) main_mup_pane_g9_ParamLimits

0x288b,	// (0x0006db9c) main_mup_pane_g9

0x28a5,	// (0x0006dbb6) main_mup_pane_g10_ParamLimits

0x28a5,	// (0x0006dbb6) main_mup_pane_g10

0x28bf,	// (0x0006dbd0) main_mup_pane_g11_ParamLimits

0x28bf,	// (0x0006dbd0) main_mup_pane_g11

0x28d3,	// (0x0006dbe4) main_mup_pane_g12_ParamLimits

0x28d3,	// (0x0006dbe4) main_mup_pane_g12

0x28e9,	// (0x0006dbfa) main_mup_pane_g13_ParamLimits

0x28e9,	// (0x0006dbfa) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007a72b) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007a72b) main_mup_pane_g

0x28fd,	// (0x0006dc0e) main_mup_pane_t1_ParamLimits

0x28fd,	// (0x0006dc0e) main_mup_pane_t1

0x2917,	// (0x0006dc28) main_mup_pane_t2_ParamLimits

0x2917,	// (0x0006dc28) main_mup_pane_t2

0x292f,	// (0x0006dc40) main_mup_pane_t3_ParamLimits

0x292f,	// (0x0006dc40) main_mup_pane_t3

0x2947,	// (0x0006dc58) main_mup_pane_t4_ParamLimits

0x2947,	// (0x0006dc58) main_mup_pane_t4

0x2965,	// (0x0006dc76) main_mup_pane_t5_ParamLimits

0x2965,	// (0x0006dc76) main_mup_pane_t5

0x297a,	// (0x0006dc8b) main_mup_pane_t6_ParamLimits

0x297a,	// (0x0006dc8b) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007a746) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007a746) main_mup_pane_t

0x298c,	// (0x0006dc9d) mup_progress_pane_ParamLimits

0x298c,	// (0x0006dc9d) mup_progress_pane

0x2998,	// (0x0006dca9) mup_visualizer_pane_ParamLimits

0x2998,	// (0x0006dca9) mup_visualizer_pane

0x29cc,	// (0x0006dcdd) mup_volume_pane_ParamLimits

0x29cc,	// (0x0006dcdd) mup_volume_pane

0xb54a,	// (0x0007685b) mup_visualizer_pane_g1_ParamLimits

0xb54a,	// (0x0007685b) mup_visualizer_pane_g1

0xb54a,	// (0x0007685b) mup_visualizer_pane_g2_ParamLimits

0xb54a,	// (0x0007685b) mup_visualizer_pane_g2

0xb2c0,	// (0x000765d1) mup_visualizer_pane_g3_ParamLimits

0xb2c0,	// (0x000765d1) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007a753) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007a753) mup_visualizer_pane_g

0xa8aa,	// (0x00075bbb) mup_volume_pane_g1

0xb560,	// (0x00076871) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007a75a) mup_volume_pane_g

0xa8aa,	// (0x00075bbb) mup_progress_pane_g1

0xb569,	// (0x0007687a) mup_progress_pane_g2

0xb572,	// (0x00076883) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007a75f) mup_progress_pane_g

0xa529,	// (0x0007583a) bg_popup_window_pane_cp05

0xb57b,	// (0x0007688c) heading_pane_cp02_ParamLimits

0xb57b,	// (0x0007688c) heading_pane_cp02

0xb595,	// (0x000768a6) list_popup_blid_pane

0xb59d,	// (0x000768ae) list_blid_sat_info_pane_ParamLimits

0xb59d,	// (0x000768ae) list_blid_sat_info_pane

0xb5b0,	// (0x000768c1) list_blid_sat_info_pane_g1

0xb5b8,	// (0x000768c9) list_blid_sat_info_pane_t1

0x2ae2,	// (0x0006ddf3) mup_equalizer_pane_ParamLimits

0x2ae2,	// (0x0006ddf3) mup_equalizer_pane

0x2afb,	// (0x0006de0c) mup_equalizer_pane_cp1_ParamLimits

0x2afb,	// (0x0006de0c) mup_equalizer_pane_cp1

0x2b18,	// (0x0006de29) mup_equalizer_pane_cp2_ParamLimits

0x2b18,	// (0x0006de29) mup_equalizer_pane_cp2

0x2b35,	// (0x0006de46) mup_equalizer_pane_cp3_ParamLimits

0x2b35,	// (0x0006de46) mup_equalizer_pane_cp3

0x2b56,	// (0x0006de67) mup_equalizer_pane_cp4_ParamLimits

0x2b56,	// (0x0006de67) mup_equalizer_pane_cp4

0x2b77,	// (0x0006de88) mup_equalizer_pane_cp5

0x2b8b,	// (0x0006de9c) mup_equalizer_pane_cp6

0x2b9f,	// (0x0006deb0) mup_equalizer_pane_cp7

0xc75d,	// (0x00077a6e) bg_popup_call_poc_act_pane_g9

0xc765,	// (0x00077a76) bg_popup_call_poc_act_pane_g10

0xc76d,	// (0x00077a7e) bg_popup_call_poc_act_pane_g11

0x000a,

0xa784,	// (0x00075a95) mup_scale_pane

0xa8aa,	// (0x00075bbb) mup_scale_pane_g1

0xb5c6,	// (0x000768d7) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007a77b) mup_scale_pane_g

0xb5ea,	// (0x000768fb) msg_data_pane

0xb5f2,	// (0x00076903) scroll_pane_cp017

0x2bc5,	// (0x0006ded6) bg_list_pane_cp04_ParamLimits

0x2bc5,	// (0x0006ded6) bg_list_pane_cp04

0xb5fa,	// (0x0007690b) msg_data_pane_g1

0x2bdd,	// (0x0006deee) msg_data_pane_g2

0x2be5,	// (0x0006def6) msg_data_pane_g3

0x2bed,	// (0x0006defe) msg_data_pane_g4

0x2bf5,	// (0x0006df06) msg_data_pane_g5

0x2bfd,	// (0x0006df0e) msg_data_pane_g6

0x2c05,	// (0x0006df16) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007a78a) msg_data_pane_g

0x2c0d,	// (0x0006df1e) msg_text_pane_ParamLimits

0x2c0d,	// (0x0006df1e) msg_text_pane

0x2c3c,	// (0x0006df4d) qrid_highlight_pane_cp011_ParamLimits

0x2c3c,	// (0x0006df4d) qrid_highlight_pane_cp011

0xa529,	// (0x0007583a) msg_body_pane

0xa529,	// (0x0007583a) msg_header_pane

0xb60b,	// (0x0007691c) input_focus_pane_cp07

0x9edb,	// (0x000751ec) msg_header_pane_t1_ParamLimits

0x9edb,	// (0x000751ec) msg_header_pane_t1

0x9eed,	// (0x000751fe) msg_header_pane_t2_ParamLimits

0x9eed,	// (0x000751fe) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007a79e) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007a79e) msg_header_pane_t

0xb620,	// (0x00076931) msg_body_pane_g1

0x9eff,	// (0x00075210) msg_body_pane_t1_ParamLimits

0x9eff,	// (0x00075210) msg_body_pane_t1

0x9f30,	// (0x00075241) msg_body_pane_t2_ParamLimits

0x9f30,	// (0x00075241) msg_body_pane_t2

0x9f42,	// (0x00075253) msg_body_pane_t3_ParamLimits

0x9f42,	// (0x00075253) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007a7a3) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007a7a3) msg_body_pane_t

0x2c9a,	// (0x0006dfab) main_viewer_pane_g1_ParamLimits

0x2c9a,	// (0x0006dfab) main_viewer_pane_g1

0x2ca8,	// (0x0006dfb9) main_viewer_pane_g2_ParamLimits

0x2ca8,	// (0x0006dfb9) main_viewer_pane_g2

0x2cb6,	// (0x0006dfc7) main_viewer_pane_g3_ParamLimits

0x2cb6,	// (0x0006dfc7) main_viewer_pane_g3

0x2cc5,	// (0x0006dfd6) main_viewer_pane_g4_ParamLimits

0x2cc5,	// (0x0006dfd6) main_viewer_pane_g4

0x95e1,	// (0x000748f2) main_viewer_pane_g5_ParamLimits

0x95e1,	// (0x000748f2) main_viewer_pane_g5

0x95e1,	// (0x000748f2) main_viewer_pane_g7_ParamLimits

0x95e1,	// (0x000748f2) main_viewer_pane_g7

0xaf64,	// (0x00076275) main_viewer_pane_g8_ParamLimits

0xaf64,	// (0x00076275) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007a7b3) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007a7b3) main_viewer_pane_g

0xb628,	// (0x00076939) viewer_content_pane_ParamLimits

0xb628,	// (0x00076939) viewer_content_pane

0x2d01,	// (0x0006e012) main_postcard_pane_g1_ParamLimits

0x2d01,	// (0x0006e012) main_postcard_pane_g1

0x2d17,	// (0x0006e028) main_postcard_pane_g2_ParamLimits

0x2d17,	// (0x0006e028) main_postcard_pane_g2

0x2d2d,	// (0x0006e03e) main_postcard_pane_g3_ParamLimits

0x2d2d,	// (0x0006e03e) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007a7c4) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007a7c4) main_postcard_pane_g

0x2d44,	// (0x0006e055) main_postcard_pane_g4

0xc97f,	// (0x00077c90) smil_status_volume_pane_g2

0x2d87,	// (0x0006e098) postcard_pane_ParamLimits

0x2d87,	// (0x0006e098) postcard_pane

0xb636,	// (0x00076947) postcard_pane_g1_ParamLimits

0xb636,	// (0x00076947) postcard_pane_g1

0x2dc9,	// (0x0006e0da) postcard_pane_g2_ParamLimits

0x2dc9,	// (0x0006e0da) postcard_pane_g2

0x2dd5,	// (0x0006e0e6) postcard_pane_g3_ParamLimits

0x2dd5,	// (0x0006e0e6) postcard_pane_g3

0xb644,	// (0x00076955) postcard_pane_g4_ParamLimits

0xb644,	// (0x00076955) postcard_pane_g4

0x2de1,	// (0x0006e0f2) postcard_pane_g5_ParamLimits

0x2de1,	// (0x0006e0f2) postcard_pane_g5

0x2df6,	// (0x0006e107) postcard_pane_g6_ParamLimits

0x2df6,	// (0x0006e107) postcard_pane_g6

0xb636,	// (0x00076947) postcard_pane_g7_ParamLimits

0xb636,	// (0x00076947) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007a7d1) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007a7d1) postcard_pane_g

0x2e0a,	// (0x0006e11b) main_mp2_pane_g1_ParamLimits

0x2e0a,	// (0x0006e11b) main_mp2_pane_g1

0x2e16,	// (0x0006e127) main_mp2_pane_g2_ParamLimits

0x2e16,	// (0x0006e127) main_mp2_pane_g2

0x2e22,	// (0x0006e133) main_mp2_pane_g3_ParamLimits

0x2e22,	// (0x0006e133) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007a7e0) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007a7e0) main_mp2_pane_g

0x2e2e,	// (0x0006e13f) main_mp2_pane_t1_ParamLimits

0x2e2e,	// (0x0006e13f) main_mp2_pane_t1

0x2e43,	// (0x0006e154) main_mp2_pane_t2_ParamLimits

0x2e43,	// (0x0006e154) main_mp2_pane_t2

0x2e55,	// (0x0006e166) main_mp2_pane_t3_ParamLimits

0x2e55,	// (0x0006e166) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007a7e7) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007a7e7) main_mp2_pane_t

0xb652,	// (0x00076963) pec_content_pane_ParamLimits

0xb652,	// (0x00076963) pec_content_pane

0xabd5,	// (0x00075ee6) scroll_pane_cp015

0xb664,	// (0x00076975) pec_attribute_pane_ParamLimits

0xb664,	// (0x00076975) pec_attribute_pane

0x2e67,	// (0x0006e178) pec_content_pane_g1_ParamLimits

0x2e67,	// (0x0006e178) pec_content_pane_g1

0xb674,	// (0x00076985) pec_content_pane_t1_ParamLimits

0xb674,	// (0x00076985) pec_content_pane_t1

0xb686,	// (0x00076997) pec_content_pane_t2_ParamLimits

0xb686,	// (0x00076997) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007a7ee) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007a7ee) pec_content_pane_t

0x2e73,	// (0x0006e184) list_single_graphic_pane_cp01_ParamLimits

0x2e73,	// (0x0006e184) list_single_graphic_pane_cp01

0xa784,	// (0x00075a95) bg_popup_sub_pane_cp04

0xb698,	// (0x000769a9) popup_mup_playback_window_g1

0xb6a4,	// (0x000769b5) popup_mup_playback_window_t1

0xb6b9,	// (0x000769ca) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007a7f3) popup_mup_playback_window_t

0xb6f0,	// (0x00076a01) main_image_pane_g1_ParamLimits

0xb6f0,	// (0x00076a01) main_image_pane_g1

0xb733,	// (0x00076a44) scroll_pane_cp018_ParamLimits

0xb733,	// (0x00076a44) scroll_pane_cp018

0xb74b,	// (0x00076a5c) scroll_pane_cp016_ParamLimits

0xb74b,	// (0x00076a5c) scroll_pane_cp016

0x2f41,	// (0x0006e252) smil2_image_pane_ParamLimits

0x2f41,	// (0x0006e252) smil2_image_pane

0x2f71,	// (0x0006e282) smil2_root_pane_ParamLimits

0x2f71,	// (0x0006e282) smil2_root_pane

0x2fa9,	// (0x0006e2ba) smil2_text_pane_ParamLimits

0x2fa9,	// (0x0006e2ba) smil2_text_pane

0xa529,	// (0x0007583a) bg_list_pane_cp06

0xb787,	// (0x00076a98) grid_radio_pane

0xa529,	// (0x0007583a) bg_popup_window_pane_cp06

0xb78f,	// (0x00076aa0) main_fmradio_pane_t1

0xb13c,	// (0x0007644d) heading_pane_cp04

0xb79d,	// (0x00076aae) main_fmradio_pane_t2

0xc7b5,	// (0x00077ac6) popup_cale_lunar_info_window_g1

0xb7ab,	// (0x00076abc) main_fmradio_pane_t3

0xc7bd,	// (0x00077ace) popup_cale_lunar_info_window_g2

0xb7b9,	// (0x00076aca) main_fmradio_pane_t4

0x0001,

0xb7c7,	// (0x00076ad8) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0007a8e1) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007a808) main_fmradio_pane_t

0xb7d5,	// (0x00076ae6) wait_bar_pane_cp03

0xb7dd,	// (0x00076aee) cell_fmradio_pane_ParamLimits

0xb7dd,	// (0x00076aee) cell_fmradio_pane

0xb636,	// (0x00076947) cell_fmradio_pane_g1_ParamLimits

0xb636,	// (0x00076947) cell_fmradio_pane_g1

0xa529,	// (0x0007583a) grid_highlight_pane_cp011

0xb7f0,	// (0x00076b01) poc_content_pane_ParamLimits

0xb7f0,	// (0x00076b01) poc_content_pane

0xb802,	// (0x00076b13) scroll_pane_cp019

0x3029,	// (0x0006e33a) popup_call_poc_act_window_ParamLimits

0x3029,	// (0x0006e33a) popup_call_poc_act_window

0x304d,	// (0x0006e35e) popup_call_poc_inact_window_ParamLimits

0x304d,	// (0x0006e35e) popup_call_poc_inact_window

0xf594,	// (0x0007a8a5) bg_popup_call_poc_act_pane_g

0xc775,	// (0x00077a86) bg_popup_call_poc_inact_pane_g1

0xc77d,	// (0x00077a8e) bg_popup_call_poc_inact_pane_g2

0xb80a,	// (0x00076b1b) popup_call_poc_act_window_g2

0xc785,	// (0x00077a96) bg_popup_call_poc_inact_pane_g3

0xc705,	// (0x00077a16) bg_popup_call_poc_inact_pane_g4

0xc78d,	// (0x00077a9e) bg_popup_call_poc_inact_pane_g5

0xb812,	// (0x00076b23) popup_call_poc_act_window_t1_ParamLimits

0xb812,	// (0x00076b23) popup_call_poc_act_window_t1

0xb83a,	// (0x00076b4b) popup_call_poc_act_window_t2_ParamLimits

0xb83a,	// (0x00076b4b) popup_call_poc_act_window_t2

0xb862,	// (0x00076b73) popup_call_poc_act_window_t3_ParamLimits

0xb862,	// (0x00076b73) popup_call_poc_act_window_t3

0xb88a,	// (0x00076b9b) popup_call_poc_act_window_t4_ParamLimits

0xb88a,	// (0x00076b9b) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007a813) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007a813) popup_call_poc_act_window_t

0xc795,	// (0x00077aa6) bg_popup_call_poc_inact_pane_g6

0xc79d,	// (0x00077aae) bg_popup_call_poc_inact_pane_g7

0xc7a5,	// (0x00077ab6) bg_popup_call_poc_inact_pane_g8

0xb89c,	// (0x00076bad) popup_call_poc_inact_window_g2

0xc7ad,	// (0x00077abe) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0007a8bc) bg_popup_call_poc_inact_pane_g

0xb8a4,	// (0x00076bb5) popup_call_poc_inact_window_t1_ParamLimits

0xb8a4,	// (0x00076bb5) popup_call_poc_inact_window_t1

0xb8b9,	// (0x00076bca) popup_call_poc_inact_window_t2_ParamLimits

0xb8b9,	// (0x00076bca) popup_call_poc_inact_window_t2

0xb8ce,	// (0x00076bdf) popup_call_poc_inact_window_t3_ParamLimits

0xb8ce,	// (0x00076bdf) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007a81c) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007a81c) popup_call_poc_inact_window_t

0xc8f2,	// (0x00077c03) context_pane_ParamLimits

0x3887,	// (0x0006eb98) signal_pane_ParamLimits

0xaa2c,	// (0x00075d3d) main_call2_pane

0x962c,	// (0x0007493d) popup_phob_thumbnail2_window_ParamLimits

0x962c,	// (0x0007493d) popup_phob_thumbnail2_window

0x95c9,	// (0x000748da) aid_hotspot_pointer_arrow_pane

0x95d1,	// (0x000748e2) aid_hotspot_pointer_hand_pane

0x3397,	// (0x0006e6a8) phob_pre_status_pane_g5

0x1131,	// (0x0006c442) cams_zoom_pane_ParamLimits

0x1140,	// (0x0006c451) image_vga_pane_ParamLimits

0x115a,	// (0x0006c46b) main_camera_pane_g1_ParamLimits

0x116c,	// (0x0006c47d) main_camera_pane_g2_ParamLimits

0x117c,	// (0x0006c48d) main_camera_pane_g3_ParamLimits

0x118c,	// (0x0006c49d) main_camera_pane_g4_ParamLimits

0x119c,	// (0x0006c4ad) main_camera_pane_g5_ParamLimits

0x11ac,	// (0x0006c4bd) main_camera_pane_g6_ParamLimits

0x11bc,	// (0x0006c4cd) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007a51b) main_camera_pane_g_ParamLimits

0x11cc,	// (0x0006c4dd) main_camera_pane_t1_ParamLimits

0x11e2,	// (0x0006c4f3) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007a52c) main_camera_pane_t_ParamLimits

0xa784,	// (0x00075a95) bg_popup_preview_window_pane_cp01_ParamLimits

0xa784,	// (0x00075a95) bg_popup_preview_window_pane_cp01

0xb8e3,	// (0x00076bf4) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8e3,	// (0x00076bf4) popup_phob_thumbnail2_window_g1

0xa529,	// (0x0007583a) call2_cli_visual_pane

0x3081,	// (0x0006e392) popup_call2_audio_conf_window_ParamLimits

0x3081,	// (0x0006e392) popup_call2_audio_conf_window

0x30a1,	// (0x0006e3b2) popup_call2_audio_first_window_ParamLimits

0x30a1,	// (0x0006e3b2) popup_call2_audio_first_window

0x3137,	// (0x0006e448) popup_call2_audio_in_window_ParamLimits

0x3137,	// (0x0006e448) popup_call2_audio_in_window

0x317f,	// (0x0006e490) popup_call2_audio_out_window_ParamLimits

0x317f,	// (0x0006e490) popup_call2_audio_out_window

0x31e9,	// (0x0006e4fa) popup_call2_audio_second_window_ParamLimits

0x31e9,	// (0x0006e4fa) popup_call2_audio_second_window

0x324f,	// (0x0006e560) popup_call2_audio_wait_window_ParamLimits

0x324f,	// (0x0006e560) popup_call2_audio_wait_window

0xa529,	// (0x0007583a) bg_popup_call2_act_pane_cp03

0xa766,	// (0x00075a77) list_conf_pane_cp

0xb8ef,	// (0x00076c00) popup_call2_audio_conf_window_t1

0xb8fd,	// (0x00076c0e) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8fd,	// (0x00076c0e) list_single_graphic_popup_conf2_pane

0xb1ac,	// (0x000764bd) list_highlight_pane_cp04

0xb910,	// (0x00076c21) list_single_graphic_popup_conf2_pane_g1

0xb1bd,	// (0x000764ce) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007a823) list_single_graphic_popup_conf2_pane_g

0xb91a,	// (0x00076c2b) list_single_graphic_popup_conf2_pane_t1

0xb928,	// (0x00076c39) bg_popup_call2_act_pane_cp01_ParamLimits

0xb928,	// (0x00076c39) bg_popup_call2_act_pane_cp01

0xb9b2,	// (0x00076cc3) call_type_pane_cp05_ParamLimits

0xb9b2,	// (0x00076cc3) call_type_pane_cp05

0xba06,	// (0x00076d17) popup_call2_audio_second_window_g1_ParamLimits

0xba06,	// (0x00076d17) popup_call2_audio_second_window_g1

0xba5a,	// (0x00076d6b) popup_call2_audio_second_window_g2_ParamLimits

0xba5a,	// (0x00076d6b) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007a828) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007a828) popup_call2_audio_second_window_g

0xbabf,	// (0x00076dd0) popup_call2_audio_second_window_t1_ParamLimits

0xbabf,	// (0x00076dd0) popup_call2_audio_second_window_t1

0xbb7a,	// (0x00076e8b) popup_call2_audio_second_window_t2_ParamLimits

0xbb7a,	// (0x00076e8b) popup_call2_audio_second_window_t2

0xbbcd,	// (0x00076ede) popup_call2_audio_second_window_t3_ParamLimits

0xbbcd,	// (0x00076ede) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007a82f) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007a82f) popup_call2_audio_second_window_t

0xa529,	// (0x0007583a) bg_popup_call2_in_pane_cp02

0xa533,	// (0x00075844) call_type_pane_cp04

0xa53b,	// (0x0007584c) popup_call2_audio_wait_window_g1

0xa543,	// (0x00075854) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007a40a) popup_call2_audio_wait_window_g

0xa54b,	// (0x0007585c) popup_call2_audio_wait_window_t3

0xbcc0,	// (0x00076fd1) bg_popup_call2_act_pane_ParamLimits

0xbcc0,	// (0x00076fd1) bg_popup_call2_act_pane

0xbd80,	// (0x00077091) call_type_pane_cp03_ParamLimits

0xbd80,	// (0x00077091) call_type_pane_cp03

0xbde4,	// (0x000770f5) popup_call2_audio_first_window_g1_ParamLimits

0xbde4,	// (0x000770f5) popup_call2_audio_first_window_g1

0xbe54,	// (0x00077165) popup_call2_audio_first_window_g2_ParamLimits

0xbe54,	// (0x00077165) popup_call2_audio_first_window_g2

0xb54a,	// (0x0007685b) popup_call2_audio_first_window_g3_ParamLimits

0xb54a,	// (0x0007685b) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007a838) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007a838) popup_call2_audio_first_window_g

0xbf32,	// (0x00077243) popup_call2_audio_first_window_t1_ParamLimits

0xbf32,	// (0x00077243) popup_call2_audio_first_window_t1

0xc035,	// (0x00077346) popup_call2_audio_first_window_t4_ParamLimits

0xc035,	// (0x00077346) popup_call2_audio_first_window_t4

0xc118,	// (0x00077429) popup_call2_audio_first_window_t5_ParamLimits

0xc118,	// (0x00077429) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007a843) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007a843) popup_call2_audio_first_window_t

0xa77c,	// (0x00075a8d) bg_popup_call2_act_pane_g1

0xc7c5,	// (0x00077ad6) popup_cale_lunar_info_window_t1

0xc7d3,	// (0x00077ae4) popup_cale_lunar_info_window_t2

0xc7e1,	// (0x00077af2) popup_cale_lunar_info_window_t3

0xa529,	// (0x0007583a) bg_popup_call2_bubble_pane

0xc219,	// (0x0007752a) bg_popup_call2_in_pane_cp01_ParamLimits

0xc219,	// (0x0007752a) bg_popup_call2_in_pane_cp01

0x9c6a,	// (0x00074f7b) call_type_pane_cp02

0xc261,	// (0x00077572) popup_call2_audio_out_window_g1_ParamLimits

0xc261,	// (0x00077572) popup_call2_audio_out_window_g1

0xc28d,	// (0x0007759e) popup_call2_audio_out_window_g2_ParamLimits

0xc28d,	// (0x0007759e) popup_call2_audio_out_window_g2

0xc2b5,	// (0x000775c6) popup_call2_audio_out_window_g3_ParamLimits

0xc2b5,	// (0x000775c6) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007a84c) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007a84c) popup_call2_audio_out_window_g

0xc2f0,	// (0x00077601) popup_call2_audio_out_window_t1_ParamLimits

0xc2f0,	// (0x00077601) popup_call2_audio_out_window_t1

0xc34f,	// (0x00077660) popup_call2_audio_out_window_t2_ParamLimits

0xc34f,	// (0x00077660) popup_call2_audio_out_window_t2

0xc3a3,	// (0x000776b4) popup_call2_audio_out_window_t3_ParamLimits

0xc3a3,	// (0x000776b4) popup_call2_audio_out_window_t3

0xc3b9,	// (0x000776ca) popup_call2_audio_out_window_t4_ParamLimits

0xc3b9,	// (0x000776ca) popup_call2_audio_out_window_t4

0xc3cf,	// (0x000776e0) popup_call2_audio_out_window_t5_ParamLimits

0xc3cf,	// (0x000776e0) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007a855) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007a855) popup_call2_audio_out_window_t

0xc433,	// (0x00077744) bg_popup_call2_in_pane_ParamLimits

0xc433,	// (0x00077744) bg_popup_call2_in_pane

0xc48f,	// (0x000777a0) popup_call2_audio_in_window_g1_ParamLimits

0xc48f,	// (0x000777a0) popup_call2_audio_in_window_g1

0xc4c7,	// (0x000777d8) popup_call2_audio_in_window_g2_ParamLimits

0xc4c7,	// (0x000777d8) popup_call2_audio_in_window_g2

0xc4ff,	// (0x00077810) popup_call2_audio_in_window_g3_ParamLimits

0xc4ff,	// (0x00077810) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007a862) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007a862) popup_call2_audio_in_window_g

0xc557,	// (0x00077868) popup_call2_audio_in_window_t1_ParamLimits

0xc557,	// (0x00077868) popup_call2_audio_in_window_t1

0xc5d7,	// (0x000778e8) popup_call2_audio_in_window_t2_ParamLimits

0xc5d7,	// (0x000778e8) popup_call2_audio_in_window_t2

0xc657,	// (0x00077968) popup_call2_audio_in_window_t3_ParamLimits

0xc657,	// (0x00077968) popup_call2_audio_in_window_t3

0xc671,	// (0x00077982) popup_call2_audio_in_window_t4_ParamLimits

0xc671,	// (0x00077982) popup_call2_audio_in_window_t4

0xc683,	// (0x00077994) popup_call2_audio_in_window_t5_ParamLimits

0xc683,	// (0x00077994) popup_call2_audio_in_window_t5

0xc698,	// (0x000779a9) popup_call2_audio_in_window_t6_ParamLimits

0xc698,	// (0x000779a9) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007a86b) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007a86b) popup_call2_audio_in_window_t

0xa77c,	// (0x00075a8d) bg_popup_call2_in_pane_g1

0xc7ef,	// (0x00077b00) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0007a8e6) popup_cale_lunar_info_window_t

0xa784,	// (0x00075a95) bg_popup_call2_rect_pane_ParamLimits

0xa784,	// (0x00075a95) bg_popup_call2_rect_pane

0xa529,	// (0x0007583a) call2_cli_visual_graphic_pane

0xa529,	// (0x0007583a) call2_cli_visual_text_pane

0x9653,	// (0x00074964) smil_status_volume_pane_g3

0x0002,

0xa8aa,	// (0x00075bbb) call2_cli_visual_graphic_pane_g1

0xa8aa,	// (0x00075bbb) call2_cli_visual_graphic_pane_g2

0xa8aa,	// (0x00075bbb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007a878) call2_cli_visual_graphic_pane_g

0xc6ad,	// (0x000779be) bg_popup_call2_rect_pane_g1

0xa948,	// (0x00075c59) bg_popup_call2_rect_pane_g2

0xc6b5,	// (0x000779c6) bg_popup_call2_rect_pane_g3

0xc6bd,	// (0x000779ce) bg_popup_call2_rect_pane_g4

0xc6c5,	// (0x000779d6) bg_popup_call2_rect_pane_g5

0xc6cd,	// (0x000779de) bg_popup_call2_rect_pane_g6

0xc6d5,	// (0x000779e6) bg_popup_call2_rect_pane_g7

0xc6dd,	// (0x000779ee) bg_popup_call2_rect_pane_g8

0xc6e5,	// (0x000779f6) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007a87f) bg_popup_call2_rect_pane_g

0xc6ed,	// (0x000779fe) bg_popup_call2_bubble_pane_g1

0xc6f5,	// (0x00077a06) bg_popup_call2_bubble_pane_g2

0xc6fd,	// (0x00077a0e) bg_popup_call2_bubble_pane_g3

0xc705,	// (0x00077a16) bg_popup_call2_bubble_pane_g4

0xc70d,	// (0x00077a1e) bg_popup_call2_bubble_pane_g5

0xc715,	// (0x00077a26) bg_popup_call2_bubble_pane_g6

0xc71d,	// (0x00077a2e) bg_popup_call2_bubble_pane_g7

0xc725,	// (0x00077a36) bg_popup_call2_bubble_pane_g8

0xc72d,	// (0x00077a3e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007a892) bg_popup_call2_bubble_pane_g

0x0b69,	// (0x0006be7a) aid_cale_week_size_cell_pane

0x11f8,	// (0x0006c509) aid_cams_cif_uncrop_pane_ParamLimits

0x11f8,	// (0x0006c509) aid_cams_cif_uncrop_pane

0x13ad,	// (0x0006c6be) aid_cams_size_cell_ParamLimits

0x13ad,	// (0x0006c6be) aid_cams_size_cell

0x13c1,	// (0x0006c6d2) grid_cams_pane_ParamLimits

0x13db,	// (0x0006c6ec) linegrid_cams_pane_ParamLimits

0x15d7,	// (0x0006c8e8) call_video_pane_t1

0x15f5,	// (0x0006c906) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007a57f) call_video_pane_t

0x1a1b,	// (0x0006cd2c) aid_cale_month_size_cell_pane_ParamLimits

0x1a1b,	// (0x0006cd2c) aid_cale_month_size_cell_pane

0xf61e,	// (0x0007a92f) smil_status_volume_pane_g

0x9660,	// (0x00074971) volume_smil_pane_ParamLimits

0x93a3,	// (0x000746b4) aid_popup2_width_pane

0x0adf,	// (0x0006bdf0) cell_qdial_pane_g4_ParamLimits

0x0adf,	// (0x0006bdf0) cell_qdial_pane_g4

0x26fc,	// (0x0006da0d) aid_blid_cardinal_pane_ParamLimits

0x2708,	// (0x0006da19) aid_blid_destination_pane_ParamLimits

0x2708,	// (0x0006da19) aid_blid_destination_pane

0xa784,	// (0x00075a95) bg_popup_call_poc_act_pane_ParamLimits

0xa784,	// (0x00075a95) bg_popup_call_poc_act_pane

0xa784,	// (0x00075a95) bg_popup_call_poc_inact_pane_ParamLimits

0xa784,	// (0x00075a95) bg_popup_call_poc_inact_pane

0xc735,	// (0x00077a46) bg_popup_call_poc_act_pane_g1

0xc73d,	// (0x00077a4e) bg_popup_call_poc_act_pane_g2

0xc745,	// (0x00077a56) bg_popup_call_poc_act_pane_g3

0xc705,	// (0x00077a16) bg_popup_call_poc_act_pane_g4

0xc70d,	// (0x00077a1e) bg_popup_call_poc_act_pane_g5

0xc74d,	// (0x00077a5e) bg_popup_call_poc_act_pane_g6

0xc71d,	// (0x00077a2e) bg_popup_call_poc_act_pane_g7

0xc755,	// (0x00077a66) bg_popup_call_poc_act_pane_g8

0xa529,	// (0x0007583a) main_usb_pane

0x9607,	// (0x00074918) popup_cale_lunar_info_window

0x18c1,	// (0x0006cbd2) im_reading_pane_t1_ParamLimits

0xab2d,	// (0x00075e3e) list_im_pane_ParamLimits

0xab3e,	// (0x00075e4f) scroll_pane_cp07_ParamLimits

0xa529,	// (0x0007583a) grid_highlight_pane_cp012

0xa784,	// (0x00075a95) mup_scale_pane_ParamLimits

0xb636,	// (0x00076947) main_usb_pane_g1_ParamLimits

0xb636,	// (0x00076947) main_usb_pane_g1

0x32ac,	// (0x0006e5bd) main_usb_pane_g2_ParamLimits

0x32ac,	// (0x0006e5bd) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0007a8cf) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0007a8cf) main_usb_pane_g

0x32c2,	// (0x0006e5d3) main_usb_pane_t1_ParamLimits

0x32c2,	// (0x0006e5d3) main_usb_pane_t1

0x32d4,	// (0x0006e5e5) main_usb_pane_t2_ParamLimits

0x32d4,	// (0x0006e5e5) main_usb_pane_t2

0x32e6,	// (0x0006e5f7) main_usb_pane_t3_ParamLimits

0x32e6,	// (0x0006e5f7) main_usb_pane_t3

0x32f8,	// (0x0006e609) main_usb_pane_t4_ParamLimits

0x32f8,	// (0x0006e609) main_usb_pane_t4

0x330a,	// (0x0006e61b) main_usb_pane_t5_ParamLimits

0x330a,	// (0x0006e61b) main_usb_pane_t5

0x331c,	// (0x0006e62d) main_usb_pane_t6_ParamLimits

0x331c,	// (0x0006e62d) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0007a8d4) main_usb_pane_t_ParamLimits

0x26ab,	// (0x0006d9bc) aid_text_placing

0x26b4,	// (0x0006d9c5) main_location2_pane_t1_ParamLimits

0x26c6,	// (0x0006d9d7) main_location2_pane_t2_ParamLimits

0x26d8,	// (0x0006d9e9) main_location2_pane_t3_ParamLimits

0x26ea,	// (0x0006d9fb) main_location2_pane_t4_ParamLimits

0x26ea,	// (0x0006d9fb) main_location2_pane_t4

0xf3cf,	// (0x0007a6e0) main_location2_pane_t_ParamLimits

0xa7c0,	// (0x00075ad1) find_pinb_pane_g2_ParamLimits

0xa7c0,	// (0x00075ad1) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007a430) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007a430) find_pinb_pane_g

0xa7cc,	// (0x00075add) find_pinb_pane_t1_ParamLimits

0xa7de,	// (0x00075aef) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0007a435) find_pinb_pane_t_ParamLimits

0xa529,	// (0x0007583a) main_call3_pane

0x1f02,	// (0x0006d213) cale_month_day_heading_pane_t1_ParamLimits

0x1f44,	// (0x0006d255) cale_month_day_heading_pane_t2_ParamLimits

0x1f79,	// (0x0006d28a) cale_month_day_heading_pane_t3_ParamLimits

0x1fae,	// (0x0006d2bf) cale_month_day_heading_pane_t4_ParamLimits

0x1feb,	// (0x0006d2fc) cale_month_day_heading_pane_t5_ParamLimits

0x2030,	// (0x0006d341) cale_month_day_heading_pane_t6_ParamLimits

0x2075,	// (0x0006d386) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007a5b7) cale_month_day_heading_pane_t_ParamLimits

0xada6,	// (0x000760b7) smil_status_volume_pane

0x2da5,	// (0x0006e0b6) postcard_address_pane_ParamLimits

0x2da5,	// (0x0006e0b6) postcard_address_pane

0x2db7,	// (0x0006e0c8) postcard_message_pane_ParamLimits

0x2db7,	// (0x0006e0c8) postcard_message_pane

0x3289,	// (0x0006e59a) call2_cli_visual_pane_t1_ParamLimits

0x3289,	// (0x0006e59a) call2_cli_visual_pane_t1

0x3ab6,	// (0x0006edc7) postcard_message_pane_t1_ParamLimits

0x3ab6,	// (0x0006edc7) postcard_message_pane_t1

0x3a9f,	// (0x0006edb0) postcard_address_pane_t1_ParamLimits

0x3a9f,	// (0x0006edb0) postcard_address_pane_t1

0x3a8b,	// (0x0006ed9c) popup_call3_audio_in_window_ParamLimits

0x3a8b,	// (0x0006ed9c) popup_call3_audio_in_window

0x3916,	// (0x0006ec27) bg_popup_call3_in_pane_ParamLimits

0x3916,	// (0x0006ec27) bg_popup_call3_in_pane

0x398c,	// (0x0006ec9d) popup_call3_audio_in_window_g1_ParamLimits

0x398c,	// (0x0006ec9d) popup_call3_audio_in_window_g1

0x39ac,	// (0x0006ecbd) popup_call3_audio_in_window_g2_ParamLimits

0x39ac,	// (0x0006ecbd) popup_call3_audio_in_window_g2

0x39cc,	// (0x0006ecdd) popup_call3_audio_in_window_g3_ParamLimits

0x39cc,	// (0x0006ecdd) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0007a936) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0007a936) popup_call3_audio_in_window_g

0x39fd,	// (0x0006ed0e) popup_call3_audio_in_window_t1_ParamLimits

0x39fd,	// (0x0006ed0e) popup_call3_audio_in_window_t1

0x3a3b,	// (0x0006ed4c) popup_call3_audio_in_window_t2_ParamLimits

0x3a3b,	// (0x0006ed4c) popup_call3_audio_in_window_t2

0x3a79,	// (0x0006ed8a) popup_call3_audio_in_window_t3_ParamLimits

0x3a79,	// (0x0006ed8a) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0007a93f) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0007a93f) popup_call3_audio_in_window_t

0xaa2c,	// (0x00075d3d) bg_popup_call3_rect_pane

0xc6ad,	// (0x000779be) bg_popup_call3_rect_pane_g1

0xa948,	// (0x00075c59) bg_popup_call3_rect_pane_g2

0xc6b5,	// (0x000779c6) bg_popup_call3_rect_pane_g3

0xc6bd,	// (0x000779ce) bg_popup_call3_rect_pane_g4

0xc6c5,	// (0x000779d6) bg_popup_call3_rect_pane_g5

0xc6cd,	// (0x000779de) bg_popup_call3_rect_pane_g6

0xc6d5,	// (0x000779e6) bg_popup_call3_rect_pane_g7

0x29e2,	// (0x0006dcf3) mup_visualizer_osc_pane

0xb558,	// (0x00076869) mup_visualizer_spec_pane

0x3946,	// (0x0006ec57) call3_video_qcif_pane_ParamLimits

0x3946,	// (0x0006ec57) call3_video_qcif_pane

0x3959,	// (0x0006ec6a) call3_video_qcif_uncrop_pane_ParamLimits

0x3959,	// (0x0006ec6a) call3_video_qcif_uncrop_pane

0x3967,	// (0x0006ec78) call3_video_subqcif_pane_ParamLimits

0x3967,	// (0x0006ec78) call3_video_subqcif_pane

0x397b,	// (0x0006ec8c) call3_video_subqcif_uncrop_pane_ParamLimits

0x397b,	// (0x0006ec8c) call3_video_subqcif_uncrop_pane

0x39ec,	// (0x0006ecfd) popup_call3_audio_in_window_g4_ParamLimits

0x39ec,	// (0x0006ecfd) popup_call3_audio_in_window_g4

0x3905,	// (0x0006ec16) mup_spec_half_pane

0x390e,	// (0x0006ec1f) mup_spec_half_pane_cp

0xc952,	// (0x00077c63) mup_osc_middle_pane

0xc95b,	// (0x00077c6c) mup_visualizer_osc_pane_g1

0x38e5,	// (0x0006ebf6) mup_spec_bar_pane_ParamLimits

0x38e5,	// (0x0006ebf6) mup_spec_bar_pane

0xc93f,	// (0x00077c50) mup_spec_bar_pane_g1

0xc949,	// (0x00077c5a) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0007a92a) mup_spec_bar_pane_g

0x0b69,	// (0x0006be7a) aid_cale_week_size_cell_pane_ParamLimits

0x0b83,	// (0x0006be94) bg_cale_heading_pane_ParamLimits

0xa985,	// (0x00075c96) bg_cale_pane_cp01_ParamLimits

0x0b9b,	// (0x0006beac) cale_week_corner_pane_ParamLimits

0x0bba,	// (0x0006becb) cale_week_day_heading_pane_ParamLimits

0x0bd7,	// (0x0006bee8) cale_week_scroll_pane_g1_ParamLimits

0x0bea,	// (0x0006befb) cale_week_scroll_pane_g2_ParamLimits

0x0c02,	// (0x0006bf13) cale_week_scroll_pane_g3_ParamLimits

0x0c1a,	// (0x0006bf2b) cale_week_scroll_pane_g4_ParamLimits

0x0c32,	// (0x0006bf43) cale_week_scroll_pane_g5_ParamLimits

0x0c52,	// (0x0006bf63) cale_week_scroll_pane_g6_ParamLimits

0x0c72,	// (0x0006bf83) cale_week_scroll_pane_g7_ParamLimits

0x0c92,	// (0x0006bfa3) cale_week_scroll_pane_g8_ParamLimits

0x0cb6,	// (0x0006bfc7) cale_week_scroll_pane_g9_ParamLimits

0x0cce,	// (0x0006bfdf) cale_week_scroll_pane_g10_ParamLimits

0x0ce6,	// (0x0006bff7) cale_week_scroll_pane_g11_ParamLimits

0x0cfe,	// (0x0006c00f) cale_week_scroll_pane_g12_ParamLimits

0x0d16,	// (0x0006c027) cale_week_scroll_pane_g13_ParamLimits

0x0d16,	// (0x0006c027) cale_week_scroll_pane_g14_ParamLimits

0x0d16,	// (0x0006c027) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0007a4c1) cale_week_scroll_pane_g_ParamLimits

0x0d52,	// (0x0006c063) cale_week_time_pane_ParamLimits

0x0d76,	// (0x0006c087) grid_cale_week_pane_ParamLimits

0xa9a2,	// (0x00075cb3) listscroll_cale_week_pane_t1

0xa9b4,	// (0x00075cc5) scroll_pane_cp08_ParamLimits

0x1a7b,	// (0x0006cd8c) cale_month_corner_pane_ParamLimits

0xad7c,	// (0x0007608d) cale_month_pane_t1

0x1e95,	// (0x0006d1a6) cale_month_week_pane_ParamLimits

0x24dc,	// (0x0006d7ed) popup_call_status_window_g1_ParamLimits

0x24f0,	// (0x0006d801) popup_call_status_window_g2_ParamLimits

0x2504,	// (0x0006d815) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007a667) popup_call_status_window_g_ParamLimits

0xb12c,	// (0x0007643d) aid_call2_pane

0x2c52,	// (0x0006df63) msg_header_pane_g1

0x2da5,	// (0x0006e0b6) postcard_address2_pane_ParamLimits

0x2da5,	// (0x0006e0b6) postcard_address2_pane

0x2db7,	// (0x0006e0c8) postcard_message2_pane_ParamLimits

0x2db7,	// (0x0006e0c8) postcard_message2_pane

0x3895,	// (0x0006eba6) message2_row_pane_ParamLimits

0x3895,	// (0x0006eba6) message2_row_pane

0x38b2,	// (0x0006ebc3) address2_row_pane_ParamLimits

0x38b2,	// (0x0006ebc3) address2_row_pane

0xc90d,	// (0x00077c1e) postcard_message2_row_pane_g1

0xc915,	// (0x00077c26) postcard_message2_row_pane_t1

0xc90d,	// (0x00077c1e) address2_row_pane_g1

0xc915,	// (0x00077c26) address2_row_pane_t1

0x10b0,	// (0x0006c3c1) aid_size_cell_vorec

0xa529,	// (0x0007583a) main_rss_pane

0x38c5,	// (0x0006ebd6) rss_list_single_pane_ParamLimits

0x38c5,	// (0x0006ebd6) rss_list_single_pane

0xc923,	// (0x00077c34) rss_list_single_pane_t1

0xc931,	// (0x00077c42) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0007a925) rss_list_single_pane_t

0xa529,	// (0x0007583a) main_camera2_pane

0xa529,	// (0x0007583a) main_video2_pane

0x3b2f,	// (0x0006ee40) cams_zoom_pane_cp2_ParamLimits

0x3b2f,	// (0x0006ee40) cams_zoom_pane_cp2

0x3b4f,	// (0x0006ee60) image2_vga_pane_ParamLimits

0x3b4f,	// (0x0006ee60) image2_vga_pane

0x3ba0,	// (0x0006eeb1) main_camera2_pane_g1_ParamLimits

0x3ba0,	// (0x0006eeb1) main_camera2_pane_g1

0x3bc0,	// (0x0006eed1) main_camera2_pane_g2_ParamLimits

0x3bc0,	// (0x0006eed1) main_camera2_pane_g2

0x3be0,	// (0x0006eef1) main_camera2_pane_g3_ParamLimits

0x3be0,	// (0x0006eef1) main_camera2_pane_g3

0x3c00,	// (0x0006ef11) main_camera2_pane_g4_ParamLimits

0x3c00,	// (0x0006ef11) main_camera2_pane_g4

0x3c20,	// (0x0006ef31) main_camera2_pane_g5_ParamLimits

0x3c20,	// (0x0006ef31) main_camera2_pane_g5

0x3c40,	// (0x0006ef51) main_camera2_pane_g6_ParamLimits

0x3c40,	// (0x0006ef51) main_camera2_pane_g6

0x3c60,	// (0x0006ef71) main_camera2_pane_g7_ParamLimits

0x3c60,	// (0x0006ef71) main_camera2_pane_g7

0x3c80,	// (0x0006ef91) main_camera2_pane_g8_ParamLimits

0x3c80,	// (0x0006ef91) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0007a946) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0007a946) main_camera2_pane_g

0x3cc0,	// (0x0006efd1) main_camera2_pane_t1_ParamLimits

0x3cc0,	// (0x0006efd1) main_camera2_pane_t1

0x3cf5,	// (0x0006f006) main_camera2_pane_t2_ParamLimits

0x3cf5,	// (0x0006f006) main_camera2_pane_t2

0x3d1b,	// (0x0006f02c) main_camera2_pane_t3_ParamLimits

0x3d1b,	// (0x0006f02c) main_camera2_pane_t3

0x3d79,	// (0x0006f08a) main_camera2_pane_t4_ParamLimits

0x3d79,	// (0x0006f08a) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0007a959) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0007a959) main_camera2_pane_t

0x3e0b,	// (0x0006f11c) cams_zoom_pane_cp4_ParamLimits

0x3e0b,	// (0x0006f11c) cams_zoom_pane_cp4

0x3e21,	// (0x0006f132) image2_cif_pane_ParamLimits

0x3e21,	// (0x0006f132) image2_cif_pane

0x3e4c,	// (0x0006f15d) image2_subqcif_pane_ParamLimits

0x3e4c,	// (0x0006f15d) image2_subqcif_pane

0x3e66,	// (0x0006f177) main_video2_pane_g1_ParamLimits

0x3e66,	// (0x0006f177) main_video2_pane_g1

0x3e80,	// (0x0006f191) main_video2_pane_g2_ParamLimits

0x3e80,	// (0x0006f191) main_video2_pane_g2

0x3e96,	// (0x0006f1a7) main_video2_pane_g3_ParamLimits

0x3e96,	// (0x0006f1a7) main_video2_pane_g3

0x3eac,	// (0x0006f1bd) main_video2_pane_g4_ParamLimits

0x3eac,	// (0x0006f1bd) main_video2_pane_g4

0x3ec2,	// (0x0006f1d3) main_video2_pane_g5_ParamLimits

0x3ec2,	// (0x0006f1d3) main_video2_pane_g5

0x3ed8,	// (0x0006f1e9) main_video2_pane_g6_ParamLimits

0x3ed8,	// (0x0006f1e9) main_video2_pane_g6

0x0005,

0xf657,	// (0x0007a968) main_video2_pane_g_ParamLimits

0xf657,	// (0x0007a968) main_video2_pane_g

0x3ef2,	// (0x0006f203) main_video2_pane_t1_ParamLimits

0x3ef2,	// (0x0006f203) main_video2_pane_t1

0x3f16,	// (0x0006f227) main_video2_pane_t2_ParamLimits

0x3f16,	// (0x0006f227) main_video2_pane_t2

0x3f64,	// (0x0006f275) main_video2_pane_t3_ParamLimits

0x3f64,	// (0x0006f275) main_video2_pane_t3

0x0002,

0xf664,	// (0x0007a975) main_video2_pane_t_ParamLimits

0xf664,	// (0x0007a975) main_video2_pane_t

0x33d7,	// (0x0006e6e8) call_muted_g2

0x0001,

0xf606,	// (0x0007a917) call_muted_g

0xa529,	// (0x0007583a) main_mup2_pane

0x3fac,	// (0x0006f2bd) main_mup2_pane_g1_ParamLimits

0x3fac,	// (0x0006f2bd) main_mup2_pane_g1

0x3fb8,	// (0x0006f2c9) main_mup2_pane_g2_ParamLimits

0x3fb8,	// (0x0006f2c9) main_mup2_pane_g2

0x96ce,	// (0x000749df) main_mup_pane_g13_cp1

0x96d6,	// (0x000749e7) mup_volume_pane_cp1

0x3fd4,	// (0x0006f2e5) main_mup2_pane_g4_ParamLimits

0x3fd4,	// (0x0006f2e5) main_mup2_pane_g4

0x3fe6,	// (0x0006f2f7) main_mup2_pane_g5_ParamLimits

0x3fe6,	// (0x0006f2f7) main_mup2_pane_g5

0x3ff8,	// (0x0006f309) main_mup2_pane_g6_ParamLimits

0x3ff8,	// (0x0006f309) main_mup2_pane_g6

0x400a,	// (0x0006f31b) main_mup2_pane_g7_ParamLimits

0x400a,	// (0x0006f31b) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0007a97c) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0007a97c) main_mup2_pane_g

0x4022,	// (0x0006f333) main_mup2_pane_t1_ParamLimits

0x4022,	// (0x0006f333) main_mup2_pane_t1

0x4038,	// (0x0006f349) main_mup2_pane_t2_ParamLimits

0x4038,	// (0x0006f349) main_mup2_pane_t2

0x404e,	// (0x0006f35f) main_mup2_pane_t3_ParamLimits

0x404e,	// (0x0006f35f) main_mup2_pane_t3

0x4064,	// (0x0006f375) main_mup2_pane_t4_ParamLimits

0x4064,	// (0x0006f375) main_mup2_pane_t4

0x407c,	// (0x0006f38d) main_mup2_pane_t5_ParamLimits

0x407c,	// (0x0006f38d) main_mup2_pane_t5

0x4094,	// (0x0006f3a5) main_mup2_pane_t6_ParamLimits

0x4094,	// (0x0006f3a5) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0007a98b) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0007a98b) main_mup2_pane_t

0x40c4,	// (0x0006f3d5) mup2_visualizer_pane_ParamLimits

0x40c4,	// (0x0006f3d5) mup2_visualizer_pane

0x40f2,	// (0x0006f403) mup_progress_pane_cp_ParamLimits

0x40f2,	// (0x0006f403) mup_progress_pane_cp

0x96b9,	// (0x000749ca) mup_volume_pane_cp_ParamLimits

0x96b9,	// (0x000749ca) mup_volume_pane_cp

0x4106,	// (0x0006f417) mup2_visualizer_pane_g1_ParamLimits

0x4106,	// (0x0006f417) mup2_visualizer_pane_g1

0xc992,	// (0x00077ca3) mup2_visualizer_pane_g2_ParamLimits

0xc992,	// (0x00077ca3) mup2_visualizer_pane_g2

0x411d,	// (0x0006f42e) mup2_visualizer_pane_g3_ParamLimits

0x411d,	// (0x0006f42e) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0007a998) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0007a998) mup2_visualizer_pane_g

0xb77f,	// (0x00076a90) aid_size_cell_fmradio

0x3589,	// (0x0006e89a) aid_height_parent_landcape

0xabbc,	// (0x00075ecd) wml_content_pane_cp

0xabc4,	// (0x00075ed5) wml_tabs_pane

0xabcd,	// (0x00075ede) popup_wml_miniature_window

0xabd5,	// (0x00075ee6) scroll_pane_cp021

0xabe9,	// (0x00075efa) wml_content_pane_comp8

0xa529,	// (0x0007583a) bg_popup_sub_pane_cp05

0xc9b0,	// (0x00077cc1) popup_wml_miniature_window_g1

0xc9b8,	// (0x00077cc9) wml_miniature_view_pane

0x4129,	// (0x0006f43a) aid_size_wml_view

0x4131,	// (0x0006f442) wml_miniature_view_pane_g1

0x413a,	// (0x0006f44b) wml_miniature_view_pane_g2

0x4143,	// (0x0006f454) wml_miniature_view_pane_g3

0x414b,	// (0x0006f45c) wml_miniature_view_pane_g4

0x4153,	// (0x0006f464) wml_miniature_view_pane_g5

0x415b,	// (0x0006f46c) wml_miniature_view_pane_g6

0x4163,	// (0x0006f474) wml_miniature_view_pane_g7

0x416b,	// (0x0006f47c) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0007a99f) wml_miniature_view_pane_g

0xc9c0,	// (0x00077cd1) background_graphic_ParamLimits

0xc9c0,	// (0x00077cd1) background_graphic

0xc9cc,	// (0x00077cdd) wml_tabs_2_pane

0xc9d5,	// (0x00077ce6) wml_tabs_3_pane_ParamLimits

0xc9d5,	// (0x00077ce6) wml_tabs_3_pane

0xc9e7,	// (0x00077cf8) wml_tabs_4_pane_ParamLimits

0xc9e7,	// (0x00077cf8) wml_tabs_4_pane

0xc9fd,	// (0x00077d0e) wml_tabs_5_pane_ParamLimits

0xc9fd,	// (0x00077d0e) wml_tabs_5_pane

0xca17,	// (0x00077d28) wml_tabs_pane_g2_ParamLimits

0xca17,	// (0x00077d28) wml_tabs_pane_g2

0xca2b,	// (0x00077d3c) wml_tabs_pane_g3_ParamLimits

0xca2b,	// (0x00077d3c) wml_tabs_pane_g3

0x4173,	// (0x0006f484) wml_tabs_2_active_pane_ParamLimits

0x4173,	// (0x0006f484) wml_tabs_2_active_pane

0x4187,	// (0x0006f498) wml_tabs_2_passive_pane_ParamLimits

0x4187,	// (0x0006f498) wml_tabs_2_passive_pane

0x419b,	// (0x0006f4ac) wml_tabs_3_active_pane_cp_ParamLimits

0x419b,	// (0x0006f4ac) wml_tabs_3_active_pane_cp

0x41b0,	// (0x0006f4c1) wml_tabs_3_passive_pane_ParamLimits

0x41b0,	// (0x0006f4c1) wml_tabs_3_passive_pane

0x41c3,	// (0x0006f4d4) wml_tabs_3_passive_pane_cp_ParamLimits

0x41c3,	// (0x0006f4d4) wml_tabs_3_passive_pane_cp

0x41da,	// (0x0006f4eb) tabs_4_active_pane

0x41e2,	// (0x0006f4f3) tabs_4_passive_pane

0x41ec,	// (0x0006f4fd) tabs_4_passive_pane_cp

0x41f4,	// (0x0006f505) tabs_4_passive_pane_cp2

0x32a4,	// (0x0006e5b5) aid_height_text

0x29b4,	// (0x0006dcc5) mup_volume_cont_pane_ParamLimits

0x29b4,	// (0x0006dcc5) mup_volume_cont_pane

0x0780,	// (0x0006ba91) aid_size_cell_pinb

0x078a,	// (0x0006ba9b) aid_size_list_pinb

0x40de,	// (0x0006f3ef) mup2_volume_cont_pane_ParamLimits

0x40de,	// (0x0006f3ef) mup2_volume_cont_pane

0x96a5,	// (0x000749b6) mup2_volume_cont_pane_g1_ParamLimits

0x96a5,	// (0x000749b6) mup2_volume_cont_pane_g1

0x0442,	// (0x0006b753) aid_size_cell_touch_ParamLimits

0x0442,	// (0x0006b753) aid_size_cell_touch

0x066f,	// (0x0006b980) touch_pane_ParamLimits

0x066f,	// (0x0006b980) touch_pane

0x9417,	// (0x00074728) main_rss2_pane

0xca48,	// (0x00077d59) listscroll_rss2_pane

0xca51,	// (0x00077d62) rss2_navigation_pane

0xca59,	// (0x00077d6a) list_rss2_pane

0xb251,	// (0x00076562) scroll_pane_cp22

0xca61,	// (0x00077d72) rss2_navigation_pane_g1

0xca6a,	// (0x00077d7b) rss2_navigation_pane_g2

0xca72,	// (0x00077d83) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0007a9b0) rss2_navigation_pane_g

0xca7a,	// (0x00077d8b) rss2_navigation_pane_t1

0x41fe,	// (0x0006f50f) rss2_list_single_pane_ParamLimits

0x41fe,	// (0x0006f50f) rss2_list_single_pane

0xca88,	// (0x00077d99) rss2_list_single_pane_t2

0xca96,	// (0x00077da7) rss2_list_single_pane_t3_ParamLimits

0xca96,	// (0x00077da7) rss2_list_single_pane_t3

0xcab3,	// (0x00077dc4) rss2_list_single_pane_t4

0x22e7,	// (0x0006d5f8) smil_status_pane_g1

0x9409,	// (0x0007471a) main_image2_pane_ParamLimits

0x9409,	// (0x0007471a) main_image2_pane

0x3ca0,	// (0x0006efb1) main_camera2_pane_g9_ParamLimits

0x3ca0,	// (0x0006efb1) main_camera2_pane_g9

0x3dce,	// (0x0006f0df) main_camera2_pane_t5_ParamLimits

0x3dce,	// (0x0006f0df) main_camera2_pane_t5

0x9675,	// (0x00074986) main_camera2_pane_t6_ParamLimits

0x9675,	// (0x00074986) main_camera2_pane_t6

0x4214,	// (0x0006f525) main_image2_pane_g1_ParamLimits

0x4214,	// (0x0006f525) main_image2_pane_g1

0x2fdf,	// (0x0006e2f0) smil2_video_pane_ParamLimits

0x2fdf,	// (0x0006e2f0) smil2_video_pane

0x93bf,	// (0x000746d0) aid_zoom_text_primary_cp

0x93ff,	// (0x00074710) popup_preview_fixed_window

0xab25,	// (0x00075e36) im_reading_pane_g1

0x3b17,	// (0x0006ee28) cams2_bc_adjust_pane_cp_ParamLimits

0x3b17,	// (0x0006ee28) cams2_bc_adjust_pane_cp

0x3dfd,	// (0x0006f10e) cams2_bc_adjust_pane_ParamLimits

0x3dfd,	// (0x0006f10e) cams2_bc_adjust_pane

0xd64c,	// (0x0007895d) cams2_bc_adjust_pane_g1

0x96de,	// (0x000749ef) cams2_slider_pane

0x96e7,	// (0x000749f8) cams2_slider_pane_g1

0x96f0,	// (0x00074a01) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0007a9b7) cams2_slider_pane_g

0x0872,	// (0x0006bb83) calc_display_pane_ParamLimits

0x089a,	// (0x0006bbab) calc_paper_pane_ParamLimits

0x08bd,	// (0x0006bbce) grid_calc_pane_ParamLimits

0x959a,	// (0x000748ab) popup_clock_digital_window_t1_ParamLimits

0xb71c,	// (0x00076a2d) main_image_pane_t1

0x0854,	// (0x0006bb65) aid_size_cell_calc_ParamLimits

0x0854,	// (0x0006bb65) aid_size_cell_calc

0x35e1,	// (0x0006e8f2) popup_blid_sat_info2_window_ParamLimits

0x35e1,	// (0x0006e8f2) popup_blid_sat_info2_window

0xcac9,	// (0x00077dda) aid_size_cell_blid

0xcad1,	// (0x00077de2) bg_popup_window_pane_cp07

0xcaf4,	// (0x00077e05) grid_popup_blid_pane

0xcafe,	// (0x00077e0f) heading_pane_cp05_ParamLimits

0xcafe,	// (0x00077e0f) heading_pane_cp05

0xcbc8,	// (0x00077ed9) cell_popup_blid_pane_ParamLimits

0xcbc8,	// (0x00077ed9) cell_popup_blid_pane

0xcbec,	// (0x00077efd) cell_popup_blid_pane_g1

0xcbf4,	// (0x00077f05) cell_popup_blid_pane_t1

0x40ae,	// (0x0006f3bf) mup2_indicator_pane_ParamLimits

0x40ae,	// (0x0006f3bf) mup2_indicator_pane

0xaa2c,	// (0x00075d3d) mup2_visualizer_osc_pane

0xc99e,	// (0x00077caf) mup2_visualizer_spec_pane_ParamLimits

0xc99e,	// (0x00077caf) mup2_visualizer_spec_pane

0x422a,	// (0x0006f53b) mup2_spec_half_pane

0x4233,	// (0x0006f544) mup2_spec_half_pane_cp

0x423b,	// (0x0006f54c) mup2_spec_bar_pane_ParamLimits

0x423b,	// (0x0006f54c) mup2_spec_bar_pane

0xc93f,	// (0x00077c50) mup2_spec_bar_pane_g1

0xc949,	// (0x00077c5a) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0007a92a) mup2_spec_bar_pane_g

0x425b,	// (0x0006f56c) mup2_osc_middle_pane

0xc95b,	// (0x00077c6c) mup2_visualizer_osc_pane_g1

0x9441,	// (0x00074752) popup_number_entry_window_t1_ParamLimits

0x9454,	// (0x00074765) popup_number_entry_window_t2_ParamLimits

0x9466,	// (0x00074777) popup_number_entry_window_t3_ParamLimits

0x06c1,	// (0x0006b9d2) popup_number_entry_window_t5_ParamLimits

0x06c1,	// (0x0006b9d2) popup_number_entry_window_t5

0xf0ca,	// (0x0007a3db) popup_number_entry_window_t_ParamLimits

0x9bd2,	// (0x00074ee3) text_title_cp2_ParamLimits

0x95d9,	// (0x000748ea) aid_hotspot_pointer_text2_pane

0x95f3,	// (0x00074904) main_viewer_pane_g9_ParamLimits

0x95f3,	// (0x00074904) main_viewer_pane_g9

0xad7c,	// (0x0007608d) cale_month_pane_t1_ParamLimits

0xadb9,	// (0x000760ca) bg_cale_pane_ParamLimits

0xadd1,	// (0x000760e2) list_cale_pane_ParamLimits

0xade2,	// (0x000760f3) listscroll_cale_day_pane_t1

0xadf4,	// (0x00076105) scroll_pane_cp09_ParamLimits

0x29ea,	// (0x0006dcfb) main_mup_eq_pane_t1_ParamLimits

0x29ea,	// (0x0006dcfb) main_mup_eq_pane_t1

0x2a04,	// (0x0006dd15) main_mup_eq_pane_t2_ParamLimits

0x2a04,	// (0x0006dd15) main_mup_eq_pane_t2

0x2a1e,	// (0x0006dd2f) main_mup_eq_pane_t3_ParamLimits

0x2a1e,	// (0x0006dd2f) main_mup_eq_pane_t3

0x2a3a,	// (0x0006dd4b) main_mup_eq_pane_t4_ParamLimits

0x2a3a,	// (0x0006dd4b) main_mup_eq_pane_t4

0x2a56,	// (0x0006dd67) main_mup_eq_pane_t5_ParamLimits

0x2a56,	// (0x0006dd67) main_mup_eq_pane_t5

0x2a72,	// (0x0006dd83) main_mup_eq_pane_t6_ParamLimits

0x2a72,	// (0x0006dd83) main_mup_eq_pane_t6

0x2a86,	// (0x0006dd97) main_mup_eq_pane_t7_ParamLimits

0x2a86,	// (0x0006dd97) main_mup_eq_pane_t7

0x2a9a,	// (0x0006ddab) main_mup_eq_pane_t8_ParamLimits

0x2a9a,	// (0x0006ddab) main_mup_eq_pane_t8

0x2aae,	// (0x0006ddbf) main_mup_eq_pane_t9_ParamLimits

0x2aae,	// (0x0006ddbf) main_mup_eq_pane_t9

0x2ac8,	// (0x0006ddd9) main_mup_eq_pane_t10_ParamLimits

0x2ac8,	// (0x0006ddd9) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007a766) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007a766) main_mup_eq_pane_t

0x2b77,	// (0x0006de88) mup_equalizer_pane_cp5_ParamLimits

0x2b8b,	// (0x0006de9c) mup_equalizer_pane_cp6_ParamLimits

0x2b9f,	// (0x0006deb0) mup_equalizer_pane_cp7_ParamLimits

0x9417,	// (0x00074728) main_gallery_pane

0xc964,	// (0x00077c75) smil2_volume_pane

0xc96c,	// (0x00077c7d) smil_status_volume_pane_g1_ParamLimits

0xc97f,	// (0x00077c90) smil_status_volume_pane_g2_ParamLimits

0x9653,	// (0x00074964) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0007a92f) smil_status_volume_pane_g_ParamLimits

0xcad1,	// (0x00077de2) bg_popup_window_pane_cp07_ParamLimits

0xcadf,	// (0x00077df0) blid_firmament_pane

0x4264,	// (0x0006f575) aid_size_cell_gallery_ParamLimits

0x4264,	// (0x0006f575) aid_size_cell_gallery

0x427a,	// (0x0006f58b) grid_gallery_pane_ParamLimits

0x427a,	// (0x0006f58b) grid_gallery_pane

0x4293,	// (0x0006f5a4) cell_gallery_pane_ParamLimits

0x4293,	// (0x0006f5a4) cell_gallery_pane

0xcc02,	// (0x00077f13) bg_cell_gallery_focus_pane_ParamLimits

0xcc02,	// (0x00077f13) bg_cell_gallery_focus_pane

0xcc14,	// (0x00077f25) cell_gallery_pane_g1_ParamLimits

0xcc14,	// (0x00077f25) cell_gallery_pane_g1

0x42dc,	// (0x0006f5ed) cell_gallery_pane_g2_ParamLimits

0x42dc,	// (0x0006f5ed) cell_gallery_pane_g2

0x42e9,	// (0x0006f5fa) cell_gallery_pane_g3_ParamLimits

0x42e9,	// (0x0006f5fa) cell_gallery_pane_g3

0xcc20,	// (0x00077f31) cell_gallery_pane_g4_ParamLimits

0xcc20,	// (0x00077f31) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0007a9dd) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0007a9dd) cell_gallery_pane_g

0xcc2c,	// (0x00077f3d) bg_cell_gallery_focus_pane_g1

0xcc34,	// (0x00077f45) bg_cell_gallery_focus_pane_g2

0xcc3c,	// (0x00077f4d) bg_cell_gallery_focus_pane_g3

0xcc44,	// (0x00077f55) bg_cell_gallery_focus_pane_g4

0xcc4c,	// (0x00077f5d) bg_cell_gallery_focus_pane_g5

0xcc54,	// (0x00077f65) bg_cell_gallery_focus_pane_g6

0xcc5c,	// (0x00077f6d) bg_cell_gallery_focus_pane_g7

0xcc64,	// (0x00077f75) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0007a9e6) bg_cell_gallery_focus_pane_g

0xcc6c,	// (0x00077f7d) aid_firma_cardinal

0xcc80,	// (0x00077f91) blid_firmament_pane_t1

0xcc97,	// (0x00077fa8) blid_firmament_pane_t2

0xccae,	// (0x00077fbf) blid_firmament_pane_t3

0xccc5,	// (0x00077fd6) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0007a9f7) blid_firmament_pane_t

0xccdc,	// (0x00077fed) blid_sat_info_pane

0xccec,	// (0x00077ffd) blid_sat_info_pane_g1

0xccec,	// (0x00077ffd) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0007aa00) blid_sat_info_pane_g

0xccf6,	// (0x00078007) blid_sat_info_pane_t1

0xcd04,	// (0x00078015) smil2_volume_content_pane

0xcd0d,	// (0x0007801e) smil2_volume_pane_g1

0xcd15,	// (0x00078026) smil2_volume_content_pane_g1

0xcd1e,	// (0x0007802f) smil2_volume_content_pane_g2

0xcd27,	// (0x00078038) smil2_volume_content_pane_g3

0xcd30,	// (0x00078041) smil2_volume_content_pane_g4

0xcd39,	// (0x0007804a) smil2_volume_content_pane_g5

0xcd42,	// (0x00078053) smil2_volume_content_pane_g6

0xcd4b,	// (0x0007805c) smil2_volume_content_pane_g7

0xcd54,	// (0x00078065) smil2_volume_content_pane_g8

0xcd5d,	// (0x0007806e) smil2_volume_content_pane_g9

0xcd66,	// (0x00078077) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0007aa05) smil2_volume_content_pane_g

0x0e2a,	// (0x0006c13b) cale_week_day_heading_pane_t1_ParamLimits

0x0e54,	// (0x0006c165) cale_week_day_heading_pane_t2_ParamLimits

0x0e83,	// (0x0006c194) cale_week_day_heading_pane_t3_ParamLimits

0x0eb2,	// (0x0006c1c3) cale_week_day_heading_pane_t4_ParamLimits

0x0ee1,	// (0x0006c1f2) cale_week_day_heading_pane_t5_ParamLimits

0x0f18,	// (0x0006c229) cale_week_day_heading_pane_t6_ParamLimits

0x0f4f,	// (0x0006c260) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007a4e2) cale_week_day_heading_pane_t_ParamLimits

0xa9d1,	// (0x00075ce2) bg_cale_side_pane_ParamLimits

0x0f79,	// (0x0006c28a) cale_week_time_pane_t1_ParamLimits

0x0f93,	// (0x0006c2a4) cale_week_time_pane_t2_ParamLimits

0x0fad,	// (0x0006c2be) cale_week_time_pane_t3_ParamLimits

0x0fc7,	// (0x0006c2d8) cale_week_time_pane_t4_ParamLimits

0x0fe1,	// (0x0006c2f2) cale_week_time_pane_t5_ParamLimits

0x0ffb,	// (0x0006c30c) cale_week_time_pane_t6_ParamLimits

0x1015,	// (0x0006c326) cale_week_time_pane_t7_ParamLimits

0x102f,	// (0x0006c340) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007a4f1) cale_week_time_pane_t_ParamLimits

0x104f,	// (0x0006c360) cell_cale_week_pane_g2_ParamLimits

0xa9d1,	// (0x00075ce2) bg_cale_side_pane_cp01_ParamLimits

0x20c2,	// (0x0006d3d3) cale_month_week_pane_t1_ParamLimits

0x20db,	// (0x0006d3ec) cale_month_week_pane_t2_ParamLimits

0x20f4,	// (0x0006d405) cale_month_week_pane_t3_ParamLimits

0x210d,	// (0x0006d41e) cale_month_week_pane_t4_ParamLimits

0x2126,	// (0x0006d437) cale_month_week_pane_t5_ParamLimits

0x213f,	// (0x0006d450) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007a5c6) cale_month_week_pane_t_ParamLimits

0x951a,	// (0x0007482b) cell_cale_month_pane_g1_ParamLimits

0x9417,	// (0x00074728) main_cale_event_viewer_pane

0x9391,	// (0x000746a2) listscroll_cale_event_viewer_pane

0xcd6f,	// (0x00078080) list_cale_ev_pane

0xcd77,	// (0x00078088) scroll_pane_cp023

0xcd83,	// (0x00078094) field_cale_ev_pane_ParamLimits

0xcd83,	// (0x00078094) field_cale_ev_pane

0xcda1,	// (0x000780b2) field_cale_ev_content_pane_ParamLimits

0xcda1,	// (0x000780b2) field_cale_ev_content_pane

0xcdad,	// (0x000780be) field_cale_ev_pane_g1_ParamLimits

0xcdad,	// (0x000780be) field_cale_ev_pane_g1

0xcdb9,	// (0x000780ca) field_cale_ev_pane_g2_ParamLimits

0xcdb9,	// (0x000780ca) field_cale_ev_pane_g2

0xcdd1,	// (0x000780e2) field_cale_ev_pane_g3_ParamLimits

0xcdd1,	// (0x000780e2) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0007aa1a) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0007aa1a) field_cale_ev_pane_g

0xcde9,	// (0x000780fa) field_cale_ev_pane_t1_ParamLimits

0xcde9,	// (0x000780fa) field_cale_ev_pane_t1

0xac9d,	// (0x00075fae) field_cale_ev_content_pane_t1_ParamLimits

0xac9d,	// (0x00075fae) field_cale_ev_content_pane_t1

0xb602,	// (0x00076913) bg_button_pane_cp01

0x0b57,	// (0x0006be68) listscroll_cale_week_pane_ParamLimits

0xa97c,	// (0x00075c8d) popup_toolbar_window_cp01

0xa9a2,	// (0x00075cb3) listscroll_cale_week_pane_t1_ParamLimits

0x0b57,	// (0x0006be68) listscroll_cale_day_pane_ParamLimits

0xa97c,	// (0x00075c8d) popup_toolbar_window_cp02

0xade2,	// (0x000760f3) listscroll_cale_day_pane_t1_ParamLimits

0x35a7,	// (0x0006e8b8) main_cale_month_pane_ParamLimits

0x963e,	// (0x0007494f) popup_toolbar_window_cp03_ParamLimits

0x963e,	// (0x0007494f) popup_toolbar_window_cp03

0x2ea7,	// (0x0006e1b8) main_image_pane_g2_ParamLimits

0x2ea7,	// (0x0006e1b8) main_image_pane_g2

0x2eb8,	// (0x0006e1c9) main_image_pane_g3_ParamLimits

0x2eb8,	// (0x0006e1c9) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007a7f8) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007a7f8) main_image_pane_g

0xb71c,	// (0x00076a2d) main_image_pane_t1_ParamLimits

0x2ec9,	// (0x0006e1da) main_image_pane_t2_ParamLimits

0x2ec9,	// (0x0006e1da) main_image_pane_t2

0x2edb,	// (0x0006e1ec) main_image_pane_t3_ParamLimits

0x2edb,	// (0x0006e1ec) main_image_pane_t3

0x2f03,	// (0x0006e214) main_image_pane_t4_ParamLimits

0x2f03,	// (0x0006e214) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007a7ff) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007a7ff) main_image_pane_t

0x2f23,	// (0x0006e234) popup_image_details_window_cp01

0x2f2d,	// (0x0006e23e) popup_toobar_trans_pane_cp01_ParamLimits

0x2f2d,	// (0x0006e23e) popup_toobar_trans_pane_cp01

0x36b2,	// (0x0006e9c3) popup_image_details_window_ParamLimits

0x36b2,	// (0x0006e9c3) popup_image_details_window

0x9611,	// (0x00074922) popup_image_focus_window

0x3ad1,	// (0x0006ede2) camera2_autofocus_pane_ParamLimits

0x3ad1,	// (0x0006ede2) camera2_autofocus_pane

0x9391,	// (0x000746a2) bg_popup_sub_pane_cp06

0xce00,	// (0x00078111) popup_image_focus_window_g1

0xce14,	// (0x00078125) popup_image_focus_window_g2

0xce1c,	// (0x0007812d) popup_image_focus_window_g3

0xce24,	// (0x00078135) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0007aa21) popup_image_focus_window_g

0xce2c,	// (0x0007813d) popup_image_focus_window_t1

0xce3a,	// (0x0007814b) popup_image_focus_window_t2

0xce4a,	// (0x0007815b) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0007aa2a) popup_image_focus_window_t

0xce58,	// (0x00078169) camera2_autofocus_pane_g1

0xb4c1,	// (0x000767d2) bg_tb_trans_pane_cp01

0xce66,	// (0x00078177) popup_image_details_window_g1

0xce79,	// (0x0007818a) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0007aa3c) popup_image_details_window_g

0xcea2,	// (0x000781b3) popup_image_details_window_t1

0xceb4,	// (0x000781c5) popup_image_details_window_t2

0xcecd,	// (0x000781de) popup_image_details_window_t3

0xcee1,	// (0x000781f2) popup_image_details_window_t4

0xcefc,	// (0x0007820d) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0007aa43) popup_image_details_window_t

0xa841,	// (0x00075b52) bg_calc_paper_pane_ParamLimits

0x9417,	// (0x00074728) grid_highlight_pane_cp013

0x9480,	// (0x00074791) list_calc_pane_ParamLimits

0x9492,	// (0x000747a3) scroll_pane_cp024

0xa855,	// (0x00075b66) bg_calc_display_pane_ParamLimits

0x09bb,	// (0x0006bccc) calc_display_pane_t1_ParamLimits

0x09cd,	// (0x0006bcde) calc_display_pane_t2_ParamLimits

0x949a,	// (0x000747ab) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007a462) calc_display_pane_t_ParamLimits

0x0a8d,	// (0x0006bd9e) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0007a47f) cell_calc_pane_g

0x0a96,	// (0x0006bda7) cell_calc_pane_t1

0xa8b4,	// (0x00075bc5) grid_highlight_pane_cp02_ParamLimits

0xa8ca,	// (0x00075bdb) toolbar_button_pane_cp01_ParamLimits

0xa8ca,	// (0x00075bdb) toolbar_button_pane_cp01

0xb761,	// (0x00076a72) temp_image_control_pane_ParamLimits

0xb761,	// (0x00076a72) temp_image_control_pane

0x9409,	// (0x0007471a) main_mp3_pane

0xcf16,	// (0x00078227) temp_image_control_pane_g1_ParamLimits

0xcf16,	// (0x00078227) temp_image_control_pane_g1

0xcf24,	// (0x00078235) temp_image_control_pane_g2_ParamLimits

0xcf24,	// (0x00078235) temp_image_control_pane_g2

0xcf36,	// (0x00078247) temp_image_control_pane_g3_ParamLimits

0xcf36,	// (0x00078247) temp_image_control_pane_g3

0x4326,	// (0x0006f637) temp_image_control_pane_g4_ParamLimits

0x4326,	// (0x0006f637) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0007aa4e) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0007aa4e) temp_image_control_pane_g

0xcf16,	// (0x00078227) main_mp3_pane_g1

0x4339,	// (0x0006f64a) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0007aa57) main_mp3_pane_g

0xcf79,	// (0x0007828a) main_mp3_pane_t1

0xaa34,	// (0x00075d45) main_camera_pane_g8_ParamLimits

0xaa34,	// (0x00075d45) main_camera_pane_g8

0x1353,	// (0x0006c664) main_video_pane_g7_ParamLimits

0x1353,	// (0x0006c664) main_video_pane_g7

0x9693,	// (0x000749a4) main_camera2_pane_t7_ParamLimits

0x9693,	// (0x000749a4) main_camera2_pane_t7

0xab7c,	// (0x00075e8d) scroll_pane_cp025_ParamLimits

0xab7c,	// (0x00075e8d) scroll_pane_cp025

0xab90,	// (0x00075ea1) scroll_pane_cp026_ParamLimits

0xab90,	// (0x00075ea1) scroll_pane_cp026

0xab9f,	// (0x00075eb0) wml_content_pane_ParamLimits

0x9417,	// (0x00074728) main_touch_calib_pane

0x440d,	// (0x0006f71e) main_touch_calib_pane_g1

0x441f,	// (0x0006f730) main_touch_calib_pane_g2

0x4431,	// (0x0006f742) main_touch_calib_pane_g3

0x4443,	// (0x0006f754) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0007aa75) main_touch_calib_pane_g

0x4455,	// (0x0006f766) main_touch_calib_pane_t1

0x446f,	// (0x0006f780) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0007aa7e) main_touch_calib_pane_t

0xb320,	// (0x00076631) mup_progress_pane_cp02

0xb355,	// (0x00076666) navi_pane_g1

0xb410,	// (0x00076721) navi_pane_mp_t3

0x9409,	// (0x0007471a) main_mp3_pane_ParamLimits

0x383d,	// (0x0006eb4e) navi_pane_ParamLimits

0xcf16,	// (0x00078227) main_mp3_pane_g1_ParamLimits

0x4339,	// (0x0006f64a) main_mp3_pane_g2_ParamLimits

0x4347,	// (0x0006f658) main_mp3_pane_g3_ParamLimits

0x4347,	// (0x0006f658) main_mp3_pane_g3

0x4355,	// (0x0006f666) main_mp3_pane_g4_ParamLimits

0x4355,	// (0x0006f666) main_mp3_pane_g4

0xcf46,	// (0x00078257) main_mp3_pane_g5_ParamLimits

0xcf46,	// (0x00078257) main_mp3_pane_g5

0xcf54,	// (0x00078265) main_mp3_pane_g6_ParamLimits

0xcf54,	// (0x00078265) main_mp3_pane_g6

0xcf61,	// (0x00078272) main_mp3_pane_g7_ParamLimits

0xcf61,	// (0x00078272) main_mp3_pane_g7

0xcf6d,	// (0x0007827e) main_mp3_pane_g8_ParamLimits

0xcf6d,	// (0x0007827e) main_mp3_pane_g8

0xf746,	// (0x0007aa57) main_mp3_pane_g_ParamLimits

0x4361,	// (0x0006f672) main_mp3_pane_t2

0x436f,	// (0x0006f680) main_mp3_pane_t3

0xcf87,	// (0x00078298) main_mp3_pane_t4

0xcf95,	// (0x000782a6) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0007aa68) main_mp3_pane_t

0xcfa3,	// (0x000782b4) mup_progress_pane_cp01

0x93bf,	// (0x000746d0) aid_zoom_text_secondary2

0xcd6f,	// (0x00078080) list_cale_ev2_pane

0xcd77,	// (0x00078088) scroll_pane_cp023_ParamLimits

0x44c5,	// (0x0006f7d6) field_cale_ev2_pane_ParamLimits

0x44c5,	// (0x0006f7d6) field_cale_ev2_pane

0x9f54,	// (0x00075265) field_cale_ev2_pane_g1_ParamLimits

0x9f54,	// (0x00075265) field_cale_ev2_pane_g1

0x9f60,	// (0x00075271) field_cale_ev2_pane_g2_ParamLimits

0x9f60,	// (0x00075271) field_cale_ev2_pane_g2

0x9f78,	// (0x00075289) field_cale_ev2_pane_g3_ParamLimits

0x9f78,	// (0x00075289) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0007aa89) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0007aa89) field_cale_ev2_pane_g

0x9f9c,	// (0x000752ad) field_cale_ev2_pane_t1_ParamLimits

0x9f9c,	// (0x000752ad) field_cale_ev2_pane_t1

0x9fb3,	// (0x000752c4) field_cale_ev2_pane_t2_ParamLimits

0x9fb3,	// (0x000752c4) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0007aa92) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0007aa92) field_cale_ev2_pane_t

0x2d5b,	// (0x0006e06c) main_postcard_pane_g5_ParamLimits

0x2d5b,	// (0x0006e06c) main_postcard_pane_g5

0x2d71,	// (0x0006e082) main_postcard_pane_g6_ParamLimits

0x2d71,	// (0x0006e082) main_postcard_pane_g6

0x1119,	// (0x0006c42a) camera2_autofocus_pane_cp_ParamLimits

0x1119,	// (0x0006c42a) camera2_autofocus_pane_cp

0x9409,	// (0x0007471a) main_mup3_pane

0x452a,	// (0x0006f83b) main_mup3_pane_g1_ParamLimits

0x452a,	// (0x0006f83b) main_mup3_pane_g1

0x454c,	// (0x0006f85d) main_mup3_pane_g2_ParamLimits

0x454c,	// (0x0006f85d) main_mup3_pane_g2

0x45cc,	// (0x0006f8dd) main_mup3_pane_g3_ParamLimits

0x45cc,	// (0x0006f8dd) main_mup3_pane_g3

0x4612,	// (0x0006f923) main_mup3_pane_g4_ParamLimits

0x4612,	// (0x0006f923) main_mup3_pane_g4

0x4658,	// (0x0006f969) main_mup3_pane_g5_ParamLimits

0x4658,	// (0x0006f969) main_mup3_pane_g5

0x469e,	// (0x0006f9af) main_mup3_pane_g6_ParamLimits

0x469e,	// (0x0006f9af) main_mup3_pane_g6

0xcfab,	// (0x000782bc) main_mup3_pane_g7_ParamLimits

0xcfab,	// (0x000782bc) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0007aaa2) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0007aaa2) main_mup3_pane_g

0x471c,	// (0x0006fa2d) main_mup3_pane_t1_ParamLimits

0x471c,	// (0x0006fa2d) main_mup3_pane_t1

0x4790,	// (0x0006faa1) main_mup3_pane_t2_ParamLimits

0x4790,	// (0x0006faa1) main_mup3_pane_t2

0x4864,	// (0x0006fb75) main_mup3_pane_t4_ParamLimits

0x4864,	// (0x0006fb75) main_mup3_pane_t4

0x48ba,	// (0x0006fbcb) main_mup3_pane_t5_ParamLimits

0x48ba,	// (0x0006fbcb) main_mup3_pane_t5

0x4976,	// (0x0006fc87) main_mup3_pane_t6_ParamLimits

0x4976,	// (0x0006fc87) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0007aab3) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0007aab3) main_mup3_pane_t

0x4a2e,	// (0x0006fd3f) mup3_progress_pane_ParamLimits

0x4a2e,	// (0x0006fd3f) mup3_progress_pane

0x4aba,	// (0x0006fdcb) popup_mup3_control_window_ParamLimits

0x4aba,	// (0x0006fdcb) popup_mup3_control_window

0xcfb9,	// (0x000782ca) popup_mup3_text_window

0x4aec,	// (0x0006fdfd) mup3_progress_pane_t1

0x4b0b,	// (0x0006fe1c) mup3_progress_pane_t2

0xcfc1,	// (0x000782d2) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0007aac0) mup3_progress_pane_t

0xcfde,	// (0x000782ef) mup_progress_pane_cp03

0x9391,	// (0x000746a2) bg_tb_trans_pane_cp04

0x4b2a,	// (0x0006fe3b) mup3_volume_pane

0x4b32,	// (0x0006fe43) popup_mup3_control_window_g1

0x4b3b,	// (0x0006fe4c) mup3_volume_pane_g1

0x4b44,	// (0x0006fe55) mup3_volume_pane_g2

0x4b4d,	// (0x0006fe5e) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0007aac7) mup3_volume_pane_g

0x9391,	// (0x000746a2) bg_tb_trans_pane_cp03

0xcfee,	// (0x000782ff) popup_mup3_text_window_g1

0xcff6,	// (0x00078307) popup_mup3_text_window_t1

0xa89d,	// (0x00075bae) list_calc_item_pane_g1_ParamLimits

0xca3f,	// (0x00077d50) mup_volume_pane_cp_g1

0x4489,	// (0x0006f79a) main_touch_calib_pane_t3

0x449d,	// (0x0006f7ae) main_touch_calib_pane_t4

0x44b1,	// (0x0006f7c2) main_touch_calib_pane_t5

0x939b,	// (0x000746ac) aid_cell_size_toolbar2

0x93a3,	// (0x000746b4) aid_popup3_width_pane

0x93af,	// (0x000746c0) aid_zoom_text_msg_primary

0x10f8,	// (0x0006c409) vorec_t7

0xa861,	// (0x00075b72) bg_calc_paper_pane_g1_ParamLimits

0xa86d,	// (0x00075b7e) bg_calc_paper_pane_g2_ParamLimits

0xa879,	// (0x00075b8a) bg_calc_paper_pane_g3_ParamLimits

0xa885,	// (0x00075b96) bg_calc_paper_pane_g4_ParamLimits

0xa891,	// (0x00075ba2) bg_calc_paper_pane_g5_ParamLimits

0x0a16,	// (0x0006bd27) bg_calc_paper_pane_g6_ParamLimits

0x0a25,	// (0x0006bd36) bg_calc_paper_pane_g7_ParamLimits

0x0a34,	// (0x0006bd45) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007a469) bg_calc_paper_pane_g_ParamLimits

0x0a47,	// (0x0006bd58) calc_bg_paper_pane_g9_ParamLimits

0x1265,	// (0x0006c576) image_qvga_pane_ParamLimits

0x1265,	// (0x0006c576) image_qvga_pane

0xa784,	// (0x00075a95) bg_popup_sub_pane_cp04_ParamLimits

0xb698,	// (0x000769a9) popup_mup_playback_window_g1_ParamLimits

0xb6a4,	// (0x000769b5) popup_mup_playback_window_t1_ParamLimits

0xb6b9,	// (0x000769ca) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007a7f3) popup_mup_playback_window_t_ParamLimits

0x3fc8,	// (0x0006f2d9) main_mup2_pane_g3_ParamLimits

0x3fc8,	// (0x0006f2d9) main_mup2_pane_g3

0x1678,	// (0x0006c989) popup_toolbar_window_cp04

0xbaae,	// (0x00076dbf) popup_call2_audio_second_window_g3_ParamLimits

0xbaae,	// (0x00076dbf) popup_call2_audio_second_window_g3

0xbeb8,	// (0x000771c9) popup_call2_audio_first_window_g4_ParamLimits

0xbeb8,	// (0x000771c9) popup_call2_audio_first_window_g4

0xc537,	// (0x00077848) popup_call2_audio_in_window_g4_ParamLimits

0xc537,	// (0x00077848) popup_call2_audio_in_window_g4

0x2e89,	// (0x0006e19a) aid_area_sk_bg_cut_ParamLimits

0x2e89,	// (0x0006e19a) aid_area_sk_bg_cut

0xb6ce,	// (0x000769df) aid_area_sk_bg_cut_2_ParamLimits

0xb6ce,	// (0x000769df) aid_area_sk_bg_cut_2

0x42cc,	// (0x0006f5dd) aid_placing_details_win

0x42d4,	// (0x0006f5e5) aid_placing_details_win_2

0xce58,	// (0x00078169) camera2_autofocus_pane_g1_ParamLimits

0x0608,	// (0x0006b919) popup_fixed_preview_cale_window_ParamLimits

0x0608,	// (0x0006b919) popup_fixed_preview_cale_window

0xb48e,	// (0x0007679f) navi_slider_pane_g3

0xb497,	// (0x000767a8) navi_slider_pane_g4

0xb4a0,	// (0x000767b1) navi_slider_pane_g5

0xb48e,	// (0x0007679f) navi_slider_pane_g6

0x95c0,	// (0x000748d1) navi_slider_pane_g7

0xb5cf,	// (0x000768e0) mup_scale_pane_g3

0xb5d8,	// (0x000768e9) mup_scale_pane_g4

0xb5e1,	// (0x000768f2) mup_scale_pane_g5

0x2bb3,	// (0x0006dec4) mup_scale_pane_g6

0x2bbc,	// (0x0006decd) mup_scale_pane_g7

0xb48e,	// (0x0007679f) cams2_slider_pane_g3

0xcac1,	// (0x00077dd2) cams2_slider_pane_g4

0x96f9,	// (0x00074a0a) cams2_slider_pane_g5

0xb48e,	// (0x0007679f) cams2_slider_pane_g6

0x9701,	// (0x00074a12) cams2_slider_pane_g7

0xccec,	// (0x00077ffd) camera2_autofocus_pane_cp_g1

0xc8d8,	// (0x00077be9) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8d8,	// (0x00077be9) bg_popup_preview_window_pane_cp02

0xd004,	// (0x00078315) list_fp_cale_pane_ParamLimits

0xd004,	// (0x00078315) list_fp_cale_pane

0xd010,	// (0x00078321) popup_fixed_preview_cale_window_t1_ParamLimits

0xd010,	// (0x00078321) popup_fixed_preview_cale_window_t1

0x4b56,	// (0x0006fe67) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b56,	// (0x0006fe67) popup_fixed_preview_cale_window_t2

0x4b6b,	// (0x0006fe7c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b6b,	// (0x0006fe7c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0007aace) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0007aace) popup_fixed_preview_cale_window_t

0x4b80,	// (0x0006fe91) list_single_fp_cale_pane_ParamLimits

0x4b80,	// (0x0006fe91) list_single_fp_cale_pane

0xd02e,	// (0x0007833f) list_single_fp_cale_pane_g1_ParamLimits

0xd02e,	// (0x0007833f) list_single_fp_cale_pane_g1

0xd03a,	// (0x0007834b) list_single_fp_cale_pane_g2_ParamLimits

0xd03a,	// (0x0007834b) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0007aad5) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0007aad5) list_single_fp_cale_pane_g

0xd053,	// (0x00078364) list_single_fp_cale_pane_t1_ParamLimits

0xd053,	// (0x00078364) list_single_fp_cale_pane_t1

0xd065,	// (0x00078376) list_single_fp_cale_pane_t2_ParamLimits

0xd065,	// (0x00078376) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0007aadc) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0007aadc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9417,	// (0x00074728) main_dialer_pane

0x4b96,	// (0x0006fea7) aid_cell_size_keypad

0x4ba0,	// (0x0006feb1) dialer_ne_pane

0x4ba8,	// (0x0006feb9) grid_dialer_command_1_pane

0x4bb0,	// (0x0006fec1) grid_dialer_command_2_pane

0x4bb8,	// (0x0006fec9) grid_dialer_keypad_pane

0x4bca,	// (0x0006fedb) bg_popup_call_pane_cp06_ParamLimits

0x4bca,	// (0x0006fedb) bg_popup_call_pane_cp06

0x4bd6,	// (0x0006fee7) dialer_ne_clear_pane_ParamLimits

0x4bd6,	// (0x0006fee7) dialer_ne_clear_pane

0xd098,	// (0x000783a9) dialer_ne_pane_g1

0xd0a0,	// (0x000783b1) dialer_ne_pane_t1_ParamLimits

0xd0a0,	// (0x000783b1) dialer_ne_pane_t1

0x4be2,	// (0x0006fef3) dialer_ne_pane_t2_ParamLimits

0x4be2,	// (0x0006fef3) dialer_ne_pane_t2

0x4c0c,	// (0x0006ff1d) dialer_ne_pane_t3_ParamLimits

0x4c0c,	// (0x0006ff1d) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0007aae1) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0007aae1) dialer_ne_pane_t

0x4c3c,	// (0x0006ff4d) dialer_ne_pane_t3_copy1_ParamLimits

0x4c3c,	// (0x0006ff4d) dialer_ne_pane_t3_copy1

0x4c6b,	// (0x0006ff7c) cell_dialer_keypad_pane_ParamLimits

0x4c6b,	// (0x0006ff7c) cell_dialer_keypad_pane

0x4c82,	// (0x0006ff93) cell_dialer_command_1_pane_ParamLimits

0x4c82,	// (0x0006ff93) cell_dialer_command_1_pane

0x4c98,	// (0x0006ffa9) cell_dialer_command_2_pane_ParamLimits

0x4c98,	// (0x0006ffa9) cell_dialer_command_2_pane

0xd0b2,	// (0x000783c3) bg_button_pane_cp02_ParamLimits

0xd0b2,	// (0x000783c3) bg_button_pane_cp02

0x4ca7,	// (0x0006ffb8) cell_dialer_keypad_pane_g1_ParamLimits

0x4ca7,	// (0x0006ffb8) cell_dialer_keypad_pane_g1

0xd0b2,	// (0x000783c3) bg_button_pane_cp03_ParamLimits

0xd0b2,	// (0x000783c3) bg_button_pane_cp03

0x4cbb,	// (0x0006ffcc) cell_dialer_command_1_pane_g1_ParamLimits

0x4cbb,	// (0x0006ffcc) cell_dialer_command_1_pane_g1

0xd0be,	// (0x000783cf) bg_button_pane_cp04

0x4ccf,	// (0x0006ffe0) cell_dialer_command_2_pane_g1

0xaa2c,	// (0x00075d3d) bg_button_pane_cp06

0xd0c6,	// (0x000783d7) dialer_ne_clear_pane_g1

0xb361,	// (0x00076672) navi_pane_g2

0xb38f,	// (0x000766a0) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007a6f6) navi_pane_g

0xb41e,	// (0x0007672f) navi_pane_mv_g2

0xb445,	// (0x00076756) navi_pane_mv_g5

0x2781,	// (0x0006da92) navi_pane_mv_t1

0xa855,	// (0x00075b66) main_clock2_pane

0x4d1d,	// (0x0007002e) main_clock2_list_pane_ParamLimits

0x4d1d,	// (0x0007002e) main_clock2_list_pane

0x4d57,	// (0x00070068) main_clock2_pane_t1_ParamLimits

0x4d57,	// (0x00070068) main_clock2_pane_t1

0x4d95,	// (0x000700a6) main_clock2_pane_t2_ParamLimits

0x4d95,	// (0x000700a6) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0007aaed) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0007aaed) main_clock2_pane_t

0x4e33,	// (0x00070144) popup_clock_analogue_window_cp03_ParamLimits

0x4e33,	// (0x00070144) popup_clock_analogue_window_cp03

0x4e58,	// (0x00070169) popup_clock_digital_window_cp02_ParamLimits

0x4e58,	// (0x00070169) popup_clock_digital_window_cp02

0x4ec9,	// (0x000701da) main_clock2_list_single_pane_ParamLimits

0x4ec9,	// (0x000701da) main_clock2_list_single_pane

0xaa2c,	// (0x00075d3d) list_highlight_pane_cp05

0xd100,	// (0x00078411) main_clock2_list_single_pane_t1

0x1678,	// (0x0006c989) popup_toolbar_window_cp04_ParamLimits

0x42f6,	// (0x0006f607) camera2_autofocus_pane_g2_ParamLimits

0x42f6,	// (0x0006f607) camera2_autofocus_pane_g2

0x4302,	// (0x0006f613) camera2_autofocus_pane_g3_ParamLimits

0x4302,	// (0x0006f613) camera2_autofocus_pane_g3

0x430e,	// (0x0006f61f) camera2_autofocus_pane_g4_ParamLimits

0x430e,	// (0x0006f61f) camera2_autofocus_pane_g4

0x431a,	// (0x0006f62b) camera2_autofocus_pane_g5_ParamLimits

0x431a,	// (0x0006f62b) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0007aa31) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0007aa31) camera2_autofocus_pane_g

0x44e6,	// (0x0006f7f7) camera2_autofocus_pane_cp_g2

0x44ee,	// (0x0006f7ff) camera2_autofocus_pane_cp_g3

0x44f6,	// (0x0006f807) camera2_autofocus_pane_cp_g4

0x44fe,	// (0x0006f80f) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0007aa97) camera2_autofocus_pane_cp_g

0x4bc2,	// (0x0006fed3) popup_dialer_spcha_window

0x9391,	// (0x000746a2) bg_popup_sub_pane_cp07

0xd10e,	// (0x0007841f) list_spcha_pane

0xd116,	// (0x00078427) list_single_spcha_pane_ParamLimits

0xd116,	// (0x00078427) list_single_spcha_pane

0x9391,	// (0x000746a2) list_highlight_pane_cp06

0xd127,	// (0x00078438) list_single_spcha_pane_t1

0xc2e1,	// (0x000775f2) popup_call2_audio_out_window_g4_ParamLimits

0xc2e1,	// (0x000775f2) popup_call2_audio_out_window_g4

0x9417,	// (0x00074728) main_imed2_pane

0x9619,	// (0x0007492a) popup_imed_adjust2_window

0x36ca,	// (0x0006e9db) popup_imed_trans_window_ParamLimits

0x36ca,	// (0x0006e9db) popup_imed_trans_window

0xcb2a,	// (0x00077e3b) popup_blid_sat_info2_window_t1

0xcb38,	// (0x00077e49) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0007a9c6) popup_blid_sat_info2_window_t

0x4f72,	// (0x00070283) aid_size_cell_colour_35

0x4f92,	// (0x000702a3) aid_size_cell_colour_112

0x4fb2,	// (0x000702c3) aid_size_cell_effect

0xc8e4,	// (0x00077bf5) bg_tb_trans_pane_cp02

0xaeeb,	// (0x000761fc) heading_imed_pane

0x4fd2,	// (0x000702e3) listscroll_imed_pane

0xd135,	// (0x00078446) heading_imed_pane_g1

0xd13d,	// (0x0007844e) heading_imed_pane_t1

0xd14b,	// (0x0007845c) grid_imed_colour_35_pane_ParamLimits

0xd14b,	// (0x0007845c) grid_imed_colour_35_pane

0x4fde,	// (0x000702ef) grid_imed_effect_pane

0xd163,	// (0x00078474) list_imed_aspect_pane

0x4ff4,	// (0x00070305) scroll_pane_cp027_ParamLimits

0x4ff4,	// (0x00070305) scroll_pane_cp027

0x5005,	// (0x00070316) cell_imed_effect_pane_ParamLimits

0x5005,	// (0x00070316) cell_imed_effect_pane

0xd16b,	// (0x0007847c) cell_imed_colour_pane_ParamLimits

0xd16b,	// (0x0007847c) cell_imed_colour_pane

0xd1ad,	// (0x000784be) cell_imed_colour_pane_g1_ParamLimits

0xd1ad,	// (0x000784be) cell_imed_colour_pane_g1

0xd1be,	// (0x000784cf) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1be,	// (0x000784cf) hgihlgiht_grid_pane_cp016

0x502c,	// (0x0007033d) cell_imed_effect_pane_g1

0x5034,	// (0x00070345) grid_highlight_pane_cp017

0xd1cf,	// (0x000784e0) list_imed_single_pane_ParamLimits

0xd1cf,	// (0x000784e0) list_imed_single_pane

0x9391,	// (0x000746a2) list_highlight_pane_cp07

0xd1e4,	// (0x000784f5) list_imed_aspect_pane_comp1_t1

0xc8e4,	// (0x00077bf5) bg_tb_trans_pane_cp05

0xd206,	// (0x00078517) popup_imed_adjust2_window_g1

0xd22d,	// (0x0007853e) popup_imed_adjust2_window_t1

0xd245,	// (0x00078556) slider_imed_adjust_pane

0xd259,	// (0x0007856a) slider_imed_adjust_pane_g1

0xd269,	// (0x0007857a) slider_imed_adjust_pane_g2

0xd279,	// (0x0007858a) slider_imed_adjust_pane_g3

0xd28a,	// (0x0007859b) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0007ab0a) slider_imed_adjust_pane_g

0x503d,	// (0x0007034e) aid_size_cell_clipart2

0x5049,	// (0x0007035a) grid_imed_clipart_pane

0xd29b,	// (0x000785ac) scroll_pane_cp031

0x5053,	// (0x00070364) cell_imed_clipart_pane_ParamLimits

0x5053,	// (0x00070364) cell_imed_clipart_pane

0x5075,	// (0x00070386) cell_imed_clipart_pane_g1

0x9391,	// (0x000746a2) grid_highlight_pane_cp014

0x4d32,	// (0x00070043) main_clock2_pane_g1_ParamLimits

0x4d32,	// (0x00070043) main_clock2_pane_g1

0x4e74,	// (0x00070185) aid_call2_pane_cp10

0x4e86,	// (0x00070197) aid_call_pane_cp10

0xb2c0,	// (0x000765d1) popup_clock_analogue_window_cp10_g1

0xb2c0,	// (0x000765d1) popup_clock_analogue_window_cp10_g2

0x4e98,	// (0x000701a9) popup_clock_analogue_window_cp10_g3

0x4e98,	// (0x000701a9) popup_clock_analogue_window_cp10_g4

0xb2c0,	// (0x000765d1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0007aaf8) popup_clock_analogue_window_cp10_g

0x4eaa,	// (0x000701bb) popup_clock_analogue_window_cp10_t1

0x4edb,	// (0x000701ec) clock_digital_number_pane_cp10_ParamLimits

0x4edb,	// (0x000701ec) clock_digital_number_pane_cp10

0x4ef3,	// (0x00070204) clock_digital_number_pane_cp11_ParamLimits

0x4ef3,	// (0x00070204) clock_digital_number_pane_cp11

0x4f0b,	// (0x0007021c) clock_digital_number_pane_cp12_ParamLimits

0x4f0b,	// (0x0007021c) clock_digital_number_pane_cp12

0x4f23,	// (0x00070234) clock_digital_number_pane_cp13_ParamLimits

0x4f23,	// (0x00070234) clock_digital_number_pane_cp13

0x4f3b,	// (0x0007024c) clock_digital_separator_pane_cp10_ParamLimits

0x4f3b,	// (0x0007024c) clock_digital_separator_pane_cp10

0x4f53,	// (0x00070264) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f53,	// (0x00070264) popup_clock_digital_window_cp02_t1

0xa77c,	// (0x00075a8d) clock_digital_number_pane_cp10_g1

0xa77c,	// (0x00075a8d) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0007ab13) clock_digital_number_pane_cp10_g

0xa77c,	// (0x00075a8d) clock_digital_separator_pane_cp10_g1

0xa77c,	// (0x00075a8d) clock_digital_separator_pane_g2_cp10

0xb44d,	// (0x0007675e) navi_pane_vded_g4

0xb456,	// (0x00076767) navi_pane_vded_g5

0xb45f,	// (0x00076770) navi_pane_vded_t1

0x9417,	// (0x00074728) main_vded_pane

0x507e,	// (0x0007038f) main_vded_pane_g1

0x5088,	// (0x00070399) main_vded_pane_g2

0x5092,	// (0x000703a3) main_vded_pane_g3

0x0002,

0xf807,	// (0x0007ab18) main_vded_pane_g

0x509c,	// (0x000703ad) main_vded_pane_t1

0x50aa,	// (0x000703bb) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0007ab1f) main_vded_pane_t

0x50b8,	// (0x000703c9) vded_slider_pane

0x50c0,	// (0x000703d1) vded_video_pane

0xd2a3,	// (0x000785b4) vded_video_pane_g1

0x50c8,	// (0x000703d9) vded_video_pane_g2

0xccec,	// (0x00077ffd) vded_video_pane_g3

0x0002,

0xf813,	// (0x0007ab24) vded_video_pane_g

0xd2ad,	// (0x000785be) vded_slider_pane_g1

0xca3f,	// (0x00077d50) vded_slider_pane_g2

0xd2b6,	// (0x000785c7) vded_slider_pane_g3

0xd2bf,	// (0x000785d0) vded_slider_pane_g4

0xd2c8,	// (0x000785d9) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0007ab2b) vded_slider_pane_g

0x4aa2,	// (0x0006fdb3) mup3_rocker_pane_ParamLimits

0x4aa2,	// (0x0006fdb3) mup3_rocker_pane

0x50d1,	// (0x000703e2) mup3_control_keys_pane_g1

0x50d9,	// (0x000703ea) mup3_control_keys_pane_g2

0x50e1,	// (0x000703f2) mup3_control_keys_pane_g3

0x50e9,	// (0x000703fa) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0007ab36) mup3_control_keys_pane_g

0x063f,	// (0x0006b950) popup_toolbar2_fixed_window_cp01_ParamLimits

0x063f,	// (0x0006b950) popup_toolbar2_fixed_window_cp01

0x4ad6,	// (0x0006fde7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4ad6,	// (0x0006fde7) popup_toolbar2_fixed_window_cp02

0xbc20,	// (0x00076f31) popup_call2_audio_second_window_t4_ParamLimits

0xbc20,	// (0x00076f31) popup_call2_audio_second_window_t4

0xc14e,	// (0x0007745f) popup_call2_audio_first_window_t6_ParamLimits

0xc14e,	// (0x0007745f) popup_call2_audio_first_window_t6

0xc3e4,	// (0x000776f5) popup_call2_audio_out_window_t6_ParamLimits

0xc3e4,	// (0x000776f5) popup_call2_audio_out_window_t6

0x9417,	// (0x00074728) main_vitu_pane

0x50f9,	// (0x0007040a) aid_size_cell_itu_ParamLimits

0x50f9,	// (0x0007040a) aid_size_cell_itu

0xb4c1,	// (0x000767d2) bg_popup_window_pane_cp08_ParamLimits

0xb4c1,	// (0x000767d2) bg_popup_window_pane_cp08

0x510f,	// (0x00070420) field_vitu_entry_pane_ParamLimits

0x510f,	// (0x00070420) field_vitu_entry_pane

0x5127,	// (0x00070438) grid_vitu_function_pane_ParamLimits

0x5127,	// (0x00070438) grid_vitu_function_pane

0x5142,	// (0x00070453) grid_vitu_itu_pane_ParamLimits

0x5142,	// (0x00070453) grid_vitu_itu_pane

0x5160,	// (0x00070471) cell_vitu_itu_pane_ParamLimits

0x5160,	// (0x00070471) cell_vitu_itu_pane

0x5182,	// (0x00070493) cell_vitu_function_pane_ParamLimits

0x5182,	// (0x00070493) cell_vitu_function_pane

0xb4c1,	// (0x000767d2) bg_popup_sub_pane_cp08_ParamLimits

0xb4c1,	// (0x000767d2) bg_popup_sub_pane_cp08

0x519b,	// (0x000704ac) field_vitu_entry_pane_t1_ParamLimits

0x519b,	// (0x000704ac) field_vitu_entry_pane_t1

0xd2e9,	// (0x000785fa) field_vitu_entry_pane_t2_ParamLimits

0xd2e9,	// (0x000785fa) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0007ab44) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0007ab44) field_vitu_entry_pane_t

0xd306,	// (0x00078617) bg_button_pane_cp05_ParamLimits

0xd306,	// (0x00078617) bg_button_pane_cp05

0x51ba,	// (0x000704cb) cell_vitu_itu_pane_g1

0x51d2,	// (0x000704e3) cell_vitu_itu_pane_t1_ParamLimits

0x51d2,	// (0x000704e3) cell_vitu_itu_pane_t1

0x51e4,	// (0x000704f5) cell_vitu_itu_pane_t2_ParamLimits

0x51e4,	// (0x000704f5) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0007ab49) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0007ab49) cell_vitu_itu_pane_t

0xd314,	// (0x00078625) bg_button_pane_cp07

0x5219,	// (0x0007052a) cell_vitu_function_pane_g1

0x9478,	// (0x00074789) main_calc_pane_g1

0x0466,	// (0x0006b777) aid_visual_content_pane

0x9417,	// (0x00074728) main_vradio_pane

0x5222,	// (0x00070533) main_vradio_pane_g1_ParamLimits

0x5222,	// (0x00070533) main_vradio_pane_g1

0xd31e,	// (0x0007862f) main_vradio_pane_g2_ParamLimits

0xd31e,	// (0x0007862f) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0007ab50) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0007ab50) main_vradio_pane_g

0x523b,	// (0x0007054c) main_vradio_pane_t1_ParamLimits

0x523b,	// (0x0007054c) main_vradio_pane_t1

0x5250,	// (0x00070561) main_vradio_pane_t2_ParamLimits

0x5250,	// (0x00070561) main_vradio_pane_t2

0xd32b,	// (0x0007863c) main_vradio_pane_t3_ParamLimits

0xd32b,	// (0x0007863c) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0007ab55) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0007ab55) main_vradio_pane_t

0x5265,	// (0x00070576) vradio_rocker_control_pane_ParamLimits

0x5265,	// (0x00070576) vradio_rocker_control_pane

0x5277,	// (0x00070588) vradio_station_info_pane_ParamLimits

0x5277,	// (0x00070588) vradio_station_info_pane

0xd33f,	// (0x00078650) vradio_frequency_info_pane_ParamLimits

0xd33f,	// (0x00078650) vradio_frequency_info_pane

0xccec,	// (0x00077ffd) vradio_station_info_pane_g1

0xd34e,	// (0x0007865f) vradio_station_info_pane_t1_ParamLimits

0xd34e,	// (0x0007865f) vradio_station_info_pane_t1

0xd370,	// (0x00078681) vradio_station_info_pane_t2_ParamLimits

0xd370,	// (0x00078681) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0007ab5c) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0007ab5c) vradio_station_info_pane_t

0xd382,	// (0x00078693) vradio_tuning_pane

0xd38a,	// (0x0007869b) vradio_rocker_control_pane_g1

0xd392,	// (0x000786a3) vradio_rocker_control_pane_g2

0xd39a,	// (0x000786ab) vradio_rocker_control_pane_g3

0xd3a2,	// (0x000786b3) vradio_rocker_control_pane_g4

0xd3aa,	// (0x000786bb) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0007ab61) vradio_rocker_control_pane_g

0x5289,	// (0x0007059a) vradio_frequency_info_pane_g1

0xd3b2,	// (0x000786c3) vradio_frequency_info_pane_t1_ParamLimits

0xd3b2,	// (0x000786c3) vradio_frequency_info_pane_t1

0x5293,	// (0x000705a4) vradio_tuning_pane_g1

0x529e,	// (0x000705af) vradio_tuning_pane_t1

0x93c7,	// (0x000746d8) area_side_right_pane_ParamLimits

0x93c7,	// (0x000746d8) area_side_right_pane

0xc89f,	// (0x00077bb0) status_small_pane_g1

0xc8a7,	// (0x00077bb8) status_small_pane_g2

0xc8b0,	// (0x00077bc1) status_small_pane_g3

0xc8b9,	// (0x00077bca) status_small_pane_g4

0x0003,

0xf60b,	// (0x0007a91c) status_small_pane_g

0xc8c2,	// (0x00077bd3) status_small_pane_t1

0x9417,	// (0x00074728) main_video3_pane

0xd3c6,	// (0x000786d7) cams_zoom_vslider_pane

0xd3ce,	// (0x000786df) image3_wide_pane_ParamLimits

0xd3ce,	// (0x000786df) image3_wide_pane

0xd3e8,	// (0x000786f9) image3_wide_small_pane

0xd3f4,	// (0x00078705) main_video3_pane_g1_ParamLimits

0xd3f4,	// (0x00078705) main_video3_pane_g1

0xd410,	// (0x00078721) main_video3_pane_g2_ParamLimits

0xd410,	// (0x00078721) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0007ab6c) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0007ab6c) main_video3_pane_g

0xd42c,	// (0x0007873d) main_video3_pane_t1_ParamLimits

0xd42c,	// (0x0007873d) main_video3_pane_t1

0xd457,	// (0x00078768) main_video3_pane_t2_ParamLimits

0xd457,	// (0x00078768) main_video3_pane_t2

0xd482,	// (0x00078793) main_video3_pane_t3_ParamLimits

0xd482,	// (0x00078793) main_video3_pane_t3

0x0002,

0xf860,	// (0x0007ab71) main_video3_pane_t_ParamLimits

0xf860,	// (0x0007ab71) main_video3_pane_t

0xd4af,	// (0x000787c0) cams_zoom_vslider_pane_g1

0xd4b8,	// (0x000787c9) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0007ab78) cams_zoom_vslider_pane_g

0xd4c0,	// (0x000787d1) small_slider_vertical_pane

0xccec,	// (0x00077ffd) small_slider_vertical_pane_g1

0xccec,	// (0x00077ffd) small_slider_vertical_pane_g2

0xd4c8,	// (0x000787d9) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0007ab7d) small_slider_vertical_pane_g

0x9417,	// (0x00074728) main_hwr_training_pane

0xd4d1,	// (0x000787e2) hwr_training_instruct_pane_ParamLimits

0xd4d1,	// (0x000787e2) hwr_training_instruct_pane

0x52ad,	// (0x000705be) hwr_training_navi_pane_ParamLimits

0x52ad,	// (0x000705be) hwr_training_navi_pane

0x52cc,	// (0x000705dd) hwr_training_write_pane_ParamLimits

0x52cc,	// (0x000705dd) hwr_training_write_pane

0x9391,	// (0x000746a2) bg_frame_shadow_pane

0xd508,	// (0x00078819) hwr_training_write_pane_g1

0xd510,	// (0x00078821) hwr_training_write_pane_g2

0xd518,	// (0x00078829) hwr_training_write_pane_g3

0xd520,	// (0x00078831) hwr_training_write_pane_g4

0xd528,	// (0x00078839) hwr_training_write_pane_g5

0xd530,	// (0x00078841) hwr_training_write_pane_g6

0xd538,	// (0x00078849) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0007ab84) hwr_training_write_pane_g

0x970a,	// (0x00074a1b) hwr_training_navi_pane_g1_ParamLimits

0x970a,	// (0x00074a1b) hwr_training_navi_pane_g1

0x971c,	// (0x00074a2d) hwr_training_navi_pane_g2_ParamLimits

0x971c,	// (0x00074a2d) hwr_training_navi_pane_g2

0x972e,	// (0x00074a3f) hwr_training_navi_pane_g3_ParamLimits

0x972e,	// (0x00074a3f) hwr_training_navi_pane_g3

0x973e,	// (0x00074a4f) hwr_training_navi_pane_g4_ParamLimits

0x973e,	// (0x00074a4f) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0007ab93) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0007ab93) hwr_training_navi_pane_g

0x974b,	// (0x00074a5c) hwr_training_navi_pane_t1

0x5316,	// (0x00070627) list_single_hwr_training_instruct_pane_ParamLimits

0x5316,	// (0x00070627) list_single_hwr_training_instruct_pane

0xd540,	// (0x00078851) list_single_hwr_training_instruct_pane_t1

0xcc2c,	// (0x00077f3d) bg_frame_shadow_pane_g1

0xd54f,	// (0x00078860) bg_frame_shadow_pane_g2

0xd557,	// (0x00078868) bg_frame_shadow_pane_g3

0xd55f,	// (0x00078870) bg_frame_shadow_pane_g4

0xd567,	// (0x00078878) bg_frame_shadow_pane_g5

0xd56f,	// (0x00078880) bg_frame_shadow_pane_g6

0xd577,	// (0x00078888) bg_frame_shadow_pane_g7

0xa920,	// (0x00075c31) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0007ab9e) bg_frame_shadow_pane_g

0x9417,	// (0x00074728) main_video_tele_dialer_pane

0x532c,	// (0x0007063d) aid_size_cell_video_keypad_ParamLimits

0x532c,	// (0x0007063d) aid_size_cell_video_keypad

0x5346,	// (0x00070657) grid_video_dialer_keypad_pane_ParamLimits

0x5346,	// (0x00070657) grid_video_dialer_keypad_pane

0x5394,	// (0x000706a5) video_down_pane_cp_ParamLimits

0x5394,	// (0x000706a5) video_down_pane_cp

0x53c6,	// (0x000706d7) cell_video_dialer_keypad_pane_ParamLimits

0x53c6,	// (0x000706d7) cell_video_dialer_keypad_pane

0xd57f,	// (0x00078890) bg_button_pane_cp08_ParamLimits

0xd57f,	// (0x00078890) bg_button_pane_cp08

0x53e8,	// (0x000706f9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x53e8,	// (0x000706f9) cell_video_dialer_keypad_pane_g1

0x4a8c,	// (0x0006fd9d) mup3_rocker2_pane_ParamLimits

0x4a8c,	// (0x0006fd9d) mup3_rocker2_pane

0xccec,	// (0x00077ffd) mup3_rocker2_pane_g1

0x35b9,	// (0x0006e8ca) main_dialer2_pane

0x9417,	// (0x00074728) main_mp4_pane

0x9761,	// (0x00074a72) main_mp4_pane_g1_ParamLimits

0x9761,	// (0x00074a72) main_mp4_pane_g1

0x9761,	// (0x00074a72) main_mp4_pane_g2_ParamLimits

0x9761,	// (0x00074a72) main_mp4_pane_g2

0x5422,	// (0x00070733) main_mp4_pane_g3_ParamLimits

0x5422,	// (0x00070733) main_mp4_pane_g3

0x976f,	// (0x00074a80) main_mp4_pane_g4_ParamLimits

0x976f,	// (0x00074a80) main_mp4_pane_g4

0x9797,	// (0x00074aa8) main_mp4_pane_g5_ParamLimits

0x9797,	// (0x00074aa8) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0007abbe) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0007abbe) main_mp4_pane_g

0x97e7,	// (0x00074af8) main_mp4_pane_t1_ParamLimits

0x97e7,	// (0x00074af8) main_mp4_pane_t1

0x9843,	// (0x00074b54) main_mp4_pane_t2_ParamLimits

0x9843,	// (0x00074b54) main_mp4_pane_t2

0xd58b,	// (0x0007889c) main_mp4_pane_t3_ParamLimits

0xd58b,	// (0x0007889c) main_mp4_pane_t3

0x9895,	// (0x00074ba6) main_mp4_pane_t4_ParamLimits

0x9895,	// (0x00074ba6) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0007abcb) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0007abcb) main_mp4_pane_t

0x98d9,	// (0x00074bea) mp4_progress_pane_ParamLimits

0x98d9,	// (0x00074bea) mp4_progress_pane

0x9923,	// (0x00074c34) mp4_rocker_pane_ParamLimits

0x9923,	// (0x00074c34) mp4_rocker_pane

0xd5b3,	// (0x000788c4) mp4_progress_pane_t1

0xd5cc,	// (0x000788dd) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0007abd4) mp4_progress_pane_t

0xd5e5,	// (0x000788f6) mup_progress_pane_cp04

0xd654,	// (0x00078965) mp4_rocker_pane_g1

0x545e,	// (0x0007076f) aid_cell_size_keypad2_ParamLimits

0x545e,	// (0x0007076f) aid_cell_size_keypad2

0x5474,	// (0x00070785) dialer2_ne_pane_ParamLimits

0x5474,	// (0x00070785) dialer2_ne_pane

0x548e,	// (0x0007079f) grid_dialer2_keypad_pane_ParamLimits

0x548e,	// (0x0007079f) grid_dialer2_keypad_pane

0xcad1,	// (0x00077de2) bg_popup_call_pane_cp07_ParamLimits

0xcad1,	// (0x00077de2) bg_popup_call_pane_cp07

0x54aa,	// (0x000707bb) dialer2_ne_pane_t1_ParamLimits

0x54aa,	// (0x000707bb) dialer2_ne_pane_t1

0x54e6,	// (0x000707f7) cell_dialer2_keypad_pane_ParamLimits

0x54e6,	// (0x000707f7) cell_dialer2_keypad_pane

0xd603,	// (0x00078914) bg_button_pane_pane_cp04_ParamLimits

0xd603,	// (0x00078914) bg_button_pane_pane_cp04

0x5508,	// (0x00070819) cell_dialer2_keypad_pane_g1_ParamLimits

0x5508,	// (0x00070819) cell_dialer2_keypad_pane_g1

0x154c,	// (0x0006c85d) aid_placing_vt_set_content_ParamLimits

0x154c,	// (0x0006c85d) aid_placing_vt_set_content

0x1574,	// (0x0006c885) aid_placing_vt_set_title_ParamLimits

0x1574,	// (0x0006c885) aid_placing_vt_set_title

0x9417,	// (0x00074728) main_image3_pane

0x55ce,	// (0x000708df) area_side_right_pane_cp01_ParamLimits

0x55ce,	// (0x000708df) area_side_right_pane_cp01

0x9761,	// (0x00074a72) main_image3_pane_g1_ParamLimits

0x9761,	// (0x00074a72) main_image3_pane_g1

0x55e5,	// (0x000708f6) main_image3_pane_g2_ParamLimits

0x55e5,	// (0x000708f6) main_image3_pane_g2

0x560d,	// (0x0007091e) main_image3_pane_g3_ParamLimits

0x560d,	// (0x0007091e) main_image3_pane_g3

0x5637,	// (0x00070948) main_image3_pane_g4_ParamLimits

0x5637,	// (0x00070948) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0007abe3) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0007abe3) main_image3_pane_g

0x5661,	// (0x00070972) main_image3_pane_t1_ParamLimits

0x5661,	// (0x00070972) main_image3_pane_t1

0x56b9,	// (0x000709ca) main_image3_pane_t2_ParamLimits

0x56b9,	// (0x000709ca) main_image3_pane_t2

0x570b,	// (0x00070a1c) main_image3_pane_t3_ParamLimits

0x570b,	// (0x00070a1c) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0007abec) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0007abec) main_image3_pane_t

0xb4c1,	// (0x000767d2) grid_sctrl_middle_pane_cp01_ParamLimits

0xb4c1,	// (0x000767d2) grid_sctrl_middle_pane_cp01

0x5793,	// (0x00070aa4) cell_sctrl_middle_pane_cp01_ParamLimits

0x5793,	// (0x00070aa4) cell_sctrl_middle_pane_cp01

0x57b0,	// (0x00070ac1) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57b0,	// (0x00070ac1) cell_sctrl_middle_pane_cp01_g1

0x9417,	// (0x00074728) main_call4_pane

0x57c6,	// (0x00070ad7) aid_size_button_call4_ParamLimits

0x57c6,	// (0x00070ad7) aid_size_button_call4

0x57f7,	// (0x00070b08) call4_windows_pane_ParamLimits

0x57f7,	// (0x00070b08) call4_windows_pane

0x5817,	// (0x00070b28) grid_call4_button_pane_ParamLimits

0x5817,	// (0x00070b28) grid_call4_button_pane

0xd60f,	// (0x00078920) call4_windows_conf_pane

0xd626,	// (0x00078937) popup_call4_audio_first_window_ParamLimits

0xd626,	// (0x00078937) popup_call4_audio_first_window

0xd680,	// (0x00078991) popup_call4_audio_second_window_ParamLimits

0xd680,	// (0x00078991) popup_call4_audio_second_window

0xd699,	// (0x000789aa) popup_call4_audio_wait_window_ParamLimits

0xd699,	// (0x000789aa) popup_call4_audio_wait_window

0x5844,	// (0x00070b55) cell_call4_button_pane_ParamLimits

0x5844,	// (0x00070b55) cell_call4_button_pane

0x586d,	// (0x00070b7e) bg_button_pane_cp09_ParamLimits

0x586d,	// (0x00070b7e) bg_button_pane_cp09

0x5879,	// (0x00070b8a) cell_call4_button_pane_g1_ParamLimits

0x5879,	// (0x00070b8a) cell_call4_button_pane_g1

0x589f,	// (0x00070bb0) cell_call4_button_pane_t1_ParamLimits

0x589f,	// (0x00070bb0) cell_call4_button_pane_t1

0xd6af,	// (0x000789c0) popup_call4_audio_conf_window_ParamLimits

0xd6af,	// (0x000789c0) popup_call4_audio_conf_window

0x4aec,	// (0x0006fdfd) mup3_progress_pane_t1_ParamLimits

0x4b0b,	// (0x0006fe1c) mup3_progress_pane_t2_ParamLimits

0xcfc1,	// (0x000782d2) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0007aac0) mup3_progress_pane_t_ParamLimits

0xcfde,	// (0x000782ef) mup_progress_pane_cp03_ParamLimits

0x50f1,	// (0x00070402) mup3_control_keys_pane_g4_copy1

0x9907,	// (0x00074c18) mp4_rocker2_pane_ParamLimits

0x9907,	// (0x00074c18) mp4_rocker2_pane

0xd6c3,	// (0x000789d4) mp4_rocker2_pane_g1

0xd6cb,	// (0x000789dc) mp4_rocker2_pane_g2

0x99a7,	// (0x00074cb8) mp4_rocker2_pane_g3

0x99af,	// (0x00074cc0) mp4_rocker2_pane_g4

0x99b7,	// (0x00074cc8) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0007abf5) mp4_rocker2_pane_g

0x9417,	// (0x00074728) main_camera4_pane

0x9417,	// (0x00074728) main_video4_pane

0x5362,	// (0x00070673) main_video_tele_dialer_pane_t1_ParamLimits

0x5362,	// (0x00070673) main_video_tele_dialer_pane_t1

0x537b,	// (0x0007068c) main_video_tele_dialer_pane_t2_ParamLimits

0x537b,	// (0x0007068c) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0007abaf) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0007abaf) main_video_tele_dialer_pane_t

0x58e1,	// (0x00070bf2) cam4_autofocus_pane_ParamLimits

0x58e1,	// (0x00070bf2) cam4_autofocus_pane

0x58f7,	// (0x00070c08) cam4_image_uncrop_pane_ParamLimits

0x58f7,	// (0x00070c08) cam4_image_uncrop_pane

0x5911,	// (0x00070c22) cam4_indicators_pane_ParamLimits

0x5911,	// (0x00070c22) cam4_indicators_pane

0x593c,	// (0x00070c4d) main_camera4_pane_g1_ParamLimits

0x593c,	// (0x00070c4d) main_camera4_pane_g1

0x594e,	// (0x00070c5f) main_camera4_pane_g2_ParamLimits

0x594e,	// (0x00070c5f) main_camera4_pane_g2

0x5961,	// (0x00070c72) main_camera4_pane_g3_ParamLimits

0x5961,	// (0x00070c72) main_camera4_pane_g3

0x5974,	// (0x00070c85) main_camera4_pane_g4_ParamLimits

0x5974,	// (0x00070c85) main_camera4_pane_g4

0x5987,	// (0x00070c98) main_camera4_pane_g5_ParamLimits

0x5987,	// (0x00070c98) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0007ac00) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0007ac00) main_camera4_pane_g

0x59ab,	// (0x00070cbc) main_camera4_pane_t1_ParamLimits

0x59ab,	// (0x00070cbc) main_camera4_pane_t1

0x99db,	// (0x00074cec) bg_tb_trans_pane_cp06

0x99f1,	// (0x00074d02) cam4_indicators_pane_g1

0x9a02,	// (0x00074d13) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0007ac1b) cam4_indicators_pane_g

0x9a1a,	// (0x00074d2b) cam4_indicators_pane_t1

0x5a0f,	// (0x00070d20) main_video4_pane_g1_ParamLimits

0x5a0f,	// (0x00070d20) main_video4_pane_g1

0x5a1e,	// (0x00070d2f) main_video4_pane_g2_ParamLimits

0x5a1e,	// (0x00070d2f) main_video4_pane_g2

0x5a2d,	// (0x00070d3e) main_video4_pane_g3_ParamLimits

0x5a2d,	// (0x00070d3e) main_video4_pane_g3

0x5a3c,	// (0x00070d4d) main_video4_pane_g4_ParamLimits

0x5a3c,	// (0x00070d4d) main_video4_pane_g4

0x0004,

0xf911,	// (0x0007ac22) main_video4_pane_g_ParamLimits

0xf911,	// (0x0007ac22) main_video4_pane_g

0x5a5a,	// (0x00070d6b) vid4_indicators_pane_ParamLimits

0x5a5a,	// (0x00070d6b) vid4_indicators_pane

0x5a88,	// (0x00070d99) video4_image_uncrop_cif_pane_ParamLimits

0x5a88,	// (0x00070d99) video4_image_uncrop_cif_pane

0x5aa2,	// (0x00070db3) video4_image_uncrop_nhd_pane_ParamLimits

0x5aa2,	// (0x00070db3) video4_image_uncrop_nhd_pane

0x58f7,	// (0x00070c08) video4_image_uncrop_vga_pane_ParamLimits

0x58f7,	// (0x00070c08) video4_image_uncrop_vga_pane

0x9409,	// (0x0007471a) bg_tb_trans_pane_cp07

0x9a44,	// (0x00074d55) vid4_indicators_pane_g1

0x9a58,	// (0x00074d69) vid4_indicators_pane_g2

0x9a6c,	// (0x00074d7d) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0007ac2d) vid4_indicators_pane_g

0x9a99,	// (0x00074daa) vid4_indicators_pane_t1

0x5ab6,	// (0x00070dc7) cam4_autofocus_pane_g1

0x5abe,	// (0x00070dcf) cam4_autofocus_pane_g2

0x5ac6,	// (0x00070dd7) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0007ac38) cam4_autofocus_pane_g

0x5ace,	// (0x00070ddf) cam4_autofocus_pane_g3_copy1

0x53aa,	// (0x000706bb) video_down_pane_cp_t1

0x53b8,	// (0x000706c9) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0007abb4) video_down_pane_cp_t

0x9409,	// (0x0007471a) popup_vitu2_window_ParamLimits

0x9409,	// (0x0007471a) popup_vitu2_window

0x5ad6,	// (0x00070de7) aid_size_cell2_itu2_ParamLimits

0x5ad6,	// (0x00070de7) aid_size_cell2_itu2

0x5afc,	// (0x00070e0d) aid_size_cell_itu2_ParamLimits

0x5afc,	// (0x00070e0d) aid_size_cell_itu2

0x5b58,	// (0x00070e69) bg_popup_window_pane_cp09_ParamLimits

0x5b58,	// (0x00070e69) bg_popup_window_pane_cp09

0x5b66,	// (0x00070e77) field_vitu2_entry_pane_ParamLimits

0x5b66,	// (0x00070e77) field_vitu2_entry_pane

0x5b8c,	// (0x00070e9d) grid_vitu2_function_pane_ParamLimits

0x5b8c,	// (0x00070e9d) grid_vitu2_function_pane

0x5bdd,	// (0x00070eee) grid_vitu2_itu_pane_ParamLimits

0x5bdd,	// (0x00070eee) grid_vitu2_itu_pane

0x5c73,	// (0x00070f84) cell_vitu2_itu_pane_ParamLimits

0x5c73,	// (0x00070f84) cell_vitu2_itu_pane

0x5c9f,	// (0x00070fb0) cell_vitu2_function_pane_ParamLimits

0x5c9f,	// (0x00070fb0) cell_vitu2_function_pane

0xd6e5,	// (0x000789f6) bg_popup_call_pane_cp08_ParamLimits

0xd6e5,	// (0x000789f6) bg_popup_call_pane_cp08

0xd6fc,	// (0x00078a0d) field_vitu2_entry_pane_g1

0xd708,	// (0x00078a19) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0007ac3f) field_vitu2_entry_pane_g

0x5cde,	// (0x00070fef) field_vitu2_entry_pane_t1_ParamLimits

0x5cde,	// (0x00070fef) field_vitu2_entry_pane_t1

0x9fc8,	// (0x000752d9) field_vitu2_entry_pane_t2_ParamLimits

0x9fc8,	// (0x000752d9) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0007ac46) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0007ac46) field_vitu2_entry_pane_t

0x5d0e,	// (0x0007101f) bg_button_pane_cp010_ParamLimits

0x5d0e,	// (0x0007101f) bg_button_pane_cp010

0x9ab0,	// (0x00074dc1) cell_vitu2_itu_pane_g1

0x5d2a,	// (0x0007103b) cell_vitu2_itu_pane_t1_ParamLimits

0x5d2a,	// (0x0007103b) cell_vitu2_itu_pane_t1

0x033e,	// (0x0006b64f) cell_vitu2_itu_pane_t2_ParamLimits

0x033e,	// (0x0006b64f) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0007ac50) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0007ac50) cell_vitu2_itu_pane_t

0x9409,	// (0x0007471a) bg_button_pane_cp011

0x5d88,	// (0x00071099) cell_vitu2_function_pane_g1

0x9417,	// (0x00074728) main_myfav_hc_pane

0x575b,	// (0x00070a6c) popup_image3_note_pane_ParamLimits

0x575b,	// (0x00070a6c) popup_image3_note_pane

0x5777,	// (0x00070a88) popup_image3_tool_bar_pane_ParamLimits

0x5777,	// (0x00070a88) popup_image3_tool_bar_pane

0x03cc,	// (0x0006b6dd) cell_vitu2_itu_pane_t3_ParamLimits

0x03cc,	// (0x0006b6dd) cell_vitu2_itu_pane_t3

0x9391,	// (0x000746a2) bg_popup_trans_pane

0xd72a,	// (0x00078a3b) grid_image3_tool_bar_pane

0xd734,	// (0x00078a45) bg_popup_trans_pane_g1

0xac85,	// (0x00075f96) bg_popup_trans_pane_g2

0xd73c,	// (0x00078a4d) bg_popup_trans_pane_g3

0xd744,	// (0x00078a55) bg_popup_trans_pane_g4

0xd74c,	// (0x00078a5d) bg_popup_trans_pane_g5

0xd754,	// (0x00078a65) bg_popup_trans_pane_g6

0xd75c,	// (0x00078a6d) bg_popup_trans_pane_g7

0xd764,	// (0x00078a75) bg_popup_trans_pane_g8

0xac65,	// (0x00075f76) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0007ac57) bg_popup_trans_pane_g

0xd76c,	// (0x00078a7d) cell_image3_tool_bar_pane_ParamLimits

0xd76c,	// (0x00078a7d) cell_image3_tool_bar_pane

0xccec,	// (0x00077ffd) cell_image3_tool_bar_pane_g1

0x9391,	// (0x000746a2) bg_popup_trans_pane_cp1

0xd780,	// (0x00078a91) popup_image3_note_pane_t1

0xd78e,	// (0x00078a9f) popup_image3_note_pane_t2

0xd79c,	// (0x00078aad) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0007ac6a) popup_image3_note_pane_t

0xd7aa,	// (0x00078abb) popup_image3_note_pane_t3_copy1

0x5d9c,	// (0x000710ad) bg_myfav_hc_instruction_pane_ParamLimits

0x5d9c,	// (0x000710ad) bg_myfav_hc_instruction_pane

0x5db0,	// (0x000710c1) cell_myfav_contact_pane_ParamLimits

0x5db0,	// (0x000710c1) cell_myfav_contact_pane

0x5dce,	// (0x000710df) cell_myfav_contact_pane_cp1_ParamLimits

0x5dce,	// (0x000710df) cell_myfav_contact_pane_cp1

0x5de6,	// (0x000710f7) cell_myfav_contact_pane_cp2_ParamLimits

0x5de6,	// (0x000710f7) cell_myfav_contact_pane_cp2

0x5dfe,	// (0x0007110f) cell_myfav_contact_pane_cp3_ParamLimits

0x5dfe,	// (0x0007110f) cell_myfav_contact_pane_cp3

0x5e15,	// (0x00071126) cell_myfav_contact_pane_cp4_ParamLimits

0x5e15,	// (0x00071126) cell_myfav_contact_pane_cp4

0x5e2d,	// (0x0007113e) cell_myfav_contact_pane_cp5_ParamLimits

0x5e2d,	// (0x0007113e) cell_myfav_contact_pane_cp5

0x5e41,	// (0x00071152) cell_myfav_contact_pane_cp6_ParamLimits

0x5e41,	// (0x00071152) cell_myfav_contact_pane_cp6

0x5e57,	// (0x00071168) cell_myfav_contact_pane_cp7_ParamLimits

0x5e57,	// (0x00071168) cell_myfav_contact_pane_cp7

0xd7b8,	// (0x00078ac9) listscroll_gen_pane_cp05

0x5e71,	// (0x00071182) main_myfav_hc_pane_g1_ParamLimits

0x5e71,	// (0x00071182) main_myfav_hc_pane_g1

0x5e8b,	// (0x0007119c) main_myfav_hc_pane_g2_ParamLimits

0x5e8b,	// (0x0007119c) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0007ac71) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0007ac71) main_myfav_hc_pane_g

0x5ebd,	// (0x000711ce) main_myfav_hc_pane_t1_ParamLimits

0x5ebd,	// (0x000711ce) main_myfav_hc_pane_t1

0xd7c1,	// (0x00078ad2) main_myfav_hc_pane_t2_ParamLimits

0xd7c1,	// (0x00078ad2) main_myfav_hc_pane_t2

0xd7d3,	// (0x00078ae4) main_myfav_hc_pane_t3_ParamLimits

0xd7d3,	// (0x00078ae4) main_myfav_hc_pane_t3

0x5ed4,	// (0x000711e5) main_myfav_hc_pane_t4_ParamLimits

0x5ed4,	// (0x000711e5) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0007ac78) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0007ac78) main_myfav_hc_pane_t

0xccec,	// (0x00077ffd) bg_myfav_hc_instruction_pane_g1

0xd7e5,	// (0x00078af6) cell_myfav_contact_pane_g1_ParamLimits

0xd7e5,	// (0x00078af6) cell_myfav_contact_pane_g1

0xd7e5,	// (0x00078af6) cell_myfav_contact_pane_g2_ParamLimits

0xd7e5,	// (0x00078af6) cell_myfav_contact_pane_g2

0xd7f1,	// (0x00078b02) cell_myfav_contact_pane_g3_ParamLimits

0xd7f1,	// (0x00078b02) cell_myfav_contact_pane_g3

0xcfab,	// (0x000782bc) cell_myfav_contact_pane_g4_ParamLimits

0xcfab,	// (0x000782bc) cell_myfav_contact_pane_g4

0xd7fe,	// (0x00078b0f) cell_myfav_contact_pane_g5_ParamLimits

0xd7fe,	// (0x00078b0f) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0007ac83) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0007ac83) cell_myfav_contact_pane_g

0x5ea5,	// (0x000711b6) main_myfav_hc_pane_g3_ParamLimits

0x5ea5,	// (0x000711b6) main_myfav_hc_pane_g3

0x05a1,	// (0x0006b8b2) popup_adpt_find_window

0x5efc,	// (0x0007120d) afind_page_pane_ParamLimits

0x5efc,	// (0x0007120d) afind_page_pane

0x5f11,	// (0x00071222) aid_size_cell_afind_ParamLimits

0x5f11,	// (0x00071222) aid_size_cell_afind

0x5f2f,	// (0x00071240) bg_popup_sub_pane_cp09_ParamLimits

0x5f2f,	// (0x00071240) bg_popup_sub_pane_cp09

0x5f3c,	// (0x0007124d) find_pane_cp01_ParamLimits

0x5f3c,	// (0x0007124d) find_pane_cp01

0xd80a,	// (0x00078b1b) grid_afind_control_pane_ParamLimits

0xd80a,	// (0x00078b1b) grid_afind_control_pane

0x5f49,	// (0x0007125a) grid_afind_pane_ParamLimits

0x5f49,	// (0x0007125a) grid_afind_pane

0x5f68,	// (0x00071279) cell_afind_pane_ParamLimits

0x5f68,	// (0x00071279) cell_afind_pane

0xccec,	// (0x00077ffd) afind_page_pane_g1

0x5fcf,	// (0x000712e0) afind_page_pane_g2

0x5fd8,	// (0x000712e9) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0007ac8e) afind_page_pane_g

0x5fe1,	// (0x000712f2) afind_page_pane_t1

0xd81e,	// (0x00078b2f) cell_afind_grid_control_pane_ParamLimits

0xd81e,	// (0x00078b2f) cell_afind_grid_control_pane

0xd603,	// (0x00078914) bg_button_pane_cp69_ParamLimits

0xd603,	// (0x00078914) bg_button_pane_cp69

0x6001,	// (0x00071312) cell_afind_pane_g1_ParamLimits

0x6001,	// (0x00071312) cell_afind_pane_g1

0x600e,	// (0x0007131f) cell_afind_pane_t1_ParamLimits

0x600e,	// (0x0007131f) cell_afind_pane_t1

0xaa7e,	// (0x00075d8f) bg_button_pane_cp72

0xd82d,	// (0x00078b3e) cell_afind_grid_control_pane_g1

0x3066,	// (0x0006e377) aid_image_placing_area_ParamLimits

0x3066,	// (0x0006e377) aid_image_placing_area

0xd2d1,	// (0x000785e2) field_vitu_entry_pane_g1_ParamLimits

0xd2d1,	// (0x000785e2) field_vitu_entry_pane_g1

0xd2dd,	// (0x000785ee) field_vitu_entry_pane_g2_ParamLimits

0xd2dd,	// (0x000785ee) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0007ab3f) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0007ab3f) field_vitu_entry_pane_g

0x51ba,	// (0x000704cb) cell_vitu_itu_pane_g1_ParamLimits

0x51fc,	// (0x0007050d) cell_vitu_itu_pane_t3_ParamLimits

0x51fc,	// (0x0007050d) cell_vitu_itu_pane_t3

0xd5b3,	// (0x000788c4) mp4_progress_pane_t1_ParamLimits

0xd5cc,	// (0x000788dd) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0007abd4) mp4_progress_pane_t_ParamLimits

0xd5e5,	// (0x000788f6) mup_progress_pane_cp04_ParamLimits

0x5ee8,	// (0x000711f9) main_myfav_hc_pane_t5_ParamLimits

0x5ee8,	// (0x000711f9) main_myfav_hc_pane_t5

0x93b7,	// (0x000746c8) aid_zoom_text_primary

0x05a1,	// (0x0006b8b2) popup_adpt_find_window_ParamLimits

0x9409,	// (0x0007471a) main_cam_set_pane

0x5928,	// (0x00070c39) cam4_zoom_pane_ParamLimits

0x5928,	// (0x00070c39) cam4_zoom_pane

0x6020,	// (0x00071331) main_cam_set_pane_g1_ParamLimits

0x6020,	// (0x00071331) main_cam_set_pane_g1

0x602e,	// (0x0007133f) main_cam_set_pane_g2_ParamLimits

0x602e,	// (0x0007133f) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0007ac95) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0007ac95) main_cam_set_pane_g

0x604f,	// (0x00071360) main_cam_set_pane_t1_ParamLimits

0x604f,	// (0x00071360) main_cam_set_pane_t1

0x606a,	// (0x0007137b) main_cset_listscroll_pane_ParamLimits

0x606a,	// (0x0007137b) main_cset_listscroll_pane

0x608a,	// (0x0007139b) main_cset_slider_pane_ParamLimits

0x608a,	// (0x0007139b) main_cset_slider_pane

0xd83e,	// (0x00078b4f) main_cset_list_pane_ParamLimits

0xd83e,	// (0x00078b4f) main_cset_list_pane

0xd84e,	// (0x00078b5f) scroll_pane_cp028

0x60b0,	// (0x000713c1) aid_area_touch_slider

0x60cc,	// (0x000713dd) cset_slider_pane

0x60f6,	// (0x00071407) main_cset_slider_pane_g1

0x610b,	// (0x0007141c) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0007ac9a) main_cset_slider_pane_g

0xd89f,	// (0x00078bb0) main_cset_slider_pane_t1

0x61af,	// (0x000714c0) main_cset_slider_pane_t2

0x61c9,	// (0x000714da) main_cset_slider_pane_t3

0x61e3,	// (0x000714f4) main_cset_slider_pane_t4

0x61fd,	// (0x0007150e) main_cset_slider_pane_t5

0x6217,	// (0x00071528) main_cset_slider_pane_t6

0x622c,	// (0x0007153d) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0007acbf) main_cset_slider_pane_t

0x6330,	// (0x00071641) cset_list_set_pane_ParamLimits

0x6330,	// (0x00071641) cset_list_set_pane

0x6342,	// (0x00071653) aid_position_infowindow_above

0x634a,	// (0x0007165b) aid_position_infowindow_below

0x6352,	// (0x00071663) cset_list_set_pane_g1_ParamLimits

0x6352,	// (0x00071663) cset_list_set_pane_g1

0x635e,	// (0x0007166f) cset_list_set_pane_g3_ParamLimits

0x635e,	// (0x0007166f) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0007acde) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0007acde) cset_list_set_pane_g

0x636d,	// (0x0007167e) cset_list_set_pane_t1_ParamLimits

0x636d,	// (0x0007167e) cset_list_set_pane_t1

0xb4c1,	// (0x000767d2) list_highlight_pane_cp021_ParamLimits

0xb4c1,	// (0x000767d2) list_highlight_pane_cp021

0xb5cf,	// (0x000768e0) cset_slider_pane_g1

0xb5e1,	// (0x000768f2) cset_slider_pane_g2

0xb5d8,	// (0x000768e9) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0007ace3) cset_slider_pane_g

0x9ac2,	// (0x00074dd3) aid_area_touch_cam4_zoom

0x9aca,	// (0x00074ddb) cam4_zoom_cont_pane

0x9ad2,	// (0x00074de3) cam4_zoom_pane_g1

0x9ada,	// (0x00074deb) cam4_zoom_pane_g2

0x6382,	// (0x00071693) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0007acea) cam4_zoom_pane_g

0x9ae2,	// (0x00074df3) cam4_zoom_cont_pane_g1

0x9aeb,	// (0x00074dfc) cam4_zoom_cont_pane_g2

0x9af4,	// (0x00074e05) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0007acf1) cam4_zoom_cont_pane_g

0x57e4,	// (0x00070af5) call4_image_pane_ParamLimits

0x57e4,	// (0x00070af5) call4_image_pane

0xd60f,	// (0x00078920) call4_windows_conf_pane_ParamLimits

0xd65e,	// (0x0007896f) popup_call4_audio_in_window_ParamLimits

0xd65e,	// (0x0007896f) popup_call4_audio_in_window

0x9391,	// (0x000746a2) bg_popup_call2_act_pane_cp02

0xd6a7,	// (0x000789b8) call4_list_conf_pane

0xccec,	// (0x00077ffd) call4_image_pane_g1

0xccec,	// (0x00077ffd) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0007aa00) call4_image_pane_g

0xd93f,	// (0x00078c50) list_single_graphic_popup_conf4_pane_ParamLimits

0xd93f,	// (0x00078c50) list_single_graphic_popup_conf4_pane

0x9391,	// (0x000746a2) list_highlight_pane_cp022

0xd952,	// (0x00078c63) list_single_graphic_popup_conf4_pane_g1

0xb1bd,	// (0x000764ce) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0007acf8) list_single_graphic_popup_conf4_pane_g

0xd95a,	// (0x00078c6b) list_single_graphic_popup_conf4_pane_t1

0x1698,	// (0x0006c9a9) popup_vtel_slider_window_ParamLimits

0x1698,	// (0x0006c9a9) popup_vtel_slider_window

0xd5f1,	// (0x00078902) dialer2_ne_pane_t2_ParamLimits

0xd5f1,	// (0x00078902) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0007abd9) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0007abd9) dialer2_ne_pane_t

0xcad1,	// (0x00077de2) bg_popup_sub_pane_cp010_ParamLimits

0xcad1,	// (0x00077de2) bg_popup_sub_pane_cp010

0x638a,	// (0x0007169b) popup_vtel_slider_window_g1_ParamLimits

0x638a,	// (0x0007169b) popup_vtel_slider_window_g1

0x639d,	// (0x000716ae) popup_vtel_slider_window_g2_ParamLimits

0x639d,	// (0x000716ae) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0007acfd) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0007acfd) popup_vtel_slider_window_g

0x63f3,	// (0x00071704) vtel_slider_pane_ParamLimits

0x63f3,	// (0x00071704) vtel_slider_pane

0x6415,	// (0x00071726) vtel_slider_pane_g1_ParamLimits

0x6415,	// (0x00071726) vtel_slider_pane_g1

0x6429,	// (0x0007173a) vtel_slider_pane_g2_ParamLimits

0x6429,	// (0x0007173a) vtel_slider_pane_g2

0x6441,	// (0x00071752) vtel_slider_pane_g3_ParamLimits

0x6441,	// (0x00071752) vtel_slider_pane_g3

0x6415,	// (0x00071726) vtel_slider_pane_g4_ParamLimits

0x6415,	// (0x00071726) vtel_slider_pane_g4

0x6457,	// (0x00071768) vtel_slider_pane_g5_ParamLimits

0x6457,	// (0x00071768) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0007ad06) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0007ad06) vtel_slider_pane_g

0x9409,	// (0x0007471a) main_gallery2_pane

0x5b28,	// (0x00070e39) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b28,	// (0x00070e39) aid_size_row_itut2_dropdow_list

0x5bb4,	// (0x00070ec5) grid_vitu2_function_top_pane_ParamLimits

0x5bb4,	// (0x00070ec5) grid_vitu2_function_top_pane

0x5c1e,	// (0x00070f2f) popup_vitu2_dropdown_list_window_ParamLimits

0x5c1e,	// (0x00070f2f) popup_vitu2_dropdown_list_window

0x5c47,	// (0x00070f58) popup_vitu2_match_list_window

0x647b,	// (0x0007178c) cell_vitu2_function_top_pane_ParamLimits

0x647b,	// (0x0007178c) cell_vitu2_function_top_pane

0x6493,	// (0x000717a4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6493,	// (0x000717a4) cell_vitu2_function_top_pane_cp01

0x64af,	// (0x000717c0) cell_vitu2_function_top_wide_pane_ParamLimits

0x64af,	// (0x000717c0) cell_vitu2_function_top_wide_pane

0x9409,	// (0x0007471a) bg_button_pane_cp012

0x64cb,	// (0x000717dc) cell_vitu2_function_top_pane_g1

0x9afd,	// (0x00074e0e) bg_button_pane_cp013_ParamLimits

0x9afd,	// (0x00074e0e) bg_button_pane_cp013

0x64df,	// (0x000717f0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x64df,	// (0x000717f0) cell_vitu2_function_top_wide_pane_g1

0x9409,	// (0x0007471a) bg_popup_sub_pane_cp20

0x64f7,	// (0x00071808) list_vitu2_match_list_pane

0xd734,	// (0x00078a45) bg_popup_sub_pane_cp20_g1

0xd73c,	// (0x00078a4d) bg_popup_sub_pane_cp20_g2

0xac85,	// (0x00075f96) bg_popup_sub_pane_cp20_g3

0xd744,	// (0x00078a55) bg_popup_sub_pane_cp20_g4

0xac65,	// (0x00075f76) bg_popup_sub_pane_cp20_g5

0xd970,	// (0x00078c81) bg_popup_sub_pane_cp20_g6

0xd754,	// (0x00078a65) bg_popup_sub_pane_cp20_g7

0xd75c,	// (0x00078a6d) bg_popup_sub_pane_cp20_g8

0xd764,	// (0x00078a75) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0007ad11) bg_popup_sub_pane_cp20_g

0x9b19,	// (0x00074e2a) list_vitu2_match_list_item_pane_ParamLimits

0x9b19,	// (0x00074e2a) list_vitu2_match_list_item_pane

0x9b2b,	// (0x00074e3c) list_vitu2_match_list_item_pane_t1

0x9417,	// (0x00074728) bg_popup_sub_pane_cp21

0x9b39,	// (0x00074e4a) grid_vitu2_dropdown_list_pane

0x6565,	// (0x00071876) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6565,	// (0x00071876) cell_vitu2_dropdown_list_char_pane

0x6586,	// (0x00071897) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6586,	// (0x00071897) cell_vitu2_dropdown_list_ctrl_pane

0xd978,	// (0x00078c89) cell_vitu2_dropdown_list_char_pane_g1

0xd981,	// (0x00078c92) cell_vitu2_dropdown_list_char_pane_g2

0xd98a,	// (0x00078c9b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0007ad2e) cell_vitu2_dropdown_list_char_pane_g

0x65b2,	// (0x000718c3) cell_vitu2_dropdown_list_char_pane_t1

0x65c0,	// (0x000718d1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x65c0,	// (0x000718d1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x65cd,	// (0x000718de) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x65cd,	// (0x000718de) cell_vitu2_dropdown_list_ctrl_pane_g2

0x65da,	// (0x000718eb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x65da,	// (0x000718eb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x65e7,	// (0x000718f8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x65e7,	// (0x000718f8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x99db,	// (0x00074cec) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x99db,	// (0x00074cec) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0007ad35) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0007ad35) cell_vitu2_dropdown_list_ctrl_pane_g

0x6603,	// (0x00071914) aid_size_cell_gallery2_ParamLimits

0x6603,	// (0x00071914) aid_size_cell_gallery2

0x6621,	// (0x00071932) grid_gallery2_pane_ParamLimits

0x6621,	// (0x00071932) grid_gallery2_pane

0x663b,	// (0x0007194c) scroll_pane_cp029_ParamLimits

0x663b,	// (0x0007194c) scroll_pane_cp029

0x664c,	// (0x0007195d) cell_gallery2_pane_ParamLimits

0x664c,	// (0x0007195d) cell_gallery2_pane

0xd993,	// (0x00078ca4) cell_gallery2_pane_g2

0x66ab,	// (0x000719bc) cell_gallery2_pane_g3

0xd99b,	// (0x00078cac) cell_gallery2_pane_g4

0xd9a3,	// (0x00078cb4) cell_gallery2_pane_g5

0xaa2c,	// (0x00075d3d) grid_highlight_pane_cp10

0x5c47,	// (0x00070f58) popup_vitu2_match_list_window_ParamLimits

0x5c5c,	// (0x00070f6d) popup_vitu2_query_window_ParamLimits

0x5c5c,	// (0x00070f6d) popup_vitu2_query_window

0x9417,	// (0x00074728) bg_vitu2_candi_button_pane

0xd978,	// (0x00078c89) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd981,	// (0x00078c92) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd98a,	// (0x00078c9b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x66b3,	// (0x000719c4) bg_button_pane_cp015

0x66c7,	// (0x000719d8) bg_button_pane_cp016

0x66da,	// (0x000719eb) bg_button_pane_cp017

0xc8e4,	// (0x00077bf5) bg_popup_sub_pane_cp22

0xd9ab,	// (0x00078cbc) popup_vitu2_query_window_g1

0x671f,	// (0x00071a30) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0007ad40) popup_vitu2_query_window_g

0x673e,	// (0x00071a4f) popup_vitu2_query_window_t1_ParamLimits

0x673e,	// (0x00071a4f) popup_vitu2_query_window_t1

0x6773,	// (0x00071a84) popup_vitu2_query_window_t2_ParamLimits

0x6773,	// (0x00071a84) popup_vitu2_query_window_t2

0x6785,	// (0x00071a96) popup_vitu2_query_window_t3_ParamLimits

0x6785,	// (0x00071a96) popup_vitu2_query_window_t3

0x67ad,	// (0x00071abe) popup_vitu2_query_window_t4_ParamLimits

0x67ad,	// (0x00071abe) popup_vitu2_query_window_t4

0x67ce,	// (0x00071adf) popup_vitu2_query_window_t5_ParamLimits

0x67ce,	// (0x00071adf) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0007ad47) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0007ad47) popup_vitu2_query_window_t

0xd836,	// (0x00078b47) main_cset_text_pane

0x60b0,	// (0x000713c1) aid_area_touch_slider_ParamLimits

0x60cc,	// (0x000713dd) cset_slider_pane_ParamLimits

0x60f6,	// (0x00071407) main_cset_slider_pane_g1_ParamLimits

0x610b,	// (0x0007141c) main_cset_slider_pane_g2_ParamLimits

0xd857,	// (0x00078b68) main_cset_slider_pane_g3_ParamLimits

0xd857,	// (0x00078b68) main_cset_slider_pane_g3

0x6120,	// (0x00071431) main_cset_slider_pane_g4_ParamLimits

0x6120,	// (0x00071431) main_cset_slider_pane_g4

0x612f,	// (0x00071440) main_cset_slider_pane_g5_ParamLimits

0x612f,	// (0x00071440) main_cset_slider_pane_g5

0x613b,	// (0x0007144c) main_cset_slider_pane_g6_ParamLimits

0x613b,	// (0x0007144c) main_cset_slider_pane_g6

0xf989,	// (0x0007ac9a) main_cset_slider_pane_g_ParamLimits

0xd89f,	// (0x00078bb0) main_cset_slider_pane_t1_ParamLimits

0x61af,	// (0x000714c0) main_cset_slider_pane_t2_ParamLimits

0x61c9,	// (0x000714da) main_cset_slider_pane_t3_ParamLimits

0x61e3,	// (0x000714f4) main_cset_slider_pane_t4_ParamLimits

0x61fd,	// (0x0007150e) main_cset_slider_pane_t5_ParamLimits

0x6217,	// (0x00071528) main_cset_slider_pane_t6_ParamLimits

0x622c,	// (0x0007153d) main_cset_slider_pane_t7_ParamLimits

0x6256,	// (0x00071567) main_cset_slider_pane_t8_ParamLimits

0x6256,	// (0x00071567) main_cset_slider_pane_t8

0x627e,	// (0x0007158f) main_cset_slider_pane_t9_ParamLimits

0x627e,	// (0x0007158f) main_cset_slider_pane_t9

0x62a6,	// (0x000715b7) main_cset_slider_pane_t10_ParamLimits

0x62a6,	// (0x000715b7) main_cset_slider_pane_t10

0x62ce,	// (0x000715df) main_cset_slider_pane_t11_ParamLimits

0x62ce,	// (0x000715df) main_cset_slider_pane_t11

0x62f6,	// (0x00071607) main_cset_slider_pane_t12_ParamLimits

0x62f6,	// (0x00071607) main_cset_slider_pane_t12

0x6313,	// (0x00071624) main_cset_slider_pane_t13_ParamLimits

0x6313,	// (0x00071624) main_cset_slider_pane_t13

0xf9ae,	// (0x0007acbf) main_cset_slider_pane_t_ParamLimits

0x9391,	// (0x000746a2) bg_popup_sub_pane_cp011

0xd9b7,	// (0x00078cc8) main_cset_text_pane_g1

0xd9bf,	// (0x00078cd0) main_cset_text_pane_t1

0xd9cd,	// (0x00078cde) main_cset_text_pane_t2

0xd9db,	// (0x00078cec) main_cset_text_pane_t3

0xd9e9,	// (0x00078cfa) main_cset_text_pane_t4

0xd9f7,	// (0x00078d08) main_cset_text_pane_t5

0xda05,	// (0x00078d16) main_cset_text_pane_t6

0xda13,	// (0x00078d24) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0007ad56) main_cset_text_pane_t

0x9417,	// (0x00074728) main_cam4_burst_pane

0x9417,	// (0x00074728) main_cam5_pane

0x5fef,	// (0x00071300) bg_button_pane_cp019

0x5ff8,	// (0x00071309) bg_button_pane_cp020

0xd863,	// (0x00078b74) main_cset_slider_pane_g7_ParamLimits

0xd863,	// (0x00078b74) main_cset_slider_pane_g7

0xd86f,	// (0x00078b80) main_cset_slider_pane_g8_ParamLimits

0xd86f,	// (0x00078b80) main_cset_slider_pane_g8

0x614f,	// (0x00071460) main_cset_slider_pane_g9_ParamLimits

0x614f,	// (0x00071460) main_cset_slider_pane_g9

0x615b,	// (0x0007146c) main_cset_slider_pane_g10_ParamLimits

0x615b,	// (0x0007146c) main_cset_slider_pane_g10

0x6167,	// (0x00071478) main_cset_slider_pane_g11_ParamLimits

0x6167,	// (0x00071478) main_cset_slider_pane_g11

0x6173,	// (0x00071484) main_cset_slider_pane_g12_ParamLimits

0x6173,	// (0x00071484) main_cset_slider_pane_g12

0x617f,	// (0x00071490) main_cset_slider_pane_g13_ParamLimits

0x617f,	// (0x00071490) main_cset_slider_pane_g13

0x618b,	// (0x0007149c) main_cset_slider_pane_g14_ParamLimits

0x618b,	// (0x0007149c) main_cset_slider_pane_g14

0x6197,	// (0x000714a8) main_cset_slider_pane_g15_ParamLimits

0x6197,	// (0x000714a8) main_cset_slider_pane_g15

0xd8cd,	// (0x00078bde) main_cset_slider_pane_t14_ParamLimits

0xd8cd,	// (0x00078bde) main_cset_slider_pane_t14

0xd906,	// (0x00078c17) main_cset_slider_pane_t15_ParamLimits

0xd906,	// (0x00078c17) main_cset_slider_pane_t15

0x6845,	// (0x00071b56) aid_cam4_burst_size_cell_ParamLimits

0x6845,	// (0x00071b56) aid_cam4_burst_size_cell

0x6865,	// (0x00071b76) grid_cam4_burst_pane_ParamLimits

0x6865,	// (0x00071b76) grid_cam4_burst_pane

0x689d,	// (0x00071bae) linegrid_cam4_burst_pane_ParamLimits

0x689d,	// (0x00071bae) linegrid_cam4_burst_pane

0xda21,	// (0x00078d32) scroll_pane_cp30_ParamLimits

0xda21,	// (0x00078d32) scroll_pane_cp30

0x68c1,	// (0x00071bd2) cell_cam4_burst_pane_ParamLimits

0x68c1,	// (0x00071bd2) cell_cam4_burst_pane

0xda2d,	// (0x00078d3e) linegrid_cam4_burst_pane_g1_ParamLimits

0xda2d,	// (0x00078d3e) linegrid_cam4_burst_pane_g1

0x690e,	// (0x00071c1f) linegrid_cam4_burst_pane_g2_ParamLimits

0x690e,	// (0x00071c1f) linegrid_cam4_burst_pane_g2

0xda3a,	// (0x00078d4b) linegrid_cam4_burst_pane_g3_ParamLimits

0xda3a,	// (0x00078d4b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0007ad65) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0007ad65) linegrid_cam4_burst_pane_g

0x691f,	// (0x00071c30) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x691f,	// (0x00071c30) linegrid_cam4_burst_pane_g3_copy1

0xda47,	// (0x00078d58) linegrid_cam4_burst_pane_g4_ParamLimits

0xda47,	// (0x00078d58) linegrid_cam4_burst_pane_g4

0x6939,	// (0x00071c4a) linegrid_cam4_burst_pane_g5_ParamLimits

0x6939,	// (0x00071c4a) linegrid_cam4_burst_pane_g5

0x694a,	// (0x00071c5b) linegrid_cam4_burst_pane_g6_ParamLimits

0x694a,	// (0x00071c5b) linegrid_cam4_burst_pane_g6

0xda54,	// (0x00078d65) linegrid_cam4_burst_pane_g7_ParamLimits

0xda54,	// (0x00078d65) linegrid_cam4_burst_pane_g7

0x6961,	// (0x00071c72) cell_cam4_burst_pane_g1

0xda6d,	// (0x00078d7e) main_cam5_pane_t1_ParamLimits

0xda6d,	// (0x00078d7e) main_cam5_pane_t1

0xda7f,	// (0x00078d90) main_cam5_pane_t2_ParamLimits

0xda7f,	// (0x00078d90) main_cam5_pane_t2

0xda91,	// (0x00078da2) main_cam5_pane_t3_ParamLimits

0xda91,	// (0x00078da2) main_cam5_pane_t3

0xdaa3,	// (0x00078db4) main_cam5_pane_t4_ParamLimits

0xdaa3,	// (0x00078db4) main_cam5_pane_t4

0xdabb,	// (0x00078dcc) main_cam5_pane_t5_ParamLimits

0xdabb,	// (0x00078dcc) main_cam5_pane_t5

0xdacf,	// (0x00078de0) main_cam5_pane_t6_ParamLimits

0xdacf,	// (0x00078de0) main_cam5_pane_t6

0xdae3,	// (0x00078df4) main_cam5_pane_t7_ParamLimits

0xdae3,	// (0x00078df4) main_cam5_pane_t7

0xdaf5,	// (0x00078e06) main_cam5_pane_t8_ParamLimits

0xdaf5,	// (0x00078e06) main_cam5_pane_t8

0xdb11,	// (0x00078e22) main_cam5_pane_t9_ParamLimits

0xdb11,	// (0x00078e22) main_cam5_pane_t9

0xdb23,	// (0x00078e34) main_cam5_pane_t10_ParamLimits

0xdb23,	// (0x00078e34) main_cam5_pane_t10

0xdb35,	// (0x00078e46) main_cam5_pane_t11_ParamLimits

0xdb35,	// (0x00078e46) main_cam5_pane_t11

0xdb47,	// (0x00078e58) main_cam5_pane_t12_ParamLimits

0xdb47,	// (0x00078e58) main_cam5_pane_t12

0xdb5c,	// (0x00078e6d) main_cam5_pane_t13_ParamLimits

0xdb5c,	// (0x00078e6d) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0007ad71) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0007ad71) main_cam5_pane_t

0x0623,	// (0x0006b934) popup_scut_keymap_window_ParamLimits

0x0623,	// (0x0006b934) popup_scut_keymap_window

0x6974,	// (0x00071c85) aid_size_cell_brow_shortcut

0xaa2c,	// (0x00075d3d) bg_popup_window_pane_cp010

0x6980,	// (0x00071c91) grid_scut_pane

0x698c,	// (0x00071c9d) cell_scut_pane_ParamLimits

0x698c,	// (0x00071c9d) cell_scut_pane

0x69a3,	// (0x00071cb4) cell_scut_pane_g1

0xdb79,	// (0x00078e8a) cell_scut_pane_t1

0xdb88,	// (0x00078e99) cell_scut_pane_t2

0x69ac,	// (0x00071cbd) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0007ad8c) cell_scut_pane_t

0x46af,	// (0x0006f9c0) main_mup3_pane_g8_ParamLimits

0x46af,	// (0x0006f9c0) main_mup3_pane_g8

0x5b40,	// (0x00070e51) area_vitu2_query_pane_ParamLimits

0x5b40,	// (0x00070e51) area_vitu2_query_pane

0x66ed,	// (0x000719fe) input_focus_pane_cp08

0xdb97,	// (0x00078ea8) area_vitu2_query_pane_g1

0x69ba,	// (0x00071ccb) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0007ad93) area_vitu2_query_pane_g

0x69cb,	// (0x00071cdc) area_vitu2_query_pane_t1_ParamLimits

0x69cb,	// (0x00071cdc) area_vitu2_query_pane_t1

0x69df,	// (0x00071cf0) area_vitu2_query_pane_t2_ParamLimits

0x69df,	// (0x00071cf0) area_vitu2_query_pane_t2

0x69f3,	// (0x00071d04) area_vitu2_query_pane_t3_ParamLimits

0x69f3,	// (0x00071d04) area_vitu2_query_pane_t3

0x9fe5,	// (0x000752f6) area_vitu2_query_pane_t4_ParamLimits

0x9fe5,	// (0x000752f6) area_vitu2_query_pane_t4

0xa00d,	// (0x0007531e) area_vitu2_query_pane_t5_ParamLimits

0xa00d,	// (0x0007531e) area_vitu2_query_pane_t5

0xa035,	// (0x00075346) area_vitu2_query_pane_t6_ParamLimits

0xa035,	// (0x00075346) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0007ad98) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0007ad98) area_vitu2_query_pane_t

0x6a1b,	// (0x00071d2c) bg_button_pane_cp018

0x6a29,	// (0x00071d3a) bg_button_pane_cp021

0x6a35,	// (0x00071d46) bg_button_pane_cp022

0x6a46,	// (0x00071d57) input_focus_pane_cp09

0xb2cc,	// (0x000765dd) aid_size_touch_mv_arrow_left

0xb2f7,	// (0x00076608) aid_size_touch_mv_arrow_right

0xd87b,	// (0x00078b8c) main_cset_slider_pane_g16_ParamLimits

0xd87b,	// (0x00078b8c) main_cset_slider_pane_g16

0xd887,	// (0x00078b98) main_cset_slider_pane_g17_ParamLimits

0xd887,	// (0x00078b98) main_cset_slider_pane_g17

0x6961,	// (0x00071c72) cell_cam4_burst_pane_g1_ParamLimits

0x9391,	// (0x000746a2) compa_mode_pane

0x63ad,	// (0x000716be) popup_vtel_slider_window_g3_ParamLimits

0x63ad,	// (0x000716be) popup_vtel_slider_window_g3

0x63c4,	// (0x000716d5) popup_vtel_slider_window_g4_ParamLimits

0x63c4,	// (0x000716d5) popup_vtel_slider_window_g4

0x63db,	// (0x000716ec) popup_vtel_slider_window_t1_ParamLimits

0x63db,	// (0x000716ec) popup_vtel_slider_window_t1

0x9417,	// (0x00074728) main_cl_pane

0x9619,	// (0x0007492a) popup_imed_adjust2_window_ParamLimits

0xc8e4,	// (0x00077bf5) bg_tb_trans_pane_cp05_ParamLimits

0xd206,	// (0x00078517) popup_imed_adjust2_window_g1_ParamLimits

0xd215,	// (0x00078526) popup_imed_adjust2_window_g2_ParamLimits

0xd215,	// (0x00078526) popup_imed_adjust2_window_g2

0xd221,	// (0x00078532) popup_imed_adjust2_window_g3_ParamLimits

0xd221,	// (0x00078532) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0007ab03) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0007ab03) popup_imed_adjust2_window_g

0xd22d,	// (0x0007853e) popup_imed_adjust2_window_t1_ParamLimits

0xd245,	// (0x00078556) slider_imed_adjust_pane_ParamLimits

0xd259,	// (0x0007856a) slider_imed_adjust_pane_g1_ParamLimits

0xd269,	// (0x0007857a) slider_imed_adjust_pane_g2_ParamLimits

0xd279,	// (0x0007858a) slider_imed_adjust_pane_g3_ParamLimits

0xd28a,	// (0x0007859b) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0007ab0a) slider_imed_adjust_pane_g_ParamLimits

0x58c9,	// (0x00070bda) aid_touch_area_cam4_ParamLimits

0x58c9,	// (0x00070bda) aid_touch_area_cam4

0x99bf,	// (0x00074cd0) battery_pane_cp01

0x5998,	// (0x00070ca9) main_camera4_pane_g6_ParamLimits

0x5998,	// (0x00070ca9) main_camera4_pane_g6

0x59c2,	// (0x00070cd3) main_camera4_pane_t2_ParamLimits

0x59c2,	// (0x00070cd3) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0007ac0d) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0007ac0d) main_camera4_pane_t

0x59f7,	// (0x00070d08) aid_touch_area_vid4_ParamLimits

0x59f7,	// (0x00070d08) aid_touch_area_vid4

0x5a4b,	// (0x00070d5c) main_video4_pane_g5_ParamLimits

0x5a4b,	// (0x00070d5c) main_video4_pane_g5

0x5a70,	// (0x00070d81) vid4_progress_pane_ParamLimits

0x5a70,	// (0x00070d81) vid4_progress_pane

0xd893,	// (0x00078ba4) main_cset_slider_pane_g18_ParamLimits

0xd893,	// (0x00078ba4) main_cset_slider_pane_g18

0xda61,	// (0x00078d72) cell_cam4_burst_pane_g2_ParamLimits

0xda61,	// (0x00078d72) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0007ad6c) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0007ad6c) cell_cam4_burst_pane_g

0xa855,	// (0x00075b66) bg_cl_pane_ParamLimits

0xa855,	// (0x00075b66) bg_cl_pane

0x6a57,	// (0x00071d68) cl_header_pane_ParamLimits

0x6a57,	// (0x00071d68) cl_header_pane

0x6a6b,	// (0x00071d7c) cl_listscroll_pane_ParamLimits

0x6a6b,	// (0x00071d7c) cl_listscroll_pane

0xdba3,	// (0x00078eb4) bg_cl_pane_g1

0xdbab,	// (0x00078ebc) bg_cl_pane_g2

0xdbb3,	// (0x00078ec4) bg_cl_pane_g3

0xdbbb,	// (0x00078ecc) bg_cl_pane_g4

0xdbc3,	// (0x00078ed4) bg_cl_pane_g5

0xdbcb,	// (0x00078edc) bg_cl_pane_g6

0xdbd3,	// (0x00078ee4) bg_cl_pane_g7

0xdbdb,	// (0x00078eec) bg_cl_pane_g8

0xdbe3,	// (0x00078ef4) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0007ada7) bg_cl_pane_g

0x6a7b,	// (0x00071d8c) aid_height_cl_leading_ParamLimits

0x6a7b,	// (0x00071d8c) aid_height_cl_leading

0x6a87,	// (0x00071d98) aid_height_cl_text_ParamLimits

0x6a87,	// (0x00071d98) aid_height_cl_text

0xb4c1,	// (0x000767d2) bg_cl_header_pane_ParamLimits

0xb4c1,	// (0x000767d2) bg_cl_header_pane

0x6aa6,	// (0x00071db7) cl_header_pane_g1_ParamLimits

0x6aa6,	// (0x00071db7) cl_header_pane_g1

0x6abc,	// (0x00071dcd) cl_header_pane_t1_ParamLimits

0x6abc,	// (0x00071dcd) cl_header_pane_t1

0xdbeb,	// (0x00078efc) cl_list_pane

0xd84e,	// (0x00078b5f) hc_scroll_pane_cp01

0xac65,	// (0x00075f76) bg_cl_header_pane_g1

0xd734,	// (0x00078a45) bg_cl_header_pane_g2

0xac85,	// (0x00075f96) bg_cl_header_pane_g3

0xd744,	// (0x00078a55) bg_cl_header_pane_g4

0xd73c,	// (0x00078a4d) bg_cl_header_pane_g5

0xd970,	// (0x00078c81) bg_cl_header_pane_g6

0xd75c,	// (0x00078a6d) bg_cl_header_pane_g7

0xd764,	// (0x00078a75) bg_cl_header_pane_g8

0xd754,	// (0x00078a65) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0007adba) bg_cl_header_pane_g

0x6ad5,	// (0x00071de6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6ad5,	// (0x00071de6) hc_cl_list_double_graphic_heading_pane

0x6ae6,	// (0x00071df7) hc_cl_list_single_graphic_pane_ParamLimits

0x6ae6,	// (0x00071df7) hc_cl_list_single_graphic_pane

0x6aff,	// (0x00071e10) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6aff,	// (0x00071e10) hc_cl_list_single_graphic_pane_g1

0x6b0b,	// (0x00071e1c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b0b,	// (0x00071e1c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0007adcd) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0007adcd) hc_cl_list_single_graphic_pane_g

0x6b1f,	// (0x00071e30) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b1f,	// (0x00071e30) hc_cl_list_single_graphic_pane_t1

0x6aff,	// (0x00071e10) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6aff,	// (0x00071e10) hc_cl_list_double_graphic_heading_pane_g1

0x6b34,	// (0x00071e45) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b34,	// (0x00071e45) hc_cl_list_double_graphic_heading_pane_g2

0x6b48,	// (0x00071e59) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b48,	// (0x00071e59) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0007add2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0007add2) hc_cl_list_double_graphic_heading_pane_g

0x6b5c,	// (0x00071e6d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6b5c,	// (0x00071e6d) hc_cl_list_double_graphic_heading_pane_t1

0x6b71,	// (0x00071e82) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6b71,	// (0x00071e82) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0007add9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0007add9) hc_cl_list_double_graphic_heading_pane_t

0x9b49,	// (0x00074e5a) vid4_progress_pane_g1

0x9b59,	// (0x00074e6a) vid4_progress_pane_g2

0x6b86,	// (0x00071e97) vid4_progress_pane_g3

0x9b69,	// (0x00074e7a) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0007adde) vid4_progress_pane_g

0x6b98,	// (0x00071ea9) vid4_progress_pane_t1

0x9b81,	// (0x00074e92) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0007ade9) vid4_progress_pane_t

0x6bae,	// (0x00071ebf) wait_bar_pane_cp07

0xcadf,	// (0x00077df0) blid_firmament_pane_ParamLimits

0xcb22,	// (0x00077e33) popup_blid_sat_info2_window_g1

0xcb46,	// (0x00077e57) popup_blid_sat_info2_window_t3

0xcb54,	// (0x00077e65) popup_blid_sat_info2_window_t4

0xcb62,	// (0x00077e73) popup_blid_sat_info2_window_t5

0xcb70,	// (0x00077e81) popup_blid_sat_info2_window_t6

0xcb80,	// (0x00077e91) popup_blid_sat_info2_window_t7

0xcb8e,	// (0x00077e9f) popup_blid_sat_info2_window_t8

0xcb9c,	// (0x00077ead) popup_blid_sat_info2_window_t9

0xcbaa,	// (0x00077ebb) popup_blid_sat_info2_window_t10

0xcc6c,	// (0x00077f7d) aid_firma_cardinal_ParamLimits

0xcc80,	// (0x00077f91) blid_firmament_pane_t1_ParamLimits

0xcc97,	// (0x00077fa8) blid_firmament_pane_t2_ParamLimits

0xccae,	// (0x00077fbf) blid_firmament_pane_t3_ParamLimits

0xccc5,	// (0x00077fd6) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0007a9f7) blid_firmament_pane_t_ParamLimits

0xccdc,	// (0x00077fed) blid_sat_info_pane_ParamLimits

0x9409,	// (0x0007471a) main_cam_set_pane_ParamLimits

0x4f72,	// (0x00070283) aid_size_cell_colour_35_ParamLimits

0x4f92,	// (0x000702a3) aid_size_cell_colour_112_ParamLimits

0x4fb2,	// (0x000702c3) aid_size_cell_effect_ParamLimits

0xc8e4,	// (0x00077bf5) bg_tb_trans_pane_cp02_ParamLimits

0xaeeb,	// (0x000761fc) heading_imed_pane_ParamLimits

0x4fd2,	// (0x000702e3) listscroll_imed_pane_ParamLimits

0xbeca,	// (0x000771db) popup_call2_audio_first_window_g5_ParamLimits

0xbeca,	// (0x000771db) popup_call2_audio_first_window_g5

0x5570,	// (0x00070881) aid_size_touch_image3_arrow_left_ParamLimits

0x5570,	// (0x00070881) aid_size_touch_image3_arrow_left

0x559c,	// (0x000708ad) aid_size_touch_image3_arrow_right_ParamLimits

0x559c,	// (0x000708ad) aid_size_touch_image3_arrow_right

0x9b96,	// (0x00074ea7) vid4_progress_pane_t3

0x52e7,	// (0x000705f8) main_hwr_training_symbol_option_pane_ParamLimits

0x52e7,	// (0x000705f8) main_hwr_training_symbol_option_pane

0xd4f3,	// (0x00078804) popup_hwr_training_preview_window_ParamLimits

0xd4f3,	// (0x00078804) popup_hwr_training_preview_window

0x5307,	// (0x00070618) hwr_training_navi_pane_g5_ParamLimits

0x5307,	// (0x00070618) hwr_training_navi_pane_g5

0xd722,	// (0x00078a33) popup_char_count_window

0x9409,	// (0x0007471a) bg_popup_sub_pane_cp20_ParamLimits

0x64f7,	// (0x00071808) list_vitu2_match_list_pane_ParamLimits

0x6506,	// (0x00071817) vitu2_page_scroll_pane_ParamLimits

0x6506,	// (0x00071817) vitu2_page_scroll_pane

0xdbf4,	// (0x00078f05) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbf4,	// (0x00078f05) list_single_hwr_training_symbol_option_pane

0xdc07,	// (0x00078f18) list_single_hwr_training_symbol_option_pane_g1

0xdc0f,	// (0x00078f20) list_single_hwr_training_symbol_option_pane_t1

0xdc1d,	// (0x00078f2e) bg_button_pane_cp023

0xdc26,	// (0x00078f37) bg_button_pane_cp024

0x6bee,	// (0x00071eff) vitu2_page_scroll_pane_g1

0x6bf6,	// (0x00071f07) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0007adf0) vitu2_page_scroll_pane_g

0x6bfe,	// (0x00071f0f) vitu2_page_scroll_pane_t1

0xcd15,	// (0x00078026) popup_char_count_window_g1

0xdc59,	// (0x00078f6a) popup_char_count_window_g2

0xdc62,	// (0x00078f73) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0007adf5) popup_char_count_window_g

0xdc6b,	// (0x00078f7c) popup_char_count_window_t1

0x9417,	// (0x00074728) main_vded2_pane

0xd1f2,	// (0x00078503) aid_size_cell_imed_line

0xd1fc,	// (0x0007850d) grid_imed_line_width_pane

0x9a7d,	// (0x00074d8e) vid4_indicators_pane_g4

0xdc79,	// (0x00078f8a) cell_imed_line_width_pane_ParamLimits

0xdc79,	// (0x00078f8a) cell_imed_line_width_pane

0xdc8d,	// (0x00078f9e) cell_imed_line_width_pane_g1

0xd64c,	// (0x0007895d) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0007adfc) cell_imed_line_width_pane_g

0x6c0d,	// (0x00071f1e) main_vded2_pane_g1_ParamLimits

0x6c0d,	// (0x00071f1e) main_vded2_pane_g1

0x6c23,	// (0x00071f34) main_vded2_pane_g2_ParamLimits

0x6c23,	// (0x00071f34) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0007ae01) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0007ae01) main_vded2_pane_g

0x6c35,	// (0x00071f46) vded2_slider_pane_ParamLimits

0x6c35,	// (0x00071f46) vded2_slider_pane

0x6c45,	// (0x00071f56) aid_size_touch_vded2_end

0x6c4f,	// (0x00071f60) aid_size_touch_vded2_playhead

0xdc96,	// (0x00078fa7) aid_size_touch_vded2_start

0xdc9e,	// (0x00078faf) vded2_slider_bg_pane

0xdca7,	// (0x00078fb8) vded2_slider_pane_g1

0xdcb0,	// (0x00078fc1) vded2_slider_pane_g2

0x6c59,	// (0x00071f6a) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0007ae06) vded2_slider_pane_g

0xdcb8,	// (0x00078fc9) vded2_slider_bg_pane_g1

0xdcc1,	// (0x00078fd2) vded2_slider_bg_pane_g2

0xdcca,	// (0x00078fdb) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0007ae0d) vded2_slider_bg_pane_g

0x2cd4,	// (0x0006dfe5) aid_postcard_touch_down_pane_ParamLimits

0x2cd4,	// (0x0006dfe5) aid_postcard_touch_down_pane

0x2cea,	// (0x0006dffb) aid_postcard_touch_up_pane_ParamLimits

0x2cea,	// (0x0006dffb) aid_postcard_touch_up_pane

0x9417,	// (0x00074728) main_blid2_pane

0x95ff,	// (0x00074910) popup_blid2_search_window

0x9391,	// (0x000746a2) blid2_gps_pane

0x9391,	// (0x000746a2) blid2_navig_pane

0x9391,	// (0x000746a2) blid2_search_pane

0x9391,	// (0x000746a2) blid2_tripm_pane

0x6c64,	// (0x00071f75) blid2_search_pane_g1_ParamLimits

0x6c64,	// (0x00071f75) blid2_search_pane_g1

0x6c7c,	// (0x00071f8d) blid2_search_pane_t1_ParamLimits

0x6c7c,	// (0x00071f8d) blid2_search_pane_t1

0x6c8e,	// (0x00071f9f) aid_size_cell_blid2_gps_ParamLimits

0x6c8e,	// (0x00071f9f) aid_size_cell_blid2_gps

0x6ca6,	// (0x00071fb7) blid2_gps_pane_g1_ParamLimits

0x6ca6,	// (0x00071fb7) blid2_gps_pane_g1

0x6cba,	// (0x00071fcb) grid_blid2_satellite_pane_ParamLimits

0x6cba,	// (0x00071fcb) grid_blid2_satellite_pane

0x6cd4,	// (0x00071fe5) blid2_navig_pane_g1_ParamLimits

0x6cd4,	// (0x00071fe5) blid2_navig_pane_g1

0x6ce0,	// (0x00071ff1) blid2_navig_pane_t1_ParamLimits

0x6ce0,	// (0x00071ff1) blid2_navig_pane_t1

0x6cfb,	// (0x0007200c) blid2_navig_pane_t2_ParamLimits

0x6cfb,	// (0x0007200c) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0007ae14) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0007ae14) blid2_navig_pane_t

0x6d16,	// (0x00072027) blid2_navig_ring_pane_ParamLimits

0x6d16,	// (0x00072027) blid2_navig_ring_pane

0x6d2f,	// (0x00072040) blid2_speed_pane_ParamLimits

0x6d2f,	// (0x00072040) blid2_speed_pane

0x6d3b,	// (0x0007204c) blid2_tripm_pane_g1_ParamLimits

0x6d3b,	// (0x0007204c) blid2_tripm_pane_g1

0x6d56,	// (0x00072067) blid2_tripm_pane_g2_ParamLimits

0x6d56,	// (0x00072067) blid2_tripm_pane_g2

0x6d6a,	// (0x0007207b) blid2_tripm_pane_g3_ParamLimits

0x6d6a,	// (0x0007207b) blid2_tripm_pane_g3

0x6d7e,	// (0x0007208f) blid2_tripm_pane_g4_ParamLimits

0x6d7e,	// (0x0007208f) blid2_tripm_pane_g4

0x6d92,	// (0x000720a3) blid2_tripm_pane_g5_ParamLimits

0x6d92,	// (0x000720a3) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0007ae19) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0007ae19) blid2_tripm_pane_g

0x6db8,	// (0x000720c9) blid2_tripm_pane_t1_ParamLimits

0x6db8,	// (0x000720c9) blid2_tripm_pane_t1

0x6dd3,	// (0x000720e4) blid2_tripm_pane_t2_ParamLimits

0x6dd3,	// (0x000720e4) blid2_tripm_pane_t2

0x6dec,	// (0x000720fd) blid2_tripm_pane_t3_ParamLimits

0x6dec,	// (0x000720fd) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0007ae26) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0007ae26) blid2_tripm_pane_t

0x6e33,	// (0x00072144) cell_blid2_satellite_pane_ParamLimits

0x6e33,	// (0x00072144) cell_blid2_satellite_pane

0x6e51,	// (0x00072162) cell_blid2_satellite_pane_g1

0xdcd3,	// (0x00078fe4) cell_blid2_satellite_pane_t1

0xccec,	// (0x00077ffd) blid2_speed_pane_g1

0xdce1,	// (0x00078ff2) blid2_speed_pane_t1

0xdcef,	// (0x00079000) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0007ae2f) blid2_speed_pane_t

0xccec,	// (0x00077ffd) blid2_navig_ring_pane_g1

0x6e5a,	// (0x0007216b) blid2_navig_ring_pane_g2

0x6e62,	// (0x00072173) blid2_navig_ring_pane_g3

0x6e6a,	// (0x0007217b) blid2_navig_ring_pane_g4

0x6e72,	// (0x00072183) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0007ae34) blid2_navig_ring_pane_g

0x9391,	// (0x000746a2) bg_popup_window_pane_cp011

0xdcfd,	// (0x0007900e) popup_blid2_search_window_g1

0xdd05,	// (0x00079016) popup_blid2_search_window_t1

0xdd13,	// (0x00079024) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0007ae3f) popup_blid2_search_window_t

0xab74,	// (0x00075e85) main_browser_pane_g1

0xa855,	// (0x00075b66) main_browser_pane_ParamLimits

0x9409,	// (0x0007471a) bg_button_pane_cp011_ParamLimits

0x5d88,	// (0x00071099) cell_vitu2_function_pane_g1_ParamLimits

0xc8e4,	// (0x00077bf5) bg_popup_sub_pane_cp22_ParamLimits

0x66ed,	// (0x000719fe) input_focus_pane_cp08_ParamLimits

0x6704,	// (0x00071a15) popup_vitu2_query_button_pane_ParamLimits

0x6704,	// (0x00071a15) popup_vitu2_query_button_pane

0x6715,	// (0x00071a26) popup_vitu2_query_input_button_pane

0xd9ab,	// (0x00078cbc) popup_vitu2_query_window_g1_ParamLimits

0x671f,	// (0x00071a30) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0007ad40) popup_vitu2_query_window_g_ParamLimits

0x9391,	// (0x000746a2) bg_button_pane_cp026

0x6e7a,	// (0x0007218b) popup_vitu2_query_input_button_pane_g1

0x9391,	// (0x000746a2) bg_button_pane_cp025

0xdd21,	// (0x00079032) popup_vitu2_query_button_pane_t1

0x437d,	// (0x0006f68e) main_mp3_pane_t6

0x438b,	// (0x0006f69c) popup_slider_window_cp01

0x99e9,	// (0x00074cfa) cam4_battery_pane

0x9a3c,	// (0x00074d4d) cam4_battery_pane_cp02

0x9b41,	// (0x00074e52) cam4_battery_pane_cp01

0x9b41,	// (0x00074e52) cam4_battery_pane_cp03

0xd654,	// (0x00078965) cam4_battery_pane_g1

0xccec,	// (0x00077ffd) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0007ae44) cam4_battery_pane_g

0xcbb8,	// (0x00077ec9) popup_blid_sat_info2_window_t11

0xb2cc,	// (0x000765dd) aid_size_touch_mv_arrow_left_ParamLimits

0xb2f7,	// (0x00076608) aid_size_touch_mv_arrow_right_ParamLimits

0xb355,	// (0x00076666) navi_pane_g1_ParamLimits

0xb361,	// (0x00076672) navi_pane_g2_ParamLimits

0xb38f,	// (0x000766a0) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007a6f6) navi_pane_g_ParamLimits

0x2781,	// (0x0006da92) navi_pane_mv_t1_ParamLimits

0x4fde,	// (0x000702ef) grid_imed_effect_pane_ParamLimits

0x1595,	// (0x0006c8a6) aid_placing_vt_slider_lsc

0xaac3,	// (0x00075dd4) aid_placing_vt_slider_prt

0xb4c1,	// (0x000767d2) bg_tb_trans_pane_cp01_ParamLimits

0xce66,	// (0x00078177) popup_image_details_window_g1_ParamLimits

0xce79,	// (0x0007818a) popup_image_details_window_g2_ParamLimits

0xce8e,	// (0x0007819f) popup_image_details_window_g3_ParamLimits

0xce8e,	// (0x0007819f) popup_image_details_window_g3

0xf72b,	// (0x0007aa3c) popup_image_details_window_g_ParamLimits

0xcea2,	// (0x000781b3) popup_image_details_window_t1_ParamLimits

0xceb4,	// (0x000781c5) popup_image_details_window_t2_ParamLimits

0xcecd,	// (0x000781de) popup_image_details_window_t3_ParamLimits

0xcee1,	// (0x000781f2) popup_image_details_window_t4_ParamLimits

0xcefc,	// (0x0007820d) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0007aa43) popup_image_details_window_t_ParamLimits

0x6a93,	// (0x00071da4) cl_header_name_pane_ParamLimits

0x6a93,	// (0x00071da4) cl_header_name_pane

0x6e82,	// (0x00072193) cl_header_name_pane_t1_ParamLimits

0x6e82,	// (0x00072193) cl_header_name_pane_t1

0x6ea3,	// (0x000721b4) cl_header_name_pane_t2_ParamLimits

0x6ea3,	// (0x000721b4) cl_header_name_pane_t2

0x6ee5,	// (0x000721f6) cl_header_name_pane_t3_ParamLimits

0x6ee5,	// (0x000721f6) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0007ae49) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0007ae49) cl_header_name_pane_t

0xb41e,	// (0x0007672f) navi_pane_mv_g2_ParamLimits

0xd6fc,	// (0x00078a0d) field_vitu2_entry_pane_g1_ParamLimits

0xd708,	// (0x00078a19) field_vitu2_entry_pane_g2_ParamLimits

0xd714,	// (0x00078a25) field_vitu2_entry_pane_g3_ParamLimits

0xd714,	// (0x00078a25) field_vitu2_entry_pane_g3

0xf92e,	// (0x0007ac3f) field_vitu2_entry_pane_g_ParamLimits

0x9ab0,	// (0x00074dc1) cell_vitu2_itu_pane_g1_ParamLimits

0x5d1c,	// (0x0007102d) cell_vitu2_itu_pane_g2_ParamLimits

0x5d1c,	// (0x0007102d) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0007ac4b) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0007ac4b) cell_vitu2_itu_pane_g

0x9409,	// (0x0007471a) bg_vkb2_func_pane_cp05_ParamLimits

0x9409,	// (0x0007471a) bg_vkb2_func_pane_cp05

0x9409,	// (0x0007471a) bg_vkb2_func_pane_cp03

0x9409,	// (0x0007471a) bg_vkb2_func_pane_cp04

0x9409,	// (0x0007471a) bg_vkb2_func_pane_cp10_ParamLimits

0x9409,	// (0x0007471a) bg_vkb2_func_pane_cp10

0x6a35,	// (0x00071d46) bg_vkb2_func_pane_cp08

0x6a1b,	// (0x00071d2c) bg_vkb2_func_pane_cp06

0x6a29,	// (0x00071d3a) bg_vkb2_func_pane_cp07

0xdc2f,	// (0x00078f40) bg_vkb2_func_pane_cp11_ParamLimits

0xdc2f,	// (0x00078f40) bg_vkb2_func_pane_cp11

0xdc44,	// (0x00078f55) bg_vkb2_func_pane_cp12_ParamLimits

0xdc44,	// (0x00078f55) bg_vkb2_func_pane_cp12

0x9391,	// (0x000746a2) bg_vkb2_func_pane_cp09

0xd734,	// (0x00078a45) bg_vkb2_func_pane_g1

0xac85,	// (0x00075f96) bg_vkb2_func_pane_g2

0xd73c,	// (0x00078a4d) bg_vkb2_func_pane_g3

0xd744,	// (0x00078a55) bg_vkb2_func_pane_g4

0xd970,	// (0x00078c81) bg_vkb2_func_pane_g5

0xd75c,	// (0x00078a6d) bg_vkb2_func_pane_g6

0xd764,	// (0x00078a75) bg_vkb2_func_pane_g7

0xd754,	// (0x00078a65) bg_vkb2_func_pane_g8

0xac65,	// (0x00075f76) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0007ae50) bg_vkb2_func_pane_g

0x6da6,	// (0x000720b7) blid2_tripm_pane_g6_ParamLimits

0x6da6,	// (0x000720b7) blid2_tripm_pane_g6

0xd5ab,	// (0x000788bc) mp4_progress_pane_g1

0x6e1f,	// (0x00072130) blid2_tripm_values_pane_ParamLimits

0x6e1f,	// (0x00072130) blid2_tripm_values_pane

0x6f16,	// (0x00072227) blid2_tripm_values_pane_t1

0x6f24,	// (0x00072235) blid2_tripm_values_pane_t2

0x6f32,	// (0x00072243) blid2_tripm_values_pane_t3

0x6f40,	// (0x00072251) blid2_tripm_values_pane_t4

0x6f4e,	// (0x0007225f) blid2_tripm_values_pane_t5

0x6f5c,	// (0x0007226d) blid2_tripm_values_pane_t6

0x6f6a,	// (0x0007227b) blid2_tripm_values_pane_t7

0x6f78,	// (0x00072289) blid2_tripm_values_pane_t8

0x6f86,	// (0x00072297) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0007ae63) blid2_tripm_values_pane_t

0x15d7,	// (0x0006c8e8) call_video_pane_t1_ParamLimits

0x15f5,	// (0x0006c906) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007a57f) call_video_pane_t_ParamLimits

0x2c52,	// (0x0006df63) msg_header_pane_g1_ParamLimits

0xb614,	// (0x00076925) msg_header_pane_g2_ParamLimits

0xb614,	// (0x00076925) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007a799) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007a799) msg_header_pane_g

0xa855,	// (0x00075b66) main_clock2_pane_ParamLimits

0x4cd7,	// (0x0006ffe8) grid_clock2_toolbar_pane_ParamLimits

0x4cd7,	// (0x0006ffe8) grid_clock2_toolbar_pane

0x4cd7,	// (0x0006ffe8) listscroll_clock2_pane_ParamLimits

0x4cd7,	// (0x0006ffe8) listscroll_clock2_pane

0x4dd3,	// (0x000700e4) main_clock2_pane_t3_ParamLimits

0x4dd3,	// (0x000700e4) main_clock2_pane_t3

0x4df7,	// (0x00070108) main_clock2_pane_t4_ParamLimits

0x4df7,	// (0x00070108) main_clock2_pane_t4

0xdd2f,	// (0x00079040) cell_clock2_toolbar_pane

0xdd37,	// (0x00079048) cell_clock2_toolbar_pane_cp01

0xdd37,	// (0x00079048) cell_clock2_toolbar_pane_cp02

0xdd3f,	// (0x00079050) cell_clock2_toolbar_pane_cp03

0xdd47,	// (0x00079058) list_clock2_pane

0xb251,	// (0x00076562) scroll_pane_cp10

0xdd4f,	// (0x00079060) list_single_clock2_pane_ParamLimits

0xdd4f,	// (0x00079060) list_single_clock2_pane

0xaa2c,	// (0x00075d3d) list_highlight_pane_cp08

0xdd5c,	// (0x0007906d) list_single_clock2_pane_t1

0xdd6a,	// (0x0007907b) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0007ae76) list_single_clock2_pane_t

0x9391,	// (0x000746a2) bg_button_pane_cp10

0xdd78,	// (0x00079089) cell_clock2_toolbar_pane_g1

0x2c60,	// (0x0006df71) aid_main_viewer_pane_g1_ParamLimits

0x2c60,	// (0x0006df71) aid_main_viewer_pane_g1

0x2c6e,	// (0x0006df7f) aid_main_viewer_pane_g2_ParamLimits

0x2c6e,	// (0x0006df7f) aid_main_viewer_pane_g2

0x2c7c,	// (0x0006df8d) aid_main_viewer_pane_g3_ParamLimits

0x2c7c,	// (0x0006df8d) aid_main_viewer_pane_g3

0x2c8b,	// (0x0006df9c) aid_main_viewer_pane_g4_ParamLimits

0x2c8b,	// (0x0006df9c) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007a7aa) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007a7aa) aid_main_viewer_pane_g

0x3593,	// (0x0006e8a4) main_calc_pane_ParamLimits

0x35b9,	// (0x0006e8ca) main_dialer2_pane_ParamLimits

0x9417,	// (0x00074728) main_cam6_pane

0x9417,	// (0x00074728) main_vid6_pane

0x4ce3,	// (0x0006fff4) listscroll_gen_pane_cp06_ParamLimits

0x4ce3,	// (0x0006fff4) listscroll_gen_pane_cp06

0x4e1a,	// (0x0007012b) main_clock2_pane_t5_ParamLimits

0x4e1a,	// (0x0007012b) main_clock2_pane_t5

0x4e74,	// (0x00070185) aid_call2_pane_cp10_ParamLimits

0x4e86,	// (0x00070197) aid_call_pane_cp10_ParamLimits

0xb2c0,	// (0x000765d1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2c0,	// (0x000765d1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4e98,	// (0x000701a9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4e98,	// (0x000701a9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2c0,	// (0x000765d1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0007aaf8) popup_clock_analogue_window_cp10_g_ParamLimits

0x4eaa,	// (0x000701bb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x551d,	// (0x0007082e) cell_dialer2_keypad_pane_g2_ParamLimits

0x551d,	// (0x0007082e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0007abde) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0007abde) cell_dialer2_keypad_pane_g

0x5539,	// (0x0007084a) cell_dialer2_keypad_pane_t1

0x60a2,	// (0x000713b3) main_cset_text2_pane_ParamLimits

0x60a2,	// (0x000713b3) main_cset_text2_pane

0xdb97,	// (0x00078ea8) area_vitu2_query_pane_g1_ParamLimits

0x69ba,	// (0x00071ccb) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0007ad93) area_vitu2_query_pane_g_ParamLimits

0xa05d,	// (0x0007536e) area_vitu2_query_pane_t7_ParamLimits

0xa05d,	// (0x0007536e) area_vitu2_query_pane_t7

0x6a1b,	// (0x00071d2c) bg_button_pane_cp018_ParamLimits

0x6a29,	// (0x00071d3a) bg_button_pane_cp021_ParamLimits

0x6a35,	// (0x00071d46) bg_button_pane_cp022_ParamLimits

0x6a35,	// (0x00071d46) bg_vkb2_func_pane_cp08_ParamLimits

0x6a1b,	// (0x00071d2c) bg_vkb2_func_pane_cp06_ParamLimits

0x6a29,	// (0x00071d3a) bg_vkb2_func_pane_cp07_ParamLimits

0x6a46,	// (0x00071d57) input_focus_pane_cp09_ParamLimits

0x9bac,	// (0x00074ebd) cam6_autofocus_pane_ParamLimits

0x9bac,	// (0x00074ebd) cam6_autofocus_pane

0x6f94,	// (0x000722a5) cam6_image_uncrop_pane_ParamLimits

0x6f94,	// (0x000722a5) cam6_image_uncrop_pane

0x6fa3,	// (0x000722b4) cam6_indi_pane_ParamLimits

0x6fa3,	// (0x000722b4) cam6_indi_pane

0x6fb9,	// (0x000722ca) cam6_mode_pane_ParamLimits

0x6fb9,	// (0x000722ca) cam6_mode_pane

0x6fcb,	// (0x000722dc) cam6_timer_pane_ParamLimits

0x6fcb,	// (0x000722dc) cam6_timer_pane

0x6fdb,	// (0x000722ec) cam6_zoom_pane_ParamLimits

0x6fdb,	// (0x000722ec) cam6_zoom_pane

0x6fe7,	// (0x000722f8) cam6_mode_pane_g1_ParamLimits

0x6fe7,	// (0x000722f8) cam6_mode_pane_g1

0x6ff7,	// (0x00072308) cam6_mode_pane_g2_ParamLimits

0x6ff7,	// (0x00072308) cam6_mode_pane_g2

0x7007,	// (0x00072318) cam6_mode_pane_g3_ParamLimits

0x7007,	// (0x00072318) cam6_mode_pane_g3

0x7017,	// (0x00072328) cam6_mode_pane_g4_ParamLimits

0x7017,	// (0x00072328) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0007ae7b) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0007ae7b) cam6_mode_pane_g

0xdd80,	// (0x00079091) bg_tb_trans_pane_cp08_ParamLimits

0xdd80,	// (0x00079091) bg_tb_trans_pane_cp08

0xdd8e,	// (0x0007909f) cam6_battery_pane_ParamLimits

0xdd8e,	// (0x0007909f) cam6_battery_pane

0xdda4,	// (0x000790b5) cam6_indi_pane_g1_ParamLimits

0xdda4,	// (0x000790b5) cam6_indi_pane_g1

0xddb6,	// (0x000790c7) cam6_indi_pane_g2_ParamLimits

0xddb6,	// (0x000790c7) cam6_indi_pane_g2

0xddc8,	// (0x000790d9) cam6_indi_pane_g3_ParamLimits

0xddc8,	// (0x000790d9) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0007ae84) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0007ae84) cam6_indi_pane_g

0xddda,	// (0x000790eb) cam6_indi_pane_t1_ParamLimits

0xddda,	// (0x000790eb) cam6_indi_pane_t1

0x7027,	// (0x00072338) cam6_autofocus_pane_g1

0x702f,	// (0x00072340) cam6_autofocus_pane_g2

0x7037,	// (0x00072348) cam6_autofocus_pane_g3

0x703f,	// (0x00072350) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0007ae8b) cam6_autofocus_pane_g

0xde00,	// (0x00079111) cam6_timer_pane_g1

0xde08,	// (0x00079119) cam6_timer_pane_t1

0xde16,	// (0x00079127) cam6_zoom_cont_pane

0xde1e,	// (0x0007912f) cam6_zoom_pane_g1

0xde26,	// (0x00079137) cam6_zoom_pane_g2

0x7047,	// (0x00072358) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0007ae94) cam6_zoom_pane_g

0xccec,	// (0x00077ffd) cam6_battery_pane_g1

0xccec,	// (0x00077ffd) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0007aa00) cam6_battery_pane_g

0xde2e,	// (0x0007913f) cam6_zoom_cont_pane_g1

0xde37,	// (0x00079148) cam6_zoom_cont_pane_g2

0xde40,	// (0x00079151) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0007ae9b) cam6_zoom_cont_pane_g

0x7064,	// (0x00072375) cam6_mode_pane_cp_ParamLimits

0x7064,	// (0x00072375) cam6_mode_pane_cp

0x7076,	// (0x00072387) cam6_zoom_pane_cp_ParamLimits

0x7076,	// (0x00072387) cam6_zoom_pane_cp

0x7082,	// (0x00072393) vid6_image_uncrop_cif_pane_ParamLimits

0x7082,	// (0x00072393) vid6_image_uncrop_cif_pane

0x7092,	// (0x000723a3) vid6_image_uncrop_nhd_pane_ParamLimits

0x7092,	// (0x000723a3) vid6_image_uncrop_nhd_pane

0x70a1,	// (0x000723b2) vid6_image_uncrop_vga_pane_ParamLimits

0x70a1,	// (0x000723b2) vid6_image_uncrop_vga_pane

0x70b0,	// (0x000723c1) vid6_image_uncrop_wvga_pane_ParamLimits

0x70b0,	// (0x000723c1) vid6_image_uncrop_wvga_pane

0x70bf,	// (0x000723d0) vid6_indi_pane_ParamLimits

0x70bf,	// (0x000723d0) vid6_indi_pane

0xdd80,	// (0x00079091) bg_tb_trans_pane_cp09_ParamLimits

0xdd80,	// (0x00079091) bg_tb_trans_pane_cp09

0xde81,	// (0x00079192) cam6_battery_pane_cp_ParamLimits

0xde81,	// (0x00079192) cam6_battery_pane_cp

0xde8d,	// (0x0007919e) vid6_indi_pane_g1_ParamLimits

0xde8d,	// (0x0007919e) vid6_indi_pane_g1

0xde9f,	// (0x000791b0) vid6_indi_pane_g2_ParamLimits

0xde9f,	// (0x000791b0) vid6_indi_pane_g2

0xdeb1,	// (0x000791c2) vid6_indi_pane_g3_ParamLimits

0xdeb1,	// (0x000791c2) vid6_indi_pane_g3

0xdec6,	// (0x000791d7) vid6_indi_pane_g4_ParamLimits

0xdec6,	// (0x000791d7) vid6_indi_pane_g4

0xdedb,	// (0x000791ec) vid6_indi_pane_g5_ParamLimits

0xdedb,	// (0x000791ec) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0007aea2) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0007aea2) vid6_indi_pane_g

0xdef5,	// (0x00079206) vid6_indi_pane_t1_ParamLimits

0xdef5,	// (0x00079206) vid6_indi_pane_t1

0xdf0b,	// (0x0007921c) vid6_indi_pane_t2_ParamLimits

0xdf0b,	// (0x0007921c) vid6_indi_pane_t2

0xdf33,	// (0x00079244) vid6_indi_pane_t3_ParamLimits

0xdf33,	// (0x00079244) vid6_indi_pane_t3

0xdf5b,	// (0x0007926c) vid6_indi_pane_t4_ParamLimits

0xdf5b,	// (0x0007926c) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0007aead) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0007aead) vid6_indi_pane_t

0xdf7f,	// (0x00079290) wait_bar_pane_cp08

0x70d7,	// (0x000723e8) main_cset_text2_pane_t1_ParamLimits

0x70d7,	// (0x000723e8) main_cset_text2_pane_t1

0x704f,	// (0x00072360) listscroll_gen_pane_cp06_t1_ParamLimits

0x704f,	// (0x00072360) listscroll_gen_pane_cp06_t1

0x9417,	// (0x00074728) main_cam6_set_pane

0x99db,	// (0x00074cec) bg_tb_trans_pane_cp06_ParamLimits

0x99f1,	// (0x00074d02) cam4_indicators_pane_g1_ParamLimits

0x9a02,	// (0x00074d13) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0007ac1b) cam4_indicators_pane_g_ParamLimits

0x9a1a,	// (0x00074d2b) cam4_indicators_pane_t1_ParamLimits

0x9409,	// (0x0007471a) bg_tb_trans_pane_cp07_ParamLimits

0x9a44,	// (0x00074d55) vid4_indicators_pane_g1_ParamLimits

0x9a58,	// (0x00074d69) vid4_indicators_pane_g2_ParamLimits

0x9a6c,	// (0x00074d7d) vid4_indicators_pane_g3_ParamLimits

0x9a7d,	// (0x00074d8e) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0007ac2d) vid4_indicators_pane_g_ParamLimits

0x9a99,	// (0x00074daa) vid4_indicators_pane_t1_ParamLimits

0x9b49,	// (0x00074e5a) vid4_progress_pane_g1_ParamLimits

0x9b59,	// (0x00074e6a) vid4_progress_pane_g2_ParamLimits

0x6b86,	// (0x00071e97) vid4_progress_pane_g3_ParamLimits

0x9b69,	// (0x00074e7a) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0007adde) vid4_progress_pane_g_ParamLimits

0x6b98,	// (0x00071ea9) vid4_progress_pane_t1_ParamLimits

0x9b81,	// (0x00074e92) vid4_progress_pane_t2_ParamLimits

0x9b96,	// (0x00074ea7) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0007ade9) vid4_progress_pane_t_ParamLimits

0x6bae,	// (0x00071ebf) wait_bar_pane_cp07_ParamLimits

0x70f5,	// (0x00072406) main_cam6_set_pane_g2_ParamLimits

0x70f5,	// (0x00072406) main_cam6_set_pane_g2

0x7119,	// (0x0007242a) main_cset6_listscroll_pane_ParamLimits

0x7119,	// (0x0007242a) main_cset6_listscroll_pane

0x7135,	// (0x00072446) main_cset6_slider_pane_ParamLimits

0x7135,	// (0x00072446) main_cset6_slider_pane

0x714b,	// (0x0007245c) main_cset6_text2_pane_ParamLimits

0x714b,	// (0x0007245c) main_cset6_text2_pane

0xdf8e,	// (0x0007929f) main_cset6_text_pane

0xdf96,	// (0x000792a7) main_cset_list_pane_copy1_ParamLimits

0xdf96,	// (0x000792a7) main_cset_list_pane_copy1

0xdfa6,	// (0x000792b7) scroll_pane_cp028_copy1

0x7159,	// (0x0007246a) cset_list_set_pane_copy1

0x716b,	// (0x0007247c) aid_position_infowindow_above_copy1

0x7173,	// (0x00072484) aid_position_infowindow_below_copy1

0x717b,	// (0x0007248c) cset_list_set_pane_g1_copy1

0x7183,	// (0x00072494) cset_list_set_pane_g3_copy1_ParamLimits

0x7183,	// (0x00072494) cset_list_set_pane_g3_copy1

0x7192,	// (0x000724a3) cset_list_set_pane_t1_copy1_ParamLimits

0x7192,	// (0x000724a3) cset_list_set_pane_t1_copy1

0xb4c1,	// (0x000767d2) list_highlight_pane_cp021_copy1_ParamLimits

0xb4c1,	// (0x000767d2) list_highlight_pane_cp021_copy1

0xdfaf,	// (0x000792c0) cset6_slider_pane_ParamLimits

0xdfaf,	// (0x000792c0) cset6_slider_pane

0xdfdb,	// (0x000792ec) main_cset6_slider_pane_g1_ParamLimits

0xdfdb,	// (0x000792ec) main_cset6_slider_pane_g1

0x71a7,	// (0x000724b8) main_cset6_slider_pane_g2_ParamLimits

0x71a7,	// (0x000724b8) main_cset6_slider_pane_g2

0xe003,	// (0x00079314) main_cset6_slider_pane_g3_ParamLimits

0xe003,	// (0x00079314) main_cset6_slider_pane_g3

0x71cf,	// (0x000724e0) main_cset6_slider_pane_g4_ParamLimits

0x71cf,	// (0x000724e0) main_cset6_slider_pane_g4

0xe00f,	// (0x00079320) main_cset6_slider_pane_g5_ParamLimits

0xe00f,	// (0x00079320) main_cset6_slider_pane_g5

0xd863,	// (0x00078b74) main_cset6_slider_pane_g7_ParamLimits

0xd863,	// (0x00078b74) main_cset6_slider_pane_g7

0xd86f,	// (0x00078b80) main_cset6_slider_pane_g8_ParamLimits

0xd86f,	// (0x00078b80) main_cset6_slider_pane_g8

0x614f,	// (0x00071460) main_cset6_slider_pane_g9_ParamLimits

0x614f,	// (0x00071460) main_cset6_slider_pane_g9

0x615b,	// (0x0007146c) main_cset6_slider_pane_g10_ParamLimits

0x615b,	// (0x0007146c) main_cset6_slider_pane_g10

0x6167,	// (0x00071478) main_cset6_slider_pane_g11_ParamLimits

0x6167,	// (0x00071478) main_cset6_slider_pane_g11

0x6173,	// (0x00071484) main_cset6_slider_pane_g12_ParamLimits

0x6173,	// (0x00071484) main_cset6_slider_pane_g12

0x617f,	// (0x00071490) main_cset6_slider_pane_g13_ParamLimits

0x617f,	// (0x00071490) main_cset6_slider_pane_g13

0x618b,	// (0x0007149c) main_cset6_slider_pane_g14_ParamLimits

0x618b,	// (0x0007149c) main_cset6_slider_pane_g14

0x71db,	// (0x000724ec) main_cset6_slider_pane_g15_ParamLimits

0x71db,	// (0x000724ec) main_cset6_slider_pane_g15

0xd87b,	// (0x00078b8c) main_cset6_slider_pane_g16_ParamLimits

0xd87b,	// (0x00078b8c) main_cset6_slider_pane_g16

0xd887,	// (0x00078b98) main_cset6_slider_pane_g17_ParamLimits

0xd887,	// (0x00078b98) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0007aeb6) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0007aeb6) main_cset6_slider_pane_g

0xe01b,	// (0x0007932c) main_cset6_slider_pane_t1_ParamLimits

0xe01b,	// (0x0007932c) main_cset6_slider_pane_t1

0x720b,	// (0x0007251c) main_cset6_slider_pane_t2_ParamLimits

0x720b,	// (0x0007251c) main_cset6_slider_pane_t2

0x7236,	// (0x00072547) main_cset6_slider_pane_t3_ParamLimits

0x7236,	// (0x00072547) main_cset6_slider_pane_t3

0x7261,	// (0x00072572) main_cset6_slider_pane_t4_ParamLimits

0x7261,	// (0x00072572) main_cset6_slider_pane_t4

0x728c,	// (0x0007259d) main_cset6_slider_pane_t5_ParamLimits

0x728c,	// (0x0007259d) main_cset6_slider_pane_t5

0xe05c,	// (0x0007936d) main_cset6_slider_pane_t7_ParamLimits

0xe05c,	// (0x0007936d) main_cset6_slider_pane_t7

0x72b7,	// (0x000725c8) main_cset6_slider_pane_t8_ParamLimits

0x72b7,	// (0x000725c8) main_cset6_slider_pane_t8

0x72db,	// (0x000725ec) main_cset6_slider_pane_t9_ParamLimits

0x72db,	// (0x000725ec) main_cset6_slider_pane_t9

0x72ff,	// (0x00072610) main_cset6_slider_pane_t10_ParamLimits

0x72ff,	// (0x00072610) main_cset6_slider_pane_t10

0x7323,	// (0x00072634) main_cset6_slider_pane_t11_ParamLimits

0x7323,	// (0x00072634) main_cset6_slider_pane_t11

0xe092,	// (0x000793a3) main_cset6_slider_pane_t14_ParamLimits

0xe092,	// (0x000793a3) main_cset6_slider_pane_t14

0xe0cb,	// (0x000793dc) main_cset6_slider_pane_t15_ParamLimits

0xe0cb,	// (0x000793dc) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0007aedb) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0007aedb) main_cset6_slider_pane_t

0xd4c8,	// (0x000787d9) cset_slider_pane_g1_copy1

0xde58,	// (0x00079169) cset_slider_pane_g2_copy1

0xde61,	// (0x00079172) cset_slider_pane_g3_copy1

0x9391,	// (0x000746a2) bg_popup_sub_pane_cp011_copy1

0xe104,	// (0x00079415) main_cset_text_pane_g1_copy1

0xd9bf,	// (0x00078cd0) main_cset_text_pane_t1_copy1

0xd9cd,	// (0x00078cde) main_cset_text_pane_t2_copy1

0xd9db,	// (0x00078cec) main_cset_text_pane_t3_copy1

0xd9e9,	// (0x00078cfa) main_cset_text_pane_t4_copy1

0xd9f7,	// (0x00078d08) main_cset_text_pane_t5_copy1

0xe10c,	// (0x0007941d) main_cset_text_pane_t6_copy1

0xe11a,	// (0x0007942b) main_cset_text_pane_t7_copy1

0x70d7,	// (0x000723e8) main_cset_text2_pane_t1_copy1

0x9409,	// (0x0007471a) main_ncimui_pane

0x37fd,	// (0x0006eb0e) popup_query_ncimui_window_ParamLimits

0x37fd,	// (0x0006eb0e) popup_query_ncimui_window

0x9f90,	// (0x000752a1) field_cale_ev2_pane_g4_ParamLimits

0x9f90,	// (0x000752a1) field_cale_ev2_pane_g4

0x53fc,	// (0x0007070d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x53fc,	// (0x0007070d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0007abb9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0007abb9) cell_video_dialer_keypad_pane_g

0x5414,	// (0x00070725) cell_video_dialer_keypad_pane_t1

0x9391,	// (0x000746a2) bg_popup_window_pane_cp012

0xb13c,	// (0x0007644d) heading_pane_cp06

0xe146,	// (0x00079457) ncim_query_content_pane

0x9391,	// (0x000746a2) bg_popup_heading_pane_cp01

0xe14e,	// (0x0007945f) ncim_heading_pane_t1

0xe15c,	// (0x0007946d) ncim_indicator_popup_pane

0xe16e,	// (0x0007947f) ncim_query_button_pane

0xe182,	// (0x00079493) ncim_query_content_pane_t1

0xe194,	// (0x000794a5) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0007af1f) ncim_query_content_pane_t

0xe1ce,	// (0x000794df) ncim_query_list_pane

0xe1e0,	// (0x000794f1) ncim_query_popup_pane

0xe15c,	// (0x0007946d) ncim_indicator_popup_pane_ParamLimits

0x7546,	// (0x00072857) ncim_query_content_pane_g1_ParamLimits

0x7546,	// (0x00072857) ncim_query_content_pane_g1

0xe182,	// (0x00079493) ncim_query_content_pane_t1_ParamLimits

0xe194,	// (0x000794a5) ncim_query_content_pane_t2_ParamLimits

0x7552,	// (0x00072863) ncim_query_content_pane_t3_ParamLimits

0x7552,	// (0x00072863) ncim_query_content_pane_t3

0x757a,	// (0x0007288b) ncim_query_content_pane_t4_ParamLimits

0x757a,	// (0x0007288b) ncim_query_content_pane_t4

0x75a2,	// (0x000728b3) ncim_query_content_pane_t5_ParamLimits

0x75a2,	// (0x000728b3) ncim_query_content_pane_t5

0xe1a6,	// (0x000794b7) ncim_query_content_pane_t6_ParamLimits

0xe1a6,	// (0x000794b7) ncim_query_content_pane_t6

0xfc0e,	// (0x0007af1f) ncim_query_content_pane_t_ParamLimits

0xe1ce,	// (0x000794df) ncim_query_list_pane_ParamLimits

0xe1e0,	// (0x000794f1) ncim_query_popup_pane_ParamLimits

0xe1f4,	// (0x00079505) wait_bar_pane_cp04

0x9391,	// (0x000746a2) input_focus_pane_cp011

0xe1fc,	// (0x0007950d) ncim_query_popup_pane_t1

0xe20a,	// (0x0007951b) ncim_list_query_list_pane_ParamLimits

0xe20a,	// (0x0007951b) ncim_list_query_list_pane

0x9391,	// (0x000746a2) bg_button_pane_cp027

0xe217,	// (0x00079528) ncim_query_button_pane_g1

0x9391,	// (0x000746a2) list_highlight_pane_cp012

0xe221,	// (0x00079532) ncim_list_query_list_pane_g1

0xe229,	// (0x0007953a) ncim_list_query_list_pane_t1

0x9a0e,	// (0x00074d1f) cam4_indicators_pane_g3_ParamLimits

0x9a0e,	// (0x00074d1f) cam4_indicators_pane_g3

0x9a89,	// (0x00074d9a) vid4_indicators_pane_g5_ParamLimits

0x9a89,	// (0x00074d9a) vid4_indicators_pane_g5

0x9b75,	// (0x00074e86) vid4_progress_pane_g5_ParamLimits

0x9b75,	// (0x00074e86) vid4_progress_pane_g5

0x7431,	// (0x00072742) main_ncimui_pane_g1

0x749a,	// (0x000727ab) ncimui_group_query_pane_ParamLimits

0x749a,	// (0x000727ab) ncimui_group_query_pane

0x74e2,	// (0x000727f3) ncimui_list_pane_ParamLimits

0x74e2,	// (0x000727f3) ncimui_list_pane

0x7509,	// (0x0007281a) ncimui_text_pane_ParamLimits

0x7509,	// (0x0007281a) ncimui_text_pane

0x75ca,	// (0x000728db) ncimui_text_pane_t1_ParamLimits

0x75ca,	// (0x000728db) ncimui_text_pane_t1

0xe237,	// (0x00079548) ncimui_list_single_graphic_pane_ParamLimits

0xe237,	// (0x00079548) ncimui_list_single_graphic_pane

0x75e8,	// (0x000728f9) ncimui_query_pane_ParamLimits

0x75e8,	// (0x000728f9) ncimui_query_pane

0x9391,	// (0x000746a2) list_highlight_pane_cp013

0xe247,	// (0x00079558) ncim_list_query_list_pane_t1_copy1

0xe255,	// (0x00079566) ncim_list_single_graphic_pane_g1

0x75fb,	// (0x0007290c) ncim_query_button_pane_cp01

0x7607,	// (0x00072918) ncim_query_entry_pane_ParamLimits

0x7607,	// (0x00072918) ncim_query_entry_pane

0x761a,	// (0x0007292b) ncimui_query_pane_g1

0x7626,	// (0x00072937) ncimui_query_pane_t1_ParamLimits

0x7626,	// (0x00072937) ncimui_query_pane_t1

0xb4c1,	// (0x000767d2) input_focus_pane_cp012

0xe25d,	// (0x0007956e) ncim_query_entry_pane_t1

0xa855,	// (0x00075b66) main_im_pane_ParamLimits

0x9409,	// (0x0007471a) main_mobtv_pane_ParamLimits

0x9409,	// (0x0007471a) main_mobtv_pane

0x71f3,	// (0x00072504) main_cset6_slider_pane_g18_ParamLimits

0x71f3,	// (0x00072504) main_cset6_slider_pane_g18

0x71ff,	// (0x00072510) main_cset6_slider_pane_g19_ParamLimits

0x71ff,	// (0x00072510) main_cset6_slider_pane_g19

0x763f,	// (0x00072950) bg_main_mobtv_pane_ParamLimits

0x763f,	// (0x00072950) bg_main_mobtv_pane

0x764d,	// (0x0007295e) main_mobtv_info_pane

0x7656,	// (0x00072967) main_mobtv_loading_pane_ParamLimits

0x7656,	// (0x00072967) main_mobtv_loading_pane

0xe26f,	// (0x00079580) main_mobtv_pg_channel_list_pane

0xe279,	// (0x0007958a) main_mobtv_pg_hdr_pane

0x7663,	// (0x00072974) main_mobtv_programe_curr_pane_ParamLimits

0x7663,	// (0x00072974) main_mobtv_programe_curr_pane

0x7670,	// (0x00072981) main_mobtv_programe_next_pane_ParamLimits

0x7670,	// (0x00072981) main_mobtv_programe_next_pane

0xe282,	// (0x00079593) popup_mobtv_noti_window

0xccec,	// (0x00077ffd) main_tv_pg_hdr_pane_g1

0xe28a,	// (0x0007959b) main_tv_pg_hdr_pane_g2

0xe292,	// (0x000795a3) main_tv_pg_hdr_pane_g3

0xe29a,	// (0x000795ab) main_tv_pg_hdr_pane_g4

0xe2a2,	// (0x000795b3) main_tv_pg_hdr_pane_g5

0xe2ac,	// (0x000795bd) main_tv_pg_hdr_pane_g6

0xe2b6,	// (0x000795c7) main_tv_pg_hdr_pane_g7

0xe2c0,	// (0x000795d1) main_tv_pg_hdr_pane_g8

0xe2ca,	// (0x000795db) main_tv_pg_hdr_pane_g9

0xe2d4,	// (0x000795e5) main_tv_pg_hdr_pane_g10

0xe2de,	// (0x000795ef) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0007af2c) main_tv_pg_hdr_pane_g

0xe2e8,	// (0x000795f9) main_tv_pg_hdr_pane_t1

0xe2f6,	// (0x00079607) main_tv_pg_hdr_pane_t2

0xe304,	// (0x00079615) main_tv_pg_hdr_pane_t3

0xe314,	// (0x00079625) main_tv_pg_hdr_pane_t4

0xe324,	// (0x00079635) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0007af43) main_tv_pg_hdr_pane_t

0xe334,	// (0x00079645) single_mobtv_pg_channel_pane_ParamLimits

0xe334,	// (0x00079645) single_mobtv_pg_channel_pane

0xe346,	// (0x00079657) single_mobtv_pg_channel_table_pane

0xada6,	// (0x000760b7) single_mobtv_pg_channel_thumb_pane

0xe34f,	// (0x00079660) single_tv_pg_channel_pane_g1

0xe358,	// (0x00079669) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0007af4e) single_tv_pg_channel_pane_g

0xcf46,	// (0x00078257) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf46,	// (0x00078257) bg_single_mobtv_pg_channel_thumb_pane

0xe361,	// (0x00079672) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe361,	// (0x00079672) single_mobtv_pg_channel_thumb_pane_g1

0xe36f,	// (0x00079680) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe36f,	// (0x00079680) single_mobtv_pg_channel_thumb_pane_g2

0xe37b,	// (0x0007968c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe37b,	// (0x0007968c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0007af53) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0007af53) single_mobtv_pg_channel_thumb_pane_g

0xe387,	// (0x00079698) single_mobtv_pg_channel_thumb_pane_t1

0xe395,	// (0x000796a6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0007af5a) single_mobtv_pg_channel_thumb_pane_t

0xccec,	// (0x00077ffd) bg_single_mobtv_pg_channel_table_pane_g1

0xccec,	// (0x00077ffd) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0007aa00) bg_single_mobtv_pg_channel_table_pane_g

0xe3a3,	// (0x000796b4) single_mobtv_pg_channel_table_pane_t1

0xe3b1,	// (0x000796c2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0007af5f) single_mobtv_pg_channel_table_pane_t

0x7685,	// (0x00072996) main_mobtv_info_pane_g1_ParamLimits

0x7685,	// (0x00072996) main_mobtv_info_pane_g1

0x76a3,	// (0x000729b4) main_mobtv_info_pane_t1_ParamLimits

0x76a3,	// (0x000729b4) main_mobtv_info_pane_t1

0x771b,	// (0x00072a2c) main_mobtv_info_pane_t2_ParamLimits

0x771b,	// (0x00072a2c) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0007af69) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0007af69) main_mobtv_info_pane_t

0x77aa,	// (0x00072abb) wait_bar_pane_cp05

0x77bc,	// (0x00072acd) main_mobtv_loading_pane_g1_ParamLimits

0x77bc,	// (0x00072acd) main_mobtv_loading_pane_g1

0x77cf,	// (0x00072ae0) main_mobtv_loading_pane_g2_ParamLimits

0x77cf,	// (0x00072ae0) main_mobtv_loading_pane_g2

0x77db,	// (0x00072aec) main_mobtv_loading_pane_g3_ParamLimits

0x77db,	// (0x00072aec) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0007af70) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0007af70) main_mobtv_loading_pane_g

0xe3bf,	// (0x000796d0) main_mobtv_loading_pane_t1_ParamLimits

0xe3bf,	// (0x000796d0) main_mobtv_loading_pane_t1

0xe3d7,	// (0x000796e8) main_mobtv_loading_pane_t2_ParamLimits

0xe3d7,	// (0x000796e8) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0007af77) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0007af77) main_mobtv_loading_pane_t

0x77ee,	// (0x00072aff) wait_bar_pane_cp06_ParamLimits

0x77ee,	// (0x00072aff) wait_bar_pane_cp06

0xe3fb,	// (0x0007970c) main_mobtv_programe_curr_pane_t1

0xe409,	// (0x0007971a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0007af7c) main_mobtv_programe_curr_pane_t

0xe417,	// (0x00079728) main_mobtv_programe_next_pane_t1

0xe425,	// (0x00079736) main_mobtv_programe_next_pane_t2

0xe433,	// (0x00079744) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0007af81) main_mobtv_programe_next_pane_t

0x9391,	// (0x000746a2) bg_popup_mobtv_noti_window_pane

0xe441,	// (0x00079752) popup_mobtv_noti_window_g1

0xe449,	// (0x0007975a) popup_mobtv_noti_window_t1

0xe457,	// (0x00079768) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0007af88) popup_mobtv_noti_window_t

0xccec,	// (0x00077ffd) bg_popup_mobtv_noti_window_pane_g1

0x9417,	// (0x00074728) sc_clock_pane

0x9417,	// (0x00074728) main_fs_bigclock_pane

0x6e09,	// (0x0007211a) blid2_tripm_pane_t4_ParamLimits

0x6e09,	// (0x0007211a) blid2_tripm_pane_t4

0x77fd,	// (0x00072b0e) sc_clock_pane_g1_ParamLimits

0x77fd,	// (0x00072b0e) sc_clock_pane_g1

0x780f,	// (0x00072b20) sc_clock_pane_t1_ParamLimits

0x780f,	// (0x00072b20) sc_clock_pane_t1

0x7831,	// (0x00072b42) sc_clock_pane_t2_ParamLimits

0x7831,	// (0x00072b42) sc_clock_pane_t2

0x7849,	// (0x00072b5a) sc_clock_pane_t3_ParamLimits

0x7849,	// (0x00072b5a) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0007af8d) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0007af8d) sc_clock_pane_t

0x883e,	// (0x00073b4f) main_fs_bigclock_indicator_pane_ParamLimits

0x883e,	// (0x00073b4f) main_fs_bigclock_indicator_pane

0x78ef,	// (0x00072c00) main_fs_bigclock_pane_g1_ParamLimits

0x78ef,	// (0x00072c00) main_fs_bigclock_pane_g1

0x884a,	// (0x00073b5b) main_fs_bigclock_pane_t1_ParamLimits

0x884a,	// (0x00073b5b) main_fs_bigclock_pane_t1

0x885c,	// (0x00073b6d) main_fs_bigclock_pane_t2_ParamLimits

0x885c,	// (0x00073b6d) main_fs_bigclock_pane_t2

0x8870,	// (0x00073b81) main_fs_bigclock_pane_t3_ParamLimits

0x8870,	// (0x00073b81) main_fs_bigclock_pane_t3

0x0002,

0xfe6d,	// (0x0007b17e) main_fs_bigclock_pane_t_ParamLimits

0xfe6d,	// (0x0007b17e) main_fs_bigclock_pane_t

0xecd0,	// (0x00079fe1) main_fs_bigclock_indicator_pane_g1

0xe176,	// (0x00079487) ncim_query_content_pane_g2_ParamLimits

0xe176,	// (0x00079487) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0007af1a) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0007af1a) ncim_query_content_pane_g

0x7862,	// (0x00072b73) sc_clock_pane_t4_ParamLimits

0x7862,	// (0x00072b73) sc_clock_pane_t4

0x9409,	// (0x0007471a) main_radioblah_pane

0x9975,	// (0x00074c86) cell_call4_button_pane_t1_copy1_ParamLimits

0x9975,	// (0x00074c86) cell_call4_button_pane_t1_copy1

0x7449,	// (0x0007275a) main_ncimui_pane_t1_ParamLimits

0x7449,	// (0x0007275a) main_ncimui_pane_t1

0x7463,	// (0x00072774) main_ncimui_pane_t2_ParamLimits

0x7463,	// (0x00072774) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0007af13) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0007af13) main_ncimui_pane_t

0xe59d,	// (0x000798ae) main_radioblah_anim_pane_ParamLimits

0xe59d,	// (0x000798ae) main_radioblah_anim_pane

0xe5ae,	// (0x000798bf) main_radioblah_info_pane_ParamLimits

0xe5ae,	// (0x000798bf) main_radioblah_info_pane

0xe5c2,	// (0x000798d3) main_radioblah_pane_t1_ParamLimits

0xe5c2,	// (0x000798d3) main_radioblah_pane_t1

0xe5de,	// (0x000798ef) main_radioblah_pane_t2_ParamLimits

0xe5de,	// (0x000798ef) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0007afae) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0007afae) main_radioblah_pane_t

0x794e,	// (0x00072c5f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x794e,	// (0x00072c5f) main_radioblah_rocker_ctrl_pane

0xe626,	// (0x00079937) main_radioblah_info_pane_t1_ParamLimits

0xe626,	// (0x00079937) main_radioblah_info_pane_t1

0x79a6,	// (0x00072cb7) main_radioblah_info_pane_t2_ParamLimits

0x79a6,	// (0x00072cb7) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0007afb7) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0007afb7) main_radioblah_info_pane_t

0xccec,	// (0x00077ffd) main_radioblah_rocker_ctrl_pane_g1

0x7a56,	// (0x00072d67) main_radioblah_rocker_ctrl_pane_g2

0x7a5e,	// (0x00072d6f) main_radioblah_rocker_ctrl_pane_g3

0x7a66,	// (0x00072d77) main_radioblah_rocker_ctrl_pane_g4

0x7a6e,	// (0x00072d7f) main_radioblah_rocker_ctrl_pane_g5

0x7a76,	// (0x00072d87) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0007afc0) main_radioblah_rocker_ctrl_pane_g

0x70d7,	// (0x000723e8) main_cset_text2_pane_t1_copy1_ParamLimits

0x99d3,	// (0x00074ce4) cam4_image_uncrop_qvga_pane

0x9a34,	// (0x00074d45) vid4_image_uncrop_qcif_pane

0x9bac,	// (0x00074ebd) cam6_image_uncrop_qvga_pane_ParamLimits

0x9bac,	// (0x00074ebd) cam6_image_uncrop_qvga_pane

0xde48,	// (0x00079159) vid6_image_uncrop_qcif_pane_ParamLimits

0xde48,	// (0x00079159) vid6_image_uncrop_qcif_pane

0x9391,	// (0x000746a2) bg_popup_preview_window_pane_cp03

0xe128,	// (0x00079439) list_cset_text2_pane

0xe130,	// (0x00079441) main_cset6_text2_pane_g1

0xe138,	// (0x00079449) main_cset6_text2_pane_t1

0xe6aa,	// (0x000799bb) list_cset_text2_pane_t1_ParamLimits

0xe6aa,	// (0x000799bb) list_cset_text2_pane_t1

0x9409,	// (0x0007471a) main_radioblah_pane_ParamLimits

0x7796,	// (0x00072aa7) main_mobtv_info_pane_t3_ParamLimits

0x7796,	// (0x00072aa7) main_mobtv_info_pane_t3

0x793c,	// (0x00072c4d) main_radioblah_pane_g1

0x7976,	// (0x00072c87) main_radioblah_info_pane_g1

0x79fb,	// (0x00072d0c) main_radioblah_info_pane_t3_ParamLimits

0x79fb,	// (0x00072d0c) main_radioblah_info_pane_t3

0x2260,	// (0x0006d571) highlight_cell_cale_month_pane_ParamLimits

0x2260,	// (0x0006d571) highlight_cell_cale_month_pane

0x9417,	// (0x00074728) main_phob_fisheye_pane

0xd022,	// (0x00078333) scroll_pane_cp0031_ParamLimits

0xd022,	// (0x00078333) scroll_pane_cp0031

0xdf7f,	// (0x00079290) wait_bar_pane_cp08_ParamLimits

0x7159,	// (0x0007246a) cset_list_set_pane_copy1_ParamLimits

0xe660,	// (0x00079971) highlight_cell_cale_month_pane_g1

0x7a7e,	// (0x00072d8f) highlight_cell_cale_month_pane_t1

0xdbeb,	// (0x00078efc) list_gen_pane_cp01

0xd84e,	// (0x00078b5f) scroll_pane_01

0x7a8c,	// (0x00072d9d) list_single_double_fisheye_pane

0x7a95,	// (0x00072da6) list_double_fisheye_pane_g1_ParamLimits

0x7a95,	// (0x00072da6) list_double_fisheye_pane_g1

0x7aa1,	// (0x00072db2) list_double_fisheye_pane_g2_ParamLimits

0x7aa1,	// (0x00072db2) list_double_fisheye_pane_g2

0x7ab5,	// (0x00072dc6) list_double_fisheye_pane_g3_ParamLimits

0x7ab5,	// (0x00072dc6) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0007afcd) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0007afcd) list_double_fisheye_pane_g

0x7ade,	// (0x00072def) list_double_fisheye_pane_t1_ParamLimits

0x7ade,	// (0x00072def) list_double_fisheye_pane_t1

0x7af9,	// (0x00072e0a) list_double_fisheye_pane_t2_ParamLimits

0x7af9,	// (0x00072e0a) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0007afd8) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0007afd8) list_double_fisheye_pane_t

0x9417,	// (0x00074728) main_call5_pane

0x788d,	// (0x00072b9e) sc_swipe_pane_ParamLimits

0x788d,	// (0x00072b9e) sc_swipe_pane

0x7b2e,	// (0x00072e3f) call5_image_pane_ParamLimits

0x7b2e,	// (0x00072e3f) call5_image_pane

0x7b4b,	// (0x00072e5c) call5_swipe_1_pane_ParamLimits

0x7b4b,	// (0x00072e5c) call5_swipe_1_pane

0x7b5e,	// (0x00072e6f) call5_swipe_2_pane_ParamLimits

0x7b5e,	// (0x00072e6f) call5_swipe_2_pane

0x7b89,	// (0x00072e9a) popup_call5_audio_first_window_ParamLimits

0x7b89,	// (0x00072e9a) popup_call5_audio_first_window

0xcf46,	// (0x00078257) call5_swipe_1_pane_g1_ParamLimits

0xcf46,	// (0x00078257) call5_swipe_1_pane_g1

0xe668,	// (0x00079979) call5_swipe_1_pane_g2_ParamLimits

0xe668,	// (0x00079979) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0007afdd) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0007afdd) call5_swipe_1_pane_g

0xe674,	// (0x00079985) call5_swipe_1_pane_t1_ParamLimits

0xe674,	// (0x00079985) call5_swipe_1_pane_t1

0xcf46,	// (0x00078257) call5_swipe_2_pane_g1_ParamLimits

0xcf46,	// (0x00078257) call5_swipe_2_pane_g1

0xe689,	// (0x0007999a) call5_swipe_2_pane_g2_ParamLimits

0xe689,	// (0x0007999a) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0007afe2) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0007afe2) call5_swipe_2_pane_g

0xe695,	// (0x000799a6) call5_swipe_2_pane_t1_ParamLimits

0xe695,	// (0x000799a6) call5_swipe_2_pane_t1

0xe6c5,	// (0x000799d6) sc_swipe_pane_g1_ParamLimits

0xe6c5,	// (0x000799d6) sc_swipe_pane_g1

0xe6d2,	// (0x000799e3) sc_swipe_pane_g2_ParamLimits

0xe6d2,	// (0x000799e3) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0007afe7) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0007afe7) sc_swipe_pane_g

0xe6de,	// (0x000799ef) sc_swipe_pane_t1_ParamLimits

0xe6de,	// (0x000799ef) sc_swipe_pane_t1

0x9417,	// (0x00074728) main_cmail_launcher_pane

0x7b9a,	// (0x00072eab) aid_size_cell_cmail_l_ParamLimits

0x7b9a,	// (0x00072eab) aid_size_cell_cmail_l

0x7ba8,	// (0x00072eb9) grid_cmail_l_pane_ParamLimits

0x7ba8,	// (0x00072eb9) grid_cmail_l_pane

0x7bc2,	// (0x00072ed3) cell_cmail_l_pane_ParamLimits

0x7bc2,	// (0x00072ed3) cell_cmail_l_pane

0xe6f3,	// (0x00079a04) cell_cmail_l_pane_g1_ParamLimits

0xe6f3,	// (0x00079a04) cell_cmail_l_pane_g1

0xe6ff,	// (0x00079a10) cell_cmail_l_pane_t1_ParamLimits

0xe6ff,	// (0x00079a10) cell_cmail_l_pane_t1

0xe715,	// (0x00079a26) cell_cmail_l_pane_t2_ParamLimits

0xe715,	// (0x00079a26) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0007afec) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0007afec) cell_cmail_l_pane_t

0xb4c1,	// (0x000767d2) grid_highlight_pane_cp018_ParamLimits

0xb4c1,	// (0x000767d2) grid_highlight_pane_cp018

0x0508,	// (0x0006b819) main2_pane_ParamLimits

0x0508,	// (0x0006b819) main2_pane

0xa900,	// (0x00075c11) popup_sp_fs_action_menu_bg_pane_g1

0xa908,	// (0x00075c19) popup_sp_fs_action_menu_bg_pane_g2

0xa910,	// (0x00075c21) popup_sp_fs_action_menu_bg_pane_g3

0xa918,	// (0x00075c29) popup_sp_fs_action_menu_bg_pane_g4

0xa920,	// (0x00075c31) popup_sp_fs_action_menu_bg_pane_g5

0xa928,	// (0x00075c39) popup_sp_fs_action_menu_bg_pane_g6

0xa930,	// (0x00075c41) popup_sp_fs_action_menu_bg_pane_g7

0xa938,	// (0x00075c49) popup_sp_fs_action_menu_bg_pane_g8

0xa940,	// (0x00075c51) popup_sp_fs_action_menu_bg_pane_g9

0xa948,	// (0x00075c59) popup_sp_fs_action_menu_bg_pane_g10

0xa948,	// (0x00075c59) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007a49b) popup_sp_fs_action_menu_bg_pane_g

0x140e,	// (0x0006c71f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x2_t3_g3_g1

0x141a,	// (0x0006c72b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x141a,	// (0x0006c72b) list_medium_line_x2_t3_g3_g2

0x1426,	// (0x0006c737) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1426,	// (0x0006c737) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007a549) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007a549) list_medium_line_x2_t3_g3_g

0x1432,	// (0x0006c743) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1432,	// (0x0006c743) list_medium_line_x2_t3_g3_t1

0x1447,	// (0x0006c758) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1447,	// (0x0006c758) list_medium_line_x2_t3_g3_t2

0x145b,	// (0x0006c76c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x145b,	// (0x0006c76c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007a550) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007a550) list_medium_line_x2_t3_g3_t

0x140e,	// (0x0006c71f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x2_t3_g2_g1

0x1426,	// (0x0006c737) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1426,	// (0x0006c737) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007a557) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007a557) list_medium_line_x2_t3_g2_g

0x1470,	// (0x0006c781) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1470,	// (0x0006c781) list_medium_line_x2_t3_g2_t1

0x1485,	// (0x0006c796) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1485,	// (0x0006c796) list_medium_line_x2_t3_g2_t2

0x1497,	// (0x0006c7a8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1497,	// (0x0006c7a8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007a55c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007a55c) list_medium_line_x2_t3_g2_t

0x140e,	// (0x0006c71f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x2_t4_g4_g1

0x14b5,	// (0x0006c7c6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x14b5,	// (0x0006c7c6) list_medium_line_x2_t4_g4_g2

0x141a,	// (0x0006c72b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x141a,	// (0x0006c72b) list_medium_line_x2_t4_g4_g3

0x14c1,	// (0x0006c7d2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x14c1,	// (0x0006c7d2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007a563) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007a563) list_medium_line_x2_t4_g4_g

0x14cd,	// (0x0006c7de) list_medium_line_x2_t4_g4_t1_ParamLimits

0x14cd,	// (0x0006c7de) list_medium_line_x2_t4_g4_t1

0x14e7,	// (0x0006c7f8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x14e7,	// (0x0006c7f8) list_medium_line_x2_t4_g4_t2

0x14fd,	// (0x0006c80e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x14fd,	// (0x0006c80e) list_medium_line_x2_t4_g4_t3

0x1512,	// (0x0006c823) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1512,	// (0x0006c823) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007a56c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007a56c) list_medium_line_x2_t4_g4_t

0x140e,	// (0x0006c71f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x2_t2_g4_g1

0x14b5,	// (0x0006c7c6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x14b5,	// (0x0006c7c6) list_medium_line_x2_t2_g4_g2

0x141a,	// (0x0006c72b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x141a,	// (0x0006c72b) list_medium_line_x2_t2_g4_g3

0x1426,	// (0x0006c737) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1426,	// (0x0006c737) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007a5d3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007a5d3) list_medium_line_x2_t2_g4_g

0x2286,	// (0x0006d597) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2286,	// (0x0006d597) list_medium_line_x2_t2_g4_t1

0x145b,	// (0x0006c76c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x145b,	// (0x0006c76c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007a5dc) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007a5dc) list_medium_line_x2_t2_g4_t

0x140e,	// (0x0006c71f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x2_t2_g3_g1

0x141a,	// (0x0006c72b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x141a,	// (0x0006c72b) list_medium_line_x2_t2_g3_g2

0x1426,	// (0x0006c737) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1426,	// (0x0006c737) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007a549) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007a549) list_medium_line_x2_t2_g3_g

0x229b,	// (0x0006d5ac) list_medium_line_x2_t2_g3_t1_ParamLimits

0x229b,	// (0x0006d5ac) list_medium_line_x2_t2_g3_t1

0x145b,	// (0x0006c76c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x145b,	// (0x0006c76c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007a5e1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007a5e1) list_medium_line_x2_t2_g3_t

0x23ef,	// (0x0006d700) main_sp_fs_list_pane_ParamLimits

0x23ef,	// (0x0006d700) main_sp_fs_list_pane

0xce08,	// (0x00078119) sp_fs_scroll_pane_ParamLimits

0xce08,	// (0x00078119) sp_fs_scroll_pane

0x23fb,	// (0x0006d70c) list_medium_line_x2_t3_t1

0x240b,	// (0x0006d71c) list_medium_line_x2_t3_t2

0x2419,	// (0x0006d72a) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007a62c) list_medium_line_x2_t3_t

0x2427,	// (0x0006d738) list_medium_line_x3_t4_t1

0x2437,	// (0x0006d748) list_medium_line_x3_t4_t2

0x2445,	// (0x0006d756) list_medium_line_x3_t4_t3

0x2419,	// (0x0006d72a) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007a633) list_medium_line_x3_t4_t

0x2453,	// (0x0006d764) list_medium_line_x4_t5_t1

0x2463,	// (0x0006d774) list_medium_line_x4_t5_t2

0x2445,	// (0x0006d756) list_medium_line_x4_t5_t3

0x2471,	// (0x0006d782) list_medium_line_x4_t5_t4

0x2419,	// (0x0006d72a) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007a63c) list_medium_line_x4_t5_t

0x140e,	// (0x0006c71f) list_medium_line_t4_g4_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_t4_g4_g1

0x14c1,	// (0x0006c7d2) list_medium_line_t4_g4_g2_ParamLimits

0x14c1,	// (0x0006c7d2) list_medium_line_t4_g4_g2

0x247f,	// (0x0006d790) list_medium_line_t4_g4_g3_ParamLimits

0x247f,	// (0x0006d790) list_medium_line_t4_g4_g3

0x1426,	// (0x0006c737) list_medium_line_t4_g4_g4_ParamLimits

0x1426,	// (0x0006c737) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007a647) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007a647) list_medium_line_t4_g4_g

0x248b,	// (0x0006d79c) list_medium_line_t4_g4_t1_ParamLimits

0x248b,	// (0x0006d79c) list_medium_line_t4_g4_t1

0x24a0,	// (0x0006d7b1) list_medium_line_t4_g4_t2_ParamLimits

0x24a0,	// (0x0006d7b1) list_medium_line_t4_g4_t2

0x24b6,	// (0x0006d7c7) list_medium_line_t4_g4_t3_ParamLimits

0x24b6,	// (0x0006d7c7) list_medium_line_t4_g4_t3

0x145b,	// (0x0006c76c) list_medium_line_t4_g4_t4_ParamLimits

0x145b,	// (0x0006c76c) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007a650) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007a650) list_medium_line_t4_g4_t

0x258f,	// (0x0006d8a0) chi_dic_find_pane_g1

0x35cd,	// (0x0006e8de) main_tport_pane

0x646d,	// (0x0007177e) list_medium_line_plain_t1

0x6515,	// (0x00071826) list_medium_line_t2_g2_g1_ParamLimits

0x6515,	// (0x00071826) list_medium_line_t2_g2_g1

0x6521,	// (0x00071832) list_medium_line_t2_g2_g2_ParamLimits

0x6521,	// (0x00071832) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0007ad24) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0007ad24) list_medium_line_t2_g2_g

0x652d,	// (0x0007183e) list_medium_line_t2_g2_t1_ParamLimits

0x652d,	// (0x0007183e) list_medium_line_t2_g2_t1

0x6547,	// (0x00071858) list_medium_line_t2_g2_t2_ParamLimits

0x6547,	// (0x00071858) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0007ad29) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0007ad29) list_medium_line_t2_g2_t

0xa081,	// (0x00075392) aid_sp_fs_list_icon_a_sm

0xa089,	// (0x0007539a) aid_sp_fs_list_icon_d

0xa091,	// (0x000753a2) aid_sp_fs_text_primary

0xde78,	// (0x00079189) aid_sp_fs_text_secondary

0x6bbf,	// (0x00071ed0) list_medium_line

0x6bbf,	// (0x00071ed0) list_medium_line_g2

0x6bbf,	// (0x00071ed0) list_medium_line_g3

0x6bbf,	// (0x00071ed0) list_medium_line_plain

0x6bbf,	// (0x00071ed0) list_medium_line_plain_t2

0x6bbf,	// (0x00071ed0) list_medium_line_plain_t3

0x6bbf,	// (0x00071ed0) list_medium_line_right_icon

0x6bbf,	// (0x00071ed0) list_medium_line_right_iconx2

0x6bbf,	// (0x00071ed0) list_medium_line_t2

0x6bbf,	// (0x00071ed0) list_medium_line_t2_g2

0x6bbf,	// (0x00071ed0) list_medium_line_t2_g3

0x6bbf,	// (0x00071ed0) list_medium_line_t2_right_icon

0x6bbf,	// (0x00071ed0) list_medium_line_t2_right_iconx2

0x6bbf,	// (0x00071ed0) list_medium_line_t3

0x6bbf,	// (0x00071ed0) list_medium_line_t3_g2

0x6bbf,	// (0x00071ed0) list_medium_line_t3_g3

0x6bbf,	// (0x00071ed0) list_medium_line_t3_right_iconx2

0x6bc8,	// (0x00071ed9) list_medium_line_t4_g4

0x6bbf,	// (0x00071ed0) list_medium_line_x2

0x6bbf,	// (0x00071ed0) list_medium_line_x2_t2_g2

0x6bbf,	// (0x00071ed0) list_medium_line_x2_t2_g3

0x6bbf,	// (0x00071ed0) list_medium_line_x2_t2_g4

0x6bbf,	// (0x00071ed0) list_medium_line_x2_t3

0x6bbf,	// (0x00071ed0) list_medium_line_x2_t3_g2

0x6bbf,	// (0x00071ed0) list_medium_line_x2_t3_g3

0x6bbf,	// (0x00071ed0) list_medium_line_x2_t3_g4

0x6bbf,	// (0x00071ed0) list_medium_line_x2_t4_g2

0x6bbf,	// (0x00071ed0) list_medium_line_x2_t4_g4

0x6bd1,	// (0x00071ee2) list_medium_line_x3

0x6bd1,	// (0x00071ee2) list_medium_line_x3_t4

0x6bd1,	// (0x00071ee2) list_medium_line_x3_t4_g4

0x6bc8,	// (0x00071ed9) list_medium_line_x4_t4

0x6bc8,	// (0x00071ed9) list_medium_line_x4_t4_g7

0x6bc8,	// (0x00071ed9) list_medium_line_x4_t5

0x6bda,	// (0x00071eeb) list_single_fs_dyc_pane_ParamLimits

0x6bda,	// (0x00071eeb) list_single_fs_dyc_pane

0x140e,	// (0x0006c71f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x4_t4_g7_g1

0x7347,	// (0x00072658) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7347,	// (0x00072658) list_medium_line_x4_t4_g7_g2

0x7353,	// (0x00072664) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7353,	// (0x00072664) list_medium_line_x4_t4_g7_g3

0x7362,	// (0x00072673) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7362,	// (0x00072673) list_medium_line_x4_t4_g7_g4

0x736e,	// (0x0007267f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x736e,	// (0x0007267f) list_medium_line_x4_t4_g7_g5

0x737d,	// (0x0007268e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x737d,	// (0x0007268e) list_medium_line_x4_t4_g7_g6

0x738c,	// (0x0007269d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x738c,	// (0x0007269d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0007aef4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0007aef4) list_medium_line_x4_t4_g7_g

0x7398,	// (0x000726a9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7398,	// (0x000726a9) list_medium_line_x4_t4_g7_t1

0x73ad,	// (0x000726be) list_medium_line_x4_t4_g7_t2_ParamLimits

0x73ad,	// (0x000726be) list_medium_line_x4_t4_g7_t2

0x73c2,	// (0x000726d3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x73c2,	// (0x000726d3) list_medium_line_x4_t4_g7_t3

0x73d7,	// (0x000726e8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x73d7,	// (0x000726e8) list_medium_line_x4_t4_g7_t4

0x73e9,	// (0x000726fa) list_medium_line_x4_t4_g7_t5_ParamLimits

0x73e9,	// (0x000726fa) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0007af03) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0007af03) list_medium_line_x4_t4_g7_t

0x73fb,	// (0x0007270c) list_single_dyc_row_pane_ParamLimits

0x73fb,	// (0x0007270c) list_single_dyc_row_pane

0x7b1b,	// (0x00072e2c) call5_gesture_pane_ParamLimits

0x7b1b,	// (0x00072e2c) call5_gesture_pane

0x7b71,	// (0x00072e82) call5_windows_pane_ParamLimits

0x7b71,	// (0x00072e82) call5_windows_pane

0x7bdc,	// (0x00072eed) call5_swipe_1_pane_cp_ParamLimits

0x7bdc,	// (0x00072eed) call5_swipe_1_pane_cp

0x7be8,	// (0x00072ef9) call5_swipe_2_pane_cp_ParamLimits

0x7be8,	// (0x00072ef9) call5_swipe_2_pane_cp

0xaa2c,	// (0x00075d3d) call5_image_pane_cp

0x7bf4,	// (0x00072f05) popup_call5_audio_first_window_cp_ParamLimits

0x7bf4,	// (0x00072f05) popup_call5_audio_first_window_cp

0xe6c5,	// (0x000799d6) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6c5,	// (0x000799d6) call5_swipe_1_pane_g1_cp

0xe732,	// (0x00079a43) call5_swipe_1_pane_g2_cp

0xe6de,	// (0x000799ef) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6de,	// (0x000799ef) call5_swipe_1_pane_t1_cp

0xe6c5,	// (0x000799d6) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6c5,	// (0x000799d6) call5_swipe_2_pane_g1_cp

0xe73a,	// (0x00079a4b) call5_swipe_2_pane_g2_cp

0xe742,	// (0x00079a53) call5_swipe_2_pane_t1_cp_ParamLimits

0xe742,	// (0x00079a53) call5_swipe_2_pane_t1_cp

0xb4c1,	// (0x000767d2) main_sp_fs_email_pane

0xe757,	// (0x00079a68) main_sp_fs_listscroll_pane_te

0xa09a,	// (0x000753ab) popup_sp_fs_action_menu_pane_ParamLimits

0xa09a,	// (0x000753ab) popup_sp_fs_action_menu_pane

0xccec,	// (0x00077ffd) bg_sp_fs_ctrlbar_pane_g1

0xe760,	// (0x00079a71) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe769,	// (0x00079a7a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe772,	// (0x00079a83) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccec,	// (0x00077ffd) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0007aff1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcad1,	// (0x00077de2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcad1,	// (0x00077de2) bg_sp_fs_ctrlbar_ddmenu_pane

0xe77b,	// (0x00079a8c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe77b,	// (0x00079a8c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe787,	// (0x00079a98) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe787,	// (0x00079a98) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0007affa) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0007affa) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe793,	// (0x00079aa4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe793,	// (0x00079aa4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c02,	// (0x00072f13) list_medium_line_t2_right_icon_g1

0x7c0a,	// (0x00072f1b) list_medium_line_t2_right_icon_t1

0x7c1a,	// (0x00072f2b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0007afff) list_medium_line_t2_right_icon_t

0xc8e4,	// (0x00077bf5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8e4,	// (0x00077bf5) bg_sp_fs_ctrlbar_pane

0x7c74,	// (0x00072f85) main_sp_fs_ctrlbar_button_pane_cp01

0x7c7e,	// (0x00072f8f) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e5,	// (0x00079af6) main_sp_fs_ctrlbar_pane_g1

0xe7f1,	// (0x00079b02) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0007b004) main_sp_fs_ctrlbar_pane_g

0xe7fd,	// (0x00079b0e) main_sp_fs_ctrlbar_pane_t1

0x7c88,	// (0x00072f99) main_sp_fs_ctrlbar_pane

0x7cac,	// (0x00072fbd) main_sp_fs_listscroll_pane_te_cp01

0x7ccc,	// (0x00072fdd) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7ccc,	// (0x00072fdd) popup_sp_fs_action_menu_pane_cp01

0xb4c1,	// (0x000767d2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb4c1,	// (0x000767d2) bg_sp_fs_highlight_list_pane_cp01

0xa0dc,	// (0x000753ed) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa0dc,	// (0x000753ed) sp_fs_action_menu_list_gene_pane_g1

0xe82d,	// (0x00079b3e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe82d,	// (0x00079b3e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0007b00e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0007b00e) sp_fs_action_menu_list_gene_pane_g

0xa0eb,	// (0x000753fc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa0eb,	// (0x000753fc) sp_fs_action_menu_list_gene_pane_t1

0xa103,	// (0x00075414) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa103,	// (0x00075414) sp_fs_action_menu_list_gene_pane

0xe83a,	// (0x00079b4b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe83a,	// (0x00079b4b) popup_sp_fs_action_menu_bg_pane

0xa122,	// (0x00075433) sp_fs_action_menu_list_pane_ParamLimits

0xa122,	// (0x00075433) sp_fs_action_menu_list_pane

0xa142,	// (0x00075453) sp_fs_scroll_pane_cp01_ParamLimits

0xa142,	// (0x00075453) sp_fs_scroll_pane_cp01

0x7cfc,	// (0x0007300d) list_medium_line_plain_t2_t1

0x7d0c,	// (0x0007301d) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0007b013) list_medium_line_plain_t2_t

0x7d1c,	// (0x0007302d) list_medium_line_plain_t3_t1

0x7d2c,	// (0x0007303d) list_medium_line_plain_t3_t2

0x7d3a,	// (0x0007304b) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0007b018) list_medium_line_plain_t3_t

0x140e,	// (0x0006c71f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x2_t2_g2_g1

0x1426,	// (0x0006c737) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1426,	// (0x0006c737) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007a557) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007a557) list_medium_line_x2_t2_g2_g

0x248b,	// (0x0006d79c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x248b,	// (0x0006d79c) list_medium_line_x2_t2_g2_t1

0x145b,	// (0x0006c76c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x145b,	// (0x0006c76c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0007b01f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0007b01f) list_medium_line_x2_t2_g2_t

0x140e,	// (0x0006c71f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x2_t4_g2_g1

0x7d48,	// (0x00073059) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7d48,	// (0x00073059) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0007b024) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0007b024) list_medium_line_x2_t4_g2_g

0x7d5a,	// (0x0007306b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7d5a,	// (0x0007306b) list_medium_line_x2_t4_g2_t1

0x7d74,	// (0x00073085) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7d74,	// (0x00073085) list_medium_line_x2_t4_g2_t2

0x7d8a,	// (0x0007309b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7d8a,	// (0x0007309b) list_medium_line_x2_t4_g2_t3

0x145b,	// (0x0006c76c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x145b,	// (0x0006c76c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0007b029) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0007b029) list_medium_line_x2_t4_g2_t

0x7d9f,	// (0x000730b0) list_medium_line_t3_right_iconx2_g1

0x7c02,	// (0x00072f13) list_medium_line_t3_right_iconx2_g2

0x7da7,	// (0x000730b8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0007b032) list_medium_line_t3_right_iconx2_g

0x7db1,	// (0x000730c2) list_medium_line_t3_right_iconx2_t1

0x7dc1,	// (0x000730d2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0007b039) list_medium_line_t3_right_iconx2_t

0x140e,	// (0x0006c71f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x3_t4_g4_g1

0x141a,	// (0x0006c72b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x141a,	// (0x0006c72b) list_medium_line_x3_t4_g4_g2

0x14c1,	// (0x0006c7d2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x14c1,	// (0x0006c7d2) list_medium_line_x3_t4_g4_g3

0x7dcf,	// (0x000730e0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7dcf,	// (0x000730e0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0007b03e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0007b03e) list_medium_line_x3_t4_g4_g

0x7ddb,	// (0x000730ec) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ddb,	// (0x000730ec) list_medium_line_x3_t4_g4_t1

0x7df2,	// (0x00073103) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7df2,	// (0x00073103) list_medium_line_x3_t4_g4_t2

0x7e0d,	// (0x0007311e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7e0d,	// (0x0007311e) list_medium_line_x3_t4_g4_t3

0x7e22,	// (0x00073133) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e22,	// (0x00073133) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0007b047) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0007b047) list_medium_line_x3_t4_g4_t

0x7e3f,	// (0x00073150) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e3f,	// (0x00073150) list_single_dyc_row_text_pane_t1

0x7e88,	// (0x00073199) list_single_dyc_row_text_pane_t2_ParamLimits

0x7e88,	// (0x00073199) list_single_dyc_row_text_pane_t2

0xa168,	// (0x00075479) list_single_dyc_row_text_pane_t3_ParamLimits

0xa168,	// (0x00075479) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0007b050) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0007b050) list_single_dyc_row_text_pane_t

0xa18c,	// (0x0007549d) list_single_dyc_row_pane_g1_ParamLimits

0xa18c,	// (0x0007549d) list_single_dyc_row_pane_g1

0xa198,	// (0x000754a9) list_single_dyc_row_pane_g2_ParamLimits

0xa198,	// (0x000754a9) list_single_dyc_row_pane_g2

0xa1a4,	// (0x000754b5) list_single_dyc_row_pane_g3_ParamLimits

0xa1a4,	// (0x000754b5) list_single_dyc_row_pane_g3

0xa1b0,	// (0x000754c1) list_single_dyc_row_pane_g4_ParamLimits

0xa1b0,	// (0x000754c1) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0007b05d) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0007b05d) list_single_dyc_row_pane_g

0xa1bc,	// (0x000754cd) list_single_dyc_row_text_pane_ParamLimits

0xa1bc,	// (0x000754cd) list_single_dyc_row_text_pane

0x9391,	// (0x000746a2) bg_sp_fs_scroll_pane

0xe848,	// (0x00079b59) thumb_sp_fs_scroll_pane

0x6515,	// (0x00071826) list_medium_line_g1_ParamLimits

0x6515,	// (0x00071826) list_medium_line_g1

0x7fbd,	// (0x000732ce) list_medium_line_t1_ParamLimits

0x7fbd,	// (0x000732ce) list_medium_line_t1

0x140e,	// (0x0006c71f) list_medium_line_x2_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x2_g1

0x141a,	// (0x0006c72b) list_medium_line_x2_g2_ParamLimits

0x141a,	// (0x0006c72b) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0007b066) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0007b066) list_medium_line_x2_g

0xa1db,	// (0x000754ec) list_medium_line_x2_t1_ParamLimits

0xa1db,	// (0x000754ec) list_medium_line_x2_t1

0x140e,	// (0x0006c71f) list_medium_line_x3_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x3_g1

0x141a,	// (0x0006c72b) list_medium_line_x3_g2_ParamLimits

0x141a,	// (0x0006c72b) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0007b066) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0007b066) list_medium_line_x3_g

0xa1db,	// (0x000754ec) list_medium_line_x3_t1_ParamLimits

0xa1db,	// (0x000754ec) list_medium_line_x3_t1

0xe851,	// (0x00079b62) thumb_sp_fs_scroll_pane_g1

0xe85a,	// (0x00079b6b) thumb_sp_fs_scroll_pane_g2

0xe863,	// (0x00079b74) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0007b06b) thumb_sp_fs_scroll_pane_g

0xe851,	// (0x00079b62) bg_sp_fs_scroll_pane_g1

0xe85a,	// (0x00079b6b) bg_sp_fs_scroll_pane_g2

0xe863,	// (0x00079b74) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0007b06b) bg_sp_fs_scroll_pane_g

0x140e,	// (0x0006c71f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x140e,	// (0x0006c71f) list_medium_line_x2_t3_g4_g1

0x14b5,	// (0x0006c7c6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x14b5,	// (0x0006c7c6) list_medium_line_x2_t3_g4_g2

0x141a,	// (0x0006c72b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x141a,	// (0x0006c72b) list_medium_line_x2_t3_g4_g3

0x1426,	// (0x0006c737) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1426,	// (0x0006c737) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007a5d3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007a5d3) list_medium_line_x2_t3_g4_g

0x7fd2,	// (0x000732e3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7fd2,	// (0x000732e3) list_medium_line_x2_t3_g4_t1

0x7fec,	// (0x000732fd) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7fec,	// (0x000732fd) list_medium_line_x2_t3_g4_t2

0x145b,	// (0x0006c76c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x145b,	// (0x0006c76c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0007b072) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0007b072) list_medium_line_x2_t3_g4_t

0x6515,	// (0x00071826) list_medium_line_g2_g1_ParamLimits

0x6515,	// (0x00071826) list_medium_line_g2_g1

0x6521,	// (0x00071832) list_medium_line_g2_g2_ParamLimits

0x6521,	// (0x00071832) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0007ad24) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0007ad24) list_medium_line_g2_g

0x8006,	// (0x00073317) list_medium_line_g2_t1_ParamLimits

0x8006,	// (0x00073317) list_medium_line_g2_t1

0x6515,	// (0x00071826) list_medium_line_t3_g2_g1_ParamLimits

0x6515,	// (0x00071826) list_medium_line_t3_g2_g1

0x6521,	// (0x00071832) list_medium_line_t3_g2_g2_ParamLimits

0x6521,	// (0x00071832) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0007ad24) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0007ad24) list_medium_line_t3_g2_g

0x801b,	// (0x0007332c) list_medium_line_t3_g2_t1_ParamLimits

0x801b,	// (0x0007332c) list_medium_line_t3_g2_t1

0x8035,	// (0x00073346) list_medium_line_t3_g2_t2_ParamLimits

0x8035,	// (0x00073346) list_medium_line_t3_g2_t2

0x804b,	// (0x0007335c) list_medium_line_t3_g2_t3_ParamLimits

0x804b,	// (0x0007335c) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0007b079) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0007b079) list_medium_line_t3_g2_t

0x7c02,	// (0x00072f13) list_medium_line_right_icon_g1

0x8065,	// (0x00073376) list_medium_line_right_icon_t1

0x6515,	// (0x00071826) list_medium_line_t2_g1_ParamLimits

0x6515,	// (0x00071826) list_medium_line_t2_g1

0x8073,	// (0x00073384) list_medium_line_t2_t1_ParamLimits

0x8073,	// (0x00073384) list_medium_line_t2_t1

0x808d,	// (0x0007339e) list_medium_line_t2_t2_ParamLimits

0x808d,	// (0x0007339e) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0007b080) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0007b080) list_medium_line_t2_t

0x6515,	// (0x00071826) list_medium_line_t3_g1_ParamLimits

0x6515,	// (0x00071826) list_medium_line_t3_g1

0x80a6,	// (0x000733b7) list_medium_line_t3_t1_ParamLimits

0x80a6,	// (0x000733b7) list_medium_line_t3_t1

0x80c0,	// (0x000733d1) list_medium_line_t3_t2_ParamLimits

0x80c0,	// (0x000733d1) list_medium_line_t3_t2

0x80d6,	// (0x000733e7) list_medium_line_t3_t3_ParamLimits

0x80d6,	// (0x000733e7) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0007b085) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0007b085) list_medium_line_t3_t

0x6515,	// (0x00071826) list_medium_line_g3_g1_ParamLimits

0x6515,	// (0x00071826) list_medium_line_g3_g1

0x80eb,	// (0x000733fc) list_medium_line_g3_g2_ParamLimits

0x80eb,	// (0x000733fc) list_medium_line_g3_g2

0x6521,	// (0x00071832) list_medium_line_g3_g3_ParamLimits

0x6521,	// (0x00071832) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0007b08c) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0007b08c) list_medium_line_g3_g

0x80f7,	// (0x00073408) list_medium_line_g3_t1_ParamLimits

0x80f7,	// (0x00073408) list_medium_line_g3_t1

0x6515,	// (0x00071826) list_medium_line_t2_g3_g1_ParamLimits

0x6515,	// (0x00071826) list_medium_line_t2_g3_g1

0x80eb,	// (0x000733fc) list_medium_line_t2_g3_g2_ParamLimits

0x80eb,	// (0x000733fc) list_medium_line_t2_g3_g2

0x6521,	// (0x00071832) list_medium_line_t2_g3_g3_ParamLimits

0x6521,	// (0x00071832) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0007b08c) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0007b08c) list_medium_line_t2_g3_g

0x810c,	// (0x0007341d) list_medium_line_t2_g3_t1_ParamLimits

0x810c,	// (0x0007341d) list_medium_line_t2_g3_t1

0x8126,	// (0x00073437) list_medium_line_t2_g3_t2_ParamLimits

0x8126,	// (0x00073437) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0007b093) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0007b093) list_medium_line_t2_g3_t

0x6515,	// (0x00071826) list_medium_line_t3_g3_g1_ParamLimits

0x6515,	// (0x00071826) list_medium_line_t3_g3_g1

0x80eb,	// (0x000733fc) list_medium_line_t3_g3_g2_ParamLimits

0x80eb,	// (0x000733fc) list_medium_line_t3_g3_g2

0x6521,	// (0x00071832) list_medium_line_t3_g3_g3_ParamLimits

0x6521,	// (0x00071832) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0007b08c) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0007b08c) list_medium_line_t3_g3_g

0x8144,	// (0x00073455) list_medium_line_t3_g3_t1_ParamLimits

0x8144,	// (0x00073455) list_medium_line_t3_g3_t1

0x815d,	// (0x0007346e) list_medium_line_t3_g3_t2_ParamLimits

0x815d,	// (0x0007346e) list_medium_line_t3_g3_t2

0x8173,	// (0x00073484) list_medium_line_t3_g3_t3_ParamLimits

0x8173,	// (0x00073484) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0007b098) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0007b098) list_medium_line_t3_g3_t

0x7d9f,	// (0x000730b0) list_medium_line_right_iconx2_g1

0x7c02,	// (0x00072f13) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0007b09f) list_medium_line_right_iconx2_g

0x818d,	// (0x0007349e) list_medium_line_right_iconx2_t1

0x7d9f,	// (0x000730b0) list_medium_line_t2_right_iconx2_g1

0x7c02,	// (0x00072f13) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0007b09f) list_medium_line_t2_right_iconx2_g

0x819b,	// (0x000734ac) list_medium_line_t2_right_iconx2_t1

0x81ab,	// (0x000734bc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0007b0a4) list_medium_line_t2_right_iconx2_t

0x81bd,	// (0x000734ce) list_medium_line_x4_t4_t1

0x81cb,	// (0x000734dc) list_medium_line_x4_t4_t2

0x81db,	// (0x000734ec) list_medium_line_x4_t4_t3

0x81eb,	// (0x000734fc) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0007b0a9) list_medium_line_x4_t4_t

0x823e,	// (0x0007354f) tport_appsw_pane_ParamLimits

0x823e,	// (0x0007354f) tport_appsw_pane

0x8256,	// (0x00073567) tport_contact_pane_ParamLimits

0x8256,	// (0x00073567) tport_contact_pane

0x826e,	// (0x0007357f) tport_listscroll_pane_ParamLimits

0x826e,	// (0x0007357f) tport_listscroll_pane

0x8288,	// (0x00073599) cell_tport_appsw_pane_ParamLimits

0x8288,	// (0x00073599) cell_tport_appsw_pane

0xd714,	// (0x00078a25) tport_appsw_pane_g1_ParamLimits

0xd714,	// (0x00078a25) tport_appsw_pane_g1

0xe86c,	// (0x00079b7d) tport_contact_pane_g1

0xe875,	// (0x00079b86) tport_contact_pane_t1

0xe883,	// (0x00079b94) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0007b0b2) tport_contact_pane_t

0xe891,	// (0x00079ba2) list_tport_pane

0xe89a,	// (0x00079bab) scroll_pane_cp_030

0x82d0,	// (0x000735e1) cell_tport_appsw_pane_g1

0x82e0,	// (0x000735f1) cell_tport_appsw_pane_t1

0x82ee,	// (0x000735ff) grid_highlight_pane_cp019

0x82f6,	// (0x00073607) list_tport_double_graphic_pane_ParamLimits

0x82f6,	// (0x00073607) list_tport_double_graphic_pane

0xb4c1,	// (0x000767d2) list_highlight_pane_cp023_ParamLimits

0xb4c1,	// (0x000767d2) list_highlight_pane_cp023

0x8303,	// (0x00073614) list_tport_double_graphic_pane_g1_ParamLimits

0x8303,	// (0x00073614) list_tport_double_graphic_pane_g1

0x8310,	// (0x00073621) list_tport_double_graphic_pane_t1_ParamLimits

0x8310,	// (0x00073621) list_tport_double_graphic_pane_t1

0x8325,	// (0x00073636) list_tport_double_graphic_pane_t2_ParamLimits

0x8325,	// (0x00073636) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0007b0be) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0007b0be) list_tport_double_graphic_pane_t

0x9391,	// (0x000746a2) main_cale_note_pane

0x5cc4,	// (0x00070fd5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5cc4,	// (0x00070fd5) cell_vitu2_function_top_wide_pane_cp01

0x77aa,	// (0x00072abb) wait_bar_pane_cp05_ParamLimits

0xb4c1,	// (0x000767d2) listscroll_cmail_pane

0xe8a3,	// (0x00079bb4) list_cmail_pane

0x8337,	// (0x00073648) list_cmail_body_pane

0x834c,	// (0x0007365d) list_single_cmail_header_caption_pane

0x8363,	// (0x00073674) list_single_cmail_header_detail_pane_ParamLimits

0x8363,	// (0x00073674) list_single_cmail_header_detail_pane

0xe8b3,	// (0x00079bc4) list_single_cmail_header_caption_pane_t1

0x838d,	// (0x0007369e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x838d,	// (0x0007369e) list_single_cmail_header_detail_pane_g1

0xa1f1,	// (0x00075502) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa1f1,	// (0x00075502) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0007b0c3) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0007b0c3) list_single_cmail_header_detail_pane_g

0xa1fd,	// (0x0007550e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa1fd,	// (0x0007550e) list_single_cmail_header_detail_pane_t1

0xa25d,	// (0x0007556e) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa25d,	// (0x0007556e) list_single_cmail_header_editor_pane_bg

0xe358,	// (0x00079669) list_cmail_body_pane_g1

0xe8d7,	// (0x00079be8) list_cmail_body_pane_t1

0xd734,	// (0x00078a45) list_single_cmail_header_editor_pane_bg_g1

0xac85,	// (0x00075f96) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd744,	// (0x00078a55) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd73c,	// (0x00078a4d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd970,	// (0x00078c81) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd764,	// (0x00078a75) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd754,	// (0x00078a65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd75c,	// (0x00078a6d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac65,	// (0x00075f76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x83a5,	// (0x000736b6) calenote_gesture_pane_ParamLimits

0x83a5,	// (0x000736b6) calenote_gesture_pane

0x83c5,	// (0x000736d6) calenote_window_pane_ParamLimits

0x83c5,	// (0x000736d6) calenote_window_pane

0xe8e5,	// (0x00079bf6) popup_note_window_cp01

0x83e1,	// (0x000736f2) calenote_swipe_1_pane_ParamLimits

0x83e1,	// (0x000736f2) calenote_swipe_1_pane

0x7be8,	// (0x00072ef9) calenote_swipe_2_pane_ParamLimits

0x7be8,	// (0x00072ef9) calenote_swipe_2_pane

0xe6c5,	// (0x000799d6) calenote_swipe_1_pane_g1_ParamLimits

0xe6c5,	// (0x000799d6) calenote_swipe_1_pane_g1

0xe6d2,	// (0x000799e3) calenote_swipe_1_pane_g2_ParamLimits

0xe6d2,	// (0x000799e3) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0007afe7) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0007afe7) calenote_swipe_1_pane_g

0xe8f7,	// (0x00079c08) calenote_swipe_1_pane_t1_ParamLimits

0xe8f7,	// (0x00079c08) calenote_swipe_1_pane_t1

0xe6c5,	// (0x000799d6) calenote_swipe_2_pane_g1_ParamLimits

0xe6c5,	// (0x000799d6) calenote_swipe_2_pane_g1

0xe916,	// (0x00079c27) calenote_swipe_2_pane_g2_ParamLimits

0xe916,	// (0x00079c27) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0007b0cf) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0007b0cf) calenote_swipe_2_pane_g

0xe922,	// (0x00079c33) calenote_swipe_2_pane_t1_ParamLimits

0xe922,	// (0x00079c33) calenote_swipe_2_pane_t1

0x9391,	// (0x000746a2) main_mup_navstr_pane

0x4988,	// (0x0006fc99) main_mup3_pane_t7_ParamLimits

0x4988,	// (0x0006fc99) main_mup3_pane_t7

0x97bf,	// (0x00074ad0) main_mp4_pane_g6_ParamLimits

0x97bf,	// (0x00074ad0) main_mp4_pane_g6

0x9963,	// (0x00074c74) main_image3_pane_t4_ParamLimits

0x9963,	// (0x00074c74) main_image3_pane_t4

0x83f6,	// (0x00073707) popup_navstr_preview_pane_ParamLimits

0x83f6,	// (0x00073707) popup_navstr_preview_pane

0x840a,	// (0x0007371b) scroll_navstr_pane_ParamLimits

0x840a,	// (0x0007371b) scroll_navstr_pane

0x9391,	// (0x000746a2) bg_popup_preview_window_pane_cp04

0xe949,	// (0x00079c5a) popup_navstr_preview_pane_t1

0x841e,	// (0x0007372f) scroll_navstr_pane_g1_ParamLimits

0x841e,	// (0x0007372f) scroll_navstr_pane_g1

0x8432,	// (0x00073743) scroll_navstr_pane_t1_ParamLimits

0x8432,	// (0x00073743) scroll_navstr_pane_t1

0xe8ee,	// (0x00079bff) bg_button_pane_cp014

0xe8ee,	// (0x00079bff) bg_button_pane_cp030

0x7ac1,	// (0x00072dd2) list_double_fisheye_pane_g4_ParamLimits

0x7ac1,	// (0x00072dd2) list_double_fisheye_pane_g4

0x7acd,	// (0x00072dde) list_double_fisheye_pane_g5_ParamLimits

0x7acd,	// (0x00072dde) list_double_fisheye_pane_g5

0xce08,	// (0x00078119) sp_fs_scroll_pane_cp03

0xe7e5,	// (0x00079af6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7f1,	// (0x00079b02) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0007b004) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7fd,	// (0x00079b0e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8ab,	// (0x00079bbc) sp_fs_scroll_pane_cp02

0xa96b,	// (0x00075c7c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa96b,	// (0x00075c7c) popup_sp_fs_calendar_preview_list_single_pane

0x9391,	// (0x000746a2) main_cam6_pano_pane

0x9409,	// (0x0007471a) main_mup3_pane_ParamLimits

0x9391,	// (0x000746a2) main_phacti_pane

0x767d,	// (0x0007298e) bg_button_pane_cp11

0x7697,	// (0x000729a8) main_mobtv_info_pane_g2_ParamLimits

0x7697,	// (0x000729a8) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0007af64) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0007af64) main_mobtv_info_pane_g

0x7874,	// (0x00072b85) sc_clock_pane_t5_ParamLimits

0x7874,	// (0x00072b85) sc_clock_pane_t5

0x793c,	// (0x00072c4d) main_radioblah_pane_g1_ParamLimits

0xe5f6,	// (0x00079907) main_radioblah_pane_t3_ParamLimits

0xe5f6,	// (0x00079907) main_radioblah_pane_t3

0xe60e,	// (0x0007991f) main_radioblah_pane_t4_ParamLimits

0xe60e,	// (0x0007991f) main_radioblah_pane_t4

0x7964,	// (0x00072c75) main_radioblah_text_pane_ParamLimits

0x7964,	// (0x00072c75) main_radioblah_text_pane

0x7976,	// (0x00072c87) main_radioblah_info_pane_g1_ParamLimits

0x7a0f,	// (0x00072d20) main_radioblah_info_pane_t4_ParamLimits

0x7a0f,	// (0x00072d20) main_radioblah_info_pane_t4

0xb4c1,	// (0x000767d2) main_sp_fs_calendar_pane

0x8449,	// (0x0007375a) main_phacti_pane_g1

0x8451,	// (0x00073762) phacti_note_pane_ParamLimits

0x8451,	// (0x00073762) phacti_note_pane

0xe960,	// (0x00079c71) phacti_term_pane_ParamLimits

0xe960,	// (0x00079c71) phacti_term_pane

0xe975,	// (0x00079c86) phacti_note_pane_t1_ParamLimits

0xe975,	// (0x00079c86) phacti_note_pane_t1

0xa274,	// (0x00075585) phacti_term_pane_g1

0xa27c,	// (0x0007558d) phacti_term_pane_t1_ParamLimits

0xa27c,	// (0x0007558d) phacti_term_pane_t1

0xe98c,	// (0x00079c9d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe994,	// (0x00079ca5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0007b0d9) popup_sp_fs_calendar_preview_list_single_pane_g

0xe99c,	// (0x00079cad) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe99c,	// (0x00079cad) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9b2,	// (0x00079cc3) aid_popup_sp_fs_bg_corner_pane

0xccec,	// (0x00077ffd) popup_sp_fs_calendar_preview_bg_pane_g1

0x9391,	// (0x000746a2) popup_sp_fs_calendar_preview_bg_pane

0x1297,	// (0x0006c5a8) popup_sp_fs_calendar_preview_list_pane

0xc8e4,	// (0x00077bf5) bg_main_sp_fs_cale_pane_ParamLimits

0xc8e4,	// (0x00077bf5) bg_main_sp_fs_cale_pane

0xa2af,	// (0x000755c0) listscroll_cale_mrui_pane_ParamLimits

0xa2af,	// (0x000755c0) listscroll_cale_mrui_pane

0xa2c4,	// (0x000755d5) listscroll_sp_fs_schedule_track_pane

0xa2cd,	// (0x000755de) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2cd,	// (0x000755de) main_sp_fs_ctrlbar_pane_cp01

0xe9ba,	// (0x00079ccb) main_sp_fs_ribbon_pane

0xa2e0,	// (0x000755f1) popup_sp_fs_cale_preview_window

0x84c6,	// (0x000737d7) list_single_sp_fs_schedule_track_pane_ParamLimits

0x84c6,	// (0x000737d7) list_single_sp_fs_schedule_track_pane

0xb4c1,	// (0x000767d2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb4c1,	// (0x000767d2) bg_sp_fs_highlight_list_pane_cp03

0x84da,	// (0x000737eb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x84da,	// (0x000737eb) list_single_sp_fs_schedule_track_pane_g1

0x84e6,	// (0x000737f7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x84e6,	// (0x000737f7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0007b0de) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0007b0de) list_single_sp_fs_schedule_track_pane_g

0x84f2,	// (0x00073803) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x84f2,	// (0x00073803) list_single_sp_fs_schedule_track_pane_t1

0x850c,	// (0x0007381d) sp_fs_schedule_track_pane_ParamLimits

0x850c,	// (0x0007381d) sp_fs_schedule_track_pane

0xe9c2,	// (0x00079cd3) sp_fs_schedule_track_pane_g1

0xe9ca,	// (0x00079cdb) sp_fs_schedule_track_pane_g2

0xe9d2,	// (0x00079ce3) sp_fs_schedule_track_pane_g3

0xe9da,	// (0x00079ceb) sp_fs_schedule_track_pane_g4

0xe9e2,	// (0x00079cf3) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0007b0e3) sp_fs_schedule_track_pane_g

0xd734,	// (0x00078a45) bg_sp_fs_schedule_viewer_highlight_g1

0xac85,	// (0x00075f96) bg_sp_fs_schedule_viewer_highlight_g2

0xd73c,	// (0x00078a4d) bg_sp_fs_schedule_viewer_highlight_g3

0xd744,	// (0x00078a55) bg_sp_fs_schedule_viewer_highlight_g4

0xd970,	// (0x00078c81) bg_sp_fs_schedule_viewer_highlight_g5

0xd754,	// (0x00078a65) bg_sp_fs_schedule_viewer_highlight_g6

0xd75c,	// (0x00078a6d) bg_sp_fs_schedule_viewer_highlight_g7

0xd764,	// (0x00078a75) bg_sp_fs_schedule_viewer_highlight_g8

0xac65,	// (0x00075f76) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0007b0ee) bg_sp_fs_schedule_viewer_highlight_g

0x9391,	// (0x000746a2) bg_main_sp_fs_ribbon_pane

0x851d,	// (0x0007382e) main_sp_fs_ribbon_pane_g1

0xe9ea,	// (0x00079cfb) main_sp_fs_ribbon_pane_t1

0x8526,	// (0x00073837) main_sp_fs_ribbon_pane_t2

0xe9f9,	// (0x00079d0a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0007b101) main_sp_fs_ribbon_pane_t

0xea08,	// (0x00079d19) main_sp_fs_ribbon_scheduler_pane

0xea10,	// (0x00079d21) bg_main_sp_fs_ribbon_pane_g1

0xea19,	// (0x00079d2a) bg_main_sp_fs_ribbon_pane_g2

0xea22,	// (0x00079d33) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0007b108) bg_main_sp_fs_ribbon_pane_g

0xea2a,	// (0x00079d3b) main_sp_fs_ribbon_scheduler_pane_g1

0xea33,	// (0x00079d44) main_sp_fs_ribbon_scheduler_pane_g2

0xea3c,	// (0x00079d4d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0007b10f) main_sp_fs_ribbon_scheduler_pane_g

0xea45,	// (0x00079d56) list_cale_mrui_pane

0x8535,	// (0x00073846) sp_fs_scroll_pane_cp07_ParamLimits

0x8535,	// (0x00073846) sp_fs_scroll_pane_cp07

0x8551,	// (0x00073862) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8551,	// (0x00073862) bg_sp_fs_schedule_viewer_highlight

0xea52,	// (0x00079d63) list_single_sp_fs_schedule_track_pane_cp01

0xea5a,	// (0x00079d6b) list_sp_fs_schedule_track_pane

0xea62,	// (0x00079d73) sp_fs_scroll_pane_cp06_ParamLimits

0xea62,	// (0x00079d73) sp_fs_scroll_pane_cp06

0xccec,	// (0x00077ffd) bgmain_sp_fs_calendar_pane_g1

0x8561,	// (0x00073872) list_single_cale_mrui_pane_ParamLimits

0x8561,	// (0x00073872) list_single_cale_mrui_pane

0xa2f2,	// (0x00075603) list_single_cale_mrui_row_pane_ParamLimits

0xa2f2,	// (0x00075603) list_single_cale_mrui_row_pane

0xa2ff,	// (0x00075610) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa2ff,	// (0x00075610) list_single_cale_mrui_row_pane_g1

0xa337,	// (0x00075648) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa337,	// (0x00075648) list_single_cale_mrui_row_pane_t1

0x8583,	// (0x00073894) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8583,	// (0x00073894) list_single_cale_mrui_row_pane_t2

0xa349,	// (0x0007565a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa349,	// (0x0007565a) list_single_cale_mrui_row_pane_t3

0xa378,	// (0x00075689) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa378,	// (0x00075689) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0007b11d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0007b11d) list_single_cale_mrui_row_pane_t

0x85eb,	// (0x000738fc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x85eb,	// (0x000738fc) list_single_cmail_header_editor_pane_bg_cp01

0x8611,	// (0x00073922) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8611,	// (0x00073922) list_single_cmail_header_editor_pane_bg_cp02

0x8631,	// (0x00073942) main_radioblah_text_pane_t1_ParamLimits

0x8631,	// (0x00073942) main_radioblah_text_pane_t1

0xea81,	// (0x00079d92) cam6_indi_pane_cp01

0xea89,	// (0x00079d9a) cam6_mode_pane_cp01

0xea91,	// (0x00079da2) cam6_pano_pane

0xea9a,	// (0x00079dab) cam6_zoom_pane_cp01

0xeaa2,	// (0x00079db3) cam6_pano_image_pane

0xeaad,	// (0x00079dbe) cam6_pano_pane_g1

0xe358,	// (0x00079669) cam6_pano_pane_g2

0xeab6,	// (0x00079dc7) cam6_pano_pane_g3

0xeabf,	// (0x00079dd0) cam6_pano_pane_g4

0xd2a3,	// (0x000785b4) cam6_pano_pane_g5

0xeac8,	// (0x00079dd9) cam6_pano_pane_g6

0xead2,	// (0x00079de3) cam6_pano_pane_g7

0xeada,	// (0x00079deb) cam6_pano_pane_g8

0xeae3,	// (0x00079df4) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0007b126) cam6_pano_pane_g

0x9391,	// (0x000746a2) main_browser_tag_pane

0xe941,	// (0x00079c52) grid_navstr_albumart_pane

0xeaee,	// (0x00079dff) cell_navstr_albumart_pane_ParamLimits

0xeaee,	// (0x00079dff) cell_navstr_albumart_pane

0xeb0e,	// (0x00079e1f) cell_navstr_albumart_pane_g1

0xc6b5,	// (0x000779c6) cell_navstr_albumart_pane_g2

0xc6c5,	// (0x000779d6) cell_navstr_albumart_pane_g3

0xc6bd,	// (0x000779ce) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0007b139) cell_navstr_albumart_pane_g

0x864c,	// (0x0007395d) bt_list_pane_ParamLimits

0x864c,	// (0x0007395d) bt_list_pane

0x8660,	// (0x00073971) bt_list_pane_t1

0x866f,	// (0x00073980) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0007b142) bt_list_pane_t

0x9391,	// (0x000746a2) main_cale_prevew_pane

0x867e,	// (0x0007398f) popup_cale_preview_window_ParamLimits

0x867e,	// (0x0007398f) popup_cale_preview_window

0xb4c1,	// (0x000767d2) bg_popup_preview_window_pane_cp05_ParamLimits

0xb4c1,	// (0x000767d2) bg_popup_preview_window_pane_cp05

0xeb16,	// (0x00079e27) list_cale_preview_pane_ParamLimits

0xeb16,	// (0x00079e27) list_cale_preview_pane

0x8697,	// (0x000739a8) list_double_cale_preview_pane_ParamLimits

0x8697,	// (0x000739a8) list_double_cale_preview_pane

0xd76c,	// (0x00078a7d) list_single_cale_preview_pane_ParamLimits

0xd76c,	// (0x00078a7d) list_single_cale_preview_pane

0x86a9,	// (0x000739ba) list_single_cale_preview_pane_g1

0x86b1,	// (0x000739c2) list_single_cale_preview_pane_t1_ParamLimits

0x86b1,	// (0x000739c2) list_single_cale_preview_pane_t1

0x86c6,	// (0x000739d7) list_double_cale_preview_pane_g1

0x86ce,	// (0x000739df) list_double_cale_preview_pane_t1_ParamLimits

0x86ce,	// (0x000739df) list_double_cale_preview_pane_t1

0x86e3,	// (0x000739f4) list_double_cale_preview_pane_t2_ParamLimits

0x86e3,	// (0x000739f4) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0007b147) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0007b147) list_double_cale_preview_pane_t

0x9391,	// (0x000746a2) main_ezdial_pane

0xb4c1,	// (0x000767d2) main_sp_fs_email_pane_ParamLimits

0x7c2c,	// (0x00072f3d) cmail_ddmenu_btn01_pane_ParamLimits

0x7c2c,	// (0x00072f3d) cmail_ddmenu_btn01_pane

0x7c3f,	// (0x00072f50) cmail_ddmenu_btn02_pane_ParamLimits

0x7c3f,	// (0x00072f50) cmail_ddmenu_btn02_pane

0x7c62,	// (0x00072f73) cmail_ddmenu_btn03_pane_ParamLimits

0x7c62,	// (0x00072f73) cmail_ddmenu_btn03_pane

0x7c88,	// (0x00072f99) main_sp_fs_ctrlbar_pane_ParamLimits

0x7cac,	// (0x00072fbd) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8337,	// (0x00073648) list_cmail_body_pane_ParamLimits

0xe8c1,	// (0x00079bd2) bg_button_pane_cp12

0xe8ca,	// (0x00079bdb) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ca,	// (0x00079bdb) list_single_cmail_header_detail_pane_g3

0xa239,	// (0x0007554a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa239,	// (0x0007554a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0007b0ca) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0007b0ca) list_single_cmail_header_detail_pane_t

0xa291,	// (0x000755a2) phacti_term_pane_t2_ParamLimits

0xa291,	// (0x000755a2) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0007b0d4) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0007b0d4) phacti_term_pane_t

0xeb22,	// (0x00079e33) aid_size_list_single_double

0x86fb,	// (0x00073a0c) popup_ezdial_listscroll_window

0x8717,	// (0x00073a28) popup_number_entry_window_cp01

0xaa2c,	// (0x00075d3d) bg_popup_call_pane_cp09

0xeb2e,	// (0x00079e3f) ezdial_list_pane

0xeb36,	// (0x00079e47) scroll_pane_cp23

0xc8e4,	// (0x00077bf5) bg_button_pane_cp028_ParamLimits

0xc8e4,	// (0x00077bf5) bg_button_pane_cp028

0x8725,	// (0x00073a36) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8725,	// (0x00073a36) cmail_ddmenu_btn01_pane_g1

0x8731,	// (0x00073a42) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8731,	// (0x00073a42) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0007b14c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0007b14c) cmail_ddmenu_btn01_pane_g

0xeb3e,	// (0x00079e4f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3e,	// (0x00079e4f) cmail_ddmenu_btn01_pane_t1

0xc8e4,	// (0x00077bf5) bg_button_pane_cp029_ParamLimits

0xc8e4,	// (0x00077bf5) bg_button_pane_cp029

0x873d,	// (0x00073a4e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x873d,	// (0x00073a4e) cmail_ddmenu_btn02_pane_g1

0x8756,	// (0x00073a67) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8756,	// (0x00073a67) cmail_ddmenu_btn02_pane_t1

0xb4c1,	// (0x000767d2) bg_button_pane_cp031_ParamLimits

0xb4c1,	// (0x000767d2) bg_button_pane_cp031

0x873d,	// (0x00073a4e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x873d,	// (0x00073a4e) cmail_ddmenu_btn03_pane_g1

0x8756,	// (0x00073a67) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8756,	// (0x00073a67) cmail_ddmenu_btn03_pane_t1

0x5539,	// (0x0007084a) cell_dialer2_keypad_pane_t1_ParamLimits

0x5553,	// (0x00070864) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5553,	// (0x00070864) cell_dialer2_keypad_pane_t1_copy1

0x7492,	// (0x000727a3) ncimui_group_button_pane

0xb4c1,	// (0x000767d2) main_sp_fs_calendar_pane_ParamLimits

0x834c,	// (0x0007365d) list_single_cmail_header_caption_pane_ParamLimits

0xa2a6,	// (0x000755b7) aid_recal_txt_sm_pane

0x9391,	// (0x000746a2) mian_recal_day_pane

0xa2e0,	// (0x000755f1) popup_sp_fs_cale_preview_window_ParamLimits

0xeb53,	// (0x00079e64) list_recal_day_pane

0xa3c2,	// (0x000756d3) list_single_recal_day_pane_ParamLimits

0xa3c2,	// (0x000756d3) list_single_recal_day_pane

0xeb7a,	// (0x00079e8b) list_single_recal_day_pane_g1_ParamLimits

0xeb7a,	// (0x00079e8b) list_single_recal_day_pane_g1

0xa3d4,	// (0x000756e5) list_single_recal_day_pane_g2_ParamLimits

0xa3d4,	// (0x000756e5) list_single_recal_day_pane_g2

0xa3e0,	// (0x000756f1) list_single_recal_day_pane_g3_ParamLimits

0xa3e0,	// (0x000756f1) list_single_recal_day_pane_g3

0x877a,	// (0x00073a8b) list_single_recal_day_pane_g4_ParamLimits

0x877a,	// (0x00073a8b) list_single_recal_day_pane_g4

0xa3ec,	// (0x000756fd) list_single_recal_day_pane_g5_ParamLimits

0xa3ec,	// (0x000756fd) list_single_recal_day_pane_g5

0xa3f8,	// (0x00075709) list_single_recal_day_pane_g6_ParamLimits

0xa3f8,	// (0x00075709) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0007b15b) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0007b15b) list_single_recal_day_pane_g

0xa40c,	// (0x0007571d) list_single_recal_day_pane_t1

0xa41e,	// (0x0007572f) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0007b166) list_single_recal_day_pane_t

0x8792,	// (0x00073aa3) ncimui_query_button_pane_ParamLimits

0x8792,	// (0x00073aa3) ncimui_query_button_pane

0x87a2,	// (0x00073ab3) ncimui_query_button_pane_t1_ParamLimits

0x87a2,	// (0x00073ab3) ncimui_query_button_pane_t1

0xeb86,	// (0x00079e97) ncimui_query_button_pane_t2_ParamLimits

0xeb86,	// (0x00079e97) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0007b16b) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0007b16b) ncimui_query_button_pane_t

0x87b5,	// (0x00073ac6) query_button_pane_ParamLimits

0x87b5,	// (0x00073ac6) query_button_pane

0x9391,	// (0x000746a2) bg_button_pane_cp0028

0xeb99,	// (0x00079eaa) query_button_pane_t1

0x35cd,	// (0x0006e8de) main_tport_pane_ParamLimits

0x81fb,	// (0x0007350c) bg_popup_window_pane_cp01_ParamLimits

0x81fb,	// (0x0007350c) bg_popup_window_pane_cp01

0x8216,	// (0x00073527) heading_pane_cp08_ParamLimits

0x8216,	// (0x00073527) heading_pane_cp08

0x8229,	// (0x0007353a) heading_pane_cp07_ParamLimits

0x8229,	// (0x0007353a) heading_pane_cp07

0x82d0,	// (0x000735e1) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0007b0b7) cell_tport_appsw_pane_g

0x9ed3,	// (0x000751e4) input_candi_list_open_g1

0xae66,	// (0x00076177) list_cale_time_pane_g6_ParamLimits

0xae66,	// (0x00076177) list_cale_time_pane_g6

0x4395,	// (0x0006f6a6) aid_size_touch_calib_1_ParamLimits

0x4395,	// (0x0006f6a6) aid_size_touch_calib_1

0x43a7,	// (0x0006f6b8) aid_size_touch_calib_2_ParamLimits

0x43a7,	// (0x0006f6b8) aid_size_touch_calib_2

0x43bf,	// (0x0006f6d0) aid_size_touch_calib_3_ParamLimits

0x43bf,	// (0x0006f6d0) aid_size_touch_calib_3

0x43dd,	// (0x0006f6ee) aid_size_touch_calib_4_ParamLimits

0x43dd,	// (0x0006f6ee) aid_size_touch_calib_4

0x43f5,	// (0x0006f706) main_touch_calib_button_group_pane_ParamLimits

0x43f5,	// (0x0006f706) main_touch_calib_button_group_pane

0x440d,	// (0x0006f71e) main_touch_calib_pane_g1_ParamLimits

0x441f,	// (0x0006f730) main_touch_calib_pane_g2_ParamLimits

0x4431,	// (0x0006f742) main_touch_calib_pane_g3_ParamLimits

0x4443,	// (0x0006f754) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0007aa75) main_touch_calib_pane_g_ParamLimits

0x4455,	// (0x0006f766) main_touch_calib_pane_t1_ParamLimits

0x446f,	// (0x0006f780) main_touch_calib_pane_t2_ParamLimits

0x4489,	// (0x0006f79a) main_touch_calib_pane_t3_ParamLimits

0x449d,	// (0x0006f7ae) main_touch_calib_pane_t4_ParamLimits

0x44b1,	// (0x0006f7c2) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0007aa7e) main_touch_calib_pane_t_ParamLimits

0xd046,	// (0x00078357) list_single_fp_cale_pane_g3_ParamLimits

0xd046,	// (0x00078357) list_single_fp_cale_pane_g3

0x9409,	// (0x0007471a) bg_button_pane_cp012_ParamLimits

0x9409,	// (0x0007471a) bg_vkb2_func_pane_cp03_ParamLimits

0x64cb,	// (0x000717dc) cell_vitu2_function_top_pane_g1_ParamLimits

0x9409,	// (0x0007471a) bg_vkb2_func_pane_cp04_ParamLimits

0x741d,	// (0x0007272e) main_ncimui_button_group_pane_ParamLimits

0x741d,	// (0x0007272e) main_ncimui_button_group_pane

0x747d,	// (0x0007278e) main_ncimui_pane_t3_ParamLimits

0x747d,	// (0x0007278e) main_ncimui_pane_t3

0xe957,	// (0x00079c68) phacti_button_group_pane

0xeb22,	// (0x00079e33) aid_size_list_single_double_ParamLimits

0x86fb,	// (0x00073a0c) popup_ezdial_listscroll_window_ParamLimits

0x8717,	// (0x00073a28) popup_number_entry_window_cp01_ParamLimits

0x87c8,	// (0x00073ad9) phacti_button_pane_ParamLimits

0x87c8,	// (0x00073ad9) phacti_button_pane

0x9391,	// (0x000746a2) bg_button_pane_cp14

0xeba7,	// (0x00079eb8) phacti_button_pane_t1

0x87d9,	// (0x00073aea) main_touch_calib_button_pane_ParamLimits

0x87d9,	// (0x00073aea) main_touch_calib_button_pane

0xa855,	// (0x00075b66) bg_button_pane_cp18_ParamLimits

0xa855,	// (0x00075b66) bg_button_pane_cp18

0xebb5,	// (0x00079ec6) main_touch_calib_button_pane_t1_ParamLimits

0xebb5,	// (0x00079ec6) main_touch_calib_button_pane_t1

0xebcb,	// (0x00079edc) main_touch_calib_button_pane_t2_ParamLimits

0xebcb,	// (0x00079edc) main_touch_calib_button_pane_t2

0x0001,

0x0223,	// (0x0006b534) main_touch_calib_button_pane_t_ParamLimits

0x0223,	// (0x0006b534) main_touch_calib_button_pane_t

0x9391,	// (0x000746a2) cell_ncimui_button_pane

0x9391,	// (0x000746a2) bg_button_pane_cp032

0xebe9,	// (0x00079efa) cell_ncimui_button_pane_t1

0x9943,	// (0x00074c54) image3_infobar_pane_ParamLimits

0x9943,	// (0x00074c54) image3_infobar_pane

0x78a0,	// (0x00072bb1) fs_bigclock_status_pane_ParamLimits

0x78a0,	// (0x00072bb1) fs_bigclock_status_pane

0x78ad,	// (0x00072bbe) main_fs_bigclock_clock_pane_ParamLimits

0x78ad,	// (0x00072bbe) main_fs_bigclock_clock_pane

0x78cb,	// (0x00072bdc) main_fs_bigclock_indi_pane_ParamLimits

0x78cb,	// (0x00072bdc) main_fs_bigclock_indi_pane

0x78fd,	// (0x00072c0e) main_fs_bigclock_swipe_pane_ParamLimits

0x78fd,	// (0x00072c0e) main_fs_bigclock_swipe_pane

0x9391,	// (0x000746a2) main_fs_clock_dumped_data

0xe465,	// (0x00079776) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe465,	// (0x00079776) list_single_fs_bigclock_indicator_pane_g1

0xe481,	// (0x00079792) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe481,	// (0x00079792) list_single_fs_bigclock_indicator_pane_g2

0xe49b,	// (0x000797ac) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe49b,	// (0x000797ac) list_single_fs_bigclock_indicator_pane_g3

0xe4b5,	// (0x000797c6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b5,	// (0x000797c6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0007af98) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0007af98) list_single_fs_bigclock_indicator_pane_g

0xe4e0,	// (0x000797f1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4e0,	// (0x000797f1) list_single_fs_bigclock_indicator_pane_t1

0xe508,	// (0x00079819) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe508,	// (0x00079819) list_single_fs_bigclock_indicator_pane_t2

0xe530,	// (0x00079841) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe530,	// (0x00079841) list_single_fs_bigclock_indicator_pane_t3

0xe558,	// (0x00079869) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe558,	// (0x00079869) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0007afa3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0007afa3) list_single_fs_bigclock_indicator_pane_t

0xebf7,	// (0x00079f08) image3_infobar_fav_pane_ParamLimits

0xebf7,	// (0x00079f08) image3_infobar_fav_pane

0xec07,	// (0x00079f18) image3_infobar_loc_pane_ParamLimits

0xec07,	// (0x00079f18) image3_infobar_loc_pane

0xec1b,	// (0x00079f2c) image3_infobar_time_pane_ParamLimits

0xec1b,	// (0x00079f2c) image3_infobar_time_pane

0xccec,	// (0x00077ffd) image3_infobar_time_pane_g1

0xec2b,	// (0x00079f3c) image3_infobar_time_pane_t1

0xccec,	// (0x00077ffd) image3_infobar_loc_pane_g1

0xec39,	// (0x00079f4a) image3_infobar_loc_pane_g2

0x0001,

0x0228,	// (0x0006b539) image3_infobar_loc_pane_g

0xec41,	// (0x00079f52) image3_infobar_loc_pane_t1

0xccec,	// (0x00077ffd) image3_infobar_fav_pane_g1

0xec4f,	// (0x00079f60) image3_infobar_fav_pane_g2

0x0001,

0x022d,	// (0x0006b53e) image3_infobar_fav_pane_g

0xec57,	// (0x00079f68) fs_bigclock_status_battery_pane

0xec60,	// (0x00079f71) fs_bigclock_status_signal_pane

0xec69,	// (0x00079f7a) fs_bigclock_status_title_pane

0xec72,	// (0x00079f83) fs_bigclock_status_signal_pane_g1

0xec7b,	// (0x00079f8c) fs_bigclock_status_signal_pane_g2

0x0001,

0x0232,	// (0x0006b543) fs_bigclock_status_signal_pane_g

0xec83,	// (0x00079f94) fs_bigclock_status_battery_pane_g1

0xec8c,	// (0x00079f9d) fs_bigclock_status_battery_pane_g2

0x0001,

0x0237,	// (0x0006b548) fs_bigclock_status_battery_pane_g

0xec94,	// (0x00079fa5) fs_bigclock_status_title_pane_t1

0x87ee,	// (0x00073aff) main_fs_bigclock_clock_pane_g1

0x87ee,	// (0x00073aff) main_fs_bigclock_clock_pane_g2

0x87ff,	// (0x00073b10) main_fs_bigclock_clock_pane_g3

0x87ff,	// (0x00073b10) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5f,	// (0x0007b170) main_fs_bigclock_clock_pane_g

0x8812,	// (0x00073b23) main_fs_bigclock_clock_pane_t1

0x8828,	// (0x00073b39) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe68,	// (0x0007b179) main_fs_bigclock_clock_pane_t

0xeca2,	// (0x00079fb3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeca2,	// (0x00079fb3) list_single_fs_bigclock_indicator_pane

0xecb3,	// (0x00079fc4) list_single_fs_bigclock_pane_ParamLimits

0xecb3,	// (0x00079fc4) list_single_fs_bigclock_pane

0xecd9,	// (0x00079fea) main_fs_bigclock_indicator_pane_t1

0xece8,	// (0x00079ff9) list_single_fs_bigclock_pane_g1

0xecf0,	// (0x0007a001) list_single_fs_bigclock_pane_t1

0xccec,	// (0x00077ffd) main_fs_bigclock_swipe_pane_g1

0xed33,	// (0x0007a044) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0256,	// (0x0006b567) main_fs_bigclock_swipe_pane_g

0xed3b,	// (0x0007a04c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed3b,	// (0x0007a04c) main_fs_bigclock_swipe_pane_t1

0x24cc,	// (0x0006d7dd) call_type_pane_ParamLimits

0x9391,	// (0x000746a2) main_btmg_pane

0xa32b,	// (0x0007563c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa32b,	// (0x0007563c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0007b116) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0007b116) list_single_cale_mrui_row_pane_g

0xa3b1,	// (0x000756c2) list_recal_vselct_arw_lo_pane

0xeb72,	// (0x00079e83) list_recal_vselct_arw_up_pane

0xa3b9,	// (0x000756ca) list_recal_vselct_pane

0x8882,	// (0x00073b93) btmg_button_pane

0x888c,	// (0x00073b9d) main_btmg_pane_g1

0x9391,	// (0x000746a2) bg_button_pane_cp044

0xed58,	// (0x0007a069) btmg_button_pane_t1

0xc8d0,	// (0x00077be1) aid_listscroll_gen

0xb4c1,	// (0x000767d2) main_cntbar_detail_pane

0xe8a3,	// (0x00079bb4) list_cmail_folder_pane

0xce08,	// (0x00078119) sp_fs_scroll_pane_cp03_ParamLimits

0x8896,	// (0x00073ba7) list_single_fs_dyc_pane_cp01_ParamLimits

0x8896,	// (0x00073ba7) list_single_fs_dyc_pane_cp01

0xed66,	// (0x0007a077) aid_size_cmail_indent

0xa430,	// (0x00075741) list_single_dyc_row_pane_cp01

0x88df,	// (0x00073bf0) cntbar_detail_list_pane_ParamLimits

0x88df,	// (0x00073bf0) cntbar_detail_list_pane

0x892b,	// (0x00073c3c) main_cntbar_detail_cont_pane_ParamLimits

0x892b,	// (0x00073c3c) main_cntbar_detail_cont_pane

0xce08,	// (0x00078119) scroll_pane_cp032_ParamLimits

0xce08,	// (0x00078119) scroll_pane_cp032

0x893f,	// (0x00073c50) cntbar_detail_list_event_pane_ParamLimits

0x893f,	// (0x00073c50) cntbar_detail_list_event_pane

0x88ef,	// (0x00073c00) cntbar_detail_list_shct_pane

0xacf1,	// (0x00076002) aid_list_gen

0xed6f,	// (0x0007a080) aid_scroll

0xed78,	// (0x0007a089) aid_size_touch_scroll_bar

0x6bbf,	// (0x00071ed0) aid_list_double

0xa439,	// (0x0007574a) aid_list_single

0x6bbf,	// (0x00071ed0) aid_list_single_lg

0xa442,	// (0x00075753) aid_list_z_g_a_sm

0xa44a,	// (0x0007575b) aid_list_z_g_d

0xa452,	// (0x00075763) aid_txt_z_prm

0x894f,	// (0x00073c60) aid_txt_z_prm_cp01

0x895d,	// (0x00073c6e) aid_txt_z_sec

0x896b,	// (0x00073c7c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x896b,	// (0x00073c7c) main_cntbar_detail_cont_pane_g1

0x897f,	// (0x00073c90) main_cntbar_detail_cont_pane_g2_ParamLimits

0x897f,	// (0x00073c90) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe74,	// (0x0007b185) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe74,	// (0x0007b185) main_cntbar_detail_cont_pane_g

0xed81,	// (0x0007a092) main_cntbar_detail_cont_pane_t1

0xed8f,	// (0x0007a0a0) main_cntbar_detail_cont_pane_t2

0xed9d,	// (0x0007a0ae) main_cntbar_detail_cont_pane_t3

0x0002,

0x0260,	// (0x0006b571) main_cntbar_detail_cont_pane_t

0x898f,	// (0x00073ca0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x898f,	// (0x00073ca0) cell_cntbar_detail_list_shct_pane

0xedab,	// (0x0007a0bc) cntbar_detail_list_shct_pane_g1

0xedb4,	// (0x0007a0c5) cntbar_detail_list_shct_pane_g2

0x0001,

0x0267,	// (0x0006b578) cntbar_detail_list_shct_pane_g

0x89a3,	// (0x00073cb4) cntbar_detail_list_event_pane_g1_ParamLimits

0x89a3,	// (0x00073cb4) cntbar_detail_list_event_pane_g1

0x89af,	// (0x00073cc0) cntbar_detail_list_event_pane_g2_ParamLimits

0x89af,	// (0x00073cc0) cntbar_detail_list_event_pane_g2

0x0005,

0xfe79,	// (0x0007b18a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe79,	// (0x0007b18a) cntbar_detail_list_event_pane_g

0x8a1b,	// (0x00073d2c) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a1b,	// (0x00073d2c) cntbar_detail_list_event_pane_t1

0x8a30,	// (0x00073d41) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a30,	// (0x00073d41) cntbar_detail_list_event_pane_t2

0x0002,

0xfe86,	// (0x0007b197) cntbar_detail_list_event_pane_t_ParamLimits

0xfe86,	// (0x0007b197) cntbar_detail_list_event_pane_t

0xccec,	// (0x00077ffd) cell_cntbar_detail_list_shct_pane_g1

0xb43d,	// (0x0007674e) navi_pane_mv_g3

0xb4c1,	// (0x000767d2) main_cntbar_detail_pane_ParamLimits

0x9391,	// (0x000746a2) main_notif_wgt_pane

0x9759,	// (0x00074a6a) aid_tch_main_mp4_pane_g4

0x993b,	// (0x00074c4c) popup_slider_window_cp02

0xa3a7,	// (0x000756b8) list_recal_day_event_pane

0x88ad,	// (0x00073bbe) cntbar_detail_btn_pane_ParamLimits

0x88ad,	// (0x00073bbe) cntbar_detail_btn_pane

0x88c6,	// (0x00073bd7) cntbar_detail_btn_pane_cp01_ParamLimits

0x88c6,	// (0x00073bd7) cntbar_detail_btn_pane_cp01

0x88ef,	// (0x00073c00) cntbar_detail_list_shct_pane_ParamLimits

0x88ff,	// (0x00073c10) cntbar_detail_pane_g1_ParamLimits

0x88ff,	// (0x00073c10) cntbar_detail_pane_g1

0x890f,	// (0x00073c20) cntbar_detail_pane_t1_ParamLimits

0x890f,	// (0x00073c20) cntbar_detail_pane_t1

0x89bb,	// (0x00073ccc) cntbar_detail_list_event_pane_g3_ParamLimits

0x89bb,	// (0x00073ccc) cntbar_detail_list_event_pane_g3

0x89d3,	// (0x00073ce4) cntbar_detail_list_event_pane_g4_ParamLimits

0x89d3,	// (0x00073ce4) cntbar_detail_list_event_pane_g4

0x89eb,	// (0x00073cfc) cntbar_detail_list_event_pane_g5_ParamLimits

0x89eb,	// (0x00073cfc) cntbar_detail_list_event_pane_g5

0x8a03,	// (0x00073d14) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a03,	// (0x00073d14) cntbar_detail_list_event_pane_g6

0x8a45,	// (0x00073d56) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a45,	// (0x00073d56) cntbar_detail_list_event_pane_t3

0x8a57,	// (0x00073d68) popup_notif_wgt_window_ParamLimits

0x8a57,	// (0x00073d68) popup_notif_wgt_window

0x8a70,	// (0x00073d81) popup_submenu_window_cp01_ParamLimits

0x8a70,	// (0x00073d81) popup_submenu_window_cp01

0xaa2c,	// (0x00075d3d) bg_popup_window_pane_cp10

0xedbd,	// (0x0007a0ce) listscroll_notif_wgt_pane

0xedcf,	// (0x0007a0e0) list_notif_wgt_window

0xedd8,	// (0x0007a0e9) scroll_pane_cp033

0x8a82,	// (0x00073d93) list_notif_wgt_row_pane_ParamLimits

0x8a82,	// (0x00073d93) list_notif_wgt_row_pane

0xede1,	// (0x0007a0f2) aid_size_list_notif_wgt_del

0xedee,	// (0x0007a0ff) list_notif_wgt_row_pane_g1

0xedfa,	// (0x0007a10b) list_notif_wgt_row_pane_g2

0xee09,	// (0x0007a11a) list_notif_wgt_row_pane_g3

0x0002,

0x0280,	// (0x0006b591) list_notif_wgt_row_pane_g

0xee16,	// (0x0007a127) list_notif_wgt_row_pane_t1

0xee2c,	// (0x0007a13d) list_notif_wgt_row_pane_t2

0xee3e,	// (0x0007a14f) list_notif_wgt_row_pane_t3

0x0002,

0x0287,	// (0x0006b598) list_notif_wgt_row_pane_t

0xd98a,	// (0x00078c9b) list_recal_day_event_pane_g1

0xee50,	// (0x0007a161) list_recal_day_event_pane_t1

0x9391,	// (0x000746a2) bg_button_pane_cp045

0x8a92,	// (0x00073da3) cntbar_detail_btn_pane_t1

0xc8e4,	// (0x00077bf5) main_callh_pane_ParamLimits

0xc8e4,	// (0x00077bf5) main_callh_pane

0x9391,	// (0x000746a2) main_coverflow0_pane

0x9391,	// (0x000746a2) main_wgtman_pane

0x7915,	// (0x00072c26) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7915,	// (0x00072c26) main_fs_bigclock_unlock_btn_pane

0x82c8,	// (0x000735d9) bg_button_pane_cp16

0x82d8,	// (0x000735e9) cell_tport_appsw_pane_g3

0x8aa0,	// (0x00073db1) cf0_flow_pane_ParamLimits

0x8aa0,	// (0x00073db1) cf0_flow_pane

0xee5f,	// (0x0007a170) listscroll_cf0_pane

0xee6a,	// (0x0007a17b) main_cf0_pane_g1

0x8ab5,	// (0x00073dc6) main_cf0_pane_t1_ParamLimits

0x8ab5,	// (0x00073dc6) main_cf0_pane_t1

0x8acc,	// (0x00073ddd) main_cf0_pane_t2_ParamLimits

0x8acc,	// (0x00073ddd) main_cf0_pane_t2

0x0001,

0xfe8d,	// (0x0007b19e) main_cf0_pane_t_ParamLimits

0xfe8d,	// (0x0007b19e) main_cf0_pane_t

0xee7c,	// (0x0007a18d) scroll_pane_cp11

0x8ae3,	// (0x00073df4) cf0_flow_pane_g1

0x8aeb,	// (0x00073dfc) cf0_flow_pane_g2

0x0001,

0xfe92,	// (0x0007b1a3) cf0_flow_pane_g

0x8af3,	// (0x00073e04) cf0_flow_pane_t1

0x9391,	// (0x000746a2) main_call6_pane

0x9391,	// (0x000746a2) main_calllock_pane

0x8b01,	// (0x00073e12) call6_btn_grp_pane_ParamLimits

0x8b01,	// (0x00073e12) call6_btn_grp_pane

0x8b1b,	// (0x00073e2c) call6_pane_g1_ParamLimits

0x8b1b,	// (0x00073e2c) call6_pane_g1

0x8b31,	// (0x00073e42) popup_call6_1st_window_ParamLimits

0x8b31,	// (0x00073e42) popup_call6_1st_window

0x8b42,	// (0x00073e53) popup_call6_2nd_window_ParamLimits

0x8b42,	// (0x00073e53) popup_call6_2nd_window

0x8b53,	// (0x00073e64) cell_call6_btn_pane_ParamLimits

0x8b53,	// (0x00073e64) cell_call6_btn_pane

0xaa2c,	// (0x00075d3d) bg_popup_call2_in_pane_cp03

0xee87,	// (0x0007a198) popup_call6_1st_window_g1

0xee8f,	// (0x0007a1a0) popup_call6_1st_window_g2

0xee97,	// (0x0007a1a8) popup_call6_1st_window_g3

0x0002,

0x029d,	// (0x0006b5ae) popup_call6_1st_window_g

0xee9f,	// (0x0007a1b0) popup_call6_1st_window_t1

0xeeae,	// (0x0007a1bf) popup_call6_1st_window_t2

0xeebc,	// (0x0007a1cd) popup_call6_1st_window_t3

0x0002,

0x02a4,	// (0x0006b5b5) popup_call6_1st_window_t

0xaa2c,	// (0x00075d3d) bg_popup_call2_in_pane_cp04

0xee87,	// (0x0007a198) popup_call6_2nd_window_g1

0xee8f,	// (0x0007a1a0) popup_call6_2nd_window_g2

0xee97,	// (0x0007a1a8) popup_call6_2nd_window_g3

0x0002,

0x029d,	// (0x0006b5ae) popup_call6_2nd_window_g

0xee9f,	// (0x0007a1b0) popup_call6_2nd_window_t1

0x9417,	// (0x00074728) bg_button_pane_cp15

0x9bba,	// (0x00074ecb) cell_call6_btn_pane_g1

0x9bc3,	// (0x00074ed4) cell_call6_btn_pane_t1

0x8b67,	// (0x00073e78) listscroll_wgtman_pane_ParamLimits

0x8b67,	// (0x00073e78) listscroll_wgtman_pane

0x8b88,	// (0x00073e99) wgtman_btn_pane_ParamLimits

0x8b88,	// (0x00073e99) wgtman_btn_pane

0xb251,	// (0x00076562) aid_scroll_copy1

0xeeca,	// (0x0007a1db) list_wgtman_pane

0x8bcb,	// (0x00073edc) wgtman_btn_pane_g1_ParamLimits

0x8bcb,	// (0x00073edc) wgtman_btn_pane_g1

0x8bf7,	// (0x00073f08) wgtman_btn_pane_t1_ParamLimits

0x8bf7,	// (0x00073f08) wgtman_btn_pane_t1

0xeed4,	// (0x0007a1e5) wgtman_btn_pane_t2_ParamLimits

0xeed4,	// (0x0007a1e5) wgtman_btn_pane_t2

0x0001,

0xfe97,	// (0x0007b1a8) wgtman_btn_pane_t_ParamLimits

0xfe97,	// (0x0007b1a8) wgtman_btn_pane_t

0x8c34,	// (0x00073f45) listrow_wgtman_pane_ParamLimits

0x8c34,	// (0x00073f45) listrow_wgtman_pane

0x8c46,	// (0x00073f57) listrow_wgtman_pane_g1

0x8c53,	// (0x00073f64) listrow_wgtman_pane_g2

0x0001,

0xfe9c,	// (0x0007b1ad) listrow_wgtman_pane_g

0x8c71,	// (0x00073f82) listrow_wgtman_pane_t1

0x8c89,	// (0x00073f9a) listrow_wgtman_pane_t2

0x0001,

0xfea1,	// (0x0007b1b2) listrow_wgtman_pane_t

0x8caf,	// (0x00073fc0) wait_bar_pane_cp09

0xeeeb,	// (0x0007a1fc) main_calllock_btn_pane

0xeef5,	// (0x0007a206) main_calllock_pane_g1

0x9391,	// (0x000746a2) bg_button_pane_cp17

0xef01,	// (0x0007a212) main_calllock_btn_pane_g1

0xef0a,	// (0x0007a21b) main_calllock_btn_pane_t1

0x9391,	// (0x000746a2) main_dialer3_pane

0x9391,	// (0x000746a2) main_fmrd2_pane

0xccec,	// (0x00077ffd) main_fs_bigclock_unlock_btn_pane_g1

0x8cc9,	// (0x00073fda) main_fs_bigclock_unlock_btn_pane_t1

0x8cd7,	// (0x00073fe8) area_fmrd2_info_pane_ParamLimits

0x8cd7,	// (0x00073fe8) area_fmrd2_info_pane

0x8ce8,	// (0x00073ff9) area_fmrd2_visual_pane_ParamLimits

0x8ce8,	// (0x00073ff9) area_fmrd2_visual_pane

0x8cf6,	// (0x00074007) fmrd2_indi_pane_ParamLimits

0x8cf6,	// (0x00074007) fmrd2_indi_pane

0x8d03,	// (0x00074014) area_fmrd2_visual_pane_g1

0x8d0b,	// (0x0007401c) area_fmrd2_visual_pane_t1

0x8d1b,	// (0x0007402c) area_fmrd2_visual_pane_t2

0x8d2b,	// (0x0007403c) area_fmrd2_visual_pane_t3

0x0002,

0xfeab,	// (0x0007b1bc) area_fmrd2_visual_pane_t

0x8d3b,	// (0x0007404c) area_fmrd2_info_pane_g1

0x8d43,	// (0x00074054) area_fmrd2_info_pane_t1

0x8d53,	// (0x00074064) area_fmrd2_info_pane_t2

0x8d63,	// (0x00074074) area_fmrd2_info_pane_t3

0x8d73,	// (0x00074084) area_fmrd2_info_pane_t4

0x0003,

0xfeb2,	// (0x0007b1c3) area_fmrd2_info_pane_t

0x8d81,	// (0x00074092) fmrd2_indi_pane_t1

0x8d91,	// (0x000740a2) fmrd2_indi_pane_t2

0x8da1,	// (0x000740b2) fmrd2_indi_pane_t3

0x0002,

0xfebb,	// (0x0007b1cc) fmrd2_indi_pane_t

0xe4c4,	// (0x000797d5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c4,	// (0x000797d5) list_single_fs_bigclock_indicator_pane_g5

0xe575,	// (0x00079886) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe575,	// (0x00079886) list_single_fs_bigclock_indicator_pane_t5

0x8465,	// (0x00073776) aid_cell_bcale_month_pane_ParamLimits

0x8465,	// (0x00073776) aid_cell_bcale_month_pane

0x8483,	// (0x00073794) bcale_month_pane_ParamLimits

0x8483,	// (0x00073794) bcale_month_pane

0x84a7,	// (0x000737b8) bcale_preview_pane_ParamLimits

0x84a7,	// (0x000737b8) bcale_preview_pane

0xecf0,	// (0x0007a001) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0f,	// (0x0007a020) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0f,	// (0x0007a020) list_single_fs_bigclock_pane_t2

0x0001,

0x0251,	// (0x0006b562) list_single_fs_bigclock_pane_t_ParamLimits

0x0251,	// (0x0006b562) list_single_fs_bigclock_pane_t

0x8cc1,	// (0x00073fd2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfea6,	// (0x0007b1b7) main_fs_bigclock_unlock_btn_pane_g

0x8db1,	// (0x000740c2) aid_dia3_key_size_ParamLimits

0x8db1,	// (0x000740c2) aid_dia3_key_size

0x8dc0,	// (0x000740d1) aid_dia3_listrow_size_ParamLimits

0x8dc0,	// (0x000740d1) aid_dia3_listrow_size

0x8dd5,	// (0x000740e6) dia3_keypad_fun_pane_ParamLimits

0x8dd5,	// (0x000740e6) dia3_keypad_fun_pane

0x8df1,	// (0x00074102) dia3_keypad_num_pane_ParamLimits

0x8df1,	// (0x00074102) dia3_keypad_num_pane

0x8e0c,	// (0x0007411d) dia3_listscroll_pane_ParamLimits

0x8e0c,	// (0x0007411d) dia3_listscroll_pane

0x8e1f,	// (0x00074130) dia3_numentry_pane_ParamLimits

0x8e1f,	// (0x00074130) dia3_numentry_pane

0xef19,	// (0x0007a22a) dia3_list_pane

0xef24,	// (0x0007a235) scroll_pane_cp12

0x9391,	// (0x000746a2) bg_dia3_numentry_pane

0x8e33,	// (0x00074144) dia3_numentry_pane_t1

0x8e42,	// (0x00074153) cell_dia3_key_num_pane

0x8e4a,	// (0x0007415b) cell_dia3_key0_fun_pane_ParamLimits

0x8e4a,	// (0x0007415b) cell_dia3_key0_fun_pane

0x8e5e,	// (0x0007416f) cell_dia3_key1_fun_pane_ParamLimits

0x8e5e,	// (0x0007416f) cell_dia3_key1_fun_pane

0x8e76,	// (0x00074187) dia3_listrow_pane

0xe217,	// (0x00079528) bg_dia3_numentry_pane_g1

0x9391,	// (0x000746a2) bg_button_pane_cp21

0xef2f,	// (0x0007a240) cell_dia3_key_num_pane_t1

0xef3d,	// (0x0007a24e) cell_dia3_key_num_pane_t2

0xef4c,	// (0x0007a25d) cell_dia3_key_num_pane_t3

0xef5b,	// (0x0007a26c) cell_dia3_key_num_pane_t4

0x0003,

0x02d6,	// (0x0006b5e7) cell_dia3_key_num_pane_t

0x9391,	// (0x000746a2) bg_button_pane_cp19

0x8e88,	// (0x00074199) cell_dia3_key0_fun_pane_g1

0x9391,	// (0x000746a2) bg_button_pane_cp20

0x8e90,	// (0x000741a1) cell_dia3_key1_fun_pane_g1

0x8e98,	// (0x000741a9) area_left_week_number_pane

0x8ea4,	// (0x000741b5) area_top_day_name_pane

0x8eb7,	// (0x000741c8) frame_month_view_pane

0xef6a,	// (0x0007a27b) grid_month_view_pane

0x8eca,	// (0x000741db) cell_top_day_name_pane_ParamLimits

0x8eca,	// (0x000741db) cell_top_day_name_pane

0x8ef7,	// (0x00074208) cell_area_left_week_number_pane_ParamLimits

0x8ef7,	// (0x00074208) cell_area_left_week_number_pane

0x8f0b,	// (0x0007421c) cell_month_view_pane_ParamLimits

0x8f0b,	// (0x0007421c) cell_month_view_pane

0xef78,	// (0x0007a289) frm_month_g1

0x8f38,	// (0x00074249) frm_month_g2

0x8f4b,	// (0x0007425c) frm_month_g3

0x8f5e,	// (0x0007426f) frm_month_g4

0x8f71,	// (0x00074282) frm_month_g5

0x8f84,	// (0x00074295) frm_month_g6

0x8f97,	// (0x000742a8) frm_month_g7

0xef85,	// (0x0007a296) frm_month_g8

0x8faa,	// (0x000742bb) frm_month_g9

0x8fba,	// (0x000742cb) frm_month_g10

0x8fca,	// (0x000742db) frm_month_g11

0x8fda,	// (0x000742eb) frm_month_g12

0x8fec,	// (0x000742fd) frm_month_g13

0x8ffe,	// (0x0007430f) frm_month_g14

0x9012,	// (0x00074323) frm_month_g15

0x9026,	// (0x00074337) frm_month_g16

0x000f,

0xfec2,	// (0x0007b1d3) frm_month_g

0xef92,	// (0x0007a2a3) cell_top_day_name_pane_t1

0x903a,	// (0x0007434b) cell_area_left_week_number_pane_g1

0x9046,	// (0x00074357) cell_area_left_week_number_pane_t1

0xcf46,	// (0x00078257) cell_month_view_pane_g1

0x9059,	// (0x0007436a) cell_month_view_pane_t1

0x9391,	// (0x000746a2) main_fps_pane

0xe7ad,	// (0x00079abe) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7ad,	// (0x00079abe) cmail_ddmenu_btn02_pane_cp1

0xe7c9,	// (0x00079ada) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c9,	// (0x00079ada) cmail_ddmenu_btn02_pane_cp2

0x8749,	// (0x00073a5a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8749,	// (0x00073a5a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0007b151) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0007b151) cmail_ddmenu_btn02_pane_g

0x8768,	// (0x00073a79) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8768,	// (0x00073a79) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0007b156) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0007b156) cmail_ddmenu_btn02_pane_t

0x906c,	// (0x0007437d) fps_text_pane_ParamLimits

0x906c,	// (0x0007437d) fps_text_pane

0x9083,	// (0x00074394) main_fps_pane_g1_ParamLimits

0x9083,	// (0x00074394) main_fps_pane_g1

0x909d,	// (0x000743ae) wait_bar_pane_cp010_ParamLimits

0x909d,	// (0x000743ae) wait_bar_pane_cp010

0x90ae,	// (0x000743bf) fps_text_pane_t1_ParamLimits

0x90ae,	// (0x000743bf) fps_text_pane_t1

0xd6d3,	// (0x000789e4) cam4_image_uncrop_pane_g1

0xd6dc,	// (0x000789ed) cam4_image_uncrop_pane_g2

0x59e3,	// (0x00070cf4) cam4_image_uncrop_pane_g3

0x59ec,	// (0x00070cfd) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0007ac12) cam4_image_uncrop_pane_g

0x8e76,	// (0x00074187) dia3_listrow_pane_ParamLimits

0x9391,	// (0x000746a2) main_phob2_pane

0x8299,	// (0x000735aa) cell_tport_appsw_pane_cp02_ParamLimits

0x8299,	// (0x000735aa) cell_tport_appsw_pane_cp02

0x82ad,	// (0x000735be) cell_tport_appsw_pane_cp03_ParamLimits

0x82ad,	// (0x000735be) cell_tport_appsw_pane_cp03

0x9391,	// (0x000746a2) phob2_contact_card_pane

0x9391,	// (0x000746a2) phob2_listscroll_pane

0xefa5,	// (0x0007a2b6) phob2_list_pane

0xefad,	// (0x0007a2be) scroll_pane_cp034

0x90c6,	// (0x000743d7) phob2_cc_data_pane_ParamLimits

0x90c6,	// (0x000743d7) phob2_cc_data_pane

0x90e5,	// (0x000743f6) phob2_cc_listscroll_pane_ParamLimits

0x90e5,	// (0x000743f6) phob2_cc_listscroll_pane

0x8c34,	// (0x00073f45) list_double_large_graphic_phob2_pane_ParamLimits

0x8c34,	// (0x00073f45) list_double_large_graphic_phob2_pane

0x9103,	// (0x00074414) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9103,	// (0x00074414) list_double_large_graphic_phob2_pane_g1

0x9119,	// (0x0007442a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9119,	// (0x0007442a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfee3,	// (0x0007b1f4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfee3,	// (0x0007b1f4) list_double_large_graphic_phob2_pane_g

0x9125,	// (0x00074436) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9125,	// (0x00074436) list_double_large_graphic_phob2_pane_t1

0x913b,	// (0x0007444c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x913b,	// (0x0007444c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee8,	// (0x0007b1f9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee8,	// (0x0007b1f9) list_double_large_graphic_phob2_pane_t

0x9391,	// (0x000746a2) list_highlight_pane_cp024

0x9150,	// (0x00074461) phob2_cc_button_pane

0x9158,	// (0x00074469) phob2_cc_data_pane_g1_ParamLimits

0x9158,	// (0x00074469) phob2_cc_data_pane_g1

0x916d,	// (0x0007447e) phob2_cc_data_pane_g2_ParamLimits

0x916d,	// (0x0007447e) phob2_cc_data_pane_g2

0x0001,

0xfeed,	// (0x0007b1fe) phob2_cc_data_pane_g_ParamLimits

0xfeed,	// (0x0007b1fe) phob2_cc_data_pane_g

0x917d,	// (0x0007448e) phob2_cc_data_pane_t1_ParamLimits

0x917d,	// (0x0007448e) phob2_cc_data_pane_t1

0x9195,	// (0x000744a6) phob2_cc_data_pane_t2_ParamLimits

0x9195,	// (0x000744a6) phob2_cc_data_pane_t2

0x91ad,	// (0x000744be) phob2_cc_data_pane_t3_ParamLimits

0x91ad,	// (0x000744be) phob2_cc_data_pane_t3

0x0002,

0xfef2,	// (0x0007b203) phob2_cc_data_pane_t_ParamLimits

0xfef2,	// (0x0007b203) phob2_cc_data_pane_t

0xefb5,	// (0x0007a2c6) phob2_cc_list_pane_ParamLimits

0xefb5,	// (0x0007a2c6) phob2_cc_list_pane

0xda21,	// (0x00078d32) scroll_pane_cp035_ParamLimits

0xda21,	// (0x00078d32) scroll_pane_cp035

0xb4c1,	// (0x000767d2) bg_button_pane_cp033

0xefc1,	// (0x0007a2d2) phob2_cc_button_pane_g1

0xefcd,	// (0x0007a2de) phob2_cc_button_pane_t1

0xefe2,	// (0x0007a2f3) phob2_cc_button_pane_t2

0x0001,

0x0316,	// (0x0006b627) phob2_cc_button_pane_t

0x91c5,	// (0x000744d6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x91c5,	// (0x000744d6) list_double_large_graphic_phob2_cc_pane

0x91d8,	// (0x000744e9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x91d8,	// (0x000744e9) list_double_large_graphic_phob2_cc_pane_g1

0x91e4,	// (0x000744f5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x91e4,	// (0x000744f5) list_double_large_graphic_phob2_cc_pane_g2

0x91f0,	// (0x00074501) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x91f0,	// (0x00074501) list_double_large_graphic_phob2_cc_pane_g3

0x91fc,	// (0x0007450d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x91fc,	// (0x0007450d) list_double_large_graphic_phob2_cc_pane_g4

0x9208,	// (0x00074519) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9208,	// (0x00074519) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfef9,	// (0x0007b20a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfef9,	// (0x0007b20a) list_double_large_graphic_phob2_cc_pane_g

0x9214,	// (0x00074525) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9214,	// (0x00074525) list_double_large_graphic_phob2_cc_pane_t1

0x923d,	// (0x0007454e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x923d,	// (0x0007454e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff04,	// (0x0007b215) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff04,	// (0x0007b215) list_double_large_graphic_phob2_cc_pane_t

0xeff4,	// (0x0007a305) list_highlight_pane_cp025_ParamLimits

0xeff4,	// (0x0007a305) list_highlight_pane_cp025

0xb4c1,	// (0x000767d2) bg_button_pane_cp033_ParamLimits

0xefc1,	// (0x0007a2d2) phob2_cc_button_pane_g1_ParamLimits

0xefcd,	// (0x0007a2de) phob2_cc_button_pane_t1_ParamLimits

0xefe2,	// (0x0007a2f3) phob2_cc_button_pane_t2_ParamLimits

0x0316,	// (0x0006b627) phob2_cc_button_pane_t_ParamLimits

0x0663,	// (0x0006b974) popup_wgtman_window

0xd84e,	// (0x00078b5f) scroll_pane_cp038

0x8bad,	// (0x00073ebe) wgtman_btn_pane_cp_01_ParamLimits

0x8bad,	// (0x00073ebe) wgtman_btn_pane_cp_01

0xf002,	// (0x0007a313) wgtman_content_pane

0xf00b,	// (0x0007a31c) wgtman_heading_pane

0x9391,	// (0x000746a2) bg_heading_pane_cp02

0xf014,	// (0x0007a325) wgtman_heading_pane_g1

0xf01c,	// (0x0007a32d) wgtman_heading_pane_t1

0xf02a,	// (0x0007a33b) scroll_pane_cp036

0xf032,	// (0x0007a343) wgtman_list_pane

0xe6aa,	// (0x000799bb) wgtman_list_pane_t1_ParamLimits

0xe6aa,	// (0x000799bb) wgtman_list_pane_t1

0x99c7,	// (0x00074cd8) cam4_grid_pane

0x66b3,	// (0x000719c4) bg_button_pane_cp015_ParamLimits

0x66c7,	// (0x000719d8) bg_button_pane_cp016_ParamLimits

0x66da,	// (0x000719eb) bg_button_pane_cp017_ParamLimits

0x6732,	// (0x00071a43) popup_vitu2_query_window_g3_ParamLimits

0x6732,	// (0x00071a43) popup_vitu2_query_window_g3

0x67ef,	// (0x00071b00) popup_vitu2_query_window_t6_ParamLimits

0x67ef,	// (0x00071b00) popup_vitu2_query_window_t6

0x681a,	// (0x00071b2b) popup_vitu2_query_window_t7_ParamLimits

0x681a,	// (0x00071b2b) popup_vitu2_query_window_t7

0xd6d3,	// (0x000789e4) cam4_grid_pane_g1

0xd6dc,	// (0x000789ed) cam4_grid_pane_g2

0xf03a,	// (0x0007a34b) cam4_grid_pane_g3

0xf043,	// (0x0007a354) cam4_grid_pane_g4

0x0003,

0xff09,	// (0x0007b21a) cam4_grid_pane_g

0x1595,	// (0x0006c8a6) aid_placing_vt_slider_lsc_ParamLimits

0x1892,	// (0x0006cba3) vidtel_button_pane_ParamLimits

0x1892,	// (0x0006cba3) vidtel_button_pane

0x9391,	// (0x000746a2) bg_button_pane_cp034

0xf04e,	// (0x0007a35f) vidtel_button_pane_g1

0xf056,	// (0x0007a367) vidtel_button_pane_t1

0xd968,	// (0x00078c79) aid_size_vtel_slider_touch

0xda21,	// (0x00078d32) scroll_pane_cp039

0x75fb,	// (0x0007290c) ncim_query_button_pane_cp01_ParamLimits

0x761a,	// (0x0007292b) ncimui_query_pane_g1_ParamLimits

0xb4c1,	// (0x000767d2) input_focus_pane_cp012_ParamLimits

0xe25d,	// (0x0007956e) ncim_query_entry_pane_t1_ParamLimits

0xda21,	// (0x00078d32) scroll_pane_cp039_ParamLimits

0xb328,	// (0x00076639) navi_pane_bcale_mc_g1

0xb330,	// (0x00076641) navi_pane_bcale_mc_t1

0xe812,	// (0x00079b23) main_sp_fs_email_pane_g1

0xe81e,	// (0x00079b2f) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0007b009) main_sp_fs_email_pane_g

0xea74,	// (0x00079d85) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea74,	// (0x00079d85) list_single_cale_mrui_row_pane_g3

0x8788,	// (0x00073a99) list_single_recal_day_pane_g5_event_pane

0xa404,	// (0x00075715) list_single_recal_day_pane_g7

0xf06c,	// (0x0007a37d) list_recal_day_event_pane_cp01

0xf075,	// (0x0007a386) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0007a38e) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0007a396) list_recal_vselct_pane_cp01

0xd98a,	// (0x00078c9b) list_recal_day_event_pane_cp01_g1

0xa460,	// (0x00075771) list_recal_day_event_pane_cp01_t1

0xa40c,	// (0x0007571d) list_single_recal_day_pane_t1_ParamLimits

0xa41e,	// (0x0007572f) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0007b166) list_single_recal_day_pane_t_ParamLimits

0xa784,	// (0x00075a95) bg_notes_pane_ParamLimits

0xa833,	// (0x00075b44) list_notes_pane_ParamLimits

0x09a7,	// (0x0006bcb8) scroll_pane_cp06_ParamLimits

0xa855,	// (0x00075b66) main_notes_pane_ParamLimits

0x9391,	// (0x000746a2) main_welc_pane

0x9266,	// (0x00074577) main_welc_body_pane_ParamLimits

0x9266,	// (0x00074577) main_welc_body_pane

0x9283,	// (0x00074594) main_welc_opti_pane_ParamLimits

0x9283,	// (0x00074594) main_welc_opti_pane

0x92c8,	// (0x000745d9) main_welc_pane_t1_ParamLimits

0x92c8,	// (0x000745d9) main_welc_pane_t1

0x92e6,	// (0x000745f7) main_welc_body_row_pane_ParamLimits

0x92e6,	// (0x000745f7) main_welc_body_row_pane

0xde6a,	// (0x0007917b) main_welc_opti_row_pane_ParamLimits

0xde6a,	// (0x0007917b) main_welc_opti_row_pane

0xf08f,	// (0x0007a3a0) main_welc_opti_row_pane_g1

0x92fb,	// (0x0007460c) main_welc_opti_row_pane_t1

0xf097,	// (0x0007a3a8) main_welc_body_row_pane_t1

0xedc7,	// (0x0007a0d8) popup_notif_wgt_heading_pane

0xede1,	// (0x0007a0f2) aid_size_list_notif_wgt_del_ParamLimits

0xedee,	// (0x0007a0ff) list_notif_wgt_row_pane_g1_ParamLimits

0xedfa,	// (0x0007a10b) list_notif_wgt_row_pane_g2_ParamLimits

0xee09,	// (0x0007a11a) list_notif_wgt_row_pane_g3_ParamLimits

0x0280,	// (0x0006b591) list_notif_wgt_row_pane_g_ParamLimits

0xee16,	// (0x0007a127) list_notif_wgt_row_pane_t1_ParamLimits

0xee2c,	// (0x0007a13d) list_notif_wgt_row_pane_t2_ParamLimits

0xee3e,	// (0x0007a14f) list_notif_wgt_row_pane_t3_ParamLimits

0x0287,	// (0x0006b598) list_notif_wgt_row_pane_t_ParamLimits

0x8c46,	// (0x00073f57) listrow_wgtman_pane_g1_ParamLimits

0x8c53,	// (0x00073f64) listrow_wgtman_pane_g2_ParamLimits

0xfe9c,	// (0x0007b1ad) listrow_wgtman_pane_g_ParamLimits

0x8c71,	// (0x00073f82) listrow_wgtman_pane_t1_ParamLimits

0x8c89,	// (0x00073f9a) listrow_wgtman_pane_t2_ParamLimits

0xfea1,	// (0x0007b1b2) listrow_wgtman_pane_t_ParamLimits

0x8caf,	// (0x00073fc0) wait_bar_pane_cp09_ParamLimits

0x9391,	// (0x000746a2) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0007a3b7) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0007a3bf) popup_notif_wgt_heading_pane_t1

0x9391,	// (0x000746a2) main_vids_pane

0x9391,	// (0x000746a2) vids_listscroll_pane

0x930a,	// (0x0007461b) scroll_pane_cp040

0x9391,	// (0x000746a2) vids_list_pane

0x9315,	// (0x00074626) vids_list_double_pane_ParamLimits

0x9315,	// (0x00074626) vids_list_double_pane

0x9326,	// (0x00074637) vids_list_double_pane_g1

0x932f,	// (0x00074640) vids_list_double_pane_t1

0x933f,	// (0x00074650) vids_list_double_pane_t2

0x0001,

0xff17,	// (0x0007b228) vids_list_double_pane_t

0x9409,	// (0x0007471a) main_ncimui_pane_ParamLimits

0x7431,	// (0x00072742) main_ncimui_pane_g1_ParamLimits

0x743d,	// (0x0007274e) main_ncimui_pane_g2_ParamLimits

0x743d,	// (0x0007274e) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0007af0e) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0007af0e) main_ncimui_pane_g

0x929e,	// (0x000745af) main_welc_pane_g1_ParamLimits

0x929e,	// (0x000745af) main_welc_pane_g1

0x92b3,	// (0x000745c4) main_welc_pane_g2_ParamLimits

0x92b3,	// (0x000745c4) main_welc_pane_g2

0x0001,

0xff12,	// (0x0007b223) main_welc_pane_g_ParamLimits

0xff12,	// (0x0007b223) main_welc_pane_g

0xa784,	// (0x00075a95) listscroll_mce_pane_ParamLimits

0xb47d,	// (0x0007678e) wait_bar_pane_cp10

0xc8d8,	// (0x00077be9) main_cale_day_pane_ParamLimits

0xc8d8,	// (0x00077be9) main_cale_week_pane_ParamLimits

0xa784,	// (0x00075a95) main_messa_pane_ParamLimits

0x4d0b,	// (0x0007001c) main_clock2_btn_pane_ParamLimits

0x4d0b,	// (0x0007001c) main_clock2_btn_pane

0xd0ce,	// (0x000783df) main_clock2_btn_pane_cp01_ParamLimits

0xd0ce,	// (0x000783df) main_clock2_btn_pane_cp01

0xea45,	// (0x00079d56) list_cale_mrui_pane_ParamLimits

0xee74,	// (0x0007a185) main_cf0_pane_g2

0x0001,

0x028e,	// (0x0006b59f) main_cf0_pane_g

0x8e98,	// (0x000741a9) area_left_week_number_pane_ParamLimits

0x8ea4,	// (0x000741b5) area_top_day_name_pane_ParamLimits

0x8eb7,	// (0x000741c8) frame_month_view_pane_ParamLimits

0xef6a,	// (0x0007a27b) grid_month_view_pane_ParamLimits

0xef78,	// (0x0007a289) frm_month_g1_ParamLimits

0x8f38,	// (0x00074249) frm_month_g2_ParamLimits

0x8f4b,	// (0x0007425c) frm_month_g3_ParamLimits

0x8f5e,	// (0x0007426f) frm_month_g4_ParamLimits

0x8f71,	// (0x00074282) frm_month_g5_ParamLimits

0x8f84,	// (0x00074295) frm_month_g6_ParamLimits

0x8f97,	// (0x000742a8) frm_month_g7_ParamLimits

0xef85,	// (0x0007a296) frm_month_g8_ParamLimits

0x8faa,	// (0x000742bb) frm_month_g9_ParamLimits

0x8fba,	// (0x000742cb) frm_month_g10_ParamLimits

0x8fca,	// (0x000742db) frm_month_g11_ParamLimits

0x8fda,	// (0x000742eb) frm_month_g12_ParamLimits

0x8fec,	// (0x000742fd) frm_month_g13_ParamLimits

0x8ffe,	// (0x0007430f) frm_month_g14_ParamLimits

0x9012,	// (0x00074323) frm_month_g15_ParamLimits

0x9026,	// (0x00074337) frm_month_g16_ParamLimits

0xfec2,	// (0x0007b1d3) frm_month_g_ParamLimits

0xef92,	// (0x0007a2a3) cell_top_day_name_pane_t1_ParamLimits

0x903a,	// (0x0007434b) cell_area_left_week_number_pane_g1_ParamLimits

0x9046,	// (0x00074357) cell_area_left_week_number_pane_t1_ParamLimits

0xcf46,	// (0x00078257) cell_month_view_pane_g1_ParamLimits

0x9059,	// (0x0007436a) cell_month_view_pane_t1_ParamLimits

0xa77c,	// (0x00075a8d) main_clock2_btn_pane_g1

0xf0bc,	// (0x0007a3cd) main_clock2_btn_pane_t1

0xb4c1,	// (0x000767d2) listscroll_cmail_pane_ParamLimits

0xe812,	// (0x00079b23) main_sp_fs_email_pane_g1_ParamLimits

0xe81e,	// (0x00079b2f) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0007b009) main_sp_fs_email_pane_g_ParamLimits

0xeb53,	// (0x00079e64) list_recal_day_pane_ParamLimits

0xeb64,	// (0x00079e75) mian_recal_day_pane_t1

0x7efe,	// (0x0007320f) list_single_dyc_row_text_pane_t4_ParamLimits

0x7efe,	// (0x0007320f) list_single_dyc_row_text_pane_t4

0x7f47,	// (0x00073258) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f47,	// (0x00073258) list_single_dyc_row_text_pane_t5

0xa17a,	// (0x0007548b) list_single_dyc_row_text_pane_t6_ParamLimits

0xa17a,	// (0x0007548b) list_single_dyc_row_text_pane_t6

0x2340,	// (0x0006d651) aid_mgn_list_cale_time_pane

0x9409,	// (0x0007471a) main_gallery2_pane_ParamLimits

0xd0e4,	// (0x000783f5) main_clock2_pane_cp01_t1

0xd0f2,	// (0x00078403) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0007aae8) main_clock2_pane_cp01_t

0x0d2e,	// (0x0006c03f) cale_week_scroll_pane_g16_ParamLimits

0x0d2e,	// (0x0006c03f) cale_week_scroll_pane_g16

0xaa2c,	// (0x00075d3d) vorec_slider_pane

0xf056,	// (0x0007a367) vidtel_button_pane_t1_ParamLimits

0x87ee,	// (0x00073aff) main_fs_bigclock_clock_pane_g1_ParamLimits

0x87ee,	// (0x00073aff) main_fs_bigclock_clock_pane_g2_ParamLimits

0x87ff,	// (0x00073b10) main_fs_bigclock_clock_pane_g3_ParamLimits

0x87ff,	// (0x00073b10) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5f,	// (0x0007b170) main_fs_bigclock_clock_pane_g_ParamLimits

0x8812,	// (0x00073b23) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8828,	// (0x00073b39) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe68,	// (0x0007b179) main_fs_bigclock_clock_pane_t_ParamLimits

0x4506,	// (0x0006f817) main_mup3_lyrics_pane_ParamLimits

0x4506,	// (0x0006f817) main_mup3_lyrics_pane

0x9375,	// (0x00074686) main_mup3_lyrics_pane_t1_ParamLimits

0x9375,	// (0x00074686) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
