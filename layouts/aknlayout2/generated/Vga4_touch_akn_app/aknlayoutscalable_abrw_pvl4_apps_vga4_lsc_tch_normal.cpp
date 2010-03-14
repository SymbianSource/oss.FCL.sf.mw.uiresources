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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002682c };

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
0x1b2b,	// (0x00028357) Screen

0x1b37,	// (0x00028363) application_window

0x1ba1,	// (0x000283cd) area_bottom_pane_ParamLimits

0x1ba1,	// (0x000283cd) area_bottom_pane

0x1bff,	// (0x0002842b) area_top_pane_ParamLimits

0x1bff,	// (0x0002842b) area_top_pane

0x1c5c,	// (0x00028488) call_video_uplink_pane_ParamLimits

0x1c5c,	// (0x00028488) call_video_uplink_pane

0x1c88,	// (0x000284b4) main_pane_ParamLimits

0x1c88,	// (0x000284b4) main_pane

0xbdec,	// (0x00032618) context_pane

0x695d,	// (0x0002d189) navi_pane

0x698d,	// (0x0002d1b9) popup_cale_events_window_ParamLimits

0x698d,	// (0x0002d1b9) popup_cale_events_window

0xbdff,	// (0x0003262b) popup_mup_playback_window

0x69a5,	// (0x0002d1d1) signal_pane

0x27d5,	// (0x00029001) main_browser_pane

0x4db5,	// (0x0002b5e1) main_burst_pane

0x665f,	// (0x0002ce8b) main_calc_pane

0x4db5,	// (0x0002b5e1) main_cale_day_pane

0x27d5,	// (0x00029001) main_cale_month_pane

0x4db5,	// (0x0002b5e1) main_cale_week_pane

0x4db5,	// (0x0002b5e1) main_call_pane

0x2293,	// (0x00028abf) main_call_poc_pane

0x4db5,	// (0x0002b5e1) main_camera_pane

0x4db5,	// (0x0002b5e1) main_chi_dic_pane

0x48f8,	// (0x0002b124) main_clock_pane

0x2293,	// (0x00028abf) main_fmradio_pane

0x4db5,	// (0x0002b5e1) main_graph_messa_pane

0x2293,	// (0x00028abf) main_help_pane

0x27d5,	// (0x00029001) main_im_pane

0x24ee,	// (0x00028d1a) main_image_pane_ParamLimits

0x24ee,	// (0x00028d1a) main_image_pane

0x2293,	// (0x00028abf) main_location2_pane

0x4db5,	// (0x0002b5e1) main_location_pane

0x2293,	// (0x00028abf) main_messa_pane

0x2293,	// (0x00028abf) main_mp2_pane

0x4db5,	// (0x0002b5e1) main_mp_pane

0x2293,	// (0x00028abf) main_msg_pane

0x2293,	// (0x00028abf) main_mup_eq_pane

0x2293,	// (0x00028abf) main_mup_pane

0x27d5,	// (0x00029001) main_notes_pane

0x2293,	// (0x00028abf) main_pec_pane

0x2293,	// (0x00028abf) main_phob_pane

0x2293,	// (0x00028abf) main_pinb_pane

0x2293,	// (0x00028abf) main_postcard_pane

0x2293,	// (0x00028abf) main_qdial_pane

0x4db5,	// (0x0002b5e1) main_skin_pane

0x2293,	// (0x00028abf) main_smil2_pane

0x4db5,	// (0x0002b5e1) main_smil_pane

0x4db5,	// (0x0002b5e1) main_video_pane

0x4db5,	// (0x0002b5e1) main_video_tele_pane

0x24ee,	// (0x00028d1a) main_viewer_pane_ParamLimits

0x24ee,	// (0x00028d1a) main_viewer_pane

0x4db5,	// (0x0002b5e1) main_vorec_pane

0x66b5,	// (0x0002cee1) popup_blid_sat_info_window_ParamLimits

0x66b5,	// (0x0002cee1) popup_blid_sat_info_window

0x6719,	// (0x0002cf45) popup_dyc_status_message_window_ParamLimits

0x6719,	// (0x0002cf45) popup_dyc_status_message_window

0x6733,	// (0x0002cf5f) popup_grid_large_graphic_window_ParamLimits

0x6733,	// (0x0002cf5f) popup_grid_large_graphic_window

0x67f5,	// (0x0002d021) popup_loc_request_window_ParamLimits

0x67f5,	// (0x0002d021) popup_loc_request_window

0x6931,	// (0x0002d15d) popup_wml_address_window_ParamLimits

0x6931,	// (0x0002d15d) popup_wml_address_window

0x649d,	// (0x0002ccc9) call_muted_g1

0x5bc9,	// (0x0002c3f5) popup_call_audio_conf_window_ParamLimits

0x5bc9,	// (0x0002c3f5) popup_call_audio_conf_window

0x64ad,	// (0x0002ccd9) popup_call_audio_first_window_ParamLimits

0x64ad,	// (0x0002ccd9) popup_call_audio_first_window

0x6523,	// (0x0002cd4f) popup_call_audio_in_window_ParamLimits

0x6523,	// (0x0002cd4f) popup_call_audio_in_window

0x655f,	// (0x0002cd8b) popup_call_audio_out_window_ParamLimits

0x655f,	// (0x0002cd8b) popup_call_audio_out_window

0x6599,	// (0x0002cdc5) popup_call_audio_second_window_ParamLimits

0x6599,	// (0x0002cdc5) popup_call_audio_second_window

0x65ef,	// (0x0002ce1b) popup_call_audio_wait_window_ParamLimits

0x65ef,	// (0x0002ce1b) popup_call_audio_wait_window

0x6624,	// (0x0002ce50) popup_number_entry_window_ParamLimits

0x6624,	// (0x0002ce50) popup_number_entry_window

0x1e27,	// (0x00028653) bg_popup_call_pane_cp05_ParamLimits

0x1e27,	// (0x00028653) bg_popup_call_pane_cp05

0x1e47,	// (0x00028673) popup_number_entry_window_t1

0x1e5a,	// (0x00028686) popup_number_entry_window_t2

0x1e6c,	// (0x00028698) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00035913) popup_number_entry_window_t

0x1eb3,	// (0x000286df) text_title_cp2

0x1ec6,	// (0x000286f2) bg_popup_call_pane_cp_ParamLimits

0x1ec6,	// (0x000286f2) bg_popup_call_pane_cp

0x1ed4,	// (0x00028700) call_thumbnail_pane

0x1edc,	// (0x00028708) popup_call_audio_in_window_g1_ParamLimits

0x1edc,	// (0x00028708) popup_call_audio_in_window_g1

0x1ee8,	// (0x00028714) popup_call_audio_in_window_g2_ParamLimits

0x1ee8,	// (0x00028714) popup_call_audio_in_window_g2

0x1ef4,	// (0x00028720) popup_call_audio_in_window_g3_ParamLimits

0x1ef4,	// (0x00028720) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0003591c) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0003591c) popup_call_audio_in_window_g

0x1f00,	// (0x0002872c) popup_call_audio_in_window_t1_ParamLimits

0x1f00,	// (0x0002872c) popup_call_audio_in_window_t1

0x1f1c,	// (0x00028748) popup_call_audio_in_window_t2_ParamLimits

0x1f1c,	// (0x00028748) popup_call_audio_in_window_t2

0x1f38,	// (0x00028764) popup_call_audio_in_window_t3_ParamLimits

0x1f38,	// (0x00028764) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00035923) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00035923) popup_call_audio_in_window_t

0x1ec6,	// (0x000286f2) bg_popup_call_pane_cp01_ParamLimits

0x1ec6,	// (0x000286f2) bg_popup_call_pane_cp01

0x1ed4,	// (0x00028700) call_thumbnail_pane_cp02

0x1f4b,	// (0x00028777) call_type_pane_cp022

0x1f53,	// (0x0002877f) popup_call_audio_out_window_g1_ParamLimits

0x1f53,	// (0x0002877f) popup_call_audio_out_window_g1

0x1f65,	// (0x00028791) popup_call_audio_out_window_g2_ParamLimits

0x1f65,	// (0x00028791) popup_call_audio_out_window_g2

0x1f71,	// (0x0002879d) popup_call_audio_out_window_g3_ParamLimits

0x1f71,	// (0x0002879d) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0003592a) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0003592a) popup_call_audio_out_window_g

0x1f83,	// (0x000287af) popup_call_audio_out_window_t1_ParamLimits

0x1f83,	// (0x000287af) popup_call_audio_out_window_t1

0x1f9b,	// (0x000287c7) popup_call_audio_out_window_t2_ParamLimits

0x1f9b,	// (0x000287c7) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00035931) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00035931) popup_call_audio_out_window_t

0x1fb0,	// (0x000287dc) bg_popup_call_pane_ParamLimits

0x1fb0,	// (0x000287dc) bg_popup_call_pane

0x2034,	// (0x00028860) call_thumbnail_pane_cp_ParamLimits

0x2034,	// (0x00028860) call_thumbnail_pane_cp

0x2058,	// (0x00028884) call_type_pane_cp01_ParamLimits

0x2058,	// (0x00028884) call_type_pane_cp01

0x209c,	// (0x000288c8) popup_call_audio_first_window_g1_ParamLimits

0x209c,	// (0x000288c8) popup_call_audio_first_window_g1

0x20e8,	// (0x00028914) popup_call_audio_first_window_g2_ParamLimits

0x20e8,	// (0x00028914) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00035936) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00035936) popup_call_audio_first_window_g

0x212c,	// (0x00028958) popup_call_audio_first_window_t1_ParamLimits

0x212c,	// (0x00028958) popup_call_audio_first_window_t1

0x21d8,	// (0x00028a04) popup_call_audio_first_window_t4_ParamLimits

0x21d8,	// (0x00028a04) popup_call_audio_first_window_t4

0x2264,	// (0x00028a90) popup_call_audio_first_window_t5_ParamLimits

0x2264,	// (0x00028a90) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0003593b) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0003593b) popup_call_audio_first_window_t

0x2293,	// (0x00028abf) bg_popup_call_pane_cp02

0x229d,	// (0x00028ac9) call_type_pane_cp023

0x22a5,	// (0x00028ad1) popup_call_audio_wait_window_g1

0x22ad,	// (0x00028ad9) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00035942) popup_call_audio_wait_window_g

0x22b5,	// (0x00028ae1) popup_call_audio_wait_window_t3

0x22c3,	// (0x00028aef) bg_popup_call_pane_cp03_ParamLimits

0x22c3,	// (0x00028aef) bg_popup_call_pane_cp03

0x2323,	// (0x00028b4f) call_thumbnail_pane_cp011_ParamLimits

0x2323,	// (0x00028b4f) call_thumbnail_pane_cp011

0x232f,	// (0x00028b5b) call_type_pane_cp034_ParamLimits

0x232f,	// (0x00028b5b) call_type_pane_cp034

0x236b,	// (0x00028b97) popup_call_audio_second_window_g1_ParamLimits

0x236b,	// (0x00028b97) popup_call_audio_second_window_g1

0x23a7,	// (0x00028bd3) popup_call_audio_second_window_g2_ParamLimits

0x23a7,	// (0x00028bd3) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00035947) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00035947) popup_call_audio_second_window_g

0x23e3,	// (0x00028c0f) popup_call_audio_second_window_t1_ParamLimits

0x23e3,	// (0x00028c0f) popup_call_audio_second_window_t1

0x2464,	// (0x00028c90) popup_call_audio_second_window_t2_ParamLimits

0x2464,	// (0x00028c90) popup_call_audio_second_window_t2

0x249a,	// (0x00028cc6) popup_call_audio_second_window_t3_ParamLimits

0x249a,	// (0x00028cc6) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0003594c) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0003594c) popup_call_audio_second_window_t

0x2293,	// (0x00028abf) bg_popup_call_pane_cp04

0x24d0,	// (0x00028cfc) list_conf_pane

0x24d8,	// (0x00028d04) popup_call_audio_conf_window_t1

0x24e6,	// (0x00028d12) call_thumbnail_pane_g1

0x24ee,	// (0x00028d1a) bg_pinb_pane_ParamLimits

0x24ee,	// (0x00028d1a) bg_pinb_pane

0x24fc,	// (0x00028d28) find_pinb_pane

0x2505,	// (0x00028d31) listscroll_pinb_pane_ParamLimits

0x2505,	// (0x00028d31) listscroll_pinb_pane

0x2514,	// (0x00028d40) pinb_bg_pane_g1

0x251e,	// (0x00028d4a) pinb_bg_pane_g2

0x252a,	// (0x00028d56) pinb_bg_pane_g3

0x2536,	// (0x00028d62) pinb_bg_pane_g4

0x2542,	// (0x00028d6e) pinb_bg_pane_g5

0x254e,	// (0x00028d7a) pinb_bg_pane_g6

0x2559,	// (0x00028d85) pinb_bg_pane_g7

0x2564,	// (0x00028d90) pinb_bg_pane_g8

0x256f,	// (0x00028d9b) pinb_bg_pane_g9

0x2579,	// (0x00028da5) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00035953) pinb_bg_pane_g

0x2596,	// (0x00028dc2) grid_pinb_pane

0x25a1,	// (0x00028dcd) list_pinb_pane

0x25ac,	// (0x00028dd8) scroll_pane_cp01_ParamLimits

0x25ac,	// (0x00028dd8) scroll_pane_cp01

0x25be,	// (0x00028dea) find_pinb_pane_g1_ParamLimits

0x25be,	// (0x00028dea) find_pinb_pane_g1

0x25d6,	// (0x00028e02) find_pinb_pane_t1

0x25e8,	// (0x00028e14) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0003596d) find_pinb_pane_t

0x25fd,	// (0x00028e29) input_focus_pane_cp01_ParamLimits

0x25fd,	// (0x00028e29) input_focus_pane_cp01

0x2609,	// (0x00028e35) cell_pinb_pane_ParamLimits

0x2609,	// (0x00028e35) cell_pinb_pane

0x262b,	// (0x00028e57) cell_pinb_pane_g1_ParamLimits

0x262b,	// (0x00028e57) cell_pinb_pane_g1

0x263f,	// (0x00028e6b) cell_pinb_pane_g2_ParamLimits

0x263f,	// (0x00028e6b) cell_pinb_pane_g2

0x264b,	// (0x00028e77) cell_pinb_pane_g3_ParamLimits

0x264b,	// (0x00028e77) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00035972) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00035972) cell_pinb_pane_g

0x2293,	// (0x00028abf) grid_highlight_pane_cp01

0x2657,	// (0x00028e83) list_pinb_item_pane_ParamLimits

0x2657,	// (0x00028e83) list_pinb_item_pane

0x2293,	// (0x00028abf) list_highlight_pane_cp02

0x266a,	// (0x00028e96) list_pinb_item_pane_g1_ParamLimits

0x266a,	// (0x00028e96) list_pinb_item_pane_g1

0x2677,	// (0x00028ea3) list_pinb_item_pane_g2_ParamLimits

0x2677,	// (0x00028ea3) list_pinb_item_pane_g2

0x2683,	// (0x00028eaf) list_pinb_item_pane_g3_ParamLimits

0x2683,	// (0x00028eaf) list_pinb_item_pane_g3

0x2694,	// (0x00028ec0) list_pinb_item_pane_g4_ParamLimits

0x2694,	// (0x00028ec0) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00035979) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00035979) list_pinb_item_pane_g

0x26a0,	// (0x00028ecc) list_pinb_item_pane_t1_ParamLimits

0x26a0,	// (0x00028ecc) list_pinb_item_pane_t1

0x08c3,	// (0x000270ef) calc_display_pane

0x08e9,	// (0x00027115) calc_paper_pane

0x090c,	// (0x00027138) grid_calc_pane

0x2293,	// (0x00028abf) bg_list_pane_cp01

0x26b7,	// (0x00028ee3) clock_g1

0x26bf,	// (0x00028eeb) clock_g2

0x0001,

0xf156,	// (0x00035982) clock_g

0x26c7,	// (0x00028ef3) clock_t1_ParamLimits

0x26c7,	// (0x00028ef3) clock_t1

0x26dc,	// (0x00028f08) clock_t2_ParamLimits

0x26dc,	// (0x00028f08) clock_t2

0x26ee,	// (0x00028f1a) clock_t3_ParamLimits

0x26ee,	// (0x00028f1a) clock_t3

0x2700,	// (0x00028f2c) clock_t4_ParamLimits

0x2700,	// (0x00028f2c) clock_t4

0x2712,	// (0x00028f3e) clock_t5_ParamLimits

0x2712,	// (0x00028f3e) clock_t5

0x2727,	// (0x00028f53) clock_t6_ParamLimits

0x2727,	// (0x00028f53) clock_t6

0x2739,	// (0x00028f65) clock_t7_ParamLimits

0x2739,	// (0x00028f65) clock_t7

0x274b,	// (0x00028f77) clock_t8_ParamLimits

0x274b,	// (0x00028f77) clock_t8

0x275f,	// (0x00028f8b) clock_t9_ParamLimits

0x275f,	// (0x00028f8b) clock_t9

0x0008,

0xf15b,	// (0x00035987) clock_t_ParamLimits

0xf15b,	// (0x00035987) clock_t

0x2775,	// (0x00028fa1) popup_clock_analogue_window_cp02

0x2775,	// (0x00028fa1) popup_clock_digital_window_cp01

0x277d,	// (0x00028fa9) listscroll_help_pane

0x2293,	// (0x00028abf) phob_pre_status_pane

0x2787,	// (0x00028fb3) grid_qdial_pane

0x2293,	// (0x00028abf) listscroll_mce_pane

0x2791,	// (0x00028fbd) bg_notes_pane

0x279f,	// (0x00028fcb) list_notes_pane

0x27ad,	// (0x00028fd9) scroll_pane_cp06

0x27c1,	// (0x00028fed) bg_calc_paper_pane

0xb168,	// (0x00031994) list_calc_pane

0x27d5,	// (0x00029001) bg_calc_display_pane

0x093a,	// (0x00027166) calc_display_pane_t1

0x094c,	// (0x00027178) calc_display_pane_t2

0xb182,	// (0x000319ae) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0003599a) calc_display_pane_t

0x095e,	// (0x0002718a) cell_calc_pane_ParamLimits

0x095e,	// (0x0002718a) cell_calc_pane

0x27e1,	// (0x0002900d) bg_calc_paper_pane_g1

0x27ed,	// (0x00029019) bg_calc_paper_pane_g2

0x27f9,	// (0x00029025) bg_calc_paper_pane_g3

0x2805,	// (0x00029031) bg_calc_paper_pane_g4

0x2811,	// (0x0002903d) bg_calc_paper_pane_g5

0x281d,	// (0x00029049) bg_calc_paper_pane_g6

0x2830,	// (0x0002905c) bg_calc_paper_pane_g7

0x2843,	// (0x0002906f) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x000359a1) bg_calc_paper_pane_g

0x2854,	// (0x00029080) calc_bg_paper_pane_g9

0x2865,	// (0x00029091) list_calc_item_pane_ParamLimits

0x2865,	// (0x00029091) list_calc_item_pane

0x2879,	// (0x000290a5) list_calc_item_pane_g1

0xb194,	// (0x000319c0) list_calc_item_pane_t1_ParamLimits

0xb194,	// (0x000319c0) list_calc_item_pane_t1

0x0999,	// (0x000271c5) list_calc_item_pane_t2_ParamLimits

0x0999,	// (0x000271c5) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x000359b2) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x000359b2) list_calc_item_pane_t

0x2886,	// (0x000290b2) cell_calc_pane_g1

0x2890,	// (0x000290bc) grid_highlight_pane_cp02

0x28b2,	// (0x000290de) bg_calc_display_pane_g1

0xb1a6,	// (0x000319d2) bg_calc_display_pane_g2

0x28bb,	// (0x000290e7) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x000359bc) bg_calc_display_pane_g

0x09cb,	// (0x000271f7) cell_qdial_pane_ParamLimits

0x09cb,	// (0x000271f7) cell_qdial_pane

0x28c4,	// (0x000290f0) cell_qdial_pane_g1_ParamLimits

0x28c4,	// (0x000290f0) cell_qdial_pane_g1

0x28da,	// (0x00029106) cell_qdial_pane_g2_ParamLimits

0x28da,	// (0x00029106) cell_qdial_pane_g2

0x28eb,	// (0x00029117) cell_qdial_pane_g3_ParamLimits

0x28eb,	// (0x00029117) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x000359c3) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x000359c3) cell_qdial_pane_g

0x290c,	// (0x00029138) cell_qdial_pane_t1_ParamLimits

0x290c,	// (0x00029138) cell_qdial_pane_t1

0x2924,	// (0x00029150) cell_qdial_pane_t2_ParamLimits

0x2924,	// (0x00029150) cell_qdial_pane_t2

0x2937,	// (0x00029163) cell_qdial_pane_t3_ParamLimits

0x2937,	// (0x00029163) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x000359cc) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x000359cc) cell_qdial_pane_t

0x2293,	// (0x00028abf) grid_highlight_pane_cp04

0x294a,	// (0x00029176) thumbnail_qdial_pane_ParamLimits

0x294a,	// (0x00029176) thumbnail_qdial_pane

0x29a6,	// (0x000291d2) list_help_pane

0x29af,	// (0x000291db) scroll_pane_cp02

0x29b8,	// (0x000291e4) help_list_pane_t1_ParamLimits

0x29b8,	// (0x000291e4) help_list_pane_t1

0xb1b0,	// (0x000319dc) bg_notes_pane_g2

0xb1b8,	// (0x000319e4) bg_notes_pane_g3

0xb1c0,	// (0x000319ec) notes_bg_pane_g1

0xb1c8,	// (0x000319f4) notes_bg_pane_g4

0xb1d0,	// (0x000319fc) notes_bg_pane_g5

0xb1d8,	// (0x00031a04) notes_bg_pane_g6

0xb1e0,	// (0x00031a0c) notes_bg_pane_g7

0xb1e8,	// (0x00031a14) notes_bg_pane_g8

0xb1f0,	// (0x00031a1c) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x000359ea) notes_bg_pane_g

0x29dc,	// (0x00029208) list_notes_text_pane_ParamLimits

0x29dc,	// (0x00029208) list_notes_text_pane

0x29f6,	// (0x00029222) list_notes_text_pane_g1

0x29ff,	// (0x0002922b) list_notes_text_pane_t1

0x27d5,	// (0x00029001) listscroll_cale_week_pane

0x2a3b,	// (0x00029267) bg_cale_heading_pane

0x2a57,	// (0x00029283) bg_cale_pane_cp01

0x2a70,	// (0x0002929c) cale_week_corner_pane

0x2a86,	// (0x000292b2) cale_week_day_heading_pane

0x2aa2,	// (0x000292ce) cale_week_scroll_pane_g1

0x2abb,	// (0x000292e7) cale_week_scroll_pane_g2

0x2acc,	// (0x000292f8) cale_week_scroll_pane_g3

0x2add,	// (0x00029309) cale_week_scroll_pane_g4

0x2aee,	// (0x0002931a) cale_week_scroll_pane_g5

0x2aff,	// (0x0002932b) cale_week_scroll_pane_g6

0x2b10,	// (0x0002933c) cale_week_scroll_pane_g7

0x2b21,	// (0x0002934d) cale_week_scroll_pane_g8

0x2b32,	// (0x0002935e) cale_week_scroll_pane_g9

0x2b43,	// (0x0002936f) cale_week_scroll_pane_g10

0x2b54,	// (0x00029380) cale_week_scroll_pane_g11

0x2b65,	// (0x00029391) cale_week_scroll_pane_g12

0x2b76,	// (0x000293a2) cale_week_scroll_pane_g13

0x2b8f,	// (0x000293bb) cale_week_scroll_pane_g14

0x2ba8,	// (0x000293d4) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x000359f9) cale_week_scroll_pane_g

0x2bc1,	// (0x000293ed) cale_week_time_pane

0x2bd2,	// (0x000293fe) grid_cale_week_pane

0x2bff,	// (0x0002942b) scroll_pane_cp08

0x2c17,	// (0x00029443) cell_cale_week_pane_ParamLimits

0x2c17,	// (0x00029443) cell_cale_week_pane

0x2c5f,	// (0x0002948b) cale_week_day_heading_pane_t1

0x2c73,	// (0x0002949f) cale_week_day_heading_pane_t2

0x2c87,	// (0x000294b3) cale_week_day_heading_pane_t3

0x2c9b,	// (0x000294c7) cale_week_day_heading_pane_t4

0x2caf,	// (0x000294db) cale_week_day_heading_pane_t5

0x2cc3,	// (0x000294ef) cale_week_day_heading_pane_t6

0x2cd7,	// (0x00029503) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00035a18) cale_week_day_heading_pane_t

0x2ceb,	// (0x00029517) bg_cale_side_pane

0x09e1,	// (0x0002720d) cale_week_time_pane_t1

0x09f9,	// (0x00027225) cale_week_time_pane_t2

0x0a11,	// (0x0002723d) cale_week_time_pane_t3

0x0a29,	// (0x00027255) cale_week_time_pane_t4

0x0a41,	// (0x0002726d) cale_week_time_pane_t5

0x0a59,	// (0x00027285) cale_week_time_pane_t6

0x0a71,	// (0x0002729d) cale_week_time_pane_t7

0x0a8d,	// (0x000272b9) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00035a27) cale_week_time_pane_t

0x2cf9,	// (0x00029525) cell_cale_week_pane_g2

0x2d0a,	// (0x00029536) cell_cale_week_pane_g3_ParamLimits

0x2d0a,	// (0x00029536) cell_cale_week_pane_g3

0x2d22,	// (0x0002954e) grid_highlight_pane_cp07

0x2d2a,	// (0x00029556) listscroll_gms_pane

0x2d34,	// (0x00029560) grid_gms_pane

0x2d3d,	// (0x00029569) listscroll_gms_pane_g1

0x2d45,	// (0x00029571) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00035a38) listscroll_gms_pane_g

0x2d4d,	// (0x00029579) scroll_pane_cp010

0x2d58,	// (0x00029584) cell_gms_pane_ParamLimits

0x2d58,	// (0x00029584) cell_gms_pane

0x2d72,	// (0x0002959e) cell_gms_pane_g1

0x2d7a,	// (0x000295a6) cell_gms_pane_g2

0x2d82,	// (0x000295ae) cell_gms_pane_g3

0x2d8b,	// (0x000295b7) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00035a3d) cell_gms_pane_g

0x2d94,	// (0x000295c0) grid_highlight_pane_cp09

0x6445,	// (0x0002cc71) phob_pre_status_pane_g1

0x644d,	// (0x0002cc79) phob_pre_status_pane_g2

0x6455,	// (0x0002cc81) phob_pre_status_pane_g3

0x645d,	// (0x0002cc89) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00035e2c) phob_pre_status_pane_g

0x646d,	// (0x0002cc99) phob_pre_status_pane_t1

0x647d,	// (0x0002cca9) phob_pre_status_pane_t2

0x648d,	// (0x0002ccb9) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00035e37) phob_pre_status_pane_t

0x2293,	// (0x00028abf) bg_list_pane_cp05

0x0ab5,	// (0x000272e1) grid_vorec_pane

0xb1f8,	// (0x00031a24) vorec_t1

0xb206,	// (0x00031a32) vorec_t2

0xb214,	// (0x00031a40) vorec_t3

0xb222,	// (0x00031a4e) vorec_t4

0xb230,	// (0x00031a5c) vorec_t5

0xb23e,	// (0x00031a6a) vorec_t6

0x0006,

0xf21a,	// (0x00035a46) vorec_t

0xb25a,	// (0x00031a86) wait_bar_pane_cp01

0x2d9c,	// (0x000295c8) cell_vorec_pane_ParamLimits

0x2d9c,	// (0x000295c8) cell_vorec_pane

0x2db1,	// (0x000295dd) cell_vorec_pane_g1

0x2293,	// (0x00028abf) grid_highlight_pane_cp05

0x2dd1,	// (0x000295fd) cams_zoom_pane

0x2de0,	// (0x0002960c) image_vga_pane

0x2dfa,	// (0x00029626) main_camera_pane_g1

0x2e0c,	// (0x00029638) main_camera_pane_g2

0x2e1c,	// (0x00029648) main_camera_pane_g3

0x2e30,	// (0x0002965c) main_camera_pane_g4

0x2e44,	// (0x00029670) main_camera_pane_g5

0x2e58,	// (0x00029684) main_camera_pane_g6

0x2e6c,	// (0x00029698) main_camera_pane_g7

0x0007,

0xf229,	// (0x00035a55) main_camera_pane_g

0x2e8c,	// (0x000296b8) main_camera_pane_t1

0x2ea2,	// (0x000296ce) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00035a66) main_camera_pane_t

0x2ee0,	// (0x0002970c) cams_zoom_pane_cp_ParamLimits

0x2ee0,	// (0x0002970c) cams_zoom_pane_cp

0x2f08,	// (0x00029734) image_cif_pane_ParamLimits

0x2f08,	// (0x00029734) image_cif_pane

0x2f43,	// (0x0002976f) image_subqcif_pane

0x2f4d,	// (0x00029779) main_video_pane_g1_ParamLimits

0x2f4d,	// (0x00029779) main_video_pane_g1

0x2f71,	// (0x0002979d) main_video_pane_g2_ParamLimits

0x2f71,	// (0x0002979d) main_video_pane_g2

0x2fa7,	// (0x000297d3) main_video_pane_g3_ParamLimits

0x2fa7,	// (0x000297d3) main_video_pane_g3

0x2fd5,	// (0x00029801) main_video_pane_g4_ParamLimits

0x2fd5,	// (0x00029801) main_video_pane_g4

0x3003,	// (0x0002982f) main_video_pane_g5_ParamLimits

0x3003,	// (0x0002982f) main_video_pane_g5

0x301b,	// (0x00029847) main_video_pane_g6_ParamLimits

0x301b,	// (0x00029847) main_video_pane_g6

0x0006,

0xf23f,	// (0x00035a6b) main_video_pane_g_ParamLimits

0xf23f,	// (0x00035a6b) main_video_pane_g

0x3046,	// (0x00029872) main_video_pane_t1_ParamLimits

0x3046,	// (0x00029872) main_video_pane_t1

0x308f,	// (0x000298bb) cams_zoom_pane_g1

0x3098,	// (0x000298c4) cams_zoom_pane_g2

0x30a1,	// (0x000298cd) cams_zoom_pane_g3

0x30aa,	// (0x000298d6) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00035a7a) cams_zoom_pane_g

0x30c7,	// (0x000298f3) grid_cams_pane

0x30e1,	// (0x0002990d) linegrid_cams_pane

0x30f3,	// (0x0002991f) cell_cams_pane_ParamLimits

0x30f3,	// (0x0002991f) cell_cams_pane

0x3115,	// (0x00029941) cams_burst_image_pane

0x311d,	// (0x00029949) cell_cams_pane_g1

0x2293,	// (0x00028abf) grid_highlight_pane_cp03

0x2886,	// (0x000290b2) mp_bg_pane_g1

0x2293,	// (0x00028abf) bg_list_pane_cp03

0xbcbe,	// (0x000324ea) bg_mp_pane

0xbcc6,	// (0x000324f2) grid_mp_pane

0xbcce,	// (0x000324fa) media_player_g1

0xbcd8,	// (0x00032504) media_player_t1

0xbce6,	// (0x00032512) media_player_t2

0xbcf4,	// (0x00032520) media_player_t3

0xbd02,	// (0x0003252e) media_player_t4

0xbd10,	// (0x0003253c) media_player_t5

0xbd1e,	// (0x0003254a) media_player_t6

0xbd2c,	// (0x00032558) media_player_t7

0x0006,

0xf5ea,	// (0x00035e16) media_player_t

0xbd3a,	// (0x00032566) wait_bar_pane_cp02

0xf5cf,	// (0x00035dfb) main_usb_pane_t

0x643c,	// (0x0002cc68) cell_mp_pane

0x2886,	// (0x000290b2) cell_mp_pane_g1

0x2293,	// (0x00028abf) grid_highlight_pane_cp06

0x3235,	// (0x00029a61) grid_skin_colour_pane

0x323d,	// (0x00029a69) list_highlight_pane_cp03

0x3245,	// (0x00029a71) skin_g1

0x324f,	// (0x00029a7b) skin_t1

0x325e,	// (0x00029a8a) skin_t2

0x0001,

0xf283,	// (0x00035aaf) skin_t

0x326c,	// (0x00029a98) cell_skin_colour_pane_ParamLimits

0x326c,	// (0x00029a98) cell_skin_colour_pane

0x328c,	// (0x00029ab8) cell_skin_colour_pane_g1

0x32f1,	// (0x00029b1d) call_video_g1_ParamLimits

0x32f1,	// (0x00029b1d) call_video_g1

0x330d,	// (0x00029b39) call_video_g2_ParamLimits

0x330d,	// (0x00029b39) call_video_g2

0x0001,

0xf288,	// (0x00035ab4) call_video_g_ParamLimits

0xf288,	// (0x00035ab4) call_video_g

0x3352,	// (0x00029b7e) call_video_uplink_pane_cp1_ParamLimits

0x3352,	// (0x00029b7e) call_video_uplink_pane_cp1

0x33b7,	// (0x00029be3) call_video_uplink_pane_cp2

0x33fb,	// (0x00029c27) video_down_crop_pane_ParamLimits

0x33fb,	// (0x00029c27) video_down_crop_pane

0x34e4,	// (0x00029d10) video_down_pane_ParamLimits

0x34e4,	// (0x00029d10) video_down_pane

0x35d6,	// (0x00029e02) video_down_subqcif_pane_ParamLimits

0x35d6,	// (0x00029e02) video_down_subqcif_pane

0x35f0,	// (0x00029e1c) video_down_subqcif_pane_cp_ParamLimits

0x35f0,	// (0x00029e1c) video_down_subqcif_pane_cp

0x362f,	// (0x00029e5b) im_reading_pane_ParamLimits

0x362f,	// (0x00029e5b) im_reading_pane

0x3641,	// (0x00029e6d) im_writing_pane_ParamLimits

0x3641,	// (0x00029e6d) im_writing_pane

0x3667,	// (0x00029e93) im_reading_pane_t1

0x36a6,	// (0x00029ed2) list_im_pane

0x36b7,	// (0x00029ee3) scroll_pane_cp07

0x36d0,	// (0x00029efc) im_writing_pane_t1_ParamLimits

0x36d0,	// (0x00029efc) im_writing_pane_t1

0x36e5,	// (0x00029f11) im_writing_pane_t2_ParamLimits

0x36e5,	// (0x00029f11) im_writing_pane_t2

0x0001,

0xf292,	// (0x00035abe) im_writing_pane_t_ParamLimits

0xf292,	// (0x00035abe) im_writing_pane_t

0x2293,	// (0x00028abf) input_focus_pane_cp04

0x2293,	// (0x00028abf) input_focus_pane_cp05

0x3702,	// (0x00029f2e) list_im_single_pane_ParamLimits

0x3702,	// (0x00029f2e) list_im_single_pane

0x371b,	// (0x00029f47) list_single_im_pane_t1

0x63fc,	// (0x0002cc28) blid_accuracy_pane

0x6404,	// (0x0002cc30) blid_compass_pane

0x640e,	// (0x0002cc3a) main_location_t1

0x641e,	// (0x0002cc4a) main_location_t2

0x642e,	// (0x0002cc5a) main_location_t3

0x0002,

0xf5f9,	// (0x00035e25) main_location_t

0x2293,	// (0x00028abf) aid_levels_location

0x2886,	// (0x000290b2) blid_accuracy_pane_g1

0x2886,	// (0x000290b2) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00035b20) blid_accuracy_pane_g

0x3755,	// (0x00029f81) wml_content_pane

0x3793,	// (0x00029fbf) wml_button_pane_ParamLimits

0x3793,	// (0x00029fbf) wml_button_pane

0x37a7,	// (0x00029fd3) wml_list_single_large_pane_ParamLimits

0x37a7,	// (0x00029fd3) wml_list_single_large_pane

0x37c0,	// (0x00029fec) wml_list_single_medium_pane_ParamLimits

0x37c0,	// (0x00029fec) wml_list_single_medium_pane

0x37da,	// (0x0002a006) wml_list_single_small_pane_ParamLimits

0x37da,	// (0x0002a006) wml_list_single_small_pane

0x37f9,	// (0x0002a025) wml_selection_box_pane_ParamLimits

0x37f9,	// (0x0002a025) wml_selection_box_pane

0x380c,	// (0x0002a038) wml_list_single_pane_t1

0x381b,	// (0x0002a047) wml_list_single_medium_pane_t1

0x382a,	// (0x0002a056) wml_list_single_large_pane_t1

0x3839,	// (0x0002a065) input_focus_pane_cp02_ParamLimits

0x3839,	// (0x0002a065) input_focus_pane_cp02

0x384c,	// (0x0002a078) wml_selection_box_pane_g1

0x3855,	// (0x0002a081) wml_selection_box_pane_t1_ParamLimits

0x3855,	// (0x0002a081) wml_selection_box_pane_t1

0x24ee,	// (0x00028d1a) bg_wml_button_pane_ParamLimits

0x24ee,	// (0x00028d1a) bg_wml_button_pane

0x386d,	// (0x0002a099) wml_button_pane_g1

0x3875,	// (0x0002a0a1) wml_button_pane_t1

0x386d,	// (0x0002a099) wml_button_bg_pane_g1

0x3885,	// (0x0002a0b1) wml_button_bg_pane_g2

0x388d,	// (0x0002a0b9) wml_button_bg_pane_g3

0x3895,	// (0x0002a0c1) wml_button_bg_pane_g4

0x389d,	// (0x0002a0c9) wml_button_bg_pane_g5

0x38a5,	// (0x0002a0d1) wml_button_bg_pane_g6

0x38ad,	// (0x0002a0d9) wml_button_bg_pane_g7

0x38b5,	// (0x0002a0e1) wml_button_bg_pane_g8

0x38bd,	// (0x0002a0e9) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x00035ac3) wml_button_bg_pane_g

0x38c5,	// (0x0002a0f1) bg_list_pane_cp02

0x38cf,	// (0x0002a0fb) mce_header_pane_ParamLimits

0x38cf,	// (0x0002a0fb) mce_header_pane

0x38e5,	// (0x0002a111) mce_icon_pane

0x38e5,	// (0x0002a111) mce_image_pane

0x38ee,	// (0x0002a11a) mce_text_pane_ParamLimits

0x38ee,	// (0x0002a11a) mce_text_pane

0x3901,	// (0x0002a12d) scroll_pane_cp03

0x378b,	// (0x00029fb7) scroll_pane_cp04

0x390b,	// (0x0002a137) scroll_pane_cp05_ParamLimits

0x390b,	// (0x0002a137) scroll_pane_cp05

0x3917,	// (0x0002a143) mce_header_field_pane_ParamLimits

0x3917,	// (0x0002a143) mce_header_field_pane

0x3930,	// (0x0002a15c) mce_header_field_pane_2_ParamLimits

0x3930,	// (0x0002a15c) mce_header_field_pane_2

0x3946,	// (0x0002a172) mce_header_field_pane_3

0x394e,	// (0x0002a17a) list_single_mce_message_pane_ParamLimits

0x394e,	// (0x0002a17a) list_single_mce_message_pane

0x396a,	// (0x0002a196) list_single_mce_smart_pane_ParamLimits

0x396a,	// (0x0002a196) list_single_mce_smart_pane

0x3991,	// (0x0002a1bd) input_focus_pane_cp03

0x399a,	// (0x0002a1c6) list_header_data_pane

0x39a2,	// (0x0002a1ce) mce_header_field_pane_t1

0x39b2,	// (0x0002a1de) list_single_mce_header_pane_ParamLimits

0x39b2,	// (0x0002a1de) list_single_mce_header_pane

0x39c6,	// (0x0002a1f2) list_single_mce_header_pane_t1

0x39d5,	// (0x0002a201) list_single_mce_message_pane_g1

0x39dd,	// (0x0002a209) list_single_mce_message_pane_t1

0x3a09,	// (0x0002a235) bg_cale_heading_pane_cp01_ParamLimits

0x3a09,	// (0x0002a235) bg_cale_heading_pane_cp01

0x3a3c,	// (0x0002a268) bg_cale_pane_cp02_ParamLimits

0x3a3c,	// (0x0002a268) bg_cale_pane_cp02

0x3a5f,	// (0x0002a28b) cale_month_corner_pane

0x3a75,	// (0x0002a2a1) cale_month_day_heading_pane_ParamLimits

0x3a75,	// (0x0002a2a1) cale_month_day_heading_pane

0x3aa8,	// (0x0002a2d4) cale_month_pane_g1_ParamLimits

0x3aa8,	// (0x0002a2d4) cale_month_pane_g1

0x3ad4,	// (0x0002a300) cale_month_pane_g2_ParamLimits

0x3ad4,	// (0x0002a300) cale_month_pane_g2

0x3af5,	// (0x0002a321) cale_month_pane_g3_ParamLimits

0x3af5,	// (0x0002a321) cale_month_pane_g3

0x3b31,	// (0x0002a35d) cale_month_pane_g4_ParamLimits

0x3b31,	// (0x0002a35d) cale_month_pane_g4

0x3b6d,	// (0x0002a399) cale_month_pane_g5_ParamLimits

0x3b6d,	// (0x0002a399) cale_month_pane_g5

0x3ba9,	// (0x0002a3d5) cale_month_pane_g6_ParamLimits

0x3ba9,	// (0x0002a3d5) cale_month_pane_g6

0x3be5,	// (0x0002a411) cale_month_pane_g7_ParamLimits

0x3be5,	// (0x0002a411) cale_month_pane_g7

0x3c21,	// (0x0002a44d) cale_month_pane_g8_ParamLimits

0x3c21,	// (0x0002a44d) cale_month_pane_g8

0x3c5d,	// (0x0002a489) cale_month_pane_g9_ParamLimits

0x3c5d,	// (0x0002a489) cale_month_pane_g9

0x3c93,	// (0x0002a4bf) cale_month_pane_g10_ParamLimits

0x3c93,	// (0x0002a4bf) cale_month_pane_g10

0x3cbd,	// (0x0002a4e9) cale_month_pane_g11_ParamLimits

0x3cbd,	// (0x0002a4e9) cale_month_pane_g11

0x3ce7,	// (0x0002a513) cale_month_pane_g12_ParamLimits

0x3ce7,	// (0x0002a513) cale_month_pane_g12

0x3d15,	// (0x0002a541) cale_month_pane_g13_ParamLimits

0x3d15,	// (0x0002a541) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x00035ad6) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x00035ad6) cale_month_pane_g

0x3d55,	// (0x0002a581) cale_month_week_pane

0x3d66,	// (0x0002a592) grid_cale_month_pane_ParamLimits

0x3d66,	// (0x0002a592) grid_cale_month_pane

0x3d94,	// (0x0002a5c0) cale_month_day_heading_pane_t1

0x3df2,	// (0x0002a61e) cale_month_day_heading_pane_t2

0x3e57,	// (0x0002a683) cale_month_day_heading_pane_t3

0x3ebc,	// (0x0002a6e8) cale_month_day_heading_pane_t4

0x3f21,	// (0x0002a74d) cale_month_day_heading_pane_t5

0x3f86,	// (0x0002a7b2) cale_month_day_heading_pane_t6

0x3feb,	// (0x0002a817) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00035af1) cale_month_day_heading_pane_t

0x2ceb,	// (0x00029517) bg_cale_side_pane_cp01

0x4050,	// (0x0002a87c) cale_month_week_pane_t1

0x4067,	// (0x0002a893) cale_month_week_pane_t2

0x407e,	// (0x0002a8aa) cale_month_week_pane_t3

0x4095,	// (0x0002a8c1) cale_month_week_pane_t4

0x40ac,	// (0x0002a8d8) cale_month_week_pane_t5

0x40c3,	// (0x0002a8ef) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00035b00) cale_month_week_pane_t

0x40e2,	// (0x0002a90e) cell_cale_month_pane_ParamLimits

0x40e2,	// (0x0002a90e) cell_cale_month_pane

0xb262,	// (0x00031a8e) cell_cale_month_pane_g1

0x0abf,	// (0x000272eb) cell_cale_month_pane_t1_ParamLimits

0x0abf,	// (0x000272eb) cell_cale_month_pane_t1

0x2d22,	// (0x0002954e) grid_highlight_pane_cp08

0x2886,	// (0x000290b2) main_smil_g1

0x41ba,	// (0x0002a9e6) smil_status_pane

0x41c5,	// (0x0002a9f1) smil_text_pane

0xbbdc,	// (0x00032408) bg_popup_call3_rect_pane_g8

0xbbe4,	// (0x00032410) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x00035db9) bg_popup_call3_rect_pane_g

0xbe79,	// (0x000326a5) smil_status_volume_pane_g1

0x41d9,	// (0x0002aa05) smil_status_pane_t1

0xbeac,	// (0x000326d8) volume_smil_pane

0x41f0,	// (0x0002aa1c) list_smil_text_pane

0x41fa,	// (0x0002aa26) scroll_pane_cp011

0x4205,	// (0x0002aa31) smil_text_list_pane_t1_ParamLimits

0x4205,	// (0x0002aa31) smil_text_list_pane_t1

0xb26e,	// (0x00031a9a) aid_volume_smil_ParamLimits

0xb26e,	// (0x00031a9a) aid_volume_smil

0x2886,	// (0x000290b2) smil_volume_pane_g1

0x2886,	// (0x000290b2) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00035b20) smil_volume_pane_g

0x27d5,	// (0x00029001) listscroll_cale_day_pane

0x425a,	// (0x0002aa86) bg_cale_pane

0x4272,	// (0x0002aa9e) list_cale_pane

0x4283,	// (0x0002aaaf) scroll_pane_cp09

0x4294,	// (0x0002aac0) cale_bg_pane_g1

0x429c,	// (0x0002aac8) cale_bg_pane_g2

0x42a4,	// (0x0002aad0) cale_bg_pane_g3

0x42ac,	// (0x0002aad8) cale_bg_pane_g4

0x42b4,	// (0x0002aae0) cale_bg_pane_g5

0x42bc,	// (0x0002aae8) cale_bg_pane_g6

0x42c4,	// (0x0002aaf0) cale_bg_pane_g7

0x42cc,	// (0x0002aaf8) cale_bg_pane_g8

0x42d4,	// (0x0002ab00) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00035b25) cale_bg_pane_g

0x42dc,	// (0x0002ab08) list_cale_time_pane_ParamLimits

0x42dc,	// (0x0002ab08) list_cale_time_pane

0x42f1,	// (0x0002ab1d) list_cale_time_pane_g1_ParamLimits

0x42f1,	// (0x0002ab1d) list_cale_time_pane_g1

0x42fd,	// (0x0002ab29) list_cale_time_pane_g2_ParamLimits

0x42fd,	// (0x0002ab29) list_cale_time_pane_g2

0x430a,	// (0x0002ab36) list_cale_time_pane_g3_ParamLimits

0x430a,	// (0x0002ab36) list_cale_time_pane_g3

0x4318,	// (0x0002ab44) list_cale_time_pane_g4_ParamLimits

0x4318,	// (0x0002ab44) list_cale_time_pane_g4

0x4326,	// (0x0002ab52) list_cale_time_pane_g5_ParamLimits

0x4326,	// (0x0002ab52) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00035b38) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00035b38) list_cale_time_pane_g

0x4341,	// (0x0002ab6d) list_cale_time_pane_t1_ParamLimits

0x4341,	// (0x0002ab6d) list_cale_time_pane_t1

0x4369,	// (0x0002ab95) list_cale_time_pane_t2_ParamLimits

0x4369,	// (0x0002ab95) list_cale_time_pane_t2

0x4b2b,	// (0x0002b357) aid_blid_cardinal_pane

0x4b79,	// (0x0002b3a5) compass_pane_t4

0x4391,	// (0x0002abbd) list_cale_time_pane_t4_ParamLimits

0x4391,	// (0x0002abbd) list_cale_time_pane_t4

0x4b87,	// (0x0002b3b3) compass_pane_t5

0x4b97,	// (0x0002b3c3) compass_pane_t6

0x4ba5,	// (0x0002b3d1) compass_pane_t7

0x4c3d,	// (0x0002b469) navi_pane_cc_t1

0x4e5c,	// (0x0002b688) aid_phob_thumbnail_center_pane

0x559e,	// (0x0002bdca) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00035b45) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00035b45) list_cale_time_pane_t

0x1ec6,	// (0x000286f2) bg_popup_window_pane_cp02_ParamLimits

0x1ec6,	// (0x000286f2) bg_popup_window_pane_cp02

0x43b9,	// (0x0002abe5) heading_pane_cp01_ParamLimits

0x43b9,	// (0x0002abe5) heading_pane_cp01

0x43c5,	// (0x0002abf1) loc_req_pane_ParamLimits

0x43c5,	// (0x0002abf1) loc_req_pane

0x43d5,	// (0x0002ac01) loc_type_pane_ParamLimits

0x43d5,	// (0x0002ac01) loc_type_pane

0x43e7,	// (0x0002ac13) loc_type_pane_t1_ParamLimits

0x43e7,	// (0x0002ac13) loc_type_pane_t1

0x43f9,	// (0x0002ac25) loc_type_pane_t2_ParamLimits

0x43f9,	// (0x0002ac25) loc_type_pane_t2

0x440b,	// (0x0002ac37) loc_type_pane_t3_ParamLimits

0x440b,	// (0x0002ac37) loc_type_pane_t3

0x0002,

0xf320,	// (0x00035b4c) loc_type_pane_t_ParamLimits

0xf320,	// (0x00035b4c) loc_type_pane_t

0x441d,	// (0x0002ac49) list_loc_req_pane

0x4427,	// (0x0002ac53) scroll_pane_cp012

0x4432,	// (0x0002ac5e) list_single_loc_request_popup_menu_pane_ParamLimits

0x4432,	// (0x0002ac5e) list_single_loc_request_popup_menu_pane

0x443f,	// (0x0002ac6b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x443f,	// (0x0002ac6b) list_single_loc_request_popup_menu_pane_g1

0x444b,	// (0x0002ac77) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x444b,	// (0x0002ac77) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00035b53) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00035b53) list_single_loc_request_popup_menu_pane_g

0x4457,	// (0x0002ac83) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4457,	// (0x0002ac83) list_single_loc_request_popup_menu_pane_t1

0x24ee,	// (0x00028d1a) bg_popup_window_pane_cp03_ParamLimits

0x24ee,	// (0x00028d1a) bg_popup_window_pane_cp03

0x446d,	// (0x0002ac99) heading_loc_req_pane_ParamLimits

0x446d,	// (0x0002ac99) heading_loc_req_pane

0x4479,	// (0x0002aca5) popup_dyc_status_message_window_g1_ParamLimits

0x4479,	// (0x0002aca5) popup_dyc_status_message_window_g1

0x448d,	// (0x0002acb9) popup_dyc_status_message_window_t1_ParamLimits

0x448d,	// (0x0002acb9) popup_dyc_status_message_window_t1

0x44a2,	// (0x0002acce) popup_dyc_status_message_window_t2_ParamLimits

0x44a2,	// (0x0002acce) popup_dyc_status_message_window_t2

0x44b7,	// (0x0002ace3) popup_dyc_status_message_window_t3_ParamLimits

0x44b7,	// (0x0002ace3) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00035b58) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00035b58) popup_dyc_status_message_window_t

0x2293,	// (0x00028abf) bg_heading_pane_cp01

0x44d3,	// (0x0002acff) heading_loc_req_pane_g1

0x44db,	// (0x0002ad07) heading_loc_req_pane_g2

0x44e3,	// (0x0002ad0f) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00035b5f) heading_loc_req_pane_g

0x44eb,	// (0x0002ad17) heading_loc_req_pane_t1

0x45e4,	// (0x0002ae10) bg_popup_sub_pane_cp01_ParamLimits

0x45e4,	// (0x0002ae10) bg_popup_sub_pane_cp01

0x45f2,	// (0x0002ae1e) popup_cale_events_window_g1_ParamLimits

0x45f2,	// (0x0002ae1e) popup_cale_events_window_g1

0x4612,	// (0x0002ae3e) popup_cale_events_window_g2_ParamLimits

0x4612,	// (0x0002ae3e) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00035b93) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00035b93) popup_cale_events_window_g

0x4632,	// (0x0002ae5e) popup_cale_events_window_t1_ParamLimits

0x4632,	// (0x0002ae5e) popup_cale_events_window_t1

0x4644,	// (0x0002ae70) popup_cale_events_window_t2_ParamLimits

0x4644,	// (0x0002ae70) popup_cale_events_window_t2

0x4682,	// (0x0002aeae) popup_cale_events_window_t3_ParamLimits

0x4682,	// (0x0002aeae) popup_cale_events_window_t3

0x46bc,	// (0x0002aee8) popup_cale_events_window_t4_ParamLimits

0x46bc,	// (0x0002aee8) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x00035b98) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x00035b98) popup_cale_events_window_t

0x46f2,	// (0x0002af1e) call_type_pane

0x4702,	// (0x0002af2e) popup_call_status_window_g1

0x4716,	// (0x0002af42) popup_call_status_window_g2

0x472a,	// (0x0002af56) popup_call_status_window_g3

0x0002,

0xf375,	// (0x00035ba1) popup_call_status_window_g

0x473a,	// (0x0002af66) call_type_pane_g1

0x4743,	// (0x0002af6f) call_type_pane_g2

0x0001,

0xf37c,	// (0x00035ba8) call_type_pane_g

0x2293,	// (0x00028abf) bg_popup_sub_pane_cp02

0x474c,	// (0x0002af78) listscroll_popup_wml_pane

0x4754,	// (0x0002af80) list_wml_pane

0x475e,	// (0x0002af8a) scroll_pane_cp013

0x4769,	// (0x0002af95) list_single_graphic_popup_wml_pane_ParamLimits

0x4769,	// (0x0002af95) list_single_graphic_popup_wml_pane

0x2886,	// (0x000290b2) list_single_graphic_popup_wml_pane_g1

0x477d,	// (0x0002afa9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x00035bad) list_single_graphic_popup_wml_pane_g

0x4785,	// (0x0002afb1) list_single_graphic_popup_wml_pane_t1

0x479b,	// (0x0002afc7) aid_call_pane

0x24e6,	// (0x00028d12) popup_clock_analogue_window_g1

0x24e6,	// (0x00028d12) popup_clock_analogue_window_g2

0xb290,	// (0x00031abc) popup_clock_analogue_window_g3

0xb290,	// (0x00031abc) popup_clock_analogue_window_g4

0x2886,	// (0x000290b2) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x00035bb2) popup_clock_analogue_window_g

0xb298,	// (0x00031ac4) popup_clock_analogue_window_t1

0xb2a6,	// (0x00031ad2) clock_digital_number_pane_ParamLimits

0xb2a6,	// (0x00031ad2) clock_digital_number_pane

0xb2b2,	// (0x00031ade) clock_digital_number_pane_cp02_ParamLimits

0xb2b2,	// (0x00031ade) clock_digital_number_pane_cp02

0xb2be,	// (0x00031aea) clock_digital_number_pane_cp03_ParamLimits

0xb2be,	// (0x00031aea) clock_digital_number_pane_cp03

0xb2ca,	// (0x00031af6) clock_digital_number_pane_cp04_ParamLimits

0xb2ca,	// (0x00031af6) clock_digital_number_pane_cp04

0xb2d6,	// (0x00031b02) clock_digital_separator_pane_ParamLimits

0xb2d6,	// (0x00031b02) clock_digital_separator_pane

0xb2e2,	// (0x00031b0e) popup_clock_digital_window_t1

0x2886,	// (0x000290b2) clock_digital_number_pane_g1

0x2886,	// (0x000290b2) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00035b20) clock_digital_number_pane_g

0x2886,	// (0x000290b2) clock_digital_separator_pane_g1

0x2886,	// (0x000290b2) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00035b20) clock_digital_separator_pane_g

0x2293,	// (0x00028abf) bg_popup_window_pane_cp04

0x47a3,	// (0x0002afcf) heading_pane_cp03

0x47ab,	// (0x0002afd7) listscroll_popup_gms_pane

0x47b3,	// (0x0002afdf) grid_large_graphic_popup_pane

0x47bd,	// (0x0002afe9) listscroll_popup_gms_pane_g1

0x47c5,	// (0x0002aff1) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00035bbd) listscroll_popup_gms_pane_g

0x378b,	// (0x00029fb7) scroll_pane_cp014

0x47cd,	// (0x0002aff9) cell_large_graphic_popup_pane_ParamLimits

0x47cd,	// (0x0002aff9) cell_large_graphic_popup_pane

0x47e5,	// (0x0002b011) cell_large_graphic_popup_pane_g1_ParamLimits

0x47e5,	// (0x0002b011) cell_large_graphic_popup_pane_g1

0x47f1,	// (0x0002b01d) cell_large_graphic_popup_pane_g2_ParamLimits

0x47f1,	// (0x0002b01d) cell_large_graphic_popup_pane_g2

0x47fd,	// (0x0002b029) cell_large_graphic_popup_pane_g3_ParamLimits

0x47fd,	// (0x0002b029) cell_large_graphic_popup_pane_g3

0x480a,	// (0x0002b036) cell_large_graphic_popup_pane_g4_ParamLimits

0x480a,	// (0x0002b036) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x00035bc2) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x00035bc2) cell_large_graphic_popup_pane_g

0x481a,	// (0x0002b046) grid_highlight_pane_cp010

0x2886,	// (0x000290b2) bg_popup_call_pane_g1

0x4824,	// (0x0002b050) list_single_graphic_popup_conf_pane_ParamLimits

0x4824,	// (0x0002b050) list_single_graphic_popup_conf_pane

0x4836,	// (0x0002b062) list_highlight_pane_cp01

0x483f,	// (0x0002b06b) list_single_graphic_popup_conf_pane_g1

0x4847,	// (0x0002b073) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x00035bcb) list_single_graphic_popup_conf_pane_g

0x484f,	// (0x0002b07b) list_single_graphic_popup_conf_pane_t1

0x485d,	// (0x0002b089) linegrid_cams_pane_g1

0x4866,	// (0x0002b092) linegrid_cams_pane_g2

0x2d82,	// (0x000295ae) linegrid_cams_pane_g3

0x486f,	// (0x0002b09b) linegrid_cams_pane_g4

0x4878,	// (0x0002b0a4) linegrid_cams_pane_g5

0x4881,	// (0x0002b0ad) linegrid_cams_pane_g6

0x2d8b,	// (0x000295b7) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x00035bd0) linegrid_cams_pane_g

0x488c,	// (0x0002b0b8) popup_clock_analogue_window

0x488c,	// (0x0002b0b8) popup_clock_digital_window

0x2293,	// (0x00028abf) popup_phob_thumbnail_window

0x2886,	// (0x000290b2) call_video_uplink_pane_g1

0x4895,	// (0x0002b0c1) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00035bdf) call_video_uplink_pane_g

0x489d,	// (0x0002b0c9) video_uplink_pane

0x48a5,	// (0x0002b0d1) mce_image_pane_g1

0x48af,	// (0x0002b0db) mce_image_pane_g2

0x48b9,	// (0x0002b0e5) mce_image_pane_g3

0x48c3,	// (0x0002b0ef) mce_image_pane_g4

0x48cb,	// (0x0002b0f7) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00035be4) mce_image_pane_g

0x48d3,	// (0x0002b0ff) control_top_pane_stacon_cp01_ParamLimits

0x48d3,	// (0x0002b0ff) control_top_pane_stacon_cp01

0x48e7,	// (0x0002b113) uni_indicator_pane_stacon_cp01_ParamLimits

0x48e7,	// (0x0002b113) uni_indicator_pane_stacon_cp01

0x48f8,	// (0x0002b124) bg_popup_sub_pane_cp03

0x4902,	// (0x0002b12e) chi_dic_find_pane

0x490a,	// (0x0002b136) listscroll_chi_dic_pane

0x4913,	// (0x0002b13f) main_pane_chidic_g1

0x4926,	// (0x0002b152) chi_dic_find_pane_t1

0x4934,	// (0x0002b160) find_chidic_pane

0x493d,	// (0x0002b169) chi_dic_list_pane_ParamLimits

0x493d,	// (0x0002b169) chi_dic_list_pane

0x494e,	// (0x0002b17a) scroll_pane_cp020

0x4956,	// (0x0002b182) find_chidic_pane_t1

0x2293,	// (0x00028abf) input_focus_pane_cp06

0x4965,	// (0x0002b191) list_chi_dic_pane_ParamLimits

0x4965,	// (0x0002b191) list_chi_dic_pane

0x4977,	// (0x0002b1a3) list_chi_dic_pane_t1_ParamLimits

0x4977,	// (0x0002b1a3) list_chi_dic_pane_t1

0x2293,	// (0x00028abf) list_highlight_pane_cp020

0x498a,	// (0x0002b1b6) bg_cale_heading_pane_g1

0x4992,	// (0x0002b1be) bg_cale_heading_pane_g2

0x499a,	// (0x0002b1c6) bg_cale_heading_pane_g3

0x49a2,	// (0x0002b1ce) bg_cale_heading_pane_g4

0x49aa,	// (0x0002b1d6) bg_cale_heading_pane_g5

0x49b2,	// (0x0002b1de) bg_cale_heading_pane_g6

0x49ba,	// (0x0002b1e6) bg_cale_heading_pane_g7

0x49c2,	// (0x0002b1ee) bg_cale_heading_pane_g8

0x49ca,	// (0x0002b1f6) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00035bef) bg_cale_heading_pane_g

0x498a,	// (0x0002b1b6) bg_cale_side_pane_g1

0x49d2,	// (0x0002b1fe) bg_cale_side_pane_g2

0x49dc,	// (0x0002b208) bg_cale_side_pane_g3

0x49e6,	// (0x0002b212) bg_cale_side_pane_g4

0x49f0,	// (0x0002b21c) bg_cale_side_pane_g5

0x49fa,	// (0x0002b226) bg_cale_side_pane_g6

0x4a04,	// (0x0002b230) bg_cale_side_pane_g7

0x4a0e,	// (0x0002b23a) bg_cale_side_pane_g8

0x4a16,	// (0x0002b242) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00035c02) bg_cale_side_pane_g

0x4a1e,	// (0x0002b24a) popup_call_status_window_ParamLimits

0x4a1e,	// (0x0002b24a) popup_call_status_window

0x4a6b,	// (0x0002b297) stacon_top_pane

0x4a73,	// (0x0002b29f) status_pane_ParamLimits

0x4a73,	// (0x0002b29f) status_pane

0x4a88,	// (0x0002b2b4) status_small_pane

0x4a90,	// (0x0002b2bc) control_pane

0x2293,	// (0x00028abf) stacon_bottom_pane

0x4a98,	// (0x0002b2c4) list_single_mce_smart_pane_t1_ParamLimits

0x4a98,	// (0x0002b2c4) list_single_mce_smart_pane_t1

0x4aab,	// (0x0002b2d7) list_single_mce_smart_pane_t2_ParamLimits

0x4aab,	// (0x0002b2d7) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00035c15) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00035c15) list_single_mce_smart_pane_t

0x4aca,	// (0x0002b2f6) compass_pane

0x4ad5,	// (0x0002b301) main_location2_pane_t1

0x4aeb,	// (0x0002b317) main_location2_pane_t2

0x4b01,	// (0x0002b32d) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00035c1a) main_location2_pane_t

0x4b4f,	// (0x0002b37b) compass_pane_g1_ParamLimits

0x4b4f,	// (0x0002b37b) compass_pane_g1

0x4b5b,	// (0x0002b387) compass_pane_t1

0x4b6a,	// (0x0002b396) compass_pane_t2

0x0005,

0xf3f7,	// (0x00035c23) compass_pane_t

0x4bb5,	// (0x0002b3e1) text_secondary_cp61

0x4c34,	// (0x0002b460) navi_pane_cams_g5

0x4cb0,	// (0x0002b4dc) navi_pane_im_t1

0x4cbe,	// (0x0002b4ea) navi_pane_mp_g1_ParamLimits

0x4cbe,	// (0x0002b4ea) navi_pane_mp_g1

0x4cd2,	// (0x0002b4fe) navi_pane_mp_g2_ParamLimits

0x4cd2,	// (0x0002b4fe) navi_pane_mp_g2

0x4cde,	// (0x0002b50a) navi_pane_mp_g3_ParamLimits

0x4cde,	// (0x0002b50a) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00035c37) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00035c37) navi_pane_mp_g

0x4cea,	// (0x0002b516) navi_pane_mp_t1

0x4cf8,	// (0x0002b524) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00035c3e) navi_pane_mp_t

0x4da5,	// (0x0002b5d1) navi_pane_vt_g1

0x4cea,	// (0x0002b516) navi_pane_vt_t1

0x4dad,	// (0x0002b5d9) navi_slider_pane

0x4db5,	// (0x0002b5e1) zooming_pane

0x4dbd,	// (0x0002b5e9) navi_slider_pane_g1

0xb2ff,	// (0x00031b2b) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00035c45) navi_slider_pane_g

0x4de1,	// (0x0002b60d) aid_levels_zoom

0x4de9,	// (0x0002b615) zooming_pane_g1

0x4df1,	// (0x0002b61d) zooming_pane_g2

0x4df1,	// (0x0002b61d) zooming_pane_g3

0x0002,

0xf428,	// (0x00035c54) zooming_pane_g

0x4df9,	// (0x0002b625) level_10_zoom

0x4e02,	// (0x0002b62e) level_11_zoom

0x4e0b,	// (0x0002b637) level_1_zoom

0x4e14,	// (0x0002b640) level_2_zoom

0x4e1d,	// (0x0002b649) level_3_zoom

0x4e26,	// (0x0002b652) level_4_zoom

0x4e2f,	// (0x0002b65b) level_5_zoom

0x4e38,	// (0x0002b664) level_6_zoom

0x4e41,	// (0x0002b66d) level_7_zoom

0x4e4a,	// (0x0002b676) level_8_zoom

0x4e53,	// (0x0002b67f) level_9_zoom

0x4e64,	// (0x0002b690) popup_phob_thumbnail_window_g1

0x4e6c,	// (0x0002b698) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00035c5b) popup_phob_thumbnail_window_g

0xbd42,	// (0x0003256e) level_1_location

0xbd4a,	// (0x00032576) level_2_location

0xbd52,	// (0x0003257e) level_3_location

0xbd5a,	// (0x00032586) level_4_location

0x4db5,	// (0x0002b5e1) level_5_location

0x4e74,	// (0x0002b6a0) mce_icon_pane_g1

0x4e7c,	// (0x0002b6a8) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00035c60) mce_icon_pane_g

0x4e84,	// (0x0002b6b0) main_mup_pane_g1_ParamLimits

0x4e84,	// (0x0002b6b0) main_mup_pane_g1

0x4e9a,	// (0x0002b6c6) main_mup_pane_g2_ParamLimits

0x4e9a,	// (0x0002b6c6) main_mup_pane_g2

0x4eb2,	// (0x0002b6de) main_mup_pane_g3_ParamLimits

0x4eb2,	// (0x0002b6de) main_mup_pane_g3

0x4eca,	// (0x0002b6f6) main_mup_pane_g4_ParamLimits

0x4eca,	// (0x0002b6f6) main_mup_pane_g4

0x4edc,	// (0x0002b708) main_mup_pane_g5_ParamLimits

0x4edc,	// (0x0002b708) main_mup_pane_g5

0x4ef8,	// (0x0002b724) main_mup_pane_g6_ParamLimits

0x4ef8,	// (0x0002b724) main_mup_pane_g6

0x4f12,	// (0x0002b73e) main_mup_pane_g7_ParamLimits

0x4f12,	// (0x0002b73e) main_mup_pane_g7

0x4f30,	// (0x0002b75c) main_mup_pane_g8_ParamLimits

0x4f30,	// (0x0002b75c) main_mup_pane_g8

0x4f4e,	// (0x0002b77a) main_mup_pane_g9_ParamLimits

0x4f4e,	// (0x0002b77a) main_mup_pane_g9

0x4f6a,	// (0x0002b796) main_mup_pane_g10_ParamLimits

0x4f6a,	// (0x0002b796) main_mup_pane_g10

0x4f88,	// (0x0002b7b4) main_mup_pane_g11_ParamLimits

0x4f88,	// (0x0002b7b4) main_mup_pane_g11

0x4fa2,	// (0x0002b7ce) main_mup_pane_g12_ParamLimits

0x4fa2,	// (0x0002b7ce) main_mup_pane_g12

0x4fb8,	// (0x0002b7e4) main_mup_pane_g13_ParamLimits

0x4fb8,	// (0x0002b7e4) main_mup_pane_g13

0x000c,

0xf439,	// (0x00035c65) main_mup_pane_g_ParamLimits

0xf439,	// (0x00035c65) main_mup_pane_g

0x4fcc,	// (0x0002b7f8) main_mup_pane_t1_ParamLimits

0x4fcc,	// (0x0002b7f8) main_mup_pane_t1

0x4fe8,	// (0x0002b814) main_mup_pane_t2_ParamLimits

0x4fe8,	// (0x0002b814) main_mup_pane_t2

0x5000,	// (0x0002b82c) main_mup_pane_t3_ParamLimits

0x5000,	// (0x0002b82c) main_mup_pane_t3

0x5018,	// (0x0002b844) main_mup_pane_t4_ParamLimits

0x5018,	// (0x0002b844) main_mup_pane_t4

0x5036,	// (0x0002b862) main_mup_pane_t5_ParamLimits

0x5036,	// (0x0002b862) main_mup_pane_t5

0x504b,	// (0x0002b877) main_mup_pane_t6_ParamLimits

0x504b,	// (0x0002b877) main_mup_pane_t6

0x0005,

0xf454,	// (0x00035c80) main_mup_pane_t_ParamLimits

0xf454,	// (0x00035c80) main_mup_pane_t

0x505d,	// (0x0002b889) mup_progress_pane_ParamLimits

0x505d,	// (0x0002b889) mup_progress_pane

0x5069,	// (0x0002b895) mup_visualizer_pane_ParamLimits

0x5069,	// (0x0002b895) mup_visualizer_pane

0x509b,	// (0x0002b8c7) mup_volume_pane_ParamLimits

0x509b,	// (0x0002b8c7) mup_volume_pane

0x50b9,	// (0x0002b8e5) mup_visualizer_pane_g1_ParamLimits

0x50b9,	// (0x0002b8e5) mup_visualizer_pane_g1

0x50b9,	// (0x0002b8e5) mup_visualizer_pane_g2_ParamLimits

0x50b9,	// (0x0002b8e5) mup_visualizer_pane_g2

0x4b4f,	// (0x0002b37b) mup_visualizer_pane_g3_ParamLimits

0x4b4f,	// (0x0002b37b) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00035c8d) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00035c8d) mup_visualizer_pane_g

0x2886,	// (0x000290b2) mup_volume_pane_g1

0x50cf,	// (0x0002b8fb) mup_volume_pane_g2

0x0001,

0xf468,	// (0x00035c94) mup_volume_pane_g

0x2886,	// (0x000290b2) mup_progress_pane_g1

0x50d8,	// (0x0002b904) mup_progress_pane_g2

0x50e1,	// (0x0002b90d) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x00035c99) mup_progress_pane_g

0x2293,	// (0x00028abf) bg_popup_window_pane_cp05

0x50ea,	// (0x0002b916) heading_pane_cp02_ParamLimits

0x50ea,	// (0x0002b916) heading_pane_cp02

0x5106,	// (0x0002b932) list_popup_blid_pane

0x510e,	// (0x0002b93a) list_blid_sat_info_pane_ParamLimits

0x510e,	// (0x0002b93a) list_blid_sat_info_pane

0x5121,	// (0x0002b94d) list_blid_sat_info_pane_g1

0x5129,	// (0x0002b955) list_blid_sat_info_pane_t1

0x5243,	// (0x0002ba6f) mup_equalizer_pane_ParamLimits

0x5243,	// (0x0002ba6f) mup_equalizer_pane

0x5264,	// (0x0002ba90) mup_equalizer_pane_cp1_ParamLimits

0x5264,	// (0x0002ba90) mup_equalizer_pane_cp1

0x5285,	// (0x0002bab1) mup_equalizer_pane_cp2_ParamLimits

0x5285,	// (0x0002bab1) mup_equalizer_pane_cp2

0x52aa,	// (0x0002bad6) mup_equalizer_pane_cp3_ParamLimits

0x52aa,	// (0x0002bad6) mup_equalizer_pane_cp3

0x52d3,	// (0x0002baff) mup_equalizer_pane_cp4_ParamLimits

0x52d3,	// (0x0002baff) mup_equalizer_pane_cp4

0x52fc,	// (0x0002bb28) mup_equalizer_pane_cp5

0x5314,	// (0x0002bb40) mup_equalizer_pane_cp6

0x532c,	// (0x0002bb58) mup_equalizer_pane_cp7

0xbc5c,	// (0x00032488) bg_popup_call_poc_act_pane_g9

0xbc64,	// (0x00032490) bg_popup_call_poc_act_pane_g10

0xbc6c,	// (0x00032498) bg_popup_call_poc_act_pane_g11

0x000a,

0x24ee,	// (0x00028d1a) mup_scale_pane

0x2886,	// (0x000290b2) mup_scale_pane_g1

0x5344,	// (0x0002bb70) mup_scale_pane_g2

0x0006,

0xf489,	// (0x00035cb5) mup_scale_pane_g

0x537a,	// (0x0002bba6) msg_data_pane

0x5382,	// (0x0002bbae) scroll_pane_cp017

0x538a,	// (0x0002bbb6) bg_list_pane_cp04_ParamLimits

0x538a,	// (0x0002bbb6) bg_list_pane_cp04

0x53b2,	// (0x0002bbde) msg_data_pane_g1

0x53ba,	// (0x0002bbe6) msg_data_pane_g2

0x53c4,	// (0x0002bbf0) msg_data_pane_g3

0x53ce,	// (0x0002bbfa) msg_data_pane_g4

0x53d6,	// (0x0002bc02) msg_data_pane_g5

0x53de,	// (0x0002bc0a) msg_data_pane_g6

0x53e6,	// (0x0002bc12) msg_data_pane_g7

0x0006,

0xf498,	// (0x00035cc4) msg_data_pane_g

0x53ee,	// (0x0002bc1a) msg_text_pane_ParamLimits

0x53ee,	// (0x0002bc1a) msg_text_pane

0x541d,	// (0x0002bc49) qrid_highlight_pane_cp011_ParamLimits

0x541d,	// (0x0002bc49) qrid_highlight_pane_cp011

0x2293,	// (0x00028abf) msg_body_pane

0x2293,	// (0x00028abf) msg_header_pane

0x543c,	// (0x0002bc68) input_focus_pane_cp07

0x545f,	// (0x0002bc8b) msg_header_pane_t1_ParamLimits

0x545f,	// (0x0002bc8b) msg_header_pane_t1

0x5473,	// (0x0002bc9f) msg_header_pane_t2_ParamLimits

0x5473,	// (0x0002bc9f) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x00035cd8) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x00035cd8) msg_header_pane_t

0x5485,	// (0x0002bcb1) msg_body_pane_g1

0x548d,	// (0x0002bcb9) msg_body_pane_t1_ParamLimits

0x548d,	// (0x0002bcb9) msg_body_pane_t1

0x54be,	// (0x0002bcea) msg_body_pane_t2_ParamLimits

0x54be,	// (0x0002bcea) msg_body_pane_t2

0x54d0,	// (0x0002bcfc) msg_body_pane_t3_ParamLimits

0x54d0,	// (0x0002bcfc) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00035cdd) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00035cdd) msg_body_pane_t

0x0af7,	// (0x00027323) main_viewer_pane_g1_ParamLimits

0x0af7,	// (0x00027323) main_viewer_pane_g1

0x0b05,	// (0x00027331) main_viewer_pane_g2_ParamLimits

0x0b05,	// (0x00027331) main_viewer_pane_g2

0x5500,	// (0x0002bd2c) main_viewer_pane_g3_ParamLimits

0x5500,	// (0x0002bd2c) main_viewer_pane_g3

0x550f,	// (0x0002bd3b) main_viewer_pane_g4_ParamLimits

0x550f,	// (0x0002bd3b) main_viewer_pane_g4

0xb329,	// (0x00031b55) main_viewer_pane_g5_ParamLimits

0xb329,	// (0x00031b55) main_viewer_pane_g5

0xb329,	// (0x00031b55) main_viewer_pane_g7_ParamLimits

0xb329,	// (0x00031b55) main_viewer_pane_g7

0xb33b,	// (0x00031b67) main_viewer_pane_g8_ParamLimits

0xb33b,	// (0x00031b67) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00035ced) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00035ced) main_viewer_pane_g

0x551e,	// (0x0002bd4a) viewer_content_pane_ParamLimits

0x551e,	// (0x0002bd4a) viewer_content_pane

0x555b,	// (0x0002bd87) main_postcard_pane_g1_ParamLimits

0x555b,	// (0x0002bd87) main_postcard_pane_g1

0x5571,	// (0x0002bd9d) main_postcard_pane_g2_ParamLimits

0x5571,	// (0x0002bd9d) main_postcard_pane_g2

0x5587,	// (0x0002bdb3) main_postcard_pane_g3_ParamLimits

0x5587,	// (0x0002bdb3) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00035cfe) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00035cfe) main_postcard_pane_g

0x559e,	// (0x0002bdca) main_postcard_pane_g4

0xbe8c,	// (0x000326b8) smil_status_volume_pane_g2

0x55e1,	// (0x0002be0d) postcard_pane_ParamLimits

0x55e1,	// (0x0002be0d) postcard_pane

0x5631,	// (0x0002be5d) postcard_pane_g1_ParamLimits

0x5631,	// (0x0002be5d) postcard_pane_g1

0x563f,	// (0x0002be6b) postcard_pane_g2_ParamLimits

0x563f,	// (0x0002be6b) postcard_pane_g2

0x564b,	// (0x0002be77) postcard_pane_g3_ParamLimits

0x564b,	// (0x0002be77) postcard_pane_g3

0x5657,	// (0x0002be83) postcard_pane_g4_ParamLimits

0x5657,	// (0x0002be83) postcard_pane_g4

0x5665,	// (0x0002be91) postcard_pane_g5_ParamLimits

0x5665,	// (0x0002be91) postcard_pane_g5

0x5677,	// (0x0002bea3) postcard_pane_g6_ParamLimits

0x5677,	// (0x0002bea3) postcard_pane_g6

0x5631,	// (0x0002be5d) postcard_pane_g7_ParamLimits

0x5631,	// (0x0002be5d) postcard_pane_g7

0x0006,

0xf4df,	// (0x00035d0b) postcard_pane_g_ParamLimits

0xf4df,	// (0x00035d0b) postcard_pane_g

0x568f,	// (0x0002bebb) main_mp2_pane_g1_ParamLimits

0x568f,	// (0x0002bebb) main_mp2_pane_g1

0x569d,	// (0x0002bec9) main_mp2_pane_g2_ParamLimits

0x569d,	// (0x0002bec9) main_mp2_pane_g2

0x56a9,	// (0x0002bed5) main_mp2_pane_g3_ParamLimits

0x56a9,	// (0x0002bed5) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00035d1a) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00035d1a) main_mp2_pane_g

0x56b5,	// (0x0002bee1) main_mp2_pane_t1_ParamLimits

0x56b5,	// (0x0002bee1) main_mp2_pane_t1

0x56cc,	// (0x0002bef8) main_mp2_pane_t2_ParamLimits

0x56cc,	// (0x0002bef8) main_mp2_pane_t2

0x56e0,	// (0x0002bf0c) main_mp2_pane_t3_ParamLimits

0x56e0,	// (0x0002bf0c) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00035d21) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00035d21) main_mp2_pane_t

0x56f2,	// (0x0002bf1e) pec_content_pane_ParamLimits

0x56f2,	// (0x0002bf1e) pec_content_pane

0x378b,	// (0x00029fb7) scroll_pane_cp015

0x5704,	// (0x0002bf30) pec_attribute_pane_ParamLimits

0x5704,	// (0x0002bf30) pec_attribute_pane

0x5714,	// (0x0002bf40) pec_content_pane_g1_ParamLimits

0x5714,	// (0x0002bf40) pec_content_pane_g1

0x5720,	// (0x0002bf4c) pec_content_pane_t1_ParamLimits

0x5720,	// (0x0002bf4c) pec_content_pane_t1

0x5732,	// (0x0002bf5e) pec_content_pane_t2_ParamLimits

0x5732,	// (0x0002bf5e) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00035d28) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00035d28) pec_content_pane_t

0x5744,	// (0x0002bf70) list_single_graphic_pane_cp01_ParamLimits

0x5744,	// (0x0002bf70) list_single_graphic_pane_cp01

0x24ee,	// (0x00028d1a) bg_popup_sub_pane_cp04

0x575e,	// (0x0002bf8a) popup_mup_playback_window_g1

0x576a,	// (0x0002bf96) popup_mup_playback_window_t1

0x577f,	// (0x0002bfab) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00035d2d) popup_mup_playback_window_t

0x57d4,	// (0x0002c000) main_image_pane_g1_ParamLimits

0x57d4,	// (0x0002c000) main_image_pane_g1

0x58b1,	// (0x0002c0dd) scroll_pane_cp018_ParamLimits

0x58b1,	// (0x0002c0dd) scroll_pane_cp018

0x58c9,	// (0x0002c0f5) scroll_pane_cp016_ParamLimits

0x58c9,	// (0x0002c0f5) scroll_pane_cp016

0x58fd,	// (0x0002c129) smil2_image_pane_ParamLimits

0x58fd,	// (0x0002c129) smil2_image_pane

0x5933,	// (0x0002c15f) smil2_root_pane_ParamLimits

0x5933,	// (0x0002c15f) smil2_root_pane

0x596b,	// (0x0002c197) smil2_text_pane_ParamLimits

0x596b,	// (0x0002c197) smil2_text_pane

0x2293,	// (0x00028abf) bg_list_pane_cp06

0x5a03,	// (0x0002c22f) grid_radio_pane

0x2293,	// (0x00028abf) bg_popup_window_pane_cp06

0x5a0d,	// (0x0002c239) main_fmradio_pane_t1

0x47a3,	// (0x0002afcf) heading_pane_cp04

0x5a1b,	// (0x0002c247) main_fmradio_pane_t2

0xbc74,	// (0x000324a0) popup_cale_lunar_info_window_g1

0x5a29,	// (0x0002c255) main_fmradio_pane_t3

0xbc7c,	// (0x000324a8) popup_cale_lunar_info_window_g2

0x5a39,	// (0x0002c265) main_fmradio_pane_t4

0x0001,

0x5a47,	// (0x0002c273) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00035e08) popup_cale_lunar_info_window_g

0xf516,	// (0x00035d42) main_fmradio_pane_t

0x5a55,	// (0x0002c281) wait_bar_pane_cp03

0x5a5d,	// (0x0002c289) cell_fmradio_pane_ParamLimits

0x5a5d,	// (0x0002c289) cell_fmradio_pane

0x5631,	// (0x0002be5d) cell_fmradio_pane_g1_ParamLimits

0x5631,	// (0x0002be5d) cell_fmradio_pane_g1

0x2293,	// (0x00028abf) grid_highlight_pane_cp011

0x5a72,	// (0x0002c29e) poc_content_pane_ParamLimits

0x5a72,	// (0x0002c29e) poc_content_pane

0x5a84,	// (0x0002c2b0) scroll_pane_cp019

0x5a8c,	// (0x0002c2b8) popup_call_poc_act_window_ParamLimits

0x5a8c,	// (0x0002c2b8) popup_call_poc_act_window

0x5ab0,	// (0x0002c2dc) popup_call_poc_inact_window_ParamLimits

0x5ab0,	// (0x0002c2dc) popup_call_poc_inact_window

0xf5b3,	// (0x00035ddf) bg_popup_call_poc_act_pane_g

0xbbec,	// (0x00032418) bg_popup_call_poc_inact_pane_g1

0xbbf4,	// (0x00032420) bg_popup_call_poc_inact_pane_g2

0x5ac9,	// (0x0002c2f5) popup_call_poc_act_window_g2

0xbbfc,	// (0x00032428) bg_popup_call_poc_inact_pane_g3

0xbc04,	// (0x00032430) bg_popup_call_poc_inact_pane_g4

0xbc0c,	// (0x00032438) bg_popup_call_poc_inact_pane_g5

0x5ad1,	// (0x0002c2fd) popup_call_poc_act_window_t1_ParamLimits

0x5ad1,	// (0x0002c2fd) popup_call_poc_act_window_t1

0x5af9,	// (0x0002c325) popup_call_poc_act_window_t2_ParamLimits

0x5af9,	// (0x0002c325) popup_call_poc_act_window_t2

0x5b21,	// (0x0002c34d) popup_call_poc_act_window_t3_ParamLimits

0x5b21,	// (0x0002c34d) popup_call_poc_act_window_t3

0x5b49,	// (0x0002c375) popup_call_poc_act_window_t4_ParamLimits

0x5b49,	// (0x0002c375) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00035d4d) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00035d4d) popup_call_poc_act_window_t

0xbc14,	// (0x00032440) bg_popup_call_poc_inact_pane_g6

0xbc1c,	// (0x00032448) bg_popup_call_poc_inact_pane_g7

0xbc24,	// (0x00032450) bg_popup_call_poc_inact_pane_g8

0x5b5b,	// (0x0002c387) popup_call_poc_inact_window_g2

0xbc2c,	// (0x00032458) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x00035dcc) bg_popup_call_poc_inact_pane_g

0x5b63,	// (0x0002c38f) popup_call_poc_inact_window_t1_ParamLimits

0x5b63,	// (0x0002c38f) popup_call_poc_inact_window_t1

0x5b78,	// (0x0002c3a4) popup_call_poc_inact_window_t2_ParamLimits

0x5b78,	// (0x0002c3a4) popup_call_poc_inact_window_t2

0x5b8d,	// (0x0002c3b9) popup_call_poc_inact_window_t3_ParamLimits

0x5b8d,	// (0x0002c3b9) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x00035d56) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x00035d56) popup_call_poc_inact_window_t

0xbdec,	// (0x00032618) context_pane_ParamLimits

0x69a5,	// (0x0002d1d1) signal_pane_ParamLimits

0x4db5,	// (0x0002b5e1) main_call2_pane

0xbdda,	// (0x00032606) popup_phob_thumbnail2_window_ParamLimits

0xbdda,	// (0x00032606) popup_phob_thumbnail2_window

0xb311,	// (0x00031b3d) aid_hotspot_pointer_arrow_pane

0xb319,	// (0x00031b45) aid_hotspot_pointer_hand_pane

0x6465,	// (0x0002cc91) phob_pre_status_pane_g5

0x2dd1,	// (0x000295fd) cams_zoom_pane_ParamLimits

0x2de0,	// (0x0002960c) image_vga_pane_ParamLimits

0x2dfa,	// (0x00029626) main_camera_pane_g1_ParamLimits

0x2e0c,	// (0x00029638) main_camera_pane_g2_ParamLimits

0x2e1c,	// (0x00029648) main_camera_pane_g3_ParamLimits

0x2e30,	// (0x0002965c) main_camera_pane_g4_ParamLimits

0x2e44,	// (0x00029670) main_camera_pane_g5_ParamLimits

0x2e58,	// (0x00029684) main_camera_pane_g6_ParamLimits

0x2e6c,	// (0x00029698) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00035a55) main_camera_pane_g_ParamLimits

0x2e8c,	// (0x000296b8) main_camera_pane_t1_ParamLimits

0x2ea2,	// (0x000296ce) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00035a66) main_camera_pane_t_ParamLimits

0x24ee,	// (0x00028d1a) bg_popup_preview_window_pane_cp01_ParamLimits

0x24ee,	// (0x00028d1a) bg_popup_preview_window_pane_cp01

0x5ba2,	// (0x0002c3ce) popup_phob_thumbnail2_window_g1_ParamLimits

0x5ba2,	// (0x0002c3ce) popup_phob_thumbnail2_window_g1

0x2293,	// (0x00028abf) call2_cli_visual_pane

0x5bc9,	// (0x0002c3f5) popup_call2_audio_conf_window_ParamLimits

0x5bc9,	// (0x0002c3f5) popup_call2_audio_conf_window

0x5bf1,	// (0x0002c41d) popup_call2_audio_first_window_ParamLimits

0x5bf1,	// (0x0002c41d) popup_call2_audio_first_window

0x5c87,	// (0x0002c4b3) popup_call2_audio_in_window_ParamLimits

0x5c87,	// (0x0002c4b3) popup_call2_audio_in_window

0x5cd3,	// (0x0002c4ff) popup_call2_audio_out_window_ParamLimits

0x5cd3,	// (0x0002c4ff) popup_call2_audio_out_window

0x5d45,	// (0x0002c571) popup_call2_audio_second_window_ParamLimits

0x5d45,	// (0x0002c571) popup_call2_audio_second_window

0x5dab,	// (0x0002c5d7) popup_call2_audio_wait_window_ParamLimits

0x5dab,	// (0x0002c5d7) popup_call2_audio_wait_window

0x2293,	// (0x00028abf) bg_popup_call2_act_pane_cp03

0x24d0,	// (0x00028cfc) list_conf_pane_cp

0x5de5,	// (0x0002c611) popup_call2_audio_conf_window_t1

0x5df3,	// (0x0002c61f) list_single_graphic_popup_conf2_pane_ParamLimits

0x5df3,	// (0x0002c61f) list_single_graphic_popup_conf2_pane

0x4836,	// (0x0002b062) list_highlight_pane_cp04

0x5e06,	// (0x0002c632) list_single_graphic_popup_conf2_pane_g1

0x4847,	// (0x0002b073) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00035d5d) list_single_graphic_popup_conf2_pane_g

0x5e10,	// (0x0002c63c) list_single_graphic_popup_conf2_pane_t1

0x5e1e,	// (0x0002c64a) bg_popup_call2_act_pane_cp01_ParamLimits

0x5e1e,	// (0x0002c64a) bg_popup_call2_act_pane_cp01

0x5ea8,	// (0x0002c6d4) call_type_pane_cp05_ParamLimits

0x5ea8,	// (0x0002c6d4) call_type_pane_cp05

0x5efc,	// (0x0002c728) popup_call2_audio_second_window_g1_ParamLimits

0x5efc,	// (0x0002c728) popup_call2_audio_second_window_g1

0x5f50,	// (0x0002c77c) popup_call2_audio_second_window_g2_ParamLimits

0x5f50,	// (0x0002c77c) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00035d62) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00035d62) popup_call2_audio_second_window_g

0x5fb5,	// (0x0002c7e1) popup_call2_audio_second_window_t1_ParamLimits

0x5fb5,	// (0x0002c7e1) popup_call2_audio_second_window_t1

0x6070,	// (0x0002c89c) popup_call2_audio_second_window_t2_ParamLimits

0x6070,	// (0x0002c89c) popup_call2_audio_second_window_t2

0x60c3,	// (0x0002c8ef) popup_call2_audio_second_window_t3_ParamLimits

0x60c3,	// (0x0002c8ef) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x00035d69) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x00035d69) popup_call2_audio_second_window_t

0x2293,	// (0x00028abf) bg_popup_call2_in_pane_cp02

0x229d,	// (0x00028ac9) call_type_pane_cp04

0x22a5,	// (0x00028ad1) popup_call2_audio_wait_window_g1

0x22ad,	// (0x00028ad9) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00035942) popup_call2_audio_wait_window_g

0x22b5,	// (0x00028ae1) popup_call2_audio_wait_window_t3

0x61b6,	// (0x0002c9e2) bg_popup_call2_act_pane_ParamLimits

0x61b6,	// (0x0002c9e2) bg_popup_call2_act_pane

0x6276,	// (0x0002caa2) call_type_pane_cp03_ParamLimits

0x6276,	// (0x0002caa2) call_type_pane_cp03

0x62da,	// (0x0002cb06) popup_call2_audio_first_window_g1_ParamLimits

0x62da,	// (0x0002cb06) popup_call2_audio_first_window_g1

0xb353,	// (0x00031b7f) popup_call2_audio_first_window_g2_ParamLimits

0xb353,	// (0x00031b7f) popup_call2_audio_first_window_g2

0x50b9,	// (0x0002b8e5) popup_call2_audio_first_window_g3_ParamLimits

0x50b9,	// (0x0002b8e5) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00035d72) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00035d72) popup_call2_audio_first_window_g

0xb431,	// (0x00031c5d) popup_call2_audio_first_window_t1_ParamLimits

0xb431,	// (0x00031c5d) popup_call2_audio_first_window_t1

0xb534,	// (0x00031d60) popup_call2_audio_first_window_t4_ParamLimits

0xb534,	// (0x00031d60) popup_call2_audio_first_window_t4

0xb617,	// (0x00031e43) popup_call2_audio_first_window_t5_ParamLimits

0xb617,	// (0x00031e43) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00035d7d) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00035d7d) popup_call2_audio_first_window_t

0x24e6,	// (0x00028d12) bg_popup_call2_act_pane_g1

0xbc86,	// (0x000324b2) popup_cale_lunar_info_window_t1

0xbc94,	// (0x000324c0) popup_cale_lunar_info_window_t2

0xbca2,	// (0x000324ce) popup_cale_lunar_info_window_t3

0x2293,	// (0x00028abf) bg_popup_call2_bubble_pane

0xb718,	// (0x00031f44) bg_popup_call2_in_pane_cp01_ParamLimits

0xb718,	// (0x00031f44) bg_popup_call2_in_pane_cp01

0x1f4b,	// (0x00028777) call_type_pane_cp02

0xb760,	// (0x00031f8c) popup_call2_audio_out_window_g1_ParamLimits

0xb760,	// (0x00031f8c) popup_call2_audio_out_window_g1

0xb78c,	// (0x00031fb8) popup_call2_audio_out_window_g2_ParamLimits

0xb78c,	// (0x00031fb8) popup_call2_audio_out_window_g2

0xb7b4,	// (0x00031fe0) popup_call2_audio_out_window_g3_ParamLimits

0xb7b4,	// (0x00031fe0) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x00035d86) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x00035d86) popup_call2_audio_out_window_g

0xb7ef,	// (0x0003201b) popup_call2_audio_out_window_t1_ParamLimits

0xb7ef,	// (0x0003201b) popup_call2_audio_out_window_t1

0xb84e,	// (0x0003207a) popup_call2_audio_out_window_t2_ParamLimits

0xb84e,	// (0x0003207a) popup_call2_audio_out_window_t2

0xb8a2,	// (0x000320ce) popup_call2_audio_out_window_t3_ParamLimits

0xb8a2,	// (0x000320ce) popup_call2_audio_out_window_t3

0xb8b8,	// (0x000320e4) popup_call2_audio_out_window_t4_ParamLimits

0xb8b8,	// (0x000320e4) popup_call2_audio_out_window_t4

0xb8ce,	// (0x000320fa) popup_call2_audio_out_window_t5_ParamLimits

0xb8ce,	// (0x000320fa) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x00035d8f) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x00035d8f) popup_call2_audio_out_window_t

0xb932,	// (0x0003215e) bg_popup_call2_in_pane_ParamLimits

0xb932,	// (0x0003215e) bg_popup_call2_in_pane

0xb98e,	// (0x000321ba) popup_call2_audio_in_window_g1_ParamLimits

0xb98e,	// (0x000321ba) popup_call2_audio_in_window_g1

0xb9c6,	// (0x000321f2) popup_call2_audio_in_window_g2_ParamLimits

0xb9c6,	// (0x000321f2) popup_call2_audio_in_window_g2

0xb9fe,	// (0x0003222a) popup_call2_audio_in_window_g3_ParamLimits

0xb9fe,	// (0x0003222a) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x00035d9c) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x00035d9c) popup_call2_audio_in_window_g

0xba56,	// (0x00032282) popup_call2_audio_in_window_t1_ParamLimits

0xba56,	// (0x00032282) popup_call2_audio_in_window_t1

0xbad6,	// (0x00032302) popup_call2_audio_in_window_t2_ParamLimits

0xbad6,	// (0x00032302) popup_call2_audio_in_window_t2

0xbb56,	// (0x00032382) popup_call2_audio_in_window_t3_ParamLimits

0xbb56,	// (0x00032382) popup_call2_audio_in_window_t3

0xbb70,	// (0x0003239c) popup_call2_audio_in_window_t4_ParamLimits

0xbb70,	// (0x0003239c) popup_call2_audio_in_window_t4

0xbb82,	// (0x000323ae) popup_call2_audio_in_window_t5_ParamLimits

0xbb82,	// (0x000323ae) popup_call2_audio_in_window_t5

0xbb97,	// (0x000323c3) popup_call2_audio_in_window_t6_ParamLimits

0xbb97,	// (0x000323c3) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x00035da5) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x00035da5) popup_call2_audio_in_window_t

0x24e6,	// (0x00028d12) bg_popup_call2_in_pane_g1

0xbcb0,	// (0x000324dc) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00035e0d) popup_cale_lunar_info_window_t

0x24ee,	// (0x00028d1a) bg_popup_call2_rect_pane_ParamLimits

0x24ee,	// (0x00028d1a) bg_popup_call2_rect_pane

0x2293,	// (0x00028abf) call2_cli_visual_graphic_pane

0x2293,	// (0x00028abf) call2_cli_visual_text_pane

0xbe9f,	// (0x000326cb) smil_status_volume_pane_g3

0x0002,

0x2886,	// (0x000290b2) call2_cli_visual_graphic_pane_g1

0x2886,	// (0x000290b2) call2_cli_visual_graphic_pane_g2

0x2886,	// (0x000290b2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x00035db2) call2_cli_visual_graphic_pane_g

0xbbac,	// (0x000323d8) bg_popup_call2_rect_pane_g1

0x299e,	// (0x000291ca) bg_popup_call2_rect_pane_g2

0xbbb4,	// (0x000323e0) bg_popup_call2_rect_pane_g3

0xbbbc,	// (0x000323e8) bg_popup_call2_rect_pane_g4

0xbbc4,	// (0x000323f0) bg_popup_call2_rect_pane_g5

0xbbcc,	// (0x000323f8) bg_popup_call2_rect_pane_g6

0xbbd4,	// (0x00032400) bg_popup_call2_rect_pane_g7

0xbbdc,	// (0x00032408) bg_popup_call2_rect_pane_g8

0xbbe4,	// (0x00032410) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x00035db9) bg_popup_call2_rect_pane_g

0xbbec,	// (0x00032418) bg_popup_call2_bubble_pane_g1

0xbbf4,	// (0x00032420) bg_popup_call2_bubble_pane_g2

0xbbfc,	// (0x00032428) bg_popup_call2_bubble_pane_g3

0xbc04,	// (0x00032430) bg_popup_call2_bubble_pane_g4

0xbc0c,	// (0x00032438) bg_popup_call2_bubble_pane_g5

0xbc14,	// (0x00032440) bg_popup_call2_bubble_pane_g6

0xbc1c,	// (0x00032448) bg_popup_call2_bubble_pane_g7

0xbc24,	// (0x00032450) bg_popup_call2_bubble_pane_g8

0xbc2c,	// (0x00032458) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x00035dcc) bg_popup_call2_bubble_pane_g

0x2a28,	// (0x00029254) aid_cale_week_size_cell_pane

0x2ebc,	// (0x000296e8) aid_cams_cif_uncrop_pane_ParamLimits

0x2ebc,	// (0x000296e8) aid_cams_cif_uncrop_pane

0x30b3,	// (0x000298df) aid_cams_size_cell_ParamLimits

0x30b3,	// (0x000298df) aid_cams_size_cell

0x30c7,	// (0x000298f3) grid_cams_pane_ParamLimits

0x30e1,	// (0x0002990d) linegrid_cams_pane_ParamLimits

0x331e,	// (0x00029b4a) call_video_pane_t1

0x3338,	// (0x00029b64) call_video_pane_t2

0x0001,

0xf28d,	// (0x00035ab9) call_video_pane_t

0x39eb,	// (0x0002a217) aid_cale_month_size_cell_pane_ParamLimits

0x39eb,	// (0x0002a217) aid_cale_month_size_cell_pane

0xf62a,	// (0x00035e56) smil_status_volume_pane_g

0xbeac,	// (0x000326d8) volume_smil_pane_ParamLimits

0x1b55,	// (0x00028381) aid_popup2_width_pane

0x28f7,	// (0x00029123) cell_qdial_pane_g4_ParamLimits

0x28f7,	// (0x00029123) cell_qdial_pane_g4

0x4b2b,	// (0x0002b357) aid_blid_cardinal_pane_ParamLimits

0x4b3b,	// (0x0002b367) aid_blid_destination_pane_ParamLimits

0x4b3b,	// (0x0002b367) aid_blid_destination_pane

0x24ee,	// (0x00028d1a) bg_popup_call_poc_act_pane_ParamLimits

0x24ee,	// (0x00028d1a) bg_popup_call_poc_act_pane

0x24ee,	// (0x00028d1a) bg_popup_call_poc_inact_pane_ParamLimits

0x24ee,	// (0x00028d1a) bg_popup_call_poc_inact_pane

0xbc34,	// (0x00032460) bg_popup_call_poc_act_pane_g1

0xbc3c,	// (0x00032468) bg_popup_call_poc_act_pane_g2

0xbc44,	// (0x00032470) bg_popup_call_poc_act_pane_g3

0xbc04,	// (0x00032430) bg_popup_call_poc_act_pane_g4

0xbc0c,	// (0x00032438) bg_popup_call_poc_act_pane_g5

0xbc4c,	// (0x00032478) bg_popup_call_poc_act_pane_g6

0xbc1c,	// (0x00032448) bg_popup_call_poc_act_pane_g7

0xbc54,	// (0x00032480) bg_popup_call_poc_act_pane_g8

0x2293,	// (0x00028abf) main_usb_pane

0xbdb1,	// (0x000325dd) popup_cale_lunar_info_window

0x3667,	// (0x00029e93) im_reading_pane_t1_ParamLimits

0x36a6,	// (0x00029ed2) list_im_pane_ParamLimits

0x36b7,	// (0x00029ee3) scroll_pane_cp07_ParamLimits

0x2293,	// (0x00028abf) grid_highlight_pane_cp012

0x24ee,	// (0x00028d1a) mup_scale_pane_ParamLimits

0x5631,	// (0x0002be5d) main_usb_pane_g1_ParamLimits

0x5631,	// (0x0002be5d) main_usb_pane_g1

0x6371,	// (0x0002cb9d) main_usb_pane_g2_ParamLimits

0x6371,	// (0x0002cb9d) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x00035df6) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x00035df6) main_usb_pane_g

0x6387,	// (0x0002cbb3) main_usb_pane_t1_ParamLimits

0x6387,	// (0x0002cbb3) main_usb_pane_t1

0x6399,	// (0x0002cbc5) main_usb_pane_t2_ParamLimits

0x6399,	// (0x0002cbc5) main_usb_pane_t2

0x63ab,	// (0x0002cbd7) main_usb_pane_t3_ParamLimits

0x63ab,	// (0x0002cbd7) main_usb_pane_t3

0x63bd,	// (0x0002cbe9) main_usb_pane_t4_ParamLimits

0x63bd,	// (0x0002cbe9) main_usb_pane_t4

0x63d2,	// (0x0002cbfe) main_usb_pane_t5_ParamLimits

0x63d2,	// (0x0002cbfe) main_usb_pane_t5

0x63e7,	// (0x0002cc13) main_usb_pane_t6_ParamLimits

0x63e7,	// (0x0002cc13) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00035dfb) main_usb_pane_t_ParamLimits

0x4aca,	// (0x0002b2f6) aid_text_placing

0x4ad5,	// (0x0002b301) main_location2_pane_t1_ParamLimits

0x4aeb,	// (0x0002b317) main_location2_pane_t2_ParamLimits

0x4b01,	// (0x0002b32d) main_location2_pane_t3_ParamLimits

0x4b17,	// (0x0002b343) main_location2_pane_t4_ParamLimits

0x4b17,	// (0x0002b343) main_location2_pane_t4

0xf3ee,	// (0x00035c1a) main_location2_pane_t_ParamLimits

0x25ca,	// (0x00028df6) find_pinb_pane_g2_ParamLimits

0x25ca,	// (0x00028df6) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00035968) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00035968) find_pinb_pane_g

0x25d6,	// (0x00028e02) find_pinb_pane_t1_ParamLimits

0x25e8,	// (0x00028e14) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0003596d) find_pinb_pane_t_ParamLimits

0x2293,	// (0x00028abf) main_call3_pane

0x3d94,	// (0x0002a5c0) cale_month_day_heading_pane_t1_ParamLimits

0x3df2,	// (0x0002a61e) cale_month_day_heading_pane_t2_ParamLimits

0x3e57,	// (0x0002a683) cale_month_day_heading_pane_t3_ParamLimits

0x3ebc,	// (0x0002a6e8) cale_month_day_heading_pane_t4_ParamLimits

0x3f21,	// (0x0002a74d) cale_month_day_heading_pane_t5_ParamLimits

0x3f86,	// (0x0002a7b2) cale_month_day_heading_pane_t6_ParamLimits

0x3feb,	// (0x0002a817) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00035af1) cale_month_day_heading_pane_t_ParamLimits

0x41e7,	// (0x0002aa13) smil_status_volume_pane

0x5605,	// (0x0002be31) postcard_address_pane_ParamLimits

0x5605,	// (0x0002be31) postcard_address_pane

0x561b,	// (0x0002be47) postcard_message_pane_ParamLimits

0x561b,	// (0x0002be47) postcard_message_pane

0x634a,	// (0x0002cb76) call2_cli_visual_pane_t1_ParamLimits

0x634a,	// (0x0002cb76) call2_cli_visual_pane_t1

0x6bb6,	// (0x0002d3e2) postcard_message_pane_t1_ParamLimits

0x6bb6,	// (0x0002d3e2) postcard_message_pane_t1

0xbec1,	// (0x000326ed) postcard_address_pane_t1_ParamLimits

0xbec1,	// (0x000326ed) postcard_address_pane_t1

0x6ba2,	// (0x0002d3ce) popup_call3_audio_in_window_ParamLimits

0x6ba2,	// (0x0002d3ce) popup_call3_audio_in_window

0x6a27,	// (0x0002d253) bg_popup_call3_in_pane_ParamLimits

0x6a27,	// (0x0002d253) bg_popup_call3_in_pane

0x6aa3,	// (0x0002d2cf) popup_call3_audio_in_window_g1_ParamLimits

0x6aa3,	// (0x0002d2cf) popup_call3_audio_in_window_g1

0x6ac3,	// (0x0002d2ef) popup_call3_audio_in_window_g2_ParamLimits

0x6ac3,	// (0x0002d2ef) popup_call3_audio_in_window_g2

0x6ae3,	// (0x0002d30f) popup_call3_audio_in_window_g3_ParamLimits

0x6ae3,	// (0x0002d30f) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00035e5d) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00035e5d) popup_call3_audio_in_window_g

0x6b14,	// (0x0002d340) popup_call3_audio_in_window_t1_ParamLimits

0x6b14,	// (0x0002d340) popup_call3_audio_in_window_t1

0x6b52,	// (0x0002d37e) popup_call3_audio_in_window_t2_ParamLimits

0x6b52,	// (0x0002d37e) popup_call3_audio_in_window_t2

0x6b90,	// (0x0002d3bc) popup_call3_audio_in_window_t3_ParamLimits

0x6b90,	// (0x0002d3bc) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x00035e66) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x00035e66) popup_call3_audio_in_window_t

0x4db5,	// (0x0002b5e1) bg_popup_call3_rect_pane

0xbbac,	// (0x000323d8) bg_popup_call3_rect_pane_g1

0x299e,	// (0x000291ca) bg_popup_call3_rect_pane_g2

0xbbb4,	// (0x000323e0) bg_popup_call3_rect_pane_g3

0xbbbc,	// (0x000323e8) bg_popup_call3_rect_pane_g4

0xbbc4,	// (0x000323f0) bg_popup_call3_rect_pane_g5

0xbbcc,	// (0x000323f8) bg_popup_call3_rect_pane_g6

0xbbd4,	// (0x00032400) bg_popup_call3_rect_pane_g7

0x50b1,	// (0x0002b8dd) mup_visualizer_osc_pane

0x50c7,	// (0x0002b8f3) mup_visualizer_spec_pane

0x6a57,	// (0x0002d283) call3_video_qcif_pane_ParamLimits

0x6a57,	// (0x0002d283) call3_video_qcif_pane

0x6a6a,	// (0x0002d296) call3_video_qcif_uncrop_pane_ParamLimits

0x6a6a,	// (0x0002d296) call3_video_qcif_uncrop_pane

0x6a7a,	// (0x0002d2a6) call3_video_subqcif_pane_ParamLimits

0x6a7a,	// (0x0002d2a6) call3_video_subqcif_pane

0x6a90,	// (0x0002d2bc) call3_video_subqcif_uncrop_pane_ParamLimits

0x6a90,	// (0x0002d2bc) call3_video_subqcif_uncrop_pane

0x6b03,	// (0x0002d32f) popup_call3_audio_in_window_g4_ParamLimits

0x6b03,	// (0x0002d32f) popup_call3_audio_in_window_g4

0x6a16,	// (0x0002d242) mup_spec_half_pane

0x6a1f,	// (0x0002d24b) mup_spec_half_pane_cp

0xbe5f,	// (0x0003268b) mup_osc_middle_pane

0xbe68,	// (0x00032694) mup_visualizer_osc_pane_g1

0x69f6,	// (0x0002d222) mup_spec_bar_pane_ParamLimits

0x69f6,	// (0x0002d222) mup_spec_bar_pane

0xbe4c,	// (0x00032678) mup_spec_bar_pane_g1

0xbe56,	// (0x00032682) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00035e51) mup_spec_bar_pane_g

0x2a28,	// (0x00029254) aid_cale_week_size_cell_pane_ParamLimits

0x2a3b,	// (0x00029267) bg_cale_heading_pane_ParamLimits

0x2a57,	// (0x00029283) bg_cale_pane_cp01_ParamLimits

0x2a70,	// (0x0002929c) cale_week_corner_pane_ParamLimits

0x2a86,	// (0x000292b2) cale_week_day_heading_pane_ParamLimits

0x2aa2,	// (0x000292ce) cale_week_scroll_pane_g1_ParamLimits

0x2abb,	// (0x000292e7) cale_week_scroll_pane_g2_ParamLimits

0x2acc,	// (0x000292f8) cale_week_scroll_pane_g3_ParamLimits

0x2add,	// (0x00029309) cale_week_scroll_pane_g4_ParamLimits

0x2aee,	// (0x0002931a) cale_week_scroll_pane_g5_ParamLimits

0x2aff,	// (0x0002932b) cale_week_scroll_pane_g6_ParamLimits

0x2b10,	// (0x0002933c) cale_week_scroll_pane_g7_ParamLimits

0x2b21,	// (0x0002934d) cale_week_scroll_pane_g8_ParamLimits

0x2b32,	// (0x0002935e) cale_week_scroll_pane_g9_ParamLimits

0x2b43,	// (0x0002936f) cale_week_scroll_pane_g10_ParamLimits

0x2b54,	// (0x00029380) cale_week_scroll_pane_g11_ParamLimits

0x2b65,	// (0x00029391) cale_week_scroll_pane_g12_ParamLimits

0x2b76,	// (0x000293a2) cale_week_scroll_pane_g13_ParamLimits

0x2b8f,	// (0x000293bb) cale_week_scroll_pane_g14_ParamLimits

0x2ba8,	// (0x000293d4) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x000359f9) cale_week_scroll_pane_g_ParamLimits

0x2bc1,	// (0x000293ed) cale_week_time_pane_ParamLimits

0x2bd2,	// (0x000293fe) grid_cale_week_pane_ParamLimits

0x2bed,	// (0x00029419) listscroll_cale_week_pane_t1

0x2bff,	// (0x0002942b) scroll_pane_cp08_ParamLimits

0x3a5f,	// (0x0002a28b) cale_month_corner_pane_ParamLimits

0x3d43,	// (0x0002a56f) cale_month_pane_t1

0x3d55,	// (0x0002a581) cale_month_week_pane_ParamLimits

0x4702,	// (0x0002af2e) popup_call_status_window_g1_ParamLimits

0x4716,	// (0x0002af42) popup_call_status_window_g2_ParamLimits

0x472a,	// (0x0002af56) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x00035ba1) popup_call_status_window_g_ParamLimits

0x4793,	// (0x0002afbf) aid_call2_pane

0x5445,	// (0x0002bc71) msg_header_pane_g1

0x5605,	// (0x0002be31) postcard_address2_pane_ParamLimits

0x5605,	// (0x0002be31) postcard_address2_pane

0x561b,	// (0x0002be47) postcard_message2_pane_ParamLimits

0x561b,	// (0x0002be47) postcard_message2_pane

0x69b3,	// (0x0002d1df) message2_row_pane_ParamLimits

0x69b3,	// (0x0002d1df) message2_row_pane

0xbe07,	// (0x00032633) address2_row_pane_ParamLimits

0xbe07,	// (0x00032633) address2_row_pane

0xbe1a,	// (0x00032646) postcard_message2_row_pane_g1

0xbe22,	// (0x0003264e) postcard_message2_row_pane_t1

0xbe1a,	// (0x00032646) address2_row_pane_g1

0xbe22,	// (0x0003264e) address2_row_pane_t1

0x0aad,	// (0x000272d9) aid_size_cell_vorec

0x2293,	// (0x00028abf) main_rss_pane

0x69d6,	// (0x0002d202) rss_list_single_pane_ParamLimits

0x69d6,	// (0x0002d202) rss_list_single_pane

0xbe30,	// (0x0003265c) rss_list_single_pane_t1

0xbe3e,	// (0x0003266a) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00035e4c) rss_list_single_pane_t

0x2293,	// (0x00028abf) main_camera2_pane

0x2293,	// (0x00028abf) main_video2_pane

0x0b67,	// (0x00027393) cams_zoom_pane_cp2_ParamLimits

0x0b67,	// (0x00027393) cams_zoom_pane_cp2

0x0b7e,	// (0x000273aa) image2_vga_pane_ParamLimits

0x0b7e,	// (0x000273aa) image2_vga_pane

0x0bc6,	// (0x000273f2) main_camera2_pane_g1_ParamLimits

0x0bc6,	// (0x000273f2) main_camera2_pane_g1

0x0be6,	// (0x00027412) main_camera2_pane_g2_ParamLimits

0x0be6,	// (0x00027412) main_camera2_pane_g2

0x0bfd,	// (0x00027429) main_camera2_pane_g3_ParamLimits

0x0bfd,	// (0x00027429) main_camera2_pane_g3

0x0c14,	// (0x00027440) main_camera2_pane_g4_ParamLimits

0x0c14,	// (0x00027440) main_camera2_pane_g4

0x0c2b,	// (0x00027457) main_camera2_pane_g5_ParamLimits

0x0c2b,	// (0x00027457) main_camera2_pane_g5

0x0c42,	// (0x0002746e) main_camera2_pane_g6_ParamLimits

0x0c42,	// (0x0002746e) main_camera2_pane_g6

0x0c59,	// (0x00027485) main_camera2_pane_g7_ParamLimits

0x0c59,	// (0x00027485) main_camera2_pane_g7

0x0c70,	// (0x0002749c) main_camera2_pane_g8_ParamLimits

0x0c70,	// (0x0002749c) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00035e6d) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00035e6d) main_camera2_pane_g

0x0c9e,	// (0x000274ca) main_camera2_pane_t1_ParamLimits

0x0c9e,	// (0x000274ca) main_camera2_pane_t1

0x0cd3,	// (0x000274ff) main_camera2_pane_t2_ParamLimits

0x0cd3,	// (0x000274ff) main_camera2_pane_t2

0x0cf0,	// (0x0002751c) main_camera2_pane_t3_ParamLimits

0x0cf0,	// (0x0002751c) main_camera2_pane_t3

0x0d4e,	// (0x0002757a) main_camera2_pane_t4_ParamLimits

0x0d4e,	// (0x0002757a) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00035e80) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00035e80) main_camera2_pane_t

0x0dd7,	// (0x00027603) cams_zoom_pane_cp4_ParamLimits

0x0dd7,	// (0x00027603) cams_zoom_pane_cp4

0x0ded,	// (0x00027619) image2_cif_pane_ParamLimits

0x0ded,	// (0x00027619) image2_cif_pane

0x0e18,	// (0x00027644) image2_subqcif_pane_ParamLimits

0x0e18,	// (0x00027644) image2_subqcif_pane

0x0e33,	// (0x0002765f) main_video2_pane_g1_ParamLimits

0x0e33,	// (0x0002765f) main_video2_pane_g1

0x0e4d,	// (0x00027679) main_video2_pane_g2_ParamLimits

0x0e4d,	// (0x00027679) main_video2_pane_g2

0x0e63,	// (0x0002768f) main_video2_pane_g3_ParamLimits

0x0e63,	// (0x0002768f) main_video2_pane_g3

0x0e79,	// (0x000276a5) main_video2_pane_g4_ParamLimits

0x0e79,	// (0x000276a5) main_video2_pane_g4

0x0e8f,	// (0x000276bb) main_video2_pane_g5_ParamLimits

0x0e8f,	// (0x000276bb) main_video2_pane_g5

0x0ea5,	// (0x000276d1) main_video2_pane_g6_ParamLimits

0x0ea5,	// (0x000276d1) main_video2_pane_g6

0x0005,

0xf663,	// (0x00035e8f) main_video2_pane_g_ParamLimits

0xf663,	// (0x00035e8f) main_video2_pane_g

0x0ebf,	// (0x000276eb) main_video2_pane_t1_ParamLimits

0x0ebf,	// (0x000276eb) main_video2_pane_t1

0x0ee3,	// (0x0002770f) main_video2_pane_t2_ParamLimits

0x0ee3,	// (0x0002770f) main_video2_pane_t2

0x0f33,	// (0x0002775f) main_video2_pane_t3_ParamLimits

0x0f33,	// (0x0002775f) main_video2_pane_t3

0x0002,

0xf670,	// (0x00035e9c) main_video2_pane_t_ParamLimits

0xf670,	// (0x00035e9c) main_video2_pane_t

0x64a5,	// (0x0002ccd1) call_muted_g2

0x0001,

0xf612,	// (0x00035e3e) call_muted_g

0x2293,	// (0x00028abf) main_mup2_pane

0x6bd1,	// (0x0002d3fd) main_mup2_pane_g1_ParamLimits

0x6bd1,	// (0x0002d3fd) main_mup2_pane_g1

0x6bdd,	// (0x0002d409) main_mup2_pane_g2_ParamLimits

0x6bdd,	// (0x0002d409) main_mup2_pane_g2

0xbfe2,	// (0x0003280e) main_mup_pane_g13_cp1

0xbfea,	// (0x00032816) mup_volume_pane_cp1

0x6bfb,	// (0x0002d427) main_mup2_pane_g4_ParamLimits

0x6bfb,	// (0x0002d427) main_mup2_pane_g4

0x6c0b,	// (0x0002d437) main_mup2_pane_g5_ParamLimits

0x6c0b,	// (0x0002d437) main_mup2_pane_g5

0x6c1b,	// (0x0002d447) main_mup2_pane_g6_ParamLimits

0x6c1b,	// (0x0002d447) main_mup2_pane_g6

0x6c2b,	// (0x0002d457) main_mup2_pane_g7_ParamLimits

0x6c2b,	// (0x0002d457) main_mup2_pane_g7

0x0006,

0xf677,	// (0x00035ea3) main_mup2_pane_g_ParamLimits

0xf677,	// (0x00035ea3) main_mup2_pane_g

0x6c43,	// (0x0002d46f) main_mup2_pane_t1_ParamLimits

0x6c43,	// (0x0002d46f) main_mup2_pane_t1

0x6c59,	// (0x0002d485) main_mup2_pane_t2_ParamLimits

0x6c59,	// (0x0002d485) main_mup2_pane_t2

0x6c6f,	// (0x0002d49b) main_mup2_pane_t3_ParamLimits

0x6c6f,	// (0x0002d49b) main_mup2_pane_t3

0x6c85,	// (0x0002d4b1) main_mup2_pane_t4_ParamLimits

0x6c85,	// (0x0002d4b1) main_mup2_pane_t4

0x6c9d,	// (0x0002d4c9) main_mup2_pane_t5_ParamLimits

0x6c9d,	// (0x0002d4c9) main_mup2_pane_t5

0x6cb5,	// (0x0002d4e1) main_mup2_pane_t6_ParamLimits

0x6cb5,	// (0x0002d4e1) main_mup2_pane_t6

0x0005,

0xf686,	// (0x00035eb2) main_mup2_pane_t_ParamLimits

0xf686,	// (0x00035eb2) main_mup2_pane_t

0x6ce5,	// (0x0002d511) mup2_visualizer_pane_ParamLimits

0x6ce5,	// (0x0002d511) mup2_visualizer_pane

0x6d13,	// (0x0002d53f) mup_progress_pane_cp_ParamLimits

0x6d13,	// (0x0002d53f) mup_progress_pane_cp

0xbfc4,	// (0x000327f0) mup_volume_pane_cp_ParamLimits

0xbfc4,	// (0x000327f0) mup_volume_pane_cp

0x6d29,	// (0x0002d555) mup2_visualizer_pane_g1_ParamLimits

0x6d29,	// (0x0002d555) mup2_visualizer_pane_g1

0xbf03,	// (0x0003272f) mup2_visualizer_pane_g2_ParamLimits

0xbf03,	// (0x0003272f) mup2_visualizer_pane_g2

0x6d3e,	// (0x0002d56a) mup2_visualizer_pane_g3_ParamLimits

0x6d3e,	// (0x0002d56a) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x00035ebf) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x00035ebf) mup2_visualizer_pane_g

0x59fb,	// (0x0002c227) aid_size_cell_fmradio

0x6655,	// (0x0002ce81) aid_height_parent_landcape

0x3772,	// (0x00029f9e) wml_content_pane_cp

0x377a,	// (0x00029fa6) wml_tabs_pane

0x3783,	// (0x00029faf) popup_wml_miniature_window

0x378b,	// (0x00029fb7) scroll_pane_cp021

0x379f,	// (0x00029fcb) wml_content_pane_comp8

0x2293,	// (0x00028abf) bg_popup_sub_pane_cp05

0xbf21,	// (0x0003274d) popup_wml_miniature_window_g1

0xbf29,	// (0x00032755) wml_miniature_view_pane

0x6d4a,	// (0x0002d576) aid_size_wml_view

0x6d52,	// (0x0002d57e) wml_miniature_view_pane_g1

0x6d5b,	// (0x0002d587) wml_miniature_view_pane_g2

0x6d64,	// (0x0002d590) wml_miniature_view_pane_g3

0x6d6c,	// (0x0002d598) wml_miniature_view_pane_g4

0x6d74,	// (0x0002d5a0) wml_miniature_view_pane_g5

0x6d7c,	// (0x0002d5a8) wml_miniature_view_pane_g6

0x6d84,	// (0x0002d5b0) wml_miniature_view_pane_g7

0x6d8c,	// (0x0002d5b8) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x00035ec6) wml_miniature_view_pane_g

0xbf31,	// (0x0003275d) background_graphic_ParamLimits

0xbf31,	// (0x0003275d) background_graphic

0xbf3d,	// (0x00032769) wml_tabs_2_pane

0xbf46,	// (0x00032772) wml_tabs_3_pane_ParamLimits

0xbf46,	// (0x00032772) wml_tabs_3_pane

0xbf58,	// (0x00032784) wml_tabs_4_pane_ParamLimits

0xbf58,	// (0x00032784) wml_tabs_4_pane

0xbf6e,	// (0x0003279a) wml_tabs_5_pane_ParamLimits

0xbf6e,	// (0x0003279a) wml_tabs_5_pane

0xbf88,	// (0x000327b4) wml_tabs_pane_g2_ParamLimits

0xbf88,	// (0x000327b4) wml_tabs_pane_g2

0xbf9c,	// (0x000327c8) wml_tabs_pane_g3_ParamLimits

0xbf9c,	// (0x000327c8) wml_tabs_pane_g3

0x6d94,	// (0x0002d5c0) wml_tabs_2_active_pane_ParamLimits

0x6d94,	// (0x0002d5c0) wml_tabs_2_active_pane

0x6da8,	// (0x0002d5d4) wml_tabs_2_passive_pane_ParamLimits

0x6da8,	// (0x0002d5d4) wml_tabs_2_passive_pane

0x6dbc,	// (0x0002d5e8) wml_tabs_3_active_pane_cp_ParamLimits

0x6dbc,	// (0x0002d5e8) wml_tabs_3_active_pane_cp

0x6dd1,	// (0x0002d5fd) wml_tabs_3_passive_pane_ParamLimits

0x6dd1,	// (0x0002d5fd) wml_tabs_3_passive_pane

0x6de4,	// (0x0002d610) wml_tabs_3_passive_pane_cp_ParamLimits

0x6de4,	// (0x0002d610) wml_tabs_3_passive_pane_cp

0x6dfb,	// (0x0002d627) tabs_4_active_pane

0x6e03,	// (0x0002d62f) tabs_4_passive_pane

0x6e0d,	// (0x0002d639) tabs_4_passive_pane_cp

0x6e15,	// (0x0002d641) tabs_4_passive_pane_cp2

0x6369,	// (0x0002cb95) aid_height_text

0x5083,	// (0x0002b8af) mup_volume_cont_pane_ParamLimits

0x5083,	// (0x0002b8af) mup_volume_cont_pane

0x2584,	// (0x00028db0) aid_size_cell_pinb

0x258e,	// (0x00028dba) aid_size_list_pinb

0x6cff,	// (0x0002d52b) mup2_volume_cont_pane_ParamLimits

0x6cff,	// (0x0002d52b) mup2_volume_cont_pane

0xbfb0,	// (0x000327dc) mup2_volume_cont_pane_g1_ParamLimits

0xbfb0,	// (0x000327dc) mup2_volume_cont_pane_g1

0x1b61,	// (0x0002838d) aid_size_cell_touch_ParamLimits

0x1b61,	// (0x0002838d) aid_size_cell_touch

0x1dd5,	// (0x00028601) touch_pane_ParamLimits

0x1dd5,	// (0x00028601) touch_pane

0x1b43,	// (0x0002836f) main_rss2_pane

0xbff2,	// (0x0003281e) listscroll_rss2_pane

0xbffb,	// (0x00032827) rss2_navigation_pane

0xc003,	// (0x0003282f) list_rss2_pane

0x494e,	// (0x0002b17a) scroll_pane_cp22

0xc00b,	// (0x00032837) rss2_navigation_pane_g1

0xc014,	// (0x00032840) rss2_navigation_pane_g2

0xc01c,	// (0x00032848) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x00035ed7) rss2_navigation_pane_g

0xc024,	// (0x00032850) rss2_navigation_pane_t1

0x6e1f,	// (0x0002d64b) rss2_list_single_pane_ParamLimits

0x6e1f,	// (0x0002d64b) rss2_list_single_pane

0xc032,	// (0x0003285e) rss2_list_single_pane_t2

0xc040,	// (0x0003286c) rss2_list_single_pane_t3_ParamLimits

0xc040,	// (0x0003286c) rss2_list_single_pane_t3

0xc05d,	// (0x00032889) rss2_list_single_pane_t4

0x41cf,	// (0x0002a9fb) smil_status_pane_g1

0x1dbb,	// (0x000285e7) main_image2_pane_ParamLimits

0x1dbb,	// (0x000285e7) main_image2_pane

0x0c87,	// (0x000274b3) main_camera2_pane_g9_ParamLimits

0x0c87,	// (0x000274b3) main_camera2_pane_g9

0x0da3,	// (0x000275cf) main_camera2_pane_t5_ParamLimits

0x0da3,	// (0x000275cf) main_camera2_pane_t5

0xbed8,	// (0x00032704) main_camera2_pane_t6_ParamLimits

0xbed8,	// (0x00032704) main_camera2_pane_t6

0x6e39,	// (0x0002d665) main_image2_pane_g1_ParamLimits

0x6e39,	// (0x0002d665) main_image2_pane_g1

0x59a5,	// (0x0002c1d1) smil2_video_pane_ParamLimits

0x59a5,	// (0x0002c1d1) smil2_video_pane

0x1b91,	// (0x000283bd) aid_zoom_text_primary_cp

0x1d77,	// (0x000285a3) popup_preview_fixed_window

0x365f,	// (0x00029e8b) im_reading_pane_g1

0x0b59,	// (0x00027385) cams2_bc_adjust_pane_cp_ParamLimits

0x0b59,	// (0x00027385) cams2_bc_adjust_pane_cp

0x0dc9,	// (0x000275f5) cams2_bc_adjust_pane_ParamLimits

0x0dc9,	// (0x000275f5) cams2_bc_adjust_pane

0xc06b,	// (0x00032897) cams2_bc_adjust_pane_g1

0xc073,	// (0x0003289f) cams2_slider_pane

0xc07c,	// (0x000328a8) cams2_slider_pane_g1

0xc085,	// (0x000328b1) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x00035ede) cams2_slider_pane_g

0x08c3,	// (0x000270ef) calc_display_pane_ParamLimits

0x08e9,	// (0x00027115) calc_paper_pane_ParamLimits

0x090c,	// (0x00027138) grid_calc_pane_ParamLimits

0xb2e2,	// (0x00031b0e) popup_clock_digital_window_t1_ParamLimits

0x5822,	// (0x0002c04e) main_image_pane_t1

0x08a5,	// (0x000270d1) aid_size_cell_calc_ParamLimits

0x08a5,	// (0x000270d1) aid_size_cell_calc

0x669b,	// (0x0002cec7) popup_blid_sat_info2_window_ParamLimits

0x669b,	// (0x0002cec7) popup_blid_sat_info2_window

0xc0a7,	// (0x000328d3) aid_size_cell_blid

0xc0af,	// (0x000328db) bg_popup_window_pane_cp07

0xc0d2,	// (0x000328fe) grid_popup_blid_pane

0xc0dc,	// (0x00032908) heading_pane_cp05_ParamLimits

0xc0dc,	// (0x00032908) heading_pane_cp05

0xc1a6,	// (0x000329d2) cell_popup_blid_pane_ParamLimits

0xc1a6,	// (0x000329d2) cell_popup_blid_pane

0xc1d0,	// (0x000329fc) cell_popup_blid_pane_g1

0xc1d8,	// (0x00032a04) cell_popup_blid_pane_t1

0x6ccf,	// (0x0002d4fb) mup2_indicator_pane_ParamLimits

0x6ccf,	// (0x0002d4fb) mup2_indicator_pane

0x4db5,	// (0x0002b5e1) mup2_visualizer_osc_pane

0xbf0f,	// (0x0003273b) mup2_visualizer_spec_pane_ParamLimits

0xbf0f,	// (0x0003273b) mup2_visualizer_spec_pane

0x6e4f,	// (0x0002d67b) mup2_spec_half_pane

0x6e58,	// (0x0002d684) mup2_spec_half_pane_cp

0x6e60,	// (0x0002d68c) mup2_spec_bar_pane_ParamLimits

0x6e60,	// (0x0002d68c) mup2_spec_bar_pane

0xbe4c,	// (0x00032678) mup2_spec_bar_pane_g1

0xbe56,	// (0x00032682) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00035e51) mup2_spec_bar_pane_g

0x6e80,	// (0x0002d6ac) mup2_osc_middle_pane

0xbe68,	// (0x00032694) mup2_visualizer_osc_pane_g1

0x1e47,	// (0x00028673) popup_number_entry_window_t1_ParamLimits

0x1e5a,	// (0x00028686) popup_number_entry_window_t2_ParamLimits

0x1e6c,	// (0x00028698) popup_number_entry_window_t3_ParamLimits

0x1e7e,	// (0x000286aa) popup_number_entry_window_t5_ParamLimits

0x1e7e,	// (0x000286aa) popup_number_entry_window_t5

0xf0e7,	// (0x00035913) popup_number_entry_window_t_ParamLimits

0x1eb3,	// (0x000286df) text_title_cp2_ParamLimits

0xb321,	// (0x00031b4d) aid_hotspot_pointer_text2_pane

0xb347,	// (0x00031b73) main_viewer_pane_g9_ParamLimits

0xb347,	// (0x00031b73) main_viewer_pane_g9

0x3d43,	// (0x0002a56f) cale_month_pane_t1_ParamLimits

0x425a,	// (0x0002aa86) bg_cale_pane_ParamLimits

0x4272,	// (0x0002aa9e) list_cale_pane_ParamLimits

0x2bed,	// (0x00029419) listscroll_cale_day_pane_t1

0x4283,	// (0x0002aaaf) scroll_pane_cp09_ParamLimits

0x5137,	// (0x0002b963) main_mup_eq_pane_t1_ParamLimits

0x5137,	// (0x0002b963) main_mup_eq_pane_t1

0x5153,	// (0x0002b97f) main_mup_eq_pane_t2_ParamLimits

0x5153,	// (0x0002b97f) main_mup_eq_pane_t2

0x516f,	// (0x0002b99b) main_mup_eq_pane_t3_ParamLimits

0x516f,	// (0x0002b99b) main_mup_eq_pane_t3

0x518d,	// (0x0002b9b9) main_mup_eq_pane_t4_ParamLimits

0x518d,	// (0x0002b9b9) main_mup_eq_pane_t4

0x51ab,	// (0x0002b9d7) main_mup_eq_pane_t5_ParamLimits

0x51ab,	// (0x0002b9d7) main_mup_eq_pane_t5

0x51c9,	// (0x0002b9f5) main_mup_eq_pane_t6_ParamLimits

0x51c9,	// (0x0002b9f5) main_mup_eq_pane_t6

0x51df,	// (0x0002ba0b) main_mup_eq_pane_t7_ParamLimits

0x51df,	// (0x0002ba0b) main_mup_eq_pane_t7

0x51f5,	// (0x0002ba21) main_mup_eq_pane_t8_ParamLimits

0x51f5,	// (0x0002ba21) main_mup_eq_pane_t8

0x520b,	// (0x0002ba37) main_mup_eq_pane_t9_ParamLimits

0x520b,	// (0x0002ba37) main_mup_eq_pane_t9

0x5227,	// (0x0002ba53) main_mup_eq_pane_t10_ParamLimits

0x5227,	// (0x0002ba53) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x00035ca0) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x00035ca0) main_mup_eq_pane_t

0x52fc,	// (0x0002bb28) mup_equalizer_pane_cp5_ParamLimits

0x5314,	// (0x0002bb40) mup_equalizer_pane_cp6_ParamLimits

0x532c,	// (0x0002bb58) mup_equalizer_pane_cp7_ParamLimits

0x1b43,	// (0x0002836f) main_gallery_pane

0xbe71,	// (0x0003269d) smil2_volume_pane

0xbe79,	// (0x000326a5) smil_status_volume_pane_g1_ParamLimits

0xbe8c,	// (0x000326b8) smil_status_volume_pane_g2_ParamLimits

0xbe9f,	// (0x000326cb) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x00035e56) smil_status_volume_pane_g_ParamLimits

0xc0af,	// (0x000328db) bg_popup_window_pane_cp07_ParamLimits

0xc0bd,	// (0x000328e9) blid_firmament_pane

0x6e89,	// (0x0002d6b5) aid_size_cell_gallery_ParamLimits

0x6e89,	// (0x0002d6b5) aid_size_cell_gallery

0x6e9f,	// (0x0002d6cb) grid_gallery_pane_ParamLimits

0x6e9f,	// (0x0002d6cb) grid_gallery_pane

0x6eba,	// (0x0002d6e6) cell_gallery_pane_ParamLimits

0x6eba,	// (0x0002d6e6) cell_gallery_pane

0xc1e6,	// (0x00032a12) bg_cell_gallery_focus_pane_ParamLimits

0xc1e6,	// (0x00032a12) bg_cell_gallery_focus_pane

0xc1f8,	// (0x00032a24) cell_gallery_pane_g1_ParamLimits

0xc1f8,	// (0x00032a24) cell_gallery_pane_g1

0x6f0b,	// (0x0002d737) cell_gallery_pane_g2_ParamLimits

0x6f0b,	// (0x0002d737) cell_gallery_pane_g2

0x6f18,	// (0x0002d744) cell_gallery_pane_g3_ParamLimits

0x6f18,	// (0x0002d744) cell_gallery_pane_g3

0xc204,	// (0x00032a30) cell_gallery_pane_g4_ParamLimits

0xc204,	// (0x00032a30) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00035f04) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00035f04) cell_gallery_pane_g

0xc210,	// (0x00032a3c) bg_cell_gallery_focus_pane_g1

0xc218,	// (0x00032a44) bg_cell_gallery_focus_pane_g2

0xc220,	// (0x00032a4c) bg_cell_gallery_focus_pane_g3

0xc228,	// (0x00032a54) bg_cell_gallery_focus_pane_g4

0xc230,	// (0x00032a5c) bg_cell_gallery_focus_pane_g5

0xc238,	// (0x00032a64) bg_cell_gallery_focus_pane_g6

0xc240,	// (0x00032a6c) bg_cell_gallery_focus_pane_g7

0xc248,	// (0x00032a74) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00035f0d) bg_cell_gallery_focus_pane_g

0xc250,	// (0x00032a7c) aid_firma_cardinal

0xc264,	// (0x00032a90) blid_firmament_pane_t1

0xc27b,	// (0x00032aa7) blid_firmament_pane_t2

0xc292,	// (0x00032abe) blid_firmament_pane_t3

0xc2a9,	// (0x00032ad5) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00035f1e) blid_firmament_pane_t

0xc2c0,	// (0x00032aec) blid_sat_info_pane

0xc2d0,	// (0x00032afc) blid_sat_info_pane_g1

0xc2d0,	// (0x00032afc) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00035f27) blid_sat_info_pane_g

0xc2da,	// (0x00032b06) blid_sat_info_pane_t1

0xc2e8,	// (0x00032b14) smil2_volume_content_pane

0xc2f1,	// (0x00032b1d) smil2_volume_pane_g1

0xc2f9,	// (0x00032b25) smil2_volume_content_pane_g1

0xc302,	// (0x00032b2e) smil2_volume_content_pane_g2

0xc30b,	// (0x00032b37) smil2_volume_content_pane_g3

0xc314,	// (0x00032b40) smil2_volume_content_pane_g4

0xc31d,	// (0x00032b49) smil2_volume_content_pane_g5

0xc326,	// (0x00032b52) smil2_volume_content_pane_g6

0xc32f,	// (0x00032b5b) smil2_volume_content_pane_g7

0xc338,	// (0x00032b64) smil2_volume_content_pane_g8

0xc341,	// (0x00032b6d) smil2_volume_content_pane_g9

0xc34a,	// (0x00032b76) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00035f2c) smil2_volume_content_pane_g

0x2c5f,	// (0x0002948b) cale_week_day_heading_pane_t1_ParamLimits

0x2c73,	// (0x0002949f) cale_week_day_heading_pane_t2_ParamLimits

0x2c87,	// (0x000294b3) cale_week_day_heading_pane_t3_ParamLimits

0x2c9b,	// (0x000294c7) cale_week_day_heading_pane_t4_ParamLimits

0x2caf,	// (0x000294db) cale_week_day_heading_pane_t5_ParamLimits

0x2cc3,	// (0x000294ef) cale_week_day_heading_pane_t6_ParamLimits

0x2cd7,	// (0x00029503) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00035a18) cale_week_day_heading_pane_t_ParamLimits

0x2ceb,	// (0x00029517) bg_cale_side_pane_ParamLimits

0x09e1,	// (0x0002720d) cale_week_time_pane_t1_ParamLimits

0x09f9,	// (0x00027225) cale_week_time_pane_t2_ParamLimits

0x0a11,	// (0x0002723d) cale_week_time_pane_t3_ParamLimits

0x0a29,	// (0x00027255) cale_week_time_pane_t4_ParamLimits

0x0a41,	// (0x0002726d) cale_week_time_pane_t5_ParamLimits

0x0a59,	// (0x00027285) cale_week_time_pane_t6_ParamLimits

0x0a71,	// (0x0002729d) cale_week_time_pane_t7_ParamLimits

0x0a8d,	// (0x000272b9) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00035a27) cale_week_time_pane_t_ParamLimits

0x2cf9,	// (0x00029525) cell_cale_week_pane_g2_ParamLimits

0x2ceb,	// (0x00029517) bg_cale_side_pane_cp01_ParamLimits

0x4050,	// (0x0002a87c) cale_month_week_pane_t1_ParamLimits

0x4067,	// (0x0002a893) cale_month_week_pane_t2_ParamLimits

0x407e,	// (0x0002a8aa) cale_month_week_pane_t3_ParamLimits

0x4095,	// (0x0002a8c1) cale_month_week_pane_t4_ParamLimits

0x40ac,	// (0x0002a8d8) cale_month_week_pane_t5_ParamLimits

0x40c3,	// (0x0002a8ef) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00035b00) cale_month_week_pane_t_ParamLimits

0xb262,	// (0x00031a8e) cell_cale_month_pane_g1_ParamLimits

0x1b43,	// (0x0002836f) main_cale_event_viewer_pane

0x1b43,	// (0x0002836f) listscroll_cale_event_viewer_pane

0xc353,	// (0x00032b7f) list_cale_ev_pane

0xc35b,	// (0x00032b87) scroll_pane_cp023

0x6f25,	// (0x0002d751) field_cale_ev_pane_ParamLimits

0x6f25,	// (0x0002d751) field_cale_ev_pane

0xc367,	// (0x00032b93) field_cale_ev_content_pane_ParamLimits

0xc367,	// (0x00032b93) field_cale_ev_content_pane

0xc373,	// (0x00032b9f) field_cale_ev_pane_g1_ParamLimits

0xc373,	// (0x00032b9f) field_cale_ev_pane_g1

0xc37f,	// (0x00032bab) field_cale_ev_pane_g2_ParamLimits

0xc37f,	// (0x00032bab) field_cale_ev_pane_g2

0xc397,	// (0x00032bc3) field_cale_ev_pane_g3_ParamLimits

0xc397,	// (0x00032bc3) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x00035f41) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x00035f41) field_cale_ev_pane_g

0xc3af,	// (0x00032bdb) field_cale_ev_pane_t1_ParamLimits

0xc3af,	// (0x00032bdb) field_cale_ev_pane_t1

0x6f49,	// (0x0002d775) field_cale_ev_content_pane_t1_ParamLimits

0x6f49,	// (0x0002d775) field_cale_ev_content_pane_t1

0x5433,	// (0x0002bc5f) bg_button_pane_cp01

0x27d5,	// (0x00029001) listscroll_cale_week_pane_ParamLimits

0x2a1e,	// (0x0002924a) popup_toolbar_window_cp01

0x2bed,	// (0x00029419) listscroll_cale_week_pane_t1_ParamLimits

0x27d5,	// (0x00029001) listscroll_cale_day_pane_ParamLimits

0x4250,	// (0x0002aa7c) popup_toolbar_window_cp02

0x2bed,	// (0x00029419) listscroll_cale_day_pane_t1_ParamLimits

0x27d5,	// (0x00029001) main_cale_month_pane_ParamLimits

0x691b,	// (0x0002d147) popup_toolbar_window_cp03_ParamLimits

0x691b,	// (0x0002d147) popup_toolbar_window_cp03

0x5800,	// (0x0002c02c) main_image_pane_g2_ParamLimits

0x5800,	// (0x0002c02c) main_image_pane_g2

0x5811,	// (0x0002c03d) main_image_pane_g3_ParamLimits

0x5811,	// (0x0002c03d) main_image_pane_g3

0x0002,

0xf506,	// (0x00035d32) main_image_pane_g_ParamLimits

0xf506,	// (0x00035d32) main_image_pane_g

0x5822,	// (0x0002c04e) main_image_pane_t1_ParamLimits

0x5839,	// (0x0002c065) main_image_pane_t2_ParamLimits

0x5839,	// (0x0002c065) main_image_pane_t2

0x584b,	// (0x0002c077) main_image_pane_t3_ParamLimits

0x584b,	// (0x0002c077) main_image_pane_t3

0x5873,	// (0x0002c09f) main_image_pane_t4_ParamLimits

0x5873,	// (0x0002c09f) main_image_pane_t4

0x0003,

0xf50d,	// (0x00035d39) main_image_pane_t_ParamLimits

0xf50d,	// (0x00035d39) main_image_pane_t

0x5893,	// (0x0002c0bf) popup_image_details_window_cp01

0x589d,	// (0x0002c0c9) popup_toobar_trans_pane_cp01_ParamLimits

0x589d,	// (0x0002c0c9) popup_toobar_trans_pane_cp01

0x678e,	// (0x0002cfba) popup_image_details_window_ParamLimits

0x678e,	// (0x0002cfba) popup_image_details_window

0xbdbd,	// (0x000325e9) popup_image_focus_window

0x0b13,	// (0x0002733f) camera2_autofocus_pane_ParamLimits

0x0b13,	// (0x0002733f) camera2_autofocus_pane

0x1b43,	// (0x0002836f) bg_popup_sub_pane_cp06

0xc3c6,	// (0x00032bf2) popup_image_focus_window_g1

0xc3ce,	// (0x00032bfa) popup_image_focus_window_g2

0xc3d6,	// (0x00032c02) popup_image_focus_window_g3

0xc3de,	// (0x00032c0a) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00035f48) popup_image_focus_window_g

0xc3e6,	// (0x00032c12) popup_image_focus_window_t1

0xc3f4,	// (0x00032c20) popup_image_focus_window_t2

0xc404,	// (0x00032c30) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x00035f51) popup_image_focus_window_t

0xc412,	// (0x00032c3e) camera2_autofocus_pane_g1

0x1dbb,	// (0x000285e7) bg_tb_trans_pane_cp01

0xc420,	// (0x00032c4c) popup_image_details_window_g1

0xc433,	// (0x00032c5f) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00035f63) popup_image_details_window_g

0xc45c,	// (0x00032c88) popup_image_details_window_t1

0xc46e,	// (0x00032c9a) popup_image_details_window_t2

0xc487,	// (0x00032cb3) popup_image_details_window_t3

0xc49b,	// (0x00032cc7) popup_image_details_window_t4

0xc4b6,	// (0x00032ce2) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x00035f6a) popup_image_details_window_t

0x27c1,	// (0x00028fed) bg_calc_paper_pane_ParamLimits

0xb15e,	// (0x0003198a) grid_highlight_pane_cp013

0xb168,	// (0x00031994) list_calc_pane_ParamLimits

0xb17a,	// (0x000319a6) scroll_pane_cp024

0x27d5,	// (0x00029001) bg_calc_display_pane_ParamLimits

0x093a,	// (0x00027166) calc_display_pane_t1_ParamLimits

0x094c,	// (0x00027178) calc_display_pane_t2_ParamLimits

0xb182,	// (0x000319ae) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0003599a) calc_display_pane_t_ParamLimits

0x09b3,	// (0x000271df) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x000359b7) cell_calc_pane_g

0x09bc,	// (0x000271e8) cell_calc_pane_t1

0x2890,	// (0x000290bc) grid_highlight_pane_cp02_ParamLimits

0x28a6,	// (0x000290d2) toolbar_button_pane_cp01_ParamLimits

0x28a6,	// (0x000290d2) toolbar_button_pane_cp01

0x58df,	// (0x0002c10b) temp_image_control_pane_ParamLimits

0x58df,	// (0x0002c10b) temp_image_control_pane

0x1dbb,	// (0x000285e7) main_mp3_pane

0xc4d0,	// (0x00032cfc) temp_image_control_pane_g1_ParamLimits

0xc4d0,	// (0x00032cfc) temp_image_control_pane_g1

0xc4de,	// (0x00032d0a) temp_image_control_pane_g2_ParamLimits

0xc4de,	// (0x00032d0a) temp_image_control_pane_g2

0xc4f0,	// (0x00032d1c) temp_image_control_pane_g3_ParamLimits

0xc4f0,	// (0x00032d1c) temp_image_control_pane_g3

0x6f9a,	// (0x0002d7c6) temp_image_control_pane_g4_ParamLimits

0x6f9a,	// (0x0002d7c6) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x00035f75) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x00035f75) temp_image_control_pane_g

0xc4d0,	// (0x00032cfc) main_mp3_pane_g1

0x6fad,	// (0x0002d7d9) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00035f7e) main_mp3_pane_g

0xc533,	// (0x00032d5f) main_mp3_pane_t1

0x2e80,	// (0x000296ac) main_camera_pane_g8_ParamLimits

0x2e80,	// (0x000296ac) main_camera_pane_g8

0x3035,	// (0x00029861) main_video_pane_g7_ParamLimits

0x3035,	// (0x00029861) main_video_pane_g7

0xbef1,	// (0x0003271d) main_camera2_pane_t7_ParamLimits

0xbef1,	// (0x0003271d) main_camera2_pane_t7

0x3732,	// (0x00029f5e) scroll_pane_cp025_ParamLimits

0x3732,	// (0x00029f5e) scroll_pane_cp025

0x3746,	// (0x00029f72) scroll_pane_cp026_ParamLimits

0x3746,	// (0x00029f72) scroll_pane_cp026

0x3755,	// (0x00029f81) wml_content_pane_ParamLimits

0x1b43,	// (0x0002836f) main_touch_calib_pane

0x7075,	// (0x0002d8a1) main_touch_calib_pane_g1

0x7081,	// (0x0002d8ad) main_touch_calib_pane_g2

0x708d,	// (0x0002d8b9) main_touch_calib_pane_g3

0x7099,	// (0x0002d8c5) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x00035f9c) main_touch_calib_pane_g

0x70a5,	// (0x0002d8d1) main_touch_calib_pane_t1

0x70bf,	// (0x0002d8eb) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x00035fa5) main_touch_calib_pane_t

0x4c16,	// (0x0002b442) mup_progress_pane_cp02

0x4c4b,	// (0x0002b477) navi_pane_g1

0x4d06,	// (0x0002b532) navi_pane_mp_t3

0x1dbb,	// (0x000285e7) main_mp3_pane_ParamLimits

0x695d,	// (0x0002d189) navi_pane_ParamLimits

0xc4d0,	// (0x00032cfc) main_mp3_pane_g1_ParamLimits

0x6fad,	// (0x0002d7d9) main_mp3_pane_g2_ParamLimits

0x6fb9,	// (0x0002d7e5) main_mp3_pane_g3_ParamLimits

0x6fb9,	// (0x0002d7e5) main_mp3_pane_g3

0x6fc7,	// (0x0002d7f3) main_mp3_pane_g4_ParamLimits

0x6fc7,	// (0x0002d7f3) main_mp3_pane_g4

0xc500,	// (0x00032d2c) main_mp3_pane_g5_ParamLimits

0xc500,	// (0x00032d2c) main_mp3_pane_g5

0xc50e,	// (0x00032d3a) main_mp3_pane_g6_ParamLimits

0xc50e,	// (0x00032d3a) main_mp3_pane_g6

0xc51b,	// (0x00032d47) main_mp3_pane_g7_ParamLimits

0xc51b,	// (0x00032d47) main_mp3_pane_g7

0xc527,	// (0x00032d53) main_mp3_pane_g8_ParamLimits

0xc527,	// (0x00032d53) main_mp3_pane_g8

0xf752,	// (0x00035f7e) main_mp3_pane_g_ParamLimits

0x6fd3,	// (0x0002d7ff) main_mp3_pane_t2

0x6fe1,	// (0x0002d80d) main_mp3_pane_t3

0xc541,	// (0x00032d6d) main_mp3_pane_t4

0xc54f,	// (0x00032d7b) main_mp3_pane_t5

0x0005,

0xf763,	// (0x00035f8f) main_mp3_pane_t

0xc55d,	// (0x00032d89) mup_progress_pane_cp01

0x1b91,	// (0x000283bd) aid_zoom_text_secondary2

0xc353,	// (0x00032b7f) list_cale_ev2_pane

0xc35b,	// (0x00032b87) scroll_pane_cp023_ParamLimits

0x7117,	// (0x0002d943) field_cale_ev2_pane_ParamLimits

0x7117,	// (0x0002d943) field_cale_ev2_pane

0x713b,	// (0x0002d967) field_cale_ev2_pane_g1_ParamLimits

0x713b,	// (0x0002d967) field_cale_ev2_pane_g1

0x7147,	// (0x0002d973) field_cale_ev2_pane_g2_ParamLimits

0x7147,	// (0x0002d973) field_cale_ev2_pane_g2

0x715f,	// (0x0002d98b) field_cale_ev2_pane_g3_ParamLimits

0x715f,	// (0x0002d98b) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x00035fb0) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x00035fb0) field_cale_ev2_pane_g

0x7177,	// (0x0002d9a3) field_cale_ev2_pane_t1_ParamLimits

0x7177,	// (0x0002d9a3) field_cale_ev2_pane_t1

0x718e,	// (0x0002d9ba) field_cale_ev2_pane_t2_ParamLimits

0x718e,	// (0x0002d9ba) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x00035fb9) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x00035fb9) field_cale_ev2_pane_t

0x55b5,	// (0x0002bde1) main_postcard_pane_g5_ParamLimits

0x55b5,	// (0x0002bde1) main_postcard_pane_g5

0x55cb,	// (0x0002bdf7) main_postcard_pane_g6_ParamLimits

0x55cb,	// (0x0002bdf7) main_postcard_pane_g6

0x2dbb,	// (0x000295e7) camera2_autofocus_pane_cp_ParamLimits

0x2dbb,	// (0x000295e7) camera2_autofocus_pane_cp

0x1dbb,	// (0x000285e7) main_mup3_pane

0x71c3,	// (0x0002d9ef) main_mup3_pane_g1_ParamLimits

0x71c3,	// (0x0002d9ef) main_mup3_pane_g1

0x71e5,	// (0x0002da11) main_mup3_pane_g2_ParamLimits

0x71e5,	// (0x0002da11) main_mup3_pane_g2

0x7268,	// (0x0002da94) main_mup3_pane_g3_ParamLimits

0x7268,	// (0x0002da94) main_mup3_pane_g3

0x72b0,	// (0x0002dadc) main_mup3_pane_g4_ParamLimits

0x72b0,	// (0x0002dadc) main_mup3_pane_g4

0x72f8,	// (0x0002db24) main_mup3_pane_g5_ParamLimits

0x72f8,	// (0x0002db24) main_mup3_pane_g5

0x7340,	// (0x0002db6c) main_mup3_pane_g6_ParamLimits

0x7340,	// (0x0002db6c) main_mup3_pane_g6

0xc571,	// (0x00032d9d) main_mup3_pane_g7_ParamLimits

0xc571,	// (0x00032d9d) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x00035fc9) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x00035fc9) main_mup3_pane_g

0x73c0,	// (0x0002dbec) main_mup3_pane_t1_ParamLimits

0x73c0,	// (0x0002dbec) main_mup3_pane_t1

0x7432,	// (0x0002dc5e) main_mup3_pane_t2_ParamLimits

0x7432,	// (0x0002dc5e) main_mup3_pane_t2

0x7508,	// (0x0002dd34) main_mup3_pane_t4_ParamLimits

0x7508,	// (0x0002dd34) main_mup3_pane_t4

0x7566,	// (0x0002dd92) main_mup3_pane_t5_ParamLimits

0x7566,	// (0x0002dd92) main_mup3_pane_t5

0x7622,	// (0x0002de4e) main_mup3_pane_t6_ParamLimits

0x7622,	// (0x0002de4e) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x00035fda) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x00035fda) main_mup3_pane_t

0x76d8,	// (0x0002df04) mup3_progress_pane_ParamLimits

0x76d8,	// (0x0002df04) mup3_progress_pane

0x776c,	// (0x0002df98) popup_mup3_control_window_ParamLimits

0x776c,	// (0x0002df98) popup_mup3_control_window

0xc57f,	// (0x00032dab) popup_mup3_text_window

0x77a2,	// (0x0002dfce) mup3_progress_pane_t1

0x77b9,	// (0x0002dfe5) mup3_progress_pane_t2

0xc587,	// (0x00032db3) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x00035fe7) mup3_progress_pane_t

0xc59e,	// (0x00032dca) mup_progress_pane_cp03

0x1b43,	// (0x0002836f) bg_tb_trans_pane_cp04

0x77d0,	// (0x0002dffc) mup3_volume_pane

0x77d8,	// (0x0002e004) popup_mup3_control_window_g1

0x77e1,	// (0x0002e00d) mup3_volume_pane_g1

0x77ea,	// (0x0002e016) mup3_volume_pane_g2

0x77f3,	// (0x0002e01f) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x00035fee) mup3_volume_pane_g

0x1b43,	// (0x0002836f) bg_tb_trans_pane_cp03

0xc5ae,	// (0x00032dda) popup_mup3_text_window_g1

0xc5b6,	// (0x00032de2) popup_mup3_text_window_t1

0x2879,	// (0x000290a5) list_calc_item_pane_g1_ParamLimits

0xbfd9,	// (0x00032805) mup_volume_pane_cp_g1

0x70d9,	// (0x0002d905) main_touch_calib_pane_t3

0x70ed,	// (0x0002d919) main_touch_calib_pane_t4

0x7101,	// (0x0002d92d) main_touch_calib_pane_t5

0x1b4d,	// (0x00028379) aid_cell_size_toolbar2

0x1b55,	// (0x00028381) aid_popup3_width_pane

0x1b91,	// (0x000283bd) aid_zoom_text_msg_primary

0xb24c,	// (0x00031a78) vorec_t7

0x27e1,	// (0x0002900d) bg_calc_paper_pane_g1_ParamLimits

0x27ed,	// (0x00029019) bg_calc_paper_pane_g2_ParamLimits

0x27f9,	// (0x00029025) bg_calc_paper_pane_g3_ParamLimits

0x2805,	// (0x00029031) bg_calc_paper_pane_g4_ParamLimits

0x2811,	// (0x0002903d) bg_calc_paper_pane_g5_ParamLimits

0x281d,	// (0x00029049) bg_calc_paper_pane_g6_ParamLimits

0x2830,	// (0x0002905c) bg_calc_paper_pane_g7_ParamLimits

0x2843,	// (0x0002906f) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x000359a1) bg_calc_paper_pane_g_ParamLimits

0x2854,	// (0x00029080) calc_bg_paper_pane_g9_ParamLimits

0x2f29,	// (0x00029755) image_qvga_pane_ParamLimits

0x2f29,	// (0x00029755) image_qvga_pane

0x24ee,	// (0x00028d1a) bg_popup_sub_pane_cp04_ParamLimits

0x575e,	// (0x0002bf8a) popup_mup_playback_window_g1_ParamLimits

0x576a,	// (0x0002bf96) popup_mup_playback_window_t1_ParamLimits

0x577f,	// (0x0002bfab) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00035d2d) popup_mup_playback_window_t_ParamLimits

0x6bed,	// (0x0002d419) main_mup2_pane_g3_ParamLimits

0x6bed,	// (0x0002d419) main_mup2_pane_g3

0x33bf,	// (0x00029beb) popup_toolbar_window_cp04

0x5fa4,	// (0x0002c7d0) popup_call2_audio_second_window_g3_ParamLimits

0x5fa4,	// (0x0002c7d0) popup_call2_audio_second_window_g3

0xb3b7,	// (0x00031be3) popup_call2_audio_first_window_g4_ParamLimits

0xb3b7,	// (0x00031be3) popup_call2_audio_first_window_g4

0xba36,	// (0x00032262) popup_call2_audio_in_window_g4_ParamLimits

0xba36,	// (0x00032262) popup_call2_audio_in_window_g4

0x5794,	// (0x0002bfc0) aid_area_sk_bg_cut_ParamLimits

0x5794,	// (0x0002bfc0) aid_area_sk_bg_cut

0x57b2,	// (0x0002bfde) aid_area_sk_bg_cut_2_ParamLimits

0x57b2,	// (0x0002bfde) aid_area_sk_bg_cut_2

0x6efb,	// (0x0002d727) aid_placing_details_win

0x6f03,	// (0x0002d72f) aid_placing_details_win_2

0xc412,	// (0x00032c3e) camera2_autofocus_pane_g1_ParamLimits

0x1d5c,	// (0x00028588) popup_fixed_preview_cale_window_ParamLimits

0x1d5c,	// (0x00028588) popup_fixed_preview_cale_window

0x4dc6,	// (0x0002b5f2) navi_slider_pane_g3

0x4dcf,	// (0x0002b5fb) navi_slider_pane_g4

0x4dd8,	// (0x0002b604) navi_slider_pane_g5

0x4dc6,	// (0x0002b5f2) navi_slider_pane_g6

0xb308,	// (0x00031b34) navi_slider_pane_g7

0x534d,	// (0x0002bb79) mup_scale_pane_g3

0x5356,	// (0x0002bb82) mup_scale_pane_g4

0x535f,	// (0x0002bb8b) mup_scale_pane_g5

0x5368,	// (0x0002bb94) mup_scale_pane_g6

0x5371,	// (0x0002bb9d) mup_scale_pane_g7

0x4dc6,	// (0x0002b5f2) cams2_slider_pane_g3

0xc08e,	// (0x000328ba) cams2_slider_pane_g4

0xc096,	// (0x000328c2) cams2_slider_pane_g5

0x4dc6,	// (0x0002b5f2) cams2_slider_pane_g6

0xc09e,	// (0x000328ca) cams2_slider_pane_g7

0xc2d0,	// (0x00032afc) camera2_autofocus_pane_cp_g1

0xc5c4,	// (0x00032df0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5c4,	// (0x00032df0) bg_popup_preview_window_pane_cp02

0xc5d0,	// (0x00032dfc) list_fp_cale_pane_ParamLimits

0xc5d0,	// (0x00032dfc) list_fp_cale_pane

0xc5dc,	// (0x00032e08) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5dc,	// (0x00032e08) popup_fixed_preview_cale_window_t1

0x77fc,	// (0x0002e028) popup_fixed_preview_cale_window_t2_ParamLimits

0x77fc,	// (0x0002e028) popup_fixed_preview_cale_window_t2

0x7811,	// (0x0002e03d) popup_fixed_preview_cale_window_t3_ParamLimits

0x7811,	// (0x0002e03d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00035ff5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00035ff5) popup_fixed_preview_cale_window_t

0x7828,	// (0x0002e054) list_single_fp_cale_pane_ParamLimits

0x7828,	// (0x0002e054) list_single_fp_cale_pane

0xc5fa,	// (0x00032e26) list_single_fp_cale_pane_g1_ParamLimits

0xc5fa,	// (0x00032e26) list_single_fp_cale_pane_g1

0xc606,	// (0x00032e32) list_single_fp_cale_pane_g2_ParamLimits

0xc606,	// (0x00032e32) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00035ffc) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00035ffc) list_single_fp_cale_pane_g

0xc61f,	// (0x00032e4b) list_single_fp_cale_pane_t1_ParamLimits

0xc61f,	// (0x00032e4b) list_single_fp_cale_pane_t1

0xc631,	// (0x00032e5d) list_single_fp_cale_pane_t2_ParamLimits

0xc631,	// (0x00032e5d) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x00036003) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x00036003) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1b43,	// (0x0002836f) main_dialer_pane

0x7840,	// (0x0002e06c) aid_cell_size_keypad

0x784a,	// (0x0002e076) dialer_ne_pane

0x7854,	// (0x0002e080) grid_dialer_command_1_pane

0x785c,	// (0x0002e088) grid_dialer_command_2_pane

0x7864,	// (0x0002e090) grid_dialer_keypad_pane

0x7878,	// (0x0002e0a4) bg_popup_call_pane_cp06_ParamLimits

0x7878,	// (0x0002e0a4) bg_popup_call_pane_cp06

0x7884,	// (0x0002e0b0) dialer_ne_clear_pane_ParamLimits

0x7884,	// (0x0002e0b0) dialer_ne_clear_pane

0xc664,	// (0x00032e90) dialer_ne_pane_g1

0xc66c,	// (0x00032e98) dialer_ne_pane_t1_ParamLimits

0xc66c,	// (0x00032e98) dialer_ne_pane_t1

0x7890,	// (0x0002e0bc) dialer_ne_pane_t2_ParamLimits

0x7890,	// (0x0002e0bc) dialer_ne_pane_t2

0x78ba,	// (0x0002e0e6) dialer_ne_pane_t3_ParamLimits

0x78ba,	// (0x0002e0e6) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00036008) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00036008) dialer_ne_pane_t

0x78ea,	// (0x0002e116) dialer_ne_pane_t3_copy1_ParamLimits

0x78ea,	// (0x0002e116) dialer_ne_pane_t3_copy1

0x7919,	// (0x0002e145) cell_dialer_keypad_pane_ParamLimits

0x7919,	// (0x0002e145) cell_dialer_keypad_pane

0x7930,	// (0x0002e15c) cell_dialer_command_1_pane_ParamLimits

0x7930,	// (0x0002e15c) cell_dialer_command_1_pane

0x7946,	// (0x0002e172) cell_dialer_command_2_pane_ParamLimits

0x7946,	// (0x0002e172) cell_dialer_command_2_pane

0xc67e,	// (0x00032eaa) bg_button_pane_cp02_ParamLimits

0xc67e,	// (0x00032eaa) bg_button_pane_cp02

0x7955,	// (0x0002e181) cell_dialer_keypad_pane_g1_ParamLimits

0x7955,	// (0x0002e181) cell_dialer_keypad_pane_g1

0xc67e,	// (0x00032eaa) bg_button_pane_cp03_ParamLimits

0xc67e,	// (0x00032eaa) bg_button_pane_cp03

0x796a,	// (0x0002e196) cell_dialer_command_1_pane_g1_ParamLimits

0x796a,	// (0x0002e196) cell_dialer_command_1_pane_g1

0xc68a,	// (0x00032eb6) bg_button_pane_cp04

0x797e,	// (0x0002e1aa) cell_dialer_command_2_pane_g1

0x4db5,	// (0x0002b5e1) bg_button_pane_cp06

0xc692,	// (0x00032ebe) dialer_ne_clear_pane_g1

0x4c57,	// (0x0002b483) navi_pane_g2

0x4c85,	// (0x0002b4b1) navi_pane_g3

0x0002,

0xf404,	// (0x00035c30) navi_pane_g

0x4d14,	// (0x0002b540) navi_pane_mv_g2

0x4d3b,	// (0x0002b567) navi_pane_mv_g5

0x4d43,	// (0x0002b56f) navi_pane_mv_t1

0x27d5,	// (0x00029001) main_clock2_pane

0x79b8,	// (0x0002e1e4) main_clock2_list_pane_ParamLimits

0x79b8,	// (0x0002e1e4) main_clock2_list_pane

0x79f2,	// (0x0002e21e) main_clock2_pane_t1_ParamLimits

0x79f2,	// (0x0002e21e) main_clock2_pane_t1

0x7a2e,	// (0x0002e25a) main_clock2_pane_t2_ParamLimits

0x7a2e,	// (0x0002e25a) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0003600f) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0003600f) main_clock2_pane_t

0x7abd,	// (0x0002e2e9) popup_clock_analogue_window_cp03_ParamLimits

0x7abd,	// (0x0002e2e9) popup_clock_analogue_window_cp03

0x7ae4,	// (0x0002e310) popup_clock_digital_window_cp02_ParamLimits

0x7ae4,	// (0x0002e310) popup_clock_digital_window_cp02

0x7b5f,	// (0x0002e38b) main_clock2_list_single_pane_ParamLimits

0x7b5f,	// (0x0002e38b) main_clock2_list_single_pane

0x4db5,	// (0x0002b5e1) list_highlight_pane_cp05

0xc69a,	// (0x00032ec6) main_clock2_list_single_pane_t1

0x33bf,	// (0x00029beb) popup_toolbar_window_cp04_ParamLimits

0x6f6a,	// (0x0002d796) camera2_autofocus_pane_g2_ParamLimits

0x6f6a,	// (0x0002d796) camera2_autofocus_pane_g2

0x6f76,	// (0x0002d7a2) camera2_autofocus_pane_g3_ParamLimits

0x6f76,	// (0x0002d7a2) camera2_autofocus_pane_g3

0x6f82,	// (0x0002d7ae) camera2_autofocus_pane_g4_ParamLimits

0x6f82,	// (0x0002d7ae) camera2_autofocus_pane_g4

0x6f8e,	// (0x0002d7ba) camera2_autofocus_pane_g5_ParamLimits

0x6f8e,	// (0x0002d7ba) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00035f58) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00035f58) camera2_autofocus_pane_g

0x71a3,	// (0x0002d9cf) camera2_autofocus_pane_cp_g2

0x71ab,	// (0x0002d9d7) camera2_autofocus_pane_cp_g3

0x71b3,	// (0x0002d9df) camera2_autofocus_pane_cp_g4

0x71bb,	// (0x0002d9e7) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x00035fbe) camera2_autofocus_pane_cp_g

0x7870,	// (0x0002e09c) popup_dialer_spcha_window

0x1b43,	// (0x0002836f) bg_popup_sub_pane_cp07

0xc6a8,	// (0x00032ed4) list_spcha_pane

0xc6b0,	// (0x00032edc) list_single_spcha_pane_ParamLimits

0xc6b0,	// (0x00032edc) list_single_spcha_pane

0x1b43,	// (0x0002836f) list_highlight_pane_cp06

0xc6c1,	// (0x00032eed) list_single_spcha_pane_t1

0xb7e0,	// (0x0003200c) popup_call2_audio_out_window_g4_ParamLimits

0xb7e0,	// (0x0003200c) popup_call2_audio_out_window_g4

0x1b43,	// (0x0002836f) main_imed2_pane

0xbdc7,	// (0x000325f3) popup_imed_adjust2_window

0x67a6,	// (0x0002cfd2) popup_imed_trans_window_ParamLimits

0x67a6,	// (0x0002cfd2) popup_imed_trans_window

0xc108,	// (0x00032934) popup_blid_sat_info2_window_t1

0xc116,	// (0x00032942) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00035eed) popup_blid_sat_info2_window_t

0x7b93,	// (0x0002e3bf) aid_size_cell_colour_35

0x7bb3,	// (0x0002e3df) aid_size_cell_colour_112

0x7bd3,	// (0x0002e3ff) aid_size_cell_effect

0xbd9b,	// (0x000325c7) bg_tb_trans_pane_cp02

0x43b9,	// (0x0002abe5) heading_imed_pane

0x7bf3,	// (0x0002e41f) listscroll_imed_pane

0xc6cf,	// (0x00032efb) heading_imed_pane_g1

0xc6d7,	// (0x00032f03) heading_imed_pane_t1

0xc6e5,	// (0x00032f11) grid_imed_colour_35_pane_ParamLimits

0xc6e5,	// (0x00032f11) grid_imed_colour_35_pane

0x7bff,	// (0x0002e42b) grid_imed_effect_pane

0xc701,	// (0x00032f2d) list_imed_aspect_pane

0x7c16,	// (0x0002e442) scroll_pane_cp027_ParamLimits

0x7c16,	// (0x0002e442) scroll_pane_cp027

0x7c27,	// (0x0002e453) cell_imed_effect_pane_ParamLimits

0x7c27,	// (0x0002e453) cell_imed_effect_pane

0xc709,	// (0x00032f35) cell_imed_colour_pane_ParamLimits

0xc709,	// (0x00032f35) cell_imed_colour_pane

0xc753,	// (0x00032f7f) cell_imed_colour_pane_g1_ParamLimits

0xc753,	// (0x00032f7f) cell_imed_colour_pane_g1

0xc764,	// (0x00032f90) hgihlgiht_grid_pane_cp016_ParamLimits

0xc764,	// (0x00032f90) hgihlgiht_grid_pane_cp016

0x7c4c,	// (0x0002e478) cell_imed_effect_pane_g1

0x7c54,	// (0x0002e480) grid_highlight_pane_cp017

0xc775,	// (0x00032fa1) list_imed_single_pane_ParamLimits

0xc775,	// (0x00032fa1) list_imed_single_pane

0x1b43,	// (0x0002836f) list_highlight_pane_cp07

0xc789,	// (0x00032fb5) list_imed_aspect_pane_comp1_t1

0xbd9b,	// (0x000325c7) bg_tb_trans_pane_cp05

0xc7ab,	// (0x00032fd7) popup_imed_adjust2_window_g1

0xc7d2,	// (0x00032ffe) popup_imed_adjust2_window_t1

0xc7ea,	// (0x00033016) slider_imed_adjust_pane

0xc7fe,	// (0x0003302a) slider_imed_adjust_pane_g1

0xc80e,	// (0x0003303a) slider_imed_adjust_pane_g2

0xc81e,	// (0x0003304a) slider_imed_adjust_pane_g3

0xc82f,	// (0x0003305b) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0003602c) slider_imed_adjust_pane_g

0x7c5d,	// (0x0002e489) aid_size_cell_clipart2

0x7c69,	// (0x0002e495) grid_imed_clipart_pane

0xc840,	// (0x0003306c) scroll_pane_cp031

0x7c73,	// (0x0002e49f) cell_imed_clipart_pane_ParamLimits

0x7c73,	// (0x0002e49f) cell_imed_clipart_pane

0x7c90,	// (0x0002e4bc) cell_imed_clipart_pane_g1

0x1b43,	// (0x0002836f) grid_highlight_pane_cp014

0x79cd,	// (0x0002e1f9) main_clock2_pane_g1_ParamLimits

0x79cd,	// (0x0002e1f9) main_clock2_pane_g1

0x7b06,	// (0x0002e332) aid_call2_pane_cp10

0x7b18,	// (0x0002e344) aid_call_pane_cp10

0x4b4f,	// (0x0002b37b) popup_clock_analogue_window_cp10_g1

0x4b4f,	// (0x0002b37b) popup_clock_analogue_window_cp10_g2

0x7b2a,	// (0x0002e356) popup_clock_analogue_window_cp10_g3

0x7b2a,	// (0x0002e356) popup_clock_analogue_window_cp10_g4

0x4b4f,	// (0x0002b37b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0003601a) popup_clock_analogue_window_cp10_g

0x7b40,	// (0x0002e36c) popup_clock_analogue_window_cp10_t1

0x0f7b,	// (0x000277a7) clock_digital_number_pane_cp10_ParamLimits

0x0f7b,	// (0x000277a7) clock_digital_number_pane_cp10

0x0f95,	// (0x000277c1) clock_digital_number_pane_cp11_ParamLimits

0x0f95,	// (0x000277c1) clock_digital_number_pane_cp11

0x0faf,	// (0x000277db) clock_digital_number_pane_cp12_ParamLimits

0x0faf,	// (0x000277db) clock_digital_number_pane_cp12

0x0fc9,	// (0x000277f5) clock_digital_number_pane_cp13_ParamLimits

0x0fc9,	// (0x000277f5) clock_digital_number_pane_cp13

0x0fe3,	// (0x0002780f) clock_digital_separator_pane_cp10_ParamLimits

0x0fe3,	// (0x0002780f) clock_digital_separator_pane_cp10

0x7b71,	// (0x0002e39d) popup_clock_digital_window_cp02_t1_ParamLimits

0x7b71,	// (0x0002e39d) popup_clock_digital_window_cp02_t1

0x24e6,	// (0x00028d12) clock_digital_number_pane_cp10_g1

0x24e6,	// (0x00028d12) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00036035) clock_digital_number_pane_cp10_g

0x24e6,	// (0x00028d12) clock_digital_separator_pane_cp10_g1

0x24e6,	// (0x00028d12) clock_digital_separator_pane_g2_cp10

0x4d85,	// (0x0002b5b1) navi_pane_vded_g4

0x4d8e,	// (0x0002b5ba) navi_pane_vded_g5

0x4d97,	// (0x0002b5c3) navi_pane_vded_t1

0x1b43,	// (0x0002836f) main_vded_pane

0x7c99,	// (0x0002e4c5) main_vded_pane_g1

0x7ca5,	// (0x0002e4d1) main_vded_pane_g2

0x7cb1,	// (0x0002e4dd) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0003603a) main_vded_pane_g

0x7cbd,	// (0x0002e4e9) main_vded_pane_t1

0x7ccb,	// (0x0002e4f7) main_vded_pane_t2

0x0001,

0xf815,	// (0x00036041) main_vded_pane_t

0x7cd9,	// (0x0002e505) vded_slider_pane

0x7ce3,	// (0x0002e50f) vded_video_pane

0xc848,	// (0x00033074) vded_video_pane_g1

0x7cef,	// (0x0002e51b) vded_video_pane_g2

0xc2d0,	// (0x00032afc) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00036046) vded_video_pane_g

0xc852,	// (0x0003307e) vded_slider_pane_g1

0xbfd9,	// (0x00032805) vded_slider_pane_g2

0xc85b,	// (0x00033087) vded_slider_pane_g3

0xc864,	// (0x00033090) vded_slider_pane_g4

0xc86d,	// (0x00033099) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0003604d) vded_slider_pane_g

0x7756,	// (0x0002df82) mup3_rocker_pane_ParamLimits

0x7756,	// (0x0002df82) mup3_rocker_pane

0x7cf8,	// (0x0002e524) mup3_control_keys_pane_g1

0x7d00,	// (0x0002e52c) mup3_control_keys_pane_g2

0x7d08,	// (0x0002e534) mup3_control_keys_pane_g3

0x7d10,	// (0x0002e53c) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00036058) mup3_control_keys_pane_g

0x1d9d,	// (0x000285c9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1d9d,	// (0x000285c9) popup_toolbar2_fixed_window_cp01

0x778c,	// (0x0002dfb8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x778c,	// (0x0002dfb8) popup_toolbar2_fixed_window_cp02

0x6116,	// (0x0002c942) popup_call2_audio_second_window_t4_ParamLimits

0x6116,	// (0x0002c942) popup_call2_audio_second_window_t4

0xb64d,	// (0x00031e79) popup_call2_audio_first_window_t6_ParamLimits

0xb64d,	// (0x00031e79) popup_call2_audio_first_window_t6

0xb8e3,	// (0x0003210f) popup_call2_audio_out_window_t6_ParamLimits

0xb8e3,	// (0x0003210f) popup_call2_audio_out_window_t6

0x1b43,	// (0x0002836f) main_vitu_pane

0x7d20,	// (0x0002e54c) aid_size_cell_itu_ParamLimits

0x7d20,	// (0x0002e54c) aid_size_cell_itu

0x1dbb,	// (0x000285e7) bg_popup_window_pane_cp08_ParamLimits

0x1dbb,	// (0x000285e7) bg_popup_window_pane_cp08

0x7d36,	// (0x0002e562) field_vitu_entry_pane_ParamLimits

0x7d36,	// (0x0002e562) field_vitu_entry_pane

0x7d4d,	// (0x0002e579) grid_vitu_function_pane_ParamLimits

0x7d4d,	// (0x0002e579) grid_vitu_function_pane

0x7d68,	// (0x0002e594) grid_vitu_itu_pane_ParamLimits

0x7d68,	// (0x0002e594) grid_vitu_itu_pane

0x7d84,	// (0x0002e5b0) cell_vitu_itu_pane_ParamLimits

0x7d84,	// (0x0002e5b0) cell_vitu_itu_pane

0x7daa,	// (0x0002e5d6) cell_vitu_function_pane_ParamLimits

0x7daa,	// (0x0002e5d6) cell_vitu_function_pane

0x1dbb,	// (0x000285e7) bg_popup_sub_pane_cp08_ParamLimits

0x1dbb,	// (0x000285e7) bg_popup_sub_pane_cp08

0x7dc5,	// (0x0002e5f1) field_vitu_entry_pane_t1_ParamLimits

0x7dc5,	// (0x0002e5f1) field_vitu_entry_pane_t1

0xc88e,	// (0x000330ba) field_vitu_entry_pane_t2_ParamLimits

0xc88e,	// (0x000330ba) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00036066) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00036066) field_vitu_entry_pane_t

0xc8ab,	// (0x000330d7) bg_button_pane_cp05_ParamLimits

0xc8ab,	// (0x000330d7) bg_button_pane_cp05

0x7de5,	// (0x0002e611) cell_vitu_itu_pane_g1

0x7dfd,	// (0x0002e629) cell_vitu_itu_pane_t1_ParamLimits

0x7dfd,	// (0x0002e629) cell_vitu_itu_pane_t1

0x7e0f,	// (0x0002e63b) cell_vitu_itu_pane_t2_ParamLimits

0x7e0f,	// (0x0002e63b) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0003606b) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0003606b) cell_vitu_itu_pane_t

0xc8b9,	// (0x000330e5) bg_button_pane_cp07

0x7e44,	// (0x0002e670) cell_vitu_function_pane_g1

0xb156,	// (0x00031982) main_calc_pane_g1

0x1b85,	// (0x000283b1) aid_visual_content_pane

0x1b43,	// (0x0002836f) main_vradio_pane

0x7e4d,	// (0x0002e679) main_vradio_pane_g1_ParamLimits

0x7e4d,	// (0x0002e679) main_vradio_pane_g1

0xc8c3,	// (0x000330ef) main_vradio_pane_g2_ParamLimits

0xc8c3,	// (0x000330ef) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00036072) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00036072) main_vradio_pane_g

0x7e64,	// (0x0002e690) main_vradio_pane_t1_ParamLimits

0x7e64,	// (0x0002e690) main_vradio_pane_t1

0x7e79,	// (0x0002e6a5) main_vradio_pane_t2_ParamLimits

0x7e79,	// (0x0002e6a5) main_vradio_pane_t2

0xc8d0,	// (0x000330fc) main_vradio_pane_t3_ParamLimits

0xc8d0,	// (0x000330fc) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x00036077) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x00036077) main_vradio_pane_t

0x7e8e,	// (0x0002e6ba) vradio_rocker_control_pane_ParamLimits

0x7e8e,	// (0x0002e6ba) vradio_rocker_control_pane

0x7ea0,	// (0x0002e6cc) vradio_station_info_pane_ParamLimits

0x7ea0,	// (0x0002e6cc) vradio_station_info_pane

0xc8e4,	// (0x00033110) vradio_frequency_info_pane_ParamLimits

0xc8e4,	// (0x00033110) vradio_frequency_info_pane

0xc2d0,	// (0x00032afc) vradio_station_info_pane_g1

0xc8f3,	// (0x0003311f) vradio_station_info_pane_t1_ParamLimits

0xc8f3,	// (0x0003311f) vradio_station_info_pane_t1

0xc915,	// (0x00033141) vradio_station_info_pane_t2_ParamLimits

0xc915,	// (0x00033141) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0003607e) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0003607e) vradio_station_info_pane_t

0xc927,	// (0x00033153) vradio_tuning_pane

0xc92f,	// (0x0003315b) vradio_rocker_control_pane_g1

0xc937,	// (0x00033163) vradio_rocker_control_pane_g2

0xc93f,	// (0x0003316b) vradio_rocker_control_pane_g3

0xc947,	// (0x00033173) vradio_rocker_control_pane_g4

0xc94f,	// (0x0003317b) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00036083) vradio_rocker_control_pane_g

0x7eb0,	// (0x0002e6dc) vradio_frequency_info_pane_g1

0xc957,	// (0x00033183) vradio_frequency_info_pane_t1_ParamLimits

0xc957,	// (0x00033183) vradio_frequency_info_pane_t1

0x7eba,	// (0x0002e6e6) vradio_tuning_pane_g1

0x7ec5,	// (0x0002e6f1) vradio_tuning_pane_t1

0x1bda,	// (0x00028406) area_side_right_pane_ParamLimits

0x1bda,	// (0x00028406) area_side_right_pane

0xbd62,	// (0x0003258e) status_small_pane_g1

0xbd6a,	// (0x00032596) status_small_pane_g2

0xbd73,	// (0x0003259f) status_small_pane_g3

0xbd7c,	// (0x000325a8) status_small_pane_g4

0x0003,

0xf617,	// (0x00035e43) status_small_pane_g

0xbd85,	// (0x000325b1) status_small_pane_t1

0x1b43,	// (0x0002836f) main_video3_pane

0xc96b,	// (0x00033197) cams_zoom_vslider_pane

0xc973,	// (0x0003319f) image3_wide_pane_ParamLimits

0xc973,	// (0x0003319f) image3_wide_pane

0xc98d,	// (0x000331b9) image3_wide_small_pane

0xc999,	// (0x000331c5) main_video3_pane_g1_ParamLimits

0xc999,	// (0x000331c5) main_video3_pane_g1

0xc9b5,	// (0x000331e1) main_video3_pane_g2_ParamLimits

0xc9b5,	// (0x000331e1) main_video3_pane_g2

0x0001,

0xf862,	// (0x0003608e) main_video3_pane_g_ParamLimits

0xf862,	// (0x0003608e) main_video3_pane_g

0xc9d1,	// (0x000331fd) main_video3_pane_t1_ParamLimits

0xc9d1,	// (0x000331fd) main_video3_pane_t1

0xc9fc,	// (0x00033228) main_video3_pane_t2_ParamLimits

0xc9fc,	// (0x00033228) main_video3_pane_t2

0xca29,	// (0x00033255) main_video3_pane_t3_ParamLimits

0xca29,	// (0x00033255) main_video3_pane_t3

0x0002,

0xf867,	// (0x00036093) main_video3_pane_t_ParamLimits

0xf867,	// (0x00036093) main_video3_pane_t

0xca56,	// (0x00033282) cams_zoom_vslider_pane_g1

0xca5f,	// (0x0003328b) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0003609a) cams_zoom_vslider_pane_g

0xca67,	// (0x00033293) small_slider_vertical_pane

0xc2d0,	// (0x00032afc) small_slider_vertical_pane_g1

0xc2d0,	// (0x00032afc) small_slider_vertical_pane_g2

0xca6f,	// (0x0003329b) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0003609f) small_slider_vertical_pane_g

0x1b43,	// (0x0002836f) main_hwr_training_pane

0xca78,	// (0x000332a4) hwr_training_instruct_pane_ParamLimits

0xca78,	// (0x000332a4) hwr_training_instruct_pane

0x7ed4,	// (0x0002e700) hwr_training_navi_pane_ParamLimits

0x7ed4,	// (0x0002e700) hwr_training_navi_pane

0x7ef3,	// (0x0002e71f) hwr_training_write_pane_ParamLimits

0x7ef3,	// (0x0002e71f) hwr_training_write_pane

0x1b43,	// (0x0002836f) bg_frame_shadow_pane

0xcaaf,	// (0x000332db) hwr_training_write_pane_g1

0xcab7,	// (0x000332e3) hwr_training_write_pane_g2

0xcabf,	// (0x000332eb) hwr_training_write_pane_g3

0xcac7,	// (0x000332f3) hwr_training_write_pane_g4

0xcacf,	// (0x000332fb) hwr_training_write_pane_g5

0xcad7,	// (0x00033303) hwr_training_write_pane_g6

0xcadf,	// (0x0003330b) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x000360a6) hwr_training_write_pane_g

0xcae7,	// (0x00033313) hwr_training_navi_pane_g1_ParamLimits

0xcae7,	// (0x00033313) hwr_training_navi_pane_g1

0xcaf9,	// (0x00033325) hwr_training_navi_pane_g2_ParamLimits

0xcaf9,	// (0x00033325) hwr_training_navi_pane_g2

0xcb0b,	// (0x00033337) hwr_training_navi_pane_g3_ParamLimits

0xcb0b,	// (0x00033337) hwr_training_navi_pane_g3

0xcb1b,	// (0x00033347) hwr_training_navi_pane_g4_ParamLimits

0xcb1b,	// (0x00033347) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x000360b5) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x000360b5) hwr_training_navi_pane_g

0xcb28,	// (0x00033354) hwr_training_navi_pane_t1

0x7f2e,	// (0x0002e75a) list_single_hwr_training_instruct_pane_ParamLimits

0x7f2e,	// (0x0002e75a) list_single_hwr_training_instruct_pane

0xcb36,	// (0x00033362) list_single_hwr_training_instruct_pane_t1

0xc210,	// (0x00032a3c) bg_frame_shadow_pane_g1

0xcb45,	// (0x00033371) bg_frame_shadow_pane_g2

0xcb4d,	// (0x00033379) bg_frame_shadow_pane_g3

0xcb55,	// (0x00033381) bg_frame_shadow_pane_g4

0xcb5d,	// (0x00033389) bg_frame_shadow_pane_g5

0xcb65,	// (0x00033391) bg_frame_shadow_pane_g6

0xcb6d,	// (0x00033399) bg_frame_shadow_pane_g7

0x2976,	// (0x000291a2) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x000360c0) bg_frame_shadow_pane_g

0x1b43,	// (0x0002836f) main_video_tele_dialer_pane

0x100a,	// (0x00027836) aid_size_cell_video_keypad_ParamLimits

0x100a,	// (0x00027836) aid_size_cell_video_keypad

0x1024,	// (0x00027850) grid_video_dialer_keypad_pane_ParamLimits

0x1024,	// (0x00027850) grid_video_dialer_keypad_pane

0x1070,	// (0x0002789c) video_down_pane_cp_ParamLimits

0x1070,	// (0x0002789c) video_down_pane_cp

0x1084,	// (0x000278b0) cell_video_dialer_keypad_pane_ParamLimits

0x1084,	// (0x000278b0) cell_video_dialer_keypad_pane

0xcb75,	// (0x000333a1) bg_button_pane_cp08_ParamLimits

0xcb75,	// (0x000333a1) bg_button_pane_cp08

0x7f66,	// (0x0002e792) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7f66,	// (0x0002e792) cell_video_dialer_keypad_pane_g1

0x7740,	// (0x0002df6c) mup3_rocker2_pane_ParamLimits

0x7740,	// (0x0002df6c) mup3_rocker2_pane

0xc2d0,	// (0x00032afc) mup3_rocker2_pane_g1

0x6673,	// (0x0002ce9f) main_dialer2_pane

0x1b43,	// (0x0002836f) main_mp4_pane

0xcb89,	// (0x000333b5) main_mp4_pane_g1_ParamLimits

0xcb89,	// (0x000333b5) main_mp4_pane_g1

0xcb89,	// (0x000333b5) main_mp4_pane_g2_ParamLimits

0xcb89,	// (0x000333b5) main_mp4_pane_g2

0x10aa,	// (0x000278d6) main_mp4_pane_g3_ParamLimits

0x10aa,	// (0x000278d6) main_mp4_pane_g3

0xcb97,	// (0x000333c3) main_mp4_pane_g4_ParamLimits

0xcb97,	// (0x000333c3) main_mp4_pane_g4

0xcbbf,	// (0x000333eb) main_mp4_pane_g5_ParamLimits

0xcbbf,	// (0x000333eb) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x000360e0) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x000360e0) main_mp4_pane_g

0xcc0f,	// (0x0003343b) main_mp4_pane_t1_ParamLimits

0xcc0f,	// (0x0003343b) main_mp4_pane_t1

0xcc6b,	// (0x00033497) main_mp4_pane_t2_ParamLimits

0xcc6b,	// (0x00033497) main_mp4_pane_t2

0xccbd,	// (0x000334e9) main_mp4_pane_t3_ParamLimits

0xccbd,	// (0x000334e9) main_mp4_pane_t3

0xccdd,	// (0x00033509) main_mp4_pane_t4_ParamLimits

0xccdd,	// (0x00033509) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x000360ed) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x000360ed) main_mp4_pane_t

0xcd1d,	// (0x00033549) mp4_progress_pane_ParamLimits

0xcd1d,	// (0x00033549) mp4_progress_pane

0xcd67,	// (0x00033593) mp4_rocker_pane_ParamLimits

0xcd67,	// (0x00033593) mp4_rocker_pane

0xcd91,	// (0x000335bd) mp4_progress_pane_t1

0xcdaa,	// (0x000335d6) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x000360f6) mp4_progress_pane_t

0xcdc3,	// (0x000335ef) mup_progress_pane_cp04

0xcdcf,	// (0x000335fb) mp4_rocker_pane_g1

0x10f4,	// (0x00027920) aid_cell_size_keypad2_ParamLimits

0x10f4,	// (0x00027920) aid_cell_size_keypad2

0x110a,	// (0x00027936) dialer2_ne_pane_ParamLimits

0x110a,	// (0x00027936) dialer2_ne_pane

0x1122,	// (0x0002794e) grid_dialer2_keypad_pane_ParamLimits

0x1122,	// (0x0002794e) grid_dialer2_keypad_pane

0xc0af,	// (0x000328db) bg_popup_call_pane_cp07_ParamLimits

0xc0af,	// (0x000328db) bg_popup_call_pane_cp07

0x7fa1,	// (0x0002e7cd) dialer2_ne_pane_t1_ParamLimits

0x7fa1,	// (0x0002e7cd) dialer2_ne_pane_t1

0x113e,	// (0x0002796a) cell_dialer2_keypad_pane_ParamLimits

0x113e,	// (0x0002796a) cell_dialer2_keypad_pane

0xcdeb,	// (0x00033617) bg_button_pane_pane_cp04_ParamLimits

0xcdeb,	// (0x00033617) bg_button_pane_pane_cp04

0x7fe1,	// (0x0002e80d) cell_dialer2_keypad_pane_g1_ParamLimits

0x7fe1,	// (0x0002e80d) cell_dialer2_keypad_pane_g1

0x3294,	// (0x00029ac0) aid_placing_vt_set_content_ParamLimits

0x3294,	// (0x00029ac0) aid_placing_vt_set_content

0x32b8,	// (0x00029ae4) aid_placing_vt_set_title_ParamLimits

0x32b8,	// (0x00029ae4) aid_placing_vt_set_title

0x1b43,	// (0x0002836f) main_image3_pane

0x11c2,	// (0x000279ee) area_side_right_pane_cp01_ParamLimits

0x11c2,	// (0x000279ee) area_side_right_pane_cp01

0xcb89,	// (0x000333b5) main_image3_pane_g1_ParamLimits

0xcb89,	// (0x000333b5) main_image3_pane_g1

0x11db,	// (0x00027a07) main_image3_pane_g2_ParamLimits

0x11db,	// (0x00027a07) main_image3_pane_g2

0x1203,	// (0x00027a2f) main_image3_pane_g3_ParamLimits

0x1203,	// (0x00027a2f) main_image3_pane_g3

0x122d,	// (0x00027a59) main_image3_pane_g4_ParamLimits

0x122d,	// (0x00027a59) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00036105) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00036105) main_image3_pane_g

0x1257,	// (0x00027a83) main_image3_pane_t1_ParamLimits

0x1257,	// (0x00027a83) main_image3_pane_t1

0x12af,	// (0x00027adb) main_image3_pane_t2_ParamLimits

0x12af,	// (0x00027adb) main_image3_pane_t2

0x1301,	// (0x00027b2d) main_image3_pane_t3_ParamLimits

0x1301,	// (0x00027b2d) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0003610e) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0003610e) main_image3_pane_t

0x1dbb,	// (0x000285e7) grid_sctrl_middle_pane_cp01_ParamLimits

0x1dbb,	// (0x000285e7) grid_sctrl_middle_pane_cp01

0x8049,	// (0x0002e875) cell_sctrl_middle_pane_cp01_ParamLimits

0x8049,	// (0x0002e875) cell_sctrl_middle_pane_cp01

0x8066,	// (0x0002e892) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8066,	// (0x0002e892) cell_sctrl_middle_pane_cp01_g1

0x1b43,	// (0x0002836f) main_call4_pane

0x807b,	// (0x0002e8a7) aid_size_button_call4_ParamLimits

0x807b,	// (0x0002e8a7) aid_size_button_call4

0x80ae,	// (0x0002e8da) call4_windows_pane_ParamLimits

0x80ae,	// (0x0002e8da) call4_windows_pane

0x80d0,	// (0x0002e8fc) grid_call4_button_pane_ParamLimits

0x80d0,	// (0x0002e8fc) grid_call4_button_pane

0xce2b,	// (0x00033657) call4_windows_conf_pane

0x80fb,	// (0x0002e927) popup_call4_audio_first_window_ParamLimits

0x80fb,	// (0x0002e927) popup_call4_audio_first_window

0x8127,	// (0x0002e953) popup_call4_audio_second_window_ParamLimits

0x8127,	// (0x0002e953) popup_call4_audio_second_window

0xce68,	// (0x00033694) popup_call4_audio_wait_window_ParamLimits

0xce68,	// (0x00033694) popup_call4_audio_wait_window

0x813d,	// (0x0002e969) cell_call4_button_pane_ParamLimits

0x813d,	// (0x0002e969) cell_call4_button_pane

0x8164,	// (0x0002e990) bg_button_pane_cp09_ParamLimits

0x8164,	// (0x0002e990) bg_button_pane_cp09

0x8170,	// (0x0002e99c) cell_call4_button_pane_g1_ParamLimits

0x8170,	// (0x0002e99c) cell_call4_button_pane_g1

0x8196,	// (0x0002e9c2) cell_call4_button_pane_t1_ParamLimits

0x8196,	// (0x0002e9c2) cell_call4_button_pane_t1

0xceb0,	// (0x000336dc) popup_call4_audio_conf_window_ParamLimits

0xceb0,	// (0x000336dc) popup_call4_audio_conf_window

0x77a2,	// (0x0002dfce) mup3_progress_pane_t1_ParamLimits

0x77b9,	// (0x0002dfe5) mup3_progress_pane_t2_ParamLimits

0xc587,	// (0x00032db3) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x00035fe7) mup3_progress_pane_t_ParamLimits

0xc59e,	// (0x00032dca) mup_progress_pane_cp03_ParamLimits

0x7d18,	// (0x0002e544) mup3_control_keys_pane_g4_copy1

0xcd4b,	// (0x00033577) mp4_rocker2_pane_ParamLimits

0xcd4b,	// (0x00033577) mp4_rocker2_pane

0xceca,	// (0x000336f6) mp4_rocker2_pane_g1

0xced2,	// (0x000336fe) mp4_rocker2_pane_g2

0xceda,	// (0x00033706) mp4_rocker2_pane_g3

0xcee2,	// (0x0003370e) mp4_rocker2_pane_g4

0xceea,	// (0x00033716) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00036117) mp4_rocker2_pane_g

0x1b43,	// (0x0002836f) main_camera4_pane

0x1b43,	// (0x0002836f) main_video4_pane

0x103e,	// (0x0002786a) main_video_tele_dialer_pane_t1_ParamLimits

0x103e,	// (0x0002786a) main_video_tele_dialer_pane_t1

0x1057,	// (0x00027883) main_video_tele_dialer_pane_t2_ParamLimits

0x1057,	// (0x00027883) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x000360d1) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x000360d1) main_video_tele_dialer_pane_t

0x13a1,	// (0x00027bcd) cam4_autofocus_pane_ParamLimits

0x13a1,	// (0x00027bcd) cam4_autofocus_pane

0x13b7,	// (0x00027be3) cam4_image_uncrop_pane_ParamLimits

0x13b7,	// (0x00027be3) cam4_image_uncrop_pane

0x13d0,	// (0x00027bfc) cam4_indicators_pane_ParamLimits

0x13d0,	// (0x00027bfc) cam4_indicators_pane

0x13ff,	// (0x00027c2b) main_camera4_pane_g1_ParamLimits

0x13ff,	// (0x00027c2b) main_camera4_pane_g1

0x1412,	// (0x00027c3e) main_camera4_pane_g2_ParamLimits

0x1412,	// (0x00027c3e) main_camera4_pane_g2

0x1425,	// (0x00027c51) main_camera4_pane_g3_ParamLimits

0x1425,	// (0x00027c51) main_camera4_pane_g3

0x1438,	// (0x00027c64) main_camera4_pane_g4_ParamLimits

0x1438,	// (0x00027c64) main_camera4_pane_g4

0x144b,	// (0x00027c77) main_camera4_pane_g5_ParamLimits

0x144b,	// (0x00027c77) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00036122) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00036122) main_camera4_pane_g

0x146f,	// (0x00027c9b) main_camera4_pane_t1_ParamLimits

0x146f,	// (0x00027c9b) main_camera4_pane_t1

0xcf24,	// (0x00033750) bg_tb_trans_pane_cp06

0xcf3a,	// (0x00033766) cam4_indicators_pane_g1

0xcf4a,	// (0x00033776) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0003613d) cam4_indicators_pane_g

0xcf62,	// (0x0003378e) cam4_indicators_pane_t1

0x14bf,	// (0x00027ceb) main_video4_pane_g1_ParamLimits

0x14bf,	// (0x00027ceb) main_video4_pane_g1

0x14d2,	// (0x00027cfe) main_video4_pane_g2_ParamLimits

0x14d2,	// (0x00027cfe) main_video4_pane_g2

0x14e6,	// (0x00027d12) main_video4_pane_g3_ParamLimits

0x14e6,	// (0x00027d12) main_video4_pane_g3

0x14fa,	// (0x00027d26) main_video4_pane_g4_ParamLimits

0x14fa,	// (0x00027d26) main_video4_pane_g4

0x0004,

0xf918,	// (0x00036144) main_video4_pane_g_ParamLimits

0xf918,	// (0x00036144) main_video4_pane_g

0x1522,	// (0x00027d4e) vid4_indicators_pane_ParamLimits

0x1522,	// (0x00027d4e) vid4_indicators_pane

0x1552,	// (0x00027d7e) video4_image_uncrop_cif_pane_ParamLimits

0x1552,	// (0x00027d7e) video4_image_uncrop_cif_pane

0x156c,	// (0x00027d98) video4_image_uncrop_nhd_pane_ParamLimits

0x156c,	// (0x00027d98) video4_image_uncrop_nhd_pane

0x13b7,	// (0x00027be3) video4_image_uncrop_vga_pane_ParamLimits

0x13b7,	// (0x00027be3) video4_image_uncrop_vga_pane

0xcf88,	// (0x000337b4) bg_tb_trans_pane_cp07

0x1582,	// (0x00027dae) vid4_indicators_pane_g1

0x1591,	// (0x00027dbd) vid4_indicators_pane_g2

0x15a0,	// (0x00027dcc) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0003614f) vid4_indicators_pane_g

0x15c5,	// (0x00027df1) vid4_indicators_pane_t1

0x81d0,	// (0x0002e9fc) cam4_autofocus_pane_g1

0x81d8,	// (0x0002ea04) cam4_autofocus_pane_g2

0x81e0,	// (0x0002ea0c) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0003615a) cam4_autofocus_pane_g

0x81e8,	// (0x0002ea14) cam4_autofocus_pane_g3_copy1

0x7f4a,	// (0x0002e776) video_down_pane_cp_t1

0x7f58,	// (0x0002e784) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x000360d6) video_down_pane_cp_t

0x1dbb,	// (0x000285e7) popup_vitu2_window_ParamLimits

0x1dbb,	// (0x000285e7) popup_vitu2_window

0x15d9,	// (0x00027e05) aid_size_cell2_itu2_ParamLimits

0x15d9,	// (0x00027e05) aid_size_cell2_itu2

0x15ff,	// (0x00027e2b) aid_size_cell_itu2_ParamLimits

0x15ff,	// (0x00027e2b) aid_size_cell_itu2

0x165d,	// (0x00027e89) bg_popup_window_pane_cp09_ParamLimits

0x165d,	// (0x00027e89) bg_popup_window_pane_cp09

0x166b,	// (0x00027e97) field_vitu2_entry_pane_ParamLimits

0x166b,	// (0x00027e97) field_vitu2_entry_pane

0x1693,	// (0x00027ebf) grid_vitu2_function_pane_ParamLimits

0x1693,	// (0x00027ebf) grid_vitu2_function_pane

0x16e4,	// (0x00027f10) grid_vitu2_itu_pane_ParamLimits

0x16e4,	// (0x00027f10) grid_vitu2_itu_pane

0x176f,	// (0x00027f9b) cell_vitu2_itu_pane_ParamLimits

0x176f,	// (0x00027f9b) cell_vitu2_itu_pane

0x1795,	// (0x00027fc1) cell_vitu2_function_pane_ParamLimits

0x1795,	// (0x00027fc1) cell_vitu2_function_pane

0xcfa0,	// (0x000337cc) bg_popup_call_pane_cp08_ParamLimits

0xcfa0,	// (0x000337cc) bg_popup_call_pane_cp08

0xcfb9,	// (0x000337e5) field_vitu2_entry_pane_g1

0xcfc5,	// (0x000337f1) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00036161) field_vitu2_entry_pane_g

0x81f0,	// (0x0002ea1c) field_vitu2_entry_pane_t1_ParamLimits

0x81f0,	// (0x0002ea1c) field_vitu2_entry_pane_t1

0xcfdf,	// (0x0003380b) field_vitu2_entry_pane_t2_ParamLimits

0xcfdf,	// (0x0003380b) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00036168) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00036168) field_vitu2_entry_pane_t

0x17d9,	// (0x00028005) bg_button_pane_cp010_ParamLimits

0x17d9,	// (0x00028005) bg_button_pane_cp010

0x17e7,	// (0x00028013) cell_vitu2_itu_pane_g1

0x1805,	// (0x00028031) cell_vitu2_itu_pane_t1_ParamLimits

0x1805,	// (0x00028031) cell_vitu2_itu_pane_t1

0x186b,	// (0x00028097) cell_vitu2_itu_pane_t2_ParamLimits

0x186b,	// (0x00028097) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00036172) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00036172) cell_vitu2_itu_pane_t

0xd004,	// (0x00033830) bg_button_pane_cp011

0x1947,	// (0x00028173) cell_vitu2_function_pane_g1

0x1b43,	// (0x0002836f) main_myfav_hc_pane

0x1351,	// (0x00027b7d) popup_image3_note_pane_ParamLimits

0x1351,	// (0x00027b7d) popup_image3_note_pane

0x136d,	// (0x00027b99) popup_image3_tool_bar_pane_ParamLimits

0x136d,	// (0x00027b99) popup_image3_tool_bar_pane

0x18ef,	// (0x0002811b) cell_vitu2_itu_pane_t3_ParamLimits

0x18ef,	// (0x0002811b) cell_vitu2_itu_pane_t3

0x1b43,	// (0x0002836f) bg_popup_trans_pane

0xd012,	// (0x0003383e) grid_image3_tool_bar_pane

0xd01c,	// (0x00033848) bg_popup_trans_pane_g1

0x388d,	// (0x0002a0b9) bg_popup_trans_pane_g2

0xd024,	// (0x00033850) bg_popup_trans_pane_g3

0xd02c,	// (0x00033858) bg_popup_trans_pane_g4

0xd034,	// (0x00033860) bg_popup_trans_pane_g5

0xd03c,	// (0x00033868) bg_popup_trans_pane_g6

0xd044,	// (0x00033870) bg_popup_trans_pane_g7

0xd04c,	// (0x00033878) bg_popup_trans_pane_g8

0x386d,	// (0x0002a099) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00036179) bg_popup_trans_pane_g

0xd054,	// (0x00033880) cell_image3_tool_bar_pane_ParamLimits

0xd054,	// (0x00033880) cell_image3_tool_bar_pane

0xc2d0,	// (0x00032afc) cell_image3_tool_bar_pane_g1

0x1b43,	// (0x0002836f) bg_popup_trans_pane_cp1

0xd06a,	// (0x00033896) popup_image3_note_pane_t1

0xd078,	// (0x000338a4) popup_image3_note_pane_t2

0xd086,	// (0x000338b2) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0003618c) popup_image3_note_pane_t

0xd096,	// (0x000338c2) popup_image3_note_pane_t3_copy1

0x821f,	// (0x0002ea4b) bg_myfav_hc_instruction_pane_ParamLimits

0x821f,	// (0x0002ea4b) bg_myfav_hc_instruction_pane

0x8237,	// (0x0002ea63) cell_myfav_contact_pane_ParamLimits

0x8237,	// (0x0002ea63) cell_myfav_contact_pane

0x8253,	// (0x0002ea7f) cell_myfav_contact_pane_cp1_ParamLimits

0x8253,	// (0x0002ea7f) cell_myfav_contact_pane_cp1

0x826b,	// (0x0002ea97) cell_myfav_contact_pane_cp2_ParamLimits

0x826b,	// (0x0002ea97) cell_myfav_contact_pane_cp2

0x8283,	// (0x0002eaaf) cell_myfav_contact_pane_cp3_ParamLimits

0x8283,	// (0x0002eaaf) cell_myfav_contact_pane_cp3

0x829a,	// (0x0002eac6) cell_myfav_contact_pane_cp4_ParamLimits

0x829a,	// (0x0002eac6) cell_myfav_contact_pane_cp4

0x82b2,	// (0x0002eade) cell_myfav_contact_pane_cp5_ParamLimits

0x82b2,	// (0x0002eade) cell_myfav_contact_pane_cp5

0x82c6,	// (0x0002eaf2) cell_myfav_contact_pane_cp6_ParamLimits

0x82c6,	// (0x0002eaf2) cell_myfav_contact_pane_cp6

0x82dc,	// (0x0002eb08) cell_myfav_contact_pane_cp7_ParamLimits

0x82dc,	// (0x0002eb08) cell_myfav_contact_pane_cp7

0xd0a4,	// (0x000338d0) listscroll_gen_pane_cp05

0x82f4,	// (0x0002eb20) main_myfav_hc_pane_g1_ParamLimits

0x82f4,	// (0x0002eb20) main_myfav_hc_pane_g1

0x830e,	// (0x0002eb3a) main_myfav_hc_pane_g2_ParamLimits

0x830e,	// (0x0002eb3a) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00036193) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00036193) main_myfav_hc_pane_g

0x8342,	// (0x0002eb6e) main_myfav_hc_pane_t1_ParamLimits

0x8342,	// (0x0002eb6e) main_myfav_hc_pane_t1

0xd0ad,	// (0x000338d9) main_myfav_hc_pane_t2_ParamLimits

0xd0ad,	// (0x000338d9) main_myfav_hc_pane_t2

0xd0bf,	// (0x000338eb) main_myfav_hc_pane_t3_ParamLimits

0xd0bf,	// (0x000338eb) main_myfav_hc_pane_t3

0x8359,	// (0x0002eb85) main_myfav_hc_pane_t4_ParamLimits

0x8359,	// (0x0002eb85) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0003619a) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0003619a) main_myfav_hc_pane_t

0xc2d0,	// (0x00032afc) bg_myfav_hc_instruction_pane_g1

0xd0d1,	// (0x000338fd) cell_myfav_contact_pane_g1_ParamLimits

0xd0d1,	// (0x000338fd) cell_myfav_contact_pane_g1

0xd0d1,	// (0x000338fd) cell_myfav_contact_pane_g2_ParamLimits

0xd0d1,	// (0x000338fd) cell_myfav_contact_pane_g2

0xd0dd,	// (0x00033909) cell_myfav_contact_pane_g3_ParamLimits

0xd0dd,	// (0x00033909) cell_myfav_contact_pane_g3

0xc571,	// (0x00032d9d) cell_myfav_contact_pane_g4_ParamLimits

0xc571,	// (0x00032d9d) cell_myfav_contact_pane_g4

0xd0ea,	// (0x00033916) cell_myfav_contact_pane_g5_ParamLimits

0xd0ea,	// (0x00033916) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x000361a5) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x000361a5) cell_myfav_contact_pane_g

0x8328,	// (0x0002eb54) main_myfav_hc_pane_g3_ParamLimits

0x8328,	// (0x0002eb54) main_myfav_hc_pane_g3

0x1cf4,	// (0x00028520) popup_adpt_find_window

0x8383,	// (0x0002ebaf) afind_page_pane_ParamLimits

0x8383,	// (0x0002ebaf) afind_page_pane

0x8398,	// (0x0002ebc4) aid_size_cell_afind_ParamLimits

0x8398,	// (0x0002ebc4) aid_size_cell_afind

0x83b6,	// (0x0002ebe2) bg_popup_sub_pane_cp09_ParamLimits

0x83b6,	// (0x0002ebe2) bg_popup_sub_pane_cp09

0x83c3,	// (0x0002ebef) find_pane_cp01_ParamLimits

0x83c3,	// (0x0002ebef) find_pane_cp01

0xd0f6,	// (0x00033922) grid_afind_control_pane_ParamLimits

0xd0f6,	// (0x00033922) grid_afind_control_pane

0x83d0,	// (0x0002ebfc) grid_afind_pane_ParamLimits

0x83d0,	// (0x0002ebfc) grid_afind_pane

0x83f2,	// (0x0002ec1e) cell_afind_pane_ParamLimits

0x83f2,	// (0x0002ec1e) cell_afind_pane

0xc2d0,	// (0x00032afc) afind_page_pane_g1

0x8455,	// (0x0002ec81) afind_page_pane_g2

0x845e,	// (0x0002ec8a) afind_page_pane_g3

0x0002,

0xf984,	// (0x000361b0) afind_page_pane_g

0x8467,	// (0x0002ec93) afind_page_pane_t1

0xd10a,	// (0x00033936) cell_afind_grid_control_pane_ParamLimits

0xd10a,	// (0x00033936) cell_afind_grid_control_pane

0xcdeb,	// (0x00033617) bg_button_pane_cp69_ParamLimits

0xcdeb,	// (0x00033617) bg_button_pane_cp69

0x8487,	// (0x0002ecb3) cell_afind_pane_g1_ParamLimits

0x8487,	// (0x0002ecb3) cell_afind_pane_g1

0x8494,	// (0x0002ecc0) cell_afind_pane_t1_ParamLimits

0x8494,	// (0x0002ecc0) cell_afind_pane_t1

0x3115,	// (0x00029941) bg_button_pane_cp72

0xd119,	// (0x00033945) cell_afind_grid_control_pane_g1

0x5bae,	// (0x0002c3da) aid_image_placing_area_ParamLimits

0x5bae,	// (0x0002c3da) aid_image_placing_area

0xc876,	// (0x000330a2) field_vitu_entry_pane_g1_ParamLimits

0xc876,	// (0x000330a2) field_vitu_entry_pane_g1

0xc882,	// (0x000330ae) field_vitu_entry_pane_g2_ParamLimits

0xc882,	// (0x000330ae) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x00036061) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x00036061) field_vitu_entry_pane_g

0x7de5,	// (0x0002e611) cell_vitu_itu_pane_g1_ParamLimits

0x7e27,	// (0x0002e653) cell_vitu_itu_pane_t3_ParamLimits

0x7e27,	// (0x0002e653) cell_vitu_itu_pane_t3

0xcd91,	// (0x000335bd) mp4_progress_pane_t1_ParamLimits

0xcdaa,	// (0x000335d6) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x000360f6) mp4_progress_pane_t_ParamLimits

0xcdc3,	// (0x000335ef) mup_progress_pane_cp04_ParamLimits

0x836d,	// (0x0002eb99) main_myfav_hc_pane_t5_ParamLimits

0x836d,	// (0x0002eb99) main_myfav_hc_pane_t5

0x1b99,	// (0x000283c5) aid_zoom_text_primary

0x1cf4,	// (0x00028520) popup_adpt_find_window_ParamLimits

0x1dbb,	// (0x000285e7) main_cam_set_pane

0x13e9,	// (0x00027c15) cam4_zoom_pane_ParamLimits

0x13e9,	// (0x00027c15) cam4_zoom_pane

0x84a6,	// (0x0002ecd2) main_cam_set_pane_g1_ParamLimits

0x84a6,	// (0x0002ecd2) main_cam_set_pane_g1

0x84b4,	// (0x0002ece0) main_cam_set_pane_g2_ParamLimits

0x84b4,	// (0x0002ece0) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x000361b7) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x000361b7) main_cam_set_pane_g

0x84d7,	// (0x0002ed03) main_cam_set_pane_t1_ParamLimits

0x84d7,	// (0x0002ed03) main_cam_set_pane_t1

0x84f2,	// (0x0002ed1e) main_cset_listscroll_pane_ParamLimits

0x84f2,	// (0x0002ed1e) main_cset_listscroll_pane

0x8516,	// (0x0002ed42) main_cset_slider_pane_ParamLimits

0x8516,	// (0x0002ed42) main_cset_slider_pane

0xd12a,	// (0x00033956) main_cset_list_pane_ParamLimits

0xd12a,	// (0x00033956) main_cset_list_pane

0xd13a,	// (0x00033966) scroll_pane_cp028

0x8540,	// (0x0002ed6c) aid_area_touch_slider

0x855c,	// (0x0002ed88) cset_slider_pane

0x8586,	// (0x0002edb2) main_cset_slider_pane_g1

0x859b,	// (0x0002edc7) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x000361bc) main_cset_slider_pane_g

0xd173,	// (0x0003399f) main_cset_slider_pane_t1

0x865d,	// (0x0002ee89) main_cset_slider_pane_t2

0x8677,	// (0x0002eea3) main_cset_slider_pane_t3

0x8691,	// (0x0002eebd) main_cset_slider_pane_t4

0x86ab,	// (0x0002eed7) main_cset_slider_pane_t5

0x86c9,	// (0x0002eef5) main_cset_slider_pane_t6

0x86e0,	// (0x0002ef0c) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x000361e1) main_cset_slider_pane_t

0x87ec,	// (0x0002f018) cset_list_set_pane_ParamLimits

0x87ec,	// (0x0002f018) cset_list_set_pane

0x8800,	// (0x0002f02c) aid_position_infowindow_above

0x8808,	// (0x0002f034) aid_position_infowindow_below

0x8810,	// (0x0002f03c) cset_list_set_pane_g1_ParamLimits

0x8810,	// (0x0002f03c) cset_list_set_pane_g1

0x881c,	// (0x0002f048) cset_list_set_pane_g3_ParamLimits

0x881c,	// (0x0002f048) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x00036200) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x00036200) cset_list_set_pane_g

0x882b,	// (0x0002f057) cset_list_set_pane_t1_ParamLimits

0x882b,	// (0x0002f057) cset_list_set_pane_t1

0x1dbb,	// (0x000285e7) list_highlight_pane_cp021_ParamLimits

0x1dbb,	// (0x000285e7) list_highlight_pane_cp021

0x534d,	// (0x0002bb79) cset_slider_pane_g1

0x535f,	// (0x0002bb8b) cset_slider_pane_g2

0x5356,	// (0x0002bb82) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00036205) cset_slider_pane_g

0xd213,	// (0x00033a3f) aid_area_touch_cam4_zoom

0xd21b,	// (0x00033a47) cam4_zoom_cont_pane

0xd223,	// (0x00033a4f) cam4_zoom_pane_g1

0xd22b,	// (0x00033a57) cam4_zoom_pane_g2

0x195b,	// (0x00028187) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0003620c) cam4_zoom_pane_g

0xd233,	// (0x00033a5f) cam4_zoom_cont_pane_g1

0xd23c,	// (0x00033a68) cam4_zoom_cont_pane_g2

0xd245,	// (0x00033a71) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00036213) cam4_zoom_cont_pane_g

0x8099,	// (0x0002e8c5) call4_image_pane_ParamLimits

0x8099,	// (0x0002e8c5) call4_image_pane

0xce2b,	// (0x00033657) call4_windows_conf_pane_ParamLimits

0xce46,	// (0x00033672) popup_call4_audio_in_window_ParamLimits

0xce46,	// (0x00033672) popup_call4_audio_in_window

0x1b43,	// (0x0002836f) bg_popup_call2_act_pane_cp02

0xcea8,	// (0x000336d4) call4_list_conf_pane

0xc2d0,	// (0x00032afc) call4_image_pane_g1

0xc2d0,	// (0x00032afc) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00035f27) call4_image_pane_g

0xd24e,	// (0x00033a7a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd24e,	// (0x00033a7a) list_single_graphic_popup_conf4_pane

0x1b43,	// (0x0002836f) list_highlight_pane_cp022

0xd263,	// (0x00033a8f) list_single_graphic_popup_conf4_pane_g1

0x4847,	// (0x0002b073) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0003621a) list_single_graphic_popup_conf4_pane_g

0xd26b,	// (0x00033a97) list_single_graphic_popup_conf4_pane_t1

0x33e1,	// (0x00029c0d) popup_vtel_slider_window_ParamLimits

0x33e1,	// (0x00029c0d) popup_vtel_slider_window

0xcdd9,	// (0x00033605) dialer2_ne_pane_t2_ParamLimits

0xcdd9,	// (0x00033605) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x000360fb) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x000360fb) dialer2_ne_pane_t

0xc0af,	// (0x000328db) bg_popup_sub_pane_cp010_ParamLimits

0xc0af,	// (0x000328db) bg_popup_sub_pane_cp010

0x883d,	// (0x0002f069) popup_vtel_slider_window_g1_ParamLimits

0x883d,	// (0x0002f069) popup_vtel_slider_window_g1

0x8850,	// (0x0002f07c) popup_vtel_slider_window_g2_ParamLimits

0x8850,	// (0x0002f07c) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0003621f) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0003621f) popup_vtel_slider_window_g

0x88a6,	// (0x0002f0d2) vtel_slider_pane_ParamLimits

0x88a6,	// (0x0002f0d2) vtel_slider_pane

0x88c8,	// (0x0002f0f4) vtel_slider_pane_g1_ParamLimits

0x88c8,	// (0x0002f0f4) vtel_slider_pane_g1

0x88dc,	// (0x0002f108) vtel_slider_pane_g2_ParamLimits

0x88dc,	// (0x0002f108) vtel_slider_pane_g2

0x88f4,	// (0x0002f120) vtel_slider_pane_g3_ParamLimits

0x88f4,	// (0x0002f120) vtel_slider_pane_g3

0x88c8,	// (0x0002f0f4) vtel_slider_pane_g4_ParamLimits

0x88c8,	// (0x0002f0f4) vtel_slider_pane_g4

0x890a,	// (0x0002f136) vtel_slider_pane_g5_ParamLimits

0x890a,	// (0x0002f136) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00036228) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00036228) vtel_slider_pane_g

0x1b43,	// (0x0002836f) main_gallery2_pane

0x162b,	// (0x00027e57) aid_size_row_itut2_dropdow_list_ParamLimits

0x162b,	// (0x00027e57) aid_size_row_itut2_dropdow_list

0x16bb,	// (0x00027ee7) grid_vitu2_function_top_pane_ParamLimits

0x16bb,	// (0x00027ee7) grid_vitu2_function_top_pane

0x171a,	// (0x00027f46) popup_vitu2_dropdown_list_window_ParamLimits

0x171a,	// (0x00027f46) popup_vitu2_dropdown_list_window

0x1743,	// (0x00027f6f) popup_vitu2_match_list_window

0x1963,	// (0x0002818f) cell_vitu2_function_top_pane_ParamLimits

0x1963,	// (0x0002818f) cell_vitu2_function_top_pane

0x1983,	// (0x000281af) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1983,	// (0x000281af) cell_vitu2_function_top_pane_cp01

0x19a1,	// (0x000281cd) cell_vitu2_function_top_wide_pane_ParamLimits

0x19a1,	// (0x000281cd) cell_vitu2_function_top_wide_pane

0xd004,	// (0x00033830) bg_button_pane_cp012

0x19bf,	// (0x000281eb) cell_vitu2_function_top_pane_g1

0xd28f,	// (0x00033abb) bg_button_pane_cp013_ParamLimits

0xd28f,	// (0x00033abb) bg_button_pane_cp013

0x8920,	// (0x0002f14c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8920,	// (0x0002f14c) cell_vitu2_function_top_wide_pane_g1

0xd004,	// (0x00033830) bg_popup_sub_pane_cp20

0x19d3,	// (0x000281ff) list_vitu2_match_list_pane

0xd01c,	// (0x00033848) bg_popup_sub_pane_cp20_g1

0xd024,	// (0x00033850) bg_popup_sub_pane_cp20_g2

0x388d,	// (0x0002a0b9) bg_popup_sub_pane_cp20_g3

0xd02c,	// (0x00033858) bg_popup_sub_pane_cp20_g4

0x386d,	// (0x0002a099) bg_popup_sub_pane_cp20_g5

0xd2ab,	// (0x00033ad7) bg_popup_sub_pane_cp20_g6

0xd03c,	// (0x00033868) bg_popup_sub_pane_cp20_g7

0xd044,	// (0x00033870) bg_popup_sub_pane_cp20_g8

0xd04c,	// (0x00033878) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00036233) bg_popup_sub_pane_cp20_g

0xd2b3,	// (0x00033adf) list_vitu2_match_list_item_pane_ParamLimits

0xd2b3,	// (0x00033adf) list_vitu2_match_list_item_pane

0xd2c5,	// (0x00033af1) list_vitu2_match_list_item_pane_t1

0xb15e,	// (0x0003198a) bg_popup_sub_pane_cp21

0xd2eb,	// (0x00033b17) grid_vitu2_dropdown_list_pane

0x19f1,	// (0x0002821d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x19f1,	// (0x0002821d) cell_vitu2_dropdown_list_char_pane

0x1a14,	// (0x00028240) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1a14,	// (0x00028240) cell_vitu2_dropdown_list_ctrl_pane

0xd2f3,	// (0x00033b1f) cell_vitu2_dropdown_list_char_pane_g1

0xd2fc,	// (0x00033b28) cell_vitu2_dropdown_list_char_pane_g2

0xd305,	// (0x00033b31) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00036250) cell_vitu2_dropdown_list_char_pane_g

0x1a42,	// (0x0002826e) cell_vitu2_dropdown_list_char_pane_t1

0x896a,	// (0x0002f196) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x896a,	// (0x0002f196) cell_vitu2_dropdown_list_ctrl_pane_g1

0x897a,	// (0x0002f1a6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x897a,	// (0x0002f1a6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x898b,	// (0x0002f1b7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x898b,	// (0x0002f1b7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1a50,	// (0x0002827c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1a50,	// (0x0002827c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf24,	// (0x00033750) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf24,	// (0x00033750) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00036257) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00036257) cell_vitu2_dropdown_list_ctrl_pane_g

0x899b,	// (0x0002f1c7) aid_size_cell_gallery2_ParamLimits

0x899b,	// (0x0002f1c7) aid_size_cell_gallery2

0x89b1,	// (0x0002f1dd) grid_gallery2_pane_ParamLimits

0x89b1,	// (0x0002f1dd) grid_gallery2_pane

0x89c5,	// (0x0002f1f1) scroll_pane_cp029_ParamLimits

0x89c5,	// (0x0002f1f1) scroll_pane_cp029

0x89d1,	// (0x0002f1fd) cell_gallery2_pane_ParamLimits

0x89d1,	// (0x0002f1fd) cell_gallery2_pane

0xd30e,	// (0x00033b3a) cell_gallery2_pane_g2

0x8a0b,	// (0x0002f237) cell_gallery2_pane_g3

0xd318,	// (0x00033b44) cell_gallery2_pane_g4

0xd320,	// (0x00033b4c) cell_gallery2_pane_g5

0x4db5,	// (0x0002b5e1) grid_highlight_pane_cp10

0x1743,	// (0x00027f6f) popup_vitu2_match_list_window_ParamLimits

0x175a,	// (0x00027f86) popup_vitu2_query_window_ParamLimits

0x175a,	// (0x00027f86) popup_vitu2_query_window

0xb15e,	// (0x0003198a) bg_vitu2_candi_button_pane

0xd2f3,	// (0x00033b1f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2fc,	// (0x00033b28) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd305,	// (0x00033b31) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8a13,	// (0x0002f23f) bg_button_pane_cp015

0x8a27,	// (0x0002f253) bg_button_pane_cp016

0x8a3a,	// (0x0002f266) bg_button_pane_cp017

0xbd9b,	// (0x000325c7) bg_popup_sub_pane_cp22

0xd328,	// (0x00033b54) popup_vitu2_query_window_g1

0x8a7f,	// (0x0002f2ab) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00036262) popup_vitu2_query_window_g

0x8a9e,	// (0x0002f2ca) popup_vitu2_query_window_t1_ParamLimits

0x8a9e,	// (0x0002f2ca) popup_vitu2_query_window_t1

0x8ad3,	// (0x0002f2ff) popup_vitu2_query_window_t2_ParamLimits

0x8ad3,	// (0x0002f2ff) popup_vitu2_query_window_t2

0x8ae5,	// (0x0002f311) popup_vitu2_query_window_t3_ParamLimits

0x8ae5,	// (0x0002f311) popup_vitu2_query_window_t3

0x8b0d,	// (0x0002f339) popup_vitu2_query_window_t4_ParamLimits

0x8b0d,	// (0x0002f339) popup_vitu2_query_window_t4

0x8b2e,	// (0x0002f35a) popup_vitu2_query_window_t5_ParamLimits

0x8b2e,	// (0x0002f35a) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00036269) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00036269) popup_vitu2_query_window_t

0xd122,	// (0x0003394e) main_cset_text_pane

0x8540,	// (0x0002ed6c) aid_area_touch_slider_ParamLimits

0x855c,	// (0x0002ed88) cset_slider_pane_ParamLimits

0x8586,	// (0x0002edb2) main_cset_slider_pane_g1_ParamLimits

0x859b,	// (0x0002edc7) main_cset_slider_pane_g2_ParamLimits

0xd143,	// (0x0003396f) main_cset_slider_pane_g3_ParamLimits

0xd143,	// (0x0003396f) main_cset_slider_pane_g3

0x85b0,	// (0x0002eddc) main_cset_slider_pane_g4_ParamLimits

0x85b0,	// (0x0002eddc) main_cset_slider_pane_g4

0x85bf,	// (0x0002edeb) main_cset_slider_pane_g5_ParamLimits

0x85bf,	// (0x0002edeb) main_cset_slider_pane_g5

0x85cd,	// (0x0002edf9) main_cset_slider_pane_g6_ParamLimits

0x85cd,	// (0x0002edf9) main_cset_slider_pane_g6

0xf990,	// (0x000361bc) main_cset_slider_pane_g_ParamLimits

0xd173,	// (0x0003399f) main_cset_slider_pane_t1_ParamLimits

0x865d,	// (0x0002ee89) main_cset_slider_pane_t2_ParamLimits

0x8677,	// (0x0002eea3) main_cset_slider_pane_t3_ParamLimits

0x8691,	// (0x0002eebd) main_cset_slider_pane_t4_ParamLimits

0x86ab,	// (0x0002eed7) main_cset_slider_pane_t5_ParamLimits

0x86c9,	// (0x0002eef5) main_cset_slider_pane_t6_ParamLimits

0x86e0,	// (0x0002ef0c) main_cset_slider_pane_t7_ParamLimits

0x870e,	// (0x0002ef3a) main_cset_slider_pane_t8_ParamLimits

0x870e,	// (0x0002ef3a) main_cset_slider_pane_t8

0x8736,	// (0x0002ef62) main_cset_slider_pane_t9_ParamLimits

0x8736,	// (0x0002ef62) main_cset_slider_pane_t9

0x875e,	// (0x0002ef8a) main_cset_slider_pane_t10_ParamLimits

0x875e,	// (0x0002ef8a) main_cset_slider_pane_t10

0x8786,	// (0x0002efb2) main_cset_slider_pane_t11_ParamLimits

0x8786,	// (0x0002efb2) main_cset_slider_pane_t11

0x87b0,	// (0x0002efdc) main_cset_slider_pane_t12_ParamLimits

0x87b0,	// (0x0002efdc) main_cset_slider_pane_t12

0x87cd,	// (0x0002eff9) main_cset_slider_pane_t13_ParamLimits

0x87cd,	// (0x0002eff9) main_cset_slider_pane_t13

0xf9b5,	// (0x000361e1) main_cset_slider_pane_t_ParamLimits

0x1b43,	// (0x0002836f) bg_popup_sub_pane_cp011

0xd334,	// (0x00033b60) main_cset_text_pane_g1

0xd33c,	// (0x00033b68) main_cset_text_pane_t1

0xd34a,	// (0x00033b76) main_cset_text_pane_t2

0xd358,	// (0x00033b84) main_cset_text_pane_t3

0xd366,	// (0x00033b92) main_cset_text_pane_t4

0xd374,	// (0x00033ba0) main_cset_text_pane_t5

0xd382,	// (0x00033bae) main_cset_text_pane_t6

0xd390,	// (0x00033bbc) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00036278) main_cset_text_pane_t

0x1b43,	// (0x0002836f) main_cam4_burst_pane

0x1b43,	// (0x0002836f) main_cam5_pane

0x8475,	// (0x0002eca1) bg_button_pane_cp019

0x847e,	// (0x0002ecaa) bg_button_pane_cp020

0xd14f,	// (0x0003397b) main_cset_slider_pane_g7_ParamLimits

0xd14f,	// (0x0003397b) main_cset_slider_pane_g7

0xd15b,	// (0x00033987) main_cset_slider_pane_g8_ParamLimits

0xd15b,	// (0x00033987) main_cset_slider_pane_g8

0x85e1,	// (0x0002ee0d) main_cset_slider_pane_g9_ParamLimits

0x85e1,	// (0x0002ee0d) main_cset_slider_pane_g9

0x85ed,	// (0x0002ee19) main_cset_slider_pane_g10_ParamLimits

0x85ed,	// (0x0002ee19) main_cset_slider_pane_g10

0x85f9,	// (0x0002ee25) main_cset_slider_pane_g11_ParamLimits

0x85f9,	// (0x0002ee25) main_cset_slider_pane_g11

0x8605,	// (0x0002ee31) main_cset_slider_pane_g12_ParamLimits

0x8605,	// (0x0002ee31) main_cset_slider_pane_g12

0x8611,	// (0x0002ee3d) main_cset_slider_pane_g13_ParamLimits

0x8611,	// (0x0002ee3d) main_cset_slider_pane_g13

0x861d,	// (0x0002ee49) main_cset_slider_pane_g14_ParamLimits

0x861d,	// (0x0002ee49) main_cset_slider_pane_g14

0x8629,	// (0x0002ee55) main_cset_slider_pane_g15_ParamLimits

0x8629,	// (0x0002ee55) main_cset_slider_pane_g15

0xd1a1,	// (0x000339cd) main_cset_slider_pane_t14_ParamLimits

0xd1a1,	// (0x000339cd) main_cset_slider_pane_t14

0xd1da,	// (0x00033a06) main_cset_slider_pane_t15_ParamLimits

0xd1da,	// (0x00033a06) main_cset_slider_pane_t15

0x8ba5,	// (0x0002f3d1) aid_cam4_burst_size_cell_ParamLimits

0x8ba5,	// (0x0002f3d1) aid_cam4_burst_size_cell

0x8bc5,	// (0x0002f3f1) grid_cam4_burst_pane_ParamLimits

0x8bc5,	// (0x0002f3f1) grid_cam4_burst_pane

0x8bff,	// (0x0002f42b) linegrid_cam4_burst_pane_ParamLimits

0x8bff,	// (0x0002f42b) linegrid_cam4_burst_pane

0xd39e,	// (0x00033bca) scroll_pane_cp30_ParamLimits

0xd39e,	// (0x00033bca) scroll_pane_cp30

0x8c21,	// (0x0002f44d) cell_cam4_burst_pane_ParamLimits

0x8c21,	// (0x0002f44d) cell_cam4_burst_pane

0xd3aa,	// (0x00033bd6) linegrid_cam4_burst_pane_g1_ParamLimits

0xd3aa,	// (0x00033bd6) linegrid_cam4_burst_pane_g1

0x8c76,	// (0x0002f4a2) linegrid_cam4_burst_pane_g2_ParamLimits

0x8c76,	// (0x0002f4a2) linegrid_cam4_burst_pane_g2

0xd3b7,	// (0x00033be3) linegrid_cam4_burst_pane_g3_ParamLimits

0xd3b7,	// (0x00033be3) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00036287) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00036287) linegrid_cam4_burst_pane_g

0x8c87,	// (0x0002f4b3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8c87,	// (0x0002f4b3) linegrid_cam4_burst_pane_g3_copy1

0xd3c4,	// (0x00033bf0) linegrid_cam4_burst_pane_g4_ParamLimits

0xd3c4,	// (0x00033bf0) linegrid_cam4_burst_pane_g4

0x8ca5,	// (0x0002f4d1) linegrid_cam4_burst_pane_g5_ParamLimits

0x8ca5,	// (0x0002f4d1) linegrid_cam4_burst_pane_g5

0x8cb6,	// (0x0002f4e2) linegrid_cam4_burst_pane_g6_ParamLimits

0x8cb6,	// (0x0002f4e2) linegrid_cam4_burst_pane_g6

0xd3d1,	// (0x00033bfd) linegrid_cam4_burst_pane_g7_ParamLimits

0xd3d1,	// (0x00033bfd) linegrid_cam4_burst_pane_g7

0x8ccd,	// (0x0002f4f9) cell_cam4_burst_pane_g1

0xd3ea,	// (0x00033c16) main_cam5_pane_t1_ParamLimits

0xd3ea,	// (0x00033c16) main_cam5_pane_t1

0xd3fc,	// (0x00033c28) main_cam5_pane_t2_ParamLimits

0xd3fc,	// (0x00033c28) main_cam5_pane_t2

0xd40e,	// (0x00033c3a) main_cam5_pane_t3_ParamLimits

0xd40e,	// (0x00033c3a) main_cam5_pane_t3

0xd420,	// (0x00033c4c) main_cam5_pane_t4_ParamLimits

0xd420,	// (0x00033c4c) main_cam5_pane_t4

0xd438,	// (0x00033c64) main_cam5_pane_t5_ParamLimits

0xd438,	// (0x00033c64) main_cam5_pane_t5

0xd44c,	// (0x00033c78) main_cam5_pane_t6_ParamLimits

0xd44c,	// (0x00033c78) main_cam5_pane_t6

0xd460,	// (0x00033c8c) main_cam5_pane_t7_ParamLimits

0xd460,	// (0x00033c8c) main_cam5_pane_t7

0xd472,	// (0x00033c9e) main_cam5_pane_t8_ParamLimits

0xd472,	// (0x00033c9e) main_cam5_pane_t8

0xd490,	// (0x00033cbc) main_cam5_pane_t9_ParamLimits

0xd490,	// (0x00033cbc) main_cam5_pane_t9

0xd4a2,	// (0x00033cce) main_cam5_pane_t10_ParamLimits

0xd4a2,	// (0x00033cce) main_cam5_pane_t10

0xd4b4,	// (0x00033ce0) main_cam5_pane_t11_ParamLimits

0xd4b4,	// (0x00033ce0) main_cam5_pane_t11

0xd4c8,	// (0x00033cf4) main_cam5_pane_t12_ParamLimits

0xd4c8,	// (0x00033cf4) main_cam5_pane_t12

0xd4df,	// (0x00033d0b) main_cam5_pane_t13_ParamLimits

0xd4df,	// (0x00033d0b) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00036293) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00036293) main_cam5_pane_t

0x1d81,	// (0x000285ad) popup_scut_keymap_window_ParamLimits

0x1d81,	// (0x000285ad) popup_scut_keymap_window

0x8ce0,	// (0x0002f50c) aid_size_cell_brow_shortcut

0x4db5,	// (0x0002b5e1) bg_popup_window_pane_cp010

0x8cec,	// (0x0002f518) grid_scut_pane

0x8cf8,	// (0x0002f524) cell_scut_pane_ParamLimits

0x8cf8,	// (0x0002f524) cell_scut_pane

0x8d11,	// (0x0002f53d) cell_scut_pane_g1

0xd502,	// (0x00033d2e) cell_scut_pane_t1

0xd511,	// (0x00033d3d) cell_scut_pane_t2

0x8d1a,	// (0x0002f546) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x000362ae) cell_scut_pane_t

0x7353,	// (0x0002db7f) main_mup3_pane_g8_ParamLimits

0x7353,	// (0x0002db7f) main_mup3_pane_g8

0x1645,	// (0x00027e71) area_vitu2_query_pane_ParamLimits

0x1645,	// (0x00027e71) area_vitu2_query_pane

0x8a4d,	// (0x0002f279) input_focus_pane_cp08

0xd520,	// (0x00033d4c) area_vitu2_query_pane_g1

0x8d28,	// (0x0002f554) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x000362b5) area_vitu2_query_pane_g

0x8d39,	// (0x0002f565) area_vitu2_query_pane_t1_ParamLimits

0x8d39,	// (0x0002f565) area_vitu2_query_pane_t1

0x8d4d,	// (0x0002f579) area_vitu2_query_pane_t2_ParamLimits

0x8d4d,	// (0x0002f579) area_vitu2_query_pane_t2

0x8d61,	// (0x0002f58d) area_vitu2_query_pane_t3_ParamLimits

0x8d61,	// (0x0002f58d) area_vitu2_query_pane_t3

0xd52c,	// (0x00033d58) area_vitu2_query_pane_t4_ParamLimits

0xd52c,	// (0x00033d58) area_vitu2_query_pane_t4

0xd554,	// (0x00033d80) area_vitu2_query_pane_t5_ParamLimits

0xd554,	// (0x00033d80) area_vitu2_query_pane_t5

0xd57c,	// (0x00033da8) area_vitu2_query_pane_t6_ParamLimits

0xd57c,	// (0x00033da8) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x000362ba) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x000362ba) area_vitu2_query_pane_t

0x8d89,	// (0x0002f5b5) bg_button_pane_cp018

0x8d97,	// (0x0002f5c3) bg_button_pane_cp021

0x8da3,	// (0x0002f5cf) bg_button_pane_cp022

0x8db4,	// (0x0002f5e0) input_focus_pane_cp09

0x4bc4,	// (0x0002b3f0) aid_size_touch_mv_arrow_left

0x4bed,	// (0x0002b419) aid_size_touch_mv_arrow_right

0x8641,	// (0x0002ee6d) main_cset_slider_pane_g16_ParamLimits

0x8641,	// (0x0002ee6d) main_cset_slider_pane_g16

0x864f,	// (0x0002ee7b) main_cset_slider_pane_g17_ParamLimits

0x864f,	// (0x0002ee7b) main_cset_slider_pane_g17

0x8ccd,	// (0x0002f4f9) cell_cam4_burst_pane_g1_ParamLimits

0x1b43,	// (0x0002836f) compa_mode_pane

0x8860,	// (0x0002f08c) popup_vtel_slider_window_g3_ParamLimits

0x8860,	// (0x0002f08c) popup_vtel_slider_window_g3

0x8877,	// (0x0002f0a3) popup_vtel_slider_window_g4_ParamLimits

0x8877,	// (0x0002f0a3) popup_vtel_slider_window_g4

0x888e,	// (0x0002f0ba) popup_vtel_slider_window_t1_ParamLimits

0x888e,	// (0x0002f0ba) popup_vtel_slider_window_t1

0x1b43,	// (0x0002836f) main_cl_pane

0xbdc7,	// (0x000325f3) popup_imed_adjust2_window_ParamLimits

0xbd9b,	// (0x000325c7) bg_tb_trans_pane_cp05_ParamLimits

0xc7ab,	// (0x00032fd7) popup_imed_adjust2_window_g1_ParamLimits

0xc7ba,	// (0x00032fe6) popup_imed_adjust2_window_g2_ParamLimits

0xc7ba,	// (0x00032fe6) popup_imed_adjust2_window_g2

0xc7c6,	// (0x00032ff2) popup_imed_adjust2_window_g3_ParamLimits

0xc7c6,	// (0x00032ff2) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00036025) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00036025) popup_imed_adjust2_window_g

0xc7d2,	// (0x00032ffe) popup_imed_adjust2_window_t1_ParamLimits

0xc7ea,	// (0x00033016) slider_imed_adjust_pane_ParamLimits

0xc7fe,	// (0x0003302a) slider_imed_adjust_pane_g1_ParamLimits

0xc80e,	// (0x0003303a) slider_imed_adjust_pane_g2_ParamLimits

0xc81e,	// (0x0003304a) slider_imed_adjust_pane_g3_ParamLimits

0xc82f,	// (0x0003305b) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0003602c) slider_imed_adjust_pane_g_ParamLimits

0x1389,	// (0x00027bb5) aid_touch_area_cam4_ParamLimits

0x1389,	// (0x00027bb5) aid_touch_area_cam4

0xcef2,	// (0x0003371e) battery_pane_cp01

0x145c,	// (0x00027c88) main_camera4_pane_g6_ParamLimits

0x145c,	// (0x00027c88) main_camera4_pane_g6

0x1486,	// (0x00027cb2) main_camera4_pane_t2_ParamLimits

0x1486,	// (0x00027cb2) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0003612f) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0003612f) main_camera4_pane_t

0x14a7,	// (0x00027cd3) aid_touch_area_vid4_ParamLimits

0x14a7,	// (0x00027cd3) aid_touch_area_vid4

0x150e,	// (0x00027d3a) main_video4_pane_g5_ParamLimits

0x150e,	// (0x00027d3a) main_video4_pane_g5

0x1539,	// (0x00027d65) vid4_progress_pane_ParamLimits

0x1539,	// (0x00027d65) vid4_progress_pane

0xd167,	// (0x00033993) main_cset_slider_pane_g18_ParamLimits

0xd167,	// (0x00033993) main_cset_slider_pane_g18

0xd3de,	// (0x00033c0a) cell_cam4_burst_pane_g2_ParamLimits

0xd3de,	// (0x00033c0a) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0003628e) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0003628e) cell_cam4_burst_pane_g

0x27d5,	// (0x00029001) bg_cl_pane_ParamLimits

0x27d5,	// (0x00029001) bg_cl_pane

0x8dc5,	// (0x0002f5f1) cl_header_pane_ParamLimits

0x8dc5,	// (0x0002f5f1) cl_header_pane

0x8dd9,	// (0x0002f605) cl_listscroll_pane_ParamLimits

0x8dd9,	// (0x0002f605) cl_listscroll_pane

0xd5c8,	// (0x00033df4) bg_cl_pane_g1

0xd5d0,	// (0x00033dfc) bg_cl_pane_g2

0xd5d8,	// (0x00033e04) bg_cl_pane_g3

0xd5e0,	// (0x00033e0c) bg_cl_pane_g4

0xd5e8,	// (0x00033e14) bg_cl_pane_g5

0xd5f0,	// (0x00033e1c) bg_cl_pane_g6

0xd5f8,	// (0x00033e24) bg_cl_pane_g7

0xd600,	// (0x00033e2c) bg_cl_pane_g8

0xd608,	// (0x00033e34) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x000362c9) bg_cl_pane_g

0x8de9,	// (0x0002f615) aid_height_cl_leading_ParamLimits

0x8de9,	// (0x0002f615) aid_height_cl_leading

0x8df5,	// (0x0002f621) aid_height_cl_text_ParamLimits

0x8df5,	// (0x0002f621) aid_height_cl_text

0x1dbb,	// (0x000285e7) bg_cl_header_pane_ParamLimits

0x1dbb,	// (0x000285e7) bg_cl_header_pane

0x8e14,	// (0x0002f640) cl_header_pane_g1_ParamLimits

0x8e14,	// (0x0002f640) cl_header_pane_g1

0x8e2a,	// (0x0002f656) cl_header_pane_t1_ParamLimits

0x8e2a,	// (0x0002f656) cl_header_pane_t1

0xd610,	// (0x00033e3c) cl_list_pane

0xd13a,	// (0x00033966) hc_scroll_pane_cp01

0x386d,	// (0x0002a099) bg_cl_header_pane_g1

0xd01c,	// (0x00033848) bg_cl_header_pane_g2

0x388d,	// (0x0002a0b9) bg_cl_header_pane_g3

0xd02c,	// (0x00033858) bg_cl_header_pane_g4

0xd024,	// (0x00033850) bg_cl_header_pane_g5

0xd2ab,	// (0x00033ad7) bg_cl_header_pane_g6

0xd044,	// (0x00033870) bg_cl_header_pane_g7

0xd04c,	// (0x00033878) bg_cl_header_pane_g8

0xd03c,	// (0x00033868) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x000362dc) bg_cl_header_pane_g

0x8e43,	// (0x0002f66f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e43,	// (0x0002f66f) hc_cl_list_double_graphic_heading_pane

0x8e56,	// (0x0002f682) hc_cl_list_single_graphic_pane_ParamLimits

0x8e56,	// (0x0002f682) hc_cl_list_single_graphic_pane

0x8e6e,	// (0x0002f69a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8e6e,	// (0x0002f69a) hc_cl_list_single_graphic_pane_g1

0x8e7a,	// (0x0002f6a6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8e7a,	// (0x0002f6a6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x000362ef) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x000362ef) hc_cl_list_single_graphic_pane_g

0x8e8e,	// (0x0002f6ba) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8e8e,	// (0x0002f6ba) hc_cl_list_single_graphic_pane_t1

0x8e6e,	// (0x0002f69a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8e6e,	// (0x0002f69a) hc_cl_list_double_graphic_heading_pane_g1

0x8ea3,	// (0x0002f6cf) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8ea3,	// (0x0002f6cf) hc_cl_list_double_graphic_heading_pane_g2

0x8eb7,	// (0x0002f6e3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8eb7,	// (0x0002f6e3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x000362f4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x000362f4) hc_cl_list_double_graphic_heading_pane_g

0x8ecb,	// (0x0002f6f7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8ecb,	// (0x0002f6f7) hc_cl_list_double_graphic_heading_pane_t1

0x8ee0,	// (0x0002f70c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ee0,	// (0x0002f70c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x000362fb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x000362fb) hc_cl_list_double_graphic_heading_pane_t

0x1a76,	// (0x000282a2) vid4_progress_pane_g1

0x1a87,	// (0x000282b3) vid4_progress_pane_g2

0xb33b,	// (0x00031b67) vid4_progress_pane_g3

0xcf4a,	// (0x00033776) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00036300) vid4_progress_pane_g

0xd621,	// (0x00033e4d) vid4_progress_pane_t1

0x1a99,	// (0x000282c5) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x0003630b) vid4_progress_pane_t

0x1ac8,	// (0x000282f4) wait_bar_pane_cp07

0xc0bd,	// (0x000328e9) blid_firmament_pane_ParamLimits

0xc100,	// (0x0003292c) popup_blid_sat_info2_window_g1

0xc124,	// (0x00032950) popup_blid_sat_info2_window_t3

0xc132,	// (0x0003295e) popup_blid_sat_info2_window_t4

0xc140,	// (0x0003296c) popup_blid_sat_info2_window_t5

0xc14e,	// (0x0003297a) popup_blid_sat_info2_window_t6

0xc15e,	// (0x0003298a) popup_blid_sat_info2_window_t7

0xc16c,	// (0x00032998) popup_blid_sat_info2_window_t8

0xc17a,	// (0x000329a6) popup_blid_sat_info2_window_t9

0xc188,	// (0x000329b4) popup_blid_sat_info2_window_t10

0xc250,	// (0x00032a7c) aid_firma_cardinal_ParamLimits

0xc264,	// (0x00032a90) blid_firmament_pane_t1_ParamLimits

0xc27b,	// (0x00032aa7) blid_firmament_pane_t2_ParamLimits

0xc292,	// (0x00032abe) blid_firmament_pane_t3_ParamLimits

0xc2a9,	// (0x00032ad5) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00035f1e) blid_firmament_pane_t_ParamLimits

0xc2c0,	// (0x00032aec) blid_sat_info_pane_ParamLimits

0x1dbb,	// (0x000285e7) main_cam_set_pane_ParamLimits

0x7b93,	// (0x0002e3bf) aid_size_cell_colour_35_ParamLimits

0x7bb3,	// (0x0002e3df) aid_size_cell_colour_112_ParamLimits

0x7bd3,	// (0x0002e3ff) aid_size_cell_effect_ParamLimits

0xbd9b,	// (0x000325c7) bg_tb_trans_pane_cp02_ParamLimits

0x43b9,	// (0x0002abe5) heading_imed_pane_ParamLimits

0x7bf3,	// (0x0002e41f) listscroll_imed_pane_ParamLimits

0xb3c9,	// (0x00031bf5) popup_call2_audio_first_window_g5_ParamLimits

0xb3c9,	// (0x00031bf5) popup_call2_audio_first_window_g5

0x1164,	// (0x00027990) aid_size_touch_image3_arrow_left_ParamLimits

0x1164,	// (0x00027990) aid_size_touch_image3_arrow_left

0x1190,	// (0x000279bc) aid_size_touch_image3_arrow_right_ParamLimits

0x1190,	// (0x000279bc) aid_size_touch_image3_arrow_right

0x1ab1,	// (0x000282dd) vid4_progress_pane_t3

0x7f0e,	// (0x0002e73a) main_hwr_training_symbol_option_pane_ParamLimits

0x7f0e,	// (0x0002e73a) main_hwr_training_symbol_option_pane

0xca9a,	// (0x000332c6) popup_hwr_training_preview_window_ParamLimits

0xca9a,	// (0x000332c6) popup_hwr_training_preview_window

0x0ffd,	// (0x00027829) hwr_training_navi_pane_g5_ParamLimits

0x0ffd,	// (0x00027829) hwr_training_navi_pane_g5

0xcffc,	// (0x00033828) popup_char_count_window

0xd004,	// (0x00033830) bg_popup_sub_pane_cp20_ParamLimits

0x19d3,	// (0x000281ff) list_vitu2_match_list_pane_ParamLimits

0x19e2,	// (0x0002820e) vitu2_page_scroll_pane_ParamLimits

0x19e2,	// (0x0002820e) vitu2_page_scroll_pane

0xd690,	// (0x00033ebc) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd690,	// (0x00033ebc) list_single_hwr_training_symbol_option_pane

0xd6a3,	// (0x00033ecf) list_single_hwr_training_symbol_option_pane_g1

0xd6ab,	// (0x00033ed7) list_single_hwr_training_symbol_option_pane_t1

0xd6b9,	// (0x00033ee5) bg_button_pane_cp023

0xd6c2,	// (0x00033eee) bg_button_pane_cp024

0x8ef5,	// (0x0002f721) vitu2_page_scroll_pane_g1

0x8efd,	// (0x0002f729) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00036312) vitu2_page_scroll_pane_g

0x8f07,	// (0x0002f733) vitu2_page_scroll_pane_t1

0xbfd9,	// (0x00032805) popup_char_count_window_g1

0xd6f5,	// (0x00033f21) popup_char_count_window_g2

0xd6fe,	// (0x00033f2a) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00036317) popup_char_count_window_g

0xd707,	// (0x00033f33) popup_char_count_window_t1

0x1b43,	// (0x0002836f) main_vded2_pane

0xc797,	// (0x00032fc3) aid_size_cell_imed_line

0xc7a1,	// (0x00032fcd) grid_imed_line_width_pane

0x15ad,	// (0x00027dd9) vid4_indicators_pane_g4

0xd715,	// (0x00033f41) cell_imed_line_width_pane_ParamLimits

0xd715,	// (0x00033f41) cell_imed_line_width_pane

0xd72b,	// (0x00033f57) cell_imed_line_width_pane_g1

0xc06b,	// (0x00032897) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0003631e) cell_imed_line_width_pane_g

0x8f16,	// (0x0002f742) main_vded2_pane_g1_ParamLimits

0x8f16,	// (0x0002f742) main_vded2_pane_g1

0x8f31,	// (0x0002f75d) main_vded2_pane_g2_ParamLimits

0x8f31,	// (0x0002f75d) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00036323) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00036323) main_vded2_pane_g

0x8f43,	// (0x0002f76f) vded2_slider_pane_ParamLimits

0x8f43,	// (0x0002f76f) vded2_slider_pane

0x8f53,	// (0x0002f77f) aid_size_touch_vded2_end

0x8f5d,	// (0x0002f789) aid_size_touch_vded2_playhead

0xd734,	// (0x00033f60) aid_size_touch_vded2_start

0xd73c,	// (0x00033f68) vded2_slider_bg_pane

0xd745,	// (0x00033f71) vded2_slider_pane_g1

0xd74e,	// (0x00033f7a) vded2_slider_pane_g2

0x8f67,	// (0x0002f793) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00036328) vded2_slider_pane_g

0xd756,	// (0x00033f82) vded2_slider_bg_pane_g1

0xd75f,	// (0x00033f8b) vded2_slider_bg_pane_g2

0xd768,	// (0x00033f94) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0003632f) vded2_slider_bg_pane_g

0x552c,	// (0x0002bd58) aid_postcard_touch_down_pane_ParamLimits

0x552c,	// (0x0002bd58) aid_postcard_touch_down_pane

0x5544,	// (0x0002bd70) aid_postcard_touch_up_pane_ParamLimits

0x5544,	// (0x0002bd70) aid_postcard_touch_up_pane

0x1b43,	// (0x0002836f) main_blid2_pane

0xbda9,	// (0x000325d5) popup_blid2_search_window

0x1b43,	// (0x0002836f) blid2_gps_pane

0x1b43,	// (0x0002836f) blid2_navig_pane

0x1b43,	// (0x0002836f) blid2_search_pane

0x1b43,	// (0x0002836f) blid2_tripm_pane

0x8f72,	// (0x0002f79e) blid2_search_pane_g1_ParamLimits

0x8f72,	// (0x0002f79e) blid2_search_pane_g1

0x8f85,	// (0x0002f7b1) blid2_search_pane_t1_ParamLimits

0x8f85,	// (0x0002f7b1) blid2_search_pane_t1

0x8f97,	// (0x0002f7c3) aid_size_cell_blid2_gps_ParamLimits

0x8f97,	// (0x0002f7c3) aid_size_cell_blid2_gps

0x8faf,	// (0x0002f7db) blid2_gps_pane_g1_ParamLimits

0x8faf,	// (0x0002f7db) blid2_gps_pane_g1

0x8fc3,	// (0x0002f7ef) grid_blid2_satellite_pane_ParamLimits

0x8fc3,	// (0x0002f7ef) grid_blid2_satellite_pane

0x8fdb,	// (0x0002f807) blid2_navig_pane_g1_ParamLimits

0x8fdb,	// (0x0002f807) blid2_navig_pane_g1

0x8fe7,	// (0x0002f813) blid2_navig_pane_t1_ParamLimits

0x8fe7,	// (0x0002f813) blid2_navig_pane_t1

0x9002,	// (0x0002f82e) blid2_navig_pane_t2_ParamLimits

0x9002,	// (0x0002f82e) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00036336) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00036336) blid2_navig_pane_t

0x901d,	// (0x0002f849) blid2_navig_ring_pane_ParamLimits

0x901d,	// (0x0002f849) blid2_navig_ring_pane

0x9038,	// (0x0002f864) blid2_speed_pane_ParamLimits

0x9038,	// (0x0002f864) blid2_speed_pane

0x9044,	// (0x0002f870) blid2_tripm_pane_g1_ParamLimits

0x9044,	// (0x0002f870) blid2_tripm_pane_g1

0x905f,	// (0x0002f88b) blid2_tripm_pane_g2_ParamLimits

0x905f,	// (0x0002f88b) blid2_tripm_pane_g2

0x9073,	// (0x0002f89f) blid2_tripm_pane_g3_ParamLimits

0x9073,	// (0x0002f89f) blid2_tripm_pane_g3

0x9087,	// (0x0002f8b3) blid2_tripm_pane_g4_ParamLimits

0x9087,	// (0x0002f8b3) blid2_tripm_pane_g4

0x909b,	// (0x0002f8c7) blid2_tripm_pane_g5_ParamLimits

0x909b,	// (0x0002f8c7) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x0003633b) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x0003633b) blid2_tripm_pane_g

0x90c1,	// (0x0002f8ed) blid2_tripm_pane_t1_ParamLimits

0x90c1,	// (0x0002f8ed) blid2_tripm_pane_t1

0x90da,	// (0x0002f906) blid2_tripm_pane_t2_ParamLimits

0x90da,	// (0x0002f906) blid2_tripm_pane_t2

0x90f3,	// (0x0002f91f) blid2_tripm_pane_t3_ParamLimits

0x90f3,	// (0x0002f91f) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00036348) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00036348) blid2_tripm_pane_t

0x913a,	// (0x0002f966) cell_blid2_satellite_pane_ParamLimits

0x913a,	// (0x0002f966) cell_blid2_satellite_pane

0x9156,	// (0x0002f982) cell_blid2_satellite_pane_g1

0xd771,	// (0x00033f9d) cell_blid2_satellite_pane_t1

0xc2d0,	// (0x00032afc) blid2_speed_pane_g1

0xd77f,	// (0x00033fab) blid2_speed_pane_t1

0xd78d,	// (0x00033fb9) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x00036351) blid2_speed_pane_t

0xc2d0,	// (0x00032afc) blid2_navig_ring_pane_g1

0x915f,	// (0x0002f98b) blid2_navig_ring_pane_g2

0x9167,	// (0x0002f993) blid2_navig_ring_pane_g3

0x916f,	// (0x0002f99b) blid2_navig_ring_pane_g4

0x9177,	// (0x0002f9a3) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00036356) blid2_navig_ring_pane_g

0x1b43,	// (0x0002836f) bg_popup_window_pane_cp011

0xd79b,	// (0x00033fc7) popup_blid2_search_window_g1

0xd7a3,	// (0x00033fcf) popup_blid2_search_window_t1

0xd7b1,	// (0x00033fdd) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00036361) popup_blid2_search_window_t

0x372a,	// (0x00029f56) main_browser_pane_g1

0x27d5,	// (0x00029001) main_browser_pane_ParamLimits

0xd004,	// (0x00033830) bg_button_pane_cp011_ParamLimits

0x1947,	// (0x00028173) cell_vitu2_function_pane_g1_ParamLimits

0xbd9b,	// (0x000325c7) bg_popup_sub_pane_cp22_ParamLimits

0x8a4d,	// (0x0002f279) input_focus_pane_cp08_ParamLimits

0x8a64,	// (0x0002f290) popup_vitu2_query_button_pane_ParamLimits

0x8a64,	// (0x0002f290) popup_vitu2_query_button_pane

0x8a75,	// (0x0002f2a1) popup_vitu2_query_input_button_pane

0xd328,	// (0x00033b54) popup_vitu2_query_window_g1_ParamLimits

0x8a7f,	// (0x0002f2ab) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00036262) popup_vitu2_query_window_g_ParamLimits

0x1b43,	// (0x0002836f) bg_button_pane_cp026

0x917f,	// (0x0002f9ab) popup_vitu2_query_input_button_pane_g1

0x1b43,	// (0x0002836f) bg_button_pane_cp025

0xd7bf,	// (0x00033feb) popup_vitu2_query_button_pane_t1

0x6fef,	// (0x0002d81b) main_mp3_pane_t6

0x6ffd,	// (0x0002d829) popup_slider_window_cp01

0xcf32,	// (0x0003375e) cam4_battery_pane

0xcf96,	// (0x000337c2) cam4_battery_pane_cp02

0x1a6c,	// (0x00028298) cam4_battery_pane_cp01

0xd619,	// (0x00033e45) cam4_battery_pane_cp03

0xcdcf,	// (0x000335fb) cam4_battery_pane_g1

0xc2d0,	// (0x00032afc) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00036366) cam4_battery_pane_g

0xc196,	// (0x000329c2) popup_blid_sat_info2_window_t11

0x4bc4,	// (0x0002b3f0) aid_size_touch_mv_arrow_left_ParamLimits

0x4bed,	// (0x0002b419) aid_size_touch_mv_arrow_right_ParamLimits

0x4c4b,	// (0x0002b477) navi_pane_g1_ParamLimits

0x4c57,	// (0x0002b483) navi_pane_g2_ParamLimits

0x4c85,	// (0x0002b4b1) navi_pane_g3_ParamLimits

0xf404,	// (0x00035c30) navi_pane_g_ParamLimits

0x4d43,	// (0x0002b56f) navi_pane_mv_t1_ParamLimits

0x7bff,	// (0x0002e42b) grid_imed_effect_pane_ParamLimits

0x32d7,	// (0x00029b03) aid_placing_vt_slider_lsc

0x32e7,	// (0x00029b13) aid_placing_vt_slider_prt

0x1dbb,	// (0x000285e7) bg_tb_trans_pane_cp01_ParamLimits

0xc420,	// (0x00032c4c) popup_image_details_window_g1_ParamLimits

0xc433,	// (0x00032c5f) popup_image_details_window_g2_ParamLimits

0xc448,	// (0x00032c74) popup_image_details_window_g3_ParamLimits

0xc448,	// (0x00032c74) popup_image_details_window_g3

0xf737,	// (0x00035f63) popup_image_details_window_g_ParamLimits

0xc45c,	// (0x00032c88) popup_image_details_window_t1_ParamLimits

0xc46e,	// (0x00032c9a) popup_image_details_window_t2_ParamLimits

0xc487,	// (0x00032cb3) popup_image_details_window_t3_ParamLimits

0xc49b,	// (0x00032cc7) popup_image_details_window_t4_ParamLimits

0xc4b6,	// (0x00032ce2) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x00035f6a) popup_image_details_window_t_ParamLimits

0x8e01,	// (0x0002f62d) cl_header_name_pane_ParamLimits

0x8e01,	// (0x0002f62d) cl_header_name_pane

0x9187,	// (0x0002f9b3) cl_header_name_pane_t1_ParamLimits

0x9187,	// (0x0002f9b3) cl_header_name_pane_t1

0x91a8,	// (0x0002f9d4) cl_header_name_pane_t2_ParamLimits

0x91a8,	// (0x0002f9d4) cl_header_name_pane_t2

0x91ea,	// (0x0002fa16) cl_header_name_pane_t3_ParamLimits

0x91ea,	// (0x0002fa16) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x0003636b) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x0003636b) cl_header_name_pane_t

0x4d14,	// (0x0002b540) navi_pane_mv_g2_ParamLimits

0xcfb9,	// (0x000337e5) field_vitu2_entry_pane_g1_ParamLimits

0xcfc5,	// (0x000337f1) field_vitu2_entry_pane_g2_ParamLimits

0xcfd1,	// (0x000337fd) field_vitu2_entry_pane_g3_ParamLimits

0xcfd1,	// (0x000337fd) field_vitu2_entry_pane_g3

0xf935,	// (0x00036161) field_vitu2_entry_pane_g_ParamLimits

0x17e7,	// (0x00028013) cell_vitu2_itu_pane_g1_ParamLimits

0x17f7,	// (0x00028023) cell_vitu2_itu_pane_g2_ParamLimits

0x17f7,	// (0x00028023) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0003616d) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0003616d) cell_vitu2_itu_pane_g

0xd004,	// (0x00033830) bg_vkb2_func_pane_cp05_ParamLimits

0xd004,	// (0x00033830) bg_vkb2_func_pane_cp05

0xd004,	// (0x00033830) bg_vkb2_func_pane_cp03

0xd004,	// (0x00033830) bg_vkb2_func_pane_cp04

0xd004,	// (0x00033830) bg_vkb2_func_pane_cp10_ParamLimits

0xd004,	// (0x00033830) bg_vkb2_func_pane_cp10

0x8da3,	// (0x0002f5cf) bg_vkb2_func_pane_cp08

0x8d89,	// (0x0002f5b5) bg_vkb2_func_pane_cp06

0x8d97,	// (0x0002f5c3) bg_vkb2_func_pane_cp07

0xd6cb,	// (0x00033ef7) bg_vkb2_func_pane_cp11_ParamLimits

0xd6cb,	// (0x00033ef7) bg_vkb2_func_pane_cp11

0xd6e0,	// (0x00033f0c) bg_vkb2_func_pane_cp12_ParamLimits

0xd6e0,	// (0x00033f0c) bg_vkb2_func_pane_cp12

0x1b43,	// (0x0002836f) bg_vkb2_func_pane_cp09

0xd01c,	// (0x00033848) bg_vkb2_func_pane_g1

0x388d,	// (0x0002a0b9) bg_vkb2_func_pane_g2

0xd024,	// (0x00033850) bg_vkb2_func_pane_g3

0xd02c,	// (0x00033858) bg_vkb2_func_pane_g4

0xd2ab,	// (0x00033ad7) bg_vkb2_func_pane_g5

0xd044,	// (0x00033870) bg_vkb2_func_pane_g6

0xd04c,	// (0x00033878) bg_vkb2_func_pane_g7

0xd03c,	// (0x00033868) bg_vkb2_func_pane_g8

0x386d,	// (0x0002a099) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00036372) bg_vkb2_func_pane_g

0x90af,	// (0x0002f8db) blid2_tripm_pane_g6_ParamLimits

0x90af,	// (0x0002f8db) blid2_tripm_pane_g6

0xcd89,	// (0x000335b5) mp4_progress_pane_g1

0x9126,	// (0x0002f952) blid2_tripm_values_pane_ParamLimits

0x9126,	// (0x0002f952) blid2_tripm_values_pane

0x921b,	// (0x0002fa47) blid2_tripm_values_pane_t1

0x9229,	// (0x0002fa55) blid2_tripm_values_pane_t2

0x9237,	// (0x0002fa63) blid2_tripm_values_pane_t3

0x9245,	// (0x0002fa71) blid2_tripm_values_pane_t4

0x9253,	// (0x0002fa7f) blid2_tripm_values_pane_t5

0x9261,	// (0x0002fa8d) blid2_tripm_values_pane_t6

0x926f,	// (0x0002fa9b) blid2_tripm_values_pane_t7

0x927d,	// (0x0002faa9) blid2_tripm_values_pane_t8

0x928b,	// (0x0002fab7) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00036385) blid2_tripm_values_pane_t

0x331e,	// (0x00029b4a) call_video_pane_t1_ParamLimits

0x3338,	// (0x00029b64) call_video_pane_t2_ParamLimits

0xf28d,	// (0x00035ab9) call_video_pane_t_ParamLimits

0x5445,	// (0x0002bc71) msg_header_pane_g1_ParamLimits

0x5453,	// (0x0002bc7f) msg_header_pane_g2_ParamLimits

0x5453,	// (0x0002bc7f) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x00035cd3) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x00035cd3) msg_header_pane_g

0x27d5,	// (0x00029001) main_clock2_pane_ParamLimits

0x7986,	// (0x0002e1b2) grid_clock2_toolbar_pane_ParamLimits

0x7986,	// (0x0002e1b2) grid_clock2_toolbar_pane

0x7986,	// (0x0002e1b2) listscroll_clock2_pane_ParamLimits

0x7986,	// (0x0002e1b2) listscroll_clock2_pane

0x7a6e,	// (0x0002e29a) main_clock2_pane_t3_ParamLimits

0x7a6e,	// (0x0002e29a) main_clock2_pane_t3

0x7a89,	// (0x0002e2b5) main_clock2_pane_t4_ParamLimits

0x7a89,	// (0x0002e2b5) main_clock2_pane_t4

0xd7cd,	// (0x00033ff9) cell_clock2_toolbar_pane

0xd7d5,	// (0x00034001) cell_clock2_toolbar_pane_cp01

0xd7d5,	// (0x00034001) cell_clock2_toolbar_pane_cp02

0xd7dd,	// (0x00034009) cell_clock2_toolbar_pane_cp03

0xd7e5,	// (0x00034011) list_clock2_pane

0x494e,	// (0x0002b17a) scroll_pane_cp10

0xd7ed,	// (0x00034019) list_single_clock2_pane_ParamLimits

0xd7ed,	// (0x00034019) list_single_clock2_pane

0x4db5,	// (0x0002b5e1) list_highlight_pane_cp08

0xd7fa,	// (0x00034026) list_single_clock2_pane_t1

0xd808,	// (0x00034034) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x00036398) list_single_clock2_pane_t

0x1b43,	// (0x0002836f) bg_button_pane_cp10

0xd816,	// (0x00034042) cell_clock2_toolbar_pane_g1

0x0adb,	// (0x00027307) aid_main_viewer_pane_g1_ParamLimits

0x0adb,	// (0x00027307) aid_main_viewer_pane_g1

0x0ae9,	// (0x00027315) aid_main_viewer_pane_g2_ParamLimits

0x0ae9,	// (0x00027315) aid_main_viewer_pane_g2

0x54e2,	// (0x0002bd0e) aid_main_viewer_pane_g3_ParamLimits

0x54e2,	// (0x0002bd0e) aid_main_viewer_pane_g3

0x54f1,	// (0x0002bd1d) aid_main_viewer_pane_g4_ParamLimits

0x54f1,	// (0x0002bd1d) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x00035ce4) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x00035ce4) aid_main_viewer_pane_g

0x665f,	// (0x0002ce8b) main_calc_pane_ParamLimits

0x6673,	// (0x0002ce9f) main_dialer2_pane_ParamLimits

0x1b43,	// (0x0002836f) main_cam6_pane

0x1b43,	// (0x0002836f) main_vid6_pane

0x7992,	// (0x0002e1be) listscroll_gen_pane_cp06_ParamLimits

0x7992,	// (0x0002e1be) listscroll_gen_pane_cp06

0x7aa4,	// (0x0002e2d0) main_clock2_pane_t5_ParamLimits

0x7aa4,	// (0x0002e2d0) main_clock2_pane_t5

0x7b06,	// (0x0002e332) aid_call2_pane_cp10_ParamLimits

0x7b18,	// (0x0002e344) aid_call_pane_cp10_ParamLimits

0x4b4f,	// (0x0002b37b) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4b4f,	// (0x0002b37b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7b2a,	// (0x0002e356) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7b2a,	// (0x0002e356) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4b4f,	// (0x0002b37b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0003601a) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b40,	// (0x0002e36c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7ff6,	// (0x0002e822) cell_dialer2_keypad_pane_g2_ParamLimits

0x7ff6,	// (0x0002e822) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x00036100) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x00036100) cell_dialer2_keypad_pane_g

0x8012,	// (0x0002e83e) cell_dialer2_keypad_pane_t1

0x8532,	// (0x0002ed5e) main_cset_text2_pane_ParamLimits

0x8532,	// (0x0002ed5e) main_cset_text2_pane

0xd520,	// (0x00033d4c) area_vitu2_query_pane_g1_ParamLimits

0x8d28,	// (0x0002f554) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x000362b5) area_vitu2_query_pane_g_ParamLimits

0xd5a4,	// (0x00033dd0) area_vitu2_query_pane_t7_ParamLimits

0xd5a4,	// (0x00033dd0) area_vitu2_query_pane_t7

0x8d89,	// (0x0002f5b5) bg_button_pane_cp018_ParamLimits

0x8d97,	// (0x0002f5c3) bg_button_pane_cp021_ParamLimits

0x8da3,	// (0x0002f5cf) bg_button_pane_cp022_ParamLimits

0x8da3,	// (0x0002f5cf) bg_vkb2_func_pane_cp08_ParamLimits

0x8d89,	// (0x0002f5b5) bg_vkb2_func_pane_cp06_ParamLimits

0x8d97,	// (0x0002f5c3) bg_vkb2_func_pane_cp07_ParamLimits

0x8db4,	// (0x0002f5e0) input_focus_pane_cp09_ParamLimits

0xd81e,	// (0x0003404a) cam6_autofocus_pane_ParamLimits

0xd81e,	// (0x0003404a) cam6_autofocus_pane

0x1ada,	// (0x00028306) cam6_image_uncrop_pane_ParamLimits

0x1ada,	// (0x00028306) cam6_image_uncrop_pane

0x1ae9,	// (0x00028315) cam6_indi_pane_ParamLimits

0x1ae9,	// (0x00028315) cam6_indi_pane

0x1aff,	// (0x0002832b) cam6_mode_pane_ParamLimits

0x1aff,	// (0x0002832b) cam6_mode_pane

0x1b11,	// (0x0002833d) cam6_timer_pane_ParamLimits

0x1b11,	// (0x0002833d) cam6_timer_pane

0x1b1d,	// (0x00028349) cam6_zoom_pane_ParamLimits

0x1b1d,	// (0x00028349) cam6_zoom_pane

0x9299,	// (0x0002fac5) cam6_mode_pane_g1_ParamLimits

0x9299,	// (0x0002fac5) cam6_mode_pane_g1

0x92a9,	// (0x0002fad5) cam6_mode_pane_g2_ParamLimits

0x92a9,	// (0x0002fad5) cam6_mode_pane_g2

0x92b9,	// (0x0002fae5) cam6_mode_pane_g3_ParamLimits

0x92b9,	// (0x0002fae5) cam6_mode_pane_g3

0x92c9,	// (0x0002faf5) cam6_mode_pane_g4_ParamLimits

0x92c9,	// (0x0002faf5) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x0003639d) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x0003639d) cam6_mode_pane_g

0xd82c,	// (0x00034058) bg_tb_trans_pane_cp08_ParamLimits

0xd82c,	// (0x00034058) bg_tb_trans_pane_cp08

0xd83a,	// (0x00034066) cam6_battery_pane_ParamLimits

0xd83a,	// (0x00034066) cam6_battery_pane

0xd850,	// (0x0003407c) cam6_indi_pane_g1_ParamLimits

0xd850,	// (0x0003407c) cam6_indi_pane_g1

0xd862,	// (0x0003408e) cam6_indi_pane_g2_ParamLimits

0xd862,	// (0x0003408e) cam6_indi_pane_g2

0xd874,	// (0x000340a0) cam6_indi_pane_g3_ParamLimits

0xd874,	// (0x000340a0) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x000363a6) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x000363a6) cam6_indi_pane_g

0xd886,	// (0x000340b2) cam6_indi_pane_t1_ParamLimits

0xd886,	// (0x000340b2) cam6_indi_pane_t1

0x81d8,	// (0x0002ea04) cam6_autofocus_pane_g1

0x81d0,	// (0x0002e9fc) cam6_autofocus_pane_g2

0x81e8,	// (0x0002ea14) cam6_autofocus_pane_g3

0x81e0,	// (0x0002ea0c) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x000363ad) cam6_autofocus_pane_g

0xd8ac,	// (0x000340d8) cam6_timer_pane_g1

0xd8b4,	// (0x000340e0) cam6_timer_pane_t1

0xd8c2,	// (0x000340ee) cam6_zoom_cont_pane

0xd8ca,	// (0x000340f6) cam6_zoom_pane_g1

0xd8d2,	// (0x000340fe) cam6_zoom_pane_g2

0x92d9,	// (0x0002fb05) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x000363b6) cam6_zoom_pane_g

0xc2d0,	// (0x00032afc) cam6_battery_pane_g1

0xc2d0,	// (0x00032afc) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00035f27) cam6_battery_pane_g

0xd8da,	// (0x00034106) cam6_zoom_cont_pane_g1

0xd8e3,	// (0x0003410f) cam6_zoom_cont_pane_g2

0xd8ec,	// (0x00034118) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x000363bd) cam6_zoom_cont_pane_g

0x92f6,	// (0x0002fb22) cam6_mode_pane_cp_ParamLimits

0x92f6,	// (0x0002fb22) cam6_mode_pane_cp

0x9308,	// (0x0002fb34) cam6_zoom_pane_cp_ParamLimits

0x9308,	// (0x0002fb34) cam6_zoom_pane_cp

0x9316,	// (0x0002fb42) vid6_image_uncrop_cif_pane_ParamLimits

0x9316,	// (0x0002fb42) vid6_image_uncrop_cif_pane

0x9326,	// (0x0002fb52) vid6_image_uncrop_nhd_pane_ParamLimits

0x9326,	// (0x0002fb52) vid6_image_uncrop_nhd_pane

0x9335,	// (0x0002fb61) vid6_image_uncrop_vga_pane_ParamLimits

0x9335,	// (0x0002fb61) vid6_image_uncrop_vga_pane

0x9344,	// (0x0002fb70) vid6_image_uncrop_wvga_pane_ParamLimits

0x9344,	// (0x0002fb70) vid6_image_uncrop_wvga_pane

0x9353,	// (0x0002fb7f) vid6_indi_pane_ParamLimits

0x9353,	// (0x0002fb7f) vid6_indi_pane

0xd82c,	// (0x00034058) bg_tb_trans_pane_cp09_ParamLimits

0xd82c,	// (0x00034058) bg_tb_trans_pane_cp09

0xd904,	// (0x00034130) cam6_battery_pane_cp_ParamLimits

0xd904,	// (0x00034130) cam6_battery_pane_cp

0xd910,	// (0x0003413c) vid6_indi_pane_g1_ParamLimits

0xd910,	// (0x0003413c) vid6_indi_pane_g1

0xd922,	// (0x0003414e) vid6_indi_pane_g2_ParamLimits

0xd922,	// (0x0003414e) vid6_indi_pane_g2

0xd934,	// (0x00034160) vid6_indi_pane_g3_ParamLimits

0xd934,	// (0x00034160) vid6_indi_pane_g3

0xd94b,	// (0x00034177) vid6_indi_pane_g4_ParamLimits

0xd94b,	// (0x00034177) vid6_indi_pane_g4

0xd962,	// (0x0003418e) vid6_indi_pane_g5_ParamLimits

0xd962,	// (0x0003418e) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x000363c4) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x000363c4) vid6_indi_pane_g

0xd97c,	// (0x000341a8) vid6_indi_pane_t1_ParamLimits

0xd97c,	// (0x000341a8) vid6_indi_pane_t1

0xd992,	// (0x000341be) vid6_indi_pane_t2_ParamLimits

0xd992,	// (0x000341be) vid6_indi_pane_t2

0xd9ba,	// (0x000341e6) vid6_indi_pane_t3_ParamLimits

0xd9ba,	// (0x000341e6) vid6_indi_pane_t3

0xd9e2,	// (0x0003420e) vid6_indi_pane_t4_ParamLimits

0xd9e2,	// (0x0003420e) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x000363cf) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x000363cf) vid6_indi_pane_t

0xda06,	// (0x00034232) wait_bar_pane_cp08

0x936b,	// (0x0002fb97) main_cset_text2_pane_t1_ParamLimits

0x936b,	// (0x0002fb97) main_cset_text2_pane_t1

0x92e1,	// (0x0002fb0d) listscroll_gen_pane_cp06_t1_ParamLimits

0x92e1,	// (0x0002fb0d) listscroll_gen_pane_cp06_t1

0x1b43,	// (0x0002836f) main_cam6_set_pane

0xcf24,	// (0x00033750) bg_tb_trans_pane_cp06_ParamLimits

0xcf3a,	// (0x00033766) cam4_indicators_pane_g1_ParamLimits

0xcf4a,	// (0x00033776) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0003613d) cam4_indicators_pane_g_ParamLimits

0xcf62,	// (0x0003378e) cam4_indicators_pane_t1_ParamLimits

0xcf88,	// (0x000337b4) bg_tb_trans_pane_cp07_ParamLimits

0x1582,	// (0x00027dae) vid4_indicators_pane_g1_ParamLimits

0x1591,	// (0x00027dbd) vid4_indicators_pane_g2_ParamLimits

0x15a0,	// (0x00027dcc) vid4_indicators_pane_g3_ParamLimits

0x15ad,	// (0x00027dd9) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0003614f) vid4_indicators_pane_g_ParamLimits

0x15c5,	// (0x00027df1) vid4_indicators_pane_t1_ParamLimits

0x1a76,	// (0x000282a2) vid4_progress_pane_g1_ParamLimits

0x1a87,	// (0x000282b3) vid4_progress_pane_g2_ParamLimits

0xb33b,	// (0x00031b67) vid4_progress_pane_g3_ParamLimits

0xcf4a,	// (0x00033776) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00036300) vid4_progress_pane_g_ParamLimits

0xd621,	// (0x00033e4d) vid4_progress_pane_t1_ParamLimits

0x1a99,	// (0x000282c5) vid4_progress_pane_t2_ParamLimits

0x1ab1,	// (0x000282dd) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x0003630b) vid4_progress_pane_t_ParamLimits

0x1ac8,	// (0x000282f4) wait_bar_pane_cp07_ParamLimits

0x938c,	// (0x0002fbb8) main_cam6_set_pane_g2_ParamLimits

0x938c,	// (0x0002fbb8) main_cam6_set_pane_g2

0x93b2,	// (0x0002fbde) main_cset6_listscroll_pane_ParamLimits

0x93b2,	// (0x0002fbde) main_cset6_listscroll_pane

0x93d0,	// (0x0002fbfc) main_cset6_slider_pane_ParamLimits

0x93d0,	// (0x0002fbfc) main_cset6_slider_pane

0x93e6,	// (0x0002fc12) main_cset6_text2_pane_ParamLimits

0x93e6,	// (0x0002fc12) main_cset6_text2_pane

0xda15,	// (0x00034241) main_cset6_text_pane

0xda1d,	// (0x00034249) main_cset_list_pane_copy1_ParamLimits

0xda1d,	// (0x00034249) main_cset_list_pane_copy1

0xda2d,	// (0x00034259) scroll_pane_cp028_copy1

0x93f4,	// (0x0002fc20) cset_list_set_pane_copy1

0x9408,	// (0x0002fc34) aid_position_infowindow_above_copy1

0x9410,	// (0x0002fc3c) aid_position_infowindow_below_copy1

0x9418,	// (0x0002fc44) cset_list_set_pane_g1_copy1

0x9420,	// (0x0002fc4c) cset_list_set_pane_g3_copy1_ParamLimits

0x9420,	// (0x0002fc4c) cset_list_set_pane_g3_copy1

0x942f,	// (0x0002fc5b) cset_list_set_pane_t1_copy1_ParamLimits

0x942f,	// (0x0002fc5b) cset_list_set_pane_t1_copy1

0x1dbb,	// (0x000285e7) list_highlight_pane_cp021_copy1_ParamLimits

0x1dbb,	// (0x000285e7) list_highlight_pane_cp021_copy1

0xda36,	// (0x00034262) cset6_slider_pane_ParamLimits

0xda36,	// (0x00034262) cset6_slider_pane

0xda62,	// (0x0003428e) main_cset6_slider_pane_g1_ParamLimits

0xda62,	// (0x0003428e) main_cset6_slider_pane_g1

0x9444,	// (0x0002fc70) main_cset6_slider_pane_g2_ParamLimits

0x9444,	// (0x0002fc70) main_cset6_slider_pane_g2

0xda8a,	// (0x000342b6) main_cset6_slider_pane_g3_ParamLimits

0xda8a,	// (0x000342b6) main_cset6_slider_pane_g3

0x946c,	// (0x0002fc98) main_cset6_slider_pane_g4_ParamLimits

0x946c,	// (0x0002fc98) main_cset6_slider_pane_g4

0x9478,	// (0x0002fca4) main_cset6_slider_pane_g5_ParamLimits

0x9478,	// (0x0002fca4) main_cset6_slider_pane_g5

0xd14f,	// (0x0003397b) main_cset6_slider_pane_g7_ParamLimits

0xd14f,	// (0x0003397b) main_cset6_slider_pane_g7

0xd15b,	// (0x00033987) main_cset6_slider_pane_g8_ParamLimits

0xd15b,	// (0x00033987) main_cset6_slider_pane_g8

0x85e1,	// (0x0002ee0d) main_cset6_slider_pane_g9_ParamLimits

0x85e1,	// (0x0002ee0d) main_cset6_slider_pane_g9

0x85ed,	// (0x0002ee19) main_cset6_slider_pane_g10_ParamLimits

0x85ed,	// (0x0002ee19) main_cset6_slider_pane_g10

0x85f9,	// (0x0002ee25) main_cset6_slider_pane_g11_ParamLimits

0x85f9,	// (0x0002ee25) main_cset6_slider_pane_g11

0x8605,	// (0x0002ee31) main_cset6_slider_pane_g12_ParamLimits

0x8605,	// (0x0002ee31) main_cset6_slider_pane_g12

0x8611,	// (0x0002ee3d) main_cset6_slider_pane_g13_ParamLimits

0x8611,	// (0x0002ee3d) main_cset6_slider_pane_g13

0x861d,	// (0x0002ee49) main_cset6_slider_pane_g14_ParamLimits

0x861d,	// (0x0002ee49) main_cset6_slider_pane_g14

0x9486,	// (0x0002fcb2) main_cset6_slider_pane_g15_ParamLimits

0x9486,	// (0x0002fcb2) main_cset6_slider_pane_g15

0x8641,	// (0x0002ee6d) main_cset6_slider_pane_g16_ParamLimits

0x8641,	// (0x0002ee6d) main_cset6_slider_pane_g16

0x864f,	// (0x0002ee7b) main_cset6_slider_pane_g17_ParamLimits

0x864f,	// (0x0002ee7b) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x000363d8) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x000363d8) main_cset6_slider_pane_g

0xda96,	// (0x000342c2) main_cset6_slider_pane_t1_ParamLimits

0xda96,	// (0x000342c2) main_cset6_slider_pane_t1

0x94b6,	// (0x0002fce2) main_cset6_slider_pane_t2_ParamLimits

0x94b6,	// (0x0002fce2) main_cset6_slider_pane_t2

0x94e1,	// (0x0002fd0d) main_cset6_slider_pane_t3_ParamLimits

0x94e1,	// (0x0002fd0d) main_cset6_slider_pane_t3

0x950c,	// (0x0002fd38) main_cset6_slider_pane_t4_ParamLimits

0x950c,	// (0x0002fd38) main_cset6_slider_pane_t4

0x9539,	// (0x0002fd65) main_cset6_slider_pane_t5_ParamLimits

0x9539,	// (0x0002fd65) main_cset6_slider_pane_t5

0xdad7,	// (0x00034303) main_cset6_slider_pane_t7_ParamLimits

0xdad7,	// (0x00034303) main_cset6_slider_pane_t7

0x9566,	// (0x0002fd92) main_cset6_slider_pane_t8_ParamLimits

0x9566,	// (0x0002fd92) main_cset6_slider_pane_t8

0x958a,	// (0x0002fdb6) main_cset6_slider_pane_t9_ParamLimits

0x958a,	// (0x0002fdb6) main_cset6_slider_pane_t9

0x95ae,	// (0x0002fdda) main_cset6_slider_pane_t10_ParamLimits

0x95ae,	// (0x0002fdda) main_cset6_slider_pane_t10

0x95d2,	// (0x0002fdfe) main_cset6_slider_pane_t11_ParamLimits

0x95d2,	// (0x0002fdfe) main_cset6_slider_pane_t11

0xdb0d,	// (0x00034339) main_cset6_slider_pane_t14_ParamLimits

0xdb0d,	// (0x00034339) main_cset6_slider_pane_t14

0xdb46,	// (0x00034372) main_cset6_slider_pane_t15_ParamLimits

0xdb46,	// (0x00034372) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x000363fd) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x000363fd) main_cset6_slider_pane_t

0xdb7f,	// (0x000343ab) cset_slider_pane_g1_copy1

0xdb88,	// (0x000343b4) cset_slider_pane_g2_copy1

0xdb91,	// (0x000343bd) cset_slider_pane_g3_copy1

0x1b43,	// (0x0002836f) bg_popup_sub_pane_cp011_copy1

0xd334,	// (0x00033b60) main_cset_text_pane_g1_copy1

0xd33c,	// (0x00033b68) main_cset_text_pane_t1_copy1

0xd34a,	// (0x00033b76) main_cset_text_pane_t2_copy1

0xd358,	// (0x00033b84) main_cset_text_pane_t3_copy1

0xd366,	// (0x00033b92) main_cset_text_pane_t4_copy1

0xd374,	// (0x00033ba0) main_cset_text_pane_t5_copy1

0xd382,	// (0x00033bae) main_cset_text_pane_t6_copy1

0xd390,	// (0x00033bbc) main_cset_text_pane_t7_copy1

0x936b,	// (0x0002fb97) main_cset_text2_pane_t1_copy1

0x1b43,	// (0x0002836f) main_ncimui_pane

0x6901,	// (0x0002d12d) popup_query_ncimui_window_ParamLimits

0x6901,	// (0x0002d12d) popup_query_ncimui_window

0xc565,	// (0x00032d91) field_cale_ev2_pane_g4_ParamLimits

0xc565,	// (0x00032d91) field_cale_ev2_pane_g4

0x7f7b,	// (0x0002e7a7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7f7b,	// (0x0002e7a7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x000360db) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x000360db) cell_video_dialer_keypad_pane_g

0x7f93,	// (0x0002e7bf) cell_video_dialer_keypad_pane_t1

0x1b43,	// (0x0002836f) bg_popup_window_pane_cp012

0x47a3,	// (0x0002afcf) heading_pane_cp06

0xdc89,	// (0x000344b5) ncim_query_content_pane

0x1b43,	// (0x0002836f) bg_popup_heading_pane_cp01

0xdc91,	// (0x000344bd) ncim_heading_pane_t1

0xdc9f,	// (0x000344cb) ncim_indicator_popup_pane

0xdcb1,	// (0x000344dd) ncim_query_button_pane

0xdcc7,	// (0x000344f3) ncim_query_content_pane_t1

0xdcd9,	// (0x00034505) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0003643c) ncim_query_content_pane_t

0xdd13,	// (0x0003453f) ncim_query_list_pane

0xdd25,	// (0x00034551) ncim_query_popup_pane

0xdc9f,	// (0x000344cb) ncim_indicator_popup_pane_ParamLimits

0x96f1,	// (0x0002ff1d) ncim_query_content_pane_g1_ParamLimits

0x96f1,	// (0x0002ff1d) ncim_query_content_pane_g1

0xdcc7,	// (0x000344f3) ncim_query_content_pane_t1_ParamLimits

0xdcd9,	// (0x00034505) ncim_query_content_pane_t2_ParamLimits

0x96fd,	// (0x0002ff29) ncim_query_content_pane_t3_ParamLimits

0x96fd,	// (0x0002ff29) ncim_query_content_pane_t3

0x9725,	// (0x0002ff51) ncim_query_content_pane_t4_ParamLimits

0x9725,	// (0x0002ff51) ncim_query_content_pane_t4

0x974d,	// (0x0002ff79) ncim_query_content_pane_t5_ParamLimits

0x974d,	// (0x0002ff79) ncim_query_content_pane_t5

0xdceb,	// (0x00034517) ncim_query_content_pane_t6_ParamLimits

0xdceb,	// (0x00034517) ncim_query_content_pane_t6

0xfc10,	// (0x0003643c) ncim_query_content_pane_t_ParamLimits

0xdd13,	// (0x0003453f) ncim_query_list_pane_ParamLimits

0xdd25,	// (0x00034551) ncim_query_popup_pane_ParamLimits

0xdd39,	// (0x00034565) wait_bar_pane_cp04

0x1b43,	// (0x0002836f) input_focus_pane_cp011

0xdd41,	// (0x0003456d) ncim_query_popup_pane_t1

0xdd4f,	// (0x0003457b) ncim_list_query_list_pane_ParamLimits

0xdd4f,	// (0x0003457b) ncim_list_query_list_pane

0x1b43,	// (0x0002836f) bg_button_pane_cp027

0xdd62,	// (0x0003458e) ncim_query_button_pane_g1

0x1b43,	// (0x0002836f) list_highlight_pane_cp012

0xdd6c,	// (0x00034598) ncim_list_query_list_pane_g1

0xdd74,	// (0x000345a0) ncim_list_query_list_pane_t1

0xcf56,	// (0x00033782) cam4_indicators_pane_g3_ParamLimits

0xcf56,	// (0x00033782) cam4_indicators_pane_g3

0x15b9,	// (0x00027de5) vid4_indicators_pane_g5_ParamLimits

0x15b9,	// (0x00027de5) vid4_indicators_pane_g5

0xcf56,	// (0x00033782) vid4_progress_pane_g5_ParamLimits

0xcf56,	// (0x00033782) vid4_progress_pane_g5

0x960a,	// (0x0002fe36) main_ncimui_pane_g1

0x9660,	// (0x0002fe8c) ncimui_group_query_pane_ParamLimits

0x9660,	// (0x0002fe8c) ncimui_group_query_pane

0x969c,	// (0x0002fec8) ncimui_list_pane_ParamLimits

0x969c,	// (0x0002fec8) ncimui_list_pane

0x96bd,	// (0x0002fee9) ncimui_text_pane_ParamLimits

0x96bd,	// (0x0002fee9) ncimui_text_pane

0x9775,	// (0x0002ffa1) ncimui_text_pane_t1_ParamLimits

0x9775,	// (0x0002ffa1) ncimui_text_pane_t1

0xdd82,	// (0x000345ae) ncimui_list_single_graphic_pane_ParamLimits

0xdd82,	// (0x000345ae) ncimui_list_single_graphic_pane

0x9793,	// (0x0002ffbf) ncimui_query_pane_ParamLimits

0x9793,	// (0x0002ffbf) ncimui_query_pane

0x1b43,	// (0x0002836f) list_highlight_pane_cp013

0xdd92,	// (0x000345be) ncim_list_query_list_pane_t1_copy1

0xdd6c,	// (0x00034598) ncim_list_single_graphic_pane_g1

0xdda0,	// (0x000345cc) ncim_query_button_pane_cp01

0xddac,	// (0x000345d8) ncim_query_entry_pane_ParamLimits

0xddac,	// (0x000345d8) ncim_query_entry_pane

0xddbf,	// (0x000345eb) ncimui_query_pane_g1

0xddcb,	// (0x000345f7) ncimui_query_pane_t1_ParamLimits

0xddcb,	// (0x000345f7) ncimui_query_pane_t1

0x1dbb,	// (0x000285e7) input_focus_pane_cp012

0xdde4,	// (0x00034610) ncim_query_entry_pane_t1

0x27d5,	// (0x00029001) main_im_pane_ParamLimits

0x1dbb,	// (0x000285e7) main_mobtv_pane_ParamLimits

0x1dbb,	// (0x000285e7) main_mobtv_pane

0x949e,	// (0x0002fcca) main_cset6_slider_pane_g18_ParamLimits

0x949e,	// (0x0002fcca) main_cset6_slider_pane_g18

0x94aa,	// (0x0002fcd6) main_cset6_slider_pane_g19_ParamLimits

0x94aa,	// (0x0002fcd6) main_cset6_slider_pane_g19

0xddf6,	// (0x00034622) bg_main_mobtv_pane_ParamLimits

0xddf6,	// (0x00034622) bg_main_mobtv_pane

0x97a6,	// (0x0002ffd2) main_mobtv_info_pane

0x97b1,	// (0x0002ffdd) main_mobtv_loading_pane_ParamLimits

0x97b1,	// (0x0002ffdd) main_mobtv_loading_pane

0xde04,	// (0x00034630) main_mobtv_pg_channel_list_pane

0xde0e,	// (0x0003463a) main_mobtv_pg_hdr_pane

0x97be,	// (0x0002ffea) main_mobtv_programe_curr_pane_ParamLimits

0x97be,	// (0x0002ffea) main_mobtv_programe_curr_pane

0x97cb,	// (0x0002fff7) main_mobtv_programe_next_pane_ParamLimits

0x97cb,	// (0x0002fff7) main_mobtv_programe_next_pane

0xde17,	// (0x00034643) popup_mobtv_noti_window

0xc2d0,	// (0x00032afc) main_tv_pg_hdr_pane_g1

0xde21,	// (0x0003464d) main_tv_pg_hdr_pane_g2

0xde29,	// (0x00034655) main_tv_pg_hdr_pane_g3

0xde31,	// (0x0003465d) main_tv_pg_hdr_pane_g4

0xde39,	// (0x00034665) main_tv_pg_hdr_pane_g5

0xde43,	// (0x0003466f) main_tv_pg_hdr_pane_g6

0xde4d,	// (0x00034679) main_tv_pg_hdr_pane_g7

0xde57,	// (0x00034683) main_tv_pg_hdr_pane_g8

0xde61,	// (0x0003468d) main_tv_pg_hdr_pane_g9

0xde6b,	// (0x00034697) main_tv_pg_hdr_pane_g10

0xde75,	// (0x000346a1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00036449) main_tv_pg_hdr_pane_g

0xde7f,	// (0x000346ab) main_tv_pg_hdr_pane_t1

0xde8d,	// (0x000346b9) main_tv_pg_hdr_pane_t2

0xde9b,	// (0x000346c7) main_tv_pg_hdr_pane_t3

0xdeab,	// (0x000346d7) main_tv_pg_hdr_pane_t4

0xdebb,	// (0x000346e7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00036460) main_tv_pg_hdr_pane_t

0xdecb,	// (0x000346f7) single_mobtv_pg_channel_pane_ParamLimits

0xdecb,	// (0x000346f7) single_mobtv_pg_channel_pane

0xdedd,	// (0x00034709) single_mobtv_pg_channel_table_pane

0xdee6,	// (0x00034712) single_mobtv_pg_channel_thumb_pane

0xdeef,	// (0x0003471b) single_tv_pg_channel_pane_g1

0xdef8,	// (0x00034724) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x0003646b) single_tv_pg_channel_pane_g

0xc500,	// (0x00032d2c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc500,	// (0x00032d2c) bg_single_mobtv_pg_channel_thumb_pane

0xdf01,	// (0x0003472d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf01,	// (0x0003472d) single_mobtv_pg_channel_thumb_pane_g1

0xdf0f,	// (0x0003473b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf0f,	// (0x0003473b) single_mobtv_pg_channel_thumb_pane_g2

0xdf1b,	// (0x00034747) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf1b,	// (0x00034747) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00036470) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00036470) single_mobtv_pg_channel_thumb_pane_g

0xdf27,	// (0x00034753) single_mobtv_pg_channel_thumb_pane_t1

0xdf35,	// (0x00034761) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00036477) single_mobtv_pg_channel_thumb_pane_t

0xc2d0,	// (0x00032afc) bg_single_mobtv_pg_channel_table_pane_g1

0xc2d0,	// (0x00032afc) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00035f27) bg_single_mobtv_pg_channel_table_pane_g

0xdf43,	// (0x0003476f) single_mobtv_pg_channel_table_pane_t1

0xdf51,	// (0x0003477d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0003647c) single_mobtv_pg_channel_table_pane_t

0x97e0,	// (0x0003000c) main_mobtv_info_pane_g1_ParamLimits

0x97e0,	// (0x0003000c) main_mobtv_info_pane_g1

0x97fe,	// (0x0003002a) main_mobtv_info_pane_t1_ParamLimits

0x97fe,	// (0x0003002a) main_mobtv_info_pane_t1

0x9876,	// (0x000300a2) main_mobtv_info_pane_t2_ParamLimits

0x9876,	// (0x000300a2) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00036486) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00036486) main_mobtv_info_pane_t

0x9907,	// (0x00030133) wait_bar_pane_cp05

0x9919,	// (0x00030145) main_mobtv_loading_pane_g1_ParamLimits

0x9919,	// (0x00030145) main_mobtv_loading_pane_g1

0x992a,	// (0x00030156) main_mobtv_loading_pane_g2_ParamLimits

0x992a,	// (0x00030156) main_mobtv_loading_pane_g2

0x9936,	// (0x00030162) main_mobtv_loading_pane_g3_ParamLimits

0x9936,	// (0x00030162) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0003648d) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0003648d) main_mobtv_loading_pane_g

0xdf5f,	// (0x0003478b) main_mobtv_loading_pane_t1_ParamLimits

0xdf5f,	// (0x0003478b) main_mobtv_loading_pane_t1

0xdf77,	// (0x000347a3) main_mobtv_loading_pane_t2_ParamLimits

0xdf77,	// (0x000347a3) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x00036494) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x00036494) main_mobtv_loading_pane_t

0x9949,	// (0x00030175) wait_bar_pane_cp06_ParamLimits

0x9949,	// (0x00030175) wait_bar_pane_cp06

0xdf9b,	// (0x000347c7) main_mobtv_programe_curr_pane_t1

0xdfa9,	// (0x000347d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x00036499) main_mobtv_programe_curr_pane_t

0xdfb7,	// (0x000347e3) main_mobtv_programe_next_pane_t1

0xdfc5,	// (0x000347f1) main_mobtv_programe_next_pane_t2

0xdfd3,	// (0x000347ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x0003649e) main_mobtv_programe_next_pane_t

0x1b43,	// (0x0002836f) bg_popup_mobtv_noti_window_pane

0xdfe1,	// (0x0003480d) popup_mobtv_noti_window_g1

0xdfe9,	// (0x00034815) popup_mobtv_noti_window_t1

0xdff7,	// (0x00034823) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x000364a5) popup_mobtv_noti_window_t

0xc2d0,	// (0x00032afc) bg_popup_mobtv_noti_window_pane_g1

0x1b43,	// (0x0002836f) sc_clock_pane

0x1b43,	// (0x0002836f) main_fs_bigclock_pane

0x9110,	// (0x0002f93c) blid2_tripm_pane_t4_ParamLimits

0x9110,	// (0x0002f93c) blid2_tripm_pane_t4

0x9958,	// (0x00030184) sc_clock_pane_g1_ParamLimits

0x9958,	// (0x00030184) sc_clock_pane_g1

0x996a,	// (0x00030196) sc_clock_pane_t1_ParamLimits

0x996a,	// (0x00030196) sc_clock_pane_t1

0x998e,	// (0x000301ba) sc_clock_pane_t2_ParamLimits

0x998e,	// (0x000301ba) sc_clock_pane_t2

0x99a6,	// (0x000301d2) sc_clock_pane_t3_ParamLimits

0x99a6,	// (0x000301d2) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x000364aa) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x000364aa) sc_clock_pane_t

0xa7d1,	// (0x00030ffd) main_fs_bigclock_indicator_pane_ParamLimits

0xa7d1,	// (0x00030ffd) main_fs_bigclock_indicator_pane

0xc4d0,	// (0x00032cfc) main_fs_bigclock_pane_g1_ParamLimits

0xc4d0,	// (0x00032cfc) main_fs_bigclock_pane_g1

0xa7dd,	// (0x00031009) main_fs_bigclock_pane_t1_ParamLimits

0xa7dd,	// (0x00031009) main_fs_bigclock_pane_t1

0xa7ef,	// (0x0003101b) main_fs_bigclock_pane_t2_ParamLimits

0xa7ef,	// (0x0003101b) main_fs_bigclock_pane_t2

0xa803,	// (0x0003102f) main_fs_bigclock_pane_t3_ParamLimits

0xa803,	// (0x0003102f) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x000366a9) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x000366a9) main_fs_bigclock_pane_t

0xec79,	// (0x000354a5) main_fs_bigclock_indicator_pane_g1

0xdcb9,	// (0x000344e5) ncim_query_content_pane_g2_ParamLimits

0xdcb9,	// (0x000344e5) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00036437) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00036437) ncim_query_content_pane_g

0x99bd,	// (0x000301e9) sc_clock_pane_t4_ParamLimits

0x99bd,	// (0x000301e9) sc_clock_pane_t4

0x1dbb,	// (0x000285e7) main_radioblah_pane

0xce76,	// (0x000336a2) cell_call4_button_pane_t1_copy1_ParamLimits

0xce76,	// (0x000336a2) cell_call4_button_pane_t1_copy1

0x9612,	// (0x0002fe3e) main_ncimui_pane_t1_ParamLimits

0x9612,	// (0x0002fe3e) main_ncimui_pane_t1

0x962c,	// (0x0002fe58) main_ncimui_pane_t2_ParamLimits

0x962c,	// (0x0002fe58) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x00036430) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x00036430) main_ncimui_pane_t

0xe143,	// (0x0003496f) main_radioblah_anim_pane_ParamLimits

0xe143,	// (0x0003496f) main_radioblah_anim_pane

0xe154,	// (0x00034980) main_radioblah_info_pane_ParamLimits

0xe154,	// (0x00034980) main_radioblah_info_pane

0xe168,	// (0x00034994) main_radioblah_pane_t1_ParamLimits

0xe168,	// (0x00034994) main_radioblah_pane_t1

0xe184,	// (0x000349b0) main_radioblah_pane_t2_ParamLimits

0xe184,	// (0x000349b0) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x000364cb) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x000364cb) main_radioblah_pane_t

0x9a6d,	// (0x00030299) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9a6d,	// (0x00030299) main_radioblah_rocker_ctrl_pane

0xe1cc,	// (0x000349f8) main_radioblah_info_pane_t1_ParamLimits

0xe1cc,	// (0x000349f8) main_radioblah_info_pane_t1

0x9ac5,	// (0x000302f1) main_radioblah_info_pane_t2_ParamLimits

0x9ac5,	// (0x000302f1) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x000364d4) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x000364d4) main_radioblah_info_pane_t

0xc2d0,	// (0x00032afc) main_radioblah_rocker_ctrl_pane_g1

0x9b75,	// (0x000303a1) main_radioblah_rocker_ctrl_pane_g2

0x9b7d,	// (0x000303a9) main_radioblah_rocker_ctrl_pane_g3

0x9b85,	// (0x000303b1) main_radioblah_rocker_ctrl_pane_g4

0x9b8d,	// (0x000303b9) main_radioblah_rocker_ctrl_pane_g5

0x9b95,	// (0x000303c1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x000364dd) main_radioblah_rocker_ctrl_pane_g

0x936b,	// (0x0002fb97) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf06,	// (0x00033732) cam4_image_uncrop_qvga_pane

0xcf7e,	// (0x000337aa) vid4_image_uncrop_qcif_pane

0xd81e,	// (0x0003404a) cam6_image_uncrop_qvga_pane_ParamLimits

0xd81e,	// (0x0003404a) cam6_image_uncrop_qvga_pane

0xd8f4,	// (0x00034120) vid6_image_uncrop_qcif_pane_ParamLimits

0xd8f4,	// (0x00034120) vid6_image_uncrop_qcif_pane

0x1b43,	// (0x0002836f) bg_popup_preview_window_pane_cp03

0xdc6b,	// (0x00034497) list_cset_text2_pane

0xdc73,	// (0x0003449f) main_cset6_text2_pane_g1

0xdc7b,	// (0x000344a7) main_cset6_text2_pane_t1

0x9b9d,	// (0x000303c9) list_cset_text2_pane_t1_ParamLimits

0x9b9d,	// (0x000303c9) list_cset_text2_pane_t1

0x1dbb,	// (0x000285e7) main_radioblah_pane_ParamLimits

0x98f3,	// (0x0003011f) main_mobtv_info_pane_t3_ParamLimits

0x98f3,	// (0x0003011f) main_mobtv_info_pane_t3

0x9a5b,	// (0x00030287) main_radioblah_pane_g1

0x9a95,	// (0x000302c1) main_radioblah_info_pane_g1

0x9b1a,	// (0x00030346) main_radioblah_info_pane_t3_ParamLimits

0x9b1a,	// (0x00030346) main_radioblah_info_pane_t3

0x4172,	// (0x0002a99e) highlight_cell_cale_month_pane_ParamLimits

0x4172,	// (0x0002a99e) highlight_cell_cale_month_pane

0x1b43,	// (0x0002836f) main_phob_fisheye_pane

0xc5ee,	// (0x00032e1a) scroll_pane_cp0031_ParamLimits

0xc5ee,	// (0x00032e1a) scroll_pane_cp0031

0xda06,	// (0x00034232) wait_bar_pane_cp08_ParamLimits

0x93f4,	// (0x0002fc20) cset_list_set_pane_copy1_ParamLimits

0xe206,	// (0x00034a32) highlight_cell_cale_month_pane_g1

0x9bb7,	// (0x000303e3) highlight_cell_cale_month_pane_t1

0xd610,	// (0x00033e3c) list_gen_pane_cp01

0xd13a,	// (0x00033966) scroll_pane_01

0x9bc5,	// (0x000303f1) list_single_double_fisheye_pane

0x9bce,	// (0x000303fa) list_double_fisheye_pane_g1_ParamLimits

0x9bce,	// (0x000303fa) list_double_fisheye_pane_g1

0x9bda,	// (0x00030406) list_double_fisheye_pane_g2_ParamLimits

0x9bda,	// (0x00030406) list_double_fisheye_pane_g2

0x9bee,	// (0x0003041a) list_double_fisheye_pane_g3_ParamLimits

0x9bee,	// (0x0003041a) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x000364ea) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x000364ea) list_double_fisheye_pane_g

0x9c17,	// (0x00030443) list_double_fisheye_pane_t1_ParamLimits

0x9c17,	// (0x00030443) list_double_fisheye_pane_t1

0x9c32,	// (0x0003045e) list_double_fisheye_pane_t2_ParamLimits

0x9c32,	// (0x0003045e) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x000364f5) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x000364f5) list_double_fisheye_pane_t

0x1b43,	// (0x0002836f) main_call5_pane

0x99e8,	// (0x00030214) sc_swipe_pane_ParamLimits

0x99e8,	// (0x00030214) sc_swipe_pane

0x9c67,	// (0x00030493) call5_image_pane_ParamLimits

0x9c67,	// (0x00030493) call5_image_pane

0x9c84,	// (0x000304b0) call5_swipe_1_pane_ParamLimits

0x9c84,	// (0x000304b0) call5_swipe_1_pane

0x9c97,	// (0x000304c3) call5_swipe_2_pane_ParamLimits

0x9c97,	// (0x000304c3) call5_swipe_2_pane

0x9cc4,	// (0x000304f0) popup_call5_audio_first_window_ParamLimits

0x9cc4,	// (0x000304f0) popup_call5_audio_first_window

0xc500,	// (0x00032d2c) call5_swipe_1_pane_g1_ParamLimits

0xc500,	// (0x00032d2c) call5_swipe_1_pane_g1

0xe20e,	// (0x00034a3a) call5_swipe_1_pane_g2_ParamLimits

0xe20e,	// (0x00034a3a) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x000364fa) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x000364fa) call5_swipe_1_pane_g

0xe21a,	// (0x00034a46) call5_swipe_1_pane_t1_ParamLimits

0xe21a,	// (0x00034a46) call5_swipe_1_pane_t1

0xc500,	// (0x00032d2c) call5_swipe_2_pane_g1_ParamLimits

0xc500,	// (0x00032d2c) call5_swipe_2_pane_g1

0xe22f,	// (0x00034a5b) call5_swipe_2_pane_g2_ParamLimits

0xe22f,	// (0x00034a5b) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x000364ff) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x000364ff) call5_swipe_2_pane_g

0xe23b,	// (0x00034a67) call5_swipe_2_pane_t1_ParamLimits

0xe23b,	// (0x00034a67) call5_swipe_2_pane_t1

0xe250,	// (0x00034a7c) sc_swipe_pane_g1_ParamLimits

0xe250,	// (0x00034a7c) sc_swipe_pane_g1

0xe25d,	// (0x00034a89) sc_swipe_pane_g2_ParamLimits

0xe25d,	// (0x00034a89) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x00036504) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x00036504) sc_swipe_pane_g

0xe269,	// (0x00034a95) sc_swipe_pane_t1_ParamLimits

0xe269,	// (0x00034a95) sc_swipe_pane_t1

0x1b43,	// (0x0002836f) main_cmail_launcher_pane

0x9cd9,	// (0x00030505) aid_size_cell_cmail_l_ParamLimits

0x9cd9,	// (0x00030505) aid_size_cell_cmail_l

0x9cf3,	// (0x0003051f) grid_cmail_l_pane_ParamLimits

0x9cf3,	// (0x0003051f) grid_cmail_l_pane

0x9d0e,	// (0x0003053a) cell_cmail_l_pane_ParamLimits

0x9d0e,	// (0x0003053a) cell_cmail_l_pane

0x9d36,	// (0x00030562) cell_cmail_l_pane_g1_ParamLimits

0x9d36,	// (0x00030562) cell_cmail_l_pane_g1

0x9d42,	// (0x0003056e) cell_cmail_l_pane_t1_ParamLimits

0x9d42,	// (0x0003056e) cell_cmail_l_pane_t1

0xe27e,	// (0x00034aaa) cell_cmail_l_pane_t2_ParamLimits

0xe27e,	// (0x00034aaa) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00036509) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00036509) cell_cmail_l_pane_t

0x1dbb,	// (0x000285e7) grid_highlight_pane_cp018_ParamLimits

0x1dbb,	// (0x000285e7) grid_highlight_pane_cp018

0x1c70,	// (0x0002849c) main2_pane_ParamLimits

0x1c70,	// (0x0002849c) main2_pane

0x2956,	// (0x00029182) popup_sp_fs_action_menu_bg_pane_g1

0x295e,	// (0x0002918a) popup_sp_fs_action_menu_bg_pane_g2

0x2966,	// (0x00029192) popup_sp_fs_action_menu_bg_pane_g3

0x296e,	// (0x0002919a) popup_sp_fs_action_menu_bg_pane_g4

0x2976,	// (0x000291a2) popup_sp_fs_action_menu_bg_pane_g5

0x297e,	// (0x000291aa) popup_sp_fs_action_menu_bg_pane_g6

0x2986,	// (0x000291b2) popup_sp_fs_action_menu_bg_pane_g7

0x298e,	// (0x000291ba) popup_sp_fs_action_menu_bg_pane_g8

0x2996,	// (0x000291c2) popup_sp_fs_action_menu_bg_pane_g9

0x299e,	// (0x000291ca) popup_sp_fs_action_menu_bg_pane_g10

0x299e,	// (0x000291ca) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x000359d3) popup_sp_fs_action_menu_bg_pane_g

0x3125,	// (0x00029951) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x2_t3_g3_g1

0x3131,	// (0x0002995d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3131,	// (0x0002995d) list_medium_line_x2_t3_g3_g2

0x313d,	// (0x00029969) list_medium_line_x2_t3_g3_g3_ParamLimits

0x313d,	// (0x00029969) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00035a83) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00035a83) list_medium_line_x2_t3_g3_g

0x3149,	// (0x00029975) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3149,	// (0x00029975) list_medium_line_x2_t3_g3_t1

0x315e,	// (0x0002998a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x315e,	// (0x0002998a) list_medium_line_x2_t3_g3_t2

0x3172,	// (0x0002999e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3172,	// (0x0002999e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00035a8a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00035a8a) list_medium_line_x2_t3_g3_t

0x3125,	// (0x00029951) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x2_t3_g2_g1

0x313d,	// (0x00029969) list_medium_line_x2_t3_g2_g2_ParamLimits

0x313d,	// (0x00029969) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00035a91) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00035a91) list_medium_line_x2_t3_g2_g

0x3187,	// (0x000299b3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3187,	// (0x000299b3) list_medium_line_x2_t3_g2_t1

0x319d,	// (0x000299c9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x319d,	// (0x000299c9) list_medium_line_x2_t3_g2_t2

0x31af,	// (0x000299db) list_medium_line_x2_t3_g2_t3_ParamLimits

0x31af,	// (0x000299db) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x00035a96) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x00035a96) list_medium_line_x2_t3_g2_t

0x3125,	// (0x00029951) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x2_t4_g4_g1

0x31cd,	// (0x000299f9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x31cd,	// (0x000299f9) list_medium_line_x2_t4_g4_g2

0x3131,	// (0x0002995d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3131,	// (0x0002995d) list_medium_line_x2_t4_g4_g3

0x31d9,	// (0x00029a05) list_medium_line_x2_t4_g4_g4_ParamLimits

0x31d9,	// (0x00029a05) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00035a9d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00035a9d) list_medium_line_x2_t4_g4_g

0x31e5,	// (0x00029a11) list_medium_line_x2_t4_g4_t1_ParamLimits

0x31e5,	// (0x00029a11) list_medium_line_x2_t4_g4_t1

0x31fc,	// (0x00029a28) list_medium_line_x2_t4_g4_t2_ParamLimits

0x31fc,	// (0x00029a28) list_medium_line_x2_t4_g4_t2

0x3211,	// (0x00029a3d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3211,	// (0x00029a3d) list_medium_line_x2_t4_g4_t3

0x3223,	// (0x00029a4f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3223,	// (0x00029a4f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x00035aa6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x00035aa6) list_medium_line_x2_t4_g4_t

0x3125,	// (0x00029951) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x2_t2_g4_g1

0x31cd,	// (0x000299f9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x31cd,	// (0x000299f9) list_medium_line_x2_t2_g4_g2

0x3131,	// (0x0002995d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3131,	// (0x0002995d) list_medium_line_x2_t2_g4_g3

0x313d,	// (0x00029969) list_medium_line_x2_t2_g4_g4_ParamLimits

0x313d,	// (0x00029969) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00035b0d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00035b0d) list_medium_line_x2_t2_g4_g

0x4190,	// (0x0002a9bc) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4190,	// (0x0002a9bc) list_medium_line_x2_t2_g4_t1

0x3172,	// (0x0002999e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3172,	// (0x0002999e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00035b16) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00035b16) list_medium_line_x2_t2_g4_t

0x3125,	// (0x00029951) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x2_t2_g3_g1

0x3131,	// (0x0002995d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3131,	// (0x0002995d) list_medium_line_x2_t2_g3_g2

0x313d,	// (0x00029969) list_medium_line_x2_t2_g3_g3_ParamLimits

0x313d,	// (0x00029969) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00035a83) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00035a83) list_medium_line_x2_t2_g3_g

0x41a5,	// (0x0002a9d1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x41a5,	// (0x0002a9d1) list_medium_line_x2_t2_g3_t1

0x3172,	// (0x0002999e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3172,	// (0x0002999e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00035b1b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00035b1b) list_medium_line_x2_t2_g3_t

0x44fb,	// (0x0002ad27) main_sp_fs_list_pane_ParamLimits

0x44fb,	// (0x0002ad27) main_sp_fs_list_pane

0x4507,	// (0x0002ad33) sp_fs_scroll_pane_ParamLimits

0x4507,	// (0x0002ad33) sp_fs_scroll_pane

0x4513,	// (0x0002ad3f) list_medium_line_x2_t3_t1

0x4523,	// (0x0002ad4f) list_medium_line_x2_t3_t2

0x4531,	// (0x0002ad5d) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00035b66) list_medium_line_x2_t3_t

0x453f,	// (0x0002ad6b) list_medium_line_x3_t4_t1

0x454f,	// (0x0002ad7b) list_medium_line_x3_t4_t2

0x455d,	// (0x0002ad89) list_medium_line_x3_t4_t3

0x4531,	// (0x0002ad5d) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00035b6d) list_medium_line_x3_t4_t

0x456b,	// (0x0002ad97) list_medium_line_x4_t5_t1

0x457b,	// (0x0002ada7) list_medium_line_x4_t5_t2

0x455d,	// (0x0002ad89) list_medium_line_x4_t5_t3

0x4589,	// (0x0002adb5) list_medium_line_x4_t5_t4

0x4531,	// (0x0002ad5d) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00035b76) list_medium_line_x4_t5_t

0x3125,	// (0x00029951) list_medium_line_t4_g4_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_t4_g4_g1

0x31d9,	// (0x00029a05) list_medium_line_t4_g4_g2_ParamLimits

0x31d9,	// (0x00029a05) list_medium_line_t4_g4_g2

0x4597,	// (0x0002adc3) list_medium_line_t4_g4_g3_ParamLimits

0x4597,	// (0x0002adc3) list_medium_line_t4_g4_g3

0x313d,	// (0x00029969) list_medium_line_t4_g4_g4_ParamLimits

0x313d,	// (0x00029969) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00035b81) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00035b81) list_medium_line_t4_g4_g

0x45a3,	// (0x0002adcf) list_medium_line_t4_g4_t1_ParamLimits

0x45a3,	// (0x0002adcf) list_medium_line_t4_g4_t1

0x45b8,	// (0x0002ade4) list_medium_line_t4_g4_t2_ParamLimits

0x45b8,	// (0x0002ade4) list_medium_line_t4_g4_t2

0x45ce,	// (0x0002adfa) list_medium_line_t4_g4_t3_ParamLimits

0x45ce,	// (0x0002adfa) list_medium_line_t4_g4_t3

0x3172,	// (0x0002999e) list_medium_line_t4_g4_t4_ParamLimits

0x3172,	// (0x0002999e) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00035b8a) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00035b8a) list_medium_line_t4_g4_t

0x491b,	// (0x0002b147) chi_dic_find_pane_g1

0x6687,	// (0x0002ceb3) main_tport_pane

0xd281,	// (0x00033aad) list_medium_line_plain_t1

0xd2d3,	// (0x00033aff) list_medium_line_t2_g2_g1_ParamLimits

0xd2d3,	// (0x00033aff) list_medium_line_t2_g2_g1

0xd2df,	// (0x00033b0b) list_medium_line_t2_g2_g2_ParamLimits

0xd2df,	// (0x00033b0b) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00036246) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00036246) list_medium_line_t2_g2_g

0x8938,	// (0x0002f164) list_medium_line_t2_g2_t1_ParamLimits

0x8938,	// (0x0002f164) list_medium_line_t2_g2_t1

0x894f,	// (0x0002f17b) list_medium_line_t2_g2_t2_ParamLimits

0x894f,	// (0x0002f17b) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0003624b) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0003624b) list_medium_line_t2_g2_t

0xd636,	// (0x00033e62) aid_sp_fs_list_icon_a_sm

0xd63e,	// (0x00033e6a) aid_sp_fs_list_icon_d

0xd646,	// (0x00033e72) aid_sp_fs_text_primary

0xd64f,	// (0x00033e7b) aid_sp_fs_text_secondary

0xd658,	// (0x00033e84) list_medium_line

0xd658,	// (0x00033e84) list_medium_line_g2

0xd658,	// (0x00033e84) list_medium_line_g3

0xd658,	// (0x00033e84) list_medium_line_plain

0xd658,	// (0x00033e84) list_medium_line_plain_t2

0xd658,	// (0x00033e84) list_medium_line_plain_t3

0xd658,	// (0x00033e84) list_medium_line_right_icon

0xd658,	// (0x00033e84) list_medium_line_right_iconx2

0xd658,	// (0x00033e84) list_medium_line_t2

0xd658,	// (0x00033e84) list_medium_line_t2_g2

0xd658,	// (0x00033e84) list_medium_line_t2_g3

0xd658,	// (0x00033e84) list_medium_line_t2_right_icon

0xd658,	// (0x00033e84) list_medium_line_t2_right_iconx2

0xd658,	// (0x00033e84) list_medium_line_t3

0xd658,	// (0x00033e84) list_medium_line_t3_g2

0xd658,	// (0x00033e84) list_medium_line_t3_g3

0xd658,	// (0x00033e84) list_medium_line_t3_right_iconx2

0xd661,	// (0x00033e8d) list_medium_line_t4_g4

0xd66a,	// (0x00033e96) list_medium_line_x2

0xd66a,	// (0x00033e96) list_medium_line_x2_t2_g2

0xd66a,	// (0x00033e96) list_medium_line_x2_t2_g3

0xd66a,	// (0x00033e96) list_medium_line_x2_t2_g4

0xd66a,	// (0x00033e96) list_medium_line_x2_t3

0xd66a,	// (0x00033e96) list_medium_line_x2_t3_g2

0xd66a,	// (0x00033e96) list_medium_line_x2_t3_g3

0xd66a,	// (0x00033e96) list_medium_line_x2_t3_g4

0xd66a,	// (0x00033e96) list_medium_line_x2_t4_g2

0xd66a,	// (0x00033e96) list_medium_line_x2_t4_g4

0xd673,	// (0x00033e9f) list_medium_line_x3

0xd673,	// (0x00033e9f) list_medium_line_x3_t4

0xd673,	// (0x00033e9f) list_medium_line_x3_t4_g4

0xd661,	// (0x00033e8d) list_medium_line_x4_t4

0xd661,	// (0x00033e8d) list_medium_line_x4_t4_g7

0xd661,	// (0x00033e8d) list_medium_line_x4_t5

0xd67c,	// (0x00033ea8) list_single_fs_dyc_pane_ParamLimits

0xd67c,	// (0x00033ea8) list_single_fs_dyc_pane

0x3125,	// (0x00029951) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x4_t4_g7_g1

0xdb9a,	// (0x000343c6) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb9a,	// (0x000343c6) list_medium_line_x4_t4_g7_g2

0xdba6,	// (0x000343d2) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdba6,	// (0x000343d2) list_medium_line_x4_t4_g7_g3

0xdbb5,	// (0x000343e1) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdbb5,	// (0x000343e1) list_medium_line_x4_t4_g7_g4

0xdbc1,	// (0x000343ed) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdbc1,	// (0x000343ed) list_medium_line_x4_t4_g7_g5

0xdbd0,	// (0x000343fc) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdbd0,	// (0x000343fc) list_medium_line_x4_t4_g7_g6

0xdbdf,	// (0x0003440b) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdbdf,	// (0x0003440b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x00036416) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x00036416) list_medium_line_x4_t4_g7_g

0xdbeb,	// (0x00034417) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdbeb,	// (0x00034417) list_medium_line_x4_t4_g7_t1

0xdc00,	// (0x0003442c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc00,	// (0x0003442c) list_medium_line_x4_t4_g7_t2

0xdc15,	// (0x00034441) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc15,	// (0x00034441) list_medium_line_x4_t4_g7_t3

0xdc2a,	// (0x00034456) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc2a,	// (0x00034456) list_medium_line_x4_t4_g7_t4

0xdc3c,	// (0x00034468) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc3c,	// (0x00034468) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00036425) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00036425) list_medium_line_x4_t4_g7_t

0xdc4e,	// (0x0003447a) list_single_dyc_row_pane_ParamLimits

0xdc4e,	// (0x0003447a) list_single_dyc_row_pane

0x9c54,	// (0x00030480) call5_gesture_pane_ParamLimits

0x9c54,	// (0x00030480) call5_gesture_pane

0x9caa,	// (0x000304d6) call5_windows_pane_ParamLimits

0x9caa,	// (0x000304d6) call5_windows_pane

0x9d58,	// (0x00030584) call5_swipe_1_pane_cp_ParamLimits

0x9d58,	// (0x00030584) call5_swipe_1_pane_cp

0x9d64,	// (0x00030590) call5_swipe_2_pane_cp_ParamLimits

0x9d64,	// (0x00030590) call5_swipe_2_pane_cp

0x4db5,	// (0x0002b5e1) call5_image_pane_cp

0x9d70,	// (0x0003059c) popup_call5_audio_first_window_cp_ParamLimits

0x9d70,	// (0x0003059c) popup_call5_audio_first_window_cp

0xe250,	// (0x00034a7c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe250,	// (0x00034a7c) call5_swipe_1_pane_g1_cp

0xe290,	// (0x00034abc) call5_swipe_1_pane_g2_cp

0xe269,	// (0x00034a95) call5_swipe_1_pane_t1_cp_ParamLimits

0xe269,	// (0x00034a95) call5_swipe_1_pane_t1_cp

0xe250,	// (0x00034a7c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe250,	// (0x00034a7c) call5_swipe_2_pane_g1_cp

0xe298,	// (0x00034ac4) call5_swipe_2_pane_g2_cp

0xe2a0,	// (0x00034acc) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2a0,	// (0x00034acc) call5_swipe_2_pane_t1_cp

0x1dbb,	// (0x000285e7) main_sp_fs_email_pane

0xe2b5,	// (0x00034ae1) main_sp_fs_listscroll_pane_te

0xe2be,	// (0x00034aea) popup_sp_fs_action_menu_pane_ParamLimits

0xe2be,	// (0x00034aea) popup_sp_fs_action_menu_pane

0xc2d0,	// (0x00032afc) bg_sp_fs_ctrlbar_pane_g1

0xe304,	// (0x00034b30) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe30d,	// (0x00034b39) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe316,	// (0x00034b42) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2d0,	// (0x00032afc) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x0003650e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0af,	// (0x000328db) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0af,	// (0x000328db) bg_sp_fs_ctrlbar_ddmenu_pane

0xe31f,	// (0x00034b4b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe31f,	// (0x00034b4b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe32b,	// (0x00034b57) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe32b,	// (0x00034b57) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00036517) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00036517) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe337,	// (0x00034b63) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe337,	// (0x00034b63) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe351,	// (0x00034b7d) list_medium_line_t2_right_icon_g1

0x9d7e,	// (0x000305aa) list_medium_line_t2_right_icon_t1

0x9d8e,	// (0x000305ba) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x0003651c) list_medium_line_t2_right_icon_t

0xbd9b,	// (0x000325c7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbd9b,	// (0x000325c7) bg_sp_fs_ctrlbar_pane

0x9de8,	// (0x00030614) main_sp_fs_ctrlbar_button_pane_cp01

0x9df2,	// (0x0003061e) main_sp_fs_ctrlbar_ddmenu_pane

0xe393,	// (0x00034bbf) main_sp_fs_ctrlbar_pane_g1

0xe39f,	// (0x00034bcb) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x00036521) main_sp_fs_ctrlbar_pane_g

0xe3ab,	// (0x00034bd7) main_sp_fs_ctrlbar_pane_t1

0x9dfc,	// (0x00030628) main_sp_fs_ctrlbar_pane

0x9e20,	// (0x0003064c) main_sp_fs_listscroll_pane_te_cp01

0x9e40,	// (0x0003066c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9e40,	// (0x0003066c) popup_sp_fs_action_menu_pane_cp01

0x1dbb,	// (0x000285e7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1dbb,	// (0x000285e7) bg_sp_fs_highlight_list_pane_cp01

0xe3d0,	// (0x00034bfc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3d0,	// (0x00034bfc) sp_fs_action_menu_list_gene_pane_g1

0xe3df,	// (0x00034c0b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3df,	// (0x00034c0b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0003652b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0003652b) sp_fs_action_menu_list_gene_pane_g

0xe3ec,	// (0x00034c18) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ec,	// (0x00034c18) sp_fs_action_menu_list_gene_pane_t1

0xe404,	// (0x00034c30) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe404,	// (0x00034c30) sp_fs_action_menu_list_gene_pane

0xe427,	// (0x00034c53) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe427,	// (0x00034c53) popup_sp_fs_action_menu_bg_pane

0xe435,	// (0x00034c61) sp_fs_action_menu_list_pane_ParamLimits

0xe435,	// (0x00034c61) sp_fs_action_menu_list_pane

0xe459,	// (0x00034c85) sp_fs_scroll_pane_cp01_ParamLimits

0xe459,	// (0x00034c85) sp_fs_scroll_pane_cp01

0x9e5c,	// (0x00030688) list_medium_line_plain_t2_t1

0x9e6c,	// (0x00030698) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00036530) list_medium_line_plain_t2_t

0x9e7c,	// (0x000306a8) list_medium_line_plain_t3_t1

0x9e8c,	// (0x000306b8) list_medium_line_plain_t3_t2

0x9e9a,	// (0x000306c6) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00036535) list_medium_line_plain_t3_t

0x3125,	// (0x00029951) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x2_t2_g2_g1

0x313d,	// (0x00029969) list_medium_line_x2_t2_g2_g2_ParamLimits

0x313d,	// (0x00029969) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00035a91) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00035a91) list_medium_line_x2_t2_g2_g

0x45a3,	// (0x0002adcf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x45a3,	// (0x0002adcf) list_medium_line_x2_t2_g2_t1

0x3172,	// (0x0002999e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3172,	// (0x0002999e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0003653c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0003653c) list_medium_line_x2_t2_g2_t

0x3125,	// (0x00029951) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x2_t4_g2_g1

0x313d,	// (0x00029969) list_medium_line_x2_t4_g2_g2_ParamLimits

0x313d,	// (0x00029969) list_medium_line_x2_t4_g2_g2

0x0001,

0xf265,	// (0x00035a91) list_medium_line_x2_t4_g2_g_ParamLimits

0xf265,	// (0x00035a91) list_medium_line_x2_t4_g2_g

0x9ea8,	// (0x000306d4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9ea8,	// (0x000306d4) list_medium_line_x2_t4_g2_t1

0x9ec2,	// (0x000306ee) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9ec2,	// (0x000306ee) list_medium_line_x2_t4_g2_t2

0x9ed8,	// (0x00030704) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9ed8,	// (0x00030704) list_medium_line_x2_t4_g2_t3

0x3172,	// (0x0002999e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3172,	// (0x0002999e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00036541) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00036541) list_medium_line_x2_t4_g2_t

0xe47f,	// (0x00034cab) list_medium_line_t3_right_iconx2_g1

0xe351,	// (0x00034b7d) list_medium_line_t3_right_iconx2_g2

0x9eed,	// (0x00030719) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0003654a) list_medium_line_t3_right_iconx2_g

0x9ef7,	// (0x00030723) list_medium_line_t3_right_iconx2_t1

0x9f07,	// (0x00030733) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00036551) list_medium_line_t3_right_iconx2_t

0x3125,	// (0x00029951) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x3_t4_g4_g1

0x3131,	// (0x0002995d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3131,	// (0x0002995d) list_medium_line_x3_t4_g4_g2

0x31d9,	// (0x00029a05) list_medium_line_x3_t4_g4_g3_ParamLimits

0x31d9,	// (0x00029a05) list_medium_line_x3_t4_g4_g3

0xe487,	// (0x00034cb3) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe487,	// (0x00034cb3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00036556) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00036556) list_medium_line_x3_t4_g4_g

0x9f15,	// (0x00030741) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9f15,	// (0x00030741) list_medium_line_x3_t4_g4_t1

0x9f2c,	// (0x00030758) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9f2c,	// (0x00030758) list_medium_line_x3_t4_g4_t2

0xe493,	// (0x00034cbf) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe493,	// (0x00034cbf) list_medium_line_x3_t4_g4_t3

0xe4a8,	// (0x00034cd4) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe4a8,	// (0x00034cd4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0003655f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0003655f) list_medium_line_x3_t4_g4_t

0x9f47,	// (0x00030773) list_single_dyc_row_text_pane_t1_ParamLimits

0x9f47,	// (0x00030773) list_single_dyc_row_text_pane_t1

0x9f90,	// (0x000307bc) list_single_dyc_row_text_pane_t2_ParamLimits

0x9f90,	// (0x000307bc) list_single_dyc_row_text_pane_t2

0xe4c5,	// (0x00034cf1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4c5,	// (0x00034cf1) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00036568) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00036568) list_single_dyc_row_text_pane_t

0xe4d7,	// (0x00034d03) list_single_dyc_row_pane_g1_ParamLimits

0xe4d7,	// (0x00034d03) list_single_dyc_row_pane_g1

0xe4e3,	// (0x00034d0f) list_single_dyc_row_pane_g2_ParamLimits

0xe4e3,	// (0x00034d0f) list_single_dyc_row_pane_g2

0xe4ef,	// (0x00034d1b) list_single_dyc_row_pane_g3_ParamLimits

0xe4ef,	// (0x00034d1b) list_single_dyc_row_pane_g3

0xe4fb,	// (0x00034d27) list_single_dyc_row_pane_g4_ParamLimits

0xe4fb,	// (0x00034d27) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0003656f) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0003656f) list_single_dyc_row_pane_g

0xe507,	// (0x00034d33) list_single_dyc_row_text_pane_ParamLimits

0xe507,	// (0x00034d33) list_single_dyc_row_text_pane

0x1b43,	// (0x0002836f) bg_sp_fs_scroll_pane

0xe526,	// (0x00034d52) thumb_sp_fs_scroll_pane

0xd2d3,	// (0x00033aff) list_medium_line_g1_ParamLimits

0xd2d3,	// (0x00033aff) list_medium_line_g1

0xe52f,	// (0x00034d5b) list_medium_line_t1_ParamLimits

0xe52f,	// (0x00034d5b) list_medium_line_t1

0x3125,	// (0x00029951) list_medium_line_x2_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x2_g1

0x3131,	// (0x0002995d) list_medium_line_x2_g2_ParamLimits

0x3131,	// (0x0002995d) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00036578) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00036578) list_medium_line_x2_g

0xe544,	// (0x00034d70) list_medium_line_x2_t1_ParamLimits

0xe544,	// (0x00034d70) list_medium_line_x2_t1

0x3125,	// (0x00029951) list_medium_line_x3_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x3_g1

0x3131,	// (0x0002995d) list_medium_line_x3_g2_ParamLimits

0x3131,	// (0x0002995d) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00036578) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00036578) list_medium_line_x3_g

0xe544,	// (0x00034d70) list_medium_line_x3_t1_ParamLimits

0xe544,	// (0x00034d70) list_medium_line_x3_t1

0xe55a,	// (0x00034d86) thumb_sp_fs_scroll_pane_g1

0xe563,	// (0x00034d8f) thumb_sp_fs_scroll_pane_g2

0xe56c,	// (0x00034d98) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0003657d) thumb_sp_fs_scroll_pane_g

0xe55a,	// (0x00034d86) bg_sp_fs_scroll_pane_g1

0xe563,	// (0x00034d8f) bg_sp_fs_scroll_pane_g2

0xe56c,	// (0x00034d98) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0003657d) bg_sp_fs_scroll_pane_g

0x3125,	// (0x00029951) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3125,	// (0x00029951) list_medium_line_x2_t3_g4_g1

0x31cd,	// (0x000299f9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x31cd,	// (0x000299f9) list_medium_line_x2_t3_g4_g2

0x3131,	// (0x0002995d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3131,	// (0x0002995d) list_medium_line_x2_t3_g4_g3

0x313d,	// (0x00029969) list_medium_line_x2_t3_g4_g4_ParamLimits

0x313d,	// (0x00029969) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00035b0d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00035b0d) list_medium_line_x2_t3_g4_g

0x9fea,	// (0x00030816) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9fea,	// (0x00030816) list_medium_line_x2_t3_g4_t1

0xa000,	// (0x0003082c) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa000,	// (0x0003082c) list_medium_line_x2_t3_g4_t2

0x3172,	// (0x0002999e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3172,	// (0x0002999e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00036584) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00036584) list_medium_line_x2_t3_g4_t

0xd2d3,	// (0x00033aff) list_medium_line_g2_g1_ParamLimits

0xd2d3,	// (0x00033aff) list_medium_line_g2_g1

0xd2df,	// (0x00033b0b) list_medium_line_g2_g2_ParamLimits

0xd2df,	// (0x00033b0b) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00036246) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00036246) list_medium_line_g2_g

0xe575,	// (0x00034da1) list_medium_line_g2_t1_ParamLimits

0xe575,	// (0x00034da1) list_medium_line_g2_t1

0xd2d3,	// (0x00033aff) list_medium_line_t3_g2_g1_ParamLimits

0xd2d3,	// (0x00033aff) list_medium_line_t3_g2_g1

0xd2df,	// (0x00033b0b) list_medium_line_t3_g2_g2_ParamLimits

0xd2df,	// (0x00033b0b) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00036246) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00036246) list_medium_line_t3_g2_g

0xa019,	// (0x00030845) list_medium_line_t3_g2_t1_ParamLimits

0xa019,	// (0x00030845) list_medium_line_t3_g2_t1

0xa033,	// (0x0003085f) list_medium_line_t3_g2_t2_ParamLimits

0xa033,	// (0x0003085f) list_medium_line_t3_g2_t2

0xa049,	// (0x00030875) list_medium_line_t3_g2_t3_ParamLimits

0xa049,	// (0x00030875) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0003658b) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0003658b) list_medium_line_t3_g2_t

0xe351,	// (0x00034b7d) list_medium_line_right_icon_g1

0xe58a,	// (0x00034db6) list_medium_line_right_icon_t1

0xd2d3,	// (0x00033aff) list_medium_line_t2_g1_ParamLimits

0xd2d3,	// (0x00033aff) list_medium_line_t2_g1

0xa060,	// (0x0003088c) list_medium_line_t2_t1_ParamLimits

0xa060,	// (0x0003088c) list_medium_line_t2_t1

0xa07a,	// (0x000308a6) list_medium_line_t2_t2_ParamLimits

0xa07a,	// (0x000308a6) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00036592) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00036592) list_medium_line_t2_t

0xd2d3,	// (0x00033aff) list_medium_line_t3_g1_ParamLimits

0xd2d3,	// (0x00033aff) list_medium_line_t3_g1

0xa093,	// (0x000308bf) list_medium_line_t3_t1_ParamLimits

0xa093,	// (0x000308bf) list_medium_line_t3_t1

0xa0ad,	// (0x000308d9) list_medium_line_t3_t2_ParamLimits

0xa0ad,	// (0x000308d9) list_medium_line_t3_t2

0xa0c3,	// (0x000308ef) list_medium_line_t3_t3_ParamLimits

0xa0c3,	// (0x000308ef) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00036597) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00036597) list_medium_line_t3_t

0xd2d3,	// (0x00033aff) list_medium_line_g3_g1_ParamLimits

0xd2d3,	// (0x00033aff) list_medium_line_g3_g1

0xe598,	// (0x00034dc4) list_medium_line_g3_g2_ParamLimits

0xe598,	// (0x00034dc4) list_medium_line_g3_g2

0xd2df,	// (0x00033b0b) list_medium_line_g3_g3_ParamLimits

0xd2df,	// (0x00033b0b) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0003659e) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0003659e) list_medium_line_g3_g

0xe5a4,	// (0x00034dd0) list_medium_line_g3_t1_ParamLimits

0xe5a4,	// (0x00034dd0) list_medium_line_g3_t1

0xd2d3,	// (0x00033aff) list_medium_line_t2_g3_g1_ParamLimits

0xd2d3,	// (0x00033aff) list_medium_line_t2_g3_g1

0xe598,	// (0x00034dc4) list_medium_line_t2_g3_g2_ParamLimits

0xe598,	// (0x00034dc4) list_medium_line_t2_g3_g2

0xd2df,	// (0x00033b0b) list_medium_line_t2_g3_g3_ParamLimits

0xd2df,	// (0x00033b0b) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0003659e) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0003659e) list_medium_line_t2_g3_g

0xa0d8,	// (0x00030904) list_medium_line_t2_g3_t1_ParamLimits

0xa0d8,	// (0x00030904) list_medium_line_t2_g3_t1

0xa0ef,	// (0x0003091b) list_medium_line_t2_g3_t2_ParamLimits

0xa0ef,	// (0x0003091b) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x000365a5) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x000365a5) list_medium_line_t2_g3_t

0xd2d3,	// (0x00033aff) list_medium_line_t3_g3_g1_ParamLimits

0xd2d3,	// (0x00033aff) list_medium_line_t3_g3_g1

0xe598,	// (0x00034dc4) list_medium_line_t3_g3_g2_ParamLimits

0xe598,	// (0x00034dc4) list_medium_line_t3_g3_g2

0xd2df,	// (0x00033b0b) list_medium_line_t3_g3_g3_ParamLimits

0xd2df,	// (0x00033b0b) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0003659e) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0003659e) list_medium_line_t3_g3_g

0xa108,	// (0x00030934) list_medium_line_t3_g3_t1_ParamLimits

0xa108,	// (0x00030934) list_medium_line_t3_g3_t1

0xa121,	// (0x0003094d) list_medium_line_t3_g3_t2_ParamLimits

0xa121,	// (0x0003094d) list_medium_line_t3_g3_t2

0xa137,	// (0x00030963) list_medium_line_t3_g3_t3_ParamLimits

0xa137,	// (0x00030963) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x000365aa) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x000365aa) list_medium_line_t3_g3_t

0xe47f,	// (0x00034cab) list_medium_line_right_iconx2_g1

0xe351,	// (0x00034b7d) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x000365b1) list_medium_line_right_iconx2_g

0xe5b9,	// (0x00034de5) list_medium_line_right_iconx2_t1

0xe47f,	// (0x00034cab) list_medium_line_t2_right_iconx2_g1

0xe351,	// (0x00034b7d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x000365b1) list_medium_line_t2_right_iconx2_g

0xa151,	// (0x0003097d) list_medium_line_t2_right_iconx2_t1

0xa161,	// (0x0003098d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x000365b6) list_medium_line_t2_right_iconx2_t

0xe5c7,	// (0x00034df3) list_medium_line_x4_t4_t1

0xa173,	// (0x0003099f) list_medium_line_x4_t4_t2

0xa183,	// (0x000309af) list_medium_line_x4_t4_t3

0xa193,	// (0x000309bf) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x000365bb) list_medium_line_x4_t4_t

0xa1dd,	// (0x00030a09) tport_appsw_pane_ParamLimits

0xa1dd,	// (0x00030a09) tport_appsw_pane

0xa1f0,	// (0x00030a1c) tport_contact_pane_ParamLimits

0xa1f0,	// (0x00030a1c) tport_contact_pane

0xa203,	// (0x00030a2f) tport_listscroll_pane_ParamLimits

0xa203,	// (0x00030a2f) tport_listscroll_pane

0xa219,	// (0x00030a45) cell_tport_appsw_pane_ParamLimits

0xa219,	// (0x00030a45) cell_tport_appsw_pane

0xcfd1,	// (0x000337fd) tport_appsw_pane_g1_ParamLimits

0xcfd1,	// (0x000337fd) tport_appsw_pane_g1

0xe5d5,	// (0x00034e01) tport_contact_pane_g1

0xe5de,	// (0x00034e0a) tport_contact_pane_t1

0xe5ec,	// (0x00034e18) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x000365c4) tport_contact_pane_t

0xe5fa,	// (0x00034e26) list_tport_pane

0xe603,	// (0x00034e2f) scroll_pane_cp_030

0xa25f,	// (0x00030a8b) cell_tport_appsw_pane_g1

0xe61c,	// (0x00034e48) cell_tport_appsw_pane_t1

0x1b43,	// (0x0002836f) grid_highlight_pane_cp019

0xa26f,	// (0x00030a9b) list_tport_double_graphic_pane_ParamLimits

0xa26f,	// (0x00030a9b) list_tport_double_graphic_pane

0x1dbb,	// (0x000285e7) list_highlight_pane_cp023_ParamLimits

0x1dbb,	// (0x000285e7) list_highlight_pane_cp023

0xa27f,	// (0x00030aab) list_tport_double_graphic_pane_g1_ParamLimits

0xa27f,	// (0x00030aab) list_tport_double_graphic_pane_g1

0xa28c,	// (0x00030ab8) list_tport_double_graphic_pane_t1_ParamLimits

0xa28c,	// (0x00030ab8) list_tport_double_graphic_pane_t1

0xa2a1,	// (0x00030acd) list_tport_double_graphic_pane_t2_ParamLimits

0xa2a1,	// (0x00030acd) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x000365d0) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x000365d0) list_tport_double_graphic_pane_t

0x1b43,	// (0x0002836f) main_cale_note_pane

0x17be,	// (0x00027fea) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x17be,	// (0x00027fea) cell_vitu2_function_top_wide_pane_cp01

0x9907,	// (0x00030133) wait_bar_pane_cp05_ParamLimits

0x1b43,	// (0x0002836f) listscroll_cmail_pane

0xe632,	// (0x00034e5e) list_cmail_pane

0xa2bd,	// (0x00030ae9) list_cmail_body_pane

0xa2d5,	// (0x00030b01) list_single_cmail_header_caption_pane

0xa2f2,	// (0x00030b1e) list_single_cmail_header_detail_pane_ParamLimits

0xa2f2,	// (0x00030b1e) list_single_cmail_header_detail_pane

0xa324,	// (0x00030b50) list_single_cmail_header_caption_pane_t1

0xa334,	// (0x00030b60) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa334,	// (0x00030b60) list_single_cmail_header_detail_pane_g1

0xe652,	// (0x00034e7e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe652,	// (0x00034e7e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x000365d5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x000365d5) list_single_cmail_header_detail_pane_g

0xe66b,	// (0x00034e97) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe66b,	// (0x00034e97) list_single_cmail_header_detail_pane_t1

0xe6a9,	// (0x00034ed5) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6a9,	// (0x00034ed5) list_single_cmail_header_editor_pane_bg

0xdef8,	// (0x00034724) list_cmail_body_pane_g1

0xe6bb,	// (0x00034ee7) list_cmail_body_pane_t1

0xd01c,	// (0x00033848) list_single_cmail_header_editor_pane_bg_g1

0x388d,	// (0x0002a0b9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd02c,	// (0x00033858) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd024,	// (0x00033850) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd2ab,	// (0x00033ad7) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd04c,	// (0x00033878) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd03c,	// (0x00033868) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd044,	// (0x00033870) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x386d,	// (0x0002a099) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa372,	// (0x00030b9e) calenote_gesture_pane_ParamLimits

0xa372,	// (0x00030b9e) calenote_gesture_pane

0xa392,	// (0x00030bbe) calenote_window_pane_ParamLimits

0xa392,	// (0x00030bbe) calenote_window_pane

0xe6c9,	// (0x00034ef5) popup_note_window_cp01

0xa3ae,	// (0x00030bda) calenote_swipe_1_pane_ParamLimits

0xa3ae,	// (0x00030bda) calenote_swipe_1_pane

0x9d64,	// (0x00030590) calenote_swipe_2_pane_ParamLimits

0x9d64,	// (0x00030590) calenote_swipe_2_pane

0xe250,	// (0x00034a7c) calenote_swipe_1_pane_g1_ParamLimits

0xe250,	// (0x00034a7c) calenote_swipe_1_pane_g1

0xe25d,	// (0x00034a89) calenote_swipe_1_pane_g2_ParamLimits

0xe25d,	// (0x00034a89) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x00036504) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x00036504) calenote_swipe_1_pane_g

0xe6db,	// (0x00034f07) calenote_swipe_1_pane_t1_ParamLimits

0xe6db,	// (0x00034f07) calenote_swipe_1_pane_t1

0xe250,	// (0x00034a7c) calenote_swipe_2_pane_g1_ParamLimits

0xe250,	// (0x00034a7c) calenote_swipe_2_pane_g1

0xe6fa,	// (0x00034f26) calenote_swipe_2_pane_g2_ParamLimits

0xe6fa,	// (0x00034f26) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x000365e1) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x000365e1) calenote_swipe_2_pane_g

0xe706,	// (0x00034f32) calenote_swipe_2_pane_t1_ParamLimits

0xe706,	// (0x00034f32) calenote_swipe_2_pane_t1

0x1b43,	// (0x0002836f) main_mup_navstr_pane

0x7634,	// (0x0002de60) main_mup3_pane_t7_ParamLimits

0x7634,	// (0x0002de60) main_mup3_pane_t7

0xcbe7,	// (0x00033413) main_mp4_pane_g6_ParamLimits

0xcbe7,	// (0x00033413) main_mp4_pane_g6

0xce19,	// (0x00033645) main_image3_pane_t4_ParamLimits

0xce19,	// (0x00033645) main_image3_pane_t4

0xa3c3,	// (0x00030bef) popup_navstr_preview_pane_ParamLimits

0xa3c3,	// (0x00030bef) popup_navstr_preview_pane

0xa3d3,	// (0x00030bff) scroll_navstr_pane_ParamLimits

0xa3d3,	// (0x00030bff) scroll_navstr_pane

0x1b43,	// (0x0002836f) bg_popup_preview_window_pane_cp04

0xe72d,	// (0x00034f59) popup_navstr_preview_pane_t1

0xa3e7,	// (0x00030c13) scroll_navstr_pane_g1_ParamLimits

0xa3e7,	// (0x00030c13) scroll_navstr_pane_g1

0xa3fb,	// (0x00030c27) scroll_navstr_pane_t1_ParamLimits

0xa3fb,	// (0x00030c27) scroll_navstr_pane_t1

0xe6d2,	// (0x00034efe) bg_button_pane_cp014

0xe6d2,	// (0x00034efe) bg_button_pane_cp030

0x9bfa,	// (0x00030426) list_double_fisheye_pane_g4_ParamLimits

0x9bfa,	// (0x00030426) list_double_fisheye_pane_g4

0x9c06,	// (0x00030432) list_double_fisheye_pane_g5_ParamLimits

0x9c06,	// (0x00030432) list_double_fisheye_pane_g5

0xe63a,	// (0x00034e66) sp_fs_scroll_pane_cp03

0xe393,	// (0x00034bbf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe39f,	// (0x00034bcb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x00036521) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3ab,	// (0x00034bd7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa2b3,	// (0x00030adf) sp_fs_scroll_pane_cp02

0x2a0d,	// (0x00029239) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2a0d,	// (0x00029239) popup_sp_fs_calendar_preview_list_single_pane

0x1b43,	// (0x0002836f) main_cam6_pano_pane

0x1dbb,	// (0x000285e7) main_mup3_pane_ParamLimits

0x1b43,	// (0x0002836f) main_phacti_pane

0x97d8,	// (0x00030004) bg_button_pane_cp11

0x97f2,	// (0x0003001e) main_mobtv_info_pane_g2_ParamLimits

0x97f2,	// (0x0003001e) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x00036481) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x00036481) main_mobtv_info_pane_g

0x99cf,	// (0x000301fb) sc_clock_pane_t5_ParamLimits

0x99cf,	// (0x000301fb) sc_clock_pane_t5

0x9a5b,	// (0x00030287) main_radioblah_pane_g1_ParamLimits

0xe19c,	// (0x000349c8) main_radioblah_pane_t3_ParamLimits

0xe19c,	// (0x000349c8) main_radioblah_pane_t3

0xe1b4,	// (0x000349e0) main_radioblah_pane_t4_ParamLimits

0xe1b4,	// (0x000349e0) main_radioblah_pane_t4

0x9a83,	// (0x000302af) main_radioblah_text_pane_ParamLimits

0x9a83,	// (0x000302af) main_radioblah_text_pane

0x9a95,	// (0x000302c1) main_radioblah_info_pane_g1_ParamLimits

0x9b2e,	// (0x0003035a) main_radioblah_info_pane_t4_ParamLimits

0x9b2e,	// (0x0003035a) main_radioblah_info_pane_t4

0x1dbb,	// (0x000285e7) main_sp_fs_calendar_pane

0xa412,	// (0x00030c3e) main_phacti_pane_g1

0xa41a,	// (0x00030c46) phacti_note_pane_ParamLimits

0xa41a,	// (0x00030c46) phacti_note_pane

0xe744,	// (0x00034f70) phacti_term_pane_ParamLimits

0xe744,	// (0x00034f70) phacti_term_pane

0xe759,	// (0x00034f85) phacti_note_pane_t1_ParamLimits

0xe759,	// (0x00034f85) phacti_note_pane_t1

0xe770,	// (0x00034f9c) phacti_term_pane_g1

0xe778,	// (0x00034fa4) phacti_term_pane_t1_ParamLimits

0xe778,	// (0x00034fa4) phacti_term_pane_t1

0xe7a2,	// (0x00034fce) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7aa,	// (0x00034fd6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x000365eb) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7b2,	// (0x00034fde) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7b2,	// (0x00034fde) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7c8,	// (0x00034ff4) aid_popup_sp_fs_bg_corner_pane

0xc2d0,	// (0x00032afc) popup_sp_fs_calendar_preview_bg_pane_g1

0x1b43,	// (0x0002836f) popup_sp_fs_calendar_preview_bg_pane

0xe7d0,	// (0x00034ffc) popup_sp_fs_calendar_preview_list_pane

0x1dbb,	// (0x000285e7) bg_main_sp_fs_cale_pane_ParamLimits

0x1dbb,	// (0x000285e7) bg_main_sp_fs_cale_pane

0xe7e1,	// (0x0003500d) listscroll_cale_mrui_pane_ParamLimits

0xe7e1,	// (0x0003500d) listscroll_cale_mrui_pane

0xe7f5,	// (0x00035021) listscroll_sp_fs_schedule_track_pane

0xe7fe,	// (0x0003502a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7fe,	// (0x0003502a) main_sp_fs_ctrlbar_pane_cp01

0xe80f,	// (0x0003503b) main_sp_fs_ribbon_pane

0xe817,	// (0x00035043) popup_sp_fs_cale_preview_window

0xa475,	// (0x00030ca1) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa475,	// (0x00030ca1) list_single_sp_fs_schedule_track_pane

0x1dbb,	// (0x000285e7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1dbb,	// (0x000285e7) bg_sp_fs_highlight_list_pane_cp03

0xa488,	// (0x00030cb4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa488,	// (0x00030cb4) list_single_sp_fs_schedule_track_pane_g1

0xa494,	// (0x00030cc0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa494,	// (0x00030cc0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x000365f0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x000365f0) list_single_sp_fs_schedule_track_pane_g

0xa4a0,	// (0x00030ccc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa4a0,	// (0x00030ccc) list_single_sp_fs_schedule_track_pane_t1

0xa4c2,	// (0x00030cee) sp_fs_schedule_track_pane_ParamLimits

0xa4c2,	// (0x00030cee) sp_fs_schedule_track_pane

0xe829,	// (0x00035055) sp_fs_schedule_track_pane_g1

0xe831,	// (0x0003505d) sp_fs_schedule_track_pane_g2

0xe839,	// (0x00035065) sp_fs_schedule_track_pane_g3

0xe841,	// (0x0003506d) sp_fs_schedule_track_pane_g4

0xe849,	// (0x00035075) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x000365f5) sp_fs_schedule_track_pane_g

0xd01c,	// (0x00033848) bg_sp_fs_schedule_viewer_highlight_g1

0x388d,	// (0x0002a0b9) bg_sp_fs_schedule_viewer_highlight_g2

0xd024,	// (0x00033850) bg_sp_fs_schedule_viewer_highlight_g3

0xd02c,	// (0x00033858) bg_sp_fs_schedule_viewer_highlight_g4

0xd2ab,	// (0x00033ad7) bg_sp_fs_schedule_viewer_highlight_g5

0xd03c,	// (0x00033868) bg_sp_fs_schedule_viewer_highlight_g6

0xd044,	// (0x00033870) bg_sp_fs_schedule_viewer_highlight_g7

0xd04c,	// (0x00033878) bg_sp_fs_schedule_viewer_highlight_g8

0x386d,	// (0x0002a099) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00036600) bg_sp_fs_schedule_viewer_highlight_g

0x1b43,	// (0x0002836f) bg_main_sp_fs_ribbon_pane

0xa4d7,	// (0x00030d03) main_sp_fs_ribbon_pane_g1

0xe851,	// (0x0003507d) main_sp_fs_ribbon_pane_t1

0xa4e0,	// (0x00030d0c) main_sp_fs_ribbon_pane_t2

0xe860,	// (0x0003508c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00036613) main_sp_fs_ribbon_pane_t

0xe86f,	// (0x0003509b) main_sp_fs_ribbon_scheduler_pane

0xe877,	// (0x000350a3) bg_main_sp_fs_ribbon_pane_g1

0xe880,	// (0x000350ac) bg_main_sp_fs_ribbon_pane_g2

0xe889,	// (0x000350b5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0003661a) bg_main_sp_fs_ribbon_pane_g

0xe891,	// (0x000350bd) main_sp_fs_ribbon_scheduler_pane_g1

0xe89a,	// (0x000350c6) main_sp_fs_ribbon_scheduler_pane_g2

0xe8a3,	// (0x000350cf) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00036621) main_sp_fs_ribbon_scheduler_pane_g

0xe8ac,	// (0x000350d8) list_cale_mrui_pane

0xa4ef,	// (0x00030d1b) sp_fs_scroll_pane_cp07_ParamLimits

0xa4ef,	// (0x00030d1b) sp_fs_scroll_pane_cp07

0xa505,	// (0x00030d31) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa505,	// (0x00030d31) bg_sp_fs_schedule_viewer_highlight

0xe8b5,	// (0x000350e1) list_single_sp_fs_schedule_track_pane_cp01

0xe8bd,	// (0x000350e9) list_sp_fs_schedule_track_pane

0xe8c5,	// (0x000350f1) sp_fs_scroll_pane_cp06_ParamLimits

0xe8c5,	// (0x000350f1) sp_fs_scroll_pane_cp06

0xc2d0,	// (0x00032afc) bgmain_sp_fs_calendar_pane_g1

0xe8d7,	// (0x00035103) list_single_cale_mrui_pane_ParamLimits

0xe8d7,	// (0x00035103) list_single_cale_mrui_pane

0xe8fe,	// (0x0003512a) list_single_cale_mrui_row_pane_ParamLimits

0xe8fe,	// (0x0003512a) list_single_cale_mrui_row_pane

0xe90b,	// (0x00035137) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe90b,	// (0x00035137) list_single_cale_mrui_row_pane_g1

0xe950,	// (0x0003517c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe950,	// (0x0003517c) list_single_cale_mrui_row_pane_t1

0xa517,	// (0x00030d43) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa517,	// (0x00030d43) list_single_cale_mrui_row_pane_t2

0xe962,	// (0x0003518e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe962,	// (0x0003518e) list_single_cale_mrui_row_pane_t3

0xe991,	// (0x000351bd) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe991,	// (0x000351bd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x0003662f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x0003662f) list_single_cale_mrui_row_pane_t

0xa57d,	// (0x00030da9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa57d,	// (0x00030da9) list_single_cmail_header_editor_pane_bg_cp01

0xa5a1,	// (0x00030dcd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa5a1,	// (0x00030dcd) list_single_cmail_header_editor_pane_bg_cp02

0xa5bf,	// (0x00030deb) main_radioblah_text_pane_t1_ParamLimits

0xa5bf,	// (0x00030deb) main_radioblah_text_pane_t1

0xe9c0,	// (0x000351ec) cam6_indi_pane_cp01

0xe9c8,	// (0x000351f4) cam6_mode_pane_cp01

0xe9d0,	// (0x000351fc) cam6_pano_pane

0xe9d9,	// (0x00035205) cam6_zoom_pane_cp01

0xe9e3,	// (0x0003520f) cam6_pano_image_pane

0xe9ec,	// (0x00035218) cam6_pano_pane_g1

0xdef8,	// (0x00034724) cam6_pano_pane_g2

0xe9f5,	// (0x00035221) cam6_pano_pane_g3

0xe9fe,	// (0x0003522a) cam6_pano_pane_g4

0xc848,	// (0x00033074) cam6_pano_pane_g5

0xea07,	// (0x00035233) cam6_pano_pane_g6

0xea0f,	// (0x0003523b) cam6_pano_pane_g7

0xea17,	// (0x00035243) cam6_pano_pane_g8

0xea20,	// (0x0003524c) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x00036638) cam6_pano_pane_g

0x1b43,	// (0x0002836f) main_browser_tag_pane

0xe725,	// (0x00034f51) grid_navstr_albumart_pane

0xea2b,	// (0x00035257) cell_navstr_albumart_pane_ParamLimits

0xea2b,	// (0x00035257) cell_navstr_albumart_pane

0xea47,	// (0x00035273) cell_navstr_albumart_pane_g1

0xbbb4,	// (0x000323e0) cell_navstr_albumart_pane_g2

0xbbc4,	// (0x000323f0) cell_navstr_albumart_pane_g3

0xbbbc,	// (0x000323e8) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x0003664b) cell_navstr_albumart_pane_g

0xa5da,	// (0x00030e06) bt_list_pane_ParamLimits

0xa5da,	// (0x00030e06) bt_list_pane

0xa5f0,	// (0x00030e1c) bt_list_pane_t1

0xa5ff,	// (0x00030e2b) bt_list_pane_t2

0x0001,

0xfe28,	// (0x00036654) bt_list_pane_t

0x1b43,	// (0x0002836f) main_cale_prevew_pane

0xa60e,	// (0x00030e3a) popup_cale_preview_window_ParamLimits

0xa60e,	// (0x00030e3a) popup_cale_preview_window

0x1dbb,	// (0x000285e7) bg_popup_preview_window_pane_cp05_ParamLimits

0x1dbb,	// (0x000285e7) bg_popup_preview_window_pane_cp05

0xea4f,	// (0x0003527b) list_cale_preview_pane_ParamLimits

0xea4f,	// (0x0003527b) list_cale_preview_pane

0xa629,	// (0x00030e55) list_double_cale_preview_pane_ParamLimits

0xa629,	// (0x00030e55) list_double_cale_preview_pane

0xa63d,	// (0x00030e69) list_single_cale_preview_pane_ParamLimits

0xa63d,	// (0x00030e69) list_single_cale_preview_pane

0xa655,	// (0x00030e81) list_single_cale_preview_pane_g1

0xa65d,	// (0x00030e89) list_single_cale_preview_pane_t1_ParamLimits

0xa65d,	// (0x00030e89) list_single_cale_preview_pane_t1

0xa672,	// (0x00030e9e) list_double_cale_preview_pane_g1

0xa67a,	// (0x00030ea6) list_double_cale_preview_pane_t1_ParamLimits

0xa67a,	// (0x00030ea6) list_double_cale_preview_pane_t1

0xa68f,	// (0x00030ebb) list_double_cale_preview_pane_t2_ParamLimits

0xa68f,	// (0x00030ebb) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x00036659) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x00036659) list_double_cale_preview_pane_t

0x1b43,	// (0x0002836f) main_ezdial_pane

0x1dbb,	// (0x000285e7) main_sp_fs_email_pane_ParamLimits

0x9da0,	// (0x000305cc) cmail_ddmenu_btn01_pane_ParamLimits

0x9da0,	// (0x000305cc) cmail_ddmenu_btn01_pane

0x9db3,	// (0x000305df) cmail_ddmenu_btn02_pane_ParamLimits

0x9db3,	// (0x000305df) cmail_ddmenu_btn02_pane

0x9dd6,	// (0x00030602) cmail_ddmenu_btn03_pane_ParamLimits

0x9dd6,	// (0x00030602) cmail_ddmenu_btn03_pane

0x9dfc,	// (0x00030628) main_sp_fs_ctrlbar_pane_ParamLimits

0x9e20,	// (0x0003064c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa2bd,	// (0x00030ae9) list_cmail_body_pane_ParamLimits

0xe649,	// (0x00034e75) bg_button_pane_cp12

0xe65e,	// (0x00034e8a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe65e,	// (0x00034e8a) list_single_cmail_header_detail_pane_g3

0xa34c,	// (0x00030b78) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa34c,	// (0x00030b78) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x000365dc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x000365dc) list_single_cmail_header_detail_pane_t

0xe78d,	// (0x00034fb9) phacti_term_pane_t2_ParamLimits

0xe78d,	// (0x00034fb9) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x000365e6) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x000365e6) phacti_term_pane_t

0xea5b,	// (0x00035287) aid_size_list_single_double

0xa6a7,	// (0x00030ed3) popup_ezdial_listscroll_window

0xa6c3,	// (0x00030eef) popup_number_entry_window_cp01

0x4db5,	// (0x0002b5e1) bg_popup_call_pane_cp09

0xea67,	// (0x00035293) ezdial_list_pane

0xea6f,	// (0x0003529b) scroll_pane_cp23

0xbd9b,	// (0x000325c7) bg_button_pane_cp028_ParamLimits

0xbd9b,	// (0x000325c7) bg_button_pane_cp028

0xa6d1,	// (0x00030efd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa6d1,	// (0x00030efd) cmail_ddmenu_btn01_pane_g1

0xa6dd,	// (0x00030f09) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa6dd,	// (0x00030f09) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x0003665e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x0003665e) cmail_ddmenu_btn01_pane_g

0xea77,	// (0x000352a3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea77,	// (0x000352a3) cmail_ddmenu_btn01_pane_t1

0xbd9b,	// (0x000325c7) bg_button_pane_cp029_ParamLimits

0xbd9b,	// (0x000325c7) bg_button_pane_cp029

0xa6e9,	// (0x00030f15) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa6e9,	// (0x00030f15) cmail_ddmenu_btn02_pane_g1

0xa701,	// (0x00030f2d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa701,	// (0x00030f2d) cmail_ddmenu_btn02_pane_t1

0x1dbb,	// (0x000285e7) bg_button_pane_cp031_ParamLimits

0x1dbb,	// (0x000285e7) bg_button_pane_cp031

0xa6e9,	// (0x00030f15) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa6e9,	// (0x00030f15) cmail_ddmenu_btn03_pane_g1

0xa701,	// (0x00030f2d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa701,	// (0x00030f2d) cmail_ddmenu_btn03_pane_t1

0x8012,	// (0x0002e83e) cell_dialer2_keypad_pane_t1_ParamLimits

0x802c,	// (0x0002e858) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x802c,	// (0x0002e858) cell_dialer2_keypad_pane_t1_copy1

0x9658,	// (0x0002fe84) ncimui_group_button_pane

0x1dbb,	// (0x000285e7) main_sp_fs_calendar_pane_ParamLimits

0xa2d5,	// (0x00030b01) list_single_cmail_header_caption_pane_ParamLimits

0xe7d8,	// (0x00035004) aid_recal_txt_sm_pane

0x1b43,	// (0x0002836f) mian_recal_day_pane

0xe817,	// (0x00035043) popup_sp_fs_cale_preview_window_ParamLimits

0x1b43,	// (0x0002836f) list_recal_day_pane

0xeaae,	// (0x000352da) list_single_recal_day_pane_ParamLimits

0xeaae,	// (0x000352da) list_single_recal_day_pane

0xeac0,	// (0x000352ec) list_single_recal_day_pane_g1_ParamLimits

0xeac0,	// (0x000352ec) list_single_recal_day_pane_g1

0xeacc,	// (0x000352f8) list_single_recal_day_pane_g2_ParamLimits

0xeacc,	// (0x000352f8) list_single_recal_day_pane_g2

0xeadc,	// (0x00035308) list_single_recal_day_pane_g3_ParamLimits

0xeadc,	// (0x00035308) list_single_recal_day_pane_g3

0xa725,	// (0x00030f51) list_single_recal_day_pane_g4_ParamLimits

0xa725,	// (0x00030f51) list_single_recal_day_pane_g4

0xeae8,	// (0x00035314) list_single_recal_day_pane_g5_ParamLimits

0xeae8,	// (0x00035314) list_single_recal_day_pane_g5

0xeaf8,	// (0x00035324) list_single_recal_day_pane_g6_ParamLimits

0xeaf8,	// (0x00035324) list_single_recal_day_pane_g6

0x0004,

0xfe41,	// (0x0003666d) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x0003666d) list_single_recal_day_pane_g

0xeb0f,	// (0x0003533b) list_single_recal_day_pane_t1

0xeb21,	// (0x0003534d) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00036678) list_single_recal_day_pane_t

0xa745,	// (0x00030f71) ncimui_query_button_pane_ParamLimits

0xa745,	// (0x00030f71) ncimui_query_button_pane

0xa755,	// (0x00030f81) ncimui_query_button_pane_t1_ParamLimits

0xa755,	// (0x00030f81) ncimui_query_button_pane_t1

0xeb36,	// (0x00035362) ncimui_query_button_pane_t2_ParamLimits

0xeb36,	// (0x00035362) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0003667d) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0003667d) ncimui_query_button_pane_t

0xa768,	// (0x00030f94) query_button_pane_ParamLimits

0xa768,	// (0x00030f94) query_button_pane

0x1b43,	// (0x0002836f) bg_button_pane_cp0028

0xeb49,	// (0x00035375) query_button_pane_t1

0x6687,	// (0x0002ceb3) main_tport_pane_ParamLimits

0xa1a3,	// (0x000309cf) bg_popup_window_pane_cp01_ParamLimits

0xa1a3,	// (0x000309cf) bg_popup_window_pane_cp01

0xa1b9,	// (0x000309e5) heading_pane_cp08_ParamLimits

0xa1b9,	// (0x000309e5) heading_pane_cp08

0xa1ca,	// (0x000309f6) heading_pane_cp07_ParamLimits

0xa1ca,	// (0x000309f6) heading_pane_cp07

0xe614,	// (0x00034e40) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x000365c9) cell_tport_appsw_pane_g

0x53aa,	// (0x0002bbd6) input_candi_list_open_g1

0x4334,	// (0x0002ab60) list_cale_time_pane_g6_ParamLimits

0x4334,	// (0x0002ab60) list_cale_time_pane_g6

0x7007,	// (0x0002d833) aid_size_touch_calib_1_ParamLimits

0x7007,	// (0x0002d833) aid_size_touch_calib_1

0x7013,	// (0x0002d83f) aid_size_touch_calib_2_ParamLimits

0x7013,	// (0x0002d83f) aid_size_touch_calib_2

0x7029,	// (0x0002d855) aid_size_touch_calib_3_ParamLimits

0x7029,	// (0x0002d855) aid_size_touch_calib_3

0x7047,	// (0x0002d873) aid_size_touch_calib_4_ParamLimits

0x7047,	// (0x0002d873) aid_size_touch_calib_4

0x705d,	// (0x0002d889) main_touch_calib_button_group_pane_ParamLimits

0x705d,	// (0x0002d889) main_touch_calib_button_group_pane

0x7075,	// (0x0002d8a1) main_touch_calib_pane_g1_ParamLimits

0x7081,	// (0x0002d8ad) main_touch_calib_pane_g2_ParamLimits

0x708d,	// (0x0002d8b9) main_touch_calib_pane_g3_ParamLimits

0x7099,	// (0x0002d8c5) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x00035f9c) main_touch_calib_pane_g_ParamLimits

0x70a5,	// (0x0002d8d1) main_touch_calib_pane_t1_ParamLimits

0x70bf,	// (0x0002d8eb) main_touch_calib_pane_t2_ParamLimits

0x70d9,	// (0x0002d905) main_touch_calib_pane_t3_ParamLimits

0x70ed,	// (0x0002d919) main_touch_calib_pane_t4_ParamLimits

0x7101,	// (0x0002d92d) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x00035fa5) main_touch_calib_pane_t_ParamLimits

0xc612,	// (0x00032e3e) list_single_fp_cale_pane_g3_ParamLimits

0xc612,	// (0x00032e3e) list_single_fp_cale_pane_g3

0xd004,	// (0x00033830) bg_button_pane_cp012_ParamLimits

0xd004,	// (0x00033830) bg_vkb2_func_pane_cp03_ParamLimits

0x19bf,	// (0x000281eb) cell_vitu2_function_top_pane_g1_ParamLimits

0xd004,	// (0x00033830) bg_vkb2_func_pane_cp04_ParamLimits

0x95f8,	// (0x0002fe24) main_ncimui_button_group_pane_ParamLimits

0x95f8,	// (0x0002fe24) main_ncimui_button_group_pane

0x9646,	// (0x0002fe72) main_ncimui_pane_t3_ParamLimits

0x9646,	// (0x0002fe72) main_ncimui_pane_t3

0xe73b,	// (0x00034f67) phacti_button_group_pane

0xea5b,	// (0x00035287) aid_size_list_single_double_ParamLimits

0xa6a7,	// (0x00030ed3) popup_ezdial_listscroll_window_ParamLimits

0xa6c3,	// (0x00030eef) popup_number_entry_window_cp01_ParamLimits

0xa77b,	// (0x00030fa7) phacti_button_pane_ParamLimits

0xa77b,	// (0x00030fa7) phacti_button_pane

0x1b43,	// (0x0002836f) bg_button_pane_cp14

0xeb57,	// (0x00035383) phacti_button_pane_t1

0xa78c,	// (0x00030fb8) main_touch_calib_button_pane_ParamLimits

0xa78c,	// (0x00030fb8) main_touch_calib_button_pane

0x27d5,	// (0x00029001) bg_button_pane_cp18_ParamLimits

0x27d5,	// (0x00029001) bg_button_pane_cp18

0xeb65,	// (0x00035391) main_touch_calib_button_pane_t1_ParamLimits

0xeb65,	// (0x00035391) main_touch_calib_button_pane_t1

0xeb7b,	// (0x000353a7) main_touch_calib_button_pane_t2_ParamLimits

0xeb7b,	// (0x000353a7) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00036682) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00036682) main_touch_calib_button_pane_t

0x1b43,	// (0x0002836f) cell_ncimui_button_pane

0x1b43,	// (0x0002836f) bg_button_pane_cp032

0xeb99,	// (0x000353c5) cell_ncimui_button_pane_t1

0xcdf7,	// (0x00033623) image3_infobar_pane_ParamLimits

0xcdf7,	// (0x00033623) image3_infobar_pane

0x99fb,	// (0x00030227) fs_bigclock_status_pane_ParamLimits

0x99fb,	// (0x00030227) fs_bigclock_status_pane

0x9a08,	// (0x00030234) main_fs_bigclock_clock_pane_ParamLimits

0x9a08,	// (0x00030234) main_fs_bigclock_clock_pane

0x9a1c,	// (0x00030248) main_fs_bigclock_indi_pane_ParamLimits

0x9a1c,	// (0x00030248) main_fs_bigclock_indi_pane

0x9a37,	// (0x00030263) main_fs_bigclock_swipe_pane_ParamLimits

0x9a37,	// (0x00030263) main_fs_bigclock_swipe_pane

0x1b43,	// (0x0002836f) main_fs_clock_dumped_data

0xe005,	// (0x00034831) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe005,	// (0x00034831) list_single_fs_bigclock_indicator_pane_g1

0xe02f,	// (0x0003485b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe02f,	// (0x0003485b) list_single_fs_bigclock_indicator_pane_g2

0xe049,	// (0x00034875) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe049,	// (0x00034875) list_single_fs_bigclock_indicator_pane_g3

0xe063,	// (0x0003488f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe063,	// (0x0003488f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x000364b5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x000364b5) list_single_fs_bigclock_indicator_pane_g

0xe08e,	// (0x000348ba) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe08e,	// (0x000348ba) list_single_fs_bigclock_indicator_pane_t1

0xe0b6,	// (0x000348e2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0b6,	// (0x000348e2) list_single_fs_bigclock_indicator_pane_t2

0xe0de,	// (0x0003490a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0de,	// (0x0003490a) list_single_fs_bigclock_indicator_pane_t3

0xe106,	// (0x00034932) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe106,	// (0x00034932) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x000364c0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x000364c0) list_single_fs_bigclock_indicator_pane_t

0xeba7,	// (0x000353d3) image3_infobar_fav_pane_ParamLimits

0xeba7,	// (0x000353d3) image3_infobar_fav_pane

0xebb7,	// (0x000353e3) image3_infobar_loc_pane_ParamLimits

0xebb7,	// (0x000353e3) image3_infobar_loc_pane

0xebcd,	// (0x000353f9) image3_infobar_time_pane_ParamLimits

0xebcd,	// (0x000353f9) image3_infobar_time_pane

0xc2d0,	// (0x00032afc) image3_infobar_time_pane_g1

0xebdd,	// (0x00035409) image3_infobar_time_pane_t1

0xc2d0,	// (0x00032afc) image3_infobar_loc_pane_g1

0xebeb,	// (0x00035417) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00036687) image3_infobar_loc_pane_g

0xebf3,	// (0x0003541f) image3_infobar_loc_pane_t1

0xc2d0,	// (0x00032afc) image3_infobar_fav_pane_g1

0xec01,	// (0x0003542d) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0003668c) image3_infobar_fav_pane_g

0xec09,	// (0x00035435) fs_bigclock_status_battery_pane

0xec12,	// (0x0003543e) fs_bigclock_status_signal_pane

0xec1b,	// (0x00035447) fs_bigclock_status_title_pane

0xec24,	// (0x00035450) fs_bigclock_status_signal_pane_g1

0xec2d,	// (0x00035459) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00036691) fs_bigclock_status_signal_pane_g

0xec35,	// (0x00035461) fs_bigclock_status_battery_pane_g1

0xec3e,	// (0x0003546a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x00036696) fs_bigclock_status_battery_pane_g

0xec46,	// (0x00035472) fs_bigclock_status_title_pane_t1

0xc2d0,	// (0x00032afc) main_fs_bigclock_clock_pane_g1

0xec54,	// (0x00035480) main_fs_bigclock_clock_pane_g2

0xec54,	// (0x00035480) main_fs_bigclock_clock_pane_g3

0xec54,	// (0x00035480) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0003669b) main_fs_bigclock_clock_pane_g

0xec5c,	// (0x00035488) main_fs_bigclock_clock_pane_t1

0xec6a,	// (0x00035496) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x000366a4) main_fs_bigclock_clock_pane_t

0xa7a1,	// (0x00030fcd) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa7a1,	// (0x00030fcd) list_single_fs_bigclock_indicator_pane

0xa7b2,	// (0x00030fde) list_single_fs_bigclock_pane_ParamLimits

0xa7b2,	// (0x00030fde) list_single_fs_bigclock_pane

0xec82,	// (0x000354ae) main_fs_bigclock_indicator_pane_t1

0xec91,	// (0x000354bd) list_single_fs_bigclock_pane_g1

0xec99,	// (0x000354c5) list_single_fs_bigclock_pane_t1

0xc2d0,	// (0x00032afc) main_fs_bigclock_swipe_pane_g1

0xecdc,	// (0x00035508) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x000366b5) main_fs_bigclock_swipe_pane_g

0xece4,	// (0x00035510) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xece4,	// (0x00035510) main_fs_bigclock_swipe_pane_t1

0x46f2,	// (0x0002af1e) call_type_pane_ParamLimits

0x1b43,	// (0x0002836f) main_btmg_pane

0xe937,	// (0x00035163) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe937,	// (0x00035163) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfc,	// (0x00036628) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00036628) list_single_cale_mrui_row_pane_g

0xea95,	// (0x000352c1) list_recal_vselct_arw_lo_pane

0xea9d,	// (0x000352c9) list_recal_vselct_arw_up_pane

0xeaa5,	// (0x000352d1) list_recal_vselct_pane

0xed01,	// (0x0003552d) btmg_button_pane

0xa815,	// (0x00031041) main_btmg_pane_g1

0x1b43,	// (0x0002836f) bg_button_pane_cp044

0xed0b,	// (0x00035537) btmg_button_pane_t1

0xbd93,	// (0x000325bf) aid_listscroll_gen

0x1dbb,	// (0x000285e7) main_cntbar_detail_pane

0xe62a,	// (0x00034e56) list_cmail_folder_pane

0xe63a,	// (0x00034e66) sp_fs_scroll_pane_cp03_ParamLimits

0xa81f,	// (0x0003104b) list_single_fs_dyc_pane_cp01_ParamLimits

0xa81f,	// (0x0003104b) list_single_fs_dyc_pane_cp01

0xed19,	// (0x00035545) aid_size_cmail_indent

0xed22,	// (0x0003554e) list_single_dyc_row_pane_cp01

0xa86c,	// (0x00031098) cntbar_detail_list_pane_ParamLimits

0xa86c,	// (0x00031098) cntbar_detail_list_pane

0xa8be,	// (0x000310ea) main_cntbar_detail_cont_pane_ParamLimits

0xa8be,	// (0x000310ea) main_cntbar_detail_cont_pane

0x4507,	// (0x0002ad33) scroll_pane_cp032_ParamLimits

0x4507,	// (0x0002ad33) scroll_pane_cp032

0xa8d2,	// (0x000310fe) cntbar_detail_list_event_pane_ParamLimits

0xa8d2,	// (0x000310fe) cntbar_detail_list_event_pane

0xa87e,	// (0x000310aa) cntbar_detail_list_shct_pane

0x38e5,	// (0x0002a111) aid_list_gen

0xed2b,	// (0x00035557) aid_scroll

0xed34,	// (0x00035560) aid_size_touch_scroll_bar

0xa8e2,	// (0x0003110e) aid_list_double

0xed3d,	// (0x00035569) aid_list_single

0xa8eb,	// (0x00031117) aid_list_single_lg

0xed46,	// (0x00035572) aid_list_z_g_a_sm

0xed4e,	// (0x0003557a) aid_list_z_g_d

0xed56,	// (0x00035582) aid_txt_z_prm

0xa8f4,	// (0x00031120) aid_txt_z_prm_cp01

0xa902,	// (0x0003112e) aid_txt_z_sec

0xa910,	// (0x0003113c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa910,	// (0x0003113c) main_cntbar_detail_cont_pane_g1

0xa924,	// (0x00031150) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa924,	// (0x00031150) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x000366ba) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x000366ba) main_cntbar_detail_cont_pane_g

0xed64,	// (0x00035590) main_cntbar_detail_cont_pane_t1

0xed72,	// (0x0003559e) main_cntbar_detail_cont_pane_t2

0xed80,	// (0x000355ac) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x000366bf) main_cntbar_detail_cont_pane_t

0xa934,	// (0x00031160) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa934,	// (0x00031160) cell_cntbar_detail_list_shct_pane

0xed8e,	// (0x000355ba) cntbar_detail_list_shct_pane_g1

0xed97,	// (0x000355c3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x000366c6) cntbar_detail_list_shct_pane_g

0xa946,	// (0x00031172) cntbar_detail_list_event_pane_g1_ParamLimits

0xa946,	// (0x00031172) cntbar_detail_list_event_pane_g1

0xa952,	// (0x0003117e) cntbar_detail_list_event_pane_g2_ParamLimits

0xa952,	// (0x0003117e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x000366cb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x000366cb) cntbar_detail_list_event_pane_g

0xa9c0,	// (0x000311ec) cntbar_detail_list_event_pane_t1_ParamLimits

0xa9c0,	// (0x000311ec) cntbar_detail_list_event_pane_t1

0xa9d5,	// (0x00031201) cntbar_detail_list_event_pane_t2_ParamLimits

0xa9d5,	// (0x00031201) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x000366d8) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x000366d8) cntbar_detail_list_event_pane_t

0xc2d0,	// (0x00032afc) cell_cntbar_detail_list_shct_pane_g1

0x4d33,	// (0x0002b55f) navi_pane_mv_g3

0x1dbb,	// (0x000285e7) main_cntbar_detail_pane_ParamLimits

0x1b43,	// (0x0002836f) main_notif_wgt_pane

0xcb81,	// (0x000333ad) aid_tch_main_mp4_pane_g4

0xcd7f,	// (0x000335ab) popup_slider_window_cp02

0xea8c,	// (0x000352b8) list_recal_day_event_pane

0xa83c,	// (0x00031068) cntbar_detail_btn_pane_ParamLimits

0xa83c,	// (0x00031068) cntbar_detail_btn_pane

0xa854,	// (0x00031080) cntbar_detail_btn_pane_cp01_ParamLimits

0xa854,	// (0x00031080) cntbar_detail_btn_pane_cp01

0xa87e,	// (0x000310aa) cntbar_detail_list_shct_pane_ParamLimits

0xa88e,	// (0x000310ba) cntbar_detail_pane_g1_ParamLimits

0xa88e,	// (0x000310ba) cntbar_detail_pane_g1

0xa8a2,	// (0x000310ce) cntbar_detail_pane_t1_ParamLimits

0xa8a2,	// (0x000310ce) cntbar_detail_pane_t1

0xa95e,	// (0x0003118a) cntbar_detail_list_event_pane_g3_ParamLimits

0xa95e,	// (0x0003118a) cntbar_detail_list_event_pane_g3

0xa976,	// (0x000311a2) cntbar_detail_list_event_pane_g4_ParamLimits

0xa976,	// (0x000311a2) cntbar_detail_list_event_pane_g4

0xa98e,	// (0x000311ba) cntbar_detail_list_event_pane_g5_ParamLimits

0xa98e,	// (0x000311ba) cntbar_detail_list_event_pane_g5

0xa9a6,	// (0x000311d2) cntbar_detail_list_event_pane_g6_ParamLimits

0xa9a6,	// (0x000311d2) cntbar_detail_list_event_pane_g6

0xa9ea,	// (0x00031216) cntbar_detail_list_event_pane_t3_ParamLimits

0xa9ea,	// (0x00031216) cntbar_detail_list_event_pane_t3

0xa9fc,	// (0x00031228) popup_notif_wgt_window_ParamLimits

0xa9fc,	// (0x00031228) popup_notif_wgt_window

0xaa15,	// (0x00031241) popup_submenu_window_cp01_ParamLimits

0xaa15,	// (0x00031241) popup_submenu_window_cp01

0x4db5,	// (0x0002b5e1) bg_popup_window_pane_cp10

0xeda0,	// (0x000355cc) listscroll_notif_wgt_pane

0xedaa,	// (0x000355d6) list_notif_wgt_window

0xedb3,	// (0x000355df) scroll_pane_cp033

0xedbc,	// (0x000355e8) list_notif_wgt_row_pane_ParamLimits

0xedbc,	// (0x000355e8) list_notif_wgt_row_pane

0xedd0,	// (0x000355fc) aid_size_list_notif_wgt_del

0xedd9,	// (0x00035605) list_notif_wgt_row_pane_g1

0xede1,	// (0x0003560d) list_notif_wgt_row_pane_g2

0xede9,	// (0x00035615) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x000366df) list_notif_wgt_row_pane_g

0xedf2,	// (0x0003561e) list_notif_wgt_row_pane_t1

0xee00,	// (0x0003562c) list_notif_wgt_row_pane_t2

0xee0e,	// (0x0003563a) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x000366e6) list_notif_wgt_row_pane_t

0xd305,	// (0x00033b31) list_recal_day_event_pane_g1

0xee1c,	// (0x00035648) list_recal_day_event_pane_t1

0x1b43,	// (0x0002836f) bg_button_pane_cp045

0xee2b,	// (0x00035657) cntbar_detail_btn_pane_t1

0xbd9b,	// (0x000325c7) main_callh_pane_ParamLimits

0xbd9b,	// (0x000325c7) main_callh_pane

0x1b43,	// (0x0002836f) main_coverflow0_pane

0x1b43,	// (0x0002836f) main_wgtman_pane

0x9a45,	// (0x00030271) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9a45,	// (0x00030271) main_fs_bigclock_unlock_btn_pane

0xe60c,	// (0x00034e38) bg_button_pane_cp16

0xa267,	// (0x00030a93) cell_tport_appsw_pane_g3

0xaa29,	// (0x00031255) cf0_flow_pane_ParamLimits

0xaa29,	// (0x00031255) cf0_flow_pane

0xee39,	// (0x00035665) listscroll_cf0_pane

0xee42,	// (0x0003566e) main_cf0_pane_g1

0xaa3e,	// (0x0003126a) main_cf0_pane_t1_ParamLimits

0xaa3e,	// (0x0003126a) main_cf0_pane_t1

0xaa55,	// (0x00031281) main_cf0_pane_t2_ParamLimits

0xaa55,	// (0x00031281) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x000366ed) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x000366ed) main_cf0_pane_t

0xee4c,	// (0x00035678) scroll_pane_cp11

0xaa6c,	// (0x00031298) cf0_flow_pane_g1

0xaa78,	// (0x000312a4) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x000366f2) cf0_flow_pane_g

0xaa84,	// (0x000312b0) cf0_flow_pane_t1

0x1b43,	// (0x0002836f) main_call6_pane

0x1b43,	// (0x0002836f) main_calllock_pane

0xaa96,	// (0x000312c2) call6_btn_grp_pane_ParamLimits

0xaa96,	// (0x000312c2) call6_btn_grp_pane

0xaab0,	// (0x000312dc) call6_pane_g1_ParamLimits

0xaab0,	// (0x000312dc) call6_pane_g1

0xaac6,	// (0x000312f2) popup_call6_1st_window_ParamLimits

0xaac6,	// (0x000312f2) popup_call6_1st_window

0xaad7,	// (0x00031303) popup_call6_2nd_window_ParamLimits

0xaad7,	// (0x00031303) popup_call6_2nd_window

0xaae8,	// (0x00031314) cell_call6_btn_pane_ParamLimits

0xaae8,	// (0x00031314) cell_call6_btn_pane

0x4db5,	// (0x0002b5e1) bg_popup_call2_in_pane_cp03

0xee57,	// (0x00035683) popup_call6_1st_window_g1

0xee5f,	// (0x0003568b) popup_call6_1st_window_g2

0xee67,	// (0x00035693) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x000366f7) popup_call6_1st_window_g

0xee6f,	// (0x0003569b) popup_call6_1st_window_t1

0xee7e,	// (0x000356aa) popup_call6_1st_window_t2

0xee8e,	// (0x000356ba) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x000366fe) popup_call6_1st_window_t

0x4db5,	// (0x0002b5e1) bg_popup_call2_in_pane_cp04

0xee57,	// (0x00035683) popup_call6_2nd_window_g1

0xee5f,	// (0x0003568b) popup_call6_2nd_window_g2

0xee67,	// (0x00035693) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x000366f7) popup_call6_2nd_window_g

0xee6f,	// (0x0003569b) popup_call6_2nd_window_t1

0x1b43,	// (0x0002836f) bg_button_pane_cp15

0xee9e,	// (0x000356ca) cell_call6_btn_pane_g1

0xeea7,	// (0x000356d3) cell_call6_btn_pane_t1

0xaafc,	// (0x00031328) listscroll_wgtman_pane_ParamLimits

0xaafc,	// (0x00031328) listscroll_wgtman_pane

0xab1f,	// (0x0003134b) wgtman_btn_pane_ParamLimits

0xab1f,	// (0x0003134b) wgtman_btn_pane

0x494e,	// (0x0002b17a) aid_scroll_copy1

0xeeb6,	// (0x000356e2) list_wgtman_pane

0xab62,	// (0x0003138e) wgtman_btn_pane_g1_ParamLimits

0xab62,	// (0x0003138e) wgtman_btn_pane_g1

0xab8e,	// (0x000313ba) wgtman_btn_pane_t1_ParamLimits

0xab8e,	// (0x000313ba) wgtman_btn_pane_t1

0xeec0,	// (0x000356ec) wgtman_btn_pane_t2_ParamLimits

0xeec0,	// (0x000356ec) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00036705) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00036705) wgtman_btn_pane_t

0xabcb,	// (0x000313f7) listrow_wgtman_pane_ParamLimits

0xabcb,	// (0x000313f7) listrow_wgtman_pane

0xabdf,	// (0x0003140b) listrow_wgtman_pane_g1

0xabe8,	// (0x00031414) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0003670a) listrow_wgtman_pane_g

0xabf2,	// (0x0003141e) listrow_wgtman_pane_t1

0xac00,	// (0x0003142c) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0003670f) listrow_wgtman_pane_t

0xac0e,	// (0x0003143a) wait_bar_pane_cp09

0xeed7,	// (0x00035703) main_calllock_btn_pane

0xeee1,	// (0x0003570d) main_calllock_pane_g1

0x1b43,	// (0x0002836f) bg_button_pane_cp17

0xeeed,	// (0x00035719) main_calllock_btn_pane_g1

0xeef6,	// (0x00035722) main_calllock_btn_pane_t1

0x1b43,	// (0x0002836f) main_dialer3_pane

0x1b43,	// (0x0002836f) main_fmrd2_pane

0xc2d0,	// (0x00032afc) main_fs_bigclock_unlock_btn_pane_g1

0xef0d,	// (0x00035739) main_fs_bigclock_unlock_btn_pane_t1

0xac16,	// (0x00031442) area_fmrd2_info_pane_ParamLimits

0xac16,	// (0x00031442) area_fmrd2_info_pane

0xac27,	// (0x00031453) area_fmrd2_visual_pane_ParamLimits

0xac27,	// (0x00031453) area_fmrd2_visual_pane

0xac35,	// (0x00031461) fmrd2_indi_pane_ParamLimits

0xac35,	// (0x00031461) fmrd2_indi_pane

0xac42,	// (0x0003146e) area_fmrd2_visual_pane_g1

0xac4a,	// (0x00031476) area_fmrd2_visual_pane_t1

0xac5a,	// (0x00031486) area_fmrd2_visual_pane_t2

0xac6a,	// (0x00031496) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00036719) area_fmrd2_visual_pane_t

0xac7a,	// (0x000314a6) area_fmrd2_info_pane_g1

0xac82,	// (0x000314ae) area_fmrd2_info_pane_t1

0xac92,	// (0x000314be) area_fmrd2_info_pane_t2

0xaca2,	// (0x000314ce) area_fmrd2_info_pane_t3

0xacb2,	// (0x000314de) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00036720) area_fmrd2_info_pane_t

0xacc2,	// (0x000314ee) fmrd2_indi_pane_t1

0xacd2,	// (0x000314fe) fmrd2_indi_pane_t2

0xace2,	// (0x0003150e) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00036729) fmrd2_indi_pane_t

0xe072,	// (0x0003489e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe072,	// (0x0003489e) list_single_fs_bigclock_indicator_pane_g5

0xe11b,	// (0x00034947) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe11b,	// (0x00034947) list_single_fs_bigclock_indicator_pane_t5

0xa42e,	// (0x00030c5a) aid_cell_bcale_month_pane_ParamLimits

0xa42e,	// (0x00030c5a) aid_cell_bcale_month_pane

0xa440,	// (0x00030c6c) bcale_month_pane_ParamLimits

0xa440,	// (0x00030c6c) bcale_month_pane

0xa45a,	// (0x00030c86) bcale_preview_pane_ParamLimits

0xa45a,	// (0x00030c86) bcale_preview_pane

0xec99,	// (0x000354c5) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb8,	// (0x000354e4) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb8,	// (0x000354e4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x000366b0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x000366b0) list_single_fs_bigclock_pane_t

0xef05,	// (0x00035731) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00036714) main_fs_bigclock_unlock_btn_pane_g

0xacf2,	// (0x0003151e) aid_dia3_key_size_ParamLimits

0xacf2,	// (0x0003151e) aid_dia3_key_size

0xad01,	// (0x0003152d) aid_dia3_listrow_size_ParamLimits

0xad01,	// (0x0003152d) aid_dia3_listrow_size

0xad0f,	// (0x0003153b) dia3_keypad_fun_pane_ParamLimits

0xad0f,	// (0x0003153b) dia3_keypad_fun_pane

0xad2b,	// (0x00031557) dia3_keypad_num_pane_ParamLimits

0xad2b,	// (0x00031557) dia3_keypad_num_pane

0xad44,	// (0x00031570) dia3_listscroll_pane_ParamLimits

0xad44,	// (0x00031570) dia3_listscroll_pane

0xad59,	// (0x00031585) dia3_numentry_pane_ParamLimits

0xad59,	// (0x00031585) dia3_numentry_pane

0xef1b,	// (0x00035747) dia3_list_pane

0xef26,	// (0x00035752) scroll_pane_cp12

0x1b43,	// (0x0002836f) bg_dia3_numentry_pane

0xef31,	// (0x0003575d) dia3_numentry_pane_t1

0xad6c,	// (0x00031598) cell_dia3_key_num_pane

0xad74,	// (0x000315a0) cell_dia3_key0_fun_pane_ParamLimits

0xad74,	// (0x000315a0) cell_dia3_key0_fun_pane

0xad88,	// (0x000315b4) cell_dia3_key1_fun_pane_ParamLimits

0xad88,	// (0x000315b4) cell_dia3_key1_fun_pane

0xada0,	// (0x000315cc) dia3_listrow_pane

0xdd62,	// (0x0003458e) bg_dia3_numentry_pane_g1

0x1b43,	// (0x0002836f) bg_button_pane_cp21

0xef40,	// (0x0003576c) cell_dia3_key_num_pane_t1

0xef4e,	// (0x0003577a) cell_dia3_key_num_pane_t2

0xef5d,	// (0x00035789) cell_dia3_key_num_pane_t3

0xef6c,	// (0x00035798) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00036730) cell_dia3_key_num_pane_t

0x1b43,	// (0x0002836f) bg_button_pane_cp19

0xadb2,	// (0x000315de) cell_dia3_key0_fun_pane_g1

0x1b43,	// (0x0002836f) bg_button_pane_cp20

0xadba,	// (0x000315e6) cell_dia3_key1_fun_pane_g1

0xadc2,	// (0x000315ee) area_left_week_number_pane

0xadcb,	// (0x000315f7) area_top_day_name_pane

0xadd4,	// (0x00031600) frame_month_view_pane

0xade0,	// (0x0003160c) grid_month_view_pane

0xadea,	// (0x00031616) cell_top_day_name_pane_ParamLimits

0xadea,	// (0x00031616) cell_top_day_name_pane

0xae04,	// (0x00031630) cell_area_left_week_number_pane_ParamLimits

0xae04,	// (0x00031630) cell_area_left_week_number_pane

0xae1a,	// (0x00031646) cell_month_view_pane_ParamLimits

0xae1a,	// (0x00031646) cell_month_view_pane

0xef7b,	// (0x000357a7) frm_month_g1

0xae39,	// (0x00031665) frm_month_g2

0xae43,	// (0x0003166f) frm_month_g3

0xae4d,	// (0x00031679) frm_month_g4

0xae57,	// (0x00031683) frm_month_g5

0xae61,	// (0x0003168d) frm_month_g6

0xae6d,	// (0x00031699) frm_month_g7

0xef84,	// (0x000357b0) frm_month_g8

0xae79,	// (0x000316a5) frm_month_g9

0xae82,	// (0x000316ae) frm_month_g10

0xae8b,	// (0x000316b7) frm_month_g11

0xae94,	// (0x000316c0) frm_month_g12

0xae9d,	// (0x000316c9) frm_month_g13

0xaea6,	// (0x000316d2) frm_month_g14

0xaeaf,	// (0x000316db) frm_month_g15

0xaeba,	// (0x000316e6) frm_month_g16

0x000f,

0xff0d,	// (0x00036739) frm_month_g

0xaec5,	// (0x000316f1) cell_top_day_name_pane_t1

0xaed4,	// (0x00031700) cell_area_left_week_number_pane_g1

0xaec5,	// (0x000316f1) cell_area_left_week_number_pane_t1

0xc2d0,	// (0x00032afc) cell_month_view_pane_g1

0xaedc,	// (0x00031708) cell_month_view_pane_t1

0x1b43,	// (0x0002836f) main_fps_pane

0xe359,	// (0x00034b85) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe359,	// (0x00034b85) cmail_ddmenu_btn02_pane_cp1

0xe375,	// (0x00034ba1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe375,	// (0x00034ba1) cmail_ddmenu_btn02_pane_cp2

0xa6f5,	// (0x00030f21) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa6f5,	// (0x00030f21) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x00036663) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x00036663) cmail_ddmenu_btn02_pane_g

0xa713,	// (0x00030f3f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa713,	// (0x00030f3f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x00036668) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x00036668) cmail_ddmenu_btn02_pane_t

0xaeeb,	// (0x00031717) fps_text_pane_ParamLimits

0xaeeb,	// (0x00031717) fps_text_pane

0xaf02,	// (0x0003172e) main_fps_pane_g1_ParamLimits

0xaf02,	// (0x0003172e) main_fps_pane_g1

0xaf1a,	// (0x00031746) wait_bar_pane_cp010_ParamLimits

0xaf1a,	// (0x00031746) wait_bar_pane_cp010

0xaf2d,	// (0x00031759) fps_text_pane_t1_ParamLimits

0xaf2d,	// (0x00031759) fps_text_pane_t1

0xcf10,	// (0x0003373c) cam4_image_uncrop_pane_g1

0xcf19,	// (0x00033745) cam4_image_uncrop_pane_g2

0x81bc,	// (0x0002e9e8) cam4_image_uncrop_pane_g3

0x81c5,	// (0x0002e9f1) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00036134) cam4_image_uncrop_pane_g

0xada0,	// (0x000315cc) dia3_listrow_pane_ParamLimits

0x1b43,	// (0x0002836f) main_phob2_pane

0xa22e,	// (0x00030a5a) cell_tport_appsw_pane_cp02_ParamLimits

0xa22e,	// (0x00030a5a) cell_tport_appsw_pane_cp02

0xa242,	// (0x00030a6e) cell_tport_appsw_pane_cp03_ParamLimits

0xa242,	// (0x00030a6e) cell_tport_appsw_pane_cp03

0x1b43,	// (0x0002836f) phob2_contact_card_pane

0x1b43,	// (0x0002836f) phob2_listscroll_pane

0xef8d,	// (0x000357b9) phob2_list_pane

0xef95,	// (0x000357c1) scroll_pane_cp034

0xaf45,	// (0x00031771) phob2_cc_data_pane_ParamLimits

0xaf45,	// (0x00031771) phob2_cc_data_pane

0xaf66,	// (0x00031792) phob2_cc_listscroll_pane_ParamLimits

0xaf66,	// (0x00031792) phob2_cc_listscroll_pane

0xaf88,	// (0x000317b4) list_double_large_graphic_phob2_pane_ParamLimits

0xaf88,	// (0x000317b4) list_double_large_graphic_phob2_pane

0xaf9d,	// (0x000317c9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaf9d,	// (0x000317c9) list_double_large_graphic_phob2_pane_g1

0xafaa,	// (0x000317d6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xafaa,	// (0x000317d6) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0003675a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0003675a) list_double_large_graphic_phob2_pane_g

0xafb6,	// (0x000317e2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xafb6,	// (0x000317e2) list_double_large_graphic_phob2_pane_t1

0xafcb,	// (0x000317f7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xafcb,	// (0x000317f7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0003675f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0003675f) list_double_large_graphic_phob2_pane_t

0x1b43,	// (0x0002836f) list_highlight_pane_cp024

0xef9d,	// (0x000357c9) phob2_cc_button_pane

0xafdd,	// (0x00031809) phob2_cc_data_pane_g1_ParamLimits

0xafdd,	// (0x00031809) phob2_cc_data_pane_g1

0xaff3,	// (0x0003181f) phob2_cc_data_pane_g2_ParamLimits

0xaff3,	// (0x0003181f) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00036764) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00036764) phob2_cc_data_pane_g

0xb007,	// (0x00031833) phob2_cc_data_pane_t1_ParamLimits

0xb007,	// (0x00031833) phob2_cc_data_pane_t1

0xb021,	// (0x0003184d) phob2_cc_data_pane_t2_ParamLimits

0xb021,	// (0x0003184d) phob2_cc_data_pane_t2

0xb03b,	// (0x00031867) phob2_cc_data_pane_t3_ParamLimits

0xb03b,	// (0x00031867) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00036769) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00036769) phob2_cc_data_pane_t

0xefa5,	// (0x000357d1) phob2_cc_list_pane_ParamLimits

0xefa5,	// (0x000357d1) phob2_cc_list_pane

0xd39e,	// (0x00033bca) scroll_pane_cp035_ParamLimits

0xd39e,	// (0x00033bca) scroll_pane_cp035

0x1dbb,	// (0x000285e7) bg_button_pane_cp033

0xefb1,	// (0x000357dd) phob2_cc_button_pane_g1

0xefbd,	// (0x000357e9) phob2_cc_button_pane_t1

0xefd2,	// (0x000357fe) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00036770) phob2_cc_button_pane_t

0xb055,	// (0x00031881) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb055,	// (0x00031881) list_double_large_graphic_phob2_cc_pane

0xb06a,	// (0x00031896) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb06a,	// (0x00031896) list_double_large_graphic_phob2_cc_pane_g1

0xb076,	// (0x000318a2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb076,	// (0x000318a2) list_double_large_graphic_phob2_cc_pane_g2

0xb082,	// (0x000318ae) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb082,	// (0x000318ae) list_double_large_graphic_phob2_cc_pane_g3

0xb08e,	// (0x000318ba) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb08e,	// (0x000318ba) list_double_large_graphic_phob2_cc_pane_g4

0xb09a,	// (0x000318c6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb09a,	// (0x000318c6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00036775) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00036775) list_double_large_graphic_phob2_cc_pane_g

0xb0a6,	// (0x000318d2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb0a6,	// (0x000318d2) list_double_large_graphic_phob2_cc_pane_t1

0xb0cf,	// (0x000318fb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb0cf,	// (0x000318fb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00036780) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00036780) list_double_large_graphic_phob2_cc_pane_t

0xefe4,	// (0x00035810) list_highlight_pane_cp025_ParamLimits

0xefe4,	// (0x00035810) list_highlight_pane_cp025

0x1dbb,	// (0x000285e7) bg_button_pane_cp033_ParamLimits

0xefb1,	// (0x000357dd) phob2_cc_button_pane_g1_ParamLimits

0xefbd,	// (0x000357e9) phob2_cc_button_pane_t1_ParamLimits

0xefd2,	// (0x000357fe) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00036770) phob2_cc_button_pane_t_ParamLimits

0x1dc9,	// (0x000285f5) popup_wgtman_window

0xd13a,	// (0x00033966) scroll_pane_cp038

0xab44,	// (0x00031370) wgtman_btn_pane_cp_01_ParamLimits

0xab44,	// (0x00031370) wgtman_btn_pane_cp_01

0xeff2,	// (0x0003581e) wgtman_content_pane

0xeffb,	// (0x00035827) wgtman_heading_pane

0x1b43,	// (0x0002836f) bg_heading_pane_cp02

0xf004,	// (0x00035830) wgtman_heading_pane_g1

0xf00c,	// (0x00035838) wgtman_heading_pane_t1

0xf01a,	// (0x00035846) scroll_pane_cp036

0xf022,	// (0x0003584e) wgtman_list_pane

0xf02a,	// (0x00035856) wgtman_list_pane_t1_ParamLimits

0xf02a,	// (0x00035856) wgtman_list_pane_t1

0xcefa,	// (0x00033726) cam4_grid_pane

0x8a13,	// (0x0002f23f) bg_button_pane_cp015_ParamLimits

0x8a27,	// (0x0002f253) bg_button_pane_cp016_ParamLimits

0x8a3a,	// (0x0002f266) bg_button_pane_cp017_ParamLimits

0x8a92,	// (0x0002f2be) popup_vitu2_query_window_g3_ParamLimits

0x8a92,	// (0x0002f2be) popup_vitu2_query_window_g3

0x8b4f,	// (0x0002f37b) popup_vitu2_query_window_t6_ParamLimits

0x8b4f,	// (0x0002f37b) popup_vitu2_query_window_t6

0x8b7a,	// (0x0002f3a6) popup_vitu2_query_window_t7_ParamLimits

0x8b7a,	// (0x0002f3a6) popup_vitu2_query_window_t7

0xcf10,	// (0x0003373c) cam4_grid_pane_g1

0xcf19,	// (0x00033745) cam4_grid_pane_g2

0xf04d,	// (0x00035879) cam4_grid_pane_g3

0xf056,	// (0x00035882) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00036785) cam4_grid_pane_g

0x32d7,	// (0x00029b03) aid_placing_vt_slider_lsc_ParamLimits

0x3618,	// (0x00029e44) vidtel_button_pane_ParamLimits

0x3618,	// (0x00029e44) vidtel_button_pane

0xf061,	// (0x0003588d) bg_button_pane_cp034

0xb0f8,	// (0x00031924) vidtel_button_pane_g1

0xf06b,	// (0x00035897) vidtel_button_pane_t1

0xd279,	// (0x00033aa5) aid_size_vtel_slider_touch

0xd39e,	// (0x00033bca) scroll_pane_cp039

0xdda0,	// (0x000345cc) ncim_query_button_pane_cp01_ParamLimits

0xddbf,	// (0x000345eb) ncimui_query_pane_g1_ParamLimits

0x1dbb,	// (0x000285e7) input_focus_pane_cp012_ParamLimits

0xdde4,	// (0x00034610) ncim_query_entry_pane_t1_ParamLimits

0xd39e,	// (0x00033bca) scroll_pane_cp039_ParamLimits

0x4c1e,	// (0x0002b44a) navi_pane_bcale_mc_g1

0x4c26,	// (0x0002b452) navi_pane_bcale_mc_t1

0xe3c0,	// (0x00034bec) main_sp_fs_email_pane_g1

0xe3c8,	// (0x00034bf4) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x00036526) main_sp_fs_email_pane_g

0xe943,	// (0x0003516f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe943,	// (0x0003516f) list_single_cale_mrui_row_pane_g3

0xa73b,	// (0x00030f67) list_single_recal_day_pane_g5_event_pane

0xeb07,	// (0x00035333) list_single_recal_day_pane_g7

0xf079,	// (0x000358a5) list_recal_day_event_pane_cp01

0xf082,	// (0x000358ae) list_recal_vselct_arw_lo_pane_cp01

0xf08a,	// (0x000358b6) list_recal_vselct_arw_up_pane_cp01

0xf092,	// (0x000358be) list_recal_vselct_pane_cp01

0xd305,	// (0x00033b31) list_recal_day_event_pane_cp01_g1

0xf09c,	// (0x000358c8) list_recal_day_event_pane_cp01_t1

0xeb0f,	// (0x0003533b) list_single_recal_day_pane_t1_ParamLimits

0xeb21,	// (0x0003534d) list_single_recal_day_pane_t2_ParamLimits

0xfe4c,	// (0x00036678) list_single_recal_day_pane_t_ParamLimits

0x2791,	// (0x00028fbd) bg_notes_pane_ParamLimits

0x279f,	// (0x00028fcb) list_notes_pane_ParamLimits

0x27ad,	// (0x00028fd9) scroll_pane_cp06_ParamLimits

0x27d5,	// (0x00029001) main_notes_pane_ParamLimits

0x1b43,	// (0x0002836f) main_welc_pane

0xb100,	// (0x0003192c) main_welc_body_pane_ParamLimits

0xb100,	// (0x0003192c) main_welc_body_pane

0xb116,	// (0x00031942) main_welc_opti_pane_ParamLimits

0xb116,	// (0x00031942) main_welc_opti_pane

0xb12d,	// (0x00031959) main_welc_pane_t1_ParamLimits

0xb12d,	// (0x00031959) main_welc_pane_t1

0xf0aa,	// (0x000358d6) main_welc_body_row_pane_ParamLimits

0xf0aa,	// (0x000358d6) main_welc_body_row_pane

0xb146,	// (0x00031972) main_welc_opti_row_pane_ParamLimits

0xb146,	// (0x00031972) main_welc_opti_row_pane

0xf0c1,	// (0x000358ed) main_welc_opti_row_pane_g1

0xf0c9,	// (0x000358f5) main_welc_opti_row_pane_t1

0xf0d8,	// (0x00035904) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
