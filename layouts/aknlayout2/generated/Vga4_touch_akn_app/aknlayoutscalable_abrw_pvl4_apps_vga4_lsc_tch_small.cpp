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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005bcb7 };

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
0x0b55,	// (0x0005c80c) Screen

0x0b61,	// (0x0005c818) application_window

0x0bd3,	// (0x0005c88a) area_bottom_pane_ParamLimits

0x0bd3,	// (0x0005c88a) area_bottom_pane

0x0c31,	// (0x0005c8e8) area_top_pane_ParamLimits

0x0c31,	// (0x0005c8e8) area_top_pane

0x0c8e,	// (0x0005c945) call_video_uplink_pane_ParamLimits

0x0c8e,	// (0x0005c945) call_video_uplink_pane

0x0cba,	// (0x0005c971) main_pane_ParamLimits

0x0cba,	// (0x0005c971) main_pane

0xc06e,	// (0x00067d25) context_pane

0x4156,	// (0x0005fe0d) navi_pane

0x4186,	// (0x0005fe3d) popup_cale_events_window_ParamLimits

0x4186,	// (0x0005fe3d) popup_cale_events_window

0xc081,	// (0x00067d38) popup_mup_playback_window

0x419e,	// (0x0005fe55) signal_pane

0x9fe1,	// (0x00065c98) main_browser_pane

0xabb0,	// (0x00066867) main_burst_pane

0x3e58,	// (0x0005fb0f) main_calc_pane

0xabb0,	// (0x00066867) main_cale_day_pane

0x9fe1,	// (0x00065c98) main_cale_month_pane

0xabb0,	// (0x00066867) main_cale_week_pane

0xabb0,	// (0x00066867) main_call_pane

0x9c8f,	// (0x00065946) main_call_poc_pane

0xabb0,	// (0x00066867) main_camera_pane

0xabb0,	// (0x00066867) main_chi_dic_pane

0xaa52,	// (0x00066709) main_clock_pane

0x9c8f,	// (0x00065946) main_fmradio_pane

0xabb0,	// (0x00066867) main_graph_messa_pane

0x9c8f,	// (0x00065946) main_help_pane

0x9fe1,	// (0x00065c98) main_im_pane

0x9eea,	// (0x00065ba1) main_image_pane_ParamLimits

0x9eea,	// (0x00065ba1) main_image_pane

0x9c8f,	// (0x00065946) main_location2_pane

0xabb0,	// (0x00066867) main_location_pane

0x9c8f,	// (0x00065946) main_messa_pane

0x9c8f,	// (0x00065946) main_mp2_pane

0xabb0,	// (0x00066867) main_mp_pane

0x9c8f,	// (0x00065946) main_msg_pane

0x9c8f,	// (0x00065946) main_mup_eq_pane

0x9c8f,	// (0x00065946) main_mup_pane

0xabb0,	// (0x00066867) main_notes_pane

0x9c8f,	// (0x00065946) main_pec_pane

0x9c8f,	// (0x00065946) main_phob_pane

0x9c8f,	// (0x00065946) main_pinb_pane

0x9c8f,	// (0x00065946) main_postcard_pane

0x9c8f,	// (0x00065946) main_qdial_pane

0xabb0,	// (0x00066867) main_skin_pane

0x9c8f,	// (0x00065946) main_smil2_pane

0xabb0,	// (0x00066867) main_smil_pane

0xabb0,	// (0x00066867) main_video_pane

0xabb0,	// (0x00066867) main_video_tele_pane

0x9eea,	// (0x00065ba1) main_viewer_pane_ParamLimits

0x9eea,	// (0x00065ba1) main_viewer_pane

0xabb0,	// (0x00066867) main_vorec_pane

0x3eae,	// (0x0005fb65) popup_blid_sat_info_window_ParamLimits

0x3eae,	// (0x0005fb65) popup_blid_sat_info_window

0x3f12,	// (0x0005fbc9) popup_dyc_status_message_window_ParamLimits

0x3f12,	// (0x0005fbc9) popup_dyc_status_message_window

0x3f2c,	// (0x0005fbe3) popup_grid_large_graphic_window_ParamLimits

0x3f2c,	// (0x0005fbe3) popup_grid_large_graphic_window

0x3fee,	// (0x0005fca5) popup_loc_request_window_ParamLimits

0x3fee,	// (0x0005fca5) popup_loc_request_window

0x412a,	// (0x0005fde1) popup_wml_address_window_ParamLimits

0x412a,	// (0x0005fde1) popup_wml_address_window

0x3c96,	// (0x0005f94d) call_muted_g1

0x3927,	// (0x0005f5de) popup_call_audio_conf_window_ParamLimits

0x3927,	// (0x0005f5de) popup_call_audio_conf_window

0x3ca6,	// (0x0005f95d) popup_call_audio_first_window_ParamLimits

0x3ca6,	// (0x0005f95d) popup_call_audio_first_window

0x3d1c,	// (0x0005f9d3) popup_call_audio_in_window_ParamLimits

0x3d1c,	// (0x0005f9d3) popup_call_audio_in_window

0x3d58,	// (0x0005fa0f) popup_call_audio_out_window_ParamLimits

0x3d58,	// (0x0005fa0f) popup_call_audio_out_window

0x3d92,	// (0x0005fa49) popup_call_audio_second_window_ParamLimits

0x3d92,	// (0x0005fa49) popup_call_audio_second_window

0x3de8,	// (0x0005fa9f) popup_call_audio_wait_window_ParamLimits

0x3de8,	// (0x0005fa9f) popup_call_audio_wait_window

0x3e1d,	// (0x0005fad4) popup_number_entry_window_ParamLimits

0x3e1d,	// (0x0005fad4) popup_number_entry_window

0x0e50,	// (0x0005cb07) bg_popup_call_pane_cp05_ParamLimits

0x0e50,	// (0x0005cb07) bg_popup_call_pane_cp05

0x0e70,	// (0x0005cb27) popup_number_entry_window_t1

0x0e83,	// (0x0005cb3a) popup_number_entry_window_t2

0x0e95,	// (0x0005cb4c) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0006ada3) popup_number_entry_window_t

0x0edc,	// (0x0005cb93) text_title_cp2

0x0eef,	// (0x0005cba6) bg_popup_call_pane_cp_ParamLimits

0x0eef,	// (0x0005cba6) bg_popup_call_pane_cp

0x0efd,	// (0x0005cbb4) call_thumbnail_pane

0x0f05,	// (0x0005cbbc) popup_call_audio_in_window_g1_ParamLimits

0x0f05,	// (0x0005cbbc) popup_call_audio_in_window_g1

0x0f11,	// (0x0005cbc8) popup_call_audio_in_window_g2_ParamLimits

0x0f11,	// (0x0005cbc8) popup_call_audio_in_window_g2

0x0f1d,	// (0x0005cbd4) popup_call_audio_in_window_g3_ParamLimits

0x0f1d,	// (0x0005cbd4) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0006adac) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0006adac) popup_call_audio_in_window_g

0x0f29,	// (0x0005cbe0) popup_call_audio_in_window_t1_ParamLimits

0x0f29,	// (0x0005cbe0) popup_call_audio_in_window_t1

0x0f45,	// (0x0005cbfc) popup_call_audio_in_window_t2_ParamLimits

0x0f45,	// (0x0005cbfc) popup_call_audio_in_window_t2

0x9958,	// (0x0006560f) popup_call_audio_in_window_t3_ParamLimits

0x9958,	// (0x0006560f) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0006adb3) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0006adb3) popup_call_audio_in_window_t

0x0eef,	// (0x0005cba6) bg_popup_call_pane_cp01_ParamLimits

0x0eef,	// (0x0005cba6) bg_popup_call_pane_cp01

0x0efd,	// (0x0005cbb4) call_thumbnail_pane_cp02

0x996b,	// (0x00065622) call_type_pane_cp022

0x9973,	// (0x0006562a) popup_call_audio_out_window_g1_ParamLimits

0x9973,	// (0x0006562a) popup_call_audio_out_window_g1

0x9985,	// (0x0006563c) popup_call_audio_out_window_g2_ParamLimits

0x9985,	// (0x0006563c) popup_call_audio_out_window_g2

0x9991,	// (0x00065648) popup_call_audio_out_window_g3_ParamLimits

0x9991,	// (0x00065648) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0006adba) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0006adba) popup_call_audio_out_window_g

0x99a3,	// (0x0006565a) popup_call_audio_out_window_t1_ParamLimits

0x99a3,	// (0x0006565a) popup_call_audio_out_window_t1

0x99bb,	// (0x00065672) popup_call_audio_out_window_t2_ParamLimits

0x99bb,	// (0x00065672) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0006adc1) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0006adc1) popup_call_audio_out_window_t

0x99d0,	// (0x00065687) bg_popup_call_pane_ParamLimits

0x99d0,	// (0x00065687) bg_popup_call_pane

0x0f61,	// (0x0005cc18) call_thumbnail_pane_cp_ParamLimits

0x0f61,	// (0x0005cc18) call_thumbnail_pane_cp

0x9a54,	// (0x0006570b) call_type_pane_cp01_ParamLimits

0x9a54,	// (0x0006570b) call_type_pane_cp01

0x9a98,	// (0x0006574f) popup_call_audio_first_window_g1_ParamLimits

0x9a98,	// (0x0006574f) popup_call_audio_first_window_g1

0x9ae4,	// (0x0006579b) popup_call_audio_first_window_g2_ParamLimits

0x9ae4,	// (0x0006579b) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0006adc6) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0006adc6) popup_call_audio_first_window_g

0x9b28,	// (0x000657df) popup_call_audio_first_window_t1_ParamLimits

0x9b28,	// (0x000657df) popup_call_audio_first_window_t1

0x9bd4,	// (0x0006588b) popup_call_audio_first_window_t4_ParamLimits

0x9bd4,	// (0x0006588b) popup_call_audio_first_window_t4

0x9c60,	// (0x00065917) popup_call_audio_first_window_t5_ParamLimits

0x9c60,	// (0x00065917) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0006adcb) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0006adcb) popup_call_audio_first_window_t

0x9c8f,	// (0x00065946) bg_popup_call_pane_cp02

0x9c99,	// (0x00065950) call_type_pane_cp023

0x9ca1,	// (0x00065958) popup_call_audio_wait_window_g1

0x9ca9,	// (0x00065960) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0006add2) popup_call_audio_wait_window_g

0x9cb1,	// (0x00065968) popup_call_audio_wait_window_t3

0x9cbf,	// (0x00065976) bg_popup_call_pane_cp03_ParamLimits

0x9cbf,	// (0x00065976) bg_popup_call_pane_cp03

0x9d1f,	// (0x000659d6) call_thumbnail_pane_cp011_ParamLimits

0x9d1f,	// (0x000659d6) call_thumbnail_pane_cp011

0x9d2b,	// (0x000659e2) call_type_pane_cp034_ParamLimits

0x9d2b,	// (0x000659e2) call_type_pane_cp034

0x9d67,	// (0x00065a1e) popup_call_audio_second_window_g1_ParamLimits

0x9d67,	// (0x00065a1e) popup_call_audio_second_window_g1

0x9da3,	// (0x00065a5a) popup_call_audio_second_window_g2_ParamLimits

0x9da3,	// (0x00065a5a) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0006add7) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0006add7) popup_call_audio_second_window_g

0x9ddf,	// (0x00065a96) popup_call_audio_second_window_t1_ParamLimits

0x9ddf,	// (0x00065a96) popup_call_audio_second_window_t1

0x9e60,	// (0x00065b17) popup_call_audio_second_window_t2_ParamLimits

0x9e60,	// (0x00065b17) popup_call_audio_second_window_t2

0x9e96,	// (0x00065b4d) popup_call_audio_second_window_t3_ParamLimits

0x9e96,	// (0x00065b4d) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0006addc) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0006addc) popup_call_audio_second_window_t

0x9c8f,	// (0x00065946) bg_popup_call_pane_cp04

0x9ecc,	// (0x00065b83) list_conf_pane

0x9ed4,	// (0x00065b8b) popup_call_audio_conf_window_t1

0x9ee2,	// (0x00065b99) call_thumbnail_pane_g1

0x9eea,	// (0x00065ba1) bg_pinb_pane_ParamLimits

0x9eea,	// (0x00065ba1) bg_pinb_pane

0x9ef8,	// (0x00065baf) find_pinb_pane

0x9f01,	// (0x00065bb8) listscroll_pinb_pane_ParamLimits

0x9f01,	// (0x00065bb8) listscroll_pinb_pane

0x9f10,	// (0x00065bc7) pinb_bg_pane_g1

0x0f85,	// (0x0005cc3c) pinb_bg_pane_g2

0x0f91,	// (0x0005cc48) pinb_bg_pane_g3

0x0f9d,	// (0x0005cc54) pinb_bg_pane_g4

0x0fa9,	// (0x0005cc60) pinb_bg_pane_g5

0x0fb5,	// (0x0005cc6c) pinb_bg_pane_g6

0x0fc0,	// (0x0005cc77) pinb_bg_pane_g7

0x0fcb,	// (0x0005cc82) pinb_bg_pane_g8

0x0fd6,	// (0x0005cc8d) pinb_bg_pane_g9

0x0fe0,	// (0x0005cc97) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0006ade3) pinb_bg_pane_g

0x0ffd,	// (0x0005ccb4) grid_pinb_pane

0x1008,	// (0x0005ccbf) list_pinb_pane

0x1013,	// (0x0005ccca) scroll_pane_cp01_ParamLimits

0x1013,	// (0x0005ccca) scroll_pane_cp01

0x9f1a,	// (0x00065bd1) find_pinb_pane_g1_ParamLimits

0x9f1a,	// (0x00065bd1) find_pinb_pane_g1

0x9f32,	// (0x00065be9) find_pinb_pane_t1

0x9f44,	// (0x00065bfb) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0006adfd) find_pinb_pane_t

0x9f59,	// (0x00065c10) input_focus_pane_cp01_ParamLimits

0x9f59,	// (0x00065c10) input_focus_pane_cp01

0x1025,	// (0x0005ccdc) cell_pinb_pane_ParamLimits

0x1025,	// (0x0005ccdc) cell_pinb_pane

0x1047,	// (0x0005ccfe) cell_pinb_pane_g1_ParamLimits

0x1047,	// (0x0005ccfe) cell_pinb_pane_g1

0x105b,	// (0x0005cd12) cell_pinb_pane_g2_ParamLimits

0x105b,	// (0x0005cd12) cell_pinb_pane_g2

0x9f65,	// (0x00065c1c) cell_pinb_pane_g3_ParamLimits

0x9f65,	// (0x00065c1c) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0006ae02) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0006ae02) cell_pinb_pane_g

0x9c8f,	// (0x00065946) grid_highlight_pane_cp01

0x1067,	// (0x0005cd1e) list_pinb_item_pane_ParamLimits

0x1067,	// (0x0005cd1e) list_pinb_item_pane

0x9c8f,	// (0x00065946) list_highlight_pane_cp02

0x107a,	// (0x0005cd31) list_pinb_item_pane_g1_ParamLimits

0x107a,	// (0x0005cd31) list_pinb_item_pane_g1

0x1087,	// (0x0005cd3e) list_pinb_item_pane_g2_ParamLimits

0x1087,	// (0x0005cd3e) list_pinb_item_pane_g2

0x1093,	// (0x0005cd4a) list_pinb_item_pane_g3_ParamLimits

0x1093,	// (0x0005cd4a) list_pinb_item_pane_g3

0x10a4,	// (0x0005cd5b) list_pinb_item_pane_g4_ParamLimits

0x10a4,	// (0x0005cd5b) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0006ae09) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0006ae09) list_pinb_item_pane_g

0x10b0,	// (0x0005cd67) list_pinb_item_pane_t1_ParamLimits

0x10b0,	// (0x0005cd67) list_pinb_item_pane_t1

0x10e5,	// (0x0005cd9c) calc_display_pane

0x110b,	// (0x0005cdc2) calc_paper_pane

0x112e,	// (0x0005cde5) grid_calc_pane

0x9c8f,	// (0x00065946) bg_list_pane_cp01

0x115c,	// (0x0005ce13) clock_g1

0x1164,	// (0x0005ce1b) clock_g2

0x0001,

0xf15b,	// (0x0006ae12) clock_g

0x116c,	// (0x0005ce23) clock_t1_ParamLimits

0x116c,	// (0x0005ce23) clock_t1

0x1181,	// (0x0005ce38) clock_t2_ParamLimits

0x1181,	// (0x0005ce38) clock_t2

0x1193,	// (0x0005ce4a) clock_t3_ParamLimits

0x1193,	// (0x0005ce4a) clock_t3

0x11a5,	// (0x0005ce5c) clock_t4_ParamLimits

0x11a5,	// (0x0005ce5c) clock_t4

0x11b7,	// (0x0005ce6e) clock_t5_ParamLimits

0x11b7,	// (0x0005ce6e) clock_t5

0x11cc,	// (0x0005ce83) clock_t6_ParamLimits

0x11cc,	// (0x0005ce83) clock_t6

0x11de,	// (0x0005ce95) clock_t7_ParamLimits

0x11de,	// (0x0005ce95) clock_t7

0x11f0,	// (0x0005cea7) clock_t8_ParamLimits

0x11f0,	// (0x0005cea7) clock_t8

0x1204,	// (0x0005cebb) clock_t9_ParamLimits

0x1204,	// (0x0005cebb) clock_t9

0x0008,

0xf160,	// (0x0006ae17) clock_t_ParamLimits

0xf160,	// (0x0006ae17) clock_t

0x9f79,	// (0x00065c30) popup_clock_analogue_window_cp02

0x9f79,	// (0x00065c30) popup_clock_digital_window_cp01

0x9f81,	// (0x00065c38) listscroll_help_pane

0x9c8f,	// (0x00065946) phob_pre_status_pane

0x9f8b,	// (0x00065c42) grid_qdial_pane

0x9c8f,	// (0x00065946) listscroll_mce_pane

0x9f95,	// (0x00065c4c) bg_notes_pane

0x9f9f,	// (0x00065c56) list_notes_pane

0x121a,	// (0x0005ced1) scroll_pane_cp06

0x9fa9,	// (0x00065c60) bg_calc_paper_pane

0x9fc7,	// (0x00065c7e) list_calc_pane

0x9fe1,	// (0x00065c98) bg_calc_display_pane

0x1225,	// (0x0005cedc) calc_display_pane_t1

0x1237,	// (0x0005ceee) calc_display_pane_t2

0x9fed,	// (0x00065ca4) calc_display_pane_t3

0x0002,

0xf173,	// (0x0006ae2a) calc_display_pane_t

0x1249,	// (0x0005cf00) cell_calc_pane_ParamLimits

0x1249,	// (0x0005cf00) cell_calc_pane

0x9fff,	// (0x00065cb6) bg_calc_paper_pane_g1

0xa00b,	// (0x00065cc2) bg_calc_paper_pane_g2

0xa017,	// (0x00065cce) bg_calc_paper_pane_g3

0xa023,	// (0x00065cda) bg_calc_paper_pane_g4

0xa02f,	// (0x00065ce6) bg_calc_paper_pane_g5

0x1284,	// (0x0005cf3b) bg_calc_paper_pane_g6

0x1297,	// (0x0005cf4e) bg_calc_paper_pane_g7

0x12aa,	// (0x0005cf61) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0006ae31) bg_calc_paper_pane_g

0x12bb,	// (0x0005cf72) calc_bg_paper_pane_g9

0x12cc,	// (0x0005cf83) list_calc_item_pane_ParamLimits

0x12cc,	// (0x0005cf83) list_calc_item_pane

0xa03b,	// (0x00065cf2) list_calc_item_pane_g1

0xa048,	// (0x00065cff) list_calc_item_pane_t1_ParamLimits

0xa048,	// (0x00065cff) list_calc_item_pane_t1

0x12e0,	// (0x0005cf97) list_calc_item_pane_t2_ParamLimits

0x12e0,	// (0x0005cf97) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0006ae42) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0006ae42) list_calc_item_pane_t

0xa05a,	// (0x00065d11) cell_calc_pane_g1

0xa064,	// (0x00065d1b) grid_highlight_pane_cp02

0xa086,	// (0x00065d3d) bg_calc_display_pane_g1

0xa08f,	// (0x00065d46) bg_calc_display_pane_g2

0xa099,	// (0x00065d50) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0006ae4c) bg_calc_display_pane_g

0x1312,	// (0x0005cfc9) cell_qdial_pane_ParamLimits

0x1312,	// (0x0005cfc9) cell_qdial_pane

0x1328,	// (0x0005cfdf) cell_qdial_pane_g1_ParamLimits

0x1328,	// (0x0005cfdf) cell_qdial_pane_g1

0x133e,	// (0x0005cff5) cell_qdial_pane_g2_ParamLimits

0x133e,	// (0x0005cff5) cell_qdial_pane_g2

0xa0a2,	// (0x00065d59) cell_qdial_pane_g3_ParamLimits

0xa0a2,	// (0x00065d59) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0006ae53) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0006ae53) cell_qdial_pane_g

0x1364,	// (0x0005d01b) cell_qdial_pane_t1_ParamLimits

0x1364,	// (0x0005d01b) cell_qdial_pane_t1

0x137c,	// (0x0005d033) cell_qdial_pane_t2_ParamLimits

0x137c,	// (0x0005d033) cell_qdial_pane_t2

0x138f,	// (0x0005d046) cell_qdial_pane_t3_ParamLimits

0x138f,	// (0x0005d046) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0006ae5c) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0006ae5c) cell_qdial_pane_t

0x9c8f,	// (0x00065946) grid_highlight_pane_cp04

0xa0ae,	// (0x00065d65) thumbnail_qdial_pane_ParamLimits

0xa0ae,	// (0x00065d65) thumbnail_qdial_pane

0xa10a,	// (0x00065dc1) list_help_pane

0xa113,	// (0x00065dca) scroll_pane_cp02

0x13a2,	// (0x0005d059) help_list_pane_t1_ParamLimits

0x13a2,	// (0x0005d059) help_list_pane_t1

0xa11c,	// (0x00065dd3) bg_notes_pane_g2

0xa124,	// (0x00065ddb) bg_notes_pane_g3

0xa12c,	// (0x00065de3) notes_bg_pane_g1

0xa134,	// (0x00065deb) notes_bg_pane_g4

0xa13c,	// (0x00065df3) notes_bg_pane_g5

0xa144,	// (0x00065dfb) notes_bg_pane_g6

0xa14c,	// (0x00065e03) notes_bg_pane_g7

0xa154,	// (0x00065e0b) notes_bg_pane_g8

0xa15c,	// (0x00065e13) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0006ae7a) notes_bg_pane_g

0x13c6,	// (0x0005d07d) list_notes_text_pane_ParamLimits

0x13c6,	// (0x0005d07d) list_notes_text_pane

0xa164,	// (0x00065e1b) list_notes_text_pane_g1

0x13dd,	// (0x0005d094) list_notes_text_pane_t1

0x9fe1,	// (0x00065c98) listscroll_cale_week_pane

0x1408,	// (0x0005d0bf) bg_cale_heading_pane

0xa17e,	// (0x00065e35) bg_cale_pane_cp01

0x1424,	// (0x0005d0db) cale_week_corner_pane

0x143a,	// (0x0005d0f1) cale_week_day_heading_pane

0x1456,	// (0x0005d10d) cale_week_scroll_pane_g1

0x146f,	// (0x0005d126) cale_week_scroll_pane_g2

0x1480,	// (0x0005d137) cale_week_scroll_pane_g3

0x1491,	// (0x0005d148) cale_week_scroll_pane_g4

0x14a2,	// (0x0005d159) cale_week_scroll_pane_g5

0x14b3,	// (0x0005d16a) cale_week_scroll_pane_g6

0x14c4,	// (0x0005d17b) cale_week_scroll_pane_g7

0x14d5,	// (0x0005d18c) cale_week_scroll_pane_g8

0x14e6,	// (0x0005d19d) cale_week_scroll_pane_g9

0x14f7,	// (0x0005d1ae) cale_week_scroll_pane_g10

0x1508,	// (0x0005d1bf) cale_week_scroll_pane_g11

0x1519,	// (0x0005d1d0) cale_week_scroll_pane_g12

0x152a,	// (0x0005d1e1) cale_week_scroll_pane_g13

0x1543,	// (0x0005d1fa) cale_week_scroll_pane_g14

0x155c,	// (0x0005d213) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0006ae89) cale_week_scroll_pane_g

0x1575,	// (0x0005d22c) cale_week_time_pane

0x1586,	// (0x0005d23d) grid_cale_week_pane

0x15a1,	// (0x0005d258) scroll_pane_cp08

0x15b9,	// (0x0005d270) cell_cale_week_pane_ParamLimits

0x15b9,	// (0x0005d270) cell_cale_week_pane

0x1601,	// (0x0005d2b8) cale_week_day_heading_pane_t1

0x1615,	// (0x0005d2cc) cale_week_day_heading_pane_t2

0x1629,	// (0x0005d2e0) cale_week_day_heading_pane_t3

0x163d,	// (0x0005d2f4) cale_week_day_heading_pane_t4

0x1651,	// (0x0005d308) cale_week_day_heading_pane_t5

0x1665,	// (0x0005d31c) cale_week_day_heading_pane_t6

0x1679,	// (0x0005d330) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0006aea8) cale_week_day_heading_pane_t

0xa1a9,	// (0x00065e60) bg_cale_side_pane

0x168d,	// (0x0005d344) cale_week_time_pane_t1

0x16a5,	// (0x0005d35c) cale_week_time_pane_t2

0x16bd,	// (0x0005d374) cale_week_time_pane_t3

0x16d5,	// (0x0005d38c) cale_week_time_pane_t4

0x16ed,	// (0x0005d3a4) cale_week_time_pane_t5

0x1705,	// (0x0005d3bc) cale_week_time_pane_t6

0x171d,	// (0x0005d3d4) cale_week_time_pane_t7

0x1739,	// (0x0005d3f0) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0006aeb7) cale_week_time_pane_t

0x1759,	// (0x0005d410) cell_cale_week_pane_g2

0x176a,	// (0x0005d421) cell_cale_week_pane_g3_ParamLimits

0x176a,	// (0x0005d421) cell_cale_week_pane_g3

0xa1b7,	// (0x00065e6e) grid_highlight_pane_cp07

0xa1bf,	// (0x00065e76) listscroll_gms_pane

0xa1c9,	// (0x00065e80) grid_gms_pane

0xa1d2,	// (0x00065e89) listscroll_gms_pane_g1

0xa1da,	// (0x00065e91) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0006aec8) listscroll_gms_pane_g

0x1782,	// (0x0005d439) scroll_pane_cp010

0x178d,	// (0x0005d444) cell_gms_pane_ParamLimits

0x178d,	// (0x0005d444) cell_gms_pane

0x17a7,	// (0x0005d45e) cell_gms_pane_g1

0xa1e2,	// (0x00065e99) cell_gms_pane_g2

0xa1ea,	// (0x00065ea1) cell_gms_pane_g3

0xa1f3,	// (0x00065eaa) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0006aecd) cell_gms_pane_g

0xa1fc,	// (0x00065eb3) grid_highlight_pane_cp09

0x3c3e,	// (0x0005f8f5) phob_pre_status_pane_g1

0x3c46,	// (0x0005f8fd) phob_pre_status_pane_g2

0x3c4e,	// (0x0005f905) phob_pre_status_pane_g3

0x3c56,	// (0x0005f90d) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0006b2bc) phob_pre_status_pane_g

0x3c66,	// (0x0005f91d) phob_pre_status_pane_t1

0x3c76,	// (0x0005f92d) phob_pre_status_pane_t2

0x3c86,	// (0x0005f93d) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0006b2c7) phob_pre_status_pane_t

0x9c8f,	// (0x00065946) bg_list_pane_cp05

0x17b7,	// (0x0005d46e) grid_vorec_pane

0xa204,	// (0x00065ebb) vorec_t1

0xa212,	// (0x00065ec9) vorec_t2

0xa220,	// (0x00065ed7) vorec_t3

0xa22e,	// (0x00065ee5) vorec_t4

0xa23c,	// (0x00065ef3) vorec_t5

0xa24a,	// (0x00065f01) vorec_t6

0x0006,

0xf21f,	// (0x0006aed6) vorec_t

0xa266,	// (0x00065f1d) wait_bar_pane_cp01

0x17c1,	// (0x0005d478) cell_vorec_pane_ParamLimits

0x17c1,	// (0x0005d478) cell_vorec_pane

0xa26e,	// (0x00065f25) cell_vorec_pane_g1

0x9c8f,	// (0x00065946) grid_highlight_pane_cp05

0x17ec,	// (0x0005d4a3) cams_zoom_pane

0x17fb,	// (0x0005d4b2) image_vga_pane

0x1815,	// (0x0005d4cc) main_camera_pane_g1

0x1827,	// (0x0005d4de) main_camera_pane_g2

0x1837,	// (0x0005d4ee) main_camera_pane_g3

0x184b,	// (0x0005d502) main_camera_pane_g4

0x185f,	// (0x0005d516) main_camera_pane_g5

0x1873,	// (0x0005d52a) main_camera_pane_g6

0x1887,	// (0x0005d53e) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0006aee5) main_camera_pane_g

0x189b,	// (0x0005d552) main_camera_pane_t1

0x18b1,	// (0x0005d568) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0006aef6) main_camera_pane_t

0x18ef,	// (0x0005d5a6) cams_zoom_pane_cp_ParamLimits

0x18ef,	// (0x0005d5a6) cams_zoom_pane_cp

0x1917,	// (0x0005d5ce) image_cif_pane_ParamLimits

0x1917,	// (0x0005d5ce) image_cif_pane

0x1952,	// (0x0005d609) image_subqcif_pane

0x195c,	// (0x0005d613) main_video_pane_g1_ParamLimits

0x195c,	// (0x0005d613) main_video_pane_g1

0x1980,	// (0x0005d637) main_video_pane_g2_ParamLimits

0x1980,	// (0x0005d637) main_video_pane_g2

0x19b6,	// (0x0005d66d) main_video_pane_g3_ParamLimits

0x19b6,	// (0x0005d66d) main_video_pane_g3

0x19e4,	// (0x0005d69b) main_video_pane_g4_ParamLimits

0x19e4,	// (0x0005d69b) main_video_pane_g4

0x1a12,	// (0x0005d6c9) main_video_pane_g5_ParamLimits

0x1a12,	// (0x0005d6c9) main_video_pane_g5

0xa284,	// (0x00065f3b) main_video_pane_g6_ParamLimits

0xa284,	// (0x00065f3b) main_video_pane_g6

0x0006,

0xf244,	// (0x0006aefb) main_video_pane_g_ParamLimits

0xf244,	// (0x0006aefb) main_video_pane_g

0x1a3b,	// (0x0005d6f2) main_video_pane_t1_ParamLimits

0x1a3b,	// (0x0005d6f2) main_video_pane_t1

0xa29e,	// (0x00065f55) cams_zoom_pane_g1

0xa2a7,	// (0x00065f5e) cams_zoom_pane_g2

0xa2b0,	// (0x00065f67) cams_zoom_pane_g3

0xa2b9,	// (0x00065f70) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0006af0a) cams_zoom_pane_g

0x1a98,	// (0x0005d74f) grid_cams_pane

0x1ab2,	// (0x0005d769) linegrid_cams_pane

0x1ac6,	// (0x0005d77d) cell_cams_pane_ParamLimits

0x1ac6,	// (0x0005d77d) cell_cams_pane

0xa2c2,	// (0x00065f79) cams_burst_image_pane

0xa2ca,	// (0x00065f81) cell_cams_pane_g1

0x9c8f,	// (0x00065946) grid_highlight_pane_cp03

0xa05a,	// (0x00065d11) mp_bg_pane_g1

0x9c8f,	// (0x00065946) bg_list_pane_cp03

0xbf40,	// (0x00067bf7) bg_mp_pane

0xbf48,	// (0x00067bff) grid_mp_pane

0xbf50,	// (0x00067c07) media_player_g1

0xbf5a,	// (0x00067c11) media_player_t1

0xbf68,	// (0x00067c1f) media_player_t2

0xbf76,	// (0x00067c2d) media_player_t3

0xbf84,	// (0x00067c3b) media_player_t4

0xbf92,	// (0x00067c49) media_player_t5

0xbfa0,	// (0x00067c57) media_player_t6

0xbfae,	// (0x00067c65) media_player_t7

0x0006,

0xf5ef,	// (0x0006b2a6) media_player_t

0xbfbc,	// (0x00067c73) wait_bar_pane_cp02

0xf5d4,	// (0x0006b28b) main_usb_pane_t

0x3c35,	// (0x0005f8ec) cell_mp_pane

0xa05a,	// (0x00065d11) cell_mp_pane_g1

0x9c8f,	// (0x00065946) grid_highlight_pane_cp06

0xa2d2,	// (0x00065f89) grid_skin_colour_pane

0xa2da,	// (0x00065f91) list_highlight_pane_cp03

0x1bff,	// (0x0005d8b6) skin_g1

0xa2e2,	// (0x00065f99) skin_t1

0xa2f1,	// (0x00065fa8) skin_t2

0x0001,

0xf288,	// (0x0006af3f) skin_t

0x1c09,	// (0x0005d8c0) cell_skin_colour_pane_ParamLimits

0x1c09,	// (0x0005d8c0) cell_skin_colour_pane

0xa2ff,	// (0x00065fb6) cell_skin_colour_pane_g1

0x1c7c,	// (0x0005d933) call_video_g1_ParamLimits

0x1c7c,	// (0x0005d933) call_video_g1

0x1c98,	// (0x0005d94f) call_video_g2_ParamLimits

0x1c98,	// (0x0005d94f) call_video_g2

0x0001,

0xf28d,	// (0x0006af44) call_video_g_ParamLimits

0xf28d,	// (0x0006af44) call_video_g

0x1ce0,	// (0x0005d997) call_video_uplink_pane_cp1_ParamLimits

0x1ce0,	// (0x0005d997) call_video_uplink_pane_cp1

0xa311,	// (0x00065fc8) call_video_uplink_pane_cp2

0x1d81,	// (0x0005da38) video_down_crop_pane_ParamLimits

0x1d81,	// (0x0005da38) video_down_crop_pane

0x1e6a,	// (0x0005db21) video_down_pane_ParamLimits

0x1e6a,	// (0x0005db21) video_down_pane

0xa319,	// (0x00065fd0) video_down_subqcif_pane_ParamLimits

0xa319,	// (0x00065fd0) video_down_subqcif_pane

0xa333,	// (0x00065fea) video_down_subqcif_pane_cp_ParamLimits

0xa333,	// (0x00065fea) video_down_subqcif_pane_cp

0xa359,	// (0x00066010) im_reading_pane_ParamLimits

0xa359,	// (0x00066010) im_reading_pane

0x1f73,	// (0x0005dc2a) im_writing_pane_ParamLimits

0x1f73,	// (0x0005dc2a) im_writing_pane

0x1f91,	// (0x0005dc48) im_reading_pane_t1

0xa373,	// (0x0006602a) list_im_pane

0xa384,	// (0x0006603b) scroll_pane_cp07

0x1fd0,	// (0x0005dc87) im_writing_pane_t1_ParamLimits

0x1fd0,	// (0x0005dc87) im_writing_pane_t1

0xa39d,	// (0x00066054) im_writing_pane_t2_ParamLimits

0xa39d,	// (0x00066054) im_writing_pane_t2

0x0001,

0xf297,	// (0x0006af4e) im_writing_pane_t_ParamLimits

0xf297,	// (0x0006af4e) im_writing_pane_t

0x9c8f,	// (0x00065946) input_focus_pane_cp04

0x9c8f,	// (0x00065946) input_focus_pane_cp05

0x1fe5,	// (0x0005dc9c) list_im_single_pane_ParamLimits

0x1fe5,	// (0x0005dc9c) list_im_single_pane

0x1ffe,	// (0x0005dcb5) list_single_im_pane_t1

0x3bf5,	// (0x0005f8ac) blid_accuracy_pane

0x3bfd,	// (0x0005f8b4) blid_compass_pane

0x3c07,	// (0x0005f8be) main_location_t1

0x3c17,	// (0x0005f8ce) main_location_t2

0x3c27,	// (0x0005f8de) main_location_t3

0x0002,

0xf5fe,	// (0x0006b2b5) main_location_t

0x9c8f,	// (0x00065946) aid_levels_location

0xa05a,	// (0x00065d11) blid_accuracy_pane_g1

0xa05a,	// (0x00065d11) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0006afb0) blid_accuracy_pane_g

0xa3e5,	// (0x0006609c) wml_content_pane

0xa423,	// (0x000660da) wml_button_pane_ParamLimits

0xa423,	// (0x000660da) wml_button_pane

0x200d,	// (0x0005dcc4) wml_list_single_large_pane_ParamLimits

0x200d,	// (0x0005dcc4) wml_list_single_large_pane

0x2026,	// (0x0005dcdd) wml_list_single_medium_pane_ParamLimits

0x2026,	// (0x0005dcdd) wml_list_single_medium_pane

0x2040,	// (0x0005dcf7) wml_list_single_small_pane_ParamLimits

0x2040,	// (0x0005dcf7) wml_list_single_small_pane

0xa437,	// (0x000660ee) wml_selection_box_pane_ParamLimits

0xa437,	// (0x000660ee) wml_selection_box_pane

0xa44a,	// (0x00066101) wml_list_single_pane_t1

0xa459,	// (0x00066110) wml_list_single_medium_pane_t1

0xa468,	// (0x0006611f) wml_list_single_large_pane_t1

0xa477,	// (0x0006612e) input_focus_pane_cp02_ParamLimits

0xa477,	// (0x0006612e) input_focus_pane_cp02

0xa48a,	// (0x00066141) wml_selection_box_pane_g1

0xa493,	// (0x0006614a) wml_selection_box_pane_t1_ParamLimits

0xa493,	// (0x0006614a) wml_selection_box_pane_t1

0x9eea,	// (0x00065ba1) bg_wml_button_pane_ParamLimits

0x9eea,	// (0x00065ba1) bg_wml_button_pane

0xa4ab,	// (0x00066162) wml_button_pane_g1

0xa4b3,	// (0x0006616a) wml_button_pane_t1

0xa4ab,	// (0x00066162) wml_button_bg_pane_g1

0xa4c3,	// (0x0006617a) wml_button_bg_pane_g2

0xa4cb,	// (0x00066182) wml_button_bg_pane_g3

0xa4d3,	// (0x0006618a) wml_button_bg_pane_g4

0xa4db,	// (0x00066192) wml_button_bg_pane_g5

0xa4e3,	// (0x0006619a) wml_button_bg_pane_g6

0xa4eb,	// (0x000661a2) wml_button_bg_pane_g7

0xa4f3,	// (0x000661aa) wml_button_bg_pane_g8

0xa4fb,	// (0x000661b2) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0006af53) wml_button_bg_pane_g

0x205f,	// (0x0005dd16) bg_list_pane_cp02

0xa503,	// (0x000661ba) mce_header_pane_ParamLimits

0xa503,	// (0x000661ba) mce_header_pane

0xa519,	// (0x000661d0) mce_icon_pane

0xa519,	// (0x000661d0) mce_image_pane

0xa522,	// (0x000661d9) mce_text_pane_ParamLimits

0xa522,	// (0x000661d9) mce_text_pane

0x2069,	// (0x0005dd20) scroll_pane_cp03

0xa41b,	// (0x000660d2) scroll_pane_cp04

0xa535,	// (0x000661ec) scroll_pane_cp05_ParamLimits

0xa535,	// (0x000661ec) scroll_pane_cp05

0x2073,	// (0x0005dd2a) mce_header_field_pane_ParamLimits

0x2073,	// (0x0005dd2a) mce_header_field_pane

0x208c,	// (0x0005dd43) mce_header_field_pane_2_ParamLimits

0x208c,	// (0x0005dd43) mce_header_field_pane_2

0x20a2,	// (0x0005dd59) mce_header_field_pane_3

0x20aa,	// (0x0005dd61) list_single_mce_message_pane_ParamLimits

0x20aa,	// (0x0005dd61) list_single_mce_message_pane

0x20c6,	// (0x0005dd7d) list_single_mce_smart_pane_ParamLimits

0x20c6,	// (0x0005dd7d) list_single_mce_smart_pane

0xa541,	// (0x000661f8) input_focus_pane_cp03

0xa54a,	// (0x00066201) list_header_data_pane

0x20ed,	// (0x0005dda4) mce_header_field_pane_t1

0x20fd,	// (0x0005ddb4) list_single_mce_header_pane_ParamLimits

0x20fd,	// (0x0005ddb4) list_single_mce_header_pane

0xa552,	// (0x00066209) list_single_mce_header_pane_t1

0xa561,	// (0x00066218) list_single_mce_message_pane_g1

0xa569,	// (0x00066220) list_single_mce_message_pane_t1

0x212f,	// (0x0005dde6) bg_cale_heading_pane_cp01_ParamLimits

0x212f,	// (0x0005dde6) bg_cale_heading_pane_cp01

0xa577,	// (0x0006622e) bg_cale_pane_cp02_ParamLimits

0xa577,	// (0x0006622e) bg_cale_pane_cp02

0x2162,	// (0x0005de19) cale_month_corner_pane

0x2178,	// (0x0005de2f) cale_month_day_heading_pane_ParamLimits

0x2178,	// (0x0005de2f) cale_month_day_heading_pane

0x21ab,	// (0x0005de62) cale_month_pane_g1_ParamLimits

0x21ab,	// (0x0005de62) cale_month_pane_g1

0x21d7,	// (0x0005de8e) cale_month_pane_g2_ParamLimits

0x21d7,	// (0x0005de8e) cale_month_pane_g2

0x21f8,	// (0x0005deaf) cale_month_pane_g3_ParamLimits

0x21f8,	// (0x0005deaf) cale_month_pane_g3

0x2234,	// (0x0005deeb) cale_month_pane_g4_ParamLimits

0x2234,	// (0x0005deeb) cale_month_pane_g4

0x2270,	// (0x0005df27) cale_month_pane_g5_ParamLimits

0x2270,	// (0x0005df27) cale_month_pane_g5

0x22ac,	// (0x0005df63) cale_month_pane_g6_ParamLimits

0x22ac,	// (0x0005df63) cale_month_pane_g6

0x22e8,	// (0x0005df9f) cale_month_pane_g7_ParamLimits

0x22e8,	// (0x0005df9f) cale_month_pane_g7

0x2324,	// (0x0005dfdb) cale_month_pane_g8_ParamLimits

0x2324,	// (0x0005dfdb) cale_month_pane_g8

0x2360,	// (0x0005e017) cale_month_pane_g9_ParamLimits

0x2360,	// (0x0005e017) cale_month_pane_g9

0x2396,	// (0x0005e04d) cale_month_pane_g10_ParamLimits

0x2396,	// (0x0005e04d) cale_month_pane_g10

0x23c0,	// (0x0005e077) cale_month_pane_g11_ParamLimits

0x23c0,	// (0x0005e077) cale_month_pane_g11

0x23ea,	// (0x0005e0a1) cale_month_pane_g12_ParamLimits

0x23ea,	// (0x0005e0a1) cale_month_pane_g12

0x2418,	// (0x0005e0cf) cale_month_pane_g13_ParamLimits

0x2418,	// (0x0005e0cf) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0006af66) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0006af66) cale_month_pane_g

0x2446,	// (0x0005e0fd) cale_month_week_pane

0x2457,	// (0x0005e10e) grid_cale_month_pane_ParamLimits

0x2457,	// (0x0005e10e) grid_cale_month_pane

0x2485,	// (0x0005e13c) cale_month_day_heading_pane_t1

0x24e3,	// (0x0005e19a) cale_month_day_heading_pane_t2

0x2548,	// (0x0005e1ff) cale_month_day_heading_pane_t3

0x25ad,	// (0x0005e264) cale_month_day_heading_pane_t4

0x2612,	// (0x0005e2c9) cale_month_day_heading_pane_t5

0x2677,	// (0x0005e32e) cale_month_day_heading_pane_t6

0x26dc,	// (0x0005e393) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0006af81) cale_month_day_heading_pane_t

0xa1a9,	// (0x00065e60) bg_cale_side_pane_cp01

0x2741,	// (0x0005e3f8) cale_month_week_pane_t1

0x2758,	// (0x0005e40f) cale_month_week_pane_t2

0x276f,	// (0x0005e426) cale_month_week_pane_t3

0x2786,	// (0x0005e43d) cale_month_week_pane_t4

0x279d,	// (0x0005e454) cale_month_week_pane_t5

0x27b4,	// (0x0005e46b) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0006af90) cale_month_week_pane_t

0x27d3,	// (0x0005e48a) cell_cale_month_pane_ParamLimits

0x27d3,	// (0x0005e48a) cell_cale_month_pane

0xa5ac,	// (0x00066263) cell_cale_month_pane_g1

0x28ab,	// (0x0005e562) cell_cale_month_pane_t1_ParamLimits

0x28ab,	// (0x0005e562) cell_cale_month_pane_t1

0xa1b7,	// (0x00065e6e) grid_highlight_pane_cp08

0xa05a,	// (0x00065d11) main_smil_g1

0x28c7,	// (0x0005e57e) smil_status_pane

0xa5b8,	// (0x0006626f) smil_text_pane

0xbe5e,	// (0x00067b15) bg_popup_call3_rect_pane_g8

0xbe66,	// (0x00067b1d) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0006b249) bg_popup_call3_rect_pane_g

0xc0fb,	// (0x00067db2) smil_status_volume_pane_g1

0xa5c2,	// (0x00066279) smil_status_pane_t1

0xc12e,	// (0x00067de5) volume_smil_pane

0xa5d9,	// (0x00066290) list_smil_text_pane

0x28dc,	// (0x0005e593) scroll_pane_cp011

0x28e7,	// (0x0005e59e) smil_text_list_pane_t1_ParamLimits

0x28e7,	// (0x0005e59e) smil_text_list_pane_t1

0xa5e3,	// (0x0006629a) aid_volume_smil_ParamLimits

0xa5e3,	// (0x0006629a) aid_volume_smil

0xa05a,	// (0x00065d11) smil_volume_pane_g1

0xa05a,	// (0x00065d11) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0006afb0) smil_volume_pane_g

0x9fe1,	// (0x00065c98) listscroll_cale_day_pane

0xa605,	// (0x000662bc) bg_cale_pane

0xa61d,	// (0x000662d4) list_cale_pane

0xa62e,	// (0x000662e5) scroll_pane_cp09

0xa63f,	// (0x000662f6) cale_bg_pane_g1

0xa647,	// (0x000662fe) cale_bg_pane_g2

0xa64f,	// (0x00066306) cale_bg_pane_g3

0xa657,	// (0x0006630e) cale_bg_pane_g4

0xa65f,	// (0x00066316) cale_bg_pane_g5

0xa667,	// (0x0006631e) cale_bg_pane_g6

0xa66f,	// (0x00066326) cale_bg_pane_g7

0xa677,	// (0x0006632e) cale_bg_pane_g8

0xa67f,	// (0x00066336) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0006afb5) cale_bg_pane_g

0x293c,	// (0x0005e5f3) list_cale_time_pane_ParamLimits

0x293c,	// (0x0005e5f3) list_cale_time_pane

0x2951,	// (0x0005e608) list_cale_time_pane_g1_ParamLimits

0x2951,	// (0x0005e608) list_cale_time_pane_g1

0xa687,	// (0x0006633e) list_cale_time_pane_g2_ParamLimits

0xa687,	// (0x0006633e) list_cale_time_pane_g2

0x295d,	// (0x0005e614) list_cale_time_pane_g3_ParamLimits

0x295d,	// (0x0005e614) list_cale_time_pane_g3

0x296b,	// (0x0005e622) list_cale_time_pane_g4_ParamLimits

0x296b,	// (0x0005e622) list_cale_time_pane_g4

0x2979,	// (0x0005e630) list_cale_time_pane_g5_ParamLimits

0x2979,	// (0x0005e630) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0006afc8) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0006afc8) list_cale_time_pane_g

0x2987,	// (0x0005e63e) list_cale_time_pane_t1_ParamLimits

0x2987,	// (0x0005e63e) list_cale_time_pane_t1

0x29af,	// (0x0005e666) list_cale_time_pane_t2_ParamLimits

0x29af,	// (0x0005e666) list_cale_time_pane_t2

0x2d9c,	// (0x0005ea53) aid_blid_cardinal_pane

0x2dde,	// (0x0005ea95) compass_pane_t4

0x29d7,	// (0x0005e68e) list_cale_time_pane_t4_ParamLimits

0x29d7,	// (0x0005e68e) list_cale_time_pane_t4

0x2dec,	// (0x0005eaa3) compass_pane_t5

0x2dfc,	// (0x0005eab3) compass_pane_t6

0x2e0a,	// (0x0005eac1) compass_pane_t7

0xab02,	// (0x000667b9) navi_pane_cc_t1

0xac69,	// (0x00066920) aid_phob_thumbnail_center_pane

0x35bb,	// (0x0005f272) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0006afd5) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0006afd5) list_cale_time_pane_t

0x0eef,	// (0x0005cba6) bg_popup_window_pane_cp02_ParamLimits

0x0eef,	// (0x0005cba6) bg_popup_window_pane_cp02

0xa6a1,	// (0x00066358) heading_pane_cp01_ParamLimits

0xa6a1,	// (0x00066358) heading_pane_cp01

0xa6ad,	// (0x00066364) loc_req_pane_ParamLimits

0xa6ad,	// (0x00066364) loc_req_pane

0xa6bd,	// (0x00066374) loc_type_pane_ParamLimits

0xa6bd,	// (0x00066374) loc_type_pane

0xa6cf,	// (0x00066386) loc_type_pane_t1_ParamLimits

0xa6cf,	// (0x00066386) loc_type_pane_t1

0xa6e1,	// (0x00066398) loc_type_pane_t2_ParamLimits

0xa6e1,	// (0x00066398) loc_type_pane_t2

0xa6f3,	// (0x000663aa) loc_type_pane_t3_ParamLimits

0xa6f3,	// (0x000663aa) loc_type_pane_t3

0x0002,

0xf325,	// (0x0006afdc) loc_type_pane_t_ParamLimits

0xf325,	// (0x0006afdc) loc_type_pane_t

0xa705,	// (0x000663bc) list_loc_req_pane

0xa70f,	// (0x000663c6) scroll_pane_cp012

0x29ff,	// (0x0005e6b6) list_single_loc_request_popup_menu_pane_ParamLimits

0x29ff,	// (0x0005e6b6) list_single_loc_request_popup_menu_pane

0xa71a,	// (0x000663d1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa71a,	// (0x000663d1) list_single_loc_request_popup_menu_pane_g1

0xa726,	// (0x000663dd) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa726,	// (0x000663dd) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0006afe3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0006afe3) list_single_loc_request_popup_menu_pane_g

0xa732,	// (0x000663e9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa732,	// (0x000663e9) list_single_loc_request_popup_menu_pane_t1

0x9eea,	// (0x00065ba1) bg_popup_window_pane_cp03_ParamLimits

0x9eea,	// (0x00065ba1) bg_popup_window_pane_cp03

0xa748,	// (0x000663ff) heading_loc_req_pane_ParamLimits

0xa748,	// (0x000663ff) heading_loc_req_pane

0x2a0c,	// (0x0005e6c3) popup_dyc_status_message_window_g1_ParamLimits

0x2a0c,	// (0x0005e6c3) popup_dyc_status_message_window_g1

0x2a20,	// (0x0005e6d7) popup_dyc_status_message_window_t1_ParamLimits

0x2a20,	// (0x0005e6d7) popup_dyc_status_message_window_t1

0x2a35,	// (0x0005e6ec) popup_dyc_status_message_window_t2_ParamLimits

0x2a35,	// (0x0005e6ec) popup_dyc_status_message_window_t2

0x2a4a,	// (0x0005e701) popup_dyc_status_message_window_t3_ParamLimits

0x2a4a,	// (0x0005e701) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0006afe8) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0006afe8) popup_dyc_status_message_window_t

0x9c8f,	// (0x00065946) bg_heading_pane_cp01

0xa754,	// (0x0006640b) heading_loc_req_pane_g1

0xa75c,	// (0x00066413) heading_loc_req_pane_g2

0xa764,	// (0x0006641b) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0006afef) heading_loc_req_pane_g

0xa76c,	// (0x00066423) heading_loc_req_pane_t1

0xa77c,	// (0x00066433) bg_popup_sub_pane_cp01_ParamLimits

0xa77c,	// (0x00066433) bg_popup_sub_pane_cp01

0xa78a,	// (0x00066441) popup_cale_events_window_g1_ParamLimits

0xa78a,	// (0x00066441) popup_cale_events_window_g1

0xa7aa,	// (0x00066461) popup_cale_events_window_g2_ParamLimits

0xa7aa,	// (0x00066461) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0006b023) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0006b023) popup_cale_events_window_g

0xa7ca,	// (0x00066481) popup_cale_events_window_t1_ParamLimits

0xa7ca,	// (0x00066481) popup_cale_events_window_t1

0xa7dc,	// (0x00066493) popup_cale_events_window_t2_ParamLimits

0xa7dc,	// (0x00066493) popup_cale_events_window_t2

0xa81a,	// (0x000664d1) popup_cale_events_window_t3_ParamLimits

0xa81a,	// (0x000664d1) popup_cale_events_window_t3

0xa854,	// (0x0006650b) popup_cale_events_window_t4_ParamLimits

0xa854,	// (0x0006650b) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0006b028) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0006b028) popup_cale_events_window_t

0x2b4f,	// (0x0005e806) call_type_pane

0x2b5f,	// (0x0005e816) popup_call_status_window_g1

0x2b73,	// (0x0005e82a) popup_call_status_window_g2

0x2b87,	// (0x0005e83e) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0006b031) popup_call_status_window_g

0xa88a,	// (0x00066541) call_type_pane_g1

0xa893,	// (0x0006654a) call_type_pane_g2

0x0001,

0xf381,	// (0x0006b038) call_type_pane_g

0x9c8f,	// (0x00065946) bg_popup_sub_pane_cp02

0xa89c,	// (0x00066553) listscroll_popup_wml_pane

0xa8a4,	// (0x0006655b) list_wml_pane

0xa8ae,	// (0x00066565) scroll_pane_cp013

0xa8b9,	// (0x00066570) list_single_graphic_popup_wml_pane_ParamLimits

0xa8b9,	// (0x00066570) list_single_graphic_popup_wml_pane

0xa05a,	// (0x00065d11) list_single_graphic_popup_wml_pane_g1

0xa8cd,	// (0x00066584) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0006b03d) list_single_graphic_popup_wml_pane_g

0xa8d5,	// (0x0006658c) list_single_graphic_popup_wml_pane_t1

0xa8eb,	// (0x000665a2) aid_call_pane

0x9ee2,	// (0x00065b99) popup_clock_analogue_window_g1

0x9ee2,	// (0x00065b99) popup_clock_analogue_window_g2

0xa8f3,	// (0x000665aa) popup_clock_analogue_window_g3

0xa8f3,	// (0x000665aa) popup_clock_analogue_window_g4

0xa05a,	// (0x00065d11) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0006b042) popup_clock_analogue_window_g

0xa8fb,	// (0x000665b2) popup_clock_analogue_window_t1

0xa909,	// (0x000665c0) clock_digital_number_pane_ParamLimits

0xa909,	// (0x000665c0) clock_digital_number_pane

0xa915,	// (0x000665cc) clock_digital_number_pane_cp02_ParamLimits

0xa915,	// (0x000665cc) clock_digital_number_pane_cp02

0xa921,	// (0x000665d8) clock_digital_number_pane_cp03_ParamLimits

0xa921,	// (0x000665d8) clock_digital_number_pane_cp03

0xa92d,	// (0x000665e4) clock_digital_number_pane_cp04_ParamLimits

0xa92d,	// (0x000665e4) clock_digital_number_pane_cp04

0xa939,	// (0x000665f0) clock_digital_separator_pane_ParamLimits

0xa939,	// (0x000665f0) clock_digital_separator_pane

0xa945,	// (0x000665fc) popup_clock_digital_window_t1

0xa05a,	// (0x00065d11) clock_digital_number_pane_g1

0xa05a,	// (0x00065d11) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0006afb0) clock_digital_number_pane_g

0xa05a,	// (0x00065d11) clock_digital_separator_pane_g1

0xa05a,	// (0x00065d11) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0006afb0) clock_digital_separator_pane_g

0x9c8f,	// (0x00065946) bg_popup_window_pane_cp04

0xa962,	// (0x00066619) heading_pane_cp03

0xa96a,	// (0x00066621) listscroll_popup_gms_pane

0xa972,	// (0x00066629) grid_large_graphic_popup_pane

0xa97c,	// (0x00066633) listscroll_popup_gms_pane_g1

0xa984,	// (0x0006663b) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0006b04d) listscroll_popup_gms_pane_g

0xa41b,	// (0x000660d2) scroll_pane_cp014

0x2b97,	// (0x0005e84e) cell_large_graphic_popup_pane_ParamLimits

0x2b97,	// (0x0005e84e) cell_large_graphic_popup_pane

0x2baf,	// (0x0005e866) cell_large_graphic_popup_pane_g1_ParamLimits

0x2baf,	// (0x0005e866) cell_large_graphic_popup_pane_g1

0xa98c,	// (0x00066643) cell_large_graphic_popup_pane_g2_ParamLimits

0xa98c,	// (0x00066643) cell_large_graphic_popup_pane_g2

0xa998,	// (0x0006664f) cell_large_graphic_popup_pane_g3_ParamLimits

0xa998,	// (0x0006664f) cell_large_graphic_popup_pane_g3

0xa9a5,	// (0x0006665c) cell_large_graphic_popup_pane_g4_ParamLimits

0xa9a5,	// (0x0006665c) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0006b052) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0006b052) cell_large_graphic_popup_pane_g

0xa9b5,	// (0x0006666c) grid_highlight_pane_cp010

0xa05a,	// (0x00065d11) bg_popup_call_pane_g1

0xa9bf,	// (0x00066676) list_single_graphic_popup_conf_pane_ParamLimits

0xa9bf,	// (0x00066676) list_single_graphic_popup_conf_pane

0xa9d1,	// (0x00066688) list_highlight_pane_cp01

0xa9da,	// (0x00066691) list_single_graphic_popup_conf_pane_g1

0xa9e2,	// (0x00066699) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0006b05b) list_single_graphic_popup_conf_pane_g

0xa9ea,	// (0x000666a1) list_single_graphic_popup_conf_pane_t1

0xa9f8,	// (0x000666af) linegrid_cams_pane_g1

0x2bbb,	// (0x0005e872) linegrid_cams_pane_g2

0xa1ea,	// (0x00065ea1) linegrid_cams_pane_g3

0xaa01,	// (0x000666b8) linegrid_cams_pane_g4

0x2bc4,	// (0x0005e87b) linegrid_cams_pane_g5

0x2bcd,	// (0x0005e884) linegrid_cams_pane_g6

0xa1f3,	// (0x00065eaa) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0006b060) linegrid_cams_pane_g

0xaa0a,	// (0x000666c1) popup_clock_analogue_window

0xaa0a,	// (0x000666c1) popup_clock_digital_window

0x9c8f,	// (0x00065946) popup_phob_thumbnail_window

0xa05a,	// (0x00065d11) call_video_uplink_pane_g1

0xaa13,	// (0x000666ca) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0006b06f) call_video_uplink_pane_g

0xaa1b,	// (0x000666d2) video_uplink_pane

0xaa23,	// (0x000666da) mce_image_pane_g1

0x2bd8,	// (0x0005e88f) mce_image_pane_g2

0x2be2,	// (0x0005e899) mce_image_pane_g3

0x2bec,	// (0x0005e8a3) mce_image_pane_g4

0x2bf4,	// (0x0005e8ab) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0006b074) mce_image_pane_g

0xaa2d,	// (0x000666e4) control_top_pane_stacon_cp01_ParamLimits

0xaa2d,	// (0x000666e4) control_top_pane_stacon_cp01

0xaa41,	// (0x000666f8) uni_indicator_pane_stacon_cp01_ParamLimits

0xaa41,	// (0x000666f8) uni_indicator_pane_stacon_cp01

0xaa52,	// (0x00066709) bg_popup_sub_pane_cp03

0x2bfc,	// (0x0005e8b3) chi_dic_find_pane

0x2c04,	// (0x0005e8bb) listscroll_chi_dic_pane

0x2c0d,	// (0x0005e8c4) main_pane_chidic_g1

0x2c20,	// (0x0005e8d7) chi_dic_find_pane_t1

0xaa5c,	// (0x00066713) find_chidic_pane

0xaa65,	// (0x0006671c) chi_dic_list_pane_ParamLimits

0xaa65,	// (0x0006671c) chi_dic_list_pane

0xaa76,	// (0x0006672d) scroll_pane_cp020

0x2c2e,	// (0x0005e8e5) find_chidic_pane_t1

0x9c8f,	// (0x00065946) input_focus_pane_cp06

0x2c3d,	// (0x0005e8f4) list_chi_dic_pane_ParamLimits

0x2c3d,	// (0x0005e8f4) list_chi_dic_pane

0x2c4f,	// (0x0005e906) list_chi_dic_pane_t1_ParamLimits

0x2c4f,	// (0x0005e906) list_chi_dic_pane_t1

0x9c8f,	// (0x00065946) list_highlight_pane_cp020

0xaa7e,	// (0x00066735) bg_cale_heading_pane_g1

0x2c62,	// (0x0005e919) bg_cale_heading_pane_g2

0x2c6a,	// (0x0005e921) bg_cale_heading_pane_g3

0x2c72,	// (0x0005e929) bg_cale_heading_pane_g4

0x2c7a,	// (0x0005e931) bg_cale_heading_pane_g5

0x2c82,	// (0x0005e939) bg_cale_heading_pane_g6

0x2c8a,	// (0x0005e941) bg_cale_heading_pane_g7

0x2c92,	// (0x0005e949) bg_cale_heading_pane_g8

0x2c9a,	// (0x0005e951) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0006b07f) bg_cale_heading_pane_g

0xaa7e,	// (0x00066735) bg_cale_side_pane_g1

0x2ca2,	// (0x0005e959) bg_cale_side_pane_g2

0x2cac,	// (0x0005e963) bg_cale_side_pane_g3

0x2cb6,	// (0x0005e96d) bg_cale_side_pane_g4

0x2cc0,	// (0x0005e977) bg_cale_side_pane_g5

0x2cca,	// (0x0005e981) bg_cale_side_pane_g6

0x2cd4,	// (0x0005e98b) bg_cale_side_pane_g7

0x2cde,	// (0x0005e995) bg_cale_side_pane_g8

0x2ce6,	// (0x0005e99d) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0006b092) bg_cale_side_pane_g

0x2cee,	// (0x0005e9a5) popup_call_status_window_ParamLimits

0x2cee,	// (0x0005e9a5) popup_call_status_window

0xaa86,	// (0x0006673d) stacon_top_pane

0xaa8e,	// (0x00066745) status_pane_ParamLimits

0xaa8e,	// (0x00066745) status_pane

0xaaa3,	// (0x0006675a) status_small_pane

0xaaab,	// (0x00066762) control_pane

0x9c8f,	// (0x00065946) stacon_bottom_pane

0xaab3,	// (0x0006676a) list_single_mce_smart_pane_t1_ParamLimits

0xaab3,	// (0x0006676a) list_single_mce_smart_pane_t1

0xaac6,	// (0x0006677d) list_single_mce_smart_pane_t2_ParamLimits

0xaac6,	// (0x0006677d) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0006b0a5) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0006b0a5) list_single_mce_smart_pane_t

0x2d3b,	// (0x0005e9f2) compass_pane

0x2d46,	// (0x0005e9fd) main_location2_pane_t1

0x2d5c,	// (0x0005ea13) main_location2_pane_t2

0x2d72,	// (0x0005ea29) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0006b0aa) main_location2_pane_t

0xaae5,	// (0x0006679c) compass_pane_g1_ParamLimits

0xaae5,	// (0x0006679c) compass_pane_g1

0x2dc0,	// (0x0005ea77) compass_pane_t1

0x2dcf,	// (0x0005ea86) compass_pane_t2

0x0005,

0xf3fc,	// (0x0006b0b3) compass_pane_t

0x2e1a,	// (0x0005ead1) text_secondary_cp61

0xaaf9,	// (0x000667b0) navi_pane_cams_g5

0xab1c,	// (0x000667d3) navi_pane_im_t1

0xab2a,	// (0x000667e1) navi_pane_mp_g1_ParamLimits

0xab2a,	// (0x000667e1) navi_pane_mp_g1

0xab3e,	// (0x000667f5) navi_pane_mp_g2_ParamLimits

0xab3e,	// (0x000667f5) navi_pane_mp_g2

0xab4a,	// (0x00066801) navi_pane_mp_g3_ParamLimits

0xab4a,	// (0x00066801) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0006b0c7) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0006b0c7) navi_pane_mp_g

0xab56,	// (0x0006680d) navi_pane_mp_t1

0xab64,	// (0x0006681b) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0006b0ce) navi_pane_mp_t

0xaba0,	// (0x00066857) navi_pane_vt_g1

0xab56,	// (0x0006680d) navi_pane_vt_t1

0xaba8,	// (0x0006685f) navi_slider_pane

0xabb0,	// (0x00066867) zooming_pane

0xabb8,	// (0x0006686f) navi_slider_pane_g1

0xabc1,	// (0x00066878) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0006b0d5) navi_slider_pane_g

0xabee,	// (0x000668a5) aid_levels_zoom

0xabf6,	// (0x000668ad) zooming_pane_g1

0xabfe,	// (0x000668b5) zooming_pane_g2

0xabfe,	// (0x000668b5) zooming_pane_g3

0x0002,

0xf42d,	// (0x0006b0e4) zooming_pane_g

0xac06,	// (0x000668bd) level_10_zoom

0xac0f,	// (0x000668c6) level_11_zoom

0xac18,	// (0x000668cf) level_1_zoom

0xac21,	// (0x000668d8) level_2_zoom

0xac2a,	// (0x000668e1) level_3_zoom

0xac33,	// (0x000668ea) level_4_zoom

0xac3c,	// (0x000668f3) level_5_zoom

0xac45,	// (0x000668fc) level_6_zoom

0xac4e,	// (0x00066905) level_7_zoom

0xac57,	// (0x0006690e) level_8_zoom

0xac60,	// (0x00066917) level_9_zoom

0xac71,	// (0x00066928) popup_phob_thumbnail_window_g1

0xac79,	// (0x00066930) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0006b0eb) popup_phob_thumbnail_window_g

0xbfc4,	// (0x00067c7b) level_1_location

0xbfcc,	// (0x00067c83) level_2_location

0xbfd4,	// (0x00067c8b) level_3_location

0xbfdc,	// (0x00067c93) level_4_location

0xabb0,	// (0x00066867) level_5_location

0x2f45,	// (0x0005ebfc) mce_icon_pane_g1

0x2f4d,	// (0x0005ec04) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0006b0f0) mce_icon_pane_g

0x2f55,	// (0x0005ec0c) main_mup_pane_g1_ParamLimits

0x2f55,	// (0x0005ec0c) main_mup_pane_g1

0x2f6b,	// (0x0005ec22) main_mup_pane_g2_ParamLimits

0x2f6b,	// (0x0005ec22) main_mup_pane_g2

0x2f83,	// (0x0005ec3a) main_mup_pane_g3_ParamLimits

0x2f83,	// (0x0005ec3a) main_mup_pane_g3

0x2f9b,	// (0x0005ec52) main_mup_pane_g4_ParamLimits

0x2f9b,	// (0x0005ec52) main_mup_pane_g4

0x2fad,	// (0x0005ec64) main_mup_pane_g5_ParamLimits

0x2fad,	// (0x0005ec64) main_mup_pane_g5

0x2fc9,	// (0x0005ec80) main_mup_pane_g6_ParamLimits

0x2fc9,	// (0x0005ec80) main_mup_pane_g6

0x2fe3,	// (0x0005ec9a) main_mup_pane_g7_ParamLimits

0x2fe3,	// (0x0005ec9a) main_mup_pane_g7

0x3001,	// (0x0005ecb8) main_mup_pane_g8_ParamLimits

0x3001,	// (0x0005ecb8) main_mup_pane_g8

0x301f,	// (0x0005ecd6) main_mup_pane_g9_ParamLimits

0x301f,	// (0x0005ecd6) main_mup_pane_g9

0x303b,	// (0x0005ecf2) main_mup_pane_g10_ParamLimits

0x303b,	// (0x0005ecf2) main_mup_pane_g10

0x3059,	// (0x0005ed10) main_mup_pane_g11_ParamLimits

0x3059,	// (0x0005ed10) main_mup_pane_g11

0x3073,	// (0x0005ed2a) main_mup_pane_g12_ParamLimits

0x3073,	// (0x0005ed2a) main_mup_pane_g12

0x3089,	// (0x0005ed40) main_mup_pane_g13_ParamLimits

0x3089,	// (0x0005ed40) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0006b0f5) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0006b0f5) main_mup_pane_g

0x309d,	// (0x0005ed54) main_mup_pane_t1_ParamLimits

0x309d,	// (0x0005ed54) main_mup_pane_t1

0x30b9,	// (0x0005ed70) main_mup_pane_t2_ParamLimits

0x30b9,	// (0x0005ed70) main_mup_pane_t2

0x30d1,	// (0x0005ed88) main_mup_pane_t3_ParamLimits

0x30d1,	// (0x0005ed88) main_mup_pane_t3

0x30e9,	// (0x0005eda0) main_mup_pane_t4_ParamLimits

0x30e9,	// (0x0005eda0) main_mup_pane_t4

0x3107,	// (0x0005edbe) main_mup_pane_t5_ParamLimits

0x3107,	// (0x0005edbe) main_mup_pane_t5

0x311c,	// (0x0005edd3) main_mup_pane_t6_ParamLimits

0x311c,	// (0x0005edd3) main_mup_pane_t6

0x0005,

0xf459,	// (0x0006b110) main_mup_pane_t_ParamLimits

0xf459,	// (0x0006b110) main_mup_pane_t

0x312e,	// (0x0005ede5) mup_progress_pane_ParamLimits

0x312e,	// (0x0005ede5) mup_progress_pane

0x313a,	// (0x0005edf1) mup_visualizer_pane_ParamLimits

0x313a,	// (0x0005edf1) mup_visualizer_pane

0x316e,	// (0x0005ee25) mup_volume_pane_ParamLimits

0x316e,	// (0x0005ee25) mup_volume_pane

0xac81,	// (0x00066938) mup_visualizer_pane_g1_ParamLimits

0xac81,	// (0x00066938) mup_visualizer_pane_g1

0xac81,	// (0x00066938) mup_visualizer_pane_g2_ParamLimits

0xac81,	// (0x00066938) mup_visualizer_pane_g2

0xaae5,	// (0x0006679c) mup_visualizer_pane_g3_ParamLimits

0xaae5,	// (0x0006679c) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0006b11d) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0006b11d) mup_visualizer_pane_g

0xa05a,	// (0x00065d11) mup_volume_pane_g1

0xac97,	// (0x0006694e) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0006b124) mup_volume_pane_g

0xa05a,	// (0x00065d11) mup_progress_pane_g1

0xaca0,	// (0x00066957) mup_progress_pane_g2

0xaca9,	// (0x00066960) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0006b129) mup_progress_pane_g

0x9c8f,	// (0x00065946) bg_popup_window_pane_cp05

0xacb2,	// (0x00066969) heading_pane_cp02_ParamLimits

0xacb2,	// (0x00066969) heading_pane_cp02

0xacce,	// (0x00066985) list_popup_blid_pane

0xacd6,	// (0x0006698d) list_blid_sat_info_pane_ParamLimits

0xacd6,	// (0x0006698d) list_blid_sat_info_pane

0xace9,	// (0x000669a0) list_blid_sat_info_pane_g1

0xacf1,	// (0x000669a8) list_blid_sat_info_pane_t1

0x3298,	// (0x0005ef4f) mup_equalizer_pane_ParamLimits

0x3298,	// (0x0005ef4f) mup_equalizer_pane

0x32b9,	// (0x0005ef70) mup_equalizer_pane_cp1_ParamLimits

0x32b9,	// (0x0005ef70) mup_equalizer_pane_cp1

0x32da,	// (0x0005ef91) mup_equalizer_pane_cp2_ParamLimits

0x32da,	// (0x0005ef91) mup_equalizer_pane_cp2

0x32ff,	// (0x0005efb6) mup_equalizer_pane_cp3_ParamLimits

0x32ff,	// (0x0005efb6) mup_equalizer_pane_cp3

0x3328,	// (0x0005efdf) mup_equalizer_pane_cp4_ParamLimits

0x3328,	// (0x0005efdf) mup_equalizer_pane_cp4

0x3351,	// (0x0005f008) mup_equalizer_pane_cp5

0x3369,	// (0x0005f020) mup_equalizer_pane_cp6

0x3381,	// (0x0005f038) mup_equalizer_pane_cp7

0xbede,	// (0x00067b95) bg_popup_call_poc_act_pane_g9

0xbee6,	// (0x00067b9d) bg_popup_call_poc_act_pane_g10

0xbeee,	// (0x00067ba5) bg_popup_call_poc_act_pane_g11

0x000a,

0x9eea,	// (0x00065ba1) mup_scale_pane

0xa05a,	// (0x00065d11) mup_scale_pane_g1

0xacff,	// (0x000669b6) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0006b145) mup_scale_pane_g

0xad23,	// (0x000669da) msg_data_pane

0xad2b,	// (0x000669e2) scroll_pane_cp017

0x33ab,	// (0x0005f062) bg_list_pane_cp04_ParamLimits

0x33ab,	// (0x0005f062) bg_list_pane_cp04

0xad33,	// (0x000669ea) msg_data_pane_g1

0x33d1,	// (0x0005f088) msg_data_pane_g2

0x33db,	// (0x0005f092) msg_data_pane_g3

0x33e5,	// (0x0005f09c) msg_data_pane_g4

0x33ed,	// (0x0005f0a4) msg_data_pane_g5

0x33f5,	// (0x0005f0ac) msg_data_pane_g6

0x33fd,	// (0x0005f0b4) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0006b154) msg_data_pane_g

0x3405,	// (0x0005f0bc) msg_text_pane_ParamLimits

0x3405,	// (0x0005f0bc) msg_text_pane

0x3436,	// (0x0005f0ed) qrid_highlight_pane_cp011_ParamLimits

0x3436,	// (0x0005f0ed) qrid_highlight_pane_cp011

0x9c8f,	// (0x00065946) msg_body_pane

0x9c8f,	// (0x00065946) msg_header_pane

0xad44,	// (0x000669fb) input_focus_pane_cp07

0x345a,	// (0x0005f111) msg_header_pane_t1_ParamLimits

0x345a,	// (0x0005f111) msg_header_pane_t1

0x346e,	// (0x0005f125) msg_header_pane_t2_ParamLimits

0x346e,	// (0x0005f125) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0006b168) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0006b168) msg_header_pane_t

0xad59,	// (0x00066a10) msg_body_pane_g1

0x3480,	// (0x0005f137) msg_body_pane_t1_ParamLimits

0x3480,	// (0x0005f137) msg_body_pane_t1

0x34b1,	// (0x0005f168) msg_body_pane_t2_ParamLimits

0x34b1,	// (0x0005f168) msg_body_pane_t2

0x34c3,	// (0x0005f17a) msg_body_pane_t3_ParamLimits

0x34c3,	// (0x0005f17a) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0006b16d) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0006b16d) msg_body_pane_t

0x350f,	// (0x0005f1c6) main_viewer_pane_g1_ParamLimits

0x350f,	// (0x0005f1c6) main_viewer_pane_g1

0x351d,	// (0x0005f1d4) main_viewer_pane_g2_ParamLimits

0x351d,	// (0x0005f1d4) main_viewer_pane_g2

0x352b,	// (0x0005f1e2) main_viewer_pane_g3_ParamLimits

0x352b,	// (0x0005f1e2) main_viewer_pane_g3

0x353a,	// (0x0005f1f1) main_viewer_pane_g4_ParamLimits

0x353a,	// (0x0005f1f1) main_viewer_pane_g4

0xad79,	// (0x00066a30) main_viewer_pane_g5_ParamLimits

0xad79,	// (0x00066a30) main_viewer_pane_g5

0xad79,	// (0x00066a30) main_viewer_pane_g7_ParamLimits

0xad79,	// (0x00066a30) main_viewer_pane_g7

0xad8b,	// (0x00066a42) main_viewer_pane_g8_ParamLimits

0xad8b,	// (0x00066a42) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0006b17d) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0006b17d) main_viewer_pane_g

0xada3,	// (0x00066a5a) viewer_content_pane_ParamLimits

0xada3,	// (0x00066a5a) viewer_content_pane

0x3578,	// (0x0005f22f) main_postcard_pane_g1_ParamLimits

0x3578,	// (0x0005f22f) main_postcard_pane_g1

0x358e,	// (0x0005f245) main_postcard_pane_g2_ParamLimits

0x358e,	// (0x0005f245) main_postcard_pane_g2

0x35a4,	// (0x0005f25b) main_postcard_pane_g3_ParamLimits

0x35a4,	// (0x0005f25b) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0006b18e) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0006b18e) main_postcard_pane_g

0x35bb,	// (0x0005f272) main_postcard_pane_g4

0xc10e,	// (0x00067dc5) smil_status_volume_pane_g2

0x35fe,	// (0x0005f2b5) postcard_pane_ParamLimits

0x35fe,	// (0x0005f2b5) postcard_pane

0xadb1,	// (0x00066a68) postcard_pane_g1_ParamLimits

0xadb1,	// (0x00066a68) postcard_pane_g1

0x364e,	// (0x0005f305) postcard_pane_g2_ParamLimits

0x364e,	// (0x0005f305) postcard_pane_g2

0x365a,	// (0x0005f311) postcard_pane_g3_ParamLimits

0x365a,	// (0x0005f311) postcard_pane_g3

0xadbf,	// (0x00066a76) postcard_pane_g4_ParamLimits

0xadbf,	// (0x00066a76) postcard_pane_g4

0x3666,	// (0x0005f31d) postcard_pane_g5_ParamLimits

0x3666,	// (0x0005f31d) postcard_pane_g5

0x3678,	// (0x0005f32f) postcard_pane_g6_ParamLimits

0x3678,	// (0x0005f32f) postcard_pane_g6

0xadb1,	// (0x00066a68) postcard_pane_g7_ParamLimits

0xadb1,	// (0x00066a68) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0006b19b) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0006b19b) postcard_pane_g

0x3690,	// (0x0005f347) main_mp2_pane_g1_ParamLimits

0x3690,	// (0x0005f347) main_mp2_pane_g1

0x369e,	// (0x0005f355) main_mp2_pane_g2_ParamLimits

0x369e,	// (0x0005f355) main_mp2_pane_g2

0x36aa,	// (0x0005f361) main_mp2_pane_g3_ParamLimits

0x36aa,	// (0x0005f361) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0006b1aa) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0006b1aa) main_mp2_pane_g

0x36b6,	// (0x0005f36d) main_mp2_pane_t1_ParamLimits

0x36b6,	// (0x0005f36d) main_mp2_pane_t1

0x36cd,	// (0x0005f384) main_mp2_pane_t2_ParamLimits

0x36cd,	// (0x0005f384) main_mp2_pane_t2

0x36e1,	// (0x0005f398) main_mp2_pane_t3_ParamLimits

0x36e1,	// (0x0005f398) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0006b1b1) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0006b1b1) main_mp2_pane_t

0xadcd,	// (0x00066a84) pec_content_pane_ParamLimits

0xadcd,	// (0x00066a84) pec_content_pane

0xa41b,	// (0x000660d2) scroll_pane_cp015

0xaddf,	// (0x00066a96) pec_attribute_pane_ParamLimits

0xaddf,	// (0x00066a96) pec_attribute_pane

0x36f3,	// (0x0005f3aa) pec_content_pane_g1_ParamLimits

0x36f3,	// (0x0005f3aa) pec_content_pane_g1

0xadef,	// (0x00066aa6) pec_content_pane_t1_ParamLimits

0xadef,	// (0x00066aa6) pec_content_pane_t1

0xae01,	// (0x00066ab8) pec_content_pane_t2_ParamLimits

0xae01,	// (0x00066ab8) pec_content_pane_t2

0x0001,

0xf501,	// (0x0006b1b8) pec_content_pane_t_ParamLimits

0xf501,	// (0x0006b1b8) pec_content_pane_t

0x36ff,	// (0x0005f3b6) list_single_graphic_pane_cp01_ParamLimits

0x36ff,	// (0x0005f3b6) list_single_graphic_pane_cp01

0x9eea,	// (0x00065ba1) bg_popup_sub_pane_cp04

0xae13,	// (0x00066aca) popup_mup_playback_window_g1

0xae1f,	// (0x00066ad6) popup_mup_playback_window_t1

0xae34,	// (0x00066aeb) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0006b1bd) popup_mup_playback_window_t

0xae6b,	// (0x00066b22) main_image_pane_g1_ParamLimits

0xae6b,	// (0x00066b22) main_image_pane_g1

0xaeae,	// (0x00066b65) scroll_pane_cp018_ParamLimits

0xaeae,	// (0x00066b65) scroll_pane_cp018

0xaec6,	// (0x00066b7d) scroll_pane_cp016_ParamLimits

0xaec6,	// (0x00066b7d) scroll_pane_cp016

0x37d1,	// (0x0005f488) smil2_image_pane_ParamLimits

0x37d1,	// (0x0005f488) smil2_image_pane

0x3807,	// (0x0005f4be) smil2_root_pane_ParamLimits

0x3807,	// (0x0005f4be) smil2_root_pane

0x383f,	// (0x0005f4f6) smil2_text_pane_ParamLimits

0x383f,	// (0x0005f4f6) smil2_text_pane

0x9c8f,	// (0x00065946) bg_list_pane_cp06

0xaf02,	// (0x00066bb9) grid_radio_pane

0x9c8f,	// (0x00065946) bg_popup_window_pane_cp06

0xaf0c,	// (0x00066bc3) main_fmradio_pane_t1

0xa962,	// (0x00066619) heading_pane_cp04

0xaf1a,	// (0x00066bd1) main_fmradio_pane_t2

0xbef6,	// (0x00067bad) popup_cale_lunar_info_window_g1

0xaf28,	// (0x00066bdf) main_fmradio_pane_t3

0xbefe,	// (0x00067bb5) popup_cale_lunar_info_window_g2

0xaf38,	// (0x00066bef) main_fmradio_pane_t4

0x0001,

0xaf46,	// (0x00066bfd) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0006b298) popup_cale_lunar_info_window_g

0xf51b,	// (0x0006b1d2) main_fmradio_pane_t

0xaf54,	// (0x00066c0b) wait_bar_pane_cp03

0xaf5c,	// (0x00066c13) cell_fmradio_pane_ParamLimits

0xaf5c,	// (0x00066c13) cell_fmradio_pane

0xadb1,	// (0x00066a68) cell_fmradio_pane_g1_ParamLimits

0xadb1,	// (0x00066a68) cell_fmradio_pane_g1

0x9c8f,	// (0x00065946) grid_highlight_pane_cp011

0xaf71,	// (0x00066c28) poc_content_pane_ParamLimits

0xaf71,	// (0x00066c28) poc_content_pane

0xaf83,	// (0x00066c3a) scroll_pane_cp019

0x38cf,	// (0x0005f586) popup_call_poc_act_window_ParamLimits

0x38cf,	// (0x0005f586) popup_call_poc_act_window

0x38f3,	// (0x0005f5aa) popup_call_poc_inact_window_ParamLimits

0x38f3,	// (0x0005f5aa) popup_call_poc_inact_window

0xf5b8,	// (0x0006b26f) bg_popup_call_poc_act_pane_g

0xbe6e,	// (0x00067b25) bg_popup_call_poc_inact_pane_g1

0xbe76,	// (0x00067b2d) bg_popup_call_poc_inact_pane_g2

0xaf8b,	// (0x00066c42) popup_call_poc_act_window_g2

0xbe7e,	// (0x00067b35) bg_popup_call_poc_inact_pane_g3

0xbe86,	// (0x00067b3d) bg_popup_call_poc_inact_pane_g4

0xbe8e,	// (0x00067b45) bg_popup_call_poc_inact_pane_g5

0xaf93,	// (0x00066c4a) popup_call_poc_act_window_t1_ParamLimits

0xaf93,	// (0x00066c4a) popup_call_poc_act_window_t1

0xafbb,	// (0x00066c72) popup_call_poc_act_window_t2_ParamLimits

0xafbb,	// (0x00066c72) popup_call_poc_act_window_t2

0xafe3,	// (0x00066c9a) popup_call_poc_act_window_t3_ParamLimits

0xafe3,	// (0x00066c9a) popup_call_poc_act_window_t3

0xb00b,	// (0x00066cc2) popup_call_poc_act_window_t4_ParamLimits

0xb00b,	// (0x00066cc2) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0006b1dd) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0006b1dd) popup_call_poc_act_window_t

0xbe96,	// (0x00067b4d) bg_popup_call_poc_inact_pane_g6

0xbe9e,	// (0x00067b55) bg_popup_call_poc_inact_pane_g7

0xbea6,	// (0x00067b5d) bg_popup_call_poc_inact_pane_g8

0xb01d,	// (0x00066cd4) popup_call_poc_inact_window_g2

0xbeae,	// (0x00067b65) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0006b25c) bg_popup_call_poc_inact_pane_g

0xb025,	// (0x00066cdc) popup_call_poc_inact_window_t1_ParamLimits

0xb025,	// (0x00066cdc) popup_call_poc_inact_window_t1

0xb03a,	// (0x00066cf1) popup_call_poc_inact_window_t2_ParamLimits

0xb03a,	// (0x00066cf1) popup_call_poc_inact_window_t2

0xb04f,	// (0x00066d06) popup_call_poc_inact_window_t3_ParamLimits

0xb04f,	// (0x00066d06) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0006b1e6) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0006b1e6) popup_call_poc_inact_window_t

0xc06e,	// (0x00067d25) context_pane_ParamLimits

0x419e,	// (0x0005fe55) signal_pane_ParamLimits

0xabb0,	// (0x00066867) main_call2_pane

0xc05c,	// (0x00067d13) popup_phob_thumbnail2_window_ParamLimits

0xc05c,	// (0x00067d13) popup_phob_thumbnail2_window

0xad61,	// (0x00066a18) aid_hotspot_pointer_arrow_pane

0xad69,	// (0x00066a20) aid_hotspot_pointer_hand_pane

0x3c5e,	// (0x0005f915) phob_pre_status_pane_g5

0x17ec,	// (0x0005d4a3) cams_zoom_pane_ParamLimits

0x17fb,	// (0x0005d4b2) image_vga_pane_ParamLimits

0x1815,	// (0x0005d4cc) main_camera_pane_g1_ParamLimits

0x1827,	// (0x0005d4de) main_camera_pane_g2_ParamLimits

0x1837,	// (0x0005d4ee) main_camera_pane_g3_ParamLimits

0x184b,	// (0x0005d502) main_camera_pane_g4_ParamLimits

0x185f,	// (0x0005d516) main_camera_pane_g5_ParamLimits

0x1873,	// (0x0005d52a) main_camera_pane_g6_ParamLimits

0x1887,	// (0x0005d53e) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0006aee5) main_camera_pane_g_ParamLimits

0x189b,	// (0x0005d552) main_camera_pane_t1_ParamLimits

0x18b1,	// (0x0005d568) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0006aef6) main_camera_pane_t_ParamLimits

0x9eea,	// (0x00065ba1) bg_popup_preview_window_pane_cp01_ParamLimits

0x9eea,	// (0x00065ba1) bg_popup_preview_window_pane_cp01

0xb064,	// (0x00066d1b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb064,	// (0x00066d1b) popup_phob_thumbnail2_window_g1

0x9c8f,	// (0x00065946) call2_cli_visual_pane

0x3927,	// (0x0005f5de) popup_call2_audio_conf_window_ParamLimits

0x3927,	// (0x0005f5de) popup_call2_audio_conf_window

0x394f,	// (0x0005f606) popup_call2_audio_first_window_ParamLimits

0x394f,	// (0x0005f606) popup_call2_audio_first_window

0x39e5,	// (0x0005f69c) popup_call2_audio_in_window_ParamLimits

0x39e5,	// (0x0005f69c) popup_call2_audio_in_window

0x3a31,	// (0x0005f6e8) popup_call2_audio_out_window_ParamLimits

0x3a31,	// (0x0005f6e8) popup_call2_audio_out_window

0x3aa3,	// (0x0005f75a) popup_call2_audio_second_window_ParamLimits

0x3aa3,	// (0x0005f75a) popup_call2_audio_second_window

0x3b09,	// (0x0005f7c0) popup_call2_audio_wait_window_ParamLimits

0x3b09,	// (0x0005f7c0) popup_call2_audio_wait_window

0x9c8f,	// (0x00065946) bg_popup_call2_act_pane_cp03

0x9ecc,	// (0x00065b83) list_conf_pane_cp

0xb070,	// (0x00066d27) popup_call2_audio_conf_window_t1

0xb07e,	// (0x00066d35) list_single_graphic_popup_conf2_pane_ParamLimits

0xb07e,	// (0x00066d35) list_single_graphic_popup_conf2_pane

0xa9d1,	// (0x00066688) list_highlight_pane_cp04

0xb091,	// (0x00066d48) list_single_graphic_popup_conf2_pane_g1

0xa9e2,	// (0x00066699) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0006b1ed) list_single_graphic_popup_conf2_pane_g

0xb09b,	// (0x00066d52) list_single_graphic_popup_conf2_pane_t1

0xb0a9,	// (0x00066d60) bg_popup_call2_act_pane_cp01_ParamLimits

0xb0a9,	// (0x00066d60) bg_popup_call2_act_pane_cp01

0xb133,	// (0x00066dea) call_type_pane_cp05_ParamLimits

0xb133,	// (0x00066dea) call_type_pane_cp05

0xb187,	// (0x00066e3e) popup_call2_audio_second_window_g1_ParamLimits

0xb187,	// (0x00066e3e) popup_call2_audio_second_window_g1

0xb1db,	// (0x00066e92) popup_call2_audio_second_window_g2_ParamLimits

0xb1db,	// (0x00066e92) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0006b1f2) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0006b1f2) popup_call2_audio_second_window_g

0xb240,	// (0x00066ef7) popup_call2_audio_second_window_t1_ParamLimits

0xb240,	// (0x00066ef7) popup_call2_audio_second_window_t1

0xb2fb,	// (0x00066fb2) popup_call2_audio_second_window_t2_ParamLimits

0xb2fb,	// (0x00066fb2) popup_call2_audio_second_window_t2

0xb34e,	// (0x00067005) popup_call2_audio_second_window_t3_ParamLimits

0xb34e,	// (0x00067005) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0006b1f9) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0006b1f9) popup_call2_audio_second_window_t

0x9c8f,	// (0x00065946) bg_popup_call2_in_pane_cp02

0x9c99,	// (0x00065950) call_type_pane_cp04

0x9ca1,	// (0x00065958) popup_call2_audio_wait_window_g1

0x9ca9,	// (0x00065960) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0006add2) popup_call2_audio_wait_window_g

0x9cb1,	// (0x00065968) popup_call2_audio_wait_window_t3

0xb441,	// (0x000670f8) bg_popup_call2_act_pane_ParamLimits

0xb441,	// (0x000670f8) bg_popup_call2_act_pane

0xb501,	// (0x000671b8) call_type_pane_cp03_ParamLimits

0xb501,	// (0x000671b8) call_type_pane_cp03

0xb565,	// (0x0006721c) popup_call2_audio_first_window_g1_ParamLimits

0xb565,	// (0x0006721c) popup_call2_audio_first_window_g1

0xb5d5,	// (0x0006728c) popup_call2_audio_first_window_g2_ParamLimits

0xb5d5,	// (0x0006728c) popup_call2_audio_first_window_g2

0xac81,	// (0x00066938) popup_call2_audio_first_window_g3_ParamLimits

0xac81,	// (0x00066938) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0006b202) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0006b202) popup_call2_audio_first_window_g

0xb6b3,	// (0x0006736a) popup_call2_audio_first_window_t1_ParamLimits

0xb6b3,	// (0x0006736a) popup_call2_audio_first_window_t1

0xb7b6,	// (0x0006746d) popup_call2_audio_first_window_t4_ParamLimits

0xb7b6,	// (0x0006746d) popup_call2_audio_first_window_t4

0xb899,	// (0x00067550) popup_call2_audio_first_window_t5_ParamLimits

0xb899,	// (0x00067550) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0006b20d) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0006b20d) popup_call2_audio_first_window_t

0x9ee2,	// (0x00065b99) bg_popup_call2_act_pane_g1

0xbf08,	// (0x00067bbf) popup_cale_lunar_info_window_t1

0xbf16,	// (0x00067bcd) popup_cale_lunar_info_window_t2

0xbf24,	// (0x00067bdb) popup_cale_lunar_info_window_t3

0x9c8f,	// (0x00065946) bg_popup_call2_bubble_pane

0xb99a,	// (0x00067651) bg_popup_call2_in_pane_cp01_ParamLimits

0xb99a,	// (0x00067651) bg_popup_call2_in_pane_cp01

0x996b,	// (0x00065622) call_type_pane_cp02

0xb9e2,	// (0x00067699) popup_call2_audio_out_window_g1_ParamLimits

0xb9e2,	// (0x00067699) popup_call2_audio_out_window_g1

0xba0e,	// (0x000676c5) popup_call2_audio_out_window_g2_ParamLimits

0xba0e,	// (0x000676c5) popup_call2_audio_out_window_g2

0xba36,	// (0x000676ed) popup_call2_audio_out_window_g3_ParamLimits

0xba36,	// (0x000676ed) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0006b216) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0006b216) popup_call2_audio_out_window_g

0xba71,	// (0x00067728) popup_call2_audio_out_window_t1_ParamLimits

0xba71,	// (0x00067728) popup_call2_audio_out_window_t1

0xbad0,	// (0x00067787) popup_call2_audio_out_window_t2_ParamLimits

0xbad0,	// (0x00067787) popup_call2_audio_out_window_t2

0xbb24,	// (0x000677db) popup_call2_audio_out_window_t3_ParamLimits

0xbb24,	// (0x000677db) popup_call2_audio_out_window_t3

0xbb3a,	// (0x000677f1) popup_call2_audio_out_window_t4_ParamLimits

0xbb3a,	// (0x000677f1) popup_call2_audio_out_window_t4

0xbb50,	// (0x00067807) popup_call2_audio_out_window_t5_ParamLimits

0xbb50,	// (0x00067807) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0006b21f) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0006b21f) popup_call2_audio_out_window_t

0xbbb4,	// (0x0006786b) bg_popup_call2_in_pane_ParamLimits

0xbbb4,	// (0x0006786b) bg_popup_call2_in_pane

0xbc10,	// (0x000678c7) popup_call2_audio_in_window_g1_ParamLimits

0xbc10,	// (0x000678c7) popup_call2_audio_in_window_g1

0xbc48,	// (0x000678ff) popup_call2_audio_in_window_g2_ParamLimits

0xbc48,	// (0x000678ff) popup_call2_audio_in_window_g2

0xbc80,	// (0x00067937) popup_call2_audio_in_window_g3_ParamLimits

0xbc80,	// (0x00067937) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0006b22c) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0006b22c) popup_call2_audio_in_window_g

0xbcd8,	// (0x0006798f) popup_call2_audio_in_window_t1_ParamLimits

0xbcd8,	// (0x0006798f) popup_call2_audio_in_window_t1

0xbd58,	// (0x00067a0f) popup_call2_audio_in_window_t2_ParamLimits

0xbd58,	// (0x00067a0f) popup_call2_audio_in_window_t2

0xbdd8,	// (0x00067a8f) popup_call2_audio_in_window_t3_ParamLimits

0xbdd8,	// (0x00067a8f) popup_call2_audio_in_window_t3

0xbdf2,	// (0x00067aa9) popup_call2_audio_in_window_t4_ParamLimits

0xbdf2,	// (0x00067aa9) popup_call2_audio_in_window_t4

0xbe04,	// (0x00067abb) popup_call2_audio_in_window_t5_ParamLimits

0xbe04,	// (0x00067abb) popup_call2_audio_in_window_t5

0xbe19,	// (0x00067ad0) popup_call2_audio_in_window_t6_ParamLimits

0xbe19,	// (0x00067ad0) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0006b235) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0006b235) popup_call2_audio_in_window_t

0x9ee2,	// (0x00065b99) bg_popup_call2_in_pane_g1

0xbf32,	// (0x00067be9) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0006b29d) popup_cale_lunar_info_window_t

0x9eea,	// (0x00065ba1) bg_popup_call2_rect_pane_ParamLimits

0x9eea,	// (0x00065ba1) bg_popup_call2_rect_pane

0x9c8f,	// (0x00065946) call2_cli_visual_graphic_pane

0x9c8f,	// (0x00065946) call2_cli_visual_text_pane

0xc121,	// (0x00067dd8) smil_status_volume_pane_g3

0x0002,

0xa05a,	// (0x00065d11) call2_cli_visual_graphic_pane_g1

0xa05a,	// (0x00065d11) call2_cli_visual_graphic_pane_g2

0xa05a,	// (0x00065d11) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0006b242) call2_cli_visual_graphic_pane_g

0xbe2e,	// (0x00067ae5) bg_popup_call2_rect_pane_g1

0xa102,	// (0x00065db9) bg_popup_call2_rect_pane_g2

0xbe36,	// (0x00067aed) bg_popup_call2_rect_pane_g3

0xbe3e,	// (0x00067af5) bg_popup_call2_rect_pane_g4

0xbe46,	// (0x00067afd) bg_popup_call2_rect_pane_g5

0xbe4e,	// (0x00067b05) bg_popup_call2_rect_pane_g6

0xbe56,	// (0x00067b0d) bg_popup_call2_rect_pane_g7

0xbe5e,	// (0x00067b15) bg_popup_call2_rect_pane_g8

0xbe66,	// (0x00067b1d) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0006b249) bg_popup_call2_rect_pane_g

0xbe6e,	// (0x00067b25) bg_popup_call2_bubble_pane_g1

0xbe76,	// (0x00067b2d) bg_popup_call2_bubble_pane_g2

0xbe7e,	// (0x00067b35) bg_popup_call2_bubble_pane_g3

0xbe86,	// (0x00067b3d) bg_popup_call2_bubble_pane_g4

0xbe8e,	// (0x00067b45) bg_popup_call2_bubble_pane_g5

0xbe96,	// (0x00067b4d) bg_popup_call2_bubble_pane_g6

0xbe9e,	// (0x00067b55) bg_popup_call2_bubble_pane_g7

0xbea6,	// (0x00067b5d) bg_popup_call2_bubble_pane_g8

0xbeae,	// (0x00067b65) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0006b25c) bg_popup_call2_bubble_pane_g

0x13f5,	// (0x0005d0ac) aid_cale_week_size_cell_pane

0x18cb,	// (0x0005d582) aid_cams_cif_uncrop_pane_ParamLimits

0x18cb,	// (0x0005d582) aid_cams_cif_uncrop_pane

0x1a84,	// (0x0005d73b) aid_cams_size_cell_ParamLimits

0x1a84,	// (0x0005d73b) aid_cams_size_cell

0x1a98,	// (0x0005d74f) grid_cams_pane_ParamLimits

0x1ab2,	// (0x0005d769) linegrid_cams_pane_ParamLimits

0x1cac,	// (0x0005d963) call_video_pane_t1

0x1cc6,	// (0x0005d97d) call_video_pane_t2

0x0001,

0xf292,	// (0x0006af49) call_video_pane_t

0x2111,	// (0x0005ddc8) aid_cale_month_size_cell_pane_ParamLimits

0x2111,	// (0x0005ddc8) aid_cale_month_size_cell_pane

0xf62f,	// (0x0006b2e6) smil_status_volume_pane_g

0xc12e,	// (0x00067de5) volume_smil_pane_ParamLimits

0x0b7f,	// (0x0005c836) aid_popup2_width_pane

0x134f,	// (0x0005d006) cell_qdial_pane_g4_ParamLimits

0x134f,	// (0x0005d006) cell_qdial_pane_g4

0x2d9c,	// (0x0005ea53) aid_blid_cardinal_pane_ParamLimits

0x2dac,	// (0x0005ea63) aid_blid_destination_pane_ParamLimits

0x2dac,	// (0x0005ea63) aid_blid_destination_pane

0x9eea,	// (0x00065ba1) bg_popup_call_poc_act_pane_ParamLimits

0x9eea,	// (0x00065ba1) bg_popup_call_poc_act_pane

0x9eea,	// (0x00065ba1) bg_popup_call_poc_inact_pane_ParamLimits

0x9eea,	// (0x00065ba1) bg_popup_call_poc_inact_pane

0xbeb6,	// (0x00067b6d) bg_popup_call_poc_act_pane_g1

0xbebe,	// (0x00067b75) bg_popup_call_poc_act_pane_g2

0xbec6,	// (0x00067b7d) bg_popup_call_poc_act_pane_g3

0xbe86,	// (0x00067b3d) bg_popup_call_poc_act_pane_g4

0xbe8e,	// (0x00067b45) bg_popup_call_poc_act_pane_g5

0xbece,	// (0x00067b85) bg_popup_call_poc_act_pane_g6

0xbe9e,	// (0x00067b55) bg_popup_call_poc_act_pane_g7

0xbed6,	// (0x00067b8d) bg_popup_call_poc_act_pane_g8

0x9c8f,	// (0x00065946) main_usb_pane

0xc033,	// (0x00067cea) popup_cale_lunar_info_window

0x1f91,	// (0x0005dc48) im_reading_pane_t1_ParamLimits

0xa373,	// (0x0006602a) list_im_pane_ParamLimits

0xa384,	// (0x0006603b) scroll_pane_cp07_ParamLimits

0x9c8f,	// (0x00065946) grid_highlight_pane_cp012

0x9eea,	// (0x00065ba1) mup_scale_pane_ParamLimits

0xadb1,	// (0x00066a68) main_usb_pane_g1_ParamLimits

0xadb1,	// (0x00066a68) main_usb_pane_g1

0x3b6a,	// (0x0005f821) main_usb_pane_g2_ParamLimits

0x3b6a,	// (0x0005f821) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0006b286) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0006b286) main_usb_pane_g

0x3b80,	// (0x0005f837) main_usb_pane_t1_ParamLimits

0x3b80,	// (0x0005f837) main_usb_pane_t1

0x3b92,	// (0x0005f849) main_usb_pane_t2_ParamLimits

0x3b92,	// (0x0005f849) main_usb_pane_t2

0x3ba4,	// (0x0005f85b) main_usb_pane_t3_ParamLimits

0x3ba4,	// (0x0005f85b) main_usb_pane_t3

0x3bb6,	// (0x0005f86d) main_usb_pane_t4_ParamLimits

0x3bb6,	// (0x0005f86d) main_usb_pane_t4

0x3bcb,	// (0x0005f882) main_usb_pane_t5_ParamLimits

0x3bcb,	// (0x0005f882) main_usb_pane_t5

0x3be0,	// (0x0005f897) main_usb_pane_t6_ParamLimits

0x3be0,	// (0x0005f897) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0006b28b) main_usb_pane_t_ParamLimits

0x2d3b,	// (0x0005e9f2) aid_text_placing

0x2d46,	// (0x0005e9fd) main_location2_pane_t1_ParamLimits

0x2d5c,	// (0x0005ea13) main_location2_pane_t2_ParamLimits

0x2d72,	// (0x0005ea29) main_location2_pane_t3_ParamLimits

0x2d88,	// (0x0005ea3f) main_location2_pane_t4_ParamLimits

0x2d88,	// (0x0005ea3f) main_location2_pane_t4

0xf3f3,	// (0x0006b0aa) main_location2_pane_t_ParamLimits

0x9f26,	// (0x00065bdd) find_pinb_pane_g2_ParamLimits

0x9f26,	// (0x00065bdd) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0006adf8) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0006adf8) find_pinb_pane_g

0x9f32,	// (0x00065be9) find_pinb_pane_t1_ParamLimits

0x9f44,	// (0x00065bfb) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0006adfd) find_pinb_pane_t_ParamLimits

0x9c8f,	// (0x00065946) main_call3_pane

0x2485,	// (0x0005e13c) cale_month_day_heading_pane_t1_ParamLimits

0x24e3,	// (0x0005e19a) cale_month_day_heading_pane_t2_ParamLimits

0x2548,	// (0x0005e1ff) cale_month_day_heading_pane_t3_ParamLimits

0x25ad,	// (0x0005e264) cale_month_day_heading_pane_t4_ParamLimits

0x2612,	// (0x0005e2c9) cale_month_day_heading_pane_t5_ParamLimits

0x2677,	// (0x0005e32e) cale_month_day_heading_pane_t6_ParamLimits

0x26dc,	// (0x0005e393) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0006af81) cale_month_day_heading_pane_t_ParamLimits

0xa5d0,	// (0x00066287) smil_status_volume_pane

0x3622,	// (0x0005f2d9) postcard_address_pane_ParamLimits

0x3622,	// (0x0005f2d9) postcard_address_pane

0x3638,	// (0x0005f2ef) postcard_message_pane_ParamLimits

0x3638,	// (0x0005f2ef) postcard_message_pane

0x3b43,	// (0x0005f7fa) call2_cli_visual_pane_t1_ParamLimits

0x3b43,	// (0x0005f7fa) call2_cli_visual_pane_t1

0x43af,	// (0x00060066) postcard_message_pane_t1_ParamLimits

0x43af,	// (0x00060066) postcard_message_pane_t1

0xc143,	// (0x00067dfa) postcard_address_pane_t1_ParamLimits

0xc143,	// (0x00067dfa) postcard_address_pane_t1

0x439b,	// (0x00060052) popup_call3_audio_in_window_ParamLimits

0x439b,	// (0x00060052) popup_call3_audio_in_window

0x4220,	// (0x0005fed7) bg_popup_call3_in_pane_ParamLimits

0x4220,	// (0x0005fed7) bg_popup_call3_in_pane

0x429c,	// (0x0005ff53) popup_call3_audio_in_window_g1_ParamLimits

0x429c,	// (0x0005ff53) popup_call3_audio_in_window_g1

0x42bc,	// (0x0005ff73) popup_call3_audio_in_window_g2_ParamLimits

0x42bc,	// (0x0005ff73) popup_call3_audio_in_window_g2

0x42dc,	// (0x0005ff93) popup_call3_audio_in_window_g3_ParamLimits

0x42dc,	// (0x0005ff93) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0006b2ed) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0006b2ed) popup_call3_audio_in_window_g

0x430d,	// (0x0005ffc4) popup_call3_audio_in_window_t1_ParamLimits

0x430d,	// (0x0005ffc4) popup_call3_audio_in_window_t1

0x434b,	// (0x00060002) popup_call3_audio_in_window_t2_ParamLimits

0x434b,	// (0x00060002) popup_call3_audio_in_window_t2

0x4389,	// (0x00060040) popup_call3_audio_in_window_t3_ParamLimits

0x4389,	// (0x00060040) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0006b2f6) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0006b2f6) popup_call3_audio_in_window_t

0xabb0,	// (0x00066867) bg_popup_call3_rect_pane

0xbe2e,	// (0x00067ae5) bg_popup_call3_rect_pane_g1

0xa102,	// (0x00065db9) bg_popup_call3_rect_pane_g2

0xbe36,	// (0x00067aed) bg_popup_call3_rect_pane_g3

0xbe3e,	// (0x00067af5) bg_popup_call3_rect_pane_g4

0xbe46,	// (0x00067afd) bg_popup_call3_rect_pane_g5

0xbe4e,	// (0x00067b05) bg_popup_call3_rect_pane_g6

0xbe56,	// (0x00067b0d) bg_popup_call3_rect_pane_g7

0x3184,	// (0x0005ee3b) mup_visualizer_osc_pane

0xac8f,	// (0x00066946) mup_visualizer_spec_pane

0x4250,	// (0x0005ff07) call3_video_qcif_pane_ParamLimits

0x4250,	// (0x0005ff07) call3_video_qcif_pane

0x4263,	// (0x0005ff1a) call3_video_qcif_uncrop_pane_ParamLimits

0x4263,	// (0x0005ff1a) call3_video_qcif_uncrop_pane

0x4273,	// (0x0005ff2a) call3_video_subqcif_pane_ParamLimits

0x4273,	// (0x0005ff2a) call3_video_subqcif_pane

0x4289,	// (0x0005ff40) call3_video_subqcif_uncrop_pane_ParamLimits

0x4289,	// (0x0005ff40) call3_video_subqcif_uncrop_pane

0x42fc,	// (0x0005ffb3) popup_call3_audio_in_window_g4_ParamLimits

0x42fc,	// (0x0005ffb3) popup_call3_audio_in_window_g4

0x420f,	// (0x0005fec6) mup_spec_half_pane

0x4218,	// (0x0005fecf) mup_spec_half_pane_cp

0xc0e1,	// (0x00067d98) mup_osc_middle_pane

0xc0ea,	// (0x00067da1) mup_visualizer_osc_pane_g1

0x41ef,	// (0x0005fea6) mup_spec_bar_pane_ParamLimits

0x41ef,	// (0x0005fea6) mup_spec_bar_pane

0xc0ce,	// (0x00067d85) mup_spec_bar_pane_g1

0xc0d8,	// (0x00067d8f) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0006b2e1) mup_spec_bar_pane_g

0x13f5,	// (0x0005d0ac) aid_cale_week_size_cell_pane_ParamLimits

0x1408,	// (0x0005d0bf) bg_cale_heading_pane_ParamLimits

0xa17e,	// (0x00065e35) bg_cale_pane_cp01_ParamLimits

0x1424,	// (0x0005d0db) cale_week_corner_pane_ParamLimits

0x143a,	// (0x0005d0f1) cale_week_day_heading_pane_ParamLimits

0x1456,	// (0x0005d10d) cale_week_scroll_pane_g1_ParamLimits

0x146f,	// (0x0005d126) cale_week_scroll_pane_g2_ParamLimits

0x1480,	// (0x0005d137) cale_week_scroll_pane_g3_ParamLimits

0x1491,	// (0x0005d148) cale_week_scroll_pane_g4_ParamLimits

0x14a2,	// (0x0005d159) cale_week_scroll_pane_g5_ParamLimits

0x14b3,	// (0x0005d16a) cale_week_scroll_pane_g6_ParamLimits

0x14c4,	// (0x0005d17b) cale_week_scroll_pane_g7_ParamLimits

0x14d5,	// (0x0005d18c) cale_week_scroll_pane_g8_ParamLimits

0x14e6,	// (0x0005d19d) cale_week_scroll_pane_g9_ParamLimits

0x14f7,	// (0x0005d1ae) cale_week_scroll_pane_g10_ParamLimits

0x1508,	// (0x0005d1bf) cale_week_scroll_pane_g11_ParamLimits

0x1519,	// (0x0005d1d0) cale_week_scroll_pane_g12_ParamLimits

0x152a,	// (0x0005d1e1) cale_week_scroll_pane_g13_ParamLimits

0x1543,	// (0x0005d1fa) cale_week_scroll_pane_g14_ParamLimits

0x155c,	// (0x0005d213) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0006ae89) cale_week_scroll_pane_g_ParamLimits

0x1575,	// (0x0005d22c) cale_week_time_pane_ParamLimits

0x1586,	// (0x0005d23d) grid_cale_week_pane_ParamLimits

0xa197,	// (0x00065e4e) listscroll_cale_week_pane_t1

0x15a1,	// (0x0005d258) scroll_pane_cp08_ParamLimits

0x2162,	// (0x0005de19) cale_month_corner_pane_ParamLimits

0xa59a,	// (0x00066251) cale_month_pane_t1

0x2446,	// (0x0005e0fd) cale_month_week_pane_ParamLimits

0x2b5f,	// (0x0005e816) popup_call_status_window_g1_ParamLimits

0x2b73,	// (0x0005e82a) popup_call_status_window_g2_ParamLimits

0x2b87,	// (0x0005e83e) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0006b031) popup_call_status_window_g_ParamLimits

0xa8e3,	// (0x0006659a) aid_call2_pane

0x344c,	// (0x0005f103) msg_header_pane_g1

0x3622,	// (0x0005f2d9) postcard_address2_pane_ParamLimits

0x3622,	// (0x0005f2d9) postcard_address2_pane

0x3638,	// (0x0005f2ef) postcard_message2_pane_ParamLimits

0x3638,	// (0x0005f2ef) postcard_message2_pane

0x41ac,	// (0x0005fe63) message2_row_pane_ParamLimits

0x41ac,	// (0x0005fe63) message2_row_pane

0xc089,	// (0x00067d40) address2_row_pane_ParamLimits

0xc089,	// (0x00067d40) address2_row_pane

0xc09c,	// (0x00067d53) postcard_message2_row_pane_g1

0xc0a4,	// (0x00067d5b) postcard_message2_row_pane_t1

0xc09c,	// (0x00067d53) address2_row_pane_g1

0xc0a4,	// (0x00067d5b) address2_row_pane_t1

0x17af,	// (0x0005d466) aid_size_cell_vorec

0x9c8f,	// (0x00065946) main_rss_pane

0x41cf,	// (0x0005fe86) rss_list_single_pane_ParamLimits

0x41cf,	// (0x0005fe86) rss_list_single_pane

0xc0b2,	// (0x00067d69) rss_list_single_pane_t1

0xc0c0,	// (0x00067d77) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0006b2dc) rss_list_single_pane_t

0x9c8f,	// (0x00065946) main_camera2_pane

0x9c8f,	// (0x00065946) main_video2_pane

0x441e,	// (0x000600d5) cams_zoom_pane_cp2_ParamLimits

0x441e,	// (0x000600d5) cams_zoom_pane_cp2

0x4435,	// (0x000600ec) image2_vga_pane_ParamLimits

0x4435,	// (0x000600ec) image2_vga_pane

0x447d,	// (0x00060134) main_camera2_pane_g1_ParamLimits

0x447d,	// (0x00060134) main_camera2_pane_g1

0x449d,	// (0x00060154) main_camera2_pane_g2_ParamLimits

0x449d,	// (0x00060154) main_camera2_pane_g2

0x44b4,	// (0x0006016b) main_camera2_pane_g3_ParamLimits

0x44b4,	// (0x0006016b) main_camera2_pane_g3

0x44cb,	// (0x00060182) main_camera2_pane_g4_ParamLimits

0x44cb,	// (0x00060182) main_camera2_pane_g4

0x44e2,	// (0x00060199) main_camera2_pane_g5_ParamLimits

0x44e2,	// (0x00060199) main_camera2_pane_g5

0x44f9,	// (0x000601b0) main_camera2_pane_g6_ParamLimits

0x44f9,	// (0x000601b0) main_camera2_pane_g6

0x4510,	// (0x000601c7) main_camera2_pane_g7_ParamLimits

0x4510,	// (0x000601c7) main_camera2_pane_g7

0x4527,	// (0x000601de) main_camera2_pane_g8_ParamLimits

0x4527,	// (0x000601de) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0006b2fd) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0006b2fd) main_camera2_pane_g

0x4555,	// (0x0006020c) main_camera2_pane_t1_ParamLimits

0x4555,	// (0x0006020c) main_camera2_pane_t1

0x458a,	// (0x00060241) main_camera2_pane_t2_ParamLimits

0x458a,	// (0x00060241) main_camera2_pane_t2

0x45a7,	// (0x0006025e) main_camera2_pane_t3_ParamLimits

0x45a7,	// (0x0006025e) main_camera2_pane_t3

0x4605,	// (0x000602bc) main_camera2_pane_t4_ParamLimits

0x4605,	// (0x000602bc) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0006b310) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0006b310) main_camera2_pane_t

0x468e,	// (0x00060345) cams_zoom_pane_cp4_ParamLimits

0x468e,	// (0x00060345) cams_zoom_pane_cp4

0x46a4,	// (0x0006035b) image2_cif_pane_ParamLimits

0x46a4,	// (0x0006035b) image2_cif_pane

0x46cf,	// (0x00060386) image2_subqcif_pane_ParamLimits

0x46cf,	// (0x00060386) image2_subqcif_pane

0x46ea,	// (0x000603a1) main_video2_pane_g1_ParamLimits

0x46ea,	// (0x000603a1) main_video2_pane_g1

0x4704,	// (0x000603bb) main_video2_pane_g2_ParamLimits

0x4704,	// (0x000603bb) main_video2_pane_g2

0x471a,	// (0x000603d1) main_video2_pane_g3_ParamLimits

0x471a,	// (0x000603d1) main_video2_pane_g3

0x4730,	// (0x000603e7) main_video2_pane_g4_ParamLimits

0x4730,	// (0x000603e7) main_video2_pane_g4

0x4746,	// (0x000603fd) main_video2_pane_g5_ParamLimits

0x4746,	// (0x000603fd) main_video2_pane_g5

0x475c,	// (0x00060413) main_video2_pane_g6_ParamLimits

0x475c,	// (0x00060413) main_video2_pane_g6

0x0005,

0xf668,	// (0x0006b31f) main_video2_pane_g_ParamLimits

0xf668,	// (0x0006b31f) main_video2_pane_g

0x4776,	// (0x0006042d) main_video2_pane_t1_ParamLimits

0x4776,	// (0x0006042d) main_video2_pane_t1

0x479a,	// (0x00060451) main_video2_pane_t2_ParamLimits

0x479a,	// (0x00060451) main_video2_pane_t2

0x47ea,	// (0x000604a1) main_video2_pane_t3_ParamLimits

0x47ea,	// (0x000604a1) main_video2_pane_t3

0x0002,

0xf675,	// (0x0006b32c) main_video2_pane_t_ParamLimits

0xf675,	// (0x0006b32c) main_video2_pane_t

0x3c9e,	// (0x0005f955) call_muted_g2

0x0001,

0xf617,	// (0x0006b2ce) call_muted_g

0x9c8f,	// (0x00065946) main_mup2_pane

0x4832,	// (0x000604e9) main_mup2_pane_g1_ParamLimits

0x4832,	// (0x000604e9) main_mup2_pane_g1

0x483e,	// (0x000604f5) main_mup2_pane_g2_ParamLimits

0x483e,	// (0x000604f5) main_mup2_pane_g2

0xc264,	// (0x00067f1b) main_mup_pane_g13_cp1

0xc26c,	// (0x00067f23) mup_volume_pane_cp1

0x485c,	// (0x00060513) main_mup2_pane_g4_ParamLimits

0x485c,	// (0x00060513) main_mup2_pane_g4

0x486e,	// (0x00060525) main_mup2_pane_g5_ParamLimits

0x486e,	// (0x00060525) main_mup2_pane_g5

0x4880,	// (0x00060537) main_mup2_pane_g6_ParamLimits

0x4880,	// (0x00060537) main_mup2_pane_g6

0x4892,	// (0x00060549) main_mup2_pane_g7_ParamLimits

0x4892,	// (0x00060549) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0006b333) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0006b333) main_mup2_pane_g

0x48aa,	// (0x00060561) main_mup2_pane_t1_ParamLimits

0x48aa,	// (0x00060561) main_mup2_pane_t1

0x48c0,	// (0x00060577) main_mup2_pane_t2_ParamLimits

0x48c0,	// (0x00060577) main_mup2_pane_t2

0x48d6,	// (0x0006058d) main_mup2_pane_t3_ParamLimits

0x48d6,	// (0x0006058d) main_mup2_pane_t3

0x48ec,	// (0x000605a3) main_mup2_pane_t4_ParamLimits

0x48ec,	// (0x000605a3) main_mup2_pane_t4

0x4904,	// (0x000605bb) main_mup2_pane_t5_ParamLimits

0x4904,	// (0x000605bb) main_mup2_pane_t5

0x491c,	// (0x000605d3) main_mup2_pane_t6_ParamLimits

0x491c,	// (0x000605d3) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0006b342) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0006b342) main_mup2_pane_t

0x494c,	// (0x00060603) mup2_visualizer_pane_ParamLimits

0x494c,	// (0x00060603) mup2_visualizer_pane

0x497a,	// (0x00060631) mup_progress_pane_cp_ParamLimits

0x497a,	// (0x00060631) mup_progress_pane_cp

0xc246,	// (0x00067efd) mup_volume_pane_cp_ParamLimits

0xc246,	// (0x00067efd) mup_volume_pane_cp

0x4990,	// (0x00060647) mup2_visualizer_pane_g1_ParamLimits

0x4990,	// (0x00060647) mup2_visualizer_pane_g1

0xc185,	// (0x00067e3c) mup2_visualizer_pane_g2_ParamLimits

0xc185,	// (0x00067e3c) mup2_visualizer_pane_g2

0x49a5,	// (0x0006065c) mup2_visualizer_pane_g3_ParamLimits

0x49a5,	// (0x0006065c) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0006b34f) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0006b34f) mup2_visualizer_pane_g

0xaefa,	// (0x00066bb1) aid_size_cell_fmradio

0x3e4e,	// (0x0005fb05) aid_height_parent_landcape

0xa402,	// (0x000660b9) wml_content_pane_cp

0xa40a,	// (0x000660c1) wml_tabs_pane

0xa413,	// (0x000660ca) popup_wml_miniature_window

0xa41b,	// (0x000660d2) scroll_pane_cp021

0xa42f,	// (0x000660e6) wml_content_pane_comp8

0x9c8f,	// (0x00065946) bg_popup_sub_pane_cp05

0xc1a3,	// (0x00067e5a) popup_wml_miniature_window_g1

0xc1ab,	// (0x00067e62) wml_miniature_view_pane

0x49b1,	// (0x00060668) aid_size_wml_view

0x49b9,	// (0x00060670) wml_miniature_view_pane_g1

0x49c2,	// (0x00060679) wml_miniature_view_pane_g2

0x49cb,	// (0x00060682) wml_miniature_view_pane_g3

0x49d3,	// (0x0006068a) wml_miniature_view_pane_g4

0x49db,	// (0x00060692) wml_miniature_view_pane_g5

0x49e3,	// (0x0006069a) wml_miniature_view_pane_g6

0x49eb,	// (0x000606a2) wml_miniature_view_pane_g7

0x49f3,	// (0x000606aa) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0006b356) wml_miniature_view_pane_g

0xc1b3,	// (0x00067e6a) background_graphic_ParamLimits

0xc1b3,	// (0x00067e6a) background_graphic

0xc1bf,	// (0x00067e76) wml_tabs_2_pane

0xc1c8,	// (0x00067e7f) wml_tabs_3_pane_ParamLimits

0xc1c8,	// (0x00067e7f) wml_tabs_3_pane

0xc1da,	// (0x00067e91) wml_tabs_4_pane_ParamLimits

0xc1da,	// (0x00067e91) wml_tabs_4_pane

0xc1f0,	// (0x00067ea7) wml_tabs_5_pane_ParamLimits

0xc1f0,	// (0x00067ea7) wml_tabs_5_pane

0xc20a,	// (0x00067ec1) wml_tabs_pane_g2_ParamLimits

0xc20a,	// (0x00067ec1) wml_tabs_pane_g2

0xc21e,	// (0x00067ed5) wml_tabs_pane_g3_ParamLimits

0xc21e,	// (0x00067ed5) wml_tabs_pane_g3

0x49fb,	// (0x000606b2) wml_tabs_2_active_pane_ParamLimits

0x49fb,	// (0x000606b2) wml_tabs_2_active_pane

0x4a0f,	// (0x000606c6) wml_tabs_2_passive_pane_ParamLimits

0x4a0f,	// (0x000606c6) wml_tabs_2_passive_pane

0x4a23,	// (0x000606da) wml_tabs_3_active_pane_cp_ParamLimits

0x4a23,	// (0x000606da) wml_tabs_3_active_pane_cp

0x4a38,	// (0x000606ef) wml_tabs_3_passive_pane_ParamLimits

0x4a38,	// (0x000606ef) wml_tabs_3_passive_pane

0x4a4b,	// (0x00060702) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a4b,	// (0x00060702) wml_tabs_3_passive_pane_cp

0x4a62,	// (0x00060719) tabs_4_active_pane

0x4a6a,	// (0x00060721) tabs_4_passive_pane

0x4a74,	// (0x0006072b) tabs_4_passive_pane_cp

0x4a7c,	// (0x00060733) tabs_4_passive_pane_cp2

0x3b62,	// (0x0005f819) aid_height_text

0x3156,	// (0x0005ee0d) mup_volume_cont_pane_ParamLimits

0x3156,	// (0x0005ee0d) mup_volume_cont_pane

0x0feb,	// (0x0005cca2) aid_size_cell_pinb

0x0ff5,	// (0x0005ccac) aid_size_list_pinb

0x4966,	// (0x0006061d) mup2_volume_cont_pane_ParamLimits

0x4966,	// (0x0006061d) mup2_volume_cont_pane

0xc232,	// (0x00067ee9) mup2_volume_cont_pane_g1_ParamLimits

0xc232,	// (0x00067ee9) mup2_volume_cont_pane_g1

0x0b8b,	// (0x0005c842) aid_size_cell_touch_ParamLimits

0x0b8b,	// (0x0005c842) aid_size_cell_touch

0x0dfe,	// (0x0005cab5) touch_pane_ParamLimits

0x0dfe,	// (0x0005cab5) touch_pane

0x0b6d,	// (0x0005c824) main_rss2_pane

0xc274,	// (0x00067f2b) listscroll_rss2_pane

0xc27d,	// (0x00067f34) rss2_navigation_pane

0xc285,	// (0x00067f3c) list_rss2_pane

0xaa76,	// (0x0006672d) scroll_pane_cp22

0xc28d,	// (0x00067f44) rss2_navigation_pane_g1

0xc296,	// (0x00067f4d) rss2_navigation_pane_g2

0xc29e,	// (0x00067f55) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0006b367) rss2_navigation_pane_g

0xc2a6,	// (0x00067f5d) rss2_navigation_pane_t1

0x4a86,	// (0x0006073d) rss2_list_single_pane_ParamLimits

0x4a86,	// (0x0006073d) rss2_list_single_pane

0xc2b4,	// (0x00067f6b) rss2_list_single_pane_t2

0xc2c2,	// (0x00067f79) rss2_list_single_pane_t3_ParamLimits

0xc2c2,	// (0x00067f79) rss2_list_single_pane_t3

0xc2df,	// (0x00067f96) rss2_list_single_pane_t4

0x28d2,	// (0x0005e589) smil_status_pane_g1

0x0df0,	// (0x0005caa7) main_image2_pane_ParamLimits

0x0df0,	// (0x0005caa7) main_image2_pane

0x453e,	// (0x000601f5) main_camera2_pane_g9_ParamLimits

0x453e,	// (0x000601f5) main_camera2_pane_g9

0x465a,	// (0x00060311) main_camera2_pane_t5_ParamLimits

0x465a,	// (0x00060311) main_camera2_pane_t5

0xc15a,	// (0x00067e11) main_camera2_pane_t6_ParamLimits

0xc15a,	// (0x00067e11) main_camera2_pane_t6

0x4aa0,	// (0x00060757) main_image2_pane_g1_ParamLimits

0x4aa0,	// (0x00060757) main_image2_pane_g1

0x3879,	// (0x0005f530) smil2_video_pane_ParamLimits

0x3879,	// (0x0005f530) smil2_video_pane

0x0bcb,	// (0x0005c882) aid_zoom_text_primary_cp

0x0dac,	// (0x0005ca63) popup_preview_fixed_window

0xa36b,	// (0x00066022) im_reading_pane_g1

0x4410,	// (0x000600c7) cams2_bc_adjust_pane_cp_ParamLimits

0x4410,	// (0x000600c7) cams2_bc_adjust_pane_cp

0x4680,	// (0x00060337) cams2_bc_adjust_pane_ParamLimits

0x4680,	// (0x00060337) cams2_bc_adjust_pane

0xc2ed,	// (0x00067fa4) cams2_bc_adjust_pane_g1

0xc2f5,	// (0x00067fac) cams2_slider_pane

0xc2fe,	// (0x00067fb5) cams2_slider_pane_g1

0xc307,	// (0x00067fbe) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0006b36e) cams2_slider_pane_g

0x10e5,	// (0x0005cd9c) calc_display_pane_ParamLimits

0x110b,	// (0x0005cdc2) calc_paper_pane_ParamLimits

0x112e,	// (0x0005cde5) grid_calc_pane_ParamLimits

0xa945,	// (0x000665fc) popup_clock_digital_window_t1_ParamLimits

0xae97,	// (0x00066b4e) main_image_pane_t1

0x10c7,	// (0x0005cd7e) aid_size_cell_calc_ParamLimits

0x10c7,	// (0x0005cd7e) aid_size_cell_calc

0x3e94,	// (0x0005fb4b) popup_blid_sat_info2_window_ParamLimits

0x3e94,	// (0x0005fb4b) popup_blid_sat_info2_window

0xc329,	// (0x00067fe0) aid_size_cell_blid

0xc331,	// (0x00067fe8) bg_popup_window_pane_cp07

0xc354,	// (0x0006800b) grid_popup_blid_pane

0xc35e,	// (0x00068015) heading_pane_cp05_ParamLimits

0xc35e,	// (0x00068015) heading_pane_cp05

0xc428,	// (0x000680df) cell_popup_blid_pane_ParamLimits

0xc428,	// (0x000680df) cell_popup_blid_pane

0xc452,	// (0x00068109) cell_popup_blid_pane_g1

0xc45a,	// (0x00068111) cell_popup_blid_pane_t1

0x4936,	// (0x000605ed) mup2_indicator_pane_ParamLimits

0x4936,	// (0x000605ed) mup2_indicator_pane

0xabb0,	// (0x00066867) mup2_visualizer_osc_pane

0xc191,	// (0x00067e48) mup2_visualizer_spec_pane_ParamLimits

0xc191,	// (0x00067e48) mup2_visualizer_spec_pane

0x4ab6,	// (0x0006076d) mup2_spec_half_pane

0x4abf,	// (0x00060776) mup2_spec_half_pane_cp

0x4ac7,	// (0x0006077e) mup2_spec_bar_pane_ParamLimits

0x4ac7,	// (0x0006077e) mup2_spec_bar_pane

0xc0ce,	// (0x00067d85) mup2_spec_bar_pane_g1

0xc0d8,	// (0x00067d8f) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0006b2e1) mup2_spec_bar_pane_g

0x4ae7,	// (0x0006079e) mup2_osc_middle_pane

0xc0ea,	// (0x00067da1) mup2_visualizer_osc_pane_g1

0x0e70,	// (0x0005cb27) popup_number_entry_window_t1_ParamLimits

0x0e83,	// (0x0005cb3a) popup_number_entry_window_t2_ParamLimits

0x0e95,	// (0x0005cb4c) popup_number_entry_window_t3_ParamLimits

0x0ea7,	// (0x0005cb5e) popup_number_entry_window_t5_ParamLimits

0x0ea7,	// (0x0005cb5e) popup_number_entry_window_t5

0xf0ec,	// (0x0006ada3) popup_number_entry_window_t_ParamLimits

0x0edc,	// (0x0005cb93) text_title_cp2_ParamLimits

0xad71,	// (0x00066a28) aid_hotspot_pointer_text2_pane

0xad97,	// (0x00066a4e) main_viewer_pane_g9_ParamLimits

0xad97,	// (0x00066a4e) main_viewer_pane_g9

0xa59a,	// (0x00066251) cale_month_pane_t1_ParamLimits

0xa605,	// (0x000662bc) bg_cale_pane_ParamLimits

0xa61d,	// (0x000662d4) list_cale_pane_ParamLimits

0xa197,	// (0x00065e4e) listscroll_cale_day_pane_t1

0xa62e,	// (0x000662e5) scroll_pane_cp09_ParamLimits

0x318c,	// (0x0005ee43) main_mup_eq_pane_t1_ParamLimits

0x318c,	// (0x0005ee43) main_mup_eq_pane_t1

0x31a8,	// (0x0005ee5f) main_mup_eq_pane_t2_ParamLimits

0x31a8,	// (0x0005ee5f) main_mup_eq_pane_t2

0x31c4,	// (0x0005ee7b) main_mup_eq_pane_t3_ParamLimits

0x31c4,	// (0x0005ee7b) main_mup_eq_pane_t3

0x31e2,	// (0x0005ee99) main_mup_eq_pane_t4_ParamLimits

0x31e2,	// (0x0005ee99) main_mup_eq_pane_t4

0x3200,	// (0x0005eeb7) main_mup_eq_pane_t5_ParamLimits

0x3200,	// (0x0005eeb7) main_mup_eq_pane_t5

0x321e,	// (0x0005eed5) main_mup_eq_pane_t6_ParamLimits

0x321e,	// (0x0005eed5) main_mup_eq_pane_t6

0x3234,	// (0x0005eeeb) main_mup_eq_pane_t7_ParamLimits

0x3234,	// (0x0005eeeb) main_mup_eq_pane_t7

0x324a,	// (0x0005ef01) main_mup_eq_pane_t8_ParamLimits

0x324a,	// (0x0005ef01) main_mup_eq_pane_t8

0x3260,	// (0x0005ef17) main_mup_eq_pane_t9_ParamLimits

0x3260,	// (0x0005ef17) main_mup_eq_pane_t9

0x327c,	// (0x0005ef33) main_mup_eq_pane_t10_ParamLimits

0x327c,	// (0x0005ef33) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0006b130) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0006b130) main_mup_eq_pane_t

0x3351,	// (0x0005f008) mup_equalizer_pane_cp5_ParamLimits

0x3369,	// (0x0005f020) mup_equalizer_pane_cp6_ParamLimits

0x3381,	// (0x0005f038) mup_equalizer_pane_cp7_ParamLimits

0x0b6d,	// (0x0005c824) main_gallery_pane

0xc0f3,	// (0x00067daa) smil2_volume_pane

0xc0fb,	// (0x00067db2) smil_status_volume_pane_g1_ParamLimits

0xc10e,	// (0x00067dc5) smil_status_volume_pane_g2_ParamLimits

0xc121,	// (0x00067dd8) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0006b2e6) smil_status_volume_pane_g_ParamLimits

0xc331,	// (0x00067fe8) bg_popup_window_pane_cp07_ParamLimits

0xc33f,	// (0x00067ff6) blid_firmament_pane

0x4af0,	// (0x000607a7) aid_size_cell_gallery_ParamLimits

0x4af0,	// (0x000607a7) aid_size_cell_gallery

0x4b06,	// (0x000607bd) grid_gallery_pane_ParamLimits

0x4b06,	// (0x000607bd) grid_gallery_pane

0x4b21,	// (0x000607d8) cell_gallery_pane_ParamLimits

0x4b21,	// (0x000607d8) cell_gallery_pane

0xc468,	// (0x0006811f) bg_cell_gallery_focus_pane_ParamLimits

0xc468,	// (0x0006811f) bg_cell_gallery_focus_pane

0xc47a,	// (0x00068131) cell_gallery_pane_g1_ParamLimits

0xc47a,	// (0x00068131) cell_gallery_pane_g1

0x4b72,	// (0x00060829) cell_gallery_pane_g2_ParamLimits

0x4b72,	// (0x00060829) cell_gallery_pane_g2

0x4b7f,	// (0x00060836) cell_gallery_pane_g3_ParamLimits

0x4b7f,	// (0x00060836) cell_gallery_pane_g3

0xc486,	// (0x0006813d) cell_gallery_pane_g4_ParamLimits

0xc486,	// (0x0006813d) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0006b394) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0006b394) cell_gallery_pane_g

0xc492,	// (0x00068149) bg_cell_gallery_focus_pane_g1

0xc49a,	// (0x00068151) bg_cell_gallery_focus_pane_g2

0xc4a2,	// (0x00068159) bg_cell_gallery_focus_pane_g3

0xc4aa,	// (0x00068161) bg_cell_gallery_focus_pane_g4

0xc4b2,	// (0x00068169) bg_cell_gallery_focus_pane_g5

0xc4ba,	// (0x00068171) bg_cell_gallery_focus_pane_g6

0xc4c2,	// (0x00068179) bg_cell_gallery_focus_pane_g7

0xc4ca,	// (0x00068181) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0006b39d) bg_cell_gallery_focus_pane_g

0xc4d2,	// (0x00068189) aid_firma_cardinal

0xc4e6,	// (0x0006819d) blid_firmament_pane_t1

0xc4fd,	// (0x000681b4) blid_firmament_pane_t2

0xc514,	// (0x000681cb) blid_firmament_pane_t3

0xc52b,	// (0x000681e2) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0006b3ae) blid_firmament_pane_t

0xc542,	// (0x000681f9) blid_sat_info_pane

0xc552,	// (0x00068209) blid_sat_info_pane_g1

0xc552,	// (0x00068209) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0006b3b7) blid_sat_info_pane_g

0xc55c,	// (0x00068213) blid_sat_info_pane_t1

0xc56a,	// (0x00068221) smil2_volume_content_pane

0xc573,	// (0x0006822a) smil2_volume_pane_g1

0xc57b,	// (0x00068232) smil2_volume_content_pane_g1

0xc584,	// (0x0006823b) smil2_volume_content_pane_g2

0xc58d,	// (0x00068244) smil2_volume_content_pane_g3

0xc596,	// (0x0006824d) smil2_volume_content_pane_g4

0xc59f,	// (0x00068256) smil2_volume_content_pane_g5

0xc5a8,	// (0x0006825f) smil2_volume_content_pane_g6

0xc5b1,	// (0x00068268) smil2_volume_content_pane_g7

0xc5ba,	// (0x00068271) smil2_volume_content_pane_g8

0xc5c3,	// (0x0006827a) smil2_volume_content_pane_g9

0xc5cc,	// (0x00068283) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0006b3bc) smil2_volume_content_pane_g

0x1601,	// (0x0005d2b8) cale_week_day_heading_pane_t1_ParamLimits

0x1615,	// (0x0005d2cc) cale_week_day_heading_pane_t2_ParamLimits

0x1629,	// (0x0005d2e0) cale_week_day_heading_pane_t3_ParamLimits

0x163d,	// (0x0005d2f4) cale_week_day_heading_pane_t4_ParamLimits

0x1651,	// (0x0005d308) cale_week_day_heading_pane_t5_ParamLimits

0x1665,	// (0x0005d31c) cale_week_day_heading_pane_t6_ParamLimits

0x1679,	// (0x0005d330) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0006aea8) cale_week_day_heading_pane_t_ParamLimits

0xa1a9,	// (0x00065e60) bg_cale_side_pane_ParamLimits

0x168d,	// (0x0005d344) cale_week_time_pane_t1_ParamLimits

0x16a5,	// (0x0005d35c) cale_week_time_pane_t2_ParamLimits

0x16bd,	// (0x0005d374) cale_week_time_pane_t3_ParamLimits

0x16d5,	// (0x0005d38c) cale_week_time_pane_t4_ParamLimits

0x16ed,	// (0x0005d3a4) cale_week_time_pane_t5_ParamLimits

0x1705,	// (0x0005d3bc) cale_week_time_pane_t6_ParamLimits

0x171d,	// (0x0005d3d4) cale_week_time_pane_t7_ParamLimits

0x1739,	// (0x0005d3f0) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0006aeb7) cale_week_time_pane_t_ParamLimits

0x1759,	// (0x0005d410) cell_cale_week_pane_g2_ParamLimits

0xa1a9,	// (0x00065e60) bg_cale_side_pane_cp01_ParamLimits

0x2741,	// (0x0005e3f8) cale_month_week_pane_t1_ParamLimits

0x2758,	// (0x0005e40f) cale_month_week_pane_t2_ParamLimits

0x276f,	// (0x0005e426) cale_month_week_pane_t3_ParamLimits

0x2786,	// (0x0005e43d) cale_month_week_pane_t4_ParamLimits

0x279d,	// (0x0005e454) cale_month_week_pane_t5_ParamLimits

0x27b4,	// (0x0005e46b) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0006af90) cale_month_week_pane_t_ParamLimits

0xa5ac,	// (0x00066263) cell_cale_month_pane_g1_ParamLimits

0x0b6d,	// (0x0005c824) main_cale_event_viewer_pane

0x0b6d,	// (0x0005c824) listscroll_cale_event_viewer_pane

0xc5d5,	// (0x0006828c) list_cale_ev_pane

0xc5dd,	// (0x00068294) scroll_pane_cp023

0x4b8c,	// (0x00060843) field_cale_ev_pane_ParamLimits

0x4b8c,	// (0x00060843) field_cale_ev_pane

0xc5e9,	// (0x000682a0) field_cale_ev_content_pane_ParamLimits

0xc5e9,	// (0x000682a0) field_cale_ev_content_pane

0xc5f5,	// (0x000682ac) field_cale_ev_pane_g1_ParamLimits

0xc5f5,	// (0x000682ac) field_cale_ev_pane_g1

0xc601,	// (0x000682b8) field_cale_ev_pane_g2_ParamLimits

0xc601,	// (0x000682b8) field_cale_ev_pane_g2

0xc619,	// (0x000682d0) field_cale_ev_pane_g3_ParamLimits

0xc619,	// (0x000682d0) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0006b3d1) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0006b3d1) field_cale_ev_pane_g

0xc631,	// (0x000682e8) field_cale_ev_pane_t1_ParamLimits

0xc631,	// (0x000682e8) field_cale_ev_pane_t1

0x4bb0,	// (0x00060867) field_cale_ev_content_pane_t1_ParamLimits

0x4bb0,	// (0x00060867) field_cale_ev_content_pane_t1

0xad3b,	// (0x000669f2) bg_button_pane_cp01

0x9fe1,	// (0x00065c98) listscroll_cale_week_pane_ParamLimits

0x13eb,	// (0x0005d0a2) popup_toolbar_window_cp01

0xa197,	// (0x00065e4e) listscroll_cale_week_pane_t1_ParamLimits

0x9fe1,	// (0x00065c98) listscroll_cale_day_pane_ParamLimits

0x2932,	// (0x0005e5e9) popup_toolbar_window_cp02

0xa197,	// (0x00065e4e) listscroll_cale_day_pane_t1_ParamLimits

0x9fe1,	// (0x00065c98) main_cale_month_pane_ParamLimits

0x4114,	// (0x0005fdcb) popup_toolbar_window_cp03_ParamLimits

0x4114,	// (0x0005fdcb) popup_toolbar_window_cp03

0x3737,	// (0x0005f3ee) main_image_pane_g2_ParamLimits

0x3737,	// (0x0005f3ee) main_image_pane_g2

0x3748,	// (0x0005f3ff) main_image_pane_g3_ParamLimits

0x3748,	// (0x0005f3ff) main_image_pane_g3

0x0002,

0xf50b,	// (0x0006b1c2) main_image_pane_g_ParamLimits

0xf50b,	// (0x0006b1c2) main_image_pane_g

0xae97,	// (0x00066b4e) main_image_pane_t1_ParamLimits

0x3759,	// (0x0005f410) main_image_pane_t2_ParamLimits

0x3759,	// (0x0005f410) main_image_pane_t2

0x376b,	// (0x0005f422) main_image_pane_t3_ParamLimits

0x376b,	// (0x0005f422) main_image_pane_t3

0x3793,	// (0x0005f44a) main_image_pane_t4_ParamLimits

0x3793,	// (0x0005f44a) main_image_pane_t4

0x0003,

0xf512,	// (0x0006b1c9) main_image_pane_t_ParamLimits

0xf512,	// (0x0006b1c9) main_image_pane_t

0x37b3,	// (0x0005f46a) popup_image_details_window_cp01

0x37bd,	// (0x0005f474) popup_toobar_trans_pane_cp01_ParamLimits

0x37bd,	// (0x0005f474) popup_toobar_trans_pane_cp01

0x3f87,	// (0x0005fc3e) popup_image_details_window_ParamLimits

0x3f87,	// (0x0005fc3e) popup_image_details_window

0xc03f,	// (0x00067cf6) popup_image_focus_window

0x43ca,	// (0x00060081) camera2_autofocus_pane_ParamLimits

0x43ca,	// (0x00060081) camera2_autofocus_pane

0x0b6d,	// (0x0005c824) bg_popup_sub_pane_cp06

0xc648,	// (0x000682ff) popup_image_focus_window_g1

0xc650,	// (0x00068307) popup_image_focus_window_g2

0xc658,	// (0x0006830f) popup_image_focus_window_g3

0xc660,	// (0x00068317) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0006b3d8) popup_image_focus_window_g

0xc668,	// (0x0006831f) popup_image_focus_window_t1

0xc676,	// (0x0006832d) popup_image_focus_window_t2

0xc686,	// (0x0006833d) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0006b3e1) popup_image_focus_window_t

0xc694,	// (0x0006834b) camera2_autofocus_pane_g1

0x0df0,	// (0x0005caa7) bg_tb_trans_pane_cp01

0xc6a2,	// (0x00068359) popup_image_details_window_g1

0xc6b5,	// (0x0006836c) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0006b3f3) popup_image_details_window_g

0xc6de,	// (0x00068395) popup_image_details_window_t1

0xc6f0,	// (0x000683a7) popup_image_details_window_t2

0xc709,	// (0x000683c0) popup_image_details_window_t3

0xc71d,	// (0x000683d4) popup_image_details_window_t4

0xc738,	// (0x000683ef) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0006b3fa) popup_image_details_window_t

0x9fa9,	// (0x00065c60) bg_calc_paper_pane_ParamLimits

0x9fbd,	// (0x00065c74) grid_highlight_pane_cp013

0x9fc7,	// (0x00065c7e) list_calc_pane_ParamLimits

0x9fd9,	// (0x00065c90) scroll_pane_cp024

0x9fe1,	// (0x00065c98) bg_calc_display_pane_ParamLimits

0x1225,	// (0x0005cedc) calc_display_pane_t1_ParamLimits

0x1237,	// (0x0005ceee) calc_display_pane_t2_ParamLimits

0x9fed,	// (0x00065ca4) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0006ae2a) calc_display_pane_t_ParamLimits

0x12fa,	// (0x0005cfb1) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0006ae47) cell_calc_pane_g

0x1303,	// (0x0005cfba) cell_calc_pane_t1

0xa064,	// (0x00065d1b) grid_highlight_pane_cp02_ParamLimits

0xa07a,	// (0x00065d31) toolbar_button_pane_cp01_ParamLimits

0xa07a,	// (0x00065d31) toolbar_button_pane_cp01

0xaedc,	// (0x00066b93) temp_image_control_pane_ParamLimits

0xaedc,	// (0x00066b93) temp_image_control_pane

0x0df0,	// (0x0005caa7) main_mp3_pane

0xc752,	// (0x00068409) temp_image_control_pane_g1_ParamLimits

0xc752,	// (0x00068409) temp_image_control_pane_g1

0xc760,	// (0x00068417) temp_image_control_pane_g2_ParamLimits

0xc760,	// (0x00068417) temp_image_control_pane_g2

0xc772,	// (0x00068429) temp_image_control_pane_g3_ParamLimits

0xc772,	// (0x00068429) temp_image_control_pane_g3

0x4c01,	// (0x000608b8) temp_image_control_pane_g4_ParamLimits

0x4c01,	// (0x000608b8) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0006b405) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0006b405) temp_image_control_pane_g

0xc752,	// (0x00068409) main_mp3_pane_g1

0x4c14,	// (0x000608cb) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0006b40e) main_mp3_pane_g

0xc7b5,	// (0x0006846c) main_mp3_pane_t1

0xa278,	// (0x00065f2f) main_camera_pane_g8_ParamLimits

0xa278,	// (0x00065f2f) main_camera_pane_g8

0x1a2a,	// (0x0005d6e1) main_video_pane_g7_ParamLimits

0x1a2a,	// (0x0005d6e1) main_video_pane_g7

0xc173,	// (0x00067e2a) main_camera2_pane_t7_ParamLimits

0xc173,	// (0x00067e2a) main_camera2_pane_t7

0xa3c2,	// (0x00066079) scroll_pane_cp025_ParamLimits

0xa3c2,	// (0x00066079) scroll_pane_cp025

0xa3d6,	// (0x0006608d) scroll_pane_cp026_ParamLimits

0xa3d6,	// (0x0006608d) scroll_pane_cp026

0xa3e5,	// (0x0006609c) wml_content_pane_ParamLimits

0x0b6d,	// (0x0005c824) main_touch_calib_pane

0x4cdc,	// (0x00060993) main_touch_calib_pane_g1

0x4ce8,	// (0x0006099f) main_touch_calib_pane_g2

0x4cf4,	// (0x000609ab) main_touch_calib_pane_g3

0x4d00,	// (0x000609b7) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0006b42c) main_touch_calib_pane_g

0x4d0c,	// (0x000609c3) main_touch_calib_pane_t1

0x4d26,	// (0x000609dd) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0006b435) main_touch_calib_pane_t

0xaaf1,	// (0x000667a8) mup_progress_pane_cp02

0xab10,	// (0x000667c7) navi_pane_g1

0xab72,	// (0x00066829) navi_pane_mp_t3

0x0df0,	// (0x0005caa7) main_mp3_pane_ParamLimits

0x4156,	// (0x0005fe0d) navi_pane_ParamLimits

0xc752,	// (0x00068409) main_mp3_pane_g1_ParamLimits

0x4c14,	// (0x000608cb) main_mp3_pane_g2_ParamLimits

0x4c20,	// (0x000608d7) main_mp3_pane_g3_ParamLimits

0x4c20,	// (0x000608d7) main_mp3_pane_g3

0x4c2e,	// (0x000608e5) main_mp3_pane_g4_ParamLimits

0x4c2e,	// (0x000608e5) main_mp3_pane_g4

0xc782,	// (0x00068439) main_mp3_pane_g5_ParamLimits

0xc782,	// (0x00068439) main_mp3_pane_g5

0xc790,	// (0x00068447) main_mp3_pane_g6_ParamLimits

0xc790,	// (0x00068447) main_mp3_pane_g6

0xc79d,	// (0x00068454) main_mp3_pane_g7_ParamLimits

0xc79d,	// (0x00068454) main_mp3_pane_g7

0xc7a9,	// (0x00068460) main_mp3_pane_g8_ParamLimits

0xc7a9,	// (0x00068460) main_mp3_pane_g8

0xf757,	// (0x0006b40e) main_mp3_pane_g_ParamLimits

0x4c3a,	// (0x000608f1) main_mp3_pane_t2

0x4c48,	// (0x000608ff) main_mp3_pane_t3

0xc7c3,	// (0x0006847a) main_mp3_pane_t4

0xc7d1,	// (0x00068488) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0006b41f) main_mp3_pane_t

0xc7df,	// (0x00068496) mup_progress_pane_cp01

0x0bcb,	// (0x0005c882) aid_zoom_text_secondary2

0xc5d5,	// (0x0006828c) list_cale_ev2_pane

0xc5dd,	// (0x00068294) scroll_pane_cp023_ParamLimits

0x4d7e,	// (0x00060a35) field_cale_ev2_pane_ParamLimits

0x4d7e,	// (0x00060a35) field_cale_ev2_pane

0x4da2,	// (0x00060a59) field_cale_ev2_pane_g1_ParamLimits

0x4da2,	// (0x00060a59) field_cale_ev2_pane_g1

0x4dae,	// (0x00060a65) field_cale_ev2_pane_g2_ParamLimits

0x4dae,	// (0x00060a65) field_cale_ev2_pane_g2

0x4dc6,	// (0x00060a7d) field_cale_ev2_pane_g3_ParamLimits

0x4dc6,	// (0x00060a7d) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0006b440) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0006b440) field_cale_ev2_pane_g

0x4dea,	// (0x00060aa1) field_cale_ev2_pane_t1_ParamLimits

0x4dea,	// (0x00060aa1) field_cale_ev2_pane_t1

0x4e01,	// (0x00060ab8) field_cale_ev2_pane_t2_ParamLimits

0x4e01,	// (0x00060ab8) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0006b449) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0006b449) field_cale_ev2_pane_t

0x35d2,	// (0x0005f289) main_postcard_pane_g5_ParamLimits

0x35d2,	// (0x0005f289) main_postcard_pane_g5

0x35e8,	// (0x0005f29f) main_postcard_pane_g6_ParamLimits

0x35e8,	// (0x0005f29f) main_postcard_pane_g6

0x17d6,	// (0x0005d48d) camera2_autofocus_pane_cp_ParamLimits

0x17d6,	// (0x0005d48d) camera2_autofocus_pane_cp

0x0df0,	// (0x0005caa7) main_mup3_pane

0x4e36,	// (0x00060aed) main_mup3_pane_g1_ParamLimits

0x4e36,	// (0x00060aed) main_mup3_pane_g1

0x4e58,	// (0x00060b0f) main_mup3_pane_g2_ParamLimits

0x4e58,	// (0x00060b0f) main_mup3_pane_g2

0x4edb,	// (0x00060b92) main_mup3_pane_g3_ParamLimits

0x4edb,	// (0x00060b92) main_mup3_pane_g3

0x4f1f,	// (0x00060bd6) main_mup3_pane_g4_ParamLimits

0x4f1f,	// (0x00060bd6) main_mup3_pane_g4

0x4f63,	// (0x00060c1a) main_mup3_pane_g5_ParamLimits

0x4f63,	// (0x00060c1a) main_mup3_pane_g5

0x4fa7,	// (0x00060c5e) main_mup3_pane_g6_ParamLimits

0x4fa7,	// (0x00060c5e) main_mup3_pane_g6

0xc7e7,	// (0x0006849e) main_mup3_pane_g7_ParamLimits

0xc7e7,	// (0x0006849e) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0006b459) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0006b459) main_mup3_pane_g

0x5023,	// (0x00060cda) main_mup3_pane_t1_ParamLimits

0x5023,	// (0x00060cda) main_mup3_pane_t1

0x509d,	// (0x00060d54) main_mup3_pane_t2_ParamLimits

0x509d,	// (0x00060d54) main_mup3_pane_t2

0x5177,	// (0x00060e2e) main_mup3_pane_t4_ParamLimits

0x5177,	// (0x00060e2e) main_mup3_pane_t4

0x51d5,	// (0x00060e8c) main_mup3_pane_t5_ParamLimits

0x51d5,	// (0x00060e8c) main_mup3_pane_t5

0x528d,	// (0x00060f44) main_mup3_pane_t6_ParamLimits

0x528d,	// (0x00060f44) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0006b46a) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0006b46a) main_mup3_pane_t

0x5343,	// (0x00060ffa) mup3_progress_pane_ParamLimits

0x5343,	// (0x00060ffa) mup3_progress_pane

0x53c7,	// (0x0006107e) popup_mup3_control_window_ParamLimits

0x53c7,	// (0x0006107e) popup_mup3_control_window

0xc7f5,	// (0x000684ac) popup_mup3_text_window

0x53fd,	// (0x000610b4) mup3_progress_pane_t1

0x5414,	// (0x000610cb) mup3_progress_pane_t2

0xc7fd,	// (0x000684b4) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0006b477) mup3_progress_pane_t

0xc814,	// (0x000684cb) mup_progress_pane_cp03

0x0b6d,	// (0x0005c824) bg_tb_trans_pane_cp04

0x542b,	// (0x000610e2) mup3_volume_pane

0x5433,	// (0x000610ea) popup_mup3_control_window_g1

0x543c,	// (0x000610f3) mup3_volume_pane_g1

0x5445,	// (0x000610fc) mup3_volume_pane_g2

0x544e,	// (0x00061105) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0006b47e) mup3_volume_pane_g

0x0b6d,	// (0x0005c824) bg_tb_trans_pane_cp03

0xc824,	// (0x000684db) popup_mup3_text_window_g1

0xc82c,	// (0x000684e3) popup_mup3_text_window_t1

0xa03b,	// (0x00065cf2) list_calc_item_pane_g1_ParamLimits

0xc25b,	// (0x00067f12) mup_volume_pane_cp_g1

0x4d40,	// (0x000609f7) main_touch_calib_pane_t3

0x4d54,	// (0x00060a0b) main_touch_calib_pane_t4

0x4d68,	// (0x00060a1f) main_touch_calib_pane_t5

0x0b77,	// (0x0005c82e) aid_cell_size_toolbar2

0x0b7f,	// (0x0005c836) aid_popup3_width_pane

0x0bbb,	// (0x0005c872) aid_zoom_text_msg_primary

0xa258,	// (0x00065f0f) vorec_t7

0x9fff,	// (0x00065cb6) bg_calc_paper_pane_g1_ParamLimits

0xa00b,	// (0x00065cc2) bg_calc_paper_pane_g2_ParamLimits

0xa017,	// (0x00065cce) bg_calc_paper_pane_g3_ParamLimits

0xa023,	// (0x00065cda) bg_calc_paper_pane_g4_ParamLimits

0xa02f,	// (0x00065ce6) bg_calc_paper_pane_g5_ParamLimits

0x1284,	// (0x0005cf3b) bg_calc_paper_pane_g6_ParamLimits

0x1297,	// (0x0005cf4e) bg_calc_paper_pane_g7_ParamLimits

0x12aa,	// (0x0005cf61) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0006ae31) bg_calc_paper_pane_g_ParamLimits

0x12bb,	// (0x0005cf72) calc_bg_paper_pane_g9_ParamLimits

0x1938,	// (0x0005d5ef) image_qvga_pane_ParamLimits

0x1938,	// (0x0005d5ef) image_qvga_pane

0x9eea,	// (0x00065ba1) bg_popup_sub_pane_cp04_ParamLimits

0xae13,	// (0x00066aca) popup_mup_playback_window_g1_ParamLimits

0xae1f,	// (0x00066ad6) popup_mup_playback_window_t1_ParamLimits

0xae34,	// (0x00066aeb) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0006b1bd) popup_mup_playback_window_t_ParamLimits

0x484e,	// (0x00060505) main_mup2_pane_g3_ParamLimits

0x484e,	// (0x00060505) main_mup2_pane_g3

0x1d45,	// (0x0005d9fc) popup_toolbar_window_cp04

0xb22f,	// (0x00066ee6) popup_call2_audio_second_window_g3_ParamLimits

0xb22f,	// (0x00066ee6) popup_call2_audio_second_window_g3

0xb639,	// (0x000672f0) popup_call2_audio_first_window_g4_ParamLimits

0xb639,	// (0x000672f0) popup_call2_audio_first_window_g4

0xbcb8,	// (0x0006796f) popup_call2_audio_in_window_g4_ParamLimits

0xbcb8,	// (0x0006796f) popup_call2_audio_in_window_g4

0x3719,	// (0x0005f3d0) aid_area_sk_bg_cut_ParamLimits

0x3719,	// (0x0005f3d0) aid_area_sk_bg_cut

0xae49,	// (0x00066b00) aid_area_sk_bg_cut_2_ParamLimits

0xae49,	// (0x00066b00) aid_area_sk_bg_cut_2

0x4b62,	// (0x00060819) aid_placing_details_win

0x4b6a,	// (0x00060821) aid_placing_details_win_2

0xc694,	// (0x0006834b) camera2_autofocus_pane_g1_ParamLimits

0x0d91,	// (0x0005ca48) popup_fixed_preview_cale_window_ParamLimits

0x0d91,	// (0x0005ca48) popup_fixed_preview_cale_window

0xabca,	// (0x00066881) navi_slider_pane_g3

0xabd3,	// (0x0006688a) navi_slider_pane_g4

0xabdc,	// (0x00066893) navi_slider_pane_g5

0xabca,	// (0x00066881) navi_slider_pane_g6

0xabe5,	// (0x0006689c) navi_slider_pane_g7

0xad08,	// (0x000669bf) mup_scale_pane_g3

0xad11,	// (0x000669c8) mup_scale_pane_g4

0xad1a,	// (0x000669d1) mup_scale_pane_g5

0x3399,	// (0x0005f050) mup_scale_pane_g6

0x33a2,	// (0x0005f059) mup_scale_pane_g7

0xabca,	// (0x00066881) cams2_slider_pane_g3

0xc310,	// (0x00067fc7) cams2_slider_pane_g4

0xc318,	// (0x00067fcf) cams2_slider_pane_g5

0xabca,	// (0x00066881) cams2_slider_pane_g6

0xc320,	// (0x00067fd7) cams2_slider_pane_g7

0xc552,	// (0x00068209) camera2_autofocus_pane_cp_g1

0xc83a,	// (0x000684f1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc83a,	// (0x000684f1) bg_popup_preview_window_pane_cp02

0xc846,	// (0x000684fd) list_fp_cale_pane_ParamLimits

0xc846,	// (0x000684fd) list_fp_cale_pane

0xc852,	// (0x00068509) popup_fixed_preview_cale_window_t1_ParamLimits

0xc852,	// (0x00068509) popup_fixed_preview_cale_window_t1

0x5457,	// (0x0006110e) popup_fixed_preview_cale_window_t2_ParamLimits

0x5457,	// (0x0006110e) popup_fixed_preview_cale_window_t2

0x546c,	// (0x00061123) popup_fixed_preview_cale_window_t3_ParamLimits

0x546c,	// (0x00061123) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0006b485) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0006b485) popup_fixed_preview_cale_window_t

0xc870,	// (0x00068527) list_single_fp_cale_pane_ParamLimits

0xc870,	// (0x00068527) list_single_fp_cale_pane

0xc888,	// (0x0006853f) list_single_fp_cale_pane_g1_ParamLimits

0xc888,	// (0x0006853f) list_single_fp_cale_pane_g1

0xc894,	// (0x0006854b) list_single_fp_cale_pane_g2_ParamLimits

0xc894,	// (0x0006854b) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0006b48c) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0006b48c) list_single_fp_cale_pane_g

0xc8ad,	// (0x00068564) list_single_fp_cale_pane_t1_ParamLimits

0xc8ad,	// (0x00068564) list_single_fp_cale_pane_t1

0xc8bf,	// (0x00068576) list_single_fp_cale_pane_t2_ParamLimits

0xc8bf,	// (0x00068576) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0006b493) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0006b493) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0b6d,	// (0x0005c824) main_dialer_pane

0x5483,	// (0x0006113a) aid_cell_size_keypad

0x548d,	// (0x00061144) dialer_ne_pane

0x5497,	// (0x0006114e) grid_dialer_command_1_pane

0x549f,	// (0x00061156) grid_dialer_command_2_pane

0x54a7,	// (0x0006115e) grid_dialer_keypad_pane

0x54bb,	// (0x00061172) bg_popup_call_pane_cp06_ParamLimits

0x54bb,	// (0x00061172) bg_popup_call_pane_cp06

0x54c7,	// (0x0006117e) dialer_ne_clear_pane_ParamLimits

0x54c7,	// (0x0006117e) dialer_ne_clear_pane

0xc8f2,	// (0x000685a9) dialer_ne_pane_g1

0xc8fa,	// (0x000685b1) dialer_ne_pane_t1_ParamLimits

0xc8fa,	// (0x000685b1) dialer_ne_pane_t1

0x54d3,	// (0x0006118a) dialer_ne_pane_t2_ParamLimits

0x54d3,	// (0x0006118a) dialer_ne_pane_t2

0x54fd,	// (0x000611b4) dialer_ne_pane_t3_ParamLimits

0x54fd,	// (0x000611b4) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0006b498) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0006b498) dialer_ne_pane_t

0x552d,	// (0x000611e4) dialer_ne_pane_t3_copy1_ParamLimits

0x552d,	// (0x000611e4) dialer_ne_pane_t3_copy1

0x555c,	// (0x00061213) cell_dialer_keypad_pane_ParamLimits

0x555c,	// (0x00061213) cell_dialer_keypad_pane

0x5573,	// (0x0006122a) cell_dialer_command_1_pane_ParamLimits

0x5573,	// (0x0006122a) cell_dialer_command_1_pane

0x5589,	// (0x00061240) cell_dialer_command_2_pane_ParamLimits

0x5589,	// (0x00061240) cell_dialer_command_2_pane

0xc90c,	// (0x000685c3) bg_button_pane_cp02_ParamLimits

0xc90c,	// (0x000685c3) bg_button_pane_cp02

0x5598,	// (0x0006124f) cell_dialer_keypad_pane_g1_ParamLimits

0x5598,	// (0x0006124f) cell_dialer_keypad_pane_g1

0xc90c,	// (0x000685c3) bg_button_pane_cp03_ParamLimits

0xc90c,	// (0x000685c3) bg_button_pane_cp03

0x55ad,	// (0x00061264) cell_dialer_command_1_pane_g1_ParamLimits

0x55ad,	// (0x00061264) cell_dialer_command_1_pane_g1

0xc918,	// (0x000685cf) bg_button_pane_cp04

0x55c1,	// (0x00061278) cell_dialer_command_2_pane_g1

0xabb0,	// (0x00066867) bg_button_pane_cp06

0xc920,	// (0x000685d7) dialer_ne_clear_pane_g1

0x2e7b,	// (0x0005eb32) navi_pane_g2

0x2ea9,	// (0x0005eb60) navi_pane_g3

0x0002,

0xf409,	// (0x0006b0c0) navi_pane_g

0x2ed4,	// (0x0005eb8b) navi_pane_mv_g2

0x2efb,	// (0x0005ebb2) navi_pane_mv_g5

0x2f03,	// (0x0005ebba) navi_pane_mv_t1

0x9fe1,	// (0x00065c98) main_clock2_pane

0x55fe,	// (0x000612b5) main_clock2_list_pane_ParamLimits

0x55fe,	// (0x000612b5) main_clock2_list_pane

0x5636,	// (0x000612ed) main_clock2_pane_t1_ParamLimits

0x5636,	// (0x000612ed) main_clock2_pane_t1

0x5672,	// (0x00061329) main_clock2_pane_t2_ParamLimits

0x5672,	// (0x00061329) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0006b49f) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0006b49f) main_clock2_pane_t

0x56fe,	// (0x000613b5) popup_clock_analogue_window_cp03_ParamLimits

0x56fe,	// (0x000613b5) popup_clock_analogue_window_cp03

0x5725,	// (0x000613dc) popup_clock_digital_window_cp02_ParamLimits

0x5725,	// (0x000613dc) popup_clock_digital_window_cp02

0x579e,	// (0x00061455) main_clock2_list_single_pane_ParamLimits

0x579e,	// (0x00061455) main_clock2_list_single_pane

0xabb0,	// (0x00066867) list_highlight_pane_cp05

0xc928,	// (0x000685df) main_clock2_list_single_pane_t1

0x1d45,	// (0x0005d9fc) popup_toolbar_window_cp04_ParamLimits

0x4bd1,	// (0x00060888) camera2_autofocus_pane_g2_ParamLimits

0x4bd1,	// (0x00060888) camera2_autofocus_pane_g2

0x4bdd,	// (0x00060894) camera2_autofocus_pane_g3_ParamLimits

0x4bdd,	// (0x00060894) camera2_autofocus_pane_g3

0x4be9,	// (0x000608a0) camera2_autofocus_pane_g4_ParamLimits

0x4be9,	// (0x000608a0) camera2_autofocus_pane_g4

0x4bf5,	// (0x000608ac) camera2_autofocus_pane_g5_ParamLimits

0x4bf5,	// (0x000608ac) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0006b3e8) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0006b3e8) camera2_autofocus_pane_g

0x4e16,	// (0x00060acd) camera2_autofocus_pane_cp_g2

0x4e1e,	// (0x00060ad5) camera2_autofocus_pane_cp_g3

0x4e26,	// (0x00060add) camera2_autofocus_pane_cp_g4

0x4e2e,	// (0x00060ae5) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0006b44e) camera2_autofocus_pane_cp_g

0x54b3,	// (0x0006116a) popup_dialer_spcha_window

0x0b6d,	// (0x0005c824) bg_popup_sub_pane_cp07

0xc936,	// (0x000685ed) list_spcha_pane

0xc93e,	// (0x000685f5) list_single_spcha_pane_ParamLimits

0xc93e,	// (0x000685f5) list_single_spcha_pane

0x0b6d,	// (0x0005c824) list_highlight_pane_cp06

0xc94f,	// (0x00068606) list_single_spcha_pane_t1

0xba62,	// (0x00067719) popup_call2_audio_out_window_g4_ParamLimits

0xba62,	// (0x00067719) popup_call2_audio_out_window_g4

0x0b6d,	// (0x0005c824) main_imed2_pane

0xc049,	// (0x00067d00) popup_imed_adjust2_window

0x3f9f,	// (0x0005fc56) popup_imed_trans_window_ParamLimits

0x3f9f,	// (0x0005fc56) popup_imed_trans_window

0xc38a,	// (0x00068041) popup_blid_sat_info2_window_t1

0xc398,	// (0x0006804f) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0006b37d) popup_blid_sat_info2_window_t

0x5854,	// (0x0006150b) aid_size_cell_colour_35

0x5874,	// (0x0006152b) aid_size_cell_colour_112

0x5894,	// (0x0006154b) aid_size_cell_effect

0xc01d,	// (0x00067cd4) bg_tb_trans_pane_cp02

0xa6a1,	// (0x00066358) heading_imed_pane

0x58b4,	// (0x0006156b) listscroll_imed_pane

0xc95d,	// (0x00068614) heading_imed_pane_g1

0xc965,	// (0x0006861c) heading_imed_pane_t1

0xc973,	// (0x0006862a) grid_imed_colour_35_pane_ParamLimits

0xc973,	// (0x0006862a) grid_imed_colour_35_pane

0x58c0,	// (0x00061577) grid_imed_effect_pane

0xc98f,	// (0x00068646) list_imed_aspect_pane

0x58d7,	// (0x0006158e) scroll_pane_cp027_ParamLimits

0x58d7,	// (0x0006158e) scroll_pane_cp027

0x58e8,	// (0x0006159f) cell_imed_effect_pane_ParamLimits

0x58e8,	// (0x0006159f) cell_imed_effect_pane

0xc997,	// (0x0006864e) cell_imed_colour_pane_ParamLimits

0xc997,	// (0x0006864e) cell_imed_colour_pane

0xc9e1,	// (0x00068698) cell_imed_colour_pane_g1_ParamLimits

0xc9e1,	// (0x00068698) cell_imed_colour_pane_g1

0xc9f2,	// (0x000686a9) hgihlgiht_grid_pane_cp016_ParamLimits

0xc9f2,	// (0x000686a9) hgihlgiht_grid_pane_cp016

0x590d,	// (0x000615c4) cell_imed_effect_pane_g1

0x5915,	// (0x000615cc) grid_highlight_pane_cp017

0xca03,	// (0x000686ba) list_imed_single_pane_ParamLimits

0xca03,	// (0x000686ba) list_imed_single_pane

0x0b6d,	// (0x0005c824) list_highlight_pane_cp07

0xca17,	// (0x000686ce) list_imed_aspect_pane_comp1_t1

0xc01d,	// (0x00067cd4) bg_tb_trans_pane_cp05

0xca39,	// (0x000686f0) popup_imed_adjust2_window_g1

0xca60,	// (0x00068717) popup_imed_adjust2_window_t1

0xca78,	// (0x0006872f) slider_imed_adjust_pane

0xca8c,	// (0x00068743) slider_imed_adjust_pane_g1

0xca9c,	// (0x00068753) slider_imed_adjust_pane_g2

0xcaac,	// (0x00068763) slider_imed_adjust_pane_g3

0xcabd,	// (0x00068774) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0006b4bc) slider_imed_adjust_pane_g

0x591e,	// (0x000615d5) aid_size_cell_clipart2

0x592a,	// (0x000615e1) grid_imed_clipart_pane

0xcace,	// (0x00068785) scroll_pane_cp031

0x5934,	// (0x000615eb) cell_imed_clipart_pane_ParamLimits

0x5934,	// (0x000615eb) cell_imed_clipart_pane

0x5951,	// (0x00061608) cell_imed_clipart_pane_g1

0x0b6d,	// (0x0005c824) grid_highlight_pane_cp014

0x5613,	// (0x000612ca) main_clock2_pane_g1_ParamLimits

0x5613,	// (0x000612ca) main_clock2_pane_g1

0x5745,	// (0x000613fc) aid_call2_pane_cp10

0x5757,	// (0x0006140e) aid_call_pane_cp10

0xaae5,	// (0x0006679c) popup_clock_analogue_window_cp10_g1

0xaae5,	// (0x0006679c) popup_clock_analogue_window_cp10_g2

0x5769,	// (0x00061420) popup_clock_analogue_window_cp10_g3

0x5769,	// (0x00061420) popup_clock_analogue_window_cp10_g4

0xaae5,	// (0x0006679c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0006b4aa) popup_clock_analogue_window_cp10_g

0x577f,	// (0x00061436) popup_clock_analogue_window_cp10_t1

0x57b0,	// (0x00061467) clock_digital_number_pane_cp10_ParamLimits

0x57b0,	// (0x00061467) clock_digital_number_pane_cp10

0x57ca,	// (0x00061481) clock_digital_number_pane_cp11_ParamLimits

0x57ca,	// (0x00061481) clock_digital_number_pane_cp11

0x57e4,	// (0x0006149b) clock_digital_number_pane_cp12_ParamLimits

0x57e4,	// (0x0006149b) clock_digital_number_pane_cp12

0x57fe,	// (0x000614b5) clock_digital_number_pane_cp13_ParamLimits

0x57fe,	// (0x000614b5) clock_digital_number_pane_cp13

0x5818,	// (0x000614cf) clock_digital_separator_pane_cp10_ParamLimits

0x5818,	// (0x000614cf) clock_digital_separator_pane_cp10

0x5832,	// (0x000614e9) popup_clock_digital_window_cp02_t1_ParamLimits

0x5832,	// (0x000614e9) popup_clock_digital_window_cp02_t1

0x9ee2,	// (0x00065b99) clock_digital_number_pane_cp10_g1

0x9ee2,	// (0x00065b99) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0006b4c5) clock_digital_number_pane_cp10_g

0x9ee2,	// (0x00065b99) clock_digital_separator_pane_cp10_g1

0x9ee2,	// (0x00065b99) clock_digital_separator_pane_g2_cp10

0xab80,	// (0x00066837) navi_pane_vded_g4

0xab89,	// (0x00066840) navi_pane_vded_g5

0xab92,	// (0x00066849) navi_pane_vded_t1

0x0b6d,	// (0x0005c824) main_vded_pane

0x595a,	// (0x00061611) main_vded_pane_g1

0x5966,	// (0x0006161d) main_vded_pane_g2

0x5972,	// (0x00061629) main_vded_pane_g3

0x0002,

0xf813,	// (0x0006b4ca) main_vded_pane_g

0x597e,	// (0x00061635) main_vded_pane_t1

0x598c,	// (0x00061643) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0006b4d1) main_vded_pane_t

0x599a,	// (0x00061651) vded_slider_pane

0x59a4,	// (0x0006165b) vded_video_pane

0xcad6,	// (0x0006878d) vded_video_pane_g1

0x59b0,	// (0x00061667) vded_video_pane_g2

0xc552,	// (0x00068209) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0006b4d6) vded_video_pane_g

0xcae0,	// (0x00068797) vded_slider_pane_g1

0xc25b,	// (0x00067f12) vded_slider_pane_g2

0xcae9,	// (0x000687a0) vded_slider_pane_g3

0xcaf2,	// (0x000687a9) vded_slider_pane_g4

0xcafb,	// (0x000687b2) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0006b4dd) vded_slider_pane_g

0x53b1,	// (0x00061068) mup3_rocker_pane_ParamLimits

0x53b1,	// (0x00061068) mup3_rocker_pane

0x59b9,	// (0x00061670) mup3_control_keys_pane_g1

0x59c1,	// (0x00061678) mup3_control_keys_pane_g2

0x59c9,	// (0x00061680) mup3_control_keys_pane_g3

0x59d1,	// (0x00061688) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0006b4e8) mup3_control_keys_pane_g

0x0dd2,	// (0x0005ca89) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dd2,	// (0x0005ca89) popup_toolbar2_fixed_window_cp01

0x53e7,	// (0x0006109e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x53e7,	// (0x0006109e) popup_toolbar2_fixed_window_cp02

0xb3a1,	// (0x00067058) popup_call2_audio_second_window_t4_ParamLimits

0xb3a1,	// (0x00067058) popup_call2_audio_second_window_t4

0xb8cf,	// (0x00067586) popup_call2_audio_first_window_t6_ParamLimits

0xb8cf,	// (0x00067586) popup_call2_audio_first_window_t6

0xbb65,	// (0x0006781c) popup_call2_audio_out_window_t6_ParamLimits

0xbb65,	// (0x0006781c) popup_call2_audio_out_window_t6

0x0b6d,	// (0x0005c824) main_vitu_pane

0x59e1,	// (0x00061698) aid_size_cell_itu_ParamLimits

0x59e1,	// (0x00061698) aid_size_cell_itu

0x0df0,	// (0x0005caa7) bg_popup_window_pane_cp08_ParamLimits

0x0df0,	// (0x0005caa7) bg_popup_window_pane_cp08

0x59f7,	// (0x000616ae) field_vitu_entry_pane_ParamLimits

0x59f7,	// (0x000616ae) field_vitu_entry_pane

0x5a0e,	// (0x000616c5) grid_vitu_function_pane_ParamLimits

0x5a0e,	// (0x000616c5) grid_vitu_function_pane

0x5a29,	// (0x000616e0) grid_vitu_itu_pane_ParamLimits

0x5a29,	// (0x000616e0) grid_vitu_itu_pane

0x5a47,	// (0x000616fe) cell_vitu_itu_pane_ParamLimits

0x5a47,	// (0x000616fe) cell_vitu_itu_pane

0x5a6d,	// (0x00061724) cell_vitu_function_pane_ParamLimits

0x5a6d,	// (0x00061724) cell_vitu_function_pane

0x0df0,	// (0x0005caa7) bg_popup_sub_pane_cp08_ParamLimits

0x0df0,	// (0x0005caa7) bg_popup_sub_pane_cp08

0x5a88,	// (0x0006173f) field_vitu_entry_pane_t1_ParamLimits

0x5a88,	// (0x0006173f) field_vitu_entry_pane_t1

0xcb1c,	// (0x000687d3) field_vitu_entry_pane_t2_ParamLimits

0xcb1c,	// (0x000687d3) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0006b4f6) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0006b4f6) field_vitu_entry_pane_t

0xcb39,	// (0x000687f0) bg_button_pane_cp05_ParamLimits

0xcb39,	// (0x000687f0) bg_button_pane_cp05

0x5aa8,	// (0x0006175f) cell_vitu_itu_pane_g1

0x5ac0,	// (0x00061777) cell_vitu_itu_pane_t1_ParamLimits

0x5ac0,	// (0x00061777) cell_vitu_itu_pane_t1

0x5ad2,	// (0x00061789) cell_vitu_itu_pane_t2_ParamLimits

0x5ad2,	// (0x00061789) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0006b4fb) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0006b4fb) cell_vitu_itu_pane_t

0xcb47,	// (0x000687fe) bg_button_pane_cp07

0x5b07,	// (0x000617be) cell_vitu_function_pane_g1

0x9f71,	// (0x00065c28) main_calc_pane_g1

0x0baf,	// (0x0005c866) aid_visual_content_pane

0x0b6d,	// (0x0005c824) main_vradio_pane

0x5b10,	// (0x000617c7) main_vradio_pane_g1_ParamLimits

0x5b10,	// (0x000617c7) main_vradio_pane_g1

0xcb51,	// (0x00068808) main_vradio_pane_g2_ParamLimits

0xcb51,	// (0x00068808) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0006b502) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0006b502) main_vradio_pane_g

0x5b27,	// (0x000617de) main_vradio_pane_t1_ParamLimits

0x5b27,	// (0x000617de) main_vradio_pane_t1

0x5b3c,	// (0x000617f3) main_vradio_pane_t2_ParamLimits

0x5b3c,	// (0x000617f3) main_vradio_pane_t2

0xcb5e,	// (0x00068815) main_vradio_pane_t3_ParamLimits

0xcb5e,	// (0x00068815) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0006b507) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0006b507) main_vradio_pane_t

0x5b51,	// (0x00061808) vradio_rocker_control_pane_ParamLimits

0x5b51,	// (0x00061808) vradio_rocker_control_pane

0x5b63,	// (0x0006181a) vradio_station_info_pane_ParamLimits

0x5b63,	// (0x0006181a) vradio_station_info_pane

0xcb72,	// (0x00068829) vradio_frequency_info_pane_ParamLimits

0xcb72,	// (0x00068829) vradio_frequency_info_pane

0xc552,	// (0x00068209) vradio_station_info_pane_g1

0xcb81,	// (0x00068838) vradio_station_info_pane_t1_ParamLimits

0xcb81,	// (0x00068838) vradio_station_info_pane_t1

0xcba3,	// (0x0006885a) vradio_station_info_pane_t2_ParamLimits

0xcba3,	// (0x0006885a) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0006b50e) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0006b50e) vradio_station_info_pane_t

0xcbb5,	// (0x0006886c) vradio_tuning_pane

0xcbbd,	// (0x00068874) vradio_rocker_control_pane_g1

0xcbc5,	// (0x0006887c) vradio_rocker_control_pane_g2

0xcbcd,	// (0x00068884) vradio_rocker_control_pane_g3

0xcbd5,	// (0x0006888c) vradio_rocker_control_pane_g4

0xcbdd,	// (0x00068894) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0006b513) vradio_rocker_control_pane_g

0x5b73,	// (0x0006182a) vradio_frequency_info_pane_g1

0xcbe5,	// (0x0006889c) vradio_frequency_info_pane_t1_ParamLimits

0xcbe5,	// (0x0006889c) vradio_frequency_info_pane_t1

0x5b7d,	// (0x00061834) vradio_tuning_pane_g1

0x5b88,	// (0x0006183f) vradio_tuning_pane_t1

0x0c0c,	// (0x0005c8c3) area_side_right_pane_ParamLimits

0x0c0c,	// (0x0005c8c3) area_side_right_pane

0xbfe4,	// (0x00067c9b) status_small_pane_g1

0xbfec,	// (0x00067ca3) status_small_pane_g2

0xbff5,	// (0x00067cac) status_small_pane_g3

0xbffe,	// (0x00067cb5) status_small_pane_g4

0x0003,

0xf61c,	// (0x0006b2d3) status_small_pane_g

0xc007,	// (0x00067cbe) status_small_pane_t1

0x0b6d,	// (0x0005c824) main_video3_pane

0xcbf9,	// (0x000688b0) cams_zoom_vslider_pane

0xcc01,	// (0x000688b8) image3_wide_pane_ParamLimits

0xcc01,	// (0x000688b8) image3_wide_pane

0xcc1b,	// (0x000688d2) image3_wide_small_pane

0xcc27,	// (0x000688de) main_video3_pane_g1_ParamLimits

0xcc27,	// (0x000688de) main_video3_pane_g1

0xcc43,	// (0x000688fa) main_video3_pane_g2_ParamLimits

0xcc43,	// (0x000688fa) main_video3_pane_g2

0x0001,

0xf867,	// (0x0006b51e) main_video3_pane_g_ParamLimits

0xf867,	// (0x0006b51e) main_video3_pane_g

0xcc5f,	// (0x00068916) main_video3_pane_t1_ParamLimits

0xcc5f,	// (0x00068916) main_video3_pane_t1

0xcc8a,	// (0x00068941) main_video3_pane_t2_ParamLimits

0xcc8a,	// (0x00068941) main_video3_pane_t2

0xccb7,	// (0x0006896e) main_video3_pane_t3_ParamLimits

0xccb7,	// (0x0006896e) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0006b523) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0006b523) main_video3_pane_t

0xcce4,	// (0x0006899b) cams_zoom_vslider_pane_g1

0xcced,	// (0x000689a4) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0006b52a) cams_zoom_vslider_pane_g

0xccf5,	// (0x000689ac) small_slider_vertical_pane

0xc552,	// (0x00068209) small_slider_vertical_pane_g1

0xc552,	// (0x00068209) small_slider_vertical_pane_g2

0xccfd,	// (0x000689b4) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0006b52f) small_slider_vertical_pane_g

0x0b6d,	// (0x0005c824) main_hwr_training_pane

0xcd06,	// (0x000689bd) hwr_training_instruct_pane_ParamLimits

0xcd06,	// (0x000689bd) hwr_training_instruct_pane

0x5b97,	// (0x0006184e) hwr_training_navi_pane_ParamLimits

0x5b97,	// (0x0006184e) hwr_training_navi_pane

0x5bb6,	// (0x0006186d) hwr_training_write_pane_ParamLimits

0x5bb6,	// (0x0006186d) hwr_training_write_pane

0x0b6d,	// (0x0005c824) bg_frame_shadow_pane

0xcd3d,	// (0x000689f4) hwr_training_write_pane_g1

0xcd45,	// (0x000689fc) hwr_training_write_pane_g2

0xcd4d,	// (0x00068a04) hwr_training_write_pane_g3

0xcd55,	// (0x00068a0c) hwr_training_write_pane_g4

0xcd5d,	// (0x00068a14) hwr_training_write_pane_g5

0xcd65,	// (0x00068a1c) hwr_training_write_pane_g6

0xcd6d,	// (0x00068a24) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0006b536) hwr_training_write_pane_g

0xdb00,	// (0x000697b7) hwr_training_navi_pane_g1_ParamLimits

0xdb00,	// (0x000697b7) hwr_training_navi_pane_g1

0xdb12,	// (0x000697c9) hwr_training_navi_pane_g2_ParamLimits

0xdb12,	// (0x000697c9) hwr_training_navi_pane_g2

0xdb24,	// (0x000697db) hwr_training_navi_pane_g3_ParamLimits

0xdb24,	// (0x000697db) hwr_training_navi_pane_g3

0xdb34,	// (0x000697eb) hwr_training_navi_pane_g4_ParamLimits

0xdb34,	// (0x000697eb) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0006b545) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0006b545) hwr_training_navi_pane_g

0xdb41,	// (0x000697f8) hwr_training_navi_pane_t1

0x5bfe,	// (0x000618b5) list_single_hwr_training_instruct_pane_ParamLimits

0x5bfe,	// (0x000618b5) list_single_hwr_training_instruct_pane

0xcd75,	// (0x00068a2c) list_single_hwr_training_instruct_pane_t1

0xc492,	// (0x00068149) bg_frame_shadow_pane_g1

0xcd84,	// (0x00068a3b) bg_frame_shadow_pane_g2

0xcd8c,	// (0x00068a43) bg_frame_shadow_pane_g3

0xcd94,	// (0x00068a4b) bg_frame_shadow_pane_g4

0xcd9c,	// (0x00068a53) bg_frame_shadow_pane_g5

0xcda4,	// (0x00068a5b) bg_frame_shadow_pane_g6

0xcdac,	// (0x00068a63) bg_frame_shadow_pane_g7

0xa0da,	// (0x00065d91) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0006b550) bg_frame_shadow_pane_g

0x0b6d,	// (0x0005c824) main_video_tele_dialer_pane

0x5c1a,	// (0x000618d1) aid_size_cell_video_keypad_ParamLimits

0x5c1a,	// (0x000618d1) aid_size_cell_video_keypad

0x5c34,	// (0x000618eb) grid_video_dialer_keypad_pane_ParamLimits

0x5c34,	// (0x000618eb) grid_video_dialer_keypad_pane

0x5c82,	// (0x00061939) video_down_pane_cp_ParamLimits

0x5c82,	// (0x00061939) video_down_pane_cp

0x5cb6,	// (0x0006196d) cell_video_dialer_keypad_pane_ParamLimits

0x5cb6,	// (0x0006196d) cell_video_dialer_keypad_pane

0xcdb4,	// (0x00068a6b) bg_button_pane_cp08_ParamLimits

0xcdb4,	// (0x00068a6b) bg_button_pane_cp08

0x5cdc,	// (0x00061993) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5cdc,	// (0x00061993) cell_video_dialer_keypad_pane_g1

0x539b,	// (0x00061052) mup3_rocker2_pane_ParamLimits

0x539b,	// (0x00061052) mup3_rocker2_pane

0xc552,	// (0x00068209) mup3_rocker2_pane_g1

0x3e6c,	// (0x0005fb23) main_dialer2_pane

0x0b6d,	// (0x0005c824) main_mp4_pane

0xdb57,	// (0x0006980e) main_mp4_pane_g1_ParamLimits

0xdb57,	// (0x0006980e) main_mp4_pane_g1

0xdb57,	// (0x0006980e) main_mp4_pane_g2_ParamLimits

0xdb57,	// (0x0006980e) main_mp4_pane_g2

0x5d17,	// (0x000619ce) main_mp4_pane_g3_ParamLimits

0x5d17,	// (0x000619ce) main_mp4_pane_g3

0xdb65,	// (0x0006981c) main_mp4_pane_g4_ParamLimits

0xdb65,	// (0x0006981c) main_mp4_pane_g4

0xdb7f,	// (0x00069836) main_mp4_pane_g5_ParamLimits

0xdb7f,	// (0x00069836) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0006b570) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0006b570) main_mp4_pane_g

0xdbb3,	// (0x0006986a) main_mp4_pane_t1_ParamLimits

0xdbb3,	// (0x0006986a) main_mp4_pane_t1

0xdc0f,	// (0x000698c6) main_mp4_pane_t2_ParamLimits

0xdc0f,	// (0x000698c6) main_mp4_pane_t2

0xdf31,	// (0x00069be8) main_mp4_pane_t3_ParamLimits

0xdf31,	// (0x00069be8) main_mp4_pane_t3

0xdc61,	// (0x00069918) main_mp4_pane_t4_ParamLimits

0xdc61,	// (0x00069918) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0006b57d) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0006b57d) main_mp4_pane_t

0xdca1,	// (0x00069958) mp4_progress_pane_ParamLimits

0xdca1,	// (0x00069958) mp4_progress_pane

0xdceb,	// (0x000699a2) mp4_rocker_pane_ParamLimits

0xdceb,	// (0x000699a2) mp4_rocker_pane

0xdf59,	// (0x00069c10) mp4_progress_pane_t1

0xdf72,	// (0x00069c29) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0006b586) mp4_progress_pane_t

0xdf8b,	// (0x00069c42) mup_progress_pane_cp04

0xdf97,	// (0x00069c4e) mp4_rocker_pane_g1

0x5d61,	// (0x00061a18) aid_cell_size_keypad2_ParamLimits

0x5d61,	// (0x00061a18) aid_cell_size_keypad2

0x5d77,	// (0x00061a2e) dialer2_ne_pane_ParamLimits

0x5d77,	// (0x00061a2e) dialer2_ne_pane

0x5d8f,	// (0x00061a46) grid_dialer2_keypad_pane_ParamLimits

0x5d8f,	// (0x00061a46) grid_dialer2_keypad_pane

0xc331,	// (0x00067fe8) bg_popup_call_pane_cp07_ParamLimits

0xc331,	// (0x00067fe8) bg_popup_call_pane_cp07

0x5dab,	// (0x00061a62) dialer2_ne_pane_t1_ParamLimits

0x5dab,	// (0x00061a62) dialer2_ne_pane_t1

0x5deb,	// (0x00061aa2) cell_dialer2_keypad_pane_ParamLimits

0x5deb,	// (0x00061aa2) cell_dialer2_keypad_pane

0xdfb3,	// (0x00069c6a) bg_button_pane_pane_cp04_ParamLimits

0xdfb3,	// (0x00069c6a) bg_button_pane_pane_cp04

0x5e11,	// (0x00061ac8) cell_dialer2_keypad_pane_g1_ParamLimits

0x5e11,	// (0x00061ac8) cell_dialer2_keypad_pane_g1

0x1c29,	// (0x0005d8e0) aid_placing_vt_set_content_ParamLimits

0x1c29,	// (0x0005d8e0) aid_placing_vt_set_content

0x1c4d,	// (0x0005d904) aid_placing_vt_set_title_ParamLimits

0x1c4d,	// (0x0005d904) aid_placing_vt_set_title

0x0b6d,	// (0x0005c824) main_image3_pane

0x5ed7,	// (0x00061b8e) area_side_right_pane_cp01_ParamLimits

0x5ed7,	// (0x00061b8e) area_side_right_pane_cp01

0xdb57,	// (0x0006980e) main_image3_pane_g1_ParamLimits

0xdb57,	// (0x0006980e) main_image3_pane_g1

0x5ef0,	// (0x00061ba7) main_image3_pane_g2_ParamLimits

0x5ef0,	// (0x00061ba7) main_image3_pane_g2

0x5f18,	// (0x00061bcf) main_image3_pane_g3_ParamLimits

0x5f18,	// (0x00061bcf) main_image3_pane_g3

0x5f42,	// (0x00061bf9) main_image3_pane_g4_ParamLimits

0x5f42,	// (0x00061bf9) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0006b595) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0006b595) main_image3_pane_g

0x5f6c,	// (0x00061c23) main_image3_pane_t1_ParamLimits

0x5f6c,	// (0x00061c23) main_image3_pane_t1

0x5fc4,	// (0x00061c7b) main_image3_pane_t2_ParamLimits

0x5fc4,	// (0x00061c7b) main_image3_pane_t2

0x6016,	// (0x00061ccd) main_image3_pane_t3_ParamLimits

0x6016,	// (0x00061ccd) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0006b59e) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0006b59e) main_image3_pane_t

0x0df0,	// (0x0005caa7) grid_sctrl_middle_pane_cp01_ParamLimits

0x0df0,	// (0x0005caa7) grid_sctrl_middle_pane_cp01

0x609e,	// (0x00061d55) cell_sctrl_middle_pane_cp01_ParamLimits

0x609e,	// (0x00061d55) cell_sctrl_middle_pane_cp01

0x60bb,	// (0x00061d72) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x60bb,	// (0x00061d72) cell_sctrl_middle_pane_cp01_g1

0x0b6d,	// (0x0005c824) main_call4_pane

0x60d0,	// (0x00061d87) aid_size_button_call4_ParamLimits

0x60d0,	// (0x00061d87) aid_size_button_call4

0x6103,	// (0x00061dba) call4_windows_pane_ParamLimits

0x6103,	// (0x00061dba) call4_windows_pane

0x6125,	// (0x00061ddc) grid_call4_button_pane_ParamLimits

0x6125,	// (0x00061ddc) grid_call4_button_pane

0xdfbf,	// (0x00069c76) call4_windows_conf_pane

0xdfda,	// (0x00069c91) popup_call4_audio_first_window_ParamLimits

0xdfda,	// (0x00069c91) popup_call4_audio_first_window

0xe028,	// (0x00069cdf) popup_call4_audio_second_window_ParamLimits

0xe028,	// (0x00069cdf) popup_call4_audio_second_window

0xe03e,	// (0x00069cf5) popup_call4_audio_wait_window_ParamLimits

0xe03e,	// (0x00069cf5) popup_call4_audio_wait_window

0x6150,	// (0x00061e07) cell_call4_button_pane_ParamLimits

0x6150,	// (0x00061e07) cell_call4_button_pane

0x6177,	// (0x00061e2e) bg_button_pane_cp09_ParamLimits

0x6177,	// (0x00061e2e) bg_button_pane_cp09

0x6183,	// (0x00061e3a) cell_call4_button_pane_g1_ParamLimits

0x6183,	// (0x00061e3a) cell_call4_button_pane_g1

0x61a9,	// (0x00061e60) cell_call4_button_pane_t1_ParamLimits

0x61a9,	// (0x00061e60) cell_call4_button_pane_t1

0xe086,	// (0x00069d3d) popup_call4_audio_conf_window_ParamLimits

0xe086,	// (0x00069d3d) popup_call4_audio_conf_window

0x53fd,	// (0x000610b4) mup3_progress_pane_t1_ParamLimits

0x5414,	// (0x000610cb) mup3_progress_pane_t2_ParamLimits

0xc7fd,	// (0x000684b4) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0006b477) mup3_progress_pane_t_ParamLimits

0xc814,	// (0x000684cb) mup_progress_pane_cp03_ParamLimits

0x59d9,	// (0x00061690) mup3_control_keys_pane_g4_copy1

0xdccf,	// (0x00069986) mp4_rocker2_pane_ParamLimits

0xdccf,	// (0x00069986) mp4_rocker2_pane

0xe0a0,	// (0x00069d57) mp4_rocker2_pane_g1

0xe0a8,	// (0x00069d5f) mp4_rocker2_pane_g2

0xdd41,	// (0x000699f8) mp4_rocker2_pane_g3

0xdd49,	// (0x00069a00) mp4_rocker2_pane_g4

0xdd51,	// (0x00069a08) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0006b5a7) mp4_rocker2_pane_g

0x0b6d,	// (0x0005c824) main_camera4_pane

0x0b6d,	// (0x0005c824) main_video4_pane

0x5c50,	// (0x00061907) main_video_tele_dialer_pane_t1_ParamLimits

0x5c50,	// (0x00061907) main_video_tele_dialer_pane_t1

0x5c69,	// (0x00061920) main_video_tele_dialer_pane_t2_ParamLimits

0x5c69,	// (0x00061920) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0006b561) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0006b561) main_video_tele_dialer_pane_t

0x61e7,	// (0x00061e9e) cam4_autofocus_pane_ParamLimits

0x61e7,	// (0x00061e9e) cam4_autofocus_pane

0x61fd,	// (0x00061eb4) cam4_image_uncrop_pane_ParamLimits

0x61fd,	// (0x00061eb4) cam4_image_uncrop_pane

0x6216,	// (0x00061ecd) cam4_indicators_pane_ParamLimits

0x6216,	// (0x00061ecd) cam4_indicators_pane

0x6245,	// (0x00061efc) main_camera4_pane_g1_ParamLimits

0x6245,	// (0x00061efc) main_camera4_pane_g1

0x6251,	// (0x00061f08) main_camera4_pane_g2_ParamLimits

0x6251,	// (0x00061f08) main_camera4_pane_g2

0x6251,	// (0x00061f08) main_camera4_pane_g3_ParamLimits

0x6251,	// (0x00061f08) main_camera4_pane_g3

0x625d,	// (0x00061f14) main_camera4_pane_g4_ParamLimits

0x625d,	// (0x00061f14) main_camera4_pane_g4

0x6269,	// (0x00061f20) main_camera4_pane_g5_ParamLimits

0x6269,	// (0x00061f20) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0006b5b2) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0006b5b2) main_camera4_pane_g

0x6286,	// (0x00061f3d) main_camera4_pane_t1_ParamLimits

0x6286,	// (0x00061f3d) main_camera4_pane_t1

0xdd77,	// (0x00069a2e) bg_tb_trans_pane_cp06

0xdd8d,	// (0x00069a44) cam4_indicators_pane_g1

0xdd9a,	// (0x00069a51) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0006b5cd) cam4_indicators_pane_g

0xddba,	// (0x00069a71) cam4_indicators_pane_t1

0x62ea,	// (0x00061fa1) main_video4_pane_g1_ParamLimits

0x62ea,	// (0x00061fa1) main_video4_pane_g1

0x62fc,	// (0x00061fb3) main_video4_pane_g2_ParamLimits

0x62fc,	// (0x00061fb3) main_video4_pane_g2

0x6310,	// (0x00061fc7) main_video4_pane_g3_ParamLimits

0x6310,	// (0x00061fc7) main_video4_pane_g3

0x6320,	// (0x00061fd7) main_video4_pane_g4_ParamLimits

0x6320,	// (0x00061fd7) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0006b5d4) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0006b5d4) main_video4_pane_g

0x6340,	// (0x00061ff7) vid4_indicators_pane_ParamLimits

0x6340,	// (0x00061ff7) vid4_indicators_pane

0x6370,	// (0x00062027) video4_image_uncrop_cif_pane_ParamLimits

0x6370,	// (0x00062027) video4_image_uncrop_cif_pane

0x638a,	// (0x00062041) video4_image_uncrop_nhd_pane_ParamLimits

0x638a,	// (0x00062041) video4_image_uncrop_nhd_pane

0x61fd,	// (0x00061eb4) video4_image_uncrop_vga_pane_ParamLimits

0x61fd,	// (0x00061eb4) video4_image_uncrop_vga_pane

0xddde,	// (0x00069a95) bg_tb_trans_pane_cp07

0x63a0,	// (0x00062057) vid4_indicators_pane_g1

0x63ad,	// (0x00062064) vid4_indicators_pane_g2

0x63ba,	// (0x00062071) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0006b5df) vid4_indicators_pane_g

0x63df,	// (0x00062096) vid4_indicators_pane_t1

0x63f1,	// (0x000620a8) cam4_autofocus_pane_g1

0x63f9,	// (0x000620b0) cam4_autofocus_pane_g2

0x6401,	// (0x000620b8) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0006b5ea) cam4_autofocus_pane_g

0x6409,	// (0x000620c0) cam4_autofocus_pane_g3_copy1

0x5c9a,	// (0x00061951) video_down_pane_cp_t1

0x5ca8,	// (0x0006195f) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0006b566) video_down_pane_cp_t

0x0df0,	// (0x0005caa7) popup_vitu2_window_ParamLimits

0x0df0,	// (0x0005caa7) popup_vitu2_window

0x6411,	// (0x000620c8) aid_size_cell2_itu2_ParamLimits

0x6411,	// (0x000620c8) aid_size_cell2_itu2

0x6437,	// (0x000620ee) aid_size_cell_itu2_ParamLimits

0x6437,	// (0x000620ee) aid_size_cell_itu2

0x6495,	// (0x0006214c) bg_popup_window_pane_cp09_ParamLimits

0x6495,	// (0x0006214c) bg_popup_window_pane_cp09

0x64a3,	// (0x0006215a) field_vitu2_entry_pane_ParamLimits

0x64a3,	// (0x0006215a) field_vitu2_entry_pane

0x64cb,	// (0x00062182) grid_vitu2_function_pane_ParamLimits

0x64cb,	// (0x00062182) grid_vitu2_function_pane

0x651c,	// (0x000621d3) grid_vitu2_itu_pane_ParamLimits

0x651c,	// (0x000621d3) grid_vitu2_itu_pane

0x65a7,	// (0x0006225e) cell_vitu2_itu_pane_ParamLimits

0x65a7,	// (0x0006225e) cell_vitu2_itu_pane

0x65cd,	// (0x00062284) cell_vitu2_function_pane_ParamLimits

0x65cd,	// (0x00062284) cell_vitu2_function_pane

0xe0b0,	// (0x00069d67) bg_popup_call_pane_cp08_ParamLimits

0xe0b0,	// (0x00069d67) bg_popup_call_pane_cp08

0xe0c9,	// (0x00069d80) field_vitu2_entry_pane_g1

0xe0d5,	// (0x00069d8c) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0006b5f1) field_vitu2_entry_pane_g

0x6611,	// (0x000622c8) field_vitu2_entry_pane_t1_ParamLimits

0x6611,	// (0x000622c8) field_vitu2_entry_pane_t1

0x662e,	// (0x000622e5) field_vitu2_entry_pane_t2_ParamLimits

0x662e,	// (0x000622e5) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0006b5f8) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0006b5f8) field_vitu2_entry_pane_t

0x664b,	// (0x00062302) bg_button_pane_cp010_ParamLimits

0x664b,	// (0x00062302) bg_button_pane_cp010

0x6659,	// (0x00062310) cell_vitu2_itu_pane_g1

0x6677,	// (0x0006232e) cell_vitu2_itu_pane_t1_ParamLimits

0x6677,	// (0x0006232e) cell_vitu2_itu_pane_t1

0x0a79,	// (0x0005c730) cell_vitu2_itu_pane_t2_ParamLimits

0x0a79,	// (0x0005c730) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0006b602) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0006b602) cell_vitu2_itu_pane_t

0xddf6,	// (0x00069aad) bg_button_pane_cp011

0x66dd,	// (0x00062394) cell_vitu2_function_pane_g1

0x0b6d,	// (0x0005c824) main_myfav_hc_pane

0x6066,	// (0x00061d1d) popup_image3_note_pane_ParamLimits

0x6066,	// (0x00061d1d) popup_image3_note_pane

0x6082,	// (0x00061d39) popup_image3_tool_bar_pane_ParamLimits

0x6082,	// (0x00061d39) popup_image3_tool_bar_pane

0x0afd,	// (0x0005c7b4) cell_vitu2_itu_pane_t3_ParamLimits

0x0afd,	// (0x0005c7b4) cell_vitu2_itu_pane_t3

0x0b6d,	// (0x0005c824) bg_popup_trans_pane

0xe0f7,	// (0x00069dae) grid_image3_tool_bar_pane

0xe101,	// (0x00069db8) bg_popup_trans_pane_g1

0xa4cb,	// (0x00066182) bg_popup_trans_pane_g2

0xe109,	// (0x00069dc0) bg_popup_trans_pane_g3

0xe111,	// (0x00069dc8) bg_popup_trans_pane_g4

0xe119,	// (0x00069dd0) bg_popup_trans_pane_g5

0xe121,	// (0x00069dd8) bg_popup_trans_pane_g6

0xe129,	// (0x00069de0) bg_popup_trans_pane_g7

0xe131,	// (0x00069de8) bg_popup_trans_pane_g8

0xa4ab,	// (0x00066162) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0006b609) bg_popup_trans_pane_g

0xe139,	// (0x00069df0) cell_image3_tool_bar_pane_ParamLimits

0xe139,	// (0x00069df0) cell_image3_tool_bar_pane

0xc552,	// (0x00068209) cell_image3_tool_bar_pane_g1

0x0b6d,	// (0x0005c824) bg_popup_trans_pane_cp1

0xe14f,	// (0x00069e06) popup_image3_note_pane_t1

0xe15d,	// (0x00069e14) popup_image3_note_pane_t2

0xe16b,	// (0x00069e22) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0006b61c) popup_image3_note_pane_t

0xe17b,	// (0x00069e32) popup_image3_note_pane_t3_copy1

0x66f1,	// (0x000623a8) bg_myfav_hc_instruction_pane_ParamLimits

0x66f1,	// (0x000623a8) bg_myfav_hc_instruction_pane

0x6709,	// (0x000623c0) cell_myfav_contact_pane_ParamLimits

0x6709,	// (0x000623c0) cell_myfav_contact_pane

0x6725,	// (0x000623dc) cell_myfav_contact_pane_cp1_ParamLimits

0x6725,	// (0x000623dc) cell_myfav_contact_pane_cp1

0x673d,	// (0x000623f4) cell_myfav_contact_pane_cp2_ParamLimits

0x673d,	// (0x000623f4) cell_myfav_contact_pane_cp2

0x6755,	// (0x0006240c) cell_myfav_contact_pane_cp3_ParamLimits

0x6755,	// (0x0006240c) cell_myfav_contact_pane_cp3

0x676c,	// (0x00062423) cell_myfav_contact_pane_cp4_ParamLimits

0x676c,	// (0x00062423) cell_myfav_contact_pane_cp4

0x6784,	// (0x0006243b) cell_myfav_contact_pane_cp5_ParamLimits

0x6784,	// (0x0006243b) cell_myfav_contact_pane_cp5

0x6798,	// (0x0006244f) cell_myfav_contact_pane_cp6_ParamLimits

0x6798,	// (0x0006244f) cell_myfav_contact_pane_cp6

0x67ae,	// (0x00062465) cell_myfav_contact_pane_cp7_ParamLimits

0x67ae,	// (0x00062465) cell_myfav_contact_pane_cp7

0xe189,	// (0x00069e40) listscroll_gen_pane_cp05

0x67c6,	// (0x0006247d) main_myfav_hc_pane_g1_ParamLimits

0x67c6,	// (0x0006247d) main_myfav_hc_pane_g1

0x67e0,	// (0x00062497) main_myfav_hc_pane_g2_ParamLimits

0x67e0,	// (0x00062497) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0006b623) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0006b623) main_myfav_hc_pane_g

0x6814,	// (0x000624cb) main_myfav_hc_pane_t1_ParamLimits

0x6814,	// (0x000624cb) main_myfav_hc_pane_t1

0xe192,	// (0x00069e49) main_myfav_hc_pane_t2_ParamLimits

0xe192,	// (0x00069e49) main_myfav_hc_pane_t2

0xe1a4,	// (0x00069e5b) main_myfav_hc_pane_t3_ParamLimits

0xe1a4,	// (0x00069e5b) main_myfav_hc_pane_t3

0x682b,	// (0x000624e2) main_myfav_hc_pane_t4_ParamLimits

0x682b,	// (0x000624e2) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0006b62a) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0006b62a) main_myfav_hc_pane_t

0xc552,	// (0x00068209) bg_myfav_hc_instruction_pane_g1

0xe1b6,	// (0x00069e6d) cell_myfav_contact_pane_g1_ParamLimits

0xe1b6,	// (0x00069e6d) cell_myfav_contact_pane_g1

0xe1b6,	// (0x00069e6d) cell_myfav_contact_pane_g2_ParamLimits

0xe1b6,	// (0x00069e6d) cell_myfav_contact_pane_g2

0xe1c2,	// (0x00069e79) cell_myfav_contact_pane_g3_ParamLimits

0xe1c2,	// (0x00069e79) cell_myfav_contact_pane_g3

0xc7e7,	// (0x0006849e) cell_myfav_contact_pane_g4_ParamLimits

0xc7e7,	// (0x0006849e) cell_myfav_contact_pane_g4

0xe1cf,	// (0x00069e86) cell_myfav_contact_pane_g5_ParamLimits

0xe1cf,	// (0x00069e86) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0006b635) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0006b635) cell_myfav_contact_pane_g

0x67fa,	// (0x000624b1) main_myfav_hc_pane_g3_ParamLimits

0x67fa,	// (0x000624b1) main_myfav_hc_pane_g3

0x0d28,	// (0x0005c9df) popup_adpt_find_window

0x6855,	// (0x0006250c) afind_page_pane_ParamLimits

0x6855,	// (0x0006250c) afind_page_pane

0x686a,	// (0x00062521) aid_size_cell_afind_ParamLimits

0x686a,	// (0x00062521) aid_size_cell_afind

0x6888,	// (0x0006253f) bg_popup_sub_pane_cp09_ParamLimits

0x6888,	// (0x0006253f) bg_popup_sub_pane_cp09

0x6895,	// (0x0006254c) find_pane_cp01_ParamLimits

0x6895,	// (0x0006254c) find_pane_cp01

0xe1db,	// (0x00069e92) grid_afind_control_pane_ParamLimits

0xe1db,	// (0x00069e92) grid_afind_control_pane

0x68a2,	// (0x00062559) grid_afind_pane_ParamLimits

0x68a2,	// (0x00062559) grid_afind_pane

0x68c4,	// (0x0006257b) cell_afind_pane_ParamLimits

0x68c4,	// (0x0006257b) cell_afind_pane

0xc552,	// (0x00068209) afind_page_pane_g1

0x692b,	// (0x000625e2) afind_page_pane_g2

0x6934,	// (0x000625eb) afind_page_pane_g3

0x0002,

0xf989,	// (0x0006b640) afind_page_pane_g

0x693d,	// (0x000625f4) afind_page_pane_t1

0xe1ef,	// (0x00069ea6) cell_afind_grid_control_pane_ParamLimits

0xe1ef,	// (0x00069ea6) cell_afind_grid_control_pane

0xdfb3,	// (0x00069c6a) bg_button_pane_cp69_ParamLimits

0xdfb3,	// (0x00069c6a) bg_button_pane_cp69

0x695d,	// (0x00062614) cell_afind_pane_g1_ParamLimits

0x695d,	// (0x00062614) cell_afind_pane_g1

0x696a,	// (0x00062621) cell_afind_pane_t1_ParamLimits

0x696a,	// (0x00062621) cell_afind_pane_t1

0xa2c2,	// (0x00065f79) bg_button_pane_cp72

0xe1fe,	// (0x00069eb5) cell_afind_grid_control_pane_g1

0x390c,	// (0x0005f5c3) aid_image_placing_area_ParamLimits

0x390c,	// (0x0005f5c3) aid_image_placing_area

0xcb04,	// (0x000687bb) field_vitu_entry_pane_g1_ParamLimits

0xcb04,	// (0x000687bb) field_vitu_entry_pane_g1

0xcb10,	// (0x000687c7) field_vitu_entry_pane_g2_ParamLimits

0xcb10,	// (0x000687c7) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0006b4f1) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0006b4f1) field_vitu_entry_pane_g

0x5aa8,	// (0x0006175f) cell_vitu_itu_pane_g1_ParamLimits

0x5aea,	// (0x000617a1) cell_vitu_itu_pane_t3_ParamLimits

0x5aea,	// (0x000617a1) cell_vitu_itu_pane_t3

0xdf59,	// (0x00069c10) mp4_progress_pane_t1_ParamLimits

0xdf72,	// (0x00069c29) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0006b586) mp4_progress_pane_t_ParamLimits

0xdf8b,	// (0x00069c42) mup_progress_pane_cp04_ParamLimits

0x683f,	// (0x000624f6) main_myfav_hc_pane_t5_ParamLimits

0x683f,	// (0x000624f6) main_myfav_hc_pane_t5

0x0bc3,	// (0x0005c87a) aid_zoom_text_primary

0x0d28,	// (0x0005c9df) popup_adpt_find_window_ParamLimits

0x0df0,	// (0x0005caa7) main_cam_set_pane

0x622f,	// (0x00061ee6) cam4_zoom_pane_ParamLimits

0x622f,	// (0x00061ee6) cam4_zoom_pane

0x697c,	// (0x00062633) main_cam_set_pane_g1_ParamLimits

0x697c,	// (0x00062633) main_cam_set_pane_g1

0x698a,	// (0x00062641) main_cam_set_pane_g2_ParamLimits

0x698a,	// (0x00062641) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0006b647) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0006b647) main_cam_set_pane_g

0x69ad,	// (0x00062664) main_cam_set_pane_t1_ParamLimits

0x69ad,	// (0x00062664) main_cam_set_pane_t1

0x69c8,	// (0x0006267f) main_cset_listscroll_pane_ParamLimits

0x69c8,	// (0x0006267f) main_cset_listscroll_pane

0x69ec,	// (0x000626a3) main_cset_slider_pane_ParamLimits

0x69ec,	// (0x000626a3) main_cset_slider_pane

0xe20f,	// (0x00069ec6) main_cset_list_pane_ParamLimits

0xe20f,	// (0x00069ec6) main_cset_list_pane

0xe21f,	// (0x00069ed6) scroll_pane_cp028

0x6a16,	// (0x000626cd) aid_area_touch_slider

0x6a32,	// (0x000626e9) cset_slider_pane

0x6a5c,	// (0x00062713) main_cset_slider_pane_g1

0x6a71,	// (0x00062728) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0006b64c) main_cset_slider_pane_g

0xe258,	// (0x00069f0f) main_cset_slider_pane_t1

0x6b33,	// (0x000627ea) main_cset_slider_pane_t2

0x6b4d,	// (0x00062804) main_cset_slider_pane_t3

0x6b67,	// (0x0006281e) main_cset_slider_pane_t4

0x6b81,	// (0x00062838) main_cset_slider_pane_t5

0x6b9f,	// (0x00062856) main_cset_slider_pane_t6

0x6bb6,	// (0x0006286d) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0006b671) main_cset_slider_pane_t

0x6cc2,	// (0x00062979) cset_list_set_pane_ParamLimits

0x6cc2,	// (0x00062979) cset_list_set_pane

0x6cd6,	// (0x0006298d) aid_position_infowindow_above

0x6cde,	// (0x00062995) aid_position_infowindow_below

0x6ce6,	// (0x0006299d) cset_list_set_pane_g1_ParamLimits

0x6ce6,	// (0x0006299d) cset_list_set_pane_g1

0x6cf2,	// (0x000629a9) cset_list_set_pane_g3_ParamLimits

0x6cf2,	// (0x000629a9) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0006b690) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0006b690) cset_list_set_pane_g

0x6d01,	// (0x000629b8) cset_list_set_pane_t1_ParamLimits

0x6d01,	// (0x000629b8) cset_list_set_pane_t1

0x0df0,	// (0x0005caa7) list_highlight_pane_cp021_ParamLimits

0x0df0,	// (0x0005caa7) list_highlight_pane_cp021

0xad08,	// (0x000669bf) cset_slider_pane_g1

0xad1a,	// (0x000669d1) cset_slider_pane_g2

0xad11,	// (0x000669c8) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0006b695) cset_slider_pane_g

0xde04,	// (0x00069abb) aid_area_touch_cam4_zoom

0xde0c,	// (0x00069ac3) cam4_zoom_cont_pane

0xde14,	// (0x00069acb) cam4_zoom_pane_g1

0xde1c,	// (0x00069ad3) cam4_zoom_pane_g2

0x6d16,	// (0x000629cd) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0006b69c) cam4_zoom_pane_g

0xde24,	// (0x00069adb) cam4_zoom_cont_pane_g1

0xde2d,	// (0x00069ae4) cam4_zoom_cont_pane_g2

0xde36,	// (0x00069aed) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0006b6a3) cam4_zoom_cont_pane_g

0x60ee,	// (0x00061da5) call4_image_pane_ParamLimits

0x60ee,	// (0x00061da5) call4_image_pane

0xdfbf,	// (0x00069c76) call4_windows_conf_pane_ParamLimits

0xe006,	// (0x00069cbd) popup_call4_audio_in_window_ParamLimits

0xe006,	// (0x00069cbd) popup_call4_audio_in_window

0x0b6d,	// (0x0005c824) bg_popup_call2_act_pane_cp02

0xe07e,	// (0x00069d35) call4_list_conf_pane

0xc552,	// (0x00068209) call4_image_pane_g1

0xc552,	// (0x00068209) call4_image_pane_g2

0x0001,

0xf700,	// (0x0006b3b7) call4_image_pane_g

0xe2f8,	// (0x00069faf) list_single_graphic_popup_conf4_pane_ParamLimits

0xe2f8,	// (0x00069faf) list_single_graphic_popup_conf4_pane

0x0b6d,	// (0x0005c824) list_highlight_pane_cp022

0xe336,	// (0x00069fed) list_single_graphic_popup_conf4_pane_g1

0xa9e2,	// (0x00066699) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0006b6aa) list_single_graphic_popup_conf4_pane_g

0xe33e,	// (0x00069ff5) list_single_graphic_popup_conf4_pane_t1

0x1d67,	// (0x0005da1e) popup_vtel_slider_window_ParamLimits

0x1d67,	// (0x0005da1e) popup_vtel_slider_window

0xdfa1,	// (0x00069c58) dialer2_ne_pane_t2_ParamLimits

0xdfa1,	// (0x00069c58) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0006b58b) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0006b58b) dialer2_ne_pane_t

0xc331,	// (0x00067fe8) bg_popup_sub_pane_cp010_ParamLimits

0xc331,	// (0x00067fe8) bg_popup_sub_pane_cp010

0x6d1e,	// (0x000629d5) popup_vtel_slider_window_g1_ParamLimits

0x6d1e,	// (0x000629d5) popup_vtel_slider_window_g1

0x6d31,	// (0x000629e8) popup_vtel_slider_window_g2_ParamLimits

0x6d31,	// (0x000629e8) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0006b6af) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0006b6af) popup_vtel_slider_window_g

0x6d87,	// (0x00062a3e) vtel_slider_pane_ParamLimits

0x6d87,	// (0x00062a3e) vtel_slider_pane

0x6da9,	// (0x00062a60) vtel_slider_pane_g1_ParamLimits

0x6da9,	// (0x00062a60) vtel_slider_pane_g1

0x6dbd,	// (0x00062a74) vtel_slider_pane_g2_ParamLimits

0x6dbd,	// (0x00062a74) vtel_slider_pane_g2

0x6dd5,	// (0x00062a8c) vtel_slider_pane_g3_ParamLimits

0x6dd5,	// (0x00062a8c) vtel_slider_pane_g3

0x6da9,	// (0x00062a60) vtel_slider_pane_g4_ParamLimits

0x6da9,	// (0x00062a60) vtel_slider_pane_g4

0x6deb,	// (0x00062aa2) vtel_slider_pane_g5_ParamLimits

0x6deb,	// (0x00062aa2) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0006b6b8) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0006b6b8) vtel_slider_pane_g

0x0b6d,	// (0x0005c824) main_gallery2_pane

0x6463,	// (0x0006211a) aid_size_row_itut2_dropdow_list_ParamLimits

0x6463,	// (0x0006211a) aid_size_row_itut2_dropdow_list

0x64f3,	// (0x000621aa) grid_vitu2_function_top_pane_ParamLimits

0x64f3,	// (0x000621aa) grid_vitu2_function_top_pane

0x6552,	// (0x00062209) popup_vitu2_dropdown_list_window_ParamLimits

0x6552,	// (0x00062209) popup_vitu2_dropdown_list_window

0x657b,	// (0x00062232) popup_vitu2_match_list_window

0x6e0f,	// (0x00062ac6) cell_vitu2_function_top_pane_ParamLimits

0x6e0f,	// (0x00062ac6) cell_vitu2_function_top_pane

0x6e2f,	// (0x00062ae6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e2f,	// (0x00062ae6) cell_vitu2_function_top_pane_cp01

0x6e4d,	// (0x00062b04) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e4d,	// (0x00062b04) cell_vitu2_function_top_wide_pane

0xddf6,	// (0x00069aad) bg_button_pane_cp012

0x6e6b,	// (0x00062b22) cell_vitu2_function_top_pane_g1

0xde3f,	// (0x00069af6) bg_button_pane_cp013_ParamLimits

0xde3f,	// (0x00069af6) bg_button_pane_cp013

0x6e7f,	// (0x00062b36) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e7f,	// (0x00062b36) cell_vitu2_function_top_wide_pane_g1

0xddf6,	// (0x00069aad) bg_popup_sub_pane_cp20

0x6e97,	// (0x00062b4e) list_vitu2_match_list_pane

0xe101,	// (0x00069db8) bg_popup_sub_pane_cp20_g1

0xe109,	// (0x00069dc0) bg_popup_sub_pane_cp20_g2

0xa4cb,	// (0x00066182) bg_popup_sub_pane_cp20_g3

0xe111,	// (0x00069dc8) bg_popup_sub_pane_cp20_g4

0xa4ab,	// (0x00066162) bg_popup_sub_pane_cp20_g5

0xe354,	// (0x0006a00b) bg_popup_sub_pane_cp20_g6

0xe121,	// (0x00069dd8) bg_popup_sub_pane_cp20_g7

0xe129,	// (0x00069de0) bg_popup_sub_pane_cp20_g8

0xe131,	// (0x00069de8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0006b6c3) bg_popup_sub_pane_cp20_g

0xde5b,	// (0x00069b12) list_vitu2_match_list_item_pane_ParamLimits

0xde5b,	// (0x00069b12) list_vitu2_match_list_item_pane

0xde6d,	// (0x00069b24) list_vitu2_match_list_item_pane_t1

0x9fbd,	// (0x00065c74) bg_popup_sub_pane_cp21

0xde7b,	// (0x00069b32) grid_vitu2_dropdown_list_pane

0x6eff,	// (0x00062bb6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6eff,	// (0x00062bb6) cell_vitu2_dropdown_list_char_pane

0x6f22,	// (0x00062bd9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f22,	// (0x00062bd9) cell_vitu2_dropdown_list_ctrl_pane

0xe35c,	// (0x0006a013) cell_vitu2_dropdown_list_char_pane_g1

0xe365,	// (0x0006a01c) cell_vitu2_dropdown_list_char_pane_g2

0xe36e,	// (0x0006a025) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0542,	// (0x0005c1f9) cell_vitu2_dropdown_list_char_pane_g

0x6f50,	// (0x00062c07) cell_vitu2_dropdown_list_char_pane_t1

0x6f5e,	// (0x00062c15) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f5e,	// (0x00062c15) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f6e,	// (0x00062c25) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f6e,	// (0x00062c25) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f7f,	// (0x00062c36) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f7f,	// (0x00062c36) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f8f,	// (0x00062c46) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f8f,	// (0x00062c46) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdd77,	// (0x00069a2e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdd77,	// (0x00069a2e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa29,	// (0x0006b6e0) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa29,	// (0x0006b6e0) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fab,	// (0x00062c62) aid_size_cell_gallery2_ParamLimits

0x6fab,	// (0x00062c62) aid_size_cell_gallery2

0x6fc1,	// (0x00062c78) grid_gallery2_pane_ParamLimits

0x6fc1,	// (0x00062c78) grid_gallery2_pane

0x6fd5,	// (0x00062c8c) scroll_pane_cp029_ParamLimits

0x6fd5,	// (0x00062c8c) scroll_pane_cp029

0x6fe1,	// (0x00062c98) cell_gallery2_pane_ParamLimits

0x6fe1,	// (0x00062c98) cell_gallery2_pane

0xe377,	// (0x0006a02e) cell_gallery2_pane_g2

0x701b,	// (0x00062cd2) cell_gallery2_pane_g3

0xe381,	// (0x0006a038) cell_gallery2_pane_g4

0xe389,	// (0x0006a040) cell_gallery2_pane_g5

0xabb0,	// (0x00066867) grid_highlight_pane_cp10

0x657b,	// (0x00062232) popup_vitu2_match_list_window_ParamLimits

0x6592,	// (0x00062249) popup_vitu2_query_window_ParamLimits

0x6592,	// (0x00062249) popup_vitu2_query_window

0x9fbd,	// (0x00065c74) bg_vitu2_candi_button_pane

0xe35c,	// (0x0006a013) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe365,	// (0x0006a01c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe36e,	// (0x0006a025) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7023,	// (0x00062cda) bg_button_pane_cp015

0x7037,	// (0x00062cee) bg_button_pane_cp016

0x704a,	// (0x00062d01) bg_button_pane_cp017

0xc01d,	// (0x00067cd4) bg_popup_sub_pane_cp22

0xe391,	// (0x0006a048) popup_vitu2_query_window_g1

0x708f,	// (0x00062d46) popup_vitu2_query_window_g2

0x0002,

0xfa34,	// (0x0006b6eb) popup_vitu2_query_window_g

0x70ae,	// (0x00062d65) popup_vitu2_query_window_t1_ParamLimits

0x70ae,	// (0x00062d65) popup_vitu2_query_window_t1

0x70e3,	// (0x00062d9a) popup_vitu2_query_window_t2_ParamLimits

0x70e3,	// (0x00062d9a) popup_vitu2_query_window_t2

0x70f5,	// (0x00062dac) popup_vitu2_query_window_t3_ParamLimits

0x70f5,	// (0x00062dac) popup_vitu2_query_window_t3

0x711d,	// (0x00062dd4) popup_vitu2_query_window_t4_ParamLimits

0x711d,	// (0x00062dd4) popup_vitu2_query_window_t4

0x713e,	// (0x00062df5) popup_vitu2_query_window_t5_ParamLimits

0x713e,	// (0x00062df5) popup_vitu2_query_window_t5

0x0006,

0xfa3b,	// (0x0006b6f2) popup_vitu2_query_window_t_ParamLimits

0xfa3b,	// (0x0006b6f2) popup_vitu2_query_window_t

0xe207,	// (0x00069ebe) main_cset_text_pane

0x6a16,	// (0x000626cd) aid_area_touch_slider_ParamLimits

0x6a32,	// (0x000626e9) cset_slider_pane_ParamLimits

0x6a5c,	// (0x00062713) main_cset_slider_pane_g1_ParamLimits

0x6a71,	// (0x00062728) main_cset_slider_pane_g2_ParamLimits

0xe228,	// (0x00069edf) main_cset_slider_pane_g3_ParamLimits

0xe228,	// (0x00069edf) main_cset_slider_pane_g3

0x6a86,	// (0x0006273d) main_cset_slider_pane_g4_ParamLimits

0x6a86,	// (0x0006273d) main_cset_slider_pane_g4

0x6a95,	// (0x0006274c) main_cset_slider_pane_g5_ParamLimits

0x6a95,	// (0x0006274c) main_cset_slider_pane_g5

0x6aa3,	// (0x0006275a) main_cset_slider_pane_g6_ParamLimits

0x6aa3,	// (0x0006275a) main_cset_slider_pane_g6

0xf995,	// (0x0006b64c) main_cset_slider_pane_g_ParamLimits

0xe258,	// (0x00069f0f) main_cset_slider_pane_t1_ParamLimits

0x6b33,	// (0x000627ea) main_cset_slider_pane_t2_ParamLimits

0x6b4d,	// (0x00062804) main_cset_slider_pane_t3_ParamLimits

0x6b67,	// (0x0006281e) main_cset_slider_pane_t4_ParamLimits

0x6b81,	// (0x00062838) main_cset_slider_pane_t5_ParamLimits

0x6b9f,	// (0x00062856) main_cset_slider_pane_t6_ParamLimits

0x6bb6,	// (0x0006286d) main_cset_slider_pane_t7_ParamLimits

0x6be4,	// (0x0006289b) main_cset_slider_pane_t8_ParamLimits

0x6be4,	// (0x0006289b) main_cset_slider_pane_t8

0x6c0c,	// (0x000628c3) main_cset_slider_pane_t9_ParamLimits

0x6c0c,	// (0x000628c3) main_cset_slider_pane_t9

0x6c34,	// (0x000628eb) main_cset_slider_pane_t10_ParamLimits

0x6c34,	// (0x000628eb) main_cset_slider_pane_t10

0x6c5c,	// (0x00062913) main_cset_slider_pane_t11_ParamLimits

0x6c5c,	// (0x00062913) main_cset_slider_pane_t11

0x6c86,	// (0x0006293d) main_cset_slider_pane_t12_ParamLimits

0x6c86,	// (0x0006293d) main_cset_slider_pane_t12

0x6ca3,	// (0x0006295a) main_cset_slider_pane_t13_ParamLimits

0x6ca3,	// (0x0006295a) main_cset_slider_pane_t13

0xf9ba,	// (0x0006b671) main_cset_slider_pane_t_ParamLimits

0x0b6d,	// (0x0005c824) bg_popup_sub_pane_cp011

0xe39d,	// (0x0006a054) main_cset_text_pane_g1

0xe3a5,	// (0x0006a05c) main_cset_text_pane_t1

0xe3b3,	// (0x0006a06a) main_cset_text_pane_t2

0xe3c1,	// (0x0006a078) main_cset_text_pane_t3

0xe3cf,	// (0x0006a086) main_cset_text_pane_t4

0xe3dd,	// (0x0006a094) main_cset_text_pane_t5

0xe3eb,	// (0x0006a0a2) main_cset_text_pane_t6

0xe3f9,	// (0x0006a0b0) main_cset_text_pane_t7

0x0006,

0x056a,	// (0x0005c221) main_cset_text_pane_t

0x0b6d,	// (0x0005c824) main_cam4_burst_pane

0x0b6d,	// (0x0005c824) main_cam5_pane

0x694b,	// (0x00062602) bg_button_pane_cp019

0x6954,	// (0x0006260b) bg_button_pane_cp020

0xe234,	// (0x00069eeb) main_cset_slider_pane_g7_ParamLimits

0xe234,	// (0x00069eeb) main_cset_slider_pane_g7

0xe240,	// (0x00069ef7) main_cset_slider_pane_g8_ParamLimits

0xe240,	// (0x00069ef7) main_cset_slider_pane_g8

0x6ab7,	// (0x0006276e) main_cset_slider_pane_g9_ParamLimits

0x6ab7,	// (0x0006276e) main_cset_slider_pane_g9

0x6ac3,	// (0x0006277a) main_cset_slider_pane_g10_ParamLimits

0x6ac3,	// (0x0006277a) main_cset_slider_pane_g10

0x6acf,	// (0x00062786) main_cset_slider_pane_g11_ParamLimits

0x6acf,	// (0x00062786) main_cset_slider_pane_g11

0x6adb,	// (0x00062792) main_cset_slider_pane_g12_ParamLimits

0x6adb,	// (0x00062792) main_cset_slider_pane_g12

0x6ae7,	// (0x0006279e) main_cset_slider_pane_g13_ParamLimits

0x6ae7,	// (0x0006279e) main_cset_slider_pane_g13

0x6af3,	// (0x000627aa) main_cset_slider_pane_g14_ParamLimits

0x6af3,	// (0x000627aa) main_cset_slider_pane_g14

0x6aff,	// (0x000627b6) main_cset_slider_pane_g15_ParamLimits

0x6aff,	// (0x000627b6) main_cset_slider_pane_g15

0xe286,	// (0x00069f3d) main_cset_slider_pane_t14_ParamLimits

0xe286,	// (0x00069f3d) main_cset_slider_pane_t14

0xe2bf,	// (0x00069f76) main_cset_slider_pane_t15_ParamLimits

0xe2bf,	// (0x00069f76) main_cset_slider_pane_t15

0x71b5,	// (0x00062e6c) aid_cam4_burst_size_cell_ParamLimits

0x71b5,	// (0x00062e6c) aid_cam4_burst_size_cell

0x71d5,	// (0x00062e8c) grid_cam4_burst_pane_ParamLimits

0x71d5,	// (0x00062e8c) grid_cam4_burst_pane

0x720f,	// (0x00062ec6) linegrid_cam4_burst_pane_ParamLimits

0x720f,	// (0x00062ec6) linegrid_cam4_burst_pane

0xe737,	// (0x0006a3ee) scroll_pane_cp30_ParamLimits

0xe737,	// (0x0006a3ee) scroll_pane_cp30

0x7233,	// (0x00062eea) cell_cam4_burst_pane_ParamLimits

0x7233,	// (0x00062eea) cell_cam4_burst_pane

0xe407,	// (0x0006a0be) linegrid_cam4_burst_pane_g1_ParamLimits

0xe407,	// (0x0006a0be) linegrid_cam4_burst_pane_g1

0x7288,	// (0x00062f3f) linegrid_cam4_burst_pane_g2_ParamLimits

0x7288,	// (0x00062f3f) linegrid_cam4_burst_pane_g2

0xe414,	// (0x0006a0cb) linegrid_cam4_burst_pane_g3_ParamLimits

0xe414,	// (0x0006a0cb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4a,	// (0x0006b701) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4a,	// (0x0006b701) linegrid_cam4_burst_pane_g

0x7299,	// (0x00062f50) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7299,	// (0x00062f50) linegrid_cam4_burst_pane_g3_copy1

0xe421,	// (0x0006a0d8) linegrid_cam4_burst_pane_g4_ParamLimits

0xe421,	// (0x0006a0d8) linegrid_cam4_burst_pane_g4

0x72b7,	// (0x00062f6e) linegrid_cam4_burst_pane_g5_ParamLimits

0x72b7,	// (0x00062f6e) linegrid_cam4_burst_pane_g5

0x72c8,	// (0x00062f7f) linegrid_cam4_burst_pane_g6_ParamLimits

0x72c8,	// (0x00062f7f) linegrid_cam4_burst_pane_g6

0xe42e,	// (0x0006a0e5) linegrid_cam4_burst_pane_g7_ParamLimits

0xe42e,	// (0x0006a0e5) linegrid_cam4_burst_pane_g7

0x72df,	// (0x00062f96) cell_cam4_burst_pane_g1

0xe447,	// (0x0006a0fe) main_cam5_pane_t1_ParamLimits

0xe447,	// (0x0006a0fe) main_cam5_pane_t1

0xe459,	// (0x0006a110) main_cam5_pane_t2_ParamLimits

0xe459,	// (0x0006a110) main_cam5_pane_t2

0xe46b,	// (0x0006a122) main_cam5_pane_t3_ParamLimits

0xe46b,	// (0x0006a122) main_cam5_pane_t3

0xe47d,	// (0x0006a134) main_cam5_pane_t4_ParamLimits

0xe47d,	// (0x0006a134) main_cam5_pane_t4

0xe495,	// (0x0006a14c) main_cam5_pane_t5_ParamLimits

0xe495,	// (0x0006a14c) main_cam5_pane_t5

0xe4a9,	// (0x0006a160) main_cam5_pane_t6_ParamLimits

0xe4a9,	// (0x0006a160) main_cam5_pane_t6

0xe4bd,	// (0x0006a174) main_cam5_pane_t7_ParamLimits

0xe4bd,	// (0x0006a174) main_cam5_pane_t7

0xe4cf,	// (0x0006a186) main_cam5_pane_t8_ParamLimits

0xe4cf,	// (0x0006a186) main_cam5_pane_t8

0xe4ed,	// (0x0006a1a4) main_cam5_pane_t9_ParamLimits

0xe4ed,	// (0x0006a1a4) main_cam5_pane_t9

0xe4ff,	// (0x0006a1b6) main_cam5_pane_t10_ParamLimits

0xe4ff,	// (0x0006a1b6) main_cam5_pane_t10

0xe511,	// (0x0006a1c8) main_cam5_pane_t11_ParamLimits

0xe511,	// (0x0006a1c8) main_cam5_pane_t11

0xe525,	// (0x0006a1dc) main_cam5_pane_t12_ParamLimits

0xe525,	// (0x0006a1dc) main_cam5_pane_t12

0xe53c,	// (0x0006a1f3) main_cam5_pane_t13_ParamLimits

0xe53c,	// (0x0006a1f3) main_cam5_pane_t13

0x000c,

0x0585,	// (0x0005c23c) main_cam5_pane_t_ParamLimits

0x0585,	// (0x0005c23c) main_cam5_pane_t

0x0db6,	// (0x0005ca6d) popup_scut_keymap_window_ParamLimits

0x0db6,	// (0x0005ca6d) popup_scut_keymap_window

0x72f2,	// (0x00062fa9) aid_size_cell_brow_shortcut

0xabb0,	// (0x00066867) bg_popup_window_pane_cp010

0x72fe,	// (0x00062fb5) grid_scut_pane

0x730a,	// (0x00062fc1) cell_scut_pane_ParamLimits

0x730a,	// (0x00062fc1) cell_scut_pane

0x7323,	// (0x00062fda) cell_scut_pane_g1

0xe55f,	// (0x0006a216) cell_scut_pane_t1

0xe56e,	// (0x0006a225) cell_scut_pane_t2

0x732c,	// (0x00062fe3) cell_scut_pane_t3

0x0002,

0xfa56,	// (0x0006b70d) cell_scut_pane_t

0x4fba,	// (0x00060c71) main_mup3_pane_g8_ParamLimits

0x4fba,	// (0x00060c71) main_mup3_pane_g8

0x647d,	// (0x00062134) area_vitu2_query_pane_ParamLimits

0x647d,	// (0x00062134) area_vitu2_query_pane

0x705d,	// (0x00062d14) input_focus_pane_cp08

0xe57d,	// (0x0006a234) area_vitu2_query_pane_g1

0x733a,	// (0x00062ff1) area_vitu2_query_pane_g2

0x0001,

0xfa5d,	// (0x0006b714) area_vitu2_query_pane_g

0x734b,	// (0x00063002) area_vitu2_query_pane_t1_ParamLimits

0x734b,	// (0x00063002) area_vitu2_query_pane_t1

0x735f,	// (0x00063016) area_vitu2_query_pane_t2_ParamLimits

0x735f,	// (0x00063016) area_vitu2_query_pane_t2

0x7373,	// (0x0006302a) area_vitu2_query_pane_t3_ParamLimits

0x7373,	// (0x0006302a) area_vitu2_query_pane_t3

0x739b,	// (0x00063052) area_vitu2_query_pane_t4_ParamLimits

0x739b,	// (0x00063052) area_vitu2_query_pane_t4

0x73c3,	// (0x0006307a) area_vitu2_query_pane_t5_ParamLimits

0x73c3,	// (0x0006307a) area_vitu2_query_pane_t5

0x73eb,	// (0x000630a2) area_vitu2_query_pane_t6_ParamLimits

0x73eb,	// (0x000630a2) area_vitu2_query_pane_t6

0x0006,

0xfa62,	// (0x0006b719) area_vitu2_query_pane_t_ParamLimits

0xfa62,	// (0x0006b719) area_vitu2_query_pane_t

0x7437,	// (0x000630ee) bg_button_pane_cp018

0x7445,	// (0x000630fc) bg_button_pane_cp021

0x7451,	// (0x00063108) bg_button_pane_cp022

0x7462,	// (0x00063119) input_focus_pane_cp09

0x2e29,	// (0x0005eae0) aid_size_touch_mv_arrow_left

0x2e52,	// (0x0005eb09) aid_size_touch_mv_arrow_right

0x6b17,	// (0x000627ce) main_cset_slider_pane_g16_ParamLimits

0x6b17,	// (0x000627ce) main_cset_slider_pane_g16

0x6b25,	// (0x000627dc) main_cset_slider_pane_g17_ParamLimits

0x6b25,	// (0x000627dc) main_cset_slider_pane_g17

0x72df,	// (0x00062f96) cell_cam4_burst_pane_g1_ParamLimits

0x0b6d,	// (0x0005c824) compa_mode_pane

0x6d41,	// (0x000629f8) popup_vtel_slider_window_g3_ParamLimits

0x6d41,	// (0x000629f8) popup_vtel_slider_window_g3

0x6d58,	// (0x00062a0f) popup_vtel_slider_window_g4_ParamLimits

0x6d58,	// (0x00062a0f) popup_vtel_slider_window_g4

0x6d6f,	// (0x00062a26) popup_vtel_slider_window_t1_ParamLimits

0x6d6f,	// (0x00062a26) popup_vtel_slider_window_t1

0x0b6d,	// (0x0005c824) main_cl_pane

0xc049,	// (0x00067d00) popup_imed_adjust2_window_ParamLimits

0xc01d,	// (0x00067cd4) bg_tb_trans_pane_cp05_ParamLimits

0xca39,	// (0x000686f0) popup_imed_adjust2_window_g1_ParamLimits

0xca48,	// (0x000686ff) popup_imed_adjust2_window_g2_ParamLimits

0xca48,	// (0x000686ff) popup_imed_adjust2_window_g2

0xca54,	// (0x0006870b) popup_imed_adjust2_window_g3_ParamLimits

0xca54,	// (0x0006870b) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0006b4b5) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0006b4b5) popup_imed_adjust2_window_g

0xca60,	// (0x00068717) popup_imed_adjust2_window_t1_ParamLimits

0xca78,	// (0x0006872f) slider_imed_adjust_pane_ParamLimits

0xca8c,	// (0x00068743) slider_imed_adjust_pane_g1_ParamLimits

0xca9c,	// (0x00068753) slider_imed_adjust_pane_g2_ParamLimits

0xcaac,	// (0x00068763) slider_imed_adjust_pane_g3_ParamLimits

0xcabd,	// (0x00068774) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0006b4bc) slider_imed_adjust_pane_g_ParamLimits

0x61cf,	// (0x00061e86) aid_touch_area_cam4_ParamLimits

0x61cf,	// (0x00061e86) aid_touch_area_cam4

0xdd59,	// (0x00069a10) battery_pane_cp01

0x627a,	// (0x00061f31) main_camera4_pane_g6_ParamLimits

0x627a,	// (0x00061f31) main_camera4_pane_g6

0x629d,	// (0x00061f54) main_camera4_pane_t2_ParamLimits

0x629d,	// (0x00061f54) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0006b5bf) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0006b5bf) main_camera4_pane_t

0x62d2,	// (0x00061f89) aid_touch_area_vid4_ParamLimits

0x62d2,	// (0x00061f89) aid_touch_area_vid4

0x6330,	// (0x00061fe7) main_video4_pane_g5_ParamLimits

0x6330,	// (0x00061fe7) main_video4_pane_g5

0x6357,	// (0x0006200e) vid4_progress_pane_ParamLimits

0x6357,	// (0x0006200e) vid4_progress_pane

0xe24c,	// (0x00069f03) main_cset_slider_pane_g18_ParamLimits

0xe24c,	// (0x00069f03) main_cset_slider_pane_g18

0xe43b,	// (0x0006a0f2) cell_cam4_burst_pane_g2_ParamLimits

0xe43b,	// (0x0006a0f2) cell_cam4_burst_pane_g2

0x0001,

0xfa51,	// (0x0006b708) cell_cam4_burst_pane_g_ParamLimits

0xfa51,	// (0x0006b708) cell_cam4_burst_pane_g

0x9fe1,	// (0x00065c98) bg_cl_pane_ParamLimits

0x9fe1,	// (0x00065c98) bg_cl_pane

0x7473,	// (0x0006312a) cl_header_pane_ParamLimits

0x7473,	// (0x0006312a) cl_header_pane

0x7487,	// (0x0006313e) cl_listscroll_pane_ParamLimits

0x7487,	// (0x0006313e) cl_listscroll_pane

0xe589,	// (0x0006a240) bg_cl_pane_g1

0xe591,	// (0x0006a248) bg_cl_pane_g2

0xe599,	// (0x0006a250) bg_cl_pane_g3

0xe5a1,	// (0x0006a258) bg_cl_pane_g4

0xe5a9,	// (0x0006a260) bg_cl_pane_g5

0xe5b1,	// (0x0006a268) bg_cl_pane_g6

0xe5b9,	// (0x0006a270) bg_cl_pane_g7

0xe5c1,	// (0x0006a278) bg_cl_pane_g8

0xe5c9,	// (0x0006a280) bg_cl_pane_g9

0x0008,

0x05bb,	// (0x0005c272) bg_cl_pane_g

0x7497,	// (0x0006314e) aid_height_cl_leading_ParamLimits

0x7497,	// (0x0006314e) aid_height_cl_leading

0x74a3,	// (0x0006315a) aid_height_cl_text_ParamLimits

0x74a3,	// (0x0006315a) aid_height_cl_text

0x0df0,	// (0x0005caa7) bg_cl_header_pane_ParamLimits

0x0df0,	// (0x0005caa7) bg_cl_header_pane

0x74c2,	// (0x00063179) cl_header_pane_g1_ParamLimits

0x74c2,	// (0x00063179) cl_header_pane_g1

0x74d8,	// (0x0006318f) cl_header_pane_t1_ParamLimits

0x74d8,	// (0x0006318f) cl_header_pane_t1

0xe5d1,	// (0x0006a288) cl_list_pane

0xe21f,	// (0x00069ed6) hc_scroll_pane_cp01

0xa4ab,	// (0x00066162) bg_cl_header_pane_g1

0xe101,	// (0x00069db8) bg_cl_header_pane_g2

0xa4cb,	// (0x00066182) bg_cl_header_pane_g3

0xe111,	// (0x00069dc8) bg_cl_header_pane_g4

0xe109,	// (0x00069dc0) bg_cl_header_pane_g5

0xe354,	// (0x0006a00b) bg_cl_header_pane_g6

0xe129,	// (0x00069de0) bg_cl_header_pane_g7

0xe131,	// (0x00069de8) bg_cl_header_pane_g8

0xe121,	// (0x00069dd8) bg_cl_header_pane_g9

0x0008,

0xfa71,	// (0x0006b728) bg_cl_header_pane_g

0x74f1,	// (0x000631a8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74f1,	// (0x000631a8) hc_cl_list_double_graphic_heading_pane

0x7504,	// (0x000631bb) hc_cl_list_single_graphic_pane_ParamLimits

0x7504,	// (0x000631bb) hc_cl_list_single_graphic_pane

0x751c,	// (0x000631d3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x751c,	// (0x000631d3) hc_cl_list_single_graphic_pane_g1

0x7528,	// (0x000631df) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7528,	// (0x000631df) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa84,	// (0x0006b73b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa84,	// (0x0006b73b) hc_cl_list_single_graphic_pane_g

0x753c,	// (0x000631f3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x753c,	// (0x000631f3) hc_cl_list_single_graphic_pane_t1

0x751c,	// (0x000631d3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x751c,	// (0x000631d3) hc_cl_list_double_graphic_heading_pane_g1

0x7551,	// (0x00063208) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7551,	// (0x00063208) hc_cl_list_double_graphic_heading_pane_g2

0x7565,	// (0x0006321c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7565,	// (0x0006321c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa89,	// (0x0006b740) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa89,	// (0x0006b740) hc_cl_list_double_graphic_heading_pane_g

0x7579,	// (0x00063230) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7579,	// (0x00063230) hc_cl_list_double_graphic_heading_pane_t1

0x758e,	// (0x00063245) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x758e,	// (0x00063245) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa90,	// (0x0006b747) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa90,	// (0x0006b747) hc_cl_list_double_graphic_heading_pane_t

0xde8b,	// (0x00069b42) vid4_progress_pane_g1

0xde97,	// (0x00069b4e) vid4_progress_pane_g2

0xdea3,	// (0x00069b5a) vid4_progress_pane_g3

0xdeb2,	// (0x00069b69) vid4_progress_pane_g4

0x0004,

0xfa95,	// (0x0006b74c) vid4_progress_pane_g

0xded0,	// (0x00069b87) vid4_progress_pane_t1

0xdee6,	// (0x00069b9d) vid4_progress_pane_t2

0x0002,

0xfaa0,	// (0x0006b757) vid4_progress_pane_t

0xdf11,	// (0x00069bc8) wait_bar_pane_cp07

0xc33f,	// (0x00067ff6) blid_firmament_pane_ParamLimits

0xc382,	// (0x00068039) popup_blid_sat_info2_window_g1

0xc3a6,	// (0x0006805d) popup_blid_sat_info2_window_t3

0xc3b4,	// (0x0006806b) popup_blid_sat_info2_window_t4

0xc3c2,	// (0x00068079) popup_blid_sat_info2_window_t5

0xc3d0,	// (0x00068087) popup_blid_sat_info2_window_t6

0xc3e0,	// (0x00068097) popup_blid_sat_info2_window_t7

0xc3ee,	// (0x000680a5) popup_blid_sat_info2_window_t8

0xc3fc,	// (0x000680b3) popup_blid_sat_info2_window_t9

0xc40a,	// (0x000680c1) popup_blid_sat_info2_window_t10

0xc4d2,	// (0x00068189) aid_firma_cardinal_ParamLimits

0xc4e6,	// (0x0006819d) blid_firmament_pane_t1_ParamLimits

0xc4fd,	// (0x000681b4) blid_firmament_pane_t2_ParamLimits

0xc514,	// (0x000681cb) blid_firmament_pane_t3_ParamLimits

0xc52b,	// (0x000681e2) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0006b3ae) blid_firmament_pane_t_ParamLimits

0xc542,	// (0x000681f9) blid_sat_info_pane_ParamLimits

0x0df0,	// (0x0005caa7) main_cam_set_pane_ParamLimits

0x5854,	// (0x0006150b) aid_size_cell_colour_35_ParamLimits

0x5874,	// (0x0006152b) aid_size_cell_colour_112_ParamLimits

0x5894,	// (0x0006154b) aid_size_cell_effect_ParamLimits

0xc01d,	// (0x00067cd4) bg_tb_trans_pane_cp02_ParamLimits

0xa6a1,	// (0x00066358) heading_imed_pane_ParamLimits

0x58b4,	// (0x0006156b) listscroll_imed_pane_ParamLimits

0xb64b,	// (0x00067302) popup_call2_audio_first_window_g5_ParamLimits

0xb64b,	// (0x00067302) popup_call2_audio_first_window_g5

0x5e79,	// (0x00061b30) aid_size_touch_image3_arrow_left_ParamLimits

0x5e79,	// (0x00061b30) aid_size_touch_image3_arrow_left

0x5ea5,	// (0x00061b5c) aid_size_touch_image3_arrow_right_ParamLimits

0x5ea5,	// (0x00061b5c) aid_size_touch_image3_arrow_right

0xdefc,	// (0x00069bb3) vid4_progress_pane_t3

0x5bd1,	// (0x00061888) main_hwr_training_symbol_option_pane_ParamLimits

0x5bd1,	// (0x00061888) main_hwr_training_symbol_option_pane

0xcd28,	// (0x000689df) popup_hwr_training_preview_window_ParamLimits

0xcd28,	// (0x000689df) popup_hwr_training_preview_window

0x5bf1,	// (0x000618a8) hwr_training_navi_pane_g5_ParamLimits

0x5bf1,	// (0x000618a8) hwr_training_navi_pane_g5

0xe0ef,	// (0x00069da6) popup_char_count_window

0xddf6,	// (0x00069aad) bg_popup_sub_pane_cp20_ParamLimits

0x6e97,	// (0x00062b4e) list_vitu2_match_list_pane_ParamLimits

0x6ea6,	// (0x00062b5d) vitu2_page_scroll_pane_ParamLimits

0x6ea6,	// (0x00062b5d) vitu2_page_scroll_pane

0xe5da,	// (0x0006a291) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe5da,	// (0x0006a291) list_single_hwr_training_symbol_option_pane

0xe5ed,	// (0x0006a2a4) list_single_hwr_training_symbol_option_pane_g1

0xe5f5,	// (0x0006a2ac) list_single_hwr_training_symbol_option_pane_t1

0xe603,	// (0x0006a2ba) bg_button_pane_cp023

0xe60c,	// (0x0006a2c3) bg_button_pane_cp024

0x7607,	// (0x000632be) vitu2_page_scroll_pane_g1

0x760f,	// (0x000632c6) vitu2_page_scroll_pane_g2

0x0001,

0xfaa7,	// (0x0006b75e) vitu2_page_scroll_pane_g

0x7619,	// (0x000632d0) vitu2_page_scroll_pane_t1

0xc25b,	// (0x00067f12) popup_char_count_window_g1

0xe63f,	// (0x0006a2f6) popup_char_count_window_g2

0xe648,	// (0x0006a2ff) popup_char_count_window_g3

0x0002,

0xfaac,	// (0x0006b763) popup_char_count_window_g

0xe651,	// (0x0006a308) popup_char_count_window_t1

0x0b6d,	// (0x0005c824) main_vded2_pane

0xca25,	// (0x000686dc) aid_size_cell_imed_line

0xca2f,	// (0x000686e6) grid_imed_line_width_pane

0x63c7,	// (0x0006207e) vid4_indicators_pane_g4

0xe65f,	// (0x0006a316) cell_imed_line_width_pane_ParamLimits

0xe65f,	// (0x0006a316) cell_imed_line_width_pane

0xe675,	// (0x0006a32c) cell_imed_line_width_pane_g1

0xc2ed,	// (0x00067fa4) cell_imed_line_width_pane_g2

0x0001,

0xfab3,	// (0x0006b76a) cell_imed_line_width_pane_g

0x7628,	// (0x000632df) main_vded2_pane_g1_ParamLimits

0x7628,	// (0x000632df) main_vded2_pane_g1

0x7643,	// (0x000632fa) main_vded2_pane_g2_ParamLimits

0x7643,	// (0x000632fa) main_vded2_pane_g2

0x0001,

0xfab8,	// (0x0006b76f) main_vded2_pane_g_ParamLimits

0xfab8,	// (0x0006b76f) main_vded2_pane_g

0x7655,	// (0x0006330c) vded2_slider_pane_ParamLimits

0x7655,	// (0x0006330c) vded2_slider_pane

0x7665,	// (0x0006331c) aid_size_touch_vded2_end

0x766f,	// (0x00063326) aid_size_touch_vded2_playhead

0xe67e,	// (0x0006a335) aid_size_touch_vded2_start

0xe686,	// (0x0006a33d) vded2_slider_bg_pane

0xe68f,	// (0x0006a346) vded2_slider_pane_g1

0xe698,	// (0x0006a34f) vded2_slider_pane_g2

0x7679,	// (0x00063330) vded2_slider_pane_g3

0x0002,

0xfabd,	// (0x0006b774) vded2_slider_pane_g

0xe30d,	// (0x00069fc4) vded2_slider_bg_pane_g1

0xe316,	// (0x00069fcd) vded2_slider_bg_pane_g2

0xe31f,	// (0x00069fd6) vded2_slider_bg_pane_g3

0x0002,

0xfac4,	// (0x0006b77b) vded2_slider_bg_pane_g

0x3549,	// (0x0005f200) aid_postcard_touch_down_pane_ParamLimits

0x3549,	// (0x0005f200) aid_postcard_touch_down_pane

0x3561,	// (0x0005f218) aid_postcard_touch_up_pane_ParamLimits

0x3561,	// (0x0005f218) aid_postcard_touch_up_pane

0x0b6d,	// (0x0005c824) main_blid2_pane

0xc02b,	// (0x00067ce2) popup_blid2_search_window

0x0b6d,	// (0x0005c824) blid2_gps_pane

0x0b6d,	// (0x0005c824) blid2_navig_pane

0x0b6d,	// (0x0005c824) blid2_search_pane

0x0b6d,	// (0x0005c824) blid2_tripm_pane

0x7684,	// (0x0006333b) blid2_search_pane_g1_ParamLimits

0x7684,	// (0x0006333b) blid2_search_pane_g1

0x769c,	// (0x00063353) blid2_search_pane_t1_ParamLimits

0x769c,	// (0x00063353) blid2_search_pane_t1

0x76ae,	// (0x00063365) aid_size_cell_blid2_gps_ParamLimits

0x76ae,	// (0x00063365) aid_size_cell_blid2_gps

0x76c6,	// (0x0006337d) blid2_gps_pane_g1_ParamLimits

0x76c6,	// (0x0006337d) blid2_gps_pane_g1

0x76da,	// (0x00063391) grid_blid2_satellite_pane_ParamLimits

0x76da,	// (0x00063391) grid_blid2_satellite_pane

0x76f2,	// (0x000633a9) blid2_navig_pane_g1_ParamLimits

0x76f2,	// (0x000633a9) blid2_navig_pane_g1

0x76fe,	// (0x000633b5) blid2_navig_pane_t1_ParamLimits

0x76fe,	// (0x000633b5) blid2_navig_pane_t1

0x7719,	// (0x000633d0) blid2_navig_pane_t2_ParamLimits

0x7719,	// (0x000633d0) blid2_navig_pane_t2

0x0001,

0xfacb,	// (0x0006b782) blid2_navig_pane_t_ParamLimits

0xfacb,	// (0x0006b782) blid2_navig_pane_t

0x7734,	// (0x000633eb) blid2_navig_ring_pane_ParamLimits

0x7734,	// (0x000633eb) blid2_navig_ring_pane

0x774f,	// (0x00063406) blid2_speed_pane_ParamLimits

0x774f,	// (0x00063406) blid2_speed_pane

0x775b,	// (0x00063412) blid2_tripm_pane_g1_ParamLimits

0x775b,	// (0x00063412) blid2_tripm_pane_g1

0x7776,	// (0x0006342d) blid2_tripm_pane_g2_ParamLimits

0x7776,	// (0x0006342d) blid2_tripm_pane_g2

0x778a,	// (0x00063441) blid2_tripm_pane_g3_ParamLimits

0x778a,	// (0x00063441) blid2_tripm_pane_g3

0x779e,	// (0x00063455) blid2_tripm_pane_g4_ParamLimits

0x779e,	// (0x00063455) blid2_tripm_pane_g4

0x77b2,	// (0x00063469) blid2_tripm_pane_g5_ParamLimits

0x77b2,	// (0x00063469) blid2_tripm_pane_g5

0x0005,

0xfad0,	// (0x0006b787) blid2_tripm_pane_g_ParamLimits

0xfad0,	// (0x0006b787) blid2_tripm_pane_g

0x77d8,	// (0x0006348f) blid2_tripm_pane_t1_ParamLimits

0x77d8,	// (0x0006348f) blid2_tripm_pane_t1

0x77f3,	// (0x000634aa) blid2_tripm_pane_t2_ParamLimits

0x77f3,	// (0x000634aa) blid2_tripm_pane_t2

0x780c,	// (0x000634c3) blid2_tripm_pane_t3_ParamLimits

0x780c,	// (0x000634c3) blid2_tripm_pane_t3

0x0003,

0xfadd,	// (0x0006b794) blid2_tripm_pane_t_ParamLimits

0xfadd,	// (0x0006b794) blid2_tripm_pane_t

0x7853,	// (0x0006350a) cell_blid2_satellite_pane_ParamLimits

0x7853,	// (0x0006350a) cell_blid2_satellite_pane

0x786f,	// (0x00063526) cell_blid2_satellite_pane_g1

0xe6a0,	// (0x0006a357) cell_blid2_satellite_pane_t1

0xc552,	// (0x00068209) blid2_speed_pane_g1

0xe6ae,	// (0x0006a365) blid2_speed_pane_t1

0xe6bc,	// (0x0006a373) blid2_speed_pane_t2

0x0001,

0x063c,	// (0x0005c2f3) blid2_speed_pane_t

0xc552,	// (0x00068209) blid2_navig_ring_pane_g1

0x7878,	// (0x0006352f) blid2_navig_ring_pane_g2

0x7880,	// (0x00063537) blid2_navig_ring_pane_g3

0x7888,	// (0x0006353f) blid2_navig_ring_pane_g4

0x7890,	// (0x00063547) blid2_navig_ring_pane_g5

0x0004,

0xfae6,	// (0x0006b79d) blid2_navig_ring_pane_g

0x0b6d,	// (0x0005c824) bg_popup_window_pane_cp011

0xe6ca,	// (0x0006a381) popup_blid2_search_window_g1

0xe6d2,	// (0x0006a389) popup_blid2_search_window_t1

0xe6e0,	// (0x0006a397) popup_blid2_search_window_t2

0x0001,

0x064c,	// (0x0005c303) popup_blid2_search_window_t

0xa3ba,	// (0x00066071) main_browser_pane_g1

0x9fe1,	// (0x00065c98) main_browser_pane_ParamLimits

0xddf6,	// (0x00069aad) bg_button_pane_cp011_ParamLimits

0x66dd,	// (0x00062394) cell_vitu2_function_pane_g1_ParamLimits

0xc01d,	// (0x00067cd4) bg_popup_sub_pane_cp22_ParamLimits

0x705d,	// (0x00062d14) input_focus_pane_cp08_ParamLimits

0x7074,	// (0x00062d2b) popup_vitu2_query_button_pane_ParamLimits

0x7074,	// (0x00062d2b) popup_vitu2_query_button_pane

0x7085,	// (0x00062d3c) popup_vitu2_query_input_button_pane

0xe391,	// (0x0006a048) popup_vitu2_query_window_g1_ParamLimits

0x708f,	// (0x00062d46) popup_vitu2_query_window_g2_ParamLimits

0xfa34,	// (0x0006b6eb) popup_vitu2_query_window_g_ParamLimits

0x0b6d,	// (0x0005c824) bg_button_pane_cp026

0x7898,	// (0x0006354f) popup_vitu2_query_input_button_pane_g1

0x0b6d,	// (0x0005c824) bg_button_pane_cp025

0xe6ee,	// (0x0006a3a5) popup_vitu2_query_button_pane_t1

0x4c56,	// (0x0006090d) main_mp3_pane_t6

0x4c64,	// (0x0006091b) popup_slider_window_cp01

0xdd85,	// (0x00069a3c) cam4_battery_pane

0xddec,	// (0x00069aa3) cam4_battery_pane_cp02

0x75a3,	// (0x0006325a) cam4_battery_pane_cp01

0xde83,	// (0x00069b3a) cam4_battery_pane_cp03

0xdf97,	// (0x00069c4e) cam4_battery_pane_g1

0xc552,	// (0x00068209) cam4_battery_pane_g2

0x0001,

0xfaf1,	// (0x0006b7a8) cam4_battery_pane_g

0xc418,	// (0x000680cf) popup_blid_sat_info2_window_t11

0x2e29,	// (0x0005eae0) aid_size_touch_mv_arrow_left_ParamLimits

0x2e52,	// (0x0005eb09) aid_size_touch_mv_arrow_right_ParamLimits

0xab10,	// (0x000667c7) navi_pane_g1_ParamLimits

0x2e7b,	// (0x0005eb32) navi_pane_g2_ParamLimits

0x2ea9,	// (0x0005eb60) navi_pane_g3_ParamLimits

0xf409,	// (0x0006b0c0) navi_pane_g_ParamLimits

0x2f03,	// (0x0005ebba) navi_pane_mv_t1_ParamLimits

0x58c0,	// (0x00061577) grid_imed_effect_pane_ParamLimits

0x1c6c,	// (0x0005d923) aid_placing_vt_slider_lsc

0xa307,	// (0x00065fbe) aid_placing_vt_slider_prt

0x0df0,	// (0x0005caa7) bg_tb_trans_pane_cp01_ParamLimits

0xc6a2,	// (0x00068359) popup_image_details_window_g1_ParamLimits

0xc6b5,	// (0x0006836c) popup_image_details_window_g2_ParamLimits

0xc6ca,	// (0x00068381) popup_image_details_window_g3_ParamLimits

0xc6ca,	// (0x00068381) popup_image_details_window_g3

0xf73c,	// (0x0006b3f3) popup_image_details_window_g_ParamLimits

0xc6de,	// (0x00068395) popup_image_details_window_t1_ParamLimits

0xc6f0,	// (0x000683a7) popup_image_details_window_t2_ParamLimits

0xc709,	// (0x000683c0) popup_image_details_window_t3_ParamLimits

0xc71d,	// (0x000683d4) popup_image_details_window_t4_ParamLimits

0xc738,	// (0x000683ef) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0006b3fa) popup_image_details_window_t_ParamLimits

0x74af,	// (0x00063166) cl_header_name_pane_ParamLimits

0x74af,	// (0x00063166) cl_header_name_pane

0x78a0,	// (0x00063557) cl_header_name_pane_t1_ParamLimits

0x78a0,	// (0x00063557) cl_header_name_pane_t1

0x78c1,	// (0x00063578) cl_header_name_pane_t2_ParamLimits

0x78c1,	// (0x00063578) cl_header_name_pane_t2

0x7903,	// (0x000635ba) cl_header_name_pane_t3_ParamLimits

0x7903,	// (0x000635ba) cl_header_name_pane_t3

0x0002,

0xfaf6,	// (0x0006b7ad) cl_header_name_pane_t_ParamLimits

0xfaf6,	// (0x0006b7ad) cl_header_name_pane_t

0x2ed4,	// (0x0005eb8b) navi_pane_mv_g2_ParamLimits

0xe0c9,	// (0x00069d80) field_vitu2_entry_pane_g1_ParamLimits

0xe0d5,	// (0x00069d8c) field_vitu2_entry_pane_g2_ParamLimits

0xe0e1,	// (0x00069d98) field_vitu2_entry_pane_g3_ParamLimits

0xe0e1,	// (0x00069d98) field_vitu2_entry_pane_g3

0xf93a,	// (0x0006b5f1) field_vitu2_entry_pane_g_ParamLimits

0x6659,	// (0x00062310) cell_vitu2_itu_pane_g1_ParamLimits

0x6669,	// (0x00062320) cell_vitu2_itu_pane_g2_ParamLimits

0x6669,	// (0x00062320) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0006b5fd) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0006b5fd) cell_vitu2_itu_pane_g

0xddf6,	// (0x00069aad) bg_vkb2_func_pane_cp05_ParamLimits

0xddf6,	// (0x00069aad) bg_vkb2_func_pane_cp05

0xddf6,	// (0x00069aad) bg_vkb2_func_pane_cp03

0xddf6,	// (0x00069aad) bg_vkb2_func_pane_cp04

0xddf6,	// (0x00069aad) bg_vkb2_func_pane_cp10_ParamLimits

0xddf6,	// (0x00069aad) bg_vkb2_func_pane_cp10

0x7451,	// (0x00063108) bg_vkb2_func_pane_cp08

0x7437,	// (0x000630ee) bg_vkb2_func_pane_cp06

0x7445,	// (0x000630fc) bg_vkb2_func_pane_cp07

0xe615,	// (0x0006a2cc) bg_vkb2_func_pane_cp11_ParamLimits

0xe615,	// (0x0006a2cc) bg_vkb2_func_pane_cp11

0xe62a,	// (0x0006a2e1) bg_vkb2_func_pane_cp12_ParamLimits

0xe62a,	// (0x0006a2e1) bg_vkb2_func_pane_cp12

0x0b6d,	// (0x0005c824) bg_vkb2_func_pane_cp09

0xe101,	// (0x00069db8) bg_vkb2_func_pane_g1

0xa4cb,	// (0x00066182) bg_vkb2_func_pane_g2

0xe109,	// (0x00069dc0) bg_vkb2_func_pane_g3

0xe111,	// (0x00069dc8) bg_vkb2_func_pane_g4

0xe354,	// (0x0006a00b) bg_vkb2_func_pane_g5

0xe129,	// (0x00069de0) bg_vkb2_func_pane_g6

0xe131,	// (0x00069de8) bg_vkb2_func_pane_g7

0xe121,	// (0x00069dd8) bg_vkb2_func_pane_g8

0xa4ab,	// (0x00066162) bg_vkb2_func_pane_g9

0x0008,

0xfafd,	// (0x0006b7b4) bg_vkb2_func_pane_g

0x77c6,	// (0x0006347d) blid2_tripm_pane_g6_ParamLimits

0x77c6,	// (0x0006347d) blid2_tripm_pane_g6

0xdf51,	// (0x00069c08) mp4_progress_pane_g1

0x783f,	// (0x000634f6) blid2_tripm_values_pane_ParamLimits

0x783f,	// (0x000634f6) blid2_tripm_values_pane

0x7934,	// (0x000635eb) blid2_tripm_values_pane_t1

0x7942,	// (0x000635f9) blid2_tripm_values_pane_t2

0x7950,	// (0x00063607) blid2_tripm_values_pane_t3

0x795e,	// (0x00063615) blid2_tripm_values_pane_t4

0x796c,	// (0x00063623) blid2_tripm_values_pane_t5

0x797a,	// (0x00063631) blid2_tripm_values_pane_t6

0x7988,	// (0x0006363f) blid2_tripm_values_pane_t7

0x7996,	// (0x0006364d) blid2_tripm_values_pane_t8

0x79a4,	// (0x0006365b) blid2_tripm_values_pane_t9

0x0008,

0xfb10,	// (0x0006b7c7) blid2_tripm_values_pane_t

0x1cac,	// (0x0005d963) call_video_pane_t1_ParamLimits

0x1cc6,	// (0x0005d97d) call_video_pane_t2_ParamLimits

0xf292,	// (0x0006af49) call_video_pane_t_ParamLimits

0x344c,	// (0x0005f103) msg_header_pane_g1_ParamLimits

0xad4d,	// (0x00066a04) msg_header_pane_g2_ParamLimits

0xad4d,	// (0x00066a04) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0006b163) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0006b163) msg_header_pane_g

0x9fe1,	// (0x00065c98) main_clock2_pane_ParamLimits

0x55c9,	// (0x00061280) grid_clock2_toolbar_pane_ParamLimits

0x55c9,	// (0x00061280) grid_clock2_toolbar_pane

0x55c9,	// (0x00061280) listscroll_clock2_pane_ParamLimits

0x55c9,	// (0x00061280) listscroll_clock2_pane

0x56b2,	// (0x00061369) main_clock2_pane_t3_ParamLimits

0x56b2,	// (0x00061369) main_clock2_pane_t3

0x56cd,	// (0x00061384) main_clock2_pane_t4_ParamLimits

0x56cd,	// (0x00061384) main_clock2_pane_t4

0xe6fc,	// (0x0006a3b3) cell_clock2_toolbar_pane

0xe704,	// (0x0006a3bb) cell_clock2_toolbar_pane_cp01

0xe704,	// (0x0006a3bb) cell_clock2_toolbar_pane_cp02

0xe70c,	// (0x0006a3c3) cell_clock2_toolbar_pane_cp03

0xe714,	// (0x0006a3cb) list_clock2_pane

0xaa76,	// (0x0006672d) scroll_pane_cp10

0xe71c,	// (0x0006a3d3) list_single_clock2_pane_ParamLimits

0xe71c,	// (0x0006a3d3) list_single_clock2_pane

0xabb0,	// (0x00066867) list_highlight_pane_cp08

0xe729,	// (0x0006a3e0) list_single_clock2_pane_t1

0xe743,	// (0x0006a3fa) list_single_clock2_pane_t2

0x0001,

0xfb23,	// (0x0006b7da) list_single_clock2_pane_t

0x0b6d,	// (0x0005c824) bg_button_pane_cp10

0xe751,	// (0x0006a408) cell_clock2_toolbar_pane_g1

0x34d5,	// (0x0005f18c) aid_main_viewer_pane_g1_ParamLimits

0x34d5,	// (0x0005f18c) aid_main_viewer_pane_g1

0x34e3,	// (0x0005f19a) aid_main_viewer_pane_g2_ParamLimits

0x34e3,	// (0x0005f19a) aid_main_viewer_pane_g2

0x34f1,	// (0x0005f1a8) aid_main_viewer_pane_g3_ParamLimits

0x34f1,	// (0x0005f1a8) aid_main_viewer_pane_g3

0x3500,	// (0x0005f1b7) aid_main_viewer_pane_g4_ParamLimits

0x3500,	// (0x0005f1b7) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0006b174) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0006b174) aid_main_viewer_pane_g

0x3e58,	// (0x0005fb0f) main_calc_pane_ParamLimits

0x3e6c,	// (0x0005fb23) main_dialer2_pane_ParamLimits

0x0b6d,	// (0x0005c824) main_cam6_pane

0x0b6d,	// (0x0005c824) main_vid6_pane

0x55d5,	// (0x0006128c) listscroll_gen_pane_cp06_ParamLimits

0x55d5,	// (0x0006128c) listscroll_gen_pane_cp06

0x56e8,	// (0x0006139f) main_clock2_pane_t5_ParamLimits

0x56e8,	// (0x0006139f) main_clock2_pane_t5

0x5745,	// (0x000613fc) aid_call2_pane_cp10_ParamLimits

0x5757,	// (0x0006140e) aid_call_pane_cp10_ParamLimits

0xaae5,	// (0x0006679c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaae5,	// (0x0006679c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5769,	// (0x00061420) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5769,	// (0x00061420) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaae5,	// (0x0006679c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0006b4aa) popup_clock_analogue_window_cp10_g_ParamLimits

0x577f,	// (0x00061436) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5e26,	// (0x00061add) cell_dialer2_keypad_pane_g2_ParamLimits

0x5e26,	// (0x00061add) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0006b590) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0006b590) cell_dialer2_keypad_pane_g

0x5e42,	// (0x00061af9) cell_dialer2_keypad_pane_t1

0x6a08,	// (0x000626bf) main_cset_text2_pane_ParamLimits

0x6a08,	// (0x000626bf) main_cset_text2_pane

0xe57d,	// (0x0006a234) area_vitu2_query_pane_g1_ParamLimits

0x733a,	// (0x00062ff1) area_vitu2_query_pane_g2_ParamLimits

0xfa5d,	// (0x0006b714) area_vitu2_query_pane_g_ParamLimits

0x7413,	// (0x000630ca) area_vitu2_query_pane_t7_ParamLimits

0x7413,	// (0x000630ca) area_vitu2_query_pane_t7

0x7437,	// (0x000630ee) bg_button_pane_cp018_ParamLimits

0x7445,	// (0x000630fc) bg_button_pane_cp021_ParamLimits

0x7451,	// (0x00063108) bg_button_pane_cp022_ParamLimits

0x7451,	// (0x00063108) bg_vkb2_func_pane_cp08_ParamLimits

0x7437,	// (0x000630ee) bg_vkb2_func_pane_cp06_ParamLimits

0x7445,	// (0x000630fc) bg_vkb2_func_pane_cp07_ParamLimits

0x7462,	// (0x00063119) input_focus_pane_cp09_ParamLimits

0xdf23,	// (0x00069bda) cam6_autofocus_pane_ParamLimits

0xdf23,	// (0x00069bda) cam6_autofocus_pane

0x79b2,	// (0x00063669) cam6_image_uncrop_pane_ParamLimits

0x79b2,	// (0x00063669) cam6_image_uncrop_pane

0x79c1,	// (0x00063678) cam6_indi_pane_ParamLimits

0x79c1,	// (0x00063678) cam6_indi_pane

0x79d7,	// (0x0006368e) cam6_mode_pane_ParamLimits

0x79d7,	// (0x0006368e) cam6_mode_pane

0x79e9,	// (0x000636a0) cam6_timer_pane_ParamLimits

0x79e9,	// (0x000636a0) cam6_timer_pane

0x79f5,	// (0x000636ac) cam6_zoom_pane_ParamLimits

0x79f5,	// (0x000636ac) cam6_zoom_pane

0x7a03,	// (0x000636ba) cam6_mode_pane_g1_ParamLimits

0x7a03,	// (0x000636ba) cam6_mode_pane_g1

0x7a13,	// (0x000636ca) cam6_mode_pane_g2_ParamLimits

0x7a13,	// (0x000636ca) cam6_mode_pane_g2

0x7a23,	// (0x000636da) cam6_mode_pane_g3_ParamLimits

0x7a23,	// (0x000636da) cam6_mode_pane_g3

0x7a33,	// (0x000636ea) cam6_mode_pane_g4_ParamLimits

0x7a33,	// (0x000636ea) cam6_mode_pane_g4

0x0003,

0xfb28,	// (0x0006b7df) cam6_mode_pane_g_ParamLimits

0xfb28,	// (0x0006b7df) cam6_mode_pane_g

0xe328,	// (0x00069fdf) bg_tb_trans_pane_cp08_ParamLimits

0xe328,	// (0x00069fdf) bg_tb_trans_pane_cp08

0xe759,	// (0x0006a410) cam6_battery_pane_ParamLimits

0xe759,	// (0x0006a410) cam6_battery_pane

0xe76f,	// (0x0006a426) cam6_indi_pane_g1_ParamLimits

0xe76f,	// (0x0006a426) cam6_indi_pane_g1

0xe781,	// (0x0006a438) cam6_indi_pane_g2_ParamLimits

0xe781,	// (0x0006a438) cam6_indi_pane_g2

0xe793,	// (0x0006a44a) cam6_indi_pane_g3_ParamLimits

0xe793,	// (0x0006a44a) cam6_indi_pane_g3

0x0002,

0xfb31,	// (0x0006b7e8) cam6_indi_pane_g_ParamLimits

0xfb31,	// (0x0006b7e8) cam6_indi_pane_g

0xe7a5,	// (0x0006a45c) cam6_indi_pane_t1_ParamLimits

0xe7a5,	// (0x0006a45c) cam6_indi_pane_t1

0x63f9,	// (0x000620b0) cam6_autofocus_pane_g1

0x63f1,	// (0x000620a8) cam6_autofocus_pane_g2

0x6409,	// (0x000620c0) cam6_autofocus_pane_g3

0x6401,	// (0x000620b8) cam6_autofocus_pane_g4

0x0003,

0xfb38,	// (0x0006b7ef) cam6_autofocus_pane_g

0xe7cb,	// (0x0006a482) cam6_timer_pane_g1

0xe7d3,	// (0x0006a48a) cam6_timer_pane_t1

0xe7e1,	// (0x0006a498) cam6_zoom_cont_pane

0xe7e9,	// (0x0006a4a0) cam6_zoom_pane_g1

0xe7f1,	// (0x0006a4a8) cam6_zoom_pane_g2

0x7a43,	// (0x000636fa) cam6_zoom_pane_g3

0x0002,

0xfb41,	// (0x0006b7f8) cam6_zoom_pane_g

0xc552,	// (0x00068209) cam6_battery_pane_g1

0xc552,	// (0x00068209) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0006b3b7) cam6_battery_pane_g

0xe7f9,	// (0x0006a4b0) cam6_zoom_cont_pane_g1

0xe802,	// (0x0006a4b9) cam6_zoom_cont_pane_g2

0xe80b,	// (0x0006a4c2) cam6_zoom_cont_pane_g3

0x0002,

0xfb48,	// (0x0006b7ff) cam6_zoom_cont_pane_g

0x7a60,	// (0x00063717) cam6_mode_pane_cp_ParamLimits

0x7a60,	// (0x00063717) cam6_mode_pane_cp

0x7a72,	// (0x00063729) cam6_zoom_pane_cp_ParamLimits

0x7a72,	// (0x00063729) cam6_zoom_pane_cp

0x7a80,	// (0x00063737) vid6_image_uncrop_cif_pane_ParamLimits

0x7a80,	// (0x00063737) vid6_image_uncrop_cif_pane

0x7a90,	// (0x00063747) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a90,	// (0x00063747) vid6_image_uncrop_nhd_pane

0x7a9f,	// (0x00063756) vid6_image_uncrop_vga_pane_ParamLimits

0x7a9f,	// (0x00063756) vid6_image_uncrop_vga_pane

0x7aae,	// (0x00063765) vid6_image_uncrop_wvga_pane_ParamLimits

0x7aae,	// (0x00063765) vid6_image_uncrop_wvga_pane

0x7abd,	// (0x00063774) vid6_indi_pane_ParamLimits

0x7abd,	// (0x00063774) vid6_indi_pane

0xe328,	// (0x00069fdf) bg_tb_trans_pane_cp09_ParamLimits

0xe328,	// (0x00069fdf) bg_tb_trans_pane_cp09

0xe823,	// (0x0006a4da) cam6_battery_pane_cp_ParamLimits

0xe823,	// (0x0006a4da) cam6_battery_pane_cp

0xe82f,	// (0x0006a4e6) vid6_indi_pane_g1_ParamLimits

0xe82f,	// (0x0006a4e6) vid6_indi_pane_g1

0xe841,	// (0x0006a4f8) vid6_indi_pane_g2_ParamLimits

0xe841,	// (0x0006a4f8) vid6_indi_pane_g2

0xe853,	// (0x0006a50a) vid6_indi_pane_g3_ParamLimits

0xe853,	// (0x0006a50a) vid6_indi_pane_g3

0xe86a,	// (0x0006a521) vid6_indi_pane_g4_ParamLimits

0xe86a,	// (0x0006a521) vid6_indi_pane_g4

0xe881,	// (0x0006a538) vid6_indi_pane_g5_ParamLimits

0xe881,	// (0x0006a538) vid6_indi_pane_g5

0x0004,

0xfb4f,	// (0x0006b806) vid6_indi_pane_g_ParamLimits

0xfb4f,	// (0x0006b806) vid6_indi_pane_g

0xe89b,	// (0x0006a552) vid6_indi_pane_t1_ParamLimits

0xe89b,	// (0x0006a552) vid6_indi_pane_t1

0xe8b1,	// (0x0006a568) vid6_indi_pane_t2_ParamLimits

0xe8b1,	// (0x0006a568) vid6_indi_pane_t2

0xe8d9,	// (0x0006a590) vid6_indi_pane_t3_ParamLimits

0xe8d9,	// (0x0006a590) vid6_indi_pane_t3

0xe901,	// (0x0006a5b8) vid6_indi_pane_t4_ParamLimits

0xe901,	// (0x0006a5b8) vid6_indi_pane_t4

0x0003,

0xfb5a,	// (0x0006b811) vid6_indi_pane_t_ParamLimits

0xfb5a,	// (0x0006b811) vid6_indi_pane_t

0xe925,	// (0x0006a5dc) wait_bar_pane_cp08

0x7ad5,	// (0x0006378c) main_cset_text2_pane_t1_ParamLimits

0x7ad5,	// (0x0006378c) main_cset_text2_pane_t1

0x7a4b,	// (0x00063702) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a4b,	// (0x00063702) listscroll_gen_pane_cp06_t1

0x0b6d,	// (0x0005c824) main_cam6_set_pane

0xdd77,	// (0x00069a2e) bg_tb_trans_pane_cp06_ParamLimits

0xdd8d,	// (0x00069a44) cam4_indicators_pane_g1_ParamLimits

0xdd9a,	// (0x00069a51) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0006b5cd) cam4_indicators_pane_g_ParamLimits

0xddba,	// (0x00069a71) cam4_indicators_pane_t1_ParamLimits

0xddde,	// (0x00069a95) bg_tb_trans_pane_cp07_ParamLimits

0x63a0,	// (0x00062057) vid4_indicators_pane_g1_ParamLimits

0x63ad,	// (0x00062064) vid4_indicators_pane_g2_ParamLimits

0x63ba,	// (0x00062071) vid4_indicators_pane_g3_ParamLimits

0x63c7,	// (0x0006207e) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0006b5df) vid4_indicators_pane_g_ParamLimits

0x63df,	// (0x00062096) vid4_indicators_pane_t1_ParamLimits

0xde8b,	// (0x00069b42) vid4_progress_pane_g1_ParamLimits

0xde97,	// (0x00069b4e) vid4_progress_pane_g2_ParamLimits

0xdea3,	// (0x00069b5a) vid4_progress_pane_g3_ParamLimits

0xdeb2,	// (0x00069b69) vid4_progress_pane_g4_ParamLimits

0xfa95,	// (0x0006b74c) vid4_progress_pane_g_ParamLimits

0xded0,	// (0x00069b87) vid4_progress_pane_t1_ParamLimits

0xdee6,	// (0x00069b9d) vid4_progress_pane_t2_ParamLimits

0xdefc,	// (0x00069bb3) vid4_progress_pane_t3_ParamLimits

0xfaa0,	// (0x0006b757) vid4_progress_pane_t_ParamLimits

0xdf11,	// (0x00069bc8) wait_bar_pane_cp07_ParamLimits

0x7af6,	// (0x000637ad) main_cam6_set_pane_g2_ParamLimits

0x7af6,	// (0x000637ad) main_cam6_set_pane_g2

0x7b1c,	// (0x000637d3) main_cset6_listscroll_pane_ParamLimits

0x7b1c,	// (0x000637d3) main_cset6_listscroll_pane

0x7b3a,	// (0x000637f1) main_cset6_slider_pane_ParamLimits

0x7b3a,	// (0x000637f1) main_cset6_slider_pane

0x7b50,	// (0x00063807) main_cset6_text2_pane_ParamLimits

0x7b50,	// (0x00063807) main_cset6_text2_pane

0xe934,	// (0x0006a5eb) main_cset6_text_pane

0xe93c,	// (0x0006a5f3) main_cset_list_pane_copy1_ParamLimits

0xe93c,	// (0x0006a5f3) main_cset_list_pane_copy1

0xe94c,	// (0x0006a603) scroll_pane_cp028_copy1

0x7b5e,	// (0x00063815) cset_list_set_pane_copy1

0x7b72,	// (0x00063829) aid_position_infowindow_above_copy1

0x7b7a,	// (0x00063831) aid_position_infowindow_below_copy1

0x7b82,	// (0x00063839) cset_list_set_pane_g1_copy1

0x7b8a,	// (0x00063841) cset_list_set_pane_g3_copy1_ParamLimits

0x7b8a,	// (0x00063841) cset_list_set_pane_g3_copy1

0x7b99,	// (0x00063850) cset_list_set_pane_t1_copy1_ParamLimits

0x7b99,	// (0x00063850) cset_list_set_pane_t1_copy1

0x0df0,	// (0x0005caa7) list_highlight_pane_cp021_copy1_ParamLimits

0x0df0,	// (0x0005caa7) list_highlight_pane_cp021_copy1

0xe955,	// (0x0006a60c) cset6_slider_pane_ParamLimits

0xe955,	// (0x0006a60c) cset6_slider_pane

0xe981,	// (0x0006a638) main_cset6_slider_pane_g1_ParamLimits

0xe981,	// (0x0006a638) main_cset6_slider_pane_g1

0x7bae,	// (0x00063865) main_cset6_slider_pane_g2_ParamLimits

0x7bae,	// (0x00063865) main_cset6_slider_pane_g2

0xe9a9,	// (0x0006a660) main_cset6_slider_pane_g3_ParamLimits

0xe9a9,	// (0x0006a660) main_cset6_slider_pane_g3

0x7bd6,	// (0x0006388d) main_cset6_slider_pane_g4_ParamLimits

0x7bd6,	// (0x0006388d) main_cset6_slider_pane_g4

0x7be2,	// (0x00063899) main_cset6_slider_pane_g5_ParamLimits

0x7be2,	// (0x00063899) main_cset6_slider_pane_g5

0xe234,	// (0x00069eeb) main_cset6_slider_pane_g7_ParamLimits

0xe234,	// (0x00069eeb) main_cset6_slider_pane_g7

0xe240,	// (0x00069ef7) main_cset6_slider_pane_g8_ParamLimits

0xe240,	// (0x00069ef7) main_cset6_slider_pane_g8

0x6ab7,	// (0x0006276e) main_cset6_slider_pane_g9_ParamLimits

0x6ab7,	// (0x0006276e) main_cset6_slider_pane_g9

0x6ac3,	// (0x0006277a) main_cset6_slider_pane_g10_ParamLimits

0x6ac3,	// (0x0006277a) main_cset6_slider_pane_g10

0x6acf,	// (0x00062786) main_cset6_slider_pane_g11_ParamLimits

0x6acf,	// (0x00062786) main_cset6_slider_pane_g11

0x6adb,	// (0x00062792) main_cset6_slider_pane_g12_ParamLimits

0x6adb,	// (0x00062792) main_cset6_slider_pane_g12

0x6ae7,	// (0x0006279e) main_cset6_slider_pane_g13_ParamLimits

0x6ae7,	// (0x0006279e) main_cset6_slider_pane_g13

0x6af3,	// (0x000627aa) main_cset6_slider_pane_g14_ParamLimits

0x6af3,	// (0x000627aa) main_cset6_slider_pane_g14

0x7bf0,	// (0x000638a7) main_cset6_slider_pane_g15_ParamLimits

0x7bf0,	// (0x000638a7) main_cset6_slider_pane_g15

0x6b17,	// (0x000627ce) main_cset6_slider_pane_g16_ParamLimits

0x6b17,	// (0x000627ce) main_cset6_slider_pane_g16

0x6b25,	// (0x000627dc) main_cset6_slider_pane_g17_ParamLimits

0x6b25,	// (0x000627dc) main_cset6_slider_pane_g17

0x0011,

0xfb63,	// (0x0006b81a) main_cset6_slider_pane_g_ParamLimits

0xfb63,	// (0x0006b81a) main_cset6_slider_pane_g

0xe9b5,	// (0x0006a66c) main_cset6_slider_pane_t1_ParamLimits

0xe9b5,	// (0x0006a66c) main_cset6_slider_pane_t1

0x7c20,	// (0x000638d7) main_cset6_slider_pane_t2_ParamLimits

0x7c20,	// (0x000638d7) main_cset6_slider_pane_t2

0x7c4b,	// (0x00063902) main_cset6_slider_pane_t3_ParamLimits

0x7c4b,	// (0x00063902) main_cset6_slider_pane_t3

0x7c76,	// (0x0006392d) main_cset6_slider_pane_t4_ParamLimits

0x7c76,	// (0x0006392d) main_cset6_slider_pane_t4

0x7ca3,	// (0x0006395a) main_cset6_slider_pane_t5_ParamLimits

0x7ca3,	// (0x0006395a) main_cset6_slider_pane_t5

0xe9f6,	// (0x0006a6ad) main_cset6_slider_pane_t7_ParamLimits

0xe9f6,	// (0x0006a6ad) main_cset6_slider_pane_t7

0x7cd0,	// (0x00063987) main_cset6_slider_pane_t8_ParamLimits

0x7cd0,	// (0x00063987) main_cset6_slider_pane_t8

0x7cf4,	// (0x000639ab) main_cset6_slider_pane_t9_ParamLimits

0x7cf4,	// (0x000639ab) main_cset6_slider_pane_t9

0x7d18,	// (0x000639cf) main_cset6_slider_pane_t10_ParamLimits

0x7d18,	// (0x000639cf) main_cset6_slider_pane_t10

0x7d3c,	// (0x000639f3) main_cset6_slider_pane_t11_ParamLimits

0x7d3c,	// (0x000639f3) main_cset6_slider_pane_t11

0xea2c,	// (0x0006a6e3) main_cset6_slider_pane_t14_ParamLimits

0xea2c,	// (0x0006a6e3) main_cset6_slider_pane_t14

0xea65,	// (0x0006a71c) main_cset6_slider_pane_t15_ParamLimits

0xea65,	// (0x0006a71c) main_cset6_slider_pane_t15

0x000b,

0xfb88,	// (0x0006b83f) main_cset6_slider_pane_t_ParamLimits

0xfb88,	// (0x0006b83f) main_cset6_slider_pane_t

0xea9e,	// (0x0006a755) cset_slider_pane_g1_copy1

0xeaa7,	// (0x0006a75e) cset_slider_pane_g2_copy1

0xeab0,	// (0x0006a767) cset_slider_pane_g3_copy1

0x0b6d,	// (0x0005c824) bg_popup_sub_pane_cp011_copy1

0xe39d,	// (0x0006a054) main_cset_text_pane_g1_copy1

0xe3a5,	// (0x0006a05c) main_cset_text_pane_t1_copy1

0xe3b3,	// (0x0006a06a) main_cset_text_pane_t2_copy1

0xe3c1,	// (0x0006a078) main_cset_text_pane_t3_copy1

0xe3cf,	// (0x0006a086) main_cset_text_pane_t4_copy1

0xe3dd,	// (0x0006a094) main_cset_text_pane_t5_copy1

0xe3eb,	// (0x0006a0a2) main_cset_text_pane_t6_copy1

0xe3f9,	// (0x0006a0b0) main_cset_text_pane_t7_copy1

0x7ad5,	// (0x0006378c) main_cset_text2_pane_t1_copy1

0x0b6d,	// (0x0005c824) main_ncimui_pane

0x40fa,	// (0x0005fdb1) popup_query_ncimui_window_ParamLimits

0x40fa,	// (0x0005fdb1) popup_query_ncimui_window

0x4dde,	// (0x00060a95) field_cale_ev2_pane_g4_ParamLimits

0x4dde,	// (0x00060a95) field_cale_ev2_pane_g4

0x5cf1,	// (0x000619a8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cf1,	// (0x000619a8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0006b56b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0006b56b) cell_video_dialer_keypad_pane_g

0x5d09,	// (0x000619c0) cell_video_dialer_keypad_pane_t1

0x0b6d,	// (0x0005c824) bg_popup_window_pane_cp012

0xa962,	// (0x00066619) heading_pane_cp06

0xead7,	// (0x0006a78e) ncim_query_content_pane

0x0b6d,	// (0x0005c824) bg_popup_heading_pane_cp01

0xeadf,	// (0x0006a796) ncim_heading_pane_t1

0xeaed,	// (0x0006a7a4) ncim_indicator_popup_pane

0xeaff,	// (0x0006a7b6) ncim_query_button_pane

0xeb15,	// (0x0006a7cc) ncim_query_content_pane_t1

0xeb27,	// (0x0006a7de) ncim_query_content_pane_t2

0x0005,

0xfbc7,	// (0x0006b87e) ncim_query_content_pane_t

0xeb75,	// (0x0006a82c) ncim_query_list_pane

0xeb87,	// (0x0006a83e) ncim_query_popup_pane

0xeaed,	// (0x0006a7a4) ncim_indicator_popup_pane_ParamLimits

0x7e67,	// (0x00063b1e) ncim_query_content_pane_g1_ParamLimits

0x7e67,	// (0x00063b1e) ncim_query_content_pane_g1

0xeb15,	// (0x0006a7cc) ncim_query_content_pane_t1_ParamLimits

0xeb27,	// (0x0006a7de) ncim_query_content_pane_t2_ParamLimits

0x7e73,	// (0x00063b2a) ncim_query_content_pane_t3_ParamLimits

0x7e73,	// (0x00063b2a) ncim_query_content_pane_t3

0x7e9b,	// (0x00063b52) ncim_query_content_pane_t4_ParamLimits

0x7e9b,	// (0x00063b52) ncim_query_content_pane_t4

0x7ec3,	// (0x00063b7a) ncim_query_content_pane_t5_ParamLimits

0x7ec3,	// (0x00063b7a) ncim_query_content_pane_t5

0xeb4d,	// (0x0006a804) ncim_query_content_pane_t6_ParamLimits

0xeb4d,	// (0x0006a804) ncim_query_content_pane_t6

0xfbc7,	// (0x0006b87e) ncim_query_content_pane_t_ParamLimits

0xeb75,	// (0x0006a82c) ncim_query_list_pane_ParamLimits

0xeb87,	// (0x0006a83e) ncim_query_popup_pane_ParamLimits

0xeb9b,	// (0x0006a852) wait_bar_pane_cp04

0x0b6d,	// (0x0005c824) input_focus_pane_cp011

0xeba3,	// (0x0006a85a) ncim_query_popup_pane_t1

0xebb1,	// (0x0006a868) ncim_list_query_list_pane_ParamLimits

0xebb1,	// (0x0006a868) ncim_list_query_list_pane

0x0b6d,	// (0x0005c824) bg_button_pane_cp027

0xebc4,	// (0x0006a87b) ncim_query_button_pane_g1

0x0b6d,	// (0x0005c824) list_highlight_pane_cp012

0xebce,	// (0x0006a885) ncim_list_query_list_pane_g1

0xebd6,	// (0x0006a88d) ncim_list_query_list_pane_t1

0xddaa,	// (0x00069a61) cam4_indicators_pane_g3_ParamLimits

0xddaa,	// (0x00069a61) cam4_indicators_pane_g3

0x63d3,	// (0x0006208a) vid4_indicators_pane_g5_ParamLimits

0x63d3,	// (0x0006208a) vid4_indicators_pane_g5

0xdec1,	// (0x00069b78) vid4_progress_pane_g5_ParamLimits

0xdec1,	// (0x00069b78) vid4_progress_pane_g5

0x7d80,	// (0x00063a37) main_ncimui_pane_g1

0x7dd6,	// (0x00063a8d) ncimui_group_query_pane_ParamLimits

0x7dd6,	// (0x00063a8d) ncimui_group_query_pane

0x7e12,	// (0x00063ac9) ncimui_list_pane_ParamLimits

0x7e12,	// (0x00063ac9) ncimui_list_pane

0x7e33,	// (0x00063aea) ncimui_text_pane_ParamLimits

0x7e33,	// (0x00063aea) ncimui_text_pane

0x7eeb,	// (0x00063ba2) ncimui_text_pane_t1_ParamLimits

0x7eeb,	// (0x00063ba2) ncimui_text_pane_t1

0xebe4,	// (0x0006a89b) ncimui_list_single_graphic_pane_ParamLimits

0xebe4,	// (0x0006a89b) ncimui_list_single_graphic_pane

0x7f09,	// (0x00063bc0) ncimui_query_pane_ParamLimits

0x7f09,	// (0x00063bc0) ncimui_query_pane

0x0b6d,	// (0x0005c824) list_highlight_pane_cp013

0xebf4,	// (0x0006a8ab) ncim_list_query_list_pane_t1_copy1

0xebce,	// (0x0006a885) ncim_list_single_graphic_pane_g1

0xec02,	// (0x0006a8b9) ncim_query_button_pane_cp01

0xec0e,	// (0x0006a8c5) ncim_query_entry_pane_ParamLimits

0xec0e,	// (0x0006a8c5) ncim_query_entry_pane

0xec21,	// (0x0006a8d8) ncimui_query_pane_g1

0xec2d,	// (0x0006a8e4) ncimui_query_pane_t1_ParamLimits

0xec2d,	// (0x0006a8e4) ncimui_query_pane_t1

0x0df0,	// (0x0005caa7) input_focus_pane_cp012

0xec46,	// (0x0006a8fd) ncim_query_entry_pane_t1

0x9fe1,	// (0x00065c98) main_im_pane_ParamLimits

0x0df0,	// (0x0005caa7) main_mobtv_pane_ParamLimits

0x0df0,	// (0x0005caa7) main_mobtv_pane

0x7c08,	// (0x000638bf) main_cset6_slider_pane_g18_ParamLimits

0x7c08,	// (0x000638bf) main_cset6_slider_pane_g18

0x7c14,	// (0x000638cb) main_cset6_slider_pane_g19_ParamLimits

0x7c14,	// (0x000638cb) main_cset6_slider_pane_g19

0x7f1c,	// (0x00063bd3) bg_main_mobtv_pane_ParamLimits

0x7f1c,	// (0x00063bd3) bg_main_mobtv_pane

0x7f2a,	// (0x00063be1) main_mobtv_info_pane

0x7f35,	// (0x00063bec) main_mobtv_loading_pane_ParamLimits

0x7f35,	// (0x00063bec) main_mobtv_loading_pane

0xec58,	// (0x0006a90f) main_mobtv_pg_channel_list_pane

0xec62,	// (0x0006a919) main_mobtv_pg_hdr_pane

0x7f42,	// (0x00063bf9) main_mobtv_programe_curr_pane_ParamLimits

0x7f42,	// (0x00063bf9) main_mobtv_programe_curr_pane

0x7f4f,	// (0x00063c06) main_mobtv_programe_next_pane_ParamLimits

0x7f4f,	// (0x00063c06) main_mobtv_programe_next_pane

0xec6b,	// (0x0006a922) popup_mobtv_noti_window

0xc552,	// (0x00068209) main_tv_pg_hdr_pane_g1

0xec75,	// (0x0006a92c) main_tv_pg_hdr_pane_g2

0xec7d,	// (0x0006a934) main_tv_pg_hdr_pane_g3

0xec85,	// (0x0006a93c) main_tv_pg_hdr_pane_g4

0xec8d,	// (0x0006a944) main_tv_pg_hdr_pane_g5

0xec97,	// (0x0006a94e) main_tv_pg_hdr_pane_g6

0xeca1,	// (0x0006a958) main_tv_pg_hdr_pane_g7

0xecab,	// (0x0006a962) main_tv_pg_hdr_pane_g8

0xecb5,	// (0x0006a96c) main_tv_pg_hdr_pane_g9

0xecbf,	// (0x0006a976) main_tv_pg_hdr_pane_g10

0xecc9,	// (0x0006a980) main_tv_pg_hdr_pane_g11

0x000a,

0xfbd4,	// (0x0006b88b) main_tv_pg_hdr_pane_g

0xecd3,	// (0x0006a98a) main_tv_pg_hdr_pane_t1

0xece1,	// (0x0006a998) main_tv_pg_hdr_pane_t2

0xecef,	// (0x0006a9a6) main_tv_pg_hdr_pane_t3

0xecff,	// (0x0006a9b6) main_tv_pg_hdr_pane_t4

0xed0f,	// (0x0006a9c6) main_tv_pg_hdr_pane_t5

0x0004,

0xfbeb,	// (0x0006b8a2) main_tv_pg_hdr_pane_t

0xed1f,	// (0x0006a9d6) single_mobtv_pg_channel_pane_ParamLimits

0xed1f,	// (0x0006a9d6) single_mobtv_pg_channel_pane

0xed31,	// (0x0006a9e8) single_mobtv_pg_channel_table_pane

0xed3a,	// (0x0006a9f1) single_mobtv_pg_channel_thumb_pane

0xed43,	// (0x0006a9fa) single_tv_pg_channel_pane_g1

0xed4c,	// (0x0006aa03) single_tv_pg_channel_pane_g2

0x0001,

0xfbf6,	// (0x0006b8ad) single_tv_pg_channel_pane_g

0xc782,	// (0x00068439) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc782,	// (0x00068439) bg_single_mobtv_pg_channel_thumb_pane

0xed55,	// (0x0006aa0c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xed55,	// (0x0006aa0c) single_mobtv_pg_channel_thumb_pane_g1

0xed63,	// (0x0006aa1a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xed63,	// (0x0006aa1a) single_mobtv_pg_channel_thumb_pane_g2

0xed6f,	// (0x0006aa26) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xed6f,	// (0x0006aa26) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbfb,	// (0x0006b8b2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbfb,	// (0x0006b8b2) single_mobtv_pg_channel_thumb_pane_g

0xed7b,	// (0x0006aa32) single_mobtv_pg_channel_thumb_pane_t1

0xed89,	// (0x0006aa40) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc02,	// (0x0006b8b9) single_mobtv_pg_channel_thumb_pane_t

0xc552,	// (0x00068209) bg_single_mobtv_pg_channel_table_pane_g1

0xc552,	// (0x00068209) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0006b3b7) bg_single_mobtv_pg_channel_table_pane_g

0xed97,	// (0x0006aa4e) single_mobtv_pg_channel_table_pane_t1

0xeda5,	// (0x0006aa5c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc07,	// (0x0006b8be) single_mobtv_pg_channel_table_pane_t

0x7f64,	// (0x00063c1b) main_mobtv_info_pane_g1_ParamLimits

0x7f64,	// (0x00063c1b) main_mobtv_info_pane_g1

0x7f82,	// (0x00063c39) main_mobtv_info_pane_t1_ParamLimits

0x7f82,	// (0x00063c39) main_mobtv_info_pane_t1

0x7ffa,	// (0x00063cb1) main_mobtv_info_pane_t2_ParamLimits

0x7ffa,	// (0x00063cb1) main_mobtv_info_pane_t2

0x0002,

0xfc11,	// (0x0006b8c8) main_mobtv_info_pane_t_ParamLimits

0xfc11,	// (0x0006b8c8) main_mobtv_info_pane_t

0x808b,	// (0x00063d42) wait_bar_pane_cp05

0x809d,	// (0x00063d54) main_mobtv_loading_pane_g1_ParamLimits

0x809d,	// (0x00063d54) main_mobtv_loading_pane_g1

0x80ae,	// (0x00063d65) main_mobtv_loading_pane_g2_ParamLimits

0x80ae,	// (0x00063d65) main_mobtv_loading_pane_g2

0x80ba,	// (0x00063d71) main_mobtv_loading_pane_g3_ParamLimits

0x80ba,	// (0x00063d71) main_mobtv_loading_pane_g3

0x0002,

0xfc18,	// (0x0006b8cf) main_mobtv_loading_pane_g_ParamLimits

0xfc18,	// (0x0006b8cf) main_mobtv_loading_pane_g

0xedb3,	// (0x0006aa6a) main_mobtv_loading_pane_t1_ParamLimits

0xedb3,	// (0x0006aa6a) main_mobtv_loading_pane_t1

0xedcb,	// (0x0006aa82) main_mobtv_loading_pane_t2_ParamLimits

0xedcb,	// (0x0006aa82) main_mobtv_loading_pane_t2

0x0001,

0x077f,	// (0x0005c436) main_mobtv_loading_pane_t_ParamLimits

0x077f,	// (0x0005c436) main_mobtv_loading_pane_t

0x80cd,	// (0x00063d84) wait_bar_pane_cp06_ParamLimits

0x80cd,	// (0x00063d84) wait_bar_pane_cp06

0xedef,	// (0x0006aaa6) main_mobtv_programe_curr_pane_t1

0xedfd,	// (0x0006aab4) main_mobtv_programe_curr_pane_t2

0x0001,

0x0784,	// (0x0005c43b) main_mobtv_programe_curr_pane_t

0xee0b,	// (0x0006aac2) main_mobtv_programe_next_pane_t1

0xee19,	// (0x0006aad0) main_mobtv_programe_next_pane_t2

0xee27,	// (0x0006aade) main_mobtv_programe_next_pane_t3

0x0002,

0x0789,	// (0x0005c440) main_mobtv_programe_next_pane_t

0x0b6d,	// (0x0005c824) bg_popup_mobtv_noti_window_pane

0xee35,	// (0x0006aaec) popup_mobtv_noti_window_g1

0xee3d,	// (0x0006aaf4) popup_mobtv_noti_window_t1

0xee4b,	// (0x0006ab02) popup_mobtv_noti_window_t2

0x0001,

0x0790,	// (0x0005c447) popup_mobtv_noti_window_t

0xc552,	// (0x00068209) bg_popup_mobtv_noti_window_pane_g1

0x0b6d,	// (0x0005c824) sc_clock_pane

0x0b6d,	// (0x0005c824) main_fs_bigclock_pane

0x7829,	// (0x000634e0) blid2_tripm_pane_t4_ParamLimits

0x7829,	// (0x000634e0) blid2_tripm_pane_t4

0x80dc,	// (0x00063d93) sc_clock_pane_g1_ParamLimits

0x80dc,	// (0x00063d93) sc_clock_pane_g1

0x80ee,	// (0x00063da5) sc_clock_pane_t1_ParamLimits

0x80ee,	// (0x00063da5) sc_clock_pane_t1

0x8112,	// (0x00063dc9) sc_clock_pane_t2_ParamLimits

0x8112,	// (0x00063dc9) sc_clock_pane_t2

0x812a,	// (0x00063de1) sc_clock_pane_t3_ParamLimits

0x812a,	// (0x00063de1) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x0006b8d6) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x0006b8d6) sc_clock_pane_t

0x9073,	// (0x00064d2a) main_fs_bigclock_indicator_pane_ParamLimits

0x9073,	// (0x00064d2a) main_fs_bigclock_indicator_pane

0xc752,	// (0x00068409) main_fs_bigclock_pane_g1_ParamLimits

0xc752,	// (0x00068409) main_fs_bigclock_pane_g1

0x907f,	// (0x00064d36) main_fs_bigclock_pane_t1_ParamLimits

0x907f,	// (0x00064d36) main_fs_bigclock_pane_t1

0x9091,	// (0x00064d48) main_fs_bigclock_pane_t2_ParamLimits

0x9091,	// (0x00064d48) main_fs_bigclock_pane_t2

0x90a5,	// (0x00064d5c) main_fs_bigclock_pane_t3_ParamLimits

0x90a5,	// (0x00064d5c) main_fs_bigclock_pane_t3

0x0002,

0xfe15,	// (0x0006bacc) main_fs_bigclock_pane_t_ParamLimits

0xfe15,	// (0x0006bacc) main_fs_bigclock_pane_t

0xd6e6,	// (0x0006939d) main_fs_bigclock_indicator_pane_g1

0xeb07,	// (0x0006a7be) ncim_query_content_pane_g2_ParamLimits

0xeb07,	// (0x0006a7be) ncim_query_content_pane_g2

0x0001,

0xfbc2,	// (0x0006b879) ncim_query_content_pane_g_ParamLimits

0xfbc2,	// (0x0006b879) ncim_query_content_pane_g

0x8141,	// (0x00063df8) sc_clock_pane_t4_ParamLimits

0x8141,	// (0x00063df8) sc_clock_pane_t4

0x0df0,	// (0x0005caa7) main_radioblah_pane

0xe04c,	// (0x00069d03) cell_call4_button_pane_t1_copy1_ParamLimits

0xe04c,	// (0x00069d03) cell_call4_button_pane_t1_copy1

0x7d88,	// (0x00063a3f) main_ncimui_pane_t1_ParamLimits

0x7d88,	// (0x00063a3f) main_ncimui_pane_t1

0x7da2,	// (0x00063a59) main_ncimui_pane_t2_ParamLimits

0x7da2,	// (0x00063a59) main_ncimui_pane_t2

0x0002,

0xfbbb,	// (0x0006b872) main_ncimui_pane_t_ParamLimits

0xfbbb,	// (0x0006b872) main_ncimui_pane_t

0xee59,	// (0x0006ab10) main_radioblah_anim_pane_ParamLimits

0xee59,	// (0x0006ab10) main_radioblah_anim_pane

0xee6a,	// (0x0006ab21) main_radioblah_info_pane_ParamLimits

0xee6a,	// (0x0006ab21) main_radioblah_info_pane

0xee7e,	// (0x0006ab35) main_radioblah_pane_t1_ParamLimits

0xee7e,	// (0x0006ab35) main_radioblah_pane_t1

0xee9a,	// (0x0006ab51) main_radioblah_pane_t2_ParamLimits

0xee9a,	// (0x0006ab51) main_radioblah_pane_t2

0x0003,

0x07b6,	// (0x0005c46d) main_radioblah_pane_t_ParamLimits

0x07b6,	// (0x0005c46d) main_radioblah_pane_t

0x831a,	// (0x00063fd1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x831a,	// (0x00063fd1) main_radioblah_rocker_ctrl_pane

0xeee2,	// (0x0006ab99) main_radioblah_info_pane_t1_ParamLimits

0xeee2,	// (0x0006ab99) main_radioblah_info_pane_t1

0x8372,	// (0x00064029) main_radioblah_info_pane_t2_ParamLimits

0x8372,	// (0x00064029) main_radioblah_info_pane_t2

0x0003,

0xfc40,	// (0x0006b8f7) main_radioblah_info_pane_t_ParamLimits

0xfc40,	// (0x0006b8f7) main_radioblah_info_pane_t

0xc552,	// (0x00068209) main_radioblah_rocker_ctrl_pane_g1

0x8422,	// (0x000640d9) main_radioblah_rocker_ctrl_pane_g2

0x842a,	// (0x000640e1) main_radioblah_rocker_ctrl_pane_g3

0x8432,	// (0x000640e9) main_radioblah_rocker_ctrl_pane_g4

0x843a,	// (0x000640f1) main_radioblah_rocker_ctrl_pane_g5

0x8442,	// (0x000640f9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc49,	// (0x0006b900) main_radioblah_rocker_ctrl_pane_g

0x7ad5,	// (0x0006378c) main_cset_text2_pane_t1_copy1_ParamLimits

0xdd6d,	// (0x00069a24) cam4_image_uncrop_qvga_pane

0xddd4,	// (0x00069a8b) vid4_image_uncrop_qcif_pane

0xdf23,	// (0x00069bda) cam6_image_uncrop_qvga_pane_ParamLimits

0xdf23,	// (0x00069bda) cam6_image_uncrop_qvga_pane

0xe813,	// (0x0006a4ca) vid6_image_uncrop_qcif_pane_ParamLimits

0xe813,	// (0x0006a4ca) vid6_image_uncrop_qcif_pane

0x0b6d,	// (0x0005c824) bg_popup_preview_window_pane_cp03

0xeab9,	// (0x0006a770) list_cset_text2_pane

0xeac1,	// (0x0006a778) main_cset6_text2_pane_g1

0xeac9,	// (0x0006a780) main_cset6_text2_pane_t1

0xef45,	// (0x0006abfc) list_cset_text2_pane_t1_ParamLimits

0xef45,	// (0x0006abfc) list_cset_text2_pane_t1

0x0df0,	// (0x0005caa7) main_radioblah_pane_ParamLimits

0x8077,	// (0x00063d2e) main_mobtv_info_pane_t3_ParamLimits

0x8077,	// (0x00063d2e) main_mobtv_info_pane_t3

0x8308,	// (0x00063fbf) main_radioblah_pane_g1

0x8342,	// (0x00063ff9) main_radioblah_info_pane_g1

0x83c7,	// (0x0006407e) main_radioblah_info_pane_t3_ParamLimits

0x83c7,	// (0x0006407e) main_radioblah_info_pane_t3

0x2863,	// (0x0005e51a) highlight_cell_cale_month_pane_ParamLimits

0x2863,	// (0x0005e51a) highlight_cell_cale_month_pane

0x0b6d,	// (0x0005c824) main_phob_fisheye_pane

0xc864,	// (0x0006851b) scroll_pane_cp0031_ParamLimits

0xc864,	// (0x0006851b) scroll_pane_cp0031

0xe925,	// (0x0006a5dc) wait_bar_pane_cp08_ParamLimits

0x7b5e,	// (0x00063815) cset_list_set_pane_copy1_ParamLimits

0xef1c,	// (0x0006abd3) highlight_cell_cale_month_pane_g1

0x844a,	// (0x00064101) highlight_cell_cale_month_pane_t1

0xe5d1,	// (0x0006a288) list_gen_pane_cp01

0xe21f,	// (0x00069ed6) scroll_pane_01

0x8458,	// (0x0006410f) list_single_double_fisheye_pane

0x8461,	// (0x00064118) list_double_fisheye_pane_g1_ParamLimits

0x8461,	// (0x00064118) list_double_fisheye_pane_g1

0x846d,	// (0x00064124) list_double_fisheye_pane_g2_ParamLimits

0x846d,	// (0x00064124) list_double_fisheye_pane_g2

0x8481,	// (0x00064138) list_double_fisheye_pane_g3_ParamLimits

0x8481,	// (0x00064138) list_double_fisheye_pane_g3

0x0004,

0xfc56,	// (0x0006b90d) list_double_fisheye_pane_g_ParamLimits

0xfc56,	// (0x0006b90d) list_double_fisheye_pane_g

0x84aa,	// (0x00064161) list_double_fisheye_pane_t1_ParamLimits

0x84aa,	// (0x00064161) list_double_fisheye_pane_t1

0x84c5,	// (0x0006417c) list_double_fisheye_pane_t2_ParamLimits

0x84c5,	// (0x0006417c) list_double_fisheye_pane_t2

0x0001,

0xfc61,	// (0x0006b918) list_double_fisheye_pane_t_ParamLimits

0xfc61,	// (0x0006b918) list_double_fisheye_pane_t

0x0b6d,	// (0x0005c824) main_call5_pane

0x816c,	// (0x00063e23) sc_swipe_pane_ParamLimits

0x816c,	// (0x00063e23) sc_swipe_pane

0x84fa,	// (0x000641b1) call5_image_pane_ParamLimits

0x84fa,	// (0x000641b1) call5_image_pane

0x8517,	// (0x000641ce) call5_swipe_1_pane_ParamLimits

0x8517,	// (0x000641ce) call5_swipe_1_pane

0x852a,	// (0x000641e1) call5_swipe_2_pane_ParamLimits

0x852a,	// (0x000641e1) call5_swipe_2_pane

0x8557,	// (0x0006420e) popup_call5_audio_first_window_ParamLimits

0x8557,	// (0x0006420e) popup_call5_audio_first_window

0xc782,	// (0x00068439) call5_swipe_1_pane_g1_ParamLimits

0xc782,	// (0x00068439) call5_swipe_1_pane_g1

0xef24,	// (0x0006abdb) call5_swipe_1_pane_g2_ParamLimits

0xef24,	// (0x0006abdb) call5_swipe_1_pane_g2

0x0001,

0xfc66,	// (0x0006b91d) call5_swipe_1_pane_g_ParamLimits

0xfc66,	// (0x0006b91d) call5_swipe_1_pane_g

0xef30,	// (0x0006abe7) call5_swipe_1_pane_t1_ParamLimits

0xef30,	// (0x0006abe7) call5_swipe_1_pane_t1

0xc782,	// (0x00068439) call5_swipe_2_pane_g1_ParamLimits

0xc782,	// (0x00068439) call5_swipe_2_pane_g1

0xef5f,	// (0x0006ac16) call5_swipe_2_pane_g2_ParamLimits

0xef5f,	// (0x0006ac16) call5_swipe_2_pane_g2

0x0001,

0xfc6b,	// (0x0006b922) call5_swipe_2_pane_g_ParamLimits

0xfc6b,	// (0x0006b922) call5_swipe_2_pane_g

0xef6b,	// (0x0006ac22) call5_swipe_2_pane_t1_ParamLimits

0xef6b,	// (0x0006ac22) call5_swipe_2_pane_t1

0xef80,	// (0x0006ac37) sc_swipe_pane_g1_ParamLimits

0xef80,	// (0x0006ac37) sc_swipe_pane_g1

0xef8d,	// (0x0006ac44) sc_swipe_pane_g2_ParamLimits

0xef8d,	// (0x0006ac44) sc_swipe_pane_g2

0x0001,

0xfc70,	// (0x0006b927) sc_swipe_pane_g_ParamLimits

0xfc70,	// (0x0006b927) sc_swipe_pane_g

0xef99,	// (0x0006ac50) sc_swipe_pane_t1_ParamLimits

0xef99,	// (0x0006ac50) sc_swipe_pane_t1

0x0b6d,	// (0x0005c824) main_cmail_launcher_pane

0x856c,	// (0x00064223) aid_size_cell_cmail_l_ParamLimits

0x856c,	// (0x00064223) aid_size_cell_cmail_l

0x8586,	// (0x0006423d) grid_cmail_l_pane_ParamLimits

0x8586,	// (0x0006423d) grid_cmail_l_pane

0x85a2,	// (0x00064259) cell_cmail_l_pane_ParamLimits

0x85a2,	// (0x00064259) cell_cmail_l_pane

0x85ca,	// (0x00064281) cell_cmail_l_pane_g1_ParamLimits

0x85ca,	// (0x00064281) cell_cmail_l_pane_g1

0x85d6,	// (0x0006428d) cell_cmail_l_pane_t1_ParamLimits

0x85d6,	// (0x0006428d) cell_cmail_l_pane_t1

0xefae,	// (0x0006ac65) cell_cmail_l_pane_t2_ParamLimits

0xefae,	// (0x0006ac65) cell_cmail_l_pane_t2

0x0001,

0xfc75,	// (0x0006b92c) cell_cmail_l_pane_t_ParamLimits

0xfc75,	// (0x0006b92c) cell_cmail_l_pane_t

0x0df0,	// (0x0005caa7) grid_highlight_pane_cp018_ParamLimits

0x0df0,	// (0x0005caa7) grid_highlight_pane_cp018

0x0ca2,	// (0x0005c959) main2_pane_ParamLimits

0x0ca2,	// (0x0005c959) main2_pane

0xa0ba,	// (0x00065d71) popup_sp_fs_action_menu_bg_pane_g1

0xa0c2,	// (0x00065d79) popup_sp_fs_action_menu_bg_pane_g2

0xa0ca,	// (0x00065d81) popup_sp_fs_action_menu_bg_pane_g3

0xa0d2,	// (0x00065d89) popup_sp_fs_action_menu_bg_pane_g4

0xa0da,	// (0x00065d91) popup_sp_fs_action_menu_bg_pane_g5

0xa0e2,	// (0x00065d99) popup_sp_fs_action_menu_bg_pane_g6

0xa0ea,	// (0x00065da1) popup_sp_fs_action_menu_bg_pane_g7

0xa0f2,	// (0x00065da9) popup_sp_fs_action_menu_bg_pane_g8

0xa0fa,	// (0x00065db1) popup_sp_fs_action_menu_bg_pane_g9

0xa102,	// (0x00065db9) popup_sp_fs_action_menu_bg_pane_g10

0xa102,	// (0x00065db9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0006ae63) popup_sp_fs_action_menu_bg_pane_g

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t3_g3_g1

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t3_g3_g2

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0006af13) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0006af13) list_medium_line_x2_t3_g3_g

0x1b0c,	// (0x0005d7c3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b0c,	// (0x0005d7c3) list_medium_line_x2_t3_g3_t1

0x1b21,	// (0x0005d7d8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b21,	// (0x0005d7d8) list_medium_line_x2_t3_g3_t2

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0006af1a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0006af1a) list_medium_line_x2_t3_g3_t

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t3_g2_g1

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0006af21) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0006af21) list_medium_line_x2_t3_g2_g

0x1b4a,	// (0x0005d801) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b4a,	// (0x0005d801) list_medium_line_x2_t3_g2_t1

0x1b60,	// (0x0005d817) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b60,	// (0x0005d817) list_medium_line_x2_t3_g2_t2

0x1b72,	// (0x0005d829) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b72,	// (0x0005d829) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0006af26) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0006af26) list_medium_line_x2_t3_g2_t

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t4_g4_g1

0x1b90,	// (0x0005d847) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1b90,	// (0x0005d847) list_medium_line_x2_t4_g4_g2

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t4_g4_g3

0x1b9c,	// (0x0005d853) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1b9c,	// (0x0005d853) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0006af2d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0006af2d) list_medium_line_x2_t4_g4_g

0x1ba8,	// (0x0005d85f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1ba8,	// (0x0005d85f) list_medium_line_x2_t4_g4_t1

0x1bc2,	// (0x0005d879) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1bc2,	// (0x0005d879) list_medium_line_x2_t4_g4_t2

0x1bd8,	// (0x0005d88f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1bd8,	// (0x0005d88f) list_medium_line_x2_t4_g4_t3

0x1bed,	// (0x0005d8a4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1bed,	// (0x0005d8a4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0006af36) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0006af36) list_medium_line_x2_t4_g4_t

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t2_g4_g1

0x1b90,	// (0x0005d847) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1b90,	// (0x0005d847) list_medium_line_x2_t2_g4_g2

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t2_g4_g3

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0006af9d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0006af9d) list_medium_line_x2_t2_g4_g

0x2881,	// (0x0005e538) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2881,	// (0x0005e538) list_medium_line_x2_t2_g4_t1

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0006afa6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0006afa6) list_medium_line_x2_t2_g4_t

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t2_g3_g1

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t2_g3_g2

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0006af13) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0006af13) list_medium_line_x2_t2_g3_g

0x2896,	// (0x0005e54d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2896,	// (0x0005e54d) list_medium_line_x2_t2_g3_t1

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0006afab) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0006afab) list_medium_line_x2_t2_g3_t

0x2a66,	// (0x0005e71d) main_sp_fs_list_pane_ParamLimits

0x2a66,	// (0x0005e71d) main_sp_fs_list_pane

0x2a72,	// (0x0005e729) sp_fs_scroll_pane_ParamLimits

0x2a72,	// (0x0005e729) sp_fs_scroll_pane

0x2a7e,	// (0x0005e735) list_medium_line_x2_t3_t1

0x2a8e,	// (0x0005e745) list_medium_line_x2_t3_t2

0x2a9c,	// (0x0005e753) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0006aff6) list_medium_line_x2_t3_t

0x2aaa,	// (0x0005e761) list_medium_line_x3_t4_t1

0x2aba,	// (0x0005e771) list_medium_line_x3_t4_t2

0x2ac8,	// (0x0005e77f) list_medium_line_x3_t4_t3

0x2a9c,	// (0x0005e753) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0006affd) list_medium_line_x3_t4_t

0x2ad6,	// (0x0005e78d) list_medium_line_x4_t5_t1

0x2ae6,	// (0x0005e79d) list_medium_line_x4_t5_t2

0x2ac8,	// (0x0005e77f) list_medium_line_x4_t5_t3

0x2af4,	// (0x0005e7ab) list_medium_line_x4_t5_t4

0x2a9c,	// (0x0005e753) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0006b006) list_medium_line_x4_t5_t

0x1ae8,	// (0x0005d79f) list_medium_line_t4_g4_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_t4_g4_g1

0x1b9c,	// (0x0005d853) list_medium_line_t4_g4_g2_ParamLimits

0x1b9c,	// (0x0005d853) list_medium_line_t4_g4_g2

0x2b02,	// (0x0005e7b9) list_medium_line_t4_g4_g3_ParamLimits

0x2b02,	// (0x0005e7b9) list_medium_line_t4_g4_g3

0x1b00,	// (0x0005d7b7) list_medium_line_t4_g4_g4_ParamLimits

0x1b00,	// (0x0005d7b7) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0006b011) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0006b011) list_medium_line_t4_g4_g

0x2b0e,	// (0x0005e7c5) list_medium_line_t4_g4_t1_ParamLimits

0x2b0e,	// (0x0005e7c5) list_medium_line_t4_g4_t1

0x2b23,	// (0x0005e7da) list_medium_line_t4_g4_t2_ParamLimits

0x2b23,	// (0x0005e7da) list_medium_line_t4_g4_t2

0x2b39,	// (0x0005e7f0) list_medium_line_t4_g4_t3_ParamLimits

0x2b39,	// (0x0005e7f0) list_medium_line_t4_g4_t3

0x1b35,	// (0x0005d7ec) list_medium_line_t4_g4_t4_ParamLimits

0x1b35,	// (0x0005d7ec) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0006b01a) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0006b01a) list_medium_line_t4_g4_t

0x2c15,	// (0x0005e8cc) chi_dic_find_pane_g1

0x3e80,	// (0x0005fb37) main_tport_pane

0x6e01,	// (0x00062ab8) list_medium_line_plain_t1

0x6eb5,	// (0x00062b6c) list_medium_line_t2_g2_g1_ParamLimits

0x6eb5,	// (0x00062b6c) list_medium_line_t2_g2_g1

0x6ec1,	// (0x00062b78) list_medium_line_t2_g2_g2_ParamLimits

0x6ec1,	// (0x00062b78) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0006b6d6) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0006b6d6) list_medium_line_t2_g2_g

0x6ecd,	// (0x00062b84) list_medium_line_t2_g2_t1_ParamLimits

0x6ecd,	// (0x00062b84) list_medium_line_t2_g2_t1

0x6ee4,	// (0x00062b9b) list_medium_line_t2_g2_t2_ParamLimits

0x6ee4,	// (0x00062b9b) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0006b6db) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0006b6db) list_medium_line_t2_g2_t

0x75ad,	// (0x00063264) aid_sp_fs_list_icon_a_sm

0x75b5,	// (0x0006326c) aid_sp_fs_list_icon_d

0x75bd,	// (0x00063274) aid_sp_fs_text_primary

0x75c6,	// (0x0006327d) aid_sp_fs_text_secondary

0x75cf,	// (0x00063286) list_medium_line

0x75cf,	// (0x00063286) list_medium_line_g2

0x75cf,	// (0x00063286) list_medium_line_g3

0x75cf,	// (0x00063286) list_medium_line_plain

0x75cf,	// (0x00063286) list_medium_line_plain_t2

0x75cf,	// (0x00063286) list_medium_line_plain_t3

0x75cf,	// (0x00063286) list_medium_line_right_icon

0x75cf,	// (0x00063286) list_medium_line_right_iconx2

0x75cf,	// (0x00063286) list_medium_line_t2

0x75cf,	// (0x00063286) list_medium_line_t2_g2

0x75cf,	// (0x00063286) list_medium_line_t2_g3

0x75cf,	// (0x00063286) list_medium_line_t2_right_icon

0x75cf,	// (0x00063286) list_medium_line_t2_right_iconx2

0x75cf,	// (0x00063286) list_medium_line_t3

0x75cf,	// (0x00063286) list_medium_line_t3_g2

0x75cf,	// (0x00063286) list_medium_line_t3_g3

0x75cf,	// (0x00063286) list_medium_line_t3_right_iconx2

0x75d8,	// (0x0006328f) list_medium_line_t4_g4

0x75e1,	// (0x00063298) list_medium_line_x2

0x75e1,	// (0x00063298) list_medium_line_x2_t2_g2

0x75e1,	// (0x00063298) list_medium_line_x2_t2_g3

0x75e1,	// (0x00063298) list_medium_line_x2_t2_g4

0x75e1,	// (0x00063298) list_medium_line_x2_t3

0x75e1,	// (0x00063298) list_medium_line_x2_t3_g2

0x75e1,	// (0x00063298) list_medium_line_x2_t3_g3

0x75e1,	// (0x00063298) list_medium_line_x2_t3_g4

0x75e1,	// (0x00063298) list_medium_line_x2_t4_g2

0x75e1,	// (0x00063298) list_medium_line_x2_t4_g4

0x75ea,	// (0x000632a1) list_medium_line_x3

0x75ea,	// (0x000632a1) list_medium_line_x3_t4

0x75ea,	// (0x000632a1) list_medium_line_x3_t4_g4

0x75d8,	// (0x0006328f) list_medium_line_x4_t4

0x75d8,	// (0x0006328f) list_medium_line_x4_t4_g7

0x75d8,	// (0x0006328f) list_medium_line_x4_t5

0x75f3,	// (0x000632aa) list_single_fs_dyc_pane_ParamLimits

0x75f3,	// (0x000632aa) list_single_fs_dyc_pane

0x1ae8,	// (0x0005d79f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x4_t4_g7_g1

0x7d62,	// (0x00063a19) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d62,	// (0x00063a19) list_medium_line_x4_t4_g7_g2

0xcdc0,	// (0x00068a77) list_medium_line_x4_t4_g7_g3_ParamLimits

0xcdc0,	// (0x00068a77) list_medium_line_x4_t4_g7_g3

0xcdcf,	// (0x00068a86) list_medium_line_x4_t4_g7_g4_ParamLimits

0xcdcf,	// (0x00068a86) list_medium_line_x4_t4_g7_g4

0xcddb,	// (0x00068a92) list_medium_line_x4_t4_g7_g5_ParamLimits

0xcddb,	// (0x00068a92) list_medium_line_x4_t4_g7_g5

0xcdea,	// (0x00068aa1) list_medium_line_x4_t4_g7_g6_ParamLimits

0xcdea,	// (0x00068aa1) list_medium_line_x4_t4_g7_g6

0xcdf9,	// (0x00068ab0) list_medium_line_x4_t4_g7_g7_ParamLimits

0xcdf9,	// (0x00068ab0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfba1,	// (0x0006b858) list_medium_line_x4_t4_g7_g_ParamLimits

0xfba1,	// (0x0006b858) list_medium_line_x4_t4_g7_g

0xce05,	// (0x00068abc) list_medium_line_x4_t4_g7_t1_ParamLimits

0xce05,	// (0x00068abc) list_medium_line_x4_t4_g7_t1

0xce1a,	// (0x00068ad1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xce1a,	// (0x00068ad1) list_medium_line_x4_t4_g7_t2

0xce2f,	// (0x00068ae6) list_medium_line_x4_t4_g7_t3_ParamLimits

0xce2f,	// (0x00068ae6) list_medium_line_x4_t4_g7_t3

0xce44,	// (0x00068afb) list_medium_line_x4_t4_g7_t4_ParamLimits

0xce44,	// (0x00068afb) list_medium_line_x4_t4_g7_t4

0xce56,	// (0x00068b0d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xce56,	// (0x00068b0d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbb0,	// (0x0006b867) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbb0,	// (0x0006b867) list_medium_line_x4_t4_g7_t

0xce68,	// (0x00068b1f) list_single_dyc_row_pane_ParamLimits

0xce68,	// (0x00068b1f) list_single_dyc_row_pane

0x84e7,	// (0x0006419e) call5_gesture_pane_ParamLimits

0x84e7,	// (0x0006419e) call5_gesture_pane

0x853d,	// (0x000641f4) call5_windows_pane_ParamLimits

0x853d,	// (0x000641f4) call5_windows_pane

0x85ec,	// (0x000642a3) call5_swipe_1_pane_cp_ParamLimits

0x85ec,	// (0x000642a3) call5_swipe_1_pane_cp

0x85f8,	// (0x000642af) call5_swipe_2_pane_cp_ParamLimits

0x85f8,	// (0x000642af) call5_swipe_2_pane_cp

0xabb0,	// (0x00066867) call5_image_pane_cp

0x8604,	// (0x000642bb) popup_call5_audio_first_window_cp_ParamLimits

0x8604,	// (0x000642bb) popup_call5_audio_first_window_cp

0xef80,	// (0x0006ac37) call5_swipe_1_pane_g1_cp_ParamLimits

0xef80,	// (0x0006ac37) call5_swipe_1_pane_g1_cp

0xefc0,	// (0x0006ac77) call5_swipe_1_pane_g2_cp

0xef99,	// (0x0006ac50) call5_swipe_1_pane_t1_cp_ParamLimits

0xef99,	// (0x0006ac50) call5_swipe_1_pane_t1_cp

0xef80,	// (0x0006ac37) call5_swipe_2_pane_g1_cp_ParamLimits

0xef80,	// (0x0006ac37) call5_swipe_2_pane_g1_cp

0xefc8,	// (0x0006ac7f) call5_swipe_2_pane_g2_cp

0xefd0,	// (0x0006ac87) call5_swipe_2_pane_t1_cp_ParamLimits

0xefd0,	// (0x0006ac87) call5_swipe_2_pane_t1_cp

0x0df0,	// (0x0005caa7) main_sp_fs_email_pane

0xefe5,	// (0x0006ac9c) main_sp_fs_listscroll_pane_te

0xce85,	// (0x00068b3c) popup_sp_fs_action_menu_pane_ParamLimits

0xce85,	// (0x00068b3c) popup_sp_fs_action_menu_pane

0xc552,	// (0x00068209) bg_sp_fs_ctrlbar_pane_g1

0xefee,	// (0x0006aca5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xeff7,	// (0x0006acae) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xf000,	// (0x0006acb7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc552,	// (0x00068209) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc7a,	// (0x0006b931) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc331,	// (0x00067fe8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc331,	// (0x00067fe8) bg_sp_fs_ctrlbar_ddmenu_pane

0xf009,	// (0x0006acc0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xf009,	// (0x0006acc0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf015,	// (0x0006accc) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf015,	// (0x0006accc) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc83,	// (0x0006b93a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc83,	// (0x0006b93a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf021,	// (0x0006acd8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf021,	// (0x0006acd8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xcecb,	// (0x00068b82) list_medium_line_t2_right_icon_g1

0x8612,	// (0x000642c9) list_medium_line_t2_right_icon_t1

0x8622,	// (0x000642d9) list_medium_line_t2_right_icon_t2

0x0001,

0xfc88,	// (0x0006b93f) list_medium_line_t2_right_icon_t

0xc01d,	// (0x00067cd4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc01d,	// (0x00067cd4) bg_sp_fs_ctrlbar_pane

0x867c,	// (0x00064333) main_sp_fs_ctrlbar_button_pane_cp01

0x8686,	// (0x0006433d) main_sp_fs_ctrlbar_ddmenu_pane

0xf075,	// (0x0006ad2c) main_sp_fs_ctrlbar_pane_g1

0xf081,	// (0x0006ad38) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc8d,	// (0x0006b944) main_sp_fs_ctrlbar_pane_g

0xf08d,	// (0x0006ad44) main_sp_fs_ctrlbar_pane_t1

0x8690,	// (0x00064347) main_sp_fs_ctrlbar_pane

0x86b4,	// (0x0006436b) main_sp_fs_listscroll_pane_te_cp01

0x86d4,	// (0x0006438b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86d4,	// (0x0006438b) popup_sp_fs_action_menu_pane_cp01

0x0df0,	// (0x0005caa7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0df0,	// (0x0005caa7) bg_sp_fs_highlight_list_pane_cp01

0xced3,	// (0x00068b8a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xced3,	// (0x00068b8a) sp_fs_action_menu_list_gene_pane_g1

0xf0a2,	// (0x0006ad59) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf0a2,	// (0x0006ad59) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc92,	// (0x0006b949) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc92,	// (0x0006b949) sp_fs_action_menu_list_gene_pane_g

0xcee2,	// (0x00068b99) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcee2,	// (0x00068b99) sp_fs_action_menu_list_gene_pane_t1

0xcefa,	// (0x00068bb1) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcefa,	// (0x00068bb1) sp_fs_action_menu_list_gene_pane

0xf0af,	// (0x0006ad66) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf0af,	// (0x0006ad66) popup_sp_fs_action_menu_bg_pane

0xcf1d,	// (0x00068bd4) sp_fs_action_menu_list_pane_ParamLimits

0xcf1d,	// (0x00068bd4) sp_fs_action_menu_list_pane

0xf0bd,	// (0x0006ad74) sp_fs_scroll_pane_cp01_ParamLimits

0xf0bd,	// (0x0006ad74) sp_fs_scroll_pane_cp01

0x86f0,	// (0x000643a7) list_medium_line_plain_t2_t1

0x8700,	// (0x000643b7) list_medium_line_plain_t2_t2

0x0001,

0xfc97,	// (0x0006b94e) list_medium_line_plain_t2_t

0x8710,	// (0x000643c7) list_medium_line_plain_t3_t1

0x8720,	// (0x000643d7) list_medium_line_plain_t3_t2

0x872e,	// (0x000643e5) list_medium_line_plain_t3_t3

0x0002,

0xfc9c,	// (0x0006b953) list_medium_line_plain_t3_t

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t2_g2_g1

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0006af21) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0006af21) list_medium_line_x2_t2_g2_g

0x2b0e,	// (0x0005e7c5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2b0e,	// (0x0005e7c5) list_medium_line_x2_t2_g2_t1

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t2_g2_t2

0x0001,

0xfca3,	// (0x0006b95a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfca3,	// (0x0006b95a) list_medium_line_x2_t2_g2_t

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t4_g2_g1

0xcf41,	// (0x00068bf8) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcf41,	// (0x00068bf8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfca8,	// (0x0006b95f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfca8,	// (0x0006b95f) list_medium_line_x2_t4_g2_g

0x873c,	// (0x000643f3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x873c,	// (0x000643f3) list_medium_line_x2_t4_g2_t1

0x8756,	// (0x0006440d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8756,	// (0x0006440d) list_medium_line_x2_t4_g2_t2

0x876c,	// (0x00064423) list_medium_line_x2_t4_g2_t3_ParamLimits

0x876c,	// (0x00064423) list_medium_line_x2_t4_g2_t3

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcad,	// (0x0006b964) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcad,	// (0x0006b964) list_medium_line_x2_t4_g2_t

0xcf53,	// (0x00068c0a) list_medium_line_t3_right_iconx2_g1

0xcecb,	// (0x00068b82) list_medium_line_t3_right_iconx2_g2

0x8781,	// (0x00064438) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb6,	// (0x0006b96d) list_medium_line_t3_right_iconx2_g

0x878b,	// (0x00064442) list_medium_line_t3_right_iconx2_t1

0x879b,	// (0x00064452) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcbd,	// (0x0006b974) list_medium_line_t3_right_iconx2_t

0x1ae8,	// (0x0005d79f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x3_t4_g4_g1

0x1af4,	// (0x0005d7ab) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1af4,	// (0x0005d7ab) list_medium_line_x3_t4_g4_g2

0x1b9c,	// (0x0005d853) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1b9c,	// (0x0005d853) list_medium_line_x3_t4_g4_g3

0xcf5b,	// (0x00068c12) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcf5b,	// (0x00068c12) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcc2,	// (0x0006b979) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcc2,	// (0x0006b979) list_medium_line_x3_t4_g4_g

0x87a9,	// (0x00064460) list_medium_line_x3_t4_g4_t1_ParamLimits

0x87a9,	// (0x00064460) list_medium_line_x3_t4_g4_t1

0x87c0,	// (0x00064477) list_medium_line_x3_t4_g4_t2_ParamLimits

0x87c0,	// (0x00064477) list_medium_line_x3_t4_g4_t2

0xcf67,	// (0x00068c1e) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcf67,	// (0x00068c1e) list_medium_line_x3_t4_g4_t3

0xcf7c,	// (0x00068c33) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcf7c,	// (0x00068c33) list_medium_line_x3_t4_g4_t4

0x0003,

0xfccb,	// (0x0006b982) list_medium_line_x3_t4_g4_t_ParamLimits

0xfccb,	// (0x0006b982) list_medium_line_x3_t4_g4_t

0x87db,	// (0x00064492) list_single_dyc_row_text_pane_t1_ParamLimits

0x87db,	// (0x00064492) list_single_dyc_row_text_pane_t1

0x8824,	// (0x000644db) list_single_dyc_row_text_pane_t2_ParamLimits

0x8824,	// (0x000644db) list_single_dyc_row_text_pane_t2

0xcf99,	// (0x00068c50) list_single_dyc_row_text_pane_t3_ParamLimits

0xcf99,	// (0x00068c50) list_single_dyc_row_text_pane_t3

0x0002,

0xfcd4,	// (0x0006b98b) list_single_dyc_row_text_pane_t_ParamLimits

0xfcd4,	// (0x0006b98b) list_single_dyc_row_text_pane_t

0xcfab,	// (0x00068c62) list_single_dyc_row_pane_g1_ParamLimits

0xcfab,	// (0x00068c62) list_single_dyc_row_pane_g1

0xcfb7,	// (0x00068c6e) list_single_dyc_row_pane_g2_ParamLimits

0xcfb7,	// (0x00068c6e) list_single_dyc_row_pane_g2

0xcfc3,	// (0x00068c7a) list_single_dyc_row_pane_g3_ParamLimits

0xcfc3,	// (0x00068c7a) list_single_dyc_row_pane_g3

0xcfcf,	// (0x00068c86) list_single_dyc_row_pane_g4_ParamLimits

0xcfcf,	// (0x00068c86) list_single_dyc_row_pane_g4

0x0003,

0xfcdb,	// (0x0006b992) list_single_dyc_row_pane_g_ParamLimits

0xfcdb,	// (0x0006b992) list_single_dyc_row_pane_g

0xcfdb,	// (0x00068c92) list_single_dyc_row_text_pane_ParamLimits

0xcfdb,	// (0x00068c92) list_single_dyc_row_text_pane

0x0b6d,	// (0x0005c824) bg_sp_fs_scroll_pane

0xf0e3,	// (0x0006ad9a) thumb_sp_fs_scroll_pane

0x6eb5,	// (0x00062b6c) list_medium_line_g1_ParamLimits

0x6eb5,	// (0x00062b6c) list_medium_line_g1

0xcffa,	// (0x00068cb1) list_medium_line_t1_ParamLimits

0xcffa,	// (0x00068cb1) list_medium_line_t1

0x1ae8,	// (0x0005d79f) list_medium_line_x2_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x2_g1

0x1af4,	// (0x0005d7ab) list_medium_line_x2_g2_ParamLimits

0x1af4,	// (0x0005d7ab) list_medium_line_x2_g2

0x0001,

0xfce4,	// (0x0006b99b) list_medium_line_x2_g_ParamLimits

0xfce4,	// (0x0006b99b) list_medium_line_x2_g

0xd00f,	// (0x00068cc6) list_medium_line_x2_t1_ParamLimits

0xd00f,	// (0x00068cc6) list_medium_line_x2_t1

0x1ae8,	// (0x0005d79f) list_medium_line_x3_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x3_g1

0x1af4,	// (0x0005d7ab) list_medium_line_x3_g2_ParamLimits

0x1af4,	// (0x0005d7ab) list_medium_line_x3_g2

0x0001,

0xfce4,	// (0x0006b99b) list_medium_line_x3_g_ParamLimits

0xfce4,	// (0x0006b99b) list_medium_line_x3_g

0xd00f,	// (0x00068cc6) list_medium_line_x3_t1_ParamLimits

0xd00f,	// (0x00068cc6) list_medium_line_x3_t1

0xd025,	// (0x00068cdc) thumb_sp_fs_scroll_pane_g1

0xd02e,	// (0x00068ce5) thumb_sp_fs_scroll_pane_g2

0xd037,	// (0x00068cee) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0006b9a0) thumb_sp_fs_scroll_pane_g

0xd025,	// (0x00068cdc) bg_sp_fs_scroll_pane_g1

0xd02e,	// (0x00068ce5) bg_sp_fs_scroll_pane_g2

0xd037,	// (0x00068cee) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0006b9a0) bg_sp_fs_scroll_pane_g

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ae8,	// (0x0005d79f) list_medium_line_x2_t3_g4_g1

0x1b90,	// (0x0005d847) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1b90,	// (0x0005d847) list_medium_line_x2_t3_g4_g2

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1af4,	// (0x0005d7ab) list_medium_line_x2_t3_g4_g3

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1b00,	// (0x0005d7b7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0006af9d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0006af9d) list_medium_line_x2_t3_g4_g

0x887e,	// (0x00064535) list_medium_line_x2_t3_g4_t1_ParamLimits

0x887e,	// (0x00064535) list_medium_line_x2_t3_g4_t1

0x8894,	// (0x0006454b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8894,	// (0x0006454b) list_medium_line_x2_t3_g4_t2

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b35,	// (0x0005d7ec) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcf0,	// (0x0006b9a7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcf0,	// (0x0006b9a7) list_medium_line_x2_t3_g4_t

0x6eb5,	// (0x00062b6c) list_medium_line_g2_g1_ParamLimits

0x6eb5,	// (0x00062b6c) list_medium_line_g2_g1

0x6ec1,	// (0x00062b78) list_medium_line_g2_g2_ParamLimits

0x6ec1,	// (0x00062b78) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0006b6d6) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0006b6d6) list_medium_line_g2_g

0xd040,	// (0x00068cf7) list_medium_line_g2_t1_ParamLimits

0xd040,	// (0x00068cf7) list_medium_line_g2_t1

0x6eb5,	// (0x00062b6c) list_medium_line_t3_g2_g1_ParamLimits

0x6eb5,	// (0x00062b6c) list_medium_line_t3_g2_g1

0x6ec1,	// (0x00062b78) list_medium_line_t3_g2_g2_ParamLimits

0x6ec1,	// (0x00062b78) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0006b6d6) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0006b6d6) list_medium_line_t3_g2_g

0x88ad,	// (0x00064564) list_medium_line_t3_g2_t1_ParamLimits

0x88ad,	// (0x00064564) list_medium_line_t3_g2_t1

0x88c7,	// (0x0006457e) list_medium_line_t3_g2_t2_ParamLimits

0x88c7,	// (0x0006457e) list_medium_line_t3_g2_t2

0x88dd,	// (0x00064594) list_medium_line_t3_g2_t3_ParamLimits

0x88dd,	// (0x00064594) list_medium_line_t3_g2_t3

0x0002,

0xfcf7,	// (0x0006b9ae) list_medium_line_t3_g2_t_ParamLimits

0xfcf7,	// (0x0006b9ae) list_medium_line_t3_g2_t

0xcecb,	// (0x00068b82) list_medium_line_right_icon_g1

0xd055,	// (0x00068d0c) list_medium_line_right_icon_t1

0x6eb5,	// (0x00062b6c) list_medium_line_t2_g1_ParamLimits

0x6eb5,	// (0x00062b6c) list_medium_line_t2_g1

0x88f4,	// (0x000645ab) list_medium_line_t2_t1_ParamLimits

0x88f4,	// (0x000645ab) list_medium_line_t2_t1

0x890e,	// (0x000645c5) list_medium_line_t2_t2_ParamLimits

0x890e,	// (0x000645c5) list_medium_line_t2_t2

0x0001,

0xfcfe,	// (0x0006b9b5) list_medium_line_t2_t_ParamLimits

0xfcfe,	// (0x0006b9b5) list_medium_line_t2_t

0x6eb5,	// (0x00062b6c) list_medium_line_t3_g1_ParamLimits

0x6eb5,	// (0x00062b6c) list_medium_line_t3_g1

0x8927,	// (0x000645de) list_medium_line_t3_t1_ParamLimits

0x8927,	// (0x000645de) list_medium_line_t3_t1

0x893e,	// (0x000645f5) list_medium_line_t3_t2_ParamLimits

0x893e,	// (0x000645f5) list_medium_line_t3_t2

0x8953,	// (0x0006460a) list_medium_line_t3_t3_ParamLimits

0x8953,	// (0x0006460a) list_medium_line_t3_t3

0x0002,

0xfd03,	// (0x0006b9ba) list_medium_line_t3_t_ParamLimits

0xfd03,	// (0x0006b9ba) list_medium_line_t3_t

0x6eb5,	// (0x00062b6c) list_medium_line_g3_g1_ParamLimits

0x6eb5,	// (0x00062b6c) list_medium_line_g3_g1

0xd063,	// (0x00068d1a) list_medium_line_g3_g2_ParamLimits

0xd063,	// (0x00068d1a) list_medium_line_g3_g2

0x6ec1,	// (0x00062b78) list_medium_line_g3_g3_ParamLimits

0x6ec1,	// (0x00062b78) list_medium_line_g3_g3

0x0002,

0xfd0a,	// (0x0006b9c1) list_medium_line_g3_g_ParamLimits

0xfd0a,	// (0x0006b9c1) list_medium_line_g3_g

0xd06f,	// (0x00068d26) list_medium_line_g3_t1_ParamLimits

0xd06f,	// (0x00068d26) list_medium_line_g3_t1

0x6eb5,	// (0x00062b6c) list_medium_line_t2_g3_g1_ParamLimits

0x6eb5,	// (0x00062b6c) list_medium_line_t2_g3_g1

0xd063,	// (0x00068d1a) list_medium_line_t2_g3_g2_ParamLimits

0xd063,	// (0x00068d1a) list_medium_line_t2_g3_g2

0x6ec1,	// (0x00062b78) list_medium_line_t2_g3_g3_ParamLimits

0x6ec1,	// (0x00062b78) list_medium_line_t2_g3_g3

0x0002,

0xfd0a,	// (0x0006b9c1) list_medium_line_t2_g3_g_ParamLimits

0xfd0a,	// (0x0006b9c1) list_medium_line_t2_g3_g

0x8965,	// (0x0006461c) list_medium_line_t2_g3_t1_ParamLimits

0x8965,	// (0x0006461c) list_medium_line_t2_g3_t1

0x897c,	// (0x00064633) list_medium_line_t2_g3_t2_ParamLimits

0x897c,	// (0x00064633) list_medium_line_t2_g3_t2

0x0001,

0xfd11,	// (0x0006b9c8) list_medium_line_t2_g3_t_ParamLimits

0xfd11,	// (0x0006b9c8) list_medium_line_t2_g3_t

0x6eb5,	// (0x00062b6c) list_medium_line_t3_g3_g1_ParamLimits

0x6eb5,	// (0x00062b6c) list_medium_line_t3_g3_g1

0xd063,	// (0x00068d1a) list_medium_line_t3_g3_g2_ParamLimits

0xd063,	// (0x00068d1a) list_medium_line_t3_g3_g2

0x6ec1,	// (0x00062b78) list_medium_line_t3_g3_g3_ParamLimits

0x6ec1,	// (0x00062b78) list_medium_line_t3_g3_g3

0x0002,

0xfd0a,	// (0x0006b9c1) list_medium_line_t3_g3_g_ParamLimits

0xfd0a,	// (0x0006b9c1) list_medium_line_t3_g3_g

0x8995,	// (0x0006464c) list_medium_line_t3_g3_t1_ParamLimits

0x8995,	// (0x0006464c) list_medium_line_t3_g3_t1

0x89ae,	// (0x00064665) list_medium_line_t3_g3_t2_ParamLimits

0x89ae,	// (0x00064665) list_medium_line_t3_g3_t2

0x89c4,	// (0x0006467b) list_medium_line_t3_g3_t3_ParamLimits

0x89c4,	// (0x0006467b) list_medium_line_t3_g3_t3

0x0002,

0xfd16,	// (0x0006b9cd) list_medium_line_t3_g3_t_ParamLimits

0xfd16,	// (0x0006b9cd) list_medium_line_t3_g3_t

0xcf53,	// (0x00068c0a) list_medium_line_right_iconx2_g1

0xcecb,	// (0x00068b82) list_medium_line_right_iconx2_g2

0x0001,

0xfd1d,	// (0x0006b9d4) list_medium_line_right_iconx2_g

0xd084,	// (0x00068d3b) list_medium_line_right_iconx2_t1

0xcf53,	// (0x00068c0a) list_medium_line_t2_right_iconx2_g1

0xcecb,	// (0x00068b82) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd1d,	// (0x0006b9d4) list_medium_line_t2_right_iconx2_g

0x89de,	// (0x00064695) list_medium_line_t2_right_iconx2_t1

0x89ee,	// (0x000646a5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd22,	// (0x0006b9d9) list_medium_line_t2_right_iconx2_t

0xd092,	// (0x00068d49) list_medium_line_x4_t4_t1

0x8a00,	// (0x000646b7) list_medium_line_x4_t4_t2

0x8a10,	// (0x000646c7) list_medium_line_x4_t4_t3

0x8a20,	// (0x000646d7) list_medium_line_x4_t4_t4

0x0003,

0xfd27,	// (0x0006b9de) list_medium_line_x4_t4_t

0x8a6a,	// (0x00064721) tport_appsw_pane_ParamLimits

0x8a6a,	// (0x00064721) tport_appsw_pane

0x8a7d,	// (0x00064734) tport_contact_pane_ParamLimits

0x8a7d,	// (0x00064734) tport_contact_pane

0x8a90,	// (0x00064747) tport_listscroll_pane_ParamLimits

0x8a90,	// (0x00064747) tport_listscroll_pane

0x8aa6,	// (0x0006475d) cell_tport_appsw_pane_ParamLimits

0x8aa6,	// (0x0006475d) cell_tport_appsw_pane

0xe0e1,	// (0x00069d98) tport_appsw_pane_g1_ParamLimits

0xe0e1,	// (0x00069d98) tport_appsw_pane_g1

0xd0a0,	// (0x00068d57) tport_contact_pane_g1

0xd0a9,	// (0x00068d60) tport_contact_pane_t1

0xd0b7,	// (0x00068d6e) tport_contact_pane_t2

0x0001,

0xfd30,	// (0x0006b9e7) tport_contact_pane_t

0xd0c5,	// (0x00068d7c) list_tport_pane

0xd0ce,	// (0x00068d85) scroll_pane_cp_030

0x8aec,	// (0x000647a3) cell_tport_appsw_pane_g1

0xd0e7,	// (0x00068d9e) cell_tport_appsw_pane_t1

0x0b6d,	// (0x0005c824) grid_highlight_pane_cp019

0x8afc,	// (0x000647b3) list_tport_double_graphic_pane_ParamLimits

0x8afc,	// (0x000647b3) list_tport_double_graphic_pane

0x0df0,	// (0x0005caa7) list_highlight_pane_cp023_ParamLimits

0x0df0,	// (0x0005caa7) list_highlight_pane_cp023

0x8b0c,	// (0x000647c3) list_tport_double_graphic_pane_g1_ParamLimits

0x8b0c,	// (0x000647c3) list_tport_double_graphic_pane_g1

0x8b19,	// (0x000647d0) list_tport_double_graphic_pane_t1_ParamLimits

0x8b19,	// (0x000647d0) list_tport_double_graphic_pane_t1

0x8b2e,	// (0x000647e5) list_tport_double_graphic_pane_t2_ParamLimits

0x8b2e,	// (0x000647e5) list_tport_double_graphic_pane_t2

0x0001,

0xfd3c,	// (0x0006b9f3) list_tport_double_graphic_pane_t_ParamLimits

0xfd3c,	// (0x0006b9f3) list_tport_double_graphic_pane_t

0x0b6d,	// (0x0005c824) main_cale_note_pane

0x65f6,	// (0x000622ad) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x65f6,	// (0x000622ad) cell_vitu2_function_top_wide_pane_cp01

0x808b,	// (0x00063d42) wait_bar_pane_cp05_ParamLimits

0x0b6d,	// (0x0005c824) listscroll_cmail_pane

0xd0fd,	// (0x00068db4) list_cmail_pane

0x8b4a,	// (0x00064801) list_cmail_body_pane

0x8b62,	// (0x00064819) list_single_cmail_header_caption_pane

0x8b7f,	// (0x00064836) list_single_cmail_header_detail_pane_ParamLimits

0x8b7f,	// (0x00064836) list_single_cmail_header_detail_pane

0x8bb1,	// (0x00064868) list_single_cmail_header_caption_pane_t1

0x8bc1,	// (0x00064878) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bc1,	// (0x00064878) list_single_cmail_header_detail_pane_g1

0xd11d,	// (0x00068dd4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd11d,	// (0x00068dd4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd41,	// (0x0006b9f8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd41,	// (0x0006b9f8) list_single_cmail_header_detail_pane_g

0xd136,	// (0x00068ded) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd136,	// (0x00068ded) list_single_cmail_header_detail_pane_t1

0xd174,	// (0x00068e2b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd174,	// (0x00068e2b) list_single_cmail_header_editor_pane_bg

0xed4c,	// (0x0006aa03) list_cmail_body_pane_g1

0xd186,	// (0x00068e3d) list_cmail_body_pane_t1

0xe101,	// (0x00069db8) list_single_cmail_header_editor_pane_bg_g1

0xa4cb,	// (0x00066182) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe111,	// (0x00069dc8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe109,	// (0x00069dc0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe354,	// (0x0006a00b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe131,	// (0x00069de8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe121,	// (0x00069dd8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe129,	// (0x00069de0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa4ab,	// (0x00066162) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8bff,	// (0x000648b6) calenote_gesture_pane_ParamLimits

0x8bff,	// (0x000648b6) calenote_gesture_pane

0x8c1f,	// (0x000648d6) calenote_window_pane_ParamLimits

0x8c1f,	// (0x000648d6) calenote_window_pane

0xd194,	// (0x00068e4b) popup_note_window_cp01

0x8c3b,	// (0x000648f2) calenote_swipe_1_pane_ParamLimits

0x8c3b,	// (0x000648f2) calenote_swipe_1_pane

0x85f8,	// (0x000642af) calenote_swipe_2_pane_ParamLimits

0x85f8,	// (0x000642af) calenote_swipe_2_pane

0xef80,	// (0x0006ac37) calenote_swipe_1_pane_g1_ParamLimits

0xef80,	// (0x0006ac37) calenote_swipe_1_pane_g1

0xef8d,	// (0x0006ac44) calenote_swipe_1_pane_g2_ParamLimits

0xef8d,	// (0x0006ac44) calenote_swipe_1_pane_g2

0x0001,

0xfc70,	// (0x0006b927) calenote_swipe_1_pane_g_ParamLimits

0xfc70,	// (0x0006b927) calenote_swipe_1_pane_g

0xd1a6,	// (0x00068e5d) calenote_swipe_1_pane_t1_ParamLimits

0xd1a6,	// (0x00068e5d) calenote_swipe_1_pane_t1

0xef80,	// (0x0006ac37) calenote_swipe_2_pane_g1_ParamLimits

0xef80,	// (0x0006ac37) calenote_swipe_2_pane_g1

0xd1c5,	// (0x00068e7c) calenote_swipe_2_pane_g2_ParamLimits

0xd1c5,	// (0x00068e7c) calenote_swipe_2_pane_g2

0x0001,

0xfd4d,	// (0x0006ba04) calenote_swipe_2_pane_g_ParamLimits

0xfd4d,	// (0x0006ba04) calenote_swipe_2_pane_g

0xd1d1,	// (0x00068e88) calenote_swipe_2_pane_t1_ParamLimits

0xd1d1,	// (0x00068e88) calenote_swipe_2_pane_t1

0x0b6d,	// (0x0005c824) main_mup_navstr_pane

0x529f,	// (0x00060f56) main_mup3_pane_t7_ParamLimits

0x529f,	// (0x00060f56) main_mup3_pane_t7

0xdb99,	// (0x00069850) main_mp4_pane_g6_ParamLimits

0xdb99,	// (0x00069850) main_mp4_pane_g6

0xdd2f,	// (0x000699e6) main_image3_pane_t4_ParamLimits

0xdd2f,	// (0x000699e6) main_image3_pane_t4

0x8c50,	// (0x00064907) popup_navstr_preview_pane_ParamLimits

0x8c50,	// (0x00064907) popup_navstr_preview_pane

0x8c60,	// (0x00064917) scroll_navstr_pane_ParamLimits

0x8c60,	// (0x00064917) scroll_navstr_pane

0x0b6d,	// (0x0005c824) bg_popup_preview_window_pane_cp04

0xd1f8,	// (0x00068eaf) popup_navstr_preview_pane_t1

0x8c74,	// (0x0006492b) scroll_navstr_pane_g1_ParamLimits

0x8c74,	// (0x0006492b) scroll_navstr_pane_g1

0x8c88,	// (0x0006493f) scroll_navstr_pane_t1_ParamLimits

0x8c88,	// (0x0006493f) scroll_navstr_pane_t1

0xd19d,	// (0x00068e54) bg_button_pane_cp014

0xd19d,	// (0x00068e54) bg_button_pane_cp030

0x848d,	// (0x00064144) list_double_fisheye_pane_g4_ParamLimits

0x848d,	// (0x00064144) list_double_fisheye_pane_g4

0x8499,	// (0x00064150) list_double_fisheye_pane_g5_ParamLimits

0x8499,	// (0x00064150) list_double_fisheye_pane_g5

0xd105,	// (0x00068dbc) sp_fs_scroll_pane_cp03

0xf075,	// (0x0006ad2c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf081,	// (0x0006ad38) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc8d,	// (0x0006b944) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf08d,	// (0x0006ad44) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8b40,	// (0x000647f7) sp_fs_scroll_pane_cp02

0xa16d,	// (0x00065e24) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa16d,	// (0x00065e24) popup_sp_fs_calendar_preview_list_single_pane

0x0b6d,	// (0x0005c824) main_cam6_pano_pane

0x0df0,	// (0x0005caa7) main_mup3_pane_ParamLimits

0x0b6d,	// (0x0005c824) main_phacti_pane

0x7f5c,	// (0x00063c13) bg_button_pane_cp11

0x7f76,	// (0x00063c2d) main_mobtv_info_pane_g2_ParamLimits

0x7f76,	// (0x00063c2d) main_mobtv_info_pane_g2

0x0001,

0xfc0c,	// (0x0006b8c3) main_mobtv_info_pane_g_ParamLimits

0xfc0c,	// (0x0006b8c3) main_mobtv_info_pane_g

0x8153,	// (0x00063e0a) sc_clock_pane_t5_ParamLimits

0x8153,	// (0x00063e0a) sc_clock_pane_t5

0x8308,	// (0x00063fbf) main_radioblah_pane_g1_ParamLimits

0xeeb2,	// (0x0006ab69) main_radioblah_pane_t3_ParamLimits

0xeeb2,	// (0x0006ab69) main_radioblah_pane_t3

0xeeca,	// (0x0006ab81) main_radioblah_pane_t4_ParamLimits

0xeeca,	// (0x0006ab81) main_radioblah_pane_t4

0x8330,	// (0x00063fe7) main_radioblah_text_pane_ParamLimits

0x8330,	// (0x00063fe7) main_radioblah_text_pane

0x8342,	// (0x00063ff9) main_radioblah_info_pane_g1_ParamLimits

0x83db,	// (0x00064092) main_radioblah_info_pane_t4_ParamLimits

0x83db,	// (0x00064092) main_radioblah_info_pane_t4

0x0df0,	// (0x0005caa7) main_sp_fs_calendar_pane

0x8c9f,	// (0x00064956) main_phacti_pane_g1

0x8ca7,	// (0x0006495e) phacti_note_pane_ParamLimits

0x8ca7,	// (0x0006495e) phacti_note_pane

0xd20f,	// (0x00068ec6) phacti_term_pane_ParamLimits

0xd20f,	// (0x00068ec6) phacti_term_pane

0xd224,	// (0x00068edb) phacti_note_pane_t1_ParamLimits

0xd224,	// (0x00068edb) phacti_note_pane_t1

0xd23b,	// (0x00068ef2) phacti_term_pane_g1

0xd243,	// (0x00068efa) phacti_term_pane_t1_ParamLimits

0xd243,	// (0x00068efa) phacti_term_pane_t1

0xd26d,	// (0x00068f24) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd275,	// (0x00068f2c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd57,	// (0x0006ba0e) popup_sp_fs_calendar_preview_list_single_pane_g

0xd27d,	// (0x00068f34) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd27d,	// (0x00068f34) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd293,	// (0x00068f4a) aid_popup_sp_fs_bg_corner_pane

0xc552,	// (0x00068209) popup_sp_fs_calendar_preview_bg_pane_g1

0x0b6d,	// (0x0005c824) popup_sp_fs_calendar_preview_bg_pane

0xd29b,	// (0x00068f52) popup_sp_fs_calendar_preview_list_pane

0x0df0,	// (0x0005caa7) bg_main_sp_fs_cale_pane_ParamLimits

0x0df0,	// (0x0005caa7) bg_main_sp_fs_cale_pane

0xd2a3,	// (0x00068f5a) listscroll_cale_mrui_pane_ParamLimits

0xd2a3,	// (0x00068f5a) listscroll_cale_mrui_pane

0xd2b7,	// (0x00068f6e) listscroll_sp_fs_schedule_track_pane

0xd2c0,	// (0x00068f77) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd2c0,	// (0x00068f77) main_sp_fs_ctrlbar_pane_cp01

0xd2d1,	// (0x00068f88) main_sp_fs_ribbon_pane

0xd2d9,	// (0x00068f90) popup_sp_fs_cale_preview_window

0x8cfe,	// (0x000649b5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8cfe,	// (0x000649b5) list_single_sp_fs_schedule_track_pane

0x0df0,	// (0x0005caa7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0df0,	// (0x0005caa7) bg_sp_fs_highlight_list_pane_cp03

0x8d11,	// (0x000649c8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d11,	// (0x000649c8) list_single_sp_fs_schedule_track_pane_g1

0x8d1d,	// (0x000649d4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d1d,	// (0x000649d4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd5c,	// (0x0006ba13) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd5c,	// (0x0006ba13) list_single_sp_fs_schedule_track_pane_g

0x8d29,	// (0x000649e0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d29,	// (0x000649e0) list_single_sp_fs_schedule_track_pane_t1

0x8d4b,	// (0x00064a02) sp_fs_schedule_track_pane_ParamLimits

0x8d4b,	// (0x00064a02) sp_fs_schedule_track_pane

0xd2eb,	// (0x00068fa2) sp_fs_schedule_track_pane_g1

0xd2f3,	// (0x00068faa) sp_fs_schedule_track_pane_g2

0xd2fb,	// (0x00068fb2) sp_fs_schedule_track_pane_g3

0xd303,	// (0x00068fba) sp_fs_schedule_track_pane_g4

0xd30b,	// (0x00068fc2) sp_fs_schedule_track_pane_g5

0x0004,

0xfd61,	// (0x0006ba18) sp_fs_schedule_track_pane_g

0xe101,	// (0x00069db8) bg_sp_fs_schedule_viewer_highlight_g1

0xa4cb,	// (0x00066182) bg_sp_fs_schedule_viewer_highlight_g2

0xe109,	// (0x00069dc0) bg_sp_fs_schedule_viewer_highlight_g3

0xe111,	// (0x00069dc8) bg_sp_fs_schedule_viewer_highlight_g4

0xe354,	// (0x0006a00b) bg_sp_fs_schedule_viewer_highlight_g5

0xe121,	// (0x00069dd8) bg_sp_fs_schedule_viewer_highlight_g6

0xe129,	// (0x00069de0) bg_sp_fs_schedule_viewer_highlight_g7

0xe131,	// (0x00069de8) bg_sp_fs_schedule_viewer_highlight_g8

0xa4ab,	// (0x00066162) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd6c,	// (0x0006ba23) bg_sp_fs_schedule_viewer_highlight_g

0x0b6d,	// (0x0005c824) bg_main_sp_fs_ribbon_pane

0x8d60,	// (0x00064a17) main_sp_fs_ribbon_pane_g1

0xd313,	// (0x00068fca) main_sp_fs_ribbon_pane_t1

0x8d69,	// (0x00064a20) main_sp_fs_ribbon_pane_t2

0xd322,	// (0x00068fd9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd7f,	// (0x0006ba36) main_sp_fs_ribbon_pane_t

0xd331,	// (0x00068fe8) main_sp_fs_ribbon_scheduler_pane

0xd339,	// (0x00068ff0) bg_main_sp_fs_ribbon_pane_g1

0xd342,	// (0x00068ff9) bg_main_sp_fs_ribbon_pane_g2

0xd34b,	// (0x00069002) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd86,	// (0x0006ba3d) bg_main_sp_fs_ribbon_pane_g

0xd353,	// (0x0006900a) main_sp_fs_ribbon_scheduler_pane_g1

0xd35c,	// (0x00069013) main_sp_fs_ribbon_scheduler_pane_g2

0xd365,	// (0x0006901c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd8d,	// (0x0006ba44) main_sp_fs_ribbon_scheduler_pane_g

0xd36e,	// (0x00069025) list_cale_mrui_pane

0x8d78,	// (0x00064a2f) sp_fs_scroll_pane_cp07_ParamLimits

0x8d78,	// (0x00064a2f) sp_fs_scroll_pane_cp07

0x8d8e,	// (0x00064a45) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d8e,	// (0x00064a45) bg_sp_fs_schedule_viewer_highlight

0xd377,	// (0x0006902e) list_single_sp_fs_schedule_track_pane_cp01

0xd37f,	// (0x00069036) list_sp_fs_schedule_track_pane

0xd387,	// (0x0006903e) sp_fs_scroll_pane_cp06_ParamLimits

0xd387,	// (0x0006903e) sp_fs_scroll_pane_cp06

0xc552,	// (0x00068209) bgmain_sp_fs_calendar_pane_g1

0x8da0,	// (0x00064a57) list_single_cale_mrui_pane_ParamLimits

0x8da0,	// (0x00064a57) list_single_cale_mrui_pane

0xd399,	// (0x00069050) list_single_cale_mrui_row_pane_ParamLimits

0xd399,	// (0x00069050) list_single_cale_mrui_row_pane

0xd3a6,	// (0x0006905d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd3a6,	// (0x0006905d) list_single_cale_mrui_row_pane_g1

0xd3de,	// (0x00069095) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd3de,	// (0x00069095) list_single_cale_mrui_row_pane_t1

0x8dc3,	// (0x00064a7a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8dc3,	// (0x00064a7a) list_single_cale_mrui_row_pane_t2

0xd3f0,	// (0x000690a7) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd3f0,	// (0x000690a7) list_single_cale_mrui_row_pane_t3

0xd41f,	// (0x000690d6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd41f,	// (0x000690d6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd99,	// (0x0006ba50) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd99,	// (0x0006ba50) list_single_cale_mrui_row_pane_t

0x8e2b,	// (0x00064ae2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e2b,	// (0x00064ae2) list_single_cmail_header_editor_pane_bg_cp01

0x8e51,	// (0x00064b08) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e51,	// (0x00064b08) list_single_cmail_header_editor_pane_bg_cp02

0x8e71,	// (0x00064b28) main_radioblah_text_pane_t1_ParamLimits

0x8e71,	// (0x00064b28) main_radioblah_text_pane_t1

0xd44e,	// (0x00069105) cam6_indi_pane_cp01

0xd456,	// (0x0006910d) cam6_mode_pane_cp01

0xd45e,	// (0x00069115) cam6_pano_pane

0xd467,	// (0x0006911e) cam6_zoom_pane_cp01

0xd471,	// (0x00069128) cam6_pano_image_pane

0xd47a,	// (0x00069131) cam6_pano_pane_g1

0xed4c,	// (0x0006aa03) cam6_pano_pane_g2

0xd483,	// (0x0006913a) cam6_pano_pane_g3

0xd48c,	// (0x00069143) cam6_pano_pane_g4

0xcad6,	// (0x0006878d) cam6_pano_pane_g5

0xd495,	// (0x0006914c) cam6_pano_pane_g6

0xd49d,	// (0x00069154) cam6_pano_pane_g7

0xd4a5,	// (0x0006915c) cam6_pano_pane_g8

0xd4ae,	// (0x00069165) cam6_pano_pane_g9

0x0008,

0xfda2,	// (0x0006ba59) cam6_pano_pane_g

0x0b6d,	// (0x0005c824) main_browser_tag_pane

0xd1f0,	// (0x00068ea7) grid_navstr_albumart_pane

0xd4b9,	// (0x00069170) cell_navstr_albumart_pane_ParamLimits

0xd4b9,	// (0x00069170) cell_navstr_albumart_pane

0xd4d5,	// (0x0006918c) cell_navstr_albumart_pane_g1

0xbe36,	// (0x00067aed) cell_navstr_albumart_pane_g2

0xbe46,	// (0x00067afd) cell_navstr_albumart_pane_g3

0xbe3e,	// (0x00067af5) cell_navstr_albumart_pane_g4

0x0003,

0xfdb5,	// (0x0006ba6c) cell_navstr_albumart_pane_g

0x8e8c,	// (0x00064b43) bt_list_pane_ParamLimits

0x8e8c,	// (0x00064b43) bt_list_pane

0x8ea2,	// (0x00064b59) bt_list_pane_t1

0x8eb1,	// (0x00064b68) bt_list_pane_t2

0x0001,

0xfdbe,	// (0x0006ba75) bt_list_pane_t

0x0b6d,	// (0x0005c824) main_cale_prevew_pane

0x8ec0,	// (0x00064b77) popup_cale_preview_window_ParamLimits

0x8ec0,	// (0x00064b77) popup_cale_preview_window

0x0df0,	// (0x0005caa7) bg_popup_preview_window_pane_cp05_ParamLimits

0x0df0,	// (0x0005caa7) bg_popup_preview_window_pane_cp05

0xd4dd,	// (0x00069194) list_cale_preview_pane_ParamLimits

0xd4dd,	// (0x00069194) list_cale_preview_pane

0x8edb,	// (0x00064b92) list_double_cale_preview_pane_ParamLimits

0x8edb,	// (0x00064b92) list_double_cale_preview_pane

0x8eef,	// (0x00064ba6) list_single_cale_preview_pane_ParamLimits

0x8eef,	// (0x00064ba6) list_single_cale_preview_pane

0x8f07,	// (0x00064bbe) list_single_cale_preview_pane_g1

0x8f0f,	// (0x00064bc6) list_single_cale_preview_pane_t1_ParamLimits

0x8f0f,	// (0x00064bc6) list_single_cale_preview_pane_t1

0x8f24,	// (0x00064bdb) list_double_cale_preview_pane_g1

0x8f2c,	// (0x00064be3) list_double_cale_preview_pane_t1_ParamLimits

0x8f2c,	// (0x00064be3) list_double_cale_preview_pane_t1

0x8f41,	// (0x00064bf8) list_double_cale_preview_pane_t2_ParamLimits

0x8f41,	// (0x00064bf8) list_double_cale_preview_pane_t2

0x0001,

0xfdc3,	// (0x0006ba7a) list_double_cale_preview_pane_t_ParamLimits

0xfdc3,	// (0x0006ba7a) list_double_cale_preview_pane_t

0x0b6d,	// (0x0005c824) main_ezdial_pane

0x0df0,	// (0x0005caa7) main_sp_fs_email_pane_ParamLimits

0x8634,	// (0x000642eb) cmail_ddmenu_btn01_pane_ParamLimits

0x8634,	// (0x000642eb) cmail_ddmenu_btn01_pane

0x8647,	// (0x000642fe) cmail_ddmenu_btn02_pane_ParamLimits

0x8647,	// (0x000642fe) cmail_ddmenu_btn02_pane

0x866a,	// (0x00064321) cmail_ddmenu_btn03_pane_ParamLimits

0x866a,	// (0x00064321) cmail_ddmenu_btn03_pane

0x8690,	// (0x00064347) main_sp_fs_ctrlbar_pane_ParamLimits

0x86b4,	// (0x0006436b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b4a,	// (0x00064801) list_cmail_body_pane_ParamLimits

0xd114,	// (0x00068dcb) bg_button_pane_cp12

0xd129,	// (0x00068de0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd129,	// (0x00068de0) list_single_cmail_header_detail_pane_g3

0x8bd9,	// (0x00064890) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8bd9,	// (0x00064890) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd48,	// (0x0006b9ff) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd48,	// (0x0006b9ff) list_single_cmail_header_detail_pane_t

0xd258,	// (0x00068f0f) phacti_term_pane_t2_ParamLimits

0xd258,	// (0x00068f0f) phacti_term_pane_t2

0x0001,

0xfd52,	// (0x0006ba09) phacti_term_pane_t_ParamLimits

0xfd52,	// (0x0006ba09) phacti_term_pane_t

0xd4e9,	// (0x000691a0) aid_size_list_single_double

0x8f59,	// (0x00064c10) popup_ezdial_listscroll_window

0x8f75,	// (0x00064c2c) popup_number_entry_window_cp01

0xabb0,	// (0x00066867) bg_popup_call_pane_cp09

0xd4f5,	// (0x000691ac) ezdial_list_pane

0xd4fd,	// (0x000691b4) scroll_pane_cp23

0xc01d,	// (0x00067cd4) bg_button_pane_cp028_ParamLimits

0xc01d,	// (0x00067cd4) bg_button_pane_cp028

0x8f83,	// (0x00064c3a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f83,	// (0x00064c3a) cmail_ddmenu_btn01_pane_g1

0x8f8f,	// (0x00064c46) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f8f,	// (0x00064c46) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdc8,	// (0x0006ba7f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdc8,	// (0x0006ba7f) cmail_ddmenu_btn01_pane_g

0xd505,	// (0x000691bc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd505,	// (0x000691bc) cmail_ddmenu_btn01_pane_t1

0xc01d,	// (0x00067cd4) bg_button_pane_cp029_ParamLimits

0xc01d,	// (0x00067cd4) bg_button_pane_cp029

0x8f9b,	// (0x00064c52) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f9b,	// (0x00064c52) cmail_ddmenu_btn02_pane_g1

0x8fb3,	// (0x00064c6a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fb3,	// (0x00064c6a) cmail_ddmenu_btn02_pane_t1

0x0df0,	// (0x0005caa7) bg_button_pane_cp031_ParamLimits

0x0df0,	// (0x0005caa7) bg_button_pane_cp031

0x8f9b,	// (0x00064c52) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f9b,	// (0x00064c52) cmail_ddmenu_btn03_pane_g1

0x8fb3,	// (0x00064c6a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fb3,	// (0x00064c6a) cmail_ddmenu_btn03_pane_t1

0x5e42,	// (0x00061af9) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e5c,	// (0x00061b13) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e5c,	// (0x00061b13) cell_dialer2_keypad_pane_t1_copy1

0x7dce,	// (0x00063a85) ncimui_group_button_pane

0x0df0,	// (0x0005caa7) main_sp_fs_calendar_pane_ParamLimits

0x8b62,	// (0x00064819) list_single_cmail_header_caption_pane_ParamLimits

0x75c6,	// (0x0006327d) aid_recal_txt_sm_pane

0x0b6d,	// (0x0005c824) mian_recal_day_pane

0xd2d9,	// (0x00068f90) popup_sp_fs_cale_preview_window_ParamLimits

0x0b6d,	// (0x0005c824) list_recal_day_pane

0xd533,	// (0x000691ea) list_single_recal_day_pane_ParamLimits

0xd533,	// (0x000691ea) list_single_recal_day_pane

0xd545,	// (0x000691fc) list_single_recal_day_pane_g1_ParamLimits

0xd545,	// (0x000691fc) list_single_recal_day_pane_g1

0xd551,	// (0x00069208) list_single_recal_day_pane_g2_ParamLimits

0xd551,	// (0x00069208) list_single_recal_day_pane_g2

0xd55d,	// (0x00069214) list_single_recal_day_pane_g3_ParamLimits

0xd55d,	// (0x00069214) list_single_recal_day_pane_g3

0x8fd7,	// (0x00064c8e) list_single_recal_day_pane_g4_ParamLimits

0x8fd7,	// (0x00064c8e) list_single_recal_day_pane_g4

0xd569,	// (0x00069220) list_single_recal_day_pane_g5_ParamLimits

0xd569,	// (0x00069220) list_single_recal_day_pane_g5

0xd575,	// (0x0006922c) list_single_recal_day_pane_g6_ParamLimits

0xd575,	// (0x0006922c) list_single_recal_day_pane_g6

0x0005,

0xfdd7,	// (0x0006ba8e) list_single_recal_day_pane_g_ParamLimits

0xfdd7,	// (0x0006ba8e) list_single_recal_day_pane_g

0xd581,	// (0x00069238) list_single_recal_day_pane_t1

0xd58f,	// (0x00069246) list_single_recal_day_pane_t2

0x0001,

0xfde4,	// (0x0006ba9b) list_single_recal_day_pane_t

0x8fe5,	// (0x00064c9c) ncimui_query_button_pane_ParamLimits

0x8fe5,	// (0x00064c9c) ncimui_query_button_pane

0x8ff5,	// (0x00064cac) ncimui_query_button_pane_t1_ParamLimits

0x8ff5,	// (0x00064cac) ncimui_query_button_pane_t1

0xd59d,	// (0x00069254) ncimui_query_button_pane_t2_ParamLimits

0xd59d,	// (0x00069254) ncimui_query_button_pane_t2

0x0001,

0xfde9,	// (0x0006baa0) ncimui_query_button_pane_t_ParamLimits

0xfde9,	// (0x0006baa0) ncimui_query_button_pane_t

0x9008,	// (0x00064cbf) query_button_pane_ParamLimits

0x9008,	// (0x00064cbf) query_button_pane

0x0b6d,	// (0x0005c824) bg_button_pane_cp0028

0xd5b0,	// (0x00069267) query_button_pane_t1

0x3e80,	// (0x0005fb37) main_tport_pane_ParamLimits

0x8a30,	// (0x000646e7) bg_popup_window_pane_cp01_ParamLimits

0x8a30,	// (0x000646e7) bg_popup_window_pane_cp01

0x8a46,	// (0x000646fd) heading_pane_cp08_ParamLimits

0x8a46,	// (0x000646fd) heading_pane_cp08

0x8a57,	// (0x0006470e) heading_pane_cp07_ParamLimits

0x8a57,	// (0x0006470e) heading_pane_cp07

0xd0df,	// (0x00068d96) cell_tport_appsw_pane_g2

0x0002,

0xfd35,	// (0x0006b9ec) cell_tport_appsw_pane_g

0x33c9,	// (0x0005f080) input_candi_list_open_g1

0xa694,	// (0x0006634b) list_cale_time_pane_g6_ParamLimits

0xa694,	// (0x0006634b) list_cale_time_pane_g6

0x4c6e,	// (0x00060925) aid_size_touch_calib_1_ParamLimits

0x4c6e,	// (0x00060925) aid_size_touch_calib_1

0x4c7a,	// (0x00060931) aid_size_touch_calib_2_ParamLimits

0x4c7a,	// (0x00060931) aid_size_touch_calib_2

0x4c90,	// (0x00060947) aid_size_touch_calib_3_ParamLimits

0x4c90,	// (0x00060947) aid_size_touch_calib_3

0x4cae,	// (0x00060965) aid_size_touch_calib_4_ParamLimits

0x4cae,	// (0x00060965) aid_size_touch_calib_4

0x4cc4,	// (0x0006097b) main_touch_calib_button_group_pane_ParamLimits

0x4cc4,	// (0x0006097b) main_touch_calib_button_group_pane

0x4cdc,	// (0x00060993) main_touch_calib_pane_g1_ParamLimits

0x4ce8,	// (0x0006099f) main_touch_calib_pane_g2_ParamLimits

0x4cf4,	// (0x000609ab) main_touch_calib_pane_g3_ParamLimits

0x4d00,	// (0x000609b7) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0006b42c) main_touch_calib_pane_g_ParamLimits

0x4d0c,	// (0x000609c3) main_touch_calib_pane_t1_ParamLimits

0x4d26,	// (0x000609dd) main_touch_calib_pane_t2_ParamLimits

0x4d40,	// (0x000609f7) main_touch_calib_pane_t3_ParamLimits

0x4d54,	// (0x00060a0b) main_touch_calib_pane_t4_ParamLimits

0x4d68,	// (0x00060a1f) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0006b435) main_touch_calib_pane_t_ParamLimits

0xc8a0,	// (0x00068557) list_single_fp_cale_pane_g3_ParamLimits

0xc8a0,	// (0x00068557) list_single_fp_cale_pane_g3

0xddf6,	// (0x00069aad) bg_button_pane_cp012_ParamLimits

0xddf6,	// (0x00069aad) bg_vkb2_func_pane_cp03_ParamLimits

0x6e6b,	// (0x00062b22) cell_vitu2_function_top_pane_g1_ParamLimits

0xddf6,	// (0x00069aad) bg_vkb2_func_pane_cp04_ParamLimits

0x7d6e,	// (0x00063a25) main_ncimui_button_group_pane_ParamLimits

0x7d6e,	// (0x00063a25) main_ncimui_button_group_pane

0x7dbc,	// (0x00063a73) main_ncimui_pane_t3_ParamLimits

0x7dbc,	// (0x00063a73) main_ncimui_pane_t3

0xd206,	// (0x00068ebd) phacti_button_group_pane

0xd4e9,	// (0x000691a0) aid_size_list_single_double_ParamLimits

0x8f59,	// (0x00064c10) popup_ezdial_listscroll_window_ParamLimits

0x8f75,	// (0x00064c2c) popup_number_entry_window_cp01_ParamLimits

0x901b,	// (0x00064cd2) phacti_button_pane_ParamLimits

0x901b,	// (0x00064cd2) phacti_button_pane

0x0b6d,	// (0x0005c824) bg_button_pane_cp14

0xd5be,	// (0x00069275) phacti_button_pane_t1

0x902c,	// (0x00064ce3) main_touch_calib_button_pane_ParamLimits

0x902c,	// (0x00064ce3) main_touch_calib_button_pane

0x9fe1,	// (0x00065c98) bg_button_pane_cp18_ParamLimits

0x9fe1,	// (0x00065c98) bg_button_pane_cp18

0xd5cc,	// (0x00069283) main_touch_calib_button_pane_t1_ParamLimits

0xd5cc,	// (0x00069283) main_touch_calib_button_pane_t1

0xd5e2,	// (0x00069299) main_touch_calib_button_pane_t2_ParamLimits

0xd5e2,	// (0x00069299) main_touch_calib_button_pane_t2

0x0001,

0xfdee,	// (0x0006baa5) main_touch_calib_button_pane_t_ParamLimits

0xfdee,	// (0x0006baa5) main_touch_calib_button_pane_t

0x0b6d,	// (0x0005c824) cell_ncimui_button_pane

0x0b6d,	// (0x0005c824) bg_button_pane_cp032

0xd600,	// (0x000692b7) cell_ncimui_button_pane_t1

0xdd0d,	// (0x000699c4) image3_infobar_pane_ParamLimits

0xdd0d,	// (0x000699c4) image3_infobar_pane

0x817f,	// (0x00063e36) fs_bigclock_status_pane_ParamLimits

0x817f,	// (0x00063e36) fs_bigclock_status_pane

0x818c,	// (0x00063e43) main_fs_bigclock_clock_pane_ParamLimits

0x818c,	// (0x00063e43) main_fs_bigclock_clock_pane

0x819f,	// (0x00063e56) main_fs_bigclock_indi_pane_ParamLimits

0x819f,	// (0x00063e56) main_fs_bigclock_indi_pane

0x81bd,	// (0x00063e74) main_fs_bigclock_swipe_pane_ParamLimits

0x81bd,	// (0x00063e74) main_fs_bigclock_swipe_pane

0x0b6d,	// (0x0005c824) main_fs_clock_dumped_data

0x81de,	// (0x00063e95) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x81de,	// (0x00063e95) list_single_fs_bigclock_indicator_pane_g1

0x81fe,	// (0x00063eb5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x81fe,	// (0x00063eb5) list_single_fs_bigclock_indicator_pane_g2

0x8218,	// (0x00063ecf) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8218,	// (0x00063ecf) list_single_fs_bigclock_indicator_pane_g3

0x8234,	// (0x00063eeb) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8234,	// (0x00063eeb) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x0006b8e1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x0006b8e1) list_single_fs_bigclock_indicator_pane_g

0x825a,	// (0x00063f11) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x825a,	// (0x00063f11) list_single_fs_bigclock_indicator_pane_t1

0x8282,	// (0x00063f39) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8282,	// (0x00063f39) list_single_fs_bigclock_indicator_pane_t2

0x82aa,	// (0x00063f61) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x82aa,	// (0x00063f61) list_single_fs_bigclock_indicator_pane_t3

0x82d4,	// (0x00063f8b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x82d4,	// (0x00063f8b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x0006b8ec) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x0006b8ec) list_single_fs_bigclock_indicator_pane_t

0xd60e,	// (0x000692c5) image3_infobar_fav_pane_ParamLimits

0xd60e,	// (0x000692c5) image3_infobar_fav_pane

0xd61e,	// (0x000692d5) image3_infobar_loc_pane_ParamLimits

0xd61e,	// (0x000692d5) image3_infobar_loc_pane

0xd634,	// (0x000692eb) image3_infobar_time_pane_ParamLimits

0xd634,	// (0x000692eb) image3_infobar_time_pane

0xc552,	// (0x00068209) image3_infobar_time_pane_g1

0xd644,	// (0x000692fb) image3_infobar_time_pane_t1

0xc552,	// (0x00068209) image3_infobar_loc_pane_g1

0xd652,	// (0x00069309) image3_infobar_loc_pane_g2

0x0001,

0xfdf3,	// (0x0006baaa) image3_infobar_loc_pane_g

0xd65a,	// (0x00069311) image3_infobar_loc_pane_t1

0xc552,	// (0x00068209) image3_infobar_fav_pane_g1

0xd668,	// (0x0006931f) image3_infobar_fav_pane_g2

0x0001,

0xfdf8,	// (0x0006baaf) image3_infobar_fav_pane_g

0xd670,	// (0x00069327) fs_bigclock_status_battery_pane

0xd679,	// (0x00069330) fs_bigclock_status_signal_pane

0xd682,	// (0x00069339) fs_bigclock_status_title_pane

0xd68b,	// (0x00069342) fs_bigclock_status_signal_pane_g1

0xd694,	// (0x0006934b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdfd,	// (0x0006bab4) fs_bigclock_status_signal_pane_g

0xd69c,	// (0x00069353) fs_bigclock_status_battery_pane_g1

0xd6a5,	// (0x0006935c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe02,	// (0x0006bab9) fs_bigclock_status_battery_pane_g

0xd6ad,	// (0x00069364) fs_bigclock_status_title_pane_t1

0xc552,	// (0x00068209) main_fs_bigclock_clock_pane_g1

0xd6bb,	// (0x00069372) main_fs_bigclock_clock_pane_g2

0xd6bb,	// (0x00069372) main_fs_bigclock_clock_pane_g3

0xd6bb,	// (0x00069372) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe07,	// (0x0006babe) main_fs_bigclock_clock_pane_g

0xd6c7,	// (0x0006937e) main_fs_bigclock_clock_pane_t1

0x9041,	// (0x00064cf8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe10,	// (0x0006bac7) main_fs_bigclock_clock_pane_t

0xd6d5,	// (0x0006938c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd6d5,	// (0x0006938c) list_single_fs_bigclock_indicator_pane

0x9050,	// (0x00064d07) list_single_fs_bigclock_pane_ParamLimits

0x9050,	// (0x00064d07) list_single_fs_bigclock_pane

0xd6ef,	// (0x000693a6) main_fs_bigclock_indicator_pane_t1

0xd6fe,	// (0x000693b5) list_single_fs_bigclock_pane_g1

0xd706,	// (0x000693bd) list_single_fs_bigclock_pane_t1

0xc552,	// (0x00068209) main_fs_bigclock_swipe_pane_g1

0xd746,	// (0x000693fd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe21,	// (0x0006bad8) main_fs_bigclock_swipe_pane_g

0xd74e,	// (0x00069405) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd74e,	// (0x00069405) main_fs_bigclock_swipe_pane_t1

0x2b4f,	// (0x0005e806) call_type_pane_ParamLimits

0x0b6d,	// (0x0005c824) main_btmg_pane

0xd3d2,	// (0x00069089) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd3d2,	// (0x00069089) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd94,	// (0x0006ba4b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd94,	// (0x0006ba4b) list_single_cale_mrui_row_pane_g

0xd523,	// (0x000691da) list_recal_vselct_arw_lo_pane

0xd52b,	// (0x000691e2) list_recal_vselct_arw_up_pane

0x75bd,	// (0x00063274) list_recal_vselct_pane

0xd76b,	// (0x00069422) btmg_button_pane

0x90b7,	// (0x00064d6e) main_btmg_pane_g1

0x0b6d,	// (0x0005c824) bg_button_pane_cp044

0xd775,	// (0x0006942c) btmg_button_pane_t1

0xc015,	// (0x00067ccc) aid_listscroll_gen

0x0df0,	// (0x0005caa7) main_cntbar_detail_pane

0xd0f5,	// (0x00068dac) list_cmail_folder_pane

0xd105,	// (0x00068dbc) sp_fs_scroll_pane_cp03_ParamLimits

0x90c1,	// (0x00064d78) list_single_fs_dyc_pane_cp01_ParamLimits

0x90c1,	// (0x00064d78) list_single_fs_dyc_pane_cp01

0xd783,	// (0x0006943a) aid_size_cmail_indent

0xd78c,	// (0x00069443) list_single_dyc_row_pane_cp01

0x910c,	// (0x00064dc3) cntbar_detail_list_pane_ParamLimits

0x910c,	// (0x00064dc3) cntbar_detail_list_pane

0x915e,	// (0x00064e15) main_cntbar_detail_cont_pane_ParamLimits

0x915e,	// (0x00064e15) main_cntbar_detail_cont_pane

0x2a72,	// (0x0005e729) scroll_pane_cp032_ParamLimits

0x2a72,	// (0x0005e729) scroll_pane_cp032

0x9172,	// (0x00064e29) cntbar_detail_list_event_pane_ParamLimits

0x9172,	// (0x00064e29) cntbar_detail_list_event_pane

0x911e,	// (0x00064dd5) cntbar_detail_list_shct_pane

0xa519,	// (0x000661d0) aid_list_gen

0xd795,	// (0x0006944c) aid_scroll

0xd79e,	// (0x00069455) aid_size_touch_scroll_bar

0xd7a7,	// (0x0006945e) aid_list_double

0xd7b0,	// (0x00069467) aid_list_single

0x9182,	// (0x00064e39) aid_list_single_lg

0xd7b9,	// (0x00069470) aid_list_z_g_a_sm

0xd7c1,	// (0x00069478) aid_list_z_g_d

0xd7c9,	// (0x00069480) aid_txt_z_prm

0x918b,	// (0x00064e42) aid_txt_z_prm_cp01

0x9199,	// (0x00064e50) aid_txt_z_sec

0x91a7,	// (0x00064e5e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91a7,	// (0x00064e5e) main_cntbar_detail_cont_pane_g1

0x91bb,	// (0x00064e72) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91bb,	// (0x00064e72) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe26,	// (0x0006badd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe26,	// (0x0006badd) main_cntbar_detail_cont_pane_g

0xd7d7,	// (0x0006948e) main_cntbar_detail_cont_pane_t1

0xd7e5,	// (0x0006949c) main_cntbar_detail_cont_pane_t2

0xd7f3,	// (0x000694aa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe2b,	// (0x0006bae2) main_cntbar_detail_cont_pane_t

0x91cb,	// (0x00064e82) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91cb,	// (0x00064e82) cell_cntbar_detail_list_shct_pane

0xd801,	// (0x000694b8) cntbar_detail_list_shct_pane_g1

0xd80a,	// (0x000694c1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe32,	// (0x0006bae9) cntbar_detail_list_shct_pane_g

0x91dd,	// (0x00064e94) cntbar_detail_list_event_pane_g1_ParamLimits

0x91dd,	// (0x00064e94) cntbar_detail_list_event_pane_g1

0x91e9,	// (0x00064ea0) cntbar_detail_list_event_pane_g2_ParamLimits

0x91e9,	// (0x00064ea0) cntbar_detail_list_event_pane_g2

0x0005,

0xfe37,	// (0x0006baee) cntbar_detail_list_event_pane_g_ParamLimits

0xfe37,	// (0x0006baee) cntbar_detail_list_event_pane_g

0x9257,	// (0x00064f0e) cntbar_detail_list_event_pane_t1_ParamLimits

0x9257,	// (0x00064f0e) cntbar_detail_list_event_pane_t1

0x926c,	// (0x00064f23) cntbar_detail_list_event_pane_t2_ParamLimits

0x926c,	// (0x00064f23) cntbar_detail_list_event_pane_t2

0x0002,

0xfe44,	// (0x0006bafb) cntbar_detail_list_event_pane_t_ParamLimits

0xfe44,	// (0x0006bafb) cntbar_detail_list_event_pane_t

0xc552,	// (0x00068209) cell_cntbar_detail_list_shct_pane_g1

0x2ef3,	// (0x0005ebaa) navi_pane_mv_g3

0x0df0,	// (0x0005caa7) main_cntbar_detail_pane_ParamLimits

0x0b6d,	// (0x0005c824) main_notif_wgt_pane

0xdb4f,	// (0x00069806) aid_tch_main_mp4_pane_g4

0xdd03,	// (0x000699ba) popup_slider_window_cp02

0xd51a,	// (0x000691d1) list_recal_day_event_pane

0x90dc,	// (0x00064d93) cntbar_detail_btn_pane_ParamLimits

0x90dc,	// (0x00064d93) cntbar_detail_btn_pane

0x90f4,	// (0x00064dab) cntbar_detail_btn_pane_cp01_ParamLimits

0x90f4,	// (0x00064dab) cntbar_detail_btn_pane_cp01

0x911e,	// (0x00064dd5) cntbar_detail_list_shct_pane_ParamLimits

0x912e,	// (0x00064de5) cntbar_detail_pane_g1_ParamLimits

0x912e,	// (0x00064de5) cntbar_detail_pane_g1

0x9142,	// (0x00064df9) cntbar_detail_pane_t1_ParamLimits

0x9142,	// (0x00064df9) cntbar_detail_pane_t1

0x91f5,	// (0x00064eac) cntbar_detail_list_event_pane_g3_ParamLimits

0x91f5,	// (0x00064eac) cntbar_detail_list_event_pane_g3

0x920d,	// (0x00064ec4) cntbar_detail_list_event_pane_g4_ParamLimits

0x920d,	// (0x00064ec4) cntbar_detail_list_event_pane_g4

0x9225,	// (0x00064edc) cntbar_detail_list_event_pane_g5_ParamLimits

0x9225,	// (0x00064edc) cntbar_detail_list_event_pane_g5

0x923d,	// (0x00064ef4) cntbar_detail_list_event_pane_g6_ParamLimits

0x923d,	// (0x00064ef4) cntbar_detail_list_event_pane_g6

0x9281,	// (0x00064f38) cntbar_detail_list_event_pane_t3_ParamLimits

0x9281,	// (0x00064f38) cntbar_detail_list_event_pane_t3

0x9293,	// (0x00064f4a) popup_notif_wgt_window_ParamLimits

0x9293,	// (0x00064f4a) popup_notif_wgt_window

0x92ac,	// (0x00064f63) popup_submenu_window_cp01_ParamLimits

0x92ac,	// (0x00064f63) popup_submenu_window_cp01

0xabb0,	// (0x00066867) bg_popup_window_pane_cp10

0xd813,	// (0x000694ca) listscroll_notif_wgt_pane

0xd81d,	// (0x000694d4) list_notif_wgt_window

0xd826,	// (0x000694dd) scroll_pane_cp033

0xd82f,	// (0x000694e6) list_notif_wgt_row_pane_ParamLimits

0xd82f,	// (0x000694e6) list_notif_wgt_row_pane

0xd843,	// (0x000694fa) aid_size_list_notif_wgt_del

0xd84c,	// (0x00069503) list_notif_wgt_row_pane_g1

0xd854,	// (0x0006950b) list_notif_wgt_row_pane_g2

0xd85c,	// (0x00069513) list_notif_wgt_row_pane_g3

0x0002,

0xfe4b,	// (0x0006bb02) list_notif_wgt_row_pane_g

0xd865,	// (0x0006951c) list_notif_wgt_row_pane_t1

0xd873,	// (0x0006952a) list_notif_wgt_row_pane_t2

0xd881,	// (0x00069538) list_notif_wgt_row_pane_t3

0x0002,

0xfe52,	// (0x0006bb09) list_notif_wgt_row_pane_t

0xe36e,	// (0x0006a025) list_recal_day_event_pane_g1

0xd88f,	// (0x00069546) list_recal_day_event_pane_t1

0x0b6d,	// (0x0005c824) bg_button_pane_cp045

0xd89e,	// (0x00069555) cntbar_detail_btn_pane_t1

0xc01d,	// (0x00067cd4) main_callh_pane_ParamLimits

0xc01d,	// (0x00067cd4) main_callh_pane

0x0b6d,	// (0x0005c824) main_coverflow0_pane

0x0b6d,	// (0x0005c824) main_wgtman_pane

0x81cb,	// (0x00063e82) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81cb,	// (0x00063e82) main_fs_bigclock_unlock_btn_pane

0xd0d7,	// (0x00068d8e) bg_button_pane_cp16

0x8af4,	// (0x000647ab) cell_tport_appsw_pane_g3

0x92be,	// (0x00064f75) cf0_flow_pane_ParamLimits

0x92be,	// (0x00064f75) cf0_flow_pane

0xd8ac,	// (0x00069563) listscroll_cf0_pane

0xd8b5,	// (0x0006956c) main_cf0_pane_g1

0x92d3,	// (0x00064f8a) main_cf0_pane_t1_ParamLimits

0x92d3,	// (0x00064f8a) main_cf0_pane_t1

0x92ea,	// (0x00064fa1) main_cf0_pane_t2_ParamLimits

0x92ea,	// (0x00064fa1) main_cf0_pane_t2

0x0001,

0xfe59,	// (0x0006bb10) main_cf0_pane_t_ParamLimits

0xfe59,	// (0x0006bb10) main_cf0_pane_t

0xd8bf,	// (0x00069576) scroll_pane_cp11

0x9301,	// (0x00064fb8) cf0_flow_pane_g1

0x930d,	// (0x00064fc4) cf0_flow_pane_g2

0x0001,

0xfe5e,	// (0x0006bb15) cf0_flow_pane_g

0x9319,	// (0x00064fd0) cf0_flow_pane_t1

0x0b6d,	// (0x0005c824) main_call6_pane

0x0b6d,	// (0x0005c824) main_calllock_pane

0x932b,	// (0x00064fe2) call6_btn_grp_pane_ParamLimits

0x932b,	// (0x00064fe2) call6_btn_grp_pane

0x9347,	// (0x00064ffe) call6_pane_g1_ParamLimits

0x9347,	// (0x00064ffe) call6_pane_g1

0x935d,	// (0x00065014) popup_call6_1st_window_ParamLimits

0x935d,	// (0x00065014) popup_call6_1st_window

0x936e,	// (0x00065025) popup_call6_2nd_window_ParamLimits

0x936e,	// (0x00065025) popup_call6_2nd_window

0x937f,	// (0x00065036) cell_call6_btn_pane_ParamLimits

0x937f,	// (0x00065036) cell_call6_btn_pane

0xabb0,	// (0x00066867) bg_popup_call2_in_pane_cp03

0xd8ca,	// (0x00069581) popup_call6_1st_window_g1

0xd8d2,	// (0x00069589) popup_call6_1st_window_g2

0xd8da,	// (0x00069591) popup_call6_1st_window_g3

0x0002,

0xfe63,	// (0x0006bb1a) popup_call6_1st_window_g

0xd8e2,	// (0x00069599) popup_call6_1st_window_t1

0xd8f1,	// (0x000695a8) popup_call6_1st_window_t2

0xd901,	// (0x000695b8) popup_call6_1st_window_t3

0x0002,

0xfe6a,	// (0x0006bb21) popup_call6_1st_window_t

0xabb0,	// (0x00066867) bg_popup_call2_in_pane_cp04

0xd8ca,	// (0x00069581) popup_call6_2nd_window_g1

0xd8d2,	// (0x00069589) popup_call6_2nd_window_g2

0xd8da,	// (0x00069591) popup_call6_2nd_window_g3

0x0002,

0xfe63,	// (0x0006bb1a) popup_call6_2nd_window_g

0xd8e2,	// (0x00069599) popup_call6_2nd_window_t1

0x0b6d,	// (0x0005c824) bg_button_pane_cp15

0xd911,	// (0x000695c8) cell_call6_btn_pane_g1

0xd91a,	// (0x000695d1) cell_call6_btn_pane_t1

0x9393,	// (0x0006504a) listscroll_wgtman_pane_ParamLimits

0x9393,	// (0x0006504a) listscroll_wgtman_pane

0x93b6,	// (0x0006506d) wgtman_btn_pane_ParamLimits

0x93b6,	// (0x0006506d) wgtman_btn_pane

0xaa76,	// (0x0006672d) aid_scroll_copy1

0xd929,	// (0x000695e0) list_wgtman_pane

0x93f9,	// (0x000650b0) wgtman_btn_pane_g1_ParamLimits

0x93f9,	// (0x000650b0) wgtman_btn_pane_g1

0x9425,	// (0x000650dc) wgtman_btn_pane_t1_ParamLimits

0x9425,	// (0x000650dc) wgtman_btn_pane_t1

0xd933,	// (0x000695ea) wgtman_btn_pane_t2_ParamLimits

0xd933,	// (0x000695ea) wgtman_btn_pane_t2

0x0001,

0xfe71,	// (0x0006bb28) wgtman_btn_pane_t_ParamLimits

0xfe71,	// (0x0006bb28) wgtman_btn_pane_t

0xd94a,	// (0x00069601) listrow_wgtman_pane_ParamLimits

0xd94a,	// (0x00069601) listrow_wgtman_pane

0xd95e,	// (0x00069615) listrow_wgtman_pane_g1

0x9462,	// (0x00065119) listrow_wgtman_pane_g2

0x0001,

0xfe76,	// (0x0006bb2d) listrow_wgtman_pane_g

0xd967,	// (0x0006961e) listrow_wgtman_pane_t1

0xd975,	// (0x0006962c) listrow_wgtman_pane_t2

0x0001,

0xfe7b,	// (0x0006bb32) listrow_wgtman_pane_t

0xd983,	// (0x0006963a) wait_bar_pane_cp09

0xd98b,	// (0x00069642) main_calllock_btn_pane

0xd995,	// (0x0006964c) main_calllock_pane_g1

0x0b6d,	// (0x0005c824) bg_button_pane_cp17

0xd9a1,	// (0x00069658) main_calllock_btn_pane_g1

0xd9aa,	// (0x00069661) main_calllock_btn_pane_t1

0x0b6d,	// (0x0005c824) main_dialer3_pane

0x0b6d,	// (0x0005c824) main_fmrd2_pane

0xc552,	// (0x00068209) main_fs_bigclock_unlock_btn_pane_g1

0xd9c1,	// (0x00069678) main_fs_bigclock_unlock_btn_pane_t1

0x946c,	// (0x00065123) area_fmrd2_info_pane_ParamLimits

0x946c,	// (0x00065123) area_fmrd2_info_pane

0x947f,	// (0x00065136) area_fmrd2_visual_pane_ParamLimits

0x947f,	// (0x00065136) area_fmrd2_visual_pane

0x948d,	// (0x00065144) fmrd2_indi_pane_ParamLimits

0x948d,	// (0x00065144) fmrd2_indi_pane

0x949a,	// (0x00065151) area_fmrd2_visual_pane_g1

0x94a2,	// (0x00065159) area_fmrd2_visual_pane_t1

0x94b2,	// (0x00065169) area_fmrd2_visual_pane_t2

0x94c2,	// (0x00065179) area_fmrd2_visual_pane_t3

0x0002,

0xfe85,	// (0x0006bb3c) area_fmrd2_visual_pane_t

0x94d2,	// (0x00065189) area_fmrd2_info_pane_g1

0x94da,	// (0x00065191) area_fmrd2_info_pane_t1

0x94ea,	// (0x000651a1) area_fmrd2_info_pane_t2

0x94fa,	// (0x000651b1) area_fmrd2_info_pane_t3

0x950a,	// (0x000651c1) area_fmrd2_info_pane_t4

0x0003,

0xfe8c,	// (0x0006bb43) area_fmrd2_info_pane_t

0x951a,	// (0x000651d1) fmrd2_indi_pane_t1

0x952a,	// (0x000651e1) fmrd2_indi_pane_t2

0x953a,	// (0x000651f1) fmrd2_indi_pane_t3

0x0002,

0xfe95,	// (0x0006bb4c) fmrd2_indi_pane_t

0x8243,	// (0x00063efa) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8243,	// (0x00063efa) list_single_fs_bigclock_indicator_pane_g5

0x82e9,	// (0x00063fa0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x82e9,	// (0x00063fa0) list_single_fs_bigclock_indicator_pane_t5

0x8cbb,	// (0x00064972) aid_cell_bcale_month_pane_ParamLimits

0x8cbb,	// (0x00064972) aid_cell_bcale_month_pane

0x8ccd,	// (0x00064984) bcale_month_pane_ParamLimits

0x8ccd,	// (0x00064984) bcale_month_pane

0x8ce5,	// (0x0006499c) bcale_preview_pane_ParamLimits

0x8ce5,	// (0x0006499c) bcale_preview_pane

0xd706,	// (0x000693bd) list_single_fs_bigclock_pane_t1_ParamLimits

0xd722,	// (0x000693d9) list_single_fs_bigclock_pane_t2_ParamLimits

0xd722,	// (0x000693d9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe1c,	// (0x0006bad3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe1c,	// (0x0006bad3) list_single_fs_bigclock_pane_t

0xd9b9,	// (0x00069670) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe80,	// (0x0006bb37) main_fs_bigclock_unlock_btn_pane_g

0x954a,	// (0x00065201) aid_dia3_key_size_ParamLimits

0x954a,	// (0x00065201) aid_dia3_key_size

0x9559,	// (0x00065210) aid_dia3_listrow_size_ParamLimits

0x9559,	// (0x00065210) aid_dia3_listrow_size

0x9567,	// (0x0006521e) dia3_keypad_fun_pane_ParamLimits

0x9567,	// (0x0006521e) dia3_keypad_fun_pane

0x9583,	// (0x0006523a) dia3_keypad_num_pane_ParamLimits

0x9583,	// (0x0006523a) dia3_keypad_num_pane

0x959c,	// (0x00065253) dia3_listscroll_pane_ParamLimits

0x959c,	// (0x00065253) dia3_listscroll_pane

0x95b1,	// (0x00065268) dia3_numentry_pane_ParamLimits

0x95b1,	// (0x00065268) dia3_numentry_pane

0xd9cf,	// (0x00069686) dia3_list_pane

0xd9da,	// (0x00069691) scroll_pane_cp12

0x0b6d,	// (0x0005c824) bg_dia3_numentry_pane

0xd9e5,	// (0x0006969c) dia3_numentry_pane_t1

0x95c4,	// (0x0006527b) cell_dia3_key_num_pane

0x95cc,	// (0x00065283) cell_dia3_key0_fun_pane_ParamLimits

0x95cc,	// (0x00065283) cell_dia3_key0_fun_pane

0x95e0,	// (0x00065297) cell_dia3_key1_fun_pane_ParamLimits

0x95e0,	// (0x00065297) cell_dia3_key1_fun_pane

0x95f8,	// (0x000652af) dia3_listrow_pane

0xebc4,	// (0x0006a87b) bg_dia3_numentry_pane_g1

0x0b6d,	// (0x0005c824) bg_button_pane_cp21

0xd9f4,	// (0x000696ab) cell_dia3_key_num_pane_t1

0xda02,	// (0x000696b9) cell_dia3_key_num_pane_t2

0xda11,	// (0x000696c8) cell_dia3_key_num_pane_t3

0xda20,	// (0x000696d7) cell_dia3_key_num_pane_t4

0x0003,

0xfe9c,	// (0x0006bb53) cell_dia3_key_num_pane_t

0x0b6d,	// (0x0005c824) bg_button_pane_cp19

0x960a,	// (0x000652c1) cell_dia3_key0_fun_pane_g1

0x0b6d,	// (0x0005c824) bg_button_pane_cp20

0x9612,	// (0x000652c9) cell_dia3_key1_fun_pane_g1

0x961a,	// (0x000652d1) area_left_week_number_pane

0x9623,	// (0x000652da) area_top_day_name_pane

0x962c,	// (0x000652e3) frame_month_view_pane

0x9638,	// (0x000652ef) grid_month_view_pane

0x9642,	// (0x000652f9) cell_top_day_name_pane_ParamLimits

0x9642,	// (0x000652f9) cell_top_day_name_pane

0x965c,	// (0x00065313) cell_area_left_week_number_pane_ParamLimits

0x965c,	// (0x00065313) cell_area_left_week_number_pane

0x9672,	// (0x00065329) cell_month_view_pane_ParamLimits

0x9672,	// (0x00065329) cell_month_view_pane

0xda2f,	// (0x000696e6) frm_month_g1

0x9691,	// (0x00065348) frm_month_g2

0x969b,	// (0x00065352) frm_month_g3

0x96a5,	// (0x0006535c) frm_month_g4

0x96af,	// (0x00065366) frm_month_g5

0x96b9,	// (0x00065370) frm_month_g6

0x96c5,	// (0x0006537c) frm_month_g7

0xda38,	// (0x000696ef) frm_month_g8

0x96d1,	// (0x00065388) frm_month_g9

0x96da,	// (0x00065391) frm_month_g10

0x96e3,	// (0x0006539a) frm_month_g11

0x96ec,	// (0x000653a3) frm_month_g12

0x96f5,	// (0x000653ac) frm_month_g13

0x96fe,	// (0x000653b5) frm_month_g14

0x9707,	// (0x000653be) frm_month_g15

0x9712,	// (0x000653c9) frm_month_g16

0x000f,

0xfea5,	// (0x0006bb5c) frm_month_g

0x971d,	// (0x000653d4) cell_top_day_name_pane_t1

0x972c,	// (0x000653e3) cell_area_left_week_number_pane_g1

0x971d,	// (0x000653d4) cell_area_left_week_number_pane_t1

0xc552,	// (0x00068209) cell_month_view_pane_g1

0x9734,	// (0x000653eb) cell_month_view_pane_t1

0x0b6d,	// (0x0005c824) main_fps_pane

0xf03b,	// (0x0006acf2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf03b,	// (0x0006acf2) cmail_ddmenu_btn02_pane_cp1

0xf057,	// (0x0006ad0e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf057,	// (0x0006ad0e) cmail_ddmenu_btn02_pane_cp2

0x8fa7,	// (0x00064c5e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fa7,	// (0x00064c5e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdcd,	// (0x0006ba84) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdcd,	// (0x0006ba84) cmail_ddmenu_btn02_pane_g

0x8fc5,	// (0x00064c7c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fc5,	// (0x00064c7c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdd2,	// (0x0006ba89) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdd2,	// (0x0006ba89) cmail_ddmenu_btn02_pane_t

0x9743,	// (0x000653fa) fps_text_pane_ParamLimits

0x9743,	// (0x000653fa) fps_text_pane

0x975a,	// (0x00065411) main_fps_pane_g1_ParamLimits

0x975a,	// (0x00065411) main_fps_pane_g1

0x9772,	// (0x00065429) wait_bar_pane_cp010_ParamLimits

0x9772,	// (0x00065429) wait_bar_pane_cp010

0x9785,	// (0x0006543c) fps_text_pane_t1_ParamLimits

0x9785,	// (0x0006543c) fps_text_pane_t1

0xeb39,	// (0x0006a7f0) cam4_image_uncrop_pane_g1

0xeb42,	// (0x0006a7f9) cam4_image_uncrop_pane_g2

0x62be,	// (0x00061f75) cam4_image_uncrop_pane_g3

0x62c7,	// (0x00061f7e) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0006b5c4) cam4_image_uncrop_pane_g

0x95f8,	// (0x000652af) dia3_listrow_pane_ParamLimits

0x0b6d,	// (0x0005c824) main_phob2_pane

0x8abb,	// (0x00064772) cell_tport_appsw_pane_cp02_ParamLimits

0x8abb,	// (0x00064772) cell_tport_appsw_pane_cp02

0x8acf,	// (0x00064786) cell_tport_appsw_pane_cp03_ParamLimits

0x8acf,	// (0x00064786) cell_tport_appsw_pane_cp03

0x0b6d,	// (0x0005c824) phob2_contact_card_pane

0x0b6d,	// (0x0005c824) phob2_listscroll_pane

0xda41,	// (0x000696f8) phob2_list_pane

0xda49,	// (0x00069700) scroll_pane_cp034

0x979d,	// (0x00065454) phob2_cc_data_pane_ParamLimits

0x979d,	// (0x00065454) phob2_cc_data_pane

0x97be,	// (0x00065475) phob2_cc_listscroll_pane_ParamLimits

0x97be,	// (0x00065475) phob2_cc_listscroll_pane

0x97e0,	// (0x00065497) list_double_large_graphic_phob2_pane_ParamLimits

0x97e0,	// (0x00065497) list_double_large_graphic_phob2_pane

0x97f5,	// (0x000654ac) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x97f5,	// (0x000654ac) list_double_large_graphic_phob2_pane_g1

0x9802,	// (0x000654b9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9802,	// (0x000654b9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfec6,	// (0x0006bb7d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfec6,	// (0x0006bb7d) list_double_large_graphic_phob2_pane_g

0x980e,	// (0x000654c5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x980e,	// (0x000654c5) list_double_large_graphic_phob2_pane_t1

0x9823,	// (0x000654da) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9823,	// (0x000654da) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfecb,	// (0x0006bb82) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfecb,	// (0x0006bb82) list_double_large_graphic_phob2_pane_t

0x0b6d,	// (0x0005c824) list_highlight_pane_cp024

0xda51,	// (0x00069708) phob2_cc_button_pane

0x9835,	// (0x000654ec) phob2_cc_data_pane_g1_ParamLimits

0x9835,	// (0x000654ec) phob2_cc_data_pane_g1

0x984b,	// (0x00065502) phob2_cc_data_pane_g2_ParamLimits

0x984b,	// (0x00065502) phob2_cc_data_pane_g2

0x0001,

0xfed0,	// (0x0006bb87) phob2_cc_data_pane_g_ParamLimits

0xfed0,	// (0x0006bb87) phob2_cc_data_pane_g

0x985f,	// (0x00065516) phob2_cc_data_pane_t1_ParamLimits

0x985f,	// (0x00065516) phob2_cc_data_pane_t1

0x9879,	// (0x00065530) phob2_cc_data_pane_t2_ParamLimits

0x9879,	// (0x00065530) phob2_cc_data_pane_t2

0x9893,	// (0x0006554a) phob2_cc_data_pane_t3_ParamLimits

0x9893,	// (0x0006554a) phob2_cc_data_pane_t3

0x0002,

0xfed5,	// (0x0006bb8c) phob2_cc_data_pane_t_ParamLimits

0xfed5,	// (0x0006bb8c) phob2_cc_data_pane_t

0xda59,	// (0x00069710) phob2_cc_list_pane_ParamLimits

0xda59,	// (0x00069710) phob2_cc_list_pane

0xe737,	// (0x0006a3ee) scroll_pane_cp035_ParamLimits

0xe737,	// (0x0006a3ee) scroll_pane_cp035

0x0df0,	// (0x0005caa7) bg_button_pane_cp033

0xda65,	// (0x0006971c) phob2_cc_button_pane_g1

0xda71,	// (0x00069728) phob2_cc_button_pane_t1

0xda86,	// (0x0006973d) phob2_cc_button_pane_t2

0x0001,

0xfedc,	// (0x0006bb93) phob2_cc_button_pane_t

0x98ad,	// (0x00065564) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98ad,	// (0x00065564) list_double_large_graphic_phob2_cc_pane

0x98c2,	// (0x00065579) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98c2,	// (0x00065579) list_double_large_graphic_phob2_cc_pane_g1

0x98ce,	// (0x00065585) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x98ce,	// (0x00065585) list_double_large_graphic_phob2_cc_pane_g2

0x98da,	// (0x00065591) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x98da,	// (0x00065591) list_double_large_graphic_phob2_cc_pane_g3

0x98e6,	// (0x0006559d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x98e6,	// (0x0006559d) list_double_large_graphic_phob2_cc_pane_g4

0x98f2,	// (0x000655a9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x98f2,	// (0x000655a9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfee1,	// (0x0006bb98) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfee1,	// (0x0006bb98) list_double_large_graphic_phob2_cc_pane_g

0x98fe,	// (0x000655b5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x98fe,	// (0x000655b5) list_double_large_graphic_phob2_cc_pane_t1

0x9927,	// (0x000655de) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9927,	// (0x000655de) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeec,	// (0x0006bba3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeec,	// (0x0006bba3) list_double_large_graphic_phob2_cc_pane_t

0xda98,	// (0x0006974f) list_highlight_pane_cp025_ParamLimits

0xda98,	// (0x0006974f) list_highlight_pane_cp025

0x0df0,	// (0x0005caa7) bg_button_pane_cp033_ParamLimits

0xda65,	// (0x0006971c) phob2_cc_button_pane_g1_ParamLimits

0xda71,	// (0x00069728) phob2_cc_button_pane_t1_ParamLimits

0xda86,	// (0x0006973d) phob2_cc_button_pane_t2_ParamLimits

0xfedc,	// (0x0006bb93) phob2_cc_button_pane_t_ParamLimits

0x0baf,	// (0x0005c866) popup_wgtman_window

0xe21f,	// (0x00069ed6) scroll_pane_cp038

0x93db,	// (0x00065092) wgtman_btn_pane_cp_01_ParamLimits

0x93db,	// (0x00065092) wgtman_btn_pane_cp_01

0xdaa6,	// (0x0006975d) wgtman_content_pane

0xdaaf,	// (0x00069766) wgtman_heading_pane

0x0b6d,	// (0x0005c824) bg_heading_pane_cp02

0xdab8,	// (0x0006976f) wgtman_heading_pane_g1

0xdac0,	// (0x00069777) wgtman_heading_pane_t1

0xdace,	// (0x00069785) scroll_pane_cp036

0xdad6,	// (0x0006978d) wgtman_list_pane

0xef45,	// (0x0006abfc) wgtman_list_pane_t1_ParamLimits

0xef45,	// (0x0006abfc) wgtman_list_pane_t1

0xdd61,	// (0x00069a18) cam4_grid_pane

0x7023,	// (0x00062cda) bg_button_pane_cp015_ParamLimits

0x7037,	// (0x00062cee) bg_button_pane_cp016_ParamLimits

0x704a,	// (0x00062d01) bg_button_pane_cp017_ParamLimits

0x70a2,	// (0x00062d59) popup_vitu2_query_window_g3_ParamLimits

0x70a2,	// (0x00062d59) popup_vitu2_query_window_g3

0x715f,	// (0x00062e16) popup_vitu2_query_window_t6_ParamLimits

0x715f,	// (0x00062e16) popup_vitu2_query_window_t6

0x718a,	// (0x00062e41) popup_vitu2_query_window_t7_ParamLimits

0x718a,	// (0x00062e41) popup_vitu2_query_window_t7

0xeb39,	// (0x0006a7f0) cam4_grid_pane_g1

0xeb42,	// (0x0006a7f9) cam4_grid_pane_g2

0xdade,	// (0x00069795) cam4_grid_pane_g3

0xdae7,	// (0x0006979e) cam4_grid_pane_g4

0x0003,

0xfef1,	// (0x0006bba8) cam4_grid_pane_g

0x1c6c,	// (0x0005d923) aid_placing_vt_slider_lsc_ParamLimits

0x1f5c,	// (0x0005dc13) vidtel_button_pane_ParamLimits

0x1f5c,	// (0x0005dc13) vidtel_button_pane

0x0b6d,	// (0x0005c824) bg_button_pane_cp034

0x9950,	// (0x00065607) vidtel_button_pane_g1

0xdaf2,	// (0x000697a9) vidtel_button_pane_t1

0xe34c,	// (0x0006a003) aid_size_vtel_slider_touch

0xe737,	// (0x0006a3ee) scroll_pane_cp039

0xec02,	// (0x0006a8b9) ncim_query_button_pane_cp01_ParamLimits

0xec21,	// (0x0006a8d8) ncimui_query_pane_g1_ParamLimits

0x0df0,	// (0x0005caa7) input_focus_pane_cp012_ParamLimits

0xec46,	// (0x0006a8fd) ncim_query_entry_pane_t1_ParamLimits

0xe737,	// (0x0006a3ee) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
