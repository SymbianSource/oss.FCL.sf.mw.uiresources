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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00030b00 };

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
0x597a,	// (0x0003647a) Screen

0x5986,	// (0x00036486) application_window

0x59e2,	// (0x000364e2) area_bottom_pane_ParamLimits

0x59e2,	// (0x000364e2) area_bottom_pane

0x5a40,	// (0x00036540) area_top_pane_ParamLimits

0x5a40,	// (0x00036540) area_top_pane

0x5aa4,	// (0x000365a4) call_video_uplink_pane_ParamLimits

0x5aa4,	// (0x000365a4) call_video_uplink_pane

0x5ae3,	// (0x000365e3) main_pane_ParamLimits

0x5ae3,	// (0x000365e3) main_pane

0x0d7f,	// (0x0003187f) context_pane

0x8b24,	// (0x00039624) navi_pane

0x8b4d,	// (0x0003964d) popup_cale_events_window_ParamLimits

0x8b4d,	// (0x0003964d) popup_cale_events_window

0x0d92,	// (0x00031892) popup_mup_playback_window

0x8b65,	// (0x00039665) signal_pane

0xdbf2,	// (0x0003e6f2) main_browser_pane

0xdd90,	// (0x0003e890) main_burst_pane

0x8988,	// (0x00039488) main_calc_pane

0x0d1b,	// (0x0003181b) main_cale_day_pane

0x606d,	// (0x00036b6d) main_cale_month_pane

0x0d1b,	// (0x0003181b) main_cale_week_pane

0xdd90,	// (0x0003e890) main_call_pane

0xd8aa,	// (0x0003e3aa) main_call_poc_pane

0xdd90,	// (0x0003e890) main_camera_pane

0xdd90,	// (0x0003e890) main_chi_dic_pane

0xe571,	// (0x0003f071) main_clock_pane

0xd8aa,	// (0x0003e3aa) main_fmradio_pane

0xdd90,	// (0x0003e890) main_graph_messa_pane

0xd8aa,	// (0x0003e3aa) main_help_pane

0xdbf2,	// (0x0003e6f2) main_im_pane

0xdb05,	// (0x0003e605) main_image_pane_ParamLimits

0xdb05,	// (0x0003e605) main_image_pane

0xd8aa,	// (0x0003e3aa) main_location2_pane

0xdd90,	// (0x0003e890) main_location_pane

0xdb05,	// (0x0003e605) main_messa_pane

0xd8aa,	// (0x0003e3aa) main_mp2_pane

0xdd90,	// (0x0003e890) main_mp_pane

0xd8aa,	// (0x0003e3aa) main_msg_pane

0xd8aa,	// (0x0003e3aa) main_mup_eq_pane

0xd8aa,	// (0x0003e3aa) main_mup_pane

0xdbf2,	// (0x0003e6f2) main_notes_pane

0xd8aa,	// (0x0003e3aa) main_pec_pane

0xd8aa,	// (0x0003e3aa) main_phob_pane

0xd8aa,	// (0x0003e3aa) main_pinb_pane

0xd8aa,	// (0x0003e3aa) main_postcard_pane

0xd8aa,	// (0x0003e3aa) main_qdial_pane

0xdd90,	// (0x0003e890) main_skin_pane

0xd8aa,	// (0x0003e3aa) main_smil2_pane

0xdd90,	// (0x0003e890) main_smil_pane

0xdd90,	// (0x0003e890) main_video_pane

0xdd90,	// (0x0003e890) main_video_tele_pane

0xdb05,	// (0x0003e605) main_viewer_pane_ParamLimits

0xdb05,	// (0x0003e605) main_viewer_pane

0xdd90,	// (0x0003e890) main_vorec_pane

0x89d4,	// (0x000394d4) popup_blid_sat_info_window_ParamLimits

0x89d4,	// (0x000394d4) popup_blid_sat_info_window

0x89fa,	// (0x000394fa) popup_dyc_status_message_window_ParamLimits

0x89fa,	// (0x000394fa) popup_dyc_status_message_window

0x8a0a,	// (0x0003950a) popup_grid_large_graphic_window_ParamLimits

0x8a0a,	// (0x0003950a) popup_grid_large_graphic_window

0x8a9f,	// (0x0003959f) popup_loc_request_window_ParamLimits

0x8a9f,	// (0x0003959f) popup_loc_request_window

0x8af8,	// (0x000395f8) popup_wml_address_window_ParamLimits

0x8af8,	// (0x000395f8) popup_wml_address_window

0x8860,	// (0x00039360) call_muted_g1

0x84d8,	// (0x00038fd8) popup_call_audio_conf_window_ParamLimits

0x84d8,	// (0x00038fd8) popup_call_audio_conf_window

0x8870,	// (0x00039370) popup_call_audio_first_window_ParamLimits

0x8870,	// (0x00039370) popup_call_audio_first_window

0x88b0,	// (0x000393b0) popup_call_audio_in_window_ParamLimits

0x88b0,	// (0x000393b0) popup_call_audio_in_window

0x88d4,	// (0x000393d4) popup_call_audio_out_window_ParamLimits

0x88d4,	// (0x000393d4) popup_call_audio_out_window

0x88f6,	// (0x000393f6) popup_call_audio_second_window_ParamLimits

0x88f6,	// (0x000393f6) popup_call_audio_second_window

0x8926,	// (0x00039426) popup_call_audio_wait_window_ParamLimits

0x8926,	// (0x00039426) popup_call_audio_wait_window

0x8947,	// (0x00039447) popup_number_entry_window_ParamLimits

0x8947,	// (0x00039447) popup_number_entry_window

0xd462,	// (0x0003df62) bg_popup_call_pane_cp05_ParamLimits

0xd462,	// (0x0003df62) bg_popup_call_pane_cp05

0xd482,	// (0x0003df82) popup_number_entry_window_t1

0xd495,	// (0x0003df95) popup_number_entry_window_t2

0xd4a7,	// (0x0003dfa7) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0003fb85) popup_number_entry_window_t

0xd4ee,	// (0x0003dfee) text_title_cp2

0xd501,	// (0x0003e001) bg_popup_call_pane_cp_ParamLimits

0xd501,	// (0x0003e001) bg_popup_call_pane_cp

0xd50f,	// (0x0003e00f) call_thumbnail_pane

0xd517,	// (0x0003e017) popup_call_audio_in_window_g1_ParamLimits

0xd517,	// (0x0003e017) popup_call_audio_in_window_g1

0xd523,	// (0x0003e023) popup_call_audio_in_window_g2_ParamLimits

0xd523,	// (0x0003e023) popup_call_audio_in_window_g2

0xd52f,	// (0x0003e02f) popup_call_audio_in_window_g3_ParamLimits

0xd52f,	// (0x0003e02f) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0003fb8e) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0003fb8e) popup_call_audio_in_window_g

0xd53b,	// (0x0003e03b) popup_call_audio_in_window_t1_ParamLimits

0xd53b,	// (0x0003e03b) popup_call_audio_in_window_t1

0xd557,	// (0x0003e057) popup_call_audio_in_window_t2_ParamLimits

0xd557,	// (0x0003e057) popup_call_audio_in_window_t2

0xd573,	// (0x0003e073) popup_call_audio_in_window_t3_ParamLimits

0xd573,	// (0x0003e073) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0003fb95) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0003fb95) popup_call_audio_in_window_t

0xd501,	// (0x0003e001) bg_popup_call_pane_cp01_ParamLimits

0xd501,	// (0x0003e001) bg_popup_call_pane_cp01

0xd50f,	// (0x0003e00f) call_thumbnail_pane_cp02

0xd586,	// (0x0003e086) call_type_pane_cp022

0xd58e,	// (0x0003e08e) popup_call_audio_out_window_g1_ParamLimits

0xd58e,	// (0x0003e08e) popup_call_audio_out_window_g1

0xd5a0,	// (0x0003e0a0) popup_call_audio_out_window_g2_ParamLimits

0xd5a0,	// (0x0003e0a0) popup_call_audio_out_window_g2

0xd5ac,	// (0x0003e0ac) popup_call_audio_out_window_g3_ParamLimits

0xd5ac,	// (0x0003e0ac) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0003fb9c) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0003fb9c) popup_call_audio_out_window_g

0xd5be,	// (0x0003e0be) popup_call_audio_out_window_t1_ParamLimits

0xd5be,	// (0x0003e0be) popup_call_audio_out_window_t1

0xd5d6,	// (0x0003e0d6) popup_call_audio_out_window_t2_ParamLimits

0xd5d6,	// (0x0003e0d6) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0003fba3) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0003fba3) popup_call_audio_out_window_t

0xd5eb,	// (0x0003e0eb) bg_popup_call_pane_ParamLimits

0xd5eb,	// (0x0003e0eb) bg_popup_call_pane

0x5cac,	// (0x000367ac) call_thumbnail_pane_cp_ParamLimits

0x5cac,	// (0x000367ac) call_thumbnail_pane_cp

0xd66f,	// (0x0003e16f) call_type_pane_cp01_ParamLimits

0xd66f,	// (0x0003e16f) call_type_pane_cp01

0xd6b3,	// (0x0003e1b3) popup_call_audio_first_window_g1_ParamLimits

0xd6b3,	// (0x0003e1b3) popup_call_audio_first_window_g1

0xd6ff,	// (0x0003e1ff) popup_call_audio_first_window_g2_ParamLimits

0xd6ff,	// (0x0003e1ff) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0003fba8) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0003fba8) popup_call_audio_first_window_g

0xd743,	// (0x0003e243) popup_call_audio_first_window_t1_ParamLimits

0xd743,	// (0x0003e243) popup_call_audio_first_window_t1

0xd7ef,	// (0x0003e2ef) popup_call_audio_first_window_t4_ParamLimits

0xd7ef,	// (0x0003e2ef) popup_call_audio_first_window_t4

0xd87b,	// (0x0003e37b) popup_call_audio_first_window_t5_ParamLimits

0xd87b,	// (0x0003e37b) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0003fbad) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0003fbad) popup_call_audio_first_window_t

0xd8aa,	// (0x0003e3aa) bg_popup_call_pane_cp02

0xd8b4,	// (0x0003e3b4) call_type_pane_cp023

0xd8bc,	// (0x0003e3bc) popup_call_audio_wait_window_g1

0xd8c4,	// (0x0003e3c4) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0003fbb4) popup_call_audio_wait_window_g

0xd8cc,	// (0x0003e3cc) popup_call_audio_wait_window_t3

0xd8da,	// (0x0003e3da) bg_popup_call_pane_cp03_ParamLimits

0xd8da,	// (0x0003e3da) bg_popup_call_pane_cp03

0xd93a,	// (0x0003e43a) call_thumbnail_pane_cp011_ParamLimits

0xd93a,	// (0x0003e43a) call_thumbnail_pane_cp011

0xd946,	// (0x0003e446) call_type_pane_cp034_ParamLimits

0xd946,	// (0x0003e446) call_type_pane_cp034

0xd982,	// (0x0003e482) popup_call_audio_second_window_g1_ParamLimits

0xd982,	// (0x0003e482) popup_call_audio_second_window_g1

0xd9be,	// (0x0003e4be) popup_call_audio_second_window_g2_ParamLimits

0xd9be,	// (0x0003e4be) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0003fbb9) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0003fbb9) popup_call_audio_second_window_g

0xd9fa,	// (0x0003e4fa) popup_call_audio_second_window_t1_ParamLimits

0xd9fa,	// (0x0003e4fa) popup_call_audio_second_window_t1

0xda7b,	// (0x0003e57b) popup_call_audio_second_window_t2_ParamLimits

0xda7b,	// (0x0003e57b) popup_call_audio_second_window_t2

0xdab1,	// (0x0003e5b1) popup_call_audio_second_window_t3_ParamLimits

0xdab1,	// (0x0003e5b1) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0003fbbe) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0003fbbe) popup_call_audio_second_window_t

0xd8aa,	// (0x0003e3aa) bg_popup_call_pane_cp04

0xdae7,	// (0x0003e5e7) list_conf_pane

0xdaef,	// (0x0003e5ef) popup_call_audio_conf_window_t1

0xdafd,	// (0x0003e5fd) call_thumbnail_pane_g1

0xdb05,	// (0x0003e605) bg_pinb_pane_ParamLimits

0xdb05,	// (0x0003e605) bg_pinb_pane

0xdb13,	// (0x0003e613) find_pinb_pane

0xdb05,	// (0x0003e605) listscroll_pinb_pane_ParamLimits

0xdb05,	// (0x0003e605) listscroll_pinb_pane

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g1

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g2

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g3

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g4

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g5

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g6

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g7

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g8

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g9

0xdb1d,	// (0x0003e61d) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0003fbc5) pinb_bg_pane_g

0xd44a,	// (0x0003df4a) grid_pinb_pane

0xd44a,	// (0x0003df4a) list_pinb_pane

0xdb27,	// (0x0003e627) scroll_pane_cp01_ParamLimits

0xdb27,	// (0x0003e627) scroll_pane_cp01

0xdb35,	// (0x0003e635) find_pinb_pane_g1_ParamLimits

0xdb35,	// (0x0003e635) find_pinb_pane_g1

0xdb4d,	// (0x0003e64d) find_pinb_pane_t1

0xdb5f,	// (0x0003e65f) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0003fbdf) find_pinb_pane_t

0xdb74,	// (0x0003e674) input_focus_pane_cp01_ParamLimits

0xdb74,	// (0x0003e674) input_focus_pane_cp01

0xd454,	// (0x0003df54) cell_pinb_pane_ParamLimits

0xd454,	// (0x0003df54) cell_pinb_pane

0xdb80,	// (0x0003e680) cell_pinb_pane_g1_ParamLimits

0xdb80,	// (0x0003e680) cell_pinb_pane_g1

0xdb8e,	// (0x0003e68e) cell_pinb_pane_g2_ParamLimits

0xdb8e,	// (0x0003e68e) cell_pinb_pane_g2

0xdb8e,	// (0x0003e68e) cell_pinb_pane_g3_ParamLimits

0xdb8e,	// (0x0003e68e) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0003fbe4) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0003fbe4) cell_pinb_pane_g

0xd8aa,	// (0x0003e3aa) grid_highlight_pane_cp01

0xd454,	// (0x0003df54) list_pinb_item_pane_ParamLimits

0xd454,	// (0x0003df54) list_pinb_item_pane

0xd44a,	// (0x0003df4a) list_highlight_pane_cp02

0xdb9c,	// (0x0003e69c) list_pinb_item_pane_g1_ParamLimits

0xdb9c,	// (0x0003e69c) list_pinb_item_pane_g1

0xdb8e,	// (0x0003e68e) list_pinb_item_pane_g2_ParamLimits

0xdb8e,	// (0x0003e68e) list_pinb_item_pane_g2

0xdb80,	// (0x0003e680) list_pinb_item_pane_g3_ParamLimits

0xdb80,	// (0x0003e680) list_pinb_item_pane_g3

0xdb8e,	// (0x0003e68e) list_pinb_item_pane_g4_ParamLimits

0xdb8e,	// (0x0003e68e) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0003fbeb) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0003fbeb) list_pinb_item_pane_g

0xdbaa,	// (0x0003e6aa) list_pinb_item_pane_t1_ParamLimits

0xdbaa,	// (0x0003e6aa) list_pinb_item_pane_t1

0x5cea,	// (0x000367ea) calc_display_pane

0x5d08,	// (0x00036808) calc_paper_pane

0x5d24,	// (0x00036824) grid_calc_pane

0xd8aa,	// (0x0003e3aa) bg_list_pane_cp01

0x5d50,	// (0x00036850) clock_g1

0x5d58,	// (0x00036858) clock_g2

0x0001,

0xf0f4,	// (0x0003fbf4) clock_g

0x5d62,	// (0x00036862) clock_t1_ParamLimits

0x5d62,	// (0x00036862) clock_t1

0x5d77,	// (0x00036877) clock_t2_ParamLimits

0x5d77,	// (0x00036877) clock_t2

0x5d89,	// (0x00036889) clock_t3_ParamLimits

0x5d89,	// (0x00036889) clock_t3

0x5d9b,	// (0x0003689b) clock_t4_ParamLimits

0x5d9b,	// (0x0003689b) clock_t4

0x5dad,	// (0x000368ad) clock_t5_ParamLimits

0x5dad,	// (0x000368ad) clock_t5

0x5dc2,	// (0x000368c2) clock_t6_ParamLimits

0x5dc2,	// (0x000368c2) clock_t6

0x5dd4,	// (0x000368d4) clock_t7_ParamLimits

0x5dd4,	// (0x000368d4) clock_t7

0x5de6,	// (0x000368e6) clock_t8_ParamLimits

0x5de6,	// (0x000368e6) clock_t8

0x5dfc,	// (0x000368fc) clock_t9_ParamLimits

0x5dfc,	// (0x000368fc) clock_t9

0x0008,

0xf0f9,	// (0x0003fbf9) clock_t_ParamLimits

0xf0f9,	// (0x0003fbf9) clock_t

0xdbbe,	// (0x0003e6be) popup_clock_analogue_window_cp02

0xdbbe,	// (0x0003e6be) popup_clock_digital_window_cp01

0xd8aa,	// (0x0003e3aa) listscroll_help_pane

0xd8aa,	// (0x0003e3aa) phob_pre_status_pane

0xdbc6,	// (0x0003e6c6) grid_qdial_pane

0xdb05,	// (0x0003e605) listscroll_mce_pane

0xdb05,	// (0x0003e605) bg_notes_pane

0xdbd0,	// (0x0003e6d0) list_notes_pane

0x5e12,	// (0x00036912) scroll_pane_cp06

0xdbde,	// (0x0003e6de) bg_calc_paper_pane

0x5e21,	// (0x00036921) list_calc_pane

0xdbf2,	// (0x0003e6f2) bg_calc_display_pane

0x5e3b,	// (0x0003693b) calc_display_pane_t1

0x5e50,	// (0x00036950) calc_display_pane_t2

0x5e65,	// (0x00036965) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0003fc0c) calc_display_pane_t

0x5e77,	// (0x00036977) cell_calc_pane_ParamLimits

0x5e77,	// (0x00036977) cell_calc_pane

0xdbfe,	// (0x0003e6fe) bg_calc_paper_pane_g1

0xdc0a,	// (0x0003e70a) bg_calc_paper_pane_g2

0xdc16,	// (0x0003e716) bg_calc_paper_pane_g3

0xdc22,	// (0x0003e722) bg_calc_paper_pane_g4

0xdc2e,	// (0x0003e72e) bg_calc_paper_pane_g5

0x5ea6,	// (0x000369a6) bg_calc_paper_pane_g6

0x5eb7,	// (0x000369b7) bg_calc_paper_pane_g7

0x5ec8,	// (0x000369c8) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0003fc13) bg_calc_paper_pane_g

0x5ed9,	// (0x000369d9) calc_bg_paper_pane_g9

0x5eea,	// (0x000369ea) list_calc_item_pane_ParamLimits

0x5eea,	// (0x000369ea) list_calc_item_pane

0xdc3a,	// (0x0003e73a) list_calc_item_pane_g1

0x5f0b,	// (0x00036a0b) list_calc_item_pane_t1_ParamLimits

0x5f0b,	// (0x00036a0b) list_calc_item_pane_t1

0x5f1d,	// (0x00036a1d) list_calc_item_pane_t2_ParamLimits

0x5f1d,	// (0x00036a1d) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0003fc24) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0003fc24) list_calc_item_pane_t

0xdb1d,	// (0x0003e61d) cell_calc_pane_g1

0xdc47,	// (0x0003e747) grid_highlight_pane_cp02

0x2647,	// (0x00033147) bg_calc_display_pane_g1

0x5f4d,	// (0x00036a4d) bg_calc_display_pane_g2

0x2659,	// (0x00033159) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0003fc2e) bg_calc_display_pane_g

0x5f57,	// (0x00036a57) cell_qdial_pane_ParamLimits

0x5f57,	// (0x00036a57) cell_qdial_pane

0x5f6d,	// (0x00036a6d) cell_qdial_pane_g1_ParamLimits

0x5f6d,	// (0x00036a6d) cell_qdial_pane_g1

0x5f7a,	// (0x00036a7a) cell_qdial_pane_g2_ParamLimits

0x5f7a,	// (0x00036a7a) cell_qdial_pane_g2

0xdc69,	// (0x0003e769) cell_qdial_pane_g3_ParamLimits

0xdc69,	// (0x0003e769) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0003fc35) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0003fc35) cell_qdial_pane_g

0x5f98,	// (0x00036a98) cell_qdial_pane_t1_ParamLimits

0x5f98,	// (0x00036a98) cell_qdial_pane_t1

0x5fb0,	// (0x00036ab0) cell_qdial_pane_t2_ParamLimits

0x5fb0,	// (0x00036ab0) cell_qdial_pane_t2

0x5fc3,	// (0x00036ac3) cell_qdial_pane_t3_ParamLimits

0x5fc3,	// (0x00036ac3) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0003fc3e) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0003fc3e) cell_qdial_pane_t

0xd8aa,	// (0x0003e3aa) grid_highlight_pane_cp04

0xdc75,	// (0x0003e775) thumbnail_qdial_pane_ParamLimits

0xdc75,	// (0x0003e775) thumbnail_qdial_pane

0xdcd1,	// (0x0003e7d1) list_help_pane

0xdcda,	// (0x0003e7da) scroll_pane_cp02

0x5fd6,	// (0x00036ad6) help_list_pane_t1_ParamLimits

0x5fd6,	// (0x00036ad6) help_list_pane_t1

0x5ffd,	// (0x00036afd) bg_notes_pane_g2

0x6005,	// (0x00036b05) bg_notes_pane_g3

0x600d,	// (0x00036b0d) notes_bg_pane_g1

0x6015,	// (0x00036b15) notes_bg_pane_g4

0x601d,	// (0x00036b1d) notes_bg_pane_g5

0x6025,	// (0x00036b25) notes_bg_pane_g6

0x602d,	// (0x00036b2d) notes_bg_pane_g7

0x6035,	// (0x00036b35) notes_bg_pane_g8

0x603d,	// (0x00036b3d) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0003fc5c) notes_bg_pane_g

0x6045,	// (0x00036b45) list_notes_text_pane_ParamLimits

0x6045,	// (0x00036b45) list_notes_text_pane

0xdce3,	// (0x0003e7e3) list_notes_text_pane_g1

0x4c61,	// (0x00035761) list_notes_text_pane_t1

0x606d,	// (0x00036b6d) listscroll_cale_week_pane

0x6099,	// (0x00036b99) bg_cale_heading_pane

0x60c2,	// (0x00036bc2) bg_cale_pane_cp01

0x60e4,	// (0x00036be4) cale_week_corner_pane

0x6103,	// (0x00036c03) cale_week_day_heading_pane

0x6131,	// (0x00036c31) cale_week_scroll_pane_g1

0x6155,	// (0x00036c55) cale_week_scroll_pane_g2

0x616d,	// (0x00036c6d) cale_week_scroll_pane_g3

0x6185,	// (0x00036c85) cale_week_scroll_pane_g4

0x619d,	// (0x00036c9d) cale_week_scroll_pane_g5

0x61b5,	// (0x00036cb5) cale_week_scroll_pane_g6

0x61d5,	// (0x00036cd5) cale_week_scroll_pane_g7

0x61f5,	// (0x00036cf5) cale_week_scroll_pane_g8

0x6215,	// (0x00036d15) cale_week_scroll_pane_g9

0x6232,	// (0x00036d32) cale_week_scroll_pane_g10

0x624f,	// (0x00036d4f) cale_week_scroll_pane_g11

0x626e,	// (0x00036d6e) cale_week_scroll_pane_g12

0x6293,	// (0x00036d93) cale_week_scroll_pane_g13

0x62bc,	// (0x00036dbc) cale_week_scroll_pane_g14

0x62e5,	// (0x00036de5) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0003fc6b) cale_week_scroll_pane_g

0x632e,	// (0x00036e2e) cale_week_time_pane

0x634e,	// (0x00036e4e) grid_cale_week_pane

0xdd18,	// (0x0003e818) scroll_pane_cp08

0x637f,	// (0x00036e7f) cell_cale_week_pane_ParamLimits

0x637f,	// (0x00036e7f) cell_cale_week_pane

0x640f,	// (0x00036f0f) cale_week_day_heading_pane_t1

0x6437,	// (0x00036f37) cale_week_day_heading_pane_t2

0x6464,	// (0x00036f64) cale_week_day_heading_pane_t3

0x6491,	// (0x00036f91) cale_week_day_heading_pane_t4

0x64be,	// (0x00036fbe) cale_week_day_heading_pane_t5

0x64eb,	// (0x00036feb) cale_week_day_heading_pane_t6

0x6518,	// (0x00037018) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0003fc8c) cale_week_day_heading_pane_t

0xdd35,	// (0x0003e835) bg_cale_side_pane

0x6540,	// (0x00037040) cale_week_time_pane_t1

0x6564,	// (0x00037064) cale_week_time_pane_t2

0x6588,	// (0x00037088) cale_week_time_pane_t3

0x65ac,	// (0x000370ac) cale_week_time_pane_t4

0x65d0,	// (0x000370d0) cale_week_time_pane_t5

0x65f6,	// (0x000370f6) cale_week_time_pane_t6

0x661e,	// (0x0003711e) cale_week_time_pane_t7

0x664a,	// (0x0003714a) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0003fc9b) cale_week_time_pane_t

0x667a,	// (0x0003717a) cell_cale_week_pane_g2

0x669e,	// (0x0003719e) cell_cale_week_pane_g3_ParamLimits

0x669e,	// (0x0003719e) cell_cale_week_pane_g3

0xdd43,	// (0x0003e843) grid_highlight_pane_cp07

0xdd4b,	// (0x0003e84b) listscroll_gms_pane

0xdd55,	// (0x0003e855) grid_gms_pane

0xdd5e,	// (0x0003e85e) listscroll_gms_pane_g1

0xdd66,	// (0x0003e866) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0003fcac) listscroll_gms_pane_g

0x66b6,	// (0x000371b6) scroll_pane_cp010

0x66c1,	// (0x000371c1) cell_gms_pane_ParamLimits

0x66c1,	// (0x000371c1) cell_gms_pane

0x66d4,	// (0x000371d4) cell_gms_pane_g1

0xdd6e,	// (0x0003e86e) cell_gms_pane_g2

0xdd76,	// (0x0003e876) cell_gms_pane_g3

0xdd7f,	// (0x0003e87f) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0003fcb1) cell_gms_pane_g

0xdd88,	// (0x0003e888) grid_highlight_pane_cp09

0x87e4,	// (0x000392e4) phob_pre_status_pane_g1

0x87ec,	// (0x000392ec) phob_pre_status_pane_g2

0x87f4,	// (0x000392f4) phob_pre_status_pane_g3

0x87fc,	// (0x000392fc) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x0004007a) phob_pre_status_pane_g

0x880c,	// (0x0003930c) phob_pre_status_pane_t1

0x881c,	// (0x0003931c) phob_pre_status_pane_t2

0x882c,	// (0x0003932c) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x00040085) phob_pre_status_pane_t

0xdd90,	// (0x0003e890) bg_list_pane_cp05

0x66e4,	// (0x000371e4) grid_vorec_pane

0x66ee,	// (0x000371ee) vorec_t1

0x66fc,	// (0x000371fc) vorec_t2

0x670a,	// (0x0003720a) vorec_t3

0x6718,	// (0x00037218) vorec_t4

0xd250,	// (0x0003dd50) vorec_t5

0xd25e,	// (0x0003dd5e) vorec_t6

0x0004,

0xf1ba,	// (0x0003fcba) vorec_t

0xd26c,	// (0x0003dd6c) wait_bar_pane_cp01

0x6734,	// (0x00037234) cell_vorec_pane_ParamLimits

0x6734,	// (0x00037234) cell_vorec_pane

0x6749,	// (0x00037249) cell_vorec_pane_g1

0xd8aa,	// (0x0003e3aa) grid_highlight_pane_cp05

0xd454,	// (0x0003df54) cams_zoom_pane

0xd454,	// (0x0003df54) image_vga_pane

0xdb8e,	// (0x0003e68e) main_camera_pane_g1

0xdb8e,	// (0x0003e68e) main_camera_pane_g2

0xdb8e,	// (0x0003e68e) main_camera_pane_g3

0xdb8e,	// (0x0003e68e) main_camera_pane_g4

0xdb8e,	// (0x0003e68e) main_camera_pane_g5

0xdb8e,	// (0x0003e68e) main_camera_pane_g6

0xdb8e,	// (0x0003e68e) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0003fcc5) main_camera_pane_g

0xdd98,	// (0x0003e898) main_camera_pane_t1

0xdd98,	// (0x0003e898) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0003fcd6) main_camera_pane_t

0x6753,	// (0x00037253) cams_zoom_pane_cp_ParamLimits

0x6753,	// (0x00037253) cams_zoom_pane_cp

0x6781,	// (0x00037281) image_cif_pane_ParamLimits

0x6781,	// (0x00037281) image_cif_pane

0xd44a,	// (0x0003df4a) image_subqcif_pane

0x678f,	// (0x0003728f) main_video_pane_g1_ParamLimits

0x678f,	// (0x0003728f) main_video_pane_g1

0x67b7,	// (0x000372b7) main_video_pane_g2_ParamLimits

0x67b7,	// (0x000372b7) main_video_pane_g2

0x67ea,	// (0x000372ea) main_video_pane_g3_ParamLimits

0x67ea,	// (0x000372ea) main_video_pane_g3

0x67ea,	// (0x000372ea) main_video_pane_g4_ParamLimits

0x67ea,	// (0x000372ea) main_video_pane_g4

0x6818,	// (0x00037318) main_video_pane_g5_ParamLimits

0x6818,	// (0x00037318) main_video_pane_g5

0xddac,	// (0x0003e8ac) main_video_pane_g6_ParamLimits

0xddac,	// (0x0003e8ac) main_video_pane_g6

0x0006,

0xf1db,	// (0x0003fcdb) main_video_pane_g_ParamLimits

0xf1db,	// (0x0003fcdb) main_video_pane_g

0x6834,	// (0x00037334) main_video_pane_t1_ParamLimits

0x6834,	// (0x00037334) main_video_pane_t1

0xddc6,	// (0x0003e8c6) cams_zoom_pane_g1

0xddc6,	// (0x0003e8c6) cams_zoom_pane_g2

0xddc6,	// (0x0003e8c6) cams_zoom_pane_g3

0xddc6,	// (0x0003e8c6) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0003fcea) cams_zoom_pane_g

0x687a,	// (0x0003737a) grid_cams_pane

0x6888,	// (0x00037388) linegrid_cams_pane

0x6894,	// (0x00037394) cell_cams_pane_ParamLimits

0x6894,	// (0x00037394) cell_cams_pane

0xddd0,	// (0x0003e8d0) cams_burst_image_pane

0xddd8,	// (0x0003e8d8) cell_cams_pane_g1

0xd8aa,	// (0x0003e3aa) grid_highlight_pane_cp03

0xdb1d,	// (0x0003e61d) mp_bg_pane_g1

0xd44a,	// (0x0003df4a) bg_list_pane_cp03

0xd44a,	// (0x0003df4a) bg_mp_pane

0xd44a,	// (0x0003df4a) grid_mp_pane

0xddc6,	// (0x0003e8c6) media_player_g1

0xe306,	// (0x0003ee06) media_player_t1

0xe306,	// (0x0003ee06) media_player_t2

0xe306,	// (0x0003ee06) media_player_t3

0xe306,	// (0x0003ee06) media_player_t4

0xe306,	// (0x0003ee06) media_player_t5

0xe306,	// (0x0003ee06) media_player_t6

0xe306,	// (0x0003ee06) media_player_t7

0x0006,

0xf564,	// (0x00040064) media_player_t

0xd44a,	// (0x0003df4a) wait_bar_pane_cp02

0xf549,	// (0x00040049) main_usb_pane_t

0xe571,	// (0x0003f071) cell_mp_pane

0xdb1d,	// (0x0003e61d) cell_mp_pane_g1

0xd8aa,	// (0x0003e3aa) grid_highlight_pane_cp06

0xddf4,	// (0x0003e8f4) grid_skin_colour_pane

0xddfc,	// (0x0003e8fc) list_highlight_pane_cp03

0x68a9,	// (0x000373a9) skin_g1

0xde04,	// (0x0003e904) skin_t1

0xde13,	// (0x0003e913) skin_t2

0x0001,

0xf218,	// (0x0003fd18) skin_t

0x68b3,	// (0x000373b3) cell_skin_colour_pane_ParamLimits

0x68b3,	// (0x000373b3) cell_skin_colour_pane

0xde21,	// (0x0003e921) cell_skin_colour_pane_g1

0x6933,	// (0x00037433) call_video_g1_ParamLimits

0x6933,	// (0x00037433) call_video_g1

0x6943,	// (0x00037443) call_video_g2_ParamLimits

0x6943,	// (0x00037443) call_video_g2

0x0001,

0xf21d,	// (0x0003fd1d) call_video_g_ParamLimits

0xf21d,	// (0x0003fd1d) call_video_g

0x6993,	// (0x00037493) call_video_uplink_pane_cp1_ParamLimits

0x6993,	// (0x00037493) call_video_uplink_pane_cp1

0xde33,	// (0x0003e933) call_video_uplink_pane_cp2

0x6a61,	// (0x00037561) video_down_crop_pane_ParamLimits

0x6a61,	// (0x00037561) video_down_crop_pane

0x6b53,	// (0x00037653) video_down_pane_ParamLimits

0x6b53,	// (0x00037653) video_down_pane

0xde3b,	// (0x0003e93b) video_down_subqcif_pane_ParamLimits

0xde3b,	// (0x0003e93b) video_down_subqcif_pane

0xde55,	// (0x0003e955) video_down_subqcif_pane_cp_ParamLimits

0xde55,	// (0x0003e955) video_down_subqcif_pane_cp

0xde7d,	// (0x0003e97d) im_reading_pane_ParamLimits

0xde7d,	// (0x0003e97d) im_reading_pane

0x6c70,	// (0x00037770) im_writing_pane_ParamLimits

0x6c70,	// (0x00037770) im_writing_pane

0x6c8e,	// (0x0003778e) im_reading_pane_t1

0xde97,	// (0x0003e997) list_im_pane

0xdea8,	// (0x0003e9a8) scroll_pane_cp07

0x6cd0,	// (0x000377d0) im_writing_pane_t1_ParamLimits

0x6cd0,	// (0x000377d0) im_writing_pane_t1

0xdec1,	// (0x0003e9c1) im_writing_pane_t2_ParamLimits

0xdec1,	// (0x0003e9c1) im_writing_pane_t2

0x0001,

0xf227,	// (0x0003fd27) im_writing_pane_t_ParamLimits

0xf227,	// (0x0003fd27) im_writing_pane_t

0xd8aa,	// (0x0003e3aa) input_focus_pane_cp04

0xd8aa,	// (0x0003e3aa) input_focus_pane_cp05

0x6ce2,	// (0x000377e2) list_im_single_pane_ParamLimits

0x6ce2,	// (0x000377e2) list_im_single_pane

0x6cfb,	// (0x000377fb) list_single_im_pane_t1

0xdd90,	// (0x0003e890) blid_accuracy_pane

0xdd90,	// (0x0003e890) blid_compass_pane

0x0cd3,	// (0x000317d3) main_location_t1

0x0cd3,	// (0x000317d3) main_location_t2

0x0cd3,	// (0x000317d3) main_location_t3

0x0002,

0xf573,	// (0x00040073) main_location_t

0xd8aa,	// (0x0003e3aa) aid_levels_location

0xdb1d,	// (0x0003e61d) blid_accuracy_pane_g1

0xdb1d,	// (0x0003e61d) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0003fd7b) blid_accuracy_pane_g

0xdf09,	// (0x0003ea09) wml_content_pane

0xdf47,	// (0x0003ea47) wml_button_pane_ParamLimits

0xdf47,	// (0x0003ea47) wml_button_pane

0x6d0a,	// (0x0003780a) wml_list_single_large_pane_ParamLimits

0x6d0a,	// (0x0003780a) wml_list_single_large_pane

0x6d2c,	// (0x0003782c) wml_list_single_medium_pane_ParamLimits

0x6d2c,	// (0x0003782c) wml_list_single_medium_pane

0x6d4f,	// (0x0003784f) wml_list_single_small_pane_ParamLimits

0x6d4f,	// (0x0003784f) wml_list_single_small_pane

0xdf5b,	// (0x0003ea5b) wml_selection_box_pane_ParamLimits

0xdf5b,	// (0x0003ea5b) wml_selection_box_pane

0xdf6e,	// (0x0003ea6e) wml_list_single_pane_t1

0xdf7d,	// (0x0003ea7d) wml_list_single_medium_pane_t1

0xdf8c,	// (0x0003ea8c) wml_list_single_large_pane_t1

0xdf9b,	// (0x0003ea9b) input_focus_pane_cp02_ParamLimits

0xdf9b,	// (0x0003ea9b) input_focus_pane_cp02

0xdfae,	// (0x0003eaae) wml_selection_box_pane_g1

0xdfb7,	// (0x0003eab7) wml_selection_box_pane_t1_ParamLimits

0xdfb7,	// (0x0003eab7) wml_selection_box_pane_t1

0xdb05,	// (0x0003e605) bg_wml_button_pane_ParamLimits

0xdb05,	// (0x0003e605) bg_wml_button_pane

0xdfcf,	// (0x0003eacf) wml_button_pane_g1

0xdfd7,	// (0x0003ead7) wml_button_pane_t1

0xdfcf,	// (0x0003eacf) wml_button_bg_pane_g1

0xdfe7,	// (0x0003eae7) wml_button_bg_pane_g2

0xdfef,	// (0x0003eaef) wml_button_bg_pane_g3

0xdff7,	// (0x0003eaf7) wml_button_bg_pane_g4

0xdfff,	// (0x0003eaff) wml_button_bg_pane_g5

0xe007,	// (0x0003eb07) wml_button_bg_pane_g6

0xe00f,	// (0x0003eb0f) wml_button_bg_pane_g7

0xe017,	// (0x0003eb17) wml_button_bg_pane_g8

0xe01f,	// (0x0003eb1f) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0003fd2c) wml_button_bg_pane_g

0x6d77,	// (0x00037877) bg_list_pane_cp02

0xe027,	// (0x0003eb27) mce_header_pane_ParamLimits

0xe027,	// (0x0003eb27) mce_header_pane

0xe03d,	// (0x0003eb3d) mce_icon_pane

0xe03d,	// (0x0003eb3d) mce_image_pane

0xe046,	// (0x0003eb46) mce_text_pane_ParamLimits

0xe046,	// (0x0003eb46) mce_text_pane

0x6d81,	// (0x00037881) scroll_pane_cp03

0xdf3f,	// (0x0003ea3f) scroll_pane_cp04

0xe059,	// (0x0003eb59) scroll_pane_cp05_ParamLimits

0xe059,	// (0x0003eb59) scroll_pane_cp05

0x6d8b,	// (0x0003788b) mce_header_field_pane_ParamLimits

0x6d8b,	// (0x0003788b) mce_header_field_pane

0x6dad,	// (0x000378ad) mce_header_field_pane_2_ParamLimits

0x6dad,	// (0x000378ad) mce_header_field_pane_2

0x6dc3,	// (0x000378c3) mce_header_field_pane_3

0x6dcb,	// (0x000378cb) list_single_mce_message_pane_ParamLimits

0x6dcb,	// (0x000378cb) list_single_mce_message_pane

0x6dea,	// (0x000378ea) list_single_mce_smart_pane_ParamLimits

0x6dea,	// (0x000378ea) list_single_mce_smart_pane

0xe065,	// (0x0003eb65) input_focus_pane_cp03

0xe06e,	// (0x0003eb6e) list_header_data_pane

0x6e14,	// (0x00037914) mce_header_field_pane_t1

0x6e24,	// (0x00037924) list_single_mce_header_pane_ParamLimits

0x6e24,	// (0x00037924) list_single_mce_header_pane

0xe076,	// (0x0003eb76) list_single_mce_header_pane_t1

0xe085,	// (0x0003eb85) list_single_mce_message_pane_g1

0xe08d,	// (0x0003eb8d) list_single_mce_message_pane_t1

0x6e68,	// (0x00037968) bg_cale_heading_pane_cp01_ParamLimits

0x6e68,	// (0x00037968) bg_cale_heading_pane_cp01

0xe09b,	// (0x0003eb9b) bg_cale_pane_cp02_ParamLimits

0xe09b,	// (0x0003eb9b) bg_cale_pane_cp02

0x6eba,	// (0x000379ba) cale_month_corner_pane

0x6ed9,	// (0x000379d9) cale_month_day_heading_pane_ParamLimits

0x6ed9,	// (0x000379d9) cale_month_day_heading_pane

0x6f3b,	// (0x00037a3b) cale_month_pane_g1_ParamLimits

0x6f3b,	// (0x00037a3b) cale_month_pane_g1

0x6f82,	// (0x00037a82) cale_month_pane_g2_ParamLimits

0x6f82,	// (0x00037a82) cale_month_pane_g2

0x6fba,	// (0x00037aba) cale_month_pane_g3_ParamLimits

0x6fba,	// (0x00037aba) cale_month_pane_g3

0x700e,	// (0x00037b0e) cale_month_pane_g4_ParamLimits

0x700e,	// (0x00037b0e) cale_month_pane_g4

0x7062,	// (0x00037b62) cale_month_pane_g5_ParamLimits

0x7062,	// (0x00037b62) cale_month_pane_g5

0x70b6,	// (0x00037bb6) cale_month_pane_g6_ParamLimits

0x70b6,	// (0x00037bb6) cale_month_pane_g6

0x711a,	// (0x00037c1a) cale_month_pane_g7_ParamLimits

0x711a,	// (0x00037c1a) cale_month_pane_g7

0x717e,	// (0x00037c7e) cale_month_pane_g8_ParamLimits

0x717e,	// (0x00037c7e) cale_month_pane_g8

0x71e2,	// (0x00037ce2) cale_month_pane_g9_ParamLimits

0x71e2,	// (0x00037ce2) cale_month_pane_g9

0x723c,	// (0x00037d3c) cale_month_pane_g10_ParamLimits

0x723c,	// (0x00037d3c) cale_month_pane_g10

0x728e,	// (0x00037d8e) cale_month_pane_g11_ParamLimits

0x728e,	// (0x00037d8e) cale_month_pane_g11

0x72dc,	// (0x00037ddc) cale_month_pane_g12_ParamLimits

0x72dc,	// (0x00037ddc) cale_month_pane_g12

0x732c,	// (0x00037e2c) cale_month_pane_g13_ParamLimits

0x732c,	// (0x00037e2c) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0003fd3f) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0003fd3f) cale_month_pane_g

0x737c,	// (0x00037e7c) cale_month_week_pane

0x739c,	// (0x00037e9c) grid_cale_month_pane_ParamLimits

0x739c,	// (0x00037e9c) grid_cale_month_pane

0x73f5,	// (0x00037ef5) cale_month_day_heading_pane_t1

0x7477,	// (0x00037f77) cale_month_day_heading_pane_t2

0x74f0,	// (0x00037ff0) cale_month_day_heading_pane_t3

0x7569,	// (0x00038069) cale_month_day_heading_pane_t4

0x75e2,	// (0x000380e2) cale_month_day_heading_pane_t5

0x7663,	// (0x00038163) cale_month_day_heading_pane_t6

0x76ec,	// (0x000381ec) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0003fd5a) cale_month_day_heading_pane_t

0xdd35,	// (0x0003e835) bg_cale_side_pane_cp01

0x7775,	// (0x00038275) cale_month_week_pane_t1

0x778e,	// (0x0003828e) cale_month_week_pane_t2

0x77a7,	// (0x000382a7) cale_month_week_pane_t3

0x77c0,	// (0x000382c0) cale_month_week_pane_t4

0x77d9,	// (0x000382d9) cale_month_week_pane_t5

0x77f6,	// (0x000382f6) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0003fd69) cale_month_week_pane_t

0x7819,	// (0x00038319) cell_cale_month_pane_ParamLimits

0x7819,	// (0x00038319) cell_cale_month_pane

0x7947,	// (0x00038447) cell_cale_month_pane_g1

0x7953,	// (0x00038453) cell_cale_month_pane_t1_ParamLimits

0x7953,	// (0x00038453) cell_cale_month_pane_t1

0xdd43,	// (0x0003e843) grid_highlight_pane_cp08

0xdb1d,	// (0x0003e61d) main_smil_g1

0x797f,	// (0x0003847f) smil_status_pane

0xe0da,	// (0x0003ebda) smil_text_pane

0x0be9,	// (0x000316e9) bg_popup_call3_rect_pane_g8

0x0bf1,	// (0x000316f1) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x00040007) bg_popup_call3_rect_pane_g

0x0e1a,	// (0x0003191a) smil_status_volume_pane_g1

0xe0e4,	// (0x0003ebe4) smil_status_pane_t1

0x8b9a,	// (0x0003969a) volume_smil_pane

0xe0fb,	// (0x0003ebfb) list_smil_text_pane

0x7992,	// (0x00038492) scroll_pane_cp011

0x799d,	// (0x0003849d) smil_text_list_pane_t1_ParamLimits

0x799d,	// (0x0003849d) smil_text_list_pane_t1

0x79f1,	// (0x000384f1) aid_volume_smil_ParamLimits

0x79f1,	// (0x000384f1) aid_volume_smil

0xdb1d,	// (0x0003e61d) smil_volume_pane_g1

0xdb1d,	// (0x0003e61d) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0003fd7b) smil_volume_pane_g

0x606d,	// (0x00036b6d) listscroll_cale_day_pane

0xe105,	// (0x0003ec05) bg_cale_pane

0xe11d,	// (0x0003ec1d) list_cale_pane

0xe140,	// (0x0003ec40) scroll_pane_cp09

0xe151,	// (0x0003ec51) cale_bg_pane_g1

0xe159,	// (0x0003ec59) cale_bg_pane_g2

0xe161,	// (0x0003ec61) cale_bg_pane_g3

0xe169,	// (0x0003ec69) cale_bg_pane_g4

0xe171,	// (0x0003ec71) cale_bg_pane_g5

0xe179,	// (0x0003ec79) cale_bg_pane_g6

0xe181,	// (0x0003ec81) cale_bg_pane_g7

0xe189,	// (0x0003ec89) cale_bg_pane_g8

0xe191,	// (0x0003ec91) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0003fd80) cale_bg_pane_g

0x7a1b,	// (0x0003851b) list_cale_time_pane_ParamLimits

0x7a1b,	// (0x0003851b) list_cale_time_pane

0xe199,	// (0x0003ec99) list_cale_time_pane_g1_ParamLimits

0xe199,	// (0x0003ec99) list_cale_time_pane_g1

0xe1a5,	// (0x0003eca5) list_cale_time_pane_g2_ParamLimits

0xe1a5,	// (0x0003eca5) list_cale_time_pane_g2

0x7a32,	// (0x00038532) list_cale_time_pane_g3_ParamLimits

0x7a32,	// (0x00038532) list_cale_time_pane_g3

0x7a40,	// (0x00038540) list_cale_time_pane_g4_ParamLimits

0x7a40,	// (0x00038540) list_cale_time_pane_g4

0x7a4e,	// (0x0003854e) list_cale_time_pane_g5_ParamLimits

0x7a4e,	// (0x0003854e) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0003fd93) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0003fd93) list_cale_time_pane_g

0xe1bf,	// (0x0003ecbf) list_cale_time_pane_t1_ParamLimits

0xe1bf,	// (0x0003ecbf) list_cale_time_pane_t1

0xe1e7,	// (0x0003ece7) list_cale_time_pane_t2_ParamLimits

0xe1e7,	// (0x0003ece7) list_cale_time_pane_t2

0x7d0b,	// (0x0003880b) aid_blid_cardinal_pane

0x7d4d,	// (0x0003884d) compass_pane_t4

0xe20f,	// (0x0003ed0f) list_cale_time_pane_t4_ParamLimits

0xe20f,	// (0x0003ed0f) list_cale_time_pane_t4

0x7d5b,	// (0x0003885b) compass_pane_t5

0x7d6b,	// (0x0003886b) compass_pane_t6

0x7d79,	// (0x00038879) compass_pane_t7

0xe636,	// (0x0003f136) navi_pane_cc_t1

0xe783,	// (0x0003f283) aid_phob_thumbnail_center_pane

0x8278,	// (0x00038d78) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0003fda0) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0003fda0) list_cale_time_pane_t

0xd501,	// (0x0003e001) bg_popup_window_pane_cp02_ParamLimits

0xd501,	// (0x0003e001) bg_popup_window_pane_cp02

0xe237,	// (0x0003ed37) heading_pane_cp01_ParamLimits

0xe237,	// (0x0003ed37) heading_pane_cp01

0xe243,	// (0x0003ed43) loc_req_pane_ParamLimits

0xe243,	// (0x0003ed43) loc_req_pane

0xe253,	// (0x0003ed53) loc_type_pane_ParamLimits

0xe253,	// (0x0003ed53) loc_type_pane

0xe265,	// (0x0003ed65) loc_type_pane_t1_ParamLimits

0xe265,	// (0x0003ed65) loc_type_pane_t1

0xe277,	// (0x0003ed77) loc_type_pane_t2_ParamLimits

0xe277,	// (0x0003ed77) loc_type_pane_t2

0xe289,	// (0x0003ed89) loc_type_pane_t3_ParamLimits

0xe289,	// (0x0003ed89) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0003fda7) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0003fda7) loc_type_pane_t

0xe29b,	// (0x0003ed9b) list_loc_req_pane

0xe2a5,	// (0x0003eda5) scroll_pane_cp012

0x7a5c,	// (0x0003855c) list_single_loc_request_popup_menu_pane_ParamLimits

0x7a5c,	// (0x0003855c) list_single_loc_request_popup_menu_pane

0xe2b0,	// (0x0003edb0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe2b0,	// (0x0003edb0) list_single_loc_request_popup_menu_pane_g1

0xe2bc,	// (0x0003edbc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe2bc,	// (0x0003edbc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0003fdae) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0003fdae) list_single_loc_request_popup_menu_pane_g

0xe2c8,	// (0x0003edc8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe2c8,	// (0x0003edc8) list_single_loc_request_popup_menu_pane_t1

0x7a6e,	// (0x0003856e) bg_popup_window_pane_cp03_ParamLimits

0x7a6e,	// (0x0003856e) bg_popup_window_pane_cp03

0x7a7c,	// (0x0003857c) heading_loc_req_pane_ParamLimits

0x7a7c,	// (0x0003857c) heading_loc_req_pane

0x7a88,	// (0x00038588) popup_dyc_status_message_window_g1_ParamLimits

0x7a88,	// (0x00038588) popup_dyc_status_message_window_g1

0x7a94,	// (0x00038594) popup_dyc_status_message_window_t1_ParamLimits

0x7a94,	// (0x00038594) popup_dyc_status_message_window_t1

0x7aa6,	// (0x000385a6) popup_dyc_status_message_window_t2_ParamLimits

0x7aa6,	// (0x000385a6) popup_dyc_status_message_window_t2

0x7ab8,	// (0x000385b8) popup_dyc_status_message_window_t3_ParamLimits

0x7ab8,	// (0x000385b8) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0003fdb3) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0003fdb3) popup_dyc_status_message_window_t

0xd8aa,	// (0x0003e3aa) bg_heading_pane_cp01

0xe2de,	// (0x0003edde) heading_loc_req_pane_g1

0xe2e6,	// (0x0003ede6) heading_loc_req_pane_g2

0xe2ee,	// (0x0003edee) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0003fdba) heading_loc_req_pane_g

0xe2f6,	// (0x0003edf6) heading_loc_req_pane_t1

0xe316,	// (0x0003ee16) bg_popup_sub_pane_cp01_ParamLimits

0xe316,	// (0x0003ee16) bg_popup_sub_pane_cp01

0xe324,	// (0x0003ee24) popup_cale_events_window_g1_ParamLimits

0xe324,	// (0x0003ee24) popup_cale_events_window_g1

0xe344,	// (0x0003ee44) popup_cale_events_window_g2_ParamLimits

0xe344,	// (0x0003ee44) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x0003fddc) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x0003fddc) popup_cale_events_window_g

0xe364,	// (0x0003ee64) popup_cale_events_window_t1_ParamLimits

0xe364,	// (0x0003ee64) popup_cale_events_window_t1

0xe376,	// (0x0003ee76) popup_cale_events_window_t2_ParamLimits

0xe376,	// (0x0003ee76) popup_cale_events_window_t2

0xe3b4,	// (0x0003eeb4) popup_cale_events_window_t3_ParamLimits

0xe3b4,	// (0x0003eeb4) popup_cale_events_window_t3

0xe3ee,	// (0x0003eeee) popup_cale_events_window_t4_ParamLimits

0xe3ee,	// (0x0003eeee) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x0003fde1) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x0003fde1) popup_cale_events_window_t

0x7ae2,	// (0x000385e2) call_type_pane

0x040e,	// (0x00030f0e) popup_call_status_window_g1

0x7aee,	// (0x000385ee) popup_call_status_window_g2

0x7afa,	// (0x000385fa) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x0003fdea) popup_call_status_window_g

0xe424,	// (0x0003ef24) call_type_pane_g1

0xe42d,	// (0x0003ef2d) call_type_pane_g2

0x0001,

0xf2f1,	// (0x0003fdf1) call_type_pane_g

0xd8aa,	// (0x0003e3aa) bg_popup_sub_pane_cp02

0xe436,	// (0x0003ef36) listscroll_popup_wml_pane

0xe43e,	// (0x0003ef3e) list_wml_pane

0xe448,	// (0x0003ef48) scroll_pane_cp013

0xe453,	// (0x0003ef53) list_single_graphic_popup_wml_pane_ParamLimits

0xe453,	// (0x0003ef53) list_single_graphic_popup_wml_pane

0xdb1d,	// (0x0003e61d) list_single_graphic_popup_wml_pane_g1

0xe467,	// (0x0003ef67) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x0003fdf6) list_single_graphic_popup_wml_pane_g

0xe46f,	// (0x0003ef6f) list_single_graphic_popup_wml_pane_t1

0xe485,	// (0x0003ef85) aid_call_pane

0xdafd,	// (0x0003e5fd) popup_clock_analogue_window_g1

0xdafd,	// (0x0003e5fd) popup_clock_analogue_window_g2

0x7b06,	// (0x00038606) popup_clock_analogue_window_g3

0x7b06,	// (0x00038606) popup_clock_analogue_window_g4

0xdb1d,	// (0x0003e61d) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x0003fdfb) popup_clock_analogue_window_g

0x7b0e,	// (0x0003860e) popup_clock_analogue_window_t1

0x7b1c,	// (0x0003861c) clock_digital_number_pane_ParamLimits

0x7b1c,	// (0x0003861c) clock_digital_number_pane

0x7b28,	// (0x00038628) clock_digital_number_pane_cp02_ParamLimits

0x7b28,	// (0x00038628) clock_digital_number_pane_cp02

0x7b34,	// (0x00038634) clock_digital_number_pane_cp03_ParamLimits

0x7b34,	// (0x00038634) clock_digital_number_pane_cp03

0x7b40,	// (0x00038640) clock_digital_number_pane_cp04_ParamLimits

0x7b40,	// (0x00038640) clock_digital_number_pane_cp04

0x7b4c,	// (0x0003864c) clock_digital_separator_pane_ParamLimits

0x7b4c,	// (0x0003864c) clock_digital_separator_pane

0x7b58,	// (0x00038658) popup_clock_digital_window_t1

0xdb1d,	// (0x0003e61d) clock_digital_number_pane_g1

0xdb1d,	// (0x0003e61d) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0003fd7b) clock_digital_number_pane_g

0xdb1d,	// (0x0003e61d) clock_digital_separator_pane_g1

0xdb1d,	// (0x0003e61d) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0003fd7b) clock_digital_separator_pane_g

0xd8aa,	// (0x0003e3aa) bg_popup_window_pane_cp04

0xe48d,	// (0x0003ef8d) heading_pane_cp03

0xdd90,	// (0x0003e890) listscroll_popup_gms_pane

0xd8aa,	// (0x0003e3aa) grid_large_graphic_popup_pane

0xe496,	// (0x0003ef96) listscroll_popup_gms_pane_g1

0xe49f,	// (0x0003ef9f) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x0003fe06) listscroll_popup_gms_pane_g

0xe4a8,	// (0x0003efa8) scroll_pane_cp014

0xd454,	// (0x0003df54) cell_large_graphic_popup_pane_ParamLimits

0xd454,	// (0x0003df54) cell_large_graphic_popup_pane

0xdb80,	// (0x0003e680) cell_large_graphic_popup_pane_g1_ParamLimits

0xdb80,	// (0x0003e680) cell_large_graphic_popup_pane_g1

0xe4b1,	// (0x0003efb1) cell_large_graphic_popup_pane_g2_ParamLimits

0xe4b1,	// (0x0003efb1) cell_large_graphic_popup_pane_g2

0xe4bf,	// (0x0003efbf) cell_large_graphic_popup_pane_g3_ParamLimits

0xe4bf,	// (0x0003efbf) cell_large_graphic_popup_pane_g3

0xe4cd,	// (0x0003efcd) cell_large_graphic_popup_pane_g4_ParamLimits

0xe4cd,	// (0x0003efcd) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x0003fe0b) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x0003fe0b) cell_large_graphic_popup_pane_g

0xd8aa,	// (0x0003e3aa) grid_highlight_pane_cp010

0xdb1d,	// (0x0003e61d) bg_popup_call_pane_g1

0xe4de,	// (0x0003efde) list_single_graphic_popup_conf_pane_ParamLimits

0xe4de,	// (0x0003efde) list_single_graphic_popup_conf_pane

0xe4f0,	// (0x0003eff0) list_highlight_pane_cp01

0xe4f9,	// (0x0003eff9) list_single_graphic_popup_conf_pane_g1

0xe501,	// (0x0003f001) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x0003fe14) list_single_graphic_popup_conf_pane_g

0xe509,	// (0x0003f009) list_single_graphic_popup_conf_pane_t1

0xe517,	// (0x0003f017) linegrid_cams_pane_g1

0x7b75,	// (0x00038675) linegrid_cams_pane_g2

0xdd76,	// (0x0003e876) linegrid_cams_pane_g3

0xe520,	// (0x0003f020) linegrid_cams_pane_g4

0x7b7e,	// (0x0003867e) linegrid_cams_pane_g5

0x7b87,	// (0x00038687) linegrid_cams_pane_g6

0xdd7f,	// (0x0003e87f) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x0003fe19) linegrid_cams_pane_g

0xe529,	// (0x0003f029) popup_clock_analogue_window

0xe529,	// (0x0003f029) popup_clock_digital_window

0xd8aa,	// (0x0003e3aa) popup_phob_thumbnail_window

0xdb1d,	// (0x0003e61d) call_video_uplink_pane_g1

0xe532,	// (0x0003f032) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x0003fe28) call_video_uplink_pane_g

0xe53a,	// (0x0003f03a) video_uplink_pane

0xe542,	// (0x0003f042) mce_image_pane_g1

0x7b92,	// (0x00038692) mce_image_pane_g2

0x7b9c,	// (0x0003869c) mce_image_pane_g3

0x7ba6,	// (0x000386a6) mce_image_pane_g4

0x7bae,	// (0x000386ae) mce_image_pane_g5

0x0004,

0xf32d,	// (0x0003fe2d) mce_image_pane_g

0xe54c,	// (0x0003f04c) control_top_pane_stacon_cp01_ParamLimits

0xe54c,	// (0x0003f04c) control_top_pane_stacon_cp01

0xe560,	// (0x0003f060) uni_indicator_pane_stacon_cp01_ParamLimits

0xe560,	// (0x0003f060) uni_indicator_pane_stacon_cp01

0xe571,	// (0x0003f071) bg_popup_sub_pane_cp03

0x7bb6,	// (0x000386b6) chi_dic_find_pane

0x7bbe,	// (0x000386be) listscroll_chi_dic_pane

0x7bc7,	// (0x000386c7) main_pane_chidic_g1

0x7bda,	// (0x000386da) chi_dic_find_pane_t1

0xe57b,	// (0x0003f07b) find_chidic_pane

0xe584,	// (0x0003f084) chi_dic_list_pane_ParamLimits

0xe584,	// (0x0003f084) chi_dic_list_pane

0xe595,	// (0x0003f095) scroll_pane_cp020

0x7be8,	// (0x000386e8) find_chidic_pane_t1

0xd8aa,	// (0x0003e3aa) input_focus_pane_cp06

0xe59d,	// (0x0003f09d) list_chi_dic_pane_ParamLimits

0xe59d,	// (0x0003f09d) list_chi_dic_pane

0x7bf7,	// (0x000386f7) list_chi_dic_pane_t1_ParamLimits

0x7bf7,	// (0x000386f7) list_chi_dic_pane_t1

0xd8aa,	// (0x0003e3aa) list_highlight_pane_cp020

0xe5b2,	// (0x0003f0b2) bg_cale_heading_pane_g1

0x7c0a,	// (0x0003870a) bg_cale_heading_pane_g2

0x7c12,	// (0x00038712) bg_cale_heading_pane_g3

0x7c1a,	// (0x0003871a) bg_cale_heading_pane_g4

0x7c24,	// (0x00038724) bg_cale_heading_pane_g5

0x7c2e,	// (0x0003872e) bg_cale_heading_pane_g6

0x7c36,	// (0x00038736) bg_cale_heading_pane_g7

0x7c3e,	// (0x0003873e) bg_cale_heading_pane_g8

0x7c48,	// (0x00038748) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x0003fe38) bg_cale_heading_pane_g

0xe5b2,	// (0x0003f0b2) bg_cale_side_pane_g1

0x7c52,	// (0x00038752) bg_cale_side_pane_g2

0x7c5c,	// (0x0003875c) bg_cale_side_pane_g3

0x7c66,	// (0x00038766) bg_cale_side_pane_g4

0x7c70,	// (0x00038770) bg_cale_side_pane_g5

0x7c7a,	// (0x0003877a) bg_cale_side_pane_g6

0x7c84,	// (0x00038784) bg_cale_side_pane_g7

0x7c8e,	// (0x0003878e) bg_cale_side_pane_g8

0x7c96,	// (0x00038796) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x0003fe4b) bg_cale_side_pane_g

0x7c9e,	// (0x0003879e) popup_call_status_window_ParamLimits

0x7c9e,	// (0x0003879e) popup_call_status_window

0xe5ba,	// (0x0003f0ba) stacon_top_pane

0xe5c2,	// (0x0003f0c2) status_pane_ParamLimits

0xe5c2,	// (0x0003f0c2) status_pane

0xe5d7,	// (0x0003f0d7) status_small_pane

0xe5df,	// (0x0003f0df) control_pane

0xd8aa,	// (0x0003e3aa) stacon_bottom_pane

0xe5e7,	// (0x0003f0e7) list_single_mce_smart_pane_t1_ParamLimits

0xe5e7,	// (0x0003f0e7) list_single_mce_smart_pane_t1

0xe5fa,	// (0x0003f0fa) list_single_mce_smart_pane_t2_ParamLimits

0xe5fa,	// (0x0003f0fa) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x0003fe5e) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x0003fe5e) list_single_mce_smart_pane_t

0x7caa,	// (0x000387aa) compass_pane

0x7cb5,	// (0x000387b5) main_location2_pane_t1

0x7ccb,	// (0x000387cb) main_location2_pane_t2

0x7ce1,	// (0x000387e1) main_location2_pane_t3

0x0003,

0xf363,	// (0x0003fe63) main_location2_pane_t

0xe619,	// (0x0003f119) compass_pane_g1_ParamLimits

0xe619,	// (0x0003f119) compass_pane_g1

0x7d2f,	// (0x0003882f) compass_pane_t1

0x7d3e,	// (0x0003883e) compass_pane_t2

0x0005,

0xf36c,	// (0x0003fe6c) compass_pane_t

0x7d89,	// (0x00038889) text_secondary_cp61

0xe62d,	// (0x0003f12d) navi_pane_cams_g5

0xe650,	// (0x0003f150) navi_pane_im_t1

0xe65e,	// (0x0003f15e) navi_pane_mp_g1_ParamLimits

0xe65e,	// (0x0003f15e) navi_pane_mp_g1

0xe672,	// (0x0003f172) navi_pane_mp_g2_ParamLimits

0xe672,	// (0x0003f172) navi_pane_mp_g2

0xe67e,	// (0x0003f17e) navi_pane_mp_g3_ParamLimits

0xe67e,	// (0x0003f17e) navi_pane_mp_g3

0x0002,

0xf380,	// (0x0003fe80) navi_pane_mp_g_ParamLimits

0xf380,	// (0x0003fe80) navi_pane_mp_g

0xe68a,	// (0x0003f18a) navi_pane_mp_t1

0xe698,	// (0x0003f198) navi_pane_mp_t2

0x0002,

0xf387,	// (0x0003fe87) navi_pane_mp_t

0xe6d4,	// (0x0003f1d4) navi_pane_vt_g1

0xe68a,	// (0x0003f18a) navi_pane_vt_t1

0xe6dc,	// (0x0003f1dc) navi_slider_pane

0xdd90,	// (0x0003e890) zooming_pane

0xe6e4,	// (0x0003f1e4) navi_slider_pane_g1

0x7ebe,	// (0x000389be) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x0003fe8e) navi_slider_pane_g

0xe708,	// (0x0003f208) aid_levels_zoom

0xe710,	// (0x0003f210) zooming_pane_g1

0xe718,	// (0x0003f218) zooming_pane_g2

0xe718,	// (0x0003f218) zooming_pane_g3

0x0002,

0xf39d,	// (0x0003fe9d) zooming_pane_g

0xe720,	// (0x0003f220) level_10_zoom

0xe729,	// (0x0003f229) level_11_zoom

0xe732,	// (0x0003f232) level_1_zoom

0xe73b,	// (0x0003f23b) level_2_zoom

0xe744,	// (0x0003f244) level_3_zoom

0xe74d,	// (0x0003f24d) level_4_zoom

0xe756,	// (0x0003f256) level_5_zoom

0xe75f,	// (0x0003f25f) level_6_zoom

0xe768,	// (0x0003f268) level_7_zoom

0xe771,	// (0x0003f271) level_8_zoom

0xe77a,	// (0x0003f27a) level_9_zoom

0xe78b,	// (0x0003f28b) popup_phob_thumbnail_window_g1

0xe793,	// (0x0003f293) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x0003fea4) popup_phob_thumbnail_window_g

0x883c,	// (0x0003933c) level_1_location

0x8844,	// (0x00039344) level_2_location

0x884c,	// (0x0003934c) level_3_location

0x8856,	// (0x00039356) level_4_location

0xdd90,	// (0x0003e890) level_5_location

0x7ed0,	// (0x000389d0) mce_icon_pane_g1

0x7ed8,	// (0x000389d8) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x0003fea9) mce_icon_pane_g

0x7ee0,	// (0x000389e0) main_mup_pane_g1_ParamLimits

0x7ee0,	// (0x000389e0) main_mup_pane_g1

0xdb9c,	// (0x0003e69c) main_mup_pane_g2_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g2

0xdb9c,	// (0x0003e69c) main_mup_pane_g3_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g3

0xdb9c,	// (0x0003e69c) main_mup_pane_g4_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g4

0xdb9c,	// (0x0003e69c) main_mup_pane_g5_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g5

0xdb9c,	// (0x0003e69c) main_mup_pane_g6_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g6

0xdb9c,	// (0x0003e69c) main_mup_pane_g7_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g7

0xdb9c,	// (0x0003e69c) main_mup_pane_g8_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g8

0xdb9c,	// (0x0003e69c) main_mup_pane_g9_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g9

0xdb9c,	// (0x0003e69c) main_mup_pane_g10_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g10

0xdb9c,	// (0x0003e69c) main_mup_pane_g11_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g11

0xdb8e,	// (0x0003e68e) main_mup_pane_g12_ParamLimits

0xdb8e,	// (0x0003e68e) main_mup_pane_g12

0xdb9c,	// (0x0003e69c) main_mup_pane_g13_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x0003feae) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x0003feae) main_mup_pane_g

0xdbaa,	// (0x0003e6aa) main_mup_pane_t1_ParamLimits

0xdbaa,	// (0x0003e6aa) main_mup_pane_t1

0xdbaa,	// (0x0003e6aa) main_mup_pane_t2_ParamLimits

0xdbaa,	// (0x0003e6aa) main_mup_pane_t2

0xdbaa,	// (0x0003e6aa) main_mup_pane_t3_ParamLimits

0xdbaa,	// (0x0003e6aa) main_mup_pane_t3

0xdd98,	// (0x0003e898) main_mup_pane_t4_ParamLimits

0xdd98,	// (0x0003e898) main_mup_pane_t4

0xdd98,	// (0x0003e898) main_mup_pane_t5_ParamLimits

0xdd98,	// (0x0003e898) main_mup_pane_t5

0xdde0,	// (0x0003e8e0) main_mup_pane_t6_ParamLimits

0xdde0,	// (0x0003e8e0) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x0003fec9) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x0003fec9) main_mup_pane_t

0xdb27,	// (0x0003e627) mup_progress_pane_ParamLimits

0xdb27,	// (0x0003e627) mup_progress_pane

0x1058,	// (0x00031b58) mup_visualizer_pane_ParamLimits

0x1058,	// (0x00031b58) mup_visualizer_pane

0x1058,	// (0x00031b58) mup_volume_pane_ParamLimits

0x1058,	// (0x00031b58) mup_volume_pane

0xdb8e,	// (0x0003e68e) mup_visualizer_pane_g1_ParamLimits

0xdb8e,	// (0x0003e68e) mup_visualizer_pane_g1

0xe79b,	// (0x0003f29b) mup_visualizer_pane_g2_ParamLimits

0xe79b,	// (0x0003f29b) mup_visualizer_pane_g2

0xdb80,	// (0x0003e680) mup_visualizer_pane_g3_ParamLimits

0xdb80,	// (0x0003e680) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x0003fed6) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x0003fed6) mup_visualizer_pane_g

0xddc6,	// (0x0003e8c6) mup_volume_pane_g1

0xddc6,	// (0x0003e8c6) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x0003fedd) mup_volume_pane_g

0xddc6,	// (0x0003e8c6) mup_progress_pane_g1

0xddc6,	// (0x0003e8c6) mup_progress_pane_g2

0xddc6,	// (0x0003e8c6) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x0003fee2) mup_progress_pane_g

0xd8aa,	// (0x0003e3aa) bg_popup_window_pane_cp05

0xe7a9,	// (0x0003f2a9) heading_pane_cp02_ParamLimits

0xe7a9,	// (0x0003f2a9) heading_pane_cp02

0xe7c5,	// (0x0003f2c5) list_popup_blid_pane

0xe7cd,	// (0x0003f2cd) list_blid_sat_info_pane_ParamLimits

0xe7cd,	// (0x0003f2cd) list_blid_sat_info_pane

0xe7e0,	// (0x0003f2e0) list_blid_sat_info_pane_g1

0xe7e8,	// (0x0003f2e8) list_blid_sat_info_pane_t1

0x7fef,	// (0x00038aef) mup_equalizer_pane_ParamLimits

0x7fef,	// (0x00038aef) mup_equalizer_pane

0x8010,	// (0x00038b10) mup_equalizer_pane_cp1_ParamLimits

0x8010,	// (0x00038b10) mup_equalizer_pane_cp1

0x8031,	// (0x00038b31) mup_equalizer_pane_cp2_ParamLimits

0x8031,	// (0x00038b31) mup_equalizer_pane_cp2

0x8052,	// (0x00038b52) mup_equalizer_pane_cp3_ParamLimits

0x8052,	// (0x00038b52) mup_equalizer_pane_cp3

0x8077,	// (0x00038b77) mup_equalizer_pane_cp4_ParamLimits

0x8077,	// (0x00038b77) mup_equalizer_pane_cp4

0x809c,	// (0x00038b9c) mup_equalizer_pane_cp5

0x80b4,	// (0x00038bb4) mup_equalizer_pane_cp6

0x80cc,	// (0x00038bcc) mup_equalizer_pane_cp7

0x0c69,	// (0x00031769) bg_popup_call_poc_act_pane_g9

0x0c71,	// (0x00031771) bg_popup_call_poc_act_pane_g10

0x0c79,	// (0x00031779) bg_popup_call_poc_act_pane_g11

0x000a,

0xdb05,	// (0x0003e605) mup_scale_pane

0xdb1d,	// (0x0003e61d) mup_scale_pane_g1

0xe7f6,	// (0x0003f2f6) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x0003fefe) mup_scale_pane_g

0xe81a,	// (0x0003f31a) msg_data_pane

0xe822,	// (0x0003f322) scroll_pane_cp017

0x80f6,	// (0x00038bf6) bg_list_pane_cp04_ParamLimits

0x80f6,	// (0x00038bf6) bg_list_pane_cp04

0xe82a,	// (0x0003f32a) msg_data_pane_g1

0x8116,	// (0x00038c16) msg_data_pane_g2

0x8120,	// (0x00038c20) msg_data_pane_g3

0x812a,	// (0x00038c2a) msg_data_pane_g4

0x8132,	// (0x00038c32) msg_data_pane_g5

0x813a,	// (0x00038c3a) msg_data_pane_g6

0x8142,	// (0x00038c42) msg_data_pane_g7

0x0006,

0xf40d,	// (0x0003ff0d) msg_data_pane_g

0x4c77,	// (0x00035777) msg_text_pane_ParamLimits

0x4c77,	// (0x00035777) msg_text_pane

0x814a,	// (0x00038c4a) qrid_highlight_pane_cp011_ParamLimits

0x814a,	// (0x00038c4a) qrid_highlight_pane_cp011

0xd8aa,	// (0x0003e3aa) msg_body_pane

0xd8aa,	// (0x0003e3aa) msg_header_pane

0xe83b,	// (0x0003f33b) input_focus_pane_cp07

0x8160,	// (0x00038c60) msg_header_pane_t1_ParamLimits

0x8160,	// (0x00038c60) msg_header_pane_t1

0x4cb4,	// (0x000357b4) msg_header_pane_t2_ParamLimits

0x4cb4,	// (0x000357b4) msg_header_pane_t2

0x0001,

0xf421,	// (0x0003ff21) msg_header_pane_t_ParamLimits

0xf421,	// (0x0003ff21) msg_header_pane_t

0xe850,	// (0x0003f350) msg_body_pane_g1

0x4ccb,	// (0x000357cb) msg_body_pane_t1_ParamLimits

0x4ccb,	// (0x000357cb) msg_body_pane_t1

0x4cfc,	// (0x000357fc) msg_body_pane_t2_ParamLimits

0x4cfc,	// (0x000357fc) msg_body_pane_t2

0x4d0e,	// (0x0003580e) msg_body_pane_t3_ParamLimits

0x4d0e,	// (0x0003580e) msg_body_pane_t3

0x0002,

0xf426,	// (0x0003ff26) msg_body_pane_t_ParamLimits

0xf426,	// (0x0003ff26) msg_body_pane_t

0x81c8,	// (0x00038cc8) main_viewer_pane_g1_ParamLimits

0x81c8,	// (0x00038cc8) main_viewer_pane_g1

0x81d4,	// (0x00038cd4) main_viewer_pane_g2_ParamLimits

0x81d4,	// (0x00038cd4) main_viewer_pane_g2

0x81e0,	// (0x00038ce0) main_viewer_pane_g3_ParamLimits

0x81e0,	// (0x00038ce0) main_viewer_pane_g3

0x81f1,	// (0x00038cf1) main_viewer_pane_g4_ParamLimits

0x81f1,	// (0x00038cf1) main_viewer_pane_g4

0x8202,	// (0x00038d02) main_viewer_pane_g5_ParamLimits

0x8202,	// (0x00038d02) main_viewer_pane_g5

0x8202,	// (0x00038d02) main_viewer_pane_g7_ParamLimits

0x8202,	// (0x00038d02) main_viewer_pane_g7

0x8214,	// (0x00038d14) main_viewer_pane_g8_ParamLimits

0x8214,	// (0x00038d14) main_viewer_pane_g8

0x0007,

0xf436,	// (0x0003ff36) main_viewer_pane_g_ParamLimits

0xf436,	// (0x0003ff36) main_viewer_pane_g

0xe858,	// (0x0003f358) viewer_content_pane_ParamLimits

0xe858,	// (0x0003f358) viewer_content_pane

0x824c,	// (0x00038d4c) main_postcard_pane_g1_ParamLimits

0x824c,	// (0x00038d4c) main_postcard_pane_g1

0x825a,	// (0x00038d5a) main_postcard_pane_g2_ParamLimits

0x825a,	// (0x00038d5a) main_postcard_pane_g2

0x8268,	// (0x00038d68) main_postcard_pane_g3_ParamLimits

0x8268,	// (0x00038d68) main_postcard_pane_g3

0x0005,

0xf447,	// (0x0003ff47) main_postcard_pane_g_ParamLimits

0xf447,	// (0x0003ff47) main_postcard_pane_g

0x8278,	// (0x00038d78) main_postcard_pane_g4

0x0e07,	// (0x00031907) smil_status_volume_pane_g2

0x82a4,	// (0x00038da4) postcard_pane_ParamLimits

0x82a4,	// (0x00038da4) postcard_pane

0x040e,	// (0x00030f0e) postcard_pane_g1_ParamLimits

0x040e,	// (0x00030f0e) postcard_pane_g1

0x82de,	// (0x00038dde) postcard_pane_g2_ParamLimits

0x82de,	// (0x00038dde) postcard_pane_g2

0x82ea,	// (0x00038dea) postcard_pane_g3_ParamLimits

0x82ea,	// (0x00038dea) postcard_pane_g3

0xe866,	// (0x0003f366) postcard_pane_g4_ParamLimits

0xe866,	// (0x0003f366) postcard_pane_g4

0x82f6,	// (0x00038df6) postcard_pane_g5_ParamLimits

0x82f6,	// (0x00038df6) postcard_pane_g5

0x8302,	// (0x00038e02) postcard_pane_g6_ParamLimits

0x8302,	// (0x00038e02) postcard_pane_g6

0xe874,	// (0x0003f374) postcard_pane_g7_ParamLimits

0xe874,	// (0x0003f374) postcard_pane_g7

0x0006,

0xf454,	// (0x0003ff54) postcard_pane_g_ParamLimits

0xf454,	// (0x0003ff54) postcard_pane_g

0x8310,	// (0x00038e10) main_mp2_pane_g1_ParamLimits

0x8310,	// (0x00038e10) main_mp2_pane_g1

0x831e,	// (0x00038e1e) main_mp2_pane_g2_ParamLimits

0x831e,	// (0x00038e1e) main_mp2_pane_g2

0x832a,	// (0x00038e2a) main_mp2_pane_g3_ParamLimits

0x832a,	// (0x00038e2a) main_mp2_pane_g3

0x0002,

0xf463,	// (0x0003ff63) main_mp2_pane_g_ParamLimits

0xf463,	// (0x0003ff63) main_mp2_pane_g

0x8336,	// (0x00038e36) main_mp2_pane_t1_ParamLimits

0x8336,	// (0x00038e36) main_mp2_pane_t1

0x834d,	// (0x00038e4d) main_mp2_pane_t2_ParamLimits

0x834d,	// (0x00038e4d) main_mp2_pane_t2

0x8361,	// (0x00038e61) main_mp2_pane_t3_ParamLimits

0x8361,	// (0x00038e61) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x0003ff6a) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x0003ff6a) main_mp2_pane_t

0xe882,	// (0x0003f382) pec_content_pane_ParamLimits

0xe882,	// (0x0003f382) pec_content_pane

0xdf3f,	// (0x0003ea3f) scroll_pane_cp015

0xe894,	// (0x0003f394) pec_attribute_pane_ParamLimits

0xe894,	// (0x0003f394) pec_attribute_pane

0x8373,	// (0x00038e73) pec_content_pane_g1_ParamLimits

0x8373,	// (0x00038e73) pec_content_pane_g1

0xe8a4,	// (0x0003f3a4) pec_content_pane_t1_ParamLimits

0xe8a4,	// (0x0003f3a4) pec_content_pane_t1

0xe8b6,	// (0x0003f3b6) pec_content_pane_t2_ParamLimits

0xe8b6,	// (0x0003f3b6) pec_content_pane_t2

0x0001,

0xf471,	// (0x0003ff71) pec_content_pane_t_ParamLimits

0xf471,	// (0x0003ff71) pec_content_pane_t

0x837f,	// (0x00038e7f) list_single_graphic_pane_cp01_ParamLimits

0x837f,	// (0x00038e7f) list_single_graphic_pane_cp01

0xdb05,	// (0x0003e605) bg_popup_sub_pane_cp04

0xe8c8,	// (0x0003f3c8) popup_mup_playback_window_g1

0xe8d4,	// (0x0003f3d4) popup_mup_playback_window_t1

0xe8e9,	// (0x0003f3e9) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x0003ff76) popup_mup_playback_window_t

0xe920,	// (0x0003f420) main_image_pane_g1_ParamLimits

0xe920,	// (0x0003f420) main_image_pane_g1

0xe963,	// (0x0003f463) scroll_pane_cp018_ParamLimits

0xe963,	// (0x0003f463) scroll_pane_cp018

0xe97b,	// (0x0003f47b) scroll_pane_cp016_ParamLimits

0xe97b,	// (0x0003f47b) scroll_pane_cp016

0x840d,	// (0x00038f0d) smil2_image_pane_ParamLimits

0x840d,	// (0x00038f0d) smil2_image_pane

0x8443,	// (0x00038f43) smil2_root_pane_ParamLimits

0x8443,	// (0x00038f43) smil2_root_pane

0x846f,	// (0x00038f6f) smil2_text_pane_ParamLimits

0x846f,	// (0x00038f6f) smil2_text_pane

0xd8aa,	// (0x0003e3aa) bg_list_pane_cp06

0xe9b7,	// (0x0003f4b7) grid_radio_pane

0xd8aa,	// (0x0003e3aa) bg_popup_window_pane_cp06

0xe9c1,	// (0x0003f4c1) main_fmradio_pane_t1

0x0c81,	// (0x00031781) heading_pane_cp04

0xe9cf,	// (0x0003f4cf) main_fmradio_pane_t2

0x0c89,	// (0x00031789) popup_cale_lunar_info_window_g1

0xe9dd,	// (0x0003f4dd) main_fmradio_pane_t3

0x0c91,	// (0x00031791) popup_cale_lunar_info_window_g2

0xe9ed,	// (0x0003f4ed) main_fmradio_pane_t4

0x0001,

0xe9fb,	// (0x0003f4fb) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x00040056) popup_cale_lunar_info_window_g

0xf48b,	// (0x0003ff8b) main_fmradio_pane_t

0xea09,	// (0x0003f509) wait_bar_pane_cp03

0xea11,	// (0x0003f511) cell_fmradio_pane_ParamLimits

0xea11,	// (0x0003f511) cell_fmradio_pane

0xe874,	// (0x0003f374) cell_fmradio_pane_g1_ParamLimits

0xe874,	// (0x0003f374) cell_fmradio_pane_g1

0xd8aa,	// (0x0003e3aa) grid_highlight_pane_cp011

0xea26,	// (0x0003f526) poc_content_pane_ParamLimits

0xea26,	// (0x0003f526) poc_content_pane

0xea38,	// (0x0003f538) scroll_pane_cp019

0x84af,	// (0x00038faf) popup_call_poc_act_window_ParamLimits

0x84af,	// (0x00038faf) popup_call_poc_act_window

0x84bc,	// (0x00038fbc) popup_call_poc_inact_window_ParamLimits

0x84bc,	// (0x00038fbc) popup_call_poc_inact_window

0xf52d,	// (0x0004002d) bg_popup_call_poc_act_pane_g

0x0bf9,	// (0x000316f9) bg_popup_call_poc_inact_pane_g1

0x0c01,	// (0x00031701) bg_popup_call_poc_inact_pane_g2

0xea40,	// (0x0003f540) popup_call_poc_act_window_g2

0x0c09,	// (0x00031709) bg_popup_call_poc_inact_pane_g3

0x0c11,	// (0x00031711) bg_popup_call_poc_inact_pane_g4

0x0c19,	// (0x00031719) bg_popup_call_poc_inact_pane_g5

0xea48,	// (0x0003f548) popup_call_poc_act_window_t1_ParamLimits

0xea48,	// (0x0003f548) popup_call_poc_act_window_t1

0xea70,	// (0x0003f570) popup_call_poc_act_window_t2_ParamLimits

0xea70,	// (0x0003f570) popup_call_poc_act_window_t2

0xea98,	// (0x0003f598) popup_call_poc_act_window_t3_ParamLimits

0xea98,	// (0x0003f598) popup_call_poc_act_window_t3

0xeac0,	// (0x0003f5c0) popup_call_poc_act_window_t4_ParamLimits

0xeac0,	// (0x0003f5c0) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x0003ff96) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x0003ff96) popup_call_poc_act_window_t

0x0c21,	// (0x00031721) bg_popup_call_poc_inact_pane_g6

0x0c29,	// (0x00031729) bg_popup_call_poc_inact_pane_g7

0x0c31,	// (0x00031731) bg_popup_call_poc_inact_pane_g8

0xead2,	// (0x0003f5d2) popup_call_poc_inact_window_g2

0x0c39,	// (0x00031739) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x0004001a) bg_popup_call_poc_inact_pane_g

0xeada,	// (0x0003f5da) popup_call_poc_inact_window_t1_ParamLimits

0xeada,	// (0x0003f5da) popup_call_poc_inact_window_t1

0xeaef,	// (0x0003f5ef) popup_call_poc_inact_window_t2_ParamLimits

0xeaef,	// (0x0003f5ef) popup_call_poc_inact_window_t2

0xeb04,	// (0x0003f604) popup_call_poc_inact_window_t3_ParamLimits

0xeb04,	// (0x0003f604) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x0003ff9f) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x0003ff9f) popup_call_poc_inact_window_t

0x0d7f,	// (0x0003187f) context_pane_ParamLimits

0x8b65,	// (0x00039665) signal_pane_ParamLimits

0xdd90,	// (0x0003e890) main_call2_pane

0x8ad1,	// (0x000395d1) popup_phob_thumbnail2_window_ParamLimits

0x8ad1,	// (0x000395d1) popup_phob_thumbnail2_window

0x8176,	// (0x00038c76) aid_hotspot_pointer_arrow_pane

0x817e,	// (0x00038c7e) aid_hotspot_pointer_hand_pane

0x8804,	// (0x00039304) phob_pre_status_pane_g5

0xd454,	// (0x0003df54) cams_zoom_pane_ParamLimits

0xd454,	// (0x0003df54) image_vga_pane_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera_pane_g1_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera_pane_g2_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera_pane_g3_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera_pane_g4_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera_pane_g5_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera_pane_g6_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0003fcc5) main_camera_pane_g_ParamLimits

0xdd98,	// (0x0003e898) main_camera_pane_t1_ParamLimits

0xdd98,	// (0x0003e898) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0003fcd6) main_camera_pane_t_ParamLimits

0xdb05,	// (0x0003e605) bg_popup_preview_window_pane_cp01_ParamLimits

0xdb05,	// (0x0003e605) bg_popup_preview_window_pane_cp01

0xeb19,	// (0x0003f619) popup_phob_thumbnail2_window_g1_ParamLimits

0xeb19,	// (0x0003f619) popup_phob_thumbnail2_window_g1

0xd8aa,	// (0x0003e3aa) call2_cli_visual_pane

0x84d8,	// (0x00038fd8) popup_call2_audio_conf_window_ParamLimits

0x84d8,	// (0x00038fd8) popup_call2_audio_conf_window

0x84f1,	// (0x00038ff1) popup_call2_audio_first_window_ParamLimits

0x84f1,	// (0x00038ff1) popup_call2_audio_first_window

0x858f,	// (0x0003908f) popup_call2_audio_in_window_ParamLimits

0x858f,	// (0x0003908f) popup_call2_audio_in_window

0x85d3,	// (0x000390d3) popup_call2_audio_out_window_ParamLimits

0x85d3,	// (0x000390d3) popup_call2_audio_out_window

0x863d,	// (0x0003913d) popup_call2_audio_second_window_ParamLimits

0x863d,	// (0x0003913d) popup_call2_audio_second_window

0x869b,	// (0x0003919b) popup_call2_audio_wait_window_ParamLimits

0x869b,	// (0x0003919b) popup_call2_audio_wait_window

0xd8aa,	// (0x0003e3aa) bg_popup_call2_act_pane_cp03

0xdae7,	// (0x0003e5e7) list_conf_pane_cp

0xeb25,	// (0x0003f625) popup_call2_audio_conf_window_t1

0xeb33,	// (0x0003f633) list_single_graphic_popup_conf2_pane_ParamLimits

0xeb33,	// (0x0003f633) list_single_graphic_popup_conf2_pane

0xe4f0,	// (0x0003eff0) list_highlight_pane_cp04

0xeb46,	// (0x0003f646) list_single_graphic_popup_conf2_pane_g1

0xe501,	// (0x0003f001) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x0003ffa6) list_single_graphic_popup_conf2_pane_g

0xeb50,	// (0x0003f650) list_single_graphic_popup_conf2_pane_t1

0xeb5e,	// (0x0003f65e) bg_popup_call2_act_pane_cp01_ParamLimits

0xeb5e,	// (0x0003f65e) bg_popup_call2_act_pane_cp01

0xebe8,	// (0x0003f6e8) call_type_pane_cp05_ParamLimits

0xebe8,	// (0x0003f6e8) call_type_pane_cp05

0xec3c,	// (0x0003f73c) popup_call2_audio_second_window_g1_ParamLimits

0xec3c,	// (0x0003f73c) popup_call2_audio_second_window_g1

0xec90,	// (0x0003f790) popup_call2_audio_second_window_g2_ParamLimits

0xec90,	// (0x0003f790) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x0003ffab) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x0003ffab) popup_call2_audio_second_window_g

0xecf5,	// (0x0003f7f5) popup_call2_audio_second_window_t1_ParamLimits

0xecf5,	// (0x0003f7f5) popup_call2_audio_second_window_t1

0xedb0,	// (0x0003f8b0) popup_call2_audio_second_window_t2_ParamLimits

0xedb0,	// (0x0003f8b0) popup_call2_audio_second_window_t2

0xee03,	// (0x0003f903) popup_call2_audio_second_window_t3_ParamLimits

0xee03,	// (0x0003f903) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x0003ffb2) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x0003ffb2) popup_call2_audio_second_window_t

0xd8aa,	// (0x0003e3aa) bg_popup_call2_in_pane_cp02

0xd8b4,	// (0x0003e3b4) call_type_pane_cp04

0x86da,	// (0x000391da) popup_call2_audio_wait_window_g1

0x86e2,	// (0x000391e2) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x0003ffbb) popup_call2_audio_wait_window_g

0xd8cc,	// (0x0003e3cc) popup_call2_audio_wait_window_t3

0xeef6,	// (0x0003f9f6) bg_popup_call2_act_pane_ParamLimits

0xeef6,	// (0x0003f9f6) bg_popup_call2_act_pane

0xefb6,	// (0x0003fab6) call_type_pane_cp03_ParamLimits

0xefb6,	// (0x0003fab6) call_type_pane_cp03

0x033a,	// (0x00030e3a) popup_call2_audio_first_window_g1_ParamLimits

0x033a,	// (0x00030e3a) popup_call2_audio_first_window_g1

0x03aa,	// (0x00030eaa) popup_call2_audio_first_window_g2_ParamLimits

0x03aa,	// (0x00030eaa) popup_call2_audio_first_window_g2

0x040e,	// (0x00030f0e) popup_call2_audio_first_window_g3_ParamLimits

0x040e,	// (0x00030f0e) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x0003ffc0) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x0003ffc0) popup_call2_audio_first_window_g

0x0496,	// (0x00030f96) popup_call2_audio_first_window_t1_ParamLimits

0x0496,	// (0x00030f96) popup_call2_audio_first_window_t1

0x0599,	// (0x00031099) popup_call2_audio_first_window_t4_ParamLimits

0x0599,	// (0x00031099) popup_call2_audio_first_window_t4

0x067c,	// (0x0003117c) popup_call2_audio_first_window_t5_ParamLimits

0x067c,	// (0x0003117c) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x0003ffcb) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x0003ffcb) popup_call2_audio_first_window_t

0xdafd,	// (0x0003e5fd) bg_popup_call2_act_pane_g1

0x0c9b,	// (0x0003179b) popup_cale_lunar_info_window_t1

0x0ca9,	// (0x000317a9) popup_cale_lunar_info_window_t2

0x0cb7,	// (0x000317b7) popup_cale_lunar_info_window_t3

0xd8aa,	// (0x0003e3aa) bg_popup_call2_bubble_pane

0x077d,	// (0x0003127d) bg_popup_call2_in_pane_cp01_ParamLimits

0x077d,	// (0x0003127d) bg_popup_call2_in_pane_cp01

0xd586,	// (0x0003e086) call_type_pane_cp02

0x86ea,	// (0x000391ea) popup_call2_audio_out_window_g1_ParamLimits

0x86ea,	// (0x000391ea) popup_call2_audio_out_window_g1

0x07c5,	// (0x000312c5) popup_call2_audio_out_window_g2_ParamLimits

0x07c5,	// (0x000312c5) popup_call2_audio_out_window_g2

0x8716,	// (0x00039216) popup_call2_audio_out_window_g3_ParamLimits

0x8716,	// (0x00039216) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x0003ffd4) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x0003ffd4) popup_call2_audio_out_window_g

0x07fc,	// (0x000312fc) popup_call2_audio_out_window_t1_ParamLimits

0x07fc,	// (0x000312fc) popup_call2_audio_out_window_t1

0x085b,	// (0x0003135b) popup_call2_audio_out_window_t2_ParamLimits

0x085b,	// (0x0003135b) popup_call2_audio_out_window_t2

0x08af,	// (0x000313af) popup_call2_audio_out_window_t3_ParamLimits

0x08af,	// (0x000313af) popup_call2_audio_out_window_t3

0x08c5,	// (0x000313c5) popup_call2_audio_out_window_t4_ParamLimits

0x08c5,	// (0x000313c5) popup_call2_audio_out_window_t4

0x08db,	// (0x000313db) popup_call2_audio_out_window_t5_ParamLimits

0x08db,	// (0x000313db) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x0003ffdd) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x0003ffdd) popup_call2_audio_out_window_t

0x093f,	// (0x0003143f) bg_popup_call2_in_pane_ParamLimits

0x093f,	// (0x0003143f) bg_popup_call2_in_pane

0x099b,	// (0x0003149b) popup_call2_audio_in_window_g1_ParamLimits

0x099b,	// (0x0003149b) popup_call2_audio_in_window_g1

0x09d3,	// (0x000314d3) popup_call2_audio_in_window_g2_ParamLimits

0x09d3,	// (0x000314d3) popup_call2_audio_in_window_g2

0x0a0b,	// (0x0003150b) popup_call2_audio_in_window_g3_ParamLimits

0x0a0b,	// (0x0003150b) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x0003ffea) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x0003ffea) popup_call2_audio_in_window_g

0x0a63,	// (0x00031563) popup_call2_audio_in_window_t1_ParamLimits

0x0a63,	// (0x00031563) popup_call2_audio_in_window_t1

0x0ae3,	// (0x000315e3) popup_call2_audio_in_window_t2_ParamLimits

0x0ae3,	// (0x000315e3) popup_call2_audio_in_window_t2

0x0b63,	// (0x00031663) popup_call2_audio_in_window_t3_ParamLimits

0x0b63,	// (0x00031663) popup_call2_audio_in_window_t3

0x0b7d,	// (0x0003167d) popup_call2_audio_in_window_t4_ParamLimits

0x0b7d,	// (0x0003167d) popup_call2_audio_in_window_t4

0x0b8f,	// (0x0003168f) popup_call2_audio_in_window_t5_ParamLimits

0x0b8f,	// (0x0003168f) popup_call2_audio_in_window_t5

0x0ba4,	// (0x000316a4) popup_call2_audio_in_window_t6_ParamLimits

0x0ba4,	// (0x000316a4) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x0003fff3) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x0003fff3) popup_call2_audio_in_window_t

0xdafd,	// (0x0003e5fd) bg_popup_call2_in_pane_g1

0x0cc5,	// (0x000317c5) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x0004005b) popup_cale_lunar_info_window_t

0xdb05,	// (0x0003e605) bg_popup_call2_rect_pane_ParamLimits

0xdb05,	// (0x0003e605) bg_popup_call2_rect_pane

0xd8aa,	// (0x0003e3aa) call2_cli_visual_graphic_pane

0xd8aa,	// (0x0003e3aa) call2_cli_visual_text_pane

0x8b8d,	// (0x0003968d) smil_status_volume_pane_g3

0x0002,

0xdb1d,	// (0x0003e61d) call2_cli_visual_graphic_pane_g1

0xdb1d,	// (0x0003e61d) call2_cli_visual_graphic_pane_g2

0xdb1d,	// (0x0003e61d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x00040000) call2_cli_visual_graphic_pane_g

0x0bb9,	// (0x000316b9) bg_popup_call2_rect_pane_g1

0xdcc9,	// (0x0003e7c9) bg_popup_call2_rect_pane_g2

0x0bc1,	// (0x000316c1) bg_popup_call2_rect_pane_g3

0x0bc9,	// (0x000316c9) bg_popup_call2_rect_pane_g4

0x0bd1,	// (0x000316d1) bg_popup_call2_rect_pane_g5

0x0bd9,	// (0x000316d9) bg_popup_call2_rect_pane_g6

0x0be1,	// (0x000316e1) bg_popup_call2_rect_pane_g7

0x0be9,	// (0x000316e9) bg_popup_call2_rect_pane_g8

0x0bf1,	// (0x000316f1) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x00040007) bg_popup_call2_rect_pane_g

0x0bf9,	// (0x000316f9) bg_popup_call2_bubble_pane_g1

0x0c01,	// (0x00031701) bg_popup_call2_bubble_pane_g2

0x0c09,	// (0x00031709) bg_popup_call2_bubble_pane_g3

0x0c11,	// (0x00031711) bg_popup_call2_bubble_pane_g4

0x0c19,	// (0x00031719) bg_popup_call2_bubble_pane_g5

0x0c21,	// (0x00031721) bg_popup_call2_bubble_pane_g6

0x0c29,	// (0x00031729) bg_popup_call2_bubble_pane_g7

0x0c31,	// (0x00031731) bg_popup_call2_bubble_pane_g8

0x0c39,	// (0x00031739) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x0004001a) bg_popup_call2_bubble_pane_g

0x607f,	// (0x00036b7f) aid_cale_week_size_cell_pane

0xdb05,	// (0x0003e605) aid_cams_cif_uncrop_pane_ParamLimits

0xdb05,	// (0x0003e605) aid_cams_cif_uncrop_pane

0x686e,	// (0x0003736e) aid_cams_size_cell_ParamLimits

0x686e,	// (0x0003736e) aid_cams_size_cell

0x687a,	// (0x0003737a) grid_cams_pane_ParamLimits

0x6888,	// (0x00037388) linegrid_cams_pane_ParamLimits

0x6959,	// (0x00037459) call_video_pane_t1

0x6976,	// (0x00037476) call_video_pane_t2

0x0001,

0xf222,	// (0x0003fd22) call_video_pane_t

0x6e42,	// (0x00037942) aid_cale_month_size_cell_pane_ParamLimits

0x6e42,	// (0x00037942) aid_cale_month_size_cell_pane

0xf59f,	// (0x0004009f) smil_status_volume_pane_g

0x8b9a,	// (0x0003969a) volume_smil_pane_ParamLimits

0x599a,	// (0x0003649a) aid_popup2_width_pane

0x5f8b,	// (0x00036a8b) cell_qdial_pane_g4_ParamLimits

0x5f8b,	// (0x00036a8b) cell_qdial_pane_g4

0x7d0b,	// (0x0003880b) aid_blid_cardinal_pane_ParamLimits

0x7d1b,	// (0x0003881b) aid_blid_destination_pane_ParamLimits

0x7d1b,	// (0x0003881b) aid_blid_destination_pane

0xdb05,	// (0x0003e605) bg_popup_call_poc_act_pane_ParamLimits

0xdb05,	// (0x0003e605) bg_popup_call_poc_act_pane

0xdb05,	// (0x0003e605) bg_popup_call_poc_inact_pane_ParamLimits

0xdb05,	// (0x0003e605) bg_popup_call_poc_inact_pane

0x0c41,	// (0x00031741) bg_popup_call_poc_act_pane_g1

0x0c49,	// (0x00031749) bg_popup_call_poc_act_pane_g2

0x0c51,	// (0x00031751) bg_popup_call_poc_act_pane_g3

0x0c11,	// (0x00031711) bg_popup_call_poc_act_pane_g4

0x0c19,	// (0x00031719) bg_popup_call_poc_act_pane_g5

0x0c59,	// (0x00031759) bg_popup_call_poc_act_pane_g6

0x0c29,	// (0x00031729) bg_popup_call_poc_act_pane_g7

0x0c61,	// (0x00031761) bg_popup_call_poc_act_pane_g8

0xd8aa,	// (0x0003e3aa) main_usb_pane

0x89ee,	// (0x000394ee) popup_cale_lunar_info_window

0x6c8e,	// (0x0003778e) im_reading_pane_t1_ParamLimits

0xde97,	// (0x0003e997) list_im_pane_ParamLimits

0xdea8,	// (0x0003e9a8) scroll_pane_cp07_ParamLimits

0xd8aa,	// (0x0003e3aa) grid_highlight_pane_cp012

0xdb05,	// (0x0003e605) mup_scale_pane_ParamLimits

0x040e,	// (0x00030f0e) main_usb_pane_g1_ParamLimits

0x040e,	// (0x00030f0e) main_usb_pane_g1

0x876c,	// (0x0003926c) main_usb_pane_g2_ParamLimits

0x876c,	// (0x0003926c) main_usb_pane_g2

0x0001,

0xf544,	// (0x00040044) main_usb_pane_g_ParamLimits

0xf544,	// (0x00040044) main_usb_pane_g

0x8778,	// (0x00039278) main_usb_pane_t1_ParamLimits

0x8778,	// (0x00039278) main_usb_pane_t1

0x878a,	// (0x0003928a) main_usb_pane_t2_ParamLimits

0x878a,	// (0x0003928a) main_usb_pane_t2

0x879c,	// (0x0003929c) main_usb_pane_t3_ParamLimits

0x879c,	// (0x0003929c) main_usb_pane_t3

0x87ae,	// (0x000392ae) main_usb_pane_t4_ParamLimits

0x87ae,	// (0x000392ae) main_usb_pane_t4

0x87c0,	// (0x000392c0) main_usb_pane_t5_ParamLimits

0x87c0,	// (0x000392c0) main_usb_pane_t5

0x87d2,	// (0x000392d2) main_usb_pane_t6_ParamLimits

0x87d2,	// (0x000392d2) main_usb_pane_t6

0x0005,

0xf549,	// (0x00040049) main_usb_pane_t_ParamLimits

0x7caa,	// (0x000387aa) aid_text_placing

0x7cb5,	// (0x000387b5) main_location2_pane_t1_ParamLimits

0x7ccb,	// (0x000387cb) main_location2_pane_t2_ParamLimits

0x7ce1,	// (0x000387e1) main_location2_pane_t3_ParamLimits

0x7cf7,	// (0x000387f7) main_location2_pane_t4_ParamLimits

0x7cf7,	// (0x000387f7) main_location2_pane_t4

0xf363,	// (0x0003fe63) main_location2_pane_t_ParamLimits

0xdb41,	// (0x0003e641) find_pinb_pane_g2_ParamLimits

0xdb41,	// (0x0003e641) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0003fbda) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0003fbda) find_pinb_pane_g

0xdb4d,	// (0x0003e64d) find_pinb_pane_t1_ParamLimits

0xdb5f,	// (0x0003e65f) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0003fbdf) find_pinb_pane_t_ParamLimits

0xd8aa,	// (0x0003e3aa) main_call3_pane

0x73f5,	// (0x00037ef5) cale_month_day_heading_pane_t1_ParamLimits

0x7477,	// (0x00037f77) cale_month_day_heading_pane_t2_ParamLimits

0x74f0,	// (0x00037ff0) cale_month_day_heading_pane_t3_ParamLimits

0x7569,	// (0x00038069) cale_month_day_heading_pane_t4_ParamLimits

0x75e2,	// (0x000380e2) cale_month_day_heading_pane_t5_ParamLimits

0x7663,	// (0x00038163) cale_month_day_heading_pane_t6_ParamLimits

0x76ec,	// (0x000381ec) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0003fd5a) cale_month_day_heading_pane_t_ParamLimits

0xe0f2,	// (0x0003ebf2) smil_status_volume_pane

0x82c2,	// (0x00038dc2) postcard_address_pane_ParamLimits

0x82c2,	// (0x00038dc2) postcard_address_pane

0x82d0,	// (0x00038dd0) postcard_message_pane_ParamLimits

0x82d0,	// (0x00038dd0) postcard_message_pane

0x8742,	// (0x00039242) call2_cli_visual_pane_t1_ParamLimits

0x8742,	// (0x00039242) call2_cli_visual_pane_t1

0x0e67,	// (0x00031967) postcard_message_pane_t1_ParamLimits

0x0e67,	// (0x00031967) postcard_message_pane_t1

0x0e4f,	// (0x0003194f) postcard_address_pane_t1_ParamLimits

0x0e4f,	// (0x0003194f) postcard_address_pane_t1

0x8cd1,	// (0x000397d1) popup_call3_audio_in_window_ParamLimits

0x8cd1,	// (0x000397d1) popup_call3_audio_in_window

0x8baf,	// (0x000396af) bg_popup_call3_in_pane_ParamLimits

0x8baf,	// (0x000396af) bg_popup_call3_in_pane

0x8c17,	// (0x00039717) popup_call3_audio_in_window_g1_ParamLimits

0x8c17,	// (0x00039717) popup_call3_audio_in_window_g1

0x8c2f,	// (0x0003972f) popup_call3_audio_in_window_g2_ParamLimits

0x8c2f,	// (0x0003972f) popup_call3_audio_in_window_g2

0x8c47,	// (0x00039747) popup_call3_audio_in_window_g3_ParamLimits

0x8c47,	// (0x00039747) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x000400a6) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x000400a6) popup_call3_audio_in_window_g

0x8c6f,	// (0x0003976f) popup_call3_audio_in_window_t1_ParamLimits

0x8c6f,	// (0x0003976f) popup_call3_audio_in_window_t1

0x8c97,	// (0x00039797) popup_call3_audio_in_window_t2_ParamLimits

0x8c97,	// (0x00039797) popup_call3_audio_in_window_t2

0x8cbf,	// (0x000397bf) popup_call3_audio_in_window_t3_ParamLimits

0x8cbf,	// (0x000397bf) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x000400af) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x000400af) popup_call3_audio_in_window_t

0xdd90,	// (0x0003e890) bg_popup_call3_rect_pane

0x0bb9,	// (0x000316b9) bg_popup_call3_rect_pane_g1

0xdcc9,	// (0x0003e7c9) bg_popup_call3_rect_pane_g2

0x0bc1,	// (0x000316c1) bg_popup_call3_rect_pane_g3

0x0bc9,	// (0x000316c9) bg_popup_call3_rect_pane_g4

0x0bd1,	// (0x000316d1) bg_popup_call3_rect_pane_g5

0x0bd9,	// (0x000316d9) bg_popup_call3_rect_pane_g6

0x0be1,	// (0x000316e1) bg_popup_call3_rect_pane_g7

0xd44a,	// (0x0003df4a) mup_visualizer_osc_pane

0xd44a,	// (0x0003df4a) mup_visualizer_spec_pane

0x8bcf,	// (0x000396cf) call3_video_qcif_pane_ParamLimits

0x8bcf,	// (0x000396cf) call3_video_qcif_pane

0x8be1,	// (0x000396e1) call3_video_qcif_uncrop_pane_ParamLimits

0x8be1,	// (0x000396e1) call3_video_qcif_uncrop_pane

0x8bf1,	// (0x000396f1) call3_video_subqcif_pane_ParamLimits

0x8bf1,	// (0x000396f1) call3_video_subqcif_pane

0x8c05,	// (0x00039705) call3_video_subqcif_uncrop_pane_ParamLimits

0x8c05,	// (0x00039705) call3_video_subqcif_uncrop_pane

0x8c5f,	// (0x0003975f) popup_call3_audio_in_window_g4_ParamLimits

0x8c5f,	// (0x0003975f) popup_call3_audio_in_window_g4

0xd44a,	// (0x0003df4a) mup_spec_half_pane

0xd44a,	// (0x0003df4a) mup_spec_half_pane_cp

0xd44a,	// (0x0003df4a) mup_osc_middle_pane

0xddc6,	// (0x0003e8c6) mup_visualizer_osc_pane_g1

0x0de0,	// (0x000318e0) mup_spec_bar_pane_ParamLimits

0x0de0,	// (0x000318e0) mup_spec_bar_pane

0xddc6,	// (0x0003e8c6) mup_spec_bar_pane_g1

0xddc6,	// (0x0003e8c6) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x0003fedd) mup_spec_bar_pane_g

0x607f,	// (0x00036b7f) aid_cale_week_size_cell_pane_ParamLimits

0x6099,	// (0x00036b99) bg_cale_heading_pane_ParamLimits

0x60c2,	// (0x00036bc2) bg_cale_pane_cp01_ParamLimits

0x60e4,	// (0x00036be4) cale_week_corner_pane_ParamLimits

0x6103,	// (0x00036c03) cale_week_day_heading_pane_ParamLimits

0x6131,	// (0x00036c31) cale_week_scroll_pane_g1_ParamLimits

0x6155,	// (0x00036c55) cale_week_scroll_pane_g2_ParamLimits

0x616d,	// (0x00036c6d) cale_week_scroll_pane_g3_ParamLimits

0x6185,	// (0x00036c85) cale_week_scroll_pane_g4_ParamLimits

0x619d,	// (0x00036c9d) cale_week_scroll_pane_g5_ParamLimits

0x61b5,	// (0x00036cb5) cale_week_scroll_pane_g6_ParamLimits

0x61d5,	// (0x00036cd5) cale_week_scroll_pane_g7_ParamLimits

0x61f5,	// (0x00036cf5) cale_week_scroll_pane_g8_ParamLimits

0x6215,	// (0x00036d15) cale_week_scroll_pane_g9_ParamLimits

0x6232,	// (0x00036d32) cale_week_scroll_pane_g10_ParamLimits

0x624f,	// (0x00036d4f) cale_week_scroll_pane_g11_ParamLimits

0x626e,	// (0x00036d6e) cale_week_scroll_pane_g12_ParamLimits

0x6293,	// (0x00036d93) cale_week_scroll_pane_g13_ParamLimits

0x62bc,	// (0x00036dbc) cale_week_scroll_pane_g14_ParamLimits

0x62e5,	// (0x00036de5) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0003fc6b) cale_week_scroll_pane_g_ParamLimits

0x632e,	// (0x00036e2e) cale_week_time_pane_ParamLimits

0x634e,	// (0x00036e4e) grid_cale_week_pane_ParamLimits

0xdd06,	// (0x0003e806) listscroll_cale_week_pane_t1

0xdd18,	// (0x0003e818) scroll_pane_cp08_ParamLimits

0x6eba,	// (0x000379ba) cale_month_corner_pane_ParamLimits

0xe0c8,	// (0x0003ebc8) cale_month_pane_t1

0x737c,	// (0x00037e7c) cale_month_week_pane_ParamLimits

0x040e,	// (0x00030f0e) popup_call_status_window_g1_ParamLimits

0x7aee,	// (0x000385ee) popup_call_status_window_g2_ParamLimits

0x7afa,	// (0x000385fa) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x0003fdea) popup_call_status_window_g_ParamLimits

0xe47d,	// (0x0003ef7d) aid_call2_pane

0x4ca6,	// (0x000357a6) msg_header_pane_g1

0x82c2,	// (0x00038dc2) postcard_address2_pane_ParamLimits

0x82c2,	// (0x00038dc2) postcard_address2_pane

0x82d0,	// (0x00038dd0) postcard_message2_pane_ParamLimits

0x82d0,	// (0x00038dd0) postcard_message2_pane

0x8b73,	// (0x00039673) message2_row_pane_ParamLimits

0x8b73,	// (0x00039673) message2_row_pane

0x0d9a,	// (0x0003189a) address2_row_pane_ParamLimits

0x0d9a,	// (0x0003189a) address2_row_pane

0x0dad,	// (0x000318ad) postcard_message2_row_pane_g1

0x0db5,	// (0x000318b5) postcard_message2_row_pane_t1

0x0dad,	// (0x000318ad) address2_row_pane_g1

0x0db5,	// (0x000318b5) address2_row_pane_t1

0x66dc,	// (0x000371dc) aid_size_cell_vorec

0xd8aa,	// (0x0003e3aa) main_rss_pane

0x0dc3,	// (0x000318c3) rss_list_single_pane_ParamLimits

0x0dc3,	// (0x000318c3) rss_list_single_pane

0x0dd1,	// (0x000318d1) rss_list_single_pane_t1

0x0dd1,	// (0x000318d1) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x0004009a) rss_list_single_pane_t

0xd8aa,	// (0x0003e3aa) main_camera2_pane

0xd8aa,	// (0x0003e3aa) main_video2_pane

0xd454,	// (0x0003df54) cams_zoom_pane_cp2_ParamLimits

0xd454,	// (0x0003df54) cams_zoom_pane_cp2

0xd454,	// (0x0003df54) image2_vga_pane_ParamLimits

0xd454,	// (0x0003df54) image2_vga_pane

0xdb8e,	// (0x0003e68e) main_camera2_pane_g1_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera2_pane_g1

0xdb8e,	// (0x0003e68e) main_camera2_pane_g2_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera2_pane_g2

0xdb8e,	// (0x0003e68e) main_camera2_pane_g3_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera2_pane_g3

0xdb8e,	// (0x0003e68e) main_camera2_pane_g4_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera2_pane_g4

0xdb8e,	// (0x0003e68e) main_camera2_pane_g5_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera2_pane_g5

0xdb8e,	// (0x0003e68e) main_camera2_pane_g6_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera2_pane_g6

0xdb8e,	// (0x0003e68e) main_camera2_pane_g7_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera2_pane_g7

0xdb8e,	// (0x0003e68e) main_camera2_pane_g8_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x000400b6) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x000400b6) main_camera2_pane_g

0xdd98,	// (0x0003e898) main_camera2_pane_t1_ParamLimits

0xdd98,	// (0x0003e898) main_camera2_pane_t1

0xdd98,	// (0x0003e898) main_camera2_pane_t2_ParamLimits

0xdd98,	// (0x0003e898) main_camera2_pane_t2

0xdd98,	// (0x0003e898) main_camera2_pane_t3_ParamLimits

0xdd98,	// (0x0003e898) main_camera2_pane_t3

0xdd98,	// (0x0003e898) main_camera2_pane_t4_ParamLimits

0xdd98,	// (0x0003e898) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x000400c9) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x000400c9) main_camera2_pane_t

0xf01a,	// (0x0003fb1a) cams_zoom_pane_cp4_ParamLimits

0xf01a,	// (0x0003fb1a) cams_zoom_pane_cp4

0xdb27,	// (0x0003e627) image2_cif_pane_ParamLimits

0xdb27,	// (0x0003e627) image2_cif_pane

0xd454,	// (0x0003df54) image2_subqcif_pane_ParamLimits

0xd454,	// (0x0003df54) image2_subqcif_pane

0xf028,	// (0x0003fb28) main_video2_pane_g1_ParamLimits

0xf028,	// (0x0003fb28) main_video2_pane_g1

0xf028,	// (0x0003fb28) main_video2_pane_g2_ParamLimits

0xf028,	// (0x0003fb28) main_video2_pane_g2

0xf028,	// (0x0003fb28) main_video2_pane_g3_ParamLimits

0xf028,	// (0x0003fb28) main_video2_pane_g3

0xf028,	// (0x0003fb28) main_video2_pane_g4_ParamLimits

0xf028,	// (0x0003fb28) main_video2_pane_g4

0xf028,	// (0x0003fb28) main_video2_pane_g5_ParamLimits

0xf028,	// (0x0003fb28) main_video2_pane_g5

0xf028,	// (0x0003fb28) main_video2_pane_g6_ParamLimits

0xf028,	// (0x0003fb28) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x000400d8) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x000400d8) main_video2_pane_g

0xf036,	// (0x0003fb36) main_video2_pane_t1_ParamLimits

0xf036,	// (0x0003fb36) main_video2_pane_t1

0xf036,	// (0x0003fb36) main_video2_pane_t2_ParamLimits

0xf036,	// (0x0003fb36) main_video2_pane_t2

0xf036,	// (0x0003fb36) main_video2_pane_t3_ParamLimits

0xf036,	// (0x0003fb36) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x000400e5) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x000400e5) main_video2_pane_t

0x8868,	// (0x00039368) call_muted_g2

0x0001,

0xf58c,	// (0x0004008c) call_muted_g

0xd8aa,	// (0x0003e3aa) main_mup2_pane

0xdb9c,	// (0x0003e69c) main_mup2_pane_g1_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup2_pane_g1

0xdb9c,	// (0x0003e69c) main_mup2_pane_g2_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup2_pane_g2

0xddc6,	// (0x0003e8c6) main_mup_pane_g13_cp1

0xd44a,	// (0x0003df4a) mup_volume_pane_cp1

0xdb9c,	// (0x0003e69c) main_mup2_pane_g4_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup2_pane_g4

0xdb9c,	// (0x0003e69c) main_mup2_pane_g5_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup2_pane_g5

0xdb9c,	// (0x0003e69c) main_mup2_pane_g6_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup2_pane_g6

0xdb9c,	// (0x0003e69c) main_mup2_pane_g7_ParamLimits

0xdb9c,	// (0x0003e69c) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x000400ec) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x000400ec) main_mup2_pane_g

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t1_ParamLimits

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t1

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t2_ParamLimits

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t2

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t3_ParamLimits

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t3

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t4_ParamLimits

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t4

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t5_ParamLimits

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t5

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t6_ParamLimits

0xdbaa,	// (0x0003e6aa) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x000400fb) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x000400fb) main_mup2_pane_t

0x1058,	// (0x00031b58) mup2_visualizer_pane_ParamLimits

0x1058,	// (0x00031b58) mup2_visualizer_pane

0x1058,	// (0x00031b58) mup_progress_pane_cp_ParamLimits

0x1058,	// (0x00031b58) mup_progress_pane_cp

0x0ee3,	// (0x000319e3) mup_volume_pane_cp_ParamLimits

0x0ee3,	// (0x000319e3) mup_volume_pane_cp

0xdb80,	// (0x0003e680) mup2_visualizer_pane_g1_ParamLimits

0xdb80,	// (0x0003e680) mup2_visualizer_pane_g1

0xdb8e,	// (0x0003e68e) mup2_visualizer_pane_g2_ParamLimits

0xdb8e,	// (0x0003e68e) mup2_visualizer_pane_g2

0xdb8e,	// (0x0003e68e) mup2_visualizer_pane_g3_ParamLimits

0xdb8e,	// (0x0003e68e) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0003fbe4) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0003fbe4) mup2_visualizer_pane_g

0xe9af,	// (0x0003f4af) aid_size_cell_fmradio

0x897e,	// (0x0003947e) aid_height_parent_landcape

0xdf26,	// (0x0003ea26) wml_content_pane_cp

0xdf2e,	// (0x0003ea2e) wml_tabs_pane

0xdf37,	// (0x0003ea37) popup_wml_miniature_window

0xdf3f,	// (0x0003ea3f) scroll_pane_cp021

0xdf53,	// (0x0003ea53) wml_content_pane_comp8

0xd8aa,	// (0x0003e3aa) bg_popup_sub_pane_cp05

0x0ef9,	// (0x000319f9) popup_wml_miniature_window_g1

0x0f01,	// (0x00031a01) wml_miniature_view_pane

0x8d02,	// (0x00039802) aid_size_wml_view

0x8d0a,	// (0x0003980a) wml_miniature_view_pane_g1

0x8d13,	// (0x00039813) wml_miniature_view_pane_g2

0x8d1c,	// (0x0003981c) wml_miniature_view_pane_g3

0x8d24,	// (0x00039824) wml_miniature_view_pane_g4

0x8d2c,	// (0x0003982c) wml_miniature_view_pane_g5

0x8d34,	// (0x00039834) wml_miniature_view_pane_g6

0x8d3c,	// (0x0003983c) wml_miniature_view_pane_g7

0x8d44,	// (0x00039844) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x00040108) wml_miniature_view_pane_g

0x0f09,	// (0x00031a09) background_graphic_ParamLimits

0x0f09,	// (0x00031a09) background_graphic

0x0f15,	// (0x00031a15) wml_tabs_2_pane

0x0f1e,	// (0x00031a1e) wml_tabs_3_pane_ParamLimits

0x0f1e,	// (0x00031a1e) wml_tabs_3_pane

0x0f30,	// (0x00031a30) wml_tabs_4_pane_ParamLimits

0x0f30,	// (0x00031a30) wml_tabs_4_pane

0x0f46,	// (0x00031a46) wml_tabs_5_pane_ParamLimits

0x0f46,	// (0x00031a46) wml_tabs_5_pane

0x0f60,	// (0x00031a60) wml_tabs_pane_g2_ParamLimits

0x0f60,	// (0x00031a60) wml_tabs_pane_g2

0x0f75,	// (0x00031a75) wml_tabs_pane_g3_ParamLimits

0x0f75,	// (0x00031a75) wml_tabs_pane_g3

0x0f8a,	// (0x00031a8a) wml_tabs_2_active_pane_ParamLimits

0x0f8a,	// (0x00031a8a) wml_tabs_2_active_pane

0x0f8a,	// (0x00031a8a) wml_tabs_2_passive_pane_ParamLimits

0x0f8a,	// (0x00031a8a) wml_tabs_2_passive_pane

0x8d4c,	// (0x0003984c) wml_tabs_3_active_pane_cp_ParamLimits

0x8d4c,	// (0x0003984c) wml_tabs_3_active_pane_cp

0x8d5f,	// (0x0003985f) wml_tabs_3_passive_pane_ParamLimits

0x8d5f,	// (0x0003985f) wml_tabs_3_passive_pane

0x8d70,	// (0x00039870) wml_tabs_3_passive_pane_cp_ParamLimits

0x8d70,	// (0x00039870) wml_tabs_3_passive_pane_cp

0x8d85,	// (0x00039885) tabs_4_active_pane

0x8d8d,	// (0x0003988d) tabs_4_passive_pane

0x8d95,	// (0x00039895) tabs_4_passive_pane_cp

0x8d9d,	// (0x0003989d) tabs_4_passive_pane_cp2

0x8764,	// (0x00039264) aid_height_text

0x1058,	// (0x00031b58) mup_volume_cont_pane_ParamLimits

0x1058,	// (0x00031b58) mup_volume_cont_pane

0xd44a,	// (0x0003df4a) aid_size_cell_pinb

0xd44a,	// (0x0003df4a) aid_size_list_pinb

0x1058,	// (0x00031b58) mup2_volume_cont_pane_ParamLimits

0x1058,	// (0x00031b58) mup2_volume_cont_pane

0x8da7,	// (0x000398a7) mup2_volume_cont_pane_g1_ParamLimits

0x8da7,	// (0x000398a7) mup2_volume_cont_pane_g1

0x59a6,	// (0x000364a6) aid_size_cell_touch_ParamLimits

0x59a6,	// (0x000364a6) aid_size_cell_touch

0x5c55,	// (0x00036755) touch_pane_ParamLimits

0x5c55,	// (0x00036755) touch_pane

0xd44a,	// (0x0003df4a) main_rss2_pane

0x0fd7,	// (0x00031ad7) listscroll_rss2_pane

0x0fe0,	// (0x00031ae0) rss2_navigation_pane

0x0fe8,	// (0x00031ae8) list_rss2_pane

0xe595,	// (0x0003f095) scroll_pane_cp22

0x0ff0,	// (0x00031af0) rss2_navigation_pane_g1

0x0ff9,	// (0x00031af9) rss2_navigation_pane_g2

0x1001,	// (0x00031b01) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x00040119) rss2_navigation_pane_g

0x1009,	// (0x00031b09) rss2_navigation_pane_t1

0x8dbd,	// (0x000398bd) rss2_list_single_pane_ParamLimits

0x8dbd,	// (0x000398bd) rss2_list_single_pane

0x1017,	// (0x00031b17) rss2_list_single_pane_t2

0x1025,	// (0x00031b25) rss2_list_single_pane_t3_ParamLimits

0x1025,	// (0x00031b25) rss2_list_single_pane_t3

0x1042,	// (0x00031b42) rss2_list_single_pane_t4

0x798a,	// (0x0003848a) smil_status_pane_g1

0xdb27,	// (0x0003e627) main_image2_pane_ParamLimits

0xdb27,	// (0x0003e627) main_image2_pane

0xdb8e,	// (0x0003e68e) main_camera2_pane_g9_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera2_pane_g9

0xdd98,	// (0x0003e898) main_camera2_pane_t5_ParamLimits

0xdd98,	// (0x0003e898) main_camera2_pane_t5

0x8cee,	// (0x000397ee) main_camera2_pane_t6_ParamLimits

0x8cee,	// (0x000397ee) main_camera2_pane_t6

0x8de0,	// (0x000398e0) main_image2_pane_g1_ParamLimits

0x8de0,	// (0x000398e0) main_image2_pane_g1

0x8499,	// (0x00038f99) smil2_video_pane_ParamLimits

0x8499,	// (0x00038f99) smil2_video_pane

0x4c59,	// (0x00035759) aid_zoom_text_primary_cp

0x5bfe,	// (0x000366fe) popup_preview_fixed_window

0xde8f,	// (0x0003e98f) im_reading_pane_g1

0x8ce0,	// (0x000397e0) cams2_bc_adjust_pane_cp_ParamLimits

0x8ce0,	// (0x000397e0) cams2_bc_adjust_pane_cp

0xd454,	// (0x0003df54) cams2_bc_adjust_pane_ParamLimits

0xd454,	// (0x0003df54) cams2_bc_adjust_pane

0xddc6,	// (0x0003e8c6) cams2_bc_adjust_pane_g1

0xd44a,	// (0x0003df4a) cams2_slider_pane

0xddc6,	// (0x0003e8c6) cams2_slider_pane_g1

0xddc6,	// (0x0003e8c6) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x00040120) cams2_slider_pane_g

0x5cea,	// (0x000367ea) calc_display_pane_ParamLimits

0x5d08,	// (0x00036808) calc_paper_pane_ParamLimits

0x5d24,	// (0x00036824) grid_calc_pane_ParamLimits

0x7b58,	// (0x00038658) popup_clock_digital_window_t1_ParamLimits

0xe94c,	// (0x0003f44c) main_image_pane_t1

0x5cd0,	// (0x000367d0) aid_size_cell_calc_ParamLimits

0x5cd0,	// (0x000367d0) aid_size_cell_calc

0x89c4,	// (0x000394c4) popup_blid_sat_info2_window_ParamLimits

0x89c4,	// (0x000394c4) popup_blid_sat_info2_window

0x1050,	// (0x00031b50) aid_size_cell_blid

0x1058,	// (0x00031b58) bg_popup_window_pane_cp07

0x107b,	// (0x00031b7b) grid_popup_blid_pane

0x1085,	// (0x00031b85) heading_pane_cp05_ParamLimits

0x1085,	// (0x00031b85) heading_pane_cp05

0x114f,	// (0x00031c4f) cell_popup_blid_pane_ParamLimits

0x114f,	// (0x00031c4f) cell_popup_blid_pane

0x1179,	// (0x00031c79) cell_popup_blid_pane_g1

0x1181,	// (0x00031c81) cell_popup_blid_pane_t1

0x1058,	// (0x00031b58) mup2_indicator_pane_ParamLimits

0x1058,	// (0x00031b58) mup2_indicator_pane

0xd44a,	// (0x0003df4a) mup2_visualizer_osc_pane

0x0ee3,	// (0x000319e3) mup2_visualizer_spec_pane_ParamLimits

0x0ee3,	// (0x000319e3) mup2_visualizer_spec_pane

0xd44a,	// (0x0003df4a) mup2_spec_half_pane

0xd44a,	// (0x0003df4a) mup2_spec_half_pane_cp

0x118f,	// (0x00031c8f) mup2_spec_bar_pane_ParamLimits

0x118f,	// (0x00031c8f) mup2_spec_bar_pane

0xddc6,	// (0x0003e8c6) mup2_spec_bar_pane_g1

0x11ae,	// (0x00031cae) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x00040146) mup2_spec_bar_pane_g

0xd44a,	// (0x0003df4a) mup2_osc_middle_pane

0xddc6,	// (0x0003e8c6) mup2_visualizer_osc_pane_g1

0xd482,	// (0x0003df82) popup_number_entry_window_t1_ParamLimits

0xd495,	// (0x0003df95) popup_number_entry_window_t2_ParamLimits

0xd4a7,	// (0x0003dfa7) popup_number_entry_window_t3_ParamLimits

0xd4b9,	// (0x0003dfb9) popup_number_entry_window_t5_ParamLimits

0xd4b9,	// (0x0003dfb9) popup_number_entry_window_t5

0xf085,	// (0x0003fb85) popup_number_entry_window_t_ParamLimits

0xd4ee,	// (0x0003dfee) text_title_cp2_ParamLimits

0x8186,	// (0x00038c86) aid_hotspot_pointer_text2_pane

0x8220,	// (0x00038d20) main_viewer_pane_g9_ParamLimits

0x8220,	// (0x00038d20) main_viewer_pane_g9

0xe0c8,	// (0x0003ebc8) cale_month_pane_t1_ParamLimits

0xe105,	// (0x0003ec05) bg_cale_pane_ParamLimits

0xe11d,	// (0x0003ec1d) list_cale_pane_ParamLimits

0xe12e,	// (0x0003ec2e) listscroll_cale_day_pane_t1

0xe140,	// (0x0003ec40) scroll_pane_cp09_ParamLimits

0x7ef3,	// (0x000389f3) main_mup_eq_pane_t1_ParamLimits

0x7ef3,	// (0x000389f3) main_mup_eq_pane_t1

0x7f0f,	// (0x00038a0f) main_mup_eq_pane_t2_ParamLimits

0x7f0f,	// (0x00038a0f) main_mup_eq_pane_t2

0x7f2b,	// (0x00038a2b) main_mup_eq_pane_t3_ParamLimits

0x7f2b,	// (0x00038a2b) main_mup_eq_pane_t3

0x7f45,	// (0x00038a45) main_mup_eq_pane_t4_ParamLimits

0x7f45,	// (0x00038a45) main_mup_eq_pane_t4

0x7f5f,	// (0x00038a5f) main_mup_eq_pane_t5_ParamLimits

0x7f5f,	// (0x00038a5f) main_mup_eq_pane_t5

0x7f79,	// (0x00038a79) main_mup_eq_pane_t6_ParamLimits

0x7f79,	// (0x00038a79) main_mup_eq_pane_t6

0x7f8f,	// (0x00038a8f) main_mup_eq_pane_t7_ParamLimits

0x7f8f,	// (0x00038a8f) main_mup_eq_pane_t7

0x7fa5,	// (0x00038aa5) main_mup_eq_pane_t8_ParamLimits

0x7fa5,	// (0x00038aa5) main_mup_eq_pane_t8

0x7fbb,	// (0x00038abb) main_mup_eq_pane_t9_ParamLimits

0x7fbb,	// (0x00038abb) main_mup_eq_pane_t9

0x7fd7,	// (0x00038ad7) main_mup_eq_pane_t10_ParamLimits

0x7fd7,	// (0x00038ad7) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x0003fee9) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x0003fee9) main_mup_eq_pane_t

0x809c,	// (0x00038b9c) mup_equalizer_pane_cp5_ParamLimits

0x80b4,	// (0x00038bb4) mup_equalizer_pane_cp6_ParamLimits

0x80cc,	// (0x00038bcc) mup_equalizer_pane_cp7_ParamLimits

0xd44a,	// (0x0003df4a) main_gallery_pane

0x0dff,	// (0x000318ff) smil2_volume_pane

0x0e1a,	// (0x0003191a) smil_status_volume_pane_g1_ParamLimits

0x0e07,	// (0x00031907) smil_status_volume_pane_g2_ParamLimits

0x8b8d,	// (0x0003968d) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x0004009f) smil_status_volume_pane_g_ParamLimits

0x1058,	// (0x00031b58) bg_popup_window_pane_cp07_ParamLimits

0x1066,	// (0x00031b66) blid_firmament_pane

0xd454,	// (0x0003df54) aid_size_cell_gallery_ParamLimits

0xd454,	// (0x0003df54) aid_size_cell_gallery

0xd454,	// (0x0003df54) grid_gallery_pane_ParamLimits

0xd454,	// (0x0003df54) grid_gallery_pane

0xf01a,	// (0x0003fb1a) cell_gallery_pane_ParamLimits

0xf01a,	// (0x0003fb1a) cell_gallery_pane

0xdb27,	// (0x0003e627) bg_cell_gallery_focus_pane_ParamLimits

0xdb27,	// (0x0003e627) bg_cell_gallery_focus_pane

0xdb80,	// (0x0003e680) cell_gallery_pane_g1_ParamLimits

0xdb80,	// (0x0003e680) cell_gallery_pane_g1

0xdb80,	// (0x0003e680) cell_gallery_pane_g2_ParamLimits

0xdb80,	// (0x0003e680) cell_gallery_pane_g2

0xdb80,	// (0x0003e680) cell_gallery_pane_g3_ParamLimits

0xdb80,	// (0x0003e680) cell_gallery_pane_g3

0xdb8e,	// (0x0003e68e) cell_gallery_pane_g4_ParamLimits

0xdb8e,	// (0x0003e68e) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x0004014b) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x0004014b) cell_gallery_pane_g

0x11b8,	// (0x00031cb8) bg_cell_gallery_focus_pane_g1

0x11c0,	// (0x00031cc0) bg_cell_gallery_focus_pane_g2

0x11c8,	// (0x00031cc8) bg_cell_gallery_focus_pane_g3

0x11d0,	// (0x00031cd0) bg_cell_gallery_focus_pane_g4

0x11d8,	// (0x00031cd8) bg_cell_gallery_focus_pane_g5

0x11e0,	// (0x00031ce0) bg_cell_gallery_focus_pane_g6

0x11e8,	// (0x00031ce8) bg_cell_gallery_focus_pane_g7

0x11f0,	// (0x00031cf0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x00040154) bg_cell_gallery_focus_pane_g

0x11f8,	// (0x00031cf8) aid_firma_cardinal

0x120c,	// (0x00031d0c) blid_firmament_pane_t1

0x1223,	// (0x00031d23) blid_firmament_pane_t2

0x123a,	// (0x00031d3a) blid_firmament_pane_t3

0x1251,	// (0x00031d51) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x00040165) blid_firmament_pane_t

0x1268,	// (0x00031d68) blid_sat_info_pane

0xddc6,	// (0x0003e8c6) blid_sat_info_pane_g1

0xddc6,	// (0x0003e8c6) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x0003fedd) blid_sat_info_pane_g

0x1278,	// (0x00031d78) blid_sat_info_pane_t1

0x1286,	// (0x00031d86) smil2_volume_content_pane

0x128f,	// (0x00031d8f) smil2_volume_pane_g1

0xf04a,	// (0x0003fb4a) smil2_volume_content_pane_g1

0x1297,	// (0x00031d97) smil2_volume_content_pane_g2

0x12a0,	// (0x00031da0) smil2_volume_content_pane_g3

0x12a9,	// (0x00031da9) smil2_volume_content_pane_g4

0x12b2,	// (0x00031db2) smil2_volume_content_pane_g5

0x12bb,	// (0x00031dbb) smil2_volume_content_pane_g6

0x12c4,	// (0x00031dc4) smil2_volume_content_pane_g7

0x12cd,	// (0x00031dcd) smil2_volume_content_pane_g8

0x12d6,	// (0x00031dd6) smil2_volume_content_pane_g9

0x12df,	// (0x00031ddf) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x0004016e) smil2_volume_content_pane_g

0x640f,	// (0x00036f0f) cale_week_day_heading_pane_t1_ParamLimits

0x6437,	// (0x00036f37) cale_week_day_heading_pane_t2_ParamLimits

0x6464,	// (0x00036f64) cale_week_day_heading_pane_t3_ParamLimits

0x6491,	// (0x00036f91) cale_week_day_heading_pane_t4_ParamLimits

0x64be,	// (0x00036fbe) cale_week_day_heading_pane_t5_ParamLimits

0x64eb,	// (0x00036feb) cale_week_day_heading_pane_t6_ParamLimits

0x6518,	// (0x00037018) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0003fc8c) cale_week_day_heading_pane_t_ParamLimits

0xdd35,	// (0x0003e835) bg_cale_side_pane_ParamLimits

0x6540,	// (0x00037040) cale_week_time_pane_t1_ParamLimits

0x6564,	// (0x00037064) cale_week_time_pane_t2_ParamLimits

0x6588,	// (0x00037088) cale_week_time_pane_t3_ParamLimits

0x65ac,	// (0x000370ac) cale_week_time_pane_t4_ParamLimits

0x65d0,	// (0x000370d0) cale_week_time_pane_t5_ParamLimits

0x65f6,	// (0x000370f6) cale_week_time_pane_t6_ParamLimits

0x661e,	// (0x0003711e) cale_week_time_pane_t7_ParamLimits

0x664a,	// (0x0003714a) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0003fc9b) cale_week_time_pane_t_ParamLimits

0x667a,	// (0x0003717a) cell_cale_week_pane_g2_ParamLimits

0xdd35,	// (0x0003e835) bg_cale_side_pane_cp01_ParamLimits

0x7775,	// (0x00038275) cale_month_week_pane_t1_ParamLimits

0x778e,	// (0x0003828e) cale_month_week_pane_t2_ParamLimits

0x77a7,	// (0x000382a7) cale_month_week_pane_t3_ParamLimits

0x77c0,	// (0x000382c0) cale_month_week_pane_t4_ParamLimits

0x77d9,	// (0x000382d9) cale_month_week_pane_t5_ParamLimits

0x77f6,	// (0x000382f6) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0003fd69) cale_month_week_pane_t_ParamLimits

0x7947,	// (0x00038447) cell_cale_month_pane_g1_ParamLimits

0xd44a,	// (0x0003df4a) main_cale_event_viewer_pane

0xd44a,	// (0x0003df4a) listscroll_cale_event_viewer_pane

0x12e8,	// (0x00031de8) list_cale_ev_pane

0x12f0,	// (0x00031df0) scroll_pane_cp023

0x8dec,	// (0x000398ec) field_cale_ev_pane_ParamLimits

0x8dec,	// (0x000398ec) field_cale_ev_pane

0x12fc,	// (0x00031dfc) field_cale_ev_content_pane_ParamLimits

0x12fc,	// (0x00031dfc) field_cale_ev_content_pane

0x1308,	// (0x00031e08) field_cale_ev_pane_g1_ParamLimits

0x1308,	// (0x00031e08) field_cale_ev_pane_g1

0x1314,	// (0x00031e14) field_cale_ev_pane_g2_ParamLimits

0x1314,	// (0x00031e14) field_cale_ev_pane_g2

0x132c,	// (0x00031e2c) field_cale_ev_pane_g3_ParamLimits

0x132c,	// (0x00031e2c) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x00040183) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x00040183) field_cale_ev_pane_g

0x1344,	// (0x00031e44) field_cale_ev_pane_t1_ParamLimits

0x1344,	// (0x00031e44) field_cale_ev_pane_t1

0x8e10,	// (0x00039910) field_cale_ev_content_pane_t1_ParamLimits

0x8e10,	// (0x00039910) field_cale_ev_content_pane_t1

0xe832,	// (0x0003f332) bg_button_pane_cp01

0x606d,	// (0x00036b6d) listscroll_cale_week_pane_ParamLimits

0xdcfd,	// (0x0003e7fd) popup_toolbar_window_cp01

0xdd06,	// (0x0003e806) listscroll_cale_week_pane_t1_ParamLimits

0x606d,	// (0x00036b6d) listscroll_cale_day_pane_ParamLimits

0xdcfd,	// (0x0003e7fd) popup_toolbar_window_cp02

0xe12e,	// (0x0003ec2e) listscroll_cale_day_pane_t1_ParamLimits

0x606d,	// (0x00036b6d) main_cale_month_pane_ParamLimits

0x8ae3,	// (0x000395e3) popup_toolbar_window_cp03_ParamLimits

0x8ae3,	// (0x000395e3) popup_toolbar_window_cp03

0x83a9,	// (0x00038ea9) main_image_pane_g2_ParamLimits

0x83a9,	// (0x00038ea9) main_image_pane_g2

0x83b5,	// (0x00038eb5) main_image_pane_g3_ParamLimits

0x83b5,	// (0x00038eb5) main_image_pane_g3

0x0002,

0xf47b,	// (0x0003ff7b) main_image_pane_g_ParamLimits

0xf47b,	// (0x0003ff7b) main_image_pane_g

0xe94c,	// (0x0003f44c) main_image_pane_t1_ParamLimits

0x83c1,	// (0x00038ec1) main_image_pane_t2_ParamLimits

0x83c1,	// (0x00038ec1) main_image_pane_t2

0x83d3,	// (0x00038ed3) main_image_pane_t3_ParamLimits

0x83d3,	// (0x00038ed3) main_image_pane_t3

0x83e5,	// (0x00038ee5) main_image_pane_t4_ParamLimits

0x83e5,	// (0x00038ee5) main_image_pane_t4

0x0003,

0xf482,	// (0x0003ff82) main_image_pane_t_ParamLimits

0xf482,	// (0x0003ff82) main_image_pane_t

0x83f7,	// (0x00038ef7) popup_image_details_window_cp01

0x8401,	// (0x00038f01) popup_toobar_trans_pane_cp01_ParamLimits

0x8401,	// (0x00038f01) popup_toobar_trans_pane_cp01

0x8a25,	// (0x00039525) popup_image_details_window_ParamLimits

0x8a25,	// (0x00039525) popup_image_details_window

0x8a33,	// (0x00039533) popup_image_focus_window

0xd454,	// (0x0003df54) camera2_autofocus_pane_ParamLimits

0xd454,	// (0x0003df54) camera2_autofocus_pane

0xd44a,	// (0x0003df4a) bg_popup_sub_pane_cp06

0x135b,	// (0x00031e5b) popup_image_focus_window_g1

0x1363,	// (0x00031e63) popup_image_focus_window_g2

0x136b,	// (0x00031e6b) popup_image_focus_window_g3

0x1373,	// (0x00031e73) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x0004018a) popup_image_focus_window_g

0x137b,	// (0x00031e7b) popup_image_focus_window_t1

0x1389,	// (0x00031e89) popup_image_focus_window_t2

0x1399,	// (0x00031e99) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x00040193) popup_image_focus_window_t

0xdb80,	// (0x0003e680) camera2_autofocus_pane_g1

0xdb27,	// (0x0003e627) bg_tb_trans_pane_cp01

0x13a7,	// (0x00031ea7) popup_image_details_window_g1

0x13ba,	// (0x00031eba) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x000401a5) popup_image_details_window_g

0x13e3,	// (0x00031ee3) popup_image_details_window_t1

0x13f5,	// (0x00031ef5) popup_image_details_window_t2

0x140e,	// (0x00031f0e) popup_image_details_window_t3

0x1422,	// (0x00031f22) popup_image_details_window_t4

0x143d,	// (0x00031f3d) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x000401ac) popup_image_details_window_t

0xdbde,	// (0x0003e6de) bg_calc_paper_pane_ParamLimits

0xd44a,	// (0x0003df4a) grid_highlight_pane_cp013

0x5e21,	// (0x00036921) list_calc_pane_ParamLimits

0x5e33,	// (0x00036933) scroll_pane_cp024

0xdbf2,	// (0x0003e6f2) bg_calc_display_pane_ParamLimits

0x5e3b,	// (0x0003693b) calc_display_pane_t1_ParamLimits

0x5e50,	// (0x00036950) calc_display_pane_t2_ParamLimits

0x5e65,	// (0x00036965) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0003fc0c) calc_display_pane_t_ParamLimits

0x5f35,	// (0x00036a35) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0003fc29) cell_calc_pane_g

0x5f3e,	// (0x00036a3e) cell_calc_pane_t1

0xdc47,	// (0x0003e747) grid_highlight_pane_cp02_ParamLimits

0xdc5d,	// (0x0003e75d) toolbar_button_pane_cp01_ParamLimits

0xdc5d,	// (0x0003e75d) toolbar_button_pane_cp01

0xe991,	// (0x0003f491) temp_image_control_pane_ParamLimits

0xe991,	// (0x0003f491) temp_image_control_pane

0xdb27,	// (0x0003e627) main_mp3_pane

0x1457,	// (0x00031f57) temp_image_control_pane_g1_ParamLimits

0x1457,	// (0x00031f57) temp_image_control_pane_g1

0x1465,	// (0x00031f65) temp_image_control_pane_g2_ParamLimits

0x1465,	// (0x00031f65) temp_image_control_pane_g2

0x1477,	// (0x00031f77) temp_image_control_pane_g3_ParamLimits

0x1477,	// (0x00031f77) temp_image_control_pane_g3

0x8e2b,	// (0x0003992b) temp_image_control_pane_g4_ParamLimits

0x8e2b,	// (0x0003992b) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x000401b7) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x000401b7) temp_image_control_pane_g

0x1457,	// (0x00031f57) main_mp3_pane_g1

0x8e3c,	// (0x0003993c) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x000401c0) main_mp3_pane_g

0x14ac,	// (0x00031fac) main_mp3_pane_t1

0xdb8e,	// (0x0003e68e) main_camera_pane_g8_ParamLimits

0xdb8e,	// (0x0003e68e) main_camera_pane_g8

0x6826,	// (0x00037326) main_video_pane_g7_ParamLimits

0x6826,	// (0x00037326) main_video_pane_g7

0xdd98,	// (0x0003e898) main_camera2_pane_t7_ParamLimits

0xdd98,	// (0x0003e898) main_camera2_pane_t7

0xdee6,	// (0x0003e9e6) scroll_pane_cp025_ParamLimits

0xdee6,	// (0x0003e9e6) scroll_pane_cp025

0xdefa,	// (0x0003e9fa) scroll_pane_cp026_ParamLimits

0xdefa,	// (0x0003e9fa) scroll_pane_cp026

0xdf09,	// (0x0003ea09) wml_content_pane_ParamLimits

0xd44a,	// (0x0003df4a) main_touch_calib_pane

0x8ee0,	// (0x000399e0) main_touch_calib_pane_g1

0x8eec,	// (0x000399ec) main_touch_calib_pane_g2

0x8ef8,	// (0x000399f8) main_touch_calib_pane_g3

0x8f04,	// (0x00039a04) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x000401de) main_touch_calib_pane_g

0x8f10,	// (0x00039a10) main_touch_calib_pane_t1

0x8f27,	// (0x00039a27) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x000401e7) main_touch_calib_pane_t

0xe625,	// (0x0003f125) mup_progress_pane_cp02

0xe644,	// (0x0003f144) navi_pane_g1

0xe6a6,	// (0x0003f1a6) navi_pane_mp_t3

0xdb27,	// (0x0003e627) main_mp3_pane_ParamLimits

0x8b24,	// (0x00039624) navi_pane_ParamLimits

0x1457,	// (0x00031f57) main_mp3_pane_g1_ParamLimits

0x8e3c,	// (0x0003993c) main_mp3_pane_g2_ParamLimits

0x8e48,	// (0x00039948) main_mp3_pane_g3_ParamLimits

0x8e48,	// (0x00039948) main_mp3_pane_g3

0x8e54,	// (0x00039954) main_mp3_pane_g4_ParamLimits

0x8e54,	// (0x00039954) main_mp3_pane_g4

0xdb80,	// (0x0003e680) main_mp3_pane_g5_ParamLimits

0xdb80,	// (0x0003e680) main_mp3_pane_g5

0x1487,	// (0x00031f87) main_mp3_pane_g6_ParamLimits

0x1487,	// (0x00031f87) main_mp3_pane_g6

0x1494,	// (0x00031f94) main_mp3_pane_g7_ParamLimits

0x1494,	// (0x00031f94) main_mp3_pane_g7

0x14a0,	// (0x00031fa0) main_mp3_pane_g8_ParamLimits

0x14a0,	// (0x00031fa0) main_mp3_pane_g8

0xf6c0,	// (0x000401c0) main_mp3_pane_g_ParamLimits

0x8e60,	// (0x00039960) main_mp3_pane_t2

0x8e70,	// (0x00039970) main_mp3_pane_t3

0x14ba,	// (0x00031fba) main_mp3_pane_t4

0x14c8,	// (0x00031fc8) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x000401d1) main_mp3_pane_t

0x14d6,	// (0x00031fd6) mup_progress_pane_cp01

0x4c59,	// (0x00035759) aid_zoom_text_secondary2

0x12e8,	// (0x00031de8) list_cale_ev2_pane

0x12f0,	// (0x00031df0) scroll_pane_cp023_ParamLimits

0x8f82,	// (0x00039a82) field_cale_ev2_pane_ParamLimits

0x8f82,	// (0x00039a82) field_cale_ev2_pane

0x4d20,	// (0x00035820) field_cale_ev2_pane_g1_ParamLimits

0x4d20,	// (0x00035820) field_cale_ev2_pane_g1

0x4d2c,	// (0x0003582c) field_cale_ev2_pane_g2_ParamLimits

0x4d2c,	// (0x0003582c) field_cale_ev2_pane_g2

0x4d44,	// (0x00035844) field_cale_ev2_pane_g3_ParamLimits

0x4d44,	// (0x00035844) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x000401f2) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x000401f2) field_cale_ev2_pane_g

0x4d68,	// (0x00035868) field_cale_ev2_pane_t1_ParamLimits

0x4d68,	// (0x00035868) field_cale_ev2_pane_t1

0x4d7f,	// (0x0003587f) field_cale_ev2_pane_t2_ParamLimits

0x4d7f,	// (0x0003587f) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x000401fb) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x000401fb) field_cale_ev2_pane_t

0x8288,	// (0x00038d88) main_postcard_pane_g5_ParamLimits

0x8288,	// (0x00038d88) main_postcard_pane_g5

0x8296,	// (0x00038d96) main_postcard_pane_g6_ParamLimits

0x8296,	// (0x00038d96) main_postcard_pane_g6

0xd454,	// (0x0003df54) camera2_autofocus_pane_cp_ParamLimits

0xd454,	// (0x0003df54) camera2_autofocus_pane_cp

0xdb27,	// (0x0003e627) main_mup3_pane

0x8fe0,	// (0x00039ae0) main_mup3_pane_g1_ParamLimits

0x8fe0,	// (0x00039ae0) main_mup3_pane_g1

0x9001,	// (0x00039b01) main_mup3_pane_g2_ParamLimits

0x9001,	// (0x00039b01) main_mup3_pane_g2

0x9075,	// (0x00039b75) main_mup3_pane_g3_ParamLimits

0x9075,	// (0x00039b75) main_mup3_pane_g3

0x90da,	// (0x00039bda) main_mup3_pane_g4_ParamLimits

0x90da,	// (0x00039bda) main_mup3_pane_g4

0x913f,	// (0x00039c3f) main_mup3_pane_g5_ParamLimits

0x913f,	// (0x00039c3f) main_mup3_pane_g5

0x91a4,	// (0x00039ca4) main_mup3_pane_g6_ParamLimits

0x91a4,	// (0x00039ca4) main_mup3_pane_g6

0xdb8e,	// (0x0003e68e) main_mup3_pane_g7_ParamLimits

0xdb8e,	// (0x0003e68e) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x0004020b) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x0004020b) main_mup3_pane_g

0x921e,	// (0x00039d1e) main_mup3_pane_t1_ParamLimits

0x921e,	// (0x00039d1e) main_mup3_pane_t1

0x9289,	// (0x00039d89) main_mup3_pane_t2_ParamLimits

0x9289,	// (0x00039d89) main_mup3_pane_t2

0x9352,	// (0x00039e52) main_mup3_pane_t4_ParamLimits

0x9352,	// (0x00039e52) main_mup3_pane_t4

0x93a6,	// (0x00039ea6) main_mup3_pane_t5_ParamLimits

0x93a6,	// (0x00039ea6) main_mup3_pane_t5

0x945e,	// (0x00039f5e) main_mup3_pane_t6_ParamLimits

0x945e,	// (0x00039f5e) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x0004021c) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x0004021c) main_mup3_pane_t

0x9508,	// (0x0003a008) mup3_progress_pane_ParamLimits

0x9508,	// (0x0003a008) mup3_progress_pane

0x9586,	// (0x0003a086) popup_mup3_control_window_ParamLimits

0x9586,	// (0x0003a086) popup_mup3_control_window

0x14ea,	// (0x00031fea) popup_mup3_text_window

0x95a3,	// (0x0003a0a3) mup3_progress_pane_t1

0x95c1,	// (0x0003a0c1) mup3_progress_pane_t2

0x14f2,	// (0x00031ff2) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x00040229) mup3_progress_pane_t

0x150f,	// (0x0003200f) mup_progress_pane_cp03

0xd44a,	// (0x0003df4a) bg_tb_trans_pane_cp04

0x95df,	// (0x0003a0df) mup3_volume_pane

0x95e7,	// (0x0003a0e7) popup_mup3_control_window_g1

0x26b9,	// (0x000331b9) mup3_volume_pane_g1

0x26c2,	// (0x000331c2) mup3_volume_pane_g2

0x26cb,	// (0x000331cb) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x00040230) mup3_volume_pane_g

0xd44a,	// (0x0003df4a) bg_tb_trans_pane_cp03

0x151f,	// (0x0003201f) popup_mup3_text_window_g1

0x1527,	// (0x00032027) popup_mup3_text_window_t1

0xdc3a,	// (0x0003e73a) list_calc_item_pane_g1_ParamLimits

0x0fc4,	// (0x00031ac4) mup_volume_pane_cp_g1

0x8f40,	// (0x00039a40) main_touch_calib_pane_t3

0x8f56,	// (0x00039a56) main_touch_calib_pane_t4

0x8f6c,	// (0x00039a6c) main_touch_calib_pane_t5

0x5992,	// (0x00036492) aid_cell_size_toolbar2

0x599a,	// (0x0003649a) aid_popup3_width_pane

0x4c51,	// (0x00035751) aid_zoom_text_msg_primary

0x6726,	// (0x00037226) vorec_t7

0xdbfe,	// (0x0003e6fe) bg_calc_paper_pane_g1_ParamLimits

0xdc0a,	// (0x0003e70a) bg_calc_paper_pane_g2_ParamLimits

0xdc16,	// (0x0003e716) bg_calc_paper_pane_g3_ParamLimits

0xdc22,	// (0x0003e722) bg_calc_paper_pane_g4_ParamLimits

0xdc2e,	// (0x0003e72e) bg_calc_paper_pane_g5_ParamLimits

0x5ea6,	// (0x000369a6) bg_calc_paper_pane_g6_ParamLimits

0x5eb7,	// (0x000369b7) bg_calc_paper_pane_g7_ParamLimits

0x5ec8,	// (0x000369c8) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0003fc13) bg_calc_paper_pane_g_ParamLimits

0x5ed9,	// (0x000369d9) calc_bg_paper_pane_g9_ParamLimits

0xd454,	// (0x0003df54) image_qvga_pane_ParamLimits

0xd454,	// (0x0003df54) image_qvga_pane

0xdb05,	// (0x0003e605) bg_popup_sub_pane_cp04_ParamLimits

0xe8c8,	// (0x0003f3c8) popup_mup_playback_window_g1_ParamLimits

0xe8d4,	// (0x0003f3d4) popup_mup_playback_window_t1_ParamLimits

0xe8e9,	// (0x0003f3e9) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x0003ff76) popup_mup_playback_window_t_ParamLimits

0xdb80,	// (0x0003e680) main_mup2_pane_g3_ParamLimits

0xdb80,	// (0x0003e680) main_mup2_pane_g3

0x69ff,	// (0x000374ff) popup_toolbar_window_cp04

0xece4,	// (0x0003f7e4) popup_call2_audio_second_window_g3_ParamLimits

0xece4,	// (0x0003f7e4) popup_call2_audio_second_window_g3

0x041c,	// (0x00030f1c) popup_call2_audio_first_window_g4_ParamLimits

0x041c,	// (0x00030f1c) popup_call2_audio_first_window_g4

0x0a43,	// (0x00031543) popup_call2_audio_in_window_g4_ParamLimits

0x0a43,	// (0x00031543) popup_call2_audio_in_window_g4

0x839c,	// (0x00038e9c) aid_area_sk_bg_cut_ParamLimits

0x839c,	// (0x00038e9c) aid_area_sk_bg_cut

0xe8fe,	// (0x0003f3fe) aid_area_sk_bg_cut_2_ParamLimits

0xe8fe,	// (0x0003f3fe) aid_area_sk_bg_cut_2

0xd44a,	// (0x0003df4a) aid_placing_details_win

0xd44a,	// (0x0003df4a) aid_placing_details_win_2

0xdb80,	// (0x0003e680) camera2_autofocus_pane_g1_ParamLimits

0x5bef,	// (0x000366ef) popup_fixed_preview_cale_window_ParamLimits

0x5bef,	// (0x000366ef) popup_fixed_preview_cale_window

0xe6ed,	// (0x0003f1ed) navi_slider_pane_g3

0xe6f6,	// (0x0003f1f6) navi_slider_pane_g4

0xe6ff,	// (0x0003f1ff) navi_slider_pane_g5

0xe6ed,	// (0x0003f1ed) navi_slider_pane_g6

0x7ec7,	// (0x000389c7) navi_slider_pane_g7

0xe7ff,	// (0x0003f2ff) mup_scale_pane_g3

0xe808,	// (0x0003f308) mup_scale_pane_g4

0xe811,	// (0x0003f311) mup_scale_pane_g5

0x80e4,	// (0x00038be4) mup_scale_pane_g6

0x80ed,	// (0x00038bed) mup_scale_pane_g7

0xddc6,	// (0x0003e8c6) cams2_slider_pane_g3

0xddc6,	// (0x0003e8c6) cams2_slider_pane_g4

0xddc6,	// (0x0003e8c6) cams2_slider_pane_g5

0xddc6,	// (0x0003e8c6) cams2_slider_pane_g6

0xddc6,	// (0x0003e8c6) cams2_slider_pane_g7

0xddc6,	// (0x0003e8c6) camera2_autofocus_pane_cp_g1

0x0d1b,	// (0x0003181b) bg_popup_preview_window_pane_cp02_ParamLimits

0x0d1b,	// (0x0003181b) bg_popup_preview_window_pane_cp02

0x1535,	// (0x00032035) list_fp_cale_pane_ParamLimits

0x1535,	// (0x00032035) list_fp_cale_pane

0x1541,	// (0x00032041) popup_fixed_preview_cale_window_t1_ParamLimits

0x1541,	// (0x00032041) popup_fixed_preview_cale_window_t1

0x95f0,	// (0x0003a0f0) popup_fixed_preview_cale_window_t2_ParamLimits

0x95f0,	// (0x0003a0f0) popup_fixed_preview_cale_window_t2

0x9605,	// (0x0003a105) popup_fixed_preview_cale_window_t3_ParamLimits

0x9605,	// (0x0003a105) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x00040237) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x00040237) popup_fixed_preview_cale_window_t

0x961a,	// (0x0003a11a) list_single_fp_cale_pane_ParamLimits

0x961a,	// (0x0003a11a) list_single_fp_cale_pane

0x155f,	// (0x0003205f) list_single_fp_cale_pane_g1_ParamLimits

0x155f,	// (0x0003205f) list_single_fp_cale_pane_g1

0x156b,	// (0x0003206b) list_single_fp_cale_pane_g2_ParamLimits

0x156b,	// (0x0003206b) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x0004023e) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x0004023e) list_single_fp_cale_pane_g

0x1584,	// (0x00032084) list_single_fp_cale_pane_t1_ParamLimits

0x1584,	// (0x00032084) list_single_fp_cale_pane_t1

0x1596,	// (0x00032096) list_single_fp_cale_pane_t2_ParamLimits

0x1596,	// (0x00032096) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x00040245) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x00040245) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd44a,	// (0x0003df4a) main_dialer_pane

0xd44a,	// (0x0003df4a) aid_cell_size_keypad

0xd44a,	// (0x0003df4a) dialer_ne_pane

0xd44a,	// (0x0003df4a) grid_dialer_command_1_pane

0xd44a,	// (0x0003df4a) grid_dialer_command_2_pane

0xd44a,	// (0x0003df4a) grid_dialer_keypad_pane

0x1058,	// (0x00031b58) bg_popup_call_pane_cp06_ParamLimits

0x1058,	// (0x00031b58) bg_popup_call_pane_cp06

0x1058,	// (0x00031b58) dialer_ne_clear_pane_ParamLimits

0x1058,	// (0x00031b58) dialer_ne_clear_pane

0xddc6,	// (0x0003e8c6) dialer_ne_pane_g1

0xdd98,	// (0x0003e898) dialer_ne_pane_t1_ParamLimits

0xdd98,	// (0x0003e898) dialer_ne_pane_t1

0x17f2,	// (0x000322f2) dialer_ne_pane_t2_ParamLimits

0x17f2,	// (0x000322f2) dialer_ne_pane_t2

0x962a,	// (0x0003a12a) dialer_ne_pane_t3_ParamLimits

0x962a,	// (0x0003a12a) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x0004024a) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x0004024a) dialer_ne_pane_t

0x962a,	// (0x0003a12a) dialer_ne_pane_t3_copy1_ParamLimits

0x962a,	// (0x0003a12a) dialer_ne_pane_t3_copy1

0x15c9,	// (0x000320c9) cell_dialer_keypad_pane_ParamLimits

0x15c9,	// (0x000320c9) cell_dialer_keypad_pane

0xdb27,	// (0x0003e627) cell_dialer_command_1_pane_ParamLimits

0xdb27,	// (0x0003e627) cell_dialer_command_1_pane

0x15e0,	// (0x000320e0) cell_dialer_command_2_pane_ParamLimits

0x15e0,	// (0x000320e0) cell_dialer_command_2_pane

0xdb27,	// (0x0003e627) bg_button_pane_cp02_ParamLimits

0xdb27,	// (0x0003e627) bg_button_pane_cp02

0xdb80,	// (0x0003e680) cell_dialer_keypad_pane_g1_ParamLimits

0xdb80,	// (0x0003e680) cell_dialer_keypad_pane_g1

0xdb27,	// (0x0003e627) bg_button_pane_cp03_ParamLimits

0xdb27,	// (0x0003e627) bg_button_pane_cp03

0xdb80,	// (0x0003e680) cell_dialer_command_1_pane_g1_ParamLimits

0xdb80,	// (0x0003e680) cell_dialer_command_1_pane_g1

0xd44a,	// (0x0003df4a) bg_button_pane_cp04

0xddc6,	// (0x0003e8c6) cell_dialer_command_2_pane_g1

0xd44a,	// (0x0003df4a) bg_button_pane_cp06

0xddc6,	// (0x0003e8c6) dialer_ne_clear_pane_g1

0x7e02,	// (0x00038902) navi_pane_g2

0x7e30,	// (0x00038930) navi_pane_g3

0x0002,

0xf379,	// (0x0003fe79) navi_pane_g

0x7e5b,	// (0x0003895b) navi_pane_mv_g2

0x7e82,	// (0x00038982) navi_pane_mv_g5

0x7e8a,	// (0x0003898a) navi_pane_mv_t1

0xdbf2,	// (0x0003e6f2) main_clock2_pane

0xd454,	// (0x0003df54) main_clock2_list_pane_ParamLimits

0xd454,	// (0x0003df54) main_clock2_list_pane

0x969f,	// (0x0003a19f) main_clock2_pane_t1_ParamLimits

0x969f,	// (0x0003a19f) main_clock2_pane_t1

0x96cd,	// (0x0003a1cd) main_clock2_pane_t2_ParamLimits

0x96cd,	// (0x0003a1cd) main_clock2_pane_t2

0x0004,

0xf756,	// (0x00040256) main_clock2_pane_t_ParamLimits

0xf756,	// (0x00040256) main_clock2_pane_t

0x9732,	// (0x0003a232) popup_clock_analogue_window_cp03_ParamLimits

0x9732,	// (0x0003a232) popup_clock_analogue_window_cp03

0x9750,	// (0x0003a250) popup_clock_digital_window_cp02_ParamLimits

0x9750,	// (0x0003a250) popup_clock_digital_window_cp02

0x97c5,	// (0x0003a2c5) main_clock2_list_single_pane_ParamLimits

0x97c5,	// (0x0003a2c5) main_clock2_list_single_pane

0xdd90,	// (0x0003e890) list_highlight_pane_cp05

0x1621,	// (0x00032121) main_clock2_list_single_pane_t1

0x69ff,	// (0x000374ff) popup_toolbar_window_cp04_ParamLimits

0xdb8e,	// (0x0003e68e) camera2_autofocus_pane_g2_ParamLimits

0xdb8e,	// (0x0003e68e) camera2_autofocus_pane_g2

0xdb8e,	// (0x0003e68e) camera2_autofocus_pane_g3_ParamLimits

0xdb8e,	// (0x0003e68e) camera2_autofocus_pane_g3

0xdb8e,	// (0x0003e68e) camera2_autofocus_pane_g4_ParamLimits

0xdb8e,	// (0x0003e68e) camera2_autofocus_pane_g4

0xdb8e,	// (0x0003e68e) camera2_autofocus_pane_g5_ParamLimits

0xdb8e,	// (0x0003e68e) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x0004019a) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x0004019a) camera2_autofocus_pane_g

0x8f9d,	// (0x00039a9d) camera2_autofocus_pane_cp_g2

0x8fa5,	// (0x00039aa5) camera2_autofocus_pane_cp_g3

0x8fad,	// (0x00039aad) camera2_autofocus_pane_cp_g4

0x8fb5,	// (0x00039ab5) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x00040200) camera2_autofocus_pane_cp_g

0xd44a,	// (0x0003df4a) popup_dialer_spcha_window

0xd44a,	// (0x0003df4a) bg_popup_sub_pane_cp07

0xd44a,	// (0x0003df4a) list_spcha_pane

0x162f,	// (0x0003212f) list_single_spcha_pane_ParamLimits

0x162f,	// (0x0003212f) list_single_spcha_pane

0xd44a,	// (0x0003df4a) list_highlight_pane_cp06

0xe306,	// (0x0003ee06) list_single_spcha_pane_t1

0x07ed,	// (0x000312ed) popup_call2_audio_out_window_g4_ParamLimits

0x07ed,	// (0x000312ed) popup_call2_audio_out_window_g4

0xd44a,	// (0x0003df4a) main_imed2_pane

0x8a3d,	// (0x0003953d) popup_imed_adjust2_window

0x8a50,	// (0x00039550) popup_imed_trans_window_ParamLimits

0x8a50,	// (0x00039550) popup_imed_trans_window

0x10b1,	// (0x00031bb1) popup_blid_sat_info2_window_t1

0x10bf,	// (0x00031bbf) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x0004012f) popup_blid_sat_info2_window_t

0x987c,	// (0x0003a37c) aid_size_cell_colour_35

0x9896,	// (0x0003a396) aid_size_cell_colour_112

0x98ad,	// (0x0003a3ad) aid_size_cell_effect

0xdb27,	// (0x0003e627) bg_tb_trans_pane_cp02

0xf053,	// (0x0003fb53) heading_imed_pane

0x98c7,	// (0x0003a3c7) listscroll_imed_pane

0x1641,	// (0x00032141) heading_imed_pane_g1

0x1649,	// (0x00032149) heading_imed_pane_t1

0x1657,	// (0x00032157) grid_imed_colour_35_pane_ParamLimits

0x1657,	// (0x00032157) grid_imed_colour_35_pane

0x98d3,	// (0x0003a3d3) grid_imed_effect_pane

0x1673,	// (0x00032173) list_imed_aspect_pane

0x98e3,	// (0x0003a3e3) scroll_pane_cp027_ParamLimits

0x98e3,	// (0x0003a3e3) scroll_pane_cp027

0x98ef,	// (0x0003a3ef) cell_imed_effect_pane_ParamLimits

0x98ef,	// (0x0003a3ef) cell_imed_effect_pane

0x167b,	// (0x0003217b) cell_imed_colour_pane_ParamLimits

0x167b,	// (0x0003217b) cell_imed_colour_pane

0x16c5,	// (0x000321c5) cell_imed_colour_pane_g1_ParamLimits

0x16c5,	// (0x000321c5) cell_imed_colour_pane_g1

0x16d6,	// (0x000321d6) hgihlgiht_grid_pane_cp016_ParamLimits

0x16d6,	// (0x000321d6) hgihlgiht_grid_pane_cp016

0x990b,	// (0x0003a40b) cell_imed_effect_pane_g1

0x9913,	// (0x0003a413) grid_highlight_pane_cp017

0x16e7,	// (0x000321e7) list_imed_single_pane_ParamLimits

0x16e7,	// (0x000321e7) list_imed_single_pane

0xd44a,	// (0x0003df4a) list_highlight_pane_cp07

0x16fb,	// (0x000321fb) list_imed_aspect_pane_comp1_t1

0xf01a,	// (0x0003fb1a) bg_tb_trans_pane_cp05

0x171d,	// (0x0003221d) popup_imed_adjust2_window_g1

0x1744,	// (0x00032244) popup_imed_adjust2_window_t1

0x175c,	// (0x0003225c) slider_imed_adjust_pane

0x1770,	// (0x00032270) slider_imed_adjust_pane_g1

0x1780,	// (0x00032280) slider_imed_adjust_pane_g2

0x1790,	// (0x00032290) slider_imed_adjust_pane_g3

0x17a1,	// (0x000322a1) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x00040273) slider_imed_adjust_pane_g

0x991c,	// (0x0003a41c) aid_size_cell_clipart2

0x17b2,	// (0x000322b2) grid_imed_clipart_pane

0x17bc,	// (0x000322bc) scroll_pane_cp031

0x9928,	// (0x0003a428) cell_imed_clipart_pane_ParamLimits

0x9928,	// (0x0003a428) cell_imed_clipart_pane

0x9946,	// (0x0003a446) cell_imed_clipart_pane_g1

0xd44a,	// (0x0003df4a) grid_highlight_pane_cp014

0x9681,	// (0x0003a181) main_clock2_pane_g1_ParamLimits

0x9681,	// (0x0003a181) main_clock2_pane_g1

0x976c,	// (0x0003a26c) aid_call2_pane_cp10

0x977e,	// (0x0003a27e) aid_call_pane_cp10

0xe619,	// (0x0003f119) popup_clock_analogue_window_cp10_g1

0xe619,	// (0x0003f119) popup_clock_analogue_window_cp10_g2

0x9790,	// (0x0003a290) popup_clock_analogue_window_cp10_g3

0x9790,	// (0x0003a290) popup_clock_analogue_window_cp10_g4

0xe619,	// (0x0003f119) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x00040261) popup_clock_analogue_window_cp10_g

0x97a6,	// (0x0003a2a6) popup_clock_analogue_window_cp10_t1

0x97d7,	// (0x0003a2d7) clock_digital_number_pane_cp10_ParamLimits

0x97d7,	// (0x0003a2d7) clock_digital_number_pane_cp10

0x97f1,	// (0x0003a2f1) clock_digital_number_pane_cp11_ParamLimits

0x97f1,	// (0x0003a2f1) clock_digital_number_pane_cp11

0x980b,	// (0x0003a30b) clock_digital_number_pane_cp12_ParamLimits

0x980b,	// (0x0003a30b) clock_digital_number_pane_cp12

0x9825,	// (0x0003a325) clock_digital_number_pane_cp13_ParamLimits

0x9825,	// (0x0003a325) clock_digital_number_pane_cp13

0x9841,	// (0x0003a341) clock_digital_separator_pane_cp10_ParamLimits

0x9841,	// (0x0003a341) clock_digital_separator_pane_cp10

0x985b,	// (0x0003a35b) popup_clock_digital_window_cp02_t1_ParamLimits

0x985b,	// (0x0003a35b) popup_clock_digital_window_cp02_t1

0xdafd,	// (0x0003e5fd) clock_digital_number_pane_cp10_g1

0xdafd,	// (0x0003e5fd) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x0004027c) clock_digital_number_pane_cp10_g

0xdafd,	// (0x0003e5fd) clock_digital_separator_pane_cp10_g1

0xdafd,	// (0x0003e5fd) clock_digital_separator_pane_g2_cp10

0xe6b4,	// (0x0003f1b4) navi_pane_vded_g4

0xe6bd,	// (0x0003f1bd) navi_pane_vded_g5

0xe6c6,	// (0x0003f1c6) navi_pane_vded_t1

0xd44a,	// (0x0003df4a) main_vded_pane

0x994f,	// (0x0003a44f) main_vded_pane_g1

0x995b,	// (0x0003a45b) main_vded_pane_g2

0x9965,	// (0x0003a465) main_vded_pane_g3

0x0002,

0xf781,	// (0x00040281) main_vded_pane_g

0x996f,	// (0x0003a46f) main_vded_pane_t1

0x997d,	// (0x0003a47d) main_vded_pane_t2

0x0001,

0xf788,	// (0x00040288) main_vded_pane_t

0x998b,	// (0x0003a48b) vded_slider_pane

0x9995,	// (0x0003a495) vded_video_pane

0x17c4,	// (0x000322c4) vded_video_pane_g1

0x99a1,	// (0x0003a4a1) vded_video_pane_g2

0xddc6,	// (0x0003e8c6) vded_video_pane_g3

0x0002,

0xf78d,	// (0x0004028d) vded_video_pane_g

0x17ce,	// (0x000322ce) vded_slider_pane_g1

0x0fc4,	// (0x00031ac4) vded_slider_pane_g2

0x17d7,	// (0x000322d7) vded_slider_pane_g3

0x17e0,	// (0x000322e0) vded_slider_pane_g4

0x17e9,	// (0x000322e9) vded_slider_pane_g5

0x0004,

0xf794,	// (0x00040294) vded_slider_pane_g

0x957a,	// (0x0003a07a) mup3_rocker_pane_ParamLimits

0x957a,	// (0x0003a07a) mup3_rocker_pane

0x99aa,	// (0x0003a4aa) mup3_control_keys_pane_g1

0x99b2,	// (0x0003a4b2) mup3_control_keys_pane_g2

0x99ba,	// (0x0003a4ba) mup3_control_keys_pane_g3

0x99c2,	// (0x0003a4c2) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x0004029f) mup3_control_keys_pane_g

0x5c17,	// (0x00036717) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5c17,	// (0x00036717) popup_toolbar2_fixed_window_cp01

0x9596,	// (0x0003a096) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9596,	// (0x0003a096) popup_toolbar2_fixed_window_cp02

0xee56,	// (0x0003f956) popup_call2_audio_second_window_t4_ParamLimits

0xee56,	// (0x0003f956) popup_call2_audio_second_window_t4

0x06b2,	// (0x000311b2) popup_call2_audio_first_window_t6_ParamLimits

0x06b2,	// (0x000311b2) popup_call2_audio_first_window_t6

0x08f0,	// (0x000313f0) popup_call2_audio_out_window_t6_ParamLimits

0x08f0,	// (0x000313f0) popup_call2_audio_out_window_t6

0xd44a,	// (0x0003df4a) main_vitu_pane

0xd454,	// (0x0003df54) aid_size_cell_itu_ParamLimits

0xd454,	// (0x0003df54) aid_size_cell_itu

0xd454,	// (0x0003df54) bg_popup_window_pane_cp08_ParamLimits

0xd454,	// (0x0003df54) bg_popup_window_pane_cp08

0xd454,	// (0x0003df54) field_vitu_entry_pane_ParamLimits

0xd454,	// (0x0003df54) field_vitu_entry_pane

0xd454,	// (0x0003df54) grid_vitu_function_pane_ParamLimits

0xd454,	// (0x0003df54) grid_vitu_function_pane

0xd454,	// (0x0003df54) grid_vitu_itu_pane_ParamLimits

0xd454,	// (0x0003df54) grid_vitu_itu_pane

0xd454,	// (0x0003df54) cell_vitu_itu_pane_ParamLimits

0xd454,	// (0x0003df54) cell_vitu_itu_pane

0xd454,	// (0x0003df54) cell_vitu_function_pane_ParamLimits

0xd454,	// (0x0003df54) cell_vitu_function_pane

0xdb27,	// (0x0003e627) bg_popup_sub_pane_cp08_ParamLimits

0xdb27,	// (0x0003e627) bg_popup_sub_pane_cp08

0xdde0,	// (0x0003e8e0) field_vitu_entry_pane_t1_ParamLimits

0xdde0,	// (0x0003e8e0) field_vitu_entry_pane_t1

0x17f2,	// (0x000322f2) field_vitu_entry_pane_t2_ParamLimits

0x17f2,	// (0x000322f2) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x000402a8) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x000402a8) field_vitu_entry_pane_t

0x1058,	// (0x00031b58) bg_button_pane_cp05_ParamLimits

0x1058,	// (0x00031b58) bg_button_pane_cp05

0x180f,	// (0x0003230f) cell_vitu_itu_pane_g1

0xf036,	// (0x0003fb36) cell_vitu_itu_pane_t1_ParamLimits

0xf036,	// (0x0003fb36) cell_vitu_itu_pane_t1

0xf036,	// (0x0003fb36) cell_vitu_itu_pane_t2_ParamLimits

0xf036,	// (0x0003fb36) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x000402ad) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x000402ad) cell_vitu_itu_pane_t

0xd44a,	// (0x0003df4a) bg_button_pane_cp07

0xddc6,	// (0x0003e8c6) cell_vitu_function_pane_g1

0x5d48,	// (0x00036848) main_calc_pane_g1

0x59ce,	// (0x000364ce) aid_visual_content_pane

0xd44a,	// (0x0003df4a) main_vradio_pane

0xdb8e,	// (0x0003e68e) main_vradio_pane_g1_ParamLimits

0xdb8e,	// (0x0003e68e) main_vradio_pane_g1

0xdb8e,	// (0x0003e68e) main_vradio_pane_g2_ParamLimits

0xdb8e,	// (0x0003e68e) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x000402b4) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x000402b4) main_vradio_pane_g

0xdd98,	// (0x0003e898) main_vradio_pane_t1_ParamLimits

0xdd98,	// (0x0003e898) main_vradio_pane_t1

0xdd98,	// (0x0003e898) main_vradio_pane_t2_ParamLimits

0xdd98,	// (0x0003e898) main_vradio_pane_t2

0xdd98,	// (0x0003e898) main_vradio_pane_t3_ParamLimits

0xdd98,	// (0x0003e898) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x000402b9) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x000402b9) main_vradio_pane_t

0xd454,	// (0x0003df54) vradio_rocker_control_pane_ParamLimits

0xd454,	// (0x0003df54) vradio_rocker_control_pane

0xd454,	// (0x0003df54) vradio_station_info_pane_ParamLimits

0xd454,	// (0x0003df54) vradio_station_info_pane

0xdb27,	// (0x0003e627) vradio_frequency_info_pane_ParamLimits

0xdb27,	// (0x0003e627) vradio_frequency_info_pane

0xddc6,	// (0x0003e8c6) vradio_station_info_pane_g1

0xf036,	// (0x0003fb36) vradio_station_info_pane_t1_ParamLimits

0xf036,	// (0x0003fb36) vradio_station_info_pane_t1

0xdd98,	// (0x0003e898) vradio_station_info_pane_t2_ParamLimits

0xdd98,	// (0x0003e898) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x000402c0) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x000402c0) vradio_station_info_pane_t

0xd44a,	// (0x0003df4a) vradio_tuning_pane

0x99d2,	// (0x0003a4d2) vradio_rocker_control_pane_g1

0x182b,	// (0x0003232b) vradio_rocker_control_pane_g2

0x99da,	// (0x0003a4da) vradio_rocker_control_pane_g3

0x99e2,	// (0x0003a4e2) vradio_rocker_control_pane_g4

0x99ec,	// (0x0003a4ec) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x000402c5) vradio_rocker_control_pane_g

0xddc6,	// (0x0003e8c6) vradio_frequency_info_pane_g1

0xdde0,	// (0x0003e8e0) vradio_frequency_info_pane_t1_ParamLimits

0xdde0,	// (0x0003e8e0) vradio_frequency_info_pane_t1

0x99f4,	// (0x0003a4f4) vradio_tuning_pane_g1

0x9a01,	// (0x0003a501) vradio_tuning_pane_t1

0x5a17,	// (0x00036517) area_side_right_pane_ParamLimits

0x5a17,	// (0x00036517) area_side_right_pane

0x0ce2,	// (0x000317e2) status_small_pane_g1

0x0cea,	// (0x000317ea) status_small_pane_g2

0x0cf3,	// (0x000317f3) status_small_pane_g3

0x0cfc,	// (0x000317fc) status_small_pane_g4

0x0003,

0xf591,	// (0x00040091) status_small_pane_g

0x0d05,	// (0x00031805) status_small_pane_t1

0xd44a,	// (0x0003df4a) main_video3_pane

0x1833,	// (0x00032333) cams_zoom_vslider_pane

0x183b,	// (0x0003233b) image3_wide_pane_ParamLimits

0x183b,	// (0x0003233b) image3_wide_pane

0x1855,	// (0x00032355) image3_wide_small_pane

0x1861,	// (0x00032361) main_video3_pane_g1_ParamLimits

0x1861,	// (0x00032361) main_video3_pane_g1

0x187d,	// (0x0003237d) main_video3_pane_g2_ParamLimits

0x187d,	// (0x0003237d) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x000402d0) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x000402d0) main_video3_pane_g

0x1899,	// (0x00032399) main_video3_pane_t1_ParamLimits

0x1899,	// (0x00032399) main_video3_pane_t1

0x18c4,	// (0x000323c4) main_video3_pane_t2_ParamLimits

0x18c4,	// (0x000323c4) main_video3_pane_t2

0x18f1,	// (0x000323f1) main_video3_pane_t3_ParamLimits

0x18f1,	// (0x000323f1) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x000402d5) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x000402d5) main_video3_pane_t

0x191e,	// (0x0003241e) cams_zoom_vslider_pane_g1

0x1927,	// (0x00032427) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x000402dc) cams_zoom_vslider_pane_g

0x192f,	// (0x0003242f) small_slider_vertical_pane

0xddc6,	// (0x0003e8c6) small_slider_vertical_pane_g1

0xddc6,	// (0x0003e8c6) small_slider_vertical_pane_g2

0x1937,	// (0x00032437) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x000402e1) small_slider_vertical_pane_g

0xd44a,	// (0x0003df4a) main_hwr_training_pane

0x1940,	// (0x00032440) hwr_training_instruct_pane_ParamLimits

0x1940,	// (0x00032440) hwr_training_instruct_pane

0x9a10,	// (0x0003a510) hwr_training_navi_pane_ParamLimits

0x9a10,	// (0x0003a510) hwr_training_navi_pane

0x9a2a,	// (0x0003a52a) hwr_training_write_pane_ParamLimits

0x9a2a,	// (0x0003a52a) hwr_training_write_pane

0xd44a,	// (0x0003df4a) bg_frame_shadow_pane

0x1977,	// (0x00032477) hwr_training_write_pane_g1

0x197f,	// (0x0003247f) hwr_training_write_pane_g2

0x1987,	// (0x00032487) hwr_training_write_pane_g3

0x198f,	// (0x0003248f) hwr_training_write_pane_g4

0x1997,	// (0x00032497) hwr_training_write_pane_g5

0x199f,	// (0x0003249f) hwr_training_write_pane_g6

0x19a7,	// (0x000324a7) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x000402e8) hwr_training_write_pane_g

0x9a62,	// (0x0003a562) hwr_training_navi_pane_g1_ParamLimits

0x9a62,	// (0x0003a562) hwr_training_navi_pane_g1

0x9a74,	// (0x0003a574) hwr_training_navi_pane_g2_ParamLimits

0x9a74,	// (0x0003a574) hwr_training_navi_pane_g2

0x9a86,	// (0x0003a586) hwr_training_navi_pane_g3_ParamLimits

0x9a86,	// (0x0003a586) hwr_training_navi_pane_g3

0x9a96,	// (0x0003a596) hwr_training_navi_pane_g4_ParamLimits

0x9a96,	// (0x0003a596) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x000402f7) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x000402f7) hwr_training_navi_pane_g

0x9ab0,	// (0x0003a5b0) hwr_training_navi_pane_t1

0x9abe,	// (0x0003a5be) list_single_hwr_training_instruct_pane_ParamLimits

0x9abe,	// (0x0003a5be) list_single_hwr_training_instruct_pane

0x19fe,	// (0x000324fe) list_single_hwr_training_instruct_pane_t1

0x11b8,	// (0x00031cb8) bg_frame_shadow_pane_g1

0x1a0d,	// (0x0003250d) bg_frame_shadow_pane_g2

0x1a15,	// (0x00032515) bg_frame_shadow_pane_g3

0x1a1d,	// (0x0003251d) bg_frame_shadow_pane_g4

0x1a25,	// (0x00032525) bg_frame_shadow_pane_g5

0x1a2d,	// (0x0003252d) bg_frame_shadow_pane_g6

0x1a35,	// (0x00032535) bg_frame_shadow_pane_g7

0xdca1,	// (0x0003e7a1) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x00040302) bg_frame_shadow_pane_g

0xd44a,	// (0x0003df4a) main_video_tele_dialer_pane

0x9ad7,	// (0x0003a5d7) aid_size_cell_video_keypad_ParamLimits

0x9ad7,	// (0x0003a5d7) aid_size_cell_video_keypad

0x9ae7,	// (0x0003a5e7) grid_video_dialer_keypad_pane_ParamLimits

0x9ae7,	// (0x0003a5e7) grid_video_dialer_keypad_pane

0x9b19,	// (0x0003a619) video_down_pane_cp_ParamLimits

0x9b19,	// (0x0003a619) video_down_pane_cp

0x9b43,	// (0x0003a643) cell_video_dialer_keypad_pane_ParamLimits

0x9b43,	// (0x0003a643) cell_video_dialer_keypad_pane

0x1a3d,	// (0x0003253d) bg_button_pane_cp08_ParamLimits

0x1a3d,	// (0x0003253d) bg_button_pane_cp08

0x9b5a,	// (0x0003a65a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9b5a,	// (0x0003a65a) cell_video_dialer_keypad_pane_g1

0x956e,	// (0x0003a06e) mup3_rocker2_pane_ParamLimits

0x956e,	// (0x0003a06e) mup3_rocker2_pane

0xddc6,	// (0x0003e8c6) mup3_rocker2_pane_g1

0x8995,	// (0x00039495) main_dialer2_pane

0xd44a,	// (0x0003df4a) main_mp4_pane

0x9bb3,	// (0x0003a6b3) main_mp4_pane_g1_ParamLimits

0x9bb3,	// (0x0003a6b3) main_mp4_pane_g1

0x9bc1,	// (0x0003a6c1) main_mp4_pane_g2_ParamLimits

0x9bc1,	// (0x0003a6c1) main_mp4_pane_g2

0x9bcf,	// (0x0003a6cf) main_mp4_pane_g3_ParamLimits

0x9bcf,	// (0x0003a6cf) main_mp4_pane_g3

0x9c22,	// (0x0003a722) main_mp4_pane_g4_ParamLimits

0x9c22,	// (0x0003a722) main_mp4_pane_g4

0x9c50,	// (0x0003a750) main_mp4_pane_g5_ParamLimits

0x9c50,	// (0x0003a750) main_mp4_pane_g5

0x0007,

0xf822,	// (0x00040322) main_mp4_pane_g_ParamLimits

0xf822,	// (0x00040322) main_mp4_pane_g

0x9cc4,	// (0x0003a7c4) main_mp4_pane_t1_ParamLimits

0x9cc4,	// (0x0003a7c4) main_mp4_pane_t1

0x9d20,	// (0x0003a820) main_mp4_pane_t2_ParamLimits

0x9d20,	// (0x0003a820) main_mp4_pane_t2

0x1bc5,	// (0x000326c5) main_mp4_pane_t3_ParamLimits

0x1bc5,	// (0x000326c5) main_mp4_pane_t3

0x9d72,	// (0x0003a872) main_mp4_pane_t4_ParamLimits

0x9d72,	// (0x0003a872) main_mp4_pane_t4

0x0003,

0xf833,	// (0x00040333) main_mp4_pane_t_ParamLimits

0xf833,	// (0x00040333) main_mp4_pane_t

0x9db2,	// (0x0003a8b2) mp4_progress_pane_ParamLimits

0x9db2,	// (0x0003a8b2) mp4_progress_pane

0x9dfc,	// (0x0003a8fc) mp4_rocker_pane_ParamLimits

0x9dfc,	// (0x0003a8fc) mp4_rocker_pane

0x1c9d,	// (0x0003279d) mp4_progress_pane_t1

0x1cb6,	// (0x000327b6) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x0004033c) mp4_progress_pane_t

0x1ccf,	// (0x000327cf) mup_progress_pane_cp04

0xddc6,	// (0x0003e8c6) mp4_rocker_pane_g1

0x9e1c,	// (0x0003a91c) aid_cell_size_keypad2_ParamLimits

0x9e1c,	// (0x0003a91c) aid_cell_size_keypad2

0x9e2c,	// (0x0003a92c) dialer2_ne_pane_ParamLimits

0x9e2c,	// (0x0003a92c) dialer2_ne_pane

0x9e38,	// (0x0003a938) grid_dialer2_keypad_pane_ParamLimits

0x9e38,	// (0x0003a938) grid_dialer2_keypad_pane

0x278f,	// (0x0003328f) bg_popup_call_pane_cp07_ParamLimits

0x278f,	// (0x0003328f) bg_popup_call_pane_cp07

0x9e46,	// (0x0003a946) dialer2_ne_pane_t1_ParamLimits

0x9e46,	// (0x0003a946) dialer2_ne_pane_t1

0x9e6b,	// (0x0003a96b) cell_dialer2_keypad_pane_ParamLimits

0x9e6b,	// (0x0003a96b) cell_dialer2_keypad_pane

0x1cf4,	// (0x000327f4) bg_button_pane_pane_cp04_ParamLimits

0x1cf4,	// (0x000327f4) bg_button_pane_pane_cp04

0x9e82,	// (0x0003a982) cell_dialer2_keypad_pane_g1_ParamLimits

0x9e82,	// (0x0003a982) cell_dialer2_keypad_pane_g1

0x68d1,	// (0x000373d1) aid_placing_vt_set_content_ParamLimits

0x68d1,	// (0x000373d1) aid_placing_vt_set_content

0x68f9,	// (0x000373f9) aid_placing_vt_set_title_ParamLimits

0x68f9,	// (0x000373f9) aid_placing_vt_set_title

0xd44a,	// (0x0003df4a) main_image3_pane

0x9f1c,	// (0x0003aa1c) area_side_right_pane_cp01_ParamLimits

0x9f1c,	// (0x0003aa1c) area_side_right_pane_cp01

0xdb9c,	// (0x0003e69c) main_image3_pane_g1_ParamLimits

0xdb9c,	// (0x0003e69c) main_image3_pane_g1

0x9f4b,	// (0x0003aa4b) main_image3_pane_g2_ParamLimits

0x9f4b,	// (0x0003aa4b) main_image3_pane_g2

0x9f64,	// (0x0003aa64) main_image3_pane_g3_ParamLimits

0x9f64,	// (0x0003aa64) main_image3_pane_g3

0x9f7d,	// (0x0003aa7d) main_image3_pane_g4_ParamLimits

0x9f7d,	// (0x0003aa7d) main_image3_pane_g4

0x0003,

0xf84b,	// (0x0004034b) main_image3_pane_g_ParamLimits

0xf84b,	// (0x0004034b) main_image3_pane_g

0x9f96,	// (0x0003aa96) main_image3_pane_t1_ParamLimits

0x9f96,	// (0x0003aa96) main_image3_pane_t1

0x9fbb,	// (0x0003aabb) main_image3_pane_t2_ParamLimits

0x9fbb,	// (0x0003aabb) main_image3_pane_t2

0x9fda,	// (0x0003aada) main_image3_pane_t3_ParamLimits

0x9fda,	// (0x0003aada) main_image3_pane_t3

0x0003,

0xf854,	// (0x00040354) main_image3_pane_t_ParamLimits

0xf854,	// (0x00040354) main_image3_pane_t

0xd454,	// (0x0003df54) grid_sctrl_middle_pane_cp01_ParamLimits

0xd454,	// (0x0003df54) grid_sctrl_middle_pane_cp01

0xa03b,	// (0x0003ab3b) cell_sctrl_middle_pane_cp01_ParamLimits

0xa03b,	// (0x0003ab3b) cell_sctrl_middle_pane_cp01

0xa04c,	// (0x0003ab4c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa04c,	// (0x0003ab4c) cell_sctrl_middle_pane_cp01_g1

0xd44a,	// (0x0003df4a) main_call4_pane

0xa059,	// (0x0003ab59) aid_size_button_call4_ParamLimits

0xa059,	// (0x0003ab59) aid_size_button_call4

0xa08f,	// (0x0003ab8f) call4_windows_pane_ParamLimits

0xa08f,	// (0x0003ab8f) call4_windows_pane

0xa0a4,	// (0x0003aba4) grid_call4_button_pane_ParamLimits

0xa0a4,	// (0x0003aba4) grid_call4_button_pane

0xa0d4,	// (0x0003abd4) call4_windows_conf_pane

0xa0ed,	// (0x0003abed) popup_call4_audio_first_window_ParamLimits

0xa0ed,	// (0x0003abed) popup_call4_audio_first_window

0xa13d,	// (0x0003ac3d) popup_call4_audio_second_window_ParamLimits

0xa13d,	// (0x0003ac3d) popup_call4_audio_second_window

0xa156,	// (0x0003ac56) popup_call4_audio_wait_window_ParamLimits

0xa156,	// (0x0003ac56) popup_call4_audio_wait_window

0xa164,	// (0x0003ac64) cell_call4_button_pane_ParamLimits

0xa164,	// (0x0003ac64) cell_call4_button_pane

0xa187,	// (0x0003ac87) bg_button_pane_cp09_ParamLimits

0xa187,	// (0x0003ac87) bg_button_pane_cp09

0xa193,	// (0x0003ac93) cell_call4_button_pane_g1_ParamLimits

0xa193,	// (0x0003ac93) cell_call4_button_pane_g1

0xa1a0,	// (0x0003aca0) cell_call4_button_pane_t1_ParamLimits

0xa1a0,	// (0x0003aca0) cell_call4_button_pane_t1

0x1d6e,	// (0x0003286e) popup_call4_audio_conf_window_ParamLimits

0x1d6e,	// (0x0003286e) popup_call4_audio_conf_window

0x95a3,	// (0x0003a0a3) mup3_progress_pane_t1_ParamLimits

0x95c1,	// (0x0003a0c1) mup3_progress_pane_t2_ParamLimits

0x14f2,	// (0x00031ff2) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x00040229) mup3_progress_pane_t_ParamLimits

0x150f,	// (0x0003200f) mup_progress_pane_cp03_ParamLimits

0x99ca,	// (0x0003a4ca) mup3_control_keys_pane_g4_copy1

0x9de0,	// (0x0003a8e0) mp4_rocker2_pane_ParamLimits

0x9de0,	// (0x0003a8e0) mp4_rocker2_pane

0x1d90,	// (0x00032890) mp4_rocker2_pane_g1

0x1d88,	// (0x00032888) mp4_rocker2_pane_g2

0xa1e4,	// (0x0003ace4) mp4_rocker2_pane_g3

0xa1ec,	// (0x0003acec) mp4_rocker2_pane_g4

0xa1f4,	// (0x0003acf4) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x0004035d) mp4_rocker2_pane_g

0xd44a,	// (0x0003df4a) main_camera4_pane

0xd44a,	// (0x0003df4a) main_video4_pane

0x9af5,	// (0x0003a5f5) main_video_tele_dialer_pane_t1_ParamLimits

0x9af5,	// (0x0003a5f5) main_video_tele_dialer_pane_t1

0x9b07,	// (0x0003a607) main_video_tele_dialer_pane_t2_ParamLimits

0x9b07,	// (0x0003a607) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x00040313) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x00040313) main_video_tele_dialer_pane_t

0xa214,	// (0x0003ad14) cam4_autofocus_pane_ParamLimits

0xa214,	// (0x0003ad14) cam4_autofocus_pane

0xa22c,	// (0x0003ad2c) cam4_image_uncrop_pane_ParamLimits

0xa22c,	// (0x0003ad2c) cam4_image_uncrop_pane

0xa245,	// (0x0003ad45) cam4_indicators_pane_ParamLimits

0xa245,	// (0x0003ad45) cam4_indicators_pane

0xa261,	// (0x0003ad61) main_camera4_pane_g1_ParamLimits

0xa261,	// (0x0003ad61) main_camera4_pane_g1

0xa26d,	// (0x0003ad6d) main_camera4_pane_g2_ParamLimits

0xa26d,	// (0x0003ad6d) main_camera4_pane_g2

0xa26d,	// (0x0003ad6d) main_camera4_pane_g3_ParamLimits

0xa26d,	// (0x0003ad6d) main_camera4_pane_g3

0xa279,	// (0x0003ad79) main_camera4_pane_g4_ParamLimits

0xa279,	// (0x0003ad79) main_camera4_pane_g4

0xa285,	// (0x0003ad85) main_camera4_pane_g5_ParamLimits

0xa285,	// (0x0003ad85) main_camera4_pane_g5

0x0005,

0xf868,	// (0x00040368) main_camera4_pane_g_ParamLimits

0xf868,	// (0x00040368) main_camera4_pane_g

0xa29f,	// (0x0003ad9f) main_camera4_pane_t1_ParamLimits

0xa29f,	// (0x0003ad9f) main_camera4_pane_t1

0xdb80,	// (0x0003e680) bg_tb_trans_pane_cp06

0xa2f1,	// (0x0003adf1) cam4_indicators_pane_g1

0xa302,	// (0x0003ae02) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x00040383) cam4_indicators_pane_g

0xa31a,	// (0x0003ae1a) cam4_indicators_pane_t1

0xa344,	// (0x0003ae44) main_video4_pane_g1_ParamLimits

0xa344,	// (0x0003ae44) main_video4_pane_g1

0xa350,	// (0x0003ae50) main_video4_pane_g2_ParamLimits

0xa350,	// (0x0003ae50) main_video4_pane_g2

0xa35c,	// (0x0003ae5c) main_video4_pane_g3_ParamLimits

0xa35c,	// (0x0003ae5c) main_video4_pane_g3

0xa368,	// (0x0003ae68) main_video4_pane_g4_ParamLimits

0xa368,	// (0x0003ae68) main_video4_pane_g4

0x0004,

0xf88a,	// (0x0004038a) main_video4_pane_g_ParamLimits

0xf88a,	// (0x0004038a) main_video4_pane_g

0xa38a,	// (0x0003ae8a) vid4_indicators_pane_ParamLimits

0xa38a,	// (0x0003ae8a) vid4_indicators_pane

0xa3a9,	// (0x0003aea9) video4_image_uncrop_cif_pane_ParamLimits

0xa3a9,	// (0x0003aea9) video4_image_uncrop_cif_pane

0xa3b8,	// (0x0003aeb8) video4_image_uncrop_nhd_pane_ParamLimits

0xa3b8,	// (0x0003aeb8) video4_image_uncrop_nhd_pane

0xa22c,	// (0x0003ad2c) video4_image_uncrop_vga_pane_ParamLimits

0xa22c,	// (0x0003ad2c) video4_image_uncrop_vga_pane

0xdb27,	// (0x0003e627) bg_tb_trans_pane_cp07

0xa3d1,	// (0x0003aed1) vid4_indicators_pane_g1

0xa3e7,	// (0x0003aee7) vid4_indicators_pane_g2

0xa3fb,	// (0x0003aefb) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x00040395) vid4_indicators_pane_g

0xa42c,	// (0x0003af2c) vid4_indicators_pane_t1

0xa443,	// (0x0003af43) cam4_autofocus_pane_g1

0xa44b,	// (0x0003af4b) cam4_autofocus_pane_g2

0xa453,	// (0x0003af53) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x000403a0) cam4_autofocus_pane_g

0xa45b,	// (0x0003af5b) cam4_autofocus_pane_g3_copy1

0x9b27,	// (0x0003a627) video_down_pane_cp_t1

0x9b35,	// (0x0003a635) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x00040318) video_down_pane_cp_t

0xd454,	// (0x0003df54) popup_vitu2_window_ParamLimits

0xd454,	// (0x0003df54) popup_vitu2_window

0xa463,	// (0x0003af63) aid_size_cell2_itu2_ParamLimits

0xa463,	// (0x0003af63) aid_size_cell2_itu2

0xa47f,	// (0x0003af7f) aid_size_cell_itu2_ParamLimits

0xa47f,	// (0x0003af7f) aid_size_cell_itu2

0x278f,	// (0x0003328f) bg_popup_window_pane_cp09_ParamLimits

0x278f,	// (0x0003328f) bg_popup_window_pane_cp09

0xa4b9,	// (0x0003afb9) field_vitu2_entry_pane_ParamLimits

0xa4b9,	// (0x0003afb9) field_vitu2_entry_pane

0xa4d7,	// (0x0003afd7) grid_vitu2_function_pane_ParamLimits

0xa4d7,	// (0x0003afd7) grid_vitu2_function_pane

0xa517,	// (0x0003b017) grid_vitu2_itu_pane_ParamLimits

0xa517,	// (0x0003b017) grid_vitu2_itu_pane

0xa579,	// (0x0003b079) cell_vitu2_itu_pane_ParamLimits

0xa579,	// (0x0003b079) cell_vitu2_itu_pane

0xa594,	// (0x0003b094) cell_vitu2_function_pane_ParamLimits

0xa594,	// (0x0003b094) cell_vitu2_function_pane

0x1ec1,	// (0x000329c1) bg_popup_call_pane_cp08_ParamLimits

0x1ec1,	// (0x000329c1) bg_popup_call_pane_cp08

0x1ed8,	// (0x000329d8) field_vitu2_entry_pane_g1

0x1ee4,	// (0x000329e4) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x000403a7) field_vitu2_entry_pane_g

0x4d94,	// (0x00035894) field_vitu2_entry_pane_t1_ParamLimits

0x4d94,	// (0x00035894) field_vitu2_entry_pane_t1

0x4dc4,	// (0x000358c4) field_vitu2_entry_pane_t2_ParamLimits

0x4dc4,	// (0x000358c4) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x000403ae) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x000403ae) field_vitu2_entry_pane_t

0x8ce0,	// (0x000397e0) bg_button_pane_cp010_ParamLimits

0x8ce0,	// (0x000397e0) bg_button_pane_cp010

0xa5d8,	// (0x0003b0d8) cell_vitu2_itu_pane_g1

0xa5fe,	// (0x0003b0fe) cell_vitu2_itu_pane_t1_ParamLimits

0xa5fe,	// (0x0003b0fe) cell_vitu2_itu_pane_t1

0x4de1,	// (0x000358e1) cell_vitu2_itu_pane_t2_ParamLimits

0x4de1,	// (0x000358e1) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x000403b8) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x000403b8) cell_vitu2_itu_pane_t

0xdb27,	// (0x0003e627) bg_button_pane_cp011

0xa64a,	// (0x0003b14a) cell_vitu2_function_pane_g1

0xd44a,	// (0x0003df4a) main_myfav_hc_pane

0xa01c,	// (0x0003ab1c) popup_image3_note_pane_ParamLimits

0xa01c,	// (0x0003ab1c) popup_image3_note_pane

0xa02a,	// (0x0003ab2a) popup_image3_tool_bar_pane_ParamLimits

0xa02a,	// (0x0003ab2a) popup_image3_tool_bar_pane

0x4e57,	// (0x00035957) cell_vitu2_itu_pane_t3_ParamLimits

0x4e57,	// (0x00035957) cell_vitu2_itu_pane_t3

0xd44a,	// (0x0003df4a) bg_popup_trans_pane

0x1f44,	// (0x00032a44) grid_image3_tool_bar_pane

0x1f4e,	// (0x00032a4e) bg_popup_trans_pane_g1

0xdfef,	// (0x0003eaef) bg_popup_trans_pane_g2

0x1f56,	// (0x00032a56) bg_popup_trans_pane_g3

0x1f5e,	// (0x00032a5e) bg_popup_trans_pane_g4

0x1f66,	// (0x00032a66) bg_popup_trans_pane_g5

0x1f6e,	// (0x00032a6e) bg_popup_trans_pane_g6

0x1f76,	// (0x00032a76) bg_popup_trans_pane_g7

0x1f7e,	// (0x00032a7e) bg_popup_trans_pane_g8

0xdfcf,	// (0x0003eacf) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x000403bf) bg_popup_trans_pane_g

0x1f86,	// (0x00032a86) cell_image3_tool_bar_pane_ParamLimits

0x1f86,	// (0x00032a86) cell_image3_tool_bar_pane

0xddc6,	// (0x0003e8c6) cell_image3_tool_bar_pane_g1

0xd44a,	// (0x0003df4a) bg_popup_trans_pane_cp1

0x1f9c,	// (0x00032a9c) popup_image3_note_pane_t1

0x1faa,	// (0x00032aaa) popup_image3_note_pane_t2

0x1fb8,	// (0x00032ab8) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x000403d2) popup_image3_note_pane_t

0x1fc8,	// (0x00032ac8) popup_image3_note_pane_t3_copy1

0xa65e,	// (0x0003b15e) bg_myfav_hc_instruction_pane_ParamLimits

0xa65e,	// (0x0003b15e) bg_myfav_hc_instruction_pane

0xa676,	// (0x0003b176) cell_myfav_contact_pane_ParamLimits

0xa676,	// (0x0003b176) cell_myfav_contact_pane

0xa690,	// (0x0003b190) cell_myfav_contact_pane_cp1_ParamLimits

0xa690,	// (0x0003b190) cell_myfav_contact_pane_cp1

0xa6a8,	// (0x0003b1a8) cell_myfav_contact_pane_cp2_ParamLimits

0xa6a8,	// (0x0003b1a8) cell_myfav_contact_pane_cp2

0xa6c0,	// (0x0003b1c0) cell_myfav_contact_pane_cp3_ParamLimits

0xa6c0,	// (0x0003b1c0) cell_myfav_contact_pane_cp3

0xa6d7,	// (0x0003b1d7) cell_myfav_contact_pane_cp4_ParamLimits

0xa6d7,	// (0x0003b1d7) cell_myfav_contact_pane_cp4

0xa6ed,	// (0x0003b1ed) cell_myfav_contact_pane_cp5_ParamLimits

0xa6ed,	// (0x0003b1ed) cell_myfav_contact_pane_cp5

0xa701,	// (0x0003b201) cell_myfav_contact_pane_cp6_ParamLimits

0xa701,	// (0x0003b201) cell_myfav_contact_pane_cp6

0xa715,	// (0x0003b215) cell_myfav_contact_pane_cp7_ParamLimits

0xa715,	// (0x0003b215) cell_myfav_contact_pane_cp7

0x1fd6,	// (0x00032ad6) listscroll_gen_pane_cp05

0xa72d,	// (0x0003b22d) main_myfav_hc_pane_g1_ParamLimits

0xa72d,	// (0x0003b22d) main_myfav_hc_pane_g1

0xa747,	// (0x0003b247) main_myfav_hc_pane_g2_ParamLimits

0xa747,	// (0x0003b247) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x000403d9) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x000403d9) main_myfav_hc_pane_g

0xa779,	// (0x0003b279) main_myfav_hc_pane_t1_ParamLimits

0xa779,	// (0x0003b279) main_myfav_hc_pane_t1

0x1fdf,	// (0x00032adf) main_myfav_hc_pane_t2_ParamLimits

0x1fdf,	// (0x00032adf) main_myfav_hc_pane_t2

0x1ff1,	// (0x00032af1) main_myfav_hc_pane_t3_ParamLimits

0x1ff1,	// (0x00032af1) main_myfav_hc_pane_t3

0xa790,	// (0x0003b290) main_myfav_hc_pane_t4_ParamLimits

0xa790,	// (0x0003b290) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x000403e0) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x000403e0) main_myfav_hc_pane_t

0xddc6,	// (0x0003e8c6) bg_myfav_hc_instruction_pane_g1

0x2003,	// (0x00032b03) cell_myfav_contact_pane_g1_ParamLimits

0x2003,	// (0x00032b03) cell_myfav_contact_pane_g1

0x2003,	// (0x00032b03) cell_myfav_contact_pane_g2_ParamLimits

0x2003,	// (0x00032b03) cell_myfav_contact_pane_g2

0x200f,	// (0x00032b0f) cell_myfav_contact_pane_g3_ParamLimits

0x200f,	// (0x00032b0f) cell_myfav_contact_pane_g3

0xdb8e,	// (0x0003e68e) cell_myfav_contact_pane_g4_ParamLimits

0xdb8e,	// (0x0003e68e) cell_myfav_contact_pane_g4

0x201c,	// (0x00032b1c) cell_myfav_contact_pane_g5_ParamLimits

0x201c,	// (0x00032b1c) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x000403eb) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x000403eb) cell_myfav_contact_pane_g

0xa761,	// (0x0003b261) main_myfav_hc_pane_g3_ParamLimits

0xa761,	// (0x0003b261) main_myfav_hc_pane_g3

0x5b51,	// (0x00036651) popup_adpt_find_window

0xa7ba,	// (0x0003b2ba) afind_page_pane_ParamLimits

0xa7ba,	// (0x0003b2ba) afind_page_pane

0xa7c7,	// (0x0003b2c7) aid_size_cell_afind_ParamLimits

0xa7c7,	// (0x0003b2c7) aid_size_cell_afind

0xa7e1,	// (0x0003b2e1) bg_popup_sub_pane_cp09_ParamLimits

0xa7e1,	// (0x0003b2e1) bg_popup_sub_pane_cp09

0xa7ee,	// (0x0003b2ee) find_pane_cp01_ParamLimits

0xa7ee,	// (0x0003b2ee) find_pane_cp01

0x2028,	// (0x00032b28) grid_afind_control_pane_ParamLimits

0x2028,	// (0x00032b28) grid_afind_control_pane

0xa7fb,	// (0x0003b2fb) grid_afind_pane_ParamLimits

0xa7fb,	// (0x0003b2fb) grid_afind_pane

0xa817,	// (0x0003b317) cell_afind_pane_ParamLimits

0xa817,	// (0x0003b317) cell_afind_pane

0xddc6,	// (0x0003e8c6) afind_page_pane_g1

0xa863,	// (0x0003b363) afind_page_pane_g2

0xa86c,	// (0x0003b36c) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x000403f6) afind_page_pane_g

0xa875,	// (0x0003b375) afind_page_pane_t1

0x203c,	// (0x00032b3c) cell_afind_grid_control_pane_ParamLimits

0x203c,	// (0x00032b3c) cell_afind_grid_control_pane

0x1cf4,	// (0x000327f4) bg_button_pane_cp69_ParamLimits

0x1cf4,	// (0x000327f4) bg_button_pane_cp69

0xa895,	// (0x0003b395) cell_afind_pane_g1_ParamLimits

0xa895,	// (0x0003b395) cell_afind_pane_g1

0xa8a2,	// (0x0003b3a2) cell_afind_pane_t1_ParamLimits

0xa8a2,	// (0x0003b3a2) cell_afind_pane_t1

0xddd0,	// (0x0003e8d0) bg_button_pane_cp72

0x204b,	// (0x00032b4b) cell_afind_grid_control_pane_g1

0x84c9,	// (0x00038fc9) aid_image_placing_area_ParamLimits

0x84c9,	// (0x00038fc9) aid_image_placing_area

0xdb80,	// (0x0003e680) field_vitu_entry_pane_g1_ParamLimits

0xdb80,	// (0x0003e680) field_vitu_entry_pane_g1

0xdb80,	// (0x0003e680) field_vitu_entry_pane_g2_ParamLimits

0xdb80,	// (0x0003e680) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0003fd01) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0003fd01) field_vitu_entry_pane_g

0x180f,	// (0x0003230f) cell_vitu_itu_pane_g1_ParamLimits

0x17f2,	// (0x000322f2) cell_vitu_itu_pane_t3_ParamLimits

0x17f2,	// (0x000322f2) cell_vitu_itu_pane_t3

0x1c9d,	// (0x0003279d) mp4_progress_pane_t1_ParamLimits

0x1cb6,	// (0x000327b6) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x0004033c) mp4_progress_pane_t_ParamLimits

0x1ccf,	// (0x000327cf) mup_progress_pane_cp04_ParamLimits

0xa7a4,	// (0x0003b2a4) main_myfav_hc_pane_t5_ParamLimits

0xa7a4,	// (0x0003b2a4) main_myfav_hc_pane_t5

0x59da,	// (0x000364da) aid_zoom_text_primary

0x5b51,	// (0x00036651) popup_adpt_find_window_ParamLimits

0xdb27,	// (0x0003e627) main_cam_set_pane

0xa253,	// (0x0003ad53) cam4_zoom_pane_ParamLimits

0xa253,	// (0x0003ad53) cam4_zoom_pane

0xa8b4,	// (0x0003b3b4) main_cam_set_pane_g1_ParamLimits

0xa8b4,	// (0x0003b3b4) main_cam_set_pane_g1

0xa8c2,	// (0x0003b3c2) main_cam_set_pane_g2_ParamLimits

0xa8c2,	// (0x0003b3c2) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x000403fd) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x000403fd) main_cam_set_pane_g

0xa8ce,	// (0x0003b3ce) main_cam_set_pane_t1_ParamLimits

0xa8ce,	// (0x0003b3ce) main_cam_set_pane_t1

0xa8ea,	// (0x0003b3ea) main_cset_listscroll_pane_ParamLimits

0xa8ea,	// (0x0003b3ea) main_cset_listscroll_pane

0xa91e,	// (0x0003b41e) main_cset_slider_pane_ParamLimits

0xa91e,	// (0x0003b41e) main_cset_slider_pane

0x205c,	// (0x00032b5c) main_cset_list_pane_ParamLimits

0x205c,	// (0x00032b5c) main_cset_list_pane

0x206c,	// (0x00032b6c) scroll_pane_cp028

0xa93f,	// (0x0003b43f) aid_area_touch_slider

0xa95b,	// (0x0003b45b) cset_slider_pane

0xa97e,	// (0x0003b47e) main_cset_slider_pane_g1

0xa993,	// (0x0003b493) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x00040402) main_cset_slider_pane_g

0x20a5,	// (0x00032ba5) main_cset_slider_pane_t1

0xaa4f,	// (0x0003b54f) main_cset_slider_pane_t2

0xaa69,	// (0x0003b569) main_cset_slider_pane_t3

0xaa83,	// (0x0003b583) main_cset_slider_pane_t4

0xaa9d,	// (0x0003b59d) main_cset_slider_pane_t5

0xaab7,	// (0x0003b5b7) main_cset_slider_pane_t6

0xaacc,	// (0x0003b5cc) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x00040427) main_cset_slider_pane_t

0xabd0,	// (0x0003b6d0) cset_list_set_pane_ParamLimits

0xabd0,	// (0x0003b6d0) cset_list_set_pane

0x213f,	// (0x00032c3f) aid_position_infowindow_above

0x2147,	// (0x00032c47) aid_position_infowindow_below

0x4ea9,	// (0x000359a9) cset_list_set_pane_g1_ParamLimits

0x4ea9,	// (0x000359a9) cset_list_set_pane_g1

0x4eb5,	// (0x000359b5) cset_list_set_pane_g3_ParamLimits

0x4eb5,	// (0x000359b5) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x00040446) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x00040446) cset_list_set_pane_g

0x4ec4,	// (0x000359c4) cset_list_set_pane_t1_ParamLimits

0x4ec4,	// (0x000359c4) cset_list_set_pane_t1

0xdb27,	// (0x0003e627) list_highlight_pane_cp021_ParamLimits

0xdb27,	// (0x0003e627) list_highlight_pane_cp021

0xe7ff,	// (0x0003f2ff) cset_slider_pane_g1

0xe811,	// (0x0003f311) cset_slider_pane_g2

0xe808,	// (0x0003f308) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x0004044b) cset_slider_pane_g

0x302b,	// (0x00033b2b) aid_area_touch_cam4_zoom

0xabe1,	// (0x0003b6e1) cam4_zoom_cont_pane

0xabe9,	// (0x0003b6e9) cam4_zoom_pane_g1

0xabf1,	// (0x0003b6f1) cam4_zoom_pane_g2

0xabf9,	// (0x0003b6f9) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x00040452) cam4_zoom_pane_g

0xac01,	// (0x0003b701) cam4_zoom_cont_pane_g1

0xac0a,	// (0x0003b70a) cam4_zoom_cont_pane_g2

0xac13,	// (0x0003b713) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x00040459) cam4_zoom_cont_pane_g

0xa073,	// (0x0003ab73) call4_image_pane_ParamLimits

0xa073,	// (0x0003ab73) call4_image_pane

0xa0d4,	// (0x0003abd4) call4_windows_conf_pane_ParamLimits

0xa11b,	// (0x0003ac1b) popup_call4_audio_in_window_ParamLimits

0xa11b,	// (0x0003ac1b) popup_call4_audio_in_window

0xd44a,	// (0x0003df4a) bg_popup_call2_act_pane_cp02

0x1d66,	// (0x00032866) call4_list_conf_pane

0xddc6,	// (0x0003e8c6) call4_image_pane_g1

0xddc6,	// (0x0003e8c6) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x0003fedd) call4_image_pane_g

0x216a,	// (0x00032c6a) list_single_graphic_popup_conf4_pane_ParamLimits

0x216a,	// (0x00032c6a) list_single_graphic_popup_conf4_pane

0xd44a,	// (0x0003df4a) list_highlight_pane_cp022

0x217f,	// (0x00032c7f) list_single_graphic_popup_conf4_pane_g1

0xe501,	// (0x0003f001) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x00040460) list_single_graphic_popup_conf4_pane_g

0x2187,	// (0x00032c87) list_single_graphic_popup_conf4_pane_t1

0x6a53,	// (0x00037553) popup_vtel_slider_window_ParamLimits

0x6a53,	// (0x00037553) popup_vtel_slider_window

0x1ce2,	// (0x000327e2) dialer2_ne_pane_t2_ParamLimits

0x1ce2,	// (0x000327e2) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x00040341) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x00040341) dialer2_ne_pane_t

0xdb27,	// (0x0003e627) bg_popup_sub_pane_cp010_ParamLimits

0xdb27,	// (0x0003e627) bg_popup_sub_pane_cp010

0xac1c,	// (0x0003b71c) popup_vtel_slider_window_g1_ParamLimits

0xac1c,	// (0x0003b71c) popup_vtel_slider_window_g1

0xac28,	// (0x0003b728) popup_vtel_slider_window_g2_ParamLimits

0xac28,	// (0x0003b728) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x00040465) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x00040465) popup_vtel_slider_window_g

0xac70,	// (0x0003b770) vtel_slider_pane_ParamLimits

0xac70,	// (0x0003b770) vtel_slider_pane

0xac7f,	// (0x0003b77f) vtel_slider_pane_g1_ParamLimits

0xac7f,	// (0x0003b77f) vtel_slider_pane_g1

0xac8c,	// (0x0003b78c) vtel_slider_pane_g2_ParamLimits

0xac8c,	// (0x0003b78c) vtel_slider_pane_g2

0xac99,	// (0x0003b799) vtel_slider_pane_g3_ParamLimits

0xac99,	// (0x0003b799) vtel_slider_pane_g3

0xac7f,	// (0x0003b77f) vtel_slider_pane_g4_ParamLimits

0xac7f,	// (0x0003b77f) vtel_slider_pane_g4

0xaca6,	// (0x0003b7a6) vtel_slider_pane_g5_ParamLimits

0xaca6,	// (0x0003b7a6) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x0004046e) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x0004046e) vtel_slider_pane_g

0xdb27,	// (0x0003e627) main_gallery2_pane

0xa49b,	// (0x0003af9b) aid_size_row_itut2_dropdow_list_ParamLimits

0xa49b,	// (0x0003af9b) aid_size_row_itut2_dropdow_list

0xa4f7,	// (0x0003aff7) grid_vitu2_function_top_pane_ParamLimits

0xa4f7,	// (0x0003aff7) grid_vitu2_function_top_pane

0xa547,	// (0x0003b047) popup_vitu2_dropdown_list_window_ParamLimits

0xa547,	// (0x0003b047) popup_vitu2_dropdown_list_window

0xa565,	// (0x0003b065) popup_vitu2_match_list_window

0xacb3,	// (0x0003b7b3) cell_vitu2_function_top_pane_ParamLimits

0xacb3,	// (0x0003b7b3) cell_vitu2_function_top_pane

0xaccd,	// (0x0003b7cd) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaccd,	// (0x0003b7cd) cell_vitu2_function_top_pane_cp01

0xace9,	// (0x0003b7e9) cell_vitu2_function_top_wide_pane_ParamLimits

0xace9,	// (0x0003b7e9) cell_vitu2_function_top_wide_pane

0xdb27,	// (0x0003e627) bg_button_pane_cp012

0xad07,	// (0x0003b807) cell_vitu2_function_top_pane_g1

0xad1b,	// (0x0003b81b) bg_button_pane_cp013_ParamLimits

0xad1b,	// (0x0003b81b) bg_button_pane_cp013

0xad37,	// (0x0003b837) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xad37,	// (0x0003b837) cell_vitu2_function_top_wide_pane_g1

0xd454,	// (0x0003df54) bg_popup_sub_pane_cp20

0xad4f,	// (0x0003b84f) list_vitu2_match_list_pane

0x1f4e,	// (0x00032a4e) bg_popup_sub_pane_cp20_g1

0x1f56,	// (0x00032a56) bg_popup_sub_pane_cp20_g2

0xdfef,	// (0x0003eaef) bg_popup_sub_pane_cp20_g3

0x1f5e,	// (0x00032a5e) bg_popup_sub_pane_cp20_g4

0xdfcf,	// (0x0003eacf) bg_popup_sub_pane_cp20_g5

0x21b9,	// (0x00032cb9) bg_popup_sub_pane_cp20_g6

0x1f6e,	// (0x00032a6e) bg_popup_sub_pane_cp20_g7

0x1f76,	// (0x00032a76) bg_popup_sub_pane_cp20_g8

0x1f7e,	// (0x00032a7e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x00040479) bg_popup_sub_pane_cp20_g

0xad67,	// (0x0003b867) list_vitu2_match_list_item_pane_ParamLimits

0xad67,	// (0x0003b867) list_vitu2_match_list_item_pane

0xad79,	// (0x0003b879) list_vitu2_match_list_item_pane_t1

0xd44a,	// (0x0003df4a) bg_popup_sub_pane_cp21

0xdd90,	// (0x0003e890) grid_vitu2_dropdown_list_pane

0xad87,	// (0x0003b887) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xad87,	// (0x0003b887) cell_vitu2_dropdown_list_char_pane

0xadac,	// (0x0003b8ac) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xadac,	// (0x0003b8ac) cell_vitu2_dropdown_list_ctrl_pane

0x21f3,	// (0x00032cf3) cell_vitu2_dropdown_list_char_pane_g1

0x21ea,	// (0x00032cea) cell_vitu2_dropdown_list_char_pane_g2

0x21e1,	// (0x00032ce1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x0004048c) cell_vitu2_dropdown_list_char_pane_g

0xadd8,	// (0x0003b8d8) cell_vitu2_dropdown_list_char_pane_t1

0xade6,	// (0x0003b8e6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xade6,	// (0x0003b8e6) cell_vitu2_dropdown_list_ctrl_pane_g1

0xadf6,	// (0x0003b8f6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xadf6,	// (0x0003b8f6) cell_vitu2_dropdown_list_ctrl_pane_g2

0xae07,	// (0x0003b907) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xae07,	// (0x0003b907) cell_vitu2_dropdown_list_ctrl_pane_g3

0xae17,	// (0x0003b917) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xae17,	// (0x0003b917) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdb80,	// (0x0003e680) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdb80,	// (0x0003e680) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x00040493) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x00040493) cell_vitu2_dropdown_list_ctrl_pane_g

0xae30,	// (0x0003b930) aid_size_cell_gallery2_ParamLimits

0xae30,	// (0x0003b930) aid_size_cell_gallery2

0xae4a,	// (0x0003b94a) grid_gallery2_pane_ParamLimits

0xae4a,	// (0x0003b94a) grid_gallery2_pane

0xae61,	// (0x0003b961) scroll_pane_cp029_ParamLimits

0xae61,	// (0x0003b961) scroll_pane_cp029

0xae71,	// (0x0003b971) cell_gallery2_pane_ParamLimits

0xae71,	// (0x0003b971) cell_gallery2_pane

0x21fc,	// (0x00032cfc) cell_gallery2_pane_g2

0xaec8,	// (0x0003b9c8) cell_gallery2_pane_g3

0x2204,	// (0x00032d04) cell_gallery2_pane_g4

0x220c,	// (0x00032d0c) cell_gallery2_pane_g5

0xdd90,	// (0x0003e890) grid_highlight_pane_cp10

0xa565,	// (0x0003b065) popup_vitu2_match_list_window_ParamLimits

0xa4a9,	// (0x0003afa9) popup_vitu2_query_window_ParamLimits

0xa4a9,	// (0x0003afa9) popup_vitu2_query_window

0xd44a,	// (0x0003df4a) bg_vitu2_candi_button_pane

0x21f3,	// (0x00032cf3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x21ea,	// (0x00032cea) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x21e1,	// (0x00032ce1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4ed9,	// (0x000359d9) bg_button_pane_cp015

0xaed0,	// (0x0003b9d0) bg_button_pane_cp016

0xaee3,	// (0x0003b9e3) bg_button_pane_cp017

0xf01a,	// (0x0003fb1a) bg_popup_sub_pane_cp22

0x2214,	// (0x00032d14) popup_vitu2_query_window_g1

0x4f0c,	// (0x00035a0c) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x0004049e) popup_vitu2_query_window_g

0x4f29,	// (0x00035a29) popup_vitu2_query_window_t1_ParamLimits

0x4f29,	// (0x00035a29) popup_vitu2_query_window_t1

0x4f5c,	// (0x00035a5c) popup_vitu2_query_window_t2_ParamLimits

0x4f5c,	// (0x00035a5c) popup_vitu2_query_window_t2

0x4f6e,	// (0x00035a6e) popup_vitu2_query_window_t3_ParamLimits

0x4f6e,	// (0x00035a6e) popup_vitu2_query_window_t3

0xaf07,	// (0x0003ba07) popup_vitu2_query_window_t4_ParamLimits

0xaf07,	// (0x0003ba07) popup_vitu2_query_window_t4

0xaf2a,	// (0x0003ba2a) popup_vitu2_query_window_t5_ParamLimits

0xaf2a,	// (0x0003ba2a) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x000404a5) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x000404a5) popup_vitu2_query_window_t

0x2054,	// (0x00032b54) main_cset_text_pane

0xa93f,	// (0x0003b43f) aid_area_touch_slider_ParamLimits

0xa95b,	// (0x0003b45b) cset_slider_pane_ParamLimits

0xa97e,	// (0x0003b47e) main_cset_slider_pane_g1_ParamLimits

0xa993,	// (0x0003b493) main_cset_slider_pane_g2_ParamLimits

0x2075,	// (0x00032b75) main_cset_slider_pane_g3_ParamLimits

0x2075,	// (0x00032b75) main_cset_slider_pane_g3

0xa9a8,	// (0x0003b4a8) main_cset_slider_pane_g4_ParamLimits

0xa9a8,	// (0x0003b4a8) main_cset_slider_pane_g4

0xa9b7,	// (0x0003b4b7) main_cset_slider_pane_g5_ParamLimits

0xa9b7,	// (0x0003b4b7) main_cset_slider_pane_g5

0xa9c3,	// (0x0003b4c3) main_cset_slider_pane_g6_ParamLimits

0xa9c3,	// (0x0003b4c3) main_cset_slider_pane_g6

0xf902,	// (0x00040402) main_cset_slider_pane_g_ParamLimits

0x20a5,	// (0x00032ba5) main_cset_slider_pane_t1_ParamLimits

0xaa4f,	// (0x0003b54f) main_cset_slider_pane_t2_ParamLimits

0xaa69,	// (0x0003b569) main_cset_slider_pane_t3_ParamLimits

0xaa83,	// (0x0003b583) main_cset_slider_pane_t4_ParamLimits

0xaa9d,	// (0x0003b59d) main_cset_slider_pane_t5_ParamLimits

0xaab7,	// (0x0003b5b7) main_cset_slider_pane_t6_ParamLimits

0xaacc,	// (0x0003b5cc) main_cset_slider_pane_t7_ParamLimits

0xaaf6,	// (0x0003b5f6) main_cset_slider_pane_t8_ParamLimits

0xaaf6,	// (0x0003b5f6) main_cset_slider_pane_t8

0xab1e,	// (0x0003b61e) main_cset_slider_pane_t9_ParamLimits

0xab1e,	// (0x0003b61e) main_cset_slider_pane_t9

0xab46,	// (0x0003b646) main_cset_slider_pane_t10_ParamLimits

0xab46,	// (0x0003b646) main_cset_slider_pane_t10

0xab6e,	// (0x0003b66e) main_cset_slider_pane_t11_ParamLimits

0xab6e,	// (0x0003b66e) main_cset_slider_pane_t11

0xab96,	// (0x0003b696) main_cset_slider_pane_t12_ParamLimits

0xab96,	// (0x0003b696) main_cset_slider_pane_t12

0xabb3,	// (0x0003b6b3) main_cset_slider_pane_t13_ParamLimits

0xabb3,	// (0x0003b6b3) main_cset_slider_pane_t13

0xf927,	// (0x00040427) main_cset_slider_pane_t_ParamLimits

0xd44a,	// (0x0003df4a) bg_popup_sub_pane_cp011

0x2220,	// (0x00032d20) main_cset_text_pane_g1

0x2228,	// (0x00032d28) main_cset_text_pane_t1

0x2236,	// (0x00032d36) main_cset_text_pane_t2

0x2244,	// (0x00032d44) main_cset_text_pane_t3

0x2252,	// (0x00032d52) main_cset_text_pane_t4

0x2260,	// (0x00032d60) main_cset_text_pane_t5

0x226e,	// (0x00032d6e) main_cset_text_pane_t6

0x227c,	// (0x00032d7c) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x000404b4) main_cset_text_pane_t

0xd44a,	// (0x0003df4a) main_cam4_burst_pane

0xd44a,	// (0x0003df4a) main_cam5_pane

0xa883,	// (0x0003b383) bg_button_pane_cp019

0xa88c,	// (0x0003b38c) bg_button_pane_cp020

0x2081,	// (0x00032b81) main_cset_slider_pane_g7_ParamLimits

0x2081,	// (0x00032b81) main_cset_slider_pane_g7

0x208d,	// (0x00032b8d) main_cset_slider_pane_g8_ParamLimits

0x208d,	// (0x00032b8d) main_cset_slider_pane_g8

0xa9d7,	// (0x0003b4d7) main_cset_slider_pane_g9_ParamLimits

0xa9d7,	// (0x0003b4d7) main_cset_slider_pane_g9

0xa9e3,	// (0x0003b4e3) main_cset_slider_pane_g10_ParamLimits

0xa9e3,	// (0x0003b4e3) main_cset_slider_pane_g10

0xa9ef,	// (0x0003b4ef) main_cset_slider_pane_g11_ParamLimits

0xa9ef,	// (0x0003b4ef) main_cset_slider_pane_g11

0xa9fb,	// (0x0003b4fb) main_cset_slider_pane_g12_ParamLimits

0xa9fb,	// (0x0003b4fb) main_cset_slider_pane_g12

0xaa07,	// (0x0003b507) main_cset_slider_pane_g13_ParamLimits

0xaa07,	// (0x0003b507) main_cset_slider_pane_g13

0xaa13,	// (0x0003b513) main_cset_slider_pane_g14_ParamLimits

0xaa13,	// (0x0003b513) main_cset_slider_pane_g14

0xaa1f,	// (0x0003b51f) main_cset_slider_pane_g15_ParamLimits

0xaa1f,	// (0x0003b51f) main_cset_slider_pane_g15

0x20cd,	// (0x00032bcd) main_cset_slider_pane_t14_ParamLimits

0x20cd,	// (0x00032bcd) main_cset_slider_pane_t14

0x2106,	// (0x00032c06) main_cset_slider_pane_t15_ParamLimits

0x2106,	// (0x00032c06) main_cset_slider_pane_t15

0xaf4d,	// (0x0003ba4d) aid_cam4_burst_size_cell_ParamLimits

0xaf4d,	// (0x0003ba4d) aid_cam4_burst_size_cell

0xaf69,	// (0x0003ba69) grid_cam4_burst_pane_ParamLimits

0xaf69,	// (0x0003ba69) grid_cam4_burst_pane

0xaf9b,	// (0x0003ba9b) linegrid_cam4_burst_pane_ParamLimits

0xaf9b,	// (0x0003ba9b) linegrid_cam4_burst_pane

0xafb9,	// (0x0003bab9) scroll_pane_cp30_ParamLimits

0xafb9,	// (0x0003bab9) scroll_pane_cp30

0xafc5,	// (0x0003bac5) cell_cam4_burst_pane_ParamLimits

0xafc5,	// (0x0003bac5) cell_cam4_burst_pane

0x2296,	// (0x00032d96) linegrid_cam4_burst_pane_g1_ParamLimits

0x2296,	// (0x00032d96) linegrid_cam4_burst_pane_g1

0xb005,	// (0x0003bb05) linegrid_cam4_burst_pane_g2_ParamLimits

0xb005,	// (0x0003bb05) linegrid_cam4_burst_pane_g2

0x22a3,	// (0x00032da3) linegrid_cam4_burst_pane_g3_ParamLimits

0x22a3,	// (0x00032da3) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x000404c3) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x000404c3) linegrid_cam4_burst_pane_g

0xb016,	// (0x0003bb16) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb016,	// (0x0003bb16) linegrid_cam4_burst_pane_g3_copy1

0x22b0,	// (0x00032db0) linegrid_cam4_burst_pane_g4_ParamLimits

0x22b0,	// (0x00032db0) linegrid_cam4_burst_pane_g4

0xb030,	// (0x0003bb30) linegrid_cam4_burst_pane_g5_ParamLimits

0xb030,	// (0x0003bb30) linegrid_cam4_burst_pane_g5

0xb041,	// (0x0003bb41) linegrid_cam4_burst_pane_g6_ParamLimits

0xb041,	// (0x0003bb41) linegrid_cam4_burst_pane_g6

0x22bd,	// (0x00032dbd) linegrid_cam4_burst_pane_g7_ParamLimits

0x22bd,	// (0x00032dbd) linegrid_cam4_burst_pane_g7

0xb058,	// (0x0003bb58) cell_cam4_burst_pane_g1

0x22d6,	// (0x00032dd6) main_cam5_pane_t1_ParamLimits

0x22d6,	// (0x00032dd6) main_cam5_pane_t1

0x22e8,	// (0x00032de8) main_cam5_pane_t2_ParamLimits

0x22e8,	// (0x00032de8) main_cam5_pane_t2

0x22fa,	// (0x00032dfa) main_cam5_pane_t3_ParamLimits

0x22fa,	// (0x00032dfa) main_cam5_pane_t3

0x230c,	// (0x00032e0c) main_cam5_pane_t4_ParamLimits

0x230c,	// (0x00032e0c) main_cam5_pane_t4

0x2324,	// (0x00032e24) main_cam5_pane_t5_ParamLimits

0x2324,	// (0x00032e24) main_cam5_pane_t5

0x2338,	// (0x00032e38) main_cam5_pane_t6_ParamLimits

0x2338,	// (0x00032e38) main_cam5_pane_t6

0x234c,	// (0x00032e4c) main_cam5_pane_t7_ParamLimits

0x234c,	// (0x00032e4c) main_cam5_pane_t7

0x235e,	// (0x00032e5e) main_cam5_pane_t8_ParamLimits

0x235e,	// (0x00032e5e) main_cam5_pane_t8

0x237c,	// (0x00032e7c) main_cam5_pane_t9_ParamLimits

0x237c,	// (0x00032e7c) main_cam5_pane_t9

0x238e,	// (0x00032e8e) main_cam5_pane_t10_ParamLimits

0x238e,	// (0x00032e8e) main_cam5_pane_t10

0x23a0,	// (0x00032ea0) main_cam5_pane_t11_ParamLimits

0x23a0,	// (0x00032ea0) main_cam5_pane_t11

0x23b4,	// (0x00032eb4) main_cam5_pane_t12_ParamLimits

0x23b4,	// (0x00032eb4) main_cam5_pane_t12

0x23cb,	// (0x00032ecb) main_cam5_pane_t13_ParamLimits

0x23cb,	// (0x00032ecb) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x000404cf) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x000404cf) main_cam5_pane_t

0x5c08,	// (0x00036708) popup_scut_keymap_window_ParamLimits

0x5c08,	// (0x00036708) popup_scut_keymap_window

0xb06b,	// (0x0003bb6b) aid_size_cell_brow_shortcut

0xdd90,	// (0x0003e890) bg_popup_window_pane_cp010

0xb077,	// (0x0003bb77) grid_scut_pane

0xb083,	// (0x0003bb83) cell_scut_pane_ParamLimits

0xb083,	// (0x0003bb83) cell_scut_pane

0xb09e,	// (0x0003bb9e) cell_scut_pane_g1

0x23ee,	// (0x00032eee) cell_scut_pane_t1

0x23fd,	// (0x00032efd) cell_scut_pane_t2

0xb0a7,	// (0x0003bba7) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x000404ea) cell_scut_pane_t

0x91b2,	// (0x00039cb2) main_mup3_pane_g8_ParamLimits

0x91b2,	// (0x00039cb2) main_mup3_pane_g8

0xa4a9,	// (0x0003afa9) area_vitu2_query_pane_ParamLimits

0xa4a9,	// (0x0003afa9) area_vitu2_query_pane

0x4eeb,	// (0x000359eb) input_focus_pane_cp08

0x240c,	// (0x00032f0c) area_vitu2_query_pane_g1

0x4fec,	// (0x00035aec) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x000404f1) area_vitu2_query_pane_g

0xb0b5,	// (0x0003bbb5) area_vitu2_query_pane_t1_ParamLimits

0xb0b5,	// (0x0003bbb5) area_vitu2_query_pane_t1

0xb0cb,	// (0x0003bbcb) area_vitu2_query_pane_t2_ParamLimits

0xb0cb,	// (0x0003bbcb) area_vitu2_query_pane_t2

0x4ffd,	// (0x00035afd) area_vitu2_query_pane_t3_ParamLimits

0x4ffd,	// (0x00035afd) area_vitu2_query_pane_t3

0x5025,	// (0x00035b25) area_vitu2_query_pane_t4_ParamLimits

0x5025,	// (0x00035b25) area_vitu2_query_pane_t4

0x504d,	// (0x00035b4d) area_vitu2_query_pane_t5_ParamLimits

0x504d,	// (0x00035b4d) area_vitu2_query_pane_t5

0x5075,	// (0x00035b75) area_vitu2_query_pane_t6_ParamLimits

0x5075,	// (0x00035b75) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x000404f6) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x000404f6) area_vitu2_query_pane_t

0xb0e1,	// (0x0003bbe1) bg_button_pane_cp018

0xb0ef,	// (0x0003bbef) bg_button_pane_cp021

0x50c1,	// (0x00035bc1) bg_button_pane_cp022

0x50d2,	// (0x00035bd2) input_focus_pane_cp09

0x7d98,	// (0x00038898) aid_size_touch_mv_arrow_left

0x7dc3,	// (0x000388c3) aid_size_touch_mv_arrow_right

0xaa37,	// (0x0003b537) main_cset_slider_pane_g16_ParamLimits

0xaa37,	// (0x0003b537) main_cset_slider_pane_g16

0xaa43,	// (0x0003b543) main_cset_slider_pane_g17_ParamLimits

0xaa43,	// (0x0003b543) main_cset_slider_pane_g17

0xb058,	// (0x0003bb58) cell_cam4_burst_pane_g1_ParamLimits

0xd44a,	// (0x0003df4a) compa_mode_pane

0xac34,	// (0x0003b734) popup_vtel_slider_window_g3_ParamLimits

0xac34,	// (0x0003b734) popup_vtel_slider_window_g3

0xac48,	// (0x0003b748) popup_vtel_slider_window_g4_ParamLimits

0xac48,	// (0x0003b748) popup_vtel_slider_window_g4

0xac5c,	// (0x0003b75c) popup_vtel_slider_window_t1_ParamLimits

0xac5c,	// (0x0003b75c) popup_vtel_slider_window_t1

0xd44a,	// (0x0003df4a) main_cl_pane

0x8a3d,	// (0x0003953d) popup_imed_adjust2_window_ParamLimits

0xf01a,	// (0x0003fb1a) bg_tb_trans_pane_cp05_ParamLimits

0x171d,	// (0x0003221d) popup_imed_adjust2_window_g1_ParamLimits

0x172c,	// (0x0003222c) popup_imed_adjust2_window_g2_ParamLimits

0x172c,	// (0x0003222c) popup_imed_adjust2_window_g2

0x1738,	// (0x00032238) popup_imed_adjust2_window_g3_ParamLimits

0x1738,	// (0x00032238) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x0004026c) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x0004026c) popup_imed_adjust2_window_g

0x1744,	// (0x00032244) popup_imed_adjust2_window_t1_ParamLimits

0x175c,	// (0x0003225c) slider_imed_adjust_pane_ParamLimits

0x1770,	// (0x00032270) slider_imed_adjust_pane_g1_ParamLimits

0x1780,	// (0x00032280) slider_imed_adjust_pane_g2_ParamLimits

0x1790,	// (0x00032290) slider_imed_adjust_pane_g3_ParamLimits

0x17a1,	// (0x000322a1) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x00040273) slider_imed_adjust_pane_g_ParamLimits

0xa1fc,	// (0x0003acfc) aid_touch_area_cam4_ParamLimits

0xa1fc,	// (0x0003acfc) aid_touch_area_cam4

0xa20c,	// (0x0003ad0c) battery_pane_cp01

0xa293,	// (0x0003ad93) main_camera4_pane_g6_ParamLimits

0xa293,	// (0x0003ad93) main_camera4_pane_g6

0xa2b1,	// (0x0003adb1) main_camera4_pane_t2_ParamLimits

0xa2b1,	// (0x0003adb1) main_camera4_pane_t2

0x0001,

0xf875,	// (0x00040375) main_camera4_pane_t_ParamLimits

0xf875,	// (0x00040375) main_camera4_pane_t

0xa334,	// (0x0003ae34) aid_touch_area_vid4_ParamLimits

0xa334,	// (0x0003ae34) aid_touch_area_vid4

0xa374,	// (0x0003ae74) main_video4_pane_g5_ParamLimits

0xa374,	// (0x0003ae74) main_video4_pane_g5

0xa39a,	// (0x0003ae9a) vid4_progress_pane_ParamLimits

0xa39a,	// (0x0003ae9a) vid4_progress_pane

0x2099,	// (0x00032b99) main_cset_slider_pane_g18_ParamLimits

0x2099,	// (0x00032b99) main_cset_slider_pane_g18

0x22ca,	// (0x00032dca) cell_cam4_burst_pane_g2_ParamLimits

0x22ca,	// (0x00032dca) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x000404ca) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x000404ca) cell_cam4_burst_pane_g

0xb0fb,	// (0x0003bbfb) bg_cl_pane_ParamLimits

0xb0fb,	// (0x0003bbfb) bg_cl_pane

0xb107,	// (0x0003bc07) cl_header_pane_ParamLimits

0xb107,	// (0x0003bc07) cl_header_pane

0xb113,	// (0x0003bc13) cl_listscroll_pane_ParamLimits

0xb113,	// (0x0003bc13) cl_listscroll_pane

0x24b4,	// (0x00032fb4) bg_cl_pane_g1

0x24bc,	// (0x00032fbc) bg_cl_pane_g2

0x24c4,	// (0x00032fc4) bg_cl_pane_g3

0x24cc,	// (0x00032fcc) bg_cl_pane_g4

0x24d4,	// (0x00032fd4) bg_cl_pane_g5

0x24dc,	// (0x00032fdc) bg_cl_pane_g6

0x24e4,	// (0x00032fe4) bg_cl_pane_g7

0x24ec,	// (0x00032fec) bg_cl_pane_g8

0x24f4,	// (0x00032ff4) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x00040505) bg_cl_pane_g

0xb11f,	// (0x0003bc1f) aid_height_cl_leading_ParamLimits

0xb11f,	// (0x0003bc1f) aid_height_cl_leading

0xb12b,	// (0x0003bc2b) aid_height_cl_text_ParamLimits

0xb12b,	// (0x0003bc2b) aid_height_cl_text

0xd454,	// (0x0003df54) bg_cl_header_pane_ParamLimits

0xd454,	// (0x0003df54) bg_cl_header_pane

0xb143,	// (0x0003bc43) cl_header_pane_g1_ParamLimits

0xb143,	// (0x0003bc43) cl_header_pane_g1

0xb150,	// (0x0003bc50) cl_header_pane_t1_ParamLimits

0xb150,	// (0x0003bc50) cl_header_pane_t1

0x24fc,	// (0x00032ffc) cl_list_pane

0x206c,	// (0x00032b6c) hc_scroll_pane_cp01

0xdfcf,	// (0x0003eacf) bg_cl_header_pane_g1

0x1f4e,	// (0x00032a4e) bg_cl_header_pane_g2

0xdfef,	// (0x0003eaef) bg_cl_header_pane_g3

0x1f5e,	// (0x00032a5e) bg_cl_header_pane_g4

0x1f56,	// (0x00032a56) bg_cl_header_pane_g5

0x21b9,	// (0x00032cb9) bg_cl_header_pane_g6

0x1f76,	// (0x00032a76) bg_cl_header_pane_g7

0x1f7e,	// (0x00032a7e) bg_cl_header_pane_g8

0x1f6e,	// (0x00032a6e) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x00040518) bg_cl_header_pane_g

0xb162,	// (0x0003bc62) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb162,	// (0x0003bc62) hc_cl_list_double_graphic_heading_pane

0xb172,	// (0x0003bc72) hc_cl_list_single_graphic_pane_ParamLimits

0xb172,	// (0x0003bc72) hc_cl_list_single_graphic_pane

0xb184,	// (0x0003bc84) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb184,	// (0x0003bc84) hc_cl_list_single_graphic_pane_g1

0xb190,	// (0x0003bc90) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb190,	// (0x0003bc90) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x0004052b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x0004052b) hc_cl_list_single_graphic_pane_g

0xb1a4,	// (0x0003bca4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb1a4,	// (0x0003bca4) hc_cl_list_single_graphic_pane_t1

0xb184,	// (0x0003bc84) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb184,	// (0x0003bc84) hc_cl_list_double_graphic_heading_pane_g1

0xb1b9,	// (0x0003bcb9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb1b9,	// (0x0003bcb9) hc_cl_list_double_graphic_heading_pane_g2

0xb1cd,	// (0x0003bccd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb1cd,	// (0x0003bccd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x00040530) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x00040530) hc_cl_list_double_graphic_heading_pane_g

0xb1e1,	// (0x0003bce1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb1e1,	// (0x0003bce1) hc_cl_list_double_graphic_heading_pane_t1

0xb1f6,	// (0x0003bcf6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb1f6,	// (0x0003bcf6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x00040537) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x00040537) hc_cl_list_double_graphic_heading_pane_t

0xb213,	// (0x0003bd13) vid4_progress_pane_g1

0xb223,	// (0x0003bd23) vid4_progress_pane_g2

0xb233,	// (0x0003bd33) vid4_progress_pane_g3

0xb245,	// (0x0003bd45) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x0004053c) vid4_progress_pane_g

0xb263,	// (0x0003bd63) vid4_progress_pane_t1

0xb27d,	// (0x0003bd7d) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x00040547) vid4_progress_pane_t

0xb2a7,	// (0x0003bda7) wait_bar_pane_cp07

0x1066,	// (0x00031b66) blid_firmament_pane_ParamLimits

0x10a9,	// (0x00031ba9) popup_blid_sat_info2_window_g1

0x10cd,	// (0x00031bcd) popup_blid_sat_info2_window_t3

0x10db,	// (0x00031bdb) popup_blid_sat_info2_window_t4

0x10e9,	// (0x00031be9) popup_blid_sat_info2_window_t5

0x10f7,	// (0x00031bf7) popup_blid_sat_info2_window_t6

0x1107,	// (0x00031c07) popup_blid_sat_info2_window_t7

0x1115,	// (0x00031c15) popup_blid_sat_info2_window_t8

0x1123,	// (0x00031c23) popup_blid_sat_info2_window_t9

0x1131,	// (0x00031c31) popup_blid_sat_info2_window_t10

0x11f8,	// (0x00031cf8) aid_firma_cardinal_ParamLimits

0x120c,	// (0x00031d0c) blid_firmament_pane_t1_ParamLimits

0x1223,	// (0x00031d23) blid_firmament_pane_t2_ParamLimits

0x123a,	// (0x00031d3a) blid_firmament_pane_t3_ParamLimits

0x1251,	// (0x00031d51) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x00040165) blid_firmament_pane_t_ParamLimits

0x1268,	// (0x00031d68) blid_sat_info_pane_ParamLimits

0xdb27,	// (0x0003e627) main_cam_set_pane_ParamLimits

0x987c,	// (0x0003a37c) aid_size_cell_colour_35_ParamLimits

0x9896,	// (0x0003a396) aid_size_cell_colour_112_ParamLimits

0x98ad,	// (0x0003a3ad) aid_size_cell_effect_ParamLimits

0xdb27,	// (0x0003e627) bg_tb_trans_pane_cp02_ParamLimits

0xf053,	// (0x0003fb53) heading_imed_pane_ParamLimits

0x98c7,	// (0x0003a3c7) listscroll_imed_pane_ParamLimits

0x042e,	// (0x00030f2e) popup_call2_audio_first_window_g5_ParamLimits

0x042e,	// (0x00030f2e) popup_call2_audio_first_window_g5

0x9eea,	// (0x0003a9ea) aid_size_touch_image3_arrow_left_ParamLimits

0x9eea,	// (0x0003a9ea) aid_size_touch_image3_arrow_left

0x9f00,	// (0x0003aa00) aid_size_touch_image3_arrow_right_ParamLimits

0x9f00,	// (0x0003aa00) aid_size_touch_image3_arrow_right

0xb292,	// (0x0003bd92) vid4_progress_pane_t3

0x9a42,	// (0x0003a542) main_hwr_training_symbol_option_pane_ParamLimits

0x9a42,	// (0x0003a542) main_hwr_training_symbol_option_pane

0x1962,	// (0x00032462) popup_hwr_training_preview_window_ParamLimits

0x1962,	// (0x00032462) popup_hwr_training_preview_window

0x9aa3,	// (0x0003a5a3) hwr_training_navi_pane_g5_ParamLimits

0x9aa3,	// (0x0003a5a3) hwr_training_navi_pane_g5

0x1f3c,	// (0x00032a3c) popup_char_count_window

0xd454,	// (0x0003df54) bg_popup_sub_pane_cp20_ParamLimits

0xad4f,	// (0x0003b84f) list_vitu2_match_list_pane_ParamLimits

0xad5b,	// (0x0003b85b) vitu2_page_scroll_pane_ParamLimits

0xad5b,	// (0x0003b85b) vitu2_page_scroll_pane

0x25c3,	// (0x000330c3) list_single_hwr_training_symbol_option_pane_ParamLimits

0x25c3,	// (0x000330c3) list_single_hwr_training_symbol_option_pane

0x25d6,	// (0x000330d6) list_single_hwr_training_symbol_option_pane_g1

0x25de,	// (0x000330de) list_single_hwr_training_symbol_option_pane_t1

0x25ec,	// (0x000330ec) bg_button_pane_cp023

0x25f5,	// (0x000330f5) bg_button_pane_cp024

0x2628,	// (0x00033128) vitu2_page_scroll_pane_g1

0x2630,	// (0x00033130) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x0004054e) vitu2_page_scroll_pane_g

0x2638,	// (0x00033138) vitu2_page_scroll_pane_t1

0x2647,	// (0x00033147) popup_char_count_window_g1

0x2650,	// (0x00033150) popup_char_count_window_g2

0x2659,	// (0x00033159) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x00040553) popup_char_count_window_g

0x2662,	// (0x00033162) popup_char_count_window_t1

0xd44a,	// (0x0003df4a) main_vded2_pane

0x1709,	// (0x00032209) aid_size_cell_imed_line

0x1713,	// (0x00032213) grid_imed_line_width_pane

0xa40e,	// (0x0003af0e) vid4_indicators_pane_g4

0x2670,	// (0x00033170) cell_imed_line_width_pane_ParamLimits

0x2670,	// (0x00033170) cell_imed_line_width_pane

0x2686,	// (0x00033186) cell_imed_line_width_pane_g1

0x268f,	// (0x0003318f) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x0004055a) cell_imed_line_width_pane_g

0xb2ba,	// (0x0003bdba) main_vded2_pane_g1_ParamLimits

0xb2ba,	// (0x0003bdba) main_vded2_pane_g1

0xb2c9,	// (0x0003bdc9) main_vded2_pane_g2_ParamLimits

0xb2c9,	// (0x0003bdc9) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x0004055f) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x0004055f) main_vded2_pane_g

0xb2d7,	// (0x0003bdd7) vded2_slider_pane_ParamLimits

0xb2d7,	// (0x0003bdd7) vded2_slider_pane

0xb2e4,	// (0x0003bde4) aid_size_touch_vded2_end

0xb2ee,	// (0x0003bdee) aid_size_touch_vded2_playhead

0x2697,	// (0x00033197) aid_size_touch_vded2_start

0x269f,	// (0x0003319f) vded2_slider_bg_pane

0x26a8,	// (0x000331a8) vded2_slider_pane_g1

0x26b1,	// (0x000331b1) vded2_slider_pane_g2

0xb2f6,	// (0x0003bdf6) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x00040564) vded2_slider_pane_g

0x26b9,	// (0x000331b9) vded2_slider_bg_pane_g1

0x26c2,	// (0x000331c2) vded2_slider_bg_pane_g2

0x26cb,	// (0x000331cb) vded2_slider_bg_pane_g3

0x0002,

0xf730,	// (0x00040230) vded2_slider_bg_pane_g

0x822c,	// (0x00038d2c) aid_postcard_touch_down_pane_ParamLimits

0x822c,	// (0x00038d2c) aid_postcard_touch_down_pane

0x823c,	// (0x00038d3c) aid_postcard_touch_up_pane_ParamLimits

0x823c,	// (0x00038d3c) aid_postcard_touch_up_pane

0xd44a,	// (0x0003df4a) main_blid2_pane

0x89bc,	// (0x000394bc) popup_blid2_search_window

0xd44a,	// (0x0003df4a) blid2_gps_pane

0xd44a,	// (0x0003df4a) blid2_navig_pane

0xd44a,	// (0x0003df4a) blid2_search_pane

0xd44a,	// (0x0003df4a) blid2_tripm_pane

0xb2ff,	// (0x0003bdff) blid2_search_pane_g1_ParamLimits

0xb2ff,	// (0x0003bdff) blid2_search_pane_g1

0xb30b,	// (0x0003be0b) blid2_search_pane_t1_ParamLimits

0xb30b,	// (0x0003be0b) blid2_search_pane_t1

0xb31d,	// (0x0003be1d) aid_size_cell_blid2_gps_ParamLimits

0xb31d,	// (0x0003be1d) aid_size_cell_blid2_gps

0xb32d,	// (0x0003be2d) blid2_gps_pane_g1_ParamLimits

0xb32d,	// (0x0003be2d) blid2_gps_pane_g1

0xb339,	// (0x0003be39) grid_blid2_satellite_pane_ParamLimits

0xb339,	// (0x0003be39) grid_blid2_satellite_pane

0xb347,	// (0x0003be47) blid2_navig_pane_g1_ParamLimits

0xb347,	// (0x0003be47) blid2_navig_pane_g1

0xb353,	// (0x0003be53) blid2_navig_pane_t1_ParamLimits

0xb353,	// (0x0003be53) blid2_navig_pane_t1

0xb365,	// (0x0003be65) blid2_navig_pane_t2_ParamLimits

0xb365,	// (0x0003be65) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x0004056b) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x0004056b) blid2_navig_pane_t

0xb377,	// (0x0003be77) blid2_navig_ring_pane_ParamLimits

0xb377,	// (0x0003be77) blid2_navig_ring_pane

0xb387,	// (0x0003be87) blid2_speed_pane_ParamLimits

0xb387,	// (0x0003be87) blid2_speed_pane

0xb393,	// (0x0003be93) blid2_tripm_pane_g1_ParamLimits

0xb393,	// (0x0003be93) blid2_tripm_pane_g1

0xb3a3,	// (0x0003bea3) blid2_tripm_pane_g2_ParamLimits

0xb3a3,	// (0x0003bea3) blid2_tripm_pane_g2

0xb3af,	// (0x0003beaf) blid2_tripm_pane_g3_ParamLimits

0xb3af,	// (0x0003beaf) blid2_tripm_pane_g3

0xb3bb,	// (0x0003bebb) blid2_tripm_pane_g4_ParamLimits

0xb3bb,	// (0x0003bebb) blid2_tripm_pane_g4

0xb3c7,	// (0x0003bec7) blid2_tripm_pane_g5_ParamLimits

0xb3c7,	// (0x0003bec7) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x00040570) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x00040570) blid2_tripm_pane_g

0xb3e3,	// (0x0003bee3) blid2_tripm_pane_t1_ParamLimits

0xb3e3,	// (0x0003bee3) blid2_tripm_pane_t1

0xb3f5,	// (0x0003bef5) blid2_tripm_pane_t2_ParamLimits

0xb3f5,	// (0x0003bef5) blid2_tripm_pane_t2

0xb407,	// (0x0003bf07) blid2_tripm_pane_t3_ParamLimits

0xb407,	// (0x0003bf07) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x0004057d) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x0004057d) blid2_tripm_pane_t

0xb439,	// (0x0003bf39) cell_blid2_satellite_pane_ParamLimits

0xb439,	// (0x0003bf39) cell_blid2_satellite_pane

0xb457,	// (0x0003bf57) cell_blid2_satellite_pane_g1

0x26d4,	// (0x000331d4) cell_blid2_satellite_pane_t1

0xddc6,	// (0x0003e8c6) blid2_speed_pane_g1

0x26e2,	// (0x000331e2) blid2_speed_pane_t1

0x26f0,	// (0x000331f0) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x00040586) blid2_speed_pane_t

0xddc6,	// (0x0003e8c6) blid2_navig_ring_pane_g1

0xb460,	// (0x0003bf60) blid2_navig_ring_pane_g2

0xb468,	// (0x0003bf68) blid2_navig_ring_pane_g3

0xb470,	// (0x0003bf70) blid2_navig_ring_pane_g4

0xb478,	// (0x0003bf78) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x0004058b) blid2_navig_ring_pane_g

0xd44a,	// (0x0003df4a) bg_popup_window_pane_cp011

0x26fe,	// (0x000331fe) popup_blid2_search_window_g1

0x2706,	// (0x00033206) popup_blid2_search_window_t1

0x2714,	// (0x00033214) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x00040596) popup_blid2_search_window_t

0xdede,	// (0x0003e9de) main_browser_pane_g1

0xdbf2,	// (0x0003e6f2) main_browser_pane_ParamLimits

0xdb27,	// (0x0003e627) bg_button_pane_cp011_ParamLimits

0xa64a,	// (0x0003b14a) cell_vitu2_function_pane_g1_ParamLimits

0xf01a,	// (0x0003fb1a) bg_popup_sub_pane_cp22_ParamLimits

0x4eeb,	// (0x000359eb) input_focus_pane_cp08_ParamLimits

0xaef6,	// (0x0003b9f6) popup_vitu2_query_button_pane_ParamLimits

0xaef6,	// (0x0003b9f6) popup_vitu2_query_button_pane

0x4f02,	// (0x00035a02) popup_vitu2_query_input_button_pane

0x2214,	// (0x00032d14) popup_vitu2_query_window_g1_ParamLimits

0x4f0c,	// (0x00035a0c) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x0004049e) popup_vitu2_query_window_g_ParamLimits

0xd44a,	// (0x0003df4a) bg_button_pane_cp026

0xb480,	// (0x0003bf80) popup_vitu2_query_input_button_pane_g1

0xd44a,	// (0x0003df4a) bg_button_pane_cp025

0x2722,	// (0x00033222) popup_vitu2_query_button_pane_t1

0x8e80,	// (0x00039980) main_mp3_pane_t6

0x8e90,	// (0x00039990) popup_slider_window_cp01

0xa2e9,	// (0x0003ade9) cam4_battery_pane

0xa3c7,	// (0x0003aec7) cam4_battery_pane_cp02

0xb20b,	// (0x0003bd0b) cam4_battery_pane_cp01

0xb20b,	// (0x0003bd0b) cam4_battery_pane_cp03

0xddc6,	// (0x0003e8c6) cam4_battery_pane_g1

0x0fcd,	// (0x00031acd) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x0004059b) cam4_battery_pane_g

0x113f,	// (0x00031c3f) popup_blid_sat_info2_window_t11

0x7d98,	// (0x00038898) aid_size_touch_mv_arrow_left_ParamLimits

0x7dc3,	// (0x000388c3) aid_size_touch_mv_arrow_right_ParamLimits

0xe644,	// (0x0003f144) navi_pane_g1_ParamLimits

0x7e02,	// (0x00038902) navi_pane_g2_ParamLimits

0x7e30,	// (0x00038930) navi_pane_g3_ParamLimits

0xf379,	// (0x0003fe79) navi_pane_g_ParamLimits

0x7e8a,	// (0x0003898a) navi_pane_mv_t1_ParamLimits

0x98d3,	// (0x0003a3d3) grid_imed_effect_pane_ParamLimits

0x691b,	// (0x0003741b) aid_placing_vt_slider_lsc

0xde29,	// (0x0003e929) aid_placing_vt_slider_prt

0xdb27,	// (0x0003e627) bg_tb_trans_pane_cp01_ParamLimits

0x13a7,	// (0x00031ea7) popup_image_details_window_g1_ParamLimits

0x13ba,	// (0x00031eba) popup_image_details_window_g2_ParamLimits

0x13cf,	// (0x00031ecf) popup_image_details_window_g3_ParamLimits

0x13cf,	// (0x00031ecf) popup_image_details_window_g3

0xf6a5,	// (0x000401a5) popup_image_details_window_g_ParamLimits

0x13e3,	// (0x00031ee3) popup_image_details_window_t1_ParamLimits

0x13f5,	// (0x00031ef5) popup_image_details_window_t2_ParamLimits

0x140e,	// (0x00031f0e) popup_image_details_window_t3_ParamLimits

0x1422,	// (0x00031f22) popup_image_details_window_t4_ParamLimits

0x143d,	// (0x00031f3d) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x000401ac) popup_image_details_window_t_ParamLimits

0xb137,	// (0x0003bc37) cl_header_name_pane_ParamLimits

0xb137,	// (0x0003bc37) cl_header_name_pane

0xb488,	// (0x0003bf88) cl_header_name_pane_t1_ParamLimits

0xb488,	// (0x0003bf88) cl_header_name_pane_t1

0xb49f,	// (0x0003bf9f) cl_header_name_pane_t2_ParamLimits

0xb49f,	// (0x0003bf9f) cl_header_name_pane_t2

0xb4c9,	// (0x0003bfc9) cl_header_name_pane_t3_ParamLimits

0xb4c9,	// (0x0003bfc9) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x000405a0) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x000405a0) cl_header_name_pane_t

0x7e5b,	// (0x0003895b) navi_pane_mv_g2_ParamLimits

0x1ed8,	// (0x000329d8) field_vitu2_entry_pane_g1_ParamLimits

0x1ee4,	// (0x000329e4) field_vitu2_entry_pane_g2_ParamLimits

0xf028,	// (0x0003fb28) field_vitu2_entry_pane_g3_ParamLimits

0xf028,	// (0x0003fb28) field_vitu2_entry_pane_g3

0xf8a7,	// (0x000403a7) field_vitu2_entry_pane_g_ParamLimits

0xa5d8,	// (0x0003b0d8) cell_vitu2_itu_pane_g1_ParamLimits

0xa5f0,	// (0x0003b0f0) cell_vitu2_itu_pane_g2_ParamLimits

0xa5f0,	// (0x0003b0f0) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x000403b3) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x000403b3) cell_vitu2_itu_pane_g

0xdb27,	// (0x0003e627) bg_vkb2_func_pane_cp05_ParamLimits

0xdb27,	// (0x0003e627) bg_vkb2_func_pane_cp05

0xdb27,	// (0x0003e627) bg_vkb2_func_pane_cp03

0xdb27,	// (0x0003e627) bg_vkb2_func_pane_cp04

0xdb27,	// (0x0003e627) bg_vkb2_func_pane_cp10_ParamLimits

0xdb27,	// (0x0003e627) bg_vkb2_func_pane_cp10

0x50c1,	// (0x00035bc1) bg_vkb2_func_pane_cp08

0xb0e1,	// (0x0003bbe1) bg_vkb2_func_pane_cp06

0xb0ef,	// (0x0003bbef) bg_vkb2_func_pane_cp07

0x25fe,	// (0x000330fe) bg_vkb2_func_pane_cp11_ParamLimits

0x25fe,	// (0x000330fe) bg_vkb2_func_pane_cp11

0x2613,	// (0x00033113) bg_vkb2_func_pane_cp12_ParamLimits

0x2613,	// (0x00033113) bg_vkb2_func_pane_cp12

0xd44a,	// (0x0003df4a) bg_vkb2_func_pane_cp09

0x1f4e,	// (0x00032a4e) bg_vkb2_func_pane_g1

0xdfef,	// (0x0003eaef) bg_vkb2_func_pane_g2

0x1f56,	// (0x00032a56) bg_vkb2_func_pane_g3

0x1f5e,	// (0x00032a5e) bg_vkb2_func_pane_g4

0x21b9,	// (0x00032cb9) bg_vkb2_func_pane_g5

0x1f76,	// (0x00032a76) bg_vkb2_func_pane_g6

0x1f7e,	// (0x00032a7e) bg_vkb2_func_pane_g7

0x1f6e,	// (0x00032a6e) bg_vkb2_func_pane_g8

0xdfcf,	// (0x0003eacf) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x000405a7) bg_vkb2_func_pane_g

0xb3d5,	// (0x0003bed5) blid2_tripm_pane_g6_ParamLimits

0xb3d5,	// (0x0003bed5) blid2_tripm_pane_g6

0x1c95,	// (0x00032795) mp4_progress_pane_g1

0xb42d,	// (0x0003bf2d) blid2_tripm_values_pane_ParamLimits

0xb42d,	// (0x0003bf2d) blid2_tripm_values_pane

0xb4ee,	// (0x0003bfee) blid2_tripm_values_pane_t1

0xb4fc,	// (0x0003bffc) blid2_tripm_values_pane_t2

0xb50a,	// (0x0003c00a) blid2_tripm_values_pane_t3

0xb518,	// (0x0003c018) blid2_tripm_values_pane_t4

0xb526,	// (0x0003c026) blid2_tripm_values_pane_t5

0xb534,	// (0x0003c034) blid2_tripm_values_pane_t6

0xb542,	// (0x0003c042) blid2_tripm_values_pane_t7

0xb550,	// (0x0003c050) blid2_tripm_values_pane_t8

0xb55e,	// (0x0003c05e) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x000405ba) blid2_tripm_values_pane_t

0x6959,	// (0x00037459) call_video_pane_t1_ParamLimits

0x6976,	// (0x00037476) call_video_pane_t2_ParamLimits

0xf222,	// (0x0003fd22) call_video_pane_t_ParamLimits

0x4ca6,	// (0x000357a6) msg_header_pane_g1_ParamLimits

0xe844,	// (0x0003f344) msg_header_pane_g2_ParamLimits

0xe844,	// (0x0003f344) msg_header_pane_g2

0x0001,

0xf41c,	// (0x0003ff1c) msg_header_pane_g_ParamLimits

0xf41c,	// (0x0003ff1c) msg_header_pane_g

0xdbf2,	// (0x0003e6f2) main_clock2_pane_ParamLimits

0x964c,	// (0x0003a14c) grid_clock2_toolbar_pane_ParamLimits

0x964c,	// (0x0003a14c) grid_clock2_toolbar_pane

0x964c,	// (0x0003a14c) listscroll_clock2_pane_ParamLimits

0x964c,	// (0x0003a14c) listscroll_clock2_pane

0x96fb,	// (0x0003a1fb) main_clock2_pane_t3_ParamLimits

0x96fb,	// (0x0003a1fb) main_clock2_pane_t3

0x970d,	// (0x0003a20d) main_clock2_pane_t4_ParamLimits

0x970d,	// (0x0003a20d) main_clock2_pane_t4

0x2730,	// (0x00033230) cell_clock2_toolbar_pane

0x2738,	// (0x00033238) cell_clock2_toolbar_pane_cp01

0x2738,	// (0x00033238) cell_clock2_toolbar_pane_cp02

0x2740,	// (0x00033240) cell_clock2_toolbar_pane_cp03

0x2748,	// (0x00033248) list_clock2_pane

0xe595,	// (0x0003f095) scroll_pane_cp10

0x2750,	// (0x00033250) list_single_clock2_pane_ParamLimits

0x2750,	// (0x00033250) list_single_clock2_pane

0xdd90,	// (0x0003e890) list_highlight_pane_cp08

0x275d,	// (0x0003325d) list_single_clock2_pane_t1

0x276b,	// (0x0003326b) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x000405cd) list_single_clock2_pane_t

0xd44a,	// (0x0003df4a) bg_button_pane_cp10

0x2779,	// (0x00033279) cell_clock2_toolbar_pane_g1

0x818e,	// (0x00038c8e) aid_main_viewer_pane_g1_ParamLimits

0x818e,	// (0x00038c8e) aid_main_viewer_pane_g1

0x819a,	// (0x00038c9a) aid_main_viewer_pane_g2_ParamLimits

0x819a,	// (0x00038c9a) aid_main_viewer_pane_g2

0x81a6,	// (0x00038ca6) aid_main_viewer_pane_g3_ParamLimits

0x81a6,	// (0x00038ca6) aid_main_viewer_pane_g3

0x81b7,	// (0x00038cb7) aid_main_viewer_pane_g4_ParamLimits

0x81b7,	// (0x00038cb7) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x0003ff2d) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x0003ff2d) aid_main_viewer_pane_g

0x8988,	// (0x00039488) main_calc_pane_ParamLimits

0x8995,	// (0x00039495) main_dialer2_pane_ParamLimits

0xd44a,	// (0x0003df4a) main_cam6_pane

0xd44a,	// (0x0003df4a) main_vid6_pane

0x9658,	// (0x0003a158) listscroll_gen_pane_cp06_ParamLimits

0x9658,	// (0x0003a158) listscroll_gen_pane_cp06

0x971f,	// (0x0003a21f) main_clock2_pane_t5_ParamLimits

0x971f,	// (0x0003a21f) main_clock2_pane_t5

0x976c,	// (0x0003a26c) aid_call2_pane_cp10_ParamLimits

0x977e,	// (0x0003a27e) aid_call_pane_cp10_ParamLimits

0xe619,	// (0x0003f119) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe619,	// (0x0003f119) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9790,	// (0x0003a290) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9790,	// (0x0003a290) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe619,	// (0x0003f119) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x00040261) popup_clock_analogue_window_cp10_g_ParamLimits

0x97a6,	// (0x0003a2a6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9e97,	// (0x0003a997) cell_dialer2_keypad_pane_g2_ParamLimits

0x9e97,	// (0x0003a997) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x00040346) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x00040346) cell_dialer2_keypad_pane_g

0x9eb3,	// (0x0003a9b3) cell_dialer2_keypad_pane_t1

0xa92c,	// (0x0003b42c) main_cset_text2_pane_ParamLimits

0xa92c,	// (0x0003b42c) main_cset_text2_pane

0x240c,	// (0x00032f0c) area_vitu2_query_pane_g1_ParamLimits

0x4fec,	// (0x00035aec) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x000404f1) area_vitu2_query_pane_g_ParamLimits

0x509d,	// (0x00035b9d) area_vitu2_query_pane_t7_ParamLimits

0x509d,	// (0x00035b9d) area_vitu2_query_pane_t7

0xb0e1,	// (0x0003bbe1) bg_button_pane_cp018_ParamLimits

0xb0ef,	// (0x0003bbef) bg_button_pane_cp021_ParamLimits

0x50c1,	// (0x00035bc1) bg_button_pane_cp022_ParamLimits

0x50c1,	// (0x00035bc1) bg_vkb2_func_pane_cp08_ParamLimits

0xb0e1,	// (0x0003bbe1) bg_vkb2_func_pane_cp06_ParamLimits

0xb0ef,	// (0x0003bbef) bg_vkb2_func_pane_cp07_ParamLimits

0x50d2,	// (0x00035bd2) input_focus_pane_cp09_ParamLimits

0xb56c,	// (0x0003c06c) cam6_autofocus_pane_ParamLimits

0xb56c,	// (0x0003c06c) cam6_autofocus_pane

0xb58e,	// (0x0003c08e) cam6_image_uncrop_pane_ParamLimits

0xb58e,	// (0x0003c08e) cam6_image_uncrop_pane

0xb5bb,	// (0x0003c0bb) cam6_indi_pane_ParamLimits

0xb5bb,	// (0x0003c0bb) cam6_indi_pane

0xb5d5,	// (0x0003c0d5) cam6_mode_pane_ParamLimits

0xb5d5,	// (0x0003c0d5) cam6_mode_pane

0xb5e9,	// (0x0003c0e9) cam6_timer_pane_ParamLimits

0xb5e9,	// (0x0003c0e9) cam6_timer_pane

0xb5f5,	// (0x0003c0f5) cam6_zoom_pane_ParamLimits

0xb5f5,	// (0x0003c0f5) cam6_zoom_pane

0xb611,	// (0x0003c111) cam6_mode_pane_g1_ParamLimits

0xb611,	// (0x0003c111) cam6_mode_pane_g1

0xb61d,	// (0x0003c11d) cam6_mode_pane_g2_ParamLimits

0xb61d,	// (0x0003c11d) cam6_mode_pane_g2

0xb629,	// (0x0003c129) cam6_mode_pane_g3_ParamLimits

0xb629,	// (0x0003c129) cam6_mode_pane_g3

0xb635,	// (0x0003c135) cam6_mode_pane_g4_ParamLimits

0xb635,	// (0x0003c135) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x000405d2) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x000405d2) cam6_mode_pane_g

0x278f,	// (0x0003328f) bg_tb_trans_pane_cp08_ParamLimits

0x278f,	// (0x0003328f) bg_tb_trans_pane_cp08

0x279d,	// (0x0003329d) cam6_battery_pane_ParamLimits

0x279d,	// (0x0003329d) cam6_battery_pane

0x27b3,	// (0x000332b3) cam6_indi_pane_g1_ParamLimits

0x27b3,	// (0x000332b3) cam6_indi_pane_g1

0x27c5,	// (0x000332c5) cam6_indi_pane_g2_ParamLimits

0x27c5,	// (0x000332c5) cam6_indi_pane_g2

0x27d7,	// (0x000332d7) cam6_indi_pane_g3_ParamLimits

0x27d7,	// (0x000332d7) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x000405db) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x000405db) cam6_indi_pane_g

0x27e9,	// (0x000332e9) cam6_indi_pane_t1_ParamLimits

0x27e9,	// (0x000332e9) cam6_indi_pane_t1

0xa443,	// (0x0003af43) cam6_autofocus_pane_g1

0xa44b,	// (0x0003af4b) cam6_autofocus_pane_g2

0xa453,	// (0x0003af53) cam6_autofocus_pane_g3

0xa45b,	// (0x0003af5b) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x000405e2) cam6_autofocus_pane_g

0x280f,	// (0x0003330f) cam6_timer_pane_g1

0x2817,	// (0x00033317) cam6_timer_pane_t1

0x2825,	// (0x00033325) cam6_zoom_cont_pane

0x282d,	// (0x0003332d) cam6_zoom_pane_g1

0x2835,	// (0x00033335) cam6_zoom_pane_g2

0xb641,	// (0x0003c141) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x000405eb) cam6_zoom_pane_g

0xddc6,	// (0x0003e8c6) cam6_battery_pane_g1

0xddc6,	// (0x0003e8c6) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x0003fedd) cam6_battery_pane_g

0x283d,	// (0x0003333d) cam6_zoom_cont_pane_g1

0x2846,	// (0x00033346) cam6_zoom_cont_pane_g2

0x284f,	// (0x0003334f) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x000405f2) cam6_zoom_cont_pane_g

0xb65e,	// (0x0003c15e) cam6_mode_pane_cp_ParamLimits

0xb65e,	// (0x0003c15e) cam6_mode_pane_cp

0xb5f5,	// (0x0003c0f5) cam6_zoom_pane_cp_ParamLimits

0xb5f5,	// (0x0003c0f5) cam6_zoom_pane_cp

0xb672,	// (0x0003c172) vid6_image_uncrop_cif_pane_ParamLimits

0xb672,	// (0x0003c172) vid6_image_uncrop_cif_pane

0xb69e,	// (0x0003c19e) vid6_image_uncrop_nhd_pane_ParamLimits

0xb69e,	// (0x0003c19e) vid6_image_uncrop_nhd_pane

0xb58e,	// (0x0003c08e) vid6_image_uncrop_vga_pane_ParamLimits

0xb58e,	// (0x0003c08e) vid6_image_uncrop_vga_pane

0xb6bd,	// (0x0003c1bd) vid6_image_uncrop_wvga_pane_ParamLimits

0xb6bd,	// (0x0003c1bd) vid6_image_uncrop_wvga_pane

0xb6dc,	// (0x0003c1dc) vid6_indi_pane_ParamLimits

0xb6dc,	// (0x0003c1dc) vid6_indi_pane

0x278f,	// (0x0003328f) bg_tb_trans_pane_cp09_ParamLimits

0x278f,	// (0x0003328f) bg_tb_trans_pane_cp09

0x2867,	// (0x00033367) cam6_battery_pane_cp_ParamLimits

0x2867,	// (0x00033367) cam6_battery_pane_cp

0x2873,	// (0x00033373) vid6_indi_pane_g1_ParamLimits

0x2873,	// (0x00033373) vid6_indi_pane_g1

0x2885,	// (0x00033385) vid6_indi_pane_g2_ParamLimits

0x2885,	// (0x00033385) vid6_indi_pane_g2

0x2897,	// (0x00033397) vid6_indi_pane_g3_ParamLimits

0x2897,	// (0x00033397) vid6_indi_pane_g3

0x28ae,	// (0x000333ae) vid6_indi_pane_g4_ParamLimits

0x28ae,	// (0x000333ae) vid6_indi_pane_g4

0x28c5,	// (0x000333c5) vid6_indi_pane_g5_ParamLimits

0x28c5,	// (0x000333c5) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x000405f9) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x000405f9) vid6_indi_pane_g

0x28df,	// (0x000333df) vid6_indi_pane_t1_ParamLimits

0x28df,	// (0x000333df) vid6_indi_pane_t1

0x28f5,	// (0x000333f5) vid6_indi_pane_t2_ParamLimits

0x28f5,	// (0x000333f5) vid6_indi_pane_t2

0x291d,	// (0x0003341d) vid6_indi_pane_t3_ParamLimits

0x291d,	// (0x0003341d) vid6_indi_pane_t3

0x2945,	// (0x00033445) vid6_indi_pane_t4_ParamLimits

0x2945,	// (0x00033445) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x00040604) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x00040604) vid6_indi_pane_t

0x2969,	// (0x00033469) wait_bar_pane_cp08

0xb701,	// (0x0003c201) main_cset_text2_pane_t1_ParamLimits

0xb701,	// (0x0003c201) main_cset_text2_pane_t1

0xb649,	// (0x0003c149) listscroll_gen_pane_cp06_t1_ParamLimits

0xb649,	// (0x0003c149) listscroll_gen_pane_cp06_t1

0xd44a,	// (0x0003df4a) main_cam6_set_pane

0xdb80,	// (0x0003e680) bg_tb_trans_pane_cp06_ParamLimits

0xa2f1,	// (0x0003adf1) cam4_indicators_pane_g1_ParamLimits

0xa302,	// (0x0003ae02) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x00040383) cam4_indicators_pane_g_ParamLimits

0xa31a,	// (0x0003ae1a) cam4_indicators_pane_t1_ParamLimits

0xdb27,	// (0x0003e627) bg_tb_trans_pane_cp07_ParamLimits

0xa3d1,	// (0x0003aed1) vid4_indicators_pane_g1_ParamLimits

0xa3e7,	// (0x0003aee7) vid4_indicators_pane_g2_ParamLimits

0xa3fb,	// (0x0003aefb) vid4_indicators_pane_g3_ParamLimits

0xa40e,	// (0x0003af0e) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x00040395) vid4_indicators_pane_g_ParamLimits

0xa42c,	// (0x0003af2c) vid4_indicators_pane_t1_ParamLimits

0xb213,	// (0x0003bd13) vid4_progress_pane_g1_ParamLimits

0xb223,	// (0x0003bd23) vid4_progress_pane_g2_ParamLimits

0xb233,	// (0x0003bd33) vid4_progress_pane_g3_ParamLimits

0xb245,	// (0x0003bd45) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x0004053c) vid4_progress_pane_g_ParamLimits

0xb263,	// (0x0003bd63) vid4_progress_pane_t1_ParamLimits

0xb27d,	// (0x0003bd7d) vid4_progress_pane_t2_ParamLimits

0xb292,	// (0x0003bd92) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x00040547) vid4_progress_pane_t_ParamLimits

0xb2a7,	// (0x0003bda7) wait_bar_pane_cp07_ParamLimits

0xb728,	// (0x0003c228) main_cam6_set_pane_g2_ParamLimits

0xb728,	// (0x0003c228) main_cam6_set_pane_g2

0xb734,	// (0x0003c234) main_cset6_listscroll_pane_ParamLimits

0xb734,	// (0x0003c234) main_cset6_listscroll_pane

0xb761,	// (0x0003c261) main_cset6_slider_pane_ParamLimits

0xb761,	// (0x0003c261) main_cset6_slider_pane

0xb76d,	// (0x0003c26d) main_cset6_text2_pane_ParamLimits

0xb76d,	// (0x0003c26d) main_cset6_text2_pane

0x2978,	// (0x00033478) main_cset6_text_pane

0x2980,	// (0x00033480) main_cset_list_pane_copy1_ParamLimits

0x2980,	// (0x00033480) main_cset_list_pane_copy1

0x2990,	// (0x00033490) scroll_pane_cp028_copy1

0xb780,	// (0x0003c280) cset_list_set_pane_copy1

0xb790,	// (0x0003c290) aid_position_infowindow_above_copy1

0xb798,	// (0x0003c298) aid_position_infowindow_below_copy1

0x5110,	// (0x00035c10) cset_list_set_pane_g1_copy1

0x5118,	// (0x00035c18) cset_list_set_pane_g3_copy1_ParamLimits

0x5118,	// (0x00035c18) cset_list_set_pane_g3_copy1

0x5127,	// (0x00035c27) cset_list_set_pane_t1_copy1_ParamLimits

0x5127,	// (0x00035c27) cset_list_set_pane_t1_copy1

0xdb27,	// (0x0003e627) list_highlight_pane_cp021_copy1_ParamLimits

0xdb27,	// (0x0003e627) list_highlight_pane_cp021_copy1

0x2999,	// (0x00033499) cset6_slider_pane_ParamLimits

0x2999,	// (0x00033499) cset6_slider_pane

0x29c5,	// (0x000334c5) main_cset6_slider_pane_g1_ParamLimits

0x29c5,	// (0x000334c5) main_cset6_slider_pane_g1

0xb7a0,	// (0x0003c2a0) main_cset6_slider_pane_g2_ParamLimits

0xb7a0,	// (0x0003c2a0) main_cset6_slider_pane_g2

0x29ed,	// (0x000334ed) main_cset6_slider_pane_g3_ParamLimits

0x29ed,	// (0x000334ed) main_cset6_slider_pane_g3

0xb7c8,	// (0x0003c2c8) main_cset6_slider_pane_g4_ParamLimits

0xb7c8,	// (0x0003c2c8) main_cset6_slider_pane_g4

0xb7d4,	// (0x0003c2d4) main_cset6_slider_pane_g5_ParamLimits

0xb7d4,	// (0x0003c2d4) main_cset6_slider_pane_g5

0x2081,	// (0x00032b81) main_cset6_slider_pane_g7_ParamLimits

0x2081,	// (0x00032b81) main_cset6_slider_pane_g7

0x208d,	// (0x00032b8d) main_cset6_slider_pane_g8_ParamLimits

0x208d,	// (0x00032b8d) main_cset6_slider_pane_g8

0xb7e0,	// (0x0003c2e0) main_cset6_slider_pane_g9_ParamLimits

0xb7e0,	// (0x0003c2e0) main_cset6_slider_pane_g9

0xb7ec,	// (0x0003c2ec) main_cset6_slider_pane_g10_ParamLimits

0xb7ec,	// (0x0003c2ec) main_cset6_slider_pane_g10

0xb7f8,	// (0x0003c2f8) main_cset6_slider_pane_g11_ParamLimits

0xb7f8,	// (0x0003c2f8) main_cset6_slider_pane_g11

0xb804,	// (0x0003c304) main_cset6_slider_pane_g12_ParamLimits

0xb804,	// (0x0003c304) main_cset6_slider_pane_g12

0xb810,	// (0x0003c310) main_cset6_slider_pane_g13_ParamLimits

0xb810,	// (0x0003c310) main_cset6_slider_pane_g13

0xb81c,	// (0x0003c31c) main_cset6_slider_pane_g14_ParamLimits

0xb81c,	// (0x0003c31c) main_cset6_slider_pane_g14

0xb828,	// (0x0003c328) main_cset6_slider_pane_g15_ParamLimits

0xb828,	// (0x0003c328) main_cset6_slider_pane_g15

0xb840,	// (0x0003c340) main_cset6_slider_pane_g16_ParamLimits

0xb840,	// (0x0003c340) main_cset6_slider_pane_g16

0xb84c,	// (0x0003c34c) main_cset6_slider_pane_g17_ParamLimits

0xb84c,	// (0x0003c34c) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x0004060d) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x0004060d) main_cset6_slider_pane_g

0x29f9,	// (0x000334f9) main_cset6_slider_pane_t1_ParamLimits

0x29f9,	// (0x000334f9) main_cset6_slider_pane_t1

0xb870,	// (0x0003c370) main_cset6_slider_pane_t2_ParamLimits

0xb870,	// (0x0003c370) main_cset6_slider_pane_t2

0xb89b,	// (0x0003c39b) main_cset6_slider_pane_t3_ParamLimits

0xb89b,	// (0x0003c39b) main_cset6_slider_pane_t3

0xb8c6,	// (0x0003c3c6) main_cset6_slider_pane_t4_ParamLimits

0xb8c6,	// (0x0003c3c6) main_cset6_slider_pane_t4

0xb8f1,	// (0x0003c3f1) main_cset6_slider_pane_t5_ParamLimits

0xb8f1,	// (0x0003c3f1) main_cset6_slider_pane_t5

0x2a3a,	// (0x0003353a) main_cset6_slider_pane_t7_ParamLimits

0x2a3a,	// (0x0003353a) main_cset6_slider_pane_t7

0xb91c,	// (0x0003c41c) main_cset6_slider_pane_t8_ParamLimits

0xb91c,	// (0x0003c41c) main_cset6_slider_pane_t8

0xb940,	// (0x0003c440) main_cset6_slider_pane_t9_ParamLimits

0xb940,	// (0x0003c440) main_cset6_slider_pane_t9

0xb964,	// (0x0003c464) main_cset6_slider_pane_t10_ParamLimits

0xb964,	// (0x0003c464) main_cset6_slider_pane_t10

0xb988,	// (0x0003c488) main_cset6_slider_pane_t11_ParamLimits

0xb988,	// (0x0003c488) main_cset6_slider_pane_t11

0x2a70,	// (0x00033570) main_cset6_slider_pane_t14_ParamLimits

0x2a70,	// (0x00033570) main_cset6_slider_pane_t14

0x2aa9,	// (0x000335a9) main_cset6_slider_pane_t15_ParamLimits

0x2aa9,	// (0x000335a9) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x00040632) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x00040632) main_cset6_slider_pane_t

0x2ae2,	// (0x000335e2) cset_slider_pane_g1_copy1

0x2aeb,	// (0x000335eb) cset_slider_pane_g2_copy1

0x2af4,	// (0x000335f4) cset_slider_pane_g3_copy1

0xd44a,	// (0x0003df4a) bg_popup_sub_pane_cp011_copy1

0x2b06,	// (0x00033606) main_cset_text_pane_g1_copy1

0x2228,	// (0x00032d28) main_cset_text_pane_t1_copy1

0x2236,	// (0x00032d36) main_cset_text_pane_t2_copy1

0x2244,	// (0x00032d44) main_cset_text_pane_t3_copy1

0x2252,	// (0x00032d52) main_cset_text_pane_t4_copy1

0x2260,	// (0x00032d60) main_cset_text_pane_t5_copy1

0x2b0e,	// (0x0003360e) main_cset_text_pane_t6_copy1

0x2b1c,	// (0x0003361c) main_cset_text_pane_t7_copy1

0xb9ac,	// (0x0003c4ac) main_cset_text2_pane_t1_copy1

0xdb27,	// (0x0003e627) main_ncimui_pane

0x89fa,	// (0x000394fa) popup_query_ncimui_window_ParamLimits

0x89fa,	// (0x000394fa) popup_query_ncimui_window

0x4d5c,	// (0x0003585c) field_cale_ev2_pane_g4_ParamLimits

0x4d5c,	// (0x0003585c) field_cale_ev2_pane_g4

0x9b6f,	// (0x0003a66f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9b6f,	// (0x0003a66f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x0004031d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x0004031d) cell_video_dialer_keypad_pane_g

0x9b87,	// (0x0003a687) cell_video_dialer_keypad_pane_t1

0xd44a,	// (0x0003df4a) bg_popup_window_pane_cp012

0x0c81,	// (0x00031781) heading_pane_cp06

0x2b48,	// (0x00033648) ncim_query_content_pane

0xd44a,	// (0x0003df4a) bg_popup_heading_pane_cp01

0x2b50,	// (0x00033650) ncim_heading_pane_t1

0x2b5e,	// (0x0003365e) ncim_indicator_popup_pane

0x2b70,	// (0x00033670) ncim_query_button_pane

0x2b86,	// (0x00033686) ncim_query_content_pane_t1

0x2b98,	// (0x00033698) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x00040676) ncim_query_content_pane_t

0x2bd2,	// (0x000336d2) ncim_query_list_pane

0x2be4,	// (0x000336e4) ncim_query_popup_pane

0x2b5e,	// (0x0003365e) ncim_indicator_popup_pane_ParamLimits

0xbb08,	// (0x0003c608) ncim_query_content_pane_g1_ParamLimits

0xbb08,	// (0x0003c608) ncim_query_content_pane_g1

0x2b86,	// (0x00033686) ncim_query_content_pane_t1_ParamLimits

0x2b98,	// (0x00033698) ncim_query_content_pane_t2_ParamLimits

0xbb14,	// (0x0003c614) ncim_query_content_pane_t3_ParamLimits

0xbb14,	// (0x0003c614) ncim_query_content_pane_t3

0xbb31,	// (0x0003c631) ncim_query_content_pane_t4_ParamLimits

0xbb31,	// (0x0003c631) ncim_query_content_pane_t4

0xbb4e,	// (0x0003c64e) ncim_query_content_pane_t5_ParamLimits

0xbb4e,	// (0x0003c64e) ncim_query_content_pane_t5

0x2baa,	// (0x000336aa) ncim_query_content_pane_t6_ParamLimits

0x2baa,	// (0x000336aa) ncim_query_content_pane_t6

0xfb76,	// (0x00040676) ncim_query_content_pane_t_ParamLimits

0x2bd2,	// (0x000336d2) ncim_query_list_pane_ParamLimits

0x2be4,	// (0x000336e4) ncim_query_popup_pane_ParamLimits

0x2bf8,	// (0x000336f8) wait_bar_pane_cp04

0xd44a,	// (0x0003df4a) input_focus_pane_cp011

0x2c00,	// (0x00033700) ncim_query_popup_pane_t1

0x2c0e,	// (0x0003370e) ncim_list_query_list_pane_ParamLimits

0x2c0e,	// (0x0003370e) ncim_list_query_list_pane

0xd44a,	// (0x0003df4a) bg_button_pane_cp027

0x2c21,	// (0x00033721) ncim_query_button_pane_g1

0xd44a,	// (0x0003df4a) list_highlight_pane_cp012

0x2c2b,	// (0x0003372b) ncim_list_query_list_pane_g1

0x2c33,	// (0x00033733) ncim_list_query_list_pane_t1

0xa30e,	// (0x0003ae0e) cam4_indicators_pane_g3_ParamLimits

0xa30e,	// (0x0003ae0e) cam4_indicators_pane_g3

0xa41a,	// (0x0003af1a) vid4_indicators_pane_g5_ParamLimits

0xa41a,	// (0x0003af1a) vid4_indicators_pane_g5

0xb254,	// (0x0003bd54) vid4_progress_pane_g5_ParamLimits

0xb254,	// (0x0003bd54) vid4_progress_pane_g5

0xb9de,	// (0x0003c4de) main_ncimui_pane_g1

0xba4a,	// (0x0003c54a) ncimui_group_query_pane_ParamLimits

0xba4a,	// (0x0003c54a) ncimui_group_query_pane

0xbaa4,	// (0x0003c5a4) ncimui_list_pane_ParamLimits

0xbaa4,	// (0x0003c5a4) ncimui_list_pane

0xbacb,	// (0x0003c5cb) ncimui_text_pane_ParamLimits

0xbacb,	// (0x0003c5cb) ncimui_text_pane

0xbb6b,	// (0x0003c66b) ncimui_text_pane_t1_ParamLimits

0xbb6b,	// (0x0003c66b) ncimui_text_pane_t1

0x2c41,	// (0x00033741) ncimui_list_single_graphic_pane_ParamLimits

0x2c41,	// (0x00033741) ncimui_list_single_graphic_pane

0xbb8a,	// (0x0003c68a) ncimui_query_pane_ParamLimits

0xbb8a,	// (0x0003c68a) ncimui_query_pane

0xd44a,	// (0x0003df4a) list_highlight_pane_cp013

0x2c51,	// (0x00033751) ncim_list_query_list_pane_t1_copy1

0x2c2b,	// (0x0003372b) ncim_list_single_graphic_pane_g1

0xbb9d,	// (0x0003c69d) ncim_query_button_pane_cp01

0xbba9,	// (0x0003c6a9) ncim_query_entry_pane_ParamLimits

0xbba9,	// (0x0003c6a9) ncim_query_entry_pane

0xbbbc,	// (0x0003c6bc) ncimui_query_pane_g1

0xbbc8,	// (0x0003c6c8) ncimui_query_pane_t1_ParamLimits

0xbbc8,	// (0x0003c6c8) ncimui_query_pane_t1

0xdb27,	// (0x0003e627) input_focus_pane_cp012

0x2c5f,	// (0x0003375f) ncim_query_entry_pane_t1

0xdbf2,	// (0x0003e6f2) main_im_pane_ParamLimits

0xdb27,	// (0x0003e627) main_mobtv_pane_ParamLimits

0xdb27,	// (0x0003e627) main_mobtv_pane

0xb858,	// (0x0003c358) main_cset6_slider_pane_g18_ParamLimits

0xb858,	// (0x0003c358) main_cset6_slider_pane_g18

0xb864,	// (0x0003c364) main_cset6_slider_pane_g19_ParamLimits

0xb864,	// (0x0003c364) main_cset6_slider_pane_g19

0xf028,	// (0x0003fb28) bg_main_mobtv_pane_ParamLimits

0xf028,	// (0x0003fb28) bg_main_mobtv_pane

0xbbe1,	// (0x0003c6e1) main_mobtv_info_pane

0xbbec,	// (0x0003c6ec) main_mobtv_loading_pane_ParamLimits

0xbbec,	// (0x0003c6ec) main_mobtv_loading_pane

0x2c71,	// (0x00033771) main_mobtv_pg_channel_list_pane

0x2c7b,	// (0x0003377b) main_mobtv_pg_hdr_pane

0xbbf9,	// (0x0003c6f9) main_mobtv_programe_curr_pane_ParamLimits

0xbbf9,	// (0x0003c6f9) main_mobtv_programe_curr_pane

0xbc06,	// (0x0003c706) main_mobtv_programe_next_pane_ParamLimits

0xbc06,	// (0x0003c706) main_mobtv_programe_next_pane

0x2c84,	// (0x00033784) popup_mobtv_noti_window

0xddc6,	// (0x0003e8c6) main_tv_pg_hdr_pane_g1

0x2c8e,	// (0x0003378e) main_tv_pg_hdr_pane_g2

0x2c96,	// (0x00033796) main_tv_pg_hdr_pane_g3

0x2c9e,	// (0x0003379e) main_tv_pg_hdr_pane_g4

0x2ca6,	// (0x000337a6) main_tv_pg_hdr_pane_g5

0x2cb0,	// (0x000337b0) main_tv_pg_hdr_pane_g6

0x2cba,	// (0x000337ba) main_tv_pg_hdr_pane_g7

0x2cc4,	// (0x000337c4) main_tv_pg_hdr_pane_g8

0x2cce,	// (0x000337ce) main_tv_pg_hdr_pane_g9

0x2cd8,	// (0x000337d8) main_tv_pg_hdr_pane_g10

0x2ce2,	// (0x000337e2) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x00040683) main_tv_pg_hdr_pane_g

0x2cec,	// (0x000337ec) main_tv_pg_hdr_pane_t1

0x2cfa,	// (0x000337fa) main_tv_pg_hdr_pane_t2

0x2d08,	// (0x00033808) main_tv_pg_hdr_pane_t3

0x2d18,	// (0x00033818) main_tv_pg_hdr_pane_t4

0x2d28,	// (0x00033828) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x0004069a) main_tv_pg_hdr_pane_t

0x2d38,	// (0x00033838) single_mobtv_pg_channel_pane_ParamLimits

0x2d38,	// (0x00033838) single_mobtv_pg_channel_pane

0x2d4a,	// (0x0003384a) single_mobtv_pg_channel_table_pane

0x2d53,	// (0x00033853) single_mobtv_pg_channel_thumb_pane

0x2d5c,	// (0x0003385c) single_tv_pg_channel_pane_g1

0x2d65,	// (0x00033865) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x000406a5) single_tv_pg_channel_pane_g

0xdb80,	// (0x0003e680) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xdb80,	// (0x0003e680) bg_single_mobtv_pg_channel_thumb_pane

0x2d6e,	// (0x0003386e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2d6e,	// (0x0003386e) single_mobtv_pg_channel_thumb_pane_g1

0x2d7c,	// (0x0003387c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2d7c,	// (0x0003387c) single_mobtv_pg_channel_thumb_pane_g2

0x2d88,	// (0x00033888) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2d88,	// (0x00033888) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x000406aa) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x000406aa) single_mobtv_pg_channel_thumb_pane_g

0x2d94,	// (0x00033894) single_mobtv_pg_channel_thumb_pane_t1

0x2da2,	// (0x000338a2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x000406b1) single_mobtv_pg_channel_thumb_pane_t

0xddc6,	// (0x0003e8c6) bg_single_mobtv_pg_channel_table_pane_g1

0xddc6,	// (0x0003e8c6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x0003fedd) bg_single_mobtv_pg_channel_table_pane_g

0x2db0,	// (0x000338b0) single_mobtv_pg_channel_table_pane_t1

0x2dbe,	// (0x000338be) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x000406b6) single_mobtv_pg_channel_table_pane_t

0xbc1b,	// (0x0003c71b) main_mobtv_info_pane_g1_ParamLimits

0xbc1b,	// (0x0003c71b) main_mobtv_info_pane_g1

0xbc37,	// (0x0003c737) main_mobtv_info_pane_t1_ParamLimits

0xbc37,	// (0x0003c737) main_mobtv_info_pane_t1

0xbcaf,	// (0x0003c7af) main_mobtv_info_pane_t2_ParamLimits

0xbcaf,	// (0x0003c7af) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x000406c0) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x000406c0) main_mobtv_info_pane_t

0xbd40,	// (0x0003c840) wait_bar_pane_cp05

0xbd52,	// (0x0003c852) main_mobtv_loading_pane_g1_ParamLimits

0xbd52,	// (0x0003c852) main_mobtv_loading_pane_g1

0xbd5e,	// (0x0003c85e) main_mobtv_loading_pane_g2_ParamLimits

0xbd5e,	// (0x0003c85e) main_mobtv_loading_pane_g2

0xbd6a,	// (0x0003c86a) main_mobtv_loading_pane_g3_ParamLimits

0xbd6a,	// (0x0003c86a) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x000406c7) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x000406c7) main_mobtv_loading_pane_g

0x2dcc,	// (0x000338cc) main_mobtv_loading_pane_t1_ParamLimits

0x2dcc,	// (0x000338cc) main_mobtv_loading_pane_t1

0x2de4,	// (0x000338e4) main_mobtv_loading_pane_t2_ParamLimits

0x2de4,	// (0x000338e4) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x000406ce) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x000406ce) main_mobtv_loading_pane_t

0xbd78,	// (0x0003c878) wait_bar_pane_cp06_ParamLimits

0xbd78,	// (0x0003c878) wait_bar_pane_cp06

0x2e08,	// (0x00033908) main_mobtv_programe_curr_pane_t1

0x2e16,	// (0x00033916) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x000406d3) main_mobtv_programe_curr_pane_t

0x2e24,	// (0x00033924) main_mobtv_programe_next_pane_t1

0x2e32,	// (0x00033932) main_mobtv_programe_next_pane_t2

0x2e40,	// (0x00033940) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x000406d8) main_mobtv_programe_next_pane_t

0xd44a,	// (0x0003df4a) bg_popup_mobtv_noti_window_pane

0x2e4e,	// (0x0003394e) popup_mobtv_noti_window_g1

0x2e56,	// (0x00033956) popup_mobtv_noti_window_t1

0x2e64,	// (0x00033964) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x000406df) popup_mobtv_noti_window_t

0xddc6,	// (0x0003e8c6) bg_popup_mobtv_noti_window_pane_g1

0xd44a,	// (0x0003df4a) sc_clock_pane

0xd44a,	// (0x0003df4a) main_fs_bigclock_pane

0xb41b,	// (0x0003bf1b) blid2_tripm_pane_t4_ParamLimits

0xb41b,	// (0x0003bf1b) blid2_tripm_pane_t4

0xbd84,	// (0x0003c884) sc_clock_pane_g1_ParamLimits

0xbd84,	// (0x0003c884) sc_clock_pane_g1

0xbd92,	// (0x0003c892) sc_clock_pane_t1_ParamLimits

0xbd92,	// (0x0003c892) sc_clock_pane_t1

0xbda7,	// (0x0003c8a7) sc_clock_pane_t2_ParamLimits

0xbda7,	// (0x0003c8a7) sc_clock_pane_t2

0xbdb9,	// (0x0003c8b9) sc_clock_pane_t3_ParamLimits

0xbdb9,	// (0x0003c8b9) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x000406e4) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x000406e4) sc_clock_pane_t

0xc7a5,	// (0x0003d2a5) main_fs_bigclock_indicator_pane_ParamLimits

0xc7a5,	// (0x0003d2a5) main_fs_bigclock_indicator_pane

0xbe48,	// (0x0003c948) main_fs_bigclock_pane_g1_ParamLimits

0xbe48,	// (0x0003c948) main_fs_bigclock_pane_g1

0xc7b1,	// (0x0003d2b1) main_fs_bigclock_pane_t1_ParamLimits

0xc7b1,	// (0x0003d2b1) main_fs_bigclock_pane_t1

0xc7c3,	// (0x0003d2c3) main_fs_bigclock_pane_t2_ParamLimits

0xc7c3,	// (0x0003d2c3) main_fs_bigclock_pane_t2

0xc7d7,	// (0x0003d2d7) main_fs_bigclock_pane_t3_ParamLimits

0xc7d7,	// (0x0003d2d7) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x00040875) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x00040875) main_fs_bigclock_pane_t

0x38ff,	// (0x000343ff) main_fs_bigclock_indicator_pane_g1

0x2b78,	// (0x00033678) ncim_query_content_pane_g2_ParamLimits

0x2b78,	// (0x00033678) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x00040671) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x00040671) ncim_query_content_pane_g

0xbdcb,	// (0x0003c8cb) sc_clock_pane_t4_ParamLimits

0xbdcb,	// (0x0003c8cb) sc_clock_pane_t4

0xdb27,	// (0x0003e627) main_radioblah_pane

0xa1b2,	// (0x0003acb2) cell_call4_button_pane_t1_copy1_ParamLimits

0xa1b2,	// (0x0003acb2) cell_call4_button_pane_t1_copy1

0xb9fa,	// (0x0003c4fa) main_ncimui_pane_t1_ParamLimits

0xb9fa,	// (0x0003c4fa) main_ncimui_pane_t1

0xba14,	// (0x0003c514) main_ncimui_pane_t2_ParamLimits

0xba14,	// (0x0003c514) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x0004066a) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x0004066a) main_ncimui_pane_t

0x2e72,	// (0x00033972) main_radioblah_anim_pane_ParamLimits

0x2e72,	// (0x00033972) main_radioblah_anim_pane

0x2e83,	// (0x00033983) main_radioblah_info_pane_ParamLimits

0x2e83,	// (0x00033983) main_radioblah_info_pane

0x2e97,	// (0x00033997) main_radioblah_pane_t1_ParamLimits

0x2e97,	// (0x00033997) main_radioblah_pane_t1

0x2eb3,	// (0x000339b3) main_radioblah_pane_t2_ParamLimits

0x2eb3,	// (0x000339b3) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x00040705) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x00040705) main_radioblah_pane_t

0xbfe7,	// (0x0003cae7) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbfe7,	// (0x0003cae7) main_radioblah_rocker_ctrl_pane

0x2efb,	// (0x000339fb) main_radioblah_info_pane_t1_ParamLimits

0x2efb,	// (0x000339fb) main_radioblah_info_pane_t1

0xc030,	// (0x0003cb30) main_radioblah_info_pane_t2_ParamLimits

0xc030,	// (0x0003cb30) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x0004070e) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x0004070e) main_radioblah_info_pane_t

0xddc6,	// (0x0003e8c6) main_radioblah_rocker_ctrl_pane_g1

0xc0e0,	// (0x0003cbe0) main_radioblah_rocker_ctrl_pane_g2

0xc0e8,	// (0x0003cbe8) main_radioblah_rocker_ctrl_pane_g3

0xc0f0,	// (0x0003cbf0) main_radioblah_rocker_ctrl_pane_g4

0xc0f8,	// (0x0003cbf8) main_radioblah_rocker_ctrl_pane_g5

0xc100,	// (0x0003cc00) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x00040717) main_radioblah_rocker_ctrl_pane_g

0xb9ac,	// (0x0003c4ac) main_cset_text2_pane_t1_copy1_ParamLimits

0xa23b,	// (0x0003ad3b) cam4_image_uncrop_qvga_pane

0xa380,	// (0x0003ae80) vid4_image_uncrop_qcif_pane

0xb5ad,	// (0x0003c0ad) cam6_image_uncrop_qvga_pane_ParamLimits

0xb5ad,	// (0x0003c0ad) cam6_image_uncrop_qvga_pane

0x2857,	// (0x00033357) vid6_image_uncrop_qcif_pane_ParamLimits

0x2857,	// (0x00033357) vid6_image_uncrop_qcif_pane

0xd44a,	// (0x0003df4a) bg_popup_preview_window_pane_cp03

0x2b2a,	// (0x0003362a) list_cset_text2_pane

0x2b32,	// (0x00033632) main_cset6_text2_pane_g1

0x2b3a,	// (0x0003363a) main_cset6_text2_pane_t1

0xc108,	// (0x0003cc08) list_cset_text2_pane_t1_ParamLimits

0xc108,	// (0x0003cc08) list_cset_text2_pane_t1

0xdb27,	// (0x0003e627) main_radioblah_pane_ParamLimits

0xbd2c,	// (0x0003c82c) main_mobtv_info_pane_t3_ParamLimits

0xbd2c,	// (0x0003c82c) main_mobtv_info_pane_t3

0xbfd5,	// (0x0003cad5) main_radioblah_pane_g1

0xc000,	// (0x0003cb00) main_radioblah_info_pane_g1

0xc085,	// (0x0003cb85) main_radioblah_info_pane_t3_ParamLimits

0xc085,	// (0x0003cb85) main_radioblah_info_pane_t3

0x7921,	// (0x00038421) highlight_cell_cale_month_pane_ParamLimits

0x7921,	// (0x00038421) highlight_cell_cale_month_pane

0xd44a,	// (0x0003df4a) main_phob_fisheye_pane

0x1553,	// (0x00032053) scroll_pane_cp0031_ParamLimits

0x1553,	// (0x00032053) scroll_pane_cp0031

0x2969,	// (0x00033469) wait_bar_pane_cp08_ParamLimits

0xb780,	// (0x0003c280) cset_list_set_pane_copy1_ParamLimits

0x2f4f,	// (0x00033a4f) highlight_cell_cale_month_pane_g1

0xc11f,	// (0x0003cc1f) highlight_cell_cale_month_pane_t1

0x24fc,	// (0x00032ffc) list_gen_pane_cp01

0x206c,	// (0x00032b6c) scroll_pane_01

0xc12d,	// (0x0003cc2d) list_single_double_fisheye_pane

0x5159,	// (0x00035c59) list_double_fisheye_pane_g1_ParamLimits

0x5159,	// (0x00035c59) list_double_fisheye_pane_g1

0x5165,	// (0x00035c65) list_double_fisheye_pane_g2_ParamLimits

0x5165,	// (0x00035c65) list_double_fisheye_pane_g2

0x5179,	// (0x00035c79) list_double_fisheye_pane_g3_ParamLimits

0x5179,	// (0x00035c79) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x00040724) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x00040724) list_double_fisheye_pane_g

0x51a2,	// (0x00035ca2) list_double_fisheye_pane_t1_ParamLimits

0x51a2,	// (0x00035ca2) list_double_fisheye_pane_t1

0x51bd,	// (0x00035cbd) list_double_fisheye_pane_t2_ParamLimits

0x51bd,	// (0x00035cbd) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x0004072f) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x0004072f) list_double_fisheye_pane_t

0xd44a,	// (0x0003df4a) main_call5_pane

0xbdf1,	// (0x0003c8f1) sc_swipe_pane_ParamLimits

0xbdf1,	// (0x0003c8f1) sc_swipe_pane

0xc142,	// (0x0003cc42) call5_image_pane_ParamLimits

0xc142,	// (0x0003cc42) call5_image_pane

0xc154,	// (0x0003cc54) call5_swipe_1_pane_ParamLimits

0xc154,	// (0x0003cc54) call5_swipe_1_pane

0xc160,	// (0x0003cc60) call5_swipe_2_pane_ParamLimits

0xc160,	// (0x0003cc60) call5_swipe_2_pane

0xc17a,	// (0x0003cc7a) popup_call5_audio_first_window_ParamLimits

0xc17a,	// (0x0003cc7a) popup_call5_audio_first_window

0xdb80,	// (0x0003e680) call5_swipe_1_pane_g1_ParamLimits

0xdb80,	// (0x0003e680) call5_swipe_1_pane_g1

0x2f57,	// (0x00033a57) call5_swipe_1_pane_g2_ParamLimits

0x2f57,	// (0x00033a57) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x00040734) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x00040734) call5_swipe_1_pane_g

0x2f63,	// (0x00033a63) call5_swipe_1_pane_t1_ParamLimits

0x2f63,	// (0x00033a63) call5_swipe_1_pane_t1

0xdb80,	// (0x0003e680) call5_swipe_2_pane_g1_ParamLimits

0xdb80,	// (0x0003e680) call5_swipe_2_pane_g1

0x2f78,	// (0x00033a78) call5_swipe_2_pane_g2_ParamLimits

0x2f78,	// (0x00033a78) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x00040739) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x00040739) call5_swipe_2_pane_g

0x2f84,	// (0x00033a84) call5_swipe_2_pane_t1_ParamLimits

0x2f84,	// (0x00033a84) call5_swipe_2_pane_t1

0x2f99,	// (0x00033a99) sc_swipe_pane_g1_ParamLimits

0x2f99,	// (0x00033a99) sc_swipe_pane_g1

0x2fa6,	// (0x00033aa6) sc_swipe_pane_g2_ParamLimits

0x2fa6,	// (0x00033aa6) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x0004073e) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x0004073e) sc_swipe_pane_g

0x2fb2,	// (0x00033ab2) sc_swipe_pane_t1_ParamLimits

0x2fb2,	// (0x00033ab2) sc_swipe_pane_t1

0xd44a,	// (0x0003df4a) main_cmail_launcher_pane

0xc18a,	// (0x0003cc8a) aid_size_cell_cmail_l_ParamLimits

0xc18a,	// (0x0003cc8a) aid_size_cell_cmail_l

0xc198,	// (0x0003cc98) grid_cmail_l_pane_ParamLimits

0xc198,	// (0x0003cc98) grid_cmail_l_pane

0xc1a8,	// (0x0003cca8) cell_cmail_l_pane_ParamLimits

0xc1a8,	// (0x0003cca8) cell_cmail_l_pane

0x2fc7,	// (0x00033ac7) cell_cmail_l_pane_g1_ParamLimits

0x2fc7,	// (0x00033ac7) cell_cmail_l_pane_g1

0x2fd3,	// (0x00033ad3) cell_cmail_l_pane_t1_ParamLimits

0x2fd3,	// (0x00033ad3) cell_cmail_l_pane_t1

0x2fe9,	// (0x00033ae9) cell_cmail_l_pane_t2_ParamLimits

0x2fe9,	// (0x00033ae9) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x00040743) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x00040743) cell_cmail_l_pane_t

0xdb27,	// (0x0003e627) grid_highlight_pane_cp018_ParamLimits

0xdb27,	// (0x0003e627) grid_highlight_pane_cp018

0x5ab8,	// (0x000365b8) main2_pane_ParamLimits

0x5ab8,	// (0x000365b8) main2_pane

0xdc81,	// (0x0003e781) popup_sp_fs_action_menu_bg_pane_g1

0xdc89,	// (0x0003e789) popup_sp_fs_action_menu_bg_pane_g2

0xdc91,	// (0x0003e791) popup_sp_fs_action_menu_bg_pane_g3

0xdc99,	// (0x0003e799) popup_sp_fs_action_menu_bg_pane_g4

0xdca1,	// (0x0003e7a1) popup_sp_fs_action_menu_bg_pane_g5

0xdca9,	// (0x0003e7a9) popup_sp_fs_action_menu_bg_pane_g6

0xdcb1,	// (0x0003e7b1) popup_sp_fs_action_menu_bg_pane_g7

0xdcb9,	// (0x0003e7b9) popup_sp_fs_action_menu_bg_pane_g8

0xdcc1,	// (0x0003e7c1) popup_sp_fs_action_menu_bg_pane_g9

0xdcc9,	// (0x0003e7c9) popup_sp_fs_action_menu_bg_pane_g10

0xdcc9,	// (0x0003e7c9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0003fc45) popup_sp_fs_action_menu_bg_pane_g

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g3_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g3_g1

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g3_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g3_g2

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g3_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0003fcf3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0003fcf3) list_medium_line_x2_t3_g3_g

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g3_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g3_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g3_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g3_t2

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g3_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003fcfa) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003fcfa) list_medium_line_x2_t3_g3_t

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g2_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g2_g1

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g2_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0003fd01) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0003fd01) list_medium_line_x2_t3_g2_g

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g2_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g2_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g2_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g2_t2

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g2_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003fcfa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003fcfa) list_medium_line_x2_t3_g2_t

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g4_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g4_g1

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g4_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g4_g2

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g4_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g4_g3

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g4_g4_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0003fd06) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0003fd06) list_medium_line_x2_t4_g4_g

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g4_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g4_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g4_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g4_t2

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g4_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g4_t3

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g4_t4_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0003fd0f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0003fd0f) list_medium_line_x2_t4_g4_t

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g4_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g4_g1

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g4_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g4_g2

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g4_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g4_g3

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g4_g4_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0003fd06) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0003fd06) list_medium_line_x2_t2_g4_g

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g4_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g4_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g4_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0003fd76) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0003fd76) list_medium_line_x2_t2_g4_t

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g3_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g3_g1

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g3_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g3_g2

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g3_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0003fcf3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0003fcf3) list_medium_line_x2_t2_g3_g

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g3_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g3_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g3_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0003fd76) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0003fd76) list_medium_line_x2_t2_g3_t

0x7aca,	// (0x000385ca) main_sp_fs_list_pane_ParamLimits

0x7aca,	// (0x000385ca) main_sp_fs_list_pane

0x7ad6,	// (0x000385d6) sp_fs_scroll_pane_ParamLimits

0x7ad6,	// (0x000385d6) sp_fs_scroll_pane

0xe306,	// (0x0003ee06) list_medium_line_x2_t3_t1

0xe306,	// (0x0003ee06) list_medium_line_x2_t3_t2

0xe306,	// (0x0003ee06) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0003fdc1) list_medium_line_x2_t3_t

0xe306,	// (0x0003ee06) list_medium_line_x3_t4_t1

0xe306,	// (0x0003ee06) list_medium_line_x3_t4_t2

0xe306,	// (0x0003ee06) list_medium_line_x3_t4_t3

0xe306,	// (0x0003ee06) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0003fdc8) list_medium_line_x3_t4_t

0xe306,	// (0x0003ee06) list_medium_line_x4_t5_t1

0xe306,	// (0x0003ee06) list_medium_line_x4_t5_t2

0xe306,	// (0x0003ee06) list_medium_line_x4_t5_t3

0xe306,	// (0x0003ee06) list_medium_line_x4_t5_t4

0xe306,	// (0x0003ee06) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0003fdd1) list_medium_line_x4_t5_t

0xdb80,	// (0x0003e680) list_medium_line_t4_g4_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t4_g4_g1

0xdb80,	// (0x0003e680) list_medium_line_t4_g4_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t4_g4_g2

0xdb80,	// (0x0003e680) list_medium_line_t4_g4_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t4_g4_g3

0xdb80,	// (0x0003e680) list_medium_line_t4_g4_g4_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0003fd06) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0003fd06) list_medium_line_t4_g4_g

0xdde0,	// (0x0003e8e0) list_medium_line_t4_g4_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t4_g4_t1

0xdde0,	// (0x0003e8e0) list_medium_line_t4_g4_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t4_g4_t2

0xdde0,	// (0x0003e8e0) list_medium_line_t4_g4_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t4_g4_t3

0xdde0,	// (0x0003e8e0) list_medium_line_t4_g4_t4_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0003fd0f) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0003fd0f) list_medium_line_t4_g4_t

0x7bcf,	// (0x000386cf) chi_dic_find_pane_g1

0x89af,	// (0x000394af) main_tport_pane

0xe306,	// (0x0003ee06) list_medium_line_plain_t1

0xdb80,	// (0x0003e680) list_medium_line_t2_g2_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t2_g2_g1

0xdb80,	// (0x0003e680) list_medium_line_t2_g2_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0003fd01) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0003fd01) list_medium_line_t2_g2_g

0xdde0,	// (0x0003e8e0) list_medium_line_t2_g2_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t2_g2_t1

0xdde0,	// (0x0003e8e0) list_medium_line_t2_g2_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x0003fd76) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x0003fd76) list_medium_line_t2_g2_t

0x50e3,	// (0x00035be3) aid_sp_fs_list_icon_a_sm

0x50eb,	// (0x00035beb) aid_sp_fs_list_icon_d

0x50f3,	// (0x00035bf3) aid_sp_fs_text_primary

0x345f,	// (0x00033f5f) aid_sp_fs_text_secondary

0xd44a,	// (0x0003df4a) list_medium_line

0xd44a,	// (0x0003df4a) list_medium_line_g2

0xd44a,	// (0x0003df4a) list_medium_line_g3

0xd44a,	// (0x0003df4a) list_medium_line_plain

0xd44a,	// (0x0003df4a) list_medium_line_plain_t2

0xd44a,	// (0x0003df4a) list_medium_line_plain_t3

0xd44a,	// (0x0003df4a) list_medium_line_right_icon

0xd44a,	// (0x0003df4a) list_medium_line_right_iconx2

0xd44a,	// (0x0003df4a) list_medium_line_t2

0xd44a,	// (0x0003df4a) list_medium_line_t2_g2

0xd44a,	// (0x0003df4a) list_medium_line_t2_g3

0xd44a,	// (0x0003df4a) list_medium_line_t2_right_icon

0xd44a,	// (0x0003df4a) list_medium_line_t2_right_iconx2

0xd44a,	// (0x0003df4a) list_medium_line_t3

0xd44a,	// (0x0003df4a) list_medium_line_t3_g2

0xd44a,	// (0x0003df4a) list_medium_line_t3_g3

0xd44a,	// (0x0003df4a) list_medium_line_t3_right_iconx2

0xd44a,	// (0x0003df4a) list_medium_line_t4_g4

0xd44a,	// (0x0003df4a) list_medium_line_x2

0xd44a,	// (0x0003df4a) list_medium_line_x2_t2_g2

0xd44a,	// (0x0003df4a) list_medium_line_x2_t2_g3

0xd44a,	// (0x0003df4a) list_medium_line_x2_t2_g4

0xd44a,	// (0x0003df4a) list_medium_line_x2_t3

0xd44a,	// (0x0003df4a) list_medium_line_x2_t3_g2

0xd44a,	// (0x0003df4a) list_medium_line_x2_t3_g3

0xd44a,	// (0x0003df4a) list_medium_line_x2_t3_g4

0xd44a,	// (0x0003df4a) list_medium_line_x2_t4_g2

0xd44a,	// (0x0003df4a) list_medium_line_x2_t4_g4

0xd44a,	// (0x0003df4a) list_medium_line_x3

0xd44a,	// (0x0003df4a) list_medium_line_x3_t4

0xd44a,	// (0x0003df4a) list_medium_line_x3_t4_g4

0xd44a,	// (0x0003df4a) list_medium_line_x4_t4

0xd44a,	// (0x0003df4a) list_medium_line_x4_t4_g7

0xd44a,	// (0x0003df4a) list_medium_line_x4_t5

0x50fc,	// (0x00035bfc) list_single_fs_dyc_pane_ParamLimits

0x50fc,	// (0x00035bfc) list_single_fs_dyc_pane

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g1

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g2

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g3

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g4

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g5

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x4_t4_g7_g6

0xdb8e,	// (0x0003e68e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdb8e,	// (0x0003e68e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x0004064b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x0004064b) list_medium_line_x4_t4_g7_g

0xdde0,	// (0x0003e8e0) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x4_t4_g7_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x4_t4_g7_t2

0xdde0,	// (0x0003e8e0) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x4_t4_g7_t3

0xdd98,	// (0x0003e898) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdd98,	// (0x0003e898) list_medium_line_x4_t4_g7_t4

0xdd98,	// (0x0003e898) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdd98,	// (0x0003e898) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x0004065a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x0004065a) list_medium_line_x4_t4_g7_t

0x513c,	// (0x00035c3c) list_single_dyc_row_pane_ParamLimits

0x513c,	// (0x00035c3c) list_single_dyc_row_pane

0xc136,	// (0x0003cc36) call5_gesture_pane_ParamLimits

0xc136,	// (0x0003cc36) call5_gesture_pane

0xc16c,	// (0x0003cc6c) call5_windows_pane_ParamLimits

0xc16c,	// (0x0003cc6c) call5_windows_pane

0xc1bd,	// (0x0003ccbd) call5_swipe_1_pane_cp_ParamLimits

0xc1bd,	// (0x0003ccbd) call5_swipe_1_pane_cp

0xc1c9,	// (0x0003ccc9) call5_swipe_2_pane_cp_ParamLimits

0xc1c9,	// (0x0003ccc9) call5_swipe_2_pane_cp

0xdd90,	// (0x0003e890) call5_image_pane_cp

0xc1d5,	// (0x0003ccd5) popup_call5_audio_first_window_cp_ParamLimits

0xc1d5,	// (0x0003ccd5) popup_call5_audio_first_window_cp

0x2f99,	// (0x00033a99) call5_swipe_1_pane_g1_cp_ParamLimits

0x2f99,	// (0x00033a99) call5_swipe_1_pane_g1_cp

0x3006,	// (0x00033b06) call5_swipe_1_pane_g2_cp

0x2fb2,	// (0x00033ab2) call5_swipe_1_pane_t1_cp_ParamLimits

0x2fb2,	// (0x00033ab2) call5_swipe_1_pane_t1_cp

0x2f99,	// (0x00033a99) call5_swipe_2_pane_g1_cp_ParamLimits

0x2f99,	// (0x00033a99) call5_swipe_2_pane_g1_cp

0x300e,	// (0x00033b0e) call5_swipe_2_pane_g2_cp

0x3016,	// (0x00033b16) call5_swipe_2_pane_t1_cp_ParamLimits

0x3016,	// (0x00033b16) call5_swipe_2_pane_t1_cp

0xdb27,	// (0x0003e627) main_sp_fs_email_pane

0x302b,	// (0x00033b2b) main_sp_fs_listscroll_pane_te

0x51df,	// (0x00035cdf) popup_sp_fs_action_menu_pane_ParamLimits

0x51df,	// (0x00035cdf) popup_sp_fs_action_menu_pane

0xddc6,	// (0x0003e8c6) bg_sp_fs_ctrlbar_pane_g1

0x3034,	// (0x00033b34) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x303d,	// (0x00033b3d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3046,	// (0x00033b46) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xddc6,	// (0x0003e8c6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x00040748) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1058,	// (0x00031b58) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1058,	// (0x00031b58) bg_sp_fs_ctrlbar_ddmenu_pane

0x304f,	// (0x00033b4f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x304f,	// (0x00033b4f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x305b,	// (0x00033b5b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x305b,	// (0x00033b5b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x00040751) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x00040751) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3067,	// (0x00033b67) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3067,	// (0x00033b67) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xddc6,	// (0x0003e8c6) list_medium_line_t2_right_icon_g1

0xe306,	// (0x0003ee06) list_medium_line_t2_right_icon_t1

0xe306,	// (0x0003ee06) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x00040756) list_medium_line_t2_right_icon_t

0xf01a,	// (0x0003fb1a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xf01a,	// (0x0003fb1a) bg_sp_fs_ctrlbar_pane

0xc23c,	// (0x0003cd3c) main_sp_fs_ctrlbar_button_pane_cp01

0xc244,	// (0x0003cd44) main_sp_fs_ctrlbar_ddmenu_pane

0x30bb,	// (0x00033bbb) main_sp_fs_ctrlbar_pane_g1

0x30c7,	// (0x00033bc7) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x0004075b) main_sp_fs_ctrlbar_pane_g

0xc282,	// (0x0003cd82) main_sp_fs_ctrlbar_pane_t1

0xc2bf,	// (0x0003cdbf) main_sp_fs_ctrlbar_pane

0xc2d9,	// (0x0003cdd9) main_sp_fs_listscroll_pane_te_cp01

0x5225,	// (0x00035d25) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5225,	// (0x00035d25) popup_sp_fs_action_menu_pane_cp01

0xdb27,	// (0x0003e627) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdb27,	// (0x0003e627) bg_sp_fs_highlight_list_pane_cp01

0x5245,	// (0x00035d45) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5245,	// (0x00035d45) sp_fs_action_menu_list_gene_pane_g1

0x30fd,	// (0x00033bfd) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x30fd,	// (0x00033bfd) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x00040769) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x00040769) sp_fs_action_menu_list_gene_pane_g

0x5254,	// (0x00035d54) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5254,	// (0x00035d54) sp_fs_action_menu_list_gene_pane_t1

0x526c,	// (0x00035d6c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x526c,	// (0x00035d6c) sp_fs_action_menu_list_gene_pane

0x3145,	// (0x00033c45) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3145,	// (0x00033c45) popup_sp_fs_action_menu_bg_pane

0x528f,	// (0x00035d8f) sp_fs_action_menu_list_pane_ParamLimits

0x528f,	// (0x00035d8f) sp_fs_action_menu_list_pane

0xf05f,	// (0x0003fb5f) sp_fs_scroll_pane_cp01_ParamLimits

0xf05f,	// (0x0003fb5f) sp_fs_scroll_pane_cp01

0xe306,	// (0x0003ee06) list_medium_line_plain_t2_t1

0xe306,	// (0x0003ee06) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x00040756) list_medium_line_plain_t2_t

0xe306,	// (0x0003ee06) list_medium_line_plain_t3_t1

0xe306,	// (0x0003ee06) list_medium_line_plain_t3_t2

0xe306,	// (0x0003ee06) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x0003fdc1) list_medium_line_plain_t3_t

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g2_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g2_g1

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g2_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0003fd01) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0003fd01) list_medium_line_x2_t2_g2_g

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g2_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g2_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g2_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0003fd76) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0003fd76) list_medium_line_x2_t2_g2_t

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g2_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g2_g1

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0003fd01) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0003fd01) list_medium_line_x2_t4_g2_g

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g2_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g2_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g2_t2

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g2_t3

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g2_t4_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0003fd0f) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0003fd0f) list_medium_line_x2_t4_g2_t

0xddc6,	// (0x0003e8c6) list_medium_line_t3_right_iconx2_g1

0xddc6,	// (0x0003e8c6) list_medium_line_t3_right_iconx2_g2

0xddc6,	// (0x0003e8c6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x0003fee2) list_medium_line_t3_right_iconx2_g

0xe306,	// (0x0003ee06) list_medium_line_t3_right_iconx2_t1

0xe306,	// (0x0003ee06) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x00040756) list_medium_line_t3_right_iconx2_t

0xdb80,	// (0x0003e680) list_medium_line_x3_t4_g4_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x3_t4_g4_g1

0xdb80,	// (0x0003e680) list_medium_line_x3_t4_g4_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x3_t4_g4_g2

0xdb80,	// (0x0003e680) list_medium_line_x3_t4_g4_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x3_t4_g4_g3

0xdb80,	// (0x0003e680) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0003fd06) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0003fd06) list_medium_line_x3_t4_g4_g

0xdde0,	// (0x0003e8e0) list_medium_line_x3_t4_g4_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x3_t4_g4_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x3_t4_g4_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x3_t4_g4_t2

0xdde0,	// (0x0003e8e0) list_medium_line_x3_t4_g4_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x3_t4_g4_t3

0xdde0,	// (0x0003e8e0) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0003fd0f) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0003fd0f) list_medium_line_x3_t4_g4_t

0x52b3,	// (0x00035db3) list_single_dyc_row_text_pane_t1_ParamLimits

0x52b3,	// (0x00035db3) list_single_dyc_row_text_pane_t1

0x52f0,	// (0x00035df0) list_single_dyc_row_text_pane_t2_ParamLimits

0x52f0,	// (0x00035df0) list_single_dyc_row_text_pane_t2

0x5366,	// (0x00035e66) list_single_dyc_row_text_pane_t3_ParamLimits

0x5366,	// (0x00035e66) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x0004076e) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x0004076e) list_single_dyc_row_text_pane_t

0x543d,	// (0x00035f3d) list_single_dyc_row_pane_g1_ParamLimits

0x543d,	// (0x00035f3d) list_single_dyc_row_pane_g1

0x5449,	// (0x00035f49) list_single_dyc_row_pane_g2_ParamLimits

0x5449,	// (0x00035f49) list_single_dyc_row_pane_g2

0x5455,	// (0x00035f55) list_single_dyc_row_pane_g3_ParamLimits

0x5455,	// (0x00035f55) list_single_dyc_row_pane_g3

0x5461,	// (0x00035f61) list_single_dyc_row_pane_g4_ParamLimits

0x5461,	// (0x00035f61) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x0004077b) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x0004077b) list_single_dyc_row_pane_g

0x546d,	// (0x00035f6d) list_single_dyc_row_text_pane_ParamLimits

0x546d,	// (0x00035f6d) list_single_dyc_row_text_pane

0xd44a,	// (0x0003df4a) bg_sp_fs_scroll_pane

0x31ea,	// (0x00033cea) thumb_sp_fs_scroll_pane

0xdb80,	// (0x0003e680) list_medium_line_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_g1

0xdde0,	// (0x0003e8e0) list_medium_line_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t1

0xdb80,	// (0x0003e680) list_medium_line_x2_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_g1

0xdb80,	// (0x0003e680) list_medium_line_x2_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0003fd01) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0003fd01) list_medium_line_x2_g

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t1

0xdb80,	// (0x0003e680) list_medium_line_x3_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x3_g1

0x1de2,	// (0x000328e2) list_medium_line_x3_g2_ParamLimits

0x1de2,	// (0x000328e2) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x00040784) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x00040784) list_medium_line_x3_g

0x31f3,	// (0x00033cf3) list_medium_line_x3_t1_ParamLimits

0x31f3,	// (0x00033cf3) list_medium_line_x3_t1

0x3207,	// (0x00033d07) thumb_sp_fs_scroll_pane_g1

0x3210,	// (0x00033d10) thumb_sp_fs_scroll_pane_g2

0x3219,	// (0x00033d19) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x00040789) thumb_sp_fs_scroll_pane_g

0x3207,	// (0x00033d07) bg_sp_fs_scroll_pane_g1

0x3210,	// (0x00033d10) bg_sp_fs_scroll_pane_g2

0x3219,	// (0x00033d19) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x00040789) bg_sp_fs_scroll_pane_g

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g4_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g4_g1

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g4_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g4_g2

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g4_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g4_g3

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g4_g4_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0003fd06) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0003fd06) list_medium_line_x2_t3_g4_g

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g4_t1

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g4_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g4_t2

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g4_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0003fcfa) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0003fcfa) list_medium_line_x2_t3_g4_t

0xdb80,	// (0x0003e680) list_medium_line_g2_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_g2_g1

0xdb80,	// (0x0003e680) list_medium_line_g2_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0003fd01) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0003fd01) list_medium_line_g2_g

0xdde0,	// (0x0003e8e0) list_medium_line_g2_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_g2_t1

0xdb80,	// (0x0003e680) list_medium_line_t3_g2_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t3_g2_g1

0xdb80,	// (0x0003e680) list_medium_line_t3_g2_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0003fd01) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0003fd01) list_medium_line_t3_g2_g

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g2_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g2_t1

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g2_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g2_t2

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g2_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003fcfa) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003fcfa) list_medium_line_t3_g2_t

0xddc6,	// (0x0003e8c6) list_medium_line_right_icon_g1

0xe306,	// (0x0003ee06) list_medium_line_right_icon_t1

0xdb80,	// (0x0003e680) list_medium_line_t2_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t2_g1

0xdde0,	// (0x0003e8e0) list_medium_line_t2_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t2_t1

0xdde0,	// (0x0003e8e0) list_medium_line_t2_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x0003fd76) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x0003fd76) list_medium_line_t2_t

0xdb80,	// (0x0003e680) list_medium_line_t3_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t3_g1

0xdde0,	// (0x0003e8e0) list_medium_line_t3_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t3_t1

0xdde0,	// (0x0003e8e0) list_medium_line_t3_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t3_t2

0xdde0,	// (0x0003e8e0) list_medium_line_t3_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0003fcfa) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0003fcfa) list_medium_line_t3_t

0xdb80,	// (0x0003e680) list_medium_line_g3_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_g3_g1

0xdb80,	// (0x0003e680) list_medium_line_g3_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_g3_g2

0xdb80,	// (0x0003e680) list_medium_line_g3_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0003fcf3) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0003fcf3) list_medium_line_g3_g

0xdde0,	// (0x0003e8e0) list_medium_line_g3_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_g3_t1

0xdb80,	// (0x0003e680) list_medium_line_t2_g3_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t2_g3_g1

0xdb80,	// (0x0003e680) list_medium_line_t2_g3_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t2_g3_g2

0xdb80,	// (0x0003e680) list_medium_line_t2_g3_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0003fcf3) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0003fcf3) list_medium_line_t2_g3_g

0xdde0,	// (0x0003e8e0) list_medium_line_t2_g3_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t2_g3_t1

0xdde0,	// (0x0003e8e0) list_medium_line_t2_g3_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x0003fd76) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x0003fd76) list_medium_line_t2_g3_t

0xdb80,	// (0x0003e680) list_medium_line_t3_g3_g1_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t3_g3_g1

0xdb80,	// (0x0003e680) list_medium_line_t3_g3_g2_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t3_g3_g2

0xdb80,	// (0x0003e680) list_medium_line_t3_g3_g3_ParamLimits

0xdb80,	// (0x0003e680) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0003fcf3) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0003fcf3) list_medium_line_t3_g3_g

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g3_t1_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g3_t1

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g3_t2_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g3_t2

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g3_t3_ParamLimits

0xdde0,	// (0x0003e8e0) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003fcfa) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003fcfa) list_medium_line_t3_g3_t

0xddc6,	// (0x0003e8c6) list_medium_line_right_iconx2_g1

0xddc6,	// (0x0003e8c6) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0003fedd) list_medium_line_right_iconx2_g

0xe306,	// (0x0003ee06) list_medium_line_right_iconx2_t1

0xddc6,	// (0x0003e8c6) list_medium_line_t2_right_iconx2_g1

0xddc6,	// (0x0003e8c6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0003fedd) list_medium_line_t2_right_iconx2_g

0xe306,	// (0x0003ee06) list_medium_line_t2_right_iconx2_t1

0xe306,	// (0x0003ee06) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x00040756) list_medium_line_t2_right_iconx2_t

0xe306,	// (0x0003ee06) list_medium_line_x4_t4_t1

0xe306,	// (0x0003ee06) list_medium_line_x4_t4_t2

0xe306,	// (0x0003ee06) list_medium_line_x4_t4_t3

0xe306,	// (0x0003ee06) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0003fdc8) list_medium_line_x4_t4_t

0xc314,	// (0x0003ce14) tport_appsw_pane_ParamLimits

0xc314,	// (0x0003ce14) tport_appsw_pane

0xc322,	// (0x0003ce22) tport_contact_pane_ParamLimits

0xc322,	// (0x0003ce22) tport_contact_pane

0xc332,	// (0x0003ce32) tport_listscroll_pane_ParamLimits

0xc332,	// (0x0003ce32) tport_listscroll_pane

0xc341,	// (0x0003ce41) cell_tport_appsw_pane_ParamLimits

0xc341,	// (0x0003ce41) cell_tport_appsw_pane

0xdb8e,	// (0x0003e68e) tport_appsw_pane_g1_ParamLimits

0xdb8e,	// (0x0003e68e) tport_appsw_pane_g1

0x3222,	// (0x00033d22) tport_contact_pane_g1

0x322b,	// (0x00033d2b) tport_contact_pane_t1

0x3239,	// (0x00033d39) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x00040790) tport_contact_pane_t

0x3247,	// (0x00033d47) list_tport_pane

0x3250,	// (0x00033d50) scroll_pane_cp_030

0xc376,	// (0x0003ce76) cell_tport_appsw_pane_g1

0xc386,	// (0x0003ce86) cell_tport_appsw_pane_t1

0xc394,	// (0x0003ce94) grid_highlight_pane_cp019

0xc39c,	// (0x0003ce9c) list_tport_double_graphic_pane_ParamLimits

0xc39c,	// (0x0003ce9c) list_tport_double_graphic_pane

0xdb27,	// (0x0003e627) list_highlight_pane_cp023_ParamLimits

0xdb27,	// (0x0003e627) list_highlight_pane_cp023

0xc3b9,	// (0x0003ceb9) list_tport_double_graphic_pane_g1_ParamLimits

0xc3b9,	// (0x0003ceb9) list_tport_double_graphic_pane_g1

0xc3c6,	// (0x0003cec6) list_tport_double_graphic_pane_t1_ParamLimits

0xc3c6,	// (0x0003cec6) list_tport_double_graphic_pane_t1

0xc3db,	// (0x0003cedb) list_tport_double_graphic_pane_t2_ParamLimits

0xc3db,	// (0x0003cedb) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x0004079c) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x0004079c) list_tport_double_graphic_pane_t

0xd44a,	// (0x0003df4a) main_cale_note_pane

0xa5bd,	// (0x0003b0bd) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa5bd,	// (0x0003b0bd) cell_vitu2_function_top_wide_pane_cp01

0xbd40,	// (0x0003c840) wait_bar_pane_cp05_ParamLimits

0xdb27,	// (0x0003e627) listscroll_cmail_pane

0x3259,	// (0x00033d59) list_cmail_pane

0xc3ed,	// (0x0003ceed) list_cmail_body_pane

0xc407,	// (0x0003cf07) list_single_cmail_header_caption_pane

0x3269,	// (0x00033d69) list_single_cmail_header_detail_pane_ParamLimits

0x3269,	// (0x00033d69) list_single_cmail_header_detail_pane

0x329b,	// (0x00033d9b) list_single_cmail_header_caption_pane_t1

0x548c,	// (0x00035f8c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x548c,	// (0x00035f8c) list_single_cmail_header_detail_pane_g1

0x54a4,	// (0x00035fa4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x54a4,	// (0x00035fa4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x000407a1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x000407a1) list_single_cmail_header_detail_pane_g

0x54b0,	// (0x00035fb0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x54b0,	// (0x00035fb0) list_single_cmail_header_detail_pane_t1

0x5510,	// (0x00036010) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5510,	// (0x00036010) list_single_cmail_header_editor_pane_bg

0x2d65,	// (0x00033865) list_cmail_body_pane_g1

0x3342,	// (0x00033e42) list_cmail_body_pane_t1

0x1f4e,	// (0x00032a4e) list_single_cmail_header_editor_pane_bg_g1

0xdfef,	// (0x0003eaef) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1f5e,	// (0x00032a5e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1f56,	// (0x00032a56) list_single_cmail_header_editor_pane_bg_g1_copy3

0x21b9,	// (0x00032cb9) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1f7e,	// (0x00032a7e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1f6e,	// (0x00032a6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1f76,	// (0x00032a76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdfcf,	// (0x0003eacf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc427,	// (0x0003cf27) calenote_gesture_pane_ParamLimits

0xc427,	// (0x0003cf27) calenote_gesture_pane

0xc441,	// (0x0003cf41) calenote_window_pane_ParamLimits

0xc441,	// (0x0003cf41) calenote_window_pane

0x3350,	// (0x00033e50) popup_note_window_cp01

0xc459,	// (0x0003cf59) calenote_swipe_1_pane_ParamLimits

0xc459,	// (0x0003cf59) calenote_swipe_1_pane

0xc1c9,	// (0x0003ccc9) calenote_swipe_2_pane_ParamLimits

0xc1c9,	// (0x0003ccc9) calenote_swipe_2_pane

0x2f99,	// (0x00033a99) calenote_swipe_1_pane_g1_ParamLimits

0x2f99,	// (0x00033a99) calenote_swipe_1_pane_g1

0x2fa6,	// (0x00033aa6) calenote_swipe_1_pane_g2_ParamLimits

0x2fa6,	// (0x00033aa6) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x0004073e) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x0004073e) calenote_swipe_1_pane_g

0x3362,	// (0x00033e62) calenote_swipe_1_pane_t1_ParamLimits

0x3362,	// (0x00033e62) calenote_swipe_1_pane_t1

0x2f99,	// (0x00033a99) calenote_swipe_2_pane_g1_ParamLimits

0x2f99,	// (0x00033a99) calenote_swipe_2_pane_g1

0x3381,	// (0x00033e81) calenote_swipe_2_pane_g2_ParamLimits

0x3381,	// (0x00033e81) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x000407ad) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x000407ad) calenote_swipe_2_pane_g

0x338d,	// (0x00033e8d) calenote_swipe_2_pane_t1_ParamLimits

0x338d,	// (0x00033e8d) calenote_swipe_2_pane_t1

0xd44a,	// (0x0003df4a) main_mup_navstr_pane

0x9470,	// (0x00039f70) main_mup3_pane_t7_ParamLimits

0x9470,	// (0x00039f70) main_mup3_pane_t7

0x9c7e,	// (0x0003a77e) main_mp4_pane_g6_ParamLimits

0x9c7e,	// (0x0003a77e) main_mp4_pane_g6

0xa00a,	// (0x0003ab0a) main_image3_pane_t4_ParamLimits

0xa00a,	// (0x0003ab0a) main_image3_pane_t4

0xc46c,	// (0x0003cf6c) popup_navstr_preview_pane_ParamLimits

0xc46c,	// (0x0003cf6c) popup_navstr_preview_pane

0xc478,	// (0x0003cf78) scroll_navstr_pane_ParamLimits

0xc478,	// (0x0003cf78) scroll_navstr_pane

0xd44a,	// (0x0003df4a) bg_popup_preview_window_pane_cp04

0x33b4,	// (0x00033eb4) popup_navstr_preview_pane_t1

0xc484,	// (0x0003cf84) scroll_navstr_pane_g1_ParamLimits

0xc484,	// (0x0003cf84) scroll_navstr_pane_g1

0xc491,	// (0x0003cf91) scroll_navstr_pane_t1_ParamLimits

0xc491,	// (0x0003cf91) scroll_navstr_pane_t1

0x3359,	// (0x00033e59) bg_button_pane_cp014

0x3359,	// (0x00033e59) bg_button_pane_cp030

0x5185,	// (0x00035c85) list_double_fisheye_pane_g4_ParamLimits

0x5185,	// (0x00035c85) list_double_fisheye_pane_g4

0x5191,	// (0x00035c91) list_double_fisheye_pane_g5_ParamLimits

0x5191,	// (0x00035c91) list_double_fisheye_pane_g5

0x026b,	// (0x00030d6b) sp_fs_scroll_pane_cp03

0x30bb,	// (0x00033bbb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x30c7,	// (0x00033bc7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x0004075b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc282,	// (0x0003cd82) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3261,	// (0x00033d61) sp_fs_scroll_pane_cp02

0xdcec,	// (0x0003e7ec) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdcec,	// (0x0003e7ec) popup_sp_fs_calendar_preview_list_single_pane

0xd44a,	// (0x0003df4a) main_cam6_pano_pane

0xdb27,	// (0x0003e627) main_mup3_pane_ParamLimits

0xd44a,	// (0x0003df4a) main_phacti_pane

0xbc13,	// (0x0003c713) bg_button_pane_cp11

0xbc2b,	// (0x0003c72b) main_mobtv_info_pane_g2_ParamLimits

0xbc2b,	// (0x0003c72b) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x000406bb) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x000406bb) main_mobtv_info_pane_g

0xbddd,	// (0x0003c8dd) sc_clock_pane_t5_ParamLimits

0xbddd,	// (0x0003c8dd) sc_clock_pane_t5

0xbfd5,	// (0x0003cad5) main_radioblah_pane_g1_ParamLimits

0x2ecb,	// (0x000339cb) main_radioblah_pane_t3_ParamLimits

0x2ecb,	// (0x000339cb) main_radioblah_pane_t3

0x2ee3,	// (0x000339e3) main_radioblah_pane_t4_ParamLimits

0x2ee3,	// (0x000339e3) main_radioblah_pane_t4

0xbff3,	// (0x0003caf3) main_radioblah_text_pane_ParamLimits

0xbff3,	// (0x0003caf3) main_radioblah_text_pane

0xc000,	// (0x0003cb00) main_radioblah_info_pane_g1_ParamLimits

0xc099,	// (0x0003cb99) main_radioblah_info_pane_t4_ParamLimits

0xc099,	// (0x0003cb99) main_radioblah_info_pane_t4

0xdb27,	// (0x0003e627) main_sp_fs_calendar_pane

0xc4a3,	// (0x0003cfa3) main_phacti_pane_g1

0xc4ab,	// (0x0003cfab) phacti_note_pane_ParamLimits

0xc4ab,	// (0x0003cfab) phacti_note_pane

0x33cb,	// (0x00033ecb) phacti_term_pane_ParamLimits

0x33cb,	// (0x00033ecb) phacti_term_pane

0x33e0,	// (0x00033ee0) phacti_note_pane_t1_ParamLimits

0x33e0,	// (0x00033ee0) phacti_note_pane_t1

0x5527,	// (0x00036027) phacti_term_pane_g1

0x552f,	// (0x0003602f) phacti_term_pane_t1_ParamLimits

0x552f,	// (0x0003602f) phacti_term_pane_t1

0x3429,	// (0x00033f29) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3431,	// (0x00033f31) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x000407b7) popup_sp_fs_calendar_preview_list_single_pane_g

0x3439,	// (0x00033f39) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3439,	// (0x00033f39) popup_sp_fs_calendar_preview_list_single_pane_t1

0x344f,	// (0x00033f4f) aid_popup_sp_fs_bg_corner_pane

0xddc6,	// (0x0003e8c6) popup_sp_fs_calendar_preview_bg_pane_g1

0xd44a,	// (0x0003df4a) popup_sp_fs_calendar_preview_bg_pane

0x3457,	// (0x00033f57) popup_sp_fs_calendar_preview_list_pane

0xf01a,	// (0x0003fb1a) bg_main_sp_fs_cale_pane_ParamLimits

0xf01a,	// (0x0003fb1a) bg_main_sp_fs_cale_pane

0x5562,	// (0x00036062) listscroll_cale_mrui_pane_ParamLimits

0x5562,	// (0x00036062) listscroll_cale_mrui_pane

0x5577,	// (0x00036077) listscroll_sp_fs_schedule_track_pane

0x5580,	// (0x00036080) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5580,	// (0x00036080) main_sp_fs_ctrlbar_pane_cp01

0x3499,	// (0x00033f99) main_sp_fs_ribbon_pane

0x5593,	// (0x00036093) popup_sp_fs_cale_preview_window

0x3cf7,	// (0x000347f7) list_single_sp_fs_schedule_track_pane_ParamLimits

0x3cf7,	// (0x000347f7) list_single_sp_fs_schedule_track_pane

0xd454,	// (0x0003df54) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd454,	// (0x0003df54) bg_sp_fs_highlight_list_pane_cp03

0xc50e,	// (0x0003d00e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc50e,	// (0x0003d00e) list_single_sp_fs_schedule_track_pane_g1

0xc51a,	// (0x0003d01a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc51a,	// (0x0003d01a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x000407bc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x000407bc) list_single_sp_fs_schedule_track_pane_g

0xc526,	// (0x0003d026) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc526,	// (0x0003d026) list_single_sp_fs_schedule_track_pane_t1

0xc544,	// (0x0003d044) sp_fs_schedule_track_pane_ParamLimits

0xc544,	// (0x0003d044) sp_fs_schedule_track_pane

0x34b3,	// (0x00033fb3) sp_fs_schedule_track_pane_g1

0x34bb,	// (0x00033fbb) sp_fs_schedule_track_pane_g2

0x34c3,	// (0x00033fc3) sp_fs_schedule_track_pane_g3

0x34cb,	// (0x00033fcb) sp_fs_schedule_track_pane_g4

0x34d3,	// (0x00033fd3) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x000407c1) sp_fs_schedule_track_pane_g

0x1f4e,	// (0x00032a4e) bg_sp_fs_schedule_viewer_highlight_g1

0xdfef,	// (0x0003eaef) bg_sp_fs_schedule_viewer_highlight_g2

0x1f56,	// (0x00032a56) bg_sp_fs_schedule_viewer_highlight_g3

0x1f5e,	// (0x00032a5e) bg_sp_fs_schedule_viewer_highlight_g4

0x21b9,	// (0x00032cb9) bg_sp_fs_schedule_viewer_highlight_g5

0x1f6e,	// (0x00032a6e) bg_sp_fs_schedule_viewer_highlight_g6

0x1f76,	// (0x00032a76) bg_sp_fs_schedule_viewer_highlight_g7

0x1f7e,	// (0x00032a7e) bg_sp_fs_schedule_viewer_highlight_g8

0xdfcf,	// (0x0003eacf) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x000407cc) bg_sp_fs_schedule_viewer_highlight_g

0xd44a,	// (0x0003df4a) bg_main_sp_fs_ribbon_pane

0xc556,	// (0x0003d056) main_sp_fs_ribbon_pane_g1

0x34db,	// (0x00033fdb) main_sp_fs_ribbon_pane_t1

0xc55f,	// (0x0003d05f) main_sp_fs_ribbon_pane_t2

0x34ea,	// (0x00033fea) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x000407df) main_sp_fs_ribbon_pane_t

0x34f9,	// (0x00033ff9) main_sp_fs_ribbon_scheduler_pane

0x3501,	// (0x00034001) bg_main_sp_fs_ribbon_pane_g1

0x350a,	// (0x0003400a) bg_main_sp_fs_ribbon_pane_g2

0x3513,	// (0x00034013) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x000407e6) bg_main_sp_fs_ribbon_pane_g

0x351b,	// (0x0003401b) main_sp_fs_ribbon_scheduler_pane_g1

0x3524,	// (0x00034024) main_sp_fs_ribbon_scheduler_pane_g2

0x352d,	// (0x0003402d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x000407ed) main_sp_fs_ribbon_scheduler_pane_g

0x3536,	// (0x00034036) list_cale_mrui_pane

0xc56e,	// (0x0003d06e) sp_fs_scroll_pane_cp07_ParamLimits

0xc56e,	// (0x0003d06e) sp_fs_scroll_pane_cp07

0xc58a,	// (0x0003d08a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc58a,	// (0x0003d08a) bg_sp_fs_schedule_viewer_highlight

0x3543,	// (0x00034043) list_single_sp_fs_schedule_track_pane_cp01

0x354b,	// (0x0003404b) list_sp_fs_schedule_track_pane

0x3553,	// (0x00034053) sp_fs_scroll_pane_cp06_ParamLimits

0x3553,	// (0x00034053) sp_fs_scroll_pane_cp06

0xddc6,	// (0x0003e8c6) bgmain_sp_fs_calendar_pane_g1

0x55a5,	// (0x000360a5) list_single_cale_mrui_pane_ParamLimits

0x55a5,	// (0x000360a5) list_single_cale_mrui_pane

0x55c9,	// (0x000360c9) list_single_cale_mrui_row_pane_ParamLimits

0x55c9,	// (0x000360c9) list_single_cale_mrui_row_pane

0x55d6,	// (0x000360d6) list_single_cale_mrui_row_pane_g1_ParamLimits

0x55d6,	// (0x000360d6) list_single_cale_mrui_row_pane_g1

0x560e,	// (0x0003610e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x560e,	// (0x0003610e) list_single_cale_mrui_row_pane_t1

0x5620,	// (0x00036120) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5620,	// (0x00036120) list_single_cale_mrui_row_pane_t2

0x5686,	// (0x00036186) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5686,	// (0x00036186) list_single_cale_mrui_row_pane_t3

0x56b5,	// (0x000361b5) list_single_cale_mrui_row_pane_t4_ParamLimits

0x56b5,	// (0x000361b5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x000407fb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x000407fb) list_single_cale_mrui_row_pane_t

0x56e4,	// (0x000361e4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x56e4,	// (0x000361e4) list_single_cmail_header_editor_pane_bg_cp01

0x5706,	// (0x00036206) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5706,	// (0x00036206) list_single_cmail_header_editor_pane_bg_cp02

0xc597,	// (0x0003d097) main_radioblah_text_pane_t1_ParamLimits

0xc597,	// (0x0003d097) main_radioblah_text_pane_t1

0x3629,	// (0x00034129) cam6_indi_pane_cp01

0x3631,	// (0x00034131) cam6_mode_pane_cp01

0x3639,	// (0x00034139) cam6_pano_pane

0x3642,	// (0x00034142) cam6_zoom_pane_cp01

0x364c,	// (0x0003414c) cam6_pano_image_pane

0x3655,	// (0x00034155) cam6_pano_pane_g1

0x2d65,	// (0x00033865) cam6_pano_pane_g2

0x365e,	// (0x0003415e) cam6_pano_pane_g3

0x3667,	// (0x00034167) cam6_pano_pane_g4

0x17c4,	// (0x000322c4) cam6_pano_pane_g5

0x3670,	// (0x00034170) cam6_pano_pane_g6

0x3678,	// (0x00034178) cam6_pano_pane_g7

0x3680,	// (0x00034180) cam6_pano_pane_g8

0x3689,	// (0x00034189) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x00040804) cam6_pano_pane_g

0xd44a,	// (0x0003df4a) main_browser_tag_pane

0x33ac,	// (0x00033eac) grid_navstr_albumart_pane

0x3694,	// (0x00034194) cell_navstr_albumart_pane_ParamLimits

0x3694,	// (0x00034194) cell_navstr_albumart_pane

0x36b0,	// (0x000341b0) cell_navstr_albumart_pane_g1

0x0bc1,	// (0x000316c1) cell_navstr_albumart_pane_g2

0x0bd1,	// (0x000316d1) cell_navstr_albumart_pane_g3

0x0bc9,	// (0x000316c9) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x00040817) cell_navstr_albumart_pane_g

0xc5b1,	// (0x0003d0b1) bt_list_pane_ParamLimits

0xc5b1,	// (0x0003d0b1) bt_list_pane

0xc5ca,	// (0x0003d0ca) bt_list_pane_t1

0xc5d9,	// (0x0003d0d9) bt_list_pane_t2

0x0001,

0xfd20,	// (0x00040820) bt_list_pane_t

0xd44a,	// (0x0003df4a) main_cale_prevew_pane

0xc5e8,	// (0x0003d0e8) popup_cale_preview_window_ParamLimits

0xc5e8,	// (0x0003d0e8) popup_cale_preview_window

0xdb27,	// (0x0003e627) bg_popup_preview_window_pane_cp05_ParamLimits

0xdb27,	// (0x0003e627) bg_popup_preview_window_pane_cp05

0x36b8,	// (0x000341b8) list_cale_preview_pane_ParamLimits

0x36b8,	// (0x000341b8) list_cale_preview_pane

0xc605,	// (0x0003d105) list_double_cale_preview_pane_ParamLimits

0xc605,	// (0x0003d105) list_double_cale_preview_pane

0xc619,	// (0x0003d119) list_single_cale_preview_pane_ParamLimits

0xc619,	// (0x0003d119) list_single_cale_preview_pane

0xc631,	// (0x0003d131) list_single_cale_preview_pane_g1

0xc639,	// (0x0003d139) list_single_cale_preview_pane_t1_ParamLimits

0xc639,	// (0x0003d139) list_single_cale_preview_pane_t1

0xc64e,	// (0x0003d14e) list_double_cale_preview_pane_g1

0xc656,	// (0x0003d156) list_double_cale_preview_pane_t1_ParamLimits

0xc656,	// (0x0003d156) list_double_cale_preview_pane_t1

0xc66b,	// (0x0003d16b) list_double_cale_preview_pane_t2_ParamLimits

0xc66b,	// (0x0003d16b) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x00040825) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x00040825) list_double_cale_preview_pane_t

0xd44a,	// (0x0003df4a) main_ezdial_pane

0xdb27,	// (0x0003e627) main_sp_fs_email_pane_ParamLimits

0xc1e3,	// (0x0003cce3) cmail_ddmenu_btn01_pane_ParamLimits

0xc1e3,	// (0x0003cce3) cmail_ddmenu_btn01_pane

0xc200,	// (0x0003cd00) cmail_ddmenu_btn02_pane_ParamLimits

0xc200,	// (0x0003cd00) cmail_ddmenu_btn02_pane

0xc21e,	// (0x0003cd1e) cmail_ddmenu_btn03_pane_ParamLimits

0xc21e,	// (0x0003cd1e) cmail_ddmenu_btn03_pane

0xc2bf,	// (0x0003cdbf) main_sp_fs_ctrlbar_pane_ParamLimits

0xc2d9,	// (0x0003cdd9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc3ed,	// (0x0003ceed) list_cmail_body_pane_ParamLimits

0x32a9,	// (0x00033da9) bg_button_pane_cp12

0x32be,	// (0x00033dbe) list_single_cmail_header_detail_pane_g3_ParamLimits

0x32be,	// (0x00033dbe) list_single_cmail_header_detail_pane_g3

0x54ec,	// (0x00035fec) list_single_cmail_header_detail_pane_t2_ParamLimits

0x54ec,	// (0x00035fec) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x000407a8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x000407a8) list_single_cmail_header_detail_pane_t

0x5544,	// (0x00036044) phacti_term_pane_t2_ParamLimits

0x5544,	// (0x00036044) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x000407b2) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x000407b2) phacti_term_pane_t

0x36c4,	// (0x000341c4) aid_size_list_single_double

0xc683,	// (0x0003d183) popup_ezdial_listscroll_window

0xc6a5,	// (0x0003d1a5) popup_number_entry_window_cp01

0xdd90,	// (0x0003e890) bg_popup_call_pane_cp09

0x36d0,	// (0x000341d0) ezdial_list_pane

0x36d8,	// (0x000341d8) scroll_pane_cp23

0x1058,	// (0x00031b58) bg_button_pane_cp028_ParamLimits

0x1058,	// (0x00031b58) bg_button_pane_cp028

0xc6b3,	// (0x0003d1b3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc6b3,	// (0x0003d1b3) cmail_ddmenu_btn01_pane_g1

0xc6c5,	// (0x0003d1c5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc6c5,	// (0x0003d1c5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x0004082a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x0004082a) cmail_ddmenu_btn01_pane_g

0x36e0,	// (0x000341e0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x36e0,	// (0x000341e0) cmail_ddmenu_btn01_pane_t1

0xf01a,	// (0x0003fb1a) bg_button_pane_cp029_ParamLimits

0xf01a,	// (0x0003fb1a) bg_button_pane_cp029

0xc6d1,	// (0x0003d1d1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc6d1,	// (0x0003d1d1) cmail_ddmenu_btn02_pane_g1

0xc6e9,	// (0x0003d1e9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc6e9,	// (0x0003d1e9) cmail_ddmenu_btn02_pane_t1

0xd454,	// (0x0003df54) bg_button_pane_cp031_ParamLimits

0xd454,	// (0x0003df54) bg_button_pane_cp031

0xc6d1,	// (0x0003d1d1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc6d1,	// (0x0003d1d1) cmail_ddmenu_btn03_pane_g1

0xc6e9,	// (0x0003d1e9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc6e9,	// (0x0003d1e9) cmail_ddmenu_btn03_pane_t1

0x9eb3,	// (0x0003a9b3) cell_dialer2_keypad_pane_t1_ParamLimits

0x9ecd,	// (0x0003a9cd) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9ecd,	// (0x0003a9cd) cell_dialer2_keypad_pane_t1_copy1

0xba40,	// (0x0003c540) ncimui_group_button_pane

0xdb27,	// (0x0003e627) main_sp_fs_calendar_pane_ParamLimits

0xc407,	// (0x0003cf07) list_single_cmail_header_caption_pane_ParamLimits

0x5559,	// (0x00036059) aid_recal_txt_sm_pane

0xd44a,	// (0x0003df4a) mian_recal_day_pane

0x5593,	// (0x00036093) popup_sp_fs_cale_preview_window_ParamLimits

0x36f6,	// (0x000341f6) list_recal_day_pane

0x573e,	// (0x0003623e) list_single_recal_day_pane_ParamLimits

0x573e,	// (0x0003623e) list_single_recal_day_pane

0x374b,	// (0x0003424b) list_single_recal_day_pane_g1_ParamLimits

0x374b,	// (0x0003424b) list_single_recal_day_pane_g1

0x5750,	// (0x00036250) list_single_recal_day_pane_g2_ParamLimits

0x5750,	// (0x00036250) list_single_recal_day_pane_g2

0x575c,	// (0x0003625c) list_single_recal_day_pane_g3_ParamLimits

0x575c,	// (0x0003625c) list_single_recal_day_pane_g3

0x5768,	// (0x00036268) list_single_recal_day_pane_g4_ParamLimits

0x5768,	// (0x00036268) list_single_recal_day_pane_g4

0x5776,	// (0x00036276) list_single_recal_day_pane_g5_ParamLimits

0x5776,	// (0x00036276) list_single_recal_day_pane_g5

0x578c,	// (0x0003628c) list_single_recal_day_pane_g6_ParamLimits

0x578c,	// (0x0003628c) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x00040839) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x00040839) list_single_recal_day_pane_g

0x57a0,	// (0x000362a0) list_single_recal_day_pane_t1

0x57b2,	// (0x000362b2) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x00040844) list_single_recal_day_pane_t

0xc70d,	// (0x0003d20d) ncimui_query_button_pane_ParamLimits

0xc70d,	// (0x0003d20d) ncimui_query_button_pane

0xc71d,	// (0x0003d21d) ncimui_query_button_pane_t1_ParamLimits

0xc71d,	// (0x0003d21d) ncimui_query_button_pane_t1

0x37b3,	// (0x000342b3) ncimui_query_button_pane_t2_ParamLimits

0x37b3,	// (0x000342b3) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x00040849) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x00040849) ncimui_query_button_pane_t

0xc730,	// (0x0003d230) query_button_pane_ParamLimits

0xc730,	// (0x0003d230) query_button_pane

0xd44a,	// (0x0003df4a) bg_button_pane_cp0028

0x37c6,	// (0x000342c6) query_button_pane_t1

0x89af,	// (0x000394af) main_tport_pane_ParamLimits

0xc2ea,	// (0x0003cdea) bg_popup_window_pane_cp01_ParamLimits

0xc2ea,	// (0x0003cdea) bg_popup_window_pane_cp01

0xc2f8,	// (0x0003cdf8) heading_pane_cp08_ParamLimits

0xc2f8,	// (0x0003cdf8) heading_pane_cp08

0xc306,	// (0x0003ce06) heading_pane_cp07_ParamLimits

0xc306,	// (0x0003ce06) heading_pane_cp07

0xc376,	// (0x0003ce76) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x00040795) cell_tport_appsw_pane_g

0x4c6f,	// (0x0003576f) input_candi_list_open_g1

0xe1b2,	// (0x0003ecb2) list_cale_time_pane_g6_ParamLimits

0xe1b2,	// (0x0003ecb2) list_cale_time_pane_g6

0x8e9a,	// (0x0003999a) aid_size_touch_calib_1_ParamLimits

0x8e9a,	// (0x0003999a) aid_size_touch_calib_1

0x8ea6,	// (0x000399a6) aid_size_touch_calib_2_ParamLimits

0x8ea6,	// (0x000399a6) aid_size_touch_calib_2

0x8eb4,	// (0x000399b4) aid_size_touch_calib_3_ParamLimits

0x8eb4,	// (0x000399b4) aid_size_touch_calib_3

0x8ec4,	// (0x000399c4) aid_size_touch_calib_4_ParamLimits

0x8ec4,	// (0x000399c4) aid_size_touch_calib_4

0x8ed2,	// (0x000399d2) main_touch_calib_button_group_pane_ParamLimits

0x8ed2,	// (0x000399d2) main_touch_calib_button_group_pane

0x8ee0,	// (0x000399e0) main_touch_calib_pane_g1_ParamLimits

0x8eec,	// (0x000399ec) main_touch_calib_pane_g2_ParamLimits

0x8ef8,	// (0x000399f8) main_touch_calib_pane_g3_ParamLimits

0x8f04,	// (0x00039a04) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x000401de) main_touch_calib_pane_g_ParamLimits

0x8f10,	// (0x00039a10) main_touch_calib_pane_t1_ParamLimits

0x8f27,	// (0x00039a27) main_touch_calib_pane_t2_ParamLimits

0x8f40,	// (0x00039a40) main_touch_calib_pane_t3_ParamLimits

0x8f56,	// (0x00039a56) main_touch_calib_pane_t4_ParamLimits

0x8f6c,	// (0x00039a6c) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x000401e7) main_touch_calib_pane_t_ParamLimits

0x1577,	// (0x00032077) list_single_fp_cale_pane_g3_ParamLimits

0x1577,	// (0x00032077) list_single_fp_cale_pane_g3

0xdb27,	// (0x0003e627) bg_button_pane_cp012_ParamLimits

0xdb27,	// (0x0003e627) bg_vkb2_func_pane_cp03_ParamLimits

0xad07,	// (0x0003b807) cell_vitu2_function_top_pane_g1_ParamLimits

0xdb27,	// (0x0003e627) bg_vkb2_func_pane_cp04_ParamLimits

0xb9c6,	// (0x0003c4c6) main_ncimui_button_group_pane_ParamLimits

0xb9c6,	// (0x0003c4c6) main_ncimui_button_group_pane

0xba2e,	// (0x0003c52e) main_ncimui_pane_t3_ParamLimits

0xba2e,	// (0x0003c52e) main_ncimui_pane_t3

0x33c2,	// (0x00033ec2) phacti_button_group_pane

0x36c4,	// (0x000341c4) aid_size_list_single_double_ParamLimits

0xc683,	// (0x0003d183) popup_ezdial_listscroll_window_ParamLimits

0xc6a5,	// (0x0003d1a5) popup_number_entry_window_cp01_ParamLimits

0xc73d,	// (0x0003d23d) phacti_button_pane_ParamLimits

0xc73d,	// (0x0003d23d) phacti_button_pane

0xd44a,	// (0x0003df4a) bg_button_pane_cp14

0x37d4,	// (0x000342d4) phacti_button_pane_t1

0xc74e,	// (0x0003d24e) main_touch_calib_button_pane_ParamLimits

0xc74e,	// (0x0003d24e) main_touch_calib_button_pane

0xdbf2,	// (0x0003e6f2) bg_button_pane_cp18_ParamLimits

0xdbf2,	// (0x0003e6f2) bg_button_pane_cp18

0x37e2,	// (0x000342e2) main_touch_calib_button_pane_t1_ParamLimits

0x37e2,	// (0x000342e2) main_touch_calib_button_pane_t1

0x37f8,	// (0x000342f8) main_touch_calib_button_pane_t2_ParamLimits

0x37f8,	// (0x000342f8) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x0004084e) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x0004084e) main_touch_calib_button_pane_t

0xd44a,	// (0x0003df4a) cell_ncimui_button_pane

0xd44a,	// (0x0003df4a) bg_button_pane_cp032

0x3816,	// (0x00034316) cell_ncimui_button_pane_t1

0x9f29,	// (0x0003aa29) image3_infobar_pane_ParamLimits

0x9f29,	// (0x0003aa29) image3_infobar_pane

0xbdff,	// (0x0003c8ff) fs_bigclock_status_pane_ParamLimits

0xbdff,	// (0x0003c8ff) fs_bigclock_status_pane

0xbe0c,	// (0x0003c90c) main_fs_bigclock_clock_pane_ParamLimits

0xbe0c,	// (0x0003c90c) main_fs_bigclock_clock_pane

0xbe28,	// (0x0003c928) main_fs_bigclock_indi_pane_ParamLimits

0xbe28,	// (0x0003c928) main_fs_bigclock_indi_pane

0xbe56,	// (0x0003c956) main_fs_bigclock_swipe_pane_ParamLimits

0xbe56,	// (0x0003c956) main_fs_bigclock_swipe_pane

0xd44a,	// (0x0003df4a) main_fs_clock_dumped_data

0xbe90,	// (0x0003c990) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xbe90,	// (0x0003c990) list_single_fs_bigclock_indicator_pane_g1

0xbeaf,	// (0x0003c9af) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xbeaf,	// (0x0003c9af) list_single_fs_bigclock_indicator_pane_g2

0xbec9,	// (0x0003c9c9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xbec9,	// (0x0003c9c9) list_single_fs_bigclock_indicator_pane_g3

0xbee5,	// (0x0003c9e5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xbee5,	// (0x0003c9e5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x000406ef) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x000406ef) list_single_fs_bigclock_indicator_pane_g

0xbf14,	// (0x0003ca14) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xbf14,	// (0x0003ca14) list_single_fs_bigclock_indicator_pane_t1

0xbf3c,	// (0x0003ca3c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xbf3c,	// (0x0003ca3c) list_single_fs_bigclock_indicator_pane_t2

0xbf64,	// (0x0003ca64) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xbf64,	// (0x0003ca64) list_single_fs_bigclock_indicator_pane_t3

0xbf8c,	// (0x0003ca8c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xbf8c,	// (0x0003ca8c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x000406fa) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x000406fa) list_single_fs_bigclock_indicator_pane_t

0x3824,	// (0x00034324) image3_infobar_fav_pane_ParamLimits

0x3824,	// (0x00034324) image3_infobar_fav_pane

0x3834,	// (0x00034334) image3_infobar_loc_pane_ParamLimits

0x3834,	// (0x00034334) image3_infobar_loc_pane

0x384a,	// (0x0003434a) image3_infobar_time_pane_ParamLimits

0x384a,	// (0x0003434a) image3_infobar_time_pane

0xddc6,	// (0x0003e8c6) image3_infobar_time_pane_g1

0x385a,	// (0x0003435a) image3_infobar_time_pane_t1

0xddc6,	// (0x0003e8c6) image3_infobar_loc_pane_g1

0x3868,	// (0x00034368) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x00040853) image3_infobar_loc_pane_g

0x3870,	// (0x00034370) image3_infobar_loc_pane_t1

0xddc6,	// (0x0003e8c6) image3_infobar_fav_pane_g1

0x387e,	// (0x0003437e) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x00040858) image3_infobar_fav_pane_g

0x3886,	// (0x00034386) fs_bigclock_status_battery_pane

0x388f,	// (0x0003438f) fs_bigclock_status_signal_pane

0x3898,	// (0x00034398) fs_bigclock_status_title_pane

0x38a1,	// (0x000343a1) fs_bigclock_status_signal_pane_g1

0x38aa,	// (0x000343aa) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x0004085d) fs_bigclock_status_signal_pane_g

0x38b2,	// (0x000343b2) fs_bigclock_status_battery_pane_g1

0x38bb,	// (0x000343bb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x00040862) fs_bigclock_status_battery_pane_g

0x38c3,	// (0x000343c3) fs_bigclock_status_title_pane_t1

0xc75e,	// (0x0003d25e) main_fs_bigclock_clock_pane_g1

0xc75e,	// (0x0003d25e) main_fs_bigclock_clock_pane_g2

0xc76d,	// (0x0003d26d) main_fs_bigclock_clock_pane_g3

0xc76d,	// (0x0003d26d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x00040867) main_fs_bigclock_clock_pane_g

0xc77d,	// (0x0003d27d) main_fs_bigclock_clock_pane_t1

0xc792,	// (0x0003d292) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x00040870) main_fs_bigclock_clock_pane_t

0x38d1,	// (0x000343d1) list_single_fs_bigclock_indicator_pane_ParamLimits

0x38d1,	// (0x000343d1) list_single_fs_bigclock_indicator_pane

0x38e2,	// (0x000343e2) list_single_fs_bigclock_pane_ParamLimits

0x38e2,	// (0x000343e2) list_single_fs_bigclock_pane

0x3908,	// (0x00034408) main_fs_bigclock_indicator_pane_t1

0x3917,	// (0x00034417) list_single_fs_bigclock_pane_g1

0x391f,	// (0x0003441f) list_single_fs_bigclock_pane_t1

0xddc6,	// (0x0003e8c6) main_fs_bigclock_swipe_pane_g1

0x3962,	// (0x00034462) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x00040881) main_fs_bigclock_swipe_pane_g

0x396a,	// (0x0003446a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x396a,	// (0x0003446a) main_fs_bigclock_swipe_pane_t1

0x7ae2,	// (0x000385e2) call_type_pane_ParamLimits

0xd44a,	// (0x0003df4a) main_btmg_pane

0x5602,	// (0x00036102) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5602,	// (0x00036102) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x000407f4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x000407f4) list_single_cale_mrui_row_pane_g

0x572c,	// (0x0003622c) list_recal_vselct_arw_lo_pane

0x3727,	// (0x00034227) list_recal_vselct_arw_up_pane

0x5734,	// (0x00036234) list_recal_vselct_pane

0xc7e9,	// (0x0003d2e9) btmg_button_pane

0xc7f5,	// (0x0003d2f5) main_btmg_pane_g1

0xd44a,	// (0x0003df4a) bg_button_pane_cp044

0x3987,	// (0x00034487) btmg_button_pane_t1

0x0d13,	// (0x00031813) aid_listscroll_gen

0xdb27,	// (0x0003e627) main_cntbar_detail_pane

0x3259,	// (0x00033d59) list_cmail_folder_pane

0x026b,	// (0x00030d6b) sp_fs_scroll_pane_cp03_ParamLimits

0x57c4,	// (0x000362c4) list_single_fs_dyc_pane_cp01_ParamLimits

0x57c4,	// (0x000362c4) list_single_fs_dyc_pane_cp01

0x39b2,	// (0x000344b2) aid_size_cmail_indent

0x57e2,	// (0x000362e2) list_single_dyc_row_pane_cp01

0xc81d,	// (0x0003d31d) cntbar_detail_list_pane_ParamLimits

0xc81d,	// (0x0003d31d) cntbar_detail_list_pane

0xc85d,	// (0x0003d35d) main_cntbar_detail_cont_pane_ParamLimits

0xc85d,	// (0x0003d35d) main_cntbar_detail_cont_pane

0x7ad6,	// (0x000385d6) scroll_pane_cp032_ParamLimits

0x7ad6,	// (0x000385d6) scroll_pane_cp032

0xc869,	// (0x0003d369) cntbar_detail_list_event_pane_ParamLimits

0xc869,	// (0x0003d369) cntbar_detail_list_event_pane

0xc82b,	// (0x0003d32b) cntbar_detail_list_shct_pane

0xe03d,	// (0x0003eb3d) aid_list_gen

0x39c4,	// (0x000344c4) aid_scroll

0x39cd,	// (0x000344cd) aid_size_touch_scroll_bar

0xc12d,	// (0x0003cc2d) aid_list_double

0x57eb,	// (0x000362eb) aid_list_single

0xc879,	// (0x0003d379) aid_list_single_lg

0x57f4,	// (0x000362f4) aid_list_z_g_a_sm

0x57fc,	// (0x000362fc) aid_list_z_g_d

0x5804,	// (0x00036304) aid_txt_z_prm

0x5812,	// (0x00036312) aid_txt_z_prm_cp01

0x5820,	// (0x00036320) aid_txt_z_sec

0xc882,	// (0x0003d382) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc882,	// (0x0003d382) main_cntbar_detail_cont_pane_g1

0xc88f,	// (0x0003d38f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc88f,	// (0x0003d38f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x00040886) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x00040886) main_cntbar_detail_cont_pane_g

0x39d6,	// (0x000344d6) main_cntbar_detail_cont_pane_t1

0x39e4,	// (0x000344e4) main_cntbar_detail_cont_pane_t2

0x39f2,	// (0x000344f2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x0004088b) main_cntbar_detail_cont_pane_t

0xc89b,	// (0x0003d39b) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc89b,	// (0x0003d39b) cell_cntbar_detail_list_shct_pane

0x3a00,	// (0x00034500) cntbar_detail_list_shct_pane_g1

0x3a09,	// (0x00034509) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x00040892) cntbar_detail_list_shct_pane_g

0xc8af,	// (0x0003d3af) cntbar_detail_list_event_pane_g1_ParamLimits

0xc8af,	// (0x0003d3af) cntbar_detail_list_event_pane_g1

0xc8bb,	// (0x0003d3bb) cntbar_detail_list_event_pane_g2_ParamLimits

0xc8bb,	// (0x0003d3bb) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x00040897) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x00040897) cntbar_detail_list_event_pane_g

0xc929,	// (0x0003d429) cntbar_detail_list_event_pane_t1_ParamLimits

0xc929,	// (0x0003d429) cntbar_detail_list_event_pane_t1

0xc93e,	// (0x0003d43e) cntbar_detail_list_event_pane_t2_ParamLimits

0xc93e,	// (0x0003d43e) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x000408a4) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x000408a4) cntbar_detail_list_event_pane_t

0xddc6,	// (0x0003e8c6) cell_cntbar_detail_list_shct_pane_g1

0x7e7a,	// (0x0003897a) navi_pane_mv_g3

0xdb27,	// (0x0003e627) main_cntbar_detail_pane_ParamLimits

0xd44a,	// (0x0003df4a) main_notif_wgt_pane

0x9bab,	// (0x0003a6ab) aid_tch_main_mp4_pane_g4

0x9e14,	// (0x0003a914) popup_slider_window_cp02

0x5722,	// (0x00036222) list_recal_day_event_pane

0xc7fd,	// (0x0003d2fd) cntbar_detail_btn_pane_ParamLimits

0xc7fd,	// (0x0003d2fd) cntbar_detail_btn_pane

0xc80d,	// (0x0003d30d) cntbar_detail_btn_pane_cp01_ParamLimits

0xc80d,	// (0x0003d30d) cntbar_detail_btn_pane_cp01

0xc82b,	// (0x0003d32b) cntbar_detail_list_shct_pane_ParamLimits

0xc837,	// (0x0003d337) cntbar_detail_pane_g1_ParamLimits

0xc837,	// (0x0003d337) cntbar_detail_pane_g1

0xc847,	// (0x0003d347) cntbar_detail_pane_t1_ParamLimits

0xc847,	// (0x0003d347) cntbar_detail_pane_t1

0xc8c7,	// (0x0003d3c7) cntbar_detail_list_event_pane_g3_ParamLimits

0xc8c7,	// (0x0003d3c7) cntbar_detail_list_event_pane_g3

0xc8df,	// (0x0003d3df) cntbar_detail_list_event_pane_g4_ParamLimits

0xc8df,	// (0x0003d3df) cntbar_detail_list_event_pane_g4

0xc8f7,	// (0x0003d3f7) cntbar_detail_list_event_pane_g5_ParamLimits

0xc8f7,	// (0x0003d3f7) cntbar_detail_list_event_pane_g5

0xc90f,	// (0x0003d40f) cntbar_detail_list_event_pane_g6_ParamLimits

0xc90f,	// (0x0003d40f) cntbar_detail_list_event_pane_g6

0xc953,	// (0x0003d453) cntbar_detail_list_event_pane_t3_ParamLimits

0xc953,	// (0x0003d453) cntbar_detail_list_event_pane_t3

0xc965,	// (0x0003d465) popup_notif_wgt_window_ParamLimits

0xc965,	// (0x0003d465) popup_notif_wgt_window

0xc975,	// (0x0003d475) popup_submenu_window_cp01_ParamLimits

0xc975,	// (0x0003d475) popup_submenu_window_cp01

0xdd90,	// (0x0003e890) bg_popup_window_pane_cp10

0x3a12,	// (0x00034512) listscroll_notif_wgt_pane

0x3a24,	// (0x00034524) list_notif_wgt_window

0x3a2d,	// (0x0003452d) scroll_pane_cp033

0xc985,	// (0x0003d485) list_notif_wgt_row_pane_ParamLimits

0xc985,	// (0x0003d485) list_notif_wgt_row_pane

0x3a36,	// (0x00034536) aid_size_list_notif_wgt_del

0x3a43,	// (0x00034543) list_notif_wgt_row_pane_g1

0x3a4f,	// (0x0003454f) list_notif_wgt_row_pane_g2

0x3a5e,	// (0x0003455e) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x000408ab) list_notif_wgt_row_pane_g

0x3a6b,	// (0x0003456b) list_notif_wgt_row_pane_t1

0x3a81,	// (0x00034581) list_notif_wgt_row_pane_t2

0x3a93,	// (0x00034593) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x000408b2) list_notif_wgt_row_pane_t

0x21f3,	// (0x00032cf3) list_recal_day_event_pane_g1

0x3aa5,	// (0x000345a5) list_recal_day_event_pane_t1

0xd44a,	// (0x0003df4a) bg_button_pane_cp045

0xc999,	// (0x0003d499) cntbar_detail_btn_pane_t1

0xf01a,	// (0x0003fb1a) main_callh_pane_ParamLimits

0xf01a,	// (0x0003fb1a) main_callh_pane

0xd44a,	// (0x0003df4a) main_coverflow0_pane

0xd44a,	// (0x0003df4a) main_wgtman_pane

0xbe6e,	// (0x0003c96e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbe6e,	// (0x0003c96e) main_fs_bigclock_unlock_btn_pane

0xc36e,	// (0x0003ce6e) bg_button_pane_cp16

0xc37e,	// (0x0003ce7e) cell_tport_appsw_pane_g3

0xc9a7,	// (0x0003d4a7) cf0_flow_pane_ParamLimits

0xc9a7,	// (0x0003d4a7) cf0_flow_pane

0x3ab4,	// (0x000345b4) listscroll_cf0_pane

0x3abf,	// (0x000345bf) main_cf0_pane_g1

0xc9b6,	// (0x0003d4b6) main_cf0_pane_t1_ParamLimits

0xc9b6,	// (0x0003d4b6) main_cf0_pane_t1

0xc9ca,	// (0x0003d4ca) main_cf0_pane_t2_ParamLimits

0xc9ca,	// (0x0003d4ca) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x000408be) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x000408be) main_cf0_pane_t

0x3ad1,	// (0x000345d1) scroll_pane_cp11

0xc9de,	// (0x0003d4de) cf0_flow_pane_g1

0xc9e6,	// (0x0003d4e6) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x000408c3) cf0_flow_pane_g

0xc9ee,	// (0x0003d4ee) cf0_flow_pane_t1

0xd44a,	// (0x0003df4a) main_call6_pane

0xd44a,	// (0x0003df4a) main_calllock_pane

0xc9fc,	// (0x0003d4fc) call6_btn_grp_pane_ParamLimits

0xc9fc,	// (0x0003d4fc) call6_btn_grp_pane

0xca09,	// (0x0003d509) call6_pane_g1_ParamLimits

0xca09,	// (0x0003d509) call6_pane_g1

0xca19,	// (0x0003d519) popup_call6_1st_window_ParamLimits

0xca19,	// (0x0003d519) popup_call6_1st_window

0xca29,	// (0x0003d529) popup_call6_2nd_window_ParamLimits

0xca29,	// (0x0003d529) popup_call6_2nd_window

0xca39,	// (0x0003d539) cell_call6_btn_pane_ParamLimits

0xca39,	// (0x0003d539) cell_call6_btn_pane

0xdd90,	// (0x0003e890) bg_popup_call2_in_pane_cp03

0x3adc,	// (0x000345dc) popup_call6_1st_window_g1

0x3ae4,	// (0x000345e4) popup_call6_1st_window_g2

0x3aec,	// (0x000345ec) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x000408c8) popup_call6_1st_window_g

0x3af4,	// (0x000345f4) popup_call6_1st_window_t1

0x3b03,	// (0x00034603) popup_call6_1st_window_t2

0x3b13,	// (0x00034613) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x000408cf) popup_call6_1st_window_t

0xdd90,	// (0x0003e890) bg_popup_call2_in_pane_cp04

0x3b23,	// (0x00034623) popup_call6_2nd_window_g1

0x3b2b,	// (0x0003462b) popup_call6_2nd_window_g2

0x3b33,	// (0x00034633) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x000408d6) popup_call6_2nd_window_g

0x3b3b,	// (0x0003463b) popup_call6_2nd_window_t1

0xd44a,	// (0x0003df4a) bg_button_pane_cp15

0x3b99,	// (0x00034699) cell_call6_btn_pane_g1

0xca4a,	// (0x0003d54a) cell_call6_btn_pane_t1

0xca59,	// (0x0003d559) listscroll_wgtman_pane_ParamLimits

0xca59,	// (0x0003d559) listscroll_wgtman_pane

0xca75,	// (0x0003d575) wgtman_btn_pane_ParamLimits

0xca75,	// (0x0003d575) wgtman_btn_pane

0xe595,	// (0x0003f095) aid_scroll_copy1

0x3b62,	// (0x00034662) list_wgtman_pane

0xcaaa,	// (0x0003d5aa) wgtman_btn_pane_g1_ParamLimits

0xcaaa,	// (0x0003d5aa) wgtman_btn_pane_g1

0xcad2,	// (0x0003d5d2) wgtman_btn_pane_t1_ParamLimits

0xcad2,	// (0x0003d5d2) wgtman_btn_pane_t1

0x3b6c,	// (0x0003466c) wgtman_btn_pane_t2_ParamLimits

0x3b6c,	// (0x0003466c) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x000408dd) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x000408dd) wgtman_btn_pane_t

0xcb09,	// (0x0003d609) listrow_wgtman_pane_ParamLimits

0xcb09,	// (0x0003d609) listrow_wgtman_pane

0xcb20,	// (0x0003d620) listrow_wgtman_pane_g1

0xcb2d,	// (0x0003d62d) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x000408e2) listrow_wgtman_pane_g

0x582e,	// (0x0003632e) listrow_wgtman_pane_t1

0x5846,	// (0x00036346) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x000408e7) listrow_wgtman_pane_t

0x586c,	// (0x0003636c) wait_bar_pane_cp09

0x3b83,	// (0x00034683) main_calllock_btn_pane

0x3b8d,	// (0x0003468d) main_calllock_pane_g1

0xd44a,	// (0x0003df4a) bg_button_pane_cp17

0x3b99,	// (0x00034699) main_calllock_btn_pane_g1

0x3ba2,	// (0x000346a2) main_calllock_btn_pane_t1

0xd44a,	// (0x0003df4a) main_dialer3_pane

0xd44a,	// (0x0003df4a) main_fmrd2_pane

0xddc6,	// (0x0003e8c6) main_fs_bigclock_unlock_btn_pane_g1

0xcb53,	// (0x0003d653) main_fs_bigclock_unlock_btn_pane_t1

0xcb61,	// (0x0003d661) area_fmrd2_info_pane_ParamLimits

0xcb61,	// (0x0003d661) area_fmrd2_info_pane

0xcb6d,	// (0x0003d66d) area_fmrd2_visual_pane_ParamLimits

0xcb6d,	// (0x0003d66d) area_fmrd2_visual_pane

0xcb7b,	// (0x0003d67b) fmrd2_indi_pane_ParamLimits

0xcb7b,	// (0x0003d67b) fmrd2_indi_pane

0xcb88,	// (0x0003d688) area_fmrd2_visual_pane_g1

0xcb90,	// (0x0003d690) area_fmrd2_visual_pane_t1

0xcba0,	// (0x0003d6a0) area_fmrd2_visual_pane_t2

0xcbb0,	// (0x0003d6b0) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x000408f1) area_fmrd2_visual_pane_t

0xcbc0,	// (0x0003d6c0) area_fmrd2_info_pane_g1

0xcbc8,	// (0x0003d6c8) area_fmrd2_info_pane_t1

0xcbd8,	// (0x0003d6d8) area_fmrd2_info_pane_t2

0xcbe8,	// (0x0003d6e8) area_fmrd2_info_pane_t3

0xcbf8,	// (0x0003d6f8) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x000408f8) area_fmrd2_info_pane_t

0xcc08,	// (0x0003d708) fmrd2_indi_pane_t1

0xcc18,	// (0x0003d718) fmrd2_indi_pane_t2

0xcc28,	// (0x0003d728) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x00040901) fmrd2_indi_pane_t

0xbef6,	// (0x0003c9f6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xbef6,	// (0x0003c9f6) list_single_fs_bigclock_indicator_pane_g5

0xbfab,	// (0x0003caab) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xbfab,	// (0x0003caab) list_single_fs_bigclock_indicator_pane_t5

0xc4c1,	// (0x0003cfc1) aid_cell_bcale_month_pane_ParamLimits

0xc4c1,	// (0x0003cfc1) aid_cell_bcale_month_pane

0xc4df,	// (0x0003cfdf) bcale_month_pane_ParamLimits

0xc4df,	// (0x0003cfdf) bcale_month_pane

0xc4fd,	// (0x0003cffd) bcale_preview_pane_ParamLimits

0xc4fd,	// (0x0003cffd) bcale_preview_pane

0x391f,	// (0x0003441f) list_single_fs_bigclock_pane_t1_ParamLimits

0x393e,	// (0x0003443e) list_single_fs_bigclock_pane_t2_ParamLimits

0x393e,	// (0x0003443e) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x0004087c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x0004087c) list_single_fs_bigclock_pane_t

0xcb4b,	// (0x0003d64b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x000408ec) main_fs_bigclock_unlock_btn_pane_g

0xcc38,	// (0x0003d738) aid_dia3_key_size_ParamLimits

0xcc38,	// (0x0003d738) aid_dia3_key_size

0xcc44,	// (0x0003d744) aid_dia3_listrow_size_ParamLimits

0xcc44,	// (0x0003d744) aid_dia3_listrow_size

0xcc54,	// (0x0003d754) dia3_keypad_fun_pane_ParamLimits

0xcc54,	// (0x0003d754) dia3_keypad_fun_pane

0xcc64,	// (0x0003d764) dia3_keypad_num_pane_ParamLimits

0xcc64,	// (0x0003d764) dia3_keypad_num_pane

0xcc74,	// (0x0003d774) dia3_listscroll_pane_ParamLimits

0xcc74,	// (0x0003d774) dia3_listscroll_pane

0xcc82,	// (0x0003d782) dia3_numentry_pane_ParamLimits

0xcc82,	// (0x0003d782) dia3_numentry_pane

0x3bb1,	// (0x000346b1) dia3_list_pane

0xcc90,	// (0x0003d790) scroll_pane_cp12

0xd44a,	// (0x0003df4a) bg_dia3_numentry_pane

0xcc9b,	// (0x0003d79b) dia3_numentry_pane_t1

0xccaa,	// (0x0003d7aa) cell_dia3_key_num_pane

0xccb2,	// (0x0003d7b2) cell_dia3_key0_fun_pane_ParamLimits

0xccb2,	// (0x0003d7b2) cell_dia3_key0_fun_pane

0xccbf,	// (0x0003d7bf) cell_dia3_key1_fun_pane_ParamLimits

0xccbf,	// (0x0003d7bf) cell_dia3_key1_fun_pane

0xcccc,	// (0x0003d7cc) dia3_listrow_pane

0x2c21,	// (0x00033721) bg_dia3_numentry_pane_g1

0xd44a,	// (0x0003df4a) bg_button_pane_cp21

0xccd9,	// (0x0003d7d9) cell_dia3_key_num_pane_t1

0xcce7,	// (0x0003d7e7) cell_dia3_key_num_pane_t2

0xccf6,	// (0x0003d7f6) cell_dia3_key_num_pane_t3

0xcd05,	// (0x0003d805) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x00040908) cell_dia3_key_num_pane_t

0xd44a,	// (0x0003df4a) bg_button_pane_cp19

0xcd14,	// (0x0003d814) cell_dia3_key0_fun_pane_g1

0xd44a,	// (0x0003df4a) bg_button_pane_cp20

0xcd1c,	// (0x0003d81c) cell_dia3_key1_fun_pane_g1

0xcd24,	// (0x0003d824) area_left_week_number_pane

0xcd37,	// (0x0003d837) area_top_day_name_pane

0xcd45,	// (0x0003d845) frame_month_view_pane

0x3bbc,	// (0x000346bc) grid_month_view_pane

0xcd5a,	// (0x0003d85a) cell_top_day_name_pane_ParamLimits

0xcd5a,	// (0x0003d85a) cell_top_day_name_pane

0xcd76,	// (0x0003d876) cell_area_left_week_number_pane_ParamLimits

0xcd76,	// (0x0003d876) cell_area_left_week_number_pane

0xcd97,	// (0x0003d897) cell_month_view_pane_ParamLimits

0xcd97,	// (0x0003d897) cell_month_view_pane

0x3bca,	// (0x000346ca) frm_month_g1

0xcdc3,	// (0x0003d8c3) frm_month_g2

0xcdd4,	// (0x0003d8d4) frm_month_g3

0xcde5,	// (0x0003d8e5) frm_month_g4

0xcdf6,	// (0x0003d8f6) frm_month_g5

0xce07,	// (0x0003d907) frm_month_g6

0xce1a,	// (0x0003d91a) frm_month_g7

0x3bd7,	// (0x000346d7) frm_month_g8

0xce2d,	// (0x0003d92d) frm_month_g9

0xce3a,	// (0x0003d93a) frm_month_g10

0xce47,	// (0x0003d947) frm_month_g11

0xce54,	// (0x0003d954) frm_month_g12

0xce61,	// (0x0003d961) frm_month_g13

0xce70,	// (0x0003d970) frm_month_g14

0xce7f,	// (0x0003d97f) frm_month_g15

0xce8e,	// (0x0003d98e) frm_month_g16

0x000f,

0xfe11,	// (0x00040911) frm_month_g

0x3be4,	// (0x000346e4) cell_top_day_name_pane_t1

0xce9d,	// (0x0003d99d) cell_area_left_week_number_pane_g1

0xceac,	// (0x0003d9ac) cell_area_left_week_number_pane_t1

0xdb80,	// (0x0003e680) cell_month_view_pane_g1

0xcec2,	// (0x0003d9c2) cell_month_view_pane_t1

0xd44a,	// (0x0003df4a) main_fps_pane

0x3081,	// (0x00033b81) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3081,	// (0x00033b81) cmail_ddmenu_btn02_pane_cp1

0x309d,	// (0x00033b9d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x309d,	// (0x00033b9d) cmail_ddmenu_btn02_pane_cp2

0xc6dd,	// (0x0003d1dd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc6dd,	// (0x0003d1dd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x0004082f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x0004082f) cmail_ddmenu_btn02_pane_g

0xc6fb,	// (0x0003d1fb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc6fb,	// (0x0003d1fb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x00040834) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x00040834) cmail_ddmenu_btn02_pane_t

0xced8,	// (0x0003d9d8) fps_text_pane_ParamLimits

0xced8,	// (0x0003d9d8) fps_text_pane

0xcee5,	// (0x0003d9e5) main_fps_pane_g1_ParamLimits

0xcee5,	// (0x0003d9e5) main_fps_pane_g1

0xcef1,	// (0x0003d9f1) wait_bar_pane_cp010_ParamLimits

0xcef1,	// (0x0003d9f1) wait_bar_pane_cp010

0xcefd,	// (0x0003d9fd) fps_text_pane_t1_ParamLimits

0xcefd,	// (0x0003d9fd) fps_text_pane_t1

0xa2c3,	// (0x0003adc3) cam4_image_uncrop_pane_g1

0xa2cc,	// (0x0003adcc) cam4_image_uncrop_pane_g2

0xa2d5,	// (0x0003add5) cam4_image_uncrop_pane_g3

0xa2de,	// (0x0003adde) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x0004037a) cam4_image_uncrop_pane_g

0xcccc,	// (0x0003d7cc) dia3_listrow_pane_ParamLimits

0xd44a,	// (0x0003df4a) main_phob2_pane

0xc350,	// (0x0003ce50) cell_tport_appsw_pane_cp02_ParamLimits

0xc350,	// (0x0003ce50) cell_tport_appsw_pane_cp02

0xc35f,	// (0x0003ce5f) cell_tport_appsw_pane_cp03_ParamLimits

0xc35f,	// (0x0003ce5f) cell_tport_appsw_pane_cp03

0xd44a,	// (0x0003df4a) phob2_contact_card_pane

0xd44a,	// (0x0003df4a) phob2_listscroll_pane

0x3bf7,	// (0x000346f7) phob2_list_pane

0x3bff,	// (0x000346ff) scroll_pane_cp034

0xcf16,	// (0x0003da16) phob2_cc_data_pane_ParamLimits

0xcf16,	// (0x0003da16) phob2_cc_data_pane

0xcf2d,	// (0x0003da2d) phob2_cc_listscroll_pane_ParamLimits

0xcf2d,	// (0x0003da2d) phob2_cc_listscroll_pane

0xcb09,	// (0x0003d609) list_double_large_graphic_phob2_pane_ParamLimits

0xcb09,	// (0x0003d609) list_double_large_graphic_phob2_pane

0xcf49,	// (0x0003da49) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xcf49,	// (0x0003da49) list_double_large_graphic_phob2_pane_g1

0x587e,	// (0x0003637e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x587e,	// (0x0003637e) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x00040932) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x00040932) list_double_large_graphic_phob2_pane_g

0x58a4,	// (0x000363a4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x58a4,	// (0x000363a4) list_double_large_graphic_phob2_pane_t1

0x58b9,	// (0x000363b9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x58b9,	// (0x000363b9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x0004093b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x0004093b) list_double_large_graphic_phob2_pane_t

0xd44a,	// (0x0003df4a) list_highlight_pane_cp024

0xcf56,	// (0x0003da56) phob2_cc_button_pane

0xcf5e,	// (0x0003da5e) phob2_cc_data_pane_g1_ParamLimits

0xcf5e,	// (0x0003da5e) phob2_cc_data_pane_g1

0xcf73,	// (0x0003da73) phob2_cc_data_pane_g2_ParamLimits

0xcf73,	// (0x0003da73) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x00040940) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x00040940) phob2_cc_data_pane_g

0xcf83,	// (0x0003da83) phob2_cc_data_pane_t1_ParamLimits

0xcf83,	// (0x0003da83) phob2_cc_data_pane_t1

0xcf9c,	// (0x0003da9c) phob2_cc_data_pane_t2_ParamLimits

0xcf9c,	// (0x0003da9c) phob2_cc_data_pane_t2

0xcfb5,	// (0x0003dab5) phob2_cc_data_pane_t3_ParamLimits

0xcfb5,	// (0x0003dab5) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x00040945) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x00040945) phob2_cc_data_pane_t

0x3c07,	// (0x00034707) phob2_cc_list_pane_ParamLimits

0x3c07,	// (0x00034707) phob2_cc_list_pane

0x228a,	// (0x00032d8a) scroll_pane_cp035_ParamLimits

0x228a,	// (0x00032d8a) scroll_pane_cp035

0xdb27,	// (0x0003e627) bg_button_pane_cp033

0x3c13,	// (0x00034713) phob2_cc_button_pane_g1

0x3c1f,	// (0x0003471f) phob2_cc_button_pane_t1

0x3c34,	// (0x00034734) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x0004094c) phob2_cc_button_pane_t

0xcfce,	// (0x0003dace) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xcfce,	// (0x0003dace) list_double_large_graphic_phob2_cc_pane

0xd01d,	// (0x0003db1d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd01d,	// (0x0003db1d) list_double_large_graphic_phob2_cc_pane_g1

0x58ce,	// (0x000363ce) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x58ce,	// (0x000363ce) list_double_large_graphic_phob2_cc_pane_g2

0x58da,	// (0x000363da) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x58da,	// (0x000363da) list_double_large_graphic_phob2_cc_pane_g3

0x58e6,	// (0x000363e6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x58e6,	// (0x000363e6) list_double_large_graphic_phob2_cc_pane_g4

0x58f2,	// (0x000363f2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x58f2,	// (0x000363f2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x00040951) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x00040951) list_double_large_graphic_phob2_cc_pane_g

0x58fe,	// (0x000363fe) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x58fe,	// (0x000363fe) list_double_large_graphic_phob2_cc_pane_t1

0x5927,	// (0x00036427) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5927,	// (0x00036427) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x0004095c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x0004095c) list_double_large_graphic_phob2_cc_pane_t

0x3c46,	// (0x00034746) list_highlight_pane_cp025_ParamLimits

0x3c46,	// (0x00034746) list_highlight_pane_cp025

0xdb27,	// (0x0003e627) bg_button_pane_cp033_ParamLimits

0x3c13,	// (0x00034713) phob2_cc_button_pane_g1_ParamLimits

0x3c1f,	// (0x0003471f) phob2_cc_button_pane_t1_ParamLimits

0x3c34,	// (0x00034734) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x0004094c) phob2_cc_button_pane_t_ParamLimits

0x5c49,	// (0x00036749) popup_wgtman_window

0x206c,	// (0x00032b6c) scroll_pane_cp038

0xca92,	// (0x0003d592) wgtman_btn_pane_cp_01_ParamLimits

0xca92,	// (0x0003d592) wgtman_btn_pane_cp_01

0x3c54,	// (0x00034754) wgtman_content_pane

0x3c5d,	// (0x0003475d) wgtman_heading_pane

0xd44a,	// (0x0003df4a) bg_heading_pane_cp02

0x3c66,	// (0x00034766) wgtman_heading_pane_g1

0x3c6e,	// (0x0003476e) wgtman_heading_pane_t1

0x3c7c,	// (0x0003477c) scroll_pane_cp036

0x3c84,	// (0x00034784) wgtman_list_pane

0x2f35,	// (0x00033a35) wgtman_list_pane_t1_ParamLimits

0x2f35,	// (0x00033a35) wgtman_list_pane_t1

0xa220,	// (0x0003ad20) cam4_grid_pane

0x4ed9,	// (0x000359d9) bg_button_pane_cp015_ParamLimits

0xaed0,	// (0x0003b9d0) bg_button_pane_cp016_ParamLimits

0xaee3,	// (0x0003b9e3) bg_button_pane_cp017_ParamLimits

0x4f1d,	// (0x00035a1d) popup_vitu2_query_window_g3_ParamLimits

0x4f1d,	// (0x00035a1d) popup_vitu2_query_window_g3

0x4f96,	// (0x00035a96) popup_vitu2_query_window_t6_ParamLimits

0x4f96,	// (0x00035a96) popup_vitu2_query_window_t6

0x4fc1,	// (0x00035ac1) popup_vitu2_query_window_t7_ParamLimits

0x4fc1,	// (0x00035ac1) popup_vitu2_query_window_t7

0x1dce,	// (0x000328ce) cam4_grid_pane_g1

0x1dd7,	// (0x000328d7) cam4_grid_pane_g2

0x3c8c,	// (0x0003478c) cam4_grid_pane_g3

0x3c95,	// (0x00034795) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x00040961) cam4_grid_pane_g

0x691b,	// (0x0003741b) aid_placing_vt_slider_lsc_ParamLimits

0x6c4e,	// (0x0003774e) vidtel_button_pane_ParamLimits

0x6c4e,	// (0x0003774e) vidtel_button_pane

0xd44a,	// (0x0003df4a) bg_button_pane_cp034

0x3ca0,	// (0x000347a0) vidtel_button_pane_g1

0x3ca8,	// (0x000347a8) vidtel_button_pane_t1

0x2195,	// (0x00032c95) aid_size_vtel_slider_touch

0x228a,	// (0x00032d8a) scroll_pane_cp039

0xbb9d,	// (0x0003c69d) ncim_query_button_pane_cp01_ParamLimits

0xbbbc,	// (0x0003c6bc) ncimui_query_pane_g1_ParamLimits

0xdb27,	// (0x0003e627) input_focus_pane_cp012_ParamLimits

0x2c5f,	// (0x0003375f) ncim_query_entry_pane_t1_ParamLimits

0x228a,	// (0x00032d8a) scroll_pane_cp039_ParamLimits

0x7dec,	// (0x000388ec) navi_pane_bcale_mc_g1

0x7df4,	// (0x000388f4) navi_pane_bcale_mc_t1

0x30d3,	// (0x00033bd3) main_sp_fs_email_pane_g1

0x30df,	// (0x00033bdf) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x00040764) main_sp_fs_email_pane_g

0x35aa,	// (0x000340aa) list_single_cale_mrui_row_pane_g3_ParamLimits

0x35aa,	// (0x000340aa) list_single_cale_mrui_row_pane_g3

0x5782,	// (0x00036282) list_single_recal_day_pane_g5_event_pane

0x5798,	// (0x00036298) list_single_recal_day_pane_g7

0x3cbe,	// (0x000347be) list_recal_day_event_pane_cp01

0x3cc7,	// (0x000347c7) list_recal_vselct_arw_lo_pane_cp01

0x3ccf,	// (0x000347cf) list_recal_vselct_arw_up_pane_cp01

0x3cd7,	// (0x000347d7) list_recal_vselct_pane_cp01

0x21f3,	// (0x00032cf3) list_recal_day_event_pane_cp01_g1

0x5950,	// (0x00036450) list_recal_day_event_pane_cp01_t1

0x57a0,	// (0x000362a0) list_single_recal_day_pane_t1_ParamLimits

0x57b2,	// (0x000362b2) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x00040844) list_single_recal_day_pane_t_ParamLimits

0xdb05,	// (0x0003e605) bg_notes_pane_ParamLimits

0xdbd0,	// (0x0003e6d0) list_notes_pane_ParamLimits

0x5e12,	// (0x00036912) scroll_pane_cp06_ParamLimits

0xdbf2,	// (0x0003e6f2) main_notes_pane_ParamLimits

0xdb27,	// (0x0003e627) main_welc_pane

0xd03d,	// (0x0003db3d) main_welc_body_pane_ParamLimits

0xd03d,	// (0x0003db3d) main_welc_body_pane

0xd058,	// (0x0003db58) main_welc_opti_pane_ParamLimits

0xd058,	// (0x0003db58) main_welc_opti_pane

0xd0b9,	// (0x0003dbb9) main_welc_pane_t1_ParamLimits

0xd0b9,	// (0x0003dbb9) main_welc_pane_t1

0xd1df,	// (0x0003dcdf) main_welc_body_row_pane_ParamLimits

0xd1df,	// (0x0003dcdf) main_welc_body_row_pane

0xd454,	// (0x0003df54) main_welc_opti_row_pane_ParamLimits

0xd454,	// (0x0003df54) main_welc_opti_row_pane

0x3d0e,	// (0x0003480e) main_welc_opti_row_pane_g1

0xd1f9,	// (0x0003dcf9) main_welc_opti_row_pane_t1

0x3d16,	// (0x00034816) main_welc_body_row_pane_t1

0x3a1c,	// (0x0003451c) popup_notif_wgt_heading_pane

0x3a36,	// (0x00034536) aid_size_list_notif_wgt_del_ParamLimits

0x3a43,	// (0x00034543) list_notif_wgt_row_pane_g1_ParamLimits

0x3a4f,	// (0x0003454f) list_notif_wgt_row_pane_g2_ParamLimits

0x3a5e,	// (0x0003455e) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x000408ab) list_notif_wgt_row_pane_g_ParamLimits

0x3a6b,	// (0x0003456b) list_notif_wgt_row_pane_t1_ParamLimits

0x3a81,	// (0x00034581) list_notif_wgt_row_pane_t2_ParamLimits

0x3a93,	// (0x00034593) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x000408b2) list_notif_wgt_row_pane_t_ParamLimits

0xcb20,	// (0x0003d620) listrow_wgtman_pane_g1_ParamLimits

0xcb2d,	// (0x0003d62d) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x000408e2) listrow_wgtman_pane_g_ParamLimits

0x582e,	// (0x0003632e) listrow_wgtman_pane_t1_ParamLimits

0x5846,	// (0x00036346) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x000408e7) listrow_wgtman_pane_t_ParamLimits

0x586c,	// (0x0003636c) wait_bar_pane_cp09_ParamLimits

0xd44a,	// (0x0003df4a) bg_popup_heading_pane_cp02

0x3d25,	// (0x00034825) popup_notif_wgt_heading_pane_g1

0x3d2d,	// (0x0003482d) popup_notif_wgt_heading_pane_t1

0xd44a,	// (0x0003df4a) main_vids_pane

0xd44a,	// (0x0003df4a) vids_listscroll_pane

0xd208,	// (0x0003dd08) scroll_pane_cp040

0xd44a,	// (0x0003df4a) vids_list_pane

0xd213,	// (0x0003dd13) vids_list_double_pane_ParamLimits

0xd213,	// (0x0003dd13) vids_list_double_pane

0xd227,	// (0x0003dd27) vids_list_double_pane_g1

0xd230,	// (0x0003dd30) vids_list_double_pane_t1

0xd240,	// (0x0003dd40) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x00040980) vids_list_double_pane_t

0xdb27,	// (0x0003e627) main_ncimui_pane_ParamLimits

0xb9de,	// (0x0003c4de) main_ncimui_pane_g1_ParamLimits

0xb9ec,	// (0x0003c4ec) main_ncimui_pane_g2_ParamLimits

0xb9ec,	// (0x0003c4ec) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x00040665) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x00040665) main_ncimui_pane_g

0xd073,	// (0x0003db73) main_welc_pane_g1_ParamLimits

0xd073,	// (0x0003db73) main_welc_pane_g1

0xd07f,	// (0x0003db7f) main_welc_pane_g2_ParamLimits

0xd07f,	// (0x0003db7f) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x0004096a) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x0004096a) main_welc_pane_g

0xdb05,	// (0x0003e605) listscroll_mce_pane_ParamLimits

0x7eb6,	// (0x000389b6) wait_bar_pane_cp10

0x0d1b,	// (0x0003181b) main_cale_day_pane_ParamLimits

0x0d1b,	// (0x0003181b) main_cale_week_pane_ParamLimits

0xdb05,	// (0x0003e605) main_messa_pane_ParamLimits

0x9675,	// (0x0003a175) main_clock2_btn_pane_ParamLimits

0x9675,	// (0x0003a175) main_clock2_btn_pane

0x15f1,	// (0x000320f1) main_clock2_btn_pane_cp01_ParamLimits

0x15f1,	// (0x000320f1) main_clock2_btn_pane_cp01

0x3536,	// (0x00034036) list_cale_mrui_pane_ParamLimits

0x3ac9,	// (0x000345c9) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x000408b9) main_cf0_pane_g

0xcd24,	// (0x0003d824) area_left_week_number_pane_ParamLimits

0xcd37,	// (0x0003d837) area_top_day_name_pane_ParamLimits

0xcd45,	// (0x0003d845) frame_month_view_pane_ParamLimits

0x3bbc,	// (0x000346bc) grid_month_view_pane_ParamLimits

0x3bca,	// (0x000346ca) frm_month_g1_ParamLimits

0xcdc3,	// (0x0003d8c3) frm_month_g2_ParamLimits

0xcdd4,	// (0x0003d8d4) frm_month_g3_ParamLimits

0xcde5,	// (0x0003d8e5) frm_month_g4_ParamLimits

0xcdf6,	// (0x0003d8f6) frm_month_g5_ParamLimits

0xce07,	// (0x0003d907) frm_month_g6_ParamLimits

0xce1a,	// (0x0003d91a) frm_month_g7_ParamLimits

0x3bd7,	// (0x000346d7) frm_month_g8_ParamLimits

0xce2d,	// (0x0003d92d) frm_month_g9_ParamLimits

0xce3a,	// (0x0003d93a) frm_month_g10_ParamLimits

0xce47,	// (0x0003d947) frm_month_g11_ParamLimits

0xce54,	// (0x0003d954) frm_month_g12_ParamLimits

0xce61,	// (0x0003d961) frm_month_g13_ParamLimits

0xce70,	// (0x0003d970) frm_month_g14_ParamLimits

0xce7f,	// (0x0003d97f) frm_month_g15_ParamLimits

0xce8e,	// (0x0003d98e) frm_month_g16_ParamLimits

0xfe11,	// (0x00040911) frm_month_g_ParamLimits

0x3be4,	// (0x000346e4) cell_top_day_name_pane_t1_ParamLimits

0xce9d,	// (0x0003d99d) cell_area_left_week_number_pane_g1_ParamLimits

0xceac,	// (0x0003d9ac) cell_area_left_week_number_pane_t1_ParamLimits

0xdb80,	// (0x0003e680) cell_month_view_pane_g1_ParamLimits

0xcec2,	// (0x0003d9c2) cell_month_view_pane_t1_ParamLimits

0xdafd,	// (0x0003e5fd) main_clock2_btn_pane_g1

0x3d3b,	// (0x0003483b) main_clock2_btn_pane_t1

0xdb27,	// (0x0003e627) listscroll_cmail_pane_ParamLimits

0x30d3,	// (0x00033bd3) main_sp_fs_email_pane_g1_ParamLimits

0x30df,	// (0x00033bdf) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x00040764) main_sp_fs_email_pane_g_ParamLimits

0x36f6,	// (0x000341f6) list_recal_day_pane_ParamLimits

0x3707,	// (0x00034207) mian_recal_day_pane_t1

0x5378,	// (0x00035e78) list_single_dyc_row_text_pane_t4_ParamLimits

0x5378,	// (0x00035e78) list_single_dyc_row_text_pane_t4

0x53b5,	// (0x00035eb5) list_single_dyc_row_text_pane_t5_ParamLimits

0x53b5,	// (0x00035eb5) list_single_dyc_row_text_pane_t5

0x542b,	// (0x00035f2b) list_single_dyc_row_text_pane_t6_ParamLimits

0x542b,	// (0x00035f2b) list_single_dyc_row_text_pane_t6

0x7a13,	// (0x00038513) aid_mgn_list_cale_time_pane

0xdb27,	// (0x0003e627) main_gallery2_pane_ParamLimits

0x1605,	// (0x00032105) main_clock2_pane_cp01_t1

0x1613,	// (0x00032113) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x00040251) main_clock2_pane_cp01_t

0x630e,	// (0x00036e0e) cale_week_scroll_pane_g16_ParamLimits

0x630e,	// (0x00036e0e) cale_week_scroll_pane_g16

0xdd90,	// (0x0003e890) vorec_slider_pane

0x3ca8,	// (0x000347a8) vidtel_button_pane_t1_ParamLimits

0xc75e,	// (0x0003d25e) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc75e,	// (0x0003d25e) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc76d,	// (0x0003d26d) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc76d,	// (0x0003d26d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x00040867) main_fs_bigclock_clock_pane_g_ParamLimits

0xc77d,	// (0x0003d27d) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc792,	// (0x0003d292) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x00040870) main_fs_bigclock_clock_pane_t_ParamLimits

0x8fbd,	// (0x00039abd) main_mup3_lyrics_pane_ParamLimits

0x8fbd,	// (0x00039abd) main_mup3_lyrics_pane

0xd276,	// (0x0003dd76) main_mup3_lyrics_pane_t1_ParamLimits

0xd276,	// (0x0003dd76) main_mup3_lyrics_pane_t1

0x9b95,	// (0x0003a695) aid_main_mp4_pane_t1_area

0x9b9f,	// (0x0003a69f) aid_main_mp4_pane_t2_area

0x9cac,	// (0x0003a7ac) main_mp4_pane_g7_ParamLimits

0x9cac,	// (0x0003a7ac) main_mp4_pane_g7

0x9cb8,	// (0x0003a7b8) main_mp4_pane_g8_ParamLimits

0x9cb8,	// (0x0003a7b8) main_mp4_pane_g8

0xa0c8,	// (0x0003abc8) aid_call6_pane_g1_size

0xcffc,	// (0x0003dafc) list_double_large_graphic_phob2_other_pane_ParamLimits

0xcffc,	// (0x0003dafc) list_double_large_graphic_phob2_other_pane

0xd29d,	// (0x0003dd9d) list_double_large_graphic_phob2_other_pane_g1

0xd44a,	// (0x0003df4a) list_highlight_pane_cp026

0xdb27,	// (0x0003e627) main_welc_pane_ParamLimits

0xc24e,	// (0x0003cd4e) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc24e,	// (0x0003cd4e) main_sp_fs_ctrlbar_pane_g3

0xc268,	// (0x0003cd68) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc268,	// (0x0003cd68) main_sp_fs_ctrlbar_pane_g4

0xc29a,	// (0x0003cd9a) toolbar2_fixed_button_pane_cp01

0xc2a5,	// (0x0003cda5) toolbar2_fixed_button_pane_cp02

0xc2b2,	// (0x0003cdb2) toolbar2_fixed_button_pane_cp03

0xd02e,	// (0x0003db2e) list_welc_entry_pane_ParamLimits

0xd02e,	// (0x0003db2e) list_welc_entry_pane

0xd08d,	// (0x0003db8d) main_welc_pane_g3_ParamLimits

0xd08d,	// (0x0003db8d) main_welc_pane_g3

0xd0d7,	// (0x0003dbd7) main_welc_pane_t2_ParamLimits

0xd0d7,	// (0x0003dbd7) main_welc_pane_t2

0xd0eb,	// (0x0003dbeb) main_welc_pane_t3_ParamLimits

0xd0eb,	// (0x0003dbeb) main_welc_pane_t3

0x0005,

0xfe73,	// (0x00040973) main_welc_pane_t_ParamLimits

0xfe73,	// (0x00040973) main_welc_pane_t

0xd17d,	// (0x0003dc7d) welc_button_pane_ParamLimits

0xd17d,	// (0x0003dc7d) welc_button_pane

0xd1d1,	// (0x0003dcd1) welc_service_logo_pane_ParamLimits

0xd1d1,	// (0x0003dcd1) welc_service_logo_pane

0xd2a5,	// (0x0003dda5) list_single_welc_entry_pane_ParamLimits

0xd2a5,	// (0x0003dda5) list_single_welc_entry_pane

0xd2b6,	// (0x0003ddb6) list_single_welc_entry_pane_g1

0xd2be,	// (0x0003ddbe) list_single_welc_entry_pane_t1

0xd2cc,	// (0x0003ddcc) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x00040985) list_single_welc_entry_pane_t

0xd44a,	// (0x0003df4a) bg_button_pane_cp035

0x3d49,	// (0x00034849) welc_button_pane_t1

0x3d57,	// (0x00034857) welc_service_logo_pane_g1

0x3d60,	// (0x00034860) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x0004098a) welc_service_logo_pane_g

0xd44a,	// (0x0003df4a) main_int_radio_pane

0x2afd,	// (0x000335fd) list_single_fs_dyc_pane_g1

0x588a,	// (0x0003638a) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x588a,	// (0x0003638a) list_double_large_graphic_phob2_pane_g3

0x5896,	// (0x00036396) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x5896,	// (0x00036396) list_double_large_graphic_phob2_pane_g4

0xd2da,	// (0x0003ddda) main_int_radio1_pane_ParamLimits

0xd2da,	// (0x0003ddda) main_int_radio1_pane

0x3d69,	// (0x00034869) find_pane_cp02

0xd2f0,	// (0x0003ddf0) input_focus_pane_cp12_ParamLimits

0xd2f0,	// (0x0003ddf0) input_focus_pane_cp12

0xd2fc,	// (0x0003ddfc) input_focus_pane_cp13_ParamLimits

0xd2fc,	// (0x0003ddfc) input_focus_pane_cp13

0xd314,	// (0x0003de14) input_focus_pane_cp14_ParamLimits

0xd314,	// (0x0003de14) input_focus_pane_cp14

0x3d72,	// (0x00034872) int_radio1_listscroll_pane

0xd32c,	// (0x0003de2c) main_int_radio1_pane_g1_ParamLimits

0xd32c,	// (0x0003de2c) main_int_radio1_pane_g1

0xd338,	// (0x0003de38) main_int_radio1_pane_t1_ParamLimits

0xd338,	// (0x0003de38) main_int_radio1_pane_t1

0xd34a,	// (0x0003de4a) main_int_radio1_pane_t2_ParamLimits

0xd34a,	// (0x0003de4a) main_int_radio1_pane_t2

0xd35e,	// (0x0003de5e) main_int_radio1_pane_t3_ParamLimits

0xd35e,	// (0x0003de5e) main_int_radio1_pane_t3

0xd372,	// (0x0003de72) main_int_radio1_pane_t4_ParamLimits

0xd372,	// (0x0003de72) main_int_radio1_pane_t4

0x3d7c,	// (0x0003487c) main_int_radio1_pane_t5_ParamLimits

0x3d7c,	// (0x0003487c) main_int_radio1_pane_t5

0xd389,	// (0x0003de89) main_int_radio1_pane_t6_ParamLimits

0xd389,	// (0x0003de89) main_int_radio1_pane_t6

0xd39b,	// (0x0003de9b) main_int_radio1_pane_t7_ParamLimits

0xd39b,	// (0x0003de9b) main_int_radio1_pane_t7

0xd3ad,	// (0x0003dead) main_int_radio1_pane_t8_ParamLimits

0xd3ad,	// (0x0003dead) main_int_radio1_pane_t8

0xd3bf,	// (0x0003debf) main_int_radio1_pane_t9_ParamLimits

0xd3bf,	// (0x0003debf) main_int_radio1_pane_t9

0xd3d1,	// (0x0003ded1) main_int_radio1_pane_t10_ParamLimits

0xd3d1,	// (0x0003ded1) main_int_radio1_pane_t10

0xd402,	// (0x0003df02) main_int_radio1_pane_t11_ParamLimits

0xd402,	// (0x0003df02) main_int_radio1_pane_t11

0xd433,	// (0x0003df33) main_int_radio1_pane_t12_ParamLimits

0xd433,	// (0x0003df33) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x0004098f) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x0004098f) main_int_radio1_pane_t

0x3bf7,	// (0x000346f7) int_radio_list_pane

0x3bff,	// (0x000346ff) scroll_pane_cp037

0x3d8e,	// (0x0003488e) list_double_large_graphic_int_radio_pane_ParamLimits

0x3d8e,	// (0x0003488e) list_double_large_graphic_int_radio_pane

0x3da2,	// (0x000348a2) list_double_large_graphic_int_radio_pane_g1

0x595e,	// (0x0003645e) list_double_large_graphic_int_radio_pane_t1

0x596c,	// (0x0003646c) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x000409a8) list_double_large_graphic_int_radio_pane_t

0xd44a,	// (0x0003df4a) list_highlight_pane_cp027

0x3cef,	// (0x000347ef) main_button_pane_4

0xd09d,	// (0x0003db9d) main_welc_pane_g4_ParamLimits

0xd09d,	// (0x0003db9d) main_welc_pane_g4

0xd0ff,	// (0x0003dbff) main_welc_pane_t4_ParamLimits

0xd0ff,	// (0x0003dbff) main_welc_pane_t4

0xd111,	// (0x0003dc11) main_welc_pane_t5_ParamLimits

0xd111,	// (0x0003dc11) main_welc_pane_t5

0xd149,	// (0x0003dc49) main_welc_pane_t6_ParamLimits

0xd149,	// (0x0003dc49) main_welc_pane_t6

0xd18b,	// (0x0003dc8b) welc_button_pane_2_ParamLimits

0xd18b,	// (0x0003dc8b) welc_button_pane_2

0xd1a5,	// (0x0003dca5) welc_button_pane_3_ParamLimits

0xd1a5,	// (0x0003dca5) welc_button_pane_3

0x3cef,	// (0x000347ef) welc_button_pane_4

0xd1c1,	// (0x0003dcc1) welc_button_pane_5_ParamLimits

0xd1c1,	// (0x0003dcc1) welc_button_pane_5

0x89a3,	// (0x000394a3) main_popup_welc_pane

0x3dc7,	// (0x000348c7) main_welc_sk_g3

0x3dd1,	// (0x000348d1) main_welc_sk_g4

0x3ddb,	// (0x000348db) main_welc_sk_t3

0x3deb,	// (0x000348eb) main_welc_sk_t4

0x3dfb,	// (0x000348fb) popup_welc_pane_t4

0x3e09,	// (0x00034909) popup_welc_pane_t5

0x3e17,	// (0x00034917) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
