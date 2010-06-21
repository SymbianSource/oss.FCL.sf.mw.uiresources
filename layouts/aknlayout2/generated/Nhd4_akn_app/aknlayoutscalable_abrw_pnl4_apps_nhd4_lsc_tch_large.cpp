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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000a906d };

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
0x0414,	// (0x000a9481) Screen

0x0420,	// (0x000a948d) application_window

0x046c,	// (0x000a94d9) area_bottom_pane_ParamLimits

0x046c,	// (0x000a94d9) area_bottom_pane

0x04a5,	// (0x000a9512) area_top_pane_ParamLimits

0x04a5,	// (0x000a9512) area_top_pane

0x9489,	// (0x000b24f6) call_video_uplink_pane_ParamLimits

0x9489,	// (0x000b24f6) call_video_uplink_pane

0x0533,	// (0x000a95a0) main_pane_ParamLimits

0x0533,	// (0x000a95a0) main_pane

0xc98e,	// (0x000b59fb) context_pane

0x3807,	// (0x000ac874) navi_pane

0x3839,	// (0x000ac8a6) popup_cale_events_window_ParamLimits

0x3839,	// (0x000ac8a6) popup_cale_events_window

0xc9a1,	// (0x000b5a0e) popup_mup_playback_window

0x3851,	// (0x000ac8be) signal_pane

0xa8e7,	// (0x000b3954) main_browser_pane

0xaad3,	// (0x000b3b40) main_burst_pane

0x355d,	// (0x000ac5ca) main_calc_pane

0xc974,	// (0x000b59e1) main_cale_day_pane

0x3571,	// (0x000ac5de) main_cale_month_pane

0xc974,	// (0x000b59e1) main_cale_week_pane

0xaad3,	// (0x000b3b40) main_call_pane

0xa062,	// (0x000b30cf) main_call_poc_pane

0xaad3,	// (0x000b3b40) main_camera_pane

0xaad3,	// (0x000b3b40) main_chi_dic_pane

0xb2c8,	// (0x000b4335) main_clock_pane

0xa062,	// (0x000b30cf) main_fmradio_pane

0xaad3,	// (0x000b3b40) main_graph_messa_pane

0xa062,	// (0x000b30cf) main_help_pane

0xa8e7,	// (0x000b3954) main_im_pane

0xa816,	// (0x000b3883) main_image_pane_ParamLimits

0xa816,	// (0x000b3883) main_image_pane

0xa062,	// (0x000b30cf) main_location2_pane

0xaad3,	// (0x000b3b40) main_location_pane

0xa816,	// (0x000b3883) main_messa_pane

0xa062,	// (0x000b30cf) main_mp2_pane

0xaad3,	// (0x000b3b40) main_mp_pane

0xa062,	// (0x000b30cf) main_msg_pane

0xa062,	// (0x000b30cf) main_mup_eq_pane

0xa062,	// (0x000b30cf) main_mup_pane

0xa8e7,	// (0x000b3954) main_notes_pane

0xa062,	// (0x000b30cf) main_pec_pane

0xa062,	// (0x000b30cf) main_phob_pane

0xa062,	// (0x000b30cf) main_pinb_pane

0xa062,	// (0x000b30cf) main_postcard_pane

0xa062,	// (0x000b30cf) main_qdial_pane

0xaad3,	// (0x000b3b40) main_skin_pane

0xa062,	// (0x000b30cf) main_smil2_pane

0xaad3,	// (0x000b3b40) main_smil_pane

0xaad3,	// (0x000b3b40) main_video_pane

0xaad3,	// (0x000b3b40) main_video_tele_pane

0xa816,	// (0x000b3883) main_viewer_pane_ParamLimits

0xa816,	// (0x000b3883) main_viewer_pane

0xaad3,	// (0x000b3b40) main_vorec_pane

0x35c3,	// (0x000ac630) popup_blid_sat_info_window_ParamLimits

0x35c3,	// (0x000ac630) popup_blid_sat_info_window

0x361b,	// (0x000ac688) popup_dyc_status_message_window_ParamLimits

0x361b,	// (0x000ac688) popup_dyc_status_message_window

0x3633,	// (0x000ac6a0) popup_grid_large_graphic_window_ParamLimits

0x3633,	// (0x000ac6a0) popup_grid_large_graphic_window

0x36e3,	// (0x000ac750) popup_loc_request_window_ParamLimits

0x36e3,	// (0x000ac750) popup_loc_request_window

0x37df,	// (0x000ac84c) popup_wml_address_window_ParamLimits

0x37df,	// (0x000ac84c) popup_wml_address_window

0x3397,	// (0x000ac404) call_muted_g1

0x304b,	// (0x000ac0b8) popup_call_audio_conf_window_ParamLimits

0x304b,	// (0x000ac0b8) popup_call_audio_conf_window

0x33ab,	// (0x000ac418) popup_call_audio_first_window_ParamLimits

0x33ab,	// (0x000ac418) popup_call_audio_first_window

0x3421,	// (0x000ac48e) popup_call_audio_in_window_ParamLimits

0x3421,	// (0x000ac48e) popup_call_audio_in_window

0x345d,	// (0x000ac4ca) popup_call_audio_out_window_ParamLimits

0x345d,	// (0x000ac4ca) popup_call_audio_out_window

0x3497,	// (0x000ac504) popup_call_audio_second_window_ParamLimits

0x3497,	// (0x000ac504) popup_call_audio_second_window

0x34ed,	// (0x000ac55a) popup_call_audio_wait_window_ParamLimits

0x34ed,	// (0x000ac55a) popup_call_audio_wait_window

0x3522,	// (0x000ac58f) popup_number_entry_window_ParamLimits

0x3522,	// (0x000ac58f) popup_number_entry_window

0x94bf,	// (0x000b252c) bg_popup_call_pane_cp05_ParamLimits

0x94bf,	// (0x000b252c) bg_popup_call_pane_cp05

0x94df,	// (0x000b254c) popup_number_entry_window_t1

0x94f2,	// (0x000b255f) popup_number_entry_window_t2

0x9504,	// (0x000b2571) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000b8133) popup_number_entry_window_t

0x9516,	// (0x000b2583) text_title_cp2

0x9529,	// (0x000b2596) bg_popup_call_pane_cp_ParamLimits

0x9529,	// (0x000b2596) bg_popup_call_pane_cp

0x9537,	// (0x000b25a4) call_thumbnail_pane

0x953f,	// (0x000b25ac) popup_call_audio_in_window_g1_ParamLimits

0x953f,	// (0x000b25ac) popup_call_audio_in_window_g1

0x954b,	// (0x000b25b8) popup_call_audio_in_window_g2_ParamLimits

0x954b,	// (0x000b25b8) popup_call_audio_in_window_g2

0x9557,	// (0x000b25c4) popup_call_audio_in_window_g3_ParamLimits

0x9557,	// (0x000b25c4) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000b813c) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000b813c) popup_call_audio_in_window_g

0x9563,	// (0x000b25d0) popup_call_audio_in_window_t1_ParamLimits

0x9563,	// (0x000b25d0) popup_call_audio_in_window_t1

0x957f,	// (0x000b25ec) popup_call_audio_in_window_t2_ParamLimits

0x957f,	// (0x000b25ec) popup_call_audio_in_window_t2

0x9d2b,	// (0x000b2d98) popup_call_audio_in_window_t3_ParamLimits

0x9d2b,	// (0x000b2d98) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000b8143) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000b8143) popup_call_audio_in_window_t

0x9529,	// (0x000b2596) bg_popup_call_pane_cp01_ParamLimits

0x9529,	// (0x000b2596) bg_popup_call_pane_cp01

0x9537,	// (0x000b25a4) call_thumbnail_pane_cp02

0x9d3e,	// (0x000b2dab) call_type_pane_cp022

0x9d46,	// (0x000b2db3) popup_call_audio_out_window_g1_ParamLimits

0x9d46,	// (0x000b2db3) popup_call_audio_out_window_g1

0x9d58,	// (0x000b2dc5) popup_call_audio_out_window_g2_ParamLimits

0x9d58,	// (0x000b2dc5) popup_call_audio_out_window_g2

0x9d64,	// (0x000b2dd1) popup_call_audio_out_window_g3_ParamLimits

0x9d64,	// (0x000b2dd1) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000b814a) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000b814a) popup_call_audio_out_window_g

0x9d76,	// (0x000b2de3) popup_call_audio_out_window_t1_ParamLimits

0x9d76,	// (0x000b2de3) popup_call_audio_out_window_t1

0x9d8e,	// (0x000b2dfb) popup_call_audio_out_window_t2_ParamLimits

0x9d8e,	// (0x000b2dfb) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000b8151) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000b8151) popup_call_audio_out_window_t

0x9da3,	// (0x000b2e10) bg_popup_call_pane_ParamLimits

0x9da3,	// (0x000b2e10) bg_popup_call_pane

0x06f0,	// (0x000a975d) call_thumbnail_pane_cp_ParamLimits

0x06f0,	// (0x000a975d) call_thumbnail_pane_cp

0x9e27,	// (0x000b2e94) call_type_pane_cp01_ParamLimits

0x9e27,	// (0x000b2e94) call_type_pane_cp01

0x9e6b,	// (0x000b2ed8) popup_call_audio_first_window_g1_ParamLimits

0x9e6b,	// (0x000b2ed8) popup_call_audio_first_window_g1

0x9eb7,	// (0x000b2f24) popup_call_audio_first_window_g2_ParamLimits

0x9eb7,	// (0x000b2f24) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000b8156) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000b8156) popup_call_audio_first_window_g

0x9efb,	// (0x000b2f68) popup_call_audio_first_window_t1_ParamLimits

0x9efb,	// (0x000b2f68) popup_call_audio_first_window_t1

0x9fa7,	// (0x000b3014) popup_call_audio_first_window_t4_ParamLimits

0x9fa7,	// (0x000b3014) popup_call_audio_first_window_t4

0xa033,	// (0x000b30a0) popup_call_audio_first_window_t5_ParamLimits

0xa033,	// (0x000b30a0) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000b815b) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000b815b) popup_call_audio_first_window_t

0xa062,	// (0x000b30cf) bg_popup_call_pane_cp02

0xa06c,	// (0x000b30d9) call_type_pane_cp023

0xa074,	// (0x000b30e1) popup_call_audio_wait_window_g1

0xa07c,	// (0x000b30e9) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000b8162) popup_call_audio_wait_window_g

0xa084,	// (0x000b30f1) popup_call_audio_wait_window_t3

0xa092,	// (0x000b30ff) bg_popup_call_pane_cp03_ParamLimits

0xa092,	// (0x000b30ff) bg_popup_call_pane_cp03

0xa64b,	// (0x000b36b8) call_thumbnail_pane_cp011_ParamLimits

0xa64b,	// (0x000b36b8) call_thumbnail_pane_cp011

0xa657,	// (0x000b36c4) call_type_pane_cp034_ParamLimits

0xa657,	// (0x000b36c4) call_type_pane_cp034

0xa693,	// (0x000b3700) popup_call_audio_second_window_g1_ParamLimits

0xa693,	// (0x000b3700) popup_call_audio_second_window_g1

0xa6cf,	// (0x000b373c) popup_call_audio_second_window_g2_ParamLimits

0xa6cf,	// (0x000b373c) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000b8167) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000b8167) popup_call_audio_second_window_g

0xa70b,	// (0x000b3778) popup_call_audio_second_window_t1_ParamLimits

0xa70b,	// (0x000b3778) popup_call_audio_second_window_t1

0xa78c,	// (0x000b37f9) popup_call_audio_second_window_t2_ParamLimits

0xa78c,	// (0x000b37f9) popup_call_audio_second_window_t2

0xa7c2,	// (0x000b382f) popup_call_audio_second_window_t3_ParamLimits

0xa7c2,	// (0x000b382f) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000b816c) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000b816c) popup_call_audio_second_window_t

0xa062,	// (0x000b30cf) bg_popup_call_pane_cp04

0xa7f8,	// (0x000b3865) list_conf_pane

0xa800,	// (0x000b386d) popup_call_audio_conf_window_t1

0xa80e,	// (0x000b387b) call_thumbnail_pane_g1

0xa816,	// (0x000b3883) bg_pinb_pane_ParamLimits

0xa816,	// (0x000b3883) bg_pinb_pane

0xa824,	// (0x000b3891) find_pinb_pane

0xa82d,	// (0x000b389a) listscroll_pinb_pane_ParamLimits

0xa82d,	// (0x000b389a) listscroll_pinb_pane

0xa83c,	// (0x000b38a9) pinb_bg_pane_g1

0x0714,	// (0x000a9781) pinb_bg_pane_g2

0x0720,	// (0x000a978d) pinb_bg_pane_g3

0x072c,	// (0x000a9799) pinb_bg_pane_g4

0x0738,	// (0x000a97a5) pinb_bg_pane_g5

0x0744,	// (0x000a97b1) pinb_bg_pane_g6

0x074f,	// (0x000a97bc) pinb_bg_pane_g7

0x075a,	// (0x000a97c7) pinb_bg_pane_g8

0x0765,	// (0x000a97d2) pinb_bg_pane_g9

0x076f,	// (0x000a97dc) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000b8173) pinb_bg_pane_g

0x078c,	// (0x000a97f9) grid_pinb_pane

0x0795,	// (0x000a9802) list_pinb_pane

0x079e,	// (0x000a980b) scroll_pane_cp01_ParamLimits

0x079e,	// (0x000a980b) scroll_pane_cp01

0xa846,	// (0x000b38b3) find_pinb_pane_g1_ParamLimits

0xa846,	// (0x000b38b3) find_pinb_pane_g1

0xa85e,	// (0x000b38cb) find_pinb_pane_t1

0xa870,	// (0x000b38dd) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000b818d) find_pinb_pane_t

0xa885,	// (0x000b38f2) input_focus_pane_cp01_ParamLimits

0xa885,	// (0x000b38f2) input_focus_pane_cp01

0x07b0,	// (0x000a981d) cell_pinb_pane_ParamLimits

0x07b0,	// (0x000a981d) cell_pinb_pane

0x07db,	// (0x000a9848) cell_pinb_pane_g1_ParamLimits

0x07db,	// (0x000a9848) cell_pinb_pane_g1

0xa891,	// (0x000b38fe) cell_pinb_pane_g2_ParamLimits

0xa891,	// (0x000b38fe) cell_pinb_pane_g2

0xa89d,	// (0x000b390a) cell_pinb_pane_g3_ParamLimits

0xa89d,	// (0x000b390a) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000b8192) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000b8192) cell_pinb_pane_g

0xa062,	// (0x000b30cf) grid_highlight_pane_cp01

0x07ee,	// (0x000a985b) list_pinb_item_pane_ParamLimits

0x07ee,	// (0x000a985b) list_pinb_item_pane

0xa062,	// (0x000b30cf) list_highlight_pane_cp02

0x0801,	// (0x000a986e) list_pinb_item_pane_g1_ParamLimits

0x0801,	// (0x000a986e) list_pinb_item_pane_g1

0x080e,	// (0x000a987b) list_pinb_item_pane_g2_ParamLimits

0x080e,	// (0x000a987b) list_pinb_item_pane_g2

0x081a,	// (0x000a9887) list_pinb_item_pane_g3_ParamLimits

0x081a,	// (0x000a9887) list_pinb_item_pane_g3

0x082b,	// (0x000a9898) list_pinb_item_pane_g4_ParamLimits

0x082b,	// (0x000a9898) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000b8199) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000b8199) list_pinb_item_pane_g

0x0837,	// (0x000a98a4) list_pinb_item_pane_t1_ParamLimits

0x0837,	// (0x000a98a4) list_pinb_item_pane_t1

0x086c,	// (0x000a98d9) calc_display_pane

0x0891,	// (0x000a98fe) calc_paper_pane

0x08b4,	// (0x000a9921) grid_calc_pane

0xa062,	// (0x000b30cf) bg_list_pane_cp01

0x08e2,	// (0x000a994f) clock_g1

0x08ea,	// (0x000a9957) clock_g2

0x0001,

0xf135,	// (0x000b81a2) clock_g

0x08f2,	// (0x000a995f) clock_t1_ParamLimits

0x08f2,	// (0x000a995f) clock_t1

0x0907,	// (0x000a9974) clock_t2_ParamLimits

0x0907,	// (0x000a9974) clock_t2

0x0919,	// (0x000a9986) clock_t3_ParamLimits

0x0919,	// (0x000a9986) clock_t3

0x092b,	// (0x000a9998) clock_t4_ParamLimits

0x092b,	// (0x000a9998) clock_t4

0x093d,	// (0x000a99aa) clock_t5_ParamLimits

0x093d,	// (0x000a99aa) clock_t5

0x0952,	// (0x000a99bf) clock_t6_ParamLimits

0x0952,	// (0x000a99bf) clock_t6

0x0964,	// (0x000a99d1) clock_t7_ParamLimits

0x0964,	// (0x000a99d1) clock_t7

0x0976,	// (0x000a99e3) clock_t8_ParamLimits

0x0976,	// (0x000a99e3) clock_t8

0x098a,	// (0x000a99f7) clock_t9_ParamLimits

0x098a,	// (0x000a99f7) clock_t9

0x0008,

0xf13a,	// (0x000b81a7) clock_t_ParamLimits

0xf13a,	// (0x000b81a7) clock_t

0xa8a9,	// (0x000b3916) popup_clock_analogue_window_cp02

0xa8a9,	// (0x000b3916) popup_clock_digital_window_cp01

0xa8b1,	// (0x000b391e) listscroll_help_pane

0xa062,	// (0x000b30cf) phob_pre_status_pane

0xa8bb,	// (0x000b3928) grid_qdial_pane

0xa816,	// (0x000b3883) listscroll_mce_pane

0xa816,	// (0x000b3883) bg_notes_pane

0xa8c5,	// (0x000b3932) list_notes_pane

0x099e,	// (0x000a9a0b) scroll_pane_cp06

0xa8d3,	// (0x000b3940) bg_calc_paper_pane

0x95a3,	// (0x000b2610) list_calc_pane

0xa8e7,	// (0x000b3954) bg_calc_display_pane

0x09b2,	// (0x000a9a1f) calc_display_pane_t1

0x09c4,	// (0x000a9a31) calc_display_pane_t2

0x95bd,	// (0x000b262a) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000b81ba) calc_display_pane_t

0x09d6,	// (0x000a9a43) cell_calc_pane_ParamLimits

0x09d6,	// (0x000a9a43) cell_calc_pane

0xa8f3,	// (0x000b3960) bg_calc_paper_pane_g1

0xa8ff,	// (0x000b396c) bg_calc_paper_pane_g2

0xa90b,	// (0x000b3978) bg_calc_paper_pane_g3

0xa917,	// (0x000b3984) bg_calc_paper_pane_g4

0xa923,	// (0x000b3990) bg_calc_paper_pane_g5

0x0a0b,	// (0x000a9a78) bg_calc_paper_pane_g6

0x0a1a,	// (0x000a9a87) bg_calc_paper_pane_g7

0x0a29,	// (0x000a9a96) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000b81c1) bg_calc_paper_pane_g

0x0a3c,	// (0x000a9aa9) calc_bg_paper_pane_g9

0x0a4f,	// (0x000a9abc) list_calc_item_pane_ParamLimits

0x0a4f,	// (0x000a9abc) list_calc_item_pane

0xa92f,	// (0x000b399c) list_calc_item_pane_g1

0x95cf,	// (0x000b263c) list_calc_item_pane_t1_ParamLimits

0x95cf,	// (0x000b263c) list_calc_item_pane_t1

0x0a64,	// (0x000a9ad1) list_calc_item_pane_t2_ParamLimits

0x0a64,	// (0x000a9ad1) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000b81d2) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000b81d2) list_calc_item_pane_t

0xa93c,	// (0x000b39a9) cell_calc_pane_g1

0xa946,	// (0x000b39b3) grid_highlight_pane_cp02

0xc1a5,	// (0x000b5212) bg_calc_display_pane_g1

0x0a96,	// (0x000a9b03) bg_calc_display_pane_g2

0xa968,	// (0x000b39d5) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000b81dc) bg_calc_display_pane_g

0x0aa0,	// (0x000a9b0d) cell_qdial_pane_ParamLimits

0x0aa0,	// (0x000a9b0d) cell_qdial_pane

0x0ab4,	// (0x000a9b21) cell_qdial_pane_g1_ParamLimits

0x0ab4,	// (0x000a9b21) cell_qdial_pane_g1

0x0aca,	// (0x000a9b37) cell_qdial_pane_g2_ParamLimits

0x0aca,	// (0x000a9b37) cell_qdial_pane_g2

0xa971,	// (0x000b39de) cell_qdial_pane_g3_ParamLimits

0xa971,	// (0x000b39de) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000b81e3) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000b81e3) cell_qdial_pane_g

0x0af0,	// (0x000a9b5d) cell_qdial_pane_t1_ParamLimits

0x0af0,	// (0x000a9b5d) cell_qdial_pane_t1

0x0b08,	// (0x000a9b75) cell_qdial_pane_t2_ParamLimits

0x0b08,	// (0x000a9b75) cell_qdial_pane_t2

0x0b1b,	// (0x000a9b88) cell_qdial_pane_t3_ParamLimits

0x0b1b,	// (0x000a9b88) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000b81ec) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000b81ec) cell_qdial_pane_t

0xa062,	// (0x000b30cf) grid_highlight_pane_cp04

0xa97d,	// (0x000b39ea) thumbnail_qdial_pane_ParamLimits

0xa97d,	// (0x000b39ea) thumbnail_qdial_pane

0xa9d9,	// (0x000b3a46) list_help_pane

0xa9e2,	// (0x000b3a4f) scroll_pane_cp02

0xa9eb,	// (0x000b3a58) help_list_pane_t1_ParamLimits

0xa9eb,	// (0x000b3a58) help_list_pane_t1

0x95e1,	// (0x000b264e) bg_notes_pane_g2

0x95e9,	// (0x000b2656) bg_notes_pane_g3

0x95f1,	// (0x000b265e) notes_bg_pane_g1

0x95f9,	// (0x000b2666) notes_bg_pane_g4

0x9601,	// (0x000b266e) notes_bg_pane_g5

0x9609,	// (0x000b2676) notes_bg_pane_g6

0x9611,	// (0x000b267e) notes_bg_pane_g7

0x9619,	// (0x000b2686) notes_bg_pane_g8

0x9621,	// (0x000b268e) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000b820a) notes_bg_pane_g

0x0b2e,	// (0x000a9b9b) list_notes_text_pane_ParamLimits

0x0b2e,	// (0x000a9b9b) list_notes_text_pane

0xaa09,	// (0x000b3a76) list_notes_text_pane_g1

0xa0f2,	// (0x000b315f) list_notes_text_pane_t1

0x0b44,	// (0x000a9bb1) listscroll_cale_week_pane

0x0b70,	// (0x000a9bdd) bg_cale_heading_pane

0xaa2c,	// (0x000b3a99) bg_cale_pane_cp01

0x0b88,	// (0x000a9bf5) cale_week_corner_pane

0x0ba7,	// (0x000a9c14) cale_week_day_heading_pane

0x0bc4,	// (0x000a9c31) cale_week_scroll_pane_g1

0x0bd7,	// (0x000a9c44) cale_week_scroll_pane_g2

0x0bef,	// (0x000a9c5c) cale_week_scroll_pane_g3

0x0c07,	// (0x000a9c74) cale_week_scroll_pane_g4

0x0c1f,	// (0x000a9c8c) cale_week_scroll_pane_g5

0x0c3f,	// (0x000a9cac) cale_week_scroll_pane_g6

0x0c5f,	// (0x000a9ccc) cale_week_scroll_pane_g7

0x0c7f,	// (0x000a9cec) cale_week_scroll_pane_g8

0x0ca3,	// (0x000a9d10) cale_week_scroll_pane_g9

0x0cbb,	// (0x000a9d28) cale_week_scroll_pane_g10

0x0cd3,	// (0x000a9d40) cale_week_scroll_pane_g11

0x0ceb,	// (0x000a9d58) cale_week_scroll_pane_g12

0x0d03,	// (0x000a9d70) cale_week_scroll_pane_g13

0x0d03,	// (0x000a9d70) cale_week_scroll_pane_g14

0x0d03,	// (0x000a9d70) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000b8219) cale_week_scroll_pane_g

0x0d3f,	// (0x000a9dac) cale_week_time_pane

0x0d63,	// (0x000a9dd0) grid_cale_week_pane

0xaa5b,	// (0x000b3ac8) scroll_pane_cp08

0x0d89,	// (0x000a9df6) cell_cale_week_pane_ParamLimits

0x0d89,	// (0x000a9df6) cell_cale_week_pane

0x0e17,	// (0x000a9e84) cale_week_day_heading_pane_t1

0x0e41,	// (0x000a9eae) cale_week_day_heading_pane_t2

0x0e70,	// (0x000a9edd) cale_week_day_heading_pane_t3

0x0e9f,	// (0x000a9f0c) cale_week_day_heading_pane_t4

0x0ece,	// (0x000a9f3b) cale_week_day_heading_pane_t5

0x0f05,	// (0x000a9f72) cale_week_day_heading_pane_t6

0x0f3c,	// (0x000a9fa9) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000b823a) cale_week_day_heading_pane_t

0xaa78,	// (0x000b3ae5) bg_cale_side_pane

0x0f66,	// (0x000a9fd3) cale_week_time_pane_t1

0x0f80,	// (0x000a9fed) cale_week_time_pane_t2

0x0f9a,	// (0x000aa007) cale_week_time_pane_t3

0x0fb4,	// (0x000aa021) cale_week_time_pane_t4

0x0fce,	// (0x000aa03b) cale_week_time_pane_t5

0x0fe8,	// (0x000aa055) cale_week_time_pane_t6

0x1002,	// (0x000aa06f) cale_week_time_pane_t7

0x101c,	// (0x000aa089) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000b8249) cale_week_time_pane_t

0x103c,	// (0x000aa0a9) cell_cale_week_pane_g2

0x1060,	// (0x000aa0cd) cell_cale_week_pane_g3_ParamLimits

0x1060,	// (0x000aa0cd) cell_cale_week_pane_g3

0xaa86,	// (0x000b3af3) grid_highlight_pane_cp07

0xaa8e,	// (0x000b3afb) listscroll_gms_pane

0xaa98,	// (0x000b3b05) grid_gms_pane

0xaaa1,	// (0x000b3b0e) listscroll_gms_pane_g1

0xaaa9,	// (0x000b3b16) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000b825a) listscroll_gms_pane_g

0x1078,	// (0x000aa0e5) scroll_pane_cp010

0x1083,	// (0x000aa0f0) cell_gms_pane_ParamLimits

0x1083,	// (0x000aa0f0) cell_gms_pane

0x1095,	// (0x000aa102) cell_gms_pane_g1

0xaab1,	// (0x000b3b1e) cell_gms_pane_g2

0xaab9,	// (0x000b3b26) cell_gms_pane_g3

0xaac2,	// (0x000b3b2f) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000b825f) cell_gms_pane_g

0xaacb,	// (0x000b3b38) grid_highlight_pane_cp09

0x3341,	// (0x000ac3ae) phob_pre_status_pane_g1

0x3349,	// (0x000ac3b6) phob_pre_status_pane_g2

0x3351,	// (0x000ac3be) phob_pre_status_pane_g3

0x3359,	// (0x000ac3c6) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x000b865d) phob_pre_status_pane_g

0x3369,	// (0x000ac3d6) phob_pre_status_pane_t1

0x3377,	// (0x000ac3e4) phob_pre_status_pane_t2

0x3387,	// (0x000ac3f4) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x000b8668) phob_pre_status_pane_t

0xaad3,	// (0x000b3b40) bg_list_pane_cp05

0x10a5,	// (0x000aa112) grid_vorec_pane

0x10ad,	// (0x000aa11a) vorec_t1

0x10bb,	// (0x000aa128) vorec_t2

0x10c9,	// (0x000aa136) vorec_t3

0x10d7,	// (0x000aa144) vorec_t4

0x93fd,	// (0x000b246a) vorec_t5

0x940b,	// (0x000b2478) vorec_t6

0x0004,

0xf1fb,	// (0x000b8268) vorec_t

0x9419,	// (0x000b2486) wait_bar_pane_cp01

0x10f3,	// (0x000aa160) cell_vorec_pane_ParamLimits

0x10f3,	// (0x000aa160) cell_vorec_pane

0x9629,	// (0x000b2696) cell_vorec_pane_g1

0xa062,	// (0x000b30cf) grid_highlight_pane_cp05

0x111e,	// (0x000aa18b) cams_zoom_pane

0x112d,	// (0x000aa19a) image_vga_pane

0x1147,	// (0x000aa1b4) main_camera_pane_g1

0x1159,	// (0x000aa1c6) main_camera_pane_g2

0x1169,	// (0x000aa1d6) main_camera_pane_g3

0x1179,	// (0x000aa1e6) main_camera_pane_g4

0x1189,	// (0x000aa1f6) main_camera_pane_g5

0x1199,	// (0x000aa206) main_camera_pane_g6

0x11a9,	// (0x000aa216) main_camera_pane_g7

0x0007,

0xf206,	// (0x000b8273) main_camera_pane_g

0x11b9,	// (0x000aa226) main_camera_pane_t1

0x11cf,	// (0x000aa23c) main_camera_pane_t2

0x0001,

0xf217,	// (0x000b8284) main_camera_pane_t

0x1209,	// (0x000aa276) cams_zoom_pane_cp_ParamLimits

0x1209,	// (0x000aa276) cams_zoom_pane_cp

0x1231,	// (0x000aa29e) image_cif_pane_ParamLimits

0x1231,	// (0x000aa29e) image_cif_pane

0x126c,	// (0x000aa2d9) image_subqcif_pane

0x1274,	// (0x000aa2e1) main_video_pane_g1_ParamLimits

0x1274,	// (0x000aa2e1) main_video_pane_g1

0x1298,	// (0x000aa305) main_video_pane_g2_ParamLimits

0x1298,	// (0x000aa305) main_video_pane_g2

0x12cc,	// (0x000aa339) main_video_pane_g3_ParamLimits

0x12cc,	// (0x000aa339) main_video_pane_g3

0x12fa,	// (0x000aa367) main_video_pane_g4_ParamLimits

0x12fa,	// (0x000aa367) main_video_pane_g4

0x1328,	// (0x000aa395) main_video_pane_g5_ParamLimits

0x1328,	// (0x000aa395) main_video_pane_g5

0xaae7,	// (0x000b3b54) main_video_pane_g6_ParamLimits

0xaae7,	// (0x000b3b54) main_video_pane_g6

0x0006,

0xf21c,	// (0x000b8289) main_video_pane_g_ParamLimits

0xf21c,	// (0x000b8289) main_video_pane_g

0x1351,	// (0x000aa3be) main_video_pane_t1_ParamLimits

0x1351,	// (0x000aa3be) main_video_pane_t1

0xab01,	// (0x000b3b6e) cams_zoom_pane_g1

0xab0a,	// (0x000b3b77) cams_zoom_pane_g2

0xab13,	// (0x000b3b80) cams_zoom_pane_g3

0xab1c,	// (0x000b3b89) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x000b8298) cams_zoom_pane_g

0x13ae,	// (0x000aa41b) grid_cams_pane

0x13c8,	// (0x000aa435) linegrid_cams_pane

0x13db,	// (0x000aa448) cell_cams_pane_ParamLimits

0x13db,	// (0x000aa448) cell_cams_pane

0xab25,	// (0x000b3b92) cams_burst_image_pane

0xab2d,	// (0x000b3b9a) cell_cams_pane_g1

0xa062,	// (0x000b30cf) grid_highlight_pane_cp03

0xa93c,	// (0x000b39a9) mp_bg_pane_g1

0xa062,	// (0x000b30cf) bg_list_pane_cp03

0xc899,	// (0x000b5906) bg_mp_pane

0xc8a1,	// (0x000b590e) grid_mp_pane

0xc8a9,	// (0x000b5916) media_player_g1

0xc8b1,	// (0x000b591e) media_player_t1

0xc8bf,	// (0x000b592c) media_player_t2

0xc8cd,	// (0x000b593a) media_player_t3

0xc8db,	// (0x000b5948) media_player_t4

0xc8e9,	// (0x000b5956) media_player_t5

0xc8f7,	// (0x000b5964) media_player_t6

0xc905,	// (0x000b5972) media_player_t7

0x0006,

0xf5da,	// (0x000b8647) media_player_t

0xc913,	// (0x000b5980) wait_bar_pane_cp02

0xf5bf,	// (0x000b862c) main_usb_pane_t

0x3338,	// (0x000ac3a5) cell_mp_pane

0xa93c,	// (0x000b39a9) cell_mp_pane_g1

0xa062,	// (0x000b30cf) grid_highlight_pane_cp06

0xab35,	// (0x000b3ba2) grid_skin_colour_pane

0xab3d,	// (0x000b3baa) list_highlight_pane_cp03

0x14f4,	// (0x000aa561) skin_g1

0xab45,	// (0x000b3bb2) skin_t1

0xab54,	// (0x000b3bc1) skin_t2

0x0001,

0xf260,	// (0x000b82cd) skin_t

0x14fc,	// (0x000aa569) cell_skin_colour_pane_ParamLimits

0x14fc,	// (0x000aa569) cell_skin_colour_pane

0xab62,	// (0x000b3bcf) cell_skin_colour_pane_g1

0x1575,	// (0x000aa5e2) call_video_g1_ParamLimits

0x1575,	// (0x000aa5e2) call_video_g1

0x1591,	// (0x000aa5fe) call_video_g2_ParamLimits

0x1591,	// (0x000aa5fe) call_video_g2

0x0001,

0xf265,	// (0x000b82d2) call_video_g_ParamLimits

0xf265,	// (0x000b82d2) call_video_g

0x15e3,	// (0x000aa650) call_video_uplink_pane_cp1_ParamLimits

0x15e3,	// (0x000aa650) call_video_uplink_pane_cp1

0xab74,	// (0x000b3be1) call_video_uplink_pane_cp2

0x1682,	// (0x000aa6ef) video_down_crop_pane_ParamLimits

0x1682,	// (0x000aa6ef) video_down_crop_pane

0x176b,	// (0x000aa7d8) video_down_pane_ParamLimits

0x176b,	// (0x000aa7d8) video_down_pane

0xab7c,	// (0x000b3be9) video_down_subqcif_pane_ParamLimits

0xab7c,	// (0x000b3be9) video_down_subqcif_pane

0xab94,	// (0x000b3c01) video_down_subqcif_pane_cp_ParamLimits

0xab94,	// (0x000b3c01) video_down_subqcif_pane_cp

0xabba,	// (0x000b3c27) im_reading_pane_ParamLimits

0xabba,	// (0x000b3c27) im_reading_pane

0x187b,	// (0x000aa8e8) im_writing_pane_ParamLimits

0x187b,	// (0x000aa8e8) im_writing_pane

0x1891,	// (0x000aa8fe) im_reading_pane_t1

0xabd4,	// (0x000b3c41) list_im_pane

0xabe5,	// (0x000b3c52) scroll_pane_cp07

0x18cb,	// (0x000aa938) im_writing_pane_t1_ParamLimits

0x18cb,	// (0x000aa938) im_writing_pane_t1

0xabfe,	// (0x000b3c6b) im_writing_pane_t2_ParamLimits

0xabfe,	// (0x000b3c6b) im_writing_pane_t2

0x0001,

0xf26f,	// (0x000b82dc) im_writing_pane_t_ParamLimits

0xf26f,	// (0x000b82dc) im_writing_pane_t

0xa062,	// (0x000b30cf) input_focus_pane_cp04

0xa062,	// (0x000b30cf) input_focus_pane_cp05

0x18e0,	// (0x000aa94d) list_im_single_pane_ParamLimits

0x18e0,	// (0x000aa94d) list_im_single_pane

0x18f5,	// (0x000aa962) list_single_im_pane_t1

0x32f8,	// (0x000ac365) blid_accuracy_pane

0x3300,	// (0x000ac36d) blid_compass_pane

0x330a,	// (0x000ac377) main_location_t1

0x331a,	// (0x000ac387) main_location_t2

0x332a,	// (0x000ac397) main_location_t3

0x0002,

0xf5e9,	// (0x000b8656) main_location_t

0xa062,	// (0x000b30cf) aid_levels_location

0xa93c,	// (0x000b39a9) blid_accuracy_pane_g1

0xa93c,	// (0x000b39a9) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x000b833e) blid_accuracy_pane_g

0xac46,	// (0x000b3cb3) wml_content_pane

0xac84,	// (0x000b3cf1) wml_button_pane_ParamLimits

0xac84,	// (0x000b3cf1) wml_button_pane

0x1904,	// (0x000aa971) wml_list_single_large_pane_ParamLimits

0x1904,	// (0x000aa971) wml_list_single_large_pane

0x1919,	// (0x000aa986) wml_list_single_medium_pane_ParamLimits

0x1919,	// (0x000aa986) wml_list_single_medium_pane

0x1930,	// (0x000aa99d) wml_list_single_small_pane_ParamLimits

0x1930,	// (0x000aa99d) wml_list_single_small_pane

0xac98,	// (0x000b3d05) wml_selection_box_pane_ParamLimits

0xac98,	// (0x000b3d05) wml_selection_box_pane

0xacab,	// (0x000b3d18) wml_list_single_pane_t1

0xacba,	// (0x000b3d27) wml_list_single_medium_pane_t1

0xacc9,	// (0x000b3d36) wml_list_single_large_pane_t1

0xacd8,	// (0x000b3d45) input_focus_pane_cp02_ParamLimits

0xacd8,	// (0x000b3d45) input_focus_pane_cp02

0xaceb,	// (0x000b3d58) wml_selection_box_pane_g1

0xacf4,	// (0x000b3d61) wml_selection_box_pane_t1_ParamLimits

0xacf4,	// (0x000b3d61) wml_selection_box_pane_t1

0xa816,	// (0x000b3883) bg_wml_button_pane_ParamLimits

0xa816,	// (0x000b3883) bg_wml_button_pane

0xad0c,	// (0x000b3d79) wml_button_pane_g1

0xad14,	// (0x000b3d81) wml_button_pane_t1

0xad0c,	// (0x000b3d79) wml_button_bg_pane_g1

0xad24,	// (0x000b3d91) wml_button_bg_pane_g2

0xad2c,	// (0x000b3d99) wml_button_bg_pane_g3

0xad34,	// (0x000b3da1) wml_button_bg_pane_g4

0xad3c,	// (0x000b3da9) wml_button_bg_pane_g5

0xad44,	// (0x000b3db1) wml_button_bg_pane_g6

0xad4c,	// (0x000b3db9) wml_button_bg_pane_g7

0xad54,	// (0x000b3dc1) wml_button_bg_pane_g8

0xad5c,	// (0x000b3dc9) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x000b82e1) wml_button_bg_pane_g

0x1949,	// (0x000aa9b6) bg_list_pane_cp02

0xad64,	// (0x000b3dd1) mce_header_pane_ParamLimits

0xad64,	// (0x000b3dd1) mce_header_pane

0xad7a,	// (0x000b3de7) mce_icon_pane

0xad7a,	// (0x000b3de7) mce_image_pane

0xad83,	// (0x000b3df0) mce_text_pane_ParamLimits

0xad83,	// (0x000b3df0) mce_text_pane

0x1951,	// (0x000aa9be) scroll_pane_cp03

0xac7c,	// (0x000b3ce9) scroll_pane_cp04

0xad96,	// (0x000b3e03) scroll_pane_cp05_ParamLimits

0xad96,	// (0x000b3e03) scroll_pane_cp05

0x195b,	// (0x000aa9c8) mce_header_field_pane_ParamLimits

0x195b,	// (0x000aa9c8) mce_header_field_pane

0x1972,	// (0x000aa9df) mce_header_field_pane_2_ParamLimits

0x1972,	// (0x000aa9df) mce_header_field_pane_2

0x1988,	// (0x000aa9f5) mce_header_field_pane_3

0x1990,	// (0x000aa9fd) list_single_mce_message_pane_ParamLimits

0x1990,	// (0x000aa9fd) list_single_mce_message_pane

0x19a6,	// (0x000aaa13) list_single_mce_smart_pane_ParamLimits

0x19a6,	// (0x000aaa13) list_single_mce_smart_pane

0xada2,	// (0x000b3e0f) input_focus_pane_cp03

0xadab,	// (0x000b3e18) list_header_data_pane

0x19c7,	// (0x000aaa34) mce_header_field_pane_t1

0x19d7,	// (0x000aaa44) list_single_mce_header_pane_ParamLimits

0x19d7,	// (0x000aaa44) list_single_mce_header_pane

0xadb3,	// (0x000b3e20) list_single_mce_header_pane_t1

0xadc2,	// (0x000b3e2f) list_single_mce_message_pane_g1

0xadca,	// (0x000b3e37) list_single_mce_message_pane_t1

0x1a11,	// (0x000aaa7e) bg_cale_heading_pane_cp01_ParamLimits

0x1a11,	// (0x000aaa7e) bg_cale_heading_pane_cp01

0xadd8,	// (0x000b3e45) bg_cale_pane_cp02_ParamLimits

0xadd8,	// (0x000b3e45) bg_cale_pane_cp02

0x1a4b,	// (0x000aaab8) cale_month_corner_pane

0x1a6a,	// (0x000aaad7) cale_month_day_heading_pane_ParamLimits

0x1a6a,	// (0x000aaad7) cale_month_day_heading_pane

0x1abc,	// (0x000aab29) cale_month_pane_g1_ParamLimits

0x1abc,	// (0x000aab29) cale_month_pane_g1

0x1aeb,	// (0x000aab58) cale_month_pane_g2_ParamLimits

0x1aeb,	// (0x000aab58) cale_month_pane_g2

0x1b1b,	// (0x000aab88) cale_month_pane_g3_ParamLimits

0x1b1b,	// (0x000aab88) cale_month_pane_g3

0x1b57,	// (0x000aabc4) cale_month_pane_g4_ParamLimits

0x1b57,	// (0x000aabc4) cale_month_pane_g4

0x1b93,	// (0x000aac00) cale_month_pane_g5_ParamLimits

0x1b93,	// (0x000aac00) cale_month_pane_g5

0x1bdb,	// (0x000aac48) cale_month_pane_g6_ParamLimits

0x1bdb,	// (0x000aac48) cale_month_pane_g6

0x1c27,	// (0x000aac94) cale_month_pane_g7_ParamLimits

0x1c27,	// (0x000aac94) cale_month_pane_g7

0x1c77,	// (0x000aace4) cale_month_pane_g8_ParamLimits

0x1c77,	// (0x000aace4) cale_month_pane_g8

0x1ccb,	// (0x000aad38) cale_month_pane_g9_ParamLimits

0x1ccb,	// (0x000aad38) cale_month_pane_g9

0x1d1d,	// (0x000aad8a) cale_month_pane_g10_ParamLimits

0x1d1d,	// (0x000aad8a) cale_month_pane_g10

0x1d6f,	// (0x000aaddc) cale_month_pane_g11_ParamLimits

0x1d6f,	// (0x000aaddc) cale_month_pane_g11

0x1dc1,	// (0x000aae2e) cale_month_pane_g12_ParamLimits

0x1dc1,	// (0x000aae2e) cale_month_pane_g12

0x1e13,	// (0x000aae80) cale_month_pane_g13_ParamLimits

0x1e13,	// (0x000aae80) cale_month_pane_g13

0x000c,

0xf287,	// (0x000b82f4) cale_month_pane_g_ParamLimits

0xf287,	// (0x000b82f4) cale_month_pane_g

0x1e65,	// (0x000aaed2) cale_month_week_pane

0x1e89,	// (0x000aaef6) grid_cale_month_pane_ParamLimits

0x1e89,	// (0x000aaef6) grid_cale_month_pane

0x1ed2,	// (0x000aaf3f) cale_month_day_heading_pane_t1

0x1f14,	// (0x000aaf81) cale_month_day_heading_pane_t2

0x1f49,	// (0x000aafb6) cale_month_day_heading_pane_t3

0x1f7e,	// (0x000aafeb) cale_month_day_heading_pane_t4

0x1fbb,	// (0x000ab028) cale_month_day_heading_pane_t5

0x2000,	// (0x000ab06d) cale_month_day_heading_pane_t6

0x2045,	// (0x000ab0b2) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x000b830f) cale_month_day_heading_pane_t

0xaa78,	// (0x000b3ae5) bg_cale_side_pane_cp01

0x2092,	// (0x000ab0ff) cale_month_week_pane_t1

0x20ab,	// (0x000ab118) cale_month_week_pane_t2

0x20c4,	// (0x000ab131) cale_month_week_pane_t3

0x20dd,	// (0x000ab14a) cale_month_week_pane_t4

0x20f6,	// (0x000ab163) cale_month_week_pane_t5

0x210f,	// (0x000ab17c) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x000b831e) cale_month_week_pane_t

0x2128,	// (0x000ab195) cell_cale_month_pane_ParamLimits

0x2128,	// (0x000ab195) cell_cale_month_pane

0x9633,	// (0x000b26a0) cell_cale_month_pane_g1

0x2280,	// (0x000ab2ed) cell_cale_month_pane_t1_ParamLimits

0x2280,	// (0x000ab2ed) cell_cale_month_pane_t1

0xaa86,	// (0x000b3af3) grid_highlight_pane_cp08

0xa93c,	// (0x000b39a9) main_smil_g1

0x22ac,	// (0x000ab319) smil_status_pane

0xae17,	// (0x000b3e84) smil_text_pane

0xc779,	// (0x000b57e6) bg_popup_call3_rect_pane_g8

0xc781,	// (0x000b57ee) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x000b85d7) bg_popup_call3_rect_pane_g

0xca08,	// (0x000b5a75) smil_status_volume_pane_g1

0xae21,	// (0x000b3e8e) smil_status_pane_t1

0x9779,	// (0x000b27e6) volume_smil_pane

0xae38,	// (0x000b3ea5) list_smil_text_pane

0x22c1,	// (0x000ab32e) scroll_pane_cp011

0x22cc,	// (0x000ab339) smil_text_list_pane_t1_ParamLimits

0x22cc,	// (0x000ab339) smil_text_list_pane_t1

0x963f,	// (0x000b26ac) aid_volume_smil_ParamLimits

0x963f,	// (0x000b26ac) aid_volume_smil

0xa93c,	// (0x000b39a9) smil_volume_pane_g1

0xa93c,	// (0x000b39a9) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x000b833e) smil_volume_pane_g

0x0b44,	// (0x000a9bb1) listscroll_cale_day_pane

0xae42,	// (0x000b3eaf) bg_cale_pane

0xae5a,	// (0x000b3ec7) list_cale_pane

0xae7d,	// (0x000b3eea) scroll_pane_cp09

0xae8e,	// (0x000b3efb) cale_bg_pane_g1

0xae96,	// (0x000b3f03) cale_bg_pane_g2

0xae9e,	// (0x000b3f0b) cale_bg_pane_g3

0xaea6,	// (0x000b3f13) cale_bg_pane_g4

0xaeae,	// (0x000b3f1b) cale_bg_pane_g5

0xaeb6,	// (0x000b3f23) cale_bg_pane_g6

0xaebe,	// (0x000b3f2b) cale_bg_pane_g7

0xaec6,	// (0x000b3f33) cale_bg_pane_g8

0xaece,	// (0x000b3f3b) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x000b8343) cale_bg_pane_g

0x2318,	// (0x000ab385) list_cale_time_pane_ParamLimits

0x2318,	// (0x000ab385) list_cale_time_pane

0xaed6,	// (0x000b3f43) list_cale_time_pane_g1_ParamLimits

0xaed6,	// (0x000b3f43) list_cale_time_pane_g1

0xaee2,	// (0x000b3f4f) list_cale_time_pane_g2_ParamLimits

0xaee2,	// (0x000b3f4f) list_cale_time_pane_g2

0x232e,	// (0x000ab39b) list_cale_time_pane_g3_ParamLimits

0x232e,	// (0x000ab39b) list_cale_time_pane_g3

0x233c,	// (0x000ab3a9) list_cale_time_pane_g4_ParamLimits

0x233c,	// (0x000ab3a9) list_cale_time_pane_g4

0x234a,	// (0x000ab3b7) list_cale_time_pane_g5_ParamLimits

0x234a,	// (0x000ab3b7) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x000b8356) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x000b8356) list_cale_time_pane_g

0xaefc,	// (0x000b3f69) list_cale_time_pane_t1_ParamLimits

0xaefc,	// (0x000b3f69) list_cale_time_pane_t1

0xaf36,	// (0x000b3fa3) list_cale_time_pane_t2_ParamLimits

0xaf36,	// (0x000b3fa3) list_cale_time_pane_t2

0x26ca,	// (0x000ab737) aid_blid_cardinal_pane

0x2708,	// (0x000ab775) compass_pane_t4

0xaf5e,	// (0x000b3fcb) list_cale_time_pane_t4_ParamLimits

0xaf5e,	// (0x000b3fcb) list_cale_time_pane_t4

0x2716,	// (0x000ab783) compass_pane_t5

0x2724,	// (0x000ab791) compass_pane_t6

0x2732,	// (0x000ab79f) compass_pane_t7

0xb3e2,	// (0x000b444f) navi_pane_cc_t1

0xb5bf,	// (0x000b462c) aid_phob_thumbnail_center_pane

0x2d0e,	// (0x000abd7b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x000b8363) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x000b8363) list_cale_time_pane_t

0x9529,	// (0x000b2596) bg_popup_window_pane_cp02_ParamLimits

0x9529,	// (0x000b2596) bg_popup_window_pane_cp02

0xaf86,	// (0x000b3ff3) heading_pane_cp01_ParamLimits

0xaf86,	// (0x000b3ff3) heading_pane_cp01

0xaf92,	// (0x000b3fff) loc_req_pane_ParamLimits

0xaf92,	// (0x000b3fff) loc_req_pane

0xafa2,	// (0x000b400f) loc_type_pane_ParamLimits

0xafa2,	// (0x000b400f) loc_type_pane

0xafb4,	// (0x000b4021) loc_type_pane_t1_ParamLimits

0xafb4,	// (0x000b4021) loc_type_pane_t1

0xafc6,	// (0x000b4033) loc_type_pane_t2_ParamLimits

0xafc6,	// (0x000b4033) loc_type_pane_t2

0xafd8,	// (0x000b4045) loc_type_pane_t3_ParamLimits

0xafd8,	// (0x000b4045) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x000b836a) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x000b836a) loc_type_pane_t

0xafea,	// (0x000b4057) list_loc_req_pane

0xaff4,	// (0x000b4061) scroll_pane_cp012

0x2358,	// (0x000ab3c5) list_single_loc_request_popup_menu_pane_ParamLimits

0x2358,	// (0x000ab3c5) list_single_loc_request_popup_menu_pane

0xafff,	// (0x000b406c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafff,	// (0x000b406c) list_single_loc_request_popup_menu_pane_g1

0xb00b,	// (0x000b4078) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb00b,	// (0x000b4078) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x000b8371) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x000b8371) list_single_loc_request_popup_menu_pane_g

0xb017,	// (0x000b4084) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb017,	// (0x000b4084) list_single_loc_request_popup_menu_pane_t1

0xa816,	// (0x000b3883) bg_popup_window_pane_cp03_ParamLimits

0xa816,	// (0x000b3883) bg_popup_window_pane_cp03

0xb02d,	// (0x000b409a) heading_loc_req_pane_ParamLimits

0xb02d,	// (0x000b409a) heading_loc_req_pane

0x2365,	// (0x000ab3d2) popup_dyc_status_message_window_g1_ParamLimits

0x2365,	// (0x000ab3d2) popup_dyc_status_message_window_g1

0x2379,	// (0x000ab3e6) popup_dyc_status_message_window_t1_ParamLimits

0x2379,	// (0x000ab3e6) popup_dyc_status_message_window_t1

0x238e,	// (0x000ab3fb) popup_dyc_status_message_window_t2_ParamLimits

0x238e,	// (0x000ab3fb) popup_dyc_status_message_window_t2

0x23a3,	// (0x000ab410) popup_dyc_status_message_window_t3_ParamLimits

0x23a3,	// (0x000ab410) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x000b8376) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x000b8376) popup_dyc_status_message_window_t

0xa062,	// (0x000b30cf) bg_heading_pane_cp01

0xb039,	// (0x000b40a6) heading_loc_req_pane_g1

0xb041,	// (0x000b40ae) heading_loc_req_pane_g2

0xb049,	// (0x000b40b6) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x000b837d) heading_loc_req_pane_g

0xb051,	// (0x000b40be) heading_loc_req_pane_t1

0xb060,	// (0x000b40cd) bg_popup_sub_pane_cp01_ParamLimits

0xb060,	// (0x000b40cd) bg_popup_sub_pane_cp01

0xb06e,	// (0x000b40db) popup_cale_events_window_g1_ParamLimits

0xb06e,	// (0x000b40db) popup_cale_events_window_g1

0xb08e,	// (0x000b40fb) popup_cale_events_window_g2_ParamLimits

0xb08e,	// (0x000b40fb) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x000b83b1) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x000b83b1) popup_cale_events_window_g

0xb0ae,	// (0x000b411b) popup_cale_events_window_t1_ParamLimits

0xb0ae,	// (0x000b411b) popup_cale_events_window_t1

0xb0c0,	// (0x000b412d) popup_cale_events_window_t2_ParamLimits

0xb0c0,	// (0x000b412d) popup_cale_events_window_t2

0xb0fe,	// (0x000b416b) popup_cale_events_window_t3_ParamLimits

0xb0fe,	// (0x000b416b) popup_cale_events_window_t3

0xb138,	// (0x000b41a5) popup_cale_events_window_t4_ParamLimits

0xb138,	// (0x000b41a5) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x000b83b6) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x000b83b6) popup_cale_events_window_t

0x249a,	// (0x000ab507) call_type_pane

0x24aa,	// (0x000ab517) popup_call_status_window_g1

0x24be,	// (0x000ab52b) popup_call_status_window_g2

0x24d2,	// (0x000ab53f) popup_call_status_window_g3

0x0002,

0xf352,	// (0x000b83bf) popup_call_status_window_g

0xb16e,	// (0x000b41db) call_type_pane_g1

0xb177,	// (0x000b41e4) call_type_pane_g2

0x0001,

0xf359,	// (0x000b83c6) call_type_pane_g

0xa062,	// (0x000b30cf) bg_popup_sub_pane_cp02

0xb180,	// (0x000b41ed) listscroll_popup_wml_pane

0xb188,	// (0x000b41f5) list_wml_pane

0xb192,	// (0x000b41ff) scroll_pane_cp013

0xb19d,	// (0x000b420a) list_single_graphic_popup_wml_pane_ParamLimits

0xb19d,	// (0x000b420a) list_single_graphic_popup_wml_pane

0xa93c,	// (0x000b39a9) list_single_graphic_popup_wml_pane_g1

0xb1b1,	// (0x000b421e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x000b83cb) list_single_graphic_popup_wml_pane_g

0xb1b9,	// (0x000b4226) list_single_graphic_popup_wml_pane_t1

0xb1cf,	// (0x000b423c) aid_call_pane

0xa80e,	// (0x000b387b) popup_clock_analogue_window_g1

0xa80e,	// (0x000b387b) popup_clock_analogue_window_g2

0x9661,	// (0x000b26ce) popup_clock_analogue_window_g3

0x9661,	// (0x000b26ce) popup_clock_analogue_window_g4

0xa93c,	// (0x000b39a9) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x000b83d0) popup_clock_analogue_window_g

0x9669,	// (0x000b26d6) popup_clock_analogue_window_t1

0x9677,	// (0x000b26e4) clock_digital_number_pane_ParamLimits

0x9677,	// (0x000b26e4) clock_digital_number_pane

0x9683,	// (0x000b26f0) clock_digital_number_pane_cp02_ParamLimits

0x9683,	// (0x000b26f0) clock_digital_number_pane_cp02

0x968f,	// (0x000b26fc) clock_digital_number_pane_cp03_ParamLimits

0x968f,	// (0x000b26fc) clock_digital_number_pane_cp03

0x969b,	// (0x000b2708) clock_digital_number_pane_cp04_ParamLimits

0x969b,	// (0x000b2708) clock_digital_number_pane_cp04

0x96a7,	// (0x000b2714) clock_digital_separator_pane_ParamLimits

0x96a7,	// (0x000b2714) clock_digital_separator_pane

0x96b3,	// (0x000b2720) popup_clock_digital_window_t1

0xa93c,	// (0x000b39a9) clock_digital_number_pane_g1

0xa93c,	// (0x000b39a9) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x000b833e) clock_digital_number_pane_g

0xa93c,	// (0x000b39a9) clock_digital_separator_pane_g1

0xa93c,	// (0x000b39a9) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x000b833e) clock_digital_separator_pane_g

0xa062,	// (0x000b30cf) bg_popup_window_pane_cp04

0xb1d7,	// (0x000b4244) heading_pane_cp03

0xb1df,	// (0x000b424c) listscroll_popup_gms_pane

0xb1e7,	// (0x000b4254) grid_large_graphic_popup_pane

0xb1f1,	// (0x000b425e) listscroll_popup_gms_pane_g1

0xb1f9,	// (0x000b4266) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x000b83db) listscroll_popup_gms_pane_g

0xac7c,	// (0x000b3ce9) scroll_pane_cp014

0x24e1,	// (0x000ab54e) cell_large_graphic_popup_pane_ParamLimits

0x24e1,	// (0x000ab54e) cell_large_graphic_popup_pane

0x24f9,	// (0x000ab566) cell_large_graphic_popup_pane_g1_ParamLimits

0x24f9,	// (0x000ab566) cell_large_graphic_popup_pane_g1

0xb201,	// (0x000b426e) cell_large_graphic_popup_pane_g2_ParamLimits

0xb201,	// (0x000b426e) cell_large_graphic_popup_pane_g2

0xb20d,	// (0x000b427a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb20d,	// (0x000b427a) cell_large_graphic_popup_pane_g3

0xb21a,	// (0x000b4287) cell_large_graphic_popup_pane_g4_ParamLimits

0xb21a,	// (0x000b4287) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x000b83e0) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x000b83e0) cell_large_graphic_popup_pane_g

0xb22a,	// (0x000b4297) grid_highlight_pane_cp010

0xa93c,	// (0x000b39a9) bg_popup_call_pane_g1

0xb234,	// (0x000b42a1) list_single_graphic_popup_conf_pane_ParamLimits

0xb234,	// (0x000b42a1) list_single_graphic_popup_conf_pane

0xb247,	// (0x000b42b4) list_highlight_pane_cp01

0xb250,	// (0x000b42bd) list_single_graphic_popup_conf_pane_g1

0xb258,	// (0x000b42c5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x000b83e9) list_single_graphic_popup_conf_pane_g

0xb260,	// (0x000b42cd) list_single_graphic_popup_conf_pane_t1

0xb26e,	// (0x000b42db) linegrid_cams_pane_g1

0x2505,	// (0x000ab572) linegrid_cams_pane_g2

0xaab9,	// (0x000b3b26) linegrid_cams_pane_g3

0xb277,	// (0x000b42e4) linegrid_cams_pane_g4

0x250e,	// (0x000ab57b) linegrid_cams_pane_g5

0x2517,	// (0x000ab584) linegrid_cams_pane_g6

0xaac2,	// (0x000b3b2f) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x000b83ee) linegrid_cams_pane_g

0xb280,	// (0x000b42ed) popup_clock_analogue_window

0xb280,	// (0x000b42ed) popup_clock_digital_window

0xa062,	// (0x000b30cf) popup_phob_thumbnail_window

0xa93c,	// (0x000b39a9) call_video_uplink_pane_g1

0xb289,	// (0x000b42f6) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x000b83fd) call_video_uplink_pane_g

0xb291,	// (0x000b42fe) video_uplink_pane

0xb299,	// (0x000b4306) mce_image_pane_g1

0x2522,	// (0x000ab58f) mce_image_pane_g2

0x252a,	// (0x000ab597) mce_image_pane_g3

0x2532,	// (0x000ab59f) mce_image_pane_g4

0x253c,	// (0x000ab5a9) mce_image_pane_g5

0x0004,

0xf395,	// (0x000b8402) mce_image_pane_g

0xb2a3,	// (0x000b4310) control_top_pane_stacon_cp01_ParamLimits

0xb2a3,	// (0x000b4310) control_top_pane_stacon_cp01

0xb2b7,	// (0x000b4324) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b7,	// (0x000b4324) uni_indicator_pane_stacon_cp01

0xb2c8,	// (0x000b4335) bg_popup_sub_pane_cp03

0x2544,	// (0x000ab5b1) chi_dic_find_pane

0x254c,	// (0x000ab5b9) listscroll_chi_dic_pane

0x2555,	// (0x000ab5c2) main_pane_chidic_g1

0x2568,	// (0x000ab5d5) chi_dic_find_pane_t1

0xb2d2,	// (0x000b433f) find_chidic_pane

0xb2db,	// (0x000b4348) chi_dic_list_pane_ParamLimits

0xb2db,	// (0x000b4348) chi_dic_list_pane

0xb2ec,	// (0x000b4359) scroll_pane_cp020

0x2576,	// (0x000ab5e3) find_chidic_pane_t1

0xa062,	// (0x000b30cf) input_focus_pane_cp06

0x2585,	// (0x000ab5f2) list_chi_dic_pane_ParamLimits

0x2585,	// (0x000ab5f2) list_chi_dic_pane

0x2597,	// (0x000ab604) list_chi_dic_pane_t1_ParamLimits

0x2597,	// (0x000ab604) list_chi_dic_pane_t1

0xa062,	// (0x000b30cf) list_highlight_pane_cp020

0xb2f4,	// (0x000b4361) bg_cale_heading_pane_g1

0x25aa,	// (0x000ab617) bg_cale_heading_pane_g2

0x25b2,	// (0x000ab61f) bg_cale_heading_pane_g3

0x25ba,	// (0x000ab627) bg_cale_heading_pane_g4

0x25c4,	// (0x000ab631) bg_cale_heading_pane_g5

0x25ce,	// (0x000ab63b) bg_cale_heading_pane_g6

0x25d6,	// (0x000ab643) bg_cale_heading_pane_g7

0x25de,	// (0x000ab64b) bg_cale_heading_pane_g8

0x25e8,	// (0x000ab655) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x000b840d) bg_cale_heading_pane_g

0xb2f4,	// (0x000b4361) bg_cale_side_pane_g1

0x25f2,	// (0x000ab65f) bg_cale_side_pane_g2

0x25fa,	// (0x000ab667) bg_cale_side_pane_g3

0x2602,	// (0x000ab66f) bg_cale_side_pane_g4

0x260a,	// (0x000ab677) bg_cale_side_pane_g5

0x2612,	// (0x000ab67f) bg_cale_side_pane_g6

0x261a,	// (0x000ab687) bg_cale_side_pane_g7

0x2622,	// (0x000ab68f) bg_cale_side_pane_g8

0x262a,	// (0x000ab697) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x000b8420) bg_cale_side_pane_g

0x2632,	// (0x000ab69f) popup_call_status_window_ParamLimits

0x2632,	// (0x000ab69f) popup_call_status_window

0xb2fc,	// (0x000b4369) stacon_top_pane

0xb304,	// (0x000b4371) status_pane_ParamLimits

0xb304,	// (0x000b4371) status_pane

0xb319,	// (0x000b4386) status_small_pane

0xb321,	// (0x000b438e) control_pane

0xa062,	// (0x000b30cf) stacon_bottom_pane

0xb329,	// (0x000b4396) list_single_mce_smart_pane_t1_ParamLimits

0xb329,	// (0x000b4396) list_single_mce_smart_pane_t1

0xb33c,	// (0x000b43a9) list_single_mce_smart_pane_t2_ParamLimits

0xb33c,	// (0x000b43a9) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x000b8433) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x000b8433) list_single_mce_smart_pane_t

0x2679,	// (0x000ab6e6) compass_pane

0x2682,	// (0x000ab6ef) main_location2_pane_t1

0x2694,	// (0x000ab701) main_location2_pane_t2

0x26a6,	// (0x000ab713) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x000b8438) main_location2_pane_t

0xb35b,	// (0x000b43c8) compass_pane_g1_ParamLimits

0xb35b,	// (0x000b43c8) compass_pane_g1

0x26ea,	// (0x000ab757) compass_pane_t1

0x26f9,	// (0x000ab766) compass_pane_t2

0x0005,

0xf3d4,	// (0x000b8441) compass_pane_t

0x2740,	// (0x000ab7ad) text_secondary_cp61

0xb3d9,	// (0x000b4446) navi_pane_cams_g5

0xb455,	// (0x000b44c2) navi_pane_im_t1

0xb463,	// (0x000b44d0) navi_pane_mp_g1_ParamLimits

0xb463,	// (0x000b44d0) navi_pane_mp_g1

0xb477,	// (0x000b44e4) navi_pane_mp_g2_ParamLimits

0xb477,	// (0x000b44e4) navi_pane_mp_g2

0xb483,	// (0x000b44f0) navi_pane_mp_g3_ParamLimits

0xb483,	// (0x000b44f0) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x000b8455) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x000b8455) navi_pane_mp_g

0xb48f,	// (0x000b44fc) navi_pane_mp_t1

0xb49d,	// (0x000b450a) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x000b845c) navi_pane_mp_t

0xb508,	// (0x000b4575) navi_pane_vt_g1

0xb48f,	// (0x000b44fc) navi_pane_vt_t1

0xb510,	// (0x000b457d) navi_slider_pane

0xaad3,	// (0x000b3b40) zooming_pane

0xb520,	// (0x000b458d) navi_slider_pane_g1

0x96d0,	// (0x000b273d) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x000b8463) navi_slider_pane_g

0xb544,	// (0x000b45b1) aid_levels_zoom

0xb54c,	// (0x000b45b9) zooming_pane_g1

0xb554,	// (0x000b45c1) zooming_pane_g2

0xb554,	// (0x000b45c1) zooming_pane_g3

0x0002,

0xf405,	// (0x000b8472) zooming_pane_g

0xb55c,	// (0x000b45c9) level_10_zoom

0xb565,	// (0x000b45d2) level_11_zoom

0xb56e,	// (0x000b45db) level_1_zoom

0xb577,	// (0x000b45e4) level_2_zoom

0xb580,	// (0x000b45ed) level_3_zoom

0xb589,	// (0x000b45f6) level_4_zoom

0xb592,	// (0x000b45ff) level_5_zoom

0xb59b,	// (0x000b4608) level_6_zoom

0xb5a4,	// (0x000b4611) level_7_zoom

0xb5ad,	// (0x000b461a) level_8_zoom

0xb5b6,	// (0x000b4623) level_9_zoom

0xb5c7,	// (0x000b4634) popup_phob_thumbnail_window_g1

0xb5cf,	// (0x000b463c) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x000b8479) popup_phob_thumbnail_window_g

0xc91b,	// (0x000b5988) level_1_location

0xc923,	// (0x000b5990) level_2_location

0xc92b,	// (0x000b5998) level_3_location

0xc933,	// (0x000b59a0) level_4_location

0xaad3,	// (0x000b3b40) level_5_location

0x2791,	// (0x000ab7fe) mce_icon_pane_g1

0x279b,	// (0x000ab808) mce_icon_pane_g2

0x0001,

0xf411,	// (0x000b847e) mce_icon_pane_g

0x27a3,	// (0x000ab810) main_mup_pane_g1_ParamLimits

0x27a3,	// (0x000ab810) main_mup_pane_g1

0x27b9,	// (0x000ab826) main_mup_pane_g2_ParamLimits

0x27b9,	// (0x000ab826) main_mup_pane_g2

0x27cb,	// (0x000ab838) main_mup_pane_g3_ParamLimits

0x27cb,	// (0x000ab838) main_mup_pane_g3

0x27dd,	// (0x000ab84a) main_mup_pane_g4_ParamLimits

0x27dd,	// (0x000ab84a) main_mup_pane_g4

0x27f5,	// (0x000ab862) main_mup_pane_g5_ParamLimits

0x27f5,	// (0x000ab862) main_mup_pane_g5

0x2811,	// (0x000ab87e) main_mup_pane_g6_ParamLimits

0x2811,	// (0x000ab87e) main_mup_pane_g6

0x2829,	// (0x000ab896) main_mup_pane_g7_ParamLimits

0x2829,	// (0x000ab896) main_mup_pane_g7

0x2841,	// (0x000ab8ae) main_mup_pane_g8_ParamLimits

0x2841,	// (0x000ab8ae) main_mup_pane_g8

0x2859,	// (0x000ab8c6) main_mup_pane_g9_ParamLimits

0x2859,	// (0x000ab8c6) main_mup_pane_g9

0x2873,	// (0x000ab8e0) main_mup_pane_g10_ParamLimits

0x2873,	// (0x000ab8e0) main_mup_pane_g10

0x288d,	// (0x000ab8fa) main_mup_pane_g11_ParamLimits

0x288d,	// (0x000ab8fa) main_mup_pane_g11

0x28a1,	// (0x000ab90e) main_mup_pane_g12_ParamLimits

0x28a1,	// (0x000ab90e) main_mup_pane_g12

0x28b7,	// (0x000ab924) main_mup_pane_g13_ParamLimits

0x28b7,	// (0x000ab924) main_mup_pane_g13

0x000c,

0xf416,	// (0x000b8483) main_mup_pane_g_ParamLimits

0xf416,	// (0x000b8483) main_mup_pane_g

0x28cb,	// (0x000ab938) main_mup_pane_t1_ParamLimits

0x28cb,	// (0x000ab938) main_mup_pane_t1

0x28e5,	// (0x000ab952) main_mup_pane_t2_ParamLimits

0x28e5,	// (0x000ab952) main_mup_pane_t2

0x28fd,	// (0x000ab96a) main_mup_pane_t3_ParamLimits

0x28fd,	// (0x000ab96a) main_mup_pane_t3

0x2915,	// (0x000ab982) main_mup_pane_t4_ParamLimits

0x2915,	// (0x000ab982) main_mup_pane_t4

0x2933,	// (0x000ab9a0) main_mup_pane_t5_ParamLimits

0x2933,	// (0x000ab9a0) main_mup_pane_t5

0x2948,	// (0x000ab9b5) main_mup_pane_t6_ParamLimits

0x2948,	// (0x000ab9b5) main_mup_pane_t6

0x0005,

0xf431,	// (0x000b849e) main_mup_pane_t_ParamLimits

0xf431,	// (0x000b849e) main_mup_pane_t

0x295a,	// (0x000ab9c7) mup_progress_pane_ParamLimits

0x295a,	// (0x000ab9c7) mup_progress_pane

0x2966,	// (0x000ab9d3) mup_visualizer_pane_ParamLimits

0x2966,	// (0x000ab9d3) mup_visualizer_pane

0x299a,	// (0x000aba07) mup_volume_pane_ParamLimits

0x299a,	// (0x000aba07) mup_volume_pane

0xb5d7,	// (0x000b4644) mup_visualizer_pane_g1_ParamLimits

0xb5d7,	// (0x000b4644) mup_visualizer_pane_g1

0xb5d7,	// (0x000b4644) mup_visualizer_pane_g2_ParamLimits

0xb5d7,	// (0x000b4644) mup_visualizer_pane_g2

0xb35b,	// (0x000b43c8) mup_visualizer_pane_g3_ParamLimits

0xb35b,	// (0x000b43c8) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x000b84ab) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x000b84ab) mup_visualizer_pane_g

0xa93c,	// (0x000b39a9) mup_volume_pane_g1

0xb5ed,	// (0x000b465a) mup_volume_pane_g2

0x0001,

0xf445,	// (0x000b84b2) mup_volume_pane_g

0xa93c,	// (0x000b39a9) mup_progress_pane_g1

0xb5f6,	// (0x000b4663) mup_progress_pane_g2

0xb5ff,	// (0x000b466c) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x000b84b7) mup_progress_pane_g

0xa062,	// (0x000b30cf) bg_popup_window_pane_cp05

0xb608,	// (0x000b4675) heading_pane_cp02_ParamLimits

0xb608,	// (0x000b4675) heading_pane_cp02

0xb622,	// (0x000b468f) list_popup_blid_pane

0xb62a,	// (0x000b4697) list_blid_sat_info_pane_ParamLimits

0xb62a,	// (0x000b4697) list_blid_sat_info_pane

0xb63d,	// (0x000b46aa) list_blid_sat_info_pane_g1

0xb645,	// (0x000b46b2) list_blid_sat_info_pane_t1

0x2ab0,	// (0x000abb1d) mup_equalizer_pane_ParamLimits

0x2ab0,	// (0x000abb1d) mup_equalizer_pane

0x2ac9,	// (0x000abb36) mup_equalizer_pane_cp1_ParamLimits

0x2ac9,	// (0x000abb36) mup_equalizer_pane_cp1

0x2ae6,	// (0x000abb53) mup_equalizer_pane_cp2_ParamLimits

0x2ae6,	// (0x000abb53) mup_equalizer_pane_cp2

0x2b03,	// (0x000abb70) mup_equalizer_pane_cp3_ParamLimits

0x2b03,	// (0x000abb70) mup_equalizer_pane_cp3

0x2b24,	// (0x000abb91) mup_equalizer_pane_cp4_ParamLimits

0x2b24,	// (0x000abb91) mup_equalizer_pane_cp4

0x2b45,	// (0x000abbb2) mup_equalizer_pane_cp5

0x2b59,	// (0x000abbc6) mup_equalizer_pane_cp6

0x2b6d,	// (0x000abbda) mup_equalizer_pane_cp7

0xc7f9,	// (0x000b5866) bg_popup_call_poc_act_pane_g9

0xc801,	// (0x000b586e) bg_popup_call_poc_act_pane_g10

0xc809,	// (0x000b5876) bg_popup_call_poc_act_pane_g11

0x000a,

0xa816,	// (0x000b3883) mup_scale_pane

0xa93c,	// (0x000b39a9) mup_scale_pane_g1

0xb653,	// (0x000b46c0) mup_scale_pane_g2

0x0006,

0xf466,	// (0x000b84d3) mup_scale_pane_g

0xb677,	// (0x000b46e4) msg_data_pane

0xb67f,	// (0x000b46ec) scroll_pane_cp017

0x2b93,	// (0x000abc00) bg_list_pane_cp04_ParamLimits

0x2b93,	// (0x000abc00) bg_list_pane_cp04

0xb687,	// (0x000b46f4) msg_data_pane_g1

0x2bab,	// (0x000abc18) msg_data_pane_g2

0x2bb3,	// (0x000abc20) msg_data_pane_g3

0x2bbb,	// (0x000abc28) msg_data_pane_g4

0x2bc3,	// (0x000abc30) msg_data_pane_g5

0x2bcb,	// (0x000abc38) msg_data_pane_g6

0x2bd3,	// (0x000abc40) msg_data_pane_g7

0x0006,

0xf475,	// (0x000b84e2) msg_data_pane_g

0x2bdb,	// (0x000abc48) msg_text_pane_ParamLimits

0x2bdb,	// (0x000abc48) msg_text_pane

0x2c06,	// (0x000abc73) qrid_highlight_pane_cp011_ParamLimits

0x2c06,	// (0x000abc73) qrid_highlight_pane_cp011

0xa062,	// (0x000b30cf) msg_body_pane

0xa062,	// (0x000b30cf) msg_header_pane

0xb698,	// (0x000b4705) input_focus_pane_cp07

0xa108,	// (0x000b3175) msg_header_pane_t1_ParamLimits

0xa108,	// (0x000b3175) msg_header_pane_t1

0xa11a,	// (0x000b3187) msg_header_pane_t2_ParamLimits

0xa11a,	// (0x000b3187) msg_header_pane_t2

0x0001,

0xf489,	// (0x000b84f6) msg_header_pane_t_ParamLimits

0xf489,	// (0x000b84f6) msg_header_pane_t

0xb6ad,	// (0x000b471a) msg_body_pane_g1

0xa12c,	// (0x000b3199) msg_body_pane_t1_ParamLimits

0xa12c,	// (0x000b3199) msg_body_pane_t1

0xa15d,	// (0x000b31ca) msg_body_pane_t2_ParamLimits

0xa15d,	// (0x000b31ca) msg_body_pane_t2

0xa16f,	// (0x000b31dc) msg_body_pane_t3_ParamLimits

0xa16f,	// (0x000b31dc) msg_body_pane_t3

0x0002,

0xf48e,	// (0x000b84fb) msg_body_pane_t_ParamLimits

0xf48e,	// (0x000b84fb) msg_body_pane_t

0x2c64,	// (0x000abcd1) main_viewer_pane_g1_ParamLimits

0x2c64,	// (0x000abcd1) main_viewer_pane_g1

0x2c72,	// (0x000abcdf) main_viewer_pane_g2_ParamLimits

0x2c72,	// (0x000abcdf) main_viewer_pane_g2

0x2c80,	// (0x000abced) main_viewer_pane_g3_ParamLimits

0x2c80,	// (0x000abced) main_viewer_pane_g3

0x2c8f,	// (0x000abcfc) main_viewer_pane_g4_ParamLimits

0x2c8f,	// (0x000abcfc) main_viewer_pane_g4

0x96fa,	// (0x000b2767) main_viewer_pane_g5_ParamLimits

0x96fa,	// (0x000b2767) main_viewer_pane_g5

0x96fa,	// (0x000b2767) main_viewer_pane_g7_ParamLimits

0x96fa,	// (0x000b2767) main_viewer_pane_g7

0xafff,	// (0x000b406c) main_viewer_pane_g8_ParamLimits

0xafff,	// (0x000b406c) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x000b850b) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000b850b) main_viewer_pane_g

0xb6b5,	// (0x000b4722) viewer_content_pane_ParamLimits

0xb6b5,	// (0x000b4722) viewer_content_pane

0x2ccb,	// (0x000abd38) main_postcard_pane_g1_ParamLimits

0x2ccb,	// (0x000abd38) main_postcard_pane_g1

0x2ce1,	// (0x000abd4e) main_postcard_pane_g2_ParamLimits

0x2ce1,	// (0x000abd4e) main_postcard_pane_g2

0x2cf7,	// (0x000abd64) main_postcard_pane_g3_ParamLimits

0x2cf7,	// (0x000abd64) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x000b851c) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x000b851c) main_postcard_pane_g

0x2d0e,	// (0x000abd7b) main_postcard_pane_g4

0xca1b,	// (0x000b5a88) smil_status_volume_pane_g2

0x2d51,	// (0x000abdbe) postcard_pane_ParamLimits

0x2d51,	// (0x000abdbe) postcard_pane

0xb6c3,	// (0x000b4730) postcard_pane_g1_ParamLimits

0xb6c3,	// (0x000b4730) postcard_pane_g1

0x2d93,	// (0x000abe00) postcard_pane_g2_ParamLimits

0x2d93,	// (0x000abe00) postcard_pane_g2

0x2d9f,	// (0x000abe0c) postcard_pane_g3_ParamLimits

0x2d9f,	// (0x000abe0c) postcard_pane_g3

0xb6d1,	// (0x000b473e) postcard_pane_g4_ParamLimits

0xb6d1,	// (0x000b473e) postcard_pane_g4

0x2dab,	// (0x000abe18) postcard_pane_g5_ParamLimits

0x2dab,	// (0x000abe18) postcard_pane_g5

0x2dc0,	// (0x000abe2d) postcard_pane_g6_ParamLimits

0x2dc0,	// (0x000abe2d) postcard_pane_g6

0xb6c3,	// (0x000b4730) postcard_pane_g7_ParamLimits

0xb6c3,	// (0x000b4730) postcard_pane_g7

0x0006,

0xf4bc,	// (0x000b8529) postcard_pane_g_ParamLimits

0xf4bc,	// (0x000b8529) postcard_pane_g

0x2dd4,	// (0x000abe41) main_mp2_pane_g1_ParamLimits

0x2dd4,	// (0x000abe41) main_mp2_pane_g1

0x2de0,	// (0x000abe4d) main_mp2_pane_g2_ParamLimits

0x2de0,	// (0x000abe4d) main_mp2_pane_g2

0x2dec,	// (0x000abe59) main_mp2_pane_g3_ParamLimits

0x2dec,	// (0x000abe59) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x000b8538) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x000b8538) main_mp2_pane_g

0x2df8,	// (0x000abe65) main_mp2_pane_t1_ParamLimits

0x2df8,	// (0x000abe65) main_mp2_pane_t1

0x2e0d,	// (0x000abe7a) main_mp2_pane_t2_ParamLimits

0x2e0d,	// (0x000abe7a) main_mp2_pane_t2

0x2e1f,	// (0x000abe8c) main_mp2_pane_t3_ParamLimits

0x2e1f,	// (0x000abe8c) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x000b853f) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x000b853f) main_mp2_pane_t

0xb6df,	// (0x000b474c) pec_content_pane_ParamLimits

0xb6df,	// (0x000b474c) pec_content_pane

0xac7c,	// (0x000b3ce9) scroll_pane_cp015

0xb6f1,	// (0x000b475e) pec_attribute_pane_ParamLimits

0xb6f1,	// (0x000b475e) pec_attribute_pane

0x2e31,	// (0x000abe9e) pec_content_pane_g1_ParamLimits

0x2e31,	// (0x000abe9e) pec_content_pane_g1

0xb701,	// (0x000b476e) pec_content_pane_t1_ParamLimits

0xb701,	// (0x000b476e) pec_content_pane_t1

0xb713,	// (0x000b4780) pec_content_pane_t2_ParamLimits

0xb713,	// (0x000b4780) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x000b8546) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x000b8546) pec_content_pane_t

0x2e3d,	// (0x000abeaa) list_single_graphic_pane_cp01_ParamLimits

0x2e3d,	// (0x000abeaa) list_single_graphic_pane_cp01

0xa816,	// (0x000b3883) bg_popup_sub_pane_cp04

0xb725,	// (0x000b4792) popup_mup_playback_window_g1

0xb731,	// (0x000b479e) popup_mup_playback_window_t1

0xb746,	// (0x000b47b3) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x000b854b) popup_mup_playback_window_t

0xb77d,	// (0x000b47ea) main_image_pane_g1_ParamLimits

0xb77d,	// (0x000b47ea) main_image_pane_g1

0xb7c0,	// (0x000b482d) scroll_pane_cp018_ParamLimits

0xb7c0,	// (0x000b482d) scroll_pane_cp018

0xb7d8,	// (0x000b4845) scroll_pane_cp016_ParamLimits

0xb7d8,	// (0x000b4845) scroll_pane_cp016

0x2f0b,	// (0x000abf78) smil2_image_pane_ParamLimits

0x2f0b,	// (0x000abf78) smil2_image_pane

0x2f3b,	// (0x000abfa8) smil2_root_pane_ParamLimits

0x2f3b,	// (0x000abfa8) smil2_root_pane

0x2f73,	// (0x000abfe0) smil2_text_pane_ParamLimits

0x2f73,	// (0x000abfe0) smil2_text_pane

0xa062,	// (0x000b30cf) bg_list_pane_cp06

0xb814,	// (0x000b4881) grid_radio_pane

0xa062,	// (0x000b30cf) bg_popup_window_pane_cp06

0xb81c,	// (0x000b4889) main_fmradio_pane_t1

0xb1d7,	// (0x000b4244) heading_pane_cp04

0xb82a,	// (0x000b4897) main_fmradio_pane_t2

0xc851,	// (0x000b58be) popup_cale_lunar_info_window_g1

0xb838,	// (0x000b48a5) main_fmradio_pane_t3

0xc859,	// (0x000b58c6) popup_cale_lunar_info_window_g2

0xb846,	// (0x000b48b3) main_fmradio_pane_t4

0x0001,

0xb854,	// (0x000b48c1) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x000b8639) popup_cale_lunar_info_window_g

0xf4f3,	// (0x000b8560) main_fmradio_pane_t

0xb862,	// (0x000b48cf) wait_bar_pane_cp03

0xb86a,	// (0x000b48d7) cell_fmradio_pane_ParamLimits

0xb86a,	// (0x000b48d7) cell_fmradio_pane

0xb6c3,	// (0x000b4730) cell_fmradio_pane_g1_ParamLimits

0xb6c3,	// (0x000b4730) cell_fmradio_pane_g1

0xa062,	// (0x000b30cf) grid_highlight_pane_cp011

0xb87d,	// (0x000b48ea) poc_content_pane_ParamLimits

0xb87d,	// (0x000b48ea) poc_content_pane

0xb88f,	// (0x000b48fc) scroll_pane_cp019

0x2ff3,	// (0x000ac060) popup_call_poc_act_window_ParamLimits

0x2ff3,	// (0x000ac060) popup_call_poc_act_window

0x3017,	// (0x000ac084) popup_call_poc_inact_window_ParamLimits

0x3017,	// (0x000ac084) popup_call_poc_inact_window

0xf590,	// (0x000b85fd) bg_popup_call_poc_act_pane_g

0xc811,	// (0x000b587e) bg_popup_call_poc_inact_pane_g1

0xc819,	// (0x000b5886) bg_popup_call_poc_inact_pane_g2

0xb897,	// (0x000b4904) popup_call_poc_act_window_g2

0xc821,	// (0x000b588e) bg_popup_call_poc_inact_pane_g3

0xc7a1,	// (0x000b580e) bg_popup_call_poc_inact_pane_g4

0xc829,	// (0x000b5896) bg_popup_call_poc_inact_pane_g5

0xb89f,	// (0x000b490c) popup_call_poc_act_window_t1_ParamLimits

0xb89f,	// (0x000b490c) popup_call_poc_act_window_t1

0xb8c7,	// (0x000b4934) popup_call_poc_act_window_t2_ParamLimits

0xb8c7,	// (0x000b4934) popup_call_poc_act_window_t2

0xb8ef,	// (0x000b495c) popup_call_poc_act_window_t3_ParamLimits

0xb8ef,	// (0x000b495c) popup_call_poc_act_window_t3

0xb917,	// (0x000b4984) popup_call_poc_act_window_t4_ParamLimits

0xb917,	// (0x000b4984) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x000b856b) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x000b856b) popup_call_poc_act_window_t

0xc831,	// (0x000b589e) bg_popup_call_poc_inact_pane_g6

0xc839,	// (0x000b58a6) bg_popup_call_poc_inact_pane_g7

0xc841,	// (0x000b58ae) bg_popup_call_poc_inact_pane_g8

0xb929,	// (0x000b4996) popup_call_poc_inact_window_g2

0xc849,	// (0x000b58b6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x000b8614) bg_popup_call_poc_inact_pane_g

0xb931,	// (0x000b499e) popup_call_poc_inact_window_t1_ParamLimits

0xb931,	// (0x000b499e) popup_call_poc_inact_window_t1

0xb946,	// (0x000b49b3) popup_call_poc_inact_window_t2_ParamLimits

0xb946,	// (0x000b49b3) popup_call_poc_inact_window_t2

0xb95b,	// (0x000b49c8) popup_call_poc_inact_window_t3_ParamLimits

0xb95b,	// (0x000b49c8) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x000b8574) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x000b8574) popup_call_poc_inact_window_t

0xc98e,	// (0x000b59fb) context_pane_ParamLimits

0x3851,	// (0x000ac8be) signal_pane_ParamLimits

0xaad3,	// (0x000b3b40) main_call2_pane

0x9745,	// (0x000b27b2) popup_phob_thumbnail2_window_ParamLimits

0x9745,	// (0x000b27b2) popup_phob_thumbnail2_window

0x96e2,	// (0x000b274f) aid_hotspot_pointer_arrow_pane

0x96ea,	// (0x000b2757) aid_hotspot_pointer_hand_pane

0x3361,	// (0x000ac3ce) phob_pre_status_pane_g5

0x111e,	// (0x000aa18b) cams_zoom_pane_ParamLimits

0x112d,	// (0x000aa19a) image_vga_pane_ParamLimits

0x1147,	// (0x000aa1b4) main_camera_pane_g1_ParamLimits

0x1159,	// (0x000aa1c6) main_camera_pane_g2_ParamLimits

0x1169,	// (0x000aa1d6) main_camera_pane_g3_ParamLimits

0x1179,	// (0x000aa1e6) main_camera_pane_g4_ParamLimits

0x1189,	// (0x000aa1f6) main_camera_pane_g5_ParamLimits

0x1199,	// (0x000aa206) main_camera_pane_g6_ParamLimits

0x11a9,	// (0x000aa216) main_camera_pane_g7_ParamLimits

0xf206,	// (0x000b8273) main_camera_pane_g_ParamLimits

0x11b9,	// (0x000aa226) main_camera_pane_t1_ParamLimits

0x11cf,	// (0x000aa23c) main_camera_pane_t2_ParamLimits

0xf217,	// (0x000b8284) main_camera_pane_t_ParamLimits

0xa816,	// (0x000b3883) bg_popup_preview_window_pane_cp01_ParamLimits

0xa816,	// (0x000b3883) bg_popup_preview_window_pane_cp01

0xb970,	// (0x000b49dd) popup_phob_thumbnail2_window_g1_ParamLimits

0xb970,	// (0x000b49dd) popup_phob_thumbnail2_window_g1

0xa062,	// (0x000b30cf) call2_cli_visual_pane

0x304b,	// (0x000ac0b8) popup_call2_audio_conf_window_ParamLimits

0x304b,	// (0x000ac0b8) popup_call2_audio_conf_window

0x306b,	// (0x000ac0d8) popup_call2_audio_first_window_ParamLimits

0x306b,	// (0x000ac0d8) popup_call2_audio_first_window

0x3101,	// (0x000ac16e) popup_call2_audio_in_window_ParamLimits

0x3101,	// (0x000ac16e) popup_call2_audio_in_window

0x3149,	// (0x000ac1b6) popup_call2_audio_out_window_ParamLimits

0x3149,	// (0x000ac1b6) popup_call2_audio_out_window

0x31b3,	// (0x000ac220) popup_call2_audio_second_window_ParamLimits

0x31b3,	// (0x000ac220) popup_call2_audio_second_window

0x3219,	// (0x000ac286) popup_call2_audio_wait_window_ParamLimits

0x3219,	// (0x000ac286) popup_call2_audio_wait_window

0xa062,	// (0x000b30cf) bg_popup_call2_act_pane_cp03

0xa7f8,	// (0x000b3865) list_conf_pane_cp

0xb97c,	// (0x000b49e9) popup_call2_audio_conf_window_t1

0xb98a,	// (0x000b49f7) list_single_graphic_popup_conf2_pane_ParamLimits

0xb98a,	// (0x000b49f7) list_single_graphic_popup_conf2_pane

0xb247,	// (0x000b42b4) list_highlight_pane_cp04

0xb99d,	// (0x000b4a0a) list_single_graphic_popup_conf2_pane_g1

0xb258,	// (0x000b42c5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x000b857b) list_single_graphic_popup_conf2_pane_g

0xb9a7,	// (0x000b4a14) list_single_graphic_popup_conf2_pane_t1

0xb9b5,	// (0x000b4a22) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9b5,	// (0x000b4a22) bg_popup_call2_act_pane_cp01

0xba3f,	// (0x000b4aac) call_type_pane_cp05_ParamLimits

0xba3f,	// (0x000b4aac) call_type_pane_cp05

0xba93,	// (0x000b4b00) popup_call2_audio_second_window_g1_ParamLimits

0xba93,	// (0x000b4b00) popup_call2_audio_second_window_g1

0xbae7,	// (0x000b4b54) popup_call2_audio_second_window_g2_ParamLimits

0xbae7,	// (0x000b4b54) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x000b8580) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x000b8580) popup_call2_audio_second_window_g

0xbb4c,	// (0x000b4bb9) popup_call2_audio_second_window_t1_ParamLimits

0xbb4c,	// (0x000b4bb9) popup_call2_audio_second_window_t1

0xbc07,	// (0x000b4c74) popup_call2_audio_second_window_t2_ParamLimits

0xbc07,	// (0x000b4c74) popup_call2_audio_second_window_t2

0xbc5a,	// (0x000b4cc7) popup_call2_audio_second_window_t3_ParamLimits

0xbc5a,	// (0x000b4cc7) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x000b8587) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x000b8587) popup_call2_audio_second_window_t

0xa062,	// (0x000b30cf) bg_popup_call2_in_pane_cp02

0xa06c,	// (0x000b30d9) call_type_pane_cp04

0xa074,	// (0x000b30e1) popup_call2_audio_wait_window_g1

0xa07c,	// (0x000b30e9) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000b8162) popup_call2_audio_wait_window_g

0xa084,	// (0x000b30f1) popup_call2_audio_wait_window_t3

0xbd4d,	// (0x000b4dba) bg_popup_call2_act_pane_ParamLimits

0xbd4d,	// (0x000b4dba) bg_popup_call2_act_pane

0xbe0d,	// (0x000b4e7a) call_type_pane_cp03_ParamLimits

0xbe0d,	// (0x000b4e7a) call_type_pane_cp03

0xbe71,	// (0x000b4ede) popup_call2_audio_first_window_g1_ParamLimits

0xbe71,	// (0x000b4ede) popup_call2_audio_first_window_g1

0xbee1,	// (0x000b4f4e) popup_call2_audio_first_window_g2_ParamLimits

0xbee1,	// (0x000b4f4e) popup_call2_audio_first_window_g2

0xb5d7,	// (0x000b4644) popup_call2_audio_first_window_g3_ParamLimits

0xb5d7,	// (0x000b4644) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x000b8590) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x000b8590) popup_call2_audio_first_window_g

0xbfbf,	// (0x000b502c) popup_call2_audio_first_window_t1_ParamLimits

0xbfbf,	// (0x000b502c) popup_call2_audio_first_window_t1

0xc0c2,	// (0x000b512f) popup_call2_audio_first_window_t4_ParamLimits

0xc0c2,	// (0x000b512f) popup_call2_audio_first_window_t4

0xc1ba,	// (0x000b5227) popup_call2_audio_first_window_t5_ParamLimits

0xc1ba,	// (0x000b5227) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x000b859b) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x000b859b) popup_call2_audio_first_window_t

0xa80e,	// (0x000b387b) bg_popup_call2_act_pane_g1

0xc861,	// (0x000b58ce) popup_cale_lunar_info_window_t1

0xc86f,	// (0x000b58dc) popup_cale_lunar_info_window_t2

0xc87d,	// (0x000b58ea) popup_cale_lunar_info_window_t3

0xa062,	// (0x000b30cf) bg_popup_call2_bubble_pane

0xc2bb,	// (0x000b5328) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2bb,	// (0x000b5328) bg_popup_call2_in_pane_cp01

0x9d3e,	// (0x000b2dab) call_type_pane_cp02

0xc303,	// (0x000b5370) popup_call2_audio_out_window_g1_ParamLimits

0xc303,	// (0x000b5370) popup_call2_audio_out_window_g1

0xc32f,	// (0x000b539c) popup_call2_audio_out_window_g2_ParamLimits

0xc32f,	// (0x000b539c) popup_call2_audio_out_window_g2

0xc357,	// (0x000b53c4) popup_call2_audio_out_window_g3_ParamLimits

0xc357,	// (0x000b53c4) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x000b85a4) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x000b85a4) popup_call2_audio_out_window_g

0xc392,	// (0x000b53ff) popup_call2_audio_out_window_t1_ParamLimits

0xc392,	// (0x000b53ff) popup_call2_audio_out_window_t1

0xc3f1,	// (0x000b545e) popup_call2_audio_out_window_t2_ParamLimits

0xc3f1,	// (0x000b545e) popup_call2_audio_out_window_t2

0xc445,	// (0x000b54b2) popup_call2_audio_out_window_t3_ParamLimits

0xc445,	// (0x000b54b2) popup_call2_audio_out_window_t3

0xc45b,	// (0x000b54c8) popup_call2_audio_out_window_t4_ParamLimits

0xc45b,	// (0x000b54c8) popup_call2_audio_out_window_t4

0xc471,	// (0x000b54de) popup_call2_audio_out_window_t5_ParamLimits

0xc471,	// (0x000b54de) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x000b85ad) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x000b85ad) popup_call2_audio_out_window_t

0xc4d5,	// (0x000b5542) bg_popup_call2_in_pane_ParamLimits

0xc4d5,	// (0x000b5542) bg_popup_call2_in_pane

0xc531,	// (0x000b559e) popup_call2_audio_in_window_g1_ParamLimits

0xc531,	// (0x000b559e) popup_call2_audio_in_window_g1

0xc569,	// (0x000b55d6) popup_call2_audio_in_window_g2_ParamLimits

0xc569,	// (0x000b55d6) popup_call2_audio_in_window_g2

0xc5a1,	// (0x000b560e) popup_call2_audio_in_window_g3_ParamLimits

0xc5a1,	// (0x000b560e) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x000b85ba) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x000b85ba) popup_call2_audio_in_window_g

0xc5f9,	// (0x000b5666) popup_call2_audio_in_window_t1_ParamLimits

0xc5f9,	// (0x000b5666) popup_call2_audio_in_window_t1

0xc679,	// (0x000b56e6) popup_call2_audio_in_window_t2_ParamLimits

0xc679,	// (0x000b56e6) popup_call2_audio_in_window_t2

0xc6f9,	// (0x000b5766) popup_call2_audio_in_window_t3_ParamLimits

0xc6f9,	// (0x000b5766) popup_call2_audio_in_window_t3

0xc713,	// (0x000b5780) popup_call2_audio_in_window_t4_ParamLimits

0xc713,	// (0x000b5780) popup_call2_audio_in_window_t4

0xc725,	// (0x000b5792) popup_call2_audio_in_window_t5_ParamLimits

0xc725,	// (0x000b5792) popup_call2_audio_in_window_t5

0xc737,	// (0x000b57a4) popup_call2_audio_in_window_t6_ParamLimits

0xc737,	// (0x000b57a4) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x000b85c3) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x000b85c3) popup_call2_audio_in_window_t

0xa80e,	// (0x000b387b) bg_popup_call2_in_pane_g1

0xc88b,	// (0x000b58f8) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x000b863e) popup_cale_lunar_info_window_t

0xa816,	// (0x000b3883) bg_popup_call2_rect_pane_ParamLimits

0xa816,	// (0x000b3883) bg_popup_call2_rect_pane

0xa062,	// (0x000b30cf) call2_cli_visual_graphic_pane

0xa062,	// (0x000b30cf) call2_cli_visual_text_pane

0x976c,	// (0x000b27d9) smil_status_volume_pane_g3

0x0002,

0xa93c,	// (0x000b39a9) call2_cli_visual_graphic_pane_g1

0xa93c,	// (0x000b39a9) call2_cli_visual_graphic_pane_g2

0xa93c,	// (0x000b39a9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x000b85d0) call2_cli_visual_graphic_pane_g

0xc749,	// (0x000b57b6) bg_popup_call2_rect_pane_g1

0xa9d1,	// (0x000b3a3e) bg_popup_call2_rect_pane_g2

0xc751,	// (0x000b57be) bg_popup_call2_rect_pane_g3

0xc759,	// (0x000b57c6) bg_popup_call2_rect_pane_g4

0xc761,	// (0x000b57ce) bg_popup_call2_rect_pane_g5

0xc769,	// (0x000b57d6) bg_popup_call2_rect_pane_g6

0xc771,	// (0x000b57de) bg_popup_call2_rect_pane_g7

0xc779,	// (0x000b57e6) bg_popup_call2_rect_pane_g8

0xc781,	// (0x000b57ee) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x000b85d7) bg_popup_call2_rect_pane_g

0xc789,	// (0x000b57f6) bg_popup_call2_bubble_pane_g1

0xc791,	// (0x000b57fe) bg_popup_call2_bubble_pane_g2

0xc799,	// (0x000b5806) bg_popup_call2_bubble_pane_g3

0xc7a1,	// (0x000b580e) bg_popup_call2_bubble_pane_g4

0xc7a9,	// (0x000b5816) bg_popup_call2_bubble_pane_g5

0xc7b1,	// (0x000b581e) bg_popup_call2_bubble_pane_g6

0xc7b9,	// (0x000b5826) bg_popup_call2_bubble_pane_g7

0xc7c1,	// (0x000b582e) bg_popup_call2_bubble_pane_g8

0xc7c9,	// (0x000b5836) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x000b85ea) bg_popup_call2_bubble_pane_g

0x0b56,	// (0x000a9bc3) aid_cale_week_size_cell_pane

0x11e5,	// (0x000aa252) aid_cams_cif_uncrop_pane_ParamLimits

0x11e5,	// (0x000aa252) aid_cams_cif_uncrop_pane

0x139a,	// (0x000aa407) aid_cams_size_cell_ParamLimits

0x139a,	// (0x000aa407) aid_cams_size_cell

0x13ae,	// (0x000aa41b) grid_cams_pane_ParamLimits

0x13c8,	// (0x000aa435) linegrid_cams_pane_ParamLimits

0x15a7,	// (0x000aa614) call_video_pane_t1

0x15c5,	// (0x000aa632) call_video_pane_t2

0x0001,

0xf26a,	// (0x000b82d7) call_video_pane_t

0x19eb,	// (0x000aaa58) aid_cale_month_size_cell_pane_ParamLimits

0x19eb,	// (0x000aaa58) aid_cale_month_size_cell_pane

0xf61a,	// (0x000b8687) smil_status_volume_pane_g

0x9779,	// (0x000b27e6) volume_smil_pane_ParamLimits

0x9451,	// (0x000b24be) aid_popup2_width_pane

0x0ada,	// (0x000a9b47) cell_qdial_pane_g4_ParamLimits

0x0ada,	// (0x000a9b47) cell_qdial_pane_g4

0x26ca,	// (0x000ab737) aid_blid_cardinal_pane_ParamLimits

0x26d6,	// (0x000ab743) aid_blid_destination_pane_ParamLimits

0x26d6,	// (0x000ab743) aid_blid_destination_pane

0xa816,	// (0x000b3883) bg_popup_call_poc_act_pane_ParamLimits

0xa816,	// (0x000b3883) bg_popup_call_poc_act_pane

0xa816,	// (0x000b3883) bg_popup_call_poc_inact_pane_ParamLimits

0xa816,	// (0x000b3883) bg_popup_call_poc_inact_pane

0xc7d1,	// (0x000b583e) bg_popup_call_poc_act_pane_g1

0xc7d9,	// (0x000b5846) bg_popup_call_poc_act_pane_g2

0xc7e1,	// (0x000b584e) bg_popup_call_poc_act_pane_g3

0xc7a1,	// (0x000b580e) bg_popup_call_poc_act_pane_g4

0xc7a9,	// (0x000b5816) bg_popup_call_poc_act_pane_g5

0xc7e9,	// (0x000b5856) bg_popup_call_poc_act_pane_g6

0xc7b9,	// (0x000b5826) bg_popup_call_poc_act_pane_g7

0xc7f1,	// (0x000b585e) bg_popup_call_poc_act_pane_g8

0xa062,	// (0x000b30cf) main_usb_pane

0x9720,	// (0x000b278d) popup_cale_lunar_info_window

0x1891,	// (0x000aa8fe) im_reading_pane_t1_ParamLimits

0xabd4,	// (0x000b3c41) list_im_pane_ParamLimits

0xabe5,	// (0x000b3c52) scroll_pane_cp07_ParamLimits

0xa062,	// (0x000b30cf) grid_highlight_pane_cp012

0xa816,	// (0x000b3883) mup_scale_pane_ParamLimits

0xb6c3,	// (0x000b4730) main_usb_pane_g1_ParamLimits

0xb6c3,	// (0x000b4730) main_usb_pane_g1

0x3276,	// (0x000ac2e3) main_usb_pane_g2_ParamLimits

0x3276,	// (0x000ac2e3) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x000b8627) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x000b8627) main_usb_pane_g

0x328c,	// (0x000ac2f9) main_usb_pane_t1_ParamLimits

0x328c,	// (0x000ac2f9) main_usb_pane_t1

0x329e,	// (0x000ac30b) main_usb_pane_t2_ParamLimits

0x329e,	// (0x000ac30b) main_usb_pane_t2

0x32b0,	// (0x000ac31d) main_usb_pane_t3_ParamLimits

0x32b0,	// (0x000ac31d) main_usb_pane_t3

0x32c2,	// (0x000ac32f) main_usb_pane_t4_ParamLimits

0x32c2,	// (0x000ac32f) main_usb_pane_t4

0x32d4,	// (0x000ac341) main_usb_pane_t5_ParamLimits

0x32d4,	// (0x000ac341) main_usb_pane_t5

0x32e6,	// (0x000ac353) main_usb_pane_t6_ParamLimits

0x32e6,	// (0x000ac353) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x000b862c) main_usb_pane_t_ParamLimits

0x2679,	// (0x000ab6e6) aid_text_placing

0x2682,	// (0x000ab6ef) main_location2_pane_t1_ParamLimits

0x2694,	// (0x000ab701) main_location2_pane_t2_ParamLimits

0x26a6,	// (0x000ab713) main_location2_pane_t3_ParamLimits

0x26b8,	// (0x000ab725) main_location2_pane_t4_ParamLimits

0x26b8,	// (0x000ab725) main_location2_pane_t4

0xf3cb,	// (0x000b8438) main_location2_pane_t_ParamLimits

0xa852,	// (0x000b38bf) find_pinb_pane_g2_ParamLimits

0xa852,	// (0x000b38bf) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000b8188) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000b8188) find_pinb_pane_g

0xa85e,	// (0x000b38cb) find_pinb_pane_t1_ParamLimits

0xa870,	// (0x000b38dd) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000b818d) find_pinb_pane_t_ParamLimits

0xa062,	// (0x000b30cf) main_call3_pane

0x1ed2,	// (0x000aaf3f) cale_month_day_heading_pane_t1_ParamLimits

0x1f14,	// (0x000aaf81) cale_month_day_heading_pane_t2_ParamLimits

0x1f49,	// (0x000aafb6) cale_month_day_heading_pane_t3_ParamLimits

0x1f7e,	// (0x000aafeb) cale_month_day_heading_pane_t4_ParamLimits

0x1fbb,	// (0x000ab028) cale_month_day_heading_pane_t5_ParamLimits

0x2000,	// (0x000ab06d) cale_month_day_heading_pane_t6_ParamLimits

0x2045,	// (0x000ab0b2) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x000b830f) cale_month_day_heading_pane_t_ParamLimits

0xae2f,	// (0x000b3e9c) smil_status_volume_pane

0x2d6f,	// (0x000abddc) postcard_address_pane_ParamLimits

0x2d6f,	// (0x000abddc) postcard_address_pane

0x2d81,	// (0x000abdee) postcard_message_pane_ParamLimits

0x2d81,	// (0x000abdee) postcard_message_pane

0x3253,	// (0x000ac2c0) call2_cli_visual_pane_t1_ParamLimits

0x3253,	// (0x000ac2c0) call2_cli_visual_pane_t1

0x3a80,	// (0x000acaed) postcard_message_pane_t1_ParamLimits

0x3a80,	// (0x000acaed) postcard_message_pane_t1

0x3a69,	// (0x000acad6) postcard_address_pane_t1_ParamLimits

0x3a69,	// (0x000acad6) postcard_address_pane_t1

0x3a55,	// (0x000acac2) popup_call3_audio_in_window_ParamLimits

0x3a55,	// (0x000acac2) popup_call3_audio_in_window

0x38e0,	// (0x000ac94d) bg_popup_call3_in_pane_ParamLimits

0x38e0,	// (0x000ac94d) bg_popup_call3_in_pane

0x3956,	// (0x000ac9c3) popup_call3_audio_in_window_g1_ParamLimits

0x3956,	// (0x000ac9c3) popup_call3_audio_in_window_g1

0x3976,	// (0x000ac9e3) popup_call3_audio_in_window_g2_ParamLimits

0x3976,	// (0x000ac9e3) popup_call3_audio_in_window_g2

0x3996,	// (0x000aca03) popup_call3_audio_in_window_g3_ParamLimits

0x3996,	// (0x000aca03) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x000b868e) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x000b868e) popup_call3_audio_in_window_g

0x39c7,	// (0x000aca34) popup_call3_audio_in_window_t1_ParamLimits

0x39c7,	// (0x000aca34) popup_call3_audio_in_window_t1

0x3a05,	// (0x000aca72) popup_call3_audio_in_window_t2_ParamLimits

0x3a05,	// (0x000aca72) popup_call3_audio_in_window_t2

0x3a43,	// (0x000acab0) popup_call3_audio_in_window_t3_ParamLimits

0x3a43,	// (0x000acab0) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x000b8697) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x000b8697) popup_call3_audio_in_window_t

0xaad3,	// (0x000b3b40) bg_popup_call3_rect_pane

0xc749,	// (0x000b57b6) bg_popup_call3_rect_pane_g1

0xa9d1,	// (0x000b3a3e) bg_popup_call3_rect_pane_g2

0xc751,	// (0x000b57be) bg_popup_call3_rect_pane_g3

0xc759,	// (0x000b57c6) bg_popup_call3_rect_pane_g4

0xc761,	// (0x000b57ce) bg_popup_call3_rect_pane_g5

0xc769,	// (0x000b57d6) bg_popup_call3_rect_pane_g6

0xc771,	// (0x000b57de) bg_popup_call3_rect_pane_g7

0x29b0,	// (0x000aba1d) mup_visualizer_osc_pane

0xb5e5,	// (0x000b4652) mup_visualizer_spec_pane

0x3910,	// (0x000ac97d) call3_video_qcif_pane_ParamLimits

0x3910,	// (0x000ac97d) call3_video_qcif_pane

0x3923,	// (0x000ac990) call3_video_qcif_uncrop_pane_ParamLimits

0x3923,	// (0x000ac990) call3_video_qcif_uncrop_pane

0x3931,	// (0x000ac99e) call3_video_subqcif_pane_ParamLimits

0x3931,	// (0x000ac99e) call3_video_subqcif_pane

0x3945,	// (0x000ac9b2) call3_video_subqcif_uncrop_pane_ParamLimits

0x3945,	// (0x000ac9b2) call3_video_subqcif_uncrop_pane

0x39b6,	// (0x000aca23) popup_call3_audio_in_window_g4_ParamLimits

0x39b6,	// (0x000aca23) popup_call3_audio_in_window_g4

0x38cf,	// (0x000ac93c) mup_spec_half_pane

0x38d8,	// (0x000ac945) mup_spec_half_pane_cp

0xc9ee,	// (0x000b5a5b) mup_osc_middle_pane

0xc9f7,	// (0x000b5a64) mup_visualizer_osc_pane_g1

0x38af,	// (0x000ac91c) mup_spec_bar_pane_ParamLimits

0x38af,	// (0x000ac91c) mup_spec_bar_pane

0xc9db,	// (0x000b5a48) mup_spec_bar_pane_g1

0xc9e5,	// (0x000b5a52) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x000b8682) mup_spec_bar_pane_g

0x0b56,	// (0x000a9bc3) aid_cale_week_size_cell_pane_ParamLimits

0x0b70,	// (0x000a9bdd) bg_cale_heading_pane_ParamLimits

0xaa2c,	// (0x000b3a99) bg_cale_pane_cp01_ParamLimits

0x0b88,	// (0x000a9bf5) cale_week_corner_pane_ParamLimits

0x0ba7,	// (0x000a9c14) cale_week_day_heading_pane_ParamLimits

0x0bc4,	// (0x000a9c31) cale_week_scroll_pane_g1_ParamLimits

0x0bd7,	// (0x000a9c44) cale_week_scroll_pane_g2_ParamLimits

0x0bef,	// (0x000a9c5c) cale_week_scroll_pane_g3_ParamLimits

0x0c07,	// (0x000a9c74) cale_week_scroll_pane_g4_ParamLimits

0x0c1f,	// (0x000a9c8c) cale_week_scroll_pane_g5_ParamLimits

0x0c3f,	// (0x000a9cac) cale_week_scroll_pane_g6_ParamLimits

0x0c5f,	// (0x000a9ccc) cale_week_scroll_pane_g7_ParamLimits

0x0c7f,	// (0x000a9cec) cale_week_scroll_pane_g8_ParamLimits

0x0ca3,	// (0x000a9d10) cale_week_scroll_pane_g9_ParamLimits

0x0cbb,	// (0x000a9d28) cale_week_scroll_pane_g10_ParamLimits

0x0cd3,	// (0x000a9d40) cale_week_scroll_pane_g11_ParamLimits

0x0ceb,	// (0x000a9d58) cale_week_scroll_pane_g12_ParamLimits

0x0d03,	// (0x000a9d70) cale_week_scroll_pane_g13_ParamLimits

0x0d03,	// (0x000a9d70) cale_week_scroll_pane_g14_ParamLimits

0x0d03,	// (0x000a9d70) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000b8219) cale_week_scroll_pane_g_ParamLimits

0x0d3f,	// (0x000a9dac) cale_week_time_pane_ParamLimits

0x0d63,	// (0x000a9dd0) grid_cale_week_pane_ParamLimits

0xaa49,	// (0x000b3ab6) listscroll_cale_week_pane_t1

0xaa5b,	// (0x000b3ac8) scroll_pane_cp08_ParamLimits

0x1a4b,	// (0x000aaab8) cale_month_corner_pane_ParamLimits

0xae05,	// (0x000b3e72) cale_month_pane_t1

0x1e65,	// (0x000aaed2) cale_month_week_pane_ParamLimits

0x24aa,	// (0x000ab517) popup_call_status_window_g1_ParamLimits

0x24be,	// (0x000ab52b) popup_call_status_window_g2_ParamLimits

0x24d2,	// (0x000ab53f) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x000b83bf) popup_call_status_window_g_ParamLimits

0xb1c7,	// (0x000b4234) aid_call2_pane

0x2c1c,	// (0x000abc89) msg_header_pane_g1

0x2d6f,	// (0x000abddc) postcard_address2_pane_ParamLimits

0x2d6f,	// (0x000abddc) postcard_address2_pane

0x2d81,	// (0x000abdee) postcard_message2_pane_ParamLimits

0x2d81,	// (0x000abdee) postcard_message2_pane

0x385f,	// (0x000ac8cc) message2_row_pane_ParamLimits

0x385f,	// (0x000ac8cc) message2_row_pane

0x387c,	// (0x000ac8e9) address2_row_pane_ParamLimits

0x387c,	// (0x000ac8e9) address2_row_pane

0xc9a9,	// (0x000b5a16) postcard_message2_row_pane_g1

0xc9b1,	// (0x000b5a1e) postcard_message2_row_pane_t1

0xc9a9,	// (0x000b5a16) address2_row_pane_g1

0xc9b1,	// (0x000b5a1e) address2_row_pane_t1

0x109d,	// (0x000aa10a) aid_size_cell_vorec

0xa062,	// (0x000b30cf) main_rss_pane

0x388f,	// (0x000ac8fc) rss_list_single_pane_ParamLimits

0x388f,	// (0x000ac8fc) rss_list_single_pane

0xc9bf,	// (0x000b5a2c) rss_list_single_pane_t1

0xc9cd,	// (0x000b5a3a) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x000b867d) rss_list_single_pane_t

0xa062,	// (0x000b30cf) main_camera2_pane

0xa062,	// (0x000b30cf) main_video2_pane

0x3af9,	// (0x000acb66) cams_zoom_pane_cp2_ParamLimits

0x3af9,	// (0x000acb66) cams_zoom_pane_cp2

0x3b19,	// (0x000acb86) image2_vga_pane_ParamLimits

0x3b19,	// (0x000acb86) image2_vga_pane

0x3b6a,	// (0x000acbd7) main_camera2_pane_g1_ParamLimits

0x3b6a,	// (0x000acbd7) main_camera2_pane_g1

0x3b8a,	// (0x000acbf7) main_camera2_pane_g2_ParamLimits

0x3b8a,	// (0x000acbf7) main_camera2_pane_g2

0x3baa,	// (0x000acc17) main_camera2_pane_g3_ParamLimits

0x3baa,	// (0x000acc17) main_camera2_pane_g3

0x3bca,	// (0x000acc37) main_camera2_pane_g4_ParamLimits

0x3bca,	// (0x000acc37) main_camera2_pane_g4

0x3bea,	// (0x000acc57) main_camera2_pane_g5_ParamLimits

0x3bea,	// (0x000acc57) main_camera2_pane_g5

0x3c0a,	// (0x000acc77) main_camera2_pane_g6_ParamLimits

0x3c0a,	// (0x000acc77) main_camera2_pane_g6

0x3c2a,	// (0x000acc97) main_camera2_pane_g7_ParamLimits

0x3c2a,	// (0x000acc97) main_camera2_pane_g7

0x3c4a,	// (0x000accb7) main_camera2_pane_g8_ParamLimits

0x3c4a,	// (0x000accb7) main_camera2_pane_g8

0x0008,

0xf631,	// (0x000b869e) main_camera2_pane_g_ParamLimits

0xf631,	// (0x000b869e) main_camera2_pane_g

0x3c8a,	// (0x000accf7) main_camera2_pane_t1_ParamLimits

0x3c8a,	// (0x000accf7) main_camera2_pane_t1

0x3cbf,	// (0x000acd2c) main_camera2_pane_t2_ParamLimits

0x3cbf,	// (0x000acd2c) main_camera2_pane_t2

0x3ce5,	// (0x000acd52) main_camera2_pane_t3_ParamLimits

0x3ce5,	// (0x000acd52) main_camera2_pane_t3

0x3d43,	// (0x000acdb0) main_camera2_pane_t4_ParamLimits

0x3d43,	// (0x000acdb0) main_camera2_pane_t4

0x0006,

0xf644,	// (0x000b86b1) main_camera2_pane_t_ParamLimits

0xf644,	// (0x000b86b1) main_camera2_pane_t

0x3dd5,	// (0x000ace42) cams_zoom_pane_cp4_ParamLimits

0x3dd5,	// (0x000ace42) cams_zoom_pane_cp4

0x3deb,	// (0x000ace58) image2_cif_pane_ParamLimits

0x3deb,	// (0x000ace58) image2_cif_pane

0x3e16,	// (0x000ace83) image2_subqcif_pane_ParamLimits

0x3e16,	// (0x000ace83) image2_subqcif_pane

0x3e30,	// (0x000ace9d) main_video2_pane_g1_ParamLimits

0x3e30,	// (0x000ace9d) main_video2_pane_g1

0x3e4a,	// (0x000aceb7) main_video2_pane_g2_ParamLimits

0x3e4a,	// (0x000aceb7) main_video2_pane_g2

0x3e60,	// (0x000acecd) main_video2_pane_g3_ParamLimits

0x3e60,	// (0x000acecd) main_video2_pane_g3

0x3e76,	// (0x000acee3) main_video2_pane_g4_ParamLimits

0x3e76,	// (0x000acee3) main_video2_pane_g4

0x3e8c,	// (0x000acef9) main_video2_pane_g5_ParamLimits

0x3e8c,	// (0x000acef9) main_video2_pane_g5

0x3ea2,	// (0x000acf0f) main_video2_pane_g6_ParamLimits

0x3ea2,	// (0x000acf0f) main_video2_pane_g6

0x0005,

0xf653,	// (0x000b86c0) main_video2_pane_g_ParamLimits

0xf653,	// (0x000b86c0) main_video2_pane_g

0x3ebc,	// (0x000acf29) main_video2_pane_t1_ParamLimits

0x3ebc,	// (0x000acf29) main_video2_pane_t1

0x3ee0,	// (0x000acf4d) main_video2_pane_t2_ParamLimits

0x3ee0,	// (0x000acf4d) main_video2_pane_t2

0x3f2e,	// (0x000acf9b) main_video2_pane_t3_ParamLimits

0x3f2e,	// (0x000acf9b) main_video2_pane_t3

0x0002,

0xf660,	// (0x000b86cd) main_video2_pane_t_ParamLimits

0xf660,	// (0x000b86cd) main_video2_pane_t

0x33a1,	// (0x000ac40e) call_muted_g2

0x0001,

0xf602,	// (0x000b866f) call_muted_g

0xa062,	// (0x000b30cf) main_mup2_pane

0x3f76,	// (0x000acfe3) main_mup2_pane_g1_ParamLimits

0x3f76,	// (0x000acfe3) main_mup2_pane_g1

0x3f82,	// (0x000acfef) main_mup2_pane_g2_ParamLimits

0x3f82,	// (0x000acfef) main_mup2_pane_g2

0x97e7,	// (0x000b2854) main_mup_pane_g13_cp1

0x97ef,	// (0x000b285c) mup_volume_pane_cp1

0x3f9e,	// (0x000ad00b) main_mup2_pane_g4_ParamLimits

0x3f9e,	// (0x000ad00b) main_mup2_pane_g4

0x3fb0,	// (0x000ad01d) main_mup2_pane_g5_ParamLimits

0x3fb0,	// (0x000ad01d) main_mup2_pane_g5

0x3fc2,	// (0x000ad02f) main_mup2_pane_g6_ParamLimits

0x3fc2,	// (0x000ad02f) main_mup2_pane_g6

0x3fd4,	// (0x000ad041) main_mup2_pane_g7_ParamLimits

0x3fd4,	// (0x000ad041) main_mup2_pane_g7

0x0006,

0xf667,	// (0x000b86d4) main_mup2_pane_g_ParamLimits

0xf667,	// (0x000b86d4) main_mup2_pane_g

0x3fec,	// (0x000ad059) main_mup2_pane_t1_ParamLimits

0x3fec,	// (0x000ad059) main_mup2_pane_t1

0x4002,	// (0x000ad06f) main_mup2_pane_t2_ParamLimits

0x4002,	// (0x000ad06f) main_mup2_pane_t2

0x4018,	// (0x000ad085) main_mup2_pane_t3_ParamLimits

0x4018,	// (0x000ad085) main_mup2_pane_t3

0x402e,	// (0x000ad09b) main_mup2_pane_t4_ParamLimits

0x402e,	// (0x000ad09b) main_mup2_pane_t4

0x4046,	// (0x000ad0b3) main_mup2_pane_t5_ParamLimits

0x4046,	// (0x000ad0b3) main_mup2_pane_t5

0x405e,	// (0x000ad0cb) main_mup2_pane_t6_ParamLimits

0x405e,	// (0x000ad0cb) main_mup2_pane_t6

0x0005,

0xf676,	// (0x000b86e3) main_mup2_pane_t_ParamLimits

0xf676,	// (0x000b86e3) main_mup2_pane_t

0x408e,	// (0x000ad0fb) mup2_visualizer_pane_ParamLimits

0x408e,	// (0x000ad0fb) mup2_visualizer_pane

0x40bc,	// (0x000ad129) mup_progress_pane_cp_ParamLimits

0x40bc,	// (0x000ad129) mup_progress_pane_cp

0x97d2,	// (0x000b283f) mup_volume_pane_cp_ParamLimits

0x97d2,	// (0x000b283f) mup_volume_pane_cp

0x40d0,	// (0x000ad13d) mup2_visualizer_pane_g1_ParamLimits

0x40d0,	// (0x000ad13d) mup2_visualizer_pane_g1

0xca2e,	// (0x000b5a9b) mup2_visualizer_pane_g2_ParamLimits

0xca2e,	// (0x000b5a9b) mup2_visualizer_pane_g2

0x40e7,	// (0x000ad154) mup2_visualizer_pane_g3_ParamLimits

0x40e7,	// (0x000ad154) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x000b86f0) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x000b86f0) mup2_visualizer_pane_g

0xb80c,	// (0x000b4879) aid_size_cell_fmradio

0x3553,	// (0x000ac5c0) aid_height_parent_landcape

0xac63,	// (0x000b3cd0) wml_content_pane_cp

0xac6b,	// (0x000b3cd8) wml_tabs_pane

0xac74,	// (0x000b3ce1) popup_wml_miniature_window

0xac7c,	// (0x000b3ce9) scroll_pane_cp021

0xac90,	// (0x000b3cfd) wml_content_pane_comp8

0xa062,	// (0x000b30cf) bg_popup_sub_pane_cp05

0xca4c,	// (0x000b5ab9) popup_wml_miniature_window_g1

0xca54,	// (0x000b5ac1) wml_miniature_view_pane

0x40f3,	// (0x000ad160) aid_size_wml_view

0x40fb,	// (0x000ad168) wml_miniature_view_pane_g1

0x4104,	// (0x000ad171) wml_miniature_view_pane_g2

0x410d,	// (0x000ad17a) wml_miniature_view_pane_g3

0x4115,	// (0x000ad182) wml_miniature_view_pane_g4

0x411d,	// (0x000ad18a) wml_miniature_view_pane_g5

0x4125,	// (0x000ad192) wml_miniature_view_pane_g6

0x412d,	// (0x000ad19a) wml_miniature_view_pane_g7

0x4135,	// (0x000ad1a2) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x000b86f7) wml_miniature_view_pane_g

0xca5c,	// (0x000b5ac9) background_graphic_ParamLimits

0xca5c,	// (0x000b5ac9) background_graphic

0xca68,	// (0x000b5ad5) wml_tabs_2_pane

0xca71,	// (0x000b5ade) wml_tabs_3_pane_ParamLimits

0xca71,	// (0x000b5ade) wml_tabs_3_pane

0xca83,	// (0x000b5af0) wml_tabs_4_pane_ParamLimits

0xca83,	// (0x000b5af0) wml_tabs_4_pane

0xca99,	// (0x000b5b06) wml_tabs_5_pane_ParamLimits

0xca99,	// (0x000b5b06) wml_tabs_5_pane

0xcab3,	// (0x000b5b20) wml_tabs_pane_g2_ParamLimits

0xcab3,	// (0x000b5b20) wml_tabs_pane_g2

0xcac7,	// (0x000b5b34) wml_tabs_pane_g3_ParamLimits

0xcac7,	// (0x000b5b34) wml_tabs_pane_g3

0x413d,	// (0x000ad1aa) wml_tabs_2_active_pane_ParamLimits

0x413d,	// (0x000ad1aa) wml_tabs_2_active_pane

0x4151,	// (0x000ad1be) wml_tabs_2_passive_pane_ParamLimits

0x4151,	// (0x000ad1be) wml_tabs_2_passive_pane

0x4165,	// (0x000ad1d2) wml_tabs_3_active_pane_cp_ParamLimits

0x4165,	// (0x000ad1d2) wml_tabs_3_active_pane_cp

0x417a,	// (0x000ad1e7) wml_tabs_3_passive_pane_ParamLimits

0x417a,	// (0x000ad1e7) wml_tabs_3_passive_pane

0x418d,	// (0x000ad1fa) wml_tabs_3_passive_pane_cp_ParamLimits

0x418d,	// (0x000ad1fa) wml_tabs_3_passive_pane_cp

0x41a4,	// (0x000ad211) tabs_4_active_pane

0x41ac,	// (0x000ad219) tabs_4_passive_pane

0x41b6,	// (0x000ad223) tabs_4_passive_pane_cp

0x41be,	// (0x000ad22b) tabs_4_passive_pane_cp2

0x326e,	// (0x000ac2db) aid_height_text

0x2982,	// (0x000ab9ef) mup_volume_cont_pane_ParamLimits

0x2982,	// (0x000ab9ef) mup_volume_cont_pane

0x077a,	// (0x000a97e7) aid_size_cell_pinb

0x0784,	// (0x000a97f1) aid_size_list_pinb

0x40a8,	// (0x000ad115) mup2_volume_cont_pane_ParamLimits

0x40a8,	// (0x000ad115) mup2_volume_cont_pane

0x97be,	// (0x000b282b) mup2_volume_cont_pane_g1_ParamLimits

0x97be,	// (0x000b282b) mup2_volume_cont_pane_g1

0x042c,	// (0x000a9499) aid_size_cell_touch_ParamLimits

0x042c,	// (0x000a9499) aid_size_cell_touch

0x0669,	// (0x000a96d6) touch_pane_ParamLimits

0x0669,	// (0x000a96d6) touch_pane

0x94b5,	// (0x000b2522) main_rss2_pane

0xcae4,	// (0x000b5b51) listscroll_rss2_pane

0xcaed,	// (0x000b5b5a) rss2_navigation_pane

0xcaf5,	// (0x000b5b62) list_rss2_pane

0xb2ec,	// (0x000b4359) scroll_pane_cp22

0xcafd,	// (0x000b5b6a) rss2_navigation_pane_g1

0xcb06,	// (0x000b5b73) rss2_navigation_pane_g2

0xcb0e,	// (0x000b5b7b) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x000b8708) rss2_navigation_pane_g

0xcb16,	// (0x000b5b83) rss2_navigation_pane_t1

0x41c8,	// (0x000ad235) rss2_list_single_pane_ParamLimits

0x41c8,	// (0x000ad235) rss2_list_single_pane

0xcb24,	// (0x000b5b91) rss2_list_single_pane_t2

0xcb32,	// (0x000b5b9f) rss2_list_single_pane_t3_ParamLimits

0xcb32,	// (0x000b5b9f) rss2_list_single_pane_t3

0xcb4f,	// (0x000b5bbc) rss2_list_single_pane_t4

0x22b7,	// (0x000ab324) smil_status_pane_g1

0x94a7,	// (0x000b2514) main_image2_pane_ParamLimits

0x94a7,	// (0x000b2514) main_image2_pane

0x3c6a,	// (0x000accd7) main_camera2_pane_g9_ParamLimits

0x3c6a,	// (0x000accd7) main_camera2_pane_g9

0x3d98,	// (0x000ace05) main_camera2_pane_t5_ParamLimits

0x3d98,	// (0x000ace05) main_camera2_pane_t5

0x978e,	// (0x000b27fb) main_camera2_pane_t6_ParamLimits

0x978e,	// (0x000b27fb) main_camera2_pane_t6

0x41de,	// (0x000ad24b) main_image2_pane_g1_ParamLimits

0x41de,	// (0x000ad24b) main_image2_pane_g1

0x2fa9,	// (0x000ac016) smil2_video_pane_ParamLimits

0x2fa9,	// (0x000ac016) smil2_video_pane

0x945d,	// (0x000b24ca) aid_zoom_text_primary_cp

0x949d,	// (0x000b250a) popup_preview_fixed_window

0xabcc,	// (0x000b3c39) im_reading_pane_g1

0x3ae1,	// (0x000acb4e) cams2_bc_adjust_pane_cp_ParamLimits

0x3ae1,	// (0x000acb4e) cams2_bc_adjust_pane_cp

0x3dc7,	// (0x000ace34) cams2_bc_adjust_pane_ParamLimits

0x3dc7,	// (0x000ace34) cams2_bc_adjust_pane

0xdc70,	// (0x000b6cdd) cams2_bc_adjust_pane_g1

0x97f7,	// (0x000b2864) cams2_slider_pane

0x9800,	// (0x000b286d) cams2_slider_pane_g1

0x9809,	// (0x000b2876) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x000b870f) cams2_slider_pane_g

0x086c,	// (0x000a98d9) calc_display_pane_ParamLimits

0x0891,	// (0x000a98fe) calc_paper_pane_ParamLimits

0x08b4,	// (0x000a9921) grid_calc_pane_ParamLimits

0x96b3,	// (0x000b2720) popup_clock_digital_window_t1_ParamLimits

0xb7a9,	// (0x000b4816) main_image_pane_t1

0x084e,	// (0x000a98bb) aid_size_cell_calc_ParamLimits

0x084e,	// (0x000a98bb) aid_size_cell_calc

0x35ab,	// (0x000ac618) popup_blid_sat_info2_window_ParamLimits

0x35ab,	// (0x000ac618) popup_blid_sat_info2_window

0xcb65,	// (0x000b5bd2) aid_size_cell_blid

0xcb6d,	// (0x000b5bda) bg_popup_window_pane_cp07

0xcb90,	// (0x000b5bfd) grid_popup_blid_pane

0xcb9a,	// (0x000b5c07) heading_pane_cp05_ParamLimits

0xcb9a,	// (0x000b5c07) heading_pane_cp05

0xcc64,	// (0x000b5cd1) cell_popup_blid_pane_ParamLimits

0xcc64,	// (0x000b5cd1) cell_popup_blid_pane

0xcc88,	// (0x000b5cf5) cell_popup_blid_pane_g1

0xcc90,	// (0x000b5cfd) cell_popup_blid_pane_t1

0x4078,	// (0x000ad0e5) mup2_indicator_pane_ParamLimits

0x4078,	// (0x000ad0e5) mup2_indicator_pane

0xaad3,	// (0x000b3b40) mup2_visualizer_osc_pane

0xca3a,	// (0x000b5aa7) mup2_visualizer_spec_pane_ParamLimits

0xca3a,	// (0x000b5aa7) mup2_visualizer_spec_pane

0x41f4,	// (0x000ad261) mup2_spec_half_pane

0x41fd,	// (0x000ad26a) mup2_spec_half_pane_cp

0x4205,	// (0x000ad272) mup2_spec_bar_pane_ParamLimits

0x4205,	// (0x000ad272) mup2_spec_bar_pane

0xc9db,	// (0x000b5a48) mup2_spec_bar_pane_g1

0xc9e5,	// (0x000b5a52) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x000b8682) mup2_spec_bar_pane_g

0x4225,	// (0x000ad292) mup2_osc_middle_pane

0xc9f7,	// (0x000b5a64) mup2_visualizer_osc_pane_g1

0x94df,	// (0x000b254c) popup_number_entry_window_t1_ParamLimits

0x94f2,	// (0x000b255f) popup_number_entry_window_t2_ParamLimits

0x9504,	// (0x000b2571) popup_number_entry_window_t3_ParamLimits

0x06bb,	// (0x000a9728) popup_number_entry_window_t5_ParamLimits

0x06bb,	// (0x000a9728) popup_number_entry_window_t5

0xf0c6,	// (0x000b8133) popup_number_entry_window_t_ParamLimits

0x9516,	// (0x000b2583) text_title_cp2_ParamLimits

0x96f2,	// (0x000b275f) aid_hotspot_pointer_text2_pane

0x970c,	// (0x000b2779) main_viewer_pane_g9_ParamLimits

0x970c,	// (0x000b2779) main_viewer_pane_g9

0xae05,	// (0x000b3e72) cale_month_pane_t1_ParamLimits

0xae42,	// (0x000b3eaf) bg_cale_pane_ParamLimits

0xae5a,	// (0x000b3ec7) list_cale_pane_ParamLimits

0xae6b,	// (0x000b3ed8) listscroll_cale_day_pane_t1

0xae7d,	// (0x000b3eea) scroll_pane_cp09_ParamLimits

0x29b8,	// (0x000aba25) main_mup_eq_pane_t1_ParamLimits

0x29b8,	// (0x000aba25) main_mup_eq_pane_t1

0x29d2,	// (0x000aba3f) main_mup_eq_pane_t2_ParamLimits

0x29d2,	// (0x000aba3f) main_mup_eq_pane_t2

0x29ec,	// (0x000aba59) main_mup_eq_pane_t3_ParamLimits

0x29ec,	// (0x000aba59) main_mup_eq_pane_t3

0x2a08,	// (0x000aba75) main_mup_eq_pane_t4_ParamLimits

0x2a08,	// (0x000aba75) main_mup_eq_pane_t4

0x2a24,	// (0x000aba91) main_mup_eq_pane_t5_ParamLimits

0x2a24,	// (0x000aba91) main_mup_eq_pane_t5

0x2a40,	// (0x000abaad) main_mup_eq_pane_t6_ParamLimits

0x2a40,	// (0x000abaad) main_mup_eq_pane_t6

0x2a54,	// (0x000abac1) main_mup_eq_pane_t7_ParamLimits

0x2a54,	// (0x000abac1) main_mup_eq_pane_t7

0x2a68,	// (0x000abad5) main_mup_eq_pane_t8_ParamLimits

0x2a68,	// (0x000abad5) main_mup_eq_pane_t8

0x2a7c,	// (0x000abae9) main_mup_eq_pane_t9_ParamLimits

0x2a7c,	// (0x000abae9) main_mup_eq_pane_t9

0x2a96,	// (0x000abb03) main_mup_eq_pane_t10_ParamLimits

0x2a96,	// (0x000abb03) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x000b84be) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x000b84be) main_mup_eq_pane_t

0x2b45,	// (0x000abbb2) mup_equalizer_pane_cp5_ParamLimits

0x2b59,	// (0x000abbc6) mup_equalizer_pane_cp6_ParamLimits

0x2b6d,	// (0x000abbda) mup_equalizer_pane_cp7_ParamLimits

0x94b5,	// (0x000b2522) main_gallery_pane

0xca00,	// (0x000b5a6d) smil2_volume_pane

0xca08,	// (0x000b5a75) smil_status_volume_pane_g1_ParamLimits

0xca1b,	// (0x000b5a88) smil_status_volume_pane_g2_ParamLimits

0x976c,	// (0x000b27d9) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x000b8687) smil_status_volume_pane_g_ParamLimits

0xcb6d,	// (0x000b5bda) bg_popup_window_pane_cp07_ParamLimits

0xcb7b,	// (0x000b5be8) blid_firmament_pane

0x422e,	// (0x000ad29b) aid_size_cell_gallery_ParamLimits

0x422e,	// (0x000ad29b) aid_size_cell_gallery

0x4244,	// (0x000ad2b1) grid_gallery_pane_ParamLimits

0x4244,	// (0x000ad2b1) grid_gallery_pane

0x425d,	// (0x000ad2ca) cell_gallery_pane_ParamLimits

0x425d,	// (0x000ad2ca) cell_gallery_pane

0xcc9e,	// (0x000b5d0b) bg_cell_gallery_focus_pane_ParamLimits

0xcc9e,	// (0x000b5d0b) bg_cell_gallery_focus_pane

0xccb0,	// (0x000b5d1d) cell_gallery_pane_g1_ParamLimits

0xccb0,	// (0x000b5d1d) cell_gallery_pane_g1

0x42a6,	// (0x000ad313) cell_gallery_pane_g2_ParamLimits

0x42a6,	// (0x000ad313) cell_gallery_pane_g2

0x42b3,	// (0x000ad320) cell_gallery_pane_g3_ParamLimits

0x42b3,	// (0x000ad320) cell_gallery_pane_g3

0xccbc,	// (0x000b5d29) cell_gallery_pane_g4_ParamLimits

0xccbc,	// (0x000b5d29) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x000b8735) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x000b8735) cell_gallery_pane_g

0xccc8,	// (0x000b5d35) bg_cell_gallery_focus_pane_g1

0xccd0,	// (0x000b5d3d) bg_cell_gallery_focus_pane_g2

0xccd8,	// (0x000b5d45) bg_cell_gallery_focus_pane_g3

0xcce0,	// (0x000b5d4d) bg_cell_gallery_focus_pane_g4

0xcce8,	// (0x000b5d55) bg_cell_gallery_focus_pane_g5

0xccf0,	// (0x000b5d5d) bg_cell_gallery_focus_pane_g6

0xccf8,	// (0x000b5d65) bg_cell_gallery_focus_pane_g7

0xcd00,	// (0x000b5d6d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x000b873e) bg_cell_gallery_focus_pane_g

0xcd08,	// (0x000b5d75) aid_firma_cardinal

0xcd1c,	// (0x000b5d89) blid_firmament_pane_t1

0xcd33,	// (0x000b5da0) blid_firmament_pane_t2

0xcd4a,	// (0x000b5db7) blid_firmament_pane_t3

0xcd61,	// (0x000b5dce) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x000b874f) blid_firmament_pane_t

0xcd78,	// (0x000b5de5) blid_sat_info_pane

0xcd88,	// (0x000b5df5) blid_sat_info_pane_g1

0xcd88,	// (0x000b5df5) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x000b8758) blid_sat_info_pane_g

0xcd92,	// (0x000b5dff) blid_sat_info_pane_t1

0xcda0,	// (0x000b5e0d) smil2_volume_content_pane

0xcda9,	// (0x000b5e16) smil2_volume_pane_g1

0xa968,	// (0x000b39d5) smil2_volume_content_pane_g1

0xcdb1,	// (0x000b5e1e) smil2_volume_content_pane_g2

0xcdba,	// (0x000b5e27) smil2_volume_content_pane_g3

0xcdc3,	// (0x000b5e30) smil2_volume_content_pane_g4

0xcdcc,	// (0x000b5e39) smil2_volume_content_pane_g5

0xcdd5,	// (0x000b5e42) smil2_volume_content_pane_g6

0xcdde,	// (0x000b5e4b) smil2_volume_content_pane_g7

0xcde7,	// (0x000b5e54) smil2_volume_content_pane_g8

0xcdf0,	// (0x000b5e5d) smil2_volume_content_pane_g9

0xcdf9,	// (0x000b5e66) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x000b875d) smil2_volume_content_pane_g

0x0e17,	// (0x000a9e84) cale_week_day_heading_pane_t1_ParamLimits

0x0e41,	// (0x000a9eae) cale_week_day_heading_pane_t2_ParamLimits

0x0e70,	// (0x000a9edd) cale_week_day_heading_pane_t3_ParamLimits

0x0e9f,	// (0x000a9f0c) cale_week_day_heading_pane_t4_ParamLimits

0x0ece,	// (0x000a9f3b) cale_week_day_heading_pane_t5_ParamLimits

0x0f05,	// (0x000a9f72) cale_week_day_heading_pane_t6_ParamLimits

0x0f3c,	// (0x000a9fa9) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000b823a) cale_week_day_heading_pane_t_ParamLimits

0xaa78,	// (0x000b3ae5) bg_cale_side_pane_ParamLimits

0x0f66,	// (0x000a9fd3) cale_week_time_pane_t1_ParamLimits

0x0f80,	// (0x000a9fed) cale_week_time_pane_t2_ParamLimits

0x0f9a,	// (0x000aa007) cale_week_time_pane_t3_ParamLimits

0x0fb4,	// (0x000aa021) cale_week_time_pane_t4_ParamLimits

0x0fce,	// (0x000aa03b) cale_week_time_pane_t5_ParamLimits

0x0fe8,	// (0x000aa055) cale_week_time_pane_t6_ParamLimits

0x1002,	// (0x000aa06f) cale_week_time_pane_t7_ParamLimits

0x101c,	// (0x000aa089) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000b8249) cale_week_time_pane_t_ParamLimits

0x103c,	// (0x000aa0a9) cell_cale_week_pane_g2_ParamLimits

0xaa78,	// (0x000b3ae5) bg_cale_side_pane_cp01_ParamLimits

0x2092,	// (0x000ab0ff) cale_month_week_pane_t1_ParamLimits

0x20ab,	// (0x000ab118) cale_month_week_pane_t2_ParamLimits

0x20c4,	// (0x000ab131) cale_month_week_pane_t3_ParamLimits

0x20dd,	// (0x000ab14a) cale_month_week_pane_t4_ParamLimits

0x20f6,	// (0x000ab163) cale_month_week_pane_t5_ParamLimits

0x210f,	// (0x000ab17c) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x000b831e) cale_month_week_pane_t_ParamLimits

0x9633,	// (0x000b26a0) cell_cale_month_pane_g1_ParamLimits

0x94b5,	// (0x000b2522) main_cale_event_viewer_pane

0x943f,	// (0x000b24ac) listscroll_cale_event_viewer_pane

0xce02,	// (0x000b5e6f) list_cale_ev_pane

0xce0a,	// (0x000b5e77) scroll_pane_cp023

0xce16,	// (0x000b5e83) field_cale_ev_pane_ParamLimits

0xce16,	// (0x000b5e83) field_cale_ev_pane

0xce34,	// (0x000b5ea1) field_cale_ev_content_pane_ParamLimits

0xce34,	// (0x000b5ea1) field_cale_ev_content_pane

0xce40,	// (0x000b5ead) field_cale_ev_pane_g1_ParamLimits

0xce40,	// (0x000b5ead) field_cale_ev_pane_g1

0xce4c,	// (0x000b5eb9) field_cale_ev_pane_g2_ParamLimits

0xce4c,	// (0x000b5eb9) field_cale_ev_pane_g2

0xce64,	// (0x000b5ed1) field_cale_ev_pane_g3_ParamLimits

0xce64,	// (0x000b5ed1) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x000b8772) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x000b8772) field_cale_ev_pane_g

0xce7c,	// (0x000b5ee9) field_cale_ev_pane_t1_ParamLimits

0xce7c,	// (0x000b5ee9) field_cale_ev_pane_t1

0xa9eb,	// (0x000b3a58) field_cale_ev_content_pane_t1_ParamLimits

0xa9eb,	// (0x000b3a58) field_cale_ev_content_pane_t1

0xb68f,	// (0x000b46fc) bg_button_pane_cp01

0x0b44,	// (0x000a9bb1) listscroll_cale_week_pane_ParamLimits

0xaa23,	// (0x000b3a90) popup_toolbar_window_cp01

0xaa49,	// (0x000b3ab6) listscroll_cale_week_pane_t1_ParamLimits

0x0b44,	// (0x000a9bb1) listscroll_cale_day_pane_ParamLimits

0xaa23,	// (0x000b3a90) popup_toolbar_window_cp02

0xae6b,	// (0x000b3ed8) listscroll_cale_day_pane_t1_ParamLimits

0x3571,	// (0x000ac5de) main_cale_month_pane_ParamLimits

0x9757,	// (0x000b27c4) popup_toolbar_window_cp03_ParamLimits

0x9757,	// (0x000b27c4) popup_toolbar_window_cp03

0x2e71,	// (0x000abede) main_image_pane_g2_ParamLimits

0x2e71,	// (0x000abede) main_image_pane_g2

0x2e82,	// (0x000abeef) main_image_pane_g3_ParamLimits

0x2e82,	// (0x000abeef) main_image_pane_g3

0x0002,

0xf4e3,	// (0x000b8550) main_image_pane_g_ParamLimits

0xf4e3,	// (0x000b8550) main_image_pane_g

0xb7a9,	// (0x000b4816) main_image_pane_t1_ParamLimits

0x2e93,	// (0x000abf00) main_image_pane_t2_ParamLimits

0x2e93,	// (0x000abf00) main_image_pane_t2

0x2ea5,	// (0x000abf12) main_image_pane_t3_ParamLimits

0x2ea5,	// (0x000abf12) main_image_pane_t3

0x2ecd,	// (0x000abf3a) main_image_pane_t4_ParamLimits

0x2ecd,	// (0x000abf3a) main_image_pane_t4

0x0003,

0xf4ea,	// (0x000b8557) main_image_pane_t_ParamLimits

0xf4ea,	// (0x000b8557) main_image_pane_t

0x2eed,	// (0x000abf5a) popup_image_details_window_cp01

0x2ef7,	// (0x000abf64) popup_toobar_trans_pane_cp01_ParamLimits

0x2ef7,	// (0x000abf64) popup_toobar_trans_pane_cp01

0x367c,	// (0x000ac6e9) popup_image_details_window_ParamLimits

0x367c,	// (0x000ac6e9) popup_image_details_window

0x972a,	// (0x000b2797) popup_image_focus_window

0x3a9b,	// (0x000acb08) camera2_autofocus_pane_ParamLimits

0x3a9b,	// (0x000acb08) camera2_autofocus_pane

0x943f,	// (0x000b24ac) bg_popup_sub_pane_cp06

0xce93,	// (0x000b5f00) popup_image_focus_window_g1

0xce9b,	// (0x000b5f08) popup_image_focus_window_g2

0xcea3,	// (0x000b5f10) popup_image_focus_window_g3

0xceab,	// (0x000b5f18) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x000b8779) popup_image_focus_window_g

0xceb3,	// (0x000b5f20) popup_image_focus_window_t1

0xcec1,	// (0x000b5f2e) popup_image_focus_window_t2

0xced1,	// (0x000b5f3e) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x000b8782) popup_image_focus_window_t

0xcedf,	// (0x000b5f4c) camera2_autofocus_pane_g1

0xa181,	// (0x000b31ee) bg_tb_trans_pane_cp01

0xceed,	// (0x000b5f5a) popup_image_details_window_g1

0xcf00,	// (0x000b5f6d) popup_image_details_window_g2

0x0002,

0xf727,	// (0x000b8794) popup_image_details_window_g

0xcf29,	// (0x000b5f96) popup_image_details_window_t1

0xcf3b,	// (0x000b5fa8) popup_image_details_window_t2

0xcf54,	// (0x000b5fc1) popup_image_details_window_t3

0xcf68,	// (0x000b5fd5) popup_image_details_window_t4

0xcf83,	// (0x000b5ff0) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x000b879b) popup_image_details_window_t

0xa8d3,	// (0x000b3940) bg_calc_paper_pane_ParamLimits

0x94b5,	// (0x000b2522) grid_highlight_pane_cp013

0x95a3,	// (0x000b2610) list_calc_pane_ParamLimits

0x95b5,	// (0x000b2622) scroll_pane_cp024

0xa8e7,	// (0x000b3954) bg_calc_display_pane_ParamLimits

0x09b2,	// (0x000a9a1f) calc_display_pane_t1_ParamLimits

0x09c4,	// (0x000a9a31) calc_display_pane_t2_ParamLimits

0x95bd,	// (0x000b262a) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000b81ba) calc_display_pane_t_ParamLimits

0x0a7e,	// (0x000a9aeb) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000b81d7) cell_calc_pane_g

0x0a87,	// (0x000a9af4) cell_calc_pane_t1

0xa946,	// (0x000b39b3) grid_highlight_pane_cp02_ParamLimits

0xa95c,	// (0x000b39c9) toolbar_button_pane_cp01_ParamLimits

0xa95c,	// (0x000b39c9) toolbar_button_pane_cp01

0xb7ee,	// (0x000b485b) temp_image_control_pane_ParamLimits

0xb7ee,	// (0x000b485b) temp_image_control_pane

0x94a7,	// (0x000b2514) main_mp3_pane

0xcf9d,	// (0x000b600a) temp_image_control_pane_g1_ParamLimits

0xcf9d,	// (0x000b600a) temp_image_control_pane_g1

0xcfab,	// (0x000b6018) temp_image_control_pane_g2_ParamLimits

0xcfab,	// (0x000b6018) temp_image_control_pane_g2

0xcfbd,	// (0x000b602a) temp_image_control_pane_g3_ParamLimits

0xcfbd,	// (0x000b602a) temp_image_control_pane_g3

0x42f0,	// (0x000ad35d) temp_image_control_pane_g4_ParamLimits

0x42f0,	// (0x000ad35d) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x000b87a6) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x000b87a6) temp_image_control_pane_g

0xcf9d,	// (0x000b600a) main_mp3_pane_g1

0x4303,	// (0x000ad370) main_mp3_pane_g2

0x0007,

0xf742,	// (0x000b87af) main_mp3_pane_g

0xd000,	// (0x000b606d) main_mp3_pane_t1

0xaadb,	// (0x000b3b48) main_camera_pane_g8_ParamLimits

0xaadb,	// (0x000b3b48) main_camera_pane_g8

0x1340,	// (0x000aa3ad) main_video_pane_g7_ParamLimits

0x1340,	// (0x000aa3ad) main_video_pane_g7

0x97ac,	// (0x000b2819) main_camera2_pane_t7_ParamLimits

0x97ac,	// (0x000b2819) main_camera2_pane_t7

0xac23,	// (0x000b3c90) scroll_pane_cp025_ParamLimits

0xac23,	// (0x000b3c90) scroll_pane_cp025

0xac37,	// (0x000b3ca4) scroll_pane_cp026_ParamLimits

0xac37,	// (0x000b3ca4) scroll_pane_cp026

0xac46,	// (0x000b3cb3) wml_content_pane_ParamLimits

0x94b5,	// (0x000b2522) main_touch_calib_pane

0x43d7,	// (0x000ad444) main_touch_calib_pane_g1

0x43e9,	// (0x000ad456) main_touch_calib_pane_g2

0x43fb,	// (0x000ad468) main_touch_calib_pane_g3

0x440d,	// (0x000ad47a) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x000b87cd) main_touch_calib_pane_g

0x441f,	// (0x000ad48c) main_touch_calib_pane_t1

0x4439,	// (0x000ad4a6) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x000b87d6) main_touch_calib_pane_t

0xb3bb,	// (0x000b4428) mup_progress_pane_cp02

0xb3f0,	// (0x000b445d) navi_pane_g1

0xb4ab,	// (0x000b4518) navi_pane_mp_t3

0x94a7,	// (0x000b2514) main_mp3_pane_ParamLimits

0x3807,	// (0x000ac874) navi_pane_ParamLimits

0xcf9d,	// (0x000b600a) main_mp3_pane_g1_ParamLimits

0x4303,	// (0x000ad370) main_mp3_pane_g2_ParamLimits

0x4311,	// (0x000ad37e) main_mp3_pane_g3_ParamLimits

0x4311,	// (0x000ad37e) main_mp3_pane_g3

0x431f,	// (0x000ad38c) main_mp3_pane_g4_ParamLimits

0x431f,	// (0x000ad38c) main_mp3_pane_g4

0xcfcd,	// (0x000b603a) main_mp3_pane_g5_ParamLimits

0xcfcd,	// (0x000b603a) main_mp3_pane_g5

0xcfdb,	// (0x000b6048) main_mp3_pane_g6_ParamLimits

0xcfdb,	// (0x000b6048) main_mp3_pane_g6

0xcfe8,	// (0x000b6055) main_mp3_pane_g7_ParamLimits

0xcfe8,	// (0x000b6055) main_mp3_pane_g7

0xcff4,	// (0x000b6061) main_mp3_pane_g8_ParamLimits

0xcff4,	// (0x000b6061) main_mp3_pane_g8

0xf742,	// (0x000b87af) main_mp3_pane_g_ParamLimits

0x432b,	// (0x000ad398) main_mp3_pane_t2

0x4339,	// (0x000ad3a6) main_mp3_pane_t3

0xd00e,	// (0x000b607b) main_mp3_pane_t4

0xd01c,	// (0x000b6089) main_mp3_pane_t5

0x0005,

0xf753,	// (0x000b87c0) main_mp3_pane_t

0xd02a,	// (0x000b6097) mup_progress_pane_cp01

0x945d,	// (0x000b24ca) aid_zoom_text_secondary2

0xce02,	// (0x000b5e6f) list_cale_ev2_pane

0xce0a,	// (0x000b5e77) scroll_pane_cp023_ParamLimits

0x448f,	// (0x000ad4fc) field_cale_ev2_pane_ParamLimits

0x448f,	// (0x000ad4fc) field_cale_ev2_pane

0xa18f,	// (0x000b31fc) field_cale_ev2_pane_g1_ParamLimits

0xa18f,	// (0x000b31fc) field_cale_ev2_pane_g1

0xa19b,	// (0x000b3208) field_cale_ev2_pane_g2_ParamLimits

0xa19b,	// (0x000b3208) field_cale_ev2_pane_g2

0xa1b3,	// (0x000b3220) field_cale_ev2_pane_g3_ParamLimits

0xa1b3,	// (0x000b3220) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x000b87e1) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x000b87e1) field_cale_ev2_pane_g

0xa1d7,	// (0x000b3244) field_cale_ev2_pane_t1_ParamLimits

0xa1d7,	// (0x000b3244) field_cale_ev2_pane_t1

0xa1ee,	// (0x000b325b) field_cale_ev2_pane_t2_ParamLimits

0xa1ee,	// (0x000b325b) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x000b87ea) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x000b87ea) field_cale_ev2_pane_t

0x2d25,	// (0x000abd92) main_postcard_pane_g5_ParamLimits

0x2d25,	// (0x000abd92) main_postcard_pane_g5

0x2d3b,	// (0x000abda8) main_postcard_pane_g6_ParamLimits

0x2d3b,	// (0x000abda8) main_postcard_pane_g6

0x1106,	// (0x000aa173) camera2_autofocus_pane_cp_ParamLimits

0x1106,	// (0x000aa173) camera2_autofocus_pane_cp

0x94a7,	// (0x000b2514) main_mup3_pane

0x44f4,	// (0x000ad561) main_mup3_pane_g1_ParamLimits

0x44f4,	// (0x000ad561) main_mup3_pane_g1

0x4516,	// (0x000ad583) main_mup3_pane_g2_ParamLimits

0x4516,	// (0x000ad583) main_mup3_pane_g2

0x4596,	// (0x000ad603) main_mup3_pane_g3_ParamLimits

0x4596,	// (0x000ad603) main_mup3_pane_g3

0x45dc,	// (0x000ad649) main_mup3_pane_g4_ParamLimits

0x45dc,	// (0x000ad649) main_mup3_pane_g4

0x4622,	// (0x000ad68f) main_mup3_pane_g5_ParamLimits

0x4622,	// (0x000ad68f) main_mup3_pane_g5

0x4668,	// (0x000ad6d5) main_mup3_pane_g6_ParamLimits

0x4668,	// (0x000ad6d5) main_mup3_pane_g6

0xd032,	// (0x000b609f) main_mup3_pane_g7_ParamLimits

0xd032,	// (0x000b609f) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x000b87fa) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x000b87fa) main_mup3_pane_g

0x46e6,	// (0x000ad753) main_mup3_pane_t1_ParamLimits

0x46e6,	// (0x000ad753) main_mup3_pane_t1

0x475a,	// (0x000ad7c7) main_mup3_pane_t2_ParamLimits

0x475a,	// (0x000ad7c7) main_mup3_pane_t2

0x482e,	// (0x000ad89b) main_mup3_pane_t4_ParamLimits

0x482e,	// (0x000ad89b) main_mup3_pane_t4

0x4884,	// (0x000ad8f1) main_mup3_pane_t5_ParamLimits

0x4884,	// (0x000ad8f1) main_mup3_pane_t5

0x4940,	// (0x000ad9ad) main_mup3_pane_t6_ParamLimits

0x4940,	// (0x000ad9ad) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x000b880b) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x000b880b) main_mup3_pane_t

0x49f8,	// (0x000ada65) mup3_progress_pane_ParamLimits

0x49f8,	// (0x000ada65) mup3_progress_pane

0x4a84,	// (0x000adaf1) popup_mup3_control_window_ParamLimits

0x4a84,	// (0x000adaf1) popup_mup3_control_window

0xd040,	// (0x000b60ad) popup_mup3_text_window

0x4ab6,	// (0x000adb23) mup3_progress_pane_t1

0x4ad5,	// (0x000adb42) mup3_progress_pane_t2

0xd048,	// (0x000b60b5) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x000b8818) mup3_progress_pane_t

0xd065,	// (0x000b60d2) mup_progress_pane_cp03

0x943f,	// (0x000b24ac) bg_tb_trans_pane_cp04

0x4af4,	// (0x000adb61) mup3_volume_pane

0x4afc,	// (0x000adb69) popup_mup3_control_window_g1

0x4b05,	// (0x000adb72) mup3_volume_pane_g1

0x4b0e,	// (0x000adb7b) mup3_volume_pane_g2

0x4b17,	// (0x000adb84) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x000b881f) mup3_volume_pane_g

0x943f,	// (0x000b24ac) bg_tb_trans_pane_cp03

0xd075,	// (0x000b60e2) popup_mup3_text_window_g1

0xd07d,	// (0x000b60ea) popup_mup3_text_window_t1

0xa92f,	// (0x000b399c) list_calc_item_pane_g1_ParamLimits

0xcadb,	// (0x000b5b48) mup_volume_pane_cp_g1

0x4453,	// (0x000ad4c0) main_touch_calib_pane_t3

0x4467,	// (0x000ad4d4) main_touch_calib_pane_t4

0x447b,	// (0x000ad4e8) main_touch_calib_pane_t5

0x9449,	// (0x000b24b6) aid_cell_size_toolbar2

0x9451,	// (0x000b24be) aid_popup3_width_pane

0x045c,	// (0x000a94c9) aid_zoom_text_msg_primary

0x10e5,	// (0x000aa152) vorec_t7

0xa8f3,	// (0x000b3960) bg_calc_paper_pane_g1_ParamLimits

0xa8ff,	// (0x000b396c) bg_calc_paper_pane_g2_ParamLimits

0xa90b,	// (0x000b3978) bg_calc_paper_pane_g3_ParamLimits

0xa917,	// (0x000b3984) bg_calc_paper_pane_g4_ParamLimits

0xa923,	// (0x000b3990) bg_calc_paper_pane_g5_ParamLimits

0x0a0b,	// (0x000a9a78) bg_calc_paper_pane_g6_ParamLimits

0x0a1a,	// (0x000a9a87) bg_calc_paper_pane_g7_ParamLimits

0x0a29,	// (0x000a9a96) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000b81c1) bg_calc_paper_pane_g_ParamLimits

0x0a3c,	// (0x000a9aa9) calc_bg_paper_pane_g9_ParamLimits

0x1252,	// (0x000aa2bf) image_qvga_pane_ParamLimits

0x1252,	// (0x000aa2bf) image_qvga_pane

0xa816,	// (0x000b3883) bg_popup_sub_pane_cp04_ParamLimits

0xb725,	// (0x000b4792) popup_mup_playback_window_g1_ParamLimits

0xb731,	// (0x000b479e) popup_mup_playback_window_t1_ParamLimits

0xb746,	// (0x000b47b3) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x000b854b) popup_mup_playback_window_t_ParamLimits

0x3f92,	// (0x000acfff) main_mup2_pane_g3_ParamLimits

0x3f92,	// (0x000acfff) main_mup2_pane_g3

0x1648,	// (0x000aa6b5) popup_toolbar_window_cp04

0xbb3b,	// (0x000b4ba8) popup_call2_audio_second_window_g3_ParamLimits

0xbb3b,	// (0x000b4ba8) popup_call2_audio_second_window_g3

0xbf45,	// (0x000b4fb2) popup_call2_audio_first_window_g4_ParamLimits

0xbf45,	// (0x000b4fb2) popup_call2_audio_first_window_g4

0xc5d9,	// (0x000b5646) popup_call2_audio_in_window_g4_ParamLimits

0xc5d9,	// (0x000b5646) popup_call2_audio_in_window_g4

0x2e53,	// (0x000abec0) aid_area_sk_bg_cut_ParamLimits

0x2e53,	// (0x000abec0) aid_area_sk_bg_cut

0xb75b,	// (0x000b47c8) aid_area_sk_bg_cut_2_ParamLimits

0xb75b,	// (0x000b47c8) aid_area_sk_bg_cut_2

0x4296,	// (0x000ad303) aid_placing_details_win

0x429e,	// (0x000ad30b) aid_placing_details_win_2

0xcedf,	// (0x000b5f4c) camera2_autofocus_pane_g1_ParamLimits

0x0602,	// (0x000a966f) popup_fixed_preview_cale_window_ParamLimits

0x0602,	// (0x000a966f) popup_fixed_preview_cale_window

0xb529,	// (0x000b4596) navi_slider_pane_g3

0xb532,	// (0x000b459f) navi_slider_pane_g4

0xb53b,	// (0x000b45a8) navi_slider_pane_g5

0xb529,	// (0x000b4596) navi_slider_pane_g6

0x96d9,	// (0x000b2746) navi_slider_pane_g7

0xb65c,	// (0x000b46c9) mup_scale_pane_g3

0xb665,	// (0x000b46d2) mup_scale_pane_g4

0xb66e,	// (0x000b46db) mup_scale_pane_g5

0x2b81,	// (0x000abbee) mup_scale_pane_g6

0x2b8a,	// (0x000abbf7) mup_scale_pane_g7

0xb529,	// (0x000b4596) cams2_slider_pane_g3

0xcb5d,	// (0x000b5bca) cams2_slider_pane_g4

0x9812,	// (0x000b287f) cams2_slider_pane_g5

0xb529,	// (0x000b4596) cams2_slider_pane_g6

0x981a,	// (0x000b2887) cams2_slider_pane_g7

0xcd88,	// (0x000b5df5) camera2_autofocus_pane_cp_g1

0xc974,	// (0x000b59e1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc974,	// (0x000b59e1) bg_popup_preview_window_pane_cp02

0xd08b,	// (0x000b60f8) list_fp_cale_pane_ParamLimits

0xd08b,	// (0x000b60f8) list_fp_cale_pane

0xd097,	// (0x000b6104) popup_fixed_preview_cale_window_t1_ParamLimits

0xd097,	// (0x000b6104) popup_fixed_preview_cale_window_t1

0x4b20,	// (0x000adb8d) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b20,	// (0x000adb8d) popup_fixed_preview_cale_window_t2

0x4b35,	// (0x000adba2) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b35,	// (0x000adba2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x000b8826) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x000b8826) popup_fixed_preview_cale_window_t

0x4b4a,	// (0x000adbb7) list_single_fp_cale_pane_ParamLimits

0x4b4a,	// (0x000adbb7) list_single_fp_cale_pane

0xd0b5,	// (0x000b6122) list_single_fp_cale_pane_g1_ParamLimits

0xd0b5,	// (0x000b6122) list_single_fp_cale_pane_g1

0xd0c1,	// (0x000b612e) list_single_fp_cale_pane_g2_ParamLimits

0xd0c1,	// (0x000b612e) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x000b882d) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x000b882d) list_single_fp_cale_pane_g

0xd0da,	// (0x000b6147) list_single_fp_cale_pane_t1_ParamLimits

0xd0da,	// (0x000b6147) list_single_fp_cale_pane_t1

0xd0ec,	// (0x000b6159) list_single_fp_cale_pane_t2_ParamLimits

0xd0ec,	// (0x000b6159) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x000b8834) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x000b8834) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94b5,	// (0x000b2522) main_dialer_pane

0x4b60,	// (0x000adbcd) aid_cell_size_keypad

0x4b6a,	// (0x000adbd7) dialer_ne_pane

0x4b72,	// (0x000adbdf) grid_dialer_command_1_pane

0x4b7a,	// (0x000adbe7) grid_dialer_command_2_pane

0x4b82,	// (0x000adbef) grid_dialer_keypad_pane

0x4b94,	// (0x000adc01) bg_popup_call_pane_cp06_ParamLimits

0x4b94,	// (0x000adc01) bg_popup_call_pane_cp06

0x4ba0,	// (0x000adc0d) dialer_ne_clear_pane_ParamLimits

0x4ba0,	// (0x000adc0d) dialer_ne_clear_pane

0xd11f,	// (0x000b618c) dialer_ne_pane_g1

0xd127,	// (0x000b6194) dialer_ne_pane_t1_ParamLimits

0xd127,	// (0x000b6194) dialer_ne_pane_t1

0x4bac,	// (0x000adc19) dialer_ne_pane_t2_ParamLimits

0x4bac,	// (0x000adc19) dialer_ne_pane_t2

0x4bd6,	// (0x000adc43) dialer_ne_pane_t3_ParamLimits

0x4bd6,	// (0x000adc43) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x000b8839) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x000b8839) dialer_ne_pane_t

0x4c06,	// (0x000adc73) dialer_ne_pane_t3_copy1_ParamLimits

0x4c06,	// (0x000adc73) dialer_ne_pane_t3_copy1

0x4c35,	// (0x000adca2) cell_dialer_keypad_pane_ParamLimits

0x4c35,	// (0x000adca2) cell_dialer_keypad_pane

0x4c4c,	// (0x000adcb9) cell_dialer_command_1_pane_ParamLimits

0x4c4c,	// (0x000adcb9) cell_dialer_command_1_pane

0x4c62,	// (0x000adccf) cell_dialer_command_2_pane_ParamLimits

0x4c62,	// (0x000adccf) cell_dialer_command_2_pane

0xd139,	// (0x000b61a6) bg_button_pane_cp02_ParamLimits

0xd139,	// (0x000b61a6) bg_button_pane_cp02

0x4c71,	// (0x000adcde) cell_dialer_keypad_pane_g1_ParamLimits

0x4c71,	// (0x000adcde) cell_dialer_keypad_pane_g1

0xd139,	// (0x000b61a6) bg_button_pane_cp03_ParamLimits

0xd139,	// (0x000b61a6) bg_button_pane_cp03

0x4c85,	// (0x000adcf2) cell_dialer_command_1_pane_g1_ParamLimits

0x4c85,	// (0x000adcf2) cell_dialer_command_1_pane_g1

0xd145,	// (0x000b61b2) bg_button_pane_cp04

0x4c99,	// (0x000add06) cell_dialer_command_2_pane_g1

0xaad3,	// (0x000b3b40) bg_button_pane_cp06

0xd14d,	// (0x000b61ba) dialer_ne_clear_pane_g1

0xb3fc,	// (0x000b4469) navi_pane_g2

0xb42a,	// (0x000b4497) navi_pane_g3

0x0002,

0xf3e1,	// (0x000b844e) navi_pane_g

0xb4b9,	// (0x000b4526) navi_pane_mv_g2

0xb4e0,	// (0x000b454d) navi_pane_mv_g5

0x274f,	// (0x000ab7bc) navi_pane_mv_t1

0xa8e7,	// (0x000b3954) main_clock2_pane

0xa181,	// (0x000b31ee) main_clock2_list_pane_ParamLimits

0xa181,	// (0x000b31ee) main_clock2_list_pane

0x4d0a,	// (0x000add77) main_clock2_pane_t1_ParamLimits

0x4d0a,	// (0x000add77) main_clock2_pane_t1

0x4d45,	// (0x000addb2) main_clock2_pane_t2_ParamLimits

0x4d45,	// (0x000addb2) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x000b8845) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x000b8845) main_clock2_pane_t

0x4de5,	// (0x000ade52) popup_clock_analogue_window_cp03_ParamLimits

0x4de5,	// (0x000ade52) popup_clock_analogue_window_cp03

0x4e0a,	// (0x000ade77) popup_clock_digital_window_cp02_ParamLimits

0x4e0a,	// (0x000ade77) popup_clock_digital_window_cp02

0x4e83,	// (0x000adef0) main_clock2_list_single_pane_ParamLimits

0x4e83,	// (0x000adef0) main_clock2_list_single_pane

0xaad3,	// (0x000b3b40) list_highlight_pane_cp05

0xd187,	// (0x000b61f4) main_clock2_list_single_pane_t1

0x1648,	// (0x000aa6b5) popup_toolbar_window_cp04_ParamLimits

0x42c0,	// (0x000ad32d) camera2_autofocus_pane_g2_ParamLimits

0x42c0,	// (0x000ad32d) camera2_autofocus_pane_g2

0x42cc,	// (0x000ad339) camera2_autofocus_pane_g3_ParamLimits

0x42cc,	// (0x000ad339) camera2_autofocus_pane_g3

0x42d8,	// (0x000ad345) camera2_autofocus_pane_g4_ParamLimits

0x42d8,	// (0x000ad345) camera2_autofocus_pane_g4

0x42e4,	// (0x000ad351) camera2_autofocus_pane_g5_ParamLimits

0x42e4,	// (0x000ad351) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x000b8789) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x000b8789) camera2_autofocus_pane_g

0x44b0,	// (0x000ad51d) camera2_autofocus_pane_cp_g2

0x44b8,	// (0x000ad525) camera2_autofocus_pane_cp_g3

0x44c0,	// (0x000ad52d) camera2_autofocus_pane_cp_g4

0x44c8,	// (0x000ad535) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x000b87ef) camera2_autofocus_pane_cp_g

0x4b8c,	// (0x000adbf9) popup_dialer_spcha_window

0x943f,	// (0x000b24ac) bg_popup_sub_pane_cp07

0xd195,	// (0x000b6202) list_spcha_pane

0xd19d,	// (0x000b620a) list_single_spcha_pane_ParamLimits

0xd19d,	// (0x000b620a) list_single_spcha_pane

0x943f,	// (0x000b24ac) list_highlight_pane_cp06

0xd1ae,	// (0x000b621b) list_single_spcha_pane_t1

0xc383,	// (0x000b53f0) popup_call2_audio_out_window_g4_ParamLimits

0xc383,	// (0x000b53f0) popup_call2_audio_out_window_g4

0x94b5,	// (0x000b2522) main_imed2_pane

0x9732,	// (0x000b279f) popup_imed_adjust2_window

0x3694,	// (0x000ac701) popup_imed_trans_window_ParamLimits

0x3694,	// (0x000ac701) popup_imed_trans_window

0xcbc6,	// (0x000b5c33) popup_blid_sat_info2_window_t1

0xcbd4,	// (0x000b5c41) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x000b871e) popup_blid_sat_info2_window_t

0x4f34,	// (0x000adfa1) aid_size_cell_colour_35

0x4f54,	// (0x000adfc1) aid_size_cell_colour_112

0x4f74,	// (0x000adfe1) aid_size_cell_effect

0xc980,	// (0x000b59ed) bg_tb_trans_pane_cp02

0xaf86,	// (0x000b3ff3) heading_imed_pane

0x4f94,	// (0x000ae001) listscroll_imed_pane

0xd1bc,	// (0x000b6229) heading_imed_pane_g1

0xd1c4,	// (0x000b6231) heading_imed_pane_t1

0xd1d2,	// (0x000b623f) grid_imed_colour_35_pane_ParamLimits

0xd1d2,	// (0x000b623f) grid_imed_colour_35_pane

0x4fa0,	// (0x000ae00d) grid_imed_effect_pane

0xd1ea,	// (0x000b6257) list_imed_aspect_pane

0x4fb6,	// (0x000ae023) scroll_pane_cp027_ParamLimits

0x4fb6,	// (0x000ae023) scroll_pane_cp027

0x4fc7,	// (0x000ae034) cell_imed_effect_pane_ParamLimits

0x4fc7,	// (0x000ae034) cell_imed_effect_pane

0xd1f2,	// (0x000b625f) cell_imed_colour_pane_ParamLimits

0xd1f2,	// (0x000b625f) cell_imed_colour_pane

0xd234,	// (0x000b62a1) cell_imed_colour_pane_g1_ParamLimits

0xd234,	// (0x000b62a1) cell_imed_colour_pane_g1

0xd245,	// (0x000b62b2) hgihlgiht_grid_pane_cp016_ParamLimits

0xd245,	// (0x000b62b2) hgihlgiht_grid_pane_cp016

0x4fee,	// (0x000ae05b) cell_imed_effect_pane_g1

0x4ff6,	// (0x000ae063) grid_highlight_pane_cp017

0xd256,	// (0x000b62c3) list_imed_single_pane_ParamLimits

0xd256,	// (0x000b62c3) list_imed_single_pane

0x943f,	// (0x000b24ac) list_highlight_pane_cp07

0xd26b,	// (0x000b62d8) list_imed_aspect_pane_comp1_t1

0xc980,	// (0x000b59ed) bg_tb_trans_pane_cp05

0xd28d,	// (0x000b62fa) popup_imed_adjust2_window_g1

0xd2b4,	// (0x000b6321) popup_imed_adjust2_window_t1

0xd2cc,	// (0x000b6339) slider_imed_adjust_pane

0xd2e0,	// (0x000b634d) slider_imed_adjust_pane_g1

0xd2f0,	// (0x000b635d) slider_imed_adjust_pane_g2

0xd300,	// (0x000b636d) slider_imed_adjust_pane_g3

0xd311,	// (0x000b637e) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x000b8862) slider_imed_adjust_pane_g

0x4fff,	// (0x000ae06c) aid_size_cell_clipart2

0x500b,	// (0x000ae078) grid_imed_clipart_pane

0xd322,	// (0x000b638f) scroll_pane_cp031

0x5015,	// (0x000ae082) cell_imed_clipart_pane_ParamLimits

0x5015,	// (0x000ae082) cell_imed_clipart_pane

0x5037,	// (0x000ae0a4) cell_imed_clipart_pane_g1

0x943f,	// (0x000b24ac) grid_highlight_pane_cp014

0x4ce6,	// (0x000add53) main_clock2_pane_g1_ParamLimits

0x4ce6,	// (0x000add53) main_clock2_pane_g1

0x4e2a,	// (0x000ade97) aid_call2_pane_cp10

0x4e3c,	// (0x000adea9) aid_call_pane_cp10

0xb35b,	// (0x000b43c8) popup_clock_analogue_window_cp10_g1

0xb35b,	// (0x000b43c8) popup_clock_analogue_window_cp10_g2

0x4e4e,	// (0x000adebb) popup_clock_analogue_window_cp10_g3

0x4e4e,	// (0x000adebb) popup_clock_analogue_window_cp10_g4

0xb35b,	// (0x000b43c8) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x000b8850) popup_clock_analogue_window_cp10_g

0x4e64,	// (0x000aded1) popup_clock_analogue_window_cp10_t1

0x4e95,	// (0x000adf02) clock_digital_number_pane_cp10_ParamLimits

0x4e95,	// (0x000adf02) clock_digital_number_pane_cp10

0x4ead,	// (0x000adf1a) clock_digital_number_pane_cp11_ParamLimits

0x4ead,	// (0x000adf1a) clock_digital_number_pane_cp11

0x4ec5,	// (0x000adf32) clock_digital_number_pane_cp12_ParamLimits

0x4ec5,	// (0x000adf32) clock_digital_number_pane_cp12

0x4edf,	// (0x000adf4c) clock_digital_number_pane_cp13_ParamLimits

0x4edf,	// (0x000adf4c) clock_digital_number_pane_cp13

0x4ef9,	// (0x000adf66) clock_digital_separator_pane_cp10_ParamLimits

0x4ef9,	// (0x000adf66) clock_digital_separator_pane_cp10

0x4f13,	// (0x000adf80) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f13,	// (0x000adf80) popup_clock_digital_window_cp02_t1

0xa80e,	// (0x000b387b) clock_digital_number_pane_cp10_g1

0xa80e,	// (0x000b387b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x000b886b) clock_digital_number_pane_cp10_g

0xa80e,	// (0x000b387b) clock_digital_separator_pane_cp10_g1

0xa80e,	// (0x000b387b) clock_digital_separator_pane_g2_cp10

0xb4e8,	// (0x000b4555) navi_pane_vded_g4

0xb4f1,	// (0x000b455e) navi_pane_vded_g5

0xb4fa,	// (0x000b4567) navi_pane_vded_t1

0x94b5,	// (0x000b2522) main_vded_pane

0x5040,	// (0x000ae0ad) main_vded_pane_g1

0x504a,	// (0x000ae0b7) main_vded_pane_g2

0x5054,	// (0x000ae0c1) main_vded_pane_g3

0x0002,

0xf803,	// (0x000b8870) main_vded_pane_g

0x505e,	// (0x000ae0cb) main_vded_pane_t1

0x506c,	// (0x000ae0d9) main_vded_pane_t2

0x0001,

0xf80a,	// (0x000b8877) main_vded_pane_t

0x507a,	// (0x000ae0e7) vded_slider_pane

0x5082,	// (0x000ae0ef) vded_video_pane

0xd32a,	// (0x000b6397) vded_video_pane_g1

0x508a,	// (0x000ae0f7) vded_video_pane_g2

0xcd88,	// (0x000b5df5) vded_video_pane_g3

0x0002,

0xf80f,	// (0x000b887c) vded_video_pane_g

0xd334,	// (0x000b63a1) vded_slider_pane_g1

0xcadb,	// (0x000b5b48) vded_slider_pane_g2

0xd33d,	// (0x000b63aa) vded_slider_pane_g3

0xd346,	// (0x000b63b3) vded_slider_pane_g4

0xd34f,	// (0x000b63bc) vded_slider_pane_g5

0x0004,

0xf816,	// (0x000b8883) vded_slider_pane_g

0x4a6c,	// (0x000adad9) mup3_rocker_pane_ParamLimits

0x4a6c,	// (0x000adad9) mup3_rocker_pane

0x5093,	// (0x000ae100) mup3_control_keys_pane_g1

0x509b,	// (0x000ae108) mup3_control_keys_pane_g2

0x50a3,	// (0x000ae110) mup3_control_keys_pane_g3

0x50ab,	// (0x000ae118) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x000b888e) mup3_control_keys_pane_g

0x0639,	// (0x000a96a6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0639,	// (0x000a96a6) popup_toolbar2_fixed_window_cp01

0x4aa0,	// (0x000adb0d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4aa0,	// (0x000adb0d) popup_toolbar2_fixed_window_cp02

0xbcad,	// (0x000b4d1a) popup_call2_audio_second_window_t4_ParamLimits

0xbcad,	// (0x000b4d1a) popup_call2_audio_second_window_t4

0xc1f0,	// (0x000b525d) popup_call2_audio_first_window_t6_ParamLimits

0xc1f0,	// (0x000b525d) popup_call2_audio_first_window_t6

0xc486,	// (0x000b54f3) popup_call2_audio_out_window_t6_ParamLimits

0xc486,	// (0x000b54f3) popup_call2_audio_out_window_t6

0x94b5,	// (0x000b2522) main_vitu_pane

0x50bb,	// (0x000ae128) aid_size_cell_itu_ParamLimits

0x50bb,	// (0x000ae128) aid_size_cell_itu

0xa181,	// (0x000b31ee) bg_popup_window_pane_cp08_ParamLimits

0xa181,	// (0x000b31ee) bg_popup_window_pane_cp08

0x50d1,	// (0x000ae13e) field_vitu_entry_pane_ParamLimits

0x50d1,	// (0x000ae13e) field_vitu_entry_pane

0x50e9,	// (0x000ae156) grid_vitu_function_pane_ParamLimits

0x50e9,	// (0x000ae156) grid_vitu_function_pane

0x5104,	// (0x000ae171) grid_vitu_itu_pane_ParamLimits

0x5104,	// (0x000ae171) grid_vitu_itu_pane

0x5122,	// (0x000ae18f) cell_vitu_itu_pane_ParamLimits

0x5122,	// (0x000ae18f) cell_vitu_itu_pane

0x5144,	// (0x000ae1b1) cell_vitu_function_pane_ParamLimits

0x5144,	// (0x000ae1b1) cell_vitu_function_pane

0xa181,	// (0x000b31ee) bg_popup_sub_pane_cp08_ParamLimits

0xa181,	// (0x000b31ee) bg_popup_sub_pane_cp08

0x515d,	// (0x000ae1ca) field_vitu_entry_pane_t1_ParamLimits

0x515d,	// (0x000ae1ca) field_vitu_entry_pane_t1

0xd370,	// (0x000b63dd) field_vitu_entry_pane_t2_ParamLimits

0xd370,	// (0x000b63dd) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x000b889c) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x000b889c) field_vitu_entry_pane_t

0xd38d,	// (0x000b63fa) bg_button_pane_cp05_ParamLimits

0xd38d,	// (0x000b63fa) bg_button_pane_cp05

0x517c,	// (0x000ae1e9) cell_vitu_itu_pane_g1

0x5194,	// (0x000ae201) cell_vitu_itu_pane_t1_ParamLimits

0x5194,	// (0x000ae201) cell_vitu_itu_pane_t1

0x51a6,	// (0x000ae213) cell_vitu_itu_pane_t2_ParamLimits

0x51a6,	// (0x000ae213) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x000b88a1) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x000b88a1) cell_vitu_itu_pane_t

0xd39b,	// (0x000b6408) bg_button_pane_cp07

0x51db,	// (0x000ae248) cell_vitu_function_pane_g1

0x959b,	// (0x000b2608) main_calc_pane_g1

0x0450,	// (0x000a94bd) aid_visual_content_pane

0x94b5,	// (0x000b2522) main_vradio_pane

0x51e4,	// (0x000ae251) main_vradio_pane_g1_ParamLimits

0x51e4,	// (0x000ae251) main_vradio_pane_g1

0xd3a5,	// (0x000b6412) main_vradio_pane_g2_ParamLimits

0xd3a5,	// (0x000b6412) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x000b88a8) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x000b88a8) main_vradio_pane_g

0x51fd,	// (0x000ae26a) main_vradio_pane_t1_ParamLimits

0x51fd,	// (0x000ae26a) main_vradio_pane_t1

0x5212,	// (0x000ae27f) main_vradio_pane_t2_ParamLimits

0x5212,	// (0x000ae27f) main_vradio_pane_t2

0xd3b2,	// (0x000b641f) main_vradio_pane_t3_ParamLimits

0xd3b2,	// (0x000b641f) main_vradio_pane_t3

0x0002,

0xf840,	// (0x000b88ad) main_vradio_pane_t_ParamLimits

0xf840,	// (0x000b88ad) main_vradio_pane_t

0x5227,	// (0x000ae294) vradio_rocker_control_pane_ParamLimits

0x5227,	// (0x000ae294) vradio_rocker_control_pane

0x5239,	// (0x000ae2a6) vradio_station_info_pane_ParamLimits

0x5239,	// (0x000ae2a6) vradio_station_info_pane

0xd3c6,	// (0x000b6433) vradio_frequency_info_pane_ParamLimits

0xd3c6,	// (0x000b6433) vradio_frequency_info_pane

0xcd88,	// (0x000b5df5) vradio_station_info_pane_g1

0xd3d5,	// (0x000b6442) vradio_station_info_pane_t1_ParamLimits

0xd3d5,	// (0x000b6442) vradio_station_info_pane_t1

0xd3f7,	// (0x000b6464) vradio_station_info_pane_t2_ParamLimits

0xd3f7,	// (0x000b6464) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x000b88b4) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x000b88b4) vradio_station_info_pane_t

0xd409,	// (0x000b6476) vradio_tuning_pane

0xd411,	// (0x000b647e) vradio_rocker_control_pane_g1

0xd419,	// (0x000b6486) vradio_rocker_control_pane_g2

0xd421,	// (0x000b648e) vradio_rocker_control_pane_g3

0xd429,	// (0x000b6496) vradio_rocker_control_pane_g4

0xd431,	// (0x000b649e) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x000b88b9) vradio_rocker_control_pane_g

0x524b,	// (0x000ae2b8) vradio_frequency_info_pane_g1

0xd439,	// (0x000b64a6) vradio_frequency_info_pane_t1_ParamLimits

0xd439,	// (0x000b64a6) vradio_frequency_info_pane_t1

0x5255,	// (0x000ae2c2) vradio_tuning_pane_g1

0x5260,	// (0x000ae2cd) vradio_tuning_pane_t1

0x9465,	// (0x000b24d2) area_side_right_pane_ParamLimits

0x9465,	// (0x000b24d2) area_side_right_pane

0xc93b,	// (0x000b59a8) status_small_pane_g1

0xc943,	// (0x000b59b0) status_small_pane_g2

0xc94c,	// (0x000b59b9) status_small_pane_g3

0xc955,	// (0x000b59c2) status_small_pane_g4

0x0003,

0xf607,	// (0x000b8674) status_small_pane_g

0xc95e,	// (0x000b59cb) status_small_pane_t1

0x94b5,	// (0x000b2522) main_video3_pane

0xd44d,	// (0x000b64ba) cams_zoom_vslider_pane

0xd455,	// (0x000b64c2) image3_wide_pane_ParamLimits

0xd455,	// (0x000b64c2) image3_wide_pane

0xd46f,	// (0x000b64dc) image3_wide_small_pane

0xd47b,	// (0x000b64e8) main_video3_pane_g1_ParamLimits

0xd47b,	// (0x000b64e8) main_video3_pane_g1

0xd497,	// (0x000b6504) main_video3_pane_g2_ParamLimits

0xd497,	// (0x000b6504) main_video3_pane_g2

0x0001,

0xf857,	// (0x000b88c4) main_video3_pane_g_ParamLimits

0xf857,	// (0x000b88c4) main_video3_pane_g

0xd4b3,	// (0x000b6520) main_video3_pane_t1_ParamLimits

0xd4b3,	// (0x000b6520) main_video3_pane_t1

0xd4de,	// (0x000b654b) main_video3_pane_t2_ParamLimits

0xd4de,	// (0x000b654b) main_video3_pane_t2

0xd509,	// (0x000b6576) main_video3_pane_t3_ParamLimits

0xd509,	// (0x000b6576) main_video3_pane_t3

0x0002,

0xf85c,	// (0x000b88c9) main_video3_pane_t_ParamLimits

0xf85c,	// (0x000b88c9) main_video3_pane_t

0xd536,	// (0x000b65a3) cams_zoom_vslider_pane_g1

0xd53f,	// (0x000b65ac) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x000b88d0) cams_zoom_vslider_pane_g

0xd547,	// (0x000b65b4) small_slider_vertical_pane

0xcd88,	// (0x000b5df5) small_slider_vertical_pane_g1

0xcd88,	// (0x000b5df5) small_slider_vertical_pane_g2

0xd54f,	// (0x000b65bc) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x000b88d5) small_slider_vertical_pane_g

0x94b5,	// (0x000b2522) main_hwr_training_pane

0xd558,	// (0x000b65c5) hwr_training_instruct_pane_ParamLimits

0xd558,	// (0x000b65c5) hwr_training_instruct_pane

0x526f,	// (0x000ae2dc) hwr_training_navi_pane_ParamLimits

0x526f,	// (0x000ae2dc) hwr_training_navi_pane

0x528e,	// (0x000ae2fb) hwr_training_write_pane_ParamLimits

0x528e,	// (0x000ae2fb) hwr_training_write_pane

0x943f,	// (0x000b24ac) bg_frame_shadow_pane

0xd58f,	// (0x000b65fc) hwr_training_write_pane_g1

0xd597,	// (0x000b6604) hwr_training_write_pane_g2

0xd59f,	// (0x000b660c) hwr_training_write_pane_g3

0xd5a7,	// (0x000b6614) hwr_training_write_pane_g4

0xd5af,	// (0x000b661c) hwr_training_write_pane_g5

0xd5b7,	// (0x000b6624) hwr_training_write_pane_g6

0xd5bf,	// (0x000b662c) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x000b88dc) hwr_training_write_pane_g

0x9823,	// (0x000b2890) hwr_training_navi_pane_g1_ParamLimits

0x9823,	// (0x000b2890) hwr_training_navi_pane_g1

0x9835,	// (0x000b28a2) hwr_training_navi_pane_g2_ParamLimits

0x9835,	// (0x000b28a2) hwr_training_navi_pane_g2

0x9847,	// (0x000b28b4) hwr_training_navi_pane_g3_ParamLimits

0x9847,	// (0x000b28b4) hwr_training_navi_pane_g3

0x9857,	// (0x000b28c4) hwr_training_navi_pane_g4_ParamLimits

0x9857,	// (0x000b28c4) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x000b88eb) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x000b88eb) hwr_training_navi_pane_g

0x9864,	// (0x000b28d1) hwr_training_navi_pane_t1

0x52d8,	// (0x000ae345) list_single_hwr_training_instruct_pane_ParamLimits

0x52d8,	// (0x000ae345) list_single_hwr_training_instruct_pane

0xd5c7,	// (0x000b6634) list_single_hwr_training_instruct_pane_t1

0xccc8,	// (0x000b5d35) bg_frame_shadow_pane_g1

0xd5d6,	// (0x000b6643) bg_frame_shadow_pane_g2

0xd5de,	// (0x000b664b) bg_frame_shadow_pane_g3

0xd5e6,	// (0x000b6653) bg_frame_shadow_pane_g4

0xd5ee,	// (0x000b665b) bg_frame_shadow_pane_g5

0xd5f6,	// (0x000b6663) bg_frame_shadow_pane_g6

0xd5fe,	// (0x000b666b) bg_frame_shadow_pane_g7

0xa9a9,	// (0x000b3a16) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x000b88f6) bg_frame_shadow_pane_g

0x94b5,	// (0x000b2522) main_video_tele_dialer_pane

0x52ee,	// (0x000ae35b) aid_size_cell_video_keypad_ParamLimits

0x52ee,	// (0x000ae35b) aid_size_cell_video_keypad

0x5308,	// (0x000ae375) grid_video_dialer_keypad_pane_ParamLimits

0x5308,	// (0x000ae375) grid_video_dialer_keypad_pane

0x5356,	// (0x000ae3c3) video_down_pane_cp_ParamLimits

0x5356,	// (0x000ae3c3) video_down_pane_cp

0x5388,	// (0x000ae3f5) cell_video_dialer_keypad_pane_ParamLimits

0x5388,	// (0x000ae3f5) cell_video_dialer_keypad_pane

0xd606,	// (0x000b6673) bg_button_pane_cp08_ParamLimits

0xd606,	// (0x000b6673) bg_button_pane_cp08

0x53aa,	// (0x000ae417) cell_video_dialer_keypad_pane_g1_ParamLimits

0x53aa,	// (0x000ae417) cell_video_dialer_keypad_pane_g1

0x4a56,	// (0x000adac3) mup3_rocker2_pane_ParamLimits

0x4a56,	// (0x000adac3) mup3_rocker2_pane

0xcd88,	// (0x000b5df5) mup3_rocker2_pane_g1

0x3583,	// (0x000ac5f0) main_dialer2_pane

0x94b5,	// (0x000b2522) main_mp4_pane

0x9890,	// (0x000b28fd) main_mp4_pane_g1_ParamLimits

0x9890,	// (0x000b28fd) main_mp4_pane_g1

0x9890,	// (0x000b28fd) main_mp4_pane_g2_ParamLimits

0x9890,	// (0x000b28fd) main_mp4_pane_g2

0x53e4,	// (0x000ae451) main_mp4_pane_g3_ParamLimits

0x53e4,	// (0x000ae451) main_mp4_pane_g3

0x989e,	// (0x000b290b) main_mp4_pane_g4_ParamLimits

0x989e,	// (0x000b290b) main_mp4_pane_g4

0x98cc,	// (0x000b2939) main_mp4_pane_g5_ParamLimits

0x98cc,	// (0x000b2939) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x000b8916) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x000b8916) main_mp4_pane_g

0x9940,	// (0x000b29ad) main_mp4_pane_t1_ParamLimits

0x9940,	// (0x000b29ad) main_mp4_pane_t1

0x999c,	// (0x000b2a09) main_mp4_pane_t2_ParamLimits

0x999c,	// (0x000b2a09) main_mp4_pane_t2

0xd612,	// (0x000b667f) main_mp4_pane_t3_ParamLimits

0xd612,	// (0x000b667f) main_mp4_pane_t3

0x99ee,	// (0x000b2a5b) main_mp4_pane_t4_ParamLimits

0x99ee,	// (0x000b2a5b) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x000b8927) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x000b8927) main_mp4_pane_t

0x9a32,	// (0x000b2a9f) mp4_progress_pane_ParamLimits

0x9a32,	// (0x000b2a9f) mp4_progress_pane

0x9a7c,	// (0x000b2ae9) mp4_rocker_pane_ParamLimits

0x9a7c,	// (0x000b2ae9) mp4_rocker_pane

0xd640,	// (0x000b66ad) mp4_progress_pane_t1

0xd659,	// (0x000b66c6) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x000b8930) mp4_progress_pane_t

0xd672,	// (0x000b66df) mup_progress_pane_cp04

0xdc78,	// (0x000b6ce5) mp4_rocker_pane_g1

0x5420,	// (0x000ae48d) aid_cell_size_keypad2_ParamLimits

0x5420,	// (0x000ae48d) aid_cell_size_keypad2

0x5436,	// (0x000ae4a3) dialer2_ne_pane_ParamLimits

0x5436,	// (0x000ae4a3) dialer2_ne_pane

0x5450,	// (0x000ae4bd) grid_dialer2_keypad_pane_ParamLimits

0x5450,	// (0x000ae4bd) grid_dialer2_keypad_pane

0xcb6d,	// (0x000b5bda) bg_popup_call_pane_cp07_ParamLimits

0xcb6d,	// (0x000b5bda) bg_popup_call_pane_cp07

0x546c,	// (0x000ae4d9) dialer2_ne_pane_t1_ParamLimits

0x546c,	// (0x000ae4d9) dialer2_ne_pane_t1

0x54a8,	// (0x000ae515) cell_dialer2_keypad_pane_ParamLimits

0x54a8,	// (0x000ae515) cell_dialer2_keypad_pane

0xd697,	// (0x000b6704) bg_button_pane_pane_cp04_ParamLimits

0xd697,	// (0x000b6704) bg_button_pane_pane_cp04

0x54ca,	// (0x000ae537) cell_dialer2_keypad_pane_g1_ParamLimits

0x54ca,	// (0x000ae537) cell_dialer2_keypad_pane_g1

0x151c,	// (0x000aa589) aid_placing_vt_set_content_ParamLimits

0x151c,	// (0x000aa589) aid_placing_vt_set_content

0x1544,	// (0x000aa5b1) aid_placing_vt_set_title_ParamLimits

0x1544,	// (0x000aa5b1) aid_placing_vt_set_title

0x94b5,	// (0x000b2522) main_image3_pane

0x5590,	// (0x000ae5fd) area_side_right_pane_cp01_ParamLimits

0x5590,	// (0x000ae5fd) area_side_right_pane_cp01

0x9890,	// (0x000b28fd) main_image3_pane_g1_ParamLimits

0x9890,	// (0x000b28fd) main_image3_pane_g1

0x55a7,	// (0x000ae614) main_image3_pane_g2_ParamLimits

0x55a7,	// (0x000ae614) main_image3_pane_g2

0x55cf,	// (0x000ae63c) main_image3_pane_g3_ParamLimits

0x55cf,	// (0x000ae63c) main_image3_pane_g3

0x55f9,	// (0x000ae666) main_image3_pane_g4_ParamLimits

0x55f9,	// (0x000ae666) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x000b893f) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x000b893f) main_image3_pane_g

0x5623,	// (0x000ae690) main_image3_pane_t1_ParamLimits

0x5623,	// (0x000ae690) main_image3_pane_t1

0x567b,	// (0x000ae6e8) main_image3_pane_t2_ParamLimits

0x567b,	// (0x000ae6e8) main_image3_pane_t2

0x56cd,	// (0x000ae73a) main_image3_pane_t3_ParamLimits

0x56cd,	// (0x000ae73a) main_image3_pane_t3

0x0003,

0xf8db,	// (0x000b8948) main_image3_pane_t_ParamLimits

0xf8db,	// (0x000b8948) main_image3_pane_t

0xa181,	// (0x000b31ee) grid_sctrl_middle_pane_cp01_ParamLimits

0xa181,	// (0x000b31ee) grid_sctrl_middle_pane_cp01

0x5755,	// (0x000ae7c2) cell_sctrl_middle_pane_cp01_ParamLimits

0x5755,	// (0x000ae7c2) cell_sctrl_middle_pane_cp01

0x5772,	// (0x000ae7df) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5772,	// (0x000ae7df) cell_sctrl_middle_pane_cp01_g1

0x94b5,	// (0x000b2522) main_call4_pane

0x5788,	// (0x000ae7f5) aid_size_button_call4_ParamLimits

0x5788,	// (0x000ae7f5) aid_size_button_call4

0x57bb,	// (0x000ae828) call4_windows_pane_ParamLimits

0x57bb,	// (0x000ae828) call4_windows_pane

0x57da,	// (0x000ae847) grid_call4_button_pane_ParamLimits

0x57da,	// (0x000ae847) grid_call4_button_pane

0x580d,	// (0x000ae87a) call4_windows_conf_pane

0x5824,	// (0x000ae891) popup_call4_audio_first_window_ParamLimits

0x5824,	// (0x000ae891) popup_call4_audio_first_window

0x5874,	// (0x000ae8e1) popup_call4_audio_second_window_ParamLimits

0x5874,	// (0x000ae8e1) popup_call4_audio_second_window

0x588b,	// (0x000ae8f8) popup_call4_audio_wait_window_ParamLimits

0x588b,	// (0x000ae8f8) popup_call4_audio_wait_window

0x5899,	// (0x000ae906) cell_call4_button_pane_ParamLimits

0x5899,	// (0x000ae906) cell_call4_button_pane

0x58be,	// (0x000ae92b) bg_button_pane_cp09_ParamLimits

0x58be,	// (0x000ae92b) bg_button_pane_cp09

0x58ca,	// (0x000ae937) cell_call4_button_pane_g1_ParamLimits

0x58ca,	// (0x000ae937) cell_call4_button_pane_g1

0x58f0,	// (0x000ae95d) cell_call4_button_pane_t1_ParamLimits

0x58f0,	// (0x000ae95d) cell_call4_button_pane_t1

0xd6ab,	// (0x000b6718) popup_call4_audio_conf_window_ParamLimits

0xd6ab,	// (0x000b6718) popup_call4_audio_conf_window

0x4ab6,	// (0x000adb23) mup3_progress_pane_t1_ParamLimits

0x4ad5,	// (0x000adb42) mup3_progress_pane_t2_ParamLimits

0xd048,	// (0x000b60b5) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x000b8818) mup3_progress_pane_t_ParamLimits

0xd065,	// (0x000b60d2) mup_progress_pane_cp03_ParamLimits

0x50b3,	// (0x000ae120) mup3_control_keys_pane_g4_copy1

0x9a60,	// (0x000b2acd) mp4_rocker2_pane_ParamLimits

0x9a60,	// (0x000b2acd) mp4_rocker2_pane

0xd6bf,	// (0x000b672c) mp4_rocker2_pane_g1

0xd6c7,	// (0x000b6734) mp4_rocker2_pane_g2

0x9b00,	// (0x000b2b6d) mp4_rocker2_pane_g3

0x9b08,	// (0x000b2b75) mp4_rocker2_pane_g4

0x9b10,	// (0x000b2b7d) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x000b8951) mp4_rocker2_pane_g

0x94b5,	// (0x000b2522) main_camera4_pane

0x94b5,	// (0x000b2522) main_video4_pane

0x5324,	// (0x000ae391) main_video_tele_dialer_pane_t1_ParamLimits

0x5324,	// (0x000ae391) main_video_tele_dialer_pane_t1

0x533d,	// (0x000ae3aa) main_video_tele_dialer_pane_t2_ParamLimits

0x533d,	// (0x000ae3aa) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x000b8907) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x000b8907) main_video_tele_dialer_pane_t

0x5932,	// (0x000ae99f) cam4_autofocus_pane_ParamLimits

0x5932,	// (0x000ae99f) cam4_autofocus_pane

0x5948,	// (0x000ae9b5) cam4_image_uncrop_pane_ParamLimits

0x5948,	// (0x000ae9b5) cam4_image_uncrop_pane

0x5962,	// (0x000ae9cf) cam4_indicators_pane_ParamLimits

0x5962,	// (0x000ae9cf) cam4_indicators_pane

0x598d,	// (0x000ae9fa) main_camera4_pane_g1_ParamLimits

0x598d,	// (0x000ae9fa) main_camera4_pane_g1

0x599f,	// (0x000aea0c) main_camera4_pane_g2_ParamLimits

0x599f,	// (0x000aea0c) main_camera4_pane_g2

0x59b2,	// (0x000aea1f) main_camera4_pane_g3_ParamLimits

0x59b2,	// (0x000aea1f) main_camera4_pane_g3

0x59c5,	// (0x000aea32) main_camera4_pane_g4_ParamLimits

0x59c5,	// (0x000aea32) main_camera4_pane_g4

0x59d8,	// (0x000aea45) main_camera4_pane_g5_ParamLimits

0x59d8,	// (0x000aea45) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x000b895c) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x000b895c) main_camera4_pane_g

0x59fc,	// (0x000aea69) main_camera4_pane_t1_ParamLimits

0x59fc,	// (0x000aea69) main_camera4_pane_t1

0x9b34,	// (0x000b2ba1) bg_tb_trans_pane_cp06

0x9b4a,	// (0x000b2bb7) cam4_indicators_pane_g1

0x9b5b,	// (0x000b2bc8) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x000b8977) cam4_indicators_pane_g

0x9b73,	// (0x000b2be0) cam4_indicators_pane_t1

0x5a60,	// (0x000aeacd) main_video4_pane_g1_ParamLimits

0x5a60,	// (0x000aeacd) main_video4_pane_g1

0x5a6f,	// (0x000aeadc) main_video4_pane_g2_ParamLimits

0x5a6f,	// (0x000aeadc) main_video4_pane_g2

0x5a7e,	// (0x000aeaeb) main_video4_pane_g3_ParamLimits

0x5a7e,	// (0x000aeaeb) main_video4_pane_g3

0x5a8d,	// (0x000aeafa) main_video4_pane_g4_ParamLimits

0x5a8d,	// (0x000aeafa) main_video4_pane_g4

0x0004,

0xf911,	// (0x000b897e) main_video4_pane_g_ParamLimits

0xf911,	// (0x000b897e) main_video4_pane_g

0x5aab,	// (0x000aeb18) vid4_indicators_pane_ParamLimits

0x5aab,	// (0x000aeb18) vid4_indicators_pane

0x5ad9,	// (0x000aeb46) video4_image_uncrop_cif_pane_ParamLimits

0x5ad9,	// (0x000aeb46) video4_image_uncrop_cif_pane

0x5af3,	// (0x000aeb60) video4_image_uncrop_nhd_pane_ParamLimits

0x5af3,	// (0x000aeb60) video4_image_uncrop_nhd_pane

0x5948,	// (0x000ae9b5) video4_image_uncrop_vga_pane_ParamLimits

0x5948,	// (0x000ae9b5) video4_image_uncrop_vga_pane

0x94a7,	// (0x000b2514) bg_tb_trans_pane_cp07

0x9b9d,	// (0x000b2c0a) vid4_indicators_pane_g1

0x9bb1,	// (0x000b2c1e) vid4_indicators_pane_g2

0x9bc5,	// (0x000b2c32) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x000b8989) vid4_indicators_pane_g

0x9bf2,	// (0x000b2c5f) vid4_indicators_pane_t1

0x5b07,	// (0x000aeb74) cam4_autofocus_pane_g1

0x5b0f,	// (0x000aeb7c) cam4_autofocus_pane_g2

0x5b17,	// (0x000aeb84) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x000b8994) cam4_autofocus_pane_g

0x5b1f,	// (0x000aeb8c) cam4_autofocus_pane_g3_copy1

0x536c,	// (0x000ae3d9) video_down_pane_cp_t1

0x537a,	// (0x000ae3e7) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x000b890c) video_down_pane_cp_t

0x94a7,	// (0x000b2514) popup_vitu2_window_ParamLimits

0x94a7,	// (0x000b2514) popup_vitu2_window

0x5b27,	// (0x000aeb94) aid_size_cell2_itu2_ParamLimits

0x5b27,	// (0x000aeb94) aid_size_cell2_itu2

0x5b4d,	// (0x000aebba) aid_size_cell_itu2_ParamLimits

0x5b4d,	// (0x000aebba) aid_size_cell_itu2

0x5ba9,	// (0x000aec16) bg_popup_window_pane_cp09_ParamLimits

0x5ba9,	// (0x000aec16) bg_popup_window_pane_cp09

0x5bb7,	// (0x000aec24) field_vitu2_entry_pane_ParamLimits

0x5bb7,	// (0x000aec24) field_vitu2_entry_pane

0x5bdd,	// (0x000aec4a) grid_vitu2_function_pane_ParamLimits

0x5bdd,	// (0x000aec4a) grid_vitu2_function_pane

0x5c2e,	// (0x000aec9b) grid_vitu2_itu_pane_ParamLimits

0x5c2e,	// (0x000aec9b) grid_vitu2_itu_pane

0x5cc4,	// (0x000aed31) cell_vitu2_itu_pane_ParamLimits

0x5cc4,	// (0x000aed31) cell_vitu2_itu_pane

0x5cf0,	// (0x000aed5d) cell_vitu2_function_pane_ParamLimits

0x5cf0,	// (0x000aed5d) cell_vitu2_function_pane

0xd6e1,	// (0x000b674e) bg_popup_call_pane_cp08_ParamLimits

0xd6e1,	// (0x000b674e) bg_popup_call_pane_cp08

0xd6f8,	// (0x000b6765) field_vitu2_entry_pane_g1

0xd704,	// (0x000b6771) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x000b899b) field_vitu2_entry_pane_g

0x5d2f,	// (0x000aed9c) field_vitu2_entry_pane_t1_ParamLimits

0x5d2f,	// (0x000aed9c) field_vitu2_entry_pane_t1

0xa203,	// (0x000b3270) field_vitu2_entry_pane_t2_ParamLimits

0xa203,	// (0x000b3270) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x000b89a2) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x000b89a2) field_vitu2_entry_pane_t

0x5d5e,	// (0x000aedcb) bg_button_pane_cp010_ParamLimits

0x5d5e,	// (0x000aedcb) bg_button_pane_cp010

0x9c09,	// (0x000b2c76) cell_vitu2_itu_pane_g1

0x5d7a,	// (0x000aede7) cell_vitu2_itu_pane_t1_ParamLimits

0x5d7a,	// (0x000aede7) cell_vitu2_itu_pane_t1

0x0328,	// (0x000a9395) cell_vitu2_itu_pane_t2_ParamLimits

0x0328,	// (0x000a9395) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x000b89ac) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x000b89ac) cell_vitu2_itu_pane_t

0x94a7,	// (0x000b2514) bg_button_pane_cp011

0x5dd8,	// (0x000aee45) cell_vitu2_function_pane_g1

0x94b5,	// (0x000b2522) main_myfav_hc_pane

0x571d,	// (0x000ae78a) popup_image3_note_pane_ParamLimits

0x571d,	// (0x000ae78a) popup_image3_note_pane

0x5739,	// (0x000ae7a6) popup_image3_tool_bar_pane_ParamLimits

0x5739,	// (0x000ae7a6) popup_image3_tool_bar_pane

0x03b6,	// (0x000a9423) cell_vitu2_itu_pane_t3_ParamLimits

0x03b6,	// (0x000a9423) cell_vitu2_itu_pane_t3

0x943f,	// (0x000b24ac) bg_popup_trans_pane

0xd726,	// (0x000b6793) grid_image3_tool_bar_pane

0xd730,	// (0x000b679d) bg_popup_trans_pane_g1

0xad2c,	// (0x000b3d99) bg_popup_trans_pane_g2

0xd738,	// (0x000b67a5) bg_popup_trans_pane_g3

0xd740,	// (0x000b67ad) bg_popup_trans_pane_g4

0xd748,	// (0x000b67b5) bg_popup_trans_pane_g5

0xd750,	// (0x000b67bd) bg_popup_trans_pane_g6

0xd758,	// (0x000b67c5) bg_popup_trans_pane_g7

0xd760,	// (0x000b67cd) bg_popup_trans_pane_g8

0xad0c,	// (0x000b3d79) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x000b89b3) bg_popup_trans_pane_g

0xd768,	// (0x000b67d5) cell_image3_tool_bar_pane_ParamLimits

0xd768,	// (0x000b67d5) cell_image3_tool_bar_pane

0xcd88,	// (0x000b5df5) cell_image3_tool_bar_pane_g1

0x943f,	// (0x000b24ac) bg_popup_trans_pane_cp1

0xd77c,	// (0x000b67e9) popup_image3_note_pane_t1

0xd78a,	// (0x000b67f7) popup_image3_note_pane_t2

0xd798,	// (0x000b6805) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x000b89c6) popup_image3_note_pane_t

0xd7a6,	// (0x000b6813) popup_image3_note_pane_t3_copy1

0x5dec,	// (0x000aee59) bg_myfav_hc_instruction_pane_ParamLimits

0x5dec,	// (0x000aee59) bg_myfav_hc_instruction_pane

0x5e00,	// (0x000aee6d) cell_myfav_contact_pane_ParamLimits

0x5e00,	// (0x000aee6d) cell_myfav_contact_pane

0x5e1e,	// (0x000aee8b) cell_myfav_contact_pane_cp1_ParamLimits

0x5e1e,	// (0x000aee8b) cell_myfav_contact_pane_cp1

0x5e36,	// (0x000aeea3) cell_myfav_contact_pane_cp2_ParamLimits

0x5e36,	// (0x000aeea3) cell_myfav_contact_pane_cp2

0x5e4e,	// (0x000aeebb) cell_myfav_contact_pane_cp3_ParamLimits

0x5e4e,	// (0x000aeebb) cell_myfav_contact_pane_cp3

0x5e65,	// (0x000aeed2) cell_myfav_contact_pane_cp4_ParamLimits

0x5e65,	// (0x000aeed2) cell_myfav_contact_pane_cp4

0x5e7d,	// (0x000aeeea) cell_myfav_contact_pane_cp5_ParamLimits

0x5e7d,	// (0x000aeeea) cell_myfav_contact_pane_cp5

0x5e91,	// (0x000aeefe) cell_myfav_contact_pane_cp6_ParamLimits

0x5e91,	// (0x000aeefe) cell_myfav_contact_pane_cp6

0x5ea7,	// (0x000aef14) cell_myfav_contact_pane_cp7_ParamLimits

0x5ea7,	// (0x000aef14) cell_myfav_contact_pane_cp7

0xd7b4,	// (0x000b6821) listscroll_gen_pane_cp05

0x5ec1,	// (0x000aef2e) main_myfav_hc_pane_g1_ParamLimits

0x5ec1,	// (0x000aef2e) main_myfav_hc_pane_g1

0x5edb,	// (0x000aef48) main_myfav_hc_pane_g2_ParamLimits

0x5edb,	// (0x000aef48) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x000b89cd) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x000b89cd) main_myfav_hc_pane_g

0x5f0d,	// (0x000aef7a) main_myfav_hc_pane_t1_ParamLimits

0x5f0d,	// (0x000aef7a) main_myfav_hc_pane_t1

0xd7bd,	// (0x000b682a) main_myfav_hc_pane_t2_ParamLimits

0xd7bd,	// (0x000b682a) main_myfav_hc_pane_t2

0xd7cf,	// (0x000b683c) main_myfav_hc_pane_t3_ParamLimits

0xd7cf,	// (0x000b683c) main_myfav_hc_pane_t3

0x5f24,	// (0x000aef91) main_myfav_hc_pane_t4_ParamLimits

0x5f24,	// (0x000aef91) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x000b89d4) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x000b89d4) main_myfav_hc_pane_t

0xcd88,	// (0x000b5df5) bg_myfav_hc_instruction_pane_g1

0xd7e1,	// (0x000b684e) cell_myfav_contact_pane_g1_ParamLimits

0xd7e1,	// (0x000b684e) cell_myfav_contact_pane_g1

0xd7e1,	// (0x000b684e) cell_myfav_contact_pane_g2_ParamLimits

0xd7e1,	// (0x000b684e) cell_myfav_contact_pane_g2

0xd7ed,	// (0x000b685a) cell_myfav_contact_pane_g3_ParamLimits

0xd7ed,	// (0x000b685a) cell_myfav_contact_pane_g3

0xd032,	// (0x000b609f) cell_myfav_contact_pane_g4_ParamLimits

0xd032,	// (0x000b609f) cell_myfav_contact_pane_g4

0xd7fa,	// (0x000b6867) cell_myfav_contact_pane_g5_ParamLimits

0xd7fa,	// (0x000b6867) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x000b89df) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x000b89df) cell_myfav_contact_pane_g

0x5ef5,	// (0x000aef62) main_myfav_hc_pane_g3_ParamLimits

0x5ef5,	// (0x000aef62) main_myfav_hc_pane_g3

0x059b,	// (0x000a9608) popup_adpt_find_window

0x5f4c,	// (0x000aefb9) afind_page_pane_ParamLimits

0x5f4c,	// (0x000aefb9) afind_page_pane

0x5f61,	// (0x000aefce) aid_size_cell_afind_ParamLimits

0x5f61,	// (0x000aefce) aid_size_cell_afind

0x5f7f,	// (0x000aefec) bg_popup_sub_pane_cp09_ParamLimits

0x5f7f,	// (0x000aefec) bg_popup_sub_pane_cp09

0x5f8c,	// (0x000aeff9) find_pane_cp01_ParamLimits

0x5f8c,	// (0x000aeff9) find_pane_cp01

0xd806,	// (0x000b6873) grid_afind_control_pane_ParamLimits

0xd806,	// (0x000b6873) grid_afind_control_pane

0x5f99,	// (0x000af006) grid_afind_pane_ParamLimits

0x5f99,	// (0x000af006) grid_afind_pane

0x5fb8,	// (0x000af025) cell_afind_pane_ParamLimits

0x5fb8,	// (0x000af025) cell_afind_pane

0xcd88,	// (0x000b5df5) afind_page_pane_g1

0x601f,	// (0x000af08c) afind_page_pane_g2

0x6028,	// (0x000af095) afind_page_pane_g3

0x0002,

0xf97d,	// (0x000b89ea) afind_page_pane_g

0x6031,	// (0x000af09e) afind_page_pane_t1

0xd81a,	// (0x000b6887) cell_afind_grid_control_pane_ParamLimits

0xd81a,	// (0x000b6887) cell_afind_grid_control_pane

0xd697,	// (0x000b6704) bg_button_pane_cp69_ParamLimits

0xd697,	// (0x000b6704) bg_button_pane_cp69

0x6051,	// (0x000af0be) cell_afind_pane_g1_ParamLimits

0x6051,	// (0x000af0be) cell_afind_pane_g1

0x605e,	// (0x000af0cb) cell_afind_pane_t1_ParamLimits

0x605e,	// (0x000af0cb) cell_afind_pane_t1

0xab25,	// (0x000b3b92) bg_button_pane_cp72

0xd829,	// (0x000b6896) cell_afind_grid_control_pane_g1

0x3030,	// (0x000ac09d) aid_image_placing_area_ParamLimits

0x3030,	// (0x000ac09d) aid_image_placing_area

0xd358,	// (0x000b63c5) field_vitu_entry_pane_g1_ParamLimits

0xd358,	// (0x000b63c5) field_vitu_entry_pane_g1

0xd364,	// (0x000b63d1) field_vitu_entry_pane_g2_ParamLimits

0xd364,	// (0x000b63d1) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x000b8897) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x000b8897) field_vitu_entry_pane_g

0x517c,	// (0x000ae1e9) cell_vitu_itu_pane_g1_ParamLimits

0x51be,	// (0x000ae22b) cell_vitu_itu_pane_t3_ParamLimits

0x51be,	// (0x000ae22b) cell_vitu_itu_pane_t3

0xd640,	// (0x000b66ad) mp4_progress_pane_t1_ParamLimits

0xd659,	// (0x000b66c6) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x000b8930) mp4_progress_pane_t_ParamLimits

0xd672,	// (0x000b66df) mup_progress_pane_cp04_ParamLimits

0x5f38,	// (0x000aefa5) main_myfav_hc_pane_t5_ParamLimits

0x5f38,	// (0x000aefa5) main_myfav_hc_pane_t5

0x0464,	// (0x000a94d1) aid_zoom_text_primary

0x059b,	// (0x000a9608) popup_adpt_find_window_ParamLimits

0x94a7,	// (0x000b2514) main_cam_set_pane

0x5979,	// (0x000ae9e6) cam4_zoom_pane_ParamLimits

0x5979,	// (0x000ae9e6) cam4_zoom_pane

0x6070,	// (0x000af0dd) main_cam_set_pane_g1_ParamLimits

0x6070,	// (0x000af0dd) main_cam_set_pane_g1

0x607e,	// (0x000af0eb) main_cam_set_pane_g2_ParamLimits

0x607e,	// (0x000af0eb) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x000b89f1) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x000b89f1) main_cam_set_pane_g

0x609f,	// (0x000af10c) main_cam_set_pane_t1_ParamLimits

0x609f,	// (0x000af10c) main_cam_set_pane_t1

0x60ba,	// (0x000af127) main_cset_listscroll_pane_ParamLimits

0x60ba,	// (0x000af127) main_cset_listscroll_pane

0x60da,	// (0x000af147) main_cset_slider_pane_ParamLimits

0x60da,	// (0x000af147) main_cset_slider_pane

0xd83a,	// (0x000b68a7) main_cset_list_pane_ParamLimits

0xd83a,	// (0x000b68a7) main_cset_list_pane

0xd84a,	// (0x000b68b7) scroll_pane_cp028

0x6100,	// (0x000af16d) aid_area_touch_slider

0x611c,	// (0x000af189) cset_slider_pane

0x6146,	// (0x000af1b3) main_cset_slider_pane_g1

0x615b,	// (0x000af1c8) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x000b89f6) main_cset_slider_pane_g

0xd89b,	// (0x000b6908) main_cset_slider_pane_t1

0x61ff,	// (0x000af26c) main_cset_slider_pane_t2

0x6219,	// (0x000af286) main_cset_slider_pane_t3

0x6233,	// (0x000af2a0) main_cset_slider_pane_t4

0x624d,	// (0x000af2ba) main_cset_slider_pane_t5

0x6267,	// (0x000af2d4) main_cset_slider_pane_t6

0x627c,	// (0x000af2e9) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x000b8a1b) main_cset_slider_pane_t

0x6380,	// (0x000af3ed) cset_list_set_pane_ParamLimits

0x6380,	// (0x000af3ed) cset_list_set_pane

0x6392,	// (0x000af3ff) aid_position_infowindow_above

0x639a,	// (0x000af407) aid_position_infowindow_below

0x63a2,	// (0x000af40f) cset_list_set_pane_g1_ParamLimits

0x63a2,	// (0x000af40f) cset_list_set_pane_g1

0x63ae,	// (0x000af41b) cset_list_set_pane_g3_ParamLimits

0x63ae,	// (0x000af41b) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x000b8a3a) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x000b8a3a) cset_list_set_pane_g

0x63bd,	// (0x000af42a) cset_list_set_pane_t1_ParamLimits

0x63bd,	// (0x000af42a) cset_list_set_pane_t1

0xa181,	// (0x000b31ee) list_highlight_pane_cp021_ParamLimits

0xa181,	// (0x000b31ee) list_highlight_pane_cp021

0xb65c,	// (0x000b46c9) cset_slider_pane_g1

0xb66e,	// (0x000b46db) cset_slider_pane_g2

0xb665,	// (0x000b46d2) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x000b8a3f) cset_slider_pane_g

0x9c1b,	// (0x000b2c88) aid_area_touch_cam4_zoom

0x9c23,	// (0x000b2c90) cam4_zoom_cont_pane

0x9c2b,	// (0x000b2c98) cam4_zoom_pane_g1

0x9c33,	// (0x000b2ca0) cam4_zoom_pane_g2

0x63d2,	// (0x000af43f) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x000b8a46) cam4_zoom_pane_g

0x9c3b,	// (0x000b2ca8) cam4_zoom_cont_pane_g1

0x9c44,	// (0x000b2cb1) cam4_zoom_cont_pane_g2

0x9c4d,	// (0x000b2cba) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x000b8a4d) cam4_zoom_cont_pane_g

0x57a6,	// (0x000ae813) call4_image_pane_ParamLimits

0x57a6,	// (0x000ae813) call4_image_pane

0x580d,	// (0x000ae87a) call4_windows_conf_pane_ParamLimits

0x5852,	// (0x000ae8bf) popup_call4_audio_in_window_ParamLimits

0x5852,	// (0x000ae8bf) popup_call4_audio_in_window

0x943f,	// (0x000b24ac) bg_popup_call2_act_pane_cp02

0xd6a3,	// (0x000b6710) call4_list_conf_pane

0xcd88,	// (0x000b5df5) call4_image_pane_g1

0xcd88,	// (0x000b5df5) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x000b8758) call4_image_pane_g

0xd93b,	// (0x000b69a8) list_single_graphic_popup_conf4_pane_ParamLimits

0xd93b,	// (0x000b69a8) list_single_graphic_popup_conf4_pane

0x943f,	// (0x000b24ac) list_highlight_pane_cp022

0xd94e,	// (0x000b69bb) list_single_graphic_popup_conf4_pane_g1

0xb258,	// (0x000b42c5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x000b8a54) list_single_graphic_popup_conf4_pane_g

0xd956,	// (0x000b69c3) list_single_graphic_popup_conf4_pane_t1

0x1668,	// (0x000aa6d5) popup_vtel_slider_window_ParamLimits

0x1668,	// (0x000aa6d5) popup_vtel_slider_window

0xd685,	// (0x000b66f2) dialer2_ne_pane_t2_ParamLimits

0xd685,	// (0x000b66f2) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x000b8935) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x000b8935) dialer2_ne_pane_t

0xcb6d,	// (0x000b5bda) bg_popup_sub_pane_cp010_ParamLimits

0xcb6d,	// (0x000b5bda) bg_popup_sub_pane_cp010

0x63da,	// (0x000af447) popup_vtel_slider_window_g1_ParamLimits

0x63da,	// (0x000af447) popup_vtel_slider_window_g1

0x63ed,	// (0x000af45a) popup_vtel_slider_window_g2_ParamLimits

0x63ed,	// (0x000af45a) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x000b8a59) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x000b8a59) popup_vtel_slider_window_g

0x6443,	// (0x000af4b0) vtel_slider_pane_ParamLimits

0x6443,	// (0x000af4b0) vtel_slider_pane

0x6465,	// (0x000af4d2) vtel_slider_pane_g1_ParamLimits

0x6465,	// (0x000af4d2) vtel_slider_pane_g1

0x6479,	// (0x000af4e6) vtel_slider_pane_g2_ParamLimits

0x6479,	// (0x000af4e6) vtel_slider_pane_g2

0x6491,	// (0x000af4fe) vtel_slider_pane_g3_ParamLimits

0x6491,	// (0x000af4fe) vtel_slider_pane_g3

0x6465,	// (0x000af4d2) vtel_slider_pane_g4_ParamLimits

0x6465,	// (0x000af4d2) vtel_slider_pane_g4

0x64a7,	// (0x000af514) vtel_slider_pane_g5_ParamLimits

0x64a7,	// (0x000af514) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x000b8a62) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x000b8a62) vtel_slider_pane_g

0x94a7,	// (0x000b2514) main_gallery2_pane

0x5b79,	// (0x000aebe6) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b79,	// (0x000aebe6) aid_size_row_itut2_dropdow_list

0x5c05,	// (0x000aec72) grid_vitu2_function_top_pane_ParamLimits

0x5c05,	// (0x000aec72) grid_vitu2_function_top_pane

0x5c6f,	// (0x000aecdc) popup_vitu2_dropdown_list_window_ParamLimits

0x5c6f,	// (0x000aecdc) popup_vitu2_dropdown_list_window

0x5c98,	// (0x000aed05) popup_vitu2_match_list_window

0x64cb,	// (0x000af538) cell_vitu2_function_top_pane_ParamLimits

0x64cb,	// (0x000af538) cell_vitu2_function_top_pane

0x64e3,	// (0x000af550) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64e3,	// (0x000af550) cell_vitu2_function_top_pane_cp01

0x64ff,	// (0x000af56c) cell_vitu2_function_top_wide_pane_ParamLimits

0x64ff,	// (0x000af56c) cell_vitu2_function_top_wide_pane

0x94a7,	// (0x000b2514) bg_button_pane_cp012

0x651b,	// (0x000af588) cell_vitu2_function_top_pane_g1

0x9c56,	// (0x000b2cc3) bg_button_pane_cp013_ParamLimits

0x9c56,	// (0x000b2cc3) bg_button_pane_cp013

0x652f,	// (0x000af59c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x652f,	// (0x000af59c) cell_vitu2_function_top_wide_pane_g1

0x94a7,	// (0x000b2514) bg_popup_sub_pane_cp20

0x6547,	// (0x000af5b4) list_vitu2_match_list_pane

0xd730,	// (0x000b679d) bg_popup_sub_pane_cp20_g1

0xd738,	// (0x000b67a5) bg_popup_sub_pane_cp20_g2

0xad2c,	// (0x000b3d99) bg_popup_sub_pane_cp20_g3

0xd740,	// (0x000b67ad) bg_popup_sub_pane_cp20_g4

0xad0c,	// (0x000b3d79) bg_popup_sub_pane_cp20_g5

0xd96c,	// (0x000b69d9) bg_popup_sub_pane_cp20_g6

0xd750,	// (0x000b67bd) bg_popup_sub_pane_cp20_g7

0xd758,	// (0x000b67c5) bg_popup_sub_pane_cp20_g8

0xd760,	// (0x000b67cd) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x000b8a6d) bg_popup_sub_pane_cp20_g

0x9c72,	// (0x000b2cdf) list_vitu2_match_list_item_pane_ParamLimits

0x9c72,	// (0x000b2cdf) list_vitu2_match_list_item_pane

0x9c84,	// (0x000b2cf1) list_vitu2_match_list_item_pane_t1

0x94b5,	// (0x000b2522) bg_popup_sub_pane_cp21

0x9c92,	// (0x000b2cff) grid_vitu2_dropdown_list_pane

0x65b5,	// (0x000af622) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x65b5,	// (0x000af622) cell_vitu2_dropdown_list_char_pane

0x65d6,	// (0x000af643) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65d6,	// (0x000af643) cell_vitu2_dropdown_list_ctrl_pane

0xd974,	// (0x000b69e1) cell_vitu2_dropdown_list_char_pane_g1

0xd97d,	// (0x000b69ea) cell_vitu2_dropdown_list_char_pane_g2

0xd986,	// (0x000b69f3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x000b8a8a) cell_vitu2_dropdown_list_char_pane_g

0x6602,	// (0x000af66f) cell_vitu2_dropdown_list_char_pane_t1

0x6610,	// (0x000af67d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6610,	// (0x000af67d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x661d,	// (0x000af68a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x661d,	// (0x000af68a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x662a,	// (0x000af697) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x662a,	// (0x000af697) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6637,	// (0x000af6a4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6637,	// (0x000af6a4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9b34,	// (0x000b2ba1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9b34,	// (0x000b2ba1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x000b8a91) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x000b8a91) cell_vitu2_dropdown_list_ctrl_pane_g

0x6653,	// (0x000af6c0) aid_size_cell_gallery2_ParamLimits

0x6653,	// (0x000af6c0) aid_size_cell_gallery2

0x6671,	// (0x000af6de) grid_gallery2_pane_ParamLimits

0x6671,	// (0x000af6de) grid_gallery2_pane

0x668b,	// (0x000af6f8) scroll_pane_cp029_ParamLimits

0x668b,	// (0x000af6f8) scroll_pane_cp029

0x669c,	// (0x000af709) cell_gallery2_pane_ParamLimits

0x669c,	// (0x000af709) cell_gallery2_pane

0xd98f,	// (0x000b69fc) cell_gallery2_pane_g2

0x66fb,	// (0x000af768) cell_gallery2_pane_g3

0xd997,	// (0x000b6a04) cell_gallery2_pane_g4

0xd99f,	// (0x000b6a0c) cell_gallery2_pane_g5

0xaad3,	// (0x000b3b40) grid_highlight_pane_cp10

0x5c98,	// (0x000aed05) popup_vitu2_match_list_window_ParamLimits

0x5cad,	// (0x000aed1a) popup_vitu2_query_window_ParamLimits

0x5cad,	// (0x000aed1a) popup_vitu2_query_window

0x94b5,	// (0x000b2522) bg_vitu2_candi_button_pane

0xd974,	// (0x000b69e1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd97d,	// (0x000b69ea) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd986,	// (0x000b69f3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6703,	// (0x000af770) bg_button_pane_cp015

0x6717,	// (0x000af784) bg_button_pane_cp016

0x672a,	// (0x000af797) bg_button_pane_cp017

0xc980,	// (0x000b59ed) bg_popup_sub_pane_cp22

0xd9a7,	// (0x000b6a14) popup_vitu2_query_window_g1

0x676f,	// (0x000af7dc) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x000b8a9c) popup_vitu2_query_window_g

0x678e,	// (0x000af7fb) popup_vitu2_query_window_t1_ParamLimits

0x678e,	// (0x000af7fb) popup_vitu2_query_window_t1

0x67c3,	// (0x000af830) popup_vitu2_query_window_t2_ParamLimits

0x67c3,	// (0x000af830) popup_vitu2_query_window_t2

0x67d5,	// (0x000af842) popup_vitu2_query_window_t3_ParamLimits

0x67d5,	// (0x000af842) popup_vitu2_query_window_t3

0x67fd,	// (0x000af86a) popup_vitu2_query_window_t4_ParamLimits

0x67fd,	// (0x000af86a) popup_vitu2_query_window_t4

0x681e,	// (0x000af88b) popup_vitu2_query_window_t5_ParamLimits

0x681e,	// (0x000af88b) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x000b8aa3) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x000b8aa3) popup_vitu2_query_window_t

0xd832,	// (0x000b689f) main_cset_text_pane

0x6100,	// (0x000af16d) aid_area_touch_slider_ParamLimits

0x611c,	// (0x000af189) cset_slider_pane_ParamLimits

0x6146,	// (0x000af1b3) main_cset_slider_pane_g1_ParamLimits

0x615b,	// (0x000af1c8) main_cset_slider_pane_g2_ParamLimits

0xd853,	// (0x000b68c0) main_cset_slider_pane_g3_ParamLimits

0xd853,	// (0x000b68c0) main_cset_slider_pane_g3

0x6170,	// (0x000af1dd) main_cset_slider_pane_g4_ParamLimits

0x6170,	// (0x000af1dd) main_cset_slider_pane_g4

0x617f,	// (0x000af1ec) main_cset_slider_pane_g5_ParamLimits

0x617f,	// (0x000af1ec) main_cset_slider_pane_g5

0x618b,	// (0x000af1f8) main_cset_slider_pane_g6_ParamLimits

0x618b,	// (0x000af1f8) main_cset_slider_pane_g6

0xf989,	// (0x000b89f6) main_cset_slider_pane_g_ParamLimits

0xd89b,	// (0x000b6908) main_cset_slider_pane_t1_ParamLimits

0x61ff,	// (0x000af26c) main_cset_slider_pane_t2_ParamLimits

0x6219,	// (0x000af286) main_cset_slider_pane_t3_ParamLimits

0x6233,	// (0x000af2a0) main_cset_slider_pane_t4_ParamLimits

0x624d,	// (0x000af2ba) main_cset_slider_pane_t5_ParamLimits

0x6267,	// (0x000af2d4) main_cset_slider_pane_t6_ParamLimits

0x627c,	// (0x000af2e9) main_cset_slider_pane_t7_ParamLimits

0x62a6,	// (0x000af313) main_cset_slider_pane_t8_ParamLimits

0x62a6,	// (0x000af313) main_cset_slider_pane_t8

0x62ce,	// (0x000af33b) main_cset_slider_pane_t9_ParamLimits

0x62ce,	// (0x000af33b) main_cset_slider_pane_t9

0x62f6,	// (0x000af363) main_cset_slider_pane_t10_ParamLimits

0x62f6,	// (0x000af363) main_cset_slider_pane_t10

0x631e,	// (0x000af38b) main_cset_slider_pane_t11_ParamLimits

0x631e,	// (0x000af38b) main_cset_slider_pane_t11

0x6346,	// (0x000af3b3) main_cset_slider_pane_t12_ParamLimits

0x6346,	// (0x000af3b3) main_cset_slider_pane_t12

0x6363,	// (0x000af3d0) main_cset_slider_pane_t13_ParamLimits

0x6363,	// (0x000af3d0) main_cset_slider_pane_t13

0xf9ae,	// (0x000b8a1b) main_cset_slider_pane_t_ParamLimits

0x943f,	// (0x000b24ac) bg_popup_sub_pane_cp011

0xd9b3,	// (0x000b6a20) main_cset_text_pane_g1

0xd9bb,	// (0x000b6a28) main_cset_text_pane_t1

0xd9c9,	// (0x000b6a36) main_cset_text_pane_t2

0xd9d7,	// (0x000b6a44) main_cset_text_pane_t3

0xd9e5,	// (0x000b6a52) main_cset_text_pane_t4

0xd9f3,	// (0x000b6a60) main_cset_text_pane_t5

0xda01,	// (0x000b6a6e) main_cset_text_pane_t6

0xda0f,	// (0x000b6a7c) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x000b8ab2) main_cset_text_pane_t

0x94b5,	// (0x000b2522) main_cam4_burst_pane

0x94b5,	// (0x000b2522) main_cam5_pane

0x603f,	// (0x000af0ac) bg_button_pane_cp019

0x6048,	// (0x000af0b5) bg_button_pane_cp020

0xd85f,	// (0x000b68cc) main_cset_slider_pane_g7_ParamLimits

0xd85f,	// (0x000b68cc) main_cset_slider_pane_g7

0xd86b,	// (0x000b68d8) main_cset_slider_pane_g8_ParamLimits

0xd86b,	// (0x000b68d8) main_cset_slider_pane_g8

0x619f,	// (0x000af20c) main_cset_slider_pane_g9_ParamLimits

0x619f,	// (0x000af20c) main_cset_slider_pane_g9

0x61ab,	// (0x000af218) main_cset_slider_pane_g10_ParamLimits

0x61ab,	// (0x000af218) main_cset_slider_pane_g10

0x61b7,	// (0x000af224) main_cset_slider_pane_g11_ParamLimits

0x61b7,	// (0x000af224) main_cset_slider_pane_g11

0x61c3,	// (0x000af230) main_cset_slider_pane_g12_ParamLimits

0x61c3,	// (0x000af230) main_cset_slider_pane_g12

0x61cf,	// (0x000af23c) main_cset_slider_pane_g13_ParamLimits

0x61cf,	// (0x000af23c) main_cset_slider_pane_g13

0x61db,	// (0x000af248) main_cset_slider_pane_g14_ParamLimits

0x61db,	// (0x000af248) main_cset_slider_pane_g14

0x61e7,	// (0x000af254) main_cset_slider_pane_g15_ParamLimits

0x61e7,	// (0x000af254) main_cset_slider_pane_g15

0xd8c9,	// (0x000b6936) main_cset_slider_pane_t14_ParamLimits

0xd8c9,	// (0x000b6936) main_cset_slider_pane_t14

0xd902,	// (0x000b696f) main_cset_slider_pane_t15_ParamLimits

0xd902,	// (0x000b696f) main_cset_slider_pane_t15

0x6895,	// (0x000af902) aid_cam4_burst_size_cell_ParamLimits

0x6895,	// (0x000af902) aid_cam4_burst_size_cell

0x68b5,	// (0x000af922) grid_cam4_burst_pane_ParamLimits

0x68b5,	// (0x000af922) grid_cam4_burst_pane

0x68ed,	// (0x000af95a) linegrid_cam4_burst_pane_ParamLimits

0x68ed,	// (0x000af95a) linegrid_cam4_burst_pane

0xda1d,	// (0x000b6a8a) scroll_pane_cp30_ParamLimits

0xda1d,	// (0x000b6a8a) scroll_pane_cp30

0x6911,	// (0x000af97e) cell_cam4_burst_pane_ParamLimits

0x6911,	// (0x000af97e) cell_cam4_burst_pane

0xda29,	// (0x000b6a96) linegrid_cam4_burst_pane_g1_ParamLimits

0xda29,	// (0x000b6a96) linegrid_cam4_burst_pane_g1

0x695e,	// (0x000af9cb) linegrid_cam4_burst_pane_g2_ParamLimits

0x695e,	// (0x000af9cb) linegrid_cam4_burst_pane_g2

0xda36,	// (0x000b6aa3) linegrid_cam4_burst_pane_g3_ParamLimits

0xda36,	// (0x000b6aa3) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000b8ac1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000b8ac1) linegrid_cam4_burst_pane_g

0x696f,	// (0x000af9dc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x696f,	// (0x000af9dc) linegrid_cam4_burst_pane_g3_copy1

0xda43,	// (0x000b6ab0) linegrid_cam4_burst_pane_g4_ParamLimits

0xda43,	// (0x000b6ab0) linegrid_cam4_burst_pane_g4

0x6989,	// (0x000af9f6) linegrid_cam4_burst_pane_g5_ParamLimits

0x6989,	// (0x000af9f6) linegrid_cam4_burst_pane_g5

0x699a,	// (0x000afa07) linegrid_cam4_burst_pane_g6_ParamLimits

0x699a,	// (0x000afa07) linegrid_cam4_burst_pane_g6

0xda50,	// (0x000b6abd) linegrid_cam4_burst_pane_g7_ParamLimits

0xda50,	// (0x000b6abd) linegrid_cam4_burst_pane_g7

0x69b1,	// (0x000afa1e) cell_cam4_burst_pane_g1

0xda69,	// (0x000b6ad6) main_cam5_pane_t1_ParamLimits

0xda69,	// (0x000b6ad6) main_cam5_pane_t1

0xda7b,	// (0x000b6ae8) main_cam5_pane_t2_ParamLimits

0xda7b,	// (0x000b6ae8) main_cam5_pane_t2

0xda8d,	// (0x000b6afa) main_cam5_pane_t3_ParamLimits

0xda8d,	// (0x000b6afa) main_cam5_pane_t3

0xda9f,	// (0x000b6b0c) main_cam5_pane_t4_ParamLimits

0xda9f,	// (0x000b6b0c) main_cam5_pane_t4

0xdab7,	// (0x000b6b24) main_cam5_pane_t5_ParamLimits

0xdab7,	// (0x000b6b24) main_cam5_pane_t5

0xdacb,	// (0x000b6b38) main_cam5_pane_t6_ParamLimits

0xdacb,	// (0x000b6b38) main_cam5_pane_t6

0xdadf,	// (0x000b6b4c) main_cam5_pane_t7_ParamLimits

0xdadf,	// (0x000b6b4c) main_cam5_pane_t7

0xdaf1,	// (0x000b6b5e) main_cam5_pane_t8_ParamLimits

0xdaf1,	// (0x000b6b5e) main_cam5_pane_t8

0xdb0d,	// (0x000b6b7a) main_cam5_pane_t9_ParamLimits

0xdb0d,	// (0x000b6b7a) main_cam5_pane_t9

0xdb1f,	// (0x000b6b8c) main_cam5_pane_t10_ParamLimits

0xdb1f,	// (0x000b6b8c) main_cam5_pane_t10

0xdb31,	// (0x000b6b9e) main_cam5_pane_t11_ParamLimits

0xdb31,	// (0x000b6b9e) main_cam5_pane_t11

0xdb43,	// (0x000b6bb0) main_cam5_pane_t12_ParamLimits

0xdb43,	// (0x000b6bb0) main_cam5_pane_t12

0xdb58,	// (0x000b6bc5) main_cam5_pane_t13_ParamLimits

0xdb58,	// (0x000b6bc5) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000b8acd) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000b8acd) main_cam5_pane_t

0x061d,	// (0x000a968a) popup_scut_keymap_window_ParamLimits

0x061d,	// (0x000a968a) popup_scut_keymap_window

0x69c4,	// (0x000afa31) aid_size_cell_brow_shortcut

0xaad3,	// (0x000b3b40) bg_popup_window_pane_cp010

0x69d0,	// (0x000afa3d) grid_scut_pane

0x69dc,	// (0x000afa49) cell_scut_pane_ParamLimits

0x69dc,	// (0x000afa49) cell_scut_pane

0x69f3,	// (0x000afa60) cell_scut_pane_g1

0xdb75,	// (0x000b6be2) cell_scut_pane_t1

0xdb84,	// (0x000b6bf1) cell_scut_pane_t2

0x69fc,	// (0x000afa69) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000b8ae8) cell_scut_pane_t

0x4679,	// (0x000ad6e6) main_mup3_pane_g8_ParamLimits

0x4679,	// (0x000ad6e6) main_mup3_pane_g8

0x5b91,	// (0x000aebfe) area_vitu2_query_pane_ParamLimits

0x5b91,	// (0x000aebfe) area_vitu2_query_pane

0x673d,	// (0x000af7aa) input_focus_pane_cp08

0xdb93,	// (0x000b6c00) area_vitu2_query_pane_g1

0x6a0a,	// (0x000afa77) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000b8aef) area_vitu2_query_pane_g

0x6a1b,	// (0x000afa88) area_vitu2_query_pane_t1_ParamLimits

0x6a1b,	// (0x000afa88) area_vitu2_query_pane_t1

0x6a2f,	// (0x000afa9c) area_vitu2_query_pane_t2_ParamLimits

0x6a2f,	// (0x000afa9c) area_vitu2_query_pane_t2

0x6a43,	// (0x000afab0) area_vitu2_query_pane_t3_ParamLimits

0x6a43,	// (0x000afab0) area_vitu2_query_pane_t3

0xa220,	// (0x000b328d) area_vitu2_query_pane_t4_ParamLimits

0xa220,	// (0x000b328d) area_vitu2_query_pane_t4

0xa248,	// (0x000b32b5) area_vitu2_query_pane_t5_ParamLimits

0xa248,	// (0x000b32b5) area_vitu2_query_pane_t5

0xa270,	// (0x000b32dd) area_vitu2_query_pane_t6_ParamLimits

0xa270,	// (0x000b32dd) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000b8af4) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000b8af4) area_vitu2_query_pane_t

0x6a6b,	// (0x000afad8) bg_button_pane_cp018

0x6a79,	// (0x000afae6) bg_button_pane_cp021

0x6a85,	// (0x000afaf2) bg_button_pane_cp022

0x6a96,	// (0x000afb03) input_focus_pane_cp09

0xb367,	// (0x000b43d4) aid_size_touch_mv_arrow_left

0xb392,	// (0x000b43ff) aid_size_touch_mv_arrow_right

0xd877,	// (0x000b68e4) main_cset_slider_pane_g16_ParamLimits

0xd877,	// (0x000b68e4) main_cset_slider_pane_g16

0xd883,	// (0x000b68f0) main_cset_slider_pane_g17_ParamLimits

0xd883,	// (0x000b68f0) main_cset_slider_pane_g17

0x69b1,	// (0x000afa1e) cell_cam4_burst_pane_g1_ParamLimits

0x943f,	// (0x000b24ac) compa_mode_pane

0x63fd,	// (0x000af46a) popup_vtel_slider_window_g3_ParamLimits

0x63fd,	// (0x000af46a) popup_vtel_slider_window_g3

0x6414,	// (0x000af481) popup_vtel_slider_window_g4_ParamLimits

0x6414,	// (0x000af481) popup_vtel_slider_window_g4

0x642b,	// (0x000af498) popup_vtel_slider_window_t1_ParamLimits

0x642b,	// (0x000af498) popup_vtel_slider_window_t1

0x94b5,	// (0x000b2522) main_cl_pane

0x9732,	// (0x000b279f) popup_imed_adjust2_window_ParamLimits

0xc980,	// (0x000b59ed) bg_tb_trans_pane_cp05_ParamLimits

0xd28d,	// (0x000b62fa) popup_imed_adjust2_window_g1_ParamLimits

0xd29c,	// (0x000b6309) popup_imed_adjust2_window_g2_ParamLimits

0xd29c,	// (0x000b6309) popup_imed_adjust2_window_g2

0xd2a8,	// (0x000b6315) popup_imed_adjust2_window_g3_ParamLimits

0xd2a8,	// (0x000b6315) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x000b885b) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x000b885b) popup_imed_adjust2_window_g

0xd2b4,	// (0x000b6321) popup_imed_adjust2_window_t1_ParamLimits

0xd2cc,	// (0x000b6339) slider_imed_adjust_pane_ParamLimits

0xd2e0,	// (0x000b634d) slider_imed_adjust_pane_g1_ParamLimits

0xd2f0,	// (0x000b635d) slider_imed_adjust_pane_g2_ParamLimits

0xd300,	// (0x000b636d) slider_imed_adjust_pane_g3_ParamLimits

0xd311,	// (0x000b637e) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x000b8862) slider_imed_adjust_pane_g_ParamLimits

0x591a,	// (0x000ae987) aid_touch_area_cam4_ParamLimits

0x591a,	// (0x000ae987) aid_touch_area_cam4

0x9b18,	// (0x000b2b85) battery_pane_cp01

0x59e9,	// (0x000aea56) main_camera4_pane_g6_ParamLimits

0x59e9,	// (0x000aea56) main_camera4_pane_g6

0x5a13,	// (0x000aea80) main_camera4_pane_t2_ParamLimits

0x5a13,	// (0x000aea80) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x000b8969) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x000b8969) main_camera4_pane_t

0x5a48,	// (0x000aeab5) aid_touch_area_vid4_ParamLimits

0x5a48,	// (0x000aeab5) aid_touch_area_vid4

0x5a9c,	// (0x000aeb09) main_video4_pane_g5_ParamLimits

0x5a9c,	// (0x000aeb09) main_video4_pane_g5

0x5ac1,	// (0x000aeb2e) vid4_progress_pane_ParamLimits

0x5ac1,	// (0x000aeb2e) vid4_progress_pane

0xd88f,	// (0x000b68fc) main_cset_slider_pane_g18_ParamLimits

0xd88f,	// (0x000b68fc) main_cset_slider_pane_g18

0xda5d,	// (0x000b6aca) cell_cam4_burst_pane_g2_ParamLimits

0xda5d,	// (0x000b6aca) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000b8ac8) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000b8ac8) cell_cam4_burst_pane_g

0xa8e7,	// (0x000b3954) bg_cl_pane_ParamLimits

0xa8e7,	// (0x000b3954) bg_cl_pane

0x6aa7,	// (0x000afb14) cl_header_pane_ParamLimits

0x6aa7,	// (0x000afb14) cl_header_pane

0x6abb,	// (0x000afb28) cl_listscroll_pane_ParamLimits

0x6abb,	// (0x000afb28) cl_listscroll_pane

0xdb9f,	// (0x000b6c0c) bg_cl_pane_g1

0xdba7,	// (0x000b6c14) bg_cl_pane_g2

0xdbaf,	// (0x000b6c1c) bg_cl_pane_g3

0xdbb7,	// (0x000b6c24) bg_cl_pane_g4

0xdbbf,	// (0x000b6c2c) bg_cl_pane_g5

0xdbc7,	// (0x000b6c34) bg_cl_pane_g6

0xdbcf,	// (0x000b6c3c) bg_cl_pane_g7

0xdbd7,	// (0x000b6c44) bg_cl_pane_g8

0xdbdf,	// (0x000b6c4c) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000b8b03) bg_cl_pane_g

0x6acb,	// (0x000afb38) aid_height_cl_leading_ParamLimits

0x6acb,	// (0x000afb38) aid_height_cl_leading

0x6ad7,	// (0x000afb44) aid_height_cl_text_ParamLimits

0x6ad7,	// (0x000afb44) aid_height_cl_text

0xa181,	// (0x000b31ee) bg_cl_header_pane_ParamLimits

0xa181,	// (0x000b31ee) bg_cl_header_pane

0x6af6,	// (0x000afb63) cl_header_pane_g1_ParamLimits

0x6af6,	// (0x000afb63) cl_header_pane_g1

0x6b0c,	// (0x000afb79) cl_header_pane_t1_ParamLimits

0x6b0c,	// (0x000afb79) cl_header_pane_t1

0xdbe7,	// (0x000b6c54) cl_list_pane

0xd84a,	// (0x000b68b7) hc_scroll_pane_cp01

0xad0c,	// (0x000b3d79) bg_cl_header_pane_g1

0xd730,	// (0x000b679d) bg_cl_header_pane_g2

0xad2c,	// (0x000b3d99) bg_cl_header_pane_g3

0xd740,	// (0x000b67ad) bg_cl_header_pane_g4

0xd738,	// (0x000b67a5) bg_cl_header_pane_g5

0xd96c,	// (0x000b69d9) bg_cl_header_pane_g6

0xd758,	// (0x000b67c5) bg_cl_header_pane_g7

0xd760,	// (0x000b67cd) bg_cl_header_pane_g8

0xd750,	// (0x000b67bd) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x000b8b16) bg_cl_header_pane_g

0x6b25,	// (0x000afb92) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b25,	// (0x000afb92) hc_cl_list_double_graphic_heading_pane

0x6b36,	// (0x000afba3) hc_cl_list_single_graphic_pane_ParamLimits

0x6b36,	// (0x000afba3) hc_cl_list_single_graphic_pane

0x6b4f,	// (0x000afbbc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b4f,	// (0x000afbbc) hc_cl_list_single_graphic_pane_g1

0x6b5b,	// (0x000afbc8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b5b,	// (0x000afbc8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x000b8b29) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x000b8b29) hc_cl_list_single_graphic_pane_g

0x6b6f,	// (0x000afbdc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b6f,	// (0x000afbdc) hc_cl_list_single_graphic_pane_t1

0x6b4f,	// (0x000afbbc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b4f,	// (0x000afbbc) hc_cl_list_double_graphic_heading_pane_g1

0x6b84,	// (0x000afbf1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b84,	// (0x000afbf1) hc_cl_list_double_graphic_heading_pane_g2

0x6b98,	// (0x000afc05) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b98,	// (0x000afc05) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x000b8b2e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x000b8b2e) hc_cl_list_double_graphic_heading_pane_g

0x6bac,	// (0x000afc19) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6bac,	// (0x000afc19) hc_cl_list_double_graphic_heading_pane_t1

0x6bc1,	// (0x000afc2e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6bc1,	// (0x000afc2e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x000b8b35) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x000b8b35) hc_cl_list_double_graphic_heading_pane_t

0x9ca2,	// (0x000b2d0f) vid4_progress_pane_g1

0x9cb2,	// (0x000b2d1f) vid4_progress_pane_g2

0x6bd6,	// (0x000afc43) vid4_progress_pane_g3

0x9cc2,	// (0x000b2d2f) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x000b8b3a) vid4_progress_pane_g

0x6be8,	// (0x000afc55) vid4_progress_pane_t1

0x9cda,	// (0x000b2d47) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x000b8b45) vid4_progress_pane_t

0x6bfe,	// (0x000afc6b) wait_bar_pane_cp07

0xcb7b,	// (0x000b5be8) blid_firmament_pane_ParamLimits

0xcbbe,	// (0x000b5c2b) popup_blid_sat_info2_window_g1

0xcbe2,	// (0x000b5c4f) popup_blid_sat_info2_window_t3

0xcbf0,	// (0x000b5c5d) popup_blid_sat_info2_window_t4

0xcbfe,	// (0x000b5c6b) popup_blid_sat_info2_window_t5

0xcc0c,	// (0x000b5c79) popup_blid_sat_info2_window_t6

0xcc1c,	// (0x000b5c89) popup_blid_sat_info2_window_t7

0xcc2a,	// (0x000b5c97) popup_blid_sat_info2_window_t8

0xcc38,	// (0x000b5ca5) popup_blid_sat_info2_window_t9

0xcc46,	// (0x000b5cb3) popup_blid_sat_info2_window_t10

0xcd08,	// (0x000b5d75) aid_firma_cardinal_ParamLimits

0xcd1c,	// (0x000b5d89) blid_firmament_pane_t1_ParamLimits

0xcd33,	// (0x000b5da0) blid_firmament_pane_t2_ParamLimits

0xcd4a,	// (0x000b5db7) blid_firmament_pane_t3_ParamLimits

0xcd61,	// (0x000b5dce) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x000b874f) blid_firmament_pane_t_ParamLimits

0xcd78,	// (0x000b5de5) blid_sat_info_pane_ParamLimits

0x94a7,	// (0x000b2514) main_cam_set_pane_ParamLimits

0x4f34,	// (0x000adfa1) aid_size_cell_colour_35_ParamLimits

0x4f54,	// (0x000adfc1) aid_size_cell_colour_112_ParamLimits

0x4f74,	// (0x000adfe1) aid_size_cell_effect_ParamLimits

0xc980,	// (0x000b59ed) bg_tb_trans_pane_cp02_ParamLimits

0xaf86,	// (0x000b3ff3) heading_imed_pane_ParamLimits

0x4f94,	// (0x000ae001) listscroll_imed_pane_ParamLimits

0xbf57,	// (0x000b4fc4) popup_call2_audio_first_window_g5_ParamLimits

0xbf57,	// (0x000b4fc4) popup_call2_audio_first_window_g5

0x5532,	// (0x000ae59f) aid_size_touch_image3_arrow_left_ParamLimits

0x5532,	// (0x000ae59f) aid_size_touch_image3_arrow_left

0x555e,	// (0x000ae5cb) aid_size_touch_image3_arrow_right_ParamLimits

0x555e,	// (0x000ae5cb) aid_size_touch_image3_arrow_right

0x9cef,	// (0x000b2d5c) vid4_progress_pane_t3

0x52a9,	// (0x000ae316) main_hwr_training_symbol_option_pane_ParamLimits

0x52a9,	// (0x000ae316) main_hwr_training_symbol_option_pane

0xd57a,	// (0x000b65e7) popup_hwr_training_preview_window_ParamLimits

0xd57a,	// (0x000b65e7) popup_hwr_training_preview_window

0x52c9,	// (0x000ae336) hwr_training_navi_pane_g5_ParamLimits

0x52c9,	// (0x000ae336) hwr_training_navi_pane_g5

0xd71e,	// (0x000b678b) popup_char_count_window

0x94a7,	// (0x000b2514) bg_popup_sub_pane_cp20_ParamLimits

0x6547,	// (0x000af5b4) list_vitu2_match_list_pane_ParamLimits

0x6556,	// (0x000af5c3) vitu2_page_scroll_pane_ParamLimits

0x6556,	// (0x000af5c3) vitu2_page_scroll_pane

0xdbf0,	// (0x000b6c5d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbf0,	// (0x000b6c5d) list_single_hwr_training_symbol_option_pane

0xdc03,	// (0x000b6c70) list_single_hwr_training_symbol_option_pane_g1

0xdc0b,	// (0x000b6c78) list_single_hwr_training_symbol_option_pane_t1

0xdc19,	// (0x000b6c86) bg_button_pane_cp023

0xdc22,	// (0x000b6c8f) bg_button_pane_cp024

0x6c47,	// (0x000afcb4) vitu2_page_scroll_pane_g1

0x6c4f,	// (0x000afcbc) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x000b8b4c) vitu2_page_scroll_pane_g

0x6c57,	// (0x000afcc4) vitu2_page_scroll_pane_t1

0xa968,	// (0x000b39d5) popup_char_count_window_g1

0xdc55,	// (0x000b6cc2) popup_char_count_window_g2

0xc1a5,	// (0x000b5212) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x000b8b51) popup_char_count_window_g

0xdc82,	// (0x000b6cef) popup_char_count_window_t1

0x94b5,	// (0x000b2522) main_vded2_pane

0xd279,	// (0x000b62e6) aid_size_cell_imed_line

0xd283,	// (0x000b62f0) grid_imed_line_width_pane

0x9bd6,	// (0x000b2c43) vid4_indicators_pane_g4

0xdc90,	// (0x000b6cfd) cell_imed_line_width_pane_ParamLimits

0xdc90,	// (0x000b6cfd) cell_imed_line_width_pane

0xdca4,	// (0x000b6d11) cell_imed_line_width_pane_g1

0xdc70,	// (0x000b6cdd) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x000b8b58) cell_imed_line_width_pane_g

0x6c66,	// (0x000afcd3) main_vded2_pane_g1_ParamLimits

0x6c66,	// (0x000afcd3) main_vded2_pane_g1

0x6c7c,	// (0x000afce9) main_vded2_pane_g2_ParamLimits

0x6c7c,	// (0x000afce9) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x000b8b5d) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x000b8b5d) main_vded2_pane_g

0x6c8e,	// (0x000afcfb) vded2_slider_pane_ParamLimits

0x6c8e,	// (0x000afcfb) vded2_slider_pane

0x6c9e,	// (0x000afd0b) aid_size_touch_vded2_end

0x6ca8,	// (0x000afd15) aid_size_touch_vded2_playhead

0xdcad,	// (0x000b6d1a) aid_size_touch_vded2_start

0xdcb5,	// (0x000b6d22) vded2_slider_bg_pane

0xdcbe,	// (0x000b6d2b) vded2_slider_pane_g1

0xdcc7,	// (0x000b6d34) vded2_slider_pane_g2

0x6cb2,	// (0x000afd1f) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x000b8b62) vded2_slider_pane_g

0xdccf,	// (0x000b6d3c) vded2_slider_bg_pane_g1

0xdcd8,	// (0x000b6d45) vded2_slider_bg_pane_g2

0xdce1,	// (0x000b6d4e) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x000b8b69) vded2_slider_bg_pane_g

0x2c9e,	// (0x000abd0b) aid_postcard_touch_down_pane_ParamLimits

0x2c9e,	// (0x000abd0b) aid_postcard_touch_down_pane

0x2cb4,	// (0x000abd21) aid_postcard_touch_up_pane_ParamLimits

0x2cb4,	// (0x000abd21) aid_postcard_touch_up_pane

0x94b5,	// (0x000b2522) main_blid2_pane

0x9718,	// (0x000b2785) popup_blid2_search_window

0x943f,	// (0x000b24ac) blid2_gps_pane

0x943f,	// (0x000b24ac) blid2_navig_pane

0x943f,	// (0x000b24ac) blid2_search_pane

0x943f,	// (0x000b24ac) blid2_tripm_pane

0x6cbd,	// (0x000afd2a) blid2_search_pane_g1_ParamLimits

0x6cbd,	// (0x000afd2a) blid2_search_pane_g1

0x6cd5,	// (0x000afd42) blid2_search_pane_t1_ParamLimits

0x6cd5,	// (0x000afd42) blid2_search_pane_t1

0x6ce7,	// (0x000afd54) aid_size_cell_blid2_gps_ParamLimits

0x6ce7,	// (0x000afd54) aid_size_cell_blid2_gps

0x6cff,	// (0x000afd6c) blid2_gps_pane_g1_ParamLimits

0x6cff,	// (0x000afd6c) blid2_gps_pane_g1

0x6d13,	// (0x000afd80) grid_blid2_satellite_pane_ParamLimits

0x6d13,	// (0x000afd80) grid_blid2_satellite_pane

0x6d2d,	// (0x000afd9a) blid2_navig_pane_g1_ParamLimits

0x6d2d,	// (0x000afd9a) blid2_navig_pane_g1

0x6d39,	// (0x000afda6) blid2_navig_pane_t1_ParamLimits

0x6d39,	// (0x000afda6) blid2_navig_pane_t1

0x6d54,	// (0x000afdc1) blid2_navig_pane_t2_ParamLimits

0x6d54,	// (0x000afdc1) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x000b8b70) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x000b8b70) blid2_navig_pane_t

0x6d6f,	// (0x000afddc) blid2_navig_ring_pane_ParamLimits

0x6d6f,	// (0x000afddc) blid2_navig_ring_pane

0x6d88,	// (0x000afdf5) blid2_speed_pane_ParamLimits

0x6d88,	// (0x000afdf5) blid2_speed_pane

0x6d94,	// (0x000afe01) blid2_tripm_pane_g1_ParamLimits

0x6d94,	// (0x000afe01) blid2_tripm_pane_g1

0x6daf,	// (0x000afe1c) blid2_tripm_pane_g2_ParamLimits

0x6daf,	// (0x000afe1c) blid2_tripm_pane_g2

0x6dc3,	// (0x000afe30) blid2_tripm_pane_g3_ParamLimits

0x6dc3,	// (0x000afe30) blid2_tripm_pane_g3

0x6dd7,	// (0x000afe44) blid2_tripm_pane_g4_ParamLimits

0x6dd7,	// (0x000afe44) blid2_tripm_pane_g4

0x6deb,	// (0x000afe58) blid2_tripm_pane_g5_ParamLimits

0x6deb,	// (0x000afe58) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x000b8b75) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x000b8b75) blid2_tripm_pane_g

0x6e11,	// (0x000afe7e) blid2_tripm_pane_t1_ParamLimits

0x6e11,	// (0x000afe7e) blid2_tripm_pane_t1

0x6e2c,	// (0x000afe99) blid2_tripm_pane_t2_ParamLimits

0x6e2c,	// (0x000afe99) blid2_tripm_pane_t2

0x6e45,	// (0x000afeb2) blid2_tripm_pane_t3_ParamLimits

0x6e45,	// (0x000afeb2) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x000b8b82) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x000b8b82) blid2_tripm_pane_t

0x6e8c,	// (0x000afef9) cell_blid2_satellite_pane_ParamLimits

0x6e8c,	// (0x000afef9) cell_blid2_satellite_pane

0x6eaa,	// (0x000aff17) cell_blid2_satellite_pane_g1

0xdcea,	// (0x000b6d57) cell_blid2_satellite_pane_t1

0xcd88,	// (0x000b5df5) blid2_speed_pane_g1

0xdcf8,	// (0x000b6d65) blid2_speed_pane_t1

0xdd06,	// (0x000b6d73) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x000b8b8b) blid2_speed_pane_t

0xcd88,	// (0x000b5df5) blid2_navig_ring_pane_g1

0x6eb3,	// (0x000aff20) blid2_navig_ring_pane_g2

0x6ebb,	// (0x000aff28) blid2_navig_ring_pane_g3

0x6ec3,	// (0x000aff30) blid2_navig_ring_pane_g4

0x6ecb,	// (0x000aff38) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x000b8b90) blid2_navig_ring_pane_g

0x943f,	// (0x000b24ac) bg_popup_window_pane_cp011

0xdd14,	// (0x000b6d81) popup_blid2_search_window_g1

0xdd1c,	// (0x000b6d89) popup_blid2_search_window_t1

0xdd2a,	// (0x000b6d97) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x000b8b9b) popup_blid2_search_window_t

0xac1b,	// (0x000b3c88) main_browser_pane_g1

0xa8e7,	// (0x000b3954) main_browser_pane_ParamLimits

0x94a7,	// (0x000b2514) bg_button_pane_cp011_ParamLimits

0x5dd8,	// (0x000aee45) cell_vitu2_function_pane_g1_ParamLimits

0xc980,	// (0x000b59ed) bg_popup_sub_pane_cp22_ParamLimits

0x673d,	// (0x000af7aa) input_focus_pane_cp08_ParamLimits

0x6754,	// (0x000af7c1) popup_vitu2_query_button_pane_ParamLimits

0x6754,	// (0x000af7c1) popup_vitu2_query_button_pane

0x6765,	// (0x000af7d2) popup_vitu2_query_input_button_pane

0xd9a7,	// (0x000b6a14) popup_vitu2_query_window_g1_ParamLimits

0x676f,	// (0x000af7dc) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x000b8a9c) popup_vitu2_query_window_g_ParamLimits

0x943f,	// (0x000b24ac) bg_button_pane_cp026

0x6ed3,	// (0x000aff40) popup_vitu2_query_input_button_pane_g1

0x943f,	// (0x000b24ac) bg_button_pane_cp025

0xdd38,	// (0x000b6da5) popup_vitu2_query_button_pane_t1

0x4347,	// (0x000ad3b4) main_mp3_pane_t6

0x4355,	// (0x000ad3c2) popup_slider_window_cp01

0x9b42,	// (0x000b2baf) cam4_battery_pane

0x9b95,	// (0x000b2c02) cam4_battery_pane_cp02

0x9c9a,	// (0x000b2d07) cam4_battery_pane_cp01

0x9c9a,	// (0x000b2d07) cam4_battery_pane_cp03

0xdc78,	// (0x000b6ce5) cam4_battery_pane_g1

0xcd88,	// (0x000b5df5) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x000b8ba0) cam4_battery_pane_g

0xcc54,	// (0x000b5cc1) popup_blid_sat_info2_window_t11

0xb367,	// (0x000b43d4) aid_size_touch_mv_arrow_left_ParamLimits

0xb392,	// (0x000b43ff) aid_size_touch_mv_arrow_right_ParamLimits

0xb3f0,	// (0x000b445d) navi_pane_g1_ParamLimits

0xb3fc,	// (0x000b4469) navi_pane_g2_ParamLimits

0xb42a,	// (0x000b4497) navi_pane_g3_ParamLimits

0xf3e1,	// (0x000b844e) navi_pane_g_ParamLimits

0x274f,	// (0x000ab7bc) navi_pane_mv_t1_ParamLimits

0x4fa0,	// (0x000ae00d) grid_imed_effect_pane_ParamLimits

0x1565,	// (0x000aa5d2) aid_placing_vt_slider_lsc

0xab6a,	// (0x000b3bd7) aid_placing_vt_slider_prt

0xa181,	// (0x000b31ee) bg_tb_trans_pane_cp01_ParamLimits

0xceed,	// (0x000b5f5a) popup_image_details_window_g1_ParamLimits

0xcf00,	// (0x000b5f6d) popup_image_details_window_g2_ParamLimits

0xcf15,	// (0x000b5f82) popup_image_details_window_g3_ParamLimits

0xcf15,	// (0x000b5f82) popup_image_details_window_g3

0xf727,	// (0x000b8794) popup_image_details_window_g_ParamLimits

0xcf29,	// (0x000b5f96) popup_image_details_window_t1_ParamLimits

0xcf3b,	// (0x000b5fa8) popup_image_details_window_t2_ParamLimits

0xcf54,	// (0x000b5fc1) popup_image_details_window_t3_ParamLimits

0xcf68,	// (0x000b5fd5) popup_image_details_window_t4_ParamLimits

0xcf83,	// (0x000b5ff0) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x000b879b) popup_image_details_window_t_ParamLimits

0x6ae3,	// (0x000afb50) cl_header_name_pane_ParamLimits

0x6ae3,	// (0x000afb50) cl_header_name_pane

0x6edb,	// (0x000aff48) cl_header_name_pane_t1_ParamLimits

0x6edb,	// (0x000aff48) cl_header_name_pane_t1

0x6efc,	// (0x000aff69) cl_header_name_pane_t2_ParamLimits

0x6efc,	// (0x000aff69) cl_header_name_pane_t2

0x6f3e,	// (0x000affab) cl_header_name_pane_t3_ParamLimits

0x6f3e,	// (0x000affab) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x000b8ba5) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x000b8ba5) cl_header_name_pane_t

0xb4b9,	// (0x000b4526) navi_pane_mv_g2_ParamLimits

0xd6f8,	// (0x000b6765) field_vitu2_entry_pane_g1_ParamLimits

0xd704,	// (0x000b6771) field_vitu2_entry_pane_g2_ParamLimits

0xd710,	// (0x000b677d) field_vitu2_entry_pane_g3_ParamLimits

0xd710,	// (0x000b677d) field_vitu2_entry_pane_g3

0xf92e,	// (0x000b899b) field_vitu2_entry_pane_g_ParamLimits

0x9c09,	// (0x000b2c76) cell_vitu2_itu_pane_g1_ParamLimits

0x5d6c,	// (0x000aedd9) cell_vitu2_itu_pane_g2_ParamLimits

0x5d6c,	// (0x000aedd9) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x000b89a7) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x000b89a7) cell_vitu2_itu_pane_g

0x94a7,	// (0x000b2514) bg_vkb2_func_pane_cp05_ParamLimits

0x94a7,	// (0x000b2514) bg_vkb2_func_pane_cp05

0x94a7,	// (0x000b2514) bg_vkb2_func_pane_cp03

0x94a7,	// (0x000b2514) bg_vkb2_func_pane_cp04

0x94a7,	// (0x000b2514) bg_vkb2_func_pane_cp10_ParamLimits

0x94a7,	// (0x000b2514) bg_vkb2_func_pane_cp10

0x6a85,	// (0x000afaf2) bg_vkb2_func_pane_cp08

0x6a6b,	// (0x000afad8) bg_vkb2_func_pane_cp06

0x6a79,	// (0x000afae6) bg_vkb2_func_pane_cp07

0xdc2b,	// (0x000b6c98) bg_vkb2_func_pane_cp11_ParamLimits

0xdc2b,	// (0x000b6c98) bg_vkb2_func_pane_cp11

0xdc40,	// (0x000b6cad) bg_vkb2_func_pane_cp12_ParamLimits

0xdc40,	// (0x000b6cad) bg_vkb2_func_pane_cp12

0x943f,	// (0x000b24ac) bg_vkb2_func_pane_cp09

0xd730,	// (0x000b679d) bg_vkb2_func_pane_g1

0xad2c,	// (0x000b3d99) bg_vkb2_func_pane_g2

0xd738,	// (0x000b67a5) bg_vkb2_func_pane_g3

0xd740,	// (0x000b67ad) bg_vkb2_func_pane_g4

0xd96c,	// (0x000b69d9) bg_vkb2_func_pane_g5

0xd758,	// (0x000b67c5) bg_vkb2_func_pane_g6

0xd760,	// (0x000b67cd) bg_vkb2_func_pane_g7

0xd750,	// (0x000b67bd) bg_vkb2_func_pane_g8

0xad0c,	// (0x000b3d79) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x000b8bac) bg_vkb2_func_pane_g

0x6dff,	// (0x000afe6c) blid2_tripm_pane_g6_ParamLimits

0x6dff,	// (0x000afe6c) blid2_tripm_pane_g6

0xd638,	// (0x000b66a5) mp4_progress_pane_g1

0x6e78,	// (0x000afee5) blid2_tripm_values_pane_ParamLimits

0x6e78,	// (0x000afee5) blid2_tripm_values_pane

0x6f6f,	// (0x000affdc) blid2_tripm_values_pane_t1

0x6f7d,	// (0x000affea) blid2_tripm_values_pane_t2

0x6f8b,	// (0x000afff8) blid2_tripm_values_pane_t3

0x6f99,	// (0x000b0006) blid2_tripm_values_pane_t4

0x6fa7,	// (0x000b0014) blid2_tripm_values_pane_t5

0x6fb5,	// (0x000b0022) blid2_tripm_values_pane_t6

0x6fc3,	// (0x000b0030) blid2_tripm_values_pane_t7

0x6fd1,	// (0x000b003e) blid2_tripm_values_pane_t8

0x6fdf,	// (0x000b004c) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000b8bbf) blid2_tripm_values_pane_t

0x15a7,	// (0x000aa614) call_video_pane_t1_ParamLimits

0x15c5,	// (0x000aa632) call_video_pane_t2_ParamLimits

0xf26a,	// (0x000b82d7) call_video_pane_t_ParamLimits

0x2c1c,	// (0x000abc89) msg_header_pane_g1_ParamLimits

0xb6a1,	// (0x000b470e) msg_header_pane_g2_ParamLimits

0xb6a1,	// (0x000b470e) msg_header_pane_g2

0x0001,

0xf484,	// (0x000b84f1) msg_header_pane_g_ParamLimits

0xf484,	// (0x000b84f1) msg_header_pane_g

0xa8e7,	// (0x000b3954) main_clock2_pane_ParamLimits

0x4ca1,	// (0x000add0e) grid_clock2_toolbar_pane_ParamLimits

0x4ca1,	// (0x000add0e) grid_clock2_toolbar_pane

0x4ca1,	// (0x000add0e) listscroll_clock2_pane_ParamLimits

0x4ca1,	// (0x000add0e) listscroll_clock2_pane

0x4d85,	// (0x000addf2) main_clock2_pane_t3_ParamLimits

0x4d85,	// (0x000addf2) main_clock2_pane_t3

0x4da9,	// (0x000ade16) main_clock2_pane_t4_ParamLimits

0x4da9,	// (0x000ade16) main_clock2_pane_t4

0xdd46,	// (0x000b6db3) cell_clock2_toolbar_pane

0xdd4e,	// (0x000b6dbb) cell_clock2_toolbar_pane_cp01

0xdd4e,	// (0x000b6dbb) cell_clock2_toolbar_pane_cp02

0xdd56,	// (0x000b6dc3) cell_clock2_toolbar_pane_cp03

0xdd5e,	// (0x000b6dcb) list_clock2_pane

0xb2ec,	// (0x000b4359) scroll_pane_cp10

0xdd66,	// (0x000b6dd3) list_single_clock2_pane_ParamLimits

0xdd66,	// (0x000b6dd3) list_single_clock2_pane

0xaad3,	// (0x000b3b40) list_highlight_pane_cp08

0xdd73,	// (0x000b6de0) list_single_clock2_pane_t1

0xdd81,	// (0x000b6dee) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000b8bd2) list_single_clock2_pane_t

0x943f,	// (0x000b24ac) bg_button_pane_cp10

0xdd8f,	// (0x000b6dfc) cell_clock2_toolbar_pane_g1

0x2c2a,	// (0x000abc97) aid_main_viewer_pane_g1_ParamLimits

0x2c2a,	// (0x000abc97) aid_main_viewer_pane_g1

0x2c38,	// (0x000abca5) aid_main_viewer_pane_g2_ParamLimits

0x2c38,	// (0x000abca5) aid_main_viewer_pane_g2

0x2c46,	// (0x000abcb3) aid_main_viewer_pane_g3_ParamLimits

0x2c46,	// (0x000abcb3) aid_main_viewer_pane_g3

0x2c55,	// (0x000abcc2) aid_main_viewer_pane_g4_ParamLimits

0x2c55,	// (0x000abcc2) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x000b8502) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x000b8502) aid_main_viewer_pane_g

0x355d,	// (0x000ac5ca) main_calc_pane_ParamLimits

0x3583,	// (0x000ac5f0) main_dialer2_pane_ParamLimits

0x94b5,	// (0x000b2522) main_cam6_pane

0x94b5,	// (0x000b2522) main_vid6_pane

0x4cad,	// (0x000add1a) listscroll_gen_pane_cp06_ParamLimits

0x4cad,	// (0x000add1a) listscroll_gen_pane_cp06

0x4dcc,	// (0x000ade39) main_clock2_pane_t5_ParamLimits

0x4dcc,	// (0x000ade39) main_clock2_pane_t5

0x4e2a,	// (0x000ade97) aid_call2_pane_cp10_ParamLimits

0x4e3c,	// (0x000adea9) aid_call_pane_cp10_ParamLimits

0xb35b,	// (0x000b43c8) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb35b,	// (0x000b43c8) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4e4e,	// (0x000adebb) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4e4e,	// (0x000adebb) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb35b,	// (0x000b43c8) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x000b8850) popup_clock_analogue_window_cp10_g_ParamLimits

0x4e64,	// (0x000aded1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x54df,	// (0x000ae54c) cell_dialer2_keypad_pane_g2_ParamLimits

0x54df,	// (0x000ae54c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x000b893a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x000b893a) cell_dialer2_keypad_pane_g

0x54fb,	// (0x000ae568) cell_dialer2_keypad_pane_t1

0x60f2,	// (0x000af15f) main_cset_text2_pane_ParamLimits

0x60f2,	// (0x000af15f) main_cset_text2_pane

0xdb93,	// (0x000b6c00) area_vitu2_query_pane_g1_ParamLimits

0x6a0a,	// (0x000afa77) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000b8aef) area_vitu2_query_pane_g_ParamLimits

0xa298,	// (0x000b3305) area_vitu2_query_pane_t7_ParamLimits

0xa298,	// (0x000b3305) area_vitu2_query_pane_t7

0x6a6b,	// (0x000afad8) bg_button_pane_cp018_ParamLimits

0x6a79,	// (0x000afae6) bg_button_pane_cp021_ParamLimits

0x6a85,	// (0x000afaf2) bg_button_pane_cp022_ParamLimits

0x6a85,	// (0x000afaf2) bg_vkb2_func_pane_cp08_ParamLimits

0x6a6b,	// (0x000afad8) bg_vkb2_func_pane_cp06_ParamLimits

0x6a79,	// (0x000afae6) bg_vkb2_func_pane_cp07_ParamLimits

0x6a96,	// (0x000afb03) input_focus_pane_cp09_ParamLimits

0x9d05,	// (0x000b2d72) cam6_autofocus_pane_ParamLimits

0x9d05,	// (0x000b2d72) cam6_autofocus_pane

0x6fed,	// (0x000b005a) cam6_image_uncrop_pane_ParamLimits

0x6fed,	// (0x000b005a) cam6_image_uncrop_pane

0x6ffc,	// (0x000b0069) cam6_indi_pane_ParamLimits

0x6ffc,	// (0x000b0069) cam6_indi_pane

0x7012,	// (0x000b007f) cam6_mode_pane_ParamLimits

0x7012,	// (0x000b007f) cam6_mode_pane

0x7024,	// (0x000b0091) cam6_timer_pane_ParamLimits

0x7024,	// (0x000b0091) cam6_timer_pane

0x7034,	// (0x000b00a1) cam6_zoom_pane_ParamLimits

0x7034,	// (0x000b00a1) cam6_zoom_pane

0x7040,	// (0x000b00ad) cam6_mode_pane_g1_ParamLimits

0x7040,	// (0x000b00ad) cam6_mode_pane_g1

0x7050,	// (0x000b00bd) cam6_mode_pane_g2_ParamLimits

0x7050,	// (0x000b00bd) cam6_mode_pane_g2

0x7060,	// (0x000b00cd) cam6_mode_pane_g3_ParamLimits

0x7060,	// (0x000b00cd) cam6_mode_pane_g3

0x7070,	// (0x000b00dd) cam6_mode_pane_g4_ParamLimits

0x7070,	// (0x000b00dd) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000b8bd7) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000b8bd7) cam6_mode_pane_g

0xdd97,	// (0x000b6e04) bg_tb_trans_pane_cp08_ParamLimits

0xdd97,	// (0x000b6e04) bg_tb_trans_pane_cp08

0xdda5,	// (0x000b6e12) cam6_battery_pane_ParamLimits

0xdda5,	// (0x000b6e12) cam6_battery_pane

0xddbb,	// (0x000b6e28) cam6_indi_pane_g1_ParamLimits

0xddbb,	// (0x000b6e28) cam6_indi_pane_g1

0xddcd,	// (0x000b6e3a) cam6_indi_pane_g2_ParamLimits

0xddcd,	// (0x000b6e3a) cam6_indi_pane_g2

0xdddf,	// (0x000b6e4c) cam6_indi_pane_g3_ParamLimits

0xdddf,	// (0x000b6e4c) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000b8be0) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000b8be0) cam6_indi_pane_g

0xddf1,	// (0x000b6e5e) cam6_indi_pane_t1_ParamLimits

0xddf1,	// (0x000b6e5e) cam6_indi_pane_t1

0x7080,	// (0x000b00ed) cam6_autofocus_pane_g1

0x7088,	// (0x000b00f5) cam6_autofocus_pane_g2

0x7090,	// (0x000b00fd) cam6_autofocus_pane_g3

0x7098,	// (0x000b0105) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000b8be7) cam6_autofocus_pane_g

0xde17,	// (0x000b6e84) cam6_timer_pane_g1

0xde1f,	// (0x000b6e8c) cam6_timer_pane_t1

0xde2d,	// (0x000b6e9a) cam6_zoom_cont_pane

0xde35,	// (0x000b6ea2) cam6_zoom_pane_g1

0xde3d,	// (0x000b6eaa) cam6_zoom_pane_g2

0x70a0,	// (0x000b010d) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000b8bf0) cam6_zoom_pane_g

0xcd88,	// (0x000b5df5) cam6_battery_pane_g1

0xcd88,	// (0x000b5df5) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x000b8758) cam6_battery_pane_g

0xde45,	// (0x000b6eb2) cam6_zoom_cont_pane_g1

0xde4e,	// (0x000b6ebb) cam6_zoom_cont_pane_g2

0xde57,	// (0x000b6ec4) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000b8bf7) cam6_zoom_cont_pane_g

0x70bd,	// (0x000b012a) cam6_mode_pane_cp_ParamLimits

0x70bd,	// (0x000b012a) cam6_mode_pane_cp

0x70cf,	// (0x000b013c) cam6_zoom_pane_cp_ParamLimits

0x70cf,	// (0x000b013c) cam6_zoom_pane_cp

0x70db,	// (0x000b0148) vid6_image_uncrop_cif_pane_ParamLimits

0x70db,	// (0x000b0148) vid6_image_uncrop_cif_pane

0x70eb,	// (0x000b0158) vid6_image_uncrop_nhd_pane_ParamLimits

0x70eb,	// (0x000b0158) vid6_image_uncrop_nhd_pane

0x70fa,	// (0x000b0167) vid6_image_uncrop_vga_pane_ParamLimits

0x70fa,	// (0x000b0167) vid6_image_uncrop_vga_pane

0x7109,	// (0x000b0176) vid6_image_uncrop_wvga_pane_ParamLimits

0x7109,	// (0x000b0176) vid6_image_uncrop_wvga_pane

0x7118,	// (0x000b0185) vid6_indi_pane_ParamLimits

0x7118,	// (0x000b0185) vid6_indi_pane

0xdd97,	// (0x000b6e04) bg_tb_trans_pane_cp09_ParamLimits

0xdd97,	// (0x000b6e04) bg_tb_trans_pane_cp09

0xde6f,	// (0x000b6edc) cam6_battery_pane_cp_ParamLimits

0xde6f,	// (0x000b6edc) cam6_battery_pane_cp

0xde7b,	// (0x000b6ee8) vid6_indi_pane_g1_ParamLimits

0xde7b,	// (0x000b6ee8) vid6_indi_pane_g1

0xde8d,	// (0x000b6efa) vid6_indi_pane_g2_ParamLimits

0xde8d,	// (0x000b6efa) vid6_indi_pane_g2

0xde9f,	// (0x000b6f0c) vid6_indi_pane_g3_ParamLimits

0xde9f,	// (0x000b6f0c) vid6_indi_pane_g3

0xdeb4,	// (0x000b6f21) vid6_indi_pane_g4_ParamLimits

0xdeb4,	// (0x000b6f21) vid6_indi_pane_g4

0xdec9,	// (0x000b6f36) vid6_indi_pane_g5_ParamLimits

0xdec9,	// (0x000b6f36) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000b8bfe) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000b8bfe) vid6_indi_pane_g

0xdee3,	// (0x000b6f50) vid6_indi_pane_t1_ParamLimits

0xdee3,	// (0x000b6f50) vid6_indi_pane_t1

0xdef9,	// (0x000b6f66) vid6_indi_pane_t2_ParamLimits

0xdef9,	// (0x000b6f66) vid6_indi_pane_t2

0xdf21,	// (0x000b6f8e) vid6_indi_pane_t3_ParamLimits

0xdf21,	// (0x000b6f8e) vid6_indi_pane_t3

0xdf49,	// (0x000b6fb6) vid6_indi_pane_t4_ParamLimits

0xdf49,	// (0x000b6fb6) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x000b8c09) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x000b8c09) vid6_indi_pane_t

0xdf6d,	// (0x000b6fda) wait_bar_pane_cp08

0x7130,	// (0x000b019d) main_cset_text2_pane_t1_ParamLimits

0x7130,	// (0x000b019d) main_cset_text2_pane_t1

0x70a8,	// (0x000b0115) listscroll_gen_pane_cp06_t1_ParamLimits

0x70a8,	// (0x000b0115) listscroll_gen_pane_cp06_t1

0x94b5,	// (0x000b2522) main_cam6_set_pane

0x9b34,	// (0x000b2ba1) bg_tb_trans_pane_cp06_ParamLimits

0x9b4a,	// (0x000b2bb7) cam4_indicators_pane_g1_ParamLimits

0x9b5b,	// (0x000b2bc8) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x000b8977) cam4_indicators_pane_g_ParamLimits

0x9b73,	// (0x000b2be0) cam4_indicators_pane_t1_ParamLimits

0x94a7,	// (0x000b2514) bg_tb_trans_pane_cp07_ParamLimits

0x9b9d,	// (0x000b2c0a) vid4_indicators_pane_g1_ParamLimits

0x9bb1,	// (0x000b2c1e) vid4_indicators_pane_g2_ParamLimits

0x9bc5,	// (0x000b2c32) vid4_indicators_pane_g3_ParamLimits

0x9bd6,	// (0x000b2c43) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x000b8989) vid4_indicators_pane_g_ParamLimits

0x9bf2,	// (0x000b2c5f) vid4_indicators_pane_t1_ParamLimits

0x9ca2,	// (0x000b2d0f) vid4_progress_pane_g1_ParamLimits

0x9cb2,	// (0x000b2d1f) vid4_progress_pane_g2_ParamLimits

0x6bd6,	// (0x000afc43) vid4_progress_pane_g3_ParamLimits

0x9cc2,	// (0x000b2d2f) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x000b8b3a) vid4_progress_pane_g_ParamLimits

0x6be8,	// (0x000afc55) vid4_progress_pane_t1_ParamLimits

0x9cda,	// (0x000b2d47) vid4_progress_pane_t2_ParamLimits

0x9cef,	// (0x000b2d5c) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x000b8b45) vid4_progress_pane_t_ParamLimits

0x6bfe,	// (0x000afc6b) wait_bar_pane_cp07_ParamLimits

0x714e,	// (0x000b01bb) main_cam6_set_pane_g2_ParamLimits

0x714e,	// (0x000b01bb) main_cam6_set_pane_g2

0x7172,	// (0x000b01df) main_cset6_listscroll_pane_ParamLimits

0x7172,	// (0x000b01df) main_cset6_listscroll_pane

0x718e,	// (0x000b01fb) main_cset6_slider_pane_ParamLimits

0x718e,	// (0x000b01fb) main_cset6_slider_pane

0x71a4,	// (0x000b0211) main_cset6_text2_pane_ParamLimits

0x71a4,	// (0x000b0211) main_cset6_text2_pane

0xdf7c,	// (0x000b6fe9) main_cset6_text_pane

0xdf84,	// (0x000b6ff1) main_cset_list_pane_copy1_ParamLimits

0xdf84,	// (0x000b6ff1) main_cset_list_pane_copy1

0xdf94,	// (0x000b7001) scroll_pane_cp028_copy1

0x71b2,	// (0x000b021f) cset_list_set_pane_copy1

0x71c4,	// (0x000b0231) aid_position_infowindow_above_copy1

0x71cc,	// (0x000b0239) aid_position_infowindow_below_copy1

0xa2cc,	// (0x000b3339) cset_list_set_pane_g1_copy1

0xa2d4,	// (0x000b3341) cset_list_set_pane_g3_copy1_ParamLimits

0xa2d4,	// (0x000b3341) cset_list_set_pane_g3_copy1

0xa2e3,	// (0x000b3350) cset_list_set_pane_t1_copy1_ParamLimits

0xa2e3,	// (0x000b3350) cset_list_set_pane_t1_copy1

0xa181,	// (0x000b31ee) list_highlight_pane_cp021_copy1_ParamLimits

0xa181,	// (0x000b31ee) list_highlight_pane_cp021_copy1

0xdf9d,	// (0x000b700a) cset6_slider_pane_ParamLimits

0xdf9d,	// (0x000b700a) cset6_slider_pane

0xdfc9,	// (0x000b7036) main_cset6_slider_pane_g1_ParamLimits

0xdfc9,	// (0x000b7036) main_cset6_slider_pane_g1

0x71d4,	// (0x000b0241) main_cset6_slider_pane_g2_ParamLimits

0x71d4,	// (0x000b0241) main_cset6_slider_pane_g2

0xdff1,	// (0x000b705e) main_cset6_slider_pane_g3_ParamLimits

0xdff1,	// (0x000b705e) main_cset6_slider_pane_g3

0x71fc,	// (0x000b0269) main_cset6_slider_pane_g4_ParamLimits

0x71fc,	// (0x000b0269) main_cset6_slider_pane_g4

0xdffd,	// (0x000b706a) main_cset6_slider_pane_g5_ParamLimits

0xdffd,	// (0x000b706a) main_cset6_slider_pane_g5

0xd85f,	// (0x000b68cc) main_cset6_slider_pane_g7_ParamLimits

0xd85f,	// (0x000b68cc) main_cset6_slider_pane_g7

0xd86b,	// (0x000b68d8) main_cset6_slider_pane_g8_ParamLimits

0xd86b,	// (0x000b68d8) main_cset6_slider_pane_g8

0x619f,	// (0x000af20c) main_cset6_slider_pane_g9_ParamLimits

0x619f,	// (0x000af20c) main_cset6_slider_pane_g9

0x61ab,	// (0x000af218) main_cset6_slider_pane_g10_ParamLimits

0x61ab,	// (0x000af218) main_cset6_slider_pane_g10

0x61b7,	// (0x000af224) main_cset6_slider_pane_g11_ParamLimits

0x61b7,	// (0x000af224) main_cset6_slider_pane_g11

0x61c3,	// (0x000af230) main_cset6_slider_pane_g12_ParamLimits

0x61c3,	// (0x000af230) main_cset6_slider_pane_g12

0x61cf,	// (0x000af23c) main_cset6_slider_pane_g13_ParamLimits

0x61cf,	// (0x000af23c) main_cset6_slider_pane_g13

0x61db,	// (0x000af248) main_cset6_slider_pane_g14_ParamLimits

0x61db,	// (0x000af248) main_cset6_slider_pane_g14

0x7208,	// (0x000b0275) main_cset6_slider_pane_g15_ParamLimits

0x7208,	// (0x000b0275) main_cset6_slider_pane_g15

0xd877,	// (0x000b68e4) main_cset6_slider_pane_g16_ParamLimits

0xd877,	// (0x000b68e4) main_cset6_slider_pane_g16

0xd883,	// (0x000b68f0) main_cset6_slider_pane_g17_ParamLimits

0xd883,	// (0x000b68f0) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000b8c12) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000b8c12) main_cset6_slider_pane_g

0xe009,	// (0x000b7076) main_cset6_slider_pane_t1_ParamLimits

0xe009,	// (0x000b7076) main_cset6_slider_pane_t1

0x7238,	// (0x000b02a5) main_cset6_slider_pane_t2_ParamLimits

0x7238,	// (0x000b02a5) main_cset6_slider_pane_t2

0x7263,	// (0x000b02d0) main_cset6_slider_pane_t3_ParamLimits

0x7263,	// (0x000b02d0) main_cset6_slider_pane_t3

0x728e,	// (0x000b02fb) main_cset6_slider_pane_t4_ParamLimits

0x728e,	// (0x000b02fb) main_cset6_slider_pane_t4

0x72b9,	// (0x000b0326) main_cset6_slider_pane_t5_ParamLimits

0x72b9,	// (0x000b0326) main_cset6_slider_pane_t5

0xe04a,	// (0x000b70b7) main_cset6_slider_pane_t7_ParamLimits

0xe04a,	// (0x000b70b7) main_cset6_slider_pane_t7

0x72e4,	// (0x000b0351) main_cset6_slider_pane_t8_ParamLimits

0x72e4,	// (0x000b0351) main_cset6_slider_pane_t8

0x7308,	// (0x000b0375) main_cset6_slider_pane_t9_ParamLimits

0x7308,	// (0x000b0375) main_cset6_slider_pane_t9

0x732c,	// (0x000b0399) main_cset6_slider_pane_t10_ParamLimits

0x732c,	// (0x000b0399) main_cset6_slider_pane_t10

0x7350,	// (0x000b03bd) main_cset6_slider_pane_t11_ParamLimits

0x7350,	// (0x000b03bd) main_cset6_slider_pane_t11

0xe080,	// (0x000b70ed) main_cset6_slider_pane_t14_ParamLimits

0xe080,	// (0x000b70ed) main_cset6_slider_pane_t14

0xe0b9,	// (0x000b7126) main_cset6_slider_pane_t15_ParamLimits

0xe0b9,	// (0x000b7126) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x000b8c37) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x000b8c37) main_cset6_slider_pane_t

0xd54f,	// (0x000b65bc) cset_slider_pane_g1_copy1

0xdc5e,	// (0x000b6ccb) cset_slider_pane_g2_copy1

0xdc67,	// (0x000b6cd4) cset_slider_pane_g3_copy1

0x943f,	// (0x000b24ac) bg_popup_sub_pane_cp011_copy1

0xe0f2,	// (0x000b715f) main_cset_text_pane_g1_copy1

0xd9bb,	// (0x000b6a28) main_cset_text_pane_t1_copy1

0xd9c9,	// (0x000b6a36) main_cset_text_pane_t2_copy1

0xd9d7,	// (0x000b6a44) main_cset_text_pane_t3_copy1

0xd9e5,	// (0x000b6a52) main_cset_text_pane_t4_copy1

0xd9f3,	// (0x000b6a60) main_cset_text_pane_t5_copy1

0xe0fa,	// (0x000b7167) main_cset_text_pane_t6_copy1

0xe108,	// (0x000b7175) main_cset_text_pane_t7_copy1

0x7130,	// (0x000b019d) main_cset_text2_pane_t1_copy1

0x94a7,	// (0x000b2514) main_ncimui_pane

0x37c7,	// (0x000ac834) popup_query_ncimui_window_ParamLimits

0x37c7,	// (0x000ac834) popup_query_ncimui_window

0xa1cb,	// (0x000b3238) field_cale_ev2_pane_g4_ParamLimits

0xa1cb,	// (0x000b3238) field_cale_ev2_pane_g4

0x53be,	// (0x000ae42b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x53be,	// (0x000ae42b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x000b8911) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x000b8911) cell_video_dialer_keypad_pane_g

0x53d6,	// (0x000ae443) cell_video_dialer_keypad_pane_t1

0x943f,	// (0x000b24ac) bg_popup_window_pane_cp012

0xb1d7,	// (0x000b4244) heading_pane_cp06

0xe134,	// (0x000b71a1) ncim_query_content_pane

0x943f,	// (0x000b24ac) bg_popup_heading_pane_cp01

0xe13c,	// (0x000b71a9) ncim_heading_pane_t1

0xe14a,	// (0x000b71b7) ncim_indicator_popup_pane

0xe15c,	// (0x000b71c9) ncim_query_button_pane

0xe170,	// (0x000b71dd) ncim_query_content_pane_t1

0xe182,	// (0x000b71ef) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x000b8c7b) ncim_query_content_pane_t

0xe1bc,	// (0x000b7229) ncim_query_list_pane

0xe1ce,	// (0x000b723b) ncim_query_popup_pane

0xe14a,	// (0x000b71b7) ncim_indicator_popup_pane_ParamLimits

0x7573,	// (0x000b05e0) ncim_query_content_pane_g1_ParamLimits

0x7573,	// (0x000b05e0) ncim_query_content_pane_g1

0xe170,	// (0x000b71dd) ncim_query_content_pane_t1_ParamLimits

0xe182,	// (0x000b71ef) ncim_query_content_pane_t2_ParamLimits

0x757f,	// (0x000b05ec) ncim_query_content_pane_t3_ParamLimits

0x757f,	// (0x000b05ec) ncim_query_content_pane_t3

0x75a7,	// (0x000b0614) ncim_query_content_pane_t4_ParamLimits

0x75a7,	// (0x000b0614) ncim_query_content_pane_t4

0x75cf,	// (0x000b063c) ncim_query_content_pane_t5_ParamLimits

0x75cf,	// (0x000b063c) ncim_query_content_pane_t5

0xe194,	// (0x000b7201) ncim_query_content_pane_t6_ParamLimits

0xe194,	// (0x000b7201) ncim_query_content_pane_t6

0xfc0e,	// (0x000b8c7b) ncim_query_content_pane_t_ParamLimits

0xe1bc,	// (0x000b7229) ncim_query_list_pane_ParamLimits

0xe1ce,	// (0x000b723b) ncim_query_popup_pane_ParamLimits

0xe1e2,	// (0x000b724f) wait_bar_pane_cp04

0x943f,	// (0x000b24ac) input_focus_pane_cp011

0xe1ea,	// (0x000b7257) ncim_query_popup_pane_t1

0xe1f8,	// (0x000b7265) ncim_list_query_list_pane_ParamLimits

0xe1f8,	// (0x000b7265) ncim_list_query_list_pane

0x943f,	// (0x000b24ac) bg_button_pane_cp027

0xe205,	// (0x000b7272) ncim_query_button_pane_g1

0x943f,	// (0x000b24ac) list_highlight_pane_cp012

0xe20f,	// (0x000b727c) ncim_list_query_list_pane_g1

0xe217,	// (0x000b7284) ncim_list_query_list_pane_t1

0x9b67,	// (0x000b2bd4) cam4_indicators_pane_g3_ParamLimits

0x9b67,	// (0x000b2bd4) cam4_indicators_pane_g3

0x9be2,	// (0x000b2c4f) vid4_indicators_pane_g5_ParamLimits

0x9be2,	// (0x000b2c4f) vid4_indicators_pane_g5

0x9cce,	// (0x000b2d3b) vid4_progress_pane_g5_ParamLimits

0x9cce,	// (0x000b2d3b) vid4_progress_pane_g5

0x745e,	// (0x000b04cb) main_ncimui_pane_g1

0x74c7,	// (0x000b0534) ncimui_group_query_pane_ParamLimits

0x74c7,	// (0x000b0534) ncimui_group_query_pane

0x750f,	// (0x000b057c) ncimui_list_pane_ParamLimits

0x750f,	// (0x000b057c) ncimui_list_pane

0x7536,	// (0x000b05a3) ncimui_text_pane_ParamLimits

0x7536,	// (0x000b05a3) ncimui_text_pane

0x75f7,	// (0x000b0664) ncimui_text_pane_t1_ParamLimits

0x75f7,	// (0x000b0664) ncimui_text_pane_t1

0xe225,	// (0x000b7292) ncimui_list_single_graphic_pane_ParamLimits

0xe225,	// (0x000b7292) ncimui_list_single_graphic_pane

0x7615,	// (0x000b0682) ncimui_query_pane_ParamLimits

0x7615,	// (0x000b0682) ncimui_query_pane

0x943f,	// (0x000b24ac) list_highlight_pane_cp013

0xe235,	// (0x000b72a2) ncim_list_query_list_pane_t1_copy1

0xe243,	// (0x000b72b0) ncim_list_single_graphic_pane_g1

0x7628,	// (0x000b0695) ncim_query_button_pane_cp01

0x7634,	// (0x000b06a1) ncim_query_entry_pane_ParamLimits

0x7634,	// (0x000b06a1) ncim_query_entry_pane

0x7647,	// (0x000b06b4) ncimui_query_pane_g1

0x7653,	// (0x000b06c0) ncimui_query_pane_t1_ParamLimits

0x7653,	// (0x000b06c0) ncimui_query_pane_t1

0xa181,	// (0x000b31ee) input_focus_pane_cp012

0xe24b,	// (0x000b72b8) ncim_query_entry_pane_t1

0xa8e7,	// (0x000b3954) main_im_pane_ParamLimits

0x94a7,	// (0x000b2514) main_mobtv_pane_ParamLimits

0x94a7,	// (0x000b2514) main_mobtv_pane

0x7220,	// (0x000b028d) main_cset6_slider_pane_g18_ParamLimits

0x7220,	// (0x000b028d) main_cset6_slider_pane_g18

0x722c,	// (0x000b0299) main_cset6_slider_pane_g19_ParamLimits

0x722c,	// (0x000b0299) main_cset6_slider_pane_g19

0x766c,	// (0x000b06d9) bg_main_mobtv_pane_ParamLimits

0x766c,	// (0x000b06d9) bg_main_mobtv_pane

0x767a,	// (0x000b06e7) main_mobtv_info_pane

0x7683,	// (0x000b06f0) main_mobtv_loading_pane_ParamLimits

0x7683,	// (0x000b06f0) main_mobtv_loading_pane

0xe25d,	// (0x000b72ca) main_mobtv_pg_channel_list_pane

0xe267,	// (0x000b72d4) main_mobtv_pg_hdr_pane

0x7690,	// (0x000b06fd) main_mobtv_programe_curr_pane_ParamLimits

0x7690,	// (0x000b06fd) main_mobtv_programe_curr_pane

0x769d,	// (0x000b070a) main_mobtv_programe_next_pane_ParamLimits

0x769d,	// (0x000b070a) main_mobtv_programe_next_pane

0xe270,	// (0x000b72dd) popup_mobtv_noti_window

0xcd88,	// (0x000b5df5) main_tv_pg_hdr_pane_g1

0xe278,	// (0x000b72e5) main_tv_pg_hdr_pane_g2

0xe280,	// (0x000b72ed) main_tv_pg_hdr_pane_g3

0xe288,	// (0x000b72f5) main_tv_pg_hdr_pane_g4

0xe290,	// (0x000b72fd) main_tv_pg_hdr_pane_g5

0xe29a,	// (0x000b7307) main_tv_pg_hdr_pane_g6

0xe2a4,	// (0x000b7311) main_tv_pg_hdr_pane_g7

0xe2ae,	// (0x000b731b) main_tv_pg_hdr_pane_g8

0xe2b8,	// (0x000b7325) main_tv_pg_hdr_pane_g9

0xe2c2,	// (0x000b732f) main_tv_pg_hdr_pane_g10

0xe2cc,	// (0x000b7339) main_tv_pg_hdr_pane_g11

0x000a,

0x001b,	// (0x000a9088) main_tv_pg_hdr_pane_g

0xe2d6,	// (0x000b7343) main_tv_pg_hdr_pane_t1

0xe2e4,	// (0x000b7351) main_tv_pg_hdr_pane_t2

0xe2f2,	// (0x000b735f) main_tv_pg_hdr_pane_t3

0xe302,	// (0x000b736f) main_tv_pg_hdr_pane_t4

0xe312,	// (0x000b737f) main_tv_pg_hdr_pane_t5

0x0004,

0x0032,	// (0x000a909f) main_tv_pg_hdr_pane_t

0xe322,	// (0x000b738f) single_mobtv_pg_channel_pane_ParamLimits

0xe322,	// (0x000b738f) single_mobtv_pg_channel_pane

0xe334,	// (0x000b73a1) single_mobtv_pg_channel_table_pane

0xae2f,	// (0x000b3e9c) single_mobtv_pg_channel_thumb_pane

0xe33d,	// (0x000b73aa) single_tv_pg_channel_pane_g1

0xe346,	// (0x000b73b3) single_tv_pg_channel_pane_g2

0x0001,

0x003d,	// (0x000a90aa) single_tv_pg_channel_pane_g

0xcfcd,	// (0x000b603a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfcd,	// (0x000b603a) bg_single_mobtv_pg_channel_thumb_pane

0xe34f,	// (0x000b73bc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe34f,	// (0x000b73bc) single_mobtv_pg_channel_thumb_pane_g1

0xe35d,	// (0x000b73ca) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe35d,	// (0x000b73ca) single_mobtv_pg_channel_thumb_pane_g2

0xe369,	// (0x000b73d6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe369,	// (0x000b73d6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0042,	// (0x000a90af) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0042,	// (0x000a90af) single_mobtv_pg_channel_thumb_pane_g

0xe375,	// (0x000b73e2) single_mobtv_pg_channel_thumb_pane_t1

0xe383,	// (0x000b73f0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0049,	// (0x000a90b6) single_mobtv_pg_channel_thumb_pane_t

0xcd88,	// (0x000b5df5) bg_single_mobtv_pg_channel_table_pane_g1

0xcd88,	// (0x000b5df5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x000b8758) bg_single_mobtv_pg_channel_table_pane_g

0xe391,	// (0x000b73fe) single_mobtv_pg_channel_table_pane_t1

0xe39f,	// (0x000b740c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x004e,	// (0x000a90bb) single_mobtv_pg_channel_table_pane_t

0x76b2,	// (0x000b071f) main_mobtv_info_pane_g1_ParamLimits

0x76b2,	// (0x000b071f) main_mobtv_info_pane_g1

0x76d0,	// (0x000b073d) main_mobtv_info_pane_t1_ParamLimits

0x76d0,	// (0x000b073d) main_mobtv_info_pane_t1

0x7748,	// (0x000b07b5) main_mobtv_info_pane_t2_ParamLimits

0x7748,	// (0x000b07b5) main_mobtv_info_pane_t2

0x0002,

0xfc20,	// (0x000b8c8d) main_mobtv_info_pane_t_ParamLimits

0xfc20,	// (0x000b8c8d) main_mobtv_info_pane_t

0x77d7,	// (0x000b0844) wait_bar_pane_cp05

0x77e9,	// (0x000b0856) main_mobtv_loading_pane_g1_ParamLimits

0x77e9,	// (0x000b0856) main_mobtv_loading_pane_g1

0x77fc,	// (0x000b0869) main_mobtv_loading_pane_g2_ParamLimits

0x77fc,	// (0x000b0869) main_mobtv_loading_pane_g2

0x7808,	// (0x000b0875) main_mobtv_loading_pane_g3_ParamLimits

0x7808,	// (0x000b0875) main_mobtv_loading_pane_g3

0x0002,

0xfc27,	// (0x000b8c94) main_mobtv_loading_pane_g_ParamLimits

0xfc27,	// (0x000b8c94) main_mobtv_loading_pane_g

0xe3ad,	// (0x000b741a) main_mobtv_loading_pane_t1_ParamLimits

0xe3ad,	// (0x000b741a) main_mobtv_loading_pane_t1

0xe3c5,	// (0x000b7432) main_mobtv_loading_pane_t2_ParamLimits

0xe3c5,	// (0x000b7432) main_mobtv_loading_pane_t2

0x0001,

0x0066,	// (0x000a90d3) main_mobtv_loading_pane_t_ParamLimits

0x0066,	// (0x000a90d3) main_mobtv_loading_pane_t

0x781b,	// (0x000b0888) wait_bar_pane_cp06_ParamLimits

0x781b,	// (0x000b0888) wait_bar_pane_cp06

0xe3e9,	// (0x000b7456) main_mobtv_programe_curr_pane_t1

0xe3f7,	// (0x000b7464) main_mobtv_programe_curr_pane_t2

0x0001,

0x006b,	// (0x000a90d8) main_mobtv_programe_curr_pane_t

0xe405,	// (0x000b7472) main_mobtv_programe_next_pane_t1

0xe413,	// (0x000b7480) main_mobtv_programe_next_pane_t2

0xe421,	// (0x000b748e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc2e,	// (0x000b8c9b) main_mobtv_programe_next_pane_t

0x943f,	// (0x000b24ac) bg_popup_mobtv_noti_window_pane

0xe42f,	// (0x000b749c) popup_mobtv_noti_window_g1

0xe437,	// (0x000b74a4) popup_mobtv_noti_window_t1

0xe445,	// (0x000b74b2) popup_mobtv_noti_window_t2

0x0001,

0xfc35,	// (0x000b8ca2) popup_mobtv_noti_window_t

0xcd88,	// (0x000b5df5) bg_popup_mobtv_noti_window_pane_g1

0x94b5,	// (0x000b2522) sc_clock_pane

0x94b5,	// (0x000b2522) main_fs_bigclock_pane

0x6e62,	// (0x000afecf) blid2_tripm_pane_t4_ParamLimits

0x6e62,	// (0x000afecf) blid2_tripm_pane_t4

0x782a,	// (0x000b0897) sc_clock_pane_g1_ParamLimits

0x782a,	// (0x000b0897) sc_clock_pane_g1

0x783c,	// (0x000b08a9) sc_clock_pane_t1_ParamLimits

0x783c,	// (0x000b08a9) sc_clock_pane_t1

0x785e,	// (0x000b08cb) sc_clock_pane_t2_ParamLimits

0x785e,	// (0x000b08cb) sc_clock_pane_t2

0x7876,	// (0x000b08e3) sc_clock_pane_t3_ParamLimits

0x7876,	// (0x000b08e3) sc_clock_pane_t3

0x0004,

0xfc3a,	// (0x000b8ca7) sc_clock_pane_t_ParamLimits

0xfc3a,	// (0x000b8ca7) sc_clock_pane_t

0x88b0,	// (0x000b191d) main_fs_bigclock_indicator_pane_ParamLimits

0x88b0,	// (0x000b191d) main_fs_bigclock_indicator_pane

0x791c,	// (0x000b0989) main_fs_bigclock_pane_g1_ParamLimits

0x791c,	// (0x000b0989) main_fs_bigclock_pane_g1

0x88bc,	// (0x000b1929) main_fs_bigclock_pane_t1_ParamLimits

0x88bc,	// (0x000b1929) main_fs_bigclock_pane_t1

0x88ce,	// (0x000b193b) main_fs_bigclock_pane_t2_ParamLimits

0x88ce,	// (0x000b193b) main_fs_bigclock_pane_t2

0x88e2,	// (0x000b194f) main_fs_bigclock_pane_t3_ParamLimits

0x88e2,	// (0x000b194f) main_fs_bigclock_pane_t3

0x0002,

0xfe44,	// (0x000b8eb1) main_fs_bigclock_pane_t_ParamLimits

0xfe44,	// (0x000b8eb1) main_fs_bigclock_pane_t

0xecbe,	// (0x000b7d2b) main_fs_bigclock_indicator_pane_g1

0xe164,	// (0x000b71d1) ncim_query_content_pane_g2_ParamLimits

0xe164,	// (0x000b71d1) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x000b8c76) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x000b8c76) ncim_query_content_pane_g

0x788f,	// (0x000b08fc) sc_clock_pane_t4_ParamLimits

0x788f,	// (0x000b08fc) sc_clock_pane_t4

0x94a7,	// (0x000b2514) main_radioblah_pane

0x9ace,	// (0x000b2b3b) cell_call4_button_pane_t1_copy1_ParamLimits

0x9ace,	// (0x000b2b3b) cell_call4_button_pane_t1_copy1

0x7476,	// (0x000b04e3) main_ncimui_pane_t1_ParamLimits

0x7476,	// (0x000b04e3) main_ncimui_pane_t1

0x7490,	// (0x000b04fd) main_ncimui_pane_t2_ParamLimits

0x7490,	// (0x000b04fd) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x000b8c6f) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x000b8c6f) main_ncimui_pane_t

0xe58b,	// (0x000b75f8) main_radioblah_anim_pane_ParamLimits

0xe58b,	// (0x000b75f8) main_radioblah_anim_pane

0xe59c,	// (0x000b7609) main_radioblah_info_pane_ParamLimits

0xe59c,	// (0x000b7609) main_radioblah_info_pane

0xe5b0,	// (0x000b761d) main_radioblah_pane_t1_ParamLimits

0xe5b0,	// (0x000b761d) main_radioblah_pane_t1

0xe5cc,	// (0x000b7639) main_radioblah_pane_t2_ParamLimits

0xe5cc,	// (0x000b7639) main_radioblah_pane_t2

0x0003,

0xfc5b,	// (0x000b8cc8) main_radioblah_pane_t_ParamLimits

0xfc5b,	// (0x000b8cc8) main_radioblah_pane_t

0x797b,	// (0x000b09e8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x797b,	// (0x000b09e8) main_radioblah_rocker_ctrl_pane

0xe614,	// (0x000b7681) main_radioblah_info_pane_t1_ParamLimits

0xe614,	// (0x000b7681) main_radioblah_info_pane_t1

0x79d3,	// (0x000b0a40) main_radioblah_info_pane_t2_ParamLimits

0x79d3,	// (0x000b0a40) main_radioblah_info_pane_t2

0x0003,

0xfc64,	// (0x000b8cd1) main_radioblah_info_pane_t_ParamLimits

0xfc64,	// (0x000b8cd1) main_radioblah_info_pane_t

0xcd88,	// (0x000b5df5) main_radioblah_rocker_ctrl_pane_g1

0x7a83,	// (0x000b0af0) main_radioblah_rocker_ctrl_pane_g2

0x7a8b,	// (0x000b0af8) main_radioblah_rocker_ctrl_pane_g3

0x7a93,	// (0x000b0b00) main_radioblah_rocker_ctrl_pane_g4

0x7a9b,	// (0x000b0b08) main_radioblah_rocker_ctrl_pane_g5

0x7aa3,	// (0x000b0b10) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc6d,	// (0x000b8cda) main_radioblah_rocker_ctrl_pane_g

0x7130,	// (0x000b019d) main_cset_text2_pane_t1_copy1_ParamLimits

0x9b2c,	// (0x000b2b99) cam4_image_uncrop_qvga_pane

0x9b8d,	// (0x000b2bfa) vid4_image_uncrop_qcif_pane

0x9d05,	// (0x000b2d72) cam6_image_uncrop_qvga_pane_ParamLimits

0x9d05,	// (0x000b2d72) cam6_image_uncrop_qvga_pane

0xde5f,	// (0x000b6ecc) vid6_image_uncrop_qcif_pane_ParamLimits

0xde5f,	// (0x000b6ecc) vid6_image_uncrop_qcif_pane

0x943f,	// (0x000b24ac) bg_popup_preview_window_pane_cp03

0xe116,	// (0x000b7183) list_cset_text2_pane

0xe11e,	// (0x000b718b) main_cset6_text2_pane_g1

0xe126,	// (0x000b7193) main_cset6_text2_pane_t1

0xe64e,	// (0x000b76bb) list_cset_text2_pane_t1_ParamLimits

0xe64e,	// (0x000b76bb) list_cset_text2_pane_t1

0x94a7,	// (0x000b2514) main_radioblah_pane_ParamLimits

0x77c3,	// (0x000b0830) main_mobtv_info_pane_t3_ParamLimits

0x77c3,	// (0x000b0830) main_mobtv_info_pane_t3

0x7969,	// (0x000b09d6) main_radioblah_pane_g1

0x79a3,	// (0x000b0a10) main_radioblah_info_pane_g1

0x7a28,	// (0x000b0a95) main_radioblah_info_pane_t3_ParamLimits

0x7a28,	// (0x000b0a95) main_radioblah_info_pane_t3

0x2230,	// (0x000ab29d) highlight_cell_cale_month_pane_ParamLimits

0x2230,	// (0x000ab29d) highlight_cell_cale_month_pane

0x94b5,	// (0x000b2522) main_phob_fisheye_pane

0xd0a9,	// (0x000b6116) scroll_pane_cp0031_ParamLimits

0xd0a9,	// (0x000b6116) scroll_pane_cp0031

0xdf6d,	// (0x000b6fda) wait_bar_pane_cp08_ParamLimits

0x71b2,	// (0x000b021f) cset_list_set_pane_copy1_ParamLimits

0xe669,	// (0x000b76d6) highlight_cell_cale_month_pane_g1

0x7aab,	// (0x000b0b18) highlight_cell_cale_month_pane_t1

0xdbe7,	// (0x000b6c54) list_gen_pane_cp01

0xd84a,	// (0x000b68b7) scroll_pane_01

0x7ab9,	// (0x000b0b26) list_single_double_fisheye_pane

0x7ac2,	// (0x000b0b2f) list_double_fisheye_pane_g1_ParamLimits

0x7ac2,	// (0x000b0b2f) list_double_fisheye_pane_g1

0x7ace,	// (0x000b0b3b) list_double_fisheye_pane_g2_ParamLimits

0x7ace,	// (0x000b0b3b) list_double_fisheye_pane_g2

0x7ae2,	// (0x000b0b4f) list_double_fisheye_pane_g3_ParamLimits

0x7ae2,	// (0x000b0b4f) list_double_fisheye_pane_g3

0x0004,

0xfc7a,	// (0x000b8ce7) list_double_fisheye_pane_g_ParamLimits

0xfc7a,	// (0x000b8ce7) list_double_fisheye_pane_g

0x7b0b,	// (0x000b0b78) list_double_fisheye_pane_t1_ParamLimits

0x7b0b,	// (0x000b0b78) list_double_fisheye_pane_t1

0x7b26,	// (0x000b0b93) list_double_fisheye_pane_t2_ParamLimits

0x7b26,	// (0x000b0b93) list_double_fisheye_pane_t2

0x0001,

0xfc85,	// (0x000b8cf2) list_double_fisheye_pane_t_ParamLimits

0xfc85,	// (0x000b8cf2) list_double_fisheye_pane_t

0x94b5,	// (0x000b2522) main_call5_pane

0x78ba,	// (0x000b0927) sc_swipe_pane_ParamLimits

0x78ba,	// (0x000b0927) sc_swipe_pane

0x7b5b,	// (0x000b0bc8) call5_image_pane_ParamLimits

0x7b5b,	// (0x000b0bc8) call5_image_pane

0x7b78,	// (0x000b0be5) call5_swipe_1_pane_ParamLimits

0x7b78,	// (0x000b0be5) call5_swipe_1_pane

0x7b8b,	// (0x000b0bf8) call5_swipe_2_pane_ParamLimits

0x7b8b,	// (0x000b0bf8) call5_swipe_2_pane

0x7bb6,	// (0x000b0c23) popup_call5_audio_first_window_ParamLimits

0x7bb6,	// (0x000b0c23) popup_call5_audio_first_window

0xcfcd,	// (0x000b603a) call5_swipe_1_pane_g1_ParamLimits

0xcfcd,	// (0x000b603a) call5_swipe_1_pane_g1

0xe671,	// (0x000b76de) call5_swipe_1_pane_g2_ParamLimits

0xe671,	// (0x000b76de) call5_swipe_1_pane_g2

0x0001,

0xfc8a,	// (0x000b8cf7) call5_swipe_1_pane_g_ParamLimits

0xfc8a,	// (0x000b8cf7) call5_swipe_1_pane_g

0xe67d,	// (0x000b76ea) call5_swipe_1_pane_t1_ParamLimits

0xe67d,	// (0x000b76ea) call5_swipe_1_pane_t1

0xcfcd,	// (0x000b603a) call5_swipe_2_pane_g1_ParamLimits

0xcfcd,	// (0x000b603a) call5_swipe_2_pane_g1

0xe692,	// (0x000b76ff) call5_swipe_2_pane_g2_ParamLimits

0xe692,	// (0x000b76ff) call5_swipe_2_pane_g2

0x0001,

0xfc8f,	// (0x000b8cfc) call5_swipe_2_pane_g_ParamLimits

0xfc8f,	// (0x000b8cfc) call5_swipe_2_pane_g

0xe69e,	// (0x000b770b) call5_swipe_2_pane_t1_ParamLimits

0xe69e,	// (0x000b770b) call5_swipe_2_pane_t1

0xe6b3,	// (0x000b7720) sc_swipe_pane_g1_ParamLimits

0xe6b3,	// (0x000b7720) sc_swipe_pane_g1

0xe6c0,	// (0x000b772d) sc_swipe_pane_g2_ParamLimits

0xe6c0,	// (0x000b772d) sc_swipe_pane_g2

0x0001,

0xfc94,	// (0x000b8d01) sc_swipe_pane_g_ParamLimits

0xfc94,	// (0x000b8d01) sc_swipe_pane_g

0xe6cc,	// (0x000b7739) sc_swipe_pane_t1_ParamLimits

0xe6cc,	// (0x000b7739) sc_swipe_pane_t1

0x94b5,	// (0x000b2522) main_cmail_launcher_pane

0x7bc7,	// (0x000b0c34) aid_size_cell_cmail_l_ParamLimits

0x7bc7,	// (0x000b0c34) aid_size_cell_cmail_l

0x7bd5,	// (0x000b0c42) grid_cmail_l_pane_ParamLimits

0x7bd5,	// (0x000b0c42) grid_cmail_l_pane

0x7bef,	// (0x000b0c5c) cell_cmail_l_pane_ParamLimits

0x7bef,	// (0x000b0c5c) cell_cmail_l_pane

0xe6e1,	// (0x000b774e) cell_cmail_l_pane_g1_ParamLimits

0xe6e1,	// (0x000b774e) cell_cmail_l_pane_g1

0xe6ed,	// (0x000b775a) cell_cmail_l_pane_t1_ParamLimits

0xe6ed,	// (0x000b775a) cell_cmail_l_pane_t1

0xe703,	// (0x000b7770) cell_cmail_l_pane_t2_ParamLimits

0xe703,	// (0x000b7770) cell_cmail_l_pane_t2

0x0001,

0xfc99,	// (0x000b8d06) cell_cmail_l_pane_t_ParamLimits

0xfc99,	// (0x000b8d06) cell_cmail_l_pane_t

0xa181,	// (0x000b31ee) grid_highlight_pane_cp018_ParamLimits

0xa181,	// (0x000b31ee) grid_highlight_pane_cp018

0x0502,	// (0x000a956f) main2_pane_ParamLimits

0x0502,	// (0x000a956f) main2_pane

0xa989,	// (0x000b39f6) popup_sp_fs_action_menu_bg_pane_g1

0xa991,	// (0x000b39fe) popup_sp_fs_action_menu_bg_pane_g2

0xa999,	// (0x000b3a06) popup_sp_fs_action_menu_bg_pane_g3

0xa9a1,	// (0x000b3a0e) popup_sp_fs_action_menu_bg_pane_g4

0xa9a9,	// (0x000b3a16) popup_sp_fs_action_menu_bg_pane_g5

0xa9b1,	// (0x000b3a1e) popup_sp_fs_action_menu_bg_pane_g6

0xa9b9,	// (0x000b3a26) popup_sp_fs_action_menu_bg_pane_g7

0xa9c1,	// (0x000b3a2e) popup_sp_fs_action_menu_bg_pane_g8

0xa9c9,	// (0x000b3a36) popup_sp_fs_action_menu_bg_pane_g9

0xa9d1,	// (0x000b3a3e) popup_sp_fs_action_menu_bg_pane_g10

0xa9d1,	// (0x000b3a3e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000b81f3) popup_sp_fs_action_menu_bg_pane_g

0x13fb,	// (0x000aa468) list_medium_line_x2_t3_g3_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x2_t3_g3_g1

0x1407,	// (0x000aa474) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1407,	// (0x000aa474) list_medium_line_x2_t3_g3_g2

0x1413,	// (0x000aa480) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1413,	// (0x000aa480) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x000b82a1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x000b82a1) list_medium_line_x2_t3_g3_g

0x141f,	// (0x000aa48c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x141f,	// (0x000aa48c) list_medium_line_x2_t3_g3_t1

0x1434,	// (0x000aa4a1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1434,	// (0x000aa4a1) list_medium_line_x2_t3_g3_t2

0x1448,	// (0x000aa4b5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1448,	// (0x000aa4b5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x000b82a8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x000b82a8) list_medium_line_x2_t3_g3_t

0x13fb,	// (0x000aa468) list_medium_line_x2_t3_g2_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x2_t3_g2_g1

0x1413,	// (0x000aa480) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1413,	// (0x000aa480) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x000b82af) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x000b82af) list_medium_line_x2_t3_g2_g

0x145d,	// (0x000aa4ca) list_medium_line_x2_t3_g2_t1_ParamLimits

0x145d,	// (0x000aa4ca) list_medium_line_x2_t3_g2_t1

0x1473,	// (0x000aa4e0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1473,	// (0x000aa4e0) list_medium_line_x2_t3_g2_t2

0x1448,	// (0x000aa4b5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1448,	// (0x000aa4b5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x000b82b4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x000b82b4) list_medium_line_x2_t3_g2_t

0x13fb,	// (0x000aa468) list_medium_line_x2_t4_g4_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x2_t4_g4_g1

0x1485,	// (0x000aa4f2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1485,	// (0x000aa4f2) list_medium_line_x2_t4_g4_g2

0x1407,	// (0x000aa474) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1407,	// (0x000aa474) list_medium_line_x2_t4_g4_g3

0x1491,	// (0x000aa4fe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1491,	// (0x000aa4fe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000b82bb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000b82bb) list_medium_line_x2_t4_g4_g

0x149d,	// (0x000aa50a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x149d,	// (0x000aa50a) list_medium_line_x2_t4_g4_t1

0x14b7,	// (0x000aa524) list_medium_line_x2_t4_g4_t2_ParamLimits

0x14b7,	// (0x000aa524) list_medium_line_x2_t4_g4_t2

0x14cd,	// (0x000aa53a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x14cd,	// (0x000aa53a) list_medium_line_x2_t4_g4_t3

0x14e2,	// (0x000aa54f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x14e2,	// (0x000aa54f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x000b82c4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x000b82c4) list_medium_line_x2_t4_g4_t

0x13fb,	// (0x000aa468) list_medium_line_x2_t2_g4_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x2_t2_g4_g1

0x1485,	// (0x000aa4f2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1485,	// (0x000aa4f2) list_medium_line_x2_t2_g4_g2

0x1407,	// (0x000aa474) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1407,	// (0x000aa474) list_medium_line_x2_t2_g4_g3

0x1413,	// (0x000aa480) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1413,	// (0x000aa480) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x000b832b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x000b832b) list_medium_line_x2_t2_g4_g

0x2256,	// (0x000ab2c3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2256,	// (0x000ab2c3) list_medium_line_x2_t2_g4_t1

0x1448,	// (0x000aa4b5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1448,	// (0x000aa4b5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x000b8334) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x000b8334) list_medium_line_x2_t2_g4_t

0x13fb,	// (0x000aa468) list_medium_line_x2_t2_g3_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x2_t2_g3_g1

0x1407,	// (0x000aa474) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1407,	// (0x000aa474) list_medium_line_x2_t2_g3_g2

0x1413,	// (0x000aa480) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1413,	// (0x000aa480) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x000b82a1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x000b82a1) list_medium_line_x2_t2_g3_g

0x226b,	// (0x000ab2d8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x226b,	// (0x000ab2d8) list_medium_line_x2_t2_g3_t1

0x1448,	// (0x000aa4b5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1448,	// (0x000aa4b5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x000b8339) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x000b8339) list_medium_line_x2_t2_g3_t

0x23bf,	// (0x000ab42c) main_sp_fs_list_pane_ParamLimits

0x23bf,	// (0x000ab42c) main_sp_fs_list_pane

0xc1ae,	// (0x000b521b) sp_fs_scroll_pane_ParamLimits

0xc1ae,	// (0x000b521b) sp_fs_scroll_pane

0x23cb,	// (0x000ab438) list_medium_line_x2_t3_t1

0x23db,	// (0x000ab448) list_medium_line_x2_t3_t2

0x23e9,	// (0x000ab456) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x000b8384) list_medium_line_x2_t3_t

0x23f7,	// (0x000ab464) list_medium_line_x3_t4_t1

0x2407,	// (0x000ab474) list_medium_line_x3_t4_t2

0x2415,	// (0x000ab482) list_medium_line_x3_t4_t3

0x23e9,	// (0x000ab456) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x000b838b) list_medium_line_x3_t4_t

0x2423,	// (0x000ab490) list_medium_line_x4_t5_t1

0x2433,	// (0x000ab4a0) list_medium_line_x4_t5_t2

0x2415,	// (0x000ab482) list_medium_line_x4_t5_t3

0x2441,	// (0x000ab4ae) list_medium_line_x4_t5_t4

0x23e9,	// (0x000ab456) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x000b8394) list_medium_line_x4_t5_t

0x13fb,	// (0x000aa468) list_medium_line_t4_g4_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_t4_g4_g1

0x1491,	// (0x000aa4fe) list_medium_line_t4_g4_g2_ParamLimits

0x1491,	// (0x000aa4fe) list_medium_line_t4_g4_g2

0x244f,	// (0x000ab4bc) list_medium_line_t4_g4_g3_ParamLimits

0x244f,	// (0x000ab4bc) list_medium_line_t4_g4_g3

0x1413,	// (0x000aa480) list_medium_line_t4_g4_g4_ParamLimits

0x1413,	// (0x000aa480) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x000b839f) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x000b839f) list_medium_line_t4_g4_g

0x245b,	// (0x000ab4c8) list_medium_line_t4_g4_t1_ParamLimits

0x245b,	// (0x000ab4c8) list_medium_line_t4_g4_t1

0x2470,	// (0x000ab4dd) list_medium_line_t4_g4_t2_ParamLimits

0x2470,	// (0x000ab4dd) list_medium_line_t4_g4_t2

0x2485,	// (0x000ab4f2) list_medium_line_t4_g4_t3_ParamLimits

0x2485,	// (0x000ab4f2) list_medium_line_t4_g4_t3

0x1448,	// (0x000aa4b5) list_medium_line_t4_g4_t4_ParamLimits

0x1448,	// (0x000aa4b5) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x000b83a8) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x000b83a8) list_medium_line_t4_g4_t

0x255d,	// (0x000ab5ca) chi_dic_find_pane_g1

0x3597,	// (0x000ac604) main_tport_pane

0x64bd,	// (0x000af52a) list_medium_line_plain_t1

0x6565,	// (0x000af5d2) list_medium_line_t2_g2_g1_ParamLimits

0x6565,	// (0x000af5d2) list_medium_line_t2_g2_g1

0x6571,	// (0x000af5de) list_medium_line_t2_g2_g2_ParamLimits

0x6571,	// (0x000af5de) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x000b8a80) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x000b8a80) list_medium_line_t2_g2_g

0x657d,	// (0x000af5ea) list_medium_line_t2_g2_t1_ParamLimits

0x657d,	// (0x000af5ea) list_medium_line_t2_g2_t1

0x6597,	// (0x000af604) list_medium_line_t2_g2_t2_ParamLimits

0x6597,	// (0x000af604) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x000b8a85) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x000b8a85) list_medium_line_t2_g2_t

0xa2bc,	// (0x000b3329) aid_sp_fs_list_icon_a_sm

0xa2c4,	// (0x000b3331) aid_sp_fs_list_icon_d

0xaf24,	// (0x000b3f91) aid_sp_fs_text_primary

0xaf2d,	// (0x000b3f9a) aid_sp_fs_text_secondary

0x6c0f,	// (0x000afc7c) list_medium_line

0x6c0f,	// (0x000afc7c) list_medium_line_g2

0x6c0f,	// (0x000afc7c) list_medium_line_g3

0x6c0f,	// (0x000afc7c) list_medium_line_plain

0x6c0f,	// (0x000afc7c) list_medium_line_plain_t2

0x6c0f,	// (0x000afc7c) list_medium_line_plain_t3

0x6c0f,	// (0x000afc7c) list_medium_line_right_icon

0x6c0f,	// (0x000afc7c) list_medium_line_right_iconx2

0x6c0f,	// (0x000afc7c) list_medium_line_t2

0x6c0f,	// (0x000afc7c) list_medium_line_t2_g2

0x6c0f,	// (0x000afc7c) list_medium_line_t2_g3

0x6c0f,	// (0x000afc7c) list_medium_line_t2_right_icon

0x6c0f,	// (0x000afc7c) list_medium_line_t2_right_iconx2

0x6c0f,	// (0x000afc7c) list_medium_line_t3

0x6c0f,	// (0x000afc7c) list_medium_line_t3_g2

0x6c0f,	// (0x000afc7c) list_medium_line_t3_g3

0x6c0f,	// (0x000afc7c) list_medium_line_t3_right_iconx2

0x6c18,	// (0x000afc85) list_medium_line_t4_g4

0x6c21,	// (0x000afc8e) list_medium_line_x2

0x6c21,	// (0x000afc8e) list_medium_line_x2_t2_g2

0x6c21,	// (0x000afc8e) list_medium_line_x2_t2_g3

0x6c21,	// (0x000afc8e) list_medium_line_x2_t2_g4

0x6c21,	// (0x000afc8e) list_medium_line_x2_t3

0x6c21,	// (0x000afc8e) list_medium_line_x2_t3_g2

0x6c21,	// (0x000afc8e) list_medium_line_x2_t3_g3

0x6c21,	// (0x000afc8e) list_medium_line_x2_t3_g4

0x6c21,	// (0x000afc8e) list_medium_line_x2_t4_g2

0x6c21,	// (0x000afc8e) list_medium_line_x2_t4_g4

0x6c2a,	// (0x000afc97) list_medium_line_x3

0x6c2a,	// (0x000afc97) list_medium_line_x3_t4

0x6c2a,	// (0x000afc97) list_medium_line_x3_t4_g4

0x6c18,	// (0x000afc85) list_medium_line_x4_t4

0x6c18,	// (0x000afc85) list_medium_line_x4_t4_g7

0x6c18,	// (0x000afc85) list_medium_line_x4_t5

0x6c33,	// (0x000afca0) list_single_fs_dyc_pane_ParamLimits

0x6c33,	// (0x000afca0) list_single_fs_dyc_pane

0x13fb,	// (0x000aa468) list_medium_line_x4_t4_g7_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x4_t4_g7_g1

0x7374,	// (0x000b03e1) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7374,	// (0x000b03e1) list_medium_line_x4_t4_g7_g2

0x7380,	// (0x000b03ed) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7380,	// (0x000b03ed) list_medium_line_x4_t4_g7_g3

0x738f,	// (0x000b03fc) list_medium_line_x4_t4_g7_g4_ParamLimits

0x738f,	// (0x000b03fc) list_medium_line_x4_t4_g7_g4

0x739b,	// (0x000b0408) list_medium_line_x4_t4_g7_g5_ParamLimits

0x739b,	// (0x000b0408) list_medium_line_x4_t4_g7_g5

0x73aa,	// (0x000b0417) list_medium_line_x4_t4_g7_g6_ParamLimits

0x73aa,	// (0x000b0417) list_medium_line_x4_t4_g7_g6

0x73b9,	// (0x000b0426) list_medium_line_x4_t4_g7_g7_ParamLimits

0x73b9,	// (0x000b0426) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x000b8c50) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x000b8c50) list_medium_line_x4_t4_g7_g

0x73c5,	// (0x000b0432) list_medium_line_x4_t4_g7_t1_ParamLimits

0x73c5,	// (0x000b0432) list_medium_line_x4_t4_g7_t1

0x73da,	// (0x000b0447) list_medium_line_x4_t4_g7_t2_ParamLimits

0x73da,	// (0x000b0447) list_medium_line_x4_t4_g7_t2

0x73ef,	// (0x000b045c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x73ef,	// (0x000b045c) list_medium_line_x4_t4_g7_t3

0x7404,	// (0x000b0471) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7404,	// (0x000b0471) list_medium_line_x4_t4_g7_t4

0x7416,	// (0x000b0483) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7416,	// (0x000b0483) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x000b8c5f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x000b8c5f) list_medium_line_x4_t4_g7_t

0x7428,	// (0x000b0495) list_single_dyc_row_pane_ParamLimits

0x7428,	// (0x000b0495) list_single_dyc_row_pane

0x7b48,	// (0x000b0bb5) call5_gesture_pane_ParamLimits

0x7b48,	// (0x000b0bb5) call5_gesture_pane

0x7b9e,	// (0x000b0c0b) call5_windows_pane_ParamLimits

0x7b9e,	// (0x000b0c0b) call5_windows_pane

0x7c09,	// (0x000b0c76) call5_swipe_1_pane_cp_ParamLimits

0x7c09,	// (0x000b0c76) call5_swipe_1_pane_cp

0x7c15,	// (0x000b0c82) call5_swipe_2_pane_cp_ParamLimits

0x7c15,	// (0x000b0c82) call5_swipe_2_pane_cp

0xaad3,	// (0x000b3b40) call5_image_pane_cp

0x7c21,	// (0x000b0c8e) popup_call5_audio_first_window_cp_ParamLimits

0x7c21,	// (0x000b0c8e) popup_call5_audio_first_window_cp

0xe6b3,	// (0x000b7720) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6b3,	// (0x000b7720) call5_swipe_1_pane_g1_cp

0xe720,	// (0x000b778d) call5_swipe_1_pane_g2_cp

0xe6cc,	// (0x000b7739) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6cc,	// (0x000b7739) call5_swipe_1_pane_t1_cp

0xe6b3,	// (0x000b7720) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6b3,	// (0x000b7720) call5_swipe_2_pane_g1_cp

0xe728,	// (0x000b7795) call5_swipe_2_pane_g2_cp

0xe730,	// (0x000b779d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe730,	// (0x000b779d) call5_swipe_2_pane_t1_cp

0xa181,	// (0x000b31ee) main_sp_fs_email_pane

0xe745,	// (0x000b77b2) main_sp_fs_listscroll_pane_te

0x7c2f,	// (0x000b0c9c) popup_sp_fs_action_menu_pane_ParamLimits

0x7c2f,	// (0x000b0c9c) popup_sp_fs_action_menu_pane

0xcd88,	// (0x000b5df5) bg_sp_fs_ctrlbar_pane_g1

0xe74e,	// (0x000b77bb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe757,	// (0x000b77c4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe760,	// (0x000b77cd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd88,	// (0x000b5df5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc9e,	// (0x000b8d0b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb6d,	// (0x000b5bda) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb6d,	// (0x000b5bda) bg_sp_fs_ctrlbar_ddmenu_pane

0xe769,	// (0x000b77d6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe769,	// (0x000b77d6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe775,	// (0x000b77e2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe775,	// (0x000b77e2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfca7,	// (0x000b8d14) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfca7,	// (0x000b8d14) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe781,	// (0x000b77ee) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe781,	// (0x000b77ee) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c73,	// (0x000b0ce0) list_medium_line_t2_right_icon_g1

0x7c7b,	// (0x000b0ce8) list_medium_line_t2_right_icon_t1

0x7c8b,	// (0x000b0cf8) list_medium_line_t2_right_icon_t2

0x0001,

0xfcac,	// (0x000b8d19) list_medium_line_t2_right_icon_t

0xc980,	// (0x000b59ed) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc980,	// (0x000b59ed) bg_sp_fs_ctrlbar_pane

0x7ce5,	// (0x000b0d52) main_sp_fs_ctrlbar_button_pane_cp01

0x7cef,	// (0x000b0d5c) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d3,	// (0x000b7840) main_sp_fs_ctrlbar_pane_g1

0xe7df,	// (0x000b784c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcb1,	// (0x000b8d1e) main_sp_fs_ctrlbar_pane_g

0xe7eb,	// (0x000b7858) main_sp_fs_ctrlbar_pane_t1

0x7cf9,	// (0x000b0d66) main_sp_fs_ctrlbar_pane

0x7d1d,	// (0x000b0d8a) main_sp_fs_listscroll_pane_te_cp01

0x7d3d,	// (0x000b0daa) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d3d,	// (0x000b0daa) popup_sp_fs_action_menu_pane_cp01

0xa181,	// (0x000b31ee) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa181,	// (0x000b31ee) bg_sp_fs_highlight_list_pane_cp01

0xa2f8,	// (0x000b3365) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa2f8,	// (0x000b3365) sp_fs_action_menu_list_gene_pane_g1

0xe81b,	// (0x000b7888) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe81b,	// (0x000b7888) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcbb,	// (0x000b8d28) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcbb,	// (0x000b8d28) sp_fs_action_menu_list_gene_pane_g

0xa307,	// (0x000b3374) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa307,	// (0x000b3374) sp_fs_action_menu_list_gene_pane_t1

0xa31f,	// (0x000b338c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa31f,	// (0x000b338c) sp_fs_action_menu_list_gene_pane

0xe828,	// (0x000b7895) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe828,	// (0x000b7895) popup_sp_fs_action_menu_bg_pane

0xa33e,	// (0x000b33ab) sp_fs_action_menu_list_pane_ParamLimits

0xa33e,	// (0x000b33ab) sp_fs_action_menu_list_pane

0x7d6d,	// (0x000b0dda) sp_fs_scroll_pane_cp01_ParamLimits

0x7d6d,	// (0x000b0dda) sp_fs_scroll_pane_cp01

0x7d93,	// (0x000b0e00) list_medium_line_plain_t2_t1

0x7da3,	// (0x000b0e10) list_medium_line_plain_t2_t2

0x0001,

0xfcc0,	// (0x000b8d2d) list_medium_line_plain_t2_t

0x7db3,	// (0x000b0e20) list_medium_line_plain_t3_t1

0x7dc3,	// (0x000b0e30) list_medium_line_plain_t3_t2

0x7dd1,	// (0x000b0e3e) list_medium_line_plain_t3_t3

0x0002,

0xfcc5,	// (0x000b8d32) list_medium_line_plain_t3_t

0x13fb,	// (0x000aa468) list_medium_line_x2_t2_g2_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x2_t2_g2_g1

0x1413,	// (0x000aa480) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1413,	// (0x000aa480) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x000b82af) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x000b82af) list_medium_line_x2_t2_g2_g

0x245b,	// (0x000ab4c8) list_medium_line_x2_t2_g2_t1_ParamLimits

0x245b,	// (0x000ab4c8) list_medium_line_x2_t2_g2_t1

0x1448,	// (0x000aa4b5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1448,	// (0x000aa4b5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfccc,	// (0x000b8d39) list_medium_line_x2_t2_g2_t_ParamLimits

0xfccc,	// (0x000b8d39) list_medium_line_x2_t2_g2_t

0x13fb,	// (0x000aa468) list_medium_line_x2_t4_g2_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x2_t4_g2_g1

0x7ddf,	// (0x000b0e4c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7ddf,	// (0x000b0e4c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcd1,	// (0x000b8d3e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcd1,	// (0x000b8d3e) list_medium_line_x2_t4_g2_g

0x7df1,	// (0x000b0e5e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7df1,	// (0x000b0e5e) list_medium_line_x2_t4_g2_t1

0x7e0b,	// (0x000b0e78) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e0b,	// (0x000b0e78) list_medium_line_x2_t4_g2_t2

0x7e21,	// (0x000b0e8e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e21,	// (0x000b0e8e) list_medium_line_x2_t4_g2_t3

0x1448,	// (0x000aa4b5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1448,	// (0x000aa4b5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcd6,	// (0x000b8d43) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcd6,	// (0x000b8d43) list_medium_line_x2_t4_g2_t

0x7e36,	// (0x000b0ea3) list_medium_line_t3_right_iconx2_g1

0x7c73,	// (0x000b0ce0) list_medium_line_t3_right_iconx2_g2

0x7e3e,	// (0x000b0eab) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcdf,	// (0x000b8d4c) list_medium_line_t3_right_iconx2_g

0x7e48,	// (0x000b0eb5) list_medium_line_t3_right_iconx2_t1

0x7e58,	// (0x000b0ec5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfce6,	// (0x000b8d53) list_medium_line_t3_right_iconx2_t

0x13fb,	// (0x000aa468) list_medium_line_x3_t4_g4_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x3_t4_g4_g1

0x1407,	// (0x000aa474) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1407,	// (0x000aa474) list_medium_line_x3_t4_g4_g2

0x1491,	// (0x000aa4fe) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1491,	// (0x000aa4fe) list_medium_line_x3_t4_g4_g3

0x7e66,	// (0x000b0ed3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e66,	// (0x000b0ed3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfceb,	// (0x000b8d58) list_medium_line_x3_t4_g4_g_ParamLimits

0xfceb,	// (0x000b8d58) list_medium_line_x3_t4_g4_g

0x7e72,	// (0x000b0edf) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e72,	// (0x000b0edf) list_medium_line_x3_t4_g4_t1

0x7e89,	// (0x000b0ef6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e89,	// (0x000b0ef6) list_medium_line_x3_t4_g4_t2

0x2470,	// (0x000ab4dd) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2470,	// (0x000ab4dd) list_medium_line_x3_t4_g4_t3

0x7ea4,	// (0x000b0f11) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7ea4,	// (0x000b0f11) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcf4,	// (0x000b8d61) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcf4,	// (0x000b8d61) list_medium_line_x3_t4_g4_t

0x7ec1,	// (0x000b0f2e) list_single_dyc_row_text_pane_t1_ParamLimits

0x7ec1,	// (0x000b0f2e) list_single_dyc_row_text_pane_t1

0x7f0a,	// (0x000b0f77) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f0a,	// (0x000b0f77) list_single_dyc_row_text_pane_t2

0xa35e,	// (0x000b33cb) list_single_dyc_row_text_pane_t3_ParamLimits

0xa35e,	// (0x000b33cb) list_single_dyc_row_text_pane_t3

0x0005,

0xfcfd,	// (0x000b8d6a) list_single_dyc_row_text_pane_t_ParamLimits

0xfcfd,	// (0x000b8d6a) list_single_dyc_row_text_pane_t

0xa382,	// (0x000b33ef) list_single_dyc_row_pane_g1_ParamLimits

0xa382,	// (0x000b33ef) list_single_dyc_row_pane_g1

0xa38e,	// (0x000b33fb) list_single_dyc_row_pane_g2_ParamLimits

0xa38e,	// (0x000b33fb) list_single_dyc_row_pane_g2

0xa39a,	// (0x000b3407) list_single_dyc_row_pane_g3_ParamLimits

0xa39a,	// (0x000b3407) list_single_dyc_row_pane_g3

0xa3a6,	// (0x000b3413) list_single_dyc_row_pane_g4_ParamLimits

0xa3a6,	// (0x000b3413) list_single_dyc_row_pane_g4

0x0003,

0xfd0a,	// (0x000b8d77) list_single_dyc_row_pane_g_ParamLimits

0xfd0a,	// (0x000b8d77) list_single_dyc_row_pane_g

0xa3b2,	// (0x000b341f) list_single_dyc_row_text_pane_ParamLimits

0xa3b2,	// (0x000b341f) list_single_dyc_row_text_pane

0x943f,	// (0x000b24ac) bg_sp_fs_scroll_pane

0xe836,	// (0x000b78a3) thumb_sp_fs_scroll_pane

0x6565,	// (0x000af5d2) list_medium_line_g1_ParamLimits

0x6565,	// (0x000af5d2) list_medium_line_g1

0x803f,	// (0x000b10ac) list_medium_line_t1_ParamLimits

0x803f,	// (0x000b10ac) list_medium_line_t1

0x13fb,	// (0x000aa468) list_medium_line_x2_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x2_g1

0x1407,	// (0x000aa474) list_medium_line_x2_g2_ParamLimits

0x1407,	// (0x000aa474) list_medium_line_x2_g2

0x0001,

0xfd13,	// (0x000b8d80) list_medium_line_x2_g_ParamLimits

0xfd13,	// (0x000b8d80) list_medium_line_x2_g

0xa3d1,	// (0x000b343e) list_medium_line_x2_t1_ParamLimits

0xa3d1,	// (0x000b343e) list_medium_line_x2_t1

0x13fb,	// (0x000aa468) list_medium_line_x3_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x3_g1

0x1407,	// (0x000aa474) list_medium_line_x3_g2_ParamLimits

0x1407,	// (0x000aa474) list_medium_line_x3_g2

0x0001,

0xfd13,	// (0x000b8d80) list_medium_line_x3_g_ParamLimits

0xfd13,	// (0x000b8d80) list_medium_line_x3_g

0xa3d1,	// (0x000b343e) list_medium_line_x3_t1_ParamLimits

0xa3d1,	// (0x000b343e) list_medium_line_x3_t1

0xe83f,	// (0x000b78ac) thumb_sp_fs_scroll_pane_g1

0xe848,	// (0x000b78b5) thumb_sp_fs_scroll_pane_g2

0xe851,	// (0x000b78be) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd18,	// (0x000b8d85) thumb_sp_fs_scroll_pane_g

0xe83f,	// (0x000b78ac) bg_sp_fs_scroll_pane_g1

0xe848,	// (0x000b78b5) bg_sp_fs_scroll_pane_g2

0xe851,	// (0x000b78be) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd18,	// (0x000b8d85) bg_sp_fs_scroll_pane_g

0x13fb,	// (0x000aa468) list_medium_line_x2_t3_g4_g1_ParamLimits

0x13fb,	// (0x000aa468) list_medium_line_x2_t3_g4_g1

0x1485,	// (0x000aa4f2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1485,	// (0x000aa4f2) list_medium_line_x2_t3_g4_g2

0x1407,	// (0x000aa474) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1407,	// (0x000aa474) list_medium_line_x2_t3_g4_g3

0x1413,	// (0x000aa480) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1413,	// (0x000aa480) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x000b832b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x000b832b) list_medium_line_x2_t3_g4_g

0x8054,	// (0x000b10c1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8054,	// (0x000b10c1) list_medium_line_x2_t3_g4_t1

0x806e,	// (0x000b10db) list_medium_line_x2_t3_g4_t2_ParamLimits

0x806e,	// (0x000b10db) list_medium_line_x2_t3_g4_t2

0x1448,	// (0x000aa4b5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1448,	// (0x000aa4b5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd1f,	// (0x000b8d8c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd1f,	// (0x000b8d8c) list_medium_line_x2_t3_g4_t

0x6565,	// (0x000af5d2) list_medium_line_g2_g1_ParamLimits

0x6565,	// (0x000af5d2) list_medium_line_g2_g1

0x6571,	// (0x000af5de) list_medium_line_g2_g2_ParamLimits

0x6571,	// (0x000af5de) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x000b8a80) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x000b8a80) list_medium_line_g2_g

0x8088,	// (0x000b10f5) list_medium_line_g2_t1_ParamLimits

0x8088,	// (0x000b10f5) list_medium_line_g2_t1

0x6565,	// (0x000af5d2) list_medium_line_t3_g2_g1_ParamLimits

0x6565,	// (0x000af5d2) list_medium_line_t3_g2_g1

0x6571,	// (0x000af5de) list_medium_line_t3_g2_g2_ParamLimits

0x6571,	// (0x000af5de) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x000b8a80) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x000b8a80) list_medium_line_t3_g2_g

0x809d,	// (0x000b110a) list_medium_line_t3_g2_t1_ParamLimits

0x809d,	// (0x000b110a) list_medium_line_t3_g2_t1

0x80b7,	// (0x000b1124) list_medium_line_t3_g2_t2_ParamLimits

0x80b7,	// (0x000b1124) list_medium_line_t3_g2_t2

0x80cd,	// (0x000b113a) list_medium_line_t3_g2_t3_ParamLimits

0x80cd,	// (0x000b113a) list_medium_line_t3_g2_t3

0x0002,

0xfd26,	// (0x000b8d93) list_medium_line_t3_g2_t_ParamLimits

0xfd26,	// (0x000b8d93) list_medium_line_t3_g2_t

0x7c73,	// (0x000b0ce0) list_medium_line_right_icon_g1

0x80e7,	// (0x000b1154) list_medium_line_right_icon_t1

0x6565,	// (0x000af5d2) list_medium_line_t2_g1_ParamLimits

0x6565,	// (0x000af5d2) list_medium_line_t2_g1

0x80f5,	// (0x000b1162) list_medium_line_t2_t1_ParamLimits

0x80f5,	// (0x000b1162) list_medium_line_t2_t1

0x810f,	// (0x000b117c) list_medium_line_t2_t2_ParamLimits

0x810f,	// (0x000b117c) list_medium_line_t2_t2

0x0001,

0xfd2d,	// (0x000b8d9a) list_medium_line_t2_t_ParamLimits

0xfd2d,	// (0x000b8d9a) list_medium_line_t2_t

0x6565,	// (0x000af5d2) list_medium_line_t3_g1_ParamLimits

0x6565,	// (0x000af5d2) list_medium_line_t3_g1

0x8128,	// (0x000b1195) list_medium_line_t3_t1_ParamLimits

0x8128,	// (0x000b1195) list_medium_line_t3_t1

0x8142,	// (0x000b11af) list_medium_line_t3_t2_ParamLimits

0x8142,	// (0x000b11af) list_medium_line_t3_t2

0x8158,	// (0x000b11c5) list_medium_line_t3_t3_ParamLimits

0x8158,	// (0x000b11c5) list_medium_line_t3_t3

0x0002,

0xfd32,	// (0x000b8d9f) list_medium_line_t3_t_ParamLimits

0xfd32,	// (0x000b8d9f) list_medium_line_t3_t

0x6565,	// (0x000af5d2) list_medium_line_g3_g1_ParamLimits

0x6565,	// (0x000af5d2) list_medium_line_g3_g1

0x816d,	// (0x000b11da) list_medium_line_g3_g2_ParamLimits

0x816d,	// (0x000b11da) list_medium_line_g3_g2

0x6571,	// (0x000af5de) list_medium_line_g3_g3_ParamLimits

0x6571,	// (0x000af5de) list_medium_line_g3_g3

0x0002,

0xfd39,	// (0x000b8da6) list_medium_line_g3_g_ParamLimits

0xfd39,	// (0x000b8da6) list_medium_line_g3_g

0x8179,	// (0x000b11e6) list_medium_line_g3_t1_ParamLimits

0x8179,	// (0x000b11e6) list_medium_line_g3_t1

0x6565,	// (0x000af5d2) list_medium_line_t2_g3_g1_ParamLimits

0x6565,	// (0x000af5d2) list_medium_line_t2_g3_g1

0x816d,	// (0x000b11da) list_medium_line_t2_g3_g2_ParamLimits

0x816d,	// (0x000b11da) list_medium_line_t2_g3_g2

0x6571,	// (0x000af5de) list_medium_line_t2_g3_g3_ParamLimits

0x6571,	// (0x000af5de) list_medium_line_t2_g3_g3

0x0002,

0xfd39,	// (0x000b8da6) list_medium_line_t2_g3_g_ParamLimits

0xfd39,	// (0x000b8da6) list_medium_line_t2_g3_g

0x818e,	// (0x000b11fb) list_medium_line_t2_g3_t1_ParamLimits

0x818e,	// (0x000b11fb) list_medium_line_t2_g3_t1

0x81a8,	// (0x000b1215) list_medium_line_t2_g3_t2_ParamLimits

0x81a8,	// (0x000b1215) list_medium_line_t2_g3_t2

0x0001,

0xfd40,	// (0x000b8dad) list_medium_line_t2_g3_t_ParamLimits

0xfd40,	// (0x000b8dad) list_medium_line_t2_g3_t

0x6565,	// (0x000af5d2) list_medium_line_t3_g3_g1_ParamLimits

0x6565,	// (0x000af5d2) list_medium_line_t3_g3_g1

0x816d,	// (0x000b11da) list_medium_line_t3_g3_g2_ParamLimits

0x816d,	// (0x000b11da) list_medium_line_t3_g3_g2

0x6571,	// (0x000af5de) list_medium_line_t3_g3_g3_ParamLimits

0x6571,	// (0x000af5de) list_medium_line_t3_g3_g3

0x0002,

0xfd39,	// (0x000b8da6) list_medium_line_t3_g3_g_ParamLimits

0xfd39,	// (0x000b8da6) list_medium_line_t3_g3_g

0x81c6,	// (0x000b1233) list_medium_line_t3_g3_t1_ParamLimits

0x81c6,	// (0x000b1233) list_medium_line_t3_g3_t1

0x81df,	// (0x000b124c) list_medium_line_t3_g3_t2_ParamLimits

0x81df,	// (0x000b124c) list_medium_line_t3_g3_t2

0x81f5,	// (0x000b1262) list_medium_line_t3_g3_t3_ParamLimits

0x81f5,	// (0x000b1262) list_medium_line_t3_g3_t3

0x0002,

0xfd45,	// (0x000b8db2) list_medium_line_t3_g3_t_ParamLimits

0xfd45,	// (0x000b8db2) list_medium_line_t3_g3_t

0x7e36,	// (0x000b0ea3) list_medium_line_right_iconx2_g1

0x7c73,	// (0x000b0ce0) list_medium_line_right_iconx2_g2

0x0001,

0xfd4c,	// (0x000b8db9) list_medium_line_right_iconx2_g

0xa3e7,	// (0x000b3454) list_medium_line_right_iconx2_t1

0x7e36,	// (0x000b0ea3) list_medium_line_t2_right_iconx2_g1

0x7c73,	// (0x000b0ce0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd4c,	// (0x000b8db9) list_medium_line_t2_right_iconx2_g

0x820f,	// (0x000b127c) list_medium_line_t2_right_iconx2_t1

0x821f,	// (0x000b128c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd51,	// (0x000b8dbe) list_medium_line_t2_right_iconx2_t

0x8231,	// (0x000b129e) list_medium_line_x4_t4_t1

0x823f,	// (0x000b12ac) list_medium_line_x4_t4_t2

0x824f,	// (0x000b12bc) list_medium_line_x4_t4_t3

0x825f,	// (0x000b12cc) list_medium_line_x4_t4_t4

0x0003,

0xfd56,	// (0x000b8dc3) list_medium_line_x4_t4_t

0x82b2,	// (0x000b131f) tport_appsw_pane_ParamLimits

0x82b2,	// (0x000b131f) tport_appsw_pane

0x82ca,	// (0x000b1337) tport_contact_pane_ParamLimits

0x82ca,	// (0x000b1337) tport_contact_pane

0x82e2,	// (0x000b134f) tport_listscroll_pane_ParamLimits

0x82e2,	// (0x000b134f) tport_listscroll_pane

0x82fc,	// (0x000b1369) cell_tport_appsw_pane_ParamLimits

0x82fc,	// (0x000b1369) cell_tport_appsw_pane

0xd710,	// (0x000b677d) tport_appsw_pane_g1_ParamLimits

0xd710,	// (0x000b677d) tport_appsw_pane_g1

0xe85a,	// (0x000b78c7) tport_contact_pane_g1

0xe863,	// (0x000b78d0) tport_contact_pane_t1

0xe871,	// (0x000b78de) tport_contact_pane_t2

0x0001,

0xfd5f,	// (0x000b8dcc) tport_contact_pane_t

0xe87f,	// (0x000b78ec) list_tport_pane

0xe888,	// (0x000b78f5) scroll_pane_cp_030

0x8344,	// (0x000b13b1) cell_tport_appsw_pane_g1

0x8354,	// (0x000b13c1) cell_tport_appsw_pane_t1

0x8362,	// (0x000b13cf) grid_highlight_pane_cp019

0x836a,	// (0x000b13d7) list_tport_double_graphic_pane_ParamLimits

0x836a,	// (0x000b13d7) list_tport_double_graphic_pane

0xa181,	// (0x000b31ee) list_highlight_pane_cp023_ParamLimits

0xa181,	// (0x000b31ee) list_highlight_pane_cp023

0x8377,	// (0x000b13e4) list_tport_double_graphic_pane_g1_ParamLimits

0x8377,	// (0x000b13e4) list_tport_double_graphic_pane_g1

0x8384,	// (0x000b13f1) list_tport_double_graphic_pane_t1_ParamLimits

0x8384,	// (0x000b13f1) list_tport_double_graphic_pane_t1

0x8399,	// (0x000b1406) list_tport_double_graphic_pane_t2_ParamLimits

0x8399,	// (0x000b1406) list_tport_double_graphic_pane_t2

0x0001,

0xfd6b,	// (0x000b8dd8) list_tport_double_graphic_pane_t_ParamLimits

0xfd6b,	// (0x000b8dd8) list_tport_double_graphic_pane_t

0x943f,	// (0x000b24ac) main_cale_note_pane

0x5d15,	// (0x000aed82) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d15,	// (0x000aed82) cell_vitu2_function_top_wide_pane_cp01

0x77d7,	// (0x000b0844) wait_bar_pane_cp05_ParamLimits

0xa181,	// (0x000b31ee) listscroll_cmail_pane

0xe891,	// (0x000b78fe) list_cmail_pane

0x83ab,	// (0x000b1418) list_cmail_body_pane

0x83c0,	// (0x000b142d) list_single_cmail_header_caption_pane

0x83d7,	// (0x000b1444) list_single_cmail_header_detail_pane_ParamLimits

0x83d7,	// (0x000b1444) list_single_cmail_header_detail_pane

0xe8a1,	// (0x000b790e) list_single_cmail_header_caption_pane_t1

0x8401,	// (0x000b146e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8401,	// (0x000b146e) list_single_cmail_header_detail_pane_g1

0xa3f5,	// (0x000b3462) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa3f5,	// (0x000b3462) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd70,	// (0x000b8ddd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd70,	// (0x000b8ddd) list_single_cmail_header_detail_pane_g

0xa401,	// (0x000b346e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa401,	// (0x000b346e) list_single_cmail_header_detail_pane_t1

0xa461,	// (0x000b34ce) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa461,	// (0x000b34ce) list_single_cmail_header_editor_pane_bg

0xe346,	// (0x000b73b3) list_cmail_body_pane_g1

0xe8c5,	// (0x000b7932) list_cmail_body_pane_t1

0xd730,	// (0x000b679d) list_single_cmail_header_editor_pane_bg_g1

0xad2c,	// (0x000b3d99) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd740,	// (0x000b67ad) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd738,	// (0x000b67a5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd96c,	// (0x000b69d9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd760,	// (0x000b67cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd750,	// (0x000b67bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd758,	// (0x000b67c5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad0c,	// (0x000b3d79) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8419,	// (0x000b1486) calenote_gesture_pane_ParamLimits

0x8419,	// (0x000b1486) calenote_gesture_pane

0x8439,	// (0x000b14a6) calenote_window_pane_ParamLimits

0x8439,	// (0x000b14a6) calenote_window_pane

0xe8d3,	// (0x000b7940) popup_note_window_cp01

0x8455,	// (0x000b14c2) calenote_swipe_1_pane_ParamLimits

0x8455,	// (0x000b14c2) calenote_swipe_1_pane

0x7c15,	// (0x000b0c82) calenote_swipe_2_pane_ParamLimits

0x7c15,	// (0x000b0c82) calenote_swipe_2_pane

0xe6b3,	// (0x000b7720) calenote_swipe_1_pane_g1_ParamLimits

0xe6b3,	// (0x000b7720) calenote_swipe_1_pane_g1

0xe6c0,	// (0x000b772d) calenote_swipe_1_pane_g2_ParamLimits

0xe6c0,	// (0x000b772d) calenote_swipe_1_pane_g2

0x0001,

0xfc94,	// (0x000b8d01) calenote_swipe_1_pane_g_ParamLimits

0xfc94,	// (0x000b8d01) calenote_swipe_1_pane_g

0xe8e5,	// (0x000b7952) calenote_swipe_1_pane_t1_ParamLimits

0xe8e5,	// (0x000b7952) calenote_swipe_1_pane_t1

0xe6b3,	// (0x000b7720) calenote_swipe_2_pane_g1_ParamLimits

0xe6b3,	// (0x000b7720) calenote_swipe_2_pane_g1

0xe904,	// (0x000b7971) calenote_swipe_2_pane_g2_ParamLimits

0xe904,	// (0x000b7971) calenote_swipe_2_pane_g2

0x0001,

0xfd7c,	// (0x000b8de9) calenote_swipe_2_pane_g_ParamLimits

0xfd7c,	// (0x000b8de9) calenote_swipe_2_pane_g

0xe910,	// (0x000b797d) calenote_swipe_2_pane_t1_ParamLimits

0xe910,	// (0x000b797d) calenote_swipe_2_pane_t1

0x943f,	// (0x000b24ac) main_mup_navstr_pane

0x4952,	// (0x000ad9bf) main_mup3_pane_t7_ParamLimits

0x4952,	// (0x000ad9bf) main_mup3_pane_t7

0x98fa,	// (0x000b2967) main_mp4_pane_g6_ParamLimits

0x98fa,	// (0x000b2967) main_mp4_pane_g6

0x9abc,	// (0x000b2b29) main_image3_pane_t4_ParamLimits

0x9abc,	// (0x000b2b29) main_image3_pane_t4

0x846a,	// (0x000b14d7) popup_navstr_preview_pane_ParamLimits

0x846a,	// (0x000b14d7) popup_navstr_preview_pane

0x847e,	// (0x000b14eb) scroll_navstr_pane_ParamLimits

0x847e,	// (0x000b14eb) scroll_navstr_pane

0x943f,	// (0x000b24ac) bg_popup_preview_window_pane_cp04

0xe937,	// (0x000b79a4) popup_navstr_preview_pane_t1

0x8492,	// (0x000b14ff) scroll_navstr_pane_g1_ParamLimits

0x8492,	// (0x000b14ff) scroll_navstr_pane_g1

0x84a6,	// (0x000b1513) scroll_navstr_pane_t1_ParamLimits

0x84a6,	// (0x000b1513) scroll_navstr_pane_t1

0xe8dc,	// (0x000b7949) bg_button_pane_cp014

0xe8dc,	// (0x000b7949) bg_button_pane_cp030

0x7aee,	// (0x000b0b5b) list_double_fisheye_pane_g4_ParamLimits

0x7aee,	// (0x000b0b5b) list_double_fisheye_pane_g4

0x7afa,	// (0x000b0b67) list_double_fisheye_pane_g5_ParamLimits

0x7afa,	// (0x000b0b67) list_double_fisheye_pane_g5

0xc1ae,	// (0x000b521b) sp_fs_scroll_pane_cp03

0xe7d3,	// (0x000b7840) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7df,	// (0x000b784c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcb1,	// (0x000b8d1e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7eb,	// (0x000b7858) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe899,	// (0x000b7906) sp_fs_scroll_pane_cp02

0xaa12,	// (0x000b3a7f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa12,	// (0x000b3a7f) popup_sp_fs_calendar_preview_list_single_pane

0x943f,	// (0x000b24ac) main_cam6_pano_pane

0x94a7,	// (0x000b2514) main_mup3_pane_ParamLimits

0x943f,	// (0x000b24ac) main_phacti_pane

0x76aa,	// (0x000b0717) bg_button_pane_cp11

0x76c4,	// (0x000b0731) main_mobtv_info_pane_g2_ParamLimits

0x76c4,	// (0x000b0731) main_mobtv_info_pane_g2

0x0001,

0xfc1b,	// (0x000b8c88) main_mobtv_info_pane_g_ParamLimits

0xfc1b,	// (0x000b8c88) main_mobtv_info_pane_g

0x78a1,	// (0x000b090e) sc_clock_pane_t5_ParamLimits

0x78a1,	// (0x000b090e) sc_clock_pane_t5

0x7969,	// (0x000b09d6) main_radioblah_pane_g1_ParamLimits

0xe5e4,	// (0x000b7651) main_radioblah_pane_t3_ParamLimits

0xe5e4,	// (0x000b7651) main_radioblah_pane_t3

0xe5fc,	// (0x000b7669) main_radioblah_pane_t4_ParamLimits

0xe5fc,	// (0x000b7669) main_radioblah_pane_t4

0x7991,	// (0x000b09fe) main_radioblah_text_pane_ParamLimits

0x7991,	// (0x000b09fe) main_radioblah_text_pane

0x79a3,	// (0x000b0a10) main_radioblah_info_pane_g1_ParamLimits

0x7a3c,	// (0x000b0aa9) main_radioblah_info_pane_t4_ParamLimits

0x7a3c,	// (0x000b0aa9) main_radioblah_info_pane_t4

0xa181,	// (0x000b31ee) main_sp_fs_calendar_pane

0x84bd,	// (0x000b152a) main_phacti_pane_g1

0x84c5,	// (0x000b1532) phacti_note_pane_ParamLimits

0x84c5,	// (0x000b1532) phacti_note_pane

0xe94e,	// (0x000b79bb) phacti_term_pane_ParamLimits

0xe94e,	// (0x000b79bb) phacti_term_pane

0xe963,	// (0x000b79d0) phacti_note_pane_t1_ParamLimits

0xe963,	// (0x000b79d0) phacti_note_pane_t1

0xa478,	// (0x000b34e5) phacti_term_pane_g1

0xa480,	// (0x000b34ed) phacti_term_pane_t1_ParamLimits

0xa480,	// (0x000b34ed) phacti_term_pane_t1

0xe97a,	// (0x000b79e7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe982,	// (0x000b79ef) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd86,	// (0x000b8df3) popup_sp_fs_calendar_preview_list_single_pane_g

0xe98a,	// (0x000b79f7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe98a,	// (0x000b79f7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9a0,	// (0x000b7a0d) aid_popup_sp_fs_bg_corner_pane

0xcd88,	// (0x000b5df5) popup_sp_fs_calendar_preview_bg_pane_g1

0x943f,	// (0x000b24ac) popup_sp_fs_calendar_preview_bg_pane

0x1284,	// (0x000aa2f1) popup_sp_fs_calendar_preview_list_pane

0xc980,	// (0x000b59ed) bg_main_sp_fs_cale_pane_ParamLimits

0xc980,	// (0x000b59ed) bg_main_sp_fs_cale_pane

0xa4b3,	// (0x000b3520) listscroll_cale_mrui_pane_ParamLimits

0xa4b3,	// (0x000b3520) listscroll_cale_mrui_pane

0xa4c8,	// (0x000b3535) listscroll_sp_fs_schedule_track_pane

0xa4d1,	// (0x000b353e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa4d1,	// (0x000b353e) main_sp_fs_ctrlbar_pane_cp01

0xe9a8,	// (0x000b7a15) main_sp_fs_ribbon_pane

0xa4e4,	// (0x000b3551) popup_sp_fs_cale_preview_window

0x853a,	// (0x000b15a7) list_single_sp_fs_schedule_track_pane_ParamLimits

0x853a,	// (0x000b15a7) list_single_sp_fs_schedule_track_pane

0xa181,	// (0x000b31ee) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa181,	// (0x000b31ee) bg_sp_fs_highlight_list_pane_cp03

0x854e,	// (0x000b15bb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x854e,	// (0x000b15bb) list_single_sp_fs_schedule_track_pane_g1

0x855a,	// (0x000b15c7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x855a,	// (0x000b15c7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd8b,	// (0x000b8df8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd8b,	// (0x000b8df8) list_single_sp_fs_schedule_track_pane_g

0x8566,	// (0x000b15d3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8566,	// (0x000b15d3) list_single_sp_fs_schedule_track_pane_t1

0x8580,	// (0x000b15ed) sp_fs_schedule_track_pane_ParamLimits

0x8580,	// (0x000b15ed) sp_fs_schedule_track_pane

0xe9b0,	// (0x000b7a1d) sp_fs_schedule_track_pane_g1

0xe9b8,	// (0x000b7a25) sp_fs_schedule_track_pane_g2

0xe9c0,	// (0x000b7a2d) sp_fs_schedule_track_pane_g3

0xe9c8,	// (0x000b7a35) sp_fs_schedule_track_pane_g4

0xe9d0,	// (0x000b7a3d) sp_fs_schedule_track_pane_g5

0x0004,

0xfd90,	// (0x000b8dfd) sp_fs_schedule_track_pane_g

0xd730,	// (0x000b679d) bg_sp_fs_schedule_viewer_highlight_g1

0xad2c,	// (0x000b3d99) bg_sp_fs_schedule_viewer_highlight_g2

0xd738,	// (0x000b67a5) bg_sp_fs_schedule_viewer_highlight_g3

0xd740,	// (0x000b67ad) bg_sp_fs_schedule_viewer_highlight_g4

0xd96c,	// (0x000b69d9) bg_sp_fs_schedule_viewer_highlight_g5

0xd750,	// (0x000b67bd) bg_sp_fs_schedule_viewer_highlight_g6

0xd758,	// (0x000b67c5) bg_sp_fs_schedule_viewer_highlight_g7

0xd760,	// (0x000b67cd) bg_sp_fs_schedule_viewer_highlight_g8

0xad0c,	// (0x000b3d79) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd9b,	// (0x000b8e08) bg_sp_fs_schedule_viewer_highlight_g

0x943f,	// (0x000b24ac) bg_main_sp_fs_ribbon_pane

0x8591,	// (0x000b15fe) main_sp_fs_ribbon_pane_g1

0xe9d8,	// (0x000b7a45) main_sp_fs_ribbon_pane_t1

0x859a,	// (0x000b1607) main_sp_fs_ribbon_pane_t2

0xe9e7,	// (0x000b7a54) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdae,	// (0x000b8e1b) main_sp_fs_ribbon_pane_t

0xe9f6,	// (0x000b7a63) main_sp_fs_ribbon_scheduler_pane

0xe9fe,	// (0x000b7a6b) bg_main_sp_fs_ribbon_pane_g1

0xea07,	// (0x000b7a74) bg_main_sp_fs_ribbon_pane_g2

0xea10,	// (0x000b7a7d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdb5,	// (0x000b8e22) bg_main_sp_fs_ribbon_pane_g

0xea18,	// (0x000b7a85) main_sp_fs_ribbon_scheduler_pane_g1

0xea21,	// (0x000b7a8e) main_sp_fs_ribbon_scheduler_pane_g2

0xea2a,	// (0x000b7a97) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdbc,	// (0x000b8e29) main_sp_fs_ribbon_scheduler_pane_g

0xea33,	// (0x000b7aa0) list_cale_mrui_pane

0x85a9,	// (0x000b1616) sp_fs_scroll_pane_cp07_ParamLimits

0x85a9,	// (0x000b1616) sp_fs_scroll_pane_cp07

0x85c5,	// (0x000b1632) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x85c5,	// (0x000b1632) bg_sp_fs_schedule_viewer_highlight

0xea40,	// (0x000b7aad) list_single_sp_fs_schedule_track_pane_cp01

0xea48,	// (0x000b7ab5) list_sp_fs_schedule_track_pane

0xea50,	// (0x000b7abd) sp_fs_scroll_pane_cp06_ParamLimits

0xea50,	// (0x000b7abd) sp_fs_scroll_pane_cp06

0xcd88,	// (0x000b5df5) bgmain_sp_fs_calendar_pane_g1

0x85d5,	// (0x000b1642) list_single_cale_mrui_pane_ParamLimits

0x85d5,	// (0x000b1642) list_single_cale_mrui_pane

0xa4f6,	// (0x000b3563) list_single_cale_mrui_row_pane_ParamLimits

0xa4f6,	// (0x000b3563) list_single_cale_mrui_row_pane

0xa503,	// (0x000b3570) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa503,	// (0x000b3570) list_single_cale_mrui_row_pane_g1

0xa53b,	// (0x000b35a8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa53b,	// (0x000b35a8) list_single_cale_mrui_row_pane_t1

0x85f6,	// (0x000b1663) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85f6,	// (0x000b1663) list_single_cale_mrui_row_pane_t2

0xa54d,	// (0x000b35ba) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa54d,	// (0x000b35ba) list_single_cale_mrui_row_pane_t3

0xa57c,	// (0x000b35e9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa57c,	// (0x000b35e9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdca,	// (0x000b8e37) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdca,	// (0x000b8e37) list_single_cale_mrui_row_pane_t

0x865e,	// (0x000b16cb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x865e,	// (0x000b16cb) list_single_cmail_header_editor_pane_bg_cp01

0x8684,	// (0x000b16f1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8684,	// (0x000b16f1) list_single_cmail_header_editor_pane_bg_cp02

0x86a4,	// (0x000b1711) main_radioblah_text_pane_t1_ParamLimits

0x86a4,	// (0x000b1711) main_radioblah_text_pane_t1

0xea6f,	// (0x000b7adc) cam6_indi_pane_cp01

0xea77,	// (0x000b7ae4) cam6_mode_pane_cp01

0xea7f,	// (0x000b7aec) cam6_pano_pane

0xea88,	// (0x000b7af5) cam6_zoom_pane_cp01

0xea90,	// (0x000b7afd) cam6_pano_image_pane

0xea9b,	// (0x000b7b08) cam6_pano_pane_g1

0xe346,	// (0x000b73b3) cam6_pano_pane_g2

0xeaa4,	// (0x000b7b11) cam6_pano_pane_g3

0xeaad,	// (0x000b7b1a) cam6_pano_pane_g4

0xd32a,	// (0x000b6397) cam6_pano_pane_g5

0xeab6,	// (0x000b7b23) cam6_pano_pane_g6

0xeac0,	// (0x000b7b2d) cam6_pano_pane_g7

0xeac8,	// (0x000b7b35) cam6_pano_pane_g8

0xead1,	// (0x000b7b3e) cam6_pano_pane_g9

0x0008,

0xfdd3,	// (0x000b8e40) cam6_pano_pane_g

0x943f,	// (0x000b24ac) main_browser_tag_pane

0xe92f,	// (0x000b799c) grid_navstr_albumart_pane

0xeadc,	// (0x000b7b49) cell_navstr_albumart_pane_ParamLimits

0xeadc,	// (0x000b7b49) cell_navstr_albumart_pane

0xeafc,	// (0x000b7b69) cell_navstr_albumart_pane_g1

0xc751,	// (0x000b57be) cell_navstr_albumart_pane_g2

0xc761,	// (0x000b57ce) cell_navstr_albumart_pane_g3

0xc759,	// (0x000b57c6) cell_navstr_albumart_pane_g4

0x0003,

0xfde6,	// (0x000b8e53) cell_navstr_albumart_pane_g

0x86bf,	// (0x000b172c) bt_list_pane_ParamLimits

0x86bf,	// (0x000b172c) bt_list_pane

0x86d3,	// (0x000b1740) bt_list_pane_t1

0x86e2,	// (0x000b174f) bt_list_pane_t2

0x0001,

0xfdef,	// (0x000b8e5c) bt_list_pane_t

0x943f,	// (0x000b24ac) main_cale_prevew_pane

0x86f1,	// (0x000b175e) popup_cale_preview_window_ParamLimits

0x86f1,	// (0x000b175e) popup_cale_preview_window

0xa181,	// (0x000b31ee) bg_popup_preview_window_pane_cp05_ParamLimits

0xa181,	// (0x000b31ee) bg_popup_preview_window_pane_cp05

0xeb04,	// (0x000b7b71) list_cale_preview_pane_ParamLimits

0xeb04,	// (0x000b7b71) list_cale_preview_pane

0x870a,	// (0x000b1777) list_double_cale_preview_pane_ParamLimits

0x870a,	// (0x000b1777) list_double_cale_preview_pane

0xd768,	// (0x000b67d5) list_single_cale_preview_pane_ParamLimits

0xd768,	// (0x000b67d5) list_single_cale_preview_pane

0x871c,	// (0x000b1789) list_single_cale_preview_pane_g1

0x8724,	// (0x000b1791) list_single_cale_preview_pane_t1_ParamLimits

0x8724,	// (0x000b1791) list_single_cale_preview_pane_t1

0x8739,	// (0x000b17a6) list_double_cale_preview_pane_g1

0x8741,	// (0x000b17ae) list_double_cale_preview_pane_t1_ParamLimits

0x8741,	// (0x000b17ae) list_double_cale_preview_pane_t1

0x8756,	// (0x000b17c3) list_double_cale_preview_pane_t2_ParamLimits

0x8756,	// (0x000b17c3) list_double_cale_preview_pane_t2

0x0001,

0xfdf4,	// (0x000b8e61) list_double_cale_preview_pane_t_ParamLimits

0xfdf4,	// (0x000b8e61) list_double_cale_preview_pane_t

0x943f,	// (0x000b24ac) main_ezdial_pane

0xa181,	// (0x000b31ee) main_sp_fs_email_pane_ParamLimits

0x7c9d,	// (0x000b0d0a) cmail_ddmenu_btn01_pane_ParamLimits

0x7c9d,	// (0x000b0d0a) cmail_ddmenu_btn01_pane

0x7cb0,	// (0x000b0d1d) cmail_ddmenu_btn02_pane_ParamLimits

0x7cb0,	// (0x000b0d1d) cmail_ddmenu_btn02_pane

0x7cd3,	// (0x000b0d40) cmail_ddmenu_btn03_pane_ParamLimits

0x7cd3,	// (0x000b0d40) cmail_ddmenu_btn03_pane

0x7cf9,	// (0x000b0d66) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d1d,	// (0x000b0d8a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x83ab,	// (0x000b1418) list_cmail_body_pane_ParamLimits

0xe8af,	// (0x000b791c) bg_button_pane_cp12

0xe8b8,	// (0x000b7925) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8b8,	// (0x000b7925) list_single_cmail_header_detail_pane_g3

0xa43d,	// (0x000b34aa) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa43d,	// (0x000b34aa) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd77,	// (0x000b8de4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd77,	// (0x000b8de4) list_single_cmail_header_detail_pane_t

0xa495,	// (0x000b3502) phacti_term_pane_t2_ParamLimits

0xa495,	// (0x000b3502) phacti_term_pane_t2

0x0001,

0xfd81,	// (0x000b8dee) phacti_term_pane_t_ParamLimits

0xfd81,	// (0x000b8dee) phacti_term_pane_t

0xeb10,	// (0x000b7b7d) aid_size_list_single_double

0x876e,	// (0x000b17db) popup_ezdial_listscroll_window

0x878a,	// (0x000b17f7) popup_number_entry_window_cp01

0xaad3,	// (0x000b3b40) bg_popup_call_pane_cp09

0xeb1c,	// (0x000b7b89) ezdial_list_pane

0xeb24,	// (0x000b7b91) scroll_pane_cp23

0xc980,	// (0x000b59ed) bg_button_pane_cp028_ParamLimits

0xc980,	// (0x000b59ed) bg_button_pane_cp028

0x8798,	// (0x000b1805) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8798,	// (0x000b1805) cmail_ddmenu_btn01_pane_g1

0x87a4,	// (0x000b1811) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87a4,	// (0x000b1811) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdf9,	// (0x000b8e66) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdf9,	// (0x000b8e66) cmail_ddmenu_btn01_pane_g

0xeb2c,	// (0x000b7b99) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb2c,	// (0x000b7b99) cmail_ddmenu_btn01_pane_t1

0xc980,	// (0x000b59ed) bg_button_pane_cp029_ParamLimits

0xc980,	// (0x000b59ed) bg_button_pane_cp029

0x87b0,	// (0x000b181d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87b0,	// (0x000b181d) cmail_ddmenu_btn02_pane_g1

0x87c8,	// (0x000b1835) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87c8,	// (0x000b1835) cmail_ddmenu_btn02_pane_t1

0xa181,	// (0x000b31ee) bg_button_pane_cp031_ParamLimits

0xa181,	// (0x000b31ee) bg_button_pane_cp031

0x87b0,	// (0x000b181d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87b0,	// (0x000b181d) cmail_ddmenu_btn03_pane_g1

0x87c8,	// (0x000b1835) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87c8,	// (0x000b1835) cmail_ddmenu_btn03_pane_t1

0x54fb,	// (0x000ae568) cell_dialer2_keypad_pane_t1_ParamLimits

0x5515,	// (0x000ae582) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5515,	// (0x000ae582) cell_dialer2_keypad_pane_t1_copy1

0x74bf,	// (0x000b052c) ncimui_group_button_pane

0xa181,	// (0x000b31ee) main_sp_fs_calendar_pane_ParamLimits

0x83c0,	// (0x000b142d) list_single_cmail_header_caption_pane_ParamLimits

0xa4aa,	// (0x000b3517) aid_recal_txt_sm_pane

0x943f,	// (0x000b24ac) mian_recal_day_pane

0xa4e4,	// (0x000b3551) popup_sp_fs_cale_preview_window_ParamLimits

0xeb41,	// (0x000b7bae) list_recal_day_pane

0xa5c6,	// (0x000b3633) list_single_recal_day_pane_ParamLimits

0xa5c6,	// (0x000b3633) list_single_recal_day_pane

0xeb68,	// (0x000b7bd5) list_single_recal_day_pane_g1_ParamLimits

0xeb68,	// (0x000b7bd5) list_single_recal_day_pane_g1

0xa5d8,	// (0x000b3645) list_single_recal_day_pane_g2_ParamLimits

0xa5d8,	// (0x000b3645) list_single_recal_day_pane_g2

0xa5e4,	// (0x000b3651) list_single_recal_day_pane_g3_ParamLimits

0xa5e4,	// (0x000b3651) list_single_recal_day_pane_g3

0x87ec,	// (0x000b1859) list_single_recal_day_pane_g4_ParamLimits

0x87ec,	// (0x000b1859) list_single_recal_day_pane_g4

0xa5f0,	// (0x000b365d) list_single_recal_day_pane_g5_ParamLimits

0xa5f0,	// (0x000b365d) list_single_recal_day_pane_g5

0xa5fc,	// (0x000b3669) list_single_recal_day_pane_g6_ParamLimits

0xa5fc,	// (0x000b3669) list_single_recal_day_pane_g6

0x0004,

0xfe08,	// (0x000b8e75) list_single_recal_day_pane_g_ParamLimits

0xfe08,	// (0x000b8e75) list_single_recal_day_pane_g

0xa610,	// (0x000b367d) list_single_recal_day_pane_t1

0xa622,	// (0x000b368f) list_single_recal_day_pane_t2

0x0001,

0xfe13,	// (0x000b8e80) list_single_recal_day_pane_t

0x8804,	// (0x000b1871) ncimui_query_button_pane_ParamLimits

0x8804,	// (0x000b1871) ncimui_query_button_pane

0x8814,	// (0x000b1881) ncimui_query_button_pane_t1_ParamLimits

0x8814,	// (0x000b1881) ncimui_query_button_pane_t1

0xeb74,	// (0x000b7be1) ncimui_query_button_pane_t2_ParamLimits

0xeb74,	// (0x000b7be1) ncimui_query_button_pane_t2

0x0001,

0xfe18,	// (0x000b8e85) ncimui_query_button_pane_t_ParamLimits

0xfe18,	// (0x000b8e85) ncimui_query_button_pane_t

0x8827,	// (0x000b1894) query_button_pane_ParamLimits

0x8827,	// (0x000b1894) query_button_pane

0x943f,	// (0x000b24ac) bg_button_pane_cp0028

0xeb87,	// (0x000b7bf4) query_button_pane_t1

0x3597,	// (0x000ac604) main_tport_pane_ParamLimits

0x826f,	// (0x000b12dc) bg_popup_window_pane_cp01_ParamLimits

0x826f,	// (0x000b12dc) bg_popup_window_pane_cp01

0x828a,	// (0x000b12f7) heading_pane_cp08_ParamLimits

0x828a,	// (0x000b12f7) heading_pane_cp08

0x829d,	// (0x000b130a) heading_pane_cp07_ParamLimits

0x829d,	// (0x000b130a) heading_pane_cp07

0x8344,	// (0x000b13b1) cell_tport_appsw_pane_g2

0x0002,

0xfd64,	// (0x000b8dd1) cell_tport_appsw_pane_g

0xa100,	// (0x000b316d) input_candi_list_open_g1

0xaeef,	// (0x000b3f5c) list_cale_time_pane_g6_ParamLimits

0xaeef,	// (0x000b3f5c) list_cale_time_pane_g6

0x435f,	// (0x000ad3cc) aid_size_touch_calib_1_ParamLimits

0x435f,	// (0x000ad3cc) aid_size_touch_calib_1

0x4371,	// (0x000ad3de) aid_size_touch_calib_2_ParamLimits

0x4371,	// (0x000ad3de) aid_size_touch_calib_2

0x4389,	// (0x000ad3f6) aid_size_touch_calib_3_ParamLimits

0x4389,	// (0x000ad3f6) aid_size_touch_calib_3

0x43a7,	// (0x000ad414) aid_size_touch_calib_4_ParamLimits

0x43a7,	// (0x000ad414) aid_size_touch_calib_4

0x43bf,	// (0x000ad42c) main_touch_calib_button_group_pane_ParamLimits

0x43bf,	// (0x000ad42c) main_touch_calib_button_group_pane

0x43d7,	// (0x000ad444) main_touch_calib_pane_g1_ParamLimits

0x43e9,	// (0x000ad456) main_touch_calib_pane_g2_ParamLimits

0x43fb,	// (0x000ad468) main_touch_calib_pane_g3_ParamLimits

0x440d,	// (0x000ad47a) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x000b87cd) main_touch_calib_pane_g_ParamLimits

0x441f,	// (0x000ad48c) main_touch_calib_pane_t1_ParamLimits

0x4439,	// (0x000ad4a6) main_touch_calib_pane_t2_ParamLimits

0x4453,	// (0x000ad4c0) main_touch_calib_pane_t3_ParamLimits

0x4467,	// (0x000ad4d4) main_touch_calib_pane_t4_ParamLimits

0x447b,	// (0x000ad4e8) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x000b87d6) main_touch_calib_pane_t_ParamLimits

0xd0cd,	// (0x000b613a) list_single_fp_cale_pane_g3_ParamLimits

0xd0cd,	// (0x000b613a) list_single_fp_cale_pane_g3

0x94a7,	// (0x000b2514) bg_button_pane_cp012_ParamLimits

0x94a7,	// (0x000b2514) bg_vkb2_func_pane_cp03_ParamLimits

0x651b,	// (0x000af588) cell_vitu2_function_top_pane_g1_ParamLimits

0x94a7,	// (0x000b2514) bg_vkb2_func_pane_cp04_ParamLimits

0x744a,	// (0x000b04b7) main_ncimui_button_group_pane_ParamLimits

0x744a,	// (0x000b04b7) main_ncimui_button_group_pane

0x74aa,	// (0x000b0517) main_ncimui_pane_t3_ParamLimits

0x74aa,	// (0x000b0517) main_ncimui_pane_t3

0xe945,	// (0x000b79b2) phacti_button_group_pane

0xeb10,	// (0x000b7b7d) aid_size_list_single_double_ParamLimits

0x876e,	// (0x000b17db) popup_ezdial_listscroll_window_ParamLimits

0x878a,	// (0x000b17f7) popup_number_entry_window_cp01_ParamLimits

0x883a,	// (0x000b18a7) phacti_button_pane_ParamLimits

0x883a,	// (0x000b18a7) phacti_button_pane

0x943f,	// (0x000b24ac) bg_button_pane_cp14

0xeb95,	// (0x000b7c02) phacti_button_pane_t1

0x884b,	// (0x000b18b8) main_touch_calib_button_pane_ParamLimits

0x884b,	// (0x000b18b8) main_touch_calib_button_pane

0xa8e7,	// (0x000b3954) bg_button_pane_cp18_ParamLimits

0xa8e7,	// (0x000b3954) bg_button_pane_cp18

0xeba3,	// (0x000b7c10) main_touch_calib_button_pane_t1_ParamLimits

0xeba3,	// (0x000b7c10) main_touch_calib_button_pane_t1

0xebb9,	// (0x000b7c26) main_touch_calib_button_pane_t2_ParamLimits

0xebb9,	// (0x000b7c26) main_touch_calib_button_pane_t2

0x0001,

0xfe1d,	// (0x000b8e8a) main_touch_calib_button_pane_t_ParamLimits

0xfe1d,	// (0x000b8e8a) main_touch_calib_button_pane_t

0x943f,	// (0x000b24ac) cell_ncimui_button_pane

0x943f,	// (0x000b24ac) bg_button_pane_cp032

0xebd7,	// (0x000b7c44) cell_ncimui_button_pane_t1

0x9a9c,	// (0x000b2b09) image3_infobar_pane_ParamLimits

0x9a9c,	// (0x000b2b09) image3_infobar_pane

0x78cd,	// (0x000b093a) fs_bigclock_status_pane_ParamLimits

0x78cd,	// (0x000b093a) fs_bigclock_status_pane

0x78da,	// (0x000b0947) main_fs_bigclock_clock_pane_ParamLimits

0x78da,	// (0x000b0947) main_fs_bigclock_clock_pane

0x78f8,	// (0x000b0965) main_fs_bigclock_indi_pane_ParamLimits

0x78f8,	// (0x000b0965) main_fs_bigclock_indi_pane

0x792a,	// (0x000b0997) main_fs_bigclock_swipe_pane_ParamLimits

0x792a,	// (0x000b0997) main_fs_bigclock_swipe_pane

0x943f,	// (0x000b24ac) main_fs_clock_dumped_data

0xe453,	// (0x000b74c0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe453,	// (0x000b74c0) list_single_fs_bigclock_indicator_pane_g1

0xe46f,	// (0x000b74dc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe46f,	// (0x000b74dc) list_single_fs_bigclock_indicator_pane_g2

0xe489,	// (0x000b74f6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe489,	// (0x000b74f6) list_single_fs_bigclock_indicator_pane_g3

0xe4a3,	// (0x000b7510) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4a3,	// (0x000b7510) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc45,	// (0x000b8cb2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc45,	// (0x000b8cb2) list_single_fs_bigclock_indicator_pane_g

0xe4ce,	// (0x000b753b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4ce,	// (0x000b753b) list_single_fs_bigclock_indicator_pane_t1

0xe4f6,	// (0x000b7563) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4f6,	// (0x000b7563) list_single_fs_bigclock_indicator_pane_t2

0xe51e,	// (0x000b758b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe51e,	// (0x000b758b) list_single_fs_bigclock_indicator_pane_t3

0xe546,	// (0x000b75b3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe546,	// (0x000b75b3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc50,	// (0x000b8cbd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc50,	// (0x000b8cbd) list_single_fs_bigclock_indicator_pane_t

0xebe5,	// (0x000b7c52) image3_infobar_fav_pane_ParamLimits

0xebe5,	// (0x000b7c52) image3_infobar_fav_pane

0xebf5,	// (0x000b7c62) image3_infobar_loc_pane_ParamLimits

0xebf5,	// (0x000b7c62) image3_infobar_loc_pane

0xec09,	// (0x000b7c76) image3_infobar_time_pane_ParamLimits

0xec09,	// (0x000b7c76) image3_infobar_time_pane

0xcd88,	// (0x000b5df5) image3_infobar_time_pane_g1

0xec19,	// (0x000b7c86) image3_infobar_time_pane_t1

0xcd88,	// (0x000b5df5) image3_infobar_loc_pane_g1

0xec27,	// (0x000b7c94) image3_infobar_loc_pane_g2

0x0001,

0xfe22,	// (0x000b8e8f) image3_infobar_loc_pane_g

0xec2f,	// (0x000b7c9c) image3_infobar_loc_pane_t1

0xcd88,	// (0x000b5df5) image3_infobar_fav_pane_g1

0xec3d,	// (0x000b7caa) image3_infobar_fav_pane_g2

0x0001,

0xfe27,	// (0x000b8e94) image3_infobar_fav_pane_g

0xec45,	// (0x000b7cb2) fs_bigclock_status_battery_pane

0xec4e,	// (0x000b7cbb) fs_bigclock_status_signal_pane

0xec57,	// (0x000b7cc4) fs_bigclock_status_title_pane

0xec60,	// (0x000b7ccd) fs_bigclock_status_signal_pane_g1

0xec69,	// (0x000b7cd6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe2c,	// (0x000b8e99) fs_bigclock_status_signal_pane_g

0xec71,	// (0x000b7cde) fs_bigclock_status_battery_pane_g1

0xec7a,	// (0x000b7ce7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe31,	// (0x000b8e9e) fs_bigclock_status_battery_pane_g

0xec82,	// (0x000b7cef) fs_bigclock_status_title_pane_t1

0x8860,	// (0x000b18cd) main_fs_bigclock_clock_pane_g1

0x8860,	// (0x000b18cd) main_fs_bigclock_clock_pane_g2

0x8871,	// (0x000b18de) main_fs_bigclock_clock_pane_g3

0x8871,	// (0x000b18de) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe36,	// (0x000b8ea3) main_fs_bigclock_clock_pane_g

0x8884,	// (0x000b18f1) main_fs_bigclock_clock_pane_t1

0x889a,	// (0x000b1907) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe3f,	// (0x000b8eac) main_fs_bigclock_clock_pane_t

0xec90,	// (0x000b7cfd) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec90,	// (0x000b7cfd) list_single_fs_bigclock_indicator_pane

0xeca1,	// (0x000b7d0e) list_single_fs_bigclock_pane_ParamLimits

0xeca1,	// (0x000b7d0e) list_single_fs_bigclock_pane

0xecc7,	// (0x000b7d34) main_fs_bigclock_indicator_pane_t1

0xecd6,	// (0x000b7d43) list_single_fs_bigclock_pane_g1

0xecde,	// (0x000b7d4b) list_single_fs_bigclock_pane_t1

0xcd88,	// (0x000b5df5) main_fs_bigclock_swipe_pane_g1

0xed21,	// (0x000b7d8e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe50,	// (0x000b8ebd) main_fs_bigclock_swipe_pane_g

0xed29,	// (0x000b7d96) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed29,	// (0x000b7d96) main_fs_bigclock_swipe_pane_t1

0x249a,	// (0x000ab507) call_type_pane_ParamLimits

0x943f,	// (0x000b24ac) main_btmg_pane

0xa52f,	// (0x000b359c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa52f,	// (0x000b359c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdc3,	// (0x000b8e30) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdc3,	// (0x000b8e30) list_single_cale_mrui_row_pane_g

0xa5b5,	// (0x000b3622) list_recal_vselct_arw_lo_pane

0xeb60,	// (0x000b7bcd) list_recal_vselct_arw_up_pane

0xa5bd,	// (0x000b362a) list_recal_vselct_pane

0x88f4,	// (0x000b1961) btmg_button_pane

0x88fe,	// (0x000b196b) main_btmg_pane_g1

0x943f,	// (0x000b24ac) bg_button_pane_cp044

0xed46,	// (0x000b7db3) btmg_button_pane_t1

0xc96c,	// (0x000b59d9) aid_listscroll_gen

0xa181,	// (0x000b31ee) main_cntbar_detail_pane

0xe891,	// (0x000b78fe) list_cmail_folder_pane

0xc1ae,	// (0x000b521b) sp_fs_scroll_pane_cp03_ParamLimits

0x8908,	// (0x000b1975) list_single_fs_dyc_pane_cp01_ParamLimits

0x8908,	// (0x000b1975) list_single_fs_dyc_pane_cp01

0xed54,	// (0x000b7dc1) aid_size_cmail_indent

0xa634,	// (0x000b36a1) list_single_dyc_row_pane_cp01

0x8950,	// (0x000b19bd) cntbar_detail_list_pane_ParamLimits

0x8950,	// (0x000b19bd) cntbar_detail_list_pane

0x899c,	// (0x000b1a09) main_cntbar_detail_cont_pane_ParamLimits

0x899c,	// (0x000b1a09) main_cntbar_detail_cont_pane

0xc1ae,	// (0x000b521b) scroll_pane_cp032_ParamLimits

0xc1ae,	// (0x000b521b) scroll_pane_cp032

0x89b0,	// (0x000b1a1d) cntbar_detail_list_event_pane_ParamLimits

0x89b0,	// (0x000b1a1d) cntbar_detail_list_event_pane

0x8960,	// (0x000b19cd) cntbar_detail_list_shct_pane

0xad7a,	// (0x000b3de7) aid_list_gen

0xed5d,	// (0x000b7dca) aid_scroll

0xed66,	// (0x000b7dd3) aid_size_touch_scroll_bar

0x6c21,	// (0x000afc8e) aid_list_double

0x6c0f,	// (0x000afc7c) aid_list_single

0x6c0f,	// (0x000afc7c) aid_list_single_lg

0x89c0,	// (0x000b1a2d) aid_list_z_g_a_sm

0x89c8,	// (0x000b1a35) aid_list_z_g_d

0x89d0,	// (0x000b1a3d) aid_txt_z_prm

0x89de,	// (0x000b1a4b) aid_txt_z_prm_cp01

0x89ec,	// (0x000b1a59) aid_txt_z_sec

0x89fa,	// (0x000b1a67) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89fa,	// (0x000b1a67) main_cntbar_detail_cont_pane_g1

0x8a0e,	// (0x000b1a7b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a0e,	// (0x000b1a7b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe55,	// (0x000b8ec2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe55,	// (0x000b8ec2) main_cntbar_detail_cont_pane_g

0xed6f,	// (0x000b7ddc) main_cntbar_detail_cont_pane_t1

0xed7d,	// (0x000b7dea) main_cntbar_detail_cont_pane_t2

0xed8b,	// (0x000b7df8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe5a,	// (0x000b8ec7) main_cntbar_detail_cont_pane_t

0x8a1e,	// (0x000b1a8b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a1e,	// (0x000b1a8b) cell_cntbar_detail_list_shct_pane

0xed99,	// (0x000b7e06) cntbar_detail_list_shct_pane_g1

0xeda2,	// (0x000b7e0f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe61,	// (0x000b8ece) cntbar_detail_list_shct_pane_g

0x8a32,	// (0x000b1a9f) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a32,	// (0x000b1a9f) cntbar_detail_list_event_pane_g1

0x8a3e,	// (0x000b1aab) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a3e,	// (0x000b1aab) cntbar_detail_list_event_pane_g2

0x0005,

0xfe66,	// (0x000b8ed3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe66,	// (0x000b8ed3) cntbar_detail_list_event_pane_g

0x8aaa,	// (0x000b1b17) cntbar_detail_list_event_pane_t1_ParamLimits

0x8aaa,	// (0x000b1b17) cntbar_detail_list_event_pane_t1

0x8abf,	// (0x000b1b2c) cntbar_detail_list_event_pane_t2_ParamLimits

0x8abf,	// (0x000b1b2c) cntbar_detail_list_event_pane_t2

0x0002,

0xfe73,	// (0x000b8ee0) cntbar_detail_list_event_pane_t_ParamLimits

0xfe73,	// (0x000b8ee0) cntbar_detail_list_event_pane_t

0xcd88,	// (0x000b5df5) cell_cntbar_detail_list_shct_pane_g1

0xb4d8,	// (0x000b4545) navi_pane_mv_g3

0xa181,	// (0x000b31ee) main_cntbar_detail_pane_ParamLimits

0x943f,	// (0x000b24ac) main_notif_wgt_pane

0x9888,	// (0x000b28f5) aid_tch_main_mp4_pane_g4

0x9a94,	// (0x000b2b01) popup_slider_window_cp02

0xa5ab,	// (0x000b3618) list_recal_day_event_pane

0x891e,	// (0x000b198b) cntbar_detail_btn_pane_ParamLimits

0x891e,	// (0x000b198b) cntbar_detail_btn_pane

0x8937,	// (0x000b19a4) cntbar_detail_btn_pane_cp01_ParamLimits

0x8937,	// (0x000b19a4) cntbar_detail_btn_pane_cp01

0x8960,	// (0x000b19cd) cntbar_detail_list_shct_pane_ParamLimits

0x8970,	// (0x000b19dd) cntbar_detail_pane_g1_ParamLimits

0x8970,	// (0x000b19dd) cntbar_detail_pane_g1

0x8980,	// (0x000b19ed) cntbar_detail_pane_t1_ParamLimits

0x8980,	// (0x000b19ed) cntbar_detail_pane_t1

0x8a4a,	// (0x000b1ab7) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a4a,	// (0x000b1ab7) cntbar_detail_list_event_pane_g3

0x8a62,	// (0x000b1acf) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a62,	// (0x000b1acf) cntbar_detail_list_event_pane_g4

0x8a7a,	// (0x000b1ae7) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a7a,	// (0x000b1ae7) cntbar_detail_list_event_pane_g5

0x8a92,	// (0x000b1aff) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a92,	// (0x000b1aff) cntbar_detail_list_event_pane_g6

0x8ad4,	// (0x000b1b41) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ad4,	// (0x000b1b41) cntbar_detail_list_event_pane_t3

0x8ae6,	// (0x000b1b53) popup_notif_wgt_window_ParamLimits

0x8ae6,	// (0x000b1b53) popup_notif_wgt_window

0x8aff,	// (0x000b1b6c) popup_submenu_window_cp01_ParamLimits

0x8aff,	// (0x000b1b6c) popup_submenu_window_cp01

0xaad3,	// (0x000b3b40) bg_popup_window_pane_cp10

0xedab,	// (0x000b7e18) listscroll_notif_wgt_pane

0xedbd,	// (0x000b7e2a) list_notif_wgt_window

0xedc6,	// (0x000b7e33) scroll_pane_cp033

0x8b11,	// (0x000b1b7e) list_notif_wgt_row_pane_ParamLimits

0x8b11,	// (0x000b1b7e) list_notif_wgt_row_pane

0xedcf,	// (0x000b7e3c) aid_size_list_notif_wgt_del

0xeddc,	// (0x000b7e49) list_notif_wgt_row_pane_g1

0xede8,	// (0x000b7e55) list_notif_wgt_row_pane_g2

0xedf7,	// (0x000b7e64) list_notif_wgt_row_pane_g3

0x0002,

0xfe7a,	// (0x000b8ee7) list_notif_wgt_row_pane_g

0xee04,	// (0x000b7e71) list_notif_wgt_row_pane_t1

0xee1a,	// (0x000b7e87) list_notif_wgt_row_pane_t2

0xee2c,	// (0x000b7e99) list_notif_wgt_row_pane_t3

0x0002,

0xfe81,	// (0x000b8eee) list_notif_wgt_row_pane_t

0xd986,	// (0x000b69f3) list_recal_day_event_pane_g1

0xee4c,	// (0x000b7eb9) list_recal_day_event_pane_t1

0x943f,	// (0x000b24ac) bg_button_pane_cp045

0x8b21,	// (0x000b1b8e) cntbar_detail_btn_pane_t1

0xc980,	// (0x000b59ed) main_callh_pane_ParamLimits

0xc980,	// (0x000b59ed) main_callh_pane

0x943f,	// (0x000b24ac) main_coverflow0_pane

0x943f,	// (0x000b24ac) main_wgtman_pane

0x7942,	// (0x000b09af) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7942,	// (0x000b09af) main_fs_bigclock_unlock_btn_pane

0x833c,	// (0x000b13a9) bg_button_pane_cp16

0x834c,	// (0x000b13b9) cell_tport_appsw_pane_g3

0x8b2f,	// (0x000b1b9c) cf0_flow_pane_ParamLimits

0x8b2f,	// (0x000b1b9c) cf0_flow_pane

0xee5b,	// (0x000b7ec8) listscroll_cf0_pane

0xee66,	// (0x000b7ed3) main_cf0_pane_g1

0x8b44,	// (0x000b1bb1) main_cf0_pane_t1_ParamLimits

0x8b44,	// (0x000b1bb1) main_cf0_pane_t1

0x8b5b,	// (0x000b1bc8) main_cf0_pane_t2_ParamLimits

0x8b5b,	// (0x000b1bc8) main_cf0_pane_t2

0x0001,

0xfe88,	// (0x000b8ef5) main_cf0_pane_t_ParamLimits

0xfe88,	// (0x000b8ef5) main_cf0_pane_t

0xee78,	// (0x000b7ee5) scroll_pane_cp11

0x8b72,	// (0x000b1bdf) cf0_flow_pane_g1

0x8b7a,	// (0x000b1be7) cf0_flow_pane_g2

0x0001,

0xfe8d,	// (0x000b8efa) cf0_flow_pane_g

0x8b82,	// (0x000b1bef) cf0_flow_pane_t1

0x943f,	// (0x000b24ac) main_call6_pane

0x943f,	// (0x000b24ac) main_calllock_pane

0x8b90,	// (0x000b1bfd) call6_btn_grp_pane_ParamLimits

0x8b90,	// (0x000b1bfd) call6_btn_grp_pane

0x8baa,	// (0x000b1c17) call6_pane_g1_ParamLimits

0x8baa,	// (0x000b1c17) call6_pane_g1

0x8bc0,	// (0x000b1c2d) popup_call6_1st_window_ParamLimits

0x8bc0,	// (0x000b1c2d) popup_call6_1st_window

0x8bd1,	// (0x000b1c3e) popup_call6_2nd_window_ParamLimits

0x8bd1,	// (0x000b1c3e) popup_call6_2nd_window

0x8be2,	// (0x000b1c4f) cell_call6_btn_pane_ParamLimits

0x8be2,	// (0x000b1c4f) cell_call6_btn_pane

0xaad3,	// (0x000b3b40) bg_popup_call2_in_pane_cp03

0xee83,	// (0x000b7ef0) popup_call6_1st_window_g1

0xee8b,	// (0x000b7ef8) popup_call6_1st_window_g2

0xee93,	// (0x000b7f00) popup_call6_1st_window_g3

0x0002,

0x0287,	// (0x000a92f4) popup_call6_1st_window_g

0xee9b,	// (0x000b7f08) popup_call6_1st_window_t1

0xeeaa,	// (0x000b7f17) popup_call6_1st_window_t2

0xeeb8,	// (0x000b7f25) popup_call6_1st_window_t3

0x0002,

0x028e,	// (0x000a92fb) popup_call6_1st_window_t

0xaad3,	// (0x000b3b40) bg_popup_call2_in_pane_cp04

0xee83,	// (0x000b7ef0) popup_call6_2nd_window_g1

0xee8b,	// (0x000b7ef8) popup_call6_2nd_window_g2

0xee93,	// (0x000b7f00) popup_call6_2nd_window_g3

0x0002,

0x0287,	// (0x000a92f4) popup_call6_2nd_window_g

0xee9b,	// (0x000b7f08) popup_call6_2nd_window_t1

0x94b5,	// (0x000b2522) bg_button_pane_cp15

0x9d13,	// (0x000b2d80) cell_call6_btn_pane_g1

0x9d1c,	// (0x000b2d89) cell_call6_btn_pane_t1

0x8bf6,	// (0x000b1c63) listscroll_wgtman_pane_ParamLimits

0x8bf6,	// (0x000b1c63) listscroll_wgtman_pane

0x8c17,	// (0x000b1c84) wgtman_btn_pane_ParamLimits

0x8c17,	// (0x000b1c84) wgtman_btn_pane

0xb2ec,	// (0x000b4359) aid_scroll_copy1

0xeec6,	// (0x000b7f33) list_wgtman_pane

0x8c5a,	// (0x000b1cc7) wgtman_btn_pane_g1_ParamLimits

0x8c5a,	// (0x000b1cc7) wgtman_btn_pane_g1

0x8c86,	// (0x000b1cf3) wgtman_btn_pane_t1_ParamLimits

0x8c86,	// (0x000b1cf3) wgtman_btn_pane_t1

0xeed0,	// (0x000b7f3d) wgtman_btn_pane_t2_ParamLimits

0xeed0,	// (0x000b7f3d) wgtman_btn_pane_t2

0x0001,

0xfe92,	// (0x000b8eff) wgtman_btn_pane_t_ParamLimits

0xfe92,	// (0x000b8eff) wgtman_btn_pane_t

0x8cc3,	// (0x000b1d30) listrow_wgtman_pane_ParamLimits

0x8cc3,	// (0x000b1d30) listrow_wgtman_pane

0x8cd5,	// (0x000b1d42) listrow_wgtman_pane_g1

0x8ce2,	// (0x000b1d4f) listrow_wgtman_pane_g2

0x0001,

0xfe97,	// (0x000b8f04) listrow_wgtman_pane_g

0x8d00,	// (0x000b1d6d) listrow_wgtman_pane_t1

0x8d18,	// (0x000b1d85) listrow_wgtman_pane_t2

0x0001,

0xfe9c,	// (0x000b8f09) listrow_wgtman_pane_t

0x8d3e,	// (0x000b1dab) wait_bar_pane_cp09

0xeee7,	// (0x000b7f54) main_calllock_btn_pane

0xeef1,	// (0x000b7f5e) main_calllock_pane_g1

0x943f,	// (0x000b24ac) bg_button_pane_cp17

0xeefd,	// (0x000b7f6a) main_calllock_btn_pane_g1

0xef06,	// (0x000b7f73) main_calllock_btn_pane_t1

0x943f,	// (0x000b24ac) main_dialer3_pane

0x943f,	// (0x000b24ac) main_fmrd2_pane

0xcd88,	// (0x000b5df5) main_fs_bigclock_unlock_btn_pane_g1

0x8d58,	// (0x000b1dc5) main_fs_bigclock_unlock_btn_pane_t1

0x8d66,	// (0x000b1dd3) area_fmrd2_info_pane_ParamLimits

0x8d66,	// (0x000b1dd3) area_fmrd2_info_pane

0x8d77,	// (0x000b1de4) area_fmrd2_visual_pane_ParamLimits

0x8d77,	// (0x000b1de4) area_fmrd2_visual_pane

0x8d85,	// (0x000b1df2) fmrd2_indi_pane_ParamLimits

0x8d85,	// (0x000b1df2) fmrd2_indi_pane

0x8d92,	// (0x000b1dff) area_fmrd2_visual_pane_g1

0x8d9a,	// (0x000b1e07) area_fmrd2_visual_pane_t1

0x8daa,	// (0x000b1e17) area_fmrd2_visual_pane_t2

0x8dba,	// (0x000b1e27) area_fmrd2_visual_pane_t3

0x0002,

0xfea6,	// (0x000b8f13) area_fmrd2_visual_pane_t

0x8dca,	// (0x000b1e37) area_fmrd2_info_pane_g1

0x8dd2,	// (0x000b1e3f) area_fmrd2_info_pane_t1

0x8de2,	// (0x000b1e4f) area_fmrd2_info_pane_t2

0x8df2,	// (0x000b1e5f) area_fmrd2_info_pane_t3

0x8e02,	// (0x000b1e6f) area_fmrd2_info_pane_t4

0x0003,

0xfead,	// (0x000b8f1a) area_fmrd2_info_pane_t

0x8e10,	// (0x000b1e7d) fmrd2_indi_pane_t1

0x8e20,	// (0x000b1e8d) fmrd2_indi_pane_t2

0x8e30,	// (0x000b1e9d) fmrd2_indi_pane_t3

0x0002,

0xfeb6,	// (0x000b8f23) fmrd2_indi_pane_t

0xe4b2,	// (0x000b751f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4b2,	// (0x000b751f) list_single_fs_bigclock_indicator_pane_g5

0xe563,	// (0x000b75d0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe563,	// (0x000b75d0) list_single_fs_bigclock_indicator_pane_t5

0x84d9,	// (0x000b1546) aid_cell_bcale_month_pane_ParamLimits

0x84d9,	// (0x000b1546) aid_cell_bcale_month_pane

0x84f7,	// (0x000b1564) bcale_month_pane_ParamLimits

0x84f7,	// (0x000b1564) bcale_month_pane

0x851b,	// (0x000b1588) bcale_preview_pane_ParamLimits

0x851b,	// (0x000b1588) bcale_preview_pane

0xecde,	// (0x000b7d4b) list_single_fs_bigclock_pane_t1_ParamLimits

0xecfd,	// (0x000b7d6a) list_single_fs_bigclock_pane_t2_ParamLimits

0xecfd,	// (0x000b7d6a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe4b,	// (0x000b8eb8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe4b,	// (0x000b8eb8) list_single_fs_bigclock_pane_t

0x8d50,	// (0x000b1dbd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfea1,	// (0x000b8f0e) main_fs_bigclock_unlock_btn_pane_g

0x8e40,	// (0x000b1ead) aid_dia3_key_size_ParamLimits

0x8e40,	// (0x000b1ead) aid_dia3_key_size

0x8e4f,	// (0x000b1ebc) aid_dia3_listrow_size_ParamLimits

0x8e4f,	// (0x000b1ebc) aid_dia3_listrow_size

0x8e64,	// (0x000b1ed1) dia3_keypad_fun_pane_ParamLimits

0x8e64,	// (0x000b1ed1) dia3_keypad_fun_pane

0x8e80,	// (0x000b1eed) dia3_keypad_num_pane_ParamLimits

0x8e80,	// (0x000b1eed) dia3_keypad_num_pane

0x8e9b,	// (0x000b1f08) dia3_listscroll_pane_ParamLimits

0x8e9b,	// (0x000b1f08) dia3_listscroll_pane

0x8eae,	// (0x000b1f1b) dia3_numentry_pane_ParamLimits

0x8eae,	// (0x000b1f1b) dia3_numentry_pane

0xef15,	// (0x000b7f82) dia3_list_pane

0xef20,	// (0x000b7f8d) scroll_pane_cp12

0x943f,	// (0x000b24ac) bg_dia3_numentry_pane

0x8ec2,	// (0x000b1f2f) dia3_numentry_pane_t1

0x8ed1,	// (0x000b1f3e) cell_dia3_key_num_pane

0x8ed9,	// (0x000b1f46) cell_dia3_key0_fun_pane_ParamLimits

0x8ed9,	// (0x000b1f46) cell_dia3_key0_fun_pane

0x8eed,	// (0x000b1f5a) cell_dia3_key1_fun_pane_ParamLimits

0x8eed,	// (0x000b1f5a) cell_dia3_key1_fun_pane

0x8f05,	// (0x000b1f72) dia3_listrow_pane

0xe205,	// (0x000b7272) bg_dia3_numentry_pane_g1

0x943f,	// (0x000b24ac) bg_button_pane_cp21

0xef2b,	// (0x000b7f98) cell_dia3_key_num_pane_t1

0xef39,	// (0x000b7fa6) cell_dia3_key_num_pane_t2

0xef48,	// (0x000b7fb5) cell_dia3_key_num_pane_t3

0xef57,	// (0x000b7fc4) cell_dia3_key_num_pane_t4

0x0003,

0x02c0,	// (0x000a932d) cell_dia3_key_num_pane_t

0x943f,	// (0x000b24ac) bg_button_pane_cp19

0x8f17,	// (0x000b1f84) cell_dia3_key0_fun_pane_g1

0x943f,	// (0x000b24ac) bg_button_pane_cp20

0x8f1f,	// (0x000b1f8c) cell_dia3_key1_fun_pane_g1

0x8f27,	// (0x000b1f94) area_left_week_number_pane

0x8f33,	// (0x000b1fa0) area_top_day_name_pane

0x8f46,	// (0x000b1fb3) frame_month_view_pane

0xef66,	// (0x000b7fd3) grid_month_view_pane

0x8f59,	// (0x000b1fc6) cell_top_day_name_pane_ParamLimits

0x8f59,	// (0x000b1fc6) cell_top_day_name_pane

0x8f86,	// (0x000b1ff3) cell_area_left_week_number_pane_ParamLimits

0x8f86,	// (0x000b1ff3) cell_area_left_week_number_pane

0x8f9a,	// (0x000b2007) cell_month_view_pane_ParamLimits

0x8f9a,	// (0x000b2007) cell_month_view_pane

0xef74,	// (0x000b7fe1) frm_month_g1

0x8fc7,	// (0x000b2034) frm_month_g2

0x8fda,	// (0x000b2047) frm_month_g3

0x8fed,	// (0x000b205a) frm_month_g4

0x9000,	// (0x000b206d) frm_month_g5

0x9013,	// (0x000b2080) frm_month_g6

0x9026,	// (0x000b2093) frm_month_g7

0xef81,	// (0x000b7fee) frm_month_g8

0x9039,	// (0x000b20a6) frm_month_g9

0x9049,	// (0x000b20b6) frm_month_g10

0x9059,	// (0x000b20c6) frm_month_g11

0x9069,	// (0x000b20d6) frm_month_g12

0x907b,	// (0x000b20e8) frm_month_g13

0x908d,	// (0x000b20fa) frm_month_g14

0x90a1,	// (0x000b210e) frm_month_g15

0x90b5,	// (0x000b2122) frm_month_g16

0x000f,

0xfebd,	// (0x000b8f2a) frm_month_g

0xef8e,	// (0x000b7ffb) cell_top_day_name_pane_t1

0x90c9,	// (0x000b2136) cell_area_left_week_number_pane_g1

0x90d5,	// (0x000b2142) cell_area_left_week_number_pane_t1

0xcfcd,	// (0x000b603a) cell_month_view_pane_g1

0x90e8,	// (0x000b2155) cell_month_view_pane_t1

0x943f,	// (0x000b24ac) main_fps_pane

0xe79b,	// (0x000b7808) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe79b,	// (0x000b7808) cmail_ddmenu_btn02_pane_cp1

0xe7b7,	// (0x000b7824) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7b7,	// (0x000b7824) cmail_ddmenu_btn02_pane_cp2

0x87bc,	// (0x000b1829) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87bc,	// (0x000b1829) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdfe,	// (0x000b8e6b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdfe,	// (0x000b8e6b) cmail_ddmenu_btn02_pane_g

0x87da,	// (0x000b1847) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87da,	// (0x000b1847) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe03,	// (0x000b8e70) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe03,	// (0x000b8e70) cmail_ddmenu_btn02_pane_t

0x90fb,	// (0x000b2168) fps_text_pane_ParamLimits

0x90fb,	// (0x000b2168) fps_text_pane

0x9112,	// (0x000b217f) main_fps_pane_g1_ParamLimits

0x9112,	// (0x000b217f) main_fps_pane_g1

0x912c,	// (0x000b2199) wait_bar_pane_cp010_ParamLimits

0x912c,	// (0x000b2199) wait_bar_pane_cp010

0x913d,	// (0x000b21aa) fps_text_pane_t1_ParamLimits

0x913d,	// (0x000b21aa) fps_text_pane_t1

0xd6cf,	// (0x000b673c) cam4_image_uncrop_pane_g1

0xd6d8,	// (0x000b6745) cam4_image_uncrop_pane_g2

0x5a34,	// (0x000aeaa1) cam4_image_uncrop_pane_g3

0x5a3d,	// (0x000aeaaa) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x000b896e) cam4_image_uncrop_pane_g

0x8f05,	// (0x000b1f72) dia3_listrow_pane_ParamLimits

0x943f,	// (0x000b24ac) main_phob2_pane

0x830d,	// (0x000b137a) cell_tport_appsw_pane_cp02_ParamLimits

0x830d,	// (0x000b137a) cell_tport_appsw_pane_cp02

0x8321,	// (0x000b138e) cell_tport_appsw_pane_cp03_ParamLimits

0x8321,	// (0x000b138e) cell_tport_appsw_pane_cp03

0x943f,	// (0x000b24ac) phob2_contact_card_pane

0x943f,	// (0x000b24ac) phob2_listscroll_pane

0xefa1,	// (0x000b800e) phob2_list_pane

0xefa9,	// (0x000b8016) scroll_pane_cp034

0x9155,	// (0x000b21c2) phob2_cc_data_pane_ParamLimits

0x9155,	// (0x000b21c2) phob2_cc_data_pane

0x9174,	// (0x000b21e1) phob2_cc_listscroll_pane_ParamLimits

0x9174,	// (0x000b21e1) phob2_cc_listscroll_pane

0x8cc3,	// (0x000b1d30) list_double_large_graphic_phob2_pane_ParamLimits

0x8cc3,	// (0x000b1d30) list_double_large_graphic_phob2_pane

0x9192,	// (0x000b21ff) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9192,	// (0x000b21ff) list_double_large_graphic_phob2_pane_g1

0x91a8,	// (0x000b2215) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x91a8,	// (0x000b2215) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfede,	// (0x000b8f4b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfede,	// (0x000b8f4b) list_double_large_graphic_phob2_pane_g

0x91b4,	// (0x000b2221) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x91b4,	// (0x000b2221) list_double_large_graphic_phob2_pane_t1

0x91ca,	// (0x000b2237) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x91ca,	// (0x000b2237) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee3,	// (0x000b8f50) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee3,	// (0x000b8f50) list_double_large_graphic_phob2_pane_t

0x943f,	// (0x000b24ac) list_highlight_pane_cp024

0x91df,	// (0x000b224c) phob2_cc_button_pane

0x91e7,	// (0x000b2254) phob2_cc_data_pane_g1_ParamLimits

0x91e7,	// (0x000b2254) phob2_cc_data_pane_g1

0x91fc,	// (0x000b2269) phob2_cc_data_pane_g2_ParamLimits

0x91fc,	// (0x000b2269) phob2_cc_data_pane_g2

0x0001,

0xfee8,	// (0x000b8f55) phob2_cc_data_pane_g_ParamLimits

0xfee8,	// (0x000b8f55) phob2_cc_data_pane_g

0x920c,	// (0x000b2279) phob2_cc_data_pane_t1_ParamLimits

0x920c,	// (0x000b2279) phob2_cc_data_pane_t1

0x9224,	// (0x000b2291) phob2_cc_data_pane_t2_ParamLimits

0x9224,	// (0x000b2291) phob2_cc_data_pane_t2

0x923c,	// (0x000b22a9) phob2_cc_data_pane_t3_ParamLimits

0x923c,	// (0x000b22a9) phob2_cc_data_pane_t3

0x0002,

0xfeed,	// (0x000b8f5a) phob2_cc_data_pane_t_ParamLimits

0xfeed,	// (0x000b8f5a) phob2_cc_data_pane_t

0xefb1,	// (0x000b801e) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x000b801e) phob2_cc_list_pane

0xda1d,	// (0x000b6a8a) scroll_pane_cp035_ParamLimits

0xda1d,	// (0x000b6a8a) scroll_pane_cp035

0xa181,	// (0x000b31ee) bg_button_pane_cp033

0xefbd,	// (0x000b802a) phob2_cc_button_pane_g1

0xefc9,	// (0x000b8036) phob2_cc_button_pane_t1

0xefde,	// (0x000b804b) phob2_cc_button_pane_t2

0x0001,

0x0300,	// (0x000a936d) phob2_cc_button_pane_t

0x9254,	// (0x000b22c1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9254,	// (0x000b22c1) list_double_large_graphic_phob2_cc_pane

0x9286,	// (0x000b22f3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9286,	// (0x000b22f3) list_double_large_graphic_phob2_cc_pane_g1

0x9292,	// (0x000b22ff) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9292,	// (0x000b22ff) list_double_large_graphic_phob2_cc_pane_g2

0x929e,	// (0x000b230b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x929e,	// (0x000b230b) list_double_large_graphic_phob2_cc_pane_g3

0x92aa,	// (0x000b2317) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x92aa,	// (0x000b2317) list_double_large_graphic_phob2_cc_pane_g4

0x92b6,	// (0x000b2323) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x92b6,	// (0x000b2323) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfef4,	// (0x000b8f61) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfef4,	// (0x000b8f61) list_double_large_graphic_phob2_cc_pane_g

0x92c2,	// (0x000b232f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x92c2,	// (0x000b232f) list_double_large_graphic_phob2_cc_pane_t1

0x92eb,	// (0x000b2358) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x92eb,	// (0x000b2358) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeff,	// (0x000b8f6c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeff,	// (0x000b8f6c) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x000b805d) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x000b805d) list_highlight_pane_cp025

0xa181,	// (0x000b31ee) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x000b802a) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x000b8036) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x000b804b) phob2_cc_button_pane_t2_ParamLimits

0x0300,	// (0x000a936d) phob2_cc_button_pane_t_ParamLimits

0x065d,	// (0x000a96ca) popup_wgtman_window

0xd84a,	// (0x000b68b7) scroll_pane_cp038

0x8c3c,	// (0x000b1ca9) wgtman_btn_pane_cp_01_ParamLimits

0x8c3c,	// (0x000b1ca9) wgtman_btn_pane_cp_01

0xeffe,	// (0x000b806b) wgtman_content_pane

0xf007,	// (0x000b8074) wgtman_heading_pane

0x943f,	// (0x000b24ac) bg_heading_pane_cp02

0xf010,	// (0x000b807d) wgtman_heading_pane_g1

0xf018,	// (0x000b8085) wgtman_heading_pane_t1

0xf026,	// (0x000b8093) scroll_pane_cp036

0xf02e,	// (0x000b809b) wgtman_list_pane

0xe64e,	// (0x000b76bb) wgtman_list_pane_t1_ParamLimits

0xe64e,	// (0x000b76bb) wgtman_list_pane_t1

0x9b20,	// (0x000b2b8d) cam4_grid_pane

0x6703,	// (0x000af770) bg_button_pane_cp015_ParamLimits

0x6717,	// (0x000af784) bg_button_pane_cp016_ParamLimits

0x672a,	// (0x000af797) bg_button_pane_cp017_ParamLimits

0x6782,	// (0x000af7ef) popup_vitu2_query_window_g3_ParamLimits

0x6782,	// (0x000af7ef) popup_vitu2_query_window_g3

0x683f,	// (0x000af8ac) popup_vitu2_query_window_t6_ParamLimits

0x683f,	// (0x000af8ac) popup_vitu2_query_window_t6

0x686a,	// (0x000af8d7) popup_vitu2_query_window_t7_ParamLimits

0x686a,	// (0x000af8d7) popup_vitu2_query_window_t7

0xd6cf,	// (0x000b673c) cam4_grid_pane_g1

0xd6d8,	// (0x000b6745) cam4_grid_pane_g2

0xf036,	// (0x000b80a3) cam4_grid_pane_g3

0xf03f,	// (0x000b80ac) cam4_grid_pane_g4

0x0003,

0xff04,	// (0x000b8f71) cam4_grid_pane_g

0x1565,	// (0x000aa5d2) aid_placing_vt_slider_lsc_ParamLimits

0x1862,	// (0x000aa8cf) vidtel_button_pane_ParamLimits

0x1862,	// (0x000aa8cf) vidtel_button_pane

0x943f,	// (0x000b24ac) bg_button_pane_cp034

0xf04a,	// (0x000b80b7) vidtel_button_pane_g1

0xf052,	// (0x000b80bf) vidtel_button_pane_t1

0xd964,	// (0x000b69d1) aid_size_vtel_slider_touch

0xda1d,	// (0x000b6a8a) scroll_pane_cp039

0x7628,	// (0x000b0695) ncim_query_button_pane_cp01_ParamLimits

0x7647,	// (0x000b06b4) ncimui_query_pane_g1_ParamLimits

0xa181,	// (0x000b31ee) input_focus_pane_cp012_ParamLimits

0xe24b,	// (0x000b72b8) ncim_query_entry_pane_t1_ParamLimits

0xda1d,	// (0x000b6a8a) scroll_pane_cp039_ParamLimits

0xb3c3,	// (0x000b4430) navi_pane_bcale_mc_g1

0xb3cb,	// (0x000b4438) navi_pane_bcale_mc_t1

0xe800,	// (0x000b786d) main_sp_fs_email_pane_g1

0xe80c,	// (0x000b7879) main_sp_fs_email_pane_g2

0x0001,

0xfcb6,	// (0x000b8d23) main_sp_fs_email_pane_g

0xea62,	// (0x000b7acf) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea62,	// (0x000b7acf) list_single_cale_mrui_row_pane_g3

0x87fa,	// (0x000b1867) list_single_recal_day_pane_g5_event_pane

0xa608,	// (0x000b3675) list_single_recal_day_pane_g7

0xf068,	// (0x000b80d5) list_recal_day_event_pane_cp01

0xf071,	// (0x000b80de) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x000b80e6) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x000b80ee) list_recal_vselct_pane_cp01

0xd986,	// (0x000b69f3) list_recal_day_event_pane_cp01_g1

0xa63d,	// (0x000b36aa) list_recal_day_event_pane_cp01_t1

0xa610,	// (0x000b367d) list_single_recal_day_pane_t1_ParamLimits

0xa622,	// (0x000b368f) list_single_recal_day_pane_t2_ParamLimits

0xfe13,	// (0x000b8e80) list_single_recal_day_pane_t_ParamLimits

0xa816,	// (0x000b3883) bg_notes_pane_ParamLimits

0xa8c5,	// (0x000b3932) list_notes_pane_ParamLimits

0x099e,	// (0x000a9a0b) scroll_pane_cp06_ParamLimits

0xa8e7,	// (0x000b3954) main_notes_pane_ParamLimits

0x943f,	// (0x000b24ac) main_welc_pane

0x9314,	// (0x000b2381) main_welc_body_pane_ParamLimits

0x9314,	// (0x000b2381) main_welc_body_pane

0x9331,	// (0x000b239e) main_welc_opti_pane_ParamLimits

0x9331,	// (0x000b239e) main_welc_opti_pane

0x9376,	// (0x000b23e3) main_welc_pane_t1_ParamLimits

0x9376,	// (0x000b23e3) main_welc_pane_t1

0x9394,	// (0x000b2401) main_welc_body_row_pane_ParamLimits

0x9394,	// (0x000b2401) main_welc_body_row_pane

0xee3e,	// (0x000b7eab) main_welc_opti_row_pane_ParamLimits

0xee3e,	// (0x000b7eab) main_welc_opti_row_pane

0xf08b,	// (0x000b80f8) main_welc_opti_row_pane_g1

0x93a9,	// (0x000b2416) main_welc_opti_row_pane_t1

0xf093,	// (0x000b8100) main_welc_body_row_pane_t1

0xedb5,	// (0x000b7e22) popup_notif_wgt_heading_pane

0xedcf,	// (0x000b7e3c) aid_size_list_notif_wgt_del_ParamLimits

0xeddc,	// (0x000b7e49) list_notif_wgt_row_pane_g1_ParamLimits

0xede8,	// (0x000b7e55) list_notif_wgt_row_pane_g2_ParamLimits

0xedf7,	// (0x000b7e64) list_notif_wgt_row_pane_g3_ParamLimits

0xfe7a,	// (0x000b8ee7) list_notif_wgt_row_pane_g_ParamLimits

0xee04,	// (0x000b7e71) list_notif_wgt_row_pane_t1_ParamLimits

0xee1a,	// (0x000b7e87) list_notif_wgt_row_pane_t2_ParamLimits

0xee2c,	// (0x000b7e99) list_notif_wgt_row_pane_t3_ParamLimits

0xfe81,	// (0x000b8eee) list_notif_wgt_row_pane_t_ParamLimits

0x8cd5,	// (0x000b1d42) listrow_wgtman_pane_g1_ParamLimits

0x8ce2,	// (0x000b1d4f) listrow_wgtman_pane_g2_ParamLimits

0xfe97,	// (0x000b8f04) listrow_wgtman_pane_g_ParamLimits

0x8d00,	// (0x000b1d6d) listrow_wgtman_pane_t1_ParamLimits

0x8d18,	// (0x000b1d85) listrow_wgtman_pane_t2_ParamLimits

0xfe9c,	// (0x000b8f09) listrow_wgtman_pane_t_ParamLimits

0x8d3e,	// (0x000b1dab) wait_bar_pane_cp09_ParamLimits

0x943f,	// (0x000b24ac) bg_popup_heading_pane_cp02

0xf0a2,	// (0x000b810f) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x000b8117) popup_notif_wgt_heading_pane_t1

0x943f,	// (0x000b24ac) main_vids_pane

0x943f,	// (0x000b24ac) vids_listscroll_pane

0x93b8,	// (0x000b2425) scroll_pane_cp040

0x943f,	// (0x000b24ac) vids_list_pane

0x93c3,	// (0x000b2430) vids_list_double_pane_ParamLimits

0x93c3,	// (0x000b2430) vids_list_double_pane

0x93d4,	// (0x000b2441) vids_list_double_pane_g1

0x93dd,	// (0x000b244a) vids_list_double_pane_t1

0x93ed,	// (0x000b245a) vids_list_double_pane_t2

0x0001,

0xff12,	// (0x000b8f7f) vids_list_double_pane_t

0x94a7,	// (0x000b2514) main_ncimui_pane_ParamLimits

0x745e,	// (0x000b04cb) main_ncimui_pane_g1_ParamLimits

0x746a,	// (0x000b04d7) main_ncimui_pane_g2_ParamLimits

0x746a,	// (0x000b04d7) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x000b8c6a) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x000b8c6a) main_ncimui_pane_g

0x934c,	// (0x000b23b9) main_welc_pane_g1_ParamLimits

0x934c,	// (0x000b23b9) main_welc_pane_g1

0x9361,	// (0x000b23ce) main_welc_pane_g2_ParamLimits

0x9361,	// (0x000b23ce) main_welc_pane_g2

0x0001,

0xff0d,	// (0x000b8f7a) main_welc_pane_g_ParamLimits

0xff0d,	// (0x000b8f7a) main_welc_pane_g

0xa816,	// (0x000b3883) listscroll_mce_pane_ParamLimits

0xb518,	// (0x000b4585) wait_bar_pane_cp10

0xc974,	// (0x000b59e1) main_cale_day_pane_ParamLimits

0xc974,	// (0x000b59e1) main_cale_week_pane_ParamLimits

0xa816,	// (0x000b3883) main_messa_pane_ParamLimits

0x4cd2,	// (0x000add3f) main_clock2_btn_pane_ParamLimits

0x4cd2,	// (0x000add3f) main_clock2_btn_pane

0xd155,	// (0x000b61c2) main_clock2_btn_pane_cp01_ParamLimits

0xd155,	// (0x000b61c2) main_clock2_btn_pane_cp01

0xea33,	// (0x000b7aa0) list_cale_mrui_pane_ParamLimits

0xee70,	// (0x000b7edd) main_cf0_pane_g2

0x0001,

0x0278,	// (0x000a92e5) main_cf0_pane_g

0x8f27,	// (0x000b1f94) area_left_week_number_pane_ParamLimits

0x8f33,	// (0x000b1fa0) area_top_day_name_pane_ParamLimits

0x8f46,	// (0x000b1fb3) frame_month_view_pane_ParamLimits

0xef66,	// (0x000b7fd3) grid_month_view_pane_ParamLimits

0xef74,	// (0x000b7fe1) frm_month_g1_ParamLimits

0x8fc7,	// (0x000b2034) frm_month_g2_ParamLimits

0x8fda,	// (0x000b2047) frm_month_g3_ParamLimits

0x8fed,	// (0x000b205a) frm_month_g4_ParamLimits

0x9000,	// (0x000b206d) frm_month_g5_ParamLimits

0x9013,	// (0x000b2080) frm_month_g6_ParamLimits

0x9026,	// (0x000b2093) frm_month_g7_ParamLimits

0xef81,	// (0x000b7fee) frm_month_g8_ParamLimits

0x9039,	// (0x000b20a6) frm_month_g9_ParamLimits

0x9049,	// (0x000b20b6) frm_month_g10_ParamLimits

0x9059,	// (0x000b20c6) frm_month_g11_ParamLimits

0x9069,	// (0x000b20d6) frm_month_g12_ParamLimits

0x907b,	// (0x000b20e8) frm_month_g13_ParamLimits

0x908d,	// (0x000b20fa) frm_month_g14_ParamLimits

0x90a1,	// (0x000b210e) frm_month_g15_ParamLimits

0x90b5,	// (0x000b2122) frm_month_g16_ParamLimits

0xfebd,	// (0x000b8f2a) frm_month_g_ParamLimits

0xef8e,	// (0x000b7ffb) cell_top_day_name_pane_t1_ParamLimits

0x90c9,	// (0x000b2136) cell_area_left_week_number_pane_g1_ParamLimits

0x90d5,	// (0x000b2142) cell_area_left_week_number_pane_t1_ParamLimits

0xcfcd,	// (0x000b603a) cell_month_view_pane_g1_ParamLimits

0x90e8,	// (0x000b2155) cell_month_view_pane_t1_ParamLimits

0xa80e,	// (0x000b387b) main_clock2_btn_pane_g1

0xf0b8,	// (0x000b8125) main_clock2_btn_pane_t1

0xa181,	// (0x000b31ee) listscroll_cmail_pane_ParamLimits

0xe800,	// (0x000b786d) main_sp_fs_email_pane_g1_ParamLimits

0xe80c,	// (0x000b7879) main_sp_fs_email_pane_g2_ParamLimits

0xfcb6,	// (0x000b8d23) main_sp_fs_email_pane_g_ParamLimits

0xeb41,	// (0x000b7bae) list_recal_day_pane_ParamLimits

0xeb52,	// (0x000b7bbf) mian_recal_day_pane_t1

0x7f80,	// (0x000b0fed) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f80,	// (0x000b0fed) list_single_dyc_row_text_pane_t4

0x7fc9,	// (0x000b1036) list_single_dyc_row_text_pane_t5_ParamLimits

0x7fc9,	// (0x000b1036) list_single_dyc_row_text_pane_t5

0xa370,	// (0x000b33dd) list_single_dyc_row_text_pane_t6_ParamLimits

0xa370,	// (0x000b33dd) list_single_dyc_row_text_pane_t6

0x2310,	// (0x000ab37d) aid_mgn_list_cale_time_pane

0x94a7,	// (0x000b2514) main_gallery2_pane_ParamLimits

0xd16b,	// (0x000b61d8) main_clock2_pane_cp01_t1

0xd179,	// (0x000b61e6) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x000b8840) main_clock2_pane_cp01_t

0x0d1b,	// (0x000a9d88) cale_week_scroll_pane_g16_ParamLimits

0x0d1b,	// (0x000a9d88) cale_week_scroll_pane_g16

0xaad3,	// (0x000b3b40) vorec_slider_pane

0xf052,	// (0x000b80bf) vidtel_button_pane_t1_ParamLimits

0x8860,	// (0x000b18cd) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8860,	// (0x000b18cd) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8871,	// (0x000b18de) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8871,	// (0x000b18de) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe36,	// (0x000b8ea3) main_fs_bigclock_clock_pane_g_ParamLimits

0x8884,	// (0x000b18f1) main_fs_bigclock_clock_pane_t1_ParamLimits

0x889a,	// (0x000b1907) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe3f,	// (0x000b8eac) main_fs_bigclock_clock_pane_t_ParamLimits

0x44d0,	// (0x000ad53d) main_mup3_lyrics_pane_ParamLimits

0x44d0,	// (0x000ad53d) main_mup3_lyrics_pane

0x9423,	// (0x000b2490) main_mup3_lyrics_pane_t1_ParamLimits

0x9423,	// (0x000b2490) main_mup3_lyrics_pane_t1

0x9872,	// (0x000b28df) aid_main_mp4_pane_t1_area

0x987c,	// (0x000b28e9) aid_main_mp4_pane_t2_area

0x9928,	// (0x000b2995) main_mp4_pane_g7_ParamLimits

0x9928,	// (0x000b2995) main_mp4_pane_g7

0x9934,	// (0x000b29a1) main_mp4_pane_g8_ParamLimits

0x9934,	// (0x000b29a1) main_mp4_pane_g8

0x5803,	// (0x000ae870) aid_call6_pane_g1_size

0x926f,	// (0x000b22dc) list_double_large_graphic_phob2_other_pane_ParamLimits

0x926f,	// (0x000b22dc) list_double_large_graphic_phob2_other_pane

0xb2f4,	// (0x000b4361) list_double_large_graphic_phob2_other_pane_g1

0x943f,	// (0x000b24ac) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
