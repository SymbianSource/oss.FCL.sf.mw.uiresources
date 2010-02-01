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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008046c };

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
0x562b,	// (0x00085a97) Screen

0x5637,	// (0x00085aa3) application_window

0x5677,	// (0x00085ae3) area_bottom_pane_ParamLimits

0x5677,	// (0x00085ae3) area_bottom_pane

0x56ac,	// (0x00085b18) area_top_pane_ParamLimits

0x56ac,	// (0x00085b18) area_top_pane

0x0261,	// (0x000806cd) call_video_uplink_pane_ParamLimits

0x0261,	// (0x000806cd) call_video_uplink_pane

0x5739,	// (0x00085ba5) main_pane_ParamLimits

0x5739,	// (0x00085ba5) main_pane

0xefe8,	// (0x0008f454) context_pane

0x890b,	// (0x00088d77) navi_pane

0x892f,	// (0x00088d9b) popup_cale_events_window_ParamLimits

0x892f,	// (0x00088d9b) popup_cale_events_window

0xeffb,	// (0x0008f467) popup_mup_playback_window

0x8947,	// (0x00088db3) signal_pane

0x3efd,	// (0x00084369) main_browser_pane

0xdb8c,	// (0x0008dff8) main_burst_pane

0x87bd,	// (0x00088c29) main_calc_pane

0xdb8c,	// (0x0008dff8) main_cale_day_pane

0x3efd,	// (0x00084369) main_cale_month_pane

0xdb8c,	// (0x0008dff8) main_cale_week_pane

0xdb8c,	// (0x0008dff8) main_call_pane

0x3bb7,	// (0x00084023) main_call_poc_pane

0xdb8c,	// (0x0008dff8) main_camera_pane

0xdb8c,	// (0x0008dff8) main_chi_dic_pane

0xda2e,	// (0x0008de9a) main_clock_pane

0x3bb7,	// (0x00084023) main_fmradio_pane

0xdb8c,	// (0x0008dff8) main_graph_messa_pane

0x3bb7,	// (0x00084023) main_help_pane

0x3efd,	// (0x00084369) main_im_pane

0x3e32,	// (0x0008429e) main_image_pane_ParamLimits

0x3e32,	// (0x0008429e) main_image_pane

0x3bb7,	// (0x00084023) main_location2_pane

0xdb8c,	// (0x0008dff8) main_location_pane

0x3bb7,	// (0x00084023) main_messa_pane

0x3bb7,	// (0x00084023) main_mp2_pane

0xdb8c,	// (0x0008dff8) main_mp_pane

0x3bb7,	// (0x00084023) main_msg_pane

0x3bb7,	// (0x00084023) main_mup_eq_pane

0x3bb7,	// (0x00084023) main_mup_pane

0xdb8c,	// (0x0008dff8) main_notes_pane

0x3bb7,	// (0x00084023) main_pec_pane

0x3bb7,	// (0x00084023) main_phob_pane

0x3bb7,	// (0x00084023) main_pinb_pane

0x3bb7,	// (0x00084023) main_postcard_pane

0x3bb7,	// (0x00084023) main_qdial_pane

0xdb8c,	// (0x0008dff8) main_skin_pane

0x3bb7,	// (0x00084023) main_smil2_pane

0xdb8c,	// (0x0008dff8) main_smil_pane

0xdb8c,	// (0x0008dff8) main_video_pane

0xdb8c,	// (0x0008dff8) main_video_tele_pane

0x3e32,	// (0x0008429e) main_viewer_pane_ParamLimits

0x3e32,	// (0x0008429e) main_viewer_pane

0xdb8c,	// (0x0008dff8) main_vorec_pane

0x87f5,	// (0x00088c61) popup_blid_sat_info_window_ParamLimits

0x87f5,	// (0x00088c61) popup_blid_sat_info_window

0x880f,	// (0x00088c7b) popup_dyc_status_message_window_ParamLimits

0x880f,	// (0x00088c7b) popup_dyc_status_message_window

0x881f,	// (0x00088c8b) popup_grid_large_graphic_window_ParamLimits

0x881f,	// (0x00088c8b) popup_grid_large_graphic_window

0x8897,	// (0x00088d03) popup_loc_request_window_ParamLimits

0x8897,	// (0x00088d03) popup_loc_request_window

0x88df,	// (0x00088d4b) popup_wml_address_window_ParamLimits

0x88df,	// (0x00088d4b) popup_wml_address_window

0x8695,	// (0x00088b01) call_muted_g1

0x8351,	// (0x000887bd) popup_call_audio_conf_window_ParamLimits

0x8351,	// (0x000887bd) popup_call_audio_conf_window

0x86a5,	// (0x00088b11) popup_call_audio_first_window_ParamLimits

0x86a5,	// (0x00088b11) popup_call_audio_first_window

0x86e5,	// (0x00088b51) popup_call_audio_in_window_ParamLimits

0x86e5,	// (0x00088b51) popup_call_audio_in_window

0x8709,	// (0x00088b75) popup_call_audio_out_window_ParamLimits

0x8709,	// (0x00088b75) popup_call_audio_out_window

0x872b,	// (0x00088b97) popup_call_audio_second_window_ParamLimits

0x872b,	// (0x00088b97) popup_call_audio_second_window

0x875b,	// (0x00088bc7) popup_call_audio_wait_window_ParamLimits

0x875b,	// (0x00088bc7) popup_call_audio_wait_window

0x877c,	// (0x00088be8) popup_number_entry_window_ParamLimits

0x877c,	// (0x00088be8) popup_number_entry_window

0x028d,	// (0x000806f9) bg_popup_call_pane_cp05_ParamLimits

0x028d,	// (0x000806f9) bg_popup_call_pane_cp05

0x02ad,	// (0x00080719) popup_number_entry_window_t1

0x02c0,	// (0x0008072c) popup_number_entry_window_t2

0x02d2,	// (0x0008073e) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0008f558) popup_number_entry_window_t

0x02e4,	// (0x00080750) text_title_cp2

0x02f7,	// (0x00080763) bg_popup_call_pane_cp_ParamLimits

0x02f7,	// (0x00080763) bg_popup_call_pane_cp

0x0305,	// (0x00080771) call_thumbnail_pane

0x030d,	// (0x00080779) popup_call_audio_in_window_g1_ParamLimits

0x030d,	// (0x00080779) popup_call_audio_in_window_g1

0x0319,	// (0x00080785) popup_call_audio_in_window_g2_ParamLimits

0x0319,	// (0x00080785) popup_call_audio_in_window_g2

0x0325,	// (0x00080791) popup_call_audio_in_window_g3_ParamLimits

0x0325,	// (0x00080791) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0008f561) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0008f561) popup_call_audio_in_window_g

0x0331,	// (0x0008079d) popup_call_audio_in_window_t1_ParamLimits

0x0331,	// (0x0008079d) popup_call_audio_in_window_t1

0x034d,	// (0x000807b9) popup_call_audio_in_window_t2_ParamLimits

0x034d,	// (0x000807b9) popup_call_audio_in_window_t2

0x3880,	// (0x00083cec) popup_call_audio_in_window_t3_ParamLimits

0x3880,	// (0x00083cec) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0008f568) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0008f568) popup_call_audio_in_window_t

0x02f7,	// (0x00080763) bg_popup_call_pane_cp01_ParamLimits

0x02f7,	// (0x00080763) bg_popup_call_pane_cp01

0x0305,	// (0x00080771) call_thumbnail_pane_cp02

0x3893,	// (0x00083cff) call_type_pane_cp022

0x389b,	// (0x00083d07) popup_call_audio_out_window_g1_ParamLimits

0x389b,	// (0x00083d07) popup_call_audio_out_window_g1

0x38ad,	// (0x00083d19) popup_call_audio_out_window_g2_ParamLimits

0x38ad,	// (0x00083d19) popup_call_audio_out_window_g2

0x38b9,	// (0x00083d25) popup_call_audio_out_window_g3_ParamLimits

0x38b9,	// (0x00083d25) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0008f56f) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0008f56f) popup_call_audio_out_window_g

0x38cb,	// (0x00083d37) popup_call_audio_out_window_t1_ParamLimits

0x38cb,	// (0x00083d37) popup_call_audio_out_window_t1

0x38e3,	// (0x00083d4f) popup_call_audio_out_window_t2_ParamLimits

0x38e3,	// (0x00083d4f) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0008f576) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0008f576) popup_call_audio_out_window_t

0x38f8,	// (0x00083d64) bg_popup_call_pane_ParamLimits

0x38f8,	// (0x00083d64) bg_popup_call_pane

0x5921,	// (0x00085d8d) call_thumbnail_pane_cp_ParamLimits

0x5921,	// (0x00085d8d) call_thumbnail_pane_cp

0x397c,	// (0x00083de8) call_type_pane_cp01_ParamLimits

0x397c,	// (0x00083de8) call_type_pane_cp01

0x39c0,	// (0x00083e2c) popup_call_audio_first_window_g1_ParamLimits

0x39c0,	// (0x00083e2c) popup_call_audio_first_window_g1

0x3a0c,	// (0x00083e78) popup_call_audio_first_window_g2_ParamLimits

0x3a0c,	// (0x00083e78) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0008f57b) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0008f57b) popup_call_audio_first_window_g

0x3a50,	// (0x00083ebc) popup_call_audio_first_window_t1_ParamLimits

0x3a50,	// (0x00083ebc) popup_call_audio_first_window_t1

0x3afc,	// (0x00083f68) popup_call_audio_first_window_t4_ParamLimits

0x3afc,	// (0x00083f68) popup_call_audio_first_window_t4

0x3b88,	// (0x00083ff4) popup_call_audio_first_window_t5_ParamLimits

0x3b88,	// (0x00083ff4) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0008f580) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0008f580) popup_call_audio_first_window_t

0x3bb7,	// (0x00084023) bg_popup_call_pane_cp02

0x3bc1,	// (0x0008402d) call_type_pane_cp023

0x3bc9,	// (0x00084035) popup_call_audio_wait_window_g1

0x3bd1,	// (0x0008403d) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008f587) popup_call_audio_wait_window_g

0x3bd9,	// (0x00084045) popup_call_audio_wait_window_t3

0x3be7,	// (0x00084053) bg_popup_call_pane_cp03_ParamLimits

0x3be7,	// (0x00084053) bg_popup_call_pane_cp03

0x3c67,	// (0x000840d3) call_thumbnail_pane_cp011_ParamLimits

0x3c67,	// (0x000840d3) call_thumbnail_pane_cp011

0x3c73,	// (0x000840df) call_type_pane_cp034_ParamLimits

0x3c73,	// (0x000840df) call_type_pane_cp034

0x3caf,	// (0x0008411b) popup_call_audio_second_window_g1_ParamLimits

0x3caf,	// (0x0008411b) popup_call_audio_second_window_g1

0x3ceb,	// (0x00084157) popup_call_audio_second_window_g2_ParamLimits

0x3ceb,	// (0x00084157) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0008f58c) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0008f58c) popup_call_audio_second_window_g

0x3d27,	// (0x00084193) popup_call_audio_second_window_t1_ParamLimits

0x3d27,	// (0x00084193) popup_call_audio_second_window_t1

0x3da8,	// (0x00084214) popup_call_audio_second_window_t2_ParamLimits

0x3da8,	// (0x00084214) popup_call_audio_second_window_t2

0x3dde,	// (0x0008424a) popup_call_audio_second_window_t3_ParamLimits

0x3dde,	// (0x0008424a) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0008f591) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0008f591) popup_call_audio_second_window_t

0x3bb7,	// (0x00084023) bg_popup_call_pane_cp04

0x3e14,	// (0x00084280) list_conf_pane

0x3e1c,	// (0x00084288) popup_call_audio_conf_window_t1

0x3e2a,	// (0x00084296) call_thumbnail_pane_g1

0x3e32,	// (0x0008429e) bg_pinb_pane_ParamLimits

0x3e32,	// (0x0008429e) bg_pinb_pane

0x3e40,	// (0x000842ac) find_pinb_pane

0x3e49,	// (0x000842b5) listscroll_pinb_pane_ParamLimits

0x3e49,	// (0x000842b5) listscroll_pinb_pane

0x3e58,	// (0x000842c4) pinb_bg_pane_g1

0x5945,	// (0x00085db1) pinb_bg_pane_g2

0x5951,	// (0x00085dbd) pinb_bg_pane_g3

0x595d,	// (0x00085dc9) pinb_bg_pane_g4

0x5969,	// (0x00085dd5) pinb_bg_pane_g5

0x5975,	// (0x00085de1) pinb_bg_pane_g6

0x5980,	// (0x00085dec) pinb_bg_pane_g7

0x598b,	// (0x00085df7) pinb_bg_pane_g8

0x5996,	// (0x00085e02) pinb_bg_pane_g9

0x59a0,	// (0x00085e0c) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0008f598) pinb_bg_pane_g

0x59bd,	// (0x00085e29) grid_pinb_pane

0x59c8,	// (0x00085e34) list_pinb_pane

0x59d3,	// (0x00085e3f) scroll_pane_cp01_ParamLimits

0x59d3,	// (0x00085e3f) scroll_pane_cp01

0x3e62,	// (0x000842ce) find_pinb_pane_g1_ParamLimits

0x3e62,	// (0x000842ce) find_pinb_pane_g1

0x3e7a,	// (0x000842e6) find_pinb_pane_t1

0x3e8c,	// (0x000842f8) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0008f5b2) find_pinb_pane_t

0x3ea1,	// (0x0008430d) input_focus_pane_cp01_ParamLimits

0x3ea1,	// (0x0008430d) input_focus_pane_cp01

0x59e5,	// (0x00085e51) cell_pinb_pane_ParamLimits

0x59e5,	// (0x00085e51) cell_pinb_pane

0x5a05,	// (0x00085e71) cell_pinb_pane_g1_ParamLimits

0x5a05,	// (0x00085e71) cell_pinb_pane_g1

0x5a1a,	// (0x00085e86) cell_pinb_pane_g2_ParamLimits

0x5a1a,	// (0x00085e86) cell_pinb_pane_g2

0x3ead,	// (0x00084319) cell_pinb_pane_g3_ParamLimits

0x3ead,	// (0x00084319) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0008f5b7) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0008f5b7) cell_pinb_pane_g

0x3bb7,	// (0x00084023) grid_highlight_pane_cp01

0x5a26,	// (0x00085e92) list_pinb_item_pane_ParamLimits

0x5a26,	// (0x00085e92) list_pinb_item_pane

0x3bb7,	// (0x00084023) list_highlight_pane_cp02

0x5a41,	// (0x00085ead) list_pinb_item_pane_g1_ParamLimits

0x5a41,	// (0x00085ead) list_pinb_item_pane_g1

0x5a4e,	// (0x00085eba) list_pinb_item_pane_g2_ParamLimits

0x5a4e,	// (0x00085eba) list_pinb_item_pane_g2

0x5a5a,	// (0x00085ec6) list_pinb_item_pane_g3_ParamLimits

0x5a5a,	// (0x00085ec6) list_pinb_item_pane_g3

0x5a6b,	// (0x00085ed7) list_pinb_item_pane_g4_ParamLimits

0x5a6b,	// (0x00085ed7) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0008f5be) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0008f5be) list_pinb_item_pane_g

0x5a77,	// (0x00085ee3) list_pinb_item_pane_t1_ParamLimits

0x5a77,	// (0x00085ee3) list_pinb_item_pane_t1

0x5aa8,	// (0x00085f14) calc_display_pane

0x5ac6,	// (0x00085f32) calc_paper_pane

0x5ae2,	// (0x00085f4e) grid_calc_pane

0x3bb7,	// (0x00084023) bg_list_pane_cp01

0x5b0e,	// (0x00085f7a) clock_g1

0x5b16,	// (0x00085f82) clock_g2

0x0001,

0xf15b,	// (0x0008f5c7) clock_g

0x5b20,	// (0x00085f8c) clock_t1_ParamLimits

0x5b20,	// (0x00085f8c) clock_t1

0x5b35,	// (0x00085fa1) clock_t2_ParamLimits

0x5b35,	// (0x00085fa1) clock_t2

0x5b47,	// (0x00085fb3) clock_t3_ParamLimits

0x5b47,	// (0x00085fb3) clock_t3

0x5b59,	// (0x00085fc5) clock_t4_ParamLimits

0x5b59,	// (0x00085fc5) clock_t4

0x5b6b,	// (0x00085fd7) clock_t5_ParamLimits

0x5b6b,	// (0x00085fd7) clock_t5

0x5b80,	// (0x00085fec) clock_t6_ParamLimits

0x5b80,	// (0x00085fec) clock_t6

0x5b92,	// (0x00085ffe) clock_t7_ParamLimits

0x5b92,	// (0x00085ffe) clock_t7

0x5ba4,	// (0x00086010) clock_t8_ParamLimits

0x5ba4,	// (0x00086010) clock_t8

0x5bba,	// (0x00086026) clock_t9_ParamLimits

0x5bba,	// (0x00086026) clock_t9

0x0008,

0xf160,	// (0x0008f5cc) clock_t_ParamLimits

0xf160,	// (0x0008f5cc) clock_t

0x3eb9,	// (0x00084325) popup_clock_analogue_window_cp02

0x3eb9,	// (0x00084325) popup_clock_digital_window_cp01

0x3ec1,	// (0x0008432d) listscroll_help_pane

0x3bb7,	// (0x00084023) phob_pre_status_pane

0x3ecb,	// (0x00084337) grid_qdial_pane

0x3bb7,	// (0x00084023) listscroll_mce_pane

0x3ed5,	// (0x00084341) bg_notes_pane

0x3edf,	// (0x0008434b) list_notes_pane

0x5bd0,	// (0x0008603c) scroll_pane_cp06

0x3ee9,	// (0x00084355) bg_calc_paper_pane

0x5be5,	// (0x00086051) list_calc_pane

0x3efd,	// (0x00084369) bg_calc_display_pane

0x5bff,	// (0x0008606b) calc_display_pane_t1

0x5c14,	// (0x00086080) calc_display_pane_t2

0x5c29,	// (0x00086095) calc_display_pane_t3

0x0002,

0xf173,	// (0x0008f5df) calc_display_pane_t

0x5c3b,	// (0x000860a7) cell_calc_pane_ParamLimits

0x5c3b,	// (0x000860a7) cell_calc_pane

0x3f09,	// (0x00084375) bg_calc_paper_pane_g1

0x3f21,	// (0x0008438d) bg_calc_paper_pane_g2

0x3f15,	// (0x00084381) bg_calc_paper_pane_g3

0x3f39,	// (0x000843a5) bg_calc_paper_pane_g4

0x3f2d,	// (0x00084399) bg_calc_paper_pane_g5

0x5c6a,	// (0x000860d6) bg_calc_paper_pane_g6

0x5c7b,	// (0x000860e7) bg_calc_paper_pane_g7

0x5c8c,	// (0x000860f8) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0008f5e6) bg_calc_paper_pane_g

0x5c9d,	// (0x00086109) calc_bg_paper_pane_g9

0x5cae,	// (0x0008611a) list_calc_item_pane_ParamLimits

0x5cae,	// (0x0008611a) list_calc_item_pane

0x3f45,	// (0x000843b1) list_calc_item_pane_g1

0x5cd2,	// (0x0008613e) list_calc_item_pane_t1_ParamLimits

0x5cd2,	// (0x0008613e) list_calc_item_pane_t1

0x5ce4,	// (0x00086150) list_calc_item_pane_t2_ParamLimits

0x5ce4,	// (0x00086150) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0008f5f7) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0008f5f7) list_calc_item_pane_t

0x3f52,	// (0x000843be) cell_calc_pane_g1

0x3f5c,	// (0x000843c8) grid_highlight_pane_cp02

0x3f87,	// (0x000843f3) bg_calc_display_pane_g1

0x5d14,	// (0x00086180) bg_calc_display_pane_g2

0x3f7e,	// (0x000843ea) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0008f601) bg_calc_display_pane_g

0x5d1e,	// (0x0008618a) cell_qdial_pane_ParamLimits

0x5d1e,	// (0x0008618a) cell_qdial_pane

0x5d34,	// (0x000861a0) cell_qdial_pane_g1_ParamLimits

0x5d34,	// (0x000861a0) cell_qdial_pane_g1

0x5d41,	// (0x000861ad) cell_qdial_pane_g2_ParamLimits

0x5d41,	// (0x000861ad) cell_qdial_pane_g2

0x3f90,	// (0x000843fc) cell_qdial_pane_g3_ParamLimits

0x3f90,	// (0x000843fc) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0008f608) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0008f608) cell_qdial_pane_g

0x5d5f,	// (0x000861cb) cell_qdial_pane_t1_ParamLimits

0x5d5f,	// (0x000861cb) cell_qdial_pane_t1

0x5d77,	// (0x000861e3) cell_qdial_pane_t2_ParamLimits

0x5d77,	// (0x000861e3) cell_qdial_pane_t2

0x5d8a,	// (0x000861f6) cell_qdial_pane_t3_ParamLimits

0x5d8a,	// (0x000861f6) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0008f611) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0008f611) cell_qdial_pane_t

0x3bb7,	// (0x00084023) grid_highlight_pane_cp04

0x3f9c,	// (0x00084408) thumbnail_qdial_pane_ParamLimits

0x3f9c,	// (0x00084408) thumbnail_qdial_pane

0x3ff8,	// (0x00084464) list_help_pane

0x4001,	// (0x0008446d) scroll_pane_cp02

0x5d9d,	// (0x00086209) help_list_pane_t1_ParamLimits

0x5d9d,	// (0x00086209) help_list_pane_t1

0x5dc7,	// (0x00086233) bg_notes_pane_g2

0x5dcf,	// (0x0008623b) bg_notes_pane_g3

0x5dd7,	// (0x00086243) notes_bg_pane_g1

0x5ddf,	// (0x0008624b) notes_bg_pane_g4

0x5de7,	// (0x00086253) notes_bg_pane_g5

0x5def,	// (0x0008625b) notes_bg_pane_g6

0x5df7,	// (0x00086263) notes_bg_pane_g7

0x5dff,	// (0x0008626b) notes_bg_pane_g8

0x5e07,	// (0x00086273) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008f62f) notes_bg_pane_g

0x5e0f,	// (0x0008627b) list_notes_text_pane_ParamLimits

0x5e0f,	// (0x0008627b) list_notes_text_pane

0x400a,	// (0x00084476) list_notes_text_pane_g1

0x0401,	// (0x0008086d) list_notes_text_pane_t1

0x3efd,	// (0x00084369) listscroll_cale_week_pane

0x5e49,	// (0x000862b5) bg_cale_heading_pane

0x4024,	// (0x00084490) bg_cale_pane_cp01

0x5e5d,	// (0x000862c9) cale_week_corner_pane

0x5e73,	// (0x000862df) cale_week_day_heading_pane

0x5e87,	// (0x000862f3) cale_week_scroll_pane_g1

0x5e98,	// (0x00086304) cale_week_scroll_pane_g2

0x5ea9,	// (0x00086315) cale_week_scroll_pane_g3

0x5eba,	// (0x00086326) cale_week_scroll_pane_g4

0x5ecb,	// (0x00086337) cale_week_scroll_pane_g5

0x5edc,	// (0x00086348) cale_week_scroll_pane_g6

0x5eef,	// (0x0008635b) cale_week_scroll_pane_g7

0x5f02,	// (0x0008636e) cale_week_scroll_pane_g8

0x5f15,	// (0x00086381) cale_week_scroll_pane_g9

0x5f26,	// (0x00086392) cale_week_scroll_pane_g10

0x5f37,	// (0x000863a3) cale_week_scroll_pane_g11

0x5f48,	// (0x000863b4) cale_week_scroll_pane_g12

0x5f59,	// (0x000863c5) cale_week_scroll_pane_g13

0x5f6a,	// (0x000863d6) cale_week_scroll_pane_g14

0x5f7b,	// (0x000863e7) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0008f63e) cale_week_scroll_pane_g

0x5f8c,	// (0x000863f8) cale_week_time_pane

0x5f9f,	// (0x0008640b) grid_cale_week_pane

0x5fb4,	// (0x00086420) scroll_pane_cp08

0x5fce,	// (0x0008643a) cell_cale_week_pane_ParamLimits

0x5fce,	// (0x0008643a) cell_cale_week_pane

0x600c,	// (0x00086478) cale_week_day_heading_pane_t1

0x6039,	// (0x000864a5) cale_week_day_heading_pane_t2

0x6066,	// (0x000864d2) cale_week_day_heading_pane_t3

0x6093,	// (0x000864ff) cale_week_day_heading_pane_t4

0x60c0,	// (0x0008652c) cale_week_day_heading_pane_t5

0x60ed,	// (0x00086559) cale_week_day_heading_pane_t6

0x611a,	// (0x00086586) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0008f65d) cale_week_day_heading_pane_t

0x404f,	// (0x000844bb) bg_cale_side_pane

0x6147,	// (0x000865b3) cale_week_time_pane_t1

0x6173,	// (0x000865df) cale_week_time_pane_t2

0x619f,	// (0x0008660b) cale_week_time_pane_t3

0x61cb,	// (0x00086637) cale_week_time_pane_t4

0x61f7,	// (0x00086663) cale_week_time_pane_t5

0x6223,	// (0x0008668f) cale_week_time_pane_t6

0x624f,	// (0x000866bb) cale_week_time_pane_t7

0x627b,	// (0x000866e7) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0008f66c) cale_week_time_pane_t

0x62a7,	// (0x00086713) cell_cale_week_pane_g2

0x62c0,	// (0x0008672c) cell_cale_week_pane_g3_ParamLimits

0x62c0,	// (0x0008672c) cell_cale_week_pane_g3

0x405d,	// (0x000844c9) grid_highlight_pane_cp07

0x4065,	// (0x000844d1) listscroll_gms_pane

0x406f,	// (0x000844db) grid_gms_pane

0x4078,	// (0x000844e4) listscroll_gms_pane_g1

0x4080,	// (0x000844ec) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0008f67d) listscroll_gms_pane_g

0x62d8,	// (0x00086744) scroll_pane_cp010

0x62e3,	// (0x0008674f) cell_gms_pane_ParamLimits

0x62e3,	// (0x0008674f) cell_gms_pane

0x62f6,	// (0x00086762) cell_gms_pane_g1

0x4088,	// (0x000844f4) cell_gms_pane_g2

0x4090,	// (0x000844fc) cell_gms_pane_g3

0x4099,	// (0x00084505) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008f682) cell_gms_pane_g

0x40a2,	// (0x0008450e) grid_highlight_pane_cp09

0x863d,	// (0x00088aa9) phob_pre_status_pane_g1

0x8645,	// (0x00088ab1) phob_pre_status_pane_g2

0x864d,	// (0x00088ab9) phob_pre_status_pane_g3

0x8655,	// (0x00088ac1) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0008fa71) phob_pre_status_pane_g

0x8665,	// (0x00088ad1) phob_pre_status_pane_t1

0x8675,	// (0x00088ae1) phob_pre_status_pane_t2

0x8685,	// (0x00088af1) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0008fa7c) phob_pre_status_pane_t

0x3bb7,	// (0x00084023) bg_list_pane_cp05

0x6306,	// (0x00086772) grid_vorec_pane

0x6310,	// (0x0008677c) vorec_t1

0x631e,	// (0x0008678a) vorec_t2

0x632c,	// (0x00086798) vorec_t3

0x633a,	// (0x000867a6) vorec_t4

0x6348,	// (0x000867b4) vorec_t5

0x6356,	// (0x000867c2) vorec_t6

0x0006,

0xf21f,	// (0x0008f68b) vorec_t

0x6372,	// (0x000867de) wait_bar_pane_cp01

0x637a,	// (0x000867e6) cell_vorec_pane_ParamLimits

0x637a,	// (0x000867e6) cell_vorec_pane

0x40aa,	// (0x00084516) cell_vorec_pane_g1

0x3bb7,	// (0x00084023) grid_highlight_pane_cp05

0x639f,	// (0x0008680b) cams_zoom_pane

0x63ab,	// (0x00086817) image_vga_pane

0x63ba,	// (0x00086826) main_camera_pane_g1

0x63c8,	// (0x00086834) main_camera_pane_g2

0x63d4,	// (0x00086840) main_camera_pane_g3

0x63e2,	// (0x0008684e) main_camera_pane_g4

0x63f0,	// (0x0008685c) main_camera_pane_g5

0x63fe,	// (0x0008686a) main_camera_pane_g6

0x640c,	// (0x00086878) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0008f69a) main_camera_pane_g

0x641a,	// (0x00086886) main_camera_pane_t1

0x642c,	// (0x00086898) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0008f6ab) main_camera_pane_t

0x644f,	// (0x000868bb) cams_zoom_pane_cp_ParamLimits

0x644f,	// (0x000868bb) cams_zoom_pane_cp

0x6473,	// (0x000868df) image_cif_pane_ParamLimits

0x6473,	// (0x000868df) image_cif_pane

0x6491,	// (0x000868fd) image_subqcif_pane

0x649b,	// (0x00086907) main_video_pane_g1_ParamLimits

0x649b,	// (0x00086907) main_video_pane_g1

0x64bb,	// (0x00086927) main_video_pane_g2_ParamLimits

0x64bb,	// (0x00086927) main_video_pane_g2

0x64eb,	// (0x00086957) main_video_pane_g3_ParamLimits

0x64eb,	// (0x00086957) main_video_pane_g3

0x6514,	// (0x00086980) main_video_pane_g4_ParamLimits

0x6514,	// (0x00086980) main_video_pane_g4

0x653d,	// (0x000869a9) main_video_pane_g5_ParamLimits

0x653d,	// (0x000869a9) main_video_pane_g5

0x40c0,	// (0x0008452c) main_video_pane_g6_ParamLimits

0x40c0,	// (0x0008452c) main_video_pane_g6

0x0006,

0xf244,	// (0x0008f6b0) main_video_pane_g_ParamLimits

0xf244,	// (0x0008f6b0) main_video_pane_g

0x655f,	// (0x000869cb) main_video_pane_t1_ParamLimits

0x655f,	// (0x000869cb) main_video_pane_t1

0x40da,	// (0x00084546) cams_zoom_pane_g1

0x40e3,	// (0x0008454f) cams_zoom_pane_g2

0x40ec,	// (0x00084558) cams_zoom_pane_g3

0x40f5,	// (0x00084561) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0008f6bf) cams_zoom_pane_g

0x65a9,	// (0x00086a15) grid_cams_pane

0x65b7,	// (0x00086a23) linegrid_cams_pane

0x65c5,	// (0x00086a31) cell_cams_pane_ParamLimits

0x65c5,	// (0x00086a31) cell_cams_pane

0x40fe,	// (0x0008456a) cams_burst_image_pane

0x4106,	// (0x00084572) cell_cams_pane_g1

0x3bb7,	// (0x00084023) grid_highlight_pane_cp03

0x3f52,	// (0x000843be) mp_bg_pane_g1

0x3bb7,	// (0x00084023) bg_list_pane_cp03

0xeeba,	// (0x0008f326) bg_mp_pane

0xeec2,	// (0x0008f32e) grid_mp_pane

0xeeca,	// (0x0008f336) media_player_g1

0xeed4,	// (0x0008f340) media_player_t1

0xeee2,	// (0x0008f34e) media_player_t2

0xeef0,	// (0x0008f35c) media_player_t3

0xeefe,	// (0x0008f36a) media_player_t4

0xef0c,	// (0x0008f378) media_player_t5

0xef1a,	// (0x0008f386) media_player_t6

0xef28,	// (0x0008f394) media_player_t7

0x0006,

0xf5ef,	// (0x0008fa5b) media_player_t

0xef36,	// (0x0008f3a2) wait_bar_pane_cp02

0xf5d4,	// (0x0008fa40) main_usb_pane_t

0x8634,	// (0x00088aa0) cell_mp_pane

0x3f52,	// (0x000843be) cell_mp_pane_g1

0x3bb7,	// (0x00084023) grid_highlight_pane_cp06

0x410e,	// (0x0008457a) grid_skin_colour_pane

0x4116,	// (0x00084582) list_highlight_pane_cp03

0x6631,	// (0x00086a9d) skin_g1

0x411e,	// (0x0008458a) skin_t1

0x412d,	// (0x00084599) skin_t2

0x0001,

0xf288,	// (0x0008f6f4) skin_t

0x663b,	// (0x00086aa7) cell_skin_colour_pane_ParamLimits

0x663b,	// (0x00086aa7) cell_skin_colour_pane

0x413b,	// (0x000845a7) cell_skin_colour_pane_g1

0x66bb,	// (0x00086b27) call_video_g1_ParamLimits

0x66bb,	// (0x00086b27) call_video_g1

0x66cb,	// (0x00086b37) call_video_g2_ParamLimits

0x66cb,	// (0x00086b37) call_video_g2

0x0001,

0xf28d,	// (0x0008f6f9) call_video_g_ParamLimits

0xf28d,	// (0x0008f6f9) call_video_g

0x671b,	// (0x00086b87) call_video_uplink_pane_cp1_ParamLimits

0x671b,	// (0x00086b87) call_video_uplink_pane_cp1

0x414d,	// (0x000845b9) call_video_uplink_pane_cp2

0x67e9,	// (0x00086c55) video_down_crop_pane_ParamLimits

0x67e9,	// (0x00086c55) video_down_crop_pane

0x68db,	// (0x00086d47) video_down_pane_ParamLimits

0x68db,	// (0x00086d47) video_down_pane

0x4155,	// (0x000845c1) video_down_subqcif_pane_ParamLimits

0x4155,	// (0x000845c1) video_down_subqcif_pane

0x416f,	// (0x000845db) video_down_subqcif_pane_cp_ParamLimits

0x416f,	// (0x000845db) video_down_subqcif_pane_cp

0x4195,	// (0x00084601) im_reading_pane_ParamLimits

0x4195,	// (0x00084601) im_reading_pane

0x69f8,	// (0x00086e64) im_writing_pane_ParamLimits

0x69f8,	// (0x00086e64) im_writing_pane

0x6a16,	// (0x00086e82) im_reading_pane_t1

0x41af,	// (0x0008461b) list_im_pane

0x41c0,	// (0x0008462c) scroll_pane_cp07

0x6a5e,	// (0x00086eca) im_writing_pane_t1_ParamLimits

0x6a5e,	// (0x00086eca) im_writing_pane_t1

0x41d9,	// (0x00084645) im_writing_pane_t2_ParamLimits

0x41d9,	// (0x00084645) im_writing_pane_t2

0x0001,

0xf297,	// (0x0008f703) im_writing_pane_t_ParamLimits

0xf297,	// (0x0008f703) im_writing_pane_t

0x3bb7,	// (0x00084023) input_focus_pane_cp04

0x3bb7,	// (0x00084023) input_focus_pane_cp05

0x6a70,	// (0x00086edc) list_im_single_pane_ParamLimits

0x6a70,	// (0x00086edc) list_im_single_pane

0x6a8c,	// (0x00086ef8) list_single_im_pane_t1

0x85f8,	// (0x00088a64) blid_accuracy_pane

0x8600,	// (0x00088a6c) blid_compass_pane

0x860a,	// (0x00088a76) main_location_t1

0x8618,	// (0x00088a84) main_location_t2

0x8626,	// (0x00088a92) main_location_t3

0x0002,

0xf5fe,	// (0x0008fa6a) main_location_t

0x3bb7,	// (0x00084023) aid_levels_location

0x3f52,	// (0x000843be) blid_accuracy_pane_g1

0x3f52,	// (0x000843be) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0008f765) blid_accuracy_pane_g

0x4221,	// (0x0008468d) wml_content_pane

0x425f,	// (0x000846cb) wml_button_pane_ParamLimits

0x425f,	// (0x000846cb) wml_button_pane

0x6a9b,	// (0x00086f07) wml_list_single_large_pane_ParamLimits

0x6a9b,	// (0x00086f07) wml_list_single_large_pane

0x6abd,	// (0x00086f29) wml_list_single_medium_pane_ParamLimits

0x6abd,	// (0x00086f29) wml_list_single_medium_pane

0x6ae3,	// (0x00086f4f) wml_list_single_small_pane_ParamLimits

0x6ae3,	// (0x00086f4f) wml_list_single_small_pane

0x4273,	// (0x000846df) wml_selection_box_pane_ParamLimits

0x4273,	// (0x000846df) wml_selection_box_pane

0x4286,	// (0x000846f2) wml_list_single_pane_t1

0x4295,	// (0x00084701) wml_list_single_medium_pane_t1

0x42a4,	// (0x00084710) wml_list_single_large_pane_t1

0x42b3,	// (0x0008471f) input_focus_pane_cp02_ParamLimits

0x42b3,	// (0x0008471f) input_focus_pane_cp02

0x42c6,	// (0x00084732) wml_selection_box_pane_g1

0x42cf,	// (0x0008473b) wml_selection_box_pane_t1_ParamLimits

0x42cf,	// (0x0008473b) wml_selection_box_pane_t1

0x3e32,	// (0x0008429e) bg_wml_button_pane_ParamLimits

0x3e32,	// (0x0008429e) bg_wml_button_pane

0x42e7,	// (0x00084753) wml_button_pane_g1

0x42ef,	// (0x0008475b) wml_button_pane_t1

0x42e7,	// (0x00084753) wml_button_bg_pane_g1

0x42ff,	// (0x0008476b) wml_button_bg_pane_g2

0x4307,	// (0x00084773) wml_button_bg_pane_g3

0x430f,	// (0x0008477b) wml_button_bg_pane_g4

0x4317,	// (0x00084783) wml_button_bg_pane_g5

0x431f,	// (0x0008478b) wml_button_bg_pane_g6

0x4327,	// (0x00084793) wml_button_bg_pane_g7

0x432f,	// (0x0008479b) wml_button_bg_pane_g8

0x4337,	// (0x000847a3) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0008f708) wml_button_bg_pane_g

0x6b0e,	// (0x00086f7a) bg_list_pane_cp02

0x433f,	// (0x000847ab) mce_header_pane_ParamLimits

0x433f,	// (0x000847ab) mce_header_pane

0x4355,	// (0x000847c1) mce_icon_pane

0x4355,	// (0x000847c1) mce_image_pane

0x435e,	// (0x000847ca) mce_text_pane_ParamLimits

0x435e,	// (0x000847ca) mce_text_pane

0x6b18,	// (0x00086f84) scroll_pane_cp03

0x4257,	// (0x000846c3) scroll_pane_cp04

0x4371,	// (0x000847dd) scroll_pane_cp05_ParamLimits

0x4371,	// (0x000847dd) scroll_pane_cp05

0x6b22,	// (0x00086f8e) mce_header_field_pane_ParamLimits

0x6b22,	// (0x00086f8e) mce_header_field_pane

0x6b44,	// (0x00086fb0) mce_header_field_pane_2_ParamLimits

0x6b44,	// (0x00086fb0) mce_header_field_pane_2

0x6b5a,	// (0x00086fc6) mce_header_field_pane_3

0x6b62,	// (0x00086fce) list_single_mce_message_pane_ParamLimits

0x6b62,	// (0x00086fce) list_single_mce_message_pane

0x6b81,	// (0x00086fed) list_single_mce_smart_pane_ParamLimits

0x6b81,	// (0x00086fed) list_single_mce_smart_pane

0x437d,	// (0x000847e9) input_focus_pane_cp03

0x4386,	// (0x000847f2) list_header_data_pane

0x6bab,	// (0x00087017) mce_header_field_pane_t1

0x6bbb,	// (0x00087027) list_single_mce_header_pane_ParamLimits

0x6bbb,	// (0x00087027) list_single_mce_header_pane

0x438e,	// (0x000847fa) list_single_mce_header_pane_t1

0x439d,	// (0x00084809) list_single_mce_message_pane_g1

0x43a5,	// (0x00084811) list_single_mce_message_pane_t1

0x6bf7,	// (0x00087063) bg_cale_heading_pane_cp01_ParamLimits

0x6bf7,	// (0x00087063) bg_cale_heading_pane_cp01

0x43b3,	// (0x0008481f) bg_cale_pane_cp02_ParamLimits

0x43b3,	// (0x0008481f) bg_cale_pane_cp02

0x6c1a,	// (0x00087086) cale_month_corner_pane

0x6c30,	// (0x0008709c) cale_month_day_heading_pane_ParamLimits

0x6c30,	// (0x0008709c) cale_month_day_heading_pane

0x6c63,	// (0x000870cf) cale_month_pane_g1_ParamLimits

0x6c63,	// (0x000870cf) cale_month_pane_g1

0x6c7f,	// (0x000870eb) cale_month_pane_g2_ParamLimits

0x6c7f,	// (0x000870eb) cale_month_pane_g2

0x6c9a,	// (0x00087106) cale_month_pane_g3_ParamLimits

0x6c9a,	// (0x00087106) cale_month_pane_g3

0x6cc6,	// (0x00087132) cale_month_pane_g4_ParamLimits

0x6cc6,	// (0x00087132) cale_month_pane_g4

0x6cf2,	// (0x0008715e) cale_month_pane_g5_ParamLimits

0x6cf2,	// (0x0008715e) cale_month_pane_g5

0x6d1e,	// (0x0008718a) cale_month_pane_g6_ParamLimits

0x6d1e,	// (0x0008718a) cale_month_pane_g6

0x6d5a,	// (0x000871c6) cale_month_pane_g7_ParamLimits

0x6d5a,	// (0x000871c6) cale_month_pane_g7

0x6d96,	// (0x00087202) cale_month_pane_g8_ParamLimits

0x6d96,	// (0x00087202) cale_month_pane_g8

0x6dd2,	// (0x0008723e) cale_month_pane_g9_ParamLimits

0x6dd2,	// (0x0008723e) cale_month_pane_g9

0x6e0c,	// (0x00087278) cale_month_pane_g10_ParamLimits

0x6e0c,	// (0x00087278) cale_month_pane_g10

0x6e46,	// (0x000872b2) cale_month_pane_g11_ParamLimits

0x6e46,	// (0x000872b2) cale_month_pane_g11

0x6e80,	// (0x000872ec) cale_month_pane_g12_ParamLimits

0x6e80,	// (0x000872ec) cale_month_pane_g12

0x6eba,	// (0x00087326) cale_month_pane_g13_ParamLimits

0x6eba,	// (0x00087326) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0008f71b) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0008f71b) cale_month_pane_g

0x6ef4,	// (0x00087360) cale_month_week_pane

0x6f07,	// (0x00087373) grid_cale_month_pane_ParamLimits

0x6f07,	// (0x00087373) grid_cale_month_pane

0x6f35,	// (0x000873a1) cale_month_day_heading_pane_t1

0x6f93,	// (0x000873ff) cale_month_day_heading_pane_t2

0x6ff8,	// (0x00087464) cale_month_day_heading_pane_t3

0x705d,	// (0x000874c9) cale_month_day_heading_pane_t4

0x70c2,	// (0x0008752e) cale_month_day_heading_pane_t5

0x712f,	// (0x0008759b) cale_month_day_heading_pane_t6

0x71a4,	// (0x00087610) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0008f736) cale_month_day_heading_pane_t

0x404f,	// (0x000844bb) bg_cale_side_pane_cp01

0x7219,	// (0x00087685) cale_month_week_pane_t1

0x7244,	// (0x000876b0) cale_month_week_pane_t2

0x726f,	// (0x000876db) cale_month_week_pane_t3

0x729a,	// (0x00087706) cale_month_week_pane_t4

0x72c5,	// (0x00087731) cale_month_week_pane_t5

0x72f0,	// (0x0008775c) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0008f745) cale_month_week_pane_t

0x731b,	// (0x00087787) cell_cale_month_pane_ParamLimits

0x731b,	// (0x00087787) cell_cale_month_pane

0x73e9,	// (0x00087855) cell_cale_month_pane_g1

0x73f5,	// (0x00087861) cell_cale_month_pane_t1_ParamLimits

0x73f5,	// (0x00087861) cell_cale_month_pane_t1

0x405d,	// (0x000844c9) grid_highlight_pane_cp08

0x3f52,	// (0x000843be) main_smil_g1

0x7411,	// (0x0008787d) smil_status_pane

0x43e8,	// (0x00084854) smil_text_pane

0xedd8,	// (0x0008f244) bg_popup_call3_rect_pane_g8

0xede0,	// (0x0008f24c) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0008f9fe) bg_popup_call3_rect_pane_g

0xf075,	// (0x0008f4e1) smil_status_volume_pane_g1

0x43f2,	// (0x0008485e) smil_status_pane_t1

0x89d9,	// (0x00088e45) volume_smil_pane

0x4409,	// (0x00084875) list_smil_text_pane

0x7424,	// (0x00087890) scroll_pane_cp011

0x742f,	// (0x0008789b) smil_text_list_pane_t1_ParamLimits

0x742f,	// (0x0008789b) smil_text_list_pane_t1

0x7493,	// (0x000878ff) aid_volume_smil_ParamLimits

0x7493,	// (0x000878ff) aid_volume_smil

0x3f52,	// (0x000843be) smil_volume_pane_g1

0x3f52,	// (0x000843be) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0008f765) smil_volume_pane_g

0x3efd,	// (0x00084369) listscroll_cale_day_pane

0x4413,	// (0x0008487f) bg_cale_pane

0x442b,	// (0x00084897) list_cale_pane

0x443c,	// (0x000848a8) scroll_pane_cp09

0x444d,	// (0x000848b9) cale_bg_pane_g1

0x4455,	// (0x000848c1) cale_bg_pane_g2

0x445d,	// (0x000848c9) cale_bg_pane_g3

0x4465,	// (0x000848d1) cale_bg_pane_g4

0x446d,	// (0x000848d9) cale_bg_pane_g5

0x4475,	// (0x000848e1) cale_bg_pane_g6

0x447d,	// (0x000848e9) cale_bg_pane_g7

0x4485,	// (0x000848f1) cale_bg_pane_g8

0x448d,	// (0x000848f9) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0008f76a) cale_bg_pane_g

0x74b5,	// (0x00087921) list_cale_time_pane_ParamLimits

0x74b5,	// (0x00087921) list_cale_time_pane

0x74cd,	// (0x00087939) list_cale_time_pane_g1_ParamLimits

0x74cd,	// (0x00087939) list_cale_time_pane_g1

0x4495,	// (0x00084901) list_cale_time_pane_g2_ParamLimits

0x4495,	// (0x00084901) list_cale_time_pane_g2

0x74d9,	// (0x00087945) list_cale_time_pane_g3_ParamLimits

0x74d9,	// (0x00087945) list_cale_time_pane_g3

0x74e7,	// (0x00087953) list_cale_time_pane_g4_ParamLimits

0x74e7,	// (0x00087953) list_cale_time_pane_g4

0x74f5,	// (0x00087961) list_cale_time_pane_g5_ParamLimits

0x74f5,	// (0x00087961) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0008f77d) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0008f77d) list_cale_time_pane_g

0x7503,	// (0x0008796f) list_cale_time_pane_t1_ParamLimits

0x7503,	// (0x0008796f) list_cale_time_pane_t1

0x752b,	// (0x00087997) list_cale_time_pane_t2_ParamLimits

0x752b,	// (0x00087997) list_cale_time_pane_t2

0x789a,	// (0x00087d06) aid_blid_cardinal_pane

0x78dc,	// (0x00087d48) compass_pane_t4

0x7553,	// (0x000879bf) list_cale_time_pane_t4_ParamLimits

0x7553,	// (0x000879bf) list_cale_time_pane_t4

0x78ea,	// (0x00087d56) compass_pane_t5

0x78fa,	// (0x00087d66) compass_pane_t6

0x7908,	// (0x00087d74) compass_pane_t7

0xdade,	// (0x0008df4a) navi_pane_cc_t1

0xdc33,	// (0x0008e09f) aid_phob_thumbnail_center_pane

0x80ee,	// (0x0008855a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0008f78a) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0008f78a) list_cale_time_pane_t

0x02f7,	// (0x00080763) bg_popup_window_pane_cp02_ParamLimits

0x02f7,	// (0x00080763) bg_popup_window_pane_cp02

0x44af,	// (0x0008491b) heading_pane_cp01_ParamLimits

0x44af,	// (0x0008491b) heading_pane_cp01

0x44bb,	// (0x00084927) loc_req_pane_ParamLimits

0x44bb,	// (0x00084927) loc_req_pane

0x44cb,	// (0x00084937) loc_type_pane_ParamLimits

0x44cb,	// (0x00084937) loc_type_pane

0x44dd,	// (0x00084949) loc_type_pane_t1_ParamLimits

0x44dd,	// (0x00084949) loc_type_pane_t1

0x44ef,	// (0x0008495b) loc_type_pane_t2_ParamLimits

0x44ef,	// (0x0008495b) loc_type_pane_t2

0x4501,	// (0x0008496d) loc_type_pane_t3_ParamLimits

0x4501,	// (0x0008496d) loc_type_pane_t3

0x0002,

0xf325,	// (0x0008f791) loc_type_pane_t_ParamLimits

0xf325,	// (0x0008f791) loc_type_pane_t

0x4513,	// (0x0008497f) list_loc_req_pane

0x451d,	// (0x00084989) scroll_pane_cp012

0x757b,	// (0x000879e7) list_single_loc_request_popup_menu_pane_ParamLimits

0x757b,	// (0x000879e7) list_single_loc_request_popup_menu_pane

0x4528,	// (0x00084994) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4528,	// (0x00084994) list_single_loc_request_popup_menu_pane_g1

0x4534,	// (0x000849a0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4534,	// (0x000849a0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0008f798) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0008f798) list_single_loc_request_popup_menu_pane_g

0x4540,	// (0x000849ac) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4540,	// (0x000849ac) list_single_loc_request_popup_menu_pane_t1

0x758d,	// (0x000879f9) bg_popup_window_pane_cp03_ParamLimits

0x758d,	// (0x000879f9) bg_popup_window_pane_cp03

0x759b,	// (0x00087a07) heading_loc_req_pane_ParamLimits

0x759b,	// (0x00087a07) heading_loc_req_pane

0x75a7,	// (0x00087a13) popup_dyc_status_message_window_g1_ParamLimits

0x75a7,	// (0x00087a13) popup_dyc_status_message_window_g1

0x75b3,	// (0x00087a1f) popup_dyc_status_message_window_t1_ParamLimits

0x75b3,	// (0x00087a1f) popup_dyc_status_message_window_t1

0x75c5,	// (0x00087a31) popup_dyc_status_message_window_t2_ParamLimits

0x75c5,	// (0x00087a31) popup_dyc_status_message_window_t2

0x75d7,	// (0x00087a43) popup_dyc_status_message_window_t3_ParamLimits

0x75d7,	// (0x00087a43) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0008f79d) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0008f79d) popup_dyc_status_message_window_t

0x3bb7,	// (0x00084023) bg_heading_pane_cp01

0x4562,	// (0x000849ce) heading_loc_req_pane_g1

0x456a,	// (0x000849d6) heading_loc_req_pane_g2

0x4572,	// (0x000849de) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0008f7a4) heading_loc_req_pane_g

0x457a,	// (0x000849e6) heading_loc_req_pane_t1

0x458a,	// (0x000849f6) bg_popup_sub_pane_cp01_ParamLimits

0x458a,	// (0x000849f6) bg_popup_sub_pane_cp01

0x4598,	// (0x00084a04) popup_cale_events_window_g1_ParamLimits

0x4598,	// (0x00084a04) popup_cale_events_window_g1

0x45b8,	// (0x00084a24) popup_cale_events_window_g2_ParamLimits

0x45b8,	// (0x00084a24) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0008f7d8) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0008f7d8) popup_cale_events_window_g

0x45d8,	// (0x00084a44) popup_cale_events_window_t1_ParamLimits

0x45d8,	// (0x00084a44) popup_cale_events_window_t1

0x45ea,	// (0x00084a56) popup_cale_events_window_t2_ParamLimits

0x45ea,	// (0x00084a56) popup_cale_events_window_t2

0x4628,	// (0x00084a94) popup_cale_events_window_t3_ParamLimits

0x4628,	// (0x00084a94) popup_cale_events_window_t3

0x4662,	// (0x00084ace) popup_cale_events_window_t4_ParamLimits

0x4662,	// (0x00084ace) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0008f7dd) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0008f7dd) popup_cale_events_window_t

0x765b,	// (0x00087ac7) call_type_pane

0xd930,	// (0x0008dd9c) popup_call_status_window_g1

0x7667,	// (0x00087ad3) popup_call_status_window_g2

0x7673,	// (0x00087adf) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0008f7e6) popup_call_status_window_g

0x4698,	// (0x00084b04) call_type_pane_g1

0x46a1,	// (0x00084b0d) call_type_pane_g2

0x0001,

0xf381,	// (0x0008f7ed) call_type_pane_g

0x3bb7,	// (0x00084023) bg_popup_sub_pane_cp02

0x46aa,	// (0x00084b16) listscroll_popup_wml_pane

0x46b2,	// (0x00084b1e) list_wml_pane

0x46bc,	// (0x00084b28) scroll_pane_cp013

0x46c7,	// (0x00084b33) list_single_graphic_popup_wml_pane_ParamLimits

0x46c7,	// (0x00084b33) list_single_graphic_popup_wml_pane

0x3f52,	// (0x000843be) list_single_graphic_popup_wml_pane_g1

0x46db,	// (0x00084b47) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0008f7f2) list_single_graphic_popup_wml_pane_g

0x46e3,	// (0x00084b4f) list_single_graphic_popup_wml_pane_t1

0x46f1,	// (0x00084b5d) aid_call_pane

0x3e2a,	// (0x00084296) popup_clock_analogue_window_g1

0x3e2a,	// (0x00084296) popup_clock_analogue_window_g2

0x767f,	// (0x00087aeb) popup_clock_analogue_window_g3

0x767f,	// (0x00087aeb) popup_clock_analogue_window_g4

0x3f52,	// (0x000843be) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0008f7f7) popup_clock_analogue_window_g

0x7687,	// (0x00087af3) popup_clock_analogue_window_t1

0x7695,	// (0x00087b01) clock_digital_number_pane_ParamLimits

0x7695,	// (0x00087b01) clock_digital_number_pane

0x76a1,	// (0x00087b0d) clock_digital_number_pane_cp02_ParamLimits

0x76a1,	// (0x00087b0d) clock_digital_number_pane_cp02

0x76ad,	// (0x00087b19) clock_digital_number_pane_cp03_ParamLimits

0x76ad,	// (0x00087b19) clock_digital_number_pane_cp03

0x76b9,	// (0x00087b25) clock_digital_number_pane_cp04_ParamLimits

0x76b9,	// (0x00087b25) clock_digital_number_pane_cp04

0x76c5,	// (0x00087b31) clock_digital_separator_pane_ParamLimits

0x76c5,	// (0x00087b31) clock_digital_separator_pane

0x76d1,	// (0x00087b3d) popup_clock_digital_window_t1

0x3f52,	// (0x000843be) clock_digital_number_pane_g1

0x3f52,	// (0x000843be) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0008f765) clock_digital_number_pane_g

0x3f52,	// (0x000843be) clock_digital_separator_pane_g1

0x3f52,	// (0x000843be) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0008f765) clock_digital_separator_pane_g

0x3bb7,	// (0x00084023) bg_popup_window_pane_cp04

0xd93e,	// (0x0008ddaa) heading_pane_cp03

0xd946,	// (0x0008ddb2) listscroll_popup_gms_pane

0xd94e,	// (0x0008ddba) grid_large_graphic_popup_pane

0xd958,	// (0x0008ddc4) listscroll_popup_gms_pane_g1

0xd960,	// (0x0008ddcc) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0008f802) listscroll_popup_gms_pane_g

0x4257,	// (0x000846c3) scroll_pane_cp014

0x76ee,	// (0x00087b5a) cell_large_graphic_popup_pane_ParamLimits

0x76ee,	// (0x00087b5a) cell_large_graphic_popup_pane

0x7708,	// (0x00087b74) cell_large_graphic_popup_pane_g1_ParamLimits

0x7708,	// (0x00087b74) cell_large_graphic_popup_pane_g1

0xd968,	// (0x0008ddd4) cell_large_graphic_popup_pane_g2_ParamLimits

0xd968,	// (0x0008ddd4) cell_large_graphic_popup_pane_g2

0xd974,	// (0x0008dde0) cell_large_graphic_popup_pane_g3_ParamLimits

0xd974,	// (0x0008dde0) cell_large_graphic_popup_pane_g3

0xd981,	// (0x0008dded) cell_large_graphic_popup_pane_g4_ParamLimits

0xd981,	// (0x0008dded) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0008f807) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0008f807) cell_large_graphic_popup_pane_g

0xd991,	// (0x0008ddfd) grid_highlight_pane_cp010

0x3f52,	// (0x000843be) bg_popup_call_pane_g1

0xd99b,	// (0x0008de07) list_single_graphic_popup_conf_pane_ParamLimits

0xd99b,	// (0x0008de07) list_single_graphic_popup_conf_pane

0xd9ad,	// (0x0008de19) list_highlight_pane_cp01

0xd9b6,	// (0x0008de22) list_single_graphic_popup_conf_pane_g1

0xd9be,	// (0x0008de2a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0008f810) list_single_graphic_popup_conf_pane_g

0xd9c6,	// (0x0008de32) list_single_graphic_popup_conf_pane_t1

0xd9d4,	// (0x0008de40) linegrid_cams_pane_g1

0x7714,	// (0x00087b80) linegrid_cams_pane_g2

0x4090,	// (0x000844fc) linegrid_cams_pane_g3

0xd9dd,	// (0x0008de49) linegrid_cams_pane_g4

0x771d,	// (0x00087b89) linegrid_cams_pane_g5

0x7726,	// (0x00087b92) linegrid_cams_pane_g6

0x4099,	// (0x00084505) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0008f815) linegrid_cams_pane_g

0xd9e6,	// (0x0008de52) popup_clock_analogue_window

0xd9e6,	// (0x0008de52) popup_clock_digital_window

0x3bb7,	// (0x00084023) popup_phob_thumbnail_window

0x3f52,	// (0x000843be) call_video_uplink_pane_g1

0xd9ef,	// (0x0008de5b) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0008f824) call_video_uplink_pane_g

0xd9f7,	// (0x0008de63) video_uplink_pane

0xd9ff,	// (0x0008de6b) mce_image_pane_g1

0x7731,	// (0x00087b9d) mce_image_pane_g2

0x773b,	// (0x00087ba7) mce_image_pane_g3

0x7745,	// (0x00087bb1) mce_image_pane_g4

0x774d,	// (0x00087bb9) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0008f829) mce_image_pane_g

0xda09,	// (0x0008de75) control_top_pane_stacon_cp01_ParamLimits

0xda09,	// (0x0008de75) control_top_pane_stacon_cp01

0xda1d,	// (0x0008de89) uni_indicator_pane_stacon_cp01_ParamLimits

0xda1d,	// (0x0008de89) uni_indicator_pane_stacon_cp01

0xda2e,	// (0x0008de9a) bg_popup_sub_pane_cp03

0x7755,	// (0x00087bc1) chi_dic_find_pane

0x775d,	// (0x00087bc9) listscroll_chi_dic_pane

0x7766,	// (0x00087bd2) main_pane_chidic_g1

0x7779,	// (0x00087be5) chi_dic_find_pane_t1

0xda38,	// (0x0008dea4) find_chidic_pane

0xda41,	// (0x0008dead) chi_dic_list_pane_ParamLimits

0xda41,	// (0x0008dead) chi_dic_list_pane

0xda52,	// (0x0008debe) scroll_pane_cp020

0x7787,	// (0x00087bf3) find_chidic_pane_t1

0x3bb7,	// (0x00084023) input_focus_pane_cp06

0x7796,	// (0x00087c02) list_chi_dic_pane_ParamLimits

0x7796,	// (0x00087c02) list_chi_dic_pane

0x77ae,	// (0x00087c1a) list_chi_dic_pane_t1_ParamLimits

0x77ae,	// (0x00087c1a) list_chi_dic_pane_t1

0x3bb7,	// (0x00084023) list_highlight_pane_cp020

0xda5a,	// (0x0008dec6) bg_cale_heading_pane_g1

0x77c1,	// (0x00087c2d) bg_cale_heading_pane_g2

0x77c9,	// (0x00087c35) bg_cale_heading_pane_g3

0x77d1,	// (0x00087c3d) bg_cale_heading_pane_g4

0x77db,	// (0x00087c47) bg_cale_heading_pane_g5

0x77e5,	// (0x00087c51) bg_cale_heading_pane_g6

0x77ed,	// (0x00087c59) bg_cale_heading_pane_g7

0x77f5,	// (0x00087c61) bg_cale_heading_pane_g8

0x77ff,	// (0x00087c6b) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0008f834) bg_cale_heading_pane_g

0xda5a,	// (0x0008dec6) bg_cale_side_pane_g1

0x7809,	// (0x00087c75) bg_cale_side_pane_g2

0x7811,	// (0x00087c7d) bg_cale_side_pane_g3

0x7819,	// (0x00087c85) bg_cale_side_pane_g4

0x7821,	// (0x00087c8d) bg_cale_side_pane_g5

0x7829,	// (0x00087c95) bg_cale_side_pane_g6

0x7831,	// (0x00087c9d) bg_cale_side_pane_g7

0x7839,	// (0x00087ca5) bg_cale_side_pane_g8

0x7841,	// (0x00087cad) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0008f847) bg_cale_side_pane_g

0x7849,	// (0x00087cb5) popup_call_status_window_ParamLimits

0x7849,	// (0x00087cb5) popup_call_status_window

0xda62,	// (0x0008dece) stacon_top_pane

0xda6a,	// (0x0008ded6) status_pane_ParamLimits

0xda6a,	// (0x0008ded6) status_pane

0xda7f,	// (0x0008deeb) status_small_pane

0xda87,	// (0x0008def3) control_pane

0x3bb7,	// (0x00084023) stacon_bottom_pane

0xda8f,	// (0x0008defb) list_single_mce_smart_pane_t1_ParamLimits

0xda8f,	// (0x0008defb) list_single_mce_smart_pane_t1

0xdaa2,	// (0x0008df0e) list_single_mce_smart_pane_t2_ParamLimits

0xdaa2,	// (0x0008df0e) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0008f85a) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0008f85a) list_single_mce_smart_pane_t

0x7855,	// (0x00087cc1) compass_pane

0x7860,	// (0x00087ccc) main_location2_pane_t1

0x7874,	// (0x00087ce0) main_location2_pane_t2

0x7874,	// (0x00087ce0) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0008f85f) main_location2_pane_t

0xdac1,	// (0x0008df2d) compass_pane_g1_ParamLimits

0xdac1,	// (0x0008df2d) compass_pane_g1

0x78be,	// (0x00087d2a) compass_pane_t1

0x78cd,	// (0x00087d39) compass_pane_t2

0x0005,

0xf3fc,	// (0x0008f868) compass_pane_t

0x7918,	// (0x00087d84) text_secondary_cp61

0xdad5,	// (0x0008df41) navi_pane_cams_g5

0xdaf8,	// (0x0008df64) navi_pane_im_t1

0xdb06,	// (0x0008df72) navi_pane_mp_g1_ParamLimits

0xdb06,	// (0x0008df72) navi_pane_mp_g1

0xdb1a,	// (0x0008df86) navi_pane_mp_g2_ParamLimits

0xdb1a,	// (0x0008df86) navi_pane_mp_g2

0xdb26,	// (0x0008df92) navi_pane_mp_g3_ParamLimits

0xdb26,	// (0x0008df92) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0008f87c) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0008f87c) navi_pane_mp_g

0xdb32,	// (0x0008df9e) navi_pane_mp_t1

0xdb40,	// (0x0008dfac) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0008f883) navi_pane_mp_t

0xdb7c,	// (0x0008dfe8) navi_pane_vt_g1

0xdb32,	// (0x0008df9e) navi_pane_vt_t1

0xdb84,	// (0x0008dff0) navi_slider_pane

0xdb8c,	// (0x0008dff8) zooming_pane

0xdb94,	// (0x0008e000) navi_slider_pane_g1

0x7a2f,	// (0x00087e9b) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0008f88a) navi_slider_pane_g

0xdbb8,	// (0x0008e024) aid_levels_zoom

0xdbc0,	// (0x0008e02c) zooming_pane_g1

0xdbc8,	// (0x0008e034) zooming_pane_g2

0xdbc8,	// (0x0008e034) zooming_pane_g3

0x0002,

0xf42d,	// (0x0008f899) zooming_pane_g

0xdbd0,	// (0x0008e03c) level_10_zoom

0xdbd9,	// (0x0008e045) level_11_zoom

0xdbe2,	// (0x0008e04e) level_1_zoom

0xdbeb,	// (0x0008e057) level_2_zoom

0xdbf4,	// (0x0008e060) level_3_zoom

0xdbfd,	// (0x0008e069) level_4_zoom

0xdc06,	// (0x0008e072) level_5_zoom

0xdc0f,	// (0x0008e07b) level_6_zoom

0xdc18,	// (0x0008e084) level_7_zoom

0xdc21,	// (0x0008e08d) level_8_zoom

0xdc2a,	// (0x0008e096) level_9_zoom

0xdc3b,	// (0x0008e0a7) popup_phob_thumbnail_window_g1

0xdc43,	// (0x0008e0af) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0008f8a0) popup_phob_thumbnail_window_g

0xef3e,	// (0x0008f3aa) level_1_location

0xef46,	// (0x0008f3b2) level_2_location

0xef4e,	// (0x0008f3ba) level_3_location

0xef56,	// (0x0008f3c2) level_4_location

0xdb8c,	// (0x0008dff8) level_5_location

0x7a41,	// (0x00087ead) mce_icon_pane_g1

0x7a49,	// (0x00087eb5) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0008f8a5) mce_icon_pane_g

0x7a51,	// (0x00087ebd) main_mup_pane_g1_ParamLimits

0x7a51,	// (0x00087ebd) main_mup_pane_g1

0x7a69,	// (0x00087ed5) main_mup_pane_g2_ParamLimits

0x7a69,	// (0x00087ed5) main_mup_pane_g2

0x7a85,	// (0x00087ef1) main_mup_pane_g3_ParamLimits

0x7a85,	// (0x00087ef1) main_mup_pane_g3

0x7aa1,	// (0x00087f0d) main_mup_pane_g4_ParamLimits

0x7aa1,	// (0x00087f0d) main_mup_pane_g4

0x7ab5,	// (0x00087f21) main_mup_pane_g5_ParamLimits

0x7ab5,	// (0x00087f21) main_mup_pane_g5

0x7ad6,	// (0x00087f42) main_mup_pane_g6_ParamLimits

0x7ad6,	// (0x00087f42) main_mup_pane_g6

0x7af6,	// (0x00087f62) main_mup_pane_g7_ParamLimits

0x7af6,	// (0x00087f62) main_mup_pane_g7

0x7b1a,	// (0x00087f86) main_mup_pane_g8_ParamLimits

0x7b1a,	// (0x00087f86) main_mup_pane_g8

0x7b3e,	// (0x00087faa) main_mup_pane_g9_ParamLimits

0x7b3e,	// (0x00087faa) main_mup_pane_g9

0x7b61,	// (0x00087fcd) main_mup_pane_g10_ParamLimits

0x7b61,	// (0x00087fcd) main_mup_pane_g10

0x7b84,	// (0x00087ff0) main_mup_pane_g11_ParamLimits

0x7b84,	// (0x00087ff0) main_mup_pane_g11

0x7ba4,	// (0x00088010) main_mup_pane_g12_ParamLimits

0x7ba4,	// (0x00088010) main_mup_pane_g12

0x7bb2,	// (0x0008801e) main_mup_pane_g13_ParamLimits

0x7bb2,	// (0x0008801e) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0008f8aa) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0008f8aa) main_mup_pane_g

0x7bc8,	// (0x00088034) main_mup_pane_t1_ParamLimits

0x7bc8,	// (0x00088034) main_mup_pane_t1

0x7be7,	// (0x00088053) main_mup_pane_t2_ParamLimits

0x7be7,	// (0x00088053) main_mup_pane_t2

0x7c01,	// (0x0008806d) main_mup_pane_t3_ParamLimits

0x7c01,	// (0x0008806d) main_mup_pane_t3

0x7c1b,	// (0x00088087) main_mup_pane_t4_ParamLimits

0x7c1b,	// (0x00088087) main_mup_pane_t4

0x7c2d,	// (0x00088099) main_mup_pane_t5_ParamLimits

0x7c2d,	// (0x00088099) main_mup_pane_t5

0x7c3f,	// (0x000880ab) main_mup_pane_t6_ParamLimits

0x7c3f,	// (0x000880ab) main_mup_pane_t6

0x0005,

0xf459,	// (0x0008f8c5) main_mup_pane_t_ParamLimits

0xf459,	// (0x0008f8c5) main_mup_pane_t

0x7c55,	// (0x000880c1) mup_progress_pane_ParamLimits

0x7c55,	// (0x000880c1) mup_progress_pane

0x7c61,	// (0x000880cd) mup_visualizer_pane_ParamLimits

0x7c61,	// (0x000880cd) mup_visualizer_pane

0x7c9f,	// (0x0008810b) mup_volume_pane_ParamLimits

0x7c9f,	// (0x0008810b) mup_volume_pane

0xd930,	// (0x0008dd9c) mup_visualizer_pane_g1_ParamLimits

0xd930,	// (0x0008dd9c) mup_visualizer_pane_g1

0xd930,	// (0x0008dd9c) mup_visualizer_pane_g2_ParamLimits

0xd930,	// (0x0008dd9c) mup_visualizer_pane_g2

0xdac1,	// (0x0008df2d) mup_visualizer_pane_g3_ParamLimits

0xdac1,	// (0x0008df2d) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0008f8d2) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0008f8d2) mup_visualizer_pane_g

0x3f52,	// (0x000843be) mup_volume_pane_g1

0xdc53,	// (0x0008e0bf) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0008f8d9) mup_volume_pane_g

0x3f52,	// (0x000843be) mup_progress_pane_g1

0xdc5c,	// (0x0008e0c8) mup_progress_pane_g2

0xdc65,	// (0x0008e0d1) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0008f8de) mup_progress_pane_g

0x3bb7,	// (0x00084023) bg_popup_window_pane_cp05

0xdc6e,	// (0x0008e0da) heading_pane_cp02_ParamLimits

0xdc6e,	// (0x0008e0da) heading_pane_cp02

0xdc8a,	// (0x0008e0f6) list_popup_blid_pane

0xdc92,	// (0x0008e0fe) list_blid_sat_info_pane_ParamLimits

0xdc92,	// (0x0008e0fe) list_blid_sat_info_pane

0xdca5,	// (0x0008e111) list_blid_sat_info_pane_g1

0xdcad,	// (0x0008e119) list_blid_sat_info_pane_t1

0x7dbe,	// (0x0008822a) mup_equalizer_pane_ParamLimits

0x7dbe,	// (0x0008822a) mup_equalizer_pane

0x7ddf,	// (0x0008824b) mup_equalizer_pane_cp1_ParamLimits

0x7ddf,	// (0x0008824b) mup_equalizer_pane_cp1

0x7e00,	// (0x0008826c) mup_equalizer_pane_cp2_ParamLimits

0x7e00,	// (0x0008826c) mup_equalizer_pane_cp2

0x7e21,	// (0x0008828d) mup_equalizer_pane_cp3_ParamLimits

0x7e21,	// (0x0008828d) mup_equalizer_pane_cp3

0x7e46,	// (0x000882b2) mup_equalizer_pane_cp4_ParamLimits

0x7e46,	// (0x000882b2) mup_equalizer_pane_cp4

0x7e6b,	// (0x000882d7) mup_equalizer_pane_cp5

0x7e83,	// (0x000882ef) mup_equalizer_pane_cp6

0x7e9b,	// (0x00088307) mup_equalizer_pane_cp7

0xee58,	// (0x0008f2c4) bg_popup_call_poc_act_pane_g9

0xee60,	// (0x0008f2cc) bg_popup_call_poc_act_pane_g10

0xee68,	// (0x0008f2d4) bg_popup_call_poc_act_pane_g11

0x000a,

0x3e32,	// (0x0008429e) mup_scale_pane

0x3f52,	// (0x000843be) mup_scale_pane_g1

0xdcbb,	// (0x0008e127) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0008f8fa) mup_scale_pane_g

0xdcdf,	// (0x0008e14b) msg_data_pane

0xdce7,	// (0x0008e153) scroll_pane_cp017

0x7ec5,	// (0x00088331) bg_list_pane_cp04_ParamLimits

0x7ec5,	// (0x00088331) bg_list_pane_cp04

0xdcef,	// (0x0008e15b) msg_data_pane_g1

0x7eed,	// (0x00088359) msg_data_pane_g2

0x7ef7,	// (0x00088363) msg_data_pane_g3

0x7f01,	// (0x0008836d) msg_data_pane_g4

0x7f09,	// (0x00088375) msg_data_pane_g5

0x7f11,	// (0x0008837d) msg_data_pane_g6

0x7f19,	// (0x00088385) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0008f909) msg_data_pane_g

0x7f21,	// (0x0008838d) msg_text_pane_ParamLimits

0x7f21,	// (0x0008838d) msg_text_pane

0x7f4d,	// (0x000883b9) qrid_highlight_pane_cp011_ParamLimits

0x7f4d,	// (0x000883b9) qrid_highlight_pane_cp011

0x3bb7,	// (0x00084023) msg_body_pane

0x3bb7,	// (0x00084023) msg_header_pane

0xdd00,	// (0x0008e16c) input_focus_pane_cp07

0x7f71,	// (0x000883dd) msg_header_pane_t1_ParamLimits

0x7f71,	// (0x000883dd) msg_header_pane_t1

0x7f85,	// (0x000883f1) msg_header_pane_t2_ParamLimits

0x7f85,	// (0x000883f1) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0008f91d) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0008f91d) msg_header_pane_t

0xdd15,	// (0x0008e181) msg_body_pane_g1

0x7f97,	// (0x00088403) msg_body_pane_t1_ParamLimits

0x7f97,	// (0x00088403) msg_body_pane_t1

0x7fc8,	// (0x00088434) msg_body_pane_t2_ParamLimits

0x7fc8,	// (0x00088434) msg_body_pane_t2

0x7fda,	// (0x00088446) msg_body_pane_t3_ParamLimits

0x7fda,	// (0x00088446) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0008f922) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0008f922) msg_body_pane_t

0x803e,	// (0x000884aa) main_viewer_pane_g1_ParamLimits

0x803e,	// (0x000884aa) main_viewer_pane_g1

0x804a,	// (0x000884b6) main_viewer_pane_g2_ParamLimits

0x804a,	// (0x000884b6) main_viewer_pane_g2

0x8056,	// (0x000884c2) main_viewer_pane_g3_ParamLimits

0x8056,	// (0x000884c2) main_viewer_pane_g3

0x8067,	// (0x000884d3) main_viewer_pane_g4_ParamLimits

0x8067,	// (0x000884d3) main_viewer_pane_g4

0x8078,	// (0x000884e4) main_viewer_pane_g5_ParamLimits

0x8078,	// (0x000884e4) main_viewer_pane_g5

0x8078,	// (0x000884e4) main_viewer_pane_g7_ParamLimits

0x8078,	// (0x000884e4) main_viewer_pane_g7

0x808a,	// (0x000884f6) main_viewer_pane_g8_ParamLimits

0x808a,	// (0x000884f6) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0008f932) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0008f932) main_viewer_pane_g

0xdd1d,	// (0x0008e189) viewer_content_pane_ParamLimits

0xdd1d,	// (0x0008e189) viewer_content_pane

0x80c2,	// (0x0008852e) main_postcard_pane_g1_ParamLimits

0x80c2,	// (0x0008852e) main_postcard_pane_g1

0x80d0,	// (0x0008853c) main_postcard_pane_g2_ParamLimits

0x80d0,	// (0x0008853c) main_postcard_pane_g2

0x80de,	// (0x0008854a) main_postcard_pane_g3_ParamLimits

0x80de,	// (0x0008854a) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0008f943) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0008f943) main_postcard_pane_g

0x80ee,	// (0x0008855a) main_postcard_pane_g4

0xf088,	// (0x0008f4f4) smil_status_volume_pane_g2

0x811a,	// (0x00088586) postcard_pane_ParamLimits

0x811a,	// (0x00088586) postcard_pane

0xd930,	// (0x0008dd9c) postcard_pane_g1_ParamLimits

0xd930,	// (0x0008dd9c) postcard_pane_g1

0x8154,	// (0x000885c0) postcard_pane_g2_ParamLimits

0x8154,	// (0x000885c0) postcard_pane_g2

0x8160,	// (0x000885cc) postcard_pane_g3_ParamLimits

0x8160,	// (0x000885cc) postcard_pane_g3

0xdd2b,	// (0x0008e197) postcard_pane_g4_ParamLimits

0xdd2b,	// (0x0008e197) postcard_pane_g4

0x816c,	// (0x000885d8) postcard_pane_g5_ParamLimits

0x816c,	// (0x000885d8) postcard_pane_g5

0x8178,	// (0x000885e4) postcard_pane_g6_ParamLimits

0x8178,	// (0x000885e4) postcard_pane_g6

0xdd39,	// (0x0008e1a5) postcard_pane_g7_ParamLimits

0xdd39,	// (0x0008e1a5) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0008f950) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0008f950) postcard_pane_g

0x8186,	// (0x000885f2) main_mp2_pane_g1_ParamLimits

0x8186,	// (0x000885f2) main_mp2_pane_g1

0x8194,	// (0x00088600) main_mp2_pane_g2_ParamLimits

0x8194,	// (0x00088600) main_mp2_pane_g2

0x81a0,	// (0x0008860c) main_mp2_pane_g3_ParamLimits

0x81a0,	// (0x0008860c) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0008f95f) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0008f95f) main_mp2_pane_g

0x81ac,	// (0x00088618) main_mp2_pane_t1_ParamLimits

0x81ac,	// (0x00088618) main_mp2_pane_t1

0x81c3,	// (0x0008862f) main_mp2_pane_t2_ParamLimits

0x81c3,	// (0x0008862f) main_mp2_pane_t2

0x81d7,	// (0x00088643) main_mp2_pane_t3_ParamLimits

0x81d7,	// (0x00088643) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0008f966) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0008f966) main_mp2_pane_t

0xdd47,	// (0x0008e1b3) pec_content_pane_ParamLimits

0xdd47,	// (0x0008e1b3) pec_content_pane

0x4257,	// (0x000846c3) scroll_pane_cp015

0xdd59,	// (0x0008e1c5) pec_attribute_pane_ParamLimits

0xdd59,	// (0x0008e1c5) pec_attribute_pane

0x81e9,	// (0x00088655) pec_content_pane_g1_ParamLimits

0x81e9,	// (0x00088655) pec_content_pane_g1

0xdd69,	// (0x0008e1d5) pec_content_pane_t1_ParamLimits

0xdd69,	// (0x0008e1d5) pec_content_pane_t1

0xdd7b,	// (0x0008e1e7) pec_content_pane_t2_ParamLimits

0xdd7b,	// (0x0008e1e7) pec_content_pane_t2

0x0001,

0xf501,	// (0x0008f96d) pec_content_pane_t_ParamLimits

0xf501,	// (0x0008f96d) pec_content_pane_t

0x81f5,	// (0x00088661) list_single_graphic_pane_cp01_ParamLimits

0x81f5,	// (0x00088661) list_single_graphic_pane_cp01

0x3e32,	// (0x0008429e) bg_popup_sub_pane_cp04

0xdd8d,	// (0x0008e1f9) popup_mup_playback_window_g1

0xdd99,	// (0x0008e205) popup_mup_playback_window_t1

0xddae,	// (0x0008e21a) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0008f972) popup_mup_playback_window_t

0xdde5,	// (0x0008e251) main_image_pane_g1_ParamLimits

0xdde5,	// (0x0008e251) main_image_pane_g1

0xde28,	// (0x0008e294) scroll_pane_cp018_ParamLimits

0xde28,	// (0x0008e294) scroll_pane_cp018

0xde40,	// (0x0008e2ac) scroll_pane_cp016_ParamLimits

0xde40,	// (0x0008e2ac) scroll_pane_cp016

0x8286,	// (0x000886f2) smil2_image_pane_ParamLimits

0x8286,	// (0x000886f2) smil2_image_pane

0x82bc,	// (0x00088728) smil2_root_pane_ParamLimits

0x82bc,	// (0x00088728) smil2_root_pane

0x82e8,	// (0x00088754) smil2_text_pane_ParamLimits

0x82e8,	// (0x00088754) smil2_text_pane

0x3bb7,	// (0x00084023) bg_list_pane_cp06

0xde7c,	// (0x0008e2e8) grid_radio_pane

0x3bb7,	// (0x00084023) bg_popup_window_pane_cp06

0xde86,	// (0x0008e2f2) main_fmradio_pane_t1

0xd93e,	// (0x0008ddaa) heading_pane_cp04

0xde94,	// (0x0008e300) main_fmradio_pane_t2

0xee70,	// (0x0008f2dc) popup_cale_lunar_info_window_g1

0xdea2,	// (0x0008e30e) main_fmradio_pane_t3

0xee78,	// (0x0008f2e4) popup_cale_lunar_info_window_g2

0xdeb2,	// (0x0008e31e) main_fmradio_pane_t4

0x0001,

0xdec0,	// (0x0008e32c) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0008fa4d) popup_cale_lunar_info_window_g

0xf51b,	// (0x0008f987) main_fmradio_pane_t

0xdece,	// (0x0008e33a) wait_bar_pane_cp03

0xded6,	// (0x0008e342) cell_fmradio_pane_ParamLimits

0xded6,	// (0x0008e342) cell_fmradio_pane

0xdd39,	// (0x0008e1a5) cell_fmradio_pane_g1_ParamLimits

0xdd39,	// (0x0008e1a5) cell_fmradio_pane_g1

0x3bb7,	// (0x00084023) grid_highlight_pane_cp011

0xdeeb,	// (0x0008e357) poc_content_pane_ParamLimits

0xdeeb,	// (0x0008e357) poc_content_pane

0xdefd,	// (0x0008e369) scroll_pane_cp019

0x8328,	// (0x00088794) popup_call_poc_act_window_ParamLimits

0x8328,	// (0x00088794) popup_call_poc_act_window

0x8335,	// (0x000887a1) popup_call_poc_inact_window_ParamLimits

0x8335,	// (0x000887a1) popup_call_poc_inact_window

0xf5b8,	// (0x0008fa24) bg_popup_call_poc_act_pane_g

0xede8,	// (0x0008f254) bg_popup_call_poc_inact_pane_g1

0xedf0,	// (0x0008f25c) bg_popup_call_poc_inact_pane_g2

0xdf05,	// (0x0008e371) popup_call_poc_act_window_g2

0xedf8,	// (0x0008f264) bg_popup_call_poc_inact_pane_g3

0xee00,	// (0x0008f26c) bg_popup_call_poc_inact_pane_g4

0xee08,	// (0x0008f274) bg_popup_call_poc_inact_pane_g5

0xdf0d,	// (0x0008e379) popup_call_poc_act_window_t1_ParamLimits

0xdf0d,	// (0x0008e379) popup_call_poc_act_window_t1

0xdf35,	// (0x0008e3a1) popup_call_poc_act_window_t2_ParamLimits

0xdf35,	// (0x0008e3a1) popup_call_poc_act_window_t2

0xdf5d,	// (0x0008e3c9) popup_call_poc_act_window_t3_ParamLimits

0xdf5d,	// (0x0008e3c9) popup_call_poc_act_window_t3

0xdf85,	// (0x0008e3f1) popup_call_poc_act_window_t4_ParamLimits

0xdf85,	// (0x0008e3f1) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0008f992) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0008f992) popup_call_poc_act_window_t

0xee10,	// (0x0008f27c) bg_popup_call_poc_inact_pane_g6

0xee18,	// (0x0008f284) bg_popup_call_poc_inact_pane_g7

0xee20,	// (0x0008f28c) bg_popup_call_poc_inact_pane_g8

0xdf97,	// (0x0008e403) popup_call_poc_inact_window_g2

0xee28,	// (0x0008f294) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0008fa11) bg_popup_call_poc_inact_pane_g

0xdf9f,	// (0x0008e40b) popup_call_poc_inact_window_t1_ParamLimits

0xdf9f,	// (0x0008e40b) popup_call_poc_inact_window_t1

0xdfb4,	// (0x0008e420) popup_call_poc_inact_window_t2_ParamLimits

0xdfb4,	// (0x0008e420) popup_call_poc_inact_window_t2

0xdfc9,	// (0x0008e435) popup_call_poc_inact_window_t3_ParamLimits

0xdfc9,	// (0x0008e435) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0008f99b) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0008f99b) popup_call_poc_inact_window_t

0xefe8,	// (0x0008f454) context_pane_ParamLimits

0x8947,	// (0x00088db3) signal_pane_ParamLimits

0xdb8c,	// (0x0008dff8) main_call2_pane

0xefd6,	// (0x0008f442) popup_phob_thumbnail2_window_ParamLimits

0xefd6,	// (0x0008f442) popup_phob_thumbnail2_window

0x7fec,	// (0x00088458) aid_hotspot_pointer_arrow_pane

0x7ff4,	// (0x00088460) aid_hotspot_pointer_hand_pane

0x865d,	// (0x00088ac9) phob_pre_status_pane_g5

0x639f,	// (0x0008680b) cams_zoom_pane_ParamLimits

0x63ab,	// (0x00086817) image_vga_pane_ParamLimits

0x63ba,	// (0x00086826) main_camera_pane_g1_ParamLimits

0x63c8,	// (0x00086834) main_camera_pane_g2_ParamLimits

0x63d4,	// (0x00086840) main_camera_pane_g3_ParamLimits

0x63e2,	// (0x0008684e) main_camera_pane_g4_ParamLimits

0x63f0,	// (0x0008685c) main_camera_pane_g5_ParamLimits

0x63fe,	// (0x0008686a) main_camera_pane_g6_ParamLimits

0x640c,	// (0x00086878) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0008f69a) main_camera_pane_g_ParamLimits

0x641a,	// (0x00086886) main_camera_pane_t1_ParamLimits

0x642c,	// (0x00086898) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0008f6ab) main_camera_pane_t_ParamLimits

0x3e32,	// (0x0008429e) bg_popup_preview_window_pane_cp01_ParamLimits

0x3e32,	// (0x0008429e) bg_popup_preview_window_pane_cp01

0xdfde,	// (0x0008e44a) popup_phob_thumbnail2_window_g1_ParamLimits

0xdfde,	// (0x0008e44a) popup_phob_thumbnail2_window_g1

0x3bb7,	// (0x00084023) call2_cli_visual_pane

0x8351,	// (0x000887bd) popup_call2_audio_conf_window_ParamLimits

0x8351,	// (0x000887bd) popup_call2_audio_conf_window

0x836a,	// (0x000887d6) popup_call2_audio_first_window_ParamLimits

0x836a,	// (0x000887d6) popup_call2_audio_first_window

0x8408,	// (0x00088874) popup_call2_audio_in_window_ParamLimits

0x8408,	// (0x00088874) popup_call2_audio_in_window

0x844c,	// (0x000888b8) popup_call2_audio_out_window_ParamLimits

0x844c,	// (0x000888b8) popup_call2_audio_out_window

0x84b6,	// (0x00088922) popup_call2_audio_second_window_ParamLimits

0x84b6,	// (0x00088922) popup_call2_audio_second_window

0x8514,	// (0x00088980) popup_call2_audio_wait_window_ParamLimits

0x8514,	// (0x00088980) popup_call2_audio_wait_window

0x3bb7,	// (0x00084023) bg_popup_call2_act_pane_cp03

0x3e14,	// (0x00084280) list_conf_pane_cp

0xdfea,	// (0x0008e456) popup_call2_audio_conf_window_t1

0xdff8,	// (0x0008e464) list_single_graphic_popup_conf2_pane_ParamLimits

0xdff8,	// (0x0008e464) list_single_graphic_popup_conf2_pane

0xd9ad,	// (0x0008de19) list_highlight_pane_cp04

0xe00b,	// (0x0008e477) list_single_graphic_popup_conf2_pane_g1

0xd9be,	// (0x0008de2a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0008f9a2) list_single_graphic_popup_conf2_pane_g

0xe015,	// (0x0008e481) list_single_graphic_popup_conf2_pane_t1

0xe023,	// (0x0008e48f) bg_popup_call2_act_pane_cp01_ParamLimits

0xe023,	// (0x0008e48f) bg_popup_call2_act_pane_cp01

0xe0ad,	// (0x0008e519) call_type_pane_cp05_ParamLimits

0xe0ad,	// (0x0008e519) call_type_pane_cp05

0xe101,	// (0x0008e56d) popup_call2_audio_second_window_g1_ParamLimits

0xe101,	// (0x0008e56d) popup_call2_audio_second_window_g1

0xe155,	// (0x0008e5c1) popup_call2_audio_second_window_g2_ParamLimits

0xe155,	// (0x0008e5c1) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0008f9a7) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0008f9a7) popup_call2_audio_second_window_g

0xe1ba,	// (0x0008e626) popup_call2_audio_second_window_t1_ParamLimits

0xe1ba,	// (0x0008e626) popup_call2_audio_second_window_t1

0xe275,	// (0x0008e6e1) popup_call2_audio_second_window_t2_ParamLimits

0xe275,	// (0x0008e6e1) popup_call2_audio_second_window_t2

0xe2c8,	// (0x0008e734) popup_call2_audio_second_window_t3_ParamLimits

0xe2c8,	// (0x0008e734) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0008f9ae) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0008f9ae) popup_call2_audio_second_window_t

0x3bb7,	// (0x00084023) bg_popup_call2_in_pane_cp02

0x3bc1,	// (0x0008402d) call_type_pane_cp04

0x3bc9,	// (0x00084035) popup_call2_audio_wait_window_g1

0x3bd1,	// (0x0008403d) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008f587) popup_call2_audio_wait_window_g

0x3bd9,	// (0x00084045) popup_call2_audio_wait_window_t3

0xe3bb,	// (0x0008e827) bg_popup_call2_act_pane_ParamLimits

0xe3bb,	// (0x0008e827) bg_popup_call2_act_pane

0xe47b,	// (0x0008e8e7) call_type_pane_cp03_ParamLimits

0xe47b,	// (0x0008e8e7) call_type_pane_cp03

0xe4df,	// (0x0008e94b) popup_call2_audio_first_window_g1_ParamLimits

0xe4df,	// (0x0008e94b) popup_call2_audio_first_window_g1

0xe54f,	// (0x0008e9bb) popup_call2_audio_first_window_g2_ParamLimits

0xe54f,	// (0x0008e9bb) popup_call2_audio_first_window_g2

0xd930,	// (0x0008dd9c) popup_call2_audio_first_window_g3_ParamLimits

0xd930,	// (0x0008dd9c) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0008f9b7) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0008f9b7) popup_call2_audio_first_window_g

0xe62d,	// (0x0008ea99) popup_call2_audio_first_window_t1_ParamLimits

0xe62d,	// (0x0008ea99) popup_call2_audio_first_window_t1

0xe730,	// (0x0008eb9c) popup_call2_audio_first_window_t4_ParamLimits

0xe730,	// (0x0008eb9c) popup_call2_audio_first_window_t4

0xe813,	// (0x0008ec7f) popup_call2_audio_first_window_t5_ParamLimits

0xe813,	// (0x0008ec7f) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0008f9c2) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0008f9c2) popup_call2_audio_first_window_t

0x3e2a,	// (0x00084296) bg_popup_call2_act_pane_g1

0xee82,	// (0x0008f2ee) popup_cale_lunar_info_window_t1

0xee90,	// (0x0008f2fc) popup_cale_lunar_info_window_t2

0xee9e,	// (0x0008f30a) popup_cale_lunar_info_window_t3

0x3bb7,	// (0x00084023) bg_popup_call2_bubble_pane

0xe914,	// (0x0008ed80) bg_popup_call2_in_pane_cp01_ParamLimits

0xe914,	// (0x0008ed80) bg_popup_call2_in_pane_cp01

0x3893,	// (0x00083cff) call_type_pane_cp02

0xe95c,	// (0x0008edc8) popup_call2_audio_out_window_g1_ParamLimits

0xe95c,	// (0x0008edc8) popup_call2_audio_out_window_g1

0xe988,	// (0x0008edf4) popup_call2_audio_out_window_g2_ParamLimits

0xe988,	// (0x0008edf4) popup_call2_audio_out_window_g2

0xe9b0,	// (0x0008ee1c) popup_call2_audio_out_window_g3_ParamLimits

0xe9b0,	// (0x0008ee1c) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0008f9cb) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0008f9cb) popup_call2_audio_out_window_g

0xe9eb,	// (0x0008ee57) popup_call2_audio_out_window_t1_ParamLimits

0xe9eb,	// (0x0008ee57) popup_call2_audio_out_window_t1

0xea4a,	// (0x0008eeb6) popup_call2_audio_out_window_t2_ParamLimits

0xea4a,	// (0x0008eeb6) popup_call2_audio_out_window_t2

0xea9e,	// (0x0008ef0a) popup_call2_audio_out_window_t3_ParamLimits

0xea9e,	// (0x0008ef0a) popup_call2_audio_out_window_t3

0xeab4,	// (0x0008ef20) popup_call2_audio_out_window_t4_ParamLimits

0xeab4,	// (0x0008ef20) popup_call2_audio_out_window_t4

0xeaca,	// (0x0008ef36) popup_call2_audio_out_window_t5_ParamLimits

0xeaca,	// (0x0008ef36) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0008f9d4) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0008f9d4) popup_call2_audio_out_window_t

0xeb2e,	// (0x0008ef9a) bg_popup_call2_in_pane_ParamLimits

0xeb2e,	// (0x0008ef9a) bg_popup_call2_in_pane

0xeb8a,	// (0x0008eff6) popup_call2_audio_in_window_g1_ParamLimits

0xeb8a,	// (0x0008eff6) popup_call2_audio_in_window_g1

0xebc2,	// (0x0008f02e) popup_call2_audio_in_window_g2_ParamLimits

0xebc2,	// (0x0008f02e) popup_call2_audio_in_window_g2

0xebfa,	// (0x0008f066) popup_call2_audio_in_window_g3_ParamLimits

0xebfa,	// (0x0008f066) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0008f9e1) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0008f9e1) popup_call2_audio_in_window_g

0xec52,	// (0x0008f0be) popup_call2_audio_in_window_t1_ParamLimits

0xec52,	// (0x0008f0be) popup_call2_audio_in_window_t1

0xecd2,	// (0x0008f13e) popup_call2_audio_in_window_t2_ParamLimits

0xecd2,	// (0x0008f13e) popup_call2_audio_in_window_t2

0xed52,	// (0x0008f1be) popup_call2_audio_in_window_t3_ParamLimits

0xed52,	// (0x0008f1be) popup_call2_audio_in_window_t3

0xed6c,	// (0x0008f1d8) popup_call2_audio_in_window_t4_ParamLimits

0xed6c,	// (0x0008f1d8) popup_call2_audio_in_window_t4

0xed7e,	// (0x0008f1ea) popup_call2_audio_in_window_t5_ParamLimits

0xed7e,	// (0x0008f1ea) popup_call2_audio_in_window_t5

0xed93,	// (0x0008f1ff) popup_call2_audio_in_window_t6_ParamLimits

0xed93,	// (0x0008f1ff) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0008f9ea) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0008f9ea) popup_call2_audio_in_window_t

0x3e2a,	// (0x00084296) bg_popup_call2_in_pane_g1

0xeeac,	// (0x0008f318) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0008fa52) popup_cale_lunar_info_window_t

0x3e32,	// (0x0008429e) bg_popup_call2_rect_pane_ParamLimits

0x3e32,	// (0x0008429e) bg_popup_call2_rect_pane

0x3bb7,	// (0x00084023) call2_cli_visual_graphic_pane

0x3bb7,	// (0x00084023) call2_cli_visual_text_pane

0x89cc,	// (0x00088e38) smil_status_volume_pane_g3

0x0002,

0x3f52,	// (0x000843be) call2_cli_visual_graphic_pane_g1

0x3f52,	// (0x000843be) call2_cli_visual_graphic_pane_g2

0x3f52,	// (0x000843be) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0008f9f7) call2_cli_visual_graphic_pane_g

0xeda8,	// (0x0008f214) bg_popup_call2_rect_pane_g1

0x3ff0,	// (0x0008445c) bg_popup_call2_rect_pane_g2

0xedb0,	// (0x0008f21c) bg_popup_call2_rect_pane_g3

0xedb8,	// (0x0008f224) bg_popup_call2_rect_pane_g4

0xedc0,	// (0x0008f22c) bg_popup_call2_rect_pane_g5

0xedc8,	// (0x0008f234) bg_popup_call2_rect_pane_g6

0xedd0,	// (0x0008f23c) bg_popup_call2_rect_pane_g7

0xedd8,	// (0x0008f244) bg_popup_call2_rect_pane_g8

0xede0,	// (0x0008f24c) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0008f9fe) bg_popup_call2_rect_pane_g

0xede8,	// (0x0008f254) bg_popup_call2_bubble_pane_g1

0xedf0,	// (0x0008f25c) bg_popup_call2_bubble_pane_g2

0xedf8,	// (0x0008f264) bg_popup_call2_bubble_pane_g3

0xee00,	// (0x0008f26c) bg_popup_call2_bubble_pane_g4

0xee08,	// (0x0008f274) bg_popup_call2_bubble_pane_g5

0xee10,	// (0x0008f27c) bg_popup_call2_bubble_pane_g6

0xee18,	// (0x0008f284) bg_popup_call2_bubble_pane_g7

0xee20,	// (0x0008f28c) bg_popup_call2_bubble_pane_g8

0xee28,	// (0x0008f294) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0008fa11) bg_popup_call2_bubble_pane_g

0x5e36,	// (0x000862a2) aid_cale_week_size_cell_pane

0x6440,	// (0x000868ac) aid_cams_cif_uncrop_pane_ParamLimits

0x6440,	// (0x000868ac) aid_cams_cif_uncrop_pane

0x659d,	// (0x00086a09) aid_cams_size_cell_ParamLimits

0x659d,	// (0x00086a09) aid_cams_size_cell

0x65a9,	// (0x00086a15) grid_cams_pane_ParamLimits

0x65b7,	// (0x00086a23) linegrid_cams_pane_ParamLimits

0x66e1,	// (0x00086b4d) call_video_pane_t1

0x66fe,	// (0x00086b6a) call_video_pane_t2

0x0001,

0xf292,	// (0x0008f6fe) call_video_pane_t

0x6bd9,	// (0x00087045) aid_cale_month_size_cell_pane_ParamLimits

0x6bd9,	// (0x00087045) aid_cale_month_size_cell_pane

0xf62f,	// (0x0008fa9b) smil_status_volume_pane_g

0x89d9,	// (0x00088e45) volume_smil_pane_ParamLimits

0x0218,	// (0x00080684) aid_popup2_width_pane

0x5d52,	// (0x000861be) cell_qdial_pane_g4_ParamLimits

0x5d52,	// (0x000861be) cell_qdial_pane_g4

0x789a,	// (0x00087d06) aid_blid_cardinal_pane_ParamLimits

0x78aa,	// (0x00087d16) aid_blid_destination_pane_ParamLimits

0x78aa,	// (0x00087d16) aid_blid_destination_pane

0x3e32,	// (0x0008429e) bg_popup_call_poc_act_pane_ParamLimits

0x3e32,	// (0x0008429e) bg_popup_call_poc_act_pane

0x3e32,	// (0x0008429e) bg_popup_call_poc_inact_pane_ParamLimits

0x3e32,	// (0x0008429e) bg_popup_call_poc_inact_pane

0xee30,	// (0x0008f29c) bg_popup_call_poc_act_pane_g1

0xee38,	// (0x0008f2a4) bg_popup_call_poc_act_pane_g2

0xee40,	// (0x0008f2ac) bg_popup_call_poc_act_pane_g3

0xee00,	// (0x0008f26c) bg_popup_call_poc_act_pane_g4

0xee08,	// (0x0008f274) bg_popup_call_poc_act_pane_g5

0xee48,	// (0x0008f2b4) bg_popup_call_poc_act_pane_g6

0xee18,	// (0x0008f284) bg_popup_call_poc_act_pane_g7

0xee50,	// (0x0008f2bc) bg_popup_call_poc_act_pane_g8

0x3bb7,	// (0x00084023) main_usb_pane

0xefad,	// (0x0008f419) popup_cale_lunar_info_window

0x6a16,	// (0x00086e82) im_reading_pane_t1_ParamLimits

0x41af,	// (0x0008461b) list_im_pane_ParamLimits

0x41c0,	// (0x0008462c) scroll_pane_cp07_ParamLimits

0x3bb7,	// (0x00084023) grid_highlight_pane_cp012

0x3e32,	// (0x0008429e) mup_scale_pane_ParamLimits

0xd930,	// (0x0008dd9c) main_usb_pane_g1_ParamLimits

0xd930,	// (0x0008dd9c) main_usb_pane_g1

0x8580,	// (0x000889ec) main_usb_pane_g2_ParamLimits

0x8580,	// (0x000889ec) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0008fa3b) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0008fa3b) main_usb_pane_g

0x858c,	// (0x000889f8) main_usb_pane_t1_ParamLimits

0x858c,	// (0x000889f8) main_usb_pane_t1

0x859e,	// (0x00088a0a) main_usb_pane_t2_ParamLimits

0x859e,	// (0x00088a0a) main_usb_pane_t2

0x85b0,	// (0x00088a1c) main_usb_pane_t3_ParamLimits

0x85b0,	// (0x00088a1c) main_usb_pane_t3

0x85c2,	// (0x00088a2e) main_usb_pane_t4_ParamLimits

0x85c2,	// (0x00088a2e) main_usb_pane_t4

0x85d4,	// (0x00088a40) main_usb_pane_t5_ParamLimits

0x85d4,	// (0x00088a40) main_usb_pane_t5

0x85e6,	// (0x00088a52) main_usb_pane_t6_ParamLimits

0x85e6,	// (0x00088a52) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0008fa40) main_usb_pane_t_ParamLimits

0x7855,	// (0x00087cc1) aid_text_placing

0x7860,	// (0x00087ccc) main_location2_pane_t1_ParamLimits

0x7874,	// (0x00087ce0) main_location2_pane_t2_ParamLimits

0x7874,	// (0x00087ce0) main_location2_pane_t3_ParamLimits

0x7888,	// (0x00087cf4) main_location2_pane_t4_ParamLimits

0x7888,	// (0x00087cf4) main_location2_pane_t4

0xf3f3,	// (0x0008f85f) main_location2_pane_t_ParamLimits

0x3e6e,	// (0x000842da) find_pinb_pane_g2_ParamLimits

0x3e6e,	// (0x000842da) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0008f5ad) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0008f5ad) find_pinb_pane_g

0x3e7a,	// (0x000842e6) find_pinb_pane_t1_ParamLimits

0x3e8c,	// (0x000842f8) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0008f5b2) find_pinb_pane_t_ParamLimits

0x3bb7,	// (0x00084023) main_call3_pane

0x6f35,	// (0x000873a1) cale_month_day_heading_pane_t1_ParamLimits

0x6f93,	// (0x000873ff) cale_month_day_heading_pane_t2_ParamLimits

0x6ff8,	// (0x00087464) cale_month_day_heading_pane_t3_ParamLimits

0x705d,	// (0x000874c9) cale_month_day_heading_pane_t4_ParamLimits

0x70c2,	// (0x0008752e) cale_month_day_heading_pane_t5_ParamLimits

0x712f,	// (0x0008759b) cale_month_day_heading_pane_t6_ParamLimits

0x71a4,	// (0x00087610) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0008f736) cale_month_day_heading_pane_t_ParamLimits

0x4400,	// (0x0008486c) smil_status_volume_pane

0x8138,	// (0x000885a4) postcard_address_pane_ParamLimits

0x8138,	// (0x000885a4) postcard_address_pane

0x8146,	// (0x000885b2) postcard_message_pane_ParamLimits

0x8146,	// (0x000885b2) postcard_message_pane

0x8553,	// (0x000889bf) call2_cli_visual_pane_t1_ParamLimits

0x8553,	// (0x000889bf) call2_cli_visual_pane_t1

0x8b1f,	// (0x00088f8b) postcard_message_pane_t1_ParamLimits

0x8b1f,	// (0x00088f8b) postcard_message_pane_t1

0xf09b,	// (0x0008f507) postcard_address_pane_t1_ParamLimits

0xf09b,	// (0x0008f507) postcard_address_pane_t1

0x8b10,	// (0x00088f7c) popup_call3_audio_in_window_ParamLimits

0x8b10,	// (0x00088f7c) popup_call3_audio_in_window

0x89ee,	// (0x00088e5a) bg_popup_call3_in_pane_ParamLimits

0x89ee,	// (0x00088e5a) bg_popup_call3_in_pane

0x8a56,	// (0x00088ec2) popup_call3_audio_in_window_g1_ParamLimits

0x8a56,	// (0x00088ec2) popup_call3_audio_in_window_g1

0x8a6e,	// (0x00088eda) popup_call3_audio_in_window_g2_ParamLimits

0x8a6e,	// (0x00088eda) popup_call3_audio_in_window_g2

0x8a86,	// (0x00088ef2) popup_call3_audio_in_window_g3_ParamLimits

0x8a86,	// (0x00088ef2) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0008faa2) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0008faa2) popup_call3_audio_in_window_g

0x8aae,	// (0x00088f1a) popup_call3_audio_in_window_t1_ParamLimits

0x8aae,	// (0x00088f1a) popup_call3_audio_in_window_t1

0x8ad6,	// (0x00088f42) popup_call3_audio_in_window_t2_ParamLimits

0x8ad6,	// (0x00088f42) popup_call3_audio_in_window_t2

0x8afe,	// (0x00088f6a) popup_call3_audio_in_window_t3_ParamLimits

0x8afe,	// (0x00088f6a) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0008faab) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0008faab) popup_call3_audio_in_window_t

0xdb8c,	// (0x0008dff8) bg_popup_call3_rect_pane

0xeda8,	// (0x0008f214) bg_popup_call3_rect_pane_g1

0x3ff0,	// (0x0008445c) bg_popup_call3_rect_pane_g2

0xedb0,	// (0x0008f21c) bg_popup_call3_rect_pane_g3

0xedb8,	// (0x0008f224) bg_popup_call3_rect_pane_g4

0xedc0,	// (0x0008f22c) bg_popup_call3_rect_pane_g5

0xedc8,	// (0x0008f234) bg_popup_call3_rect_pane_g6

0xedd0,	// (0x0008f23c) bg_popup_call3_rect_pane_g7

0x7cba,	// (0x00088126) mup_visualizer_osc_pane

0xdc4b,	// (0x0008e0b7) mup_visualizer_spec_pane

0x8a0e,	// (0x00088e7a) call3_video_qcif_pane_ParamLimits

0x8a0e,	// (0x00088e7a) call3_video_qcif_pane

0x8a20,	// (0x00088e8c) call3_video_qcif_uncrop_pane_ParamLimits

0x8a20,	// (0x00088e8c) call3_video_qcif_uncrop_pane

0x8a30,	// (0x00088e9c) call3_video_subqcif_pane_ParamLimits

0x8a30,	// (0x00088e9c) call3_video_subqcif_pane

0x8a44,	// (0x00088eb0) call3_video_subqcif_uncrop_pane_ParamLimits

0x8a44,	// (0x00088eb0) call3_video_subqcif_uncrop_pane

0x8a9e,	// (0x00088f0a) popup_call3_audio_in_window_g4_ParamLimits

0x8a9e,	// (0x00088f0a) popup_call3_audio_in_window_g4

0x89bb,	// (0x00088e27) mup_spec_half_pane

0x89c4,	// (0x00088e30) mup_spec_half_pane_cp

0xf05b,	// (0x0008f4c7) mup_osc_middle_pane

0xf064,	// (0x0008f4d0) mup_visualizer_osc_pane_g1

0x899b,	// (0x00088e07) mup_spec_bar_pane_ParamLimits

0x899b,	// (0x00088e07) mup_spec_bar_pane

0xf048,	// (0x0008f4b4) mup_spec_bar_pane_g1

0xf052,	// (0x0008f4be) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008fa96) mup_spec_bar_pane_g

0x5e36,	// (0x000862a2) aid_cale_week_size_cell_pane_ParamLimits

0x5e49,	// (0x000862b5) bg_cale_heading_pane_ParamLimits

0x4024,	// (0x00084490) bg_cale_pane_cp01_ParamLimits

0x5e5d,	// (0x000862c9) cale_week_corner_pane_ParamLimits

0x5e73,	// (0x000862df) cale_week_day_heading_pane_ParamLimits

0x5e87,	// (0x000862f3) cale_week_scroll_pane_g1_ParamLimits

0x5e98,	// (0x00086304) cale_week_scroll_pane_g2_ParamLimits

0x5ea9,	// (0x00086315) cale_week_scroll_pane_g3_ParamLimits

0x5eba,	// (0x00086326) cale_week_scroll_pane_g4_ParamLimits

0x5ecb,	// (0x00086337) cale_week_scroll_pane_g5_ParamLimits

0x5edc,	// (0x00086348) cale_week_scroll_pane_g6_ParamLimits

0x5eef,	// (0x0008635b) cale_week_scroll_pane_g7_ParamLimits

0x5f02,	// (0x0008636e) cale_week_scroll_pane_g8_ParamLimits

0x5f15,	// (0x00086381) cale_week_scroll_pane_g9_ParamLimits

0x5f26,	// (0x00086392) cale_week_scroll_pane_g10_ParamLimits

0x5f37,	// (0x000863a3) cale_week_scroll_pane_g11_ParamLimits

0x5f48,	// (0x000863b4) cale_week_scroll_pane_g12_ParamLimits

0x5f59,	// (0x000863c5) cale_week_scroll_pane_g13_ParamLimits

0x5f6a,	// (0x000863d6) cale_week_scroll_pane_g14_ParamLimits

0x5f7b,	// (0x000863e7) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0008f63e) cale_week_scroll_pane_g_ParamLimits

0x5f8c,	// (0x000863f8) cale_week_time_pane_ParamLimits

0x5f9f,	// (0x0008640b) grid_cale_week_pane_ParamLimits

0x403d,	// (0x000844a9) listscroll_cale_week_pane_t1

0x5fb4,	// (0x00086420) scroll_pane_cp08_ParamLimits

0x6c1a,	// (0x00087086) cale_month_corner_pane_ParamLimits

0x43d6,	// (0x00084842) cale_month_pane_t1

0x6ef4,	// (0x00087360) cale_month_week_pane_ParamLimits

0xd930,	// (0x0008dd9c) popup_call_status_window_g1_ParamLimits

0x7667,	// (0x00087ad3) popup_call_status_window_g2_ParamLimits

0x7673,	// (0x00087adf) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0008f7e6) popup_call_status_window_g_ParamLimits

0x46f9,	// (0x00084b65) aid_call2_pane

0x7f63,	// (0x000883cf) msg_header_pane_g1

0x8138,	// (0x000885a4) postcard_address2_pane_ParamLimits

0x8138,	// (0x000885a4) postcard_address2_pane

0x8146,	// (0x000885b2) postcard_message2_pane_ParamLimits

0x8146,	// (0x000885b2) postcard_message2_pane

0x8955,	// (0x00088dc1) message2_row_pane_ParamLimits

0x8955,	// (0x00088dc1) message2_row_pane

0xf003,	// (0x0008f46f) address2_row_pane_ParamLimits

0xf003,	// (0x0008f46f) address2_row_pane

0xf016,	// (0x0008f482) postcard_message2_row_pane_g1

0xf01e,	// (0x0008f48a) postcard_message2_row_pane_t1

0xf016,	// (0x0008f482) address2_row_pane_g1

0xf01e,	// (0x0008f48a) address2_row_pane_t1

0x62fe,	// (0x0008676a) aid_size_cell_vorec

0x3bb7,	// (0x00084023) main_rss_pane

0x896f,	// (0x00088ddb) rss_list_single_pane_ParamLimits

0x896f,	// (0x00088ddb) rss_list_single_pane

0xf02c,	// (0x0008f498) rss_list_single_pane_t1

0xf03a,	// (0x0008f4a6) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0008fa91) rss_list_single_pane_t

0x3bb7,	// (0x00084023) main_camera2_pane

0x3bb7,	// (0x00084023) main_video2_pane

0x8b83,	// (0x00088fef) cams_zoom_pane_cp2_ParamLimits

0x8b83,	// (0x00088fef) cams_zoom_pane_cp2

0x8b8f,	// (0x00088ffb) image2_vga_pane_ParamLimits

0x8b8f,	// (0x00088ffb) image2_vga_pane

0x8b9e,	// (0x0008900a) main_camera2_pane_g1_ParamLimits

0x8b9e,	// (0x0008900a) main_camera2_pane_g1

0x8baa,	// (0x00089016) main_camera2_pane_g2_ParamLimits

0x8baa,	// (0x00089016) main_camera2_pane_g2

0x8bb6,	// (0x00089022) main_camera2_pane_g3_ParamLimits

0x8bb6,	// (0x00089022) main_camera2_pane_g3

0x8bc2,	// (0x0008902e) main_camera2_pane_g4_ParamLimits

0x8bc2,	// (0x0008902e) main_camera2_pane_g4

0x8bce,	// (0x0008903a) main_camera2_pane_g5_ParamLimits

0x8bce,	// (0x0008903a) main_camera2_pane_g5

0x8bda,	// (0x00089046) main_camera2_pane_g6_ParamLimits

0x8bda,	// (0x00089046) main_camera2_pane_g6

0x8be6,	// (0x00089052) main_camera2_pane_g7_ParamLimits

0x8be6,	// (0x00089052) main_camera2_pane_g7

0x8bf2,	// (0x0008905e) main_camera2_pane_g8_ParamLimits

0x8bf2,	// (0x0008905e) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0008fab2) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0008fab2) main_camera2_pane_g

0x8c0a,	// (0x00089076) main_camera2_pane_t1_ParamLimits

0x8c0a,	// (0x00089076) main_camera2_pane_t1

0x8c1c,	// (0x00089088) main_camera2_pane_t2_ParamLimits

0x8c1c,	// (0x00089088) main_camera2_pane_t2

0x8c2e,	// (0x0008909a) main_camera2_pane_t3_ParamLimits

0x8c2e,	// (0x0008909a) main_camera2_pane_t3

0x8c40,	// (0x000890ac) main_camera2_pane_t4_ParamLimits

0x8c40,	// (0x000890ac) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0008fac5) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0008fac5) main_camera2_pane_t

0x8c9d,	// (0x00089109) cams_zoom_pane_cp4_ParamLimits

0x8c9d,	// (0x00089109) cams_zoom_pane_cp4

0x8cad,	// (0x00089119) image2_cif_pane_ParamLimits

0x8cad,	// (0x00089119) image2_cif_pane

0x8cc2,	// (0x0008912e) image2_subqcif_pane_ParamLimits

0x8cc2,	// (0x0008912e) image2_subqcif_pane

0x8cd1,	// (0x0008913d) main_video2_pane_g1_ParamLimits

0x8cd1,	// (0x0008913d) main_video2_pane_g1

0x8ce3,	// (0x0008914f) main_video2_pane_g2_ParamLimits

0x8ce3,	// (0x0008914f) main_video2_pane_g2

0x8cf3,	// (0x0008915f) main_video2_pane_g3_ParamLimits

0x8cf3,	// (0x0008915f) main_video2_pane_g3

0x8d03,	// (0x0008916f) main_video2_pane_g4_ParamLimits

0x8d03,	// (0x0008916f) main_video2_pane_g4

0x8d13,	// (0x0008917f) main_video2_pane_g5_ParamLimits

0x8d13,	// (0x0008917f) main_video2_pane_g5

0x8d23,	// (0x0008918f) main_video2_pane_g6_ParamLimits

0x8d23,	// (0x0008918f) main_video2_pane_g6

0x0005,

0xf668,	// (0x0008fad4) main_video2_pane_g_ParamLimits

0xf668,	// (0x0008fad4) main_video2_pane_g

0x8d35,	// (0x000891a1) main_video2_pane_t1_ParamLimits

0x8d35,	// (0x000891a1) main_video2_pane_t1

0x8d4f,	// (0x000891bb) main_video2_pane_t2_ParamLimits

0x8d4f,	// (0x000891bb) main_video2_pane_t2

0x8d75,	// (0x000891e1) main_video2_pane_t3_ParamLimits

0x8d75,	// (0x000891e1) main_video2_pane_t3

0x0002,

0xf675,	// (0x0008fae1) main_video2_pane_t_ParamLimits

0xf675,	// (0x0008fae1) main_video2_pane_t

0x869d,	// (0x00088b09) call_muted_g2

0x0001,

0xf617,	// (0x0008fa83) call_muted_g

0x3bb7,	// (0x00084023) main_mup2_pane

0xf0b2,	// (0x0008f51e) main_mup2_pane_g1_ParamLimits

0xf0b2,	// (0x0008f51e) main_mup2_pane_g1

0x8d9b,	// (0x00089207) main_mup2_pane_g2_ParamLimits

0x8d9b,	// (0x00089207) main_mup2_pane_g2

0x902d,	// (0x00089499) main_mup_pane_g13_cp1

0x9035,	// (0x000894a1) mup_volume_pane_cp1

0x8dbd,	// (0x00089229) main_mup2_pane_g4_ParamLimits

0x8dbd,	// (0x00089229) main_mup2_pane_g4

0x8dd2,	// (0x0008923e) main_mup2_pane_g5_ParamLimits

0x8dd2,	// (0x0008923e) main_mup2_pane_g5

0x8de7,	// (0x00089253) main_mup2_pane_g6_ParamLimits

0x8de7,	// (0x00089253) main_mup2_pane_g6

0x8dfc,	// (0x00089268) main_mup2_pane_g7_ParamLimits

0x8dfc,	// (0x00089268) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0008fae8) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0008fae8) main_mup2_pane_g

0x8e18,	// (0x00089284) main_mup2_pane_t1_ParamLimits

0x8e18,	// (0x00089284) main_mup2_pane_t1

0x8e2f,	// (0x0008929b) main_mup2_pane_t2_ParamLimits

0x8e2f,	// (0x0008929b) main_mup2_pane_t2

0x8e46,	// (0x000892b2) main_mup2_pane_t3_ParamLimits

0x8e46,	// (0x000892b2) main_mup2_pane_t3

0x8e5d,	// (0x000892c9) main_mup2_pane_t4_ParamLimits

0x8e5d,	// (0x000892c9) main_mup2_pane_t4

0x8e77,	// (0x000892e3) main_mup2_pane_t5_ParamLimits

0x8e77,	// (0x000892e3) main_mup2_pane_t5

0x8e91,	// (0x000892fd) main_mup2_pane_t6_ParamLimits

0x8e91,	// (0x000892fd) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0008faf7) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0008faf7) main_mup2_pane_t

0x8ec9,	// (0x00089335) mup2_visualizer_pane_ParamLimits

0x8ec9,	// (0x00089335) mup2_visualizer_pane

0x8eff,	// (0x0008936b) mup_progress_pane_cp_ParamLimits

0x8eff,	// (0x0008936b) mup_progress_pane_cp

0x9018,	// (0x00089484) mup_volume_pane_cp_ParamLimits

0x9018,	// (0x00089484) mup_volume_pane_cp

0x8f18,	// (0x00089384) mup2_visualizer_pane_g1_ParamLimits

0x8f18,	// (0x00089384) mup2_visualizer_pane_g1

0xf0be,	// (0x0008f52a) mup2_visualizer_pane_g2_ParamLimits

0xf0be,	// (0x0008f52a) mup2_visualizer_pane_g2

0x8f2d,	// (0x00089399) mup2_visualizer_pane_g3_ParamLimits

0x8f2d,	// (0x00089399) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0008fb04) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0008fb04) mup2_visualizer_pane_g

0xde74,	// (0x0008e2e0) aid_size_cell_fmradio

0x87b3,	// (0x00088c1f) aid_height_parent_landcape

0x423e,	// (0x000846aa) wml_content_pane_cp

0x4246,	// (0x000846b2) wml_tabs_pane

0x424f,	// (0x000846bb) popup_wml_miniature_window

0x4257,	// (0x000846c3) scroll_pane_cp021

0x426b,	// (0x000846d7) wml_content_pane_comp8

0x3bb7,	// (0x00084023) bg_popup_sub_pane_cp05

0xf0dc,	// (0x0008f548) popup_wml_miniature_window_g1

0xf0e4,	// (0x0008f550) wml_miniature_view_pane

0x8f3b,	// (0x000893a7) aid_size_wml_view

0x8f43,	// (0x000893af) wml_miniature_view_pane_g1

0x8f4c,	// (0x000893b8) wml_miniature_view_pane_g2

0x8f55,	// (0x000893c1) wml_miniature_view_pane_g3

0x8f5d,	// (0x000893c9) wml_miniature_view_pane_g4

0x8f65,	// (0x000893d1) wml_miniature_view_pane_g5

0x8f6d,	// (0x000893d9) wml_miniature_view_pane_g6

0x8f75,	// (0x000893e1) wml_miniature_view_pane_g7

0x8f7d,	// (0x000893e9) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0008fb0b) wml_miniature_view_pane_g

0xf0b2,	// (0x0008f51e) background_graphic_ParamLimits

0xf0b2,	// (0x0008f51e) background_graphic

0x0716,	// (0x00080b82) wml_tabs_2_pane

0x071f,	// (0x00080b8b) wml_tabs_3_pane_ParamLimits

0x071f,	// (0x00080b8b) wml_tabs_3_pane

0x0731,	// (0x00080b9d) wml_tabs_4_pane_ParamLimits

0x0731,	// (0x00080b9d) wml_tabs_4_pane

0x0747,	// (0x00080bb3) wml_tabs_5_pane_ParamLimits

0x0747,	// (0x00080bb3) wml_tabs_5_pane

0x0761,	// (0x00080bcd) wml_tabs_pane_g2_ParamLimits

0x0761,	// (0x00080bcd) wml_tabs_pane_g2

0x0775,	// (0x00080be1) wml_tabs_pane_g3_ParamLimits

0x0775,	// (0x00080be1) wml_tabs_pane_g3

0x8f85,	// (0x000893f1) wml_tabs_2_active_pane_ParamLimits

0x8f85,	// (0x000893f1) wml_tabs_2_active_pane

0x8f97,	// (0x00089403) wml_tabs_2_passive_pane_ParamLimits

0x8f97,	// (0x00089403) wml_tabs_2_passive_pane

0x8fa9,	// (0x00089415) wml_tabs_3_active_pane_cp_ParamLimits

0x8fa9,	// (0x00089415) wml_tabs_3_active_pane_cp

0x8fbc,	// (0x00089428) wml_tabs_3_passive_pane_ParamLimits

0x8fbc,	// (0x00089428) wml_tabs_3_passive_pane

0x8fcd,	// (0x00089439) wml_tabs_3_passive_pane_cp_ParamLimits

0x8fcd,	// (0x00089439) wml_tabs_3_passive_pane_cp

0x8fe2,	// (0x0008944e) tabs_4_active_pane

0x8fea,	// (0x00089456) tabs_4_passive_pane

0x8ff2,	// (0x0008945e) tabs_4_passive_pane_cp

0x8ffa,	// (0x00089466) tabs_4_passive_pane_cp2

0x8578,	// (0x000889e4) aid_height_text

0x7c83,	// (0x000880ef) mup_volume_cont_pane_ParamLimits

0x7c83,	// (0x000880ef) mup_volume_cont_pane

0x59ab,	// (0x00085e17) aid_size_cell_pinb

0x59b5,	// (0x00085e21) aid_size_list_pinb

0x8ee8,	// (0x00089354) mup2_volume_cont_pane_ParamLimits

0x8ee8,	// (0x00089354) mup2_volume_cont_pane

0x9004,	// (0x00089470) mup2_volume_cont_pane_g1_ParamLimits

0x9004,	// (0x00089470) mup2_volume_cont_pane_g1

0x5643,	// (0x00085aaf) aid_size_cell_touch_ParamLimits

0x5643,	// (0x00085aaf) aid_size_cell_touch

0x5892,	// (0x00085cfe) touch_pane_ParamLimits

0x5892,	// (0x00085cfe) touch_pane

0x0206,	// (0x00080672) main_rss2_pane

0x07cb,	// (0x00080c37) listscroll_rss2_pane

0x07d4,	// (0x00080c40) rss2_navigation_pane

0x07dc,	// (0x00080c48) list_rss2_pane

0xda52,	// (0x0008debe) scroll_pane_cp22

0x07e4,	// (0x00080c50) rss2_navigation_pane_g1

0x07ed,	// (0x00080c59) rss2_navigation_pane_g2

0x07f5,	// (0x00080c61) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0008fb1c) rss2_navigation_pane_g

0x07fd,	// (0x00080c69) rss2_navigation_pane_t1

0x903d,	// (0x000894a9) rss2_list_single_pane_ParamLimits

0x903d,	// (0x000894a9) rss2_list_single_pane

0x080b,	// (0x00080c77) rss2_list_single_pane_t2

0x0819,	// (0x00080c85) rss2_list_single_pane_t3_ParamLimits

0x0819,	// (0x00080c85) rss2_list_single_pane_t3

0x0836,	// (0x00080ca2) rss2_list_single_pane_t4

0x741c,	// (0x00087888) smil_status_pane_g1

0x027f,	// (0x000806eb) main_image2_pane_ParamLimits

0x027f,	// (0x000806eb) main_image2_pane

0x8bfe,	// (0x0008906a) main_camera2_pane_g9_ParamLimits

0x8bfe,	// (0x0008906a) main_camera2_pane_g9

0x8c52,	// (0x000890be) main_camera2_pane_t5_ParamLimits

0x8c52,	// (0x000890be) main_camera2_pane_t5

0x8c64,	// (0x000890d0) main_camera2_pane_t6_ParamLimits

0x8c64,	// (0x000890d0) main_camera2_pane_t6

0x9063,	// (0x000894cf) main_image2_pane_g1_ParamLimits

0x9063,	// (0x000894cf) main_image2_pane_g1

0x8312,	// (0x0008877e) smil2_video_pane_ParamLimits

0x8312,	// (0x0008877e) smil2_video_pane

0x0234,	// (0x000806a0) aid_zoom_text_primary_cp

0x0275,	// (0x000806e1) popup_preview_fixed_window

0x41a7,	// (0x00084613) im_reading_pane_g1

0x8b48,	// (0x00088fb4) cams2_bc_adjust_pane_cp_ParamLimits

0x8b48,	// (0x00088fb4) cams2_bc_adjust_pane_cp

0x8c8f,	// (0x000890fb) cams2_bc_adjust_pane_ParamLimits

0x8c8f,	// (0x000890fb) cams2_bc_adjust_pane

0x1c16,	// (0x00082082) cams2_bc_adjust_pane_g1

0x906f,	// (0x000894db) cams2_slider_pane

0x9078,	// (0x000894e4) cams2_slider_pane_g1

0x9081,	// (0x000894ed) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0008fb23) cams2_slider_pane_g

0x5aa8,	// (0x00085f14) calc_display_pane_ParamLimits

0x5ac6,	// (0x00085f32) calc_paper_pane_ParamLimits

0x5ae2,	// (0x00085f4e) grid_calc_pane_ParamLimits

0x76d1,	// (0x00087b3d) popup_clock_digital_window_t1_ParamLimits

0xde11,	// (0x0008e27d) main_image_pane_t1

0x5a8e,	// (0x00085efa) aid_size_cell_calc_ParamLimits

0x5a8e,	// (0x00085efa) aid_size_cell_calc

0x87e5,	// (0x00088c51) popup_blid_sat_info2_window_ParamLimits

0x87e5,	// (0x00088c51) popup_blid_sat_info2_window

0x0880,	// (0x00080cec) aid_size_cell_blid

0x0888,	// (0x00080cf4) bg_popup_window_pane_cp07

0x08ab,	// (0x00080d17) grid_popup_blid_pane

0x08b5,	// (0x00080d21) heading_pane_cp05_ParamLimits

0x08b5,	// (0x00080d21) heading_pane_cp05

0x097f,	// (0x00080deb) cell_popup_blid_pane_ParamLimits

0x097f,	// (0x00080deb) cell_popup_blid_pane

0x09a9,	// (0x00080e15) cell_popup_blid_pane_g1

0x09b1,	// (0x00080e1d) cell_popup_blid_pane_t1

0x8eae,	// (0x0008931a) mup2_indicator_pane_ParamLimits

0x8eae,	// (0x0008931a) mup2_indicator_pane

0xdb8c,	// (0x0008dff8) mup2_visualizer_osc_pane

0xf0ca,	// (0x0008f536) mup2_visualizer_spec_pane_ParamLimits

0xf0ca,	// (0x0008f536) mup2_visualizer_spec_pane

0x909b,	// (0x00089507) mup2_spec_half_pane

0x90a4,	// (0x00089510) mup2_spec_half_pane_cp

0x90ae,	// (0x0008951a) mup2_spec_bar_pane_ParamLimits

0x90ae,	// (0x0008951a) mup2_spec_bar_pane

0xf048,	// (0x0008f4b4) mup2_spec_bar_pane_g1

0xf052,	// (0x0008f4be) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008fa96) mup2_spec_bar_pane_g

0x90cd,	// (0x00089539) mup2_osc_middle_pane

0xf064,	// (0x0008f4d0) mup2_visualizer_osc_pane_g1

0x02ad,	// (0x00080719) popup_number_entry_window_t1_ParamLimits

0x02c0,	// (0x0008072c) popup_number_entry_window_t2_ParamLimits

0x02d2,	// (0x0008073e) popup_number_entry_window_t3_ParamLimits

0x58e9,	// (0x00085d55) popup_number_entry_window_t5_ParamLimits

0x58e9,	// (0x00085d55) popup_number_entry_window_t5

0xf0ec,	// (0x0008f558) popup_number_entry_window_t_ParamLimits

0x02e4,	// (0x00080750) text_title_cp2_ParamLimits

0x7ffc,	// (0x00088468) aid_hotspot_pointer_text2_pane

0x8096,	// (0x00088502) main_viewer_pane_g9_ParamLimits

0x8096,	// (0x00088502) main_viewer_pane_g9

0x43d6,	// (0x00084842) cale_month_pane_t1_ParamLimits

0x4413,	// (0x0008487f) bg_cale_pane_ParamLimits

0x442b,	// (0x00084897) list_cale_pane_ParamLimits

0x403d,	// (0x000844a9) listscroll_cale_day_pane_t1

0x443c,	// (0x000848a8) scroll_pane_cp09_ParamLimits

0x7cc2,	// (0x0008812e) main_mup_eq_pane_t1_ParamLimits

0x7cc2,	// (0x0008812e) main_mup_eq_pane_t1

0x7cde,	// (0x0008814a) main_mup_eq_pane_t2_ParamLimits

0x7cde,	// (0x0008814a) main_mup_eq_pane_t2

0x7cfa,	// (0x00088166) main_mup_eq_pane_t3_ParamLimits

0x7cfa,	// (0x00088166) main_mup_eq_pane_t3

0x7d14,	// (0x00088180) main_mup_eq_pane_t4_ParamLimits

0x7d14,	// (0x00088180) main_mup_eq_pane_t4

0x7d2e,	// (0x0008819a) main_mup_eq_pane_t5_ParamLimits

0x7d2e,	// (0x0008819a) main_mup_eq_pane_t5

0x7d48,	// (0x000881b4) main_mup_eq_pane_t6_ParamLimits

0x7d48,	// (0x000881b4) main_mup_eq_pane_t6

0x7d5e,	// (0x000881ca) main_mup_eq_pane_t7_ParamLimits

0x7d5e,	// (0x000881ca) main_mup_eq_pane_t7

0x7d74,	// (0x000881e0) main_mup_eq_pane_t8_ParamLimits

0x7d74,	// (0x000881e0) main_mup_eq_pane_t8

0x7d8a,	// (0x000881f6) main_mup_eq_pane_t9_ParamLimits

0x7d8a,	// (0x000881f6) main_mup_eq_pane_t9

0x7da6,	// (0x00088212) main_mup_eq_pane_t10_ParamLimits

0x7da6,	// (0x00088212) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0008f8e5) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0008f8e5) main_mup_eq_pane_t

0x7e6b,	// (0x000882d7) mup_equalizer_pane_cp5_ParamLimits

0x7e83,	// (0x000882ef) mup_equalizer_pane_cp6_ParamLimits

0x7e9b,	// (0x00088307) mup_equalizer_pane_cp7_ParamLimits

0x0206,	// (0x00080672) main_gallery_pane

0xf06d,	// (0x0008f4d9) smil2_volume_pane

0xf075,	// (0x0008f4e1) smil_status_volume_pane_g1_ParamLimits

0xf088,	// (0x0008f4f4) smil_status_volume_pane_g2_ParamLimits

0x89cc,	// (0x00088e38) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0008fa9b) smil_status_volume_pane_g_ParamLimits

0x0888,	// (0x00080cf4) bg_popup_window_pane_cp07_ParamLimits

0x0896,	// (0x00080d02) blid_firmament_pane

0x90d6,	// (0x00089542) aid_size_cell_gallery_ParamLimits

0x90d6,	// (0x00089542) aid_size_cell_gallery

0x90e4,	// (0x00089550) grid_gallery_pane_ParamLimits

0x90e4,	// (0x00089550) grid_gallery_pane

0x90f4,	// (0x00089560) cell_gallery_pane_ParamLimits

0x90f4,	// (0x00089560) cell_gallery_pane

0x09bf,	// (0x00080e2b) bg_cell_gallery_focus_pane_ParamLimits

0x09bf,	// (0x00080e2b) bg_cell_gallery_focus_pane

0x09d1,	// (0x00080e3d) cell_gallery_pane_g1_ParamLimits

0x09d1,	// (0x00080e3d) cell_gallery_pane_g1

0x9142,	// (0x000895ae) cell_gallery_pane_g2_ParamLimits

0x9142,	// (0x000895ae) cell_gallery_pane_g2

0x914f,	// (0x000895bb) cell_gallery_pane_g3_ParamLimits

0x914f,	// (0x000895bb) cell_gallery_pane_g3

0x09dd,	// (0x00080e49) cell_gallery_pane_g4_ParamLimits

0x09dd,	// (0x00080e49) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0008fb49) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0008fb49) cell_gallery_pane_g

0x09e9,	// (0x00080e55) bg_cell_gallery_focus_pane_g1

0x09f1,	// (0x00080e5d) bg_cell_gallery_focus_pane_g2

0x09f9,	// (0x00080e65) bg_cell_gallery_focus_pane_g3

0x0a01,	// (0x00080e6d) bg_cell_gallery_focus_pane_g4

0x0a09,	// (0x00080e75) bg_cell_gallery_focus_pane_g5

0x0a11,	// (0x00080e7d) bg_cell_gallery_focus_pane_g6

0x0a19,	// (0x00080e85) bg_cell_gallery_focus_pane_g7

0x0a21,	// (0x00080e8d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0008fb52) bg_cell_gallery_focus_pane_g

0x0a29,	// (0x00080e95) aid_firma_cardinal

0x0a3d,	// (0x00080ea9) blid_firmament_pane_t1

0x0a54,	// (0x00080ec0) blid_firmament_pane_t2

0x0a6b,	// (0x00080ed7) blid_firmament_pane_t3

0x0a82,	// (0x00080eee) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0008fb63) blid_firmament_pane_t

0x0a99,	// (0x00080f05) blid_sat_info_pane

0x0aa9,	// (0x00080f15) blid_sat_info_pane_g1

0x0aa9,	// (0x00080f15) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0008fb6c) blid_sat_info_pane_g

0x0ab3,	// (0x00080f1f) blid_sat_info_pane_t1

0x0ac1,	// (0x00080f2d) smil2_volume_content_pane

0x0aca,	// (0x00080f36) smil2_volume_pane_g1

0x0ad2,	// (0x00080f3e) smil2_volume_content_pane_g1

0x0adb,	// (0x00080f47) smil2_volume_content_pane_g2

0x0ae4,	// (0x00080f50) smil2_volume_content_pane_g3

0x0aed,	// (0x00080f59) smil2_volume_content_pane_g4

0x0af6,	// (0x00080f62) smil2_volume_content_pane_g5

0x0aff,	// (0x00080f6b) smil2_volume_content_pane_g6

0x0b08,	// (0x00080f74) smil2_volume_content_pane_g7

0x0b11,	// (0x00080f7d) smil2_volume_content_pane_g8

0x0b1a,	// (0x00080f86) smil2_volume_content_pane_g9

0x0b23,	// (0x00080f8f) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0008fb71) smil2_volume_content_pane_g

0x600c,	// (0x00086478) cale_week_day_heading_pane_t1_ParamLimits

0x6039,	// (0x000864a5) cale_week_day_heading_pane_t2_ParamLimits

0x6066,	// (0x000864d2) cale_week_day_heading_pane_t3_ParamLimits

0x6093,	// (0x000864ff) cale_week_day_heading_pane_t4_ParamLimits

0x60c0,	// (0x0008652c) cale_week_day_heading_pane_t5_ParamLimits

0x60ed,	// (0x00086559) cale_week_day_heading_pane_t6_ParamLimits

0x611a,	// (0x00086586) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0008f65d) cale_week_day_heading_pane_t_ParamLimits

0x404f,	// (0x000844bb) bg_cale_side_pane_ParamLimits

0x6147,	// (0x000865b3) cale_week_time_pane_t1_ParamLimits

0x6173,	// (0x000865df) cale_week_time_pane_t2_ParamLimits

0x619f,	// (0x0008660b) cale_week_time_pane_t3_ParamLimits

0x61cb,	// (0x00086637) cale_week_time_pane_t4_ParamLimits

0x61f7,	// (0x00086663) cale_week_time_pane_t5_ParamLimits

0x6223,	// (0x0008668f) cale_week_time_pane_t6_ParamLimits

0x624f,	// (0x000866bb) cale_week_time_pane_t7_ParamLimits

0x627b,	// (0x000866e7) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0008f66c) cale_week_time_pane_t_ParamLimits

0x62a7,	// (0x00086713) cell_cale_week_pane_g2_ParamLimits

0x404f,	// (0x000844bb) bg_cale_side_pane_cp01_ParamLimits

0x7219,	// (0x00087685) cale_month_week_pane_t1_ParamLimits

0x7244,	// (0x000876b0) cale_month_week_pane_t2_ParamLimits

0x726f,	// (0x000876db) cale_month_week_pane_t3_ParamLimits

0x729a,	// (0x00087706) cale_month_week_pane_t4_ParamLimits

0x72c5,	// (0x00087731) cale_month_week_pane_t5_ParamLimits

0x72f0,	// (0x0008775c) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0008f745) cale_month_week_pane_t_ParamLimits

0x73e9,	// (0x00087855) cell_cale_month_pane_g1_ParamLimits

0x0206,	// (0x00080672) main_cale_event_viewer_pane

0x0206,	// (0x00080672) listscroll_cale_event_viewer_pane

0x0b2c,	// (0x00080f98) list_cale_ev_pane

0x0b34,	// (0x00080fa0) scroll_pane_cp023

0x915c,	// (0x000895c8) field_cale_ev_pane_ParamLimits

0x915c,	// (0x000895c8) field_cale_ev_pane

0x0b40,	// (0x00080fac) field_cale_ev_content_pane_ParamLimits

0x0b40,	// (0x00080fac) field_cale_ev_content_pane

0x0b4c,	// (0x00080fb8) field_cale_ev_pane_g1_ParamLimits

0x0b4c,	// (0x00080fb8) field_cale_ev_pane_g1

0x0b58,	// (0x00080fc4) field_cale_ev_pane_g2_ParamLimits

0x0b58,	// (0x00080fc4) field_cale_ev_pane_g2

0x0b70,	// (0x00080fdc) field_cale_ev_pane_g3_ParamLimits

0x0b70,	// (0x00080fdc) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0008fb86) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0008fb86) field_cale_ev_pane_g

0x0b88,	// (0x00080ff4) field_cale_ev_pane_t1_ParamLimits

0x0b88,	// (0x00080ff4) field_cale_ev_pane_t1

0x9180,	// (0x000895ec) field_cale_ev_content_pane_t1_ParamLimits

0x9180,	// (0x000895ec) field_cale_ev_content_pane_t1

0xdcf7,	// (0x0008e163) bg_button_pane_cp01

0x3efd,	// (0x00084369) listscroll_cale_week_pane_ParamLimits

0x5e2c,	// (0x00086298) popup_toolbar_window_cp01

0x403d,	// (0x000844a9) listscroll_cale_week_pane_t1_ParamLimits

0x3efd,	// (0x00084369) listscroll_cale_day_pane_ParamLimits

0x5e2c,	// (0x00086298) popup_toolbar_window_cp02

0x403d,	// (0x000844a9) listscroll_cale_day_pane_t1_ParamLimits

0x3efd,	// (0x00084369) main_cale_month_pane_ParamLimits

0x88c9,	// (0x00088d35) popup_toolbar_window_cp03_ParamLimits

0x88c9,	// (0x00088d35) popup_toolbar_window_cp03

0x8222,	// (0x0008868e) main_image_pane_g2_ParamLimits

0x8222,	// (0x0008868e) main_image_pane_g2

0x822e,	// (0x0008869a) main_image_pane_g3_ParamLimits

0x822e,	// (0x0008869a) main_image_pane_g3

0x0002,

0xf50b,	// (0x0008f977) main_image_pane_g_ParamLimits

0xf50b,	// (0x0008f977) main_image_pane_g

0xde11,	// (0x0008e27d) main_image_pane_t1_ParamLimits

0x823a,	// (0x000886a6) main_image_pane_t2_ParamLimits

0x823a,	// (0x000886a6) main_image_pane_t2

0x824c,	// (0x000886b8) main_image_pane_t3_ParamLimits

0x824c,	// (0x000886b8) main_image_pane_t3

0x825e,	// (0x000886ca) main_image_pane_t4_ParamLimits

0x825e,	// (0x000886ca) main_image_pane_t4

0x0003,

0xf512,	// (0x0008f97e) main_image_pane_t_ParamLimits

0xf512,	// (0x0008f97e) main_image_pane_t

0x8270,	// (0x000886dc) popup_image_details_window_cp01

0x827a,	// (0x000886e6) popup_toobar_trans_pane_cp01_ParamLimits

0x827a,	// (0x000886e6) popup_toobar_trans_pane_cp01

0x883a,	// (0x00088ca6) popup_image_details_window_ParamLimits

0x883a,	// (0x00088ca6) popup_image_details_window

0xefb9,	// (0x0008f425) popup_image_focus_window

0x8b3a,	// (0x00088fa6) camera2_autofocus_pane_ParamLimits

0x8b3a,	// (0x00088fa6) camera2_autofocus_pane

0x0206,	// (0x00080672) bg_popup_sub_pane_cp06

0x0b9f,	// (0x0008100b) popup_image_focus_window_g1

0x0ba7,	// (0x00081013) popup_image_focus_window_g2

0x0baf,	// (0x0008101b) popup_image_focus_window_g3

0x0bb7,	// (0x00081023) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0008fb8d) popup_image_focus_window_g

0x0bbf,	// (0x0008102b) popup_image_focus_window_t1

0x0bcd,	// (0x00081039) popup_image_focus_window_t2

0x0bdd,	// (0x00081049) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0008fb96) popup_image_focus_window_t

0x0beb,	// (0x00081057) camera2_autofocus_pane_g1

0x027f,	// (0x000806eb) bg_tb_trans_pane_cp01

0x0bf9,	// (0x00081065) popup_image_details_window_g1

0x0c0c,	// (0x00081078) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0008fba8) popup_image_details_window_g

0x0c35,	// (0x000810a1) popup_image_details_window_t1

0x0c47,	// (0x000810b3) popup_image_details_window_t2

0x0c60,	// (0x000810cc) popup_image_details_window_t3

0x0c74,	// (0x000810e0) popup_image_details_window_t4

0x0c8f,	// (0x000810fb) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0008fbaf) popup_image_details_window_t

0x3ee9,	// (0x00084355) bg_calc_paper_pane_ParamLimits

0x5bdb,	// (0x00086047) grid_highlight_pane_cp013

0x5be5,	// (0x00086051) list_calc_pane_ParamLimits

0x5bf7,	// (0x00086063) scroll_pane_cp024

0x3efd,	// (0x00084369) bg_calc_display_pane_ParamLimits

0x5bff,	// (0x0008606b) calc_display_pane_t1_ParamLimits

0x5c14,	// (0x00086080) calc_display_pane_t2_ParamLimits

0x5c29,	// (0x00086095) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0008f5df) calc_display_pane_t_ParamLimits

0x5cfc,	// (0x00086168) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0008f5fc) cell_calc_pane_g

0x5d05,	// (0x00086171) cell_calc_pane_t1

0x3f5c,	// (0x000843c8) grid_highlight_pane_cp02_ParamLimits

0x3f72,	// (0x000843de) toolbar_button_pane_cp01_ParamLimits

0x3f72,	// (0x000843de) toolbar_button_pane_cp01

0xde56,	// (0x0008e2c2) temp_image_control_pane_ParamLimits

0xde56,	// (0x0008e2c2) temp_image_control_pane

0x027f,	// (0x000806eb) main_mp3_pane

0x0ca9,	// (0x00081115) temp_image_control_pane_g1_ParamLimits

0x0ca9,	// (0x00081115) temp_image_control_pane_g1

0x0cb7,	// (0x00081123) temp_image_control_pane_g2_ParamLimits

0x0cb7,	// (0x00081123) temp_image_control_pane_g2

0x0cc9,	// (0x00081135) temp_image_control_pane_g3_ParamLimits

0x0cc9,	// (0x00081135) temp_image_control_pane_g3

0x91ce,	// (0x0008963a) temp_image_control_pane_g4_ParamLimits

0x91ce,	// (0x0008963a) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0008fbba) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0008fbba) temp_image_control_pane_g

0x0ca9,	// (0x00081115) main_mp3_pane_g1

0x91df,	// (0x0008964b) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0008fbc3) main_mp3_pane_g

0x0d0c,	// (0x00081178) main_mp3_pane_t1

0x40b4,	// (0x00084520) main_camera_pane_g8_ParamLimits

0x40b4,	// (0x00084520) main_camera_pane_g8

0x6553,	// (0x000869bf) main_video_pane_g7_ParamLimits

0x6553,	// (0x000869bf) main_video_pane_g7

0x8c7d,	// (0x000890e9) main_camera2_pane_t7_ParamLimits

0x8c7d,	// (0x000890e9) main_camera2_pane_t7

0x41fe,	// (0x0008466a) scroll_pane_cp025_ParamLimits

0x41fe,	// (0x0008466a) scroll_pane_cp025

0x4212,	// (0x0008467e) scroll_pane_cp026_ParamLimits

0x4212,	// (0x0008467e) scroll_pane_cp026

0x4221,	// (0x0008468d) wml_content_pane_ParamLimits

0x0206,	// (0x00080672) main_touch_calib_pane

0x9283,	// (0x000896ef) main_touch_calib_pane_g1

0x928f,	// (0x000896fb) main_touch_calib_pane_g2

0x929b,	// (0x00089707) main_touch_calib_pane_g3

0x92a7,	// (0x00089713) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0008fbe1) main_touch_calib_pane_g

0x92b3,	// (0x0008971f) main_touch_calib_pane_t1

0x92ca,	// (0x00089736) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0008fbea) main_touch_calib_pane_t

0xdacd,	// (0x0008df39) mup_progress_pane_cp02

0xdaec,	// (0x0008df58) navi_pane_g1

0xdb4e,	// (0x0008dfba) navi_pane_mp_t3

0x027f,	// (0x000806eb) main_mp3_pane_ParamLimits

0x890b,	// (0x00088d77) navi_pane_ParamLimits

0x0ca9,	// (0x00081115) main_mp3_pane_g1_ParamLimits

0x91df,	// (0x0008964b) main_mp3_pane_g2_ParamLimits

0x91eb,	// (0x00089657) main_mp3_pane_g3_ParamLimits

0x91eb,	// (0x00089657) main_mp3_pane_g3

0x91f7,	// (0x00089663) main_mp3_pane_g4_ParamLimits

0x91f7,	// (0x00089663) main_mp3_pane_g4

0x0cd9,	// (0x00081145) main_mp3_pane_g5_ParamLimits

0x0cd9,	// (0x00081145) main_mp3_pane_g5

0x0ce7,	// (0x00081153) main_mp3_pane_g6_ParamLimits

0x0ce7,	// (0x00081153) main_mp3_pane_g6

0x0cf4,	// (0x00081160) main_mp3_pane_g7_ParamLimits

0x0cf4,	// (0x00081160) main_mp3_pane_g7

0x0d00,	// (0x0008116c) main_mp3_pane_g8_ParamLimits

0x0d00,	// (0x0008116c) main_mp3_pane_g8

0xf757,	// (0x0008fbc3) main_mp3_pane_g_ParamLimits

0x9203,	// (0x0008966f) main_mp3_pane_t2

0x9213,	// (0x0008967f) main_mp3_pane_t3

0x0d1a,	// (0x00081186) main_mp3_pane_t4

0x0d28,	// (0x00081194) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0008fbd4) main_mp3_pane_t

0x0d36,	// (0x000811a2) mup_progress_pane_cp01

0x0234,	// (0x000806a0) aid_zoom_text_secondary2

0x0b2c,	// (0x00080f98) list_cale_ev2_pane

0x0b34,	// (0x00080fa0) scroll_pane_cp023_ParamLimits

0x9321,	// (0x0008978d) field_cale_ev2_pane_ParamLimits

0x9321,	// (0x0008978d) field_cale_ev2_pane

0x0d3e,	// (0x000811aa) field_cale_ev2_pane_g1_ParamLimits

0x0d3e,	// (0x000811aa) field_cale_ev2_pane_g1

0x0d4a,	// (0x000811b6) field_cale_ev2_pane_g2_ParamLimits

0x0d4a,	// (0x000811b6) field_cale_ev2_pane_g2

0x0d62,	// (0x000811ce) field_cale_ev2_pane_g3_ParamLimits

0x0d62,	// (0x000811ce) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0008fbf5) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0008fbf5) field_cale_ev2_pane_g

0x0d86,	// (0x000811f2) field_cale_ev2_pane_t1_ParamLimits

0x0d86,	// (0x000811f2) field_cale_ev2_pane_t1

0x0d9d,	// (0x00081209) field_cale_ev2_pane_t2_ParamLimits

0x0d9d,	// (0x00081209) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0008fbfe) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0008fbfe) field_cale_ev2_pane_t

0x80fe,	// (0x0008856a) main_postcard_pane_g5_ParamLimits

0x80fe,	// (0x0008856a) main_postcard_pane_g5

0x810c,	// (0x00088578) main_postcard_pane_g6_ParamLimits

0x810c,	// (0x00088578) main_postcard_pane_g6

0x6391,	// (0x000867fd) camera2_autofocus_pane_cp_ParamLimits

0x6391,	// (0x000867fd) camera2_autofocus_pane_cp

0x027f,	// (0x000806eb) main_mup3_pane

0x935f,	// (0x000897cb) main_mup3_pane_g1_ParamLimits

0x935f,	// (0x000897cb) main_mup3_pane_g1

0x9380,	// (0x000897ec) main_mup3_pane_g2_ParamLimits

0x9380,	// (0x000897ec) main_mup3_pane_g2

0x93fc,	// (0x00089868) main_mup3_pane_g3_ParamLimits

0x93fc,	// (0x00089868) main_mup3_pane_g3

0x943d,	// (0x000898a9) main_mup3_pane_g4_ParamLimits

0x943d,	// (0x000898a9) main_mup3_pane_g4

0x947e,	// (0x000898ea) main_mup3_pane_g5_ParamLimits

0x947e,	// (0x000898ea) main_mup3_pane_g5

0x94bf,	// (0x0008992b) main_mup3_pane_g6_ParamLimits

0x94bf,	// (0x0008992b) main_mup3_pane_g6

0x0db2,	// (0x0008121e) main_mup3_pane_g7_ParamLimits

0x0db2,	// (0x0008121e) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0008fc0e) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0008fc0e) main_mup3_pane_g

0x9531,	// (0x0008999d) main_mup3_pane_t1_ParamLimits

0x9531,	// (0x0008999d) main_mup3_pane_t1

0x95a4,	// (0x00089a10) main_mup3_pane_t2_ParamLimits

0x95a4,	// (0x00089a10) main_mup3_pane_t2

0x9671,	// (0x00089add) main_mup3_pane_t4_ParamLimits

0x9671,	// (0x00089add) main_mup3_pane_t4

0x96c5,	// (0x00089b31) main_mup3_pane_t5_ParamLimits

0x96c5,	// (0x00089b31) main_mup3_pane_t5

0x9771,	// (0x00089bdd) main_mup3_pane_t6_ParamLimits

0x9771,	// (0x00089bdd) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0008fc1f) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0008fc1f) main_mup3_pane_t

0x9819,	// (0x00089c85) mup3_progress_pane_ParamLimits

0x9819,	// (0x00089c85) mup3_progress_pane

0x9884,	// (0x00089cf0) popup_mup3_control_window_ParamLimits

0x9884,	// (0x00089cf0) popup_mup3_control_window

0x0dc0,	// (0x0008122c) popup_mup3_text_window

0x98a1,	// (0x00089d0d) mup3_progress_pane_t1

0x98b8,	// (0x00089d24) mup3_progress_pane_t2

0x0dc8,	// (0x00081234) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0008fc2c) mup3_progress_pane_t

0x0ddf,	// (0x0008124b) mup_progress_pane_cp03

0x0206,	// (0x00080672) bg_tb_trans_pane_cp04

0x98cf,	// (0x00089d3b) mup3_volume_pane

0x98d7,	// (0x00089d43) popup_mup3_control_window_g1

0x1c40,	// (0x000820ac) mup3_volume_pane_g1

0x1c49,	// (0x000820b5) mup3_volume_pane_g2

0x1c52,	// (0x000820be) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0008fc33) mup3_volume_pane_g

0x0206,	// (0x00080672) bg_tb_trans_pane_cp03

0x0def,	// (0x0008125b) popup_mup3_text_window_g1

0x0df7,	// (0x00081263) popup_mup3_text_window_t1

0x3f45,	// (0x000843b1) list_calc_item_pane_g1_ParamLimits

0x07b2,	// (0x00080c1e) mup_volume_pane_cp_g1

0x92e1,	// (0x0008974d) main_touch_calib_pane_t3

0x92f5,	// (0x00089761) main_touch_calib_pane_t4

0x930b,	// (0x00089777) main_touch_calib_pane_t5

0x0210,	// (0x0008067c) aid_cell_size_toolbar2

0x0218,	// (0x00080684) aid_popup3_width_pane

0x0224,	// (0x00080690) aid_zoom_text_msg_primary

0x6364,	// (0x000867d0) vorec_t7

0x3f09,	// (0x00084375) bg_calc_paper_pane_g1_ParamLimits

0x3f21,	// (0x0008438d) bg_calc_paper_pane_g2_ParamLimits

0x3f15,	// (0x00084381) bg_calc_paper_pane_g3_ParamLimits

0x3f39,	// (0x000843a5) bg_calc_paper_pane_g4_ParamLimits

0x3f2d,	// (0x00084399) bg_calc_paper_pane_g5_ParamLimits

0x5c6a,	// (0x000860d6) bg_calc_paper_pane_g6_ParamLimits

0x5c7b,	// (0x000860e7) bg_calc_paper_pane_g7_ParamLimits

0x5c8c,	// (0x000860f8) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0008f5e6) bg_calc_paper_pane_g_ParamLimits

0x5c9d,	// (0x00086109) calc_bg_paper_pane_g9_ParamLimits

0x6482,	// (0x000868ee) image_qvga_pane_ParamLimits

0x6482,	// (0x000868ee) image_qvga_pane

0x3e32,	// (0x0008429e) bg_popup_sub_pane_cp04_ParamLimits

0xdd8d,	// (0x0008e1f9) popup_mup_playback_window_g1_ParamLimits

0xdd99,	// (0x0008e205) popup_mup_playback_window_t1_ParamLimits

0xddae,	// (0x0008e21a) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0008f972) popup_mup_playback_window_t_ParamLimits

0x8dac,	// (0x00089218) main_mup2_pane_g3_ParamLimits

0x8dac,	// (0x00089218) main_mup2_pane_g3

0x6787,	// (0x00086bf3) popup_toolbar_window_cp04

0xe1a9,	// (0x0008e615) popup_call2_audio_second_window_g3_ParamLimits

0xe1a9,	// (0x0008e615) popup_call2_audio_second_window_g3

0xe5b3,	// (0x0008ea1f) popup_call2_audio_first_window_g4_ParamLimits

0xe5b3,	// (0x0008ea1f) popup_call2_audio_first_window_g4

0xec32,	// (0x0008f09e) popup_call2_audio_in_window_g4_ParamLimits

0xec32,	// (0x0008f09e) popup_call2_audio_in_window_g4

0x8215,	// (0x00088681) aid_area_sk_bg_cut_ParamLimits

0x8215,	// (0x00088681) aid_area_sk_bg_cut

0xddc3,	// (0x0008e22f) aid_area_sk_bg_cut_2_ParamLimits

0xddc3,	// (0x0008e22f) aid_area_sk_bg_cut_2

0x9132,	// (0x0008959e) aid_placing_details_win

0x913a,	// (0x000895a6) aid_placing_details_win_2

0x0beb,	// (0x00081057) camera2_autofocus_pane_g1_ParamLimits

0x584c,	// (0x00085cb8) popup_fixed_preview_cale_window_ParamLimits

0x584c,	// (0x00085cb8) popup_fixed_preview_cale_window

0xdb9d,	// (0x0008e009) navi_slider_pane_g3

0xdba6,	// (0x0008e012) navi_slider_pane_g4

0xdbaf,	// (0x0008e01b) navi_slider_pane_g5

0xdb9d,	// (0x0008e009) navi_slider_pane_g6

0x7a38,	// (0x00087ea4) navi_slider_pane_g7

0xdcc4,	// (0x0008e130) mup_scale_pane_g3

0xdccd,	// (0x0008e139) mup_scale_pane_g4

0xdcd6,	// (0x0008e142) mup_scale_pane_g5

0x7eb3,	// (0x0008831f) mup_scale_pane_g6

0x7ebc,	// (0x00088328) mup_scale_pane_g7

0xdb9d,	// (0x0008e009) cams2_slider_pane_g3

0x0867,	// (0x00080cd3) cams2_slider_pane_g4

0x908a,	// (0x000894f6) cams2_slider_pane_g5

0xdb9d,	// (0x0008e009) cams2_slider_pane_g6

0x9092,	// (0x000894fe) cams2_slider_pane_g7

0x0aa9,	// (0x00080f15) camera2_autofocus_pane_cp_g1

0x0e05,	// (0x00081271) bg_popup_preview_window_pane_cp02_ParamLimits

0x0e05,	// (0x00081271) bg_popup_preview_window_pane_cp02

0x0e11,	// (0x0008127d) list_fp_cale_pane_ParamLimits

0x0e11,	// (0x0008127d) list_fp_cale_pane

0x0e1d,	// (0x00081289) popup_fixed_preview_cale_window_t1_ParamLimits

0x0e1d,	// (0x00081289) popup_fixed_preview_cale_window_t1

0x98e0,	// (0x00089d4c) popup_fixed_preview_cale_window_t2_ParamLimits

0x98e0,	// (0x00089d4c) popup_fixed_preview_cale_window_t2

0x98f5,	// (0x00089d61) popup_fixed_preview_cale_window_t3_ParamLimits

0x98f5,	// (0x00089d61) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0008fc3a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0008fc3a) popup_fixed_preview_cale_window_t

0x990a,	// (0x00089d76) list_single_fp_cale_pane_ParamLimits

0x990a,	// (0x00089d76) list_single_fp_cale_pane

0x0e53,	// (0x000812bf) list_single_fp_cale_pane_g1_ParamLimits

0x0e53,	// (0x000812bf) list_single_fp_cale_pane_g1

0x0e5f,	// (0x000812cb) list_single_fp_cale_pane_g2_ParamLimits

0x0e5f,	// (0x000812cb) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0008fc41) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0008fc41) list_single_fp_cale_pane_g

0x0e78,	// (0x000812e4) list_single_fp_cale_pane_t1_ParamLimits

0x0e78,	// (0x000812e4) list_single_fp_cale_pane_t1

0x0e8a,	// (0x000812f6) list_single_fp_cale_pane_t2_ParamLimits

0x0e8a,	// (0x000812f6) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0008fc48) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0008fc48) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0206,	// (0x00080672) main_dialer_pane

0x991a,	// (0x00089d86) aid_cell_size_keypad

0x9924,	// (0x00089d90) dialer_ne_pane

0x992e,	// (0x00089d9a) grid_dialer_command_1_pane

0x9936,	// (0x00089da2) grid_dialer_command_2_pane

0x993e,	// (0x00089daa) grid_dialer_keypad_pane

0x9952,	// (0x00089dbe) bg_popup_call_pane_cp06_ParamLimits

0x9952,	// (0x00089dbe) bg_popup_call_pane_cp06

0x995e,	// (0x00089dca) dialer_ne_clear_pane_ParamLimits

0x995e,	// (0x00089dca) dialer_ne_clear_pane

0x0ebd,	// (0x00081329) dialer_ne_pane_g1

0x0ec5,	// (0x00081331) dialer_ne_pane_t1_ParamLimits

0x0ec5,	// (0x00081331) dialer_ne_pane_t1

0x996a,	// (0x00089dd6) dialer_ne_pane_t2_ParamLimits

0x996a,	// (0x00089dd6) dialer_ne_pane_t2

0x9987,	// (0x00089df3) dialer_ne_pane_t3_ParamLimits

0x9987,	// (0x00089df3) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0008fc4d) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0008fc4d) dialer_ne_pane_t

0x99ab,	// (0x00089e17) dialer_ne_pane_t3_copy1_ParamLimits

0x99ab,	// (0x00089e17) dialer_ne_pane_t3_copy1

0x99cf,	// (0x00089e3b) cell_dialer_keypad_pane_ParamLimits

0x99cf,	// (0x00089e3b) cell_dialer_keypad_pane

0x99e6,	// (0x00089e52) cell_dialer_command_1_pane_ParamLimits

0x99e6,	// (0x00089e52) cell_dialer_command_1_pane

0x99fc,	// (0x00089e68) cell_dialer_command_2_pane_ParamLimits

0x99fc,	// (0x00089e68) cell_dialer_command_2_pane

0x0ed7,	// (0x00081343) bg_button_pane_cp02_ParamLimits

0x0ed7,	// (0x00081343) bg_button_pane_cp02

0x9a0b,	// (0x00089e77) cell_dialer_keypad_pane_g1_ParamLimits

0x9a0b,	// (0x00089e77) cell_dialer_keypad_pane_g1

0x0ed7,	// (0x00081343) bg_button_pane_cp03_ParamLimits

0x0ed7,	// (0x00081343) bg_button_pane_cp03

0x9a1f,	// (0x00089e8b) cell_dialer_command_1_pane_g1_ParamLimits

0x9a1f,	// (0x00089e8b) cell_dialer_command_1_pane_g1

0x0ee3,	// (0x0008134f) bg_button_pane_cp04

0x9a33,	// (0x00089e9f) cell_dialer_command_2_pane_g1

0xdb8c,	// (0x0008dff8) bg_button_pane_cp06

0x0eeb,	// (0x00081357) dialer_ne_clear_pane_g1

0x797b,	// (0x00087de7) navi_pane_g2

0x79a9,	// (0x00087e15) navi_pane_g3

0x0002,

0xf409,	// (0x0008f875) navi_pane_g

0x79d4,	// (0x00087e40) navi_pane_mv_g2

0x79fb,	// (0x00087e67) navi_pane_mv_g5

0x7a03,	// (0x00087e6f) navi_pane_mv_t1

0x3efd,	// (0x00084369) main_clock2_pane

0x9a69,	// (0x00089ed5) main_clock2_list_pane_ParamLimits

0x9a69,	// (0x00089ed5) main_clock2_list_pane

0x9a93,	// (0x00089eff) main_clock2_pane_t1_ParamLimits

0x9a93,	// (0x00089eff) main_clock2_pane_t1

0x9ac1,	// (0x00089f2d) main_clock2_pane_t2_ParamLimits

0x9ac1,	// (0x00089f2d) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0008fc54) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0008fc54) main_clock2_pane_t

0x9b2a,	// (0x00089f96) popup_clock_analogue_window_cp03_ParamLimits

0x9b2a,	// (0x00089f96) popup_clock_analogue_window_cp03

0x9b4a,	// (0x00089fb6) popup_clock_digital_window_cp02_ParamLimits

0x9b4a,	// (0x00089fb6) popup_clock_digital_window_cp02

0x9bbb,	// (0x0008a027) main_clock2_list_single_pane_ParamLimits

0x9bbb,	// (0x0008a027) main_clock2_list_single_pane

0xdb8c,	// (0x0008dff8) list_highlight_pane_cp05

0x0ef3,	// (0x0008135f) main_clock2_list_single_pane_t1

0x6787,	// (0x00086bf3) popup_toolbar_window_cp04_ParamLimits

0x919e,	// (0x0008960a) camera2_autofocus_pane_g2_ParamLimits

0x919e,	// (0x0008960a) camera2_autofocus_pane_g2

0x91aa,	// (0x00089616) camera2_autofocus_pane_g3_ParamLimits

0x91aa,	// (0x00089616) camera2_autofocus_pane_g3

0x91b6,	// (0x00089622) camera2_autofocus_pane_g4_ParamLimits

0x91b6,	// (0x00089622) camera2_autofocus_pane_g4

0x91c2,	// (0x0008962e) camera2_autofocus_pane_g5_ParamLimits

0x91c2,	// (0x0008962e) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0008fb9d) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0008fb9d) camera2_autofocus_pane_g

0x933f,	// (0x000897ab) camera2_autofocus_pane_cp_g2

0x9347,	// (0x000897b3) camera2_autofocus_pane_cp_g3

0x934f,	// (0x000897bb) camera2_autofocus_pane_cp_g4

0x9357,	// (0x000897c3) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0008fc03) camera2_autofocus_pane_cp_g

0x994a,	// (0x00089db6) popup_dialer_spcha_window

0x0206,	// (0x00080672) bg_popup_sub_pane_cp07

0x0f01,	// (0x0008136d) list_spcha_pane

0x0f09,	// (0x00081375) list_single_spcha_pane_ParamLimits

0x0f09,	// (0x00081375) list_single_spcha_pane

0x0206,	// (0x00080672) list_highlight_pane_cp06

0x0f1a,	// (0x00081386) list_single_spcha_pane_t1

0xe9dc,	// (0x0008ee48) popup_call2_audio_out_window_g4_ParamLimits

0xe9dc,	// (0x0008ee48) popup_call2_audio_out_window_g4

0x0206,	// (0x00080672) main_imed2_pane

0xefc3,	// (0x0008f42f) popup_imed_adjust2_window

0x8848,	// (0x00088cb4) popup_imed_trans_window_ParamLimits

0x8848,	// (0x00088cb4) popup_imed_trans_window

0x08e1,	// (0x00080d4d) popup_blid_sat_info2_window_t1

0x08ef,	// (0x00080d5b) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0008fb32) popup_blid_sat_info2_window_t

0x9c65,	// (0x0008a0d1) aid_size_cell_colour_35

0x9c7f,	// (0x0008a0eb) aid_size_cell_colour_112

0x9c96,	// (0x0008a102) aid_size_cell_effect

0x027f,	// (0x000806eb) bg_tb_trans_pane_cp02

0x4556,	// (0x000849c2) heading_imed_pane

0x9cb0,	// (0x0008a11c) listscroll_imed_pane

0x0f28,	// (0x00081394) heading_imed_pane_g1

0x0f30,	// (0x0008139c) heading_imed_pane_t1

0x0f3e,	// (0x000813aa) grid_imed_colour_35_pane_ParamLimits

0x0f3e,	// (0x000813aa) grid_imed_colour_35_pane

0x9cbc,	// (0x0008a128) grid_imed_effect_pane

0x0f5a,	// (0x000813c6) list_imed_aspect_pane

0x9ccc,	// (0x0008a138) scroll_pane_cp027_ParamLimits

0x9ccc,	// (0x0008a138) scroll_pane_cp027

0x9cd8,	// (0x0008a144) cell_imed_effect_pane_ParamLimits

0x9cd8,	// (0x0008a144) cell_imed_effect_pane

0x0f62,	// (0x000813ce) cell_imed_colour_pane_ParamLimits

0x0f62,	// (0x000813ce) cell_imed_colour_pane

0x0fac,	// (0x00081418) cell_imed_colour_pane_g1_ParamLimits

0x0fac,	// (0x00081418) cell_imed_colour_pane_g1

0x0fbd,	// (0x00081429) hgihlgiht_grid_pane_cp016_ParamLimits

0x0fbd,	// (0x00081429) hgihlgiht_grid_pane_cp016

0x9cf4,	// (0x0008a160) cell_imed_effect_pane_g1

0x9cfc,	// (0x0008a168) grid_highlight_pane_cp017

0x0fce,	// (0x0008143a) list_imed_single_pane_ParamLimits

0x0fce,	// (0x0008143a) list_imed_single_pane

0x0206,	// (0x00080672) list_highlight_pane_cp07

0x0fe2,	// (0x0008144e) list_imed_aspect_pane_comp1_t1

0xef97,	// (0x0008f403) bg_tb_trans_pane_cp05

0x1004,	// (0x00081470) popup_imed_adjust2_window_g1

0x102b,	// (0x00081497) popup_imed_adjust2_window_t1

0x1043,	// (0x000814af) slider_imed_adjust_pane

0x1057,	// (0x000814c3) slider_imed_adjust_pane_g1

0x1067,	// (0x000814d3) slider_imed_adjust_pane_g2

0x1077,	// (0x000814e3) slider_imed_adjust_pane_g3

0x1088,	// (0x000814f4) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0008fc71) slider_imed_adjust_pane_g

0x9d05,	// (0x0008a171) aid_size_cell_clipart2

0x9d11,	// (0x0008a17d) grid_imed_clipart_pane

0x1099,	// (0x00081505) scroll_pane_cp031

0x9d1b,	// (0x0008a187) cell_imed_clipart_pane_ParamLimits

0x9d1b,	// (0x0008a187) cell_imed_clipart_pane

0x9d39,	// (0x0008a1a5) cell_imed_clipart_pane_g1

0x0206,	// (0x00080672) grid_highlight_pane_cp014

0x9a75,	// (0x00089ee1) main_clock2_pane_g1_ParamLimits

0x9a75,	// (0x00089ee1) main_clock2_pane_g1

0x9b66,	// (0x00089fd2) aid_call2_pane_cp10

0x9b78,	// (0x00089fe4) aid_call_pane_cp10

0xdac1,	// (0x0008df2d) popup_clock_analogue_window_cp10_g1

0xdac1,	// (0x0008df2d) popup_clock_analogue_window_cp10_g2

0x9b8a,	// (0x00089ff6) popup_clock_analogue_window_cp10_g3

0x9b8a,	// (0x00089ff6) popup_clock_analogue_window_cp10_g4

0xdac1,	// (0x0008df2d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0008fc5f) popup_clock_analogue_window_cp10_g

0x9b9c,	// (0x0008a008) popup_clock_analogue_window_cp10_t1

0x9bcd,	// (0x0008a039) clock_digital_number_pane_cp10_ParamLimits

0x9bcd,	// (0x0008a039) clock_digital_number_pane_cp10

0x9be5,	// (0x0008a051) clock_digital_number_pane_cp11_ParamLimits

0x9be5,	// (0x0008a051) clock_digital_number_pane_cp11

0x9bfd,	// (0x0008a069) clock_digital_number_pane_cp12_ParamLimits

0x9bfd,	// (0x0008a069) clock_digital_number_pane_cp12

0x9c15,	// (0x0008a081) clock_digital_number_pane_cp13_ParamLimits

0x9c15,	// (0x0008a081) clock_digital_number_pane_cp13

0x9c2d,	// (0x0008a099) clock_digital_separator_pane_cp10_ParamLimits

0x9c2d,	// (0x0008a099) clock_digital_separator_pane_cp10

0x9c45,	// (0x0008a0b1) popup_clock_digital_window_cp02_t1_ParamLimits

0x9c45,	// (0x0008a0b1) popup_clock_digital_window_cp02_t1

0x3e2a,	// (0x00084296) clock_digital_number_pane_cp10_g1

0x3e2a,	// (0x00084296) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0008fc7a) clock_digital_number_pane_cp10_g

0x3e2a,	// (0x00084296) clock_digital_separator_pane_cp10_g1

0x3e2a,	// (0x00084296) clock_digital_separator_pane_g2_cp10

0xdb5c,	// (0x0008dfc8) navi_pane_vded_g4

0xdb65,	// (0x0008dfd1) navi_pane_vded_g5

0xdb6e,	// (0x0008dfda) navi_pane_vded_t1

0x0206,	// (0x00080672) main_vded_pane

0x9d42,	// (0x0008a1ae) main_vded_pane_g1

0x9d4e,	// (0x0008a1ba) main_vded_pane_g2

0x9d58,	// (0x0008a1c4) main_vded_pane_g3

0x0002,

0xf813,	// (0x0008fc7f) main_vded_pane_g

0x9d62,	// (0x0008a1ce) main_vded_pane_t1

0x9d70,	// (0x0008a1dc) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0008fc86) main_vded_pane_t

0x9d7e,	// (0x0008a1ea) vded_slider_pane

0x9d88,	// (0x0008a1f4) vded_video_pane

0x10a1,	// (0x0008150d) vded_video_pane_g1

0x9d94,	// (0x0008a200) vded_video_pane_g2

0x0aa9,	// (0x00080f15) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0008fc8b) vded_video_pane_g

0x10ab,	// (0x00081517) vded_slider_pane_g1

0x07b2,	// (0x00080c1e) vded_slider_pane_g2

0x10b4,	// (0x00081520) vded_slider_pane_g3

0x10bd,	// (0x00081529) vded_slider_pane_g4

0x10c6,	// (0x00081532) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0008fc92) vded_slider_pane_g

0x9878,	// (0x00089ce4) mup3_rocker_pane_ParamLimits

0x9878,	// (0x00089ce4) mup3_rocker_pane

0x9d9d,	// (0x0008a209) mup3_control_keys_pane_g1

0x9da5,	// (0x0008a211) mup3_control_keys_pane_g2

0x9dad,	// (0x0008a219) mup3_control_keys_pane_g3

0x9db5,	// (0x0008a221) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0008fc9d) mup3_control_keys_pane_g

0x586a,	// (0x00085cd6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x586a,	// (0x00085cd6) popup_toolbar2_fixed_window_cp01

0x9894,	// (0x00089d00) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9894,	// (0x00089d00) popup_toolbar2_fixed_window_cp02

0xe31b,	// (0x0008e787) popup_call2_audio_second_window_t4_ParamLimits

0xe31b,	// (0x0008e787) popup_call2_audio_second_window_t4

0xe849,	// (0x0008ecb5) popup_call2_audio_first_window_t6_ParamLimits

0xe849,	// (0x0008ecb5) popup_call2_audio_first_window_t6

0xeadf,	// (0x0008ef4b) popup_call2_audio_out_window_t6_ParamLimits

0xeadf,	// (0x0008ef4b) popup_call2_audio_out_window_t6

0x0206,	// (0x00080672) main_vitu_pane

0x9dc5,	// (0x0008a231) aid_size_cell_itu_ParamLimits

0x9dc5,	// (0x0008a231) aid_size_cell_itu

0x1514,	// (0x00081980) bg_popup_window_pane_cp08_ParamLimits

0x1514,	// (0x00081980) bg_popup_window_pane_cp08

0x9dd3,	// (0x0008a23f) field_vitu_entry_pane_ParamLimits

0x9dd3,	// (0x0008a23f) field_vitu_entry_pane

0x9de2,	// (0x0008a24e) grid_vitu_function_pane_ParamLimits

0x9de2,	// (0x0008a24e) grid_vitu_function_pane

0x9df2,	// (0x0008a25e) grid_vitu_itu_pane_ParamLimits

0x9df2,	// (0x0008a25e) grid_vitu_itu_pane

0x9e02,	// (0x0008a26e) cell_vitu_itu_pane_ParamLimits

0x9e02,	// (0x0008a26e) cell_vitu_itu_pane

0x9e19,	// (0x0008a285) cell_vitu_function_pane_ParamLimits

0x9e19,	// (0x0008a285) cell_vitu_function_pane

0x027f,	// (0x000806eb) bg_popup_sub_pane_cp08_ParamLimits

0x027f,	// (0x000806eb) bg_popup_sub_pane_cp08

0x9e2d,	// (0x0008a299) field_vitu_entry_pane_t1_ParamLimits

0x9e2d,	// (0x0008a299) field_vitu_entry_pane_t1

0x10e7,	// (0x00081553) field_vitu_entry_pane_t2_ParamLimits

0x10e7,	// (0x00081553) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0008fcab) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0008fcab) field_vitu_entry_pane_t

0x1104,	// (0x00081570) bg_button_pane_cp05_ParamLimits

0x1104,	// (0x00081570) bg_button_pane_cp05

0x9e47,	// (0x0008a2b3) cell_vitu_itu_pane_g1

0x9e5f,	// (0x0008a2cb) cell_vitu_itu_pane_t1_ParamLimits

0x9e5f,	// (0x0008a2cb) cell_vitu_itu_pane_t1

0x9e71,	// (0x0008a2dd) cell_vitu_itu_pane_t2_ParamLimits

0x9e71,	// (0x0008a2dd) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0008fcb0) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0008fcb0) cell_vitu_itu_pane_t

0x1112,	// (0x0008157e) bg_button_pane_cp07

0x9ea6,	// (0x0008a312) cell_vitu_function_pane_g1

0x5b06,	// (0x00085f72) main_calc_pane_g1

0x566b,	// (0x00085ad7) aid_visual_content_pane

0x0206,	// (0x00080672) main_vradio_pane

0x9eaf,	// (0x0008a31b) main_vradio_pane_g1_ParamLimits

0x9eaf,	// (0x0008a31b) main_vradio_pane_g1

0x111c,	// (0x00081588) main_vradio_pane_g2_ParamLimits

0x111c,	// (0x00081588) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0008fcb7) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0008fcb7) main_vradio_pane_g

0x9ebd,	// (0x0008a329) main_vradio_pane_t1_ParamLimits

0x9ebd,	// (0x0008a329) main_vradio_pane_t1

0x9ecf,	// (0x0008a33b) main_vradio_pane_t2_ParamLimits

0x9ecf,	// (0x0008a33b) main_vradio_pane_t2

0x1129,	// (0x00081595) main_vradio_pane_t3_ParamLimits

0x1129,	// (0x00081595) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0008fcbc) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0008fcbc) main_vradio_pane_t

0x9ee1,	// (0x0008a34d) vradio_rocker_control_pane_ParamLimits

0x9ee1,	// (0x0008a34d) vradio_rocker_control_pane

0x9eed,	// (0x0008a359) vradio_station_info_pane_ParamLimits

0x9eed,	// (0x0008a359) vradio_station_info_pane

0x113d,	// (0x000815a9) vradio_frequency_info_pane_ParamLimits

0x113d,	// (0x000815a9) vradio_frequency_info_pane

0x0aa9,	// (0x00080f15) vradio_station_info_pane_g1

0x114c,	// (0x000815b8) vradio_station_info_pane_t1_ParamLimits

0x114c,	// (0x000815b8) vradio_station_info_pane_t1

0x116e,	// (0x000815da) vradio_station_info_pane_t2_ParamLimits

0x116e,	// (0x000815da) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0008fcc3) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0008fcc3) vradio_station_info_pane_t

0x1180,	// (0x000815ec) vradio_tuning_pane

0x1188,	// (0x000815f4) vradio_rocker_control_pane_g1

0x1190,	// (0x000815fc) vradio_rocker_control_pane_g2

0x1198,	// (0x00081604) vradio_rocker_control_pane_g3

0x11a0,	// (0x0008160c) vradio_rocker_control_pane_g4

0x11a8,	// (0x00081614) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0008fcc8) vradio_rocker_control_pane_g

0x9efa,	// (0x0008a366) vradio_frequency_info_pane_g1

0x11b0,	// (0x0008161c) vradio_frequency_info_pane_t1_ParamLimits

0x11b0,	// (0x0008161c) vradio_frequency_info_pane_t1

0x9f04,	// (0x0008a370) vradio_tuning_pane_g1

0x9f0f,	// (0x0008a37b) vradio_tuning_pane_t1

0x023c,	// (0x000806a8) area_side_right_pane_ParamLimits

0x023c,	// (0x000806a8) area_side_right_pane

0xef5e,	// (0x0008f3ca) status_small_pane_g1

0xef66,	// (0x0008f3d2) status_small_pane_g2

0xef6f,	// (0x0008f3db) status_small_pane_g3

0xef78,	// (0x0008f3e4) status_small_pane_g4

0x0003,

0xf61c,	// (0x0008fa88) status_small_pane_g

0xef81,	// (0x0008f3ed) status_small_pane_t1

0x0206,	// (0x00080672) main_video3_pane

0x11c4,	// (0x00081630) cams_zoom_vslider_pane

0x11cc,	// (0x00081638) image3_wide_pane_ParamLimits

0x11cc,	// (0x00081638) image3_wide_pane

0x11e6,	// (0x00081652) image3_wide_small_pane

0x11f2,	// (0x0008165e) main_video3_pane_g1_ParamLimits

0x11f2,	// (0x0008165e) main_video3_pane_g1

0x120e,	// (0x0008167a) main_video3_pane_g2_ParamLimits

0x120e,	// (0x0008167a) main_video3_pane_g2

0x0001,

0xf867,	// (0x0008fcd3) main_video3_pane_g_ParamLimits

0xf867,	// (0x0008fcd3) main_video3_pane_g

0x122a,	// (0x00081696) main_video3_pane_t1_ParamLimits

0x122a,	// (0x00081696) main_video3_pane_t1

0x1255,	// (0x000816c1) main_video3_pane_t2_ParamLimits

0x1255,	// (0x000816c1) main_video3_pane_t2

0x1282,	// (0x000816ee) main_video3_pane_t3_ParamLimits

0x1282,	// (0x000816ee) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0008fcd8) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0008fcd8) main_video3_pane_t

0x12af,	// (0x0008171b) cams_zoom_vslider_pane_g1

0x12b8,	// (0x00081724) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0008fcdf) cams_zoom_vslider_pane_g

0x12c0,	// (0x0008172c) small_slider_vertical_pane

0x0aa9,	// (0x00080f15) small_slider_vertical_pane_g1

0x0aa9,	// (0x00080f15) small_slider_vertical_pane_g2

0x12c8,	// (0x00081734) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0008fce4) small_slider_vertical_pane_g

0x0206,	// (0x00080672) main_hwr_training_pane

0x12d1,	// (0x0008173d) hwr_training_instruct_pane_ParamLimits

0x12d1,	// (0x0008173d) hwr_training_instruct_pane

0x9f1e,	// (0x0008a38a) hwr_training_navi_pane_ParamLimits

0x9f1e,	// (0x0008a38a) hwr_training_navi_pane

0x9f38,	// (0x0008a3a4) hwr_training_write_pane_ParamLimits

0x9f38,	// (0x0008a3a4) hwr_training_write_pane

0x0206,	// (0x00080672) bg_frame_shadow_pane

0x1308,	// (0x00081774) hwr_training_write_pane_g1

0x1310,	// (0x0008177c) hwr_training_write_pane_g2

0x1318,	// (0x00081784) hwr_training_write_pane_g3

0x1320,	// (0x0008178c) hwr_training_write_pane_g4

0x1328,	// (0x00081794) hwr_training_write_pane_g5

0x1330,	// (0x0008179c) hwr_training_write_pane_g6

0x1338,	// (0x000817a4) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0008fceb) hwr_training_write_pane_g

0x9f70,	// (0x0008a3dc) hwr_training_navi_pane_g1_ParamLimits

0x9f70,	// (0x0008a3dc) hwr_training_navi_pane_g1

0x9f82,	// (0x0008a3ee) hwr_training_navi_pane_g2_ParamLimits

0x9f82,	// (0x0008a3ee) hwr_training_navi_pane_g2

0x9f94,	// (0x0008a400) hwr_training_navi_pane_g3_ParamLimits

0x9f94,	// (0x0008a400) hwr_training_navi_pane_g3

0x9fa4,	// (0x0008a410) hwr_training_navi_pane_g4_ParamLimits

0x9fa4,	// (0x0008a410) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0008fcfa) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0008fcfa) hwr_training_navi_pane_g

0x9fbe,	// (0x0008a42a) hwr_training_navi_pane_t1

0x9fcc,	// (0x0008a438) list_single_hwr_training_instruct_pane_ParamLimits

0x9fcc,	// (0x0008a438) list_single_hwr_training_instruct_pane

0x1340,	// (0x000817ac) list_single_hwr_training_instruct_pane_t1

0x09e9,	// (0x00080e55) bg_frame_shadow_pane_g1

0x134f,	// (0x000817bb) bg_frame_shadow_pane_g2

0x1357,	// (0x000817c3) bg_frame_shadow_pane_g3

0x135f,	// (0x000817cb) bg_frame_shadow_pane_g4

0x1367,	// (0x000817d3) bg_frame_shadow_pane_g5

0x136f,	// (0x000817db) bg_frame_shadow_pane_g6

0x1377,	// (0x000817e3) bg_frame_shadow_pane_g7

0x3fc8,	// (0x00084434) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0008fd05) bg_frame_shadow_pane_g

0x0206,	// (0x00080672) main_video_tele_dialer_pane

0x9feb,	// (0x0008a457) aid_size_cell_video_keypad_ParamLimits

0x9feb,	// (0x0008a457) aid_size_cell_video_keypad

0x9ffb,	// (0x0008a467) grid_video_dialer_keypad_pane_ParamLimits

0x9ffb,	// (0x0008a467) grid_video_dialer_keypad_pane

0xa02f,	// (0x0008a49b) video_down_pane_cp_ParamLimits

0xa02f,	// (0x0008a49b) video_down_pane_cp

0xa059,	// (0x0008a4c5) cell_video_dialer_keypad_pane_ParamLimits

0xa059,	// (0x0008a4c5) cell_video_dialer_keypad_pane

0x137f,	// (0x000817eb) bg_button_pane_cp08_ParamLimits

0x137f,	// (0x000817eb) bg_button_pane_cp08

0xa070,	// (0x0008a4dc) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa070,	// (0x0008a4dc) cell_video_dialer_keypad_pane_g1

0x986c,	// (0x00089cd8) mup3_rocker2_pane_ParamLimits

0x986c,	// (0x00089cd8) mup3_rocker2_pane

0x0aa9,	// (0x00080f15) mup3_rocker2_pane_g1

0x87ca,	// (0x00088c36) main_dialer2_pane

0x0206,	// (0x00080672) main_mp4_pane

0xa0b3,	// (0x0008a51f) main_mp4_pane_g1_ParamLimits

0xa0b3,	// (0x0008a51f) main_mp4_pane_g1

0xa0c1,	// (0x0008a52d) main_mp4_pane_g2_ParamLimits

0xa0c1,	// (0x0008a52d) main_mp4_pane_g2

0xa0cf,	// (0x0008a53b) main_mp4_pane_g3_ParamLimits

0xa0cf,	// (0x0008a53b) main_mp4_pane_g3

0xa122,	// (0x0008a58e) main_mp4_pane_g4_ParamLimits

0xa122,	// (0x0008a58e) main_mp4_pane_g4

0xa13c,	// (0x0008a5a8) main_mp4_pane_g5_ParamLimits

0xa13c,	// (0x0008a5a8) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0008fd25) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0008fd25) main_mp4_pane_g

0xa170,	// (0x0008a5dc) main_mp4_pane_t1_ParamLimits

0xa170,	// (0x0008a5dc) main_mp4_pane_t1

0xa1cc,	// (0x0008a638) main_mp4_pane_t2_ParamLimits

0xa1cc,	// (0x0008a638) main_mp4_pane_t2

0x138b,	// (0x000817f7) main_mp4_pane_t3_ParamLimits

0x138b,	// (0x000817f7) main_mp4_pane_t3

0xa21e,	// (0x0008a68a) main_mp4_pane_t4_ParamLimits

0xa21e,	// (0x0008a68a) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0008fd32) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0008fd32) main_mp4_pane_t

0xa25e,	// (0x0008a6ca) mp4_progress_pane_ParamLimits

0xa25e,	// (0x0008a6ca) mp4_progress_pane

0xa2a8,	// (0x0008a714) mp4_rocker_pane_ParamLimits

0xa2a8,	// (0x0008a714) mp4_rocker_pane

0x13b3,	// (0x0008181f) mp4_progress_pane_t1

0x13cc,	// (0x00081838) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0008fd3b) mp4_progress_pane_t

0x13e5,	// (0x00081851) mup_progress_pane_cp04

0x1cb7,	// (0x00082123) mp4_rocker_pane_g1

0xa2ca,	// (0x0008a736) aid_cell_size_keypad2_ParamLimits

0xa2ca,	// (0x0008a736) aid_cell_size_keypad2

0xa2da,	// (0x0008a746) dialer2_ne_pane_ParamLimits

0xa2da,	// (0x0008a746) dialer2_ne_pane

0xa2e6,	// (0x0008a752) grid_dialer2_keypad_pane_ParamLimits

0xa2e6,	// (0x0008a752) grid_dialer2_keypad_pane

0x1d12,	// (0x0008217e) bg_popup_call_pane_cp07_ParamLimits

0x1d12,	// (0x0008217e) bg_popup_call_pane_cp07

0xa2f4,	// (0x0008a760) dialer2_ne_pane_t1_ParamLimits

0xa2f4,	// (0x0008a760) dialer2_ne_pane_t1

0xa319,	// (0x0008a785) cell_dialer2_keypad_pane_ParamLimits

0xa319,	// (0x0008a785) cell_dialer2_keypad_pane

0x1403,	// (0x0008186f) bg_button_pane_pane_cp04_ParamLimits

0x1403,	// (0x0008186f) bg_button_pane_pane_cp04

0xa330,	// (0x0008a79c) cell_dialer2_keypad_pane_g1_ParamLimits

0xa330,	// (0x0008a79c) cell_dialer2_keypad_pane_g1

0x6659,	// (0x00086ac5) aid_placing_vt_set_content_ParamLimits

0x6659,	// (0x00086ac5) aid_placing_vt_set_content

0x6681,	// (0x00086aed) aid_placing_vt_set_title_ParamLimits

0x6681,	// (0x00086aed) aid_placing_vt_set_title

0x0206,	// (0x00080672) main_image3_pane

0xa3ca,	// (0x0008a836) area_side_right_pane_cp01_ParamLimits

0xa3ca,	// (0x0008a836) area_side_right_pane_cp01

0xa3f9,	// (0x0008a865) main_image3_pane_g1_ParamLimits

0xa3f9,	// (0x0008a865) main_image3_pane_g1

0xa407,	// (0x0008a873) main_image3_pane_g2_ParamLimits

0xa407,	// (0x0008a873) main_image3_pane_g2

0xa420,	// (0x0008a88c) main_image3_pane_g3_ParamLimits

0xa420,	// (0x0008a88c) main_image3_pane_g3

0xa439,	// (0x0008a8a5) main_image3_pane_g4_ParamLimits

0xa439,	// (0x0008a8a5) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0008fd4a) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0008fd4a) main_image3_pane_g

0xa452,	// (0x0008a8be) main_image3_pane_t1_ParamLimits

0xa452,	// (0x0008a8be) main_image3_pane_t1

0xa477,	// (0x0008a8e3) main_image3_pane_t2_ParamLimits

0xa477,	// (0x0008a8e3) main_image3_pane_t2

0xa496,	// (0x0008a902) main_image3_pane_t3_ParamLimits

0xa496,	// (0x0008a902) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0008fd53) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0008fd53) main_image3_pane_t

0x1514,	// (0x00081980) grid_sctrl_middle_pane_cp01_ParamLimits

0x1514,	// (0x00081980) grid_sctrl_middle_pane_cp01

0xa4f7,	// (0x0008a963) cell_sctrl_middle_pane_cp01_ParamLimits

0xa4f7,	// (0x0008a963) cell_sctrl_middle_pane_cp01

0xa508,	// (0x0008a974) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa508,	// (0x0008a974) cell_sctrl_middle_pane_cp01_g1

0x0206,	// (0x00080672) main_call4_pane

0xa515,	// (0x0008a981) aid_size_button_call4_ParamLimits

0xa515,	// (0x0008a981) aid_size_button_call4

0xa547,	// (0x0008a9b3) call4_windows_pane_ParamLimits

0xa547,	// (0x0008a9b3) call4_windows_pane

0xa563,	// (0x0008a9cf) grid_call4_button_pane_ParamLimits

0xa563,	// (0x0008a9cf) grid_call4_button_pane

0x140f,	// (0x0008187b) call4_windows_conf_pane

0x142a,	// (0x00081896) popup_call4_audio_first_window_ParamLimits

0x142a,	// (0x00081896) popup_call4_audio_first_window

0x1478,	// (0x000818e4) popup_call4_audio_second_window_ParamLimits

0x1478,	// (0x000818e4) popup_call4_audio_second_window

0x148e,	// (0x000818fa) popup_call4_audio_wait_window_ParamLimits

0x148e,	// (0x000818fa) popup_call4_audio_wait_window

0xa587,	// (0x0008a9f3) cell_call4_button_pane_ParamLimits

0xa587,	// (0x0008a9f3) cell_call4_button_pane

0xa5aa,	// (0x0008aa16) bg_button_pane_cp09_ParamLimits

0xa5aa,	// (0x0008aa16) bg_button_pane_cp09

0xa5b6,	// (0x0008aa22) cell_call4_button_pane_g1_ParamLimits

0xa5b6,	// (0x0008aa22) cell_call4_button_pane_g1

0xa5c3,	// (0x0008aa2f) cell_call4_button_pane_t1_ParamLimits

0xa5c3,	// (0x0008aa2f) cell_call4_button_pane_t1

0x14d6,	// (0x00081942) popup_call4_audio_conf_window_ParamLimits

0x14d6,	// (0x00081942) popup_call4_audio_conf_window

0x98a1,	// (0x00089d0d) mup3_progress_pane_t1_ParamLimits

0x98b8,	// (0x00089d24) mup3_progress_pane_t2_ParamLimits

0x0dc8,	// (0x00081234) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0008fc2c) mup3_progress_pane_t_ParamLimits

0x0ddf,	// (0x0008124b) mup_progress_pane_cp03_ParamLimits

0x9dbd,	// (0x0008a229) mup3_control_keys_pane_g4_copy1

0xa28c,	// (0x0008a6f8) mp4_rocker2_pane_ParamLimits

0xa28c,	// (0x0008a6f8) mp4_rocker2_pane

0x14f8,	// (0x00081964) mp4_rocker2_pane_g1

0x14f0,	// (0x0008195c) mp4_rocker2_pane_g2

0xa5d5,	// (0x0008aa41) mp4_rocker2_pane_g3

0xa5dd,	// (0x0008aa49) mp4_rocker2_pane_g4

0xa5e5,	// (0x0008aa51) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0008fd5c) mp4_rocker2_pane_g

0x0206,	// (0x00080672) main_camera4_pane

0x0206,	// (0x00080672) main_video4_pane

0xa00b,	// (0x0008a477) main_video_tele_dialer_pane_t1_ParamLimits

0xa00b,	// (0x0008a477) main_video_tele_dialer_pane_t1

0xa01d,	// (0x0008a489) main_video_tele_dialer_pane_t2_ParamLimits

0xa01d,	// (0x0008a489) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0008fd16) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0008fd16) main_video_tele_dialer_pane_t

0xa605,	// (0x0008aa71) cam4_autofocus_pane_ParamLimits

0xa605,	// (0x0008aa71) cam4_autofocus_pane

0xa61d,	// (0x0008aa89) cam4_image_uncrop_pane_ParamLimits

0xa61d,	// (0x0008aa89) cam4_image_uncrop_pane

0xa636,	// (0x0008aaa2) cam4_indicators_pane_ParamLimits

0xa636,	// (0x0008aaa2) cam4_indicators_pane

0xa652,	// (0x0008aabe) main_camera4_pane_g1_ParamLimits

0xa652,	// (0x0008aabe) main_camera4_pane_g1

0xa65e,	// (0x0008aaca) main_camera4_pane_g2_ParamLimits

0xa65e,	// (0x0008aaca) main_camera4_pane_g2

0xa65e,	// (0x0008aaca) main_camera4_pane_g3_ParamLimits

0xa65e,	// (0x0008aaca) main_camera4_pane_g3

0xa66a,	// (0x0008aad6) main_camera4_pane_g4_ParamLimits

0xa66a,	// (0x0008aad6) main_camera4_pane_g4

0xa676,	// (0x0008aae2) main_camera4_pane_g5_ParamLimits

0xa676,	// (0x0008aae2) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0008fd67) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0008fd67) main_camera4_pane_g

0xa690,	// (0x0008aafc) main_camera4_pane_t1_ParamLimits

0xa690,	// (0x0008aafc) main_camera4_pane_t1

0xa6da,	// (0x0008ab46) bg_tb_trans_pane_cp06

0xa6f0,	// (0x0008ab5c) cam4_indicators_pane_g1

0xa6fd,	// (0x0008ab69) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0008fd82) cam4_indicators_pane_g

0xa71d,	// (0x0008ab89) cam4_indicators_pane_t1

0xa747,	// (0x0008abb3) main_video4_pane_g1_ParamLimits

0xa747,	// (0x0008abb3) main_video4_pane_g1

0xa753,	// (0x0008abbf) main_video4_pane_g2_ParamLimits

0xa753,	// (0x0008abbf) main_video4_pane_g2

0xa75f,	// (0x0008abcb) main_video4_pane_g3_ParamLimits

0xa75f,	// (0x0008abcb) main_video4_pane_g3

0xa76b,	// (0x0008abd7) main_video4_pane_g4_ParamLimits

0xa76b,	// (0x0008abd7) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0008fd89) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0008fd89) main_video4_pane_g

0xa78d,	// (0x0008abf9) vid4_indicators_pane_ParamLimits

0xa78d,	// (0x0008abf9) vid4_indicators_pane

0xa7ab,	// (0x0008ac17) video4_image_uncrop_cif_pane_ParamLimits

0xa7ab,	// (0x0008ac17) video4_image_uncrop_cif_pane

0xa7ba,	// (0x0008ac26) video4_image_uncrop_nhd_pane_ParamLimits

0xa7ba,	// (0x0008ac26) video4_image_uncrop_nhd_pane

0xa61d,	// (0x0008aa89) video4_image_uncrop_vga_pane_ParamLimits

0xa61d,	// (0x0008aa89) video4_image_uncrop_vga_pane

0xa7c9,	// (0x0008ac35) bg_tb_trans_pane_cp07

0xa6f0,	// (0x0008ab5c) vid4_indicators_pane_g1

0xa7e1,	// (0x0008ac4d) vid4_indicators_pane_g2

0xa7ee,	// (0x0008ac5a) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0008fd94) vid4_indicators_pane_g

0xa81b,	// (0x0008ac87) vid4_indicators_pane_t1

0xa835,	// (0x0008aca1) cam4_autofocus_pane_g1

0xa83d,	// (0x0008aca9) cam4_autofocus_pane_g2

0xa845,	// (0x0008acb1) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0008fd9f) cam4_autofocus_pane_g

0xa84d,	// (0x0008acb9) cam4_autofocus_pane_g3_copy1

0xa03d,	// (0x0008a4a9) video_down_pane_cp_t1

0xa04b,	// (0x0008a4b7) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0008fd1b) video_down_pane_cp_t

0x1514,	// (0x00081980) popup_vitu2_window_ParamLimits

0x1514,	// (0x00081980) popup_vitu2_window

0xa855,	// (0x0008acc1) aid_size_cell2_itu2_ParamLimits

0xa855,	// (0x0008acc1) aid_size_cell2_itu2

0xa877,	// (0x0008ace3) aid_size_cell_itu2_ParamLimits

0xa877,	// (0x0008ace3) aid_size_cell_itu2

0xa8bb,	// (0x0008ad27) bg_popup_window_pane_cp09_ParamLimits

0xa8bb,	// (0x0008ad27) bg_popup_window_pane_cp09

0xa8c9,	// (0x0008ad35) field_vitu2_entry_pane_ParamLimits

0xa8c9,	// (0x0008ad35) field_vitu2_entry_pane

0xa8e9,	// (0x0008ad55) grid_vitu2_function_pane_ParamLimits

0xa8e9,	// (0x0008ad55) grid_vitu2_function_pane

0xa92d,	// (0x0008ad99) grid_vitu2_itu_pane_ParamLimits

0xa92d,	// (0x0008ad99) grid_vitu2_itu_pane

0xa9a1,	// (0x0008ae0d) cell_vitu2_itu_pane_ParamLimits

0xa9a1,	// (0x0008ae0d) cell_vitu2_itu_pane

0xa9b8,	// (0x0008ae24) cell_vitu2_function_pane_ParamLimits

0xa9b8,	// (0x0008ae24) cell_vitu2_function_pane

0x1522,	// (0x0008198e) bg_popup_call_pane_cp08_ParamLimits

0x1522,	// (0x0008198e) bg_popup_call_pane_cp08

0x153b,	// (0x000819a7) field_vitu2_entry_pane_g1

0x1547,	// (0x000819b3) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0008fda6) field_vitu2_entry_pane_g

0xa9fc,	// (0x0008ae68) field_vitu2_entry_pane_t1_ParamLimits

0xa9fc,	// (0x0008ae68) field_vitu2_entry_pane_t1

0x1561,	// (0x000819cd) field_vitu2_entry_pane_t2_ParamLimits

0x1561,	// (0x000819cd) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0008fdad) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0008fdad) field_vitu2_entry_pane_t

0xaa17,	// (0x0008ae83) bg_button_pane_cp010_ParamLimits

0xaa17,	// (0x0008ae83) bg_button_pane_cp010

0xaa25,	// (0x0008ae91) cell_vitu2_itu_pane_g1

0xaa43,	// (0x0008aeaf) cell_vitu2_itu_pane_t1_ParamLimits

0xaa43,	// (0x0008aeaf) cell_vitu2_itu_pane_t1

0x5570,	// (0x000859dc) cell_vitu2_itu_pane_t2_ParamLimits

0x5570,	// (0x000859dc) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0008fdb7) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0008fdb7) cell_vitu2_itu_pane_t

0xa7c9,	// (0x0008ac35) bg_button_pane_cp011

0xaa95,	// (0x0008af01) cell_vitu2_function_pane_g1

0x0206,	// (0x00080672) main_myfav_hc_pane

0xa4d8,	// (0x0008a944) popup_image3_note_pane_ParamLimits

0xa4d8,	// (0x0008a944) popup_image3_note_pane

0xa4e6,	// (0x0008a952) popup_image3_tool_bar_pane_ParamLimits

0xa4e6,	// (0x0008a952) popup_image3_tool_bar_pane

0x55de,	// (0x00085a4a) cell_vitu2_itu_pane_t3_ParamLimits

0x55de,	// (0x00085a4a) cell_vitu2_itu_pane_t3

0x0206,	// (0x00080672) bg_popup_trans_pane

0x1586,	// (0x000819f2) grid_image3_tool_bar_pane

0x1590,	// (0x000819fc) bg_popup_trans_pane_g1

0x4307,	// (0x00084773) bg_popup_trans_pane_g2

0x1598,	// (0x00081a04) bg_popup_trans_pane_g3

0x15a0,	// (0x00081a0c) bg_popup_trans_pane_g4

0x15a8,	// (0x00081a14) bg_popup_trans_pane_g5

0x15b0,	// (0x00081a1c) bg_popup_trans_pane_g6

0x15b8,	// (0x00081a24) bg_popup_trans_pane_g7

0x15c0,	// (0x00081a2c) bg_popup_trans_pane_g8

0x42e7,	// (0x00084753) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0008fdbe) bg_popup_trans_pane_g

0x15c8,	// (0x00081a34) cell_image3_tool_bar_pane_ParamLimits

0x15c8,	// (0x00081a34) cell_image3_tool_bar_pane

0x0aa9,	// (0x00080f15) cell_image3_tool_bar_pane_g1

0x0206,	// (0x00080672) bg_popup_trans_pane_cp1

0x15de,	// (0x00081a4a) popup_image3_note_pane_t1

0x15ec,	// (0x00081a58) popup_image3_note_pane_t2

0x15fa,	// (0x00081a66) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0008fdd1) popup_image3_note_pane_t

0x160a,	// (0x00081a76) popup_image3_note_pane_t3_copy1

0xaaa9,	// (0x0008af15) bg_myfav_hc_instruction_pane_ParamLimits

0xaaa9,	// (0x0008af15) bg_myfav_hc_instruction_pane

0xaac1,	// (0x0008af2d) cell_myfav_contact_pane_ParamLimits

0xaac1,	// (0x0008af2d) cell_myfav_contact_pane

0xaadb,	// (0x0008af47) cell_myfav_contact_pane_cp1_ParamLimits

0xaadb,	// (0x0008af47) cell_myfav_contact_pane_cp1

0xaaf3,	// (0x0008af5f) cell_myfav_contact_pane_cp2_ParamLimits

0xaaf3,	// (0x0008af5f) cell_myfav_contact_pane_cp2

0xab0b,	// (0x0008af77) cell_myfav_contact_pane_cp3_ParamLimits

0xab0b,	// (0x0008af77) cell_myfav_contact_pane_cp3

0xab22,	// (0x0008af8e) cell_myfav_contact_pane_cp4_ParamLimits

0xab22,	// (0x0008af8e) cell_myfav_contact_pane_cp4

0xab38,	// (0x0008afa4) cell_myfav_contact_pane_cp5_ParamLimits

0xab38,	// (0x0008afa4) cell_myfav_contact_pane_cp5

0xab4c,	// (0x0008afb8) cell_myfav_contact_pane_cp6_ParamLimits

0xab4c,	// (0x0008afb8) cell_myfav_contact_pane_cp6

0xab60,	// (0x0008afcc) cell_myfav_contact_pane_cp7_ParamLimits

0xab60,	// (0x0008afcc) cell_myfav_contact_pane_cp7

0x1618,	// (0x00081a84) listscroll_gen_pane_cp05

0xab78,	// (0x0008afe4) main_myfav_hc_pane_g1_ParamLimits

0xab78,	// (0x0008afe4) main_myfav_hc_pane_g1

0xab92,	// (0x0008affe) main_myfav_hc_pane_g2_ParamLimits

0xab92,	// (0x0008affe) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0008fdd8) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0008fdd8) main_myfav_hc_pane_g

0xabc4,	// (0x0008b030) main_myfav_hc_pane_t1_ParamLimits

0xabc4,	// (0x0008b030) main_myfav_hc_pane_t1

0x1621,	// (0x00081a8d) main_myfav_hc_pane_t2_ParamLimits

0x1621,	// (0x00081a8d) main_myfav_hc_pane_t2

0x1633,	// (0x00081a9f) main_myfav_hc_pane_t3_ParamLimits

0x1633,	// (0x00081a9f) main_myfav_hc_pane_t3

0xabdb,	// (0x0008b047) main_myfav_hc_pane_t4_ParamLimits

0xabdb,	// (0x0008b047) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0008fddf) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0008fddf) main_myfav_hc_pane_t

0x0aa9,	// (0x00080f15) bg_myfav_hc_instruction_pane_g1

0x1645,	// (0x00081ab1) cell_myfav_contact_pane_g1_ParamLimits

0x1645,	// (0x00081ab1) cell_myfav_contact_pane_g1

0x1645,	// (0x00081ab1) cell_myfav_contact_pane_g2_ParamLimits

0x1645,	// (0x00081ab1) cell_myfav_contact_pane_g2

0x1651,	// (0x00081abd) cell_myfav_contact_pane_g3_ParamLimits

0x1651,	// (0x00081abd) cell_myfav_contact_pane_g3

0x0db2,	// (0x0008121e) cell_myfav_contact_pane_g4_ParamLimits

0x0db2,	// (0x0008121e) cell_myfav_contact_pane_g4

0x165e,	// (0x00081aca) cell_myfav_contact_pane_g5_ParamLimits

0x165e,	// (0x00081aca) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0008fdea) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0008fdea) cell_myfav_contact_pane_g

0xabac,	// (0x0008b018) main_myfav_hc_pane_g3_ParamLimits

0xabac,	// (0x0008b018) main_myfav_hc_pane_g3

0x57ad,	// (0x00085c19) popup_adpt_find_window

0xac05,	// (0x0008b071) afind_page_pane_ParamLimits

0xac05,	// (0x0008b071) afind_page_pane

0xac12,	// (0x0008b07e) aid_size_cell_afind_ParamLimits

0xac12,	// (0x0008b07e) aid_size_cell_afind

0xac2c,	// (0x0008b098) bg_popup_sub_pane_cp09_ParamLimits

0xac2c,	// (0x0008b098) bg_popup_sub_pane_cp09

0xac39,	// (0x0008b0a5) find_pane_cp01_ParamLimits

0xac39,	// (0x0008b0a5) find_pane_cp01

0x166a,	// (0x00081ad6) grid_afind_control_pane_ParamLimits

0x166a,	// (0x00081ad6) grid_afind_control_pane

0xac46,	// (0x0008b0b2) grid_afind_pane_ParamLimits

0xac46,	// (0x0008b0b2) grid_afind_pane

0xac62,	// (0x0008b0ce) cell_afind_pane_ParamLimits

0xac62,	// (0x0008b0ce) cell_afind_pane

0x0aa9,	// (0x00080f15) afind_page_pane_g1

0xacae,	// (0x0008b11a) afind_page_pane_g2

0xacb7,	// (0x0008b123) afind_page_pane_g3

0x0002,

0xf989,	// (0x0008fdf5) afind_page_pane_g

0xacc0,	// (0x0008b12c) afind_page_pane_t1

0x167e,	// (0x00081aea) cell_afind_grid_control_pane_ParamLimits

0x167e,	// (0x00081aea) cell_afind_grid_control_pane

0x1403,	// (0x0008186f) bg_button_pane_cp69_ParamLimits

0x1403,	// (0x0008186f) bg_button_pane_cp69

0xace0,	// (0x0008b14c) cell_afind_pane_g1_ParamLimits

0xace0,	// (0x0008b14c) cell_afind_pane_g1

0xaced,	// (0x0008b159) cell_afind_pane_t1_ParamLimits

0xaced,	// (0x0008b159) cell_afind_pane_t1

0x40fe,	// (0x0008456a) bg_button_pane_cp72

0x168d,	// (0x00081af9) cell_afind_grid_control_pane_g1

0x8342,	// (0x000887ae) aid_image_placing_area_ParamLimits

0x8342,	// (0x000887ae) aid_image_placing_area

0x10cf,	// (0x0008153b) field_vitu_entry_pane_g1_ParamLimits

0x10cf,	// (0x0008153b) field_vitu_entry_pane_g1

0x10db,	// (0x00081547) field_vitu_entry_pane_g2_ParamLimits

0x10db,	// (0x00081547) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0008fca6) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0008fca6) field_vitu_entry_pane_g

0x9e47,	// (0x0008a2b3) cell_vitu_itu_pane_g1_ParamLimits

0x9e89,	// (0x0008a2f5) cell_vitu_itu_pane_t3_ParamLimits

0x9e89,	// (0x0008a2f5) cell_vitu_itu_pane_t3

0x13b3,	// (0x0008181f) mp4_progress_pane_t1_ParamLimits

0x13cc,	// (0x00081838) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0008fd3b) mp4_progress_pane_t_ParamLimits

0x13e5,	// (0x00081851) mup_progress_pane_cp04_ParamLimits

0xabef,	// (0x0008b05b) main_myfav_hc_pane_t5_ParamLimits

0xabef,	// (0x0008b05b) main_myfav_hc_pane_t5

0x022c,	// (0x00080698) aid_zoom_text_primary

0x57ad,	// (0x00085c19) popup_adpt_find_window_ParamLimits

0x027f,	// (0x000806eb) main_cam_set_pane

0xa644,	// (0x0008aab0) cam4_zoom_pane_ParamLimits

0xa644,	// (0x0008aab0) cam4_zoom_pane

0xacff,	// (0x0008b16b) main_cam_set_pane_g1_ParamLimits

0xacff,	// (0x0008b16b) main_cam_set_pane_g1

0xad0d,	// (0x0008b179) main_cam_set_pane_g2_ParamLimits

0xad0d,	// (0x0008b179) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0008fdfc) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0008fdfc) main_cam_set_pane_g

0xad19,	// (0x0008b185) main_cam_set_pane_t1_ParamLimits

0xad19,	// (0x0008b185) main_cam_set_pane_t1

0xad35,	// (0x0008b1a1) main_cset_listscroll_pane_ParamLimits

0xad35,	// (0x0008b1a1) main_cset_listscroll_pane

0xad64,	// (0x0008b1d0) main_cset_slider_pane_ParamLimits

0xad64,	// (0x0008b1d0) main_cset_slider_pane

0x169e,	// (0x00081b0a) main_cset_list_pane_ParamLimits

0x169e,	// (0x00081b0a) main_cset_list_pane

0x16ae,	// (0x00081b1a) scroll_pane_cp028

0xad85,	// (0x0008b1f1) aid_area_touch_slider

0xada1,	// (0x0008b20d) cset_slider_pane

0xadcb,	// (0x0008b237) main_cset_slider_pane_g1

0xade0,	// (0x0008b24c) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0008fe01) main_cset_slider_pane_g

0x16e7,	// (0x00081b53) main_cset_slider_pane_t1

0xae9c,	// (0x0008b308) main_cset_slider_pane_t2

0xaeb6,	// (0x0008b322) main_cset_slider_pane_t3

0xaed0,	// (0x0008b33c) main_cset_slider_pane_t4

0xaeea,	// (0x0008b356) main_cset_slider_pane_t5

0xaf06,	// (0x0008b372) main_cset_slider_pane_t6

0xaf1b,	// (0x0008b387) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0008fe26) main_cset_slider_pane_t

0xb01f,	// (0x0008b48b) cset_list_set_pane_ParamLimits

0xb01f,	// (0x0008b48b) cset_list_set_pane

0xb030,	// (0x0008b49c) aid_position_infowindow_above

0xb038,	// (0x0008b4a4) aid_position_infowindow_below

0x374e,	// (0x00083bba) cset_list_set_pane_g1_ParamLimits

0x374e,	// (0x00083bba) cset_list_set_pane_g1

0x1f1c,	// (0x00082388) cset_list_set_pane_g3_ParamLimits

0x1f1c,	// (0x00082388) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0008fe45) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0008fe45) cset_list_set_pane_g

0x1f2b,	// (0x00082397) cset_list_set_pane_t1_ParamLimits

0x1f2b,	// (0x00082397) cset_list_set_pane_t1

0x027f,	// (0x000806eb) list_highlight_pane_cp021_ParamLimits

0x027f,	// (0x000806eb) list_highlight_pane_cp021

0xdcc4,	// (0x0008e130) cset_slider_pane_g1

0xdcd6,	// (0x0008e142) cset_slider_pane_g2

0xdccd,	// (0x0008e139) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0008fe4a) cset_slider_pane_g

0xb040,	// (0x0008b4ac) aid_area_touch_cam4_zoom

0xb048,	// (0x0008b4b4) cam4_zoom_cont_pane

0xb050,	// (0x0008b4bc) cam4_zoom_pane_g1

0xb058,	// (0x0008b4c4) cam4_zoom_pane_g2

0xb060,	// (0x0008b4cc) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0008fe51) cam4_zoom_pane_g

0xb068,	// (0x0008b4d4) cam4_zoom_cont_pane_g1

0xb071,	// (0x0008b4dd) cam4_zoom_cont_pane_g2

0xb07a,	// (0x0008b4e6) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0008fe58) cam4_zoom_cont_pane_g

0xa52f,	// (0x0008a99b) call4_image_pane_ParamLimits

0xa52f,	// (0x0008a99b) call4_image_pane

0x140f,	// (0x0008187b) call4_windows_conf_pane_ParamLimits

0x1456,	// (0x000818c2) popup_call4_audio_in_window_ParamLimits

0x1456,	// (0x000818c2) popup_call4_audio_in_window

0x0206,	// (0x00080672) bg_popup_call2_act_pane_cp02

0x14ce,	// (0x0008193a) call4_list_conf_pane

0x0aa9,	// (0x00080f15) call4_image_pane_g1

0x0aa9,	// (0x00080f15) call4_image_pane_g2

0x0001,

0xf700,	// (0x0008fb6c) call4_image_pane_g

0x17a2,	// (0x00081c0e) list_single_graphic_popup_conf4_pane_ParamLimits

0x17a2,	// (0x00081c0e) list_single_graphic_popup_conf4_pane

0x0206,	// (0x00080672) list_highlight_pane_cp022

0x17b7,	// (0x00081c23) list_single_graphic_popup_conf4_pane_g1

0xd9be,	// (0x0008de2a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0008fe5f) list_single_graphic_popup_conf4_pane_g

0x17bf,	// (0x00081c2b) list_single_graphic_popup_conf4_pane_t1

0x67db,	// (0x00086c47) popup_vtel_slider_window_ParamLimits

0x67db,	// (0x00086c47) popup_vtel_slider_window

0x13f1,	// (0x0008185d) dialer2_ne_pane_t2_ParamLimits

0x13f1,	// (0x0008185d) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0008fd40) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0008fd40) dialer2_ne_pane_t

0x027f,	// (0x000806eb) bg_popup_sub_pane_cp010_ParamLimits

0x027f,	// (0x000806eb) bg_popup_sub_pane_cp010

0xb083,	// (0x0008b4ef) popup_vtel_slider_window_g1_ParamLimits

0xb083,	// (0x0008b4ef) popup_vtel_slider_window_g1

0xb08f,	// (0x0008b4fb) popup_vtel_slider_window_g2_ParamLimits

0xb08f,	// (0x0008b4fb) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0008fe64) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0008fe64) popup_vtel_slider_window_g

0xb0d7,	// (0x0008b543) vtel_slider_pane_ParamLimits

0xb0d7,	// (0x0008b543) vtel_slider_pane

0xb0e6,	// (0x0008b552) vtel_slider_pane_g1_ParamLimits

0xb0e6,	// (0x0008b552) vtel_slider_pane_g1

0xb0f3,	// (0x0008b55f) vtel_slider_pane_g2_ParamLimits

0xb0f3,	// (0x0008b55f) vtel_slider_pane_g2

0xb100,	// (0x0008b56c) vtel_slider_pane_g3_ParamLimits

0xb100,	// (0x0008b56c) vtel_slider_pane_g3

0xb0e6,	// (0x0008b552) vtel_slider_pane_g4_ParamLimits

0xb0e6,	// (0x0008b552) vtel_slider_pane_g4

0xb10d,	// (0x0008b579) vtel_slider_pane_g5_ParamLimits

0xb10d,	// (0x0008b579) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0008fe6d) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0008fe6d) vtel_slider_pane_g

0x0206,	// (0x00080672) main_gallery2_pane

0xa89d,	// (0x0008ad09) aid_size_row_itut2_dropdow_list_ParamLimits

0xa89d,	// (0x0008ad09) aid_size_row_itut2_dropdow_list

0xa90b,	// (0x0008ad77) grid_vitu2_function_top_pane_ParamLimits

0xa90b,	// (0x0008ad77) grid_vitu2_function_top_pane

0xa95d,	// (0x0008adc9) popup_vitu2_dropdown_list_window_ParamLimits

0xa95d,	// (0x0008adc9) popup_vitu2_dropdown_list_window

0xa97d,	// (0x0008ade9) popup_vitu2_match_list_window

0xb11a,	// (0x0008b586) cell_vitu2_function_top_pane_ParamLimits

0xb11a,	// (0x0008b586) cell_vitu2_function_top_pane

0xb13a,	// (0x0008b5a6) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb13a,	// (0x0008b5a6) cell_vitu2_function_top_pane_cp01

0xb158,	// (0x0008b5c4) cell_vitu2_function_top_wide_pane_ParamLimits

0xb158,	// (0x0008b5c4) cell_vitu2_function_top_wide_pane

0xa7c9,	// (0x0008ac35) bg_button_pane_cp012

0xb176,	// (0x0008b5e2) cell_vitu2_function_top_pane_g1

0xb185,	// (0x0008b5f1) bg_button_pane_cp013_ParamLimits

0xb185,	// (0x0008b5f1) bg_button_pane_cp013

0xb1a1,	// (0x0008b60d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb1a1,	// (0x0008b60d) cell_vitu2_function_top_wide_pane_g1

0xb1b9,	// (0x0008b625) bg_popup_sub_pane_cp20

0xb1c7,	// (0x0008b633) list_vitu2_match_list_pane

0x1590,	// (0x000819fc) bg_popup_sub_pane_cp20_g1

0x1598,	// (0x00081a04) bg_popup_sub_pane_cp20_g2

0x4307,	// (0x00084773) bg_popup_sub_pane_cp20_g3

0x15a0,	// (0x00081a0c) bg_popup_sub_pane_cp20_g4

0x42e7,	// (0x00084753) bg_popup_sub_pane_cp20_g5

0x17e3,	// (0x00081c4f) bg_popup_sub_pane_cp20_g6

0x15b0,	// (0x00081a1c) bg_popup_sub_pane_cp20_g7

0x15b8,	// (0x00081a24) bg_popup_sub_pane_cp20_g8

0x15c0,	// (0x00081a2c) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0008fe78) bg_popup_sub_pane_cp20_g

0xb1df,	// (0x0008b64b) list_vitu2_match_list_item_pane_ParamLimits

0xb1df,	// (0x0008b64b) list_vitu2_match_list_item_pane

0xb1f1,	// (0x0008b65d) list_vitu2_match_list_item_pane_t1

0x5bdb,	// (0x00086047) bg_popup_sub_pane_cp21

0xb22b,	// (0x0008b697) grid_vitu2_dropdown_list_pane

0xb233,	// (0x0008b69f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb233,	// (0x0008b69f) cell_vitu2_dropdown_list_char_pane

0xb258,	// (0x0008b6c4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb258,	// (0x0008b6c4) cell_vitu2_dropdown_list_ctrl_pane

0x1815,	// (0x00081c81) cell_vitu2_dropdown_list_char_pane_g1

0x180c,	// (0x00081c78) cell_vitu2_dropdown_list_char_pane_g2

0x1803,	// (0x00081c6f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0008fe95) cell_vitu2_dropdown_list_char_pane_g

0xb286,	// (0x0008b6f2) cell_vitu2_dropdown_list_char_pane_t1

0xb294,	// (0x0008b700) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb294,	// (0x0008b700) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb2a4,	// (0x0008b710) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb2a4,	// (0x0008b710) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb2b5,	// (0x0008b721) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb2b5,	// (0x0008b721) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb2c5,	// (0x0008b731) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb2c5,	// (0x0008b731) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa6da,	// (0x0008ab46) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa6da,	// (0x0008ab46) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0008fe9c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0008fe9c) cell_vitu2_dropdown_list_ctrl_pane_g

0xb2de,	// (0x0008b74a) aid_size_cell_gallery2_ParamLimits

0xb2de,	// (0x0008b74a) aid_size_cell_gallery2

0xb2ec,	// (0x0008b758) grid_gallery2_pane_ParamLimits

0xb2ec,	// (0x0008b758) grid_gallery2_pane

0xb2fb,	// (0x0008b767) scroll_pane_cp029_ParamLimits

0xb2fb,	// (0x0008b767) scroll_pane_cp029

0xb307,	// (0x0008b773) cell_gallery2_pane_ParamLimits

0xb307,	// (0x0008b773) cell_gallery2_pane

0x181e,	// (0x00081c8a) cell_gallery2_pane_g2

0xb331,	// (0x0008b79d) cell_gallery2_pane_g3

0x1828,	// (0x00081c94) cell_gallery2_pane_g4

0x1830,	// (0x00081c9c) cell_gallery2_pane_g5

0xdb8c,	// (0x0008dff8) grid_highlight_pane_cp10

0xa97d,	// (0x0008ade9) popup_vitu2_match_list_window_ParamLimits

0xa991,	// (0x0008adfd) popup_vitu2_query_window_ParamLimits

0xa991,	// (0x0008adfd) popup_vitu2_query_window

0x5bdb,	// (0x00086047) bg_vitu2_candi_button_pane

0x1815,	// (0x00081c81) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x180c,	// (0x00081c78) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1803,	// (0x00081c6f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb339,	// (0x0008b7a5) bg_button_pane_cp015

0xb34b,	// (0x0008b7b7) bg_button_pane_cp016

0xb35e,	// (0x0008b7ca) bg_button_pane_cp017

0xef97,	// (0x0008f403) bg_popup_sub_pane_cp22

0x1838,	// (0x00081ca4) popup_vitu2_query_window_g1

0xb3a3,	// (0x0008b80f) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0008fea7) popup_vitu2_query_window_g

0xb3c0,	// (0x0008b82c) popup_vitu2_query_window_t1_ParamLimits

0xb3c0,	// (0x0008b82c) popup_vitu2_query_window_t1

0xb3f3,	// (0x0008b85f) popup_vitu2_query_window_t2_ParamLimits

0xb3f3,	// (0x0008b85f) popup_vitu2_query_window_t2

0xb405,	// (0x0008b871) popup_vitu2_query_window_t3_ParamLimits

0xb405,	// (0x0008b871) popup_vitu2_query_window_t3

0xb42d,	// (0x0008b899) popup_vitu2_query_window_t4_ParamLimits

0xb42d,	// (0x0008b899) popup_vitu2_query_window_t4

0xb450,	// (0x0008b8bc) popup_vitu2_query_window_t5_ParamLimits

0xb450,	// (0x0008b8bc) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0008feae) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0008feae) popup_vitu2_query_window_t

0x1696,	// (0x00081b02) main_cset_text_pane

0xad85,	// (0x0008b1f1) aid_area_touch_slider_ParamLimits

0xada1,	// (0x0008b20d) cset_slider_pane_ParamLimits

0xadcb,	// (0x0008b237) main_cset_slider_pane_g1_ParamLimits

0xade0,	// (0x0008b24c) main_cset_slider_pane_g2_ParamLimits

0x16b7,	// (0x00081b23) main_cset_slider_pane_g3_ParamLimits

0x16b7,	// (0x00081b23) main_cset_slider_pane_g3

0xadf5,	// (0x0008b261) main_cset_slider_pane_g4_ParamLimits

0xadf5,	// (0x0008b261) main_cset_slider_pane_g4

0xae04,	// (0x0008b270) main_cset_slider_pane_g5_ParamLimits

0xae04,	// (0x0008b270) main_cset_slider_pane_g5

0xae10,	// (0x0008b27c) main_cset_slider_pane_g6_ParamLimits

0xae10,	// (0x0008b27c) main_cset_slider_pane_g6

0xf995,	// (0x0008fe01) main_cset_slider_pane_g_ParamLimits

0x16e7,	// (0x00081b53) main_cset_slider_pane_t1_ParamLimits

0xae9c,	// (0x0008b308) main_cset_slider_pane_t2_ParamLimits

0xaeb6,	// (0x0008b322) main_cset_slider_pane_t3_ParamLimits

0xaed0,	// (0x0008b33c) main_cset_slider_pane_t4_ParamLimits

0xaeea,	// (0x0008b356) main_cset_slider_pane_t5_ParamLimits

0xaf06,	// (0x0008b372) main_cset_slider_pane_t6_ParamLimits

0xaf1b,	// (0x0008b387) main_cset_slider_pane_t7_ParamLimits

0xaf45,	// (0x0008b3b1) main_cset_slider_pane_t8_ParamLimits

0xaf45,	// (0x0008b3b1) main_cset_slider_pane_t8

0xaf6d,	// (0x0008b3d9) main_cset_slider_pane_t9_ParamLimits

0xaf6d,	// (0x0008b3d9) main_cset_slider_pane_t9

0xaf95,	// (0x0008b401) main_cset_slider_pane_t10_ParamLimits

0xaf95,	// (0x0008b401) main_cset_slider_pane_t10

0xafbd,	// (0x0008b429) main_cset_slider_pane_t11_ParamLimits

0xafbd,	// (0x0008b429) main_cset_slider_pane_t11

0xafe5,	// (0x0008b451) main_cset_slider_pane_t12_ParamLimits

0xafe5,	// (0x0008b451) main_cset_slider_pane_t12

0xb002,	// (0x0008b46e) main_cset_slider_pane_t13_ParamLimits

0xb002,	// (0x0008b46e) main_cset_slider_pane_t13

0xf9ba,	// (0x0008fe26) main_cset_slider_pane_t_ParamLimits

0x0206,	// (0x00080672) bg_popup_sub_pane_cp011

0x1844,	// (0x00081cb0) main_cset_text_pane_g1

0x184c,	// (0x00081cb8) main_cset_text_pane_t1

0x185a,	// (0x00081cc6) main_cset_text_pane_t2

0x1868,	// (0x00081cd4) main_cset_text_pane_t3

0x1876,	// (0x00081ce2) main_cset_text_pane_t4

0x1884,	// (0x00081cf0) main_cset_text_pane_t5

0x1892,	// (0x00081cfe) main_cset_text_pane_t6

0x18a0,	// (0x00081d0c) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0008febd) main_cset_text_pane_t

0x0206,	// (0x00080672) main_cam4_burst_pane

0x0206,	// (0x00080672) main_cam5_pane

0xacce,	// (0x0008b13a) bg_button_pane_cp019

0xacd7,	// (0x0008b143) bg_button_pane_cp020

0x16c3,	// (0x00081b2f) main_cset_slider_pane_g7_ParamLimits

0x16c3,	// (0x00081b2f) main_cset_slider_pane_g7

0x16cf,	// (0x00081b3b) main_cset_slider_pane_g8_ParamLimits

0x16cf,	// (0x00081b3b) main_cset_slider_pane_g8

0xae24,	// (0x0008b290) main_cset_slider_pane_g9_ParamLimits

0xae24,	// (0x0008b290) main_cset_slider_pane_g9

0xae30,	// (0x0008b29c) main_cset_slider_pane_g10_ParamLimits

0xae30,	// (0x0008b29c) main_cset_slider_pane_g10

0xae3c,	// (0x0008b2a8) main_cset_slider_pane_g11_ParamLimits

0xae3c,	// (0x0008b2a8) main_cset_slider_pane_g11

0xae48,	// (0x0008b2b4) main_cset_slider_pane_g12_ParamLimits

0xae48,	// (0x0008b2b4) main_cset_slider_pane_g12

0xae54,	// (0x0008b2c0) main_cset_slider_pane_g13_ParamLimits

0xae54,	// (0x0008b2c0) main_cset_slider_pane_g13

0xae60,	// (0x0008b2cc) main_cset_slider_pane_g14_ParamLimits

0xae60,	// (0x0008b2cc) main_cset_slider_pane_g14

0xae6c,	// (0x0008b2d8) main_cset_slider_pane_g15_ParamLimits

0xae6c,	// (0x0008b2d8) main_cset_slider_pane_g15

0x1715,	// (0x00081b81) main_cset_slider_pane_t14_ParamLimits

0x1715,	// (0x00081b81) main_cset_slider_pane_t14

0x174e,	// (0x00081bba) main_cset_slider_pane_t15_ParamLimits

0x174e,	// (0x00081bba) main_cset_slider_pane_t15

0xb4c9,	// (0x0008b935) aid_cam4_burst_size_cell_ParamLimits

0xb4c9,	// (0x0008b935) aid_cam4_burst_size_cell

0xb4e5,	// (0x0008b951) grid_cam4_burst_pane_ParamLimits

0xb4e5,	// (0x0008b951) grid_cam4_burst_pane

0xb517,	// (0x0008b983) linegrid_cam4_burst_pane_ParamLimits

0xb517,	// (0x0008b983) linegrid_cam4_burst_pane

0xb537,	// (0x0008b9a3) scroll_pane_cp30_ParamLimits

0xb537,	// (0x0008b9a3) scroll_pane_cp30

0xb543,	// (0x0008b9af) cell_cam4_burst_pane_ParamLimits

0xb543,	// (0x0008b9af) cell_cam4_burst_pane

0x18ba,	// (0x00081d26) linegrid_cam4_burst_pane_g1_ParamLimits

0x18ba,	// (0x00081d26) linegrid_cam4_burst_pane_g1

0xb583,	// (0x0008b9ef) linegrid_cam4_burst_pane_g2_ParamLimits

0xb583,	// (0x0008b9ef) linegrid_cam4_burst_pane_g2

0x18c7,	// (0x00081d33) linegrid_cam4_burst_pane_g3_ParamLimits

0x18c7,	// (0x00081d33) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0008fecc) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0008fecc) linegrid_cam4_burst_pane_g

0xb594,	// (0x0008ba00) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb594,	// (0x0008ba00) linegrid_cam4_burst_pane_g3_copy1

0x18d4,	// (0x00081d40) linegrid_cam4_burst_pane_g4_ParamLimits

0x18d4,	// (0x00081d40) linegrid_cam4_burst_pane_g4

0xb5ae,	// (0x0008ba1a) linegrid_cam4_burst_pane_g5_ParamLimits

0xb5ae,	// (0x0008ba1a) linegrid_cam4_burst_pane_g5

0xb5bf,	// (0x0008ba2b) linegrid_cam4_burst_pane_g6_ParamLimits

0xb5bf,	// (0x0008ba2b) linegrid_cam4_burst_pane_g6

0x18e1,	// (0x00081d4d) linegrid_cam4_burst_pane_g7_ParamLimits

0x18e1,	// (0x00081d4d) linegrid_cam4_burst_pane_g7

0xb5d6,	// (0x0008ba42) cell_cam4_burst_pane_g1

0x18fa,	// (0x00081d66) main_cam5_pane_t1_ParamLimits

0x18fa,	// (0x00081d66) main_cam5_pane_t1

0x190c,	// (0x00081d78) main_cam5_pane_t2_ParamLimits

0x190c,	// (0x00081d78) main_cam5_pane_t2

0x191e,	// (0x00081d8a) main_cam5_pane_t3_ParamLimits

0x191e,	// (0x00081d8a) main_cam5_pane_t3

0x1930,	// (0x00081d9c) main_cam5_pane_t4_ParamLimits

0x1930,	// (0x00081d9c) main_cam5_pane_t4

0x1948,	// (0x00081db4) main_cam5_pane_t5_ParamLimits

0x1948,	// (0x00081db4) main_cam5_pane_t5

0x195c,	// (0x00081dc8) main_cam5_pane_t6_ParamLimits

0x195c,	// (0x00081dc8) main_cam5_pane_t6

0x1970,	// (0x00081ddc) main_cam5_pane_t7_ParamLimits

0x1970,	// (0x00081ddc) main_cam5_pane_t7

0x1982,	// (0x00081dee) main_cam5_pane_t8_ParamLimits

0x1982,	// (0x00081dee) main_cam5_pane_t8

0x19a0,	// (0x00081e0c) main_cam5_pane_t9_ParamLimits

0x19a0,	// (0x00081e0c) main_cam5_pane_t9

0x19b2,	// (0x00081e1e) main_cam5_pane_t10_ParamLimits

0x19b2,	// (0x00081e1e) main_cam5_pane_t10

0x19c4,	// (0x00081e30) main_cam5_pane_t11_ParamLimits

0x19c4,	// (0x00081e30) main_cam5_pane_t11

0x19d8,	// (0x00081e44) main_cam5_pane_t12_ParamLimits

0x19d8,	// (0x00081e44) main_cam5_pane_t12

0x19ef,	// (0x00081e5b) main_cam5_pane_t13_ParamLimits

0x19ef,	// (0x00081e5b) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0008fed8) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0008fed8) main_cam5_pane_t

0x585b,	// (0x00085cc7) popup_scut_keymap_window_ParamLimits

0x585b,	// (0x00085cc7) popup_scut_keymap_window

0xb5e9,	// (0x0008ba55) aid_size_cell_brow_shortcut

0xdb8c,	// (0x0008dff8) bg_popup_window_pane_cp010

0xb5f5,	// (0x0008ba61) grid_scut_pane

0xb601,	// (0x0008ba6d) cell_scut_pane_ParamLimits

0xb601,	// (0x0008ba6d) cell_scut_pane

0xb61c,	// (0x0008ba88) cell_scut_pane_g1

0x1a12,	// (0x00081e7e) cell_scut_pane_t1

0x1a21,	// (0x00081e8d) cell_scut_pane_t2

0xb625,	// (0x0008ba91) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0008fef3) cell_scut_pane_t

0x94cd,	// (0x00089939) main_mup3_pane_g8_ParamLimits

0x94cd,	// (0x00089939) main_mup3_pane_g8

0xa8ab,	// (0x0008ad17) area_vitu2_query_pane_ParamLimits

0xa8ab,	// (0x0008ad17) area_vitu2_query_pane

0xb371,	// (0x0008b7dd) input_focus_pane_cp08

0x1a30,	// (0x00081e9c) area_vitu2_query_pane_g1

0xb633,	// (0x0008ba9f) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0008fefa) area_vitu2_query_pane_g

0xb644,	// (0x0008bab0) area_vitu2_query_pane_t1_ParamLimits

0xb644,	// (0x0008bab0) area_vitu2_query_pane_t1

0xb658,	// (0x0008bac4) area_vitu2_query_pane_t2_ParamLimits

0xb658,	// (0x0008bac4) area_vitu2_query_pane_t2

0xb66c,	// (0x0008bad8) area_vitu2_query_pane_t3_ParamLimits

0xb66c,	// (0x0008bad8) area_vitu2_query_pane_t3

0x1a3c,	// (0x00081ea8) area_vitu2_query_pane_t4_ParamLimits

0x1a3c,	// (0x00081ea8) area_vitu2_query_pane_t4

0x1a64,	// (0x00081ed0) area_vitu2_query_pane_t5_ParamLimits

0x1a64,	// (0x00081ed0) area_vitu2_query_pane_t5

0x1a8c,	// (0x00081ef8) area_vitu2_query_pane_t6_ParamLimits

0x1a8c,	// (0x00081ef8) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0008feff) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0008feff) area_vitu2_query_pane_t

0xb694,	// (0x0008bb00) bg_button_pane_cp018

0xb6a2,	// (0x0008bb0e) bg_button_pane_cp021

0xb6ae,	// (0x0008bb1a) bg_button_pane_cp022

0xb6bf,	// (0x0008bb2b) input_focus_pane_cp09

0x7927,	// (0x00087d93) aid_size_touch_mv_arrow_left

0x7952,	// (0x00087dbe) aid_size_touch_mv_arrow_right

0xae84,	// (0x0008b2f0) main_cset_slider_pane_g16_ParamLimits

0xae84,	// (0x0008b2f0) main_cset_slider_pane_g16

0xae90,	// (0x0008b2fc) main_cset_slider_pane_g17_ParamLimits

0xae90,	// (0x0008b2fc) main_cset_slider_pane_g17

0xb5d6,	// (0x0008ba42) cell_cam4_burst_pane_g1_ParamLimits

0x0206,	// (0x00080672) compa_mode_pane

0xb09b,	// (0x0008b507) popup_vtel_slider_window_g3_ParamLimits

0xb09b,	// (0x0008b507) popup_vtel_slider_window_g3

0xb0af,	// (0x0008b51b) popup_vtel_slider_window_g4_ParamLimits

0xb0af,	// (0x0008b51b) popup_vtel_slider_window_g4

0xb0c3,	// (0x0008b52f) popup_vtel_slider_window_t1_ParamLimits

0xb0c3,	// (0x0008b52f) popup_vtel_slider_window_t1

0x0206,	// (0x00080672) main_cl_pane

0xefc3,	// (0x0008f42f) popup_imed_adjust2_window_ParamLimits

0xef97,	// (0x0008f403) bg_tb_trans_pane_cp05_ParamLimits

0x1004,	// (0x00081470) popup_imed_adjust2_window_g1_ParamLimits

0x1013,	// (0x0008147f) popup_imed_adjust2_window_g2_ParamLimits

0x1013,	// (0x0008147f) popup_imed_adjust2_window_g2

0x101f,	// (0x0008148b) popup_imed_adjust2_window_g3_ParamLimits

0x101f,	// (0x0008148b) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0008fc6a) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0008fc6a) popup_imed_adjust2_window_g

0x102b,	// (0x00081497) popup_imed_adjust2_window_t1_ParamLimits

0x1043,	// (0x000814af) slider_imed_adjust_pane_ParamLimits

0x1057,	// (0x000814c3) slider_imed_adjust_pane_g1_ParamLimits

0x1067,	// (0x000814d3) slider_imed_adjust_pane_g2_ParamLimits

0x1077,	// (0x000814e3) slider_imed_adjust_pane_g3_ParamLimits

0x1088,	// (0x000814f4) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0008fc71) slider_imed_adjust_pane_g_ParamLimits

0xa5ed,	// (0x0008aa59) aid_touch_area_cam4_ParamLimits

0xa5ed,	// (0x0008aa59) aid_touch_area_cam4

0xa5fd,	// (0x0008aa69) battery_pane_cp01

0xa684,	// (0x0008aaf0) main_camera4_pane_g6_ParamLimits

0xa684,	// (0x0008aaf0) main_camera4_pane_g6

0xa6a2,	// (0x0008ab0e) main_camera4_pane_t2_ParamLimits

0xa6a2,	// (0x0008ab0e) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0008fd74) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0008fd74) main_camera4_pane_t

0xa737,	// (0x0008aba3) aid_touch_area_vid4_ParamLimits

0xa737,	// (0x0008aba3) aid_touch_area_vid4

0xa777,	// (0x0008abe3) main_video4_pane_g5_ParamLimits

0xa777,	// (0x0008abe3) main_video4_pane_g5

0xa79b,	// (0x0008ac07) vid4_progress_pane_ParamLimits

0xa79b,	// (0x0008ac07) vid4_progress_pane

0x16db,	// (0x00081b47) main_cset_slider_pane_g18_ParamLimits

0x16db,	// (0x00081b47) main_cset_slider_pane_g18

0x18ee,	// (0x00081d5a) cell_cam4_burst_pane_g2_ParamLimits

0x18ee,	// (0x00081d5a) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0008fed3) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0008fed3) cell_cam4_burst_pane_g

0xb6d0,	// (0x0008bb3c) bg_cl_pane_ParamLimits

0xb6d0,	// (0x0008bb3c) bg_cl_pane

0xb6dc,	// (0x0008bb48) cl_header_pane_ParamLimits

0xb6dc,	// (0x0008bb48) cl_header_pane

0xb6e8,	// (0x0008bb54) cl_listscroll_pane_ParamLimits

0xb6e8,	// (0x0008bb54) cl_listscroll_pane

0x1ad8,	// (0x00081f44) bg_cl_pane_g1

0x1ae0,	// (0x00081f4c) bg_cl_pane_g2

0x1ae8,	// (0x00081f54) bg_cl_pane_g3

0x1af0,	// (0x00081f5c) bg_cl_pane_g4

0x1af8,	// (0x00081f64) bg_cl_pane_g5

0x1b00,	// (0x00081f6c) bg_cl_pane_g6

0x1b08,	// (0x00081f74) bg_cl_pane_g7

0x1b10,	// (0x00081f7c) bg_cl_pane_g8

0x1b18,	// (0x00081f84) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0008ff0e) bg_cl_pane_g

0xb6f4,	// (0x0008bb60) aid_height_cl_leading_ParamLimits

0xb6f4,	// (0x0008bb60) aid_height_cl_leading

0xb700,	// (0x0008bb6c) aid_height_cl_text_ParamLimits

0xb700,	// (0x0008bb6c) aid_height_cl_text

0x1514,	// (0x00081980) bg_cl_header_pane_ParamLimits

0x1514,	// (0x00081980) bg_cl_header_pane

0xb718,	// (0x0008bb84) cl_header_pane_g1_ParamLimits

0xb718,	// (0x0008bb84) cl_header_pane_g1

0xb725,	// (0x0008bb91) cl_header_pane_t1_ParamLimits

0xb725,	// (0x0008bb91) cl_header_pane_t1

0x1b20,	// (0x00081f8c) cl_list_pane

0x16ae,	// (0x00081b1a) hc_scroll_pane_cp01

0x42e7,	// (0x00084753) bg_cl_header_pane_g1

0x1590,	// (0x000819fc) bg_cl_header_pane_g2

0x4307,	// (0x00084773) bg_cl_header_pane_g3

0x15a0,	// (0x00081a0c) bg_cl_header_pane_g4

0x1598,	// (0x00081a04) bg_cl_header_pane_g5

0x17e3,	// (0x00081c4f) bg_cl_header_pane_g6

0x15b8,	// (0x00081a24) bg_cl_header_pane_g7

0x15c0,	// (0x00081a2c) bg_cl_header_pane_g8

0x15b0,	// (0x00081a1c) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0008ff21) bg_cl_header_pane_g

0xb737,	// (0x0008bba3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb737,	// (0x0008bba3) hc_cl_list_double_graphic_heading_pane

0x3796,	// (0x00083c02) hc_cl_list_single_graphic_pane_ParamLimits

0x3796,	// (0x00083c02) hc_cl_list_single_graphic_pane

0xb747,	// (0x0008bbb3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb747,	// (0x0008bbb3) hc_cl_list_single_graphic_pane_g1

0xb753,	// (0x0008bbbf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb753,	// (0x0008bbbf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0008ff34) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0008ff34) hc_cl_list_single_graphic_pane_g

0xb767,	// (0x0008bbd3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb767,	// (0x0008bbd3) hc_cl_list_single_graphic_pane_t1

0xb747,	// (0x0008bbb3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb747,	// (0x0008bbb3) hc_cl_list_double_graphic_heading_pane_g1

0xb77c,	// (0x0008bbe8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb77c,	// (0x0008bbe8) hc_cl_list_double_graphic_heading_pane_g2

0xb790,	// (0x0008bbfc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb790,	// (0x0008bbfc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0008ff39) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0008ff39) hc_cl_list_double_graphic_heading_pane_g

0xb7a4,	// (0x0008bc10) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb7a4,	// (0x0008bc10) hc_cl_list_double_graphic_heading_pane_t1

0xb7b9,	// (0x0008bc25) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb7b9,	// (0x0008bc25) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0008ff40) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0008ff40) hc_cl_list_double_graphic_heading_pane_t

0xb7e0,	// (0x0008bc4c) vid4_progress_pane_g1

0xb7ec,	// (0x0008bc58) vid4_progress_pane_g2

0xb7f8,	// (0x0008bc64) vid4_progress_pane_g3

0xb807,	// (0x0008bc73) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0008ff45) vid4_progress_pane_g

0xb825,	// (0x0008bc91) vid4_progress_pane_t1

0xb83b,	// (0x0008bca7) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0008ff50) vid4_progress_pane_t

0xb866,	// (0x0008bcd2) wait_bar_pane_cp07

0x0896,	// (0x00080d02) blid_firmament_pane_ParamLimits

0x08d9,	// (0x00080d45) popup_blid_sat_info2_window_g1

0x08fd,	// (0x00080d69) popup_blid_sat_info2_window_t3

0x090b,	// (0x00080d77) popup_blid_sat_info2_window_t4

0x0919,	// (0x00080d85) popup_blid_sat_info2_window_t5

0x0927,	// (0x00080d93) popup_blid_sat_info2_window_t6

0x0937,	// (0x00080da3) popup_blid_sat_info2_window_t7

0x0945,	// (0x00080db1) popup_blid_sat_info2_window_t8

0x0953,	// (0x00080dbf) popup_blid_sat_info2_window_t9

0x0961,	// (0x00080dcd) popup_blid_sat_info2_window_t10

0x0a29,	// (0x00080e95) aid_firma_cardinal_ParamLimits

0x0a3d,	// (0x00080ea9) blid_firmament_pane_t1_ParamLimits

0x0a54,	// (0x00080ec0) blid_firmament_pane_t2_ParamLimits

0x0a6b,	// (0x00080ed7) blid_firmament_pane_t3_ParamLimits

0x0a82,	// (0x00080eee) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0008fb63) blid_firmament_pane_t_ParamLimits

0x0a99,	// (0x00080f05) blid_sat_info_pane_ParamLimits

0x027f,	// (0x000806eb) main_cam_set_pane_ParamLimits

0x9c65,	// (0x0008a0d1) aid_size_cell_colour_35_ParamLimits

0x9c7f,	// (0x0008a0eb) aid_size_cell_colour_112_ParamLimits

0x9c96,	// (0x0008a102) aid_size_cell_effect_ParamLimits

0x027f,	// (0x000806eb) bg_tb_trans_pane_cp02_ParamLimits

0x4556,	// (0x000849c2) heading_imed_pane_ParamLimits

0x9cb0,	// (0x0008a11c) listscroll_imed_pane_ParamLimits

0xe5c5,	// (0x0008ea31) popup_call2_audio_first_window_g5_ParamLimits

0xe5c5,	// (0x0008ea31) popup_call2_audio_first_window_g5

0xa398,	// (0x0008a804) aid_size_touch_image3_arrow_left_ParamLimits

0xa398,	// (0x0008a804) aid_size_touch_image3_arrow_left

0xa3ae,	// (0x0008a81a) aid_size_touch_image3_arrow_right_ParamLimits

0xa3ae,	// (0x0008a81a) aid_size_touch_image3_arrow_right

0xb851,	// (0x0008bcbd) vid4_progress_pane_t3

0x9f50,	// (0x0008a3bc) main_hwr_training_symbol_option_pane_ParamLimits

0x9f50,	// (0x0008a3bc) main_hwr_training_symbol_option_pane

0x12f3,	// (0x0008175f) popup_hwr_training_preview_window_ParamLimits

0x12f3,	// (0x0008175f) popup_hwr_training_preview_window

0x9fb1,	// (0x0008a41d) hwr_training_navi_pane_g5_ParamLimits

0x9fb1,	// (0x0008a41d) hwr_training_navi_pane_g5

0x157e,	// (0x000819ea) popup_char_count_window

0xb1b9,	// (0x0008b625) bg_popup_sub_pane_cp20_ParamLimits

0xb1c7,	// (0x0008b633) list_vitu2_match_list_pane_ParamLimits

0xb1d3,	// (0x0008b63f) vitu2_page_scroll_pane_ParamLimits

0xb1d3,	// (0x0008b63f) vitu2_page_scroll_pane

0x1b72,	// (0x00081fde) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1b72,	// (0x00081fde) list_single_hwr_training_symbol_option_pane

0x1b85,	// (0x00081ff1) list_single_hwr_training_symbol_option_pane_g1

0x1b8d,	// (0x00081ff9) list_single_hwr_training_symbol_option_pane_t1

0x1b9b,	// (0x00082007) bg_button_pane_cp023

0x1ba4,	// (0x00082010) bg_button_pane_cp024

0xb878,	// (0x0008bce4) vitu2_page_scroll_pane_g1

0xb880,	// (0x0008bcec) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0008ff57) vitu2_page_scroll_pane_g

0xb88a,	// (0x0008bcf6) vitu2_page_scroll_pane_t1

0x07b2,	// (0x00080c1e) popup_char_count_window_g1

0x1bd7,	// (0x00082043) popup_char_count_window_g2

0x1be0,	// (0x0008204c) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0008ff5c) popup_char_count_window_g

0x1be9,	// (0x00082055) popup_char_count_window_t1

0x0206,	// (0x00080672) main_vded2_pane

0x0ff0,	// (0x0008145c) aid_size_cell_imed_line

0x0ffa,	// (0x00081466) grid_imed_line_width_pane

0xa7ff,	// (0x0008ac6b) vid4_indicators_pane_g4

0x1bf7,	// (0x00082063) cell_imed_line_width_pane_ParamLimits

0x1bf7,	// (0x00082063) cell_imed_line_width_pane

0x1c0d,	// (0x00082079) cell_imed_line_width_pane_g1

0x1c16,	// (0x00082082) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0008ff63) cell_imed_line_width_pane_g

0xb899,	// (0x0008bd05) main_vded2_pane_g1_ParamLimits

0xb899,	// (0x0008bd05) main_vded2_pane_g1

0xb8a8,	// (0x0008bd14) main_vded2_pane_g2_ParamLimits

0xb8a8,	// (0x0008bd14) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0008ff68) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0008ff68) main_vded2_pane_g

0xb8b6,	// (0x0008bd22) vded2_slider_pane_ParamLimits

0xb8b6,	// (0x0008bd22) vded2_slider_pane

0xb8c3,	// (0x0008bd2f) aid_size_touch_vded2_end

0xb8cd,	// (0x0008bd39) aid_size_touch_vded2_playhead

0x1c1e,	// (0x0008208a) aid_size_touch_vded2_start

0x1c26,	// (0x00082092) vded2_slider_bg_pane

0x1c2f,	// (0x0008209b) vded2_slider_pane_g1

0x1c38,	// (0x000820a4) vded2_slider_pane_g2

0xb8d5,	// (0x0008bd41) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0008ff6d) vded2_slider_pane_g

0x1c40,	// (0x000820ac) vded2_slider_bg_pane_g1

0x1c49,	// (0x000820b5) vded2_slider_bg_pane_g2

0x1c52,	// (0x000820be) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x0008fc33) vded2_slider_bg_pane_g

0x80a2,	// (0x0008850e) aid_postcard_touch_down_pane_ParamLimits

0x80a2,	// (0x0008850e) aid_postcard_touch_down_pane

0x80b2,	// (0x0008851e) aid_postcard_touch_up_pane_ParamLimits

0x80b2,	// (0x0008851e) aid_postcard_touch_up_pane

0x0206,	// (0x00080672) main_blid2_pane

0xefa5,	// (0x0008f411) popup_blid2_search_window

0x0206,	// (0x00080672) blid2_gps_pane

0x0206,	// (0x00080672) blid2_navig_pane

0x0206,	// (0x00080672) blid2_search_pane

0x0206,	// (0x00080672) blid2_tripm_pane

0xb8de,	// (0x0008bd4a) blid2_search_pane_g1_ParamLimits

0xb8de,	// (0x0008bd4a) blid2_search_pane_g1

0xb8ee,	// (0x0008bd5a) blid2_search_pane_t1_ParamLimits

0xb8ee,	// (0x0008bd5a) blid2_search_pane_t1

0xb900,	// (0x0008bd6c) aid_size_cell_blid2_gps_ParamLimits

0xb900,	// (0x0008bd6c) aid_size_cell_blid2_gps

0xb910,	// (0x0008bd7c) blid2_gps_pane_g1_ParamLimits

0xb910,	// (0x0008bd7c) blid2_gps_pane_g1

0xb91c,	// (0x0008bd88) grid_blid2_satellite_pane_ParamLimits

0xb91c,	// (0x0008bd88) grid_blid2_satellite_pane

0xb92a,	// (0x0008bd96) blid2_navig_pane_g1_ParamLimits

0xb92a,	// (0x0008bd96) blid2_navig_pane_g1

0xb936,	// (0x0008bda2) blid2_navig_pane_t1_ParamLimits

0xb936,	// (0x0008bda2) blid2_navig_pane_t1

0xb948,	// (0x0008bdb4) blid2_navig_pane_t2_ParamLimits

0xb948,	// (0x0008bdb4) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x0008ff74) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x0008ff74) blid2_navig_pane_t

0xb95a,	// (0x0008bdc6) blid2_navig_ring_pane_ParamLimits

0xb95a,	// (0x0008bdc6) blid2_navig_ring_pane

0xb96a,	// (0x0008bdd6) blid2_speed_pane_ParamLimits

0xb96a,	// (0x0008bdd6) blid2_speed_pane

0xb976,	// (0x0008bde2) blid2_tripm_pane_g1_ParamLimits

0xb976,	// (0x0008bde2) blid2_tripm_pane_g1

0xb986,	// (0x0008bdf2) blid2_tripm_pane_g2_ParamLimits

0xb986,	// (0x0008bdf2) blid2_tripm_pane_g2

0xb992,	// (0x0008bdfe) blid2_tripm_pane_g3_ParamLimits

0xb992,	// (0x0008bdfe) blid2_tripm_pane_g3

0xb99e,	// (0x0008be0a) blid2_tripm_pane_g4_ParamLimits

0xb99e,	// (0x0008be0a) blid2_tripm_pane_g4

0xb9aa,	// (0x0008be16) blid2_tripm_pane_g5_ParamLimits

0xb9aa,	// (0x0008be16) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x0008ff79) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x0008ff79) blid2_tripm_pane_g

0xb9c6,	// (0x0008be32) blid2_tripm_pane_t1_ParamLimits

0xb9c6,	// (0x0008be32) blid2_tripm_pane_t1

0xb9da,	// (0x0008be46) blid2_tripm_pane_t2_ParamLimits

0xb9da,	// (0x0008be46) blid2_tripm_pane_t2

0xb9ec,	// (0x0008be58) blid2_tripm_pane_t3_ParamLimits

0xb9ec,	// (0x0008be58) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x0008ff86) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x0008ff86) blid2_tripm_pane_t

0xba1e,	// (0x0008be8a) cell_blid2_satellite_pane_ParamLimits

0xba1e,	// (0x0008be8a) cell_blid2_satellite_pane

0xba3c,	// (0x0008bea8) cell_blid2_satellite_pane_g1

0x1c5b,	// (0x000820c7) cell_blid2_satellite_pane_t1

0x0aa9,	// (0x00080f15) blid2_speed_pane_g1

0x1c69,	// (0x000820d5) blid2_speed_pane_t1

0x1c77,	// (0x000820e3) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x0008ff8f) blid2_speed_pane_t

0x0aa9,	// (0x00080f15) blid2_navig_ring_pane_g1

0xba45,	// (0x0008beb1) blid2_navig_ring_pane_g2

0xba4d,	// (0x0008beb9) blid2_navig_ring_pane_g3

0xba55,	// (0x0008bec1) blid2_navig_ring_pane_g4

0xba5d,	// (0x0008bec9) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x0008ff94) blid2_navig_ring_pane_g

0x0206,	// (0x00080672) bg_popup_window_pane_cp011

0x1c85,	// (0x000820f1) popup_blid2_search_window_g1

0x1c8d,	// (0x000820f9) popup_blid2_search_window_t1

0x1c9b,	// (0x00082107) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x0008ff9f) popup_blid2_search_window_t

0x41f6,	// (0x00084662) main_browser_pane_g1

0x3efd,	// (0x00084369) main_browser_pane_ParamLimits

0xa7c9,	// (0x0008ac35) bg_button_pane_cp011_ParamLimits

0xaa95,	// (0x0008af01) cell_vitu2_function_pane_g1_ParamLimits

0xef97,	// (0x0008f403) bg_popup_sub_pane_cp22_ParamLimits

0xb371,	// (0x0008b7dd) input_focus_pane_cp08_ParamLimits

0xb388,	// (0x0008b7f4) popup_vitu2_query_button_pane_ParamLimits

0xb388,	// (0x0008b7f4) popup_vitu2_query_button_pane

0xb399,	// (0x0008b805) popup_vitu2_query_input_button_pane

0x1838,	// (0x00081ca4) popup_vitu2_query_window_g1_ParamLimits

0xb3a3,	// (0x0008b80f) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0008fea7) popup_vitu2_query_window_g_ParamLimits

0x0206,	// (0x00080672) bg_button_pane_cp026

0xba65,	// (0x0008bed1) popup_vitu2_query_input_button_pane_g1

0x0206,	// (0x00080672) bg_button_pane_cp025

0x1ca9,	// (0x00082115) popup_vitu2_query_button_pane_t1

0x9223,	// (0x0008968f) main_mp3_pane_t6

0x9233,	// (0x0008969f) popup_slider_window_cp01

0xa6e8,	// (0x0008ab54) cam4_battery_pane

0xa7d7,	// (0x0008ac43) cam4_battery_pane_cp02

0xb7ce,	// (0x0008bc3a) cam4_battery_pane_cp01

0xb7d8,	// (0x0008bc44) cam4_battery_pane_cp03

0x1cb7,	// (0x00082123) cam4_battery_pane_g1

0x0aa9,	// (0x00080f15) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x0008ffa4) cam4_battery_pane_g

0x096f,	// (0x00080ddb) popup_blid_sat_info2_window_t11

0x7927,	// (0x00087d93) aid_size_touch_mv_arrow_left_ParamLimits

0x7952,	// (0x00087dbe) aid_size_touch_mv_arrow_right_ParamLimits

0xdaec,	// (0x0008df58) navi_pane_g1_ParamLimits

0x797b,	// (0x00087de7) navi_pane_g2_ParamLimits

0x79a9,	// (0x00087e15) navi_pane_g3_ParamLimits

0xf409,	// (0x0008f875) navi_pane_g_ParamLimits

0x7a03,	// (0x00087e6f) navi_pane_mv_t1_ParamLimits

0x9cbc,	// (0x0008a128) grid_imed_effect_pane_ParamLimits

0x66a3,	// (0x00086b0f) aid_placing_vt_slider_lsc

0x4143,	// (0x000845af) aid_placing_vt_slider_prt

0x027f,	// (0x000806eb) bg_tb_trans_pane_cp01_ParamLimits

0x0bf9,	// (0x00081065) popup_image_details_window_g1_ParamLimits

0x0c0c,	// (0x00081078) popup_image_details_window_g2_ParamLimits

0x0c21,	// (0x0008108d) popup_image_details_window_g3_ParamLimits

0x0c21,	// (0x0008108d) popup_image_details_window_g3

0xf73c,	// (0x0008fba8) popup_image_details_window_g_ParamLimits

0x0c35,	// (0x000810a1) popup_image_details_window_t1_ParamLimits

0x0c47,	// (0x000810b3) popup_image_details_window_t2_ParamLimits

0x0c60,	// (0x000810cc) popup_image_details_window_t3_ParamLimits

0x0c74,	// (0x000810e0) popup_image_details_window_t4_ParamLimits

0x0c8f,	// (0x000810fb) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0008fbaf) popup_image_details_window_t_ParamLimits

0xb70c,	// (0x0008bb78) cl_header_name_pane_ParamLimits

0xb70c,	// (0x0008bb78) cl_header_name_pane

0xba6d,	// (0x0008bed9) cl_header_name_pane_t1_ParamLimits

0xba6d,	// (0x0008bed9) cl_header_name_pane_t1

0xba84,	// (0x0008bef0) cl_header_name_pane_t2_ParamLimits

0xba84,	// (0x0008bef0) cl_header_name_pane_t2

0xbaae,	// (0x0008bf1a) cl_header_name_pane_t3_ParamLimits

0xbaae,	// (0x0008bf1a) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x0008ffa9) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x0008ffa9) cl_header_name_pane_t

0x79d4,	// (0x00087e40) navi_pane_mv_g2_ParamLimits

0x153b,	// (0x000819a7) field_vitu2_entry_pane_g1_ParamLimits

0x1547,	// (0x000819b3) field_vitu2_entry_pane_g2_ParamLimits

0x1553,	// (0x000819bf) field_vitu2_entry_pane_g3_ParamLimits

0x1553,	// (0x000819bf) field_vitu2_entry_pane_g3

0xf93a,	// (0x0008fda6) field_vitu2_entry_pane_g_ParamLimits

0xaa25,	// (0x0008ae91) cell_vitu2_itu_pane_g1_ParamLimits

0xaa35,	// (0x0008aea1) cell_vitu2_itu_pane_g2_ParamLimits

0xaa35,	// (0x0008aea1) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0008fdb2) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0008fdb2) cell_vitu2_itu_pane_g

0xa7c9,	// (0x0008ac35) bg_vkb2_func_pane_cp05_ParamLimits

0xa7c9,	// (0x0008ac35) bg_vkb2_func_pane_cp05

0xa7c9,	// (0x0008ac35) bg_vkb2_func_pane_cp03

0xa7c9,	// (0x0008ac35) bg_vkb2_func_pane_cp04

0xa7c9,	// (0x0008ac35) bg_vkb2_func_pane_cp10_ParamLimits

0xa7c9,	// (0x0008ac35) bg_vkb2_func_pane_cp10

0xb6ae,	// (0x0008bb1a) bg_vkb2_func_pane_cp08

0xb694,	// (0x0008bb00) bg_vkb2_func_pane_cp06

0xb6a2,	// (0x0008bb0e) bg_vkb2_func_pane_cp07

0x1bad,	// (0x00082019) bg_vkb2_func_pane_cp11_ParamLimits

0x1bad,	// (0x00082019) bg_vkb2_func_pane_cp11

0x1bc2,	// (0x0008202e) bg_vkb2_func_pane_cp12_ParamLimits

0x1bc2,	// (0x0008202e) bg_vkb2_func_pane_cp12

0x0206,	// (0x00080672) bg_vkb2_func_pane_cp09

0x1590,	// (0x000819fc) bg_vkb2_func_pane_g1

0x4307,	// (0x00084773) bg_vkb2_func_pane_g2

0x1598,	// (0x00081a04) bg_vkb2_func_pane_g3

0x15a0,	// (0x00081a0c) bg_vkb2_func_pane_g4

0x17e3,	// (0x00081c4f) bg_vkb2_func_pane_g5

0x15b8,	// (0x00081a24) bg_vkb2_func_pane_g6

0x15c0,	// (0x00081a2c) bg_vkb2_func_pane_g7

0x15b0,	// (0x00081a1c) bg_vkb2_func_pane_g8

0x42e7,	// (0x00084753) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x0008ffb0) bg_vkb2_func_pane_g

0xb9b8,	// (0x0008be24) blid2_tripm_pane_g6_ParamLimits

0xb9b8,	// (0x0008be24) blid2_tripm_pane_g6

0x13ab,	// (0x00081817) mp4_progress_pane_g1

0xba12,	// (0x0008be7e) blid2_tripm_values_pane_ParamLimits

0xba12,	// (0x0008be7e) blid2_tripm_values_pane

0xbad3,	// (0x0008bf3f) blid2_tripm_values_pane_t1

0xbae1,	// (0x0008bf4d) blid2_tripm_values_pane_t2

0xbaef,	// (0x0008bf5b) blid2_tripm_values_pane_t3

0xbafd,	// (0x0008bf69) blid2_tripm_values_pane_t4

0xbb0b,	// (0x0008bf77) blid2_tripm_values_pane_t5

0xbb19,	// (0x0008bf85) blid2_tripm_values_pane_t6

0xbb27,	// (0x0008bf93) blid2_tripm_values_pane_t7

0xbb35,	// (0x0008bfa1) blid2_tripm_values_pane_t8

0xbb43,	// (0x0008bfaf) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x0008ffc3) blid2_tripm_values_pane_t

0x66e1,	// (0x00086b4d) call_video_pane_t1_ParamLimits

0x66fe,	// (0x00086b6a) call_video_pane_t2_ParamLimits

0xf292,	// (0x0008f6fe) call_video_pane_t_ParamLimits

0x7f63,	// (0x000883cf) msg_header_pane_g1_ParamLimits

0xdd09,	// (0x0008e175) msg_header_pane_g2_ParamLimits

0xdd09,	// (0x0008e175) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0008f918) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0008f918) msg_header_pane_g

0x3efd,	// (0x00084369) main_clock2_pane_ParamLimits

0x9a3b,	// (0x00089ea7) grid_clock2_toolbar_pane_ParamLimits

0x9a3b,	// (0x00089ea7) grid_clock2_toolbar_pane

0x9a3b,	// (0x00089ea7) listscroll_clock2_pane_ParamLimits

0x9a3b,	// (0x00089ea7) listscroll_clock2_pane

0x9af3,	// (0x00089f5f) main_clock2_pane_t3_ParamLimits

0x9af3,	// (0x00089f5f) main_clock2_pane_t3

0x9b05,	// (0x00089f71) main_clock2_pane_t4_ParamLimits

0x9b05,	// (0x00089f71) main_clock2_pane_t4

0x1cc1,	// (0x0008212d) cell_clock2_toolbar_pane

0x1cc9,	// (0x00082135) cell_clock2_toolbar_pane_cp01

0x1cc9,	// (0x00082135) cell_clock2_toolbar_pane_cp02

0x1cd1,	// (0x0008213d) cell_clock2_toolbar_pane_cp03

0x1cd9,	// (0x00082145) list_clock2_pane

0xda52,	// (0x0008debe) scroll_pane_cp10

0x1ce1,	// (0x0008214d) list_single_clock2_pane_ParamLimits

0x1ce1,	// (0x0008214d) list_single_clock2_pane

0xdb8c,	// (0x0008dff8) list_highlight_pane_cp08

0x1cee,	// (0x0008215a) list_single_clock2_pane_t1

0x1cfc,	// (0x00082168) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x0008ffd6) list_single_clock2_pane_t

0x0206,	// (0x00080672) bg_button_pane_cp10

0x1d0a,	// (0x00082176) cell_clock2_toolbar_pane_g1

0x8004,	// (0x00088470) aid_main_viewer_pane_g1_ParamLimits

0x8004,	// (0x00088470) aid_main_viewer_pane_g1

0x8010,	// (0x0008847c) aid_main_viewer_pane_g2_ParamLimits

0x8010,	// (0x0008847c) aid_main_viewer_pane_g2

0x801c,	// (0x00088488) aid_main_viewer_pane_g3_ParamLimits

0x801c,	// (0x00088488) aid_main_viewer_pane_g3

0x802d,	// (0x00088499) aid_main_viewer_pane_g4_ParamLimits

0x802d,	// (0x00088499) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0008f929) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0008f929) aid_main_viewer_pane_g

0x87bd,	// (0x00088c29) main_calc_pane_ParamLimits

0x87ca,	// (0x00088c36) main_dialer2_pane_ParamLimits

0x0206,	// (0x00080672) main_cam6_pane

0x0206,	// (0x00080672) main_vid6_pane

0x9a47,	// (0x00089eb3) listscroll_gen_pane_cp06_ParamLimits

0x9a47,	// (0x00089eb3) listscroll_gen_pane_cp06

0x9b17,	// (0x00089f83) main_clock2_pane_t5_ParamLimits

0x9b17,	// (0x00089f83) main_clock2_pane_t5

0x9b66,	// (0x00089fd2) aid_call2_pane_cp10_ParamLimits

0x9b78,	// (0x00089fe4) aid_call_pane_cp10_ParamLimits

0xdac1,	// (0x0008df2d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdac1,	// (0x0008df2d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9b8a,	// (0x00089ff6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9b8a,	// (0x00089ff6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdac1,	// (0x0008df2d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0008fc5f) popup_clock_analogue_window_cp10_g_ParamLimits

0x9b9c,	// (0x0008a008) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa345,	// (0x0008a7b1) cell_dialer2_keypad_pane_g2_ParamLimits

0xa345,	// (0x0008a7b1) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0008fd45) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0008fd45) cell_dialer2_keypad_pane_g

0xa361,	// (0x0008a7cd) cell_dialer2_keypad_pane_t1

0xad72,	// (0x0008b1de) main_cset_text2_pane_ParamLimits

0xad72,	// (0x0008b1de) main_cset_text2_pane

0x1a30,	// (0x00081e9c) area_vitu2_query_pane_g1_ParamLimits

0xb633,	// (0x0008ba9f) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0008fefa) area_vitu2_query_pane_g_ParamLimits

0x1ab4,	// (0x00081f20) area_vitu2_query_pane_t7_ParamLimits

0x1ab4,	// (0x00081f20) area_vitu2_query_pane_t7

0xb694,	// (0x0008bb00) bg_button_pane_cp018_ParamLimits

0xb6a2,	// (0x0008bb0e) bg_button_pane_cp021_ParamLimits

0xb6ae,	// (0x0008bb1a) bg_button_pane_cp022_ParamLimits

0xb6ae,	// (0x0008bb1a) bg_vkb2_func_pane_cp08_ParamLimits

0xb694,	// (0x0008bb00) bg_vkb2_func_pane_cp06_ParamLimits

0xb6a2,	// (0x0008bb0e) bg_vkb2_func_pane_cp07_ParamLimits

0xb6bf,	// (0x0008bb2b) input_focus_pane_cp09_ParamLimits

0xbb51,	// (0x0008bfbd) cam6_autofocus_pane_ParamLimits

0xbb51,	// (0x0008bfbd) cam6_autofocus_pane

0xbb73,	// (0x0008bfdf) cam6_image_uncrop_pane_ParamLimits

0xbb73,	// (0x0008bfdf) cam6_image_uncrop_pane

0xbba0,	// (0x0008c00c) cam6_indi_pane_ParamLimits

0xbba0,	// (0x0008c00c) cam6_indi_pane

0xbbba,	// (0x0008c026) cam6_mode_pane_ParamLimits

0xbbba,	// (0x0008c026) cam6_mode_pane

0xbbce,	// (0x0008c03a) cam6_timer_pane_ParamLimits

0xbbce,	// (0x0008c03a) cam6_timer_pane

0xbbda,	// (0x0008c046) cam6_zoom_pane_ParamLimits

0xbbda,	// (0x0008c046) cam6_zoom_pane

0xbbf8,	// (0x0008c064) cam6_mode_pane_g1_ParamLimits

0xbbf8,	// (0x0008c064) cam6_mode_pane_g1

0xbc04,	// (0x0008c070) cam6_mode_pane_g2_ParamLimits

0xbc04,	// (0x0008c070) cam6_mode_pane_g2

0xbc10,	// (0x0008c07c) cam6_mode_pane_g3_ParamLimits

0xbc10,	// (0x0008c07c) cam6_mode_pane_g3

0xbc1c,	// (0x0008c088) cam6_mode_pane_g4_ParamLimits

0xbc1c,	// (0x0008c088) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x0008ffdb) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x0008ffdb) cam6_mode_pane_g

0x1d12,	// (0x0008217e) bg_tb_trans_pane_cp08_ParamLimits

0x1d12,	// (0x0008217e) bg_tb_trans_pane_cp08

0x1d20,	// (0x0008218c) cam6_battery_pane_ParamLimits

0x1d20,	// (0x0008218c) cam6_battery_pane

0x1d36,	// (0x000821a2) cam6_indi_pane_g1_ParamLimits

0x1d36,	// (0x000821a2) cam6_indi_pane_g1

0x1d48,	// (0x000821b4) cam6_indi_pane_g2_ParamLimits

0x1d48,	// (0x000821b4) cam6_indi_pane_g2

0x1d5a,	// (0x000821c6) cam6_indi_pane_g3_ParamLimits

0x1d5a,	// (0x000821c6) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x0008ffe4) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x0008ffe4) cam6_indi_pane_g

0x1d6c,	// (0x000821d8) cam6_indi_pane_t1_ParamLimits

0x1d6c,	// (0x000821d8) cam6_indi_pane_t1

0xa83d,	// (0x0008aca9) cam6_autofocus_pane_g1

0xa835,	// (0x0008aca1) cam6_autofocus_pane_g2

0xa84d,	// (0x0008acb9) cam6_autofocus_pane_g3

0xa845,	// (0x0008acb1) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x0008ffeb) cam6_autofocus_pane_g

0x1d92,	// (0x000821fe) cam6_timer_pane_g1

0x1d9a,	// (0x00082206) cam6_timer_pane_t1

0x1da8,	// (0x00082214) cam6_zoom_cont_pane

0x1db0,	// (0x0008221c) cam6_zoom_pane_g1

0x1db8,	// (0x00082224) cam6_zoom_pane_g2

0xbc28,	// (0x0008c094) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x0008fff4) cam6_zoom_pane_g

0x0aa9,	// (0x00080f15) cam6_battery_pane_g1

0x0aa9,	// (0x00080f15) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0008fb6c) cam6_battery_pane_g

0x1dc0,	// (0x0008222c) cam6_zoom_cont_pane_g1

0x1dc9,	// (0x00082235) cam6_zoom_cont_pane_g2

0x1dd2,	// (0x0008223e) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x0008fffb) cam6_zoom_cont_pane_g

0xbc45,	// (0x0008c0b1) cam6_mode_pane_cp_ParamLimits

0xbc45,	// (0x0008c0b1) cam6_mode_pane_cp

0xbc59,	// (0x0008c0c5) cam6_zoom_pane_cp_ParamLimits

0xbc59,	// (0x0008c0c5) cam6_zoom_pane_cp

0xbc77,	// (0x0008c0e3) vid6_image_uncrop_cif_pane_ParamLimits

0xbc77,	// (0x0008c0e3) vid6_image_uncrop_cif_pane

0xbca3,	// (0x0008c10f) vid6_image_uncrop_nhd_pane_ParamLimits

0xbca3,	// (0x0008c10f) vid6_image_uncrop_nhd_pane

0xbcc2,	// (0x0008c12e) vid6_image_uncrop_vga_pane_ParamLimits

0xbcc2,	// (0x0008c12e) vid6_image_uncrop_vga_pane

0xbce1,	// (0x0008c14d) vid6_image_uncrop_wvga_pane_ParamLimits

0xbce1,	// (0x0008c14d) vid6_image_uncrop_wvga_pane

0xbd00,	// (0x0008c16c) vid6_indi_pane_ParamLimits

0xbd00,	// (0x0008c16c) vid6_indi_pane

0x1d12,	// (0x0008217e) bg_tb_trans_pane_cp09_ParamLimits

0x1d12,	// (0x0008217e) bg_tb_trans_pane_cp09

0x1dea,	// (0x00082256) cam6_battery_pane_cp_ParamLimits

0x1dea,	// (0x00082256) cam6_battery_pane_cp

0x1df6,	// (0x00082262) vid6_indi_pane_g1_ParamLimits

0x1df6,	// (0x00082262) vid6_indi_pane_g1

0x1e08,	// (0x00082274) vid6_indi_pane_g2_ParamLimits

0x1e08,	// (0x00082274) vid6_indi_pane_g2

0x1e1a,	// (0x00082286) vid6_indi_pane_g3_ParamLimits

0x1e1a,	// (0x00082286) vid6_indi_pane_g3

0x1e31,	// (0x0008229d) vid6_indi_pane_g4_ParamLimits

0x1e31,	// (0x0008229d) vid6_indi_pane_g4

0x1e48,	// (0x000822b4) vid6_indi_pane_g5_ParamLimits

0x1e48,	// (0x000822b4) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x00090002) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x00090002) vid6_indi_pane_g

0x1e62,	// (0x000822ce) vid6_indi_pane_t1_ParamLimits

0x1e62,	// (0x000822ce) vid6_indi_pane_t1

0x1e78,	// (0x000822e4) vid6_indi_pane_t2_ParamLimits

0x1e78,	// (0x000822e4) vid6_indi_pane_t2

0x1ea0,	// (0x0008230c) vid6_indi_pane_t3_ParamLimits

0x1ea0,	// (0x0008230c) vid6_indi_pane_t3

0x1ec8,	// (0x00082334) vid6_indi_pane_t4_ParamLimits

0x1ec8,	// (0x00082334) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x0009000d) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x0009000d) vid6_indi_pane_t

0x1eec,	// (0x00082358) wait_bar_pane_cp08

0xbd25,	// (0x0008c191) main_cset_text2_pane_t1_ParamLimits

0xbd25,	// (0x0008c191) main_cset_text2_pane_t1

0xbc30,	// (0x0008c09c) listscroll_gen_pane_cp06_t1_ParamLimits

0xbc30,	// (0x0008c09c) listscroll_gen_pane_cp06_t1

0x0206,	// (0x00080672) main_cam6_set_pane

0xa6da,	// (0x0008ab46) bg_tb_trans_pane_cp06_ParamLimits

0xa6f0,	// (0x0008ab5c) cam4_indicators_pane_g1_ParamLimits

0xa6fd,	// (0x0008ab69) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0008fd82) cam4_indicators_pane_g_ParamLimits

0xa71d,	// (0x0008ab89) cam4_indicators_pane_t1_ParamLimits

0xa7c9,	// (0x0008ac35) bg_tb_trans_pane_cp07_ParamLimits

0xa6f0,	// (0x0008ab5c) vid4_indicators_pane_g1_ParamLimits

0xa7e1,	// (0x0008ac4d) vid4_indicators_pane_g2_ParamLimits

0xa7ee,	// (0x0008ac5a) vid4_indicators_pane_g3_ParamLimits

0xa7ff,	// (0x0008ac6b) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0008fd94) vid4_indicators_pane_g_ParamLimits

0xa81b,	// (0x0008ac87) vid4_indicators_pane_t1_ParamLimits

0xb7e0,	// (0x0008bc4c) vid4_progress_pane_g1_ParamLimits

0xb7ec,	// (0x0008bc58) vid4_progress_pane_g2_ParamLimits

0xb7f8,	// (0x0008bc64) vid4_progress_pane_g3_ParamLimits

0xb807,	// (0x0008bc73) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0008ff45) vid4_progress_pane_g_ParamLimits

0xb825,	// (0x0008bc91) vid4_progress_pane_t1_ParamLimits

0xb83b,	// (0x0008bca7) vid4_progress_pane_t2_ParamLimits

0xb851,	// (0x0008bcbd) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0008ff50) vid4_progress_pane_t_ParamLimits

0xb866,	// (0x0008bcd2) wait_bar_pane_cp07_ParamLimits

0xbd4c,	// (0x0008c1b8) main_cam6_set_pane_g2_ParamLimits

0xbd4c,	// (0x0008c1b8) main_cam6_set_pane_g2

0xbd58,	// (0x0008c1c4) main_cset6_listscroll_pane_ParamLimits

0xbd58,	// (0x0008c1c4) main_cset6_listscroll_pane

0xbd85,	// (0x0008c1f1) main_cset6_slider_pane_ParamLimits

0xbd85,	// (0x0008c1f1) main_cset6_slider_pane

0xbd91,	// (0x0008c1fd) main_cset6_text2_pane_ParamLimits

0xbd91,	// (0x0008c1fd) main_cset6_text2_pane

0x1efb,	// (0x00082367) main_cset6_text_pane

0x1f03,	// (0x0008236f) main_cset_list_pane_copy1_ParamLimits

0x1f03,	// (0x0008236f) main_cset_list_pane_copy1

0x1f13,	// (0x0008237f) scroll_pane_cp028_copy1

0xbda4,	// (0x0008c210) cset_list_set_pane_copy1

0xbdb4,	// (0x0008c220) aid_position_infowindow_above_copy1

0xbdbc,	// (0x0008c228) aid_position_infowindow_below_copy1

0xbdc4,	// (0x0008c230) cset_list_set_pane_g1_copy1

0xbdcc,	// (0x0008c238) cset_list_set_pane_g3_copy1_ParamLimits

0xbdcc,	// (0x0008c238) cset_list_set_pane_g3_copy1

0xbddb,	// (0x0008c247) cset_list_set_pane_t1_copy1_ParamLimits

0xbddb,	// (0x0008c247) cset_list_set_pane_t1_copy1

0x027f,	// (0x000806eb) list_highlight_pane_cp021_copy1_ParamLimits

0x027f,	// (0x000806eb) list_highlight_pane_cp021_copy1

0x1f40,	// (0x000823ac) cset6_slider_pane_ParamLimits

0x1f40,	// (0x000823ac) cset6_slider_pane

0x1f6c,	// (0x000823d8) main_cset6_slider_pane_g1_ParamLimits

0x1f6c,	// (0x000823d8) main_cset6_slider_pane_g1

0xbdf0,	// (0x0008c25c) main_cset6_slider_pane_g2_ParamLimits

0xbdf0,	// (0x0008c25c) main_cset6_slider_pane_g2

0x1f94,	// (0x00082400) main_cset6_slider_pane_g3_ParamLimits

0x1f94,	// (0x00082400) main_cset6_slider_pane_g3

0xbe18,	// (0x0008c284) main_cset6_slider_pane_g4_ParamLimits

0xbe18,	// (0x0008c284) main_cset6_slider_pane_g4

0xbe24,	// (0x0008c290) main_cset6_slider_pane_g5_ParamLimits

0xbe24,	// (0x0008c290) main_cset6_slider_pane_g5

0x16c3,	// (0x00081b2f) main_cset6_slider_pane_g7_ParamLimits

0x16c3,	// (0x00081b2f) main_cset6_slider_pane_g7

0x16cf,	// (0x00081b3b) main_cset6_slider_pane_g8_ParamLimits

0x16cf,	// (0x00081b3b) main_cset6_slider_pane_g8

0xbe30,	// (0x0008c29c) main_cset6_slider_pane_g9_ParamLimits

0xbe30,	// (0x0008c29c) main_cset6_slider_pane_g9

0xbe3c,	// (0x0008c2a8) main_cset6_slider_pane_g10_ParamLimits

0xbe3c,	// (0x0008c2a8) main_cset6_slider_pane_g10

0xbe48,	// (0x0008c2b4) main_cset6_slider_pane_g11_ParamLimits

0xbe48,	// (0x0008c2b4) main_cset6_slider_pane_g11

0xbe54,	// (0x0008c2c0) main_cset6_slider_pane_g12_ParamLimits

0xbe54,	// (0x0008c2c0) main_cset6_slider_pane_g12

0xbe60,	// (0x0008c2cc) main_cset6_slider_pane_g13_ParamLimits

0xbe60,	// (0x0008c2cc) main_cset6_slider_pane_g13

0xbe6c,	// (0x0008c2d8) main_cset6_slider_pane_g14_ParamLimits

0xbe6c,	// (0x0008c2d8) main_cset6_slider_pane_g14

0xbe78,	// (0x0008c2e4) main_cset6_slider_pane_g15_ParamLimits

0xbe78,	// (0x0008c2e4) main_cset6_slider_pane_g15

0xbe90,	// (0x0008c2fc) main_cset6_slider_pane_g16_ParamLimits

0xbe90,	// (0x0008c2fc) main_cset6_slider_pane_g16

0xbe9c,	// (0x0008c308) main_cset6_slider_pane_g17_ParamLimits

0xbe9c,	// (0x0008c308) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x00090016) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x00090016) main_cset6_slider_pane_g

0x1fa0,	// (0x0008240c) main_cset6_slider_pane_t1_ParamLimits

0x1fa0,	// (0x0008240c) main_cset6_slider_pane_t1

0xbec0,	// (0x0008c32c) main_cset6_slider_pane_t2_ParamLimits

0xbec0,	// (0x0008c32c) main_cset6_slider_pane_t2

0xbeeb,	// (0x0008c357) main_cset6_slider_pane_t3_ParamLimits

0xbeeb,	// (0x0008c357) main_cset6_slider_pane_t3

0xbf16,	// (0x0008c382) main_cset6_slider_pane_t4_ParamLimits

0xbf16,	// (0x0008c382) main_cset6_slider_pane_t4

0xbf41,	// (0x0008c3ad) main_cset6_slider_pane_t5_ParamLimits

0xbf41,	// (0x0008c3ad) main_cset6_slider_pane_t5

0x1fe1,	// (0x0008244d) main_cset6_slider_pane_t7_ParamLimits

0x1fe1,	// (0x0008244d) main_cset6_slider_pane_t7

0xbf6c,	// (0x0008c3d8) main_cset6_slider_pane_t8_ParamLimits

0xbf6c,	// (0x0008c3d8) main_cset6_slider_pane_t8

0xbf90,	// (0x0008c3fc) main_cset6_slider_pane_t9_ParamLimits

0xbf90,	// (0x0008c3fc) main_cset6_slider_pane_t9

0xbfb4,	// (0x0008c420) main_cset6_slider_pane_t10_ParamLimits

0xbfb4,	// (0x0008c420) main_cset6_slider_pane_t10

0xbfd8,	// (0x0008c444) main_cset6_slider_pane_t11_ParamLimits

0xbfd8,	// (0x0008c444) main_cset6_slider_pane_t11

0x2017,	// (0x00082483) main_cset6_slider_pane_t14_ParamLimits

0x2017,	// (0x00082483) main_cset6_slider_pane_t14

0x2050,	// (0x000824bc) main_cset6_slider_pane_t15_ParamLimits

0x2050,	// (0x000824bc) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x0009003b) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x0009003b) main_cset6_slider_pane_t

0x1787,	// (0x00081bf3) cset_slider_pane_g1_copy1

0x1790,	// (0x00081bfc) cset_slider_pane_g2_copy1

0x1799,	// (0x00081c05) cset_slider_pane_g3_copy1

0x0206,	// (0x00080672) bg_popup_sub_pane_cp011_copy1

0x1844,	// (0x00081cb0) main_cset_text_pane_g1_copy1

0x184c,	// (0x00081cb8) main_cset_text_pane_t1_copy1

0x185a,	// (0x00081cc6) main_cset_text_pane_t2_copy1

0x1868,	// (0x00081cd4) main_cset_text_pane_t3_copy1

0x1876,	// (0x00081ce2) main_cset_text_pane_t4_copy1

0x1884,	// (0x00081cf0) main_cset_text_pane_t5_copy1

0x1892,	// (0x00081cfe) main_cset_text_pane_t6_copy1

0x18a0,	// (0x00081d0c) main_cset_text_pane_t7_copy1

0xbffc,	// (0x0008c468) main_cset_text2_pane_t1_copy1

0x0206,	// (0x00080672) main_ncimui_pane

0x880f,	// (0x00088c7b) popup_query_ncimui_window_ParamLimits

0x880f,	// (0x00088c7b) popup_query_ncimui_window

0x0d7a,	// (0x000811e6) field_cale_ev2_pane_g4_ParamLimits

0x0d7a,	// (0x000811e6) field_cale_ev2_pane_g4

0xa085,	// (0x0008a4f1) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa085,	// (0x0008a4f1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0008fd20) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0008fd20) cell_video_dialer_keypad_pane_g

0xa09d,	// (0x0008a509) cell_video_dialer_keypad_pane_t1

0x0206,	// (0x00080672) bg_popup_window_pane_cp012

0xd93e,	// (0x0008ddaa) heading_pane_cp06

0x2178,	// (0x000825e4) ncim_query_content_pane

0x0206,	// (0x00080672) bg_popup_heading_pane_cp01

0x2180,	// (0x000825ec) ncim_heading_pane_t1

0x218e,	// (0x000825fa) ncim_indicator_popup_pane

0x21a0,	// (0x0008260c) ncim_query_button_pane

0x21b6,	// (0x00082622) ncim_query_content_pane_t1

0x21c8,	// (0x00082634) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0009007a) ncim_query_content_pane_t

0x2202,	// (0x0008266e) ncim_query_list_pane

0x2214,	// (0x00082680) ncim_query_popup_pane

0x218e,	// (0x000825fa) ncim_indicator_popup_pane_ParamLimits

0xc127,	// (0x0008c593) ncim_query_content_pane_g1_ParamLimits

0xc127,	// (0x0008c593) ncim_query_content_pane_g1

0x21b6,	// (0x00082622) ncim_query_content_pane_t1_ParamLimits

0x21c8,	// (0x00082634) ncim_query_content_pane_t2_ParamLimits

0xc133,	// (0x0008c59f) ncim_query_content_pane_t3_ParamLimits

0xc133,	// (0x0008c59f) ncim_query_content_pane_t3

0xc150,	// (0x0008c5bc) ncim_query_content_pane_t4_ParamLimits

0xc150,	// (0x0008c5bc) ncim_query_content_pane_t4

0xc16d,	// (0x0008c5d9) ncim_query_content_pane_t5_ParamLimits

0xc16d,	// (0x0008c5d9) ncim_query_content_pane_t5

0x21da,	// (0x00082646) ncim_query_content_pane_t6_ParamLimits

0x21da,	// (0x00082646) ncim_query_content_pane_t6

0xfc0e,	// (0x0009007a) ncim_query_content_pane_t_ParamLimits

0x2202,	// (0x0008266e) ncim_query_list_pane_ParamLimits

0x2214,	// (0x00082680) ncim_query_popup_pane_ParamLimits

0x2228,	// (0x00082694) wait_bar_pane_cp04

0x0206,	// (0x00080672) input_focus_pane_cp011

0x2230,	// (0x0008269c) ncim_query_popup_pane_t1

0x223e,	// (0x000826aa) ncim_list_query_list_pane_ParamLimits

0x223e,	// (0x000826aa) ncim_list_query_list_pane

0x0206,	// (0x00080672) bg_button_pane_cp027

0x2251,	// (0x000826bd) ncim_query_button_pane_g1

0x0206,	// (0x00080672) list_highlight_pane_cp012

0x225b,	// (0x000826c7) ncim_list_query_list_pane_g1

0x2263,	// (0x000826cf) ncim_list_query_list_pane_t1

0xa70d,	// (0x0008ab79) cam4_indicators_pane_g3_ParamLimits

0xa70d,	// (0x0008ab79) cam4_indicators_pane_g3

0xa80b,	// (0x0008ac77) vid4_indicators_pane_g5_ParamLimits

0xa80b,	// (0x0008ac77) vid4_indicators_pane_g5

0xb816,	// (0x0008bc82) vid4_progress_pane_g5_ParamLimits

0xb816,	// (0x0008bc82) vid4_progress_pane_g5

0xc02e,	// (0x0008c49a) main_ncimui_pane_g1

0xc088,	// (0x0008c4f4) ncimui_group_query_pane_ParamLimits

0xc088,	// (0x0008c4f4) ncimui_group_query_pane

0xc0d2,	// (0x0008c53e) ncimui_list_pane_ParamLimits

0xc0d2,	// (0x0008c53e) ncimui_list_pane

0xc0f3,	// (0x0008c55f) ncimui_text_pane_ParamLimits

0xc0f3,	// (0x0008c55f) ncimui_text_pane

0xc18a,	// (0x0008c5f6) ncimui_text_pane_t1_ParamLimits

0xc18a,	// (0x0008c5f6) ncimui_text_pane_t1

0x2271,	// (0x000826dd) ncimui_list_single_graphic_pane_ParamLimits

0x2271,	// (0x000826dd) ncimui_list_single_graphic_pane

0xc1a9,	// (0x0008c615) ncimui_query_pane_ParamLimits

0xc1a9,	// (0x0008c615) ncimui_query_pane

0x0206,	// (0x00080672) list_highlight_pane_cp013

0x2281,	// (0x000826ed) ncim_list_query_list_pane_t1_copy1

0x225b,	// (0x000826c7) ncim_list_single_graphic_pane_g1

0x228f,	// (0x000826fb) ncim_query_button_pane_cp01

0x229b,	// (0x00082707) ncim_query_entry_pane_ParamLimits

0x229b,	// (0x00082707) ncim_query_entry_pane

0x22ae,	// (0x0008271a) ncimui_query_pane_g1

0x22ba,	// (0x00082726) ncimui_query_pane_t1_ParamLimits

0x22ba,	// (0x00082726) ncimui_query_pane_t1

0x027f,	// (0x000806eb) input_focus_pane_cp012

0x22d3,	// (0x0008273f) ncim_query_entry_pane_t1

0x3efd,	// (0x00084369) main_im_pane_ParamLimits

0x027f,	// (0x000806eb) main_mobtv_pane_ParamLimits

0x027f,	// (0x000806eb) main_mobtv_pane

0xbea8,	// (0x0008c314) main_cset6_slider_pane_g18_ParamLimits

0xbea8,	// (0x0008c314) main_cset6_slider_pane_g18

0xbeb4,	// (0x0008c320) main_cset6_slider_pane_g19_ParamLimits

0xbeb4,	// (0x0008c320) main_cset6_slider_pane_g19

0x1553,	// (0x000819bf) bg_main_mobtv_pane_ParamLimits

0x1553,	// (0x000819bf) bg_main_mobtv_pane

0xc1bc,	// (0x0008c628) main_mobtv_info_pane

0xc1c7,	// (0x0008c633) main_mobtv_loading_pane_ParamLimits

0xc1c7,	// (0x0008c633) main_mobtv_loading_pane

0x22e5,	// (0x00082751) main_mobtv_pg_channel_list_pane

0x22ef,	// (0x0008275b) main_mobtv_pg_hdr_pane

0xc1d4,	// (0x0008c640) main_mobtv_programe_curr_pane_ParamLimits

0xc1d4,	// (0x0008c640) main_mobtv_programe_curr_pane

0xc1e1,	// (0x0008c64d) main_mobtv_programe_next_pane_ParamLimits

0xc1e1,	// (0x0008c64d) main_mobtv_programe_next_pane

0x22f8,	// (0x00082764) popup_mobtv_noti_window

0x0aa9,	// (0x00080f15) main_tv_pg_hdr_pane_g1

0x2302,	// (0x0008276e) main_tv_pg_hdr_pane_g2

0x230a,	// (0x00082776) main_tv_pg_hdr_pane_g3

0x2312,	// (0x0008277e) main_tv_pg_hdr_pane_g4

0x231a,	// (0x00082786) main_tv_pg_hdr_pane_g5

0x2324,	// (0x00082790) main_tv_pg_hdr_pane_g6

0x232e,	// (0x0008279a) main_tv_pg_hdr_pane_g7

0x2338,	// (0x000827a4) main_tv_pg_hdr_pane_g8

0x2342,	// (0x000827ae) main_tv_pg_hdr_pane_g9

0x234c,	// (0x000827b8) main_tv_pg_hdr_pane_g10

0x2356,	// (0x000827c2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00090087) main_tv_pg_hdr_pane_g

0x2360,	// (0x000827cc) main_tv_pg_hdr_pane_t1

0x236e,	// (0x000827da) main_tv_pg_hdr_pane_t2

0x237c,	// (0x000827e8) main_tv_pg_hdr_pane_t3

0x238c,	// (0x000827f8) main_tv_pg_hdr_pane_t4

0x239c,	// (0x00082808) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0009009e) main_tv_pg_hdr_pane_t

0x23ac,	// (0x00082818) single_mobtv_pg_channel_pane_ParamLimits

0x23ac,	// (0x00082818) single_mobtv_pg_channel_pane

0x23be,	// (0x0008282a) single_mobtv_pg_channel_table_pane

0x23c7,	// (0x00082833) single_mobtv_pg_channel_thumb_pane

0x23d0,	// (0x0008283c) single_tv_pg_channel_pane_g1

0x23d9,	// (0x00082845) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x000900a9) single_tv_pg_channel_pane_g

0x0cd9,	// (0x00081145) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0cd9,	// (0x00081145) bg_single_mobtv_pg_channel_thumb_pane

0x23e2,	// (0x0008284e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x23e2,	// (0x0008284e) single_mobtv_pg_channel_thumb_pane_g1

0x23f0,	// (0x0008285c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x23f0,	// (0x0008285c) single_mobtv_pg_channel_thumb_pane_g2

0x23fc,	// (0x00082868) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x23fc,	// (0x00082868) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x000900ae) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x000900ae) single_mobtv_pg_channel_thumb_pane_g

0x2408,	// (0x00082874) single_mobtv_pg_channel_thumb_pane_t1

0x2416,	// (0x00082882) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x000900b5) single_mobtv_pg_channel_thumb_pane_t

0x0aa9,	// (0x00080f15) bg_single_mobtv_pg_channel_table_pane_g1

0x0aa9,	// (0x00080f15) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0008fb6c) bg_single_mobtv_pg_channel_table_pane_g

0x2424,	// (0x00082890) single_mobtv_pg_channel_table_pane_t1

0x2432,	// (0x0008289e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x000900ba) single_mobtv_pg_channel_table_pane_t

0xc1f6,	// (0x0008c662) main_mobtv_info_pane_g1_ParamLimits

0xc1f6,	// (0x0008c662) main_mobtv_info_pane_g1

0xc212,	// (0x0008c67e) main_mobtv_info_pane_t1_ParamLimits

0xc212,	// (0x0008c67e) main_mobtv_info_pane_t1

0xc28a,	// (0x0008c6f6) main_mobtv_info_pane_t2_ParamLimits

0xc28a,	// (0x0008c6f6) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x000900c4) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x000900c4) main_mobtv_info_pane_t

0xc31d,	// (0x0008c789) wait_bar_pane_cp05

0xc32f,	// (0x0008c79b) main_mobtv_loading_pane_g1_ParamLimits

0xc32f,	// (0x0008c79b) main_mobtv_loading_pane_g1

0xc33b,	// (0x0008c7a7) main_mobtv_loading_pane_g2_ParamLimits

0xc33b,	// (0x0008c7a7) main_mobtv_loading_pane_g2

0xc347,	// (0x0008c7b3) main_mobtv_loading_pane_g3_ParamLimits

0xc347,	// (0x0008c7b3) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x000900cb) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x000900cb) main_mobtv_loading_pane_g

0x2440,	// (0x000828ac) main_mobtv_loading_pane_t1_ParamLimits

0x2440,	// (0x000828ac) main_mobtv_loading_pane_t1

0x2458,	// (0x000828c4) main_mobtv_loading_pane_t2_ParamLimits

0x2458,	// (0x000828c4) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x000900d2) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x000900d2) main_mobtv_loading_pane_t

0xc355,	// (0x0008c7c1) wait_bar_pane_cp06_ParamLimits

0xc355,	// (0x0008c7c1) wait_bar_pane_cp06

0x247c,	// (0x000828e8) main_mobtv_programe_curr_pane_t1

0x248a,	// (0x000828f6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x000900d7) main_mobtv_programe_curr_pane_t

0x2498,	// (0x00082904) main_mobtv_programe_next_pane_t1

0x24a6,	// (0x00082912) main_mobtv_programe_next_pane_t2

0x24b4,	// (0x00082920) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x000900dc) main_mobtv_programe_next_pane_t

0x0206,	// (0x00080672) bg_popup_mobtv_noti_window_pane

0x24c2,	// (0x0008292e) popup_mobtv_noti_window_g1

0x24ca,	// (0x00082936) popup_mobtv_noti_window_t1

0x24d8,	// (0x00082944) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x000900e3) popup_mobtv_noti_window_t

0x0aa9,	// (0x00080f15) bg_popup_mobtv_noti_window_pane_g1

0x0206,	// (0x00080672) sc_clock_pane

0x0206,	// (0x00080672) main_fs_bigclock_pane

0xba00,	// (0x0008be6c) blid2_tripm_pane_t4_ParamLimits

0xba00,	// (0x0008be6c) blid2_tripm_pane_t4

0xc361,	// (0x0008c7cd) sc_clock_pane_g1_ParamLimits

0xc361,	// (0x0008c7cd) sc_clock_pane_g1

0xc36f,	// (0x0008c7db) sc_clock_pane_t1_ParamLimits

0xc36f,	// (0x0008c7db) sc_clock_pane_t1

0xc384,	// (0x0008c7f0) sc_clock_pane_t2_ParamLimits

0xc384,	// (0x0008c7f0) sc_clock_pane_t2

0xc396,	// (0x0008c802) sc_clock_pane_t3_ParamLimits

0xc396,	// (0x0008c802) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x000900e8) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x000900e8) sc_clock_pane_t

0xd184,	// (0x0008d5f0) main_fs_bigclock_indicator_pane_ParamLimits

0xd184,	// (0x0008d5f0) main_fs_bigclock_indicator_pane

0xc437,	// (0x0008c8a3) main_fs_bigclock_pane_g1_ParamLimits

0xc437,	// (0x0008c8a3) main_fs_bigclock_pane_g1

0xd190,	// (0x0008d5fc) main_fs_bigclock_pane_t1_ParamLimits

0xd190,	// (0x0008d5fc) main_fs_bigclock_pane_t1

0xd1a2,	// (0x0008d60e) main_fs_bigclock_pane_t2_ParamLimits

0xd1a2,	// (0x0008d60e) main_fs_bigclock_pane_t2

0xd1b6,	// (0x0008d622) main_fs_bigclock_pane_t3_ParamLimits

0xd1b6,	// (0x0008d622) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x000902e7) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x000902e7) main_fs_bigclock_pane_t

0x302f,	// (0x0008349b) main_fs_bigclock_indicator_pane_g1

0x21a8,	// (0x00082614) ncim_query_content_pane_g2_ParamLimits

0x21a8,	// (0x00082614) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00090075) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00090075) ncim_query_content_pane_g

0xc3a8,	// (0x0008c814) sc_clock_pane_t4_ParamLimits

0xc3a8,	// (0x0008c814) sc_clock_pane_t4

0x027f,	// (0x000806eb) main_radioblah_pane

0x149c,	// (0x00081908) cell_call4_button_pane_t1_copy1_ParamLimits

0x149c,	// (0x00081908) cell_call4_button_pane_t1_copy1

0xc038,	// (0x0008c4a4) main_ncimui_pane_t1_ParamLimits

0xc038,	// (0x0008c4a4) main_ncimui_pane_t1

0xc052,	// (0x0008c4be) main_ncimui_pane_t2_ParamLimits

0xc052,	// (0x0008c4be) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0009006e) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0009006e) main_ncimui_pane_t

0x24e6,	// (0x00082952) main_radioblah_anim_pane_ParamLimits

0x24e6,	// (0x00082952) main_radioblah_anim_pane

0x24f7,	// (0x00082963) main_radioblah_info_pane_ParamLimits

0x24f7,	// (0x00082963) main_radioblah_info_pane

0x250b,	// (0x00082977) main_radioblah_pane_t1_ParamLimits

0x250b,	// (0x00082977) main_radioblah_pane_t1

0x2527,	// (0x00082993) main_radioblah_pane_t2_ParamLimits

0x2527,	// (0x00082993) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00090109) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00090109) main_radioblah_pane_t

0xc5ba,	// (0x0008ca26) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc5ba,	// (0x0008ca26) main_radioblah_rocker_ctrl_pane

0x256f,	// (0x000829db) main_radioblah_info_pane_t1_ParamLimits

0x256f,	// (0x000829db) main_radioblah_info_pane_t1

0xc603,	// (0x0008ca6f) main_radioblah_info_pane_t2_ParamLimits

0xc603,	// (0x0008ca6f) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00090112) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00090112) main_radioblah_info_pane_t

0x0aa9,	// (0x00080f15) main_radioblah_rocker_ctrl_pane_g1

0xc6b3,	// (0x0008cb1f) main_radioblah_rocker_ctrl_pane_g2

0xc6bb,	// (0x0008cb27) main_radioblah_rocker_ctrl_pane_g3

0xc6c3,	// (0x0008cb2f) main_radioblah_rocker_ctrl_pane_g4

0xc6cb,	// (0x0008cb37) main_radioblah_rocker_ctrl_pane_g5

0xc6d3,	// (0x0008cb3f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0009011b) main_radioblah_rocker_ctrl_pane_g

0xbffc,	// (0x0008c468) main_cset_text2_pane_t1_copy1_ParamLimits

0xa62c,	// (0x0008aa98) cam4_image_uncrop_qvga_pane

0xa783,	// (0x0008abef) vid4_image_uncrop_qcif_pane

0xbb92,	// (0x0008bffe) cam6_image_uncrop_qvga_pane_ParamLimits

0xbb92,	// (0x0008bffe) cam6_image_uncrop_qvga_pane

0x1dda,	// (0x00082246) vid6_image_uncrop_qcif_pane_ParamLimits

0x1dda,	// (0x00082246) vid6_image_uncrop_qcif_pane

0x0206,	// (0x00080672) bg_popup_preview_window_pane_cp03

0x215a,	// (0x000825c6) list_cset_text2_pane

0x2162,	// (0x000825ce) main_cset6_text2_pane_g1

0x216a,	// (0x000825d6) main_cset6_text2_pane_t1

0xc6db,	// (0x0008cb47) list_cset_text2_pane_t1_ParamLimits

0xc6db,	// (0x0008cb47) list_cset_text2_pane_t1

0x027f,	// (0x000806eb) main_radioblah_pane_ParamLimits

0xc309,	// (0x0008c775) main_mobtv_info_pane_t3_ParamLimits

0xc309,	// (0x0008c775) main_mobtv_info_pane_t3

0xc5a8,	// (0x0008ca14) main_radioblah_pane_g1

0xc5d3,	// (0x0008ca3f) main_radioblah_info_pane_g1

0xc658,	// (0x0008cac4) main_radioblah_info_pane_t3_ParamLimits

0xc658,	// (0x0008cac4) main_radioblah_info_pane_t3

0x73cb,	// (0x00087837) highlight_cell_cale_month_pane_ParamLimits

0x73cb,	// (0x00087837) highlight_cell_cale_month_pane

0x0206,	// (0x00080672) main_phob_fisheye_pane

0x0e2f,	// (0x0008129b) scroll_pane_cp0031_ParamLimits

0x0e2f,	// (0x0008129b) scroll_pane_cp0031

0x1eec,	// (0x00082358) wait_bar_pane_cp08_ParamLimits

0xbda4,	// (0x0008c210) cset_list_set_pane_copy1_ParamLimits

0x25c3,	// (0x00082a2f) highlight_cell_cale_month_pane_g1

0xc6f4,	// (0x0008cb60) highlight_cell_cale_month_pane_t1

0x1b20,	// (0x00081f8c) list_gen_pane_cp01

0x16ae,	// (0x00081b1a) scroll_pane_01

0xc702,	// (0x0008cb6e) list_single_double_fisheye_pane

0x25cb,	// (0x00082a37) list_double_fisheye_pane_g1_ParamLimits

0x25cb,	// (0x00082a37) list_double_fisheye_pane_g1

0x25d7,	// (0x00082a43) list_double_fisheye_pane_g2_ParamLimits

0x25d7,	// (0x00082a43) list_double_fisheye_pane_g2

0xc70b,	// (0x0008cb77) list_double_fisheye_pane_g3_ParamLimits

0xc70b,	// (0x0008cb77) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00090128) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00090128) list_double_fisheye_pane_g

0xc717,	// (0x0008cb83) list_double_fisheye_pane_t1_ParamLimits

0xc717,	// (0x0008cb83) list_double_fisheye_pane_t1

0xc732,	// (0x0008cb9e) list_double_fisheye_pane_t2_ParamLimits

0xc732,	// (0x0008cb9e) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00090133) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00090133) list_double_fisheye_pane_t

0x0206,	// (0x00080672) main_call5_pane

0xc3ce,	// (0x0008c83a) sc_swipe_pane_ParamLimits

0xc3ce,	// (0x0008c83a) sc_swipe_pane

0xc760,	// (0x0008cbcc) call5_image_pane_ParamLimits

0xc760,	// (0x0008cbcc) call5_image_pane

0xc772,	// (0x0008cbde) call5_swipe_1_pane_ParamLimits

0xc772,	// (0x0008cbde) call5_swipe_1_pane

0xc77e,	// (0x0008cbea) call5_swipe_2_pane_ParamLimits

0xc77e,	// (0x0008cbea) call5_swipe_2_pane

0xc79a,	// (0x0008cc06) popup_call5_audio_first_window_ParamLimits

0xc79a,	// (0x0008cc06) popup_call5_audio_first_window

0x0cd9,	// (0x00081145) call5_swipe_1_pane_g1_ParamLimits

0x0cd9,	// (0x00081145) call5_swipe_1_pane_g1

0x2608,	// (0x00082a74) call5_swipe_1_pane_g2_ParamLimits

0x2608,	// (0x00082a74) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00090138) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00090138) call5_swipe_1_pane_g

0x2614,	// (0x00082a80) call5_swipe_1_pane_t1_ParamLimits

0x2614,	// (0x00082a80) call5_swipe_1_pane_t1

0x0cd9,	// (0x00081145) call5_swipe_2_pane_g1_ParamLimits

0x0cd9,	// (0x00081145) call5_swipe_2_pane_g1

0x2629,	// (0x00082a95) call5_swipe_2_pane_g2_ParamLimits

0x2629,	// (0x00082a95) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0009013d) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0009013d) call5_swipe_2_pane_g

0x2635,	// (0x00082aa1) call5_swipe_2_pane_t1_ParamLimits

0x2635,	// (0x00082aa1) call5_swipe_2_pane_t1

0x264a,	// (0x00082ab6) sc_swipe_pane_g1_ParamLimits

0x264a,	// (0x00082ab6) sc_swipe_pane_g1

0x2657,	// (0x00082ac3) sc_swipe_pane_g2_ParamLimits

0x2657,	// (0x00082ac3) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00090142) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00090142) sc_swipe_pane_g

0x2663,	// (0x00082acf) sc_swipe_pane_t1_ParamLimits

0x2663,	// (0x00082acf) sc_swipe_pane_t1

0x0206,	// (0x00080672) main_cmail_launcher_pane

0xc7aa,	// (0x0008cc16) aid_size_cell_cmail_l_ParamLimits

0xc7aa,	// (0x0008cc16) aid_size_cell_cmail_l

0xc7ba,	// (0x0008cc26) grid_cmail_l_pane_ParamLimits

0xc7ba,	// (0x0008cc26) grid_cmail_l_pane

0xc7ca,	// (0x0008cc36) cell_cmail_l_pane_ParamLimits

0xc7ca,	// (0x0008cc36) cell_cmail_l_pane

0xc7e0,	// (0x0008cc4c) cell_cmail_l_pane_g1_ParamLimits

0xc7e0,	// (0x0008cc4c) cell_cmail_l_pane_g1

0xc7ec,	// (0x0008cc58) cell_cmail_l_pane_t1_ParamLimits

0xc7ec,	// (0x0008cc58) cell_cmail_l_pane_t1

0x2678,	// (0x00082ae4) cell_cmail_l_pane_t2_ParamLimits

0x2678,	// (0x00082ae4) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00090147) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00090147) cell_cmail_l_pane_t

0x027f,	// (0x000806eb) grid_highlight_pane_cp018_ParamLimits

0x027f,	// (0x000806eb) grid_highlight_pane_cp018

0x5710,	// (0x00085b7c) main2_pane_ParamLimits

0x5710,	// (0x00085b7c) main2_pane

0x3fa8,	// (0x00084414) popup_sp_fs_action_menu_bg_pane_g1

0x3fb0,	// (0x0008441c) popup_sp_fs_action_menu_bg_pane_g2

0x3fb8,	// (0x00084424) popup_sp_fs_action_menu_bg_pane_g3

0x3fc0,	// (0x0008442c) popup_sp_fs_action_menu_bg_pane_g4

0x3fc8,	// (0x00084434) popup_sp_fs_action_menu_bg_pane_g5

0x3fd0,	// (0x0008443c) popup_sp_fs_action_menu_bg_pane_g6

0x3fd8,	// (0x00084444) popup_sp_fs_action_menu_bg_pane_g7

0x3fe0,	// (0x0008444c) popup_sp_fs_action_menu_bg_pane_g8

0x3fe8,	// (0x00084454) popup_sp_fs_action_menu_bg_pane_g9

0x3ff0,	// (0x0008445c) popup_sp_fs_action_menu_bg_pane_g10

0x3ff0,	// (0x0008445c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0008f618) popup_sp_fs_action_menu_bg_pane_g

0x0479,	// (0x000808e5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x2_t3_g3_g1

0x0485,	// (0x000808f1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0485,	// (0x000808f1) list_medium_line_x2_t3_g3_g2

0x0491,	// (0x000808fd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0491,	// (0x000808fd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0008f6c8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0008f6c8) list_medium_line_x2_t3_g3_g

0x049d,	// (0x00080909) list_medium_line_x2_t3_g3_t1_ParamLimits

0x049d,	// (0x00080909) list_medium_line_x2_t3_g3_t1

0x65da,	// (0x00086a46) list_medium_line_x2_t3_g3_t2_ParamLimits

0x65da,	// (0x00086a46) list_medium_line_x2_t3_g3_t2

0x04b2,	// (0x0008091e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x04b2,	// (0x0008091e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0008f6cf) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0008f6cf) list_medium_line_x2_t3_g3_t

0x0479,	// (0x000808e5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x2_t3_g2_g1

0x0491,	// (0x000808fd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0491,	// (0x000808fd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0008f6d6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0008f6d6) list_medium_line_x2_t3_g2_g

0x04c7,	// (0x00080933) list_medium_line_x2_t3_g2_t1_ParamLimits

0x04c7,	// (0x00080933) list_medium_line_x2_t3_g2_t1

0x04dd,	// (0x00080949) list_medium_line_x2_t3_g2_t2_ParamLimits

0x04dd,	// (0x00080949) list_medium_line_x2_t3_g2_t2

0x04ef,	// (0x0008095b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x04ef,	// (0x0008095b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0008f6db) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0008f6db) list_medium_line_x2_t3_g2_t

0x0479,	// (0x000808e5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x2_t4_g4_g1

0x050d,	// (0x00080979) list_medium_line_x2_t4_g4_g2_ParamLimits

0x050d,	// (0x00080979) list_medium_line_x2_t4_g4_g2

0x0485,	// (0x000808f1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0485,	// (0x000808f1) list_medium_line_x2_t4_g4_g3

0x0519,	// (0x00080985) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0519,	// (0x00080985) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0008f6e2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0008f6e2) list_medium_line_x2_t4_g4_g

0x65ec,	// (0x00086a58) list_medium_line_x2_t4_g4_t1_ParamLimits

0x65ec,	// (0x00086a58) list_medium_line_x2_t4_g4_t1

0x6606,	// (0x00086a72) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6606,	// (0x00086a72) list_medium_line_x2_t4_g4_t2

0x661c,	// (0x00086a88) list_medium_line_x2_t4_g4_t3_ParamLimits

0x661c,	// (0x00086a88) list_medium_line_x2_t4_g4_t3

0x0525,	// (0x00080991) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0525,	// (0x00080991) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0008f6eb) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0008f6eb) list_medium_line_x2_t4_g4_t

0x0479,	// (0x000808e5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x2_t2_g4_g1

0x050d,	// (0x00080979) list_medium_line_x2_t2_g4_g2_ParamLimits

0x050d,	// (0x00080979) list_medium_line_x2_t2_g4_g2

0x0485,	// (0x000808f1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0485,	// (0x000808f1) list_medium_line_x2_t2_g4_g3

0x0491,	// (0x000808fd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0491,	// (0x000808fd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008f752) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008f752) list_medium_line_x2_t2_g4_g

0x0537,	// (0x000809a3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0537,	// (0x000809a3) list_medium_line_x2_t2_g4_t1

0x04b2,	// (0x0008091e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x04b2,	// (0x0008091e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0008f75b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0008f75b) list_medium_line_x2_t2_g4_t

0x0479,	// (0x000808e5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x2_t2_g3_g1

0x0485,	// (0x000808f1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0485,	// (0x000808f1) list_medium_line_x2_t2_g3_g2

0x0491,	// (0x000808fd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0491,	// (0x000808fd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0008f6c8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0008f6c8) list_medium_line_x2_t2_g3_g

0x054c,	// (0x000809b8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x054c,	// (0x000809b8) list_medium_line_x2_t2_g3_t1

0x04b2,	// (0x0008091e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x04b2,	// (0x0008091e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0008f760) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0008f760) list_medium_line_x2_t2_g3_t

0x75e9,	// (0x00087a55) main_sp_fs_list_pane_ParamLimits

0x75e9,	// (0x00087a55) main_sp_fs_list_pane

0x75f5,	// (0x00087a61) sp_fs_scroll_pane_ParamLimits

0x75f5,	// (0x00087a61) sp_fs_scroll_pane

0x7601,	// (0x00087a6d) list_medium_line_x2_t3_t1

0x7611,	// (0x00087a7d) list_medium_line_x2_t3_t2

0x058f,	// (0x000809fb) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0008f7ab) list_medium_line_x2_t3_t

0x761f,	// (0x00087a8b) list_medium_line_x3_t4_t1

0x762f,	// (0x00087a9b) list_medium_line_x3_t4_t2

0x059d,	// (0x00080a09) list_medium_line_x3_t4_t3

0x058f,	// (0x000809fb) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0008f7b2) list_medium_line_x3_t4_t

0x763d,	// (0x00087aa9) list_medium_line_x4_t5_t1

0x764d,	// (0x00087ab9) list_medium_line_x4_t5_t2

0x059d,	// (0x00080a09) list_medium_line_x4_t5_t3

0x05ab,	// (0x00080a17) list_medium_line_x4_t5_t4

0x058f,	// (0x000809fb) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0008f7bb) list_medium_line_x4_t5_t

0x0479,	// (0x000808e5) list_medium_line_t4_g4_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_t4_g4_g1

0x0519,	// (0x00080985) list_medium_line_t4_g4_g2_ParamLimits

0x0519,	// (0x00080985) list_medium_line_t4_g4_g2

0x05b9,	// (0x00080a25) list_medium_line_t4_g4_g3_ParamLimits

0x05b9,	// (0x00080a25) list_medium_line_t4_g4_g3

0x0491,	// (0x000808fd) list_medium_line_t4_g4_g4_ParamLimits

0x0491,	// (0x000808fd) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0008f7c6) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0008f7c6) list_medium_line_t4_g4_g

0x05c5,	// (0x00080a31) list_medium_line_t4_g4_t1_ParamLimits

0x05c5,	// (0x00080a31) list_medium_line_t4_g4_t1

0x05da,	// (0x00080a46) list_medium_line_t4_g4_t2_ParamLimits

0x05da,	// (0x00080a46) list_medium_line_t4_g4_t2

0x05f0,	// (0x00080a5c) list_medium_line_t4_g4_t3_ParamLimits

0x05f0,	// (0x00080a5c) list_medium_line_t4_g4_t3

0x04b2,	// (0x0008091e) list_medium_line_t4_g4_t4_ParamLimits

0x04b2,	// (0x0008091e) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0008f7cf) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0008f7cf) list_medium_line_t4_g4_t

0x776e,	// (0x00087bda) chi_dic_find_pane_g1

0x87d8,	// (0x00088c44) main_tport_pane

0x17d5,	// (0x00081c41) list_medium_line_plain_t1

0x17eb,	// (0x00081c57) list_medium_line_t2_g2_g1_ParamLimits

0x17eb,	// (0x00081c57) list_medium_line_t2_g2_g1

0x17f7,	// (0x00081c63) list_medium_line_t2_g2_g2_ParamLimits

0x17f7,	// (0x00081c63) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0008fe8b) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0008fe8b) list_medium_line_t2_g2_g

0xb1ff,	// (0x0008b66b) list_medium_line_t2_g2_t1_ParamLimits

0xb1ff,	// (0x0008b66b) list_medium_line_t2_g2_t1

0xb216,	// (0x0008b682) list_medium_line_t2_g2_t2_ParamLimits

0xb216,	// (0x0008b682) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0008fe90) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0008fe90) list_medium_line_t2_g2_t

0x1b29,	// (0x00081f95) aid_sp_fs_list_icon_a_sm

0x3856,	// (0x00083cc2) aid_sp_fs_list_icon_d

0x1b31,	// (0x00081f9d) aid_sp_fs_text_primary

0x3c47,	// (0x000840b3) aid_sp_fs_text_secondary

0x1b3a,	// (0x00081fa6) list_medium_line

0x1b3a,	// (0x00081fa6) list_medium_line_g2

0x1b3a,	// (0x00081fa6) list_medium_line_g3

0x1b3a,	// (0x00081fa6) list_medium_line_plain

0x1b3a,	// (0x00081fa6) list_medium_line_plain_t2

0x1b3a,	// (0x00081fa6) list_medium_line_plain_t3

0x1b3a,	// (0x00081fa6) list_medium_line_right_icon

0x1b3a,	// (0x00081fa6) list_medium_line_right_iconx2

0x1b3a,	// (0x00081fa6) list_medium_line_t2

0x1b3a,	// (0x00081fa6) list_medium_line_t2_g2

0x1b3a,	// (0x00081fa6) list_medium_line_t2_g3

0x1b3a,	// (0x00081fa6) list_medium_line_t2_right_icon

0x1b3a,	// (0x00081fa6) list_medium_line_t2_right_iconx2

0x1b3a,	// (0x00081fa6) list_medium_line_t3

0x1b3a,	// (0x00081fa6) list_medium_line_t3_g2

0x1b3a,	// (0x00081fa6) list_medium_line_t3_g3

0x1b3a,	// (0x00081fa6) list_medium_line_t3_right_iconx2

0x1b43,	// (0x00081faf) list_medium_line_t4_g4

0x1b4c,	// (0x00081fb8) list_medium_line_x2

0x1b4c,	// (0x00081fb8) list_medium_line_x2_t2_g2

0x1b4c,	// (0x00081fb8) list_medium_line_x2_t2_g3

0x1b4c,	// (0x00081fb8) list_medium_line_x2_t2_g4

0x1b4c,	// (0x00081fb8) list_medium_line_x2_t3

0x1b4c,	// (0x00081fb8) list_medium_line_x2_t3_g2

0x1b4c,	// (0x00081fb8) list_medium_line_x2_t3_g3

0x1b4c,	// (0x00081fb8) list_medium_line_x2_t3_g4

0x1b4c,	// (0x00081fb8) list_medium_line_x2_t4_g2

0x1b4c,	// (0x00081fb8) list_medium_line_x2_t4_g4

0x1b55,	// (0x00081fc1) list_medium_line_x3

0x1b55,	// (0x00081fc1) list_medium_line_x3_t4

0x1b55,	// (0x00081fc1) list_medium_line_x3_t4_g4

0x1b43,	// (0x00081faf) list_medium_line_x4_t4

0x1b43,	// (0x00081faf) list_medium_line_x4_t4_g7

0x1b43,	// (0x00081faf) list_medium_line_x4_t5

0x1b5e,	// (0x00081fca) list_single_fs_dyc_pane_ParamLimits

0x1b5e,	// (0x00081fca) list_single_fs_dyc_pane

0x0479,	// (0x000808e5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x4_t4_g7_g1

0x2089,	// (0x000824f5) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2089,	// (0x000824f5) list_medium_line_x4_t4_g7_g2

0x2095,	// (0x00082501) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2095,	// (0x00082501) list_medium_line_x4_t4_g7_g3

0x20a4,	// (0x00082510) list_medium_line_x4_t4_g7_g4_ParamLimits

0x20a4,	// (0x00082510) list_medium_line_x4_t4_g7_g4

0x20b0,	// (0x0008251c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x20b0,	// (0x0008251c) list_medium_line_x4_t4_g7_g5

0x20bf,	// (0x0008252b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x20bf,	// (0x0008252b) list_medium_line_x4_t4_g7_g6

0x20ce,	// (0x0008253a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x20ce,	// (0x0008253a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x00090054) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x00090054) list_medium_line_x4_t4_g7_g

0x20da,	// (0x00082546) list_medium_line_x4_t4_g7_t1_ParamLimits

0x20da,	// (0x00082546) list_medium_line_x4_t4_g7_t1

0x20ef,	// (0x0008255b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x20ef,	// (0x0008255b) list_medium_line_x4_t4_g7_t2

0x2104,	// (0x00082570) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2104,	// (0x00082570) list_medium_line_x4_t4_g7_t3

0x2119,	// (0x00082585) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2119,	// (0x00082585) list_medium_line_x4_t4_g7_t4

0x212b,	// (0x00082597) list_medium_line_x4_t4_g7_t5_ParamLimits

0x212b,	// (0x00082597) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x00090063) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x00090063) list_medium_line_x4_t4_g7_t

0x213d,	// (0x000825a9) list_single_dyc_row_pane_ParamLimits

0x213d,	// (0x000825a9) list_single_dyc_row_pane

0xc754,	// (0x0008cbc0) call5_gesture_pane_ParamLimits

0xc754,	// (0x0008cbc0) call5_gesture_pane

0xc78a,	// (0x0008cbf6) call5_windows_pane_ParamLimits

0xc78a,	// (0x0008cbf6) call5_windows_pane

0xc802,	// (0x0008cc6e) call5_swipe_1_pane_cp_ParamLimits

0xc802,	// (0x0008cc6e) call5_swipe_1_pane_cp

0xc80e,	// (0x0008cc7a) call5_swipe_2_pane_cp_ParamLimits

0xc80e,	// (0x0008cc7a) call5_swipe_2_pane_cp

0xdb8c,	// (0x0008dff8) call5_image_pane_cp

0xc81a,	// (0x0008cc86) popup_call5_audio_first_window_cp_ParamLimits

0xc81a,	// (0x0008cc86) popup_call5_audio_first_window_cp

0x264a,	// (0x00082ab6) call5_swipe_1_pane_g1_cp_ParamLimits

0x264a,	// (0x00082ab6) call5_swipe_1_pane_g1_cp

0x268a,	// (0x00082af6) call5_swipe_1_pane_g2_cp

0x2663,	// (0x00082acf) call5_swipe_1_pane_t1_cp_ParamLimits

0x2663,	// (0x00082acf) call5_swipe_1_pane_t1_cp

0x264a,	// (0x00082ab6) call5_swipe_2_pane_g1_cp_ParamLimits

0x264a,	// (0x00082ab6) call5_swipe_2_pane_g1_cp

0x2692,	// (0x00082afe) call5_swipe_2_pane_g2_cp

0x269a,	// (0x00082b06) call5_swipe_2_pane_t1_cp_ParamLimits

0x269a,	// (0x00082b06) call5_swipe_2_pane_t1_cp

0x027f,	// (0x000806eb) main_sp_fs_email_pane

0x26af,	// (0x00082b1b) main_sp_fs_listscroll_pane_te

0x26b8,	// (0x00082b24) popup_sp_fs_action_menu_pane_ParamLimits

0x26b8,	// (0x00082b24) popup_sp_fs_action_menu_pane

0x0aa9,	// (0x00080f15) bg_sp_fs_ctrlbar_pane_g1

0x26fe,	// (0x00082b6a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2707,	// (0x00082b73) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2710,	// (0x00082b7c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0aa9,	// (0x00080f15) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0009014c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0888,	// (0x00080cf4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0888,	// (0x00080cf4) bg_sp_fs_ctrlbar_ddmenu_pane

0x2719,	// (0x00082b85) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2719,	// (0x00082b85) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2725,	// (0x00082b91) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2725,	// (0x00082b91) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00090155) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00090155) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2731,	// (0x00082b9d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2731,	// (0x00082b9d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x274b,	// (0x00082bb7) list_medium_line_t2_right_icon_g1

0xc828,	// (0x0008cc94) list_medium_line_t2_right_icon_t1

0xc838,	// (0x0008cca4) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0009015a) list_medium_line_t2_right_icon_t

0xef97,	// (0x0008f403) bg_sp_fs_ctrlbar_pane_ParamLimits

0xef97,	// (0x0008f403) bg_sp_fs_ctrlbar_pane

0xc89d,	// (0x0008cd09) main_sp_fs_ctrlbar_button_pane_cp01

0xc8a5,	// (0x0008cd11) main_sp_fs_ctrlbar_ddmenu_pane

0x278d,	// (0x00082bf9) main_sp_fs_ctrlbar_pane_g1

0x2799,	// (0x00082c05) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0009015f) main_sp_fs_ctrlbar_pane_g

0x27a5,	// (0x00082c11) main_sp_fs_ctrlbar_pane_t1

0xc8af,	// (0x0008cd1b) main_sp_fs_ctrlbar_pane

0xc8cb,	// (0x0008cd37) main_sp_fs_listscroll_pane_te_cp01

0xc8dc,	// (0x0008cd48) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc8dc,	// (0x0008cd48) popup_sp_fs_action_menu_pane_cp01

0x027f,	// (0x000806eb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x027f,	// (0x000806eb) bg_sp_fs_highlight_list_pane_cp01

0x27ba,	// (0x00082c26) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x27ba,	// (0x00082c26) sp_fs_action_menu_list_gene_pane_g1

0x27c9,	// (0x00082c35) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x27c9,	// (0x00082c35) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x00090164) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x00090164) sp_fs_action_menu_list_gene_pane_g

0x27d6,	// (0x00082c42) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x27d6,	// (0x00082c42) sp_fs_action_menu_list_gene_pane_t1

0x27ee,	// (0x00082c5a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x27ee,	// (0x00082c5a) sp_fs_action_menu_list_gene_pane

0x2811,	// (0x00082c7d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2811,	// (0x00082c7d) popup_sp_fs_action_menu_bg_pane

0x281f,	// (0x00082c8b) sp_fs_action_menu_list_pane_ParamLimits

0x281f,	// (0x00082c8b) sp_fs_action_menu_list_pane

0x2843,	// (0x00082caf) sp_fs_scroll_pane_cp01_ParamLimits

0x2843,	// (0x00082caf) sp_fs_scroll_pane_cp01

0xc8f6,	// (0x0008cd62) list_medium_line_plain_t2_t1

0xc906,	// (0x0008cd72) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x00090169) list_medium_line_plain_t2_t

0xc914,	// (0x0008cd80) list_medium_line_plain_t3_t1

0xc924,	// (0x0008cd90) list_medium_line_plain_t3_t2

0xc932,	// (0x0008cd9e) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x0009016e) list_medium_line_plain_t3_t

0x0479,	// (0x000808e5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x2_t2_g2_g1

0x0491,	// (0x000808fd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0491,	// (0x000808fd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0008f6d6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0008f6d6) list_medium_line_x2_t2_g2_g

0x05c5,	// (0x00080a31) list_medium_line_x2_t2_g2_t1_ParamLimits

0x05c5,	// (0x00080a31) list_medium_line_x2_t2_g2_t1

0x04b2,	// (0x0008091e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x04b2,	// (0x0008091e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00090175) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00090175) list_medium_line_x2_t2_g2_t

0x0479,	// (0x000808e5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x2_t4_g2_g1

0x2869,	// (0x00082cd5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2869,	// (0x00082cd5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x0009017a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x0009017a) list_medium_line_x2_t4_g2_g

0xc940,	// (0x0008cdac) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc940,	// (0x0008cdac) list_medium_line_x2_t4_g2_t1

0xc95a,	// (0x0008cdc6) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc95a,	// (0x0008cdc6) list_medium_line_x2_t4_g2_t2

0xc970,	// (0x0008cddc) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc970,	// (0x0008cddc) list_medium_line_x2_t4_g2_t3

0x04b2,	// (0x0008091e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x04b2,	// (0x0008091e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0009017f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0009017f) list_medium_line_x2_t4_g2_t

0x287b,	// (0x00082ce7) list_medium_line_t3_right_iconx2_g1

0x274b,	// (0x00082bb7) list_medium_line_t3_right_iconx2_g2

0xc985,	// (0x0008cdf1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x00090188) list_medium_line_t3_right_iconx2_g

0xc98d,	// (0x0008cdf9) list_medium_line_t3_right_iconx2_t1

0xc99d,	// (0x0008ce09) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0009018f) list_medium_line_t3_right_iconx2_t

0x0479,	// (0x000808e5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x3_t4_g4_g1

0x0485,	// (0x000808f1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0485,	// (0x000808f1) list_medium_line_x3_t4_g4_g2

0x0519,	// (0x00080985) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0519,	// (0x00080985) list_medium_line_x3_t4_g4_g3

0x2883,	// (0x00082cef) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2883,	// (0x00082cef) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00090194) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00090194) list_medium_line_x3_t4_g4_g

0xc9ab,	// (0x0008ce17) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc9ab,	// (0x0008ce17) list_medium_line_x3_t4_g4_t1

0xc9c2,	// (0x0008ce2e) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc9c2,	// (0x0008ce2e) list_medium_line_x3_t4_g4_t2

0x288f,	// (0x00082cfb) list_medium_line_x3_t4_g4_t3_ParamLimits

0x288f,	// (0x00082cfb) list_medium_line_x3_t4_g4_t3

0x28a4,	// (0x00082d10) list_medium_line_x3_t4_g4_t4_ParamLimits

0x28a4,	// (0x00082d10) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0009019d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0009019d) list_medium_line_x3_t4_g4_t

0xc9d7,	// (0x0008ce43) list_single_dyc_row_text_pane_t1_ParamLimits

0xc9d7,	// (0x0008ce43) list_single_dyc_row_text_pane_t1

0xca1a,	// (0x0008ce86) list_single_dyc_row_text_pane_t2_ParamLimits

0xca1a,	// (0x0008ce86) list_single_dyc_row_text_pane_t2

0x28c1,	// (0x00082d2d) list_single_dyc_row_text_pane_t3_ParamLimits

0x28c1,	// (0x00082d2d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x000901a6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x000901a6) list_single_dyc_row_text_pane_t

0x28d3,	// (0x00082d3f) list_single_dyc_row_pane_g1_ParamLimits

0x28d3,	// (0x00082d3f) list_single_dyc_row_pane_g1

0x28df,	// (0x00082d4b) list_single_dyc_row_pane_g2_ParamLimits

0x28df,	// (0x00082d4b) list_single_dyc_row_pane_g2

0x28eb,	// (0x00082d57) list_single_dyc_row_pane_g3_ParamLimits

0x28eb,	// (0x00082d57) list_single_dyc_row_pane_g3

0x28f7,	// (0x00082d63) list_single_dyc_row_pane_g4_ParamLimits

0x28f7,	// (0x00082d63) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x000901ad) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x000901ad) list_single_dyc_row_pane_g

0x2903,	// (0x00082d6f) list_single_dyc_row_text_pane_ParamLimits

0x2903,	// (0x00082d6f) list_single_dyc_row_text_pane

0x0206,	// (0x00080672) bg_sp_fs_scroll_pane

0x2922,	// (0x00082d8e) thumb_sp_fs_scroll_pane

0x17eb,	// (0x00081c57) list_medium_line_g1_ParamLimits

0x17eb,	// (0x00081c57) list_medium_line_g1

0x292b,	// (0x00082d97) list_medium_line_t1_ParamLimits

0x292b,	// (0x00082d97) list_medium_line_t1

0x0479,	// (0x000808e5) list_medium_line_x2_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x2_g1

0x0485,	// (0x000808f1) list_medium_line_x2_g2_ParamLimits

0x0485,	// (0x000808f1) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x000901b6) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x000901b6) list_medium_line_x2_g

0x2940,	// (0x00082dac) list_medium_line_x2_t1_ParamLimits

0x2940,	// (0x00082dac) list_medium_line_x2_t1

0x0479,	// (0x000808e5) list_medium_line_x3_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x3_g1

0x0485,	// (0x000808f1) list_medium_line_x3_g2_ParamLimits

0x0485,	// (0x000808f1) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x000901b6) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x000901b6) list_medium_line_x3_g

0x2940,	// (0x00082dac) list_medium_line_x3_t1_ParamLimits

0x2940,	// (0x00082dac) list_medium_line_x3_t1

0x2956,	// (0x00082dc2) thumb_sp_fs_scroll_pane_g1

0x295f,	// (0x00082dcb) thumb_sp_fs_scroll_pane_g2

0x2968,	// (0x00082dd4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x000901bb) thumb_sp_fs_scroll_pane_g

0x2956,	// (0x00082dc2) bg_sp_fs_scroll_pane_g1

0x295f,	// (0x00082dcb) bg_sp_fs_scroll_pane_g2

0x2968,	// (0x00082dd4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x000901bb) bg_sp_fs_scroll_pane_g

0x0479,	// (0x000808e5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0479,	// (0x000808e5) list_medium_line_x2_t3_g4_g1

0x050d,	// (0x00080979) list_medium_line_x2_t3_g4_g2_ParamLimits

0x050d,	// (0x00080979) list_medium_line_x2_t3_g4_g2

0x0485,	// (0x000808f1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0485,	// (0x000808f1) list_medium_line_x2_t3_g4_g3

0x0491,	// (0x000808fd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0491,	// (0x000808fd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008f752) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008f752) list_medium_line_x2_t3_g4_g

0xca74,	// (0x0008cee0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xca74,	// (0x0008cee0) list_medium_line_x2_t3_g4_t1

0xca8a,	// (0x0008cef6) list_medium_line_x2_t3_g4_t2_ParamLimits

0xca8a,	// (0x0008cef6) list_medium_line_x2_t3_g4_t2

0x04b2,	// (0x0008091e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x04b2,	// (0x0008091e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x000901c2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x000901c2) list_medium_line_x2_t3_g4_t

0x17eb,	// (0x00081c57) list_medium_line_g2_g1_ParamLimits

0x17eb,	// (0x00081c57) list_medium_line_g2_g1

0x17f7,	// (0x00081c63) list_medium_line_g2_g2_ParamLimits

0x17f7,	// (0x00081c63) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0008fe8b) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0008fe8b) list_medium_line_g2_g

0x2971,	// (0x00082ddd) list_medium_line_g2_t1_ParamLimits

0x2971,	// (0x00082ddd) list_medium_line_g2_t1

0x17eb,	// (0x00081c57) list_medium_line_t3_g2_g1_ParamLimits

0x17eb,	// (0x00081c57) list_medium_line_t3_g2_g1

0x17f7,	// (0x00081c63) list_medium_line_t3_g2_g2_ParamLimits

0x17f7,	// (0x00081c63) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0008fe8b) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0008fe8b) list_medium_line_t3_g2_g

0xcaa3,	// (0x0008cf0f) list_medium_line_t3_g2_t1_ParamLimits

0xcaa3,	// (0x0008cf0f) list_medium_line_t3_g2_t1

0xcabd,	// (0x0008cf29) list_medium_line_t3_g2_t2_ParamLimits

0xcabd,	// (0x0008cf29) list_medium_line_t3_g2_t2

0xcad3,	// (0x0008cf3f) list_medium_line_t3_g2_t3_ParamLimits

0xcad3,	// (0x0008cf3f) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x000901c9) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x000901c9) list_medium_line_t3_g2_t

0x274b,	// (0x00082bb7) list_medium_line_right_icon_g1

0x2986,	// (0x00082df2) list_medium_line_right_icon_t1

0x17eb,	// (0x00081c57) list_medium_line_t2_g1_ParamLimits

0x17eb,	// (0x00081c57) list_medium_line_t2_g1

0xcaea,	// (0x0008cf56) list_medium_line_t2_t1_ParamLimits

0xcaea,	// (0x0008cf56) list_medium_line_t2_t1

0xcb04,	// (0x0008cf70) list_medium_line_t2_t2_ParamLimits

0xcb04,	// (0x0008cf70) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x000901d0) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x000901d0) list_medium_line_t2_t

0x17eb,	// (0x00081c57) list_medium_line_t3_g1_ParamLimits

0x17eb,	// (0x00081c57) list_medium_line_t3_g1

0xcb19,	// (0x0008cf85) list_medium_line_t3_t1_ParamLimits

0xcb19,	// (0x0008cf85) list_medium_line_t3_t1

0xcb30,	// (0x0008cf9c) list_medium_line_t3_t2_ParamLimits

0xcb30,	// (0x0008cf9c) list_medium_line_t3_t2

0xcb45,	// (0x0008cfb1) list_medium_line_t3_t3_ParamLimits

0xcb45,	// (0x0008cfb1) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x000901d5) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x000901d5) list_medium_line_t3_t

0x17eb,	// (0x00081c57) list_medium_line_g3_g1_ParamLimits

0x17eb,	// (0x00081c57) list_medium_line_g3_g1

0x2994,	// (0x00082e00) list_medium_line_g3_g2_ParamLimits

0x2994,	// (0x00082e00) list_medium_line_g3_g2

0x17f7,	// (0x00081c63) list_medium_line_g3_g3_ParamLimits

0x17f7,	// (0x00081c63) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x000901dc) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x000901dc) list_medium_line_g3_g

0x29a0,	// (0x00082e0c) list_medium_line_g3_t1_ParamLimits

0x29a0,	// (0x00082e0c) list_medium_line_g3_t1

0x17eb,	// (0x00081c57) list_medium_line_t2_g3_g1_ParamLimits

0x17eb,	// (0x00081c57) list_medium_line_t2_g3_g1

0x2994,	// (0x00082e00) list_medium_line_t2_g3_g2_ParamLimits

0x2994,	// (0x00082e00) list_medium_line_t2_g3_g2

0x17f7,	// (0x00081c63) list_medium_line_t2_g3_g3_ParamLimits

0x17f7,	// (0x00081c63) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x000901dc) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x000901dc) list_medium_line_t2_g3_g

0xcb57,	// (0x0008cfc3) list_medium_line_t2_g3_t1_ParamLimits

0xcb57,	// (0x0008cfc3) list_medium_line_t2_g3_t1

0xcb6e,	// (0x0008cfda) list_medium_line_t2_g3_t2_ParamLimits

0xcb6e,	// (0x0008cfda) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x000901e3) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x000901e3) list_medium_line_t2_g3_t

0x17eb,	// (0x00081c57) list_medium_line_t3_g3_g1_ParamLimits

0x17eb,	// (0x00081c57) list_medium_line_t3_g3_g1

0x2994,	// (0x00082e00) list_medium_line_t3_g3_g2_ParamLimits

0x2994,	// (0x00082e00) list_medium_line_t3_g3_g2

0x17f7,	// (0x00081c63) list_medium_line_t3_g3_g3_ParamLimits

0x17f7,	// (0x00081c63) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x000901dc) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x000901dc) list_medium_line_t3_g3_g

0xcb83,	// (0x0008cfef) list_medium_line_t3_g3_t1_ParamLimits

0xcb83,	// (0x0008cfef) list_medium_line_t3_g3_t1

0xcb97,	// (0x0008d003) list_medium_line_t3_g3_t2_ParamLimits

0xcb97,	// (0x0008d003) list_medium_line_t3_g3_t2

0xcba9,	// (0x0008d015) list_medium_line_t3_g3_t3_ParamLimits

0xcba9,	// (0x0008d015) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x000901e8) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x000901e8) list_medium_line_t3_g3_t

0x287b,	// (0x00082ce7) list_medium_line_right_iconx2_g1

0x274b,	// (0x00082bb7) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x000901ef) list_medium_line_right_iconx2_g

0x29b5,	// (0x00082e21) list_medium_line_right_iconx2_t1

0x287b,	// (0x00082ce7) list_medium_line_t2_right_iconx2_g1

0x274b,	// (0x00082bb7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x000901ef) list_medium_line_t2_right_iconx2_g

0xcbbd,	// (0x0008d029) list_medium_line_t2_right_iconx2_t1

0xcbcd,	// (0x0008d039) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x000901f4) list_medium_line_t2_right_iconx2_t

0x29c3,	// (0x00082e2f) list_medium_line_x4_t4_t1

0xcbdb,	// (0x0008d047) list_medium_line_x4_t4_t2

0xcbeb,	// (0x0008d057) list_medium_line_x4_t4_t3

0xcbfb,	// (0x0008d067) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x000901f9) list_medium_line_x4_t4_t

0xcc34,	// (0x0008d0a0) tport_appsw_pane_ParamLimits

0xcc34,	// (0x0008d0a0) tport_appsw_pane

0xcc42,	// (0x0008d0ae) tport_contact_pane_ParamLimits

0xcc42,	// (0x0008d0ae) tport_contact_pane

0xcc50,	// (0x0008d0bc) tport_listscroll_pane_ParamLimits

0xcc50,	// (0x0008d0bc) tport_listscroll_pane

0xcc5e,	// (0x0008d0ca) cell_tport_appsw_pane_ParamLimits

0xcc5e,	// (0x0008d0ca) cell_tport_appsw_pane

0x0db2,	// (0x0008121e) tport_appsw_pane_g1_ParamLimits

0x0db2,	// (0x0008121e) tport_appsw_pane_g1

0x29d1,	// (0x00082e3d) tport_contact_pane_g1

0x29da,	// (0x00082e46) tport_contact_pane_t1

0x29e8,	// (0x00082e54) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x00090202) tport_contact_pane_t

0x29f6,	// (0x00082e62) list_tport_pane

0x29ff,	// (0x00082e6b) scroll_pane_cp_030

0xcc89,	// (0x0008d0f5) cell_tport_appsw_pane_g1

0x2a18,	// (0x00082e84) cell_tport_appsw_pane_t1

0x0206,	// (0x00080672) grid_highlight_pane_cp019

0xcc99,	// (0x0008d105) list_tport_double_graphic_pane_ParamLimits

0xcc99,	// (0x0008d105) list_tport_double_graphic_pane

0x027f,	// (0x000806eb) list_highlight_pane_cp023_ParamLimits

0x027f,	// (0x000806eb) list_highlight_pane_cp023

0xccaa,	// (0x0008d116) list_tport_double_graphic_pane_g1_ParamLimits

0xccaa,	// (0x0008d116) list_tport_double_graphic_pane_g1

0xccb7,	// (0x0008d123) list_tport_double_graphic_pane_t1_ParamLimits

0xccb7,	// (0x0008d123) list_tport_double_graphic_pane_t1

0xcccc,	// (0x0008d138) list_tport_double_graphic_pane_t2_ParamLimits

0xcccc,	// (0x0008d138) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x0009020e) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x0009020e) list_tport_double_graphic_pane_t

0x0206,	// (0x00080672) main_cale_note_pane

0xa9e1,	// (0x0008ae4d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa9e1,	// (0x0008ae4d) cell_vitu2_function_top_wide_pane_cp01

0xc31d,	// (0x0008c789) wait_bar_pane_cp05_ParamLimits

0x0206,	// (0x00080672) listscroll_cmail_pane

0x2a2e,	// (0x00082e9a) list_cmail_pane

0xcce8,	// (0x0008d154) list_cmail_body_pane

0xccfd,	// (0x0008d169) list_single_cmail_header_caption_pane

0xcd17,	// (0x0008d183) list_single_cmail_header_detail_pane_ParamLimits

0xcd17,	// (0x0008d183) list_single_cmail_header_detail_pane

0xcd46,	// (0x0008d1b2) list_single_cmail_header_caption_pane_t1

0xcd56,	// (0x0008d1c2) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcd56,	// (0x0008d1c2) list_single_cmail_header_detail_pane_g1

0x386c,	// (0x00083cd8) list_single_cmail_header_detail_pane_g2_ParamLimits

0x386c,	// (0x00083cd8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x00090213) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x00090213) list_single_cmail_header_detail_pane_g

0x2a5b,	// (0x00082ec7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2a5b,	// (0x00082ec7) list_single_cmail_header_detail_pane_t1

0x2a99,	// (0x00082f05) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2a99,	// (0x00082f05) list_single_cmail_header_editor_pane_bg

0x23d9,	// (0x00082845) list_cmail_body_pane_g1

0x2aab,	// (0x00082f17) list_cmail_body_pane_t1

0x1590,	// (0x000819fc) list_single_cmail_header_editor_pane_bg_g1

0x4307,	// (0x00084773) list_single_cmail_header_editor_pane_bg_g1_copy1

0x15a0,	// (0x00081a0c) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1598,	// (0x00081a04) list_single_cmail_header_editor_pane_bg_g1_copy3

0x17e3,	// (0x00081c4f) list_single_cmail_header_editor_pane_bg_g1_copy4

0x15c0,	// (0x00081a2c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x15b0,	// (0x00081a1c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x15b8,	// (0x00081a24) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x42e7,	// (0x00084753) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcd94,	// (0x0008d200) calenote_gesture_pane_ParamLimits

0xcd94,	// (0x0008d200) calenote_gesture_pane

0xcdae,	// (0x0008d21a) calenote_window_pane_ParamLimits

0xcdae,	// (0x0008d21a) calenote_window_pane

0x2ab9,	// (0x00082f25) popup_note_window_cp01

0xcdc6,	// (0x0008d232) calenote_swipe_1_pane_ParamLimits

0xcdc6,	// (0x0008d232) calenote_swipe_1_pane

0xc80e,	// (0x0008cc7a) calenote_swipe_2_pane_ParamLimits

0xc80e,	// (0x0008cc7a) calenote_swipe_2_pane

0x264a,	// (0x00082ab6) calenote_swipe_1_pane_g1_ParamLimits

0x264a,	// (0x00082ab6) calenote_swipe_1_pane_g1

0x2657,	// (0x00082ac3) calenote_swipe_1_pane_g2_ParamLimits

0x2657,	// (0x00082ac3) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00090142) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00090142) calenote_swipe_1_pane_g

0x2acb,	// (0x00082f37) calenote_swipe_1_pane_t1_ParamLimits

0x2acb,	// (0x00082f37) calenote_swipe_1_pane_t1

0x264a,	// (0x00082ab6) calenote_swipe_2_pane_g1_ParamLimits

0x264a,	// (0x00082ab6) calenote_swipe_2_pane_g1

0x2aea,	// (0x00082f56) calenote_swipe_2_pane_g2_ParamLimits

0x2aea,	// (0x00082f56) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x0009021f) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x0009021f) calenote_swipe_2_pane_g

0x2af6,	// (0x00082f62) calenote_swipe_2_pane_t1_ParamLimits

0x2af6,	// (0x00082f62) calenote_swipe_2_pane_t1

0x0206,	// (0x00080672) main_mup_navstr_pane

0x9783,	// (0x00089bef) main_mup3_pane_t7_ParamLimits

0x9783,	// (0x00089bef) main_mup3_pane_t7

0xa156,	// (0x0008a5c2) main_mp4_pane_g6_ParamLimits

0xa156,	// (0x0008a5c2) main_mp4_pane_g6

0xa4c6,	// (0x0008a932) main_image3_pane_t4_ParamLimits

0xa4c6,	// (0x0008a932) main_image3_pane_t4

0xcdd9,	// (0x0008d245) popup_navstr_preview_pane_ParamLimits

0xcdd9,	// (0x0008d245) popup_navstr_preview_pane

0xcde5,	// (0x0008d251) scroll_navstr_pane_ParamLimits

0xcde5,	// (0x0008d251) scroll_navstr_pane

0x0206,	// (0x00080672) bg_popup_preview_window_pane_cp04

0x2b1d,	// (0x00082f89) popup_navstr_preview_pane_t1

0xcdf1,	// (0x0008d25d) scroll_navstr_pane_g1_ParamLimits

0xcdf1,	// (0x0008d25d) scroll_navstr_pane_g1

0xcdfe,	// (0x0008d26a) scroll_navstr_pane_t1_ParamLimits

0xcdfe,	// (0x0008d26a) scroll_navstr_pane_t1

0x2ac2,	// (0x00082f2e) bg_button_pane_cp014

0x2ac2,	// (0x00082f2e) bg_button_pane_cp030

0x25eb,	// (0x00082a57) list_double_fisheye_pane_g4_ParamLimits

0x25eb,	// (0x00082a57) list_double_fisheye_pane_g4

0x25f7,	// (0x00082a63) list_double_fisheye_pane_g5_ParamLimits

0x25f7,	// (0x00082a63) list_double_fisheye_pane_g5

0x2a36,	// (0x00082ea2) sp_fs_scroll_pane_cp03

0x278d,	// (0x00082bf9) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2799,	// (0x00082c05) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0009015f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x27a5,	// (0x00082c11) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xccde,	// (0x0008d14a) sp_fs_scroll_pane_cp02

0x4013,	// (0x0008447f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x4013,	// (0x0008447f) popup_sp_fs_calendar_preview_list_single_pane

0x0206,	// (0x00080672) main_cam6_pano_pane

0x027f,	// (0x000806eb) main_mup3_pane_ParamLimits

0x0206,	// (0x00080672) main_phacti_pane

0xc1ee,	// (0x0008c65a) bg_button_pane_cp11

0xc206,	// (0x0008c672) main_mobtv_info_pane_g2_ParamLimits

0xc206,	// (0x0008c672) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x000900bf) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x000900bf) main_mobtv_info_pane_g

0xc3ba,	// (0x0008c826) sc_clock_pane_t5_ParamLimits

0xc3ba,	// (0x0008c826) sc_clock_pane_t5

0xc5a8,	// (0x0008ca14) main_radioblah_pane_g1_ParamLimits

0x253f,	// (0x000829ab) main_radioblah_pane_t3_ParamLimits

0x253f,	// (0x000829ab) main_radioblah_pane_t3

0x2557,	// (0x000829c3) main_radioblah_pane_t4_ParamLimits

0x2557,	// (0x000829c3) main_radioblah_pane_t4

0xc5c6,	// (0x0008ca32) main_radioblah_text_pane_ParamLimits

0xc5c6,	// (0x0008ca32) main_radioblah_text_pane

0xc5d3,	// (0x0008ca3f) main_radioblah_info_pane_g1_ParamLimits

0xc66c,	// (0x0008cad8) main_radioblah_info_pane_t4_ParamLimits

0xc66c,	// (0x0008cad8) main_radioblah_info_pane_t4

0x027f,	// (0x000806eb) main_sp_fs_calendar_pane

0xce10,	// (0x0008d27c) main_phacti_pane_g1

0xce18,	// (0x0008d284) phacti_note_pane_ParamLimits

0xce18,	// (0x0008d284) phacti_note_pane

0x2b34,	// (0x00082fa0) phacti_term_pane_ParamLimits

0x2b34,	// (0x00082fa0) phacti_term_pane

0x2b49,	// (0x00082fb5) phacti_note_pane_t1_ParamLimits

0x2b49,	// (0x00082fb5) phacti_note_pane_t1

0x2b60,	// (0x00082fcc) phacti_term_pane_g1

0x2b68,	// (0x00082fd4) phacti_term_pane_t1_ParamLimits

0x2b68,	// (0x00082fd4) phacti_term_pane_t1

0x2b92,	// (0x00082ffe) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2b9a,	// (0x00083006) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x00090229) popup_sp_fs_calendar_preview_list_single_pane_g

0x2ba2,	// (0x0008300e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2ba2,	// (0x0008300e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2bb8,	// (0x00083024) aid_popup_sp_fs_bg_corner_pane

0x0aa9,	// (0x00080f15) popup_sp_fs_calendar_preview_bg_pane_g1

0x0206,	// (0x00080672) popup_sp_fs_calendar_preview_bg_pane

0x2bc0,	// (0x0008302c) popup_sp_fs_calendar_preview_list_pane

0x027f,	// (0x000806eb) bg_main_sp_fs_cale_pane_ParamLimits

0x027f,	// (0x000806eb) bg_main_sp_fs_cale_pane

0x2bc8,	// (0x00083034) listscroll_cale_mrui_pane_ParamLimits

0x2bc8,	// (0x00083034) listscroll_cale_mrui_pane

0x2bdc,	// (0x00083048) listscroll_sp_fs_schedule_track_pane

0x2be5,	// (0x00083051) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2be5,	// (0x00083051) main_sp_fs_ctrlbar_pane_cp01

0x2bf6,	// (0x00083062) main_sp_fs_ribbon_pane

0x2bfe,	// (0x0008306a) popup_sp_fs_cale_preview_window

0xce57,	// (0x0008d2c3) list_single_sp_fs_schedule_track_pane_ParamLimits

0xce57,	// (0x0008d2c3) list_single_sp_fs_schedule_track_pane

0x1514,	// (0x00081980) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1514,	// (0x00081980) bg_sp_fs_highlight_list_pane_cp03

0xce69,	// (0x0008d2d5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xce69,	// (0x0008d2d5) list_single_sp_fs_schedule_track_pane_g1

0xce75,	// (0x0008d2e1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xce75,	// (0x0008d2e1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x0009022e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x0009022e) list_single_sp_fs_schedule_track_pane_g

0xce81,	// (0x0008d2ed) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xce81,	// (0x0008d2ed) list_single_sp_fs_schedule_track_pane_t1

0xce9f,	// (0x0008d30b) sp_fs_schedule_track_pane_ParamLimits

0xce9f,	// (0x0008d30b) sp_fs_schedule_track_pane

0x2c10,	// (0x0008307c) sp_fs_schedule_track_pane_g1

0x2c18,	// (0x00083084) sp_fs_schedule_track_pane_g2

0x2c20,	// (0x0008308c) sp_fs_schedule_track_pane_g3

0x2c28,	// (0x00083094) sp_fs_schedule_track_pane_g4

0x2c30,	// (0x0008309c) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x00090233) sp_fs_schedule_track_pane_g

0x1590,	// (0x000819fc) bg_sp_fs_schedule_viewer_highlight_g1

0x4307,	// (0x00084773) bg_sp_fs_schedule_viewer_highlight_g2

0x1598,	// (0x00081a04) bg_sp_fs_schedule_viewer_highlight_g3

0x15a0,	// (0x00081a0c) bg_sp_fs_schedule_viewer_highlight_g4

0x17e3,	// (0x00081c4f) bg_sp_fs_schedule_viewer_highlight_g5

0x15b0,	// (0x00081a1c) bg_sp_fs_schedule_viewer_highlight_g6

0x15b8,	// (0x00081a24) bg_sp_fs_schedule_viewer_highlight_g7

0x15c0,	// (0x00081a2c) bg_sp_fs_schedule_viewer_highlight_g8

0x42e7,	// (0x00084753) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x0009023e) bg_sp_fs_schedule_viewer_highlight_g

0x0206,	// (0x00080672) bg_main_sp_fs_ribbon_pane

0xceb1,	// (0x0008d31d) main_sp_fs_ribbon_pane_g1

0x2c38,	// (0x000830a4) main_sp_fs_ribbon_pane_t1

0xceba,	// (0x0008d326) main_sp_fs_ribbon_pane_t2

0x2c47,	// (0x000830b3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x00090251) main_sp_fs_ribbon_pane_t

0x2c56,	// (0x000830c2) main_sp_fs_ribbon_scheduler_pane

0x2c5e,	// (0x000830ca) bg_main_sp_fs_ribbon_pane_g1

0x2c67,	// (0x000830d3) bg_main_sp_fs_ribbon_pane_g2

0x2c70,	// (0x000830dc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x00090258) bg_main_sp_fs_ribbon_pane_g

0x2c78,	// (0x000830e4) main_sp_fs_ribbon_scheduler_pane_g1

0x2c81,	// (0x000830ed) main_sp_fs_ribbon_scheduler_pane_g2

0x2c8a,	// (0x000830f6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x0009025f) main_sp_fs_ribbon_scheduler_pane_g

0x2c93,	// (0x000830ff) list_cale_mrui_pane

0xcec9,	// (0x0008d335) sp_fs_scroll_pane_cp07_ParamLimits

0xcec9,	// (0x0008d335) sp_fs_scroll_pane_cp07

0xcedf,	// (0x0008d34b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcedf,	// (0x0008d34b) bg_sp_fs_schedule_viewer_highlight

0x2c9c,	// (0x00083108) list_single_sp_fs_schedule_track_pane_cp01

0x2ca4,	// (0x00083110) list_sp_fs_schedule_track_pane

0x2cac,	// (0x00083118) sp_fs_scroll_pane_cp06_ParamLimits

0x2cac,	// (0x00083118) sp_fs_scroll_pane_cp06

0x0aa9,	// (0x00080f15) bgmain_sp_fs_calendar_pane_g1

0x2cbe,	// (0x0008312a) list_single_cale_mrui_pane_ParamLimits

0x2cbe,	// (0x0008312a) list_single_cale_mrui_pane

0x2ce2,	// (0x0008314e) list_single_cale_mrui_row_pane_ParamLimits

0x2ce2,	// (0x0008314e) list_single_cale_mrui_row_pane

0x2cef,	// (0x0008315b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x2cef,	// (0x0008315b) list_single_cale_mrui_row_pane_g1

0x2d27,	// (0x00083193) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2d27,	// (0x00083193) list_single_cale_mrui_row_pane_t1

0xceec,	// (0x0008d358) list_single_cale_mrui_row_pane_t2_ParamLimits

0xceec,	// (0x0008d358) list_single_cale_mrui_row_pane_t2

0x2d39,	// (0x000831a5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2d39,	// (0x000831a5) list_single_cale_mrui_row_pane_t3

0x2d68,	// (0x000831d4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2d68,	// (0x000831d4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdff,	// (0x0009026b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdff,	// (0x0009026b) list_single_cale_mrui_row_pane_t

0xcf52,	// (0x0008d3be) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcf52,	// (0x0008d3be) list_single_cmail_header_editor_pane_bg_cp01

0xcf74,	// (0x0008d3e0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcf74,	// (0x0008d3e0) list_single_cmail_header_editor_pane_bg_cp02

0xcf90,	// (0x0008d3fc) main_radioblah_text_pane_t1_ParamLimits

0xcf90,	// (0x0008d3fc) main_radioblah_text_pane_t1

0x2d97,	// (0x00083203) cam6_indi_pane_cp01

0x2d9f,	// (0x0008320b) cam6_mode_pane_cp01

0x2da7,	// (0x00083213) cam6_pano_pane

0x2db0,	// (0x0008321c) cam6_zoom_pane_cp01

0x2dba,	// (0x00083226) cam6_pano_image_pane

0x2dc3,	// (0x0008322f) cam6_pano_pane_g1

0x23d9,	// (0x00082845) cam6_pano_pane_g2

0x2dcc,	// (0x00083238) cam6_pano_pane_g3

0x2dd5,	// (0x00083241) cam6_pano_pane_g4

0x10a1,	// (0x0008150d) cam6_pano_pane_g5

0x2dde,	// (0x0008324a) cam6_pano_pane_g6

0x2de6,	// (0x00083252) cam6_pano_pane_g7

0x2dee,	// (0x0008325a) cam6_pano_pane_g8

0x2df7,	// (0x00083263) cam6_pano_pane_g9

0x0008,

0xfe08,	// (0x00090274) cam6_pano_pane_g

0x0206,	// (0x00080672) main_browser_tag_pane

0x2b15,	// (0x00082f81) grid_navstr_albumart_pane

0x2e02,	// (0x0008326e) cell_navstr_albumart_pane_ParamLimits

0x2e02,	// (0x0008326e) cell_navstr_albumart_pane

0x2e1e,	// (0x0008328a) cell_navstr_albumart_pane_g1

0xedb0,	// (0x0008f21c) cell_navstr_albumart_pane_g2

0xedc0,	// (0x0008f22c) cell_navstr_albumart_pane_g3

0xedb8,	// (0x0008f224) cell_navstr_albumart_pane_g4

0x0003,

0xfe1b,	// (0x00090287) cell_navstr_albumart_pane_g

0xcfab,	// (0x0008d417) bt_list_pane_ParamLimits

0xcfab,	// (0x0008d417) bt_list_pane

0xcfc4,	// (0x0008d430) bt_list_pane_t1

0xcfd3,	// (0x0008d43f) bt_list_pane_t2

0x0001,

0xfe24,	// (0x00090290) bt_list_pane_t

0x0206,	// (0x00080672) main_cale_prevew_pane

0xcfe2,	// (0x0008d44e) popup_cale_preview_window_ParamLimits

0xcfe2,	// (0x0008d44e) popup_cale_preview_window

0x027f,	// (0x000806eb) bg_popup_preview_window_pane_cp05_ParamLimits

0x027f,	// (0x000806eb) bg_popup_preview_window_pane_cp05

0x2e26,	// (0x00083292) list_cale_preview_pane_ParamLimits

0x2e26,	// (0x00083292) list_cale_preview_pane

0xcffd,	// (0x0008d469) list_double_cale_preview_pane_ParamLimits

0xcffd,	// (0x0008d469) list_double_cale_preview_pane

0xd011,	// (0x0008d47d) list_single_cale_preview_pane_ParamLimits

0xd011,	// (0x0008d47d) list_single_cale_preview_pane

0xd029,	// (0x0008d495) list_single_cale_preview_pane_g1

0xd031,	// (0x0008d49d) list_single_cale_preview_pane_t1_ParamLimits

0xd031,	// (0x0008d49d) list_single_cale_preview_pane_t1

0xd046,	// (0x0008d4b2) list_double_cale_preview_pane_g1

0xd04e,	// (0x0008d4ba) list_double_cale_preview_pane_t1_ParamLimits

0xd04e,	// (0x0008d4ba) list_double_cale_preview_pane_t1

0xd063,	// (0x0008d4cf) list_double_cale_preview_pane_t2_ParamLimits

0xd063,	// (0x0008d4cf) list_double_cale_preview_pane_t2

0x0001,

0xfe29,	// (0x00090295) list_double_cale_preview_pane_t_ParamLimits

0xfe29,	// (0x00090295) list_double_cale_preview_pane_t

0x0206,	// (0x00080672) main_ezdial_pane

0x027f,	// (0x000806eb) main_sp_fs_email_pane_ParamLimits

0xc846,	// (0x0008ccb2) cmail_ddmenu_btn01_pane_ParamLimits

0xc846,	// (0x0008ccb2) cmail_ddmenu_btn01_pane

0xc863,	// (0x0008cccf) cmail_ddmenu_btn02_pane_ParamLimits

0xc863,	// (0x0008cccf) cmail_ddmenu_btn02_pane

0xc881,	// (0x0008cced) cmail_ddmenu_btn03_pane_ParamLimits

0xc881,	// (0x0008cced) cmail_ddmenu_btn03_pane

0xc8af,	// (0x0008cd1b) main_sp_fs_ctrlbar_pane_ParamLimits

0xc8cb,	// (0x0008cd37) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcce8,	// (0x0008d154) list_cmail_body_pane_ParamLimits

0x2a45,	// (0x00082eb1) bg_button_pane_cp12

0x2a4e,	// (0x00082eba) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2a4e,	// (0x00082eba) list_single_cmail_header_detail_pane_g3

0xcd6e,	// (0x0008d1da) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcd6e,	// (0x0008d1da) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x0009021a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x0009021a) list_single_cmail_header_detail_pane_t

0x2b7d,	// (0x00082fe9) phacti_term_pane_t2_ParamLimits

0x2b7d,	// (0x00082fe9) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x00090224) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x00090224) phacti_term_pane_t

0x2e32,	// (0x0008329e) aid_size_list_single_double

0xd07b,	// (0x0008d4e7) popup_ezdial_listscroll_window

0xd09b,	// (0x0008d507) popup_number_entry_window_cp01

0xdb8c,	// (0x0008dff8) bg_popup_call_pane_cp09

0x2e3e,	// (0x000832aa) ezdial_list_pane

0x2e46,	// (0x000832b2) scroll_pane_cp23

0x0888,	// (0x00080cf4) bg_button_pane_cp028_ParamLimits

0x0888,	// (0x00080cf4) bg_button_pane_cp028

0xd0a9,	// (0x0008d515) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd0a9,	// (0x0008d515) cmail_ddmenu_btn01_pane_g1

0xd0b9,	// (0x0008d525) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd0b9,	// (0x0008d525) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2e,	// (0x0009029a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2e,	// (0x0009029a) cmail_ddmenu_btn01_pane_g

0x2e4e,	// (0x000832ba) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2e4e,	// (0x000832ba) cmail_ddmenu_btn01_pane_t1

0xef97,	// (0x0008f403) bg_button_pane_cp029_ParamLimits

0xef97,	// (0x0008f403) bg_button_pane_cp029

0xd0b9,	// (0x0008d525) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd0b9,	// (0x0008d525) cmail_ddmenu_btn02_pane_g1

0xd0d1,	// (0x0008d53d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd0d1,	// (0x0008d53d) cmail_ddmenu_btn02_pane_t1

0x1514,	// (0x00081980) bg_button_pane_cp031_ParamLimits

0x1514,	// (0x00081980) bg_button_pane_cp031

0xd0b9,	// (0x0008d525) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd0b9,	// (0x0008d525) cmail_ddmenu_btn03_pane_g1

0xd0d1,	// (0x0008d53d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd0d1,	// (0x0008d53d) cmail_ddmenu_btn03_pane_t1

0xa361,	// (0x0008a7cd) cell_dialer2_keypad_pane_t1_ParamLimits

0xa37b,	// (0x0008a7e7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa37b,	// (0x0008a7e7) cell_dialer2_keypad_pane_t1_copy1

0xc07e,	// (0x0008c4ea) ncimui_group_button_pane

0x027f,	// (0x000806eb) main_sp_fs_calendar_pane_ParamLimits

0xccfd,	// (0x0008d169) list_single_cmail_header_caption_pane_ParamLimits

0x3c5e,	// (0x000840ca) aid_recal_txt_sm_pane

0x0206,	// (0x00080672) mian_recal_day_pane

0x2bfe,	// (0x0008306a) popup_sp_fs_cale_preview_window_ParamLimits

0x0206,	// (0x00080672) list_recal_day_pane

0x2e7c,	// (0x000832e8) list_single_recal_day_pane_ParamLimits

0x2e7c,	// (0x000832e8) list_single_recal_day_pane

0x2e8e,	// (0x000832fa) list_single_recal_day_pane_g1_ParamLimits

0x2e8e,	// (0x000832fa) list_single_recal_day_pane_g1

0x2e9a,	// (0x00083306) list_single_recal_day_pane_g2_ParamLimits

0x2e9a,	// (0x00083306) list_single_recal_day_pane_g2

0x2ea6,	// (0x00083312) list_single_recal_day_pane_g3_ParamLimits

0x2ea6,	// (0x00083312) list_single_recal_day_pane_g3

0xd0f5,	// (0x0008d561) list_single_recal_day_pane_g4_ParamLimits

0xd0f5,	// (0x0008d561) list_single_recal_day_pane_g4

0x2eb2,	// (0x0008331e) list_single_recal_day_pane_g5_ParamLimits

0x2eb2,	// (0x0008331e) list_single_recal_day_pane_g5

0x2ebe,	// (0x0008332a) list_single_recal_day_pane_g6_ParamLimits

0x2ebe,	// (0x0008332a) list_single_recal_day_pane_g6

0x0005,

0xfe3d,	// (0x000902a9) list_single_recal_day_pane_g_ParamLimits

0xfe3d,	// (0x000902a9) list_single_recal_day_pane_g

0x2eca,	// (0x00083336) list_single_recal_day_pane_t1

0x2ed8,	// (0x00083344) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x000902b6) list_single_recal_day_pane_t

0xd103,	// (0x0008d56f) ncimui_query_button_pane_ParamLimits

0xd103,	// (0x0008d56f) ncimui_query_button_pane

0xd113,	// (0x0008d57f) ncimui_query_button_pane_t1_ParamLimits

0xd113,	// (0x0008d57f) ncimui_query_button_pane_t1

0x2ee6,	// (0x00083352) ncimui_query_button_pane_t2_ParamLimits

0x2ee6,	// (0x00083352) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x000902bb) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x000902bb) ncimui_query_button_pane_t

0xd126,	// (0x0008d592) query_button_pane_ParamLimits

0xd126,	// (0x0008d592) query_button_pane

0x0206,	// (0x00080672) bg_button_pane_cp0028

0x2ef9,	// (0x00083365) query_button_pane_t1

0x87d8,	// (0x00088c44) main_tport_pane_ParamLimits

0xcc0b,	// (0x0008d077) bg_popup_window_pane_cp01_ParamLimits

0xcc0b,	// (0x0008d077) bg_popup_window_pane_cp01

0xcc18,	// (0x0008d084) heading_pane_cp08_ParamLimits

0xcc18,	// (0x0008d084) heading_pane_cp08

0xcc26,	// (0x0008d092) heading_pane_cp07_ParamLimits

0xcc26,	// (0x0008d092) heading_pane_cp07

0x2a10,	// (0x00082e7c) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x00090207) cell_tport_appsw_pane_g

0x7ee5,	// (0x00088351) input_candi_list_open_g1

0x44a2,	// (0x0008490e) list_cale_time_pane_g6_ParamLimits

0x44a2,	// (0x0008490e) list_cale_time_pane_g6

0x923d,	// (0x000896a9) aid_size_touch_calib_1_ParamLimits

0x923d,	// (0x000896a9) aid_size_touch_calib_1

0x9249,	// (0x000896b5) aid_size_touch_calib_2_ParamLimits

0x9249,	// (0x000896b5) aid_size_touch_calib_2

0x9257,	// (0x000896c3) aid_size_touch_calib_3_ParamLimits

0x9257,	// (0x000896c3) aid_size_touch_calib_3

0x9267,	// (0x000896d3) aid_size_touch_calib_4_ParamLimits

0x9267,	// (0x000896d3) aid_size_touch_calib_4

0x9275,	// (0x000896e1) main_touch_calib_button_group_pane_ParamLimits

0x9275,	// (0x000896e1) main_touch_calib_button_group_pane

0x9283,	// (0x000896ef) main_touch_calib_pane_g1_ParamLimits

0x928f,	// (0x000896fb) main_touch_calib_pane_g2_ParamLimits

0x929b,	// (0x00089707) main_touch_calib_pane_g3_ParamLimits

0x92a7,	// (0x00089713) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0008fbe1) main_touch_calib_pane_g_ParamLimits

0x92b3,	// (0x0008971f) main_touch_calib_pane_t1_ParamLimits

0x92ca,	// (0x00089736) main_touch_calib_pane_t2_ParamLimits

0x92e1,	// (0x0008974d) main_touch_calib_pane_t3_ParamLimits

0x92f5,	// (0x00089761) main_touch_calib_pane_t4_ParamLimits

0x930b,	// (0x00089777) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0008fbea) main_touch_calib_pane_t_ParamLimits

0x0e6b,	// (0x000812d7) list_single_fp_cale_pane_g3_ParamLimits

0x0e6b,	// (0x000812d7) list_single_fp_cale_pane_g3

0xa7c9,	// (0x0008ac35) bg_button_pane_cp012_ParamLimits

0xa7c9,	// (0x0008ac35) bg_vkb2_func_pane_cp03_ParamLimits

0xb176,	// (0x0008b5e2) cell_vitu2_function_top_pane_g1_ParamLimits

0xa7c9,	// (0x0008ac35) bg_vkb2_func_pane_cp04_ParamLimits

0xc01a,	// (0x0008c486) main_ncimui_button_group_pane_ParamLimits

0xc01a,	// (0x0008c486) main_ncimui_button_group_pane

0xc06c,	// (0x0008c4d8) main_ncimui_pane_t3_ParamLimits

0xc06c,	// (0x0008c4d8) main_ncimui_pane_t3

0x2b2b,	// (0x00082f97) phacti_button_group_pane

0x2e32,	// (0x0008329e) aid_size_list_single_double_ParamLimits

0xd07b,	// (0x0008d4e7) popup_ezdial_listscroll_window_ParamLimits

0xd09b,	// (0x0008d507) popup_number_entry_window_cp01_ParamLimits

0xd133,	// (0x0008d59f) phacti_button_pane_ParamLimits

0xd133,	// (0x0008d59f) phacti_button_pane

0x0206,	// (0x00080672) bg_button_pane_cp14

0x2f07,	// (0x00083373) phacti_button_pane_t1

0xd144,	// (0x0008d5b0) main_touch_calib_button_pane_ParamLimits

0xd144,	// (0x0008d5b0) main_touch_calib_button_pane

0x3efd,	// (0x00084369) bg_button_pane_cp18_ParamLimits

0x3efd,	// (0x00084369) bg_button_pane_cp18

0x2f15,	// (0x00083381) main_touch_calib_button_pane_t1_ParamLimits

0x2f15,	// (0x00083381) main_touch_calib_button_pane_t1

0x2f2b,	// (0x00083397) main_touch_calib_button_pane_t2_ParamLimits

0x2f2b,	// (0x00083397) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x000902c0) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x000902c0) main_touch_calib_button_pane_t

0x0206,	// (0x00080672) cell_ncimui_button_pane

0x0206,	// (0x00080672) bg_button_pane_cp032

0x2f49,	// (0x000833b5) cell_ncimui_button_pane_t1

0xa3d7,	// (0x0008a843) image3_infobar_pane_ParamLimits

0xa3d7,	// (0x0008a843) image3_infobar_pane

0xc3dc,	// (0x0008c848) fs_bigclock_status_pane_ParamLimits

0xc3dc,	// (0x0008c848) fs_bigclock_status_pane

0xc3e9,	// (0x0008c855) main_fs_bigclock_clock_pane_ParamLimits

0xc3e9,	// (0x0008c855) main_fs_bigclock_clock_pane

0xc40d,	// (0x0008c879) main_fs_bigclock_indi_pane_ParamLimits

0xc40d,	// (0x0008c879) main_fs_bigclock_indi_pane

0xc445,	// (0x0008c8b1) main_fs_bigclock_swipe_pane_ParamLimits

0xc445,	// (0x0008c8b1) main_fs_bigclock_swipe_pane

0x0206,	// (0x00080672) main_fs_clock_dumped_data

0xc477,	// (0x0008c8e3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc477,	// (0x0008c8e3) list_single_fs_bigclock_indicator_pane_g1

0xc49c,	// (0x0008c908) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc49c,	// (0x0008c908) list_single_fs_bigclock_indicator_pane_g2

0xc4b6,	// (0x0008c922) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc4b6,	// (0x0008c922) list_single_fs_bigclock_indicator_pane_g3

0xc4d4,	// (0x0008c940) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc4d4,	// (0x0008c940) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x000900f3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x000900f3) list_single_fs_bigclock_indicator_pane_g

0xc4fa,	// (0x0008c966) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc4fa,	// (0x0008c966) list_single_fs_bigclock_indicator_pane_t1

0xc522,	// (0x0008c98e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc522,	// (0x0008c98e) list_single_fs_bigclock_indicator_pane_t2

0xc54a,	// (0x0008c9b6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc54a,	// (0x0008c9b6) list_single_fs_bigclock_indicator_pane_t3

0xc574,	// (0x0008c9e0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc574,	// (0x0008c9e0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x000900fe) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x000900fe) list_single_fs_bigclock_indicator_pane_t

0x2f57,	// (0x000833c3) image3_infobar_fav_pane_ParamLimits

0x2f57,	// (0x000833c3) image3_infobar_fav_pane

0x2f67,	// (0x000833d3) image3_infobar_loc_pane_ParamLimits

0x2f67,	// (0x000833d3) image3_infobar_loc_pane

0x2f7d,	// (0x000833e9) image3_infobar_time_pane_ParamLimits

0x2f7d,	// (0x000833e9) image3_infobar_time_pane

0x0aa9,	// (0x00080f15) image3_infobar_time_pane_g1

0x2f8d,	// (0x000833f9) image3_infobar_time_pane_t1

0x0aa9,	// (0x00080f15) image3_infobar_loc_pane_g1

0x2f9b,	// (0x00083407) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x000902c5) image3_infobar_loc_pane_g

0x2fa3,	// (0x0008340f) image3_infobar_loc_pane_t1

0x0aa9,	// (0x00080f15) image3_infobar_fav_pane_g1

0x2fb1,	// (0x0008341d) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x000902ca) image3_infobar_fav_pane_g

0x2fb9,	// (0x00083425) fs_bigclock_status_battery_pane

0x2fc2,	// (0x0008342e) fs_bigclock_status_signal_pane

0x2fcb,	// (0x00083437) fs_bigclock_status_title_pane

0x2fd4,	// (0x00083440) fs_bigclock_status_signal_pane_g1

0x2fdd,	// (0x00083449) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x000902cf) fs_bigclock_status_signal_pane_g

0x2fe5,	// (0x00083451) fs_bigclock_status_battery_pane_g1

0x2fee,	// (0x0008345a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x000902d4) fs_bigclock_status_battery_pane_g

0x2ff6,	// (0x00083462) fs_bigclock_status_title_pane_t1

0x0aa9,	// (0x00080f15) main_fs_bigclock_clock_pane_g1

0x3004,	// (0x00083470) main_fs_bigclock_clock_pane_g2

0x3004,	// (0x00083470) main_fs_bigclock_clock_pane_g3

0x3004,	// (0x00083470) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x000902d9) main_fs_bigclock_clock_pane_g

0x3010,	// (0x0008347c) main_fs_bigclock_clock_pane_t1

0xd156,	// (0x0008d5c2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x000902e2) main_fs_bigclock_clock_pane_t

0x301e,	// (0x0008348a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x301e,	// (0x0008348a) list_single_fs_bigclock_indicator_pane

0xd165,	// (0x0008d5d1) list_single_fs_bigclock_pane_ParamLimits

0xd165,	// (0x0008d5d1) list_single_fs_bigclock_pane

0x3038,	// (0x000834a4) main_fs_bigclock_indicator_pane_t1

0x3047,	// (0x000834b3) list_single_fs_bigclock_pane_g1

0x304f,	// (0x000834bb) list_single_fs_bigclock_pane_t1

0x0aa9,	// (0x00080f15) main_fs_bigclock_swipe_pane_g1

0x308f,	// (0x000834fb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x000902f3) main_fs_bigclock_swipe_pane_g

0x3097,	// (0x00083503) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3097,	// (0x00083503) main_fs_bigclock_swipe_pane_t1

0x765b,	// (0x00087ac7) call_type_pane_ParamLimits

0x0206,	// (0x00080672) main_btmg_pane

0x2d1b,	// (0x00083187) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2d1b,	// (0x00083187) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfa,	// (0x00090266) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x00090266) list_single_cale_mrui_row_pane_g

0x2e6c,	// (0x000832d8) list_recal_vselct_arw_lo_pane

0x2e74,	// (0x000832e0) list_recal_vselct_arw_up_pane

0x3c47,	// (0x000840b3) list_recal_vselct_pane

0x30b4,	// (0x00083520) btmg_button_pane

0xd1c8,	// (0x0008d634) main_btmg_pane_g1

0x0206,	// (0x00080672) bg_button_pane_cp044

0x30be,	// (0x0008352a) btmg_button_pane_t1

0xef8f,	// (0x0008f3fb) aid_listscroll_gen

0x027f,	// (0x000806eb) main_cntbar_detail_pane

0x2a26,	// (0x00082e92) list_cmail_folder_pane

0x2a36,	// (0x00082ea2) sp_fs_scroll_pane_cp03_ParamLimits

0x345d,	// (0x000838c9) list_single_fs_dyc_pane_cp01_ParamLimits

0x345d,	// (0x000838c9) list_single_fs_dyc_pane_cp01

0x30cc,	// (0x00083538) aid_size_cmail_indent

0x30d5,	// (0x00083541) list_single_dyc_row_pane_cp01

0xd1f0,	// (0x0008d65c) cntbar_detail_list_pane_ParamLimits

0xd1f0,	// (0x0008d65c) cntbar_detail_list_pane

0xd230,	// (0x0008d69c) main_cntbar_detail_cont_pane_ParamLimits

0xd230,	// (0x0008d69c) main_cntbar_detail_cont_pane

0x75f5,	// (0x00087a61) scroll_pane_cp032_ParamLimits

0x75f5,	// (0x00087a61) scroll_pane_cp032

0xd23c,	// (0x0008d6a8) cntbar_detail_list_event_pane_ParamLimits

0xd23c,	// (0x0008d6a8) cntbar_detail_list_event_pane

0xd1fe,	// (0x0008d66a) cntbar_detail_list_shct_pane

0x4355,	// (0x000847c1) aid_list_gen

0x30de,	// (0x0008354a) aid_scroll

0x30e7,	// (0x00083553) aid_size_touch_scroll_bar

0x30f0,	// (0x0008355c) aid_list_double

0x30f9,	// (0x00083565) aid_list_single

0xd24c,	// (0x0008d6b8) aid_list_single_lg

0x3102,	// (0x0008356e) aid_list_z_g_a_sm

0x3878,	// (0x00083ce4) aid_list_z_g_d

0x310a,	// (0x00083576) aid_txt_z_prm

0x3118,	// (0x00083584) aid_txt_z_prm_cp01

0x3126,	// (0x00083592) aid_txt_z_sec

0xd255,	// (0x0008d6c1) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd255,	// (0x0008d6c1) main_cntbar_detail_cont_pane_g1

0xd262,	// (0x0008d6ce) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd262,	// (0x0008d6ce) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x000902f8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x000902f8) main_cntbar_detail_cont_pane_g

0x3134,	// (0x000835a0) main_cntbar_detail_cont_pane_t1

0x3142,	// (0x000835ae) main_cntbar_detail_cont_pane_t2

0x3150,	// (0x000835bc) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x000902fd) main_cntbar_detail_cont_pane_t

0xd26e,	// (0x0008d6da) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd26e,	// (0x0008d6da) cell_cntbar_detail_list_shct_pane

0x315e,	// (0x000835ca) cntbar_detail_list_shct_pane_g1

0x3167,	// (0x000835d3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x00090304) cntbar_detail_list_shct_pane_g

0xd282,	// (0x0008d6ee) cntbar_detail_list_event_pane_g1_ParamLimits

0xd282,	// (0x0008d6ee) cntbar_detail_list_event_pane_g1

0xd28e,	// (0x0008d6fa) cntbar_detail_list_event_pane_g2_ParamLimits

0xd28e,	// (0x0008d6fa) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x00090309) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x00090309) cntbar_detail_list_event_pane_g

0xd2fc,	// (0x0008d768) cntbar_detail_list_event_pane_t1_ParamLimits

0xd2fc,	// (0x0008d768) cntbar_detail_list_event_pane_t1

0xd311,	// (0x0008d77d) cntbar_detail_list_event_pane_t2_ParamLimits

0xd311,	// (0x0008d77d) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x00090316) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x00090316) cntbar_detail_list_event_pane_t

0x0aa9,	// (0x00080f15) cell_cntbar_detail_list_shct_pane_g1

0x79f3,	// (0x00087e5f) navi_pane_mv_g3

0x027f,	// (0x000806eb) main_cntbar_detail_pane_ParamLimits

0x0206,	// (0x00080672) main_notif_wgt_pane

0xa0ab,	// (0x0008a517) aid_tch_main_mp4_pane_g4

0xa2c0,	// (0x0008a72c) popup_slider_window_cp02

0x2e63,	// (0x000832cf) list_recal_day_event_pane

0xd1d0,	// (0x0008d63c) cntbar_detail_btn_pane_ParamLimits

0xd1d0,	// (0x0008d63c) cntbar_detail_btn_pane

0xd1e0,	// (0x0008d64c) cntbar_detail_btn_pane_cp01_ParamLimits

0xd1e0,	// (0x0008d64c) cntbar_detail_btn_pane_cp01

0xd1fe,	// (0x0008d66a) cntbar_detail_list_shct_pane_ParamLimits

0xd20a,	// (0x0008d676) cntbar_detail_pane_g1_ParamLimits

0xd20a,	// (0x0008d676) cntbar_detail_pane_g1

0xd21a,	// (0x0008d686) cntbar_detail_pane_t1_ParamLimits

0xd21a,	// (0x0008d686) cntbar_detail_pane_t1

0xd29a,	// (0x0008d706) cntbar_detail_list_event_pane_g3_ParamLimits

0xd29a,	// (0x0008d706) cntbar_detail_list_event_pane_g3

0xd2b2,	// (0x0008d71e) cntbar_detail_list_event_pane_g4_ParamLimits

0xd2b2,	// (0x0008d71e) cntbar_detail_list_event_pane_g4

0xd2ca,	// (0x0008d736) cntbar_detail_list_event_pane_g5_ParamLimits

0xd2ca,	// (0x0008d736) cntbar_detail_list_event_pane_g5

0xd2e2,	// (0x0008d74e) cntbar_detail_list_event_pane_g6_ParamLimits

0xd2e2,	// (0x0008d74e) cntbar_detail_list_event_pane_g6

0xd326,	// (0x0008d792) cntbar_detail_list_event_pane_t3_ParamLimits

0xd326,	// (0x0008d792) cntbar_detail_list_event_pane_t3

0xd338,	// (0x0008d7a4) popup_notif_wgt_window_ParamLimits

0xd338,	// (0x0008d7a4) popup_notif_wgt_window

0xd348,	// (0x0008d7b4) popup_submenu_window_cp01_ParamLimits

0xd348,	// (0x0008d7b4) popup_submenu_window_cp01

0xdb8c,	// (0x0008dff8) bg_popup_window_pane_cp10

0x3170,	// (0x000835dc) listscroll_notif_wgt_pane

0x317a,	// (0x000835e6) list_notif_wgt_window

0x3183,	// (0x000835ef) scroll_pane_cp033

0x318c,	// (0x000835f8) list_notif_wgt_row_pane_ParamLimits

0x318c,	// (0x000835f8) list_notif_wgt_row_pane

0x31a0,	// (0x0008360c) aid_size_list_notif_wgt_del

0x31a9,	// (0x00083615) list_notif_wgt_row_pane_g1

0x31b1,	// (0x0008361d) list_notif_wgt_row_pane_g2

0x31b9,	// (0x00083625) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x0009031d) list_notif_wgt_row_pane_g

0x31c2,	// (0x0008362e) list_notif_wgt_row_pane_t1

0x31d0,	// (0x0008363c) list_notif_wgt_row_pane_t2

0x31de,	// (0x0008364a) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x00090324) list_notif_wgt_row_pane_t

0x1803,	// (0x00081c6f) list_recal_day_event_pane_g1

0x31ec,	// (0x00083658) list_recal_day_event_pane_t1

0x0206,	// (0x00080672) bg_button_pane_cp045

0x31fb,	// (0x00083667) cntbar_detail_btn_pane_t1

0xef97,	// (0x0008f403) main_callh_pane_ParamLimits

0xef97,	// (0x0008f403) main_callh_pane

0x0206,	// (0x00080672) main_coverflow0_pane

0x0206,	// (0x00080672) main_wgtman_pane

0xc45d,	// (0x0008c8c9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc45d,	// (0x0008c8c9) main_fs_bigclock_unlock_btn_pane

0x2a08,	// (0x00082e74) bg_button_pane_cp16

0xcc91,	// (0x0008d0fd) cell_tport_appsw_pane_g3

0xd356,	// (0x0008d7c2) cf0_flow_pane_ParamLimits

0xd356,	// (0x0008d7c2) cf0_flow_pane

0x3209,	// (0x00083675) listscroll_cf0_pane

0x3212,	// (0x0008367e) main_cf0_pane_g1

0xd365,	// (0x0008d7d1) main_cf0_pane_t1_ParamLimits

0xd365,	// (0x0008d7d1) main_cf0_pane_t1

0xd379,	// (0x0008d7e5) main_cf0_pane_t2_ParamLimits

0xd379,	// (0x0008d7e5) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x0009032b) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x0009032b) main_cf0_pane_t

0x321c,	// (0x00083688) scroll_pane_cp11

0xd38d,	// (0x0008d7f9) cf0_flow_pane_g1

0xd395,	// (0x0008d801) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x00090330) cf0_flow_pane_g

0xd39d,	// (0x0008d809) cf0_flow_pane_t1

0x0206,	// (0x00080672) main_call6_pane

0x0206,	// (0x00080672) main_calllock_pane

0xd3ab,	// (0x0008d817) call6_btn_grp_pane_ParamLimits

0xd3ab,	// (0x0008d817) call6_btn_grp_pane

0xd3ba,	// (0x0008d826) call6_pane_g1_ParamLimits

0xd3ba,	// (0x0008d826) call6_pane_g1

0xd3ca,	// (0x0008d836) popup_call6_1st_window_ParamLimits

0xd3ca,	// (0x0008d836) popup_call6_1st_window

0xd3d8,	// (0x0008d844) popup_call6_2nd_window_ParamLimits

0xd3d8,	// (0x0008d844) popup_call6_2nd_window

0xd3e6,	// (0x0008d852) cell_call6_btn_pane_ParamLimits

0xd3e6,	// (0x0008d852) cell_call6_btn_pane

0xdb8c,	// (0x0008dff8) bg_popup_call2_in_pane_cp03

0x3227,	// (0x00083693) popup_call6_1st_window_g1

0x322f,	// (0x0008369b) popup_call6_1st_window_g2

0x3237,	// (0x000836a3) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x00090335) popup_call6_1st_window_g

0x323f,	// (0x000836ab) popup_call6_1st_window_t1

0x324e,	// (0x000836ba) popup_call6_1st_window_t2

0x325e,	// (0x000836ca) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x0009033c) popup_call6_1st_window_t

0xdb8c,	// (0x0008dff8) bg_popup_call2_in_pane_cp04

0x3227,	// (0x00083693) popup_call6_2nd_window_g1

0x322f,	// (0x0008369b) popup_call6_2nd_window_g2

0x3237,	// (0x000836a3) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x00090335) popup_call6_2nd_window_g

0x323f,	// (0x000836ab) popup_call6_2nd_window_t1

0x0206,	// (0x00080672) bg_button_pane_cp15

0x326e,	// (0x000836da) cell_call6_btn_pane_g1

0x3277,	// (0x000836e3) cell_call6_btn_pane_t1

0xd3f5,	// (0x0008d861) listscroll_wgtman_pane_ParamLimits

0xd3f5,	// (0x0008d861) listscroll_wgtman_pane

0xd413,	// (0x0008d87f) wgtman_btn_pane_ParamLimits

0xd413,	// (0x0008d87f) wgtman_btn_pane

0xda52,	// (0x0008debe) aid_scroll_copy1

0x3286,	// (0x000836f2) list_wgtman_pane

0xd448,	// (0x0008d8b4) wgtman_btn_pane_g1_ParamLimits

0xd448,	// (0x0008d8b4) wgtman_btn_pane_g1

0xd470,	// (0x0008d8dc) wgtman_btn_pane_t1_ParamLimits

0xd470,	// (0x0008d8dc) wgtman_btn_pane_t1

0x3290,	// (0x000836fc) wgtman_btn_pane_t2_ParamLimits

0x3290,	// (0x000836fc) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x00090343) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x00090343) wgtman_btn_pane_t

0x32a7,	// (0x00083713) listrow_wgtman_pane_ParamLimits

0x32a7,	// (0x00083713) listrow_wgtman_pane

0x32bb,	// (0x00083727) listrow_wgtman_pane_g1

0xd4a7,	// (0x0008d913) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x00090348) listrow_wgtman_pane_g

0x32c4,	// (0x00083730) listrow_wgtman_pane_t1

0x32d2,	// (0x0008373e) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x0009034d) listrow_wgtman_pane_t

0x32e0,	// (0x0008374c) wait_bar_pane_cp09

0x32e8,	// (0x00083754) main_calllock_btn_pane

0x32f2,	// (0x0008375e) main_calllock_pane_g1

0x0206,	// (0x00080672) bg_button_pane_cp17

0x32fe,	// (0x0008376a) main_calllock_btn_pane_g1

0x3307,	// (0x00083773) main_calllock_btn_pane_t1

0x0206,	// (0x00080672) main_dialer3_pane

0x0206,	// (0x00080672) main_fmrd2_pane

0x0aa9,	// (0x00080f15) main_fs_bigclock_unlock_btn_pane_g1

0x331e,	// (0x0008378a) main_fs_bigclock_unlock_btn_pane_t1

0xd4b1,	// (0x0008d91d) area_fmrd2_info_pane_ParamLimits

0xd4b1,	// (0x0008d91d) area_fmrd2_info_pane

0xd4bf,	// (0x0008d92b) area_fmrd2_visual_pane_ParamLimits

0xd4bf,	// (0x0008d92b) area_fmrd2_visual_pane

0xd4cd,	// (0x0008d939) fmrd2_indi_pane_ParamLimits

0xd4cd,	// (0x0008d939) fmrd2_indi_pane

0xd4da,	// (0x0008d946) area_fmrd2_visual_pane_g1

0xd4e2,	// (0x0008d94e) area_fmrd2_visual_pane_t1

0xd4f2,	// (0x0008d95e) area_fmrd2_visual_pane_t2

0xd502,	// (0x0008d96e) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x00090357) area_fmrd2_visual_pane_t

0xd512,	// (0x0008d97e) area_fmrd2_info_pane_g1

0xd51a,	// (0x0008d986) area_fmrd2_info_pane_t1

0xd52a,	// (0x0008d996) area_fmrd2_info_pane_t2

0xd53a,	// (0x0008d9a6) area_fmrd2_info_pane_t3

0xd54a,	// (0x0008d9b6) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x0009035e) area_fmrd2_info_pane_t

0xd55a,	// (0x0008d9c6) fmrd2_indi_pane_t1

0xd56a,	// (0x0008d9d6) fmrd2_indi_pane_t2

0xd57a,	// (0x0008d9e6) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x00090367) fmrd2_indi_pane_t

0xc4e3,	// (0x0008c94f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc4e3,	// (0x0008c94f) list_single_fs_bigclock_indicator_pane_g5

0xc589,	// (0x0008c9f5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc589,	// (0x0008c9f5) list_single_fs_bigclock_indicator_pane_t5

0xce2e,	// (0x0008d29a) aid_cell_bcale_month_pane_ParamLimits

0xce2e,	// (0x0008d29a) aid_cell_bcale_month_pane

0xce3a,	// (0x0008d2a6) bcale_month_pane_ParamLimits

0xce3a,	// (0x0008d2a6) bcale_month_pane

0xce48,	// (0x0008d2b4) bcale_preview_pane_ParamLimits

0xce48,	// (0x0008d2b4) bcale_preview_pane

0x304f,	// (0x000834bb) list_single_fs_bigclock_pane_t1_ParamLimits

0x306b,	// (0x000834d7) list_single_fs_bigclock_pane_t2_ParamLimits

0x306b,	// (0x000834d7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x000902ee) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x000902ee) list_single_fs_bigclock_pane_t

0x3316,	// (0x00083782) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x00090352) main_fs_bigclock_unlock_btn_pane_g

0xd58a,	// (0x0008d9f6) aid_dia3_key_size_ParamLimits

0xd58a,	// (0x0008d9f6) aid_dia3_key_size

0xd596,	// (0x0008da02) aid_dia3_listrow_size_ParamLimits

0xd596,	// (0x0008da02) aid_dia3_listrow_size

0xd5a4,	// (0x0008da10) dia3_keypad_fun_pane_ParamLimits

0xd5a4,	// (0x0008da10) dia3_keypad_fun_pane

0xd5b4,	// (0x0008da20) dia3_keypad_num_pane_ParamLimits

0xd5b4,	// (0x0008da20) dia3_keypad_num_pane

0xd5c4,	// (0x0008da30) dia3_listscroll_pane_ParamLimits

0xd5c4,	// (0x0008da30) dia3_listscroll_pane

0xd5d4,	// (0x0008da40) dia3_numentry_pane_ParamLimits

0xd5d4,	// (0x0008da40) dia3_numentry_pane

0x332c,	// (0x00083798) dia3_list_pane

0x3337,	// (0x000837a3) scroll_pane_cp12

0x0206,	// (0x00080672) bg_dia3_numentry_pane

0x3342,	// (0x000837ae) dia3_numentry_pane_t1

0xd5e4,	// (0x0008da50) cell_dia3_key_num_pane

0xd5ec,	// (0x0008da58) cell_dia3_key0_fun_pane_ParamLimits

0xd5ec,	// (0x0008da58) cell_dia3_key0_fun_pane

0xd5f9,	// (0x0008da65) cell_dia3_key1_fun_pane_ParamLimits

0xd5f9,	// (0x0008da65) cell_dia3_key1_fun_pane

0xd606,	// (0x0008da72) dia3_listrow_pane

0x2251,	// (0x000826bd) bg_dia3_numentry_pane_g1

0x0206,	// (0x00080672) bg_button_pane_cp21

0x3351,	// (0x000837bd) cell_dia3_key_num_pane_t1

0x335f,	// (0x000837cb) cell_dia3_key_num_pane_t2

0x336e,	// (0x000837da) cell_dia3_key_num_pane_t3

0x337d,	// (0x000837e9) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x0009036e) cell_dia3_key_num_pane_t

0x0206,	// (0x00080672) bg_button_pane_cp19

0xd613,	// (0x0008da7f) cell_dia3_key0_fun_pane_g1

0x0206,	// (0x00080672) bg_button_pane_cp20

0xd61b,	// (0x0008da87) cell_dia3_key1_fun_pane_g1

0xd623,	// (0x0008da8f) area_left_week_number_pane

0xd62c,	// (0x0008da98) area_top_day_name_pane

0xd635,	// (0x0008daa1) frame_month_view_pane

0xd63f,	// (0x0008daab) grid_month_view_pane

0xd649,	// (0x0008dab5) cell_top_day_name_pane_ParamLimits

0xd649,	// (0x0008dab5) cell_top_day_name_pane

0xd665,	// (0x0008dad1) cell_area_left_week_number_pane_ParamLimits

0xd665,	// (0x0008dad1) cell_area_left_week_number_pane

0xd679,	// (0x0008dae5) cell_month_view_pane_ParamLimits

0xd679,	// (0x0008dae5) cell_month_view_pane

0x338c,	// (0x000837f8) frm_month_g1

0xd698,	// (0x0008db04) frm_month_g2

0xd6a2,	// (0x0008db0e) frm_month_g3

0xd6ac,	// (0x0008db18) frm_month_g4

0xd6b6,	// (0x0008db22) frm_month_g5

0xd6c0,	// (0x0008db2c) frm_month_g6

0xd6ca,	// (0x0008db36) frm_month_g7

0x3395,	// (0x00083801) frm_month_g8

0xd6d4,	// (0x0008db40) frm_month_g9

0xd6dd,	// (0x0008db49) frm_month_g10

0xd6e6,	// (0x0008db52) frm_month_g11

0xd6ef,	// (0x0008db5b) frm_month_g12

0xd6f8,	// (0x0008db64) frm_month_g13

0xd703,	// (0x0008db6f) frm_month_g14

0xd70e,	// (0x0008db7a) frm_month_g15

0xd719,	// (0x0008db85) frm_month_g16

0x000f,

0xff0b,	// (0x00090377) frm_month_g

0xd724,	// (0x0008db90) cell_top_day_name_pane_t1

0xd733,	// (0x0008db9f) cell_area_left_week_number_pane_g1

0xd724,	// (0x0008db90) cell_area_left_week_number_pane_t1

0x0aa9,	// (0x00080f15) cell_month_view_pane_g1

0xd73b,	// (0x0008dba7) cell_month_view_pane_t1

0x0206,	// (0x00080672) main_fps_pane

0x2753,	// (0x00082bbf) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2753,	// (0x00082bbf) cmail_ddmenu_btn02_pane_cp1

0x276f,	// (0x00082bdb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x276f,	// (0x00082bdb) cmail_ddmenu_btn02_pane_cp2

0xd0c5,	// (0x0008d531) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd0c5,	// (0x0008d531) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe33,	// (0x0009029f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe33,	// (0x0009029f) cmail_ddmenu_btn02_pane_g

0xd0e3,	// (0x0008d54f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd0e3,	// (0x0008d54f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe38,	// (0x000902a4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe38,	// (0x000902a4) cmail_ddmenu_btn02_pane_t

0xd74a,	// (0x0008dbb6) fps_text_pane_ParamLimits

0xd74a,	// (0x0008dbb6) fps_text_pane

0xd757,	// (0x0008dbc3) main_fps_pane_g1_ParamLimits

0xd757,	// (0x0008dbc3) main_fps_pane_g1

0xd763,	// (0x0008dbcf) wait_bar_pane_cp010_ParamLimits

0xd763,	// (0x0008dbcf) wait_bar_pane_cp010

0xd76f,	// (0x0008dbdb) fps_text_pane_t1_ParamLimits

0xd76f,	// (0x0008dbdb) fps_text_pane_t1

0xa6b4,	// (0x0008ab20) cam4_image_uncrop_pane_g1

0xa6bd,	// (0x0008ab29) cam4_image_uncrop_pane_g2

0xa6c6,	// (0x0008ab32) cam4_image_uncrop_pane_g3

0xa6cf,	// (0x0008ab3b) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0008fd79) cam4_image_uncrop_pane_g

0xd606,	// (0x0008da72) dia3_listrow_pane_ParamLimits

0x0206,	// (0x00080672) main_phob2_pane

0xcc6b,	// (0x0008d0d7) cell_tport_appsw_pane_cp02_ParamLimits

0xcc6b,	// (0x0008d0d7) cell_tport_appsw_pane_cp02

0xcc7a,	// (0x0008d0e6) cell_tport_appsw_pane_cp03_ParamLimits

0xcc7a,	// (0x0008d0e6) cell_tport_appsw_pane_cp03

0x0206,	// (0x00080672) phob2_contact_card_pane

0x0206,	// (0x00080672) phob2_listscroll_pane

0x339e,	// (0x0008380a) phob2_list_pane

0x33a6,	// (0x00083812) scroll_pane_cp034

0xd788,	// (0x0008dbf4) phob2_cc_data_pane_ParamLimits

0xd788,	// (0x0008dbf4) phob2_cc_data_pane

0xd7a4,	// (0x0008dc10) phob2_cc_listscroll_pane_ParamLimits

0xd7a4,	// (0x0008dc10) phob2_cc_listscroll_pane

0xd7c0,	// (0x0008dc2c) list_double_large_graphic_phob2_pane_ParamLimits

0xd7c0,	// (0x0008dc2c) list_double_large_graphic_phob2_pane

0xd7da,	// (0x0008dc46) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd7da,	// (0x0008dc46) list_double_large_graphic_phob2_pane_g1

0xd7e7,	// (0x0008dc53) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd7e7,	// (0x0008dc53) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x00090398) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x00090398) list_double_large_graphic_phob2_pane_g

0xd7f3,	// (0x0008dc5f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd7f3,	// (0x0008dc5f) list_double_large_graphic_phob2_pane_t1

0xd808,	// (0x0008dc74) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd808,	// (0x0008dc74) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x0009039d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x0009039d) list_double_large_graphic_phob2_pane_t

0x0206,	// (0x00080672) list_highlight_pane_cp024

0x33ae,	// (0x0008381a) phob2_cc_button_pane

0xd81a,	// (0x0008dc86) phob2_cc_data_pane_g1_ParamLimits

0xd81a,	// (0x0008dc86) phob2_cc_data_pane_g1

0xd826,	// (0x0008dc92) phob2_cc_data_pane_g2_ParamLimits

0xd826,	// (0x0008dc92) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x000903a2) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x000903a2) phob2_cc_data_pane_g

0xd832,	// (0x0008dc9e) phob2_cc_data_pane_t1_ParamLimits

0xd832,	// (0x0008dc9e) phob2_cc_data_pane_t1

0xd844,	// (0x0008dcb0) phob2_cc_data_pane_t2_ParamLimits

0xd844,	// (0x0008dcb0) phob2_cc_data_pane_t2

0xd856,	// (0x0008dcc2) phob2_cc_data_pane_t3_ParamLimits

0xd856,	// (0x0008dcc2) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x000903a7) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x000903a7) phob2_cc_data_pane_t

0x33b6,	// (0x00083822) phob2_cc_list_pane_ParamLimits

0x33b6,	// (0x00083822) phob2_cc_list_pane

0x18ae,	// (0x00081d1a) scroll_pane_cp035_ParamLimits

0x18ae,	// (0x00081d1a) scroll_pane_cp035

0x027f,	// (0x000806eb) bg_button_pane_cp033

0x33c2,	// (0x0008382e) phob2_cc_button_pane_g1

0x33ce,	// (0x0008383a) phob2_cc_button_pane_t1

0x33e3,	// (0x0008384f) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x000903ae) phob2_cc_button_pane_t

0xd868,	// (0x0008dcd4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd868,	// (0x0008dcd4) list_double_large_graphic_phob2_cc_pane

0xd887,	// (0x0008dcf3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd887,	// (0x0008dcf3) list_double_large_graphic_phob2_cc_pane_g1

0xd898,	// (0x0008dd04) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd898,	// (0x0008dd04) list_double_large_graphic_phob2_cc_pane_g2

0xd8a7,	// (0x0008dd13) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd8a7,	// (0x0008dd13) list_double_large_graphic_phob2_cc_pane_g3

0xd8b6,	// (0x0008dd22) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd8b6,	// (0x0008dd22) list_double_large_graphic_phob2_cc_pane_g4

0xd8c7,	// (0x0008dd33) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd8c7,	// (0x0008dd33) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x000903b3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x000903b3) list_double_large_graphic_phob2_cc_pane_g

0xd8d6,	// (0x0008dd42) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd8d6,	// (0x0008dd42) list_double_large_graphic_phob2_cc_pane_t1

0xd8ff,	// (0x0008dd6b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd8ff,	// (0x0008dd6b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x000903be) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x000903be) list_double_large_graphic_phob2_cc_pane_t

0x33f5,	// (0x00083861) list_highlight_pane_cp025_ParamLimits

0x33f5,	// (0x00083861) list_highlight_pane_cp025

0x027f,	// (0x000806eb) bg_button_pane_cp033_ParamLimits

0x33c2,	// (0x0008382e) phob2_cc_button_pane_g1_ParamLimits

0x33ce,	// (0x0008383a) phob2_cc_button_pane_t1_ParamLimits

0x33e3,	// (0x0008384f) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x000903ae) phob2_cc_button_pane_t_ParamLimits

0x566b,	// (0x00085ad7) popup_wgtman_window

0x16ae,	// (0x00081b1a) scroll_pane_cp038

0xd430,	// (0x0008d89c) wgtman_btn_pane_cp_01_ParamLimits

0xd430,	// (0x0008d89c) wgtman_btn_pane_cp_01

0x3403,	// (0x0008386f) wgtman_content_pane

0x340c,	// (0x00083878) wgtman_heading_pane

0x0206,	// (0x00080672) bg_heading_pane_cp02

0x3415,	// (0x00083881) wgtman_heading_pane_g1

0x341d,	// (0x00083889) wgtman_heading_pane_t1

0x342b,	// (0x00083897) scroll_pane_cp036

0x3433,	// (0x0008389f) wgtman_list_pane

0x25a9,	// (0x00082a15) wgtman_list_pane_t1_ParamLimits

0x25a9,	// (0x00082a15) wgtman_list_pane_t1

0xa611,	// (0x0008aa7d) cam4_grid_pane

0xb339,	// (0x0008b7a5) bg_button_pane_cp015_ParamLimits

0xb34b,	// (0x0008b7b7) bg_button_pane_cp016_ParamLimits

0xb35e,	// (0x0008b7ca) bg_button_pane_cp017_ParamLimits

0xb3b4,	// (0x0008b820) popup_vitu2_query_window_g3_ParamLimits

0xb3b4,	// (0x0008b820) popup_vitu2_query_window_g3

0xb473,	// (0x0008b8df) popup_vitu2_query_window_t6_ParamLimits

0xb473,	// (0x0008b8df) popup_vitu2_query_window_t6

0xb49e,	// (0x0008b90a) popup_vitu2_query_window_t7_ParamLimits

0xb49e,	// (0x0008b90a) popup_vitu2_query_window_t7

0x1500,	// (0x0008196c) cam4_grid_pane_g1

0x1509,	// (0x00081975) cam4_grid_pane_g2

0x343b,	// (0x000838a7) cam4_grid_pane_g3

0x3444,	// (0x000838b0) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x000903c3) cam4_grid_pane_g

0x66a3,	// (0x00086b0f) aid_placing_vt_slider_lsc_ParamLimits

0x69d6,	// (0x00086e42) vidtel_button_pane_ParamLimits

0x69d6,	// (0x00086e42) vidtel_button_pane

0x0206,	// (0x00080672) bg_button_pane_cp034

0xd928,	// (0x0008dd94) vidtel_button_pane_g1

0x344f,	// (0x000838bb) vidtel_button_pane_t1

0x17cd,	// (0x00081c39) aid_size_vtel_slider_touch

0x18ae,	// (0x00081d1a) scroll_pane_cp039

0x228f,	// (0x000826fb) ncim_query_button_pane_cp01_ParamLimits

0x22ae,	// (0x0008271a) ncimui_query_pane_g1_ParamLimits

0x027f,	// (0x000806eb) input_focus_pane_cp012_ParamLimits

0x22d3,	// (0x0008273f) ncim_query_entry_pane_t1_ParamLimits

0x18ae,	// (0x00081d1a) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
